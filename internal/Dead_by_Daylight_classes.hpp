namespace off {
	constexpr auto GNames = 0x9cf2f40;
	constexpr auto GObjects = 0x9d3ed20;
	constexpr auto GWorld = 0x9ec2510;
}
struct UDesperateMeasures {
	float _healAndUnhookMultiplier[0x3]; // 0x3d0
	int32_t _nbInjuredHookedOrDyingSurvivors; // 0x3dc
};

struct UIntervalGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x40
	UTransformProxy* TransformProxy; // 0x58
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x60
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x70
	UGizmoComponentAxisSource* AxisYSource; // 0x98
	UGizmoComponentAxisSource* AxisZSource; // 0xa0
};

struct UMovieSceneIntegerSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UAISkill_InteractionTarget_ShockTherapy {
	float TargetToEvadePointMaxDistance; // 0x220
	float CastShockTimeBuffer; // 0x224
};

struct UIsPlayerPerformingInteraction {
	FGameplayTagContainer _interactionSemantics; // 0xe8
};

struct UTwinJumpAttackSuccessSubstate {
	FDBDTunableRowHandle _jumpSucceedAttachedCooldownTime; // 0x118
	FDBDTunableRowHandle _jumpSucceedNotAttachedCooldownTime; // 0x140
};

struct UButtonStyleAsset {
	FButtonStyle ButtonStyle; // 0x30
};

struct UUMGHudEditorVersionWidget {
	UButton* VersionButton; // 0x260
	UUMGDragWidget_HudEditor* _onEditWidget; // 0x268
};

struct UHapticFeedbackEffect_Curve {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x30
};

struct ULandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x30
	FGuid LayerGuid; // 0x50
};

struct UBlindingFXComponent {
	FName _blindnessIntensityParameter; // 0xc8
	UCurveFloat* _blindnessMaterialCurve; // 0xd8
	UCurveFloat* _blindnessCurve; // 0xe0
	UPostProcessComponent* _postProcess; // 0xe8
	UMaterialInstanceDynamic* _postProcessMaterial; // 0xf0
};

struct UDisarmBearTrapInteraction {
	float _averageMaxVelocity; // 0x6d8
	float _averageMaxVelocitySquared; // 0x6dc
	FName _updateMontageID; // 0x6e0
	FName _loudNoiseAudibleRangeTunable; // 0x6ec
};

struct UMotionControllerComponent {
	int32_t PlayerIndex; // 0x428
	EControllerHand Hand; // 0x42c
	FName MotionSource; // 0x430
	char bDisableLowLatencyUpdate : 1; // 0x43c
	ETrackingStatus CurrentTrackingStatus; // 0x440
	bool bDisplayDeviceModel; // 0x441
	FName DisplayModelSource; // 0x444
	UStaticMesh* CustomDisplayMesh; // 0x450
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x458
	UPrimitiveComponent* DisplayComponent; // 0x4d0
};

struct UGameplayTagsSettings {
	bool ImportTagsFromConfig; // 0x50
	bool WarnOnInvalidTags; // 0x51
	bool FastReplication; // 0x52
	FString InvalidTagCharacters; // 0x58
	TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x68
	TArray<FSoftObjectPath> GameplayTagTableList; // 0x78
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x88
	TArray<FName> CommonlyReplicatedTags; // 0x98
	int32_t NumBitsForContainerSize; // 0xa8
	int32_t NetIndexFirstBitSegment; // 0xac
	TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xb0
};

struct UBTDecorator_TimeLimit {
	float TimeLimit; // 0x70
};

struct UAtlantaCustomizationTooltipWidget {
	UImage* SmokeImage; // 0x338
	UUMGCustomizationTooltipHeaderWidget* Header; // 0x340
	UUMGCustomizationTooltipContentWidget* Content; // 0x348
};

struct ULiveLinkVirtualSubject {
	ULiveLinkRole* Role; // 0x38
	TArray<FLiveLinkSubjectName> Subjects; // 0x40
	TArray<ULiveLinkFrameTranslator*> FrameTranslators; // 0x50
};

struct UAnimNotify_PlayNiagaraEffect {
	UNiagaraSystem* Template; // 0x40
	FVector LocationOffset; // 0x48
	FRotator RotationOffset; // 0x54
	FVector Scale; // 0x60
	char Attached : 1; // 0x90
	FName SocketName; // 0x94
};

struct UButtonWidgetStyle {
	FButtonStyle ButtonStyle; // 0x38
};

struct UParticleModuleSourceMovement {
	FRawDistributionVector SourceMovementScale; // 0x38
};

struct UMovieSceneLevelVisibilityTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UMovieSceneWidgetMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x70
	FName TrackName; // 0x80
};

struct UPlaneCutToolProperties {
	bool bSnapToWorldGrid; // 0x58
	bool bKeepBothHalves; // 0x59
	float SpacingBetweenHalves; // 0x5c
	bool bFillCutHole; // 0x60
	bool bShowPreview; // 0x61
	bool bFillSpans; // 0x62
};

struct UNiagaraDataInterfaceGrid2D {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
};

struct AGMAdaptiveShadowMapSourceComponentSpawner {
	bool bCreateASMSourceComponentOnBeginPlay; // 0x230
	bool bRemoveCastForCinematicOnlyFlagOnLights; // 0x231
	bool bRemoveLightFunctionMaterialOnLights; // 0x232
	int32_t NumLevelPerSource; // 0x234
	int32_t NumPreGeneratedLevelPerSource; // 0x238
	bool bPreviewOnly; // 0x23c
};

struct AMagicLeapSharedWorldGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x2a8
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2b8
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2c8
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2d8
};

struct ULiveLinkSubjectSettings {
	TArray<ULiveLinkFramePreProcessor*> PreProcessors; // 0x30
	ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x40
	TArray<ULiveLinkFrameTranslator*> Translators; // 0x48
	ULiveLinkRole* Role; // 0x58
};

struct UEnvQueryTest_PathfindingBatch {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x2d0
};

struct UAISkill_Interaction {
	EPawnInputPressTypes inputType; // 0xc0
	EInteractionSkillInputModes InputMode; // 0xc1
	EPawnInputPressTypes CancelInputType; // 0xc2
	EInteractionCancelInputModes CancelInputMode; // 0xc3
	bool AutoLockInput; // 0xc4
	FAIRoll StartRoll; // 0xc8
	FString StartInteractionID; // 0xf0
	FString StopInteractionID; // 0x100
	float MinHoldInputTime; // 0x110
	bool AutoReleaseHoldInputWhenCharged; // 0x114
};

struct UBabysitter {
	float _scratchMarkHidingTime[0x3]; // 0x3d0
	float _hasteEffect[0x3]; // 0x3dc
	float _showAuraTime[0x3]; // 0x3e8
	float _cooldownTime[0x3]; // 0x3f4
};

struct UParticleModuleCameraOffset {
	FRawDistributionFloat CameraOffset; // 0x38
	char bSpawnTimeOnly : 1; // 0x68
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x6c
};

struct UWidgetBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x338
	char bAllowTemplate : 1; // 0x340
	char bAllowDynamicCreation : 1; // 0x340
	char bValidTemplate : 1; // 0x340
	char bTemplateInitialized : 1; // 0x340
	char bCookedTemplate : 1; // 0x340
	char bClassRequiresNativeTick : 1; // 0x340
	TArray<FDelegateRuntimeBinding> Bindings; // 0x348
	TArray<UWidgetAnimation*> Animations; // 0x358
	TArray<FName> NamedSlots; // 0x368
	TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x378
	UUserWidget* Template; // 0x3a8
};

struct UGeneralProjectChunkingSettings {
	int32_t NumberOfPaksInInitialChunk; // 0x30
	int32_t NumberOfPaksInAllChunks; // 0x34
	int32_t LeftoverPakId; // 0x38
	TArray<FPathPak> PakAssignmentPaths; // 0x40
	int32_t AtlantaNumberOfPaksInInitialChunk; // 0x50
	int32_t AtlantaAndroidNumberOfPaksInAllChunks; // 0x54
	int32_t AtlantaIOSNumberOfPaksInAllChunks; // 0x58
	int32_t AtlantaLeftoverPakId; // 0x5c
	TArray<FPathPak> AtlantaPakAssignmentPaths; // 0x60
	TArray<FPathPak> AtlantaAndroidPakAssignmentPaths; // 0x70
	TArray<FPathPak> AtlantaIOSPakAssignmentPaths; // 0x80
};

struct UProgressWidgetStyle {
	FProgressBarStyle ProgressBarStyle; // 0x38
};

struct UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x60
	TArray<UBTService*> Services; // 0x70
	char bApplyDecoratorScope : 1; // 0x90
};

struct UCoreScreenIndicatorsContainerWidget {
	float InactiveThreshold; // 0x2f8
	UCanvasPanel* Container; // 0x300
	UCoreScreenIndicatorWidget* ScreenIndicatorClass; // 0x308
	TMap<FString, UCoreScreenIndicatorWidget*> _screenIndicatorsMap; // 0x310
	TArray<UCoreScreenIndicatorWidget*> _screenIndicatorsPool; // 0x360
};

struct UNiagaraComponent {
	UNiagaraSystem* Asset; // 0x428
	ENiagaraTickBehavior TickBehavior; // 0x430
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x438
	char bForceSolo : 1; // 0x540
	char bAutoDestroy : 1; // 0x56c
	char bRenderingEnabled : 1; // 0x56c
	char bAutoManageAttachment : 1; // 0x56c
	char bAutoAttachWeldSimulatedBodies : 1; // 0x56c
	float MaxTimeBeforeForceUpdateTransform; // 0x570
	FMulticastInlineDelegate OnSystemFinished; // 0x578
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x588
	FName AutoAttachSocketName; // 0x590
	EAttachmentRule AutoAttachLocationRule; // 0x59c
	EAttachmentRule AutoAttachRotationRule; // 0x59d
	EAttachmentRule AutoAttachScaleRule; // 0x59e
};

struct UChestAnimInstance {
	ASearchable* _owningChest; // 0x270
	bool _isOpen; // 0x278
	bool _isBeingPriedOpen; // 0x279
	UInteractionDefinition* _openChestInteraction; // 0x288
};

struct AGeometryCacheActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x230
};

struct UParticleModuleSize_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct ULocalizedOverlays {
	UBasicOverlays* DefaultOverlays; // 0x30
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x38
};

struct ABaseGasCloudProjectile {
	EBombType _gasType; // 0x2b8
	UPoolableProjectileComponent* _poolableProjectile; // 0x2c0
	FDBDTunableRowHandle _gasCloudDuration; // 0x2c8
	FDBDTunableRowHandle _gasCloudGravityScale; // 0x2f0
	FDBDTunableRowHandle _gasCloudBounciness; // 0x318
	FDBDTunableRowHandle _gasCloudFriction; // 0x340
	FDBDTunableRowHandle _dissipateGasCloudTime; // 0x368
	FDBDTunableRowHandle _gasCloudMinimumLifetime; // 0x390
	FDBDTunableRowHandle _gasCloudSimpleCollisionRadius; // 0x3b8
	FDBDTunableRowHandle _gasCloudComplexCollisionRadius; // 0x3e0
	FDBDTunableRowHandle _gasCloudSurvivorDetectionRadius; // 0x408
	FDBDTunableRowHandle _gasCloudDetectionDelay; // 0x430
	FDBDTunableRowHandle _gasCloudCosmeticFadeDuration; // 0x458
	float _overlappingTime; // 0x480
	bool _dissipating; // 0x484
	TArray<ACamperPlayer*> _overlappingSurvivors; // 0x488
	UParticleSystemComponent* _gasParticleSystem; // 0x498
	USphereComponent* _simpleCollider; // 0x4a0
	USphereComponent* _complexCollider; // 0x4a8
	USpherePlayerOverlapComponent* _survivorDetector; // 0x4b0
	UActiveGasCloudTrackerComponent* _activeGasCloudTracker; // 0x4b8
	FGameplayTag _cloudSizeModifierTag; // 0x4c0
	float _cumulativeLifetime; // 0x4d0
};

struct UClothingAssetCommon {
	UPhysicsAsset* PhysicsAsset; // 0x50
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x58
	UClothConfigBase* ClothSharedSimConfig; // 0xa8
	UClothConfigBase* ClothSimConfig; // 0xb0
	UClothConfigBase* ChaosClothSimConfig; // 0xb8
	TArray<UClothLODDataCommon_Legacy*> ClothLodData; // 0xc0
	TArray<FClothLODDataCommon> LODData; // 0xd0
	TArray<int32_t> LodMap; // 0xe0
	TArray<FName> UsedBoneNames; // 0xf0
	TArray<int32_t> UsedBoneIndices; // 0x100
	int32_t ReferenceBoneIndex; // 0x110
	UClothingAssetCustomData* CustomData; // 0x118
	FClothConfig_Legacy ClothConfig; // 0x120
};

struct UArmDetectionFanComponent {
	FName _shoulderBone; // 0x270
	FName _elbowBone; // 0x27c
	FName _handBone; // 0x288
	FName _indexBone; // 0x294
	FName _hipBone; // 0x2a0
};

struct UPhysicsThrusterComponent {
	float ThrustStrength; // 0x210
};

struct UUMGLobbySearchingWidget {
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget; // 0x358
	FText ItemOrPowerText; // 0x360
	FText AddonText; // 0x378
	FText OfferingText; // 0x390
	FText PerksText; // 0x3a8
	FText TextWaitingForPlayers; // 0x3c0
	FText TextEstimatedTimeTitle; // 0x3d8
	UButton* ButtonCancelSearching; // 0x3f0
	UUMGPartySlotsWidget* PartySlots; // 0x3f8
};

struct UDBDRichTextBlock {
	bool _debugPreviewLargeTextState; // 0x6c8
	bool _debugPreviewUndockedState; // 0x6c9
	bool _hasLargeText; // 0x6ca
	FTextBlockOverrideProperties _largeTextProperties; // 0x6d0
	bool _overrideUndockedPropertiesWithLargeText; // 0x719
	bool _hasUndocking; // 0x71a
	FTextBlockOverrideProperties _undockedProperties; // 0x720
};

struct USoleSurvivor {
	float _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3]; // 0x3d0
	TArray<ACamperPlayer*> _otherSurvivors; // 0x3e0
};

struct ULacerationComponent {
	float _laceration; // 0xf0
	UStatusEffect* _onHitSpeedBoost; // 0x100
	FTunableStat _maxLaceration; // 0x130
	FDBDTunableRowHandle _lacerationExplosionDamage; // 0x1b0
	FTunableStat _lacerationRegressionPerSecond; // 0x1d8
	FTunableStat _lacerationRegressionPerSecondWhileRunning; // 0x258
	FDBDTunableRowHandle _speedBoostIntensity; // 0x2d8
	FDBDTunableRowHandle _speedBoostDuration; // 0x300
	FDBDTunableRowHandle _stopTickingRegressionWhileInjured; // 0x328
	FDBDTunableRowHandle _stopTickingRegressionWhileInChase; // 0x350
	FDBDTunableRowHandle _stopTickingRegressionWithinTerrorRadius; // 0x378
	FTunableStat _timeBeforeLacerationDecayStarts; // 0x3a0
	FDBDTunableRowHandle _regressionBufferTimerAlwaysTicks; // 0x420
	FDBDTunableRowHandle _lacerationToRemoveOnBasicAttack; // 0x448
	FDBDTunableRowHandle _thresholdForGraceTimerScoreEvent; // 0x470
};

struct UInterpTrackInstAnimControl {
	float LastUpdatePosition; // 0x30
};

struct UMaterial {
	UPhysicalMaterial* PhysMaterial; // 0x90
	UPhysicalMaterialMask* PhysMaterialMask; // 0x98
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0xa0
	FScalarMaterialInput Metallic; // 0xe0
	FScalarMaterialInput Specular; // 0xfc
	FScalarMaterialInput Anisotropy; // 0x118
	FVectorMaterialInput Normal; // 0x134
	FVectorMaterialInput Tangent; // 0x150
	FColorMaterialInput EmissiveColor; // 0x16c
	EMaterialDomain MaterialDomain; // 0x188
	EBlendMode BlendMode; // 0x189
	EDecalBlendMode DecalBlendMode; // 0x18a
	EMaterialDecalResponse MaterialDecalResponse; // 0x18b
	char bIsDenseGeometryBHVR : 1; // 0x18c
	EMaterialShadingModel ShadingModel; // 0x190
	char bCastDynamicShadowAsMasked : 1; // 0x191
	char CastMaskedMaterialShadow : 1; // 0x194
	FMaterialShadingModelField ShadingModels; // 0x198
	float OpacityMaskClipValue; // 0x19c
	FVectorMaterialInput WorldPositionOffset; // 0x1a0
	FScalarMaterialInput Refraction; // 0x1bc
	FMaterialAttributesInput MaterialAttributes; // 0x1d8
	FScalarMaterialInput PixelDepthOffset; // 0x1f8
	FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x214
	char bEnableSeparateTranslucency : 1; // 0x230
	char bEnableResponsiveAA : 1; // 0x230
	char bScreenSpaceReflections : 1; // 0x230
	char bContactShadows : 1; // 0x230
	char TwoSided : 1; // 0x230
	char DitheredLODTransition : 1; // 0x230
	char DitherOpacityMask : 1; // 0x230
	char bAllowNegativeEmissiveColor : 1; // 0x230
	ETranslucencyLightingMode TranslucencyLightingMode; // 0x231
	char bEnableMobileSeparateTranslucency : 1; // 0x232
	int32_t NumCustomizedUVs; // 0x234
	float TranslucencyDirectionalLightingIntensity; // 0x238
	float TranslucentShadowDensityScale; // 0x23c
	float TranslucentSelfShadowDensityScale; // 0x240
	float TranslucentSelfShadowSecondDensityScale; // 0x244
	float TranslucentSelfShadowSecondOpacity; // 0x248
	float TranslucentBackscatteringExponent; // 0x24c
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x250
	float TranslucentShadowStartOffset; // 0x260
	char bDisableDepthTest : 1; // 0x264
	char bRenderFragmentOnce : 1; // 0x268
	char bWriteOnlyAlpha : 1; // 0x26c
	char bGenerateSphericalParticleNormals : 1; // 0x26c
	char bTangentSpaceNormal : 1; // 0x26c
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x26c
	char bBlockGI : 1; // 0x26c
	char bUsedAsSpecialEngineMaterial : 1; // 0x26c
	char bUsedWithSkeletalMesh : 1; // 0x26c
	char bUsedWithEditorCompositing : 1; // 0x26c
	char bUsedWithParticleSprites : 1; // 0x26d
	char bUsedWithBeamTrails : 1; // 0x26d
	char bUsedWithMeshParticles : 1; // 0x26d
	char bUsedWithNiagaraSprites : 1; // 0x26d
	char bUsedWithNiagaraRibbons : 1; // 0x26d
	char bUsedWithNiagaraMeshParticles : 1; // 0x26d
	char bUsedWithGeometryCache : 1; // 0x26d
	char bUsedWithStaticLighting : 1; // 0x26d
	char bUsedWithMorphTargets : 1; // 0x26e
	char bUsedWithSplineMeshes : 1; // 0x26e
	char bUsedWithInstancedStaticMeshes : 1; // 0x26e
	char bUsedWithGeometryCollections : 1; // 0x26e
	char bUsesDistortion : 1; // 0x26e
	char bUsedWithClothing : 1; // 0x26e
	char bUsedWithWater : 1; // 0x270
	char bUsedWithHairStrands : 1; // 0x270
	char bUsedWithLidarPointCloud : 1; // 0x270
	char bUsedWithUI : 1; // 0x274
	char bAutomaticallySetUsageInEditor : 1; // 0x274
	char bFullyRough : 1; // 0x274
	char bUseFullPrecision : 1; // 0x274
	char bUseLightmapDirectionality : 1; // 0x274
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x278
	char bUseHQForwardReflections : 1; // 0x27c
	char bUsePlanarForwardReflections : 1; // 0x27c
	char bNormalCurvatureToRoughness : 1; // 0x27c
	EMaterialTessellationMode D3D11TessellationMode; // 0x27d
	char bEnableCrackFreeDisplacement : 1; // 0x27e
	char bEnableAdaptiveTessellation : 1; // 0x27e
	char AllowTranslucentCustomDepthWrites : 1; // 0x27e
	char Wireframe : 1; // 0x27e
	EMaterialShadingRate ShadingRate; // 0x27f
	char bCanMaskedBeAssumedOpaque : 1; // 0x280
	char bIsMasked : 1; // 0x280
	char bIsPreviewMaterial : 1; // 0x280
	char bIsFunctionPreviewMaterial : 1; // 0x280
	char bUseMaterialAttributes : 1; // 0x280
	char bCastRayTracedShadows : 1; // 0x280
	char bUseTranslucencyVertexFog : 1; // 0x280
	char bIsSky : 1; // 0x280
	char bUseTranslucencyVolumetricFog : 1; // 0x284
	char bComputeFogPerPixel : 1; // 0x288
	char bOutputTranslucentVelocity : 1; // 0x288
	char bAllowDevelopmentShaderCompile : 1; // 0x288
	char bIsMaterialEditorStatsMaterial : 1; // 0x288
	EBlendableLocation BlendableLocation; // 0x289
	char BlendableOutputAlpha : 1; // 0x28a
	char bEnableStencilTest : 1; // 0x28a
	EMaterialStencilCompare StencilCompare; // 0x28b
	char StencilRefValue; // 0x28c
	ERefractionMode RefractionMode; // 0x28d
	int32_t BlendablePriority; // 0x290
	char bIsBlendable : 1; // 0x294
	uint32_t UsageFlagWarnings; // 0x298
	float RefractionDepthBias; // 0x29c
	FGuid StateId; // 0x2a0
	float MaxDisplacement; // 0x2b0
	FMaterialCachedExpressionData CachedExpressionData; // 0x340
};

struct ULegalMenuScreenUMG {
	UUMGAtlantaLegalMenuScreen* _atlLegalMenuScreen; // 0x168
};

struct UAtlantaEventsTemplateDataAsset {
	TMap<EEventsType, UUMGAtlantaBaseEventsTemplate*> Data; // 0x38
};

struct UBoxReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x2b8
	UBoxComponent* PreviewInfluenceBox; // 0x2c0
	UBoxComponent* PreviewCaptureBox; // 0x2c8
};

struct UAnimationSharingManager {
	TArray<USkeleton*> Skeletons; // 0x30
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x40
};

struct UTestObjectStateProviderComponent {
	UGameplayTagContainerComponent* GameplayTagContainerComponent; // 0xc0
};

struct UKillerLocomotionSubAnimInstance {
	UAnimSequence* _landLightTPV; // 0x4f8
	UAnimSequence* _landLightFPV; // 0x500
	UBlendSpace1D* _BSLandTPV; // 0x508
	UBlendSpace1D* _BSLandFPV; // 0x510
	UAnimSequence* _walkToFallTPV; // 0x518
	UAnimSequence* _walkToFallFPV; // 0x520
	UAnimSequence* _carryIdleTPV; // 0x528
	UAnimSequence* _carryIdleFPV; // 0x530
	UAnimSequence* _fallingTPV; // 0x538
	UAnimSequence* _fallingFPV; // 0x540
	bool _isFirstPersonView; // 0x548
	UAnimSequence* _landLight; // 0x550
	UBlendSpace1D* _BSLand; // 0x558
	UAnimSequence* _walkToFall; // 0x560
	UAnimSequence* _carryIdle; // 0x568
	UAnimSequence* _falling; // 0x570
	bool _isVaultingToFall; // 0x578
	FTagStateBool _isVaultingToFallState; // 0x580
};

struct URuntimeVirtualTextureStreamingProxy {
	FVirtualTextureBuildSettings Settings; // 0x108
	bool bSinglePhysicalSpace; // 0x114
	uint32_t BuildHash; // 0x118
};

struct UParticleModuleTypeDataBeam2 {
	EBeam2Method BeamMethod; // 0x38
	int32_t TextureTile; // 0x3c
	float TextureTileDistance; // 0x40
	int32_t Sheets; // 0x44
	int32_t MaxBeamCount; // 0x48
	float Speed; // 0x4c
	int32_t InterpolationPoints; // 0x50
	char bAlwaysOn : 1; // 0x54
	int32_t UpVectorStepSize; // 0x58
	FName BranchParentName; // 0x5c
	FRawDistributionFloat Distance; // 0x68
	EBeamTaperMethod TaperMethod; // 0x98
	FRawDistributionFloat TaperFactor; // 0xa0
	FRawDistributionFloat TaperScale; // 0xd0
	char RenderGeometry : 1; // 0x100
	char RenderDirectLine : 1; // 0x100
	char RenderLines : 1; // 0x100
	char RenderTessellation : 1; // 0x100
};

struct UHLODProxy {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x30
};

struct UBlackboardKeyType_Class {
	UObject* BaseClass; // 0x38
};

struct UFurtiveChase {
	int32_t _maxTokensByLevel[0x3]; // 0x3d0
	float _terrorRadiusSuppressionPerToken; // 0x3dc
};

struct UDBDEmblem_KillerChaser {
	UCurveFloat* _chasePointsByDurationCurve; // 0x148
	TMap<ACamperPlayer*, float> _hookedPlayersPenaltyDelay; // 0x168
	UDBDRankDesignTunables* _rankTunablesClass; // 0x1b8
};

struct UGMAdaptiveShadowMapControllerComponent {
	FBHVRPerDetailModeInt TileSize; // 0x210
	int32_t TileCountX; // 0x2b0
	int32_t TileCountY; // 0x2b4
	FIntPoint GridSize; // 0x2b8
	int32_t GeneratedTilesPerFrame; // 0x2c0
	FBHVRPerDetailModeInt MaxPreallocatedTilesPerFrame; // 0x2c8
	bool bSupportsDirectionalLights; // 0x368
	bool bSupportsSpotLights; // 0x369
	UMaterialInterface* LightFunctionMaterial; // 0x370
	float CullShadowIfPixelSizeLessThan; // 0x378
	bool bPreviewOnly; // 0x37c
	UGMAdaptiveShadowMapAtlas* _atlas; // 0x390
	UGMAdaptiveShadowMapController* _controller; // 0x398
	TMap<UGMAdaptiveShadowMapSourceComponent*, UGMAdaptiveShadowMapSource*> _shadowMapSources; // 0x3a0
	UMaterialInstanceDynamic* _lightFunctionMaterialInstance; // 0x3f0
};

struct UClothPhysicalMeshDataBase_Legacy {
	TArray<FVector> Vertices; // 0x30
	TArray<FVector> Normals; // 0x40
	TArray<uint32_t> Indices; // 0x50
	TArray<float> InverseMasses; // 0x60
	TArray<FClothVertBoneData> BoneData; // 0x70
	int32_t NumFixedVerts; // 0x80
	int32_t MaxBoneWeights; // 0x84
	TArray<uint32_t> SelfCollisionIndices; // 0x88
};

struct UVerticalBoxSlot {
	FSlateChildSize Size; // 0x40
	FMargin Padding; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x60
	EVerticalAlignment VerticalAlignment; // 0x61
};

struct UUMGFriendPartyListElementWidget {
	UWidgetSwitcher* ButtonOrStatusSwitcher; // 0x598
	UButton* CancelInviteButton; // 0x5a0
	UImage* PartyStatusImage; // 0x5a8
	FSlateBrush IconNotReady; // 0x5b0
	FSlateBrush IconReady; // 0x640
};

struct ULuckyBreak {
	float _activationTime[0x3]; // 0x3d0
};

struct UAgonySubAnimInstance {
	bool _isInAgony; // 0x4f0
	bool _isInTormentTrail; // 0x4f1
	bool _isInTormentTrailEffect; // 0x4f2
	bool _isInDeathBed; // 0x4f3
	bool _isDeadInDeathBed; // 0x4f4
	bool _isInStruggleInDeathBed; // 0x4f5
};

struct UBTService_StateMonitor {
	FBlackboardKeySelector BBIsIntroCompleted; // 0x78
	FBlackboardKeySelector BBDifficultyLevel; // 0xa8
};

struct ULamentConfigurationOutlineStrategy {
	FLinearColor _noChainHuntProgressColor; // 0xc0
	FLinearColor _chainHuntActiveColor; // 0xd0
	FLinearColor _killerColor; // 0xe0
};

struct USharedAuthenticationMigrateComponent {
	UObject* _worldContextObject; // 0x30
};

struct UAtlantaSkillCheckWidget {
	UCanvasPanel* SkillCheckArea; // 0x300
	UImage* HitArea; // 0x308
	UImage* Hit; // 0x310
	UImage* OrangeSmoke; // 0x318
	UImage* BonusArea; // 0x320
	UImage* StartMarker; // 0x328
	UImage* EndMarker; // 0x330
	UCanvasPanel* HitAreaContainer; // 0x338
	UCanvasPanel* BonusAreaContainer; // 0x340
	UCanvasPanel* HitAreaStartMarkerContainer; // 0x348
	UCanvasPanel* HitAreaEndMarkerContainer; // 0x350
	UCanvasPanel* MarkerContainer; // 0x358
	FLinearColor HexColor; // 0x360
	FLinearColor DefaultColor; // 0x370
	bool _isPlayAnimation; // 0x380
	float PathCoveredAngle; // 0x384
};

struct ANiagaraActor {
	UNiagaraComponent* NiagaraComponent; // 0x230
	char bDestroyOnSystemFinish : 1; // 0x238
};

struct ABubbleIndicator {
	float _lifeTime; // 0x230
	bool _displayToLocallyObserved; // 0x234
};

struct UGeneratorToolboxRepairInteraction {
	FText _interactionTextWhenEmpty; // 0x758
	FDBDTunableRowHandle _repairSkillCheckDurationWhenEmpty; // 0x770
	FDBDTunableRowHandle _repairSkillCheckChanceWhenEmpty; // 0x798
};

struct UMaterialExpressionTextureSampleParameterSubUV {
	char bBlend : 1; // 0x130
};

struct UDatasmithStaticMeshGLTFImportData {
	FString SourceMeshName; // 0x30
};

struct UWidgetNavigation {
	FWidgetNavigationData Up; // 0x30
	FWidgetNavigationData Down; // 0x5c
	FWidgetNavigationData Left; // 0x88
	FWidgetNavigationData Right; // 0xb4
	FWidgetNavigationData Next; // 0xe0
	FWidgetNavigationData Previous; // 0x10c
};

struct URenderingFeaturesSequencer {
	ADBDAggregateCullDistanceVolumes* _aggregateCullDistanceVolumes; // 0x40
	UWorld* _world; // 0x48
};

struct UNiagaraDataInterfaceCurlNoise {
	uint32_t Seed; // 0x38
};

struct AEffectsLocator {
	TArray<FEffectsLocatorTargets> AffectedActors; // 0x230
	float ActorCaptureRadius; // 0x240
};

struct URegionFinder {
	TArray<FRegion> Regions; // 0x30
	float TIMEOUT; // 0x40
};

struct UAtlantaSaveGame {
	FString SaveSlotName; // 0x30
	uint32_t UserIndex; // 0x40
	FName LastGenericLoadingImageId; // 0x44
	FName LastSpecificLoadingImageId; // 0x50
	bool IsLastSpecificImage; // 0x5c
};

struct UNiagaraSystem {
	bool bDumpDebugSystemInfo; // 0x39
	bool bDumpDebugEmitterInfo; // 0x3a
	char bFixedBounds : 1; // 0x3c
	UNiagaraEffectType* EffectType; // 0x40
	bool bOverrideScalabilitySettings; // 0x48
	TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x50
	FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x60
	TArray<FNiagaraEmitterHandle> EmitterHandles; // 0x70
	TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x80
	UNiagaraScript* SystemSpawnScript; // 0x90
	UNiagaraScript* SystemUpdateScript; // 0x98
	FNiagaraSystemCompiledData SystemCompiledData; // 0xb0
	FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x308
	FBox FixedBounds; // 0x410
	bool bAutoDeactivate; // 0x42c
	float WarmupTime; // 0x430
	int32_t WarmupTickCount; // 0x434
	float WarmupTickDelta; // 0x438
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x43c
	TArray<FName> UserDINamesReadInSystemScripts; // 0x440
};

struct UStreamVideoSubsystem {
	UStreamVideoManager* StreamVideoManager; // 0x38
	UStreamVideoFactory* StreamVideoFactory; // 0x40
};

struct UFadeComponent {
	FMulticastInlineDelegate OnFadePercentChanged; // 0xb8
	float _fadeDuration; // 0xc8
};

struct USurvivorMadnessEffect {
	float _madness; // 0x358
};

struct UMagicLeapARPinSaveGame {
	FGuid PinnedID; // 0x30
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
};

struct UNetAnalyticsAggregatorConfig {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x30
};

struct UThrobber {
	int32_t NumberOfPieces; // 0x128
	bool bAnimateHorizontally; // 0x12c
	bool bAnimateVertically; // 0x12d
	bool bAnimateOpacity; // 0x12e
	USlateBrushAsset* PieceImage; // 0x130
	FSlateBrush Image; // 0x138
};

struct UWidgetAnimationPlayCallbackProxy {
	FMulticastInlineDelegate Finished; // 0x30
};

struct UScreenSpaceLocationComponent {
	float ScreenSpaceX; // 0x210
	float ScreenSpaceY; // 0x214
	int32_t FrameDelay; // 0x218
	FVector2D _currentResolution; // 0x21c
	TArray<FTransform> _previousTransforms; // 0x228
};

struct UParticleModuleMeshRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct USurvivorOutlineUpdateStrategy {
	FLinearColor _inDangerColorForSurvivor; // 0xc0
	FLinearColor _noRecoveryDyingColor; // 0xd0
	FLinearColor _fullRecoveryDyingColor; // 0xe0
	FLinearColor _saviourColorForSurvivor; // 0xf0
	FLinearColor _colorForKiller; // 0x100
	UTexture* _revealedGradient; // 0x110
	UTexture* _nonRevealedGradient; // 0x118
	bool _trappedIconActive; // 0x120
};

struct ATormentMode {
	UChargeableComponent* _activateTormentModeCharge; // 0x540
	UPowerChargeComponent* _tormentModeCharge; // 0x548
	UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation; // 0x558
	UPowerToggleComponent* _powerToggleComponent; // 0x560
	UTormentTrailSpawnerComponent* _tormentTrailSpawnerComponent; // 0x568
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent; // 0x570
	UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent; // 0x578
	UAuthoritativeActorPoolComponent* _tormentTrailControllerPool; // 0x580
	UAuthoritativeActorPoolComponent* _tormentAttackTrailControllerPool; // 0x588
	UAuthoritativeActorPoolComponent* _restrictedTormentTrailControllerPool; // 0x590
	UAuthoritativeActorPoolComponent* _tormentTrailPointPool; // 0x598
	UAuthoritativeActorPoolComponent* _restrictedTormentTrailPointPool; // 0x5a0
	FDBDTunableRowHandle _activateTormentModeSecondsToCharge; // 0x5a8
	FDBDTunableRowHandle _tormentModeMaxCharge; // 0x5d0
	FTunableStat _tormentModeChargeRate; // 0x5f8
	FTunableStat _tormentModeDischargeRate; // 0x678
	FDBDTunableRowHandle _tormentModePauseChargeRate; // 0x6f8
	FDBDTunableRowHandle _tormentModeAttackConsumePower; // 0x720
	FDBDTunableRowHandle _tormentModeMinimumPercentToActivate; // 0x748
	FDBDTunableRowHandle _tormentModeMouseYawScale; // 0x770
	FDBDTunableRowHandle _tormentModeYawAdjustTime; // 0x798
	FDBDTunableRowHandle _tormentModeGamePadYawScale; // 0x7c0
	FDBDTunableRowHandle _tormentModeYawInputLimit; // 0x7e8
	FDBDTunableRowHandle _tormentModeNotMovingYawScaleMultiplier; // 0x810
	FDBDTunableRowHandle _tormentModeNotMovingYawAdjustTime; // 0x838
	FDBDTunableRowHandle _tormentModeWalkSpeed; // 0x860
	FDBDTunableRowHandle _normalWalkSpeed; // 0x888
	FDBDTunableRowHandle _tormentModeForcedPitch; // 0x8b0
	UAgonyComponent* _agonyComponentClass; // 0x8d8
	UTormentTrailDetectorComponent* _killerTormentTrailDetectorClass; // 0x8f0
	UTormentTrailDetectorComponent* _survivorTormentTrailDetectorClass; // 0x8f8
	UTormentModeCooldownInteraction* _tormentModeCooldownInteraction; // 0x900
	UCurveFloat* _tormentModeChargeSpeedCurve; // 0x908
	AMobileTormentTrailRenderer* _mobileTormentTrailRendererClass; // 0x910
};

struct UDBDCoreUMGDesignTunables {
	TSoftClassPtr<UObject> CoreHudRootWidgetClass; // 0x30
	TSoftClassPtr<UObject> CorePlayerControllerClass; // 0x60
};

struct UHeadOn {
	bool IsPerformingHeadOn; // 0x3d0
	bool ExhaustOnlyOnSuccessfulStun; // 0x3d1
	bool StunKillersEnteringStunZone; // 0x3d2
	float _hideDuration[0x3]; // 0x3d4
	ALocker* _locker; // 0x3e0
};

struct UBTDecorator_IsObjectFocused {
	FBlackboardKeySelector BBObj; // 0x70
	EDecoratorIsObjFocusedFilter Filter; // 0xa0
};

struct ACameraRig_Rail {
	float CurrentPositionOnRail; // 0x230
	bool bLockOrientationToRail; // 0x234
	USceneComponent* TransformComponent; // 0x238
	USplineComponent* RailSplineComponent; // 0x240
	USceneComponent* RailCameraMount; // 0x248
};

struct UInAppPurchaseCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEditNormalsToolProperties {
	bool bRecomputeNormals; // 0x58
	ENormalCalculationMethod NormalCalculationMethod; // 0x59
	bool bFixInconsistentNormals; // 0x5a
	bool bInvertNormals; // 0x5b
	ESplitNormalMethod SplitNormalMethod; // 0x5c
	float SharpEdgeAngleThreshold; // 0x60
	bool bAllowSharpVertices; // 0x64
};

struct ADBDDebugGameMode {
	TMap<ADBDPlayerController*, int32_t> LoadoutIndex; // 0x420
	TSet<ADBDPlayer*> PlayersWithItems; // 0x470
	TArray<FCamperLoadout> CamperPawnOverrides; // 0x4c0
	TArray<FSlasherLoadout> SlasherPawnOverrides; // 0x4d0
};

struct UInteractionAudioComponent {
	UAkComponent* _audioComponent; // 0xb8
	FNonTunableStat _audioRadius; // 0xc0
};

struct UDedicatedServerStartupInitializer {
	UDBDTimeUtilities* _dbdTimeUtilities; // 0x78
};

struct UUMGHudEditorLayoutWidget {
	UUMGHudEditorScreen* hudEditorScreen; // 0x290
	UAkAudioEvent* _onSaveOverlapSound; // 0x298
	UUMGDragWidget_HudEditor* _currentWidgetToEdit; // 0x2a0
	TMap<UUMGHudEditorLayoutScreen*, bool> _isSaveDirtyMap; // 0x2a8
};

struct UPalletPullUpInteraction {
	EPalletSide _side; // 0x6d8
	APallet* _owningPallet; // 0x6e0
};

struct UNiagaraDataInterfaceVectorCurve {
	FRichCurve XCurve; // 0x60
	FRichCurve YCurve; // 0xe0
	FRichCurve ZCurve; // 0x160
};

struct UDistributionVectorParameterBase {
	FName ParameterName; // 0x58
	FVector MinInput; // 0x64
	FVector MaxInput; // 0x70
	FVector MinOutput; // 0x7c
	FVector MaxOutput; // 0x88
	DistributionParamMode ParamModes[0x3]; // 0x94
};

struct UEndpointSubmix {
	FName EndpointType; // 0x40
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x50
	UAudioEndpointSettingsBase* EndpointSettings; // 0x58
};

struct UHasEventHappenedEvaluatorCondition {
	FGameplayTag _firstGameEvent; // 0x60
};

struct UBlightPowerState {
	UCurveFloat* _stateSpeedCurve; // 0x40
	FTunableStat _stateDuration; // 0x48
	FDBDTunableRowHandle _cameraPitchRecenterTime; // 0xc8
	FDBDTunableRowHandle _wallDashCollisionRadius; // 0xf0
	FDBDTunableRowHandle _wallDashCollisionHeight; // 0x118
	FDBDTunableRowHandle _wallDashCollisionRange; // 0x140
	bool _playerCanCancelEarly; // 0x168
	bool _displayCollisionIndicator; // 0x178
};

struct UAISense_Team {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x90
};

struct UReturnTheFavorQEEvaluator {
	TSet<FGameplayTag> _favorToReturnEvents; // 0x90
	TSet<TWeakObjectPtr<ADBDPlayer>> _instigatorList; // 0xe0
};

struct UBlightPowerStateNonLethalDash {
	bool _smashBreakables; // 0x250
};

struct UWidget {
	UPanelSlot* Slot; // 0x30
	FDelegate bIsEnabledDelegate; // 0x38
	FText ToolTipText; // 0x50
	FDelegate ToolTipTextDelegate; // 0x68
	UWidget* ToolTipWidget; // 0x80
	FDelegate ToolTipWidgetDelegate; // 0x88
	FDelegate VisibilityDelegate; // 0x9c
	FWidgetTransform RenderTransform; // 0xb0
	FVector2D RenderTransformPivot; // 0xcc
	char bIsVariable : 1; // 0xd4
	char bCreatedByConstructionScript : 1; // 0xd4
	char bIsEnabled : 1; // 0xd4
	char bOverride_Cursor : 1; // 0xd4
	USlateAccessibleWidgetData* AccessibleWidgetData; // 0xd8
	char bIsVolatile : 1; // 0xe0
	EMouseCursor Cursor; // 0xe1
	EWidgetClipping Clipping; // 0xe2
	ESlateVisibility Visibility; // 0xe3
	float RenderOpacity; // 0xe4
	UWidgetNavigation* Navigation; // 0xe8
	EFlowDirectionPreference FlowDirectionPreference; // 0xf0
	TArray<UPropertyBinding*> NativeBindings; // 0x118
};

struct UKillerIsLowOnAmmo {
	int32_t _ammoThreshold; // 0xe8
};

struct UButton {
	USlateWidgetStyleAsset* Style; // 0x140
	FButtonStyle WidgetStyle; // 0x148
	FLinearColor ColorAndOpacity; // 0x3f0
	FLinearColor BackgroundColor; // 0x400
	EButtonClickMethod ClickMethod; // 0x410
	EButtonTouchMethod TouchMethod; // 0x411
	EButtonPressMethod PressMethod; // 0x412
	bool IsFocusable; // 0x413
	FMulticastInlineDelegate OnClicked; // 0x418
	FMulticastInlineDelegate OnPressed; // 0x428
	FMulticastInlineDelegate OnReleased; // 0x438
	FMulticastInlineDelegate OnHovered; // 0x448
	FMulticastInlineDelegate OnUnhovered; // 0x458
	FMulticastInlineDelegate OnLongPress; // 0x468
	FTimerHandle LongPressTimerHandle; // 0x478
};

struct UDatasmithStaticMeshComponentTemplate {
	UStaticMesh* StaticMesh; // 0x38
	TArray<UMaterialInterface*> OverrideMaterials; // 0x40
};

struct UBloodOrbOverlapRevealToKiller {
	UTimerObject* _revealTimer; // 0x378
};

struct UButtonPressTracker {
	TWeakObjectPtr<UInputComponent> _trackedInputComponent; // 0x50
	TWeakObjectPtr<UPlayerInput> _playerInput; // 0x58
};

struct AOfferingCard {
	TArray<FRarityTexture> RarityTextures; // 0x230
	TArray<FOfferingTypeTexture> OfferingTypeTextures; // 0x240
};

struct UPaperTerrainMaterial {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x38
	UPaperSprite* InteriorFill; // 0x48
};

struct UMovieSceneTrack {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x58
	bool bIsEvalDisabled; // 0x5d
};

struct UInterpTrackInstColorProp {
	FColor ResetColor; // 0x60
};

struct UUMGCustomizationItemBuyButton {
	UImage* CurrencyColorStripe; // 0x410
	TMap<ECurrencyType, FColor> _currencyStripeColors; // 0x418
	FLinearColor _disabledOpacity; // 0x468
	FLinearColor _enabledOpacity; // 0x478
};

struct UUMGMenuMarketingBanner {
	UTextBlock* subtitle; // 0x470
};

struct USkeletalMeshSimplificationSettings {
	FName SkeletalMeshReductionModuleName; // 0x48
};

struct UNavModifierComponent {
	UNavArea* AreaClass; // 0xe8
	FVector FailsafeExtent; // 0xf0
	char bIncludeAgentHeight : 1; // 0xfc
};

struct USurvivorWasRecentlyUnhookedEffect {
	FDBDTunableRowHandle _survivorWasRecentlyUnhookedDuration; // 0x350
};

struct UUntrap {
	TArray<FString> _overridableInteractions; // 0x6d8
	FName _bearTrapUpdateMontageID; // 0x6e8
	FName _bearTrapFinishMontageID; // 0x6f4
};

struct ARespawnableInteractable {
	FMulticastInlineDelegate OnInteractionEnded; // 0x328
	FMulticastInlineDelegate OnIsInteractingChanged; // 0x338
	bool _isHidden; // 0x348
};

struct UBTTask_BlueprintBase {
	AAIController* AIOwner; // 0x78
	AActor* ActorOwner; // 0x80
	FIntervalCountdown TickInterval; // 0x88
	char bShowPropertyDetails : 1; // 0xa8
};

struct UOtherCharactersVerticalCollisionsHandler {
	TArray<AActor*> _ignoreBelowActors; // 0xb8
	TArray<AActor*> _overlappingActors; // 0xc8
	UCapsuleComponent* _pawnDetector; // 0xd8
};

struct UBTService {
	float Interval; // 0x68
	float RandomDeviation; // 0x6c
	char bCallTickOnSearchStart : 1; // 0x70
	char bRestartTimerOnEachActivation : 1; // 0x70
};

struct UOniDemonModeAttackStateComponent {
	FMulticastInlineDelegate OnChargedAttackReadyChanged; // 0xc0
};

struct UBTDecorator_IsTunable {
	ETunableComparison Operator; // 0x70
	FAITunableParameter TunableValue; // 0x74
	float CompareToValue; // 0x84
};

struct UParticleModuleVectorFieldScale {
	UDistributionFloat* VectorFieldScale; // 0x38
	FRawDistributionFloat VectorFieldScaleRaw; // 0x40
};

struct UNetSynchedClock {
	float _serverTimeUpdateDelay; // 0xc0
};

struct USplashScreenUMG {
	UUMGSplashScreen* _splashScreen; // 0x138
};

struct UUMGAtlantaFriendListScreen {
	UWidgetSwitcher* ListSwitcher; // 0x360
	UWidgetSwitcher* SearchResultSwitcher; // 0x368
	UUMGBaseFriendListElement* NonFriendSearchResult; // 0x370
	UUMGBaseFriendListElement* RequestReceivedSearchResult; // 0x378
	UUMGBaseFriendListElement* RequestSentSearchResult; // 0x380
	UUMGBaseFriendListElement* FriendSearchResult; // 0x388
	UTextBlock* SearchFailureText; // 0x390
	UUMGBaseButtonWidget* CloseButton; // 0x398
	UUMGFriendSearchBarWidget* SearchBar; // 0x3a0
	UHorizontalBox* ButtonTabContainer; // 0x3a8
	UUMGFriendListTabWidget* FriendListTabWidget; // 0x3b0
	UUMGSuggestionsListTabWidget* SuggestionListTabWidget; // 0x3b8
	UUMGRequestsListTabWidget* RequestListTabWidget; // 0x3c0
	UUMGFriendTabButtonWidget* FriendsTabButton; // 0x3c8
	UUMGFriendTabButtonWidget* SuggestionsTabButton; // 0x3d0
	UUMGFriendTabButtonWidget* RequestsTabButton; // 0x3d8
	UUMGBaseFriendListContextualMenuWidget* CurrentContextualMenuWidget; // 0x3e0
	TSoftClassPtr<UObject> FriendWidget; // 0x3e8
	TSoftClassPtr<UObject> RequestSentWidget; // 0x418
	TSoftClassPtr<UObject> FriendRequestReceivedWidget; // 0x448
	TSoftClassPtr<UObject> FriendsSuggestionWidget; // 0x478
	TSoftClassPtr<UObject> FriendsSuggestion; // 0x4a8
	TSoftClassPtr<UObject> FriendPartyInviteWidgetClass; // 0x4d8
	TSoftClassPtr<UObject> ContextualMenuInvite; // 0x508
	TSoftClassPtr<UObject> ContextualMenuConfirmDeclineAction; // 0x538
	TMap<FString, FFriendWidgetList> _existingFriendListWidgets; // 0x5f8
	TMap<FString, UUMGBaseFriendListElement*> _existingFriendInvitePartyWidget; // 0x648
};

struct UBTDecorator_Random {
	FAITunableParameter PercentageRatio; // 0x70
};

struct UCoreEndGameCollapseBarWidget {
	float _progressBarInterpSpeed; // 0x2f8
};

struct UAnimNotifyState_TimedParticleEffect {
	UParticleSystem* PSTemplate; // 0x38
	FName SocketName; // 0x40
	FVector LocationOffset; // 0x4c
	FRotator RotationOffset; // 0x58
	bool bDestroyAtEnd; // 0x64
};

struct UBloodOrbStateMonitorComponent {
	FMulticastInlineDelegate OnBloodOrbAbsorbedCosmetic; // 0xb8
};

struct UBTService_GetPinObject {
	FBlackboardKeySelector BBToSetKey; // 0x80
	FGameplayTag PinTag; // 0xb0
};

struct UPlaneBrushProperties {
	EPlaneBrushSideMode WhichSide; // 0x58
};

struct UAkEventCallbackInfo {
	int32_t PlayingID; // 0x38
	int32_t EventId; // 0x3c
};

struct UInteractionAnimNotify {
	FName NotifyId; // 0x40
};

struct UUMGAtlantaFreeTicketConfirmToUsePopup {
	UTexture2D* FreeTicketIcon; // 0x3e8
	FText PopupTitleContent; // 0x3f0
};

struct UBTTask_MoveTo {
	float AcceptableRadius; // 0xa8
	UNavigationQueryFilter* FilterClass; // 0xb0
	float ObservedBlackboardValueTolerance; // 0xb8
	char bObserveBlackboardValue : 1; // 0xbc
	char bAllowStrafe : 1; // 0xbc
	char bAllowPartialPath : 1; // 0xbc
	char bTrackMovingGoal : 1; // 0xbc
	char bProjectGoalLocation : 1; // 0xbc
	char bReachTestIncludesAgentRadius : 1; // 0xbc
	char bReachTestIncludesGoalRadius : 1; // 0xbc
	char bStopOnOverlap : 1; // 0xbc
	char bStopOnOverlapNeedsUpdate : 1; // 0xbd
};

struct UMovementComponent {
	USceneComponent* UpdatedComponent; // 0xb8
	UPrimitiveComponent* UpdatedPrimitive; // 0xc0
	FVector Velocity; // 0xcc
	FVector PlaneConstraintNormal; // 0xd8
	FVector PlaneConstraintOrigin; // 0xe4
	char bUpdateOnlyIfRendered : 1; // 0xf0
	char bAutoUpdateTickRegistration : 1; // 0xf0
	char bTickBeforeOwner : 1; // 0xf0
	char bAutoRegisterUpdatedComponent : 1; // 0xf0
	char bConstrainToPlane : 1; // 0xf0
	char bSnapToPlaneAtStart : 1; // 0xf0
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0xf0
	char bComponentShouldUpdatePhysicsVolume : 1; // 0xf0
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xf3
};

struct UAkTVOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkAudioSession AudioSession; // 0x98
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0
};

struct UMorphTarget {
	USkeletalMesh* BaseSkelMesh; // 0x30
};

struct UIsPerformingInteractionEvaluatorCondition {
	TArray<FGameplayTag> _semanticTags; // 0x48
};

struct UShapeAnimInstance {
	bool _isTier3Active; // 0x5a8
	UEvilWithinComponent* _evilWithinComponent; // 0x5b0
};

struct UNiagaraDataInterfaceAudioOscilloscope {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UCamperHealthComponent {
	FMulticastInlineDelegate OnHealedDelegate; // 0xb8
	FMulticastInlineDelegate OnInjuredBleedoutStarted; // 0xc8
	FMulticastInlineDelegate OnInjuredBleedoutEnded; // 0xd8
	FMulticastInlineDelegate OnInjuredBleedoutKO; // 0xe8
	FMulticastInlineDelegate OnDamageStateChanged; // 0x128
	FMulticastInlineDelegate OnDamageStateChangedCosmetic; // 0x138
	FDBDTunableRowHandle _bleedoutBaseDuration; // 0x148
	FTagStateBool _inInjuredBleedOut; // 0x170
	FDBDTimer _bleedOutTimer; // 0x1a0
	bool _canBleedout; // 0x1c8
	TArray<UInteractionDefinition*> _pauseInjuredBleedoutTimerInteractions; // 0x1d0
	int32_t _currentHealthStateCount; // 0x1e0
	int32_t _numHealthyHeals; // 0x1e8
	FDBDTimer _dyingTimer; // 0x1f0
	UChargeableComponent* _healFromDyingChargeable; // 0x220
	UChargeableComponent* _healFromInjuredChargeable; // 0x228
	UChargeableComponent* _mendChargeable; // 0x230
	ADBDPlayer* _injuredBleedoutInstigator; // 0x238
};

struct ULocalLightComponent {
	ELightUnits IntensityUnits; // 0x390
	float Radius; // 0x394
	float AttenuationRadius; // 0x398
	FLightmassPointLightSettings LightmassSettings; // 0x39c
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
	float Duration; // 0x100
	float MaxDistance; // 0x104
	float TotalSamples; // 0x108
	float Priority; // 0x10c
	USoundAttenuation* AttenuationSettings; // 0x110
	FSoundModulation Modulation; // 0x118
	USoundSubmixBase* SoundSubmixObject; // 0x128
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x130
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x140
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x148
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x158
};

struct UNewsContentManager {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x48
};

struct UMindBreaker {
	float _effectDurationAfterRepair[0x3]; // 0x3d0
};

struct UBlightAnimInstance {
	UBlightPowerStateComponent* _blightPowerStateComponent; // 0x5a8
	EWallGrabState _powerState; // 0x5b0
	float _stateTimeRemaining; // 0x5b4
	float _lookAngle; // 0x5b8
};

struct UNiagaraDataInterfaceAudioSubmix {
	USoundSubmix* Submix; // 0x38
};

struct UAkAudioEvent {
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60
	UAkAudioBank* RequiredBank; // 0xb0
	UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8
	float MaxAttenuationRadius; // 0xc0
	bool IsInfinite; // 0xc4
	float MinimumDuration; // 0xc8
	float MaximumDuration; // 0xcc
};

struct UParticleModuleAttractorLine {
	FVector EndPoint0; // 0x38
	FVector EndPoint1; // 0x44
	FRawDistributionFloat Range; // 0x50
	FRawDistributionFloat Strength; // 0x80
};

struct ULocalPlayerTrackerComponent {
	FMulticastInlineDelegate TrackerOnLocallyObservedChanged; // 0x210
};

struct URecommendationsGenerator {
	TWeakObjectPtr<Ushopmanager> _shopManager; // 0x30
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x38
	TMap<FString, URecommendationsFilter*> _filters; // 0x40
};

struct UMockDataMeshTrackerComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x210
	bool ScanWorld; // 0x220
	bool RequestNormals; // 0x221
	bool RequestVertexConfidence; // 0x222
	EMeshTrackerVertexColorMode VertexColorMode; // 0x223
	TArray<FColor> BlockVertexColors; // 0x228
	FLinearColor VertexColorFromConfidenceZero; // 0x238
	FLinearColor VertexColorFromConfidenceOne; // 0x248
	float UpdateInterval; // 0x258
	UMRMeshComponent* MRMesh; // 0x260
};

struct UDemogorgonPounceInteraction {
	UChargedAttackStateComponent* _chargedAttackState; // 0x748
	ASlasherPlayer* _owningSlasher; // 0x750
};

struct UAkMusicSyncCallbackInfo {
	int32_t PlayingID; // 0x38
	FAkSegmentInfo SegmentInfo; // 0x3c
	EAkCallbackType MusicSyncType; // 0x60
	FString UserCueName; // 0x68
};

struct UBlackboardKeyType_Object {
	UObject* BaseClass; // 0x38
};

struct UBTService_FindInteractor_Exit {
	EFindInteractorExitOptions Filter; // 0x218
	EFindInteractorOpenConditions OpenCondition; // 0x219
	FBlackboardKeySelector BBFinalExitLocation; // 0x220
	float ClosedDoorOffset; // 0x250
	float OpenDoorOffset; // 0x254
	FAITunableParameter OpenedExitGoalWeight; // 0x258
	FAITunableParameter HatchBonusGoalWeight; // 0x268
};

struct UContentScheduleManager {
	UObjectLibrary* _availableMapLibrary; // 0x138
};

struct ULookAtThreatSurvivorSubAnimInstance {
	float _maxDistanceForThreatDetection; // 0x4f0
	FName _headSocket; // 0x4f4
	FName _rootSocket; // 0x500
	float _yawToThreat; // 0x50c
	float _pitchToThreat; // 0x510
	bool _isVisibleThreat; // 0x514
};

struct UK26PowerChargePresentationPowerFadeComponent {
	UK26AmmoHandlerComponent* _ammoHandler; // 0xb8
};

struct UClonedMeshComponent {
	TMap<USceneComponent*, UMeshComponent*> _originalToClone; // 0x2a0
	TMap<UMeshComponent*, USceneComponent*> _cloneToOriginal; // 0x2f0
};

struct UGeneratorOutlineUpdateStrategy {
	FLinearColor _unrepairedAuraColor; // 0x130
	FLinearColor _fullyRepairedAuraColor; // 0x140
};

struct UDatasmithAssetUserData {
	TMap<FName, FString> MetaData; // 0x30
};

struct UUMGSplashScreen {
	FMulticastInlineDelegate OnSaveGamePopupCompleteEvent; // 0x300
	FMulticastInlineDelegate OnScreenTouched; // 0x310
	UCanvasPanel* SavePopup; // 0x320
	UTextBlock* GameVersion; // 0x328
	UTextBlock* LoadingState; // 0x330
	UTextBlock* PressKey; // 0x338
	UButton* TapButton; // 0x340
	UTextBlock* SaveGameTitle; // 0x348
	UTextBlock* SaveGameDescription; // 0x350
	UUMGDownloadProgressionWidget* DownloadProgression; // 0x358
	UUMGCharacterSlideShowWidget* CharacterSlideShow; // 0x360
};

struct UDatasmithLightComponentTemplate {
	char bVisible : 1; // 0x38
	char CastShadows : 1; // 0x3c
	char bUseTemperature : 1; // 0x3c
	char bUseIESBrightness : 1; // 0x3c
	float Intensity; // 0x40
	float Temperature; // 0x44
	float IESBrightnessScale; // 0x48
	FLinearColor LightColor; // 0x4c
	UMaterialInterface* LightFunctionMaterial; // 0x60
	UTextureLightProfile* IESTexture; // 0x68
};

struct UKnivesLauncher {
	FDBDTunableRowHandle _knifeSpawnOffset; // 0x180
	FDBDTunableRowHandle _knifeSpawnForwardOffset; // 0x1a8
	FDBDTunableRowHandle _launchSpeed; // 0x1d0
	FTunableStat _maxAmmoTunable; // 0x1f8
	bool _isInSuperModeThrow; // 0x280
};

struct UFirecrackerEffectHandlerComponent {
	FMulticastInlineDelegate OnFirecrackerInRangeBegin; // 0xb8
	FMulticastInlineDelegate OnFirecrackerInRangeUpdate; // 0xc8
	FMulticastInlineDelegate OnFirecrackerInRangeEnd; // 0xd8
	TArray<FFirecrackerEffectData> _effectDataList; // 0xe8
};

struct UAnimCompress_RemoveLinearKeys {
	float MaxPosDiff; // 0x48
	float MaxAngleDiff; // 0x4c
	float MaxScaleDiff; // 0x50
	float MaxEffectorDiff; // 0x54
	float MinEffectorDiff; // 0x58
	float EffectorDiffSocket; // 0x5c
	float ParentKeyScale; // 0x60
	char bRetarget : 1; // 0x64
	char bActuallyFilterLinearKeys : 1; // 0x64
};

struct UAICharacterBehaviourInteractWithActorData {
	AActor* TargetActor; // 0x30
	ECharacterMovementTypes characterMovementType; // 0x48
	bool usePathfinding; // 0x49
};

struct UUMGAtlantaPromoCodePopup {
	UOverlay* RewardPanel; // 0x3e8
	UHorizontalBox* RewardWidgetContainer; // 0x3f0
	TSoftClassPtr<UObject> RewardItemWidgetClass; // 0x3f8
	int32_t RewardItemWidgetMax; // 0x428
	FMargin RewardItemWidgetPadding; // 0x42c
	float RewardItemWidgetRevealDelay; // 0x43c
	UOverlay* CodePanel; // 0x440
	UEditableTextBox* PromoCodeInputTextBox; // 0x448
	UImage* InvalidIcon; // 0x450
};

struct USkeletalMeshLODSettings {
	FPerPlatformInt MinLOD; // 0x38
	FPerPlatformBool DisableBelowMinLodStripping; // 0x3c
	FPerPlatformBool bSupportLODStreaming; // 0x3d
	FPerPlatformInt MaxNumStreamedLODs; // 0x40
	FPerPlatformInt MaxNumOptionalLODs; // 0x44
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x48
};

struct UInterpTrackInstAkAudioRTPC {
	float LastUpdatePosition; // 0x30
};

struct UDBDAttackHittingSubstate {
	FStatProperty _hittingPercentDamageBegin; // 0x118
};

struct UMaterialFunctionInterface {
	FGuid StateId; // 0x30
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x40
};

struct UEnvQueryTest_Pathfinding {
	EEnvTestPathfinding TestMode; // 0x238
	UEnvQueryContext* Context; // 0x240
	FAIDataProviderBoolValue PathFromContext; // 0x248
	FAIDataProviderBoolValue SkipUnreachable; // 0x288
	UNavigationQueryFilter* FilterClass; // 0x2c8
};

struct ANavMeshBoundsVolume {
	FNavAgentSelector SupportedAgents; // 0x268
};

struct UParticleModuleVelocityBase {
	char bInWorldSpace : 1; // 0x38
	char bApplyOwnerScale : 1; // 0x38
};

struct UMaterialExpressionGetMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x48
	TArray<FGuid> AttributeGetTypes; // 0x68
};

struct AGeneratorDrivenActor {
	float LightPriority; // 0x230
	EComponentMobility TargetMobileLightMobility; // 0x234
	TArray<bool> _activated; // 0x238
	TArray<AGenerator*> _generators; // 0x248
};

struct UFSM_NotCondition {
	UFSM_Condition* _condition; // 0x38
};

struct UFSM_State {
	FName _stateName; // 0x30
	bool _shouldTick; // 0x3c
	UFSM_State* _defaultChildStateClass; // 0x40
	TArray<UFSM_Transition*> _transitions; // 0x48
	UFiniteStateMachine* _stateMachine; // 0x58
	UFSM_State* _parentState; // 0x60
	UFSM_State* _currentChildState; // 0x68
	float _startTimestamp; // 0x70
};

struct UDBDCharacterMovementComponent {
	float ProjectedWallSlidingFactor; // 0x630
	float RandomInputFrontMultiplier; // 0x634
	float RandomInputSideMultiplier; // 0x638
	float RandomInputBackMultiplier; // 0x63c
	bool _forceUseDropStaggerFix; // 0x6c8
	UBaseCharacterVelocityAdditiveStrategy* _velocityAdditiveStrategy; // 0x888
	UBaseInputAccelerationConstraintStrategy* _inputAccelerationConstraintStrategy; // 0x890
	UBaseCharacterRotationStrategy* _rotationStrategy; // 0x898
	AActor* _lookAtTarget; // 0x8a0
};

struct ULoProChainsAddon {
	FAnimationMontageDescriptor _breakPalletMontage; // 0x298
	float _halfDamageDurationAfterBreakable; // 0x2b8
	bool _doesAddonIncludeBreakableWalls; // 0x2bc
};

struct UTormentTrailSpawnerComponent {
	ATormentTrailController* _currentTrailController; // 0xb8
	FDBDTunableRowHandle _restrictionRangeToHooks; // 0xc0
	FDBDTunableRowHandle _restrictionRangeToGenerators; // 0xe8
	FDBDTunableRowHandle _restrictionRangeToExitSwitch; // 0x110
	FDBDTunableRowHandle _maxSlopeAngleForTrail; // 0x138
	FDBDTunableRowHandle _minSlopeAngleForTrail; // 0x160
	FDBDTunableRowHandle _restrictionRangeToHatch; // 0x188
	FDBDTunableRowHandle _restrictionMaxVerticalDistance; // 0x1b0
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent; // 0x1d8
	UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent; // 0x1e0
	UAuthoritativeActorPoolComponent* _tormentTrailControllerPool; // 0x1e8
	UAuthoritativeActorPoolComponent* _tormentRestrictedTrailControllerPool; // 0x1f0
	TArray<AActor*> _actorsInRange; // 0x210
	FVector _slopeDetectionOverGroundVector; // 0x220
	FVector _slopeDetectionEndVector; // 0x22c
	float _forwardMultiplierSlopeDetection; // 0x238
	float _epsilonToAddToSpawnLocationInZ; // 0x23c
};

struct UGameplayTaskResource {
	int32_t ManualResourceID; // 0x30
	int8_t AutoResourceID; // 0x34
	char bManuallySetID : 1; // 0x38
};

struct UCharacterProgressionManager {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x30
};

struct UDistributionVector {
	char bCanBeBaked : 1; // 0x38
	char bIsDirty : 1; // 0x38
	char bBakedDataSuccesfully : 1; // 0x38
};

struct ULevelStreamingDynamic {
	char bInitiallyLoaded : 1; // 0x160
	char bInitiallyVisible : 1; // 0x160
};

struct UTeleportToDemogorgonPortalInteraction {
	float _enterPortalPhaseDuration; // 0x6d8
	float _cancelTeleportingPhaseDuration; // 0x6dc
	UPortalTargetingComponent* _portalTargetingComponent; // 0x6e0
	UPortalPlacerStateComponent* _portalPlacerState; // 0x6e8
	ADemogorgonPortal* _startingPortal; // 0x6f0
	ADemogorgonPortal* _targetedPortal; // 0x6f8
	ADBDPlayer* _interactingPlayer; // 0x700
	AActor* _huskRef; // 0x768
	AActor* ClassToSpawnForHusk; // 0x770
};

struct UIsHighestTierOriginatingPerk {
	TArray<UStatusEffect*> _applicableEffects; // 0xe8
};

struct UDBDPrimaryDataAsset {
	FPrimaryAssetType AssetType; // 0x38
};

struct UDateTimerUpdater {
	TMap<UDateTimeProvider*, FDateTimerArray> _timers; // 0x38
	TMap<UDateTimeProvider*, UDateTimeProvider*> _dateTimeProvider; // 0x88
};

struct UComboBoxWidgetStyle {
	FComboBoxStyle ComboBoxStyle; // 0x38
};

struct US28P02 {
	float _healingSpeedGainPercentage[0x3]; // 0x488
	bool _canSelfHeal; // 0x494
	float _selfHealSpeedPenalty[0x3]; // 0x498
};

struct UMapActorDetectorComponent {
	FMulticastInlineDelegate OnActorDetected; // 0xb8
	TArray<EMapActorCategory> CollectedCategories; // 0xc8
	UPrimitiveComponent* _primitive; // 0xd8
};

struct UBTTask_SetFocusCooldown {
	FBlackboardKeySelector BBOnObject; // 0x78
	FName ContextName; // 0xa8
	bool InfiniteDuration; // 0xb4
	float Duration; // 0xb8
};

struct UAddon_TormentMode_20 {
	float _lingerDuration; // 0x298
};

struct UUMGBloodStoreRowWidget {
	UHorizontalBox* ItemContainer; // 0x310
	UCanvasPanel* LockStatusPanel; // 0x318
	UCanvasPanel* HardLockedStatusPanel; // 0x320
	int32_t _purchasedItemsNbr; // 0x328
	int32_t _requiredItemNbr; // 0x32c
	EBloodStoreRowStyle _rowStyle; // 0x330
	FMargin _itemPadding; // 0x334
	TSoftClassPtr<UObject> _itemWidgetClass; // 0x348
	UObject* _itemClass; // 0x378
};

struct UDecalSpawnerCollection {
	TMap<FName, UDecalSpawner*> _decalSpawners; // 0x30
};

struct UBasicOverlays {
	TArray<FOverlayItem> Overlays; // 0x30
};

struct UOwningSlasherHasBeenStill {
	float _secondsOfStillnessRequired; // 0xd0
};

struct UMaterialExpressionRotator {
	FExpressionInput Coordinate; // 0x48
	FExpressionInput Time; // 0x64
	float CenterX; // 0x80
	float CenterY; // 0x84
	float Speed; // 0x88
	uint32_t ConstCoordinate; // 0x8c
};

struct ASnowman {
	FDBDTunableRowHandle _timeToRespawn; // 0x3e0
	FDBDTunableRowHandle _timeToBeDestroyed; // 0x408
	ESnowmanState _snowmanState; // 0x430
	ESnowmanDestructionType _snowmanDestructionType; // 0x431
	ACamperPlayer* _survivorUsingThisSnowman; // 0x438
	USkeletalMeshComponent* _snowmanSkeletalMesh; // 0x4c0
	UDBDOutlineComponent* _snowmanOutlineComponent; // 0x4c8
	UCapsuleComponent* _snowmanCapsule; // 0x4d0
	UHideInSnowmanInteraction* _hideInSnowmanInteraction; // 0x4d8
	UChargeableComponent* _hideInSnowmanInteractionChargeable; // 0x4e0
	UInteractor* _snowmanInteractor; // 0x4e8
	UPrimitiveComponent* _snowmanInteractionZone; // 0x4f0
	USnowmanAttackableComponent* _snowmanAttackableComponent; // 0x4f8
	bool _isAcquiredFromPool; // 0x500
	bool _isMoving; // 0x520
};

struct UMediaPlayer {
	FMulticastInlineDelegate OnEndReached; // 0x30
	FMulticastInlineDelegate OnMediaClosed; // 0x40
	FMulticastInlineDelegate OnMediaOpened; // 0x50
	FMulticastInlineDelegate OnMediaOpenFailed; // 0x60
	FMulticastInlineDelegate OnPlaybackResumed; // 0x70
	FMulticastInlineDelegate OnPlaybackSuspended; // 0x80
	FMulticastInlineDelegate OnSeekCompleted; // 0x90
	FMulticastInlineDelegate OnTracksChanged; // 0xa0
	FTimespan CacheAhead; // 0xb0
	FTimespan CacheBehind; // 0xb8
	FTimespan CacheBehindGame; // 0xc0
	bool NativeAudioOut; // 0xc8
	bool PlayOnOpen; // 0xc9
	char Shuffle : 1; // 0xcc
	char Loop : 1; // 0xcc
	UMediaPlaylist* Playlist; // 0xd0
	int32_t PlaylistIndex; // 0xd8
	FTimespan TimeDelay; // 0xe0
	float HorizontalFieldOfView; // 0xe8
	float VerticalFieldOfView; // 0xec
	FRotator ViewRotation; // 0xf0
	FGuid PlayerGuid; // 0x128
};

struct AClipManager {
	TArray<UDBDClipRegionComponent*> _clippingZones; // 0x230
	TSet<UMeshComponent*> _meshComponents; // 0x240
	TArray<FMaterialOriginalState> _dissolvedMeshes; // 0x290
	TMap<UMaterialInterface*, UMaterialInterface*> _normal2dissolve; // 0x2a0
	TMap<UMaterialInterface*, UMaterialInterface*> _dissolve2normal; // 0x2f0
	UDataTable* _sphericalDissolveMaterials; // 0x340
};

struct UCustomWidgetWrapper_InGame {
	int32_t VirtualJoystickIndex; // 0x1a0
};

struct UBTService_CopyBBEntry {
	FBlackboardKeySelector BBFrom; // 0x80
	FBlackboardKeySelector BBTo; // 0xb0
	bool CopyOnlyValidKeyValue; // 0xe0
};

struct UAICharacterEvasionBehaviour {
	ADBDPlayer* _prey; // 0x58
	ADBDAIPlayerController* _preyAIController; // 0x60
	AActor* _currentEscapePoint; // 0x68
	UCharacterEvasionBehaviourData* _characterEvasionData; // 0x70
};

struct UAddon_TheBlight_14 {
	float _speedIncreasePerDash; // 0x298
};

struct USoundNodeModulator {
	float PitchMin; // 0x50
	float PitchMax; // 0x54
	float VolumeMin; // 0x58
	float VolumeMax; // 0x5c
};

struct UParticleModuleSubUV {
	USubUVAnimation* Animation; // 0x38
	FRawDistributionFloat SubImageIndex; // 0x40
	char bUseRealTime : 1; // 0x70
};

struct UListView {
	EOrientation Orientation; // 0x2f8
	ESelectionMode SelectionMode; // 0x2f9
	EConsumeMouseWheel ConsumeMouseWheel; // 0x2fa
	bool bClearSelectionOnClick; // 0x2fb
	bool bIsFocusable; // 0x2fc
	float EntrySpacing; // 0x300
	bool bReturnFocusToSelection; // 0x304
	TArray<UObject*> ListItems; // 0x308
	FMulticastInlineDelegate BP_OnEntryInitialized; // 0x328
	FMulticastInlineDelegate BP_OnItemClicked; // 0x338
	FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x348
	FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x358
	FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x368
	FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x378
};

struct AAtlantaOfflineLobbyCamera {
	float ZCameraPositionOffsetMultiplier; // 0x7a0
	float _kDefaultAspectRatio; // 0x7a8
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

struct AEscapeDoor {
	TArray<FVector> EscapePositions; // 0x338
	TArray<UObject*> EscapeFire; // 0x348
	UChargeableComponent* _killerOpenChargeable; // 0x358
	UChargeableComponent* _openChargeable; // 0x360
	UAkComponent* _ak_audio_escape; // 0x368
	UEscapeDoorAnimInstance* _escapeDoorAnimInstance; // 0x370
	USceneComponent* _rootComponent; // 0x378
	bool _activated; // 0x380
	AEscapeBlocker* _escapeBlockerInstance; // 0x388
	USpotLightComponent* _spotlight; // 0x390
	ACamperPlayer* _localOverlappingCamper; // 0x3e0
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x3f0
	UBlockableComponent* _doorSwitchBlockableComponent; // 0x3f8
};

struct UTimelineTemplate {
	float TimelineLength; // 0x30
	ETimelineLengthMode LengthMode; // 0x34
	char bAutoPlay : 1; // 0x35
	char bLoop : 1; // 0x35
	char bReplicated : 1; // 0x35
	char bIgnoreTimeDilation : 1; // 0x35
	float UpdateInterval; // 0x38
	TArray<FTTEventTrack> EventTracks; // 0x40
	TArray<FTTFloatTrack> FloatTracks; // 0x50
	TArray<FTTVectorTrack> VectorTracks; // 0x60
	TArray<FTTLinearColorTrack> LinearColorTracks; // 0x70
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x80
	FGuid TimelineGuid; // 0x90
	FName VariableName; // 0xa0
	FName DirectionPropertyName; // 0xac
	FName UpdateFunctionName; // 0xb8
	FName FinishedFunctionName; // 0xc4
};

struct UARTrackedGeometry {
	FGuid UniqueId; // 0x30
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	UMRMeshComponent* UnderlyingMesh; // 0xb0
	EARObjectClassification ObjectClassification; // 0xb8
	int32_t LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0
};

struct UInterpTrackFloatMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x98
	FName ParamName; // 0xa8
};

struct UNiagaraEmitter {
	bool bLocalSpace; // 0x30
	bool bDeterminism; // 0x31
	int32_t RandomSeed; // 0x34
	EParticleAllocationMode AllocationMode; // 0x38
	int32_t PreAllocationCount; // 0x3c
	FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x40
	FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x68
	FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x90
	FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xb8
	ENiagaraSimTarget SimTarget; // 0xe0
	FBox FixedBounds; // 0xe4
	int32_t MinDetailLevel; // 0x100
	int32_t MaxDetailLevel; // 0x104
	FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x108
	FNiagaraPlatformSet Platforms; // 0x120
	FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x140
	char bInterpolatedSpawning : 1; // 0x150
	char bFixedBounds : 1; // 0x150
	char bUseMinDetailLevel : 1; // 0x150
	char bUseMaxDetailLevel : 1; // 0x150
	char bOverrideGlobalSpawnCountScale : 1; // 0x150
	char bRequiresPersistentIDs : 1; // 0x150
	float MaxDeltaTimePerTick; // 0x154
	uint32_t DefaultShaderStageIndex; // 0x158
	uint32_t MaxUpdateIterations; // 0x15c
	TSet<uint32_t> SpawnStages; // 0x160
	char bSimulationStagesEnabled : 1; // 0x1b0
	char bDeprecatedShaderStagesEnabled : 1; // 0x1b0
	char bLimitDeltaTime : 1; // 0x1b0
	FString UniqueEmitterName; // 0x1b8
	TArray<UNiagaraRendererProperties*> RendererProperties; // 0x1c8
	TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1d8
	TArray<UNiagaraSimulationStageBase*> SimulationStages; // 0x1e8
	UNiagaraScript* GPUComputeScript; // 0x1f8
	TArray<FName> SharedEventGeneratorIds; // 0x200
};

struct USocialManager {
	TArray<USocialToolkit*> SocialToolkits; // 0x50
	USocialDebugTools* SocialDebugTools; // 0x60
};

struct UTcpMessagingSettings {
	bool EnableTransport; // 0x30
	FString ListenEndpoint; // 0x38
	TArray<FString> ConnectToEndpoints; // 0x48
	int32_t ConnectionRetryDelay; // 0x58
	bool bStopServiceWhenAppDeactivates; // 0x5c
};

struct UTerrorRadiusIndicatorWidget {
	float _anchorY; // 0x348
};

struct UBTDecorator_ConeCheck {
	float ConeHalfAngle; // 0x70
	FBlackboardKeySelector ConeOrigin; // 0x78
	FBlackboardKeySelector ConeDirection; // 0xa8
	FBlackboardKeySelector Observed; // 0xd8
};

struct UFlurryOfKnives {
	int32_t _replicatedNumOfStacksReduction; // 0x720
	bool _isSuperModeThrow; // 0x724
	UStatusEffect* _selfSlowEffect; // 0x770
	FDBDTunableRowHandle _flurryOfKnivesEnterDuration; // 0x778
	FDBDTunableRowHandle _flurryOfKnivesExitDuration; // 0x7a0
	FDBDTunableRowHandle _chargeTime; // 0x7c8
	FTunableStat _baseTimeBetweenThrows; // 0x7f0
	UCurveFloat* _throwRateModifierByKnivesThrown; // 0x870
	FDBDTunableRowHandle _superModeThrowRateModifier; // 0x878
	FDBDTunableRowHandle _knivesLaunchSpeed; // 0x8a0
	FDBDTunableRowHandle _convergencePointDistance; // 0x8c8
	UCurveFloat* _coneOfFireAngleCurve; // 0x8f0
	FDBDTunableRowHandle _consecutiveKnivesStacksDecayTime; // 0x8f8
	FDBDTunableRowHandle _maxConsecutiveKnivesStacks; // 0x920
	UCurveFloat* _movementSpeedByKnivesThrown; // 0x948
	FDBDTunableRowHandle _superModeBaseMovementSpeed; // 0x950
	FDBDTunableRowHandle _baseWalkSpeed; // 0x978
	UCurveFloat* _recoilIntensityByKnivesThrown; // 0x9a0
	FDBDTunableRowHandle _recoilDuration; // 0x9a8
	FDBDTunableRowHandle _recoilAngle; // 0x9d0
	FDBDTunableRowHandle _maximumRecoilAngleVariation; // 0x9f8
	FDBDTunableRowHandle _rotationSpeedAdjustmentTime; // 0xa20
	FDBDTunableRowHandle _aimingStanceRotationYawScaleAdjustment; // 0xa48
	FDBDTunableRowHandle _aimingStanceRotationPitchScaleAdjustment; // 0xa70
	FDBDTunableRowHandle _throwingRotationYawScaleAdjustment; // 0xa98
	FDBDTunableRowHandle _throwingRotationPitchScaleAdjustment; // 0xac0
	FDBDTunableRowHandle _aimingStanceGamepadRotationYawScaleAdjustment; // 0xae8
	FDBDTunableRowHandle _aimingStanceGamepadRotationPitchScaleAdjustment; // 0xb10
	FDBDTunableRowHandle _throwingGamepadRotationYawScaleAdjustment; // 0xb38
	FDBDTunableRowHandle _throwingGamepadRotationPitchScaleAdjustment; // 0xb60
	UCurveFloat* _aimingGamepadPitchCurve; // 0xb88
	UCurveFloat* _aimingGamepadYawCurve; // 0xb90
	UCurveFloat* _throwingGamepadPitchCurve; // 0xb98
	UCurveFloat* _throwingGamepadYawCurve; // 0xba0
};

struct UK24WhipAttackOpenSubstate {
	UCurveFloat* _lvl3SpeedCurve; // 0x130
};

struct UPlayerInput {
	TArray<FKeyBind> DebugExecBindings; // 0x128
	TArray<FInputActionKeyMapping> ActionMappings; // 0x148
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x158
	TArray<FName> InvertedAxis; // 0x168
};

struct UPhysicsHandleComponent {
	UPrimitiveComponent* GrabbedComponent; // 0xb8
	char bSoftAngularConstraint : 1; // 0xcc
	char bSoftLinearConstraint : 1; // 0xcc
	char bInterpolateTarget : 1; // 0xcc
	float LinearDamping; // 0xd0
	float LinearStiffness; // 0xd4
	float AngularDamping; // 0xd8
	float AngularStiffness; // 0xdc
	float InterpolationSpeed; // 0x140
};

struct AAtmosphericFog {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x230
};

struct UNiagaraDataInterfaceColorCurve {
	FRichCurve RedCurve; // 0x60
	FRichCurve GreenCurve; // 0xe0
	FRichCurve BlueCurve; // 0x160
	FRichCurve AlphaCurve; // 0x1e0
};

struct ASpectatorBeaconClient {
	FString DestSessionId; // 0x2f8
	FSpectatorReservation PendingReservation; // 0x308
	ESpectatorClientRequestType RequestType; // 0x380
	bool bPendingReservationSent; // 0x381
	bool bCancelReservation; // 0x382
};

struct ULoadingImagesDataProvider {
	TMap<FName, FLoadingImages> _cachedLoadingImages; // 0x30
	UDynamicContentHolder* _owningDynamicContentHolder; // 0x80
};

struct UEditPivotToolActionPropertySet {
	bool bUseWorldBox; // 0x60
};

struct UAtlCookedMaps {
	TArray<FAtlCookedMapDescription> Descriptions; // 0x38
};

struct UPacketHandlerProfileConfig {
	TArray<FString> Components; // 0x30
};

struct UUMGRefundPopup {
	UVerticalBox* RefundDataContainer; // 0x3e8
	TSoftClassPtr<UObject> RefundDataWidgetClass; // 0x3f0
};

struct UUMGCustomizationItemWidget {
	UImage* RarityBackground; // 0x310
	UImage* PaintOverlay; // 0x318
	UImage* Icon; // 0x320
	UCanvasPanel* NewIndicator; // 0x328
	UCanvasPanel* OutfitIndicator; // 0x330
	UVerticalBox* PricesContainer; // 0x338
	UCanvasPanel* ItemSelectedBorder; // 0x340
	UCanvasPanel* EquippedContainer; // 0x348
	TSoftClassPtr<UObject> _customizationItemPriceWidgetClass; // 0x350
	TArray<UUMGCustomizationItemPriceWidget*> _priceWidgets; // 0x380
	int32_t _itemIndex; // 0x390
	FName _itemId; // 0x394
};

struct ABaseVFX {
	bool _shouldLoadOnServer; // 0x230
};

struct UAkGroupValue {
	uint32_t GroupShortID; // 0x48
};

struct UAuthoritativePoolProjectileProviderAdapter {
	UAuthoritativeActorPoolComponent* _pool; // 0x38
};

struct UMeshSelectionTool {
	UMeshSelectionToolProperties* SelectionProps; // 0x210
	UMeshSelectionEditActions* SelectionActions; // 0x218
	UMeshSelectionToolActionPropertySet* EditActions; // 0x220
	UMeshSelectionSet* Selection; // 0x228
	TArray<AActor*> SpawnedActors; // 0x230
};

struct UGearhead {
	float _perkActivationDuration[0x3]; // 0x3d0
	bool _greatSkillCheck; // 0x3dc
	bool _basicAttack; // 0x3dd
	float _minimumAuraRevealDuration; // 0x3e0
	int32_t _attacksNeededToActivate; // 0x3e4
	int32_t _numAttacksBeforeActivation; // 0x3e8
	TMap<AGenerator*, FFastTimer> _timersBeforeUnreveal; // 0x3f0
	TArray<AGenerator*> _markedGenerators; // 0x440
	TArray<AGenerator*> _revealedGenerators; // 0x450
	TArray<AGenerator*> _local_revealedGenerators; // 0x460
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x68
};

struct ADBDAIBTController {
	UBehaviorTree* BehaviorTree; // 0x5d8
	TArray<UAISkill*> BaseSkills; // 0x5e0
	TArray<UAISkill*> RoleSkills; // 0x5f0
	TArray<FAISkillPerk> PerkSkills; // 0x600
	bool ListenToAttackEvents; // 0x610
	UDBDAIPerceptionComponent* _dbdPerception; // 0x618
	UDBDBlackboardComponent* _dbdBlackboard; // 0x620
	UDBDPathFollowingComponent* _dbdPathFollowing; // 0x628
	UDBDBehaviorTreeComponent* _dbdBehaviorTree; // 0x630
	UDBDNavMeshExplorerComponent* _navMeshExplorer; // 0x638
	UDBDAIStateComponent* _aiState; // 0x640
	UDBDAIGoalComponent* _aiGoal; // 0x648
	TMap<FGameplayTag, UBehaviorTree*> _setDynamicSubtrees; // 0x660
	TArray<UAISkill*> _aiSkills; // 0x6b0
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch {
	FGameplayTagContainer Tags; // 0x30
};

struct UUMGFriendListTabWidget {
	UUMGExpandableListWidget* SentInviteToParty; // 0x300
	UUMGExpandableListWidget* ConnectedFriendsExpandableList; // 0x308
	UUMGExpandableListWidget* DisconnectedFriendsExpandableList; // 0x310
};

struct AWindDirectionalSource {
	UWindDirectionalSourceComponent* Component; // 0x230
};

struct UStreamingSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x48
	char WarnIfTimeLimitExceeded : 1; // 0x48
	float TimeLimitExceededMultiplier; // 0x4c
	float TimeLimitExceededMinTime; // 0x50
	int32_t MinBulkDataSizeForAsyncLoading; // 0x54
	char UseBackgroundLevelStreaming : 1; // 0x58
	char AsyncLoadingUseFullTimeLimit : 1; // 0x58
	float AsyncLoadingTimeLimit; // 0x5c
	float PriorityAsyncLoadingExtraTime; // 0x60
	float LevelStreamingActorsUpdateTimeLimit; // 0x64
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x68
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x6c
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x70
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x74
	char FlushStreamingOnExit : 1; // 0x78
	char EventDrivenLoaderEnabled : 1; // 0x78
};

struct UInAppPurchaseComponent {
	FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xb8
	FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xc8
	FMulticastInlineDelegate GetItemsDetailsFailure; // 0xd8
	FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xe8
	FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xf8
	FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x108
	FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x118
};

struct UConvertToPolygonsTool {
	UConvertToPolygonsToolProperties* Settings; // 0x90
	UPreviewMesh* PreviewMesh; // 0x98
};

struct UAkPS5InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UMultipleMadSurvivorsQEEvaluator {
	int32_t _requiredTier; // 0x90
	TSet<TWeakObjectPtr<AActor>> _madSurvivors; // 0x98
};

struct UBrushStampIndicator {
	float BrushRadius; // 0x40
	float BrushFalloff; // 0x44
	FVector BrushPosition; // 0x48
	FVector BrushNormal; // 0x54
	bool bDrawIndicatorLines; // 0x60
	bool bDrawRadiusCircle; // 0x61
	bool bDrawFalloffCircle; // 0x62
	int32_t SampleStepCount; // 0x64
	FLinearColor LineColor; // 0x68
	float LineThickness; // 0x78
	bool bDepthTested; // 0x7c
	bool bDrawSecondaryLines; // 0x7d
	float SecondaryLineThickness; // 0x80
	FLinearColor SecondaryLineColor; // 0x84
	UPrimitiveComponent* AttachedComponent; // 0x98
};

struct UUMGSubscriptionsPageScrollWidget {
	TSoftClassPtr<UObject> SubscriptionPackButtonClass; // 0x438
	FVector2D ItemPadding; // 0x468
};

struct UFSM_RefCondition {
	UFSM_Condition* _refcondition; // 0x38
};

struct UOniPounceInteraction {
	UOniDemonModeAttackStateComponent* _chargedAttackState; // 0x6e8
	UDemonModeComponent* _demonModeComponent; // 0x6f0
	ASlasherPlayer* _owningSlasher; // 0x6f8
};

struct UIpNetDriver {
	char LogPortUnreach : 1; // 0x768
	char AllowPlayerPortUnreach : 1; // 0x768
	uint32_t MaxPortCountToTry; // 0x76c
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x77c
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x780
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x784
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x788
	double MaxSecondsInReceive; // 0x790
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x798
	float ResolutionConnectionTimeout; // 0x79c
};

struct UUMGLoadoutBaseWidget {
	UUMGLoadoutItemButton* ItemOrPowerButton; // 0x300
	UUMGLoadoutItemButton* AddonFirstButton; // 0x308
	UUMGLoadoutItemButton* AddonSecondButton; // 0x310
	UUMGLoadoutItemButton* OfferingButton; // 0x318
	UUMGLoadoutItemButton* PerkFirstButton; // 0x320
	UUMGLoadoutItemButton* PerkSecondButton; // 0x328
	UUMGLoadoutItemButton* PerkThirdButton; // 0x330
	UUMGLoadoutItemButton* PerkFourthButton; // 0x338
	TArray<UUMGLoadoutItemButton*> LoadoutItemButtons; // 0x340
	bool usingMatchRules; // 0x350
	bool perkSlotsLockedByAdmin; // 0x351
	bool IsSlasher; // 0x352
};

struct UInterpGroupInst {
	UInterpGroup* Group; // 0x30
	AActor* GroupActor; // 0x38
	TArray<UInterpTrackInst*> TrackInst; // 0x40
};

struct UAISense_Damage {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x90
};

struct UPaperTileMap {
	bool Draft; // 0x30
	bool Licensed; // 0x31
	int32_t MapWidth; // 0x34
	int32_t MapHeight; // 0x38
	int32_t TileWidth; // 0x3c
	int32_t TileHeight; // 0x40
	float PixelsPerUnrealUnit; // 0x44
	float SeparationPerTileX; // 0x48
	float SeparationPerTileY; // 0x4c
	float SeparationPerLayer; // 0x50
	TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x58
	UMaterialInterface* Material; // 0x88
	TArray<UPaperTileLayer*> TileLayers; // 0x90
	float CollisionThickness; // 0xa0
	ESpriteCollisionMode SpriteCollisionDomain; // 0xa4
	ETileMapProjectionMode ProjectionMode; // 0xa5
	int32_t HexSideLength; // 0xa8
	UBodySetup* BodySetup; // 0xb0
	int32_t LayerNameIndex; // 0xb8
};

struct UQuestEventsHandlerTest {
	ADBDPlayer* _dbdPlayer; // 0x100
};

struct URecentlyActiveStateTagEvaluatorCondition {
	FGameplayTag _stateTag; // 0x4c
};

struct UInputKeySelector {
	FButtonStyle WidgetStyle; // 0x128
	FTextBlockStyle TextStyle; // 0x3d0
	FInputChord SelectedKey; // 0x658
	FSlateFontInfo Font; // 0x680
	FMargin Margin; // 0x6d8
	FLinearColor ColorAndOpacity; // 0x6e8
	FText KeySelectionText; // 0x6f8
	FText NoKeySpecifiedText; // 0x710
	bool bAllowModifierKeys; // 0x728
	bool bAllowGamepadKeys; // 0x729
	TArray<FKey> EscapeKeys; // 0x730
	FMulticastInlineDelegate OnKeySelected; // 0x740
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x750
};

struct UCoreGameManualPanelWidget {
	EGameManualMenuState _currentSelectedManualMenu; // 0x2e0
	EHelpType _currentGameManualTopic; // 0x2e1
	UPanelWidget* CategoryPanel; // 0x2e8
	UCoreGameManualCategoryButton* GameCategoryButton; // 0x2f0
	UCoreGameManualCategoryButton* SurvivorCategoryButton; // 0x2f8
	UCoreGameManualCategoryButton* KillerCategoryButton; // 0x300
	UPanelWidget* TopicsPanel; // 0x308
	UCoreTabContainerWidget* GameManualTopicsTabs; // 0x310
	UDBDTextBlock* GameManualContentTitle; // 0x318
	UDBDTextBlock* GameManualContentSubtitle; // 0x320
	UDBDRichTextBlock* GameManualContentText; // 0x328
	FMulticastInlineDelegate _onSetOnboardingMenuSubtitleDelegate; // 0x330
	FMulticastInlineDelegate _onResetOnboardingMenuSubtitleDelegate; // 0x340
};

struct ULuminARCandidateImage {
	bool bUseUnreliablePose; // 0x60
	bool bImageIsStationary; // 0x61
};

struct USourceEffectDynamicsProcessorPreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0x98
};

struct UParticleSystemComponent {
	UParticleSystem* Template; // 0x428
	TArray<UMaterialInterface*> EmitterMaterials; // 0x430
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x440
	char bResetOnDetach : 1; // 0x451
	char bUpdateOnDedicatedServer : 1; // 0x451
	char bAllowRecycling : 1; // 0x451
	char bAutoManageAttachment : 1; // 0x451
	char bAutoAttachWeldSimulatedBodies : 1; // 0x451
	char bWarmingUp : 1; // 0x452
	char bOverrideLODMethod : 1; // 0x452
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x452
	ParticleSystemLODMethod LODMethod; // 0x45f
	EParticleSignificanceLevel RequiredSignificance; // 0x460
	TArray<FParticleSysParam> InstanceParameters; // 0x468
	FMulticastInlineDelegate OnParticleSpawn; // 0x478
	FMulticastInlineDelegate OnParticleBurst; // 0x488
	FMulticastInlineDelegate OnParticleDeath; // 0x498
	FMulticastInlineDelegate OnParticleCollide; // 0x4a8
	bool bOldPositionValid; // 0x4b8
	FVector OldPosition; // 0x4bc
	FVector PartSysVelocity; // 0x4c8
	float WarmupTime; // 0x4d4
	float WarmupTickRate; // 0x4d8
	float SecondsBeforeInactive; // 0x4e0
	float MaxTimeBeforeForceUpdateTransform; // 0x4e8
	TArray<UParticleSystemReplay*> ReplayClips; // 0x508
	float CustomTimeDilation; // 0x520
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x58c
	FName AutoAttachSocketName; // 0x594
	EAttachmentRule AutoAttachLocationRule; // 0x5a0
	EAttachmentRule AutoAttachRotationRule; // 0x5a1
	EAttachmentRule AutoAttachScaleRule; // 0x5a2
	FMulticastInlineDelegate OnSystemFinished; // 0x5d0
};

struct UDrawPolygonToolStandardProperties {
	EDrawPolygonDrawMode PolygonType; // 0x58
	EDrawPolygonOutputMode OutputMode; // 0x59
	float FeatureSizeRatio; // 0x5c
	float ExtrudeHeight; // 0x60
	int32_t Steps; // 0x64
	bool bAllowSelfIntersections; // 0x68
	bool bShowGizmo; // 0x69
};

struct ALevelBounds {
	UBoxComponent* BoxComponent; // 0x230
	bool bAutoUpdateBounds; // 0x238
};

struct UOverlayMenuScreenUMG {
	UUMGAtlantaSettingScreen* _atlOverlayMenuScreen; // 0x300
};

struct ACamperPlayer {
	FMulticastInlineDelegate OnHookedStateChanged; // 0x10d8
	FMulticastInlineDelegate OnGuidedStateChanged; // 0x10e8
	FMulticastInlineDelegate OnPickedUpDelegate; // 0x10f8
	FMulticastInlineDelegate OnPickedUpEndDelegate; // 0x1108
	FMulticastInlineDelegate OnHPSlotChanged; // 0x1118
	FMulticastInlineDelegate OnImmobilizeStateChanged; // 0x1168
	FMulticastInlineDelegate OnHookEscapeFailedCosmetic; // 0x11a8
	float InputMashCount; // 0x11b8
	float InputMashDecayTime; // 0x11bc
	FName ReverseBearTrapAttachSocket; // 0x11c0
	bool isBeingDissolved; // 0x11cc
	float FootprintAudibleRange; // 0x11d0
	UStalkedComponent* StalkedComponent; // 0x11d8
	float CameraResetToleranceYaw; // 0x11e0
	float CameraResetTolerancePitch; // 0x11e4
	float CameraRecenterOffsetYaw; // 0x11e8
	float CameraRecenterOffsetPitch; // 0x11ec
	EGender Gender; // 0x11f0
	UCurveFloat* DropStaggerDuration; // 0x11f8
	UCurveFloat* DropStaggerMaxSpeed; // 0x1200
	float TimeforDeathWhileCrawling; // 0x1208
	float TimeforDeathWhileHooked; // 0x120c
	float SecondsUntilFootprintTrigger; // 0x1210
	bool TriggerAfflictionHUDIntro; // 0x1214
	UCamperStillnessTrackerComponent* _stillnessTracker; // 0x1298
	float PartiallyHiddenStillnessThreshold; // 0x12a0
	AActor* _escape; // 0x12a8
	AActor* _overlappingEscape; // 0x12b0
	USpherePlayerOverlapComponent* ProximityZone; // 0x12b8
	FDBDTimer _dropStaggerTimer; // 0x12d8
	UCapsuleComponent* SlashableZone; // 0x1308
	UCapsuleComponent* HookSlashableZone; // 0x1310
	UCamperSlashableComponent* _camperSlashable; // 0x1318
	UTerrorRadiusReceiverComponent* _terrorRadiusReceiverComponent; // 0x1320
	float CrouchCapsuleHalfHeight; // 0x1328
	float IKOffsetRightFoot; // 0x132c
	float IKOffsetLeftFoot; // 0x1330
	UDBDPawnSensingComponent* _camperSensor; // 0x1340
	USurviveTimerScoreEventComponent* _surviveTimerScoreComponent; // 0x1348
	TArray<ADBDPlayer*> _foundCampers; // 0x1368
	TArray<ADBDPlayer*> _potentialSaviors; // 0x1378
	UCamperHealthComponent* _healthComponent; // 0x1390
	UChargeableComponent* _hpSlot01; // 0x1398
	UChargeableComponent* _hpSlot02; // 0x13a0
	UChargeableComponent* _mendChargeable; // 0x13a8
	UBloodTrailSettings* _bloodTrailSettings; // 0x13b0
	UCamperBloodTrailComponent* _bloodTrailComponent; // 0x13b8
	UKillerInstinctComponent* _killerInstinctComponent; // 0x13c0
	UCameraAttachmentComponent* _cameraAttachment; // 0x13c8
	UCharmSpawnerComponent* _charmSpawnerComponent; // 0x13d0
	UHookableComponent* _hookableComponent; // 0x13d8
	UProtectionHitComponent* _protectionHitComponent; // 0x13e0
	UScreamComponent* _screamComponent; // 0x13e8
	UCharacterPositionRecorderComponent* _positionRecorder; // 0x13f0
	bool _runInputPressed; // 0x14ac
	bool _trapIndicatorActive; // 0x14d0
	TWeakObjectPtr<ACamperPlayer> _revealedSurvivor; // 0x14d4
	UCamperEndGameComponent* _camperEndGameComponent; // 0x14e0
	UAkComponent* _noOcclusionAkComponent; // 0x14e8
	bool _isHealingKOCamper; // 0x1514
	bool _isSkillCheckFailed; // 0x1515
	bool _isBeingSacrificed; // 0x1516
	bool _isWiggleProgressionAllowed; // 0x1517
	UMoveComponentToComponent* _meshMover; // 0x15b8
	USurvivorHitSprintEffect* _sprintEffect; // 0x15c0
};

struct UTheMettleOfMan {
	int32_t _tokenNeededToActivate[0x3]; // 0x3d0
	float _revealOutsideRange[0x3]; // 0x3dc
	bool _mustBeInjured; // 0x3e8
	int32_t _numTokenSoFar; // 0x3ec
	ETheMettleOfManPhase _currentPhase; // 0x3f0
	UStatusEffect* _revealToKillerEffect; // 0x400
};

struct USoundMix {
	char bApplyEQ : 1; // 0x30
	float EQPriority; // 0x34
	FAudioEQEffect EQSettings; // 0x38
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x78
	float initialDelay; // 0x88
	float FadeInTime; // 0x8c
	float Duration; // 0x90
	float FadeOutTime; // 0x94
};

struct UMeatHookOutlineUpdateStrategy {
	FLinearColor HookedOutlineColorSlasher; // 0x130
	FLinearColor CarryingOutlineColorSlasher; // 0x140
	FLinearColor DefaultOutlineColorSlasher; // 0x150
	FLinearColor VisibleOutlineColorCamper; // 0x160
};

struct UEmblemTooltipWidget {
	UImage* HeaderBackground; // 0x338
	UTextBlock* SubTitleLabel; // 0x340
	UImage* HeaderSmoke; // 0x348
	UVerticalBox* DataContainer; // 0x350
	UUMGTallyEmblemProgressBar* TallyEmblemProgressBar; // 0x358
	TSoftClassPtr<UObject> ProgressionDataWidgetClass; // 0x360
};

struct US28P01 {
	float _auraRevealDuration[0x3]; // 0x3d0
	float _auraRevealRange[0x3]; // 0x3dc
	UChargeableComponent* _S28P01ChargeableComponent; // 0x3e8
	bool _isPerkActive; // 0x3f0
	bool _isInteractionOngoing; // 0x3f1
	ADBDPlayer* _playerOwner; // 0x3f8
};

struct UBTTask_SetMovementMode {
	ECharacterMovementTypes MovementMode; // 0x78
};

struct UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x108
	FGuid ExpressionGUID; // 0x114
	FName Group; // 0x124
};

struct UParticleModuleMeshRotationRateOverLife {
	FRawDistributionVector RotRate; // 0x38
	char bScaleRotRate : 1; // 0x80
};

struct UMaterialExpressionSpriteTextureSampler {
	bool bSampleAdditionalTextures; // 0x130
	int32_t AdditionalSlotIndex; // 0x134
	FText SlotDisplayName; // 0x138
};

struct UBrushBuilder {
	FString BitmapFilename; // 0x30
	FString ToolTip; // 0x40
	char NotifyBadParams : 1; // 0x50
	TArray<FVector> Vertices; // 0x58
	TArray<FBuilderPoly> Polys; // 0x68
	FName Layer; // 0x78
	char MergeCoplanars : 1; // 0x84
};

struct UActionButton {
	FSlateBrush DefaultImage; // 0x300
	UImage* IconImage; // 0x390
	UImage* ToggleSmokeImage; // 0x398
	UButton* Button; // 0x3a0
	float DefaultOpacity; // 0x3a8
	float ToggledOpacity; // 0x3ac
	float DisabledOpacity; // 0x3b0
	FSlateBrush Normal; // 0x3b8
	FSlateBrush Toggled; // 0x448
	FSlateBrush Disabled; // 0x4d8
	EActionButtonState _currentState; // 0x568
	EActionButtonState _previousState; // 0x569
};

struct UUMGCloseTooltipWidget {
	UButton* FullScreenButton; // 0x300
};

struct UBTTask_Interact {
	FBlackboardKeySelector BBInteractorObj; // 0x78
	EPawnInputPressTypes Input; // 0xa8
	float OnFailFocusCooldownDuration; // 0xac
	bool PropagateCooldownOnInteractable; // 0xb0
	float FailStartInteractTimeLimit; // 0xb4
};

struct UBoxOcclusionQueryComponent {
	float TimeUntilOccluded; // 0x450
};

struct UFontImportOptions {
	FFontImportOptionsData Data; // 0x30
};

struct UVirtualKeyboardManager {
	UVirtualKeyboard* _virtualKeyboard; // 0x30
};

struct USourceEffectSimpleDelayPreset {
	FSourceEffectSimpleDelaySettings Settings; // 0x88
};

struct UDBDAtlantaTutorialParameters {
	float SurvTutorial_WiggleChargeRateMultiplier; // 0x30
};

struct ABaseSky {
	bool AdjustCullDistance; // 0x238
	bool EnableIBL; // 0x239
	float IBLContributionMultiplier; // 0x23c
	FLinearColor ProbesTintColor; // 0x240
	float ProbesSaturationValue; // 0x250
	FBHVRPerDetailModeFloat ASMDepthBias; // 0x258
	FBHVRPerDetailModeFloat ASMDepthAttenuation; // 0x2f8
};

struct ACullDistanceVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x268
	char bEnabled : 1; // 0x278
	char bUnbound : 1; // 0x278
};

struct UStaticMesh {
	FPerPlatformInt MinLOD; // 0x68
	bool bLimitLODRangeForShadow; // 0x6c
	FBHVRPerDetailModeInt ShadowMinLOD; // 0x70
	FBHVRPerDetailModeInt ShadowMaxLOD; // 0x110
	float LpvBiasMultiplier; // 0x1b0
	TArray<FStaticMaterial> StaticMaterials; // 0x1b8
	float LightmapUVDensity; // 0x1c8
	int32_t LightMapResolution; // 0x1cc
	int32_t LightMapCoordinateIndex; // 0x1d0
	float DistanceFieldSelfShadowBias; // 0x1d4
	bool bOverrideComponentDetailMode; // 0x1d8
	EDetailMode DetailMode; // 0x1d9
	int32_t DetailModeBitMask; // 0x1dc
	bool bOverrideReceivesDecals; // 0x1e0
	bool bReceivesDecals; // 0x1e1
	ELightmapGenerationMode LightmapGenerationMode; // 0x1e2
	FPerPlatformFloat DefaultLDMaxDrawDistance; // 0x1e4
	UBodySetup* BodySetup; // 0x1e8
	int32_t LODForCollision; // 0x1f0
	char bGenerateMeshDistanceField : 1; // 0x1f4
	char bStripComplexCollisionForConsole : 1; // 0x1f4
	char bHasNavigationData : 1; // 0x1f4
	char bSupportUniformlyDistributedSampling : 1; // 0x1f4
	char bSupportPhysicalMaterialMasks : 1; // 0x1f4
	char bIsBuiltAtRuntime : 1; // 0x1f4
	EBatchingMode BatchingMode; // 0x1f5
	int32_t BatchingDiameter; // 0x1f8
	char bAllowCPUAccess : 1; // 0x1fc
	char bSupportGpuUniformlyDistributedSampling : 1; // 0x1fc
	TArray<UStaticMeshSocket*> Sockets; // 0x220
	FVector PositiveBoundsExtension; // 0x240
	FVector NegativeBoundsExtension; // 0x24c
	FBoxSphereBounds ExtendedBounds; // 0x258
	int32_t ElementToIgnoreForTexFactor; // 0x274
	TArray<UAssetUserData*> AssetUserData; // 0x278
	UObject* EditableMesh; // 0x290
	UNavCollisionBase* NavCollision; // 0x298
};

struct UUMGCharacterScrollingInfoWidget {
	UUMGTeachablePerkButton* FirstTeachablePerk; // 0x300
	UUMGTeachablePerkButton* SecondTeachablePerk; // 0x308
	UUMGTeachablePerkButton* ThirdTeachablePerk; // 0x310
	UCanvasPanel* KillerInfoPanel; // 0x318
	UUMGInventoryItemButton* KillerPower; // 0x320
	UUMGHtmlRichText* CharacterBackstoryBox; // 0x328
	FText _killerPowerName; // 0x330
	FText _killerSpeedText; // 0x348
	FText _killerTerrorRadiusText; // 0x360
	FText _killerHeightText; // 0x378
	FText _perksTitle; // 0x390
	FText _teachablesTitle; // 0x3a8
	FText _powerTitle; // 0x3c0
	FText _attributesTitle; // 0x3d8
	UTextBlock* FirstTeachablePerkText; // 0x3f0
	UTextBlock* SecondTeachablePerkText; // 0x3f8
	UTextBlock* ThirdTeachablePerkText; // 0x400
	FText _backStoryTitle; // 0x408
	FMulticastInlineDelegate _onTeachableTooltipTriggeredEvent; // 0x440
	FMulticastInlineDelegate _onPowerButtonTooltipLongPressEvent; // 0x450
};

struct UParticleModuleBeamModifier {
	BeamModifierType modifierType; // 0x38
	FBeamModifierOptions PositionOptions; // 0x3c
	FRawDistributionVector Position; // 0x40
	FBeamModifierOptions TangentOptions; // 0x88
	FRawDistributionVector Tangent; // 0x90
	char bAbsoluteTangent : 1; // 0xd8
	FBeamModifierOptions StrengthOptions; // 0xdc
	FRawDistributionFloat Strength; // 0xe0
};

struct UAkAssetDataSwitchContainerData {
	TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x30
	UAkGroupValue* DefaultGroupValue; // 0x60
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x68
	TArray<UAkAssetDataSwitchContainerData*> Children; // 0x78
};

struct UPoseAsset {
	FPoseDataContainer PoseContainer; // 0x88
	bool bAdditivePose; // 0x118
	int32_t BasePoseIndex; // 0x11c
	FName RetargetSource; // 0x120
};

struct UUMGBaseLandingPageStorefrontWidget {
	UHorizontalBox* BigButtonsSlot; // 0x300
	UVerticalBox* SmallButtonsSlot1; // 0x308
	UVerticalBox* SmallButtonsSlot2; // 0x310
	TSoftClassPtr<UObject> SmallButtonClass; // 0x318
	TSoftClassPtr<UObject> MediumButtonClass; // 0x348
	TSoftClassPtr<UObject> BigButtonClass; // 0x378
	FLinearColor DisabledButtonColor; // 0x3a8
	FText DisabledButtonText; // 0x3b8
	TArray<UUMGLandingPageButtonWidget*> _landingPageTabs; // 0x3e0
};

struct UMovieSceneColorTrack {
	bool bIsSlateColor; // 0x98
};

struct UUMGAtlantaBonusACEventTemplate {
	UUMGAtlCurrencyStorefrontWidget* currencyStorefrontWidget; // 0x300
	FString LastPackSmallIconPath; // 0x308
	float InitialSize; // 0x318
	float AugmentedSize; // 0x31c
	int32_t MaxNumberOfPacksToShowBigger; // 0x320
};

struct UInterpTrackVectorProp {
	FName PropertyName; // 0x98
};

struct UHasStatusEffectEvaluatorCondition {
	TArray<FName> _statusEffectList; // 0x48
};

struct UHatchAnimInstance {
	bool _isOpen; // 0x280
};

struct UBTTask_SetFleeLoopCooldown {
	float Duration; // 0x78
};

struct UPathStrategySelector_Flee {
	TMap<EAIFleePathStrategy, UPathStrategy*> FleePathStrategies; // 0x68
	TMap<EAIFleePathStrategy, UPathStrategy*> _activeFleePathStrategiesMap; // 0xc0
};

struct UImAllEars {
	int32_t _cooldownByLevel[0x3]; // 0x3d0
	float _durationByLevel[0x3]; // 0x3dc
	bool _useTerrorRadius; // 0x3e8
	float _triggerOutsideRadius; // 0x3ec
};

struct UAddon_K22Power_12 {
	float _increaseRemoveTwinTime; // 0x2a8
};

struct UTwinsSurvivorSubAnimInstance {
	bool _isRemovingTwin; // 0x4f0
};

struct UVideoCaptureProtocol {
	bool bUseCompression; // 0x70
	float CompressionQuality; // 0x74
};

struct UChaosClothSharedSimConfig {
	int32_t IterationCount; // 0x30
	int32_t SubdivisionCount; // 0x34
	float SelfCollisionThickness; // 0x38
	float CollisionThickness; // 0x3c
	bool bUseDampingOverride; // 0x40
	float Damping; // 0x44
	bool bUseGravityOverride; // 0x48
	float GravityScale; // 0x4c
	FVector Gravity; // 0x50
	bool bUseLocalSpaceSimulation; // 0x5c
	bool bUseXPBDConstraints; // 0x5d
};

struct UBorder {
	EHorizontalAlignment HorizontalAlignment; // 0x140
	EVerticalAlignment VerticalAlignment; // 0x141
	char bShowEffectWhenDisabled : 1; // 0x142
	FLinearColor ContentColorAndOpacity; // 0x144
	FDelegate ContentColorAndOpacityDelegate; // 0x154
	FMargin Padding; // 0x168
	FSlateBrush Background; // 0x178
	FDelegate BackgroundDelegate; // 0x208
	FLinearColor BrushColor; // 0x21c
	FDelegate BrushColorDelegate; // 0x22c
	FVector2D DesiredSizeScale; // 0x240
	bool bFlipForRightToLeftFlowDirection; // 0x248
	FDelegate OnMouseButtonDownEvent; // 0x24c
	FDelegate OnMouseButtonUpEvent; // 0x260
	FDelegate OnMouseMoveEvent; // 0x274
	FDelegate OnMouseDoubleClickEvent; // 0x288
};

struct UUMGCharacterButton {
	UImage* PortraitIcon; // 0x310
	UCanvasPanel* CharacterSelectedPanel; // 0x318
	UCanvasPanel* LevelPanel; // 0x328
	UTextBlock* CharacterLevelText; // 0x330
	UTextBlock* OwnedCustomizationText; // 0x338
	UTextBlock* TotalCustomizationText; // 0x340
	UCanvasPanel* PricePanel; // 0x348
	UUMGCharacterPrice* CellPrice; // 0x350
	UUMGCharacterPrice* ShardPrice; // 0x358
	FCharacterSlotData CharacterSlotData; // 0x360
};

struct UPromoPackContentDataAsset {
	TMap<EPromoPackContentType, FPromoPackContentTypeData> Data; // 0x38
};

struct UPathBuilder {
	float PathReachedPointRadius; // 0x38
	EAITerrorLevel ToleratedTerrorPressure; // 0x3c
	bool OverridePreviousPathStrategy; // 0x3d
	UNavMovePath* _path; // 0x40
	ADBDAIBTController* _aiOwner; // 0x48
};

struct USetDreamSnareInteraction {
	float MinPitch; // 0x6d8
	float MinPlacementDistance; // 0x6dc
	float MaxPlacementDistance; // 0x6e0
};

struct UDecalCollection {
	TArray<UDBDDecalComponent*> _decalComponentsArray; // 0x30
	TSet<UDBDDecalComponent*> _activeDecalComponents; // 0x40
	TSet<UDBDDecalComponent*> _inactiveDecalComponents; // 0x90
	TArray<bool> _DeltaZPool; // 0xe0
	TMap<UStaticMeshComponent*, int32_t> _deltaZMultipliers; // 0xf0
};

struct UApplicationLifecycleComponent {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xb8
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xc8
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xd8
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xe8
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xf8
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x108
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x118
	FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x128
	FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x138
};

struct UDBDAITypes {
	FGameplayTag AISkills_Context_Service_Root; // 0x30
	FGameplayTag AISkills_Context_Task_Slasher_AttackTarget; // 0x3c
	FGameplayTag AISkills_Context_Service_Slasher_AttackTarget; // 0x48
	FGameplayTag AISkills_Context_Task_Slasher_CrawlingTarget; // 0x54
	FGameplayTag AISkills_Context_Service_Slasher_CrawlingTarget; // 0x60
	FGameplayTag AISkills_Context_Service_Slasher_Investigate_NotInChase; // 0x6c
	FGameplayTag AISkills_Context_Service_Slasher_Investigate_InChase; // 0x78
	FGameplayTag AISkills_Context_Service_Slasher_Investigate_MoveAround; // 0x84
	FGameplayTag AISkills_Context_Service_Slasher_Patrol; // 0x90
	FGameplayTag AISkills_Context_Service_Slasher_Patrol_MoveAround; // 0x9c
	FGameplayTag AISkills_Context_Service_Camper_Standing; // 0xa8
	FGameplayTag AISkills_Context_Service_Camper_Flee_Run_InChase; // 0xb4
	FGameplayTag AISkills_Context_Service_Camper_Flee_Run_NotInChase; // 0xc0
	FGameplayTag AISkills_Context_Service_Camper_Patrol; // 0xcc
	FGameplayTag AISkills_Context_Service_Camper_RescueCarriedFriend; // 0xd8
	FGameplayTag AISkills_Context_Service_Camper_RemoveTrap; // 0xe4
	FGameplayTag AISkills_Context_Service_Camper_Chained; // 0xf0
	FGameplayTag AISkills_Context_Service_Camper_HelpOther; // 0xfc
	FGameplayTag AISkills_Context_Service_Camper_GoalInTerror; // 0x108
	FGameplayTag AISkills_Context_Service_Camper_Carried; // 0x114
	FGameplayTag AIBlackboard_InteractableWishList_FindSkill; // 0x120
	FGameplayTag AI_PointOfInterest_ActivatedDoor; // 0x12c
	FGameplayTag AI_PointOfInterest_ActivatedDoor_Opened; // 0x138
	FGameplayTag AI_PointOfInterest_BrokenGenerator; // 0x144
	FGameplayTag AI_PointOfInterest_OccupiedMeatHook; // 0x150
	FGameplayTag AI_PointOfInterest_HexTotem; // 0x15c
	FGameplayTag AI_PinLocation_WarpStart; // 0x168
	FGameplayTag AI_PinLocation_WarpEnd; // 0x174
	FGameplayTag AI_PinLocation_EQS; // 0x180
	FGameplayTag AI_PinLocation_WishedObj; // 0x18c
	FGameplayTag AI_PinLocation_GoTo; // 0x198
	FGameplayTag AI_PinObject_EQS; // 0x1a4
	FGameplayTag AI_PinObject_WishedObj; // 0x1b0
};

struct AVolumetricLightmapDensityVolume {
	FInt32Interval AllowedMipLevelRange; // 0x268
};

struct UEndMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct ULevelVariantSets {
	UObject* DirectorClass; // 0x30
	TArray<UVariantSet*> VariantSets; // 0x38
};

struct UAchievementHandlerComponent {
	UGeneratorRepairWithGenericPerksEscapeAchievement* _generatorRepairWithGenericPerksOnlyEscapeAchievement; // 0xb8
	UCamperKONextToRaisedPalletAchievement* _camperKONextToRaisedPalletAchievement; // 0xc0
};

struct URejoinCheck {
	ERejoinStatus LastKnownStatus; // 0x30
	bool bRejoinAfterCheck; // 0x31
	bool bAttemptingRejoin; // 0x32
};

struct AMatineeActor {
	UInterpData* MatineeData; // 0x230
	FName MatineeControllerName; // 0x238
	float playRate; // 0x244
	char bPlayOnLevelLoad : 1; // 0x248
	char bForceStartPos : 1; // 0x248
	float ForceStartPosition; // 0x24c
	char bLooping : 1; // 0x250
	char bRewindOnPlay : 1; // 0x250
	char bNoResetOnRewind : 1; // 0x250
	char bRewindIfAlreadyPlaying : 1; // 0x250
	char bDisableRadioFilter : 1; // 0x250
	char bClientSideOnly : 1; // 0x250
	char bSkipUpdateIfNotVisible : 1; // 0x250
	char bIsSkippable : 1; // 0x250
	int32_t PreferredSplitScreenNum; // 0x254
	char bDisableMovementInput : 1; // 0x258
	char bDisableLookAtInput : 1; // 0x258
	char bHidePlayer : 1; // 0x258
	char bHideHud : 1; // 0x258
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x260
	char bShouldShowGore : 1; // 0x270
	TArray<UInterpGroupInst*> GroupInst; // 0x278
	TArray<FCameraCutInfo> CameraCuts; // 0x288
	char bIsPlaying : 1; // 0x298
	char bReversePlayback : 1; // 0x298
	char bPaused : 1; // 0x298
	char bPendingStop : 1; // 0x298
	float InterpPosition; // 0x29c
	char ReplicationForceIsPlaying; // 0x2a4
	FMulticastInlineDelegate OnPlay; // 0x2a8
	FMulticastInlineDelegate OnStop; // 0x2b8
	FMulticastInlineDelegate OnPause; // 0x2c8
};

struct UVomitStateComponent {
	FTagStateBool _isCharging; // 0xc0
};

struct UDecisiveStrike {
	float _timeAfterUnhook[0x3]; // 0x3d0
	float _skillCheckDelay; // 0x3dc
	float _skillCheckBuffer; // 0x3e0
	bool _killerHearsSkillCheckCue; // 0x3e4
	TArray<FGameplayTag> _deactivationEvents; // 0x458
	bool _hasBeenAttempted; // 0x468
};

struct UGunslingerEffectsComponent {
	FMulticastInlineDelegate OnIsAimingChanged; // 0xb8
	FMulticastInlineDelegate PlayOutOfAmmoSound; // 0xc8
	float _minimumTimeBetweenBroadcast; // 0xd8
	AHarpoonRifle* _rifle; // 0xe0
};

struct URiflePlayerLinker {
	FMulticastInlineDelegate OnLinkedPlayerSet; // 0xb8
	ADBDPlayer* _linkedPlayer; // 0xc8
	ADBDPlayer* _linkedPlayerDuringAttack; // 0xd0
	ADBDPlayer* _linkOwner; // 0xd8
	float _desiredLinkLength; // 0xe0
	FDBDTunableRowHandle _elasticLength; // 0x120
	FDBDTunableRowHandle _minimumLinkLength; // 0x148
	FDBDTunableRowHandle _breakFreeCloseRangeMaxDistance; // 0x170
	float _movementLinkReductionThreshold; // 0x19c
	float _movementAccelerationTreshold; // 0x1a0
};

struct UAISense_Trail {
	TArray<FAITrailEvent> Events; // 0x90
};

struct UGenyReflectionCaptureComponent {
	TArray<FReflectionCaptureTwoStates> generatorDrivenReflectionCapture; // 0x210
};

struct UDistributionVectorConstantCurve {
	FInterpCurveVector ConstantCurve; // 0x40
	char bLockAxes : 1; // 0x58
	EDistributionVectorLockFlags LockedAxes; // 0x5c
};

struct AReverseBearTrap {
	USkeletalMeshComponent* _rbtMesh; // 0x330
	UAnimationMontageSlave* _animMontageSlave; // 0x338
	int32_t _keyID; // 0x344
	bool _exitGatesPoweredAfterAttachment; // 0x3d8
	bool _generatorFixedAfterAttachment; // 0x3d9
};

struct UMaterialExpressionSign {
	FExpressionInput Input; // 0x48
};

struct UGeometryCacheTrack_FlipbookAnimation {
	uint32_t NumMeshSamples; // 0x60
};

struct UMaterialExpressionConstant3Vector {
	FLinearColor Constant; // 0x48
};

struct UUserWidget {
	FLinearColor ColorAndOpacity; // 0x130
	FDelegate ColorAndOpacityDelegate; // 0x140
	FSlateColor ForegroundColor; // 0x158
	FDelegate ForegroundColorDelegate; // 0x180
	FMargin Padding; // 0x194
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a8
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1b8
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1c8
	UWidgetTree* WidgetTree; // 0x1d8
	int32_t Priority; // 0x1e0
	char bSupportsKeyboardFocus : 1; // 0x1e4
	char bIsFocusable : 1; // 0x1e4
	char bStopAction : 1; // 0x1e4
	char bHasScriptImplementedTick : 1; // 0x1e4
	char bHasScriptImplementedPaint : 1; // 0x1e4
	char bCookedWidgetTree : 1; // 0x1e4
	EWidgetTickFrequency TickFrequency; // 0x1f0
	UInputComponent* InputComponent; // 0x1f8
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x200
};

struct UCoreTutorialObjectivesContainer {
	UCoreTutorialObjectiveItem* CoreTutorialObjectiveItemClass; // 0x2f8
	int32_t BasePooledInstanceAmount; // 0x300
	UGridPanel* ObjectiveContainer; // 0x308
	TArray<UCoreTutorialObjectiveItem*> _objectivePool; // 0x310
	TMap<FName, UCoreTutorialObjectiveItem*> _objectiveItems; // 0x320
};

struct UMovieSceneEventRepeaterSection {
	FMovieSceneEvent Event; // 0xe8
};

struct UCharacterCollection {
	ASlasherPlayer* _killer; // 0x148
	TSet<ACamperPlayer*> _survivors; // 0x150
	TSet<ADBDPlayer*> _mainDBDPlayers; // 0x1a0
	TSet<ADBDPlayer*> _otherCharacters; // 0x1f0
	TSet<ACharacter*> _nonPlayableCharacters; // 0x240
	TSet<ACharacter*> _allCharacters; // 0x290
};

struct USynthSamplePlayer {
	USoundWave* SoundWave; // 0x6f0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6f8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x708
};

struct UMaterialExpressionDynamicParameter {
	TArray<FString> ParamNames; // 0x48
	FLinearColor defaultValue; // 0x58
	uint32_t ParameterIndex; // 0x68
};

struct UHISMMaterialHelperSettings {
	TMap<UStaticMesh*, TSoftClassPtr<UObject>> _meshMaterialOverride; // 0x38
};

struct AVectorFieldVolume {
	UVectorFieldComponent* VectorFieldComponent; // 0x230
};

struct UAISense_Blueprint {
	UUserDefinedStruct* ListenerDataType; // 0x90
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x98
	TArray<UAISenseEvent*> UnprocessedEvents; // 0xa8
};

struct UBTTask_CopyBBEntry {
	FBlackboardKeySelector BBFrom; // 0x78
	FBlackboardKeySelector BBTo; // 0xa8
	bool CopyOnlyValidKeyValue; // 0xd8
};

struct UUniformGridSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x40
	EVerticalAlignment VerticalAlignment; // 0x41
	int32_t row; // 0x44
	int32_t Column; // 0x48
};

struct USubtitlesPresenter {
	UUserWidget* SubtitlesWidgetClass; // 0xe0
};

struct UAssetLibraryManager {
	UObject* _worldContextObject; // 0x40
	TMap<int32_t, UCharacterItemsAssetLibrary*> _characterItemsAssetLibrary; // 0x48
	UIniAssetLibrary* _globalAssetLibrary; // 0x98
	UMenuAssetLibrary* _menuAssetLibrary; // 0xa0
	UGameAssetLibrary* _gameAssetLibrary; // 0xa8
	UTutorialAssetLibrary* _tutorialAssetLibrary; // 0xb0
	Ushopmanager* _shopManager; // 0xc0
	TArray<FAssetLibraryLoader> _loadingList; // 0xd8
	int32_t CharacterItemsAssetLoadCountPerChunk; // 0xe8
	int32_t BlindPackAssetLoadCountPerChunk; // 0xec
	int32_t MenuAssetLoadCountPerChunk; // 0xf0
	int32_t GlobalAssetLoadCountPerChunk; // 0xf4
	int32_t GameAssetLoadCountPerChunk; // 0xf8
};

struct UUMGPurchaseItemsInfo {
	UImage* Icon; // 0x300
	UTextBlock* Quantity; // 0x308
	UTextBlock* ItemName; // 0x310
};

struct UNiagaraRibbonRendererProperties {
	UMaterialInterface* Material; // 0x58
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60
	ENiagaraRibbonFacingMode FacingMode; // 0x90
	float UV0TilingDistance; // 0x94
	FVector2D UV0Scale; // 0x98
	FVector2D UV0Offset; // 0xa0
	ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0xa8
	float UV1TilingDistance; // 0xac
	FVector2D UV1Scale; // 0xb0
	FVector2D UV1Offset; // 0xb8
	ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xc0
	ENiagaraRibbonDrawDirection DrawDirection; // 0xc1
	float CurveTension; // 0xc4
	ENiagaraRibbonTessellationMode TessellationMode; // 0xc8
	int32_t TessellationFactor; // 0xcc
	bool bUseConstantFactor; // 0xd0
	float TessellationAngle; // 0xd4
	bool bScreenSpaceTessellation; // 0xd8
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x170
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x200
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x290
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x320
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x3b0
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x440
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x4d0
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x560
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x5f0
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x680
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x710
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x7a0
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x830
};

struct ATemplateSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x238
	UTemplateSequencePlayer* SequencePlayer; // 0x250
	FSoftObjectPath TemplateSequence; // 0x258
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x278
};

struct UArchiveStoriesContainer {
	URewardTrackContainer* _rewardTrackContainer; // 0x1b0
	UWalletHandler* _wallet; // 0x280
	UArchiveVignettesContainer* _vignettesContainer; // 0x288
};

struct URedStainComponent {
	FLinearColor _initialSpotLightColor; // 0x3d0
};

struct UMaterialParameterCollectionInstance {
	UMaterialParameterCollection* Collection; // 0x38
};

struct UTargetWasTargetedByEventRecentlyEvaluator {
	TArray<FGameplayTag> _gameEventsToTriggerFirst; // 0xe8
};

struct UGameInstance {
	TArray<ULocalPlayer*> LocalPlayers; // 0x40
	UOnlineSession* OnlineSession; // 0x50
	TArray<UObject*> ReferencedObjects; // 0x58
};

struct UBTDecorator_IsAtLocation {
	float AcceptableRadius; // 0xa0
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xa8
	FAIDistanceType GeometricDistanceType; // 0xe8
	char bUseParametrizedRadius : 1; // 0xec
	char bUseNavAgentGoalLocation : 1; // 0xec
	char bPathFindingBasedTest : 1; // 0xec
};

struct ANavModifierVolume {
	UNavArea* AreaClass; // 0x270
};

struct ULightIntensityTimelineComponent {
	TArray<FLightUpdate> lights; // 0xb8
	TArray<FLightMaterialUpdate> materialHelpers; // 0xc8
	UCurveFloat* intensityCurve; // 0xd8
	bool randomizeStart; // 0xe0
	bool randomizeLength; // 0xe1
	float minLength; // 0xe4
	float maxLength; // 0xe8
	bool normalizeCurve; // 0xec
	bool startTicking; // 0xed
	ELightUnits inputLightUnit; // 0xee
	FMulticastInlineDelegate OnTimelineFinished; // 0xf0
};

struct UGameplayTagsManager {
	TArray<FGameplayTagSource> TagSources; // 0xc8
	TArray<UDataTable*> GameplayTagTables; // 0x1b8
};

struct UInteractiveGizmo {
	UInputBehaviorSet* InputBehaviors; // 0x38
};

struct URuntimeVirtualTextureComponent {
	URuntimeVirtualTexture* VirtualTexture; // 0x210
	bool bUseStreamingLowMipsInEditor; // 0x218
	AActor* BoundsSourceActor; // 0x220
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter {
	FName ParameterName; // 0xb0
	FGuid ExpressionGUID; // 0xbc
	FName Group; // 0xcc
};

struct UGizmoArrowComponent {
	FVector Direction; // 0x448
	float Gap; // 0x454
	float Length; // 0x458
	float Thickness; // 0x45c
};

struct UPrimitivesRegistererComponent {
	TArray<UPrimitiveComponent*> _primitives; // 0xb8
	TWeakObjectPtr<UPrimitiveCollection> _primitiveCollection; // 0xc8
};

struct UUMGAtlantaCustomMatchLobbyScreen {
	UUMGBaseButtonWidget* EditButton; // 0x300
	UVerticalBox* RulesBox; // 0x308
	UTextBlock* CustomMatchTitle; // 0x310
	UTextBlock* MatchRulesTitle; // 0x318
};

struct UMovieSceneBoolSection {
	bool defaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct UGeometryCacheCodecRaw {
	int32_t DummyProperty; // 0x40
};

struct UStalkedComponent {
	FMulticastInlineDelegate OnBeingStalkedChanged; // 0xb8
	float _maxStalkPoints; // 0xc8
	bool _stalkableWhileSightingStalker; // 0xcc
	bool _isBeingStalked; // 0xcd
	UChargeableComponent* _stalkPointsChargeable; // 0xd0
};

struct ADBDGame_Menu {
	bool StartWithSlasher; // 0x358
	UAtlantaPartyFlowHandler* _partyFlowHandler; // 0x360
	AMatineeActor* _matineeFadeActor; // 0x370
	AMatineeActor* _matineeIntroActor; // 0x378
	AMatineeActor* _matineeLoopActor; // 0x380
};

struct UUMGDownloadProgressionWidget {
	UProgressBar* ProgressBar; // 0x300
	UTextBlock* DownloadPercentage; // 0x308
	UTextBlock* DownloadDescription; // 0x310
};

struct UBlendSpace {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x150
};

struct UTargetWasDamagedBySpecialAttackRecentlyEvaluator {
	float _timeLimit; // 0x130
	TArray<FGameplayTag> _specialCaseGameEvents; // 0x138
};

struct UDatasmithGLTFSceneImportData {
	FString Generator; // 0x30
	float Version; // 0x40
	FString Author; // 0x48
	FString License; // 0x58
	FString source; // 0x68
};

struct UTestMovieSceneSequence {
	UMovieScene* MovieScene; // 0x350
};

struct UEnvQueryTest_LineOfSight {
	UEnvQueryContext* QuerierContext; // 0x238
	UEnvQueryContext* ToContext; // 0x240
	FAIDataProviderFloatValue ItemHeightOffset; // 0x248
	FAIDataProviderBoolValue Invert; // 0x288
};

struct UMaterialInstance {
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

struct UInterpTrackInstSlomo {
	float OldTimeDilation; // 0x30
};

struct ADBDBaseMatchGameMode {
	UEndGameComponent* _endGameComponent; // 0x358
	UEscapeRequirementTracker* _escapeRequirementTracker; // 0x360
	ANetworkFenceActor* _theFence; // 0x368
};

struct UForceFeedbackAttenuation {
	FForceFeedbackAttenuationSettings Attenuation; // 0x30
};

struct UBTService_SetPathSpeedFactor {
	float SpeedFactor; // 0x78
};

struct UAddon_K22Power_20 {
	float _undetectableDuration; // 0x2a8
};

struct UAddon_K24_04 {
	float _effectTime; // 0x2a8
	FLinearColor OutlineColor; // 0x2ac
};

struct UUMGControlTypeSelectionWidget {
	UUMGControlTypeWidget* SnapOnJoystick; // 0x300
	UUMGControlTypeWidget* CameraFullScreen; // 0x308
	UTextBlock* TitleText; // 0x310
};

struct UBTDecorator_ExtConeCheck {
	FBlackboardKeySelector BBConeOrigin; // 0x70
	FBlackboardKeySelector BBConeDirection; // 0xa0
	FBlackboardKeySelector BBWith; // 0xd0
	FAITunableParameter ConeHalfAngle; // 0x100
};

struct ATimerGate {
	float _currentTime; // 0x248
};

struct UCounterforce {
	float _totemAuraVisibleDuration[0x3]; // 0x3d4
	float _startingTotemCleanseSpeedBonus[0x3]; // 0x3e0
	float _stackableTotemCleanseSpeedBonus[0x3]; // 0x3ec
};

struct USlateWidgetStyleAsset {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x30
};

struct URespawnablePositioner {
	FMulticastInlineDelegate OnIsInteractingWithAnyRespawnableInteractableChangedEvent; // 0xb8
	TArray<ARespawnableInteractable*> _respawnableInteractables; // 0xc8
};

struct UInterpTrackFloatAnimBPParam {
	UObject* AnimBlueprintClass; // 0x98
	UAnimInstance* AnimClass; // 0xa0
	FName ParamName; // 0xa8
};

struct UBTService_GetPinLocation {
	FBlackboardKeySelector BBToSetKey; // 0x80
	FGameplayTag PinTag; // 0xb0
};

struct UUMGRewardWidget {
	UImage* CheckIcon; // 0x300
};

struct URepairGeneratorSurvivorSubAnimInstance {
	FVector _snapPosition; // 0x538
	int32_t _side; // 0x544
	int32_t _repairAnimIndex; // 0x548
	bool _isRepairingGenerator; // 0x558
	bool _rightFootDown; // 0x559
	int32_t _animSequenceVariationCount; // 0x55c
	bool _isVomiting; // 0x560
	bool _hasSkillCheckFailed; // 0x561
};

struct ULuminRuntimeSettings {
	FString PackageName; // 0x30
	FString ApplicationDisplayName; // 0x40
	ELuminFrameTimingHint FrameTimingHint; // 0x50
	bool bProtectedContent; // 0x51
	bool bManualCallToAppReady; // 0x52
	bool bUseMobileRendering; // 0x53
	bool bUseVulkan; // 0x54
	FFilePath Certificate; // 0x58
	FDirectoryPath IconModelPath; // 0x68
	FDirectoryPath IconPortalPath; // 0x78
	FLocalizedIconInfos LocalizedIconInfos; // 0x88
	int32_t VersionCode; // 0x98
	int32_t MinimumAPILevel; // 0x9c
	TArray<ELuminPrivilege> AppPrivileges; // 0xa0
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0xb0
	TArray<FLuminComponentElement> ExtraComponentElements; // 0xc0
	FString SpatializationPlugin; // 0xd0
	FString ReverbPlugin; // 0xe0
	FString OcclusionPlugin; // 0xf0
	int32_t SoundCueCookQualityIndex; // 0x100
	bool bRemoveDebugInfo; // 0x104
	FDirectoryPath VulkanValidationLayerLibs; // 0x108
	bool bFrameVignette; // 0x118
	TArray<FLocalizedAppName> LocalizedAppNames; // 0x120
};

struct USceneCaptureComponent {
	ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x210
	ESceneCaptureSource CaptureSource; // 0x211
	char bCaptureEveryFrame : 1; // 0x212
	char bCaptureOnMovement : 1; // 0x212
	bool bAlwaysPersistRenderingState; // 0x213
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x218
	TArray<AActor*> HiddenActors; // 0x228
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x238
	TArray<AActor*> ShowOnlyActors; // 0x248
	float LODDistanceFactor; // 0x258
	float MaxViewDistanceOverride; // 0x25c
	int32_t CaptureSortPriority; // 0x260
	bool bUseRayTracingIfEnabled; // 0x264
	bool bIgnoreCullDistanceVolumes; // 0x265
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x268
	FString ProfilingEventName; // 0x288
};

struct UMaterialExpressionMax {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	float ConstA; // 0x80
	float ConstB; // 0x84
};

struct UARSaveWorldAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x58
	FMulticastInlineDelegate OnFailed; // 0x68
};

struct USplineComponent {
	FSplineCurves SplineCurves; // 0x428
	FInterpCurveVector SplineInfo; // 0x490
	FInterpCurveQuat SplineRotInfo; // 0x4a8
	FInterpCurveVector SplineScaleInfo; // 0x4c0
	FInterpCurveFloat SplineReparamTable; // 0x4d8
	bool bAllowSplineEditingPerInstance; // 0x4f0
	int32_t ReparamStepsPerSegment; // 0x4f4
	float Duration; // 0x4f8
	bool bStationaryEndpoints; // 0x4fc
	bool bSplineHasBeenEdited; // 0x4fd
	bool bModifiedByConstructionScript; // 0x4fe
	bool bInputSplinePointsToConstructionScript; // 0x4ff
	bool bDrawDebug; // 0x500
	bool bClosedLoop; // 0x501
	bool bLoopPositionOverride; // 0x502
	float LoopPosition; // 0x504
	FVector DefaultUpVector; // 0x508
};

struct USlateVectorArtData {
	TArray<FSlateMeshVertex> VertexData; // 0x30
	TArray<uint32_t> IndexData; // 0x40
	UMaterialInterface* Material; // 0x50
	FVector2D ExtentMin; // 0x58
	FVector2D ExtentMax; // 0x60
};

struct UCanvas {
	float OrgX; // 0x30
	float OrgY; // 0x34
	float ClipX; // 0x38
	float ClipY; // 0x3c
	FColor DrawColor; // 0x40
	char bCenterX : 1; // 0x44
	char bCenterY : 1; // 0x44
	char bNoSmooth : 1; // 0x44
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	FPlane ColorModulate; // 0x50
	UTexture2D* DefaultTexture; // 0x60
	UTexture2D* GradientTexture0; // 0x68
	UReporterGraph* ReporterGraph; // 0x70
};

struct APartyBeaconHost {
	UPartyBeaconState* State; // 0x258
	bool bLogoutOnSessionTimeout; // 0x2c0
	float SessionTimeoutSecs; // 0x2c4
	float TravelSessionTimeoutSecs; // 0x2c8
};

struct UAISenseConfig_Hearing {
	UAISense_Hearing* Implementation; // 0x50
	float HearingRange; // 0x58
	float LoSHearingRange; // 0x5c
	char bUseLoSHearing : 1; // 0x60
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x64
};

struct UMovieSceneVectorSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UAnimNotify_PostInteractionSoundEvent {
	UAkAudioEvent* SoundEvent; // 0x40
	TSoftClassPtr<UObject> InteractionAudioClass; // 0x48
};

struct UPhysicsConstraintComponent {
	AActor* ConstraintActor1; // 0x210
	FConstrainComponentPropName ComponentName1; // 0x218
	AActor* ConstraintActor2; // 0x228
	FConstrainComponentPropName ComponentName2; // 0x230
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x250
	FMulticastInlineDelegate OnConstraintBroken; // 0x258
	FConstraintInstance ConstraintInstance; // 0x268
};

struct UMultiTransformer {
	UTransformGizmo* TransformGizmo; // 0xe0
	UTransformProxy* TransformProxy; // 0xe8
};

struct ASpectatorBeaconHost {
	USpectatorBeaconState* State; // 0x258
	bool bLogoutOnSessionTimeout; // 0x2c0
	float SessionTimeoutSecs; // 0x2c4
	float TravelSessionTimeoutSecs; // 0x2c8
};

struct UAsyncTask_LoadXRDeviceVisComponent {
	FMulticastInlineDelegate OnModelLoaded; // 0x38
	FMulticastInlineDelegate OnLoadFailure; // 0x48
	UPrimitiveComponent* SpawnedComponent; // 0x60
};

struct UHudScreenUMG {
	UUmgPlayerHud* _atlantaHud; // 0x248
	USafeZoneManagerWidget* _safeZoneManager; // 0x250
	TArray<UNoiseIndicatorWidget*> _closeNoiseIndicatorWidgets; // 0x258
	TArray<UExitOpenedIndicatorWidget*> _exitOpenedIndicatorWidgets; // 0x268
	TArray<UGeneratorIndicatorWidget*> _generatorIndicatorWidgets; // 0x278
	TArray<UNoiseIndicatorWidget*> _hatchIndicatorWidgets; // 0x288
	TArray<UHookedIndicatorWidget*> _hookedIndicatorWidgets; // 0x298
	TArray<UKillerNoiseIndicatorWidget*> _killerCuesIndicatorWidgets; // 0x2a8
	TMap<FString, UNoiseIndicatorWidget*> _loudNoiseIndicatorWidgets; // 0x2b8
	UBaseIndicatorWidget* _globalSoundIndicatorWidget; // 0x308
	TMap<FString, UNoiseIndicatorWidget*> _offscreenNoiseIndicatorWidgets; // 0x310
	TMap<int32_t, UBaseIndicatorWidget*> _noiseIndicatorMap; // 0x360
	UPromptManager* _promptManager; // 0x3b0
	UAtlantaTutorialObjectiveManager* _objectiveManager; // 0x3b8
	TSoftClassPtr<UObject> AtlantaObjectiveClass; // 0x3c0
};

struct UWallGrabInteractionDefinition {
	UBlightPowerStateComponent* _blightPowerStateComponent; // 0x5b0
	FDBDTunableRowHandle _wallDashAccelerationMultiplier; // 0x5b8
	ABlightPowerEstimatedCollisionIndicator* _blightPowerCollisionIndicator; // 0x5e0
	ABlightPowerEstimatedCollisionIndicator* _collisionIndicatorActorClass; // 0x5e8
};

struct UChildActorComponent {
	AActor* ChildActorClass; // 0x210
	AActor* ChildActor; // 0x218
	AActor* ChildActorTemplate; // 0x220
	bool bAlwaysRecreateOnRegister; // 0x228
	AActor* ChildActorMimic; // 0x230
};

struct UDBDPawnSensingComponent {
	bool bSenseEverywhere; // 0x100
	float PartiallyHiddenSensingDistance; // 0x104
};

struct UAISkill_FindInteractable {
	FString RequiredInteractionId; // 0x100
	EInputInteractionType RequiredInteractionInputType; // 0x110
};

struct UMaterialExpressionDistanceFieldGradient {
	FExpressionInput Position; // 0x48
};

struct UTestAnyActorPairQueryRangeIsTrue {
	UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent; // 0x100
};

struct UAICharacterHideInLockerBehaviourData {
	ECharacterMovementTypes characterMovementType; // 0x38
};

struct UTrailPointOutlineUpdateStrategy {
	FDBDTunableRowHandle _tormentTrailRevealDistance; // 0x130
};

struct UAnimNotifyState_TimedNiagaraEffect {
	UNiagaraSystem* Template; // 0x38
	FName SocketName; // 0x40
	FVector LocationOffset; // 0x4c
	FRotator RotationOffset; // 0x58
	bool bDestroyAtEnd; // 0x64
};

struct UUserDefinedEnum {
	TMap<FName, FText> DisplayNameMap; // 0x68
};

struct UPlatformInterfaceWebResponse {
	FString OriginalURL; // 0x30
	int32_t ResponseCode; // 0x40
	int32_t Tag; // 0x44
	FString StringResponse; // 0x48
	TArray<char> BinaryResponse; // 0x58
};

struct UExamplePresenter {
	UUserWidget* ExampleWidgetClass; // 0x108
};

struct USkeletalBodySetup {
	bool bSkipScaleFromAnimation; // 0x268
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x270
};

struct UAtlantaTutorialObjectiveManager {
	TArray<UAtlantaObjectiveWidget*> _objectivesList; // 0x30
	UVerticalBox* _objectivesContainer; // 0x40
};

struct UMaterialExpressionLandscapeLayerBlend {
	TArray<FLayerBlendInput> Layers; // 0x48
	FGuid ExpressionGUID; // 0x58
};

struct USystemTimeTimecodeProvider {
	FFrameRate FrameRate; // 0x38
	bool bGenerateFullFrame; // 0x40
	bool bUseHighPerformanceClock; // 0x41
};

struct UBTDecorator_DoesPathExist {
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0xa0
	char bUseSelf : 1; // 0xd0
	EPathExistanceQueryType PathQueryType; // 0xd4
	UNavigationQueryFilter* FilterClass; // 0xd8
};

struct UMaterialExpressionSceneDepth {
	EMaterialSceneAttributeInputMode InputMode; // 0x48
	FExpressionInput Input; // 0x4c
	FExpressionInput Coordinates; // 0x68
	FVector2D ConstInput; // 0x84
};

struct UZombieAttractedByGeneratorBTService {
	float _genRepairingHearingRange; // 0xa0
};

struct UGeneratorRepairInteraction {
	FDBDTunableRowHandle _penaltyPerRepairPlayerCount[0x3]; // 0x6d8
};

struct UMeshAnalysisProperties {
	FString SurfaceArea; // 0x58
	FString Volume; // 0x68
};

struct UPointLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x3a8
	float LightFalloffExponent; // 0x3ac
	float SourceRadius; // 0x3b0
	float SoftSourceRadius; // 0x3b4
	float SourceLength; // 0x3b8
};

struct UTriggerTimerOnLacerationAlmostFullEffect {
	ULacerationComponent* _lacerationComponent; // 0x350
	float _duration; // 0x358
};

struct USkeletalMeshSocket {
	FName SocketName; // 0x30
	FName BoneName; // 0x3c
	FVector RelativeLocation; // 0x48
	FRotator RelativeRotation; // 0x54
	FVector RelativeScale; // 0x60
	bool bForceAlwaysAnimated; // 0x6c
};

struct ULiveLinkSourceSettings {
	ELiveLinkSourceMode Mode; // 0x30
	FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x38
	FString ConnectionString; // 0x88
	ULiveLinkSourceFactory* Factory; // 0x98
};

struct UMaterialExpressionLandscapeLayerSample {
	FName ParameterName; // 0x48
	float PreviewWeight; // 0x54
	FGuid ExpressionGUID; // 0x58
};

struct UAISense_Sight {
	int32_t MaxTracesPerTick; // 0x158
	int32_t MinQueriesPerTimeSliceCheck; // 0x15c
	double MaxTimeSlicePerTick; // 0x160
	float HighImportanceQueryDistanceThreshold; // 0x168
	float MaxQueryImportance; // 0x170
	float SightLimitQueryImportance; // 0x174
};

struct UCurveFloat {
	FRichCurve FloatCurve; // 0x38
	bool bIsEventCurve; // 0xb8
};

struct UUMGSettingContextButton {
	FMulticastInlineDelegate OnSettingContextButtonClickEvent; // 0x300
};

struct UParticleModuleLocationDirect {
	FRawDistributionVector Location; // 0x38
	FRawDistributionVector LocationOffset; // 0x80
	FRawDistributionVector ScaleFactor; // 0xc8
	FRawDistributionVector Direction; // 0x110
};

struct UCoreHudObjectivesWidget {
	UDBDTextBlock* SpecialSpacer; // 0x300
};

struct UTextureRenderTarget {
	float TargetGamma; // 0xc0
};

struct ARadialForceActor {
	URadialForceComponent* ForceComponent; // 0x230
};

struct UInterpTrackInstFloatProp {
	float ResetFloat; // 0x60
};

struct UMovieSceneAkTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
	char bIsAMasterTrack : 1; // 0x70
};

struct UMaterialExpressionLinearInterpolate {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	FExpressionInput alpha; // 0x80
	float ConstA; // 0x9c
	float ConstB; // 0xa0
	float ConstAlpha; // 0xa4
};

struct UPerkHudWidget {
	UCanvasPanel* PerksClickable; // 0x300
	UCanvasPanel* PerksExternal; // 0x308
	TSoftClassPtr<UObject> AtlantaPerkActionButtonClass; // 0x310
	TMap<FName, UPerkActionButton*> _clickablePerksMap; // 0x340
	TMap<FName, UPerkActionButton*> _externalPerksMap; // 0x390
};

struct UDisplayStandMeatHookRequesterComponent {
	AMenuMeatHook* _meatHookClass; // 0xb8
};

struct UGeneratorAnimInstance {
	AGenerator* _owningGenerator; // 0x280
	bool _rushFailed; // 0x288
	bool _isActivated; // 0x289
	float _percentComplete; // 0x28c
};

struct ALight {
	ULightComponent* LightComponent; // 0x230
	char bEnabled : 1; // 0x238
};

struct UDifferentSurvivorsNearMeQEEvaluator {
	TSet<ADBDPlayer*> _foundSurvivors; // 0x98
};

struct UFrenzyAttackSuccessSubstate {
	FDBDTunableRowHandle _healthyTime; // 0x118
	FDBDTunableRowHandle _injuredTime; // 0x140
	FDBDTunableRowHandle _bleedoutTime; // 0x168
	UCurveFloat* _healthyCurve; // 0x190
	UCurveFloat* _injuredCurve; // 0x198
	UCurveFloat* _bleedoutCurve; // 0x1a0
};

struct UBTService_RunEQS {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xa8
};

struct UPrimaryAssetLabel {
	FPrimaryAssetRules Rules; // 0x38
	char bLabelAssetsInMyDirectory : 1; // 0x44
	char bIsRuntimeLabel : 1; // 0x44
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x48
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x58
	FCollectionReference AssetCollection; // 0x68
};

struct UDataTable {
	UScriptStruct* RowStruct; // 0x30
	char bStripFromClientBuilds : 1; // 0x88
	char bIgnoreExtraFields : 1; // 0x88
	char bIgnoreMissingFields : 1; // 0x88
	FString ImportKeyField; // 0x90
};

struct UConsoleSettings {
	int32_t MaxScrollbackSize; // 0x30
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x38
	TArray<FString> AutoCompleteMapPaths; // 0x48
	float BackgroundOpacityPercentage; // 0x58
	bool bOrderTopToBottom; // 0x5c
	bool bDisplayHelpInAutoComplete; // 0x5d
	FColor InputColor; // 0x60
	FColor HistoryColor; // 0x64
	FColor AutoCompleteCommandColor; // 0x68
	FColor AutoCompleteCVarColor; // 0x6c
	FColor AutoCompleteFadedColor; // 0x70
};

struct UPointSetComponent {
	UMaterialInterface* PointMaterial; // 0x478
	FBoxSphereBounds Bounds; // 0x480
	bool bBoundsDirty; // 0x49c
};

struct UUMGDragWidget_HudEditor {
	UUserWidget* OnSelectionWidgetClass; // 0x2a0
	UUMGHudEditorDragConstraintWidget* DragLinkWidgetClass; // 0x2a8
	UCustomWidgetWrapper_HudEditor* _customWrapper; // 0x2b0
	UUserWidget* _selectionWidget; // 0x2b8
	UUMGHudEditorDragConstraintWidget* _dragLinkWidget; // 0x2c0
	UUMGDragWidget_HudEditor* _parentLinkWidget; // 0x2c8
	UUMGDragWidget_HudEditor* _childLinkWidget; // 0x2d0
};

struct UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0x78
	float CurveTension; // 0x90
};

struct UAmbisonicsEncodingSettings {
	int32_t AmbisonicsOrder; // 0x30
};

struct ULoadoutSlotFloatingWidget {
	UTextBlock* Message; // 0x338
};

struct UAISkill_InteractionTarget_Throw {
	EAIThrowPredictionModes ThrowPredictionMode; // 0x220
	int32_t MaxAddPitchAngle; // 0x224
	EAIThrowProjectileModes ThrowProjectileMode; // 0x228
	FAITunableParameter HoldInputTimeRandDeviation; // 0x22c
	FAITunableParameter PitchAngleRandDeviation; // 0x23c
};

struct USoundConcurrency {
	FSoundConcurrencySettings Concurrency; // 0x30
};

struct UAISkill_Interaction_RemoveTwin {
	FDBDTunableRowHandle _removeTwinMaxCharge; // 0x170
};

struct UCineCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x7d0
	FCameraFilmbackSettings Filmback; // 0x7dc
	FCameraLensSettings LensSettings; // 0x7e8
	FCameraFocusSettings FocusSettings; // 0x800
	float CurrentFocalLength; // 0x860
	float CurrentAperture; // 0x864
	float CurrentFocusDistance; // 0x868
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x878
	TArray<FNamedLensPreset> LensPresets; // 0x888
	FString DefaultFilmbackPresetName; // 0x898
	FString DefaultFilmbackPreset; // 0x8a8
	FString DefaultLensPresetName; // 0x8b8
	float DefaultLensFocalLength; // 0x8c8
	float DefaultLensFStop; // 0x8cc
};

struct UAnimationWidget {
	float _playRate; // 0x260
};

struct UUMGCharacterPageScrollWidget {
	TSoftClassPtr<UObject> _characterButtonWidgetClass; // 0x448
	TArray<FCharacterSlotData> _charactersData; // 0x478
	bool _isKiller; // 0x488
	FText _charactersTitleText; // 0x490
	FText _killersTitleText; // 0x4a8
	FText _survivorsTitleText; // 0x4c0
};

struct UCrowdManager {
	ANavigationData* MyNavData; // 0x30
	TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x38
	TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x48
	int32_t MaxAgents; // 0x58
	float MaxAgentRadius; // 0x5c
	int32_t MaxAvoidedAgents; // 0x60
	int32_t MaxAvoidedWalls; // 0x64
	float NavmeshCheckInterval; // 0x68
	float PathOptimizationInterval; // 0x6c
	float SeparationDirClamp; // 0x70
	float PathOffsetRadiusMultiplier; // 0x74
	char bResolveCollisions : 1; // 0x78
};

struct UWraithAnimInstance {
	bool _isRingingBell; // 0x5a8
	bool _isCloaking; // 0x5a9
	bool _isUncloaking; // 0x5aa
	FPerspectiveDependentAnimSequenceSelector _cloakingInSelector; // 0x5b0
	FPerspectiveDependentAnimSequenceSelector _cloakingSelector; // 0x5c8
	FPerspectiveDependentAnimSequenceSelector _cloakingOutSelector; // 0x5e0
	FPerspectiveDependentAnimSequenceSelector _uncloakingInSelector; // 0x5f8
	FPerspectiveDependentAnimSequenceSelector _uncloakingSelector; // 0x610
	FPerspectiveDependentAnimSequenceSelector _uncloakingOutSelector; // 0x628
	float _cloakingPlayRate; // 0x640
};

struct UAkInitBank {
	TArray<FString> AvailableAudioCultures; // 0x60
	FString DefaultLanguage; // 0x70
};

struct UMaterialExpressionFontSample {
	UFont* Font; // 0x48
	int32_t FontTexturePage; // 0x50
};

struct UBTDecorator_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UUMGTallyEmblemProgressionWidget {
	UImage* PositiveIcon; // 0x300
	UImage* NegativeIcon; // 0x308
	UTextBlock* PercentText; // 0x310
	UTextBlock* DescriptionText; // 0x318
	FSlateColor WarningPercentColor; // 0x320
	FSlateColor WarningDescriptionColor; // 0x348
};

struct UMaterialExpressionTextureProperty {
	FExpressionInput TextureObject; // 0x48
	EMaterialExposedTextureProperty Property; // 0x64
};

struct UUMGSettingControlsContextWidget {
	bool AimAssist; // 0x378
	int32_t HandSide; // 0x37c
	int32_t InteractionButton; // 0x380
	bool InvertY; // 0x384
	float KillerCameraSensitivity; // 0x388
	float SurvivorCameraSensitivity; // 0x38c
};

struct UMeshSocketPointsProvider {
	FComponentReference _meshReference; // 0x30
	UMeshComponent* _mesh; // 0x60
	TArray<FName> _sockets; // 0x68
};

struct USendToDeathBedInteraction {
	ADeathBedInteractable* _deathBed; // 0x6e0
};

struct UK26P02 {
	float _generatorRegressPercentage[0x3]; // 0x3d8
	float _screamRevealLocationDuration; // 0x3e4
};

struct USocialParty {
	APartyBeaconClient* ReservationBeaconClientClass; // 0x60
	ASpectatorBeaconClient* SpectatorBeaconClientClass; // 0x68
	FUniqueNetIdRepl OwningLocalUserId; // 0x80
	FUniqueNetIdRepl CurrentLeaderId; // 0xa8
	TMap<FUniqueNetIdRepl, UPartyMember*> PartyMembersById; // 0xd0
	bool bEnableAutomaticPartyRejoin; // 0x120
	APartyBeaconClient* ReservationBeaconClient; // 0x1a0
	ASpectatorBeaconClient* SpectatorBeaconClient; // 0x1b8
};

struct UGFxMoviePlayer {
	FString SwfAssetName; // 0x38
	UGFxObject* root; // 0x48
	char bDisplayWithHudOff : 1; // 0x50
	char bEnableGammaCorrection : 1; // 0x50
	char bAllowInput : 1; // 0x50
	char bAllowFocus : 1; // 0x50
	char bCloseOnLevelChange : 1; // 0x50
	char bOnlyOwnerFocusable : 1; // 0x50
	char bDiscardNonOwnerInput : 1; // 0x50
	char bCaptureKeyboardInput : 1; // 0x50
	char bCaptureMouseInput : 1; // 0x51
	char bCaptureGamepadInput : 1; // 0x51
	char bCaptureTouchInput : 1; // 0x51
	char bIsSplitscreenLayoutModified : 1; // 0x51
	char bShowDefaultMouseCursor : 1; // 0x51
	char bBlurLesserMovies : 1; // 0x51
	char bHideLesserMovies : 1; // 0x51
	char bIsPriorityBlurred : 1; // 0x51
	char bIsPriorityHidden : 1; // 0x52
	char bIgnoreVisibilityEffect : 1; // 0x52
	char bIgnoreBlurEffect : 1; // 0x52
	char bRefreshed : 1; // 0x52
	char bPerformHitTest : 1; // 0x52
	GFxHitTestType HitTestType; // 0x54
	UTextureRenderTarget2D* RenderTexture; // 0x58
	UObject* ExternalInterface; // 0x60
	TArray<FKey> CaptureKeys; // 0x68
	TArray<FKey> FocusIgnoreKeys; // 0x78
	TArray<FExternalTexture> ExternalTextures; // 0x88
	EGFxRenderTextureMode RenderTextureMode; // 0x98
	char Priority; // 0x99
	TArray<FGFxWidgetBinding> WidgetBindings; // 0xa0
	int32_t SplitscreenLayoutYAdjust; // 0xb0
	FMulticastInlineDelegate OnFsCommand; // 0xb8
	FMulticastInlineDelegate OnStartCommand; // 0xc8
	FMulticastInlineDelegate OnCloseCommand; // 0xd8
	FMulticastInlineDelegate OnTickCommand; // 0xe8
	FMulticastInlineDelegate OnFocusGainedCommand; // 0xf8
	FMulticastInlineDelegate OnFocusLostCommand; // 0x108
	TArray<UGFxObject*> CachedMovieClipsArray; // 0x1d0
};

struct UMaterialExpressionFrac {
	FExpressionInput Input; // 0x48
};

struct UNavigationSystemConfig {
	FSoftClassPath NavigationSystemClass; // 0x30
	FNavAgentSelector SupportedAgentsMask; // 0x50
	FName DefaultAgentName; // 0x54
	char bIsOverriden : 1; // 0x60
};

struct UGameEventTracker {
	FMulticastInlineDelegate OnGameplayEvent; // 0x30
	FMulticastInlineDelegate OnGameflowEvent; // 0x40
};

struct USubmixEffectDynamicsProcessorPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xc0
};

struct UWidgetTree {
	UWidget* RootWidget; // 0x30
};

struct UAnimClassData {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x38
	USkeleton* TargetSkeleton; // 0x48
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x50
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x60
	TArray<FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xb0
	TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xc0
	TArray<TFieldPath<FStructProperty>> AnimNodeProperties; // 0xd0
	TArray<TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties; // 0xf0
	TArray<TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties; // 0x110
	TArray<TFieldPath<FStructProperty>> PreUpdateNodeProperties; // 0x130
	TArray<TFieldPath<FStructProperty>> DynamicResetNodeProperties; // 0x150
	TArray<TFieldPath<FStructProperty>> StateMachineNodeProperties; // 0x170
	TArray<TFieldPath<FStructProperty>> InitializationNodeProperties; // 0x190
	TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1b0
	TArray<FName> SyncGroupNames; // 0x200
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x210
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x220
};

struct UDestroySessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UUMGBaseFriendListContextualMenuWidget {
	UUMGFriendButtonWidget* InviteToPartyButton; // 0x318
	UUMGFriendButtonWidget* MuteButton; // 0x320
	UUMGFriendButtonWidget* UnmuteButton; // 0x328
	UUMGFriendButtonWidget* RemoveFriendButton; // 0x330
	UUMGFriendButtonWidget* RemovePlayerFromPartyButton; // 0x338
	UAkAudioEvent* TransitionOutAnimationSound; // 0x350
};

struct UEdgeObjectHandlingStrategy {
	TArray<UActorSpawner*> _edgeObjectSpawners; // 0x30
	TArray<UActorSpawner*> _edgeObjectBlockers; // 0x40
};

struct USocialGroupChannel {
	USocialUser* SocialUser; // 0x30
	FUniqueNetIdRepl GroupId; // 0x38
	FText DisplayName; // 0x60
	TArray<USocialUser*> Members; // 0x78
};

struct UGameUserSettings {
	bool bUseVSync; // 0x30
	bool bUseDynamicResolution; // 0x31
	uint32_t ResolutionSizeX; // 0x88
	uint32_t ResolutionSizeY; // 0x8c
	uint32_t LastUserConfirmedResolutionSizeX; // 0x90
	uint32_t LastUserConfirmedResolutionSizeY; // 0x94
	int32_t WindowPosX; // 0x98
	int32_t WindowPosY; // 0x9c
	int32_t FullscreenMode; // 0xa0
	int32_t LastConfirmedFullscreenMode; // 0xa4
	int32_t PreferredFullscreenMode; // 0xa8
	uint32_t Version; // 0xac
	int32_t AudioQualityLevel; // 0xb0
	int32_t LastConfirmedAudioQualityLevel; // 0xb4
	float FrameRateLimit; // 0xb8
	int32_t DesiredScreenWidth; // 0xc0
	bool bUseDesiredScreenHeight; // 0xc4
	int32_t DesiredScreenHeight; // 0xc8
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xcc
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xd0
	float LastRecommendedScreenWidth; // 0xd4
	float LastRecommendedScreenHeight; // 0xd8
	float LastCPUBenchmarkResult; // 0xdc
	float LastGPUBenchmarkResult; // 0xe0
	TArray<float> LastCPUBenchmarkSteps; // 0xe8
	TArray<float> LastGPUBenchmarkSteps; // 0xf8
	float LastGPUBenchmarkMultiplier; // 0x108
	bool bUseHDRDisplayOutput; // 0x10c
	int32_t HDRDisplayOutputNits; // 0x110
	FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x118
};

struct UMaterialExpressionScalarParameter {
	float defaultValue; // 0x68
	bool bUseCustomPrimitiveData; // 0x6c
	char PrimitiveDataIndex; // 0x6d
};

struct UAddPatchToolProperties {
	float Width; // 0x58
	float Rotation; // 0x5c
	int32_t Subdivisions; // 0x60
	float Shift; // 0x64
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x38
	TArray<UGeometryCacheTrack*> Tracks; // 0x48
	int32_t StartFrame; // 0x68
	int32_t EndFrame; // 0x6c
};

struct UPropertyValue {
	TArray<TFieldPath<FProperty>> Properties; // 0x90
	TArray<int32_t> PropertyIndices; // 0xa0
	TArray<FCapturedPropSegment> CapturedPropSegments; // 0xb0
	FString FullDisplayString; // 0xc0
	FName PropertySetterName; // 0xd0
	TMap<FString, FString> PropertySetterParameterDefaults; // 0xe0
	bool bHasRecordedData; // 0x130
	UObject* LeafPropertyClass; // 0x138
	TArray<char> ValueBytes; // 0x148
	EPropertyValueCategory PropCategory; // 0x158
};

struct UMeshInspectorTool {
	UMeshInspectorProperties* Settings; // 0x90
	UExistingMeshMaterialProperties* MaterialSettings; // 0x98
	UPreviewMesh* PreviewMesh; // 0xa8
	UMaterialInterface* DefaultMaterial; // 0xb0
};

struct AStaticMeshActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x230
	bool bStaticMeshReplicateMovement; // 0x238
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x239
};

struct UActivateOnEventTimedStatusEffect {
	FGameplayTagContainer _eventsToActivateOn; // 0x350
};

struct UChainsawRevInteraction {
	FName _soundCueDistanceDataID; // 0x708
	UAkAudioEvent* _chainsawRevStartAkAudioEvent; // 0x718
	UAkAudioEvent* _chainsawRevEndAkAudioEvent; // 0x720
	ASlasherPlayer* _owningSlasher; // 0x728
};

struct AMobileTormentTrailRenderer {
	UInstancedStaticMeshComponent* _pillarIsmComponent; // 0x230
	UInstancedStaticMeshComponent* _wireIsmComponent; // 0x238
	UInstancedStaticMeshComponent* _trailIsmComponent; // 0x240
	UInstancedStaticMeshComponent* _pillarOutlineIsmComponent; // 0x248
	UInstancedStaticMeshComponent* _wireOutlineIsmComponent; // 0x250
	TMap<ABaseTormentTrailPoint*, FTormentTrailPointInfo> _instanceMap; // 0x258
	UMaterialInstanceDynamic* _trailMaterialInstanceDynamic; // 0x2a8
};

struct UNiagaraDataInterfaceCurveBase {
	TArray<float> ShaderLUT; // 0x38
	float LUTMinTime; // 0x48
	float LUTMaxTime; // 0x4c
	float LUTInvTimeRange; // 0x50
	float LUTNumSamplesMinusOne; // 0x54
	char bUseLUT : 1; // 0x58
};

struct UDBDEmblem_SurvivorEvader {
	UCurveFloat* _killerDistanceStealthPointCurve; // 0x158
	UCurveFloat* _killerDistanceStealthPointCurveChasing; // 0x160
	UCurveFloat* _chaseDurationPointCurve; // 0x168
	UCurveFloat* _ZAxisDistanceScalingCurve; // 0x170
	UDBDRankDesignTunables* _rankTunablesClass; // 0x178
};

struct UBTService_RunSkills {
	FGameplayTag Context; // 0x78
	FBlackboardKeySelector BBFilterKey; // 0x88
	EBasicKeyOperation FilterOperation; // 0xb8
};

struct UBlightPowerStateComponent {
	FMulticastInlineDelegate OnPowerCollided; // 0xd0
	TArray<UBlightPowerState*> _blightPowerStateClasses; // 0xe0
	FDBDTunableRowHandle _canDashCheckCollisionRadius; // 0xf0
	FDBDTunableRowHandle _canDashCheckCollisionHeight; // 0x118
	FDBDTunableRowHandle _canDashCheckCollisionRange; // 0x140
	FDBDTunableRowHandle _blightLethalDashDodgeRadius; // 0x168
	UInteractionDefinition* _powerInteractionDefinition; // 0x190
	UTimerObject* _stateTimer; // 0x1b0
	TArray<UBlightPowerState*> _blightPowerStates; // 0x1b8
	UBlightPowerState* _currentBlightPowerState; // 0x1c8
	char _dashTokens; // 0x1d0
	FTunableStat _maximumDashTokens; // 0x1d8
	FTunableStat _tokenChargeRate; // 0x258
};

struct UForThePeople {
	float _brokenEffectDurations[0x3]; // 0x3dc
	FSecondaryInteractionProperties _secondaryActionProperties; // 0x3e8
};

struct UFlashbang {
	AGenerator* _generatorBeingRepaired; // 0x3d8
	float _generatorsRepairTargetProgression; // 0x3e0
	float _generatorRepairPercentToCraftFlashbang[0x3]; // 0x3e4
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x58
	FMulticastInlineDelegate OnFailed; // 0x68
};

struct UAIHealAllyBehaviourData {
	ACamperPlayer* _targetAlly; // 0x30
};

struct UBTTask_RunEQSQuery {
	UEnvQuery* QueryTemplate; // 0xa8
	TArray<FEnvNamedValue> QueryParams; // 0xb0
	TArray<FAIDynamicParam> QueryConfig; // 0xc0
	EEnvQueryRunMode RunMode; // 0xd0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xd8
	bool bUseBBKey; // 0x108
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x110
};

struct UPawnAction_Wait {
	float TimeToWait; // 0xa0
};

struct UUniformVector {
	float Magnitude; // 0xb8
	FVector Direction; // 0xbc
};

struct ULevelReadyToPlayPlayerComponent {
	TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementsTarget; // 0xb8
};

struct UProjectileMovementComponent {
	float InitialSpeed; // 0xf8
	float MaxSpeed; // 0xfc
	char bRotationFollowsVelocity : 1; // 0x100
	char bRotationRemainsVertical : 1; // 0x100
	char bShouldBounce : 1; // 0x100
	char bInitialVelocityInLocalSpace : 1; // 0x100
	char bForceSubStepping : 1; // 0x100
	char bSimulationEnabled : 1; // 0x100
	char bSweepCollision : 1; // 0x100
	char bIsHomingProjectile : 1; // 0x100
	char bBounceAngleAffectsFriction : 1; // 0x101
	char bIsSliding : 1; // 0x101
	char bInterpMovement : 1; // 0x101
	char bInterpRotation : 1; // 0x101
	float PreviousHitTime; // 0x104
	FVector PreviousHitNormal; // 0x108
	float ProjectileGravityScale; // 0x114
	float Buoyancy; // 0x118
	float Bounciness; // 0x11c
	float Friction; // 0x120
	float BounceVelocityStopSimulatingThreshold; // 0x124
	float MinFrictionFraction; // 0x128
	FMulticastInlineDelegate OnProjectileBounce; // 0x130
	FMulticastInlineDelegate OnProjectileStop; // 0x140
	float HomingAccelerationMagnitude; // 0x150
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x154
	float MaxSimulationTimeStep; // 0x15c
	int32_t MaxSimulationIterations; // 0x160
	int32_t BounceAdditionalIterations; // 0x164
	float InterpLocationTime; // 0x168
	float InterpRotationTime; // 0x16c
	float InterpLocationMaxLagDistance; // 0x170
	float InterpLocationSnapToTargetDistance; // 0x174
};

struct UZombiesInterestEventManager {
	TArray<FGameplayTag> _zombieInterestEvents; // 0xd0
};

struct UK25SurvivorChainRotationStrategy {
	TWeakObjectPtr<ACamperPlayer> _cachedSurvivor; // 0xb8
	UK25SurvivorChainAttachmentComponent* _cachedChainAttachmentComponent; // 0xc0
};

struct ACharm {
	USkeletalMeshComponent* _skeletalMeshComponent; // 0x238
	AItemVfx* _actorVfx; // 0x240
};

struct UBTService_ClearBBEntry {
	FBlackboardKeySelector BBToResetKey; // 0x80
};

struct UHarpoonChainPositioner {
	AHarpoonProp* _harpoonPropClass; // 0xb8
	FName _survivorAttachSocket; // 0xc0
	FName _animationSocket; // 0xcc
	FDBDTunableRowHandle _reelBackToRifleSpeed; // 0xd8
	float _harpoonMinimumSnapBackDistance; // 0x100
	AHarpoonProp* _harpoonProp; // 0x108
	AHarpoonProjectile* _harpoonProjectile; // 0x110
	ADBDPlayer* _collector; // 0x118
	ARifleChain* _chain; // 0x128
};

struct UHexPerk {
	TArray<ADBDPlayer*> _playersWhoKnowCurse; // 0x428
};

struct UBlightedSerumDashInteraction {
	UBlightedSerumCooldownInteraction* _cooldownInteraction; // 0x5b0
	UBlightedSerumCollisionInteraction* _collisionInteraction; // 0x5b8
	UCurveFloat* _dashSpeedCurve; // 0x5c0
	UCurveFloat* _lookAngleToTurnRateCurveController; // 0x5c8
	UCurveFloat* _lookAngleToTurnRateCurveMouse; // 0x5d0
	float _dashDuration; // 0x5d8
	float _vectorInterpToSpeed; // 0x5dc
	float _wallDashAccelerationMultiplier; // 0x5e0
	float _cameraPitchRecenterTime; // 0x5e4
	float _lookAngleTurnRateModifier; // 0x5e8
	float _wallDashCollisionRadius; // 0x5ec
	float _wallDashCollisionHeight; // 0x5f0
	float _wallDashCollisionRange; // 0x5f4
};

struct USpinBoxWidgetStyle {
	FSpinBoxStyle SpinBoxStyle; // 0x38
};

struct UClickDragInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UUMGSwitcherScreen {
	FMulticastInlineDelegate OnLoadoutWidgetSlotClicked; // 0x300
	FMulticastInlineDelegate OnLoadoutWidgetInventoryItemSelected; // 0x310
	FMulticastInlineDelegate OnLoadoutWidgetInventoryItemUnselected; // 0x320
	UWidgetSwitcher* ContainerWidgetSwitcher; // 0x390
	UUMGBloodStoreWidget* BloodStoreWidget; // 0x398
	UUMGLoadoutWidget* LoadoutWidget; // 0x3a0
	UUMGCharacterSelectionWidget* CharacterSelectionWidget; // 0x3a8
};

struct AEmitter {
	UParticleSystemComponent* ParticleSystemComponent; // 0x230
	char bDestroyOnSystemFinish : 1; // 0x238
	char bPostUpdateTickGroup : 1; // 0x238
	char bCurrentlyActive : 1; // 0x238
	FMulticastInlineDelegate OnParticleSpawn; // 0x240
	FMulticastInlineDelegate OnParticleBurst; // 0x250
	FMulticastInlineDelegate OnParticleDeath; // 0x260
	FMulticastInlineDelegate OnParticleCollide; // 0x270
};

struct AWindow {
	FNativeBlockIndicatorData NativeSmokeOtherIndicatorData; // 0x328
	FNativeBlockIndicatorData NativeEntityIndicatorData; // 0x340
	FNativeBlockIndicatorData NativeSmokeSelfIndicatorData; // 0x358
	bool _isBlockedByLevel; // 0x370
	UChildActorComponent* _entityAssets; // 0x378
	UMaterialHelper* _materialHelper; // 0x380
	UAkComponent* _akAudioWindow; // 0x388
	UAkAudioEvent* akAudioEventWindowsBlocStart; // 0x390
	UAkAudioEvent* akAudioEventWindowsBlocStop; // 0x398
	TMap<ACamperPlayer*, FVaultData> _survivorVaultData; // 0x3a0
	ULocalPlayerTrackerComponent* _localPlayerTracker; // 0x3f8
	UBlockableComponent* _blockableComponent; // 0x400
	UDBDNavEvadeLoopComponent* _navEvadeLoopComponent; // 0x418
};

struct UIsTimerDoneCondition {
	UTimerObject* _timer; // 0xe8
};

struct UK24CheatComponent {
	AZombiesManagement* _zombieManagementClass; // 0xb8
	AZombiesManagement* _zombiesManagement; // 0xc0
};

struct AProceduralFoliageBlockingVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x268
};

struct UAISkill_Find {
	AActor* FindClass; // 0xc0
	FGameplayTag BlackboardWishListTag; // 0xc8
	float SearchInterval; // 0xd4
	bool MustBeSeen; // 0xd8
	TArray<UObject*> _currentWishedObjects; // 0xe0
};

struct UScreamSurvivorSubAnimInstance {
	bool _screamTrigger; // 0x4f0
};

struct USourceEffectBitCrusherPreset {
	FSourceEffectBitCrusherSettings Settings; // 0x78
};

struct ASpotLight {
	USpotLightComponent* SpotLightComponent; // 0x240
};

struct UVariant {
	FText DisplayText; // 0x30
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct UGameManualSubPresenter {
	TScriptInterface<IGameManualViewInterface> _gameManualWidget; // 0xb8
};

struct UBTService_FindInteractor {
	FBlackboardKeySelector BBSearchAround; // 0x88
	float SearchInterval; // 0xb8
	float SearchHeightAmplifierActivationHeight; // 0xbc
	float SearchHeightAmplifier; // 0xc0
	UNavigationQueryFilter* FilterClass; // 0xc8
	bool RegisterAsDiscoveredWhenFound; // 0xd0
	FBlackboardKeySelector BBOnlyFromActor; // 0xd8
	TArray<FString> OnlyWithInteractorIDs; // 0x108
	float RejectIfTerrorIsCloserThanSelfMargin; // 0x118
	float RejectIfInTerrorRadius; // 0x11c
	bool RejectIfInPressureZone; // 0x120
	bool UseLastKnownPositionForTerrorRejects; // 0x121
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject; // 0x122
	FName RejectCooldownContextName; // 0x124
	bool AbandonIfInChase; // 0x130
	bool RejectIfFocusedByOther; // 0x131
	bool RejectIfNotFocusedBySelf; // 0x132
	bool IgnoreFocusFilterInEndgameCollapse; // 0x133
	bool RejectIfNotInSight; // 0x134
	bool IgnoreSightFilterIfDiscovered; // 0x135
	bool IgnoreSightFilterIfInRange; // 0x136
	float RejectAboveRange; // 0x138
	bool IgnoreRangeFilterIfDiscovered; // 0x13c
	bool IgnoreRangeFilterIfInSight; // 0x13d
	FBlackboardKeySelector BBInteractLocation; // 0x140
	FBlackboardKeySelector BBInteractorObj; // 0x170
	FAITunableParameter CantInterruptGoalInteractionUnderRemainingTime; // 0x1a0
	FAITunableParameter GoalBasicWeight; // 0x1b0
	FAITunableParameter GoalWeightMaxDistance; // 0x1c0
	FAITunableParameter GoalWeightAtMinDistance; // 0x1d0
	FAITunableParameter GoalWeightAtEndgameStart; // 0x1e0
	FAITunableParameter GoalWeightAtEndgameEnd; // 0x1f0
	UInteractor* _goalInteractor; // 0x200
	ADBDAIBTController* _aiOwner; // 0x208
};

struct UPawnAction_Move {
	AActor* GoalActor; // 0xa0
	FVector goalLocation; // 0xa8
	float AcceptableRadius; // 0xb4
	UNavigationQueryFilter* FilterClass; // 0xb8
	char bAllowStrafe : 1; // 0xc0
	char bFinishOnOverlap : 1; // 0xc0
	char bUsePathfinding : 1; // 0xc0
	char bAllowPartialPath : 1; // 0xc0
	char bProjectGoalToNavigation : 1; // 0xc0
	char bUpdatePathToGoal : 1; // 0xc0
	char bAbortChildActionOnPathChange : 1; // 0xc0
};

struct UBTTask_SetIsChased {
	bool ToSetValue; // 0x78
};

struct ULandscapeLayerInfoObject {
	FName LayerName; // 0x30
	UPhysicalMaterial* PhysMaterial; // 0x40
	float Hardness; // 0x48
	FLinearColor LayerUsageDebugColor; // 0x4c
};

struct UParticleModuleEventReceiverKillParticles {
	char bStopSpawning : 1; // 0x48
};

struct UTrailOfTorment {
	float _cooldownDuration[0x3]; // 0x3e8
	int32_t _highlightPriority; // 0x3f4
	bool _isPerkActivated; // 0x3f8
	AGenerator* _highlightedGenerator; // 0x400
	UStatusEffect* _statusEffect; // 0x408
};

struct UPrimitiveCollection {
	TSet<TWeakObjectPtr<UPrimitiveComponent>> _primitives; // 0x30
};

struct UK25TeleportInteraction {
	int32_t _maxNumberLocationQueriesPerTick; // 0x6d8
	float _timeSensingLamentConfigurationAfterInteractionEnded; // 0x6dc
	FDBDTunableRowHandle _slowdownAfterTeleportDuration; // 0x700
};

struct UProceduralFoliageComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb8
	float TileOverlap; // 0xc0
	AVolume* SpawningVolume; // 0xc8
	FGuid ProceduralGuid; // 0xd0
};

struct UDynamicMeshBrushTool {
	UPreviewMesh* PreviewMesh; // 0x1d0
};

struct UFindTurnBasedMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UInteractionDefinition {
	FString InteractionID; // 0x250
	float SnapTime; // 0x260
	bool ResetCameraDuringSnap; // 0x264
	bool IsInteractionCancelled; // 0x265
	bool AllowStartInteractionFromHeldInput; // 0x266
	bool AtlantaOverridePowerButtonImage; // 0x267
	FName AtlantaInteractionID; // 0x268
	bool AtlantaOverrideItemUseToggleState; // 0x274
	bool OverrideStopInteractionOnInputRelease; // 0x275
	bool StopInteractionOnMontageComplete; // 0x276
	bool StopInteractionOnMontageBlendingOut; // 0x277
	bool StopInteractionOnTimerExpire; // 0x278
	bool StopInteractionOnHeightDelta; // 0x279
	bool StopEnterMontageOnExit; // 0x27a
	bool StopUpdateMontageOnExit; // 0x27b
	bool IgnoreStrafeAnimFix; // 0x27c
	EInteractionAnimation InteractionAnimation; // 0x27d
	bool CamperCanInteract; // 0x27e
	bool SlasherCanInteract; // 0x27f
	bool AllowInputPersistence; // 0x280
	bool snapPosition; // 0x281
	bool snapRotation; // 0x282
	float SnapStopDistance; // 0x284
	bool TestClearPathDuringSnap; // 0x288
	bool CheckInteractableIsInPlayerView; // 0x289
	float CheckInteractableInViewSphereSweepRadius; // 0x28c
	FVector CheckInteractableInViewOffset; // 0x290
	float CheckInteractableInViewOffsetDistanceToHitPoint; // 0x29c
	bool IsInterruptibleIfTestClearPathDuringSnapFails; // 0x2a0
	bool TestPlayerOrientationOnSnap; // 0x2a1
	bool ScaleEnterAnimationToTime; // 0x2a2
	bool ScaleMainAnimationToTime; // 0x2a3
	bool ScaleExitAnimationToTime; // 0x2a4
	ESnapBackType SnapBackType; // 0x2a5
	ESnapBackPositionType SnapBackPositionType; // 0x2a6
	FVector2D SnapBackPositionOffset; // 0x2a8
	bool SnapToInitialRotationDuringSnapBack; // 0x2b0
	bool UseStartSnapTimeForSnapExitTime; // 0x2b1
	bool CanInteractWhileIncapacitated; // 0x2b2
	bool CanInteractWhileCloaked; // 0x2b3
	bool CanInteractWhileChainBlinking; // 0x2b4
	bool CanInteractWhileAttacking; // 0x2b5
	bool CanInteractWhileChainLinked; // 0x2b6
	bool CanInteractWhileShocked; // 0x2b7
	bool CanInteractWhileUnhookingSelf; // 0x2b8
	bool CanInteractWhileCarrying; // 0x2b9
	bool AllowNavigation; // 0x2ba
	bool AllowNavigationInput; // 0x2bb
	bool AllowRotation; // 0x2bc
	bool UseCameraMontageMode; // 0x2bd
	bool OwnerBlocksAttack; // 0x2be
	bool IsHighPriority; // 0x2bf
	bool AllowOverridingWhenNotForced; // 0x2c0
	bool IgnoreOverlapOnInteractable; // 0x2c1
	bool UseAuthoritativeMovement; // 0x2c2
	bool CanBeAuthoritativePushedDuringEnter; // 0x2c3
	bool CanBeAuthoritativePushedDuringUpdate; // 0x2c4
	bool CanBeAuthoritativePushedDuringExit; // 0x2c5
	bool CanAuthoritativePush; // 0x2c6
	bool CancelOnHit; // 0x2c7
	bool CancelOnAttack; // 0x2c8
	bool HideItem; // 0x2c9
	bool AutoBindToParentInteractor; // 0x2ca
	bool AutoBindToParentZone; // 0x2cb
	float CancelOnMoveInitialDelay; // 0x2cc
	float CancelOnMoveInput; // 0x2d0
	bool CancelOnMoveInputOnlyWhenRunning; // 0x2d4
	TArray<float> ProgressBasedSkillChecks; // 0x2d8
	bool CanCrouch; // 0x2e8
	bool AffectsStillness; // 0x2e9
	bool ConsideredIdle; // 0x2ea
	bool BlockSelfInteract; // 0x2eb
	float InteractionTime; // 0x2ec
	bool ShowHighlightWhenActive; // 0x2f0
	bool AtlantaAlwaysHighPriority; // 0x2f1
	bool ShowHighlightWhenAvailable; // 0x2f2
	EPowerProgressBar ProgressBarToUpdate; // 0x2f3
	bool UpdateHighlightOpacityUsingCharge; // 0x2f4
	EInputInteractionType interactionInputType; // 0x2f5
	bool StopInteractionOnInputRelease; // 0x2f6
	TArray<UInterruptionDefinition*> _interruptionDefinitions; // 0x2f8
	FMulticastInlineDelegate OnInteractionAnimNotify; // 0x350
	bool DebugUnavailability; // 0x360
	EInputInteractionType SecondaryActionInputType; // 0x361
	EInputInteractionType AtlantaSecondaryActionInputType; // 0x362
	UCurveFloat* NavigationSpeedCurveEnter; // 0x380
	UCurveFloat* NavigationSpeedCurve; // 0x388
	UCurveFloat* NavigationSpeedCurveExit; // 0x390
	EInputInteractionType InteractionAtlantaInputType; // 0x398
	bool AtlantaStopInteractionOnInputRelease; // 0x399
	bool _shouldCheckInteractedUpon; // 0x39a
	EInteractionOwnership OwnershipUsability; // 0x39b
	float ExitInteractionTime; // 0x39c
	bool ApplyModifiersToExitTime; // 0x3a0
	FText InteractionDescriptionText; // 0x3a8
	EButtonType AtlantaLastButtonPressed; // 0x3c0
	float InteractionHeightDeltaMax; // 0x3c4
	float MaximumVelocity; // 0x3c8
	FAnimationMontageDescriptor EnterMontage; // 0x3d0
	FAnimationMontageDescriptor UpdateMontage; // 0x3f0
	FAnimationMontageDescriptor ExitMontage; // 0x410
	FName SnapSocketName; // 0x430
	bool _canBeAttachedToAnyZone; // 0x43c
	EButtonType CancelButtonType; // 0x43d
	EButtonType SecondaryActionButtonType; // 0x43e
	EButtonType SecondaryAttackButtonType; // 0x43f
	bool _isInterruptibleBySacrifice; // 0x440
	bool IgnoreStun; // 0x441
	FGameplayTagContainer _tags; // 0x448
	FGameplayTag _objectStateTag; // 0x468
	TMap<FName, FSecondaryInteractionProperties> _secondaryInteractions; // 0x478
	bool _useHoldPrompt; // 0x4c8
	bool _allowInteractionInNarrowSpaces; // 0x4c9
	bool _allowIKSensorDuringInteraction; // 0x4ca
	bool _startUpdateMontageDuringEnter; // 0x4cb
	UInteractor* _interactor; // 0x4d0
	TArray<UInteractionDefinition*> _mutuallyExclusiveInteractionsClient; // 0x4d8
	FActivationDefinition _activationDefinition; // 0x4e8
	UPrimitiveComponent* _zone; // 0x510
	EInputInteractionType _cancelInputType; // 0x518
	FGameplayTagContainer _preventingTags; // 0x520
	FGameplayTagContainer _disablingTags; // 0x540
	TArray<UPlayerInteractionHandler*> _evaluatingInteractionHandlers; // 0x560
	FSecondaryInteractionProperties DEPRECATED_SecondaryInteractionProperties; // 0x570
};

struct UUMGNavigationButtonWidget {
	UWidget* NotificationPanel; // 0x430
};

struct UUMGObjectivesWidget {
	ESlateVisibility PanelEscapeRequirementsVisibility; // 0x300
	ESlateVisibility PanelGeneratorVisibility; // 0x301
	ESlateVisibility PanelFindExitVisibility; // 0x302
	ESlateVisibility PanelHatchVisibility; // 0x303
};

struct USoundNodeBranch {
	FName BoolParameterName; // 0x50
};

struct UAddon_K22Power_19 {
	float _auraRevealedDuration; // 0x2a8
};

struct UTwinBaseAddon {
	FName _statusEffectId; // 0x298
	float _customParam; // 0x2a4
};

struct UMaterialExpressionLandscapeLayerSwitch {
	FExpressionInput LayerUsed; // 0x48
	FExpressionInput LayerNotUsed; // 0x64
	FName ParameterName; // 0x80
	char PreviewUsed : 1; // 0x8c
	FGuid ExpressionGUID; // 0x90
};

struct UDeceptionEffect {
	bool _hideBloodTrailsWhenCamperFakeEnterLocker; // 0x350
};

struct UActorDependency {
	TArray<FDependency> Dependencies; // 0xb8
};

struct UAddon_TheBlight_21 {
	UStatusEffect* _forceKoStatusEffect; // 0x298
};

struct USoundfieldSubmix {
	FName SoundfieldEncodingFormat; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x70
};

struct UEnvQueryTest_Distance {
	EEnvTestDistance TestMode; // 0x238
	UEnvQueryContext* DistanceTo; // 0x240
};

struct UMRMeshComponent {
	UMaterialInterface* Material; // 0x430
	bool bCreateMeshProxySections; // 0x438
	bool bUpdateNavMeshOnMeshUpdate; // 0x439
	bool bNeverCreateCollisionMesh; // 0x43a
	UBodySetup* CachedBodySetup; // 0x440
	TArray<UBodySetup*> BodySetups; // 0x448
	UMaterialInterface* WireframeMaterial; // 0x458
};

struct UTemplateSequence {
	UMovieScene* MovieScene; // 0x350
	TSoftClassPtr<UObject> BoundActorClass; // 0x358
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x388
	TMap<FGuid, FName> BoundActorComponents; // 0x3b8
};

struct ALanternInteractable {
	FMulticastInlineDelegate OnLanternStateChanged; // 0x328
	FMulticastInlineDelegate OnLanternCollectedByPlayerCosmetic; // 0x338
	ALanternLightCollectable* _collectableClass; // 0x368
};

struct UWindowTitleBarAreaSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USwfMovie {
	char bUseGFxExport : 1; // 0x30
	char bOptimizeForMobiles : 1; // 0x30
	char bSetSRGBOnImportedTextures : 1; // 0x30
	char bPackTextures : 1; // 0x30
	int32_t PackTextureSize; // 0x34
	char bForceSquarePacking : 1; // 0x38
	FlashTextureRescale TextureRescale; // 0x3c
	FString TextureFormat; // 0x40
	char bReplaceImages : 1; // 0x50
	FString SourceFile; // 0x58
	TArray<FString> FontMappings; // 0x68
	FString SourceFileTimestamp; // 0x78
	uint64_t ImportTimeStamp; // 0x88
	TArray<char> RawData; // 0x90
	TArray<FString> ReferencedAssetNames; // 0xa0
	TArray<UObject*> References; // 0xb0
	TArray<UObject*> UserReferences; // 0xc0
};

struct USmoothMeshTool {
	ESmoothMeshToolSmoothType SmoothType; // 0x98
	float SmoothSpeed; // 0x9c
	int32_t SmoothIterations; // 0xa0
	UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8
};

struct UCharacterChaseVisualComponent {
	FMulticastInlineDelegate OnChaseStartEvent; // 0xb8
	FMulticastInlineDelegate OnChaseEndEvent; // 0xc8
	UMaterialHelperUnaffectedStaticMeshComp* _vignetteMeshComp; // 0xd8
	FVector _relativeLocation; // 0xe0
	FVector _relativeScale; // 0xec
	FRotator _relativeRotation; // 0xf8
	float _fovModifyFactor; // 0x104
};

struct UAkLinuxInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct UCompositeModifierCondition {
	TArray<UEventDrivenModifierCondition*> _conditions; // 0xf0
};

struct UDownloadMultiTextureTask {
	TArray<UDownloadingTextureTask*> _downloadingTasks; // 0x30
	TMap<FName, UTexture2DDynamic*> _downloadedTextures; // 0x58
	int32_t _remainingTasks; // 0xa8
};

struct UInteractiveToolManager {
	UInteractiveTool* ActiveLeftTool; // 0x38
	UInteractiveTool* ActiveRightTool; // 0x40
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x98
};

struct UStreamableRenderAsset {
	double ForceMipLevelsToBeResidentTimestamp; // 0x30
	int32_t NumCinematicMipLevels; // 0x38
	int32_t StreamingIndex; // 0x3c
	int32_t CachedCombinedLODBias; // 0x40
	char CachedNumResidentLODs; // 0x44
	char bCachedReadyForStreaming : 1; // 0x45
	char NeverStream : 1; // 0x45
	char bGlobalForceMipLevelsToBeResident : 1; // 0x45
	char bIsStreamable : 1; // 0x45
	char bHasStreamingUpdatePending : 1; // 0x45
	char bForceMiplevelsToBeResident : 1; // 0x45
	char bIgnoreStreamingMipBias : 1; // 0x45
	char bUseCinematicMipLevels : 1; // 0x45
};

struct UParticleModuleLocationStaticVertSurface {
	ELocationStaticVertSurfaceSource SourceType; // 0x38
	FVector UniversalOffset; // 0x3c
	char bUpdatePositionEachFrame : 1; // 0x48
	char bOrientMeshEmitters : 1; // 0x48
	FName StaticMeshActorParamName; // 0x4c
	char bEnforceNormalCheck : 1; // 0x58
	FVector NormalToCompare; // 0x5c
	float NormalCheckToleranceDegrees; // 0x68
	float NormalCheckTolerance; // 0x6c
	TArray<int32_t> ValidMaterialIndices; // 0x70
	char bInheritVertexColor : 1; // 0x80
	char bInheritUV : 1; // 0x80
	uint32_t InheritUVChannel; // 0x84
};

struct ULightMapVirtualTexture2D {
	TArray<int8_t> TypeToLayer; // 0x108
};

struct UCoreButtonSelector {
	FMulticastInlineDelegate OnSelectedDelegate; // 0x2d8
	FMulticastInlineDelegate OnSelectedAgainDelegate; // 0x2e8
	FMulticastInlineDelegate OnUnselectedDelegate; // 0x2f8
	TArray<UCoreSelectableButtonWidget*> _buttons; // 0x308
};

struct UMovieSceneEnumTrack {
	UEnum* Enum; // 0x98
};

struct Uspecialeventmanager {
	USpecialEventsContainer* _specialEventsContainer; // 0xb0
};

struct UPanelScreenUMG {
	UUMGSwitcherScreen* _atlantaPanelScreen; // 0x320
};

struct UUMGEndGameCollapseWidget {
	float _progressBarInterpSpeed; // 0x308
	bool _slowMode; // 0x30c
	UCanvasPanel* NormalBar; // 0x310
	UCanvasPanel* SlowBar; // 0x318
	UUMGEndGameCollapseProgressWidget* NormalProgressBar; // 0x320
	UUMGEndGameCollapseProgressWidget* SlowProgressBar; // 0x328
	UUMGEndGameCollapseProgressWidget* _topBar; // 0x378
};

struct USoundNodeModulatorContinuous {
	FModulatorContinuousParams PitchModulationParams; // 0x50
	FModulatorContinuousParams VolumeModulationParams; // 0x74
};

struct UThrowRockInteraction {
	FDBDTunableRowHandle _loudNoiseAudioRange; // 0x5b0
	float _scratchMarksApplicationDelay; // 0x5d8
	int32_t _scratchMarksCountToSpawn; // 0x5dc
	float _diversionHeightOffset; // 0x5e4
};

struct UUMGAtlantaTutorialGenericPopup {
	UImage* ImageTutorial; // 0x3e8
	UVerticalBox* ImagesCanvas; // 0x3f0
	UHorizontalBox* ButtonsPanel; // 0x3f8
	TSoftClassPtr<UObject> _pageButtonWidgetClass; // 0x400
	float ButtonWidth; // 0x430
	float DelayBeforeChangingImage; // 0x434
	FTimerHandle _changeImagesTimerHandle; // 0x438
};

struct ACameraActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x230
	UCameraComponent* CameraComponent; // 0x238
	USceneComponent* SceneComponent; // 0x240
	char bConstrainAspectRatio : 1; // 0x250
	float AspectRatio; // 0x254
	float FOVAngle; // 0x258
	float PostProcessBlendWeight; // 0x25c
	FPostProcessSettings PostProcessSettings; // 0x260
};

struct UUMGPromoPackContentWidget {
	UHorizontalBox* Content; // 0x300
	UPromoPackContentDataAsset* WidgetPerContentType; // 0x308
	UScrollBox* ScrollBox; // 0x310
	TArray<TWeakObjectPtr<UVerticalBox>> _itemsContainer; // 0x318
};

struct UTimedRespawnableTrigger {
	URespawningEventComponent* _respawningEventComponent; // 0xb8
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
	int32_t CurrentNumLoops; // 0x478
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x490
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a8
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x830
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x840
};

struct UWraithBurnable {
	FDBDTunableRowHandle _flashlightEvasionScoreCooldown; // 0x110
};

struct UEditMeshPolygonsTool {
	USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd8
	UPolyEditTransformProperties* TransformProps; // 0xe0
	UEditMeshPolygonsToolActions* EditActions; // 0x210
	UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0x218
	UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0x220
	UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0x228
	UEditMeshPolygonsToolUVActions* EditUVActions; // 0x230
	UPolyEditExtrudeProperties* ExtrudeProperties; // 0x238
	UPolyEditCutProperties* CutProperties; // 0x2d0
	UPolyEditSetUVProperties* SetUVProperties; // 0x2d8
	UPolygonSelectionMechanic* SelectionMechanic; // 0x2e0
	UMultiTransformer* MultiTransformer; // 0x2f0
	UPolyEditPreviewMesh* EditPreview; // 0x6a0
	UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x6b0
	USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x6b8
	UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x6c0
};

struct UUMGTallyListWidget {
	FText TopLeftText; // 0x430
	FText TopRightText; // 0x448
	UCanvasPanel* ListBGPanel; // 0x460
	EPlayerRole _playerRole; // 0x468
	TSet<int32_t> _inAnimationPlayedPages; // 0x470
	TMap<ETallyListPageID, UUMGTallyListElementWidget*> _listItemWidgets; // 0x4c0
};

struct UBTDecorator {
	char bInverseCondition : 1; // 0x68
	EBTFlowAbortMode FlowAbortMode; // 0x6c
};

struct UDatasmithLandscapeTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x38
	int32_t StaticLightingLOD; // 0x40
};

struct UInterpTrackLinearColorProp {
	FName PropertyName; // 0x98
};

struct UAsyncActionHandleSaveGame {
	FMulticastInlineDelegate COMPLETED; // 0x38
	USaveGame* SaveGameObject; // 0x68
};

struct UParticleModuleAttractorPointGravity {
	FVector Position; // 0x38
	float Radius; // 0x44
	UDistributionFloat* Strength; // 0x48
	FRawDistributionFloat StrengthRaw; // 0x50
};

struct USlasherHitsWhileCarryingTrackerComponent {
	TSet<ACamperPlayer*> _campersHitDuringLastCarry; // 0xb8
};

struct UUMGHudEditorDragConstraintWidget {
	USizeBox* LinkSizeBox; // 0x260
	UUserWidget* _childWidget; // 0x268
	UUserWidget* _parentWidget; // 0x270
};

struct UBTDecorator_IsGameState {
	EArithmeticKeyOperation RemainingObjectiveOp; // 0x70
	int32_t NbRemainingObjectives; // 0x74
	EArithmeticKeyOperation SurvivorsLeftOp; // 0x78
	int32_t NbSurvivorsLeft; // 0x7c
};

struct UBTTask_RunSkills {
	FGameplayTag Context; // 0x78
};

struct UAnyMeansNecessary {
	bool RevealSurvivorOnPalletPullUpStarted; // 0x3d0
	bool RevealSurvivorOnPalletPulledUp; // 0x3d1
	float RevealSurvivorDuration; // 0x3d4
	TWeakObjectPtr<UStatusEffect> _effect; // 0x3d8
	float _cooldownDuration[0x3]; // 0x3e0
};

struct UBorderSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UPerkSoundHudWidget {
	UHorizontalBox* PerkIcons; // 0x300
};

struct UChangeZombieStateBTTask {
	EZombieState _zombieState; // 0xb0
};

struct UCollectSerumInCrateInteraction {
	ASupplyCrateInteractable* _owningSupplyCrate; // 0x5d8
};

struct UGnomePlayerComponent {
	bool _hasInteractedWithGnomeThisGame; // 0xb8
};

struct UAISkill_FindCollectable_LamentConfiguration {
	FAITunableParameter StopChainHuntGoalWeight; // 0x120
	FAITunableParameter PreemptiveFindLamentGoalWeight; // 0x130
};

struct UAkAssetDataSwitchContainer {
	TArray<UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x90
	UAkGroupValue* DefaultGroupValue; // 0xa0
};

struct AK25SurvivorChainAttachmentAnchor {
	FDBDTunableRowHandle _chainMaxBreakingLength; // 0x248
	float _timeBetweenTrace; // 0x270
	FK25SurvivorChainAttachmentData _attachmentData; // 0x278
	TWeakObjectPtr<ACamperPlayer> _owningSurvivor; // 0x2a0
	TWeakObjectPtr<AK25Chain> _attachedChain; // 0x2a8
	FVector _cachedPullDirection; // 0x2d8
};

struct ULamentConfigurationChainHuntComponent {
	float _floorChainHuntTimeBetweenChainStrikes; // 0x130
	FTunableStat _chainHuntChargeTime; // 0x138
	UCurveFloat* _chainNumberPerChainHuntCluster; // 0x1b8
	UCurveFloat* _timeBetweenChainHuntClusterStrikes; // 0x1c0
	UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponentClass; // 0x1c8
	UK25SurvivorChainHuntEffectsComponent* _survivorChainHuntEffectsComponentClass; // 0x1d0
	UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponent; // 0x1d8
	TArray<UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents; // 0x1e0
	float _cachedAdditiveChainStrikeDelayTime; // 0x250
	FChainHuntStateData _chainHuntStateData; // 0x288
	EChainHuntState _oldChainHuntState; // 0x298
};

struct UEnvQueryTest_Volume {
	UEnvQueryContext* VolumeContext; // 0x238
	AVolume* VolumeClass; // 0x240
	char bDoComplexVolumeTest : 1; // 0x248
};

struct UAIPerceptionSystem {
	TArray<UAISense*> Senses; // 0x90
	float PerceptionAgingRate; // 0xa0
};

struct UControlPointMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4e8
};

struct UUMGAtlEndDateTimerWidget {
	UTextBlock* TextEndIn; // 0x300
};

struct UUMGBasePassStorefrontWidget {
	UUMGSubscriptionsPageScrollWidget* SubscriptionsPageScroll; // 0x300
};

struct UUMGTallyBloodpointsWidget {
	ESlateVisibility _itemBoxVisibility; // 0x310
	FText _labelTotalScore; // 0x318
	FText _labelItemTitle; // 0x330
	FText _labelItemAddOnTitle; // 0x348
	FLinearColor _labelItemTitleColor; // 0x360
	UHorizontalBox* BoxScoreCategory; // 0x370
	TMap<EDBDScoreCategory, FScoreCategoryUIExtraData> _scoreCategoryExtraDataMap; // 0x378
};

struct USkyLightComponent {
	ESkyLightSourceType SourceType; // 0x260
	UTextureCube* Cubemap; // 0x268
	float SourceCubemapAngle; // 0x270
	int32_t CubemapResolution; // 0x274
	float SkyDistanceThreshold; // 0x278
	bool bCaptureEmissiveOnly; // 0x27c
	bool bLowerHemisphereIsBlack; // 0x27d
	FLinearColor LowerHemisphereColor; // 0x280
	float OcclusionMaxDistance; // 0x290
	float Contrast; // 0x294
	float OcclusionExponent; // 0x298
	float MinOcclusion; // 0x29c
	FColor OcclusionTint; // 0x2a0
	EOcclusionCombineMode OcclusionCombineMode; // 0x2a4
	UTextureCube* BlendDestinationCubemap; // 0x358
};

struct UStaticMeshSocket {
	FName SocketName; // 0x30
	FVector RelativeLocation; // 0x3c
	FRotator RelativeRotation; // 0x48
	FVector RelativeScale; // 0x54
	FString Tag; // 0x60
};

struct UBTService_Patrol {
	FBlackboardKeySelector BBFilterKey; // 0x78
	EBasicKeyOperation FilterOperation; // 0xa8
	FVector NavMeshFindLocationExtents; // 0xac
	float MinPatrolInvestigationDistance; // 0xb8
	float PatrolPointsValidityCheckInterval; // 0xbc
	FBlackboardKeySelector BBPatrolPointOwner; // 0xc0
	FBlackboardKeySelector BBPatrolLocation; // 0xf0
	FBlackboardKeySelector BBGoToNextPatrolLocation; // 0x120
};

struct UShowLoginUICallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UDragDropOperation_Widget {
	UUMGDragWidget* Widget; // 0x90
	UPanelWidget* WidgetParent; // 0x98
	FVector2D startPosition; // 0xa0
	FVector2D WidgetLocalScale; // 0xa8
	float WidgetLocalOpacity; // 0xc8
	FVector2D OnDropOffset; // 0xcc
	FVector2D OnDragOffset; // 0xd4
	FAnchors WidgetSlotAnchors; // 0xdc
	FMargin WidgetSlotOffsets; // 0xec
	FVector2D WidgetSlotPosition; // 0xfc
	FVector2D WidgetSlotSize; // 0x104
	bool WidgetSlotAutoSize; // 0x10c
	FVector2D WidgetSlotAlignment; // 0x110
	int32_t WidgetSlotZOrder; // 0x118
	UUMGDragWidget* ChildLinkWidget; // 0x120
};

struct USkeletalMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x6d0
	UAnimInstance* AnimClass; // 0x6d8
	UAnimInstance* AnimScriptInstance; // 0x6e0
	UAnimInstance* PostProcessAnimInstance; // 0x6e8
	FSingleAnimationPlayData AnimationData; // 0x6f0
	FVector RootBoneTranslation; // 0x718
	FVector LineCheckBoundsScale; // 0x724
	TArray<UAnimInstance*> LinkedInstances; // 0x750
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x760
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x770
	float GlobalAnimRateScale; // 0x7a0
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x7a4
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x7a5
	EAnimationMode AnimationMode; // 0x7a7
	char bDisablePostProcessBlueprint : 1; // 0x7a9
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x7a9
	char bHasValidBodies : 1; // 0x7a9
	char bBlendPhysics : 1; // 0x7a9
	char bEnablePhysicsOnDedicatedServer : 1; // 0x7a9
	char bUpdateJointsFromAnimation : 1; // 0x7aa
	char bDisableClothSimulation : 1; // 0x7aa
	char bDisableRigidBodyAnimNode : 1; // 0x7aa
	char bAllowAnimCurveEvaluation : 1; // 0x7aa
	char bDisableAnimCurves : 1; // 0x7aa
	char bCollideWithEnvironment : 1; // 0x7ab
	char bCollideWithAttachedChildren : 1; // 0x7ab
	char bLocalSpaceSimulation : 1; // 0x7ab
	char bResetAfterTeleport : 1; // 0x7ab
	char bDeferKinematicBoneUpdate : 1; // 0x7ab
	char bNoSkeletonUpdate : 1; // 0x7ab
	char bPauseAnims : 1; // 0x7ab
	char bUseRefPoseOnInitAnim : 1; // 0x7ac
	char bEnablePerPolyCollision : 1; // 0x7ac
	char bForceRefpose : 1; // 0x7ac
	char bOnlyAllowAutonomousTickPose : 1; // 0x7ac
	char bIsAutonomousTickPose : 1; // 0x7ac
	char bOldForceRefPose : 1; // 0x7ac
	char bShowPrePhysBones : 1; // 0x7ac
	char bRequiredBonesUpToDate : 1; // 0x7ac
	char bAnimTreeInitialised : 1; // 0x7ad
	char bIncludeComponentLocationIntoBounds : 1; // 0x7ad
	char bEnableLineCheckWithBounds : 1; // 0x7ad
	char bUseBendingElements : 1; // 0x7ad
	char bUseTetrahedralConstraints : 1; // 0x7ad
	char bUseThinShellVolumeConstraints : 1; // 0x7ad
	char bUseSelfCollisions : 1; // 0x7ad
	char bUseContinuousCollisionDetection : 1; // 0x7ad
	char bPropagateCurvesToSlaves : 1; // 0x7ae
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x7ae
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x7ae
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x7ae
	uint16_t CachedAnimCurveUidVersion; // 0x7b0
	EClothMassMode MassMode; // 0x7b2
	float UniformMass; // 0x7b4
	float TotalMass; // 0x7b8
	float Density; // 0x7bc
	float MinPerParticleMass; // 0x7c0
	float ClothBlendWeight; // 0x7c4
	float EdgeStiffness; // 0x7c8
	float BendingStiffness; // 0x7cc
	float AreaStiffness; // 0x7d0
	float VolumeStiffness; // 0x7d4
	float StrainLimitingStiffness; // 0x7d8
	float ShapeTargetStiffness; // 0x7dc
	TArray<FName> DisallowedAnimCurves; // 0x7e0
	UBodySetup* BodySetup; // 0x7f0
	FMulticastInlineDelegate OnConstraintBroken; // 0x800
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x810
	float TeleportDistanceThreshold; // 0x8f8
	float TeleportRotationThreshold; // 0x8fc
	uint32_t LastPoseTickFrame; // 0x908
	UClothingSimulationInteractor* ClothingInteractor; // 0x960
	FMulticastInlineDelegate OnAnimInitialized; // 0xa30
};

struct UUniformInteger {
	int32_t Magnitude; // 0xb8
};

struct UAISubsystem {
	UAISystem* AISystem; // 0x38
};

struct UInterpFilter {
	FString Caption; // 0x30
};

struct ANavLinkProxy_Base {
	float WaitLinkOffset; // 0x280
	float MoveOnEndPointTimeLimit; // 0x284
	int32_t NbMaxLinkUsers; // 0x288
	TMap<ADBDPlayer*, FMoveLinkPlayerInfo> _players; // 0x290
	TArray<ADBDPlayer*> _linkUsedByPlayers; // 0x2e0
};

struct UMaterialExpressionStaticBoolParameter {
	char defaultValue : 1; // 0x68
};

struct UNiagaraDataInterfaceCurve {
	FRichCurve Curve; // 0x60
};

struct ABaseTormentTrailPoint {
	USphereComponent* _collisionComponent; // 0x248
	float _collisionRadius; // 0x250
	FTunableStat _tormentTrailAliveTime; // 0x258
	USplineMeshComponent* _splineMeshComponent; // 0x308
	TArray<UStaticMesh*> _trailMeshList; // 0x310
	char _indexInTrail; // 0x320
};

struct UDeathBedAntiCampComponent {
	FDBDTunableRowHandle _anticampZoneDistance; // 0x100
	FDBDTunableRowHandle _anticampZoneTimeToTrigger; // 0x128
};

struct UFixedFrameRateCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x30
};

struct UFXWidget {
	UNiagaraSystem* _niagaraSystem; // 0x260
	FFXWidgetPlayer _particlePlayer; // 0x278
};

struct ULandscapeMeshCollisionComponent {
	FGuid MeshGuid; // 0x508
};

struct AOnlineLobbyLevel {
	UProceduralGenerationData* ProceduralGenerationData; // 0x2b0
	TArray<FVector> _onlineLobbySlasherPOVTrackerOffsets; // 0x2b8
	TArray<TWeakObjectPtr<ADisplayStand>> _onlineLobbyCamperDisplayStands; // 0x2c8
	TArray<TWeakObjectPtr<ADisplayStand>> _onlineLobbySlasherDisplayStands; // 0x2d8
};

struct UMaterialExpression {
	UMaterial* Material; // 0x30
	UMaterialFunction* Function; // 0x38
	char bIsParameterExpression : 1; // 0x40
};

struct UAnimCompress {
	char bNeedsSkeleton : 1; // 0x40
	AnimationCompressionFormat TranslationCompressionFormat; // 0x44
	AnimationCompressionFormat RotationCompressionFormat; // 0x45
	AnimationCompressionFormat ScaleCompressionFormat; // 0x46
};

struct UParticleModuleAccelerationDrag {
	UDistributionFloat* DragCoefficient; // 0x40
	FRawDistributionFloat DragCoefficientRaw; // 0x48
};

struct AOnlineBeaconHost {
	int32_t ListenPort; // 0x268
	TArray<AOnlineBeaconClient*> ClientActors; // 0x270
};

struct AARSharedWorldGameState {
	TArray<char> PreviewImageData; // 0x2a8
	TArray<char> ARWorldData; // 0x2b8
	int32_t PreviewImageBytesTotal; // 0x2c8
	int32_t ARWorldBytesTotal; // 0x2cc
	int32_t PreviewImageBytesDelivered; // 0x2d0
	int32_t ARWorldBytesDelivered; // 0x2d4
};

struct USculptMaxBrushProperties {
	float MaxHeight; // 0x58
	bool bFreezeCurrentHeight; // 0x5c
};

struct UNiagaraDataInterfaceVector2DCurve {
	FRichCurve XCurve; // 0x60
	FRichCurve YCurve; // 0xe0
};

struct USourceBasedOutlineUpdateStrategy {
	FLinearColor _defaultColorForSurvivor; // 0xc0
	FLinearColor _defaultColorForSlasher; // 0xd0
};

struct UCoreBaseHudWidget {
	float FocusAnimationDuration; // 0x2d8
	float FocusAnimationDelay; // 0x2dc
	EEasingType FocusAnimationEasing; // 0x2e0
	float FocusAnimationMaxOpacity; // 0x2e4
	float FocusAnimationMinOpacity; // 0x2e8
};

struct UParticleModuleOrientationAxisLock {
	EParticleAxisLock LockAxisFlags; // 0x38
};

struct UAkComponent {
	bool bUseSpatialAudio; // 0x230
	ECollisionChannel OcclusionCollisionChannel; // 0x238
	char EnableSpotReflectors : 1; // 0x23c
	UAkAuxBus* EarlyReflectionAuxBus; // 0x240
	FString EarlyReflectionAuxBusName; // 0x248
	int32_t EarlyReflectionOrder; // 0x258
	float EarlyReflectionBusSendGain; // 0x25c
	float EarlyReflectionMaxPathLength; // 0x260
	float roomReverbAuxBusGain; // 0x264
	int32_t diffractionMaxEdges; // 0x268
	int32_t diffractionMaxPaths; // 0x26c
	float diffractionMaxPathLength; // 0x270
	char DrawFirstOrderReflections : 1; // 0x274
	char DrawSecondOrderReflections : 1; // 0x274
	char DrawHigherOrderReflections : 1; // 0x274
	char DrawDiffraction : 1; // 0x274
	bool StopWhenOwnerDestroyed; // 0x278
	float AttenuationScalingFactor; // 0x27c
	float OcclusionRefreshInterval; // 0x280
	bool bUseReverbVolumes; // 0x284
	bool ShouldTransmitRelativeAngle; // 0x285
	float OcclusionAffect; // 0x288
	float MaxDistance; // 0x28c
};

struct UDedicatedServerManager {
	TScriptInterface<IDedicatedServerStartupInitializerInterface> _startupInitializer; // 0x30
	UDBDGameInstance* _gameInstance; // 0x50
	UOnlineSystemHandler* _onlineSystemHandler; // 0x58
};

struct UQuestEventEvaluatorBase {
	ADBDPlayer* _dbdPlayer; // 0x50
	TArray<UEvaluatorCondition*> _evaluatorConditionsClass; // 0x70
	TArray<UEvaluatorCondition*> _evaluatorConditions; // 0x80
};

struct UTileBank {
	TArray<ATile*> _allTileBlueprints; // 0x120
};

struct UInteractionRespawnableTrigger {
	URespawningEventComponent* _respawningEventComponent; // 0xb8
};

struct UInterpTrackInstToggle {
	ETrackToggleAction action; // 0x30
	float LastUpdatePosition; // 0x34
	char bSavedActiveState : 1; // 0x38
};

struct UDragDropOperation {
	FString Tag; // 0x30
	UObject* Payload; // 0x40
	UWidget* DefaultDragVisual; // 0x48
	EDragPivot Pivot; // 0x50
	FVector2D Offset; // 0x54
	FMulticastInlineDelegate OnDrop; // 0x60
	FMulticastInlineDelegate OnDragCancelled; // 0x70
	FMulticastInlineDelegate OnDragged; // 0x80
};

struct UComboBox {
	TArray<UObject*> Items; // 0x128
	FDelegate OnGenerateWidgetEvent; // 0x138
	bool bIsFocusable; // 0x14c
};

struct UAISkill_InteractionTarget_StalkShape {
	int32_t StalkRangeLimitedAtEvilTier; // 0x220
	float MaxStalkRangeWhenLimitedByEvilTier; // 0x224
};

struct UParticleModuleRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UMovieSceneMaterialParameterCollectionTrack {
	UMaterialParameterCollection* MPC; // 0x70
};

struct UBTService_FindInteractor_WishList {
	FGameplayTag WishListTag; // 0x218
};

struct UMicroTransactionBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x40
	FString LastError; // 0x50
	FString LastErrorSolution; // 0x60
};

struct UUMGCustomizationScreenWidget {
	UUMGCustomizationPageScrollWidget* PageScrollWidget; // 0x330
	UUMGCustomizationCategoriesBar* CustomizationCategoriesBar; // 0x338
	UTextBlock* CategoryLabel; // 0x340
	UTextBlock* CurrentlyEquippedLabel; // 0x348
	UCanvasPanel* AvailableInOutfitsContainer; // 0x350
	UCanvasPanel* UnlockItemContainer; // 0x358
	UUMGCustomizationItemWidget* OutfitItem; // 0x360
	UVerticalBox* PriceContainer; // 0x368
	TSoftClassPtr<UObject> PriceButtonWidgetClass; // 0x370
	FName _currentSelectedItem; // 0x3a4
};

struct UBasePowerSubAnimInstance {
	bool _isUsingPower; // 0x4f8
};

struct UPathStrategySelector {
	ADBDAIBTController* _aiOwner; // 0x38
	TArray<UPathStrategy*> _activePathStrategies; // 0x40
	TArray<UPathStrategy*> _nextPathStrategies; // 0x50
};

struct UOverlaySlot {
	FMargin Padding; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UBlueprintCore {
	UObject* SkeletonGeneratedClass; // 0x30
	UObject* GeneratedClass; // 0x38
	bool bLegacyNeedToPurgeSkelRefs; // 0x40
	FGuid BlueprintGuid; // 0x44
};

struct UCoreKeyListenerButtontWidget {
	UDBDTextBlock* InputNameTB; // 0x398
};

struct UMaterialExpressionArcsine {
	FExpressionInput Input; // 0x48
};

struct ARecastNavMesh {
	char bDrawTriangleEdges : 1; // 0x428
	char bDrawPolyEdges : 1; // 0x428
	char bDrawFilledPolys : 1; // 0x428
	char bDrawNavMeshEdges : 1; // 0x428
	char bDrawTileBounds : 1; // 0x428
	char bDrawPathCollidingGeometry : 1; // 0x428
	char bDrawTileLabels : 1; // 0x428
	char bDrawPolygonLabels : 1; // 0x428
	char bDrawDefaultPolygonCost : 1; // 0x429
	char bDrawLabelsOnPathNodes : 1; // 0x429
	char bDrawNavLinks : 1; // 0x429
	char bDrawFailedNavLinks : 1; // 0x429
	char bDrawClusters : 1; // 0x429
	char bDrawOctree : 1; // 0x429
	char bDrawOctreeDetails : 1; // 0x429
	char bDrawMarkedForbiddenPolys : 1; // 0x429
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x42a
	char bDrawNavMesh : 1; // 0x42a
	float DrawOffset; // 0x42c
	char bFixedTilePoolSize : 1; // 0x430
	int32_t TilePoolSize; // 0x434
	float TileSizeUU; // 0x438
	float CellSize; // 0x43c
	float CellHeight; // 0x440
	float AgentRadius; // 0x444
	float AgentHeight; // 0x448
	float AgentMaxHeight; // 0x44c
	float AgentMaxSlope; // 0x450
	float AgentMaxStepHeight; // 0x454
	float MinRegionArea; // 0x458
	float MergeRegionSize; // 0x45c
	float MaxSimplificationError; // 0x460
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x464
	int32_t TileNumberHardLimit; // 0x468
	int32_t PolyRefTileBits; // 0x46c
	int32_t PolyRefNavPolyBits; // 0x470
	int32_t PolyRefSaltBits; // 0x474
	FVector NavMeshOriginOffset; // 0x478
	float DefaultDrawDistance; // 0x484
	float DefaultMaxSearchNodes; // 0x488
	float DefaultMaxHierarchicalSearchNodes; // 0x48c
	ERecastPartitioning RegionPartitioning; // 0x490
	ERecastPartitioning LayerPartitioning; // 0x491
	int32_t RegionChunkSplits; // 0x494
	int32_t LayerChunkSplits; // 0x498
	char bSortNavigationAreasByCost : 1; // 0x49c
	char bPerformVoxelFiltering : 1; // 0x49c
	char bMarkLowHeightAreas : 1; // 0x49c
	char bFilterLowSpanSequences : 1; // 0x49c
	char bFilterLowSpanFromTileCache : 1; // 0x49c
	char bDoFullyAsyncNavDataGathering : 1; // 0x49c
	char bUseBetterOffsetsFromCorners : 1; // 0x49c
	char bStoreEmptyTileLayers : 1; // 0x49c
	char bUseVirtualFilters : 1; // 0x49d
	char bAllowNavLinkAsPathEnd : 1; // 0x49d
	char bUseVoxelCache : 1; // 0x49d
	float TileSetUpdateInterval; // 0x4a0
	float HeuristicScale; // 0x4a4
	float VerticalDeviationFromGroundCompensation; // 0x4a8
};

struct UDoesPerkHaveToken {
	TWeakObjectPtr<UPerk> _perk; // 0xe8
};

struct UHatchetThrow {
	FDBDTunableRowHandle _hatchetThrowCancellationCooldown; // 0x6e8
};

struct ADBDPlayerController {
	FMulticastInlineDelegate OnPawnLeavingGame; // 0x640
	FMulticastInlineDelegate OnLocallyObservedChanged; // 0x650
	ANetworkFenceActor* _theFence; // 0x6f8
	UDBDBaseInputHandler* _inputHandler; // 0x708
	APawn* _aiPawn; // 0x838
	EPlayerRole _controllerGameRole; // 0x848
};

struct UTriplanarDecalComponent {
	float MinHeight; // 0x210
	float Height; // 0x214
	float MaskIntensity; // 0x218
	UTexture2D* TopTexture; // 0x220
	UTexture2D* BottomTexture; // 0x228
	UTexture2D* MaskTexture; // 0x230
	EDetailMode MinQualitySetting; // 0x238
	UDecalComponent* _triPlanarDecal; // 0x240
	UObject* _triPlanarDecalClass; // 0x248
	UMaterial* _decalMaterial; // 0x250
};

struct UFloatingPawnMovement {
	float MaxSpeed; // 0x148
	float Acceleration; // 0x14c
	float Deceleration; // 0x150
	float TurningBoost; // 0x154
	char bPositionCorrected : 1; // 0x158
};

struct USourceEffectStereoDelayPreset {
	FSourceEffectStereoDelaySettings Settings; // 0x84
};

struct UAddon_K22Power_10 {
	float _blindnessDuration; // 0x2a8
};

struct UFoliageType_InstancedStaticMesh {
	UStaticMesh* Mesh; // 0x378
	TArray<UMaterialInterface*> OverrideMaterials; // 0x380
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x390
};

struct UTooltipScreenUMG {
	UBaseTooltipWidget* _tooltipWidget; // 0x120
};

struct UUMGAtlantaRequestRoleButton {
	UWidgetSwitcher* IconSwitcher; // 0x430
};

struct UHideInSnowmanInteraction {
	bool _shouldRunOutOfSnowman; // 0x5b0
	bool _isSnowmanShieldDamaged; // 0x5b1
	FDBDTunableRowHandle _timeToEnterSnowman; // 0x5b8
	FDBDTunableRowHandle _minimumTimeToRunAndExit; // 0x5e0
	FDBDTunableRowHandle _cameraZoomBack; // 0x608
	FDBDTunableRowHandle _timeToZoomEnter; // 0x630
	FDBDTunableRowHandle _timeToZoomExit; // 0x658
};

struct UMeshComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x428
	TArray<UMaterialInterface*> BackupMaterials; // 0x438
	char bEnableMaterialParameterCaching : 1; // 0x470
};

struct UAddon_K22Power_21 {
	float _exposedDuration; // 0x2a8
};

struct ULandscapeSplineSegment {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30
	FInterpCurveVector SplineInfo; // 0x60
	TArray<FLandscapeSplineInterpPoint> Points; // 0x78
	FBox Bounds; // 0x88
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa8
};

struct UMadgrit {
	UCurveFloat* _slashHittingSpeedCurve; // 0x3d0
};

struct USkillCheckPresenter {
	UUserWidget* SkillCheckWidgetClass; // 0x108
};

struct UAISkill_InteractionTeleportEthereal_Nightmare {
	float TeleportIfPathLengthSavedAboveRange; // 0x1d8
	AGenerator* _toGenerator; // 0x1e0
};

struct UGizmoComponentHitTarget {
	UPrimitiveComponent* Component; // 0x38
};

struct UUMGMenuEventsBanner {
	UImage* EventsIcon; // 0x470
	UTextBlock* FallbackTitle; // 0x478
};

struct UHexPentimento {
	TSet<FName> _statusEffectNames; // 0x440
	URekindleTotemInteraction* _rekindleInteractionClass; // 0x490
	TArray<ATotem*> _blockedTotems; // 0x498
};

struct USynthSound {
	USynthComponent* OwningSynthComponent; // 0x370
};

struct UGameplayTask_SpawnActor {
	FMulticastInlineDelegate success; // 0x70
	FMulticastInlineDelegate DidNotSpawn; // 0x80
	AActor* ClassToSpawn; // 0xa8
};

struct UDistortion {
	float _activationDurations[0x3]; // 0x3d0
	bool _auraBlockIsActive; // 0x3dc
};

struct UAISkill_FindCollectable_SupplyCrate {
	FAITunableParameter UrgencyGoalWeight; // 0x138
};

struct UMovieSceneFloatSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UDBDBlackboardComponent {
	TMap<UObject*, FMindFocusObjectEntry> _mindFocusEntries; // 0x1c0
	TMap<FGameplayTag, FVector> _pinLocations; // 0x210
	TMap<FGameplayTag, UObject*> _pinObjects; // 0x260
	TMap<UObject*, float> _lostMindFocusEntries; // 0x2b0
	TMap<FGameplayTag, FWeightedWishedObjectMapContainer> _objectWishListMap; // 0x300
	TSet<UObject*> _discoveredObjects; // 0x350
	TSet<UObject*> _intentionValidators; // 0x3a0
};

struct UMaterialExpressionArccosineFast {
	FExpressionInput Input; // 0x48
};

struct UAlignObjectsTool {
	UAlignObjectsToolProperties* AlignProps; // 0xa0
};

struct UGPUCullingInstancedStaticMeshComponent {
	TArray<UMaterialInterface*> MaterialOverrides; // 0x5b0
};

struct UCoreEndGameCollapseProgressWidget {
	UProgressBar* ProgressBar; // 0x2d8
	UCanvasPanel* MarkerLeftCanvas; // 0x2e0
	UCanvasPanel* MarkerRightCanvas; // 0x2e8
	UHorizontalBoxSlot* _markerLeftBox; // 0x2f0
	UHorizontalBoxSlot* _markerRightBox; // 0x2f8
};

struct USoundNodeDoppler {
	float DopplerIntensity; // 0x50
	bool bUseSmoothing; // 0x54
	float SmoothingInterpSpeed; // 0x58
};

struct UInstancedStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4e8
	int32_t NumCustomDataFloats; // 0x4f8
	TArray<float> PerInstanceSMCustomData; // 0x500
	int32_t InstancingRandomSeed; // 0x510
	int32_t InstanceStartCullDistance; // 0x514
	int32_t InstanceEndCullDistance; // 0x518
	TArray<int32_t> InstanceReorderTable; // 0x520
	int32_t NumPendingLightmaps; // 0x578
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x580
};

struct UAudioCurveSourceComponent {
	FName CurveSourceBindingName; // 0x800
	float CurveSyncOffset; // 0x80c
};

struct ULoudNoiseHUDIndicator {
	UStaticMesh* MaskMesh; // 0x210
	UStaticMesh* DistortionMesh; // 0x218
	float EdgePadding; // 0x220
	float CornerRoundness; // 0x224
	float ScreenFadeOutDistance; // 0x228
	FMulticastInlineDelegate LoudNoiseAddedEvent; // 0x230
	TArray<FLoudNoiseIndicatorData> _trackedNoises; // 0x270
};

struct UPathFollowingComponent {
	UNavMovementComponent* MovementComp; // 0xf0
	ANavigationData* MyNavData; // 0x100
};

struct APhantomTrap {
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter; // 0x328
	float _lineOfSightTraceMinInterval; // 0x330
};

struct UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderFloatValue GridSize; // 0x88
	FAIDataProviderFloatValue SpaceBetween; // 0xc8
	UEnvQueryContext* GenerateAround; // 0x108
};

struct ADBDPlayerControllerBase {
	ADBDPlayer* _mainCharacter; // 0x628
};

struct UBTService_StimuliMonitor_Camper {
	FBlackboardKeySelector BBTerrorPressure; // 0x190
	FBlackboardKeySelector BBIsFleeing; // 0x1c0
	float LastValidTerrorRadiusStimulusMemoryLifeTime; // 0x1f0
};

struct UMaterialExpressionCollectionParameter {
	UMaterialParameterCollection* Collection; // 0x48
	FName ParameterName; // 0x50
	FGuid ParameterId; // 0x5c
};

struct UTextureRenderTargetCube {
	int32_t SizeX; // 0xc8
	FLinearColor ClearColor; // 0xcc
	EPixelFormat OverrideFormat; // 0xdc
	char bHDR : 1; // 0xdd
	char bForceLinearGamma : 1; // 0xdd
};

struct USoundNodeOscillator {
	char bModulateVolume : 1; // 0x50
	char bModulatePitch : 1; // 0x50
	float AmplitudeMin; // 0x54
	float AmplitudeMax; // 0x58
	float FrequencyMin; // 0x5c
	float FrequencyMax; // 0x60
	float OffsetMin; // 0x64
	float OffsetMax; // 0x68
	float CenterMin; // 0x6c
	float CenterMax; // 0x70
};

struct UPositionLagCompensationComponent {
	float _maxExtrapolationDurationInSeconds; // 0xb8
	float _maxInterpolationToServerMoveInSeconds; // 0xbc
};

struct UQosEvaluator {
	bool bInProgress; // 0x50
	bool bCancelOperation; // 0x51
	TArray<FDatacenterQosInstance> Datacenters; // 0x58
};

struct UPalletPulldownBlockerComponent {
	bool _isPalletPulldownBlockedByEntity; // 0x160
	float _blockedDisappearFxTime; // 0x164
};

struct UUMGAtlantaMatchConfigPageScrollItem {
	UCanvasPanel* ImagePanel; // 0x430
	UCanvasPanel* DefaultPanel; // 0x438
	UImage* DefaultImage; // 0x440
	float _unselectedOpacity; // 0x448
	float _selectedOpacity; // 0x44c
};

struct ANavLinkProxy_DirectMove {
	TArray<FVector> CustomPathPoints; // 0x2f0
	float MoveToPathPointTimeLimit; // 0x300
	TMap<ADBDPlayer*, UNavMovePath*> _playersOnPath; // 0x308
};

struct UStereoLayerShapeEquirect {
	FBox2D LeftUVRect; // 0x30
	FBox2D RightUVRect; // 0x44
	FVector2D LeftScale; // 0x58
	FVector2D RightScale; // 0x60
	FVector2D LeftBias; // 0x68
	FVector2D RightBias; // 0x70
};

struct UCharacterPositionRecorderComponent {
	float _cacheTimespan; // 0xb8
};

struct UMasterAudioSubmixCaptureProtocol {
	FString Filename; // 0x60
};

struct ADecalActor {
	UDecalComponent* Decal; // 0x230
};

struct UMaterialExpressionBentNormalCustomOutput {
	FExpressionInput Input; // 0x48
};

struct ULocationServicesImpl {
	FMulticastInlineDelegate OnLocationChanged; // 0x30
};

struct UDefaultObjectPlacementValidationStrategy {
	FVector _objectPlacementRaycastStart; // 0xb8
	FVector _objectPlacementRaycastEnd; // 0xc4
	FFloatRange _objectHeightRangeAroundBaseLocation; // 0xd0
};

struct UGestureInteractionDefinition {
	EGestureID _gestureID; // 0x5b0
};

struct UBTTask_RunBehavior {
	UBehaviorTree* BehaviorAsset; // 0x78
};

struct UBTTask_WaitBlackboardTime {
	FBlackboardKeySelector BlackboardKey; // 0x80
};

struct UDBDProjectileMovementComponent {
	FMulticastInlineDelegate OnComponentToSweepCollisionBP; // 0x1f8
	TArray<FComponentSweepInfo> _componentsToSweep; // 0x220
	FVector _previousPosition; // 0x230
	USceneComponent* _cachedUpdatedComponent; // 0x240
	FVector _initialLocation; // 0x248
	float _distanceTravelled; // 0x254
	bool _hasMaximumDistance; // 0x258
	float _maximumTravelDistance; // 0x25c
};

struct UPrisonChainAddon {
	FDBDTunableRowHandle _maxTensionCharge; // 0x298
	float _tensionChargeModifier; // 0x2c0
};

struct UScrollBoxWidgetStyle {
	FScrollBoxStyle ScrollBoxStyle; // 0x38
};

struct URemeshMeshToolProperties {
	int32_t TargetTriangleCount; // 0x68
	ERemeshSmoothingType SmoothingType; // 0x6c
	int32_t RemeshIterations; // 0x70
	bool bDiscardAttributes; // 0x74
	bool bShowWireframe; // 0x75
	bool bShowGroupColors; // 0x76
	bool bUseTargetEdgeLength; // 0x77
	float TargetEdgeLength; // 0x78
	bool bReproject; // 0x7c
};

struct UDBDAttack {
	EAttackType _attackType; // 0xd0
	bool _useMontage; // 0xd1
	EDetectionZone _damageZone; // 0xd2
	EDetectionZone _lockZone; // 0xd3
	EDetectionZone _obstructionZone; // 0xd4
	FStatProperty _maxAccelerationMultiplier; // 0xd8
	FDBDAttackTargetTracker _targetTracker; // 0x160
	TMap<EAttackSubstate, UDBDAttackSubstate*> _stateClasses; // 0x218
	TArray<ACharacter*> _localAlreadyHitTargets; // 0x268
	TMap<EAttackSubstate, UDBDAttackSubstate*> _states; // 0x288
	TArray<ADBDPlayer*> _hitTargets; // 0x2f8
	TSet<ADBDPlayer*> _targetsAwaitingServerValidation; // 0x308
	EHitValidatorConfigName _hitValidationConfigName; // 0x35c
};

struct UPlayerGameRelevancyComponent {
	FTagStateBool _isRelevantToGameplay; // 0xb8
};

struct UAkCheckBox {
	ECheckBoxState CheckedState; // 0x4d8
	FDelegate CheckedStateDelegate; // 0x4dc
	FCheckBoxStyle WidgetStyle; // 0x4f0
	EHorizontalAlignment HorizontalAlignment; // 0xad0
	bool IsFocusable; // 0xad1
	FAkBoolPropertyToControl ThePropertyToControl; // 0xad8
	FAkWwiseItemToControl ItemToControl; // 0xae8
	FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb28
	FMulticastInlineDelegate OnItemDropped; // 0xb38
	FMulticastInlineDelegate OnPropertyDropped; // 0xb48
};

struct ATormentAttackTrailPoint {
	FDBDTunableRowHandle _attackPointDelayToEnableCollision; // 0x360
};

struct USphereComponent {
	float SphereRadius; // 0x440
};

struct USocialToolkit {
	USocialUser* LocalUser; // 0x68
	TArray<USocialUser*> AllUsers; // 0x70
	ULocalPlayer* LocalPlayerOwner; // 0xd0
	USocialChatManager* SocialChatManager; // 0xd8
};

struct UAsyncActionLoadPrimaryAssetClassList {
	FMulticastInlineDelegate COMPLETED; // 0x80
};

struct UCheckBoxStyleAsset {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UVectorField {
	FBox Bounds; // 0x30
	float Intensity; // 0x4c
};

struct UNiagaraDataInterfaceParticleRead {
	FString EmitterName; // 0x38
};

struct UUMGAtlantaNavigationScreen {
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget; // 0x300
	UTextBlock* TextButtonStart; // 0x308
	ESlateVisibility PlayModeSelectionVisibility; // 0x310
	ESlateVisibility CharacterInfoVisibility; // 0x311
	ESlateVisibility BackButtonVisibility; // 0x312
	ESlateVisibility MenuButtonsVisibility; // 0x313
	ESlateVisibility ButtonRoleVisibility; // 0x314
	UButton* ButtonRole; // 0x318
	UWidgetSwitcher* BottomRightWidgetSwitcher; // 0x320
	UUMGPartySlotsWidget* PartyPlayerSlots; // 0x328
	UUMGBaseCountdownWidget* PartyCountdownLarge; // 0x330
	TArray<FPartyMemberUIData> _partyMembers; // 0x338
};

struct UMaterialExpressionAbs {
	FExpressionInput Input; // 0x48
};

struct UCDNPatchManager {
	FString InstallDirectory; // 0x30
	int32_t PakOrder; // 0x40
	FString PakMountPoint; // 0x48
	TWeakObjectPtr<UGameInstance> _gameInstance; // 0xa0
	UAtlantaPendingContent* _currentContentToInstall; // 0x198
	TArray<FString> _remainingManifestsToInstall; // 0x1a0
	TMap<FString, UAtlantaPendingContent*> _contentToInstall; // 0x1b0
	UAtlantaPendingContent* _MobilePendingContent; // 0x248
};

struct UTimeSynchronizableMediaSource {
	bool bUseTimeSynchronization; // 0x98
	int32_t FrameDelay; // 0x9c
	double TimeDelay; // 0xa0
};

struct UCrowdFollowingComponent {
	UCharacterMovementComponent* CharacterMovement; // 0x268
	FVector CrowdAgentMoveDirection; // 0x270
};

struct UAnimSharingStateInstance {
	UAnimSequence* AnimationToPlay; // 0x270
	float PermutationTimeOffset; // 0x278
	float playRate; // 0x27c
	bool bStateBool; // 0x280
	UAnimSharingInstance* Instance; // 0x288
};

struct UAISkill_InteractionTeleportEthereal_Demogorgon {
	float MaxRangeFromFirstPortal; // 0x1d8
	ADemogorgonPortal* _firstPortal; // 0x1e0
	ADemogorgonPortal* _secondPortal; // 0x1e8
};

struct UMaterialExpressionTangent {
	FExpressionInput Input; // 0x48
	float Period; // 0x64
};

struct UPathBuilder_EvadeLoop {
	float AddDistanceToRequiredEvadeGap; // 0x50
	float ForceEvadePointUnderDistance; // 0x54
	float ChaserCrossingEvadeTimePenalty; // 0x58
	float SwapPathReachTimeBuffer; // 0x5c
	FString BreakPalletInteractionId; // 0x60
	float OnPathRadius; // 0x70
	float MaxEvadeInteractableWeightDistance; // 0x74
	float WeightAtMaxDistance; // 0x78
	bool MaxWeightAtNearestDistanceIfHostileHasRangedAbility; // 0x7c
	float WeightAtMaxSafety; // 0x80
	float MaxNearAllyPenaltyPathPointDistance; // 0x84
	float WeightWhenNearAlly; // 0x88
	UNavMovePath* _originalEvadeLoopWorkPath; // 0x90
	UNavMovePath* _querierWorkPathA; // 0x98
	UNavMovePath* _querierWorkPathB; // 0xa0
	UNavMovePath* _chaserWorkPath; // 0xa8
	UDBDNavEvadeLoopComponent* _pickedEvadeLoopComponent; // 0xb0
};

struct UUMGPartyCountdownWidget {
	UButton* UnreadyButton; // 0x368
	UCanvasPanel* UnreadyButtonContainer; // 0x370
};

struct US29P03 {
	float _recoverSpeedPercentage[0x3]; // 0x488
};

struct UMaterialExpressionAtmosphericFogColor {
	FExpressionInput WorldPosition; // 0x48
};

struct UDBDEmblem_KillerGatekeeperTest {
	ADBDGameState* _gameState; // 0x138
};

struct UAnimNotify_PlayMontageNotify {
	FName NotifyName; // 0x40
};

struct UAkSettingsPerUser {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x30
	FFilePath WwiseMacInstallationPath; // 0x40
	FString WaapiIPAddress; // 0x50
	uint32_t WaapiPort; // 0x60
	bool AutoSyncSelection; // 0x64
	bool SoundDataGenerationSkipLanguage; // 0x66
};

struct UBlinkerComponent {
	float _rayCastZOffet; // 0xb8
	float _rayCastLength; // 0xbc
	float _minimumIndicatorVelocity; // 0xc0
	float _IndicatorVelocityEasingFactor; // 0xc4
	FVector _lineOfSightBlinkOffset; // 0xc8
	UDBDTimerComponent* _blinkChainTimer; // 0xe0
};

struct URendererOverrideSettings {
	char bSupportAllShaderPermutations : 1; // 0x48
	char bForceRecomputeTangents : 1; // 0x48
};

struct UParticleModuleVectorFieldGlobal {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x38
	float GlobalVectorFieldScale; // 0x3c
	float GlobalVectorFieldTightness; // 0x40
};

struct USoundSourceBus {
	ESourceBusChannels SourceBusChannels; // 0x318
	float SourceBusDuration; // 0x31c
	char bAutoDeactivateWhenSilent : 1; // 0x320
};

struct UMovieSceneSection {
	FMovieSceneSectionEvalOptions EvalOptions; // 0x58
	FMovieSceneEasingSettings Easing; // 0x60
	FMovieSceneFrameRange SectionRange; // 0x98
	FFrameNumber PreRollFrames; // 0xa8
	FFrameNumber PostRollFrames; // 0xac
	int32_t RowIndex; // 0xb0
	int32_t OverlapPriority; // 0xb4
	char bIsActive : 1; // 0xb8
	char bIsLocked : 1; // 0xb8
	float StartTime; // 0xbc
	float EndTime; // 0xc0
	float PrerollTime; // 0xc4
	float PostrollTime; // 0xc8
	char bIsInfinite : 1; // 0xcc
	bool bSupportsInfiniteRange; // 0xd0
	FOptionalMovieSceneBlendType BlendType; // 0xd1
};

struct UCoreInputPromptTextWidget {
	UCoreInputPromptWidget* InputPrompt; // 0x2d8
	UTextBlock* TextField; // 0x2e0
	FKey InputKey; // 0x2e8
	FText Text; // 0x308
};

struct UNiagaraEffectType {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x30
	ENiagaraCullReaction CullReaction; // 0x34
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct ACrowBomb {
	float _innerRadius; // 0x258
	float _outerRadius; // 0x25c
	float _maxTakeoffDelay; // 0x260
	int32_t _numCrows; // 0x264
	int32_t _crowCenterDistance; // 0x268
	int32_t _crowOuterDistance; // 0x26c
	int32_t _eliminationSamples; // 0x270
	float _eliminationStddev; // 0x274
	TSoftClassPtr<UObject> _meshComponentClass; // 0x278
	TArray<UWorldRunawayMeshComponent*> _crows; // 0x2a8
	USceneComponent* _root; // 0x2d0
	USceneComponent* _traceStart; // 0x2d8
	USceneComponent* _traceEnd; // 0x2e0
	bool _landed; // 0x2e8
};

struct UPortalRadiusDetectorComponent {
	TArray<ADemogorgonPortal*> Portals; // 0xb8
	TArray<ADBDPlayer*> _playersInsideRadius; // 0xc8
};

struct UGunslingerAnimInstance {
	bool _isAiming; // 0x5a8
	bool _isAimingWarmup; // 0x5a9
	bool _isAimingCooldown; // 0x5aa
	bool _isAimingReadyToShoot; // 0x5ab
	bool _isFiring; // 0x5ac
	bool _isInMissShotCooldown; // 0x5ad
	bool _isInSuccessShot; // 0x5ae
	bool _isLinked; // 0x5af
	bool _isReeling; // 0x5b0
	bool _isInGunState; // 0x5b1
	float _idleToAimAnimPlayrate; // 0x5b4
	float _aimToIdleAnimPlayrate; // 0x5b8
	float _fireAnimPlayRate; // 0x5bc
	float _missShotCooldownAnimPlayRate; // 0x5c0
	float _successShotAnimPlayRate; // 0x5c4
	UAnimSequence* _idleToAimAnim; // 0x5c8
	UAnimSequence* _aimToIdleAnim; // 0x5d0
	UAnimSequence* _fireAnim; // 0x5d8
	UAnimSequence* _missShotCooldownAnim; // 0x5e0
	UAnimSequence* _successShotAnim; // 0x5e8
	FDBDTunableRowHandle _idleToAimAnimDuration; // 0x5f0
	FDBDTunableRowHandle _aimToIdleAnimDuration; // 0x618
	FDBDTunableRowHandle _fireAnimDuration; // 0x640
	FTunableStat _missShotCooldownAnimDuration; // 0x668
	FDBDTunableRowHandle _successShotAnimDuration; // 0x6e8
};

struct UBlackBox {
	FDBDTunableRowHandle _blockDuration; // 0x298
};

struct UGameplayTask_TimeLimitedExecution {
	FMulticastInlineDelegate OnFinished; // 0x70
	FMulticastInlineDelegate OnTimeExpired; // 0x80
};

struct UUniformScalar {
	float Magnitude; // 0xb8
};

struct UAICharacterRepairGeneratorBehaviourData {
	AGenerator* _generator; // 0x30
	ECharacterMovementTypes _characterMovementType; // 0x38
};

struct UMaterialExpressionRuntimeVirtualTextureOutput {
	FExpressionInput BaseColor; // 0x48
	FExpressionInput Specular; // 0x64
	FExpressionInput Roughness; // 0x80
	FExpressionInput Normal; // 0x9c
	FExpressionInput WorldHeight; // 0xb8
	FExpressionInput Opacity; // 0xd4
	FExpressionInput Mask; // 0xf0
};

struct ULeaderboardQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneCameraAnimSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe8
	UCameraAnim* CameraAnim; // 0x108
	float playRate; // 0x110
	float PlayScale; // 0x114
	float BlendInTime; // 0x118
	float BlendOutTime; // 0x11c
	bool bLooping; // 0x120
};

struct UEnvQueryInstanceBlueprintWrapper {
	int32_t QueryID; // 0x38
	UEnvQueryItemType* ItemType; // 0x60
	int32_t OptionIndex; // 0x68
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x70
};

struct UAsyncTaskDownloadCacheImage {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFail; // 0x48
	FString _url; // 0x58
};

struct UDarkSense {
	float _effectDurationOnGeneratorComplete; // 0x3d0
	float _effectDurationOnFinalGeneratorComplete[0x3]; // 0x3d4
};

struct UEditableText {
	FText Text; // 0x128
	FDelegate TextDelegate; // 0x140
	FText HintText; // 0x158
	FDelegate HintTextDelegate; // 0x170
	FEditableTextStyle WidgetStyle; // 0x188
	USlateWidgetStyleAsset* Style; // 0x3c0
	USlateBrushAsset* BackgroundImageSelected; // 0x3c8
	USlateBrushAsset* BackgroundImageComposing; // 0x3d0
	USlateBrushAsset* CaretImage; // 0x3d8
	FSlateFontInfo Font; // 0x3e0
	FSlateColor ColorAndOpacity; // 0x438
	bool IsReadOnly; // 0x460
	bool IsPassword; // 0x461
	float MinimumDesiredWidth; // 0x464
	bool IsCaretMovedWhenGainFocus; // 0x468
	bool SelectAllTextWhenFocused; // 0x469
	bool RevertTextOnEscape; // 0x46a
	bool ClearKeyboardFocusOnCommit; // 0x46b
	bool SelectAllTextOnCommit; // 0x46c
	bool AllowContextMenu; // 0x46d
	EVirtualKeyboardType KeyboardType; // 0x46e
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x46f
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x470
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x471
	ETextJustify Justification; // 0x472
	FShapedTextOptions ShapedTextOptions; // 0x473
	FMulticastInlineDelegate OnTextChanged; // 0x478
	FMulticastInlineDelegate OnTextCommitted; // 0x488
};

struct UBlightedSerumCollisionInteraction {
	UBlightedSerumCooldownInteraction* _cooldownInteraction; // 0x5b0
	float _bounceTime; // 0x5b8
};

struct UUMGBloodStoreTimer {
	FSlateColor _normalColor; // 0x310
	FSlateColor _warningColor; // 0x338
	UTextBlock* RemainingTimeTextBlock; // 0x360
	UImage* RefreshImage; // 0x368
};

struct UBTDecorator_HasDynamicSubtree {
	FGameplayTag InjectTag; // 0x70
};

struct UBatchDrawing {
	AActor* _actorToSpawnInstancesInto; // 0x30
	TMap<UStaticMesh*, FPerMeshInstancingData> _meshesToInstancingData; // 0x38
	UHISMMaterialHelperSettings* _hismMaterialHelperSettings; // 0x88
	UMaterialPerThemeSettings* _materialPerThemeSettings; // 0x90
};

struct UTricksterChainedThrowsAddon {
	bool _resetOnEnteringFlurryInteraction; // 0x29c
	float _lacerationPenaltyRangeThreshold; // 0x2a0
	float _closeRangeLacerationPenalty; // 0x2a4
	float _maximumMultiplier; // 0x2a8
};

struct UUMGSuggestionsListTabWidget {
	UUMGExpandableListWidget* PlayedWithFriendsExpandableList; // 0x300
	UUMGExpandableListWidget* SocialFriendsExpandableList; // 0x308
};

struct UTutorialNotificationController {
	FMulticastInlineDelegate OnBlockingNotificationDismissedEvent; // 0x30
};

struct UUMGCustomizationPageScrollWidget {
	TSoftClassPtr<UObject> _customizationItemWidgetClass; // 0x448
	TArray<FStoreItemSlotData> _availableItemsData; // 0x478
	TArray<UUMGCustomizationItemWidget*> _itemWidgets; // 0x488
};

struct URichTextBlockImageSharedSizeDecorator {
	int32_t Width; // 0x38
	int32_t Height; // 0x3c
};

struct UMaterialExpressionDesaturation {
	FExpressionInput Input; // 0x48
	FExpressionInput Fraction; // 0x64
	FLinearColor LuminanceFactors; // 0x80
};

struct UK26SpawnCrowProjectileChargeableInteractionDefinition {
	FMulticastInlineDelegate OnChargingStarted; // 0x6d8
	FMulticastInlineDelegate OnChargingStopped; // 0x6e8
	FMulticastInlineDelegate OnProjectileSummoned; // 0x6f8
	FDBDTunableRowHandle _chargeCooldownTime; // 0x708
	FDBDTunableRowHandle _summonCooldownTime; // 0x730
	FDBDTunableRowHandle _pathLength; // 0x758
	FDBDTunableRowHandle _projectileHeight; // 0x780
	FDBDTunableRowHandle _projectileSummonDistance; // 0x7a8
	FDBDTunableRowHandle _cooldownGracePeriodPercentage; // 0x7d0
	FDBDTunableRowHandle _globalSpawnCooldownTime; // 0x7f8
	FDBDTunableRowHandle _pathDistanceCheckAttempts; // 0x820
	AK26AimingGuide* _aimingGuideClass; // 0x848
	AK26AimingGuide* _local_aimingGuide; // 0x850
	bool _isConfirmButtonPressed; // 0x858
	UK26AmmoHandlerComponent* _ammoHandler; // 0x860
	UK26PathHandlerComponent* _pathHandler; // 0x868
	UK26PowerStatusHandlerComponent* _statusHandler; // 0x870
	bool _firedFullyChargedEvent; // 0x878
	bool _isWaitingForSummonAcknowledgement; // 0x879
	UCurveFloat* _globalCooldownMovementSpeedCurve; // 0x880
};

struct UDBDEasyAntiCheat {
	UDBDGameInstance* _gameInstance; // 0x48
	bool _connectedToServer; // 0x50
};

struct UAkLuminInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct AStreamVideoPlayer {
	UMediaPlayer* MediaPlayer; // 0x250
	UMediaSoundComponent* SoundComponent; // 0x258
	UUMGStreamVideoWidget* StreamVideoWidget; // 0x260
	UStreamMediaSource* StreamMediaSource; // 0x268
	UAudioComponent* _audioComponent; // 0x270
};

struct UUMGAtlStorePriceWidget {
	UTextBlock* PriceText; // 0x300
};

struct ARifleChain {
	FMulticastInlineDelegate OnProjectileSet; // 0x230
	FMulticastInlineDelegate OnIsCollidingChanged; // 0x240
	UAkComponent* _chainCenterAkComponent; // 0x250
	UAkAudioEvent* _collisionLoopStartEvent; // 0x258
	UAkAudioEvent* _collisionLoopEndEvent; // 0x260
	TArray<FAkSoundLoop> _collisionSoundLoops; // 0x268
	float _sphereTraceRadius; // 0x278
	float _timeBetweenTrace; // 0x27c
	TScriptInterface<IGunslingerHarpoon> _harpoon; // 0x280
};

struct UBTDecorator_KeepInCone {
	float ConeHalfAngle; // 0x70
	FBlackboardKeySelector ConeOrigin; // 0x78
	FBlackboardKeySelector Observed; // 0xa8
	char bUseSelfAsOrigin : 1; // 0xd8
	char bUseSelfAsObserved : 1; // 0xd8
};

struct UIridescentCoinAddon {
	UStatusEffect* _exposedStatusEffect; // 0x298
};

struct UInterpTrackInstVectorMaterialParam {
	TArray<UMaterialInstanceDynamic*> materialInstances; // 0x30
	TArray<FVector> ResetVectors; // 0x40
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x50
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x60
};

struct UPlatformEventsComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb8
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc8
};

struct UEditorMeshVisualization {
	TSoftObjectPtr<USkeletalMesh> MeshVisualization; // 0x210
	FTransform RelativeTransform; // 0x240
};

struct UParticleModuleRotationRateMultiplyLife {
	FRawDistributionFloat LifeMultiplier; // 0x38
};

struct UAnimSharingTransitionInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x270
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x278
	float BlendTime; // 0x280
	bool bBlendBool; // 0x284
};

struct UHudPresenter {
	ADBDPlayer* _presentedCharacter; // 0xe0
	ADBDPlayer* _pendingCharacter; // 0xe8
	ADBDSpectator* _spectatorPawn; // 0xf0
};

struct UCoreBaseLoadoutPartWidget {
	UDBDImage* ImageRarity; // 0x260
	UDBDImage* ImageIcon; // 0x268
	UTextBlock* TextStackCount; // 0x270
};

struct APaperCharacter {
	UPaperFlipbookComponent* Sprite; // 0x4d0
};

struct UAuthoritativeMovementComponent {
	TArray<ACharacter*> _charactersToPush; // 0xc8
	TArray<ACharacter*> _stopIgnoreCharacterOnEndOverlap; // 0xd8
	UCapsuleComponent* _pawnDetector; // 0xf0
	TArray<ACharacter*> _authoritativeIgnoreOverlapCharacters; // 0xf8
	TArray<ACharacter*> _previousAuthoritativeIgnoreOverlapCharacters; // 0x108
};

struct UUMGTallyEmblemMarker {
	UImage* QualityImage; // 0x300
	TMap<EEmblemQuality, FEmblemQualityImages> _qualityImages; // 0x308
};

struct UCoreCursor {
	UScaleBox* CursorScaleBox; // 0x260
};

struct USourceEffectFilterPreset {
	FSourceEffectFilterSettings Settings; // 0x7c
};

struct UDBDAIGoalComponent {
	TMap<UObject*, FAIGoal> _activeGoals; // 0xc0
	TMap<UObject*, FAIGoalWeightContainer> _foundWeightedGoals; // 0x110
};

struct UARTrackableNotifyComponent {
	FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb8
	FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc8
	FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd8
	FMulticastInlineDelegate OnAddTrackedPlane; // 0xe8
	FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf8
	FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x108
	FMulticastInlineDelegate OnAddTrackedPoint; // 0x118
	FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x128
	FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x138
	FMulticastInlineDelegate OnAddTrackedImage; // 0x148
	FMulticastInlineDelegate OnUpdateTrackedImage; // 0x158
	FMulticastInlineDelegate OnRemoveTrackedImage; // 0x168
	FMulticastInlineDelegate OnAddTrackedFace; // 0x178
	FMulticastInlineDelegate OnUpdateTrackedFace; // 0x188
	FMulticastInlineDelegate OnRemoveTrackedFace; // 0x198
	FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a8
	FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b8
	FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c8
	FMulticastInlineDelegate OnAddTrackedObject; // 0x1d8
	FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e8
	FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f8
};

struct AFootSteps {
	float _raycastHalfAngle; // 0x234
	float _raycastZOffset; // 0x238
	float _raycastDistance; // 0x23c
	UMaterial* _material; // 0x240
	float _minimumDecalSize; // 0x248
	float _maximumDecalSize; // 0x24c
	float _projectionTickness; // 0x250
	float _visibilityMultiplierInterpSpeed; // 0x254
	UCurveFloat* _fadeCurve; // 0x258
	UCurveFloat* _veinsCurve; // 0x260
	FBHVRPerDetailModeInt _decalPoolSize; // 0x268
	FBHVRPerDetailModeFloat _recycleThresholdPercentage; // 0x308
	FBHVRPerDetailModeFloat _recycleDistancePercentage; // 0x3a8
	FBHVRPerDetailModeInt _maxOverlapping; // 0x448
	TMap<UDBDDecalComponent*, FFootStep> _footSteps; // 0x4e8
	UDecalSpawner* _decalSpawner; // 0x538
};

struct UDBDTextDesignTunables {
	FString creditsHtml; // 0x30
	FText LegalTextTitle; // 0x40
	FText LegalText; // 0x58
	FText ConsentTextTitle; // 0x70
	FText ConsentText; // 0x88
	FText LegalTextSIEA; // 0xa0
	FText LegalTextSIEE; // 0xb8
	FText SystemMessage_ChatDisconnected; // 0xd0
	FText SystemMessage_ChatReturnedToLobby; // 0xe8
	FText SystemMessage_ChatMatchServerClosed; // 0x100
};

struct UUMGLobbyJoinedWidget {
	bool LocalPlayerIsSlasher; // 0x300
	FText TextLeaveLobby; // 0x308
	FText TextPlayerNotReadyYet; // 0x320
	FText TextWaitingPlayers; // 0x338
	FText TextToBeReady; // 0x350
	UHorizontalBox* CommandButtonsContainer; // 0x368
};

struct USceneComponentPointProvider {
	FComponentReference _sceneReference; // 0x30
	USceneComponent* _sceneComponent; // 0x60
};

struct UObjectReferencer {
	TArray<UObject*> ReferencedObjects; // 0x30
};

struct UPerkSelectionSlotWidget {
	UTextBlock* PerkName; // 0x300
	UTextBlock* TextChoose; // 0x308
	UPerkActionButton* PerkActionButton; // 0x310
	UImage* SelectedIcon; // 0x318
	UUMGHtmlRichText* DescriptionText; // 0x320
	UImage* PictureBackground; // 0x328
	UImage* PicturePerkBackground; // 0x330
	UImage* PictureHighlightFrame; // 0x338
	UImage* PictureTopRightBackground; // 0x340
	UImage* PictureTopRightFrame; // 0x348
	float HighOpacity; // 0x350
	float LowOpacity; // 0x354
	float PerkBackgroundLowOpacity; // 0x358
	float DescriptionBackgroundLowOpacity; // 0x35c
};

struct UAkMacInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct UPreviewMesh {
	bool bBuildSpatialDataStructure; // 0x48
	bool bDrawOnTop; // 0x49
	USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x58
};

struct UNotModifierCondition {
	UEventDrivenModifierCondition* _condition; // 0xf0
};

struct UDragonsGrip {
	AGenerator* _kickedGenerator; // 0x3d0
	float _activationDuration[0x3]; // 0x3d8
	float _cooldownDuration[0x3]; // 0x3e4
	float _exposedEffectDuration[0x3]; // 0x3f0
	bool _onlyExposeFirstSurvivor; // 0x3fc
	FDBDTunableRowHandle _loudNoiseRange; // 0x408
};

struct UK26CrowProjectileAnimInstance {
	bool _isInInvalidState; // 0x270
	bool _isInSummonState; // 0x271
	bool _isInIdleState; // 0x272
	bool _isInFollowPathState; // 0x273
	bool _isInOffPathState; // 0x274
	bool _isInDestroyedState; // 0x275
	bool _isBeingFlashlighted; // 0x276
	float _flashlightProgress; // 0x278
	AK26CrowProjectile* _owningCrowProjectile; // 0x2a0
};

struct UTriggerableActivatorComponent {
	TSoftClassPtr<UObject> _triggerableClass; // 0xb8
	TArray<UTriggerableWorldObjectComponent*> _triggerables; // 0xe8
};

struct UMeshStatisticsProperties {
	FString Mesh; // 0x58
	FString UV; // 0x68
	FString Attributes; // 0x78
};

struct UParticleModuleRequired {
	UMaterialInterface* Material; // 0x38
	float MinFacingCameraBlendDistance; // 0x40
	float MaxFacingCameraBlendDistance; // 0x44
	FVector EmitterOrigin; // 0x48
	FRotator EmitterRotation; // 0x54
	EParticleScreenAlignment ScreenAlignment; // 0x60
	char bUseLocalSpace : 1; // 0x61
	char bKillOnDeactivate : 1; // 0x61
	char bKillOnCompleted : 1; // 0x61
	EParticleSortMode SortMode; // 0x62
	char bUseLegacyEmitterTime : 1; // 0x63
	char bRemoveHMDRoll : 1; // 0x63
	char bEmitterDurationUseRange : 1; // 0x63
	float EmitterDuration; // 0x64
	FRawDistributionFloat SpawnRate; // 0x68
	TArray<FParticleBurst> BurstList; // 0x98
	float EmitterDelay; // 0xa8
	float EmitterDelayLow; // 0xac
	char bDelayFirstLoopOnly : 1; // 0xb0
	EParticleSubUVInterpMethod InterpolationMethod; // 0xb1
	char bScaleUV : 1; // 0xb2
	char bEmitterDelayUseRange : 1; // 0xb2
	EParticleBurstMethod ParticleBurstMethod; // 0xb3
	char bOverrideSystemMacroUV : 1; // 0xb4
	char bUseMaxDrawCount : 1; // 0xb4
	EOpacitySourceMode OpacitySourceMode; // 0xb5
	EEmitterNormalsMode EmitterNormalsMode; // 0xb6
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0xb7
	int32_t SubImages_Horizontal; // 0xb8
	int32_t SubImages_Vertical; // 0xbc
	float RandomImageTime; // 0xc0
	int32_t RandomImageChanges; // 0xc4
	FVector MacroUVPosition; // 0xc8
	float MacroUVRadius; // 0xd4
	EParticleUVFlipMode UVFlippingMode; // 0xd8
	ESubUVBoundingVertexCount BoundingMode; // 0xd9
	char bDurationRecalcEachLoop : 1; // 0xda
	FVector NormalsSphereCenter; // 0xdc
	float AlphaThreshold; // 0xe8
	int32_t EmitterLoops; // 0xec
	UTexture2D* CutoutTexture; // 0xf0
	int32_t MaxDrawCount; // 0xf8
	float EmitterDurationLow; // 0xfc
	FVector NormalsCylinderDirection; // 0x100
	TArray<FName> NamedMaterialOverrides; // 0x110
};

struct UTwinJumpTargetVisibleEffect {
	AActor* _twinJumpTargetObject; // 0x350
	AActor* _twinJumpTarget; // 0x358
	USelectiveVisibilityComponent* _jumpTargetVisibility; // 0x360
};

struct UTireType {
	float FrictionScale; // 0x38
};

struct UUMGMonthlyPassRewardsPopup {
	UTextBlock* SubscriptionLabel; // 0x3e8
	UTextBlock* TitleLabel; // 0x3f0
	UImage* SubscriptionIcon; // 0x3f8
	UTextBlock* RenewalDateLabel; // 0x400
	UHorizontalBox* RewardsContainer; // 0x408
	TSoftClassPtr<UObject> RewardWidgetClass; // 0x410
	FMargin _rewardsPadding; // 0x440
};

struct USnowmanAnimInstance {
	bool _isIdle; // 0x270
	bool _isBeingEntered; // 0x271
	bool _isControlled; // 0x272
	bool _isDestroyed; // 0x273
	bool _isBeingDestroyedDueToSurvivorRunExit; // 0x274
	bool _isBeingDestroyedDueToKillerAttackWhileControlled; // 0x275
	bool _isBeingDestroyedDueToKillerAttackWhileEmpty; // 0x276
	bool _isSurvivorUsingSnowmanMoving; // 0x277
	TWeakObjectPtr<ASnowman> _snowman; // 0x27c
	TWeakObjectPtr<ACamperPlayer> _survivorUsingSnowman; // 0x284
};

struct UMovieSceneBindingOverrides {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x30
};

struct UAkSettings {
	char MaxSimultaneousReverbVolumes; // 0x30
	FFilePath WwiseProjectPath; // 0x38
	FDirectoryPath WwiseSoundDataFolder; // 0x48
	bool bAutoConnectToWAAPI; // 0x58
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x59
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x60
	bool SplitSwitchContainerMedia; // 0xb0
	bool UseEventBasedPackaging; // 0xb1
	bool EnableAutomaticAssetSynchronization; // 0xb2
	FString CommandletCommitMessage; // 0xb8
	TMap<FString, FString> UnrealCultureToWwiseCulture; // 0xc8
	bool AskedToUseNewAssetManagement; // 0x118
	bool bEnableMultiCoreRendering; // 0x119
	bool MigratedEnableMultiCoreRendering; // 0x11a
	bool FixupRedirectorsDuringMigration; // 0x11b
	FDirectoryPath WwiseWindowsInstallationPath; // 0x120
	FFilePath WwiseMacInstallationPath; // 0x130
};

struct ULandscapeSettings {
	int32_t MaxNumberOfLayers; // 0x48
};

struct USkeleton {
	TArray<FBoneNode> BoneTree; // 0x40
	TArray<FTransform> RefLocalPoses; // 0x50
	FGuid VirtualBoneGuid; // 0x178
	TArray<FVirtualBone> VirtualBones; // 0x188
	TArray<USkeletalMeshSocket*> Sockets; // 0x198
	FSmartNameContainer SmartNames; // 0x1f8
	TArray<UBlendProfile*> BlendProfiles; // 0x278
	TArray<FAnimSlotGroup> SlotGroups; // 0x288
	TArray<UAssetUserData*> AssetUserData; // 0x360
};

struct UAnimNotify_PlayParticleEffect {
	UParticleSystem* PSTemplate; // 0x40
	FVector LocationOffset; // 0x48
	FRotator RotationOffset; // 0x54
	FVector Scale; // 0x60
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct APaperTerrainActor {
	USceneComponent* DummyRoot; // 0x230
	UPaperTerrainSplineComponent* SplineComponent; // 0x238
	UPaperTerrainComponent* RenderComponent; // 0x240
};

struct UEditableGameplayTagQueryExpression_AllExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x30
};

struct UParticleLODLevel {
	int32_t Level; // 0x30
	char bEnabled : 1; // 0x34
	UParticleModuleRequired* RequiredModule; // 0x38
	TArray<UParticleModule*> Modules; // 0x40
	UParticleModuleTypeDataBase* TypeDataModule; // 0x50
	UParticleModuleSpawn* SpawnModule; // 0x58
	UParticleModuleEventGenerator* EventGenerator; // 0x60
	TArray<UParticleModuleSpawnBase*> SpawningModules; // 0x68
	TArray<UParticleModule*> SpawnModules; // 0x78
	TArray<UParticleModule*> UpdateModules; // 0x88
	TArray<UParticleModuleOrbit*> OrbitModules; // 0x98
	TArray<UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa8
	char ConvertedModules : 1; // 0xb8
	int32_t PeakActiveParticles; // 0xbc
};

struct UDBDSpringArmComponent {
	char bEnableComponentwiseCameraLag : 1; // 0x2a0
	FVector ComponenwiseCameraLagSpeed; // 0x2a4
	float TargetArmMinLength; // 0x2b0
	char bEnableDistanceCameraLag : 1; // 0x2b4
	float CameraDistanceLagSpeed; // 0x2b8
	char bDrawDebugTraceMarkers : 1; // 0x2c0
	TArray<TWeakObjectPtr<AActor>> ignoreActors; // 0x2c8
};

struct UDatasmithCineCameraActorTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x38
};

struct UAtlantaRitualsScreen {
	UUMGAtlantaRitualsScreen* _umgScreen; // 0x120
};

struct UCameraHandlerComponent {
	FMulticastInlineDelegate OnSocketChanged; // 0xb8
	TMap<EDBDCameraSocketID, AActor*> _cameraMap; // 0xd0
	EDBDCameraSocketID _delayedSocketID; // 0x120
	EDBDCameraSocketID _currentSocketID; // 0x121
	bool _manualZoomAllowPerkModifiers; // 0x169
	UCurveFloat* _manualZoomCurveFloat; // 0x170
	FName _cameraAttachmentSocket; // 0x178
	USceneComponent* _cameraAttachmentComponent; // 0x188
	bool _isFOVSystemActive; // 0x198
};

struct UAISkill_FindCollectable {
	int32_t CollectUnderItemCount; // 0x118
	float CollectOverItemChargeRatio; // 0x11c
};

struct UZombieBlindableComponent {
	UGameplayTagContainerComponent* _ownerObjectState; // 0x240
};

struct UGeometryCollectionDebugDrawComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb8
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xc0
};

struct UAISkill_InteractionTarget_TormentMode {
	float ChasedTargetToEvadePointMaxDistance; // 0x220
	float StartTormentInPatrolAboveChargeRatio; // 0x224
	float StartTormentInChaseAboveChargeRatio; // 0x228
};

struct UNiagaraPreviewAxis_InterpParamInt32 {
	int32_t Min; // 0x40
	int32_t Max; // 0x44
};

struct UNavigationPath {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x30
	TArray<FVector> PathPoints; // 0x40
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x50
};

struct UUMGSubscriptionPackButtonWidget {
	USubscriptionRewardDataAsset* WidgetPerRewardType; // 0x430
	UCanvasPanel* ButtonPressedVFX; // 0x438
	UCanvasPanel* PricePanel; // 0x440
	UImage* TitleIcon; // 0x448
	UTextBlock* Title; // 0x450
	UTextBlock* Price; // 0x458
	UCanvasPanel* RenewalDatePanel; // 0x460
	UTextBlock* RenewalDateText; // 0x468
	UUniformGridPanel* PurchaseRewardsGrid; // 0x470
	UUniformGridPanel* DailyRewardsGrid; // 0x478
	UImage* PortraitBorder; // 0x480
	UButton* InfoButton; // 0x488
	UImage* ActiveBackgroundImage; // 0x490
	UImage* NonActiveBackgroundImage; // 0x498
	FLinearColor ActiveTextColor; // 0x4a0
	FLinearColor NonActiveTextColor; // 0x4b0
	FLinearColor TextColor; // 0x4c0
	FLinearColor ActiveSmokeBackgroundTint; // 0x4d0
	FLinearColor NonActiveSmokeBackgroundTint; // 0x4e0
	UImage* PurchaseRewardsSmokeBackground; // 0x4f0
	UImage* DailyRewardsSmokeBackground; // 0x4f8
	FLinearColor ActiveTitleBackgroundTint; // 0x500
	FLinearColor NonActiveTitleBackgroundTint; // 0x510
	UImage* TitleBackground; // 0x520
	UCanvasPanel* ActiveFrame; // 0x528
	UCanvasPanel* NonActiveFrame; // 0x530
};

struct UMaterialExpressionFeatureLevelSwitch {
	FExpressionInput Default; // 0x48
	FExpressionInput Inputs[0x4]; // 0x64
};

struct UAnySurvivorHasObjectState {
	FGameplayTag _stateTag; // 0x138
};

struct UWrapBoxSlot {
	FMargin Padding; // 0x40
	bool bFillEmptySpace; // 0x50
	float FillSpanWhenLessThan; // 0x54
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UDestroyDemogorgonPortalInteraction {
	ADemogorgonPortal* _owningPortal; // 0x6d8
};

struct UTormentModeCooldownInteraction {
	FDBDTunableRowHandle _tormentModeCooldownTime; // 0x5b0
	FDBDTunableRowHandle _tormentModeCancelWalkSpeed; // 0x5d8
	FDBDTunableRowHandle _normalWalkSpeed; // 0x600
};

struct UMaterialExpressionMapARPassthroughCameraUV {
	FExpressionInput Coordinates; // 0x48
};

struct UKillerInstinctComponent {
	FCustomKillerInstinctData _defaultKillerInstinctAsset; // 0xb8
	UNiagaraComponent* _particleSystemComponent; // 0xe0
	FLinearColor _camperHighlightColorOverride; // 0xec
	TArray<FCustomKillerInstinctData> _customKillerInstinctData; // 0x1a8
	FCustomKillerInstinctData _currentKillerInstinctData; // 0x1b8
};

struct ACineCameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7a0
};

struct UMaterialExpressionSquareRoot {
	FExpressionInput Input; // 0x48
};

struct UInterpTrackVisibility {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x78
	char bFireEventsWhenForwards : 1; // 0x88
	char bFireEventsWhenBackwards : 1; // 0x88
	char bFireEventsWhenJumpingForwards : 1; // 0x88
};

struct UUMGTallyScoreboardPlayerInfoWidget {
	FMulticastInlineDelegate OnTallyScoreboardAddFriendEvent; // 0x358
	FMulticastInlineDelegate OnTallyScoreboardReportEvent; // 0x368
	UImage* ImageHorizontalSeparation; // 0x378
	FTallyPlayerResultData PlayerResultData; // 0x380
	bool LoadoutIsBlocked; // 0x5f8
};

struct UNiagaraSettings {
	TArray<FSoftObjectPath> AdditionalParameterTypes; // 0x48
	TArray<FSoftObjectPath> AdditionalPayloadTypes; // 0x58
	TArray<FSoftObjectPath> AdditionalParameterEnums; // 0x68
	FSoftObjectPath DefaultEffectType; // 0x78
	TArray<FText> QualityLevels; // 0x98
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xa8
};

struct UUMGBloodStoreSubMenu {
	UUMGBloodStoreTimer* SurvivorTimer; // 0x320
	UUMGBloodStoreTimer* KillerTimer; // 0x328
};

struct ULandscapeInfo {
	LazyObjectProperty LandscapeActor; // 0x30
	FGuid LandscapeGuid; // 0x4c
	int32_t ComponentSizeQuads; // 0x5c
	int32_t SubsectionSizeQuads; // 0x60
	int32_t ComponentNumSubsections; // 0x64
	FVector DrawScale; // 0x68
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x118
};

struct UMaterialExpressionSobol {
	FExpressionInput Cell; // 0x48
	FExpressionInput Index; // 0x64
	FExpressionInput Seed; // 0x80
	uint32_t ConstIndex; // 0x9c
	FVector2D ConstSeed; // 0xa0
};

struct USoundNodeAttenuation {
	USoundAttenuation* AttenuationSettings; // 0x50
	FSoundAttenuationSettings AttenuationOverrides; // 0x58
	char bOverrideAttenuation : 1; // 0x3f8
};

struct UProceduralShapeToolProperties {
	bool bInstanceIfPossible; // 0x58
	EMakeMeshShapeType Shape; // 0x5c
	float Width; // 0x60
	float Height; // 0x64
	float FeatureRadius; // 0x68
	int32_t Slices; // 0x6c
	int32_t Subdivisions; // 0x70
	EMakeMeshPolygroupMode PolygroupMode; // 0x74
	EMakeMeshPlacementType PlaceMode; // 0x75
	EMakeMeshPivotLocation PivotLocation; // 0x76
	float Rotation; // 0x78
	bool bAlignShapeToPlacementSurface; // 0x7c
};

struct UParticleModuleEventReceiverSpawn {
	FRawDistributionFloat SpawnCount; // 0x48
	char bUseParticleTime : 1; // 0x78
	char bUsePSysLocation : 1; // 0x78
	char bInheritVelocity : 1; // 0x78
	FRawDistributionVector InheritVelocityScale; // 0x80
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc8
	char bBanPhysicalMaterials : 1; // 0xd8
};

struct USprintBurst {
	float _exhaustionDuration[0x3]; // 0x3d0
	float _sprintDuration; // 0x3dc
	UActivatableExhaustedEffect* _exhaustedEffect; // 0x3e0
};

struct UInGameAdManager {
	char bShouldPauseWhileAdOpen : 1; // 0x40
	TArray<FDelegate> ClickedBannerDelegates; // 0x48
	TArray<FDelegate> ClosedAdDelegates; // 0x58
};

struct UActivePhaseWalkInteraction {
	FTunableStat _fullyChargedSpeed; // 0x6d8
	UCurveFloat* _chargingSpeedCurve; // 0x758
	FDBDTunableRowHandle _phaseWalkPenaltyThreshold; // 0x760
	FDBDTunableRowHandle _phaseWalkPenaltyValue; // 0x788
	FTunableStat _activePhaseWalkChargeDuration; // 0x7b8
	UAnimMontage* _activePhaseWalkChargingMontage; // 0x838
};

struct ADBDPlayerState_Lobby {
	bool IsOwnershipValidated; // 0x770
};

struct UAddon_TheBlight_ConsecutiveDashSpeedBonus {
	float _speedIncreasePerDash; // 0x298
};

struct UMaterialExpressionCeil {
	FExpressionInput Input; // 0x48
};

struct UBlinkComponent {
	FMulticastInlineDelegate OnBlinkStateChangedDelegate; // 0xb8
	bool _isInBlinkingState; // 0xc8
};

struct UUMGLacerationStatusEffectUI {
	UImage* LacerationDecoration; // 0x300
	UImage* LacerationFill; // 0x308
	TArray<int32_t> _maximumLacerationDefinitions; // 0x310
	TArray<UPaperSprite*> _lacerationDecorationImages; // 0x320
	TArray<UTexture2D*> _lacerationFillImages; // 0x330
	FLinearColor _lacerationDefaultColor; // 0x340
	FLinearColor _lacerationFillFullColor; // 0x350
	FName _glassShatterDisintigrateAnimationName; // 0x360
};

struct UInteractionDetectorComponent {
	UPrimitiveComponent* _detectionPrimitive; // 0xb8
	TSet<AInteractable*> _overlappingInteractables; // 0xc0
	TSet<UPrimitiveComponent*> _overlappingPrimitiveComponents; // 0x110
	TSet<AActor*> _ignoredActors; // 0x160
};

struct UGameNetworkManagerSettings {
	int32_t MinDynamicBandwidth; // 0x30
	int32_t MaxDynamicBandwidth; // 0x34
	int32_t TotalNetBandwidth; // 0x38
	int32_t BadPingThreshold; // 0x3c
	char bIsStandbyCheckingEnabled : 1; // 0x40
	float StandbyRxCheatTime; // 0x44
	float StandbyTxCheatTime; // 0x48
	float PercentMissingForRxStandby; // 0x4c
	float PercentMissingForTxStandby; // 0x50
	float PercentForBadPing; // 0x54
	float JoinInProgressStandbyWaitTime; // 0x58
};

struct UOwningPlayerInBoonBlessingRange {
	ATotem* _boundTotem; // 0x100
};

struct USolidarity {
	bool _allowMedkit; // 0x3d0
	UChargeableComponent* _healerHPSlot; // 0x3d8
	UChargeableComponent* _targetHPSlot; // 0x3e0
	UChargeableInteractionDefinition* _healOtherInteraction; // 0x3e8
};

struct UBTTask_GameplayTaskBase {
	char bWaitForGameplayTask : 1; // 0x78
};

struct UDBDGameUserSettings {
	TArray<FInputActionKeyMapping> ActionMappings; // 0x128
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x138
	FMulticastInlineDelegate OnSetCustomizedHudsTimestamp; // 0x148
	FString DeviceLoginTokenID; // 0x158
	int32_t ScalabilityLevel; // 0x168
	bool AutoScalabilitySet; // 0x16c
	bool AutoAdjust; // 0x16d
	int32_t ScreenResolution; // 0x170
	bool FullScreen; // 0x174
	int32_t MenuScaleFactor; // 0x178
	int32_t HudScaleFactor; // 0x17c
	int32_t SkillCheckScaleFactor; // 0x180
	bool LargeText; // 0x184
	bool HUDPlayerNamesVisibility; // 0x185
	bool HUDKillerHookCountVisibility; // 0x186
	bool HUDScoreEventsVisibility; // 0x187
	uint32_t FPSLimit; // 0x188
	int32_t MainVolume; // 0x18c
	bool MainVolumeOn; // 0x190
	int32_t MenuMusicVolume; // 0x194
	bool MenuMusicVolumeOn; // 0x198
	bool UseHeadphones; // 0x199
	bool MuteOnFocusLost; // 0x19a
	int32_t KillerCameraSensitivity; // 0x19c
	int32_t SurvivorCameraSensitivity; // 0x1a0
	int32_t KillerMouseSensitivity; // 0x1a4
	int32_t SurvivorMouseSensitivity; // 0x1a8
	int32_t KillerControllerSensitivity; // 0x1ac
	int32_t SurvivorControllerSensitivity; // 0x1b0
	bool AimAssist; // 0x1b4
	int32_t ControlType; // 0x1b8
	bool InvertY; // 0x1bc
	bool SurvivorInvertY; // 0x1bd
	FString Language; // 0x1c0
	bool LanguageIsDefinedByPlayer; // 0x1d0
	int32_t HighestWeightSeenNews; // 0x1d4
	FSharedAuthenticationTokenInformation SharedLoginInformation; // 0x1d8
	uint32_t LastPanelContextId; // 0x208
	bool ArchivesAutoPlayVoiceOver; // 0x20c
	bool HasAcceptedCrossplayPopup; // 0x20d
	bool HasAcceptedCrossProgressionPopup; // 0x20e
	bool UseAtlantaCustomizedHuds; // 0x20f
	bool UseAtlantaSurvivorQuickTurn; // 0x210
	bool UseAtlantaKillerQuickTurn; // 0x211
	TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds; // 0x218
	bool ShowPortraitBorder; // 0x230
	FString PartyPrivacyState; // 0x238
	int32_t ColorBlindMode; // 0x290
	int32_t ColorBlindModeIntensity; // 0x294
	bool BeginnerMode; // 0x298
	bool Subtitles; // 0x299
	int32_t SubtitlesBackgroundOpacity; // 0x29c
	int32_t SubtitlesSize; // 0x2e8
};

struct UTextLayoutWidget {
	FShapedTextOptions ShapedTextOptions; // 0x128
	ETextJustify Justification; // 0x12b
	ETextWrappingPolicy WrappingPolicy; // 0x12c
	char AutoWrapText : 1; // 0x12d
	float WrapTextAt; // 0x130
	FMargin Margin; // 0x134
	float LineHeightPercentage; // 0x144
};

struct UGridPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x260
};

struct UParticleModuleColor {
	FRawDistributionVector StartColor; // 0x38
	FRawDistributionFloat StartAlpha; // 0x80
	char bClampAlpha : 1; // 0xb0
};

struct UMaterialExpressionParticleSubUV {
	char bBlend : 1; // 0x108
};

struct UAISkill_InteractionTarget_ThrowAntidote {
	float _minPathLengthForThrow; // 0x298
	float _minThrowDistance; // 0x29c
	float _cooldownTime; // 0x2a0
};

struct ULiveLinkCurveRemapSettings {
	FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xa0
};

struct UBaseIndicatorWidget {
	UCanvasPanel* _safeZonePanel; // 0x300
	UCanvasPanelSlot* _canvasPanelSlot; // 0x308
	float RadiusMultiplier; // 0x310
	UCanvasPanel* IndicatorPanel; // 0x318
	UCanvasPanel* Indicator; // 0x320
	UImage* ArrowImage; // 0x328
};

struct UNiagaraDataInterfaceStaticMesh {
	UStaticMesh* DefaultMesh; // 0x38
	AActor* source; // 0x40
	UStaticMeshComponent* SourceComponent; // 0x48
	FNDIStaticMeshSectionFilter SectionFilter; // 0x50
};

struct UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x38
	TArray<FName> ComponentTags; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x78
	int32_t UCSSerializationIndex; // 0x8c
	char bNetAddressable : 1; // 0x90
	char bReplicates : 1; // 0x90
	char bAutoActivate : 1; // 0x91
	char bIsActive : 1; // 0x92
	char bEditableWhenInherited : 1; // 0x92
	char bCanEverAffectNavigation : 1; // 0x92
	char bIsEditorOnly : 1; // 0x92
	EComponentCreationMethod CreationMethod; // 0x94
	FMulticastSparseDelegate OnComponentActivated; // 0x95
	FMulticastSparseDelegate OnComponentDeactivated; // 0x96
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0x98
};

struct UBoneSocketLocalVelocityEvaluator {
	USkeletalMeshComponent* _meshComponent; // 0xb8
	TArray<FName> _trackedBoneSocketNames; // 0xc0
};

struct UAkMediaAssetData {
	bool IsStreamed; // 0x30
	bool UseDeviceMemory; // 0x31
};

struct UCorrectiveAction {
	float _startingTokens[0x3]; // 0x3d0
	FName _statusEffectName; // 0x3dc
	FGameplayTagContainer _allowedInteractionSemanticsForToken; // 0x3e8
};

struct UUniformGridPanel {
	FMargin SlotPadding; // 0x140
	float MinDesiredSlotWidth; // 0x150
	float MinDesiredSlotHeight; // 0x154
};

struct ULuminARSessionConfig {
	FMagicLeapPlanesQuery PlanesQuery; // 0xb0
	int32_t MaxPlaneQueryResults; // 0x110
	int32_t MinPlaneArea; // 0x114
	bool bArbitraryOrientationPlaneDetection; // 0x118
	FVector PlaneSearchExtents; // 0x11c
	TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x128
	bool bDiscardZeroExtentPlanes; // 0x138
	bool bDefaultUseUnreliablePose; // 0x139
};

struct UDynamicEntryBoxBase {
	EDynamicBoxType EntryBoxType; // 0x128
	FVector2D EntrySpacing; // 0x12c
	TArray<FVector2D> SpacingPattern; // 0x138
	FSlateChildSize EntrySizeRule; // 0x148
	EHorizontalAlignment EntryHorizontalAlignment; // 0x150
	EVerticalAlignment EntryVerticalAlignment; // 0x151
	int32_t MaxElementSize; // 0x154
	FUserWidgetPool EntryWidgetPool; // 0x168
};

struct UMovieSceneFadeSection {
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UUMGEndGameCollapseProgressWidget {
	UProgressBar* ProgressBar; // 0x300
	UCanvasPanel* MarkerLeftCanvas; // 0x308
	UCanvasPanel* MarkerRightCanvas; // 0x310
	UHorizontalBoxSlot* _markerLeftBox; // 0x318
	UHorizontalBoxSlot* _markerRightBox; // 0x320
};

struct UActorSpawner {
	EGameplayElementType Type; // 0x220
	TSoftClassPtr<UObject> Visualization; // 0x228
	bool ActivatedByDefault; // 0x258
	TArray<FActorSpawnerProperties> ActivatedSceneElement; // 0x260
	TArray<FActorSpawnerProperties> DeactivatedSceneElement; // 0x270
	float Weight; // 0x280
	int32_t SpawnCountMax; // 0x284
	int32_t SpawnPriorityTier; // 0x288
	FMulticastInlineDelegate OnAsyncActorSpawned; // 0x290
	bool WeightInfluenceable; // 0x2a8
	bool WeightInfluencer; // 0x2a9
	float Cost; // 0x2ac
	UObject* _toSpawn; // 0x2b0
	TWeakObjectPtr<AActor> _spawnedActorOnAuthority; // 0x2c0
};

struct UInterpTrackSound {
	TArray<FSoundTrackKey> Sounds; // 0x98
	char bPlayOnReverse : 1; // 0xa8
	char bContinueSoundOnMatineeEnd : 1; // 0xa8
	char bSuppressSubtitles : 1; // 0xa8
	char bTreatAsDialogue : 1; // 0xa8
	char bAttach : 1; // 0xa8
};

struct ACurrencyDisplayable {
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x238
	TMap<ECurrencyType, USkeletalMesh*> _currencyMeshes; // 0x240
};

struct UBookMark {
	FVector Location; // 0x30
	FRotator Rotation; // 0x3c
	TArray<FString> HiddenLevels; // 0x48
};

struct USculptBrushProperties {
	float Depth; // 0x70
	bool bHitBackFaces; // 0x74
};

struct APlayerCameraManager {
	APlayerController* PCOwner; // 0x230
	USceneComponent* TransformComponent; // 0x238
	float DefaultFOV; // 0x24c
	float DefaultOrthoWidth; // 0x254
	float DefaultAspectRatio; // 0x25c
	FCameraCacheEntry CameraCache; // 0x2a0
	FCameraCacheEntry LastFrameCameraCache; // 0x880
	FTViewTarget ViewTarget; // 0xe60
	FTViewTarget PendingViewTarget; // 0x1450
	FCameraCacheEntry CameraCachePrivate; // 0x1a70
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2050
	TArray<UCameraModifier*> ModifierList; // 0x2630
	TArray<UCameraModifier*> DefaultModifiers; // 0x2640
	float FreeCamDistance; // 0x2650
	FVector FreeCamOffset; // 0x2654
	FVector ViewTargetOffset; // 0x2660
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2680
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2690
	UCameraAnimInst* AnimInstPool[0x8]; // 0x2698
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x26d8
	TArray<UCameraAnimInst*> ActiveAnims; // 0x26f8
	TArray<UCameraAnimInst*> FreeAnims; // 0x2708
	ACameraActor* AnimCameraActor; // 0x2718
	char bIsOrthographic : 1; // 0x2720
	char bDefaultConstrainAspectRatio : 1; // 0x2720
	char bClientSimulatingViewTarget : 1; // 0x2720
	char bUseClientSideCameraUpdates : 1; // 0x2720
	char bGameCameraCutThisFrame : 1; // 0x2721
	float ViewPitchMin; // 0x2724
	float ViewPitchMax; // 0x2728
	float ViewYawMin; // 0x272c
	float ViewYawMax; // 0x2730
	float ViewRollMin; // 0x2734
	float ViewRollMax; // 0x2738
	float ServerUpdateCameraTimeout; // 0x2740
};

struct UBTService_SetBBEntry {
	FBlackboardKeySelector BBToSetKey; // 0x80
	FString ToSetValue; // 0xb0
	FAITunableParameter RandomSetChance; // 0xc0
};

struct AKnifeProjectile {
	UPrimitiveComponent* _worldCollider; // 0x338
	UPrimitiveComponent* _camperDetector; // 0x340
	TSet<ADBDPlayer*> _playersAffectedThisThrow; // 0x358
	UPoolableProjectileComponent* _poolableActorComponent; // 0x3a8
	FDBDTunableRowHandle _knifeMaxRange; // 0x3b0
	FDBDTunableRowHandle _addonExplosionRadius; // 0x3d8
	FDBDTunableRowHandle _numberOfAddonBounces; // 0x400
};

struct UDBD_CrossDissolver {
	TArray<UMaterialInterface*> NewMaterials; // 0xb8
	TArray<USkeletalMeshComponent*> BaseSkeletalMesh; // 0xc8
	TArray<USkeletalMeshComponent*> ClonedSkeletalMeshes; // 0xd8
};

struct UTwinBaseKillerInstinctEffect {
	FTunableStat _lullabyRange; // 0x350
	FDBDTunableRowHandle _lingerDuration; // 0x3d0
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

struct UHarpoonedSurvivorSubAnimInstance {
	float _linkedMaxSpeed; // 0x4f0
	float _timeBeforeHarpoonHitReset; // 0x4f4
	FName _hitHarpoonedEnterEvent; // 0x4f8
	FName _chainBreakEnterEvent; // 0x504
	bool _isChainLinked; // 0x510
	bool _isBeingReeled; // 0x511
	bool _hasLinkInput; // 0x512
	float _linkInputX; // 0x514
	float _linkInputY; // 0x518
	bool _chainBreakTrigger; // 0x51c
	bool _triggerHarpoonHit; // 0x51d
	float _harpoonHitTurnAnimNormalizedStartTime; // 0x520
	bool _harpoonHitAnimTurnRight; // 0x524
	bool _isCrawling; // 0x525
};

struct UBTTask_PushPawnAction {
	UPawnAction* action; // 0x78
};

struct UChaserCharacterComponent {
	UDBDPawnSensingComponent* _camperSensor; // 0x138
	TMap<ADBDPlayer*, FChaseUpdateInfo> _chaseUpdateInfo; // 0x140
	TArray<ADBDPlayer*> _chasedPlayers; // 0x190
	TArray<ADBDPlayer*> _authority_survivorsWhoStunnedKillerByPalletDuringChase; // 0x1a0
	FGameplayTagContainer _preventChaseTags; // 0x1e0
};

struct ATile {
	bool RerunConstructionScript; // 0x230
	int32_t MinimumSpacing; // 0x234
	int32_t MaximumSpacing; // 0x238
	bool DiagonalSpacing; // 0x23c
	bool TypeSpacing; // 0x23d
	int32_t MaximumCount; // 0x240
	FVector2D Dimension; // 0x244
	TArray<EscapeStrategyType> AvailableEscapeTypes; // 0x250
	ETileType Type; // 0x260
	EDensity Density; // 0x261
	EPathType Path; // 0x262
	int32_t Number; // 0x264
	bool PlaceHolder; // 0x268
	int32_t SpawnPriorityTier; // 0x26c
	float Weight; // 0x270
	FVector2D Coord; // 0x274
	EQuadrantSpawnType QuadrantSpawnType; // 0x27c
	EBasementType BasementType; // 0x27d
	TArray<UTileSpawnPoint*> SpawnPointsCache; // 0x280
	TArray<UObjectRandomizer*> ObjectRandomizersCache; // 0x290
	TArray<UActorSpawner*> ActorSpawnersCache; // 0x2a0
	TArray<UActorVariationSpawner*> ActorVariationSpawnersCache; // 0x2b0
	FRandomStream SharedTileRandomizer; // 0x33c
	bool _initialized; // 0x344
};

struct UExpandableArea {
	FExpandableAreaStyle Style; // 0x130
	FSlateBrush BorderBrush; // 0x260
	FSlateColor BorderColor; // 0x2f0
	bool bIsExpanded; // 0x318
	float MaxHeight; // 0x31c
	FMargin HeaderPadding; // 0x320
	FMargin AreaPadding; // 0x330
	FMulticastInlineDelegate OnExpansionChanged; // 0x340
	UWidget* HeaderContent; // 0x350
	UWidget* BodyContent; // 0x358
};

struct UTexture2DDynamic {
	EPixelFormat Format; // 0xc8
};

struct URemeshMeshTool {
	URemeshMeshToolProperties* BasicProperties; // 0x98
	UMeshStatisticsProperties* MeshStatisticsProperties; // 0xa0
	UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8
};

struct UUMGLoadoutWidget {
	FText InventoryItemTypeText; // 0x358
	FText InventoryFilterText; // 0x370
	UUMGLoadoutPageScrollWidget* PageScrollWidget; // 0x388
	FText LoadoutTitleText; // 0x390
	FText InventoryPanelTitleText; // 0x3a8
};

struct UEnvQueryGenerator {
	FString OptionName; // 0x38
	UEnvQueryItemType* ItemType; // 0x48
	char bAutoSortTests : 1; // 0x50
};

struct AZombieAIController {
	UBehaviorTree* _zombieBehaviorTree; // 0x358
	UAIPerceptionComponent* _aiPerceptionComponent; // 0x360
	TArray<ACamperPlayer*> _survivorInVision; // 0x370
	ACamperPlayer* _chaseTargetSurvivor; // 0x380
	FVector _goToLocation; // 0x388
	TArray<ACamperPlayer*> _survivorsInAttackDetector; // 0x3a0
	FDBDTunableRowHandle _zombieAttackHitTime; // 0x3b0
	FDBDTunableRowHandle _zombieAttackOpenTime; // 0x3d8
	FDBDTunableRowHandle _zombieAnimSpawnTime; // 0x400
	FDBDTunableRowHandle _zombieAnimDyingTime; // 0x428
	FTunableStat _zombieSightRadius; // 0x450
	FTunableStat _zombieLoseSightRadius; // 0x4d0
	FTunableStat _zombieVisionHalfAngle; // 0x550
	FDBDTunableRowHandle _zombieFallSmashTime; // 0x5d0
	FDBDTunableRowHandle _zombieAttackCooldownTime; // 0x5f8
};

struct APawn {
	char bUseControllerRotationPitch : 1; // 0x238
	char bUseControllerRotationYaw : 1; // 0x238
	char bUseControllerRotationRoll : 1; // 0x238
	char bCanAffectNavigationGeneration : 1; // 0x238
	float BaseEyeHeight; // 0x23c
	EAutoReceiveInput AutoPossessPlayer; // 0x240
	EAutoPossessAI AutoPossessAI; // 0x241
	char RemoteViewPitch; // 0x242
	AController* AIControllerClass; // 0x248
	APlayerState* PlayerState; // 0x250
	AController* LastHitBy; // 0x260
	AController* Controller; // 0x268
	FVector ControlInputVector; // 0x274
	FVector LastControlInputVector; // 0x280
};

struct UControlModeManager {
	UGameInstance* _gameInstance; // 0x80
};

struct UCharacterMovementComponent {
	ACharacter* CharacterOwner; // 0x158
	float GravityScale; // 0x160
	float MaxStepHeight; // 0x164
	float JumpZVelocity; // 0x168
	float JumpOffJumpZFactor; // 0x16c
	float WalkableFloorAngle; // 0x170
	float WalkableFloorZ; // 0x174
	EMovementMode MovementMode; // 0x178
	char CustomMovementMode; // 0x179
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x17a
	float GroundFriction; // 0x17c
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
	EMovementMode DefaultLandMovementMode; // 0x39c
	EMovementMode DefaultWaterMovementMode; // 0x39d
	EMovementMode GroundMovementMode; // 0x39e
	char bMaintainHorizontalGroundVelocity : 1; // 0x39f
	char bImpartBaseVelocityX : 1; // 0x39f
	char bImpartBaseVelocityY : 1; // 0x39f
	char bImpartBaseVelocityZ : 1; // 0x39f
	char bImpartBaseAngularVelocity : 1; // 0x39f
	char bJustTeleported : 1; // 0x39f
	char bNetworkUpdateReceived : 1; // 0x39f
	char bNetworkMovementModeChanged : 1; // 0x39f
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x3a0
	char bServerAcceptClientAuthoritativePosition : 1; // 0x3a0
	char bNotifyApex : 1; // 0x3a0
	char bCheatFlying : 1; // 0x3a0
	char bWantsToCrouch : 1; // 0x3a0
	char bCrouchMaintainsBaseLocation : 1; // 0x3a0
	char bIgnoreBaseRotation : 1; // 0x3a0
	char bFastAttachedMove : 1; // 0x3a0
	char bAlwaysCheckFloor : 1; // 0x3a1
	char bUseFlatBaseForFloorChecks : 1; // 0x3a1
	char bPerformingJumpOff : 1; // 0x3a1
	char bWantsToLeaveNavWalking : 1; // 0x3a1
	char bUseRVOAvoidance : 1; // 0x3a1
	char bRequestedMoveUseAcceleration : 1; // 0x3a1
	char bWasSimulatingRootMotion : 1; // 0x3a1
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x3a2
	bool LockRootMotionRotationPitch; // 0x3a3
	bool LockRootMotionRotationYaw; // 0x3a4
	bool LockRootMotionRotationRoll; // 0x3a5
	char bHasRequestedVelocity : 1; // 0x3a6
	char bRequestedMoveWithMaxSpeed : 1; // 0x3a6
	char bWasAvoidanceUpdated : 1; // 0x3a6
	char bProjectNavMeshWalking : 1; // 0x3a6
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x3a6
	float AvoidanceConsiderationRadius; // 0x3b8
	FVector RequestedVelocity; // 0x3bc
	int32_t AvoidanceUID; // 0x3c8
	FNavAvoidanceMask AvoidanceGroup; // 0x3cc
	FNavAvoidanceMask GroupsToAvoid; // 0x3d0
	FNavAvoidanceMask GroupsToIgnore; // 0x3d4
	float AvoidanceWeight; // 0x3d8
	FVector PendingLaunchVelocity; // 0x3dc
	float NavMeshProjectionInterval; // 0x490
	float NavMeshProjectionTimer; // 0x494
	float NavMeshProjectionInterpSpeed; // 0x498
	float NavMeshProjectionHeightScaleUp; // 0x49c
	float NavMeshProjectionHeightScaleDown; // 0x4a0
	float NavWalkingFloorDistTolerance; // 0x4a4
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x4a8
	float MinTimeBetweenTimeStampResets; // 0x4f0
	FRootMotionSourceGroup CurrentRootMotion; // 0x4f8
	FRootMotionMovementParams RootMotionParams; // 0x5c0
	FVector AnimRootMotionVelocity; // 0x600
};

struct UMaterialExpressionLightmassReplace {
	FExpressionInput Realtime; // 0x48
	FExpressionInput Lightmass; // 0x64
};

struct UCreateSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UAISkill_FindInteractable_SolveSickness {
	FAITunableParameter UrgencyGoalWeight; // 0x118
};

struct USourceEffectPannerPreset {
	FSourceEffectPannerSettings Settings; // 0x78
};

struct URangeToActorsTrackerStrategy {
	FDBDTunableRowHandle _range; // 0x30
};

struct UHapticFeedbackEffect_SoundWave {
	USoundWave* SoundWave; // 0x30
};

struct UGameFlowContextSystem {
	URootMovie* m_RootMovie; // 0x100
};

struct UDrawPolygonToolSnapProperties {
	bool bEnableSnapping; // 0x58
	bool bSnapToWorldGrid; // 0x59
	bool bSnapToVertices; // 0x5a
	bool bSnapToEdges; // 0x5b
	bool bSnapToAngles; // 0x5c
	bool bSnapToLengths; // 0x5d
	float SegmentLength; // 0x60
	bool bHitSceneObjects; // 0x64
	float HitNormalOffset; // 0x68
};

struct UUMGQueueStatusIconWidget {
	UImage* statusIndicator; // 0x300
	FLinearColor AcceptableColor; // 0x308
	FLinearColor ModerateColor; // 0x318
	FLinearColor LongColor; // 0x328
};

struct AAtlantaHeartbeatActor {
	bool IsHeartbeatShown; // 0x230
};

struct UCrownPillarOutlineUpdateStrategy {
	FLinearColor _offeringEnabledAuraColor; // 0xc0
};

struct UOniDashHitDiffInTimeQEEvaluator {
	AActor* _previousTarget; // 0x98
};

struct USubmixEffectConvolutionReverbPreset {
	FSubmixEffectConvolutionReverbSettings Settings; // 0x48
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x70
	bool bEnableHardwareAcceleration; // 0x71
};

struct UBTService_SetMovementMode {
	ECharacterMovementTypes OnEnterMovementMode; // 0x78
	ECharacterMovementTypes OnExitMovementMode; // 0x79
};

struct UStencilOutlineRenderStrategy {
	TArray<UMaterialInterface*> _replacementMaterials; // 0x70
	TArray<UBatchMeshCommands*> _translucentCopies; // 0x80
};

struct UAnimationSharingSetup {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x30
	FAnimationSharingScalability ScalabilitySettings; // 0x40
};

struct UItemModifier {
	FGameplayModifierData ModifierData; // 0x220
};

struct UMovieSceneCameraCutSection {
	FGuid CameraGuid; // 0xe8
	FMovieSceneObjectBindingID CameraBindingID; // 0xf8
};

struct UPlayerInteractionHandler {
	float PriorityConeAngle; // 0x120
	float BotPriorityConeAngle; // 0x124
	FMulticastInlineDelegate Authority_SecondaryActionDoneDelegate; // 0x138
	FMulticastInlineDelegate NewInteractionRequestedDelegate; // 0x148
	FMulticastInlineDelegate ServerValidatedInteractionStartedDelegate; // 0x158
	FMulticastInlineDelegate ServerValidatedInteractionEndedDelegate; // 0x168
	EInteractionLayer InteractionLayer; // 0x178
	FMulticastInlineDelegate OnDeactivateSkillCheckDelegate; // 0x188
	bool _hasInteractionRequest; // 0x1d0
	bool _hasInteractionRequestInBuffer; // 0x1d1
	UInteractionDefinition* _interactionToSwapTo; // 0x1f0
	UInteractionDefinition* _currentInteraction; // 0x218
	TArray<ADBDPlayer*> _currentPlayerDependencies; // 0x2c0
	EInputInteractionType _currentInteractionType; // 0x2d0
	USkillCheck* _skillCheck; // 0x2d8
	TArray<float> _progressBasedSkillChecks; // 0x2e8
	ADBDPlayer* _requestedInterruptionOtherParty; // 0x358
	UInterruptionDefinition* _requestedInterruptionDefinition; // 0x360
	bool _requestedInterruptionIsInterruptor; // 0x368
	ADBDPlayer* _currentInterruptionOtherParty; // 0x370
	UInterruptionDefinition* _currentInterruptionDefinition; // 0x378
	bool _currentInterruptionIsInterruptor; // 0x380
	bool _interactionInProgress; // 0x381
	TArray<UInteractionDefinition*> _interactionsInZone; // 0x3b8
};

struct UBlendSpace1D {
	bool bScaleAnimation; // 0x150
};

struct UInterpTrackInstFloatMaterialParam {
	TArray<UMaterialInstanceDynamic*> materialInstances; // 0x30
	TArray<float> ResetFloats; // 0x40
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x50
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x60
};

struct UFlashlightTargetFXComponent {
	bool _modifiesBeamAngle; // 0xe8
	UFlashlightableComponent* _flashlightable; // 0xf0
};

struct UBlockElement {
	TWeakObjectPtr<UObject> _source; // 0x30
	TSet<TWeakObjectPtr<ADBDPlayer>> _affectedPlayers; // 0x38
};

struct UEruption {
	TArray<AGenerator*> _server_highlightedGenerators; // 0x3d0
	bool _isPerkEnabled; // 0x3e0
	float _generatorRegressPercentage[0x3]; // 0x3e4
	float _survivorImposedStatusEffectDuration[0x3]; // 0x3f0
	float _perkCooldownDuration[0x3]; // 0x3fc
	float _screamRevealLocationDuration; // 0x408
};

struct UK25ChainAttachedStatusEffect {
	UCurveFloat* _percentageReductionSpeedPerChainCurve; // 0x350
	UK25SurvivorChainAttachmentComponent* _chainAttachmentComponent; // 0x358
	int32_t _cachedNumberOfChainsAttached; // 0x360
};

struct UK25KillerTeleportationPositionFinderComponent {
	float _rayCastZOffet; // 0xb8
	float _rayCastLength; // 0xbc
	float _killerInRangeMinimumDistanceCheck; // 0xc0
	float _killerInRangeMaxRangePercentage; // 0xc4
	float _deltaHeightThreshold; // 0xc8
	FDBDTunableRowHandle _minDistanceFromLamentConfiguration; // 0xd0
	FDBDTunableRowHandle _maxDistanceFromLamentConfiguration; // 0xf8
	float _timeBetweenFailsafeChecks; // 0x140
	EK25TeleportLocationStatus _teleportLocationStatus; // 0x188
	FVector _bestTeleportLocation; // 0x18c
	TArray<AEscapeDoor*> _escapeDoors; // 0x198
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x30
};

struct UMaterialExpressionVectorNoise {
	FExpressionInput Position; // 0x48
	EVectorNoiseFunction NoiseFunction; // 0x64
	int32_t Quality; // 0x68
	char bTiling : 1; // 0x6c
	uint32_t TileSize; // 0x70
};

struct UBTTask_FinishWithResult {
	EBTNodeResult Result; // 0x78
};

struct USlateAccessibleWidgetData {
	bool bCanChildrenBeAccessible; // 0x30
	ESlateAccessibleBehavior AccessibleBehavior; // 0x31
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32
	FText AccessibleText; // 0x38
	FDelegate AccessibleTextDelegate; // 0x50
	FText AccessibleSummaryText; // 0x68
	FDelegate AccessibleSummaryTextDelegate; // 0x80
};

struct UAxisFlickMasher {
	UInputComponent* _inputComponent; // 0xb8
	UAxisFlick* _axisFlick1; // 0xc8
	UAxisFlick* _axisFlick2; // 0xd0
};

struct ATransformGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x230
	UPrimitiveComponent* TranslateY; // 0x238
	UPrimitiveComponent* TranslateZ; // 0x240
	UPrimitiveComponent* TranslateYZ; // 0x248
	UPrimitiveComponent* TranslateXZ; // 0x250
	UPrimitiveComponent* TranslateXY; // 0x258
	UPrimitiveComponent* RotateX; // 0x260
	UPrimitiveComponent* RotateY; // 0x268
	UPrimitiveComponent* RotateZ; // 0x270
	UPrimitiveComponent* UniformScale; // 0x278
	UPrimitiveComponent* AxisScaleX; // 0x280
	UPrimitiveComponent* AxisScaleY; // 0x288
	UPrimitiveComponent* AxisScaleZ; // 0x290
	UPrimitiveComponent* PlaneScaleYZ; // 0x298
	UPrimitiveComponent* PlaneScaleXZ; // 0x2a0
	UPrimitiveComponent* PlaneScaleXY; // 0x2a8
};

struct USurvivorCollectableOutlineUpdateStrategy {
	FLinearColor _outlineColor; // 0xc0
	FLinearColor _nearlyConsumedColor; // 0xd0
};

struct UAkWindowsInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UHatchetLauncher {
	FRotator _angleOffset; // 0x180
	UCurveFloat* _angleOffsetCurve; // 0x190
	UCurveFloat* _speedCurve; // 0x198
	float _hatchetSpeedWhenThrowFullyCharged; // 0x1a0
	UCurveFloat* _hatchetPitchCurve; // 0x1a8
	FDBDTunableRowHandle _hatchetMinAngleOffset; // 0x1b0
	FDBDTunableRowHandle _hatchetMaxAngleOffset; // 0x1d8
	FDBDTunableRowHandle _hatchetMinSpeed; // 0x200
	FDBDTunableRowHandle _hatchetMaxSpeed; // 0x228
	FDBDTunableRowHandle _hatchetLaunchPitchMin; // 0x250
	FDBDTunableRowHandle _hatchetLaunchPitchMax; // 0x278
};

struct ULightingHelper {
	ABaseSky* _levelLighting; // 0x30
	ABaseSky* _levelLightingFixed; // 0x38
	ABaseSky* _levelLightingSpawned; // 0x40
	ABaseSky* _levelLightingWithoutExposure; // 0x48
	AActor* _adaptiveShadowMapControllersActor; // 0x50
	ULightingInterpolator* _lightingInterpolator; // 0x58
	ULightingFactory* _lightingFactory; // 0x60
	UPostProcessComponent* _postProcessCache; // 0x68
	bool _bIsDreamworldActive; // 0x70
};

struct UCoreHudRootWidget {
	UOverlay* WidgetContainer; // 0x260
	UOverlay* OuterContainer; // 0x268
	UOverlay* SpectateContainer; // 0x270
	UScaleBox* ScaleHud; // 0x278
	float UnfocusedOpacity; // 0x280
	UCurveFloat* Test4kDpiScalingCurve; // 0x288
	UUserWidget* Test4kDpiCurveClass; // 0x290
	UUserWidget* Test4kDpiCurveWidget; // 0x298
	UUserWidget* EndGameCollapseBarWidgetClass; // 0x2a0
	UUserWidget* EquippedItemWidgetClass; // 0x2a8
	UUserWidget* EquippedPowerWidgetClass; // 0x2b0
	UUserWidget* ExternalEffectsWidgetClass; // 0x2b8
	UUserWidget* HudAlertWidgetClass; // 0x2c0
	UUserWidget* InteractionProgressWidgetClass; // 0x2c8
	UUserWidget* InteractionPromptsContainerWidgetClass; // 0x2d0
	UUserWidget* ItemInteractionWidgetClass; // 0x2d8
	UUserWidget* LeaningArrowsWidgetClass; // 0x2e0
	UUserWidget* MatchResultWidgetClass; // 0x2e8
	UUserWidget* OfferingInteractionWidgetClass; // 0x2f0
	UUserWidget* PerksContainerWidgetClass; // 0x2f8
	UUserWidget* PingStatusWidgetClass; // 0x300
	UUserWidget* PlayerStatusesWidgetClass; // 0x308
	UUserWidget* ScreenIndicatorWidgetClass; // 0x310
	UUserWidget* SpectateBarWidgetClass; // 0x318
	UUserWidget* StartSequenceWidgetClass; // 0x320
	UUserWidget* StatusEffectWidgetClass; // 0x328
	UUserWidget* TestBuildFlagWidgetClass; // 0x330
	UUserWidget* TutorialMysteryNoteWidgetClass; // 0x338
	UUserWidget* TutorialObjectivesWidgetClass; // 0x340
	UUserWidget* TutorialPopupWidgetClass; // 0x348
	TArray<TScriptInterface<ICoreBaseViewInterface>> _coreBaseViewInterfaces; // 0x350
	FMulticastInlineDelegate HUDWidgetsFadeOutCompletedDelegate; // 0x360
};

struct ADBD_SoundEventSpawner {
	TArray<FDBD_SoundSpawnerData> AtlantaSoundDescriptor; // 0x230
	TArray<FDBD_SoundSpawnerData> SoundDescriptor; // 0x240
	TArray<AActor*> _loadedSoundAssets; // 0x258
};

struct UMaterialExpressionRotateAboutAxis {
	FExpressionInput NormalizedRotationAxis; // 0x48
	FExpressionInput RotationAngle; // 0x64
	FExpressionInput PivotPoint; // 0x80
	FExpressionInput Position; // 0x9c
	float Period; // 0xb8
};

struct UHudScreenCoreUMG {
	UCoreHudRootWidget* _rootWidget; // 0x240
	ATutorialsUtilities* _tutorialsUtilities; // 0x3a8
	TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusInterfaces; // 0x3b0
	FInteractionProgressViewData _interactionProgressViewData; // 0x3c0
	FItemBundleViewData _itemBundleViewData; // 0x428
	FPowerBundleViewData _powerBundleViewData; // 0x5c8
	TArray<FPlayerStatusViewData> _playerStatusViewData; // 0x710
};

struct UUMGAtlantaRitualTab {
	UVerticalBox* ContainerBox; // 0x300
	TSoftClassPtr<UObject> _itemWidgetClass; // 0x308
};

struct UTheExecutionerAnimInstance {
	bool _isInTormentMode; // 0x5a8
	bool _isChargingTormentMode; // 0x5a9
	bool _isTormentModeAttacking; // 0x5aa
	float _tormentModeVerticalInput; // 0x5ac
	float _tormentModeHorizontalInput; // 0x5b0
};

struct UCoreHudAlertWidget {
	int32_t MaxDisplayedItems; // 0x2f8
	float SecondaryAlpha; // 0x2fc
	float FullAlertDuration; // 0x300
	float PendingAlertDuration; // 0x304
	float AnimationDuration; // 0x308
	EEasingType AnimationEasing; // 0x30c
	float AnimationTranslationY; // 0x310
	UCoreHudScoreAlertItem* CoreHudScoreAlertItemClass; // 0x318
	UCoreHudStatusEffectAlertItem* CoreHudStatusEffectAlertItemClass; // 0x320
	UGridPanel* AlertContainer; // 0x328
	TArray<UCoreBaseUserWidget*> _alerts; // 0x330
	TArray<UCoreBaseUserWidget*> _pendingAlerts; // 0x340
	TArray<UCoreHudScoreAlertItem*> _scoreAlertPool; // 0x350
	TArray<UCoreHudStatusEffectAlertItem*> _statusEffectAlertPool; // 0x360
};

struct UPreviewMeshCollection {
	USkeleton* Skeleton; // 0x40
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x48
};

struct UBaseBrushTool {
	UBrushBaseProperties* BrushProperties; // 0xc8
	bool bInBrushStroke; // 0xd0
	FBrushStampData LastBrushStamp; // 0xd4
	TSoftClassPtr<UObject> PropertyClass; // 0x198
	UBrushStampIndicator* BrushStampIndicator; // 0x1c8
};

struct UParticleModuleParameterDynamic {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x38
	int32_t UpdateFlags; // 0x48
	char bUsesVelocity : 1; // 0x4c
};

struct UInterpTrackVectorMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x98
	FName ParamName; // 0xa8
};

struct UFSM_HasStateRanForXSecondsCondition {
	FDBDTunableRowHandle _minTimeInSecondsToSatisfyCondition; // 0x38
};

struct UParticleModuleBeamNoise {
	char bLowFreq_Enabled : 1; // 0x38
	int32_t Frequency; // 0x3c
	int32_t Frequency_LowRange; // 0x40
	FRawDistributionVector NoiseRange; // 0x48
	FRawDistributionFloat NoiseRangeScale; // 0x90
	char bNRScaleEmitterTime : 1; // 0xc0
	FRawDistributionVector NoiseSpeed; // 0xc8
	char bSmooth : 1; // 0x110
	float NoiseLockRadius; // 0x114
	char bNoiseLock : 1; // 0x118
	char bOscillate : 1; // 0x118
	float NoiseLockTime; // 0x11c
	float NoiseTension; // 0x120
	char bUseNoiseTangents : 1; // 0x124
	FRawDistributionFloat NoiseTangentStrength; // 0x128
	int32_t NoiseTessellation; // 0x158
	char bTargetNoise : 1; // 0x15c
	float FrequencyDistance; // 0x160
	char bApplyNoiseScale : 1; // 0x164
	FRawDistributionFloat NoiseScale; // 0x168
};

struct UAsyncActionChangePrimaryAssetBundles {
	FMulticastInlineDelegate COMPLETED; // 0x80
};

struct UHexBloodFavor {
	float _palletInRange[0x3]; // 0x440
	float _palletPulldownBlockTime[0x3]; // 0x44c
};

struct ULightmassPortalComponent {
	UBoxComponent* PreviewBox; // 0x210
};

struct UVariantSet {
	FText DisplayText; // 0x30
	bool bExpanded; // 0x60
	TArray<UVariant*> Variants; // 0x68
};

struct UMaterialExpressionMin {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	float ConstA; // 0x80
	float ConstB; // 0x84
};

struct UEnvQueryManager {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xb0
	TArray<UEnvQueryContext*> LocalContexts; // 0xc0
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xd0
	float MaxAllowedTestingTime; // 0x134
	bool bTestQueriesUsingBreadth; // 0x138
	int32_t QueryCountWarningThreshold; // 0x13c
	double QueryCountWarningInterval; // 0x140
};

struct UContextualQuestComponent {
	TArray<FSpecialBehaviourObjectsInfo> _specialBehaviourObjectsInfo; // 0xe0
	bool _isInitialized; // 0xf0
};

struct UCharacterPusherComponent {
	TArray<ACharacter*> _charactersToPush; // 0xe8
	TSet<ACharacter*> _ignoredCharacters; // 0xf8
	UCapsuleComponent* _characterDetector; // 0x148
	UCapsuleComponent* _characterCollision; // 0x150
	UBasePushStrategyComponent* _pushStrategy; // 0x158
	TArray<ACharacter*> _ignoredByPushedCharacters; // 0x160
};

struct UAnimSet {
	char bAnimRotationOnly : 1; // 0x30
	TArray<FName> TrackBoneNames; // 0x38
	TArray<FAnimSetMeshLinkup> LinkupCache; // 0x48
	TArray<char> BoneUseAnimTranslation; // 0x58
	TArray<char> ForceUseMeshTranslation; // 0x68
	TArray<FName> UseTranslationBoneNames; // 0x78
	TArray<FName> ForceMeshTranslationBoneNames; // 0x88
	FName PreviewSkelMeshName; // 0x98
	FName BestRatioSkelMeshName; // 0xa4
};

struct UMaterialExpressionCurveAtlasRowParameter {
	UCurveLinearColor* Curve; // 0x70
	UCurveLinearColorAtlas* Atlas; // 0x78
	FExpressionInput InputTime; // 0x80
};

struct ABaseProjectile {
	float OnImpactAINoiseEventRange; // 0x230
	bool _multicastLaunch; // 0x278
	bool _allowMultipleHits; // 0x279
	FGameplayTagContainer _semanticGameplayTags; // 0x280
	bool _notifyClientOfServerHitValidationResult; // 0x2a0
	UBaseProjectileReplicationComponent* _replicationComponent; // 0x2a8
};

struct UStateTagEvaluatorCondition {
	FGameplayTag _gameplayTag; // 0x48
};

struct UBlightPowerStateDash {
	FTunableStat _vectorInterpToSpeed; // 0x188
	UCurveFloat* _noDashTimeLimitSpeedCurve; // 0x208
	UCurveFloat* _lookAngleToTurnRateCurveController; // 0x210
	UCurveFloat* _lookAngleToTurnRateCurveMouse; // 0x218
	UCurveFloat* _lookAngleToMaxTurnRateCurveMouse; // 0x220
};

struct UVisionary {
	float _auraVisibilityRange[0x3]; // 0x3d0
	float _cooldownDuration[0x3]; // 0x3dc
};

struct ADatasmithAreaLightActor {
	EDatasmithAreaLightActorType LightType; // 0x230
	EDatasmithAreaLightActorShape LightShape; // 0x231
	FVector2D Dimensions; // 0x234
	float Intensity; // 0x23c
	ELightUnits IntensityUnits; // 0x240
	FLinearColor Color; // 0x244
	float Temperature; // 0x254
	UTextureLightProfile* IESTexture; // 0x258
	bool bUseIESBrightness; // 0x260
	float IESBrightnessScale; // 0x264
	FRotator Rotation; // 0x268
	float SourceRadius; // 0x274
	float SourceLength; // 0x278
	float AttenuationRadius; // 0x27c
	float SpotlightInnerAngle; // 0x280
	float SpotlightOuterAngle; // 0x284
};

struct UMaterialExpressionVectorParameter {
	FLinearColor defaultValue; // 0x68
	bool bUseCustomPrimitiveData; // 0x78
	char PrimitiveDataIndex; // 0x79
};

struct UBackgroundBlur {
	FMargin Padding; // 0x140
	EHorizontalAlignment HorizontalAlignment; // 0x150
	EVerticalAlignment VerticalAlignment; // 0x151
	bool bApplyAlphaToBlur; // 0x152
	float BlurStrength; // 0x154
	bool bOverrideAutoRadiusCalculation; // 0x158
	int32_t BlurRadius; // 0x15c
	FSlateBrush LowQualityFallbackBrush; // 0x160
};

struct UMaterialExpressionComment {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	FString Text; // 0x50
	FLinearColor CommentColor; // 0x60
	int32_t FontSize; // 0x70
};

struct UTutorialEndGameComponent {
	float _timerMaxCompletionPercentage; // 0x158
};

struct UAkGeometryComponent {
	AkMeshType MeshType; // 0x210
	int32_t LOD; // 0x214
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x218
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x268
	char bEnableDiffraction : 1; // 0x278
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x278
	AActor* AssociatedRoom; // 0x280
	FAkGeometryData GeometryData; // 0x298
};

struct UBehaviorTreeManager {
	int32_t MaxDebuggerSteps; // 0x30
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x38
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x48
};

struct AWorldSettings {
	int32_t VisibilityCellSize; // 0x238
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x23c
	char bPrecomputeVisibility : 1; // 0x23d
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x23d
	char bEnableWorldBoundsChecks : 1; // 0x23d
	char bEnableNavigationSystem : 1; // 0x23d
	char bEnableAISystem : 1; // 0x23d
	char bEnableWorldComposition : 1; // 0x23d
	char bUseClientSideLevelStreamingVolumes : 1; // 0x23d
	char bEnableWorldOriginRebasing : 1; // 0x23d
	char bWorldGravitySet : 1; // 0x23e
	char bGlobalGravitySet : 1; // 0x23e
	char bMinimizeBSPSections : 1; // 0x23e
	char bForceNoPrecomputedLighting : 1; // 0x23e
	char bHighPriorityLoading : 1; // 0x23e
	char bHighPriorityLoadingLocal : 1; // 0x23e
	char bOverrideDefaultBroadphaseSettings : 1; // 0x23e
	UNavigationSystemConfig* NavigationSystemConfig; // 0x240
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x248
	float WorldToMeters; // 0x250
	float KillZ; // 0x254
	UDamageType* KillZDamageType; // 0x258
	float WorldGravityZ; // 0x260
	float GlobalGravityZ; // 0x264
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x268
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x270
	AGameModeBase* DefaultGameMode; // 0x278
	AGameNetworkManager* GameNetworkManagerClass; // 0x280
	int32_t PackedLightAndShadowMapTextureSize; // 0x288
	FVector DefaultColorScale; // 0x28c
	bool DoAllowBatching; // 0x298
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x29c
	float GlobalDistanceFieldViewDistance; // 0x2a0
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x2a4
	FReverbSettings DefaultReverbSettings; // 0x2a8
	FInteriorSettings DefaultAmbientZoneSettings; // 0x2c8
	float MonoCullingDistance; // 0x2ec
	USoundMix* DefaultBaseSoundMix; // 0x2f0
	float TimeDilation; // 0x2f8
	float MatineeTimeDilation; // 0x2fc
	float DemoPlayTimeDilation; // 0x300
	float MinGlobalTimeDilation; // 0x304
	float MaxGlobalTimeDilation; // 0x308
	float MinUndilatedFrameTime; // 0x30c
	float MaxUndilatedFrameTime; // 0x310
	FBroadphaseSettings BroadphaseSettings; // 0x314
	APlayerState* Pauser; // 0x358
	TArray<FNetViewer> ReplicationViewers; // 0x360
	TArray<UAssetUserData*> AssetUserData; // 0x370
	APlayerState* PauserPlayerState; // 0x380
	int32_t MaxNumberOfBookmarks; // 0x388
	UBookmarkBase* DefaultBookmarkClass; // 0x390
	TArray<UBookmarkBase*> BookmarkArray; // 0x398
	UBookmarkBase* LastBookmarkClass; // 0x3a8
};

struct UVaultableOutlineUpdateStrategy {
	bool _canBeRevealedToLocalPlayer; // 0x130
};

struct UTargetOfEventRecentlyQEEvaluator {
	FGameplayTag _firstGameEvent; // 0x98
	bool _secondEventOnSelf; // 0xa4
};

struct UBlendProfile {
	USkeleton* OwningSkeleton; // 0x38
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x40
};

struct UWorldComposition {
	TArray<ULevelStreaming*> TilesStreaming; // 0x50
	double TilesStreamingTimeThreshold; // 0x60
	bool bLoadAllTilesDuringCinematic; // 0x68
	bool bRebaseOriginIn3DSpace; // 0x69
	float RebaseOriginDistance; // 0x6c
};

struct UMovieSceneGeometryCacheSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UChainsawAnalyticsBaseComponent {
	float _maxDistanceFromHookToBeConsideredCamping; // 0xd0
};

struct UCannibalPowerPresentationItemProgressComponent {
	UCannibalChainsawPowerComponent* _cannibalPowerChainsawComponent; // 0xb8
};

struct UMeshEditingViewProperties {
	bool bShowWireframe; // 0x58
	EMeshEditingMaterialModes MaterialMode; // 0x5c
	bool bFlatShading; // 0x60
	FLinearColor Color; // 0x64
	UTexture2D* Image; // 0x78
};

struct UKillerBlindingFXComponent {
	UAkAudioEvent* _blindedSound; // 0x120
};

struct UMaterialExpressionTextureCoordinate {
	int32_t CoordinateIndex; // 0x48
	float UTiling; // 0x4c
	float VTiling; // 0x50
	char UnMirrorU : 1; // 0x54
	char UnMirrorV : 1; // 0x54
};

struct UControllerPairingManager {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x30
};

struct UUMGLoadoutFilterButton {
	UButton* ActionButton; // 0x300
	FMulticastInlineDelegate OnLoadoutFilterButtonClicked; // 0x308
};

struct ADBDCustomizationTool {
	TSoftClassPtr<UObject> OverallLightingClass; // 0x230
	FDBDCustomizationToolData CustomizationData; // 0x260
	TArray<AActor*> _spawnedActors; // 0xf38
};

struct UParticleModuleAccelerationDragScaleOverLife {
	UDistributionFloat* DragScale; // 0x40
	FRawDistributionFloat DragScaleRaw; // 0x48
};

struct UAnimationAsset {
	USkeleton* Skeleton; // 0x40
	TArray<UAnimMetaData*> MetaData; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x78
};

struct UArrowComponent {
	FColor ArrowColor; // 0x428
	float ArrowSize; // 0x42c
	float ScreenSize; // 0x430
	char bIsScreenSizeScaled : 1; // 0x434
	char bTreatAsASprite : 1; // 0x434
};

struct APainCausingVolume {
	char bPainCausing : 1; // 0x278
	float DamagePerSec; // 0x27c
	UDamageType* DamageType; // 0x280
	float PainInterval; // 0x288
	char bEntryPain : 1; // 0x28c
	char BACKUP_bPainCausing : 1; // 0x28c
	AController* DamageInstigator; // 0x290
};

struct UBloodwebManager {
	UBloodwebGenerator* _bloodwebBuilderClass; // 0x60
	UDBDGameInstance* _gameInstance; // 0x68
	UDBDDesignTunables* _designTunables; // 0x70
	UBloodwebTunables* _bloodwebTunables; // 0x78
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition; // 0x80
	UBloodwebGenerator* _bloodwebBuilder; // 0x90
	UBloodwebEntity* _entity; // 0x98
	UBloodwebHandler* _bloodwebHandler; // 0xa0
};

struct UUMGPlayersStatusWidget {
	TMap<EPlayerRole, FCustomizedHudPlayerWrapperIdMapContainer> CustomizedHudWrapperIdMap; // 0x300
	TSoftClassPtr<UObject> PlayerStatusIconClass; // 0x350
	UHorizontalBox* playersContainer; // 0x380
	TMap<FString, UUMGPlayerStatusIcon*> playerIconsByName; // 0x388
};

struct UAddPrimitiveTool {
	UProceduralShapeToolProperties* ShapeSettings; // 0x98
	UNewMeshMaterialProperties* MaterialProperties; // 0xa0
	UPreviewMesh* PreviewMesh; // 0xa8
	ULastActorInfo* LastGenerated; // 0xb0
};

struct UCurveLinearColorAtlas {
	uint32_t TextureSize; // 0x108
	TArray<UCurveLinearColor*> GradientCurves; // 0x110
};

struct UMonoWaveTableSynthPreset {
	FString PresetName; // 0x30
	char bLockKeyframesToGridBool : 1; // 0x40
	int32_t LockKeyframesToGrid; // 0x44
	int32_t WaveTableResolution; // 0x48
	TArray<FRuntimeFloatCurve> WaveTable; // 0x50
	char bNormalizeWaveTables : 1; // 0x60
};

struct USetTrapInteraction {
	FSocketOrBoneCache _dropSocket; // 0x6d8
};

struct UK26DismissCrowChargeableInteractionDefinition {
	FTunableStat _chargeTime; // 0x6d8
	UK26PowerStatusHandlerComponent* _k26PowerStatusHandlerComponent; // 0x758
	bool _isLevelReadyToPlay; // 0x760
};

struct UEditableGameplayTagQueryExpression_NoExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x30
};

struct UCullingField {
	UFieldNodeBase* Culling; // 0xb8
	UFieldNodeBase* Field; // 0xc0
	EFieldCullingOperationType Operation; // 0xc8
};

struct UCoreHudObjectiveWidget {
	UDBDTextBlock* SpecialSpacer; // 0x300
};

struct UToFloatField {
	UFieldNodeInt* IntField; // 0xb8
};

struct UDrawPolyPathTool {
	UDrawPolyPathProperties* TransformProps; // 0xa8
	UDrawPolyPathExtrudeProperties* ExtrudeProperties; // 0xb0
	UNewMeshMaterialProperties* MaterialProperties; // 0xb8
	UConstructionPlaneMechanic* PlaneMechanic; // 0x140
	UPolyEditPreviewMesh* EditPreview; // 0x1e8
	UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x1f0
	USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x1f8
	UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x200
};

struct UVRNotificationsComponent {
	FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb8
	FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc8
	FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd8
	FMulticastInlineDelegate HMDLostDelegate; // 0xe8
	FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf8
	FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x108
	FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x118
	FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x128
	FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x138
};

struct AEntity {
	UCurveFloat* _dissolveCurve; // 0x230
	UCurveFloat* _revealsCurve; // 0x238
	UMaterialHelper* _materialHelper; // 0x240
	USkeletalMeshComponent* _skeletalMesh; // 0x248
};

struct UMeshRotationCorrectionSubAnimInstance {
	float _rotationInterpSpeed; // 0x4f0
	bool _isCrawling; // 0x4f4
	FRotator _toSlopeRotation; // 0x4f8
	UCharacterMovementComponent* _movementComponent; // 0x508
};

struct UEditableTextBox {
	FText Text; // 0x128
	FDelegate TextDelegate; // 0x140
	FEditableTextBoxStyle WidgetStyle; // 0x158
	USlateWidgetStyleAsset* Style; // 0x9b8
	FText HintText; // 0x9c0
	FDelegate HintTextDelegate; // 0x9d8
	FSlateFontInfo Font; // 0x9f0
	FLinearColor ForegroundColor; // 0xa48
	FLinearColor BackgroundColor; // 0xa58
	FLinearColor ReadOnlyForegroundColor; // 0xa68
	bool IsReadOnly; // 0xa78
	bool IsPassword; // 0xa79
	float MinimumDesiredWidth; // 0xa7c
	FMargin Padding; // 0xa80
	bool IsCaretMovedWhenGainFocus; // 0xa90
	bool SelectAllTextWhenFocused; // 0xa91
	bool RevertTextOnEscape; // 0xa92
	bool ClearKeyboardFocusOnCommit; // 0xa93
	bool SelectAllTextOnCommit; // 0xa94
	bool AllowContextMenu; // 0xa95
	EVirtualKeyboardType KeyboardType; // 0xa96
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xa97
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xa98
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xa99
	ETextJustify Justification; // 0xa9a
	FShapedTextOptions ShapedTextOptions; // 0xa9b
	FMulticastInlineDelegate OnTextChanged; // 0xaa0
	FMulticastInlineDelegate OnTextCommitted; // 0xab0
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective {
	FExpressionInput WorldPosition; // 0x48
};

struct UMaterialExpressionPreviousFrameSwitch {
	FExpressionInput CurrentFrame; // 0x48
	FExpressionInput PreviousFrame; // 0x64
};

struct UImgMediaSource {
	FFrameRate FrameRateOverride; // 0x98
	FString ProxyOverride; // 0xa0
	FDirectoryPath SequencePath; // 0xb0
};

struct UUMGBaseCurrencyButtonWidget {
	UImage* FXImage; // 0x430
	UImage* CurrencyColorImage; // 0x438
	UImage* CurrencyIcon; // 0x440
	UTextBlock* PriceText; // 0x448
	FSlateColor AffordableColor; // 0x450
	FSlateColor NotAffordableColor; // 0x478
	FLinearColor DisabledOpacity; // 0x4a0
	FLinearColor EnabledOpacity; // 0x4b0
};

struct UExhaustedEffect {
	float CooldownModifier; // 0x360
};

struct UMaterialExpressionCustom {
	FString Code; // 0x48
	ECustomMaterialOutputType OutputType; // 0x58
	FString Description; // 0x60
	TArray<FCustomInput> Inputs; // 0x70
	TArray<FCustomDefine> AdditionalDefines; // 0x80
	TArray<FString> IncludeFilePaths; // 0x90
};

struct UBTDecorator_IsInteractionAvailable {
	TArray<FString> InteractionIds; // 0x70
	EIsInteractionAvailableOnFilter OnFilter; // 0x80
	bool FailIfAnotherOngoingInteraction; // 0x81
	bool FailIfNotPerformingInteraction; // 0x82
};

struct UAlert {
	float _killerAuraRevealDuration[0x3]; // 0x3d0
	UStatusEffect* _alertKillerRevealEffect; // 0x3e0
};

struct UCharacterSightComponent {
	float _minimumCharacterScreenPercent; // 0xf0
	float _minimumCharacterVisiblePixelsPercent; // 0xf4
	float _maximumSightDistance; // 0xf8
	float _screenVisibilityZoneRadiusPercent; // 0xfc
	float _sightingDelay; // 0x100
	float _discerningDelay; // 0x104
	float _undiscerningDelay; // 0x108
	ACharacter* _sightableCharacterClass; // 0x110
	TArray<FAuthorityDiscernedCharacter> _discernedCharacters; // 0x118
	TArray<FDiscernibleCharacter> _localDiscernibleCharacters; // 0x128
	bool _debugMode; // 0x148
	bool _canSee; // 0x149
	FActivationDefinition _activationDefinition; // 0x150
};

struct AMagicFountain {
	FVector AIInteractionOffset; // 0x330
};

struct UBoxComponent {
	FVector BoxExtent; // 0x440
	float LineThickness; // 0x44c
};

struct UParticleModuleAccelerationOverLifetime {
	FRawDistributionVector AccelOverLife; // 0x40
};

struct UARTrackedImage {
	UARCandidateImage* DetectedImage; // 0xf0
	FVector2D EstimatedSize; // 0xf8
};

struct UChargerComponent {
	FString ChargerComponentID; // 0xc0
	FMulticastInlineDelegate OnChargeStateChange; // 0xd0
	FMulticastInlineDelegate OnChargePercentChange; // 0xe0
	EEnergyTypeEnum EnergyType; // 0x108
	float _currentEnergyLevel; // 0x10c
	float _maxEnergyLevel; // 0x110
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

struct UBlackboardKeyType_NativeEnum {
	FString EnumName; // 0x38
	UEnum* EnumType; // 0x48
};

struct UAISlasherChaseAndAttackBehaviour {
	UAISlasherChaseAndAttackBehaviourData* _behaviourData; // 0x58
	ASlasherPlayer* _slasherPlayer; // 0x60
	ADBDAIPlayerController* _slasherAIPlayerController; // 0x68
};

struct UBTDecorator_RandomByDistance {
	FBlackboardKeySelector BBAroundLoc; // 0x70
	FBlackboardKeySelector BBRelativeFromTime; // 0xa0
	FBlackboardKeySelector BBRelativeToTime; // 0xd0
	FAITunableParameter StartDistance; // 0x100
	FAITunableParameter EndDistance; // 0x110
	FAITunableParameter PercentageAtStartDistance; // 0x120
	FAITunableParameter PercentageAtEndDistance; // 0x130
	TArray<FAIRandomByDistancePercentagesAtTime> PercentagesAtTimes; // 0x140
};

struct UCamperSlashableComponent {
	UCapsuleComponent* _slashableZone; // 0xc0
	UCapsuleComponent* _hookSlashableZone; // 0xc8
	float _standingCapsuleHalfHeight; // 0xd0
	float _crouchCapsuleHalfHeight; // 0xd4
	FGameplayTagContainer _slashableDisablingStateTags; // 0xd8
	float _sourceActivationLingerDuration; // 0xf8
	USlashableActivationSourceCollection* _slashableActivationSources; // 0x128
};

struct UUMGPromoPackSelectedItemWidget {
	UUMGHtmlRichText* ItemDescription; // 0x300
	UImage* ItemTypeIcon; // 0x308
	UTextBlock* ItemName; // 0x310
	UTextBlock* ItemSubTitle; // 0x318
	UNamedSlot* SelectedItemSlot; // 0x320
	UUMGPromoPackItemWidget* SelectedItem; // 0x328
	UScrollBox* ScrollBox; // 0x330
};

struct UBaseGroundDetectorComponent {
	FName _startTransformName; // 0x168
	ECollisionChannel _walkableCollisionChannel; // 0x174
	bool _traceComplex; // 0x175
	float _extraTraceDistance; // 0x178
	USkinnedMeshComponent* _skinnedMeshComponent; // 0x180
	FName _startSlopeTransformName; // 0x190
};

struct ULightBurnableFlashlightTargetFXComponent {
	ULightBurnable* _burnable; // 0x100
};

struct USurvivorPlagueEffect {
	float _sicknessAmount; // 0x398
	float _sicknessCap; // 0x39c
	float _vomitSlowDuration; // 0x3a0
	float _vomitSlowAmount; // 0x3a4
	TArray<float> _sicknessThresholds; // 0x3a8
	bool _wasRecentlyHitByVomit; // 0x3b8
	TArray<FString> _nonNauseatingInteractions; // 0x3c0
	FTunableStat _sicknessGainPerSecondFromInfectedInteractable; // 0x3e8
	bool _debugMode; // 0x4f8
};

struct UNetConnection {
	TArray<UChildConnection*> Children; // 0x50
	UNetDriver* Driver; // 0x60
	UPackageMap* PackageMapClass; // 0x68
	UPackageMap* PackageMap; // 0x70
	TArray<UChannel*> OpenChannels; // 0x78
	TArray<AActor*> SentTemporaries; // 0x88
	AActor* ViewTarget; // 0x98
	AActor* OwningActor; // 0xa0
	int32_t MaxPacket; // 0xa8
	char InternalAck : 1; // 0xac
	FUniqueNetIdRepl playerID; // 0x168
	double LastReceiveTime; // 0x1d8
	TArray<UChannel*> ChannelsToTick; // 0x1518
};

struct UEngine {
	UFont* TinyFont; // 0x38
	FSoftObjectPath TinyFontName; // 0x40
	UFont* SmallFont; // 0x60
	FSoftObjectPath SmallFontName; // 0x68
	UFont* MediumFont; // 0x88
	FSoftObjectPath MediumFontName; // 0x90
	UFont* LargeFont; // 0xb0
	FSoftObjectPath LargeFontName; // 0xb8
	UFont* SubtitleFont; // 0xd8
	FSoftObjectPath SubtitleFontName; // 0xe0
	TArray<UFont*> AdditionalFonts; // 0x100
	TArray<FString> AdditionalFontNames; // 0x118
	UConsole* ConsoleClass; // 0x128
	FSoftClassPath ConsoleClassName; // 0x130
	UGameViewportClient* GameViewportClientClass; // 0x150
	FSoftClassPath GameViewportClientClassName; // 0x158
	ULocalPlayer* LocalPlayerClass; // 0x178
	FSoftClassPath LocalPlayerClassName; // 0x180
	AWorldSettings* WorldSettingsClass; // 0x1a0
	FSoftClassPath WorldSettingsClassName; // 0x1a8
	FSoftClassPath NavigationSystemClassName; // 0x1c8
	UNavigationSystemBase* NavigationSystemClass; // 0x1e8
	FSoftClassPath NavigationSystemConfigClassName; // 0x1f0
	UNavigationSystemConfig* NavigationSystemConfigClass; // 0x210
	FSoftClassPath AvoidanceManagerClassName; // 0x218
	UAvoidanceManager* AvoidanceManagerClass; // 0x238
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x240
	FSoftClassPath PhysicsCollisionHandlerClassName; // 0x248
	FSoftClassPath GameUserSettingsClassName; // 0x268
	UGameUserSettings* GameUserSettingsClass; // 0x288
	FSoftClassPath AIControllerClassName; // 0x290
	UGameUserSettings* GameUserSettings; // 0x2b0
	ALevelScriptActor* LevelScriptActorClass; // 0x2b8
	FSoftClassPath LevelScriptActorClassName; // 0x2c0
	FSoftClassPath DefaultBlueprintBaseClassName; // 0x2e0
	FSoftClassPath GameSingletonClassName; // 0x300
	UObject* GameSingleton; // 0x320
	FSoftClassPath AssetManagerClassName; // 0x328
	UAssetManager* AssetManager; // 0x348
	UTexture2D* DefaultTexture; // 0x350
	FSoftObjectPath DefaultTextureName; // 0x358
	UTexture* DefaultDiffuseTexture; // 0x378
	FSoftObjectPath DefaultDiffuseTextureName; // 0x380
	UTexture2D* DefaultBSPVertexTexture; // 0x3a0
	FSoftObjectPath DefaultBSPVertexTextureName; // 0x3a8
	UTexture2D* HighFrequencyNoiseTexture; // 0x3c8
	FSoftObjectPath HighFrequencyNoiseTextureName; // 0x3d0
	UTexture2D* DefaultBokehTexture; // 0x3f0
	FSoftObjectPath DefaultBokehTextureName; // 0x3f8
	UTexture2D* DefaultBloomKernelTexture; // 0x418
	FSoftObjectPath DefaultBloomKernelTextureName; // 0x420
	UMaterial* WireframeMaterial; // 0x440
	FString WireframeMaterialName; // 0x448
	UMaterial* DebugMeshMaterial; // 0x458
	FSoftObjectPath DebugMeshMaterialName; // 0x460
	UMaterial* EmissiveMeshMaterial; // 0x480
	FSoftObjectPath EmissiveMeshMaterialName; // 0x488
	UMaterial* LevelColorationLitMaterial; // 0x4a8
	FString LevelColorationLitMaterialName; // 0x4b0
	UMaterial* LevelColorationUnlitMaterial; // 0x4c0
	FString LevelColorationUnlitMaterialName; // 0x4c8
	UMaterial* LightingTexelDensityMaterial; // 0x4d8
	FString LightingTexelDensityName; // 0x4e0
	UMaterial* ShadedLevelColorationLitMaterial; // 0x4f0
	FString ShadedLevelColorationLitMaterialName; // 0x4f8
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x508
	FString ShadedLevelColorationUnlitMaterialName; // 0x510
	UMaterial* RemoveSurfaceMaterial; // 0x520
	FSoftObjectPath RemoveSurfaceMaterialName; // 0x528
	UMaterial* VertexColorMaterial; // 0x548
	FString VertexColorMaterialName; // 0x550
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x560
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x568
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x578
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x580
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x590
	FString VertexColorViewModeMaterialName_RedOnly; // 0x598
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x5a8
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x5b0
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x5c0
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x5c8
	FSoftObjectPath DebugEditorMaterialName; // 0x5d8
	UMaterial* ConstraintLimitMaterial; // 0x5f8
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x600
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x608
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x610
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x618
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x620
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x628
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x630
	UMaterial* InvalidLightmapSettingsMaterial; // 0x638
	FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x640
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x660
	FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x668
	UMaterial* ArrowMaterial; // 0x688
	UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x690
	FSoftObjectPath ArrowMaterialName; // 0x698
	FLinearColor LightingOnlyBrightness; // 0x6b8
	TArray<FLinearColor> ShaderComplexityColors; // 0x6c8
	TArray<FLinearColor> QuadComplexityColors; // 0x6d8
	TArray<FLinearColor> LightComplexityColors; // 0x6e8
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x6f8
	TArray<FLinearColor> LODColorationColors; // 0x708
	TArray<FLinearColor> HLODColorationColors; // 0x718
	TArray<FLinearColor> StreamingAccuracyColors; // 0x728
	float MaxPixelShaderAdditiveComplexityCount; // 0x738
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x73c
	float MinLightMapDensity; // 0x740
	float IdealLightMapDensity; // 0x744
	float MaxLightMapDensity; // 0x748
	char bRenderLightMapDensityGrayscale : 1; // 0x74c
	float RenderLightMapDensityGrayscaleScale; // 0x750
	float RenderLightMapDensityColorScale; // 0x754
	FLinearColor LightMapDensityVertexMappedColor; // 0x758
	FLinearColor LightMapDensitySelectedColor; // 0x768
	TArray<FStatColorMapping> StatColorMappings; // 0x778
	UPhysicalMaterial* DefaultPhysMaterial; // 0x788
	FSoftObjectPath DefaultPhysMaterialName; // 0x790
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x7b0
	TArray<FClassRedirect> ActiveClassRedirects; // 0x7c0
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x7d0
	TArray<FStructRedirect> ActiveStructRedirects; // 0x7e0
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x7f0
	FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x7f8
	UTexture2D* BlueNoiseTexture; // 0x818
	FSoftObjectPath BlueNoiseTextureName; // 0x820
	UTexture2D* MiniFontTexture; // 0x840
	FSoftObjectPath MiniFontTextureName; // 0x848
	UTexture* WeightMapPlaceholderTexture; // 0x868
	FSoftObjectPath WeightMapPlaceholderTextureName; // 0x870
	UTexture2D* LightMapDensityTexture; // 0x890
	FSoftObjectPath LightMapDensityTextureName; // 0x898
	UGameViewportClient* GameViewport; // 0x8c0
	TArray<FString> DeferredCommands; // 0x8c8
	int32_t TickCycles; // 0x8d8
	int32_t GameCycles; // 0x8dc
	int32_t ClientCycles; // 0x8e0
	float NearClipPlane; // 0x8e4
	char bHardwareSurveyEnabled : 1; // 0x8e8
	char bSubtitlesEnabled : 1; // 0x8e8
	char bSubtitlesForcedOff : 1; // 0x8e8
	int32_t MaximumLoopIterationCount; // 0x8ec
	char bCanBlueprintsTickByDefault : 1; // 0x8f0
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x8f0
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x8f0
	char bEnableEditorPSysRealtimeLOD : 1; // 0x8f0
	char bSmoothFrameRate : 1; // 0x8f0
	char bUseFixedFrameRate : 1; // 0x8f0
	float FixedFrameRate; // 0x8f4
	FFloatRange SmoothedFrameRateRange; // 0x8f8
	UEngineCustomTimeStep* CustomTimeStep; // 0x908
	FSoftClassPath CustomTimeStepClassName; // 0x930
	UTimecodeProvider* TimecodeProvider; // 0x950
	FSoftClassPath TimecodeProviderClassName; // 0x978
	bool bGenerateDefaultTimecode; // 0x998
	FFrameRate GenerateDefaultTimecodeFrameRate; // 0x99c
	float GenerateDefaultTimecodeFrameDelay; // 0x9a4
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x9a8
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x9ac
	char bShouldGenerateLowQualityLightmaps : 1; // 0x9b0
	FColor C_WorldBox; // 0x9b4
	FColor C_BrushWire; // 0x9b8
	FColor C_AddWire; // 0x9bc
	FColor C_SubtractWire; // 0x9c0
	FColor C_SemiSolidWire; // 0x9c4
	FColor C_NonSolidWire; // 0x9c8
	FColor C_WireBackground; // 0x9cc
	FColor C_ScaleBoxHi; // 0x9d0
	FColor C_VolumeCollision; // 0x9d4
	FColor C_BSPCollision; // 0x9d8
	FColor C_OrthoBackground; // 0x9dc
	FColor C_Volume; // 0x9e0
	FColor C_BrushShape; // 0x9e4
	float StreamingDistanceFactor; // 0x9e8
	FDirectoryPath GameScreenshotSaveDirectory; // 0x9f0
	ETransitionType TransitionType; // 0xa00
	FString TransitionDescription; // 0xa08
	FString TransitionGameMode; // 0xa18
	float MeshLODRange; // 0xa28
	char bAllowMatureLanguage : 1; // 0xa2c
	float CameraRotationThreshold; // 0xa30
	float CameraTranslationThreshold; // 0xa34
	float PrimitiveProbablyVisibleTime; // 0xa38
	float MaxOcclusionPixelsFraction; // 0xa3c
	char bPauseOnLossOfFocus : 1; // 0xa40
	int32_t MaxParticleResize; // 0xa44
	int32_t MaxParticleResizeWarn; // 0xa48
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0xa50
	float NetClientTicksPerSecond; // 0xa60
	float DisplayGamma; // 0xa64
	float MinDesiredFrameRate; // 0xa68
	FLinearColor DefaultSelectedMaterialColor; // 0xa6c
	FLinearColor SelectedMaterialColor; // 0xa7c
	FLinearColor SelectionOutlineColor; // 0xa8c
	FLinearColor SubduedSelectionOutlineColor; // 0xa9c
	FLinearColor SelectedMaterialColorOverride; // 0xaac
	bool bIsOverridingSelectedColor; // 0xabc
	char bEnableOnScreenDebugMessages : 1; // 0xac0
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0xac0
	char bSuppressMapWarnings : 1; // 0xac0
	char bDisableAILogging : 1; // 0xac0
	uint32_t bEnableVisualLogRecordingOnStart; // 0xac4
	int32_t ScreenSaverInhibitorSemaphore; // 0xacc
	char bLockReadOnlyLevels : 1; // 0xad0
	FString ParticleEventManagerClassPath; // 0xad8
	float SelectionHighlightIntensity; // 0xae8
	float BSPSelectionHighlightIntensity; // 0xaec
	float SelectionHighlightIntensityBillboards; // 0xaf0
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xd40
	TArray<FString> ServerActors; // 0xd50
	TArray<FString> RuntimeServerActors; // 0xd60
	float NetErrorLogInterval; // 0xd70
	char bStartedLoadMapMovie : 1; // 0xd74
	int32_t NextWorldContextHandle; // 0xd90
};

struct UParticleModuleLocationPrimitiveSphere {
	FRawDistributionFloat StartRadius; // 0xb8
};

struct UMaterialExpressionChannelMaskParameter {
	EChannelMaskParameterColor MaskChannel; // 0x80
	FExpressionInput Input; // 0x84
};

struct UJoinSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct AgameMode {
	FName MatchState; // 0x2d8
	char bDelayedStart : 1; // 0x2e4
	int32_t NumSpectators; // 0x2e8
	int32_t NumPlayers; // 0x2ec
	int32_t NumBots; // 0x2f0
	float MinRespawnDelay; // 0x2f4
	int32_t NumTravellingPlayers; // 0x2f8
	ULocalMessage* EngineMessageClass; // 0x300
	TArray<APlayerState*> InactivePlayerArray; // 0x308
	float InactivePlayerStateLifeSpan; // 0x318
	int32_t MaxInactivePlayers; // 0x31c
	bool bHandleDedicatedServerReplays; // 0x320
};

struct ABandwidthTestActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x230
};

struct UGizmoLocalVec2ParameterSource {
	FVector2D Value; // 0x50
	FGizmoVec2ParameterChange LastChange; // 0x58
};

struct UMaterialExpressionFresnel {
	FExpressionInput ExponentIn; // 0x48
	float Exponent; // 0x64
	FExpressionInput BaseReflectFractionIn; // 0x68
	float BaseReflectFraction; // 0x84
	FExpressionInput Normal; // 0x88
};

struct UMovieScene3DTransformSection {
	FMovieSceneTransformMask TransformMask; // 0xe8
	FMovieSceneFloatChannel Translation[0x3]; // 0xf0
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d0
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b0
	FMovieSceneFloatChannel ManualWeight; // 0x690
	bool bUseQuaternionInterpolation; // 0x734
};

struct UScreenBase {
	bool isAnimationDone; // 0x30
	UGFxObject* ScreenObject; // 0x38
	UScreenController* _screenController; // 0x40
};

struct UOutlineReveal {
	TArray<ADBDPlayer*> _affectedCharacters; // 0x70
};

struct UAutoDestroySubsystem {
	TArray<AActor*> ActorsToPoll; // 0x40
};

struct UNetworkSettings {
	char bVerifyPeer : 1; // 0x48
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x48
	int32_t MaxRepArraySize; // 0x4c
	int32_t MaxRepArrayMemory; // 0x50
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x58
};

struct USynth2DSlider {
	float ValueX; // 0x128
	float ValueY; // 0x12c
	FDelegate ValueXDelegate; // 0x130
	FDelegate ValueYDelegate; // 0x144
	FSynth2DSliderStyle WidgetStyle; // 0x158
	FLinearColor SliderHandleColor; // 0x438
	bool IndentHandle; // 0x448
	bool locked; // 0x449
	float StepSize; // 0x44c
	bool IsFocusable; // 0x450
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x458
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x468
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x478
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x488
	FMulticastInlineDelegate OnValueChangedX; // 0x498
	FMulticastInlineDelegate OnValueChangedY; // 0x4a8
};

struct UCharacterInventoryComponent {
	TArray<ACollectable*> _inventory; // 0x100
	TArray<UItemAddon*> _generalAddons; // 0x110
	TArray<ACollectable*> _backpackInventory; // 0x120
	TArray<UItemAddon*> _allAddons; // 0x130
};

struct UMediaComponent {
	UMediaTexture* MediaTexture; // 0xb8
	UMediaPlayer* MediaPlayer; // 0xc0
};

struct AReverseBearTrapRemover {
	TArray<int32_t> _keys; // 0x330
	UMapActorComponent* _mapActor; // 0x390
};

struct UUMGAtlEventItemWidget {
	UImage* SquareImageBackground; // 0x300
	UImage* SquareRarityBackground; // 0x308
	UImage* SquareIcon; // 0x310
	UImage* PortraitImageBackground; // 0x318
	UImage* PortraitRarityBackground; // 0x320
	UImage* PortraitIcon; // 0x328
	UTextBlock* NameText; // 0x330
	UTextBlock* QuantityText; // 0x338
	UCanvasPanel* PortraitCanvas; // 0x340
	UCanvasPanel* SquareCanvas; // 0x348
	TArray<FEventItemsContentTypeUIData> ContentTypeUIData; // 0x350
};

struct UUMGRewardPopupLayout {
	UHorizontalBox* TopHorizontalBox; // 0x300
	UHorizontalBox* BottomHorizontalBox; // 0x308
	UUMGRewardSlotTutorialPopupRewardWidget* FirstCharacter; // 0x310
	UUMGRewardSlotTutorialPopupRewardWidget* SecondCharacter; // 0x318
	UUMGRewardSlotTutorialPopupRewardWidget* ThirdCharacter; // 0x320
	UUMGRewardSlotTutorialPopupRewardWidget* FourthCharacter; // 0x328
	UUMGRewardSlotTutorialPopupRewardWidget* FifthCharacter; // 0x330
	UUMGRewardSlotTutorialPopupRewardWidget* AuricCells; // 0x338
	UUMGRewardSlotTutorialPopupRewardWidget* IridescentShards; // 0x340
	UUMGRewardSlotTutorialPopupRewardWidget* BloodPoints; // 0x348
	FRewardLayoutWidgetToGenerate TopWidgetToGenerate; // 0x350
	FRewardLayoutWidgetToGenerate BottomWidgetToGenerate; // 0x3e0
};

struct AAIController {
	char bStartAILogicOnPossess : 1; // 0x2e8
	char bStopAILogicOnUnposses : 1; // 0x2e8
	char bLOSflag : 1; // 0x2e8
	char bSkipExtraLOSChecks : 1; // 0x2e8
	char bAllowStrafe : 1; // 0x2e8
	char bWantsPlayerState : 1; // 0x2e8
	char bSetControlRotationFromPawnOrientation : 1; // 0x2e8
	UPathFollowingComponent* PathFollowingComponent; // 0x2f0
	UBrainComponent* BrainComponent; // 0x2f8
	UAIPerceptionComponent* PerceptionComponent; // 0x300
	UPawnActionsComponent* ActionsComp; // 0x308
	UBlackboardComponent* Blackboard; // 0x310
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x318
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x320
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x328
};

struct UBTDecorator_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x70
	float CooldownDuration; // 0x7c
	bool bAddToExistingDuration; // 0x80
};

struct UAimOffsetSurvivorSubAnimInstance {
	float _pitch; // 0x4f0
	float _yaw; // 0x4f4
	float _yawInterpolated; // 0x4f8
	bool _allowLookAt; // 0x4fc
	bool _isUsingAimItem; // 0x4fd
	bool _isInjured; // 0x4fe
	bool _isCrawling; // 0x4ff
	bool _isIdle; // 0x500
	bool _isDrasticYawChangeDetected; // 0x501
	float _yawInterpolationSpeed; // 0x504
	float _yawDeadzoneStart; // 0x508
	float _yawClampValue; // 0x50c
	float _yawDrasticChangeUpperLimit; // 0x510
	float _yawDrasticChangeLowerLimit; // 0x514
	float _yawDrasticChangeInterpolationSpeed; // 0x518
	UCurveFloat* _yawInterpolateEaseIn; // 0x520
	UCurveFloat* _yawInterpolateEaseOut; // 0x528
	float _yawInterpolationEaseInLength; // 0x530
	float _yawInterpolationEaseOutDistance; // 0x534
	bool _isYawInDeadZone; // 0x538
	float _currentTargetYaw; // 0x53c
	float _yawAcceleration; // 0x540
	float _yawAccelerationTime; // 0x544
};

struct UBaseKillerAnimInstance {
	ASlasherPlayer* _owningKiller; // 0x4e8
	bool _firstPersonView; // 0x4f0
};

struct UDataAsset {
	UDataAsset* NativeClass; // 0x30
};

struct UAISkill_FindInteractable_StatusEffect {
	FGameplayTag RequiredPerkFlag; // 0x118
	bool InvertCondition; // 0x124
};

struct USoundNodeSwitch {
	FName IntParameterName; // 0x50
};

struct UHooksWithSurvivorRestrictedPlacementAreaStrategy {
	FDBDTunableRowHandle RestrictedSphericalRadius; // 0x70
	bool _isRestrictionLingeringEnabled; // 0x98
	FDBDTunableRowHandle _restrictionLingerTime; // 0xa0
	bool _useSphericalZoneForBasementHooks; // 0xcc
	TArray<FVector> RestrictedSphericalLocations; // 0xe8
};

struct UUMGFriendSearchBarWidget {
	UEditableTextBox* InputTextField; // 0x330
	UUMGBaseButtonWidget* SearchButton; // 0x338
};

struct UBTTask_SetRandomNavPoint {
	FBlackboardKeySelector BBFromLocation; // 0x78
	FBlackboardKeySelector BBToLocation; // 0xa8
	float MinAroundRadius; // 0xd8
	float MaxAroundRadius; // 0xdc
	int32_t MaxNbAttempts; // 0xe0
	UNavigationQueryFilter* FilterClass; // 0xe8
};

struct UDemogorgonHuskAnimInstance {
	float _teleportDuration; // 0x270
	float _teleportExitPlayRate; // 0x274
	bool _isSlowerExit; // 0x278
	UAnimSequence* _huskPortalSlowerExit; // 0x280
	UAnimSequence* _huskPortalExit; // 0x288
	UAnimMontage* _demogorgonPortalExit; // 0x290
	UAnimMontage* _demogorgonPortalEntry; // 0x298
	APawn* _owningPawn; // 0x2a0
	TWeakObjectPtr<UPortalPlacerStateComponent> _demogorgonPortalPlacerState; // 0x2a8
};

struct ULogoutCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UDeathbound {
	float _distanceFromRescuedSurvivorForOblivious[0x3]; // 0x3d0
	float _activationDuration; // 0x3dc
	float _rescueDistanceFromKillerToActivate; // 0x3e0
	float _revealLocationDuration; // 0x3e8
	bool _unhook; // 0x3ec
	bool _fromDyingState; // 0x3ed
	TArray<UStatusEffect*> _obliviousStatusEffects; // 0x3f0
	TArray<ADBDPlayer*> _survivorsToReveal; // 0x410
};

struct UOffTheRecord {
	float _activationDurationLevels[0x3]; // 0x3d0
};

struct AK25AnimationFollowerActor {
	USkeletalMeshComponent* _skeletalMesh; // 0x230
	UAnimationMontageSlave* _montageFollower; // 0x238
	UMontagePlayer* _montagePlayer; // 0x240
};

struct UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x30
	FDynamicPropertyPath SourcePath; // 0x38
	FName DestinationProperty; // 0x60
};

struct UAkSwitchInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct UConnectionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UAnimSequence {
	int32_t NumFrames; // 0xb0
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb8
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd8
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xe0
	EAdditiveAnimationType AdditiveAnimType; // 0x158
	EAdditiveBasePoseType RefPoseType; // 0x159
	UAnimSequence* RefPoseSeq; // 0x160
	int32_t RefFrameIndex; // 0x168
	FName RetargetSource; // 0x16c
	EAnimInterpolationType Interpolation; // 0x178
	bool bEnableRootMotion; // 0x179
	ERootMotionRootLock RootMotionRootLock; // 0x17a
	bool bForceRootLock; // 0x17b
	bool bUseNormalizedRootMotionScale; // 0x17c
	bool bRootMotionSettingsCopiedFromMontage; // 0x17d
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x180
};

struct UDatasmithCommonTessellationOptions {
	FDatasmithTessellationOptions Options; // 0x30
};

struct UHasPlayerReachedWiggleFillPercentCondition {
	bool _isWigglePercentReached; // 0xec
};

struct UActivateK24PowerInteraction {
	FDBDTunableRowHandle _interactionViewPitchMax; // 0x6e8
	FDBDTunableRowHandle _interactionViewPitchMin; // 0x710
	FDBDTunableRowHandle _maximumTimeToTriggerRegularAttack; // 0x738
};

struct UK25ChainStrike_IsPlayerPressingInputCondition {
	EInputInteractionType _inputType; // 0x38
};

struct UK25WeaponAnimInstance {
	bool _hasDownedTargetHoldingLamentConfiguration; // 0x328
};

struct USpectatorBeaconState {
	FName SessionName; // 0x30
	int32_t NumConsumedReservations; // 0x3c
	int32_t MaxReservations; // 0x40
	bool bRestrictCrossConsole; // 0x44
	TArray<FSpectatorReservation> Reservations; // 0x48
};

struct UDestructibleComponent {
	char bFractureEffectOverride : 1; // 0x6d0
	TArray<FFractureEffect> FractureEffects; // 0x6d8
	bool bEnableHardSleeping; // 0x6e8
	float LargeChunkThreshold; // 0x6ec
	FMulticastInlineDelegate OnComponentFracture; // 0x700
};

struct ULightComponent {
	float Temperature; // 0x260
	float MaxDrawDistance; // 0x264
	float MaxDistanceFadeRange; // 0x268
	char bUseTemperature : 1; // 0x26c
	int32_t ShadowMapChannel; // 0x270
	float MinRoughness; // 0x278
	float SpecularScale; // 0x27c
	float ShadowResolutionScale; // 0x280
	float ShadowBias; // 0x284
	float ShadowSlopeBias; // 0x288
	float ShadowSharpen; // 0x28c
	float ContactShadowLength; // 0x290
	char ContactShadowLengthInWS : 1; // 0x294
	char InverseSquaredFalloff : 1; // 0x294
	char CastTranslucentShadows : 1; // 0x294
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x294
	char bAffectDynamicIndirectLighting : 1; // 0x294
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x294
	FLightingChannels LightingChannels; // 0x298
	UMaterialInterface* LightFunctionMaterial; // 0x2a0
	FVector LightFunctionScale; // 0x2a8
	UTextureLightProfile* IESTexture; // 0x2b8
	char bUseIESBrightness : 1; // 0x2c0
	float IESBrightnessScale; // 0x2c4
	float LightFunctionFadeDistance; // 0x2c8
	float DisabledBrightness; // 0x2cc
	char bEnableLightShaftBloom : 1; // 0x2d0
	float BloomScale; // 0x2d4
	float BloomThreshold; // 0x2d8
	float BloomMaxBrightness; // 0x2dc
	FColor BloomTint; // 0x2e0
	bool bUseRayTracedDistanceFieldShadows; // 0x2e4
	float RayStartOffsetDepthScale; // 0x2e8
	char bVisibleInReflectionCaptures : 1; // 0x2ec
};

struct UUVProjectionTool {
	UUVProjectionToolProperties* BasicProperties; // 0x98
	UUVProjectionAdvancedProperties* AdvancedProperties; // 0xa0
	UExistingMeshMaterialProperties* MaterialSettings; // 0xa8
	TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xb0
	UMaterialInstanceDynamic* CheckerMaterial; // 0xc0
	TArray<UTransformGizmo*> TransformGizmos; // 0xc8
	TArray<UTransformProxy*> TransformProxies; // 0xd8
};

struct UPawnObserver {
	APawn* _pawn; // 0xd8
};

struct UMaterialExpressionRound {
	FExpressionInput Input; // 0x48
};

struct UGizmoWorldAxisSource {
	FVector Origin; // 0x38
	int32_t AxisIndex; // 0x44
};

struct UGameAssetLibrary {
	UDBDGameInstance* _gameInstance; // 0xb0
};

struct UIncreaseZombiesSpeedStatusEffect {
	float _zombieSpeedAdditive; // 0x350
};

struct UOniCustomizationItemAnimInstance {
	bool _isInDemonMode; // 0x270
};

struct USlasherAnimInstance {
	FMulticastInlineDelegate OnFootTrapped; // 0x270
	bool _isCrouched; // 0x280
	bool _isRevvingChainsaw; // 0x281
	bool _isAttackSuccessMontagePlaying; // 0x282
	bool _isCamOn; // 0x283
	bool _isAttacking; // 0x284
	bool _isAnyMontagePlaying; // 0x285
	bool _isFrenzy; // 0x286
	bool _isFrenzyCD; // 0x287
	bool _isInParadise; // 0x288
	bool _enableArmOverrideTier3; // 0x289
	bool _isRingingBell; // 0x28a
	bool _isCarrying; // 0x28b
	FVector _firstPersonCarryOffset; // 0x28c
	FVector _firstPersonCarryOffsetLookingDown; // 0x298
	bool _isPassivePhaseWalking; // 0x2a4
	bool _isActivePhaseWalking; // 0x2a5
	bool _isInAir; // 0x2a6
	bool _isVaultingToFall; // 0x2a7
	bool _isSpectator; // 0x2a8
	bool _firstPersonView; // 0x2a9
	bool _isIdle; // 0x2aa
	bool _validSlasher; // 0x2ab
	float _animDirection; // 0x2ac
	float _animSpeed; // 0x2b0
	float _animPitch; // 0x2b4
	float _animTurning; // 0x2b8
	float _animYaw; // 0x2bc
	float _pelvisHeight; // 0x2c0
	float _idleTime; // 0x2c4
	int32_t _directionSwitch; // 0x2c8
	FVector _leftClearFrontSpaceVector; // 0x2cc
	FVector _rightClearFrontSpaceVector; // 0x2d8
	FVector _velocity; // 0x2e4
	FVector _rightFootEffectorLocation; // 0x2f0
	FVector _leftFootEffectorLocation; // 0x2fc
	FRotator _meshRotation; // 0x308
	TArray<UAnimMontage*> _attackSuccessAnimations; // 0x318
	TArray<UAnimMontage*> _camOnAnimations; // 0x328
	ASlasherPlayer* _mySlasher; // 0x338
	FTagStateBool _isVaultingToFallState; // 0x340
	EInteractionAnimation _interactionType; // 0x370
	UPortalPlacerStateComponent* _demogorgonPortalPlacerState; // 0x378
	float _demogorgonTeleportDuration; // 0x380
	UChargedAttackStateComponent* _demogorgonChargedAttackStateComponent; // 0x388
	bool _isDemogorgonCharging; // 0x390
	float _demogorgonChargingPercent; // 0x394
	UOniDemonModeAttackStateComponent* _oniAttackState; // 0x398
	bool _isOniCharging; // 0x3a0
	EOniAttackType _oniAttackType; // 0x3a1
	float _oniChargeDuration; // 0x3a4
	EAttackSubstate _previousAttackSubstate; // 0x3a8
	EAttackSubstate _attackSubstate; // 0x3a9
	UEvilWithinComponent* _evilWithinComponent; // 0x3b0
	UFrenzyComponent* _frenzyComponent; // 0x3b8
	UPhaseWalkingComponent* _phaseWalkingComponent; // 0x3c0
	UArmIKSensorComponent* _armIKSensorComponent; // 0x3c8
};

struct UInvalidationBox {
	bool bCanCache; // 0x140
	bool CacheRelativeTransforms; // 0x141
};

struct UCoreSpectateBarWidget {
	FMulticastInlineDelegate _leaveButtonClickDelegate; // 0x2f8
	FMulticastInlineDelegate _leftArrowClickDelegate; // 0x308
	FMulticastInlineDelegate _rightArrowClickDelegate; // 0x318
};

struct AEscapeBlocker {
	UBoxComponent* _camperBlocker; // 0x238
	UBoxComponent* _playerDetectionZone; // 0x240
};

struct UUMGCustomizationTooltipContentWidget {
	UUMGHtmlRichText* ItemDescription; // 0x300
	UUMGCustomizationInfoWidget* OutfitInformation; // 0x308
	UUMGCustomizationInfoWidget* RoleInformation; // 0x310
	UUMGCustomizationInfoWidget* ReplacementInformation; // 0x318
	UUMGCustomizationItemPriceWidget* AuricCellsPrice; // 0x320
	UUMGCustomizationItemPriceWidget* IridescentShardsPrice; // 0x328
};

struct AK22Power {
	UChargeableComponent* _releaseConjoinedTwinChargeable; // 0x4e0
	UChargeableComponent* _possessConjoinedTwinChargeable; // 0x4e8
	AConjoinedTwin* _conjoinedTwin; // 0x508
	AConjoinedTwin* _conjoinedTwinParadise; // 0x510
	UPowerChargeComponent* _powerCharge; // 0x518
	UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress; // 0x520
	FDBDTunableRowHandle _powerMaxCharge; // 0x528
	AConjoinedTwin* _conjoinedTwinClass; // 0x550
	FDBDTunableRowHandle _powerRechargeRate; // 0x570
	FDBDTunableRowHandle _timeBeforeAutoDestroy; // 0x598
	FDBDTunableRowHandle _timeBeforeRecallAvailable; // 0x5c0
};

struct UMovieSceneCaptureProtocolBase {
	EMovieSceneCaptureProtocolState State; // 0x58
};

struct UThrowInteraction {
	UCurveFloat* _throwCancelledSpeedCurve; // 0x6d8
	float _throwCancellationExitTime; // 0x6e0
};

struct UGizmoAxisIntervalParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x50
	float MinParameter; // 0x60
	float MaxParameter; // 0x64
};

struct UPolyEditExtrudeProperties {
	EPolyEditExtrudeDirection Direction; // 0x58
};

struct UHillbillyChainsawAttack {
	FGameplayTag _chainsawHitGameEventTag; // 0x3b8
	FGameplayTag _chainsawAttemptGameEventTag; // 0x3c4
};

struct UCustomWidgetWrapperInitializer {
	UCustomWidgetWrapper* ListeningWrapper; // 0x260
};

struct UMaterialExpressionArccosine {
	FExpressionInput Input; // 0x48
};

struct UCollectableCollection {
	TArray<ACollectable*> _collectables; // 0xb8
};

struct UStatusEffectCollectionComponent {
	TArray<UStatusEffect*> _array; // 0xb8
	TArray<UStatusEffect*> _local_oldArray; // 0xc8
};

struct UUMGAtlantaEventsElement {
	UVerticalBox* ImageBox; // 0x300
	UTextBlock* ElementName; // 0x308
	UUMGPromoPackItemWidget* CustomizationWidget; // 0x310
};

struct ULegIKSurvivorSubAnimInstance {
	FVector _leftFootOffset; // 0x4f0
	FVector _rightFootOffset; // 0x4fc
	FVector _pelvisOffset; // 0x508
	bool _isIdle; // 0x514
	bool _isCrouched; // 0x515
	FRotator _rightFootDeltaRotator; // 0x518
	FRotator _leftFootDeltaRotator; // 0x524
	UAnimCollection* AnimCollection; // 0x530
	FName _floorJoint; // 0x538
	float _pelvisOffsetTreshold; // 0x544
	FFloatRange _pelvisOffsetRange; // 0x548
	FFloatRange _pelvisOffsetRangeCrouched; // 0x558
	float _pelvisOffsetInterpolationSpeed; // 0x568
	FFloatRange _footOffsetRange; // 0x56c
	FFloatRange _footOffsetRangeCrouched; // 0x57c
	float _footOffsetInterpolationSpeed; // 0x58c
	FFloatRange _footPitchDeltaRange; // 0x590
	UBaseGroundDetectorComponent* _leftFootGroundDetector; // 0x5a0
	UBaseGroundDetectorComponent* _rightFootGroundDetector; // 0x5a8
	float maxLocalHeightForPlanting; // 0x5b0
	ULocomotionPredictor* _locomotionPredictor; // 0x5f0
};

struct ARectLight {
	URectLightComponent* RectLightComponent; // 0x240
};

struct ASplineMeshActor {
	USplineMeshComponent* SplineMeshComponent; // 0x230
};

struct UAddon_TheBlight_20 {
	float _survivorInRangeDistance; // 0x298
	float _survivorRevealTime; // 0x29c
};

struct ADefaultPawn {
	float BaseTurnRate; // 0x290
	float BaseLookUpRate; // 0x294
	UPawnMovementComponent* MovementComponent; // 0x298
	USphereComponent* CollisionComponent; // 0x2a0
	UStaticMeshComponent* MeshComponent; // 0x2a8
	char bAddDefaultMovementBindings : 1; // 0x2b0
};

struct UBloodPact {
	bool _dyingToInjured; // 0x3e8
	bool _fullHealthStateOnly; // 0x3e9
	float _hasteEffectRange; // 0x3ec
	float _hasteEffectMovementSpeedIncrease[0x3]; // 0x3f0
	UStatusEffect* _ownerStatusEffect; // 0x400
	UStatusEffect* _obsessionStatusEffect; // 0x408
	UStatusEffect* _ownerHasteStatusEffect; // 0x410
	UStatusEffect* _otherPlayerHasteStatusEffect; // 0x418
	ADBDPlayer* _otherPlayer; // 0x420
};

struct UK25P02 {
	float _totemAuraRevealRadius[0x3]; // 0x440
	bool _totemBlockerHasLifetime; // 0x44c
	float _totemBlockerDuration[0x3]; // 0x450
	TArray<FDBDPlayerTotemPair> _cursedSurvivors; // 0x468
	TArray<ADBDPlayer*> _hookedSurvivors; // 0x488
	TArray<ATotem*> _previouslyBoundTotems; // 0x498
	FDBDPlayerTotemPair _lastPlayerTotemPair; // 0x4a8
};

struct UEditableTextWidgetStyle {
	FEditableTextStyle EditableTextStyle; // 0x38
};

struct APalletTracker {
	APallet* _procedurallySpawnedPallet; // 0x230
	APallet* _dreamPallet; // 0x238
	USceneComponent* _indicatorLocation; // 0x240
};

struct ALightmassPortal {
	ULightmassPortalComponent* PortalComponent; // 0x230
};

struct UAssetExportTask {
	UObject* Object; // 0x30
	UExporter* Exporter; // 0x38
	FString Filename; // 0x40
	bool bSelected; // 0x50
	bool bReplaceIdentical; // 0x51
	bool bPrompt; // 0x52
	bool bAutomated; // 0x53
	bool bUseFileArchive; // 0x54
	bool bWriteEmptyFiles; // 0x55
	TArray<UObject*> IgnoreObjectList; // 0x58
	UObject* Options; // 0x68
	TArray<FString> Errors; // 0x70
};

struct UAsyncActionLoadPrimaryAsset {
	FMulticastInlineDelegate COMPLETED; // 0x80
};

struct UUMGAtlantaEventsTab {
	FString _eventId; // 0x430
	UTextBlock* HotTagText; // 0x440
	UTextBlock* NewTagText; // 0x448
};

struct UAddon_TheBlight_18 {
	float _survivorInRangeDistance; // 0x2a8
	float _hinderedSeconds; // 0x2ac
};

struct UK25SurvivorChainAttachmentComponent {
	AK25SurvivorChainAttachmentAnchor* _attachmentAnchorClass; // 0xe8
	TArray<FK25SurvivorChainAttachmentData> _survivorAnchorData; // 0xf0
	UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategyClass; // 0x100
	TArray<UInteractionDefinition*> _interruptableInteractionClasses; // 0x108
	FDBDTunableRowHandle _maximumNumberOfChainsAttached; // 0x118
	TArray<AK25SurvivorChainAttachmentAnchor*> _chainAttachmentAnchors; // 0x140
	TArray<TWeakObjectPtr<AK25Chain>> _chainsAttached; // 0x150
	UChargeableComponent* _removeChainChargeableComponent; // 0x160
	UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategy; // 0x170
	UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent; // 0x178
};

struct UInterpTrackInstSound {
	float LastUpdatePosition; // 0x30
	UAudioComponent* PlayAudioComp; // 0x38
};

struct UMaterialExpressionConstant2Vector {
	float R; // 0x48
	float G; // 0x4c
};

struct UARTrackedQRCode {
	FString QRCode; // 0x100
	int32_t Version; // 0x110
};

struct USpiritDynamicAccessoryAnimInstance {
	bool _isPassivePhaseWalkHusk; // 0x280
};

struct UMovieSceneNiagaraSystemSpawnSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UGizmoBaseComponent {
	FLinearColor Color; // 0x428
	float HoverSizeMultiplier; // 0x438
	float PixelHitDistanceThreshold; // 0x43c
};

struct UHexCrowdControl {
	float _windowVaultBlockDuration[0x3]; // 0x440
};

struct UAICharacterRepairGeneratorBehaviour {
	ADBDPlayer* _aiPlayer; // 0x68
	ADBDAIPlayerController* _aiPlayerController; // 0x70
	UInteractor* _targetInteractor; // 0x78
	UAICharacterRepairGeneratorBehaviourData* _characterRepairGeneratorData; // 0x80
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance {
	int32_t LightIndex; // 0x48
};

struct UUMGAtlantaSeasonEndPopup {
	UUMGTallyRankBanner* OldSurvivorRankBanner; // 0x3e8
	UUMGTallyRankBanner* NewSurvivorRankBanner; // 0x3f0
	UUMGTallyRankBanner* OldKillerRankBanner; // 0x3f8
	UUMGTallyRankBanner* NewKillerRankBanner; // 0x400
	UHorizontalBox* NewRankHorizontalBox; // 0x408
	UHorizontalBox* OldRankHorizontalBox; // 0x410
	FTimerHandle _fadeOutTimerHandle; // 0x418
	float _timerBeforeFadeOutAnimation; // 0x420
};

struct UCoreExternalEffectsWidget {
	FVector2D GridSlotSize; // 0x2f8
	float AddonScaleRatio; // 0x300
	int32_t SpacingBetweenRows; // 0x304
	int32_t SpacingPerks; // 0x308
	int32_t SpacingAddons; // 0x30c
	int32_t SpacingBetweenPerksAndAddons; // 0x310
	UCorePerkWidget* PerkWidgetClass; // 0x318
	UCoreAddonWidget* AddonWidgetClass; // 0x320
	UGridPanel* Container; // 0x328
	TArray<FPerkViewData> _perkData; // 0x338
	TMap<FName, UCorePerkWidget*> _perkWidgets; // 0x348
	TArray<UCorePerkWidget*> _perkPool; // 0x398
	TMap<FName, TScriptInterface<IPerkViewInterface>> _perkViewInterfaces; // 0x3a8
	TArray<FAddonViewData> _addonData; // 0x3f8
	TMap<FName, UCoreAddonWidget*> _addonWidgets; // 0x408
	TArray<UCoreAddonWidget*> _addonPool; // 0x458
	TMap<FName, TScriptInterface<IAddonViewInterface>> _addonViewInterfaces; // 0x468
	TMap<FName, FTimerHandle> _timerHandleMap; // 0x4b8
	TMap<FName, USpacer*> _spacerWidgets; // 0x508
	TArray<USpacer*> _spacerPool; // 0x558
};

struct UHexRetribution {
	float _obliviousDurationByLevels[0x3]; // 0x440
	float _auraRevealDuration; // 0x44c
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x38
};

struct UPartyBeaconState {
	FName SessionName; // 0x30
	int32_t NumConsumedReservations; // 0x3c
	int32_t MaxReservations; // 0x40
	int32_t NumTeams; // 0x44
	int32_t NumPlayersPerTeam; // 0x48
	FName TeamAssignmentMethod; // 0x4c
	int32_t ReservedHostTeamNum; // 0x58
	int32_t ForceTeamNum; // 0x5c
	bool bRestrictCrossConsole; // 0x60
	bool bEnableRemovalRequests; // 0x61
	TArray<FPartyReservation> Reservations; // 0x68
};

struct UAudioFXComponent {
	UPrimitiveComponent* _audioAmbientDetector; // 0xb8
};

struct UAREnvironmentCaptureProbeTexture {
	EARTextureType TextureType; // 0x118
	float Timestamp; // 0x11c
	FGuid ExternalTextureGuid; // 0x120
	FVector2D Size; // 0x130
};

struct UMovieScene3DPathSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct UParticleModuleLocationBoneSocket {
	ELocationBoneSocketSource SourceType; // 0x38
	FVector UniversalOffset; // 0x3c
	TArray<FLocationBoneSocketInfo> SourceLocations; // 0x48
	ELocationBoneSocketSelectionMethod SelectionMethod; // 0x58
	char bUpdatePositionEachFrame : 1; // 0x5c
	char bOrientMeshEmitters : 1; // 0x5c
	char bInheritBoneVelocity : 1; // 0x5c
	float InheritVelocityScale; // 0x60
	FName SkelMeshActorParamName; // 0x64
	int32_t NumPreSelectedIndices; // 0x70
};

struct UAIPerceptionComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb8
	UAISense* DominantSense; // 0xc8
	AAIController* AIOwner; // 0xe0
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x168
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x178
};

struct UOnEventBaseAddon {
	FGameplayTag _eventToListenTo; // 0x298
};

struct UEditorActorVisualization {
	TSoftClassPtr<UObject> ActorVisualization; // 0x210
	FTransform RelativeTransform; // 0x240
};

struct UKillerIntroComponent {
	float _percentOfCameraPanInProgressRequiredToHideKiller; // 0xb8
	float _cameraPanInAmountToSquish; // 0xbc
	EFPVTransitionStrategy _cameraPanInHidingStrategy; // 0xc0
	float _startKillerIntroDelay; // 0xc4
};

struct APrecomputedVisibilityOverrideVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x268
	TArray<AActor*> OverrideInvisibleActors; // 0x278
	TArray<FName> OverrideInvisibleLevels; // 0x288
};

struct ASlasherPlayer {
	FMulticastInlineDelegate OnOffensiveAction; // 0x1118
	FVector PutDownTraceLocation; // 0x1128
	FName DefaultSlasherPower; // 0x1134
	float LoudNoiseDisplayTime; // 0x1140
	FVector TargetPriorityFactor; // 0x1144
	bool ShouldDisplayAttackZones; // 0x1150
	ACamperExposerInstance* CamperExposer; // 0x1158
	EKillerMoodInfluence KillerMoodInfluence; // 0x1160
	TArray<EKillerAbilities> KillerAbilities; // 0x1168
	UKillerSoundCuesComponent* KillerSoundCuesComponent; // 0x1178
	bool ShowKillerPowerDebugInfo; // 0x1180
	bool HasDamagedGeneratorSinceHook; // 0x1181
	FMulticastInlineDelegate OnStalkModeChangedEvent; // 0x1188
	TWeakObjectPtr<UAkComponent> _audioComponent; // 0x11b0
	UDBDNavModifierComponent* _terrorNavModifierComponent; // 0x11b8
	float _slasherLightIntensity; // 0x11c0
	float _defaultAmountToSquish; // 0x11c4
	TMap<ADBDPlayer*, FTargetFocusTimer> _stalkTimers; // 0x11d0
	UStillnessTrackerComponent* _stillnessTracker; // 0x1220
	UAimAssistComponent* _aimAssistComponent; // 0x1228
	FDBDTimer _recentlyCloakedTimer; // 0x1230
	FDBDTimer _flashlightBlindEvasionScoreTimer; // 0x1258
	FDBDTimer _flashlightBurnoutEvasionScoreTimer; // 0x1280
	TMap<ADBDPlayer*, FAnimationMontageDescriptor> _predictedCamperHitMontages; // 0x12a8
	USlasherTREmitterComponent* _terrorRadiusEmitter; // 0x1300
	ULoudNoiseHUDIndicator* _loudNoiseIndicator; // 0x1310
	USlasherHitsWhileCarryingTrackerComponent* _hitsWhileCarryingTracker; // 0x1318
	float _stealthIncreaseRate; // 0x1320
	float _stealthDecreaseRate; // 0x1324
	FDateTime _stillnessStartTime; // 0x1328
	FTagStateBool _isInStalkMode; // 0x1398
	bool _isKilling; // 0x1488
	int8_t _allowedKillCount; // 0x1489
	int8_t _allowedKillAfterStrugglePhase; // 0x148a
	bool _allowedKillLastSurvivor; // 0x148b
	int32_t _cachedBloodlustTier; // 0x1494
	uint32_t _killerPowerDebugFlags; // 0x14a0
	FGameplayTag _presenceTag; // 0x14a4
	FGameplayTagContainer _persistantStateTags; // 0x14b0
	FGameplayTagContainer _animGameplayTags; // 0x14d0
	bool _enableKillerCrouchInput; // 0x14f0
	bool _canStartAttackWhileCrouched; // 0x14f1
	ACamperPlayer* _carriedCamper; // 0x14f8
	UMoriComponent* _moriComponent; // 0x1500
	UHitValidatorComponent* _hitValidator; // 0x1508
	UHitValidatorConfigurator* _hitValidationConfigurator; // 0x1510
	UDBDAttackerComponent* _attackerComponent; // 0x1518
	EAttackType _basicAttackType; // 0x1530
	UArmIKSensorComponent* _armIKSensorComponent; // 0x1538
	ACamperPlayer* _survivorBeingKilled; // 0x1540
	UFirstPersonViewComponent* _firstPersonViewComponent; // 0x1560
	UKillerIntroComponent* _killerIntroComponent; // 0x1568
	UKillerBlindingFXComponent* _blindingFXComponent; // 0x1570
	UKillerRedStainUpdateStrategy* _redStainUpdateStrategy; // 0x1580
	FName _squishFactorParameter; // 0x1588
	USceneComponent* _attackZonePivot; // 0x1598
	USlasherStunnableComponent* _slasherStunnableComponent; // 0x15a0
	float _turnInPlaceThresholdAngle; // 0x15a8
};

struct UUMGCommandDebugButton {
	UTextBlock* CommandLabel; // 0x300
	UButton* CommandButton; // 0x308
	FString CommandName; // 0x310
};

struct UAISense_Hearing {
	TArray<FAINoiseEvent> NoiseEvents; // 0x90
	float SpeedOfSoundSq; // 0xa0
};

struct UTemplatePresenter {
	UUserWidget* TemplateWidgetClass; // 0x108
};

struct ALandscapeMeshProxyActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x230
};

struct AAtlantaLobbyLevel {
	FLightingChannels ForefrontLightingChannel; // 0x2c0
	FLightingChannels BackgroundLightingChannel; // 0x2c1
	AAtlantaOfflineLobbyCamera* _offlineLobbyCamera; // 0x2c8
	AActor* _roleSelectionLobbyCameraPosition; // 0x2d0
	AActor* _characterSelectionLobbyCameraPosition; // 0x2d8
	AActor* _loadoutSelectionLobbyCameraPosition; // 0x2e0
};

struct UMaterialExpressionRuntimeVirtualTextureReplace {
	FExpressionInput Default; // 0x48
	FExpressionInput VirtualTextureOutput; // 0x64
};

struct UUMGSettingTutorialContextWidget {
	UUMGSettingContextButton* SurvivorTutorialButton; // 0x318
	UUMGSettingContextButton* KillerTutorialButton; // 0x320
	UUMGSettingContextButton* SurvivorCinematicButton; // 0x328
	UUMGSettingContextButton* KillerCinematicButton; // 0x330
	UUMGSettingContextButton* LoreCinematicButton; // 0x338
};

struct UConjoinedTwinAnimInstance {
	AConjoinedTwin* _owningConjoinedTwin; // 0x4e8
	bool _firstPersonView; // 0x4f0
	float _forwardVelocity; // 0x4f4
	float _lateralVelocity; // 0x4f8
	EInteractionAnimation _interactionType; // 0x4fc
	bool _isInAir; // 0x4fd
	bool _isIdle; // 0x4fe
	float _idleTime; // 0x500
	bool _isAttacking; // 0x504
	UDBDAttackerComponent* _attackerComponent; // 0x508
	UTwinAttachmentComponent* _twinAttachmentComponent; // 0x510
	UTwinLockerBlockerComponent* _twinLockerBlockerComponent; // 0x518
	float _animYaw; // 0x520
	float _animPitch; // 0x524
	bool _isSpectator; // 0x528
	float _animDirection; // 0x52c
	float _animSpeed; // 0x530
	bool _isAttachedToSister; // 0x534
	bool _isAttachedToSurvivor; // 0x535
	bool _isAttachedToFemaleSurvivor; // 0x536
	bool _isChargingTwinJump; // 0x537
	bool _isPossessing; // 0x538
	bool _isWakingUpFromPossess; // 0x539
	bool _isDormant; // 0x53a
	bool _isBeingAutoPossessedAfterRelease; // 0x53b
	bool _isAttachedToLocker; // 0x53c
	EAttackSubstate _attackState; // 0x53d
};

struct UCannibalChainsawAttackObstructSubstate {
	FTagStateBool _isInTantrum; // 0x128
};

struct UCinematicManager {
	TArray<FCinematic> _cinematicQueue; // 0x48
};

struct AVideoThumbnailPlayer {
	UMediaPlayer* MediaPlayer; // 0x250
	UMediaSoundComponent* SoundComponent; // 0x258
	UUserWidget* VideoPlayerWidget; // 0x260
	UAudioComponent* _audioComponent; // 0x268
	TSoftObjectPtr<UMediaSource> _source; // 0x288
};

struct ULookAtTargetKillerSubAnimInstance {
	float _maxDistanceForTargetDetection; // 0x4f8
	FName _headSocket; // 0x4fc
	FName _rootSocket; // 0x508
	float _preferredMinLookAtTime; // 0x514
	float _distanceScoreFactor; // 0x518
	float _angleScoreFactor; // 0x51c
	float _sameTargetScoreFactor; // 0x520
	float _yawToTarget; // 0x524
	float _pitchToTarget; // 0x528
	bool _hasVisibleTarget; // 0x52c
};

struct UUMGScrollListPageButton {
	FMulticastInlineDelegate OnClicked; // 0x300
	int32_t pageIndex; // 0x310
	UButton* ActionButton; // 0x318
	UImage* SelectedImage; // 0x320
};

struct UKillerAnimInstance {
	FVector _leftHandIKLocationFPV; // 0x4f8
	FVector _rightHandIKLocationFPV; // 0x504
	bool _isAnyMontagePlaying; // 0x510
	bool _isCarrying; // 0x511
	FVector _firstPersonCarryOffset; // 0x514
	FVector _firstPersonCarryOffsetLookingDown; // 0x520
	bool _isInAir; // 0x52c
	bool _isSpectator; // 0x52d
	bool _isIdle; // 0x52e
	float _animDirection; // 0x530
	float _animSpeed; // 0x534
	float _animPitch; // 0x538
	float _animYaw; // 0x53c
	float _pelvisHeight; // 0x540
	float _idleTime; // 0x544
	int32_t _directionSwitch; // 0x548
	bool _isAttacking; // 0x54c
	bool _isPlayingAnyMontage; // 0x54d
	bool _isKilling; // 0x54e
	FVector _leftClearFrontSpaceVector; // 0x550
	FVector _rightClearFrontSpaceVector; // 0x55c
	FVector _velocity; // 0x568
	FVector _rightFootEffectorLocation; // 0x574
	FVector _leftFootEffectorLocation; // 0x580
	EInteractionAnimation _interactionType; // 0x58c
	UArmIKSensorComponent* _armIKSensorComponent; // 0x590
	EAttackSubstate _attackState; // 0x598
	float _forwardVelocity; // 0x59c
	float _lateralVelocity; // 0x5a0
};

struct UDatasmithActorTemplate {
	TSet<FName> Layers; // 0x38
	TSet<FName> Tags; // 0x88
};

struct UAIMoveToInteractData {
	AActor* _interactActor; // 0x30
	AActor* _targetPositionActor; // 0x38
	ECharacterMovementTypes _characterMovementTypes; // 0x40
};

struct UParticleModuleVectorFieldLocal {
	UVectorField* VectorField; // 0x38
	FVector RelativeTranslation; // 0x40
	FRotator RelativeRotation; // 0x4c
	FVector RelativeScale3D; // 0x58
	float Intensity; // 0x64
	float Tightness; // 0x68
	char bIgnoreComponentTransform : 1; // 0x6c
	char bTileX : 1; // 0x6c
	char bTileY : 1; // 0x6c
	char bTileZ : 1; // 0x6c
	char bUseFixDT : 1; // 0x6c
};

struct UTerrorRadiusReceiverComponent {
	FMulticastInlineDelegate OnIsInTerrorRadiusChanged; // 0xb8
	UCurveFloat* _trVerticalDistanceFactor; // 0xc8
	float _heartbeatMasterVolumeInterpolationSpeed; // 0xd0
};

struct UMaterialExpressionDecalMipmapLevel {
	FExpressionInput TextureSize; // 0x48
	float ConstWidth; // 0x64
	float ConstHeight; // 0x68
};

struct UMultiSceneComponentPointProvider {
	TArray<FComponentReference> _sceneReferences; // 0x30
	TArray<USceneComponent*> _sceneComponents; // 0x40
};

struct UAtlantaRitualsManager {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x30
};

struct ABaseCamperCollectable {
	USpherePlayerOverlapComponent* _interactable; // 0x4c8
	UInteractor* _collectableInteractor; // 0x4d0
	UDropItemInteraction* _dropInteraction; // 0x4d8
	UCollectItemInteraction* _collectInteraction; // 0x4e0
	USphereComponent* _infectablePrimitive; // 0x4e8
	UDBDOutlineComponent* _outlineComponent; // 0x4f0
	UMaterialHelper* _materialHelper; // 0x4f8
	USurvivorCollectableOutlineUpdateStrategy* _survivorCollectableOutlineUpdateStrategy; // 0x500
};

struct UParticleModuleMeshRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct UContaminationSubAnimInstance {
	bool _isContaminated; // 0x4f0
	bool _isInjectingSerumSelf; // 0x4f1
	bool _isInjectingSerumOther; // 0x4f2
	bool _isBeingInjectedWithSerum; // 0x4f3
	bool _isBeingHealed; // 0x4f4
	bool _isFirstContaminationHit; // 0x4f5
};

struct AFlickeringLight {
	FlickeringLightType _lightComponentType; // 0x258
	EDetailMode _detailLevelBeforeCastShadows; // 0x25c
	FPerPlatformBool _castShadow; // 0x25d
	FBHVRPerDetailModeBool _isCastingShadow; // 0x260
	FBHVRPerDetailModeFloat _maxDrawDistance; // 0x300
	FBHVRPerDetailModeFloat _maxDistanceFadeRange; // 0x3a0
	FBHVRPerDetailModeBool _castCinematicShadowsOnly; // 0x440
	float _innerConneAngle; // 0x4e0
	float _outerConneAngle; // 0x4e4
	float _sourceLength; // 0x4e8
	float _sourceRadius; // 0x4ec
	float _intensity; // 0x4f0
	bool _generatorActivated; // 0x4f4
	bool _isTimelineSpeedRandom; // 0x4f5
	float _maximumTimelimeSpeed; // 0x4f8
	float _minimumTimelimeSpeed; // 0x4fc
	FBHVRPerDetailModeBool _secondaryLightVisibility; // 0x500
	float _secondaryLightIntensity; // 0x5a0
	FVector _secondaryLightTransform; // 0x5a4
	FRotator _secondaryLightRotation; // 0x5b0
	float _secondaryLightAttenuationRadius; // 0x5bc
	FLinearColor _secondaryLightColor; // 0x5c0
	float _secondaryLightSpecularScale; // 0x5d0
	ULightIntensityTimelineComponent* _lightIntensityTimeline; // 0x5d8
	UPointLightComponent* _pointLightComponent; // 0x5e0
	UPointLightComponent* _secondaryPointLightComponent; // 0x5e8
	URectLightComponent* _rectLightComponent; // 0x5f0
	USpotLightComponent* _spotLightComponent; // 0x5f8
};

struct UFootstepsPerceptionComponent {
	TArray<FGameplayTag> _allowFootstepsSeenPerkFlags; // 0xb8
	TArray<FGameplayTag> _disallowFootstepsSeenPerkFlags; // 0xc8
};

struct UChainPlayerMovementStatusEffect {
	FDBDTunableRowHandle _baseMovementSpeedMultiplier; // 0x350
	FDBDTunableRowHandle _collisionMovementSpeedMultiplier; // 0x378
	ARifleChain* _chain; // 0x3a0
};

struct UParticleModulePivotOffset {
	FVector2D PivotOffset; // 0x38
};

struct UDatasmithVREDSceneImportData {
	bool bMergeNodes; // 0x50
	bool bOptimizeDuplicatedNodes; // 0x51
	bool bImportMats; // 0x52
	FString MatsPath; // 0x58
	bool bImportVar; // 0x68
	bool bCleanVar; // 0x69
	FString VarPath; // 0x70
	bool bImportLightInfo; // 0x80
	FString LightInfoPath; // 0x88
	bool bImportClipInfo; // 0x98
	FString ClipInfoPath; // 0xa0
};

struct UUMGCharacterInfoWidget {
	UScrollBox* CharacterInfoScrollBox; // 0x300
	UUMGCharacterScrollingInfoWidget* CharacterScrollingInfoWidget; // 0x308
	UCanvasPanel* CharacterDLCPanel; // 0x310
	UImage* CharacterBackgroundImage; // 0x318
	UTextBlock* characterName; // 0x320
	FText _characterDifficultyText; // 0x328
	FString _characterDLCText; // 0x340
	bool _isKiller; // 0x350
	FSlateColor _easyColor; // 0x358
	FSlateColor _intermediaryColor; // 0x380
	FSlateColor _hardColor; // 0x3a8
	FSlateColor _currentColor; // 0x3d0
	FText _characterDLCTitle; // 0x3f8
	FMulticastInlineDelegate _onTeachableTooltipTriggeredLongPressEvent; // 0x410
	FMulticastInlineDelegate _onPowerItemTooltipTriggeredLongPressEvent; // 0x420
};

struct USlider {
	float Value; // 0x128
	FDelegate ValueDelegate; // 0x12c
	float MinValue; // 0x140
	float MaxValue; // 0x144
	FSliderStyle WidgetStyle; // 0x148
	EOrientation Orientation; // 0x4b8
	FLinearColor SliderBarColor; // 0x4bc
	FLinearColor SliderHandleColor; // 0x4cc
	bool IndentHandle; // 0x4dc
	bool locked; // 0x4dd
	bool MouseUsesStep; // 0x4de
	bool RequiresControllerLock; // 0x4df
	float StepSize; // 0x4e0
	bool IsFocusable; // 0x4e4
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4e8
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4f8
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x508
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x518
	FMulticastInlineDelegate OnValueChanged; // 0x528
};

struct UUMGHudEditorScreen {
	UUMGHudEditorLayoutWidget* _hudEditorLayoutWidget; // 0x260
	UUMGHudEditorVersionWidget* _versionSwapWidget; // 0x268
	TMap<EPlayerRole, UUMGHudEditorLayoutScreen*> _storedLayoutScreens; // 0x270
	UUMGHudEditorLayoutScreen* _currentLayoutScreen; // 0x2c0
	UAkAudioEvent* _onDropOverlapSound; // 0x2c8
};

struct ANavLinkProxy_Interaction {
	TMap<EPlayerRole, FNavLinkInteractPlayerSetup> PlayerSetups; // 0x2f0
	float InteractionStartTimeLimit; // 0x340
	TMap<ADBDPlayer*, float> _playersInteractionInputAtTime; // 0x348
};

struct APhysicsBasedProjectile {
	UPhysicsBasedProjectileMovementComponent* Movement; // 0x2b0
};

struct ULandscapeSplineControlPoint {
	FVector Location; // 0x30
	FRotator Rotation; // 0x3c
	float Width; // 0x48
	float LayerWidthRatio; // 0x4c
	float SideFalloff; // 0x50
	float LeftSideFalloffFactor; // 0x54
	float RightSideFalloffFactor; // 0x58
	float LeftSideLayerFalloffFactor; // 0x5c
	float RightSideLayerFalloffFactor; // 0x60
	float EndFalloff; // 0x64
	TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x68
	TArray<FLandscapeSplineInterpPoint> Points; // 0x78
	FBox Bounds; // 0x88
	UControlPointMeshComponent* LocalMeshComponent; // 0xa8
};

struct ALevelSequenceMediaController {
	ALevelSequenceActor* Sequence; // 0x238
	UMediaComponent* MediaComponent; // 0x240
	float ServerStartTimeSeconds; // 0x248
};

struct UChaosSolverSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x50
};

struct UInterpTrackColorProp {
	FName PropertyName; // 0x98
};

struct ULoadAsyncBankData {
	UAkAudioBank* Bank; // 0x30
	USoundBankLoader* SoundBankLoader; // 0x38
};

struct USingleGateBlockerEffect {
	float _distanceThreshold; // 0x388
	AEscapeDoor* _gate; // 0x390
	bool _isInRange; // 0x398
};

struct UClothingAssetBase {
	FString ImportedFilePath; // 0x30
	FGuid AssetGuid; // 0x40
};

struct UPostEventAsync {
	FMulticastInlineDelegate COMPLETED; // 0x38
};

struct UDBDAggregateParticleSystemComponent {
	float CullAngle; // 0x6a8
	float EndFadeDistance; // 0x6ac
	TSet<USceneComponent*> LocatorComponentCache; // 0x6b0
	bool PendingReset; // 0x700
};

struct UDownloadingTextureTask {
	UAsyncTaskDownloadCacheImage* _downloadingTask; // 0x30
	FString _url; // 0x38
	UTexture2DDynamic* _downloadedTexture; // 0x60
};

struct AK25Chain {
	FMulticastInlineDelegate OnAcquiredChanged; // 0x238
	UCurveFloat* _attachedToProjectileInfluenceCurve; // 0x248
	UCurveFloat* _reelbackInfluenceCurve; // 0x250
	UCurveFloat* _offsetMultiplierInfluenceCurve; // 0x258
	FDBDTunableRowHandle _reelingBackSpeed; // 0x2b0
	float _chainOffsetMinValue; // 0x2d8
	float _chainOffsetMaxValue; // 0x2dc
	float _reelbackChainOffsetMinValue; // 0x2e0
	float _reelbackChainOffsetMaxValue; // 0x2e4
	float _chainInstanceSpacing; // 0x2e8
	float _quickChainOffsetTimerLength; // 0x2ec
	float _reachingSurvivorAnchorTime; // 0x2f0
	FVector _chainScale; // 0x2f4
	float _chainOffsetTimerLength; // 0x300
	TArray<FVector> _currentChainPoints; // 0x308
	bool _isAcquiredFromPool; // 0x318
	float _sphereTraceRadius; // 0x31c
	FVector _chainStartPosition; // 0x320
	FVector _reelBackPosition; // 0x32c
	FVector _reelbackStartPosition; // 0x338
	AK25Projectile* _projectileAttachedTo; // 0x348
	TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor> _survivorAnchorAttachedTo; // 0x350
	TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor> _targetAnchorToReach; // 0x358
	USplineComponent* _chainSplineComponent; // 0x360
	UInstancedStaticMeshComponent* _chainInstancedMesh; // 0x368
	UCurveFloat* _currentInfluenceCurve; // 0x370
	FVector _chainCurveOffset; // 0x378
	EK25ChainState _chainState; // 0x384
	FFastTimer _curveOffsetStrengthTimer; // 0x388
	FFastTimer _reelbackTimer; // 0x3b8
	FFastTimer _reachSurvivorAnchorPositionTimer; // 0x3e8
	TArray<FVector> _forcedPositions; // 0x418
	EK25ChainCreationStrategy _chainCreationStrategy; // 0x428
};

struct ULandingPageTabsDataAsset {
	TMap<EStorefrontState, FLandingPageTabData> BigButtonsData; // 0x38
	TMap<EStorefrontState, FLandingPageTabData> MediumButtonsData; // 0x88
	TMap<EStorefrontState, FLandingPageTabData> SmallButtonsData; // 0xd8
};

struct UUMGLevelBannerWidget {
	UButton* TooltipButton; // 0x308
	UTextBlock* PlayerLevelText; // 0x310
	UTextBlock* PlayerDevotionText; // 0x318
	UTextBlock* PlayerCurrentExperienceText; // 0x320
	UTextBlock* PlayerNextLevelExperienceText; // 0x328
	UProgressBar* XPProgressBar; // 0x330
	UHorizontalBox* XPTextContainer; // 0x338
	UAkAudioEvent* OnLongPressSound; // 0x340
	UImage* TooltipHighlightPicture; // 0x348
};

struct UTotemBoundPerk {
	ETotemState TotemBoundState; // 0x3e8
	bool _doNotBindToTotemOnInit; // 0x3e9
	TArray<ATotem*> _boundTotems; // 0x3f0
	TArray<ATotem*> _local_boundTotems; // 0x400
	TArray<ATotem*> _authorityPrevTotemActors; // 0x410
	int32_t _numTotemsToBind; // 0x420
};

struct URichTextBlock {
	FText Text; // 0x148
	UDataTable* TextStyleSet; // 0x160
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x168
	bool bOverrideDefaultStyle; // 0x178
	FTextBlockStyle DefaultTextStyleOverride; // 0x180
	float MinDesiredWidth; // 0x408
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x698
};

struct UInputActionDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x30
};

struct UPortalOutlineUpdateStrategy {
	FLinearColor _survivorAuraColor; // 0xc0
};

struct UMaterialExpressionTangentOutput {
	FExpressionInput Input; // 0x48
};

struct UPawnAction_Sequence {
	TArray<UPawnAction*> ActionSequence; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0
	UPawnAction* RecentActionCopy; // 0xb8
};

struct ACharacter {
	USkeletalMeshComponent* Mesh; // 0x290
	UCharacterMovementComponent* CharacterMovement; // 0x298
	UCapsuleComponent* CapsuleComponent; // 0x2a0
	FBasedMovementInfo BasedMovement; // 0x2a8
	FBasedMovementInfo ReplicatedBasedMovement; // 0x2d8
	float AnimRootMotionTranslationScale; // 0x308
	FVector BaseTranslationOffset; // 0x30c
	FQuat BaseRotationOffset; // 0x320
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x330
	float ReplayLastTransformUpdateTimeStamp; // 0x334
	char ReplicatedMovementMode; // 0x338
	bool bInBaseReplication; // 0x339
	float CrouchedEyeHeight; // 0x33c
	char bIsCrouched : 1; // 0x340
	char bProxyIsJumpForceApplied : 1; // 0x340
	char bPressedJump : 1; // 0x340
	char bClientUpdating : 1; // 0x340
	char bClientWasFalling : 1; // 0x340
	char bClientResimulateRootMotion : 1; // 0x340
	char bClientResimulateRootMotionSources : 1; // 0x340
	char bSimGravityDisabled : 1; // 0x340
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x341
	char bServerMoveIgnoreRootMotion : 1; // 0x341
	char bWasJumping : 1; // 0x341
	float JumpKeyHoldTime; // 0x344
	float JumpForceTimeRemaining; // 0x348
	float ProxyJumpForceStartedTime; // 0x34c
	float JumpMaxHoldTime; // 0x350
	int32_t JumpMaxCount; // 0x354
	int32_t JumpCurrentCount; // 0x358
	FMulticastInlineDelegate OnReachedJumpApex; // 0x360
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x380
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x390
	FRootMotionSourceGroup SavedRootMotion; // 0x3a0
	FRootMotionMovementParams ClientRootMotionParams; // 0x3e0
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x420
	FRepRootMotionMontage RepRootMotion; // 0x430
	bool UseMovementPrediction; // 0x4c8
};

struct APlayerStart {
	FName PlayerStartTag; // 0x258
};

struct UMeshSimplificationSettings {
	FName MeshReductionModuleName; // 0x48
};

struct UInterpToMovementComponent {
	float Duration; // 0xf8
	char bPauseOnImpact : 1; // 0xfc
	bool bSweep; // 0x100
	ETeleportType TeleportType; // 0x101
	EInterpToBehaviourType BehaviourType; // 0x102
	bool bCheckIfStillInWorld; // 0x103
	char bForceSubStepping : 1; // 0x104
	FMulticastInlineDelegate OnInterpToReverse; // 0x108
	FMulticastInlineDelegate OnInterpToStop; // 0x118
	FMulticastInlineDelegate OnWaitBeginDelegate; // 0x128
	FMulticastInlineDelegate OnWaitEndDelegate; // 0x138
	FMulticastInlineDelegate OnResetDelegate; // 0x148
	float MaxSimulationTimeStep; // 0x158
	int32_t MaxSimulationIterations; // 0x15c
	TArray<FInterpControlPoint> ControlPoints; // 0x160
};

struct UInjectSerumInteraction {
	FTunableStat _injectSerumKillerInstinctTime; // 0x6d8
	FGameplayTag _scoreEvent; // 0x760
	FDBDTunableRowHandle _serumApplyHeal; // 0x770
};

struct UCoreStartSequenceWidget {
	float FadeInDuration; // 0x2f8
	float FadeOutDuration; // 0x2fc
	EEasingType FadeInEasing; // 0x300
	EEasingType FadeOutEasing; // 0x301
	TMap<EThemeColorId, FLinearColor> BorderColors; // 0x308
	FLinearColor DefaultColor; // 0x358
	UDBDTextBlock* ThemeNameTextfield; // 0x368
	UImage* SeparatorImage; // 0x370
	UDBDTextBlock* MapNameTextfield; // 0x378
	FMulticastInlineDelegate StartSequenceFadeOutDelegate; // 0x380
};

struct UParticleSystem {
	float UpdateTime_FPS; // 0x38
	float UpdateTime_Delta; // 0x3c
	float WarmupTime; // 0x40
	float WarmupTickRate; // 0x44
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

struct URankTooltipWidget {
	UTextBlock* RankInfoLabel; // 0x338
	UTextBlock* ResetInfoLabel; // 0x340
	UGridPanel* RankInfoSlotsContainer; // 0x348
	UUMGPlayerRankInfo* SurvivorRankInfoWidget; // 0x350
	UUMGPlayerRankInfo* KillerRankInfoWidget; // 0x358
};

struct UUMGAtlantaGenericEventTemplate {
	UHorizontalBox* RelatedItemsBox; // 0x300
	UUMGAtlantaEventsElement* EventsElementWBPReference; // 0x308
	UUMGPromoPackItemWidget* CustomizationWBPReference; // 0x310
	UUMGPromoPackItemWidget* CharacterWBPReference; // 0x318
};

struct AOfflineLobbyLevel {
	FVector _partyLobbyInviteButtonOffset; // 0x2b0
	TArray<TWeakObjectPtr<APlayerStart>> _roleSelectionCamperSpawns; // 0x2c0
	TArray<TWeakObjectPtr<APlayerStart>> _roleSelectionSlasherSpawns; // 0x2d0
	TWeakObjectPtr<ADisplayStand> _offlineLobbyLocalSlasherSpawn; // 0x2e0
	FVector _partyLobbyEmptySlotFxOffset; // 0x2e8
	TWeakObjectPtr<ADisplayStand> _offlineLobbyLocalCamperSpawn; // 0x2f4
	TArray<FVector> _partyLobbySlasherPOVTrackerOffsets; // 0x300
	TSoftClassPtr<UObject> _partyLobbyEmptySlotSilhouette; // 0x310
	TArray<TWeakObjectPtr<ADisplayStand>> _partyLobbySlasherDisplayStands; // 0x340
	TArray<TWeakObjectPtr<ADisplayStand>> _partyLobbyCamperDisplayStands; // 0x350
	TSoftClassPtr<UObject> _meatHookForCustomization; // 0x360
	TWeakObjectPtr<ATargetPoint> _meatHookSpawn; // 0x390
	TSoftClassPtr<UObject> _charmForCustomizationZoom; // 0x398
	TWeakObjectPtr<ATargetPoint> _camperCharmSpawn; // 0x3c8
	TWeakObjectPtr<ATargetPoint> _slasherCharmSpawn; // 0x3d0
	TMap<TWeakObjectPtr<ADisplayStand>, TWeakObjectPtr<ADBDMenuSilhouette>> _partyLobbyEmptySlotPawns; // 0x3d8
	TArray<ADBDMenuPlayer*> _destroyingPawns; // 0x470
};

struct UPlaneFalloff {
	float Magnitude; // 0xb8
	float MinRange; // 0xbc
	float MaxRange; // 0xc0
	float Default; // 0xc4
	float Distance; // 0xc8
	FVector Position; // 0xcc
	FVector Normal; // 0xd8
	EFieldFalloffType Falloff; // 0xe4
};

struct UChaosDestructionListener {
	char bIsCollisionEventListeningEnabled : 1; // 0x210
	char bIsBreakingEventListeningEnabled : 1; // 0x210
	char bIsTrailingEventListeningEnabled : 1; // 0x210
	FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x214
	FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x22c
	FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x244
	TSet<AChaosSolverActor*> ChaosSolverActors; // 0x260
	TSet<AGeometryCollectionActor*> GeometryCollectionActors; // 0x2b0
	FMulticastInlineDelegate OnCollisionEvents; // 0x300
	FMulticastInlineDelegate OnBreakingEvents; // 0x310
	FMulticastInlineDelegate OnTrailingEvents; // 0x320
};

struct UNavMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf8
	float FixedPathBrakingDistance; // 0x130
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x134
	char bUseAccelerationForPaths : 1; // 0x134
	char bUseFixedBrakingDistanceForPaths : 1; // 0x134
	FMovementProperties MovementState; // 0x135
	UObject* PathFollowingComp; // 0x138
};

struct ULightbornBlindFailedIndicatorCondition {
	float _conditionReevaluationTimerDurationAfterFailedBlind; // 0xe8
	bool _replicatedIsTrue; // 0xec
};

struct UMaterialExpressionFunctionOutput {
	FName OutputName; // 0x48
	FString Description; // 0x58
	int32_t SortPriority; // 0x68
	FExpressionInput A; // 0x6c
	char bLastPreviewed : 1; // 0x88
	FGuid ID; // 0x8c
};

struct USoundCue {
	char bPrimeOnLoad : 1; // 0x168
	USoundNode* FirstNode; // 0x170
	float VolumeMultiplier; // 0x178
	float PitchMultiplier; // 0x17c
	FSoundAttenuationSettings AttenuationOverrides; // 0x180
	float SubtitlePriority; // 0x520
	char bOverrideAttenuation : 1; // 0x528
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x528
	int32_t CookedQualityIndex; // 0x52c
	char bHasPlayWhenSilent : 1; // 0x530
};

struct ABaseTrap {
	bool _isTrapSet; // 0x4c8
};

struct UBTService_PushObjectFocus {
	FBlackboardKeySelector BBFocusObj; // 0x78
};

struct UMovieSceneCameraAnimTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x60
};

struct UPresenterGroupHandler {
	APresenterGroup* PresenterGroupClass; // 0xb8
	APresenterGroup* _presenterGroup; // 0xc0
};

struct UComponentDelegateBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x30
};

struct UDBDKeyDisplayInfo {
	FString PendingResetKeyBindingsData; // 0x30
	bool PendingResetMustBeGamepadKey; // 0x40
	TMap<FName, FKeyDisplayInfo> _keyDisplayInfoMap; // 0x48
	TMap<EInputInteractionType, FName> _interactionTypeToActionMap_Camper; // 0xe8
	TMap<EInputInteractionType, FName> _interactionTypeToActionMap_Slasher; // 0x138
};

struct URangeToActorsTrackerDefaultStrategy {
	AActor* _actorClass; // 0x70
};

struct UMovieSceneGeometryCacheTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x60
};

struct URespawningEventComponent {
	URespawnableStrategy* _respawnableStrategy; // 0xb8
	URespawnablePositioner* _respawnablePositioner; // 0xc0
};

struct ABrush {
	EBrushType BrushType; // 0x230
	FColor BrushColor; // 0x234
	int32_t PolyFlags; // 0x238
	char bColored : 1; // 0x23c
	char bSolidWhenSelected : 1; // 0x23c
	char bPlaceableFromClassBrowser : 1; // 0x23c
	char bNotForClientOrServer : 1; // 0x23c
	UModel* Brush; // 0x240
	UBrushComponent* BrushComponent; // 0x248
	char bInManipulation : 1; // 0x250
	TArray<FGeomSelection> SavedSelections; // 0x258
};

struct UBTDecorator_IsCamperState {
	FBlackboardKeySelector BBCamper; // 0x70
	ECamperDamageState damageState; // 0xa0
	EArithmeticKeyOperation DamageOp; // 0xa1
	ECamperImmobilizeState ImmobilizeState; // 0xa2
	EArithmeticKeyOperation ImmobilizeOp; // 0xa3
	EIsCamperStateOnFilter OnFilter; // 0xa4
	EArithmeticKeyOperation OnOthersFilterOp; // 0xa5
	int32_t NbOnOthersCampers; // 0xa8
};

struct UStoreScreenUMG {
	UUMGCustomizationScreenWidget* _customizationScreen; // 0x338
	UUMGAtlantaStoreScreen* _storeScreen; // 0x340
};

struct UTotemOutlineUpdateStrategy {
	FLinearColor _revealedColorToSurvivor; // 0x130
	FLinearColor _boonTotemRevealedColorToSurvivor; // 0x140
	UCurveLinearColor* _revealedColorToKiller; // 0x150
};

struct UDBDSphereReflectionCaptureSpawnerComponent {
	float InfluenceRadius; // 0x268
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x270
};

struct UGunslingerCameraTargetingStrategy {
	FName _cameraSocketName; // 0x50
	FName _survivorHarpoonSocketName; // 0x5c
};

struct UWindDirectionalSourceComponent {
	float Strength; // 0x210
	float Speed; // 0x214
	float MinGustAmount; // 0x218
	float MaxGustAmount; // 0x21c
	float Radius; // 0x220
	char bPointWind : 1; // 0x224
};

struct UVariantObjectBinding {
	FString CachedActorLabel; // 0x30
	FSoftObjectPath ObjectPtr; // 0x40
	LazyObjectProperty LazyObjectPtr; // 0x60
	TArray<UPropertyValue*> CapturedProperties; // 0x80
	TArray<FFunctionCaller> FunctionCallers; // 0x90
};

struct UMaterialExpressionAdd {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	float ConstA; // 0x80
	float ConstB; // 0x84
};

struct UAnimNotifyState_HideCustomizationAttachments {
	ECustomizationCategory Category; // 0x38
};

struct UAnimBoneCompressionCodec {
	FString Description; // 0x30
};

struct AAkSpotReflector {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x230
	FString EarlyReflectionAuxBusName; // 0x238
	UAkAcousticTexture* AcousticTexture; // 0x248
	float DistanceScalingFactor; // 0x250
	float Level; // 0x254
};

struct UScaleBoxSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UUMGAtlLandingPageStorefrontWidget {
	UUMGBaseButtonWidget* AtlantaRedeemCodeBtn; // 0x400
};

struct UEnvQueryGenerator_Donut {
	FAIDataProviderFloatValue InnerRadius; // 0x88
	FAIDataProviderFloatValue OuterRadius; // 0xc8
	FAIDataProviderIntValue NumberOfRings; // 0x108
	FAIDataProviderIntValue PointsPerRing; // 0x148
	FEnvDirection ArcDirection; // 0x188
	FAIDataProviderFloatValue ArcAngle; // 0x1a8
	bool bUseSpiralPattern; // 0x1e8
	UEnvQueryContext* Center; // 0x1f0
	char bDefineArc : 1; // 0x1f8
};

struct UAdjustableCooldownStatusEffect {
	FGameplayTag CooldownModifierType; // 0x350
};

struct UBasePoolableActorComponent {
	FMulticastInlineDelegate OnAcquiredChanged; // 0xc0
};

struct UGFxEngine {
	TArray<FGCReference> GCReferences; // 0x30
	int32_t RefCount; // 0x40
};

struct UMagicLeapMeshTrackerComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x218
	bool ScanWorld; // 0x228
	EMagicLeapMeshType MeshType; // 0x229
	UBoxComponent* BoundingVolume; // 0x230
	EMagicLeapMeshLOD LevelOfDetail; // 0x238
	float PerimeterOfGapsToFill; // 0x23c
	bool Planarize; // 0x240
	float DisconnectedSectionArea; // 0x244
	bool RequestNormals; // 0x248
	bool RequestVertexConfidence; // 0x249
	EMagicLeapMeshVertexColorMode VertexColorMode; // 0x24a
	TArray<FColor> BlockVertexColors; // 0x250
	FLinearColor VertexColorFromConfidenceZero; // 0x260
	FLinearColor VertexColorFromConfidenceOne; // 0x270
	bool RemoveOverlappingTriangles; // 0x280
	UMRMeshComponent* MRMesh; // 0x288
	int32_t BricksPerFrame; // 0x290
};

struct UOnlineHotfixManager {
	FString OssName; // 0x1e8
	FString HotfixManagerClassName; // 0x1f8
	FString DebugPrefix; // 0x208
	TArray<UObject*> AssetsHotfixedFromIniFiles; // 0x218
};

struct UMoriableComponent {
	TArray<UInteractionDefinition*> _moriInteractions; // 0xb8
};

struct UPawnSensingComponent {
	float HearingThreshold; // 0xb8
	float LOSHearingThreshold; // 0xbc
	float SightRadius; // 0xc0
	float SensingInterval; // 0xc4
	float HearingMaxSoundAge; // 0xc8
	char bEnableSensingUpdates : 1; // 0xcc
	char bOnlySensePlayers : 1; // 0xcc
	char bSeePawns : 1; // 0xcc
	char bHearNoises : 1; // 0xcc
	FMulticastInlineDelegate OnSeePawn; // 0xd8
	FMulticastInlineDelegate OnHearNoise; // 0xe8
	float PeripheralVisionAngle; // 0xf8
	float PeripheralVisionCosine; // 0xfc
};

struct ASkyAtmosphere {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x230
};

struct UBlightPowerStateHolding {
	FSecondaryInteractionProperties _secondaryInteractionProperties; // 0x180
	bool _allowNavigation; // 0x1b8
	float _dashSpeedForProjection; // 0x1bc
};

struct UBloodOrbCollection {
	TArray<ABloodOrb*> _bloodOrbs; // 0xb8
};

struct UParticleModuleTypeDataRibbon {
	int32_t MaxTessellationBetweenParticles; // 0x38
	int32_t SheetsPerTrail; // 0x3c
	int32_t MaxTrailCount; // 0x40
	int32_t MaxParticleInTrailCount; // 0x44
	char bDeadTrailsOnDeactivate : 1; // 0x48
	char bDeadTrailsOnSourceLoss : 1; // 0x48
	char bClipSourceSegement : 1; // 0x48
	char bEnablePreviousTangentRecalculation : 1; // 0x48
	char bTangentRecalculationEveryFrame : 1; // 0x48
	char bSpawnInitialParticle : 1; // 0x48
	ETrailsRenderAxisOption RenderAxis; // 0x4c
	float TangentSpawningScalar; // 0x50
	char bRenderGeometry : 1; // 0x54
	char bRenderSpawnPoints : 1; // 0x54
	char bRenderTangents : 1; // 0x54
	char bRenderTessellation : 1; // 0x54
	float TilingDistance; // 0x58
	float DistanceTessellationStepSize; // 0x5c
	char bEnableTangentDiffInterpScale : 1; // 0x60
	float TangentTessellationScalar; // 0x64
};

struct UCharacterDreamworldComponent {
	FMulticastInlineDelegate DreamStateChanged; // 0xb8
	AActor* _mobileDreamworldPostProcessClass; // 0xc8
	bool _isInDreamworld; // 0xd0
	APostProcessUpdate* _mobileDreamworldPostProcess; // 0xd8
};

struct UTeachableTooltipWidget {
	UTextBlock* SubTitleLabel; // 0x338
	UImage* HeaderSmoke; // 0x340
	UUMGHtmlRichText* EffectText; // 0x348
	UUMGHtmlRichText* AvailabilityText; // 0x350
};

struct UCorePerksContainerWidget {
	TArray<UCorePerkWidget*> PerkWidgets; // 0x2f8
	TArray<TScriptInterface<IPerkViewInterface>> _perkViewInterfaces; // 0x308
};

struct UArmIKSurvivorSubAnimInstance {
	FRotator _rightWristUpRotation; // 0x4f0
	FRotator _leftWristUpRotation; // 0x4fc
	FFloatRange _localWristYawRange; // 0x508
	FFloatRange _localWristPitchRange; // 0x518
	float _armInterpolationSpeed; // 0x528
	float _handInterpolationSpeed; // 0x52c
	float _alphaLerpTime; // 0x530
	float _reachPadding; // 0x534
	float _rightArmIKAlpha; // 0x538
	float _leftArmIKAlpha; // 0x53c
	EArmIkMode _armIkMode; // 0x540
	UArmDetectionFanComponent* _rightDetectionFan; // 0x548
	UArmDetectionFanComponent* _leftDetectionFan; // 0x550
	USkeletalMeshComponent* _meshComponent; // 0x558
};

struct UPlayMontageCallbackProxy {
	FMulticastInlineDelegate OnCompleted; // 0x30
	FMulticastInlineDelegate OnBlendOut; // 0x40
	FMulticastInlineDelegate OnInterrupted; // 0x50
	FMulticastInlineDelegate OnNotifyBegin; // 0x60
	FMulticastInlineDelegate OnNotifyEnd; // 0x70
};

struct UDefaultLevelSequenceInstanceData {
	AActor* TransformOriginActor; // 0x38
	FTransform TransformOrigin; // 0x40
};

struct ASplineAudioEmitterActor {
	USceneComponent* _root; // 0x230
	USplineComponent* _theSpline; // 0x238
	UAkComponent* _emitter; // 0x240
};

struct ADeathBedInteractable {
	USceneComponent* _root; // 0x338
	ACamperPlayer* _inDeathBedCamper; // 0x340
	UChargeableComponent* _rescueChargeableComponent; // 0x348
	USkeletalMeshComponent* _deathBedSkeletalMesh; // 0x350
	UBoxComponent* _interactionZone; // 0x358
	UBoxComponent* _playerOverlapZone; // 0x360
	UMontagePlayer* _montagePlayer; // 0x368
	UBoxComponent* _deathBedCollision; // 0x380
	UAnimationMontageSlave* _animationMontageSlave; // 0x3b0
	UAnimMontage* _montageToPlay; // 0x3b8
	FVector _rescuerSnapPosition; // 0x3c4
	UDeathBedAntiCampComponent* _deathBedAnticampComponent; // 0x3d0
	FDBDTunableRowHandle _anticampDrainCooldownTime; // 0x418
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x458
};

struct UPerk {
	FGameplayModifierData PerkLevelData[0x3]; // 0x280
	UBasePerkIconStrategy* PerkIconStrategyClass; // 0x340
	FMulticastInlineDelegate OnTokenCountChangedBP; // 0x348
	bool _isUsable; // 0x388
	bool BroadcastWhenApplicable; // 0x389
	bool BroadcastOnTimer; // 0x38a
	bool BroadcastCooldownTimer; // 0x38b
	bool BroadcastInactiveCooldownTimer; // 0x38c
	bool BroadcastAlways; // 0x38d
	UBasePerkIconStrategy* _perkIconStrategy; // 0x390
	FPerkInitializationData _perkInitializationData; // 0x398
	int32_t _tokenCount; // 0x3a4
	int32_t _maxTokenCount; // 0x3a8
	UTimerObject* _cooldownTimer; // 0x3b0
	UTimerObject* _hudIconTimer; // 0x3c0
};

struct UMaterialExpressionVirtualTextureFeatureSwitch {
	FExpressionInput No; // 0x48
	FExpressionInput Yes; // 0x64
};

struct UBlockableComponent {
	FBlockableReplicatedDatum _replicatedDatum; // 0xd0
	TSet<UBlockElement*> _blockElements; // 0xf0
};

struct UPaperTerrainComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x428
	bool bClosedSpline; // 0x430
	bool bFilledSpline; // 0x431
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x438
	int32_t RandomSeed; // 0x440
	float SegmentOverlapAmount; // 0x444
	FLinearColor TerrainColor; // 0x448
	int32_t ReparamStepsPerSegment; // 0x458
	ESpriteCollisionMode SpriteCollisionDomain; // 0x45c
	float CollisionThickness; // 0x460
	UBodySetup* CachedBodySetup; // 0x468
};

struct USourceEffectRingModulationPreset {
	FSourceEffectRingModulationSettings Settings; // 0x84
};

struct UBlueprintGeneratedClass {
	int32_t NumReplicatedProperties; // 0x240
	char bHasNativizedParent : 1; // 0x244
	char bHasCookedComponentInstancingData : 1; // 0x244
	TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x248
	TArray<UActorComponent*> ComponentTemplates; // 0x258
	TArray<UTimelineTemplate*> Timelines; // 0x268
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x278
	USimpleConstructionScript* SimpleConstructionScript; // 0x288
	UInheritableComponentHandler* InheritableComponentHandler; // 0x290
	UStructProperty* UberGraphFramePointerProperty; // 0x298
	UFunction* UberGraphFunction; // 0x2a8
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2b0
};

struct UAISenseConfig_Damage {
	UAISense_Damage* Implementation; // 0x50
};

struct UDefaultOutlineUpdateStrategy {
	FLinearColor _revealedColorToSurvivor; // 0xc0
	FLinearColor _revealedColorToKiller; // 0xd0
};

struct UEnvQueryTest_Project {
	FEnvTraceData ProjectionData; // 0x238
};

struct UVectorFieldComponent {
	UVectorField* VectorField; // 0x428
	float Intensity; // 0x430
	float Tightness; // 0x434
	char bPreviewVectorField : 1; // 0x438
};

struct UPlayerAnimInstance {
	ADBDPlayer* _owningPlayer; // 0x290
	UAnimEffectBlackBoard* _animEffectBlackBoard; // 0x298
	UAnimEffectHandler* _animEffectHandlerForSFX; // 0x2a0
	UAnimEffectHandler* _animEffectHandlerForVFX; // 0x2a8
	UAnimEffectHandler* _animEffectHandlerClassForSFX; // 0x2b0
	UAnimEffectHandler* _animEffectHandlerClassForVFX; // 0x2b8
	TArray<FTaggedAnimCollection> _taggedAnimCollections; // 0x2c0
	TMap<FGameplayTag, UAnimSequence*> _animations; // 0x2d0
	TMap<FGameplayTag, UBlendSpace*> _blendspaces; // 0x320
	TMap<FGameplayTag, UAimOffsetBlendSpace*> _aimoffsets; // 0x370
	TMap<FGameplayTag, UBlendSpace1D*> _blendspaces1d; // 0x3c0
	TMap<FGameplayTag, UAimOffsetBlendSpace1D*> _aimoffsets1d; // 0x410
	TMap<FGameplayTag, FAnimSequenceSelector> _selectors; // 0x460
	bool _isInParadise; // 0x4b0
	bool _isIntroCompleted; // 0x4b1
	bool _isLevelReadyToPlay; // 0x4b2
	FActivationDefinition _activationDefinition; // 0x4b8
};

struct UK25ControlledProjectileMovementComponent {
	FDBDTunableRowHandle _projectileBaseSpeed; // 0x260
	FDBDTunableRowHandle _baseProjectileMaximumDistance; // 0x288
	FDBDTunableRowHandle _projectileSpeedIncreaseTime; // 0x2b0
	FTunableStat _maximumTravelDistanceStat; // 0x2d8
	UCurveFloat* _projectileSpeedIncreaseMultiplier; // 0x358
	float _totaldistanceTravelled; // 0x360
};

struct UGeneratorEntityAnimInstance {
	bool IsCorrupted; // 0x270
	bool IsCorrupted_End; // 0x271
	bool IsUncorrupted; // 0x272
	bool IsUncorrupted_End; // 0x273
};

struct UDestructibleFractureSettings {
	int32_t CellSiteCount; // 0x30
	FFractureMaterial FractureMaterialDesc; // 0x34
	int32_t RandomSeed; // 0x58
	TArray<FVector> VoronoiSites; // 0x60
	int32_t OriginalSubmeshCount; // 0x70
	TArray<UMaterialInterface*> Materials; // 0x78
	TArray<FDestructibleChunkParameters> ChunkParameters; // 0x88
};

struct URancor {
	float _survivorRevealDuration; // 0x3d0
	float _killerRevealToObsessionDuration[0x3]; // 0x3d4
};

struct UUMGPurchaseCurrencyWidget {
	UTextBlock* PercentageDiscountText; // 0x300
	UImage* CurrencyIcon; // 0x308
	UTextBlock* PriceText; // 0x310
	UTextBlock* UndiscountedPrice; // 0x318
	UImage* CurrencyColorImage; // 0x320
	UOverlay* OriginalPriceOverlay; // 0x328
	UCanvasPanel* DiscountCanvas; // 0x330
	FSlateColor AffordableColor; // 0x338
	FSlateColor NotAffordableColor; // 0x360
};

struct URectLightComponent {
	float SourceWidth; // 0x3a8
	float SourceHeight; // 0x3ac
	float BarnDoorAngle; // 0x3b0
	float BarnDoorLength; // 0x3b4
	UTexture* SourceTexture; // 0x3b8
};

struct AEQSTestingPawn {
	UEnvQuery* QueryTemplate; // 0x4d8
	TArray<FEnvNamedValue> QueryParams; // 0x4e0
	TArray<FAIDynamicParam> QueryConfig; // 0x4f0
	float TimeLimitPerStep; // 0x500
	int32_t StepToDebugDraw; // 0x504
	EEnvQueryHightlightMode HighlightMode; // 0x508
	char bDrawLabels : 1; // 0x50c
	char bDrawFailedItems : 1; // 0x50c
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x50c
	char bShouldBeVisibleInGame : 1; // 0x50c
	char bTickDuringGame : 1; // 0x50c
	EEnvQueryRunMode QueryingMode; // 0x510
	FNavAgentProperties NavAgentProperties; // 0x518
};

struct UFlipFlop {
	float _recoveryProgressionConversionRatio[0x3]; // 0x3d0
	float _maxWiggleProgression[0x3]; // 0x3dc
};

struct UK24PowerAnimInstance {
	AK24Power* _k24Power; // 0x270
	ASlasherPlayer* _owningKiller; // 0x278
	bool _isInPowerMode; // 0x280
	bool _isChargingPower; // 0x281
	bool _isK24PowerAttacking; // 0x282
	bool _isRequestingPowerAttack; // 0x283
	float _tentacleLength; // 0x284
	bool _isFirstPersonView; // 0x288
	EAttackSubstate _attackSubstate; // 0x289
	bool _isIntroCompleted; // 0x28a
	bool _isLevelReadyToPlay; // 0x28b
	int32_t _powerLevel; // 0x28c
	float _forwardVelocity; // 0x290
	float _lateralVelocity; // 0x294
	bool _isKilling; // 0x298
};

struct UK25AnimInstance {
	bool _isTeleporting; // 0x5a8
	bool _isPossessingGateway; // 0x5a9
	bool _isSelectingGatewayLocation; // 0x5aa
};

struct UAutomationTestSettings {
	TArray<FString> EngineTestModules; // 0x30
	TArray<FString> EditorTestModules; // 0x40
	FSoftObjectPath AutomationTestmap; // 0x50
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x70
	TArray<FSoftObjectPath> AssetsToOpen; // 0x80
	FBuildPromotionTestSettings BuildPromotionTest; // 0x90
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x280
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2b0
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2c0
	TArray<FString> TestLevelFolders; // 0x2f0
	TArray<FExternalToolDefinition> ExternalTools; // 0x300
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x310
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x320
	FIntPoint DefaultScreenshotResolution; // 0x330
};

struct UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x128
};

struct UEditPivotTool {
	UEditPivotToolProperties* TransformProps; // 0xa0
	UEditPivotToolActionPropertySet* EditPivotActions; // 0xa8
	TArray<FEditPivotTarget> ActiveGizmos; // 0x180
};

struct UDeformMeshPolygonsTransformProperties {
	EGroupTopologyDeformationStrategy DeformationStrategy; // 0x58
	EQuickTransformerMode TransformMode; // 0x59
	bool bSelectFaces; // 0x5a
	bool bSelectEdges; // 0x5b
	bool bSelectVertices; // 0x5c
	bool bShowWireframe; // 0x5d
	bool bSnapToWorldGrid; // 0x5e
	EWeightScheme SelectedWeightScheme; // 0x60
	double HandleWeight; // 0x68
	bool bPostFixHandles; // 0x70
};

struct UUMGSequencePlayer {
	UWidgetAnimation* Animation; // 0x410
};

struct UUMGFriendButtonWidget {
	UCanvasPanel* InteractableButtonStatePanel; // 0x430
	UCanvasPanel* NonInteractableButtonStatePanel; // 0x438
	UTextBlock* NonInteractableExplanationText; // 0x440
	UTextBlock* NonInteractableActionText; // 0x448
	bool _isInteractable; // 0x450
	UImage* NonInteractableImage; // 0x458
	TMap<EFriendTypeButton, FSlateBrush> _nonInteractableImages; // 0x460
};

struct UCustomWidgetWrapper {
	FMulticastInlineDelegate OnVersion; // 0x150
	FGameplayTag ID; // 0x160
	UCustomWidgetWrapper* ManuallyParentWrapper; // 0x170
	TArray<UCustomWidgetWrapper*> ManuallyChildWrappers; // 0x178
	UCustomWidgetWrapperInitializer* InitializerWidget; // 0x188
};

struct UDBDWrapBoxSlot {
	FMargin Padding; // 0x40
	bool bFillEmptySpace; // 0x50
	float FillSpanWhenLessThan; // 0x54
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UMaterialExpressionTextureBase {
	UTexture* Texture; // 0x48
	EMaterialSamplerType SamplerType; // 0x50
	char IsDefaultMeshpaintTexture : 1; // 0x51
};

struct UPaperFlipbook {
	float FramesPerSecond; // 0x30
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x38
	UMaterialInterface* DefaultMaterial; // 0x48
	EFlipbookCollisionMode CollisionSource; // 0x50
};

struct UMaterialExpressionComponentMask {
	FExpressionInput Input; // 0x48
	char R : 1; // 0x64
	char G : 1; // 0x64
	char B : 1; // 0x64
	char A : 1; // 0x64
};

struct AGeneratorEntity {
	AGenerator* _associatedGenerator; // 0x230
	UMontagePlayer* _montagePlayer; // 0x238
};

struct UUMGStatusEffectsWidget {
	TSoftClassPtr<UObject> AtlantaStatusEffectIconClass; // 0x300
	UHorizontalBox* StatusEffectsBox; // 0x330
	TMap<FName, UUMGStatusEffectIcon*> _statusEffectsMap; // 0x338
};

struct URepairGeneratorSubAnimInstance {
	AGenerator* _owningGenerator; // 0x270
	bool _isBeingRepaired; // 0x278
	ACamperPlayer* _repairingSurvivor; // 0x280
	UAnimSequence* _animSequence; // 0x288
	FGameplayTag _interactionTag; // 0x290
	FGameplayTag _currentAnimId; // 0x29c
	TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences; // 0x2a8
};

struct UMaterialExpressionDepthFade {
	FExpressionInput InOpacity; // 0x48
	FExpressionInput FadeDistance; // 0x64
	float OpacityDefault; // 0x80
	float FadeDistanceDefault; // 0x84
};

struct UDynamicEntryBox {
	UUserWidget* EntryWidgetClass; // 0x1e8
};

struct UDatasmithPostProcessVolumeTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x40
	char bEnabled : 1; // 0x80
	char bUnbound : 1; // 0x80
};

struct UCoreButtonPromptWidget {
	UAkAudioEvent* CursorOverSfx; // 0x2d8
	UAkAudioEvent* CursorPressSfx; // 0x2e0
	UAkAudioEvent* CursorReleaseSfx; // 0x2e8
	UCoreInputPromptTextWidget* _inputPromptText; // 0x2f0
	UTextBlock* _buttonTextField; // 0x2f8
	FMulticastInlineDelegate _buttonPromptTriggeredDelegate; // 0x300
};

struct ADBDPlayerState {
	FMulticastInlineDelegate OnAIFinishedPlayingEvent; // 0x340
	FString MirrorsId; // 0x350
	FString ContentVersion; // 0x360
	EAIDifficultyLevel _difficultyLevel; // 0x370
	bool IsPlayerReady; // 0x371
	EPlayerRole GameRole; // 0x372
	URitualHandlerComponent* RitualHandler; // 0x378
	UDedicatedServerHandlerComponent* DedicatedServerHandler; // 0x380
	FCharacterStateData CamperData; // 0x388
	FCharacterStateData SlasherData; // 0x3a8
	FPlayerStateData PlayerData; // 0x3c8
	FEquippedPlayerCustomization PlayerCustomization; // 0x400
	FMulticastInlineDelegate OnPlayerGameplayEvent; // 0x428
	FMulticastInlineDelegate OnGameStateChanged; // 0x438
	FMulticastInlineDelegate OnPlayergameStateChanged; // 0x448
	TMap<FName, FAwardedScores> _awardedScoresByType; // 0x470
	FUserGameStats _cachedUserGameStats; // 0x4c0
	TArray<FOngoingScoreData> _ongoingScoreEvents; // 0x570
	FDBDRecentGameplayEvents _recentGameplayEvents; // 0x588
	bool _inParadise; // 0x5d9
	UGameplayNotificationManager* _gameplayNotificationManager; // 0x5e0
	UAchievementHandlerComponent* _achievementHandler; // 0x5e8
	UCharacterStatsHandlerComponent* _characterStatsHandler; // 0x5f0
	FString _platformAccountId; // 0x618
	int32_t _selectedCamperIndex; // 0x628
	int32_t _selectedSlasherIndex; // 0x62c
	EPlatformFlag _platform; // 0x72c
	EProviderFlag _provider; // 0x730
	bool _crossplayAllowed; // 0x734
	bool _offNetworkFlag; // 0x735
	bool _gameLevelLoaded; // 0x736
	bool _showPortraitBorder; // 0x768
	bool _hasActiveSubscription; // 0x76a
};

struct UMaterialExpressionMakeMaterialAttributes {
	FExpressionInput BaseColor; // 0x48
	FExpressionInput Metallic; // 0x64
	FExpressionInput Specular; // 0x80
	FExpressionInput Roughness; // 0x9c
	FExpressionInput Anisotropy; // 0xb8
	FExpressionInput EmissiveColor; // 0xd4
	FExpressionInput Opacity; // 0xf0
	FExpressionInput OpacityMask; // 0x10c
	FExpressionInput Normal; // 0x128
	FExpressionInput Tangent; // 0x144
	FExpressionInput WorldPositionOffset; // 0x160
	FExpressionInput WorldDisplacement; // 0x17c
	FExpressionInput TessellationMultiplier; // 0x198
	FExpressionInput SubsurfaceColor; // 0x1b4
	FExpressionInput ClearCoat; // 0x1d0
	FExpressionInput ClearCoatRoughness; // 0x1ec
	FExpressionInput AmbientOcclusion; // 0x208
	FExpressionInput Refraction; // 0x224
	FExpressionInput CustomizedUVs[0x8]; // 0x240
	FExpressionInput PixelDepthOffset; // 0x320
	FExpressionInput ShadingModel; // 0x33c
};

struct UHysteria {
	float _obliviousEffectDuration[0x3]; // 0x3d0
	float _perkCooldownDuration[0x3]; // 0x3dc
};

struct AK25Husk {
	UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent; // 0x560
	UAnimationMontageSlave* _montageFollower; // 0x568
	UMontagePlayer* _montagePlayer; // 0x570
	int32_t _k25CharacterOverrideID; // 0x578
};

struct UK25SurvivorChainTargetterComponent {
	FDBDTunableRowHandle _timeBetweenQueuedChainsLaunch; // 0xb8
	float _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt; // 0xe0
	FDBDTunableRowHandle _minimumSpawnDistance; // 0xe8
	FDBDTunableRowHandle _maximumSpawnDistance; // 0x110
	float _sphereCastRadius; // 0x138
	int32_t _numberOfPositionFindingTries; // 0x13c
	int32_t _maxNumberOfChainRetries; // 0x144
};

struct AK26PathPart {
	UStaticMeshComponent* _mesh; // 0x230
	UDBDOutlineComponent* _outlineComponent; // 0x238
	UNiagaraComponent* _visualEffectKiller; // 0x240
	UNiagaraComponent* _visualEffectSurvivor; // 0x248
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x250
	USceneComponent* _rootComponent; // 0x258
	bool _isVisibleForSurvivor; // 0x260
	bool _isVisibleForKiller; // 0x261
};

struct USelfUntrap {
	FDBDTunableRowHandle _trapImmunityDuration; // 0x6d8
	UAnimMontage* _untrapMontage; // 0x700
	FAnimationMontageDescriptor _successfulEscapeHealthy; // 0x708
	FAnimationMontageDescriptor _successfulEscapeInjured; // 0x728
	FAnimationMontageDescriptor _successfulEscapeCrawling; // 0x748
	FAnimationMontageDescriptor _failedEscape; // 0x768
	bool _canEscape; // 0x789
};

struct UBeingPossessedInteraction {
	FTunableStat _beingPossessedMaxCharge; // 0x5b0
};

struct UDBDCheatManager {
	ADBDMarketingCameraController* DBDMarketingCameraControllerRef; // 0x80
	ADBDMarketingCameraController* DBDMarketingCameraControllerClass; // 0x88
	UVirtualKeyboard* _virtualKeyboard; // 0xd0
};

struct UBrainComponent {
	UBlackboardComponent* BlackboardComp; // 0xc0
	AAIController* AIOwner; // 0xc8
};

struct UMovieSceneGeometryCollectionSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct USetGroundPortalInteraction {
	UPortalPlacerStateComponent* _portalPlacerState; // 0x6d8
	UObjectPlacerComponent* _trapPlacerComponent; // 0x6e0
	ADemogorgonPortal* _portalClassToSpawn; // 0x6e8
};

struct UAkStadiaInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct USubmixEffectReverbPreset {
	FSubmixEffectReverbSettings Settings; // 0xa4
};

struct UPerkManager {
	UPerkCollectionComponent* _perks; // 0xe0
	UStatusEffectCollectionComponent* _statusEffects; // 0xe8
};

struct AConjoinedTwin {
	URangeToActorsTrackerComponent* _restrictedPossessionAreaTracker; // 0x10b8
	UTwinOutlineUpdateStrategy* _twinOutlineUpdateStrategy; // 0x10c0
	UAkComponent* _twinLullabyAudioComponent; // 0x10c8
	UKillerBlindingFXComponent* _twinBlindingFX; // 0x10d0
	UCustomizedAudioComponent* _customizedAudio; // 0x10d8
	UDBDAttackerComponent* _attackerComponent; // 0x10e0
	FDBDTunableRowHandle _maxWalkSpeed; // 0x10e8
	UHitValidatorComponent* _hitValidator; // 0x1110
	UHitValidatorConfigurator* _hitValidationConfigurator; // 0x1118
	FDBDTunableRowHandle _gravityScale; // 0x1120
	UAnimationMontageSlave* _animationFollower; // 0x1148
	FDBDTunableRowHandle _revealDurationOnAttached; // 0x1168
	UTwinFirstPersonViewComponent* _firstPersonViewComponent; // 0x1190
	UFlashlightableComponent* _eyesFlashlightable; // 0x1198
	UBlindFlashlightTargetFXComponent* _blindFlashlightTargetFXComponent; // 0x11a0
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent; // 0x11a8
	FFastTimer _flashlightBlindEvasionScoreTimer; // 0x11b8
	FDBDTunableRowHandle _flashlightEvasionScoreCooldown; // 0x11e8
	UTwinPossessNegationEffectComponent* _twinPossessNegationEffectComponent; // 0x1210
};

struct UKillerPossessionComponent {
	bool _shouldDeactivateCollisionsWithSurvivors; // 0x140
	FDBDTunableRowHandle _timeBeforeCollisionsDeactivation; // 0x178
};

struct UUserDefinedCaptureProtocol {
	UWorld* World; // 0x60
};

struct UMaterialExpressionSpeedTree {
	FExpressionInput GeometryInput; // 0x48
	FExpressionInput WindInput; // 0x64
	FExpressionInput LODInput; // 0x80
	FExpressionInput ExtraBendWS; // 0x9c
	ESpeedTreeGeometryType GeometryType; // 0xb8
	ESpeedTreeWindType WindType; // 0xb9
	ESpeedTreeLODType LODType; // 0xba
	float BillboardThreshold; // 0xbc
	bool bAccurateWindVelocities; // 0xc0
};

struct UCamperStillnessTrackerComponent {
	float ChickenShitModifier; // 0xf0
	float LoudNoiseTime; // 0xf4
	TArray<float> ExposerSpawnTimes; // 0x108
	TArray<float> ExposerDespawnTimes; // 0x118
	ACamperExposerInstance* _exposerInstanceToSpawn; // 0x128
	TArray<ACamperExposerInstance*> _exposerInstances; // 0x130
	UExposerInteriorZoneComponent* _interiorZone; // 0x140
};

struct UUMGLoadoutFilterWidget {
	FMulticastInlineDelegate OnLoadoutFilterClicked; // 0x300
	TSoftClassPtr<UObject> AtlantaLoadoutFilterButtonClass; // 0x310
	UHorizontalBox* FilterContainerBox; // 0x340
	TArray<FName> Filters; // 0x348
	TArray<UUMGLoadoutFilterButton*> FilterButtons; // 0x358
	UUMGLoadoutFilterButton* SelectedFilterButton; // 0x368
};

struct UAISkill_InteractionTeleport {
	float BlockTeleportWhenPathGoalUnderRange; // 0x170
};

struct UScrollBarWidgetStyle {
	FScrollBarStyle ScrollBarStyle; // 0x38
};

struct USubmixEffectDelayPreset {
	FSubmixEffectDelaySettings Settings; // 0x7c
	FSubmixEffectDelaySettings DynamicSettings; // 0x88
};

struct UCoupDeGrace {
	float _lungeAttackAddDurationMultiplier[0x3]; // 0x3d0
	TArray<AGenerator*> _completedGenerators; // 0x3e0
};

struct ULuminApplicationLifecycleComponent {
	FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x148
	FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x158
	FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x168
	FMulticastInlineDelegate FocusLostDelegate; // 0x178
	FMulticastInlineDelegate FocusGainedDelegate; // 0x188
};

struct UInterpTrackAkAudioRTPC {
	FString Param; // 0x98
	char bPlayOnReverse : 1; // 0xa8
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8
};

struct AGameModeBase {
	FString OptionsString; // 0x230
	AGameSession* GameSessionClass; // 0x240
	AGameStateBase* GameStateClass; // 0x248
	APlayerController* PlayerControllerClass; // 0x250
	APlayerState* PlayerStateClass; // 0x258
	AHUD* HUDClass; // 0x260
	APawn* DefaultPawnClass; // 0x268
	ASpectatorPawn* SpectatorClass; // 0x270
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x278
	AServerStatReplicator* ServerStatReplicatorClass; // 0x280
	AGameSession* GameSession; // 0x288
	AGameStateBase* GameState; // 0x290
	AServerStatReplicator* ServerStatReplicator; // 0x298
	FText DefaultPlayerName; // 0x2a0
	char bUseSeamlessTravel : 1; // 0x2b8
	char bStartPlayersAsSpectators : 1; // 0x2b8
	char bPauseable : 1; // 0x2b8
};

struct UUMGRewardSlotTutorialPopupRewardWidget {
	UTextBlock* RewardText; // 0x300
	UImage* RewardPicture; // 0x308
	UWidget* UnlockedPanel; // 0x310
	UWidget* MissedRewardPanel; // 0x318
	float RewardUnlockedTextOpacity; // 0x320
	float RewardToBeMissedTextOpacity; // 0x324
};

struct UBreathingSurvivorSubAnimInstance {
	bool _isDead; // 0x4f0
	UAnimSequence* _breathing; // 0x4f8
};

struct UGeometryCollectionCache {
	FRecordedTransformTrack RecordedData; // 0x30
	UGeometryCollection* SupportedCollection; // 0x40
	FGuid CompatibleCollectionState; // 0x48
};

struct UInterpTrackInstFloatAnimBPParam {
	UAnimInstance* AnimScriptInstance; // 0x30
	float ResetFloat; // 0x38
};

struct UDrawPolygonTool {
	UDrawPolygonToolStandardProperties* PolygonProperties; // 0x90
	UDrawPolygonToolSnapProperties* SnapProperties; // 0x98
	UNewMeshMaterialProperties* MaterialProperties; // 0xa0
	UPreviewMesh* PreviewMesh; // 0x160
	UTransformGizmo* PlaneTransformGizmo; // 0x168
	UTransformProxy* PlaneTransformProxy; // 0x170
	UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x580
};

struct UCoreTutorialObjectiveItem {
	FMulticastInlineDelegate TutorialObjectiveCompletedDelegate; // 0x2d8
};

struct UUMGRankBanner {
	UUMGTallyRankFrame* RankFrameWidget; // 0x308
	UButton* TooltipButton; // 0x310
	UImage* HighlightImage; // 0x318
	UAkAudioEvent* OnLongPressSound; // 0x320
	FMulticastInlineDelegate _onLongPressRankTooltipEvent; // 0x328
};

struct UBaseSurvivorAnimInstance {
	ACamperPlayer* _owningSurvivor; // 0x4e8
};

struct UBTService_SetFocusCooldown {
	FBlackboardKeySelector BBOnObject; // 0x80
	FName ContextName; // 0xb0
	bool InfiniteDuration; // 0xbc
	float Duration; // 0xc0
};

struct UNavigationQueryFilter_Slasher {
	TMap<FString, float> DefaultInteractionsTimeCost; // 0x70
	TMap<FString, float> FrenzyInteractionsTimeCost; // 0xc0
};

struct AK25ControlledProjectile {
	UStaticMeshComponent* _killerViewProjectileStaticMesh; // 0x438
	USpringArmComponent* _killerSpringArm; // 0x440
	UCameraComponent* _killerCameraPlacement; // 0x448
	float _pitchClampAngle; // 0x450
	FTunableStat _maximumYawTurnRate; // 0x458
	FTunableStat _maximumPitchTurnRate; // 0x4d8
	FDBDTunableRowHandle _cameraRollSpeedMultiplier; // 0x558
	FDBDTunableRowHandle _cameraRollGoBackSpeedMultiplier; // 0x580
	FDBDTunableRowHandle _cameraMaximumRollDegree; // 0x5a8
	FTunableStat _numbExtraChainsOnControlledProjectileHit; // 0x5d0
	UK25ControlledProjectileMovementComponent* _controlledProjectileMovementComponent; // 0x650
	float _currentRoll; // 0x658
	float _targetRoll; // 0x65c
	FVector_NetQuantize _lastAppliedAngularVelocity; // 0x690
};

struct USkyAtmosphereComponent {
	ESkyAtmosphereTransformMode TransformMode; // 0x210
	float BottomRadius; // 0x214
	FColor GroundAlbedo; // 0x218
	float AtmosphereHeight; // 0x21c
	float MultiScatteringFactor; // 0x220
	float RayleighScatteringScale; // 0x224
	FLinearColor RayleighScattering; // 0x228
	float RayleighExponentialDistribution; // 0x238
	float MieScatteringScale; // 0x23c
	FLinearColor MieScattering; // 0x240
	float MieAbsorptionScale; // 0x250
	FLinearColor MieAbsorption; // 0x254
	float MieAnisotropy; // 0x264
	float MieExponentialDistribution; // 0x268
	float OtherAbsorptionScale; // 0x26c
	FLinearColor OtherAbsorption; // 0x270
	FTentDistribution OtherTentDistribution; // 0x280
	FLinearColor SkyLuminanceFactor; // 0x28c
	float AerialPespectiveViewDistanceScale; // 0x29c
	float HeightFogContribution; // 0x2a0
	float TransmittanceMinLightElevationAngle; // 0x2a4
	FGuid bStaticLightingBuiltGUID; // 0x2cc
};

struct UEditableTextBoxWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x38
};

struct UParticleModuleTrailSource {
	ETrail2SourceMethod SourceMethod; // 0x38
	FName SourceName; // 0x3c
	FRawDistributionFloat SourceStrength; // 0x48
	char bLockSourceStength : 1; // 0x78
	int32_t SourceOffsetCount; // 0x7c
	TArray<FVector> SourceOffsetDefaults; // 0x80
	EParticleSourceSelectionMethod SelectionMethod; // 0x90
	char bInheritRotation : 1; // 0x94
};

struct UParticleModuleSizeScaleBySpeed {
	FVector2D SpeedScale; // 0x38
	FVector2D MaxScale; // 0x40
};

struct UUMGRichTextFreeTicketDecorator {
	FVector2D FreeTicketOverrideSize; // 0x30
	FRichTextFreeTicketImageInfo FreeTicketIcon; // 0x38
	FRichTextFreeTicketImageInfo FreeTicketBG; // 0xd8
	FRichTextFreeTicketTextInfo FreeTicketDurationTitle; // 0x178
	FRichTextFreeTicketTextInfo FreeTicketTitle; // 0x428
	FRichTextFreeTicketTextInfo FreeTicketDurationInHours; // 0x6d8
	UDataTable* TitleStyleSet; // 0x988
};

struct UEnvQueryTest_IsValidDestination {
	UEnvQueryContext* QuerierContext; // 0x238
	FAIDataProviderBoolValue Invert; // 0x240
	FAIDataProviderBoolValue ExcludeEscapeZoneIfReverseBearTrapIsActivated; // 0x280
};

struct UAREnvironmentCaptureProbe {
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x100
};

struct UParticleModuleLocationPrimitiveCylinder {
	char RadialVelocity : 1; // 0xb8
	FRawDistributionFloat StartRadius; // 0xc0
	FRawDistributionFloat StartHeight; // 0xf0
	CylinderHeightAxis HeightAxis; // 0x120
};

struct UFearMarketManager {
	FFearMarketItemInstance PendingPurchaseFearMarketItem; // 0x30
	FFearMarketOfferingInstance _existingFearMarket; // 0x90
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0xb0
};

struct UMaterialExpressionConstantBiasScale {
	FExpressionInput Input; // 0x48
	float Bias; // 0x64
	float Scale; // 0x68
};

struct UDyingLight {
	TArray<float> _actionSpeedPenaltyPerToken; // 0x3d0
	float _obsessionActionSpeedBonus; // 0x3e0
	FName _obsessionStatusEffectID; // 0x3e4
	FName _nonObsessionStatusEffectID; // 0x3f0
	TArray<UStatusEffect*> _survivorDebuffs; // 0x400
};

struct UInfectiousFright {
	bool _revealPlayerInTerrorRadius; // 0x3d0
	char _perkActivationCount; // 0x3d1
	TArray<ACamperPlayer*> _revealedSurvivors; // 0x3d8
	ACamperPlayer* _targetSurvivor; // 0x3e8
};

struct UInterpTrackInstMove {
	FVector ResetLocation; // 0x30
	FRotator ResetRotation; // 0x3c
};

struct URadialForceComponent {
	float Radius; // 0x210
	ERadialImpulseFalloff Falloff; // 0x214
	float ImpulseStrength; // 0x218
	char bImpulseVelChange : 1; // 0x21c
	char bIgnoreOwningActor : 1; // 0x21c
	float ForceStrength; // 0x220
	float DestructibleDamage; // 0x224
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x228
};

struct UCoreInteractionPromptWidget {
	float LargeTextScale; // 0x260
	UScaleBox* LargeTextScaleBox; // 0x268
	UDBDTextBlock* ActionTB; // 0x270
	UDBDTextManager* _textManager; // 0x278
};

struct UInterpTrackInstBoolProp {
	bool ResetBool; // 0x68
};

struct UAkItemProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x128
	FMulticastInlineDelegate OnPropertyDragged; // 0x138
};

struct UMovieSceneFolder {
	FName FolderName; // 0x30
	TArray<UMovieSceneFolder*> ChildFolders; // 0x40
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x50
	TArray<FString> ChildObjectBindingStrings; // 0x60
};

struct UBrushBaseProperties {
	float BrushSize; // 0x58
	bool bSpecifyRadius; // 0x5c
	float BrushRadius; // 0x60
	float BrushStrength; // 0x64
	float BrushFalloffAmount; // 0x68
	bool bShowStrength; // 0x6c
	bool bShowFalloff; // 0x6d
};

struct UAtlantaHudDirectionalStick {
	UCanvasPanel* JoystickAnimationPanel; // 0x300
	UCanvasPanel* ContainerToRotate; // 0x308
	UCanvasPanel* ArrowsContainer; // 0x310
	UImage* JoystickLockImage; // 0x318
	UImage* JoystickOn; // 0x320
	UCanvasPanel* AutoRunContainer; // 0x328
	bool _isMovementLockAnimationActive; // 0x330
};

struct UDBDPersistentData {
	FGamePersistentData _gamePersistentData; // 0x30
	TArray<FString> _keepDataIDs; // 0x130
	TMap<FString, FPlayerPersistentData> _playerIdToPersistentDataMap; // 0x140
	FPlayerPersistentData _localPlayerPersistentData; // 0x190
	TArray<FCloudInventoryItem> _cloudInventory; // 0x920
};

struct UUMGTooltipContentPlayerLevelWidget {
	FText PlayerLevelText; // 0x300
	UUMGLevelBannerWidget* LevelBanner; // 0x318
	URichTextBlock* LevelExperienceRichText; // 0x320
	UTextBlock* ExperienceToNextLevelText; // 0x328
};

struct UEnvQueryTest {
	int32_t TestOrder; // 0x38
	EEnvTestPurpose TestPurpose; // 0x3c
	FString TestComment; // 0x40
	EEnvTestFilterOperator MultipleContextFilterOp; // 0x50
	EEnvTestScoreOperator MultipleContextScoreOp; // 0x51
	EEnvTestFilterType FilterType; // 0x52
	FAIDataProviderBoolValue BoolValue; // 0x58
	FAIDataProviderFloatValue FloatValueMin; // 0x98
	FAIDataProviderFloatValue FloatValueMax; // 0xd8
	EEnvTestScoreEquation ScoringEquation; // 0x119
	EEnvQueryTestClamping ClampMinType; // 0x11a
	EEnvQueryTestClamping ClampMaxType; // 0x11b
	EEQSNormalizationType NormalizationType; // 0x11c
	FAIDataProviderFloatValue ScoreClampMin; // 0x120
	FAIDataProviderFloatValue ScoreClampMax; // 0x160
	FAIDataProviderFloatValue ScoringFactor; // 0x1a0
	FAIDataProviderFloatValue ReferenceValue; // 0x1e0
	bool bDefineReferenceValue; // 0x220
	char bWorkOnFloatValues : 1; // 0x230
};

struct URangeToActorsTrackerComponent {
	TArray<URangeToActorsTrackerStrategy*> _rangeTrackers; // 0xb8
};

struct USurvivorStatusComponent {
	ACamperPlayer* _survivor; // 0xb8
};

struct UBTTask_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UUMGBloodStoreItemWidget {
	UImage* NodeImage; // 0x310
	UImage* BackgroundImage; // 0x318
	UImage* RarityBackground; // 0x320
	UCanvasPanel* ItemPanel; // 0x328
	UCanvasPanel* MysteryBoxPanel; // 0x330
	UImage* MysteryBoxRarityBackground; // 0x338
	UCanvasPanel* CollectedPanel; // 0x340
	UCanvasPanel* ConsumedPanel; // 0x348
	EBloodwebNodeContentType _contentType; // 0x350
	bool _isMysteryBox; // 0x351
	FVector2D _bigItemScale; // 0x354
	FVector2D _normalItemScale; // 0x35c
	float _consumedOpacity; // 0x364
};

struct AHarpoonProjectile {
	FDBDTunableRowHandle _launchDistanceFromCamera; // 0x3b0
	UHarpoonProjectileMovementComponent* _movement; // 0x3d8
	UPrimitiveComponent* _environmentCollider; // 0x3e0
	UPrimitiveComponent* _targetCollider; // 0x3e8
	USkeletalMeshComponent* _skeletalMesh; // 0x3f0
	UPoolableActorComponent* _poolableActorComponent; // 0x3f8
};

struct AK26AttachedCrow {
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent; // 0x260
	UFlashlightableComponent* _flashLightableComponent; // 0x268
	ULightBurnable* _lightBurnableComponent; // 0x270
	UChargeableComponent* _flashlightDestroyChargeable; // 0x278
	FDBDTunableRowHandle _requiredFlashlightTimeToDestroy; // 0x290
	FTunableStat _lingerTime; // 0x2b8
	FDBDTunableRowHandle _infectionDelay; // 0x338
	FDBDTunableRowHandle _infectRadius; // 0x360
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x388
	UDBDOutlineComponent* _outlineComponent; // 0x390
	UStaticMeshComponent* _visualStaticMeshComponent; // 0x398
	USceneComponent* _rootComponent; // 0x3a0
	UK26PowerStatusHandlerComponent* _statusHandler; // 0x3a8
	bool _authority_isInfecting; // 0x3b0
	FK26AttachmentStatus _attachmentStatus; // 0x3b1
};

struct UK26IsLastCrowRemovalReasonDueToInteraction {
	AK26AttachedCrow* _owningAttachedCrow; // 0xe8
	UK26PowerStatusHandlerComponent* _statusHandlerComponent; // 0xf0
};

struct UAddon_Beartrap_DisarmRevealer {
	FName _auraRevealStatusEffectID; // 0x298
	float _auraRevealDuration; // 0x2a4
	TMap<ABearTrap*, ACamperPlayer*> _disarmedTrapMap; // 0x2a8
};

struct UCrossPlatformManager {
	bool _crossPlayAllowedByPlatform; // 0x30
	bool _crossPlayAllowedByKraken; // 0x31
};

struct UOppression {
	int32_t _nbGeneratorsAffectedByPerk[0x3]; // 0x3d0
	int32_t _perkCooldown[0x3]; // 0x3dc
};

struct ULandscapeSplinesComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x428
	TArray<ULandscapeSplineSegment*> Segments; // 0x438
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x448
};

struct UAnimSequenceBase {
	TArray<FAnimNotifyEvent> Notifies; // 0x88
	float SequenceLength; // 0x98
	float RateScale; // 0x9c
	FRawCurveTracks RawCurveData; // 0xa0
};

struct AWakerObject {
	UCamperDreamworldComponent* _linkedCamperDreamworldComponent; // 0x330
	bool IsInteracting; // 0x338
	bool _chargeComplete; // 0x339
};

struct UBTDecorator_CheckGameplayTagsOnActor {
	FBlackboardKeySelector ActorToCheck; // 0x70
	EGameplayContainerMatchType TagsToMatch; // 0xa0
	FGameplayTagContainer GameplayTags; // 0xa8
	FString CachedDescription; // 0xc8
};

struct UAISkill_StrafeDodge {
	FAIRoll StartRoll; // 0x130
};

struct USkinnedMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x478
	TWeakObjectPtr<USkinnedMeshComponent> SelectedMasterPoseComponent; // 0x480
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x488
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x490
	UPhysicsAsset* PhysicsAssetOverride; // 0x5a8
	int32_t ForcedLodModel; // 0x5b0
	int32_t MinLodModel; // 0x5b4
	bool bUseMasterPoseLod; // 0x5b8
	TArray<UStaticMeshComponent*> StaticMeshesUsingSameLOD; // 0x5c0
	float StreamingDistanceMultiplier; // 0x5d8
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x5e8
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x61c
	char bOverrideMinLod : 1; // 0x61e
	char bUseBoundsFromMasterPoseComponent : 1; // 0x61e
	char bForceWireframe : 1; // 0x61e
	char bDisplayBones : 1; // 0x61e
	char bDisableMorphTarget : 1; // 0x61e
	char bHideSkin : 1; // 0x61e
	char bPerBoneMotionBlur : 1; // 0x61f
	char bComponentUseFixedSkelBounds : 1; // 0x61f
	char bConsiderAllBodiesForBounds : 1; // 0x61f
	char bSyncAttachParentLOD : 1; // 0x61f
	char bCanHighlightSelectedSections : 1; // 0x61f
	char bRecentlyRendered : 1; // 0x61f
	char bAnySlaveRecentlyRendered : 1; // 0x61f
	char bCastCapsuleDirectShadow : 1; // 0x61f
	char bCastCapsuleIndirectShadow : 1; // 0x620
	char bCPUSkinning : 1; // 0x620
	char bEnableUpdateRateOptimizations : 1; // 0x620
	TArray<FTresholdToFrameSkip> AnimationTresholdToFrameSkip; // 0x628
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x638
	char bRenderStatic : 1; // 0x638
	char bIgnoreMasterPoseComponentLOD : 1; // 0x638
	char bCachedLocalBoundsUpToDate : 1; // 0x638
	char bForceMeshObjectUpdate : 1; // 0x638
	float CapsuleIndirectShadowMinVisibility; // 0x63c
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x654
	FMatrix CachedWorldToLocalTransform; // 0x670
};

struct ALevelVariantSetsActor {
	FSoftObjectPath LevelVariantSets; // 0x230
};

struct UForceFeedbackEffect {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x30
	float Duration; // 0x40
};

struct UInterpTrackInstAkAudioEvent {
	float LastUpdatePosition; // 0x30
};

struct UWheeledVehicleMovementComponent4W {
	FVehicleEngineData EngineSetup; // 0x2a0
	FVehicleDifferential4WData DifferentialSetup; // 0x340
	float AckermannAccuracy; // 0x35c
	FVehicleTransmissionData TransmissionSetup; // 0x360
	FRuntimeFloatCurve SteeringCurve; // 0x390
};

struct UActorChannel {
	AActor* Actor; // 0x78
	TArray<UObject*> CreateSubObjects; // 0x168
};

struct UAkAudioEventData {
	float MaxAttenuationRadius; // 0xb8
	bool IsInfinite; // 0xbc
	float MinimumDuration; // 0xc0
	float MaximumDuration; // 0xc4
	TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xc8
	TSet<UAkAudioEvent*> PostedEvents; // 0x118
	TSet<UAkAuxBus*> UserDefinedSends; // 0x168
	TSet<UAkTrigger*> PostedTriggers; // 0x1b8
	TSet<UAkGroupValue*> GroupValues; // 0x208
};

struct UMovieSceneMediaTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x60
};

struct UCharacterXPManager {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x48
};

struct UCoreOnboardingTutorialButtonWidget {
	FMulticastInlineDelegate OnSetDataAnimationCompleteDelegate; // 0x398
	FString UnavailablePressedSfxName; // 0x3a8
	UAkAudioEvent* UnavailablePressedSfx; // 0x3b8
	UDBDTextBlock* TitleText; // 0x3c0
	UDBDTextBlock* DescriptionText; // 0x3c8
	UDBDTextBlock* RewardsText; // 0x3d0
	UDBDImage* RoleIcon; // 0x3d8
	UWidgetSwitcher* StateSwitcher; // 0x3e0
	UDBDImage* LockedImage; // 0x3e8
	UDBDImage* CompletedImage; // 0x3f0
	TArray<UCoreRewardWrapperWidget*> RewardWrappers; // 0x3f8
	FOnboardingTutorialButtonViewData viewData; // 0x408
};

struct ANiagaraPreviewGrid {
	UNiagaraSystem* System; // 0x230
	ENiagaraPreviewGridResetMode ResetMode; // 0x238
	UNiagaraPreviewAxis* PreviewAxisX; // 0x240
	UNiagaraPreviewAxis* PreviewAxisY; // 0x248
	ANiagaraPreviewBase* PreviewClass; // 0x250
	float SpacingX; // 0x258
	float SpacingY; // 0x25c
	int32_t NumX; // 0x260
	int32_t NumY; // 0x264
	TArray<UChildActorComponent*> PreviewComponents; // 0x268
};

struct UTricksterSuperModeComponent {
	bool _isInSuperMode; // 0xb8
	bool _isSuperModeReady; // 0xb9
	bool _isInCooldown; // 0xba
	FDBDTunableRowHandle _chargesToAddOnKnifeHit; // 0xc8
	FDBDTunableRowHandle _superModeMaxCharge; // 0xf0
	FDBDTunableRowHandle _superModeReadyDepletionPerSecond; // 0x118
	FTunableStat _superModeActiveDuration; // 0x140
	FDBDTunableRowHandle _superModeCooldown; // 0x220
	FDBDTunableRowHandle _shouldDisableFlurryDuringCooldown; // 0x248
};

struct ULethalPursuer {
	float _survivorRevealDuration[0x3]; // 0x3d0
};

struct ULocalPlayer {
	UGameViewportClient* ViewportClient; // 0x78
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x9c
	APlayerController* PendingLevelPlayerControllerClass; // 0xa0
	char bSentSplitJoin : 1; // 0xa8
	int32_t ControllerId; // 0xc0
};

struct AEndGameEntity {
	USkeletalMeshComponent* _skeletalMeshComponent; // 0x230
};

struct USynthKnob {
	float Value; // 0x128
	float StepSize; // 0x12c
	float MouseSpeed; // 0x130
	float MouseFineTuneSpeed; // 0x134
	char ShowTooltipInfo : 1; // 0x138
	FText ParameterName; // 0x140
	FText ParameterUnits; // 0x158
	FDelegate ValueDelegate; // 0x170
	FSynthKnobStyle WidgetStyle; // 0x188
	bool locked; // 0x3e0
	bool IsFocusable; // 0x3e1
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3e8
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3f8
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x408
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x418
	FMulticastInlineDelegate OnValueChanged; // 0x428
};

struct UChargeTwinJumpInteraction {
	FDBDTunableRowHandle _chargeJumpMaxCharge; // 0x720
	FDBDTunableRowHandle _interactionViewPitchMax; // 0x748
	FDBDTunableRowHandle _interactionViewPitchMin; // 0x770
	FDBDTunableRowHandle _cancelCooldownTime; // 0x7c0
};

struct UFiniteStateMachine {
	UFSM_State* _defaultStateClass; // 0xb8
	UFSM_State* _currentState; // 0xc0
	EFiniteStateMachineStatus _currentStateMachineStatus; // 0xc8
	UObject* _stateMachineOwner; // 0xd0
	TArray<UFSM_State*> _stateInstances; // 0xd8
};

struct UNavArea {
	float DefaultCost; // 0x38
	float FixedAreaEnteringCost; // 0x3c
	FColor DrawColor; // 0x40
	FNavAgentSelector SupportedAgents; // 0x44
	char bSupportsAgent0 : 1; // 0x48
	char bSupportsAgent1 : 1; // 0x48
	char bSupportsAgent2 : 1; // 0x48
	char bSupportsAgent3 : 1; // 0x48
	char bSupportsAgent4 : 1; // 0x48
	char bSupportsAgent5 : 1; // 0x48
	char bSupportsAgent6 : 1; // 0x48
	char bSupportsAgent7 : 1; // 0x48
	char bSupportsAgent8 : 1; // 0x49
	char bSupportsAgent9 : 1; // 0x49
	char bSupportsAgent10 : 1; // 0x49
	char bSupportsAgent11 : 1; // 0x49
	char bSupportsAgent12 : 1; // 0x49
	char bSupportsAgent13 : 1; // 0x49
	char bSupportsAgent14 : 1; // 0x49
	char bSupportsAgent15 : 1; // 0x49
};

struct UUMGPromoPackSuggestionButton {
	URichTextBlock* RichTextButtonLabel; // 0x430
	UImage* LineGlow; // 0x438
};

struct UUMGAtlantaMatchConfigScreen {
	UUMGAtlantaMatchConfigPageScroll* MatchConfigPageScroll; // 0x300
	UHorizontalBox* TabsBox; // 0x308
	UVerticalBox* BotsTabsBox; // 0x310
	UUMGBaseButtonWidget* BackButton; // 0x318
	UTextBlock* MatchConfigTitle; // 0x320
	UTextBlock* InventoryTitle; // 0x328
	UTextBlock* SelectedTabTitle; // 0x330
	UMatchConfigTabsDataAsset* TabsDataAsset; // 0x338
	FSlateBrush SmallTabSeparation; // 0x340
	FSlateBrush BigTabSeparation; // 0x3d0
	float TabsVerticalPadding; // 0x460
	float TabsHorizontalPadding; // 0x464
};

struct UMeshInspectorProperties {
	bool bWireframe; // 0x58
	bool bBoundaryEdges; // 0x59
	bool bPolygonBorders; // 0x5a
	bool bUVSeams; // 0x5b
	bool bNormalSeams; // 0x5c
	bool bNormalVectors; // 0x5d
	bool bTangentVectors; // 0x5e
	float NormalLength; // 0x60
	float TangentLength; // 0x64
};

struct UPhysicalMaterialMask {
	int32_t UVChannelIndex; // 0x30
	TextureAddress AddressX; // 0x34
	TextureAddress AddressY; // 0x35
};

struct UDBDBaseInputHandler {
	APawn* _pawn; // 0x30
	USpringArmComponent* _cameraBoom; // 0x38
};

struct UDBDDecalComponent {
	TArray<UStaticMeshComponent*> staticMeshDecals; // 0x250
	TMap<UStaticMeshComponent*, UGlassStaticMesh*> staticMeshGlass; // 0x260
	TArray<UMaterialInstanceDynamic*> materialInstances; // 0x2b0
};

struct UDatasmithStaticMeshTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x38
	int32_t LightMapCoordinateIndex; // 0x88
	int32_t LightMapResolution; // 0x8c
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x90
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0xa0
};

struct ADatasmithImportedSequencesActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x230
};

struct UChaseComponent {
	FMulticastInlineDelegate OnChaseStarted; // 0xb8
	FMulticastInlineDelegate OnChaseEnded; // 0xc8
	FMulticastInlineDelegate OnAllChaseEnded; // 0xd8
	FMulticastInlineDelegate OnIsInChaseChanged; // 0xe8
	FTagStateBool _isInChase; // 0xf8
};

struct UAccessKeys {
	TArray<FAccessKey> AccessKeys; // 0x30
};

struct UDBDNavLinkCustomComponent {
	FVector BaseLinkRelativeStart; // 0x198
	FVector BaseLinkRelativeEnd; // 0x1a4
	ENavLinkDirection BaseLinkDirection; // 0x1b0
	float AutoSnapSmartLinkPointsUpHeight; // 0x1b4
	float AutoSnapSmartLinkPointsDownHeight; // 0x1b8
	ECollisionChannel AutoSnapCollisionChannel; // 0x1bc
	float AutoSmartLinkDirectionMaxHeight; // 0x1c0
	bool DisableSmartLinkOnPathObstruction; // 0x1c4
	float PathObstructionTestDistance; // 0x1c8
	float PathObstructionTestShapeRadius; // 0x1cc
	float PathObstructionTestHeightOffset; // 0x1d0
	ECollisionChannel PathObstructionCollisionChannel; // 0x1d4
	bool DisableOtherSmartLinkInProximityOnEnable; // 0x1d5
	bool EnableOtherSmartLinkInProximityOnDisable; // 0x1d6
	float OtherSmartLinkInProximitySearchDistance; // 0x1d8
	bool ShowDebugInfo; // 0x1dc
	TArray<ANavLinkProxy*> _navLinkProxyInProximity; // 0x1f8
};

struct UDatasmithMaterialInstanceTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x38
	TMap<FName, float> ScalarParameterValues; // 0x68
	TMap<FName, FLinearColor> VectorParameterValues; // 0xb8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0x108
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x158
};

struct AAkAcousticPortal {
	AkAcousticPortalState InitialState; // 0x268
	float ObstructionRefreshInterval; // 0x26c
	ECollisionChannel ObstructionCollisionChannel; // 0x270
};

struct UDemoNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x860
	float CheckpointSaveMaxMSPerFrame; // 0xc74
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xca8
	bool bIsLocalReplay; // 0xd08
	TArray<APlayerController*> SpectatorControllers; // 0xd10
};

struct UMaterialExpressionLogarithm2 {
	FExpressionInput X; // 0x48
};

struct UUMGDailyRewardWidget {
	FMulticastInlineDelegate OnDailyRewardStateChanged; // 0x430
	bool IsMarkedSpecial; // 0x440
	EUMGDailyRewardWidgetState State; // 0x441
	UTextBlock* AmountText; // 0x448
	UTextBlock* ItemNameText; // 0x450
	UTextBlock* RewardNumberText; // 0x458
	UWidgetSwitcher* RewardTypeSwitcher; // 0x460
	UCanvasPanel* ItemInfoPanel; // 0x468
	UCanvasPanel* OfferingInfoPanel; // 0x470
	UCanvasPanel* GenericInfoPanel; // 0x478
	UCanvasPanel* FreeTicketInfoPanel; // 0x480
	UCanvasPanel* CrateKeyInfoPanel; // 0x488
	UImage* ItemIcon; // 0x490
	UImage* OfferingIcon; // 0x498
	UImage* GenericRewardIcon; // 0x4a0
	UImage* FreeTicketRewardIcon; // 0x4a8
	UImage* ParentItemIcon; // 0x4b0
	UImage* CrateKeyRewardIcon; // 0x4b8
	UCanvasPanel* ParentItemPanel; // 0x4c0
};

struct ADBDGameMode {
	FMulticastInlineDelegate OnPlayersLoadoutsCreated; // 0x370
	APlayerController* _killerPlayerControllerClass; // 0x380
	APlayerController* _survivorPlayerControllerClass; // 0x388
	TArray<APlayerStart*> _initialPlayerStarts; // 0x390
	int32_t KillerCreationPositionOrder; // 0x3ec
};

struct UDBDRankDesignTunables {
	UCurveFloat* UnbrokenTimeAlivePointsCurve; // 0x30
	UCurveFloat* EvaderStealthPointsByDistanceWhileKillerNotChasingCurve; // 0x38
	UCurveFloat* EvaderStealthPointsByDistanceWhileKillerIsChasingCurve; // 0x40
	UCurveFloat* EvaderChasePointsByDurationCurve; // 0x48
	UCurveFloat* EvaderZAxisDistanceScalingCurve; // 0x50
	UCurveFloat* ChaserChasePointsByDurationCurve; // 0x58
};

struct ALobbyBeaconState {
	int32_t MaxPlayers; // 0x230
	ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x238
	bool bLobbyStarted; // 0x248
	float WaitForPlayersTimeRemaining; // 0x24c
	FLobbyPlayerStateInfoArray Players; // 0x250
};

struct UUMGLoginPopup {
	UUMGAuthentificationProviderListWidget* AuthenticationProviderList; // 0x3e8
};

struct UARCandidateObject {
	TArray<char> CandidateObjectData; // 0x38
	FString FriendlyName; // 0x48
	FBox BoundingBox; // 0x58
};

struct UTormentTrailPointCollectionComponent {
	FDBDTunableRowHandle _maxNumberOfTrailPointInGame; // 0xd0
};

struct UBTService_FindInteractor_Totem {
	FAITunableParameter InactiveGoalWeightMaxDistance; // 0x218
	FAITunableParameter InactiveGoalWeightAtMinDistance; // 0x228
};

struct UHarpoonProjectileMovementComponent {
	FDBDTunableRowHandle _maxTravelDistance; // 0x260
};

struct UGMAdaptiveShadowMapSourceComponent {
	bool bUseAutoRadius; // 0x210
	float Radius; // 0x214
	float DepthMin; // 0x218
	float DepthMax; // 0x21c
	int32_t Levels; // 0x220
	int32_t PreGeneratedLevels; // 0x224
};

struct UChannel {
	UNetConnection* Connection; // 0x30
};

struct UParticleModuleAttractorPoint {
	FRawDistributionVector Position; // 0x38
	FRawDistributionFloat Range; // 0x80
	FRawDistributionFloat Strength; // 0xb0
	char StrengthByDistance : 1; // 0xe0
	char bAffectBaseVelocity : 1; // 0xe0
	char bOverrideVelocity : 1; // 0xe0
	char bUseWorldSpacePosition : 1; // 0xe0
	char Positive_X : 1; // 0xe0
	char Positive_Y : 1; // 0xe0
	char Positive_Z : 1; // 0xe0
	char Negative_X : 1; // 0xe0
	char Negative_Y : 1; // 0xe1
	char Negative_Z : 1; // 0xe1
};

struct UBloodTrailComponent {
	UBloodTrailSettings* _bloodTrailSettings; // 0xb8
	TMap<UDBDDecalComponent*, FBloodDecal> _bloodDecals; // 0x140
	UBloodDecalEffect* _bloodDecalEffect; // 0x190
	UDecalSpawner* _decalSpawner; // 0x228
};

struct UYellowGlyphComponent {
	ADBDPlayer* _currentlyInteractingPlayer; // 0xb8
	float _skillCheckDuration; // 0xc4
	float _skillCheckZoneLength; // 0xc8
	float _skillCheckDelay; // 0xcc
	float _skillCheckAverageDistance; // 0xd0
	float _skillCheckDistanceVariance; // 0xd4
	int32_t _teleportDelay; // 0xd8
	TArray<UTileSpawnPoint*> _survivorSpawns; // 0x110
	TArray<AGlyph*> _allGlyphs; // 0x120
};

struct URBTSurvivorSubAnimInstance {
	bool _isRemovingRBT; // 0x530
	bool _hasSkillCheckFailed; // 0x531
};

struct USubUVAnimation {
	UTexture2D* SubUVTexture; // 0x30
	int32_t SubImages_Horizontal; // 0x38
	int32_t SubImages_Vertical; // 0x3c
	ESubUVBoundingVertexCount BoundingMode; // 0x40
	EOpacitySourceMode OpacitySourceMode; // 0x41
	float AlphaThreshold; // 0x44
};

struct UGhostStalkPowerComponent {
	UStalkerComponent* _stalkerComponent; // 0xe8
	TSoftClassPtr<UObject> _ghostStalkedComponentClassPtr; // 0xf0
	float _crouchAttackRequiredTimeSeconds; // 0x120
	bool _debugMode; // 0x130
};

struct UAddon_TormentMode_18 {
	float _obliviousDuration; // 0x2a8
};

struct UMovieSceneComponentMaterialTrack {
	int32_t MaterialIndex; // 0x70
};

struct UCoreRewardWidget {
	UDBDImage* RewardIcon; // 0x398
};

struct UGizmoUniformScaleParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60
	float ScaleMultiplier; // 0x70
	FVector2D Parameter; // 0x74
	FGizmoVec2ParameterChange LastChange; // 0x7c
	FVector CurScaleOrigin; // 0x8c
	FVector CurScaleNormal; // 0x98
	FVector CurScaleAxisX; // 0xa4
	FVector CurScaleAxisY; // 0xb0
	FTransform InitialTransform; // 0xc0
};

struct UPharmacyPerk {
	TArray<float> _searchSpeeds; // 0x3d0
};

struct UInteractiveToolsContext {
	UInputRouter* InputRouter; // 0x60
	UInteractiveToolManager* ToolManager; // 0x68
	UInteractiveGizmoManager* GizmoManager; // 0x70
	TSoftClassPtr<UObject> ToolManagerClass; // 0x78
};

struct UAkXboxOneGDKInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UCoreTutorialPopupWidget {
	UAkAudioEvent* ClosePopupSfx; // 0x2f8
	FMulticastInlineDelegate _notifTutoConfirmButtonClickDelegate; // 0x300
};

struct UTransformGizmo {
	UTransformProxy* ActiveTarget; // 0x48
	bool bSnapToWorldGrid; // 0x50
	bool bUseContextCoordinateSystem; // 0x51
	EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x54
	TArray<UPrimitiveComponent*> ActiveComponents; // 0xf0
	TArray<UPrimitiveComponent*> NonuniformScaleComponents; // 0x100
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x110
	UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x130
	UGizmoComponentAxisSource* AxisXSource; // 0x138
	UGizmoComponentAxisSource* AxisYSource; // 0x140
	UGizmoComponentAxisSource* AxisZSource; // 0x148
	UGizmoComponentAxisSource* UnitAxisXSource; // 0x150
	UGizmoComponentAxisSource* UnitAxisYSource; // 0x158
	UGizmoComponentAxisSource* UnitAxisZSource; // 0x160
	UGizmoTransformChangeStateTarget* StateTarget; // 0x168
	UGizmoScaledTransformSource* ScaledTransformSource; // 0x170
};

struct UARTexture {
	EARTextureType TextureType; // 0xc0
	float Timestamp; // 0xc4
	FGuid ExternalTextureGuid; // 0xc8
	FVector2D Size; // 0xd8
};

struct UInterpTrackAkAudioEvent {
	TArray<FAkAudioEventTrackKey> Events; // 0x98
	char bContinueEventOnMatineeEnd : 1; // 0xa8
};

struct UCorePlayerStatusesContainerWidget {
	TArray<UCorePlayerStatusWidget*> PlayerStatusWidgets; // 0x300
	TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusViewInterfaces; // 0x310
};

struct UCoreInteractionPromptActionWidget {
	UCoreInputPromptWidget* InputPrompt; // 0x2d8
	UCoreInputPromptWidget* InputPrompt2; // 0x2e0
	UCoreInputPromptWidget* InputPrompt3; // 0x2e8
	UCoreInputPromptWidget* InputPrompt4; // 0x2f0
	FName IdleAnimationName; // 0x2f8
	FKey InputKey; // 0x308
	FKey InputKey2; // 0x328
	FKey InputKey3; // 0x348
	FKey InputKey4; // 0x368
};

struct UBearTrapOutlineUpdateStrategy {
	FLinearColor UnrevealedColor; // 0xc0
	FLinearColor RevealedColorToSurvivor; // 0xd0
	UCurveLinearColor* KillerOutlineFadeCurve; // 0xe0
	UMapActorComponent* _owningBearTrapMapActorComponent; // 0xf0
};

struct UBloodDecalEffectIntensity {
	FColor IntensifyBloodColor; // 0x38
	FColor IntensifyBloodColor2; // 0x3c
	FColor IntensifyBloodColorEmissive; // 0x40
	float IntensifyBloodColorEmissiveMinimumIntensity; // 0x44
	float IntensifyBloodColorEmissiveMaximumIntensity; // 0x48
};

struct UParticleSystemDistanceFaderComponent {
	UParticleSystemComponent* ParticleSystemComponent; // 0xb8
	FName OpacityParameterName; // 0xc0
	float StartFadeDistance; // 0xcc
	float EndFadeDistance; // 0xd0
};

struct UPowerButton {
	UActionButton* Button; // 0x300
	UCanvasPanel* SwitchIcon; // 0x308
	UCanvasPanel* CountContainer; // 0x310
	UCanvasPanel* RadialProgressBarContainer; // 0x318
	UTextBlock* CountLabel; // 0x320
	UImage* TierImage; // 0x328
	UCanvasPanel* AddonsContainer; // 0x330
	UUMGInventoryItemButton* FirstAddonSlot; // 0x338
	UUMGInventoryItemButton* SecondAddonSlot; // 0x340
	UProgressBar* FillPowerChargeProgression; // 0x348
	float DisabledOpacity; // 0x350
	float EnabledOpacity; // 0x354
	bool EnabledLongPressed; // 0x358
	int32_t _itemCount; // 0x35c
};

struct UUMGAtlantaEventsDescription {
	UAtlantaEventsTemplateDataAsset* widgetData; // 0x300
	UCanvasPanel* ItemsRewards; // 0x308
	UTextBlock* Title; // 0x310
	UTextBlock* Description; // 0x318
	UTextBlock* TimePeriodTitle; // 0x320
	UTextBlock* TimePeriodStart; // 0x328
	UTextBlock* TimePeriodEnd; // 0x330
	UUMGBaseButtonWidget* DeepLinkButton; // 0x338
	UCanvasPanel* TimePeriodCanvas; // 0x340
};

struct UPlagueCorruptUniqueTargetsQEEvaluator {
	AActor* _previousTarget; // 0x90
};

struct UBTService_AroundEQS {
	FBlackboardKeySelector BBAroundObj; // 0x108
	FBlackboardKeySelector BBAroundLocation; // 0x138
	float ValidLocationRefreshInterval; // 0x168
	float InvalidLocationRefreshInterval; // 0x16c
	float InvalidateLocationUnderTargetDistance; // 0x170
};

struct UNavLinkCustomComponent {
	uint32_t NavLinkUserId; // 0xf0
	UNavArea* EnabledAreaClass; // 0xf8
	UNavArea* DisabledAreaClass; // 0x100
	FNavAgentSelector SupportedAgents; // 0x108
	FVector LinkRelativeStart; // 0x10c
	FVector LinkRelativeEnd; // 0x118
	ENavLinkDirection LinkDirection; // 0x124
	char bLinkEnabled : 1; // 0x128
	char bNotifyWhenEnabled : 1; // 0x128
	char bNotifyWhenDisabled : 1; // 0x128
	char bCreateBoxObstacle : 1; // 0x128
	FVector ObstacleOffset; // 0x12c
	FVector ObstacleExtent; // 0x138
	UNavArea* ObstacleAreaClass; // 0x148
	float BroadcastRadius; // 0x150
	float BroadcastInterval; // 0x154
	ECollisionChannel BroadcastChannel; // 0x158
};

struct UAddon_K24_19 {
	AZombieEscapeDoorPointsActor* _zombieEscapeDoorPointsActor; // 0x2c0
};

struct AZombieEscapeDoorPointsActor {
	TArray<UArrowComponent*> _availablePoints; // 0x230
};

struct AController {
	APlayerState* PlayerState; // 0x238
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x248
	FName StateName; // 0x258
	APawn* Pawn; // 0x268
	ACharacter* Character; // 0x278
	USceneComponent* TransformComponent; // 0x280
	FRotator ControlRotation; // 0x2a0
	char bAttachToPawn : 1; // 0x2ac
};

struct UInteractionSurvivorSubAnimInstance {
	bool _isAgainstSmallKiller; // 0x4f0
	bool _isInsideCloset; // 0x4f1
	bool _isEnteringCloset; // 0x4f2
	bool _isBeingCarried; // 0x4f3
	bool _isHooked; // 0x4f4
	bool _isSacrificeStruggling; // 0x4f5
	float _sacrificeStrugglePercent; // 0x4f8
	bool _selfUnhookFailed; // 0x4fc
	EInteractionAnimation _interactionAnimation; // 0x4fd
	FVector _snapPosition; // 0x500
	bool _isInteractingWithEscapeDoor; // 0x50c
};

struct UNiagaraPreviewAxis_InterpParamVector {
	FVector Min; // 0x40
	FVector Max; // 0x4c
};

struct UAnimCurveCompressionSettings {
	UAnimCurveCompressionCodec* Codec; // 0x30
};

struct UInterpTrackAnimControl {
	FName SlotName; // 0x98
	TArray<FAnimControlTrackKey> AnimSeqs; // 0xa8
	char bSkipAnimNotifiers : 1; // 0xb8
};

struct UStillnessTrackerComponent {
	float SpeedThreshold; // 0xb8
	float DistanceThreshold; // 0xbc
	float DistanceDecay; // 0xc0
	bool DecayWhileMoving; // 0xc4
	float StillnessThreshhold; // 0xc8
	float StillnessTimerLimit; // 0xcc
	float DecaySpeedMultiplier; // 0xd0
	TWeakObjectPtr<ADBDPlayer> _trackedPlayer; // 0xdc
};

struct UDBDDesignTunables {
	int32_t WinStreakThresholdLarge; // 0x30
	int32_t WinStreakThresholdSmall; // 0x34
	int32_t MaxFearTokens; // 0x38
	int32_t QuantityOfItemsToBuyBeforeFreeBloodwebRefresh; // 0x3c
	TArray<FPerkLevelDefinition> PerkLevelDefinitions; // 0x40
	TSet<FGameplayTag> MetaModifiers; // 0x50
	TSet<FGameplayTag> RangedSurvivorAuraPerceptionModifiers; // 0xa0
	TSet<FGameplayTag> SurvivorRevelatoryAuraPerceptionModifiers; // 0xf0
	TSet<FGameplayTag> DisruptableAuraReadingFlags; // 0x140
	bool ShouldUseKillerLobby; // 0x190
	TSoftClassPtr<UObject> TextDesignTunableClass; // 0x198
	UDBDTextDesignTunables* TextTunables; // 0x1c8
	TSoftClassPtr<UObject> CoreUMGDesignTunableClass; // 0x1d0
	UDBDCoreUMGDesignTunables* CoreUMGDesignTunables; // 0x200
	TSoftClassPtr<UObject> AtlantaDesignTunableClass; // 0x208
	UDBDAtlantaDesignTunables* AtlantaDesignTunables; // 0x238
};

struct UDecoySlasherComponent {
	FMulticastInlineDelegate OnPalletStunned_Authority; // 0xb8
	FMulticastInlineDelegate TriggerDecoyVisibilityVFX; // 0xc8
	bool HasTerrorRadius; // 0xd8
	bool HasRedGlow; // 0xd9
	bool _isActive; // 0xda
	bool _initialized; // 0xdb
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter; // 0xe0
	URedStainComponent* _redStainComponent; // 0xe8
};

struct UOpenChestInteraction {
	FGameplayTag _camperSearchablePercentTag; // 0x700
	UAnimSequence* _successExitTimeAnimSequenceReference; // 0x710
	float _startTime; // 0x718
};

struct UCustomizationDescription {
	TArray<FCustomizedMeshPart> Parts; // 0x38
};

struct UBTService_FindInteractor_Trap {
	FAITunableParameter HelpDestroyDemoPortal; // 0x218
	FAIRoll SeeStandardTrapRoll; // 0x228
	float TrapGroundLocationOffset; // 0x24c
};

struct UDBDInstancedFoliageComponent {
	int32_t NextBaseId; // 0xb8
	TMap<int32_t, USceneComponent*> InstanceBaseMap; // 0xc0
	TArray<FDBDFoliageInfo> Foliage; // 0x110
};

struct UCoreScreenIndicatorWidget {
	float InactiveTime; // 0x2d8
	FVector2D IndicatorPadding; // 0x2dc
	FVector2D DistanceClamping; // 0x2e4
	float MinDistanceRatio; // 0x2ec
	float MinDistanceAlpha; // 0x2f0
};

struct UAISenseEvent_Terror {
	FAITerrorEvent Event; // 0x30
};

struct UInGameAssetPreloaderComponent {
	TSet<FPrimaryAssetId> _generalPrimaryAssetIds; // 0xd0
	TSet<TSoftClassPtr<UObject>> _generalRegularAssets; // 0x120
	TArray<UInGameAssetPreloaderGatherer*> _assetGathererClasses; // 0x170
	TArray<UInGameAssetPreloaderGatherer*> _assetGatherers; // 0x180
};

struct URuntimeVirtualTexture {
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x30
	bool bCompressTextures; // 0x31
	bool bEnable; // 0x32
	bool bClearTextures; // 0x33
	bool bSinglePhysicalSpace; // 0x34
	bool bPrivateSpace; // 0x35
	bool bEnableScalability; // 0x36
	int32_t Size; // 0x38
	int32_t TileCount; // 0x3c
	int32_t TileSize; // 0x40
	int32_t TileBorderSize; // 0x44
	int32_t StreamLowMips; // 0x48
	URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x50
	bool bEnableCompressCrunch; // 0x58
	int32_t RemoveLowMips; // 0x5c
};

struct UAISkill_InteractionUseItem_LamentConfiguration {
	FDBDTunableRowHandle _solveLamentMaxCharge; // 0x178
};

struct UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x30
	FNavigationFilterFlags IncludeFlags; // 0x40
	FNavigationFilterFlags ExcludeFlags; // 0x44
};

struct UK25ChainStrikeImmunityEffect {
	FDBDTunableRowHandle _chainStrikeImmunityDuration; // 0x370
};

struct UAtlantaObjectiveWidget {
	UTextBlock* ObjectiveLabel; // 0x300
	float _totalFadeOutTime; // 0x35c
	int32_t _polynomialOrder; // 0x360
};

struct ULandscapeComponent {
	int32_t SectionBaseX; // 0x428
	int32_t SectionBaseY; // 0x42c
	int32_t ComponentSizeQuads; // 0x430
	int32_t SubsectionSizeQuads; // 0x434
	int32_t NumSubsections; // 0x438
	UMaterialInterface* OverrideMaterial; // 0x440
	UMaterialInterface* OverrideHoleMaterial; // 0x448
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x450
	TArray<UMaterialInstanceConstant*> materialInstances; // 0x460
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x470
	TArray<int8_t> LODIndexToMaterialIndex; // 0x480
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x490
	UTexture2D* XYOffsetmapTexture; // 0x4a0
	FVector4 WeightmapScaleBias; // 0x4b0
	float WeightmapSubsectionOffset; // 0x4c0
	FVector4 HeightmapScaleBias; // 0x4d0
	FBox CachedLocalBox; // 0x4e0
	LazyObjectProperty CollisionComponent; // 0x4fc
	UTexture2D* HeightmapTexture; // 0x518
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x520
	TArray<UTexture2D*> WeightmapTextures; // 0x530
	FGuid MapBuildDataId; // 0x540
	TArray<FGuid> IrrelevantLights; // 0x550
	int32_t CollisionMipLevel; // 0x560
	int32_t SimpleCollisionMipLevel; // 0x564
	float NegativeZBoundsExtension; // 0x568
	float PositiveZBoundsExtension; // 0x56c
	float StaticLightingResolution; // 0x570
	int32_t ForcedLOD; // 0x574
	int32_t LODBias; // 0x578
	FGuid StateId; // 0x57c
	FGuid BakedTextureMaterialGuid; // 0x58c
	UTexture2D* GIBakedBaseColorTexture; // 0x5a0
	char MobileBlendableLayerMask; // 0x5a8
	UMaterialInterface* MobileMaterialInterface; // 0x5b0
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x5b8
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x5c8
};

struct USoundNodeDistanceCrossFade {
	TArray<FDistanceDatum> CrossFadeInput; // 0x50
};

struct URestrictedPlacementAreaStrategy {
	FDBDTunableRowHandle RestrictedRadius; // 0x40
	float MaxHeightRestriction; // 0x6c
};

struct UUIScaleManager {
	UDataTable* _dpiScaleCurveDB; // 0x38
	UCurveFloat* _dpiScaleCurve; // 0x40
};

struct UInDirectionOfKillerQEEvaluator {
	ADBDPlayer* _killer; // 0x90
};

struct UGameplayTagsDeveloperSettings {
	FString DeveloperConfigName; // 0x30
};

struct UDownedByBasicAttack {
	bool _replicatedIsTrue; // 0xe8
};

struct UMovieSceneCameraShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x60
};

struct UPendingNetGame {
	UNetDriver* NetDriver; // 0x38
	UDemoNetDriver* DemoNetDriver; // 0x40
};

struct UMaterialExpressionArcsineFast {
	FExpressionInput Input; // 0x48
};

struct ULuminARLightEstimate {
	TArray<float> AmbientIntensityNits; // 0x48
};

struct UDBDRichPresenceSubsystem {
	ERichPresenceUserType _userType; // 0x38
	ERichPresenceStatus _richPresenceStatus; // 0x39
	float _timerRate; // 0x3c
	float _timerDelay; // 0x40
	bool _isValidSetup; // 0x44
};

struct UAnimCompress_RemoveEverySecondKey {
	int32_t MinKeys; // 0x48
	char bStartAtSecondKey : 1; // 0x4c
};

struct UEnvQueryNode {
	int32_t VerNum; // 0x30
};

struct UAISkill_Interaction_ForThePeople {
	FString BlockInteractionId; // 0x178
};

struct UGizmoComponentWorldTransformSource {
	USceneComponent* Component; // 0x50
	bool bModifyComponentOnTransform; // 0x58
};

struct UInAppPurchaseRestoreCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMaterialExpressionBlackBody {
	FExpressionInput Temp; // 0x48
};

struct UMaterialExpressionParameter {
	FName ParameterName; // 0x48
	FGuid ExpressionGUID; // 0x54
};

struct APaperFlipbookActor {
	UPaperFlipbookComponent* RenderComponent; // 0x230
};

struct UCanvasPanelSlot {
	FAnchorData LayoutData; // 0x40
	bool bAutoSize; // 0x68
	int32_t ZOrder; // 0x6c
};

struct UAudioImpulseResponse {
	TArray<float> ImpulseResponse; // 0x30
	int32_t NumChannels; // 0x40
	int32_t SampleRate; // 0x44
	float NormalizationVolumeDb; // 0x48
	TArray<float> IRData; // 0x50
};

struct UAIMoveToPositionData {
	AActor* _positionActor; // 0x30
	ECharacterMovementTypes _movementType; // 0x38
	bool _usePathfinding; // 0x39
};

struct UTriggerableWorldObjectComponent {
	FMulticastInlineDelegate OnTriggered; // 0xb8
	FMulticastInlineDelegate OnTriggerReset; // 0xc8
	float _triggerResetTime; // 0xd8
	float _randomChance; // 0xdc
	float _rollFrequency; // 0xe0
	TWeakObjectPtr<UPrimitiveComponent> _conditionalTriggerVolume; // 0xf0
	TSet<ADBDPlayer*> _conditionalVolumeOverlappingPlayers; // 0xf8
	TWeakObjectPtr<UPrimitiveComponent> _guaranteedTriggerVolume; // 0x148
};

struct UMaterialExpressionReroute {
	FExpressionInput Input; // 0x48
};

struct UMagicLeapHeadTrackingNotificationsComponent {
	FMulticastInlineDelegate OnHeadTrackingLost; // 0x148
	FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x158
	FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x168
	FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x178
};

struct UMovieSceneObjectPropertySection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UDBDAuthentication {
	TArray<FAuthenticationInfo> _localInfos; // 0x30
	TArray<FAuthenticationInfo> _remoteInfos; // 0x40
	UDBDGameInstance* _gameInstance; // 0x50
};

struct UBlackboardData {
	UBlackboardData* Parent; // 0x38
	TArray<FBlackboardEntry> Keys; // 0x40
	char bHasSynchronizedKeys : 1; // 0x50
};

struct USceneComponent {
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0xc0
	USceneComponent* AttachParent; // 0xc8
	FName AttachSocketName; // 0xd0
	TArray<USceneComponent*> AttachChildren; // 0xe0
	TArray<USceneComponent*> ClientAttachedChildren; // 0xf0
	FVector RelativeLocation; // 0x134
	FRotator RelativeRotation; // 0x140
	FVector RelativeScale3D; // 0x14c
	FVector ComponentVelocity; // 0x158
	char bComponentToWorldUpdated : 1; // 0x164
	char bAbsoluteLocation : 1; // 0x164
	char bAbsoluteRotation : 1; // 0x164
	char bAbsoluteScale : 1; // 0x164
	char bVisible : 1; // 0x164
	char bShouldBeAttached : 1; // 0x164
	char bShouldSnapLocationWhenAttached : 1; // 0x165
	char bShouldSnapRotationWhenAttached : 1; // 0x165
	char bShouldUpdatePhysicsVolume : 1; // 0x165
	char bSkipComponentAndChildrenTransformUpdate : 1; // 0x165
	char bHiddenInGame : 1; // 0x165
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x165
	char bUseAttachParentBound : 1; // 0x165
	EComponentMobility Mobility; // 0x167
	EDetailMode DetailMode; // 0x168
	int32_t DetailModeBitMask; // 0x16c
	FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x170
};

struct UUMGBaseToastWidget {
	UImage* ToastIcon; // 0x300
	UTextBlock* ToastText; // 0x308
	UProgressBar* TimeToastProgression; // 0x310
};

struct UUMGBloodStoreItemPreviewWidget {
	FText _itemName; // 0x330
	FText _itemDescription; // 0x348
	int32_t _itemPrice; // 0x360
	FText _refreshPrice; // 0x368
	FText _nodeStatusText; // 0x380
	FText _refreshTitle; // 0x398
	FText _itemSelectionTitle; // 0x3b0
	FText _itemSelectionText; // 0x3c8
	FText _purchaseTitle; // 0x3e0
};

struct UProveThyselfEffect {
	FDBDTunableRowHandle _proveThyselfRange; // 0x378
	float _speedPercentageAddedPerSurvivorRepairingInRange; // 0x3a0
};

struct UDisplayStandCurrencyRequesterComponent {
	UObject* _menuCurrencyDisplayableClass; // 0xc0
};

struct UThrillingTremors {
	int32_t _cooldownByLevel[0x3]; // 0x3d0
	float _durationByLevel[0x3]; // 0x3dc
	bool _disableWhenSurvivorPutDownOrUnhooked; // 0x3e8
	FLinearColor _generatorAuraColorForKiller; // 0x3ec
	TArray<AGenerator*> _blockedGenerators; // 0x400
	TArray<AGenerator*> _revealedGenerators; // 0x410
};

struct UZombieFallDetectorComponent {
	FDBDTunableRowHandle _zombieDistanceConsideredSmashFall; // 0xb8
};

struct UMaterialShaderQualitySettings {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x30
};

struct UAkPS4InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UProceduralFoliageTile {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x30
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd8
};

struct UOnlineMessagesContainerComponent {
	TArray<FInboxMessageData> _messages; // 0xb8
};

struct UNiagaraLightRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x58
	char bAffectsTranslucency : 1; // 0x58
	char bOverrideRenderingEnabled : 1; // 0x58
	float RadiusScale; // 0x5c
	FVector ColorAdd; // 0x60
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x70
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0x100
	FNiagaraVariableAttributeBinding PositionBinding; // 0x190
	FNiagaraVariableAttributeBinding ColorBinding; // 0x220
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x2b0
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x340
};

struct UUVProjectionToolProperties {
	EUVProjectionMethod UVProjectionMethod; // 0x58
	FVector ProjectionPrimitiveScale; // 0x5c
	float CylinderProjectToTopOrBottomAngleThreshold; // 0x68
	FVector2D UVScale; // 0x6c
	FVector2D UVOffset; // 0x74
	bool bWorldSpaceUVScale; // 0x7c
};

struct UUmgSurvivorHud {
	UActionButton* CrouchButton; // 0x530
	UCanvasPanel* CrouchButtonContainer; // 0x538
	UWiggleWidget* StruggleWidget; // 0x540
	UCanvasPanel* StruggleWidgetContainer; // 0x548
	UWiggleWidget* WiggleWidget; // 0x550
	UCanvasPanel* WiggleWidgetContainer; // 0x558
	ACamperPlayer* survivor; // 0x560
	UActionButton* CancelButton; // 0x568
	UCanvasPanel* CenterInteractionButtonContainer; // 0x570
	UCanvasPanel* LookBackButtonContainer; // 0x578
	UAtlantaHudLookBackJoystick* LookBackJoystick; // 0x580
	UActionButton* SkillCheckButton; // 0x588
	UCanvasPanel* SkillCheckButtonCanvas; // 0x590
	UCanvasPanel* InsaneSkillCheckButtonCanvas; // 0x598
	FSlateBrush _unpressedLookBackJoystickThumbImage; // 0x5a8
	FSlateBrush _pressedLookBackJoystickThumbImage; // 0x638
	FSlateBrush _unpressedLookBackJoystickBackgroundImage; // 0x6e8
	FSlateBrush _pressedLookBackJoystickBackgroundImage; // 0x778
};

struct UAndroidPermissionCallbackProxy {
	FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x30
};

struct UUMGTallyProgressBar {
	UProgressBar* ProgressBar; // 0x300
	UCanvasPanel* PipsContainer; // 0x308
	TArray<TSoftClassPtr<UObject>> _pipsClasses; // 0x310
	FVector2D _pipsAlignment; // 0x320
};

struct UBTTask_Wait {
	float WaitTime; // 0x78
	float RandomDeviation; // 0x7c
};

struct UMaterialExpressionDepthOfFieldFunction {
	EDepthOfFieldFunctionValue FunctionValue; // 0x48
	FExpressionInput Depth; // 0x4c
};

struct UAtlantaCamperInitializer {
	FVector HeartbeatOffset; // 0xb8
};

struct UK25ProjectileLauncher {
	FDBDTunableRowHandle _controlledProjectileInitialSpeed; // 0x180
	bool _isControlledProjectileRequested; // 0x1a8
	AK25ControlledProjectile* _controlledProjectile; // 0x1b0
};

struct UAISkill_Interaction_DismissCrow {
	FDBDTunableRowHandle _dismissCrowMaxCharge; // 0x170
};

struct URemoveOccludedTrianglesTool {
	URemoveOccludedTrianglesToolProperties* BasicProperties; // 0x98
	URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties; // 0xa0
	TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8
	TArray<UPreviewMesh*> PreviewCopies; // 0xb8
};

struct UMaterialExpressionMaterialFunctionCall {
	UMaterialFunctionInterface* MaterialFunction; // 0x48
	FMaterialParameterInfo FunctionParameterInfo; // 0x50
};

struct URifleChainTensionComponent {
	FMulticastInlineDelegate OnIsBuildingTensionChanged; // 0xc0
	bool _isBuildingTension; // 0xe8
	USurvivorChainLinkableComponent* _targetlinkable; // 0xf0
	FDBDTunableRowHandle _maxTensionCharge; // 0x108
	FDBDTunableRowHandle _baseTensionRate; // 0x130
	FDBDTunableRowHandle _collisionTensionRate; // 0x158
	FTunableStat _survivorPullingTensionRate; // 0x180
	FNonTunableStat _currentTensionRate; // 0x200
	EProgressModifier _progressModifierForSurvivors; // 0x260
	FText _chargeProgressDescriptionText; // 0x268
	ARifleChain* _chain; // 0x290
};

struct UCustomizedAnimationComponent {
	ADBDBasePlayer* _owner; // 0xb8
	UCustomizedSkeletalMesh* _customizedSkeletalMesh; // 0xc0
	UAnimInstance* _defaultAnimClass; // 0xc8
};

struct AGeometryCollectionRenderLevelSetActor {
	UVolumeTexture* TargetVolumeTexture; // 0x230
	UMaterial* RayMarchMaterial; // 0x238
	float SurfaceTolerance; // 0x240
	float Isovalue; // 0x244
	bool enabled; // 0x248
	bool RenderVolumeBoundingBox; // 0x249
};

struct UGeometryCacheTrackStreamable {
	UGeometryCacheCodecBase* Codec; // 0x60
	float StartSampleTime; // 0xd0
};

struct UGameplayTask_WaitDelay {
	FMulticastInlineDelegate OnFinish; // 0x70
};

struct UGhostStealthComponent {
	FMulticastInlineDelegate OnSuccessfulAttackInStealth; // 0xb8
	FMulticastInlineDelegate OnStealthStateChanged; // 0xc8
	FMulticastInlineDelegate OnIsStealthChanged; // 0xd8
	FMulticastInlineDelegate OnIsBeingSpotChanged; // 0xe8
	FMulticastInlineDelegate Local_OnStealthCancelledByPlayer; // 0xf8
	EGhostStealthState _stealthState; // 0x108
	UTimerObject* _cooldownTimer; // 0x148
	TMap<ACharacter*, TWeakObjectPtr<AScreenIndicatorWorldMarker>> _markers; // 0x150
	float _markerMaxAngleOffset; // 0x1b0
	bool _useKillerInstinctWhenSpotted; // 0x1b4
	UCharacterSightableComponent* _sightableComponent; // 0x1b8
	UStalkerComponent* _stalkerComponent; // 0x1c0
};

struct UK26PowerOutlineUpdateStrategy {
	FLinearColor _k26ProjectileOutlineColour; // 0xc0
	bool _isOutlineEnabled; // 0xd0
	bool _isOnlyVisibleForKiller; // 0xd1
};

struct UTimerObject {
	FReplicationTimerData _replicationData; // 0x118
};

struct UGameplayModifierContainer {
	FModifierTickableConditionReplicatedData _tickableConditionsData; // 0x188
	TArray<FName> _tags; // 0x1a0
	bool UseApplyFunction; // 0x1b0
	bool BroadcastStatusView; // 0x1b1
	FName StatusViewID; // 0x1b4
	bool _autoInitializeOnBeginPlay; // 0x1c0
	bool _canOptimizeTickActivation; // 0x1c1
	UTimerObject* _activationTimer; // 0x210
};

struct UUMGBankAndPlayerInfoWidget {
	UUMGBankWidget* BankWidget; // 0x300
	UTextBlock* PlayerNameText; // 0x308
	UUMGSelectedCharacterWidget* SelectedCharacterWidget; // 0x310
	ESlateVisibility RankWidgetVisibility; // 0x318
	UUMGLevelBannerWidget* LevelBanner; // 0x320
	UUMGRankBanner* RankBanner; // 0x328
	UUMGMainMenuMonthlyPassButton* MonthlyPassButton; // 0x330
	FMulticastInlineDelegate _onCancelPartyButtonClickedEvent; // 0x398
};

struct UMaterialExpressionIf {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	FExpressionInput AGreaterThanB; // 0x80
	FExpressionInput AEqualsB; // 0x9c
	FExpressionInput ALessThanB; // 0xb8
	float EqualsThreshold; // 0xd4
	float ConstB; // 0xd8
	float ConstAEqualsB; // 0xdc
};

struct UMaterialExpressionAppendVector {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
};

struct ASwitchActor {
	USceneComponent* SceneComponent; // 0x248
	int32_t LastSelectedOption; // 0x250
};

struct UMoviePlayerSettings {
	bool bWaitForMoviesToComplete; // 0x30
	bool bMoviesAreSkippable; // 0x31
	TArray<FString> StartupMovies; // 0x38
};

struct UInteractiveToolPropertySet {
	UObject* CachedProperties; // 0x48
	bool bIsPropertySetEnabled; // 0x50
};

struct UDatasmithDeltaGenSceneImportData {
	bool bMergeNodes; // 0x50
	bool bOptimizeDuplicatedNodes; // 0x51
	bool bRemoveInvisibleNodes; // 0x52
	bool bSimplifyNodeHierarchy; // 0x53
	bool bImportVar; // 0x54
	FString VarPath; // 0x58
	bool bImportPos; // 0x68
	FString PosPath; // 0x70
	bool bImportTml; // 0x80
	FString TmlPath; // 0x88
};

struct ULoopBannerProvider {
	int32_t _currentLoopIndex; // 0x40
};

struct UAIMoveToInteract {
	UAIMoveToInteractData* _aiMoveToInteractData; // 0x58
	ADBDAIPlayerController* _aiController; // 0x60
};

struct UCoreButtonWidget {
	FMulticastInlineDelegate OnHoveredDelegate; // 0x2d8
	FMulticastInlineDelegate OnUnhoveredDelegate; // 0x2e8
	FMulticastInlineDelegate OnPressedDelegate; // 0x2f8
	FMulticastInlineDelegate OnReleasedDelegate; // 0x308
	FMulticastInlineDelegate OnClickedDelegate; // 0x318
	FString HoveredSfxName; // 0x328
	UAkAudioEvent* HoveredSfx; // 0x338
	FString PressedSfxName; // 0x340
	UAkAudioEvent* PressedSfx; // 0x350
	FString ClickedSfxName; // 0x358
	UAkAudioEvent* ClickedSfx; // 0x368
	EAnalogCursorStickiness AnalogCursorStickiness; // 0x370
	UDBDButton* HitzoneButton; // 0x378
	UDBDTextBlock* LabelTB; // 0x380
};

struct ADatasmithSceneActor {
	UDatasmithScene* Scene; // 0x230
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x238
};

struct UAlignObjectsToolProperties {
	EAlignObjectsAlignTypes AlignType; // 0x58
	EAlignObjectsAlignToOptions AlignTo; // 0x5c
	EAlignObjectsBoxPoint BoxPosition; // 0x60
	bool bAlignX; // 0x64
	bool bAlignY; // 0x65
	bool bAlignZ; // 0x66
};

struct UUMGRoleSwitcherWidget {
	bool _isCurrentRoleRoleSwitcher; // 0x260
	float _touchDeltaTolerance; // 0x264
};

struct APaperTileMapActor {
	UPaperTileMapComponent* RenderComponent; // 0x230
};

struct UWidgetSwitcherSlot {
	FMargin Padding; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct USabotageSurvivorSubAnimInstance {
	bool _isSabotaging; // 0x530
	bool _hasSkillCheckFailed; // 0x531
};

struct UPowerChargeComponent {
	FMulticastInlineDelegate OnPowerChargeChanged; // 0xb8
	FSpeedBasedNetSyncedValue _currentCharge; // 0x120
	bool _forceFullCharge; // 0x15c
};

struct URemoveOccludedTrianglesToolProperties {
	EOcclusionCalculationUIMode OcclusionTestMethod; // 0x58
	EOcclusionTriangleSamplingUIMode TriangleSampling; // 0x59
	double WindingIsoValue; // 0x60
	int32_t AddRandomRays; // 0x68
	int32_t AddTriangleSamples; // 0x6c
	bool bOnlySelfOcclude; // 0x70
};

struct UAvoidanceManager {
	float DefaultTimeToLive; // 0x38
	float LockTimeAfterAvoid; // 0x3c
	float LockTimeAfterClean; // 0x40
	float DeltaTimeToPredict; // 0x44
	float ArtificialRadiusExpansion; // 0x48
	float TestHeightDifference; // 0x4c
	float HeightCheckMargin; // 0x50
};

struct UUMGCharacterInfoScreen {
	UCanvasPanel* ContentPanel; // 0x300
	TSoftClassPtr<UObject> SurvivorInfoWidgetClass; // 0x308
	TSoftClassPtr<UObject> KillerInfoWidgetClass; // 0x338
	UUMGPopupButton* ProgressionButton; // 0x368
	FMulticastInlineDelegate _onTeachableTooltipTriggeredLongPressEvent; // 0x370
	FMulticastInlineDelegate _onPowerItemTooltipTriggeredLongPressEvent; // 0x380
	FMulticastInlineDelegate _onProgressionButtonClickEvent; // 0x390
};

struct UInterpTrackInstProperty {
	TFieldPath<FProperty> InterpProperty; // 0x30
	UObject* PropertyOuterObjectInst; // 0x50
};

struct UBTTask_PlayAnimation {
	UAnimationAsset* AnimationToPlay; // 0x78
	char bLooping : 1; // 0x80
	char bNonBlocking : 1; // 0x80
	UBehaviorTreeComponent* MyOwnerComp; // 0x88
	USkeletalMeshComponent* CachedSkelMesh; // 0x90
};

struct UUMGAlertsWidget {
	TSoftClassPtr<UObject> AtlantaScoreAlertComponentClass; // 0x300
	TSoftClassPtr<UObject> AtlantaStatusEffectAlertComponentClass; // 0x330
	UCanvasPanel* CanvasPanelAlerts; // 0x360
	float IdleTime; // 0x368
	UObject* _scoreAlertClass; // 0x3b0
	UObject* _statusEffectAlertClass; // 0x3b8
};

struct UFaceCorrectionSurvivorSubAnimInstance {
	bool _isIdle; // 0x4f0
	bool _isFreddyMori; // 0x4f1
	bool _isInCloset; // 0x4f2
	bool _isEdgeCase; // 0x4f3
	bool _isInjured; // 0x4f4
	bool _isHealingOthers; // 0x4f5
	bool _isCrouched; // 0x4f6
};

struct UFromBoneGroundDetectorComponent {
	FVector _startOffset; // 0x1d0
};

struct AWheeledVehicle {
	USkeletalMeshComponent* Mesh; // 0x290
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x298
};

struct UProxyLODMeshSimplificationSettings {
	FName ProxyLODMeshReductionModuleName; // 0x48
};

struct UPathStrategy {
	TArray<UPathBuilder*> DefaultPathBuilders; // 0x40
	float RefreshPartialPathDelay; // 0x50
	float StartNextBranchBuildDelay; // 0x54
	ADBDAIBTController* _aiOwner; // 0x58
	TArray<UPathBuilder*> _pathBuilders; // 0x60
};

struct UClippableProviderComponent {
	TSet<UPrimitiveComponent*> _ignoredPrimitives; // 0xb8
};

struct UHinderOnIdleAndAttachStatusEffect {
	FGameplayTag _onCrowAttachStateTag; // 0x390
};

struct UMovieSceneSkeletalAnimationTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x60
	bool bUseLegacySectionIndexBlend; // 0x70
};

struct UMaterialExpressionBreakMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x48
};

struct UBloodOrbConfiguratorComponent {
	ABloodOrb* _bloodOrbClass; // 0xb8
	TArray<FGameEventBloodOrbDropParams> _bloodOrbDropGameEvents; // 0xc0
	float _fadeDuration; // 0xd0
	float _initialFadeOutDelay; // 0xd4
	FLinearColor _bloodOrbAuraColor; // 0xd8
	FLinearColor _bloodOrbAttractedAuraColor; // 0xe8
	float _bloodOrbVisibilityRangeInterpolationSpeed; // 0xf8
	AMobileBloodOrbRenderer* _mobileBloodOrbRendererClass; // 0x100
};

struct UBaseLockerInteraction {
	ALocker* _owningLocker; // 0x5b0
};

struct URadialFalloff {
	float Magnitude; // 0xb8
	float MinRange; // 0xbc
	float MaxRange; // 0xc0
	float Default; // 0xc4
	float Radius; // 0xc8
	FVector Position; // 0xcc
	EFieldFalloffType Falloff; // 0xd8
};

struct UMaterialExpressionSine {
	FExpressionInput Input; // 0x48
	float Period; // 0x64
};

struct UUMGAtlantaMatchConfigPageScroll {
	FCustomMatchTabConfig CharactersTabConfig; // 0x438
	FCustomMatchTabConfig InventoryTabConfig; // 0x478
	FCustomMatchTabConfig MapTabConfig; // 0x4b8
};

struct UGraphNodeContextMenuContext {
	UBlueprint* Blueprint; // 0x30
	UEdGraph* Graph; // 0x38
	UEdGraphNode* Node; // 0x40
	bool bIsDebugging; // 0x50
};

struct UUMGStalkingStatusEffectUI {
	UCanvasPanel* StalkedCanvas; // 0x300
	UImage* StalkingFillFull; // 0x308
	UImage* StalkingFillLines; // 0x310
	UImage* StalkingRedBackground; // 0x318
	FName StalkingStartAnimationName; // 0x320
};

struct UNiagaraDataInterfaceNeighborGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xf8
};

struct UBlackboardKeyType_Enum {
	UEnum* EnumType; // 0x38
	FString EnumName; // 0x40
	char bIsEnumNameValid : 1; // 0x50
};

struct UDirectionalLightComponent {
	float ShadowCascadeBiasDistribution; // 0x390
	char bEnableLightShaftOcclusion : 1; // 0x394
	float OcclusionMaskDarkness; // 0x398
	float OcclusionDepthRange; // 0x39c
	FVector LightShaftOverrideDirection; // 0x3a0
	float WholeSceneDynamicShadowRadius; // 0x3ac
	float DynamicShadowDistanceMovableLight; // 0x3b0
	float DynamicShadowDistanceStationaryLight; // 0x3b4
	int32_t DynamicShadowCascades; // 0x3b8
	float CascadeDistributionExponent; // 0x3bc
	float CascadeTransitionFraction; // 0x3c0
	float ShadowDistanceFadeoutFraction; // 0x3c4
	char bUseInsetShadowsForMovableObjects : 1; // 0x3c8
	int32_t FarShadowCascadeCount; // 0x3cc
	float FarShadowDistance; // 0x3d0
	float DistanceFieldShadowDistance; // 0x3d4
	float LightSourceAngle; // 0x3d8
	float LightSourceSoftAngle; // 0x3dc
	float TraceDistance; // 0x3e0
	FLightmassDirectionalLightSettings LightmassSettings; // 0x3e4
	char bCastModulatedShadows : 1; // 0x3f4
	char bCachedDirectionalMovableLight : 1; // 0x3f4
	FVector OriginOfCachedShadowMap; // 0x3f8
	float WidthOfCachedShadowMap; // 0x404
	float FractionOfOriginHeightToShiftBounds; // 0x408
	FColor ModulatedShadowColor; // 0x40c
	float ShadowAmount; // 0x410
	char bUsedAsAtmosphereSunLight : 1; // 0x414
	int32_t AtmosphereSunLightIndex; // 0x418
};

struct UMaterialExpressionOneMinus {
	FExpressionInput Input; // 0x48
};

struct UEnvQueryGenerator_Composite {
	TArray<UEnvQueryGenerator*> generators; // 0x58
	char bAllowDifferentItemTypes : 1; // 0x68
	char bHasMatchingItemType : 1; // 0x68
	UEnvQueryItemType* ForcedItemType; // 0x70
};

struct UAddPatchTool {
	UAddPatchToolProperties* ShapeSettings; // 0x98
	UNewMeshMaterialProperties* MaterialProperties; // 0xa0
	UPreviewMesh* PreviewMesh; // 0xa8
};

struct UBlastMine {
	float _firecrackerHeight; // 0x3d0
	FSecondaryInteractionProperties _secondaryActionProperties; // 0x3d8
	float _secondsToActivatePerk; // 0x410
	float _kickChargePercentMin; // 0x414
	float _kickChargePercentMax; // 0x418
	float _progressPercentRequirementLevels[0x3]; // 0x41c
	float __generatorTrapDurationLevels[0x3]; // 0x428
	bool _canBeReusedOnTimerExpire; // 0x434
	bool _canBeReusedAfterTrapActivation; // 0x435
	UInteractionDefinition* _currentRepairInteractionWithAbility; // 0x438
	AGenerator* _trappedGenerator; // 0x440
	float _progressPercent; // 0x448
	bool _trapActivated; // 0x44c
	bool _repairTimerDone; // 0x44d
	ASlasherPlayer* _kickInteractionPlayerOwner; // 0x450
	UChargeableInteractionDefinition* _kickInteraction; // 0x458
	AGenerator* _repairProgressGenerator; // 0x460
};

struct UMediaOutput {
	int32_t NumberOfTextureBuffers; // 0x30
};

struct UBlendSpaceBase {
	bool bRotationBlendInMeshSpace; // 0x90
	float AnimLength; // 0x94
	FInterpolationParameter InterpolationParam[0x3]; // 0x98
	float TargetWeightInterpolationSpeedPerSec; // 0xb0
	ENotifyTriggerMode NotifyTriggerMode; // 0xb4
	TArray<FPerBoneInterpolation> PerBoneBlend; // 0xb8
	int32_t SampleIndexWithMarkers; // 0xc8
	TArray<FBlendSample> SampleData; // 0xd0
	TArray<FEditorElement> GridSamples; // 0xe0
	FBlendParameter BlendParameters[0x3]; // 0xf0
};

struct USkeletalMeshComponentBudgeted {
	char bAutoRegisterWithBudgetAllocator : 1; // 0xb88
	char bAutoCalculateSignificance : 1; // 0xb88
	char bShouldUseActorRenderedFlag : 1; // 0xb88
};

struct UUMGTallyBonusVisualWidget {
	TMap<int32_t, TSoftObjectPtr<UTexture2D>> MultiplierTextureMap; // 0x300
	UImage* MultiplierImage; // 0x350
};

struct UDBDNavModifierComponent {
	bool ForceUseFailsafeExtent; // 0x150
	float UpdateModifierInterval; // 0x154
	bool StartNavigationRelevant; // 0x158
	bool AlwaysTickToCheckTransform; // 0x159
	bool RelevantPassiveMode; // 0x15a
};

struct UDeviceProfileManager {
	TArray<UObject*> Profiles; // 0x30
};

struct UReflectionCaptureComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x210
	EReflectionSourceType ReflectionSourceType; // 0x218
	UTextureCube* Cubemap; // 0x220
	float SourceCubemapAngle; // 0x228
	float Brightness; // 0x22c
	float ContributionFactor; // 0x230
	float IBLMultiplicator; // 0x234
	bool bCanBeTinted; // 0x238
	FLinearColor TintColor; // 0x23c
	FLinearColor LastTintColorNotBlack; // 0x24c
	FVector CaptureOffset; // 0x260
	FGuid MapBuildDataId; // 0x26c
};

struct ACollectable {
	bool DisplayUsePercent; // 0x358
	EAtlantaItemProgressionBarEnum ProgressBar; // 0x359
	bool OverrideItemIndex; // 0x35a
	int32_t OverridenItemIndex; // 0x35c
	bool StrafeOnUse; // 0x360
	bool AimOnUse; // 0x361
	bool VisibleWhenEquipped; // 0x362
	bool StopRunningOnUse; // 0x363
	EItemHandPosition HandPosition; // 0x364
	bool DisableArmOverrideDuringInteractions; // 0x365
	bool HasUseInteraction; // 0x366
	ECollectableCategory Category; // 0x367
	bool IsInUse; // 0x368
	FName ItemId; // 0x36c
	bool FromPlayerSpawn; // 0x378
	UItemModifier* BaseItemModifier; // 0x380
	UItemModifier* ItemModifier1; // 0x388
	UItemModifier* ItemModifier2; // 0x390
	bool ShouldRegisterToOnSurvivorAdded; // 0x398
	FMulticastInlineDelegate OnCollectablePickedUpBP; // 0x3b8
	bool BeingCollected; // 0x410
	bool BeingDropped; // 0x411
	bool _beingConsumedByEntity; // 0x412
	UInteractor* _itemInteractor; // 0x418
	USkeletalMeshComponent* _mesh; // 0x420
	EInputInteractionType _displayedInputType; // 0x428
	UGameplayTagContainerComponent* _objectState; // 0x430
	USceneComponent* _placementOrigin; // 0x440
	ADBDPlayer* _collector; // 0x458
	ADBDPlayer* _firstCollector; // 0x460
	ECollectableState _state; // 0x468
	TArray<UItemAddon*> _itemAddons; // 0x470
	int32_t _itemCount; // 0x490
	FGuid _begunPlayFenceName; // 0x4a0
	EAttachToSocketNameEnum _attachToSocketName; // 0x4b0
	EInventoryType _collectInInventoryType; // 0x4b1
	FGameplayTag _stateTagForCollector; // 0x4b4
	ELoadoutItemType _itemType; // 0x4c0
	bool _discardWhenConsumed; // 0x4c1
	bool _disableAttachmentReplication; // 0x4c2
};

struct AAtlantaDisplayStand {
	EAtlantaDisplayStandPosition StandPosition; // 0x398
	USceneComponent* SurvivorPositionMarker; // 0x3a0
	USceneComponent* KillerPositionMarker; // 0x3a8
};

struct ULevel {
	UWorld* OwningWorld; // 0xc0
	UModel* Model; // 0xc8
	TArray<UModelComponent*> ModelComponents; // 0xd0
	ULevelActorContainer* ActorCluster; // 0xe0
	int32_t NumTextureStreamingUnbuiltComponents; // 0xe8
	int32_t NumTextureStreamingDirtyResources; // 0xec
	ALevelScriptActor* LevelScriptActor; // 0xf0
	ANavigationObjectBase* NavListStart; // 0xf8
	ANavigationObjectBase* NavListEnd; // 0x100
	TArray<UNavigationDataChunk*> NavDataChunks; // 0x108
	float LightmapTotalSize; // 0x118
	float ShadowmapTotalSize; // 0x11c
	TArray<FVector> StaticNavigableGeometry; // 0x120
	TArray<FGuid> StreamingTextureGuids; // 0x130
	FGuid LevelBuildDataId; // 0x1d8
	UMapBuildDataRegistry* MapBuildData; // 0x1e8
	FIntVector LightBuildLevelOffset; // 0x1f0
	char bIsLightingScenario : 1; // 0x1fc
	char bTextureStreamingRotationChanged : 1; // 0x1fc
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x1fc
	char bIsVisible : 1; // 0x1fc
	AWorldSettings* WorldSettings; // 0x248
	TArray<UAssetUserData*> AssetUserData; // 0x258
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x278
};

struct UNodeMappingContainer {
	TMap<FName, FNodeItem> SourceItems; // 0x30
	TMap<FName, FNodeItem> TargetItems; // 0x80
	TMap<FName, FName> SourceToTarget; // 0xd0
	TSoftObjectPtr<UObject> SourceAsset; // 0x120
	TSoftObjectPtr<UObject> TargetAsset; // 0x150
};

struct UFranklinsDemiseConsumedByEntityComponent {
	UTimerObject* _consumeTimer; // 0xd0
	UStatusEffect* _camperStatus; // 0xe8
	ADBDPlayer* _previousOwner; // 0xf0
	ADBDPlayer* _originatingPerkOwner; // 0xf8
	UChargerComponent* _itemChargerComponent; // 0x100
};

struct UBTTask_MoveDirectlyToward {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0
	char bProjectVectorGoalToNavigation : 1; // 0xc0
	char bUpdatedDeprecatedProperties : 1; // 0xc0
};

struct UEnvQueryGenerator_Cone {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x88
	FAIDataProviderFloatValue ConeDegrees; // 0xc8
	FAIDataProviderFloatValue AngleStep; // 0x108
	FAIDataProviderFloatValue Range; // 0x148
	UEnvQueryContext* CenterActor; // 0x188
	char bIncludeContextLocation : 1; // 0x190
};

struct UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x78
	float CurveTension; // 0x90
};

struct UEscapeRequirementTracker {
	TArray<AGenerator*> _escapeGenerators; // 0x30
	ADBDGameState* _dbdGameState; // 0x40
};

struct UAISkill_InteractionUseItem {
	ELoadoutItemType ItemType; // 0x170
};

struct UTextPropertyTestObject {
	FText DefaultedText; // 0x30
	FText UndefaultedText; // 0x48
	FText TransientText; // 0x60
};

struct UInboxScreen {
	UUMGInboxScreen* _umgScreen; // 0x120
	TArray<FInboxMessageUIData> _newsMessages; // 0x128
	TArray<FInboxMessageUIData> _rewardsMessages; // 0x138
	TArray<FInboxMessageUIData> _socialMessages; // 0x148
};

struct AEmitterCameraLensEffectBase {
	UParticleSystem* PS_CameraEffect; // 0x280
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x288
	APlayerCameraManager* BaseCamera; // 0x290
	FTransform RelativeTransform; // 0x2a0
	float BaseFOV; // 0x2d0
	char bAllowMultipleInstances : 1; // 0x2d4
	char bResetWhenRetriggered : 1; // 0x2d4
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2d8
	float DistFromCamera; // 0x2e8
};

struct UBTDecorator_Loop {
	int32_t NumLoops; // 0x70
	bool bInfiniteLoop; // 0x74
	float InfiniteLoopTimeoutTime; // 0x78
};

struct UKatsumoriTalisman {
	float _explosionRadius; // 0x2a8
	float _blockDuration; // 0x2ac
};

struct UDatasmithImportOptions {
	EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x30
	EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x31
	EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x32
	EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x33
	EDatasmithImportActorPolicy LightImportPolicy; // 0x34
	EDatasmithImportActorPolicy CameraImportPolicy; // 0x35
	EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x36
	EDatasmithImportMaterialQuality MaterialQuality; // 0x37
	FDatasmithImportBaseOptions BaseOptions; // 0x3c
	FDatasmithReimportOptions ReimportOptions; // 0x54
	FString Filename; // 0x58
	FString FilePath; // 0x68
};

struct APaperGroupedSpriteActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x230
};

struct UEnvQueryTest_Trace {
	FEnvTraceData TraceData; // 0x238
	FAIDataProviderBoolValue TraceFromContext; // 0x268
	FAIDataProviderFloatValue ItemHeightOffset; // 0x2a8
	FAIDataProviderFloatValue ContextHeightOffset; // 0x2e8
	UEnvQueryContext* Context; // 0x328
};

struct UParticleModuleSizeScale {
	FRawDistributionVector SizeScale; // 0x38
	char EnableX : 1; // 0x80
	char EnableY : 1; // 0x80
	char EnableZ : 1; // 0x80
};

struct UWheeledVehicleMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x150
	char bReverseAsBrake : 1; // 0x150
	char bUseRVOAvoidance : 1; // 0x150
	char bRawHandbrakeInput : 1; // 0x150
	char bRawGearUpInput : 1; // 0x150
	char bRawGearDownInput : 1; // 0x150
	char bWasAvoidanceUpdated : 1; // 0x154
	float Mass; // 0x158
	TArray<FWheelSetup> WheelSetups; // 0x160
	float DragCoefficient; // 0x170
	float ChassisWidth; // 0x174
	float ChassisHeight; // 0x178
	float DragArea; // 0x17c
	float EstimatedMaxEngineSpeed; // 0x180
	float MaxEngineRPM; // 0x184
	float DebugDragMagnitude; // 0x188
	FVector InertiaTensorScale; // 0x18c
	float MinNormalizedTireLoad; // 0x198
	float MinNormalizedTireLoadFiltered; // 0x19c
	float MaxNormalizedTireLoad; // 0x1a0
	float MaxNormalizedTireLoadFiltered; // 0x1a4
	float ThresholdLongitudinalSpeed; // 0x1a8
	int32_t LowForwardSpeedSubStepCount; // 0x1ac
	int32_t HighForwardSpeedSubStepCount; // 0x1b0
	TArray<UVehicleWheel*> Wheels; // 0x1b8
	float RVOAvoidanceRadius; // 0x1e0
	float RVOAvoidanceHeight; // 0x1e4
	float AvoidanceConsiderationRadius; // 0x1e8
	float RVOSteeringStep; // 0x1ec
	float RVOThrottleStep; // 0x1f0
	int32_t AvoidanceUID; // 0x1f4
	FNavAvoidanceMask AvoidanceGroup; // 0x1f8
	FNavAvoidanceMask GroupsToAvoid; // 0x1fc
	FNavAvoidanceMask GroupsToIgnore; // 0x200
	float AvoidanceWeight; // 0x204
	FVector PendingLaunchVelocity; // 0x208
	FReplicatedVehicleState ReplicatedState; // 0x214
	float RawSteeringInput; // 0x22c
	float RawThrottleInput; // 0x230
	float RawBrakeInput; // 0x234
	float SteeringInput; // 0x238
	float ThrottleInput; // 0x23c
	float BrakeInput; // 0x240
	float HandbrakeInput; // 0x244
	float IdleBrakeInput; // 0x248
	float StopThreshold; // 0x24c
	float WrongDirectionThreshold; // 0x250
	FVehicleInputRate ThrottleInputRate; // 0x254
	FVehicleInputRate BrakeInputRate; // 0x25c
	FVehicleInputRate HandbrakeInputRate; // 0x264
	FVehicleInputRate SteeringInputRate; // 0x26c
	AController* OverrideController; // 0x298
};

struct UBTTask_ClearBBEntry {
	FBlackboardKeySelector BBToResetKey; // 0x78
};

struct UAssetMappingTable {
	TArray<FAssetMapping> MappedAssets; // 0x30
};

struct UMaterialExpressionDDX {
	FExpressionInput Value; // 0x48
};

struct UParticleEmitter {
	FName EmitterName; // 0x30
	int32_t SubUVDataOffset; // 0x3c
	EEmitterRenderMode EmitterRenderMode; // 0x40
	EParticleSignificanceLevel SignificanceLevel; // 0x41
	char bUseLegacySpawningBehavior : 1; // 0x43
	char ConvertedModules : 1; // 0x43
	char bIsSoloing : 1; // 0x43
	char bCookedOut : 1; // 0x43
	char bDisabledLODsKeepEmitterAlive : 1; // 0x43
	char bDisableWhenInsignficant : 1; // 0x44
	TArray<UParticleLODLevel*> LODLevels; // 0x48
	int32_t PeakActiveParticles; // 0x58
	int32_t InitialAllocationCount; // 0x5c
	float QualityLevelSpawnRateScale; // 0x60
	uint32_t DetailModeBitMask; // 0x64
	int32_t BHVRDetailModeBitMask; // 0x68
};

struct UParticleModuleAcceleration {
	FRawDistributionVector Acceleration; // 0x40
	char bApplyOwnerScale : 1; // 0x88
};

struct UMaterialExpressionClamp {
	FExpressionInput Input; // 0x48
	FExpressionInput Min; // 0x64
	FExpressionInput Max; // 0x80
	EClampMode ClampMode; // 0x9c
	float MinDefault; // 0xa0
	float MaxDefault; // 0xa4
};

struct UDBDAtlantaStructuredData {
	TSoftClassPtr<UObject> AtlantaHeartbeatActor; // 0x30
};

struct UEscapeOutlineUpdateStrategy {
	FLinearColor _doorOpenColorForSurvivor; // 0xc0
	FLinearColor _doorOpenColorForKiller; // 0xd0
};

struct ATutorialsUtilities {
	FMulticastInlineDelegate OnTutorialUIReady; // 0x230
};

struct UAISenseConfig {
	FColor DebugColor; // 0x30
	float MaxAge; // 0x34
	char bStartsEnabled : 1; // 0x38
};

struct UAISkill {
	FGameplayTagContainer RunContexts; // 0x30
	bool StopIfPausedByNavLinkProxy; // 0x50
	float RunTimeLimit; // 0x54
	float RunCooldownTime; // 0x58
	float RunCooldownTimeDeviation; // 0x5c
	UNavigationQueryFilter* SkillNavigationFilterClass; // 0x60
	TArray<UAISenseConfig*> SkillSenseConfigs; // 0x68
	UBehaviorTree* DynamicSubtree; // 0x78
	TArray<UObject*> _pausedByObjects; // 0x98
	ADBDAIBTController* _aiControllerOwner; // 0xb8
};

struct USourceEffectWaveShaperPreset {
	FSourceEffectWaveShaperSettings Settings; // 0x78
};

struct UNavLinkComponent {
	TArray<FNavigationLink> Links; // 0x430
};

struct UStarstruck {
	float _exposedEffectDuration[0x3]; // 0x3d0
	float _perkCooldownDuration[0x3]; // 0x3dc
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _camperExposedEffects; // 0x3e8
};

struct UThrowingKnivesHitSubAnimInstance {
	bool _hitByKnifeTrigger; // 0x4f0
	bool _knifeHitCausedKOTrigger; // 0x4f1
	bool _knifeHitCausedDamageTrigger; // 0x4f2
	bool _useAlternateHitReactionState; // 0x4f3
	float _knifeHitAngle; // 0x4f4
	float _knifeHitStateHitAngle; // 0x4f8
	float _alternateKnifeHitStateHitAngle; // 0x4fc
};

struct AInteractiveFoliageActor {
	UCapsuleComponent* CapsuleComponent; // 0x240
	FVector TouchingActorEntryPosition; // 0x248
	FVector FoliageVelocity; // 0x254
	FVector FoliageForce; // 0x260
	FVector FoliagePosition; // 0x26c
	float FoliageDamageImpulseScale; // 0x278
	float FoliageTouchImpulseScale; // 0x27c
	float FoliageStiffness; // 0x280
	float FoliageStiffnessQuadratic; // 0x284
	float FoliageDamping; // 0x288
	float MaxDamageImpulse; // 0x28c
	float MaxTouchImpulse; // 0x290
	float MaxForce; // 0x294
	float Mass; // 0x298
};

struct UTallyScreenUMG {
	UUMGAtlantaTallyScreen* _atlTallyScreen; // 0x1f8
};

struct UUMGCustomizationInfoWidget {
	UImage* Icon; // 0x300
	UImage* Background; // 0x308
	URichTextBlock* InformationText; // 0x310
	FSlateColor BackgroundColor; // 0x318
	FSlateColor TextColor; // 0x340
	FSlateColor IconColor; // 0x368
	TSoftObjectPtr<UTexture2D> DefaultIcon; // 0x390
	TSoftObjectPtr<UTexture2D> KillerIcon; // 0x3c0
	TSoftObjectPtr<UTexture2D> SurvivorIcon; // 0x3f0
	TSoftObjectPtr<UTexture2D> BreakableIcon; // 0x420
	TSoftObjectPtr<UTexture2D> UnbreakableIcon; // 0x450
};

struct AGameState {
	FName MatchState; // 0x280
	FName PreviousMatchState; // 0x28c
	int32_t ElapsedTime; // 0x298
};

struct UUMGGhostfaceSpecific {
	UImage* LeftLeanImage; // 0x300
	UImage* RightLeanImage; // 0x308
};

struct UDBDTooltipManager {
	UUserWidget* _currentTooltip; // 0x48
};

struct UChainAttachedGateBlockerEffect {
	FDBDTunableRowHandle _blockGateLingeringTimeDyingState; // 0x388
};

struct UNavigationInvokerComponent {
	float TileGenerationRadius; // 0xb8
	float TileRemovalRadius; // 0xbc
};

struct UInterpTrackFloatParticleParam {
	FName ParamName; // 0x98
};

struct UParticleModuleTypeDataAnimTrail {
	char bDeadTrailsOnDeactivate : 1; // 0x38
	char bEnablePreviousTangentRecalculation : 1; // 0x38
	char bTangentRecalculationEveryFrame : 1; // 0x38
	float TilingDistance; // 0x3c
	float DistanceTessellationStepSize; // 0x40
	float TangentTessellationStepSize; // 0x44
	float WidthTessellationStepSize; // 0x48
};

struct UToIntegerField {
	UFieldNodeFloat* FloatField; // 0xb8
};

struct UButtonSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USharedAuthenticationComponent {
	int32_t PopupZOrder; // 0x30
	UUMGAutheticationProviderSelection* AuthenticationProviderSelectionWidget; // 0x38
	TSoftClassPtr<UObject> AuthenticationProviderSelectionWidgetToLoad; // 0x40
	TMap<ESharedAuthenticationProvider, TSoftClassPtr<UObject>> LoginBackgroundToLoadWidgetToLoadMap; // 0x70
	UObject* _worldContextObject; // 0xc0
	USharedAuthenticationMigrateComponent* _migrateComponent; // 0x188
};

struct UItemCraftInteraction {
	FName _attachToSocketName; // 0x5b0
	ACollectable* _collectableClass; // 0x5c0
};

struct UUMGTallyEmblemsWidget {
	TSoftClassPtr<UObject> EmblemWidgetClass; // 0x310
	UHorizontalBox* EmblemsContainer; // 0x340
	TArray<UUMGTallyEmblemWidget*> _emblems; // 0x348
};

struct UMaterialInterface {
	USubsurfaceProfile* SubsurfaceProfile; // 0x40
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x58
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x78
};

struct UTricksterAnimInstance {
	bool _isAiming; // 0x5a8
	float _isThrowInputPressed; // 0x5ac
	bool _isThrowingWithLeftArm; // 0x5b0
	bool _isThrowingWithRightArm; // 0x5b1
	float _throwPlayRate; // 0x5b4
	float _baseThrowDuration; // 0x5b8
	int32_t _consecutiveKnivesThrownStacks; // 0x5bc
	float _timeSinceLastKnifeLaunched; // 0x5c0
	int32_t _currentAmmoCount; // 0x5c4
	bool _isInSuperMode; // 0x5c8
	bool _isInActivation; // 0x5c9
	float _activationDuration; // 0x5cc
	bool _isInDeactivation; // 0x5d0
	float _deactivationDuration; // 0x5d4
	AThrowingKnives* _throwingKnives; // 0x610
};

struct UEditNormalsOperatorFactory {
	UEditNormalsTool* Tool; // 0x38
};

struct UWorldRunawayMeshComponent {
	float ResetCooldown; // 0xb68
	float _runAwayMustTickDuration; // 0xb6c
	float _returnMustTickDuration; // 0xb70
};

struct UCrownPickupInteraction {
	FName _attachToSocketName; // 0x708
	bool _isInteractionChargeComplete; // 0x714
};

struct UTwinDestructionComponent {
	AActor* _huskClass; // 0xe8
	FTransform _dyingTransform; // 0xf0
	bool _diedFromSurvivorRemovingTwin; // 0x138
	float _dyingFromSurvivorTranslation; // 0x190
};

struct UDBDPathFollowingComponent {
	float UnblockPathDeviationRadius; // 0x270
	float UnblockPathTimeLimit; // 0x274
	TSet<ANavLinkProxy*> _onNavLinkProxies; // 0x398
};

struct USnowmanSpawnPlacementStrategy {
	FDBDTunableRowHandle _minDistanceFromOtherActiveSnowmen; // 0xb8
	FDBDTunableRowHandle _minDistanceFromOtherPlayers; // 0xe0
	FDBDTunableRowHandle _minHatchDistance; // 0x108
	FDBDTunableRowHandle _minPalletDistance; // 0x130
	FDBDTunableRowHandle _navmesh_radiusArea; // 0x158
	FDBDTunableRowHandle _navmesh_minimumDistanceFromOriginSpawnPoint; // 0x180
	FDBDTunableRowHandle _navmesh_minimumNumberOfNavmeshPointsToBeReady; // 0x1a8
	FDBDTunableRowHandle _boxExtentXSize; // 0x1d0
	FDBDTunableRowHandle _boxExtentYSize; // 0x1f8
	FDBDTunableRowHandle _boxExtentZSize; // 0x220
	FVector _collisionBoxHalfExtent; // 0x248
	float _minDistanceFromOtherActiveSnowmenSquared; // 0x254
	float _minDistanceFromOtherPlayersSquared; // 0x258
	float _minPalletDistanceSquared; // 0x25c
	float _minHatchSquaredDistance; // 0x260
	TArray<ETileSpawnPointType> _spawnPointsTileTypes; // 0x268
	TArray<EGameplayElementType> _spawnPointsGameplayElementTypes; // 0x278
	TArray<FSnowmanSpawnLocationData> _spawnLocationData; // 0x288
	TArray<AHatch*> _hatches; // 0x298
	TArray<APallet*> _pallets; // 0x2a8
	FVector _collisionCheckBoxExtents; // 0x2d8
	float _downRaycastLength; // 0x2e4
	float _rayCastZOffet; // 0x2e8
	float _distanceToGroundToleranceSquared; // 0x2ec
};

struct UARSessionConfig {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x38
	bool bGenerateCollisionForMeshData; // 0x39
	bool bGenerateNavMeshForMeshData; // 0x3a
	bool bUseMeshDataForOcclusion; // 0x3b
	bool bRenderMeshDataInWireframe; // 0x3c
	bool bTrackSceneObjects; // 0x3d
	bool bUsePersonSegmentationForOcclusion; // 0x3e
	EARWorldAlignment WorldAlignment; // 0x3f
	EARSessionType SessionType; // 0x40
	EARPlaneDetectionMode PlaneDetectionMode; // 0x41
	bool bHorizontalPlaneDetection; // 0x42
	bool bVerticalPlaneDetection; // 0x43
	bool bEnableAutoFocus; // 0x44
	EARLightEstimationMode LightEstimationMode; // 0x45
	EARFrameSyncMode FrameSyncMode; // 0x46
	bool bEnableAutomaticCameraOverlay; // 0x47
	bool bEnableAutomaticCameraTracking; // 0x48
	bool bResetCameraTracking; // 0x49
	bool bResetTrackedObjects; // 0x4a
	TArray<UARCandidateImage*> CandidateImages; // 0x50
	int32_t MaxNumSimultaneousImagesTracked; // 0x60
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x64
	TArray<char> WorldMapData; // 0x68
	TArray<UARCandidateObject*> CandidateObjects; // 0x78
	FARVideoFormat DesiredVideoFormat; // 0x88
	EARFaceTrackingDirection FaceTrackingDirection; // 0x94
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x95
	TArray<char> SerializedARCandidateImageDatabase; // 0x98
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8
};

struct UCoreInteractionProgressWidget {
	TArray<UCoreStatusEffectIcon*> Proficiencies; // 0x300
};

struct UEscapeDoorAnimInstance {
	bool _isOpen; // 0x280
	bool _isOpenByKiller; // 0x281
};

struct UExponentialHeightFogComponent {
	float FogDensity; // 0x210
	float FogHeightFalloff; // 0x214
	FExponentialHeightFogData SecondFogData; // 0x218
	FLinearColor FogInscatteringColor; // 0x224
	UTextureCube* InscatteringColorCubemap; // 0x238
	float InscatteringColorCubemapAngle; // 0x240
	FLinearColor InscatteringTextureTint; // 0x244
	float FullyDirectionalInscatteringColorDistance; // 0x254
	float NonDirectionalInscatteringColorDistance; // 0x258
	float DirectionalInscatteringExponent; // 0x25c
	float DirectionalInscatteringStartDistance; // 0x260
	FLinearColor DirectionalInscatteringColor; // 0x264
	float FogMaxOpacity; // 0x274
	float StartDistance; // 0x278
	float FogCutoffDistance; // 0x27c
	bool bEnableVolumetricFog; // 0x280
	float VolumetricFogScatteringDistribution; // 0x284
	FColor VolumetricFogAlbedo; // 0x288
	FLinearColor VolumetricFogEmissive; // 0x28c
	float VolumetricFogExtinctionScale; // 0x29c
	float VolumetricFogDistance; // 0x2a0
	float VolumetricFogStaticLightingScatteringIntensity; // 0x2a4
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x2a8
	TArray<FHeightFogGradientEntry> FogGradient; // 0x2b0
	float DistanceUntilFlatFog; // 0x2c0
	float DistanceUntilNoFog; // 0x2c4
};

struct URotatingMovementComponent {
	FRotator RotationRate; // 0xf8
	FVector PivotTranslation; // 0x104
	char bRotationInLocalSpace : 1; // 0x110
};

struct UScreenController {
	UDBDGameInstance* _gameInstance; // 0x30
	UGFxObject* _screenControllerObj; // 0x38
	UGFxMoviePlayer* _moviePlayer; // 0x40
	TMap<FString, UScreenBase*> _screenDictionary; // 0x48
	TMap<FString, EScreenType> _screenTypeDictionary; // 0x98
	TMap<UObject*, TWeakObjectPtr<UUserWidget>> _cachedUMGScreens; // 0xe8
};

struct UUMGSettingAboutContextWidget {
	UUMGSettingContextButton* EULAButton; // 0x318
	UUMGSettingContextButton* CreditsButton; // 0x320
};

struct UUMGSettingSubscriptionStatus {
	FText SubscriptionStatusText; // 0x260
	FText StatusText; // 0x278
	FText InactiveStatusText; // 0x290
	FText EndText; // 0x2a8
	UWidgetSwitcher* TypeSwitcher; // 0x2c0
	UHorizontalBox* ActiveWidget; // 0x2c8
	UOverlay* InactiveWidget; // 0x2d0
	UTextBlock* TitleText; // 0x2d8
	UTextBlock* DisplayName; // 0x2e0
	UTextBlock* Status; // 0x2e8
	UTextBlock* StatusInactive; // 0x2f0
	UTextBlock* End; // 0x2f8
	UTextBlock* endDate; // 0x300
};

struct UDeathBedRescueInteraction {
	FDBDTunableRowHandle _loudNoiseRange; // 0x6e0
};

struct UUMGStatusEffectIcon {
	FStatusEffectSlotData statusEffectData; // 0x610
};

struct UAISkill_InteractionTarget_TormentAttack {
	int32_t AdvancedAtNbDetectedTargets; // 0x220
	FAIRoll AdvancedStartRoll; // 0x224
};

struct UPalletAnimInstance {
	bool _isPulledDown; // 0x280
	bool _isBeingPulledUp; // 0x281
	bool _isBeingDestroyed; // 0x282
	float _isBeingDestroyedPlayRate; // 0x284
	FAnimSequenceSelector _destroyPalletAnim; // 0x288
};

struct UMaterialExpressionBHVRCustomColorOutput {
	FExpressionInput Input; // 0x48
};

struct ULevelSequence {
	UMovieScene* MovieScene; // 0x350
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x358
	FLevelSequenceBindingReferences BindingReferences; // 0x3a8
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x448
	UObject* DirectorClass; // 0x498
};

struct UCompositeDataTable {
	TArray<UDataTable*> ParentTables; // 0xd0
	TArray<UDataTable*> OldParentTables; // 0xe0
};

struct UPhysicsSpringComponent {
	float SpringStiffness; // 0x210
	float SpringDamping; // 0x214
	float SpringLengthAtRest; // 0x218
	float SpringRadius; // 0x21c
	ECollisionChannel SpringChannel; // 0x220
	bool bIgnoreSelf; // 0x221
	float SpringCompression; // 0x224
};

struct UCameraComponent {
	float FieldOfView; // 0x210
	float OrthoWidth; // 0x214
	float OrthoNearClipPlane; // 0x218
	float OrthoFarClipPlane; // 0x21c
	float AspectRatio; // 0x220
	char bConstrainAspectRatio : 1; // 0x224
	char bUseFieldOfViewForLOD : 1; // 0x224
	char bLockToHmd : 1; // 0x224
	char bUsePawnControlRotation : 1; // 0x224
	ECameraProjectionMode ProjectionMode; // 0x225
	float PostProcessBlendWeight; // 0x260
	FPostProcessSettings PostProcessSettings; // 0x290
};

struct UInterpTrackMoveAxis {
	EInterpMoveAxis MoveAxis; // 0x98
	FInterpLookupTrack LookupTrack; // 0xa0
};

struct UBTDecorator_Cooldown {
	float cooldownTime; // 0x70
};

struct UAnimSharingInstance {
	TArray<AActor*> RegisteredActors; // 0x30
	UAnimationSharingStateProcessor* StateProcessor; // 0xb0
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xf0
	UEnum* StateEnum; // 0x110
	AActor* SharingActor; // 0x118
};

struct UEnvQueryGenerator_OnCircle {
	FAIDataProviderFloatValue CircleRadius; // 0x88
	FAIDataProviderFloatValue SpaceBetween; // 0xc8
	FAIDataProviderIntValue NumberOfPoints; // 0x108
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x148
	FEnvDirection ArcDirection; // 0x150
	FAIDataProviderFloatValue ArcAngle; // 0x170
	float AngleRadians; // 0x1b0
	UEnvQueryContext* CircleCenter; // 0x1b8
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1c0
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x1c8
	FEnvTraceData TraceData; // 0x208
	char bDefineArc : 1; // 0x238
};

struct UImposeStatusEffectOnEventAddon {
	float _statusEffectTime; // 0x2a8
	FName _statusEffectName; // 0x2ac
	EImposeEffectTo _imposeEffectTo; // 0x2b8
};

struct UPushTwinOnLockerInteraction {
	UChargeableComponent* _pushTwinOnLockerChargeable; // 0x6d8
	FDBDTunableRowHandle _pushTwinOnLockerMaxCharge; // 0x6e0
};

struct UTestPresenter {
	UUserWidget* TestWidgetClass; // 0xe0
};

struct ULocomotionPredictor {
	TMap<UAnimSequence*, FFootBoneData> _animFootData; // 0x30
};

struct UEditUVIslandsTool {
	USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd0
	UPolygonSelectionMechanic* SelectionMechanic; // 0xd8
	UMultiTransformer* MultiTransformer; // 0xe8
};

struct UInputKeyDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x30
};

struct UHookedIndicatorWidget {
	float HookedIndicatorDuration; // 0x348
};

struct UMadnessSurvivorSubAnimInstance {
	bool _isTotallyInsane; // 0x4f0
};

struct USizeBoxSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x60
	EVerticalAlignment VerticalAlignment; // 0x61
};

struct UInterpTrackParticleReplay {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x78
};

struct UDatasmithSkyLightComponentTemplate {
	ESkyLightSourceType SourceType; // 0x38
	int32_t CubemapResolution; // 0x3c
	UTextureCube* Cubemap; // 0x40
};

struct UDBDInputManager {
	UControlModeManager* _controlModeManager; // 0x58
	USwitchDockStateManager* _switchDockStateManager; // 0x60
	UVirtualKeyboardManager* _virtualKeyboardManager; // 0x68
	UDataTable* _analogCursorDb; // 0x70
};

struct UCoreBaseUserWidget {
	UScaleBox* ScaleContainer; // 0x270
	bool IsInteractive; // 0x278
	EControlMode _controlMode; // 0x279
	EScaleType ScaleType; // 0x27a
	UDBDInputManager* _inputManager; // 0x280
};

struct UAnimBlueprintGeneratedClass {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x340
	USkeleton* TargetSkeleton; // 0x350
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x358
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x368
	TArray<FName> SyncGroupNames; // 0x438
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x448
	TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x458
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x4a8
};

struct USpinBox {
	float Value; // 0x128
	FDelegate ValueDelegate; // 0x12c
	FSpinBoxStyle WidgetStyle; // 0x140
	USlateWidgetStyleAsset* Style; // 0x450
	int32_t MinFractionalDigits; // 0x458
	int32_t MaxFractionalDigits; // 0x45c
	bool bAlwaysUsesDeltaSnap; // 0x460
	float Delta; // 0x464
	float SliderExponent; // 0x468
	FSlateFontInfo Font; // 0x470
	ETextJustify Justification; // 0x4c8
	float MinDesiredWidth; // 0x4cc
	bool ClearKeyboardFocusOnCommit; // 0x4d0
	bool SelectAllTextOnCommit; // 0x4d1
	FSlateColor ForegroundColor; // 0x4d8
	FMulticastInlineDelegate OnValueChanged; // 0x500
	FMulticastInlineDelegate OnValueCommitted; // 0x510
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x520
	FMulticastInlineDelegate OnEndSliderMovement; // 0x530
	char bOverride_MinValue : 1; // 0x540
	char bOverride_MaxValue : 1; // 0x540
	char bOverride_MinSliderValue : 1; // 0x540
	char bOverride_MaxSliderValue : 1; // 0x540
	float MinValue; // 0x544
	float MaxValue; // 0x548
	float MinSliderValue; // 0x54c
	float MaxSliderValue; // 0x550
};

struct UHasObjectState {
	FGameplayTag _state; // 0xe8
};

struct USmallGame {
	float _detectionConeAngle[0x3]; // 0x3d0
	float _detectionConeAngleReductionRate[0x3]; // 0x3dc
	bool _totemDetected; // 0x3e8
};

struct USceneCaptureComponent2D {
	ECameraProjectionMode ProjectionType; // 0x2a8
	float FOVAngle; // 0x2ac
	float OrthoWidth; // 0x2b0
	UTextureRenderTarget2D* TextureTarget; // 0x2b8
	ESceneCaptureCompositeMode CompositeMode; // 0x2c0
	FPostProcessSettings PostProcessSettings; // 0x2d0
	float PostProcessBlendWeight; // 0x810
	char bOverride_CustomNearClippingPlane : 1; // 0x814
	float CustomNearClippingPlane; // 0x818
	bool bUseCustomProjectionMatrix; // 0x81c
	FMatrix CustomProjectionMatrix; // 0x820
	bool bEnableClipPlane; // 0x860
	FVector ClipPlaneBase; // 0x864
	FVector ClipPlaneNormal; // 0x870
	char bCameraCutThisFrame : 1; // 0x87c
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x87c
	bool bDisableFlipCopyGLES; // 0x880
};

struct USubmixEffectTapDelayPreset {
	FSubmixEffectTapDelaySettings Settings; // 0x88
};

struct UInteractionProficiency {
	TArray<FString> InteractionIds; // 0x30
};

struct UUMGRitualClaimRewardButton {
	FMulticastInlineDelegate OnPressedAnimationCompleted; // 0x430
	UCanvasPanel* ClaimFxPanel; // 0x440
};

struct UAISenseEvent_Hearing {
	FAINoiseEvent Event; // 0x30
};

struct UModularSynthPresetBank {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x30
};

struct AMenuMeatHook {
	UCharmSpawnerComponent* _charmSpawnerComponent; // 0x240
};

struct UStakeOutPerk {
	TArray<int32_t> MaxTokensByLevel; // 0x3d0
	float TokenChargeTime; // 0x3e0
};

struct UBatchMeshCommands {
	TArray<FMaterialNamedGroup> Groups; // 0x270
	TArray<FMaterialHelperOriginalMeshState> TargetMeshes; // 0x280
	FString _materialGroupName; // 0x290
};

struct UMaterialExpressionShadingModel {
	EMaterialShadingModel ShadingModel; // 0x48
};

struct UWorld {
	ULevel* PersistentLevel; // 0x38
	UNetDriver* NetDriver; // 0x40
	ULineBatchComponent* LineBatcher; // 0x48
	ULineBatchComponent* PersistentLineBatcher; // 0x50
	ULineBatchComponent* ForegroundLineBatcher; // 0x58
	AGameNetworkManager* NetworkManager; // 0x60
	UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x68
	TArray<UObject*> ExtraReferencedObjects; // 0x70
	TArray<UObject*> PerModuleDataObjects; // 0x80
	TArray<AActor*> LevelSequenceActors; // 0x90
	TArray<ULevelStreaming*> StreamingLevels; // 0xa8
	FStreamingLevelsToConsider StreamingLevelsToConsider; // 0xb8
	FString StreamingLevelsPrefix; // 0xe0
	ULevel* CurrentLevelPendingVisibility; // 0xf0
	ULevel* CurrentLevelPendingInvisibility; // 0xf8
	UDemoNetDriver* DemoNetDriver; // 0x100
	AParticleEventManager* MyParticleEventManager; // 0x108
	APhysicsVolume* DefaultPhysicsVolume; // 0x110
	char bAreConstraintsDirty : 1; // 0x12e
	UNavigationSystemBase* NavigationSystem; // 0x130
	AGameModeBase* AuthorityGameMode; // 0x138
	AGameStateBase* GameState; // 0x140
	UAISystemBase* AISystem; // 0x148
	UAvoidanceManager* AvoidanceManager; // 0x150
	TArray<ULevel*> Levels; // 0x158
	TArray<FLevelCollection> LevelCollections; // 0x168
	UGameInstance* OwningGameInstance; // 0x198
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x1a0
	UCanvas* CanvasForRenderingToTarget; // 0x1b0
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1b8
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x210
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x220
	UWorldComposition* WorldComposition; // 0x570
	FWorldPSCPool PSCPool; // 0x608
};

struct UWeldMeshEdgesTool {
	float Tolerance; // 0x90
	bool bOnlyUnique; // 0x94
};

struct AItemVfx {
	TArray<UParticleSystemComponent*> _particleSystems; // 0x238
};

struct UDBDBoxReflectionCaptureSpawnerComponent {
	FVector InfluenceBox; // 0x268
	float BoxTransitionDistance; // 0x274
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UBombLauncher {
	UCurveFloat* _speedCurve; // 0x180
	UCurveFloat* _pitchCurve; // 0x188
	EBombType _currentBombType; // 0x190
};

struct UNearMeEvaluatorCondition {
	bool _questOwnerCanBeSubjectOfEvent; // 0x4c
};

struct UFXSystemAsset {
	uint32_t MaxPoolSize; // 0x30
};

struct USmashHit {
	float _exhaustedTime[0x3]; // 0x3d0
	float _hasteTime[0x3]; // 0x3dc
};

struct UMaterialExpressionBumpOffset {
	FExpressionInput Coordinate; // 0x48
	FExpressionInput Height; // 0x64
	FExpressionInput HeightRatioInput; // 0x80
	float HeightRatio; // 0x9c
	float ReferencePlane; // 0xa0
	uint32_t ConstCoordinate; // 0xa4
};

struct UAkWwiseTree {
	FMulticastInlineDelegate OnSelectionChanged; // 0x128
	FMulticastInlineDelegate OnItemDragged; // 0x138
};

struct UIntSerialization {
	uint16_t UnsignedInt16Variable; // 0x30
	uint32_t UnsignedInt32Variable; // 0x34
	uint64_t UnsignedInt64Variable; // 0x38
	int8_t SignedInt8Variable; // 0x40
	int16_t SignedInt16Variable; // 0x42
	int64_t SignedInt64Variable; // 0x48
	char UnsignedInt8Variable; // 0x50
	int32_t SignedInt32Variable; // 0x54
};

struct UCharacterEvasionBehaviourData {
	AActor* _hunter; // 0x30
	TArray<AActor*> _escapePoints; // 0x38
	float _minEscapeDist; // 0x48
};

struct ABloodOrb {
	FFloatInterval _randomMoveDelayInterval; // 0x230
	USceneComponent* _absorbReference; // 0x238
	UDBDOutlineComponent* _outlineComponent; // 0x240
	float _despawnDelay; // 0x248
	TWeakObjectPtr<ADBDPlayer> _droppingPlayer; // 0x250
	EBloodOrbState _state; // 0x258
	UBloodOrbFadeComponent* _fadeComponent; // 0x260
};

struct UMaterialExpressionLandscapeLayerCoords {
	ETerrainCoordMappingType MappingType; // 0x48
	ELandscapeCustomizedCoordType CustomUVType; // 0x49
	float MappingScale; // 0x4c
	float MappingRotation; // 0x50
	float MappingPanU; // 0x54
	float MappingPanV; // 0x58
};

struct UGeometryCollection {
	TArray<UMaterialInterface*> Materials; // 0x38
	ECollisionTypeEnum CollisionType; // 0x48
	EImplicitTypeEnum ImplicitType; // 0x49
	int32_t MinLevelSetResolution; // 0x4c
	int32_t MaxLevelSetResolution; // 0x50
	int32_t MinClusterLevelSetResolution; // 0x54
	int32_t MaxClusterLevelSetResolution; // 0x58
	float CollisionObjectReductionPercentage; // 0x5c
	bool bMassAsDensity; // 0x60
	float Mass; // 0x64
	float MinimumMassClamp; // 0x68
	float CollisionParticlesFraction; // 0x6c
	int32_t MaximumCollisionParticles; // 0x70
	TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x78
	bool EnableRemovePiecesOnFracture; // 0x88
	TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0x90
	FGuid PersistentGuid; // 0xa0
	FGuid StateGuid; // 0xb0
	int32_t BoneSelectedMaterialIndex; // 0xc0
};

struct UGizmoCircleComponent {
	FVector Normal; // 0x448
	float Radius; // 0x454
	float Thickness; // 0x458
	int32_t NumSides; // 0x45c
	bool bViewAligned; // 0x460
	bool bOnlyAllowFrontFacingHits; // 0x461
};

struct UEdGraphNode_Documentation {
	FString Link; // 0xa0
	FString Excerpt; // 0xb0
};

struct UPounceAttackOpenSubstate {
	UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintClass; // 0x118
	UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintObject; // 0x120
};

struct UMaterialExpressionArctangent {
	FExpressionInput Input; // 0x48
};

struct UDBDNavEvadeLoopComponent {
	FVector EvadeDoorExtent; // 0xb8
	float EvadeDoorFrontPointOffset; // 0xc4
	float EvadeDoorSideOffset; // 0xc8
	float SideBlockerOffset; // 0xcc
	float AutoSnapPointsUpHeight; // 0xd0
	float AutoSnapPointsDownHeight; // 0xd4
	ECollisionChannel AutoSnapCollisionChannel; // 0xd8
	UNavigationQueryFilter* EvadeLoopFilterClass; // 0xe0
	float MinSafetyLength; // 0xe8
	float MaxSafetyLength; // 0xec
	EAIEvadeLoopSides LimitToSide; // 0xf0
	bool DebugEditMode; // 0xf1
	bool DrawDebugFilter; // 0xf2
};

struct UTwinLockerBlockerComponent {
	TArray<UInteractionDefinition*> _interactionClasses; // 0xb8
	TArray<UInteractionDefinition*> _interactionsToDisableOnLockerClasses; // 0xd8
};

struct UTextureRenderTarget2D {
	int32_t SizeX; // 0xc8
	int32_t SizeY; // 0xcc
	FLinearColor ClearColor; // 0xd0
	TextureAddress AddressX; // 0xe0
	TextureAddress AddressY; // 0xe1
	char bForceLinearGamma : 1; // 0xe2
	char bHDR : 1; // 0xe2
	char bGPUSharedFlag : 1; // 0xe2
	ETextureRenderTargetFormat RenderTargetFormat; // 0xe3
	char bAutoGenerateMips : 1; // 0xe4
	TextureFilter MipsSamplerFilter; // 0xe5
	TextureAddress MipsAddressU; // 0xe6
	TextureAddress MipsAddressV; // 0xe7
	EPixelFormat OverrideFormat; // 0xe8
};

struct UUMGBaseSideMainMenuButton {
	UImage* NotificationBadge; // 0x430
	float _baseTextOpacity; // 0x438
	float _highlightTextOpacity; // 0x43c
	float _baseIconOpacity; // 0x440
	float _highlightIconOpacity; // 0x444
};

struct UCharacterTooltipWidget {
	UDBDTextBlock* InstructionTB; // 0x2d8
	UDBDTextBlock* LevelTB; // 0x2e0
	UDBDTextBlock* MarketTB; // 0x2e8
	UDBDRichTextBlock* DifficultyRTB; // 0x2f0
};

struct UCustomizedAudioComponent {
	FMulticastInlineDelegate OnCustomizedAudioSwitchStateChanged; // 0xb8
	FString AudioCharacterNameDefaultSwitchState; // 0x168
	FString AudioCharacterSubNameDefaultSwitchState; // 0x178
	FString AudioCharacterHeadDefaultSwitchState; // 0x188
	FString AudioCharacterClothesDefaultSwitchState; // 0x198
	FString AudioCharacterShoesDefaultSwitchState; // 0x1a8
	FString AudioCharacterWeaponDefaultSwitchState; // 0x1b8
	FString AudioCharacterAmbianceDefaultSwitchState; // 0x1c8
	FString AudioCharacterStateDefaultSwitchState; // 0x1d8
};

struct UImgMediaSettings {
	FFrameRate DefaultFrameRate; // 0x30
	float CacheBehindPercentage; // 0x38
	float CacheSizeGB; // 0x3c
	int32_t CacheThreads; // 0x40
	int32_t CacheThreadStackSizeKB; // 0x44
	float GlobalCacheSizeGB; // 0x48
	bool UseGlobalCache; // 0x4c
	uint32_t ExrDecoderThreads; // 0x50
	FString DefaultProxy; // 0x58
	bool UseDefaultProxy; // 0x68
};

struct UMaterialExpressionSetMaterialAttributes {
	TArray<FExpressionInput> Inputs; // 0x48
	TArray<FGuid> AttributeSetTypes; // 0x58
};

struct UPawnAction_Repeat {
	UPawnAction* ActionToRepeat; // 0xa0
	UPawnAction* RecentActionCopy; // 0xa8
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0
};

struct UHealSurvivorSubAnimInstance {
	bool _isHealingACrawlingTarget; // 0x530
	bool _isHealingOtherNoMedkit; // 0x531
	bool _isHealingOtherMedkit; // 0x532
	bool _isHealingSelfNoMedkit; // 0x533
	bool _isHealingSelfMedkit; // 0x534
	bool _isWakingUpOther; // 0x535
	bool _isBeingHealed; // 0x536
	bool _isBeingMended; // 0x537
	bool _isMendingOther; // 0x538
	bool _hasSkillCheckFailed; // 0x539
	bool _isCrawling; // 0x53a
	bool _hasHealerSkillCheckFailed; // 0x53b
};

struct AGameSession {
	int32_t MaxSpectators; // 0x230
	int32_t MaxPlayers; // 0x234
	int32_t MaxPartySize; // 0x238
	char MaxSplitscreensPerConnection; // 0x23c
	bool bRequiresPushToTalk; // 0x23d
	FName SessionName; // 0x240
};

struct UBTService_SetBBEntryTime {
	FBlackboardKeySelector BBToSetKey; // 0x80
};

struct USoundNodeMixer {
	TArray<float> InputVolume; // 0x50
};

struct UOpenChestSurvivorSubAnimInstance {
	bool _isInteractingWithChest; // 0x4f0
	FGameplayTag _interactionPhase; // 0x4f4
	bool _isInteractingWithOpenChest; // 0x500
	FVector _snapPosition; // 0x504
	bool _isVomiting; // 0x510
};

struct UNiagaraPreviewAxis_InterpParamFloat {
	float Min; // 0x40
	float Max; // 0x44
};

struct UIsPlayerPerfInteractionWithNoItem {
	FGameplayTagContainer _useItemInteractionSemantics; // 0x128
	ELoadoutItemType _itemType; // 0x150
};

struct UGMAdaptiveShadowMapSourceDirectional {
	UDirectionalLightComponent* _directionalLightComponent; // 0x2f8
};

struct UFlurryComboScoreComponent {
	float _comboScore; // 0xd4
	FDBDTunableRowHandle _timeForCombo; // 0xd8
	FDBDTunableRowHandle _baseKnifeComboScore; // 0x100
	FDBDTunableRowHandle _maximumKnifeMultiplier; // 0x128
	FDBDTunableRowHandle _fillLacerationComboScore; // 0x150
	FDBDTunableRowHandle _longRangeThreshold; // 0x178
	FDBDTunableRowHandle _closeRangeScoreMultiplier; // 0x1a0
	FDBDTunableRowHandle _longRangeScoreMultiplier; // 0x1c8
	TArray<float> _thresholds; // 0x1f0
	TArray<float> _thresholdsScoreForAudio; // 0x200
	TArray<FGameplayTag> _comboScoreEvents; // 0x210
};

struct UK25ChainLocomotionSurvivorAnimInstance {
	bool _hasChainsAttached; // 0x4f0
	float _breakChainInteractionCompletionPercentage; // 0x4f4
	bool _isPerformingBreakChainInteraction; // 0x4f8
	float _forwardDirectionDotProductResult; // 0x4fc
	float _lateralDirectionDotProductResult; // 0x500
	AK25Chain* _currentChainBeingDetached; // 0x508
	FK25ChainAnchorAnimationData _leftHandAttachmentData; // 0x510
	FK25ChainAnchorAnimationData _rightHandAttachmentData; // 0x528
	FK25ChainAnchorAnimationData _leftShoulderAttachmentData; // 0x540
	FK25ChainAnchorAnimationData _rightShoulderAttachmentData; // 0x558
	FK25ChainAnchorAnimationData _stomachAttachmentData; // 0x570
	FK25ChainAnchorAnimationData _backAttachmentData; // 0x588
	EK25ChainAnchorPointDirection _chainDirection; // 0x5a0
	EK25ChainAnchorPointDirection _lastDetatchedChainDirection; // 0x5a1
	bool _hasBrokenFreeFromChain; // 0x5a2
	float _hasBrokenFreeTime; // 0x5a4
	bool _hasBeenHitByChain; // 0x5a8
	float _hasBeenHitByChainTime; // 0x5ac
	int32_t _numberOfChainsAttached; // 0x5b0
};

struct UPrimitiveComponent {
	float MinDrawDistance; // 0x218
	float LDMaxDrawDistance; // 0x21c
	float CachedMaxDrawDistance; // 0x220
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x224
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x225
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x226
	ELightmapType LightmapType; // 0x227
	char bUseMaxLODAsImposter : 1; // 0x228
	char bBatchImpostersAsInstances : 1; // 0x228
	char bNeverDistanceCull : 1; // 0x228
	char bAlwaysCreatePhysicsState : 1; // 0x228
	char bForceCastStaticShadows : 1; // 0x229
	char bForceToBeInCachedShadowmap : 1; // 0x229
	char bGenerateOverlapEvents : 1; // 0x229
	char bMultiBodyOverlap : 1; // 0x229
	char bTraceComplexOnMove : 1; // 0x229
	char bReturnMaterialOnMove : 1; // 0x229
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x229
	char bAllowCullDistanceVolume : 1; // 0x229
	char bHasMotionBlurVelocityMeshes : 1; // 0x22a
	char bRenderCustomColourNoDepth : 1; // 0x22c
	char bVisibleInReflectionCaptures : 1; // 0x230
	char bVisibleInRayTracing : 1; // 0x230
	char bRenderInMainPass : 1; // 0x230
	char bRenderInDepthPass : 1; // 0x230
	char bReceivesDecals : 1; // 0x230
	char bOwnerNoSee : 1; // 0x230
	char bOnlyOwnerSee : 1; // 0x230
	char bTreatAsBackgroundForOcclusion : 1; // 0x230
	char bUseAsOccluder : 1; // 0x231
	char bSelectable : 1; // 0x231
	char bForceMipStreaming : 1; // 0x231
	char bHasPerInstanceHitProxies : 1; // 0x231
	char CastShadow : 1; // 0x231
	char bAffectDynamicIndirectLighting : 1; // 0x231
	char bAffectDistanceFieldLighting : 1; // 0x231
	char bCastDynamicShadow : 1; // 0x231
	char bCastStaticShadow : 1; // 0x232
	EDetailMode DetailLevelBeforeCastShadows; // 0x233
	ELightingDetailMode DetailLevelBeforeCastDynamicShadows; // 0x234
	char bCastVolumetricTranslucentShadow : 1; // 0x238
	char bSelfShadowOnly : 1; // 0x238
	char bCastFarShadow : 1; // 0x238
	char bCastInsetShadow : 1; // 0x238
	char bCastCinematicShadow : 1; // 0x238
	char bCastHiddenShadow : 1; // 0x238
	char bCastShadowAsTwoSided : 1; // 0x238
	char bLightAsIfStatic : 1; // 0x238
	char bLightAttachmentsAsGroup : 1; // 0x239
	char bExcludeFromLightAttachmentGroup : 1; // 0x239
	char bReceiveMobileCSMShadows : 1; // 0x239
	char bSingleSampleShadowFromStationaryLights : 1; // 0x239
	char bIgnoreRadialImpulse : 1; // 0x239
	char bIgnoreRadialForce : 1; // 0x239
	char bApplyImpulseOnDamage : 1; // 0x239
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x239
	char bFillCollisionUnderneathForNavmesh : 1; // 0x23a
	char AlwaysLoadOnClient : 1; // 0x23a
	char AlwaysLoadOnServer : 1; // 0x23a
	char bUseEditorCompositing : 1; // 0x23a
	char bRenderCustomDepth : 1; // 0x23a
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x23b
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x23d
	FLightingChannels LightingChannels; // 0x23e
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x23f
	int32_t CustomDepthStencilValue; // 0x240
	FCustomPrimitiveData CustomPrimitiveData; // 0x248
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x258
	int32_t TranslucencySortPriority; // 0x270
	int32_t VisibilityId; // 0x274
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x278
	int8_t VirtualTextureLodBias; // 0x288
	int8_t VirtualTextureCullMips; // 0x289
	int8_t VirtualTextureMinCoverage; // 0x28a
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x28b
	float LpvBiasMultiplier; // 0x290
	float BoundsScale; // 0x29c
	TArray<AActor*> MoveIgnoreActors; // 0x2b0
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x2c0
	FBodyInstance BodyInstance; // 0x2e0
	FMulticastSparseDelegate OnComponentHit; // 0x3f8
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x3f9
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x3fa
	FMulticastSparseDelegate OnComponentWake; // 0x3fb
	FMulticastSparseDelegate OnComponentSleep; // 0x3fc
	FMulticastSparseDelegate OnBeginCursorOver; // 0x3fe
	FMulticastSparseDelegate OnEndCursorOver; // 0x3ff
	FMulticastSparseDelegate OnClicked; // 0x400
	FMulticastSparseDelegate OnReleased; // 0x401
	FMulticastSparseDelegate OnInputTouchBegin; // 0x402
	FMulticastSparseDelegate OnInputTouchEnd; // 0x403
	FMulticastSparseDelegate OnInputTouchEnter; // 0x404
	FMulticastSparseDelegate OnInputTouchLeave; // 0x405
	UPrimitiveComponent* LODParentPrimitive; // 0x420
};

struct AK25Gateway {
	float _rayCastZOffet; // 0x240
	float _rayCastLength; // 0x244
	TArray<float> _distancePercentLocations; // 0x248
	float _survivorGatewayRotationSpeed; // 0x258
	float _minimumIndicatorVelocity; // 0x25c
	float _IndicatorVelocityEasingFactor; // 0x260
	float _minimumTimeBeforeTargetLocationMulticast; // 0x264
	FDBDTunableRowHandle _minDistanceFromPlayer; // 0x268
	FTunableStat _maxDistanceFromPlayer; // 0x290
	FDBDTunableRowHandle _gatewayPlacementSpeed; // 0x310
	FDBDTunableRowHandle _pitchLevelChangeAngleThreshold; // 0x338
	FDBDTunableRowHandle _pitchLevelChangeZoneThreshold; // 0x360
	FDBDTunableRowHandle _maximumCameraPitchOrientationAngle; // 0x388
	FDBDTunableRowHandle _minimumCameraPitchOrientationAngle; // 0x3b0
	FDBDTunableRowHandle _maxGatewayPossessionDuration; // 0x3d8
	UActorComponent* _visualComponent; // 0x400
	FVector _targetLocation; // 0x408
	UCameraComponent* _cameraPlacementComponent; // 0x428
	bool _isGatewayPossessed; // 0x430
	bool _isBeingPositionned; // 0x44c
	FFastTimer _possessionTimer; // 0x468
};

struct UHoarder {
	TArray<ASearchable*> _chests; // 0x3d8
	float _camperInteractItemPickupRevealRange[0x3]; // 0x3e8
	int32_t _extraChestsSpawned[0x3]; // 0x3f4
	float _bubbleIndicatorLifetime[0x3]; // 0x400
	bool _showUniqueChestVisualPerState; // 0x40c
};

struct URandomVector {
	float Magnitude; // 0xb8
};

struct URig {
	TArray<FTransformBase> TransformBases; // 0x38
	TArray<FNode> Nodes; // 0x48
};

struct UAddon_TormentMode_17 {
	float _blindnessDuration; // 0x2a8
};

struct UDBDSocialNotificationFactory {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0x30
	UToastManager* _toastMgr; // 0x38
	UDBDPartyFacade* _partyFacade; // 0x40
	UFriendManager* _friendManager; // 0x48
	UDataTable* _toastTable; // 0x50
};

struct UAddon_TormentMode_21 {
	bool _revealSurvivorsInAgony; // 0x2a8
	bool _revealSurvivorsNotInAgony; // 0x2a9
	float _range; // 0x2ac
	float _revealDuration; // 0x2b0
};

struct AAmbientSound {
	UAudioComponent* AudioComponent; // 0x230
};

struct UNiagaraSimulationStageBase {
	UNiagaraScript* Script; // 0x30
	FName SimulationStageName; // 0x38
};

struct UInterpTrackInstParticleReplay {
	float LastUpdatePosition; // 0x30
};

struct ASkeletalMeshActor {
	char bShouldDoAnimNotifies : 1; // 0x238
	char bWakeOnLevelStart : 1; // 0x238
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x240
	USkeletalMesh* ReplicatedMesh; // 0x248
	UPhysicsAsset* ReplicatedPhysAsset; // 0x250
	UMaterialInterface* ReplicatedMaterial0; // 0x258
	UMaterialInterface* ReplicatedMaterial1; // 0x260
};

struct USubmixEffectReverbFastPreset {
	FSubmixEffectReverbFastSettings Settings; // 0xa8
};

struct AARSharedWorldGameMode {
	int32_t BufferSizePerChunk; // 0x328
};

struct UMaterialExpressionMultiply {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	float ConstA; // 0x80
	float ConstB; // 0x84
};

struct USpacer {
	FVector2D Size; // 0x128
};

struct UMaterialParameterCollection {
	FGuid StateId; // 0x30
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x40
	TArray<FCollectionVectorParameter> VectorParameters; // 0x50
};

struct UBaseCameraTargetingStrategy {
	float _maxFreeAngle; // 0x38
	float _maxInputRotation; // 0x3c
	float _interpolationSpeed; // 0x40
	float _interpolationSpeedOutsideFreeMoveZone; // 0x44
	AActor* _target; // 0x48
};

struct UMaterialFunction {
	FString Description; // 0x48
	char bExposeToLibrary : 1; // 0x58
	char bPrefixParameterNames : 1; // 0x58
	char bReentrantFlag : 1; // 0x58
};

struct UAsyncActionLoadPrimaryAssetClass {
	FMulticastInlineDelegate COMPLETED; // 0x80
};

struct ADebugCameraController {
	char bShowSelectedInfo : 1; // 0x588
	char bIsFrozenRendering : 1; // 0x588
	char bIsOrbitingSelectedActor : 1; // 0x588
	char bOrbitPivotUseCenter : 1; // 0x588
	char bEnableBufferVisualization : 1; // 0x588
	char bEnableBufferVisualizationFullMode : 1; // 0x588
	char bIsBufferVisualizationInputSetup : 1; // 0x588
	char bLastDisplayEnabled : 1; // 0x588
	UDrawFrustumComponent* DrawFrustum; // 0x590
	AActor* SelectedActor; // 0x598
	UPrimitiveComponent* SelectedComponent; // 0x5a0
	FHitResult SelectedHitPoint; // 0x5a8
	APlayerController* OriginalControllerRef; // 0x638
	UPlayer* OriginalPlayer; // 0x640
	float SpeedScale; // 0x648
	float InitialMaxSpeed; // 0x64c
	float InitialAccel; // 0x650
	float InitialDecel; // 0x654
};

struct UInterpTrackToggle {
	TArray<FToggleTrackKey> ToggleTrack; // 0x78
	char bActivateSystemEachUpdate : 1; // 0x88
	char bActivateWithJustAttachedFlag : 1; // 0x88
	char bFireEventsWhenForwards : 1; // 0x88
	char bFireEventsWhenBackwards : 1; // 0x88
	char bFireEventsWhenJumpingForwards : 1; // 0x88
};

struct UPaperGroupedSpriteComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x478
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x488
};

struct UNiagaraPreviewAxis_InterpParamVector4 {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct UUMGCharacterSelectionWidget {
	FMulticastInlineDelegate OnCharacterSelected; // 0x300
	FMulticastInlineDelegate OnCharacterRoleButtonClicked; // 0x310
	FMulticastInlineDelegate OnCharacterInfoButtonClicked; // 0x320
	UUMGCharacterPageScrollWidget* CharacterPageScrollWidget; // 0x330
	UUMGCharacterSelectSubmenu* CharacterSelectSubMenu; // 0x338
	UUMGCharacterInfoWidget* CharacterInfoWidget; // 0x340
	UWidgetSwitcher* CharacterSwitcher; // 0x348
	bool _isKiller; // 0x350
};

struct AActor {
	FActorTickFunction PrimaryActorTick; // 0x30
	char bNetTemporary : 1; // 0x60
	char bNetStartup : 1; // 0x60
	char bOnlyRelevantToOwner : 1; // 0x60
	char bAlwaysRelevant : 1; // 0x60
	char bReplicateMovement : 1; // 0x60
	char bHidden : 1; // 0x60
	char bTearOff : 1; // 0x60
	char bExchangedRoles : 1; // 0x60
	char bNetLoadOnClient : 1; // 0x61
	char bNetUseOwnerRelevancy : 1; // 0x61
	char bRelevantForNetworkReplays : 1; // 0x61
	char bRelevantForLevelBounds : 1; // 0x61
	char bReplayRewindable : 1; // 0x61
	char bAllowTickBeforeBeginPlay : 1; // 0x61
	char bAutoDestroyWhenFinished : 1; // 0x61
	char bCanBeDamaged : 1; // 0x61
	char bBlockInput : 1; // 0x62
	char bCollideWhenPlacing : 1; // 0x62
	char bFindCameraComponentWhenViewTarget : 1; // 0x62
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x62
	char bIgnoresOriginShifting : 1; // 0x62
	char bEnableAutoLODGeneration : 1; // 0x62
	char bIsEditorOnlyActor : 1; // 0x62
	char bActorSeamlessTraveled : 1; // 0x62
	char bReplicates : 1; // 0x63
	char bCanBeInCluster : 1; // 0x63
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x63
	char bActorEnableCollision : 1; // 0x64
	char bActorIsBeingDestroyed : 1; // 0x64
	EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x65
	EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x66
	ENetRole RemoteRole; // 0x67
	FRepMovement ReplicatedMovement; // 0x68
	float InitialLifeSpan; // 0x9c
	float CustomTimeDilation; // 0xa0
	FRepAttachment AttachmentReplication; // 0xa8
	AActor* Owner; // 0xe8
	FName NetDriverName; // 0xf0
	ENetRole Role; // 0xfc
	ENetDormancy NetDormancy; // 0xfd
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xfe
	EAutoReceiveInput AutoReceiveInput; // 0xff
	int32_t InputPriority; // 0x100
	UInputComponent* InputComponent; // 0x108
	float NetCullDistanceSquared; // 0x110
	int32_t NetTag; // 0x114
	float NetUpdateFrequency; // 0x118
	float MinNetUpdateFrequency; // 0x11c
	float NetPriority; // 0x120
	APawn* Instigator; // 0x128
	TArray<AActor*> Children; // 0x130
	USceneComponent* RootComponent; // 0x140
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x148
	TArray<FName> Layers; // 0x160
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x170
	TArray<FName> Tags; // 0x180
	FMulticastSparseDelegate OnTakeAnyDamage; // 0x190
	FMulticastSparseDelegate OnTakePointDamage; // 0x191
	FMulticastSparseDelegate OnTakeRadialDamage; // 0x192
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x193
	FMulticastSparseDelegate OnActorEndOverlap; // 0x194
	FMulticastSparseDelegate OnBeginCursorOver; // 0x195
	FMulticastSparseDelegate OnEndCursorOver; // 0x196
	FMulticastSparseDelegate OnClicked; // 0x197
	FMulticastSparseDelegate OnReleased; // 0x198
	FMulticastSparseDelegate OnInputTouchBegin; // 0x199
	FMulticastSparseDelegate OnInputTouchEnd; // 0x19a
	FMulticastSparseDelegate OnInputTouchEnter; // 0x19b
	FMulticastSparseDelegate OnInputTouchLeave; // 0x19c
	FMulticastSparseDelegate OnActorHit; // 0x19d
	FMulticastSparseDelegate OnDestroyed; // 0x19e
	FMulticastSparseDelegate OnEndPlay; // 0x19f
	TArray<UActorComponent*> InstanceComponents; // 0x200
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x210
};

struct UNiagaraComponentPool {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x30
};

struct UGranularSynth {
	USoundWave* GranulatedSoundWave; // 0x6f0
};

struct UInteractionStarterComponent {
	UInteractionDefinition* _interaction; // 0xc0
	bool _shouldStartInteraction; // 0xc8
};

struct UMaterialExpressionLandscapeLayerWeight {
	FExpressionInput Base; // 0x48
	FExpressionInput Layer; // 0x64
	FName ParameterName; // 0x80
	float PreviewWeight; // 0x8c
	FVector ConstBase; // 0x90
	FGuid ExpressionGUID; // 0x9c
};

struct UBTDecorator_Blackboard {
	int32_t IntValue; // 0xa0
	float FloatValue; // 0xa4
	FString StringValue; // 0xa8
	FString CachedDescription; // 0xb8
	char OperationType; // 0xc8
	EBTBlackboardRestart NotifyObserver; // 0xc9
};

struct AFoliageDensityContainer {
	TMap<FName, AFoliageActor*> _foliageActors; // 0x230
	TMap<FName, UFoliageDensityHISM*> _foliageHISMs; // 0x280
	UDBDMapFoliageDensityTunables* _mapFoliageDensityTunables; // 0x320
};

struct USoundNodeSoundClass {
	USoundClass* SoundClassOverride; // 0x50
};

struct UCommandlet {
	FString HelpDescription; // 0x30
	FString HelpUsage; // 0x40
	FString HelpWebLink; // 0x50
	TArray<FString> HelpParamNames; // 0x60
	TArray<FString> HelpParamDescriptions; // 0x70
	char IsServer : 1; // 0x80
	char IsClient : 1; // 0x80
	char IsEditor : 1; // 0x80
	char LogToConsole : 1; // 0x80
	char ShowErrorCount : 1; // 0x80
	char ShowProgress : 1; // 0x80
};

struct UUserDefinedStruct {
	EUserDefinedStructureStatus Status; // 0xc8
	FGuid Guid; // 0xcc
};

struct UUMGAtlantaCustomMatchLobbyRule {
	UTextBlock* RuleName; // 0x300
	UTextBlock* OptionName; // 0x308
};

struct UMovieSceneNiagaraParameterTrack {
	FNiagaraVariable Parameter; // 0x70
};

struct UGhostStalkedComponent {
	FMulticastInlineDelegate OnIsMarkedChanged; // 0xb8
	FMulticastInlineDelegate OnIsSpottingKillerChanged; // 0xc8
	FTagStateBool _isMarked; // 0xd8
	UStatusEffect* _ghostKillerInstinctEffect; // 0x110
	UTimerObject* _markTimer; // 0x150
	ASlasherPlayer* _killer; // 0x168
	UStalkedComponent* _stalkedComponent; // 0x170
};

struct UAISkill_Strafe {
	float StartMaxRange; // 0xc0
	float StopMaxRange; // 0xc4
	float StrafeBackwardRange; // 0xc8
	float StrafeFowardRange; // 0xcc
	float IgnoreUnderNavLinkStartRange; // 0xd0
	bool PauseStrafeOnAnimation; // 0xd4
	FAITunableParameter StrafeHoldInterval; // 0xd8
	FAITunableParameter StrafeHoldDeviation; // 0xe8
	FAITunableParameter StrafePauseInterval; // 0xf8
	FAITunableParameter StrafePauseDeviation; // 0x108
};

struct UHighestLevelAndClosestEffectCondition {
	TArray<UStatusEffect*> _effectsLevel1; // 0xd8
	TArray<UStatusEffect*> _effectsLevel2; // 0xe8
	TArray<UStatusEffect*> _effectsLevel3; // 0xf8
};

struct UMaterialExpressionShadingPathSwitch {
	FExpressionInput Default; // 0x48
	FExpressionInput Inputs[0x3]; // 0x64
};

struct ATutorialGameMode {
	UTutorialObjectiveController* _tutorialObjectiveController; // 0x380
	UTutorialNotificationController* _tutorialNotificationController; // 0x388
	UTutorialHighlightController* _tutorialHighlightController; // 0x390
	UAtlantaTutorialPlayerHudController* _atlantaTutorialPlayerHudController; // 0x398
};

struct UConstructionPlaneMechanic {
	UTransformGizmo* PlaneTransformGizmo; // 0xd8
	UTransformProxy* PlaneTransformProxy; // 0xe0
	USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xf8
};

struct UKillerConditionalSpeedCurveEffect {
	UCurveFloat* _speedCurve; // 0x350
};

struct ATrailControllerBase {
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollection; // 0x230
	FDBDTunableRowHandle _distanceBetweenTormentTrailPoint; // 0x238
	USplineComponent* _splineComponent; // 0x260
	UAuthoritativePoolableActorComponent* _poolableComponent; // 0x278
	ETrailType _trailType; // 0x280
};

struct UClothConfigNv {
	EClothingWindMethodNv ClothingWindMethod; // 0x30
	FClothConstraintSetupNv VerticalConstraint; // 0x34
	FClothConstraintSetupNv HorizontalConstraint; // 0x44
	FClothConstraintSetupNv BendConstraint; // 0x54
	FClothConstraintSetupNv ShearConstraint; // 0x64
	float SelfCollisionRadius; // 0x74
	float SelfCollisionStiffness; // 0x78
	float SelfCollisionCullScale; // 0x7c
	FVector Damping; // 0x80
	float Friction; // 0x8c
	float WindDragCoefficient; // 0x90
	float WindLiftCoefficient; // 0x94
	FVector LinearDrag; // 0x98
	FVector AngularDrag; // 0xa4
	FVector LinearInertiaScale; // 0xb0
	FVector AngularInertiaScale; // 0xbc
	FVector CentrifugalInertiaScale; // 0xc8
	float SolverFrequency; // 0xd4
	float StiffnessFrequency; // 0xd8
	float GravityScale; // 0xdc
	FVector GravityOverride; // 0xe0
	bool bUseGravityOverride; // 0xec
	float TetherStiffness; // 0xf0
	float TetherLimit; // 0xf4
	float CollisionThickness; // 0xf8
	float AnimDriveSpringStiffness; // 0xfc
	float AnimDriveDamperStiffness; // 0x100
	EClothingWindMethod_Legacy WindMethod; // 0x104
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x108
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x118
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x128
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x138
};

struct UUMGAtlantaRitualsScreen {
	UUMGAtlantaRitualTab* DailyTab; // 0x300
	UUMGAtlantaRitualTab* WeeklyTab; // 0x308
	FText _atlantaRitualTitle; // 0x310
	FText _endInLabel; // 0x328
	FText _dailyButtonLabel; // 0x340
	FText _weeklyButtonLabel; // 0x358
	FText _dailyRemainingTime; // 0x370
	FText _weeklyRemainingTime; // 0x388
};

struct UDamageType {
	char bCausedByWorld : 1; // 0x30
	char bScaleMomentumByMass : 1; // 0x30
	char bRadialDamageVelChange : 1; // 0x30
	float DamageImpulse; // 0x34
	float DestructibleImpulse; // 0x38
	float DestructibleDamageSpreadScale; // 0x3c
	float DamageFalloff; // 0x40
};

struct UHierarchicalLODSetup {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x30
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x40
};

struct UParticleModuleColorOverLife {
	FRawDistributionVector ColorOverLife; // 0x38
	FRawDistributionFloat AlphaOverLife; // 0x80
	char bClampAlpha : 1; // 0xb0
};

struct USourceEffectEQPreset {
	FSourceEffectEQSettings Settings; // 0x80
};

struct UCameraShake {
	char bSingleInstance : 1; // 0x30
	float OscillationDuration; // 0x34
	float OscillationBlendInTime; // 0x38
	float OscillationBlendOutTime; // 0x3c
	FROscillator RotOscillation; // 0x40
	FVOscillator LocOscillation; // 0x64
	FFOscillator FOVOscillation; // 0x88
	float AnimPlayRate; // 0x94
	float AnimScale; // 0x98
	float AnimBlendInTime; // 0x9c
	float AnimBlendOutTime; // 0xa0
	float RandomAnimSegmentDuration; // 0xa4
	UCameraAnim* Anim; // 0xa8
	char bRandomAnimSegment : 1; // 0xb0
	APlayerCameraManager* CameraOwner; // 0xc8
	float ShakeScale; // 0x158
	float OscillatorTimeRemaining; // 0x15c
	UCameraAnimInst* AnimInst; // 0x160
};

struct UAISystemBase {
	FSoftClassPath AISystemClassName; // 0x30
	FName AISystemModuleName; // 0x50
	bool bInstantiateAISystemOnClient; // 0x68
};

struct URichTextBlockImageDecorator {
	UDataTable* ImageSet; // 0x30
};

struct UNiagaraDataInterfaceCamera {
	int32_t PlayerControllerIndex; // 0x38
};

struct UProceduralFoliageSpawner {
	int32_t RandomSeed; // 0x30
	float TileSize; // 0x34
	int32_t NumUniqueTiles; // 0x38
	float MinimumQuadTreeSize; // 0x3c
	TArray<FFoliageTypeObject> FoliageTypes; // 0x48
};

struct UMaterialExpressionSubtract {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	float ConstA; // 0x80
	float ConstB; // 0x84
};

struct USizeBox {
	float WidthOverride; // 0x150
	float HeightOverride; // 0x154
	float MinDesiredWidth; // 0x158
	float MinDesiredHeight; // 0x15c
	float MaxDesiredWidth; // 0x160
	float MaxDesiredHeight; // 0x164
	float MinAspectRatio; // 0x168
	float MaxAspectRatio; // 0x16c
	char bOverride_WidthOverride : 1; // 0x170
	char bOverride_HeightOverride : 1; // 0x170
	char bOverride_MinDesiredWidth : 1; // 0x170
	char bOverride_MinDesiredHeight : 1; // 0x170
	char bOverride_MaxDesiredWidth : 1; // 0x170
	char bOverride_MaxDesiredHeight : 1; // 0x170
	char bOverride_MinAspectRatio : 1; // 0x170
	char bOverride_MaxAspectRatio : 1; // 0x170
};

struct UComboButtonWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x38
};

struct UUMGLoadoutPageScrollWidget {
	bool ShouldResizeWidget; // 0x430
	TSoftClassPtr<UObject> _itemWidgetClass; // 0x438
	EInventoryGridFormat _gridFormat; // 0x468
	TArray<FInventorySlotData> _inventoryData; // 0x470
	TArray<int32_t> _inventorySelectedItemIndexes; // 0x480
	FString _subtitle; // 0x490
};

struct UFSM_AndCondition {
	TArray<UFSM_Condition*> _conditions; // 0x38
};

struct USpaceDeformerOperatorFactory {
	UMeshSpaceDeformerTool* SpaceDeformerTool; // 0x38
};

struct UAnimInstance {
	USkeleton* CurrentSkeleton; // 0x30
	ERootMotionMode RootMotionMode; // 0x38
	char bUseMultiThreadedAnimationUpdate : 1; // 0x39
	char bUsingCopyPoseFromMesh : 1; // 0x39
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x39
	char bPropagateNotifiesToLinkedInstances : 1; // 0x39
	char bQueueMontageEvents : 1; // 0x39
	FMulticastInlineDelegate OnMontageBlendingOut; // 0x40
	FMulticastInlineDelegate OnMontageStarted; // 0x50
	FMulticastInlineDelegate OnMontageEnded; // 0x60
	FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x70
	FAnimNotifyQueue NotifyQueue; // 0x108
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x178
};

struct UParticleModuleBeamTarget {
	Beam2SourceTargetMethod TargetMethod; // 0x38
	FName TargetName; // 0x3c
	FRawDistributionVector Target; // 0x48
	char bTargetAbsolute : 1; // 0x90
	char bLockTarget : 1; // 0x90
	Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x94
	FRawDistributionVector TargetTangent; // 0x98
	char bLockTargetTangent : 1; // 0xe0
	FRawDistributionFloat TargetStrength; // 0xe8
	char bLockTargetStength : 1; // 0x118
	float LockRadius; // 0x11c
};

struct UChunkingManager {
	UDBDGameInstance* _gameInstance; // 0x30
};

struct AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x230
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x240
	TArray<AOnlineBeaconClient*> ClientActors; // 0x248
};

struct UHillbillyChainsawOverheatComponent {
	FMulticastInlineDelegate OnHeatChargeUpdateDelegate; // 0xb8
	FTagStateBool _isChainsawOverheating; // 0x1e0
	UPowerChargeComponent* _chainsawHeatCharge; // 0x210
	FTunableStat _heatMaxCharge; // 0x218
	FTunableStat _heatRevStartAmount; // 0x298
	FTunableStat _heatRevChargeRate; // 0x318
	FTunableStat _heatDashChargeRate; // 0x398
	FTunableStat _heatDischargeRate; // 0x418
	FTunableStat _overheatDischargeRate; // 0x498
};

struct UMaterialExpressionTemporalSobol {
	FExpressionInput Index; // 0x48
	FExpressionInput Seed; // 0x64
	uint32_t ConstIndex; // 0x80
	FVector2D ConstSeed; // 0x84
};

struct AThrowingKnives {
	UFlurryComboScoreComponent* _flurryScoreComponent; // 0x508
	UTricksterSuperModeComponent* _superModeComponent; // 0x510
	UK23PowerProgressPresentationComponent* _superModeChargePresentationComponent; // 0x518
	UPowerChargeComponent* _superModeChargeComponent; // 0x520
	UKnivesProvider* _knivesProvider; // 0x528
	UKnivesLauncher* _knivesLauncher; // 0x530
	ULacerationComponent* _lacerationComponentClass; // 0x538
	UReloadKnives* _reloadInteractionClass; // 0x540
	AActor* _closetReloadActor; // 0x548
	float _minimumTimeBetweenBroadcast; // 0x550
};

struct UK26PathHandlerComponent {
	FDBDTunableRowHandle _maxPathDistance; // 0xb8
	FDBDTunableRowHandle _survivorPathVisibilityTimeOnFire; // 0xe0
	FDBDTunableRowHandle _defaultProjectileDistanceFromFloor; // 0x108
	FDBDTunableRowHandle _maxPathIterations; // 0x130
	FDBDTunableRowHandle _maxGroundSearchingDistance; // 0x158
	AActor* _visualPathPart; // 0x180
	AActor* _visualPathEndArrow; // 0x188
	FDBDTunableRowHandle _projectileSummonDistance; // 0x190
	UK26AmmoHandlerComponent* _ammoHandler; // 0x1b8
	UK26CrowPlacementValidatorComponent* _placementValidator; // 0x1c0
	TArray<FK26PathData> _availablePathData; // 0x1c8
	TArray<FK26Path> _availablePaths; // 0x1d8
};

struct UAddon_K22Power_9 {
	float _increaseDestroyTwinTime; // 0x2a8
};

struct UDistributionFloatParameterBase {
	FName ParameterName; // 0x48
	float MinInput; // 0x54
	float MaxInput; // 0x58
	float MinOutput; // 0x5c
	float MaxOutput; // 0x60
	DistributionParamMode ParamMode; // 0x64
};

struct UAISense_Touch {
	TArray<FAITouchEvent> RegisteredEvents; // 0x90
};

struct AControlPointMeshActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x230
};

struct UDatasmithCineCameraComponentTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x38
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x40
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x44
	float CurrentFocalLength; // 0x4c
	float CurrentAperture; // 0x50
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x60
};

struct USingleClickInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UFileMediaOutput {
	FImageWriteOptions WriteOptions; // 0x40
	FDirectoryPath FilePath; // 0xa0
	FString BaseFileName; // 0xb0
	bool bOverrideDesiredSize; // 0xc0
	FIntPoint DesiredSize; // 0xc4
	bool bOverridePixelFormat; // 0xcc
	EFileMediaOutputPixelFormat DesiredPixelFormat; // 0xd0
};

struct UParticleModuleColorScaleOverLife {
	FRawDistributionVector ColorScaleOverLife; // 0x38
	FRawDistributionFloat AlphaScaleOverLife; // 0x80
	char bEmitterTime : 1; // 0xb0
};

struct UMaterialExpressionStaticSwitch {
	char defaultValue : 1; // 0x48
	FExpressionInput A; // 0x4c
	FExpressionInput B; // 0x68
	FExpressionInput Value; // 0x84
};

struct UUMGRoleSelectionScreen {
	int32_t _newInboxMessageCount; // 0x300
};

struct UDestroyTwin {
	FDBDTunableRowHandle _destroyTwinMaxCharge; // 0x718
};

struct ULevelStreaming {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x30
	FName PackageNameToLoad; // 0x60
	TArray<FName> LODPackageNames; // 0x70
	FTransform LevelTransform; // 0x90
	int32_t LevelLODIndex; // 0xc0
	int32_t StreamingPriority; // 0xc4
	char bShouldBeVisible : 1; // 0xca
	char bShouldBeLoaded : 1; // 0xca
	char bLocked : 1; // 0xca
	char bIsStatic : 1; // 0xca
	char bClientManaged : 1; // 0xca
	char bShouldBlockOnLoad : 1; // 0xcb
	char bShouldBlockOnUnload : 1; // 0xcb
	char bDisableDistanceStreaming : 1; // 0xcb
	char bDrawOnLevelStatusMap : 1; // 0xcb
	FLinearColor LevelColor; // 0xcc
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xe0
	float MinTimeBetweenVolumeUnloadRequests; // 0xf0
	FMulticastInlineDelegate OnLevelLoaded; // 0xf8
	FMulticastInlineDelegate OnLevelUnloaded; // 0x108
	FMulticastInlineDelegate OnLevelShown; // 0x118
	FMulticastInlineDelegate OnLevelHidden; // 0x128
	ULevel* LoadedLevel; // 0x138
	ULevel* PendingUnloadLevel; // 0x140
};

struct UPositionPlaneGizmo {
	UPreviewMesh* CenterBallShape; // 0x88
	UMaterialInstance* CenterBallMaterial; // 0x90
};

struct UEventCountComparisonQEEvaluator {
	TArray<FGameplayTag> _incrementCountEvents; // 0x90
	TArray<FGameplayTag> _resetCountEvents; // 0xa0
	EventCountComparisonOperator _comparisonOperator; // 0xb0
};

struct UAISystem {
	FSoftClassPath PerceptionSystemClassName; // 0x70
	FSoftClassPath HotSpotManagerClassName; // 0x90
	float AcceptanceRadius; // 0xb0
	float PathfollowingRegularPathPointAcceptanceRadius; // 0xb4
	float PathfollowingNavLinkAcceptanceRadius; // 0xb8
	bool bFinishMoveOnGoalOverlap; // 0xbc
	bool bAcceptPartialPaths; // 0xbd
	bool bAllowStrafing; // 0xbe
	bool bEnableBTAITasks; // 0xbf
	bool bAllowControllersAsEQSQuerier; // 0xc0
	bool bEnableDebuggerPlugin; // 0xc1
	bool bForgetStaleActors; // 0xc2
	ECollisionChannel DefaultSightCollisionChannel; // 0xc3
	UBehaviorTreeManager* BehaviorTreeManager; // 0xc8
	UEnvQueryManager* EnvironmentQueryManager; // 0xd0
	UAIPerceptionSystem* PerceptionSystem; // 0xd8
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xe0
	UAIHotSpotManager* HotSpotManager; // 0xf0
	UNavLocalGridManager* NavLocalGrids; // 0xf8
};

struct ADisplayStand {
	AActor* _currentActorDisplayed; // 0x248
	UObject* _currentActorDisplayedClass; // 0x258
	UObject* _nextActorToDisplayClass; // 0x260
	TMap<UObject*, FTransform> _offsetByClass; // 0x290
	TMap<UObject*, bool> _enableRotationByClass; // 0x2e0
	TSoftClassPtr<UObject> _defaultCharmClassDisplayable; // 0x330
	bool _useOffsetMenuAnimations; // 0x389
	bool _displayDummyCharacter; // 0x38a
	FCharacterDropdown _characterDropdown; // 0x38c
};

struct UMovieScenePrimitiveMaterialSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UTurn180Component {
	FTurn180Settings _settings; // 0xe0
};

struct UBTTask_ExtMoveTo {
	FBlackboardKeySelector BBStrafeFocus; // 0xc0
	EExtMoveToStrafeFocusOptions StrafeFocus; // 0xf0
	bool StrafeFocusPitch; // 0xf1
	float StrafeNearFocusModeUnderDistance; // 0xf4
	float IntermittentOnStrafeFocusInterval; // 0xf8
	float IntermittentOnStrafeFocusDeviation; // 0xfc
	float IntermittentOffStrafeFocusInterval; // 0x100
	float IntermittentOffStrafeFocusDeviation; // 0x104
	float EndMoveStrafeFocusPrecisionAngle; // 0x108
	bool StrafeFocusOwnerOnComponentBBKey; // 0x10c
	ECharacterMovementTypes ToGoalMovementMode; // 0x10d
	ECharacterMovementTypes NearGoalMovementMode; // 0x10e
	float NearGoalModeUnderDistance; // 0x110
	float NormalMoveUnderNavLinkDistance; // 0x114
	FBlackboardKeySelector BBIgnoreGroupAvoidance; // 0x118
	float RepathInterval; // 0x148
	bool UseAccelerationForPaths; // 0x14c
	float PathReachedPointRadius; // 0x150
	FName UseContextualAcceptableRadius; // 0x154
};

struct UDatasmithSceneComponentTemplate {
	FTransform RelativeTransform; // 0x40
	EComponentMobility Mobility; // 0x70
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x78
	TSet<FName> Tags; // 0xa8
};

struct UZombieResurrector {
	FDBDTunableRowHandle _powerLevelToSpawnZombie; // 0xd0
	TArray<AZombieCharacter*> _delayedSpawnZombies; // 0x108
};

struct UCoreOnboardingMenuWidget {
	UCoreTabContainerWidget* OnboardingMenuTabs; // 0x2e0
	UCoreOnboardingMenuTitleWidget* menuTitle; // 0x2e8
	UCoreButtonPromptWidget* BackButton; // 0x2f0
	FMulticastInlineDelegate BackActionDelegate; // 0x2f8
	FMulticastInlineDelegate MenuTabSelectedDelegate; // 0x308
	FMulticastInlineDelegate MenuTabSelectedAgainDelegate; // 0x318
};

struct UUMGTallyEmblemWidget {
	TMap<EEmblemQuality, UTexture2D*> _emblemBackgrounds; // 0x300
	UImage* BackgroundImage; // 0x350
	UImage* IconImage; // 0x358
};

struct UDBDEmblem_SurvivorUnbroken {
	UCurveFloat* _pointsForTimeAlive; // 0x118
	UDBDRankDesignTunables* _rankTunablesClass; // 0x130
};

struct UAnimSharingAdditiveInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x270
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x278
	float alpha; // 0x280
	bool bStateBool; // 0x284
};

struct UMaterialExpressionPerInstanceCustomData {
	FExpressionInput defaultValue; // 0x48
	float ConstDefaultValue; // 0x64
	uint32_t DataIndex; // 0x68
};

struct UMoriComponent {
	TArray<UInteractionDefinition*> _moriInteractionClasses; // 0xd0
};

struct UUMGBloodStoreMysteryBoxPopup {
	UUMGBloodStoreItemWidget* MysteryItem; // 0x3e8
	FText _itemDisplayName; // 0x3f0
	FText _itemRarityName; // 0x408
	FSlateColor _itemRarityColor; // 0x420
	FText _addedToInventory; // 0x448
};

struct UBloodwebGenerator {
	FRandomStream _randomizationStream; // 0x3c
	TArray<FString> _selectedNodes; // 0x48
	TArray<FName> _selectedContent; // 0x58
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition; // 0xb0
	UDBDDesignTunables* _designTunables; // 0xc0
	UBloodwebTunables* _bloodwebTunables; // 0xc8
	float _alternativePathOccurenceFactor; // 0xd0
	UBloodwebDistribution* _dataDistribution; // 0xd8
	UBloodwebSettings* _bloodwebSettings; // 0xe0
};

struct UFoliageInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x688
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x698
	FGuid GenerationGuid; // 0x6a8
};

struct UMaterialExpressionRayTracingQualitySwitch {
	FExpressionInput Normal; // 0x48
	FExpressionInput RayTraced; // 0x64
};

struct AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x268
	UNetConnection* BeaconConnection; // 0x270
	EBeaconConnectionState ConnectionState; // 0x278
};

struct UAISenseConfig_Terror {
	UAISense_Terror* Implementation; // 0x50
	float MaxBreathingSoundRange; // 0x58
	TMap<EAITerrorLevel, float> TerrorRanges; // 0x60
	FAISenseAffiliationFilter DetectionByAffiliation; // 0xb0
};

struct UMaterialExpressionMaterialAttributeLayers {
	FName ParameterName; // 0x48
	FGuid ExpressionGUID; // 0x54
	FMaterialAttributesInput Input; // 0x64
	FMaterialLayersFunctions DefaultLayers; // 0x88
	TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xc8
	int32_t NumActiveLayerCallers; // 0xd8
	TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xe0
	int32_t NumActiveBlendCallers; // 0xf0
	bool bIsLayerGraphBuilt; // 0xf4
};

struct UParticleModuleEventReceiverBase {
	EParticleEventType EventGeneratorType; // 0x38
	FName EventName; // 0x3c
};

struct USocialChatManager {
	TMap<TWeakObjectPtr<USocialUser>, USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x80
	TMap<FString, USocialChatRoom*> ChatRoomsById; // 0xd0
	TMap<FString, USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x120
	bool bEnableChatSlashCommands; // 0x170
	TMap<FUniqueNetIdRepl, USocialGroupChannel*> GroupChannels; // 0x178
};

struct UOnlineSystemHandler {
	ULocalPlayer* _cachedLocalPlayer; // 0x198
	UDBDGameInstance* _gameInstance; // 0x1a0
	UGameSessionDS* _gameSessionDS; // 0x1a8
	UDBDServerInstance* _serverInstance; // 0x3c8
	UCrossPlatformManager* _crossPlatformManager; // 0x400
};

struct UAnimationDataSourceRegistry {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x30
};

struct UEditableMesh {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3c0
	int32_t TextureCoordinateCount; // 0x3d8
	int32_t PendingCompactCounter; // 0x524
	int32_t SubdivisionCount; // 0x528
};

struct UCoreOnboardingTutorialPanelWidget {
	TArray<UCoreOnboardingTutorialButtonWidget*> TutorialButtons; // 0x2e0
	FMulticastInlineDelegate TutorialSelectedDelegate; // 0x2f0
	TArray<FPendingStepData> _pendingData; // 0x300
};

struct USpawnEffectsOnAllSurvivorsBaseAddon {
	bool _canCreateMultipleInstances; // 0x298
};

struct UPlaneReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x2b8
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x2c0
	UBoxComponent* PreviewCaptureBox; // 0x2c8
};

struct ALanternLightCollectable {
	ALanternInteractable* _parentLantern; // 0x4c8
};

struct UPerkSoundHudIconSporadic {
	UCanvasPanel* SporadicIcon; // 0x310
	float FadeInRate; // 0x318
	float FadeOutRate; // 0x31c
	float AnimationStartOpacity; // 0x320
	int32_t FadePolynomialOrder; // 0x324
	bool DisplayIcon; // 0x328
};

struct UEnvQueryTest_Overlap {
	FEnvOverlapData OverlapData; // 0x238
};

struct UInterpData {
	float InterpLength; // 0x30
	float PathBuildTime; // 0x34
	TArray<UInterpGroup*> InterpGroups; // 0x38
	UInterpCurveEdSetup* CurveEdSetup; // 0x48
	float EdSectionStart; // 0x50
	float EdSectionEnd; // 0x54
	char bShouldBakeAndPrune : 1; // 0x58
	UInterpGroupDirector* CachedDirectorGroup; // 0x60
	TArray<FName> AllEventNames; // 0x68
};

struct UCheatManager {
	ADebugCameraController* DebugCameraControllerRef; // 0x30
	ADebugCameraController* DebugCameraControllerClass; // 0x38
};

struct AFirecracker {
	USphereComponent* _effectArea; // 0x328
	bool DebugDisplayEnabled; // 0x330
	TArray<UGameplayModifierContainer*> _effectModifiers; // 0x338
	ADBDPlayer* _playerOwner; // 0x348
	bool _exploded; // 0x350
	TArray<AActor*> _actorsInRange; // 0x358
};

struct UInterpTrackInstDirector {
	AActor* OldViewTarget; // 0x30
};

struct UDBDTextBlock {
	bool _debugPreviewLargeTextState; // 0x2e8
	bool _debugPreviewUndockedState; // 0x2e9
	USwitchDockStateManager* _switchDockStateManager; // 0x2f0
	UDBDTextManager* _textManager; // 0x2f8
	bool _isUpperCase; // 0x300
	bool _hasLargeText; // 0x301
	FTextBlockOverrideProperties _largeTextProperties; // 0x308
	bool _overrideUndockedPropertiesWithLargeText; // 0x351
	bool _hasUndocking; // 0x352
	FTextBlockOverrideProperties _undockedProperties; // 0x358
};

struct UMovieSceneActorReferenceSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x1a0
	TArray<FString> ActorGuidStrings; // 0x220
};

struct UMaterialPerThemeData {
	TMap<UMaterialInstance*, UMaterialInstance*> _materialMap; // 0x38
};

struct UUMGBaseRootStorefrontWidget {
	UNamedSlot* StorePageSlot; // 0x348
	UUMGBaseButtonWidget* BackButton; // 0x350
	UPanelWidget* CurrencyButtonsPanel; // 0x358
	UTextBlock* StorefrontTitle; // 0x360
};

struct UCurveVector {
	FRichCurve FloatCurves[0x3]; // 0x38
};

struct UUMGTallyEmblemProgressBar {
	UProgressBar* ProgressBar; // 0x300
	UCanvasPanel* QualityContainer; // 0x308
	TSoftClassPtr<UObject> EmblemQualityClass; // 0x310
	FVector2D _emblemQualityAlignment; // 0x340
	TMap<EEmblemQuality, FSlateBrush> _qualityFillImages; // 0x348
};

struct USnuffTotem {
	float _slasherFacingTolerance; // 0x5b0
};

struct ASphereReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x238
};

struct UAddon_TheBlight_15 {
	float _palletPulldownBlockRange; // 0x2a8
	float _palletPulldownBlockSeconds; // 0x2ac
};

struct UChainKillerMovementStatusEffect {
	FDBDTunableRowHandle _backwardMovementSpeedMultiplier; // 0x3a8
	FDBDTunableRowHandle _backwardMovementAngle; // 0x3d0
};

struct UGenericPopupScreen {
	UUMGGenericPopup* _popup; // 0x120
};

struct UResurgence {
	float _healRegainPercentage[0x3]; // 0x3d0
};

struct ACharmAttacher {
	FMulticastInlineDelegate OnAttachedOnActor; // 0x230
	FMulticastInlineDelegate OnCharmAnimationTagsChanged; // 0x240
	USkeletalMeshComponent* _chain; // 0x250
	ACharm* _attachedCharm; // 0x258
};

struct UBufferLastValidLocationObjectPlacementStrategy {
	float _maxDistanceToOwner; // 0x50
};

struct UGeometryCacheCodecBase {
	TArray<int32_t> TopologyRanges; // 0x30
};

struct UMaterialExpressionAntialiasedTextureMask {
	float Threshold; // 0x130
	ETextureColorChannel Channel; // 0x134
};

struct UParticleModuleRotationRate {
	FRawDistributionFloat StartRotationRate; // 0x38
};

struct UBackgroundBlurSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UMediaSoundComponent {
	EMediaSoundChannels Channels; // 0x6f0
	bool DynamicRateAdjustment; // 0x6f4
	float RateAdjustmentFactor; // 0x6f8
	FFloatRange RateAdjustmentRange; // 0x6fc
	UMediaPlayer* MediaPlayer; // 0x710
};

struct UCamperAnimInstance {
	ACamperPlayer* CamperPlayer; // 0x270
	float MyDeltaTime; // 0x278
	bool IsHooked; // 0x27c
	bool IsSacrificeStruggling; // 0x27d
	UAnimMontage* MontageMadnessTierUp; // 0x280
	TArray<UAnimCompositeBase*> ArrayCarryAttackMontage; // 0x288
	bool _isFrightScreaming; // 0x298
	bool IsBeingCarried; // 0x299
	bool IsBeingPutOnHook; // 0x29a
	bool isCrouched; // 0x29b
	ECamperGuidedAction GuidedAction; // 0x29c
	bool IsTrapped; // 0x29d
	bool IsCrawling; // 0x29e
	bool IsDead; // 0x29f
	float MaxSpeed; // 0x2a0
	bool IsInsideCloset; // 0x2a4
	float IsPlayingMadnessTierUpWeight; // 0x2a8
	bool IsTotallyInsane; // 0x2ac
	bool IsBeingKilled; // 0x2ad
	bool IsCarryAttackSucess; // 0x2ae
	bool ShouldLookSleepy; // 0x2af
	bool IsUsingAimItem; // 0x2b0
	bool IsHoldingAimItem; // 0x2b1
	bool AllowLookAt; // 0x2b2
	float DropStaggerTimeLeft; // 0x2b4
	float LeftArmIKAlpha; // 0x2b8
	float RightArmIKAlpha; // 0x2bc
	float LeftForeArmIKAlpha; // 0x2c0
	float RightForeArmIKAlpha; // 0x2c4
	FTransform LeftHandIKTransform; // 0x2d0
	FTransform RightHandIKTransform; // 0x300
	bool Strafe; // 0x330
	bool IsInteracting; // 0x331
	bool Injured; // 0x332
	EInteractionAnimation interactionType; // 0x333
	EInteractionAnimation PreviousInteractionType; // 0x334
	bool IsSlasherInFPV; // 0x335
	float CarriedAlpha; // 0x338
	bool IsHoldingHandleItem; // 0x33c
	bool IsHoldingSmallItem; // 0x33d
	bool IsHoldingFirecracker; // 0x33e
	float Turning; // 0x340
	bool InAir; // 0x350
	float Speed; // 0x354
	float Direction; // 0x358
	float Pitch; // 0x35c
	float Yaw; // 0x360
	FVector RightFootEffectorLocation; // 0x364
	FVector LeftFootEffectorLocation; // 0x370
	bool Idle; // 0x37c
	float MyTime; // 0x380
	bool SkillCheckFailed; // 0x384
	bool IsGassed; // 0x385
	bool HasAnyMontagePlaying; // 0x386
	FName CurrentlyPlayerMontageId; // 0x388
	bool IsBeingCarriedByTheSpirit; // 0x394
	bool IsBeingCarriedByTheNightmare; // 0x395
	bool IsBeingCarriedByThePig; // 0x396
	bool IsBeingCarriedByTheHag; // 0x397
	bool IsBeingCarriedByTheLegion; // 0x398
	bool IsBeingCarriedByTheGhostFace; // 0x399
	bool IsUsingDeadHard; // 0x39a
	bool IsPlayingWakeUpOther; // 0x39b
	bool IsPlayingFreddyMori; // 0x39c
	bool IsSpooked; // 0x39d
	bool IsHealingKOCamper; // 0x39e
	bool IsChainLinked; // 0x39f
	bool IsBeingReeled; // 0x3a0
	bool TriggerHarpoonHitAnim; // 0x3a1
	bool WasRecentlyHitByVomit; // 0x3a2
	float HarpoonHitTurnAnimNormalizedStartTime; // 0x3a4
	bool HarpoonHitAnimTurnRight; // 0x3a8
	bool ChainBreakTrigger; // 0x3a9
	bool HasLinkInput; // 0x3aa
	float LinkInputX; // 0x3ac
	float LinkInputY; // 0x3b0
	float LinkedMaxSpeed; // 0x3b4
	USurvivorPlagueEffect* _cachedSurvivorPlagueEffect; // 0x3b8
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch {
	FGameplayTagContainer Tags; // 0x30
};

struct UObjectLibrary {
	UObject* ObjectBaseClass; // 0x30
	bool bHasBlueprintClasses; // 0x38
	TArray<UObject*> Objects; // 0x40
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x50
	bool bUseWeakReferences; // 0x60
	bool bIsFullyLoaded; // 0x61
};

struct UEvaluatorCondition {
	EConditionSubject _conditionSubject; // 0x30
};

struct UTwinAttachmentComponent {
	ADBDPlayer* _attachedPlayer; // 0x100
	UStatusEffect* _gateBlockerStatusEffect; // 0x160
	bool _hasBeenDetachedBySurvivorDamageChanged; // 0x17a
	FDBDTunableRowHandle _cantEscapeByGateLingerDuration; // 0x180
	TMap<ADBDPlayer*, FFastTimer> _escapeBlockerLingerTimers; // 0x1a8
};

struct UCombineMeshesTool {
	UCombineMeshesToolProperties* BasicProperties; // 0x98
};

struct UUMGMainMenuMonthlyPassButton {
	UWidgetSwitcher* ButtonSwitcher; // 0x300
	UButton* ActiveButton; // 0x308
	UButton* NonActiveButton; // 0x310
	FText playerName; // 0x318
	UAkAudioEvent* OnClickSound; // 0x330
};

struct UMaterialExpressionSphereMask {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	FExpressionInput Radius; // 0x80
	FExpressionInput Hardness; // 0x9c
	float AttenuationRadius; // 0xb8
	float HardnessPercent; // 0xbc
};

struct USurveillancePerk {
	float generatorRegressionStopRevealTime; // 0x3d0
};

struct UAISkill_FindInteractable_CrushTwin {
	FAITunableParameter _crushVictorGoalWeight; // 0x124
	FAITunableParameter _recoveringTimeEstimationErrorMin; // 0x134
	FAITunableParameter _recoveringTimeEstimationErrorMax; // 0x144
	FDBDTunableRowHandle _destroyTwinMaxCharge; // 0x158
};

struct UCameraAnimInst {
	UCameraAnim* CamAnim; // 0x30
	UInterpGroupInst* InterpGroupInst; // 0x38
	float playRate; // 0x58
	UInterpTrackMove* MoveTrack; // 0x70
	UInterpTrackInstMove* MoveInst; // 0x78
	ECameraAnimPlaySpace PlaySpace; // 0x80
};

struct UAkItemBoolProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x128
	FMulticastInlineDelegate OnPropertyDragged; // 0x138
};

struct UNewMeshMaterialProperties {
	UMaterialInterface* Material; // 0x58
	float UVScale; // 0x60
	bool bWorldSpaceUVScale; // 0x64
	bool bWireframe; // 0x65
	bool bShowExtendedOptions; // 0x66
};

struct UFlashlightConeComponent {
	FVector AIAimBeamLocationOffset; // 0xb8
	FRotator AIAimBeamRotationOffset; // 0xc4
	USceneComponent* _flashlightBottom; // 0xd0
	FDBDTunableRowHandle _baseBeamAngle; // 0xd8
	FDBDTunableRowHandle _baseBeamLength; // 0x100
	TWeakObjectPtr<AActor> _cacheCollidingActor; // 0x128
};

struct UParticleModuleVectorFieldScaleOverLife {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x38
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x40
};

struct UK25SolveLamentConfigurationInteraction {
	float _timeBufferBeforeAllowedToUseInteractionAgain; // 0x6d8
	FDBDTunableRowHandle _failSkillCheckTimePenalty; // 0x6e0
	FAnimationMontageDescriptor _failMontage; // 0x708
};

struct UMaterialExpressionQualitySwitch {
	FExpressionInput Default; // 0x48
	FExpressionInput Inputs[0x3]; // 0x64
};

struct USoundEffectSourcePresetChain {
	TArray<FSourceEffectChainEntry> chain; // 0x30
	char bPlayEffectChainTails : 1; // 0x40
};

struct UInAppPurchaseRestoreCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UARPlaneGeometry {
	EARPlaneOrientation Orientation; // 0xf0
	FVector Center; // 0xf4
	FVector Extent; // 0x100
	UARPlaneGeometry* SubsumedBy; // 0x120
};

struct UAIHealAllyBehaviour {
	UAIHealAllyBehaviourData* _behaviourData; // 0x58
	ADBDAIPlayerController* _aiController; // 0x60
	ADBDPlayer* _aiPlayer; // 0x68
};

struct UMapData {
	FName ThemeName; // 0x38
	FName ThemeWeather; // 0x44
	FName AudioStateThemes; // 0x50
	FName AudioStateWeather; // 0x5c
	FName AudioThemeEvent; // 0x68
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank; // 0x78
	int32_t MapWidth; // 0xa8
	int32_t MapHeight; // 0xac
	bool Draft; // 0xb0
	TArray<FTileProperties> MapTileProperties; // 0xb8
	UBlackboardData* Blackboard; // 0xc8
	bool Gesture; // 0xd0
	UProceduralGenerationData* _proceduralGenerationData; // 0xd8
};

struct UPopupFactory {
	UDBDGameInstance* _gameInstance; // 0x30
};

struct UProgressBar {
	FProgressBarStyle WidgetStyle; // 0x128
	USlateWidgetStyleAsset* Style; // 0x2e0
	USlateBrushAsset* BackgroundImage; // 0x2e8
	USlateBrushAsset* FillImage; // 0x2f0
	USlateBrushAsset* MarqueeImage; // 0x2f8
	float percent; // 0x300
	EProgressBarFillType BarFillType; // 0x304
	bool bIsMarquee; // 0x305
	FVector2D BorderPadding; // 0x308
	FDelegate PercentDelegate; // 0x310
	FLinearColor FillColorAndOpacity; // 0x324
	FDelegate FillColorAndOpacityDelegate; // 0x334
};

struct UQosRegionManager {
	int32_t NumTestsPerRegion; // 0x30
	float PingTimeout; // 0x34
	TArray<FQosRegionInfo> RegionDefinitions; // 0x38
	TArray<FQosDatacenterInfo> DatacenterDefinitions; // 0x48
	FDateTime LastCheckTimestamp; // 0x58
	UQosEvaluator* Evaluator; // 0x60
	EQosCompletionResult QosEvalResult; // 0x68
	TArray<FRegionQosInstance> RegionOptions; // 0x70
	FString ForceRegionId; // 0x80
	bool bRegionForcedViaCommandline; // 0x90
	FString SelectedRegionId; // 0x98
};

struct UWidgetSwitcher {
	int32_t ActiveWidgetIndex; // 0x140
};

struct UAnimationSharingStateProcessor {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x30
};

struct UAkAudioBank {
	bool AutoLoad; // 0x60
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x68
	UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xb8
};

struct UReelChainInteraction {
	float _frontMovementAngle; // 0x5b0
	float _minimumFrontVelocity; // 0x5b8
	ADBDPlayer* _linkedPlayer; // 0x5c0
};

struct UParticleModuleKillBox {
	FRawDistributionVector LowerLeftCorner; // 0x38
	FRawDistributionVector UpperRightCorner; // 0x80
	char bAbsolute : 1; // 0xc8
	char bKillInside : 1; // 0xc8
	char bAxisAlignedAndFixedSize : 1; // 0xc8
};

struct URendererSettings {
	char bMobileDisableVertexFog : 1; // 0x48
	int32_t MaxMobileCascades; // 0x4c
	EMobileMSAASampleCount MobileMSAASampleCount; // 0x50
	char bMobileUseLegacyShadingModel : 1; // 0x54
	char bMobileAllowDitheredLODTransition : 1; // 0x54
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x54
	float MobileShadowMapMaxBrightness; // 0x58
	char bMobileVirtualTextures : 1; // 0x5c
	char bDiscardUnusedQualityLevels : 1; // 0x5c
	char bOcclusionCulling : 1; // 0x5c
	float MinScreenRadiusForLights; // 0x60
	float MinScreenRadiusForEarlyZPass; // 0x64
	float MinScreenRadiusForCSMdepth; // 0x68
	char bPrecomputedVisibilityWarning : 1; // 0x6c
	char bTextureStreaming : 1; // 0x6c
	char bUseDXT5NormalMaps : 1; // 0x6c
	char bVirtualTextures : 1; // 0x6c
	char bVirtualTexturedLightmaps : 1; // 0x6c
	uint32_t VirtualTextureTileSize; // 0x70
	uint32_t VirtualTextureTileBorderSize; // 0x74
	uint32_t VirtualTextureFeedbackFactor; // 0x78
	char bVirtualTextureEnableCompressZlib : 1; // 0x7c
	char bVirtualTextureEnableCompressCrunch : 1; // 0x7c
	char bClearCoatEnableSecondNormal : 1; // 0x7c
	char bAnisotropicBRDF : 1; // 0x7c
	int32_t ReflectionCaptureResolution; // 0x80
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x84
	char bForwardShading : 1; // 0x84
	char bVertexFoggingForOpaque : 1; // 0x84
	char bAllowStaticLighting : 1; // 0x84
	char bUseNormalMapsForStaticLighting : 1; // 0x84
	char bGenerateMeshDistanceFields : 1; // 0x84
	char bEightBitMeshDistanceFields : 1; // 0x84
	char bGenerateLandscapeGIData : 1; // 0x84
	char bCompressMeshDistanceFields : 1; // 0x85
	float TessellationAdaptivePixelsPerTriangle; // 0x88
	char bSeparateTranslucency : 1; // 0x8c
	ETranslucentSortPolicy TranslucentSortPolicy; // 0x90
	FVector TranslucentSortAxis; // 0x94
	ECustomDepthStencil CustomDepthStencil; // 0xa0
	char bCustomDepthTaaJitter : 1; // 0xa4
	EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0xa8
	char bDefaultFeatureBloom : 1; // 0xac
	char bDefaultFeatureAmbientOcclusion : 1; // 0xac
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0xac
	char bDefaultFeatureAutoExposure : 1; // 0xac
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0xb0
	float DefaultFeatureAutoExposureBias; // 0xb4
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xb8
	char bUsePreExposure : 1; // 0xb8
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xb8
	char bDefaultFeatureMotionBlur : 1; // 0xb8
	char bDefaultFeatureLensFlare : 1; // 0xb8
	char bTemporalUpsampling : 1; // 0xb8
	char bSSGI : 1; // 0xb8
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xbc
	ELightUnits DefaultLightUnits; // 0xbd
	EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xbe
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xc0
	char bStencilForLODDither : 1; // 0xc0
	EEarlyZPass EarlyZPass; // 0xc4
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xc8
	char bDBuffer : 1; // 0xc8
	EClearSceneOptions ClearSceneMethod; // 0xcc
	char bBasePassOutputsVelocity : 1; // 0xd0
	char bVertexDeformationOutputsVelocity : 1; // 0xd0
	char bSelectiveBasePassOutputs : 1; // 0xd0
	char bDefaultParticleCutouts : 1; // 0xd0
	int32_t GPUSimulationTextureSizeX; // 0xd4
	int32_t GPUSimulationTextureSizeY; // 0xd8
	char bGlobalClipPlane : 1; // 0xdc
	EGBufferFormat GBufferFormat; // 0xe0
	char bUseGPUMorphTargets : 1; // 0xe4
	char bNvidiaAftermathEnabled : 1; // 0xe4
	char bMultiView : 1; // 0xe4
	char bMobilePostProcessing : 1; // 0xe4
	char bMobileMultiView : 1; // 0xe4
	char bMobileUseHWsRGBEncoding : 1; // 0xe4
	char bRoundRobinOcclusion : 1; // 0xe4
	char bODSCapture : 1; // 0xe4
	char bMeshStreaming : 1; // 0xe5
	float WireframeCullThreshold; // 0xe8
	char bEnableRayTracing : 1; // 0xec
	char bEnableRayTracingTextureLOD : 1; // 0xec
	char bSupportStationarySkylight : 1; // 0xec
	char bSupportLowQualityLightmaps : 1; // 0xec
	char bSupportPointLightWholeSceneShadows : 1; // 0xec
	char bSupportAtmosphericFog : 1; // 0xec
	char bSupportSkyAtmosphere : 1; // 0xec
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xec
	char bSupportSkinCacheShaders : 1; // 0xed
	ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xf0
	float SkinCacheSceneMemoryLimitInMB; // 0xf4
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xf8
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xf8
	char bMobileAllowDistanceFieldShadows : 1; // 0xf8
	char bMobileAllowMovableDirectionalLights : 1; // 0xf8
	uint32_t MobileNumDynamicPointLights; // 0xfc
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0x100
	char bMobileAllowMovableSpotlights : 1; // 0x100
	char bSupport16BitBoneIndex : 1; // 0x100
	char bGPUSkinLimit2BoneInfluences : 1; // 0x100
	char bSupportDepthOnlyIndexBuffers : 1; // 0x100
	char bSupportReversedIndexBuffers : 1; // 0x100
	char bSupportMaterialLayers : 1; // 0x100
	char bLPV : 1; // 0x100
};

struct UVirtualTexturePoolConfig {
	int32_t DefaultSizeInMegabyte; // 0x30
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x38
};

struct UListViewBase {
	UUserWidget* EntryWidgetClass; // 0x128
	float WheelScrollMultiplier; // 0x130
	bool bEnableScrollAnimation; // 0x134
	bool bEnableFixedLineOffset; // 0x135
	float FixedLineScrollOffset; // 0x138
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x140
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x150
	FUserWidgetPool EntryWidgetPool; // 0x160
};

struct UDBDPlayerPositionOffsetComponent {
	FPerPlatformFloat _menuZHeadOffset; // 0xb8
};

struct UOpenSupplyCrateInteraction {
	ASupplyCrateInteractable* _owningSupplyCrate; // 0x6d8
	bool _interactionWasComplete; // 0x6e0
	UAnimSequence* _successExitTimeAnimSequenceReference; // 0x6e8
};

struct USplineMeshComponent {
	FSplineMeshParams SplineParams; // 0x4f0
	FVector SplineUpDir; // 0x548
	float SplineBoundaryMin; // 0x554
	FGuid CachedMeshBodySetupGuid; // 0x558
	UBodySetup* BodySetup; // 0x568
	float SplineBoundaryMax; // 0x570
	char bAllowSplineEditingPerInstance : 1; // 0x574
	char bSmoothInterpRollScale : 1; // 0x574
	char bMeshDirty : 1; // 0x574
	ESplineMeshAxis ForwardAxis; // 0x575
	float VirtualTextureMainPassMaxDrawDistance; // 0x578
};

struct UK25ChainStrikeState_ShootControlledProjectile {
	float _minimumThrottleTimeForInputServerCall; // 0xc8
	float _inputResetSpeed; // 0xcc
};

struct UTwinAOELingeringStatusEffect {
	FTunableStat _shriekingRange; // 0x358
};

struct URangeBasedCondition {
	float _range; // 0xe8
};

struct UUMGBloodStoreWidget {
	FMulticastInlineDelegate OnBloodNodeSelected; // 0x300
	FMulticastInlineDelegate OnBloodNodePurchase; // 0x310
	FMulticastInlineDelegate OnBloodStoreRegenerate; // 0x320
	FMulticastInlineDelegate OnCharacterRoleButtonClicked; // 0x330
	UUMGBloodStoreArrayWidget* BloodStoreArrayWidget; // 0x340
	UUMGBloodStoreItemPreviewWidget* ItemPreviewWidget; // 0x348
	UUMGBloodStoreSubMenu* BloodStoreSubMenuWidget; // 0x350
	FText _bloodStoreTitle; // 0x358
	FText _killersTitle; // 0x370
	FText _survivorsTitle; // 0x388
};

struct UBloodwebEntity {
	UDBDGameInstance* _gameInstance; // 0x38
	UBloodwebTunables* _bloodwebTunables; // 0x40
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition; // 0x48
};

struct UCharacterSightableComponent {
	FMulticastInlineDelegate OnHighestSightStatusChangedBP; // 0xe8
	TMap<TWeakObjectPtr<ACharacter>, FDelegateHandleWrapper> _sightDelegateHandles; // 0xf8
	TMap<TWeakObjectPtr<ACharacter>, ESightStatus> _sightersStatus; // 0x148
};

struct UAlternatingColor {
	FLinearColor FirstColor; // 0x30
	FLinearColor SecondColor; // 0x40
	float ColorChangePeriod; // 0x50
};

struct UMaterialExpressionTransform {
	FExpressionInput Input; // 0x48
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x64
	EMaterialVectorCoordTransform TransformType; // 0x65
};

struct UAISkill_InteractionSetTrap {
	AActor* TrapClass; // 0x170
	float MaxDistanceFromPointOfInterest; // 0x178
	float MaxDistanceFromAnotherSetTrap; // 0x17c
};

struct ULamentConfigurationSpawnStrategy {
	float _killerPointDistanceMultiplier; // 0xb8
	float _survivorPointDistanceMultiplier; // 0xbc
	float _maxDistancePointAllowed; // 0xc0
	float _minSurvivorDistance; // 0xc4
	float _minSurvivorDistancePointPenalty; // 0xc8
	float _minKillerDistance; // 0xcc
	float _minHatchDistance; // 0xd0
	float _minKillerDistancePointPenalty; // 0xd8
	float _pointPenaltyPerUsedLocationTime; // 0xdc
	TArray<ETileSpawnPointType> _spawnPointsTypes; // 0xe0
	float _downRaycastLength; // 0xf0
	float _rayCastZOffet; // 0xf4
	TArray<FLamentConfigurationSpawnInfo> _cached_spawnsInfo; // 0xf8
	TArray<AHatch*> _hatches; // 0x108
};

struct UBookMark2D {
	float Zoom2D; // 0x30
	FIntPoint Location; // 0x34
};

struct USupplyCrateAnimInstance {
	ASupplyCrateInteractable* _owningSupplyCrate; // 0x280
	bool _isOpen; // 0x288
	bool _isBeingPriedOpen; // 0x289
	bool _isAutoClosing; // 0x28a
};

struct UFieldSystemMetaDataIteration {
	int32_t Iterations; // 0xb8
};

struct UBTService_StimuliMonitor {
	FBlackboardKeySelector BBStimulusOriginLocation; // 0x78
	FBlackboardKeySelector BBStimulusNavLocation; // 0xa8
	FBlackboardKeySelector BBStimulusActor; // 0xd8
	FBlackboardKeySelector BBStimulusInSight; // 0x108
	FBlackboardKeySelector BBStimulusWasInSight; // 0x138
	float StimulusWasInSightDuration; // 0x168
	FAITunableParameter StimuliRefreshInterval; // 0x16c
	float ExtrapolateLoseSightDuration; // 0x17c
	FVector NavMeshFindLocationExtents; // 0x180
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch {
	FGameplayTagContainer Tags; // 0x30
};

struct UAISkill_Diversion {
	FName perkId; // 0xc0
	TArray<AActor*> DiversionFromGoalClasses; // 0xd0
	EAIDifficultyLevel ThrowOnInteractablesAtDifficultyLevel; // 0xe0
	float MaxThrowOnInteractableHalfAngle; // 0xe4
	float MaxMoveToTargetDistance; // 0xe8
	FVector NavMeshFindLocationExtents; // 0xec
	float PlanInterval; // 0xf8
};

struct ALevelScriptActor {
	char bInputEnabled : 1; // 0x230
};

struct AKillerProjectile {
	FGameplayTag _killerProjectileAttemptGameEventTag; // 0x300
	UHitValidatorConfigurator* _hitValidatorConfigurator; // 0x310
	UHitValidatorComponent* _hitValidatorComponent; // 0x318
	EHitValidatorConfigName _hitValidationConfigName; // 0x320
};

struct UARCandidateImage {
	UTexture2D* CandidateTexture; // 0x38
	FString FriendlyName; // 0x40
	float Width; // 0x50
	float Height; // 0x54
	EARCandidateImageOrientation Orientation; // 0x58
};

struct UMagicLeapImageTrackerComponent {
	UTexture2D* TargetImageTexture; // 0x210
	FString Name; // 0x218
	float LongerDimension; // 0x228
	bool bIsStationary; // 0x22c
	bool bUseUnreliablePose; // 0x22d
	FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x230
	FMulticastInlineDelegate OnSetImageTargetFailed; // 0x240
	FMulticastInlineDelegate OnImageTargetFound; // 0x250
	FMulticastInlineDelegate OnImageTargetLost; // 0x260
	FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x270
};

struct ACamperInteractable {
	TArray<UInteractor*> HealingInteractors; // 0x350
	TArray<UChargeableInteractionDefinition*> _healInteractions; // 0x360
	UChargeableComponent* _killCharge; // 0x370
	UChargeableComponent* _snapOutOfItCharge; // 0x378
	UChargeableComponent* _wakeUpCharge; // 0x380
	UChargeableComponent* _crowDismissCharge; // 0x388
	UActivatorComponent* _activator; // 0x390
	UInteractor* _killInteractor; // 0x400
	UBoxComponent* _killInteractionZone; // 0x408
	USphereComponent* _killHealthyInteractionZone; // 0x410
	UBoxComponent* _mainInteractionZone; // 0x418
	UInteractor* _healingInteractor1; // 0x420
	UInteractor* _selfInteractionsInteractor; // 0x428
	USceneComponent* _rootComponent; // 0x430
};

struct UExposerInteriorZoneComponent {
	TArray<USceneComponent*> ExposerSpawnPoints; // 0x450
};

struct UUMGControlTypeWidget {
	UUMGBaseButtonWidget* Button; // 0x300
	UTextBlock* MoveTextHalfScreenCanvas; // 0x308
	UTextBlock* AimTextHalfScreenCanvas; // 0x310
	UTextBlock* MoveTextFullScreenCanvas; // 0x318
	UTextBlock* AimTextFullScreenCanvas; // 0x320
};

struct UCircularThrobber {
	int32_t NumberOfPieces; // 0x128
	float Period; // 0x12c
	float Radius; // 0x130
	USlateBrushAsset* PieceImage; // 0x138
	FSlateBrush Image; // 0x140
	bool bEnableRadius; // 0x1d0
};

struct UBreakpoint {
	char bEnabled : 1; // 0x30
	UEdGraphNode* Node; // 0x38
	char bStepOnce : 1; // 0x40
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x40
	char bStepOnce_RemoveAfterHit : 1; // 0x40
};

struct ADBDMenuPlayer {
	bool RoleSelected; // 0x588
	bool IsOnline; // 0x589
	FMulticastInlineDelegate OnItemEquipped; // 0x590
	TSoftObjectPtr<UMaterialInterface> DarkMaterial; // 0x5a0
	EItemHandPosition _handPosition; // 0x5d0
	USkeletalMeshComponent* ItemMesh; // 0x5d8
	UMaterialHelper* MaterialHelper; // 0x5e0
	FName _equippedItemName; // 0x5e8
};

struct UEditableGeometryCollectionAdapter {
	UGeometryCollection* GeometryCollection; // 0x30
	UGeometryCollection* OriginalGeometryCollection; // 0x38
	int32_t GeometryCollectionLODIndex; // 0x40
};

struct UDecalComponent {
	UMaterialInterface* DecalMaterial; // 0x210
	int32_t SortOrder; // 0x218
	float FadeScreenSize; // 0x21c
	float FadeStartDelay; // 0x220
	float FadeDuration; // 0x224
	float FadeInDuration; // 0x228
	float FadeInStartDelay; // 0x22c
	char bDestroyOwnerAfterFade : 1; // 0x230
	FVector DecalSize; // 0x234
};

struct UUMGCharacterSlideShowWidget {
	TMap<FName, TSoftObjectPtr<UTexture2D>> _perkCategoriesIcons; // 0x300
	float SecondsBeforeNextSlide; // 0x350
};

struct UAISkill_FindInteractable_SolveRBT {
	FAITunableParameter UrgencyGoalWeight; // 0x118
	FAITunableParameter PriorityGoalWeight; // 0x128
};

struct UBaseIsPlayerPerformingInteraction {
	FGameplayTagContainer _interactionSemantics; // 0xe8
};

struct UParticleModuleLocationPrimitiveBase {
	char Positive_X : 1; // 0x38
	char Positive_Y : 1; // 0x38
	char Positive_Z : 1; // 0x38
	char Negative_X : 1; // 0x38
	char Negative_Y : 1; // 0x38
	char Negative_Z : 1; // 0x38
	char SurfaceOnly : 1; // 0x38
	char Velocity : 1; // 0x38
	FRawDistributionFloat VelocityScale; // 0x40
	FRawDistributionVector StartLocation; // 0x70
};

struct UInputRouter {
	bool bAutoInvalidateOnHover; // 0x30
	bool bAutoInvalidateOnCapture; // 0x31
	UInputBehaviorSet* ActiveInputBehaviors; // 0x40
};

struct UGridSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
	int32_t row; // 0x54
	int32_t RowSpan; // 0x58
	int32_t Column; // 0x5c
	int32_t ColumnSpan; // 0x60
	int32_t Layer; // 0x64
	FVector2D Nudge; // 0x68
};

struct UDBD_SoundClipUtil {
	TArray<FMapMeshToAkAudioEvent> AudioMap; // 0xb8
	TMap<FName, FMapMeshToAkAudioEvent> _audioEventMap; // 0xc8
	TArray<FMapSoundsToAvoid> _objectsWhoHavePlayedASound; // 0x118
	TMap<UAkAudioEvent*, float> _nextSoundPlayTime; // 0x128
};

struct UStorefrontConfiguration {
	TMap<EStorefrontState, FStorefrontStateData> States; // 0x38
};

struct UPawnNoiseEmitterComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb8
	FVector LastRemoteNoisePosition; // 0xbc
	float NoiseLifetime; // 0xc8
	float LastRemoteNoiseVolume; // 0xcc
	float LastRemoteNoiseTime; // 0xd0
	float LastLocalNoiseVolume; // 0xd4
	float LastLocalNoiseTime; // 0xd8
};

struct UUMGAuricCellsButton {
	UImage* PlusImage; // 0x448
};

struct UMaterialExpressionStaticComponentMaskParameter {
	FExpressionInput Input; // 0x68
	char DefaultR : 1; // 0x84
	char DefaultG : 1; // 0x84
	char DefaultB : 1; // 0x84
	char DefaultA : 1; // 0x84
};

struct UTestWidget {
	UPanelWidget* Workbench; // 0x260
	bool showWorkbench; // 0x268
};

struct UInterpTrackFloatProp {
	FName PropertyName; // 0x98
};

struct UAddon_TheBlight_SoulChemical {
	float _triggerDistance; // 0x298
	ESkillCheckCustomType _skillCheckType; // 0x29c
	FGameplayTagContainer _interactionSemantics; // 0x2a0
	FGameplayTagContainer _blightPowerStateTag; // 0x2c0
};

struct ATormentAttackTrailController {
	ATormentAttackTrailPoint* _tormentTrailAttackPointClass; // 0x288
	AActor* _tormentTrailAttackSign; // 0x290
	FDBDTunableRowHandle _trailSpawnDelay; // 0x298
	FDBDTunableRowHandle _timeIntervalBetweenPointsSpawn; // 0x2c0
	FTunableStat _attackTrailLenght; // 0x2e8
	FDBDTunableRowHandle _consideredAsSlopeAngle; // 0x368
	TArray<FTransform> _pointsTransform; // 0x390
	FVector _slopeDetectionOverGroundVector; // 0x3a0
	FVector _groundDetectionEndVector; // 0x3ac
	FVector _slopeCompensationVector; // 0x3b8
	TArray<FSpawnedAttackPoint> _spawnedAttackPointList; // 0x3e0
	bool _trailSpawnStarted; // 0x3f0
	float _soundDistanceOnTrail; // 0x3f4
	AMobileTormentTrailRenderer* _mobileTormentTrailRenderer; // 0x3f8
};

struct ASupplyCrateInteractable {
	UChargeableComponent* _chargeableComponent; // 0x360
	ACollectable* _contamainationSerumCollectable; // 0x368
	FDBDTunableRowHandle _openInteractionSecondsToCharge; // 0x370
	ACollectable* _itemInSupplyCrate; // 0x398
	USceneComponent* _itemSpawnPoint; // 0x3a0
	USceneComponent* _itemDropPoint; // 0x3a8
	bool _isOpen; // 0x3b0
	bool _isAutoClosing; // 0x3b1
	FDBDTunableRowHandle _crateSelfClosingTime; // 0x3f0
	FDBDTunableRowHandle _crateAutoCloseAnimationTime; // 0x418
};

struct ATotem {
	FLinearColor _boonAuraRevealColor; // 0x348
	TArray<UTotemBoundPerk*> _boundPerks; // 0x358
	ETotemState _totemState; // 0x368
	FDBDTunableRowHandle _baseBoonTotemBlessingRange; // 0x370
	FDBDTunableRowHandle _baseBoonTotemAuraRevealRange; // 0x398
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x3d0
	UBlockableComponent* _totemBlockableComponent; // 0x3d8
	ULocalPlayerTrackerComponent* _localPlayerTracker; // 0x3f0
	UActivatorComponent* _activatorComponent; // 0x3f8
	UGameplayTagContainerComponent* _objectState; // 0x400
	USceneComponent* _interactionsAttachPoint; // 0x408
	UTotemOutlineUpdateStrategy* _totemOutlineUpdateStrategy; // 0x410
	bool _canBeBoundToBoonPerk; // 0x448
};

struct UNamedInterfaces {
	TArray<FNamedInterface> NamedInterfaces; // 0x30
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x40
};

struct UK26OnCrowAttachLingeringStatusEffectBase {
	FGameplayTag _onCrowAttachStateTag; // 0x350
	FDBDTunableRowHandle _lingerTime; // 0x360
};

struct UPossessNegationEffectComponent {
	FMulticastInlineDelegate PlayCantPossessSound; // 0xb8
};

struct UZanshinTactics {
	float _cooldownDuration[0x3]; // 0x3d0
};

struct UAIDataProvider_QueryParams {
	FName ParamName; // 0x30
	float FloatValue; // 0x3c
	int32_t IntValue; // 0x40
	bool BoolValue; // 0x44
};

struct UFSM_OrCondition {
	TArray<UFSM_Condition*> _conditions; // 0x38
};

struct USetBearTrap {
	FName _enterMontageIDForBeartrap; // 0x738
	FName _udpateMontageIDForBeartrap; // 0x744
	UAnimSequence* _updateSequenceForBeartrap; // 0x750
	FName _exitMontageForIDBeartrap; // 0x758
	FName _cancelExitMontage; // 0x764
};

struct UPortalTargetingComponent {
	ADemogorgonPortal* _targetedPortal; // 0xb8
	UPortalPlacerStateComponent* _portalPlacerState; // 0xc0
};

struct ACharacterTool {
	TArray<ATargetPoint*> SpawnLocations; // 0x230
	FCharacterToolData _customizationData; // 0x240
	UAnimInstance* _animInstanceClass; // 0x2b0
	bool _animated; // 0x2b8
	bool UseInGameSkeleton; // 0x2b9
	bool _showPower; // 0x2ba
	bool _useMasterPoseForItems; // 0x2bb
	FName _powerSocket; // 0x2bc
	EAttachmentRule _powerAttachmentRule; // 0x2c8
	TSoftClassPtr<UObject> _overallLightingClass; // 0x2d0
	FNamedButton _showHelp; // 0x300
	TArray<ADBDMenuPlayer*> _characters; // 0x318
	AActor* _lighting; // 0x328
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe8
};

struct UShaderPlatformQualitySettings {
	FMaterialQualityOverrides QualityOverrides[0x3]; // 0x30
};

struct UChildConnection {
	UNetConnection* Parent; // 0x1a48
};

struct UBTService_FindInteractor_Locker {
	EFindInteractableLockerStatusFilter StatusFilter; // 0x218
};

struct USpiesFromTheShadows {
	float _cooldownDurationSecs; // 0x3d0
};

struct USurge {
	float _zoneRadius[0x3]; // 0x3d0
	float _instantRegression[0x3]; // 0x3dc
	float _cooldownDuration[0x3]; // 0x3e8
	bool _hasCooldown; // 0x3f4
	bool _useTerrorRadiusInsteadOfFixedDistance; // 0x3f5
};

struct USoundNodeWaveParam {
	FName WaveParameterName; // 0x50
};

struct UBrushRemeshProperties {
	bool bEnableRemeshing; // 0x68
	int32_t TriangleSize; // 0x6c
	int32_t PreserveDetail; // 0x70
};

struct UActorSequence {
	UMovieScene* MovieScene; // 0x350
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x358
};

struct UParticleModuleSizeMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x38
	char MultiplyX : 1; // 0x80
	char MultiplyY : 1; // 0x80
	char MultiplyZ : 1; // 0x80
};

struct USourceEffectChorusPreset {
	FSourceEffectChorusSettings Settings; // 0x88
};

struct UUMGTallyPipsContainer {
	UHorizontalBox* PipsContainer; // 0x300
	TArray<TSoftClassPtr<UObject>> _pipsClasses; // 0x308
	FMargin _pipsPadding; // 0x318
	TArray<UUMGTallyPip*> Pips; // 0x328
};

struct UBreakout {
	ASlasherPlayer* _slasher; // 0x3d0
	ADBDPlayer* _playerOwner; // 0x3d8
	float _hasteEffect[0x3]; // 0x3e0
	float _wiggleEffect; // 0x3ec
	float _survivorDistanceMax; // 0x3f0
	bool _isPerkActive; // 0x3f4
};

struct UPoised {
	float _activationTime[0x3]; // 0x3d0
};

struct UUMGPurchaseSticker {
	UTextBlock* TextDiscount; // 0x300
};

struct ADBDObserverPlayer {
	UDBDPlayerData* _playerData; // 0x4d0
};

struct UDialogueVoice {
	EGrammaticalGender Gender; // 0x30
	EGrammaticalNumber Plurality; // 0x31
	FGuid LocalizationGUID; // 0x34
};

struct USpiritHuskAnimInstance {
	USkeletalMeshComponent* _killerMesh; // 0x270
};

struct UUMGFogWidget {
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget; // 0x300
};

struct UUMGPageScrollWidget {
	float ItemWidth; // 0x300
	float ItemHeight; // 0x304
	int32_t RowCount; // 0x308
	int32_t ColumnCount; // 0x30c
	int32_t ItemGapDistance; // 0x310
	int32_t TotalPageCount; // 0x314
	float ButtonWidth; // 0x318
	UAkAudioEvent* OnPageChangeSound; // 0x320
	UCanvasPanel* ContainerPanel; // 0x328
	UHorizontalBox* ButtonsPanel; // 0x330
	TSoftClassPtr<UObject> _pageButtonWidgetClass; // 0x338
	TArray<UCanvasPanel*> _itemArray; // 0x368
	int32_t _currentPageIndex; // 0x378
	TArray<UMobileBaseUserWidget*> _activeWidgets; // 0x380
};

struct UAISkill_InteractionTarget_StalkGhost {
	float CautiousModeUnderTargetRange; // 0x220
	float CautiousModeSpeedFactor; // 0x224
	float BackFromCautiousDelay; // 0x228
};

struct UBTService_OnRelevantBase {
	EAINodeRelevancyOptions When; // 0x78
};

struct UCombineMeshesToolProperties {
	bool bDeleteSourceActors; // 0x58
};

struct UOuterlineComponent {
	UMaterialInterface* CloneCustomDepthMaterial; // 0x210
	UMaterialInterface* CloneTranslucentMaterial; // 0x218
	UMaterialInstanceDynamic* _cloneCustomDepthMaterialDynamic; // 0x220
	UMaterialInstanceDynamic* _cloneTranslucentMaterialDynamic; // 0x228
	USkeletalMeshComponent* _customDepthSkeletalMesh; // 0x230
	USkeletalMeshComponent* _overlaySkeletalMesh; // 0x238
};

struct USoundGroups {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x30
};

struct UAICharacterEscapeCarriedData {
	bool _preventWiggleSuccess; // 0x30
};

struct UNiagaraRendererProperties {
	int32_t SortOrderHint; // 0x30
	bool bIsEnabled; // 0x34
	bool bMotionBlurEnabled; // 0x35
};

struct UInAppPurchaseQueryCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneCinematicShotSection {
	FString ShotDisplayName; // 0x160
	FText DisplayName; // 0x170
};

struct UAssetLibrary {
	UObjectLibrary* _objectLibrary; // 0x38
	float SecondsDelayBetweenBatch; // 0xa4
};

struct UEndGameEntityAnimInstance {
	bool _isFront; // 0x270
	bool _isBack; // 0x271
};

struct UUMGStoreAuricCellButton {
	FCurrencyPurchaseData CurrencyPurchaseData; // 0x440
	UTextBlock* AuricCellTitleText; // 0x4a8
	UOverlay* Timer; // 0x4b0
};

struct UAISkill_InteractionTarget {
	EInteractionTargetRequirements TargetRequirement; // 0x170
	bool AutoSwapBestStimulusWithBestTarget; // 0x171
	float StartMinRange; // 0x174
	float StartMaxRange; // 0x178
	float StopMinRange; // 0x17c
	float StopMaxRange; // 0x180
	float StartMaxHalfAngle; // 0x184
	float StopMaxHalfAngle; // 0x188
	bool IsMaxHalfAngle2D; // 0x18c
	bool TestMaxHalfAngleOnPath; // 0x18d
	UNavigationQueryFilter* MaxAngleFilterClass; // 0x190
	EInteractionTargetInSightModes InSightMode; // 0x198
	float OutOfSightModeDelay; // 0x19c
	float TargetMoveAwayTooFastStopDelay; // 0x1a0
	float TargetMoveAwayTooFastCooldown; // 0x1a4
	bool AlwaysStrafeAroundTarget; // 0x1a8
	TArray<FAIDetectedStimulus> _unfilteredTargets; // 0x1b0
	TArray<FAIDetectedStimulus> _filteredTargets; // 0x1c0
	TMap<AActor*, FTargetMoveAwayToFastInfo> _targetsMoveAwayTooFastInfo; // 0x1d0
};

struct UCustomizedSkeletalMesh {
	USlaveAnimInstance* SlaveAnimInstanceClass; // 0xb8
	FMulticastInlineDelegate OnMeshSwitchBP; // 0xc0
	USkinnedMeshComponent* _meshOwner; // 0x100
	TSet<ECustomizationCategory> _ignoredItemCategories; // 0x110
	TArray<USkeletalMeshComponent*> Components; // 0x160
	TMap<ECustomizationCategory, USkeletalMeshComponent*> _categoryToComponents; // 0x170
	TArray<USkeletalMeshComponent*> Slaves; // 0x1c0
	TMap<ECustomizationCategory, AItemVfx*> _itemVfxs; // 0x1d0
	int32_t _characterIdOverride; // 0x2c0
};

struct UCameraShakeSourceComponent {
	ECameraShakeAttenuation Attenuation; // 0x210
	float InnerAttenuationRadius; // 0x214
	float OuterAttenuationRadius; // 0x218
	UCameraShake* CameraShake; // 0x220
	bool bAutoPlay; // 0x228
};

struct ALobbyBeaconPlayerState {
	FText DisplayName; // 0x230
	FUniqueNetIdRepl UniqueId; // 0x248
	FUniqueNetIdRepl PartyOwnerUniqueId; // 0x270
	bool bInLobby; // 0x298
	AOnlineBeaconClient* ClientActor; // 0x2a0
};

struct UMaterialExpressionTransformPosition {
	FExpressionInput Input; // 0x48
	EMaterialPositionTransformSource TransformSourceType; // 0x64
	EMaterialPositionTransformSource TransformType; // 0x65
};

struct UEvilWithinComponent {
	FMulticastInlineDelegate OnTierChange; // 0xb8
	int32_t _currentTier; // 0xc8
	float _lastTierTimeStart; // 0xcc
	TArray<FString> _allowedSurvivorInteractionsForKill; // 0x128
};

struct AShopCameraManager {
	TArray<FCharacterCameraTag> CatalogCharactersCamera; // 0x230
	TArray<FCharacterCameraTag> StoryCharactersCamera; // 0x240
};

struct UBTDecorator_CompareBBEntries {
	EBlackBoardEntryComparison Operator; // 0x70
	FBlackboardKeySelector BlackboardKeyA; // 0x78
	FBlackboardKeySelector BlackboardKeyB; // 0xa8
};

struct UAudioComponent {
	USoundBase* Sound; // 0x210
	TArray<FAudioComponentParam> InstanceParameters; // 0x218
	USoundClass* SoundClassOverride; // 0x228
	char bAutoDestroy : 1; // 0x230
	char bStopWhenOwnerDestroyed : 1; // 0x230
	char bShouldRemainActiveIfDropped : 1; // 0x230
	char bAllowSpatialization : 1; // 0x230
	char bOverrideAttenuation : 1; // 0x230
	char bOverrideSubtitlePriority : 1; // 0x230
	char bIsUISound : 1; // 0x230
	char bEnableLowPassFilter : 1; // 0x230
	char bOverridePriority : 1; // 0x231
	char bSuppressSubtitles : 1; // 0x231
	char bAutoManageAttachment : 1; // 0x232
	FName AudioComponentUserID; // 0x238
	float PitchModulationMin; // 0x244
	float PitchModulationMax; // 0x248
	float VolumeModulationMin; // 0x24c
	float VolumeModulationMax; // 0x250
	float VolumeMultiplier; // 0x254
	int32_t EnvelopeFollowerAttackTime; // 0x258
	int32_t EnvelopeFollowerReleaseTime; // 0x25c
	float Priority; // 0x260
	float SubtitlePriority; // 0x264
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x268
	float PitchMultiplier; // 0x270
	float LowPassFilterFrequency; // 0x274
	USoundAttenuation* AttenuationSettings; // 0x280
	FSoundAttenuationSettings AttenuationOverrides; // 0x288
	USoundConcurrency* ConcurrencySettings; // 0x628
	TSet<USoundConcurrency*> ConcurrencySet; // 0x630
	EAttachmentRule AutoAttachLocationRule; // 0x68c
	EAttachmentRule AutoAttachRotationRule; // 0x68d
	EAttachmentRule AutoAttachScaleRule; // 0x68e
	FMulticastInlineDelegate OnAudioFinished; // 0x690
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x6b8
	FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x6e0
	FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x708
	FSoundModulation Modulation; // 0x730
	FDelegate OnQueueSubtitles; // 0x740
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x754
	FName AutoAttachSocketName; // 0x75c
};

struct UHexRuin {
	TMap<AGenerator*, FFastTimer> _curseActivationTimers; // 0x458
};

struct UGMAdaptiveShadowMapSource {
	UGMAdaptiveShadowMapAtlas* _atlas; // 0x30
	ULightComponent* _lightComponent; // 0x38
};

struct UBTTask_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x78
	bool bAddToExistingDuration; // 0x84
	float CooldownDuration; // 0x88
};

struct UUMGAtlantaCreditsPopup {
	UUMGHtmlRichText* RichTitleText; // 0x300
	UUMGHtmlRichText* RichContentText; // 0x308
	FString _titleDefaultStyle; // 0x310
};

struct UUMGAuthentificationProviderListWidget {
	UHorizontalBox* GuestButtonContainer; // 0x300
};

struct ULocomotionLookAtSurvivorSubAnimInstance {
	bool _isInjured; // 0x4f0
	bool _isCrawling; // 0x4f1
	bool _isDead; // 0x4f2
	bool _isUsingAimItem; // 0x4f3
	float _aimOffsetPitch; // 0x4f4
	float _aimOffsetYaw; // 0x4f8
	float _aimOffsetYawInterpolated; // 0x4fc
	bool _allowLookAt; // 0x500
	bool _isDrasticAimOffsetYawChangeDetected; // 0x501
	float _aimOffsetYawInterpolationSpeed; // 0x504
	float _aimOffsetYawDeadzoneStart; // 0x508
	float _aimOffsetYawClampValue; // 0x50c
	float _aimOffsetYawDrasticChangeUpperLimit; // 0x510
	float _aimOffsetYawDrasticChangeLowerLimit; // 0x514
	float _aimOffsetYawDrasticChangeInterpolationSpeed; // 0x518
	UCurveFloat* _aimOffsetYawInterpolateEaseIn; // 0x520
	UCurveFloat* _aimOffsetYawInterpolateEaseOut; // 0x528
	float _aimOffsetYawInterpolationEaseInLength; // 0x530
	float _aimOffsetYawInterpolationEaseOutDistance; // 0x534
	bool _isAimOffsetYawInDeadZone; // 0x538
	float _currentTargetAimOffsetYaw; // 0x53c
	float _aimOffsetYawAcceleration; // 0x540
	float _aimOffsetYawAccelerationTime; // 0x544
};

struct UAtlantaFriendsListScreenUMG {
	UUMGAtlantaFriendListScreen* _atlantaFriendListScreen; // 0x198
};

struct UOnlinePIESettings {
	bool bOnlinePIEEnabled; // 0x48
	TArray<FPIELoginSettingsInternal> Logins; // 0x50
};

struct UAnimCollection {
	TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences; // 0x38
	TMap<FGameplayTag, UBlendSpaceBase*> _taggedAnimBlendspaces; // 0x88
	TMap<FGameplayTag, FAnimSequenceSelector> _taggedAnimSelectors; // 0xd8
	UAnimCollection* _parent; // 0x128
	TArray<UAnimCollection*> _children; // 0x130
};

struct UK26CooldownInteractionDefinition {
	FTunableStat _cooldownTime; // 0x5b0
};

struct ASpecialBehaviourInteractable {
	TWeakObjectPtr<ADBDPlayerState> _specialBehaviourOwner; // 0x328
};

struct UMagicLeapTouchpadGesturesComponent {
	FMulticastInlineDelegate OnTouchpadGestureStart; // 0xc0
	FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xd0
	FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xe0
};

struct UAISlasherMoveToGrabSurvivorBehaviourData {
	ACamperPlayer* _targetSurvivor; // 0x30
};

struct UPolyEditCutProperties {
	EPolyEditCutPlaneOrientation Orientation; // 0x58
	bool bSnapToVertices; // 0x5c
};

struct UKillerOpenGate {
	FAnimationMontageDescriptor _openGateMontage; // 0x6d8
};

struct UUMGAtlantaPromoCodeRewardItemWidget {
	UPanelWidget* CurrencyItem; // 0x300
	UImage* CurrencyIcon; // 0x308
	UTextBlock* CurrencyName; // 0x310
	UTextBlock* CurrencyAmount; // 0x318
	UImage* ItemRarityTint; // 0x320
	UWidgetAnimation* RevealAnimationSmall; // 0x328
	UPanelWidget* CustomizationItem; // 0x330
	UImage* CustomizationIcon; // 0x338
	UTextBlock* CustomizationName; // 0x340
	UImage* CustomizationRarityTint; // 0x348
	UWidgetAnimation* RevealAnimationLarge; // 0x350
	UPanelWidget* CharacterPanel; // 0x358
	UImage* CharacterPortrait; // 0x360
	UTextBlock* characterName; // 0x368
	UPanelWidget* TicketPanel; // 0x370
	UImage* TicketRarityTint; // 0x378
	UImage* TicketIcon; // 0x380
	UTextBlock* TicketName; // 0x388
	UTextBlock* TicketAmount; // 0x390
	UPanelWidget* OfferingPanel; // 0x398
	UImage* OfferingRarityTint; // 0x3a0
	UImage* OfferingIcon; // 0x3a8
	UTextBlock* OfferingName; // 0x3b0
	UTextBlock* OfferingAmount; // 0x3b8
};

struct UK26IsSurvivorInRangeOfAnyIdleCrow {
	FMulticastInlineDelegate OnIsTrueChanged; // 0xe8
};

struct UBTService_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UBTTask_SetBBEntryTime {
	FBlackboardKeySelector BBToSetKey; // 0x78
};

struct UDBDBehaviorTreeComponent {
	TMap<UObject*, FRelevantNodeMemory> _lastRelevantNodeMemories; // 0x280
	TArray<UObject*> _createdObjects; // 0x2d0
};

struct UDoctorPowerAnimStateComponent {
	EDoctorAbilityType _abilityType; // 0xb8
	EDoctorAbilityPhase _abilityPhase; // 0xb9
};

struct ULightingFactory {
	ULightingData* _data; // 0x30
};

struct UInputMasher {
	UInputComponent* _inputComponent; // 0xb8
};

struct UBlessedStatusEffect {
	UBlessedVignetteController* _vignetteControllerBlueprint; // 0x358
};

struct UK25AttackSubAnimInstance {
	bool _hasDownedTargetHoldingLamentConfiguration; // 0x5c0
};

struct UReloadHarpoonRifleInteraction {
	FDBDTunableRowHandle _reloadTime; // 0x6d8
	FDBDTunableRowHandle _movementSpeedMultiplier; // 0x700
	FDBDTunableRowHandle _rotationScaleMultiplier; // 0x728
	FDBDTunableRowHandle _rotationScaleAdjustmentTime; // 0x750
};

struct UK26CrowAttachmentSubAnimInstance {
	bool _hasCrowAttached; // 0x4f0
	bool _isRemovingCrow; // 0x4f1
};

struct UPaperRuntimeSettings {
	bool bEnableSpriteAtlasGroups; // 0x30
	bool bEnableTerrainSplineEditing; // 0x31
	bool bResizeSpriteDataToMatchTextures; // 0x32
};

struct UUMGTallyCharacterProgressionBar {
	UProgressBar* ProgressBar; // 0x320
};

struct UModularSynthComponent {
	int32_t VoiceCount; // 0x6f0
};

struct UStaticMeshSimulationComponent {
	bool Simulating; // 0xc0
	bool bNotifyCollisions; // 0xc1
	EObjectStateTypeEnum ObjectType; // 0xc2
	float Mass; // 0xc4
	ECollisionTypeEnum CollisionType; // 0xc8
	EImplicitTypeEnum ImplicitType; // 0xc9
	int32_t MinLevelSetResolution; // 0xcc
	int32_t MaxLevelSetResolution; // 0xd0
	EInitialVelocityTypeEnum InitialVelocityType; // 0xd4
	FVector InitialLinearVelocity; // 0xd8
	FVector InitialAngularVelocity; // 0xe4
	float DamageThreshold; // 0xf0
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xf8
	AChaosSolverActor* ChaosSolverActor; // 0x100
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x108
	TArray<UPrimitiveComponent*> SimulatedComponents; // 0x128
};

struct UAddon_K22Power_18 {
	FDBDTunableRowHandle _lingerDuration; // 0x2b0
};

struct UDistributionFloatConstant {
	float Constant; // 0x40
};

struct UUMGBaseTabButtonWidget {
	URichTextBlock* TabText; // 0x448
	UTextBlock* NotificationCountText; // 0x450
	UCanvasPanel* NotificationPanel; // 0x458
	UImage* TabButtonSelected; // 0x460
	char tabIndex; // 0x468
	FText TitleOfTab; // 0x470
	FString _tabTextParameter; // 0x490
};

struct UMeshSpaceDeformerTool {
	ENonlinearOperationType SelectedOperationType; // 0xc8
	float UpperBoundsInterval; // 0xcc
	float LowerBoundsInterval; // 0xd0
	float ModifierPercent; // 0xd4
	UGizmoTransformChangeStateTarget* StateTarget; // 0xd8
	UMeshOpPreviewWithBackgroundCompute* Preview; // 0xe8
	FVector GizmoCenter; // 0x110
	FQuat GizmoOrientation; // 0x120
	UIntervalGizmo* IntervalGizmo; // 0x130
	UTransformGizmo* TransformGizmo; // 0x138
	UTransformProxy* TransformProxy; // 0x140
	UGizmoLocalFloatParameterSource* UpIntervalSource; // 0x148
	UGizmoLocalFloatParameterSource* DownIntervalSource; // 0x150
	UGizmoLocalFloatParameterSource* ForwardIntervalSource; // 0x158
};

struct USoundSubmixWithParentBase {
	USoundSubmixBase* ParentSubmix; // 0x40
};

struct UCoreSelectableButtonWidget {
	FMulticastInlineDelegate OnSelectedChangedDelegate; // 0x398
	FMulticastInlineDelegate OnSelectedAgainDelegate; // 0x3a8
};

struct UFSM_Transition {
	FName _transitionName; // 0x38
	UFSM_State* _transitionStateClass; // 0x48
	TArray<UFSM_Condition*> _conditions; // 0x50
};

struct UPowerStruggle {
	float _wigglePercentToActivatePerk[0x3]; // 0x3d0
};

struct UBTDecorator_IsExitOpened {
	FBlackboardKeySelector BBExitObj; // 0x70
};

struct UBlightPowerStateAdjusting {
	bool _adjustRotationOnCollision; // 0x180
	bool _bounceAwayFromCollision; // 0x181
	bool _allowNavigation; // 0x182
	bool _smashBreakables; // 0x183
	FDBDTunableRowHandle _maxDistanceForSurvivorFacing; // 0x188
};

struct UPlaneCutOperatorFactory {
	UPlaneCutTool* CutTool; // 0x38
};

struct UUMGPromoPackItemWidget {
	UCanvasPanel* SelectedPanel; // 0x430
	UCanvasPanel* BackgroundPanel; // 0x438
	UCanvasPanel* AmountPanel; // 0x440
};

struct UInterpTrackLinearColorBase {
	FInterpCurveLinearColor LinearColorTrack; // 0x78
	float CurveTension; // 0x90
};

struct UTireConfig {
	float FrictionScale; // 0x38
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x40
};

struct UDBDEmblem_KillerDevout {
	TArray<ACamperPlayer*> _playersToHook; // 0x128
};

struct USurvivorChainLinkableComponent {
	FDBDTunableRowHandle _pullbackAngle; // 0x188
	FDBDTunableRowHandle _immobilizationDuration; // 0x1b8
	FGameplayTagContainer _linkableInteractionTags; // 0x1e0
	FGameplayTagContainer _cancelableInteractionTags; // 0x200
	USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategyClass; // 0x220
	FName _immobilizationEffectName; // 0x228
	FVector_NetQuantize10 _linkedMoveInput; // 0x238
	UStatusEffect* _immobilizationEffect; // 0x248
	USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategy; // 0x250
};

struct UZombieCustomizationComponent {
	TWeakObjectPtr<ACamperPlayer> _survivorSource; // 0x2c8
};

struct UBakeTransformToolProperties {
	bool bBakeRotation; // 0x58
	EBakeScaleMethod BakeScale; // 0x59
	bool bRecenterPivot; // 0x5a
};

struct AGenerator {
	bool activated; // 0x338
	bool IsRepaired; // 0x339
	bool IsASMCachePreWarm; // 0x33a
	bool IsPlaySkillcheckAesthetic; // 0x33b
	bool ForceRevealToLocalPlayer; // 0x33c
	UCurveLinearColor* KillerOutlineFadeCurve; // 0x340
	float NativePercentComplete; // 0x348
	FMulticastInlineDelegate OnGeneratorRepaired; // 0x350
	FMulticastInlineDelegate OnGeneratorRepairedBySurvivor; // 0x360
	FMulticastInlineDelegate OnIsDamagedChanged; // 0x370
	bool FireLevelScoreEventOnFix; // 0x3b0
	TMap<FName, FTransform> _activatedTopLightsTransformMap; // 0x3b8
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x408
	FGameplayTag _repairSemanticTag; // 0x434
	FDamageData _damageData; // 0x440
	bool _isBlocked; // 0x464
	bool _isBlockedFromCharging; // 0x465
	TSet<UObject*> _blockingSources; // 0x468
	UChargeableComponent* _generatorCharge; // 0x4b8
	TArray<FPlayerFloatTuple> _playerStartTimes; // 0x4c0
	bool _isAutoCompleted; // 0x4e8
	int32_t _overchargeLevel; // 0x4ec
	UCoopRepairTracker* _coopRepairTracker; // 0x4f0
	float _VFX_LightDistanceDefault; // 0x508
};

struct UKillerBeingPossessedInteraction {
	UCurveFloat* _wakeUpSpeedCurve; // 0x630
};

struct UDistributionFloatUniformCurve {
	FInterpCurveVector2D ConstantCurve; // 0x40
};

struct UAICharacterHideInLockerBehaviour {
	ADBDPlayer* _aiPlayer; // 0x58
	ADBDAIPlayerController* _aiPlayerController; // 0x60
	UAICharacterHideInLockerBehaviourData* _characterHideInLockerData; // 0x80
};

struct UCameraModifier_CameraShake {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x50
	TMap<UCameraShake*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x60
	float SplitScreenShakeScale; // 0xb0
};

struct UBTDecorator_ExtIsBBEntryOfClass {
	bool InvertConditition; // 0xa8
};

struct UCapsuleComponent {
	float CapsuleHalfHeight; // 0x440
	float CapsuleRadius; // 0x444
};

struct UMaterialExpressionLandscapeGrassOutput {
	TArray<FGrassInput> GrassTypes; // 0x48
};

struct UAnimNotify_PlayMontageNotifyWindow {
	FName NotifyName; // 0x38
};

struct UUIBackendDataAccessor {
	USplinteredStatesSubsystem* _splinteredStateSubsystem; // 0xa8
};

struct UFindSessionsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UDBDServerInstance {
	TArray<UDBDHostSettingsParamsBase*> _pendingSessionUpdates; // 0x98
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0xa8
};

struct UParticleModuleOrbitBase {
	char bUseEmitterTime : 1; // 0x38
};

struct UMenuAnchor {
	UUserWidget* MenuClass; // 0x140
	FDelegate OnGetMenuContentEvent; // 0x148
	EMenuPlacement Placement; // 0x15c
	bool bFitInWindow; // 0x15d
	bool ShouldDeferPaintingAfterWindowContent; // 0x15e
	bool UseApplicationMenuStack; // 0x15f
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x160
};

struct UCoreRewardWrapperWidget {
	UCoreCharacterRewardWidget* CharacterRewardWidget; // 0x260
	UCoreCurrencyProgressionRewardWidget* CurrencyProgressionRewardWidget; // 0x268
	UCoreCustomizationRewardWidget* CustomizationRewardWidget; // 0x270
	UPanelWidget* RewardContainer; // 0x278
	UCoreRewardWidget* _rewardWidget; // 0x280
};

struct UEnvQueryTest_Dot {
	FEnvDirection LineA; // 0x238
	FEnvDirection LineB; // 0x258
	EEnvTestDot TestMode; // 0x278
	bool bAbsoluteValue; // 0x279
};

struct UInterpCurveEdSetup {
	TArray<FCurveEdTab> Tabs; // 0x30
	int32_t ActiveTab; // 0x40
};

struct UNiagaraDataInterfaceAudioSpectrum {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct UK25P03 {
	int32_t _numberOfSurvivorsWaitingForDamageStateChange; // 0x3d8
	float _state2ActionSpeedDebuffPercentage[0x3]; // 0x3dc
};

struct ULevelSequenceBurnIn {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x320
};

struct UDistributionFloatUniform {
	float Min; // 0x40
	float Max; // 0x44
};

struct UCoreStatusEffectWidget {
	int32_t InactiveThreshold; // 0x2f8
	int32_t PrepooledItemAmount; // 0x2fc
	int32_t ItemsByColumn; // 0x300
	float EvenColumnOffset; // 0x304
	UCoreStatusEffectIcon* CoreStatusEffectIconClass; // 0x308
	UGridPanel* StatusEffectContainer; // 0x310
	TArray<UCoreStatusEffectIcon*> _statusEffectPool; // 0x318
	TArray<FName> _statusEffectOrder; // 0x328
	TMap<FName, UCoreStatusEffectIcon*> _statusEffectMap; // 0x338
};

struct UDistributionVectorConstant {
	FVector Constant; // 0x40
	char bLockAxes : 1; // 0x4c
	EDistributionVectorLockFlags LockedAxes; // 0x50
};

struct UImage {
	FSlateBrush Brush; // 0x128
	FDelegate BrushDelegate; // 0x1b8
	FLinearColor ColorAndOpacity; // 0x1cc
	FDelegate ColorAndOpacityDelegate; // 0x1dc
	bool bFlipForRightToLeftFlowDirection; // 0x1f0
	FDelegate OnMouseButtonDownEvent; // 0x1f4
};

struct UBTService_DefaultFocus {
	char FocusPriority; // 0xa8
};

struct UEdGraph {
	UEdGraphSchema* Schema; // 0x30
	TArray<UEdGraphNode*> Nodes; // 0x38
	char bEditable : 1; // 0x48
	char bAllowDeletion : 1; // 0x48
	char bAllowRenaming : 1; // 0x48
};

struct UInterpGroup {
	TArray<UInterpTrack*> InterpTracks; // 0x38
	FName GroupName; // 0x48
	FColor GroupColor; // 0x54
	char bCollapsed : 1; // 0x58
	char bVisible : 1; // 0x58
	char bIsFolder : 1; // 0x58
	char bIsParented : 1; // 0x58
	char bIsSelected : 1; // 0x58
};

struct UInterruptionDefinition {
	FName InterruptionID; // 0x210
	bool _usesWorldCoordinates; // 0x21c
	bool _snapInterruptor; // 0x21d
	FTransform _interruptionSnapPointForInterruptor; // 0x220
	FAnimationMontageDescriptor _animationMontageToPlayOnInterruptionEnterForInterruptor; // 0x250
	FAnimationMontageDescriptor _animationMontageToPlayOnInterruptionForInterruptorNew; // 0x270
	FAnimationMontageDescriptor _animationMontageToPlayOnInterruptionForInterrupteeNew; // 0x290
	bool _pickUpOnInterrupt; // 0x2b0
	bool _canInterruptWhileCarrying; // 0x2b1
	bool _useMontageFollower; // 0x2b2
	float _maxHeightDeltaBetweenCharacters; // 0x2b4
	FGameplayTag _interruptionScoreEvent; // 0x2b8
};

struct USlasherOutlineUpdateStrategy {
	FMulticastInlineDelegate OnRevealed; // 0xc0
	FLinearColor _nonRevealedColor; // 0xd0
	FLinearColor _revealedColor; // 0xe0
	FLinearColor _revealedColorForKiller; // 0xf0
};

struct APhysicsThruster {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x230
};

struct UPartyMember {
	USocialUser* SocialUser; // 0x70
};

struct URadialIntMask {
	float Radius; // 0xb8
	FVector Position; // 0xbc
	int32_t InteriorValue; // 0xc8
	int32_t ExteriorValue; // 0xcc
	ESetMaskConditionType SetMaskCondition; // 0xd0
};

struct UCompressedImageSequenceProtocol {
	int32_t CompressionQuality; // 0xe0
};

struct UDemogorgonStealthComponent {
	TWeakObjectPtr<UStatusEffect> _stealthEffect; // 0xb8
};

struct UInterpTrackInstFloatParticleParam {
	float ResetFloat; // 0x30
};

struct UInputAxisDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x30
};

struct UReverbEffect {
	float Density; // 0x30
	float Diffusion; // 0x34
	float Gain; // 0x38
	float GainHF; // 0x3c
	float DecayTime; // 0x40
	float DecayHFRatio; // 0x44
	float ReflectionsGain; // 0x48
	float ReflectionsDelay; // 0x4c
	float LateGain; // 0x50
	float LateDelay; // 0x54
	float AirAbsorptionGainHF; // 0x58
	float RoomRolloffFactor; // 0x5c
};

struct UMovieSceneStringSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UActorKnowledgeCollection {
	TArray<AActor*> _actors; // 0xb8
	bool _available; // 0xc8
	ACharacter* _possessor; // 0xd0
	EKnowledgeSharingType _sharing; // 0xd8
};

struct UUserDefinedImageCaptureProtocol {
	EDesiredImageFormat Format; // 0xe0
	bool bEnableCompression; // 0xe1
	int32_t CompressionQuality; // 0xe4
};

struct UMovieSceneSpawnTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
	FGuid ObjectGuid; // 0x70
};

struct UInterpTrackMove {
	FInterpCurveVector PosTrack; // 0x78
	FInterpCurveVector EulerTrack; // 0x90
	FInterpLookupTrack LookupTrack; // 0xa8
	FName LookAtGroupName; // 0xb8
	float LinCurveTension; // 0xc4
	float AngCurveTension; // 0xc8
	char bUseQuatInterpolation : 1; // 0xcc
	char bShowArrowAtKeys : 1; // 0xcc
	char bDisableMovement : 1; // 0xcc
	char bShowTranslationOnCurveEd : 1; // 0xcc
	char bShowRotationOnCurveEd : 1; // 0xcc
	char bHide3DTrack : 1; // 0xcc
	EInterpTrackMoveRotMode RotMode; // 0xd0
};

struct UBTService_StateMonitor_Camper {
	FBlackboardKeySelector BBDamageState; // 0xd8
	FBlackboardKeySelector BBImmoblizedState; // 0x108
	FBlackboardKeySelector BBGuidedState; // 0x138
	FBlackboardKeySelector BBEscapedState; // 0x168
	FBlackboardKeySelector BBIsInInjuredBleedout; // 0x198
	FBlackboardKeySelector BBDyingTimerPercentLeft; // 0x1c8
	FBlackboardKeySelector BBItemCharge; // 0x1f8
	FBlackboardKeySelector BBIsChased; // 0x228
	FBlackboardKeySelector BBWasInStimulusSight; // 0x258
	FBlackboardKeySelector BBWasBeingAimedAt; // 0x288
	FBlackboardKeySelector BBIsBeingAimedAt; // 0x2b8
	FBlackboardKeySelector BBIsBeingAttacked; // 0x2e8
	FBlackboardKeySelector BBIsChained; // 0x318
	FBlackboardKeySelector BBIsInPressureZone; // 0x348
	FBlackboardKeySelector BBIsInActivatedRBT; // 0x378
	FBlackboardKeySelector BBIsInDeathTimer; // 0x3a8
	float DeathTimerEndGamePrecent; // 0x3d8
	FBlackboardKeySelector BBHasCrowAttached; // 0x3e0
};

struct UFlashlightComponent {
	FMulticastInlineDelegate OnFlashlightTurnedOn; // 0xc0
	FMulticastInlineDelegate OnFlashlightTurnedOff; // 0xd0
	FMulticastInlineDelegate OnFlashlightablesUpdated; // 0xe0
	FDBDTunableRowHandle _baseBlindnessDuration; // 0xf0
	float _baseAccuracy; // 0x118
	float _lagDuration; // 0x11c
	TSet<UFlashlightableComponent*> _flashlightables; // 0x120
	TSet<UFlashlightableComponent*> _autonomousLitFlashlightables; // 0x170
	TArray<UFlashlightableComponent*> _replicatedLitFlashlightables; // 0x1c0
	bool _isOwnerLagging; // 0x1d0
};

struct UUMGPartySlotsWidget {
	UPanelWidget* PartyPlayerSlotsContainer; // 0x300
	TArray<UUMGPartyPlayerSlotWidget*> _partyPlayerSlots; // 0x308
	UVerticalBox* PartyBotSlotsContainer; // 0x320
	TSoftClassPtr<UObject> PartyBotSlotWidgetClass; // 0x328
	int32_t MaxSlotCount; // 0x358
	FSlateColor ConflictingCharacterColor; // 0x360
	FSlateColor NormalCharacterColor; // 0x388
};

struct USpotLightComponent {
	float InnerConeAngle; // 0x3c0
	float OuterConeAngle; // 0x3c4
	float LightShaftConeAngle; // 0x3c8
	float ShadowNearPlaneOffset; // 0x3cc
};

struct USocialSettings {
	TArray<FName> OssNamesWithEnvironmentIdPrefix; // 0x30
	int32_t DefaultMaxPartySize; // 0x40
	bool bPreferPlatformInvites; // 0x44
	bool bMustSendPrimaryInvites; // 0x45
	bool bLeavePartyOnDisconnect; // 0x46
	float UserListAutoUpdateRate; // 0x48
	int32_t MinNicknameLength; // 0x4c
	int32_t MaxNicknameLength; // 0x50
};

struct UOperatorField {
	float Magnitude; // 0xb8
	UFieldNodeBase* RightField; // 0xc0
	UFieldNodeBase* LeftField; // 0xc8
	EFieldOperationType Operation; // 0xd0
};

struct URepressedAlliance {
	FSecondaryInteractionProperties _secondaryActionProperties; // 0x3d0
	float _repairTimesNeededToActivate[0x3]; // 0x408
	float _generatorBlockDuration; // 0x414
	UInteractionDefinition* _currentRepairInteractionWithAbility; // 0x418
	AGenerator* _blockedGenerator; // 0x438
};

struct URitualHandlerComponent {
	TMap<FName, URitualEvaluatorBase*> _evaluators; // 0xc8
};

struct USurvivorAimStateComponent {
	ACollectable* _aimableCollectable; // 0xc8
};

struct UVectorFieldAnimated {
	UTexture2D* Texture; // 0x50
	EVectorFieldConstructionOp ConstructionOp; // 0x58
	int32_t VolumeSizeX; // 0x5c
	int32_t VolumeSizeY; // 0x60
	int32_t VolumeSizeZ; // 0x64
	int32_t SubImagesX; // 0x68
	int32_t SubImagesY; // 0x6c
	int32_t FrameCount; // 0x70
	float FramesPerSecond; // 0x74
	char bLoop : 1; // 0x78
	UVectorFieldStatic* NoiseField; // 0x80
	float NoiseScale; // 0x88
	float NoiseMax; // 0x8c
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

struct UParticleModuleTypeDataMesh {
	UStaticMesh* Mesh; // 0x38
	float LODSizeScale; // 0x48
	char bUseStaticMeshLODs : 1; // 0x4c
	char CastShadows : 1; // 0x4c
	char DoCollisions : 1; // 0x4c
	EMeshScreenAlignment MeshAlignment; // 0x4d
	char bOverrideMaterial : 1; // 0x4e
	char bOverrideDefaultMotionBlurSettings : 1; // 0x4e
	char bEnableMotionBlur : 1; // 0x4e
	FRawDistributionVector RollPitchYawRange; // 0x50
	EParticleAxisLock AxisLockOption; // 0x98
	char bCameraFacing : 1; // 0x99
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x9a
	EMeshCameraFacingOptions CameraFacingOption; // 0x9b
	char bApplyParticleRotationAsSpin : 1; // 0x9c
	char bFaceCameraDirectionRatherThanPosition : 1; // 0x9c
	char bCollisionsConsiderPartilceSize : 1; // 0x9c
};

struct UUMGSelectedCharacterWidget {
	UUMGCharacterPrestigeButton* PrestigeButton; // 0x300
	UTextBlock* CharacterNameText; // 0x308
	UTextBlock* CharacterLevelText; // 0x310
	UVerticalBox* CharacterLevelVerticalBox; // 0x318
	UImage* LeaderIcon; // 0x320
	FMulticastInlineDelegate _onCancelPartyButtonClick; // 0x338
};

struct UAchievementQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UOnlineEngineInterfaceImpl {
	FName VoiceSubsystemNameOverride; // 0x30
};

struct UWiggleWidget {
	float TimeBetweenAnimationStart; // 0x300
	UMobileBaseUserWidget* WiggleButtonLeft; // 0x308
	UMobileBaseUserWidget* WiggleButtonRight; // 0x310
};

struct UScrollBoxSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UMagicFountainOutlineUpdateStrategy {
	FLinearColor _outlineColor; // 0xc0
};

struct UHitDifferentInFrenzyMaxCountQEEvaluator {
	TSet<TWeakObjectPtr<AActor>> _targetList; // 0xc8
};

struct ATestMovableActor {
	UBoxComponent* BoxComponent; // 0x230
};

struct USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x30
};

struct UMatchConfigTabsDataAsset {
	TMap<ECustomMatchTab, FMatchConfigTabData> Data; // 0x38
};

struct UPolygonSelectionMechanicProperties {
	bool bSelectFaces; // 0x58
	bool bSelectEdges; // 0x59
	bool bSelectVertices; // 0x5a
};

struct UAISkill_InteractionUseItem_Firecracker {
	FAITunableParameter StartMaxRange; // 0x178
	float TargetFaceMeMaxAngle; // 0x188
};

struct UStreamMediaSource {
	FString StreamUrl; // 0x98
};

struct URestrictedPlacementAreaDefaultStrategy {
	AActor* RestrictedActor; // 0x70
};

struct USoundClass {
	FSoundClassProperties Properties; // 0x30
	TArray<USoundClass*> ChildClasses; // 0x88
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x98
	FSoundModulation Modulation; // 0xa8
	USoundClass* ParentClass; // 0xb8
};

struct UKindredPerk {
	TArray<float> _killerAuraRevealRange; // 0x3e0
};

struct UAudioCaptureComponent {
	int32_t JitterLatencyFrames; // 0x6f0
};

struct UGhostKillerAnalyticsComponent {
	FGhostKillerAnalytics _ghostKillerAnalytics; // 0xf0
};

struct UCoreSubtitlesWidget {
	UDBDTextBlock* SubtitlesTB; // 0x2e0
	int32_t NumberOfCharacterPerLine; // 0x2e8
	float DurationPerLine; // 0x2ec
	bool KeepSingleCharacter; // 0x2f0
	TArray<FSubtitlesEntry> _entryQueue; // 0x2f8
	FTimerHandle _timerHandle; // 0x308
};

struct UHorizontalBoxSlot {
	FMargin Padding; // 0x48
	FSlateChildSize Size; // 0x58
	EHorizontalAlignment HorizontalAlignment; // 0x60
	EVerticalAlignment VerticalAlignment; // 0x61
};

struct ULastActorInfo {
	AActor* Actor; // 0x40
	UStaticMesh* StaticMesh; // 0x48
	UProceduralShapeToolProperties* ShapeSettings; // 0x50
	UNewMeshMaterialProperties* MaterialProperties; // 0x58
};

struct UMaterialExpressionArctangent2 {
	FExpressionInput Y; // 0x48
	FExpressionInput X; // 0x64
};

struct UNavigationSystemModuleConfig {
	char bStrictlyStatic : 1; // 0x68
	char bCreateOnClient : 1; // 0x68
	char bAutoSpawnMissingNavData : 1; // 0x68
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68
};

struct UMaterialExpressionSceneColor {
	EMaterialSceneAttributeInputMode InputMode; // 0x48
	FExpressionInput Input; // 0x4c
	FExpressionInput OffsetFraction; // 0x68
	FVector2D ConstInput; // 0x84
};

struct UParticleModuleCollision {
	FRawDistributionVector DampingFactor; // 0x38
	FRawDistributionVector DampingFactorRotation; // 0x80
	FRawDistributionFloat MaxCollisions; // 0xc8
	EParticleCollisionComplete CollisionCompletionOption; // 0xf8
	TArray<EObjectTypeQuery> CollisionTypes; // 0x100
	char bApplyPhysics : 1; // 0x118
	char bIgnoreTriggerVolumes : 1; // 0x118
	FRawDistributionFloat ParticleMass; // 0x120
	float DirScalar; // 0x150
	char bPawnsDoNotDecrementCount : 1; // 0x154
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x154
	float VerticalFudgeFactor; // 0x158
	FRawDistributionFloat DelayAmount; // 0x160
	char bDropDetail : 1; // 0x190
	char bCollideOnlyIfVisible : 1; // 0x190
	char bIgnoreSourceActor : 1; // 0x190
	float MaxCollisionDistance; // 0x194
};

struct UNiagaraDataInterfaceGrid3D {
	FIntVector NumVoxels; // 0xd8
	float VoxelSize; // 0xe4
	bool SetGridFromVoxelSize; // 0xe8
	FVector WorldBBoxSize; // 0xec
};

struct UAITask_MoveTo {
	FMulticastInlineDelegate OnRequestFailed; // 0x78
	FMulticastInlineDelegate OnMoveFinished; // 0x88
	FAIMoveRequest MoveRequest; // 0x98
};

struct UAISenseConfig_Sight {
	UAISense_Sight* Implementation; // 0x50
	float SightRadius; // 0x58
	float LoseSightRadius; // 0x5c
	float PeripheralVisionAngleDegrees; // 0x60
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x64
	float AutoSuccessRangeFromLastSeenLocation; // 0x68
};

struct UNiagaraMeshRendererProperties {
	UStaticMesh* ParticleMesh; // 0x58
	ENiagaraSortMode SortMode; // 0x60
	char bOverrideMaterials : 1; // 0x64
	char bSortOnlyWhenTranslucent : 1; // 0x64
	TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x68
	FVector2D SubImageSize; // 0x78
	char bSubImageBlend : 1; // 0x80
	ENiagaraMeshFacingMode FacingMode; // 0x84
	char bLockedAxisEnable : 1; // 0x88
	FVector LockedAxis; // 0x8c
	ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x98
	FNiagaraVariableAttributeBinding PositionBinding; // 0xa0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x130
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x250
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x2e0
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x370
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x400
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x490
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x520
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5b0
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x640
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x6d0
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x760
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x7f0
};

struct UGarbageCollectionSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x48
	char FlushStreamingOnGC : 1; // 0x4c
	char AllowParallelGC : 1; // 0x4c
	char IncrementalBeginDestroyEnabled : 1; // 0x4c
	char MultithreadedDestructionEnabled : 1; // 0x4c
	char CreateGCClusters : 1; // 0x4c
	char AssetClusteringEnabled : 1; // 0x4c
	char ActorClusteringEnabled : 1; // 0x4c
	char BlueprintClusteringEnabled : 1; // 0x4c
	char UseDisregardForGCOnDedicatedServers : 1; // 0x4d
	int32_t MinGCClusterSize; // 0x50
	int32_t NumRetriesBeforeForcingGC; // 0x54
	int32_t MaxObjectsNotConsideredByGC; // 0x58
	int32_t SizeOfPermanentObjectPool; // 0x5c
	int32_t MaxObjectsInGame; // 0x60
	int32_t MaxObjectsInEditor; // 0x64
};

struct ASceneCaptureCube {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x240
};

struct ADBDClientSyncer {
	TArray<FSpawnInfo> _actorsToSpawnLocally; // 0x230
	TArray<FSpawnInfo> _currentQueue; // 0x240
	UPaperTileMap* _tileMap; // 0x258
};

struct UDetectionFanComponent {
	FFloatRange _angleRange; // 0x210
	FVector _originWorldOffset; // 0x220
	int32_t _numberOfSpots; // 0x22c
	float _defaultRingRadius; // 0x230
	ECollisionChannel _collisionChannel; // 0x234
	USkeletalMeshComponent* _meshComponent; // 0x238
};

struct UOfferingHandler {
	UDBDGameInstance* _gameInstance; // 0x30
	TArray<FName> _levelPerkIDs; // 0x38
};

struct UMaterialExpressionStaticSwitchParameter {
	FExpressionInput A; // 0x70
	FExpressionInput B; // 0x8c
};

struct UAnimComposite {
	FAnimTrack AnimationTrack; // 0xb0
};

struct UUMGPlayerRankInfo {
	UUMGTallyPipsContainer* PipsContainerWidget; // 0x300
	UUMGTallyRankFrame* RankFrameWidget; // 0x308
	UImage* Background; // 0x310
	UTextBlock* TitleLabel; // 0x318
	UTextBlock* RankLabel; // 0x320
	UTextBlock* pipLabel; // 0x328
	UCanvasPanel* HighlightContainer; // 0x330
	FLinearColor _survivorColorBackground; // 0x338
	FLinearColor _killerColorBackground; // 0x348
	float _disableOpacity; // 0x358
};

struct UUMGShadersPrecompilingProgressionWidget {
	UProgressBar* _progressBar; // 0x300
	UTextBlock* _progressionText; // 0x308
};

struct UCustomDepthOutlineRenderStrategy {
	UMaterialInterface* _replacementMaterial; // 0x70
	TArray<UBatchMeshCommands*> _translucentCopies; // 0x78
};

struct UK24AnimInstance {
	bool _isInPowerMode; // 0x5a8
	bool _isChargingPower; // 0x5a9
	bool _isK24PowerAttacking; // 0x5aa
	bool _isRequestingPowerAttack; // 0x5ab
	int32_t _powerLevel; // 0x5ac
};

struct AGameStateBase {
	AGameModeBase* GameModeClass; // 0x230
	AGameModeBase* AuthorityGameMode; // 0x238
	ASpectatorPawn* SpectatorClass; // 0x240
	TArray<APlayerState*> PlayerArray; // 0x248
	bool bReplicatedHasBegunPlay; // 0x258
	float ReplicatedWorldTimeSeconds; // 0x25c
	float ServerWorldTimeSecondsDelta; // 0x260
	float ServerWorldTimeSecondsUpdateFrequency; // 0x264
};

struct UBaseTooltipWidget {
	UTextBlock* TitleLabel; // 0x300
	UCanvasPanel* TooltipContainer; // 0x308
	UUMGHtmlRichText* DescriptionLabel; // 0x310
	UButton* CloseButton; // 0x318
	UAkAudioEvent* TooltipOpeningSound; // 0x330
};

struct UDemogorgonPortalEffectComponent {
	FName _statusEffectName; // 0xb8
	float _effectLingerDuration; // 0xc4
	TWeakObjectPtr<UStatusEffect> _effect; // 0xc8
	TWeakObjectPtr<ADBDPlayer> _originatingPlayer; // 0xd0
	TWeakObjectPtr<UGameplayModifierContainer> _originatingEffect; // 0xd8
};

struct URemoveTwin {
	FDBDTunableRowHandle _removeTwinMaxCharge; // 0x708
	FDBDTunableRowHandle _removeTwinExitTime; // 0x730
	float _brotherRemoveDistanceFromSurvivor; // 0x758
};

struct URetainerBox {
	bool RenderOnInvalidation; // 0x140
	bool RenderOnPhase; // 0x141
	int32_t Phase; // 0x144
	int32_t PhaseCount; // 0x148
	UMaterialInterface* EffectMaterial; // 0x150
	FName TextureParameter; // 0x158
};

struct ALandscapeProxy {
	ULandscapeSplinesComponent* SplineComponent; // 0x230
	FGuid LandscapeGuid; // 0x238
	FIntPoint LandscapeSectionOffset; // 0x248
	int32_t MaxLODLevel; // 0x250
	float LODDistanceFactor; // 0x254
	ELandscapeLODFalloff LODFalloff; // 0x258
	float ComponentScreenSizeToUseSubSections; // 0x25c
	float LOD0ScreenSize; // 0x260
	float LOD0DistributionSetting; // 0x264
	float LODDistributionSetting; // 0x268
	float TessellationComponentScreenSize; // 0x26c
	bool UseTessellationComponentScreenSizeFalloff; // 0x270
	float TessellationComponentScreenSizeFalloff; // 0x274
	int32_t OccluderGeometryLOD; // 0x278
	int32_t StaticLightingLOD; // 0x27c
	UPhysicalMaterial* DefaultPhysMaterial; // 0x280
	float StreamingDistanceMultiplier; // 0x288
	UMaterialInterface* LandscapeMaterial; // 0x290
	UMaterialInterface* LandscapeHoleMaterial; // 0x2b8
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2c0
	bool bMeshHoles; // 0x2d0
	char MeshHolesMaxLod; // 0x2d1
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2d8
	int32_t VirtualTextureNumLods; // 0x2e8
	int32_t VirtualTextureLodBias; // 0x2ec
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2f0
	float NegativeZBoundsExtension; // 0x2f4
	float PositiveZBoundsExtension; // 0x2f8
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x300
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x310
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x320
	bool bHasLandscapeGrass; // 0x394
	float StaticLightingResolution; // 0x398
	char bCastStaticShadow : 1; // 0x39c
	char bCastShadowAsTwoSided : 1; // 0x39c
	char bCastFarShadow : 1; // 0x39c
	char bAffectDistanceFieldLighting : 1; // 0x3a0
	FLightingChannels LightingChannels; // 0x3a1
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3a4
	char bRenderCustomDepth : 1; // 0x3a4
	int32_t CustomDepthStencilValue; // 0x3a8
	float LDMaxDrawDistance; // 0x3ac
	FLightmassPrimitiveSettings LightmassSettings; // 0x3b0
	int32_t CollisionMipLevel; // 0x3c8
	int32_t SimpleCollisionMipLevel; // 0x3cc
	float CollisionThickness; // 0x3d0
	FBodyInstance BodyInstance; // 0x3d8
	char bGenerateOverlapEvents : 1; // 0x4f0
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4f0
	int32_t ComponentSizeQuads; // 0x4f4
	int32_t SubsectionSizeQuads; // 0x4f8
	int32_t NumSubsections; // 0x4fc
	char bUsedForNavigation : 1; // 0x500
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x500
	bool bUseDynamicMaterialInstance; // 0x504
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x505
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x506
	bool bHasLayersContent; // 0x507
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x508
};

struct UCamperDreamworldComponent {
	FMulticastInlineDelegate OnCamperTriggeredDreamTrap; // 0x108
	FSurvivorSleepiness _survivorSleepiness; // 0x118
	float _sleepinessProtectionRemainingDuration; // 0x120
	float _sleepGainPerSecond; // 0x124
	int32_t _wakeUpByOtherCount; // 0x12c
	bool _showKiller; // 0x130
	FFastTimer _killerGlimpseDurationTimer; // 0x138
	FFastTimer _killerGlimpseCooldownTimer; // 0x178
	float _glimpseMinDistance; // 0x1b8
	float _glimpseMaxDistance; // 0x1bc
	float _killerGlimpseCooldown; // 0x1c0
	float _killerGlimpseDuration; // 0x1c4
	int32_t _wakeUpBySkillCheckCount; // 0x1c8
	int32_t _fellAsleepCount; // 0x1cc
	bool _forcedAsleep; // 0x1d0
	AWakerObject* _linkedWaker; // 0x1d8
	bool _useScriptedKillerVisibility; // 0x1e0
	bool _showKillerInstantly; // 0x1e8
};

struct UNavigationDataChunk {
	FName NavigationDataName; // 0x30
};

struct UParticleModuleVectorFieldRotation {
	FVector MinInitialRotation; // 0x38
	FVector MaxInitialRotation; // 0x44
};

struct UUVProjectionOperatorFactory {
	UUVProjectionTool* Tool; // 0x38
};

struct UGameplayModifierContainerDataAsset {
	TSoftClassPtr<UObject> ModifierContainerComponent; // 0x48
	TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>> RequiredModifierContainers; // 0x78
};

struct UBTTask_SetBBEntry {
	FBlackboardKeySelector BBToSetKey; // 0x78
	FString ToSetValue; // 0xa8
};

struct UClothLODDataCommon_Legacy {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x30
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x38
	FClothCollisionData CollisionData; // 0x130
};

struct UObjectPlacementValidationWithRestrictionStrategy {
	TArray<URestrictedPlacementAreaStrategy*> _restrictedAreas; // 0xe0
};

struct UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x30
};

struct UParticleModuleAccelerationBase {
	char bAlwaysInWorldSpace : 1; // 0x38
};

struct UAIPerceptionStimuliSourceComponent {
	char bAutoRegisterAsSource : 1; // 0xb8
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xc0
};

struct AHarpoonRifle {
	UChainLinkableComponent* _survivorLinkableClass; // 0x4e0
	UChainLinkableComponent* _killerLinkableClass; // 0x4e8
	ARifleChain* _chainClass; // 0x4f0
	FName _rifleMuzzleSocket; // 0x4f8
	FName _rifleHarpoonLoadingSocket; // 0x504
	FDBDTunableRowHandle _crowActiveRange; // 0x510
	UHarpoonLauncher* _launcher; // 0x538
	UHarpoonProviderComponent* _harpoonProvider; // 0x540
	ARifleChain* _chain; // 0x548
	URifleChainTensionComponent* _chainTensionComponent; // 0x550
	UChargeableComponent* _chainTensionChargeable; // 0x558
	URiflePlayerLinker* _playerLinker; // 0x560
	UHarpoonChainPositioner* _harpoonChainPositioner; // 0x568
	UFireHarpoonRifleInteraction* _fireInteraction; // 0x570
	UTriggerableActivatorComponent* _crowsActivatorComponent; // 0x578
};

struct UNiagaraDataInterfaceExport {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
};

struct UParticleModuleLocationWorldOffset_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct UShapeComponent {
	UBodySetup* ShapeBodySetup; // 0x428
	UNavAreaBase* AreaClass; // 0x430
	FColor ShapeColor; // 0x438
	char bDrawOnlyIfSelected : 1; // 0x43c
	char bShouldCollideWhenPlacing : 1; // 0x43c
	char bDynamicObstacle : 1; // 0x43c
};

struct UDynamicMeshSculptTool {
	USculptBrushProperties* BrushProperties; // 0xc8
	UBrushSculptProperties* SculptProperties; // 0xd0
	UPlaneBrushProperties* PlaneBrushProperties; // 0xd8
	USculptMaxBrushProperties* SculptMaxBrushProperties; // 0xe0
	UBrushRemeshProperties* RemeshProperties; // 0xe8
	UFixedPlaneBrushProperties* GizmoProperties; // 0xf0
	UMeshEditingViewProperties* ViewProperties; // 0xf8
	UBrushStampIndicator* BrushIndicator; // 0x140
	UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x148
	UPreviewMesh* BrushIndicatorMesh; // 0x150
	UOctreeDynamicMeshComponent* DynamicMeshComponent; // 0x158
	UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x160
	UTransformGizmo* PlaneTransformGizmo; // 0xca8
	UTransformProxy* PlaneTransformProxy; // 0xcb0
};

struct UActorClipperComponent {
	USphereComponent* Shape; // 0xb8
	TMap<AActor*, FClippedActor> _clippedActors; // 0xc0
	TWeakObjectPtr<UPrimitiveCollection> _clippables; // 0x110
};

struct UBlastMineTrapComponent {
	bool _isTrapActive; // 0xb8
};

struct UTwinHuskAnimInstance {
	bool _isDeadFromSurvivorBack; // 0x270
	APawn* _owningPawn; // 0x278
	UTwinHuskStateComponent* _twinHuskStateComponent; // 0x280
};

struct UGizmoScaledTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x50
};

struct UMaterialExpressionPower {
	FExpressionInput Base; // 0x48
	FExpressionInput Exponent; // 0x64
	float ConstExponent; // 0x80
};

struct UComboBoxString {
	TArray<FString> DefaultOptions; // 0x128
	FString SelectedOption; // 0x138
	FComboBoxStyle WidgetStyle; // 0x148
	FTableRowStyle ItemStyle; // 0x588
	FMargin ContentPadding; // 0xdc0
	float MaxListHeight; // 0xdd0
	bool HasDownArrow; // 0xdd4
	bool EnableGamepadNavigationMode; // 0xdd5
	FSlateFontInfo Font; // 0xdd8
	FSlateColor ForegroundColor; // 0xe30
	bool bIsFocusable; // 0xe58
	FDelegate OnGenerateWidgetEvent; // 0xe5c
	FMulticastInlineDelegate OnSelectionChanged; // 0xe70
	FMulticastInlineDelegate OnOpening; // 0xe80
};

struct UUMGBaseButtonWidget {
	FMulticastInlineDelegate OnBaseButtonClickedEvent; // 0x300
	FMulticastInlineDelegate OnBaseButtonPressedEvent; // 0x310
	FMulticastInlineDelegate OnBaseButtonReleasedEvent; // 0x320
	FMulticastInlineDelegate OnBaseButtonLongPressEvent; // 0x330
	UButton* Button; // 0x340
	UImage* IconPicture; // 0x348
	UTextBlock* ButtonLabel; // 0x350
	FSlateBrush ButtonPictureBrush; // 0x358
	FText ButtonText; // 0x3e8
	UAkAudioEvent* OnPressSound; // 0x400
	UAkAudioEvent* OnClickSound; // 0x408
	UAkAudioEvent* OnLongPressSound; // 0x410
	UAkAudioEvent* OnReleaseSound; // 0x418
	UAkAudioEvent* OnHoveredSound; // 0x420
};

struct UParticleModuleMeshRotation {
	FRawDistributionVector StartRotation; // 0x38
	char bInheritParent : 1; // 0x80
};

struct UActorVariationSpawner {
	TSoftClassPtr<UObject> Visualization; // 0x210
	TArray<FActorVariationElements> Variations; // 0x240
	UObject* _toSpawn; // 0x258
};

struct AMatineeActorCameraAnim {
	UCameraAnim* CameraAnim; // 0x2e0
};

struct UParticleModuleVectorFieldRotationRate {
	FVector RotationRate; // 0x38
};

struct USoundNodeDelay {
	float DelayMin; // 0x50
	float DelayMax; // 0x54
};

struct UFileMediaSource {
	FString FilePath; // 0x98
	bool PrecacheFile; // 0xa8
};

struct ATutorialLevel {
	bool _tutorialStarted; // 0x238
};

struct UParticleModuleMeshRotationRate {
	FRawDistributionVector StartRotationRate; // 0x38
};

struct UParticleModuleSpawnBase {
	char bProcessSpawnRate : 1; // 0x38
	char bProcessBurstList : 1; // 0x38
};

struct UGeneratorTeleportInteraction {
	float OnBloodSpurtsAINoiseEventRange; // 0x6d8
	UTimerObject* _teleportCooldownTimer; // 0x6e0
	AGenerator* _selectedGenerator; // 0x728
	AGenerator* _locallySelectedGenerator; // 0x730
	FTransform _selectedTeleportLocation; // 0x740
	bool _isInteractionOngoing; // 0x770
	bool _teleportFailed; // 0x771
	float _bloodSpurtInterval; // 0x774
	float _collisionCheckCapsuleHalfHeight; // 0x778
	float _collisionCheckCapsuleRadius; // 0x77c
	FVector _collisionCheckLocationOffset; // 0x780
	float _capsuleTraceAngleIncrement; // 0x78c
	float _generatorTeleportMaxAngle; // 0x790
	float _downRaycastLength; // 0x794
};

struct UAISenseEvent_Trail {
	FAITrailEvent Event; // 0x30
};

struct ANavSystemConfigOverride {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x230
	ENavSystemOverridePolicy OverridePolicy; // 0x238
	char bLoadOnClient : 1; // 0x239
};

struct UVaultableComponent {
	FMulticastInlineDelegate OnVault; // 0xb8
	FGameplayTag _vaultableScoreEvent; // 0xc8
};

struct UHudSettings {
	char bShowHUD : 1; // 0x30
	TArray<FName> DebugDisplay; // 0x38
};

struct UMovieSceneMaterialTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct APlanarReflection {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x240
	bool bShowPreviewPlane; // 0x248
};

struct UMaterialExpressionArctangent2Fast {
	FExpressionInput Y; // 0x48
	FExpressionInput X; // 0x64
};

struct USimpleSpawnEffectsOnAllSurvivorsAddon {
	TArray<FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams; // 0x2a8
};

struct UUMGReceivedFriendRequestListElement {
	URichTextBlock* FriendRequestStatusRichText; // 0x3c0
};

struct APhysicsConstraintActor {
	UPhysicsConstraintComponent* ConstraintComp; // 0x230
	AActor* ConstraintActor1; // 0x238
	AActor* ConstraintActor2; // 0x240
	char bDisableCollision : 1; // 0x248
};

struct UFont {
	EFontCacheType FontCacheType; // 0x38
	TArray<FFontCharacter> Characters; // 0x40
	TArray<UTexture2D*> Textures; // 0x50
	int32_t IsRemapped; // 0x60
	float EmScale; // 0x64
	float Ascent; // 0x68
	float Descent; // 0x6c
	float Leading; // 0x70
	int32_t Kerning; // 0x74
	FFontImportOptionsData ImportOptions; // 0x78
	int32_t NumCharacters; // 0x128
	TArray<int32_t> MaxCharHeight; // 0x130
	float ScalingFactor; // 0x140
	int32_t LegacyFontSize; // 0x144
	FName LegacyFontName; // 0x148
	FCompositeFont CompositeFont; // 0x158
};

struct UWindowTitleBarArea {
	bool bWindowButtonsEnabled; // 0x140
	bool bDoubleClickTogglesFullscreen; // 0x141
};

struct UDrawPolyPathExtrudeProperties {
	EDrawPolyPathExtrudeDirection Direction; // 0x58
};

struct UInterpTrackInstEvent {
	float LastUpdatePosition; // 0x30
};

struct UMovieSceneVectorTrack {
	int32_t NumChannelsUsed; // 0x98
};

struct UCrownPlayerComponent {
	bool _hasInteractedWithCrownPillarThisGame; // 0x210
	FTagStateBool _isCrownEventActive; // 0x218
};

struct UCurveLinearColor {
	FRichCurve FloatCurves[0x4]; // 0x38
	float AdjustHue; // 0x238
	float AdjustSaturation; // 0x23c
	float AdjustBrightness; // 0x240
	float AdjustBrightnessCurve; // 0x244
	float AdjustVibrance; // 0x248
	float AdjustMinAlpha; // 0x24c
	float AdjustMaxAlpha; // 0x250
};

struct UDidGameEventOccurred {
	FGameplayTag EventTag; // 0xe8
};

struct UGeneratorDreamworldComponent {
	TArray<FName> _beamSocketsForBloodEffect; // 0xc0
};

struct UUMGMonthlyPassRewardItemWidget {
	UTextBlock* ItemAmount; // 0x300
	UTextBlock* ItemName; // 0x308
	UImage* ItemIcon; // 0x310
	UImage* CheckIcon; // 0x318
	UImage* ItemFrame; // 0x320
	UImage* ItemRarityBackground; // 0x328
	UCanvasPanel* ItemPaintPanel; // 0x330
	FLinearColor ActiveItemFrameColor; // 0x338
	FLinearColor NonActiveItemFrameColor; // 0x348
};

struct UK24WhipAttackHittingSubstate {
	FDBDTunableRowHandle _attackSphereTraceRadius; // 0x1a0
	FDBDTunableRowHandle _powerAttackBreakObjectLevel; // 0x1c8
	FDBDTunableRowHandle _powerCanBreakObjectAfterAPlayerDamage; // 0x1f0
	FVector _whipMovementFromOffset; // 0x218
	FVector _whipMovementToOffset; // 0x224
	UCurveFloat* _whipMovementCurve; // 0x230
	UCurveFloat* _lvl3SpeedCurve; // 0x238
	float _whipGroundDetectionOffset; // 0x240
};

struct UDBDCullDistanceVolumeComponent {
	TArray<FDBDCullDistanceSizePair> CullDistances; // 0x210
	FVector InfluenceBox; // 0x220
	bool enabled; // 0x22c
	bool Unbound; // 0x22d
	UBoxComponent* _previewInfluenceBox; // 0x230
};

struct UForcedPenance {
	float _perkActivationDuration[0x3]; // 0x3d0
	bool _applyOblivious; // 0x3dc
	bool _applyBroken; // 0x3dd
	TArray<UStatusEffect*> _camperObliviousEffects; // 0x3e0
	TArray<UStatusEffect*> _camperBrokenEffects; // 0x3f0
};

struct UBTTaskNode {
	TArray<UBTService*> Services; // 0x60
	char bIgnoreRestartSelf : 1; // 0x70
};

struct USoundfieldEndpointSubmix {
	FName SoundfieldEndpointType; // 0x40
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x50
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x58
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x68
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x70
};

struct UBTDecorator_IsBBEntryOfClass {
	UObject* TestClass; // 0xa0
};

struct UDynamicAccessoryAnimInstance {
	bool _isInMenu; // 0x270
	bool _isInGame; // 0x271
	TWeakObjectPtr<USkeletalMeshComponent> _masterMesh; // 0x274
};

struct UBTDecorator_IsInteractorAvailable {
	FBlackboardKeySelector BBInteractorObj; // 0x70
};

struct UMaterialExpressionFontSampleParameter {
	FName ParameterName; // 0x58
	FGuid ExpressionGUID; // 0x64
	FName Group; // 0x74
};

struct UMovieScene3DConstraintSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UEventObjectComponent {
	FName _eventId; // 0xb8
};

struct UUMGAtlantaEventsScreen {
	UTextBlock* PageTitle; // 0x300
	UWrapBox* WrapBox; // 0x308
	UUMGAtlantaEventsDescription* DescriptionWidget; // 0x310
	UUMGAtlantaEventsTab* EventsTabWBPReference; // 0x318
	TArray<UUMGAtlantaEventsTab*> _eventsArray; // 0x320
};

struct UMovieScenePropertyTrack {
	UMovieSceneSection* SectionToKey; // 0x60
	FName PropertyName; // 0x68
	FString PropertyPath; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x88
};

struct UMovieScene {
	TArray<FMovieSceneSpawnable> Spawnables; // 0x58
	TArray<FMovieScenePossessable> Possessables; // 0x68
	TArray<FMovieSceneBinding> ObjectBindings; // 0x78
	TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups; // 0x88
	TArray<UMovieSceneTrack*> MasterTracks; // 0xd8
	UMovieSceneTrack* CameraCutTrack; // 0xe8
	FMovieSceneFrameRange SelectionRange; // 0xf0
	FMovieSceneFrameRange PlaybackRange; // 0x100
	FFrameRate TickResolution; // 0x110
	FFrameRate DisplayRate; // 0x118
	EMovieSceneEvaluationType EvaluationType; // 0x120
	EUpdateClockSource ClockSource; // 0x121
	FSoftObjectPath CustomClockSourcePath; // 0x128
	TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x148
};

struct UMultiLineEditableText {
	FText Text; // 0x148
	FText HintText; // 0x160
	FDelegate HintTextDelegate; // 0x178
	FTextBlockStyle WidgetStyle; // 0x190
	bool bIsReadOnly; // 0x418
	FSlateFontInfo Font; // 0x420
	bool SelectAllTextWhenFocused; // 0x478
	bool ClearTextSelectionOnFocusLoss; // 0x479
	bool RevertTextOnEscape; // 0x47a
	bool ClearKeyboardFocusOnCommit; // 0x47b
	bool AllowContextMenu; // 0x47c
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x47d
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x47e
	FMulticastInlineDelegate OnTextChanged; // 0x480
	FMulticastInlineDelegate OnTextCommitted; // 0x490
};

struct UPalletOutlineUpdateStrategy {
	FLinearColor _revealedByPowerColor; // 0x138
};

struct UUMGSettingLanguageContextWidget {
	UScrollBox* LanguageScrollBox; // 0x318
	TSoftClassPtr<UObject> _languageButtonClass; // 0x320
	int32_t _languageListRowGap; // 0x350
	UUMGSettingContextButton* _selectedLanguageButton; // 0x358
};

struct UDisplayStandCharmRequesterComponent {
	ACharm* _menuCharmClass; // 0xb8
};

struct USoundNodeLooping {
	int32_t LoopCount; // 0x50
	char bLoopIndefinitely : 1; // 0x54
};

struct UTargetTriggeredEventRecentlyQEEvaluator {
	FGameplayTag _gameEvent; // 0xe4
};

struct ULightPropagationVolumeBlendable {
	FLightPropagationVolumeSettings Settings; // 0x38
	float BlendWeight; // 0x78
};

struct AChatManager {
	UDBDGameInstance* _gameInstance; // 0x230
};

struct ALamentConfiguration {
	USpherePlayerOverlapComponent* _interactable; // 0x500
	UInteractor* _collectableInteractor; // 0x508
	UK25CollectLamentConfigurationInteraction* _survivorCollectItemInteraction; // 0x510
	UK25CollectLamentConfigurationInteraction* _killerCollectItemInteraction; // 0x518
	UDBDOutlineComponent* _outlineComponent; // 0x520
	UMaterialHelper* _materialHelper; // 0x528
	ULamentConfigurationOutlineStrategy* _outlineStrategy; // 0x530
	ULamentConfigurationSpawnStrategy* _spawnStrategy; // 0x538
	ULamentConfigurationChainHuntComponent* _chainHuntComponent; // 0x540
	float _dotProductMinValue; // 0x548
	EAttachToSocketNameEnum _survivorAttachmentSocket; // 0x54c
	EAttachToSocketNameEnum _killerAttachmentSocket; // 0x54d
	UAnimationMontageSlave* _montageFollower; // 0x550
	UMontagePlayer* _montagePlayer; // 0x558
	AK25AnimationFollowerActor* _chainAnimationActorClass; // 0x560
	AK25LamentConfigurationTeleportIndicator* _lamentConfigurationTeleportIndicatorClass; // 0x568
	FName _chainAnimationFollowerAttachmentSocketName; // 0x570
	FAkObservedPlayerSoundLoop _possessionSoundLoop; // 0x580
	FDBDTunableRowHandle _respawnTimeAfterLamentConfigurationSolved; // 0x5c0
	FDBDTunableRowHandle _respawnTimeAfterKillerPickUp; // 0x5e8
	FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeBySelf; // 0x610
	FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeByAttack; // 0x638
	FDBDTunableRowHandle _numberChainsToLaunchUponKillerPickUpLamentConfiguration; // 0x660
	FDBDTunableRowHandle _hostageInteractionTime; // 0x688
	ELamentConfigurationState _localLamentConfigurationState; // 0x6b0
	ELamentConfigurationState _lamentconfigurationState; // 0x6b1
	AK25AnimationFollowerActor* _chainAnimationActor; // 0x6b8
	ACamperPlayer* _survivorHeldHostage; // 0x708
	float _solvedLamentConfigurationDropDistanceToCollectorCentimeters; // 0x738
	float _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters; // 0x73c
	bool _solved; // 0x740
	bool _releasedByAttack; // 0x741
	AK25LamentConfigurationTeleportIndicator* _lamentConfigurationTeleportIndicator; // 0x748
};

struct UAkAssetPlatformData {
	UAkAssetData* CurrentAssetData; // 0x30
};

struct USpectatorPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x160
};

struct UDisciplineEffect {
	float _deactivationDelay; // 0x350
};

struct ULevelSequenceBurnInOptions {
	bool bUseBurnIn; // 0x30
	FSoftClassPath BurnInClass; // 0x38
	ULevelSequenceBurnInInitSettings* Settings; // 0x58
};

struct UMovieSceneGeometryCollectionTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x60
};

struct UEnvQuery {
	FName QueryName; // 0x38
	TArray<UEnvQueryOption*> Options; // 0x48
};

struct UInterpTrackInstVisibility {
	EVisibilityTrackAction action; // 0x30
	float LastUpdatePosition; // 0x34
};

struct UMobileBaseUserWidget {
	UWidget* HighlightWidget; // 0x270
	FName _tutorialAnimationName; // 0x278
	int32_t _tutorialNumberOfLoops; // 0x284
};

struct UAkAudioType {
	uint32_t ShortID; // 0x30
	TArray<UObject*> UserData; // 0x38
};

struct UBTTask_PlaySound {
	USoundCue* SoundToPlay; // 0x78
};

struct UAkDurationCallbackInfo {
	float Duration; // 0x40
	float EstimatedDuration; // 0x44
	int32_t AudioNodeID; // 0x48
	int32_t MediaID; // 0x4c
	bool bStreaming; // 0x50
};

struct ANavLinkProxy {
	TArray<FNavigationLink> PointLinks; // 0x240
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x250
	UNavLinkCustomComponent* SmartLinkComp; // 0x260
	bool bSmartLinkIsRelevant; // 0x268
	FMulticastInlineDelegate OnSmartLinkReached; // 0x270
};

struct UEtherealComponent {
	bool _isEthereal; // 0xe0
};

struct UK25LamentConfigurationPossessionChainAttacksEffect {
	FDBDTunableRowHandle _timeBetweenChainTargettingAttempt; // 0x350
	FDBDTunableRowHandle _numberOfChainsToTriggerTowardsSurvivor; // 0x378
};

struct UParticleModuleParameterDynamic_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x50
};

struct UUMGTallyPip {
	UImage* Filling; // 0x300
};

struct UUITweenMaterialScalarProperties {
	UMaterialInstanceDynamic* MaterialInstance; // 0x30
};

struct AAkReverbVolume {
	char bEnabled : 1; // 0x268
	UAkAuxBus* AuxBus; // 0x270
	FString AuxBusName; // 0x278
	float SendLevel; // 0x288
	float FadeRate; // 0x28c
	float Priority; // 0x290
	UAkLateReverbComponent* LateReverbComponent; // 0x298
};

struct UParticleModuleSubUVMovie {
	char bUseEmitterTime : 1; // 0x78
	FRawDistributionFloat FrameRate; // 0x80
	int32_t StartingFrame; // 0xb0
};

struct UInteractiveTool {
	UInputBehaviorSet* InputBehaviors; // 0x50
	TArray<UObject*> ToolPropertyObjects; // 0x58
};

struct UMovieSceneParticleTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x60
};

struct UStalkerComponent {
	bool _distributeStalkRate; // 0xe0
	bool _canStalkWhileInChase; // 0xe1
	TArray<UStalkedComponent*> _playerStalkedComponents; // 0xe8
	UChargeableComponent* _stalkPointsChargeable; // 0x108
};

struct UResiliencePerk {
	float _actionSpeed[0x3]; // 0x3d0
};

struct UPlanarReflectionComponent {
	UBoxComponent* PreviewBox; // 0x2a8
	float NormalDistortionStrength; // 0x2b0
	float PrefilterRoughness; // 0x2b4
	float PrefilterRoughnessDistance; // 0x2b8
	int32_t ScreenPercentage; // 0x2bc
	float ExtraFOV; // 0x2c0
	float DistanceFromPlaneFadeStart; // 0x2c4
	float DistanceFromPlaneFadeEnd; // 0x2c8
	float DistanceFromPlaneFadeoutStart; // 0x2cc
	float DistanceFromPlaneFadeoutEnd; // 0x2d0
	float AngleFromPlaneFadeStart; // 0x2d4
	float AngleFromPlaneFadeEnd; // 0x2d8
	bool bShowPreviewPlane; // 0x2dc
	bool bRenderSceneTwoSided; // 0x2dd
};

struct UGameMapsSettings {
	FString LocalMapOptions; // 0x30
	FSoftObjectPath TransitionMap; // 0x40
	bool bUseSplitscreen; // 0x60
	ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x61
	EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x62
	EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x63
	bool bOffsetPlayerGamepadIds; // 0x64
	FSoftClassPath GameInstanceClass; // 0x68
	FSoftObjectPath GameDefaultMap; // 0x88
	FSoftObjectPath ServerDefaultMap; // 0xa8
	FSoftClassPath GlobalDefaultGameMode; // 0xc8
	FSoftClassPath GlobalDefaultServerGameMode; // 0xe8
	TArray<FGameModeName> GameModeMapPrefixes; // 0x108
	TArray<FGameModeName> GameModeClassAliases; // 0x118
};

struct UPresenter {
	bool RequestPresentationAtBeginPlay; // 0xb8
	ESlateVisibility InitialVisibility; // 0xb9
	UUserWidget* _widget; // 0xc0
};

struct UActorDetectorComponent {
	FMulticastInlineDelegate OnActorDetected; // 0xb8
	TArray<UObject*> CollectedTypes; // 0xc8
	UPrimitiveComponent* _primitive; // 0xd8
};

struct UHalloweenEventComponent {
	USectionnedChargeableComponent* _toxinVialComponent; // 0xb8
};

struct UUMGCharacterPrice {
	UTextBlock* PriceTextBlock; // 0x300
	FColor AffordableColor; // 0x308
	FColor UnaffordableColor; // 0x30c
};

struct UAkWwiseTreeSelector {
	FMulticastInlineDelegate OnSelectionChanged; // 0x128
	FMulticastInlineDelegate OnItemDragged; // 0x138
};

struct UParticleModuleEventGenerator {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x38
};

struct UUmgKillerHud {
	UPowerButton* PowerButton; // 0x528
	UCanvasPanel* PowerButtonContainer; // 0x530
	UPowerButton* SecondAbilityButton; // 0x538
	UCanvasPanel* SecondAbilityButtonContainer; // 0x540
	UActionButton* AttackButton; // 0x548
	UCanvasPanel* AttackButtonContainer; // 0x550
	UActionButton* DropSurvivorButton; // 0x558
	UCanvasPanel* DropSurvivorButtonContainer; // 0x560
	UMobileBaseUserWidget* CancelButton; // 0x568
	UUMGGhostfaceSpecific* GhostfaceSpecific; // 0x570
	UCanvasPanel* SecondAttackButtonContainer; // 0x578
	UAtlantaHudPowerAttackJoystick* HudPowerAttackJoystick; // 0x580
	ASlasherPlayer* killer; // 0x588
	bool _isCancelButtonPressed; // 0x598
	bool _isAttackButtonPressed; // 0x599
	bool _isAttackJoystickActivated; // 0x59a
	bool _isPowerAttackJoystickActivated; // 0x59b
	FSlateBrush _powerAttackJoystickBackgroundImage; // 0x5a0
	FSlateBrush _DefaultAttackJoystickIconPressedImage; // 0x630
	FSlateBrush _DefaultAttackJoystickIconUnpressedImage; // 0x6c0
	FVector2D _powerAttackJoystickThumbPressedSize; // 0x750
	FVector2D _powerAttackJoystickThumbUnpressedSize; // 0x758
};

struct UMatchConfigOptionsDataAsset {
	TMap<ECustomMatchOptions, FMatchOptionAssetData> OptionsData; // 0x38
};

struct UAIMoveToPosition {
	UAIMoveToPositionData* _aiBehaviourData; // 0x58
	ADBDAIPlayerController* _aiController; // 0x60
};

struct UFoliageType {
	FGuid UpdateGuid; // 0x30
	float Density; // 0x40
	float DensityAdjustmentFactor; // 0x44
	float Radius; // 0x48
	bool bSingleInstanceModeOverrideRadius; // 0x4c
	float SingleInstanceModeRadius; // 0x50
	EFoliageScaling Scaling; // 0x54
	FFloatInterval ScaleX; // 0x58
	FFloatInterval ScaleY; // 0x60
	FFloatInterval ScaleZ; // 0x68
	FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x70
	FoliageVertexColorMask VertexColorMask; // 0xa0
	float VertexColorMaskThreshold; // 0xa4
	char VertexColorMaskInvert : 1; // 0xa8
	FFloatInterval ZOffset; // 0xac
	char AlignToNormal : 1; // 0xb4
	float AlignMaxAngle; // 0xb8
	char RandomYaw : 1; // 0xbc
	float RandomPitchAngle; // 0xc0
	FFloatInterval GroundSlopeAngle; // 0xc4
	FFloatInterval Height; // 0xcc
	TArray<FName> LandscapeLayers; // 0xd8
	float MinimumLayerWeight; // 0xe8
	TArray<FName> ExclusionLandscapeLayers; // 0xf0
	float MinimumExclusionLayerWeight; // 0x100
	FName LandscapeLayer; // 0x104
	char CollisionWithWorld : 1; // 0x110
	FVector CollisionScale; // 0x114
	FBoxSphereBounds MeshBounds; // 0x120
	FVector LowBoundOriginRadius; // 0x13c
	EComponentMobility Mobility; // 0x148
	FInt32Interval CullDistance; // 0x14c
	char bEnableStaticLighting : 1; // 0x154
	char CastShadow : 1; // 0x154
	char bAffectDynamicIndirectLighting : 1; // 0x154
	char bAffectDistanceFieldLighting : 1; // 0x154
	char bCastDynamicShadow : 1; // 0x154
	char bCastStaticShadow : 1; // 0x154
	char bCastShadowAsTwoSided : 1; // 0x154
	char bReceivesDecals : 1; // 0x154
	char bOverrideLightMapRes : 1; // 0x155
	int32_t OverriddenLightMapRes; // 0x158
	ELightmapType LightmapType; // 0x15c
	char bUseAsOccluder : 1; // 0x160
	FBodyInstance BodyInstance; // 0x168
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x280
	FLightingChannels LightingChannels; // 0x281
	char bRenderCustomDepth : 1; // 0x284
	int32_t CustomDepthStencilValue; // 0x288
	int32_t TranslucencySortPriority; // 0x28c
	float CollisionRadius; // 0x290
	float ShadeRadius; // 0x294
	int32_t NumSteps; // 0x298
	float InitialSeedDensity; // 0x29c
	float AverageSpreadDistance; // 0x2a0
	float SpreadVariance; // 0x2a4
	int32_t SeedsPerStep; // 0x2a8
	int32_t DistributionSeed; // 0x2ac
	float MaxInitialSeedOffset; // 0x2b0
	bool bCanGrowInShade; // 0x2b4
	bool bSpawnsInShade; // 0x2b5
	float MaxInitialAge; // 0x2b8
	float MaxAge; // 0x2bc
	float OverlapPriority; // 0x2c0
	FFloatInterval ProceduralScale; // 0x2c4
	FRuntimeFloatCurve ScaleCurve; // 0x2d0
	int32_t ChangeCount; // 0x358
	char ReapplyDensity : 1; // 0x35c
	char ReapplyRadius : 1; // 0x35c
	char ReapplyAlignToNormal : 1; // 0x35c
	char ReapplyRandomYaw : 1; // 0x35c
	char ReapplyScaling : 1; // 0x35c
	char ReapplyScaleX : 1; // 0x35c
	char ReapplyScaleY : 1; // 0x35c
	char ReapplyScaleZ : 1; // 0x35c
	char ReapplyRandomPitchAngle : 1; // 0x35d
	char ReapplyGroundSlope : 1; // 0x35d
	char ReapplyHeight : 1; // 0x35d
	char ReapplyLandscapeLayers : 1; // 0x35d
	char ReapplyZOffset : 1; // 0x35d
	char ReapplyCollisionWithWorld : 1; // 0x35d
	char ReapplyVertexColorMask : 1; // 0x35d
	char bEnableDensityScaling : 1; // 0x35d
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x360
	int32_t VirtualTextureCullMips; // 0x370
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x374
};

struct UDistributionFloatConstantCurve {
	FInterpCurveFloat ConstantCurve; // 0x40
};

struct UDBDClipRegionComponent {
	TArray<FAffectedMaterialAndVariant> AffectedMaterialsAndVariants; // 0x210
};

struct UUMGPerkSelectionPopup {
	UPerkSelectionSlotWidget* LargePerkSelectionSlot; // 0x3e8
	UPerkSelectionSlotWidget* FirstSmallSlot; // 0x3f0
	UPerkSelectionSlotWidget* SecondSmallSlot; // 0x3f8
	UImage* PictureCharacterBackground; // 0x400
	UCanvasPanel* SelectablePerksContainer; // 0x408
	TSoftClassPtr<UObject> UMGPerkSelectionSlotWidget; // 0x410
	UVerticalBox* SmallSlotContainer; // 0x440
	URichTextBlock* RewardSubTitle; // 0x448
	URichTextBlock* PerkSelectionTitle; // 0x450
	UCanvasPanel* NoPerksContainer; // 0x458
	URichTextBlock* AcquireMorePerksByText; // 0x460
	URichTextBlock* AcquireMorePerksByOption1Text; // 0x468
	URichTextBlock* AcquireMorePerksByOption2Text; // 0x470
	UUMGCharacterPrestigeIcon* PrestigeIcon; // 0x478
	TArray<UPerkSelectionSlotWidget*> _selectablePerk; // 0x490
};

struct UTimelineComponent {
	FTimeline TheTimeline; // 0xb8
	char bIgnoreTimeDilation : 1; // 0x160
};

struct UEndTurnCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UEventOccurredBetweenQEEvaluator {
	FGameplayTag _middleEvent; // 0xa0
	bool outerEventsDifferentTargets; // 0xac
};

struct UBuiltToLast {
	float _refillPercentage[0x3]; // 0x3d0
	float _hideDuration[0x3]; // 0x3dc
	char _numberOfTimesPerkTriggered; // 0x3e8
};

struct UCanvasRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xf0
	TWeakObjectPtr<UWorld> World; // 0x100
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x108
};

struct UMultiLineEditableTextBox {
	FText Text; // 0x148
	FText HintText; // 0x160
	FDelegate HintTextDelegate; // 0x178
	FEditableTextBoxStyle WidgetStyle; // 0x190
	FTextBlockStyle TextStyle; // 0x9f0
	bool bIsReadOnly; // 0xc78
	bool AllowContextMenu; // 0xc79
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xc7a
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xc7b
	USlateWidgetStyleAsset* Style; // 0xc80
	FSlateFontInfo Font; // 0xc88
	FLinearColor ForegroundColor; // 0xce0
	FLinearColor BackgroundColor; // 0xcf0
	FLinearColor ReadOnlyForegroundColor; // 0xd00
	FMulticastInlineDelegate OnTextChanged; // 0xd10
	FMulticastInlineDelegate OnTextCommitted; // 0xd20
};

struct UMeshSelectionToolProperties {
	EMeshSelectionToolPrimaryMode SelectionMode; // 0x58
	float AngleTolerance; // 0x5c
	bool bHitBackFaces; // 0x60
	bool bShowWireframe; // 0x61
	EMeshFacesColorMode FaceColorMode; // 0x64
};

struct UAkAndroidInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UAISkill_InteractionTeleportEthereal_Blink {
	float StartBlinkAtWarpLocationRange; // 0x1d8
	float ValidateBlinkWarpRange; // 0x1dc
	float BlinkAboveSavedPathLength; // 0x1e0
	float BlinkIfTargetWillBeInRange; // 0x1e4
};

struct UWidgetInteractionComponent {
	FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x210
	int32_t VirtualUserIndex; // 0x230
	float PointerIndex; // 0x234
	ECollisionChannel TraceChannel; // 0x238
	float InteractionDistance; // 0x23c
	EWidgetInteractionSource InteractionSource; // 0x240
	bool bEnableHitTesting; // 0x241
	bool bShowDebug; // 0x242
	FLinearColor DebugColor; // 0x244
	FHitResult CustomHitResult; // 0x2d0
	FVector2D LocalHitLocation; // 0x360
	FVector2D LastLocalHitLocation; // 0x368
	UWidgetComponent* HoveredWidgetComponent; // 0x370
	FHitResult LastHitResult; // 0x378
	bool bIsHoveredWidgetInteractable; // 0x408
	bool bIsHoveredWidgetFocusable; // 0x409
	bool bIsHoveredWidgetHitTestVisible; // 0x40a
};

struct UToastNotificationScreenUMG {
	UUMGToastNotificationScreen* _toastNotificationScreen; // 0x168
};

struct UParticleModuleBeamSource {
	Beam2SourceTargetMethod SourceMethod; // 0x38
	FName SourceName; // 0x3c
	char bSourceAbsolute : 1; // 0x48
	FRawDistributionVector source; // 0x50
	char bLockSource : 1; // 0x98
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x9c
	FRawDistributionVector SourceTangent; // 0xa0
	char bLockSourceTangent : 1; // 0xe8
	FRawDistributionFloat SourceStrength; // 0xf0
	char bLockSourceStength : 1; // 0x120
};

struct UMaterialExpressionBlendMaterialAttributes {
	FMaterialAttributesInput A; // 0x48
	FMaterialAttributesInput B; // 0x68
	FExpressionInput alpha; // 0x88
	EMaterialAttributeBlend PixelAttributeBlendType; // 0xa4
	EMaterialAttributeBlend VertexAttributeBlendType; // 0xa5
};

struct UDatasmithFBXSceneImportData {
	bool bGenerateLightmapUVs; // 0x30
	FString TexturesDir; // 0x38
	char IntermediateSerialization; // 0x48
	bool bColorizeMaterials; // 0x49
};

struct UBTTask_MakeNoise {
	float Loudnes; // 0x78
};

struct UBTTask_FleeMoveTo {
	float InScrambleMovementMinDistance; // 0x160
	float OutScrambleMovementMinDistance; // 0x164
	float InScrambleMovementInterval; // 0x168
	float LoopScrambleMovementInterval; // 0x16c
	float LoopScrambleMovementRandomDeviation; // 0x170
	float CrouchWithinLastEvadeLoopPointRadius; // 0x174
};

struct UCorruptIntervention {
	char _blockedGeneratorCount[0x3]; // 0x3d0
	float _generatorBlockDuration[0x3]; // 0x3d4
	FLinearColor _generatorAuraColorForKiller; // 0x3e0
	TArray<AGenerator*> _blockedGenerators; // 0x3f0
};

struct UHasFlag {
	FGameplayTag _flag; // 0xe8
};

struct UAISlasherMoveToGrabSurvivorBehaviour {
	UAISlasherMoveToGrabSurvivorBehaviourData* _behaviourData; // 0x58
	ASlasherPlayer* _slasherPlayer; // 0x60
	ADBDAIPlayerController* _slasherAIPlayerController; // 0x68
};

struct UUnhook {
	TArray<USceneComponent*> _snapPoints; // 0x6d8
	FDBDTunableRowHandle _unhookLoudNoiseRange; // 0x6e8
	ADBDPlayer* _unhookingPlayer; // 0x718
	float _hookedCharacterSnapTime; // 0x720
	ACamperPlayer* _playerBeingUnhooked; // 0x728
};

struct UIridescentBrickAddon {
	UStatusEffect* _undetectableStatusEffect; // 0x2d0
};

struct UFireHarpoonRifleInteraction {
	FMulticastInlineDelegate OnFireHarpoon; // 0x5b0
	FMulticastInlineDelegate OnHitPlayer; // 0x5c0
	EFireHarpoonRifleAimingInteractionSubState _aimingSubState; // 0x5d1
	AHarpoonProjectile* _harpoon; // 0x5d8
	ADBDPlayer* _collector; // 0x5e0
	FDBDTunableRowHandle _aimDownSightDuration; // 0x5e8
	FDBDTunableRowHandle _aimDownSightZoom; // 0x610
	FDBDTunableRowHandle _aimDownSightMousePitchScaleMultiplier; // 0x638
	FDBDTunableRowHandle _aimDownSightMouseYawScaleMultiplier; // 0x660
	FDBDTunableRowHandle _aimDownSightGamepadPitchScaleMultiplier; // 0x688
	FDBDTunableRowHandle _aimDownSightGamepadYawScaleMultiplier; // 0x6b0
	UCurveFloat* _aimDownSightGamepadPitchCurve; // 0x6d8
	UCurveFloat* _aimDownSightGamepadYawCurve; // 0x6e0
	FDBDTunableRowHandle _aimDownSightRotationScaleAdjustmentTime; // 0x6e8
	FTunableStat _aimDownSightMovementSpeedMultiplier; // 0x710
	FDBDTunableRowHandle _fireDuration; // 0x790
	FDBDTunableRowHandle _fireRotationScaleMultiplier; // 0x7b8
	FDBDTunableRowHandle _fireRotationScaleAdjustmentTime; // 0x7e0
	FDBDTunableRowHandle _fireMovementSpeedMultiplier; // 0x808
	FDBDTunableRowHandle _longRangeShotMinDistance; // 0x830
	FDBDTunableRowHandle _successMovementSpeedMultiplier; // 0x860
	FDBDTunableRowHandle _missMovementSpeedMultiplier; // 0x888
	FTunableStat _missShotCooldownDuration; // 0x8b0
	FDBDTunableRowHandle _nearMissShotMaxDistance; // 0x930
	FDBDTunableRowHandle _successShotDuration; // 0x958
};

struct AGlyph {
	TArray<ADBDPlayer*> _playersWithVisibility; // 0x338
	TArray<ADBDPlayer*> _oldPlayersWithVisibility; // 0x348
	FName _specialBehaviourId; // 0x358
	EAllowedPlayerType _allowedPlayerType; // 0x364
	TWeakObjectPtr<ADBDPlayer> lastPlayerToStartInteraction; // 0x368
	UGlyphInteraction* _glyphInteraction; // 0x370
	UGlyphInteraction* _glyphInteractionKiller; // 0x378
	UChargeableComponent* _glyphInteractionChargeable; // 0x380
	UChargeableComponent* _glyphInteractionChargeableKiller; // 0x388
	UInteractor* _glyphInteractor; // 0x390
	UPrimitiveComponent* _glyphInteractionZone; // 0x398
	UDBDOutlineComponent* _outlineComponent; // 0x3a0
	UStaticMeshComponent* _glyphMesh; // 0x3a8
	UNearTrackedActorComponent* _nearTrackedActorComponent; // 0x3b0
	FGameplayTag _associatedSurvivorScoreEvent; // 0x3b8
	FGameplayTag _associatedKillerScoreEvent; // 0x3c4
	FDBDTunableRowHandle _glyphInteractionSecondsToCharge; // 0x3d0
	FDBDTunableRowHandle _glyphInteractionSecondsToChargeKiller; // 0x3f8
	FDBDTunableRowHandle _glyphDetectionRange; // 0x420
	FLinearColor _auraColorWhileInteracting; // 0x448
	TArray<ADBDPlayer*> _playersThatInteractedWithGlyph; // 0x458
};

struct UPhaseWalkingComponent {
	FMulticastInlineDelegate OnPhaseWalkInfoReceived; // 0xb8
	FMulticastInlineDelegate OnGameEndedVFX; // 0xc8
	FMulticastInlineDelegate TriggerSurvivorVisibilityVFX; // 0xd8
	FMulticastInlineDelegate TriggerKillerVisibilityVFX; // 0xe8
	FMulticastInlineDelegate OnMaxActivePhaseWalkCharges; // 0xf8
	AActor* _huskClass; // 0x108
	FTagStateBool _isActivePhaseWalking; // 0x110
	FTagStateBool _isPassivePhaseWalking; // 0x140
	bool _isInteractionPhaseWalking; // 0x170
	AActor* _husk; // 0x178
	FDBDBidirectionalTimer _activePhaseWalkCharges; // 0x180
	bool _survivorsAreVisible; // 0x1d0
	int32_t _passivePhaseWalkHusksCount; // 0x220
	FTunableStat _activePhaseWalkChargeGainRate; // 0x228
	FTunableStat _passivePhaseWalkDuration; // 0x2a8
	FDBDTunableRowHandle _passivePhaseWalkFirstCooldownDuration; // 0x328
	FTunableStat _passivePhaseWalkCooldownDurationMin; // 0x350
	FTunableStat _passivePhaseWalkCooldownDurationMax; // 0x3d0
	FTunableStat _activePhaseWalkMaxCharge; // 0x450
	FDBDTunableRowHandle _activePhaseWalkMaxAcceleration; // 0x4d0
	FDBDTunableRowHandle _defaultMaxAcceleration; // 0x4f8
};

struct UAnimCompress_RemoveTrivialKeys {
	float MaxPosDiff; // 0x48
	float MaxAngleDiff; // 0x4c
	float MaxScaleDiff; // 0x50
};

struct UUITweenInstance {
	FMulticastInlineDelegate TweenCompletedDelegate; // 0x30
	FMulticastInlineDelegate TweenUpdatedDelegate; // 0x40
	TArray<UUITweenMaterialScalarProperties*> _materialScalarProperties; // 0xe8
	TArray<UUITweenMaterialVectorProperties*> _materialVectorProperties; // 0xf8
};

struct UAkMediaAsset {
	uint32_t ID; // 0x30
	TArray<UObject*> UserData; // 0x38
	UAkMediaAssetData* CurrentMediaAssetData; // 0x48
};

struct UNoWayOut {
	float _exitGatePanelBlockBaseDuration[0x3]; // 0x3d0
	float _exitGatePanelBlockDurationPerToken[0x3]; // 0x3dc
	TArray<ACamperPlayer*> _hookedSurvivors; // 0x3e8
};

struct UPhysicalMaterial {
	float Friction; // 0x30
	EFrictionCombineMode FrictionCombineMode; // 0x34
	bool bOverrideFrictionCombineMode; // 0x35
	float Restitution; // 0x38
	EFrictionCombineMode RestitutionCombineMode; // 0x3c
	bool bOverrideRestitutionCombineMode; // 0x3d
	float Density; // 0x40
	float RaiseMassToPower; // 0x44
	float DestructibleDamageThresholdScale; // 0x48
	UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x50
	EPhysicalSurface SurfaceType; // 0x58
	float TireFrictionScale; // 0x5c
	TArray<FTireFrictionScalePair> TireFrictionScales; // 0x60
	float OcclusionAffect; // 0x70
	bool IgnoreComponentOcclussionAffect; // 0x74
};

struct UK26FireCrowProjectileInteractionDefinition {
	FMulticastInlineDelegate OnProjectileFired; // 0x5b0
	UK26CooldownInteractionDefinition* _cooldownInteraction; // 0x5c0
	UK26AmmoHandlerComponent* _ammoHandler; // 0x5c8
	UK26PathHandlerComponent* _pathHandler; // 0x5d0
};

struct UBlueprint {
	UObject* ParentClass; // 0x58
	EBlueprintType BlueprintType; // 0x60
	char bRecompileOnLoad : 1; // 0x61
	char bHasBeenRegenerated : 1; // 0x61
	char bIsRegeneratingOnLoad : 1; // 0x61
	int32_t BlueprintSystemVersion; // 0x64
	USimpleConstructionScript* SimpleConstructionScript; // 0x68
	TArray<UActorComponent*> ComponentTemplates; // 0x70
	TArray<UTimelineTemplate*> Timelines; // 0x80
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x90
	UInheritableComponentHandler* InheritableComponentHandler; // 0xa0
};

struct UParticleModuleRotation {
	FRawDistributionFloat StartRotation; // 0x38
};

struct UPolygonSelectionMechanic {
	UPolygonSelectionMechanicProperties* Properties; // 0x58
};

struct UMovieScene2DTransformSection {
	FMovieScene2DTransformMask TransformMask; // 0xe8
	FMovieSceneFloatChannel Translation[0x2]; // 0xf0
	FMovieSceneFloatChannel Rotation; // 0x230
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d0
	FMovieSceneFloatChannel Shear[0x2]; // 0x410
};

struct UOnboardingTutorialSubPresenter {
	TScriptInterface<IOnboardingTutorialViewInterface> _onboardingTutorialWidget; // 0xb8
};

struct UTrapCamperInteraction {
	TArray<FString> _nonOverridableInteractions; // 0x5b0
	FName _trapAttachSocket; // 0x5c0
	FName _updateMontageID; // 0x5cc
	FName _updateNoScreamMontageID; // 0x5d8
	FDBDTunableRowHandle _loudNoiseRangeTunable; // 0x5e8
	FDBDTunableRowHandle _hemorrhageEffectDurationTunable; // 0x610
};

struct UDBDAIPerceptionComponent {
	TMap<UObject*, UObject*> _objOverridingSenses; // 0x1a8
	TArray<UAISenseConfig*> _originalSenseConfigs; // 0x1f8
	TArray<FAIDetectedStimulus> _detectedHostileStimuli; // 0x208
	FAIDetectedStimulus _bestDetectedHostileStimulus; // 0x218
	FAIDetectedStimulus _lastBestDetectedHostileStimulusInMemory; // 0x274
	FAITunableParameter _activePhaseWalkingNoiseMaxRange; // 0x330
	float ThreatDividerForNonControlledActor; // 0x340
	float HighThreatDistanceForNonControlledActor; // 0x344
	float TerrorDistanceMultiplierForNonControlledActor; // 0x348
};

struct UFieldSystemMetaDataProcessingResolution {
	EFieldResolutionType ResolutionType; // 0xb8
};

struct UGizmoTransformProxyTransformSource {
	UTransformProxy* Proxy; // 0x50
};

struct UAISkill_SkillCheck {
	FAIRoll RegularZoneRoll; // 0xc0
	FAIRoll BonusZoneRoll; // 0xe4
};

struct ALandscapeStreamingProxy {
	LazyObjectProperty LandscapeActor; // 0x558
};

struct UTileView {
	float EntryHeight; // 0x388
	float EntryWidth; // 0x38c
	EListItemAlignment TileAlignment; // 0x390
	bool bWrapHorizontalNavigation; // 0x391
};

struct UAISkill_FindCollectable_Searchable {
	float SearchIntervalAfterOpenSearchable; // 0x120
	float OpenSearchableRelevancyDuration; // 0x124
	ASearchable* _relevantSearchable; // 0x130
};

struct ADebugIndicator {
	UStaticMeshComponent* _staticMeshComponent; // 0x230
	UDBDOutlineComponent* _outlineComponent; // 0x238
};

struct UParticleModuleLifetime_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UNiagaraScript {
	ENiagaraScriptUsage Usage; // 0x30
	int32_t UsageIndex; // 0x34
	FGuid UsageId; // 0x38
	FNiagaraParameterStore RapidIterationParameters; // 0x48
	FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0x100
	TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1d8
	FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1e8
	FNiagaraVMExecutableData CachedScriptVM; // 0x3e0
	TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x508
	TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x518
};

struct UNiagaraSpriteRendererProperties {
	UMaterialInterface* Material; // 0x58
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60
	ENiagaraSpriteAlignment Alignment; // 0x90
	ENiagaraSpriteFacingMode FacingMode; // 0x91
	FVector2D PivotInUVSpace; // 0x94
	ENiagaraSortMode SortMode; // 0x9c
	FVector2D SubImageSize; // 0xa0
	char bSubImageBlend : 1; // 0xa8
	char bRemoveHMDRollInVR : 1; // 0xa8
	char bSortOnlyWhenTranslucent : 1; // 0xa8
	float MinFacingCameraBlendDistance; // 0xac
	float MaxFacingCameraBlendDistance; // 0xb0
	FNiagaraVariableAttributeBinding PositionBinding; // 0xb8
	FNiagaraVariableAttributeBinding ColorBinding; // 0x148
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1d8
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x268
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x2f8
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x388
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x418
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x4a8
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x538
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x5c8
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x658
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6e8
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x778
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x808
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x898
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x928
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x9b8
};

struct UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x478
	int32_t PreviousLODLevel; // 0x47c
	int32_t MinLOD; // 0x480
	int32_t SubDivisionStepSize; // 0x484
	UStaticMesh* StaticMesh; // 0x490
	FColor WireframeColorOverride; // 0x498
	char bEvaluateWorldPositionOffset : 1; // 0x49c
	char bOverrideWireframeColor : 1; // 0x49c
	char bOverrideMinLod : 1; // 0x49c
	char bOverrideNavigationExport : 1; // 0x49c
	char bForceNavigationObstacle : 1; // 0x49c
	char bDisallowMeshPaintPerInstance : 1; // 0x49c
	char bIgnoreInstanceForTextureStreaming : 1; // 0x49c
	char bOverrideLightMapRes : 1; // 0x49c
	char bCastDistanceFieldIndirectShadow : 1; // 0x49d
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x49d
	char bUseSubDivisions : 1; // 0x49d
	char bUseDefaultCollision : 1; // 0x49d
	char bReverseCulling : 1; // 0x49d
	int32_t OverriddenLightMapRes; // 0x4a0
	float DistanceFieldIndirectShadowMinVisibility; // 0x4a4
	float DistanceFieldSelfShadowBias; // 0x4a8
	float StreamingDistanceMultiplier; // 0x4ac
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x4b0
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x4c0
	FLightmassPrimitiveSettings LightmassSettings; // 0x4d0
};

struct UWmfMediaSettings {
	bool AllowNonStandardCodecs; // 0x30
	bool LowLatency; // 0x31
	bool NativeAudioOut; // 0x32
	bool HardwareAcceleratedVideoDecoding; // 0x33
};

struct UMovieSceneByteSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct ADBDPlayer {
	bool AllowInterrupting; // 0x5b8
	float MinFallHeight; // 0x5bc
	bool IsInterruptable; // 0x5c0
	bool AllowNavigationInput; // 0x5c1
	bool AllowNavigationBackwardInput; // 0x5c2
	bool AllowTurningInput; // 0x5c3
	bool AllowPitchInput; // 0x5c4
	bool AllowStrafeInput; // 0x5c5
	bool IsInInteractionUpdate; // 0x5c6
	bool IsInteractionChargeCompleted; // 0x5c7
	float PitchLimitLower; // 0x5c8
	float PitchLimitUpper; // 0x5cc
	FVector StrafingOffset; // 0x5d0
	float PelvisHeight; // 0x5dc
	float PelvisHeightForPounceOnStandingCamper; // 0x5e0
	float PelvisHeightForPounceOnCrouchingCamper; // 0x5e4
	FMulticastInlineDelegate Authority_OnAttackedDelegate; // 0x628
	FMulticastInlineDelegate OnDamageTargetDelegate; // 0x638
	FMulticastInlineDelegate OnSensed; // 0x648
	FMulticastInlineDelegate OnAnimNotify_Pickup; // 0x658
	FMulticastInlineDelegate OnAnimNotify_Release; // 0x668
	FMulticastInlineDelegate Authority_OnSecondaryActionInput; // 0x678
	FMulticastInlineDelegate OnFirstPersonModeChanged; // 0x688
	FMulticastInlineDelegate OnDreamworldComponentSet; // 0x698
	FMulticastInlineDelegate OnForwardInputLockedChanged; // 0x6a8
	USpringArmComponent* CameraBoom; // 0x6b8
	bool ForceSkillChecks; // 0x6f0
	FTransform IKLeftHandTransform; // 0x700
	FTransform IKRightHandTransform; // 0x730
	float CameraResetSpeed; // 0x760
	UCurveFloat* BlinkFOVCurve; // 0x768
	float CurrentBlinkDistance; // 0x770
	float CurrentBlinkChargePercent; // 0x774
	float AverageSpeedBufferTime; // 0x778
	float AlmostCurrentSpeedBufferTime; // 0x77c
	UCurveFloat* GamepadYawCurve; // 0x780
	UCurveFloat* GamepadPitchCurve; // 0x788
	UCurveFloat* GamepadSettingToYawRateCurve; // 0x790
	UCurveFloat* GamepadSettingToPitchRateCurve; // 0x798
	UCurveFloat* JoyconSettingToYawRateCurve; // 0x7a0
	UCurveFloat* JoyconSettingToPitchRateCurve; // 0x7a8
	FMulticastInlineDelegate OnIsCrouchedChanged; // 0x7b0
	FMulticastInlineDelegate OnRunningAndMovingChanged; // 0x7c0
	FMulticastInlineDelegate OnLocallyObservedChangedForPlayer; // 0x7d8
	UCameraComponent* Camera; // 0x7e8
	UMaterialHelper* MaterialHelper; // 0x7f0
	APlayerInteractable* Interactable; // 0x828
	UCharacterInventoryComponent* _characterInventoryComponent; // 0x848
	FName CarryJointName; // 0x850
	float _pitchOffsetForInteractionPriority; // 0x85c
	UBoxOcclusionQueryComponent* _renderedPixelCounter; // 0x860
	UBoxComponent* _standingOcclusionBox; // 0x868
	UBoxComponent* _crouchingOcclusionBox; // 0x870
	UActivatorComponent* _activator; // 0x878
	bool IsInteracting; // 0x880
	float _aiCanBeSeenTestCrouchScale; // 0x884
	float _aiCanBeSeenTestRightOffset; // 0x888
	float _aiCanBeSeenTestHighOffset; // 0x88c
	float _aiCanBeSeenTestLowOffset; // 0x890
	float ClearPathTestRadiusMultiplier; // 0x894
	float ClearPathTestHeightMultiplier; // 0x898
	float LocationClearTestRadiusMultiplier; // 0x89c
	float LocationClearTestHeightMultiplier; // 0x8a0
	float ClearPathTestStepHeight; // 0x8b8
	float MouseTurnSpeedMultiplier; // 0x8bc
	float MouseLookUpSpeedMultiplier; // 0x8c0
	USoundCue* DeathSound; // 0x8c8
	ECamperState CurrentCamperState; // 0x8d0
	FName CollectableAttachPoint; // 0x8d4
	UStateMachine* _stateMachine; // 0x8e0
	UPlayerInteractionHandler* _interactionHandler; // 0x8e8
	UMontagePlayer* _montagePlayer; // 0x8f0
	UPerkManager* _perkManager; // 0x8f8
	UDBDPlayerData* _playerData; // 0x900
	UAxisFlickMasher* _wiggleAxisFlickMasher; // 0x908
	APlayerInteractable* _interactable; // 0x910
	ADBDPlayer* _guidingPlayer; // 0x968
	ADBDPlayer* _interactingPlayer; // 0x978
	EAttackSubstate _nextAttackSubstate; // 0x9ac
	TArray<ADBDPlayer*> _hitTargets; // 0x9b0
	UCharacterDreamworldComponent* _dreamworldComponent; // 0x9c0
	UCharacterChaseVisualComponent* _characterChaseVisualComponent; // 0x9c8
	UCameraHandlerComponent* _cameraHandlerComponent; // 0x9d0
	USceneComponent* _itemDropOffPosition; // 0x9d8
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x9e0
	TArray<AActor*> _ignoreActors; // 0x9e8
	TArray<FEffectCameraTypeSettings> EffectCameraTypeSettings; // 0x9f8
	UChargeableComponent* _blindingChargeableComponent; // 0xa30
	bool _shouldUpdateStateMachineDriverOnPossessed; // 0xac8
	UBlindableComponent* _blindableComponent; // 0xad0
	float _tutorialChargeableInteractionMultiplier; // 0xadc
	UPollableEventListener* _eventListener; // 0xae8
	UChaseComponent* _chaseComponent; // 0xaf8
	UZoneDetectorComponent* _meatHookZoneDetector; // 0xb00
	UZoneDetectorComponent* _basementZoneDetector; // 0xb08
	UInteractionDefinition* _bookmarkedInteraction; // 0xba8
	TMap<EDetectionZone, UPrimitiveComponent*> _detectionZoneMap; // 0xbb0
	UAuthoritativeMovementComponent* _authoritativeMovementComponent; // 0xc60
	float _screenAspectRatio; // 0xf64
	UGameplayTagContainerComponent* _objectState; // 0xf88
	UAudioFXComponent* _audioFXComponent; // 0xf90
	UPlayerPerspectiveComponent* _playerPerspectiveComponent; // 0xf98
	UCharacterSightComponent* _characterSightComponent; // 0xfa8
	UCharacterSightableComponent* _characterSightableComponent; // 0xfb8
	UInteractionDetectorComponent* _interactionDetectorComponent; // 0xfd0
	UPrimitivesRegistererComponent* _clippablePrimitivesRegistererComponent; // 0xfd8
	UClippableProviderComponent* _clippableProviderComponent; // 0xfe0
	UDynamicCapsuleResizerComponent* _dynCapsuleResizer; // 0xfe8
	UPlayerGameRelevancyComponent* _playerGameRelevancyComponent; // 0xff0
	UContextualQuestComponent* _contextualQuestComponent; // 0xff8
	UActorComponent* _questEventHandler; // 0x1020
	UChargeableProgressProviderComponent* _presentationChargeableProgressComponent; // 0x1028
	UCurveFloat* _currentGamepadYawCurve; // 0x1048
	UCurveFloat* _currentGamepadPitchCurve; // 0x1050
	ADBDPlayerState* _associatedPlayerStateCache; // 0x1058
	UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler; // 0x1068
};

struct USignificanceManager {
	FSoftClassPath SignificanceManagerClassName; // 0x110
};

struct AAkAmbientSound {
	UAkAudioEvent* AkAudioEvent; // 0x230
	UAkComponent* AkComponent; // 0x238
	bool StopWhenOwnerIsDestroyed; // 0x240
	bool AutoPost; // 0x241
};

struct UParticleModuleVelocityInheritParent {
	FRawDistributionVector Scale; // 0x40
};

struct UInAppPurchaseQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UStatusEffect {
	FGameplayModifierData ModifierData; // 0x268
	bool shouldDisplay; // 0x298
	float customParam; // 0x29c
	bool _removeOnRemainingLifetimeEnded; // 0x2a0
	bool BroadcastAsStatusEffectWhenApplicable; // 0x2a1
	bool BroadcastAsStatusEffectByActivationTimer; // 0x2a2
	bool BroadcastAsStatusEffectWhenLifeRemains; // 0x2a3
	bool BroadcastAsStatusEffectByFunction; // 0x2a4
	bool BroadcastAsStatusEffectAlways; // 0x2a5
	bool BroadcastOriginatorGameEventNotificationWhenFirstApplicable; // 0x2a6
	FStatusEffectInitializationData _statusInitializationData; // 0x2a8
	TArray<TSoftClassPtr<UObject>> _nonStackingEffects; // 0x308
};

struct UKillerRedStainUpdateStrategy {
	UCurveFloat* _stealthRatioToRedStainIntensityCurve; // 0xb8
	FGameplayTagContainer _hideRedStainStateTags; // 0xc0
};

struct UUMGToastNotificationScreen {
	TSoftClassPtr<UObject> NotificationToast; // 0x300
	TSoftClassPtr<UObject> InvitationPartyToast; // 0x330
	UVerticalBox* ToastsContainer; // 0x360
	TMap<uint32_t, UUMGBaseToastWidget*> _toastsDisplayedOnScreen; // 0x398
};

struct UBlackboardKeyType_String {
	FString StringValue; // 0x38
};

struct UMaxEventCountQEEvaluator {
	TArray<FGameplayTag> _incrementEventCount; // 0x90
	TArray<FGameplayTag> _decrementEventCount; // 0xa0
	TArray<FGameplayTag> _stopEventCount; // 0xb0
};

struct UDBDAtlantaDesignTunables {
	TSoftClassPtr<UObject> AtlantaStructuredDataClass; // 0x30
	UDBDAtlantaStructuredData* AtlantaStructuredData; // 0x60
	TSoftClassPtr<UObject> CloseNoiseIndicatorTemplate; // 0x68
	TSoftClassPtr<UObject> ExitOpenedIndicatorTemplate; // 0x98
	TSoftClassPtr<UObject> GeneratorIndicatorTemplate; // 0xc8
	TSoftClassPtr<UObject> HookedIndicatorTemplate; // 0xf8
	TSoftClassPtr<UObject> KillerCuesIndicatorTemplate; // 0x128
	TSoftClassPtr<UObject> GlobalSoundIndicatorTemplate; // 0x158
	TSoftClassPtr<UObject> DirectionalTerrorRadiusIndicatorTemplate; // 0x188
	TSoftClassPtr<UObject> LoudNoiseIndicatorTemplate; // 0x1b8
	TSoftClassPtr<UObject> StealthBrokenIndicatorTemplate; // 0x1e8
	TSoftClassPtr<UObject> SafeZoneManagerTemplate; // 0x218
	TSoftClassPtr<UObject> UMGRoleSelectionScreenClass; // 0x248
	TSoftClassPtr<UObject> UMGAtlantaTutorialScreenClass; // 0x278
	TSoftClassPtr<UObject> UMGNavigationScreenClass; // 0x2a8
	TSoftClassPtr<UObject> UMGInboxScreenClass; // 0x2d8
	TSoftClassPtr<UObject> SharedAuthenticationComponent; // 0x308
	TSoftClassPtr<UObject> UMGPanelScreenClass; // 0x338
	TSoftClassPtr<UObject> UMGLobbyScreenClass; // 0x368
	TSoftObjectPtr<UStaticMesh> AtlantaChaseVignetteStaticMesh; // 0x398
	TSoftObjectPtr<UMaterialInstanceConstant> AtlantaChaseVignetteMaterialInstance; // 0x3c8
	TSoftClassPtr<UObject> UMGGenericPopupClass; // 0x3f8
	TSoftClassPtr<UObject> UMGLevelUpPopupClass; // 0x428
	TSoftClassPtr<UObject> UMGTutorialPopupClass; // 0x458
	TSoftClassPtr<UObject> UMGTallyScreenClass; // 0x488
	TSoftClassPtr<UObject> UMGLoadingScreenWidgetClass; // 0x4b8
	TSoftClassPtr<UObject> UMGSplashScreenClass; // 0x4e8
	TSoftClassPtr<UObject> UMGCommandDebugButtonClass; // 0x518
	TSoftClassPtr<UObject> UMGAtlantaObjectiveClass; // 0x548
	TSoftClassPtr<UObject> UMGStoreScreenClass; // 0x578
	TSoftClassPtr<UObject> UMGCustomizationScreenClass; // 0x5a8
	TSoftClassPtr<UObject> UMGOverlayMenuScreenClass; // 0x5d8
	TSoftClassPtr<UObject> UMGPerkSelectionPopupClass; // 0x608
	TSoftClassPtr<UObject> UMGBloodStoreMysteryBoxPopupClass; // 0x638
	TSoftClassPtr<UObject> UMGRitualScreenClass; // 0x668
	TSoftClassPtr<UObject> UMGLoadingWidgetClass; // 0x698
	TSoftClassPtr<UObject> UMGCloseTooltipWidgetClass; // 0x6c8
	TSoftClassPtr<UObject> UMGAtlantaFriendListScreen; // 0x6f8
	TSoftClassPtr<UObject> UMGToastNotificationScreenClass; // 0x728
	TSoftClassPtr<UObject> UMGAtlantaLegalMenuScreenClass; // 0x758
	TSoftClassPtr<UObject> RankDesignTunableClass; // 0x788
	TSoftClassPtr<UObject> UMGStreamVideoWidgetClass; // 0x7b8
	FSoftObjectPath AtlantaTransitionLightEffectsScreen; // 0x7e8
	UDBDCurrencyConversionTunables* CurrencyConversionTunables; // 0x808
	TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset; // 0x810
};

struct ADBDInGameHud {
	UFont* _debugFontObj; // 0x330
	UCompetenceDebugger* _competenceDebugger; // 0x350
};

struct UNavigationQueryFilter_Player {
	int32_t MaxSearchNodes; // 0x50
};

struct UYamaokaFamilyCrest {
	float _revealDuration; // 0x298
	float _revealRange; // 0x29c
	TArray<ACamperPlayer*> _survivorsToReveal; // 0x2a0
	char _addonActivationCount; // 0x2b0
};

struct AHUD {
	APlayerController* PlayerOwner; // 0x230
	char bLostFocusPaused : 1; // 0x238
	char bShowHUD : 1; // 0x238
	char bShowDebugInfo : 1; // 0x238
	int32_t CurrentTargetIndex; // 0x23c
	char bShowHitBoxDebugInfo : 1; // 0x240
	char bShowOverlays : 1; // 0x240
	char bEnableDebugTextShadow : 1; // 0x240
	TArray<AActor*> PostRenderedActors; // 0x248
	TArray<FName> DebugDisplay; // 0x260
	TArray<FName> ToggledDebugCategories; // 0x270
	UCanvas* Canvas; // 0x280
	UCanvas* DebugCanvas; // 0x288
	TArray<FDebugTextInfo> DebugTextList; // 0x290
	AActor* ShowDebugTargetDesiredClass; // 0x2a0
	AActor* ShowDebugTargetActor; // 0x2a8
};

struct UKillerFlashlightSFXComponent {
	FAkObservedPlayerSoundLoop _targetSoundLoop; // 0xb8
	TArray<UFlashlightTargetFXComponent*> _flashlightTargets; // 0xf8
};

struct UMaterialFunctionInstance {
	UMaterialFunctionInterface* Parent; // 0x48
	UMaterialFunctionInterface* Base; // 0x50
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x58
	TArray<FVectorParameterValue> VectorParameterValues; // 0x68
	TArray<FTextureParameterValue> TextureParameterValues; // 0x78
	TArray<FFontParameterValue> FontParameterValues; // 0x88
	TArray<FStaticSwitchParameter> StaticSwitchParameterValues; // 0x98
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa8
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb8
};

struct URookieSpirit {
	int32_t _numberOfGreatSkillChecksOnGeneratorRepair; // 0x3d0
	int32_t _numberOfGeneratorRepairGreatSkillChecksRequired[0x3]; // 0x3d4
};

struct UIpConnection {
	float SocketErrorDisconnectDelay; // 0x1a98
};

struct UScrollBar {
	FScrollBarStyle WidgetStyle; // 0x128
	USlateWidgetStyleAsset* Style; // 0x640
	bool bAlwaysShowScrollbar; // 0x648
	bool bAlwaysShowScrollbarTrack; // 0x649
	EOrientation Orientation; // 0x64a
	FVector2D Thickness; // 0x64c
	FMargin Padding; // 0x654
};

struct UDemogorgonPowerItemProgressComponent {
	UPortalPlacerStateComponent* _portalPlacerState; // 0xb8
};

struct UInterpTrack {
	TArray<UInterpTrack*> SubTracks; // 0x40
	UInterpTrackInst* TrackInstClass; // 0x50
	ETrackActiveCondition ActiveCondition; // 0x58
	FString TrackTitle; // 0x60
	char bOnePerGroup : 1; // 0x70
	char bDirGroupOnly : 1; // 0x70
	char bDisableTrack : 1; // 0x70
	char bIsSelected : 1; // 0x70
	char bIsAnimControlTrack : 1; // 0x70
	char bSubTrackOnly : 1; // 0x70
	char bVisible : 1; // 0x70
	char bIsRecording : 1; // 0x70
};

struct UStateMachine {
	bool _enableJoinInProgress; // 0xc1
	TArray<uint16_t> _netStateIDStackInitial; // 0x118
};

struct UAISenseConfig_Trail {
	UAISense_Trail* Implementation; // 0x50
	float MaxRange; // 0x58
	float PeripheralVisionAngleDegrees; // 0x5c
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x60
};

struct UPlayerOverlapHISMComponent {
	int32_t _playerInfluenceRadius; // 0x6a8
	TArray<UMaterialInterface*> _playerOverlapOverrides; // 0x6b0
};

struct UAISense {
	float DefaultExpirationAge; // 0x30
	EAISenseNotifyType NotifyType; // 0x34
	char bWantsNewPawnNotification : 1; // 0x38
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x40
};

struct UDynamicContentHolder {
	FLRUTextureCache _loadedTextures; // 0x170
	TArray<FTaskContainer> _currentTasks; // 0x1d8
	ULoopBannerProvider* _marketingBannerProvider; // 0x1e8
	ULoopBannerProvider* _eventsBannerProvider; // 0x1f0
	ULoadingImagesDataProvider* _loadingImagesDataProvider; // 0x1f8
};

struct USphereReflectionCaptureComponent {
	float InfluenceRadius; // 0x2b8
	float CaptureDistanceScale; // 0x2bc
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x2c0
};

struct UBaseMediaSource {
	FName playerName; // 0x88
};

struct ACrownPillarInteractable {
	FDBDTunableRowHandle _crownPillarInteractionSecondsToCharge; // 0x350
	FDBDTunableRowHandle _crownPillarInteractionSecondsToChargeKiller; // 0x378
	FDBDTunableRowHandle _offeringEnabledAuraVisibilityDistance; // 0x3a0
	UCrownPickupInteraction* _crownPillarInteraction; // 0x3c8
	UCrownPickupInteraction* _crownPillarInteractionKiller; // 0x3d0
	UChargeableComponent* _crownPillarInteractionChargeable; // 0x3d8
	UChargeableComponent* _crownPillarInteractionChargeableKiller; // 0x3e0
	UInteractor* _crownPillarInteractor; // 0x3e8
	UPrimitiveComponent* _crownPillarInteractionZone; // 0x3f0
	UStaticMeshComponent* _crownPillarStaticMesh; // 0x3f8
	UDBDOutlineComponent* _outlineComponent; // 0x400
	UNearTrackedActorComponent* _nearTrackedActorComponent; // 0x408
	UCrownPillarOutlineUpdateStrategy* _crownPillarOutlineUpdateStrategy; // 0x410
};

struct UBTDecorator_IsNearestThan {
	FBlackboardKeySelector BBFrom; // 0x70
	FBlackboardKeySelector BBThan; // 0xa0
	float AddDistanceBuffer; // 0xd0
};

struct UGMAdaptiveShadowMapSourceSpot {
	USpotLightComponent* _spotLightComponent; // 0x2f8
};

struct UHillbillyChainsawSubAnimInstance {
	bool _isRevvingChainsaw; // 0x5b8
	bool _isRevvingChainsawCancelled; // 0x5b9
	bool _isChainsawSprinting; // 0x5ba
	bool _isWaitingForChainsaw; // 0x5bb
};

struct UDatasmithAreaLightActorTemplate {
	EDatasmithAreaLightActorType LightType; // 0x38
	EDatasmithAreaLightActorShape LightShape; // 0x39
	FVector2D Dimensions; // 0x3c
	FLinearColor Color; // 0x44
	float Intensity; // 0x54
	ELightUnits IntensityUnits; // 0x58
	float Temperature; // 0x5c
	TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x60
	bool bUseIESBrightness; // 0x90
	float IESBrightnessScale; // 0x94
	FRotator Rotation; // 0x98
	float SourceRadius; // 0xa4
	float SourceLength; // 0xa8
	float AttenuationRadius; // 0xac
};

struct UAISkill_InteractionTarget_ThrowPlague {
	FGameplayTag ProjectileDamageSickTargetTag; // 0x298
};

struct ASeasonManager {
	UDBDGameInstance* _gameInstance; // 0x230
};

struct UZombieOutlineUpdateStrategy {
	AZombieCharacter* _zombieCharacter; // 0x130
};

struct ULeaderboardFlushCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UImageSequenceProtocol_EXR {
	bool bCompressed; // 0xe0
	EHDRCaptureGamut CaptureGamut; // 0xe1
};

struct UMaterialExpressionFunctionInput {
	FExpressionInput Preview; // 0x48
	FName InputName; // 0x64
	FString Description; // 0x70
	FGuid ID; // 0x80
	EFunctionInputType inputType; // 0x90
	FVector4 PreviewValue; // 0xa0
	char bUsePreviewValueAsDefault : 1; // 0xb0
	int32_t SortPriority; // 0xb4
	char bCompilingFunctionPreview : 1; // 0xb8
};

struct USoundNodeConcatenator {
	TArray<float> InputVolume; // 0x50
};

struct UAsyncTaskDownloadImage {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFail; // 0x48
};

struct UDestroyBreakableDefinition {
	float _interactionTimePercentForDestroyEvent; // 0x5b0
	ABreakableBase* _breakable; // 0x5e0
};

struct UDemonModeComponent {
	FMulticastInlineDelegate OnDemonModeReady; // 0xb8
	FMulticastInlineDelegate OnDemonModeStarted; // 0xc8
	FMulticastInlineDelegate OnDemonModeEnded; // 0xd8
	FMulticastInlineDelegate OnDemonModeInterruptedDuringStartup; // 0xe8
	FMulticastInlineDelegate OnDemonModeInterruptedDuringEnding; // 0xf8
	FMulticastInlineDelegate OnChargeGainedAfterAttackCosmetic; // 0x108
	FMulticastInlineDelegate OnChargeGainedAfterLockerGrabCosmetic; // 0x118
	UPowerChargeComponent* _powerChargeComponent; // 0x128
	UPowerToggleComponent* _powerToggleComponent; // 0x130
	UInteractionStarterComponent* _authority_demonModeCooldownStarterComponent; // 0x138
	UInteractionDefinition* _demonModeCooldownInteraction; // 0x140
	EDemonModeState _demonModeState; // 0x17c
};

struct UMaxSameTargetQEEvaluator {
	TMap<TWeakObjectPtr<AActor>, int32_t> _targetList; // 0x90
};

struct USoundSubmixBase {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x30
};

struct UAkXboxOneInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct ABearTrap {
	UBoxPlayerOverlapComponent* _interactionVolume; // 0x4d0
	UCapsulePlayerOverlapComponent* _trapPlayerDetectionZone; // 0x4d8
	UBoxComponent* _killerSafetyZoneComponent; // 0x4e0
	UDBDOutlineComponent* _outlineComponent; // 0x4e8
	UBearTrapOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x4f0
	UMapActorComponent* _mapActorComponent; // 0x4f8
	USphereComponent* _mapActorCollision; // 0x500
	USphereComponent* _trapBlocker; // 0x508
	UMontagePlayer* _montagePlayer; // 0x510
	FMulticastInlineDelegate _onIsTrapSetChanged; // 0x518
	ADBDPlayer* _ownerPlayer; // 0x528
	UDBDNavModifierComponent* _dangerNavModifierComponent; // 0x530
	bool _isTrapperOutOfSafetyZone; // 0x538
	int32_t _maximumAttemptsForSelfUntrap; // 0x53c
	int32_t _selfUntrapAttemptsRemaining; // 0x540
	UInteractor* _mainInteractor; // 0x548
	UInteractionDefinition* _trapSurvivor; // 0x550
	UInteractionDefinition* _trapKiller; // 0x558
	ADBDPlayer* _trappedPlayer; // 0x560
	UAnimationMontageSlave* _animationMontageSlave; // 0x5c8
};

struct UBearTrapAnimInstance {
	bool _isBroken; // 0x280
	bool _isBeingCollected; // 0x281
	bool _containsSurvivor; // 0x282
	bool _isTrapSet; // 0x283
	bool _wasJustDisarmed; // 0x284
};

struct UFoliageType_Actor {
	AActor* actorClass; // 0x378
	bool bShouldAttachToBaseComponent; // 0x380
};

struct UHudObjectivesPresenter {
	UUserWidget* CoreHudObjectivesWidgetClass; // 0x108
};

struct UAISense_Prediction {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x90
};

struct ALevelParadise {
	float LoopStartDistance; // 0x230
	float LoopDistance; // 0x234
	USceneComponent* MainPlayerSpawnPoint; // 0x238
	TArray<USceneComponent*> OtherSurvivorSpawnPoints; // 0x240
	TArray<USceneComponent*> ParadiseTiles; // 0x250
	AActor* ParadiseViewTarget; // 0x260
	ADBDPlayer* _spawnedMainPawn; // 0x2f8
	USceneComponent* _runnerComponent; // 0x300
};

struct UUMGPlayerNameInputPopup {
	UEditableTextBox* NameInputTextBox; // 0x3e8
};

struct UMediaPlaylist {
	TArray<UMediaSource*> Items; // 0x30
};

struct UUMGTallyScoreboardWidget {
	FMulticastInlineDelegate OnTallyScoreboardAddFriendEvent; // 0x310
	FMulticastInlineDelegate OnTallyScoreboardReportEvent; // 0x320
	FText LabelTextRank; // 0x330
	FText LabelTextScore; // 0x348
	FText LabelTextStatus; // 0x360
	UUMGTallyScoreboardPlayerInfoWidget* KillerWidget; // 0x378
	UUMGTallyScoreboardPlayerInfoWidget* FirstSurvivorWidget; // 0x380
	UUMGTallyScoreboardPlayerInfoWidget* SecondSurvivorWidget; // 0x388
	UUMGTallyScoreboardPlayerInfoWidget* ThirdSurvivorWidget; // 0x390
	UUMGTallyScoreboardPlayerInfoWidget* FourthSurvivorWidget; // 0x398
	TArray<UUMGTallyScoreboardPlayerInfoWidget*> SurvivorWidgets; // 0x3a0
};

struct UAutomaticLeanComponent {
	FMulticastInlineDelegate OnLeanStateChanged; // 0xb8
	FMulticastInlineDelegate OnCanInitiateLeanChanged; // 0xc8
	FSocketOrBoneCache _cameraIdleLocation; // 0xd8
	FSocketOrBoneCache _cameraLeftLeanLocation; // 0x138
	FSocketOrBoneCache _cameraRightLeanLocation; // 0x198
	FSocketOrBoneCache _cameraCrouchLocation; // 0x1f8
	FSocketOrBoneCache _cameraCrouchLeftLeanLocation; // 0x258
	FSocketOrBoneCache _cameraCrouchRightLeanLocation; // 0x2b8
	float _middleSphereTraceLength; // 0x318
	float _sideSphereTraceLength; // 0x31c
	float _sphereTraceRadius; // 0x320
	float _standingTraceHeightOffset; // 0x324
	float _crouchingTraceHeightOffset; // 0x328
	float _sideTraceOffset; // 0x32c
	float _maxMovementDistance; // 0x330
	float _maxCameraAngle; // 0x334
	bool _debugMode; // 0x338
	ELeanState _leanState; // 0x339
};

struct AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x230
};

struct AK25Power {
	UChargeableComponent* _k25ChainStrikeInteractionChargeableComponent; // 0x4e0
	UChargeableComponent* _k25TeleportChargeableComponent; // 0x4e8
	TArray<FCustomKillerInstinctData> _customKillerInstinctDatas; // 0x4f0
	TArray<FName> _survivorStatusEffectID; // 0x500
	TArray<FName> _killerStatusEffectID; // 0x510
	UK25SurvivorChainAttachmentComponent* _survivorChainAttachmentComponentClass; // 0x520
	UK25SurvivorChainTargetterComponent* _survivorChainTargetterComponentClass; // 0x528
	AK25Gateway* _k25GatewayClass; // 0x530
	AK25ControlledProjectile* _controlledProjectileClass; // 0x538
	ALamentConfiguration* _lamentConfigurationClass; // 0x540
	AK25Husk* _k25HuskClass; // 0x548
	UK25KillerTeleportationPositionFinderComponent* _killerTeleportFinderComponentClass; // 0x550
	AK25AnimationFollowerActor* _chainAnimationActorClass; // 0x558
	TArray<UDataTable*> _chainAnimationMappingsTables; // 0x560
	AK25AnimationFollowerActor* _pillarAnimationActorClass; // 0x570
	UK25ProjectileLauncher* _k25ProjectileLauncher; // 0x578
	UAuthoritativeActorPoolComponent* _k25ProjectilePool; // 0x580
	UAuthoritativeActorPoolComponent* _k25ChainPool; // 0x588
	UPowerChargeComponent* _k25PowerChargeComponent; // 0x590
	UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider; // 0x598
	UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent; // 0x5a0
	AK25Gateway* _gateway; // 0x5a8
	AK25ControlledProjectile* _controlledProjectileInstance; // 0x5b0
	ALamentConfiguration* _lamentConfiguration; // 0x5b8
	AK25Husk* _k25Husk; // 0x5c0
	UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent; // 0x5c8
	bool _isPowerCharged; // 0x5f9
};

struct UInDreamSurvivorSubAnimInstance {
	bool _shouldLookSleepy; // 0x4f0
};

struct USuperModeDeactivation {
	FDBDTunableRowHandle _deactivationDuration; // 0x5b0
};

struct UPawnMovementComponent {
	APawn* PawnOwner; // 0x140
};

struct UBakeTransformTool {
	UBakeTransformToolProperties* BasicProperties; // 0x98
};

struct UGameSessionSettings {
	int32_t MaxSpectators; // 0x30
	int32_t MaxPlayers; // 0x34
	char bRequiresPushToTalk : 1; // 0x38
};

struct UClothPhysicalMeshDataNv_Legacy {
	TArray<float> MaxDistances; // 0xe8
	TArray<float> BackstopDistances; // 0xf8
	TArray<float> BackstopRadiuses; // 0x108
	TArray<float> AnimDriveMultipliers; // 0x118
};

struct AGeometryCollectionActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x230
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x238
};

struct UUpdateManager {
	float HotfixCheckCompleteDelay; // 0x90
	float UpdateCheckCompleteDelay; // 0x94
	float HotfixAvailabilityCheckCompleteDelay; // 0x98
	float UpdateCheckAvailabilityCompleteDelay; // 0x9c
	bool bCheckPlatformOSSForUpdate; // 0xa0
	bool bCheckOSSForUpdate; // 0xa1
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0xa4
	bool bPlatformEnvironmentDetected; // 0xb0
	bool bInitialUpdateFinished; // 0xb1
	bool bCheckHotfixAvailabilityOnly; // 0xb2
	EUpdateState CurrentUpdateState; // 0xb3
	int32_t WorstNumFilesPendingLoadViewed; // 0xb4
	EPatchCheckResult LastPatchCheckResult; // 0xb8
	EHotfixResult LastHotfixResult; // 0xb9
	FDateTime LastUpdateCheck[0x2]; // 0xe8
	EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xf8
	UEnum* UpdateStateEnum; // 0x110
	UEnum* UpdateCompletionEnum; // 0x118
};

struct ULevelActorContainer {
	TArray<AActor*> Actors; // 0x30
};

struct UCoreTestBuildFlagWidget {
	UTextBlock* TopLineTextfield; // 0x2f8
	UTextBlock* BottomLineTextfield; // 0x300
};

struct UCamperEndGameComponent {
	AEndGameEntity* _endGameEntityClass; // 0x100
	float _delayBeforeSacrifice; // 0x10c
	bool _readyToBeSacrificed; // 0x110
};

struct UAISkill_InteractionTeleportEthereal {
	float TeleportPlanInterval; // 0x178
	float MaxTeleportAlignHalfAngle; // 0x17c
	float AbortNotWorkingTeleportDelay; // 0x180
	float AbortAddRunCooldownPenaltyTime; // 0x184
	AActor* _onStimulusInstigator; // 0x1a0
};

struct UOnboardingMenuPresenter {
	UUserWidget* OnboardingMenuWidgetClass; // 0xe0
	UOnboardingTutorialSubPresenter* _onboardingTutorialSubPresenter; // 0xe8
	UGameManualSubPresenter* _gameManualSubPresenter; // 0xf0
	USubPresenter* _activeSubPresenter; // 0xf8
};

struct AStatusView {
	bool IsActive; // 0x230
	int32_t Level; // 0x234
	float PercentageFill; // 0x238
	bool IsClockwiseTimer; // 0x23c
	ADBDPlayer* _localDBDPlayer; // 0x298
};

struct UBTDecorator_CanRunSkill {
	FGameplayTag Context; // 0x70
};

struct UUMGCustomizationItemPriceWidget {
	UTextBlock* CurrencyValue; // 0x300
	UTextBlock* DiscountPercentageContainer; // 0x308
	UTextBlock* DiscountPercentage; // 0x310
	UImage* CurrencyIcon; // 0x318
	TMap<ECurrencyType, TSoftObjectPtr<UTexture2D>> CurrencyTextures; // 0x320
	FSlateColor AffordableCurrencyTextColor; // 0x370
	FSlateColor AffordableSpecialCurrencyTextColor; // 0x398
	FSlateColor NonAffordableCurrencyTextColor; // 0x3c0
	FString _itemId; // 0x3e8
	ECurrencyType _currencyType; // 0x3f8
	bool _hasDiscountPercentage; // 0x3f9
};

struct UARFaceGeometry {
	FVector LookAtTarget; // 0xf0
	bool bIsTracked; // 0xfc
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x100
};

struct UTrailEffectLastingTimeBaseAddon {
	float _trailEffectLastingTimeModifierValue; // 0x2a8
};

struct ACameraRig_Crane {
	float CranePitch; // 0x230
	float CraneYaw; // 0x234
	float CraneArmLength; // 0x238
	bool bLockMountPitch; // 0x23c
	bool bLockMountYaw; // 0x23d
	USceneComponent* TransformComponent; // 0x240
	USceneComponent* CraneYawControl; // 0x248
	USceneComponent* CranePitchControl; // 0x250
	USceneComponent* CraneCameraMount; // 0x258
};

struct UViewport {
	FLinearColor BackgroundColor; // 0x140
};

struct UStereoLayerShapeCylinder {
	float Radius; // 0x30
	float OverlayArc; // 0x34
	int32_t Height; // 0x38
};

struct AFoliageActor {
	UFoliageDensityHISM* _foliageHISM; // 0x230
};

struct UShopLubricantAddon {
	float _auraBlockingDuration; // 0x2a8
	float _auraVisibleDistance; // 0x2ac
};

struct UDBDReflectionCaptureSpawnerComponent {
	EReflectionSourceType ReflectionSourceType; // 0x210
	UTextureCube* Cubemap; // 0x218
	float SourceCubemapAngle; // 0x220
	float Brightness; // 0x224
	float ContributionFactor; // 0x228
	float IBLMultiplicator; // 0x22c
	bool bCanBeTinted; // 0x230
	FVector CaptureOffset; // 0x234
	TArray<AReflectionCapture*> SpawnedReflectionCaptures; // 0x248
	TArray<UReflectionCaptureComponent*> SpawnedReflectionCaptureComponents; // 0x258
};

struct APostProcessVolume {
	FPostProcessSettings Settings; // 0x270
	float Priority; // 0x7b0
	float BlendRadius; // 0x7b4
	float BlendWeight; // 0x7b8
	char bEnabled : 1; // 0x7bc
	char bUnbound : 1; // 0x7bc
};

struct UBTDecorator_ExtIsAtLocation {
	FBlackboardKeySelector BBLoc; // 0x70
	bool UseAlternativeLoc; // 0xa0
	FAITunableParameter AcceptableRadius; // 0xa4
};

struct UPortalSurvivorSubAnimInstance {
	bool _isDestroyingPortal; // 0x530
	bool _isSpooked; // 0x531
	bool _hasSkillCheckFailed; // 0x532
};

struct UFrenzyComponent {
	FMulticastInlineDelegate OnFrenzyStarted; // 0xb8
	FMulticastInlineDelegate OnFrenzyEnded; // 0xc8
	FMulticastInlineDelegate OnFrenzyEndedNoCooldown; // 0xd8
	FMulticastInlineDelegate OnInjuredBleedoutStartedDuringFrenzy; // 0xe8
	FMulticastInlineDelegate OnFrenzyReadyToStart; // 0xf8
	ASlasherPlayer* _slasher; // 0x178
	UInteractionDefinition* _cooldownInteraction; // 0x1a8
};

struct UAudioSettings {
	FSoftObjectPath DefaultSoundClassName; // 0x48
	FSoftObjectPath DefaultMediaSoundClassName; // 0x68
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x88
	FSoftObjectPath DefaultBaseSoundMix; // 0xa8
	FSoftObjectPath VoiPSoundClass; // 0xc8
	FSoftObjectPath MasterSubmix; // 0xe8
	FSoftObjectPath ReverbSubmix; // 0x108
	FSoftObjectPath EQSubmix; // 0x128
	EVoiceSampleRate VoiPSampleRate; // 0x148
	float DefaultReverbSendLevel; // 0x14c
	int32_t MaximumConcurrentStreams; // 0x150
	float GlobalMinPitchScale; // 0x154
	float GlobalMaxPitchScale; // 0x158
	TArray<FAudioQualitySettings> QualityLevels; // 0x160
	char bAllowPlayWhenSilent : 1; // 0x170
	char bDisableMasterEQ : 1; // 0x170
	char bAllowCenterChannel3DPanning : 1; // 0x170
	uint32_t NumStoppingSources; // 0x174
	EPanningMethod PanningMethod; // 0x178
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x179
	FString DialogueFilenameFormat; // 0x180
};

struct UMaterialExpressionMaterialProxyReplace {
	FExpressionInput Realtime; // 0x48
	FExpressionInput MaterialProxy; // 0x64
};

struct UWrapBox {
	FVector2D InnerSlotPadding; // 0x140
	float WrapWidth; // 0x148
	bool bExplicitWrapWidth; // 0x14c
};

struct UPoseWatch {
	UEdGraphNode* Node; // 0x30
	FColor PoseWatchColour; // 0x38
};

struct UMovieSceneEventTriggerSection {
	FMovieSceneEventChannel EventChannel; // 0xe8
};

struct UInfectedInteractableComponent {
	UCurveFloat* VomitAlphaCurve; // 0xb8
	FName VomitAlphaParameterName; // 0xc0
	UTimelineComponent* _vomitAlphaTimeline; // 0xd0
};

struct UNiagaraDataInterfaceSpline {
	AActor* source; // 0x38
};

struct UWalesCypherHandler {
	UWalesCypherParameters* _walesCypherParams; // 0x38
};

struct UBTDecorator_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	TArray<FName> ObservedKeyNames; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0xa0
	char bIsObservingBB : 1; // 0xa0
};

struct UCamaraderie {
	float _percentUseItem[0x3]; // 0x3dc
	float _pauseTimer[0x3]; // 0x3e8
	bool _needItemToTrigger; // 0x3f4
};

struct UK25ChainStrikeState_OutOfBodyState {
	FDBDTunableRowHandle _fovTimeChangeDuration; // 0xc8
};

struct UInterpTrackDirector {
	TArray<FDirectorTrackCut> CutTrack; // 0x78
	char bSimulateCameraCutsOnClients : 1; // 0x88
};

struct UDatasmithSpotLightComponentTemplate {
	float InnerConeAngle; // 0x38
	float OuterConeAngle; // 0x3c
};

struct UNavCollisionBase {
	char bIsDynamicObstacle : 1; // 0x30
};

struct UMeshOpPreviewWithBackgroundCompute {
	UPreviewMesh* PreviewMesh; // 0x48
	TArray<UMaterialInterface*> StandardMaterials; // 0x50
	UMaterialInterface* OverrideMaterial; // 0x60
	UMaterialInterface* WorkingMaterial; // 0x68
};

struct UMaterialExpressionArctangentFast {
	FExpressionInput Input; // 0x48
};

struct URootContainer {
	UUserWidget* RootWidgetClass; // 0xb8
	float UnfocusedOpacity; // 0xc0
	UUserWidget* _rootWidget; // 0xc8
};

struct ACameraShakeSourceActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x230
};

struct UScrollBox {
	FScrollBoxStyle WidgetStyle; // 0x140
	FScrollBarStyle WidgetBarStyle; // 0x388
	USlateWidgetStyleAsset* Style; // 0x8a0
	USlateWidgetStyleAsset* BarStyle; // 0x8a8
	EOrientation Orientation; // 0x8b0
	ESlateVisibility ScrollBarVisibility; // 0x8b1
	EConsumeMouseWheel ConsumeMouseWheel; // 0x8b2
	FVector2D ScrollbarThickness; // 0x8b4
	FMargin ScrollbarPadding; // 0x8bc
	bool AlwaysShowScrollbar; // 0x8cc
	bool AlwaysShowScrollbarTrack; // 0x8cd
	bool AllowOverscroll; // 0x8ce
	bool bAnimateWheelScrolling; // 0x8cf
	EDescendantScrollDestination NavigationDestination; // 0x8d0
	float NavigationScrollPadding; // 0x8d4
	EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8d8
	bool bAllowRightClickDragScrolling; // 0x8d9
	float WheelScrollMultiplier; // 0x8dc
	FMulticastInlineDelegate OnUserScrolled; // 0x8e0
};

struct UTileMatrix {
	TArray<FArrayOfATile> _matrix; // 0x30
	TArray<ATile*> _tiles; // 0x40
	TArray<ATile*> _extraTiles; // 0x50
	TArray<FQuadrantInfo> _quadInfoArray; // 0x60
	TArray<FArrayOfInt32> _quadIndexMatrix; // 0x70
};

struct ULunarEventComponent {
	int32_t _lanternCollectedCount; // 0xd0
	int32_t _additionalEventProgressCount; // 0xd4
};

struct UBTDecorator_IsLocationInPressureZone {
	FBlackboardKeySelector BBAtLocation; // 0x70
};

struct ANavigationTestingActor {
	UCapsuleComponent* CapsuleComponent; // 0x240
	UNavigationInvokerComponent* InvokerComponent; // 0x248
	char bActAsNavigationInvoker : 1; // 0x250
	FNavAgentProperties NavAgentProps; // 0x258
	FVector QueryingExtent; // 0x290
	ANavigationData* MyNavData; // 0x2a0
	FVector ProjectedLocation; // 0x2a8
	char bProjectedLocationValid : 1; // 0x2b4
	char bSearchStart : 1; // 0x2b4
	float CostLimitFactor; // 0x2b8
	float MinimumCostLimit; // 0x2bc
	char bBacktracking : 1; // 0x2c0
	char bUseHierarchicalPathfinding : 1; // 0x2c0
	char bGatherDetailedInfo : 1; // 0x2c0
	char bDrawDistanceToWall : 1; // 0x2c0
	char bShowNodePool : 1; // 0x2c0
	char bShowBestPath : 1; // 0x2c0
	char bShowDiffWithPreviousStep : 1; // 0x2c0
	char bShouldBeVisibleInGame : 1; // 0x2c0
	ENavCostDisplay CostDisplayMode; // 0x2c4
	FVector2D TextCanvasOffset; // 0x2c8
	char bPathExist : 1; // 0x2d0
	char bPathIsPartial : 1; // 0x2d0
	char bPathSearchOutOfNodes : 1; // 0x2d0
	float PathfindingTime; // 0x2d4
	float PathCost; // 0x2d8
	int32_t PathfindingSteps; // 0x2dc
	ANavigationTestingActor* OtherActor; // 0x2e0
	UNavigationQueryFilter* FilterClass; // 0x2e8
	int32_t ShowStepIndex; // 0x2f0
	float OffsetFromCornersDistance; // 0x2f4
};

struct UBTTask_MoveToAbortIfStuck {
	float _deltaConsideredStuck; // 0xc4
	float _maxTimeStuck; // 0xd4
};

struct AAkSpatialAudioVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x268
	UAkLateReverbComponent* LateReverb; // 0x270
	UAkRoomComponent* Room; // 0x278
};

struct UUMGMonthlyPassCurrencyWidget {
	UImage* CurrencyBackground; // 0x358
};

struct UMovieSceneEasingExternalCurve {
	UCurveFloat* Curve; // 0x38
};

struct UBTNode {
	FString NodeName; // 0x38
	UBehaviorTree* TreeAsset; // 0x48
	UBTCompositeNode* ParentNode; // 0x50
};

struct UMediaCapture {
	FMulticastInlineDelegate OnStateChanged; // 0x30
	UMediaOutput* MediaOutput; // 0x58
	UTextureRenderTarget2D* CapturingRenderTarget; // 0x80
};

struct UAISense_PointOfInterest {
	TArray<AActor*> _sources; // 0x90
};

struct AScreenIndicatorWorldMarker {
	UTexture2D* HudScreenIndicatorIcon; // 0x230
	EHudScreenIndicatorType HudScreenIndicatorType; // 0x238
	FFloatRange VisibleDistanceRange; // 0x23c
};

struct UBloodOrbAbsorberComponent {
	FMulticastInlineDelegate Authority_OnBloodOrbAbsorbed; // 0xb8
	FMulticastInlineDelegate OnIsAbsorbingChanged; // 0xc8
	FVector AbsorbLocationOffset; // 0xd8
	TArray<UBloodOrbDropperComponent*> _camperBloodOrbDropperComponents; // 0x100
};

struct UTrapKillerInteraction {
	TArray<FString> _overridableInteractions; // 0x5b0
	FRotator _caughtFootRotationOffset; // 0x5c0
	FName _openNotifyID; // 0x5cc
	FName _footSocketName; // 0x5d8
};

struct ASpiritPassivePhaseWalkHusk {
	USkeletalMeshComponent* _huskMesh; // 0x238
	UCustomizedSkeletalMesh* _huskCustomizedSkeletalMesh; // 0x240
};

struct UHarpoonRifleAnimInstance {
	ARifleChain* _chain; // 0x270
	float _chainUnwindingSpeed; // 0x278
};

struct UDistanceBasedTickDisabler {
	bool _autoRegisterOwner; // 0xb8
	bool _autoRegisterTimelines; // 0xb9
	FBHVRPerDetailModeFloat _tickDisableDistance; // 0xc0
	bool _insignificantWhenBehindTheCamera; // 0x160
	TArray<UActorComponent*> _components; // 0x168
};

struct UHitValidatorComponent {
	float _maximumSquareDistance; // 0xd4
	TWeakObjectPtr<UHitValidationConfigsComponent> _hitValidationConfigComponent; // 0xe0
};

struct UPerkActionButton {
	UTextBlock* TextUnlockLevelTitle; // 0x610
	bool Activatable; // 0x618
	ESlateVisibility SelectedImageVisibility; // 0x619
	ESlateVisibility ClickableButtonVisibility; // 0x61a
	ESlateVisibility ClickableImageVisibility; // 0x61b
	ESlateVisibility ProgressbarVisibility; // 0x61c
	float IdleTime; // 0x620
};

struct UObjectPlacerComponent {
	UStaticMeshComponent* _objectMesh; // 0x210
	FName _socketName; // 0x218
	float _indicatorOffsetY; // 0x224
	float _indicatorOffsetX; // 0x228
	FName _itemObjectId; // 0x22c
	bool _showIndicator; // 0x238
	bool _stayActiveWhileItemInUse; // 0x239
	UObjectPlacementUpdateStrategy* _objectPlacementUpdateStrategy; // 0x248
	UObjectPlacementValidationStrategy* _objectPlacementValidationStrategy; // 0x250
};

struct USecondsToRateModifierBaseAddon {
	FTunableStat _chargeRate; // 0x298
	FTunableStat _maxCharge; // 0x318
	float _secondsToAdd; // 0x398
	FGameplayTag _rateModifierTagToCompute; // 0x39c
};

struct UDeadHard {
	float _deadHardIconCooldownDuration; // 0x3d0
	UActivatableExhaustedEffect* _exhaustedEffect; // 0x3d8
	float _exhaustedCooldownPerLevel[0x3]; // 0x3e0
};

struct UTransformMeshesTool {
	UTransformMeshesToolProperties* TransformProps; // 0xa0
	TArray<FTransformMeshesTarget> ActiveGizmos; // 0xb8
};

struct UExposerCirclingComponent {
	bool DirectionFollows; // 0x210
	float MinHeight; // 0x214
	float MaxHeight; // 0x218
	float MinRadius; // 0x21c
	float MaxRadius; // 0x220
	float CirclingSpeed; // 0x224
	float DistanceBetweenPoints; // 0x228
	float BezierModifier; // 0x22c
	int32_t Samples; // 0x230
};

struct ULobbyControllerSubsystem {
	TWeakObjectPtr<ULobbyDisplayStandController> _localPlayerDisplayStandController; // 0x38
	TMap<FString, ULobbyDisplayStandController*> _displayStandControllers; // 0x40
};

struct APlayerController {
	UPlayer* Player; // 0x2b0
	APawn* AcknowledgedPawn; // 0x2b8
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2c0
	AHUD* MyHUD; // 0x2c8
	APlayerCameraManager* PlayerCameraManager; // 0x2d0
	APlayerCameraManager* PlayerCameraManagerClass; // 0x2d8
	bool bAutoManageActiveCameraTarget; // 0x2e0
	FRotator TargetViewRotation; // 0x2e4
	float SmoothTargetViewRotationSpeed; // 0x2fc
	TArray<AActor*> HiddenActors; // 0x308
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x318
	float LastSpectatorStateSynchTime; // 0x32c
	FVector LastSpectatorSyncLocation; // 0x330
	FRotator LastSpectatorSyncRotation; // 0x33c
	int32_t ClientCap; // 0x348
	UCheatManager* CheatManager; // 0x350
	UCheatManager* CheatClass; // 0x358
	UPlayerInput* PlayerInput; // 0x360
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x368
	char bPlayerIsWaiting : 1; // 0x3e8
	char NetPlayerIndex; // 0x3ec
	UNetConnection* PendingSwapConnection; // 0x428
	UNetConnection* NetConnection; // 0x430
	float InputYawScale; // 0x444
	float InputPitchScale; // 0x448
	float InputRollScale; // 0x44c
	char bShowMouseCursor : 1; // 0x450
	char bEnableClickEvents : 1; // 0x450
	char bEnableTouchEvents : 1; // 0x450
	char bEnableMouseOverEvents : 1; // 0x450
	char bEnableTouchOverEvents : 1; // 0x450
	char bForceFeedbackEnabled : 1; // 0x450
	float ForceFeedbackScale; // 0x454
	TArray<FKey> ClickEventKeys; // 0x458
	EMouseCursor DefaultMouseCursor; // 0x468
	EMouseCursor CurrentMouseCursor; // 0x469
	ECollisionChannel DefaultClickTraceChannel; // 0x46a
	ECollisionChannel CurrentClickTraceChannel; // 0x46b
	float HitResultTraceDistance; // 0x46c
	uint16_t SeamlessTravelCount; // 0x470
	uint16_t LastCompletedSeamlessTravelCount; // 0x472
	UInputComponent* InactiveStateInputComponent; // 0x4e8
	char bShouldPerformFullTickWhenPaused : 1; // 0x4f0
	UTouchInterface* CurrentTouchInterface; // 0x508
	ASpectatorPawn* SpectatorPawn; // 0x560
	bool bIsLocalPlayerController; // 0x56c
	FVector SpawnLocation; // 0x570
};

struct UMaterialExpressionClearCoatNormalCustomOutput {
	FExpressionInput Input; // 0x48
};

struct UStartDemonModeInteraction {
	float YawAdjustTime; // 0x6d8
	FAnimationMontageDescriptor DemonModeActivationMontage; // 0x6e0
};

struct UOvercharge {
	float _skillCheckFailurePenalty[0x3]; // 0x3d0
};

struct UBaseModifierCondition {
	UBaseModifierContainer* _owningModifier; // 0xb8
	UModifierSubjectProvider* _subjectProvider; // 0xc0
	UObject* _subjectProviderClass; // 0xc8
};

struct UCloudStorageBase {
	TArray<FString> LocalCloudFiles; // 0x40
	char bSuppressDelegateCalls : 1; // 0x50
};

struct UMovieSceneNiagaraVectorParameterTrack {
	int32_t ChannelsUsed; // 0xa0
};

struct UPhysicsAsset {
	TArray<int32_t> BoundsBodies; // 0x38
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x48
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x58
	FSolverIterations SolverIterations; // 0x68
	char bNotForDedicatedServer : 1; // 0x80
	UThumbnailInfo* ThumbnailInfo; // 0x128
	TArray<UBodySetup*> BodySetup; // 0x130
};

struct UAnimNotify_PlaySound {
	USoundBase* Sound; // 0x40
	float VolumeMultiplier; // 0x48
	float PitchMultiplier; // 0x4c
	char bFollow : 1; // 0x50
	FName AttachName; // 0x54
};

struct UAtlantaHudPowerAttackJoystick {
	UCanvasPanel* AnimationContainer; // 0x308
	FName _availableAnimationName; // 0x310
	FName _fadeOutAnimationName; // 0x31c
	FName _tutoStartAnimationName; // 0x328
	FName _tutoLoopAnimationName; // 0x334
	UImage* Icon; // 0x340
};

struct ADBDBaseHud {
	UFont* _debugFont; // 0x320
};

struct UAkHololensInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UUMGCharacterPrestigeButton {
	UButton* PrestigeButton; // 0x308
	UCanvasPanel* PrestigeAnimationCanvas; // 0x310
};

struct UUMGTallyRankFrame {
	UImage* Frame; // 0x300
	UTextBlock* label; // 0x308
};

struct ULevelCapture {
	bool bAutoStartCapture; // 0x238
	FGuid PrerequisiteActorId; // 0x244
};

struct UUMGCharacterSelectSubmenuButton {
	UCanvasPanel* NotificationPanel; // 0x430
};

struct UCheckBox {
	ECheckBoxState CheckedState; // 0x140
	FDelegate CheckedStateDelegate; // 0x144
	FCheckBoxStyle WidgetStyle; // 0x158
	USlateWidgetStyleAsset* Style; // 0x738
	USlateBrushAsset* UncheckedImage; // 0x740
	USlateBrushAsset* UncheckedHoveredImage; // 0x748
	USlateBrushAsset* UncheckedPressedImage; // 0x750
	USlateBrushAsset* CheckedImage; // 0x758
	USlateBrushAsset* CheckedHoveredImage; // 0x760
	USlateBrushAsset* CheckedPressedImage; // 0x768
	USlateBrushAsset* UndeterminedImage; // 0x770
	USlateBrushAsset* UndeterminedHoveredImage; // 0x778
	USlateBrushAsset* UndeterminedPressedImage; // 0x780
	EHorizontalAlignment HorizontalAlignment; // 0x788
	FMargin Padding; // 0x78c
	FSlateColor BorderBackgroundColor; // 0x7a0
	bool IsFocusable; // 0x7c8
	FMulticastInlineDelegate OnCheckStateChanged; // 0x7d0
};

struct UPaperTileLayer {
	FText LayerName; // 0x30
	int32_t LayerWidth; // 0x48
	int32_t LayerHeight; // 0x4c
	char bHiddenInGame : 1; // 0x50
	char bLayerCollides : 1; // 0x50
	char bOverrideCollisionThickness : 1; // 0x50
	char bOverrideCollisionOffset : 1; // 0x50
	float CollisionThicknessOverride; // 0x54
	float CollisionOffsetOverride; // 0x58
	FLinearColor LayerColor; // 0x5c
	int32_t AllocatedWidth; // 0x6c
	int32_t AllocatedHeight; // 0x70
	TArray<FPaperTileInfo> AllocatedCells; // 0x78
	UPaperTileSet* TileSet; // 0x88
	TArray<int32_t> AllocatedGrid; // 0x90
};

struct UWakerObjectAnimInstance {
	float _reappearTimerCooldown; // 0x270
	float _wakeUpCharge; // 0x274
	bool _chargeStarted; // 0x278
	bool _interactionComplete; // 0x279
	bool _outEnd; // 0x27a
	bool _reset; // 0x27b
	bool _inEnd; // 0x27c
	bool _wakerObjectStarted; // 0x27d
	bool _respawnEnd; // 0x27e
	bool _cancelEnd; // 0x27f
};

struct USnowmanAttackableComponent {
	FGameplayTagContainer _killerProjectilesThatCanDamageSnowman; // 0xd0
};

struct UPawnActionsComponent {
	APawn* ControlledPawn; // 0xb8
	TArray<FPawnActionStack> ActionStacks; // 0xc0
	TArray<FPawnActionEvent> ActionEvents; // 0xd0
	UPawnAction* CurrentAction; // 0xe0
};

struct UUMGAtlantaCalendarEventsTemplate {
	UUMGAtlantaDailyRewardsGrid* DailyRewardGrid; // 0x300
};

struct UCompositeCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa8
	TArray<UCurveTable*> OldParentTables; // 0xb8
};

struct UParticleModuleVelocityOverLifetime {
	FRawDistributionVector VelOverLife; // 0x40
	char Absolute : 1; // 0x88
};

struct AUIScreenshotTool {
	APostProcessVolume* PostProcessVolume; // 0x338
	FString ScreenshotFolderPath; // 0x340
	int32_t ScreenshotResolution; // 0x350
	int32_t IconResolution; // 0x354
	float DelayBeforeTakingScreenshot; // 0x358
	EScreenShotBatching Batching; // 0x35c
	FName CurrentPart; // 0x360
	ECustomizationCategory CurrentPartCategory; // 0x36c
	FName CurrentSetting; // 0x370
	ACameraActor* ScreenshotCamera; // 0x380
	bool UpdateCameraFromViewSettings; // 0x388
	FScreenshotViewSetting SurvivorHeadView; // 0x38c
	FScreenshotViewSetting SurvivorTorsoView; // 0x3b4
	FScreenshotViewSetting SurvivorLegsView; // 0x3dc
	FScreenshotViewSetting KillerHeadView; // 0x404
	FScreenshotViewSetting KillerBodyView; // 0x42c
	FScreenshotViewSetting KillerWeaponView; // 0x454
	TArray<FGenderViewSetting> GenderViewOverrides; // 0x480
	TArray<FCharacterItemCategoryViewSetting> CharacterViewOverrides; // 0x490
	TArray<FItemViewSetting> ItemViewOverrides; // 0x4a0
	TArray<FRoleGenderViewSetting> OutfitView; // 0x4b0
	TArray<FCharacterViewSetting> OutfitCharacterOverrides; // 0x4c0
	TArray<FRoleGenderViewSetting> OutfitTwoPartsView; // 0x4d0
	TArray<FOutfitViewSetting> OutfitOverrides; // 0x4e0
	TArray<FCharacterAnimation> AnimationOverrides; // 0x4f0
	FScreenshotViewSetting CharmsView; // 0x500
	TArray<FCharmCategorySetting> CharmsCategoryOverrides; // 0x528
	TArray<FCharmViewSetting> CharmOverrides; // 0x538
	FNamedButton ReloadDBButton; // 0x548
	AActor* _spawnedCharm; // 0x5e0
	FNamedButton ShowIconHelp; // 0x5e8
};

struct UMovieSceneEnumSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
};

struct UUMGAtlantaRankUpPopup {
	UUMGTallyRankBanner* RankBanner; // 0x3e8
	UHorizontalBox* RewardsContainer; // 0x3f0
	UCanvasPanel* RewardsSection; // 0x3f8
	TSoftClassPtr<UObject> RewardWidgetClass; // 0x400
};

struct UAkSurfaceReflectorSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x210
	TArray<FAkPoly> AcousticPolys; // 0x218
	char bEnableDiffraction : 1; // 0x228
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x228
	AActor* AssociatedRoom; // 0x230
};

struct UAISkill_InteractionTarget_DashAttack {
	float DashAttackUnderMaxRange; // 0x220
	float DashAttackUnderMaxHalfAngle; // 0x224
	EAttackType ExpectedAttackType; // 0x228
};

struct UTileSpawnPoint {
	ETileSpawnPointType TileSpawnPointType; // 0x220
	float Weight; // 0x224
	TSoftClassPtr<UObject> Visualization; // 0x228
	AActor* _spawnedObject; // 0x260
	TArray<AActor*> ObjectSpawnModifier; // 0x268
	int32_t _spawnPriorityTier; // 0x278
	bool _weightInfluenceable; // 0x27c
	bool _weightInfluencer; // 0x27d
	bool _activated; // 0x27e
};

struct UBlightPowerStateLethalDash {
	FSecondaryInteractionProperties _secondaryInteractionProperties; // 0x250
	bool _smashBreakables; // 0x288
};

struct UDeadMansSwitch {
	float _activationDurationByLevels[0x3]; // 0x3d8
	bool _anySurvivorLetGo; // 0x3e4
	TArray<AGenerator*> _blockedGenerators; // 0x3e8
};

struct UMaterialExpressionDistance {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
};

struct UPhysicalAnimationComponent {
	float StrengthMultiplyer; // 0xb8
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xc0
};

struct UEnvelopeFollowerListener {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb8
};

struct ALoudNoise {
	UDecalComponent* _toInfinityDecal; // 0x230
	UParticleSystemComponent* _distortionParticleSystem; // 0x238
	UAkComponent* _ak_audio_loudNoise; // 0x240
	USceneComponent* _rootScene; // 0x248
	float _loudNoiseMinDistance; // 0x250
	float _loudNoiseLifetime; // 0x288
	float _heightToAddToLoudNoiseLocation; // 0x28c
	float _loudNoiseDecalDistance; // 0x290
	float _cameraDecalDistance; // 0x294
};

struct UBaseProjectileLauncher {
	bool _requireLaunchImpactDetection; // 0xe8
	bool _hasInfiniteAmmunition; // 0xe9
	ABaseProjectile* ProjectileClass; // 0xf0
	int32_t _ammo; // 0xf8
	int32_t _maxAmmo; // 0xfc
	bool _canLaunchWhileOutOfAmmo; // 0x100
	ABaseProjectile* _debugProjectile; // 0x130
	UBaseProjectileReplicationComponent* _projectileReplicationComponent; // 0x178
};

struct UArchivesManager {
	UArchiveStoriesContainer* _storiesContainer; // 0x58
	UArchiveVignettesContainer* _vignettesContainer; // 0x60
	URewardTrackContainer* _rewardTrackContainer; // 0x68
};

struct UAnimNotifyState_Trail {
	UParticleSystem* PSTemplate; // 0x38
	FName FirstSocketName; // 0x40
	FName SecondSocketName; // 0x4c
	ETrailWidthMode WidthScaleMode; // 0x58
	FName WidthScaleCurve; // 0x5c
	char bRecycleSpawnedSystems : 1; // 0x68
};

struct UDebugCameraControllerSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x48
};

struct UBrushComponent {
	UModel* Brush; // 0x428
	UBodySetup* BrushBodySetup; // 0x430
};

struct UMeshSelectionSet {
	TArray<int32_t> Vertices; // 0x48
	TArray<int32_t> Edges; // 0x58
	TArray<int32_t> Faces; // 0x68
	TArray<int32_t> Groups; // 0x78
};

struct UHillbillyOverheatPresentationItemProgressComponent {
	UHillbillyChainsawOverheatComponent* _hillbillyChainsawOverheatComponent; // 0xb8
};

struct UUMGTallyRankWidget {
	FMargin _emblemsPadding; // 0x310
	TSoftClassPtr<UObject> EmblemWidgetClass; // 0x320
	UHorizontalBox* EmblemsContainer; // 0x350
	UUMGTallyProgressBar* ProgressBar; // 0x358
	UUMGTallyRankBanner* RankBanner; // 0x360
	UTextBlock* RankProgressLabel; // 0x368
	TArray<UUMGTallyEmblemWidget*> _emblems; // 0x370
	FTallyScorePipsData _scoreData; // 0x380
};

struct UVehicleAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x970
};

struct ADBDGame_Start {
	TScriptInterface<IClientStartupInitializerInterface> _startupInitializer; // 0x3b8
};

struct UParticleModuleLocationEmitterDirect {
	FName EmitterName; // 0x38
};

struct ATimerGateDecrease {
	ATimerGate* TimerGate; // 0x230
};

struct UNiagaraPrecompileContainer {
	TArray<UNiagaraScript*> Scripts; // 0x30
	UNiagaraSystem* System; // 0x40
};

struct UGassedSurvivorSubAnimInstance {
	bool _isGassed; // 0x4f0
};

struct UDreamPalletOutlineUpdateStrategy {
	FLinearColor _revealedByMapColor; // 0x148
};

struct ARekindledTotem {
	FLinearColor _auraColor; // 0x240
	USourceBasedOutlineUpdateStrategy* _outlineStrategy; // 0x250
	UDBDOutlineComponent* _outlineComponent; // 0x258
};

struct UFlashlightFXComponent {
	FMulticastInlineDelegate OnFlashEvent; // 0xb8
	USceneComponent* _tip; // 0xc8
	UStaticMeshComponent* _centerGlowMesh; // 0xd0
	USplineMeshComponent* _beamMesh; // 0xd8
	float _minimumOcclusionDistanceForSpotlight; // 0xe0
	UCurveFloat* _flashEffectIntensityCurve; // 0xe8
	float _flashEffectDuration; // 0xf0
	float _spotLightHalfAngle; // 0xf4
	float _spotLightIntensity; // 0xf8
	float _visualReworkSpotLightIntensity; // 0xfc
	float _beamBlindingHalfAngle; // 0x100
	float _beamFlashHalfAngle; // 0x104
	float _beamBlindingRatioInterpSpeedWithTarget; // 0x108
	float _beamBlindingRatioInterpSpeedWithoutTarget; // 0x10c
	bool _resizeConeLength; // 0x110
	float _centerGlowWidthScaleWithoutBlindTarget; // 0x114
	float _centerGlowWidthScaleWithBlindTarget; // 0x118
	float _centerGlowWidthScaleDuringFlash; // 0x11c
	float _centerGlowShrinkDistance; // 0x120
	float _centerGlowLengthMaxScale; // 0x124
	FAkObservedPlayerSoundLoop _aimedAtSoundLoop; // 0x128
	UFlashlightTargetFXComponent* _currentBeamModifyingTarget; // 0x168
	TSet<UFlashlightTargetFXComponent*> _targets; // 0x170
};

struct UMatchConfigDifficultyDataAsset {
	TMap<ECustomMatchDifficulty, FMatchConfigDifficultyData> DifficultiesData; // 0x38
};

struct UHookSurvivorDefinition {
	ACamperPlayer* _survivorBeingHooked; // 0x6d8
};

struct UPostEventAtLocationAsync {
	FMulticastInlineDelegate COMPLETED; // 0x38
};

struct UDreamSnareTrapPlacementValidationStrategy {
	float NumberOfGroundTest; // 0xe0
	float TrapRadius; // 0xe4
	float MaxElevationDifferentialOnTrapEdge; // 0xe8
};

struct UActivatorComponent {
	bool _searchForActivatableSubAnimInstances; // 0xb8
};

struct UBTService_StateMonitor_Slasher {
	FBlackboardKeySelector BBIsCarrying; // 0xd8
};

struct APresenterGroup {
	UContextObserver* ContextObserver; // 0x230
	UFocusHandler* FocusHandler; // 0x238
	UPawnObserver* PawnObserver; // 0x240
	URootContainer* RootContainer; // 0x248
};

struct UMovieScene3DAttachSection {
	FName AttachSocketName; // 0x110
	FName AttachComponentName; // 0x11c
	EAttachmentRule AttachmentLocationRule; // 0x128
	EAttachmentRule AttachmentRotationRule; // 0x129
	EAttachmentRule AttachmentScaleRule; // 0x12a
	EDetachmentRule DetachmentLocationRule; // 0x12b
	EDetachmentRule DetachmentRotationRule; // 0x12c
	EDetachmentRule DetachmentScaleRule; // 0x12d
};

struct UInteractiveGizmoManager {
	TArray<FActiveGizmo> ActiveGizmos; // 0x38
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x60
};

struct UMediaTexture {
	TextureAddress AddressX; // 0xc0
	TextureAddress AddressY; // 0xc1
	bool AutoClear; // 0xc2
	FLinearColor ClearColor; // 0xc4
	bool EnableGenMips; // 0xd4
	char NumMips; // 0xd5
	UMediaPlayer* MediaPlayer; // 0xd8
};

struct UAkInitBankAssetData {
	TArray<FAkPluginInfo> PluginInfos; // 0x90
};

struct USourceEffectFoldbackDistortionPreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x7c
};

struct UBTComposite_SimpleParallel {
	EBTParallelMode FinishMode; // 0x98
};

struct UActiveGasCloudTrackerComponent {
	TArray<ABaseGasCloudProjectile*> _activeToxinClouds; // 0xb8
	TArray<ABaseGasCloudProjectile*> _activeAntidoteClouds; // 0xc8
};

struct UGameplayTask {
	FName InstanceName; // 0x38
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x46
	UGameplayTask* ChildTask; // 0x68
};

struct UAutodidact {
	int32_t _maxTokenCountPerLevel[0x3]; // 0x3d0
	float _progressionBonusPerToken; // 0x3dc
	float _initialSkillCheckProgressionPenalty; // 0x3e0
};

struct UHapticFeedbackEffect_Buffer {
	TArray<char> Amplitudes; // 0x30
	int32_t SampleRate; // 0x40
};

struct ADBDMistManager {
	UDBDAggregateParticleSystemComponent* _particleSystemComp; // 0x230
};

struct UGlyphNavMovementComponent {
	AActor* _glyphOwner; // 0x140
	UPathFollowingComponent* _pathFollowingComponent; // 0x148
	char bPositionCorrected : 1; // 0x150
	float _maxSpeed; // 0x154
	float _acceleration; // 0x158
	float _deceleration; // 0x15c
	float _brakingDeceleration; // 0x160
};

struct UMaterialExpressionTime {
	char bIgnorePause : 1; // 0x48
	char bOverride_Period : 1; // 0x48
	float Period; // 0x4c
};

struct UDBDImage {
	UTexture2D* DefaultImage; // 0x248
};

struct UDBDCurrencyConversionTunables {
	TMap<ECurrencyType, FCurrencyConversion> Currencies; // 0x38
};

struct ULightingData {
	TSoftClassPtr<UObject> DefaultLighting; // 0x38
	TSoftClassPtr<UObject> DefaultAtlantaLighting; // 0x68
	TArray<FSceneLightingDescription> Descriptions; // 0x98
	TSoftClassPtr<UObject> AdaptiveShadowMapControllersActor; // 0xa8
};

struct UScourgeHookManagerComponent {
	TArray<AMeatHook*> _scourgeHooks; // 0x118
};

struct UBTService_FindInteractor_MeatHook {
	EFindInteractableMeatHookStatus StatusFilter; // 0x218
	FAITunableParameter AllyDangerStateGoalWeight; // 0x21c
	FAITunableParameter BotDangerStateGoalWeight; // 0x22c
	FAITunableParameter BotInjuredStateGoalWeight; // 0x23c
	FAITunableParameter HumanAllyHookedGoalWeight; // 0x24c
	FAITunableParameter MaxHookTimeGoalWeight; // 0x25c
	FAITunableParameter IncapacitatedAlliesGoalWeight; // 0x26c
};

struct UInterpGroupCamera {
	UCameraAnim* CameraAnimInst; // 0x60
	float CompressTolerance; // 0x68
};

struct UAnimSingleNodeInstance {
	UAnimationAsset* CurrentAsset; // 0x270
	FDelegate PostEvaluateAnimEvent; // 0x278
};

struct UGizmoLineHandleComponent {
	FVector Normal; // 0x448
	float HandleSize; // 0x454
	float Thickness; // 0x458
	FVector Direction; // 0x45c
	float Length; // 0x468
	bool bImageScale; // 0x46c
};

struct UBuckleUp {
	FLinearColor _noRecoveryColor; // 0x3d0
	FLinearColor _fullRecoveryColor; // 0x3e0
	float _revealDuration[0x3]; // 0x3f0
};

struct UBlightedSerumCooldownInteraction {
	float _cooldownTime; // 0x5b0
	float _cameraPitchRecenterTime; // 0x5b4
};

struct ULamentConfigurationPlayerAnalyticsComponent {
	int32_t _analyticsCount; // 0xb8
	FLamentConfigurationPlayerPossessionData _possessionAnalytics; // 0xc0
};

struct UCameraAnim {
	UInterpGroup* CameraInterpGroup; // 0x30
	float AnimLength; // 0x38
	FBox BoundingBox; // 0x3c
	char bRelativeToInitialTransform : 1; // 0x58
	char bRelativeToInitialFOV : 1; // 0x58
	float BaseFOV; // 0x5c
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5a0
};

struct UParticleModuleCollisionGPU {
	FRawDistributionFloat Resilience; // 0x38
	FRawDistributionFloat ResilienceScaleOverLife; // 0x68
	float Friction; // 0x98
	float RandomSpread; // 0x9c
	float RandomDistribution; // 0xa0
	float RadiusScale; // 0xa4
	float RadiusBias; // 0xa8
	EParticleCollisionResponse response; // 0xac
	EParticleCollisionMode CollisionMode; // 0xad
};

struct UTwinsAnimInstance {
	bool _isDormant; // 0x5a8
	bool _hasBrotherAttached; // 0x5a9
	bool _isPossessing; // 0x5aa
	bool _isWakingUpFromPossess; // 0x5ab
	bool _isAutoPossessingAfterRelease; // 0x5ac
};

struct UQuitMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UActorSpawnerRandomizer {
	TArray<FSpawnerElement> ActivatedSpawnerContentLists; // 0x228
	TArray<FSpawnerElement> DeactivatedSpawnerContentLists; // 0x238
};

struct AChaosSolverActor {
	float TimeStepMultiplier; // 0x230
	int32_t CollisionIterations; // 0x234
	int32_t PushOutIterations; // 0x238
	int32_t PushOutPairIterations; // 0x23c
	float ClusterConnectionFactor; // 0x240
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x244
	bool DoGenerateCollisionData; // 0x245
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x248
	bool DoGenerateBreakingData; // 0x258
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x25c
	bool DoGenerateTrailingData; // 0x26c
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x270
	bool bHasFloor; // 0x280
	float FloorHeight; // 0x284
	float MassScale; // 0x288
	bool bGenerateContactGraph; // 0x28c
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x28d
	UBillboardComponent* SpriteComponent; // 0x290
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2b0
};

struct UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x38
	float DistributeOverNPoints; // 0x80
	float DistributeThreshold; // 0x84
};

struct UPossessPlayer {
	FDBDTunableRowHandle _possessThePlayerMaxCharge; // 0x6d8
};

struct USoulGuard {
	float _cooldownLevels[0x3]; // 0x3d0
	bool _recover; // 0x3dc
	float _enduranceEffectDuration[0x3]; // 0x3e0
};

struct UObjectRandomizer {
	TArray<UActorSpawner*> Spawners; // 0x210
	int32_t MinPopulation; // 0x220
	int32_t MaxPopulation; // 0x224
};

struct UNiagaraParameterCollectionInstance {
	UNiagaraParameterCollection* Collection; // 0x30
	TArray<FNiagaraVariable> OverridenParameters; // 0x38
	FNiagaraParameterStore ParameterStorage; // 0x48
};

struct UOutOfSightMeshRotator {
	float _maxDistance; // 0xb8
	float _dotProductThreshold; // 0xbc
	ADBDPlayer* _locallyObservedPlayer; // 0xc0
	TArray<UMeshComponent*> _meshesToRotate; // 0xc8
	float _rotationOffset; // 0xd8
};

struct UCannibalChainsawAttack {
	FTagStateBool _isInTantrum; // 0x3e0
};

struct UBloodwebDistribution {
	UDBDDesignTunables* _designTunables; // 0x40
	UBloodwebTunables* _bloodwebTunables; // 0x48
};

struct UDecalMaskedMaterialsList {
	UStaticMesh* decalPlaneStaticMesh; // 0x38
	float decalPlaneExtent; // 0x40
	TMap<FName, UMaterialInterface*> decalMaskedMaterials; // 0x48
};

struct UUMGTeachablePerkButton {
	UPerkActionButton* TeachablePerkButton; // 0x300
	UImage* LockedStatusIcon; // 0x308
	FTeachableData _teachableData; // 0x310
	FMulticastInlineDelegate _onTeachablePerkTooltipLongPressEvent; // 0x420
};

struct UInheritableComponentHandler {
	TArray<FComponentOverrideRecord> Records; // 0x30
	TArray<UActorComponent*> UnnecessaryComponents; // 0x40
};

struct UEnvQueryGenerator_ActorsOfClass {
	AActor* SearchedActorClass; // 0x58
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x60
	FAIDataProviderFloatValue SearchRadius; // 0xa0
	UEnvQueryContext* SearchCenter; // 0xe0
};

struct UNiagaraDataInterfaceVolumeTexture {
	UVolumeTexture* Texture; // 0x38
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
	bool bSuppressSubtitles; // 0x300
	bool bOverrideAttenuation; // 0x301
	USoundAttenuation* AttenuationSettings; // 0x308
	FDelegate OnQueueSubtitles; // 0x310
	FMulticastInlineDelegate OnAudioFinished; // 0x328
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x338
};

struct UUniqueTargetIncrementQEEvaluator {
	TSet<TWeakObjectPtr<AActor>> _targetList; // 0x90
};

struct UK25P01 {
	float _generatorBlockDuration[0x3]; // 0x3d0
	float _auraRevealDuration[0x3]; // 0x3dc
	bool _allowPerkToBlockZeroProgressionGenerators; // 0x3e8
	FLinearColor _generatorAuraColorForKiller; // 0x3ec
	TArray<FFastTimer> _generatorBlockingTimers; // 0x400
	TArray<AGenerator*> _generatorsBlocked; // 0x410
	TArray<AGenerator*> _local_generatorsBlocked; // 0x420
};

struct USaboteur {
	float _cooldownDuration[0x3]; // 0x3d0
	float _revealHookDistance[0x3]; // 0x3dc
	TArray<UMeatHookOutlineUpdateStrategy*> _revealedMeatHooksOultineStrategy; // 0x3e8
};

struct UShadowMapTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x108
};

struct UAkAuxBus {
	UAkAudioBank* RequiredBank; // 0x60
};

struct UArmIKSensorComponent {
	USkeletalMeshComponent* _mesh; // 0xb8
	TMap<EArm, FArmIKSensorDatum> _arms; // 0xc0
	float _capsuleRadius; // 0x110
	float _capsuleHalfHeight; // 0x114
	float _traceLength; // 0x118
	UCameraComponent* _owningCamera; // 0x120
};

struct UChaosClothConfig {
	EClothMassMode MassMode; // 0x30
	float UniformMass; // 0x34
	float TotalMass; // 0x38
	float Density; // 0x3c
	float MinPerParticleMass; // 0x40
	float EdgeStiffness; // 0x44
	float BendingStiffness; // 0x48
	float AreaStiffness; // 0x4c
	float VolumeStiffness; // 0x50
	float StrainLimitingStiffness; // 0x54
	float LimitScale; // 0x58
	bool bUseGeodesicDistance; // 0x5c
	float ShapeTargetStiffness; // 0x60
	float CollisionThickness; // 0x64
	float FrictionCoefficient; // 0x68
	float DampingCoefficient; // 0x6c
	float DragCoefficient; // 0x70
	float AnimDriveSpringStiffness; // 0x74
	bool bUseBendingElements; // 0x78
	bool bUseTetrahedralConstraints; // 0x79
	bool bUseThinShellVolumeConstraints; // 0x7a
	bool bUseSelfCollisions; // 0x7b
	bool bUseContinuousCollisionDetection; // 0x7c
	FVector LinearVelocityScale; // 0x80
	float AngularVelocityScale; // 0x8c
};

struct UUMGAtlantaPurchasePopup {
	UWidgetSwitcher* LayoutSwitcher; // 0x300
	UImage* ImagePopup; // 0x308
	UTextBlock* OfferTextWithInfo; // 0x310
	UTextBlock* OfferText; // 0x318
	UTextBlock* TitleTextWithInfo; // 0x320
	UTextBlock* TitleText; // 0x328
	UTextBlock* DescriptionText; // 0x330
	UHorizontalBox* ItemsContainer; // 0x338
	UUMGPurchaseBuyButton* BuyButtonWithInfo; // 0x340
	UUMGPurchaseBuyButton* BuyButton; // 0x348
	UUMGBaseButtonWidget* CloseButton; // 0x350
	UUMGPurchaseSticker* PurchaseSticker; // 0x358
	TSoftClassPtr<UObject> PurchaseItemsInfoWidgetClass; // 0x360
};

struct UInterpTrackInstLinearColorProp {
	FLinearColor ResetColor; // 0x60
};

struct UBTService_GoalCoordinator {
	TMap<UObject*, FAIGoalWeightContainer> _managedGoals; // 0x80
};

struct UEnvQueryGenerator_PathingGrid {
	FAIDataProviderBoolValue PathToItem; // 0x110
	UNavigationQueryFilter* NavigationFilter; // 0x150
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x158
};

struct UUMGAtlantaDailyRewardsGrid {
	TSoftClassPtr<UObject> BigDailyRewardWidgetTemplate_type_8; // 0x310
	TSoftClassPtr<UObject> BigDailyRewardWidgetTemplate_type_10; // 0x340
	TSoftClassPtr<UObject> BigDailyRewardWidgetTemplate_type_14; // 0x370
	TSoftClassPtr<UObject> SmallDailyRewardWidgetTemplate_type_8; // 0x3a0
	TSoftClassPtr<UObject> SmallDailyRewardWidgetTemplate_type_10; // 0x3d0
	TSoftClassPtr<UObject> SmallDailyRewardWidgetTemplate_type_14; // 0x400
	UUniformGridPanel* DailyRewardWidgetsGridPanel; // 0x430
	UCanvasPanel* LastDailyRewardWidgetPanel; // 0x438
	int32_t NumberOfItems; // 0x440
};

struct UMaterialExpressionSceneTexture {
	FExpressionInput Coordinates; // 0x48
	ESceneTextureId SceneTextureId; // 0x64
	bool bFiltered; // 0x65
};

struct UPlanePositionGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x60
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80
	bool bEnableSignedAxis; // 0x90
	bool bFlipX; // 0x91
	bool bFlipY; // 0x92
	bool bInInteraction; // 0x93
	FVector InteractionOrigin; // 0x94
	FVector InteractionNormal; // 0xa0
	FVector InteractionAxisX; // 0xac
	FVector InteractionAxisY; // 0xb8
	FVector InteractionStartPoint; // 0xc4
	FVector InteractionCurPoint; // 0xd0
	FVector2D InteractionStartParameter; // 0xdc
	FVector2D InteractionCurParameter; // 0xe4
	FVector2D ParameterSigns; // 0xec
};

struct USearchChestInteractionBase {
	bool _handleCompletionScoreEvents; // 0x6d8
	FGameplayTag _searchableCompleteContributionPercentTag; // 0x6dc
	bool _scoreEventFired; // 0x6e8
	ASearchable* _owningChest; // 0x6f0
	bool _onLastInteractionWasComplete; // 0x6f8
};

struct USimpleDynamicMeshComponent {
	EDynamicMeshTangentCalcType TangentsType; // 0x4c0
	bool bExplicitShowWireframe; // 0x4e0
	bool bDrawOnTop; // 0x530
};

struct UMagicLeapARPinSettings {
	float UpdateCheckFrequency; // 0x30
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x34
};

struct UItemDataAsset {
	TSoftClassPtr<UObject> actorClass; // 0x48
	TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>> RequiredModifierContainers; // 0x78
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput {
	FExpressionInput ScatteringCoefficients; // 0x48
	FExpressionInput AbsorptionCoefficients; // 0x64
	FExpressionInput PhaseG; // 0x80
};

struct UK25ChainStrikeInteraction {
	UFiniteStateMachine* _chainStrikeStateMachineclass; // 0x6d8
	float _repossessFadeOutTime; // 0x6e0
	FDBDTunableRowHandle _repossessFadeInTime; // 0x6e8
	UCurveFloat* _gatewayPossessionFovModifierCurve; // 0x710
	UCurveFloat* _controlledProjectilePossessionFovModifierCurve; // 0x718
	FDBDTunableRowHandle _chargeTimeAfterGatewayPlacementCancelled; // 0x720
	FDBDTunableRowHandle _chargeTimeAfterGatewayPossessionCancelled; // 0x748
	FDBDTunableRowHandle _chargeTimeAfterControlledChainShot; // 0x770
	FDBDTunableRowHandle _gatewayPossessionFovChangeDuration; // 0x798
	FDBDTunableRowHandle _gatewayPossessionCameraPanTime; // 0x7c0
	FDBDTunableRowHandle _controlledProjectilePossessionCameraPanTime; // 0x7e8
	FDBDTunableRowHandle _controlledProjectilePossessionFovTimeChangeDuration; // 0x810
	UFiniteStateMachine* _stateMachine; // 0x838
	bool _authority_shouldIncrementChargeableComponent; // 0x840
	EChainStrikeCameraViewTarget _chainStrikeCameraViewTarget; // 0x8a9
	bool _hasHitSurvivor; // 0x8aa
};

struct UGMAdaptiveShadowMapController {
	UGMAdaptiveShadowMapAtlas* _atlas; // 0x30
	UMaterialInterface* _lightFunctionMaterial; // 0x38
	TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceList; // 0x40
	TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceActivatedList; // 0x50
};

struct USecondWind {
	ESecondWindState _currentState; // 0x3d8
	float _amountHealed; // 0x3dc
	float _numberOfHealStateToHealToActivate[0x3]; // 0x3e4
	float _durationOfHeal[0x3]; // 0x3f0
	bool _applyBrokenEffect; // 0x3fc
};

struct UChainLinkableComponent {
	UBaseCameraTargetingStrategy* _cameraTargetingStrategyClass; // 0xd0
	FName _movementStatusEffectName; // 0xd8
	FName _linkedStatusEffectName; // 0xe4
	UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy; // 0xf0
	URiflePlayerLinker* _chainLink; // 0xf8
	FTagStateBool _isLinkedLingering; // 0x130
	UChainPlayerMovementStatusEffect* _movementStatusEffect; // 0x160
	UBaseCameraTargetingStrategy* _cameraStrategy; // 0x170
};

struct AZombieCharacter {
	FTunableStat _zombieWalkSpeed; // 0x4f0
	UAuthoritativePoolableActorComponent* _poolableComponent; // 0x578
	USphereComponent* _zombieAttackDetector; // 0x580
	UStaticMeshComponent* _attackDamageZone; // 0x588
	EZombieState _zombieState; // 0x590
	FTunableStat _zombieRespawnTimeKilledBySlasher; // 0x5d0
	FTunableStat _zombieRespawnTimeKilledBySurvivor; // 0x650
	FTransform _respawnPositionBehindGate; // 0x6e0
	EZombieGender _zombieGender; // 0x710
	USkeletalMesh* _femaleSkeletalMesh; // 0x718
	FString _audioSwitchState; // 0x720
	UZombieBlindableComponent* _blindableComponent; // 0x730
	UChargeableComponent* _blindingChargeableComponent; // 0x738
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent; // 0x740
	UFlashlightableComponent* _flashLightableComponent; // 0x748
	FDBDTunableRowHandle _zombieStunBaseTime; // 0x788
	UGameplayTagContainerComponent* _objectState; // 0x7b0
	UCharacterPositionRecorderComponent* _positionRecorder; // 0x7c0
	UAuthoritativeMovementComponent* _authoritativeMovementComponent; // 0x7c8
	UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler; // 0x7d0
	TArray<AActor*> _ignoreActors; // 0x7d8
	float _zombieStunnedCapsuleRadius; // 0x7ec
	float _minFallHeight; // 0x7f0
	float _afterInAirAttackCooldown; // 0x7fc
};

struct UK25ChainStrikeBaseState {
	TSet<FName> _secondaryInteractionIDs; // 0x78
};

struct AProceduralFoliageVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x268
};

struct URenjirosBloodyGlove {
	float _revealTime; // 0x2a0
	TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper; // 0x2a8
};

struct USurvivorReelVelocityAdditiveStrategy {
	FTunableStat _reelSpeed; // 0xb8
	float _minimumLinkLengthDelta; // 0x138
	float _maximumVelocityAdditive; // 0x13c
	FTagStateBool _isBeingReeled; // 0x140
	FTagStateBool _isBeingPulled; // 0x170
};

struct UDynamicCapsuleResizerComponent {
	UCapsuleComponent* _capsule; // 0xb8
	float _shrinkPercent; // 0xd4
	float _shrinkDuration; // 0xd8
	float _expandDuration; // 0xdc
	float _stayShrunkenDuration; // 0xe0
	float _expandOverlapTestMinDeltaTime; // 0xe4
	bool _isShrinkingEnabled; // 0xe8
	bool _isShrinkingAlwaysEnabled; // 0xe9
};

struct UParticleModuleSize {
	FRawDistributionVector StartSize; // 0x38
};

struct UAtlantaNavigationScreen {
	UUMGAtlantaNavigationScreen* _umgScreen; // 0x120
};

struct UCollisionProfile {
	TArray<FCollisionResponseTemplate> Profiles; // 0x48
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x58
	TArray<FCustomProfile> EditProfiles; // 0x68
	TArray<FRedirector> ProfileRedirects; // 0x78
	TArray<FRedirector> CollisionChannelRedirects; // 0x88
};

struct UNatObjectRandomizer {
	TArray<FPotentialRandomizableSpawnerPool> PotentialRandomizableSpawnerPools; // 0x228
};

struct UMovieSceneMediaPlayerPropertySection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct ULightComponentBase {
	FGuid LightGuid; // 0x210
	float Brightness; // 0x220
	float Intensity; // 0x224
	bool bStationaryLightWithStaticFallback; // 0x228
	FColor LightColor; // 0x22c
	float LightPriority; // 0x230
	char bAffectsWorld : 1; // 0x234
	char CastShadows : 1; // 0x234
	char CastStaticShadows : 1; // 0x234
	char CastDynamicShadows : 1; // 0x234
	char CastDynamicShadowsWithNewDefaultValue : 1; // 0x234
	EDetailMode DetailLevelBeforeCastShadows; // 0x238
	ELightingDetailMode DetailLevelBeforeCastDynamicShadows; // 0x23c
	int32_t CascadeShadowMapQualityReductionBHVR; // 0x240
	char bIgnoreDynamicObjectsInShadows : 1; // 0x244
	ELightingDetailMode DetailLevelThresholdBeforeIgnoringDynamicObjectsInShadows; // 0x248
	char bAffectTranslucentLighting : 1; // 0x24c
	char bTransmission : 1; // 0x24c
	char bCastVolumetricShadow : 1; // 0x24c
	char bCastDeepShadow : 1; // 0x24c
	char bCastRaytracedShadow : 1; // 0x24c
	char bAffectReflection : 1; // 0x24c
	char bAffectGlobalIllumination : 1; // 0x24c
	float IndirectLightingIntensity; // 0x250
	float VolumetricScatteringIntensity; // 0x254
	float AmbientOcclusionContribution; // 0x258
	int32_t SamplesPerPixel; // 0x25c
};

struct UMovieSceneParticleSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct ADemogorgonPortal {
	UPrimitiveComponent* _portalAreaCollider; // 0x328
	UChargeableComponent* _destroyChargeable; // 0x330
	UChargeableComponent* _teleportChargeable; // 0x338
	EDemogorgonPortalState _portalState; // 0x340
	UAkAudioEvent* _portalIdleSound; // 0x348
	UAkAudioEvent* _portalDestroyingStart; // 0x350
	UAkAudioEvent* _portalTeleportingSound; // 0x358
	UParticleSystem* _destroyParticleSystem; // 0x360
	float _destroyDuration; // 0x368
};

struct UChaosPhysicalMaterial {
	float Friction; // 0x30
	float StaticFriction; // 0x34
	float Restitution; // 0x38
	float LinearEtherDrag; // 0x3c
	float AngularEtherDrag; // 0x40
	float SleepingLinearVelocityThreshold; // 0x44
	float SleepingAngularVelocityThreshold; // 0x48
};

struct UAnimBoneCompressionSettings {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x30
};

struct UDistributionVectorUniformCurve {
	FInterpCurveTwoVectors ConstantCurve; // 0x40
	char bLockAxes1 : 1; // 0x58
	char bLockAxes2 : 1; // 0x58
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x5c
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x5e
	char bUseExtremes : 1; // 0x64
};

struct UMaterialExpressionConstant4Vector {
	FLinearColor Constant; // 0x48
};

struct ADBDGame_Lobby {
	UIdentityValidation* _identityValidation; // 0x370
};

struct UAISkill_InteractionTarget_StealthGhost {
	float CrouchSwapDelay; // 0x220
};

struct UUMGStreamVideoWidget {
	UImage* VideoImage; // 0x300
	UButton* TapButton; // 0x308
	UUMGBaseButtonWidget* SkipButton; // 0x310
	float _timerShowSkipButton; // 0x328
};

struct UUMGAtlantaMonthlyPassEventTemplate {
	UUMGSubscriptionPackButtonWidget* MonthlyPassWidget; // 0x300
};

struct UBTTask_RotateToFaceBBEntry {
	float Precision; // 0xa8
};

struct UEnvQueryGenerator_ProjectedPoints {
	FEnvTraceData ProjectionData; // 0x58
};

struct ULinkedVomitInteraction {
	bool _chargeComplete; // 0x6f4
};

struct USurvivorContaminationComponent {
	FTagStateBool _isContaminated; // 0xd0
	UChargeableComponent* _injectSerumChargeable; // 0x100
	FDBDTunableRowHandle _injectSerumSecondsToCharge; // 0x108
	FTunableStat _contaminationHinderedSeconds; // 0x130
	FDBDTunableRowHandle _contaminationHinderedValue; // 0x1b0
	TArray<UInteractionDefinition*> _injectSerumInteractionsClasses; // 0x1e0
	TArray<UInteractionDefinition*> _injectSerumInteractions; // 0x1f0
};

struct UUMGPurchaseBuyButton {
	UTextBlock* PriceText; // 0x430
};

struct UEditNormalsTool {
	UEditNormalsToolProperties* BasicProperties; // 0x98
	UEditNormalsAdvancedProperties* AdvancedProperties; // 0xa0
	TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8
};

struct UNiagaraParameterCollection {
	FName Namespace; // 0x30
	TArray<FNiagaraVariable> Parameters; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x50
	FGuid CompileId; // 0x58
};

struct UMaterialExpressionShaderStageSwitch {
	FExpressionInput PixelShader; // 0x48
	FExpressionInput VertexShader; // 0x64
};

struct UUMGPopupButton {
	float DisabledOpacity; // 0x444
	float EnabledOpacity; // 0x448
	UImage* VFXs; // 0x450
	UImage* Line; // 0x458
	UImage* FXSmoke; // 0x460
};

struct UBTDecorator_TagCooldown {
	FGameplayTag CooldownTag; // 0x70
	float CooldownDuration; // 0x7c
	bool bAddToExistingDuration; // 0x80
	bool bActivatesCooldown; // 0x81
};

struct UGassedStatusEffect {
	bool _isInCloud; // 0x350
	bool _isInAntidoteCloud; // 0x351
	TSet<ABaseGasCloudProjectile*> _overlappingClouds; // 0x358
	TSet<ABaseGasCloudProjectile*> _overlappingAntidoteClouds; // 0x3a8
	uint16_t _totalTimesEnteringToxicClouds; // 0x400
};

struct ULightmassPrimitiveSettingsObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x30
};

struct ABreakableBase {
	UBoxComponent* _breakableCollision; // 0x328
	EBreakableState _state; // 0x330
	UAkComponent* _akAudioBreakable; // 0x338
	UAkAudioEvent* _akAudioBreakEvent; // 0x340
	USceneComponent* _rootComponent; // 0x348
};

struct UTestMovieSceneTrack {
	bool bHighPassFilter; // 0x60
	TArray<UMovieSceneSection*> SectionArray; // 0x68
};

struct UBTService_BlueprintBase {
	AAIController* AIOwner; // 0x78
	AActor* ActorOwner; // 0x80
	char bShowPropertyDetails : 1; // 0x98
	char bShowEventDetails : 1; // 0x98
};

struct UMovieScenePrimitiveMaterialTrack {
	int32_t MaterialIndex; // 0x98
};

struct ADestructibleActor {
	UDestructibleComponent* DestructibleComponent; // 0x230
	FMulticastInlineDelegate OnActorFracture; // 0x238
};

struct UMovieSceneMarginSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UInteractor {
	FString InteractorName; // 0x210
	bool IsUsable; // 0x250
	FLock _lock; // 0x254
	FLock _reservation; // 0x25c
	UInteractionDefinition* _currentInteraction; // 0x268
	TArray<UInteractionDefinition*> _interactionDefinitions; // 0x270
};

struct UPhantomTrapBurnable {
	float _traceZOffset; // 0x110
};

struct UUMGMenuBaseBanner {
	UImage* BannerImage; // 0x448
	UTextBlock* Title; // 0x450
	TScriptInterface<ISlateTextureAtlasInterface> DefaultBanner; // 0x458
};

struct UBTTask_RunBehaviorDynamic {
	FGameplayTag InjectionTag; // 0x78
	UBehaviorTree* DefaultBehaviorAsset; // 0x88
	UBehaviorTree* BehaviorAsset; // 0x90
};

struct UDemogorgonPortalPlacementValidationStrategy {
	UPortalPlacerStateComponent* _portalPlacerState; // 0xe0
	UChargedAttackStateComponent* _chargedAttackState; // 0xe8
	float _distanceForWorldCollisionDetection; // 0xf0
	float _numberOfGroundTest; // 0xf4
	float _portalEdgeTestRadius; // 0xf8
	float _maxElevationDifferentialOnPortalEdge; // 0xfc
};

struct UCustomizationTooltipWidget {
	UDBDTextBlock* ToolTipStatusTB; // 0x2d8
};

struct UStereoLayerComponent {
	char bLiveTexture : 1; // 0x210
	char bSupportsDepth : 1; // 0x210
	char bNoAlphaChannel : 1; // 0x210
	UTexture* Texture; // 0x218
	UTexture* LeftTexture; // 0x220
	char bQuadPreserveTextureRatio : 1; // 0x228
	FVector2D QuadSize; // 0x22c
	FBox2D UVRect; // 0x234
	float CylinderRadius; // 0x248
	float CylinderOverlayArc; // 0x24c
	int32_t CylinderHeight; // 0x250
	FEquirectProps EquirectProps; // 0x254
	EStereoLayerType StereoLayerType; // 0x29c
	EStereoLayerShape StereoLayerShape; // 0x29d
	UStereoLayerShape* Shape; // 0x2a0
	int32_t Priority; // 0x2a8
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles {
	uint32_t NumParticles; // 0x30
};

struct UUMGBaseFriendListElement {
	UImage* StatusPicture; // 0x300
	UTextBlock* FriendName; // 0x308
	UTextBlock* FriendStatus; // 0x310
	UCanvasPanel* SelectionHighlight; // 0x318
	UUMGBaseButtonWidget* ItemSelectionBaseButton; // 0x320
	UNamedSlot* ContextualMenuPosition; // 0x328
	FAtlantaFriendUIData _cachedFriendData; // 0x330
	UDataTable* FriendUIStatusDataTable; // 0x398
};

struct AHatch {
	EHatchState _hatchState; // 0x378
	bool _isSurvivorEscaping; // 0x379
	bool _isEndGameOver; // 0x37a
	bool _isForceOpen; // 0x37b
	bool _attemptToCloseHatchOnNextEscape; // 0x37c
	UPrimitiveComponent* _baseCollision; // 0x388
	FDBDTunableRowHandle _hatchOpenDuration; // 0x3a8
};

struct UAISenseConfig_PointOfInterest {
	UAISense_PointOfInterest* Implementation; // 0x50
	float MinGeneratorRepairSoundRange; // 0x58
	float MaxGeneratorRepairSoundRange; // 0x5c
};

struct USpiritFury {
	int32_t _palletToBreakCountPerLevel[0x3]; // 0x3d4
};

struct UParticleModuleLight_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x128
};

struct UPhysicsSettings {
	float DefaultGravityZ; // 0x48
	float DefaultTerminalVelocity; // 0x4c
	float DefaultFluidFriction; // 0x50
	int32_t SimulateScratchMemorySize; // 0x54
	int32_t RagdollAggregateThreshold; // 0x58
	float TriangleMeshTriangleMinAreaThreshold; // 0x5c
	bool bEnableShapeSharing; // 0x60
	bool bEnablePCM; // 0x61
	bool bEnableStabilization; // 0x62
	bool bWarnMissingLocks; // 0x63
	bool bEnable2DPhysics; // 0x64
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x68
	ESettingsLockedAxis LockedAxis; // 0x9c
	ESettingsDOF DefaultDegreesOfFreedom; // 0x9d
	float BounceThresholdVelocity; // 0xa0
	EFrictionCombineMode FrictionCombineMode; // 0xa4
	EFrictionCombineMode RestitutionCombineMode; // 0xa5
	float MaxAngularVelocity; // 0xa8
	float MaxDepenetrationVelocity; // 0xac
	float ContactOffsetMultiplier; // 0xb0
	float MinContactOffset; // 0xb4
	float MaxContactOffset; // 0xb8
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xbc
	ECollisionTraceFlag DefaultShapeComplexity; // 0xbd
	bool bDefaultHasComplexCollision; // 0xbe
	bool bSuppressFaceRemapTable; // 0xbf
	bool bSupportUVFromHitResults; // 0xc0
	bool bDisableActiveActors; // 0xc1
	bool bDisableKinematicStaticPairs; // 0xc2
	bool bDisableKinematicKinematicPairs; // 0xc3
	bool bDisableCCD; // 0xc4
	bool bEnableEnhancedDeterminism; // 0xc5
	float AnimPhysicsMinDeltaTime; // 0xc8
	bool bSimulateAnimPhysicsAfterReset; // 0xcc
	float MaxPhysicsDeltaTime; // 0xd0
	bool bSubstepping; // 0xd4
	bool bSubsteppingAsync; // 0xd5
	float MaxSubstepDeltaTime; // 0xd8
	int32_t MaxSubsteps; // 0xdc
	float SyncSceneSmoothingFactor; // 0xe0
	float InitialAverageFrameRate; // 0xe4
	int32_t PhysXTreeRebuildRate; // 0xe8
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0xf0
	FBroadphaseSettings DefaultBroadphaseSettings; // 0x100
	FChaosPhysicsSettings ChaosSettings; // 0x140
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

struct UMovieSceneAudioTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x60
};

struct USoundfieldEffectBase {
	USoundfieldEffectSettingsBase* Settings; // 0x30
};

struct UUMGAtlantaDailyRewardsScreen {
	UUMGAtlantaDailyRewardsGrid* DailyRewardWidgetsGrid; // 0x310
	UCanvasPanel* ContinueButtonPanel; // 0x318
	UUMGPopupButton* ContinueButton; // 0x320
	UTextBlock* RemainingTimeTextBlock; // 0x328
	FSlateColor NormalColor; // 0x330
	FSlateColor WarningColor; // 0x358
};

struct UCrowAnimInstance {
	bool _shouldTakeOff; // 0x270
	UWorldRunawayMeshComponent* _crow; // 0x278
};

struct UActivateSuperMode {
	FAnimationMontageDescriptor _activationMontage; // 0x5b8
	FDBDTunableRowHandle _activationDuration; // 0x5d8
	FDBDTunableRowHandle _confirmationChargeDuration; // 0x600
};

struct UBTTask_ExtWait {
	FAITunableParameter WaitTimeInterval; // 0x80
	FAITunableParameter WaitRandomDeviation; // 0x90
};

struct AMovableCamera {
	float MovementSpeed; // 0x290
	bool RequiresShiftModifierForInput; // 0x294
	APlayerController* _playerController; // 0x2b0
};

struct UUMGTallyCharacterProgressionWidget {
	UUMGTallyCharacterProgressionBar* CharacterProgressionBar; // 0x310
	UTextBlock* TextCharacterCurrentExperience; // 0x318
	UTextBlock* TextExperienceForNextLevel; // 0x320
	UTextBlock* TextExperienceEarned; // 0x328
	UTextBlock* TextCurrentLevel; // 0x330
	UImage* CharacterPicture; // 0x338
	UImage* PrestigeIcon; // 0x340
	UTextBlock* TextCharacterName; // 0x348
	int32_t ExperiencePerSecond; // 0x350
};

struct UContextObserver {
	EContextSection ObservedContextSection; // 0xb8
};

struct UNavigationSystemV1 {
	ANavigationData* MainNavData; // 0x30
	ANavigationData* AbstractNavData; // 0x38
	FName DefaultAgentName; // 0x40
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x50
	char bAutoCreateNavigationData : 1; // 0x80
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x80
	char bAllowClientSideNavigation : 1; // 0x80
	char bShouldDiscardSubLevelNavData : 1; // 0x80
	char bTickWhilePaused : 1; // 0x80
	char bSupportRebuilding : 1; // 0x80
	char bInitialBuildingLocked : 1; // 0x80
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x81
	ENavDataGatheringModeConfig DataGatheringMode; // 0x84
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x88
	float ActiveTilesUpdateInterval; // 0x8c
	TArray<FNavDataConfig> SupportedAgents; // 0x90
	FNavAgentSelector SupportedAgentsMask; // 0xa0
	TArray<ANavigationData*> NavDataSet; // 0xa8
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xb8
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xd8
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xe8
	FNavigationSystemRunMode OperationMode; // 0x1e0
	float DirtyAreasUpdateFreq; // 0x53c
};

struct UFleeComponent {
	AActor* _threat; // 0xb8
};

struct ANavigationObjectBase {
	UCapsuleComponent* CapsuleComponent; // 0x238
	UBillboardComponent* GoodSprite; // 0x240
	UBillboardComponent* BadSprite; // 0x248
	char bIsPIEPlayerStart : 1; // 0x250
};

struct UAsyncActionLoadPrimaryAssetList {
	FMulticastInlineDelegate COMPLETED; // 0x80
};

struct UBloodwebSettings {
	TArray<FName> _duplicableItems; // 0x38
};

struct UCurrencyProgressionTooltipWidget {
	UDBDTextBlock* CurrencyTB; // 0x2d8
	UDBDTextBlock* CurrencyTitleTB; // 0x2e0
	UDBDRichTextBlock* CurrencyDescriptionRTB; // 0x2e8
	UDBDImage* TitleBgIMG; // 0x2f0
};

struct UMaterialExpressionNoise {
	FExpressionInput Position; // 0x48
	FExpressionInput FilterWidth; // 0x64
	float Scale; // 0x80
	int32_t Quality; // 0x84
	ENoiseFunction NoiseFunction; // 0x88
	char bTurbulence : 1; // 0x8c
	int32_t Levels; // 0x90
	float OutputMin; // 0x94
	float OutputMax; // 0x98
	float LevelScale; // 0x9c
	char bTiling : 1; // 0xa0
	uint32_t RepeatSize; // 0xa4
};

struct USurvivorAimableSubAnimInstance {
	float _pitch; // 0x4f0
	bool _isHoldingAimItem; // 0x4f4
	bool _isAiming; // 0x4f5
	float _isAimingAlpha; // 0x4f8
	FVector _aimPoint; // 0x4fc
	float _shoulderToCollisionDistance; // 0x508
};

struct UK26PowerChargePresentationItemProgressComponent {
	UK26AmmoHandlerComponent* _ammoHandler; // 0xb8
};

struct UAISenseEvent_Damage {
	FAIDamageEvent Event; // 0x30
};

struct UCoreGameManualCategoryButton {
	UDBDTextBlock* Title; // 0x398
	UDBDTextBlock* Description; // 0x3a0
	UDBDImage* Icon; // 0x3a8
	UDBDImage* Background; // 0x3b0
	UTexture2D* IconTexture; // 0x3b8
	UTexture2D* BackgroundTexture; // 0x3c0
};

struct UBloodEcho {
	FGameplayTag _statusEffectDurationTag; // 0x3d0
	float _cooldownDuration[0x3]; // 0x3dc
};

struct UAkAssetBase {
	UAkAssetPlatformData* PlatformAssetData; // 0x48
};

struct UAIDataProvider_Random {
	float Min; // 0x48
	float Max; // 0x4c
	char bInteger : 1; // 0x50
};

struct UCoreExampleWidget {
	FString EditAnywhere; // 0x2f8
	FString EditDefaultsOnly; // 0x308
	FString EditInstanceOnly; // 0x318
	FString EditNoBlueprint; // 0x328
	FString EditDefaultsOnlyBlueprintReadOnly; // 0x338
	FString VisibleAnywhere; // 0x348
	FString VisibleDefaultsOnly; // 0x358
	FString VisibleInstanceOnly; // 0x368
	FMulticastInlineDelegate ExampleButtonClickDelegate; // 0x378
};

struct UUMGAtlantaStoreScreen {
	UScaleBox* AuricCellsWidget; // 0x320
	UUniformGridPanel* AuricCellsGridPanel; // 0x328
};

struct UMaterialExpressionFloor {
	FExpressionInput Input; // 0x48
};

struct UDBDWrapBox {
	FVector2D InnerSlotPadding; // 0x140
	float WrapWidth; // 0x148
	bool bExplicitWrapWidth; // 0x14c
	EHorizontalAlignment HorizontalAlignment; // 0x14d
};

struct UMaterialExpressionLandscapeVisibilityMask {
	FGuid ExpressionGUID; // 0x48
};

struct UBiteTheBullet {
	ADBDPlayer* _server_healTarget; // 0x3d0
};

struct UNiagaraDataInterfaceVector4Curve {
	FRichCurve XCurve; // 0x60
	FRichCurve YCurve; // 0xe0
	FRichCurve ZCurve; // 0x160
	FRichCurve WCurve; // 0x1e0
};

struct UHarpoonLauncher {
	FDBDTunableRowHandle _launchSpeed; // 0x180
	FDBDTunableRowHandle _launchDistanceFromCamera; // 0x1a8
	float _launchZOffset; // 0x1d0
};

struct UAgonyComponent {
	FTagStateBool _isInAgony; // 0xc8
	FTagStateBool _isAgonyMoriable; // 0xf8
	FDBDTunableRowHandle _agonyNumberOfHookForMiniMori; // 0x128
	bool _inAttackTrailDamageCooldown; // 0x188
	FDBDTunableRowHandle _attackTrailDamageCooldownTime; // 0x190
	TArray<FAgonyDisplayFxEvent> _showAgonyFXEvents; // 0x1d0
	TArray<FAgonyDisplayFxEvent> _hideAgonyFXEvents; // 0x1e0
};

struct UGameplayTasksComponent {
	char bIsNetDirty : 1; // 0xc4
	TArray<UGameplayTask*> SimulatedTasks; // 0xc8
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd8
	TArray<UGameplayTask*> TickingTasks; // 0xf8
	TArray<UGameplayTask*> KnownTasks; // 0x108
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x118
};

struct AServerStatReplicator {
	bool bUpdateStatNet; // 0x230
	bool bOverwriteClientStats; // 0x231
	uint32_t Channels; // 0x234
	uint32_t InRate; // 0x238
	uint32_t OutRate; // 0x23c
	uint32_t MaxPacketOverhead; // 0x244
	uint32_t InRateClientMax; // 0x248
	uint32_t InRateClientMin; // 0x24c
	uint32_t InRateClientAvg; // 0x250
	uint32_t InPacketsClientMax; // 0x254
	uint32_t InPacketsClientMin; // 0x258
	uint32_t InPacketsClientAvg; // 0x25c
	uint32_t OutRateClientMax; // 0x260
	uint32_t OutRateClientMin; // 0x264
	uint32_t OutRateClientAvg; // 0x268
	uint32_t OutPacketsClientMax; // 0x26c
	uint32_t OutPacketsClientMin; // 0x270
	uint32_t OutPacketsClientAvg; // 0x274
	uint32_t NetNumClients; // 0x278
	uint32_t InPackets; // 0x27c
	uint32_t OutPackets; // 0x280
	uint32_t InBunches; // 0x284
	uint32_t OutBunches; // 0x288
	uint32_t OutLoss; // 0x28c
	uint32_t InLoss; // 0x290
	uint32_t VoiceBytesSent; // 0x294
	uint32_t VoiceBytesRecv; // 0x298
	uint32_t VoicePacketsSent; // 0x29c
	uint32_t VoicePacketsRecv; // 0x2a0
	uint32_t PercentInVoice; // 0x2a4
	uint32_t PercentOutVoice; // 0x2a8
	uint32_t NumActorChannels; // 0x2ac
	uint32_t NumConsideredActors; // 0x2b0
	uint32_t PrioritizedActors; // 0x2b4
	uint32_t NumRelevantActors; // 0x2b8
	uint32_t NumRelevantDeletedActors; // 0x2bc
	uint32_t NumReplicatedActorAttempts; // 0x2c0
	uint32_t NumReplicatedActors; // 0x2c4
	uint32_t NumActors; // 0x2c8
	uint32_t NumNetActors; // 0x2cc
	uint32_t NumDormantActors; // 0x2d0
	uint32_t NumInitiallyDormantActors; // 0x2d4
	uint32_t NumNetGUIDsAckd; // 0x2d8
	uint32_t NumNetGUIDsPending; // 0x2dc
	uint32_t NumNetGUIDsUnAckd; // 0x2e0
	uint32_t ObjPathBytes; // 0x2e4
	uint32_t NetGUIDOutRate; // 0x2e8
	uint32_t NetGUIDInRate; // 0x2ec
	uint32_t NetSaturated; // 0x2f0
};

struct UHexUndying {
	float _revealAuraDistanceFromTotem[0x3]; // 0x498
};

struct UNavigationGraphNodeComponent {
	FNavGraphNode Node; // 0x210
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x228
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x230
};

struct UCameraAttachmentComponent {
	USceneComponent* _anchor; // 0xb8
	FCameraAttachment _defaultCameraAttachment; // 0xd0
	FCameraAttachment _currentCameraAttachment; // 0xe8
};

struct UAkIOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkAudioSession AudioSession; // 0x98
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0
};

struct UCannibalChainsawPowerComponent {
	UPowerChargeComponent* _chainsawPowerCharge; // 0xc0
	UPowerChargeComponent* _chainsawPowerDischarge; // 0xc8
	UPowerChargeComponent* _tantrumPowerCharge; // 0xd0
	FTagStateBool _isInTantrum; // 0x1a0
	int32_t _numPowerCharges; // 0x1d0
	int32_t _numPowerChargesConsumed; // 0x1d4
	FTunableStat _chainsawDashDuration; // 0x1e0
	FTunableStat _chainsawPowerMaxCharge; // 0x260
	FTunableStat _chainsawChargeRate; // 0x2e0
	FTunableStat _chainsawMaxNumberOfCharges; // 0x360
	FDBDTunableRowHandle _chainsawCooldownIncreaseRate; // 0x3e0
	FTunableStat _chainsawCooldownDuration; // 0x408
	FDBDTunableRowHandle _chainsawMaxCooldownDuration; // 0x488
	FDBDTunableRowHandle _tantrumChargeRate; // 0x4b0
	FDBDTunableRowHandle _tantrumDischargeRate; // 0x4d8
	FTunableStat _tantrumMaxCharge; // 0x500
	FDBDTunableRowHandle _tantrumDurationIncreaseRate; // 0x580
	FTunableStat _tantrumDuration; // 0x5a8
	FDBDTunableRowHandle _tantrumMaxDuration; // 0x628
};

struct ULandscapeMeshProxyComponent {
	FGuid LandscapeGuid; // 0x4e8
	TArray<FIntPoint> ProxyComponentBases; // 0x4f8
	int8_t ProxyLOD; // 0x508
};

struct UK26PowerStatusHandlerComponent {
	TArray<UInteractionDefinition*> _interactionsDuringWhichTheCrowIsIgnored; // 0xc8
	FDBDTunableRowHandle _invincibilityTime; // 0xf0
	FDBDTunableRowHandle _killerInstinctDelay; // 0x118
	FDBDTunableRowHandle _killerInstinctGracePeriod; // 0x140
	AActor* _statusIndicatorClass; // 0x168
	FName _k26KillerInstinctStatusEffectName; // 0x170
	TArray<FK26SurvivorStatus> _survivorStatusList; // 0x180
};

struct UAICharacterEscapeCarried {
	ACamperPlayer* _camperPlayer; // 0x58
	UAICharacterEscapeCarriedData* _behaviourData; // 0x60
};

struct UBloodTrailSettings {
	float _initialDelay; // 0x38
	int32_t _numBloodDropsPerBloodPool; // 0x3c
	float _bloodDropsInterval; // 0x40
	bool _randomlyRotateBloodDrops; // 0x44
	float _bloodDropsRandomScatter; // 0x48
	ETraceTypeQuery _bloodTraceChannel; // 0x4c
	UBloodDecalEffect* _bloodDecalEffect; // 0x50
	FBHVRPerDetailModeInt _decalPoolSize; // 0x58
	float _recycleThresholdPercentage; // 0xf8
	float _recycleDistancePercentage; // 0xfc
	FBHVRPerDetailModeInt _maxOverlapping; // 0x100
};

struct UEdGraphPin_Deprecated {
	FString PinName; // 0x30
	FString PinToolTip; // 0x40
	EEdGraphPinDirection Direction; // 0x50
	FEdGraphPinType PinType; // 0x58
	FString defaultValue; // 0xc8
	FString AutogeneratedDefaultValue; // 0xd8
	UObject* DefaultObject; // 0xe8
	FText DefaultTextValue; // 0xf0
	TArray<UEdGraphPin_Deprecated*> LinkedTo; // 0x108
	TArray<UEdGraphPin_Deprecated*> SubPins; // 0x118
	UEdGraphPin_Deprecated* ParentPin; // 0x128
	UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x130
};

struct UChatroom {
	FString CurrentChatRoomId; // 0x30
	int32_t MaxChatRoomRetries; // 0x40
	int32_t NumChatRoomRetries; // 0x44
};

struct UPaperSpriteComponent {
	UPaperSprite* SourceSprite; // 0x478
	UMaterialInterface* MaterialOverride; // 0x480
	FLinearColor SpriteColor; // 0x488
};

struct ULightFunctionActorSpawner {
	UTexture* LightFunctionTexture; // 0x2c8
};

struct UBaseKillerAttackSubAnimInstance {
	ASlasherPlayer* _owningKiller; // 0x5b0
};

struct UPolyEditTransformProperties {
	bool bShowWireframe; // 0x58
	ELocalFrameMode LocalFrameMode; // 0x5c
	bool bLockRotation; // 0x60
	bool bSnapToWorldGrid; // 0x61
};

struct UHasObjectStateWithMaxDuration {
	float _maxDuration; // 0x150
};

struct ULightBurnable {
	FMulticastInlineDelegate OnBurnChargeCompleteEvent; // 0xb8
	TArray<AActor*> FirecrackerLineOfSightIgnoredActors; // 0xe0
	UChargeableComponent* _chargeable; // 0xf0
	UFlashlightableComponent* _flashlightable; // 0xf8
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandler; // 0x100
	bool _isBurning; // 0x108
};

struct ALobbyBeaconHost {
	TSoftClassPtr<UObject> LobbyStateClass; // 0x268
	ALobbyBeaconState* LobbyState; // 0x298
};

struct AMedkit {
	UAkComponent* _akComponent; // 0x510
	UChargerComponent* _charger; // 0x518
	UParticleSystem* _dustRingTemplate; // 0x520
	UAkAudioEvent* _medkitGetAkEvent; // 0x528
	UAkAudioEvent* _medkitDropAkEvent; // 0x530
	UAkAudioBank* _medkitBank; // 0x538
	float _healOtherChargeMultiplier; // 0x540
};

struct UMaterialExpressionReflectionVectorWS {
	FExpressionInput CustomWorldNormal; // 0x48
	char bNormalizeCustomWorldNormal : 1; // 0x64
};

struct UNiagaraDataInterfaceVectorField {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UEnvQueryGenerator_CurrentLocation {
	UEnvQueryContext* QueryContext; // 0x58
};

struct UTormentTrailDetectorComponent {
	TArray<ATormentTrailPoint*> _overlappedTrailPoints; // 0xd0
	FTagStateBool _isInTormentTrail; // 0xe0
	FTagStateBool _isInTormentTrailEffect; // 0x110
	FTunableStat _inTormentTrailLastingEffectTime; // 0x148
};

struct AK24Power {
	FDBDTunableRowHandle _powerWalkSpeed; // 0x550
	FDBDTunableRowHandle _powerWalkSpeedLevel3; // 0x578
	FDBDTunableRowHandle _normalWalkSpeed; // 0x5a0
	FDBDTunableRowHandle _powerMouseYawScale; // 0x5c8
	FDBDTunableRowHandle _powerYawAdjustTime; // 0x5f0
	FDBDTunableRowHandle _powerGamePadYawScale; // 0x618
	UChargeableComponent* _activateK24PowerCharge; // 0x640
	FDBDTunableRowHandle _activateK24PowerSecondsToCharge; // 0x648
	UCurveFloat* _activatePowerChargeSpeedCurve; // 0x670
	UCurveFloat* _activatePowerChargeLvl3SpeedCurve; // 0x678
	UInteractionDefinition* _k24PowerCooldownInteraction; // 0x688
	FDBDTunableRowHandle _whipLengthLevel1; // 0x690
	FDBDTunableRowHandle _whipLengthLevel2; // 0x6b8
	FDBDTunableRowHandle _whipLengthLevel3; // 0x6e0
	USurvivorContaminationComponent* _contaminationComponentBP; // 0x708
	FTunableStat _powerChargeSurvivorContaminatedPoint; // 0x718
	FTunableStat _powerChargeZombieKilledPoint; // 0x798
	FTunableStat _powerChargeSurvivorHitPoint; // 0x818
	float _powerLevelPoints; // 0x898
	FDBDTunableRowHandle _powerLevelPointsToLevel2; // 0x8a0
	FDBDTunableRowHandle _powerLevelPointsToLevel3; // 0x8c8
};

struct UARTrackedObject {
	UARCandidateObject* DetectedObject; // 0xf0
};

struct USpiritHuskActivePhaseWalkAnimInstance {
	float _elapsedTimeSinceFakingRealKillerPose; // 0x280
	float _idleAnimationExplicitTime; // 0x284
	UAnimSequence* _idleAnimationSequence; // 0x290
};

struct ADBDAIPlayerController {
	TArray<UAICharacterBehaviour*> _currentBehaviours; // 0x5f0
};

struct ACamperExposerInstance {
	bool IsInterior; // 0x230
	FString _audioAgravationLevelRtpc; // 0x238
};

struct UEnvQueryGenerator_BlueprintBase {
	FText GeneratorsActionDescription; // 0x58
	UEnvQueryContext* Context; // 0x70
	UEnvQueryItemType* GeneratedItemType; // 0x78
};

struct UDBDEmblem {
	float _points; // 0xb8
	TArray<FProgressionPoints> _progressionPoints; // 0xc0
	FDataTableRowHandle _definition; // 0xd0
};

struct UDBDGameInstance {
	UDBDDesignTunables* DesignTunableClass; // 0x238
	UDBDDesignTunables* DesignTunables; // 0x240
	URegionFinder* RegionClass; // 0x248
	Ushopmanager* ShopManagerClass; // 0x250
	UFriendManager* FriendManagerClass; // 0x258
	UGameEventTracker* GameEventTracker; // 0x260
	UDBDKeyDisplayInfo* KeyDisplayInfo; // 0x268
	bool LeaveGameRequested; // 0x270
	UPlayerProfileDAL* PlayerProfileDAL; // 0x278
	int32_t GenerationSeed; // 0x280
	FString PaperTileAssetName; // 0x288
	int32_t GenerationPlayerCount; // 0x298
	FString PremadeMap; // 0x2a0
	TArray<FForceSpawnTileData> ForceSpawnTileData; // 0x2b0
	AOfferingSequenceManager* OfferingSequence; // 0x2e8
	TArray<FParadiseData> ParadiseData; // 0x2f0
	bool PlayerProfileLoadFailed; // 0x300
	UNewsContentManager* NewsContentManager; // 0x308
	UContentScheduleManager* ContentScheduleManager; // 0x310
	UCDNPatchManager* CDNPatchManager; // 0x318
	UCharacterProgressionManager* CharacterProgressionManager; // 0x320
	UCharacterXPManager* CharacterXPManager; // 0x328
	UAtlantaRitualsManager* AtlRitualsManager; // 0x330
	UAtlantaFreeTicketsManager* FreeTicketsManager; // 0x338
	FString AuthOrEACErrorAdditionalInfo; // 0x340
	bool HasServerLeftMatch; // 0x350
	bool HasWrittenGameEndStats; // 0x351
	UFearMarketManager* FearMarketManager; // 0x358
	Ushopmanager* shopmanager; // 0x360
	UFriendManager* FriendManager; // 0x368
	UWalletHandler* WalletHandler; // 0x370
	FName TutorialRequesterName; // 0x378
	UControllerPairingManager* ControllerPairingManager; // 0x388
	UChunkingManager* ChunkingManager; // 0x478
	FMulticastInlineDelegate OnPlayerDisconnect; // 0x480
	UAssetLibraryManager* _assetLibraryManager; // 0x578
	TSoftClassPtr<UObject> _bloodwebManagerClass; // 0x580
	UOnlineTransactionServiceComponent* _onlineTransactionService; // 0x5b0
	TSoftClassPtr<UObject> _sharedAuthenticationManagerClass; // 0x5b8
	UDBDPersistentData* _persistentData; // 0x718
	UPlayerDataStorageFacade* _playerDataFacade; // 0x720
	URankManager* _rankManager; // 0x728
	UDBDPlayerLevelManager* _playerLevelManager; // 0x730
	UPlayerNameRegistration* _playerNameRegistration; // 0x738
	Uspecialeventmanager* _specialEventManager; // 0x740
	UBonusPointEventsManager* _bonusPointEventsManager; // 0x748
	UDBDTimeTravelManager* _timeTravelManager; // 0x750
	UToastManager* _toastManager; // 0x758
	UDBDSocialNotificationFactory* _socialNotificationFactory; // 0x760
	UDBDPartyFacade* _partyFacade; // 0x768
	UPenaltyTracker* _penaltyTracker; // 0x770
	ULightingHelper* _ligthingHelper; // 0x7a0
	UOfferingHandler* _offeringHandler; // 0x7a8
	TArray<UActorKnowledgeCollection*> _actorKnowledgeCollections; // 0x7b8
	UMapActorDB* _mapActorDB; // 0x7c8
	TArray<UInteractionProficiency*> _interactionProficiencies; // 0x7d0
	UDBDHud* _theHud; // 0x7e0
	UBloodwebManager* BloodwebManager; // 0x810
	USharedAuthenticationComponent* _sharedAuthenticationManager; // 0x818
	UPopupSequencer* _popupSequencer; // 0x820
	UPopupFactory* _popupFactory; // 0x828
	UDBDAuthentication* _auth; // 0x830
	UDBDEasyAntiCheat* _eac; // 0x838
	TArray<TWeakObjectPtr<UObject>> _execObjects; // 0x918
	bool _networkFailureDetected; // 0x928
	bool _networkConnectionMonitoringOnly; // 0x929
	bool _achievementStatsUploadEnabled; // 0x92a
	bool _isDisconnected; // 0x92b
	bool _isGamepadReconnected; // 0x92c
	bool _isProfileOffline; // 0x92d
	bool _isAppSuspended; // 0x92e
	bool _isAppResumed; // 0x92f
	bool _isInvitationRejected; // 0x930
	bool _isAdditionalContentInstalled; // 0x931
	bool _isCloudInventoryInitialized; // 0x932
	UOfferingEffectCollection* _resultOfferingAndPerkEffects; // 0x960
	UInventoryHandler* _inventoryHandler; // 0x968
	ULocalEventManager* _localEventManager; // 0x970
	UPlayerReportManager* _playerReportManager; // 0x978
	UCinematicManager* _cinematicManager; // 0x980
	USoftBanManager* _softBanManager; // 0x988
	UConsentManager* _consentManager; // 0x990
	UOnlineSystemHandler* _onlineSystemHandler; // 0x998
	UDedicatedServerManager* _dedicatedServerManager; // 0x9a0
	URegionFinder* _regionFinder; // 0x9a8
	UDecalSpawnerCollection* _decalSpawnerCollection; // 0x9b0
	UPrimitiveCollection* _characterClippingPrimitiveCollection; // 0x9b8
	UAtlantaTooltipManager* _atlantaTooltipManager; // 0x9c0
	uint32_t LastProviderErrorCode; // 0x9c8
	EDisconnectErrors _disconnectError; // 0x9cc
	UDateTimerUpdater* _dateTimerUpdater; // 0x9d0
};

struct UAxisAngleGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x60
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80
	bool bInInteraction; // 0x90
	FVector RotationOrigin; // 0x94
	FVector RotationAxis; // 0xa0
	FVector RotationPlaneX; // 0xac
	FVector RotationPlaneY; // 0xb8
	FVector InteractionStartPoint; // 0xc4
	FVector InteractionCurPoint; // 0xd0
	float InteractionStartAngle; // 0xdc
	float InteractionCurAngle; // 0xe0
};

struct UProveThyself {
	FDBDTunableRowHandle _proveThyselfRange; // 0x3d0
};

struct AK25Projectile {
	UStaticMeshComponent* _staticMesh; // 0x380
	UPrimitiveComponent* _characterCollider; // 0x388
	UPrimitiveComponent* _environmentCollider; // 0x390
	UKillerProjectileDodgeComponent* _projectileDodgeComponent; // 0x398
	FLaunchInfo _launchInfo; // 0x3a0
	AK25Chain* _attachedChain; // 0x3c0
	float _timeIgnoreSlasherCollision; // 0x3c8
	bool _isActive; // 0x3cc
	FK25ProjectileDeactivationData _lastDeactivationData; // 0x3d0
};

struct UAnimationSettings {
	int32_t CompressCommandletVersion; // 0x48
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x50
	bool ForceRecompression; // 0x60
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x61
	bool bForceBelowThreshold; // 0x62
	bool bFirstRecompressUsingCurrentOrDefault; // 0x63
	bool bRaiseMaxErrorToExisting; // 0x64
	bool bEnablePerformanceLog; // 0x65
	bool bStripAnimationDataOnDedicatedServer; // 0x66
	bool bTickAnimationOnSkeletalMeshInit; // 0x67
};

struct AMobileBloodOrbRenderer {
	UMaterialInstance* OrbMaterialInstance; // 0x230
	UMaterialInstance* OutlineMaterialInstance; // 0x238
	float CullInterval; // 0x240
	UInstancedStaticMeshComponent* _ismComponent; // 0x248
	UInstancedStaticMeshComponent* _outlineIsmComponent; // 0x250
	TMap<ABloodOrb*, FBloodOrbInfo> _instanceMap; // 0x258
	UMaterialInstanceDynamic* _outlineMaterialInstanceDynamic; // 0x2a8
	UMaterialInstanceDynamic* _orbMaterialInstanceDynamic; // 0x2b0
	UBloodOrbVisibilityComponent* _bloodOrbVisibilityComponent; // 0x2b8
};

struct USubmixEffectFlexiverbPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0x80
};

struct ALevelSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x240
	ULevelSequencePlayer* SequencePlayer; // 0x258
	FSoftObjectPath LevelSequence; // 0x260
	TArray<AActor*> AdditionalEventReceivers; // 0x280
	FLevelSequenceCameraSettings CameraSettings; // 0x290
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x298
	UMovieSceneBindingOverrides* BindingOverrides; // 0x2a0
	char bAutoPlay : 1; // 0x2a8
	char bOverrideInstanceData : 1; // 0x2a8
	char bReplicatePlayback : 1; // 0x2a8
	UObject* DefaultInstanceData; // 0x2b0
	ULevelSequenceBurnIn* BurnInInstance; // 0x2b8
	bool bShowBurnin; // 0x2c0
};

struct UMaterialExpressionTruncate {
	FExpressionInput Input; // 0x48
};

struct UEndGameStateComponent {
	bool _isEndGameOver; // 0xc4
	float _worldTimeAtLastModification; // 0xc8
	float _timeDilation; // 0x110
	bool _isTimerPaused; // 0x114
	float _normalTotalTimeElapsedAtLastTimeModification; // 0x118
	EEndGameScenarioTrigger _endGameScenarioTrigger; // 0x11c
};

struct UUMGHudEditorLayoutScreen {
	TArray<UUMGDragWidget_HudEditor*> _editableWidgets; // 0x260
};

struct UNavigationQueryFilter_Camper {
	float SlasherAreaBoundsLimit; // 0x70
	float SlasherAreaPenetrationCost; // 0x74
	float SlasherInSightCost; // 0x78
	float SlasherAreaExcludeUnderRange; // 0x7c
	float SlasherInExcludeAreaCost; // 0x80
};

struct USimpleConstructionScript {
	TArray<USCS_Node*> RootNodes; // 0x30
	TArray<USCS_Node*> AllNodes; // 0x40
	USCS_Node* DefaultSceneRootNode; // 0x50
};

struct AK25UncontrolledProjectile {
	FMulticastInlineDelegate OnAcquiredChanged; // 0x438
	FDBDTunableRowHandle _minimumTimeBeforeProjectileLaunch; // 0x448
	FDBDTunableRowHandle _maximumTimeBeforeProjectileLaunch; // 0x470
	FDBDTunableRowHandle _projectileSpeed; // 0x498
	FDBDTunableRowHandle _projectileMaximumTravelDistance; // 0x4c0
	bool _isAcquiredFromPool; // 0x4e8
	ACamperPlayer* _targetSurvivor; // 0x520
};

struct URekindleTotemInteraction {
	float _slasherFacingTolerance; // 0x5b0
	ARekindledTotem* _rekindledTotemClass; // 0x5b8
	ARekindledTotem* _rekindledTotem; // 0x5c0
};

struct UTwinLullabyRangeAdditiveEffect {
	FDBDTunableRowHandle _defaultTwinLullabyDormantRange; // 0x350
	FTunableStat _twinLullabyDormantRange; // 0x378
	FTunableStat _twinLullabyAttachedRange; // 0x3f8
};

struct USoundNodeParamCrossFade {
	FName ParamName; // 0x60
};

struct ULevelSequenceDirector {
	ULevelSequencePlayer* Player; // 0x30
};

struct UAnimBlueprint {
	USkeleton* TargetSkeleton; // 0xb0
	TArray<FAnimGroupInfo> Groups; // 0xb8
	bool bUseMultiThreadedAnimationUpdate; // 0xc8
	bool bWarnAboutBlueprintUsage; // 0xc9
};

struct UAtlantaRoleSelectionScreen {
	UUMGRoleSelectionScreen* _umgScreen; // 0x120
};

struct UUIDataManager {
	TMap<EItemRarity, UMaterialInterface*> RarityMaterialMap; // 0x38
	TMap<FString, FTextBlockStyle> RichTextStyleMap; // 0x88
	TMap<ECurrencyType, FCurrencyProgressionUIData> CurrencyUIDataMap; // 0xd8
	TMap<EProgressionType, FCurrencyProgressionUIData> ProgressionUIDataMap; // 0x128
};

struct UMaterialExpressionCosine {
	FExpressionInput Input; // 0x48
	float Period; // 0x64
};

struct UUMGCharacterFreeTicketWidget {
	FMulticastInlineDelegate OnUseFreeTicketEvent; // 0x300
	UWidgetSwitcher* PanelSwitcher; // 0x310
	UVerticalBox* FreeTicketItemButtonBox; // 0x318
	TSoftClassPtr<UObject> _buttonClass; // 0x320
};

struct UParticleModule {
	char bSpawnModule : 1; // 0x30
	char bUpdateModule : 1; // 0x30
	char bFinalUpdateModule : 1; // 0x30
	char bUpdateForGPUEmitter : 1; // 0x30
	char bCurvesAsColor : 1; // 0x30
	char b3DDrawMode : 1; // 0x30
	char bSupported3DDrawMode : 1; // 0x30
	char bEnabled : 1; // 0x30
	char bEditable : 1; // 0x31
	char LODDuplicate : 1; // 0x31
	char bSupportsRandomSeed : 1; // 0x31
	char bRequiresLoopingNotification : 1; // 0x31
	char LODValidity; // 0x32
};

struct UAkGameObject {
	UAkAudioEvent* AkAudioEvent; // 0x210
	FString EventName; // 0x218
};

struct UAICharacterBehaviourInteractWithActor {
	ADBDPlayer* _aiPlayer; // 0x58
	ADBDAIPlayerController* _aiPlayerController; // 0x60
	UAICharacterBehaviourInteractWithActorData* _behaviourData; // 0x68
};

struct UMovieSceneCapture {
	FSoftClassPath ImageCaptureProtocolType; // 0x40
	FSoftClassPath AudioCaptureProtocolType; // 0x60
	UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x80
	UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x88
	FMovieSceneCaptureSettings Settings; // 0x90
	bool bUseSeparateProcess; // 0x100
	bool bCloseEditorWhenCaptureStarts; // 0x101
	FString AdditionalCommandLineArguments; // 0x108
	FString InheritedCommandLineArguments; // 0x118
};

struct AIntervalGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x230
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x238
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x240
};

struct UInflictMadnessBaseQEEvaluator {
	int32_t _requiredTier; // 0x90
};

struct UCollectItemInteraction {
	FMulticastInlineDelegate OnCollectUpdateStart; // 0x5b0
	FMulticastInlineDelegate OnCollectUpdateEnd; // 0x5c0
};

struct UParticleModuleAttractorParticle {
	FName EmitterName; // 0x38
	FRawDistributionFloat Range; // 0x48
	char bStrengthByDistance : 1; // 0x78
	FRawDistributionFloat Strength; // 0x80
	char bAffectBaseVelocity : 1; // 0xb0
	EAttractorParticleSelectionMethod SelectionMethod; // 0xb4
	char bRenewSource : 1; // 0xb8
	char bInheritSourceVel : 1; // 0xb8
	int32_t LastSelIndex; // 0xbc
};

struct USafeZone {
	bool PadLeft; // 0x140
	bool PadRight; // 0x141
	bool PadTop; // 0x142
	bool PadBottom; // 0x143
};

struct UBalancedLanding {
	float _sprintDuration; // 0x3d4
	float _exhaustionDurationPerLevel[0x3]; // 0x3d8
	UActivatableExhaustedEffect* _exhaustedEffect; // 0x3e8
};

struct UUdpMessagingSettings {
	bool EnableTransport; // 0x30
	bool bAutoRepair; // 0x31
	bool bStopServiceWhenAppDeactivates; // 0x32
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

struct UPaperTileSet {
	FIntPoint TileSize; // 0x30
	UTexture2D* TileSheet; // 0x38
	TArray<UTexture*> AdditionalSourceTextures; // 0x40
	FIntMargin BorderMargin; // 0x50
	FIntPoint PerTileSpacing; // 0x60
	FIntPoint DrawingOffset; // 0x68
	int32_t WidthInTiles; // 0x70
	int32_t HeightInTiles; // 0x74
	int32_t AllocatedWidth; // 0x78
	int32_t AllocatedHeight; // 0x7c
	TArray<FPaperTileMetadata> PerTileData; // 0x80
	TArray<FPaperTileSetTerrain> Terrains; // 0x90
	int32_t TileWidth; // 0xa0
	int32_t TileHeight; // 0xa4
	int32_t Margin; // 0xa8
	int32_t Spacing; // 0xac
};

struct USourceEffectMidSideSpreaderPreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x7c
};

struct USafeZoneSlot {
	bool bIsTitleSafe; // 0x40
	FMargin SafeAreaScale; // 0x44
	EHorizontalAlignment HAlign; // 0x54
	EVerticalAlignment VAlign; // 0x55
	FMargin Padding; // 0x58
};

struct UUmgPlayerHud {
	UCanvasPanel* GameStartingPanel; // 0x260
	UCanvasPanel* InGamePanel; // 0x268
	UAtlantaSkillCheckWidget* SkillCheckWidget; // 0x270
	UUMGMapThemeWidget* MapThemeWidget; // 0x278
	UUMGAlertsWidget* AtlantaAlertsWidget; // 0x280
	UUMGObjectivesWidget* AtlantaObjectivesWidget; // 0x288
	UPerkHudWidget* AtlantaPerksWidget; // 0x290
	UPerkActionButton* ActivablePerkActionButton; // 0x298
	UUMGStatusEffectsWidget* AtlantaStatusEffectsWidget; // 0x2a0
	UUMGChargeableInteractionWidget* AtlantaInteractionWidget; // 0x2a8
	UAtlantaPromptWidget* AtlantaPromptWidget; // 0x2b0
	UAtlantaPromptWidget* AtlantaTutorialPromptWidget; // 0x2b8
	UUMGPlayersStatusWidget* AtlantaPlayersStatusWidget; // 0x2c0
	UVerticalBox* AtlantaObjectivesContainer; // 0x2c8
	UActionButton* ActionButton; // 0x2d0
	UCanvasPanel* ActionButtonContainer; // 0x2d8
	UPerkSoundHudWidget* PerkSoundHudWidget; // 0x2e0
	UMobileBaseUserWidget* CenterInteractionButton; // 0x2e8
	UCanvasPanel* CenterInteractionContainer; // 0x2f0
	UCanvasPanel* CancelButtonContainer; // 0x2f8
	UUMGEndGameCollapseWidget* EndGameCollapseWidget; // 0x300
	FMulticastInlineDelegate OnPerkClickedEvent; // 0x308
	FMulticastInlineDelegate OnTutorialLeaveClickedEvent; // 0x318
	FMulticastInlineDelegate OnTutorialNextClickedEvent; // 0x328
	FMulticastInlineDelegate OnSettingsClickedEvent; // 0x338
	ADBDPlayerController* LocalController; // 0x348
	UAtlantaHudDirectionalStick* AtlantaDirectionalStick; // 0x350
	UCanvasPanel* AtlantaDirectionalStickContainer; // 0x358
	ADBDPlayer* _localPlayer; // 0x360
	FSlateBrush _unlockedVirtualJoystickThumbImage; // 0x370
	FSlateBrush _lockedVirtualJoystickThumbImage; // 0x400
};

struct UMaterialExpressionDDY {
	FExpressionInput Value; // 0x48
};

struct UBTTask_InputPress {
	EPawnInputPressTypes Input; // 0x78
	ETaskInputPressModes InputMode; // 0x79
	FAITunableParameter InputPressLoopInterval; // 0x7c
};

struct UGnomeEventComponent {
	UInteractionRespawnableTrigger* _interactionRespawnableTrigger; // 0xc8
	UTimedRespawnableTrigger* _timedRespawnableTrigger; // 0xd0
};

struct UUMGLobbyScreen {
	UUMGLobbySearchingWidget* LobbySearchingWidget; // 0x300
	FMulticastInlineDelegate OnJoinedLobbyLeaved; // 0x308
	FMulticastInlineDelegate OnSearchingLobbyCancelled; // 0x318
	UWidgetSwitcher* LobbySwitcher; // 0x328
	UUMGLobbyJoinedWidget* LobbyJoinedWidget; // 0x330
	UUMGLobbyOfferingWidget* OfferingWidget; // 0x338
	UUMGFogWidget* FogWidget; // 0x340
};

struct USidePushStrategyComponent {
	float _maxImpulseStrength; // 0xb8
	float _minImpulseStrength; // 0xbc
	float _detectorCapsuleInflation; // 0xc0
};

struct UCamperMovementComponent {
	float MaxCrawlSpeed; // 0x8e8
	float MaxRunSpeed; // 0x8ec
	FRotator _defaultRotationRate; // 0x8f0
	FRotator _rotationRateWhileCrawling; // 0x8fc
};

struct UMaterialExpressionSkyAtmosphereLightDirection {
	int32_t LightIndex; // 0x48
};

struct ASceneCapture {
	UStaticMeshComponent* MeshComp; // 0x230
	USceneComponent* SceneComponent; // 0x238
};

struct UUMGGenericPopup {
	URichTextBlock* Title; // 0x300
	UUMGHtmlRichText* Message; // 0x308
	UImage* TitleBackground; // 0x310
	UImage* TitleSmoke; // 0x318
	UUMGPopupButton* RegressionPopupButton; // 0x320
	UUMGPopupButton* AlternativePopupButton; // 0x328
	UUMGPopupButton* ProgressionPopupButton; // 0x330
	FSlateColor ErrorTitleSmokeColor; // 0x338
	FSlateColor ErrorTitleBackgroundColor; // 0x360
	FSlateColor DefaultTitleSmokeColor; // 0x388
	FSlateColor DefaultTitleBackgroundColor; // 0x3b0
};

struct UItemAddon {
	ACollectable* BaseItemType; // 0x280
	bool _needsSetup; // 0x288
	FItemAddonInitializationData _addonInitializationData; // 0x289
};

struct AExponentialHeightFog {
	UExponentialHeightFogComponent* Component; // 0x230
	char bEnabled : 1; // 0x238
};

struct UOctreeDynamicMeshComponent {
	bool bExplicitShowWireframe; // 0x4d8
};

struct UUMGRequestsListTabWidget {
	UUMGExpandableListWidget* FriendRequestExpandableList; // 0x300
	UUMGExpandableListWidget* PendingExpandableList; // 0x308
};

struct ULightmappedSurfaceCollection {
	UModel* SourceModel; // 0x30
	TArray<int32_t> Surfaces; // 0x38
};

struct UDeviceProfile {
	FString DeviceType; // 0x40
	FString BaseProfileName; // 0x50
	UObject* Parent; // 0x60
	TArray<FString> CVars; // 0x80
};

struct UParticleModuleAccelerationConstant {
	FVector Acceleration; // 0x40
};

struct UGridPanel {
	TArray<float> ColumnFill; // 0x140
	TArray<float> RowFill; // 0x150
};

struct UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x60
};

struct UAtlantaTooltipManager {
	UBaseTooltipWidget* _activeTooltip; // 0x30
	UUMGCloseTooltipWidget* _closeTooltipWidget; // 0x38
};

struct AMockPoolableActor {
	UPoolableActorComponent* _poolable; // 0x230
};

struct UCompositionGraphCaptureProtocol {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x60
	bool bCaptureFramesInHDR; // 0x70
	int32_t HDRCompressionQuality; // 0x74
	EHDRCaptureGamut CaptureGamut; // 0x78
	FSoftObjectPath PostProcessingMaterial; // 0x80
	bool bDisableScreenPercentage; // 0xa0
	UMaterialInterface* PostProcessingMaterialPtr; // 0xa8
};

struct UPowerChargePresentationItemProgressComponent {
	UPowerChargeComponent* _powerChargeComponent; // 0xb8
	UPowerToggleComponent* _powerToggleComponent; // 0xc0
	float _chargeReadyThreshold; // 0xc8
};

struct UEditableStaticMeshAdapter {
	UStaticMesh* StaticMesh; // 0x30
	UStaticMesh* originalStaticMesh; // 0x38
	int32_t StaticMeshLODIndex; // 0x40
};

struct UBloodlust {
	UCurveFloat* BloodlustCurve; // 0x350
	float _bloodlustTime; // 0x378
	ASlasherPlayer* _owningKiller; // 0x3a8
};

struct UVectorFieldStatic {
	int32_t SizeX; // 0x50
	int32_t SizeY; // 0x54
	int32_t SizeZ; // 0x58
	bool bAllowCPUAccess; // 0x5c
	TArray<FVector4> CPUData; // 0x90
};

struct UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
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

struct UPortalPlacerStateComponent {
	FMulticastInlineDelegate OnTeleportCooldownComplete; // 0xb8
	int32_t _remainingPortals; // 0xd4
	TArray<ADemogorgonPortal*> _placedPortals; // 0x120
	TArray<FPortalRestrictedLocation> _restrictedPortalLocations; // 0x130
};

struct UCartersSparkComponent {
	bool _staticBlastEnabled; // 0xb8
	TArray<ADBDPlayer*> _totallyInsanePlayers; // 0x148
	ADBDPlayer* _owningPlayer; // 0x158
};

struct UPostProcessComponent {
	FPostProcessSettings Settings; // 0x220
	float Priority; // 0x760
	float BlendRadius; // 0x764
	float BlendWeight; // 0x768
	char bEnabled : 1; // 0x76c
	char bUnbound : 1; // 0x76c
};

struct UMaterialExpressionDistanceToNearestSurface {
	FExpressionInput Position; // 0x48
};

struct UParticleModuleRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct USubmixEffectFilterPreset {
	FSubmixEffectFilterSettings Settings; // 0x7c
};

struct UCorePlayerStatusWidget {
	TMap<EPlayerStatus, FPlayerStatusAssets> PlayerStatusAssets; // 0x2f8
	UAkAudioEvent* ObsessionSfx; // 0x348
	UDBDTextBlock* PlayerNameTextfield; // 0x350
	UOverlay* KillerStatusContainer; // 0x358
	TMap<FGameplayTag, UCorePlayerStatusKillerEffectWidget*> KillerStatusEffectWidgetClasses; // 0x360
	FPlayerStatusViewData _cachedViewData; // 0x3b0
	UCorePlayerStatusKillerEffectWidget* _killerStatusEffectWidget; // 0x480
};

struct UMovieSceneEventSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct UMovieSceneObjectPropertyTrack {
	UObject* PropertyClass; // 0x98
};

struct UTextureLightProfile {
	float Brightness; // 0x108
	float TextureMultiplier; // 0x10c
};

struct UGlassStaticMesh {
	FVector defaultGlassNormalVector; // 0x530
};

struct UMultipleEventsBeforeResetEventQEEvaluator {
	TArray<FGameplayTag> _gameEventsResettingProgress; // 0x90
};

struct UDialogueWave {
	char bMature : 1; // 0x30
	char bOverride_SubtitleOverride : 1; // 0x30
	FString SpokenText; // 0x38
	FString SubtitleOverride; // 0x48
	TArray<FDialogueContextMapping> ContextMappings; // 0x58
	FGuid LocalizationGUID; // 0x68
};

struct UMaterialExpressionWorldPosition {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x48
};

struct UMagicLeapLightingTrackingComponent {
	bool UseGlobalAmbience; // 0xb8
	bool UseColorTemp; // 0xb9
};

struct USoundSubmix {
	char bMuteWhenBackgrounded : 1; // 0x48
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x60
	int32_t EnvelopeFollowerAttackTime; // 0x68
	int32_t EnvelopeFollowerReleaseTime; // 0x6c
	float OutputVolume; // 0x70
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x78
};

struct UChargeableComponent {
	FMulticastInlineDelegate OnInteractionEmptiedEvent; // 0xb8
	FMulticastInlineDelegate OnInteractionCompletionStateChanged; // 0xc8
	FMulticastInlineDelegate SkillCheckResponseAestheticDelegate; // 0xd8
	FMulticastInlineDelegate SkillCheckResponseAuthorityDelegate; // 0xe8
	FMulticastInlineDelegate ChargeAppliedAuthorityDelegate; // 0xf8
	FMulticastInlineDelegate ChargeableCompletionPercentChangeAuthorityDelegate; // 0x108
	FMulticastInlineDelegate ChargeableCompletionPercentChangeCosmeticDelegate; // 0x118
	FMulticastInlineDelegate DechargeBeginDelegate; // 0x128
	FMulticastInlineDelegate DechargeEndDelegate; // 0x138
	bool AllowSkillChecksAtFullCharge; // 0x148
	FString ChargeableComponentID; // 0x150
	float DechargeDelay; // 0x160
	FSpeedBasedNetSyncedValue _currentCharge; // 0x168
	FDBDTimer _skillCheckFailurePenaltyTimer; // 0x1a8
	FDBDTimer _dechargeTimer; // 0x1d0
	TArray<FChargeData> _chargesThisFrame; // 0x1f8
	TArray<AActor*> _instigatorsSinceEmpty; // 0x208
	TMap<FName, float> _tunableValueMap; // 0x218
	bool _isCharging; // 0x268
	TArray<int32_t> _playersWhoDidSkillCheck; // 0x270
	float _startingChargePercent; // 0x280
	float _dechargeRate; // 0x284
	bool _enableAddCharge; // 0x288
	bool _enableSkillCheckFailurePenalty; // 0x289
	bool _isDecharging; // 0x28a
	bool _stopDechargingWhenComplete; // 0x28b
};

struct UParticleModuleVelocity_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb8
};

struct UDecalSpawner {
	UDecalCollection* _decalCollection; // 0x30
	USpawnerStrategy* _spawnerStrategy; // 0x38
};

struct UAimableComponent {
	TArray<AActor*> _occlusionIgnoredActors; // 0xc0
	float _maxAimDistance; // 0xd0
	UAimDirectionProvider* _aimDirectionProvider; // 0xd8
	bool _useOcclusion; // 0xe0
	float _aimPointLerpFactor; // 0xe4
	TArray<UAimPointProcessor*> _preOcclusionAimPointProcessors; // 0xe8
};

struct UMagicLeapPlanesComponent {
	TArray<EMagicLeapPlaneQueryFlags> QueryFlags; // 0x210
	UBoxComponent* SearchVolume; // 0x220
	int32_t MaxResults; // 0x228
	float MinHolePerimeter; // 0x22c
	float MinPlaneArea; // 0x230
	EMagicLeapPlaneQueryType QueryType; // 0x234
	float SimilarityThreshold; // 0x238
	FMulticastInlineDelegate OnPlanesQueryResult; // 0x240
	FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x250
};

struct UAIAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UAtlantaHudLookBackJoystick {
	UGridPanel* TutorialAnimContainer; // 0x300
};

struct UOnlineSessionClient {
	bool bIsFromInvite; // 0x1c0
	bool bHandlingDisconnect; // 0x1c1
};

struct UGameViewportClient {
	UConsole* ViewportConsole; // 0x48
	TArray<FDebugDisplayProperty> DebugProperties; // 0x50
	int32_t MaxSplitscreenPlayers; // 0x70
	UWorld* World; // 0x80
	UGameInstance* GameInstance; // 0x88
};

struct UARTextureCameraDepth {
	EARDepthQuality DepthQuality; // 0xe0
	EARDepthAccuracy DepthAccuracy; // 0xe1
	bool bIsTemporallySmoothed; // 0xe2
};

struct ULacerationLevelCondition {
	float _lacerationLevelRequired; // 0xe8
};

struct UCoreKeyListenerInputPromptWidget {
	UCoreInputPromptWidget* InputPrompt; // 0x2d8
	UDBDTextBlock* LabelTB; // 0x2e0
	FMulticastInlineDelegate _onKeyListenerInputPromptTriggeredDelegate; // 0x2e8
};

struct UPaperFlipbookComponent {
	UPaperFlipbook* SourceFlipbook; // 0x478
	UMaterialInterface* Material; // 0x480
	float playRate; // 0x488
	char bLooping : 1; // 0x48c
	char bReversePlayback : 1; // 0x48c
	char bPlaying : 1; // 0x48c
	float AccumulatedTime; // 0x490
	int32_t CachedFrameIndex; // 0x494
	FLinearColor SpriteColor; // 0x498
	UBodySetup* CachedBodySetup; // 0x4a8
	FMulticastInlineDelegate OnFinishedPlaying; // 0x4b0
};

struct UResetBearTrapInteraction {
	FName _enterMontageIDForBeartrap; // 0x6d8
	FName _udpateMontageIDForBeartrap; // 0x6e4
	UAnimSequence* _updateSequenceForBeartrap; // 0x6f0
	FName _exitMontageForIDBeartrap; // 0x6f8
	FName _cancelExitMontage; // 0x704
};

struct UAISlasherChaseAndAttackBehaviourData {
	ACamperPlayer* _targetSurvivor; // 0x30
	float _sqrtAttackRangeDistance; // 0x38
	float _sqrtMaxTargetPositionDiff; // 0x3c
};

struct USCS_Node {
	UObject* ComponentClass; // 0x30
	UActorComponent* ComponentTemplate; // 0x38
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x40
	FName AttachToName; // 0x90
	FName ParentComponentOrVariableName; // 0x9c
	FName ParentComponentOwnerClassName; // 0xa8
	bool bIsParentComponentNative; // 0xb4
	TArray<USCS_Node*> ChildNodes; // 0xb8
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xc8
	FGuid VariableGuid; // 0xd8
	FName InternalVariableName; // 0xe8
};

struct UCharmSpawnerComponent {
	FName SocketRootName; // 0xb8
	TArray<FCharmSlot> CharmSlots; // 0xc8
	FVector ScaleCharm; // 0xd8
	int32_t _forcedLOD; // 0xe4
};

struct UBTDecorator_ExtCompareBBEntries {
	float Tolerance; // 0xd8
};

struct UGeneralProjectSettings {
	FString CompanyName; // 0x30
	FString CompanyDistinguishedName; // 0x40
	FString CopyrightNotice; // 0x50
	FString Description; // 0x60
	FString Homepage; // 0x70
	FString LicensingTerms; // 0x80
	FString PrivacyPolicy; // 0x90
	FGuid ProjectID; // 0xa0
	FString ProjectName; // 0xb0
	FString ProjectVersion; // 0xc0
	FString SupportContact; // 0xd0
	FText ProjectDisplayedTitle; // 0xe0
	FText ProjectDebugTitleInfo; // 0xf8
	bool bShouldWindowPreserveAspectRatio; // 0x110
	bool bUseBorderlessWindow; // 0x111
	bool bStartInVR; // 0x112
	bool bStartInAR; // 0x113
	bool bSupportAR; // 0x114
	bool bAllowWindowResize; // 0x115
	bool bAllowClose; // 0x116
	bool bAllowMaximize; // 0x117
	bool bAllowMinimize; // 0x118
};

struct UDBDAIStateComponent {
	int32_t UnsafeStateAtHookedCount; // 0xc0
	int32_t DireStateAtHookedCount; // 0xc4
	float MidObjectiveStateProgressionRatio; // 0xc8
	TMap<EAIObjectiveState, FDangerStateGameStateMapContainer> GameStateTable; // 0xd0
	TMap<EAIDifficultyLevel, FGameStatePressureZoneLevelMapContainer> PressureZoneLevelTable; // 0x120
	TMap<EAIPressureZoneLevel, float> PressureZoneHighToLowRangeLerpRatios; // 0x170
	float DefaultChasedPhaseOutDuration; // 0x1c0
	float InjuredChasedPhaseOutDuration; // 0x1c4
	float DefaultBeingAimedAtPhaseOutDuration; // 0x1c8
	float InjuredBeingAimedAtPhaseOutDuration; // 0x1cc
	float StimulusWasInSightDuration; // 0x1d0
	float LoSFoVToStimulusCheckPeriod; // 0x1d4
	float LoSToStimulusValidDuration; // 0x1d8
	float FoVToStimulusValidDuration; // 0x1dc
};

struct UCoreTabWidget {
	UDBDTextBlock* TabTextField; // 0x3c0
	UDBDImage* TabImage; // 0x3c8
};

struct UNavRelevantComponent {
	char bAttachToOwnersRoot : 1; // 0xdc
	UObject* CachedNavParent; // 0xe0
};

struct UMaterialExpressionLogarithm10 {
	FExpressionInput X; // 0x48
};

struct USlateBrushAsset {
	FSlateBrush Brush; // 0x30
};

struct UWidgetAnimation {
	UMovieScene* MovieScene; // 0x350
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x358
	bool bLegacyFinishOnStop; // 0x368
	FString DisplayLabel; // 0x370
};

struct UMaterialExpressionGIReplace {
	FExpressionInput Default; // 0x48
	FExpressionInput StaticIndirect; // 0x64
	FExpressionInput DynamicIndirect; // 0x80
};

struct UTerrorRadiusEmitterComponent {
	float _simulatedFixedDistance; // 0x228
	bool _imitatesAudioOnly; // 0x22c
	bool _generatesChaseMusic; // 0x22d
	bool _active; // 0x22e
	bool _isFakeTerrorRadius; // 0x22f
	float _radius; // 0x230
	TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversInTerrorRadiusMap; // 0x238
	TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversPhysicallyInRadiusRangeMap; // 0x288
};

struct UPlaceDreamPalletInteraction {
	TArray<APalletTracker*> _palletTrackers; // 0x5b0
	APalletTracker* _closestTracker; // 0x5c8
};

struct UAddon_K22Power_15 {
	float _brokenDuration; // 0x2a8
};

struct UEngineMessage {
	FString FailedPlaceMessage; // 0x30
	FString MaxedOutMessage; // 0x40
	FString EnteredMessage; // 0x50
	FString LeftMessage; // 0x60
	FString GlobalNameChange; // 0x70
	FString SpecEnteredMessage; // 0x80
	FString NewPlayerMessage; // 0x90
	FString NewSpecMessage; // 0xa0
};

struct UEnvQueryOption {
	UEnvQueryGenerator* Generator; // 0x30
	TArray<UEnvQueryTest*> Tests; // 0x38
};

struct UFastTrack {
	int32_t _tokensToAdd[0x3]; // 0x3d0
};

struct UInterpTrackBoolProp {
	TArray<FBoolTrackKey> BoolTrack; // 0x78
	FName PropertyName; // 0x88
};

struct UPlayerDebugComponent {
	bool _disableStartUpdateMontageDuringEnter; // 0xb8
	bool _allowPalletPullUpInteraction; // 0xb9
};

struct UGameEventDispatcher {
	TArray<UOngoingGameEvent*> _ongoingEvents; // 0x88
};

struct UMovieSceneSequence {
	FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x58
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x348
	bool bParentContextsAreSignificant; // 0x349
	bool bPlayableDirectly; // 0x34a
};

struct UUMGRichTextRewardItemDecorator {
	UDataTable* RewardSet; // 0x30
};

struct USpringArmComponent {
	float TargetArmLength; // 0x210
	FVector SocketOffset; // 0x214
	FVector TargetOffset; // 0x220
	float ProbeSize; // 0x22c
	ECollisionChannel ProbeChannel; // 0x230
	char bDoCollisionTest : 1; // 0x234
	char bUsePawnControlRotation : 1; // 0x234
	char bInheritPitch : 1; // 0x234
	char bInheritYaw : 1; // 0x234
	char bInheritRoll : 1; // 0x234
	char bEnableCameraLag : 1; // 0x234
	char bEnableCameraRotationLag : 1; // 0x234
	char bUseCameraLagSubstepping : 1; // 0x234
	char bDrawDebugLagMarkers : 1; // 0x235
	float CameraLagSpeed; // 0x238
	float CameraRotationLagSpeed; // 0x23c
	float CameraLagMaxTimeStep; // 0x240
	float CameraLagMaxDistance; // 0x244
};

struct UTimeSynchronizationSource {
	bool bUseForSynchronization; // 0x30
	int32_t FrameOffset; // 0x34
};

struct ARuntimeVirtualTextureVolume {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x230
};

struct UGizmoRectangleComponent {
	FVector DirectionX; // 0x448
	FVector DirectionY; // 0x454
	float OffsetX; // 0x460
	float OffsetY; // 0x464
	float LengthX; // 0x468
	float LengthY; // 0x46c
	float Thickness; // 0x470
	char SegmentFlags; // 0x474
};

struct UTextBlock {
	FText Text; // 0x148
	FDelegate TextDelegate; // 0x160
	FSlateColor ColorAndOpacity; // 0x178
	FDelegate ColorAndOpacityDelegate; // 0x1a0
	FSlateFontInfo Font; // 0x1b8
	FSlateBrush StrikeBrush; // 0x210
	FVector2D ShadowOffset; // 0x2a0
	FLinearColor ShadowColorAndOpacity; // 0x2a8
	FDelegate ShadowColorAndOpacityDelegate; // 0x2b8
	float MinDesiredWidth; // 0x2cc
	bool bWrapWithInvalidationPanel; // 0x2d0
	bool bAutoWrapText; // 0x2d1
	bool bSimpleTextMode; // 0x2d2
};

struct UMovieSceneColorSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct ATutorialGameState {
	FMulticastInlineDelegate OnCurrentTutorialStepChanged; // 0x810
	bool _forceHatchVisible; // 0x858
};

struct UNemesis {
	float _revealToKillerTime[0x3]; // 0x3d8
	float _obliviousTime[0x3]; // 0x3e4
};

struct UPathBuilder_EQS {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x50
	int32_t NbMaxEQSRequests; // 0xa0
	bool MergeToSinglePathPoint; // 0xa4
	UPathBuilder_EQS* _pendingEQSRequestBuilder; // 0xc8
};

struct ULevelSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x890
};

struct UNiagaraDataInterfaceTexture {
	UTexture* Texture; // 0x38
};

struct ASkyLight {
	USkyLightComponent* LightComponent; // 0x230
	char bEnabled : 1; // 0x238
};

struct USubsurfaceProfile {
	FSubsurfaceProfileStruct Settings; // 0x30
};

struct UTestMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x70
};

struct UActorSequenceComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb8
	UActorSequence* Sequence; // 0xd0
	UActorSequencePlayer* SequencePlayer; // 0xd8
};

struct USingleProjectileProviderComponent {
	ABaseProjectile* _projectileClass; // 0xc0
	ABaseProjectile* _projectile; // 0xc8
};

struct UBaseTwinInspectLocker {
	FDBDTunableRowHandle _inspectInteractionTime; // 0x5b8
};

struct UBodySetup {
	FKAggregateGeom AggGeom; // 0x30
	FName BoneName; // 0x88
	EPhysicsType PhysicsType; // 0x94
	char bAlwaysFullAnimWeight : 1; // 0x95
	char bConsiderForBounds : 1; // 0x95
	char bMeshCollideAll : 1; // 0x95
	char bDoubleSidedGeometry : 1; // 0x95
	char bGenerateNonMirroredCollision : 1; // 0x95
	char bSharedCookedData : 1; // 0x95
	char bGenerateMirroredCollision : 1; // 0x95
	char bSupportUVsAndFaceRemap : 1; // 0x95
	EBodyCollisionResponse CollisionReponse; // 0x97
	ECollisionTraceFlag CollisionTraceFlag; // 0x98
	UPhysicalMaterial* PhysMaterial; // 0xa0
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8
	FBodyInstance DefaultInstance; // 0x130
	FVector BuildScale3D; // 0x250
};

struct UParticleModuleLocationPrimitiveTriangle {
	FRawDistributionVector StartOffset; // 0x38
	FRawDistributionFloat Height; // 0x80
	FRawDistributionFloat Angle; // 0xb0
	FRawDistributionFloat Thickness; // 0xe0
};

struct UFixedPlaneBrushProperties {
	bool bPropertySetEnabled; // 0x58
	bool bShowGizmo; // 0x59
	bool bSnapToGrid; // 0x5a
	FVector Position; // 0x5c
	FQuat Rotation; // 0x70
};

struct APaperSpriteActor {
	UPaperSpriteComponent* RenderComponent; // 0x230
};

struct ADBDAIController {
	float DefaultSightRange; // 0x340
	float CloakedTargetSightRange; // 0x344
	TMap<EAIDifficultyLevel, int32_t> AIDifficultyMaxPlayerRanks; // 0x348
	float RotateCameraOnStationaryWaitTime; // 0x3a8
	float RotateCameraOnStationaryDegreePerSecond; // 0x3ac
	APawn* _aiPawn; // 0x3c8
	APawn* _lastAiPawn; // 0x3d0
	TMap<UObject*, float> _contextualPathSpeedFactors; // 0x3e0
	UObject* _objOverridingDefaultNavigationFilter; // 0x430
	UNavigationQueryFilter* _originalDefaultNavigationFilter; // 0x438
	TMap<EPawnInputPressTypes, UObject*> _inputLocks; // 0x458
	UObject* _movementLock; // 0x4a8
};

struct UParticleModuleLifetime {
	FRawDistributionFloat lifetime; // 0x38
};

struct UHinderOnCrowAttachStatusEffect {
	FGameplayTag _onCrowAttachStateTag; // 0x358
	FTunableStat _hinderOnIdleLingerTime; // 0x368
};

struct USubmixEffectSubmixEQPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0x80
};

struct ANavigationData {
	UPrimitiveComponent* RenderingComp; // 0x238
	FNavDataConfig NavDataConfig; // 0x240
	char bEnableDrawing : 1; // 0x2d0
	char bForceRebuildOnLoad : 1; // 0x2d0
	char bAutoDestroyWhenNoNavigation : 1; // 0x2d0
	char bCanBeMainNavData : 1; // 0x2d0
	char bCanSpawnOnRebuild : 1; // 0x2d0
	char bRebuildAtRuntime : 1; // 0x2d0
	ERuntimeGenerationType RuntimeGeneration; // 0x2d4
	float ObservedPathsTickInterval; // 0x2d8
	uint32_t DataVersion; // 0x2dc
	TArray<FSupportedAreaData> SupportedAreas; // 0x3c0
};

struct UAnimStreamable {
	int32_t NumFrames; // 0xb0
	EAnimInterpolationType Interpolation; // 0xb4
	FName RetargetSource; // 0xb8
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd8
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xe0
	bool bEnableRootMotion; // 0xe8
	ERootMotionRootLock RootMotionRootLock; // 0xe9
	bool bForceRootLock; // 0xea
	bool bUseNormalizedRootMotionScale; // 0xeb
};

struct UOniDashInteraction {
	UCurveFloat* _chargingSpeedCurve; // 0x6d8
	UCurveFloat* _dashingSpeedCurve; // 0x6e0
	float _yawAdjustTime; // 0x6e8
	UCurveFloat* _cooldownSpeedCurve; // 0x6f0
};

struct UGizmoAxisScaleParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60
	float ScaleMultiplier; // 0x70
	float Parameter; // 0x74
	FGizmoFloatParameterChange LastChange; // 0x78
	FVector CurScaleAxis; // 0x80
	FVector CurScaleOrigin; // 0x8c
	FTransform InitialTransform; // 0xa0
};

struct UMovieSceneByteTrack {
	UEnum* Enum; // 0x98
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance {
	int32_t LightIndex; // 0x48
	FExpressionInput WorldPosition; // 0x4c
};

struct UCoreInteractionPromptsContainerWidget {
	UDBDWrapBox* CenterContainerBox; // 0x300
	UDBDWrapBox* ContainerBox; // 0x308
	UCoreInteractionPromptWidget* InteractionPromptWidgetClass; // 0x310
	int32_t MaxDisplayedPrompts; // 0x318
	int32_t MaxDisplayedCenterPrompts; // 0x31c
	FMargin SlotMargin; // 0x320
	TArray<UCoreInteractionPromptWidget*> _promptWidgetPool; // 0x330
	TArray<UCoreInteractionPromptWidget*> _centerPromptWidgetPool; // 0x340
	TMap<FName, UCoreInteractionPromptWidget*> _displayedPromptsMap; // 0x350
};

struct UTwinOutlineUpdateStrategy {
	FLinearColor _visibleColorForKiller; // 0xc0
};

struct ASceneCapture2D {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x240
};

struct UPanelSlot {
	UPanelWidget* Parent; // 0x30
	UWidget* Content; // 0x38
};

struct UDrawPolyPathProperties {
	EDrawPolyPathOutputMode OutputType; // 0x58
	EDrawPolyPathWidthMode WidthMode; // 0x5c
	float Width; // 0x60
	EDrawPolyPathHeightMode HeightMode; // 0x64
	float Height; // 0x68
	float RampStartRatio; // 0x6c
	bool bSnapToWorldGrid; // 0x70
};

struct UNiagaraPreviewAxis_InterpParamBase {
	FName Param; // 0x30
	int32_t count; // 0x3c
};

struct UKillerProjectileDodgeComponent {
	AKillerProjectile* _killerProjectile; // 0xb8
	TArray<ACamperPlayer*> _proximitySurvivors; // 0xc0
};

struct UWiggleComponent {
	UChargeableComponent* _wiggleProgress; // 0xc0
	ASlasherPlayer* _killerWigglingFrom; // 0xc8
	UInputComponent* _inputComponent; // 0xd0
};

struct UReleaseConjoinedTwin {
	FDBDTunableRowHandle _releaseMaxCharge; // 0x6d8
	FTunableStat _releaseExitTime; // 0x700
	bool _releaseAnimationWentToTheEnd; // 0x7b4
};

struct UBlightedSerumAddon {
	ACollectable* _blightedSerumCollectable; // 0x298
	UBlightedSerumDashInteraction* _dashInteraction; // 0x2a0
	int32_t _theBlightExtraTokens; // 0x2a8
	int32_t _numberOfDashesPerEvent; // 0x2ac
};

struct UAddon_ThePig_JigsawSketch {
	TMap<ACamperPlayer*, AGenerator*> _trackedGeneratorRepairs; // 0x298
};

struct UPlayer {
	APlayerController* PlayerController; // 0x38
	int32_t CurrentNetSpeed; // 0x40
	int32_t ConfiguredInternetSpeed; // 0x44
	int32_t ConfiguredLanSpeed; // 0x48
};

struct UDedicatedServerHandlerComponent {
	FAtlantaRitualSet _atlantaRituals; // 0xb8
};

struct UBasePlayerAttackSubAnimInstance {
	EAttackSubstate _attackState; // 0x4e8
	float _direction; // 0x4ec
	float _strafeAngle; // 0x4f0
	bool _isStrafe; // 0x4f4
	float _attackInPlayRate; // 0x4f8
	FAnimSequenceSelector _attackIn; // 0x500
	float _attackSwingPlayRate; // 0x518
	FAnimSequenceSelector _attackSwing; // 0x520
	float _attackMissPlayRate; // 0x538
	FAnimSequenceSelector _attackMiss; // 0x540
	float _attackHitPlayRate; // 0x558
	FAnimSequenceSelector _attackHit; // 0x560
	float _attackBounceOfWallPlayRate; // 0x578
	FAnimSequenceSelector _attackBounceOfWall; // 0x580
	bool _firstPersonView; // 0x5ac
};

struct UUMGBaseCountdownWidget {
	UTextBlock* TimerTextBlock; // 0x300
	int32_t _timerThreshold; // 0x308
	FSlateColor _timerColorBelowThreshold; // 0x310
	FSlateColor _timerColorBeyondThreshold; // 0x338
};

struct UCoreInputSwitcherWidget {
	EInputSwitcherDisplayRule ButtonDisplayRule; // 0x2d8
	EInputSwitcherDisplayRule InputPromptDisplayRule; // 0x2d9
	UCoreKeyListenerInputPromptWidget* InputPrompt; // 0x2e0
	UCoreButtonWidget* Button; // 0x2e8
	FMulticastInlineDelegate _onInputSwitcherTriggeredDelegate; // 0x2f0
};

struct UCoreTabContainerWidget {
	bool AlignHorizontally; // 0x320
	FMargin TabPadding; // 0x324
	UCoreTabWidget* CoreTabClass; // 0x338
	UGridPanel* TabContainer; // 0x340
	bool UseControllerTabSwitching; // 0x348
	bool CanLoop; // 0x349
};

struct UParticleModuleLocationSkelVertSurface {
	ELocationSkelVertSurfaceSource SourceType; // 0x38
	FVector UniversalOffset; // 0x3c
	char bUpdatePositionEachFrame : 1; // 0x48
	char bOrientMeshEmitters : 1; // 0x48
	char bInheritBoneVelocity : 1; // 0x48
	float InheritVelocityScale; // 0x4c
	FName SkelMeshActorParamName; // 0x50
	TArray<FName> ValidAssociatedBones; // 0x60
	char bEnforceNormalCheck : 1; // 0x70
	FVector NormalToCompare; // 0x74
	float NormalCheckToleranceDegrees; // 0x80
	float NormalCheckTolerance; // 0x84
	TArray<int32_t> ValidMaterialIndices; // 0x88
	char bInheritVertexColor : 1; // 0x98
	char bInheritUV : 1; // 0x98
	uint32_t InheritUVChannel; // 0x9c
};

struct UTimecodeProvider {
	float FrameDelay; // 0x30
};

struct UAxisPositionGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x60
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80
	bool bEnableSignedAxis; // 0x90
	bool bInInteraction; // 0x91
	FVector InteractionOrigin; // 0x94
	FVector interactionAxis; // 0xa0
	FVector InteractionStartPoint; // 0xac
	FVector InteractionCurPoint; // 0xb8
	float InteractionStartParameter; // 0xc4
	float InteractionCurParameter; // 0xc8
	float ParameterSign; // 0xcc
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

struct UProceduralGenerationData {
	TArray<FQuadrantSpawnTypeProperties> QuadrantSpawnTypeProperties; // 0x38
	TArray<FQuadrantSpawnCategories> QuadrantSpawnCategories; // 0x48
	TArray<FThemeProperties> ThemeProperties; // 0x58
	int32_t MaxSurvivorCount; // 0x68
	TArray<FKillerItemDependencies> KillersItemDependencies; // 0x70
	UCurveFloat* SurvivorItemPopulationProbability; // 0x80
	TArray<FSurvivorItemProperties> SurvivorItemProperty; // 0x88
	UCurveFloat* EscapeStrategyPopulationProbability; // 0x98
	TArray<FEscapeStrategyProperty> EscapeStrategyProperties; // 0xa0
	TArray<FEscapeTypeObjects> EscapeTypeActors; // 0xb0
	TArray<FGameplayElementsPopulation> ElementsPopulation; // 0xc0
	TArray<FManagedGameplayElementsPopulation> ManagedElementsPopulation; // 0xd0
	TArray<FSurvivorGroupingProbability> SurvivorGroupingProbabilities; // 0xe0
	FVector ProceduralMapOffset; // 0xf0
	float ProceduralTileWidth; // 0xfc
	float ProceduralTileHeight; // 0x100
	FVector ProceduralQuadTileMapOffset; // 0x104
	float ProceduralQuadTileCubeWidth; // 0x110
	float DifficultyModifier; // 0x114
	float CharacterCameraHeight; // 0x118
	float CharacterCollisionRadius; // 0x11c
	float SpawnerCollisionRadius; // 0x120
	float TotemVisualHeight; // 0x124
	TArray<FSpecialBehaviourPopulation> SpecialBehaviourPopulation; // 0x128
	TArray<FEventSubstitionData> _eventProperties; // 0x138
};

struct UBehaviorTree {
	UBTCompositeNode* RootNode; // 0x38
	UBlackboardData* BlackboardAsset; // 0x40
	TArray<UBTDecorator*> RootDecorators; // 0x48
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x58
};

struct UAISkill_ThroughTorment {
	EAITerrorLevel ToleratedTerrorPressure; // 0xc0
};

struct USynthComponent {
	char bAutoDestroy : 1; // 0x210
	char bStopWhenOwnerDestroyed : 1; // 0x210
	char bAllowSpatialization : 1; // 0x210
	char bOverrideAttenuation : 1; // 0x210
	char bOutputToBusOnly : 1; // 0x214
	USoundAttenuation* AttenuationSettings; // 0x218
	FSoundAttenuationSettings AttenuationOverrides; // 0x220
	USoundConcurrency* ConcurrencySettings; // 0x5c0
	TSet<USoundConcurrency*> ConcurrencySet; // 0x5c8
	USoundClass* SoundClass; // 0x618
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x620
	USoundSubmixBase* SoundSubmix; // 0x628
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x630
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x640
	FSoundModulation Modulation; // 0x650
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x660
	char bIsUISound : 1; // 0x670
	char bIsPreviewSound : 1; // 0x670
	int32_t EnvelopeFollowerAttackTime; // 0x674
	int32_t EnvelopeFollowerReleaseTime; // 0x678
	FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x680
	USynthSound* Synth; // 0x6b0
	UAudioComponent* AudioComponent; // 0x6b8
};

struct UPhysicsCollisionHandler {
	float ImpactThreshold; // 0x30
	float ImpactReFireDelay; // 0x34
	USoundBase* DefaultImpactSound; // 0x38
	float LastImpactSoundTime; // 0x40
};

struct UNoOneLeftBehind {
	TArray<float> _speedBoostEffect; // 0x3d0
};

struct UAimPointPerlinNoise {
	float _baseInaccuracyNoisePersistence; // 0xbc
	int32_t _baseInaccuracyNoiseOctaveCount; // 0xc0
	float _baseInaccuracyNoiseAmplitude; // 0xc4
	float _baseInaccuracyNoiseFrequency; // 0xcc
	float _timeOffset; // 0xd4
};

struct UBaseKillerWeaponAnimInstance {
	EAttackSubstate _attackState; // 0x270
	bool _isCarrying; // 0x271
	bool _isActive; // 0x272
	float _attackInPlayRate; // 0x274
	FAnimSequenceSelector _attackIn; // 0x278
	float _attackSwingPlayRate; // 0x290
	FAnimSequenceSelector _attackSwing; // 0x298
	float _attackMissPlayRate; // 0x2b0
	FAnimSequenceSelector _attackMiss; // 0x2b8
	float _attackHitPlayRate; // 0x2d0
	FAnimSequenceSelector _attackHit; // 0x2d8
	float _attackBounceOfWallPlayRate; // 0x2f0
	FAnimSequenceSelector _attackBounceOfWall; // 0x2f8
	bool _firstPersonView; // 0x320
};

struct AInteractable {
	UPrimitiveComponent* _singleZone; // 0x290
	bool _useSingleZone; // 0x298
	TArray<UInteractor*> _interactors; // 0x2a0
	UInteractableTransformOptimizer* _transformOptimizer; // 0x2b0
	TMap<UPrimitiveComponent*, FInteractionArray> _zoneToInteractions; // 0x2d8
};

struct UDBDOutlineComponentConfiguration {
	TMap<UObject*, FOutlineConfiguration> OutlineConfigurations; // 0x38
	TMap<FName, FOutlineColourConfiguration> OutlineColours; // 0x88
	UMaterialInterface* OutlineMaterial; // 0xd8
	TArray<UMaterialInterface*> DefaultTranslucencyMaterials; // 0xe0
};

struct URestrictedGameplayTagsList {
	FString ConfigFileName; // 0x30
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x40
};

struct UWinter2021PlayerComponent {
	bool _hasCosmeticUnlockRequirementBeenSatisfied; // 0xb8
	bool _hasSentUnlockCosmeticRequest; // 0xb9
	bool _hasAllCosmeticRewards; // 0xba
};

struct UGizmoConstantAxisSource {
	FVector Origin; // 0x38
	FVector Direction; // 0x44
};

struct UARBasicLightEstimate {
	float AmbientIntensityLumens; // 0x30
	float AmbientColorTemperatureKelvin; // 0x34
	FLinearColor AmbientColor; // 0x38
};

struct URemeshProperties {
	float SmoothingStrength; // 0x60
	bool bFlips; // 0x64
	bool bSplits; // 0x65
	bool bCollapses; // 0x66
};

struct UUMGAltantaRitual {
	FText _claimText; // 0x300
	FText _claimedText; // 0x318
	FText _completedText; // 0x330
};

struct ALobbyBeaconClient {
	ALobbyBeaconState* LobbyState; // 0x2c8
	ALobbyBeaconPlayerState* PlayerState; // 0x2d0
	ELobbyBeaconJoinState LobbyJoinServerState; // 0x2d9
};

struct UInputAxisKeyDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x30
};

struct UPounceAttackObstructSubstate {
	FName _fullObstructMontage; // 0x118
};

struct UHISMMaterialHelperComponent {
	TArray<FMaterialConfig> MaterialConfigurations; // 0x688
	TArray<FIndexList> IndexOverrides; // 0x698
};

struct UBloodDecalEffect {
	UCurveFloat* AnimationTimelineCurve; // 0x38
	UCurveFloat* DestroyTimelineCurve; // 0x40
	TArray<UTexture2D*> Textures; // 0x48
	TArray<UTexture2D*> Normals; // 0x58
	bool EnableVisualEffects; // 0x68
	UBloodDecalEffectIntensity* BloodDecalEffectIntensity; // 0x70
	float ColorInterpolationSpeed; // 0x78
	UMaterialInterface* DefalultDecalMaterial; // 0x80
};

struct UMaterialExpressionConstant {
	float R; // 0x48
};

struct ATextRenderActor {
	UTextRenderComponent* TextRender; // 0x230
};

struct UNiagaraDataInterfaceRWBase {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct UAkSlider {
	float Value; // 0x128
	FDelegate ValueDelegate; // 0x12c
	FSliderStyle WidgetStyle; // 0x140
	EOrientation Orientation; // 0x4b0
	FLinearColor SliderBarColor; // 0x4b4
	FLinearColor SliderHandleColor; // 0x4c4
	bool IndentHandle; // 0x4d4
	bool locked; // 0x4d5
	float StepSize; // 0x4d8
	bool IsFocusable; // 0x4dc
	FAkPropertyToControl ThePropertyToControl; // 0x4e0
	FAkWwiseItemToControl ItemToControl; // 0x4f0
	FMulticastInlineDelegate OnValueChanged; // 0x530
	FMulticastInlineDelegate OnItemDropped; // 0x540
	FMulticastInlineDelegate OnPropertyDropped; // 0x550
};

struct UBTService_FindInteractor_Camper {
	EFindInteractableCamperFilter StatusFilter; // 0x218
	FAITunableParameter AllyDangerStateGoalWeight; // 0x21c
	FAITunableParameter IncapacitatedAlliesGoalWeight; // 0x22c
};

struct UOngoingGameEvent {
	FGameEventData _eventData; // 0x30
};

struct UMaterialExpressionCrossProduct {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
};

struct UVehicleWheel {
	UStaticMesh* CollisionMesh; // 0x30
	bool bDontCreateShape; // 0x38
	bool bAutoAdjustCollisionSize; // 0x39
	FVector Offset; // 0x3c
	float ShapeRadius; // 0x48
	float ShapeWidth; // 0x4c
	float Mass; // 0x50
	float DampingRate; // 0x54
	float SteerAngle; // 0x58
	bool bAffectedByHandbrake; // 0x5c
	UTireType* TireType; // 0x60
	UTireConfig* TireConfig; // 0x68
	float LatStiffMaxLoad; // 0x70
	float LatStiffValue; // 0x74
	float LongStiffValue; // 0x78
	float SuspensionForceOffset; // 0x7c
	float SuspensionMaxRaise; // 0x80
	float SuspensionMaxDrop; // 0x84
	float SuspensionNaturalFrequency; // 0x88
	float SuspensionDampingRatio; // 0x8c
	EWheelSweepType SweepType; // 0x90
	float MaxBrakeTorque; // 0x94
	float MaxHandBrakeTorque; // 0x98
	UWheeledVehicleMovementComponent* VehicleSim; // 0xa0
	int32_t WheelIndex; // 0xa8
	float DebugLongSlip; // 0xac
	float DebugLatSlip; // 0xb0
	float DebugNormalizedTireLoad; // 0xb4
	float DebugWheelTorque; // 0xbc
	float DebugLongForce; // 0xc0
	float DebugLatForce; // 0xc4
	FVector Location; // 0xc8
	FVector OldLocation; // 0xd4
	FVector Velocity; // 0xe0
};

struct UUMGStorefrontCustomizationWidget {
	UTextBlock* CustomizationQuantityText; // 0x468
	UCanvasPanel* CustomizationQuantityPanel; // 0x470
};

struct UBaseLingeringStatusEffect {
	float _lingerDuration; // 0x350
};

struct ULightingInterpolator {
	FMulticastInlineDelegate OnInterpolationDone; // 0x30
	ABaseSky* _targetLighting; // 0x78
};

struct ATormentTrailController {
	FReplicatedTrailPointList _trailPointList; // 0x288
	AMobileTormentTrailRenderer* _mobileTormentTrailRenderer; // 0x3a8
};

struct UK26AnimInstance {
	bool _isUsingPower; // 0x5a8
};

struct USlashedOutOfBearTrapInteraction {
	TArray<FString> _overridableInteractions; // 0x5b0
	UAnimMontage* _updateMontage; // 0x5c0
};

struct UMaterialExpressionDotProduct {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
};

struct ADBDGeneratorDrivenReflectionCaptureActor {
	UGenyReflectionCaptureComponent* genyReflectionCapture; // 0x258
};

struct UDestructibleMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x388
	TArray<FFractureEffect> FractureEffects; // 0x410
};

struct UUMGChargeableInteractionWidget {
	UImage* ItemIcon; // 0x300
	ESlateVisibility InteractionIconVisibility; // 0x308
	ESlateVisibility ItemChargeVisibility; // 0x309
	ESlateVisibility InteractionHudVisibility; // 0x30a
};

struct UCruelConfinement {
	float _effectiveRadius[0x3]; // 0x3d0
	float _blockDuration[0x3]; // 0x3dc
	FLinearColor _windowAuraColor; // 0x3e8
	TMap<AGenerator*, FWindowBlockableList> _blockableLists; // 0x3f8
};

struct UEditPivotToolProperties {
	bool bEnableSnapDragging; // 0x58
	EEditPivotSnapDragRotationMode RotationMode; // 0x59
};

struct UTwinJumpAttack {
	FDBDTunableRowHandle _jumpVelocity; // 0x360
	UCurveFloat* _jumpAngleCurve; // 0x388
	FDBDTunableRowHandle _upDownObstructionAnglePrecision; // 0x3c0
	FDBDTunableRowHandle _leftRightObstructionAnglePrecision; // 0x3e8
	FDBDTunableRowHandle _authorizedLandingHeight; // 0x410
	bool _shouldTwinHaveJumpObjectType; // 0x441
};

struct UTextBlockWidgetStyle {
	FTextBlockStyle TextBlockStyle; // 0x38
};

struct UMaterialExpressionSaturate {
	FExpressionInput Input; // 0x48
};

struct UEditableGameplayTagQuery {
	FString UserDescription; // 0x30
	UEditableGameplayTagQueryExpression* RootExpression; // 0x50
	FGameplayTagQuery TagQueryExportText_Helper; // 0x58
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
	FGeomComponentCacheParameters CacheParameters; // 0x5e8
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x638
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x648
	FMulticastInlineDelegate OnChaosBreakEvent; // 0x670
	float DesiredCacheTime; // 0x680
	bool CachePlayback; // 0x684
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x688
	bool bNotifyBreaks; // 0x698
	bool bNotifyCollisions; // 0x699
	UBodySetup* DummyBodySetup; // 0x880
};

struct ADBDGameState {
	FMulticastInlineDelegate OnEscapeDoorActivated; // 0x2c8
	FMulticastInlineDelegate OnLevelReadyToPlay; // 0x368
	FMulticastInlineDelegate OnIntroCompleted; // 0x378
	FMulticastInlineDelegate OnKillerIntroCompletePercentChanged; // 0x388
	FMulticastInlineDelegate OnLightingGenerated; // 0x398
	USpecialEventGameplaySpawnerComponent* _specialEventGameplaySpawnerComponent; // 0x3d8
	FMulticastInlineDelegate AuthorityOnAllPlayerLoaded; // 0x3e0
	FMulticastInlineDelegate OnActivatedGeneratorCountChangedDynamic; // 0x408
	FMulticastInlineDelegate OnSlasherSet; // 0x418
	FMulticastInlineDelegate OnObsessionChanged; // 0x440
	int32_t CamperDeadCount; // 0x450
	int32_t CamperInMeatLockerCount; // 0x454
	int32_t CamperEscaped; // 0x458
	int32_t WaitingForEscape; // 0x45c
	int32_t CamperCount; // 0x460
	bool LeaveSpectateRequested; // 0x464
	int32_t SecondsLeftInLobby; // 0x468
	ASlasherPlayer* Slasher; // 0x4a0
	URenderingFeaturesSequencer* _renderingSequencer; // 0x4a8
	int32_t _camperHookedInBasementCount; // 0x4c0
	bool _playersReadyToStart; // 0x4cc
	FBuiltLevelData _builtLevelData; // 0x4d0
	FOfferingData _levelOfferings; // 0x578
	AClipManager* _clipManager; // 0x590
	FGuid _sessionId; // 0x598
	FGuid _lobbyId; // 0x5a8
	int32_t _activatedGeneratorCount; // 0x5b8
	int32_t _requiredActivatedGeneratorCount; // 0x5bc
	bool _escapeDoorActivated; // 0x5c0
	bool _escapeDoorOpened; // 0x5c1
	bool _isHatchOpen; // 0x5c2
	bool _levelReadyToPlay; // 0x5c3
	bool _playerDistributionReady; // 0x5c4
	bool _usingWeakenedMechanic; // 0x5c5
	int32_t _survivorLeft; // 0x5c8
	TArray<AMeatHook*> _meatHooks; // 0x5d0
	TArray<ASearchable*> _searchables; // 0x5e0
	TArray<AGenerator*> _generators; // 0x5f0
	TArray<AEscapeDoor*> _escapeDoors; // 0x600
	TArray<AHatch*> _hatches; // 0x610
	TArray<AReverseBearTrapRemover*> _reverseBearTrapRemovers; // 0x620
	TArray<ABaseTrap*> _baseTraps; // 0x630
	TArray<APallet*> _pallets; // 0x640
	TArray<AWindow*> _windows; // 0x650
	TArray<ALocker*> _lockers; // 0x660
	TArray<ABreakableBase*> _breakableWalls; // 0x670
	TArray<ATotem*> _totems; // 0x680
	FBoxSphereBounds _mapBoxSphereBounds; // 0x690
	int32_t _camperEscapedThroughHatch; // 0x6c4
	ACamperPlayer* _obsessionTarget; // 0x6c8
	bool _cachedObsessionEscaped; // 0x6d0
	TArray<AInteractable*> _traps; // 0x6d8
	FGamePresetData _gamePresetData; // 0x6f0
	bool _gameLevelLoaded; // 0x778
	bool _gameLevelCreated; // 0x779
	bool _gameLevelEnded; // 0x77a
	EEndGameReason _gameEndedReason; // 0x77b
	UEndGameStateComponent* _endGameState; // 0x780
	UScourgeHookManagerComponent* _scourgeHookManager; // 0x788
	UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent; // 0x790
	UCharacterCollection* _characterCollection; // 0x7a0
	UCollectableCollection* _collectableCollection; // 0x7a8
	UServerTimeProviderComponent* _serverTimeProvider; // 0x7b0
	UInGameAssetPreloaderComponent* _inGameAssetPreloaderComponent; // 0x7b8
	FDateTime _matchStartTime; // 0x7e8
	bool _isServerDedicated; // 0x7f0
	int32_t _maxSurvivorCount; // 0x7f4
	FString _serverBuildVersion; // 0x7f8
};

struct UUMGBloodStoreArrayWidget {
	UUMGBloodStoreRowWidget* FirstBloodStoreRowWidget; // 0x310
	UUMGBloodStoreRowWidget* SecondBloodStoreRowWidget; // 0x318
	UUMGBloodStoreRowWidget* ThirdBloodStoreRowWidget; // 0x320
	UUMGBloodStoreRowWidget* FourthBloodStoreRowWidget; // 0x328
	UUMGBloodStoreRowWidget* FifthBloodStoreRowWidget; // 0x330
};

struct UK26P01 {
	float _generatorBlockDuration[0x3]; // 0x3d0
	float _auraRevealDuration[0x3]; // 0x3dc
	FLinearColor _generatorAuraColorForKiller; // 0x3e8
	int32_t _survivorsToBeHooked; // 0x3f8
	TArray<AGenerator*> _blockedGenerators; // 0x400
	TArray<AActor*> _hookedSurvivors; // 0x410
	TArray<FFastTimer> _generatorBlockingTimers; // 0x420
};

struct UAtmosphericFogComponent {
	float SunMultiplier; // 0x210
	float FogMultiplier; // 0x214
	float DensityMultiplier; // 0x218
	float DensityOffset; // 0x21c
	float DistanceScale; // 0x220
	float AltitudeScale; // 0x224
	float DistanceOffset; // 0x228
	float GroundOffset; // 0x22c
	float StartDistance; // 0x230
	float SunDiscScale; // 0x234
	float DefaultBrightness; // 0x238
	FColor DefaultLightColor; // 0x23c
	char bDisableSunDisk : 1; // 0x240
	char bAtmosphereAffectsSunIlluminance : 1; // 0x240
	char bDisableGroundScattering : 1; // 0x240
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x244
	UTexture2D* TransmittanceTexture; // 0x270
	UTexture2D* IrradianceTexture; // 0x278
};

struct URootMovie {
	FString SwfAssetName; // 0x30
	UGFxMoviePlayer* SwfMoviePlayer; // 0x40
	UScreenController* m_ScreenController; // 0x58
	UUIController* m_UIController; // 0x60
	UGameInstance* m_GameInstance; // 0x68
	UDBDInputManager* _inputManager; // 0x70
};

struct ABlightPower {
	UPowerChargeComponent* _blightPowerCharge; // 0x4c8
	UPowerToggleComponent* _blightPowerToggle; // 0x4d0
	UChargeableComponent* _blightPowerActivateChargeable; // 0x4d8
	UBlightPowerStateComponent* _blightPowerStateComponent; // 0x4e0
	FDBDTunableRowHandle _blightPowerActivateMaxCharge; // 0x4e8
	FTunableStat _blightPowerMaxCharge; // 0x510
	FDBDTunableRowHandle _blightPowerDechargeRate; // 0x590
	FDBDTunableRowHandle _blightPowerRechargeRate; // 0x5b8
};

struct UUMGPartyBotSlotWidget {
	UTextBlock* RoleText; // 0x300
	UTextBlock* BotDifficultyText; // 0x308
	UTextBlock* CharacterNameText; // 0x310
	UUMGBaseButtonWidget* EditButton; // 0x318
	UImage* EditIcon; // 0x320
	UUMGBaseButtonWidget* InvitePartyButton; // 0x328
	UCanvasPanel* InvitePartyCanvas; // 0x330
	TMap<EAIDifficultyLevel, FSlateColor> DifficultyColors; // 0x338
};

struct UUMGExpandableListWidget {
	bool ShouldHideExpandableListIfEmpty; // 0x300
	bool IsExtendedAtStart; // 0x301
	UUMGBaseButtonWidget* ExpansionButton; // 0x308
	UVerticalBox* ItemContainer; // 0x310
	UTextBlock* CategorieName; // 0x318
	UTextBlock* itemCount; // 0x320
	UExpandableArea* ExpandableArea; // 0x328
	FText HeaderTitle; // 0x330
	TArray<UUserWidget*> _childWidgets; // 0x350
};

struct UCheckBoxWidgetStyle {
	FCheckBoxStyle CheckBoxStyle; // 0x38
};

struct UUMGAtlRootStorefrontWidget {
	UUMGCurrencyWidget* ShardWalletWidget; // 0x3f0
	UUMGAuricCellsButton* AuricWalletWidget; // 0x3f8
};

struct AAudioVolume {
	float Priority; // 0x268
	char bEnabled : 1; // 0x26c
	FReverbSettings Settings; // 0x270
	FInteriorSettings AmbientZoneSettings; // 0x290
};

struct UUMGAtlantaMatchConfigTab {
	USizeBox* IconSizeBox; // 0x430
	UTextBlock* TabName; // 0x438
	UCanvasPanel* RandomPanel; // 0x440
};

struct UMapActorComponent {
	EMapActorCategory Category; // 0xb8
	UPrimitiveComponent* _mapActorCollider; // 0xc0
	bool _detectionEnabled; // 0xe0
};

struct UInputTouchDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x30
};

struct UDBDAttackerComponent {
	FMulticastInlineDelegate OnAttackStartDelegate; // 0xb8
	FMulticastInlineDelegate OnAttackFinishDelegate; // 0xc8
	TArray<UDBDAttack*> _attacks; // 0x100
	UDBDAttack* _requestedAttack; // 0x120
	UDBDAttack* _currentAttack; // 0x128
	TArray<FAttackDelegatePair> _attackHitDelegates; // 0x178
};

struct UDatasmithStaticMeshIFCImportData {
	FString SourceGlobalId; // 0x30
};

struct UMaterialExpressionThinTranslucentMaterialOutput {
	FExpressionInput TransmittanceColor; // 0x48
};

struct AARSkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x240
};

struct UInputBehaviorSet {
	TArray<FBehaviorInfo> Behaviors; // 0x30
};

struct ALobbyLevel {
	TArray<ADisplayStand*> _registeredDisplayStands; // 0x280
	EWorldFlowEvent LobbyLoadedEvent; // 0x290
};

struct UAkWinGDKInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UDiscordancePerk {
	TArray<FGeneratorQueryHandlePair> _generatorQueryHandlePairs; // 0x3d0
	float _effectRange[0x3]; // 0x410
	float _auraLingerDuration; // 0x41c
	int32_t _numSurvivorsRepairingToReveal; // 0x420
	bool _isPerkConsideredActive; // 0x425
	AGenerator* _genratorToCheckNextFrame; // 0x428
};

struct UQuestEventsHandler {
	TArray<UQuestEventEvaluatorBase*> _evaluatorList; // 0xc0
};

struct ULocomotionSurvivorSubAnimInstance {
	bool _isRecoveringWhileCrawling; // 0x4f0
	bool _isTenacityPerkActive; // 0x4f1
	float _wasStandingResetTime; // 0x4f4
	float _wasRunningResetTime; // 0x4f8
	float _wasCrouchingResetTime; // 0x4fc
	float _wasMovingResetTime; // 0x500
	bool _isIdle; // 0x504
	float _recentlyIdleCooldownTime; // 0x508
	float _recentlyNotIdleCooldownTime; // 0x50c
	bool _wasIdleRecently; // 0x510
	bool _idleInterupt; // 0x511
	bool _isAgainstSmallKiller; // 0x512
	bool _isMoving; // 0x513
	bool _wasRunning; // 0x514
	bool _isRunning; // 0x515
	bool _wasCrouching; // 0x516
	bool _isCrouching; // 0x517
	bool _wasStanding; // 0x518
	bool _isStanding; // 0x519
	bool _isCrawling; // 0x51a
	bool _isDead; // 0x51b
	float _walkAnimSpeed; // 0x51c
	float _walkAnimStartOffset; // 0x520
	float _walkAnimPlayRateMultiplier; // 0x524
	bool _wasLastDamageSourceDeepWounds; // 0x528
	bool _isStrafing; // 0x529
	bool _isUsingDeadHard; // 0x52a
	float _direction; // 0x52c
	bool _isUsingAimItem; // 0x530
	bool _isBeingCarried; // 0x531
	bool _isInDeathBed; // 0x532
	float _aimOffsetPitch; // 0x534
	bool _turn180Active; // 0x538
	bool _turningRight; // 0x539
	bool _start180Active; // 0x53a
	float _aimOffsetYawInterpolated; // 0x53c
	bool _allowLookAt; // 0x540
	bool _isDrasticAimOffsetYawChangeDetected; // 0x541
	float _aimOffsetYawClampValue; // 0x544
	float _maxParadiseWalkCycleOffSet; // 0x548
	float _minParadiseWalkPlayRateMultiplier; // 0x550
	float _turn180DetectionPrecision; // 0x558
	float _turn180DetectionDeadZone; // 0x55c
	float _turn180PrevVelocitiesCacheDuration; // 0x560
	float _minDurationBetweenTurn180Detection; // 0x564
	float _start180DetectionPrecision; // 0x568
	float _idleDurationFor180StartDetection; // 0x56c
	float _durationBeforeStart180Reset; // 0x570
};

struct APumpkin {
	FName _specialBehaviourId; // 0x330
	EPumpkinType _pumpkinType; // 0x33c
	UPumpkinInteraction* _pumpkinInteraction; // 0x340
	UPumpkinInteraction* _pumpkinInteractionKiller; // 0x348
	UChargeableComponent* _pumpkinInteractionChargeable; // 0x350
	UChargeableComponent* _pumpkinInteractionChargeableKiller; // 0x358
	UInteractor* _pumpkinInteractor; // 0x360
	UPrimitiveComponent* _pumpkinInteractionZone; // 0x368
	UDBDOutlineComponent* _outlineComponent; // 0x370
	USkeletalMeshComponent* _pumpkinSkeletalMesh; // 0x378
	FDBDTunableRowHandle _pumpkinInteractionSecondsToCharge; // 0x380
	FDBDTunableRowHandle _pumpkinInteractionSecondsToChargeKiller; // 0x3a8
	FLinearColor _auraColorWhileInteracting; // 0x3d0
	FDBDTunableRowHandle _pumpkinTreatChance; // 0x3e0
	FDBDTunableRowHandle _pumpkinTrickChance; // 0x408
	FDBDTunableRowHandle _pumpkinTreatDuration; // 0x430
	FDBDTunableRowHandle _pumpkinTrickDuration; // 0x458
	FDBDTunableRowHandle _pumpkinSpeedBoost; // 0x480
	FDBDTunableRowHandle _pumpkinSpeedDebuff; // 0x4a8
	UStatusEffect* _pumpkinStatusEffect; // 0x4d0
};

struct ADBDBaseGameMode {
	FDataTableDropdown DebugSpecialEvent; // 0x328
};

struct UZombiesPatrolAreaManager {
	TArray<AMeatHook*> _availablePatrolAreas; // 0xb8
	TArray<AMeatHook*> _usedPatrolAreas; // 0xc8
	float _maxDistanceBetweenMeatHookAndPlayers; // 0xd8
};

struct UDBDOutlineComponent {
	float InterpolationSpeed; // 0x2a0
	bool ShouldBeAboveOutlines; // 0x2a4
	bool ForceOutlineFarAway; // 0x2a5
	bool LimitToCustomDepthObjects; // 0x2a6
	bool FadeOutAsClosingIn; // 0x2a7
	bool isAlwaysVisible; // 0x2a8
	float minimumOutlineDistance; // 0x2ac
	FString OutlineName; // 0x2b0
	FDBDOutlineRenderStrategySelector _renderStrategySelector; // 0x318
	UBatchMeshCommands* _batchMeshCommands; // 0x328
	UBaseOutlineRenderStrategy* _renderingStrategy; // 0x340
};

struct USlateSettings {
	bool bExplicitCanvasChildZOrder; // 0x30
};

struct URadialVector {
	float Magnitude; // 0xb8
	FVector Position; // 0xbc
};

struct UGizmoBoxComponent {
	FVector Origin; // 0x448
	FQuat Rotation; // 0x460
	FVector Dimensions; // 0x470
	float LineThickness; // 0x47c
	bool bRemoveHiddenLines; // 0x480
	bool bEnableAxisFlip; // 0x481
};

struct UDBDScrollBox {
	bool _useControllerScroll; // 0x908
	bool _shouldScrollOnMouseOver; // 0x909
	float _scrollSpeed; // 0x90c
	UCoreInputPromptTextWidget* _displayPrompt; // 0x910
	FText _displayPromptText; // 0x918
	EShowScrollDisplayPrompt _showDisplayPrompt; // 0x930
};

struct UDBDHud {
	TMap<FName, AStatusView*> _statusViews; // 0x30
};

struct APlayerState {
	float Score; // 0x230
	int32_t playerID; // 0x234
	char Ping; // 0x238
	char bShouldUpdateReplicatedPing : 1; // 0x23a
	char bIsSpectator : 1; // 0x23a
	char bOnlySpectator : 1; // 0x23a
	char bIsABot : 1; // 0x23a
	char bIsInactive : 1; // 0x23a
	char bFromPreviousLevel : 1; // 0x23a
	int32_t StartTime; // 0x23c
	ULocalMessage* EngineMessageClass; // 0x240
	FString SavedNetworkAddress; // 0x250
	FUniqueNetIdRepl UniqueId; // 0x260
	APawn* PawnPrivate; // 0x298
	FString PlayerNamePrivate; // 0x318
};

struct APallet {
	float PalletDownEvadeDoorFrontPointOffset; // 0x328
	EPalletState _state; // 0x348
	bool _isIllusionaryPalletDown; // 0x349
	USkeletalMeshComponent* _illusionaryPallet; // 0x350
	UInteractionDefinition* _destroyLeft; // 0x358
	UInteractionDefinition* _destroyRight; // 0x360
	UBoxComponent* _pushBox; // 0x368
	float _maxDotproductThresholdForPulldownAccross; // 0x370
	float _fallDuration; // 0x374
	UBoxComponent* _stunBoxLeft; // 0x378
	UBoxComponent* _stunBoxRight; // 0x380
	TSet<AActor*> _stunnedActors; // 0x388
	ADBDPlayer* _playerExecutingPulldown; // 0x3d8
	FPalletPushSettings _pushSettings; // 0x3e0
	UDBDNavEvadeLoopComponent* _navEvadeLoopComponent; // 0x420
	UPalletPulldownBlockerComponent* _palletPulldownBlockerComponent; // 0x428
	bool _isDreamPallet; // 0x430
};

struct USectionnedChargeableComponent {
	char _sections; // 0x290
};

struct UBehaviorTreeComponent {
	TArray<UBTNode*> NodeInstances; // 0x138
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x270
};

struct UAnimMontage {
	FAlphaBlend BlendIn; // 0xb0
	float BlendInTime; // 0xe0
	FAlphaBlend BlendOut; // 0xe8
	float BlendOutTime; // 0x118
	float BlendOutTriggerTime; // 0x11c
	FName SyncGroup; // 0x120
	int32_t SyncSlotIndex; // 0x12c
	FMarkerSyncData MarkerData; // 0x130
	TArray<FCompositeSection> CompositeSections; // 0x150
	TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x160
	TArray<FBranchingPoint> BranchingPoints; // 0x170
	bool bEnableRootMotionTranslation; // 0x180
	bool bEnableRootMotionRotation; // 0x181
	bool bEnableAutoBlendOut; // 0x182
	ERootMotionRootLock RootMotionRootLock; // 0x183
	TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x188
	TArray<int32_t> BranchingPointStateNotifyIndices; // 0x198
	FTimeStretchCurve TimeStretchCurve; // 0x1a8
	FName TimeStretchCurveName; // 0x1d0
};

struct UTextureLODSettings {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x30
};

struct UFootGroundDetectorComponent {
	FName _hipTransformName; // 0x1d0
	FVector _slopeStartOffset; // 0x1dc
	float _footLength; // 0x1e8
	float _traceRadius; // 0x1ec
	float _maxWalkableSlopeAngle; // 0x1f0
	UCharacterMovementComponent* _movementComp; // 0x1f8
};

struct ABorderTile {
	TArray<FBorderElements> Borders; // 0x348
	UMapData* _map; // 0x358
};

struct UMagicLeapARPinComponent {
	FString ObjectUID; // 0x210
	int32_t UserIndex; // 0x220
	EMagicLeapAutoPinType AutoPinType; // 0x224
	bool bShouldPinActor; // 0x225
	UMagicLeapARPinSaveGame* PinDataClass; // 0x228
	FMulticastInlineDelegate OnPersistentEntityPinned; // 0x230
	FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x240
	FGuid PinnedCFUID; // 0x250
	USceneComponent* PinnedSceneComponent; // 0x260
	UMagicLeapARPinSaveGame* PinData; // 0x268
};

struct UParticleSystemReplay {
	int32_t ClipIDNumber; // 0x30
};

struct UMovieSceneBuiltInEasingFunction {
	EMovieSceneBuiltInEasing Type; // 0x38
};

struct UUMGCharacterFreeTicketButton {
	UWidgetSwitcher* ButtonSwitcher; // 0x300
	UTextBlock* FreeTicketLeftSecondsText; // 0x308
	UImage* FreeTicketLeftSecondsBG; // 0x310
};

struct UUMGStoreEventItemsPackButton {
	UImage* ImageIcon; // 0x300
	UTextBlock* TitleText; // 0x308
	UTextBlock* CurrencyAmountText; // 0x310
	UTextBlock* CurrencyNameText; // 0x318
	UUniformGridPanel* UniformGridPanel; // 0x320
	UUMGBaseButtonWidget* BuyButton; // 0x328
	UUMGAtlStorePriceWidget* StorePriceWidget; // 0x330
	UUMGAtlEndDateTimerWidget* EndDateTimerWidget; // 0x338
	UCanvasPanel* SelectedImageBox; // 0x340
	TSoftClassPtr<UObject> EventItemWidgetClassPtr; // 0x348
	int32_t nbColumns; // 0x378
};

struct UBetterTogether {
	bool ShouldRevealKiller; // 0x3d0
	bool ShouldRevealSurvivors; // 0x3d1
	float RevealDistance; // 0x3d4
	TArray<ADBDPlayer*> _affectedCampers; // 0x3d8
	AActor* _genToReveal; // 0x3f0
	float _durationByLevel[0x3]; // 0x3f8
};

struct UK26CrowPlacementValidatorComponent {
	UObjectPlacementValidationWithRestrictionStrategy* _objectPlacementValidationStrategyWithRestrictions; // 0xb8
};

struct UInputSettings {
	TArray<FInputAxisConfigEntry> AxisConfig; // 0x30
	char bAltEnterTogglesFullscreen : 1; // 0x40
	char bF11TogglesFullscreen : 1; // 0x40
	char bUseMouseForTouch : 1; // 0x40
	char bEnableMouseSmoothing : 1; // 0x40
	char bEnableFOVScaling : 1; // 0x40
	char bCaptureMouseOnLaunch : 1; // 0x40
	char bDefaultViewportMouseLock : 1; // 0x40
	char bAlwaysShowTouchInterface : 1; // 0x40
	char bShowConsoleOnFourFingerTap : 1; // 0x41
	char bEnableGestureRecognizer : 1; // 0x41
	bool bUseAutocorrect; // 0x42
	TArray<FString> ExcludedAutocorrectOS; // 0x48
	TArray<FString> ExcludedAutocorrectCultures; // 0x58
	TArray<FString> ExcludedAutocorrectDeviceModels; // 0x68
	EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x78
	EMouseLockMode DefaultViewportMouseLockMode; // 0x79
	float FOVScale; // 0x7c
	float DoubleClickTime; // 0x80
	TArray<FInputActionKeyMapping> ActionMappings; // 0x88
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x98
	TArray<FInputActionSpeechMapping> SpeechMappings; // 0xa8
	FSoftObjectPath DefaultTouchInterface; // 0xb8
	FKey ConsoleKey; // 0xd8
	TArray<FKey> ConsoleKeys; // 0xf8
};

struct UK22PowerChargePresentationItemProgressComponent {
	UPowerChargeComponent* _powerChargeComponent; // 0xb8
};

struct UUMGAtlantaTallyScreen {
	FMulticastInlineDelegate OnTallyLeft; // 0x300
	FMulticastInlineDelegate OnTallySpectateClicked; // 0x310
	FMulticastInlineDelegate OnTallyAddFriendEvent; // 0x320
	FMulticastInlineDelegate OnTallyReportEvent; // 0x330
	UUMGTallyListWidget* TallyScrollWidget; // 0x340
	TSoftClassPtr<UObject> TallyScoreboardClass; // 0x348
	TSoftClassPtr<UObject> TallyBloodpointsClass; // 0x378
	TSoftClassPtr<UObject> TallyRankClass; // 0x3a8
	TSoftClassPtr<UObject> TallyPlayerLevelClass; // 0x3d8
	TSoftClassPtr<UObject> TallyCharacterProgressionClass; // 0x408
	FText TextLeaveLobby; // 0x438
	FText SpectateButtonText; // 0x450
	EPlayerRole PlayerRole; // 0x468
	EGameType GameType; // 0x469
	int32_t PlayerStatus; // 0x46c
	bool FromSpectateMode; // 0x470
	UUMGTallyScoreboardWidget* _scoreboardWidget; // 0x478
	UUMGTallyBloodpointsWidget* _bloodpointsWidget; // 0x480
	UUMGTallyRankWidget* _rankWidget; // 0x488
	UUMGTallyPlayerLevelWidget* _playerLevelWidget; // 0x490
	UUMGTallyCharacterProgressionWidget* _characterLevelWidget; // 0x498
};

struct UOvercome {
	float _exhaustionDuration[0x3]; // 0x3d0
	UActivatableExhaustedEffect* _exhaustedEffect; // 0x3e0
};

struct UMovieSceneParticleParameterTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UUMGRitualRefreshButton {
	UCanvasPanel* RefreshCanvas; // 0x430
	UWidgetSwitcher* RefreshSwitcher; // 0x438
};

struct UBTTask_ExtMoveDirecltyToward {
	ECharacterMovementTypes MovementMode; // 0xc8
};

struct UPerkCollectionComponent {
	TArray<UPerk*> _array; // 0xb8
};

struct UGameplayTagsList {
	FString ConfigFileName; // 0x30
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x40
};

struct UK25RemoveChainInteraction {
	FDBDTunableRowHandle _interactionTimePerChainsAttached; // 0x6f0
	UK25SurvivorChainAttachmentComponent* _cachedSurvivorChainAttachmentComponent; // 0x718
	TWeakObjectPtr<AK25Chain> _chainBeingRemoved; // 0x720
	TWeakObjectPtr<UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent; // 0x728
};

struct UPossessionComponent {
	bool _startPossessed; // 0x119
	AAIController* _emptyController; // 0x120
};

struct UBlackboardComponent {
	UBrainComponent* BrainComp; // 0xb8
	UBlackboardData* DefaultBlackboardAsset; // 0xc0
	UBlackboardData* BlackboardAsset; // 0xc8
	TArray<UBlackboardKeyType*> KeyInstances; // 0xf0
};

struct UUITweenMaterialVectorProperties {
	UMaterialInstanceDynamic* MaterialInstance; // 0x30
};

struct AMovementModifierActor {
	float MaxSpeedMultiplier; // 0x230
};

struct UInnerStrength {
	float _hideDuration[0x3]; // 0x3d0
	bool _perkEnabled; // 0x3dc
};

struct UGameEngine {
	float MaxDeltaTime; // 0xf28
	float ServerFlushLogInterval; // 0xf2c
	UGameInstance* GameInstance; // 0xf30
};

struct UBTService_StimuliMonitor_Slasher {
	FBlackboardKeySelector BBInvestigateStimulusLocation; // 0x190
	FBlackboardKeySelector BBInvestigateStimulusActor; // 0x1c0
	FBlackboardKeySelector BBInBehaviorInvestigationStep; // 0x1f0
	FBlackboardKeySelector BBIsBlind; // 0x220
	FBlackboardKeySelector BBChasedActor; // 0x250
	FAITunableParameter UseNextStimulusInvestigationAfterChaseDelay; // 0x280
	float IgnorePreviousChasedStimulusActorDelay; // 0x290
	float DefaultStimulusToInvestigateMaxAge; // 0x294
	float KOStimulusToInvestigateMaxAge; // 0x298
	float NextStimulusInvestigationMinRange; // 0x29c
	float CantSeeOverBlindRatio; // 0x2a0
	float FavorizeStandingTargetInRange; // 0x2a4
	float FavorizeStandingTargetOutRange; // 0x2a8
};

struct UTileSpawnPointSelector {
	TArray<FSelectableTileSpawnPoint> _tileSpawnPoints; // 0x210
};

struct UVOIPTalker {
	FVoiceSettings Settings; // 0xb8
};

struct UUMGPlayerStatusIcon {
	UProgressBar* HealthBar; // 0x300
	UProgressBar* TimerBar; // 0x308
	UCanvasPanel* HealthBarContainer; // 0x310
	UCanvasPanel* TimerBarContainer; // 0x318
	UTextBlock* playerName; // 0x320
	UImage* StatusIconBloodTop; // 0x328
	UImage* StatusIconBloodBottom; // 0x330
	UImage* StatusIcon; // 0x338
	UCanvasPanel* ObsessionCanvas; // 0x340
	UCanvasPanel* BrokenIndicatorCanvas; // 0x348
	UCanvasPanel* AfflictionCanvas; // 0x350
	UCanvasPanel* AfflictionIntroCanvas; // 0x358
	UCanvasPanel* SleepStatusCanvas; // 0x360
	UCanvasPanel* SleepTimerCanvas; // 0x368
	UCanvasPanel* ReverseBearTrapCanvas; // 0x370
	UImage* ReverseBearTrapArrow; // 0x378
	UCanvasPanel* SicknessCanvas; // 0x380
	UImage* SicknessFill; // 0x388
	UCanvasPanel* SpectateCanvas; // 0x390
	UCanvasPanel* SelectedSpectatorCanvas; // 0x398
	UCanvasPanel* AgonyCanvas; // 0x3a0
	UCanvasPanel* HandsGrabbing; // 0x3a8
	float SicknessFillHighOpacity; // 0x3b0
	float SicknessFillLowOpacity; // 0x3b4
	UCanvasPanel* StatusEffectContainerCanvas; // 0x3b8
	UMaterialInstanceDynamic* SicknessFillMI; // 0x3c0
	UTexture2D* _hookedTexture; // 0x3c8
	UTexture2D* _hookedBloodTexture; // 0x3d0
	UTexture2D* _trappedTexture; // 0x3d8
	UTexture2D* _trappedBloodTexture; // 0x3e0
	UTexture2D* _deadTexture; // 0x3e8
	UTexture2D* _deadBloodTexture; // 0x3f0
	UTexture2D* _escapedTexture; // 0x3f8
	UTexture2D* _injuredTexture; // 0x400
	UTexture2D* _injuredBloodTexture; // 0x408
	UTexture2D* _crawlingTexture; // 0x410
	UTexture2D* _crawlingBloodTexture; // 0x418
	UTexture2D* _sacrificedTexture; // 0x420
	UTexture2D* _sacrificedBloodTexture; // 0x428
	UTexture2D* _disconnectedTexture; // 0x430
	UTexture2D* _deathBedTexture; // 0x438
	UTexture2D* _defaultTexture; // 0x440
	TSoftClassPtr<UObject> UMGStalkingStatusEffectUIClass; // 0x448
	TSoftClassPtr<UObject> UMGLacerationStatusEffectUIClass; // 0x478
	int32_t _maxNumberCharacterInName; // 0x4a8
	UUMGStalkingStatusEffectUI* _stalkingStatusEffectUI; // 0x558
	UUMGLacerationStatusEffectUI* _lacerationStatusEffectUI; // 0x560
};

struct ULockerFakeEnterInteraction {
	float _lockerInteractionBlockTime; // 0x5b0
	ALocker* _owningLocker; // 0x5b8
	FDBDTunableRowHandle _fakeEnterLoudNoiseRange; // 0x5c0
};

struct UTransformMeshesToolProperties {
	ETransformMeshesTransformMode TransformMode; // 0x58
	bool bSetPivot; // 0x59
	bool bEnableSnapDragging; // 0x5a
	ETransformMeshesSnapDragSource SnapDragSource; // 0x5b
	ETransformMeshesSnapDragRotationMode RotationMode; // 0x5c
};

struct UIsOriginatingPerkBoundToTotems {
	EComparisonOperation _comparisonOperator; // 0xe8
	int32_t _totemCount; // 0xec
};

struct UDBDNavMeshExplorerComponent {
	float ExploreAtAgentMoveDistance; // 0xb8
	float ExploreAtInterval; // 0xbc
	FAITunableParameter ExplorationBoxHalfExtent; // 0xc0
	int32_t FullyAutoExploredAtGameTime; // 0xd0
	UDBDPathFollowingComponent* _pathFollowingComponent; // 0xd8
};

struct UWalesCypherParameters {
	FString AUDIO_EVENT; // 0x38
	int32_t SLASHER_INDEX; // 0x48
	int32_t CAMPER_INDEX; // 0x4c
};

struct UPlagueSurvivorAnalyticsComponent {
	uint32_t _replicatedRegularVomitHits; // 0xb8
};

struct UTransformProxy {
	bool bRotatePerObject; // 0x78
	bool bSetPivotMode; // 0x79
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct ADBDBasePlayer {
	FMulticastInlineDelegate OnCustomizationChanged; // 0x4d0
	FGameplayTagContainer _semanticGameplayTags; // 0x4e0
	UBaseGroundDetectorComponent* _leftFootGroundDetector; // 0x500
	UBaseGroundDetectorComponent* _rightFootGroundDetector; // 0x508
	int32_t _characterIndex; // 0x518
};

struct ADynamicGrass {
	UMaterialParameterCollection* _worldSettings; // 0x230
};

struct UPlatformMediaSource {
	UMediaSource* MediaSource; // 0x88
};

struct ULandscapeGrassType {
	TArray<FGrassVariety> GrassVarieties; // 0x30
	char bEnableDensityScaling : 1; // 0x40
	UStaticMesh* GrassMesh; // 0x48
	float GrassDensity; // 0x50
	float PlacementJitter; // 0x54
	int32_t StartCullDistance; // 0x58
	int32_t EndCullDistance; // 0x5c
	bool RandomRotation; // 0x60
	bool AlignToSurface; // 0x61
};

struct UUMGBankWidget {
	UUMGCurrencyWidget* BloodPointsCurrency; // 0x300
	UUMGAuricCellsButton* CellsButton; // 0x308
	UUMGCurrencyWidget* IridescentShardsCurrency; // 0x310
};

struct UK24CharacterFXComponent {
	FMulticastInlineDelegate OnPowerLevelChangedFx; // 0xb8
	FMulticastInlineDelegate Local_OnKillerHitZombie; // 0xc8
	FMulticastInlineDelegate Local_OnKillerContaminatedSurvivor; // 0xd8
};

struct UPathStrategy_FleeLoop {
	TMap<EAIDifficultyLevel, FGameStateEvadeLoopStrategyMapContainer> GameStateFleeLoopStrategyTable; // 0xb8
	TMap<EAIFleeLoopStrategy, UPathBuilder_EvadeLoop*> FleeLoopStrategyPathBuilders; // 0x108
	float CanBranchUnderEndPathDistance; // 0x158
	TMap<EAIFleeLoopStrategy, FAIRoll> BranchRolls; // 0x160
	float RejectLoopBranchUnderEndPointsDistance; // 0x1b0
	float RejectBranchPointNearerHostileSourceDistance; // 0x1b4
	float RejectBranchUnderNavLinkDistance; // 0x1b8
	float AddDistanceToRequiredBranchEvadeGap; // 0x1bc
};

struct UPerkSoundHudIcon {
	FName perkId; // 0x300
};

struct UMovieSceneEventTrack {
	char bFireEventsWhenForwards : 1; // 0x60
	char bFireEventsWhenBackwards : 1; // 0x60
	EFireEventsAtPosition EventPosition; // 0x64
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x68
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UAISense_Terror {
	TArray<FAITerrorEvent> _events; // 0x90
};

struct UUITween {
	TArray<UUITweenInstance*> ActiveInstances; // 0x40
};

struct UGizmoComponentAxisSource {
	USceneComponent* Component; // 0x38
	int32_t AxisIndex; // 0x40
	bool bLocalAxes; // 0x44
};

struct UModelComponent {
	UBodySetup* ModelBodySetup; // 0x440
};

struct UParticleModuleVelocityCone {
	FRawDistributionFloat Angle; // 0x40
	FRawDistributionFloat Velocity; // 0x70
	FVector Direction; // 0xa0
};

struct USoundAttenuation {
	FSoundAttenuationSettings Attenuation; // 0x30
};

struct UParticleModuleTypeDataGpu {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x40
	FGPUSpriteResourceData ResourceData; // 0x2c0
	float CameraMotionBlurAmount; // 0x420
	char bClearExistingParticlesOnInit : 1; // 0x424
};

struct Uk24PowerCooldownInteraction {
	FDBDTunableRowHandle _k24PowerCooldownTime; // 0x5b0
	UCurveFloat* _cooldownSpeedCurve; // 0x5d8
	UCurveFloat* _cooldownLvl3SpeedCurve; // 0x5e0
	UCurveFloat* _playedCooldownSpeedCurve; // 0x5e8
};

struct UNetDriver {
	FString NetConnectionClassName; // 0x38
	FString ReplicationDriverClassName; // 0x48
	int32_t MaxDownloadSize; // 0x58
	char bClampListenServerTickRate : 1; // 0x5c
	int32_t NetServerMaxTickRate; // 0x60
	int32_t MaxNetTickRate; // 0x64
	int32_t MaxInternetClientRate; // 0x68
	int32_t MaxClientRate; // 0x6c
	float ServerTravelPause; // 0x70
	float SpawnPrioritySeconds; // 0x74
	float RelevantTimeout; // 0x78
	float KeepAliveTime; // 0x7c
	float InitialConnectTimeout; // 0x80
	float InitialDevConnectionTimeout; // 0x84
	float ConnectionTimeout; // 0x88
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x8c
	bool bNoTimeouts; // 0x90
	bool bNeverApplyNetworkEmulationSettings; // 0x91
	UNetConnection* ServerConnection; // 0x98
	TArray<UNetConnection*> ClientConnections; // 0xa0
	int32_t RecentlyDisconnectedTrackingTime; // 0x110
	UWorld* World; // 0x150
	UPackage* WorldPackage; // 0x158
	UObject* NetConnectionClass; // 0x180
	UObject* ReplicationDriverClass; // 0x188
	FName NetDriverName; // 0x1a0
	TArray<FChannelDefinition> ChannelDefinitions; // 0x1b0
	TMap<FName, FChannelDefinition> ChannelDefinitionMap; // 0x1c0
	TArray<UChannel*> ActorChannelPool; // 0x210
	float Time; // 0x228
	float ExpireViewTargetDelay; // 0x6d8
	UReplicationDriver* ReplicationDriver; // 0x708
};

struct USurvivorAimableArmSensor {
	ACollectable* _aimableCollectable; // 0x148
	UAimableComponent* _aimable; // 0x150
};

struct UFieldSystemComponent {
	UFieldSystem* FieldSystem; // 0x428
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x440
};

struct UForceFeedbackComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x210
	char bAutoDestroy : 1; // 0x218
	char bStopWhenOwnerDestroyed : 1; // 0x218
	char bLooping : 1; // 0x218
	char bIgnoreTimeDilation : 1; // 0x218
	char bOverrideAttenuation : 1; // 0x218
	float IntensityMultiplier; // 0x21c
	UForceFeedbackAttenuation* AttenuationSettings; // 0x220
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x228
	FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2d8
};

struct UMovieSceneSkeletalAnimationSection {
	FMovieSceneSkeletalAnimationParams Params; // 0xe8
	UAnimSequence* AnimSequence; // 0x1c0
	UAnimSequenceBase* Animation; // 0x1c8
	float StartOffset; // 0x1d0
	float EndOffset; // 0x1d4
	float playRate; // 0x1d8
	char bReverse : 1; // 0x1dc
	FName SlotName; // 0x1e0
};

struct AAutoQualityAdjuster {
	float TargetResolutionScale; // 0x230
	float MinimumMS; // 0x234
	float MaximumMS; // 0x238
	float ScaleIncreaseRate; // 0x23c
	float ScaleDecreaseRate; // 0x240
	float MinimumAllowableScale; // 0x244
};

struct AConjoinedTwinInteractable {
	UChargeableComponent* _possessKillerChargeable; // 0x348
	UChargeableComponent* _chargeTwinJumpChargeable; // 0x350
	UChargeableComponent* _removeTwinChargeable; // 0x358
	UChargeableComponent* _destroyTwinChargeable; // 0x360
};

struct UAuthoritativePoolableActorComponent {
	bool _acquired; // 0xd0
};

struct UDreamInducerComponent {
	UActorComponent* _generatorDreamworldClass; // 0xb8
};

struct UUMGLoadingScreenWidget {
	UTextBlock* Description; // 0x300
	UImage* HintIcon; // 0x308
	UProgressBar* LoadingBar; // 0x310
	UPanelWidget* KillerPanel; // 0x318
	UPanelWidget* SurvivorPanel; // 0x320
	UTextBlock* Title; // 0x328
};

struct UTexture {
	FGuid LightingGuid; // 0x50
	int32_t LODBias; // 0x60
	TextureCompressionSettings CompressionSettings; // 0x64
	TextureFilter Filter; // 0x65
	ETextureMipLoadOptions MipLoadOptions; // 0x66
	TextureGroup LODGroup; // 0x67
	char SRGB : 1; // 0x68
	char bNoTiling : 1; // 0x68
	char VirtualTextureStreaming : 1; // 0x68
	char CompressionYCoCg : 1; // 0x68
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UMeshConstraintProperties {
	bool bPreserveSharpEdges; // 0x58
	EMeshBoundaryConstraint MeshBoundaryConstraint; // 0x59
	EGroupBoundaryConstraint GroupBoundaryConstraint; // 0x5a
	EMaterialBoundaryConstraint MaterialBoundaryConstraint; // 0x5b
	bool bPreventNormalFlips; // 0x5c
};

struct UTreeView {
	FDelegate BP_OnGetItemChildren; // 0x398
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3b0
};

struct UKillInteractionDefinition {
	bool _disableFOVSystemDuringInteraction; // 0x6d8
	TArray<FString> _nonOverrideableTargetInteractions; // 0x6e0
	bool _chargeCompleted; // 0x6f0
	bool _isKillShownInThirdPerson; // 0x6f1
	bool _manuallyManageMeshHiding; // 0x6f2
	FAnimationMontageDescriptor _exitMontage; // 0x6f8
};

struct ULoadingScreenUMG {
	UUMGLoadingScreenWidget* _loadingScreen; // 0x120
};

struct UBTDecorator_ExtTimeLimit {
	FAITunableParameter MaxTimeLimit; // 0x80
	FBlackboardKeySelector BBFilterKey; // 0x90
	EBasicKeyOperation FilterOperation; // 0xc0
};

struct UMaterialExpressionTextureSample {
	FExpressionInput Coordinates; // 0x58
	FExpressionInput TextureObject; // 0x74
	FExpressionInput MipValue; // 0x90
	FExpressionInput CoordinatesDX; // 0xac
	FExpressionInput CoordinatesDY; // 0xc8
	FExpressionInput AutomaticViewMipBiasValue; // 0xe4
	ETextureMipValueMode MipValueMode; // 0x100
	ESamplerSourceMode SamplerSource; // 0x101
	char AutomaticViewMipBias : 1; // 0x102
	char ConstCoordinate; // 0x103
	int32_t ConstMipValue; // 0x104
};

struct UBaseOutlineRenderStrategy {
	TArray<UBatchMeshCommands*> _batchCommands; // 0x30
};

struct AMagicLeapSharedWorldGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x328
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x338
	float PinSelectionConfidenceThreshold; // 0x348
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3f0
};

struct UFontFace {
	FString SourceFilename; // 0x38
	EFontHinting Hinting; // 0x48
	EFontLoadingPolicy LoadingPolicy; // 0x49
	EFontLayoutMethod LayoutMethod; // 0x4a
};

struct UGizmoTransformChangeStateTarget {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x58
};

struct UK26AmmoHandlerComponent {
	FMulticastInlineDelegate OnCurrentAmmoStateChanged; // 0xc8
	FTagStateBool _isAmmoOnCooldown; // 0xd8
	FMulticastInlineDelegate _onMaxAmmoSet; // 0x108
	float _rechargeEndTime; // 0x118
	bool _isTunableInit; // 0x11c
	AActor* _projectileClass; // 0x120
	FTunableStat _expirationCooldownTime; // 0x128
	TArray<FDBDTunableRowHandle> _firedCooldownTimesPerCrow; // 0x1a8
	FTunableStat _cooldownReductionPerCrowFired; // 0x1b8
	FTunableStat _expirationTime; // 0x238
	FDBDTunableRowHandle _expirationWarningBufferTime; // 0x2b8
	FTunableStat _maxAmmo; // 0x2e0
	int32_t _currentAmmo; // 0x360
	EK26AmmoCooldownReason _lastCooldownReason; // 0x364
	EK26AmmoState _currentAmmoState; // 0x365
	UK26PathHandlerComponent* _pathHandler; // 0x368
	UK26PowerStatusHandlerComponent* _statusHandler; // 0x370
	UAuthoritativeActorPoolComponent* _authoritativeActorPoolComponent; // 0x378
	FTagStateBool _isOutOfAmmo; // 0x380
	float _fallbackFireCooldown; // 0x3b0
};

struct AGeometryCollectionDebugDrawActor {
	FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x230
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x238
	bool bDebugDrawWholeCollection; // 0x250
	bool bDebugDrawHierarchy; // 0x251
	bool bDebugDrawClustering; // 0x252
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x253
	bool bShowRigidBodyId; // 0x254
	bool bShowRigidBodyCollision; // 0x255
	bool bCollisionAtOrigin; // 0x256
	bool bShowRigidBodyTransform; // 0x257
	bool bShowRigidBodyInertia; // 0x258
	bool bShowRigidBodyVelocity; // 0x259
	bool bShowRigidBodyForce; // 0x25a
	bool bShowRigidBodyInfos; // 0x25b
	bool bShowTransformIndex; // 0x25c
	bool bShowTransform; // 0x25d
	bool bShowParent; // 0x25e
	bool bShowLevel; // 0x25f
	bool bShowConnectivityEdges; // 0x260
	bool bShowGeometryIndex; // 0x261
	bool bShowGeometryTransform; // 0x262
	bool bShowBoundingBox; // 0x263
	bool bShowFaces; // 0x264
	bool bShowFaceIndices; // 0x265
	bool bShowFaceNormals; // 0x266
	bool bShowSingleFace; // 0x267
	int32_t SingleFaceIndex; // 0x268
	bool bShowVertices; // 0x26c
	bool bShowVertexIndices; // 0x26d
	bool bShowVertexNormals; // 0x26e
	bool bUseActiveVisualization; // 0x26f
	float PointThickness; // 0x270
	float LineThickness; // 0x274
	bool bTextShadow; // 0x278
	float TextScale; // 0x27c
	float NormalScale; // 0x280
	float AxisScale; // 0x284
	float ArrowScale; // 0x288
	FColor RigidBodyIdColor; // 0x28c
	float RigidBodyTransformScale; // 0x290
	FColor RigidBodyCollisionColor; // 0x294
	FColor RigidBodyInertiaColor; // 0x298
	FColor RigidBodyVelocityColor; // 0x29c
	FColor RigidBodyForceColor; // 0x2a0
	FColor RigidBodyInfoColor; // 0x2a4
	FColor TransformIndexColor; // 0x2a8
	float TransformScale; // 0x2ac
	FColor LevelColor; // 0x2b0
	FColor ParentColor; // 0x2b4
	float ConnectivityEdgeThickness; // 0x2b8
	FColor GeometryIndexColor; // 0x2bc
	float GeometryTransformScale; // 0x2c0
	FColor BoundingBoxColor; // 0x2c4
	FColor FaceColor; // 0x2c8
	FColor FaceIndexColor; // 0x2cc
	FColor FaceNormalColor; // 0x2d0
	FColor SingleFaceColor; // 0x2d4
	FColor VertexColor; // 0x2d8
	FColor VertexIndexColor; // 0x2dc
	FColor VertexNormalColor; // 0x2e0
	UBillboardComponent* SpriteComponent; // 0x2e8
};

struct UBoneMaskFilter {
	TArray<FInputBlendPose> BlendPoses; // 0x30
};

struct UInputComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x128
};

struct UScaleBox {
	EStretch Stretch; // 0x140
	EStretchDirection StretchDirection; // 0x141
	float UserSpecifiedScale; // 0x144
	bool IgnoreInheritedScale; // 0x148
};

struct AProceduralLevelData {
	TSoftObjectPtr<UPaperTileMap> SelectedPaperMap; // 0x230
	int32_t GenerationSeed; // 0x260
	EKillerMoodInfluence LevelMood; // 0x264
	FGeneratedLevelData GeneratedData; // 0x268
	TArray<FName> offerings; // 0x508
	int32_t PerksLevel; // 0x518
	TArray<FName> Perks; // 0x520
	bool SkipGameplayElementGeneration; // 0x530
	AActor* _builder; // 0x538
	UObject* _builderClassDef; // 0x540
};

struct UAssetManagerSettings {
	TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x48
	TArray<FDirectoryPath> DirectoriesToExclude; // 0x58
	TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x68
	TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x78
	bool bOnlyCookProductionAssets; // 0x88
	bool bShouldManagerDetermineTypeAndName; // 0x89
	bool bShouldGuessTypeAndNameInEditor; // 0x8a
	bool bShouldAcquireMissingChunksOnLoad; // 0x8b
	TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x90
	TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0xa0
	TArray<FAssetManagerRedirect> AssetPathRedirects; // 0xb0
	TSet<FName> MetaDataTagsForAssetRegistry; // 0xc0
};

struct UWidgetComponent {
	EWidgetSpace space; // 0x478
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
	UUserWidget* Widget; // 0x4e8
	UBodySetup* BodySetup; // 0x510
	UMaterialInterface* TranslucentMaterial; // 0x518
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x520
	UMaterialInterface* OpaqueMaterial; // 0x528
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x530
	UMaterialInterface* MaskedMaterial; // 0x538
	UMaterialInterface* MaskedMaterial_OneSided; // 0x540
	UTextureRenderTarget2D* RenderTarget; // 0x548
	UMaterialInstanceDynamic* MaterialInstance; // 0x550
	bool bAddedToScreen; // 0x558
	bool bEditTimeUsable; // 0x559
	FName SharedLayerName; // 0x55c
	int32_t LayerZOrder; // 0x568
	EWidgetGeometryMode GeometryMode; // 0x56c
	float CylinderArcAngle; // 0x570
};

struct AGate {
	TArray<float> InteractionInputs; // 0x230
	float InteractionOutput; // 0x240
};

struct UUIController {
	UGFxObject* m_UIControllerObj; // 0x30
	UMobileBaseUserWidget* _atlantaLoadingWidget; // 0x38
};

struct UFlashlightablePointsLightingStrategy {
	UPointsProvider* _pointsProvider; // 0x30
	float _impactPointDistanceError; // 0x38
};

struct UBTService_Patrol_PointOfInterest {
	float OnEnterPatrolRefreshPointsDelay; // 0x158
	FBlackboardKeySelector BBMoveAroundPatrolLocation; // 0x160
	float MoveAroundPatrolPointAboveStimulusStrength; // 0x190
};

struct UTracingConeFlashlightableLightingStrategy {
	int32_t _aroundConeCircleTraceCount; // 0x30
};

struct UK25PowerChargePresentationItemProgressComponent {
	UPowerChargeComponent* _powerChargeComponent; // 0xb8
	AK25Power* _k25Power; // 0xc0
};

struct UPlatformGameInstance {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x1f0
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x200
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x210
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x220
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x230
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x240
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x250
	FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x260
	FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x270
	FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x280
	FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x290
	FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x2a0
	FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x2b0
};

struct UPurpleGlyphComponent {
	TArray<UTileSpawnPoint*> _survivorSpawns; // 0xb8
	FAIMoveRequest MoveRequest; // 0xe0
	UNavigationQueryFilter* _navFilter; // 0x120
	FDBDTunableRowHandle _auraRevealDuration; // 0x128
	FDBDTunableRowHandle _nextLocationDistanceMinimum; // 0x150
	FDBDTunableRowHandle _nextLocationDistanceMaximum; // 0x178
	FDBDTunableRowHandle _movementAcceptanceRadius; // 0x1a0
	FDBDTunableRowHandle _distanceToAccelerate; // 0x1c8
	FDBDTunableRowHandle _distanceToDecelerate; // 0x1f0
	FLinearColor OutlineColor; // 0x218
	UBloodTrailSettings* _bloodTrailSettings; // 0x228
};

struct ALevelStreamingVolume {
	TArray<FName> StreamingLevelNames; // 0x268
	char bEditorPreVisOnly : 1; // 0x278
	char bDisabled : 1; // 0x278
	EStreamingVolumeUsage StreamingUsage; // 0x27c
};

struct USkeletalMesh {
	USkeleton* Skeleton; // 0x68
	FBoxSphereBounds ImportedBounds; // 0x70
	FBoxSphereBounds ExtendedBounds; // 0x8c
	FVector PositiveBoundsExtension; // 0xa8
	FVector NegativeBoundsExtension; // 0xb4
	TArray<FSkeletalMaterial> Materials; // 0xc0
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xd0
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0xe0
	FPerPlatformInt MinLOD; // 0x140
	FPerPlatformBool DisableBelowMinLodStripping; // 0x144
	EAxis SkelMirrorAxis; // 0x145
	EAxis SkelMirrorFlipAxis; // 0x146
	char bUseFullPrecisionUVs : 1; // 0x147
	char bUseHighPrecisionTangentBasis : 1; // 0x147
	char bHasBeenSimplified : 1; // 0x147
	char bHasVertexColors : 1; // 0x147
	char bEnablePerPolyCollision : 1; // 0x147
	UBodySetup* BodySetup; // 0x148
	UPhysicsAsset* PhysicsAsset; // 0x150
	UPhysicsAsset* ShadowPhysicsAsset; // 0x158
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x160
	TArray<UMorphTarget*> MorphTargets; // 0x170
	UAnimInstance* PostProcessAnimBlueprint; // 0x2f8
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x300
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x310
	TArray<UAssetUserData*> AssetUserData; // 0x340
	TArray<USkeletalMeshSocket*> Sockets; // 0x358
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x378
};

struct UMaterialExpressionPanner {
	FExpressionInput Coordinate; // 0x48
	FExpressionInput Time; // 0x64
	FExpressionInput Speed; // 0x80
	float SpeedX; // 0x9c
	float SpeedY; // 0xa0
	uint32_t ConstCoordinate; // 0xa4
	bool bFractionalPart; // 0xa8
};

struct UUMGLoadoutItemButton {
	FMulticastInlineDelegate OnLoadoutItemButtonClicked; // 0x300
	FMulticastInlineDelegate OnDisabledItemButtonClicked; // 0x310
	FMulticastInlineDelegate OnLoadoutItemButtonLongPress; // 0x320
	bool HideStackCount; // 0x330
	UTextBlock* TextStackCount; // 0x338
	UCanvasPanel* EmptyCanvas; // 0x340
	UButton* EmptyButton; // 0x348
	UButton* LockedButton; // 0x350
	UCanvasPanel* ActionCanvas; // 0x358
	UImage* ImageRarityBG; // 0x360
	UImage* ImageGradient; // 0x368
	UImage* ImagePaint; // 0x370
	UImage* ImageEventBorder; // 0x378
	UImage* ImagePaintTop; // 0x380
	UImage* ImagePaintBottom; // 0x388
	ESlateVisibility EmptyCanvasVisibility; // 0x390
	ESlateVisibility ActionCanvasVisibility; // 0x391
	ESlateVisibility PrivateCanvasVisibility; // 0x392
	ESlateVisibility LockIconVisibility; // 0x393
	ESlateVisibility EmptyIconVisibility; // 0x394
	ESlateVisibility SpecialEventVisiblity; // 0x395
	ESlateVisibility LoadoutSelectedVisibility; // 0x396
	ESlateVisibility LoadoutLockVisibility; // 0x397
	UImage* ImageIcon; // 0x398
	UImage* ImageShadow; // 0x3a0
	UButton* ActionButton; // 0x3a8
	FSlateBrush EmptyBGAsset; // 0x3b0
	FSlateBrush DisableBGAsset; // 0x440
	FInventorySlotData LoadoutItemData; // 0x4d0
	bool _triggerClickEventForLoadoutWidget; // 0x5c8
	UVerticalBox* CanvasUnlock; // 0x5d0
	UTextBlock* TextUnlockLevel; // 0x5d8
};

struct USlaveAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> _masterMesh; // 0x270
};

struct APhysicsVolume {
	float TerminalVelocity; // 0x268
	int32_t Priority; // 0x26c
	float FluidFriction; // 0x270
	char bWaterVolume : 1; // 0x274
	char bPhysicsOnContact : 1; // 0x274
};

struct UEdGraphNode {
	TArray<UEdGraphPin_Deprecated*> DeprecatedPins; // 0x40
	int32_t NodePosX; // 0x50
	int32_t NodePosY; // 0x54
	int32_t NodeWidth; // 0x58
	int32_t NodeHeight; // 0x5c
	ENodeAdvancedPins AdvancedPinDisplay; // 0x60
	ENodeEnabledState EnabledState; // 0x61
	char bDisplayAsDisabled : 1; // 0x63
	char bUserSetEnabledState : 1; // 0x63
	char bIsNodeEnabled : 1; // 0x63
	char bHasCompilerMessage : 1; // 0x63
	FString NodeComment; // 0x68
	int32_t ErrorType; // 0x78
	FString ErrorMsg; // 0x80
	FGuid NodeGuid; // 0x90
};

struct UParticleModuleLocationEmitter {
	FName EmitterName; // 0x38
	ELocationEmitterSelectionMethod SelectionMethod; // 0x44
	char InheritSourceVelocity : 1; // 0x48
	float InheritSourceVelocityScale; // 0x4c
	char bInheritSourceRotation : 1; // 0x50
	float InheritSourceRotationScale; // 0x54
};

struct AOfferingSequenceManager {
	UDBDGameInstance* _gameInstance; // 0x230
	APlayerController* _localPlayerController; // 0x238
	UOfferingHandler* _offeringHandler; // 0x240
	AOfferingSequenceAssets* _sequenceAssets; // 0x248
	ADBDLobbyHud* _hud; // 0x250
	ACameraActor* _offeringCamera; // 0x258
};

struct UMaterialExpressionDivide {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
	float ConstA; // 0x80
	float ConstB; // 0x84
};

struct AK26CrowProjectile {
	FMulticastInlineDelegate OnCrowProjectileStateChanged; // 0x240
	FMulticastInlineDelegate OnIsBeingFlashlightedChanged; // 0x250
	FVector _originalFireLocation; // 0x260
	TMap<EK26ProjectileState, FK26ProjectileStateDetails> _projectileStateDetails; // 0x270
	FDBDTunableRowHandle _summonTime; // 0x2c0
	FTunableStat _detectionRadiusScaleX; // 0x2e8
	FTunableStat _detectionRadiusScaleY; // 0x368
	FTunableStat _detectionRadiusScaleZ; // 0x3e8
	FDBDTunableRowHandle _crowFireAuraVisibilityForSurvivorsTime; // 0x468
	FDBDTunableRowHandle _crowSummonAuraVisibilityForSurvivorsTime; // 0x490
	FDBDTunableRowHandle _detectionRadiusFromAbove; // 0x4b8
	FDBDTunableRowHandle _baseSpeed; // 0x4e0
	FDBDTunableRowHandle _selfDestructTimeOnDestroyed; // 0x508
	FDBDTunableRowHandle _requiredFlashlightTimeToDestroy; // 0x530
	FDBDTunableRowHandle _flashlightablePointScale; // 0x558
	FDBDTunableRowHandle _rangeToTriggerNearSurvivorSFX; // 0x580
	FDBDTunableRowHandle _flashlightDisableTime; // 0x5a8
	UCurveFloat* _onPathMovementSpeedModifierCurve; // 0x5d0
	UCurveFloat* _offPathMovementSpeedModifierCurve; // 0x5d8
	float _projectileOffPathCurveDuration; // 0x5e0
	TArray<FVector> _path; // 0x5e8
	int32_t _pooledPathIndex; // 0x5f8
	EK26ProjectileState _currentProjectileState; // 0x5fc
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy; // 0x600
	UK26PowerOutlineUpdateStrategy* _crowFlockOutlineUpdateStrategy; // 0x608
	UDBDOutlineComponent* _outlineComponent; // 0x610
	USplineComponent* _pathSplineComponent; // 0x618
	UStaticMeshComponent* _collisionStaticMeshComponent; // 0x620
	UStaticMeshComponent* _killerInstinctStaticMeshComponent; // 0x628
	USkeletalMeshComponent* _visualSkeletalMeshComponent; // 0x630
	USceneComponent* _rootComponent; // 0x638
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent; // 0x640
	UFlashlightableComponent* _flashLightableComponent; // 0x648
	ULightBurnable* _lightBurnableComponent; // 0x650
	UDBDNavModifierComponent* _dangerNavModifierComponent; // 0x658
	USceneComponent* flashlightPointCenter; // 0x660
	USceneComponent* flashlightPointNorth; // 0x668
	USceneComponent* flashlightPointEast; // 0x670
	USceneComponent* flashlightPointSouth; // 0x678
	USceneComponent* flashlightPointWest; // 0x680
	FMulticastInlineDelegate _k26ProjectileStateChangeDelegate; // 0x688
	FMulticastInlineDelegate OnAcquiredChanged; // 0x698
	FVector _forwardDirection; // 0x6b8
	bool _isBeingFlashlighted; // 0x6c4
	float _lastFlashlightProgress; // 0x6c8
	float _lastTimeFlashlightValueIncreased; // 0x6cc
	float _fireTime; // 0x6d0
	float _currentDistanceAlongSpline; // 0x6d4
	float _offPathTime; // 0x6d8
	UK26PowerStatusHandlerComponent* _statusHandlerComponent; // 0x6e0
	UK26AmmoHandlerComponent* _ammoHandlerComponent; // 0x6e8
	UK26PathHandlerComponent* _pathHandlerComponent; // 0x6f0
	UChargeableComponent* _flashlightDestroyChargeable; // 0x6f8
};

struct UNiagaraDataInterfaceSkeletalMesh {
	AActor* source; // 0x38
	FNiagaraUserParameterBinding MeshUserParameter; // 0x40
	USkeletalMeshComponent* SourceComponent; // 0x70
	ENDISkeletalMesh_SkinningMode SkinningMode; // 0x78
	TArray<FName> SamplingRegions; // 0x80
	int32_t WholeMeshLOD; // 0x90
	TArray<FName> FilteredBones; // 0x98
	TArray<FName> FilteredSockets; // 0xa8
	FName ExcludeBoneName; // 0xb8
	char bExcludeBone : 1; // 0xc4
};

struct UUMGTallyListElementWidget {
	int32_t ElementIndex; // 0x300
	FVector2D WidgetSize; // 0x304
};

struct UParticleModuleKillHeight {
	FRawDistributionFloat Height; // 0x38
	char bAbsolute : 1; // 0x68
	char bFloor : 1; // 0x68
	char bApplyPSysScale : 1; // 0x68
};

struct UTextRenderComponent {
	FText Text; // 0x428
	UMaterialInterface* TextMaterial; // 0x440
	UFont* Font; // 0x448
	EHorizTextAligment HorizontalAlignment; // 0x450
	EVerticalTextAligment VerticalAlignment; // 0x451
	FColor TextRenderColor; // 0x454
	float XScale; // 0x458
	float YScale; // 0x45c
	float WorldSize; // 0x460
	float InvDefaultSize; // 0x464
	float HorizSpacingAdjust; // 0x468
	float VertSpacingAdjust; // 0x46c
	char bAlwaysRenderAsText : 1; // 0x470
};

struct AMeatHook {
	bool IsSurvivorStruggling; // 0x348
	bool WasSurvivorStruggleCancelled; // 0x349
	bool IsSacrificeEnabled; // 0x34a
	FVector AIInteractionOffset; // 0x34c
	TArray<UDBDClipRegionComponent*> ClipRegions; // 0x358
	bool IsInBasement; // 0x368
	bool IsBreakable; // 0x369
	bool IsSabotageable; // 0x36a
	FGameplayTag HookIdentityTag; // 0x36c
	bool SnapHookedCharacter; // 0x378
	bool FullyHooked; // 0x379
	FDBDTimer YawAdjustTimer; // 0x380
	float HookYaw; // 0x3a8
	float TargetHookYaw; // 0x3ac
	float _struggleThreshold; // 0x3b0
	UCharacterPusherComponent* _characterPusher; // 0x3b8
	UCapsuleComponent* _slasherCollisionBlocker; // 0x3c0
	UPollableEventListener* _eventListener; // 0x3c8
	ACamperPlayer* _hookedSurvivor; // 0x3d0
	ADBDPlayer* _hookBreakerPlayer; // 0x3d8
	TSet<ACamperPlayer*> _campersThatSabotagedMeatHook; // 0x460
	UInteractor* _mainInteractor; // 0x4b0
	USceneComponent* _meatHookEffect; // 0x4b8
	UChargeableInteractionDefinition* _unhook; // 0x4c0
	USceneComponent* _camperHookedSnapTransform; // 0x4c8
	AEntity* _entity; // 0x4d0
	bool _preventDrainProgression; // 0x4ec
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent; // 0x4f0
	ADBDPlayer* _interactingPlayer; // 0x4f8
	bool _initialized; // 0x500
	UMapActorComponent* _cachedMapActor; // 0x508
};

struct UShapePounceAttackOpenSubstate {
	TArray<FDBDTunableRowHandle> _tierDurations; // 0x130
};

struct USynthComponentMonoWaveTable {
	FMulticastInlineDelegate OnTableAltered; // 0x6f0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x700
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x710
};

struct ULandscapeMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x418
	char bIsLayerThumbnail : 1; // 0x428
	char bDisableTessellation : 1; // 0x428
	char bMobile : 1; // 0x428
	char bEditorToolUsage : 1; // 0x428
};

struct UAISkill_InteractionBreakFreeFromChains {
	FDBDTunableRowHandle _breakFreeFromChainsMaxCharge; // 0x170
};

struct UDarkDevotion {
	UTerrorRadiusEmitterComponent* _obsessionTerrorRadiusEmitter; // 0x3d0
	float _obsessionTerrorRadius; // 0x3d8
	float _simulatedFixedDistance; // 0x3dc
};

struct UBoxFalloff {
	float Magnitude; // 0xb8
	float MinRange; // 0xbc
	float MaxRange; // 0xc0
	float Default; // 0xc4
	FTransform Transform; // 0xd0
	EFieldFalloffType Falloff; // 0x100
};

struct UHellshireIronAddon {
	float _undetectableDurationPostHarpoon; // 0x298
	UStatusEffect* _statusEffect; // 0x2a0
};

struct UGizmoAxisRotationParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60
	float Angle; // 0x70
	FGizmoFloatParameterChange LastChange; // 0x74
	FVector CurRotationAxis; // 0x7c
	FVector CurRotationOrigin; // 0x88
	FTransform InitialTransform; // 0xa0
};

struct UMaterialExpressionStaticBool {
	char Value : 1; // 0x48
};

struct UCoreEquippedItemWidget {
	UAkAudioEvent* ItemDisappearSfx; // 0x2f8
};

struct UDBDAttackSubstate {
	FStatProperty _duration; // 0x30
	UCurveFloat* _speedCurve; // 0xb8
	FName _montage; // 0xc0
	UCurveFloat* _currentCurve; // 0xd0
};

struct UEventGeneratorComponent {
	bool _updateOultineForSurvivor; // 0xc8
	bool _updateOultineForSlasher; // 0xc9
};

struct ALODActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x230
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x238
	UHLODProxy* Proxy; // 0x288
	FName Key; // 0x290
	float LODDrawDistance; // 0x29c
	int32_t LODLevel; // 0x2a0
	TArray<AActor*> SubActors; // 0x2a8
	char CachedNumHLODLevels; // 0x2b8
};

struct UMaterialExpressionFmod {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x64
};

struct UCoopRepairTracker {
	TArray<ADBDPlayer*> _coopRepairerHistory; // 0x30
};

struct UKillerAttackSubAnimInstance {
	bool _isCarrying; // 0x5b8
	bool _isActive; // 0x5b9
};

struct UGeometryCacheComponent {
	UGeometryCache* GeometryCache; // 0x478
	bool bRunning; // 0x480
	bool bLooping; // 0x481
	float StartTimeOffset; // 0x484
	float PlaybackSpeed; // 0x488
	int32_t NumTracks; // 0x48c
	float ElapsedTime; // 0x490
	float Duration; // 0x4c4
	bool bManualTick; // 0x4c8
};

struct USteamNetConnection {
	bool bIsPassthrough; // 0x1ae8
};

struct UParticleModuleOrbit {
	EOrbitChainMode ChainMode; // 0x40
	FRawDistributionVector OffsetAmount; // 0x48
	FOrbitOptions OffsetOptions; // 0x90
	FRawDistributionVector RotationAmount; // 0x98
	FOrbitOptions RotationOptions; // 0xe0
	FRawDistributionVector RotationRateAmount; // 0xe8
	FOrbitOptions RotationRateOptions; // 0x130
};

struct UMaterialExpressionViewProperty {
	EMaterialExposedViewProperty Property; // 0x48
};

struct UUMGLobbyOfferingWidget {
	UCanvasPanel* CanvasOffering; // 0x300
	TSoftClassPtr<UObject> LobbyOfferingItemClass; // 0x308
};

struct UOnEventSetTimerAddon {
	float _addonEffectTime; // 0x2a8
};

struct ULacerationAlmostFullCondition {
	float _missingLacerationThreshold; // 0xe8
};

struct UUMGAuthenticationProviderSelection {
	bool _isAsia; // 0x260
};

struct UMovieSceneAkAudioRTPCSection {
	UAkRtpc* RTPC; // 0xe8
	FString Name; // 0xf0
	FRichCurve FloatCurve; // 0x100
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180
	FMovieSceneFloatChannel RTPCChannel; // 0x1b0
};

struct USearchableSpawnPoint {
	AActor* ActorToSpawn; // 0x280
};

struct UItemTooltipWidget {
	UTextBlock* RarityLabel; // 0x338
	UUMGHtmlRichText* WarningText; // 0x340
	UImage* HeaderSmoke; // 0x348
	UImage* HeaderBackground; // 0x350
};

struct USoundNodeGroupControl {
	TArray<int32_t> GroupSizes; // 0x50
};

struct UUMGCurrencyWidget {
	ECurrencyType currencyType; // 0x430
};

struct UHierarchicalInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x5a8
	int32_t NumBuiltInstances; // 0x5b8
	FBox BuiltInstanceBounds; // 0x5c0
	FBox UnbuiltInstanceBounds; // 0x5dc
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x5f8
	char bEnableDensityScaling : 1; // 0x608
	int32_t OcclusionLayerNumNodes; // 0x610
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x614
	bool bDisableCollision; // 0x630
	int32_t InstanceCountToRender; // 0x634
};

struct UNiagaraPreviewAxis_InterpParamVector2D {
	FVector2D Min; // 0x40
	FVector2D Max; // 0x48
};

struct UAssetManager {
	TArray<UObject*> ObjectReferenceList; // 0x2c8
	bool bIsGlobalAsyncScanEnvironment; // 0x2d8
	bool bShouldGuessTypeAndName; // 0x2d9
	bool bShouldUseSynchronousLoad; // 0x2da
	bool bIsLoadingFromPakFiles; // 0x2db
	bool bShouldAcquireMissingChunksOnLoad; // 0x2dc
	bool bOnlyCookProductionAssets; // 0x2dd
	bool bIsBulkScanning; // 0x2de
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2df
	bool bIsManagementDatabaseCurrent; // 0x2e0
	bool bUpdateManagementDatabaseAfterScan; // 0x2e1
	bool bIncludeOnlyOnDiskAssets; // 0x2e2
	int32_t NumberOfSpawnedNotifications; // 0x2e4
};

struct UCamperBloodTrailComponent {
	UPerkManager* _camperPerkManager; // 0x240
};

struct UDeformMeshPolygonsTool {
	USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd0
	UDeformMeshPolygonsTransformProperties* TransformProps; // 0xd8
};

struct Ushopmanager {
	TWeakObjectPtr<UDBDGameInstance> _gameInstance; // 0xd8
	UBannerDataProcessor* _bannerDataProcessor; // 0x7a0
	URecommendationsGenerator* _recommendationsGenerator; // 0x7a8
};

struct UParticleModuleMeshMaterial {
	TArray<UMaterialInterface*> MeshMaterials; // 0x38
};

struct UPhysicsConstraintTemplate {
	FConstraintInstance DefaultInstance; // 0x30
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1f8
	FConstraintProfileProperties DefaultProfile; // 0x208
};

struct UAuthoritativeActorPoolComponent {
	AActor* _actorClass; // 0xd0
	int32_t _size; // 0xd8
	TArray<AActor*> _pool; // 0xe0
};

struct UBrushSculptProperties {
	bool bIsRemeshingEnabled; // 0x58
	EDynamicMeshSculptBrushType PrimaryBrushType; // 0x59
	float PrimaryBrushSpeed; // 0x5c
	bool bPreserveUVFlow; // 0x60
	bool bFreezeTarget; // 0x61
	float SmoothBrushSpeed; // 0x64
	bool bDetailPreservingSmooth; // 0x68
};

struct UOpenHatchInteraction {
	float SnapToEscapeLocationDuration; // 0x6d8
	FAnimationMontageDescriptor InteractionStoppedMontage; // 0x6e0
	FAnimationMontageDescriptor InteractionSucceedMontage; // 0x700
};

struct UParticleModuleLocation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct ATormentTrailPoint {
	UAuthoritativePoolableActorComponent* _poolableComponent; // 0x348
	float _splineMeshOverlapDistance; // 0x350
};

struct US28P03 {
	float _lingerDuration[0x3]; // 0x488
};

struct UK26KillerInstinctStatusEffect {
	FTunableStat _lingerDuration; // 0x350
	UInteractionDefinition* _openExitGateInteractionClass; // 0x3d0
	bool _hasInitializedLingerDuration; // 0x3d8
};

struct AProceduralLevelBuilder {
	FString PathToMapDirectory; // 0x248
	FString PathToTilesDirectory; // 0x258
	float KillerMinProximityFromCamper; // 0x268
	float SurvivorMinProximityFromOtherCamper; // 0x26c
	float MinProximityBetweenGenerators; // 0x270
	float MinProximityBetweenChests; // 0x274
	float MinProximityBetweenTotems; // 0x278
	float SurvivorMinProximityFromGenerator; // 0x27c
	float SurvivorMinProximityFromTotem; // 0x280
	float SurvivorMaxLineOfSightFromTotem; // 0x284
	float MinProximityBetweenSpecialBehaviourItems; // 0x288
	float SpecialBehaviourItemMinProximityFromSurvivor; // 0x28c
	float SpecialBehaviourItemMinProximityFromKiller; // 0x290
	UPaperTileMap* DebugMap; // 0x298
	TArray<ATile*> DebugTiles; // 0x2a0
	float SmallMeatLockerMinProximityFromKillerLair; // 0x2b0
	float FactorToAdjustToWhenOutOfProximity; // 0x2b4
	float FactorToAdjustToWhenInLineOfSight; // 0x2b8
	float HeightAmplifier; // 0x2bc
	float HeightAmplifierActivationHeight; // 0x2c0
	UProceduralGenerationData* ProceduralGenerationData; // 0x2c8
	float TileWeightRateOfDecay; // 0x2d0
	float QuadTileWeightRateOfDecay; // 0x2d4
	UObject* _tileClass; // 0x2d8
	UMapData* _mapData; // 0x4a0
	UObjectLibrary* _availableTilesLibrary; // 0x4a8
	UObjectLibrary* _availableDerivedTileLibrary; // 0x598
	UDBDDesignTunables* DesignTunableClass; // 0x5a8
	UDBDDesignTunables* _designTunables; // 0x5b0
	FGeneratedLevelData _generatedData; // 0x5b8
	TArray<FDependency> _escapeDependencies; // 0x858
	UTileMatrix* _tileMatrix; // 0xb08
	UTileBank* _tileBank; // 0xb10
	UActorSpawner* _killerLairSpawner; // 0xb80
	TArray<FSoftObjectPath> _preloadAssetReferences; // 0xb90
	TArray<AActor*> _chestItemAssetReferences; // 0xba0
	UObject* _slasherPawn; // 0xbb0
	TArray<ATile*> _tilesThatHaveBeenSpawned; // 0xbd0
	AProceduralLevelData* _debugProceduralDatas; // 0xbf0
	ADBDClientSyncer* _syncer; // 0xbf8
	UBlackboardComponent* _blackboardComp; // 0xc00
	UEdgeObjectHandlingStrategy* _edgeObjectHandlingStrategy; // 0xc60
};

struct UDeception {
	float _noScratchMarksDuration[0x3]; // 0x3d0
	float _perkCooldownDuration[0x3]; // 0x3dc
	UStatusEffect* _statusEffect; // 0x3e8
	UManualIconStrategy* _iconStrategy; // 0x3f8
};

struct UGateBlockerEffect {
	float _blockGateLingeringTime; // 0x350
};

struct UAcceptOutputProperties {
	bool bExportSeparatedPiecesAsNewMeshAssets; // 0x58
};

struct UParticleModuleSpawn {
	FRawDistributionFloat Rate; // 0x40
	FRawDistributionFloat RateScale; // 0x70
	EParticleBurstMethod ParticleBurstMethod; // 0xa0
	TArray<FParticleBurst> BurstList; // 0xa8
	FRawDistributionFloat BurstScale; // 0xb8
	char bApplyGlobalSpawnRateScale : 1; // 0xe8
};

struct UScreamComponent {
	UPerkManager* _perkManager; // 0xb8
	UMontagePlayer* _montagePlayer; // 0xc0
};

struct UNavigationScreenUMG {
	UUMGLobbyScreen* _atlNavigationScreen; // 0x2b8
};

struct UUMGCharacterPrestigeIcon {
	UImage* PrestigeImage; // 0x300
};

struct UBTService_FindInteractor_Generator {
	EFindInteractableGeneratorStatusFilter StatusFilter; // 0x218
	FAITunableParameter MinRepairRatioFilter; // 0x21c
	bool UsePerceptionToGetRepairRatio; // 0x22c
	FAITunableParameter MaxRepairGoalWeight; // 0x230
	FAITunableParameter InfectedStateGoalWeight; // 0x240
	FAITunableParameter HexRuinGoalWeight; // 0x250
	FName HexRuinPerkId; // 0x260
};

struct UBTService_FindInteractor_Pallet {
	FBlackboardKeySelector BBPickSideRelativelyFrom; // 0x218
	EFindInteractablePalletIntentions IntentionFilter; // 0x248
	FName RaisePalletPerkId; // 0x24c
	FAITunableParameter BrokenGeneratorGoalMaxDistance; // 0x258
	FAITunableParameter BrokenGeneratorGoalMaxDistanceWeight; // 0x268
	AActor* DreamPaletteClass; // 0x278
	FAITunableParameter SpawnInSurvivorLOSPenalty; // 0x280
	FAITunableParameter SpawnNearSurvivorMinDistanceSquared; // 0x290
	FAITunableParameter SpawnNearSurvivorPenalty; // 0x2a0
	FAITunableParameter PlacedNearGamePalletMinDistanceSquared; // 0x2b0
	FAITunableParameter PlacedNearGamePalletPenalty; // 0x2c0
	FAITunableParameter ConvincingFactorTolerance; // 0x2d0
};

struct UDiversion {
	float _diversionActivationTimePerLevel[0x3]; // 0x428
	float _throwPebbleDistance; // 0x434
};

struct UAkRoomComponent {
	char bEnable : 1; // 0x230
	UAkRoomComponent* NextLowerPriorityComponent; // 0x238
	float Priority; // 0x240
	float WallOcclusion; // 0x244
	float AuxSendLevel; // 0x248
	bool AutoPost; // 0x24c
};

struct UNearTrackedActorComponent {
	FMulticastInlineDelegate IsWithinRangeDelegate; // 0xb8
	float _distanceThreshold; // 0xc8
};

struct UConvertToPolygonsToolProperties {
	EConvertToPolygonsMode ConversionMode; // 0x58
	float AngleTolerance; // 0x5c
	bool bCalculateNormals; // 0x60
	bool bShowGroupColors; // 0x61
};

struct UParticleModuleColor_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb8
};

struct UBTService_Flee {
	FBlackboardKeySelector BBFleePath; // 0x80
	FBlackboardKeySelector BBShouldFallPallet; // 0xb0
	UPathStrategySelector* PathStrategySelectorClass; // 0xe0
	float OnEndObjectInFocusCooldown; // 0xe8
	FAITunableParameter ShouldFallPalletUnderHostileRange; // 0xec
	float ClearFleePathBBKeyDelay; // 0xfc
	UNavMovePath* _activePath; // 0x110
	TArray<UObject*> _lostFocusedObjects; // 0x118
	UPathStrategySelector* _strategySelector; // 0x128
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

struct UUMGInboxMessageEntryWidget {
	FInboxMessageUIData _messageData; // 0x260
	bool _isCurrentSelection; // 0x2c0
};

struct UBlindableBaseComponent {
	bool _isBlinded; // 0x148
	FTagStateBool _isBeingBlinded; // 0x150
	UChargeableComponent* _chargeableComponent; // 0x180
	TMap<AActor*, TScriptInterface<IBlindingEffectorInterface>> _blindingEffectors; // 0x188
};

struct UDistributionFloat {
	char bCanBeBaked : 1; // 0x38
	char bBakedDataSuccesfully : 1; // 0x38
};

struct USoundNodeWavePlayer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x50
	USoundWave* SoundWave; // 0x80
	char bLooping : 1; // 0x88
};

struct ASearchable {
	float Weight; // 0x338
	EItemRarity ItemRarity; // 0x33c
	FMulticastInlineDelegate OnSearchedChanged; // 0x340
	USearchableSpawnPoint* _searchableSpawnPoint; // 0x350
	FName _itemIdToSpawn; // 0x358
	bool _hasBeenSearched; // 0x364
	ACollectable* _itemInsideSearchable; // 0x368
	TMap<ADBDPlayer*, char> _numberOfSearchesWhileOpenPerPlayer; // 0x370
};

struct AHarpoonProp {
	USkeletalMeshComponent* _skeletalMesh; // 0x238
};

struct UUMGFriendElementWidget {
	UImage* FavoriteSlot; // 0x3c0
	UButton* FavoriteButton; // 0x3c8
	UImage* SelectionImage; // 0x3d0
	UImage* SelectedPicture; // 0x3d8
	UImage* FriendIcon; // 0x3e0
	FSlateBrush UnFavoriteBrush; // 0x3e8
	FSlateBrush FavoriteBrush; // 0x478
	FSlateBrush MutedBrush; // 0x508
};

struct UMaterialExpressionRuntimeVirtualTextureSample {
	FExpressionInput Coordinates; // 0x48
	FExpressionInput WorldPosition; // 0x64
	FExpressionInput MipValue; // 0x80
	URuntimeVirtualTexture* VirtualTexture; // 0xa0
	ERuntimeVirtualTextureMaterialType MaterialType; // 0xa8
	bool bSinglePhysicalSpace; // 0xa9
	ERuntimeVirtualTextureMipValueMode MipValueMode; // 0xaa
};

struct USourceEffectPhaserPreset {
	FSourceEffectPhaserSettings Settings; // 0x80
};

struct UAtlantaPromptWidget {
	UTextBlock* PromptLabel; // 0x300
	TMap<EPromptType, FString> AudioCues; // 0x318
};

struct ADBDPlayerCameraManager {
	float NormalFOV; // 0x2748
	float TargetingFOV; // 0x274c
	TScriptInterface<IViewRotationStrategy> _viewRotationStrategy; // 0x2750
};

struct UAkXSXInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UMovieSceneParameterSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct ABaseLinkedVomitProjectile {
	bool _useSplashDamage; // 0x338
	bool _passThroughSurvivors; // 0x339
	UPoolableProjectileComponent* _poolableProjectile; // 0x340
	FMulticastInlineDelegate OnDeactivateOrLaunch; // 0x348
	UParticleSystemComponent* _vomitTrail; // 0x358
	USplineMeshComponent* _splineMesh; // 0x360
	USphereComponent* _splashDamageSphere; // 0x368
	UAkComponent* _akAudioVomitProjectile; // 0x370
	UParticleSystem* _vomitSplashCamper; // 0x378
	UParticleSystem* _vomitSplash; // 0x380
	UAkAudioEvent* _akAudioEventAudioEventVomitSplash; // 0x388
	FVector2D _minDecalSize; // 0x390
	FVector2D _maxDecalSize; // 0x398
	bool _isSuperVomit; // 0x3a0
};

struct USurvivorAnimInstance {
	ACamperPlayer* CamperPlayer; // 0x4f0
	bool IsHooked; // 0x4f8
	bool IsSacrificeStruggling; // 0x4f9
	UAnimMontage* MontageMadnessTierUp; // 0x500
	TArray<UAnimCompositeBase*> ArrayCarryAttackMontage; // 0x508
	bool _isFrightScreaming; // 0x518
	bool IsBeingCarried; // 0x519
	bool IsBeingPutOnHook; // 0x51a
	bool isCrouched; // 0x51b
	ECamperGuidedAction GuidedAction; // 0x51c
	bool IsTrapped; // 0x51d
	bool IsCrawling; // 0x51e
	bool IsDead; // 0x51f
	float MaxSpeed; // 0x520
	bool IsInsideCloset; // 0x524
	float IsPlayingMadnessTierUpWeight; // 0x528
	bool IsBeingKilled; // 0x52c
	bool IsCarryAttackSucess; // 0x52d
	bool IsUsingAimItem; // 0x52e
	bool IsHoldingAimItem; // 0x52f
	bool AllowLookAt; // 0x530
	float DropStaggerTimeLeft; // 0x534
	float RightArmIKAlpha; // 0x538
	FTransform RightHandIKTransform; // 0x540
	bool Strafe; // 0x570
	bool IsInteracting; // 0x571
	bool Injured; // 0x572
	EInteractionAnimation interactionType; // 0x573
	EInteractionAnimation PreviousInteractionType; // 0x574
	bool IsSlasherInFPV; // 0x575
	float CarriedAlpha; // 0x578
	bool IsHoldingHandleItem; // 0x57c
	bool IsHoldingSmallItem; // 0x57d
	bool IsHoldingFirecracker; // 0x57e
	bool IsHoldingFlashbang; // 0x57f
	bool IsHoldingVaccine; // 0x580
	bool IsHoldingAnyItem; // 0x581
	bool IsHoldingLamentConfiguration; // 0x582
	bool IsArmOverrideDisabled; // 0x583
	bool InAir; // 0x584
	float _walkAnimSpeed; // 0x588
	float Direction; // 0x58c
	float Pitch; // 0x590
	float Yaw; // 0x594
	FVector RightFootEffectorLocation; // 0x598
	FVector LeftFootEffectorLocation; // 0x5a4
	bool Idle; // 0x5b0
	float MyTime; // 0x5b4
	bool HasAnyMontagePlaying; // 0x5b8
	FName CurrentlyPlayerMontageId; // 0x5bc
	bool IsBeingCarriedByTheSpirit; // 0x5c8
	bool IsBeingCarriedByTheNightmare; // 0x5c9
	bool IsBeingCarriedByThePig; // 0x5ca
	bool IsBeingCarriedByTheHag; // 0x5cb
	bool IsBeingCarriedByTheLegion; // 0x5cc
	bool IsBeingCarriedByTheGhostFace; // 0x5cd
	bool IsUsingDeadHard; // 0x5ce
	bool IsPlayingWakeUpOther; // 0x5cf
	bool IsPlayingFreddyMori; // 0x5d0
	bool IsHealingKOCamper; // 0x5d1
	bool HasLinkInput; // 0x5d2
};

struct UExporter {
	UObject* SupportedClass; // 0x30
	UObject* ExportRootScope; // 0x38
	TArray<FString> FormatExtension; // 0x40
	TArray<FString> FormatDescription; // 0x50
	int32_t PreferredFormatIndex; // 0x60
	int32_t TextIndent; // 0x64
	char bText : 1; // 0x68
	char bSelectedOnly : 1; // 0x68
	char bForceFileOperations : 1; // 0x68
	UAssetExportTask* ExportTask; // 0x70
};

struct UMaterialExpressionVertexInterpolator {
	FExpressionInput Input; // 0x48
};

struct UCameraModifier {
	char bDebug : 1; // 0x30
	char bExclusive : 1; // 0x30
	char Priority; // 0x34
	APlayerCameraManager* CameraOwner; // 0x38
	float AlphaInTime; // 0x40
	float AlphaOutTime; // 0x44
	float alpha; // 0x48
};

struct UAnniversary2021EventComponent {
	UInteractionRespawnableTrigger* _interactionRespawnableTrigger; // 0xc8
	UTimedRespawnableTrigger* _timedRespawnableTrigger; // 0xd0
};

struct AFieldSystemActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x230
};

struct UK26AbilitySubAnimInstance {
	float _fireInteractionCooldownTime; // 0x4f8
	FTunableStat _fireInteractionCooldownTimeTunable; // 0x500
	bool _hasChargingStarted; // 0x580
	bool _hasProjectileBeenSummoned; // 0x581
	bool _hasChargingEnded; // 0x582
	bool _hasProjectileFired; // 0x583
};

struct UBloodOrbOverlapComponent {
	int32_t _currentOverlappingOrbs; // 0xc0
};

struct UStruggleComponent {
	int32_t _skillCheckCount; // 0x110
};

struct USkeletalMeshSimulationComponent {
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xc0
	AChaosSolverActor* ChaosSolverActor; // 0xc8
	UPhysicsAsset* OverridePhysicsAsset; // 0xd0
	bool bSimulating; // 0xd8
	bool bNotifyCollisions; // 0xd9
	EObjectStateTypeEnum ObjectType; // 0xda
	float Density; // 0xdc
	float MinMass; // 0xe0
	float MaxMass; // 0xe4
	ECollisionTypeEnum CollisionType; // 0xe8
	float ImplicitShapeParticlesPerUnitArea; // 0xec
	int32_t ImplicitShapeMinNumParticles; // 0xf0
	int32_t ImplicitShapeMaxNumParticles; // 0xf4
	int32_t MinLevelSetResolution; // 0xf8
	int32_t MaxLevelSetResolution; // 0xfc
	int32_t CollisionGroup; // 0x100
	EInitialVelocityTypeEnum InitialVelocityType; // 0x104
	FVector InitialLinearVelocity; // 0x108
	FVector InitialAngularVelocity; // 0x114
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x120
};

struct UMovieSceneCameraCutTrack {
	bool bCanBlend; // 0x60
	TArray<UMovieSceneSection*> Sections; // 0x68
};

struct USubscriptionRewardDataAsset {
	TMap<ESubscriptionRewardType, FSubscriptionRewardTypeData> Data; // 0x38
};

struct UMovieSceneNiagaraTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UUMGCustomizationTooltipHeaderWidget {
	UTextBlock* Title; // 0x300
	UTextBlock* CollectionName; // 0x308
	UTextBlock* CategoryAndRarityText; // 0x310
};

struct UPawnAction {
	UPawnAction* ChildAction; // 0x30
	UPawnAction* ParentAction; // 0x38
	UPawnActionsComponent* OwnerComponent; // 0x40
	UObject* Instigator; // 0x48
	UBrainComponent* BrainComp; // 0x50
	char bAllowNewSameClassInstance : 1; // 0x88
	char bReplaceActiveSameClassInstance : 1; // 0x88
	char bShouldPauseMovement : 1; // 0x88
	char bAlwaysNotifyOnFinished : 1; // 0x88
};

struct UCharacterOptimizer {
	FBHVRPerDetailModeFloat _distance; // 0xb8
	float _characterMovementTickRateWhenInsignificant; // 0x158
	float _skeletalMeshTickRateWhenInsignificant; // 0x15c
	TArray<AActor*> _dependentActorsToCheckSignficance; // 0x160
};

struct UPopupSequencer {
	UDBDGameInstance* _gameInstance; // 0x38
};

struct UPlayerLevelTooltipWidget {
	UUMGTooltipContentPlayerLevelWidget* PlayerLevelContent; // 0x338
};

struct UMovieSceneSignedObject {
	FGuid Signature; // 0x30
};

struct UPolyEditSetUVProperties {
	bool bShowMaterial; // 0x58
};

struct USoundNodeDialoguePlayer {
	FDialogueWaveParameter DialogueWaveParameter; // 0x50
	char bLooping : 1; // 0x70
};

struct USkillCheck {
	ADBDPlayer* _owner; // 0x168
	UChargeableInteractionDefinition* _currentInteraction; // 0x170
};

struct UUmgSpectatorHud {
	FMulticastInlineDelegate OnLeaveSpectateClicked; // 0x528
	FMulticastInlineDelegate OnPlayerSpectate; // 0x538
};

struct UChaosGameplayEventDispatcher {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1d0
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x220
};

struct UWidgetAnimationDelegateBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30
};

struct UDBDPlayerData {
	FMulticastInlineDelegate OnItemUseButtonStateChanged; // 0xb8
	FYawAndPitchRotator_NetQuantize16 _controlRotation; // 0xf0
};

struct UMaterialBillboardComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x428
};

struct UMontagePlayer {
	FMulticastInlineDelegate OnMontageStarted; // 0xb8
	FMulticastInlineDelegate OnMontageEnded; // 0x110
	UDataTable* _animationMappingsTable; // 0x180
	UDataTable* _playerSpecificMappingsTable; // 0x188
	UAnimMontage* _currentlyPlayingMontage; // 0x190
	TArray<FMontageInstanceInfo> _activeMontagesInfo; // 0x1b0
	FName _outSectionName; // 0x1c0
	float _timeBeforeOut; // 0x1cc
	USkeletalMeshComponent* _skeletalMeshComponent; // 0x1d0
	TMap<UAnimMontage*, FName> _montageToNameMap; // 0x200
};

struct UMaterialExpressionNormalize {
	FExpressionInput VectorInput; // 0x48
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x128
};

struct UMovieSceneCameraShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraAnimPlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct UAITask {
	AAIController* OwnerController; // 0x70
};

struct UUserInterfaceSettings {
	ERenderFocusRule RenderFocusRule; // 0x48
	TMap<EMouseCursor, FHardwareCursorReference> HardwareCursors; // 0x50
	TMap<EMouseCursor, FSoftClassPath> SoftwareCursors; // 0xa0
	FSoftClassPath DefaultCursor; // 0xf0
	FSoftClassPath TextEditBeamCursor; // 0x110
	FSoftClassPath CrosshairsCursor; // 0x130
	FSoftClassPath HandCursor; // 0x150
	FSoftClassPath GrabHandCursor; // 0x170
	FSoftClassPath GrabHandClosedCursor; // 0x190
	FSoftClassPath SlashedCircleCursor; // 0x1b0
	float applicationScale; // 0x1d0
	EUIScalingRule UIScaleRule; // 0x1d4
	FSoftClassPath CustomScalingRuleClass; // 0x1d8
	FRuntimeFloatCurve UIScaleCurve; // 0x1f8
	bool bAllowHighDPIInGameMode; // 0x280
	bool bLoadWidgetsOnDedicatedServer; // 0x281
	TArray<UObject*> CursorClasses; // 0x288
	UObject* CustomScalingRuleClassInstance; // 0x298
	UDPICustomScalingRule* CustomScalingRule; // 0x2a0
};

struct UNavAreaMeta_SwitchByAgent {
	UNavArea* Agent0Area; // 0x50
	UNavArea* Agent1Area; // 0x58
	UNavArea* Agent2Area; // 0x60
	UNavArea* Agent3Area; // 0x68
	UNavArea* Agent4Area; // 0x70
	UNavArea* Agent5Area; // 0x78
	UNavArea* Agent6Area; // 0x80
	UNavArea* Agent7Area; // 0x88
	UNavArea* Agent8Area; // 0x90
	UNavArea* Agent9Area; // 0x98
	UNavArea* Agent10Area; // 0xa0
	UNavArea* Agent11Area; // 0xa8
	UNavArea* Agent12Area; // 0xb0
	UNavArea* Agent13Area; // 0xb8
	UNavArea* Agent14Area; // 0xc0
	UNavArea* Agent15Area; // 0xc8
};

struct UNavCollision {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x88
	TArray<FNavCollisionBox> BoxCollision; // 0x98
	UNavArea* AreaClass; // 0xa8
	char bGatherConvexGeometry : 1; // 0xb0
	char bCreateOnClient : 1; // 0xb0
};

struct UWiggleMotionComponent {
	ADBDPlayer* _carriedPlayer; // 0xb8
	UDBDCharacterMovementComponent* _ownerMovementComponent; // 0xc0
};

struct UAISkill_InteractionUseItem_Flashlight {
	FAIRoll VulnerableTargetStartRoll; // 0x178
	float TargetFaceMeMaxAngle; // 0x19c
	AActor* _targetActor; // 0x1a0
};

struct UTranslucentOutlineRenderStrategy {
	TArray<UMaterialInterface*> _replacementMaterials; // 0x70
};

struct UK25ChainStrikeState_EndChainStrike {
	EChainStrikeEndReason _chainStrikeEndReason; // 0xc8
};

struct ULandscapeHeightfieldCollisionComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x428
	int32_t SectionBaseX; // 0x438
	int32_t SectionBaseY; // 0x43c
	int32_t CollisionSizeQuads; // 0x440
	float CollisionScale; // 0x444
	int32_t SimpleCollisionSizeQuads; // 0x448
	TArray<char> CollisionQuadFlags; // 0x450
	FGuid HeightfieldGuid; // 0x460
	FBox CachedLocalBox; // 0x470
	LazyObjectProperty RenderComponent; // 0x48c
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4b8
};

struct UMaterialInstanceConstant {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x410
};

struct AGameNetworkManager {
	float BadPacketLossThreshold; // 0x230
	float SeverePacketLossThreshold; // 0x234
	int32_t BadPingThreshold; // 0x238
	int32_t SeverePingThreshold; // 0x23c
	int32_t AdjustedNetSpeed; // 0x240
	float LastNetSpeedUpdateTime; // 0x244
	int32_t TotalNetBandwidth; // 0x248
	int32_t MinDynamicBandwidth; // 0x24c
	int32_t MaxDynamicBandwidth; // 0x250
	char bIsStandbyCheckingEnabled : 1; // 0x254
	char bHasStandbyCheatTriggered : 1; // 0x254
	float StandbyRxCheatTime; // 0x258
	float StandbyTxCheatTime; // 0x25c
	float PercentMissingForRxStandby; // 0x260
	float PercentMissingForTxStandby; // 0x264
	float PercentForBadPing; // 0x268
	float JoinInProgressStandbyWaitTime; // 0x26c
	float MoveRepSize; // 0x270
	float MAXPOSITIONERRORSQUARED; // 0x274
	float MAXNEARZEROVELOCITYSQUARED; // 0x278
	float CLIENTADJUSTUPDATECOST; // 0x27c
	float MAXCLIENTUPDATEINTERVAL; // 0x280
	float MaxClientForcedUpdateDuration; // 0x284
	float ServerForcedUpdateHitchThreshold; // 0x288
	float ServerForcedUpdateHitchCooldown; // 0x28c
	float MaxMoveDeltaTime; // 0x290
	float MaxClientSmoothingDeltaTime; // 0x294
	float ClientNetSendMoveDeltaTime; // 0x298
	float ClientNetSendMoveDeltaTimeThrottled; // 0x29c
	float ClientNetSendMoveDeltaTimeStationary; // 0x2a0
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x2a4
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x2a8
	bool ClientAuthorativePosition; // 0x2ac
	float ClientErrorUpdateRateLimit; // 0x2b0
	float ClientNetCamUpdateDeltaTime; // 0x2b4
	float ClientNetCamUpdatePositionLimit; // 0x2b8
	bool bMovementTimeDiscrepancyDetection; // 0x2bc
	bool bMovementTimeDiscrepancyResolution; // 0x2bd
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2c0
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2c4
	float MovementTimeDiscrepancyResolutionRate; // 0x2c8
	float MovementTimeDiscrepancyDriftAllowance; // 0x2cc
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2d0
	bool bUseDistanceBasedRelevancy; // 0x2d1
};

struct USceneCaptureComponentCube {
	UTextureRenderTargetCube* TextureTarget; // 0x2a8
	bool bCaptureRotation; // 0x2b0
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2b8
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c0
	UTextureRenderTarget2D* TextureTargetODS; // 0x2c8
	float IPD; // 0x2d0
};

struct USoundNodeEnveloper {
	float LoopStart; // 0x50
	float LoopEnd; // 0x54
	float DurationAfterLoop; // 0x58
	int32_t LoopCount; // 0x5c
	char bLoopIndefinitely : 1; // 0x60
	char bLoop : 1; // 0x60
	UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x68
	UDistributionFloatConstantCurve* PitchInterpCurve; // 0x70
	FRuntimeFloatCurve VolumeCurve; // 0x78
	FRuntimeFloatCurve PitchCurve; // 0x100
	float PitchMin; // 0x188
	float PitchMax; // 0x18c
	float VolumeMin; // 0x190
	float VolumeMax; // 0x194
};

struct UCoreInputPromptWidget {
	FText _unfoundInputKeyText; // 0x2d8
	FKey _inputKey; // 0x2f0
	bool _isEnabled; // 0x310
};

struct UTexture2D {
	int32_t levelIndex; // 0xc0
	int32_t FirstResourceMemMip; // 0xc4
	char bTemporarilyDisableStreaming : 1; // 0xc8
	TextureAddress AddressX; // 0xc9
	TextureAddress AddressY; // 0xca
	FIntPoint ImportedSize; // 0xcc
	char bIsUsingDistanceField : 1; // 0xe8
	char bComputeInnerDistance : 1; // 0xe8
	UTexture2D* DistanceField; // 0xf0
	char UseChannel; // 0xf8
};

struct UTouchInterface {
	TArray<FTouchInputControl> Controls; // 0x30
	float ActiveOpacity; // 0x40
	float InactiveOpacity; // 0x44
	float TimeUntilDeactive; // 0x48
	float TimeUntilReset; // 0x4c
	float ActivationDelay; // 0x50
	bool bPreventRecenter; // 0x54
	float StartupDelay; // 0x58
};

struct UParticleModuleSpawnPerUnit {
	float UnitScalar; // 0x40
	float MovementTolerance; // 0x44
	FRawDistributionFloat SpawnPerUnit; // 0x48
	float MaxFrameDistance; // 0x78
	char bIgnoreSpawnRateWhenMoving : 1; // 0x7c
	char bIgnoreMovementAlongX : 1; // 0x7c
	char bIgnoreMovementAlongY : 1; // 0x7c
	char bIgnoreMovementAlongZ : 1; // 0x7c
};

struct UDBDMapFoliageDensityTunables {
	TArray<FTypeFoliageToAutomateDensity> FoliageToAutomateDensity; // 0x30
};

struct UDistributionVectorUniform {
	FVector Max; // 0x40
	FVector Min; // 0x4c
	char bLockAxes : 1; // 0x58
	EDistributionVectorLockFlags LockedAxes; // 0x5c
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x5d
	char bUseExtremes : 1; // 0x60
};

struct USoundBankLoader {
	TArray<UAkAudioBank*> _audioBanks; // 0x60
	TArray<ULoadAsyncBankData*> _asyncAudioBanksPendingLoadData; // 0x70
};

struct UNiagaraSimulationStageGeneric {
	ENiagaraIterationSource IterationSource; // 0x48
	int32_t Iterations; // 0x4c
	char bSpawnOnly : 1; // 0x50
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x58
};

struct UBTService_Patrol_Discovery {
	bool RejectPatrolPointIfInPressureZone; // 0x158
	int32_t MaxFindRandomLocationOnTileAttempts; // 0x15c
	int32_t FirstFindOnNbNeighborTiles; // 0x160
};

struct AOnlineBeacon {
	float BeaconConnectionInitialTimeout; // 0x238
	float BeaconConnectionTimeout; // 0x23c
	UNetDriver* NetDriver; // 0x240
};

struct UChargeableInteractionDefinition {
	FMulticastInlineDelegate SkillCheckResponseAestheticDelegate; // 0x5c8
	FMulticastInlineDelegate SkillCheckResponseAuthorityDelegate; // 0x5d8
	bool StopInteractionOnChargeComplete; // 0x5e8
	bool HasProgressivelyHarderSkillChecks; // 0x5e9
	float ProgressiveDifficultyModifier; // 0x5ec
	EChargeableInteractionBarType ProgressBarType; // 0x5f0
	TArray<float> ProgressPips; // 0x5f8
	bool HideProgressBar; // 0x608
	bool ShowItemIcon; // 0x609
	bool AtlantaIsCancellableWhileCharging; // 0x60a
	UChargeableComponent* _chargeableComponent; // 0x610
	float _tutorialChargeableMultiplier; // 0x618
	bool ShowSpeedProficiencyForMultipleInteractors; // 0x670
	FGameplayTagContainer _interactionSpecificActionSpeedTags; // 0x678
	FGameplayTagContainer _interactionSpecificActionSpeedMultiplicativeTags; // 0x698
	FGameplayTagContainer _interactionSpecificActionSpeedAdditiveTags; // 0x6b8
};

struct APointLight {
	UPointLightComponent* PointLightComponent; // 0x240
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

struct UInterpTrackEvent {
	TArray<FEventTrackKey> EventTrack; // 0x78
	char bFireEventsWhenForwards : 1; // 0x88
	char bFireEventsWhenBackwards : 1; // 0x88
	char bFireEventsWhenJumpingForwards : 1; // 0x88
	char bUseCustomEventName : 1; // 0x88
};

struct USoundWave {
	int32_t CompressionQuality; // 0x168
	int32_t StreamingPriority; // 0x16c
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x170
	ESoundGroup SoundGroup; // 0x172
	char bLooping : 1; // 0x173
	char bStreaming : 1; // 0x173
	char bSeekableStreaming : 1; // 0x173
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x174
	char bMature : 1; // 0x175
	char bManualWordWrap : 1; // 0x175
	char bSingleLine : 1; // 0x175
	char bIsAmbisonics : 1; // 0x176
	TArray<float> FrequenciesToAnalyze; // 0x178
	TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x188
	TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x198
	int32_t InitialChunkSize; // 0x1a8
	FString SpokenText; // 0x1f0
	float SubtitlePriority; // 0x200
	float Volume; // 0x204
	float Pitch; // 0x208
	int32_t NumChannels; // 0x20c
	int32_t SampleRate; // 0x210
	TArray<FSubtitleCue> Subtitles; // 0x220
	UCurveTable* Curves; // 0x230
	UCurveTable* InternalCurves; // 0x238
};

struct UInteractableTransformOptimizer {
	bool _optimizeTransformUpdate; // 0xb8
};

struct AOfferingSequenceAssets {
	TArray<FOfferingRevealDelays> OfferingRevealDelays; // 0x230
	TArray<AOfferingCard*> Cards; // 0x240
};

struct UAISenseConfig_Blueprint {
	UAISense_Blueprint* Implementation; // 0x50
};

struct ULingeringBlessedStatusEffect {
	float _lingerDuration; // 0x364
};

struct UUMGLandingPageButtonWidget {
	UCanvasPanel* BigTag; // 0x430
	UCanvasPanel* SmallTag; // 0x438
	UTextBlock* TagText; // 0x440
	URichTextBlock* BannerTitleText; // 0x448
	UImage* BannerImage; // 0x450
	UImage* TitleColorBg; // 0x458
	UImage* BorderColor; // 0x460
};

struct UUMGAtlCurrencyStorefrontWidget {
	UCanvasPanel* AuricCellsCanvasPanel; // 0x310
	UUniformGridPanel* AuricCellsGridPanel; // 0x318
	UHorizontalBox* BottomPurchaseBox; // 0x320
	URichTextBlock* BottomRightPurchaseRichText; // 0x328
	UOverlay* BottomTimer; // 0x330
	UImage* AuricsBgR; // 0x338
	UImage* AuricsBgL; // 0x340
	UHorizontalBox* EventItemsPackContainerBox; // 0x348
	FMargin PaddingEventItemsPackButton; // 0x350
	TSoftClassPtr<UObject> EventItemsPackWidgetClass; // 0x360
	TArray<UUMGStoreAuricCellButton*> _auricCellButtons; // 0x3a8
};

struct UPowerToggleComponent {
	bool _isInPower; // 0xd0
};

struct URedHerring {
	AGenerator* _generatorBeingRepaired; // 0x430
	AGenerator* _markedGenerator; // 0x438
	float _secondsToActivatePerk; // 0x440
	float _loudNoiseTriggeredNotifyTime; // 0x444
	float _cooldownLevels[0x3]; // 0x448
};

struct USpineChillPerk {
	float _actionSpeed[0x3]; // 0x3d0
};

struct AZombiesManagement {
	UAuthoritativeActorPoolComponent* _zombiePool; // 0x238
	UZombiesPatrolAreaManager* _zombiesPatrolAreaManager; // 0x240
	TArray<AZombieCharacter*> _spawnedZombiesArray; // 0x248
	FDBDTunableRowHandle _firstZombieSpawnTime; // 0x288
	FDBDTunableRowHandle _numberOfZombieToSpawnAtStart; // 0x2b0
	TArray<AZombieEscapeDoorPointsActor*> _zombieEscapeDoorPoints; // 0x2d8
};

struct UNoiseField {
	float MinRange; // 0xb8
	float MaxRange; // 0xbc
	FTransform Transform; // 0xc0
};

struct UDrawFrustumComponent {
	FColor FrustumColor; // 0x428
	float FrustumAngle; // 0x42c
	float FrustumAspectRatio; // 0x430
	float FrustumStartDist; // 0x434
	float FrustumEndDist; // 0x438
	UTexture* Texture; // 0x440
};

struct UWinter2021EventComponent {
	FDBDTunableRowHandle _numbSnowmenToSpawnAtStart; // 0xb8
	USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategyClass; // 0x118
	ASnowman* _snowmanClass; // 0x120
	USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy; // 0x128
	TArray<ASnowman*> _snowmen; // 0x140
};

struct UConsole {
	ULocalPlayer* ConsoleTargetPlayer; // 0x40
	UTexture2D* DefaultTexture_Black; // 0x48
	UTexture2D* DefaultTexture_White; // 0x50
	TArray<FString> HistoryBuffer; // 0x70
};

struct UDBDAggregateParticleLocatorComponent {
	UParticleSystem* Template; // 0x210
	UParticleSystemComponent* _particleComponent; // 0x218
};

struct UAppraisal {
	float _chestSearchSpeedMultiplier[0x3]; // 0x3d0
};

struct USicknessSurvivorSubAnimInstance {
	FString _vomitingEnteredStatEvent; // 0x4f0
	float _hitByVomitTime; // 0x500
	bool _isSick; // 0x504
	bool _isVomiting; // 0x505
	bool _hasRecentlyBeenHitByVomit; // 0x506
	bool _isOpeningExitGate; // 0x507
};

struct UMaterialExpressionDeriveNormalZ {
	FExpressionInput InXY; // 0x48
};

struct UParticleModuleLight {
	bool bUseInverseSquaredFalloff; // 0x38
	bool bAffectsTranslucency; // 0x39
	bool bPreviewLightRadius; // 0x3a
	float SpawnFraction; // 0x3c
	FRawDistributionVector ColorScaleOverLife; // 0x40
	FRawDistributionFloat BrightnessOverLife; // 0x88
	FRawDistributionFloat RadiusScale; // 0xb8
	FRawDistributionFloat LightExponent; // 0xe8
	FLightingChannels LightingChannels; // 0x118
	float VolumetricScatteringIntensity; // 0x11c
	bool bHighQualityLights; // 0x120
	bool bShadowCastingLights; // 0x121
};

struct UInAppPurchaseCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULingeringStateTagStatusEffect {
	FGameplayTag _ownerStateTag; // 0x358
};

struct USocialPrivateMessageChannel {
	USocialUser* TargetUser; // 0xf0
};

struct ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x230
};

struct UARPin {
	UARTrackedGeometry* TrackedGeometry; // 0x30
	USceneComponent* PinnedComponent; // 0x38
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc8
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd8
};

struct UUMGSettingSettingsContextWidget {
	bool MainVolumeOn; // 0x3a8
	float MainVolume; // 0x3ac
	bool MenuVolumeOn; // 0x3b0
	float MenuVolume; // 0x3b4
	bool IsLoggedIn; // 0x3b8
	bool IsEnableUserCenterWithLoggedOut; // 0x3b9
	bool IsLeaveTutorialButtonVisible; // 0x3ba
	bool IsAutoDeclineFriendRequestOn; // 0x3bb
};

struct UHasGameplayTagEvaluatorCondition {
	TArray<FGameplayTag> _gameplayTagList; // 0x48
};

struct USoundNodeRandom {
	TArray<float> Weights; // 0x50
	TArray<bool> HasBeenUsed; // 0x60
	int32_t NumRandomUsed; // 0x70
	int32_t PreselectAtLevelLoad; // 0x74
	char bShouldExcludeFromBranchCulling : 1; // 0x78
	char bSoundCueExcludedFromBranchCulling : 1; // 0x78
	char bRandomizeWithoutReplacement : 1; // 0x78
};

struct UDeliverance {
	float _brokenEffectDurationPerLevel[0x3]; // 0x3d0
};

struct UHasModifierOfTypeEvaluatorCondition {
	TArray<FGameplayTag> _gameplayModifierList; // 0x48
};

struct UAkAssetDataWithMedia {
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x70
};

struct UMaterialPerThemeSettings {
	TMap<FName, UMaterialPerThemeData*> _themeMap; // 0x38
	UMaterialPerThemeData* _data; // 0x88
};

struct UUMGPartyPlayerSlotWidget {
	UTextBlock* playerName; // 0x300
	UTextBlock* AdditionalInformationText; // 0x308
	UImage* FriendIcon; // 0x310
	UUMGBaseButtonWidget* KickPlayerButton; // 0x318
	FSlateFontInfo CharacterNameStyle; // 0x320
	FSlateFontInfo PlayerInMatchStyle; // 0x378
	float PlayerInMatchOpacity; // 0x3d0
	float PlayerInLobbyOpacity; // 0x3d4
	UWidget* PlayerInformationContainer; // 0x3d8
	UCanvasPanel* ReadyIconsCanvas; // 0x3e0
	UCanvasPanel* RequestRoleIconsCanvas; // 0x3e8
	UWidgetSwitcher* RoleSwitcher; // 0x3f0
	UImage* LeaderIcon; // 0x3f8
};

struct UBillboardComponent {
	UTexture2D* Sprite; // 0x428
	char bIsScreenSizeScaled : 1; // 0x430
	float ScreenSize; // 0x434
	float U; // 0x438
	float UL; // 0x43c
	float V; // 0x440
	float VL; // 0x444
};

struct ALocker {
	FMulticastInlineDelegate OnSurvivorInLockerChanged; // 0x328
	float FastDoorActivationAudibleRange; // 0x338
	float NormalDoorActivationAudibleRange; // 0x33c
	UAnimationMontageSlave* _montageFollower; // 0x340
	UMontagePlayer* _montagePlayer; // 0x348
	ADBDPlayer* _playerOpeningLocker; // 0x350
	ACamperPlayer* _survivorInLocker; // 0x358
	UInteractor* _mainInteractor; // 0x360
	UPrimitiveComponent* _frontInteractionZone; // 0x368
	UInteractionDefinition* _searchEmpty; // 0x370
	UInteractionDefinition* _searchPlayer; // 0x378
	UChildActorComponent* _killerInteractionActor; // 0x380
	ULockerAnimInstance* _lockerAnimInstance; // 0x388
	FGameplayTagContainer _interactionExitClosetSemantics; // 0x390
	bool _preventAllInteractions; // 0x3f0
	bool _preventAllInteractionsLocally; // 0x3f1
};

struct UInterpTrackFade {
	char bPersistFade : 1; // 0x98
	char bFadeAudio : 1; // 0x98
	FLinearColor FadeColor; // 0x9c
};

struct UMaterialExpressionSphericalParticleOpacity {
	FExpressionInput Density; // 0x48
	float ConstantDensity; // 0x64
};

struct UParticleModuleRotationOverLifetime {
	FRawDistributionFloat RotationOverLife; // 0x38
	char Scale : 1; // 0x68
};

struct UAkMarkerCallbackInfo {
	int32_t Identifier; // 0x40
	int32_t Position; // 0x44
	FString label; // 0x48
};

struct UDisplaceMeshTool {
	EDisplaceMeshToolDisplaceType DisplacementType; // 0x90
	float DisplaceIntensity; // 0x94
	int32_t RandomSeed; // 0x98
	int32_t Subdivisions; // 0x9c
	UTexture2D* DisplacementMap; // 0xa0
	float DisplaceFrequency; // 0xa8
	float DisplacePhaseShift; // 0xac
};

struct UAkLateReverbComponent {
	char bEnable : 1; // 0x210
	UAkAuxBus* AuxBus; // 0x218
	FString AuxBusName; // 0x220
	float SendLevel; // 0x230
	float FadeRate; // 0x234
	float Priority; // 0x238
	UAkLateReverbComponent* NextLowerPriorityComponent; // 0x240
};

struct UNiagaraPreviewAxis_InterpParamLinearColor {
	FLinearColor Min; // 0x40
	FLinearColor Max; // 0x50
};

struct UExistingMeshMaterialProperties {
	ESetMeshMaterialMode MaterialMode; // 0x58
	float CheckerDensity; // 0x5c
	UMaterialInterface* OverrideMaterial; // 0x60
	UMaterialInstanceDynamic* CheckerMaterial; // 0x68
};

struct UCustomWidgetWrapper_HudEditor {
	float MinOpacity; // 0x1a0
	float MaxOpacity; // 0x1a4
	float MinScale; // 0x1a8
	float MaxScale; // 0x1ac
	int32_t NbVersions; // 0x1b0
	float HideUnderOpacity; // 0x1b4
	FColor HiddenStatusTintColor; // 0x1b8
	float HiddenStatusOpacity; // 0x1bc
	float OverlapAboveSizeRatio; // 0x1c0
	FGameplayTagContainer IgnoreOverlapIds; // 0x1c8
	FHudEditorDragFromParentAxisLimit ParentDragLimitX; // 0x1e8
	FHudEditorDragFromParentAxisLimit ParentDragLimitY; // 0x1fc
	bool IsEditingHudByInput; // 0x210
	FColor OverlapStatusTintColor; // 0x214
};

struct UUMGAtlantaSettingScreen {
	UWidgetSwitcher* SettingContextSwitcher; // 0x3b0
	UHorizontalBox* SettingTabBox; // 0x3b8
	UHorizontalBox* AlwaysDisplayButtonBox; // 0x3c0
	TSoftClassPtr<UObject> _settingTabButtonClass; // 0x3c8
	TSoftClassPtr<UObject> _settingAlwaysDisplayButtonClass; // 0x3f8
	TSoftObjectPtr<UTexture2D> _buttonBoxDividerAsset; // 0x428
	TMap<EOverlayTabs, TSoftClassPtr<UObject>> _overlayContextWidgetMap; // 0x458
	TMap<EOverlayTabs, UUMGSettingContextWidget*> _contextWidgetMap; // 0x4a8
};

struct AGnome {
	UGnomeInteraction* _gnomeInteraction; // 0x350
	UGnomeInteraction* _gnomeInteractionKiller; // 0x358
	UChargeableComponent* _gnomeInteractionChargeable; // 0x360
	UChargeableComponent* _gnomeInteractionChargeableKiller; // 0x368
	UInteractor* _gnomeInteractor; // 0x370
	UPrimitiveComponent* _gnomeInteractionZone; // 0x378
	UDBDOutlineComponent* _outlineComponent; // 0x380
	USkeletalMeshComponent* _gnomeSkeletalMesh; // 0x388
	FDBDTunableRowHandle _gnomeInteractionSecondsToCharge; // 0x390
	FDBDTunableRowHandle _gnomeInteractionSecondsToChargeKiller; // 0x3b8
	FLinearColor _auraColorWhileInteracting; // 0x3e0
};

struct UNavLinkDefinition {
	TArray<FNavigationLink> Links; // 0x30
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x40
};

struct UUMGPromoPackPurchaseCurrencyButtonWidget {
	UTextBlock* PercentageDiscountText; // 0x4d8
	UTextBlock* UndiscountedPrice; // 0x4e0
	UCanvasPanel* PercentageDiscountCanvas; // 0x4e8
	UOverlay* OverlayUndiscountedPrice; // 0x4f0
};

struct USafeZoneManagerWidget {
	UCanvasPanel* SafeZonePanel; // 0x300
};

struct UInterpTrackInstVectorProp {
	FVector ResetVector; // 0x60
};

struct UGizmoLocalFloatParameterSource {
	float Value; // 0x50
	FGizmoFloatParameterChange LastChange; // 0x54
};

struct UHexHauntedGround {
	float _exposedStatusEffectDuration[0x3]; // 0x440
};

struct AKillerAtlantaTutorialLevel {
	TWeakObjectPtr<ASlasherPlayer> LocallyControllerSlasherPlayer; // 0x328
	TWeakObjectPtr<ACamperPlayer> ChaseCamper; // 0x330
	TWeakObjectPtr<ACamperPlayer> BearTrapCamper; // 0x338
	TWeakObjectPtr<AGenerator> KickGenerator; // 0x340
	TWeakObjectPtr<AWindow> VaultWindow; // 0x348
	TWeakObjectPtr<AEscapeDoor> EscapeDoor; // 0x350
	TWeakObjectPtr<AHatch> Hatch; // 0x358
};

struct UMaterialExpressionShadowReplace {
	FExpressionInput Default; // 0x48
	FExpressionInput Shadow; // 0x64
};

struct AMaterialInstanceActor {
	TArray<AActor*> TargetActors; // 0x230
};

struct UAchievementWriteCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UGizmoConstantFrameAxisSource {
	FVector Origin; // 0x38
	FVector Direction; // 0x44
	FVector TangentX; // 0x50
	FVector TangentY; // 0x5c
};

struct UPaperSprite {
	TArray<UTexture*> AdditionalSourceTextures; // 0x40
	FVector2D BakedSourceUV; // 0x50
	FVector2D BakedSourceDimension; // 0x58
	UTexture2D* BakedSourceTexture; // 0x60
	UMaterialInterface* DefaultMaterial; // 0x68
	UMaterialInterface* AlternateMaterial; // 0x70
	TArray<FPaperSpriteSocket> Sockets; // 0x78
	ESpriteCollisionMode SpriteCollisionDomain; // 0x88
	float PixelsPerUnrealUnit; // 0x8c
	UBodySetup* BodySetup; // 0x90
	int32_t AlternateMaterialSplitIndex; // 0x98
	TArray<FVector4> BakedRenderData; // 0xa0
};

struct UAkCallbackInfo {
	UAkComponent* AkComponent; // 0x30
};

struct UNatAudioAmbienceBox {
	UAkAudioEvent* _onBeginOverlapAudioEvent; // 0x450
	UAkAudioEvent* _onEndOverlapAudioEvent; // 0x458
};

struct APartyBeaconClient {
	FString DestSessionId; // 0x2f8
	FPartyReservation PendingReservation; // 0x308
	EClientRequestType RequestType; // 0x358
	bool bPendingReservationSent; // 0x359
	bool bCancelReservation; // 0x35a
};

struct UDatasmithPointLightComponentTemplate {
	ELightUnits IntensityUnits; // 0x38
	float SourceRadius; // 0x3c
	float SourceLength; // 0x40
	float AttenuationRadius; // 0x44
};

struct UUMGPromoPackCharacterWidget {
	UCanvasPanel* OwnedPanel; // 0x468
};

struct UUMGTallyRankBanner {
	UUMGTallyPipsContainer* PipsContainerWidget; // 0x300
	UUMGRankBanner* RankBanner; // 0x308
	UImage* SmokeBackground; // 0x310
};

struct UEnvQueryTest_GameplayTags {
	FGameplayTagQuery TagQueryToMatch; // 0x238
	bool bUpdatedToUseQuery; // 0x280
	EGameplayContainerMatchType TagsToMatch; // 0x281
	FGameplayTagContainer GameplayTags; // 0x288
};

struct UMeatHookAnimInstance {
	bool IsBroken; // 0x270
	float Yaw; // 0x274
};

struct URemoveOccludedTrianglesOperatorFactory {
	URemoveOccludedTrianglesTool* Tool; // 0x38
};

struct UZoneDetectorComponent {
	TArray<UPrimitiveComponent*> _zones; // 0xd0
	TArray<FName> _tags; // 0xe0
};

struct UBaseModifierContainer {
	FName _id; // 0xd8
	FModifierReplicatedEventConditionData _eventDrivenConditionData; // 0xe8
};

struct UIsHighestLevelAndClosestOriginatingEffect {
	TArray<UStatusEffect*> _applicableEffects; // 0xd0
};

struct USourceEffectEnvelopeFollowerPreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x7c
};

struct UFlashlightableComponent {
	FMulticastInlineDelegate OnFlashlightAddedEvent; // 0xb8
	FMulticastInlineDelegate OnFlashlightRemovedEvent; // 0xc8
	FMulticastInlineDelegate OnFlashlightLitChangedEvent; // 0xd8
	UFlashlightableLightingStrategy* _lightingStrategy; // 0xe8
	TSet<UFlashlightComponent*> _flashlights; // 0xf0
};

struct UAnimCompress_PerTrackCompression {
	float MaxZeroingThreshold; // 0x68
	float MaxPosDiffBitwise; // 0x6c
	float MaxAngleDiffBitwise; // 0x70
	float MaxScaleDiffBitwise; // 0x74
	TArray<AnimationCompressionFormat> AllowedRotationFormats; // 0x78
	TArray<AnimationCompressionFormat> AllowedTranslationFormats; // 0x88
	TArray<AnimationCompressionFormat> AllowedScaleFormats; // 0x98
	char bResampleAnimation : 1; // 0xa8
	float ResampledFramerate; // 0xac
	int32_t MinKeysForResampling; // 0xb0
	char bUseAdaptiveError : 1; // 0xb4
	char bUseOverrideForEndEffectors : 1; // 0xb4
	int32_t TrackHeightBias; // 0xb8
	float ParentingDivisor; // 0xbc
	float ParentingDivisorExponent; // 0xc0
	char bUseAdaptiveError2 : 1; // 0xc4
	float RotationErrorSourceRatio; // 0xc8
	float TranslationErrorSourceRatio; // 0xcc
	float ScaleErrorSourceRatio; // 0xd0
	float MaxErrorPerTrackRatio; // 0xd4
	float PerturbationProbeSize; // 0xd8
};

struct UGeometryCacheTrack {
	float Duration; // 0x30
};

struct UParticleModuleVelocity {
	FRawDistributionVector StartVelocity; // 0x40
	FRawDistributionFloat StartVelocityRadial; // 0x88
};

struct UMapBuildDataRegistry {
	ELightingBuildQuality LevelLightingQuality; // 0x30
};

struct UBlessTotem {
	FDBDTunableRowHandle _blessHexTotemSpeedPenalty; // 0x6d8
};

struct UMagicLeapSettings {
	bool bEnableZI; // 0x30
	bool bUseVulkanForZI; // 0x31
	bool bUseMLAudioForZI; // 0x32
};

struct UDBDEmblem_KillerMalicious {
	TMap<ACamperPlayer*, int32_t> _remainingSurvivorHookStates; // 0x118
};

struct USelfPreservation {
	float _hitDistanceToTriggerPerkEffect[0x3]; // 0x3d0
	float _selfPreservationEffectDuration[0x3]; // 0x3dc
};

struct UZombieAnimInstance {
	float _speed; // 0x270
	EZombieState _zombieState; // 0x274
	AZombieCharacter* _zombieCharacter; // 0x278
	bool _isFalling; // 0x280
	EZombieGender _zombieGender; // 0x281
};

struct UPlaneCutTool {
	UPlaneCutToolProperties* BasicProperties; // 0xa0
	UAcceptOutputProperties* AcceptProperties; // 0xa8
	FVector CutPlaneOrigin; // 0xb0
	FQuat CutPlaneOrientation; // 0xc0
	TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xd0
	TArray<UDynamicMeshReplacementChangeTarget*> MeshesToCut; // 0xe0
	UTransformGizmo* PlaneTransformGizmo; // 0x158
	UTransformProxy* PlaneTransformProxy; // 0x160
};

struct UBuildPatchManifest {
	char ManifestFileVersion; // 0x30
	bool bIsFileData; // 0x31
	uint32_t AppID; // 0x34
	FString AppName; // 0x38
	FString BuildVersion; // 0x48
	FString LaunchExe; // 0x58
	FString LaunchCommand; // 0x68
	TSet<FString> PrereqIds; // 0x78
	FString PrereqName; // 0xc8
	FString PrereqPath; // 0xd8
	FString PrereqArgs; // 0xe8
	TArray<FFileManifestData> FileManifestList; // 0xf8
	TArray<FChunkInfoData> ChunkList; // 0x108
	TArray<FCustomFieldData> CustomFields; // 0x118
};

struct ULayer {
	FName LayerName; // 0x30
	char bIsVisible : 1; // 0x3c
	TArray<FLayerActorStats> ActorStats; // 0x40
};

struct UMovieSceneLevelVisibilitySection {
	ELevelVisibility Visibility; // 0xe8
	TArray<FName> LevelNames; // 0xf0
};

struct UOutlineUpdateStrategy {
	UDBDOutlineComponent* _outlineComponent; // 0xb8
};

