namespace off {
	constexpr auto GNames = 0x5386640;
	constexpr auto GObjects = 0x539ebc0;
	constexpr auto GWorld = 0x54d3ca0;
}
struct UARPlaneGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct AShooterAIController {
	UBlackboardComponent* BlackboardComp; // 0x328
	UBehaviorTreeComponent* BehaviorComp; // 0x330
};

struct UInterpTrackInstAkAudioRTPC {
	float LastUpdatePosition; // 0x28
};

struct USourceEffectSimpleDelayPreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
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

struct ABombMode_Bomb {
	USceneComponent* DummyRoot; // 0x228
	USkeletalMeshComponent* BombMeshComponent; // 0x230
	UMapIconComponent* MapIconComponent; // 0x238
	FBox DefuseBox; // 0x240
	UParticleSystem* DetonateEffect; // 0x260
	int32_t TeamAllegiance; // 0x268
	ABombMode_Zone* Zone; // 0x270
	bool Armed; // 0x278
	float Fuse; // 0x27c
	bool IsBeingDefused; // 0x280
	ABombPlayerState* Defuser; // 0x288
	AController* Planter; // 0x290
	UCurveFloat* DamageFalloff; // 0x298
	UWorldMarkerComponent* WorldMarkerComponent; // 0x2a0
	UAkComponent* DefaultAkComponent; // 0x2b0
	UAkAudioEvent* TickingEvent; // 0x2b8
	UAkAudioEvent* StopTickingEvent; // 0x2c0
	bool bAttackersSeeBombIcon; // 0x2c8
	bool bDefendersSeeBombIcon; // 0x2c9
	bool bCanBeSeenByDefender; // 0x2ca
	float MaxFuse; // 0x2cc
	bool bDrawDebugDefuseArea; // 0x2f8
};

struct UGizmoComponentHitTarget {
	UPrimitiveComponent* Component; // 0x30
};

struct UApply-Legend-button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UImage* Image_405; // 0x288
	UButton* Wish-Button; // 0x290
	FMulticastInlineDelegate ButtonClicked; // 0x298
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

struct UMaterialExpressionStaticComponentMaskParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct UPFGroupManager {
	TArray<FString> GroupInvitationEntityIds; // 0x28
	TArray<FPFPlayerId> GroupApplicantEntityIds; // 0x38
	TArray<FPFPlayerId> GroupBlocksEntityIds; // 0x48
	TArray<FPFPlayerId> GroupInvitesEntityIds; // 0x58
	TArray<FPFPlayerId> GroupMembersEntityIds; // 0x68
	TArray<FPFSingleEntityMembershipInfo> SingleEntityMembershipInfo; // 0x78
	FMulticastInlineDelegate UpdateUIEvent; // 0x88
	UPlayFabSubsystem* PlayFabSubsystem; // 0x98
	UPFPlayerIdCache* PlayerIdCache; // 0xb0
	bool bIsServer; // 0xb8
	bool bGroupCreated; // 0xb9
};

struct UNUIBreadCrumb {
	FString Name; // 0x260
};

struct UWBP_ProneBlock_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Glitch; // 0x268
	UWidgetAnimation* Intro; // 0x270
	UTextBlock* descriptiontext; // 0x278
	UTextBlock* descriptiontextBLUE; // 0x280
	UTextBlock* descriptiontextRED; // 0x288
	bool bIsProneBlocked; // 0x290
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

struct UBP_StunnedCameraModifier_C {
	UMaterialInstanceDynamic* PostProcessMaterial; // 0x48
	float Strength; // 0x50
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

struct UNUISettingsMenuHeader {
	bool SecretSetting; // 0x260
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

struct UPaperTerrainComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x440
	bool bClosedSpline; // 0x448
	bool bFilledSpline; // 0x449
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x450
	int32_t RandomSeed; // 0x458
	float SegmentOverlapAmount; // 0x45c
	FLinearColor TerrainColor; // 0x460
	int32_t ReparamStepsPerSegment; // 0x470
	ESpriteCollisionMode SpriteCollisionDomain; // 0x474
	float CollisionThickness; // 0x478
	UBodySetup* CachedBodySetup; // 0x480
};

struct AVaultVolume {
	UBoxComponent* BoxComponent; // 0x220
	UArrowComponent* ArrowComponent; // 0x228
};

struct UShowLoginUICallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UMedal25BombDOM {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct ADebugCameraController {
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
	APlayerController* OriginalControllerRef; // 0x620
	UPlayer* OriginalPlayer; // 0x628
	float SpeedScale; // 0x630
	float InitialMaxSpeed; // 0x634
	float InitialAccel; // 0x638
	float InitialDecel; // 0x63c
};

struct UNUI_RightClickableButton {
	FMulticastInlineDelegate OnRightClick; // 0x428
};

struct UBookMark2D {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct UBattalionPathFollowingComponent {
	USplineComponent* SplinePath; // 0x268
};

struct ADOMGameMode {
	float CaptureTime; // 0x878
	float CooldownTime; // 0x87c
	float ScoreInterval; // 0x880
	float AllyZoneSpawnWeighting; // 0x884
	float AllyZoneSpawnDistance; // 0x888
	float AllyZoneSpawnExponent; // 0x88c
	float EnemyZoneSpawnWeighting; // 0x890
	float EnemyZoneSpawnDistance; // 0x894
	float EnemyZoneSpawnExponent; // 0x898
	int32_t CaptureScore; // 0x89c
	ADOMGameState* DOMGameState; // 0x8a0
	UObject* ZoneClass; // 0x8a8
	FNationSound EnemyCapturedA_Event; // 0x8c0
	FNationSound EnemyCapturedB_Event; // 0x8e0
	FNationSound EnemyCapturedC_Event; // 0x900
	FNationSound EnemyTakingA_Event; // 0x920
	FNationSound EnemyTakingB_Event; // 0x940
	FNationSound EnemyTakingC_Event; // 0x960
	FNationSound CapturedA_Event; // 0x980
	FNationSound CapturedB_Event; // 0x9a0
	FNationSound CapturedC_Event; // 0x9c0
	FNationSound TakingA_Event; // 0x9e0
	FNationSound TakingB_Event; // 0xa00
	FNationSound TakingC_Event; // 0xa20
	UAkAudioEvent* EventControlAllObjectives; // 0xa40
	UAkAudioEvent* EventGettingDominated; // 0xa48
	UAkAudioEvent* EventLostA; // 0xa50
	UAkAudioEvent* EventLostB; // 0xa58
	UAkAudioEvent* EventLostC; // 0xa60
	UAkAudioEvent* EventTakenA; // 0xa68
	UAkAudioEvent* EventTakenB; // 0xa70
	UAkAudioEvent* EventTakenC; // 0xa78
	UAkAudioEvent* EventObjectiveTakenSuccess; // 0xa80
};

struct UEnvQueryTest_Distance {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct ARadialForceActor {
	URadialForceComponent* ForceComponent; // 0x220
};

struct ALadder {
	USceneComponent* SceneComponent; // 0x220
	UBoxComponent* BoxComponent; // 0x228
	UArrowComponent* ArrowComponent; // 0x230
	UNavLinkComponent* NavLinkComponent; // 0x238
	int32_t Steps; // 0x250
	float Stride; // 0x254
	float LadderHeight; // 0x258
	FVector NavLinkOffsetBottom; // 0x25c
	FVector NavLinkOffsetTop; // 0x268
	EPhysicalSurface LadderType; // 0x274
};

struct UMedalAggressor {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct UEnvQueryTest_Project {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct UWBP_InteractionEvent_C {
	UImage* ProgressEventImage; // 0x268
};

struct UWBP_WeaponPickup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Glitch; // 0x268
	UTextBlock* descriptiontext_2; // 0x270
	UImage* GunIcon_BLUE; // 0x278
	UImage* GunIcon_RED; // 0x280
	UTextBlock* GunName; // 0x288
	UTextBlock* GunName_BLUE; // 0x290
	UTextBlock* GunName_RED; // 0x298
	UImage* GunPickupIcon; // 0x2a0
	UInvalidationBox* IB_Root; // 0x2a8
	UPlatformKeyImage_C* PlatformKeyImage; // 0x2b0
	UPlatformKeyImage_C* PlatformKeyImage_2; // 0x2b8
	UPlatformKeyImage_C* PlatformKeyImage_3; // 0x2c0
	UTextBlock* PressOrHoldText; // 0x2c8
	UCanvasPanel* WholeWidgetCanvasPanel; // 0x2d0
	UHUDTextDataAsset* HUD Colour; // 0x2d8
	UHUDTextDataAsset* HUDColour; // 0x2e0
};

struct AGameSession {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct UNiagaraDataInterfaceTexture {
	UTexture* Texture; // 0x38
};

struct ABattalionCharacter {
	TArray<ECollisionChannel> LOSTraceBlockingObjects; // 0x4c8
	bool bHasFireHeld; // 0x4e8
	float JoystickInputMaxDuration; // 0x4f4
	FTimerHandle TimerHandle_MeleeEquipHoldTimer; // 0x500
	FTimerHandle TimerHandle_ControllerSwapWeaponTimer; // 0x508
	FTimerHandle TimerHandle_GrenadeThrowFullyEndedTimer; // 0x510
	bool bMeleeHoldEquipComplete; // 0x518
	bool bWeaponSwapEquipComplete; // 0x519
	FString LastSetSurface; // 0x520
	float TimeCycleWeaponStarted; // 0x538
	bool bWantsToADSNewWeapon; // 0x53c
	ABattalionGrenade* GrenadeClass; // 0x550
	ABattalionSmokeGrenade* SmokeGrenadeClass; // 0x558
	ABattalionIncendiaryGrenade* IncendiaryGrenadeClass; // 0x560
	ABattalionFlashGrenade* FlashGrenadeClass; // 0x568
	ABattalionStunGrenade* StunGrenadeClass; // 0x570
	ABattalionGrenadePickup* USGrenadePickupClass; // 0x578
	ABattalionGrenadePickup* DEGrenadePickupClass; // 0x580
	ABattalionGrenadePickup* RUSGrenadePickupClass; // 0x588
	ABattalionGrenadePickup* BRITGrenadePickupClass; // 0x590
	ABattalionGrenadePickup* SpecialGrenadePickupClass; // 0x598
	TArray<FString> KnifeTestProperty; // 0x5a0
	float RayStartOffsetForward; // 0x5b0
	FVector DefaultCullVolumeWeaponScale; // 0x5b4
	FVector DefaultCullVolumeHeadScale; // 0x5c0
	FVector DefaultCullVolumeBodyScale; // 0x5cc
	TArray<UMaterialInstanceDynamic*> MeshDynamicMaterials; // 0x650
	TArray<UMaterialInstanceDynamic*> HeadMeshDynamicMaterials; // 0x660
	TArray<UMaterialInstanceDynamic*> WeaponDynamicMaterials; // 0x670
	UDamageType* KnifeDamageType; // 0x680
	UDamageType* QuickMeleeDamageType; // 0x688
	UDamageType* FallDamageType; // 0x690
	UDamageType* FireDamageType; // 0x698
	float FallDamageMinSpeed; // 0x6a0
	float FallDamageMaxSpeed; // 0x6a4
	float FallDamageMinDamage; // 0x6a8
	float FallDamageMaxDamage; // 0x6ac
	int32_t WantedWeaponSlot; // 0x6b0
	int32_t PreviousWeaponSlot; // 0x6b4
	UDamageType* NadeDamageType; // 0x6b8
	UDamageType* BombDamageType; // 0x6c0
	float VoiceOverDistance; // 0x6c8
	float VoiceOverFriendlyDistance; // 0x6cc
	float VoiceLinePlayedIncrementSeconds; // 0x6d0
	float VoiceLineDeathScreamDistance; // 0x6d4
	TArray<EGrenadeType> Grenades; // 0x6e0
	TArray<ESpecialGrenadeType> SpecialGrenades; // 0x6f0
	UTexture2D* SniperCrosshairTexture; // 0x700
	float SensitivityMultiplier; // 0x708
	float UnScopeVelocityThreshold; // 0x70c
	bool bIsPerformingLeftHandAction; // 0x710
	bool bTargetingBlocked; // 0x711
	USceneComponent* Mesh1PSceneComponent; // 0x718
	UAudioPassByComponent* AudioPassByComponent; // 0x720
	UCapsuleComponent* ProneCapsuleComponent; // 0x728
	UWidgetComponent* PlayerName; // 0x730
	UHUDPlayerName* PlayerNameInstance; // 0x738
	UFOVSkeletalMeshComponent* Mesh1P; // 0x740
	UFOVSkeletalMeshComponent* Mesh1PSocketMesh; // 0x748
	UFOVSkeletalMeshComponent* Mesh1PSocketMeshAlternate; // 0x750
	USkeletalMeshComponent* Mesh3PSocketMesh; // 0x758
	USkeletalMeshComponent* Mesh3PSocketMeshAlternate; // 0x760
	UPlayerSceneCaptureComponent2D* PlayerSceneCapture2D; // 0x768
	FName WeaponAttachPoint; // 0x770
	USkeletalMeshComponent* MeshHead; // 0x778
	USkeletalMeshComponent* MeshBomb; // 0x780
	FWeaponStopper EmergencyStopper; // 0x788
	TArray<FTeamOutfit> TeamOutfits; // 0x798
	TArray<ABattalionWeapon*> Inventory; // 0x7a8
	USkeletalMesh* SmokeGrenadeMesh; // 0x7b8
	USkeletalMesh* SmokeGrenadeMeshTP; // 0x7c0
	UObject* SmokeGrenadeMeshClass; // 0x7c8
	USkeletalMesh* AmericanGrenadeMesh; // 0x7d0
	USkeletalMesh* AmericanGrenadeMeshTP; // 0x7d8
	UObject* AmericanGrenadeMeshClass; // 0x7e0
	USkeletalMesh* GermanGrenadeMesh; // 0x7e8
	USkeletalMesh* GermanGrenadeMeshTP; // 0x7f0
	UObject* GermanGrenadeMeshClass; // 0x7f8
	USkeletalMesh* RussianGrenadeMesh; // 0x800
	USkeletalMesh* RussianGrenadeMeshTP; // 0x808
	USkeletalMesh* BritishGrenadeMesh; // 0x810
	USkeletalMesh* BritishGrenadeMeshTP; // 0x818
	UObject* RussianGrenadeMeshClass; // 0x820
	UObject* BritishGrenadeMeshClass; // 0x828
	ABattalionWeapon* CurrentWeapon; // 0x830
	AActor* NearPickupWeapon; // 0x838
	bool bShouldAutoPickupAmmo; // 0x840
	FTakeHitInfo LastTakeHitInfo; // 0x848
	float TargetingSpeedModifier; // 0x980
	char bPendingTargeting : 1; // 0x985
	char bPendingTargetingToggled : 1; // 0x985
	char bHorizontalSpeedEnabled : 1; // 0x985
	bool bADSState; // 0x986
	char bIsTargeting : 1; // 0x987
	float TargetingTransition; // 0x988
	float TargetingTransitionProgress; // 0x98c
	float TargetingSlowTransitionSpeed; // 0x994
	float TargetingAnimProgress; // 0x998
	FVector VelocityForAnim; // 0x99c
	FVector LastInAirVelocityForAnim; // 0x9a8
	FRotator LastVelocityRotationForAnim; // 0x9b4
	bool JumpedForAnim; // 0x9c0
	float CurrentLean; // 0x9c4
	float LeanLeftTarget; // 0x9c8
	float LeanRightTarget; // 0x9cc
	float LeanCheckDistance; // 0x9d0
	float LeanDistanceModifier; // 0x9d4
	float RunningSpeedModifier; // 0x9d8
	float WeaponPickupDistance; // 0x9dc
	float LeaningSpeedModifier; // 0x9e0
	float LeaningSpeedADSModifier; // 0x9e4
	UCurveFloat* LeanADSWeapRollCurve; // 0x9e8
	float LeanExtent; // 0x9f0
	float BattEyeHeight; // 0x9f4
	float BattCrouchedEyeHeight; // 0x9f8
	float BattPronedEyeHeight; // 0x9fc
	float HoldTimeToProne; // 0xa0c
	float HoldTimeToSwitchWeapon; // 0xa18
	char WantsToLeanRight : 1; // 0xa1c
	char WantsToLeanLeft : 1; // 0xa1c
	FVector ViewRecoilSpeed; // 0xa28
	FVector ViewRecoil; // 0xa34
	FVector ViewRecoilCharacterClamp; // 0xa4c
	float ViewRecoilPermanentPercentage; // 0xa58
	FVector2D ViewSwayPitchClamp; // 0xa9c
	FVector2D ViewSwayYawClamp; // 0xaa4
	bool bHasFinishedDeathAnimation; // 0xad4
	UCurveFloat* FlinchCurve; // 0xad8
	UCurveFloat* RedFlinchCurve; // 0xae0
	float FlinchHeadScalar; // 0xae8
	UCurveFloat* ProneToCrouchInterp; // 0xb08
	UCurveFloat* CrouchToProneInterp; // 0xb10
	float ProneRotationMaxPitchClamp; // 0xb20
	float ProneRotationMinPitchClamp; // 0xb24
	float StandingRotationMaxPitchClamp; // 0xb28
	float StandingRotationMinPitchClamp; // 0xb2c
	float GrenadePrepTime; // 0xb40
	float GrenadeThrowTime; // 0xb44
	float GrenadeThrowAnimLength; // 0xb48
	float GrenadeWeaponRequipTime; // 0xb4c
	char bMeleeAttacking : 1; // 0xb54
	FKnifeAnimationInfo KnifeInfo; // 0xb58
	bool bMeleeAttackingAsPrimary; // 0xb5c
	float KnifeAnimLength; // 0xb60
	float KnifeAttackTime; // 0xb64
	float KnifeCancelTime; // 0xb68
	bool bGrenadePrepared; // 0xb6c
	uint32_t bGrenadeThrowing; // 0xb70
	char bGrenadeHeld; // 0xb74
	char bHasBomb; // 0xb75
	TArray<UMaterialInstanceDynamic*> MeshMIDs; // 0xb80
	UMaterialInstanceDynamic* Mesh1PMID; // 0xb90
	FSpecialAnim LadderAnim; // 0xb98
	FCharacterAnim GrenadeAnim; // 0xbb8
	FCharacterAnim GermanGrenadeAnim; // 0xbc8
	FCharacterAnim RussianGrenadeAnim; // 0xbd8
	FCharacterAnim BritishGrenadeAnim; // 0xbe8
	FCharacterAnim SmokeGrenadeAnim; // 0xbf8
	UCurveVector* ActiveGrenadePrepareCameraSway; // 0xc28
	UCurveVector* ActiveGrenadeThrowCameraSway; // 0xc30
	FCharacterAnim BombPlantedAnim; // 0xc38
	FCharacterAnim BombDefusedAnim; // 0xc48
	USkeletalMesh* KnifeMesh; // 0xc58
	UObject* KnifeMeshClass; // 0xc60
	FCharacterAnim KnifeAnim; // 0xc68
	FCharacterAnim EquippedKnifeAnim; // 0xc78
	UCurveVector* KnifeAnimSway; // 0xc88
	UCurveVector* KnifeAnimSwayTranslation; // 0xc90
	UAnimMontage* DeathAnim; // 0xc98
	UAnimMontage* FlashedMontagePtr; // 0xca0
	TArray<FDeathAnim> DeathAnims; // 0xca8
	TArray<FDeathAnim> DeathGrenadeAnims; // 0xcb8
	TArray<FDeathAnim> DeathHeadshotAnims; // 0xcc8
	TArray<FDeathAnim> DeathPelvisAnims; // 0xcd8
	TArray<FDeathAnim> DeathStomachAnims; // 0xce8
	TArray<FDeathAnim> DeathNeckAnims; // 0xcf8
	TArray<FDeathAnim> DeathBehindAnims; // 0xd08
	UAkAudioEvent* ThrowingAxeSound; // 0xd68
	UAkComponent* DefaultAkComponent; // 0xd70
	UAkAudioEvent* DamageFromBurningSound; // 0xd78
	UAkAudioEvent* BulletPassByEvent; // 0xd80
	UAkAudioEvent* BulletPassByEvent_Sniper; // 0xd88
	UAkAudioEvent* DeathSound; // 0xd90
	UAkAudioEvent* GrenadePickedUpEvent; // 0xd98
	UAkAudioEvent* SpecialGrenadePickedUpEvent; // 0xda0
	UAkAudioEvent* WeaponPickedUpEvent; // 0xda8
	UAkAudioEvent* HurtmarkerSoundEvent; // 0xdb0
	UAkAudioEvent* HurtMarkerHeadshotSound; // 0xdb8
	UAkAudioEvent* DamageFromFallSoftSound; // 0xdc0
	UAkAudioEvent* DamageFromFallHardSound; // 0xdc8
	UAkAudioEvent* HurtmarkerKnifeSoundEvent; // 0xdd0
	UAnimMontage* VaultHigh; // 0xdd8
	UAnimMontage* VaultMedium; // 0xde0
	UAnimMontage* VaultLow; // 0xde8
	UAkAudioEvent* CrouchToStandingSound; // 0xdf0
	UAkAudioEvent* StandingToCrouchSound; // 0xdf8
	UAkAudioEvent* StandingToProneSound; // 0xe00
	UAkAudioEvent* ProneToStandingSound; // 0xe08
	UAkAudioEvent* CrouchToProneSound; // 0xe10
	UAkAudioEvent* ProneToCrouchSound; // 0xe18
	UAkAudioEvent* VaultSound; // 0xe20
	UParticleSystem* DeathBloodFX; // 0xe28
	UParticleSystem* HitWarpFX; // 0xe30
	FRotator DeathBloodFXRotator; // 0xe38
	FVector DeathBloodFXScalar; // 0xe44
	UParticleSystem* RespawnFX; // 0xe50
	UAkAudioEvent* RespawnSound; // 0xe58
	UAkAudioEvent* LowHealthLoopSound; // 0xe60
	UAkAudioEvent* LowHealthSoundStop; // 0xe68
	FName LowHealthVolumeParam; // 0xe70
	UAkAudioEvent* LowHealthGasp; // 0xe80
	UAkAudioEvent* HealthRegeneratedSound; // 0xe88
	UAkAudioEvent* HealthStartedRegeneratingSound; // 0xe90
	UAkAudioEvent* RunLoopSound; // 0xe98
	UAkAudioEvent* RunStopSound; // 0xea0
	UAkAudioEvent* TargetingSound; // 0xea8
	UAkAudioEvent* TargetingOutSound; // 0xeb0
	UAkAudioEvent* StopCriticalHealthSounds; // 0xeb8
	UAkAudioEvent* ActionFootstep; // 0xec0
	UAkAudioEvent* ActionLadderFootstep; // 0xec8
	UAkAudioEvent* ActionLadderFootstepMetal; // 0xed0
	UAkAudioEvent* ActionLand; // 0xed8
	UAkAudioEvent* ActionJump1p; // 0xee0
	UAkAudioEvent* ActionJump3p; // 0xee8
	UAkAudioEvent* HitmarkerSound; // 0xef0
	UAkAudioEvent* HitmarkerKnifeSound; // 0xef8
	UAkAudioEvent* HitmarkerHeadshotSound; // 0xf00
	UAkAudioEvent* HitmarkerHeadshotKillSound; // 0xf08
	float MeleeDistance; // 0xf10
	float QuickMeleeDamage; // 0xf14
	bool bDebugMelee; // 0xf18
	float MeleeProneDistance; // 0xf40
	UAkAudioEvent* ZombieAttackVocal; // 0xf48
	UAkAudioEvent* ZombieAttackFlesh; // 0xf50
	UAkAudioEvent* SurvivorKillConfirmed; // 0xf58
	UAkAudioEvent* WeaponPickUpSound; // 0xf60
	UAkAudioEvent* StartSlideLoop; // 0xf68
	UAkAudioEvent* StopSlideLoop; // 0xf70
	UAkAudioEvent* KillConfirmedSound; // 0xf80
	UAkAudioEvent* KillConfirmedCollateralSound; // 0xf88
	UAkAudioEvent* HeadshotKillConfirmedSound; // 0xf90
	UAkAudioEvent* StartBombPlantSound; // 0xf98
	UAkAudioEvent* StartDefusePlantSound; // 0xfa0
	UAkAudioEvent* FallingSound; // 0xfa8
	UAkAudioEvent* DeathScream; // 0xfb0
	UAkAudioEvent* StopFallingEvent; // 0xfb8
	UAkAudioEvent* FlashStartSound; // 0xfc0
	UAkAudioEvent* FlashStopSound; // 0xfc8
	float FirstPersonWalkTriggerSpeedDivisor; // 0xfd0
	float FirstPersonLadderWalkTriggerSpeedDivisor; // 0xfd4
	UCurveVector* WalkGunBobRotation; // 0xfe0
	float WalkGunBobRotationScale; // 0xfe8
	float WalkGunBobRotationSpeed; // 0xfec
	FVector ScreenSpaceWalkGunBobLocation; // 0xff0
	FVector HipStanceOffsetCrouch; // 0x10b0
	FVector HipStanceOffsetProne; // 0x10bc
	float LeftFootPlacementTime; // 0x10c8
	float RightFootPlacementTime; // 0x10cc
	float LeftFootSecondaryPlacementTime; // 0x10d0
	float RightFootSecondaryPlacementTime; // 0x10d4
	UCurveVector* SprintScreenBob; // 0x10d8
	float SprintScreenBobRotationScale; // 0x10e0
	float SprintScreenBobRotationSpeed; // 0x10e4
	float CameraAnimLerpSpeed; // 0x1114
	UCurveVector* JumpLandScreenBob; // 0x1118
	UCurveVector* JumpLandGunBob; // 0x1120
	float JumpLandBobMinScale; // 0x1128
	float JumpLandBobMaxScale; // 0x112c
	float JumpLandBobMinSpeed; // 0x1130
	float JumpLandBobMaxSpeed; // 0x1134
	ABattalionPlayerState* ProxyPlayerState; // 0x1168
	USkeletalMesh* EnemyTeamFPPMesh; // 0x1170
	USkeletalMesh* EnemyTeamTPPMesh; // 0x1178
	USkeletalMesh* EnemyTeamTPPHeadMesh; // 0x1180
	USkeletalMesh* FriendlyTeamFPPMesh; // 0x1188
	USkeletalMesh* FriendlyTeamTPPMesh; // 0x1190
	USkeletalMesh* FriendlyTeamTPPHeadMesh; // 0x1198
	UPhysicsAsset* NormalPhysicsAsset; // 0x11a8
	UPhysicsAsset* RagdollPhysicsAsset; // 0x11b0
	TArray<UDamageType*> MassiveDamageTypes; // 0x1228
	UCurveFloat* KillAbberationCurve; // 0x1250
	FPostProcessSettings DefaultPostProcessSettings; // 0x1260
	FPostProcessSettings CurrentPostProcessSettings; // 0x17b0
	float QuickReloadTime; // 0x1d00
	UAkAudioEvent* QuickReloadSound; // 0x1d08
	float QuickFireGlitchTime; // 0x1d10
	UAkAudioEvent* QuickFireGlitchSound; // 0x1d18
	bool MovementStoppedByFire; // 0x1d20
	UTimelineComponent* FlashTimelinePtr; // 0x1da0
	ABattalionPlayerControllerGMBase* CurrentViewerPC; // 0x1db0
	bool bHealthRegenerating; // 0x1db8
	char bIsDying : 1; // 0x1dbc
	float Health; // 0x1dc0
	float LastHitTime; // 0x1dc4
	float LastWeaponFireTime; // 0x1dc8
	bool bIsFlashed; // 0x1dcc
	UCurveFloat* FlashCurvePtr; // 0x1dd0
	UCameraShakeBase* CameraShakePtr; // 0x1dd8
	UMaterialParameterCollection* FlashMeterialParameterCollectionPtr; // 0x1de0
	FName WhiteScreenWeightParameterName; // 0x1de8
	FName ScreenCaptureWeightParameterName; // 0x1df0
	char bPressedVault : 1; // 0x1e14
	int32_t ClientMaxCorpsesOverTenPlayers; // 0x1e18
	int32_t ClientMaxCorpsesUnderTenPlayers; // 0x1e1c
	float ClientCorpseTimeout; // 0x1e20
	float ServerCorpseTimeout; // 0x1e24
	ECharacterTeam CharacterType; // 0x1e28
	EClassName CurrentClass; // 0x1e29
	ENationType Nation; // 0x1e2a
	int32_t CharacterGearSetType; // 0x1e2c
	float PossesedAliveTime; // 0x1e30
	float HoldingWeaponTime; // 0x1e34
	ALadder* LadderForAnimation; // 0x1e38
	FVector DirectionToDamage; // 0x1e40
	AController* CachedController; // 0x1e50
	TMap<AController*, float> Assisters; // 0x1e58
	EStanceType CurrentStance; // 0x1ed0
	bool bIsCriticalHealth; // 0x1ef8
	float CriticalHealth; // 0x1f04
	FHealthRegenEvent HealthRegenBelowCritical; // 0x1f08
	FHealthRegenEvent HealthRegenAboveCritical; // 0x1f24
	bool bCriticalRegen; // 0x1f40
	float HealthRegenAmount; // 0x1f44
	float HealthRegenDelay; // 0x1f48
	float HealthRegenSpeed; // 0x1f4c
	bool bUseDeathAnim; // 0x1f50
	UAkAudioEvent* CriticalHealthLoop; // 0x1f58
	UAkAudioEvent* CriticalHealthLoopReset; // 0x1f60
	UAkAudioEvent* CritcalHealthRegenerated; // 0x1f68
	bool bLocalOutline; // 0x1f70
	bool bForceNoOutline; // 0x1f79
	ABattalionCharacter* LastDamagedPlayer; // 0x1f90
	FPostProcessSettings InfectedPostProcessSettings; // 0x1fa0
	UMaterialInstance* InfectedFace; // 0x24f0
	UMaterialInstance* InfectedBody; // 0x24f8
	UAkAudioEvent* InfectedPlayIdleLoop_FP; // 0x2500
	UAkAudioEvent* InfectedPlayIdleLoop_3P; // 0x2508
	UAkAudioEvent* InfectedStopIdleLoop_FP; // 0x2510
	UAkAudioEvent* InfectedStopIdleLoop_3P; // 0x2518
	UAkAudioEvent* InfectedAttackVocal_FP; // 0x2520
	UAkAudioEvent* InfectedAttackVocal_3P; // 0x2528
	UAkAudioEvent* InfectedDeathScream; // 0x2530
	float AutoAimInnerRadius; // 0x2548
	float AutoAimOuterRadius; // 0x254c
	float AutoAimInnerRadiusCrouching; // 0x2550
	float AutoAimOuterRadiusCrouching; // 0x2554
	float AutoAimInnerRadiusProne; // 0x2558
	float AutoAimOuterRadiusProne; // 0x255c
	UCurveFloat* AutoAimTargetInnerRadiusVsDistanceCurve; // 0x2560
	UCurveFloat* AutoAimTargetOuterRadiusVsDistanceCurve; // 0x2568
	UCurveFloat* JoyStickAccelerationCurveVertical; // 0x2570
	UCurveFloat* JoyStickAccelerationCurveHorizontal; // 0x2578
	UCurveFloat* JoyStickAccelerationCurveADSVertical; // 0x2580
	UCurveFloat* JoyStickAccelerationCurveADSHorizontal; // 0x2588
	UCurveFloat* JoyStickAccelerationCurveScopedVertical; // 0x2590
	UCurveFloat* JoyStickAccelerationCurveScopedHorizontal; // 0x2598
	UCurveFloat* AutoAimFollowDistanceCurve; // 0x25a0
	UCurveFloat* AutoAimFollowDistanceCurvePrecision; // 0x25a8
	UCurveFloat* AutoAimFollowDistanceCurveFocus; // 0x25b0
	UCurveFloat* AutoAimFollowDistanceCurveScoped; // 0x25b8
	UCurveFloat* AutoAimFollowDistanceCurveScopedPrecision; // 0x25c0
	UCurveFloat* AutoAimFollowDistanceCurveScopedFocus; // 0x25c8
	UCurveFloat* AutoAimFollowDistanceCurveADS; // 0x25d0
	UCurveFloat* AutoAimFollowDistanceCurveADSPrecision; // 0x25d8
	UCurveFloat* AutoAimFollowDistanceCurveADSFocus; // 0x25e0
	UCurveFloat* AutoAimFollowDistanceCurveScopedADS; // 0x25e8
	UCurveFloat* AutoAimFollowDistanceCurveScopedADSPrecision; // 0x25f0
	UCurveFloat* AutoAimFollowDistanceCurveScopedADSFocus; // 0x25f8
	UCurveFloat* AutoAimTargetStrengthCurveHorizontal; // 0x2600
	UCurveFloat* AutoAimTargetStrengthCurveHorizontalPrecision; // 0x2608
	UCurveFloat* AutoAimTargetStrengthCurveHorizontalFocus; // 0x2610
	UCurveFloat* AutoAimTargetStrengthCurveVertical; // 0x2618
	UCurveFloat* AutoAimTargetStrengthCurveVerticalPrecision; // 0x2620
	UCurveFloat* AutoAimTargetStrengthCurveVerticalFocus; // 0x2628
	UCurveFloat* AutoAimTreacleHipCurveHorizontal; // 0x2630
	UCurveFloat* AutoAimTreacleHipCurveHorizontalPrecision; // 0x2638
	UCurveFloat* AutoAimTreacleHipCurveHorizontalFocus; // 0x2640
	UCurveFloat* AutoAimTreacleADSCurveHorizontal; // 0x2648
	UCurveFloat* AutoAimTreacleADSCurveHorizontalPrecision; // 0x2650
	UCurveFloat* AutoAimTreacleADSCurveHorizontalFocus; // 0x2658
	UCurveFloat* AutoAimTreacleScopeCurveHorizontal; // 0x2660
	UCurveFloat* AutoAimTreacleScopeCurveHorizontalPrecision; // 0x2668
	UCurveFloat* AutoAimTreacleScopeCurveHorizontalFocus; // 0x2670
	UCurveFloat* AutoAimTreacleHipCurveVertical; // 0x2678
	UCurveFloat* AutoAimTreacleADSCurveVertical; // 0x2680
	UCurveFloat* AutoAimTreacleScopeCurveVertical; // 0x2688
	UCurveFloat* AutoAimDistanceStrengthCurve; // 0x2690
	UCurveFloat* AutoAimDistanceStrengthCurvePrecision; // 0x2698
	UCurveFloat* AutoAimDistanceStrengthCurveFocus; // 0x26a0
	UCurveFloat* AutoAimPlayerVelocityStrengthCurve; // 0x26a8
	float ControllerScopedSensitivityMultiplier; // 0x26b0
	float ControllerVerticalSensitivityMultiplier; // 0x26b4
	float ControllerHorizontalSensitivityMultiplier; // 0x26b8
	float ControllerBaseADSSensitivityMultiplier; // 0x26bc
	float ControllerTriggerAxisThreshold; // 0x26c0
	float ControllerResetAccelerationDotThreshold; // 0x26c4
	float UseButtonHoldTime; // 0x26e4
	float UseButtonMeleeHold; // 0x26e8
	float UseButtonWeaponSwapHold; // 0x26ec
	float TimeToDestroy; // 0x2708
	UBattalionGameInstance* BattInstance; // 0x2710
	UBattalionSettings* BattSettings; // 0x2718
	int32_t ControllerSensitivityStepOffset; // 0x2720
	float ControllerSensitivityStepMultiplier; // 0x2724
	bool bCanEquipCancelFromFiring; // 0x2728
	TWeakObjectPtr<ACharacter> LastAutoAimTarget; // 0x272c
	bool bEnableEquipInput; // 0x2735
	bool bEnableReloadInput; // 0x2736
	bool bEnableLookInput; // 0x2737
	bool ShouldRetryUpdateTeamMesh; // 0x2738
	int32_t RetryUpdateTeamCount; // 0x273c
	int32_t MaxRetryUpdateTeamAttempts; // 0x2740
	FGrenadeThrowInfo PreparedGrenadeInfo; // 0x2770
	bool bIsCurrentlyThrowingGrenade; // 0x2798
	float DestroyTimer; // 0x279c
	bool bShouldDestroy; // 0x27a0
	int32_t MeleeComboIndex; // 0x27a4
	int32_t MeleeComboMax; // 0x27a8
	float MeleeComboMaxCutoffTime; // 0x27ac
};

struct UHardpointGameOverviewWidget {
	float WaitingToStartTimer; // 0x390
	FText OvertimeText; // 0x398
	ESlateVisibility OvertimeTimeVisibility; // 0x3b0
};

struct UInterpTrackVisibility {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UWBP_SniperVignette_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* CanvasPanel_1; // 0x268
	UImage* Image; // 0x270
	UImage* Image_362; // 0x278
	UImage* IMG_BluredScope; // 0x280
	UImage* IMG_NonBluredScope; // 0x288
	UImage* IMG_SniperVignette; // 0x290
	UCurveFloat* BlurCurve; // 0x298
	float BlurTransition; // 0x2a0
	APromodCharacter* PromodCharacter; // 0x2a8
	bool newVisibility; // 0x2b0
	float Delta Time; // 0x2b4
};

struct UNavigationGraphNodeComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct UPostEventAsync {
	FMulticastInlineDelegate Completed; // 0x30
};

struct UMaterialExpressionDDX {
	FExpressionInput Value; // 0x40
};

struct UKantanCategoryStyleSet {
	TArray<FKantanCategoryStyle> Styles; // 0x30
};

struct UGetGeoLocationAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UBigTimeDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_ComparisonIndicator; // 0x268
	UImage* IMG_PlusIcon; // 0x270
	UTextBlock* TimeDisplayText; // 0x278
	UWidgetSwitcher* WS_ComparisonType; // 0x280
	float Seconds; // 0x288
	bool ShouldColourText; // 0x28c
	bool ShouldUseTriangle; // 0x28d
};

struct USettings_Backdrop__Config_Selected_C {
	UImage* Backdrop-colour-image; // 0x260
	UImage* Breaker; // 0x268
	UImage* Line; // 0x270
	UImage* slant; // 0x278
	UImage* slant_2; // 0x280
};

struct UAnimationSharingSetup {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UOnlinePIESettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UMaterialExpressionConstant {
	float R; // 0x40
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UMaterialExpressionConstant3Vector {
	FLinearColor Constant; // 0x40
};

struct UMedal30BombTDM {
	ATDMGameMode* TDMGameMode; // 0x48
};

struct UAkLuminInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UMapSelectDataAsset {
	TArray<FMapSelectList> Maps; // 0x30
};

struct UInterpTrackInstMove {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct AFireUp_HandCannon {
	ABattalionWeapon* HandCannonWeaponClass; // 0x3c8
	ABattalionWeapon_Instant* SpawnedHandCannon; // 0x3d0
	ESlotType PreviousSlotType; // 0x3d8
	int32_t CachedKills; // 0x3dc
	UAkAudioEvent* HandCannonShot; // 0x3e0
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
	FWorldPSCPool PSCPool; // 0x668
};

struct UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct UClothingAssetBase {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct ULandscapeMeshCollisionComponent {
	FGuid MeshGuid; // 0x520
};

struct ABP_MapEditorGizmo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x510
};

struct UWBP_CargoOverviewScore_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UProgressBar* LeftTeamProgressBar; // 0x268
	UTextBlock* LeftTeamScore; // 0x270
	UTextBlock* LeftTeamScore2; // 0x278
	UImage* MatchTimerBackground; // 0x280
	UImage* PayloadDisabledIcon; // 0x288
	UImage* PayloadProgressBackground; // 0x290
	UImage* PayloadScoreBox; // 0x298
	UImage* PayloadSpeedBox; // 0x2a0
	UImage* PayloadSpeedImage; // 0x2a8
	UTextBlock* PrimaryTimer; // 0x2b0
	UImage* ProgressBorder; // 0x2b8
	UProgressBar* RightTeamProgressBar; // 0x2c0
	UTextBlock* RightTeamScore; // 0x2c8
	UWBP_CargoProgress_C* WBP_CargoProgress; // 0x2d0
	bool bBombPlanted; // 0x2d8
	float BombTimer; // 0x2dc
	ECargoPlayerSideState PlayerSide; // 0x2e0
};

struct UBTDecorator_HasLoSTo {
	FBlackboardKeySelector EnemyKey; // 0x68
};

struct UBoneMaskFilter {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UComponentDelegateBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UARTextureCameraDepth {
	EARDepthQuality DepthQuality; // 0xf8
	EARDepthAccuracy DepthAccuracy; // 0xf9
	bool bIsTemporallySmoothed; // 0xfa
};

struct UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct UGizmoBoxComponent {
	FVector Origin; // 0x460
	FQuat Rotation; // 0x470
	FVector Dimensions; // 0x480
	float LineThickness; // 0x48c
	bool bRemoveHiddenLines; // 0x490
	bool bEnableAxisFlip; // 0x491
};

struct USkeletalBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
};

struct UWBP_FullscreenMovie_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* MediaTexture; // 0x268
	UMediaPlayer* MediaPlayer; // 0x270
	UAkAudioEvent* Wwise Event; // 0x278
	FMulticastInlineDelegate OnPlaybackStarted; // 0x280
	FMulticastInlineDelegate OnPlaybackFinished; // 0x290
	FMulticastInlineDelegate OnPlaybackFailed; // 0x2a0
};

struct UBTService_DefaultFocus {
	char FocusPriority; // 0x98
};

struct UPhysicsThrusterComponent {
	float ThrustStrength; // 0x1f8
};

struct ABombMode_BombSpawn {
	int32_t StageID; // 0x220
};

struct UCameraAnim {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFov; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5b0
};

struct UButtonWidgetStyle {
	FButtonStyle ButtonStyle; // 0x30
};

struct USourceEffectMidSideSpreaderPreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct UBTTask_MoveDirectlyToward {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
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

struct AStaticMeshActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct UMaterialExpressionBlackBody {
	FExpressionInput Temp; // 0x40
};

struct UKantanChart {
	FMargin Margins; // 0x108
	FText ChartTitle; // 0x118
	FMargin TitlePadding; // 0x130
	float UpdateTickRate; // 0x140
};

struct UMovieSceneNiagaraTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMaterialExpressionDistanceToNearestSurface {
	FExpressionInput Position; // 0x40
};

struct UMaterialExpressionShadingPathSwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct ULandscapeLayerInfoObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UMRMeshComponent {
	UMaterialInterface* Material; // 0x450
	UMaterialInterface* WireframeMaterial; // 0x458
	bool bCreateMeshProxySections; // 0x460
	bool bUpdateNavMeshOnMeshUpdate; // 0x461
	bool bNeverCreateCollisionMesh; // 0x462
	UBodySetup* CachedBodySetup; // 0x468
	TArray<UBodySetup*> BodySetups; // 0x470
};

struct UFOVFixedStaticMeshComponent {
	float FOV; // 0x4d0
};

struct UMaterialExpressionSine {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UCircularThrobber {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UAPB_UNDCRifle_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x350
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x3f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x438
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x538
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x748
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x810
	float Targeting Transition; // 0x858
};

struct UNiagaraComponent {
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

struct UMovieScene3DPathSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct AWheeledVehicle {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UNUILevelUp {
	UTexture2D* OldIconTexture; // 0x278
	UTexture2D* NewIconTexture; // 0x280
	FString OldLevel; // 0x288
	FString NewLevel; // 0x298
	bool bNeedImageAnimation; // 0x2a8
};

struct UWBP_CargoPlayerIcons_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BlueBar; // 0x268
	UHorizontalBox* LeftTeamPlayerIcons; // 0x270
	UTextBlock* LeftTeamPlayersAliveValue; // 0x278
	UImage* RedBar; // 0x280
	UHorizontalBox* RightTeamPlayerIcons; // 0x288
	UTextBlock* RightTeamPlayersAliveValue; // 0x290
	UWidgetSwitcher* TeamInfoWidgetSwitcherL; // 0x298
	UWidgetSwitcher* TeamInfoWidgetSwitcherR; // 0x2a0
	UTextBlock* TeamNum1; // 0x2a8
	UTextBlock* TeamNum2; // 0x2b0
	TArray<UWBP_PlayerAliveIcon_C*> LeftTeamWidgets; // 0x2b8
	TArray<UWBP_PlayerAliveIcon_C*> RightTeamWidgets; // 0x2c8
	int32_t MissingWidgets; // 0x2d8
	int32_t AlivePlayers_Team0; // 0x2dc
	int32_t AlivePlayers_Team1; // 0x2e0
	TArray<APlayerState*> PlayersTeam0; // 0x2e8
	TArray<APlayerState*> PlayersTeam1; // 0x2f8
	bool bIsShootout; // 0x308
};

struct UDebug_Button-BLACK-LEFT-JUSTIFIED_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* TEXT_MOTION; // 0x268
	UWidgetAnimation* UNHOVER; // 0x270
	UWidgetAnimation* HOVER; // 0x278
	UTextBlock* BLUETEXT; // 0x280
	UImage* Blur-Steak; // 0x288
	UButton* DEBUG-BUTTON; // 0x290
	UTextBlock* REDTEXT; // 0x298
	UTextBlock* TOPTEXT; // 0x2a0
	FText Text; // 0x2a8
	bool NewVar_1; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct UWBP_GrenadeIndicator_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UCanvasPanel* CanvasPanel_1; // 0x280
	UWBP_GrenadeMarker_C* WBP_GrenadeMarker1; // 0x288
	UWBP_GrenadeMarker_C* WBP_GrenadeMarker2; // 0x290
	UWBP_GrenadeMarker_C* WBP_GrenadeMarker3; // 0x298
	UWBP_GrenadeMarker_C* WBP_GrenadeMarker4; // 0x2a0
	UWBP_GrenadeMarker_C* WBP_GrenadeMarker5; // 0x2a8
	TArray<UWBP_GrenadeMarker_C*> GrenadeMarkers; // 0x2b0
	UHUDTextDataAsset* HUD Colour; // 0x2c0
};

struct UNUIVideoTrainingPlaying {
	EVideoTrainingType CurrentVideoType; // 0x290
	UBattalionSubtitlesDataAsset* CurrentSubtitles; // 0x298
	FText DisplayName; // 0x2a0
	bool SubtitlesVisible; // 0x2b8
};

struct UMaterialExpressionTextureBase {
	UTexture* Texture; // 0x40
};

struct ASceneCapture {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UARPoseComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UNiagaraComponentPool {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct APromodPawn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2dd0
	USphereComponent* BulletFlyByChecker; // 0x2dd8
	UPostProcessComponent* FlashPostProcess; // 0x2de0
	float Timeline_2_Radius_FFD76325486CF6F44C8725AC60C18F7B; // 0x2de8
	ETimelineDirection Timeline_2__Direction_FFD76325486CF6F44C8725AC60C18F7B; // 0x2dec
	UTimelineComponent* Timeline_3; // 0x2df0
	float Timeline_1_Radius_A1AFF3D84AC00D718CB1D287DCABDC6B; // 0x2df8
	ETimelineDirection Timeline_1__Direction_A1AFF3D84AC00D718CB1D287DCABDC6B; // 0x2dfc
	UTimelineComponent* Timeline_2; // 0x2e00
	float Timeline_0_Radius_1D8C7D22412F793B751EA7A874AB4CEE; // 0x2e08
	ETimelineDirection Timeline_0__Direction_1D8C7D22412F793B751EA7A874AB4CEE; // 0x2e0c
	UTimelineComponent* Timeline_1; // 0x2e10
	UDebugUI_C* DebugUI; // 0x2e18
	UWBP_StrafeJumpSpeedFeedback_C* StrafeSpeedUI; // 0x2e20
	bool bLoadPositionHeld; // 0x2e28
	bool bSavePositionHeld; // 0x2e29
	float FOVStore; // 0x2e2c
	UOnFireAwardsDataAsset* FireActionAwardsDataAsset; // 0x2e30
	bool bIgnoreLeanActionRelease; // 0x2e38
	FName SpatialMarkerParentBoneName_1; // 0x2e3c
	FVector SpatialMarkerPositionalOffset_1; // 0x2e44
	bool bIsInSmoke; // 0x2e50
	FVector LastHitLocationOffset; // 0x2e54
	FVector LastHitDirection; // 0x2e60
	FName Last Hit Bone Name; // 0x2e6c
	FVector Last Hit Location; // 0x2e74
	TArray<UMaterialInstanceDynamic*> MeshMID; // 0x2e80
	TArray<UMaterialInstanceDynamic*> DynamicMats; // 0x2e90
	FVector2D MousePos; // 0x2ea0
	UNiagaraSystem* DeathVFX; // 0x2ea8
	FVector2D LeftJoystickPos; // 0x2eb0
	FVector2D RightJoystickPos; // 0x2eb8
	UNiagaraSystem* DashVFX; // 0x2ec0
	char PrevControllerType; // 0x2ec8
	UBP_StunnedCameraModifier_C* StunnedVFX; // 0x2ed0
	UNiagaraSystem* HandCannonDeath; // 0x2ed8
	FHitResult DeathDamageHitResult; // 0x2ee0
	float TimeSinceStartedFiring; // 0x2f6c
	bool IsStartTimeSet; // 0x2f70
	float FinalRumbleIntensity; // 0x2f74
	float Max Rumble Intensity; // 0x2f78
	bool CameraModifierRemoved; // 0x2f7c
	float ArchitypeRumbleMultiplier; // 0x2f80
	float SMGRumbleMultiplier; // 0x2f84
	float RifleRumble Multiplier; // 0x2f88
	float SniperRumble Multiplier; // 0x2f8c
	float PistolRumble Multiplier; // 0x2f90
	float RumbleDuration; // 0x2f94
	ENUM_MovementState MovementState; // 0x2f98
	ENUM_MovementAction MovementAction; // 0x2f99
	ENUM_Gait Gait; // 0x2f9a
	ENUM_MovementState PrevMovementState; // 0x2f9b
	FRotator InAirRotation; // 0x2f9c
	ENUM_MovementAction PrevMovementAction; // 0x2fa8
	ENUM_Gait PrevActualGait; // 0x2fa9
	FVector PreviousVelocity; // 0x2fac
	FVector Acceleration; // 0x2fb8
	float Speed; // 0x2fc4
	bool IsMoving; // 0x2fc8
	FRotator LastVelocityRotation; // 0x2fcc
	float MovementInputAmount; // 0x2fd8
	bool HasMovementInput; // 0x2fdc
	FRotator LastMovementInputRotation; // 0x2fe0
	float AimYawRate; // 0x2fec
	float PreviousAimYaw; // 0x2ff0
	ENUM_Gait AllowedGait; // 0x2ff4
	ENUM_Gait ActualGait; // 0x2ff5
	ENUM_Gait DesiredGait; // 0x2ff6
	float LocalWalkSpeed; // 0x2ff8
	float LocalRunSpeed; // 0x2ffc
	float LocalSprintSpeed; // 0x3000
	float SingleFireWeaponIncrease; // 0x3004
	UMaterialInstanceDynamic* BombScreenMat; // 0x3008
	UMaterialInstanceDynamic* BombScreenMat3P; // 0x3010
	bool bSinglePlayerMode; // 0x3018
	UWBP_JumperMovementHUD_C* JumperHUD; // 0x3020
};

struct UWBP_TugOfWarOverview_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b8
	UTextBlock* CenterTimer; // 0x3c0
	UCanvasPanel* CP_ProgressOverview; // 0x3c8
	UTextBlock* CurrentState; // 0x3d0
	UTextBlock* CurrentState_2; // 0x3d8
	UImage* Image; // 0x3e0
	UImage* Image_2; // 0x3e8
	UImage* IMG_Contested; // 0x3f0
	UImage* IMG_Disabled; // 0x3f8
	UImage* IMG_PassivePushed; // 0x400
	UImage* IMG_PassivePushing; // 0x408
	UImage* IMG_ProgressBackground; // 0x410
	UImage* IMG_Pushed; // 0x418
	UImage* IMG_Pushing; // 0x420
	UImage* IMG_SuddenDeath; // 0x428
	USizeBox* IMG_SuddenDeathContainer; // 0x430
	UHorizontalBox* LeftTeamPlayerIcons; // 0x438
	UImage* Re-EnableImage_MyTeam; // 0x440
	UImage* Re-EnableImage_TheirTeam; // 0x448
	UCanvasPanel* Re-EnableProgress; // 0x450
	UWBP_ProgressBar_C* Re-EnableProgressBar_MyTeam; // 0x458
	UWBP_ProgressBar_C* Re-EnableProgressBar_TheirTeam; // 0x460
	UHorizontalBox* RightTeamPlayerIcons; // 0x468
	UImage* SpeedStateBackgroundImage; // 0x470
	UTextBlock* Timer_2; // 0x478
	UWBP_TugOfWarProgress_C* WBP_TugOfWarProgress; // 0x480
	UWidgetSwitcher* WS_CargoSpeedState; // 0x488
	TArray<UWBP_PlayerAliveIcon_C*> LeftTeamWidgets; // 0x490
	TArray<UWBP_PlayerAliveIcon_C*> RightTeamWidgets; // 0x4a0
	int32_t MissingWidgets; // 0x4b0
	UHUDTextDataAsset* HUDColour; // 0x4b8
	ACargoGameState* CargoGameState_1; // 0x4c0
};

struct UMedalBlowout {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct UFriendlyTemplate {
	ABattalionCharacter* LinkedCharacter; // 0x268
	UMaterialInstanceDynamic* CachedMaterial; // 0x270
	UMaterialInstanceDynamic* CachedMaterialBombCarrier; // 0x278
	ABeacon* Beacon; // 0x280
	float BeaconScaleX; // 0x288
	float BeaconScaleY; // 0x28c
	UImage* Image; // 0x290
	UTextBlock* SpecIDImage; // 0x298
	FString SpecID; // 0x2a0
	UImage* BombImage; // 0x2b0
	FVector2D ScaledPlayerPos; // 0x2b8
	float RotationAngle; // 0x2c0
	float Zoom; // 0x2c4
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2c8
	FLinearColor Tint; // 0x2d0
	float MiniMapScale; // 0x2e0
	float MiniMapZoom; // 0x2e4
	bool RotateMap; // 0x2e8
	bool FiredThisFrame; // 0x2e9
	bool SingleShot; // 0x2ea
	FVector2D LastPos; // 0x2ec
	bool bInActiveArray; // 0x2f4
	float FadeTimer; // 0x2f8
};

struct UGeometryCache {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
};

struct ULoudnessNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UNUIPrompt {
	bool bAccepted; // 0x290
	UTextBlock* TitleText; // 0x298
	UScrollBox* MessageContainer; // 0x2a0
	UTextBlock* MessageText; // 0x2a8
	UNUIButton* AcceptButton; // 0x2b0
	UNUIButton* CancelButton; // 0x2b8
	UWidget* CancelContainer; // 0x2c0
	UWidget* SmokeBackdrop; // 0x2c8
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

struct UThrobber {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct UMaterialExpressionComponentMask {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UStereoLayerShapeEquirect {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UGizmoConstantFrameAxisSource {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UDatasmithDecalComponentTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct UMedal25BombTDM {
	ATDMGameMode* TDMGameMode; // 0x48
};

struct ABattalionTutorialPickup {
	ABattalionWeapon* WeaponClass; // 0x220
	ABattalionWeapon* Weapon; // 0x228
	USceneComponent* SceneComponent; // 0x230
	USkeletalMeshComponent* MeshComponent; // 0x238
	UBoxComponent* BoxCollision; // 0x240
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

struct UMaterialExpressionMapARPassthroughCameraUV {
	FExpressionInput Coordinates; // 0x40
};

struct UMedalInvincible {
	ATDMGameMode* TDMGameMode; // 0x48
	TArray<FInvincibleTracker> InvincibleTrackers; // 0x50
};

struct UPlayFabProfilesAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x118
	UPlayFabJsonObject* RequestJsonObj; // 0x120
	UPlayFabJsonObject* ResponseJsonObj; // 0x128
};

struct USMConduitInstance {
	bool bEvalWithTransitions; // 0xc0
	bool bCanEvaluate; // 0xc1
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

struct UBTDecorator_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UParticleModuleAccelerationConstant {
	FVector Acceleration; // 0x38
};

struct UBTService_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UDatasmithGLTFSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
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

struct UInterpTrackInstFloatAnimBPParam {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
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
	float DeepShadowLayerDistribution; // 0x218
	float IndirectLightingIntensity; // 0x21c
	float VolumetricScatteringIntensity; // 0x220
	int32_t SamplesPerPixel; // 0x224
};

struct UNUIWidgetReferences {
	TArray<UObject*> Templates; // 0x28
};

struct UInteractiveToolPropertySet {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct AHardpointGameMode {
	float FirstHardpointWaitTime; // 0xd38
	bool WinOnTeamEmptyShootout; // 0xd3c
	float HardpointCycleTime; // 0xd40
	float PreviewNextHardpointTime; // 0xd48
	float HardpointScoreInterval; // 0xd4c
	float HardpointScorePerTick; // 0xd50
	float PreShootoutTime; // 0xd58
	bool bAllowOvertime; // 0xd5c
	float HardpointOvertimeRoundTime; // 0xd60
	float HardpointOvertimeScoreLimit; // 0xd64
	float HardpointMarkerTime; // 0xd68
	bool bUsingCustomShootout; // 0xd6c
	TArray<AHardpointZone*> HardpointZones; // 0xd70
	int32_t CurrentZoneIndex; // 0xd80
	AHardpointZone* CurrentActiveZone; // 0xd88
	AHardpointZone* NextZone; // 0xd90
	float LastRoundEndTime; // 0xd98
	UAkComponent* DefaultAkComp; // 0xda0
	UAkAudioEvent* GameStartSound; // 0xda8
	UAkAudioEvent* StartGameInstructionsSound; // 0xdb0
	UAkAudioEvent* FirstPointSpawnedSound; // 0xdb8
	UAkAudioEvent* PointMovingShortlySound; // 0xdc0
	UAkAudioEvent* PointUnlockedSound; // 0xdc8
	UAkAudioEvent* CapturedByEnemySound; // 0xdd0
	UAkAudioEvent* CapturedByFriendlySound; // 0xdd8
	UAkAudioEvent* GameAlmostEndedEvent; // 0xde0
	UAkAudioEvent* StopGameAlmostEndedEvent; // 0xde8
	UAkAudioEvent* PointContestedSound; // 0xdf0
	UAkAudioEvent* EnemyNearingVictorySound; // 0xdf8
	UAkAudioEvent* StartRoundEndMusic; // 0xe00
	UAkAudioEvent* StopRoundEndMusic; // 0xe08
	UAkAudioEvent* OvertimeAnnouncerSound; // 0xe10
	float StopSoundTime; // 0xe18
	AHardpointGameState* HardpointGameState; // 0xe28
};

struct USplineMeshComponent {
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

struct UNUIGameTimer {
	FString GameTimer; // 0x278
	FLinearColor Color; // 0x288
};

struct UDeviceProfile {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct AController {
	APlayerState* PlayerState; // 0x228
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x238
	FName StateName; // 0x248
	APawn* Pawn; // 0x250
	ACharacter* Character; // 0x260
	USceneComponent* TransformComponent; // 0x268
	FRotator ControlRotation; // 0x288
	char bAttachToPawn : 1; // 0x294
};

struct ABombHUD {
	UNUIBombIcon* bombicon; // 0x5f8
	UNUIBombIcon* BombIconClass; // 0x600
};

struct UHUDPlayerName_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UTextBlock* PlayerHealth; // 0x2c0
	UTextBlock* PlayerName; // 0x2c8
	FNone* PlayerPhaseWidgetConsole_142; // 0x2d0
	UCanvasPanel* SpectatorInfo; // 0x2d8
	UTextBlock* TextBlock_749; // 0x2e0
	UImage* Weapon; // 0x2e8
	UWidgetSwitcher* WidgetSwitcher_313; // 0x2f0
	FNone* XrayPlayername; // 0x2f8
	FSlateColor PlayerNameColour; // 0x300
};

struct UBasicOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UAnimNotify_PlayMontageNotify {
	FName NotifyName; // 0x38
};

struct UMedal1v5Clutch {
	AWartideGameMode* WartideGameMode; // 0x48
	ABattalionPlayerControllerGMBase* ClutcherPC; // 0x50
};

struct UGizmoCircleComponent {
	FVector Normal; // 0x460
	float Radius; // 0x46c
	float Thickness; // 0x470
	int32_t NumSides; // 0x474
	bool bViewAligned; // 0x478
	bool bOnlyAllowFrontFacingHits; // 0x479
};

struct UAnimationAsset {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UAvfMediaSettings {
	bool NativeAudioOut; // 0x28
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

struct UWBP_JumperGameOverview_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* Count_Second; // 0x2f8
	UImage* Image; // 0x300
	UImage* Image_2; // 0x308
	UImage* Image_144; // 0x310
	UImage* Image_390; // 0x318
	UTextBlock* TextBlock_JumperCheckpointCount; // 0x320
	UTextBlock* TextBlock_JumperRespawnCount; // 0x328
	UTextBlock* TextBlock_JumperTimer; // 0x330
	UTextBlock* TextBlock_JumperTimer_2; // 0x338
	UTextBlock* TextBlock_JumperTimer_3; // 0x340
	UTextBlock* TextBlock_JumperTimer_4; // 0x348
	UTextBlock* TextBlock_JumperTimer_5; // 0x350
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

struct UMovieSceneMediaTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x80
};

struct UMaterialExpressionHairAttributes {
	char bUseTangentSpace : 1; // 0x40
};

struct UMedalBombTechnician {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct UNUISettings {
	FSoftClassPath WelcomeScreenClass; // 0x38
	FSoftClassPath LoadingScreenClass; // 0x50
	FSoftClassPath PromptClass; // 0x68
	FSoftClassPath PauseMenuClass; // 0x80
	FSoftClassPath DebugMenuClass; // 0x98
	TSoftObjectPtr<UMediaPlayer> SmokeOverlayPlayer; // 0xb0
	TSoftObjectPtr<UMediaSource> SmokeOverlayVideo; // 0xd8
	TSoftObjectPtr<UMediaPlayer> SmokeBackdropPlayer; // 0x100
	TSoftObjectPtr<UMediaSource> SmokeBackdropVideo; // 0x128
};

struct UUserDefinedStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct UAkAssetData {
	uint32_t CachedHash; // 0x28
};

struct UEnvQueryGenerator_ActorsOfClass {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
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

struct UMedalLoneSurvivor {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct AMapEditorPawn {
	int32_t MaxUndoHistory; // 0x2a8
	FGameplayTag GeometryObjectTag; // 0x2ac
	AMapEditorObjectPreview* ObjectPreviewClass; // 0x2b8
	AMapEditorGizmo* MapEditorGizmoClass; // 0x2c0
	float CursorTraceDistance; // 0x2c8
	float CursorTraceFailedDistance; // 0x2cc
	FHitResult LastCursorHitResult; // 0x2d0
	FVector2D CachedCursorScreenPosition; // 0x35c
	FVector2D LastCursorScreenPosition; // 0x364
	FMapEditorObjectData SpawningObjectData; // 0x370
	bool bSpawningObject; // 0x410
	AMapEditorObjectPreview* ObjectPreview; // 0x418
	TArray<AMapEditorObject*> SelectedObjects; // 0x420
	AMapEditorController* MapEditorController; // 0x430
	AMapEditorGizmo* MapEditorGizmo; // 0x438
	TArray<AMapEditorObject*> CopyClipboard; // 0x440
	TArray<FMapEditorUndoableAction> UndoHistory; // 0x450
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

struct UMedalKingSlayer {
	AFFAGameMode* FFAGameMode; // 0x48
};

struct UParticleModuleVelocityBase {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct ALandscapeMeshProxyActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
};

struct APromodHUD {
	UHUDMaster* MasterHUDWidget; // 0x310
	UHUDMaster* MasterHUDClass; // 0x318
	UHUDMaster* JumperHUDClass; // 0x320
	UHUDMaster* SNDHUDClass; // 0x328
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct UWrapBox {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UControlPointMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4d0
};

struct UAkAudioType {
	uint32_t ShortID; // 0x28
	TArray<UObject*> UserData; // 0x30
};

struct UCartesianPlot {
	UObject* DataSource; // 0x368
};

struct UNUIMiniMap {
	TArray<ABattalionSmokeGrenade*> Smokes; // 0x278
	TArray<UMapSmokeWidget*> SmokeWidgets; // 0x288
	TArray<UWorldMarkerComponent*> WorldMarkers; // 0x298
	TArray<UMapMarkerWidget*> MarkerWidgets; // 0x2a8
	FVector2D Position; // 0x2b8
	FVector2D DesiredPosition; // 0x2c0
	float RotationAngle; // 0x2c8
	ABeacon* Beacon; // 0x2d0
	UCanvasPanel* ThisCanvas; // 0x2d8
	UMaterialInstanceDynamic* CachedMaterial; // 0x2e0
	TArray<UFriendlyTemplate*> FrenemyImages; // 0x2e8
	float Scale; // 0x2f8
	float Zoom; // 0x2fc
	UImage* PlayerIconImage; // 0x300
	UImage* PlayerIconBombOutline; // 0x308
	FLinearColor PlayerLocation; // 0x310
	FVector2D ScaledPosition; // 0x320
	FVector2D NormalisedPosition; // 0x328
	float MiniMapScale; // 0x330
	float MiniMapZoom; // 0x334
	TArray<ABattalionCharacter*> Frenemies; // 0x338
	bool RotateMap; // 0x348
	bool bShouldShowSmokes; // 0x349
	ABattalionPlayerControllerGMBase* OwnerPC; // 0x358
};

struct UParticleModuleRotationOverLifetime {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UOn_Fire_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image; // 0x268
	UImage* Image_97; // 0x270
	UImage* Image_420; // 0x278
	UMediaPlayer* MediaPlayer; // 0x280
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

struct UChaosGameplayEventDispatcher {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct ACTFHUD {
	UNUIFlagIcon* FlagIcon; // 0x638
	UBattalionDamageType* FlagDmgTypeClass; // 0x640
	UBattalionDamageType* FlagDmgType; // 0x648
	UNUICTFFlagStates* CTFFlagStates; // 0x650
	UNUICTFGameOverview* CTFGameOverview; // 0x658
	UNUIFlagIcon* FlagIconClass; // 0x660
	UNUICTFFlagStates* CTFFlagStatesClass; // 0x668
	UNUICTFGameOverview* CTFGameOverviewClass; // 0x670
};

struct ACTFMode_FlagZone {
	ACTFMode_Flag* flag; // 0x220
	UBoxComponent* CollisionComp; // 0x228
	char TeamAllegiance; // 0x230
	UWorldMarkerComponent* DefaultWorldMarker; // 0x238
};

struct UBattalionSettings {
	FMulticastInlineDelegate OnSettingsChanged; // 0x28
	FString Language; // 0x38
	FString Resolution; // 0x48
	int32_t DisplayMode; // 0x58
	bool Vsync; // 0x5c
	int32_t DisplayIndex; // 0x60
	int32_t NvReflexMode; // 0x64
	float FPS; // 0x68
	int32_t ResolutionQuality; // 0x70
	int32_t MSAA; // 0x74
	float Gamma; // 0x78
	bool bBloom; // 0x7c
	bool bMotionBlur; // 0x7d
	bool bLensFlare; // 0x7e
	bool bKillAberration; // 0x7f
	float ColorStrength; // 0x80
	float ColorTint; // 0x84
	float WorldContrast; // 0x88
	float SkyFade; // 0x8c
	float Vignette; // 0x90
	float LightbouncePower; // 0x94
	float AOStrength; // 0x98
	float LensFlareIntensity; // 0x9c
	float ExposureAmount; // 0xa0
	float Sharpness; // 0xa4
	bool bShowWeaponAndArms; // 0xa8
	float MasterVolume; // 0xac
	float MenuMusicVolume; // 0xb0
	float GameMusicVolume; // 0xb4
	FString AudioOutputDevice; // 0xb8
	bool MuteSelf; // 0xc8
	bool MuteAll; // 0xc9
	float MouseSensitivity; // 0xd8
	FString MouseSensitivityScalingOption; // 0xe0
	float MouseSensitivityRelativeAmount; // 0xf0
	float MouseADSSensitivity; // 0xf4
	float MouseScopedSensitivity; // 0xf8
	bool bMouseInvertVertical; // 0xfc
	bool bController; // 0xfd
	FName ControllerButtonConfig; // 0x100
	FName ControllerStickConfig; // 0x108
	bool bUseRadialDeadzone; // 0x110
	FString ControllerAutoAimType; // 0x118
	float ControllerSensitivity; // 0x128
	float ControllerHorizontalSensitivity; // 0x12c
	float ControllerVerticalSensitivity; // 0x130
	float ControllerADSSensitivity; // 0x134
	float ControllerScopedSensitivity; // 0x138
	bool bControllerInvertVertical; // 0x144
	bool bControllerVibration; // 0x145
	FString WeaponKeybindsOption; // 0x148
	float ControllerDeadZone; // 0x158
	bool bCrossPlay; // 0x15c
	bool bCrossPlayPrompted; // 0x15d
	float FOV; // 0x160
	bool bFixedFOVWeaponView; // 0x164
	bool bLeftHandWeaponView; // 0x165
	bool bHeadBob; // 0x166
	bool bShowHUD; // 0x167
	bool bShowTopBar; // 0x168
	bool bShowMinimap; // 0x169
	bool bMinimapFixed; // 0x16a
	bool bShowKillFeed; // 0x16b
	bool bShowKillMessage; // 0x16c
	bool bShowChat; // 0x16d
	bool bShowVoiceFeed; // 0x16e
	bool bShowCrosshair; // 0x16f
	bool bShowPlayerNames; // 0x170
	bool bShowGameStatus; // 0x171
	bool bShowInteraction; // 0x172
	bool bShowInventory; // 0x173
	bool bShowScoreAward; // 0x174
	bool bShowScreenEffects; // 0x175
	bool bShowGrenadeIcon; // 0x176
	bool bShowVault; // 0x177
	bool bShowGameTimer; // 0x178
	bool bShowPickup; // 0x179
	bool bShowMarkers; // 0x17a
	bool bShowDistanceOnMarker; // 0x17b
	bool bShowInventoryWeapons; // 0x17c
	bool bShowPlayersAliveText; // 0x17d
	bool bShowCallOut; // 0x17e
	bool bShowObjectiveScores; // 0x17f
	bool bShowPlayerRanking; // 0x180
	bool bShowNetworkStatus; // 0x181
	bool bShowMedalAwards; // 0x182
	bool bShowSpectatorHUD; // 0x183
	bool bLoadoutAlwaysVisible; // 0x184
	bool bShowBulletTracers; // 0x185
	bool bShowGizmoHelpUI; // 0x186
	bool bShowStrafeHelpUI; // 0x187
	bool bShowSystemTime; // 0x188
	bool bShowMovementHelpUI; // 0x189
	bool bShowFrameTime; // 0x18a
	bool bShowClientFPS; // 0x18b
	bool bShowIdleTime; // 0x18c
	bool bShowGameThreadTime; // 0x18d
	bool bShowRenderThreadTime; // 0x18e
	bool bShowRHIThreadTime; // 0x18f
	bool bShowGameLatency; // 0x190
	bool bShowRenderLatency; // 0x191
	bool bShowGameToRenderLatency; // 0x192
	bool bShowGPUTemp; // 0x193
	TArray<FActionBind> ActionBinds; // 0x198
	TArray<FAxisBind> AxisBinds; // 0x1a8
	TMap<FKey, FString> DebugConsoleCommandBinds; // 0x1b8
	UNUISettingsMenu* SettingsMenu; // 0x208
	UBattalionGameInstance* BattInstance; // 0x210
	TMap<FName, FString> Profiles; // 0x218
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

struct APromodGameMode {
	int32_t AssaultClassLimit; // 0x9d0
	int32_t BreacherClassLimit; // 0x9d4
	int32_t ReconClassLimit; // 0x9d8
	int32_t MinPlayersForReporting; // 0x9dc
	float TimeToRegenQuickUtil; // 0x9e0
	bool SpectateTeamAllowed; // 0x9e4
	float RoundEndingTickingTime; // 0x9e8
	float RoundEndingTickingTimePeriod; // 0x9ec
	float ChangeTeamCooldownTime; // 0x9f0
	APromodGameState* PromodGameState; // 0x9f8
	bool bReportingEnabled; // 0xa00
	bool bForceEnableReporting; // 0xa01
	bool bTryHardMode; // 0xa02
	int32_t NumRegularRoundsPlayed; // 0xa04
	int32_t TotalAbilitiesUsed; // 0xa08
	int32_t NumMatchScoreReports; // 0xa0c
	int32_t TotalPlayerMatchScore; // 0xa10
	TMap<FName, int32_t> AbilityCounters; // 0xa18
	int32_t InitialNumRounds; // 0xa68
	float DelayPeriodBetweenInitLoadouts; // 0xa6c
	FTimerHandle TimerHandle_FeedbackScreenTimeout; // 0xa70
	APromodClassSettings* CleanClassSettings; // 0xa80
	UAkAudioEvent* GameLossSound; // 0xa90
	UAkAudioEvent* GameWinSound; // 0xa98
	UAkAudioEvent* FlawlessWinSound; // 0xaa0
	UAkAudioEvent* MatchStartingSound; // 0xaa8
	UAkAudioEvent* LastRoundOfHalfSound; // 0xab0
	UAkAudioEvent* MatchPointSound; // 0xab8
	UAkAudioEvent* StratTimeSound; // 0xac0
	UAkAudioEvent* RoundLossSound; // 0xac8
	UAkAudioEvent* RoundWinSound; // 0xad0
	UAkAudioEvent* RoundStartSound; // 0xad8
	UAkAudioEvent* WarmupSound; // 0xae0
	UAkAudioEvent* ThirtySecondsRemainingSound; // 0xae8
	UAkAudioEvent* AceSound; // 0xaf0
	UAkAudioEvent* BombDroppedSound; // 0xaf8
	UAkAudioEvent* BombPlantedSoundA; // 0xb00
	UAkAudioEvent* BombPlantedSoundB; // 0xb08
	UAkAudioEvent* ClutchSound; // 0xb10
	UAkAudioEvent* LastPlayerStandingSound; // 0xb18
	UAkAudioEvent* OneEnemyRemainingSound; // 0xb20
	UAkAudioEvent* RoundCountdownTick; // 0xb28
	UAkAudioEvent* EndingRoundTickSound; // 0xb30
	UAkAudioEvent* StopSoundsRoundEnd; // 0xb38
	bool ShootOutFirstRoundPlayed; // 0xb4b
	TArray<ABattalionPlayerControllerGMBase*> CachedPlayers; // 0xc98
	TArray<FInitializeLoadoutQueueItem> InitializeLoadoutQueue; // 0xca8
	TArray<FMapToModeSchema> MapsWithSupportedModes; // 0xcb8
	UGameEventRecorder* GameEventRecorder; // 0xcc8
	float TimeSinceLastLoadoutInitialization; // 0xcd0
};

struct AARSharedWorldGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct ABattalionWeapon_Instant {
	FDeathAnim KilledCharacterDeathAnim; // 0x7d0
	bool bDeathAnimOverridden; // 0x810
	FInstantHitInfo HitNotify; // 0x814
	ABattalionImpactEffect* ImpactTemplate; // 0x830
	ABattalionImpactEffect* FailedImpactTemplate; // 0x838
	ABattalionBloodEffect* ImpactBloodTemplate; // 0x840
	ABattalionBloodEffect* ImpactBloodWoundTemplate; // 0x848
	UParticleSystem* TrailFX; // 0x850
	UParticleSystem* TracerFX; // 0x858
	UParticleSystem* TracerFX1P; // 0x860
	float TracerFX1P_Chance; // 0x868
	FName TrailTargetParam; // 0x86c
	TArray<UParticleSystemComponent*> TracerTickUpdates; // 0x878
	EWeaponArchetype WeaponCategory; // 0x888
};

struct UMapViewComponent {
	FMulticastInlineDelegate OnVisibleCategoriesChanged; // 0x468
	FMulticastInlineDelegate OnViewSizeChanged; // 0x478
	FMulticastInlineDelegate OnViewDestroyed; // 0x488
	EMapViewRotationMode RotationMode; // 0x498
	FRotator FixedRotation; // 0x49c
	float InheritedYawOffset; // 0x4a8
	bool bSupportZooming; // 0x4ac
	USceneComponent* HeightProxy; // 0x4b0
	float BackgoundLevelCacheLifetime; // 0x4b8
	TSet<AMapBackground*> MapBackgrounds; // 0x568
	TMap<AMapBackground*, int32_t> PositionOnMultiLevelBackgrounds; // 0x5b8
};

struct UEnvQueryTest_PathfindingBatch {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UControllerLayoutLabelText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* CustomLabel; // 0x268
	UTextBlock* DefaultLabel; // 0x270
	UWidgetSwitcher* WidgetSwitcher_138; // 0x278
	ETextJustify TextJustification; // 0x280
};

struct UParticleModuleSize {
	FRawDistributionVector StartSize; // 0x30
};

struct UWBP_PingSelection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_RadialMenu_C* WBP_RadialMenu; // 0x268
	TArray<EPingType> PingTypes; // 0x270
	UPromodPingablesDataAsset* PingablesDataAsset; // 0x280
	TArray<FSlateBrush> RadialMenuItems; // 0x288
};

struct UAISense_Touch {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UChildActorComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UMaterialFunction {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct UHUDWorldMarker {
	UCurveFloat* MarkerAdsVisibilityCurve; // 0x260
	UCurveFloat* MarkerVisibilityCurve; // 0x268
	UWorldMarkerComponent* WorldMarkerReference; // 0x270
	bool bHideOnFinishLerp; // 0x278
	bool bStuckToScreen; // 0x279
	UMaterialInstanceDynamic* ProgressMaterial; // 0x280
	TArray<UMaterialInstanceDynamic*> ProgressMaterials; // 0x288
	UWidget* MarkerSizeReference; // 0x298
	float FadoutTime; // 0x2a0
	float AffixTime; // 0x2a4
	float MinScale; // 0x2a8
	float MaxScale; // 0x2ac
	float ScaleEdgeDistance; // 0x2b0
	float MinScaleDistance; // 0x2b4
	float MaxScaleDistance; // 0x2b8
	float MarkerScaleMultiplier; // 0x2bc
	float OverviewHeight; // 0x2c0
	float MiniMapRadius; // 0x2c4
	FVector2D MiniMapOffset; // 0x2c8
	float ProjectionHorizontalBlendCone; // 0x2d0
	float ProjectionVerticalBlendCone; // 0x2d4
	float AzimuthBlendAngle; // 0x2d8
	float AzimuthBlendCone; // 0x2dc
	float MaxAlpha; // 0x2e0
	float MinAlpha; // 0x2e4
	float FadeAlpha; // 0x2e8
	float FadeTime; // 0x2ec
	float AimMaxAlpha; // 0x2f0
	float AimMinAlpha; // 0x2f4
	float AimFovealRadius; // 0x2f8
	float AimParafovealBelt; // 0x2fc
	float HipMaxAlpha; // 0x300
	float HipMinAlpha; // 0x304
	float HipFovealRadius; // 0x308
	float HipParafovealBelt; // 0x30c
	float ArrowFadeTime; // 0x310
	UBattalionGameInstance* BattInstance; // 0x318
	UBattalionSettings* BattSettings; // 0x320
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

struct UInteractiveTool {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct UEnvQueryGenerator_Composite {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UWelcomePopup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWidgetAnimation* Outro; // 0x278
	UWidgetAnimation* Intro; // 0x280
	UAccept_C* Accept; // 0x288
	UTextButton_C* AcceptButton; // 0x290
	UCancel_C* Cancel; // 0x298
	UTextButton_C* CancelButton; // 0x2a0
	UTextBlock* DescriptText; // 0x2a8
	UTextBlock* TextBlock_1; // 0x2b0
	UTextBlock* TitleText; // 0x2b8
	UWBP_IDontKnow_PopupButton_C* WBP_IDontKnow_PopupButton; // 0x2c0
	bool InitializedSound; // 0x2c8
};

struct UBTTask_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UMedalDefender {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct UFindSessionsCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UParticleModuleLocationEmitterDirect {
	FName EmitterName; // 0x30
};

struct URendererOverrideSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
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

struct UAchievementQueryCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UMaterialExpressionArctangent2Fast {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct APaperTileMapActor {
	UPaperTileMapComponent* RenderComponent; // 0x220
};

struct UMovieSceneParameterSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct USourceEffectPhaserPreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct ACullDistanceVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
};

struct UPromodAllFireUpsDataAsset {
	TArray<UPromodFireUpDataAsset*> FireUps; // 0x30
};

struct UPLAY-MM-Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Simulation-text-off; // 0x268
	UWidgetAnimation* Simulation-activated; // 0x270
	UWidgetAnimation* Pulse; // 0x278
	UWidgetAnimation* Clicked; // 0x280
	UWidgetAnimation* SingleFrameSelected; // 0x288
	UWidgetAnimation* Default; // 0x290
	UImage* Backdrop-colour-image; // 0x298
	UImage* Backdrop-colour-image_2; // 0x2a0
	UImage* MM_ICON_2; // 0x2a8
	UButton* PM-BUTTON; // 0x2b0
	UCanvasPanel* Selected-Size-Canvas; // 0x2b8
	UCanvasPanel* UNSelected-Size-Canvas; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct ABattalionGameMode {
	UAkAudioEvent* WorldLoadingEvent; // 0x2c0
	TArray<ABattalionPlayerControllerGMBase*> Spectators; // 0x2c8
	TArray<ABattalionPlayerControllerGMBase*> CountdownToStartPlayersCinematic; // 0x2e8
	bool HasStartedCountdownToStartCinematic; // 0x2f8
	TArray<FMapModeVoteInfo> MapModeVotes; // 0x318
	bool MapModeVoteSuccessful; // 0x328
	int32_t NumTravellingPlayers; // 0x32c
	FString PendingTravelURL; // 0x330
	bool PendingTravelAbsolute; // 0x340
	float PendingTravelTimer; // 0x344
	float PendingTravelTime; // 0x348
	bool bPendingTravel; // 0x34c
	int32_t PreviousTravelTimerSeconds; // 0x350
	bool NextModeSelectedByCmd; // 0x354
	bool FillEmptySlotsWithBots; // 0x355
	bool AllowBots; // 0x356
	bool bAllowGlobalVoiceChat; // 0x357
	bool bCheatsEnabled; // 0x358
	bool StratMode; // 0x359
	FString MarketPath; // 0x360
	bool ManualTravelOnly; // 0x370
	bool ShouldPickRandomSubmode; // 0x371
	TArray<FString> AdminSteamIDs; // 0x378
	int32_t FailedConnectCleanupAttempts; // 0x388
	bool MapVotingEnabled; // 0x38c
	int32_t NumMapOptionsToGive; // 0x390
	int32_t PlayerKillScore; // 0x394
	int32_t PlayerAssistScore; // 0x398
	int32_t DeathScore; // 0x39c
	int32_t RoundWinScore; // 0x3a0
	int32_t RoundDrawScore; // 0x3a4
	int32_t RoundLossScore; // 0x3a8
	int32_t GameWinScore; // 0x3ac
	int32_t GameDrawScore; // 0x3b0
	int32_t GameLossScore; // 0x3b4
	int32_t AttackObjectiveScore; // 0x3b8
	int32_t DefendObjectiveScore; // 0x3bc
	int32_t ScoreToWinRound; // 0x3c0
	int32_t NumRounds; // 0x3c4
	int32_t SwapSidesRound; // 0x3c8
	int32_t NumTeams; // 0x3cc
	FName StartType; // 0x3d0
	int32_t MaxPlayersPerTeam; // 0x3d8
	int32_t NumSpectatorSlots; // 0x3dc
	int32_t NumNations; // 0x3e0
	bool FriendlyFire; // 0x3e4
	int32_t MaxGunsOnGround; // 0x3e8
	int32_t MaxGrenadesOnGround; // 0x3ec
	int32_t RequiredPlayers; // 0x3f0
	float RespawnDelay; // 0x3f4
	bool EnableEnemyPlayerNames; // 0x3f8
	bool DisableTeamSwaping; // 0x3f9
	float RandomSpawnInfluence; // 0x3fc
	float EnemySpawnInfluenceDistance; // 0x400
	float EnemySpawnInfluenceValue; // 0x404
	float EnemySpawnInfluenceExponent; // 0x408
	float EnemySpawnWeakForceInfluenceDistance; // 0x40c
	float EnemySpawnWeakForceInfluenceValue; // 0x410
	float EnemySpawnWeakForceInfluenceExponent; // 0x414
	float AllySpawnInfluenceExponent; // 0x418
	float AllySpawnInfluenceDistance; // 0x41c
	float AllySpawnInfluenceValue; // 0x420
	float PreviousSpawnInfluence; // 0x424
	float PreviousSpawnAreaInfluence; // 0x428
	float PreviousSpawnAreaDistance; // 0x42c
	float PreviousSpawnAreaInfluenceExponent; // 0x430
	float TeamDeathAreaTimeOfRelevance; // 0x434
	float TeamDeathAreaInfluence; // 0x438
	float TeamDeathAreaDistance; // 0x43c
	float TeamDeathAreaInfluenceExponent; // 0x440
	float TeamDeathLastSpawnAreaTimeOfRelevance; // 0x444
	float TeamDeathLastSpawnAreaInfluence; // 0x448
	float TeamDeathLastSpawnAreaDistance; // 0x44c
	float TeamDeathLastSpawnAreaInfluenceExponent; // 0x450
	int32_t IdlePlayerTimeout; // 0x454
	int32_t CountdownToStartTime; // 0x458
	int32_t SetupRoundTime; // 0x45c
	int32_t CinematicSetupRoundTime; // 0x460
	int32_t StratTime; // 0x464
	int32_t RoundTime; // 0x468
	int32_t PostRoundTime; // 0x46c
	int32_t WarmupRespawnTime; // 0x470
	int32_t PostMatchTime; // 0x474
	int32_t WaitingToStartTimer; // 0x478
	int32_t VoteTime; // 0x47c
	bool VoteKickEnabled; // 0x480
	float CharacterDestroyTime; // 0x484
	float PassiveFireUpEarnTime; // 0x488
	float MultikillTimer; // 0x48c
	bool bUseShootout; // 0x490
	float ShootoutRoundTime; // 0x494
	float ShootoutSetupTime; // 0x498
	float ShootoutTransitionTime; // 0x49c
	float ShootoutPostRoundTime; // 0x4a0
	float OverviewAndShootoutTitleScreenTimes; // 0x4a4
	bool CinematicsEnabled; // 0x4a8
	float CountdownToStartCinematicDelay; // 0x4ac
	bool OutlineAllowed; // 0x4b0
	bool GrenadeLinesAllowed; // 0x4b1
	bool LockedToFirstPerson; // 0x4b2
	float SpectatorTransferTime; // 0x4b4
	bool SpectatorTeamEnabled; // 0x4b8
	bool ForceFreeCamOnSpectatorStart; // 0x4b9
	float EnemyWeaponDamageModifier; // 0x4bc
	float SelfGrenadeDamageScale; // 0x4c0
	float SelfOtherDamageScale; // 0x4c4
	float FriendlyBulletDamageScale; // 0x4c8
	float FriendlyGrenadeDamageScale; // 0x4cc
	float InactivePlayerStateLifeSpan; // 0x4d0
	bool DisableWeaponDrop; // 0x4d4
	bool SendSafeString; // 0x4d5
	bool AllPlayersInvulnerable; // 0x4d6
	bool WinOnTeamEmpty; // 0x4d7
	int32_t NumBots; // 0x4d8
	float TakeItemFromBotDistance; // 0x4dc
	FString DefaultReplayName; // 0x4e0
	float RecordHz; // 0x4f0
	float CheckpointDelay; // 0x4f4
	bool RecordReplays; // 0x4f8
	int32_t ProScoreWin; // 0x4fc
	int32_t ProScoreDraw; // 0x500
	int32_t ProScoreLoss; // 0x504
	FString CurrentMapName; // 0x508
	FString CurrentModeName; // 0x518
	TArray<FString> TeamNames; // 0x528
	TArray<FString> TeamColors; // 0x538
	FMapDataCollection MapDataCollection; // 0x548
	TArray<ENationType> TeamNations; // 0x558
	float AdditionalRoundTime; // 0x568
	TArray<ABattalionPlayerControllerGMBase*> CurrentBots; // 0x5b8
	TArray<ABattalionPlayerControllerGMBase*> CurrentPlayers; // 0x5c8
	TArray<ABattalionCharacter*> AliveCharacters; // 0x5d8
	FVoteInfo CurrentVote; // 0x5e8
	ABattalionGameState* BattalionGameState; // 0x660
	ABattalionMarket* Market; // 0x670
	FSpectatorRules SpectatorRules; // 0x678
	UCurveFloat* NearlyEndedTimeCurve; // 0x688
	UCurveFloat* NearlyEndedScoreCurve; // 0x690
	ABattalionLoadoutSystem* LoadoutSystem; // 0x6a0
	ABattalionLoadoutSystem* LoadoutSystemClass; // 0x6a8
	ABattalionMarket* MarketClass; // 0x6b0
	TArray<FRecentKilledEvent> RecentKilledEvents; // 0x6b8
	TArray<ABattalionPlayerState*> EndGameMVPs; // 0x6c8
	TArray<APlayerState*> InactivePlayerArray; // 0x6d8
	FName MatchState; // 0x6e8
	FGuid MatchID; // 0x6f0
	FName PreviousMatchState; // 0x700
	int32_t NumPlayers; // 0x708
	TMap<EOnlinePlatform, FPlatformMatchSession> MatchSessions; // 0x710
	int32_t NumReadyPlayers; // 0x764
	TArray<FPendingRespawnInfo> PendingRespawns; // 0x768
	TArray<FPendingSpectateInfo> PendingSpectators; // 0x778
	TArray<FPendingKickInfo> PendingKicks; // 0x788
	UAkAudioEvent* AlliesWinEvent; // 0x798
	UAkAudioEvent* AxisWinEvent; // 0x7a0
	UAkAudioEvent* DrawEvent; // 0x7a8
	UAkAudioEvent* GameStartedVOEvent; // 0x7b0
	UAkAudioEvent* HalfTimeVOEvent; // 0x7b8
	bool NextRoundTimeout_Techncial; // 0x7c0
	bool NextRoundTimeout_Tactical; // 0x7c1
	bool PlayedCountdownMusic; // 0x7c2
	float PeriodicalTickTimer; // 0x7c4
	float TeamSpecIDCheckTimer; // 0x7c8
	float TeamSpecIDCheckReset; // 0x7cc
	float PassiveEarnFireUpTimer; // 0x7d0
	UBattalionGameInstance* BattInstance; // 0x7d8
	UBattalionCommandManager* CommandManager; // 0x7e0
	UBattalionMedalManager* MedalManager; // 0x7e8
	UBattalionMedalsDataAsset* MedalDataAsset; // 0x7f0
	TArray<APerfTestLocation*> PerfTextLocs; // 0x800
	FTimerHandle TimedScoreAwardHandle; // 0x818
	UPromodGameModeScoreAwardsDataAsset* ScoreAwardsDataAsset; // 0x820
	TArray<FTickedIntervalScoreAwardEntity> PlayersToAwardTickedScoreTo; // 0x828
};

struct UPromodOffensiveUtilDataAsset {
	TArray<FOffensiveUtilItem> OffensiveUtils; // 0x30
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

struct APromodShootoutSpawn {
	bool bAllowed; // 0x278
	bool bTugOfWar; // 0x279
};

struct UCargoTeam {
	float TimeTaken; // 0x180
	float TimeRemaining; // 0x184
	float GracePeriodRemaining; // 0x188
	int32_t LastReachedCheckpoint; // 0x18c
	int32_t LastReachedCheckpointPip; // 0x190
};

struct ULightmassPortalComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UParticleModuleMeshRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct USubmixEffectFlexiverbPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct USoundNodeWaveParam {
	FName WaveParameterName; // 0x48
};

struct UMaterialExpressionShaderStageSwitch {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct AWartidePlayerController {
	UAkAudioEvent* BuyGrenadeSound; // 0xc60
	UAkAudioEvent* BuySpecialGrenadeSound; // 0xc68
	UAkAudioEvent* BuyWeaponSound; // 0xc70
	UAkAudioEvent* DonateSound; // 0xc78
	UAkAudioEvent* RequestDonateSound; // 0xc80
	UAkAudioEvent* RecievedDonationSound; // 0xc88
	bool ShowBombActionPlant; // 0xc90
	bool ShowBombActionDefuse; // 0xc91
	bool AlreadyPlayedVoiceInstructions; // 0xc92
};

struct USlateBrushAsset {
	FSlateBrush Brush; // 0x28
};

struct UDistributionFloatConstant {
	float Constant; // 0x38
};

struct ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UNUICredits {
	float ScrollStartOffset; // 0x290
	float ScrollEndOffset; // 0x294
	float ScrollMaxSpeed; // 0x298
	float ScrollAutoScrollSpeed; // 0x29c
	float MaxDelayTilAutoScroll; // 0x2a0
	float ScrollAcceleration; // 0x2a4
	EControllerAnalogStick ControlAnalogStick; // 0x2a8
};

struct UWBP_ClassChanged_C {
	UWidgetAnimation* FadeInAndOut; // 0x260
	UHUDTextDataAsset* HUDColour; // 0x268
};

struct ULocationServicesImpl {
	FMulticastInlineDelegate OnLocationChanged; // 0x28
};

struct UDatasmithStaticMeshTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct UMicroTransactionBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UTexture2DDynamic {
	EPixelFormat Format; // 0xe0
};

struct UWBP_PlayerLoadoutModificationScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextButton_C* AcceptButton; // 0x268
	UTextButton_C* BTN_Back; // 0x270
	UTextButton_C* BTN_Delete; // 0x278
	UTextButton_C* BTN_FireUp; // 0x280
	UTextButton_C* BTN_Hat; // 0x288
	UTextButton_C* BTN_Melee; // 0x290
	UTextButton_C* BTN_Offense; // 0x298
	UTextButton_C* BTN_Primary; // 0x2a0
	UTextButton_C* BTN_Quick; // 0x2a8
	UTextButton_C* BTN_SaveLoadout; // 0x2b0
	UTextButton_C* BTN_SetFave; // 0x2b8
	UTextButton_C* BTN_Sidearm; // 0x2c0
	UTextButton_C* BTN_Tactical; // 0x2c8
	UTextBlock* DescriptText; // 0x2d0
	UImage* FavouriteImage; // 0x2d8
	UWBP_ModKitWeaponButton_C* Fireup; // 0x2e0
	UWBP_ModKitWeaponButton_C* Hats; // 0x2e8
	UImage* Image; // 0x2f0
	UImage* Image_2; // 0x2f8
	UImage* Image_3; // 0x300
	UImage* Image_4; // 0x308
	UImage* Image_134; // 0x310
	UImage* Image_154; // 0x318
	UMultiLineEditableText* LoadoutName; // 0x320
	UWBP_ModKitWeaponButton_C* MainWeapon; // 0x328
	UWBP_ModKitWeaponButton_C* Melee; // 0x330
	UWBP_ModKitWeaponButton_C* OffensiveUtil; // 0x338
	UWBP_ModKitWeaponButton_C* QuickUtil; // 0x340
	UOverlay* SavedPopupOverlay; // 0x348
	UScaleBox* ScaleBox_FireUpSelection; // 0x350
	UScaleBox* ScaleBox_HatSelection; // 0x358
	UScaleBox* ScaleBox_MainSelection; // 0x360
	UScaleBox* ScaleBox_MeleeSelection; // 0x368
	UScaleBox* ScaleBox_OffensiveSelection; // 0x370
	UScaleBox* ScaleBox_QuickSelection; // 0x378
	UScaleBox* ScaleBox_SidearnSelection; // 0x380
	UScaleBox* ScaleBox_TacticalSelection; // 0x388
	UWidgetSwitcher* SelectionWidgetSwitcher; // 0x390
	UWBP_ModKitWeaponButton_C* Sidearm; // 0x398
	USizeBox* SizeBox_Back; // 0x3a0
	USizeBox* SizeBox_Delete; // 0x3a8
	USizeBox* SizeBox_FireUp; // 0x3b0
	USizeBox* SizeBox_Hat; // 0x3b8
	USizeBox* SizeBox_Main; // 0x3c0
	USizeBox* SizeBox_Melee; // 0x3c8
	USizeBox* SizeBox_Offense; // 0x3d0
	USizeBox* SizeBox_QuickUtil; // 0x3d8
	USizeBox* SizeBox_Save; // 0x3e0
	USizeBox* SizeBox_SetFave; // 0x3e8
	USizeBox* SizeBox_Sidearm; // 0x3f0
	USizeBox* SizeBox_Tactical; // 0x3f8
	USpacer* Spacer_Fave_Save; // 0x400
	USpacer* Spacer_Save_Delete; // 0x408
	UWBP_ModKitWeaponButton_C* TacticalUtil; // 0x410
	UTextBlock* TitleText; // 0x418
	UPromodClassManagerDataAsset* ClassData; // 0x420
	UPromodClassDataAsset* ThisLoopsClassData; // 0x428
	TArray<UPromodClassDataAsset*> PrimaryDataAssets; // 0x430
	TArray<UPromodClassDataAsset*> SidearmDataAssets; // 0x440
	TArray<UPromodClassDataAsset*> MeleeDataAssets; // 0x450
	UPromodAllFireUpsDataAsset* AllFireUps; // 0x460
	int32_t IndexOfFireUpType; // 0x468
	UPromodOffensiveUtilDataAsset* OffensiveDataAsset; // 0x470
	UPromodTacticalUtilDataAsset* TacticalDataAsset; // 0x478
	UPromodCosmeticsDataAsset* CostmeticDataAsset_Hats; // 0x480
	FOffensiveUtilItem OffensiveSlot; // 0x488
	FTacticalUtilItem TacticalSlot; // 0x4d0
	FCosmeticItem HatSlot; // 0x520
	TArray<FLoadoutData> LoadoutsToInitFrom; // 0x558
	UTextButton_C* PrevSelectedButton; // 0x568
	FLinearColor SelectedButtonCol; // 0x570
	FLinearColor NotSelectedButtonCol; // 0x580
	int32_t IndexOfLoadout; // 0x590
	FMulticastInlineDelegate BackButton; // 0x598
	FQuickUtilItem QuickSlot; // 0x5a8
	UPromodQuickUtilDataAsset* QuickUtilDataAsset; // 0x5d0
	bool bSetAsFavourite; // 0x5d8
	int32_t IndexOfQuickUtilType; // 0x5dc
	FMulticastInlineDelegate LoadoutEditedAndSaved; // 0x5e0
	int32_t Max Loadout Name Length; // 0x5f0
};

struct UMaterialExpressionAbs {
	FExpressionInput Input; // 0x40
};

struct USubmixEffectConvolutionReverbPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct USpinBoxWidgetStyle {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UMaterialExpressionPerInstanceCustomData {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct UActorChannel {
	AActor* Actor; // 0x70
	TArray<UObject*> CreateSubObjects; // 0x160
};

struct UBTTask_FinishWithResult {
	EBTNodeResult Result; // 0x70
};

struct UMovieSceneSequenceTickManager {
	TArray<AActor*> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UABP_Intervention_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4f0
};

struct UParticleModuleAccelerationBase {
	char bAlwaysInWorldSpace : 1; // 0x30
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

struct UBombCharacterComponent {
	USkeletalMesh* Bomb1PSkeletalMesh; // 0x278
	USkeletalMesh* Bomb3PSkeletalMesh; // 0x280
	UObject* Bomb1PSkeletalMeshClass; // 0x288
	UObject* Bomb3PSkeletalMeshClass; // 0x290
	FSpecialAnim PlantingAnim; // 0x298
	FSpecialAnim QuickPlantingAnim; // 0x2b8
	FSpecialAnim DefusingAnim; // 0x2d8
	TArray<UMaterialInstanceDynamic*> Mesh1PMaterials; // 0x2f8
};

struct UParticleModuleSizeScale {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct ALiveFireGameMode {
	bool bUseRandomLocationForBotSpawning; // 0x850
	ELiveFireTrainingDifficulty CurrentDifficulty; // 0x851
	TMap<ELiveFireTrainingDifficulty, FLiveFireTrainingDetails> DifficultyModes; // 0x858
	APromodBot* BotClass; // 0x8a8
	int32_t SpawnCount; // 0x8b0
	int32_t NumBotsSpawned; // 0x8b4
};

struct UPromodWeaponDataAsset {
	TArray<FPromodWeaponInfo> PromodWeapons; // 0x30
};

struct UBTDecorator_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x68
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

struct AMapEditorGizmo {
	USceneComponent* TransformRootComponent; // 0x220
	USceneComponent* TranslationRootComponent; // 0x228
	UStaticMeshComponent* TranslationFreeAxis; // 0x230
	UStaticMeshComponent* TranslationHandleXAxis; // 0x238
	UStaticMeshComponent* TranslationHandleYAxis; // 0x240
	UStaticMeshComponent* TranslationHandleZAxis; // 0x248
	UStaticMeshComponent* TranslationHandleXYAxis; // 0x250
	UStaticMeshComponent* TranslationHandleXZAxis; // 0x258
	UStaticMeshComponent* TranslationHandleYZAxis; // 0x260
	USceneComponent* RotationRootComponent; // 0x268
	UStaticMeshComponent* RotationHandleTrackBall; // 0x270
	UStaticMeshComponent* RotationHandleXAxis; // 0x278
	UStaticMeshComponent* RotationHandleYAxis; // 0x280
	UStaticMeshComponent* RotationHandleZAxis; // 0x288
	USceneComponent* ScaleRootComponent; // 0x290
	UStaticMeshComponent* ScaleHandleUniform; // 0x298
	UStaticMeshComponent* ScaleHandleXAxis; // 0x2a0
	UStaticMeshComponent* ScaleHandleYAxis; // 0x2a8
	UStaticMeshComponent* ScaleHandleZAxis; // 0x2b0
	UStaticMeshComponent* ScaleHandleXYAxis; // 0x2b8
	UStaticMeshComponent* ScaleHandleXZAxis; // 0x2c0
	UStaticMeshComponent* ScaleHandleYZAxis; // 0x2c8
	TMap<UPrimitiveComponent*, FGizmoHandleData> TransformHandleDataMap; // 0x2d0
	EMapEditorTransformMode TransformMode; // 0x320
	EMapEditorTransformSpace TransformSpace; // 0x321
	AMapEditorObject* AttachedObject; // 0x328
	TArray<AMapEditorObject*> SelectedObjects; // 0x330
	bool bIsPerformingDragAction; // 0x340
	UPrimitiveComponent* CurrentlyHoveredHandle; // 0x348
	AMapEditorController* MapEditorControllerRef; // 0x350
	AMapEditorPawn* MapEditorPawnRef; // 0x358
};

struct UAssetMappingTable {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UWheeledVehicleMovementComponent4W {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UBTService_RunEQS {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UInputKeyDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UCrowdFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UWBP_SP_HUDEquipment_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_AmmoAdded; // 0x268
	UHorizontalBox* HB_Ammo; // 0x270
	UInvalidationBox* IB_Ammo; // 0x278
	UInvalidationBox* IB_LoadPos; // 0x280
	UInvalidationBox* IB_SavePos; // 0x288
	UInvalidationBox* IB_TacticalUtil; // 0x290
	UInvalidationBox* IB_WeaponSlot; // 0x298
	UImage* IMG_OffensiveUtilImage; // 0x2a0
	UImage* IMG_QuickUtilImage; // 0x2a8
	UImage* IMG_Slot1; // 0x2b0
	UImage* IMG_Slot2; // 0x2b8
	UImage* IMG_Slot3; // 0x2c0
	UImage* IMG_TacticalUtilBackground; // 0x2c8
	UImage* IMG_TacticalUtilImage; // 0x2d0
	UImage* IMG_WeaponBackground; // 0x2d8
	UImage* IMG_WeaponIconSlot1; // 0x2e0
	UImage* IMG_WeaponIconSlot2; // 0x2e8
	UImage* IMG_WeaponIconSlot3; // 0x2f0
	UPlatformKeyImage_C* KEY_Load; // 0x2f8
	UPlatformKeyImage_C* KEY_Reset; // 0x300
	UPlatformKeyImage_C* KEY_Save; // 0x308
	UProgressBar* PB_LoadPos; // 0x310
	UProgressBar* PB_SetPos; // 0x318
	UTextBlock* TB_AddedAmmo; // 0x320
	UTextBlock* TB_ClipAmmo; // 0x328
	UTextBlock* TB_ReserveAmmo; // 0x330
	UWidgetSwitcher* WS_SlotIcon; // 0x338
	UWidgetSwitcher* WS_SlotIndex; // 0x340
	int32_t Clip Ammo; // 0x348
	int32_t Reserve Ammo; // 0x34c
	ESpecialGrenadeType Tactical Util Type; // 0x350
	EGrenadeType Offensive Util Type; // 0x351
	EFireUpType Quick Util Type; // 0x352
	int32_t Offensive Util Count; // 0x354
	int32_t Tactical Util Count; // 0x358
	int32_t Quick Util Count; // 0x35c
	APromodPlayerState* Player State; // 0x360
	ESlotType ActiveSlot; // 0x368
	UTexture2D* AvailableBackground; // 0x370
	UTexture2D* NotAvailableBackground; // 0x378
	APromodPlayerController* OwningController; // 0x380
	APromodPawn_C* SpectatedPlayerCharacter; // 0x388
	bool SavePosPressed; // 0x390
	bool LoadPosPressed; // 0x391
	bool ResetPressed; // 0x392
	float Delta Time; // 0x394
	float SavePosTimePressed; // 0x398
	float LoadPosTimePressed; // 0x39c
	float SavePosActivateTime; // 0x3a0
	float LoadPosActivateTime; // 0x3a4
	bool ShowGizmoOptions; // 0x3a8
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

struct UNiagaraComponentSettings {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct UWBP_StyleScoreAwardFeed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWidgetAnimation* On_Fire_Chromatic; // 0x278
	UWidgetAnimation* +15-Fire-Kill; // 0x280
	UWidgetAnimation* +10-Fire-Kill; // 0x288
	UWidgetAnimation* Edge_Glow; // 0x290
	UWidgetAnimation* Fire-Shot; // 0x298
	UWidgetAnimation* OnFireGlowIcon; // 0x2a0
	UWidgetAnimation* FadeOffWithTime; // 0x2a8
	UVerticalBox* AwardContainer; // 0x2b0
	UHorizontalBox* HB_ComboScore; // 0x2b8
	UHorizontalBox* HB_ComboScore_BLUE; // 0x2c0
	UHorizontalBox* HB_ComboScore_RED; // 0x2c8
	UImage* Image_492; // 0x2d0
	UImage* On-Fire-Edge-Glow-BLue; // 0x2d8
	UImage* On-Fire-Edge-Glow-BLue_Shot; // 0x2e0
	UOn_Fire_C* On_Fire; // 0x2e8
	UImage* OnFireGlow; // 0x2f0
	UProgressBar* OnFireProgressBar; // 0x2f8
	URetainerBox* RetainerBox_1; // 0x300
	URetainerBox* RetainerBox_2; // 0x308
	UHorizontalBox* ScoreContainer; // 0x310
	UTextBlock* ScoreText; // 0x318
	UTextBlock* ScoreText_BLUE; // 0x320
	UTextBlock* ScoreText_RED; // 0x328
	UTextBlock* TB_ComboMultiplier; // 0x330
	UTextBlock* TB_ComboMultiplier_BLUE; // 0x338
	UTextBlock* TB_ComboMultiplier_RED; // 0x340
	UTextBlock* TB_ComboScore; // 0x348
	UTextBlock* TB_ComboScore_BLUE; // 0x350
	UTextBlock* TB_ComboScore_RED; // 0x358
	UWBP_StyleScoreAwardEntry_C* WBP_StyleScoreAwardEntry; // 0x360
	UWBP_StyleScoreAwardEntry_C* WBP_StyleScoreAwardEntry_2; // 0x368
	UWBP_StyleScoreAwardEntry_C* WBP_StyleScoreAwardEntry_3; // 0x370
	UWBP_StyleScoreAwardEntry_C* WBP_StyleScoreAwardEntry_4; // 0x378
	UWBP_StyleScoreAwardEntry_C* WBP_StyleScoreAwardEntry_5; // 0x380
	int32_t OnFireThreshold; // 0x388
	float ComboDecayTime; // 0x38c
	int32_t currentOnFireScore; // 0x390
	bool OnFireVisible; // 0x394
	float CurrentComboScore; // 0x398
	int32_t CurrentComboMultiplier; // 0x39c
	bool OldOnFire; // 0x3a0
	float OnFireVar; // 0x3a4
	UHUDTextDataAsset* HUD Colour; // 0x3a8
};

struct UViewport {
	FLinearColor BackgroundColor; // 0x120
};

struct UMaterialExpressionFeatureLevelSwitch {
	FExpressionInput Default; // 0x40
};

struct ATDMGameMode {
	bool EndOnMatchPointWin; // 0x838
	float WeaponSelectGracePeriod; // 0x83c
	float RoundTimeLeftUntilStopBackfill; // 0x840
	float ScorePctToStopBackfill; // 0x844
	bool AlreadyStoppedBackfill; // 0x848
	TArray<AActor*> UsedSpawns; // 0x868
};

struct UEditableGameplayTagQuery {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UAkRoomComponent {
	char bEnable : 1; // 0x218
	UAkRoomComponent* NextLowerPriorityComponent; // 0x220
	float Priority; // 0x228
	float WallOcclusion; // 0x22c
	float AuxSendLevel; // 0x230
	bool AutoPost; // 0x234
};

struct USystemTimeTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct UKantanBarChartWidgetStyle {
	FKantanBarChartStyle ChartStyle; // 0x30
};

struct UBattalionCharacterComponent {
	UAkAudioEvent* MusicEvent; // 0x1f8
	UAkAudioEvent* StopMusicEvent; // 0x200
	UAkAudioEvent* PauseMusicEvent; // 0x208
	UAkAudioEvent* ResumeMusicEvent; // 0x210
};

struct UDebug_Button-LIGHT-LEFT-JUSTIFIED_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* TEXT_MOTION; // 0x268
	UWidgetAnimation* UNHOVER; // 0x270
	UWidgetAnimation* HOVER; // 0x278
	UTextBlock* BLUETEXT; // 0x280
	UImage* Blur-Steak; // 0x288
	UButton* DEBUG-BUTTON; // 0x290
	UTextBlock* REDTEXT; // 0x298
	UTextBlock* TOPTEXT; // 0x2a0
	FText Text; // 0x2a8
	bool NewVar_1; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct APlayerController {
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

struct UParticleModuleRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UComboButtonWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UInterpTrackLinearColorProp {
	FName PropertyName; // 0x90
};

struct URarityColourDataAsset {
	TArray<FRarityColourEntity> RarityColours; // 0x30
};

struct UProceduralFoliageComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct ACTFGameMode {
	float DistanceToFlagTouch; // 0x878
	float DistanceToFlagZone; // 0x87c
	float DropFlagDisablePickupCounter; // 0x880
	float FlagZoneSpawnWeighting; // 0x884
	float FlagZoneSpawnDistance; // 0x888
	float EnemyFlagAtZoneSpawnPointScalar; // 0x88c
	float AllyFlagAtZoneSpawnPointScalar; // 0x890
	float EnemyFlagNotAtZoneSpawnPointScalar; // 0x894
	float AllyFlagNotAtZoneSpawnPointScalar; // 0x898
	bool UseOvertime; // 0x89c
	float FlagCheckTime; // 0x8a0
	bool ExtraTimeSet; // 0x8a4
	int32_t NumOvertimeRounds; // 0x8a8
	float DroppedFlagResetTime; // 0x8ac
	float VerticalDistanceToFlagZone; // 0x8b8
	ACTFGameState* CTFGameState; // 0x8c0
	UObject* FlagClass; // 0x8c8
	UObject* FlagZoneClass; // 0x8d0
	FNationSound mFriendPickedUpEvent; // 0x8d8
	FNationSound mEnemyPickedUpEvent; // 0x8f8
	FNationSound mFriendDroppedEvent; // 0x918
	FNationSound mEnemyDroppedEvent; // 0x938
	FNationSound mFriendReturnedEvent; // 0x958
	FNationSound mEnemyReturnedEvent; // 0x978
	FNationSound mFriendCapturedEvent; // 0x998
	FNationSound mEnemyCapturedEvent; // 0x9b8
	UAkAudioEvent* EnemyFlagCapturedEvent; // 0x9d8
	UAkAudioEvent* EnemyFlagReturnedEvent; // 0x9e0
	UAkAudioEvent* EnemyFlagTakenEvent; // 0x9e8
	UAkAudioEvent* FriendlyFlagCapturedEvent; // 0x9f0
	UAkAudioEvent* FriendlyFlagReturnedEvent; // 0x9f8
	UAkAudioEvent* FriendlyFlagTakenEvent; // 0xa00
	UAkAudioEvent* PersonalFlagPickupEvent; // 0xa08
	float OnFloorTimer; // 0xa10
	bool FloorTimerActive; // 0xa14
};

struct UABP_AmmoBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UNiagaraEffectType {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct UVehicleAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa40
};

struct UMaterialExpressionHairColor {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct UWBP_SNDLeaderboard_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	UBackgroundBlur* BackgroundBlur_106; // 0x2b0
	UBorder* Border_RoundNumber; // 0x2b8
	UBorder* Border_RoundPips; // 0x2c0
	UCanvasPanel* CanvasPanel_71; // 0x2c8
	UImage* IMG_SelfTeamBottomBar; // 0x2d0
	UImage* IMG_SelfTeamHalfTimeArrow; // 0x2d8
	USizeBox* SB_RoundPips; // 0x2e0
	USizeBox* SB_SelfTeamBottomBar; // 0x2e8
	USizeBox* SB_SelfTeamHalfTimeArrow; // 0x2f0
	UTextBlock* TB_EnemyTeamScore; // 0x2f8
	UTextBlock* TB_RoundNumber; // 0x300
	UTextBlock* TB_SelfTeamScore; // 0x308
	UVerticalBox* VB_EnemyTeamPlayers; // 0x310
	UVerticalBox* VB_SelfTeamPlayers; // 0x318
	UVerticalBox* VerticalBox; // 0x320
	UVerticalBox* VerticalBox_140; // 0x328
	UHorizontalBox* WB_RoundPips; // 0x330
	UWBP_SNDLeaderboardItem_C* WBP_SNDLeaderboardItem_C_1; // 0x338
	TArray<UWBP_SNDLeaderboardItem_C*> LeaderboardItemWidgets; // 0x340
	int32_t TotalPlayers; // 0x350
	int32_t MissingLeaderboardItems; // 0x354
};

struct ULevelVariantSets {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
};

struct UARComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct UMedalAnotherNotch {
	AFFAGameMode* FFAGameMode; // 0x48
};

struct UMaterialExpressionSmoothStep {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct UBlackboardKeyType_Enum {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
};

struct UPaperFlipbook {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UAnimSharingInstance {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct UNUIScreenEffects {
	float SniperVignette; // 0x278
	UNUIDamageIndicator* DamageIndicatorClass; // 0x288
};

struct UBreakpoint {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UARPlaneComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionSetMaterialAttributes {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UMaterialExpressionDecalMipmapLevel {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
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

struct UBattalionCommandManager {
	ABattalionGameMode* GameMode; // 0x28
};

struct UAnimSharingAdditiveInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct AHQGameMode {
	float CaptureTime; // 0x878
	float CooldownTime; // 0x87c
	int32_t CaptureScore; // 0x880
	int32_t ScorePerSecond; // 0x884
	float ObjectiveResetTime; // 0x888
	float ObjectiveRespawnTime; // 0x88c
	float ObjectiveUnlockTime; // 0x890
	float ObjectiveCaptureTimeout; // 0x894
	bool ExtraTimeSet; // 0x898
	UObject* ZoneClass; // 0x8a0
	UAkAudioEvent* ObjectiveCapturedEventFriendly; // 0x8e0
	UAkAudioEvent* ObjectiveCapturedEventEnemy; // 0x8e8
	UAkAudioEvent* ObjectiveDestroyedEvent; // 0x8f0
	UAkAudioEvent* FriendlyCapturedHQEvent; // 0x8f8
	UAkAudioEvent* EnemyCapturedHQEvent; // 0x900
	UAkAudioEvent* FriendlyDestroyedHQEvent; // 0x908
	UAkAudioEvent* EnemyDestroyedHQEvent; // 0x910
	UAkAudioEvent* FriendlySecuredHQEvent; // 0x918
	UAkAudioEvent* EnemySecuredHQEvent; // 0x920
	UAkAudioEvent* HQUnlockedEvent; // 0x928
	UAkAudioEvent* HQLocatedEvent; // 0x930
	float DebugLogTimer; // 0x938
	float DebugLogInterval; // 0x93c
	bool DebuggingEndRound; // 0x940
};

struct UNUITeamMatchResultScreen {
	FLinearColor ResultTextColor; // 0x350
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

struct USizeBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
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

struct UNiagaraDataInterfaceGrid2D {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
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

struct UNUIBombGameOverview {
	TArray<UNUIBombGameOverviewAvatar*> LeftTeamWidgets; // 0x3a0
	TArray<UNUIBombGameOverviewAvatar*> RightTeamWidgets; // 0x3b0
	UNUIBombGameOverviewAvatar* AvatarWidgetClass; // 0x3c0
	TArray<ABombPlayerState*> LeftPlayerList; // 0x3c8
	TArray<ABombPlayerState*> RightPlayerList; // 0x3d8
	FText LeftTeamAliveCount; // 0x3e8
	FText RightTeamAliveCount; // 0x400
	ESlateVisibility SpectatorScoreVisibility; // 0x418
	ESlateVisibility LeftTeamAvatarsVisibility; // 0x419
	ESlateVisibility RightTeamAvatarsVisibility; // 0x41a
	ESlateVisibility LeftTeamAliveCountVisibility; // 0x41b
	ESlateVisibility RightTeamAliveCountVisibility; // 0x41c
	ESlateVisibility SpectatorBombInteractionTimerVisibility; // 0x41d
	float BombInteractionProgress; // 0x420
};

struct UParticleModuleVelocity {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct ACargoPlayerSpawn {
	int32_t Checkpoint; // 0x278
};

struct UMaterialExpressionTransformPosition {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UMovieSceneColorTrack {
	bool bIsSlateColor; // 0xb0
};

struct USynthComponentToneGenerator {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
};

struct UWBP_GenericBlockedMessage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Glitch; // 0x268
	UWidgetAnimation* Intro; // 0x270
	UTextBlock* descriptiontext; // 0x278
	UTextBlock* descriptiontextBLUE; // 0x280
	UTextBlock* descriptiontextRED; // 0x288
	bool bIsShowing; // 0x290
	float FadeDelay; // 0x294
	UHUDMaster* HUDReference; // 0x298
};

struct UGrenadeMarker {
	ABattalionCharacter* LinkedCharacter; // 0x260
	float BeaconScaleX; // 0x268
	float BeaconScaleY; // 0x26c
	float Angle; // 0x270
	FVector2D Translation; // 0x274
	UImage* Image; // 0x280
	UImage* NadeImage; // 0x288
	FVector2D ScaledPlayerPos; // 0x290
	float RotationAngle; // 0x298
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2a0
};

struct ATemplateSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228
	UTemplateSequencePlayer* SequencePlayer; // 0x240
	FSoftObjectPath TemplateSequence; // 0x248
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x260
};

struct UPromodMainMenuScreen {
	TArray<FString> UNLOCKEDLEVELS; // 0x290
	TMap<FString, int32_t> KillrunLevelStarsMap; // 0x2a0
};

struct ULeaderboardItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* LocalPlayerArrowBreathe; // 0x268
	UImage* BackdropImage; // 0x270
	UTextBlock* NameBox; // 0x278
	UButton* ProfileBtn; // 0x280
	UTextBlock* RankBox; // 0x288
	UTextBlock* timeBox; // 0x290
	FUniqueNetIdRepl PlayerNetId; // 0x298
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

struct UMedal50BombHQ {
	AHQGameMode* HQGameMode; // 0x48
};

struct APromodPlayerState {
	FLoadoutData LastChosenClass; // 0x5e8
	FLoadoutData PendingClassChange; // 0x730
	FMulticastInlineDelegate OnFireupAvailabilityChanged; // 0x878
	FMulticastInlineDelegate OnQuickUtilAvailabilityChanged; // 0x888
	FMulticastInlineDelegate OnClassChanged; // 0x898
	float FireUpScoreProgress; // 0x8a8
	bool bShootoutEliminated; // 0x8ac
	int32_t KillsThisRound; // 0x8b0
	bool bHasSpawnedWithClass; // 0x8b4
	FFireupState FireupState_Ultimate; // 0x8b8
	FFireupState FireupState_Quick; // 0x8c8
	float TimeUntilQuickUtilAward; // 0x8d8
	EPromodActionPrompt CurrentActionPrompt; // 0x8dc
	int32_t CurrentKillConfirmPoints; // 0x8e0
};

struct UBehaviorTreeManager {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct UAIDataProvider_Random {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct UInterpGroupInst {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
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

struct UMaterialExpressionTime {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UCanvasPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UNUIReadyPrompt {
	bool ReadyState; // 0x278
	FText BindName; // 0x280
	FText RequiredPlayersRemainingText; // 0x298
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

struct AHardpointGameState {
	float CurrentZoneTimeRemaining; // 0x610
	EHardpointState CurrentHardpointState; // 0x614
	int32_t CurrentZoneAllegiance; // 0x618
};

struct UAnimNotifyState_TimedParticleEffect {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct USoundNodeModulator {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct UNuclearAsset {
	FGuid UUID; // 0x30
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective {
	FExpressionInput WorldPosition; // 0x40
};

struct USubmixEffectSubmixEQPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct ABattalionBloodEffect {
	TArray<FDecalData> DefaultDecals; // 0x220
	float DecalDepth; // 0x230
	FHitResult SurfaceHit; // 0x234
};

struct USoundNodeDelay {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
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

struct AScaledMapBeacon {
	UBoxComponent* MapScaleExtents; // 0x260
};

struct ADOMGameState {
	TArray<ADOMMode_Zone*> Zones; // 0x4a0
	float CaptureTime; // 0x4b0
};

struct USkeletalMesh {
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

struct UMedal40BombHQ {
	AHQGameMode* HQGameMode; // 0x48
};

struct AInfectionGameState {
	int32_t SurvivorTeamSize; // 0x4a0
	int32_t InfectedAlive; // 0x4a4
};

struct UWBP_GrenadeMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOut; // 0x268
	UImage* Arrow; // 0x270
	UCanvasPanel* CanvasPanel_1; // 0x278
	UImage* Grenade; // 0x280
	UOverlay* GrenadeOverlay; // 0x288
	UCanvasPanel* RotationParent; // 0x290
	bool bIsInUse; // 0x298
};

struct UImage {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UPlayFabServerAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x8c8
	UPlayFabJsonObject* RequestJsonObj; // 0x8d0
	UPlayFabJsonObject* ResponseJsonObj; // 0x8d8
};

struct UMovieSceneTrackInstance {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct AProceduralFoliageBlockingVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct UParticleModuleColor {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct AMapIconActor {
	UMapIconComponent* MapIconComponent; // 0x220
};

struct UWBP_BlitzBombProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Percentage; // 0x268
	UWBP_BombProgressBar_C* ProgressBar; // 0x270
};

struct UMedalDomination {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct UBehaviorTree {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
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

struct UMovieSceneBoolSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct UMaterialExpressionArccosineFast {
	FExpressionInput Input; // 0x40
};

struct UKantanChartLegend {
	FMargin Margins; // 0x108
	FMargin SeriesPadding; // 0x118
	FSlateBrush Background; // 0x128
	int32_t FontSize; // 0x1b0
	TWeakObjectPtr<UKantanCartesianChartBase> Chart; // 0x1b4
};

struct UMaterialExpressionDistanceFieldGradient {
	FExpressionInput Position; // 0x40
};

struct APaperGroupedSpriteActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220
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

struct UDistributionVectorUniform {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct UNiagaraPrecompileContainer {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
};

struct ABattalionWeapon {
	UTimelineComponent* DematerializeTimeline; // 0x220
	FMulticastInlineDelegate OnFireStateChanged; // 0x230
	UMaterialInterface* WeaponMaterialIcon; // 0x260
	FCanvasIcon PrimaryIcon; // 0x268
	FCanvasIcon SecondaryIcon; // 0x280
	FCanvasIcon PrimaryClipIcon; // 0x298
	FCanvasIcon SecondaryClipIcon; // 0x2b0
	float AmmoIconsCount; // 0x2c8
	int32_t PrimaryClipIconOffset; // 0x2cc
	int32_t SecondaryClipIconOffset; // 0x2d0
	FCanvasIcon Crosshair[0x5]; // 0x2d8
	FCanvasIcon AimingCrosshair[0x5]; // 0x350
	bool UseLaserDot; // 0x3c8
	bool UseCustomCrosshair; // 0x3c9
	bool UseCustomAimingCrosshair; // 0x3ca
	bool bHideCrosshairWhileNotAiming; // 0x3cb
	bool bHideCrosshairWhileAiming; // 0x3cc
	bool HideWeaponDuringTransition; // 0x3cd
	float TransitionHideWeaponPoint; // 0x3d0
	FWeaponAnim ActiveReloadAnim; // 0x3d8
	TArray<FSoftObjectPath> SkinAssetToLoad_FP; // 0x3f8
	TArray<FSoftObjectPath> SkinAssetToLoad_3P; // 0x408
	bool EnableRTPCSinceBurst; // 0x430
	float RTPCSinceBurstMAX; // 0x434
	UAkComponent* DefaultAkComp; // 0x438
	UAkAudioEvent* WeaponBashImpactSound; // 0x440
	FString SkinId; // 0x448
	ABattalionCharacter* MyPawn; // 0x458
	ABattalionPlayerState* MyPawn_PlayerState; // 0x460
	FQuat DefaultRelativeRotation; // 0x470
	int32_t CurrentWeaponLevel; // 0x480
	FMulticastInlineDelegate OnWeaponFinishedHolster; // 0x488
	FString WeaponName; // 0x4a0
	UTexture2D* WeaponIcon; // 0x4b0
	UTexture2D* WeaponModKitIcon; // 0x4b8
	EParentModKit ParentModKit; // 0x4c0
	FWeaponCosmeticDataArray CosmeticData; // 0x4c8
	UPromodWeaponStatsDataAsset* StatsDataAsset; // 0x4e0
	USceneComponent* RootScene; // 0x4e8
	UFOVSkeletalMeshComponent* Mesh1P; // 0x4f0
	FVector Mesh1POffset; // 0x4f8
	FVector Mesh1POffsetTargeting; // 0x504
	USkeletalMeshComponent* Mesh3P; // 0x510
	UFOVParticleSystemComponent* BulletCasingEmitter; // 0x518
	UFOVParticleSystemComponent* MagazineCasingEmitter; // 0x520
	float WeaponTraceStartOffset; // 0x52c
	bool EnableSniperGracePeriod; // 0x534
	float SniperGracePeriod; // 0x538
	bool bUseBurstShotRTPC; // 0x53c
	float SingleFireBurstRecoverySpeed; // 0x544
	float AddedPerBurstValue; // 0x548
	bool bEnableTransitionTelescope; // 0x54c
	UAkComponent* PawnAkComponent; // 0x550
	TArray<UMaterialInstanceDynamic*> Mesh1PMaterials; // 0x558
	TArray<UMaterialInstanceDynamic*> PawnMesh1PMaterials; // 0x568
	int32_t TelescopeMaterialIndex; // 0x578
	FName TelescopeMaterialParamName; // 0x57c
	UMaterialInstanceDynamic* TelescopeMaterialInstance; // 0x588
	FName MuzzleAttachPoint; // 0x590
	FVector MuzzleScale1P; // 0x598
	FVector MuzzleScale3P; // 0x5a4
	bool Muzzle1PAttachToGun; // 0x5b0
	UParticleSystem* MuzzleFX1P; // 0x5b8
	UParticleSystem* MuzzleFX3P; // 0x5c0
	UFOVParticleSystemComponent* MuzzlePSC1P; // 0x5c8
	UParticleSystemComponent* MuzzlePSC3P; // 0x5d0
	FName UpperRecieverAttachPoint; // 0x5d8
	FName MagazineAttachPoint; // 0x5e0
	UParticleSystem* BulletCasing; // 0x5e8
	float BulletCasingDelay; // 0x5f0
	UParticleSystem* MagazineCasing; // 0x5f8
	float MagazineCasingDelay; // 0x600
	UCameraShakeBase* FireCameraShake; // 0x608
	UForceFeedbackEffect* FireForceFeedback; // 0x610
	char bStopSegmentedReload : 1; // 0x620
	bool bIsHolstered; // 0x624
	char bPendingReload : 1; // 0x628
	uint32_t InspectCounter; // 0x62c
	char bPendingRechamber : 1; // 0x630
	char bPendingHolster : 1; // 0x638
	EWeaponState CurrentState; // 0x640
	int32_t CurrentAmmo; // 0x654
	int32_t CurrentAmmoInClip; // 0x658
	char Chambered : 1; // 0x65c
	FWeaponBurstCounter BurstCounter; // 0x660
	int32_t CancelCounter; // 0x66c
	bool b3pFireAudioLoopActive; // 0x670
	bool b1pFireAudioLoopActive; // 0x671
	FTimerHandle TimerHandle_OnEquipFinished; // 0x678
	FTimerHandle TimerHandle_OnQuickEquipFinished; // 0x680
	FTimerHandle TimerHandle_OnHolsterFinished; // 0x688
	FTimerHandle TimerHandle_StopReload; // 0x690
	FTimerHandle TimerHandle_SegmentedReload; // 0x698
	FTimerHandle TimerHandle_ReloadNextSegment; // 0x6a0
	FTimerHandle TimerHandle_ReloadWeapon; // 0x6a8
	FTimerHandle TimerHandle_RechamberWeapon; // 0x6b0
	FTimerHandle TimerHandle_EarlyRechamberWeapon; // 0x6b8
	FTimerHandle TimerHandle_HandleFiring; // 0x6c0
	FTimerHandle TimerHandle_FireRateChecker; // 0x6c8
	FTimerHandle TimerHandle_LoopingSoundSafetyCheck; // 0x6d0
	FTimerHandle TimerHandle_LoopingAnimationSafetyCheck; // 0x6d8
	FTimerHandle TimerHandle_RechamberAfterFiring; // 0x6e0
	FTimerHandle TimerHandle_ReloadAfterFiring; // 0x6e8
	FTimerHandle TimerHandle_CreateBulletCasing; // 0x6f0
	FTimerHandle TimerHandle_CreateMagazineCasing; // 0x6f8
	FTimerHandle TimerHandle_ResetRecoilPattern; // 0x700
	FTimerHandle TimerHandle_StartCancelHolster; // 0x708
	FTimerHandle TimerHandle_RestartFire; // 0x720
	float AudioMercyShotTolerance; // 0x730
	FTimerHandle TimerHandle_ForceVisHandle; // 0x750
	FTimerHandle TimerHandle_LadderEquipHandle; // 0x758
	bool CanFireAfterLadder; // 0x760
	USkeletalMeshComponent* CustomDepthMesh; // 0x768
	bool bSwapAfterHolster; // 0x770
	TArray<UMaterialInstanceDynamic*> WeaponMIDs; // 0x790
	float DematerializeTimelineLength; // 0x7a0
	FWeaponDematerializationData WeaponDematerializationData; // 0x7a4
};

struct UMapEditorSaveData {
	TArray<FMapEditorObjectSaveData> ObjectSaveData; // 0x50
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

struct ABP_ThrowableDeployableCover_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UBoxComponent* ScaledCollisionComponent; // 0x228
	UProjectileMovementComponent* MovementComponent; // 0x230
	UAkComponent* DefaultAkComp; // 0x238
	UStaticMeshComponent* MeshComponent; // 0x240
	UBoxComponent* CollisionComponent; // 0x248
	FMulticastInlineDelegate OnImpact; // 0x250
	UAkAudioEvent* DetonateSound; // 0x260
	FMulticastInlineDelegate OnFailed; // 0x268
	bool ImpactSoundPlayed; // 0x278
	FRotator InitialRotation; // 0x27c
};

struct UMovieSceneEventSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct UNUIReplayControls {
	float CurrentPlayRate; // 0x278
	float TimeWhenPaused; // 0x27c
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

struct AServerStatReplicator {
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

struct AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
};

struct UAkAssetDataSwitchContainerData {
	TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28
	UAkGroupValue* DefaultGroupValue; // 0x50
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x58
	TArray<UAkAssetDataSwitchContainerData*> Children; // 0x68
};

struct UMaterialExpressionCeil {
	FExpressionInput Input; // 0x40
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

struct UVariantObjectBinding {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct UPlayFabAdminAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x798
	UPlayFabJsonObject* RequestJsonObj; // 0x7a0
	UPlayFabJsonObject* ResponseJsonObj; // 0x7a8
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

struct UMovieSceneBindingOverrides {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UMovieSceneComponentMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct UABP_KaBar_OffHand_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
};

struct ACameraActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x220
	UCameraComponent* CameraComponent; // 0x228
	USceneComponent* SceneComponent; // 0x230
	char bConstrainAspectRatio : 1; // 0x240
	float AspectRatio; // 0x244
	float FOVAngle; // 0x248
	float PostProcessBlendWeight; // 0x24c
	FPostProcessSettings PostProcessSettings; // 0x250
};

struct UDistributionVectorUniformCurve {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct ALevelSequenceMediaController {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct UMovieSceneCameraShakeSourceShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct ULightmappedSurfaceCollection {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UABP_TrophySystem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x378
};

struct UUserDefinedImageCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UNUIOneInTheChamberLivesLeft {
	int32_t LivesLeft; // 0x278
};

struct ABeacon {
	FVector2D Origin; // 0x220
	float ScaleX; // 0x228
	float ScaleY; // 0x22c
	UTexture2D* MapTexture; // 0x230
	UTexture2D* MapBackgroundTexture; // 0x238
	UTexture2D* FriendlyTexture; // 0x240
	UTexture2D* EnemyTexture; // 0x248
	UTexture2D* SpectatorTexture; // 0x250
	UStaticMesh* MapBoundsPlane; // 0x258
};

struct UMedalFlagDomination {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct AShooterBot {
	UBehaviorTree* BotBehavior; // 0x2dd0
};

struct UWBP_LoadoutScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* EnterEditMode; // 0x268
	UButton* BTN_Back; // 0x270
	UWBP_TimedConfirm_C* BTN_Delete; // 0x278
	UButton* BTN_Edit; // 0x280
	UButton* BTN_Equip; // 0x288
	UButton* BTN_Favourite; // 0x290
	UButton* BTN_FocusGrabber; // 0x298
	UEditableTextBox* ETB_LoadoutName; // 0x2a0
	UImage* Image_6; // 0x2a8
	UImage* Image_157; // 0x2b0
	UImage* IMG_DarkBackground; // 0x2b8
	UImage* IMG_Favourite; // 0x2c0
	UImage* IMG_Preview_Full; // 0x2c8
	UImage* IMG_Preview_Icon; // 0x2d0
	UImage* IMG_Preview_Video; // 0x2d8
	UImage* IMG_TPModelType; // 0x2e0
	UPlatformKeyImage_C* Key_Back; // 0x2e8
	UWBP_LoadoutItem_C* LoadoutItem_Fireup; // 0x2f0
	UWBP_LoadoutItem_C* LoadoutItem_Hat; // 0x2f8
	UWBP_LoadoutItem_C* LoadoutItem_Melee; // 0x300
	UWBP_LoadoutItem_C* LoadoutItem_OffensiveUtil; // 0x308
	UWBP_LoadoutItem_C* LoadoutItem_Primary; // 0x310
	UWBP_LoadoutItem_C* LoadoutItem_QuickUtil; // 0x318
	UWBP_LoadoutItem_C* LoadoutItem_SideArm; // 0x320
	UWBP_LoadoutItem_C* LoadoutItem_TacticalUtil; // 0x328
	UScrollBox* SB_LoadoutButtons; // 0x330
	UScrollBox* SB_LoadoutItemChoices; // 0x338
	UTextBlock* TB_HoveredSubtitle; // 0x340
	UTextBlock* TB_HoveredTitle; // 0x348
	UTextBlock* TB_LoadoutItemType; // 0x350
	UTextBlock* TB_Preview_Subtitle; // 0x358
	UTextBlock* TB_Preview_Title; // 0x360
	UTextBlock* TB_Preview_Tooltip; // 0x368
	UUniformGridPanel* UGP_LoadoutItemChoices; // 0x370
	UVerticalBox* VB_LoadoutDetails; // 0x378
	UWidgetSwitcher* WS_PreviewType; // 0x380
	TArray<FLoadoutData> PLAYERLOADOUTS; // 0x388
	UWBP_CustomLoadoutContainer_C* LastContainer; // 0x398
	TArray<FLoadoutData> LoadoutsToInitFrom; // 0x3a0
	bool EditScreen; // 0x3b0
	FLoadoutData SelectedLoadout; // 0x3b8
	FLoadoutData HoveredLoadout; // 0x500
	UWBP_LoadoutItem_C* LoadoutItemSelected; // 0x648
	ELoadoutItem SelectedLoadoutType; // 0x650
	UWBP_LoadoutItem_C* LoadoutItemOptionSelected; // 0x658
	bool InGame; // 0x660
	UWBP_CustomLoadoutButton_C* Selected Loadout Button; // 0x668
	int32_t NameMaxCharacters; // 0x670
	UMediaPlayer* MediaPlayer; // 0x678
};

struct UMasterAudioSubmixCaptureProtocol {
	FString Filename; // 0x58
};

struct UNUIObjectiveScores {
	FText AllyNameText; // 0x278
	FText EnemyNameText; // 0x290
	FText AllyScoreText; // 0x2a8
	FText EnemyScoreText; // 0x2c0
	int32_t AllyScore; // 0x2d8
	int32_t EnemyScore; // 0x2dc
	float AllyProgress; // 0x2e0
	float EnemyProgress; // 0x2e4
	FVector2D MinimapMargin; // 0x2e8
	float MinimapSize; // 0x2f0
};

struct UUserDefinedCaptureProtocol {
	UWorld* World; // 0x58
};

struct UAkPS4InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0
};

struct UModelComponent {
	UBodySetup* ModelBodySetup; // 0x458
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

struct UMedalOneManArmy {
	ATDMGameMode* TDMGameMode; // 0x48
	TArray<FOneManArmyTracker> Trackers; // 0x50
};

struct UWBP_ChatEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Author_Text; // 0x268
	UTextBlock* Channel+Message_Text; // 0x270
	FText Author; // 0x278
	FText Channel; // 0x290
	FText Message; // 0x2a8
};

struct UPlatformEventsComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct APlaceableTrophySystem {
	bool bShouldDematerialize; // 0x220
	UTimelineComponent* DematerializeTimeline; // 0x228
	TArray<UMaterialInstanceDynamic*> TrophyMIDs; // 0x230
	UMeshComponent* DematerializationMesh; // 0x240
	float DematerializeTimelineLength; // 0x248
	UCurveFloat* DematerializeTimelineCurve; // 0x250
	FPlaceableTrophySystemDematerializationData PlaceableTrophySystemDematerializationData; // 0x258
};

struct UParticleModuleSizeMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UBaseBrushTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x190
	UBrushStampIndicator* BrushStampIndicator; // 0x1b8
};

struct UTextureLightProfile {
	float Brightness; // 0x100
	float TextureMultiplier; // 0x104
};

struct UKantanPointStyle {
	UTexture2D* DataPointTexture; // 0x30
	FIntPoint PointSizeTextureOffsets[0x3]; // 0x38
};

struct UNUIPlayerAvatar {
	bool bAvatarAvailable; // 0x278
	UTexture2D* Texture; // 0x280
	ABattalionPlayerState* Player; // 0x288
};

struct UInterpTrackInstAnimControl {
	float LastUpdatePosition; // 0x28
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

struct UABP_MP5_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x538
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x640
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x660
};

struct ASkyLight {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UMaterialExpressionMaterialFunctionCall {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UDynamicEntryBox {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct UWBP_Vault_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Glitch; // 0x268
	UWidgetAnimation* Intro; // 0x270
	UTextBlock* descriptiontext; // 0x278
	UTextBlock* descriptiontextBLUE; // 0x280
	UTextBlock* descriptiontextRED; // 0x288
	UInvalidationBox* InvalidationBox_WholeWidget; // 0x290
	UPlatformKeyImage_C* PlatformKeyImage; // 0x298
	UPlatformKeyImage_C* PlatformKeyImage_2; // 0x2a0
	UPlatformKeyImage_C* PlatformKeyImage_3; // 0x2a8
	bool bCanVault; // 0x2b0
	bool bGamepadUIShowing; // 0x2b1
	UHUDTextDataAsset* HUDText Colour; // 0x2b8
	UHUDTextDataAsset* HUDColour; // 0x2c0
};

struct UPlayFabEventsAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xa8
	UPlayFabJsonObject* RequestJsonObj; // 0xb0
	UPlayFabJsonObject* ResponseJsonObj; // 0xb8
};

struct UARQRCodeComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
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

struct UWBP_GameOverScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	UTextBlock* TextBlock; // 0x2a8
	UTextBlock* TextBlock_2; // 0x2b0
};

struct UNiagaraDataInterfaceCurlNoise {
	uint32_t Seed; // 0x38
};

struct ABP_BlinkFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	float MaxDistance; // 0x3d0
	float SnapDistance; // 0x3d4
	FVector DesiredLocation; // 0x3d8
	int32_t BackStepAmount; // 0x3e4
	float MinValidDistance; // 0x3e8
};

struct UAnimNotifyState_TimedNiagaraEffect {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UMaterialExpressionArcsine {
	FExpressionInput Input; // 0x40
};

struct UPlaneReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UBTDecorator_CompareBBEntries {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct ALODActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x228
	UHLODProxy* Proxy; // 0x278
	FName Key; // 0x280
	float LODDrawDistance; // 0x288
	int32_t LODLevel; // 0x28c
	TArray<AActor*> SubActors; // 0x290
	char CachedNumHLODLevels; // 0x2a0
};

struct UDatasmithFBXSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct UParticleModuleVelocityOverLifetime {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct UJoinSessionCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UGuardiansMapAsset {
	TSoftObjectPtr<UWorld> Map; // 0x40
	FText DisplayName; // 0x68
	TSoftObjectPtr<UTexture2D> Splash; // 0x80
};

struct UMedalHQDestroyed {
	AHQGameMode* HQGameMode; // 0x48
};

struct UTexture2DArray {
	TextureAddress AddressX; // 0x130
	TextureAddress AddressY; // 0x131
	TextureAddress AddressZ; // 0x132
};

struct UMedalRainingLimbs {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct UMovieScenePrimitiveMaterialTrack {
	int32_t MaterialIndex; // 0xb0
};

struct UAkSettingsPerUser {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x28
	FFilePath WwiseMacInstallationPath; // 0x38
	FString WaapiIPAddress; // 0x48
	uint32_t WaapiPort; // 0x58
	bool AutoSyncSelection; // 0x5c
	bool SuppressWwiseProjectPathWarnings; // 0x5d
	bool SoundDataGenerationSkipLanguage; // 0x5e
};

struct UMaterialExpressionBreakMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x40
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

struct APartyBeaconHost {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UWBP_Announcement_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* HideAnimation; // 0x268
	UWidgetAnimation* ShowAnimation; // 0x270
	UTextBlock* AnnouncementText; // 0x278
	UCanvasPanel* CanvasPanel_1; // 0x280
	UInvalidationBox* InvalidationBox_WholeWidget; // 0x288
	UHUDTextDataAsset* HUDColour; // 0x290
};

struct UAchievementWriteCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
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

struct UMedalFastDenial {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UMeshComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x440
	char bEnableMaterialParameterCaching : 1; // 0x460
};

struct UARTrackedPose {
	FARPose3D TrackedPose; // 0xf8
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

struct UPanelSlot {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct ACargoPlayerState {
	float ObjectiveTime; // 0x908
	float CurrentContestingTimer; // 0x90c
};

struct UParticleModuleLocationWorldOffset_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UInterpCurveEdSetup {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UMaterialExpressionFontSample {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct USoundfieldEffectBase {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct UNUIBuyScreen {
	bool WeaponBought; // 0x278
	bool RequestedFromPauseMenu; // 0x279
	FText TimerText; // 0x280
	FText CurrentAssaultText; // 0x298
	FText CurrentSpecOpsText; // 0x2b0
	FText CurrentSniperText; // 0x2c8
	int32_t MaxAssaultLoadouts; // 0x2e0
	int32_t MaxSpecOpsLoadouts; // 0x2e4
	int32_t MaxSniperLoadouts; // 0x2e8
	int32_t CurrentAssault; // 0x2ec
	int32_t CurrentSpecOps; // 0x2f0
	int32_t CurrentSnipers; // 0x2f4
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

struct UQuitMatchCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
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

struct ULandscapeHeightfieldCollisionComponent {
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

struct UAB_Tactical_Flashbang_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
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

struct UAB_WW2SMG_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct UAwardManager {
	FMulticastInlineDelegate OnAwardRegisteredDelegate; // 0x28
	FMulticastInlineDelegate OnScalingAwardStartDelegate; // 0x38
	FMulticastInlineDelegate OnScalingAwardEndDelegate; // 0x48
	FMulticastInlineDelegate OnScalingAwardValueDelegate; // 0x58
	FMulticastInlineDelegate OnAnyKillDelegate; // 0x68
	FMulticastInlineDelegate OnResetDelegate; // 0x78
	UOnFireAwardsDataAsset* OnFireAwardsDataAsset; // 0x88
};

struct UTextureRenderTarget2DArray {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	int32_t Slices; // 0xe8
	FLinearColor ClearColor; // 0xec
	EPixelFormat OverrideFormat; // 0xfc
	char bHDR : 1; // 0xfd
	char bForceLinearGamma : 1; // 0xfd
};

struct UMaterialExpressionQualitySwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct APerfTestLocation {
	FString LocationName; // 0x250
};

struct UWBP_CargoHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UWidgetAnimation* FlashBang; // 0x270
	UWidgetAnimation* Kill+15-And-Beyond; // 0x278
	UWidgetAnimation* Kill+10; // 0x280
	UWidgetAnimation* Kill+5; // 0x288
	UWidgetAnimation* DamageTaken; // 0x290
	UVerticalBox* BlockedMessagesVerticalBox; // 0x298
	USizeBox* ClientFPS; // 0x2a0
	UCanvasPanel* FlashBangableWidgets; // 0x2a8
	USizeBox* FrameTime; // 0x2b0
	USizeBox* GameLatency; // 0x2b8
	USizeBox* GameThreadTime; // 0x2c0
	USizeBox* GameToRenderLatency; // 0x2c8
	USizeBox* GPUTemp; // 0x2d0
	USizeBox* IdleTime; // 0x2d8
	UWidgetSwitcher* OverviewSwitcher; // 0x2e0
	URetainerBox* RB_CurvedHud; // 0x2e8
	USizeBox* RenderLatency; // 0x2f0
	USizeBox* RenderThreadTime; // 0x2f8
	USizeBox* RHIThreadTime; // 0x300
	UWBP_ActionPrompt_C* WBP_ActionPrompt; // 0x308
	UWBP_Announcement_C* WBP_Announcement; // 0x310
	UWBP_BasicScoreAward_C* WBP_BasicScoreAward; // 0x318
	UWBP_BombInfo_C* WBP_BombInfo; // 0x320
	UWBP_CargoGameoverviewWidget_C* WBP_CargoGameoverviewWidget_C_1; // 0x328
	UWBP_CargoObjectiveProgress_C* WBP_CargoObjectiveProgress; // 0x330
	UWBP_CargoResultScreen_C* WBP_CargoResultScreen; // 0x338
	UWBP_ChatFeed_C* WBP_ChatFeed; // 0x340
	UWBP_ClassChanged_C* WBP_ClassChanged; // 0x348
	UWBP_Crosshair_C* WBP_Crosshair; // 0x350
	UWBP_DamageTakenIndicator_C* WBP_DamageTakenIndicator; // 0x358
	UWBP_FireUpProgress_C* WBP_FireUpProgress; // 0x360
	UWBP_GameOverScreen_C* WBP_GameOverScreen; // 0x368
	UWBP_GrenadeIndicator_C* WBP_GrenadeIndicator; // 0x370
	UWBP_Hitmarker_C* WBP_Hitmarker; // 0x378
	UWBP_HUDEquipment_C* WBP_HUDEquipment_C_170; // 0x380
	UWBP_InGameLoadoutSelection_C* WBP_InGameLoadoutSelection_304; // 0x388
	UWBP_Interaction_C* WBP_Interaction; // 0x390
	UWBP_Killfeed_C* WBP_Killfeed; // 0x398
	UWBP_KillSuccess_C* WBP_KillSuccess; // 0x3a0
	UWBP_Message_C* WBP_Message; // 0x3a8
	UWBP_MiniMap_C* WBP_MiniMap; // 0x3b0
	UWBP_Overtime_Shootout_Title_C* WBP_Overtime_Shootout_Title; // 0x3b8
	UWBP_Overtime_Shootout_Transition_C* WBP_Overtime_Shootout_Transition; // 0x3c0
	UWBP_Overtime_Shootout_Victory_C* WBP_Overtime_Shootout_Victory; // 0x3c8
	UWBP_Overtime_Title_C* WBP_Overtime_Title; // 0x3d0
	UWBP_PingSelection_C* WBP_PingSelection; // 0x3d8
	UWBP_PlantProgressBar_C* WBP_PlantProgressBar; // 0x3e0
	UWBP_RespawnTimer_C* WBP_RespawnTimer; // 0x3e8
	UWBP_ShootoutOverview_C* WBP_ShootoutOverview; // 0x3f0
	UWBP_SNDLeaderboard_C* WBP_SNDLeaderboard; // 0x3f8
	UWBP_SniperVignette_C* WBP_SniperVignette; // 0x400
	UWBP_Spectating_C* WBP_Spectating; // 0x408
	UWBP_StaminaAndHealthBars_C* WBP_StaminaAndHealthBars; // 0x410
	UWBP_StrafeJumpSpeedFeedback_C* WBP_StrafeJumpSpeedFeedback; // 0x418
	UWBP_SwappingSides_C* WBP_SwappingSides; // 0x420
	UWBP_TugOfWarOverview_C* WBP_TugOfWarOverview; // 0x428
	UWBP_Vault_C* WBP_Vault; // 0x430
	UWBP_WeaponPickup_C* WBP_WeaponPickup; // 0x438
	ESlateVisibility In Visibility; // 0x440
	FMulticastInlineDelegate OnShowUpdateLeaderboard; // 0x448
	bool IsPlayingHealth; // 0x458
	FMulticastInlineDelegate OnShowUpdateGameOverScreen; // 0x460
	TArray<UWBP_GenericBlockedMessage_C*> CurrentBlockedMessages; // 0x470
	bool bBlockedUIFound; // 0x480
	float RemainingStamina; // 0x484
	float StaminaRegenMultiplier; // 0x488
	int32_t StaminaDirection; // 0x48c
	FStaminaEvent StaminaEvent; // 0x490
	float FlashRemainingDuration; // 0x4a4
};

struct UNuclearOnlineSystem {
	FMulticastInlineDelegate OnJoinSession; // 0x30
	FMulticastInlineDelegate OnPlayerJoinedLobby; // 0x40
	FMulticastInlineDelegate OnPlayerLeftLobby; // 0x50
	AOnlineBeaconHost* LobbyListener; // 0x190
	ANuclearLobbyHost* LobbyHost; // 0x198
	ANuclearLobbyClient* LobbyClient; // 0x1a0
};

struct UAsyncActionLoadPrimaryAssetClass {
	FMulticastInlineDelegate Completed; // 0x78
};

struct AMaterialInstanceActor {
	TArray<AActor*> TargetActors; // 0x220
};

struct USoundNodeWavePlayer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
};

struct UActorSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
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

struct ULightmassPrimitiveSettingsObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
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

struct UInterpTrackInstAkAudioEvent {
	float LastUpdatePosition; // 0x28
};

struct UAISense_Blueprint {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct ADatasmithImportedSequencesActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220
};

struct UDistributionFloatUniformCurve {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UInputAxisKeyDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct ULandscapeSplinesComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x440
	TArray<ULandscapeSplineSegment*> Segments; // 0x450
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x460
};

struct UJumper_MainMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* Selcetion-menu-intro; // 0x2f8
	UBack-Legend-button-Promod_C* Back-Legend-button-Promod; // 0x300
	UJumper-MM-Button_C* Jumper-MM-Button; // 0x308
	UJumper_LevelSelect_C* Jumper_LevelSelect; // 0x310
	UCanvasPanel* LevelSelectPanel; // 0x318
	UWidgetSwitcher* MenuWidgetSwitcher; // 0x320
	USandbox-MM-Button_C* Sandbox-MM-Button; // 0x328
	UTutorial-MM-Button_C* Tutorial-MM-Button; // 0x330
	UJumper_LevelSelect_C* TutorialLevelSelect; // 0x338
	UCanvasPanel* TutorialMenu; // 0x340
	UMainMenu_C* MainMenuReference; // 0x348
	bool IsLevelPicker; // 0x350
	TArray<UWidget*> MainMenuWidgetsToDisable; // 0x358
};

struct AMapFog {
	FMulticastInlineDelegate OnMapFogMaterialChanged; // 0x238
	int32_t FogRenderTargetSize; // 0x248
	UMaterialInterface* FogMaterial_UMG; // 0x250
	UMaterialInterface* FogMaterial_Canvas; // 0x258
	float MinimapOpacityHidden; // 0x260
	float MinimapOpacityExplored; // 0x264
	float MinimapOpacityRevealing; // 0x268
	UMaterialInterface* FogCombineMaterial; // 0x270
	float FogCacheLifetime; // 0x278
	bool bEnableWorldFog; // 0x27c
	UMaterialInterface* FogPostProcessMaterial; // 0x280
	float WorldOpacityHidden; // 0x288
	float WorldOpacityExplored; // 0x28c
	float WorldOpacityRevealing; // 0x290
	APostProcessVolume* PostProcessVolume; // 0x298
	EFogPostProcessVolumeOption AutoLocatePostProcessVolume; // 0x2a0
	UTextureRenderTarget2D* PermanentRevealRT_A; // 0x2a8
	UTextureRenderTarget2D* PermanentRevealRT_B; // 0x2b0
	UTextureRenderTarget2D* RevealRT_Staging; // 0x2b8
	TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> MaterialInstances; // 0x2c8
	UMaterialInstanceDynamic* FogCombineMatInst; // 0x318
	UMaterialInstanceDynamic* FogPostProcessMatInst; // 0x320
	TArray<UMapRevealerComponent*> MapRevealers; // 0x358
};

struct UWBP_BlitzPlayerAliveIcon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Background; // 0x268
	UImage* bombicon; // 0x270
	UImage* Border; // 0x278
	UImage* DeadIcon; // 0x280
	UImage* Highlight; // 0x288
	UImage* IMG_FireupIcon; // 0x290
	UImage* PlayerIcon; // 0x298
	APromodPlayerState* BoundPlayer; // 0x2a0
	UHUDTextDataAsset* HUDColour; // 0x2a8
};

struct APartyBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
};

struct UMovieSceneEntitySystem {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct AHeadquarters_Zone {
	float ZoneRadius; // 0x220
	UStaticMeshComponent* ZoneMesh; // 0x228
	UBoxComponent* CollisionComp; // 0x230
	int32_t CurrentTeamAllegiance; // 0x238
	ENationType CurrentNationAllegiance; // 0x23c
	UParticleSystem* DetonateEffect; // 0x240
	FString ImageID; // 0x260
	float CaptureProgress; // 0x270
	bool IsBeingCaptured; // 0x274
	bool ShouldTick; // 0x275
	float TimeCaptured; // 0x278
	int32_t CapturingTeam; // 0x27c
	ENationType CapturingNation; // 0x280
	float ReturnCaptureCoolDown; // 0x284
	int32_t NumPlayersCapping; // 0x288
	bool IsContested; // 0x28c
	TArray<AHeadquartersPlayerController*> PlayersInZone; // 0x290
	TArray<AHeadquartersPlayerState*> PlayerStatesInZone; // 0x2a0
	UWorldMarkerComponent* DefaultWorldMarker; // 0x2b0
	FHQMode_ZoneProperties ZoneProperties; // 0x2b8
	float CaptureTime; // 0x2c8
	float CooldownTime; // 0x2cc
	UTexture2D* AIcon; // 0x2d0
	UTexture2D* BIcon; // 0x2d8
	UTexture2D* CIcon; // 0x2e0
	float NeutraliseTime; // 0x2e8
	bool Neutral; // 0x2ec
	bool bCanBeCaptured; // 0x2ed
	bool StraightCap; // 0x2ee
	bool IsBeingNeutralised; // 0x2ef
	UAkAudioEvent* HQUnlockEvent; // 0x2f8
	UAkAudioEvent* StartHQRadioStaticEvent; // 0x300
	UAkAudioEvent* StopHQRadioStaticEvent; // 0x308
	UAkAudioEvent* HQDestroyedEvent; // 0x310
};

struct UGeometryCollectionDebugDrawComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UMaterialExpressionWorldPosition {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UWBP_Overtime_Title_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Show; // 0x268
	UImage* Mov_Title; // 0x270
	UMediaPlayer* MP_Title; // 0x278
};

struct UWBP_CustomLoadoutContainer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HorizontalBox_1; // 0x268
};

struct UMaterialExpressionComment {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
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

struct UStereoLayerShapeCylinder {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct ASpectatorBeaconHost {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UBTDecorator_IsBBEntryOfClass {
	UObject* TestClass; // 0x90
};

struct UThirdPersonAnimInstance {
	float CurrentVaultHeight; // 0x2bc
	float CurrentVaultProgress; // 0x2c0
	bool bJustLaunchedFromPad; // 0x2c4
	bool bIsKnifeEqupped; // 0x358
	UAnimMontage* StandToCrouchMontage; // 0x360
	UAnimMontage* CrouchToProneMontage; // 0x368
	UAnimMontage* ProneToCrouchMontage; // 0x370
	UAnimMontage* CrouchToStandMontage; // 0x378
	UAnimMontage* JumpLandMontage; // 0x380
	UAnimSequence* DefaultGripPoseSequence; // 0x388
	UCurveFloat* Turn70HalfSecondCurve; // 0x390
	UAnimMontage* StandShuffle20Montage; // 0x398
	UAnimMontage* StandShuffle20MontageReverse; // 0x3a0
	UAnimMontage* CrouchTurnLeft20; // 0x3a8
	UAnimMontage* CrouchTurnRight20; // 0x3b0
	UAnimMontage* StandShuffleMontage; // 0x3b8
	UAnimMontage* StandShuffleMontageReverse; // 0x3c0
	UAnimMontage* CrouchTurnLeft70; // 0x3c8
	UAnimMontage* CrouchTurnRight70; // 0x3d0
	UAnimMontage* StandShuffle180Montage; // 0x3d8
	UAnimMontage* StandShuffle180MontageReverse; // 0x3e0
	UAnimMontage* CrouchTurnLeft180; // 0x3e8
	UAnimMontage* CrouchTurnRight180; // 0x3f0
	float FootPosition; // 0x47c
	float FootPositionDirection; // 0x480
	float Speed; // 0x484
	ACharacter* CharacterOwner; // 0x488
	APromodCharacter* ThirdPersonPawn; // 0x490
	bool InAir; // 0x498
	float Direction; // 0x49c
	float StartPosition; // 0x4a0
	float RootOffsetYaw; // 0x4a4
	int32_t Stance; // 0x4a8
	bool StanceEquals2; // 0x4ac
	UAnimSequence* AdditiveGripPose3P; // 0x4b0
	FTransform AdditiveGripTransform; // 0x4c0
	bool IsOneHanded; // 0x4f0
	float TargetingAnimTransition; // 0x4f4
	bool IsRunning; // 0x4f8
	float RunLean; // 0x4fc
	bool ShouldStandStill; // 0x500
	float InstantDirection; // 0x504
	bool IsFiring; // 0x508
	bool bDisplayDead; // 0x509
	bool OnLadder; // 0x50a
	float LadderAnimationProgress; // 0x50c
	FVector LeanTranslation; // 0x510
	FRotator LeanUpperBodyRotation; // 0x51c
	FRotator LeanLowerBodyRotation; // 0x528
	bool BlendGripPose; // 0x534
	float BlendGripPoseFlt; // 0x538
	float AdditiveInvertedGripFixApply; // 0x53c
	bool AdditiveInvertedGripFixApplyBool; // 0x540
	FVector2D AODulledInverted; // 0x544
	FVector2D AODulledInvertedClamped; // 0x54c
	float IsOneHandedFloat; // 0x554
	bool LastTimeInAirST1; // 0x558
	float CardinalLerpDirection; // 0x55c
	bool bIsBot; // 0x560
	bool bIsSliding; // 0x561
};

struct UEnvQueryGenerator_ProjectedPoints {
	FEnvTraceData ProjectionData; // 0x50
};

struct UProceduralFoliageSpawner {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct AAudioVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2a8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2b8
};

struct UNavigationPath {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct UTestMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x88
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

struct UWBP_CargoPayloadStatus_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	USizeBox* Arrow1; // 0x268
	UCanvasPanel* CP_Arrows; // 0x270
	UImage* PayloadImage; // 0x278
	UImage* PayloadStateImage; // 0x280
	ACargoGameState* CargoGameState; // 0x288
	bool bCargoEnabled; // 0x290
	ECargoPlayerSideState PlayerSide; // 0x291
};

struct UInputRouter {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
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

struct UMaterialExpressionBlendMaterialAttributes {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UBTTask_WaitBlackboardTime {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UMaterialExpressionAtmosphericFogColor {
	FExpressionInput WorldPosition; // 0x40
};

struct UMedalHQSecured {
	AHQGameMode* HQGameMode; // 0x48
};

struct UPromodClassDataAsset {
	EClassName ClassName; // 0x30
	TArray<UPromodWeaponArchetypeDataAsset*> PrimaryWeaponClassData; // 0x38
	TArray<UPromodWeaponArchetypeDataAsset*> SidearmWeaponClassData; // 0x48
	TArray<UPromodWeaponArchetypeDataAsset*> MeleeWeaponClassData; // 0x58
	USkeletalMesh* BodyMesh3P_Friendly; // 0x68
	USkeletalMesh* BodyMesh3P_Enemy; // 0x70
	USkeletalMesh* HeadMesh3P_Friendly; // 0x78
	USkeletalMesh* HeadMesh3P_Enemy; // 0x80
	TArray<UPromodFireUpDataAsset*> FireUps; // 0x88
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

struct UNiagaraSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xb8
};

struct UMinimapInternal_IconMouseCapture_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	FMulticastInlineDelegate OnMouseClick; // 0x268
	bool MouseDownStarted; // 0x278
	bool MouseDragStarted; // 0x279
	FVector2D MouseDownPos; // 0x27c
	float MouseDownTime; // 0x284
	float MouseMoveThreshold; // 0x288
	FGeometry MapGeo; // 0x28c
	FMulticastInlineDelegate OnBoxSelect; // 0x2c8
	UCanvasPanelSlot* ParentCanvasSlot; // 0x2d8
	bool MouseDown_IsLeft; // 0x2e0
	bool MouseDown_IsShift; // 0x2e1
	bool MouseDown_IsCtrl; // 0x2e2
	bool bEnableBoxSelect; // 0x2e3
	FLinearColor BoxSelectColor; // 0x2e4
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct ABP_ThrowableTrophySystem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	FMulticastInlineDelegate OnImpact; // 0x2a0
};

struct ULevelStreamingDynamic {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct USoundNodeConcatenator {
	TArray<float> InputVolume; // 0x48
};

struct USceneCaptureComponentCube {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct UMovieSceneCameraShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct AVolumetricCloud {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x220
};

struct UWBP_HardpointPlayerIcons_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BlueBar; // 0x268
	UInvalidationBox* InvalidationBox_1; // 0x270
	UInvalidationBox* InvalidationBox_LeftPlayerIcons; // 0x278
	UInvalidationBox* InvalidationBox_RightPlayerIcons; // 0x280
	UHorizontalBox* LeftTeamPlayerIcons; // 0x288
	UTextBlock* LeftTeamPlayersAliveValue; // 0x290
	UImage* RedBar; // 0x298
	UHorizontalBox* RightTeamPlayerIcons; // 0x2a0
	UTextBlock* RightTeamPlayersAliveValue; // 0x2a8
	UWidgetSwitcher* TeamInfoWidgetSwitcherL; // 0x2b0
	UWidgetSwitcher* TeamInfoWidgetSwitcherR; // 0x2b8
	TArray<UWBP_PlayerAliveIcon_C*> LeftTeamWidgets; // 0x2c0
	TArray<UWBP_PlayerAliveIcon_C*> RightTeamWidgets; // 0x2d0
	int32_t MissingWidgets; // 0x2e0
	int32_t AlivePlayers_Team0; // 0x2e4
	int32_t AlivePlayers_Team1; // 0x2e8
	TArray<APlayerState*> PlayersTeam0; // 0x2f0
	TArray<APlayerState*> PlayersTeam1; // 0x300
	bool bIsShootout; // 0x310
};

struct UShadowMapTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x100
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

struct UNiagaraDataInterfaceAudioSubmix {
	USoundSubmix* Submix; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamVector {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct USkeletalMeshComponent {
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

struct USoundNodeSoundClass {
	USoundClass* SoundClassOverride; // 0x48
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

struct ABattalionPlayerController_Menu {
	UAkAudioEvent* StopContinuousSoundsEvent; // 0x570
};

struct UPoseWatch {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct ULevelSequenceDirector {
	ULevelSequencePlayer* Player; // 0x28
};

struct UNUIBombMatchResultScreen {
	bool bTeamsReversed; // 0x278
	FText MatchResultTitleText; // 0x280
	FText LeftTeamRoundsWon; // 0x298
	FText RightTeamRoundsWon; // 0x2b0
	FText ModeName; // 0x2c8
	FText MapName; // 0x2e0
	FText MatchTime; // 0x2f8
	FLinearColor ResultColor; // 0x310
	FText GameEndTime; // 0x320
};

struct UPhysicsConstraintTemplate {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8
	FConstraintProfileProperties DefaultProfile; // 0x1f8
};

struct UButtonStyleAsset {
	FButtonStyle ButtonStyle; // 0x28
};

struct UDistributionFloat {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UInputAxisDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UMaterialExpressionShadingModel {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct UNUIButton {
	UButton* Button; // 0x260
	UTextBlock* ButtonText; // 0x268
	UImage* ButtonBackground; // 0x270
	ENUIButtonStyle ActiveStyle; // 0x278
	FNUIButtonStyle NormalStyle; // 0x280
	FNUIButtonStyle HoveredStyle; // 0x6d0
	FNUIButtonStyle PressedStyle; // 0xb20
	bool bAllowSFX; // 0xf70
};

struct UARPointComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
};

struct UObjectLibrary {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct ATugOfWarMonorailPath {
	bool bTeam0IsAt0thSplinePoint; // 0x309
	float AttackersTugOfWarSpeedMultiplier; // 0x30c
	float DefaultTugOfWarMonorailSpeedMultiplier; // 0x310
	float DisableTugOfWarTime; // 0x314
	float EnableTugOfWarTime; // 0x318
	bool bIsInSuddenDeath; // 0x31c
	float SuddenDeathWinPercentage; // 0x320
};

struct UAccept_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Clicked; // 0x268
	UWidgetAnimation* Default; // 0x270
	UWidgetAnimation* Selected; // 0x278
	UWidgetAnimation* Unselected; // 0x280
	UButton* PM-BUTTON; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x290
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

struct UCapsuleComponent {
	float CapsuleHalfHeight; // 0x458
	float CapsuleRadius; // 0x45c
};

struct UUniformInteger {
	int32_t Magnitude; // 0xb0
};

struct USoundNodeSwitch {
	FName IntParameterName; // 0x48
};

struct UAudioPassByComponent {
	USphereComponent* SoundEffectColliderCollision; // 0x1f8
};

struct UMedal40BombCTF {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UVectorField {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UTextureRenderTargetVolume {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	int32_t SizeZ; // 0xe8
	FLinearColor ClearColor; // 0xec
	EPixelFormat OverrideFormat; // 0xfc
	char bHDR : 1; // 0xfd
	char bForceLinearGamma : 1; // 0xfd
};

struct APlayerState {
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
	FUniqueNetIdRepl UniqueID; // 0x250
	APawn* PawnPrivate; // 0x280
	FString PlayerNamePrivate; // 0x300
};

struct USoundNodeModulatorContinuous {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UNiagaraSimulationStageBase {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct UNavLinkDefinition {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UDatasmithStaticMeshComponentTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct UInputBehaviorSet {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct UWBP_RadialMenuItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Selected; // 0x268
	UImage* IMG_ItemImage; // 0x270
};

struct UNiagaraDataInterfaceVolumeTexture {
	UVolumeTexture* Texture; // 0x38
};

struct UNavigationSystemConfig {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
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

struct AHUD {
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

struct ABombGameState {
	TArray<ABombMode_Bomb*> Bombs; // 0x4a0
	TArray<ABombMode_Zone*> BombZones; // 0x4b0
	float PlantTime; // 0x4c0
	float QuickPlantTime; // 0x4c4
	float DefuseTime; // 0x4c8
	bool BombDetonated; // 0x4cc
	bool BombDefused; // 0x4cd
	bool DecideTeamRoundActive; // 0x4ce
	bool DecideTeamRoundComplete; // 0x4cf
	bool DecideTeamVoteInProgress; // 0x4d0
	int32_t DecideTeamRoundWinner; // 0x4d4
	FString DecideTeamVoteResult; // 0x4d8
	bool UseDecideTeamRound; // 0x4e8
	bool DecideTeamRoundIsKnifeOnly; // 0x4e9
	int32_t OvertimeCounter; // 0x4ec
	float BombInteractionProgress; // 0x4f0
	float BombInteractionTimeStamp; // 0x4f4
	ABombPlayerState* BombInteractionPlayer; // 0x4f8
	float ShootoutRoundTime; // 0x500
	float ShootoutSetupTime; // 0x504
	float ShootoutTransitionTime; // 0x508
	float ShootoutPostRoundTime; // 0x50c
	float OverviewAndShootoutTitleScreenTimes; // 0x510
	bool bBombPlanted; // 0x514
	TArray<ABombMode_BombSpawn*> BombSpawns; // 0x518
	ENationType AttackingNation; // 0x528
	int32_t AttackingTeam; // 0x52c
};

struct UMapSmokeWidget {
	ABattalionSmokeGrenade* LinkedSmoke; // 0x268
	UMaterialInstanceDynamic* CachedMaterial; // 0x270
	ABeacon* Beacon; // 0x278
	float BeaconScaleX; // 0x280
	float BeaconScaleY; // 0x284
	float Zoom; // 0x288
	UVerticalBox* MarkerVerticalBox; // 0x290
	UImage* SmokeImage; // 0x298
	UImage* SmokeImage2; // 0x2a0
	UImage* SmokeImage3; // 0x2a8
	FVector2D ScaledPlayerPos; // 0x2b0
	float RotationAngle; // 0x2b8
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2c0
	UMaterialInstanceDynamic* ProgressMaterial; // 0x2c8
	bool bInActiveArray; // 0x2f4
};

struct ATUTPlayerState {
	FString PendingInventory; // 0x590
	ESlotType PendingWeaponSlot; // 0x5a0
};

struct UIpConnection {
	float SocketErrorDisconnectDelay; // 0x1b40
};

struct UGranularSynth {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UMaterialExpressionLightmassReplace {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UWBP_CargoProgressCheckpoint_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_CheckpointProgress; // 0x268
	UImage* IMG_Colour; // 0x270
	UImage* ObjectiveImage; // 0x278
	USizeBox* SizeBox; // 0x280
	USizeBox* SizeBox_1; // 0x288
	UWidgetSwitcher* WidgetSwitcher_1; // 0x290
	ACargoCheckpoint* LinkedCheckpoint; // 0x298
	UMaterialInstanceDynamic* ProgressMaterial; // 0x2a0
	FLinearColor FillColour; // 0x2a8
};

struct UNUIMapSelectDisplay {
	FString MapName; // 0x260
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

struct APromodCharacter {
	UPostProcessComponent* PostProcessComponent; // 0x27b8
	UMapIconComponent* MapIconComponent; // 0x27c0
	float MapIconSize; // 0x27c8
	UTexture2D* ArrowMiniMapTexture; // 0x27d0
	UTexture2D* BombMiniMapTexture; // 0x27d8
	UTexture2D* BombMiniMapObjectiveTexture; // 0x27e0
	UWidgetComponent* SpatialMarkerComponent; // 0x27e8
	UMapViewComponent* MapViewComponent; // 0x27f0
	UTimelineComponent* VaultTimeline; // 0x27f8
	UCurveFloat* VaultTimelineCurve; // 0x2800
	UCurveVector* VaultLowWallCurve; // 0x2808
	UCurveVector* VaultHighWallCurve; // 0x2810
	float VaultLowWallMax; // 0x2818
	bool bIsVaulting; // 0x281c
	FVaultData LastVault; // 0x2820
	UWorldMarkerComponent* BombCarrierWorldMarker; // 0x2888
	bool bIsSprinting; // 0x2890
	bool bAllowGizmo; // 0x2891
	float ProneLandBobScalar; // 0x2894
	FName SpatialMarkerParentBoneName; // 0x2898
	FVector SpatialMarkerPositionalOffset; // 0x28a0
	AMapIconActor* EnemyMapIconActorClass; // 0x28b0
	AMapIconActor* EnemyMapIconActor; // 0x28b8
	FLinearColor MinimapIconSelfColour; // 0x28c0
	FLinearColor MinimapIconFriendlyColour; // 0x28d0
	TArray<FKick> ViewKicks; // 0x28e0
	TArray<FKick> ViewKickRecoveries; // 0x28f0
	FMulticastInlineDelegate OnLandedDelegate; // 0x2900
	bool bPrevIsSprinting; // 0x2910
	bool bIsProned; // 0x2911
	bool bCanSeeBomb; // 0x2912
	bool bIsSliding; // 0x2913
	bool bIsOnFire; // 0x2914
	int32_t OnFireScore; // 0x2918
	float ScalingFactor; // 0x291c
	float WallRunChromaticAberrationAmount; // 0x2920
	float WallRunVelocityThresholdForEffects; // 0x2924
	float WallRunFovIncrease; // 0x2928
	float WallRunEffectIncreaseRate; // 0x292c
	float WallRunEffectDecreaseRate; // 0x2930
	float WallRunTimeToHitMaxEffect; // 0x2934
	bool bLaunchedFromPad; // 0x293c
	USkeletalMesh* Bomb1PSkeletalMesh; // 0x2940
	USkeletalMesh* Bomb3PSkeletalMesh; // 0x2948
	UObject* Bomb1PSkeletalMeshAnimClass; // 0x2950
	UObject* Bomb3PSkeletalMeshAnimClass; // 0x2958
	FSpecialAnim PlantingAnim; // 0x2960
	FSpecialAnim QuickPlantingAnim; // 0x2980
	FSpecialAnim DefusingAnim; // 0x29a0
	UMaterialInterface* SnapShotMaterial; // 0x29c0
	UMaterialInstanceDynamic* SnapShotMaterialInstance; // 0x29c8
	APingActor* PingActorClass; // 0x29d0
	float healthRTPCToPush; // 0x29d8
	ABattalionWeapon_Instant* HandCannonWeapon; // 0x29e0
	ABattalionWeapon* HandCannonWeaponClass; // 0x29e8
	UPromodDeathCamera* DeathCameraComponent; // 0x2a50
	float InputDoubleTapTime; // 0x2a5c
	float InputHoldTime; // 0x2a60
	TArray<APingActor*> ActivePingActors; // 0x2a68
	APingActor* LastPredictedPing; // 0x2a78
	AActor* LastLookedAtInteractable; // 0x2a80
	AActor* CurrentlyLookedAtInteractable; // 0x2a88
	AActor* CurrentInteractable; // 0x2a90
	float InteractionDistance; // 0x2aa0
	UPhysicalMaterial* NoDamagePhsyMat; // 0x2aa8
	UPhysicalMaterial* SilentNoDamagePhsyMat; // 0x2ab0
	bool DebugShowStats; // 0x2ab8
	bool bDebugShowCurrentControllerType; // 0x2ab9
	bool bIsGizmoHeld; // 0x2ad5
	APromodGizmo* GizmoClass; // 0x2ad8
	APromodGizmo* GizmoPtr; // 0x2ae0
	UPromodInventoryComponent* InventoryComponent; // 0x2af0
	UAkAudioEvent* HotdropLandSound; // 0x2af8
	float FootstepSpeedThreshold; // 0x2b00
	float OldMoveVal; // 0x2b04
	UAkAudioEvent* SprintEndEvent; // 0x2b10
	UAkAudioEvent* SprintDrainEventStart; // 0x2b18
	UAkAudioEvent* SprintDrainEventStop; // 0x2b20
	UAkAudioEvent* FireUpRifleEvent; // 0x2b28
	UAkAudioEvent* FireUpSMGEvent; // 0x2b30
	UAkAudioEvent* FireUpSniperEvent; // 0x2b38
	UAkAudioEvent* FireUpHandcannonStopEvent1P; // 0x2b40
	UAkAudioEvent* NearMissSound; // 0x2b48
	UAkAudioEvent* CollateralSound; // 0x2b50
	UAkAudioEvent* KillConfirmedLvl1; // 0x2b58
	UAkAudioEvent* KillConfirmedLvl2; // 0x2b60
	UAkAudioEvent* KillConfirmedLvl3; // 0x2b68
	UAkAudioEvent* KillConfirmedLvl4; // 0x2b70
	UAkAudioEvent* KillConfirmedLvl5; // 0x2b78
	UAkAudioEvent* FireUpReadySound; // 0x2b80
	UAkAudioEvent* DamageFromBulletSound; // 0x2b88
	UAkAudioEvent* ThirdPDamageFromBulletSound; // 0x2b90
	UAkAudioEvent* DamageFromWorldCollapseSound; // 0x2b98
	UAkAudioEvent* WorldLoadingEvent; // 0x2ba0
	UAkAudioEvent* ResupplyAmmoFromCargoSound; // 0x2ba8
	UAkAudioEvent* RespawnPlayerSound; // 0x2bb0
	float SprintDrainTriggerZone; // 0x2bb8
	bool bDoingWeaponBlockingAction; // 0x2bbd
	float CurrentLeanValue; // 0x2bc0
	float SmoothMaxLeanFrac; // 0x2bc4
	float WeaponCycleDelay; // 0x2bc8
	bool bCanADSInProne; // 0x2bcd
	FVector LeanCameraOffset; // 0x2bd0
	UAkAudioEvent* SMGStartLoop; // 0x2be0
	UAkAudioEvent* SMGStopLoop; // 0x2be8
	UAkAudioEvent* ARStartLoop; // 0x2bf0
	UAkAudioEvent* ARStopLoop; // 0x2bf8
	AFireUpAction* PredictedFireUpAction; // 0x2c00
	AFireUpAction* ReplicatedFireUpAction; // 0x2c08
	AFireUpAction* PredictedQuickUtilFireUpAction; // 0x2c10
	AFireUpAction* ReplicatedQuickUtilFireUpAction; // 0x2c18
	UPromodCharacterMovementComponent* PromodCharacterMovementComponent; // 0x2c20
	bool ShouldMakeFootstepSound; // 0x2c32
	float InitialFootstepDelay; // 0x2c90
	float ForwardFootstepIntervalTimeWalk; // 0x2c94
	float ForwardFootstepIntervalTimeSprint; // 0x2c98
	bool EnableASDFootstepIntervals; // 0x2c9c
	float LeftFootstepIntervalTimeWalk; // 0x2ca0
	float BackFootstepIntervalTimeWalk; // 0x2ca4
	float GizmoAnimationTimeLength; // 0x2cac
	float GizmoPrepareTime; // 0x2cb0
	float GizmoEndPrepareTime; // 0x2cb4
	float GizmoWeaponEquipTime; // 0x2cb8
	FCharacterAnim UseGizmoAnim; // 0x2cc0
	float GizmoChromaticAberrationAmount; // 0x2cd0
	float GizmoEffectIncreaseRate; // 0x2cd4
	float GizmoEffectDecreaseRate; // 0x2cd8
	float GizmoTimeToHitMaxEffect; // 0x2cdc
	float GizmoStopEffectTime; // 0x2ce0
	float GizmoStartEffectTime; // 0x2ce4
	float Target360SpinRotation; // 0x2cf4
	float StrafeKillSpeedTarget; // 0x2d08
	float StrafeActiveTime; // 0x2d0c
	float CurrentHUDSprintValue; // 0x2d18
	FName LastHitBoneName; // 0x2d40
	FVector LastHitLocation; // 0x2d48
	AWorldVFXManager* WorldVFXManager; // 0x2d58
	UTimelineComponent* StunTimelinePtr; // 0x2d60
	UAnimMontage* StunnedMontagePtr; // 0x2d68
	UAkAudioEvent* StunStartSound; // 0x2d70
	UAkAudioEvent* StunStopSound; // 0x2d78
	bool bIsStunned; // 0x2d80
	UCurveFloat* StunCurvePtr; // 0x2d88
	UMaterialParameterCollection* StunMeterialParameterCollectionPtr; // 0x2d90
	APromodGameState* PromodGameState; // 0x2dc0
	ACargoGameState* CargoGameState; // 0x2dc8
};

struct ACameraShakeSourceActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
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

struct UParticleModuleOrbitBase {
	char bUseEmitterTime : 1; // 0x30
};

struct UHUDMaster {
	UAwardManager* AwardManager; // 0x260
};

struct UNiagaraDataInterfaceVectorCurve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct UWBP_BasicScoreAward_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Glitch; // 0x268
	UWidgetAnimation* FadeOut; // 0x270
	UWidgetAnimation* PopIn; // 0x278
	UInvalidationBox* IB_Root; // 0x280
	UOverlay* Overlay_1; // 0x288
	UTextBlock* TextBlock_82; // 0x290
	UTextBlock* TextBlock_BLUE; // 0x298
	UTextBlock* TextBlock_RED; // 0x2a0
	int32_t CurrentScore; // 0x2a8
	float TimeToFadeOut; // 0x2ac
	float ResetScoreTime; // 0x2b0
	UHUDTextDataAsset* HUDText Colour; // 0x2b8
	FTimerHandle TimerHandle_ResetScore; // 0x2c0
	FTimerHandle TimerHandle_FadeOut; // 0x2c8
};

struct UABP_Deagle_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct USoundfieldSubmix {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct AFFAPlayerState {
	FString PendingInventory; // 0x598
	bool FirstWeapon; // 0x5a8
};

struct UBackgroundBlurSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct UBTDecorator_TimeLimit {
	float TimeLimit; // 0x68
};

struct UNUIMatchResultScreen {
	FText MatchResultText; // 0x278
	FText ModeName; // 0x290
	FText MapName; // 0x2a8
	FText MatchTime; // 0x2c0
	FLinearColor ResultColor; // 0x2d8
	FText GameEndTime; // 0x2e8
	bool bExperienceAwarded; // 0x308
	TArray<ABattalionPlayerState*> TopPlayerStates; // 0x310
	TArray<FText> TopPlayerScoreTexts; // 0x320
	TArray<FMapModeVoteInfo> VoteOptions; // 0x330
	ABattalionGameState* GameState; // 0x340
	bool HasVoted; // 0x348
	int32_t MatchResult; // 0x34c
};

struct UABP_UNDCSidearm_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4b8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x538
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x580
	FAnimNode_Slot AnimGraphNode_Slot; // 0x620
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x668
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x6e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x738
	float TargetingTransition; // 0x7d8
	bool IsTargeting; // 0x7dc
};

struct UABP_WW2Rifle_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
};

struct USourceEffectChorusPreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct UMaterialExpressionArctangent2 {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct ULightMapVirtualTexture2D {
	TArray<int8_t> TypeToLayer; // 0x100
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance {
	int32_t LightIndex; // 0x40
};

struct AFFAGameMode {
	bool EndOnMatchPointWin; // 0x838
	float WeaponSelectGracePeriod; // 0x83c
	float RoundTimeLeftUntilStopBackfill; // 0x840
	float ScorePctToStopBackfill; // 0x844
	bool AlreadyStoppedBackfill; // 0x848
	bool MatchEndHUDShown; // 0x849
	AFFAGameState* FFAGameState; // 0x850
	TArray<AActor*> UsedSpawns; // 0x858
	TArray<ABattalionPlayerControllerGMBase*> CachedPlayers; // 0x868
	AFFAPlayerController* CurrentlyWinningPC; // 0x878
	AFFAPlayerController* CurrentlySecondPlacePC; // 0x880
	FNationSound EventRivalIn2ndGaining; // 0x888
	FNationSound EventYouAreIn2ndPlace; // 0x8a8
	FNationSound EventOneMinLeft_Losing; // 0x8c8
	FNationSound EventHalfway_Victory; // 0x8e8
};

struct UNiagaraDataInterfaceFieldSystem {
	UBlueprint* BlueprintSource; // 0x38
	AActor* SourceActor; // 0x40
	FIntVector FieldDimensions; // 0x48
	FVector MinBounds; // 0x54
	FVector MaxBounds; // 0x60
};

struct UWBP_ServerBrowserItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_MapBackground; // 0x268
	UBorder* Border_ModeBackground; // 0x270
	UBorder* Border_PingBackground; // 0x278
	UBorder* Border_PlayersBackground; // 0x280
	UBorder* Border_TitleBackground; // 0x288
	UBorder* Border_TypeBackground; // 0x290
	UButton* Button; // 0x298
	UBorder* ContainerBorder; // 0x2a0
	UImage* IMG_MapBackground; // 0x2a8
	UImage* IMG_MapLeftBar; // 0x2b0
	UImage* IMG_ModeBackground; // 0x2b8
	UImage* IMG_ModeLeftBar; // 0x2c0
	UImage* IMG_PingBackground; // 0x2c8
	UImage* IMG_PingLeftBar; // 0x2d0
	UImage* IMG_PlayersBackground; // 0x2d8
	UImage* IMG_PlayersLeftBar; // 0x2e0
	UImage* IMG_SelectedArrow; // 0x2e8
	UImage* IMG_TitleBackground; // 0x2f0
	UImage* IMG_TitleLeftBar; // 0x2f8
	UImage* IMG_TypeBackground; // 0x300
	UImage* IMG_TypeLeftBar; // 0x308
	UImage* IMG_TypeLocked; // 0x310
	UImage* IMG_TypePublic; // 0x318
	UTextBlock* MapTxt; // 0x320
	UTextBlock* ModeTxt; // 0x328
	UTextBlock* PingTxt; // 0x330
	UTextBlock* PlayerCountTxt; // 0x338
	UTextBlock* ServerNameTxt; // 0x340
	UWidgetSwitcher* WS_ServerType; // 0x348
	FNuclearSessionResult Session; // 0x350
	FMulticastInlineDelegate OnSelected; // 0x518
	FLinearColor DefaultBrushColor; // 0x528
	FLinearColor DefaultContentColor; // 0x538
	FLinearColor ActiveBrushColor; // 0x548
	FLinearColor ActiveContentColor; // 0x558
	FSlateColor MatchingChangelistColor; // 0x568
	bool HasBeenHighlighted; // 0x590
	bool Is Active; // 0x591
	FString Mode; // 0x598
	UWBP_ServerBrowser_C* ServerBrowser; // 0x5a8
};

struct UDeviceProfileManager {
	TArray<UObject*> Profiles; // 0x28
};

struct UPromodTeam {
	TArray<FLiveClassData> LiveClassUsage; // 0x170
};

struct ACameraRig_Rail {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct UCrateDataAsset {
	TArray<FCrateEntity> Crates; // 0x30
};

struct UParticleModuleCollisionGPU {
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

struct UMedalJustKeepShootin {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct UFoliageInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x668
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x678
	FGuid GenerationGuid; // 0x688
};

struct UBP_RegenCameraModifier_C {
	float FovAddition; // 0x48
	UMaterialInstanceDynamic* PostProcessMaterial; // 0x50
	float Radius; // 0x58
	float Intensity; // 0x5c
};

struct UWBP_ActionPrompt_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UTextBlock* descriptiontext; // 0x290
	UTextBlock* Hold; // 0x298
	UInvalidationBox* IB_Root; // 0x2a0
	UPlatformKeyImage_C* PlatformKeyImage_2; // 0x2a8
	UHUDTextDataAsset* HUDColour; // 0x2b0
};

struct UMedalLastMinuteSavior {
	ATDMGameMode* TDMGameMode; // 0x48
	TArray<FLastMinuteSaviorKillTracker> KillTrackers; // 0x50
};

struct UMaterialExpressionStaticBool {
	char Value : 1; // 0x40
};

struct UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UNavRelevantComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UWBP_SNDLeaderboardItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Avatar; // 0x268
	UBorder* Border_Defuses; // 0x270
	UBorder* Border_FireupIcon; // 0x278
	UBorder* Border_FireupProgress; // 0x280
	UBorder* Border_KDA; // 0x288
	UBorder* Border_Ping; // 0x290
	UBorder* Border_Plants; // 0x298
	UBorder* Border_PlayerName; // 0x2a0
	UBorder* Border_Score; // 0x2a8
	UImage* IMG_DeadIcon; // 0x2b0
	UImage* IMG_FireupIcon; // 0x2b8
	UImage* IMG_SelfBorder; // 0x2c0
	UImage* PlayerIcon; // 0x2c8
	UTextBlock* TB_Defuses; // 0x2d0
	UTextBlock* TB_FireupProgress; // 0x2d8
	UTextBlock* TB_KDA; // 0x2e0
	UTextBlock* TB_Ping; // 0x2e8
	UTextBlock* TB_Plants; // 0x2f0
	UTextBlock* TB_PlayerName; // 0x2f8
	UTextBlock* TB_Score; // 0x300
	UWidgetSwitcher* WS_PlayerIcon; // 0x308
	bool bIsInitialized; // 0x310
	FColor AliveColor; // 0x314
	FColor DeadColor; // 0x318
	FLeaderboardData Player Data; // 0x320
	APromodPlayerState* Player State; // 0x368
	int32_t DebugTeamNumber; // 0x370
	FLinearColor FriendlyColour; // 0x374
	FLinearColor EnemyColour; // 0x384
	FLinearColor FriendlyColourFireup; // 0x394
	FLinearColor EnemyColourFireup; // 0x3a4
};

struct UKantanCartesianChartWidgetStyle {
	FKantanCartesianChartStyle ChartStyle; // 0x30
};

struct UHUDRichTextBlock {
	FSlateFontInfo Font; // 0x678
	FLinearColor Color; // 0x6d0
};

struct USoundfieldEndpointSubmix {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct UAISystemBase {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct UParticleModuleMeshRotation {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
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

struct UPreviewMeshCollection {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UToIntegerField {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UWBP_HardpointZoneListEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BackgroundLeft; // 0x268
	UImage* BackgroundRight; // 0x270
	UTextBlock* HardpointName; // 0x278
	bool bIsActive; // 0x280
};

struct UNUIVotingMenu {
	char VotesYes; // 0x278
	char VotesNo; // 0x279
	bool bVoted; // 0x27a
	bool bVotedYes; // 0x27b
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

struct UPhysicsConstraintComponent {
	AActor* ConstraintActor1; // 0x1f8
	FConstrainComponentPropName ComponentName1; // 0x200
	AActor* ConstraintActor2; // 0x208
	FConstrainComponentPropName ComponentName2; // 0x210
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x228
	FMulticastInlineDelegate OnConstraintBroken; // 0x230
	FConstraintInstance ConstraintInstance; // 0x240
};

struct UMedalTeamPlayer {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct USMStateMachineInstance {
	bool bWaitForEndState; // 0xc0
	bool bReuseCurrentState; // 0xc1
	bool bReuseIfNotEndState; // 0xc2
};

struct ALight {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct ABattalionIncendiaryEffect {
	bool bFireFxLoaded; // 0x220
	bool bFireFxSpawned; // 0x221
	bool bExploded; // 0x222
	TArray<FFireImpact> FireImpacts; // 0x228
	UAkAudioEvent* FireLoopSound; // 0x238
	UAkAudioEvent* FireLoopEnd; // 0x240
	UAkComponent* AkComponent; // 0x248
	float TimeSinceExplosion; // 0x250
	UParticleSystem* FireFX; // 0x258
	int32_t NumRings; // 0x260
	int32_t BaseFireLocationsPerRing; // 0x264
	float DistanceBetweenRings; // 0x268
	int32_t MaxFireDistance; // 0x26c
	float FireTraceGravity; // 0x270
	float DamageCapsuleHalfHeight; // 0x274
	float DamageCapsuleRadius; // 0x278
	float IncendiaryLength; // 0x27c
	float FireLoopEndSoundLength; // 0x280
	UDamageType* FireDamageType; // 0x288
	float DamageRate; // 0x290
	float MaxFireDamage; // 0x294
	float TimeUntilMaxDamage; // 0x298
	int32_t NumDamageRings; // 0x29c
	int32_t BaseDamageTracesPerRing; // 0x2a0
	bool bDebugIncendiaryLocations; // 0x2a4
	FTimerHandle TimerHandle_FireDamageTick; // 0x2a8
	UParticleSystemComponent* EmitterComponent; // 0x2b0
	TArray<UCapsuleComponent*> FireCapsuleComponents; // 0x2b8
	TArray<UParticleSystemComponent*> FireParticleComponents; // 0x2c8
	AController* InstigatingController; // 0x2d8
	APawn* InstigatingPawn; // 0x2e0
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

struct UPlayFabAuthenticationAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xf8
	UPlayFabJsonObject* RequestJsonObj; // 0x100
	UPlayFabJsonObject* ResponseJsonObj; // 0x108
};

struct UBTDecorator_ConeCheck {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UTexture2D {
	int32_t LevelIndex; // 0xd8
	int32_t FirstResourceMemMip; // 0xdc
	char bTemporarilyDisableStreaming : 1; // 0xe0
	TextureAddress AddressX; // 0xe1
	TextureAddress AddressY; // 0xe2
	FIntPoint ImportedSize; // 0xe4
};

struct UBTTask_RotateToFaceBBEntry {
	float Precision; // 0x98
};

struct APlayerCameraManager {
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

struct UBlendSpace1D {
	bool bScaleAnimation; // 0x148
};

struct UAkGeometryComponent {
	AkMeshType MeshType; // 0x1f8
	int32_t LOD; // 0x1fc
	float WeldingThreshold; // 0x200
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x208
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x258
	char bEnableDiffraction : 1; // 0x268
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x268
	AActor* AssociatedRoom; // 0x270
	FAkGeometryData GeometryData; // 0x288
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

struct AAimTrainingManager {
	UStaticMeshComponent* StartTrainingTarget; // 0x220
	UStaticMeshComponent* EndTrainingTarget; // 0x228
	UBoxComponent* TargetArea; // 0x230
	EAimTrainingMode TrainingMode; // 0x238
	AAimTrainingTarget* TargetActorClass; // 0x240
	FVector TargetBaseScale; // 0x248
	float TargetScaleScalar; // 0x254
	bool EndOnNoLives; // 0x258
	char MaxLives; // 0x259
	float TrainingStartDelay; // 0x25c
	bool EndOnTimer; // 0x260
	float TrainingTime; // 0x264
	float RegularTargetLifetime; // 0x268
	bool RegularUseConstantInterval; // 0x26c
	float RegularConstantInterval; // 0x270
	FVector2D RegularTargetIntervalRange; // 0x274
	FVector2D RegularTargetIntervalTimeRange; // 0x27c
	bool RegularUseConstantSize; // 0x284
	bool RandomiseReflexLocation; // 0x285
	bool MaxReflexTime; // 0x286
	float DoubleTargetLifetime; // 0x288
	float DoubleTimeBetweenTargets; // 0x28c
	float MovingTargetLifetime; // 0x290
	float TargetMoveSpeed; // 0x294
	bool MovingUseConstantInterval; // 0x298
	float MovingConstantInterval; // 0x29c
	FVector2D MovingTargetIntervalRange; // 0x2a0
	FVector2D MovingTargetIntervalTimeRange; // 0x2a8
	bool MovingUseConstantSize; // 0x2b0
	TArray<AAimTrainingTarget*> ActiveTargets; // 0x2b8
	char ActiveTrainingLivesLeft; // 0x2c8
};

struct UTimeDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_ComparisonIndicator; // 0x268
	UImage* IMG_PlusIcon; // 0x270
	UTextBlock* TimeDisplayText; // 0x278
	UWidgetSwitcher* WS_ComparisonType; // 0x280
	float Seconds; // 0x288
	bool ShouldColourText; // 0x28c
	bool ShouldUseTriangle; // 0x28d
};

struct UActorSequenceComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct AKillRunCourse {
	TArray<FKillRunCheckpointData> CheckpointData; // 0x2c0
	UAkAudioEvent* CollateralSound; // 0x308
	UAkAudioEvent* KillConfirmedLvl1; // 0x310
	UAkAudioEvent* KillConfirmedLvl2; // 0x318
	UAkAudioEvent* KillConfirmedLvl3; // 0x320
	UAkAudioEvent* KillConfirmedLvl4; // 0x328
	UAkAudioEvent* KillConfirmedLvl5; // 0x330
};

struct UNUILoadoutCard {
	FLoadoutCard CardData; // 0x278
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

struct UWBP_CargoGameoverviewWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e8
	UWidgetAnimation* Pulse; // 0x3f0
	UWidgetAnimation* Anim_Notification; // 0x3f8
	UTextBlock* NotReady; // 0x400
	UPlatformKeyImage_C* PlatformKeyImage; // 0x408
	UTextBlock* PlayerList; // 0x410
	UTextBlock* PressOrHoldTextBox; // 0x418
	UHorizontalBox* ReadyupBox; // 0x420
	UScaleBox* ScaleBox; // 0x428
	USpacer* Spacer_3; // 0x430
	USpacer* Spacer_291; // 0x438
	UTextBlock* TextBlock_4; // 0x440
	UTextBlock* Timer; // 0x448
	UTextBlock* ToReadyUp; // 0x450
	UVerticalBox* VerticalBox_1; // 0x458
	UVerticalBox* VerticalBox_150; // 0x460
	UTextBlock* WaitingText; // 0x468
	UWBP_CargoOverviewScore_C* WBP_CargoOverviewScore; // 0x470
	UWBP_CargoPlayerIcons_C* WBP_CargoPlayerIcons; // 0x478
	TArray<UWBP_PlayerAliveIcon_C*> LeftTeamWidgets; // 0x480
	TArray<UWBP_PlayerAliveIcon_C*> RightTeamWidgets; // 0x490
	int32_t MissingWidgets; // 0x4a0
	int32_t AlivePlayers_Team0; // 0x4a4
	int32_t AlivePlayers_Team1; // 0x4a8
	bool bIsShootout; // 0x4ac
	UHUDTextDataAsset* HUDColour; // 0x4b0
	ACargoGameState* CargoGameState; // 0x4b8
	bool bOverrideVisibility; // 0x4c0
	ECargoPlayerSideState PlayerSide; // 0x4c1
};

struct UNoiseField {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct UChildConnection {
	UNetConnection* Parent; // 0x1af0
};

struct UCreateSessionCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UMaterialExpressionCrossProduct {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UNUIFFAObjectiveScores {
	ESlateVisibility RivalVisibility; // 0x2f8
};

struct UInterpTrackFloatMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UAudioCaptureComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct UPawnActionsComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UAnimBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct UMaterialShaderQualitySettings {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UGridPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct UCircularProgressBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* CPB_Image; // 0x268
	USizeBox* CPB_SizeBox; // 0x270
	USizeBox* FI_SizeBox; // 0x278
	UPlatformKeyImage_C* PlatformKeyImage; // 0x280
	float Scale; // 0x288
	UMaterialInstanceDynamic* DMI; // 0x290
	float MaxValue; // 0x298
	float MinValue; // 0x29c
	float tmp; // 0x2a0
	float CurrentPercentage; // 0x2a4
	float CurrentRealValue; // 0x2a8
	FLinearColor Color And Opacity; // 0x2ac
	float LastPercentage; // 0x2bc
	float LastRealvalue; // 0x2c0
	FMulticastInlineDelegate EventProgressBarFilled; // 0x2c8
	FMulticastInlineDelegate EventProgressBarZero; // 0x2d8
	float InitialValue; // 0x2e8
	bool IsInitialValueAPercentage; // 0x2ec
	FLinearColor Tint; // 0x2f0
	FLinearColor BackgroundColor; // 0x300
};

struct UShapeComponent {
	UBodySetup* ShapeBodySetup; // 0x440
	UNavAreaBase* AreaClass; // 0x448
	FColor ShapeColor; // 0x450
	char bDrawOnlyIfSelected : 1; // 0x454
	char bShouldCollideWhenPlacing : 1; // 0x454
	char bDynamicObstacle : 1; // 0x454
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

struct ABP_ThrowingKnife_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
	USphereComponent* Sphere; // 0x3d8
	bool bLanded; // 0x3e0
	float MaxRetrievalTime; // 0x3e4
	float RotationRate; // 0x3e8
};

struct UMaterialExpressionSign {
	FExpressionInput Input; // 0x40
};

struct UAkMusicSyncCallbackInfo {
	int32_t PlayingID; // 0x30
	FAkSegmentInfo SegmentInfo; // 0x34
	EAkCallbackType MusicSyncType; // 0x58
	FString UserCueName; // 0x60
};

struct USoundNodeDoppler {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UCanvasRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x108
	TWeakObjectPtr<UWorld> World; // 0x118
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x120
};

struct UMovieSceneGeometryCollectionSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct UParticleModuleSize_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UMovieScene3DConstraintSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UTextPropertyTestObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct USlateVectorArtData {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct ULevelSequenceAnimSequenceLink {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct UNUIGenericPopup {
	bool IsAccepted; // 0x260
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

struct UTestMovieSceneTrack {
	bool bHighPassFilter; // 0x80
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UChannel {
	UNetConnection* Connection; // 0x28
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

struct UNUIMapPlacement {
	bool bLeftMouseDown; // 0x278
	bool bRightMouseDown; // 0x279
	FLinearColor CurrentColour; // 0x27c
	int32_t CurrentThickness; // 0x28c
	int32_t CurrentColourNum; // 0x290
	int32_t CurrentLineIndex; // 0x294
	TArray<FLineData> Lines; // 0x298
	UImage* ExampleLineStartPointImage; // 0x2a8
	FVector2D ExampleLineStartPoint; // 0x2b0
};

struct UNUIRoundStartCountdown {
	int32_t CountdownTimer; // 0x278
	FText CountdownTimerText; // 0x280
};

struct ABP_SnapshotFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	float FadeOut_Strength_F99265084DA38B5D1574AFA4A94F343C; // 0x3d0
	ETimelineDirection FadeOut__Direction_F99265084DA38B5D1574AFA4A94F343C; // 0x3d4
	UTimelineComponent* FadeOut; // 0x3d8
	float RadiusExpansion_Radius_4C8283D04D5C8A1BD6C3F2AB0438B159; // 0x3e0
	ETimelineDirection RadiusExpansion__Direction_4C8283D04D5C8A1BD6C3F2AB0438B159; // 0x3e4
	UTimelineComponent* RadiusExpansion; // 0x3e8
	float MaxRange; // 0x3f0
	FCharacterAnim ReleaseAnimation; // 0x3f8
	float GrenadeThrowAnimEndTime; // 0x408
	float GrenadeThrowTime; // 0x40c
	FVector ScanLocation; // 0x410
	TArray<AActor*> EnemiesInsideScanRange; // 0x420
	int32_t OwningTeamNum; // 0x430
	UAkComponent* GrenadeAkComp; // 0x438
	TArray<FString> DetectedPCsAudio; // 0x440
	ABP_SnapshotGrenade_C* Grenade; // 0x450
	AStaticMeshActor* SnapshotSphereMesh; // 0x458
	UStaticMesh* SphereStaticMesh; // 0x460
	bool ShowEnemiesToAllies ; // 0x468
	bool PlayedServerSoundDetected; // 0x469
	bool PlayedServerSoundAlert; // 0x46a
	bool bHit; // 0x46b
	bool bDartIsFiring; // 0x46c
};

struct UBoxComponent {
	FVector BoxExtent; // 0x458
	float LineThickness; // 0x464
};

struct UBack-Legend-button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UImage* Image_405; // 0x288
	UTextBlock* Text; // 0x290
	UButton* Wish-Button; // 0x298
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
};

struct UAnimBoneCompressionSettings {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UMaterialExpressionNormalize {
	FExpressionInput VectorInput; // 0x40
};

struct AWartideGameState {
	TArray<FTeamLedger> TeamLedgers; // 0x530
};

struct UVirtualTextureBuilder {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UConsole {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct ABattalionFlashGrenade {
	FVector2D EffectivenessRange; // 0x3d0
	FVector2D AngleOverride; // 0x3d8
	float DirectionFactorInfluencePercentage; // 0x3e0
	UMaterialInterface* DecalMaterialPtr; // 0x3e8
	FVector DecalSize; // 0x3f0
	float DecalLifeTime; // 0x3fc
	float ObjectLifeSpan; // 0x400
	bool bShowDebugFlashRange; // 0x404
};

struct UARLifeCycleComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct USMStateMachineComponent {
	FMulticastInlineDelegate OnStateMachineInitializedEvent; // 0xc0
	FMulticastInlineDelegate OnStateMachineStartedEvent; // 0xd0
	FMulticastInlineDelegate OnStateMachineUpdatedEvent; // 0xe0
	FMulticastInlineDelegate OnStateMachineStoppedEvent; // 0xf0
	FMulticastInlineDelegate OnStateMachineTransitionTakenEvent; // 0x100
	FMulticastInlineDelegate OnStateMachineStateChangedEvent; // 0x110
	USMInstance* StateMachineClass; // 0x120
	ESMNetworkConfigurationType NetworkTickConfiguration; // 0x128
	ESMNetworkConfigurationType NetworkTransitionConfiguration; // 0x129
	ESMNetworkConfigurationType NetworkStateConfiguration; // 0x12a
	bool bIncludeSimulatedProxies; // 0x12b
	bool bTakeTransitionsFromServerOnly; // 0x12c
	float TransitionResetTimeSeconds; // 0x130
	bool bReplicateStatesOnLoad; // 0x134
	bool bDiscardTransitionsBeforeInitialize; // 0x135
	float MaxTimeToWaitForTransitionUpdate; // 0x138
	bool bInitializeOnBeginPlay; // 0x13c
	bool bStartOnBeginPlay; // 0x13d
	bool bLetInstanceManageTick; // 0x13e
	TArray<FSMNetworkedTransaction> R_NetworkedTransactions; // 0x140
	TArray<FSMNetworkedTransaction> PendingTransactions; // 0x150
	USMInstance* R_Instance; // 0x160
	USMInstance* InstanceTemplate; // 0x168
	bool bOverrideTick; // 0x170
	bool bCanEverTick; // 0x171
	bool bOverrideTickInterval; // 0x172
	float TickInterval; // 0x174
	bool R_bShuttingDown; // 0x178
	bool bCanInstanceNetworkTick; // 0x179
};

struct UMaterialExpressionDynamicParameter {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct USphereReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
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

struct UGameEngine {
	float MaxDeltaTime; // 0xde0
	float ServerFlushLogInterval; // 0xde4
	UGameInstance* GameInstance; // 0xde8
};

struct UInterpTrackFloatParticleParam {
	FName ParamName; // 0x90
};

struct APointLight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct UBattalionStatManager {
	UBattalionGameInstance* BattInstance; // 0x28
	UPFPlayerDataManager* PFPlayerData; // 0x30
	UPFPlayerIdCache* PFPlayerCache; // 0x38
	float UpdateFrequency; // 0x40
	float UpdateClientFrequency; // 0x138
};

struct UNUIFpsCounter {
	FText FpsText; // 0x278
};

struct UVariantSet {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct UCombo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_1; // 0x268
	UMenuAnchor* MenuAnchor_1; // 0x270
	UTextBlock* NameText; // 0x278
	TArray<FString> Options; // 0x280
	FString SelectedOption; // 0x290
	int32_t SelectedIndex; // 0x2a0
	FButtonStyle ComboSelected; // 0x2a8
	FButtonStyle ComboUnselected; // 0x520
	FSlateBrush BrushSelected; // 0x798
	FSlateBrush BrushNotSelected; // 0x820
	FMulticastInlineDelegate ComboChanged; // 0x8a8
	FSlateBrush BrushGrey; // 0x8b8
};

struct UPawnAction_Repeat {
	UPawnAction* ActionToRepeat; // 0x98
	UPawnAction* RecentActionCopy; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
};

struct UNUITwoTeamScores {
	int32_t TeamOneScore; // 0x278
	int32_t TeamTwoScore; // 0x27c
	FLinearColor TeamOneColor; // 0x280
	FLinearColor TeamTwoColor; // 0x290
	ENationType TeamOneNation; // 0x2a0
	ENationType TeamTwoNation; // 0x2a1
};

struct UAB_WW2Knife_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
};

struct USndGameOverviewWidget {
	FText TimerText; // 0x268
	FText CurrentRoundText; // 0x280
	FText LeftTeamSCoreText; // 0x298
	FText RightTeamScoreText; // 0x2b0
	FText BombTimerText; // 0x2c8
	FText ReadyUpText; // 0x2e0
	FText PlayersNotReadyText; // 0x2f8
	TArray<APlayerState*> Players_Team0; // 0x310
	TArray<APlayerState*> Players_Team1; // 0x320
	FString AttackTeamName; // 0x330
	FString DefenceTeamName; // 0x340
	ESlateVisibility LeftTeamScoreVisibility; // 0x350
	ESlateVisibility RightTeamScoreVisibility; // 0x351
	ESlateVisibility BombPlantedVisibility; // 0x352
	ESlateVisibility ReadyUpVisibility; // 0x353
	ESlateVisibility NotReadyPlayersVisibility; // 0x354
	APromodGameState* pGameState; // 0x358
	APromodPlayerController* pOwningPlayercontroller; // 0x360
	UBattalionTeam* Team01Ptr; // 0x368
	UBattalionTeam* Team02Ptr; // 0x370
	bool HasHitShootoutOnce; // 0x378
	int32_t CachedTotalAlivePlayers; // 0x37c
};

struct UObjectReferencer {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct UMaterialExpressionDepthFade {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct ABP_RegenFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	float Timeline_1_Radius_1BFD34F14D572B9401AD02965A2FA8E2; // 0x3d0
	ETimelineDirection Timeline_1__Direction_1BFD34F14D572B9401AD02965A2FA8E2; // 0x3d4
	UTimelineComponent* Timeline_2; // 0x3d8
	float AddChromatic_Amount_C2DCFAAF4794AEEAF741A8ADE5DD6E8F; // 0x3e0
	ETimelineDirection AddChromatic__Direction_C2DCFAAF4794AEEAF741A8ADE5DD6E8F; // 0x3e4
	UTimelineComponent* AddChromatic; // 0x3e8
	float EffectRadius_Radius_A70328C64838421A0AD619850B530030; // 0x3f0
	ETimelineDirection EffectRadius__Direction_A70328C64838421A0AD619850B530030; // 0x3f4
	UTimelineComponent* EffectRadius; // 0x3f8
	float RemoveFOV_RemoveFOVTrack_192FCA6A427F5632425A678DB5E46D52; // 0x400
	ETimelineDirection RemoveFOV__Direction_192FCA6A427F5632425A678DB5E46D52; // 0x404
	UTimelineComponent* RemoveFOV; // 0x408
	float AddFOV_AddFOVTrack_1277EDAF42CDA01525AEEFAC726DFEDF; // 0x410
	ETimelineDirection AddFOV__Direction_1277EDAF42CDA01525AEEFAC726DFEDF; // 0x414
	UTimelineComponent* AddFOV; // 0x418
	float MaxChromaticAberration; // 0x420
	UBP_RegenCameraModifier_C* CameraModifier; // 0x428
	float MaxFovAddition; // 0x430
	FTimerHandle TH_ReverseEffects; // 0x438
	float ReverseEffectsTime; // 0x440
	bool PlayingReverseEffects; // 0x444
	bool WasAborted; // 0x445
	UAkComponent* Component; // 0x448
};

struct UAnimNotifyState_Trail {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct UPlayFabClientAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xaa8
	UPlayFabJsonObject* RequestJsonObj; // 0xab0
	UPlayFabJsonObject* ResponseJsonObj; // 0xab8
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

struct AInteractiveFoliageActor {
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

struct ADatasmithAreaLightActor {
	EDatasmithAreaLightActorType LightType; // 0x220
	EDatasmithAreaLightActorShape LightShape; // 0x221
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

struct ANavModifierVolume {
	UNavArea* AreaClass; // 0x260
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268
};

struct UGizmoTransformChangeStateTarget {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UAIPerceptionSystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct AGameMode {
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

struct UGameInstance {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UHierarchicalLODSetup {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct UNUIScoreboardRow {
	UNUIScoreboardGroup* ParentWidget; // 0x278
	ABattalionPlayerState* PlayerState; // 0x288
	FLinearColor TextColor; // 0x290
	FLinearColor DefaultBackgroundColor; // 0x2a0
	FLinearColor BackgroundColor; // 0x2b0
	FText PlayerName; // 0x2c0
	FText PlayerLatency; // 0x2d8
	int32_t PlayerLatencyValue; // 0x2f0
	int32_t PlayerId; // 0x2f4
	bool bHighlighted; // 0x2f8
	bool bFocused; // 0x2f9
	bool bDev; // 0x2fa
	FText playerLevel; // 0x300
	UTexture2D* LevelIcon; // 0x318
};

struct UMinimap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* Canvas_Backgrounds; // 0x268
	UCanvasPanel* Canvas_IconsAboveFog; // 0x270
	UCanvasPanel* Canvas_IconsBelowFog; // 0x278
	UImage* Image_OpaqueBackground; // 0x280
	UOverlay* Overlay_Fogs; // 0x288
	URetainerBox* RetainerBox_Minimap; // 0x290
	UWidgetSwitcher* Switcher_MapActive; // 0x298
	UMinimapInternal_Camera_C* Widget_Camera; // 0x2a0
	UMapViewComponent* MapViewComp; // 0x2a8
	UMapTrackerComponent* MapTrackerComp; // 0x2b0
	FGeometry InitialMapGeo; // 0x2b8
	FVector2D InitialMapSize; // 0x2f0
	EMapViewSearchOption AutoLocateMapView; // 0x2f8
	bool bIsCircular; // 0x2f9
	bool bDrawCamera; // 0x2fa
	float FloorDistance; // 0x2fc
	FMulticastInlineDelegate OnMapClicked; // 0x300
	FVector2D InitialViewExtent; // 0x310
	FLinearColor FillColor; // 0x318
	TArray<UMinimapInternal_Icon_C*> Icons; // 0x328
	TArray<UMinimapInternal_Background_C*> Backgrounds; // 0x338
	TArray<UMinimapInternal_Fog_C*> Fogs; // 0x348
	FMulticastInlineDelegate OnViewChanged; // 0x358
	float IconScale; // 0x368
	FMulticastInlineDelegate OnBoxSelected; // 0x370
	bool bEnableBoxSelect; // 0x380
	FLinearColor BoxSelectColor; // 0x384
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

struct UAISense_Sight {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct AInfectionPlayerState {
	bool bIsPlayerInfected; // 0x5a8
	bool bCanRegenHealth; // 0x5a9
};

struct UPromodCharacterMovementComponent {
	bool bADSState; // 0xbb0
	bool bPrevADSState; // 0xbb1
	bool bPrevWantsToADS; // 0xbb2
	float ADSInTimestamp; // 0xbb4
	float ADSOutTimestamp; // 0xbb8
	float CurrADSTransition; // 0xbbc
	float LastMoveTimestamp; // 0xbc0
	FVector RelWishMove; // 0xbe0
	float RelWishMoveThreshold; // 0xbec
	FVector2D AbsWishMove; // 0xbf0
	float ControllerAirStrafingAssistance; // 0xbf8
	float CurrentServerMoveTime; // 0xbfc
	bool bCanSprint; // 0xc0c
	float InfiniteSprintRemaining; // 0xc10
	bool bInfiniteSprintEnabled; // 0xc14
	float SprintEnergyRemaining; // 0xc18
	FStaminaEvent CurrentStaminaEvent; // 0xc34
	FFindFloorResult PrevFloor; // 0xc5c
	bool bUseAccurateLandingVelocity; // 0xcf4
	bool bDebugLogFallDamage; // 0xcf5
	ALadder* CurrentLadder; // 0xd10
	TArray<ALadder*> PossibleLaddersInWorld; // 0xd18
	bool bIsSlidingAlongSurface; // 0xd2a
	bool Jumped; // 0xd2c
	float JumpStartZ; // 0xd30
	bool bQueueJump; // 0xd34
	FVector AirWishVelocity; // 0xd40
	bool bCrashLanded; // 0xd5d
	FVaultData LastVault; // 0xd60
	bool bIsVaulting; // 0xdb0
	bool bWantsToSlide; // 0xdb8
	bool bIsCurrentlySlideMoving; // 0xdb9
	float CurrentSlideTime; // 0xdbc
	float SlideStepTime; // 0xdc0
	float CurrentSlideStepFriction; // 0xdc4
	float SlideTimeSinceEnded; // 0xdc8
	float SlideDistance; // 0xdcc
	float SlideIntoADSMomentumTlPlayhead; // 0xdd0
	float ViewHeightLerpTimeStamp; // 0xdd4
	float ViewHeightLerpDeltaTime; // 0xdd8
	float ViewHeightLerpTarget; // 0xddc
	int32_t ViewHeightLerpDown; // 0xde0
	bool ViewHeightSprintOut; // 0xde4
	float ViewHeightTarget; // 0xde8
	float ViewHeightCurrent; // 0xdec
	float ProneChange; // 0xdf0
	float ProneDirection; // 0xdf4
	bool ProneBlocked; // 0xe00
	bool bIsMovementEnabled; // 0xe02
	char bWantsToProne : 1; // 0xe08
	char bWantsToSprint : 1; // 0xe08
	bool bIsSprinting; // 0xe0a
	char bWasWantingToSprint : 1; // 0xe0b
	char bWantsToLeanLeft : 1; // 0xe0b
	char bWantsToLeanRight : 1; // 0xe0b
	char bWantsToADS : 1; // 0xe0b
	char bHoldingADS : 1; // 0xe0b
	APromodCharacter* PromodCharacterOwner; // 0xe28
	bool bEncodeCompressedFlags; // 0xe4c
	float Friction; // 0xe50
	float GroundStopSpeed; // 0xe54
	float GroundAcceleration; // 0xe58
	float GroundMaxSpeed; // 0xe5c
	float InertiaMax; // 0xe60
	float InertiaAngle; // 0xe64
	float BackSpeedScale; // 0xe68
	float StrafeSpeedScale; // 0xe6c
	float JumpCooldown; // 0xe70
	float AirAccelerate; // 0xe74
	float JumpHeight; // 0xe78
	bool JumpSlowdownEnabled; // 0xe7c
	float JumpLandSlowdownTime; // 0xe80
	float HotDropSlowdownTime; // 0xe84
	float HotDropVelocityMultiplier; // 0xe88
	float JumpStepUpHeight; // 0xe8c
	float JumpLadderPushOffVelocity; // 0xe90
	bool bTreatInputAsAcceleration; // 0xe94
	bool bEncodeYawIntoAccelZ; // 0xe95
	bool bUseCameraViewForMovement; // 0xe96
	float Gravity; // 0xe98
	float GravityLinearDilation; // 0xe9c
	float GravityLogDilation; // 0xea0
	float MovementScale; // 0xea4
	float SprintSpeedScale; // 0xea8
	float SprintStrafeSpeedScale; // 0xeac
	float SprintRechargePause; // 0xeb0
	float SprintTime; // 0xeb4
	float SprintDurationScale; // 0xeb8
	float SprintMinTime; // 0xebc
	bool bForceAllowStartSprintInAir; // 0xec0
	float MinSpeedToUseStamina; // 0xec4
	float LeanSpeedScale; // 0xec8
	bool bSmoothSteps; // 0xecc
	float StepLerpTime; // 0xed0
	float StepLerpThreshold; // 0xed4
	float StepLerpMaxChange; // 0xed8
	float MaxLadderZSpeed; // 0xedc
	float LadderYawLimit; // 0xee0
	float LadderAttachmentWidth; // 0xee4
	float LadderDetachmentDistBottom; // 0xee8
	float LadderDetachmentDistTop; // 0xeec
	bool bAllowSliding; // 0xef0
	float MaxSlideDistance; // 0xef4
	bool bADSStopsSlide; // 0xef8
	bool bMaxSlideDistance3D; // 0xef9
	float SlideCooldown; // 0xefc
	UCurveFloat* SlidingFovCurveAddition; // 0xf00
	float SlidingFovEaseInSpeed; // 0xf08
	float SlidingFovEaseOutSpeed; // 0xf0c
	bool bForceSlideCancelUponADS; // 0xf10
	bool bForceStandWhenSlideEnds; // 0xf11
	bool bStopSlidingWhenFallingOffLedge; // 0xf12
	UCurveFloat* SlideRampFrictionScalarCurve; // 0xf18
	UCurveFloat* SlideStepFrictionHeightCurveMap; // 0xf20
	UCurveFloat* SlideStepFrictionFalloff; // 0xf28
	bool bCanJumpDirectlyOutOfSlide; // 0xf30
	bool bCanInitiateSlideWhileInAir; // 0xf31
	float MinGroundSpeedForSliding; // 0xf34
	float StopSlideGroundSpeedThreshold; // 0xf38
	float SlideMoveScaleScalar; // 0xf3c
	UCurveFloat* SlideMoveScaleScalarCurve; // 0xf40
	float SlideFriction; // 0xf48
	UCurveFloat* SlideFrictionCurve; // 0xf50
	float SlideAcceleration; // 0xf58
	UCurveFloat* SlideAccelerationCurve; // 0xf60
	float SlideYawClamp; // 0xf68
	UCurveFloat* SlideIntoADSMomentum; // 0xf70
	float SlideIntoADSMomentumPlayrate; // 0xf78
	float SlideStaminaRegenSpeed; // 0xf7c
	UCurvePromodStandCrouch* StandCrouchLerp; // 0xf80
	UCurvePromodCrouchStand* CrouchStandLerp; // 0xf88
	UCurvePromodCrouchProne* CrouchProneLerp; // 0xf90
	UCurvePromodProneCrouch* ProneCrouchLerp; // 0xf98
	float ColliderHeightStanding; // 0xfa0
	float ColliderHeightCrouching; // 0xfa4
	float ColliderHeightProning; // 0xfa8
	float ColliderProneFeetDist; // 0xfac
	float ProneFeetSkin; // 0xfb0
	float StandingCheckCapsuleHeightAdjust; // 0xfb4
	float LadderSweepDist; // 0xfb8
	bool bUseNewFloorCheck; // 0xfbc
	float FloorSweepWidthScalar; // 0xfc0
	float FloorSweepStartOffset; // 0xfc4
	float FloorSweepEndOffset; // 0xfc8
	float FloorSweepColliderHeight; // 0xfcc
	float AdjustFloorSweepWidthScalar; // 0xfd0
	float AdjustFloorStartOffset; // 0xfd4
	float AdjustFloorEndOffset; // 0xfd8
	float AdjustFloorColliderHeight; // 0xfdc
	bool bConserveLedgeVelocity; // 0xfe0
	float FallDamageMinHeight; // 0xfe4
	float FallDamageMaxHeight; // 0xfe8
	float FallDamageLinearDilation; // 0xfec
	float FallDamageLogDilation; // 0xff0
	FMulticastInlineDelegate OnClearedCrashLand; // 0xff8
	UBattalionDamageType* FallDmgTypeClass; // 0x1008
	float MeshLocationStanding; // 0x1010
	float MeshLocationCrouching; // 0x1014
	float MeshLocationProning; // 0x1018
	bool bIsDashing; // 0x107c
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

struct UCompositionGraphCaptureProtocol {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58
	bool bCaptureFramesInHDR; // 0x68
	int32_t HDRCompressionQuality; // 0x6c
	EHDRCaptureGamut CaptureGamut; // 0x70
	FSoftObjectPath PostProcessingMaterial; // 0x78
	bool bDisableScreenPercentage; // 0x90
	UMaterialInterface* PostProcessingMaterialPtr; // 0x98
};

struct UBTNode {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UAkPlayerSound_C {
	UAkAudioEvent* AkEvent; // 0x38
	FString EventName; // 0x40
	FString AttachName; // 0x50
	bool Follow; // 0x60
	bool ThirdPerson; // 0x61
};

struct UScrollBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UNiagaraDataInterfaceGrid2DCollectionReader {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UPromodActionPrompt {
	ESlateVisibility PromptVisibility; // 0x260
	FText PromptDescriptionText; // 0x268
	bool PromptShowing; // 0x280
};

struct USaveDataManager {
	TArray<FSaveDataInfo> DataInfo; // 0x28
	TArray<USaveGame*> SavedGameData; // 0x38
};

struct AAtmosphericFog {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
};

struct UAkWwiseTreeSelector {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
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

struct UNUISpectatorLoadoutScreen {
	UNUISpectatorTeamLoadout* TeamLoadoutWidgetClass; // 0x278
	TArray<UNUISpectatorTeamLoadout*> TeamLoadoutWidgets; // 0x280
	FText HeadingText; // 0x290
};

struct UDirectionalLightComponent {
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

struct ULevelSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x680
};

struct UAkComponent {
	bool bUseSpatialAudio; // 0x218
	ECollisionChannel OcclusionCollisionChannel; // 0x220
	char EnableSpotReflectors : 1; // 0x224
	UAkAuxBus* EarlyReflectionAuxBus; // 0x228
	FString EarlyReflectionAuxBusName; // 0x230
	int32_t EarlyReflectionOrder; // 0x240
	float EarlyReflectionBusSendGain; // 0x244
	float EarlyReflectionMaxPathLength; // 0x248
	float roomReverbAuxBusGain; // 0x24c
	int32_t diffractionMaxEdges; // 0x250
	int32_t diffractionMaxPaths; // 0x254
	float diffractionMaxPathLength; // 0x258
	char DrawFirstOrderReflections : 1; // 0x25c
	char DrawSecondOrderReflections : 1; // 0x25c
	char DrawHigherOrderReflections : 1; // 0x25c
	char DrawDiffraction : 1; // 0x25c
	bool StopWhenOwnerDestroyed; // 0x260
	float AttenuationScalingFactor; // 0x264
	float OcclusionRefreshInterval; // 0x268
	bool bUseReverbVolumes; // 0x26c
};

struct UClickDragInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UNUIScreen {
	bool IsEntering; // 0x260
	float CurrentAnalogValue; // 0x264
	bool bAllowedToNavigate; // 0x268
	bool IsExiting; // 0x269
	bool ShouldBeRemovedFromViewport; // 0x26a
	UNUIScreen* PreviousScreen; // 0x270
	UPromodGamePadSettingsDataAsset* GamePadSettingsDataAsset; // 0x278
	UBattalionGameInstance* BattInstance; // 0x280
	UBattalionSettings* BattSettings; // 0x288
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

struct AGrenadeFollowActor {
	UBoxComponent* RootBox; // 0x220
	ABattalionGrenade* LinkedGrenade; // 0x228
	bool BeginDestroyTimer; // 0x230
	float DestroyTime; // 0x234
	float DestroyTimer; // 0x238
};

struct UAIAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
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

struct UBodySetupCore {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UAB_UNDCSniper_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3d0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x418
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x4e0
	float Targeting; // 0x530
};

struct UInterpTrackDirector {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
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

struct USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UOnsetNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct ULevelCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UMaterialExpressionLandscapeGrassOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct UNUIRoundResult {
	FText ResultText; // 0x278
	FText ReasonText; // 0x290
	FLinearColor ResultColor; // 0x2a8
};

struct UDialogueVoice {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
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

struct UNiagaraPreviewAxis_InterpParamVector2D {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
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

struct UMaterialExpressionTextureSample {
	FExpressionInput Coordinates; // 0x48
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

struct UGeometryCacheCodecBase {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct UNiagaraDataInterfaceCurve {
	FRichCurve Curve; // 0x70
};

struct USubsurfaceProfile {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UNUICTFFlagStates {
	int32_t LocalPlayerTeam; // 0x278
	TArray<ACTFPlayerState*> FlagCarrierPlayerStates; // 0x280
	TArray<int32_t> FlagStates; // 0x290
	TArray<FText> FlagStateTexts; // 0x2a0
	TArray<FLinearColor> FlagStateColors; // 0x2b0
};

struct UMaterialExpressionLandscapeVisibilityMask {
	FGuid ExpressionGUID; // 0x40
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

struct UParticleModuleTypeDataAnimTrail {
	char bDeadTrailsOnDeactivate : 1; // 0x30
	char bEnablePreviousTangentRecalculation : 1; // 0x30
	char bTangentRecalculationEveryFrame : 1; // 0x30
	float TilingDistance; // 0x34
	float DistanceTessellationStepSize; // 0x38
	float TangentTessellationStepSize; // 0x3c
	float WidthTessellationStepSize; // 0x40
};

struct UNUIVault {
	FText BindName; // 0x278
	FString ButtonProfile; // 0x290
};

struct UAITask_MoveTo {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
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

struct UHierarchicalInstancedStaticMeshComponent {
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

struct UNodeMappingContainer {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct AGameModeBase {
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

struct UEdGraphNode_Documentation {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct UParticleModuleMeshRotationRateOverLife {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct UVectorFieldStatic {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
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

struct UMedalCarrierKill {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UNUIBombIcon {
	ESlateVisibility IconVisibility; // 0x278
	float AmmoWidgetWidth; // 0x27c
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

struct UNUIDOMScores {
	int32_t AllyTeamNumber; // 0x2f8
	int32_t EnemyTeamNumber; // 0x2fc
	ENationType AllyNationType; // 0x300
	ENationType EnemyNationType; // 0x301
	FLinearColor AllyTeamColor; // 0x304
	FLinearColor EnemyTeamColor; // 0x314
	int32_t AllyZoneCount; // 0x324
	int32_t EnemyZoneCount; // 0x328
};

struct UMaterialExpressionThinTranslucentMaterialOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct UWBP_RoundPip_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_LeftBar; // 0x268
	UImage* IMG_Pip; // 0x270
	UImage* IMG_Pip_Selected; // 0x278
	UImage* IMG_RightBar; // 0x280
	UImage* IMG_Trophy; // 0x288
	USizeBox* SB_LeftBorder; // 0x290
	USizeBox* SB_RightBorder; // 0x298
	USpacer* Spacer_LeftBar; // 0x2a0
	USpacer* Spacer_RightBar; // 0x2a8
	UWidgetSwitcher* WS_PipType; // 0x2b0
	int32_t State; // 0x2b8
	int32_t Type; // 0x2bc
	bool SelfTeam; // 0x2c0
};

struct UParticleModuleSizeScaleBySpeed {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UBTTask_RunBehaviorDynamic {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct UARCandidateObject {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct ABombMode_Zone {
	UBoxComponent* CollisionComp; // 0x220
	UMapIconComponent* MapIconComponent; // 0x228
	USphereComponent* FloorPoint; // 0x230
	int32_t TeamAllegiance; // 0x238
	int32_t StageID; // 0x23c
	EBombModeZoneName ZoneName; // 0x240
	ABombMode_Bomb* AttachedBomb; // 0x248
};

struct UAIDataProvider_QueryParams {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct USettings_Backdrop__Option_Unselected_C {
	UImage* Backdrop-colour-image; // 0x260
	UImage* Breaker; // 0x268
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

struct UParticleModuleSpawnBase {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UMedal1v2Clutch {
	AWartideGameMode* WartideGameMode; // 0x48
	ABattalionPlayerControllerGMBase* ClutcherPC; // 0x50
};

struct UParticleModuleColor_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct USMNodeInstance {
	bool bAutoEvalExposedProperties; // 0x30
	TArray<FSMGraphProperty> ExposedPropertyOverrides; // 0x38
	UTexture2D* NodeIcon; // 0x48
	FVector2D NodeIconSize; // 0x50
	FLinearColor NodeIconTintColor; // 0x58
	FGuid TemplateGuid; // 0x70
};

struct UMovieSceneSequence {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UDatasmithStaticMeshIFCImportData {
	FString SourceGlobalId; // 0x28
};

struct ACardPickup {
	USceneComponent* RootSceneComponent; // 0x220
	UCapsuleComponent* CapsuleComponent; // 0x228
	ABattalionLoadoutSystem* LoadoutSystemClass; // 0x230
	FString ClassName; // 0x238
	FName TextureName; // 0x248
	UAkAudioEvent* CardPickupCue; // 0x250
};

struct ANavigationTestingActor {
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

struct ABP_ThrowableAmmoBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	FMulticastInlineDelegate OnImpact; // 0x2a0
};

struct UMaterialExpressionLogarithm10 {
	FExpressionInput X; // 0x40
};

struct UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UButtonSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct USourceEffectFilterPreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct AAkReverbVolume {
	char bEnabled : 1; // 0x258
	UAkAuxBus* AuxBus; // 0x260
	FString AuxBusName; // 0x268
	float SendLevel; // 0x278
	float FadeRate; // 0x27c
	float Priority; // 0x280
	UAkLateReverbComponent* LateReverbComponent; // 0x288
};

struct UMaterialExpressionSkyAtmosphereLightDirection {
	int32_t LightIndex; // 0x40
};

struct UMovieSceneCameraShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UMatineeCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct UPromodCosmeticsDataAsset {
	TArray<FCosmeticItem> Cosmetics; // 0x30
};

struct UAsyncActionLoadPrimaryAsset {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UNUISniperScreenEffects {
	float SniperVignette; // 0x288
};

struct UConstantQNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct UAsyncActionChangePrimaryAssetBundles {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UPromodTacticalUtilDataAsset {
	TArray<FTacticalUtilItem> TacticalUtils; // 0x30
};

struct UWidgetAnimation {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UAsyncActionHandleSaveGame {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct UBlackboardData {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
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

struct UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct UBTTask_MakeNoise {
	float Loudnes; // 0x70
};

struct ULandscapeComponent {
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

struct UPlayFabSubsystem {
	FMulticastInlineDelegate OnLoginCompleted; // 0x30
	FMulticastInlineDelegate OnReceivedServerBuildId; // 0x40
	UPlayFabSubsystemSettings* Settings; // 0x50
	UBIPF_PlatformHelper* PlatformHelper; // 0x58
	bool bIsServer; // 0x60
	bool bIsLoggedIn; // 0x61
	int32_t LoginControllerId; // 0x64
	FString BuildCL; // 0x68
	FString ServerBuildId; // 0x78
	int32_t GetServerBuildIdRetries; // 0x88
	UPFPlayerIdCache* PlayerIdCache; // 0xb0
	UPFPlayerDataManager* PlayerDataManager; // 0xb8
	UPFGroupManager* GroupManager; // 0xc0
	UPFMatchmakingManager* MatchmakingManager; // 0xc8
	UPFMatchmakingInterop* MatchmakingInterop; // 0xd0
	UPFServerSlotManager* ServerSlotManager; // 0xd8
	UPFRegionManager* RegionManager; // 0xe0
	FPFPlayerId LocalClientPlayerId; // 0xe8
	UPlayFabAuthenticationContext* LocalClientAuthenticationContextObj; // 0x108
};

struct UMeshSelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
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

struct UDistributionFloatParameterBase {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UMovieSceneMediaPlayerPropertySection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct AAmbientSound {
	UAudioComponent* AudioComponent; // 0x220
};

struct UFoliageType_Actor {
	AActor* ActorClass; // 0x3a8
	bool bShouldAttachToBaseComponent; // 0x3b0
};

struct UParticleModuleVelocityInheritParent {
	FRawDistributionVector Scale; // 0x38
};

struct UGeometryCollectionComponent {
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

struct UParticleModuleColorOverLife {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UInterpTrackFloatAnimBPParam {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct UMaterialExpressionTextureProperty {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct UEndTurnCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UNuclearInputSystem {
	float ControllerAnalogThreshold; // 0x30
	FMulticastInlineDelegate OnInputTypeChanged; // 0x38
};

struct UScrollBoxWidgetStyle {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UMonoWaveTableSynthPreset {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UMapTrackerComponent {
	FMulticastInlineDelegate OnMapIconRegistered; // 0xb0
	FMulticastInlineDelegate OnMapIconUnregistered; // 0xc0
	FMulticastInlineDelegate OnMapBackgroundRegistered; // 0xd0
	FMulticastInlineDelegate OnMapBackgroundUnregistered; // 0xe0
	FMulticastInlineDelegate OnMapFogRegistered; // 0xf0
	FMulticastInlineDelegate OnMapFogUnregistered; // 0x100
	FMulticastInlineDelegate OnMapRevealerRegistered; // 0x110
	FMulticastInlineDelegate OnMapRevealerUnregistered; // 0x120
	TArray<UMapIconComponent*> MapIcons; // 0x130
	TArray<AMapBackground*> MapBackgrounds; // 0x140
	TArray<AMapFog*> MapFogs; // 0x150
	TArray<UMapRevealerComponent*> MapRevealers; // 0x160
};

struct USingleClickInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UNUIScoreboardTeam {
	int32_t TeamIndex; // 0x2e0
	UBattalionTeam* TeamData; // 0x2e8
	FLinearColor DeadPlayerTextColor; // 0x2f0
	FText TeamScore; // 0x300
	FText TeamFlagState; // 0x318
	ESlateVisibility NationIconVisibility; // 0x330
	ESlateVisibility TeamScoreVisibility; // 0x331
	ESlateVisibility CTFFlagStateVisibility; // 0x332
	TMap<ABattalionPlayerState*, float> CachedScores; // 0x338
	ESlateVisibility FFAVisibility; // 0x388
	ESlateVisibility WartideVisibility; // 0x389
	ESlateVisibility CTFVisibility; // 0x38a
	ESlateVisibility DOMVisibility; // 0x38b
	ESlateVisibility INFVisibility; // 0x38c
	bool MemberWidgetListInitializing; // 0x38d
};

struct UAkGameObject {
	UAkAudioEvent* AkAudioEvent; // 0x1f8
	FString EventName; // 0x200
};

struct USETTINGS-MM-Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Simulation-text-off; // 0x268
	UWidgetAnimation* Simulation-activated; // 0x270
	UWidgetAnimation* Pulse; // 0x278
	UWidgetAnimation* Clicked; // 0x280
	UWidgetAnimation* SingleFrameSelected; // 0x288
	UWidgetAnimation* Default; // 0x290
	UImage* Backdrop-colour-image; // 0x298
	UImage* Backdrop-colour-image_2; // 0x2a0
	UImage* MM_ICON_2; // 0x2a8
	UButton* PM-BUTTON; // 0x2b0
	UCanvasPanel* Selected-Size-Canvas; // 0x2b8
	UCanvasPanel* UNSelected-Size-Canvas; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct UFloatingPawnMovement {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct AMapEditorObjectPreview {
	UChildActorComponent* ChildActorComponent; // 0x220
	FMapEditorObjectData PreviewObject; // 0x228
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

struct UNiagaraDataInterfaceArray {
	int32_t MaxElements; // 0x40
};

struct UNUILineGraph {
	TArray<FLineGraphPointArray> Lines; // 0x278
};

struct UFieldSystemMetaDataIteration {
	int32_t Iterations; // 0xb0
};

struct UCargoGameOverviewWidget {
	FText CargoProgressText; // 0x390
	FText OvertimeText; // 0x3a8
	ESlateVisibility OvertimeTimeVisibility; // 0x3c0
	ESlateVisibility CenterTimerVisibility; // 0x3c1
	ESlateVisibility SideTimerVisibility; // 0x3c2
};

struct UWBP_AmmoAndNades_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UWidgetAnimation* Anim_AmmoAdded; // 0x270
	UWidgetAnimation* Fire_Chromatic; // 0x278
	UWidgetAnimation* Glitch; // 0x280
	UHorizontalBox* AmmoBox; // 0x288
	UImage* Image_67; // 0x290
	UTextBlock* ReserveAmmo; // 0x298
	UTextBlock* ReserveAmmo_2; // 0x2a0
	UTextBlock* ReserveAmmo_3; // 0x2a8
	UTextBlock* TB_AmmoAdded; // 0x2b0
	UTextBlock* WeaponAmmo; // 0x2b8
	UTextBlock* WeaponAmmo_2; // 0x2c0
	UTextBlock* WeaponAmmo_3; // 0x2c8
	bool AmmoShown; // 0x2d0
	UHUDTextDataAsset* HUDColour; // 0x2d8
};

struct UMaterialExpressionVectorNoise {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
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

struct ABattalionBaseLevel {
	TArray<ENationType> TeamNations; // 0x228
};

struct USoundClass {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa8
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb8
	USoundClass* ParentClass; // 0xc8
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

struct UBattalionTeam {
	TArray<ABattalionPlayerState*> OutOfBoundsSpecIDs; // 0x28
	TArray<ABattalionPlayerState*> OutOfBoundsPlayers; // 0x38
	float TeamIndex; // 0x48
	ENationType Nation; // 0x4c
	float Score; // 0x50
	int32_t RoundsWon; // 0x54
	int32_t WinStreak; // 0x58
	int32_t LooseStreak; // 0x5c
	float Kills; // 0x60
	float Deaths; // 0x64
	FString Name; // 0x68
	TArray<APlayerState*> Players; // 0x88
	TArray<APlayerState*> Bots; // 0x98
	TMap<FLinearColor, ABattalionPlayerState*> PlayerColors; // 0xa8
	int32_t TokensEarnedThisRound; // 0x148
	bool PendingRoundWin; // 0x14c
	bool WonPreviousRound; // 0x14d
	bool Surrendered; // 0x14e
	int32_t ScoreThisRound; // 0x154
	FLinearColor Color; // 0x160
};

struct UNUIInputKeySelector {
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

struct ASphereReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
};

struct UNUIFloatingCard {
	ABattalionPlayerState* Owner; // 0x480
	FVector2D Destination; // 0x488
	bool bCardHeld; // 0x490
};

struct UNUIPauseMenu {
	EMapPackGamemode GameModeType; // 0x290
	AJumperGameMode* JumperGameMode; // 0x298
	AKillRunGameMode* KillRunGameMode; // 0x2a0
	TArray<FString> UNLOCKEDLEVELS; // 0x2a8
	TMap<FString, int32_t> KillrunLevelsStarsMap; // 0x2b8
	bool SettingsVisible; // 0x308
	bool ReportPlayerVisible; // 0x309
	bool SavedLocationsVisible; // 0x30a
	bool LevelSelectVisible; // 0x30b
	float CurrentChangeTeamCooldown; // 0x30c
};

struct UEnvQueryInstanceBlueprintWrapper {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct UARObjectComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct ADOMPlayerController {
	ADOMMode_Zone* CurrentZone; // 0xc08
	ADOMMode_Zone* DiedInZone; // 0xc10
	UAkAudioEvent* StartTickingEvent; // 0xc58
	UAkAudioEvent* StopTickingEvent; // 0xc60
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

struct ABattalionStunGrenade {
	FVector2D EffectivenessRange; // 0x3d0
	UMaterialInterface* DecalMaterialPtr; // 0x3d8
	FVector DecalSize; // 0x3e0
	float DecalLifeTime; // 0x3ec
	float ObjectLifeSpan; // 0x3f0
	bool bShowDebugStunRange; // 0x3f4
};

struct UAnimComposite {
	FAnimTrack AnimationTrack; // 0xa8
};

struct UNUISettingsMenuItem {
	UNUISettingsMenu* SettingsMenu; // 0x260
	ESettingType Type; // 0x268
	FString Key; // 0x270
	FString Value; // 0x280
	TArray<FString> Keys; // 0x290
	FText Name; // 0x2a0
	float SliderMin; // 0x2b8
	float SliderMax; // 0x2bc
	int32_t DecimalPlaces; // 0x2c0
	float SliderStep; // 0x2c4
	TArray<FText> DisplayOptions; // 0x2c8
	TArray<FString> KeyOptions; // 0x2d8
	bool Disabled; // 0x2e8
	bool SecretSetting; // 0x2e9
	UNUISettingsMenu* MainSettingMenuPtr; // 0x2f0
};

struct UCollisionProfile {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UBattalionWeaponNationDataAsset {
	TArray<FWeaponNationEntity> weaponNations; // 0x30
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

struct UMovieSceneIntegerSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UWeaponNameDataAsset {
	TArray<FWeaponNameEntry> WeaponNameEntries; // 0x30
};

struct UWBP_SplitsListItem_C {
	UTextBlock* CheckpointNumber; // 0x260
	UTimeDisplay_C* PersonalBestForCheckpoint; // 0x268
	UTimeDisplay_C* SplitDifference; // 0x270
	UTimeDisplay_C* TimeDisplay; // 0x278
};

struct UCTFCharacterComponent {
	UWorldMarkerComponent* WorldMarkerComponent; // 0x230
	UTexture2D* WorldMarkerComponentIcon; // 0x238
	ACTFMode_Flag* AttachedFlag; // 0x240
	AActor* FlagClass; // 0x248
};

struct UADSCameraModifier {
	UBattalionGameInstance* BattInstance; // 0x48
	ABattalionPlayerCameraManager* BattCameraManager; // 0x50
	UBattalionSettings* BattSettings; // 0x58
};

struct UCompressedImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct UWeaponOrderDataAsset {
	TArray<EWeaponType> WeaponGlobalOrder; // 0x30
	TArray<EWeaponType> MissingWeapons; // 0x40
	TArray<EWeaponType> WeaponOrderAmerican; // 0x50
	TArray<EWeaponType> WeaponOrderBritish; // 0x60
	TArray<EWeaponType> WeaponOrderGerman; // 0x70
	TArray<EWeaponType> WeaponOrderSoviet; // 0x80
	UBattalionWeaponNationDataAsset* WeaponNationDataAsset; // 0x90
};

struct UMaterialExpressionBentNormalCustomOutput {
	FExpressionInput Input; // 0x40
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

struct UARImageComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UABP_DeployableCover_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x378
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

struct UFirstPersonAnimInstance {
	UAnimSequence* AnimHipIdle; // 0x2b8
	UAnimSequence* AnimSprint; // 0x2c0
	UAnimSequence* AnimSprintIn; // 0x2c8
	UAnimSequence* AnimHipAdditiveAltIdle; // 0x2d0
	UAnimSequence* AnimADSLocomotion; // 0x2d8
	UAnimSequence* AnimSlide; // 0x2e0
	UAnimSequenceBase* ActiveAnimTarget; // 0x2e8
	bool bIsMovementAllowed; // 0x2f0
	bool IsHoldingMove; // 0x2f1
	bool IsRunning; // 0x2f2
	bool IsChambering; // 0x2f3
	bool IsTargeting; // 0x2f4
	bool IsQuickEquipping; // 0x2f5
	bool bIsQuickEquippingADS; // 0x2f6
	bool IsVaulting; // 0x2f7
	float TargetingTransition; // 0x2f8
	ECharacterTeam TeamCharacterType; // 0x2fc
	bool IsAlternativeAnimationSystem; // 0x2fd
	bool IsReloadEnding; // 0x2fe
	float DisplayRunAnim; // 0x300
	float CompressSize; // 0x304
	FVector AnimInstanceCrush; // 0x308
	FVector AnimInstanceCrushOffset; // 0x314
	bool bProneRotateGun; // 0x320
	float ProneRotateGun; // 0x324
	float VaultRotateGun; // 0x328
	float ProneGunTranslateVelocity; // 0x32c
	float ProneGunTranslateVelocityReverse; // 0x330
	bool IsStanding; // 0x334
	bool IsCrouch; // 0x335
	bool IsProne; // 0x336
	bool bIsKnifeEqupped; // 0x337
	int32_t MeleeComboIndex; // 0x338
};

struct UMovieSceneMarginSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UBTDecorator_Loop {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UBTTask_PlayAnimation {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UDemoNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840
	float CheckpointSaveMaxMSPerFrame; // 0x9ec
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa10
	bool bIsLocalReplay; // 0xa20
	TArray<APlayerController*> SpectatorControllers; // 0xa28
};

struct UFPAnimInstance {
	UAnimSequence* AnimHipIdle; // 0x2b8
	UAnimSequence* AnimSprint; // 0x2c0
	UAnimSequence* AnimSprintIn; // 0x2c8
	UAnimSequence* AnimHipAdditiveAltIdle; // 0x2d0
	UAnimSequence* AnimADSLocomotion; // 0x2d8
	UAnimSequenceBase* ActiveAnimTarget; // 0x2e0
	bool IsRunning; // 0x2e8
	bool IsChambering; // 0x2e9
	bool IsTargeting; // 0x2ea
	bool IsVaulting; // 0x2eb
	float TargetingTransition; // 0x2ec
	ECharacterTeam TeamCharacterType; // 0x2f0
	bool IsAlternativeAnimationSystem; // 0x2f1
	bool IsReloadEnding; // 0x2f2
	float DisplayRunAnim; // 0x2f4
	float CompressSize; // 0x2f8
	FVector AnimInstanceCrush; // 0x2fc
	FVector AnimInstanceCrushOffset; // 0x308
	float ProneRotateGun; // 0x314
	float ProneRotateGunVelocity; // 0x318
	float ProneRotateGunVelocityReverse; // 0x31c
	float VaultRotateGun; // 0x320
	bool IsKnife; // 0x324
	bool IsThompson; // 0x325
};

struct UMapBombWidget {
	ABattalionCharacter* LinkedCharacter; // 0x268
	ABombMode_Bomb* LinkedBomb; // 0x270
	UMaterialInstanceDynamic* CachedMaterial; // 0x278
	ABeacon* Beacon; // 0x280
	float BeaconScaleX; // 0x288
	float BeaconScaleY; // 0x28c
	UImage* Image; // 0x290
	FVector2D ScaledPlayerPos; // 0x298
	float RotationAngle; // 0x2a0
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2a8
	bool bInActiveArray; // 0x2d4
};

struct UVariant {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct USoundNodeParamCrossFade {
	FName ParamName; // 0x58
};

struct AFieldSystemActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220
};

struct UWBP_StrafeJumpSpeedFeedback_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UProgressBar* SpeedL; // 0x268
	UProgressBar* SpeedR; // 0x270
	float MinimumSpeed; // 0x278
	float MaximumSpeed; // 0x27c
	float FadeInMultiplier; // 0x280
	float FadeOutMultiplier; // 0x284
};

struct UWidgetSwitcherSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct AMapEditorHUD {
	UMapEditorWidget* MapEditorWidget; // 0x310
	UMapEditorWidget* MapEditorWidgetClass; // 0x318
};

struct UMaterialExpressionFresnel {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UPlayFabExperimentationAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x108
	UPlayFabJsonObject* RequestJsonObj; // 0x110
	UPlayFabJsonObject* ResponseJsonObj; // 0x118
};

struct UEditableStaticMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
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

struct ADefaultPawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

struct UAudioCurveSourceComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct UAISenseConfig_Blueprint {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UGameEventRecorder {
	bool bIsRecording; // 0x28
	FMatchData MatchData; // 0x30
	FFrameEvents CurrentFrameData; // 0x68
};

struct UNiagaraDataInterfaceArrayQuat {
	TArray<FQuat> QuatData; // 0x50
};

struct UGameplayTagsDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct AMatineeActorCameraAnim {
	UCameraAnim* CameraAnim; // 0x2c8
};

struct UVirtualTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x100
	bool bContinuousUpdate; // 0x10c
	bool bSinglePhysicalSpace; // 0x10d
};

struct UEnvQueryGenerator_BlueprintBase {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
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

struct UVectorFieldComponent {
	UVectorField* VectorField; // 0x440
	float Intensity; // 0x448
	float Tightness; // 0x44c
	char bPreviewVectorField : 1; // 0x450
};

struct UMovieSceneEnumTrack {
	UEnum* Enum; // 0xb0
};

struct ABattalionGameState {
	TArray<FMapModeVoteInfo> MapModeVotes; // 0x270
	bool TeamDeckDirty; // 0x280
	ABattalionMarket* ClientMarket; // 0x288
	ABattalionMarket* ClientMarketClass; // 0x290
	ABattalionMarket* Market; // 0x298
	FString ShortModeName; // 0x2a0
	FString LongModeName; // 0x2b0
	FString SubModeName; // 0x2c0
	FString MapName; // 0x2d0
	FName MatchState; // 0x2e0
	FName ServerMode; // 0x2e8
	float ElapsedTimeInState; // 0x2f0
	int64_t WaitingToStartTimer; // 0x2f8
	int64_t MatchStartTime; // 0x300
	int64_t MatchEndTime; // 0x308
	FName StartType; // 0x310
	char Round; // 0x318
	int32_t StratTime; // 0x31c
	int32_t CinematicSetupRoundTime; // 0x320
	int32_t SetupRoundTime; // 0x324
	int32_t PostRoundTime; // 0x328
	int32_t PostMatchTime; // 0x32c
	bool FriendlyFire; // 0x330
	float CountdownToStart; // 0x334
	float SetupCountdown; // 0x338
	float StratCountdown; // 0x33c
	int32_t NumNations; // 0x340
	ABattalionGrenade* LastThrownGrenade; // 0x348
	ABattalionSmokeGrenade* LastThrownSmoke; // 0x350
	ABattalionFlashGrenade* LastThrownFlash; // 0x358
	ABattalionStunGrenade* LastThrownStun; // 0x360
	TArray<ABattalionGrenade*> InPlayGrenades; // 0x368
	TArray<ABattalionSmokeGrenade*> InPlaySmokes; // 0x378
	TArray<ASmokeGrenadeVolume*> InPlaySmokeVolumes; // 0x388
	TArray<ABattalionFlashGrenade*> InPlayFlashes; // 0x398
	TArray<ABattalionStunGrenade*> InPlayStuns; // 0x3a8
	TArray<AActor*> InPlayTrophySystems; // 0x3b8
	TArray<AActor*> InPlayDeployableCovers; // 0x3c8
	TArray<AActor*> InPlayAmmoBoxes; // 0x3d8
	TArray<UBattalionTeam*> Teams; // 0x3e8
	int32_t NumTeams; // 0x3f8
	bool bCheatAdminCmdsEnabled; // 0x3fc
	FName RoundEndReason; // 0x400
	TArray<FBattalionLoadoutDeckInstance> TeamDecks; // 0x408
	ABattalionLoadoutSystem* LoadoutSystem; // 0x418
	int32_t NumPlayersToFillServer; // 0x420
	bool SpectatorTeamEnabled; // 0x424
	float ServerAverageFPS; // 0x428
	bool CheatsDetected; // 0x42c
	TArray<FRoundWinCondition> PrevRoundWinConditions; // 0x430
	bool StratMode; // 0x440
	int32_t ScoreToWinRound; // 0x444
	int32_t MaxPlayersPerTeam; // 0x448
	bool AdminRevealAll; // 0x44c
	bool AdminFreeze; // 0x44d
	bool AdminPaused; // 0x44e
	bool EnableEnemyPlayerNames; // 0x44f
	bool bBackfillEnabled; // 0x450
	TArray<ABattalionPlayerState*> MatchMVPList; // 0x458
	int32_t ProScoreDraw; // 0x468
	int32_t ProScoreWin; // 0x46c
	int32_t ProScoreLoss; // 0x470
	FMulticastInlineDelegate OnMatchStateChanged; // 0x478
	FGuid MatchID; // 0x488
	int32_t RoundTime; // 0x498
	int32_t AdditionalRoundTime; // 0x49c
};

struct ABlitzMode_Zone {
	UBlitzWidgetComponent* DefaultSpatialMarker; // 0x258
	UBlitzWidgetComponent* ArmedSpatialMarker; // 0x260
};

struct UPlayerLoadoutsSaveData {
	TArray<FLoadoutData> PLAYERLOADOUTS; // 0x50
};

struct UAISenseConfig_Sight {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
	float PointOfViewBackwardOffset; // 0x64
	float NearClippingRadius; // 0x68
};

struct UWBP_WartideWorldMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	UWidgetAnimation* FadeInCheckpoint; // 0x380
	UWidgetAnimation* FadeIn; // 0x388
	UImage* Arrow; // 0x390
	UCanvasPanel* ContentCanvas; // 0x398
	UTextBlock* DistanceText; // 0x3a0
	UHorizontalBox* HorizontalBox; // 0x3a8
	UHorizontalBox* HorizontalBox_1; // 0x3b0
	UImage* Line; // 0x3b8
	UOverlay* Marker; // 0x3c0
	UTextBlock* Metres; // 0x3c8
	UImage* NonProgressBackground; // 0x3d0
	UImage* NonProgressBackgroundInner; // 0x3d8
	UTextBlock* ObjectiveLabel; // 0x3e0
	UOverlay* Overlay_2; // 0x3e8
	UProgressBar* ProgressBar_95; // 0x3f0
	USizeBox* Resizer; // 0x3f8
	UScaleBox* ScaleBox_1; // 0x400
	UTextBlock* TimerText; // 0x408
	UImage* Triangle; // 0x410
	bool Use Progress Marker; // 0x418
	FLinearColor MainColor; // 0x41c
	FLinearColor OffColor; // 0x42c
	bool bUseTimerText; // 0x43c
	float DramaticCountdownTime; // 0x440
	APromodCharacter* OwningPlayer; // 0x448
	bool IsADS; // 0x450
	bool IsClose; // 0x451
	bool ShowingObjectiveLabel; // 0x452
	UWidgetAnimation* ActiveFadeInAnimation; // 0x458
};

struct UBorderSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UScaleBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UCableComponent {
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

struct UMaterialExpressionStep {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct UWidgetSwitcher {
	int32_t ActiveWidgetIndex; // 0x120
};

struct UAsyncActionLoadPrimaryAssetList {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UMaterialExpressionTextureSampleParameterSubUV {
	char bBlend : 1; // 0x80
};

struct UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UMedalAce {
	AWartideGameMode* WartideGameMode; // 0x48
	TArray<FAceTracker> AceTrackers; // 0x50
};

struct UAsyncTask_LoadXRDeviceVisComponent {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UMaterialExpressionMultiply {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UAkAuxBus {
	UAkAudioBank* RequiredBank; // 0x58
};

struct UEditableGeometryCollectionAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UNUIJumperLeaderboard {
	FJumperLeaderboardData ParsedLeaderBoardData; // 0x278
	FText ModeName; // 0x290
	FText MapName; // 0x2a8
	FText MatchTime; // 0x2c0
	TMap<FString, FText> DisplayMapNames; // 0x2d8
	TMap<FString, FText> DisplayModeNames; // 0x328
	TArray<UNUIScoreboardRow*> MemberWidgets; // 0x378
	UNUIScoreboardRow* MemberWidgetClass; // 0x388
	int32_t LeaderboardRadius; // 0x3a0
	float BoardRefreshTime; // 0x3a4
	bool bRefreshCooldownReached; // 0x3ac
	bool bUseFriendsLeaderboard; // 0x3ad
	bool bUpdateNow; // 0x3ae
	bool bMainMenu; // 0x3af
	bool bAutoUpdate; // 0x3b0
	FString CurrentlySelectedMap; // 0x3b8
};

struct APromodBouncePad {
	UBoxComponent* CollisionBox; // 0x220
	float BounceMultiplier; // 0x228
	float MaxBounceClamp; // 0x22c
	float MinBounceClamp; // 0x230
	float MinZVelocityRequiredForBounce; // 0x234
	float AllowableOffsetPercentage; // 0x238
	UAkAudioEvent* BounceSound; // 0x240
	UAkComponent* AudioComponent; // 0x248
};

struct UAkLinuxInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UMaterialExpressionSceneDepth {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct AAkSpotReflector {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x220
	FString EarlyReflectionAuxBusName; // 0x228
	UAkAcousticTexture* AcousticTexture; // 0x238
	float DistanceScalingFactor; // 0x240
	float Level; // 0x244
};

struct ANiagaraPreviewGrid {
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

struct UAIPerceptionComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
};

struct UWBP_MiniMap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UInvalidationBox* InvalidationBox_1; // 0x268
	UMinimap_C* MiniMap; // 0x270
	UWBP_CallOutName_C* WBP_CallOutName; // 0x278
	UHUDTextDataAsset* HUDColour; // 0x280
};

struct UWBP_Killfeed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UInvalidationBox* IB_Root; // 0x268
	UCanvasPanel* KillfeedCanvasPanel; // 0x270
	UVerticalBox* KillfeedEntriesVerticalBox; // 0x278
	UWBP_KillfeedEntry_C* WBP_KillfeedEntry; // 0x280
	UWBP_KillfeedEntry_C* WBP_KillfeedEntry_128; // 0x288
	UWBP_KillfeedEntry_C* WBP_KillfeedEntry_327; // 0x290
	UWBP_KillfeedEntry_C* WBP_KillfeedEntry_452; // 0x298
	UWBP_KillfeedEntry_C* WBP_KillfeedEntry_583; // 0x2a0
	int32_t KillfeedEntryLimit; // 0x2a8
	TArray<UWBP_KillfeedEntry_C*> KillfeedEntries; // 0x2b0
	bool CurrentlyVisible; // 0x2c0
	float VisibleTimer; // 0x2c4
	KillfeedEntryType EntryType; // 0x2c8
	UWBP_KillfeedEntry_C* CurrentKillfeedEntry; // 0x2d0
	UHUDTextDataAsset* HUDText Colour; // 0x2d8
};

struct UMaterialExpressionDivide {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UKeyBind_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UNUIInputKeySelector* IKS_2; // 0x268
	UNUIInputKeySelector* IKS_3; // 0x270
	UNUIInputKeySelector* IKS_4; // 0x278
	UImage* Image; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_258; // 0x290
	UTextBlock* HighlightedButtonText; // 0x298
	FText LastPressedKey; // 0x2a0
	FText LastKnownValueKey; // 0x2b8
	FText KeyBindsName; // 0x2d0
	UNUISettingsMenu* ThisSettingMenu; // 0x2e8
	bool IsFirstHighlighted; // 0x2f0
	TArray<FKey> keyArray; // 0x2f8
	int32_t intVal; // 0x308
	FKey LMBKey; // 0x310
	bool IsNewKeySet; // 0x328
	FKey WheelDelta; // 0x330
	bool IgnoreSetKeyEvent; // 0x348
	UNUISettingsMenuItem* ItemWidget; // 0x350
	USettings_C* Target; // 0x358
	bool IgnoreConflicts; // 0x360
	FTextBlockStyle IKS Focused; // 0x368
	FButtonStyle Focused; // 0x5d8
	UNUIInputKeySelector* Currently Focused; // 0x850
	FButtonStyle Normal; // 0x858
	UNUIInputKeySelector* IKS; // 0xad0
	FTextBlockStyle IKS UnFocused; // 0xad8
};

struct UMaterialExpressionConstant4Vector {
	FLinearColor Constant; // 0x40
};

struct UNiagaraDataInterfaceArrayBool {
	TArray<bool> BoolData; // 0x50
};

struct APromodGizmo {
	USkeletalMeshComponent* GizmoMeshComponent; // 0x220
	USkeletalMesh* GizmoMesh; // 0x228
	UObject* GizmoMeshClass; // 0x230
	UAnimMontage* UseGizmoAnim; // 0x238
	UAkAudioEvent* SavedLocationSound; // 0x240
	UAkAudioEvent* LoadLocationSound; // 0x248
	int32_t MaxPreviousSavedLocations; // 0x250
	TArray<FGizmoSaveData> PreviousSaves; // 0x258
};

struct AReplayDataActor {
	TArray<FPawnControlRotation> CurrentControlRotations; // 0x220
};

struct UStaticMesh {
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
	char bIsBuiltAtRuntime : 1; // 0xb4
	char bAllowCPUAccess : 1; // 0xb4
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

struct UWBP_SystemTimeDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TimeTextBlock; // 0x268
	FText TimeDecoration; // 0x270
	FText Minutes; // 0x288
	FText Hours; // 0x2a0
};

struct UBTService_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UAkSwitchInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UDatasmithSpotLightComponentTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
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

struct UMedalIAmLegend {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct APromodBot {
	UMapIconComponent* MapIconComponent; // 0x4c8
	UWidgetComponent* SpatialMarkerComponent; // 0x4d0
	UPromodBotSMInstance* StateMachineClass; // 0x4d8
	APatrolPath* PatrolPath; // 0x4e0
	float BaseHealth; // 0x4e8
	float HealthRegenDelay; // 0x4ec
	float HealthRegenSpeed; // 0x4f0
	FString DisplayName; // 0x4f8
	float CurrentHealth; // 0x508
	bool bInitialized; // 0x50c
	bool bHealthRegenerating; // 0x50d
	float LastHitTime; // 0x510
	float HealthToRegenerate; // 0x514
	UAkAudioEvent* HitmarkerFlash; // 0x518
	UAkAudioEvent* HitmarkerKill; // 0x520
	UAkAudioEvent* HeadshotKill; // 0x528
	UAkAudioEvent* DeathSound; // 0x530
	FMulticastInlineDelegate OnBotDeathDelegate; // 0x538
	UAnimMontage* DeathAnim; // 0x548
	TArray<ECollisionChannel> LOSTraceBlockingObjects; // 0x550
	bool bPlaySpawnSound; // 0x560
	UDamageType* KnifeDamageType; // 0x568
	UDamageType* QuickMeleeDamageType; // 0x570
	UDamageType* FallDamageType; // 0x578
	UDamageType* NadeDamageType; // 0x580
	UAkComponent* DefaultAkComp; // 0x588
	UAkAudioEvent* SpawnSound; // 0x590
	UAkAudioEvent* UnSpawnSound; // 0x598
};

struct UMaterialExpressionPreviousFrameSwitch {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct UARTrackedImage {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
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

struct UWidgetTree {
	UWidget* RootWidget; // 0x28
};

struct UGameModeMessage {
	FText MessageText; // 0x260
	ESlateVisibility MessageVisibility; // 0x278
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

struct AGeometryCollectionRenderLevelSetActor {
	UVolumeTexture* TargetVolumeTexture; // 0x220
	UMaterial* RayMarchMaterial; // 0x228
	float SurfaceTolerance; // 0x230
	float Isovalue; // 0x234
	bool Enabled; // 0x238
	bool RenderVolumeBoundingBox; // 0x239
};

struct UBillboardComponent {
	UTexture2D* Sprite; // 0x440
	char bIsScreenSizeScaled : 1; // 0x448
	float ScreenSize; // 0x44c
	float U; // 0x450
	float UL; // 0x454
	float V; // 0x458
	float VL; // 0x45c
};

struct UMovieScene2DTransformSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UARTexture {
	EARTextureType TextureType; // 0xd8
	float Timestamp; // 0xdc
	FGuid ExternalTextureGuid; // 0xe0
	FVector2D Size; // 0xf0
};

struct UVideoCaptureProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UEnvQueryTest_Volume {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UMedalWeaponsSpecialist {
	AFFAGameMode* FFAGameMode; // 0x48
};

struct ABattalionPlayerState {
	FUniqueNetIdRepl PlatformId; // 0x320
	int32_t StartingXP; // 0x348
	int32_t StartingProScore; // 0x34c
	FString CurrentLoadout; // 0x358
	FString CachedRelinquishedLoadout; // 0x368
	FVector2D LoadoutCursorPosition; // 0x378
	bool bLoadoutConfirmed; // 0x380
	TArray<ABattalionWeapon*> ShadowInventory; // 0x388
	ABattalionWeapon* CurrentlySelectedWeapon; // 0x398
	ENationType CurrentlySelectedWeaponNation; // 0x3a0
	int32_t ShadowNumGrenades; // 0x3a4
	int32_t ShadowNumSpecialGrenades; // 0x3a8
	bool IsInteractVisible; // 0x3ac
	FString CardHeld; // 0x3b0
	bool IsAdmin; // 0x3c0
	FLinearColor MiniMapColor; // 0x3c4
	int32_t ExperienceGainedFromMedals; // 0x3d8
	int32_t ExperienceGainedFromChallenges; // 0x3dc
	int32_t ExperienceGainedFromMatchResult; // 0x3e0
	ABattalionPlayerSpawn* SpawnPoint; // 0x3e8
	ABattalionPlayerSpawn* FirstSpawnPoint; // 0x3f0
	bool Invulnerable; // 0x448
	bool IsInParty; // 0x460
	bool IsPartyLeader; // 0x461
	TArray<FString> LastKnownPartyMembers; // 0x468
	float ScoreFromMatchResult; // 0x478
	FName CurrentCallOutName; // 0x47c
	int32_t CurrentCallOutUniqueId; // 0x484
	ENationType NationType; // 0x488
	char ClassNumber; // 0x489
	int32_t NumKills; // 0x48c
	int32_t NumAssists; // 0x490
	int32_t NumDeaths; // 0x494
	int32_t NumHeadshotKills; // 0x498
	int32_t CardsCollected; // 0x49c
	int32_t NumKillsThisRound; // 0x4a0
	bool IsReady; // 0x4a4
	bool Quitter; // 0x4a5
	int32_t NumBulletsFired; // 0x4a8
	int32_t NumBulletHits; // 0x4ac
	ENationType RespawnNationType; // 0x4b0
	char RespawnClassNumber; // 0x4b1
	bool IsAlive; // 0x4b2
	int32_t TeamNumber; // 0x4b4
	int32_t PreviousTeamNumber; // 0x4b8
	FDateTime LastTeamChangeTimeStamp; // 0x4c0
	bool CanBeVotedToKick; // 0x4c8
	int32_t ScoreboardXP; // 0x4cc
	bool IsDev; // 0x4d0
	TArray<FRoundStats> RoundStats; // 0x4d8
	bool IsBeingABot; // 0x4e8
	bool IsPossessingABot; // 0x4e9
	bool PossessedBotInPrevRound; // 0x4ea
	bool IsBotPossessedByPlayer; // 0x4eb
	APlayerState* PossessedBotPS; // 0x4f0
	TArray<FPlayerKillTime> RecentlyKilledPlayers; // 0x4f8
	APlayerState* PreviousKiller; // 0x508
	FVector LastGrenadeThrowPoint; // 0x510
	int32_t DeathStreak; // 0x51c
	int32_t KillStreak; // 0x520
	bool Clutching; // 0x524
	int32_t ClutchingAgainst; // 0x528
	bool OnlySpectating; // 0x538
	char SpectatingID; // 0x539
	char SpectatingIDTeam; // 0x53a
	bool bIsCaster; // 0x53b
	bool IsOutlineEnabled; // 0x53c
	float UseProgressTimeStamp; // 0x540
	TArray<FString> UnlockedSeasonalRewards; // 0x548
	float LastKillTimeStamp; // 0x558
	int32_t CurrentMultikill; // 0x55c
	TArray<FUniqueNetIdRepl> MutedRemotePlayerIDs; // 0x560
	bool bHasInfiniteAmmo; // 0x582
};

struct UMedalHugeDenial {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UNUIWeaponPrompt {
	FText PromptText; // 0x278
};

struct UMedalHQDefender {
	AHQGameMode* HQGameMode; // 0x48
};

struct AWindDirectionalSource {
	UWindDirectionalSourceComponent* Component; // 0x220
};

struct UMaterialExpressionArcsineFast {
	FExpressionInput Input; // 0x40
};

struct USequenceCameraShakeSequencePlayer {
	UObject* BoundObjectOverride; // 0x480
	UMovieSceneSequence* Sequence; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x490
};

struct UMovieSceneAkTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	char bIsAMasterTrack : 1; // 0x88
};

struct USMBlueprint {
	int32_t AssetVersion; // 0xa0
};

struct UNUIAnnouncement {
	FString Text; // 0x278
	FLinearColor Color; // 0x288
	float Duration; // 0x298
};

struct UWindowTitleBarAreaSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMovieSceneCameraShakeSourceShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UBTDecorator_CheckGameplayTagsOnActor {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct UNUICTFGameOverview {
	TArray<int32_t> FlagStates; // 0x3a0
	FText LeftFlagStateText; // 0x3b0
	FText RightFlagStateText; // 0x3c8
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

struct UUserDefinedEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UNiagaraDataInterface2DArrayTexture {
	UTexture2DArray* Texture; // 0x38
};

struct UWBP_WartideOverviewScore_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BombImage; // 0x268
	UBorder* Border_MainTimer; // 0x270
	UBorder* Border_RoundState; // 0x278
	UTextBlock* DefuseOrDefend; // 0x280
	UHorizontalBox* HB_LeftTeamRounds; // 0x288
	UHorizontalBox* HB_RightTeamRounds; // 0x290
	UImage* Image_197; // 0x298
	UImage* Image_336; // 0x2a0
	UHorizontalBox* LeftTeamPlayerIcons; // 0x2a8
	UProgressBar* LeftTeamProgressBar; // 0x2b0
	UTextBlock* PrimaryTimer; // 0x2b8
	UHorizontalBox* RightTeamPlayerIcons; // 0x2c0
	UProgressBar* RightTeamProgressBar; // 0x2c8
	UTextBlock* RoundNumber; // 0x2d0
	UTextBlock* SecondaryTimer; // 0x2d8
	UTextBlock* TB_LeftTeamPlayersAlive; // 0x2e0
	UTextBlock* TB_RightTeamPlayersAlive; // 0x2e8
	UTextBlock* TieBreaker; // 0x2f0
	USizeBox* VersusNotification_SizeBox; // 0x2f8
	UWBP_VersusNotification_C* WBP_VersusNotification; // 0x300
	bool bBombPlanted; // 0x308
	bool bUsingForShootout; // 0x309
	int32_t AlivePlayers_Team0; // 0x30c
	int32_t AlivePlayers_Team1; // 0x310
	TArray<APlayerState*> PlayersTeam0; // 0x318
	TArray<APlayerState*> PlayersTeam1; // 0x328
	int32_t LeftTeamScore; // 0x338
	int32_t RightTeamScore; // 0x33c
	APromodGameState* PromodGameState; // 0x340
};

struct UMaterialExpressionGIReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct ULocalLightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
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

struct UWidgetComponent {
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

struct ABlitzPlayerSpawn {
	int32_t StageID; // 0x278
};

struct ARuntimeVirtualTextureVolume {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct UNUITDMObjectiveScores {
	int32_t AllyTeamNumber; // 0x2f8
	int32_t EnemyTeamNumber; // 0x2fc
	ENationType AllyNationType; // 0x300
	ENationType EnemyNationType; // 0x301
	FLinearColor AllyTeamColor; // 0x304
	FLinearColor EnemyTeamColor; // 0x314
};

struct AOneInTheChamberGamemode {
	int32_t InitialNumLives; // 0x918
};

struct APlanarReflection {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct AAkAmbientSound {
	UAkAudioEvent* AkAudioEvent; // 0x220
	UAkComponent* AkComponent; // 0x228
	bool StopWhenOwnerIsDestroyed; // 0x230
	bool AutoPost; // 0x231
};

struct ULocalPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UARSaveWorldAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
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

struct UServerDirectorySystem {
	FString GetIpEndpoint; // 0x38
	FString Endpoint; // 0x48
	int32_t UpdateInterval; // 0x58
	float Counter; // 0x5c
	FString Ip; // 0x60
	UBattalionGameInstance* GameInstance; // 0x70
};

struct UDistributionVectorConstantCurve {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct UMaterialExpressionAntialiasedTextureMask {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct UVerticalBoxSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
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

struct UBP_DashCameraModifier_C {
	float FovAddition; // 0x48
	UCurveFloat* FovCurve; // 0x50
	float Intensity; // 0x58
};

struct ALevelStreamingVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
};

struct UFP_PromodAnimInstance_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	FAnimNode_Slot AnimGraphNode_Slot_13; // 0x348
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x390
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x3b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x510
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x560
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x600
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x708
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x728
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x830
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x938
	FAnimNode_Slot AnimGraphNode_Slot_12; // 0xa40
	FAnimNode_Slot AnimGraphNode_Slot_11; // 0xa88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xad0
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0xc28
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0xc70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0xcb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0xd58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0xd80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0xda8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0xf00
	FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0xf28
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x10a0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x1140
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1160
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x12b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x12d8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1300
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x1320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x1348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x1370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x1398
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x13c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x13e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x1410
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x1438
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x1460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x1488
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x1508
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x1538
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x1620
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x1708
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x17d0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x1850
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x1920
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x1950
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x19d0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x1a00
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x1a50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1a80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x1b00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1ba0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x1c20
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1c50
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x1d00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x1d48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x1d70
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x1e10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x1e58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x1e80
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1ea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x1f68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x2008
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2030
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x20f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x2110
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x2268
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x2290
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x22b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x22d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x2370
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2398
	FAnimNode_Root AnimGraphNode_Root; // 0x23b8
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x23e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x2430
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x24d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x24f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2598
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x25c0
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2; // 0x2688
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator; // 0x2780
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult; // 0x2878
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x28a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x28d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x28f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2920
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2948
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2970
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2998
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x29c0
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2a40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2a70
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2b58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2c20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2d08
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x2d88
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x2e58
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x2e88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x2ed8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2f78
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x2ff8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x3028
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3078
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x30a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x3128
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x31c8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3248
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3278
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x3328
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x33c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x3520
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x3548
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x3570
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x3598
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x35c0
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x3660
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x36a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x36f0
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x3790
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x37d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3800
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x38a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x38e8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3910
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3958
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3980
	bool Is Sprinting; // 0x3a20
	bool Moving; // 0x3a21
	float LandingTranslation; // 0x3a24
	float LandingRotation; // 0x3a28
	FVector2D RelevantLandingSpeed; // 0x3a2c
	FVector2D LandingTranslationRange; // 0x3a34
	FVector2D LandingRotationRange; // 0x3a3c
	bool Landed; // 0x3a44
	bool WasSprinting; // 0x3a45
	bool WaitForSprintBlendReset; // 0x3a46
	bool Empty; // 0x3a47
	bool IsMelee; // 0x3a48
	float NormalTrueBlend; // 0x3a4c
	float NormalFalseBlend; // 0x3a50
	APromodCharacter* As Promod Character; // 0x3a58
	UWeaponAnimInstance* As Weapon Anim Instance; // 0x3a60
	bool IsPistol; // 0x3a68
	ABattalionWeapon* NewVar_1; // 0x3a70
	UAnimSequence* Sprint Out Anim 1P; // 0x3a78
	float Delta Time X; // 0x3a80
	ABattalionWeapon* CurrentWeapon; // 0x3a88
	bool Equipped; // 0x3a90
	bool Targeting?; // 0x3a91
	bool Is Sliding?; // 0x3a92
	float Prone Angle; // 0x3a94
	UFOVSkeletalMeshComponent* Mesh 1P; // 0x3a98
	bool IgnoreProne; // 0x3aa0
	bool IsQuickStun?; // 0x3aa1
	bool Can ADSIn Prone; // 0x3aa2
	bool IsStimshot; // 0x3aa3
	float ProneDirection; // 0x3aa4
	float ProneLowerFloat; // 0x3aa8
	float ProneHigherFloat; // 0x3aac
	APromodPawn_C* As Promod Pawn; // 0x3ab0
	bool PlayProne; // 0x3ab8
	float PronePreCalculation; // 0x3abc
	float PronePreviousDirection; // 0x3ac0
	UAnimSequence* Anim Hip Idle Storage; // 0x3ac8
	bool BombIdleSwitch; // 0x3ad0
};

struct UWBP_Message_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UWidgetAnimation* MessageWidgetAnim; // 0x288
	UTextBlock* TextBlock_84; // 0x290
	UHUDTextDataAsset* HUDColour; // 0x298
};

struct UMapRevealerComponent {
	UMaterialInterface* RevealMaterial; // 0x468
	EMapFogRevealMode RevealMode; // 0x470
	float RevealDropOffDistance; // 0x474
	bool bTempEngineBugWorkaround; // 0x478
	UMaterialInstanceDynamic* RevealMaterialInstance; // 0x480
};

struct UDataTable {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
};

struct UBattalionOnline {
	TArray<FString> MapPackRequestQueue; // 0x28
	int32_t XPMultiplier; // 0x38
	FMulticastInlineDelegate OnMatchmakingStarted; // 0xb0
	FMulticastInlineDelegate OnMatchmakingEnded; // 0xc0
	bool UseFriendlyNamesForBots; // 0xd0
	bool LeaderboardRetrieved; // 0xd1
	TArray<FStatData> MapPersonalBestStats; // 0x108
	bool StatsRetrieved; // 0x118
	UBattalionGameInstance* BattInstance; // 0x120
	UBattalionSettings* BattSettings; // 0x128
	TMap<FString, FMapPackStatsEntity> MapPackStatsCache; // 0x1e0
	UPFPlayerDataManager* PFPlayerData; // 0x250
	UPFPlayerIdCache* PFPlayerCache; // 0x258
	UPFMatchmakingManager* PFMatchmaking; // 0x260
	FString PremiumDLCProductID; // 0x420
	FString KickstarterDLCProductID; // 0x430
	FString AltTitleID; // 0x440
	FString AltPremiumDLCProductID; // 0x450
	FString AltKickstarterDLCProductID; // 0x460
	bool PlayerNameOverridden; // 0x470
	FString OverriddenPlayerName; // 0x478
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

struct UNiagaraDataInterfaceGrid3D {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UMaterialExpressionDistance {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMovieSceneSignedObject {
	FGuid Signature; // 0x28
};

struct UBotNamesDataAsset {
	TArray<FString> BotNames; // 0x30
};

struct UMaterialExpressionDeriveNormalZ {
	FExpressionInput InXY; // 0x40
};

struct UInterpTrackInstLinearColorProp {
	FLinearColor ResetColor; // 0x58
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

struct ABattalionLoadoutSystem {
	TArray<FBattalionLoadoutDeckTemplate> DeckTemplates; // 0x220
	FBattalionLoadoutCardStack CardTemplates; // 0x230
	TMap<FString, FBattalionLoadoutWeaponInfo> WeaponInfo; // 0x280
	FString DefaultClassImage; // 0x2d0
	TMap<FString, FSlateBrush> ClassImages; // 0x2e0
	FString DefaultAccessoryImage; // 0x330
	TMap<FString, FSlateBrush> AccessoryImages; // 0x340
	FSlateBrush EmptyAccessorySlotImage; // 0x390
	FSlateBrush UnavailableAccessorySlotImage; // 0x418
};

struct AInfectionHUD {
	UNUIINFGameOverview* INFGameOverview; // 0x638
	UNUIINFGameOverview* INFGameOverviewClass; // 0x640
};

struct UMotionControllerComponent {
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

struct UWBP_CallOutName_C {
	UTextBlock* CalloutNameText; // 0x2e0
	bool FoundCallOutVolume; // 0x2e8
};

struct UWBP_DamageTakenIndicator_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutSpec; // 0x268
	UWidgetAnimation* FadeOut; // 0x270
	UCanvasPanel* ArrowPivotRotator; // 0x278
	UImage* ArrowToShow; // 0x280
	UImage* BloodGradient; // 0x288
	UCanvasPanel* BloodRoot; // 0x290
	UImage* BloodSplatter; // 0x298
	UInvalidationBox* IB_Root; // 0x2a0
	FVector DamageDirection; // 0x2a8
	UCurveFloat* DamageHealthCurve; // 0x2b8
	float ArrowPlaybackSpeed; // 0x2c0
};

struct ULandscapeMeshProxyComponent {
	FGuid LandscapeGuid; // 0x4d0
	TArray<FIntPoint> ProxyComponentBases; // 0x4e0
	int8_t ProxyLOD; // 0x4f0
};

struct UBTDecorator_IsAtLocation {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UParticleModuleAccelerationDrag {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct ALevelBounds {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
};

struct UInterpTrackInstFloatMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct ABP_AmmoBoxFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	ABP_ThrowableAmmoBox_C* Grenade; // 0x3d0
	UAkComponent* GrenadeAkComp; // 0x3d8
	float GrenadeThrowTime; // 0x3e0
	int32_t OwningTeamNum; // 0x3e4
	float GrenadeThrowAnimEndTime; // 0x3e8
	UNiagaraSystem* System Template; // 0x3f0
	float StunRadius; // 0x3f8
	bool bHit; // 0x3fc
};

struct AVectorFieldVolume {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UWallrunFOVCameraModifier {
	UBattalionGameInstance* BattInstance; // 0x48
	ABattalionPlayerCameraManager* BattCameraManager; // 0x50
	UBattalionSettings* BattSettings; // 0x58
};

struct UMoviePlayerSettings {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct AFFAPlayerController {
	FNationSound FFAStartInstructions; // 0xc08
	FNationSound EventCloseToWin; // 0xc28
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

struct UWBP_JumperHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	USizeBox* ClientFPS; // 0x270
	UDebugUI_C* DebugUI; // 0x278
	USizeBox* FrameTime; // 0x280
	USizeBox* GameLatency; // 0x288
	USizeBox* GameThreadTime; // 0x290
	USizeBox* GameToRenderLatency; // 0x298
	USizeBox* GPUTemp; // 0x2a0
	USizeBox* IdleTime; // 0x2a8
	UInGameLeaderboard_C* InGameLeaderboard; // 0x2b0
	USizeBox* RenderLatency; // 0x2b8
	USizeBox* RenderThreadTime; // 0x2c0
	USizeBox* RHIThreadTime; // 0x2c8
	UWBP_Crosshair_C* WBP_Crosshair; // 0x2d0
	UWBP_DamageTakenIndicator_C* WBP_DamageTakenIndicator; // 0x2d8
	UWBP_SP_HUDEquipment_C* WBP_HUDEquipment_C; // 0x2e0
	UWBP_Interaction_C* WBP_Interaction; // 0x2e8
	UWBP_JumperGameOverview_C* WBP_JumperGameOverview; // 0x2f0
	UWBP_JumperTipIntro_C* WBP_JumperTipIntro_C_16; // 0x2f8
	UWBP_Killfeed_C* WBP_Killfeed; // 0x300
	UWBP_ProneBlock_C* WBP_ProneBlock; // 0x308
	UWBP_SniperVignette_C* WBP_SniperVignette; // 0x310
	UWBP_StaminaAndHealthBars_C* WBP_StaminaAndHealthBars; // 0x318
	UWBP_StrafeJumpSpeedFeedback_C* WBP_StrafeJumpSpeedFeedback; // 0x320
	UWBP_SystemTimeDisplay_C* WBP_SystemTimeDisplay; // 0x328
	UWBP_Vault_C* WBP_Vault; // 0x330
	ESlateVisibility In Visibility; // 0x338
	bool IsPlayingHealth; // 0x339
	FStaminaEvent StaminaEvent; // 0x33c
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

struct ABP_SND_BombZone_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
	UStaticMeshComponent* NewBomb_Temp; // 0x260
	UStaticMeshComponent* SM_Cube_Hollow_TopPivot_01a; // 0x268
	UWorldMarkerComponent* ArmedWorldMarker; // 0x270
	UWorldMarkerComponent* UnarmedWorldMarker; // 0x278
	EBombModeZoneName SiteName; // 0x280
	FLinearColor AttackerArmedColour; // 0x284
	FLinearColor DefendersArmedColour; // 0x294
	UTexture2D* ArmedAttackMiniMapImage; // 0x2a8
	UTexture2D* ArmedDefenceMiniMapImage; // 0x2b0
	UMaterialInstanceDynamic* BombScreenMat; // 0x2b8
};

struct UNUISpectatorTeamLoadout {
	int32_t Team; // 0x278
	ENationType Nation; // 0x27c
	TArray<ABattalionPlayerState*> PlayerSlots; // 0x280
	TArray<UNUILoadoutCard*> AvailableClassWidgets; // 0x290
	TArray<UNUILoadoutCard*> AvailableAccessoryWidgets; // 0x2a0
	TArray<UNUIPlayerLoadout*> TeamMemberWidgets; // 0x2b0
	UNUIBaseHUDElement* TeamIconWidget; // 0x2c0
	UNUIBaseUIElement* ClassStackWidgetClass; // 0x2c8
	UNUIBaseUIElement* AccessoryStackWidgetClass; // 0x2d0
	UNUIBaseUIElement* PlayerStateLeftWidgetClass; // 0x2d8
	UNUIBaseUIElement* PlayerStateRightWidgetClass; // 0x2e0
	TArray<UNUIBaseHUDElement*> TeamIconWidgetClasses; // 0x2e8
};

struct UBattalionExperience {
	UCurveFloat* XPLevels; // 0x30
	int32_t LevelCap; // 0x38
	int32_t RoundTo; // 0x3c
};

struct AHeadquarters_ZoneLocation {
	FString ZoneName; // 0x220
	FHQMode_ZoneProperties ZoneProperties; // 0x230
	USphereComponent* RadiusHelper; // 0x240
};

struct UBTDecorator_DoesPathExist {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UParticleModuleSubUVMovie {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UWBP_TimedConfirm_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* BTN_Main; // 0x268
	UCanvasPanel* CP_Main; // 0x270
	UImage* IMG_ButtonImage; // 0x278
	UImage* IMG_ProgressBorder; // 0x280
	UInvalidationBox* InvalidationBox_3; // 0x288
	UProgressBar* PB_Progress; // 0x290
	UTextBlock* TB_ButtonText; // 0x298
	float Percent; // 0x2a0
	FLinearColor FillColor; // 0x2a4
	FGeometry My Geometry; // 0x2b4
	bool bShowBorder; // 0x2ec
	float CurrentPressTime; // 0x2f0
	float ConfirmTime; // 0x2f4
	float Delta Time; // 0x2f8
	bool Completed; // 0x2fc
	FMulticastInlineDelegate OnCompleted; // 0x300
	FText ButtonText; // 0x310
	UTexture2D* ButtonImage; // 0x328
	bool Pressed; // 0x330
};

struct UAnimCurveCompressionSettings {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UMaterialExpressionFmod {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UHeader-Tab-HUB-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UTextBlock* Button-Text; // 0x288
	UButton* Tab-Button; // 0x290
	FMulticastInlineDelegate ButtonClicked; // 0x298
	bool bIsSelected; // 0x2a8
};

struct UCurveFloat {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UMovieSceneCameraShakeSourceTriggerTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UMaterialExpressionAdd {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMediaTexture {
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

struct USubmixEffectReverbPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct UAnimNotify_PlaySound {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
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

struct ABP_PlaceableTrophySystem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UAkComponent* Ak; // 0x278
	USkeletalMeshComponent* TrophySystem; // 0x280
	USphereComponent* SphereCollision; // 0x288
	USceneComponent* DefaultSceneRoot; // 0x290
	float Lifetime; // 0x298
	int32_t OwnerTeamNum; // 0x29c
	int32_t DestroyedUtilCount; // 0x2a0
	UNiagaraSystem* System Template; // 0x2a8
	TArray<AActor*> Actors to Ignore; // 0x2b0
	float MaxHealth; // 0x2c0
	float Health; // 0x2c4
	int32_t MaxUtil; // 0x2c8
	bool Enabled; // 0x2cc
	TArray<AActor*> ActorsInRange; // 0x2d0
	UParticleSystem* SemiDamagedFX; // 0x2e0
	UParticleSystem* VeryDamagedFX; // 0x2e8
	UParticleSystem* DetonationFX; // 0x2f0
	FVector FXPositionOffset; // 0x2f8
	UAkAudioEvent* DetonationAkEvent; // 0x308
	UAkAudioEvent* BurningAkEvent; // 0x310
	UAkAudioEvent* IdleAkEvent; // 0x318
	UAkAudioEvent* DestoryNadeAkEvent; // 0x320
	UParticleSystemComponent* ParticleSystemComp; // 0x328
	UAkAudioEvent* SpawnAkEvent; // 0x330
	UParticleSystemComponent* SemiDamagedFXComp; // 0x338
	UAkAudioEvent* StopIdleAkEvent; // 0x340
	FVector GrenadeLocation; // 0x348
	UPromodAllFireUpsDataAsset* FireUpDataAsset; // 0x358
	EFireUpType FireUpType; // 0x360
	UAkAudioEvent* GrenadeDestroyedAkEvent; // 0x368
	UNiagaraSystem* FireSystem; // 0x370
	UNiagaraComponent* VeryDamagedFireFx; // 0x378
	APromodGameState* PromodGameState; // 0x380
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

struct UTutorial-MM-Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Simulation-text-off; // 0x268
	UWidgetAnimation* Simulation-activated; // 0x270
	UWidgetAnimation* Pulse; // 0x278
	UWidgetAnimation* Clicked; // 0x280
	UWidgetAnimation* SingleFrameSelected; // 0x288
	UWidgetAnimation* Default; // 0x290
	UImage* Backdrop-colour-image; // 0x298
	UImage* Backdrop-colour-image_2; // 0x2a0
	UImage* MM_ICON_2; // 0x2a8
	UButton* PM-BUTTON; // 0x2b0
	UCanvasPanel* Selected-Size-Canvas; // 0x2b8
	UCanvasPanel* UNSelected-Size-Canvas; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct ASpotLight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct USourceEffectDynamicsProcessorPreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct UMainMenuLevelSelectMapDataAsset {
	bool bIsEnabled; // 0x30
	FString MapPackName; // 0x38
	TArray<FLevelSelectMapEntity> Maps; // 0x48
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

struct UInAppPurchaseRestoreCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UMedalWaitForThisToBlowOver {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct UMaterialExpressionLandscapeLayerBlend {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct UScaleBox {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UAREnvironmentCaptureProbeTexture {
	EARTextureType TextureType; // 0x130
	float Timestamp; // 0x134
	FGuid ExternalTextureGuid; // 0x138
	FVector2D Size; // 0x148
};

struct AChaosSolverActor {
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

struct ASkeletalMeshActor {
	char bShouldDoAnimNotifies : 1; // 0x228
	char bWakeOnLevelStart : 1; // 0x228
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x230
	USkeletalMesh* ReplicatedMesh; // 0x238
	UPhysicsAsset* ReplicatedPhysAsset; // 0x240
	UMaterialInterface* ReplicatedMaterial0; // 0x248
	UMaterialInterface* ReplicatedMaterial1; // 0x250
};

struct UWBP_IDontKnow_PopupButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Clicked; // 0x268
	UWidgetAnimation* Default; // 0x270
	UWidgetAnimation* Selected; // 0x278
	UWidgetAnimation* Unselected; // 0x280
	UButton* PM-BUTTON; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x290
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

struct ASpectatorBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
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

struct UWBP_PingMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	UImage* Arrow; // 0x380
	UImage* Background; // 0x388
	UCanvasPanel* ContentCanvas; // 0x390
	UImage* Icon; // 0x398
	UScaleBox* IconScaleBox; // 0x3a0
	UOverlay* Marker; // 0x3a8
	USizeBox* Resizer; // 0x3b0
	UScaleBox* ScaleBox_1; // 0x3b8
};

struct UPromodMetricWidget {
	FName MetricName; // 0x260
	UPromodMetric* Metric; // 0x268
};

struct UGizmoScaledTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct UMovieSceneParticleTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x80
};

struct UGizmoComponentAxisSource {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UHeader-Tab-LEADERBOARDS-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UButton* Tab-Button; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x290
	bool bIsSelected; // 0x2a0
};

struct UPendingNetGame {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct USourceEffectRingModulationPreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UGameplayTask_SpawnActor {
	FMulticastInlineDelegate Success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct UWBP_VictoryState_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOut; // 0x268
	UWidgetSwitcher* 1_InitialVictoryFlipbookSwitcher; // 0x270
	UWidgetSwitcher* 2_IdleVictoryFlipbookSwitcher; // 0x278
	UCanvasPanel* CanvasPanel_1; // 0x280
	UHorizontalBox* HorizontalBox; // 0x288
	UTextBlock* RoundDrawnText; // 0x290
	UWidgetSwitcher* VictoryFlipbookSequenceSwitcher; // 0x298
	UWBP_Flipbook_C* WBP_Flipbook_Lost; // 0x2a0
	UWBP_Flipbook_C* WBP_Flipbook_Lost_Idle; // 0x2a8
	UWBP_Flipbook_C* WBP_Flipbook_Won; // 0x2b0
	UWBP_Flipbook_C* WBP_Flipbook_Won_Idle; // 0x2b8
	UHUDTextDataAsset* HUDColour; // 0x2c0
};

struct USpectatorBeaconState {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UMedal10BombWartide {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct UMaterialInterface {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UNUIFullScreenMap {
	TArray<ABattalionSmokeGrenade*> Smokes; // 0x278
	TArray<UMapSmokeWidget*> SmokeWidgets; // 0x288
	TArray<UWorldMarkerComponent*> WorldMarkers; // 0x298
	TArray<UMapMarkerWidget*> MarkerWidgets; // 0x2a8
	TArray<ABattalionCharacter*> Players; // 0x2b8
	ABeacon* Beacon; // 0x2c8
	UCanvasPanel* ThisCanvas; // 0x2d0
	UMaterialInstanceDynamic* CachedMaterial; // 0x2d8
	TArray<UMapPlayerWidget*> PlayerImages; // 0x2e0
	FVector2D Position; // 0x2f0
	FVector2D ScaledPosition; // 0x2f8
	FVector2D NormalisedPosition; // 0x300
	float MapScale; // 0x308
	float MiniMapZoom; // 0x30c
};

struct UMaterialExpressionSceneColor {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UPopupSaveData {
	bool SeenWelcomeScreen; // 0x50
	bool SeenModKitPopup; // 0x51
};

struct UScrollBarWidgetStyle {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UAnimNotify_PlayMontageNotifyWindow {
	FName NotifyName; // 0x30
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

struct UPlayFabLocalizationAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x98
	UPlayFabJsonObject* RequestJsonObj; // 0xa0
	UPlayFabJsonObject* ResponseJsonObj; // 0xa8
};

struct UHUDUseProgressWidget {
	float UseProgress; // 0x260
};

struct UPhysicalMaterialMask {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct UTimelineComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct ASplineMeshActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct UFontImportOptions {
	FFontImportOptionsData Data; // 0x28
};

struct UPlayFabSubsystemSettings {
	FSoftClassPath PlayFabSubsystemClass; // 0x28
};

struct ABattalionMarket {
	FMarket Market; // 0x220
	TMap<FString, FMarketWeaponInfo> Arsenal; // 0x230
};

struct UTemplateSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UWBP_CargoAdvantageAnimWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* AdvantageText; // 0x268
	UVerticalBox* AdvantageTextContainer; // 0x270
	UCanvasPanel* CanvasPanel_1; // 0x278
	USpacer* CenterProgressBarSpacer; // 0x280
	UHorizontalBox* HB_ProgressOverview; // 0x288
	UImage* IMG_Contested; // 0x290
	UImage* IMG_Disabled; // 0x298
	UImage* IMG_ProgressBackground; // 0x2a0
	UImage* IMG_Push1; // 0x2a8
	UImage* IMG_Push2; // 0x2b0
	UImage* IMG_Push3; // 0x2b8
	UImage* IMG_Pushed1; // 0x2c0
	UImage* IMG_Pushed2; // 0x2c8
	UImage* IMG_Pushed3; // 0x2d0
	UImage* SpeedStateBackgroundImage; // 0x2d8
	UTextBlock* TimeDifferenceText; // 0x2e0
	UTextBlock* TimeDifferenceTime; // 0x2e8
	UWBP_TugOfWarProgress_C* WBP_TugOfWarProgress; // 0x2f0
	UWidgetSwitcher* WS_CargoSpeedState; // 0x2f8
	ACargoGameState* CargoGameState; // 0x300
	UHUDTextDataAsset* HUDColour; // 0x308
	bool bTickAnimation; // 0x310
	float CurrentAnimTime; // 0x314
	UCurveFloat* AnimCurve; // 0x318
	float Time Difference; // 0x320
	float Advantage; // 0x324
	int32_t Advantage Team; // 0x328
	float AnimTime Difference; // 0x32c
	float AnimAdvantage; // 0x330
	bool bShowAdvantageText; // 0x334
	float SecondChevron; // 0x338
	float ThirdChevron; // 0x33c
	bool bCenter; // 0x340
};

struct UIntervalGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UParticleModuleTypeDataGpu {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct ABattalionTeamStart {
	int32_t SpawnTeam; // 0x250
	char bNotForPlayers : 1; // 0x254
	char bNotForBots : 1; // 0x254
	char bTeamDeathmatch : 1; // 0x254
};

struct ULeaderboardMapButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* ContentHorizontalBox; // 0x268
	UTextBlock* ContentTextBlock; // 0x270
	UImage* NewContentImage; // 0x278
	UButton* RootButton; // 0x280
	FText Text; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
	FLinearColor DefaultTextColor; // 0x2b0
	FLinearColor HoverTextColor; // 0x2c0
	FLinearColor DisabledTextColor; // 0x2d0
	FLinearColor DefaultBackgroundColor; // 0x2e0
	FLinearColor HoverBackgroundColor; // 0x2f0
	FLinearColor DisabledBackgroundColor; // 0x300
	bool StartEnabled; // 0x310
	bool RoundedEdges; // 0x311
	int32_t FontSize; // 0x314
	bool NewNotificationRightAligned; // 0x318
	ETextJustify Justification; // 0x319
	FMargin ContentPadding; // 0x31c
	UMainMenuLeaderboard_C* MainMenuLeaderboardRef; // 0x330
};

struct UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UEnvQueryOption {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct AWorldVFXManager {
	TArray<ASmokeGrenadeVolume*> SmokeVolumes; // 0x220
};

struct UMedalHQCaptured {
	AHQGameMode* HQGameMode; // 0x48
};

struct UAkAudioBank {
	bool AutoLoad; // 0x58
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60
	TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xb0
	UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x100
};

struct UNUIBattleHub {
	float TabFirstDelay; // 0x290
	float TabAdditionalDelay; // 0x294
	float Reward_DpadFirstDelay; // 0x298
	float Reward_DpadAdditionalDelay; // 0x29c
	float Armory_DpadFirstDelay; // 0x2a0
	float Armory_DpadAdditionalDelay; // 0x2a4
	float Medals_DpadFirstDelay; // 0x2a8
	float Medals_DpadAdditionalDelay; // 0x2ac
	float Stats_DpadFirstDelay; // 0x2b0
	float Stats_DpadAdditionalDelay; // 0x2b4
	float Leaderboards_DpadFirstDelay; // 0x2b8
	float Leaderboards_DpadAdditionalDelay; // 0x2bc
	float LeftStickVerticalDeadZone; // 0x2c0
	float LeftStickHorizontalDeadZone; // 0x2c4
};

struct UBookMark {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct APromodPlayerCameraManager {
	float ProneYawCap; // 0x2854
	float LadderYawCap; // 0x2858
	float ProneViewPitchMax; // 0x285c
	APromodCharacter* PlayerCharacter; // 0x2860
};

struct UFindTurnBasedMatchCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct ACargoCheckpoint {
	UDecalComponent* CheckpointDecal; // 0x220
	UDecalComponent* ObjectiveDecal; // 0x228
	UDecalComponent* ObjectiveDecalCorner1; // 0x230
	UDecalComponent* ObjectiveDecalCorner2; // 0x238
	UDecalComponent* ObjectiveDecalCorner3; // 0x240
	UDecalComponent* ObjectiveDecalCorner4; // 0x248
	UBoxComponent* ContestantBox; // 0x250
	float TimeToUnlock; // 0x258
	int32_t CheckpointNumber; // 0x25c
	FCargoCheckpointData CheckpointData; // 0x260
	ECargoCheckpointState PrevCheckpointState; // 0x278
	ECargoCheckpointState CheckpointState; // 0x279
	TArray<ACargoPlayerState*> AllPresentPlayerStates; // 0x280
	int32_t NumAttackersPresent; // 0x290
	int32_t NumDefendersPresent; // 0x294
	float UnlockProgress; // 0x298
	float UnlockProgressPercent; // 0x29c
	int32_t CurrentUnlockProgressPip; // 0x2a0
	float PipPercentageTickSize; // 0x2a4
	float MinimumUnlockProgress; // 0x2a8
	float MinimumUnlockProgressPercent; // 0x2ac
	float CurrentUnoccupiedDecayTimer; // 0x2b0
	float DecayTimeToDecrease; // 0x2b4
	AMonorailCarriage* CargoActor; // 0x2c0
	UWorldMarkerComponent* WorldMarkerComponentCheckpoint; // 0x2c8
	UWorldMarkerComponent* WorldMarkerComponentDefendCapture; // 0x2d0
	UWorldMarkerComponent* WorldMarkerComponentContested; // 0x2d8
	bool bIsAtSplineStart; // 0x2e8
	bool bIsEnabled; // 0x2e9
	ACargoGameState* CargoGameState; // 0x2f0
	TArray<FName> WorldMarkerAllowedVisibilityStates; // 0x2f8
};

struct UInterpTrackAnimControl {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct UGameLiftSystem {
	bool bGameLiftActive; // 0x30
	bool bGameActive; // 0x31
	FString AwsRegionId; // 0x38
	FString AwsRegionName; // 0x48
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

struct UParticleModuleRotation {
	FRawDistributionFloat StartRotation; // 0x30
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

struct UMotoSynthPreset {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct UMovieScenePropertyTrack {
	UMovieSceneSection* SectionToKey; // 0x78
	FMovieScenePropertyBinding PropertyBinding; // 0x80
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UAREnvironmentProbeComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct ULevelSequenceBurnInOptions {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UNavigationSystemV1 {
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

struct UMainMenuLeaderboard_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	UWidgetAnimation* Intro; // 0x3d0
	UCheckBox* CheckBox_1; // 0x3d8
	UTextBlock* GameModeNameText; // 0x3e0
	UImage* Image; // 0x3e8
	UImage* Image_2; // 0x3f0
	UImage* Image_3; // 0x3f8
	UImage* Image_216; // 0x400
	UImage* Image_249; // 0x408
	ULeaderboardItem_C* LeaderboardItem_168; // 0x410
	UScrollBox* MapNameBox; // 0x418
	UTextBlock* MapPackNameText; // 0x420
	UTextBlock* NameBox; // 0x428
	UButton* NextGameModePageButton; // 0x430
	UButton* NextPageButton; // 0x438
	UVerticalBox* PlayerBox; // 0x440
	UButton* PrevGameModePageButton; // 0x448
	UButton* PrevPageButton; // 0x450
	UTextBlock* RankBox; // 0x458
	UTextButton_C* RefreshButton; // 0x460
	UTextBlock* SteamProfilePrivacy; // 0x468
	UTextBlock* timeBox; // 0x470
	bool TitleSet; // 0x478
	int32_t PlayerRankModifier; // 0x47c
	int32_t MapPackIndex; // 0x480
	UObject* Target; // 0x488
	TArray<UMapPackManager*> MapPackManagers; // 0x490
	UMapPackManager* SelectedMapPackManager; // 0x4a0
	EMapPackGamemode CurrentRequestedGameMode; // 0x4a8
	ULeaderboardMapButton_C* SelectedMapButton; // 0x4b0
	int32_t GameModeIndex; // 0x4b8
};

struct UMovieSceneMaterialParameterCollectionTrack {
	UMaterialParameterCollection* MPC; // 0x90
};

struct UAndroidPermissionCallbackProxy {
	FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28
};

struct AIncendiaryGrenadePickup {
	EIncendiaryGrenadeType IncendiaryGrenadeType; // 0x270
};

struct APushPlayerVolume {
	UBoxComponent* BoxComponent; // 0x220
	EPushType PushType; // 0x238
	float PushStrength; // 0x258
};

struct UBlackboardKeyType_Object {
	UObject* BaseClass; // 0x30
};

struct USlateWidgetStyleAsset {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UParticleModuleAccelerationDragScaleOverLife {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UParticleModuleVelocity_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UParticleModuleAttractorLine {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct UInterpGroupCamera {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UMaterialExpressionSpriteTextureSampler {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct UBulkheadAudioEventWrapper {
	bool bIsLooped; // 0x28
	bool bLoopRunning; // 0x29
	float LoopSafetyCutoffTime; // 0x2c
	UAkAudioEvent* AudioStartEvent; // 0x30
	UAkAudioEvent* AudioStopEvent; // 0x38
	UAkComponent* AudioComponent; // 0x40
	FTimerHandle TimerHandle_LoopSafetyTimer; // 0x48
	AActor* OwningActor; // 0x50
};

struct UNavModifierComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct ACTFMode_FlagZoneLocation {
	char TeamAllegiance; // 0x220
};

struct AWartidePlayerState {
	bool bWeaponCarriedOver; // 0x5d8
	EWeaponType PrimaryWeapon; // 0x5d9
	EWeaponType SecondaryWeapon; // 0x5da
	int32_t NumPrimaryGrenades; // 0x5dc
	int32_t NumSecondaryGrenades; // 0x5e0
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

struct UNiagaraDataInterfaceRenderTargetVolume {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct ABattalionHUD {
	UNUIMiniMap* MiniMap; // 0x310
	UNUIKillFeed* KillFeed; // 0x318
	UNUIVoiceChatFeed* VoiceChatFeed; // 0x320
	UNUIKillMessage* KillMessage; // 0x328
	UNUIGameTimer* GameTimer; // 0x330
	UNUIAmmoCount* AmmoCount; // 0x338
	UNUICrosshair* Crosshair; // 0x340
	UNUIChatBox* ChatBox; // 0x348
	UNUIScreenEffects* ScreenEffects; // 0x350
	UNUISniperScreenEffects* SniperScreenEffects; // 0x358
	UNUINetworkStatus* NetworkStatus; // 0x360
	UNUIGrenadeIcon* GrenadeIcon; // 0x368
	UNUIInteract* Interact; // 0x370
	UNUIMatchStatus* MatchStatus; // 0x378
	UNUIPickup* Pickup; // 0x380
	UNUIScoreAward* ScoreAward; // 0x388
	UNUIVault* Vault; // 0x390
	UNUIRoundStartCountdown* RoundStartCountdown; // 0x398
	UNUINationSelect* NationSelect; // 0x3a0
	UNUICardsSelection* CardsSelection; // 0x3a8
	UNUIScoreboardScreen* Scoreboard; // 0x3b0
	UHUDSpectator* HUDSpectator; // 0x3b8
	UNUIScoreboardScreen* TeamScoreboard; // 0x3c0
	UNUITeamSelection* TeamSelect; // 0x3c8
	UNUIRoundEndScreen* RoundEndScreen; // 0x3d0
	UNUISpectatorLoadoutScreen* SpectatorLoadoutScreen; // 0x3d8
	UNUISpawnViewer* SpawnViewer; // 0x3e0
	UNUICurrentlySpectating* CurrentlySpectating; // 0x3e8
	UNUIRespawnTimer* RespawnTimer; // 0x3f0
	UNUIReadyPrompt* ReadyPrompt; // 0x3f8
	UNUILoadoutPrompt* LoadoutPrompt; // 0x400
	UNUIHalfTimeScreen* HalfTimeScreen; // 0x408
	UNUILevelUp* LevelUp; // 0x410
	UNUIOvertimeScreen* OvertimeScreen; // 0x418
	UNUIEquippedWeapons* EquippedWeapons; // 0x420
	UNUIMedalAward* MedalAward; // 0x428
	UNUIGenericActionPrompt* GenericActionPrompt; // 0x430
	UNUIProneBlockPrompt* ProneBlockPrompt; // 0x438
	UNUICallOutName* CallOutName; // 0x440
	UNUIConsoleGeneralOverview* GameOverview; // 0x448
	UNUIIdleKickWarning* IdleKickWarning; // 0x450
	UNUITeamMatchResultScreen* MatchResultScreen; // 0x458
	UNUIMiniMap* MapClass; // 0x460
	UNUIKillFeed* KillFeedClass; // 0x468
	UNUIKillMessage* KillMessageClass; // 0x470
	UNUIVoiceChatFeed* VoiceChatFeedClass; // 0x478
	UNUIGameTimer* GameTimerClass; // 0x480
	UNUIAmmoCount* AmmoCountClass; // 0x488
	UNUICrosshair* CrosshairClass; // 0x490
	UNUIChatBox* ChatBoxClass; // 0x498
	UNUIScreenEffects* ScreenEffectsClass; // 0x4a0
	UNUISniperScreenEffects* SniperScreenEffectsClass; // 0x4a8
	UNUINetworkStatus* NetworkStatusClass; // 0x4b0
	UNUIGrenadeIcon* GrenadeIconClass; // 0x4b8
	UNUIInteract* InteractClass; // 0x4c0
	UNUIMatchStatus* MatchStatusClass; // 0x4c8
	UNUIPickup* PickupClass; // 0x4d0
	UNUIScoreAward* ScoreAwardClass; // 0x4d8
	UNUIVault* VaultClass; // 0x4e0
	UNUIRoundStartCountdown* RoundStartCountdownClass; // 0x4e8
	UNUICurrentlySpectating* CurrentlySpectatingClass; // 0x4f0
	UNUIRespawnTimer* RespawnTimerClass; // 0x4f8
	UNUIReadyPrompt* ReadyPromptClass; // 0x500
	UNUILoadoutPrompt* LoadoutPromptClass; // 0x508
	UNUIHalfTimeScreen* HalfTimeScreenClass; // 0x510
	UNUILevelUp* LevelUpClass; // 0x518
	UNUIOvertimeScreen* OvertimeScreenClass; // 0x520
	UNUIEquippedWeapons* EquippedWeaponsClass; // 0x528
	UNUIMedalAward* MedalAwardClass; // 0x530
	UNUIGenericActionPrompt* GenericActionPromptClass; // 0x538
	UNUICallOutName* CallOutNameClass; // 0x540
	UNUIIdleKickWarning* IdleKickWarningClass; // 0x548
	UNUINationSelect* NationSelectClass; // 0x550
	UNUICardsSelection* CardsSelectionClass; // 0x558
	UNUIScoreboardScreen* ScoreboardClass; // 0x560
	UHUDSpectator* HUDSpectatorClass; // 0x568
	UNUIScoreboardScreen* TeamScoreboardClass; // 0x570
	UNUITeamSelection* TeamSelectClass; // 0x578
	UNUISpectatorLoadoutScreen* SpectatorLoadoutScreenClass; // 0x580
	UNUISpawnViewer* SpawnViewerClass; // 0x588
	UNUIProneBlockPrompt* ProneBlockPromptClass; // 0x590
	UNUIConsoleGeneralOverview* GameOverviewClass; // 0x598
	UNUITeamMatchResultScreen* MatchResultScreenClass; // 0x5a0
	TArray<UNUIBaseHUDElement*> HUDElements; // 0x5a8
	TArray<UNUIBaseHUDElement*> UIElements; // 0x5b8
	TArray<UHUDPlayerName*> PlayerNames; // 0x5e0
	bool bDebugBackfill; // 0x5f0
};

struct UWBP_CheckpointComparison_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* personal-Best; // 0x268
	UWidgetAnimation* ProStampAnim; // 0x270
	UBigTimeDisplay_C* BigTimeDisplay; // 0x278
	UImage* BLUR-STREAK; // 0x280
	UScrollBox* CheckpointList; // 0x288
	UTextBlock* CompletedText; // 0x290
	UTimeDisplay_C* CurrentTimeDisplay; // 0x298
	UHeader-Bar-Temp_C* Header-Bar-Temp; // 0x2a0
	UTextBlock* MapNameBox; // 0x2a8
	UTextBlock* MapNameText; // 0x2b0
	UTextBlock* ProText; // 0x2b8
	UImage* Star1; // 0x2c0
	UImage* Star1_2; // 0x2c8
	UImage* Star2; // 0x2d0
	UImage* Star2_2; // 0x2d8
	UImage* Star3; // 0x2e0
	UImage* Star3_2; // 0x2e8
	UOverlay* Stars; // 0x2f0
	UTextBlock* TITLEBOX; // 0x2f8
	UVignette-Temp_C* Vignette-Temp; // 0x300
	UWBP_SplitsListItem_C* WBP_SplitsListItem; // 0x308
	float CurrentTimeFloat; // 0x310
	FMapStatList MapsStatsList; // 0x318
	int32_t Rating; // 0x340
	int32_t Current Column; // 0x344
	int32_t CurrentRow; // 0x348
	int32_t CurrentColumn; // 0x34c
	UMapPackManager* Map Pack Manager; // 0x350
	FString MapName; // 0x358
	AJumperGameMode* JumperGameMode; // 0x368
	AKillRunGameMode* KillRunGameMode; // 0x370
	EMapPackGamemode GameModeType; // 0x378
	UMapPackManager* CurrentMapPackManager; // 0x380
	float SplitsRollingCounter; // 0x388
};

struct UPlayFabMultiplayerAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x418
	UPlayFabJsonObject* RequestJsonObj; // 0x420
	UPlayFabJsonObject* ResponseJsonObj; // 0x428
};

struct USoundGroups {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
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

struct UCurveVector {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct ULeaderboardFlushCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UMovieSceneEasingExternalCurve {
	UCurveFloat* Curve; // 0x30
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

struct UEnvQuery {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UGeometryCacheTrack {
	float Duration; // 0x28
};

struct UMaterialExpressionReroute {
	FExpressionInput Input; // 0x40
};

struct UMovieScenePropertySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40
};

struct UNiagaraDataInterfaceRenderTarget2D {
	FIntPoint Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe0
	char bOverrideFormat : 1; // 0xe1
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108
};

struct UBindingImageText {
	int32_t MaxStates; // 0x260
	int32_t CurrentState; // 0x264
	TArray<FTextImage> States; // 0x268
};

struct UParticleModuleMeshRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UGeometryCacheTrackStreamable {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UKillRunGameOverviewWidget {
	FText KillRunTimerText; // 0x260
	FText KillRunTimerTextMilliseconds; // 0x278
	FText KillRunTimerTextSeconds; // 0x290
	FText KillRunTimerTextMinutes; // 0x2a8
	FText KillRunCheckpointText; // 0x2c0
	FText KillRunTargetsRemainingText; // 0x2d8
};

struct UNUISpectatorStatBars {
	UNUISpectatorIconGroup* IconGroupLeft; // 0x278
	UNUISpectatorIconGroup* IconGroupRight; // 0x280
	bool bTimoutVisible; // 0x288
	FString TimeoutTimerString; // 0x290
};

struct AJumperCourse {
	USplineComponent* Spline; // 0x220
	UStaticMesh* Gate; // 0x228
	int32_t VisibleCheckpoints; // 0x230
	int32_t GateIndex; // 0x234
	bool bShowRotationDebug; // 0x23c
	UAkAudioEvent* CheckpointCompleted; // 0x250
	UAkAudioEvent* TickTockMusicPlay; // 0x258
	UAkAudioEvent* TickTockMusicStop; // 0x260
	UAkAudioEvent* RaceCompletedEvent; // 0x268
	UAkAudioEvent* RaceCompletedEvent1; // 0x270
	UAkAudioEvent* RaceCompletedEvent2; // 0x278
	UAkAudioEvent* RaceCompletedEvent3; // 0x280
	UAkAudioEvent* RaceCompletedEventPro; // 0x288
	int32_t AmountOfStopsFromEndTickTock; // 0x290
	TArray<FString> MapNamesToOverrideGizmo; // 0x2a0
	TArray<float> CheckpointRotations; // 0x2b0
};

struct UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UWBP_HeaderTab_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* ContentHorizontalBox; // 0x268
	UTextBlock* ContentTextBlock; // 0x270
	UImage* NewContentImage; // 0x278
	UButton* RootButton; // 0x280
	FText Text; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
	FLinearColor DefaultTextColor; // 0x2b0
	FLinearColor HoverTextColor; // 0x2c0
	FLinearColor DisabledTextColor; // 0x2d0
	FLinearColor SelectedTextColor; // 0x2e0
	FLinearColor DefaultBackgroundColor; // 0x2f0
	FLinearColor HoverBackgroundColor; // 0x300
	FLinearColor DisabledBackgroundColor; // 0x310
	FLinearColor SelectedBackgroundColor; // 0x320
	bool StartEnabled; // 0x330
	bool RoundedEdges; // 0x331
	int32_t FontSize; // 0x334
	bool NewNotificationRightAligned; // 0x338
	ETextJustify Justification; // 0x339
	FMargin ContentPadding; // 0x33c
	bool CurrentlySelected; // 0x34c
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct ANavLinkProxy {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct UBTTask_Wait {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct USequenceCameraShakeCameraStandIn {
	float FieldOfView; // 0x30
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

struct UMenu-Background_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* MediaTexture; // 0x268
	UMediaPlayer* MediaPlayer; // 0x270
};

struct UABP_ThrowingAxe_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340
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

struct ACTFMode_Flag {
	ACTFMode_FlagZone* HomeZone; // 0x220
	bool AtHome; // 0x228
	bool AttachedToPlayer; // 0x229
	char TeamAllegiance; // 0x22a
	ENationType NationAllegiance; // 0x22b
	UWorldMarkerComponent* WorldMarker; // 0x230
	ABattalionCharacter* AttachedCharacter; // 0x238
	float FlagResetTimer; // 0x240
};

struct USoundConcurrency {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UDatasmithSkyLightComponentTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UDeathCamCameraModifier {
	UPromodDeathCamera* DeathCameraComponent; // 0x48
};

struct UBTDecorator_Blackboard {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UCurveLinearColorAtlas {
	uint32_t TextureSize; // 0x100
	TArray<UCurveLinearColor*> GradientCurves; // 0x108
};

struct UAISubsystem {
	UAISystem* AISystem; // 0x30
};

struct UPointLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct UWBP_BlitzSpectating_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* PlayerNameText; // 0x268
	UTextBlock* RespawnTimer; // 0x270
	UHUDTextDataAsset* HUDColour; // 0x278
	float Respawn Time; // 0x280
	bool Spectating; // 0x284
};

struct UJumperLevelSelect {
	UMapPackManager* MapPackManager; // 0x260
};

struct UWBP_InGameLoadoutSelection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* BatckFromEdit; // 0x268
	UWidgetAnimation* SwapToEdit; // 0x270
	UTextButton_C* BTN_Edit; // 0x278
	UTextButton_C* BTN_Equip; // 0x280
	UScaleBox* GuardianViewScaleBox; // 0x288
	UImage* Image_172; // 0x290
	UImage* Image_251; // 0x298
	UVerticalBox* LoadoutListBox; // 0x2a0
	USizeBox* LoadoutListSizeBox; // 0x2a8
	UWBP_PlayerLoadoutModificationScreen_C* WBP_PlayerLoadoutModificationScreen; // 0x2b0
	TArray<FLoadoutData> PLAYERLOADOUTS; // 0x2b8
	FText ChosenLoadout; // 0x2c8
};

struct UFieldSystemMetaDataProcessingResolution {
	EFieldResolutionType ResolutionType; // 0xb0
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

struct UMedalDisruptive {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct ABombBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UMaterialInstanceDynamic* BombScreenMat; // 0x308
	APromodPlayerController* LocalController; // 0x310
	APromodCharacter* Character; // 0x318
};

struct UUMGSequencePlayer {
	UWidgetAnimation* Animation; // 0x410
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420
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

struct UAkLateReverbComponent {
	char bEnable : 1; // 0x1f8
	UAkAuxBus* AuxBus; // 0x200
	FString AuxBusName; // 0x208
	float SendLevel; // 0x218
	float FadeRate; // 0x21c
	float Priority; // 0x220
	UAkLateReverbComponent* NextLowerPriorityComponent; // 0x228
};

struct ABotPOI {
	bool AttackersPOI; // 0x220
};

struct UParticleSystemReplay {
	int32_t ClipIDNumber; // 0x28
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

struct UNiagaraDataInterfaceAudioOscilloscope {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UARTrackedQRCode {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
};

struct UFieldSystemComponent {
	UFieldSystem* FieldSystem; // 0x440
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x458
};

struct UGizmoBaseComponent {
	FLinearColor Color; // 0x440
	float HoverSizeMultiplier; // 0x450
	float PixelHitDistanceThreshold; // 0x454
};

struct ABandwidthTestActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct UParticleModuleLifetime_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UWBP_CargoResultScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* 1_OurTeamText; // 0x268
	UTextBlock* 1_TheirTeamText; // 0x270
	UTextBlock* 2_OurProgressText; // 0x278
	UTextBlock* 2_TheirProgressText; // 0x280
	UTextBlock* 3_OurTimeText; // 0x288
	UTextBlock* 3_TheirTimeText; // 0x290
	UTextBlock* 4_OurTimeTimeText; // 0x298
	UTextBlock* 4_TheirTimeTimeText; // 0x2a0
	UTextBlock* 5_OurOvertimeText; // 0x2a8
	UTextBlock* 5_TheirOvertimeText; // 0x2b0
	UTextBlock* 6_OurOvertimeTime; // 0x2b8
	UTextBlock* 6_TheirOvertimeTime; // 0x2c0
	UHorizontalBox* ComparisonContainer; // 0x2c8
	USpacer* ComparisonSpacer; // 0x2d0
	UWidgetSwitcher* PostMatchAnimationSwitcher; // 0x2d8
	UVerticalBox* PostMatchResult; // 0x2e0
	UCanvasPanel* PostMatchResultPanel; // 0x2e8
	UCanvasPanel* PostTugOfWarResult; // 0x2f0
	UCanvasPanel* SingleResultPanel; // 0x2f8
	UWidgetSwitcher* Switcher; // 0x300
	UTextBlock* VictoryText; // 0x308
	UTextBlock* VictoryText_2; // 0x310
	UWBP_CargoAdvantageAnimWidget_C* WBP_CargoAdvantageAnimWidget; // 0x318
	UWBP_CargoAdvantageAnimWidget_C* WBP_CargoAdvantageAnimWidget_2; // 0x320
	UWBP_CargoSingleTeamProgress_C* WBP_CargoSingleTeamProgress; // 0x328
	UWBP_CargoVictoryProgress_C* WBP_CargoVictoryProgress; // 0x330
};

struct UMaterialExpressionRayTracingQualitySwitch {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct UPlayFabCloudScriptAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x158
	UPlayFabJsonObject* RequestJsonObj; // 0x160
	UPlayFabJsonObject* ResponseJsonObj; // 0x168
};

struct UInterpTrackInstEvent {
	float LastUpdatePosition; // 0x28
};

struct UNUIINFGameOverview {
	FText CurrentPlayerObjectiveText; // 0x3a0
	FLinearColor LeftProgressBarColor; // 0x3b8
	FLinearColor RightProgressBarColor; // 0x3c8
	FText LeftProgressbarText; // 0x3d8
	FText RightProgressbarText; // 0x3f0
};

struct UNiagaraSimulationStageGeneric {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct ASceneCaptureCube {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct UWidgetNavigation {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UWBP_PlayerAliveIcon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Background; // 0x268
	UImage* Background_2; // 0x270
	UImage* Border; // 0x278
	UImage* Border_2; // 0x280
	UImage* DeadIcon; // 0x288
	UImage* DeadIcon_2; // 0x290
	UImage* Highlight; // 0x298
	UImage* Highlight_2; // 0x2a0
	UImage* IMG_FireupAvailableBackground; // 0x2a8
	UImage* IMG_FireupIcon; // 0x2b0
	UImage* PlayerIcon; // 0x2b8
	UInvalidationBox* WholeWidget_InvalidationBox; // 0x2c0
	APromodPlayerState* BoundPlayer; // 0x2c8
	UHUDTextDataAsset* HUDColour; // 0x2d0
	FLinearColor FireupIconColour; // 0x2d8
	FLinearColor HasFireupBackgroundBorderColour; // 0x2e8
	FLinearColor NoFireupBackgroundColour; // 0x2f8
	FLinearColor NoFireupBorderColour; // 0x308
	FLinearColor HasFireupBackgroundBorderColourEnemy; // 0x318
	UTexture2D* FriendlyNoAvatarPicture; // 0x328
	UTexture2D* EnemyNoAvatarPicture; // 0x330
	bool Has Fireup; // 0x338
};

struct UMovieSceneTrack {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	FGuid EvaluationFieldGuid; // 0x58
	FMovieSceneTrackEvaluationField EvaluationField; // 0x68
};

struct UWBP_ServerBrowserFilterOption_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* BTN_Main; // 0x268
	UBorder* CheckboxBorder; // 0x270
	UImage* IMG_Checked; // 0x278
	USizeBox* SB_Checkbox; // 0x280
	UTextBlock* TB_OptionText; // 0x288
	bool IsChecked; // 0x290
	FText OptionText; // 0x298
	FVector2D CheckboxSize; // 0x2b0
	int32_t FontSize; // 0x2b8
	FMulticastInlineDelegate CheckedStateChanged; // 0x2c0
	FText OptionalFriendlyName; // 0x2d0
};

struct UParticleModuleVectorFieldGlobal {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UParticleModuleParameterDynamic {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UParticleModuleRotationRate {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UDebugReticle {
	float FiberDistance; // 0x260
	float FiberLength; // 0x264
	FLinearColor Color; // 0x268
	FString Label; // 0x278
	ESlateVisibility DotVisibility; // 0x288
	ESlateVisibility FiberVisibility; // 0x289
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

struct AARSharedWorldGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
};

struct UWBP_BlitzScore_C {
	UWidgetSwitcher* Round_1_WidgetSwitch; // 0x260
	UWidgetSwitcher* Round_2_WidgetSwitch; // 0x268
	int32_t TeamIndex; // 0x270
};

struct APaperCharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
};

struct UMaterialBillboardComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x440
};

struct UMediaComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
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

struct UGizmoComponentWorldTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct AJumperHUD {
	UNUIJumperLeaderboard* JumperLeaderboard; // 0x5f8
	UNUIJumperLeaderboard* JumperLeaderboardClass; // 0x600
};

struct USourceEffectBitCrusherPreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct UBrushBuilder {
	FString BitmapFilename; // 0x28
	FString Tooltip; // 0x38
	char NotifyBadParams : 1; // 0x48
	TArray<FVector> Vertices; // 0x50
	TArray<FBuilderPoly> Polys; // 0x60
	FName Layer; // 0x70
	char MergeCoplanars : 1; // 0x78
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

struct USkeletalMeshSocket {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct UBotThirdPersonAnimInstance {
	APromodBot* BotCharacter; // 0x568
};

struct AWeapGun_Impacts_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	USceneComponent* DefaultSceneRoot; // 0x478
	FHitResult HitResult; // 0x480
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

struct USplineComponent {
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

struct APhysicsVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct UMapEditorObjectDetailsWidget {
	AMapEditorObject* LinkedObject; // 0x260
};

struct USoundNodeBranch {
	FName BoolParameterName; // 0x48
};

struct UGameplayTagsList {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
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

struct UEndMatchCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UAITask {
	AAIController* OwnerController; // 0x68
};

struct UWeaponSlot {
	UPromodInventoryComponent* OwningInventory; // 0x28
	ABattalionWeapon* WeaponPtr; // 0x30
	ESlotType SlotType; // 0x38
};

struct UMainMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UWidgetAnimation* PlayEnter; // 0x298
	UWidgetAnimation* SettingsIntro; // 0x2a0
	UWidgetAnimation* Intro; // 0x2a8
	UBack-Legend-button-Promod_C* Back-Legend-button-Promod; // 0x2b0
	UTextButton_C* Btn_CREATE_SCENARIO; // 0x2b8
	UTextButton_C* Btn_EXIT; // 0x2c0
	UTextButton_C* Btn_SETTINGS; // 0x2c8
	UTextButton_C* Btn_STORE; // 0x2d0
	UWidgetSwitcher* ButtonMenuWidgetSwitcher; // 0x2d8
	UDebug_Button-LIGHT-LEFT-JUSTIFIED_C* EXIT-new; // 0x2e0
	UCanvasPanel* Footer; // 0x2e8
	UCanvasPanel* Header; // 0x2f0
	UHeader-Tab-HUB-Promod_C* Header-Tab-HUB-Promod; // 0x2f8
	UHeader-Tab-LEADERBOARDS-Promod_C* Header-Tab-LEADERBOARDS-Promod; // 0x300
	UHeader-Tab-OPTIONS-Promod_C* Header-Tab-OPTIONS-Promod; // 0x308
	UHeader-Tab-WEAPONS-Promod_C* Header-Tab-WEAPONS-Promod; // 0x310
	UImage* Img_CREATE_SCENARIO; // 0x318
	UImage* Img_EXIT; // 0x320
	UImage* Img_SETTINGS; // 0x328
	UImage* Img_STORE; // 0x330
	UWBP_FullscreenMovie_C* IntroMovieWidget; // 0x338
	UDebug_Button-BLACK-LEFT-JUSTIFIED_C* Jumper-MM-Button; // 0x340
	UJumper_MainMenu_C* Jumper_MainMenu; // 0x348
	UCanvasPanel* JumperMenuPanel; // 0x350
	UDebug_Button-BLACK-LEFT-JUSTIFIED_C* KillRun-MM-Button; // 0x358
	UJumper_LevelSelect_C* KillRun_LevelSelect; // 0x360
	UCanvasPanel* KillRunMenuPanel; // 0x368
	UCanvasPanel* LeaderboardPanel; // 0x370
	UMainMenuLeaderboard_C* MainMenuLeaderboard; // 0x378
	UMenu-Background_C* Menu-Background; // 0x380
	UMenu-Button-Promod_C* Menu-Button-Promod; // 0x388
	UWidgetSwitcher* MenuPanelSwitcher; // 0x390
	UDebug_Button-BLACK-LEFT-JUSTIFIED_C* PLAY-TEST-new2; // 0x398
	UWidgetSwitcher* PlayMenuWidgetSwitcher; // 0x3a0
	UBack-Legend-button-Promod_C* PlayTest_BackButton; // 0x3a8
	UCanvasPanel* PlayTestMenuPanel; // 0x3b0
	UVerticalBox* PlayVertBox; // 0x3b8
	UDebug_Button-LIGHT-LEFT-JUSTIFIED_C* Sandbox-MM-Button; // 0x3c0
	UBack-Legend-button-Promod_C* ServerBrowser_BackButton; // 0x3c8
	UDebug_Button-BLACK-LEFT-JUSTIFIED_C* ServerBrowserButton; // 0x3d0
	UCanvasPanel* ServerBrowserPanel; // 0x3d8
	UDebug_Button-LIGHT-LEFT-JUSTIFIED_C* SETTINGS-new; // 0x3e0
	USettings_C* SettingsMenu; // 0x3e8
	UCanvasPanel* SettingsPanel; // 0x3f0
	UCanvasPanel* StartMenuPanel; // 0x3f8
	UDebug_Button-LIGHT-LEFT-JUSTIFIED_C* StrafeTraining-MM-Button; // 0x400
	UWBP_HeaderTab_C* Tab_HUB; // 0x408
	UWBP_HeaderTab_C* Tab_LEADERBOARDS; // 0x410
	UWBP_HeaderTab_C* Tab_OPTIONS; // 0x418
	UWBP_HeaderTab_C* Tab_WEAPONS; // 0x420
	UBack-Legend-button-Promod_C* Training_BackButton; // 0x428
	UDebug_Button-BLACK-LEFT-JUSTIFIED_C* TrainingButton; // 0x430
	UVerticalBox* TrainingVertBox; // 0x438
	UDebug_Button-LIGHT-LEFT-JUSTIFIED_C* Tutorial-MM-Button; // 0x440
	UBack-Legend-button-Promod_C* TutorialMenu-BackButton; // 0x448
	UCanvasPanel* TutorialMenuPanel; // 0x450
	UVignette-Temp_C* Vignette-Temp; // 0x458
	UWBP_LoadoutScreen_C* WBP_LoadoutScreen_C_4; // 0x460
	UWBP_ServerBrowser_C* WBP_ServerBrowser_C_6; // 0x468
	UWelcomePopup_C* WelcomePopup; // 0x470
	UWishlist-button-Promod-LARGER_C* Wishlist-button-Promod-LARGER; // 0x478
	bool bInJumperScreen; // 0x480
};

struct UMaterialExpressionTangentOutput {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionLogarithm2 {
	FExpressionInput X; // 0x40
};

struct ACineCameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7a0
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

struct UEnvQueryTest_Pathfinding {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct ULandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct UNavigationSystemModuleConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
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

struct UKantanBarChartBase {
	FKantanBarChartStyle WidgetStyle; // 0x178
	EKantanBarChartOrientation Orientation; // 0x2a8
	float MaxBarValue; // 0x2ac
	EKantanBarLabelPosition LabelPosition; // 0x2b0
	float BarToGapRatio; // 0x2b4
	EKantanBarValueExtents ValueExtentsDisplay; // 0x2b8
	FCartesianAxisConfig ValueAxisCfg; // 0x2c0
};

struct UAkAudioEvent {
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58
	UAkAudioBank* RequiredBank; // 0xa8
	UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8
	float MaxAttenuationRadius; // 0xc0
	bool IsInfinite; // 0xc4
	float MinimumDuration; // 0xc8
	float MaximumDuration; // 0xcc
};

struct UMaterialExpressionCurveAtlasRowParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UParticleModuleCameraOffset {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct UMorphTarget {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct USoundNodeDistanceCrossFade {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UNUIExperienceBar {
	int32_t ExperienceStartedAt; // 0x278
	int32_t ExperienceFinishedAt; // 0x27c
	int32_t ExperienceGainedFromScore; // 0x280
	int32_t ExperienceGainedFromMedals; // 0x284
	int32_t ExperienceGainedFromChallenges; // 0x288
	int32_t ExperienceGainedFromMatchResult; // 0x28c
	float ScorePhaseNormalised; // 0x290
	float MedalPhaseNormalised; // 0x294
	float ChallengePhaseNormalised; // 0x298
	float MatchResultPhaseNormalised; // 0x29c
	int32_t BonusMultiplier; // 0x2a0
	float XPRange; // 0x2a4
	EFillStage CurrentFillStage; // 0x2a8
};

struct UPromodPingablesDataAsset {
	TMap<EPingType, FPingableData> PingableData; // 0x30
};

struct UUnlockedLevelsSaveData {
	TArray<FString> UnlockedLevelNames; // 0x50
};

struct UCancel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Clicked; // 0x268
	UWidgetAnimation* Default; // 0x270
	UWidgetAnimation* Selected; // 0x278
	UWidgetAnimation* Unselected; // 0x280
	UButton* PM-BUTTON; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x290
};

struct UParticleModuleParameterDynamic_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct ACTFGameState {
	TArray<ACTFMode_FlagZone*> TeamFlagZones; // 0x4a0
	TArray<ACTFMode_Flag*> TeamFlags; // 0x4b0
	TArray<ACTFPlayerState*> FlagCarriers; // 0x4c0
	int32_t OvertimeCounter; // 0x4d0
	int32_t TimeToCapFlag; // 0x4d4
};

struct UMinimapInternal_Fog_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Fog; // 0x268
	UMapViewComponent* MapViewComp; // 0x270
	AMapFog* MapFog; // 0x278
	UMaterialInstanceDynamic* FogMatInst; // 0x280
	float StartTime; // 0x288
};

struct UDatasmithActorTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct UMaterialExpressionRuntimeVirtualTextureReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UMapBombSiteWidget {
	ABombMode_Zone* LinkedSite; // 0x268
	UMaterialInstanceDynamic* CachedMaterial; // 0x270
	ABeacon* Beacon; // 0x278
	float BeaconScaleX; // 0x280
	float BeaconScaleY; // 0x284
	UImage* ImageBackground; // 0x288
	UImage* ImageSiteText; // 0x290
	FVector2D ScaledPlayerPos; // 0x298
	float RotationAngle; // 0x2a0
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2a8
	bool bInActiveArray; // 0x2d4
};

struct ABattalionGrenadePickup {
	UStaticMeshComponent* DisplayMesh; // 0x220
	ABattalionCharacter* PickedUpBy; // 0x228
	FName WeaponFireTag; // 0x230
	FVector StartLocation; // 0x238
	FVector TargetLocation; // 0x244
	UAkAudioEvent* PickupSound; // 0x250
	bool DestroyAfterTime; // 0x258
	EGrenadeType GrenadeType; // 0x259
	USphereComponent* SphereCollision; // 0x268
};

struct UWrapBoxSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UNUICardsSelection {
	int32_t Team; // 0x278
	TArray<ABattalionPlayerState*> PlayerStateSlots; // 0x280
	FText HeadingText; // 0x290
	FString CountdownTimer; // 0x2a8
};

struct UPlayFabGroupsAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x218
	UPlayFabJsonObject* RequestJsonObj; // 0x220
	UPlayFabJsonObject* ResponseJsonObj; // 0x228
};

struct UAsyncTaskDownloadImage {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UNUIGenericActionPrompt {
	FText PromptDescriptionText; // 0x290
	FText BindNameText; // 0x2a8
};

struct UAnimSequenceBase {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct ACargoSafeZone {
	UStaticMeshComponent* MeshComponent; // 0x220
	int32_t Team; // 0x228
	int32_t OriginalTeam; // 0x22c
	int32_t Checkpoint; // 0x230
	bool bNoEntryUntilActive; // 0x234
	bool bActivated; // 0x235
	bool bAllowed; // 0x236
	ACargoGameState* CargoGameState; // 0x238
};

struct UWBP_BlitzHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UWidgetAnimation* Kill+15-And-Beyond; // 0x270
	UWidgetAnimation* Kill+10; // 0x278
	UWidgetAnimation* Kill+5; // 0x280
	UWidgetAnimation* DamageTaken; // 0x288
	UVerticalBox* BlockedMessagesVerticalBox; // 0x290
	USizeBox* ClientFPS; // 0x298
	USizeBox* FrameTime; // 0x2a0
	USizeBox* GameLatency; // 0x2a8
	USizeBox* GameThreadTime; // 0x2b0
	USizeBox* GameToRenderLatency; // 0x2b8
	USizeBox* GPUTemp; // 0x2c0
	UHUD_LINES_C* HUD_LINES; // 0x2c8
	UHUD_LINES_C* HUD_LINES_2; // 0x2d0
	USizeBox* IdleTime; // 0x2d8
	UWidgetSwitcher* OverviewSwitcher; // 0x2e0
	USizeBox* RenderLatency; // 0x2e8
	USizeBox* RenderThreadTime; // 0x2f0
	USizeBox* RHIThreadTime; // 0x2f8
	UWBP_ActionPrompt_C* WBP_ActionPrompt; // 0x300
	UWBP_AmmoAndNades_C* WBP_AmmoAndNades; // 0x308
	UWBP_Announcement_C* WBP_Announcement; // 0x310
	UWBP_BasicScoreAward_C* WBP_BasicScoreAward; // 0x318
	UWBP_BlitzCanRespawnIndicator_C* WBP_BlitzCanRespawnIndicator; // 0x320
	UWBP_BlitzGameoverviewWidget_C* WBP_BlitzGameoverviewWidget_C_2; // 0x328
	UWBP_BlitzSpectating_C* WBP_BlitzSpectating; // 0x330
	UWBP_BombInfo_C* WBP_BombInfo; // 0x338
	UWBP_ChatFeed_C* WBP_ChatFeed; // 0x340
	UWBP_ClassChanged_C* WBP_ClassChanged; // 0x348
	UWBP_Crosshair_C* WBP_Crosshair; // 0x350
	UWBP_DamageTakenIndicator_C* WBP_DamageTakenIndicator; // 0x358
	UWBP_FireUpProgress_C* WBP_FireUpProgress; // 0x360
	UWBP_GameOverScreen_C* WBP_GameOverScreen; // 0x368
	UWBP_GrenadeIndicator_C* WBP_GrenadeIndicator; // 0x370
	UWBP_Hitmarker_C* WBP_Hitmarker; // 0x378
	UWBP_InGameLoadoutSelection_C* WBP_InGameLoadoutSelection_304; // 0x380
	UWBP_Interaction_C* WBP_Interaction; // 0x388
	UWBP_Inventory_C* WBP_Inventory; // 0x390
	UWBP_Killfeed_C* WBP_Killfeed; // 0x398
	UWBP_KillSuccess_C* WBP_KillSuccess; // 0x3a0
	UWBP_Message_C* WBP_Message; // 0x3a8
	UWBP_MiniMap_C* WBP_MiniMap; // 0x3b0
	UWBP_Overtime_Shootout_Title_C* WBP_Overtime_Shootout_Title; // 0x3b8
	UWBP_Overtime_Shootout_Transition_C* WBP_Overtime_Shootout_Transition; // 0x3c0
	UWBP_Overtime_Shootout_Victory_C* WBP_Overtime_Shootout_Victory; // 0x3c8
	UWBP_Overtime_Title_C* WBP_Overtime_Title; // 0x3d0
	UWBP_PingSelection_C* WBP_PingSelection; // 0x3d8
	UWBP_PlantProgressBar_C* WBP_PlantProgressBar; // 0x3e0
	UWBP_ShootoutOverview_C* WBP_ShootoutOverview_C_2; // 0x3e8
	UWBP_SNDLeaderboard_C* WBP_SNDLeaderboard; // 0x3f0
	UWBP_SniperVignette_C* WBP_SniperVignette; // 0x3f8
	UWBP_StaminaAndHealthBars_C* WBP_StaminaAndHealthBars; // 0x400
	UWBP_StaminaBar_C* WBP_StaminaBar; // 0x408
	UWBP_StrafeJumpSpeedFeedback_C* WBP_StrafeJumpSpeedFeedback; // 0x410
	UWBP_SwappingSides_C* WBP_SwappingSides; // 0x418
	UWBP_Vault_C* WBP_Vault; // 0x420
	UWBP_VictoryState_C* WBP_VictoryState; // 0x428
	UWBP_WeaponPickup_C* WBP_WeaponPickup; // 0x430
	ESlateVisibility In Visibility; // 0x438
	FMulticastInlineDelegate OnShowUpdateLeaderboard; // 0x440
	bool IsPlayingHealth; // 0x450
	FMulticastInlineDelegate OnShowUpdateGameOverScreen; // 0x458
	TArray<UWBP_GenericBlockedMessage_C*> CurrentBlockedMessages; // 0x468
	bool bBlockedUIFound; // 0x478
	float RemainingStamina; // 0x47c
	float StaminaRegenMultiplier; // 0x480
	int32_t StaminaDirection; // 0x484
	FStaminaEvent StaminaEvent; // 0x488
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

struct UBTComposite_SimpleParallel {
	EBTParallelMode FinishMode; // 0x90
};

struct UBattalionDamageType {
	FString WeaponName; // 0x40
	EWeaponType WeaponType; // 0x50
	FSlateBrush KillIconBrush; // 0x58
	FVector2D IconResolution; // 0xe0
	UForceFeedbackEffect* HitForceFeedback; // 0xe8
	UForceFeedbackEffect* KilledForceFeedback; // 0xf0
	bool HeadshotHitmarkerSound; // 0xf8
	bool IsGrenade; // 0xf9
	bool IsHeadshot; // 0xfa
	bool IsWallbang; // 0xfb
	bool IsMelee; // 0xfc
	bool IsPrimary; // 0xfd
	bool IsBoltAction; // 0xfe
	bool IsSniper; // 0xff
};

struct UPawnAction_Wait {
	float TimeToWait; // 0x98
};

struct UMovieSceneNiagaraParameterTrack {
	FNiagaraVariable Parameter; // 0x88
};

struct UMovieSceneParticleSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct UGeometryCacheComponent {
	UGeometryCache* GeometryCache; // 0x468
	bool bRunning; // 0x470
	bool bLooping; // 0x471
	float StartTimeOffset; // 0x474
	float PlaybackSpeed; // 0x478
	int32_t NumTracks; // 0x47c
	float ElapsedTime; // 0x480
	float Duration; // 0x4b4
	bool bManualTick; // 0x4b8
};

struct UPhysicalAnimationComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct AMatineeActor {
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

struct UBattalionGameViewport {
	UBattalionGameInstance* BattInstance; // 0x368
	UNUIPrompt* CurrentPrompt; // 0x370
	TArray<UNUIPrompt*> PromptQueue; // 0x378
};

struct UPromodSpatialMarker {
	bool bIsForceHidden; // 0x260
	bool bUsingHealthbars; // 0x261
	bool bShowHealthOnlyFromADS; // 0x262
	bool bUsingOutlines; // 0x263
	bool bUsingIcons; // 0x264
	bool bSeeEnemyHealthbars; // 0x265
	bool bShowHealthThroughWall; // 0x266
	bool bShowAlliedMarkers; // 0x267
	bool bShowEnemyMarkers; // 0x268
	float MinRangeForOutline; // 0x26c
	float MaxRangeForOutline; // 0x270
	float MinRangeForSilhouette; // 0x274
	float MaxRangeForSilhouette; // 0x278
	float MinRangeForIcon; // 0x27c
	float MaxRangeForIcon; // 0x280
	float MinRangeForHealthbar; // 0x284
	float MaxRangeForHealthbar; // 0x288
	float MinRangeForHealthbarADS; // 0x28c
	float MaxRangeForHealthbarADS; // 0x290
	float MinRangeForEnemyHealthbar; // 0x294
	float MaxRangeForEnemyHealthbar; // 0x298
	float MinRangeForEnemyHealthbarADS; // 0x29c
	float MaxRangeForEnemyHealthbarADS; // 0x2a0
	float MinimumLookAtAngle; // 0x2a4
	float AlwaysShowDistance; // 0x2a8
	float HipMaxDistance; // 0x2ac
	float AdsMaxDistance; // 0x2b0
	UCurveFloat* HipAngleCurve; // 0x2b8
	UCurveFloat* AdsAngleCurve; // 0x2c0
	bool bDebugChecks; // 0x2c8
	float MinScale; // 0x2cc
	float MaxScale; // 0x2d0
	float MinDistanceApart; // 0x2d4
	float MaxDistanceApart; // 0x2d8
	float Scale; // 0x2dc
	bool bScaleReverse; // 0x2e0
	APromodCharacter* OwningCharacter; // 0x2e8
	ACharacter* LinkedCharacter; // 0x2f0
	int32_t SpatialMarkerFlags; // 0x2f8
	int32_t PrevSpatialMarkerFlags; // 0x2fc
};

struct UNetAnalyticsAggregatorConfig {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UMedal50BombCTF {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct APatrolPoint {
	USceneComponent* RootComp; // 0x220
	float MinWaitTime; // 0x228
	float MaxWaitTime; // 0x22c
	bool bUsePointRotation; // 0x230
	bool bStopAtPatrolPoint; // 0x231
	int32_t PointIndex; // 0x234
	APatrolPath* OwningPath; // 0x238
};

struct UNUICasterGraphs {
	TArray<ABattalionPlayerState*> Players; // 0x278
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

struct UGameplayTaskResource {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct ABlitzGameState {
	ABombCarrierTracker* TrackerClass; // 0x610
	APromodCharacter* BombCarrier; // 0x618
	ABombPlayerController* BombCarrierController; // 0x620
	ABombCarrierTracker* BombCarrierTracker; // 0x628
	float RemainingFuseTime; // 0x630
	int32_t TeamWithBombPossesion; // 0x634
	bool bCanRespawn; // 0x638
	ETeamRole CurrentTeamRole; // 0x639
	FName CurrentBombCarrierName; // 0x63c
};

struct UMinimapInternal_Icon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Icon; // 0x268
	UMinimapInternal_IconMouseCapture_C* Widget_MouseCapture; // 0x270
	UMapIconComponent* MapIconComp; // 0x278
	UMapViewComponent* MapViewComp; // 0x280
	UMapTrackerComponent* MapTrackerComp; // 0x288
	UCanvasPanelSlot* CanvasSlot_Outer; // 0x290
	UCanvasPanelSlot* CanvasSlot_Icon; // 0x298
	UCanvasPanelSlot* CanvasSlot_MouseDetect; // 0x2a0
	FTimerHandle TickHandle; // 0x2a8
	bool bIsShowingArrow; // 0x2b0
	UMaterialInstanceDynamic* IconMatInst; // 0x2b8
	UMaterialInstanceDynamic* ArrowMatInst; // 0x2c0
	UMinimapInternal_Tooltip_C* Tooltip; // 0x2c8
	float EffectStartTime; // 0x2d0
	bool bIsCircular; // 0x2d4
	FVector2D IconOuterRadiusUV; // 0x2d8
	FVector2D ArrowInnerRadiusUV; // 0x2e0
	UCanvasPanel* Canvas_AboveFog; // 0x2e8
	UCanvasPanel* Canvas_BelowFog; // 0x2f0
	FGeometry MinimapGeo; // 0x2f8
	FVector2D MinimapSize; // 0x330
	float MinimapIconScale; // 0x338
	FMulticastInlineDelegate OnBoxSelect; // 0x340
	float Global Icon Scale; // 0x350
};

struct UParticleModuleAttractorPointGravity {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
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

struct AHeadquartersGameState {
	float ObjectiveCaptureTimeout; // 0x4a0
	float ObjectiveResetTime; // 0x4a4
	float ObjectiveRespawnTime; // 0x4a8
	float ObjectiveUnlockTime; // 0x4ac
	float ObjectiveStateChangedTimeStamp; // 0x4b0
	float ObjectiveTimeRemaining; // 0x4b4
	float ObjectiveResetTimer; // 0x4b8
	float ObjectiveRespawnTimer; // 0x4bc
	float ObjectiveUnlockTimer; // 0x4c0
	bool ObjectiveCurrentlyOwned; // 0x4c4
	EObjectiveState CurrentObjectiveState; // 0x4c5
};

struct ABP_PlaceableAmmoBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	USkeletalMeshComponent* AmmoBox; // 0x278
	UBoxComponent* Box; // 0x280
	UAkComponent* Ak; // 0x288
	USceneComponent* DefaultSceneRoot; // 0x290
	float Lifetime; // 0x298
	float Health; // 0x29c
	UPromodAllFireUpsDataAsset* FireUpDataAsset; // 0x2a0
	EFireUpType FireUpType; // 0x2a8
	bool Enabled; // 0x2a9
	int32_t OwnerTeamNum; // 0x2ac
	float MaxHealth; // 0x2b0
	UParticleSystemComponent* ParticleSystemComp; // 0x2b8
	UAkAudioEvent* SpawnAkEvent; // 0x2c0
	UParticleSystemComponent* VeryDamagedFXComp; // 0x2c8
	UParticleSystemComponent* SemiDamagedFXComp; // 0x2d0
	UAkAudioEvent* DetonationAkEvent; // 0x2d8
	int32_t AmmoToGive; // 0x2e0
	UParticleSystem* SemiDamagedFX; // 0x2e8
	UParticleSystem* VeryDamagedFX; // 0x2f0
	UParticleSystem* DetonationFX; // 0x2f8
	TArray<AActor*> ActorsInRange; // 0x300
	float InteractionTime; // 0x310
	int32_t MaxUses; // 0x314
	int32_t CurrentUses; // 0x318
	UNiagaraSystem* FireSystem; // 0x320
	UCurveFloat* DetonationDamageFalloffCurve; // 0x328
	UDamageType* DetonationDamageType; // 0x330
	APromodPlayerController* LastDamagedBy; // 0x338
	int32_t AmmoRestored; // 0x340
};

struct UJumper-MM-Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Simulation-text-off; // 0x268
	UWidgetAnimation* Simulation-activated; // 0x270
	UWidgetAnimation* Pulse; // 0x278
	UWidgetAnimation* Clicked; // 0x280
	UWidgetAnimation* SingleFrameSelected; // 0x288
	UWidgetAnimation* Default; // 0x290
	UImage* Backdrop-colour-image; // 0x298
	UImage* Backdrop-colour-image_2; // 0x2a0
	UImage* MM_ICON_2; // 0x2a8
	UButton* PM-BUTTON; // 0x2b0
	UCanvasPanel* Selected-Size-Canvas; // 0x2b8
	UCanvasPanel* UNSelected-Size-Canvas; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct UBlackboardKeyType_Class {
	UObject* BaseClass; // 0x30
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
	UClothingAssetCustomData* customData; // 0x110
	FClothConfig_Legacy ClothConfig; // 0x118
};

struct USimpleConstructionScript {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
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

struct UAkXboxOneInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UPromodClassManagerDataAsset {
	TArray<UPromodClassDataAsset*> ClassDataAssets; // 0x30
	UPromodAllFireUpsDataAsset* AllFireUps; // 0x40
};

struct ABattalionWeaponPickup {
	ABattalionCharacter* PickedUpBy; // 0x220
	UAkAudioEvent* PickupSound; // 0x228
	bool DestroyAfterTime; // 0x230
	FTimerHandle TimerHandle_OnMeshAnimatedOneFrame; // 0x238
	ABattalionWeapon* WeaponClass; // 0x240
	ABattalionWeapon* Weapon; // 0x248
	USkeletalMeshComponent* MeshComponent; // 0x250
	USphereComponent* SphereCollision; // 0x258
};

struct ABattalionPlayerControllerGMBase {
	ULevelSequencePlayer* SequencePlayer; // 0x668
	ULevelSequence* SequenceAsset; // 0x670
	FTimerHandle TimerHandle_ControllerReadyUpTimer; // 0x688
	bool WorldLoadPlayed; // 0x69c
	FMulticastInlineDelegate OnUpdateInteractionProgressDelegate; // 0x6a0
	FMulticastInlineDelegate OnNewVoteReceived; // 0x6b0
	FMulticastInlineDelegate OnVoteCasted; // 0x6c0
	FMulticastInlineDelegate OnVoteFinished; // 0x6d0
	FMulticastInlineDelegate OnSelfVoteCasted; // 0x6e0
	float SwitchSidesUIDelay; // 0x704
	ABattalionGrenade* ViewedGrenade; // 0x758
	bool bSpectateBehindView; // 0x76c
	ABattalionPlayerState* LastSpectatedPlayerState; // 0x770
	int32_t LastSpectatedPlayerId; // 0x778
	bool bIsSpectator; // 0x77c
	bool bDisableMovementAndInputOnSpawn; // 0x77d
	float UseProgress; // 0x780
	bool SpawnViewerEnabled; // 0x78c
	float CurrentRespawnTime; // 0x790
	ASpectatorPawn* ProfilingPawnClass; // 0x798
	UBattalionPathFollowingComponent* PathFollowingComponent; // 0x7a8
	TArray<FBotEnemyInfo> BotEnemyInfo; // 0x7b0
	TArray<FBotFriendlyInfo> BotFriendlyInfo; // 0x7c0
	TArray<ABotPOI*> BotPOIs; // 0x7d0
	ABotPOI* CurrentPOI; // 0x7e0
	ABotPOI* DesiredPOI; // 0x7e8
	bool BotOnLadder; // 0x7f0
	ABotFollowActor* BotFollowActor; // 0x8b0
	ABattalionCharacter* BotTarget; // 0x8c0
	ABattalionCharacter* BotPendingTarget; // 0x8c8
	TArray<ABattalionCharacter*> BotVisibleEnemies; // 0x8d0
	ABattalionGameMode* CurrentGameMode; // 0x8e0
	FRotator AdditiveControlRotation; // 0x900
	bool IsBeingABot; // 0x90c
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x920
	ABattalionPlayerState* PossessedBotPS; // 0x928
	bool bSurrenderState; // 0x934
	bool bCanOfferSurrender; // 0x935
	bool IsApplicableForMatchBonus; // 0x936
	FMulticastInlineDelegate OnKickTimerReset; // 0x938
	FMulticastInlineDelegate OnKickTimerWarning; // 0x948
	float KickWarningStartTime; // 0x958
	bool bKickTimerVisible; // 0x964
	TArray<FString> MutedChatIDs; // 0x970
	TMap<FString, float> DamageReceivedReport; // 0x980
	TMap<FString, float> DamageGivenReport; // 0x9d0
	TArray<FScoreboardData> ScoreboardData; // 0xa20
	bool ForceHideAllUIFlags; // 0xa38
	bool IsRecordingReplay; // 0xa39
	bool ShouldPlayVoiceLines; // 0xa48
	APlayerStart* LastSpawnPoint; // 0xa50
	UAkComponent* DefaultAkComp; // 0xa60
	UAkAudioEvent* StopReloadSounds; // 0xa68
	float OcclusionCheckDelta; // 0xa70
	FTimerHandle TimerHandle_OcclusionCheck; // 0xa78
	FTimerHandle VoiceInstructionTimerHandle; // 0xa80
	UVOManager* VOManager; // 0xa88
	TArray<FUniqueNetIdRepl> MutedIDs; // 0xa90
	TArray<FUniqueNetIdRepl> ServerMutedIDs; // 0xaa0
	UAkAudioEvent* LevelUpEvent; // 0xab0
	UAkAudioEvent* ChallengeCompletedEvent; // 0xab8
	UAkAudioEvent* PauseMusicEvent; // 0xac0
	UAkAudioEvent* ResumeMusicEvent; // 0xac8
	UAkAudioEvent* CriticalTickEvent; // 0xad0
	UAkAudioEvent* Battlerank_RankUpEvent; // 0xad8
	UAkAudioEvent* VoteStartedEvent; // 0xae0
	UAkAudioEvent* VoteCastEvent; // 0xae8
	TMap<FName, ABattalionWeapon*> WeaponClasses; // 0xaf0
	FName MatchState; // 0xb40
	UBattalionMedalsDataAsset* MedalDataAsset; // 0xb80
	UAkAudioEvent* MedalEarnedSoundEvent; // 0xb88
	TMap<FString, int32_t> PersonalMedals; // 0xb90
	ABattalionCharacter* LookingAtFriendly; // 0xbe0
	bool bIsWeaponVisible; // 0xbef
	bool bIsInThirdPerson; // 0xbf0
	UCameraShakeBase* FlashCameraShakeInstancePtr; // 0xbf8
};

struct UMedal30BombDOM {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct UPlayerInput {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UAkItemBoolProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UParticleModuleLight_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct ABattalionGameSession {
	FString Password; // 0x238
	bool bIsPrivate; // 0x248
};

struct UEditableGameplayTagQueryExpression_NoExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UParticleModuleLocationPrimitiveCylinder {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UMaterialExpressionTruncate {
	FExpressionInput Input; // 0x40
};

struct UInterpTrackInstProperty {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UNUICallOutName {
	FStackMember CurrentCallOutName; // 0x278
	FStackMember LastCallOutName; // 0x298
	TArray<FStackMember> CallOutNameStack; // 0x2b8
	FVector2D MinimapMargin; // 0x2c8
	float MinimapSize; // 0x2d0
	float CurrentMapScale; // 0x2d4
	float CurrentHudScale; // 0x2d8
};

struct UInAppPurchaseQueryCallbackProxy2 {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
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

struct ASpecialGrenadePickup {
	ESpecialGrenadeType SpecialGrenadeType; // 0x270
};

struct UAkSurfaceReflectorSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x1f8
	TArray<FAkPoly> AcousticPolys; // 0x200
	char bEnableDiffraction : 1; // 0x210
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x210
	AActor* AssociatedRoom; // 0x218
};

struct UMaterialExpressionStaticSwitch {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
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

struct UInterpTrackInstFloatParticleParam {
	float ResetFloat; // 0x28
};

struct AMonorailPath {
	USplineComponent* SplineComponent; // 0x220
	UStaticMesh* SplineMesh; // 0x228
	FVector SplineMeshOffset; // 0x230
	UMaterialInterface* Material; // 0x240
	float BaseSectionLength; // 0x248
	ESplineMeshAxis ForwardAxis; // 0x250
	float MonorailVerticalOffset; // 0x254
	float StationWaitTime; // 0x258
	int32_t CarriageCount; // 0x25c
	float CarriageOffset; // 0x260
	float CarriageRotationSpeed; // 0x264
	TArray<int32_t> Stations; // 0x268
	bool bShowDebug; // 0x278
	TArray<FCargoCheckpointData> Checkpoints; // 0x280
	ACargoCheckpoint* CheckpointClass; // 0x290
	float PassivePayloadSpeed; // 0x298
	float FirstAttackerPayloadSpeed; // 0x29c
	int32_t MaxSpeedIncreaseAttackers; // 0x2a0
	float ExtraAttackerPayloadSpeed; // 0x2a4
	float DisableCargoTime; // 0x2a8
	float EnableCargoTime; // 0x2ac
	float InitializeCargoTime; // 0x2b0
	float ContestingScoreTickTime; // 0x2b4
	float ContestingScoreTick; // 0x2b8
	bool bShowPreviewCheckpoints; // 0x2bc
	AMonorail* Monorail; // 0x2c0
	ACargoFirstTeamProgressPoint* CargoFirstTeamProgressPointClass; // 0x2c8
	ACargoFirstTeamProgressPoint* CargoFirstTeamProgressPoint; // 0x2d0
	ACargoFirstTeamProgressPoint* CargoEndPointProgressPoint; // 0x2d8
	TArray<ACargoCheckpoint*> CheckpointActors; // 0x2e0
	ACargoGameMode* CargoGameMode; // 0x2f0
};

struct UNUI_ColourPicker {
	FLinearColor Colour; // 0x270
	bool bSkipAnimationOnConstruction; // 0x280
};

struct UWBP_PromodSpatialMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308
	UWidgetAnimation* Glitch; // 0x310
	UWidgetAnimation* FadeOutAnim; // 0x318
	UWidgetAnimation* FadeInAnim; // 0x320
	UImage* ArrowBlue; // 0x328
	UImage* ArrowImage; // 0x330
	UImage* FireUpIcon; // 0x338
	UHorizontalBox* FireUpIconAndHPBox; // 0x340
	UProgressBar* HealthBar; // 0x348
	UCanvasPanel* Main; // 0x350
	UWidgetSwitcher* MarkerWidgetSwitcher; // 0x358
	USizeBox* SpatialMarkerSizeBox; // 0x360
	UTextBlock* Text; // 0x368
	UTextBlock* Text-Blue; // 0x370
	FSlateColor FriendlyUIColor; // 0x378
	FSlateColor EnemyUIColor; // 0x3a0
	bool Is Regenerating Health; // 0x3c8
	float Regen Amount; // 0x3cc
	float Max Health; // 0x3d0
	UBP_PlayerOutlineCameraModifier_C* OutlineCameraModifier; // 0x3d8
	bool CachedIsCarryingState; // 0x3e0
	bool CachedHealthBarFlag; // 0x3e1
	bool CachedOutlineFlag; // 0x3e2
	bool CachedIconFlag; // 0x3e3
	FSlateColor HealthBarColor; // 0x3e8
	ABattalionWeapon* CachedWeapon; // 0x410
	UMaterialInstanceDynamic* CachedOutlineDynamat; // 0x418
};

struct UPFRegionManager {
	FMulticastInlineDelegate OnCalculatedRegionLatencies; // 0x30
	UPlayFabSubsystem* PlayFabSubsystem; // 0x40
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

struct ALevelVariantSetsActor {
	FSoftObjectPath LevelVariantSets; // 0x220
};

struct UStaticMeshSocket {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct ABP_PlaceableDeployableCover_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UBoxComponent* OverlapCheck; // 0x278
	USkeletalMeshComponent* DeployableCover; // 0x280
	UAkComponent* Ak; // 0x288
	USceneComponent* DefaultSceneRoot; // 0x290
	float Timeline_0_NewTrack_0_7818C3C1481DF640B4CD02BEF4DEA887; // 0x298
	ETimelineDirection Timeline_0__Direction_7818C3C1481DF640B4CD02BEF4DEA887; // 0x29c
	UTimelineComponent* Timeline_1; // 0x2a0
	float Lifetime; // 0x2a8
	int32_t OwnerTeamNum; // 0x2ac
	float MaxHealth; // 0x2b0
	float Health; // 0x2b4
	bool Enabled; // 0x2b8
	UParticleSystemComponent* ParticleSystemComp; // 0x2c0
	UAkAudioEvent* SpawnAkEvent; // 0x2c8
	UParticleSystemComponent* VeryDamagedFXComp; // 0x2d0
	UParticleSystemComponent* SemiDamagedFXComp; // 0x2d8
	UPromodAllFireUpsDataAsset* FireUpDataAsset; // 0x2e0
	EFireUpType FireUpType; // 0x2e8
	UAkAudioEvent* DetonationAkEvent; // 0x2f0
	UParticleSystem* DetonationFX; // 0x2f8
	UParticleSystem* SemiDamagedFX; // 0x300
	UParticleSystem* VeryDamagedFX; // 0x308
	UMaterialInstanceDynamic* InstanceToUse; // 0x310
	APromodPlayerState* OwningPlayerState; // 0x318
};

struct UInterpTrackInstVisibility {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct UModularSynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct USandbox-MM-Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Simulation-text-off; // 0x268
	UWidgetAnimation* Simulation-activated; // 0x270
	UWidgetAnimation* Pulse; // 0x278
	UWidgetAnimation* Clicked; // 0x280
	UWidgetAnimation* SingleFrameSelected; // 0x288
	UWidgetAnimation* Default; // 0x290
	UImage* Backdrop-colour-image; // 0x298
	UImage* Backdrop-colour-image_2; // 0x2a0
	UImage* MM_ICON_2; // 0x2a8
	UButton* PM-BUTTON; // 0x2b0
	UCanvasPanel* Selected-Size-Canvas; // 0x2b8
	UCanvasPanel* UNSelected-Size-Canvas; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct ABP_SnapshotGrenade_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	FMulticastInlineDelegate OnImpact; // 0x2a0
};

struct ABattalionImpactEffect {
	UParticleSystem* DefaultFX; // 0x220
	UParticleSystem* ConcreteFX; // 0x228
	UParticleSystem* DirtFX; // 0x230
	UParticleSystem* WaterFX; // 0x238
	UParticleSystem* MetalFX; // 0x240
	UParticleSystem* WoodFX; // 0x248
	UParticleSystem* GlassFX; // 0x250
	UParticleSystem* GrassFX; // 0x258
	UParticleSystem* FleshFX; // 0x260
	UParticleSystem* SandFX; // 0x268
	FVector DefaultFXScalar; // 0x270
	FVector ConcreteFXScalar; // 0x27c
	FVector DirtFXScalar; // 0x288
	FVector WaterFXScalar; // 0x294
	FVector MetalFXScalar; // 0x2a0
	FVector WoodFXScalar; // 0x2ac
	FVector GlassFXScalar; // 0x2b8
	FVector GrassFXScalar; // 0x2c4
	FVector FleshFXScalar; // 0x2d0
	FVector SandFXScalar; // 0x2dc
	FRotator DefaultFXRotator; // 0x2e8
	FRotator ConcreteFXRotator; // 0x2f4
	FRotator DirtFXRotator; // 0x300
	FRotator WaterFXRotator; // 0x30c
	FRotator MetalFXRotator; // 0x318
	FRotator WoodFXRotator; // 0x324
	FRotator GlassFXRotator; // 0x330
	FRotator GrassFXRotator; // 0x33c
	FRotator FleshFXRotator; // 0x348
	FRotator SandFXRotator; // 0x354
	float DecalRenderDistance; // 0x360
	UAkAudioEvent* DefaultSound; // 0x368
	UAkAudioEvent* ConcreteSound; // 0x370
	UAkAudioEvent* DirtSound; // 0x378
	UAkAudioEvent* WaterSound; // 0x380
	UAkAudioEvent* MetalSound; // 0x388
	UAkAudioEvent* WoodSound; // 0x390
	UAkAudioEvent* GlassSound; // 0x398
	UAkAudioEvent* GrassSound; // 0x3a0
	UAkAudioEvent* FleshSound; // 0x3a8
	UAkAudioEvent* SandSound; // 0x3b0
	UAkAudioEvent* BellSound; // 0x3b8
	float FadeScreenSize; // 0x3c0
	FDecalData DefaultDecal; // 0x3c8
	FHitResult SurfaceHit; // 0x3e0
};

struct UWidgetAnimationPlayCallbackProxy {
	FMulticastInlineDelegate Finished; // 0x28
};

struct USettings_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x418
	UWidgetAnimation* MatchmakingEnd; // 0x420
	UWidgetAnimation* PS4-Labels; // 0x428
	UWidgetAnimation* XBOX-Labels; // 0x430
	UWidgetAnimation* ControlsRight; // 0x438
	UWidgetAnimation* ControlsLeft; // 0x440
	UWidgetAnimation* DBGServerPromptAnim; // 0x448
	UWidgetAnimation* Tab-Move-anim; // 0x450
	UWidgetAnimation* Settings-Outro; // 0x458
	UWidgetAnimation* Settings-Intro; // 0x460
	UWidgetAnimation* OnSettingsResetButtonAnimation; // 0x468
	UHorizontalBox* ADDPLAYERS; // 0x470
	UApply-Legend-button-Promod_C* Apply-Legend-button-Promod; // 0x478
	UImage* Arrow-Left; // 0x480
	UImage* Arrow-Right; // 0x488
	UScrollBox* Audio; // 0x490
	UButton* AudioButton; // 0x498
	UBindingImageText_C* AudioTab; // 0x4a0
	UBack-Legend-button-Promod_C* Back-Legend-button-Promod; // 0x4a8
	UImage* Breaker1; // 0x4b0
	UImage* Breaker2; // 0x4b8
	UImage* Breaker3; // 0x4c0
	UCircularProgressBar_C* CircularProgressBar; // 0x4c8
	UControllerLayoutSettingsItem_C* ControllerLayoutSettingsItem_3; // 0x4d0
	UControllerLayoutSettingsItem_C* ControllerLayoutSettingsItem_4; // 0x4d8
	UButton* ControlsButton; // 0x4e0
	UScrollBox* ControlsConfigPanel; // 0x4e8
	UWidgetSwitcher* ControlsSwitcher; // 0x4f0
	UBindingImageText_C* ControlsTab; // 0x4f8
	UScrollBox* General; // 0x500
	UButton* GeneralButton; // 0x508
	UBindingImageText_C* GeneralTab; // 0x510
	FNone* Hide_PLAY_labels; // 0x518
	FNone* Hide_PLAY_Lines; // 0x520
	FNone* Hide_XBOX_labels; // 0x528
	FNone* Hide_XBOX_Lines; // 0x530
	UImage* horizLine; // 0x538
	UImage* horizLine_2; // 0x540
	UImage* horizLine_3; // 0x548
	UImage* horizLine_4; // 0x550
	UImage* horizLine_5; // 0x558
	UImage* horizLine_6; // 0x560
	UImage* horizLine_7; // 0x568
	UImage* horizLine_8; // 0x570
	UImage* horizLine_9; // 0x578
	UImage* horizLine_10; // 0x580
	UImage* horizLine_11; // 0x588
	UImage* horizLine_12; // 0x590
	UImage* horizLine_13; // 0x598
	UImage* horizLine_14; // 0x5a0
	UImage* horizLine_15; // 0x5a8
	UImage* horizLine_16; // 0x5b0
	UImage* horizLine_17; // 0x5b8
	UImage* horizLine_18; // 0x5c0
	UImage* horizLine_19; // 0x5c8
	UImage* horizLine_20; // 0x5d0
	UImage* horizLine_21; // 0x5d8
	UImage* horizLine_22; // 0x5e0
	UImage* horizLine_23; // 0x5e8
	UImage* horizLine_24; // 0x5f0
	UImage* horizLine_25; // 0x5f8
	UImage* horizLine_26; // 0x600
	UImage* horizLine_27; // 0x608
	UImage* horizLine_28; // 0x610
	UImage* horizLine_29; // 0x618
	UImage* horizLine_30; // 0x620
	UCanvasPanel* Labels; // 0x628
	UControllerLayoutLabel_C* LabelShoulderL; // 0x630
	UControllerLayoutLabel_C* LabelShoulderR; // 0x638
	UControllerLayoutLabel_C* LabelSpecialL; // 0x640
	UControllerLayoutLabel_C* LabelSpecialR; // 0x648
	UControllerLayoutLabel_C* LabelTriggerL; // 0x650
	UControllerLayoutLabel_C* LabelTriggerR; // 0x658
	UButton* NavLeftButton; // 0x660
	UButton* NavRightButton; // 0x668
	UImage* PagingBlankImage_Center; // 0x670
	UImage* PagingBlankImage_Left; // 0x678
	UImage* PagingBlankImage_Right; // 0x680
	UScrollBox* PcControllsScrollBox; // 0x688
	UCanvasPanel* PCControls; // 0x690
	UPlatformKeyImage_C* PlatformKeyAuxImage; // 0x698
	UPlatformKeyImage_C* PlatformKeyImage; // 0x6a0
	UPlatformKeyImage_C* PlatformKeyImage_2; // 0x6a8
	UPlatformKeyImage_C* PlatformKeyImage_224; // 0x6b0
	UControllerLayoutLabel_C* PLAYLabelDpadBottom; // 0x6b8
	UControllerLayoutLabel_C* PLAYLabelDpadLeft; // 0x6c0
	UControllerLayoutLabel_C* PLAYLabelDpadRight; // 0x6c8
	UControllerLayoutLabel_C* PLAYLabelFaceButtonBottom; // 0x6d0
	UControllerLayoutLabel_C* PLAYLabelFaceButtonLeft; // 0x6d8
	UControllerLayoutLabel_C* PLAYLabelFaceButtonRight; // 0x6e0
	UControllerLayoutLabel_C* PLAYLabelFaceButtonTop; // 0x6e8
	UControllerLayoutLabel_C* PLAYLabelFaceLeftStick; // 0x6f0
	UControllerLayoutLabel_C* PLAYLabelFaceRightStick; // 0x6f8
	UCanvasPanel* PLAYLABELS; // 0x700
	UReset-Legend-button-Promod_C* Reset-Legend-button-Promod; // 0x708
	UNUI_NullInput* SectionPlacement; // 0x710
	UVerticalBox* SectionSizing; // 0x718
	UCanvasPanel* SHAREDLABELS; // 0x720
	UHorizontalBox* TabsContianer; // 0x728
	UImage* Vertline; // 0x730
	UImage* Vertline_2; // 0x738
	UImage* Vertline_3; // 0x740
	UImage* Vertline_4; // 0x748
	UImage* Vertline_5; // 0x750
	UImage* Vertline_6; // 0x758
	UImage* Vertline_7; // 0x760
	UImage* Vertline_8; // 0x768
	UImage* Vertline_9; // 0x770
	UImage* Vertline_10; // 0x778
	UImage* Vertline_11; // 0x780
	UImage* Vertline_12; // 0x788
	UImage* Vertline_13; // 0x790
	UImage* Vertline_14; // 0x798
	UImage* Vertline_15; // 0x7a0
	UImage* Vertline_16; // 0x7a8
	UScrollBox* Video; // 0x7b0
	UButton* VideoButton; // 0x7b8
	UBindingImageText_C* VideoTab; // 0x7c0
	UWidgetSwitcher* WidgetSwitcher_17; // 0x7c8
	UControllerLayoutLabel_C* XBOXLabelDpadBottom; // 0x7d0
	UControllerLayoutLabel_C* XBOXLabelDpadLeft; // 0x7d8
	UControllerLayoutLabel_C* XBOXLabelDpadRight; // 0x7e0
	UControllerLayoutLabel_C* XBOXLabelFaceButtonBottom; // 0x7e8
	UControllerLayoutLabel_C* XBOXLabelFaceButtonLeft; // 0x7f0
	UControllerLayoutLabel_C* XBOXLabelFaceButtonRight; // 0x7f8
	UControllerLayoutLabel_C* XBOXLabelFaceButtonTop; // 0x800
	UControllerLayoutLabel_C* XBOXLabelFaceLeftStick; // 0x808
	UControllerLayoutLabel_C* XBOXLabelFaceRightStick; // 0x810
	UCanvasPanel* XBOXLABELS; // 0x818
	TArray<UScrollBox*> Sections; // 0x820
	TArray<USettingsItem_C*> Items_1; // 0x830
	FText Title; // 0x840
	TArray<UButton*> HeaderButtons; // 0x858
	FButtonStyle Selected; // 0x868
	FButtonStyle NotSelected; // 0xae0
	int32_t ConfigComboAddIndex; // 0xd58
	bool HasCachedWidgets; // 0xd5c
	int32_t SelectedItemIndex; // 0xd60
	TArray<UTextBlock*> TabHeadingsText; // 0xd68
	bool IsUsingInGameColors; // 0xd78
	float TabsScrollButtonAmount; // 0xd7c
	int32_t SelectedTitle; // 0xd80
	bool ResetKeyPressed; // 0xd84
	int32_t widgetToFocusOnReset; // 0xd88
	TArray<FName> ButtonProfiles; // 0xd90
	int32_t ButtonProfileIdx; // 0xda0
	TArray<FName> StickProfiles; // 0xda8
	int32_t StickProfileIdx; // 0xdb8
	TMap<FName, FKey> DefaultBinds; // 0xdc0
	TMap<FName, FText> BindNameOverrides; // 0xe10
	TMap<FKey, UTexture2D*> AxisImageOverrides; // 0xe60
	UMainMenu_C* MainMenuReference; // 0xeb0
	bool bIsMainMenu; // 0xeb8
};

struct UFOVSkeletalMeshComponent {
	float FOV; // 0xed0
};

struct URectLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
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

struct UTreeView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UVQ3CharacterMovementComponent {
	bool bQueueJump; // 0xb32
	FVector AirWishVelocity; // 0xb34
	bool bJustLanded; // 0xb40
	FFindFloorResult PrevFloor; // 0xb44
	float ScalingFactor; // 0xc00
	float Gravity; // 0xc04
	float JumpForce; // 0xc08
	EMovementJumpMode JumpMode; // 0xc0c
	bool bEnableMovementSpeedCap; // 0xc0d
	float MovementSpeedCap; // 0xc10
	float Friction; // 0xc14
	float GroundStopSpeed; // 0xc18
	float GroundMaxSpeed; // 0xc1c
	float ProneMaxSpeed; // 0xc20
	float GroundAcceleration; // 0xc24
	bool bUseGroundAccelerationCurve; // 0xc28
	UCurveFloat* GroundAccelerationCurve; // 0xc30
	float CrouchSpeedScale; // 0xc38
	bool AllowedToJumpWhileCrouched; // 0xc3c
	float AirAccelerate; // 0xc40
	float AirStopAccelerate; // 0xc44
	float AirStrafeSpeed; // 0xc48
	float AirStrafeAcceleration; // 0xc4c
	float CPMAirControl; // 0xc50
	float GroundTraceDistance; // 0xc54
	float Overclip; // 0xc58
	float Underclip; // 0xc5c
	float PenRecoveryMultiplier; // 0xc60
	bool SkipClipWhenPen; // 0xc64
	float CollisionPenResolutionMultiplier; // 0xc68
	int32_t MaxClipPlanes; // 0xc6c
	float MaxStepSize; // 0xc70
	bool bSimpleCollision; // 0xc74
	bool bEnableSweepAssistance; // 0xc75
	bool bEnableBisectoring; // 0xc76
	float BisectorSpread; // 0xc78
	float BisectorSize; // 0xc7c
	FDebugTraceStyle SlideMoveTraceDebugStyle; // 0xc80
	bool Jumped; // 0xcd8
	float JumpStartZ; // 0xcdc
};

struct UShaderPlatformQualitySettings {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct UParticleModuleVectorFieldRotationRate {
	FVector RotationRate; // 0x30
};

struct UMaterialExpressionGetMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UGizmoRectangleComponent {
	FVector DirectionX; // 0x460
	FVector DirectionY; // 0x46c
	float OffsetX; // 0x478
	float OffsetY; // 0x47c
	float LengthX; // 0x480
	float LengthY; // 0x484
	float Thickness; // 0x488
	char SegmentFlags; // 0x48c
};

struct UMovieSceneSkeletalAnimationTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
	bool bUseLegacySectionIndexBlend; // 0x90
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98
	bool bBlendFirstChildOfRoot; // 0xc8
};

struct UABP_Offensive_Incendiary_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
};

struct UMapMarkerWidget {
	UWorldMarkerComponent* LinkedWorldMarker; // 0x268
	UMaterialInstanceDynamic* CachedMaterial; // 0x270
	ABeacon* Beacon; // 0x278
	float BeaconScaleX; // 0x280
	float BeaconScaleY; // 0x284
	float Zoom; // 0x288
	UVerticalBox* MarkerVerticalBox; // 0x290
	UImage* MarkerImage; // 0x298
	UImage* MarkerBackground; // 0x2a0
	FVector2D ScaledPlayerPos; // 0x2a8
	float RotationAngle; // 0x2b0
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2b8
	UMaterialInstanceDynamic* ProgressMaterial; // 0x2c0
	bool AllowColourChanges; // 0x2c8
	bool bInActiveArray; // 0x2f0
};

struct UPawnMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UAnimationSharingManager {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UParticleModuleLocationPrimitiveSphere {
	FRawDistributionFloat StartRadius; // 0xb0
};

struct UInvalidationBox {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
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

struct UPromodMetricsSystem {
	TMap<FName, UPromodMetric*> Metrics; // 0x48
	UPromodMetric* FrameTime; // 0x98
	UPromodMetric* ClientFPS; // 0xa0
	UPromodMetric* IdleTime; // 0xa8
	UPromodMetric* GameThreadTime; // 0xb0
	UPromodMetric* RenderThreadTime; // 0xb8
	UPromodMetric* RHIThreadTime; // 0xc0
	UPromodMetric* GameLatency; // 0xc8
	UPromodMetric* RenderLatency; // 0xd0
	UPromodMetric* GameToRenderLatency; // 0xd8
	UPromodMetric* GPUTemp; // 0xe0
};

struct AVaultAllowVolume {
	UBoxComponent* BoxComponent; // 0x220
};

struct UABP_Karambit_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x350
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x470
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x580
	int32_t ComboIndex; // 0x600
};

struct UABP_KaBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UBTDecorator {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UGraphNodeContextMenuContext {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct UNUIFlagIcon {
	ESlateVisibility IconVisibility; // 0x278
	float AmmoWidgetWidth; // 0x27c
};

struct ABattalionSmokeGrenade {
	UAkAudioEvent* SmokeLoopSound; // 0x3d0
	UAkAudioEvent* SmokeLoopEnd; // 0x3d8
	UAkComponent* AkComponent; // 0x3e0
	float SmokeLength; // 0x3ec
	float SmokeSoundLengthAddition; // 0x3f0
	UBoxComponent* SmokePostProcessBounds; // 0x400
	UBoxComponent* SmokeBoxBounds; // 0x408
	UPostProcessComponent* SmokePostProcess; // 0x410
};

struct UHUDDeathRow {
	UTextBlock* Killer; // 0x260
	UTextBlock* Killed; // 0x268
	FDeathMessage DeathMessage; // 0x270
	UMaterialInstance* GunImageMat; // 0x318
	UMaterialInstance* WallbangImageMat; // 0x320
	UMaterialInstance* HeadshotImageMat; // 0x328
	UMaterialInstance* FallDamageImageMat; // 0x330
	UMaterialInstance* SuicideImageMat; // 0x338
	UMaterialInstance* NullImageMat; // 0x340
	UImage* GunImage; // 0x348
	UImage* WallbangImage; // 0x350
	UImage* HeadshotImage; // 0x358
	FSlateColor TeamZeroCol; // 0x360
	FSlateColor TeamOneCol; // 0x388
};

struct UHudSettings {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UParticleModuleKillBox {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct UMedalMoneySaver {
	AWartideGameMode* WartideGameMode; // 0x48
	TArray<FDefaultKillTracker> DefaultKillTrackers; // 0x50
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

struct APingActor {
	UWorldMarkerComponent* WorldMarkerComponent; // 0x220
	FPingableData PingableData; // 0x228
};

struct UNiagaraDataInterfacePlatformSet {
	FNiagaraPlatformSet Platforms; // 0x38
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

struct UNUIAmmoCount {
	bool SavePositionPressed; // 0x260
	bool ReloadPositionPressed; // 0x261
	bool ResetRunPressed; // 0x262
};

struct UBrushComponent {
	UModel* Brush; // 0x440
	UBodySetup* BrushBodySetup; // 0x448
};

struct UMovieScenePrimitiveMaterialSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UAkXboxOneGDKInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x88
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UHUDSpectator {
	FString GameTimer; // 0x278
	int32_t TeamAScore; // 0x288
	int32_t TeamBScore; // 0x28c
	ESpectatorCameraMode SpecCameraMode; // 0x290
	bool IsOutlineEnabled; // 0x291
	bool AreGrenadeLinesEnabled; // 0x292
	APlayerController* PCOwner; // 0x298
	ABattalionSpectatorPawn* OwnerSpectatorPawn; // 0x2a0
	ABattalionPlayerState* CurrentlySpectating; // 0x2a8
	TArray<UHUDPlayerName*> PlayerNames; // 0x2b0
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

struct UMovieSceneSpawnTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	FGuid ObjectGuid; // 0x88
};

struct UMedalKillSurvivor {
	AInfectionGameMode* INFGameMode; // 0x48
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

struct UTextureLODSettings {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UUniformGridSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct UAkMacInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct USMStateInstance_Base {
	bool bEvalGraphsOnStart; // 0x80
	bool bEvalGraphsOnUpdate; // 0x81
	bool bEvalGraphsOnEnd; // 0x82
	bool bEvalGraphsOnInitialize; // 0x83
	bool bEvalGraphsOnRootStateMachineStart; // 0x84
	bool bEvalGraphsOnRootStateMachineStop; // 0x85
	bool bAlwaysUpdate; // 0x86
	bool bDisableTickTransitionEvaluation; // 0x87
	bool bDefaultToParallel; // 0x88
	bool bAllowParallelReentry; // 0x89
	bool bStayActiveOnStateChange; // 0x8a
	bool bEvalTransitionsOnStart; // 0x8b
	bool bExcludeFromAnyState; // 0x8c
	FMulticastInlineDelegate OnStateBeginEvent; // 0x90
	FMulticastInlineDelegate OnStateUpdateEvent; // 0xa0
	FMulticastInlineDelegate OnStateEndEvent; // 0xb0
};

struct UBattalionMedalsDataAsset {
	TArray<FBattalionMedalEntity> Medals; // 0x30
};

struct UMaterialExpressionLandscapeLayerSwitch {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct AGameStateBase {
	AGameModeBase* GameModeClass; // 0x220
	AGameModeBase* AuthorityGameMode; // 0x228
	ASpectatorPawn* SpectatorClass; // 0x230
	TArray<APlayerState*> PlayerArray; // 0x238
	bool bReplicatedHasBegunPlay; // 0x248
	float ReplicatedWorldTimeSeconds; // 0x24c
	float ServerWorldTimeSecondsDelta; // 0x250
	float ServerWorldTimeSecondsUpdateFrequency; // 0x254
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

struct UParticleModuleEventReceiverBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
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

struct UAkAssetDataSwitchContainer {
	TArray<UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x90
	UAkGroupValue* DefaultGroupValue; // 0xa0
};

struct UCullingField {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UWBP_BlitzSpatialMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Background; // 0x268
	UImage* Icon; // 0x270
	UTextBlock* Label; // 0x278
	UCanvasPanel* Root; // 0x280
	float Min Fade; // 0x288
	float Fade Multiplier; // 0x28c
};

struct USoundNodeQualityLevel {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct UWBP_Interaction_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HB_SubtitleContainer; // 0x268
	UImage* IMG_InteractionProgress; // 0x270
	UPlatformKeyImage_C* PlatformKeyImage; // 0x278
	UTextBlock* TB_InteractionContext; // 0x280
	UTextBlock* TB_SubtitleText; // 0x288
	UTextBlock* TXT_Command; // 0x290
	float CurrentInteractionTime; // 0x298
	float Interaction Time; // 0x29c
	bool InteractionInProgress; // 0x2a0
	float CurrentProgress; // 0x2a4
	float Delta Time; // 0x2a8
	UMaterialInstanceDynamic* ProgressMat; // 0x2b0
};

struct UUniformGridPanel {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UMovieSceneAkAudioRTPCSection {
	UAkRtpc* RTPC; // 0xe8
	FString Name; // 0xf0
	FRichCurve FloatCurve; // 0x100
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180
	FMovieSceneFloatChannel RTPCChannel; // 0x1b0
};

struct UAISenseEvent_Damage {
	FAIDamageEvent Event; // 0x28
};

struct UAREnvironmentCaptureProbe {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct UBindingImageText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UImage* Image_94; // 0x280
	UTextBlock* TextBlock_88; // 0x288
	int32_t lastState; // 0x290
};

struct ABlitzMode_Bomb {
	UWidgetComponent* SpatialRespawnTimer; // 0x300
	UBlitzWidgetComponent* SpatialBombMarker; // 0x308
	UTexture2D* BombSpatialTexture; // 0x310
	UTexture2D* DefendSpatialTexture; // 0x318
	UTexture2D* DefuseSpatialTexture; // 0x320
	FColor NeutralColor; // 0x328
	FColor FriendlyColor; // 0x32c
	FColor EnemyColor; // 0x330
};

struct UMaterialExpressionRotateAboutAxis {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct ADatasmithSceneActor {
	UDatasmithScene* Scene; // 0x220
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228
};

struct UAkHololensInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UWBP_BlitzRoundTracker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* InfoLabel; // 0x268
};

struct UNavigationDataChunk {
	FName NavigationDataName; // 0x28
};

struct UMapBuildDataRegistry {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct USettings_Backdrop__Option_Selected_C {
	UImage* Backdrop-colour-image; // 0x260
	UImage* Breaker; // 0x268
	UImage* Line; // 0x270
	UImage* slant; // 0x278
	UImage* slant_2; // 0x280
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

struct UControllerLayoutSettingsItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f8
	UWidgetAnimation* DoSetDisabled; // 0x300
	USettings_Backdrop__Config_Selected_C* BackdropSelected; // 0x308
	USettings_Backdrop__Option_Unselected_C* BackdropUnselected; // 0x310
	UBorder* Border_1; // 0x318
	ULeftRightConfig_C* LeftRightSetting; // 0x320
	UTextBlock* NameText_2; // 0x328
	USettings_C* Settings; // 0x330
	int32_t LeftRightInt; // 0x338
	int32_t LeftRightMin; // 0x33c
	int32_t LeftRightMax; // 0x340
	FLinearColor SelectedColour; // 0x344
	FLinearColor UnselectedColour; // 0x354
	FLinearColor AlternateColor; // 0x364
	FMulticastInlineDelegate OptionChanged; // 0x378
	FMulticastInlineDelegate Focused; // 0x388
};

struct UImageSequenceProtocol_EXR {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
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

struct UNUIEquippedWeapons {
	int32_t PreviousWeaponIndex; // 0x278
};

struct UAISense_Damage {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UEndpointSubmix {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UAISenseConfig {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UGizmoAxisIntervalParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct UToFloatField {
	UFieldNodeInt* IntField; // 0xb0
};

struct UGameplayTask_WaitDelay {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct ABombPlayerController {
	ABombMode_Zone* NearZone; // 0xc00
	ABombMode_Bomb* NearBomb; // 0xc08
	bool ShowActionTakeBomb; // 0xc10
	bool ShowActionPossessBot; // 0xc11
	int32_t AttackingTeam; // 0xc3c
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

struct ASwitchActor {
	USceneComponent* SceneComponent; // 0x238
	int32_t LastSelectedOption; // 0x240
};

struct UAkMarkerCallbackInfo {
	int32_t Identifier; // 0x38
	int32_t Position; // 0x3c
	FString Label; // 0x40
};

struct UHapticFeedbackEffect_SoundWave {
	USoundWave* SoundWave; // 0x28
};

struct UKantanCartesianChartBase {
	FKantanCartesianChartStyle WidgetStyle; // 0x158
	FKantanCartesianPlotScale PlotScale; // 0x280
	EKantanDataPointSize DataPointSize; // 0x2a4
	FCartesianAxisConfig XAxisCfg; // 0x2a8
	FCartesianAxisConfig YAxisCfg; // 0x2f0
	FMargin AxisTitlePadding; // 0x338
	UKantanSeriesStyleSet* SeriesStyleSet; // 0x348
	TArray<FSeriesStyleManualMapping> ManualStyleMappings; // 0x350
	bool bAntiAlias; // 0x360
};

struct UNiagaraDataInterfaceArrayInt32 {
	TArray<int32_t> IntData; // 0x50
};

struct UBattalionChallengeManager {
	UBattalionGameInstance* BattInstance; // 0x28
	UPFPlayerIdCache* PFPlayerCache; // 0x30
};

struct UMaterialExpressionConstantBiasScale {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct USpacer {
	FVector2D Size; // 0x108
};

struct UMedal20BombDOM {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct UMedalBiteBack {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct UWBP_SwappingSides_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* BringInScores; // 0x268
	UTextBlock* LeftTeamScore; // 0x270
	UTextBlock* RightTeamScore; // 0x278
	UImage* Video; // 0x280
	UMediaPlayer* MediaPlayer_Background; // 0x288
};

struct UPlayer {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UFXSystemAsset {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UWBP_BlitzCanRespawnIndicator_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* OutCanRespawn; // 0x268
};

struct UInterpTrackMoveAxis {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct UComboBox {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct ABattalionGrenade {
	USkeletalMeshComponent* MeshComponent; // 0x220
	UStaticMeshComponent* StaticMeshComponent; // 0x228
	UCapsuleComponent* CapsuleCollision; // 0x230
	UProjectileMovementComponent* MovementComponent; // 0x238
	bool bCanCollideWithThrowingPlayer; // 0x240
	UMaterialInterface* FirstPersonMeshMaterial; // 0x248
	float ThrowerCollisionGracePeriod; // 0x250
	FTimerHandle TimerHandle_CollisionGracePeriodTimer; // 0x258
	bool bMovementEnabled; // 0x260
	FTimerHandle TimerHandle_GrenadeTick; // 0x278
	FTimerHandle TimerHandle_GrenadeFuse; // 0x280
	UAkAudioEvent* DetonationSound; // 0x290
	UParticleSystem* DetonationFX; // 0x298
	UDamageType* DirectImpactDamageType; // 0x2a0
	UDamageType* DetonationDamageType; // 0x2a8
	bool bUseProjectileMovement; // 0x2b0
	bool bManualExplode; // 0x2b1
	bool bShowGrenadeMarker; // 0x2b2
	float FuseTime; // 0x2b4
	float PseudoGravity; // 0x2b8
	float PseudoZRestitution; // 0x2bc
	float PseudoXYRestitution; // 0x2c0
	float GrenadeSpinModifier; // 0x2c4
	float ClampSpeed; // 0x2c8
	float ThrowImpulse; // 0x2cc
	float PawnVelocityModifier; // 0x2d0
	float PawnVelocityClamp; // 0x2d4
	EGrenadeType MyGrenadeType; // 0x2d8
	FDirectHitDamage DirectHitDamage; // 0x2dc
	UCurveFloat* DamageFalloff; // 0x308
	UAkComponent* DefaultAkComponent; // 0x310
	UAkAudioEvent* BounceSoundSoft; // 0x318
	UAkAudioEvent* BounceSoundHard; // 0x320
	UAkAudioEvent* StopBounce; // 0x328
	UAkAudioEvent* GrenadeTickingSound; // 0x330
	float MinGrenadeVelAudio; // 0x338
	float HardGrenadeBounceTreshold; // 0x33c
	AController* InstigatingController; // 0x340
	APlayerState* InstigatingPlayerState; // 0x348
	FWeaponAnim GrenadeAnim; // 0x350
	UCurveVector* PrepareCameraSway; // 0x370
	UCurveVector* ThrowCameraSway; // 0x378
	float GrenadePrepTime; // 0x380
	float GrenadeThrowTime; // 0x384
	float GrenadeThrowAnimLength; // 0x388
	float GrenadeThrowVerticalOffset; // 0x38c
	float GrenadeThrowForwardOffset; // 0x390
	float GrenadeThrowPitchOffset; // 0x394
	bool bShowDebugDamageRange; // 0x398
	UPhysicalMaterial* PhysMat; // 0x3a0
	UDamageType* SmokeDetonationDamageType; // 0x3a8
	UMaterialInterface* DecalMaterial; // 0x3b0
	FVector GrenadeDecalSize; // 0x3b8
	float GrenadeDecalLifeTime; // 0x3c4
	float GrenadeObjectLifeSpan; // 0x3c8
};

struct UBehaviorTreeComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
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

struct ABP_StickyGrenade_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
};

struct UBlackboardComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct UPromodQuickUtilDataAsset {
	TArray<FQuickUtilItem> QuickUtils; // 0x30
};

struct UNiagaraDataInterfaceSpline {
	AActor* Source; // 0x38
};

struct UMapIconComponent {
	FMulticastInlineDelegate OnIconAppearanceChanged; // 0x460
	FMulticastInlineDelegate OnIconMaterialChanged; // 0x470
	FMulticastInlineDelegate OnIconMaterialInstancesChanged; // 0x480
	FMulticastInlineDelegate OnIconEnteredView; // 0x490
	FMulticastInlineDelegate OnIconLeftView; // 0x4a0
	FMulticastInlineDelegate OnIconDestroyed; // 0x4b0
	FMulticastInlineDelegate OnIconHoverStart; // 0x4c0
	FMulticastInlineDelegate OnIconHoverEnd; // 0x4d0
	FMulticastInlineDelegate OnIconClicked; // 0x4e0
	FName IconCategory; // 0x4f0
	UTexture2D* IconTexture; // 0x4f8
	UMaterialInterface* IconMaterial_UMG; // 0x500
	UMaterialInterface* IconMaterial_Canvas; // 0x508
	bool bIconVisible; // 0x510
	bool bIconRotates; // 0x511
	EIconSizeUnit IconSizeUnit; // 0x512
	float IconSize; // 0x514
	FLinearColor IconDrawColor; // 0x518
	int32_t IconZOrder; // 0x528
	bool bObjectiveArrowEnabled; // 0x52c
	UTexture2D* ObjectiveArrowTexture; // 0x530
	UMaterialInterface* ObjectiveArrowMaterial_UMG; // 0x538
	UMaterialInterface* ObjectiveArrowMaterial_Canvas; // 0x540
	bool bObjectiveArrowRotates; // 0x548
	float ObjectiveArrowSize; // 0x54c
	bool bIconInteractable; // 0x550
	FName IconTooltipText; // 0x554
	EIconBackgroundInteraction IconBackgroundInteraction; // 0x55c
	EIconFogInteraction IconFogInteraction; // 0x55d
	float IconFogRevealThreshold; // 0x560
	bool bHideOwnerInsideFog; // 0x564
	TMap<UMapViewComponent*, bool> IsRenderedPerView; // 0x568
	UMaterialInterface* InitialIconMaterial_UMG; // 0x5b8
	UMaterialInterface* InitialIconMaterial_Canvas; // 0x5c0
	TMap<UUserWidget*, UMaterialInstanceDynamic*> IconMaterialInstances_UMG; // 0x5c8
	TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> IconMaterialInstances_Canvas; // 0x618
	TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> ObjectiveArrowMaterialInstances_Canvas; // 0x668
};

struct UDataAsset {
	UDataAsset* NativeClass; // 0x28
};

struct UAnimCompress {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UAnimNotify_PlayParticleEffect {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UMedalBase {
	ABattalionGameMode* GameMode; // 0x28
	FString UUID; // 0x30
	int32_t XPAward; // 0x40
};

struct UWBP_StaminaAndHealthBars_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_ProgressBar_C* HealthProgressBar; // 0x268
	UImage* IMG_CriticalHealth; // 0x270
	UImage* IMG_SideBars; // 0x278
	UInvalidationBox* InvalidationBox_4; // 0x280
	UWBP_ProgressBar_C* StaminaProgressBar; // 0x288
	float Critical Health; // 0x290
	float CurrentHealth; // 0x294
	float MaxHealth; // 0x298
};

struct UCheatManager {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct UMaterialExpressionLandscapeLayerSample {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UInterpTrackFloatProp {
	FName PropertyName; // 0x90
};

struct USynthComponentMoto {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct ABP_HandCannonFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e8
	float Fov_Amount_5036BB104963219A048D9184DE9560AE; // 0x3f0
	ETimelineDirection Fov__Direction_5036BB104963219A048D9184DE9560AE; // 0x3f4
	UTimelineComponent* FOV; // 0x3f8
	UBP_HandCannonCameraModifier_C* CameraModifier; // 0x400
	float MaxFovAddition; // 0x408
	bool IsClearingEffects; // 0x40c
};

struct UHUDTextDataAsset {
	FLinearColor HUDDataColour; // 0x30
	FLinearColor HUDOverviewColour; // 0x40
	FLinearColor HUDPromptColour; // 0x50
	FLinearColor HUDIconColour; // 0x60
	FLinearColor HUDHitKillSuccessColour; // 0x70
	FLinearColor HUDMapTextColour; // 0x80
	FLinearColor HUDWeaponIconColour; // 0x90
	FLinearColor HUDDataColourBombPlanted; // 0xa0
	FLinearColor HUDOverviewColourBombPlanted; // 0xb0
	FLinearColor HUDPromptColourBombPlanted; // 0xc0
	FLinearColor HUDIconColourBombPlanted; // 0xd0
	FLinearColor HUDHitKillSuccessColourBombPlanted; // 0xe0
	FLinearColor HUDMapTextColourBombPlanted; // 0xf0
	FLinearColor HUDWeaponIconColourBombPlanted; // 0x100
	FLinearColor HUDFriendlyColour; // 0x110
	FLinearColor HUDFriendlyAlternateColour; // 0x120
	FLinearColor HUDEnemyColour; // 0x130
	FLinearColor HUDContestedColour; // 0x140
};

struct AWeapGun_ImpactsFailed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	USceneComponent* DefaultSceneRoot; // 0x478
};

struct UMedalWorldWarZ {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct ABombPlayerState {
	bool bKeepClassOnLoadoutReset; // 0x590
	bool Planting; // 0x591
	bool QuickPlanting; // 0x592
	bool Planted; // 0x593
	bool Defusing; // 0x594
	int32_t Plants; // 0x598
	int32_t Defuses; // 0x59c
	FString LastPurchasedWeapon; // 0x5a0
	FMulticastInlineDelegate BombPlantingUpdate; // 0x5b0
	FMulticastInlineDelegate BombDefusingUpdate; // 0x5c0
	bool HasBomb; // 0x5d0
};

struct UBulkheadMulticastAudioEventWrapper {
	APawn* OwningPawn; // 0x58
};

struct ATransformGizmoActor {
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

struct UNiagaraDataInterfaceLandscape {
	AActor* SourceLandscape; // 0x38
};

struct UAISenseConfig_Hearing {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct UAB_Tactical_Smoke_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2d8
	FAnimNode_Root AnimGraphNode_Root; // 0x358
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UBattalionSubtitlesDataAsset {
	TMap<float, FText> Subtitles; // 0x30
};

struct USMTransitionInstance {
	int32_t PriorityOrder; // 0x80
	bool bRunParallel; // 0x84
	bool bEvalIfNextStateActive; // 0x85
	bool bCanEvaluate; // 0x86
	bool bCanEvaluateFromEvent; // 0x87
	bool bCanEvalWithStartState; // 0x88
	FMulticastInlineDelegate OnTransitionEnteredEvent; // 0x90
};

struct UAnimSequenceLevelSequenceLink {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UWBP_Overtime_Shootout_Victory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* ShowScoreboard; // 0x268
	UWidgetAnimation* Show; // 0x270
	UWBP_CompletionFeedbackButton_C* Feedback_GOOD; // 0x278
	UWBP_CompletionFeedbackButton_C* Feedback_GREAT; // 0x280
	UWBP_CompletionFeedbackButton_C* Feedback_MAD; // 0x288
	UWBP_CompletionFeedbackButton_C* Feedback_SAD; // 0x290
	USizeBox* FeedbackBox; // 0x298
	UHorizontalBox* FeedbackHorizontalBox; // 0x2a0
	UHorizontalBox* HB_SubScore; // 0x2a8
	UImage* Mov_Defeat; // 0x2b0
	UImage* Mov_Flawless; // 0x2b8
	UImage* Mov_Victory; // 0x2c0
	UTextBlock* Text_ScoreLeft; // 0x2c8
	UTextBlock* Text_ScoreRight; // 0x2d0
	UTextBlock* Text_SubScoreLeft; // 0x2d8
	UTextBlock* Text_SubScoreRight; // 0x2e0
	UTextBlock* Text_TimeLeftInState; // 0x2e8
	UTextBlock* Text_VictorySubTitle; // 0x2f0
	UTextBlock* Text_VictoryTitle; // 0x2f8
	UWBP_SNDLeaderboard_C* WBP_SNDLeaderboard; // 0x300
	bool OVERTIME; // 0x308
	bool Shotoout; // 0x309
	bool Cargo; // 0x30a
	int32_t WinningTeam; // 0x30c
	int32_t Score_Team0; // 0x310
	int32_t Score_Team1; // 0x314
	int32_t MyTeamNum; // 0x318
	UMediaPlayer* MP_Defeat; // 0x320
	UMediaPlayer* MP_Victory; // 0x328
	UMediaPlayer* MP_Flawless; // 0x330
	FCargoResultData Team 0Cargo Result; // 0x338
	FCargoResultData Team 1Cargo Result; // 0x368
};

struct UNuclearAssetHandle {
	UNuclearAsset* Asset; // 0x48
};

struct UMovieSceneLevelVisibilityTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UAkGroupValue {
	uint32_t GroupShortID; // 0x40
};

struct UMedalArtilleryStrike {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct UBlackboardKeyType_NativeEnum {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UPFMatchmakingManager {
	FMulticastInlineDelegate OnFoundMatch; // 0x30
	FMulticastInlineDelegate OnMatchmakingCancelled; // 0x40
	FMulticastInlineDelegate OnStopMatchmakingCompleted; // 0x50
	FMulticastInlineDelegate OnPartyMatchmakingReadyToJoin; // 0x60
	UPlayFabSubsystem* PlayFabSubsystem; // 0x70
	float LonelyMatchmakerThreshold; // 0x78
};

struct UJumper_LevelSelectBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Unselected; // 0x268
	UWidgetAnimation* Selected; // 0x270
	UImage* Blur-Steak; // 0x278
	UBorder* Border_1; // 0x280
	UOverlay* Frame-UNLOCK; // 0x288
	UButton* LevelButton; // 0x290
	UTextBlock* LevelName; // 0x298
	UImage* LevelOverlay; // 0x2a0
	UTextBlock* LevelTime; // 0x2a8
	UImage* Lock; // 0x2b0
	UImage* MapImage; // 0x2b8
	UTextBlock* ProText; // 0x2c0
	USizeBox* SizeBox_1; // 0x2c8
	UImage* Star1; // 0x2d0
	UImage* Star1_2; // 0x2d8
	UImage* Star2; // 0x2e0
	UImage* Star3; // 0x2e8
	UHorizontalBox* StarsHorizontalBox; // 0x2f0
	USizeBox* StarSizeBox; // 0x2f8
	UTextBlock* StarsRequiredCountText; // 0x300
	UHorizontalBox* StarsRequiredHorizontalBox; // 0x308
	FString DisplayName; // 0x310
	FString Level Name Text; // 0x320
	bool ShouldShowTime; // 0x330
	bool IsLocked; // 0x331
	UMainMenuLevelSelectMapDataAsset* MapImageDataAsset; // 0x338
	FLinearColor HoverColor; // 0x340
	FLinearColor UnhoveredColor; // 0x350
	UJumperLevelSelect* LevelSelectScreen; // 0x360
	UPromodLoadoutsDataAsset* LoadoutDataAsset; // 0x368
	UMapPackManager* Map Pack Manager; // 0x370
	FText NewVar_1; // 0x378
	bool AskedForUpdate; // 0x390
	TMap<FString, int32_t> KRStrings; // 0x398
	UPromodClassManagerDataAsset* ClassManagerDataAsset; // 0x3e8
	int32_t CurrentStarCount; // 0x3f0
	int32_t StarUnlockRequirement; // 0x3f4
	bool ShouldShowStars; // 0x3f8
	FMulticastInlineDelegate ClickedEventDispatcher; // 0x400
};

struct AGameNetworkManager {
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

struct UMovieSceneBuiltInEasingFunction {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UNiagaraDataInterfaceVector4Curve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
};

struct UAnimSingleNodeInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UMedalStealthCapture {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UPhysicsCollisionHandler {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
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

struct AEmitter {
	UParticleSystemComponent* ParticleSystemComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
	char bPostUpdateTickGroup : 1; // 0x228
	char bCurrentlyActive : 1; // 0x228
	FMulticastInlineDelegate OnParticleSpawn; // 0x230
	FMulticastInlineDelegate OnParticleBurst; // 0x240
	FMulticastInlineDelegate OnParticleDeath; // 0x250
	FMulticastInlineDelegate OnParticleCollide; // 0x260
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

struct UParticleModuleOrientationAxisLock {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UTimecodeProvider {
	float FrameDelay; // 0x28
};

struct UMaterialExpressionVertexInterpolator {
	FExpressionInput Input; // 0x40
};

struct ACTFPlayerState {
	ACTFMode_FlagZone* CarryingFlagHomeZone; // 0x5a8
	char CarryingFlagTeam; // 0x5b0
	ENationType CarryingFlagNation; // 0x5b1
	bool HasFlag; // 0x5b2
	int32_t FlagsCaptured; // 0x5b4
	int32_t FlagsReturned; // 0x5b8
};

struct UNUIConsoleGeneralOverview {
	EGameOverview GameOverview; // 0x3a0
	FGameOverviewConfig Wartide; // 0x3a1
	FGameOverviewConfig FFA; // 0x3a6
	FGameOverviewConfig TDM; // 0x3ab
	FGameOverviewConfig DOM; // 0x3b0
	FGameOverviewConfig Grenade; // 0x3b5
	FGameOverviewConfig ShowAll; // 0x3ba
	FGameOverviewConfig CurrentOverviewConfig; // 0x3bf
	TArray<UNUIBombGameOverviewAvatar*> LeftTeamWidgets; // 0x3c8
	TArray<UNUIBombGameOverviewAvatar*> RightTeamWidgets; // 0x3d8
	UNUIBombGameOverviewAvatar* AvatarWidgetClass; // 0x3e8
	TArray<ABombPlayerState*> LeftPlayerList; // 0x3f0
	TArray<ABombPlayerState*> RightPlayerList; // 0x400
	FText LeftTeamAliveCount; // 0x410
	FText RightTeamAliveCount; // 0x428
	ESlateVisibility SpectatorScoreVisibility; // 0x440
	ESlateVisibility LeftTeamAvatarsVisibility; // 0x441
	ESlateVisibility RightTeamAvatarsVisibility; // 0x442
	ESlateVisibility LeftTeamAliveCountVisibility; // 0x443
	ESlateVisibility RightTeamAliveCountVisibility; // 0x444
	ESlateVisibility SpectatorBombInteractionTimerVisibility; // 0x445
	float BombInteractionProgress; // 0x448
	AFFAPlayerState* OpponentPlayerState; // 0x450
	FText LeftLeaderText; // 0x458
	FText RightLeaderText; // 0x470
	ESlateVisibility LeftLeaderVisibility; // 0x488
	ESlateVisibility RightLeaderVisibility; // 0x489
	ADOMMode_Zone* LastZoneEntered; // 0x490
};

struct UABP_Regen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340
};

struct UNUIStyleScore {
	TArray<FOnFireAwardData> AllComboEntries; // 0x260
};

struct UHeader-Tab-WEAPONS-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UButton* Tab-Button; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x290
	bool bIsSelected; // 0x2a0
};

struct UNiagaraDataInterfaceNeighborGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UHeader-Tab-OPTIONS-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UButton* Tab-Button; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x290
};

struct UTextButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* ContentHorizontalBox; // 0x268
	UTextBlock* ContentTextBlock; // 0x270
	UImage* NewContentImage; // 0x278
	UButton* RootButton; // 0x280
	FText Text; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
	FLinearColor DefaultTextColor; // 0x2b0
	FLinearColor HoverTextColor; // 0x2c0
	FLinearColor DisabledTextColor; // 0x2d0
	FLinearColor DefaultBackgroundColor; // 0x2e0
	FLinearColor HoverBackgroundColor; // 0x2f0
	FLinearColor DisabledBackgroundColor; // 0x300
	bool StartEnabled; // 0x310
	bool RoundedEdges; // 0x311
	int32_t FontSize; // 0x314
	bool NewNotificationRightAligned; // 0x318
	ETextJustify Justification; // 0x319
	FMargin ContentPadding; // 0x31c
};

struct UWBP_Spectating_C {
	UBorder* Border_1; // 0x260
	UBorder* Border_2; // 0x268
	UImage* Image; // 0x270
	UImage* Image_161; // 0x278
	UTextBlock* PlayerNameText; // 0x280
	UHUDTextDataAsset* HUDColour; // 0x288
	FLinearColor BlueTeamPrimary; // 0x290
	FLinearColor RedTeamPrimary; // 0x2a0
	FLinearColor BlueTeamSecondary; // 0x2b0
	FLinearColor RedTeamSecondary; // 0x2c0
};

struct UUniformVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct UARFaceComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
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

struct UWishlist-button-Promod-LARGER_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UImage* Image; // 0x288
	UImage* Image_246; // 0x290
	UImage* Image_367; // 0x298
	UImage* Image_405; // 0x2a0
	UButton* Wish-Button; // 0x2a8
	FMulticastInlineDelegate ButtonClicked; // 0x2b0
};

struct UMovieSceneMaterialTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UCameraShakeBase {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	APlayerCameraManager* CameraManager; // 0x30
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct ATDMPlayerState {
	FString PendingInventory; // 0x590
	bool FirstWeapon; // 0x5a0
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

struct UHorizontalBoxSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UOperatorField {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct ABattalionWeapon_Melee {
	UAnimInstance* OffhandAnimClass; // 0x890
};

struct UPaperRuntimeSettings {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UBattalionCharacterMovement {
	float MAXPOSITIONERRORSQUARED; // 0xb30
	float LastClientAdjustmentTime; // 0xb34
	float LastGoodMoveAckTime; // 0xb38
	bool bLargeCorrection; // 0xb3c
	float LargeCorrectionThreshold; // 0xb40
	float MinTimeBetweenClientAdjustments; // 0xb44
	float AvgSpeed; // 0xb4c
	float MaxFallingAcceleration; // 0xb50
	float MaxSwimmingAcceleration; // 0xb54
	float FastInitialAcceleration; // 0xb58
	float MaxFastAccelSpeed; // 0xb5c
	float MaxTargetingClampAccel; // 0xb60
	float MaxSprintingAccel; // 0xb64
	float MaxRelativeSwimmingAccelNumerator; // 0xb68
	float MaxRelativeSwimmingAccelDenominator; // 0xb6c
	float BrakingDecelerationSliding; // 0xb70
	float DefaultBrakingDecelerationWalking; // 0xb74
	float LadderFriction; // 0xb78
	float LadderJumpVelocity; // 0xb7c
	float LadderMaxSpeed; // 0xb80
	float PlayerLadderClimbingMultiplier; // 0xb84
	float ADSLandPunishTimeScalar; // 0xb88
	float LandForwardVelocityTolerance; // 0xb8c
	float LandingPunishDivisorMin; // 0xb90
	float LandingPunishDivisorMax; // 0xb94
	float ADSLandPunishTimeHipMovementTimeDecayScalar; // 0xb98
	float SprintLandPunishTimeScalar; // 0xb9c
	float SprintLandPunishTimeScalarMax; // 0xba0
	float SprintLandPunishTimeScalarMin; // 0xba4
	float SprintJumpPunishTimeScalar; // 0xba8
	float SprintLandTwicePunishTimeScalar; // 0xbac
	float FlagSpeedModifierScalar; // 0xbb0
	float MaxWaterSpeed; // 0xbb4
	float SwimmingWallPushImpulse; // 0xbb8
	bool bFallingInWater; // 0xbbc
	float QuakeJumpScalar; // 0xbc0
	float MaxWalkSpeedProne; // 0xbc8
	float ProneHalfHeight; // 0xbcc
	float ProneBlockDelta; // 0xbe0
	FVector LastProneBlockCheck; // 0xbe4
	FVector NewProneBlockCheck; // 0xbf0
	FVector LastProneLocation; // 0xbfc
	float CrouchToStandTime; // 0xc14
	float ProneToCrouchTime; // 0xc18
	float StandingToCrouchTime; // 0xc1c
	float CrouchToProneTime; // 0xc20
	char bProneMaintainsBaseLocation : 1; // 0xc24
	float EasyImpactImpulse; // 0xc28
	float EasyImpactDamage; // 0xc2c
	float FullImpactImpulse; // 0xc30
	float FullImpactDamage; // 0xc34
	float ImpactMaxHorizontalVelocity; // 0xc38
	float ImpactMaxVerticalFactor; // 0xc3c
	float MaxUndampedImpulse; // 0xc40
	bool bIsTaunting; // 0xc44
	int32_t MaxMultiJumpCount; // 0xc48
	int32_t CurrentMultiJumpCount; // 0xc4c
	bool bExplicitJump; // 0xc50
	bool bAllowJumpMultijumps; // 0xc51
	float MaxMultiJumpZSpeed; // 0xc54
	bool bAlwaysAllowFallingMultiJump; // 0xc58
	float MultiJumpImpulse; // 0xc5c
	float MultiJumpAirControl; // 0xc60
	bool bRestrictedJump; // 0xc64
	float LandingStepUp; // 0xce4
	float LandingAssistBoost; // 0xce8
	bool bJumpAssisted; // 0xcec
	float JumpTime; // 0xcf0
	float CrouchJumpVelocity; // 0xcf4
	float JumpHalfJumpDivisor; // 0xcf8
	float JumpHalfJumpTimeout; // 0xcfc
	float JumpStartZ; // 0xd00
	bool bIsAgainstWall; // 0xd04
	float LastCheckedAgainstWall; // 0xd08
	FVector SimulatedVelocity; // 0xd0c
	float CurrentServerMoveTime; // 0xd18
	char bWantsToInfectionSprint : 1; // 0xd21
};

struct UMedal15BombWartide {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct USoundSubmixBase {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct UMaterialExpressionRotator {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct UMeshSimplificationSettings {
	FName MeshReductionModuleName; // 0x38
};

struct UStreamMediaSource {
	FString StreamUrl; // 0x88
};

struct UInterpTrackColorProp {
	FName PropertyName; // 0x90
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

struct UWBP_BlitzGameoverviewWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x390
	UTextBlock* AttackBlock; // 0x398
	UTextBlock* BackupTimer; // 0x3a0
	UImage* Bomb; // 0x3a8
	UImage* Clock; // 0x3b0
	UTextBlock* DefenceBlock; // 0x3b8
	UHorizontalBox* LeftTeamPlayerIcons; // 0x3c0
	UTextBlock* LeftTeamPlayersAliveValue; // 0x3c8
	UTextBlock* NotReady; // 0x3d0
	UPlatformKeyImage_C* PlatformKeyImage; // 0x3d8
	UTextBlock* PlayerList; // 0x3e0
	UTextBlock* PressOrHoldTextBox; // 0x3e8
	UTextBlock* Progress; // 0x3f0
	UHorizontalBox* ReadyupBox; // 0x3f8
	UHorizontalBox* RightTeamPlayerIcons; // 0x400
	UTextBlock* RightTeamPlayersAliveValue; // 0x408
	UScaleBox* ScaleBox_1; // 0x410
	USpacer* Spacer_3; // 0x418
	USpacer* Spacer_291; // 0x420
	UWidgetSwitcher* TeamInfoWidgetSwitcher; // 0x428
	UTextBlock* TextBlock_4; // 0x430
	UTextBlock* Timer; // 0x438
	UTextBlock* ToReadyUp; // 0x440
	UVerticalBox* VerticalBox_150; // 0x448
	UWBP_BlitzBombProgress_C* WBP_BlitzBombProgress; // 0x450
	UWBP_BlitzRoundTracker_C* WBP_BlitzRoundTracker; // 0x458
	UWBP_BlitzScore_C* WBP_BlitzScore_Team1; // 0x460
	UWBP_BlitzScore_C* WBP_BlitzScore_Team2; // 0x468
	UWBP_BlitzTeamRole_C* WBP_BlitzTeamRole; // 0x470
	TArray<UWBP_BlitzPlayerAliveIcon_C*> LeftTeamWidgets; // 0x478
	TArray<UWBP_BlitzPlayerAliveIcon_C*> RightTeamWidgets; // 0x488
	int32_t MissingWidgets; // 0x498
	int32_t AlivePlayers_Team0; // 0x49c
	int32_t AlivePlayers_Team1; // 0x4a0
	bool bIsShootout; // 0x4a4
	UHUDTextDataAsset* HUDColour; // 0x4a8
};

struct UPFPlayerDataManager {
	FMulticastInlineDelegate OnReceivedTitleData; // 0x28
	FMulticastInlineDelegate OnReceivedPlayerData; // 0x38
	FMulticastInlineDelegate OnReceivedPlayerStats; // 0x48
	UPlayFabSubsystem* PlayFabSubsystem; // 0x58
	bool bIsServer; // 0x60
};

struct UEnvQueryGenerator_Cone {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct UOnFireAwardsDataAsset {
	TMap<EOnFireAwardType, FOnFireAwardData> AwardData; // 0x30
};

struct ALevelSequenceActor {
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

struct UAudioAnalyzerNRT {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
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

struct UGridPanel {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UOnsetNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct UMapPlayerWidget {
	ABattalionCharacter* LinkedCharacter; // 0x268
	UMaterialInstanceDynamic* CachedMaterial; // 0x270
	ABeacon* Beacon; // 0x278
	float BeaconScaleX; // 0x280
	float BeaconScaleY; // 0x284
	UImage* Image; // 0x288
	UTextBlock* PlayerName; // 0x290
	UTextBlock* SpectatingID; // 0x298
	FString SpecID; // 0x2a0
	FVector2D ScaledPlayerPos; // 0x2b0
	float RotationAngle; // 0x2b8
	UCanvasPanelSlot* CanvasPanelSlot; // 0x2c0
	bool bInActiveArray; // 0x2f4
};

struct UAB_Offensive_Frag_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct ACamPathSplineActor {
	USplineComponent* SplineCompLoc; // 0x220
	USplineComponent* SplineCompRot; // 0x228
};

struct UDatasmithPostProcessVolumeTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UParticleModuleVectorFieldScaleOverLife {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UAB_WW2_Sniper_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct UNiagaraDataInterfaceColorCurve {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct UCoinDataAsset {
	TArray<FCoinEntity> Coins; // 0x30
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

struct UMaterialExpressionPower {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UNUIFFAPlayerScore {
	int32_t PlayerScore; // 0x278
	int32_t OldPlayerScore; // 0x27c
};

struct AMapAreaBase {
	UBoxComponent* AreaBounds; // 0x220
	UMapAreaPrimitiveComponent* AreaPrimitive; // 0x228
	UMapViewComponent* AreaMapView; // 0x230
};

struct UABP_r700_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x350
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4f0
};

struct UBlackboardKeyType_String {
	FString StringValue; // 0x30
};

struct UWBP_KillSuccess_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Outro; // 0x268
	UWidgetAnimation* Glitch; // 0x270
	UInvalidationBox* IB_Root; // 0x278
	UTextBlock* KillFeedbackText; // 0x280
	UTextBlock* KillFeedbackText_BLUE; // 0x288
	UTextBlock* KillFeedbackText_RED; // 0x290
	bool CurrentlyVisible; // 0x298
	float CurrentVisibleTimer; // 0x29c
	float MaxVisibleTimer; // 0x2a0
	UHUDTextDataAsset* HUDText Colour; // 0x2a8
};

struct UGameplayTasksComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UProceduralMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x470
	bool bUseAsyncCooking; // 0x471
	UBodySetup* ProcMeshBodySetup; // 0x478
	TArray<FProcMeshSection> ProcMeshSections; // 0x480
	TArray<FKConvexElem> CollisionConvexElems; // 0x490
	FBoxSphereBounds LocalBounds; // 0x4a0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4c0
};

struct UWBP_CircularProgressBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* CPB_Image; // 0x268
	USizeBox* CPB_SizeBox; // 0x270
	float Scale; // 0x278
	UMaterialInstanceDynamic* DMI; // 0x280
	float MaxValue; // 0x288
	float MinValue; // 0x28c
	float tmp; // 0x290
	float CurrentPercentage; // 0x294
	float CurrentRealValue; // 0x298
	FLinearColor Color And Opacity; // 0x29c
	float LastPercentage; // 0x2ac
	float LastRealvalue; // 0x2b0
	FMulticastInlineDelegate EventProgressBarFilled; // 0x2b8
	FMulticastInlineDelegate EventProgressBarZero; // 0x2c8
	float InitialValue; // 0x2d8
	bool IsInitialValueAPercentage; // 0x2dc
	FLinearColor Tint; // 0x2e0
	FLinearColor BackgroundColor; // 0x2f0
};

struct UInterpTrackAkAudioRTPC {
	FString Param; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0
};

struct AKillRunGrenadePickup {
	bool bUnlimitedSupply; // 0x248
	int32_t NumSupply; // 0x24c
	ABattalionGrenade* Grenade; // 0x250
	ABattalionGrenade* GrenadeClass; // 0x258
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

struct UMedal20BombTDM {
	ATDMGameMode* TDMGameMode; // 0x48
};

struct UNuclearAssetManager {
	TMap<FPrimaryAssetId, UNuclearAssetHandle*> PendingHandles; // 0x458
	TMap<FPrimaryAssetId, UNuclearAssetHandle*> LoadedHandles; // 0x4a8
};

struct UMedal30BombFFA {
	AFFAGameMode* FFAGameMode; // 0x48
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

struct UParticleModuleMeshRotationRate {
	FRawDistributionVector StartRotationRate; // 0x30
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

struct UInheritableComponentHandler {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UWBP_ClosedPrototypeVersion_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTextBlock* GameID; // 0x298
	USizeBox* PGRSizeBox; // 0x2a0
	UTextBlock* versionText; // 0x2a8
};

struct ABlitzGameMode {
	int32_t CurrentStageID; // 0xd18
	bool bUseRandomStages; // 0xd1c
	float BombRespawnTime; // 0xd20
	float BombRespawnTimeLeft; // 0xd24
	bool bShouldBombRespawn; // 0xd28
	ABlitzGameState* BlitzGameState; // 0xd30
	UAkAudioEvent* BombCollectedSound; // 0xd38
	UAkAudioEvent* BombCollectedEnemySound; // 0xd40
	UAkAudioEvent* BombDefusedByEnemySound; // 0xd48
	UAkAudioEvent* BombDefusedByFriendlySound; // 0xd50
	UAkAudioEvent* BombDroppedFriendSound; // 0xd58
	UAkAudioEvent* BombDroppedEnemySound; // 0xd60
	UAkAudioEvent* BombPlantedDefendItSound; // 0xd68
	UAkAudioEvent* BombPlantedDefuseItSound; // 0xd70
	UAkAudioEvent* BombStartedBeepsSound; // 0xd78
	UAkAudioEvent* BombStoppedBeepsSound; // 0xd80
	UAkAudioEvent* GameStartSound; // 0xd88
	UAkAudioEvent* GameStartInstructionsSound; // 0xd90
	UAkAudioEvent* RespawnPlayerSound; // 0xd98
};

struct USafeZoneSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UPrimaryAssetLabel {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UOverlaySlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UNUIFFAGameOverview {
	AFFAPlayerState* OpponentPlayerState; // 0x3a0
	FText LeftLeaderText; // 0x3a8
	FText RightLeaderText; // 0x3c0
	ESlateVisibility LeftLeaderVisibility; // 0x3d8
	ESlateVisibility RightLeaderVisibility; // 0x3d9
};

struct UNiagaraDataInterfaceExport {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
};

struct APostProcessVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7b0
	float BlendRadius; // 0x7b4
	float BlendWeight; // 0x7b8
	char bEnabled : 1; // 0x7bc
	char bUnbound : 1; // 0x7bc
};

struct USubmixEffectTapDelayPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct UInterpTrackBoolProp {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UInterpTrackAkAudioEvent {
	TArray<FAkAudioEventTrackKey> Events; // 0x90
	char bContinueEventOnMatineeEnd : 1; // 0xa0
};

struct UComboItemList_C {
	UScrollBox* ScrollBox_1; // 0x260
	UCombo_C* Combo; // 0x268
};

struct USMBlueprintGeneratedClass {
	FGuid RootGuid; // 0x328
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

struct UMovieSceneWidgetMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x90
	FName TrackName; // 0xa0
};

struct UAIPerceptionStimuliSourceComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UFOVParticleSystemComponent {
	float FOV; // 0x698
};

struct UMovieSceneStringSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct URotatingMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UProceduralFoliageTile {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UInterpTrackToggle {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct USkinnedMeshComponent {
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
	char bOverrideMinLOD : 1; // 0x5f6
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

struct UPlatformKeyImage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UImage* ControllerButton; // 0x278
	UTextBlock* PCText; // 0x280
	USizeBox* SizeBox_1; // 0x288
	UTexture2D* xbox; // 0x290
	UTexture2D* PlayStation; // 0x298
	bool Invert; // 0x2a0
	FText PC; // 0x2a8
	bool TEST; // 0x2c0
	bool IsControllerImage; // 0x2c1
	FName BindName; // 0x2c4
	FText PrevKey; // 0x2d0
	bool IsAvailable; // 0x2e8
	bool TextClampRequired; // 0x2e9
	int32_t TextClampLimit; // 0x2ec
};

struct AAkAcousticPortal {
	AkAcousticPortalState InitialState; // 0x258
	float ObstructionRefreshInterval; // 0x25c
	ECollisionChannel ObstructionCollisionChannel; // 0x260
};

struct UGameplayTagsManager {
	TArray<FGameplayTagSource> TagSources; // 0xc0
	TArray<UDataTable*> GameplayTagTables; // 0x1b0
};

struct UNiagaraDataInterfaceRWBase {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct UNUITimedPopup {
	float ShowTime; // 0x268
	bool IsShowing; // 0x26c
};

struct UNiagaraDataInterfaceArrayFloat4 {
	TArray<FVector4> FloatData; // 0x50
};

struct UMaterialExpressionSceneDepthWithoutWater {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
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

struct APhysicsConstraintActor {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct UWBP_Inventory_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Fire_Chromatic; // 0x268
	UWidgetAnimation* Default; // 0x270
	UWidgetAnimation* Fade_Out; // 0x278
	UWidgetAnimation* Fade_In; // 0x280
	UWidgetAnimation* Fade_In_and_out; // 0x288
	UWidgetAnimation* Glitch; // 0x290
	UWBP_InventoryItem_C* InventoryItem_Bomb; // 0x298
	UWBP_InventoryItem_C* InventoryItem_MELEE; // 0x2a0
	UWBP_InventoryItem_C* InventoryItem_MELEE_BLUE_2; // 0x2a8
	UWBP_InventoryItem_C* InventoryItem_MELEE_RED_2; // 0x2b0
	UWBP_InventoryItem_C* InventoryItem_Primary; // 0x2b8
	UWBP_InventoryItem_C* InventoryItem_Primary_BLUE; // 0x2c0
	UWBP_InventoryItem_C* InventoryItem_Primary_RED; // 0x2c8
	UWBP_InventoryItem_C* InventoryItem_Secondary; // 0x2d0
	UWBP_InventoryItem_C* InventoryItem_Secondary_BLUE; // 0x2d8
	UWBP_InventoryItem_C* InventoryItem_Secondary_RED; // 0x2e0
	FLinearColor HighlightedSlotColour; // 0x2e8
	FLinearColor NonHighlightedSlotColour; // 0x2f8
	FLinearColor NonHighlightedColourAlpha; // 0x308
	FLinearColor RedHighlightedColour; // 0x318
	FLinearColor BlueHighLighted; // 0x328
	bool Is Playing Fade in Out; // 0x338
	UHUDTextDataAsset* HUDColour; // 0x340
};

struct UPFPlayerIdCache {
	UPlayFabSubsystem* PlayFabSubsystem; // 0x30
};

struct AAIController {
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

struct UComboItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_1; // 0x268
	UTextBlock* TextBlock_1; // 0x270
	UCombo_C* Combo; // 0x278
};

struct ULandscapeSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct ABattalionPlayerSpawn {
	bool InitialSpawn; // 0x250
	int32_t Team; // 0x254
	TArray<int32_t> ModeWeights; // 0x258
	UCurveFloat* SpawnWeightDistanceCurve; // 0x268
	float FinalWeight; // 0x270
	bool bIsShootoutSpawn; // 0x274
};

struct UABP_STimshot_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x378
};

struct UVirtualTexturePoolConfig {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct UPlayFabMatchmakerAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xd8
	UPlayFabJsonObject* RequestJsonObj; // 0xe0
	UPlayFabJsonObject* ResponseJsonObj; // 0xe8
};

struct ULogoutCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct ADecalActor {
	UDecalComponent* Decal; // 0x220
};

struct UMaterialExpressionFrac {
	FExpressionInput Input; // 0x40
};

struct UMovieSceneEntitySystemLinker {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x238
};

struct UNiagaraDataInterfaceArrayFloat2 {
	TArray<FVector2D> FloatData; // 0x50
};

struct ULandscapeMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x368
	char bIsLayerThumbnail : 1; // 0x378
	char bDisableTessellation : 1; // 0x378
	char bMobile : 1; // 0x378
	char bEditorToolUsage : 1; // 0x378
};

struct ABattalionPlayerCameraManager {
	float CurrentCamBonus; // 0x27cc
	float HigherScoreBonus; // 0x27d0
	float CurrentActionBonus; // 0x27d4
	float SingleEnemyProximityBonus; // 0x27d8
	AActor* LastThirdPersonTarget; // 0x2828
	float ThirdPersonCameraSmoothingSpeed; // 0x2830
	ABattalionCharacter* ViewingCharacter; // 0x2838
	UBattalionGameInstance* BattInstance; // 0x2840
	UBattalionSettings* BattSettings; // 0x2848
};

struct UMaterialExpressionVirtualTextureFeatureSwitch {
	FExpressionInput NO; // 0x40
	FExpressionInput YES; // 0x54
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

struct UDatasmithCommonTessellationOptions {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UMedal30BombHQ {
	AHQGameMode* HQGameMode; // 0x48
};

struct UWBP_ChatFeed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOut; // 0x268
	UVerticalBox* ChatEntriesContainer; // 0x270
	UBorder* ChatEntryBox; // 0x278
	UTextBlock* Typing_Author_Text_2; // 0x280
	UTextBlock* Typing_Channel_Text; // 0x288
	UMultiLineEditableText* Typing_Message_Text; // 0x290
	EChatChannels ChannelTypingIn; // 0x298
	FText MessageToSend; // 0x2a0
	int32_t MaxMessages; // 0x2b8
	int32_t CurrentMessages; // 0x2bc
	float FullyVisibleTime; // 0x2c0
	bool bIsWriting; // 0x2c4
	FTimerHandle FadeOutTimer; // 0x2c8
	bool bIsDead; // 0x2d0
	FString PlayerName; // 0x2d8
	bool Is Shown; // 0x2e8
	int32_t TextLengthMax; // 0x2ec
};

struct UAudioImpulseResponse {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct UNiagaraPreviewAxis_InterpParamVector4 {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct UInterpTrackVectorProp {
	FName PropertyName; // 0x90
};

struct UWBP_Hitmarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FlashHitKilled; // 0x268
	UWidgetAnimation* FlashHit; // 0x270
	UImage* BottomLeftMarker; // 0x278
	UImage* BottomRightMarker; // 0x280
	UImage* Equipment; // 0x288
	UImage* EquipmentDestroyed; // 0x290
	UWidgetSwitcher* HitMarkerContextSwitcher; // 0x298
	UInvalidationBox* IB_Root; // 0x2a0
	UImage* TopLeftMarker; // 0x2a8
	UImage* TopRightMarker; // 0x2b0
	UHUDTextDataAsset* HUD Colour; // 0x2b8
};

struct AHeadquartersPlayerController {
	UAkAudioEvent* StartTickingEvent; // 0xc10
	UAkAudioEvent* StopTickingEvent; // 0xc18
	AHeadquarters_Zone* CurrentObjective; // 0xc20
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

struct UNiagaraDataInterfaceArrayFloat {
	TArray<float> FloatData; // 0x50
};

struct UMovieScene3DTransformSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct APostProcessingSettings {
	UPostProcessComponent* MinPP; // 0x220
	UPostProcessComponent* MaxPP; // 0x228
	UPostProcessComponent* GamePP; // 0x230
	float ColorStrength; // 0x238
	float ColorTint; // 0x23c
	float WorldContrast; // 0x240
	float SkyFade; // 0x244
	float Vignette; // 0x248
	float LightbouncePower; // 0x24c
	float AOStrength; // 0x250
	float LensFlareIntensity; // 0x254
	float ExposureAmount; // 0x258
	float Sharpness; // 0x25c
};

struct UWBP_HUDMasterWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UVerticalBox* BlockedMessagesVerticalBox; // 0x270
	USizeBox* ClientFPS; // 0x278
	UDebugUI_C* DebugUI; // 0x280
	USizeBox* FrameTime; // 0x288
	USizeBox* GameLatency; // 0x290
	USizeBox* GameThreadTime; // 0x298
	USizeBox* GameToRenderLatency; // 0x2a0
	USizeBox* GPUTemp; // 0x2a8
	USizeBox* IdleTime; // 0x2b0
	UInGameLeaderboard_C* InGameLeaderboard; // 0x2b8
	USizeBox* RenderLatency; // 0x2c0
	USizeBox* RenderThreadTime; // 0x2c8
	USizeBox* RHIThreadTime; // 0x2d0
	UWBP_ActionPrompt_C* WBP_ActionPrompt; // 0x2d8
	UWBP_BasicScoreAward_C* WBP_BasicScoreAward; // 0x2e0
	UWBP_ChatFeed_C* WBP_ChatFeed_5; // 0x2e8
	UWBP_Crosshair_C* WBP_Crosshair; // 0x2f0
	UWBP_DamageTakenIndicator_C* WBP_DamageTakenIndicator; // 0x2f8
	UWBP_GrenadeIndicator_C* WBP_GrenadeIndicator; // 0x300
	UWBP_Hitmarker_C* WBP_Hitmarker; // 0x308
	UWBP_SP_HUDEquipment_C* WBP_HUDEquipment_C; // 0x310
	UWBP_Interaction_C* WBP_Interaction; // 0x318
	UWBP_InteractionEvent_C* WBP_InteractionEvent; // 0x320
	UWBP_JumperTipIntro_C* WBP_JumperTipIntro; // 0x328
	UWBP_Killfeed_C* WBP_Killfeed; // 0x330
	UWBP_KillRunGameOverview_C* WBP_KillRunGameOverview; // 0x338
	UWBP_KillSuccess_C* WBP_KillSuccess; // 0x340
	UWBP_MiniMap_C* WBP_MiniMap; // 0x348
	UWBP_SniperVignette_C* WBP_SniperVignette; // 0x350
	UWBP_StaminaAndHealthBars_C* WBP_StaminaAndHealthBars; // 0x358
	UWBP_StrafeJumpSpeedFeedback_C* WBP_StrafeJumpSpeedFeedback; // 0x360
	UWBP_StyleScoreAwardFeed_C* WBP_StyleScoreAwardFeed; // 0x368
	UWBP_SystemTimeDisplay_C* WBP_SystemTimeDisplay; // 0x370
	UWBP_Vault_C* WBP_Vault; // 0x378
	UWBP_WeaponPickup_C* WBP_WeaponPickup; // 0x380
	bool IsPlayingHealth; // 0x388
	bool bBlockedUIFound; // 0x389
	TArray<UWBP_GenericBlockedMessage_C*> CurrentBlockedMessages; // 0x390
	FStaminaEvent StaminaEvent; // 0x3a0
};

struct USkyLightComponent {
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

struct ACameraRig_Crane {
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

struct UGizmoConstantAxisSource {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
};

struct UTransformProxy {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct UInterpTrackInstVectorMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UAkItemProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UGameViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct APromodWorldSettings {
	bool bAutoAssignTeam; // 0x3a0
	int32_t AssignedTeam; // 0x3a4
	bool bHasDefaultClass; // 0x3a8
	int32_t AssignedClass; // 0x3ac
	ESpecialGrenadeType DefaultSpecialGrenade; // 0x3b0
};

struct UNiagaraParameterCollectionInstance {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct AOneInTheChamberPlayerState {
	int32_t NumLivesLeft; // 0x5b0
};

struct UVODataAsset {
	TArray<FVOCategory> Category; // 0x30
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

struct UCloudStorageBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UAkDurationCallbackInfo {
	float Duration; // 0x38
	float EstimatedDuration; // 0x3c
	int32_t AudioNodeID; // 0x40
	int32_t MediaID; // 0x44
	bool bStreaming; // 0x48
};

struct UAkAssetBase {
	UAkAssetPlatformData* PlatformAssetData; // 0x40
};

struct UCompositeCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
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

struct UPFServerSlotManager {
	FMulticastInlineDelegate OnMatchStarted; // 0x28
	FMulticastInlineDelegate OnBackfilledPlayers; // 0x38
	FMulticastInlineDelegate OnTimedOutPlayers; // 0x48
	UPlayFabSubsystem* PlayFabSubsystem; // 0x58
};

struct UBattalionAudio {
	TSoftObjectPtr<UAkAudioEvent> MusicPlayEvent; // 0x28
	TSoftObjectPtr<UAkAudioEvent> MusicStopEvent; // 0x50
};

struct ULocalizedOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct UAkSettings {
	char MaxSimultaneousReverbVolumes; // 0x28
	FFilePath WwiseProjectPath; // 0x30
	FDirectoryPath WwiseSoundDataFolder; // 0x40
	bool bAutoConnectToWAAPI; // 0x50
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58
	bool SplitSwitchContainerMedia; // 0xa8
	bool SplitMediaPerFolder; // 0xa9
	bool UseEventBasedPackaging; // 0xaa
	bool EnableAutomaticAssetSynchronization; // 0xab
	FString CommandletCommitMessage; // 0xb0
	TMap<FString, FString> UnrealCultureToWwiseCulture; // 0xc0
	bool AskedToUseNewAssetManagement; // 0x110
	bool bEnableMultiCoreRendering; // 0x111
	bool MigratedEnableMultiCoreRendering; // 0x112
	bool FixupRedirectorsDuringMigration; // 0x113
	FDirectoryPath WwiseWindowsInstallationPath; // 0x118
	FFilePath WwiseMacInstallationPath; // 0x128
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

struct ALevelScriptActor {
	char bInputEnabled : 1; // 0x220
};

struct ABattalionPlayerController {
	float LookSensitivityZoomedZero; // 0x570
	ABattalionPlayerState* BattalionPlayerState; // 0x578
	bool IsListeningForInput; // 0x580
	bool JustJoined; // 0x581
	AActor* LastUsedSpawnPoint; // 0x588
	bool ForceNoRespawn; // 0x590
	float LastGoalYaw; // 0x594
	float LastPingCalcTime; // 0x598
	float MovementAndInputSpeedModifier; // 0x59c
	AActor* FinalViewTarget; // 0x5a8
	char bInfiniteClip : 1; // 0x5b0
	char bHealthRegen : 1; // 0x5b0
	bool bGodMode; // 0x5b1
	UAkAudioEvent* MatchWonSound; // 0x5b8
	UAkAudioEvent* MatchLostSound; // 0x5c0
	UAkAudioEvent* RoundWonSound; // 0x5c8
	UAkAudioEvent* RoundLostSound; // 0x5d0
	UAkAudioEvent* LastManSound; // 0x5d8
	UAkAudioEvent* BombCollectedSound; // 0x5e0
	UAkAudioEvent* BombDroppedSound; // 0x5e8
	UAkAudioEvent* BombPlantedAllySound; // 0x5f0
	UAkAudioEvent* BombPlantedEnemySound; // 0x5f8
	ASpectatorPawn* DeathSpectatorPawn; // 0x638
	UBattalionGameInstance* BattInstance; // 0x640
	UBattalionSettings* BattSettings; // 0x648
};

struct UNiagaraDataInterfaceRenderTarget2DArray {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct UInAppPurchaseCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct APaperSpriteActor {
	UPaperSpriteComponent* RenderComponent; // 0x220
};

struct UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x468
	int32_t PreviousLODLevel; // 0x46c
	int32_t MinLOD; // 0x470
	int32_t SubDivisionStepSize; // 0x474
	UStaticMesh* StaticMesh; // 0x478
	FColor WireframeColorOverride; // 0x480
	char bEvaluateWorldPositionOffset : 1; // 0x484
	char bOverrideWireframeColor : 1; // 0x484
	char bOverrideMinLOD : 1; // 0x484
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

struct UMaterialExpressionArctangent {
	FExpressionInput Input; // 0x40
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

struct UChaosPhysicalMaterial {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	float Restitution; // 0x30
	float LinearEtherDrag; // 0x34
	float AngularEtherDrag; // 0x38
	float SleepingLinearVelocityThreshold; // 0x3c
	float SleepingAngularVelocityThreshold; // 0x40
};

struct UConnectionCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
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

struct UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x78
};

struct UBoxFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct UPostEventAtLocationAsync {
	FMulticastInlineDelegate Completed; // 0x30
};

struct USourceEffectEnvelopeFollowerPreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct UGizmoLocalVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct UMinimapInternal_Background_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Background; // 0x268
	UImage* Image_Overlay; // 0x270
	UMapViewComponent* MapViewComp; // 0x278
	AMapBackground* MapBackground; // 0x280
	UTexture* CurrentTexture; // 0x288
	UTextureRenderTarget2D* CurrentOverlay; // 0x290
	UMaterialInstanceDynamic* BackgroundMatInst; // 0x298
	float StartTime; // 0x2a0
	UMaterialInstanceDynamic* OverlayMatInst; // 0x2a8
	FTimerHandle AlwaysTickHandle; // 0x2b0
};

struct UParticleModuleSpawn {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UPromodBotSMInstance {
	APromodBot* PromodBot; // 0x640
	APromodBotController* PromodBotController; // 0x648
	APatrolPath* PatrolPath; // 0x650
};

struct AWartideHUD {
	UNUIWartideRoundResult* RoundResult; // 0x608
	UNUIBuyScreen* BuyScreen; // 0x610
	UNUIWartideRoundResult* RoundResultClass; // 0x618
	UNUIBuyScreen* BuyScreenClass; // 0x620
};

struct ANiagaraActor {
	UNiagaraComponent* NiagaraComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
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

struct UMinimapInternal_Camera_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UMapViewComponent* MapViewComp; // 0x268
	bool bIsCircular; // 0x270
	float FloorDistance; // 0x274
	FVector2D PanelSize; // 0x278
};

struct UDebugUI_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* ArrowDown; // 0x268
	UCanvasPanel* ArrowLeft; // 0x270
	UCanvasPanel* ArrowRight; // 0x278
	UCanvasPanel* ArrowUp; // 0x280
	UTextBlock* CourseTime; // 0x288
	UImage* Crosshair; // 0x290
	UTextBlock* CurrentViewHeight; // 0x298
	UTextBlock* DebugLastDamage; // 0x2a0
	UTextBlock* FloorAngle; // 0x2a8
	UImage* FloorAngleDisplay; // 0x2b0
	UTextBlock* FPS; // 0x2b8
	UTextBlock* GameModeText; // 0x2c0
	USimpleTimeSeriesPlot* GraphModelRecoilX; // 0x2c8
	USimpleTimeSeriesPlot* GraphModelRecoilY; // 0x2d0
	USimpleTimeSeriesPlot* GraphModelZ; // 0x2d8
	USimpleTimeSeriesPlot* GraphUPS; // 0x2e0
	USimpleTimeSeriesPlot* GraphVerticalSpeed; // 0x2e8
	UImage* Image_3; // 0x2f0
	UImage* Image_111; // 0x2f8
	UImage* Image_112; // 0x300
	UImage* Image_118; // 0x308
	UTextBlock* IsSliding; // 0x310
	UImage* Jump; // 0x318
	UCanvasPanel* JumpQueued; // 0x320
	UTextBlock* MapNameText; // 0x328
	UTextBlock* MaxZ; // 0x330
	UTextBlock* MoveMode; // 0x338
	UTextBlock* Ping; // 0x340
	UTextBlock* Position; // 0x348
	USimpleCartesianPlot* RecoilPlot; // 0x350
	UTextBlock* SavedZPos; // 0x358
	UTextBlock* SprintState; // 0x360
	UTextBlock* Stance; // 0x368
	UTextBlock* TextBlock_3; // 0x370
	UTextBlock* TxtModelZ; // 0x378
	UTextBlock* UPS; // 0x380
	UTextBlock* ViewRotation; // 0x388
	UTextBlock* VSpeed; // 0x390
	APromodCharacter* PromodCharacter; // 0x398
	float DeltaTime; // 0x3a0
	float SavedZ; // 0x3a4
	float ZMax; // 0x3a8
	float FadeInMultiplier; // 0x3ac
	float FadeOutMultiplier; // 0x3b0
	EMapPackGamemode GameMode; // 0x3b4
	float TimeWithNoRecoil; // 0x3b8
};

struct AEmitterCameraLensEffectBase {
	UParticleSystem* PS_CameraEffect; // 0x270
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x278
	APlayerCameraManager* BaseCamera; // 0x280
	FTransform RelativeTransform; // 0x290
	float BaseFov; // 0x2c0
	char bAllowMultipleInstances : 1; // 0x2c4
	char bResetWhenRetriggered : 1; // 0x2c4
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2c8
	float DistFromCamera; // 0x2d8
};

struct UMaterialExpressionBumpOffset {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct UUniformScalar {
	float Magnitude; // 0xb0
};

struct UMaterialExpressionReflectionVectorWS {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct AProceduralFoliageVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UParticleModuleRotationRateMultiplyLife {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UABP_HandCannon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
};

struct UMedalNeutralised {
	ADOMGameMode* DOMGameMode; // 0x48
};

struct UBaseMediaSource {
	FName PlayerName; // 0x80
};

struct UNUIParty {
	int32_t SelectedPartyMember; // 0x290
};

struct AExponentialHeightFog {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
};

struct UABP_Bomb_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UTugOfWarGameOverviewWidget {
	ESlateVisibility SpawnQueueTextVisibility; // 0x390
	ESlateVisibility OvertimeTimeVisibility; // 0x391
	ESlateVisibility CenterTimerVisibility; // 0x392
	ESlateVisibility SideTimerVisibility; // 0x393
	FText SpawnQueueText; // 0x398
	ACargoGameState* CargoGameState; // 0x3b0
};

struct UGameSessionSettings {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UFileMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
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

struct ALandscapeStreamingProxy {
	LazyObjectProperty LandscapeActor; // 0x598
};

struct ULevelSequenceBurnIn {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
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

struct UWorldMarkerComponent {
	UTexture2D* Icon; // 0x1f8
	FString NeutralLabel; // 0x200
	FString FriendlyLabel; // 0x210
	FString EnemyLabel; // 0x220
	FLinearColor NeutralColor; // 0x230
	FLinearColor NeutralOffColor; // 0x240
	FLinearColor FriendlyColor; // 0x250
	FLinearColor FriendlyOffColor; // 0x260
	FLinearColor EnemyColor; // 0x270
	FLinearColor EnemyOffColor; // 0x280
	FLinearColor IconNeutralColor; // 0x290
	FLinearColor IconFriendlyColor; // 0x2a0
	FLinearColor IconEnemyColor; // 0x2b0
	bool PreventColorOverrides; // 0x2c0
	bool UseAlliedTeamNeutralColor; // 0x2c1
	bool bUseProgressMarker; // 0x2c2
	bool bUseTimerText; // 0x2c3
	float DefualtTimerTime; // 0x2c4
	bool HideOnFinishLerp; // 0x2c8
	bool bIconUseOffColour; // 0x2c9
	UTexture2D* CurrentMarkerImage; // 0x2d0
	FString CurrentMarkerLabel; // 0x2d8
	FLinearColor CurrentMarkerColor; // 0x2e8
	FLinearColor CurrentMarkerOffColor; // 0x2f8
	FLinearColor CurrentIconColor; // 0x308
	bool bMarkerCurrentlyVisible; // 0x318
	FLinearColor CurrentCaptureColor; // 0x31c
	float Progress; // 0x32c
	float TimerTime; // 0x330
	bool bInHighlightAnimation; // 0x334
	bool bShouldBeCountingDown; // 0x335
	bool bOriginalShouldShowText; // 0x336
	float CurrentTimerTime; // 0x338
	int32_t TeamAllegiance; // 0x340
	ETeamVisibility TeamVisibility; // 0x344
	bool bAddedToScreen; // 0x34c
	bool bIsStuckToScreen; // 0x34d
	UHUDWorldMarker* Widget; // 0x350
	UHUDWorldMarker* WidgetClass; // 0x358
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

struct ATDMHUD {
	UNUIRoundResult* RoundResult; // 0x5f8
	UNUIBuyScreen* BuyScreen; // 0x600
	UNUIWeaponPrompt* WeaponPrompt; // 0x608
	UNUITDMObjectiveScores* TDMObjectiveScores; // 0x610
	UNUIRoundResult* RoundResultClass; // 0x618
	UNUIBuyScreen* BuyScreenClass; // 0x620
	UNUIWeaponPrompt* WeaponPromptClass; // 0x628
	UNUITDMObjectiveScores* TDMObjectiveScoresClass; // 0x630
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

struct USpotLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
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

struct UCameraModifier_CameraShake {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UMediaPlaylist {
	TArray<UMediaSource*> Items; // 0x28
};

struct UInAppPurchaseQueryCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UAkEventCallbackInfo {
	int32_t PlayingID; // 0x30
	int32_t EventId; // 0x34
};

struct AAnimAudioVolume {
	UBoxComponent* BoxComponent; // 0x220
	UAkComponent* AudioComponent; // 0x228
	USkeletalMeshComponent* Mesh; // 0x230
	bool bIsEnabled; // 0x238
	int32_t UniqueID; // 0x23c
	float playCooldown; // 0x240
	int32_t playNumLimit; // 0x244
	FDateTime LastPlayTime; // 0x248
	int32_t playNum; // 0x250
	UAnimationAsset* Animation; // 0x258
	bool LoopAnimation; // 0x260
	UAkAudioEvent* AudioEventPtr; // 0x268
};

struct UPaperFlipbookComponent {
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

struct UCompositeDataTable {
	TArray<UDataTable*> ParentTables; // 0xb0
	TArray<UDataTable*> OldParentTables; // 0xc0
};

struct UNUIPlayerLoadout {
	ABattalionPlayerState* PlayerState; // 0x278
	FLoadoutCard ClassCardData; // 0x280
};

struct UPromodInventoryComponent {
	TArray<ESlotType> SlotSelectionOrder; // 0xd8
	ESlotType ActiveSlotType; // 0xe8
	ESlotType PreviousSlotType; // 0xe9
	ESlotType DesiredSlotType; // 0xea
	UWeaponSlot* PrimarySlot; // 0xf0
	UWeaponSlot* SecondarySlot; // 0xf8
	UWeaponSlot* MeleeSlot; // 0x100
	UWeaponSlot* SpecialSlot; // 0x108
	APromodCharacter* OwningCharacter; // 0x110
	UBattalionSettings* BattalionSettings; // 0x118
	float MinimumTimeAllowedBetweenEquips; // 0x120
	float LastEquipTime; // 0x124
};

struct UBoxReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UARFaceGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct UMaterialInstanceConstant {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x360
};

struct USafeZone {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UFontFace {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
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

struct UCourseTimesSaveData {
	TMap<FString, FPromodCourseTimeData> CourseTimeData; // 0x50
};

struct UAudioBus {
	EAudioBusChannels AudioBusChannels; // 0x28
	bool bIsAutomatic; // 0x29
};

struct UMaterialExpressionDepthOfFieldFunction {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UWBP_JumperCompleteScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UWidgetAnimation* Footer-Intro; // 0x298
	UCanvasPanel* ButtonsScreen; // 0x2a0
	UVerticalBox* CheckpointList; // 0x2a8
	UCanvasPanel* CheckpointSplitsScreen; // 0x2b0
	UTimeDisplay_C* CurrentTimeDisplay; // 0x2b8
	UHeader-Bar-Temp_C* Header-Bar-Temp; // 0x2c0
	UHeader-Bar-Temp_C* Header-Bar-Temp_2; // 0x2c8
	UInGameLeaderboard_C* InGameLeaderboard; // 0x2d0
	UJumper_LevelSelect_C* Jumper_LevelSelect; // 0x2d8
	UBack-Legend-button-Promod_C* Leaderboard_Back-Legend-button-Promod; // 0x2e0
	UCONTINUE-Legend-button-Promod_C* Leaderboard_CONTINUE-Legend-button-Promod; // 0x2e8
	UCanvasPanel* LevelSelectScreen; // 0x2f0
	UDebug_Button_C* MAIN-MENU-New_2; // 0x2f8
	UMenu-Background_C* Menu-Background; // 0x300
	UDebug_Button_C* NextLevel-new; // 0x308
	UCanvasPanel* PersonalBestScreen; // 0x310
	UTimeDisplay_C* PersonalBestTimeDisplay; // 0x318
	URESTART-Legend-button-Promod_C* RESTART-F5-Legend-button-Promod; // 0x320
	UDebug_Button_C* Restart-New; // 0x328
	UDebug_Button_C* SelectLevel-new; // 0x330
	UVignette-Temp_C* Vignette-Temp; // 0x338
	UVignette-Temp_C* Vignette-Temp_2; // 0x340
	UWBP_CheckpointComparison_C* WBP_CheckpointComparison; // 0x348
	UWBP_CompleteScreenPB_C* WBP_CompleteScreenPB; // 0x350
	UWidgetSwitcher* WidgetSwitcher_45; // 0x358
	UPromodMainMenuScreen* MainMenuReference; // 0x360
	bool PlayersBestTime; // 0x368
	FMapStatList MapsStatsList; // 0x370
	bool NewVar_1; // 0x398
	float CurrentTimeFloat; // 0x39c
	UMainMenuLevelSelectMapDataAsset* MapImageDataAsset; // 0x3a0
	UPromodLoadoutsDataAsset* LoadoutsDataAsset; // 0x3a8
	UMapPackManager* CurrentMapPackManager; // 0x3b0
	FString PlayerName; // 0x3b8
	FString MapName; // 0x3c8
	UPromodClassManagerDataAsset* ClassManagerDataAsset; // 0x3d8
	int32_t CurrentStarCount; // 0x3e0
	bool FinalPage; // 0x3e4
	int32_t WidgetIndexClamp; // 0x3e8
};

struct UNUISpectatorIconGroup {
	TArray<UNUISpectatorStatBar*> PlayerBars; // 0x278
	UVerticalBox* VerticalLeft; // 0x298
	UVerticalBox* VerticalMiddle; // 0x2a0
	UVerticalBox* VerticalRight; // 0x2a8
	int32_t TeamNum; // 0x2b0
	UBattalionTeam* Team; // 0x2b8
	UHorizontalBox* RootBox; // 0x2c0
	bool bRightSide; // 0x2c8
	bool bUseSmallIcons; // 0x2c9
};

struct UGizmoArrowComponent {
	FVector Direction; // 0x460
	float Gap; // 0x46c
	float Length; // 0x470
	float Thickness; // 0x474
};

struct USNDLeaderBoard {
	FText MapNameText; // 0x260
	FText TimerText; // 0x278
	TArray<FLeaderboardData> LeaderboardData; // 0x290
};

struct UWBP_TugOfWarProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* CP_Main; // 0x268
	UImage* Image; // 0x270
	UImage* Image_241; // 0x278
	UWBP_CargoPayloadStatus_C* PayloadStatus; // 0x280
	UWBP_ProgressBar_C* ProgressBar_TugOfWar_MyTeam; // 0x288
	UWBP_ProgressBar_C* ProgressBar_TugOfWar_MyTeam_SuddenDeath; // 0x290
	UWBP_ProgressBar_C* ProgressBar_TugOfWar_TheirTeam; // 0x298
	UWBP_ProgressBar_C* ProgressBar_TugOfWar_TheirTeam_SuddenDeath; // 0x2a0
	TArray<UWBP_CargoProgressCheckpoint_C*> CheckpointWidgets; // 0x2a8
	TArray<float> Checkpoints; // 0x2b8
	FGeometry My Geometry; // 0x2c8
	ACargoGameState* CargoGameState; // 0x300
	UHUDTextDataAsset* HUDColour; // 0x308
	FGeometry DividerImageGeometry; // 0x310
	UCurveFloat* OnSuddenDeathStartedAnimCurve; // 0x348
	bool bTickSuddenDeathAnimation; // 0x350
	float SuddenDeathWinPercentage; // 0x354
	float CurrentSuddenDeathWinPercentageDeltaTime; // 0x358
};

struct UNUIJumperCourseComplete {
	EMapPackGamemode GameModeType; // 0x260
	AJumperGameMode* JumperGameMode; // 0x268
	AKillRunGameMode* KillRunGameMode; // 0x270
	TArray<FString> UNLOCKEDLEVELS; // 0x278
	int32_t PreviousDifficultyRating; // 0x288
};

struct UEditableGameplayTagQueryExpression_AllExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UWindowTitleBarArea {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UAISenseEvent_Hearing {
	FAINoiseEvent Event; // 0x28
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

struct ADOMMode_Zone {
	float ZoneRadius; // 0x220
	UStaticMeshComponent* ZoneMesh; // 0x228
	UBoxComponent* CollisionComp; // 0x230
	int32_t CurrentTeamAllegiance; // 0x238
	ENationType CurrentNationAllegiance; // 0x23c
	FString ImageID; // 0x250
	float CaptureProgress; // 0x260
	bool IsBeingCaptured; // 0x264
	bool ShouldTick; // 0x265
	float TimeCaptured; // 0x268
	int32_t CapturingTeam; // 0x26c
	ENationType CapturingNation; // 0x270
	float ReturnCaptureCoolDown; // 0x274
	int32_t NumPlayersCapping; // 0x278
	bool IsContested; // 0x27c
	TArray<ADOMPlayerController*> PlayersInZone; // 0x280
	TArray<ADOMPlayerState*> PlayerStatesInZone; // 0x290
	UWorldMarkerComponent* DefaultWorldMarker; // 0x2a0
	FDOMMode_ZoneProperties ZoneProperties; // 0x2a8
	float CaptureTime; // 0x2b8
	float CooldownTime; // 0x2bc
	UTexture2D* AIcon; // 0x2c0
	UTexture2D* BIcon; // 0x2c8
	UTexture2D* CIcon; // 0x2d0
	float NeutraliseTime; // 0x2d8
	bool Neutral; // 0x2dc
	bool StraightCap; // 0x2dd
	bool IsBeingNeutralised; // 0x2de
};

struct UParticleModulePivotOffset {
	FVector2D PivotOffset; // 0x30
};

struct UParticleSystemComponent {
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
	float SecondsBeforeInactive; // 0x4f0
	float MaxTimeBeforeForceUpdateTransform; // 0x4f8
	TArray<UParticleSystemReplay*> ReplayClips; // 0x518
	float CustomTimeDilation; // 0x530
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x588
	FName AutoAttachSocketName; // 0x590
	EAttachmentRule AutoAttachLocationRule; // 0x598
	EAttachmentRule AutoAttachRotationRule; // 0x599
	EAttachmentRule AutoAttachScaleRule; // 0x59a
	FMulticastInlineDelegate OnSystemFinished; // 0x5c8
};

struct UNUIInteract {
	ABattalionPlayerState* SpectatingPlayerState; // 0x278
};

struct UInterpTrackInstBoolProp {
	bool ResetBool; // 0x60
};

struct ACinematics {
	ALevelSequenceActor* Opening; // 0x220
	UAkAudioEvent* OpeningAudio; // 0x228
	ALevelSequenceActor* SwapSides; // 0x230
	UAkAudioEvent* SwapSidesAudio; // 0x238
	ALevelSequenceActor* MatchOver; // 0x240
	UAkAudioEvent* MatchOverAudio; // 0x248
};

struct UMaterialExpressionScalarParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UDatasmithMaterialInstanceTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct UHideWeaponNotify_C {
	bool Show; // 0x38
	bool ThirdPerson; // 0x39
};

struct UWBP_Overtime_Shootout_Transition_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Show; // 0x268
	UImage* Background; // 0x270
	UImage* Img_LeftLine; // 0x278
	UImage* Img_LeftTeamPip_2; // 0x280
	UImage* Img_LeftTeamPip_3; // 0x288
	UImage* Img_LeftTeamPip_4; // 0x290
	UImage* Img_LeftTeamPip_5; // 0x298
	UImage* Img_LeftTeamPip_6; // 0x2a0
	UImage* Img_RightLine; // 0x2a8
	UImage* Img_RightTeamPip_2; // 0x2b0
	UImage* Img_RightTeamPip_3; // 0x2b8
	UImage* Img_RightTeamPip_4; // 0x2c0
	UImage* Img_RightTeamPip_5; // 0x2c8
	UImage* Img_RightTeamPip_6; // 0x2d0
	UTextBlock* Text_LeftPlayerName; // 0x2d8
	UTextBlock* Text_RightPlayerName; // 0x2e0
	UVerticalBox* VertBox_FooterWrap; // 0x2e8
	FLinearColor AlivePipCol; // 0x2f0
	FLinearColor DeadPipCol; // 0x300
	UMediaPlayer* MediaPlayer_Background; // 0x310
	bool SkipOneAudioCall; // 0x318
	UMediaSource* Video; // 0x320
	UAkAudioEvent* AudioEvent; // 0x328
	UMediaTexture* VideoTexture; // 0x330
};

struct UBP_HandCannonCameraModifier_C {
	float FovAddition; // 0x48
	UCurveFloat* FovCurve; // 0x50
	float Intensity; // 0x58
};

struct UARCandidateImage {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
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

struct UPromodDeathCamera {
	float Duration; // 0xb0
	float LerpAmount; // 0xb4
	float LerpTimeSeconds; // 0xb8
	float MaxZoomDistance; // 0xd0
	float FOVAtMaxDistance; // 0xd4
	UCurveFloat* ZoomCurve; // 0xd8
	float ZoomTime; // 0xe0
	FVector DesiredViewPosition; // 0xe4
	float TranslationLerpAmount; // 0xf0
	FVector DeathPosition; // 0xf4
	float StartTime; // 0x100
	APromodCharacter* KillerCharacter; // 0x108
	APromodCharacter* OwningCharacter; // 0x110
	bool bIsRunning; // 0x118
};

struct UNUISpectatorStatBar {
	ABattalionPlayerState* PlayerState; // 0x278
	ABattalionCharacter* Character; // 0x280
	FText ID; // 0x288
	char ActualID; // 0x2a0
	FText Health; // 0x2a8
	float ActualHealth; // 0x2c0
	int32_t GrenadeCount; // 0x2c4
	int32_t SmokeCount; // 0x2c8
	FString PlayerName; // 0x2d0
	UBattalionDamageType* Weapon; // 0x2e0
	UWidgetSwitcher* Switcher; // 0x2e8
	UNUIPlayerAvatar* LargeBarAvatar; // 0x2f0
	UNUIPlayerAvatar* SmallBarAvatar; // 0x2f8
	bool bDead; // 0x300
	bool bLowHealth; // 0x301
	bool bCurrentlyViewed; // 0x302
	FLinearColor HealthBarColour; // 0x304
	int32_t NationNum; // 0x314
	bool bPrimaryEquipped; // 0x318
};

struct UVOManager {
	UVODataAsset* VOData; // 0x28
	float VoiceDistance; // 0x30
	TArray<FVOCategoryImportance> CategoryImportance; // 0x38
};

struct APromodPlayerController {
	UAkAudioEvent* StopPlayerSoundsEvent; // 0xca0
	UAkAudioEvent* StopReloadSoundsEvent; // 0xca8
	UAkAudioEvent* StopContinuousSoundsEvent; // 0xcb0
	UAkAudioEvent* EnemyEliminatedSound; // 0xcb8
	UAkAudioEvent* FriendlyEliminatedSound; // 0xcc0
	UAkAudioEvent* InfinityRefreshSound; // 0xcc8
	bool IsCinematicPlaying; // 0xe18
	bool UpdateSpecHUDFailed; // 0xe30
	UAkAudioEvent* StopWorldCollapseSound; // 0xe48
	bool bIsShowingClassSelectionScreen; // 0xe50
	bool bIsShowingGameOverScreen; // 0xe51
	EPromodActionPrompt CurrentActionPrompt; // 0xe52
	FString MatchResult; // 0xe58
	UAkComponent* WorldCollapseAkComp; // 0xe80
	UAkAudioEvent* StartWorldCollapseSound; // 0xe88
	UPlayerLoadoutsSaveData* SavedPlayerLoadouts; // 0xe90
	UCameraShakeBase* StunCameraShakeInstancePtr; // 0xe98
};

struct UInputTouchDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UMaterialParameterCollection {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct ABattalionExplosionEffect {
	UParticleSystem* ExplosionFX; // 0x220
	UPointLightComponent* ExplosionLight; // 0x228
	float ExplosionLightFadeOut; // 0x230
	UAkAudioEvent* ExplosionSound; // 0x238
	FDecalData Decal; // 0x240
	FHitResult SurfaceHit; // 0x258
};

struct AGeometryCollectionActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228
};

struct USlateSettings {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct UBlendSpace {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct UForceFeedbackAttenuation {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UABP_Gadget_Rcon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UBTDecorator_KeepInCone {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct UAkCallbackInfo {
	UAkComponent* AkComponent; // 0x28
};

struct UClothPhysicalMeshDataNv_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct UNavLinkComponent {
	TArray<FNavigationLink> Links; // 0x448
};

struct UMedalCapture {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UParticleModuleSourceMovement {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct UEnvQueryNode {
	int32_t VerNum; // 0x28
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

struct UParticleModuleMeshMaterial {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UNiagaraDataInterfaceAudioSpectrum {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct UWmfMediaSettings {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct UNUIDOMZoneStates {
	TArray<FDOMZoneData> ZoneStates; // 0x278
};

struct UGizmoLocalFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct ABP_TrophyFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	ABP_ThrowableTrophySystem_C* Grenade; // 0x3d0
	UAkComponent* GrenadeAkComp; // 0x3d8
	float GrenadeThrowTime; // 0x3e0
	int32_t OwningTeamNum; // 0x3e4
	float GrenadeThrowAnimEndTime; // 0x3e8
	UNiagaraSystem* System Template; // 0x3f0
	float StunRadius; // 0x3f8
	bool bHit; // 0x3fc
};

struct UBP_PlayerSilhouetteCameraModifier_C {
	UMaterialInstanceDynamic* PostProcessMaterialNew; // 0x48
	float Radius; // 0x50
	float Intensity; // 0x54
};

struct UAISense_Prediction {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
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

struct UWBP_BombRespawnTimer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_CircularProgressBar_C* WBP_CircularProgressBar_C_2; // 0x268
	float Time; // 0x270
	float StartTime; // 0x274
};

struct AKillRunGameMode {
	AKillRunCourse* CurrentCourse; // 0x850
	UAkAudioEvent* RaceStartEvent; // 0x890
	UAkAudioEvent* RaceCompletedEvent; // 0x898
};

struct UInGameLeaderboard_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	UWidgetAnimation* Intro; // 0x3d0
	UBackgroundBlur* BackgroundBlur_451; // 0x3d8
	UCheckBox* CheckBox_1; // 0x3e0
	UCanvasPanel* Footer; // 0x3e8
	UHorizontalBox* FriendsToggleHorBox; // 0x3f0
	UHeader-Bar-Temp_C* Header-Bar-Temp; // 0x3f8
	UImage* Image_249; // 0x400
	UOverlay* ingame-underlay-blur; // 0x408
	ULeaderboardItem_C* LeaderboardItem_168; // 0x410
	UTextBlock* MapNameBox; // 0x418
	UTextBlock* MapNameText; // 0x420
	UTextBlock* NameBox; // 0x428
	UVerticalBox* PlayerBox; // 0x430
	UTextBlock* RankBox; // 0x438
	UTextBlock* SteamProfilePrivacy; // 0x440
	UTextBlock* timeBox; // 0x448
	UTextBlock* TITLEBOX; // 0x450
	UImage* underline_2; // 0x458
	UVignette-Temp_C* Vignette-Temp; // 0x460
	bool TitleSet; // 0x468
	int32_t RankModifier; // 0x46c
	bool ShouldShowBottomBar; // 0x470
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

struct UWBP_JumperMovementHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* ArrowDown; // 0x268
	UCanvasPanel* ArrowLeft; // 0x270
	UCanvasPanel* ArrowRight; // 0x278
	UCanvasPanel* ArrowUp; // 0x280
	UImage* Image_3; // 0x288
	UImage* Image_111; // 0x290
	UImage* Image_112; // 0x298
	UImage* Jump; // 0x2a0
	UCanvasPanel* JumpQueued; // 0x2a8
	ACharacter* Character; // 0x2b0
	bool ShowHUD; // 0x2b8
};

struct UFoliageType_InstancedStaticMesh {
	UStaticMesh* Mesh; // 0x3a8
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b0
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c0
};

struct UMovieSceneCameraCutTrack {
	bool bCanBlend; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UNUIGameOverview {
	int32_t PrevTimerSeconds; // 0x278
	bool TeamsReversed; // 0x27c
	FText RoundTitleText; // 0x280
	ESlateVisibility RoundTitleVisibility; // 0x298
	FText RoundSubtitleText; // 0x2a0
	ESlateVisibility RoundSubtitleVisibility; // 0x2b8
	FText TimerText; // 0x2c0
	ESlateVisibility TimerVisibility; // 0x2d8
	ESlateVisibility DeathCountVisibility; // 0x2d9
	int32_t LeftTeamNumber; // 0x2dc
	int32_t RightTeamNumber; // 0x2e0
	ENationType LeftScoreNation; // 0x2e4
	ENationType RightScoreNation; // 0x2e5
	FText LeftScoreTitleText; // 0x2e8
	FText RightScoreTitleText; // 0x300
	ESlateVisibility RightScoreCrossPlayGlobeVisiblity; // 0x318
	FLinearColor LeftScoreColor; // 0x31c
	FLinearColor LeftScoreTextColor; // 0x32c
	FLinearColor RightScoreColor; // 0x33c
	FLinearColor RightScoreTextColor; // 0x34c
	FText LeftScoreValueText; // 0x360
	FText RightScoreValueText; // 0x378
	float LeftScoreProgress; // 0x390
	float RightScoreProgress; // 0x394
	ESlateVisibility LeftScoreVisibility; // 0x398
	ESlateVisibility RightScoreVisibility; // 0x399
	bool DOMProgressBarVisible; // 0x39a
	bool DisplayRoundNumber; // 0x39b
	int32_t MaxTeamNameLength; // 0x39c
};

struct USubmixEffectFilterPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct ACTFPlayerController {
	bool ShowActionTakeFlag; // 0xc08
};

struct UNUINadeControlInfo {
	bool GrenadeAvailableToView; // 0x278
};

struct UInteractiveGizmoManager {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct UABP_UNDCKnife_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct USoundNodeGroupControl {
	TArray<int32_t> GroupSizes; // 0x48
};

struct UWBP_FireUpProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* FireUpIcon; // 0x268
	UWBP_Flipbook_C* Flipbook_Unlock; // 0x270
	UWBP_Flipbook_C* Flipbook_Unlocked; // 0x278
	UImage* Image_140; // 0x280
	UOverlay* Overlay_FireupProgress; // 0x288
	UProgressBar* PB_FireupProgress; // 0x290
	UPlatformKeyImage_C* PlatformKeyImage_Ult; // 0x298
	UTextBlock* TB_FireUpPercentage; // 0x2a0
	UWidgetSwitcher* WS_PercentageKeybind; // 0x2a8
	UWidgetSwitcher* WS_ShieldState; // 0x2b0
	bool bPrevFireUpAvailable; // 0x2b8
	FFireUpData Fireup Data; // 0x2c0
	FLinearColor NadesLeftColour; // 0x3b8
	FLinearColor NoNadesLeftColour; // 0x3c8
	float TimeRemaining; // 0x3d8
	float DeltaTime; // 0x3dc
	UTexture2D* NoGrenadeImage; // 0x3e0
	float TotalDuration; // 0x3e8
	bool ShouldTickProgressToTarget; // 0x3ec
	float TargetProgress; // 0x3f0
	float PrevProgress; // 0x3f4
	float CurrentProgress; // 0x3f8
	TMap<APromodPlayerState*, bool> SpectatorAlreadyPlayed; // 0x400
	UPromodTacticalUtilDataAsset* TacticalUtilDataAsset; // 0x450
	UHUDTextDataAsset* HUDColour; // 0x458
	UPromodOffensiveUtilDataAsset* LethalUtilDataAsset; // 0x460
	UPromodAllFireUpsDataAsset* FireUpDataAsset; // 0x468
	APromodPlayerState* Player State; // 0x470
	TArray<UCameraModifier*> CameraModifierClasses; // 0x478
	bool FireupAchievedTriggered; // 0x488
	float TickSafetyTimer; // 0x48c
	float TickSafetyTime; // 0x490
	APromodCharacter* Player Character; // 0x498
	bool SpectatorFireUpActive; // 0x4a0
	float Fire Up Percentage; // 0x4a4
};

struct UNiagaraParameterCollection {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct UMovieSceneCaptureProtocolBase {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct UMovieSceneLevelVisibilitySection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UInteractiveGizmo {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UNiagaraDataInterfaceParticleRead {
	FString EmitterName; // 0xd8
};

struct UWBP_StaminaBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Fade_In2; // 0x268
	UWidgetAnimation* Start; // 0x270
	UWidgetAnimation* Cooldown; // 0x278
	UWidgetAnimation* Default; // 0x280
	UWidgetAnimation* Fade_Out; // 0x288
	UWidgetAnimation* Fade_In; // 0x290
	URetainerBox* RetainerBox_1; // 0x298
	UProgressBar* StaminaProgressBar; // 0x2a0
	bool IsPlayingCooldown; // 0x2a8
	bool Is Playing Fade In; // 0x2a9
	float RemainingStamina; // 0x2ac
	FStaminaEvent StaminaEvent; // 0x2b0
};

struct UUMGSequenceTickManager {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct UMovieSceneParticleParameterTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UWBP_RadialMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BackgroundImage; // 0x268
	UImage* BackgroundSegmentHighlight; // 0x270
	UCanvasPanel* CP_Arrow; // 0x278
	UCanvasPanel* CP_MenuItems; // 0x280
	UImage* IMG_Arrow; // 0x288
	URetainerBox* RB_BackgroundSegment; // 0x290
	FVector2D MousePos; // 0x298
	int32_t NumItems; // 0x2a0
	int32_t ActiveItem; // 0x2a4
	float MouseAreaRadius; // 0x2a8
	int32_t PrevActiveItem; // 0x2ac
	float Radius; // 0x2b0
	float CurrentRotation; // 0x2b4
	UMaterialInstanceDynamic* BackgroundMaterial; // 0x2b8
	bool bEnableDebug; // 0x2c0
	FMulticastInlineDelegate OnItemHovered; // 0x2c8
	FMulticastInlineDelegate OnItemSelected; // 0x2d8
	TArray<FSlateBrush> Items; // 0x2e8
};

struct UAnimSharingTransitionInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
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

struct ULayer {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
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

struct AVaultAntiVolume {
	UBoxComponent* BoxComponent; // 0x220
};

struct USourceEffectStereoDelayPreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
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

struct UMedalDreamkiller {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct AJumperGameMode {
	AJumperCourse* CurrentCourse; // 0x850
	TArray<float> SplitTimes; // 0x888
	TArray<float> PersonalBestSplitTimes; // 0x898
	UAkAudioEvent* RaceStartEvent; // 0x8b0
	UAkAudioEvent* RaceCompletedEvent; // 0x8b8
};

struct UBreadcrumbDataAsset {
	TArray<FString> breadCrumbs; // 0x30
};

struct USubmixEffectDelayPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct UPlayFabLeaderboardsAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x128
	UPlayFabJsonObject* RequestJsonObj; // 0x130
	UPlayFabJsonObject* ResponseJsonObj; // 0x138
};

struct UMaterialExpressionArctangentFast {
	FExpressionInput Input; // 0x40
};

struct UNUIPickup {
	FText BindName; // 0x278
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

struct UNUIProneBlockPrompt {
	bool ShouldPlay; // 0x278
};

struct UEnvQueryTest_Dot {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UOnlineSessionClient {
	bool bIsFromInvite; // 0x1d8
	bool bHandlingDisconnect; // 0x1d9
};

struct UMapNameToImageDataAsset {
	TArray<FMapImageData> Maps; // 0x30
};

struct UBattalionMedalManager {
	UBattalionGameInstance* BattInstance; // 0x28
	UPFPlayerDataManager* PFPlayerData; // 0x30
	UPFPlayerIdCache* PFPlayerCache; // 0x38
	TArray<UMedalBase*> Medals; // 0x40
	ABattalionGameMode* GameMode; // 0x50
	ABattalionGameState* GameState; // 0x58
	float UpdateFrequency; // 0x70
};

struct UKantanTimeSeriesPlotBase {
	bool bUseFixedTimeRange; // 0x368
	float DisplayTimeRange; // 0x36c
	FCartesianRangeBound LowerTimeBound; // 0x370
	FCartesianRangeBound UpperTimeBound; // 0x378
	FCartesianRangeBound LowerValueBound; // 0x380
	FCartesianRangeBound UpperValueBound; // 0x388
	bool bExtendValueRangeToZero; // 0x390
};

struct UPacketHandlerProfileConfig {
	TArray<FString> Components; // 0x28
};

struct UTimeSynchronizableMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
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

struct UPlayFabEconomyAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x5a8
	UPlayFabJsonObject* RequestJsonObj; // 0x5b0
	UPlayFabJsonObject* ResponseJsonObj; // 0x5b8
};

struct AHardpointZone {
	UMapIconComponent* MiniMapIconComponent; // 0x220
	TArray<APromodCharacter*> PlayersInZone; // 0x228
	FString HardpointName; // 0x238
	int32_t ZoneIndex; // 0x248
	int32_t CurrentlyCapturedTeamAllegiance; // 0x24c
	EHardpointState CurrentHardpointState; // 0x250
	UWorldMarkerComponent* WorldMarkerComponentFirstLocked; // 0x258
	UWorldMarkerComponent* WorldMarkerComponentCaptureNeutral; // 0x260
	UWorldMarkerComponent* WorldMarkerComponentCaptureEnemy; // 0x268
	UWorldMarkerComponent* WorldMarkerComponentDefend; // 0x270
	UWorldMarkerComponent* WorldMarkerComponentContest; // 0x278
	UWorldMarkerComponent* WorldMarkerComponentNext; // 0x280
	USceneComponent* SceneRoot; // 0x288
	bool bIsUnlocking; // 0x290
	bool bIsActive; // 0x291
	bool bIsFirstZone; // 0x293
	float LockedTime; // 0x294
	float LockedTickTimer; // 0x298
	bool bIsFullyUnlocked; // 0x29c
	int32_t LastCaptureTeam; // 0x2a0
};

struct UPromodCrosshair {
	TMap<EGrenadeType, ECrosshairType> GrenadeCrosshairs; // 0x268
	TMap<ESpecialGrenadeType, ECrosshairType> SpecialGrenadeCrosshairs; // 0x2b8
	ECrosshairType CurrentCrosshairType; // 0x308
};

struct UInterpTrackInstVectorProp {
	FVector ResetVector; // 0x58
};

struct UNiagaraPreviewAxis_InterpParamFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UImgMediaSource {
	FFrameRate FrameRateOverride; // 0x88
	FString ProxyOverride; // 0x90
	FDirectoryPath SequencePath; // 0xa0
};

struct AFireUpAction {
	UAkComponent* DefaultAkComp; // 0x238
	FCharacterAnim DeployAnimation; // 0x250
	UCurveVector* DeployScreenSway; // 0x260
	FCharacterAnim ActivationAnimation; // 0x268
	UCurveVector* ActivationScreenSway; // 0x278
	FFireUpSocketMesh AdditionalMesh; // 0x280
	bool bFinishManually; // 0x2b0
	FFireUpData FireUpData; // 0x2b8
	APromodCharacter* OwningCharacter; // 0x3b0
	APromodPlayerState* OwningPlayerState; // 0x3b8
	EFireUpState CurrentState; // 0x3c0
};

struct URandomVector {
	float Magnitude; // 0xb0
};

struct UCONTINUE-Legend-button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UImage* Image_405; // 0x288
	UButton* Wish-Button; // 0x290
	FMulticastInlineDelegate ButtonClicked; // 0x298
};

struct UBarChart {
	UObject* DataSource; // 0x308
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

struct UGeometryCacheCodecRaw {
	int32_t DummyProperty; // 0x38
};

struct UMovieSceneGeometryCacheSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UNiagaraDataInterfaceArrayColor {
	TArray<FLinearColor> ColorData; // 0x50
};

struct UTextBlockWidgetStyle {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct UTextureRenderTargetCube {
	int32_t SizeX; // 0xe0
	FLinearColor ClearColor; // 0xe4
	EPixelFormat OverrideFormat; // 0xf4
	char bHDR : 1; // 0xf5
	char bForceLinearGamma : 1; // 0xf5
};

struct UGeometryCacheTrack_FlipbookAnimation {
	uint32_t NumMeshSamples; // 0x58
};

struct UABP_Gizmo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UPaperTerrainMaterial {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct UEnvQueryTest_Overlap {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct USubmixEffectDynamicsProcessorPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xe0
};

struct UEnvelopeFollowerListener {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UHapticFeedbackEffect_Curve {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UDatasmithSceneComponentTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
};

struct UInterpTrackInstSlomo {
	float OldTimeDilation; // 0x28
};

struct UAkInitBank {
	TArray<FString> AvailableAudioCultures; // 0x58
	FString DefaultLanguage; // 0x68
};

struct APaperFlipbookActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220
};

struct UInterpTrackInstColorProp {
	FColor ResetColor; // 0x58
};

struct UMovieSceneColorSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct UMovieSceneEventTrack {
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	EFireEventsAtPosition EventPosition; // 0x84
	TArray<UMovieSceneSection*> Sections; // 0x88
};

struct ULeftRight_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_2; // 0x268
	UImage* LeftImage; // 0x270
	UButton* MiddleButton; // 0x278
	UButton* RightButton; // 0x280
	UImage* RightImage; // 0x288
	UTextBlock* SettingText; // 0x290
	FMulticastInlineDelegate EventLeft; // 0x298
	FMulticastInlineDelegate EventRight; // 0x2a8
	bool RightPressed; // 0x2b8
	bool LeftPressed; // 0x2b9
	float RedArrowDuration; // 0x2bc
	bool Enabled; // 0x2c0
};

struct UParticleModuleRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UNUIWeaponSwapPrompt {
	FText BindName; // 0x278
};

struct UGameplayTask {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UTireConfig {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UMaterialExpressionVectorParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UPaperGroupedSpriteComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x468
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x478
};

struct ATUTGameMode {
	AMapEditorController* MapEditorControllerClass; // 0x838
	AMapEditorController* MapEditorControllerRef; // 0x840
	APlayerController* ActivePlayerController; // 0x848
};

struct UParticleModuleLocation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UNUIHQGameOverview {
	float ObjectiveStateProgress; // 0x3a0
	FText CurrentStateName; // 0x3a8
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

struct UMaterialExpressionFontSampleParameter {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct UPromodMetricsSubsystem {
	int32_t FlushNumber; // 0x30
	bool FlushPaused; // 0x34
};

struct ULightComponent {
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

struct UDebug_Button_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* TEXT_MOTION; // 0x268
	UWidgetAnimation* UNHOVER; // 0x270
	UWidgetAnimation* HOVER; // 0x278
	UTextBlock* BLUETEXT; // 0x280
	UImage* Blur-Steak; // 0x288
	UButton* DEBUG-BUTTON; // 0x290
	UTextBlock* REDTEXT; // 0x298
	UTextBlock* TOPTEXT; // 0x2a0
	FText Text; // 0x2a8
	bool NewVar_1; // 0x2c0
	FMulticastInlineDelegate ButtonClicked; // 0x2c8
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

struct ATextRenderActor {
	UTextRenderComponent* TextRender; // 0x220
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

struct UBattalionGameInstance {
	UMapPackManager* KillRunMapPackManager; // 0x1b8
	UMapPackManager* JumperMapPackManager; // 0x1c0
	int32_t CurrentMapAndModeArrayIndex; // 0x1c8
	FLoadoutData DesiredLoadout; // 0x1d8
	bool bPlayIntroInMainMenu; // 0x320
	char CurrentConnectionStatus; // 0x321
	UBattalionGameViewport* Viewport; // 0x328
	ULocalPlayer* Player; // 0x330
	UBattalionSettings* Settings; // 0x338
	UPlayFabSubsystem* PFSubsystem; // 0x368
	UBattalionOnline* Online; // 0x370
	UCheatCodeManager* CheatCodeManager; // 0x378
	UNUIWelcomeScreen* WelcomeScreen; // 0x380
	UNUIClosedPrototypeVersion* VersionWidget; // 0x388
	UNUIWidgetReferences* WidgetReferences; // 0x3b0
	UBattalionStatManager* StatManager; // 0x3b8
	UBattalionMedalManager* MedalManager; // 0x3c0
	UBattalionChallengeManager* ChallengeManager; // 0x3c8
	UBattalionAchievementManager* AchievementManager; // 0x3d0
	UBattalionExperience* BattalionExperience; // 0x3d8
	bool UseRussianContent; // 0x3f0
	USkinDataAsset* SkinData; // 0x418
	UPromodWeaponDataAsset* PromodWeaponData; // 0x420
	UPromodLoadoutsDataAsset* PromodLoadoutsData; // 0x428
	UPromodClassManagerDataAsset* ClassManagerDataAsset; // 0x430
	UPromodFireUpActionDataAsset* FireUpActionDataAsset; // 0x438
	UPromodAllFireUpsDataAsset* AllFireUpsDataAsset; // 0x440
	UPromodPingablesDataAsset* PingablesDataAsset; // 0x448
	UPromodOffensiveUtilDataAsset* OffensiveUtilsDataAsset; // 0x450
	UPromodTacticalUtilDataAsset* TacticalUtilsDataAsset; // 0x458
	UPromodCosmeticsDataAsset* HatCosmeticsDataAsset; // 0x460
	UMediaPlaylist* AllInGameMoviesPlaylist; // 0x468
	UMediaPlaylist* Playlist_VICTORY; // 0x470
	UMediaPlaylist* Playlist_Assault_Shootout; // 0x478
	UMediaPlaylist* Playlist_DEFEAT; // 0x480
	UMediaPlaylist* Playlist_FlawlessVictory; // 0x488
	UMediaPlaylist* Playlist_OVERTIME; // 0x490
	UMediaPlaylist* Playlist_SHOOTOUT; // 0x498
	UMediaPlaylist* Playlist_ShootoutTransition; // 0x4a0
	UMediaPlaylist* Playlist_SwitchingSides; // 0x4a8
	UPromodWeaponArchetypeDataAsset* RifleArchetypeDataAsset; // 0x4b0
	UPromodWeaponArchetypeDataAsset* SMGArchetypeDataAsset; // 0x4b8
	UPromodWeaponArchetypeDataAsset* SniperArchetypeDataAsset; // 0x4c0
	UPromodWeaponArchetypeDataAsset* PistolArchetypeDataAsset; // 0x4c8
	UPromodWeaponArchetypeDataAsset* MeleeArchetypeDataAsset; // 0x4d0
	TMap<FString, int32_t> MatchmadePlayersToTeams; // 0x4d8
	FSubModeSchema SubModeLoadoutSchema; // 0x528
	FString SubModeName; // 0x538
	FGuid ServerId; // 0x574
	FString PrivateServerUrl; // 0x588
	USaveDataManager* SaveDataManager; // 0x598
	FString FrontEndMap; // 0x5a0
	TArray<FMapToModeSchema> MapsWithSupportedModes; // 0x5c0
	bool bIsMapOrderRandom; // 0x5d0
	UPlayerLoadoutsSaveData* SavedPlayerLoadouts; // 0x5e0
	bool bIsFirstSpawnOnMap; // 0x610
	ESlotType SlotRestartedWith; // 0x611
	bool WelcomePopupAccepted; // 0x628
	FString AdminIDFromCommandLineArgs; // 0x6d0
};

struct UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct USoundNodeAttenuation {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct AWeaponShowcase {
	FMulticastInlineDelegate OnShowcaseMaterialApplied; // 0x220
	TMap<EWeaponType, USkeletalMeshComponent*> WeaponMesheComponents; // 0x230
	TMap<EWeaponType, USkeletalMesh*> WeaponMeshes; // 0x280
	TMap<EWeaponType, UAnimSequence*> WeaponAnimations; // 0x2d0
	USkeletalMeshComponent* CurrentWeaponMesh; // 0x320
	FQuat BaseWeaponOrientation; // 0x330
	FVector2D DesiredCameraPosition; // 0x340
	FVector CurrentOffset; // 0x348
	FQuat DesiredWeaponOrientation; // 0x360
	float DesiredFOV; // 0x370
	float MinFov; // 0x374
	float MaxFov; // 0x378
	float CameraDistance; // 0x37c
	float MaxWeaponRotateSpeed; // 0x380
	float WeaponRotateDampingAngle; // 0x384
	float MaxCameraPanSpeed; // 0x388
	float CameraPanDampingThreshold; // 0x38c
	float MaxZoom; // 0x390
	float MaxCameraZoomSpeed; // 0x394
	float CameraZoomDampingThreshold; // 0x398
	float MaxCameraRotateSpeed; // 0x39c
	float CameraRotateDampingAngle; // 0x3a0
	bool AuthoredCamera; // 0x3a4
	bool SelfLevelWeapon; // 0x3a5
	float SelfLevelSpeed; // 0x3a8
	FVector WeaponBasePosition; // 0x3ac
	float WeaponScale; // 0x3b8
	FShowcaseParameters DefaultSettings; // 0x3bc
	TMap<EWeaponType, FShowcaseParameters> WeaponSettings; // 0x3d0
	USceneCaptureComponent2D* CameraComponent; // 0x420
	USkeletalMeshComponent* BARMeshComponent; // 0x428
	USkeletalMeshComponent* Colt1911MeshComponent; // 0x430
	USkeletalMeshComponent* Gewer43MeshComponent; // 0x438
	USkeletalMeshComponent* Kar98KMeshComponent; // 0x440
	USkeletalMeshComponent* Kar98KScopedMeshComponent; // 0x448
	USkeletalMeshComponent* LugerMeshComponent; // 0x450
	USkeletalMeshComponent* M1CarbineMeshComponent; // 0x458
	USkeletalMeshComponent* M1GarandMeshComponent; // 0x460
	USkeletalMeshComponent* MP40MeshComponent; // 0x468
	USkeletalMeshComponent* SpringfieldScopedMeshComponent; // 0x470
	USkeletalMeshComponent* STG44MeshComponent; // 0x478
	USkeletalMeshComponent* KnifeMeshComponent; // 0x480
	USkeletalMeshComponent* ThompsonMeshComponent; // 0x488
	USkeletalMeshComponent* Winchester1897MeshComponent; // 0x490
	USkeletalMeshComponent* GreaseGunMeshComponent; // 0x498
	USkeletalMeshComponent* MP28MeshComponent; // 0x4a0
	USkeletalMeshComponent* PPSH41MeshComponent; // 0x4a8
	USkeletalMeshComponent* MosinNagantMeshComponent; // 0x4b0
	USkeletalMeshComponent* ScopedMosinNagantMeshComponent; // 0x4b8
	USkeletalMeshComponent* Baikal21MeshComponent; // 0x4c0
	USkeletalMeshComponent* FedorovAvtomatMeshComponent; // 0x4c8
	USkeletalMeshComponent* SVT40MeshComponent; // 0x4d0
	USkeletalMeshComponent* TT33MeshComponent; // 0x4d8
	USkeletalMeshComponent* PPS43MeshComponent; // 0x4e0
	USkeletalMeshComponent* RevolverMeshComponent; // 0x4e8
	USkeletalMeshComponent* BritishThompsonMeshComponent; // 0x4f0
	USkeletalMeshComponent* JungleCarbineMeshComponent; // 0x4f8
	USkeletalMeshComponent* LewisGunMeshComponent; // 0x500
	USkeletalMeshComponent* EnfieldMeshComponent; // 0x508
	USkeletalMeshComponent* Enfield_ScopedMeshComponent; // 0x510
	USkeletalMeshComponent* StenMeshComponent; // 0x518
	UAnimSequence* CurrentAnimSequence; // 0x520
};

struct UNUIBombGameOverviewAvatar {
	ABombPlayerState* PlayerState; // 0x280
	bool AknowledgePlayerAliveState; // 0x288
	ESlateVisibility BorderVisibility; // 0x289
	ESlateVisibility ReadyVisibility; // 0x28a
	FLinearColor BorderColor; // 0x28c
};

struct UMaterialExpressionMaterialProxyReplace {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UKantanCategoryChart {
	bool bAutoPerCategoryStyles; // 0x158
	UKantanCategoryStyleSet* CategoryStyleSet; // 0x160
	TArray<FCategoryStyleManualMapping> ManualStyleMappings; // 0x168
};

struct UNUIMainMenu {
	bool IsInitialEntry; // 0x291
};

struct UMaterialExpressionSphericalParticleOpacity {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct UAkXSXInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x88
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xb8
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

struct UAkMediaAssetData {
	bool IsStreamed; // 0x28
	bool UseDeviceMemory; // 0x29
};

struct UMedal25BombFFA {
	AFFAGameMode* FFAGameMode; // 0x48
};

struct UABP_UNDCKnife_TP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x350
};

struct UMovieSceneGeometryCacheTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UWBP_KillRunGameOverview_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* Chromatic_Fire_Shift_01; // 0x2f8
	UWidgetAnimation* Timer_Countdown; // 0x300
	UWidgetAnimation* Glitch; // 0x308
	UImage* Image; // 0x310
	UImage* Image_2; // 0x318
	UImage* Image_144; // 0x320
	UImage* Image_390; // 0x328
	UTextBlock* TextBlock_JumperCheckpointCount; // 0x330
	UTextBlock* TextBlock_JumperRespawnCount; // 0x338
	UTextBlock* TextBlock_JumperTimer; // 0x340
	UTextBlock* TextBlock_JumperTimer_2; // 0x348
	UTextBlock* TextBlock_JumperTimer_3; // 0x350
	UTextBlock* TextBlock_JumperTimer_4; // 0x358
	UTextBlock* TextBlock_JumperTimer_5; // 0x360
};

struct UPromodFireUpDataAsset {
	FFireUpData FireUpData; // 0x30
	AFireUpAction* FireUpActionClass; // 0x128
};

struct UMaterialFunctionInterface {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
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

struct UInterpFilter {
	FString Caption; // 0x28
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

struct UMotoSynthSource {
	bool bConvertTo8Bit; // 0x28
	float DownSampleFactor; // 0x2c
	FRuntimeFloatCurve RPMCurve; // 0x30
	TArray<float> SourceData; // 0xb8
	TArray<int16_t> SourceDataPCM; // 0xc8
	int32_t SourceSampleRate; // 0xd8
	TArray<FGrainTableEntry> GrainTable; // 0xe0
};

struct UWBP_CompletionFeedbackButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* UNHOVER; // 0x268
	UWidgetAnimation* HOVER; // 0x270
	UImage* FeedbackBackground; // 0x278
	UImage* FeedbackFace; // 0x280
	UTextBlock* FeedbackText; // 0x288
	UButton* SelectButton; // 0x290
	FMulticastInlineDelegate FeedbackEventDispatcher; // 0x298
	UTexture2D* BackgroundTexture; // 0x2a8
	UTexture2D* FaceTexture; // 0x2b0
	FString FeedbackNameText; // 0x2b8
	FLinearColor BackgroundCol; // 0x2c8
	FLinearColor FaceCol; // 0x2d8
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
	AWorldSettings* WorldSettings; // 0x258
	TArray<UAssetUserData*> AssetUserData; // 0x268
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x288
};

struct UMapPackManager {
	FString GameModeName; // 0x30
	TArray<UMainMenuLevelSelectMapDataAsset*> MapPacks; // 0x40
	UMainMenuLevelSelectMapDataAsset* TutorialMapsDataAsset; // 0x50
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

struct UGeometryCollectionCache {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UPlatformInterfaceWebResponse {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UMovieSceneAudioTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x80
};

struct UABP_AK74u_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct UBlueprintCore {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct AGameState {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
};

struct UDatasmithStaticMeshGLTFImportData {
	FString SourceMeshName; // 0x28
};

struct UMedalLastMinuteHero {
	ATDMGameMode* TDMGameMode; // 0x48
	TArray<FLastMinuteKillTracker> KillTrackers; // 0x50
};

struct AMapEditorController {
	UDataTable* MapEditorObjectsDataTable; // 0x570
	TMap<EMapEditorTransformMode, FMapEditorTransformSnapSettings> TransformSnapSettings; // 0x578
	EMapEditorTransformMode TransformMode; // 0x5c8
	EMapEditorTransformSpace TransformSpace; // 0x5c9
	FMulticastInlineDelegate OnTransformModeUpdated; // 0x5d0
	FMulticastInlineDelegate OnTransformSpaceUpdated; // 0x5e0
	FMulticastInlineDelegate OnBuildFinished; // 0x5f0
	APlayerController* OriginalControllerRef; // 0x600
	UPlayer* OriginalPlayer; // 0x608
	AMapEditorPawn* MapEditorPawn; // 0x610
};

struct UTextureRenderTarget2D {
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

struct UMaterialExpressionLinearInterpolate {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct UTextureRenderTarget {
	float TargetGamma; // 0xd8
};

struct ACargoGameState {
	int32_t FirstTeamCheckpoint; // 0x610
	int32_t FirstTeamPip; // 0x614
	AMonorail* CargoActor; // 0x618
	ATugOfWarMonorail* TugOfWarActor; // 0x620
	TArray<ACargoSafeZone*> SafeZones; // 0x628
	FMulticastInlineDelegate OnCargoReplicated; // 0x648
	bool bAllowOvertime; // 0x658
	float TotalGracePeriod; // 0x65c
	float MinimumGracePeriod; // 0x660
	float CurrentMaxGracePeriod; // 0x664
	float CurrentGracePeriod; // 0x668
	bool bHasDoneFirstOvertimeCheck; // 0x66c
	bool bHasDoneFirstShootoutOvertimeCheck; // 0x66d
	int32_t CurrentCheckpoint; // 0x670
	bool bUseTugOfWar; // 0x674
	float CargoVictoryTime; // 0x678
	float TugOfWarIdleTime; // 0x67c
	float TugOfWarTime; // 0x680
	float TugOfWarTime_SuddenDeath; // 0x684
	bool bIsInSuddenDeath; // 0x688
	float TugOfWarSuddenDeathWinPercentage; // 0x68c
	bool bTickGracePeriod; // 0x6a0
	bool bTickRechargeGracePeriod; // 0x6a1
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

struct UHUDPlayerName {
	FString NameToShow; // 0x260
	ESlateVisibility CrossPlayGlobeVisiblity; // 0x270
	float Health; // 0x274
	FVector2D Location; // 0x278
	UTextBlock* Text; // 0x280
	UCanvasPanel* SpectatorCanvas; // 0x288
	ABattalionCharacter* LinkedCharacter; // 0x290
	APawn* PlayerPawn; // 0x298
	UCurveFloat* DistanceScalarCurve; // 0x2a0
	UCurveFloat* DistanceQualityCurve; // 0x2a8
	bool bEnemy; // 0x2b1
};

struct UEnvQueryGenerator {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UMovieSceneCameraShakeSourceTriggerSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct UMaterialExpressionDDY {
	FExpressionInput Value; // 0x40
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

struct UNavCollision {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct USettingSlider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* ButtonContainer; // 0x268
	UEditableText* EditableTextField; // 0x270
	USlider* SliderMain; // 0x278
	FMulticastInlineDelegate OnValueChanged; // 0x280
	bool PreviousHasFocus; // 0x290
	float CurrentMultiplier; // 0x294
	float Duration; // 0x298
	FDateTime PreviousPressedStartTime; // 0x2a0
	FDateTime PressedStartTime; // 0x2a8
	bool IsEnabled; // 0x2b0
	FMulticastInlineDelegate OnManualSliderValueCommitted; // 0x2b8
};

struct UJumper_LevelSelect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UTextBlock* MapPackNameText; // 0x280
	UTextBlock* MapPackTitle; // 0x288
	UWidgetSwitcher* MapPageSwitcher; // 0x290
	ULevelSelect-Arrow-button-Promod_C* NextPageButton; // 0x298
	ULevelSelect-Arrow-button-Promod_C* PrevPageButton; // 0x2a0
	UVerticalBox* VerticalBox_53; // 0x2a8
	int32_t MaxRows; // 0x2b0
	int32_t MaxColumns; // 0x2b4
	int32_t CurrentRow; // 0x2b8
	int32_t CurrentColumn; // 0x2bc
	TArray<FString> StatNamesToRequest; // 0x2c0
	TArray<UJumper_LevelSelectBox_C*> AllLevelSelectBoxes; // 0x2d0
	int32_t MapPackIndex; // 0x2e0
	bool bIsHovered; // 0x2e4
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

struct UWBP_JumperTipIntro_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Show; // 0x268
	UImage* Image; // 0x270
	UImage* Image_2; // 0x278
	UImage* Image_3; // 0x280
	UImage* Image_131; // 0x288
	UImage* Image_249; // 0x290
	UImage* Image_365; // 0x298
	UImage* IMG_Topbar; // 0x2a0
	UPlatformKeyImage_C* Key_LoadPos; // 0x2a8
	UPlatformKeyImage_C* KEY_Reset; // 0x2b0
	UPlatformKeyImage_C* Key_SavePos; // 0x2b8
	USizeBox* SB_SetPos; // 0x2c0
	UVerticalBox* VB_LoadPos; // 0x2c8
	UVerticalBox* VB_SavePos; // 0x2d0
	bool ShowGizmoOptions; // 0x2d8
};

struct UWBP_HardpointZoneList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HorizontalBox_61; // 0x268
	TArray<UWBP_HardpointZoneListEntry_C*> HardpointZoneEntries; // 0x270
	TArray<int32_t> ZonesIndex; // 0x280
	TArray<int32_t> SortedZonesIndex; // 0x290
	TArray<AHardpointZone*> HardpointZones; // 0x2a0
	UWBP_HardpointZoneListEntry_C* ActiveZone; // 0x2b0
	int32_t ZoneIndex; // 0x2b8
	int32_t MaxAmountOfZones; // 0x2bc
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

struct UAutoDestroySubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38
};

struct USubmixEffectMultibandCompressorPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
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

struct UDialogueWave {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UMovieSceneCinematicShotSection {
	FString ShotDisplayName; // 0x160
	FText DisplayName; // 0x170
};

struct UInterpTrackInstFloatProp {
	float ResetFloat; // 0x58
};

struct UInterpTrackInstSound {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct USoundNodeDialoguePlayer {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct UJumperMapPackManager {
	TArray<UMainMenuLevelSelectMapDataAsset*> MapPacks; // 0x30
	UMainMenuLevelSelectMapDataAsset* TutorialMapsDataAsset; // 0x40
};

struct AOneInTheChamberHUD {
	UNUIOneInTheChamberLivesLeft* OINTLivesLeft; // 0x628
	UNUIOneInTheChamberLivesLeft* OINTLivesLeftClass; // 0x630
};

struct UMaterialExpressionLandscapeLayerCoords {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UGameplayTask_TimeLimitedExecution {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
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

struct UMaterialExpressionSaturate {
	FExpressionInput Input; // 0x40
};

struct UPlayFabAuthenticationContext {
	FString ClientSessionTicket; // 0x28
	FString EntityToken; // 0x38
	FString DeveloperSecretKey; // 0x48
	FString PlayFabId; // 0x58
};

struct UJumper_LevelSelectPage_C {
	UUniformGridPanel* MapSelectGrid; // 0x260
	UHorizontalBox* StarsCountHorizontalBox; // 0x268
	UTextBlock* StarsCountText; // 0x270
	UImage* StarsImage; // 0x278
	int32_t CurrentColumn; // 0x280
	int32_t CurrentRow; // 0x284
	TArray<UJumper_LevelSelectBox_C*> AllLevelSelectBoxes; // 0x288
	int32_t MaxColumns; // 0x298
	UMapPackManager* Map Pack Manager; // 0x2a0
	int32_t CurrentStarCount; // 0x2a8
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

struct UMaterialExpressionStaticBoolParameter {
	char DefaultValue : 1; // 0x58
};

struct AAkSpatialAudioVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258
	UAkLateReverbComponent* LateReverb; // 0x260
	UAkRoomComponent* Room; // 0x268
};

struct UWBP_RespawnTimer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* RespawnTimer; // 0x268
	float RespawnTime; // 0x270
	bool CurrentlyVisible; // 0x274
	bool FirstSpawn; // 0x275
};

struct UParticleModuleEventReceiverKillParticles {
	char bStopSpawning : 1; // 0x40
};

struct UArrowComponent {
	FColor ArrowColor; // 0x440
	float ArrowSize; // 0x444
	float ArrowLength; // 0x448
	float ScreenSize; // 0x44c
	char bIsScreenSizeScaled : 1; // 0x450
	char bTreatAsASprite : 1; // 0x450
};

struct UAkInitBankAssetData {
	TArray<FAkPluginInfo> PluginInfos; // 0x90
};

struct UWBP_ModKitWeaponButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* BorderBottom; // 0x268
	UImage* BorderLeft; // 0x270
	UImage* BorderRight; // 0x278
	UImage* BorderTop; // 0x280
	UButton* Btn_NextModKit; // 0x288
	UButton* Btn_PrevModKit; // 0x290
	UScaleBox* ButtonScaleBox; // 0x298
	USpacer* ButtonSpacer; // 0x2a0
	UImage* ClassImage; // 0x2a8
	UButton* ClassSelectButton; // 0x2b0
	UHorizontalBox* HorBox_BottomBar; // 0x2b8
	UImage* Img_NextModKitArrow; // 0x2c0
	UImage* Img_PrevModKitArrow; // 0x2c8
	int32_t CurrentModKitIndex; // 0x2d0
	TArray<UTexture2D*> ModKitImages; // 0x2d8
	TArray<FText> ModKitNames; // 0x2e8
	TArray<EParentModKit> ParentModKits; // 0x2f8
	TArray<EWeaponArchetype> WeaponArchetype; // 0x308
	float BorderSize; // 0x318
	float ButtonScale; // 0x31c
	float SpacerSize; // 0x320
	float RightAndBottomPadding; // 0x324
};

struct USoundAttenuation {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UInterpTrackInstParticleReplay {
	float LastUpdatePosition; // 0x28
};

struct UNiagaraDataInterfaceGrid3DCollection {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat BufferFormat; // 0x128
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

struct UParticleModuleEventGenerator {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct ATugOfWarMonorail {
	ATugOfWarMonorailPath* SelectedPath_TugOfWar; // 0x2d0
	FRotator MonorailRotation; // 0x2d8
	int32_t MonorailMovementScale; // 0x2e4
	float CurrentAttackerReEnableTimer; // 0x2e8
	float CurrentDefenderSwapEnableTimer; // 0x2ec
	int32_t CurrentPayloadAllegiance; // 0x2f0
};

struct UAkAndroidInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UAkMediaAsset {
	uint32_t ID; // 0x28
	TArray<UObject*> UserData; // 0x30
	UAkMediaAssetData* CurrentMediaAssetData; // 0x40
};

struct UWBP_LoadoutItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_FlashLocked; // 0x268
	UButton* BTN_Main; // 0x270
	UImage* IMG_EquipmentIcon; // 0x278
	UImage* IMG_FireupIcon; // 0x280
	UImage* IMG_FireupShield; // 0x288
	UImage* IMG_LargeBorder; // 0x290
	UImage* IMG_Locked; // 0x298
	UImage* IMG_MediumBorder; // 0x2a0
	UImage* IMG_MediumIcon; // 0x2a8
	UImage* IMG_SmallBorder; // 0x2b0
	UImage* IMG_WeaponIcon; // 0x2b8
	UWidgetSwitcher* WS_ItemTypeBorder; // 0x2c0
	UWidgetSwitcher* WS_LargeImageType; // 0x2c8
	FMulticastInlineDelegate OnItemSelected; // 0x2d0
	bool Selected; // 0x2e0
	bool Hovered; // 0x2e1
	ELoadoutItem LoadoutType; // 0x2e2
	FFLoadoutItemData ItemData; // 0x2e8
	FMulticastInlineDelegate OnItemHovered; // 0x438
	FLoadoutData OwningLoadout; // 0x448
};

struct USoundEffectSourcePresetChain {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct UHUDGrenadeIcon {
	UGrenadeMarker* Marker; // 0x260
	FVector2D Position; // 0x268
	float RotationAngle; // 0x270
	ABeacon* Beacon; // 0x278
	float Scale; // 0x280
	FVector2D ScaledPosition; // 0x284
	FVector2D NormalisedPosition; // 0x28c
};

struct UMedalShutdown {
	AWartideGameMode* WartideGameMode; // 0x48
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

struct UDistributionVectorConstant {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct ULevelSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct ANavigationData {
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

struct UOnlineEngineInterfaceImpl {
	FName VoiceSubsystemNameOverride; // 0x28
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

struct UEditableMesh {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UMapRendererComponent {
	FMulticastInlineDelegate OnMapClicked; // 0xb0
	EMapViewSearchOption AutoLocateMapView; // 0xc0
	bool bIsCircular; // 0xc1
	bool bIsRendered; // 0xc2
	bool bDrawFrustum; // 0xc3
	float FrustumFloorDistance; // 0xc4
	FLinearColor BackgroundFillColor; // 0xc8
	EHorizontalAlignment HorizontalAlignment; // 0xd8
	EVerticalAlignment VerticalAlignment; // 0xd9
	FMargin Margin; // 0xdc
	FVector2D Size; // 0xec
	UMaterialInterface* FillMaterial; // 0xf8
	UMaterialInstanceDynamic* FillMaterialInstance; // 0x100
	UMapTrackerComponent* MapTracker; // 0x108
	UMapViewComponent* MapView; // 0x110
	TSet<UMapIconComponent*> HoveringIcons; // 0x118
	TArray<UMapIconComponent*> BufferedHoverStartEvents; // 0x168
	TArray<UMapIconComponent*> BufferedHoverEndEvents; // 0x178
	UCanvas* LastCanvas; // 0x188
};

struct UMaterialExpressionShadowReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct AAkSplineAmbientSound {
	USplineComponent* AmbientSoundSpline; // 0x260
	bool bStayStill; // 0x268
	bool bDrawDebug; // 0x269
};

struct UAkAssetPlatformData {
	UAkAssetData* CurrentAssetData; // 0x28
};

struct UMaterialExpressionDesaturation {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct USkinDataAsset {
	TArray<FSkinEntity> skins; // 0x30
	URarityColourDataAsset* RarityColoursDataAsset; // 0x40
};

struct AWorldCollapse {
	EWorldCollapseType WorldCollapseType; // 0x220
};

struct UWBP_CargoSingleTeamProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* 3_TimeToBeatText; // 0x268
	UTextBlock* 4_TimeToBeatTimeText; // 0x270
	USpacer* CenterProgressBarSpacer; // 0x278
	UHorizontalBox* HB_ProgressOverview; // 0x280
	UImage* IMG_End; // 0x288
	UImage* IMG_Initial; // 0x290
	UImage* IMG_NonEnd; // 0x298
	UImage* IMG_ProgressBackground; // 0x2a0
	UImage* IMG_Push1; // 0x2a8
	UImage* IMG_Push2; // 0x2b0
	UImage* IMG_Push3; // 0x2b8
	UTextBlock* ProgressText; // 0x2c0
	UImage* SpeedStateBackgroundImage; // 0x2c8
	UScaleBox* TeamContainer; // 0x2d0
	UWBP_CargoProgress_C* TeamProgress; // 0x2d8
	UVerticalBox* TimeToBeatContainer; // 0x2e0
	UWidgetSwitcher* WS_CargoSpeedState; // 0x2e8
	ACargoGameState* CargoGameState; // 0x2f0
	float Progress; // 0x2f8
	float Time; // 0x2fc
	float CurrentTime; // 0x300
	bool bTickAnimation; // 0x304
	UHUDTextDataAsset* HUDColour; // 0x308
	bool bCenter; // 0x310
	FText TimeText; // 0x318
	bool bMyProgress; // 0x330
	float CurrentProgress; // 0x334
};

struct UMaterialExpressionConstant2Vector {
	float R; // 0x40
	float G; // 0x44
};

struct AStaticSpectatorCameraActor {
	int32_t CameraID; // 0x7a0
	FName Name; // 0x7a4
};

struct UMovieSceneObjectPropertyTrack {
	UObject* PropertyClass; // 0xb0
};

struct USourceEffectEQPreset {
	FSourceEffectEQSettings Settings; // 0xa0
};

struct ABattalionSpectatorPawn {
	ABattalionPlayerControllerGMBase* OwnerPC; // 0x310
	ABattalionPlayerControllerGMBase* CurrentlyspectatingPC; // 0x318
	ABattalionCharacter* CurrentlySpectating; // 0x320
	APlayerState* CurrentlySpectatingPS; // 0x328
	ABattalionGrenade* ViewedGrenade; // 0x330
	ESpectatorCameraMode CameraMode; // 0x358
	bool bOutlinesEnabled; // 0x35a
	bool bGrenadeLinesEnabled; // 0x35b
	bool bActionCamera; // 0x35c
	UPostProcessComponent* OutlinePostProcess; // 0x360
	UPostProcessComponent* SnapshotPostProcess; // 0x368
	UPostProcessComponent* FlashPostProcess; // 0x370
	UParticleSystem* GrenadeLineRed; // 0x378
	UParticleSystem* GrenadeLineGreen; // 0x380
	UParticleSystem* GrenadeLineYellow; // 0x388
	TArray<AActor*> StaticCameras; // 0x3c8
	ADOMMode_Zone* CurrentDOMZone; // 0x3f0
	USphereComponent* Sphere; // 0x408
	TArray<FVector> CamPathCachedCamLocs; // 0x428
	TArray<FRotator> CamPathCachedCamRots; // 0x438
	TArray<AActor*> CamPathCameras; // 0x448
	AActor* CamPathFocusActor; // 0x458
	ACamPathSplineActor* CamPathSpline; // 0x460
	float CamPathCurrentTime; // 0x468
	float CamPathTotalTime; // 0x46c
	bool bCamPathPlaying; // 0x470
	UBattalionGameInstance* BattInstance; // 0x478
	UBattalionSettings* BattSettings; // 0x480
	ADebugCameraController* DebugCameraController; // 0x488
};

struct UNUIScoreboardGroup {
	FText GroupName; // 0x278
	FText MemberCountText; // 0x290
	FLinearColor GroupColor; // 0x2a8
	UNUIScoreboard* ParentWidget; // 0x2b8
	ESlateVisibility GroupHeaderVisibility; // 0x2c0
	ESlateVisibility PlayerCountVisibility; // 0x2c1
	bool bMemberListChanged; // 0x2c2
	bool bScoreboardLock; // 0x2c3
	TArray<UNUIScoreboardRow*> MemberWidgets; // 0x2c8
	UNUIScoreboardRow* MemberWidgetClass; // 0x2d8
};

struct UMaterialExpressionParameter {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UPawnAction_Sequence {
	TArray<UPawnAction*> ActionSequence; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
	UPawnAction* RecentActionCopy; // 0xb0
};

struct UParticleModuleVelocityCone {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UMaterialExpressionParticleSubUV {
	char bBlend : 1; // 0x60
};

struct AMapEditorObject_Checkpoint {
	AJumperCourse* CourseClass; // 0x318
	int32_t ObjectValue_CheckpointIndex; // 0x320
};

struct USignificanceManager {
	FSoftClassPath SignificanceManagerClassName; // 0x108
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

struct UProxyLODMeshSimplificationSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct UMaterialExpressionCosine {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UABP_AK47_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x470
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4f0
};

struct UKillrunLevelStarsSaveData {
	TMap<FString, int32_t> LevelToStarsMap; // 0x50
};

struct UProgressWidgetStyle {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
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

struct UBattalionVideosDataAsset {
	TArray<FBattalionVideoDataEntity> Videos; // 0x30
};

struct UEditableTextWidgetStyle {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UPromodCameraModifier {
	float SmoothMaxLeanFrac; // 0x4c
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

struct UPlayFabRuntimeSettings {
	FString ProductionEnvironmentURL; // 0x28
	FString TitleId; // 0x38
	FString DeveloperSecretKey; // 0x48
};

struct UPaperTileMapComponent {
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

struct UBTTask_PushPawnAction {
	UPawnAction* Action; // 0x70
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

struct UMenu-Button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* ContentHorizontalBox; // 0x268
	UTextBlock* ContentTextBlock; // 0x270
	UImage* NewContentImage; // 0x278
	UButton* RootButton; // 0x280
	FText Text; // 0x288
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
	FLinearColor DefaultTextColor; // 0x2b0
	FLinearColor HoverTextColor; // 0x2c0
	FLinearColor DisabledTextColor; // 0x2d0
	FLinearColor DefaultBackgroundColor; // 0x2e0
	FLinearColor HoverBackgroundColor; // 0x2f0
	FLinearColor DisabledBackgroundColor; // 0x300
	bool StartEnabled; // 0x310
	bool RoundedEdges; // 0x311
	int32_t FontSize; // 0x314
	bool NewNotificationRightAligned; // 0x318
	ETextJustify Justification; // 0x319
	FMargin ContentPadding; // 0x31c
};

struct UMediaSoundComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
};

struct UMovieSceneEventRepeaterSection {
	FMovieSceneEvent Event; // 0xf0
};

struct ABP_DeployableCoverFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	ABP_ThrowableDeployableCover_C* Grenade; // 0x3d0
	UAkComponent* GrenadeAkComp; // 0x3d8
	float GrenadeThrowTime; // 0x3e0
	int32_t OwningTeamNum; // 0x3e4
	float GrenadeThrowAnimEndTime; // 0x3e8
	UNiagaraSystem* System Template; // 0x3f0
	float StunRadius; // 0x3f8
	FRotator CharacterRotation; // 0x3fc
	bool bHit; // 0x408
};

struct UWBP_ShootoutOverview_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x390
	UWBP_WartideOverviewScore_C* WBP_WartideOverviewScore; // 0x398
	TArray<UWBP_PlayerAliveIcon_C*> LeftTeamWidgets; // 0x3a0
	TArray<UWBP_PlayerAliveIcon_C*> RightTeamWidgets; // 0x3b0
	int32_t MissingWidgets; // 0x3c0
	int32_t AlivePlayers_Team0; // 0x3c4
	int32_t AlivePlayers_Team1; // 0x3c8
	UHUDTextDataAsset* HUDColour; // 0x3d0
};

struct UWBP_ProgressBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* CP_Main; // 0x268
	UImage* IMG_ProgressBorder; // 0x270
	UImage* IMG_ProgressMarker; // 0x278
	UInvalidationBox* InvalidationBox_3; // 0x280
	UInvalidationBox* InvalidationBox_ProgressMarker; // 0x288
	UProgressBar* PB_Progress; // 0x290
	float Percent; // 0x298
	FLinearColor FillColor; // 0x29c
	bool bShowProgressMarker; // 0x2ac
	FGeometry My Geometry; // 0x2b0
	bool bShowBorder; // 0x2e8
	FSlateBrush Background Image; // 0x2f0
	FSlateBrush Fill Image; // 0x378
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

struct UMovieSceneMediaSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLooping; // 0xf0
	FFrameNumber StartFrameOffset; // 0xf4
	UMediaTexture* MediaTexture; // 0xf8
	UMediaSoundComponent* MediaSoundComponent; // 0x100
	bool bUseExternalMediaPlayer; // 0x108
	UMediaPlayer* ExternalMediaPlayer; // 0x110
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

struct UNiagaraDataInterfaceArrayFloat3 {
	TArray<FVector> FloatData; // 0x50
};

struct UNavigationInvokerComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct USelectedKitSaveData {
	TMap<EClassName, FLoadoutData> ClassLoadouts; // 0x50
};

struct UNiagaraDataInterfaceVectorField {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UBattalionMapToGMDataAsset {
	TArray<FMapList> Maps; // 0x30
};

struct AControlPointMeshActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
};

struct AMapBackground {
	FMulticastInlineDelegate OnMapBackgroundTextureChanged; // 0x238
	FMulticastInlineDelegate OnMapBackgroundMaterialChanged; // 0x248
	FMulticastInlineDelegate OnMapBackgroundAppearanceChanged; // 0x258
	FMulticastInlineDelegate OnMapBackgroundRendered; // 0x268
	FMulticastInlineDelegate OnMapBackgroundOverlayChanged; // 0x278
	TArray<FMapBackgroundLevel> BackgroundLevels; // 0x288
	UMaterialInterface* BackgroundMaterial_UMG; // 0x298
	UMaterialInterface* BackgroundMaterial_Canvas; // 0x2a0
	bool bBackgroundVisible; // 0x2a8
	int32_t BackgroundPriority; // 0x2ac
	int32_t BackgroundZOrder; // 0x2b0
	int32_t DynamicRenderTargetSize; // 0x2b4
	bool bRenderNavigationMesh; // 0x2b8
	TArray<AActor*> HiddenActorClasses; // 0x2c0
	TArray<AActor*> HiddenActors; // 0x2d0
	TMap<UMapRendererComponent*, UMaterialInstanceDynamic*> MaterialInstances; // 0x2e0
	TArray<UBoxComponent*> LevelVisualizers; // 0x330
	USceneCaptureComponent2D* CaptureComponent2D; // 0x348
	UNavMeshRenderingComponent* NavMeshRenderingComponent; // 0x350
};

struct AMonorailCarriage {
	UStaticMeshComponent* MeshComp; // 0x220
	UBoxComponent* ContestantBox; // 0x228
	UMapIconComponent* MapIconComponent; // 0x230
	FRotator MapIconRotation; // 0x238
	int32_t AmmoAddition; // 0x244
	float AmmoTime; // 0x248
	UDamageType* DamageTypeClass; // 0x250
	bool AreAttackersPresent; // 0x258
	int32_t NumberOfAttackersPresent; // 0x25c
	bool AreDefendersPresent; // 0x260
	bool bIsTeam0Present; // 0x261
	bool bIsTeam1Present; // 0x262
	TArray<APromodCharacter*> AllPresentCharacters; // 0x268
	TArray<ACargoPlayerState*> AllPresentPlayerStates; // 0x278
	TArray<ACargoPlayerState*> PresentAttackingPlayerStates; // 0x288
	TArray<ACargoPlayerState*> PresentDefendingPlayerStates; // 0x298
	TArray<APromodCharacter*> PresentAttackingCharacters; // 0x2a8
	TArray<APromodCharacter*> PresentDefendingCharacters; // 0x2b8
	UWorldMarkerComponent* WorldMarkerComponentEscortAttack; // 0x2c8
	UWorldMarkerComponent* WorldMarkerComponentDisabledRepair; // 0x2d0
	UWorldMarkerComponent* WorldMarkerComponentContested; // 0x2d8
	UWorldMarkerComponent* WorldMarkerComponentDisable; // 0x2e0
	UWorldMarkerComponent* WorldMarkerComponentRepair; // 0x2e8
	UAkComponent* DefaultAkComp; // 0x2f0
	float CargoVelocity; // 0x304
	UAkAudioEvent* StartCheckpointProgressSound; // 0x310
	UAkAudioEvent* StopCheckpointProgressSound; // 0x318
	UAkAudioEvent* UnlockedCheckpointSound; // 0x320
	UAkAudioEvent* StartCargoMovementSound; // 0x328
	UAkAudioEvent* StopCargoMovementSound; // 0x330
	FString DefendLabel; // 0x338
	FString RepairLabel; // 0x348
	FString EscortLabel; // 0x358
	FString DisableLabel; // 0x368
};

struct UAsyncActionLoadPrimaryAssetClassList {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UMovieSceneNiagaraVectorParameterTrack {
	int32_t ChannelsUsed; // 0xb0
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

struct ADOMHUD {
	UNUIDOMScores* DOMScores; // 0x5f8
	UNUIRoundResult* RoundResult; // 0x600
	UNUIBuyScreen* BuyScreen; // 0x608
	UNUIWeaponPrompt* WeaponPrompt; // 0x610
	UNUIDOMScores* DOMScoresClass; // 0x618
	UNUIRoundResult* RoundResultClass; // 0x620
	UNUIBuyScreen* BuyScreenClass; // 0x628
	UNUIWeaponPrompt* WeaponPromptClass; // 0x630
};

struct UWBP_CargoObjectiveProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Show; // 0x268
	UCanvasPanel* CanvasPanel_8; // 0x270
	UTextBlock* TB_UnlockPercent_2; // 0x278
	UTextBlock* TB_UnlockPercent_3; // 0x280
	UWBP_CargoObjectiveProgressBar_C* WBP_CargoObjectiveProgressBar; // 0x288
	UWBP_CargoObjectiveProgressBar_C* WBP_CargoObjectiveProgressBar_2; // 0x290
	UWidgetSwitcher* WidgetSwitcher_50; // 0x298
	ACargoGameState* Cargo Game State; // 0x2a0
	ACargoCheckpoint* Checkpoint Actor; // 0x2a8
	FGeometry My Geometry; // 0x2b0
	bool bObjectiveCompleteShowing; // 0x2e8
};

struct UNUIScoreboard {
	bool bHideTeamsPostMatch; // 0x278
	bool bShowTeamHeaders; // 0x279
	bool bShowTeamNationIcons; // 0x27a
	bool bShowTeamScores; // 0x27b
	bool bShowTeamPlayerCount; // 0x27c
	bool bIncludeSpectators; // 0x27d
	bool bShowSpectatorPlayerCount; // 0x27e
	TArray<UNUIScoreboardTeam*> TeamWidgets; // 0x280
	UNUIScoreboardSpectators* SpectatorsWidget; // 0x290
	UNUIScoreboardTeam* TeamGroupWidgetClass; // 0x298
	UNUIScoreboardSpectators* SpectatorGroupWidgetClass; // 0x2a0
	ESlateVisibility TeamsGroupVisibility; // 0x2a8
	ESlateVisibility FFAVisibility; // 0x2a9
	ESlateVisibility WartideVisibility; // 0x2aa
	ESlateVisibility CTFVisibility; // 0x2ab
	ESlateVisibility DOMVisibility; // 0x2ac
};

struct URestrictedGameplayTagsList {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct UMaterialExpressionMin {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct ULeftRightConfig_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* LeftImage; // 0x268
	UButton* MiddleButton; // 0x270
	UImage* RightImage; // 0x278
	UTextBlock* SettingText; // 0x280
	FMulticastInlineDelegate EventLeft; // 0x288
	FMulticastInlineDelegate EventRight; // 0x298
	bool RightPressed; // 0x2a8
	bool LeftPressed; // 0x2a9
	float RedArrowDuration; // 0x2ac
	bool Enabled; // 0x2b0
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

struct ABattalionSpawnInfluencer {
	USceneComponent* RootSceneComponent; // 0x220
	int32_t TeamToInfluence; // 0x238
	float InfluenceDistance; // 0x23c
	float InfluenceValue; // 0x240
	float InfluenceExponent; // 0x244
	TMap<FString, float> ModeWeights; // 0x248
};

struct USynthComponentMonoWaveTable {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct ABombCarrierTracker {
	AActor* TrackedActor; // 0x220
	int32_t TeamAllegiance; // 0x228
	bool bPingRequested; // 0x22c
	float RequestedPingFrequency; // 0x230
	ETeamVisibility TeamVisibility; // 0x234
};

struct UEnvQueryTest_Trace {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct UDefaultLevelSequenceInstanceData {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
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
	char bMultiView : 1; // 0xcc
	char bMobilePostProcessing : 1; // 0xcc
	char bMobileMultiView : 1; // 0xcc
	char bMobileUseHWsRGBEncoding : 1; // 0xcc
	char bRoundRobinOcclusion : 1; // 0xcc
	char bODSCapture : 1; // 0xcc
	char bMeshStreaming : 1; // 0xcd
	float WireframeCullThreshold; // 0xd0
	char bEnableRayTracing : 1; // 0xd4
	char bEnableRayTracingTextureLOD : 1; // 0xd4
	char bSupportStationarySkylight : 1; // 0xd4
	char bSupportLowQualityLightmaps : 1; // 0xd4
	char bSupportPointLightWholeSceneShadows : 1; // 0xd4
	char bSupportAtmosphericFog : 1; // 0xd4
	char bSupportSkyAtmosphere : 1; // 0xd4
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd4
	char bSupportSkinCacheShaders : 1; // 0xd5
	ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xd8
	float SkinCacheSceneMemoryLimitInMB; // 0xdc
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe0
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe0
	char bMobileAllowDistanceFieldShadows : 1; // 0xe0
	char bMobileAllowMovableDirectionalLights : 1; // 0xe0
	uint32_t MobileNumDynamicPointLights; // 0xe4
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xe8
	char bMobileAllowMovableSpotlights : 1; // 0xe8
	char bMobileAllowMovableSpotlightShadows : 1; // 0xe8
	char bSupport16BitBoneIndex : 1; // 0xe8
	char bGPUSkinLimit2BoneInfluences : 1; // 0xe8
	char bSupportDepthOnlyIndexBuffers : 1; // 0xe8
	char bSupportReversedIndexBuffers : 1; // 0xe8
	char bLPV : 1; // 0xe8
	char bMobileAmbientOcclusion : 1; // 0xe9
	char bUseUnlimitedBoneInfluences : 1; // 0xe9
	int32_t UnlimitedBonInfluencesThreshold; // 0xec
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf0
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0xf1
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0xf2
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0xf8
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x110
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x128
};

struct UBTDecorator_Cooldown {
	float CooldownTime; // 0x68
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

struct ADOMMode_ZoneLocation {
	FString ZoneName; // 0x220
	FDOMMode_ZoneProperties ZoneProperties; // 0x230
	USphereComponent* RadiusHelper; // 0x240
};

struct UHapticFeedbackEffect_Buffer {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct UMaterialExpressionArccosine {
	FExpressionInput Input; // 0x40
};

struct APromodBotController {
	UPromodBotSMInstance* StateMachineInstance; // 0x328
};

struct UWidgetAnimationDelegateBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct UCustomIpNetDriver {
	int32_t Counter; // 0x7b8
};

struct UNUIWartideRoundResult {
	FText ResultText; // 0x278
	FText ReasonText; // 0x290
	FLinearColor ResultColor; // 0x2a8
	FLinearColor ResultTextColor; // 0x2b8
	float RoundEndTokensWidgetWidth; // 0x2c8
	float RoundEndTokensWidgetTop; // 0x2cc
	bool Spectating; // 0x2d0
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
	char bNoTiling : 1; // 0x85
	char VirtualTextureStreaming : 1; // 0x85
	char CompressionYCoCg : 1; // 0x85
	char bNotOfflineProcessed : 1; // 0x85
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
	TArray<UAssetUserData*> AssetUserData; // 0x88
};

struct UInterpTrackFade {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct UNiagaraPreviewAxis_InterpParamLinearColor {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct UARBasicLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UMovieSceneSlomoSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UModularSynthPresetBank {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct UNamedInterfaces {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UMedalHQAttacker {
	AHQGameMode* HQGameMode; // 0x48
};

struct UMovieSceneByteSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct ATUTPlayerController {
	bool bHasDied; // 0xc00
	ABattalionWeapon* PrimaryKilledWith; // 0xc08
	ABattalionWeapon* SecondaryKilledWith; // 0xc10
	ABattalionWeapon* MeleeKilledWith; // 0xc18
	TArray<EGrenadeType> GrenadesKilledWith; // 0xc20
	TArray<ESpecialGrenadeType> SpecialGrenadesKilledWith; // 0xc30
};

struct APlayerStart {
	FName PlayerStartTag; // 0x248
};

struct UForceFeedbackEffect {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct UMovieSceneTrackInstanceSystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct URig {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UAkWwiseTree {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
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

struct UMediaTimeStampInfo {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UNUIDamageIndicator {
	float EffectMultiplier; // 0x290
};

struct UWBP_CargoCheckpointPip_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_Colour; // 0x268
	USizeBox* SizeBox; // 0x270
	int32_t CheckpointPipIdx; // 0x278
	int32_t MaxCheckpointPips; // 0x27c
};

struct UWBP_LoadoutListItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* FavouriteImage; // 0x268
	UTextButton_C* LoadoutNameButton; // 0x270
	FMulticastInlineDelegate ButtonClicked; // 0x278
};

struct UPlayFabDataAPI {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xf8
	UPlayFabJsonObject* RequestJsonObj; // 0x100
	UPlayFabJsonObject* ResponseJsonObj; // 0x108
};

struct UPromodSaveData {
	FString PlayerName; // 0x28
	FString SaveSlotName; // 0x38
	uint32_t SaveSlotIndex; // 0x48
	uint32_t Version; // 0x4c
};

struct UMaterialExpressionFloor {
	FExpressionInput Input; // 0x40
};

struct UMinimapInternal_BoxSelect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	FVector2D BoxMin; // 0x268
	FVector2D BoxMax; // 0x270
	FGeometry MapGeo; // 0x278
	FMulticastInlineDelegate OnBoxSelect; // 0x2b0
	FVector2D StartPos; // 0x2c0
	FVector2D StartOffset; // 0x2c8
	bool IsLeftMouseButton; // 0x2d0
	bool IsShiftSelect; // 0x2d1
	bool IsCtrlSelect; // 0x2d2
	FLinearColor BoxSelectColor; // 0x2d4
};

struct UWBP_SndGameoverviewWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x390
	UWidgetAnimation* FadeBombSecuredIn; // 0x398
	UWidgetAnimation* FadeLastStandingIn; // 0x3a0
	UImage* BombSecured; // 0x3a8
	UImage* LastPlayerStanding; // 0x3b0
	UTextBlock* NotReady; // 0x3b8
	UPlatformKeyImage_C* PlatformKeyImage; // 0x3c0
	UTextBlock* PlayerList; // 0x3c8
	UCanvasPanel* PlayerListBox; // 0x3d0
	UTextBlock* PressOrHoldTextBox; // 0x3d8
	UHorizontalBox* ReadyupBox; // 0x3e0
	UScaleBox* ScaleBox_2; // 0x3e8
	USpacer* Spacer_3; // 0x3f0
	USpacer* Spacer_291; // 0x3f8
	UTextBlock* TextBlock_4; // 0x400
	UTextBlock* Timer; // 0x408
	UTextBlock* ToReadyUp; // 0x410
	UVerticalBox* VerticalBox_150; // 0x418
	UVerticalBox* WaitingBox; // 0x420
	UTextBlock* WaitingText; // 0x428
	UWBP_WartideOverviewScore_C* WBP_WartideOverviewScore; // 0x430
	TArray<UWBP_PlayerAliveIcon_C*> LeftTeamWidgets; // 0x438
	TArray<UWBP_PlayerAliveIcon_C*> RightTeamWidgets; // 0x448
	int32_t MissingWidgets; // 0x458
	int32_t AlivePlayers_Team0; // 0x45c
	int32_t AlivePlayers_Team1; // 0x460
	bool bIsShootout; // 0x464
	UHUDTextDataAsset* HUDColour; // 0x468
	bool bBombPlanted; // 0x470
	ABombMode_Bomb* Bomb; // 0x478
	ABombGameState* BombGameState; // 0x480
	EBombZoneWorldMarkerState PlayerSide; // 0x488
	bool bBombPickedUpQueued; // 0x489
	bool bHasBomb; // 0x48a
};

struct AMapEditorObject {
	FMulticastInlineDelegate OnStartedDragAction; // 0x220
	FMulticastInlineDelegate OnEndedDragAction; // 0x230
	FMulticastInlineDelegate OnObjectDetailsUpdated; // 0x240
	UStaticMeshComponent* MeshComponent; // 0x250
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x258
	UChildActorComponent* ChildActorComponent; // 0x260
	bool bIsScalable; // 0x268
	FMapEditorObjectData ObjectData; // 0x270
	bool bSelected; // 0x310
};

struct UVOIPTalker {
	FVoiceSettings Settings; // 0xb0
};

struct UCheatCodeManager {
	int32_t BufferSize; // 0x78
	TArray<uint16_t> Buffer; // 0x80
};

struct UBattalionCharacterMovementBase {
	EStanceType WantedStance; // 0xb00
	ALadder* LadderClimbing; // 0xb08
	bool ProneBlocked; // 0xb10
	bool LeftProneBlocked; // 0xb11
	bool RightProneBlocked; // 0xb12
	float MaxSprintEnergy; // 0xb14
	float SprintEnergyRequiredForRun; // 0xb18
	float InfectionSpeedModfier; // 0xb1c
};

struct UDatasmithCineCameraActorTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct USourceEffectWaveShaperPreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct UNiagaraDataInterfaceVector2DCurve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
};

struct UNUIWelcomeScreen {
	bool PrivacyAccepted; // 0x290
	bool OnPrivacyScreen; // 0x291
	UNUIScreen* PrivacyPrompt; // 0x298
	UWidget* PromptContainer; // 0x2a0
};

struct UParticleModuleLifetime {
	FRawDistributionFloat Lifetime; // 0x30
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
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

struct UPromodGamePadSettingsDataAsset {
	float GamePadDeadzoneHorizontal; // 0x30
	float GamePadDeadzoneVertical; // 0x34
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

struct ABP_PingActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
};

struct UWBP_VoteHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_Show; // 0x268
	UBorder* Border_Background; // 0x270
	UBorder* Border_Main; // 0x278
	UImage* IMG_No; // 0x280
	UImage* IMG_Yes; // 0x288
	UTextBlock* TB_CalledBy; // 0x290
	UTextBlock* TB_NoVotes; // 0x298
	UTextBlock* TB_VoteTitle; // 0x2a0
	UTextBlock* TB_YesVotes; // 0x2a8
	UWBP_ProgressBar_C* WBP_ProgressBar; // 0x2b0
	FVoteData VoteData; // 0x2b8
	float CurrentVoteTime; // 0x2f8
	float In Delta Time; // 0x2fc
};

struct UGizmoWorldAxisSource {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct UHLODProxy {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UComboBoxWidgetStyle {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UWBP_HardpointGameOverview_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b8
	UWidgetAnimation* Anim_Notification; // 0x3c0
	UTextBlock* NotReady; // 0x3c8
	UPlatformKeyImage_C* PlatformKeyImage; // 0x3d0
	UTextBlock* PlayerList; // 0x3d8
	UTextBlock* PressOrHoldTextBox; // 0x3e0
	UHorizontalBox* ReadyupBox; // 0x3e8
	UScaleBox* ScaleBox; // 0x3f0
	USpacer* Spacer_3; // 0x3f8
	USpacer* Spacer_291; // 0x400
	UTextBlock* TextBlock_4; // 0x408
	UTextBlock* Timer; // 0x410
	UTextBlock* ToReadyUp; // 0x418
	UVerticalBox* VerticalBox_1; // 0x420
	UVerticalBox* VerticalBox_150; // 0x428
	UTextBlock* WaitingText; // 0x430
	UWBP_HardpointZoneList_C* WBP_HardpointZoneList; // 0x438
	UWBP_HardpointOverviewScore_C* WBP_OverviewScore; // 0x440
	UWBP_HardpointPlayerIcons_C* WBP_PlayerIcons; // 0x448
	bool bIsShootout; // 0x450
	UHUDTextDataAsset* HUDColour; // 0x458
	ACargoGameState* CargoGameState; // 0x460
	float DramaticCountdownTime; // 0x468
	float MaxScore; // 0x46c
};

struct UWBP_CompleteScreenPB_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* PersonalBest; // 0x268
	UWidgetAnimation* Intro; // 0x270
	UWidgetAnimation* Anim_HighlightStar3; // 0x278
	UWidgetAnimation* Anim_HighlightStar2; // 0x280
	UWidgetAnimation* Anim_HighlightStar1; // 0x288
	UWidgetAnimation* Anim_StampPro; // 0x290
	UBigTimeDisplay_C* BigTimeDisplay; // 0x298
	UImage* BLUR-STREAK; // 0x2a0
	UTextBlock* CompletedText; // 0x2a8
	UTimeDisplay_C* CurrentTimeDisplay; // 0x2b0
	UHeader-Bar-Temp_C* Header-Bar-Temp; // 0x2b8
	UTextBlock* MapNameBox; // 0x2c0
	UTextBlock* MapNameText; // 0x2c8
	UTextBlock* ProText; // 0x2d0
	UTextBlock* SmallPro; // 0x2d8
	UImage* SmallStar1; // 0x2e0
	UImage* SmallStar2; // 0x2e8
	UImage* SmallStar3; // 0x2f0
	UImage* SmallStar4; // 0x2f8
	UImage* SmallStar5; // 0x300
	UImage* SmallStar6; // 0x308
	UImage* Star1; // 0x310
	UImage* Star2; // 0x318
	UImage* Star3; // 0x320
	UOverlay* Stars; // 0x328
	UVerticalBox* StarsStatPanel; // 0x330
	UTimeDisplay_C* TimeDisplayOne; // 0x338
	UTimeDisplay_C* TimeDisplayPro; // 0x340
	UTimeDisplay_C* TimeDisplayThree; // 0x348
	UTimeDisplay_C* TimeDisplayTwo; // 0x350
	UTextBlock* TITLEBOX; // 0x358
	UVignette-Temp_C* Vignette-Temp; // 0x360
	float CurrentTimeFloat; // 0x368
	FMapStatList MapsStatsList; // 0x370
	int32_t Rating; // 0x398
	EMapPackGamemode GameMode; // 0x39c
	UMapPackManager* CurrentMapPackManager; // 0x3a0
	FString MapName; // 0x3a8
};

struct UMedalStolen {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct APhysicsThruster {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct UMaterialExpressionTangent {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UMaterialExpressionTextureCoordinate {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UHeader-Bar-Temp_C {
	UImage* Image_829; // 0x260
};

struct ANavigationObjectBase {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct USoundNodeMixer {
	TArray<float> InputVolume; // 0x48
};

struct USMInstance {
	FGuid RootStateMachineGuid; // 0x40
	FMulticastInlineDelegate OnStateMachineInitializedEvent; // 0x50
	FMulticastInlineDelegate OnStateMachineStartedEvent; // 0x60
	FMulticastInlineDelegate OnStateMachineUpdatedEvent; // 0x70
	FMulticastInlineDelegate OnStateMachineStoppedEvent; // 0x80
	FMulticastInlineDelegate OnStateMachineTransitionTakenEvent; // 0x90
	FMulticastInlineDelegate OnStateMachineStateChangedEvent; // 0xa0
	USMStateMachineComponent* ComponentOwner; // 0xb0
	TScriptInterface<ISMStateMachineNetworkedInterface> ServerStateMachine; // 0xb8
	TArray<FSMNetworkedTransaction> ActiveTransactions; // 0x208
	FSMStateMachine RootStateMachine; // 0x218
	UObject* R_StateMachineContext; // 0x5d8
	TArray<FGuid> R_ActiveStates; // 0x5e0
	USMInstance* ReferenceOwner; // 0x5f0
	USMStateMachineInstance* StateMachineClass; // 0x5f8
	bool bAutoManageTime; // 0x600
	bool bStopOnEndState; // 0x601
	bool bCanEverTick; // 0x602
	bool bCanTickWhenPaused; // 0x603
	float TickInterval; // 0x604
	bool bTickRegistered; // 0x608
	bool bTickBeforeInitialize; // 0x609
	float MaxTimeToWaitForUpdate; // 0x60c
	float TimeSinceAllowedTick; // 0x610
	float WorldSeconds; // 0x614
	float WorldTimeDelta; // 0x618
	bool bCallTickOnManualUpdate; // 0x61c
	bool bIsTicking; // 0x61d
	bool bIsUpdating; // 0x61e
	char bCanEvaluateTransitionsLocally : 1; // 0x620
	char bCanTakeTransitionsLocally : 1; // 0x620
	char bCanExecuteStateLogic : 1; // 0x620
	char R_bHasStarted : 1; // 0x620
	TArray<UObject*> ReferenceTemplates; // 0x628
};

struct UNUIBombRoundResult {
	FText ResultText; // 0x278
	FText ReasonText; // 0x290
	FLinearColor ResultColor; // 0x2a8
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

struct UABP_StickyGrenade_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot; // 0x388
};

struct UMedalLastStand {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct UMaterialExpressionSphereMask {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct ABP_BlitzBombTracker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UWorldMarkerComponent* Marker; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	UTexture2D* Escort Icon; // 0x250
	UTexture2D* Kill Icon; // 0x258
	FColor Escort Color; // 0x260
	FColor Kill Color; // 0x264
};

struct UMaterialExpressionMax {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UInteractiveToolsContext {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
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

struct UNUIBaseHUDElement {
	UBattalionGameInstance* BattInstance; // 0x268
	UBattalionSettings* BattSettings; // 0x270
};

struct UWBP_StyleScoreAwardEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* On_Fire_Chromatic_Glitch; // 0x268
	UTextBlock* SytleScoreAwardText; // 0x270
	UTextBlock* SytleScoreAwardText_BLUE; // 0x278
	UTextBlock* SytleScoreAwardText_RED; // 0x280
	FText Title; // 0x288
};

struct UPaperSpriteComponent {
	UPaperSprite* SourceSprite; // 0x468
	UMaterialInterface* MaterialOverride; // 0x470
	FLinearColor SpriteColor; // 0x478
};

struct UMovieSceneCameraAnimTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x80
};

struct USkeletalMeshSimplificationSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
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

struct ABattalionProfilingSpectatorPawn {
	bool AutoProfile; // 0x2a8
	bool RunningProfile; // 0x2a9
	bool SplineMoving; // 0x2aa
	USplineComponent* CurrentMovementSpline; // 0x2b0
	float SplineMovementTime; // 0x2b8
	float SplineMovementSpeed; // 0x2bc
	float SplineLerpSpeed; // 0x2c0
	ABattalionGrenade* GrenadeClass; // 0x2c8
	ABattalionSmokeGrenade* SmokeGrenadeClass; // 0x2d0
	bool GrenadeSpawning; // 0x2d8
	float GrenadeSpawnTimer; // 0x2dc
	float SmokeGrenadeSpawnTimer; // 0x2e0
	TArray<FTransform> GrenadeSpawnPoints; // 0x2e8
	TArray<FTransform> SmokeGrenadeSpawnPoints; // 0x2f8
};

struct ADOMPlayerState {
	bool Capturing; // 0x5a8
	int32_t ZoneCaptures; // 0x5ac
	int32_t ZoneNeutralizations; // 0x5b0
	int32_t DefensiveZoneKills; // 0x5b4
	int32_t OffensiveZoneKills; // 0x5b8
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

struct UFixedFrameRateCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28
};

struct ABP_IncendiaryEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UNiagaraSystem* FireSystem; // 0x2f0
};

struct AHeadquartersHUD {
	UNUIHQGameOverview* HQGameOverview; // 0x638
	UNUIWeaponPrompt* RespawnNotificationWidget; // 0x640
	UNUIWeaponPrompt* RespawnNotificationClass; // 0x648
	UNUIHQGameOverview* HQGameOverviewClass; // 0x650
};

struct UEdGraph {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct USoundSubmixWithParentBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMovieSceneByteTrack {
	UEnum* Enum; // 0xb0
};

struct UCheckBoxWidgetStyle {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct ABotFollowActor {
	UBoxComponent* RootBox; // 0x220
};

struct UWBP_Overtime_Shootout_Title_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Show; // 0x268
	UImage* Mov_Title; // 0x270
	UMediaPlayer* MP_Title; // 0x278
	bool PlayAnnouncementOnce; // 0x280
};

struct UTimeSynchronizationSource {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct UCameraShakeSourceComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UPFMatchmakingInterop {
	UPlayFabSubsystem* PlayFabSubsystem; // 0x30
	UPFServerSlotManager* ServerSlotManager; // 0x38
};

struct ABattalionIncendiaryGrenade {
	bool bFuseTimerEnded; // 0x3d0
	UAkComponent* AkComponent; // 0x3d8
	ABattalionIncendiaryEffect* IncendiaryEffectClass; // 0x3e0
	UParticleSystemComponent* EmitterComponent; // 0x3e8
	ABattalionIncendiaryEffect* IncendiaryEffect; // 0x3f0
};

struct UNiagaraPreviewAxis_InterpParamBase {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UDebugCameraControllerSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct UHUDChatController {
	EChatChannels CurrentChannel; // 0x260
	FString CurrentMessage; // 0x268
	UHUDRichTextBlock* ChatLog; // 0x278
	UHUDRichTextBlock* ChannelText; // 0x280
	FString GlobalChannelCol; // 0x288
	FString TeamChannelCol; // 0x298
	FString GroupChannelCol; // 0x2a8
	FString DevMessageCol; // 0x2b8
	FString MedalMessageCol; // 0x2c8
	FString ChallengeMessageCol; // 0x2d8
	float ChatFadeTime; // 0x2e8
	FString LineBreak; // 0x2f0
	UScrollBox* ScrollBox; // 0x300
	ABattalionPlayerControllerGMBase* OwnerController; // 0x308
	float ChatOpacity; // 0x320
	bool IsTyping; // 0x324
};

struct UAnimCompress_RemoveEverySecondKey {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct ABombGameMode {
	bool UseDecideTeamRound; // 0x838
	bool DecideTeamRoundIsKnifeOnly; // 0x839
	int32_t DecideRoundTime; // 0x83c
	int32_t RoundTimeBackup; // 0x840
	bool bUseOvertime; // 0x844
	int32_t NumOvertimeRounds; // 0x848
	int32_t RoundsToWinUntilStopBackfill; // 0x84c
	float PlantTime; // 0x850
	float QuickPlantTime; // 0x854
	float DefuseTime; // 0x858
	float FuseTime; // 0x85c
	float DistanceToPlant; // 0x860
	float DistanceToDefuse; // 0x864
	float DistanceToPickupBomb; // 0x868
	bool DefuseEndsRound; // 0x86c
	int32_t AttackingTeam; // 0x870
	bool EndOnMatchPointWin; // 0x874
	int32_t NumOvertimeLoops; // 0x878
	int32_t OvertimeSwapSidesRound; // 0x87c
	ABombMode_Bomb* BombClass; // 0x880
	int32_t RoundWinningTeam; // 0x888
	ABombMode_Bomb* GameBombObject; // 0x890
	UAkAudioEvent* PlantingSound; // 0x898
	UAkAudioEvent* QuickPlantingSound; // 0x8a0
	UAkAudioEvent* StopPlantingSound; // 0x8a8
	UAkAudioEvent* PlantSuccessfulSound; // 0x8b0
	UAkAudioEvent* DefusingSound; // 0x8b8
	UAkAudioEvent* StopDefusingSound; // 0x8c0
	UAkAudioEvent* DefuseSuccesfulSound; // 0x8c8
	UAkAudioEvent* DetonateSound; // 0x8d0
	UAkAudioEvent* BombDropInteract; // 0x8d8
	UAkAudioEvent* BombPickupInteract; // 0x8e0
	bool KnifeVoteHappened; // 0x8f0
	bool bIsInShootout; // 0x8f1
	TArray<AActor*> UsedSpawns; // 0x8f8
	TArray<ABattalionPlayerControllerGMBase*> SpectatorsWaitingToSpawn; // 0x908
	UAkAudioEvent* PlantingBombEvent; // 0x918
	UAkAudioEvent* DefusingBombEvent; // 0x920
	UAkAudioEvent* BombExplosionEvent; // 0x928
	UAkAudioEvent* PickedUpBombEvent; // 0x930
	UAkAudioEvent* DroppedBombEvent; // 0x938
	FNationSound BombPlantedEvent; // 0x940
	FNationSound BombDefusedEvent; // 0x960
	FNationSound LastManStandingEvent; // 0x980
	UAkAudioEvent* KnifeRoundVOEvent; // 0x9a0
	bool bEnteredOvertime; // 0x9a8
	bool bEnteredShootout; // 0x9a9
};

struct USoundNodeLooping {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UBIPF_PlatformHelper {
	UPlayFabSubsystem* PlayFabSubsystem; // 0x28
};

struct UMedal20BombFFA {
	AFFAGameMode* FFAGameMode; // 0x48
};

struct UClassSelectionScreen {
	FText AssaultLimitText; // 0x260
	FText BreacherLimitText; // 0x278
	FText ReconLimitText; // 0x290
	bool bIsAssaultDisabled; // 0x2a8
	bool bIsBreacherDisabled; // 0x2a9
	bool bIsReconDisabled; // 0x2aa
	TMap<EClassName, FLoadoutData> AvailableLoadouts; // 0x2b0
	APromodPlayerController* pOwningPlayercontroller; // 0x300
	APromodGameState* pGameState; // 0x308
	FLoadoutData AssaultDefaultLoadout; // 0x310
	FLoadoutData BreacherDefaultLoadout; // 0x458
	FLoadoutData ReconDefaultLoadout; // 0x5a0
	USelectedKitSaveData* KitSavedData; // 0x6e8
};

struct ULightPropagationVolumeBlendable {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x70
};

struct APrecomputedVisibilityOverrideVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
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

struct UGrenadeIndicator {
	TArray<FGrenadeInfo> CurrentGrenadeInfo; // 0x260
};

struct UInterpTrackParticleReplay {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct ALightmassPortal {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct ANavMeshBoundsVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct UInputActionDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct UHUD_LINES_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Chromatic_Fire; // 0x268
	UWidgetAnimation* FadeOut; // 0x270
	UWidgetAnimation* Glitch; // 0x278
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

struct UMedalReturn {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UAISenseConfig_Damage {
	UAISense_Damage* Implementation; // 0x48
};

struct UARMeshComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
};

struct ABP_CargoFirstTeamProgressPoint_C {
	UDecalComponent* DecalCorner3; // 0x220
	UDecalComponent* DecalCorner2; // 0x228
	UDecalComponent* DecalCorner1; // 0x230
	UDecalComponent* DecalCorner; // 0x238
	UDecalComponent* Decal3; // 0x240
	UDecalComponent* Decal2; // 0x248
	UDecalComponent* Decal1; // 0x250
	USceneComponent* DefaultSceneRoot; // 0x258
};

struct UInterpTrackVectorMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UAkIOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8
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

struct UInputComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
};

struct UNetworkSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct AOnlineBeacon {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct ULevelActorContainer {
	TArray<AActor*> Actors; // 0x28
};

struct ACableActor {
	UCableComponent* CableComponent; // 0x220
};

struct UJumperGameOverviewWidget {
	FText JumperTimerText; // 0x260
	FText JumperTimerTextMilliseconds; // 0x278
	FText JumperTimerTextSeconds; // 0x290
	FText JumperTimerTextMinutes; // 0x2a8
	FText JumperCheckpointText; // 0x2c0
	FText JumperRespawnText; // 0x2d8
};

struct UWBP_VersusNotification_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutNewNumber; // 0x268
	UWidgetAnimation* FadeInTheirNewNumber; // 0x270
	UWidgetAnimation* FadeInOurNewNumber; // 0x278
	UWidgetAnimation* FadeInOldNumber; // 0x280
	UScaleBox* OurVersus_ScaleBox; // 0x288
	UTextBlock* OurVersus_Text; // 0x290
	UImage* OurVersusBG; // 0x298
	UScaleBox* TheirVersus_ScaleBox; // 0x2a0
	UTextBlock* TheirVersus_Text; // 0x2a8
	UImage* TheirVersusBG; // 0x2b0
	UCanvasPanel* Versus_CP; // 0x2b8
	bool bOurPlayerKilled; // 0x2c0
	int32_t Our Players Before; // 0x2c4
	int32_t Our Players After; // 0x2c8
	int32_t Their Players Before; // 0x2cc
	int32_t Their Players After; // 0x2d0
	FMulticastInlineDelegate OnFinishedAnimation; // 0x2d8
	EVersusNotificationWidgetState State; // 0x2e8
	FTallyInformationPacket CurrentTallyInformationPacket; // 0x2ec
	TArray<FTallyInformationPacket> TallyInformationPacketQueue; // 0x300
	APromodGameState* PromodGameState; // 0x310
	FTimerHandle TimerHandle_ShowNewNumberStatic; // 0x318
};

struct ULoudnessNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct USourceEffectFoldbackDistortionPreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct AInfectionGameMode {
	int32_t SurvivorVsInfectedThreshold; // 0x878
	float SurvivorExperienceTime; // 0x87c
	int32_t InfectedMaxHealth; // 0x880
	float InfectedSpeedModifier; // 0x884
	int32_t InfectedKnifeDamage; // 0x888
	float InfectionHealthRegenPercentage; // 0x88c
	int32_t AlliesVictoryXPBonus; // 0x890
	int32_t AlliesTeamCount; // 0x894
	int32_t AxisTeamCount; // 0x898
	TArray<ABattalionPlayerControllerGMBase*> InfectedPlayers; // 0x8a0
	float SurvivorTimer; // 0x8b0
	TArray<FString> InfectedPlayerUUIDs; // 0x8b8
	UAkAudioEvent* GameStartNotification; // 0x8d0
	UAkAudioEvent* ZombieAttackVocal; // 0x8d8
	UAkAudioEvent* PlusTenCue; // 0x8e0
};

struct USoundSourceBus {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct USubmixEffectStereoDelayPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
};

struct ALandscapeProxy {
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

struct UNiagaraDataInterfaceGrid2DCollection {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
};

struct AGeometryCacheActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220
};

struct UWBP_CargoProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* CP_Main; // 0x268
	UProgressBar* ProgressBar_Cargo; // 0x270
	UWBP_CargoPayloadStatus_C* WBP_CargoPayloadStatus; // 0x278
	TArray<UWBP_CargoProgressCheckpoint_C*> CheckpointWidgets; // 0x280
	TArray<float> Checkpoints; // 0x290
	FGeometry My Geometry; // 0x2a0
	float FirstTeamProgress; // 0x2d8
	UWBP_CargoProgressCheckpoint_C* FirstTeamProgressWidget; // 0x2e0
	ACargoGameState* CargoGameState; // 0x2e8
	FLinearColor FillColour; // 0x2f0
	float StartAtProgress; // 0x300
	ECargoPlayerSideState PlayerSide; // 0x304
};

struct UAmbisonicsEncodingSettings {
	int32_t AmbisonicsOrder; // 0x28
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct AAimTrainingTarget {
	UStaticMeshComponent* TargetMeshPtr; // 0x228
	TWeakObjectPtr<AAimTrainingManager> WeakManagerPtr; // 0x230
};

struct UPromodMetric {
	bool bSmoothSamples; // 0x28
	float SmoothingFactor; // 0x2c
};

struct UTireType {
	float FrictionScale; // 0x30
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

struct UMaterialExpressionClearCoatNormalCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UAkAssetDataWithMedia {
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x70
};

struct UEnvQueryTest_GameplayTags {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UParticleModuleLocationEmitter {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct ABrush {
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

struct UMedal20BombWartide {
	AWartideGameMode* WartideGameMode; // 0x48
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles {
	uint32_t NumParticles; // 0x28
};

struct UMaterialExpressionAppendVector {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UAnimCompress_RemoveTrivialKeys {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UDistributionVectorParameterBase {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UMaterialExpressionFunctionOutput {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
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

struct UPlatformMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UMaterialExpressionTransform {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UMaterialExpressionSceneTexture {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct UMaterialExpressionChannelMaskParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct ACallOutVolume {
	UBoxComponent* BoxComponent; // 0x220
	FText CallOutName; // 0x228
	FVector BoxSize; // 0x240
	bool bIsEnabled; // 0x24c
	int32_t UniqueID; // 0x250
	TArray<ABattalionCharacter*> PlayerList; // 0x258
	FTimerHandle CheckOverlappedPlayersTimer; // 0x268
};

struct ABattalionDeathSpectatorPawn {
	ABattalionPlayerControllerGMBase* OwnerPC; // 0x2d8
	UPostProcessComponent* DeathPostProcess; // 0x2e0
	UBattalionGameInstance* BattInstance; // 0x2f0
	UBattalionSettings* BattSettings; // 0x2f8
};

struct UMaterialExpressionReflectionCapturePassSwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UGizmoLineHandleComponent {
	FVector Normal; // 0x460
	float HandleSize; // 0x46c
	float Thickness; // 0x470
	FVector Direction; // 0x474
	float Length; // 0x480
	bool bImageScale; // 0x484
};

struct AKillRunWeaponPickup {
	UAkComponent* DefaultAkComp; // 0x248
	USaveGame* SaveData; // 0x258
	USelectedKitSaveData* KitSaveData; // 0x260
};

struct UPlatformKeyImage {
	FString CurrentForcingPlatform; // 0x260
};

struct UNiagaraPreviewAxis_InterpParamInt32 {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct APawn {
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

struct UTP_PromodAnimInstance_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x578
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x5f8
	FAnimNode_Slot AnimGraphNode_Slot_18; // 0x678
	FAnimNode_Slot AnimGraphNode_Slot_17; // 0x6c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x708
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x730
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x758
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x780
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x7a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x7d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x7f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x820
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x848
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x8c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x948
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x9e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0xa88
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xb08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0xb38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0xbb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0xc38
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0xcd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0xd78
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xdf8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0xe28
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xe48
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0xf50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0xf70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x1058
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_15; // 0x1140
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x11e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x1260
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x1300
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x1380
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x1400
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x1480
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x1500
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x15a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x1640
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x16e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x1710
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x1818
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x1838
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1858
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x1960
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x1a48
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x1b30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1b50
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1c58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x1c78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x1d60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x1e48
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1f30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1f50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x2058
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0x2140
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x2208
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x22f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x23d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x24c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x25a8
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_14; // 0x2648
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x26e8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2788
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x27a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x27c8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x28d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x2998
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x2a80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x2b68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x2c50
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2d38
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x2d58
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_13; // 0x2e20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x2ec0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x2fa8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x3048
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_12; // 0x30e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x3188
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3228
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x3258
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x3308
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_11; // 0x3460
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x3500
	FAnimNode_Slot AnimGraphNode_Slot_16; // 0x3528
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x3570
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x3598
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x35c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x35e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x3610
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x3690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x3710
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_10; // 0x3790
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x3830
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x38d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x3950
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x39d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x3a50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x3ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x3b50
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_9; // 0x3bd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x3c70
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_8; // 0x3d10
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3db0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x3de0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x3e60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x3ee0
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_7; // 0x3f60
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x4000
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x40a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x4120
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x41a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x4220
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x4308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x4388
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_6; // 0x4408
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x44a8
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_5; // 0x4548
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x45e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4618
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x46c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x4820
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x48c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x4a18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x4a40
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x4a68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x4bc0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x4be8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x4c88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x4de0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x4f38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4fd8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x5058
	FAnimNode_RefPose AnimGraphNode_IdentityPose_2; // 0x51b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x51c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5248
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x52c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x5398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5458
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x54d8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x5598
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x56f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x57c0
	FAnimNode_Slot AnimGraphNode_Slot_15; // 0x5918
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x5960
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x5988
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x5a50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x5a78
	FAnimNode_Slot AnimGraphNode_Slot_14; // 0x5b18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x5b60
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x5b88
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x5c28
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_4; // 0x5c78
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x5d18
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_3; // 0x5db8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x5e58
	FAnimNode_Slot AnimGraphNode_Slot_13; // 0x5f28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x5f70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6010
	FAnimNode_Slot AnimGraphNode_Slot_12; // 0x60b0
	FAnimNode_Slot AnimGraphNode_Slot_11; // 0x60f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x6140
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x6168
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0x6228
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x6270
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0x6330
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_2; // 0x6378
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x6418
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x64d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x6500
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x6528
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x6550
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x6578
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x65a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x65e8
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x6610
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x6658
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x66a0
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x66e8
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6730
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x6778
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x67c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x67f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x6818
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6840
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x68e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x6a38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x6a60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x6b48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6c30
	FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x6cb0
	FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x6d20
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x6d38
	FAnimNode_Slot AnimGraphNode_Slot; // 0x6d80
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x6dc8
	FAnimNode_Root AnimGraphNode_Root; // 0x6e68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x6e98
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x6f80
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x7050
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x70f0
	float StartPos; // 0x7248
	APromodPawn_C* As Promod Pawn; // 0x7250
	FVector Velocity; // 0x7258
	FVector Acceleration; // 0x7264
	FVector MovementInput; // 0x7270
	bool IsMoving; // 0x727c
	bool HasMovementInput; // 0x727d
	float MovementInputAmount; // 0x7280
	ENUM_MovementState MovementState; // 0x7284
	ENUM_MovementState PrevMovementState; // 0x7285
	ENUM_MovementAction MovementAction; // 0x7286
	ENUM_Gait Gait; // 0x7287
	FRotator AimingRotation; // 0x7288
	float AimYawRate; // 0x7294
	float DeltaTimeX; // 0x7298
	bool ShouldMove; // 0x729c
	float ElapsedDelayTime; // 0x72a0
	bool Rotate_L; // 0x72a4
	bool Rotate_R; // 0x72a5
	float VelocityBlendInterpSpeed; // 0x72a8
	float DiagonalScaleAmount; // 0x72ac
	FVector RelativeAccelerationAmount; // 0x72b0
	float WalkRunBlend; // 0x72bc
	float StrideBlend; // 0x72c0
	float GroundedLeanInterpSpeed; // 0x72c4
	FVelocityBlend VelocityBlend; // 0x72c8
	FVector LocRelativeVelocityDir; // 0x72d8
	float Sum; // 0x72e4
	FVector RelativeDirection; // 0x72e8
	UCurveFloat* DiagonalScaleAmountCurve; // 0x72f8
	FLeanAmount LeanAmount; // 0x7300
	UCurveFloat* StrideBlend_N_Walk; // 0x7308
	UCurveFloat* StrideBlend_N_Run; // 0x7310
	UCurveFloat* StrideBlend_C_Walk; // 0x7318
	float VaultStage; // 0x7320
	int32_t VaultHeightSelect; // 0x7324
	UAnimSequence* VaultHighAnim; // 0x7328
	UAnimSequence* VaultMIdAnim; // 0x7330
	UAnimSequence* VaultLowAnim; // 0x7338
	UAnimSequence* VaultUsedAnim; // 0x7340
	float VaultUsed_Legth; // 0x7348
	bool IsVaulting; // 0x734c
	ETraceTypeQuery Trace Channel; // 0x734d
	TArray<EObjectTypeQuery> Object Types; // 0x7350
	bool CanVault; // 0x7360
	float VaultHeight; // 0x7364
	FVector VaultStartPos; // 0x7368
	FVector VaultTargetPos; // 0x7374
	float BombLerp; // 0x7380
	float LerpTimer; // 0x7384
	bool BombBlendBool; // 0x7388
	bool BombPlantingBool; // 0x7389
	float PitchClamped; // 0x738c
};

struct UAnimationDataSourceRegistry {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UNUISettingsMenu {
	float ShoulderFirstDelay; // 0x290
	float ShoulderDelay; // 0x294
	int32_t CurrentSelectedControl; // 0x2a4
	TArray<UNUISettingsMenuItem*> Items; // 0x2a8
	TArray<UNUISettingsMenuHeader*> Headers; // 0x2b8
	TArray<UNUISettingsMenuItem*> AudioItems; // 0x2c8
	TArray<UNUISettingsMenuItem*> HudItems; // 0x2d8
	TArray<UNUISettingsMenuItem*> BindingItems; // 0x2e8
	int32_t MaxComboSize; // 0x320
	float MaxComboDelay; // 0x324
	float MaxComboDelayBetweenKeys; // 0x328
	TArray<FCombo> Combos; // 0x330
	TMap<FString, FText> BindMapNames; // 0x340
	TArray<FCombo> BindCombos; // 0x390
	TMap<FString, FString> ChangedSettings; // 0x3a0
	UNUISettingsMenuHeader* HeaderWidgetClass; // 0x3f0
	UNUISettingsMenuItem* ItemWidgetClass; // 0x3f8
	UNUISettingsMenuItem* ControllerLayoutItemWidgetClass; // 0x400
	UNUISettingsMenuItem* KeyBindWidgetClass; // 0x408
};

struct UMaterialExpressionLandscapeLayerWeight {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UDatasmithLandscapeTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UARGeoAnchorComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UBP_PlayerOutlineCameraModifier_C {
	UMaterialInstanceDynamic* PostProcessMaterial; // 0x48
	float Radius; // 0x50
	float Intensity; // 0x54
	float Strength; // 0x58
};

struct UInterpTrackLinearColorBase {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UWBP_SNDHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UWidgetAnimation* FlashBang; // 0x270
	UWidgetAnimation* Kill+15-And-Beyond; // 0x278
	UWidgetAnimation* Kill+10; // 0x280
	UWidgetAnimation* Kill+5; // 0x288
	UWidgetAnimation* DamageTaken; // 0x290
	UVerticalBox* BlockedMessagesVerticalBox; // 0x298
	USizeBox* ClientFPS; // 0x2a0
	UCanvasPanel* FlashBangableWidgets; // 0x2a8
	USizeBox* FrameTime; // 0x2b0
	USizeBox* GameLatency; // 0x2b8
	USizeBox* GameThreadTime; // 0x2c0
	USizeBox* GameToRenderLatency; // 0x2c8
	USizeBox* GPUTemp; // 0x2d0
	UCanvasPanel* HudPanel; // 0x2d8
	USizeBox* IdleTime; // 0x2e0
	UCanvasPanel* NonFlashBangableWidgets; // 0x2e8
	UWidgetSwitcher* OverviewSwitcher; // 0x2f0
	URetainerBox* RB_CurvedHud; // 0x2f8
	USizeBox* RenderLatency; // 0x300
	USizeBox* RenderThreadTime; // 0x308
	USizeBox* RHIThreadTime; // 0x310
	UWBP_ActionPrompt_C* WBP_ActionPrompt; // 0x318
	UWBP_Announcement_C* WBP_Announcement; // 0x320
	UWBP_BasicScoreAward_C* WBP_BasicScoreAward; // 0x328
	UWBP_BombInfo_C* WBP_BombInfo; // 0x330
	UWBP_ChatFeed_C* WBP_ChatFeed; // 0x338
	UWBP_ClassChanged_C* WBP_ClassChanged; // 0x340
	UWBP_Crosshair_C* WBP_Crosshair; // 0x348
	UWBP_DamageTakenIndicator_C* WBP_DamageTakenIndicator; // 0x350
	UWBP_FireUpProgress_C* WBP_FireUpProgress; // 0x358
	UWBP_GameOverScreen_C* WBP_GameOverScreen; // 0x360
	UWBP_GrenadeIndicator_C* WBP_GrenadeIndicator; // 0x368
	UWBP_Hitmarker_C* WBP_Hitmarker; // 0x370
	UWBP_HUDEquipment_C* WBP_HUDEquipment_C; // 0x378
	UWBP_Interaction_C* WBP_Interaction; // 0x380
	UWBP_Killfeed_C* WBP_Killfeed; // 0x388
	UWBP_KillSuccess_C* WBP_KillSuccess; // 0x390
	UWBP_LoadoutScreen_C* WBP_LoadoutScreen; // 0x398
	UWBP_Message_C* WBP_Message; // 0x3a0
	UWBP_MiniMap_C* WBP_MiniMap; // 0x3a8
	UWBP_Overtime_Shootout_Title_C* WBP_Overtime_Shootout_Title; // 0x3b0
	UWBP_Overtime_Shootout_Transition_C* WBP_Overtime_Shootout_Transition; // 0x3b8
	UWBP_Overtime_Shootout_Victory_C* WBP_Overtime_Shootout_Victory; // 0x3c0
	UWBP_Overtime_Title_C* WBP_Overtime_Title; // 0x3c8
	UWBP_PingSelection_C* WBP_PingSelection; // 0x3d0
	UWBP_PlantProgressBar_C* WBP_PlantProgressBar; // 0x3d8
	UWBP_ShootoutOverview_C* WBP_ShootoutOverview_C_2; // 0x3e0
	UWBP_SndGameoverviewWidget_C* WBP_SndGameoverviewWidget; // 0x3e8
	UWBP_SNDLeaderboard_C* WBP_SNDLeaderboard; // 0x3f0
	UWBP_SniperVignette_C* WBP_SniperVignette; // 0x3f8
	UWBP_Spectating_C* WBP_Spectating; // 0x400
	UWBP_StaminaAndHealthBars_C* WBP_StaminaAndHealthBars_C_3; // 0x408
	UWBP_StrafeJumpSpeedFeedback_C* WBP_StrafeJumpSpeedFeedback; // 0x410
	UWBP_SwappingSides_C* WBP_SwappingSides; // 0x418
	UWBP_Vault_C* WBP_Vault; // 0x420
	UWBP_VictoryState_C* WBP_VictoryState; // 0x428
	UWBP_VoteHUD_C* WBP_VoteHUD; // 0x430
	UWBP_WeaponPickup_C* WBP_WeaponPickup; // 0x438
	ESlateVisibility In Visibility; // 0x440
	FMulticastInlineDelegate OnShowUpdateLeaderboard; // 0x448
	bool IsPlayingHealth; // 0x458
	FMulticastInlineDelegate OnShowUpdateGameOverScreen; // 0x460
	TArray<UWBP_GenericBlockedMessage_C*> CurrentBlockedMessages; // 0x470
	bool bBlockedUIFound; // 0x480
	float RemainingStamina; // 0x484
	float StaminaRegenMultiplier; // 0x488
	int32_t StaminaDirection; // 0x48c
	FStaminaEvent StaminaEvent; // 0x490
	TArray<UCameraModifier*> CameraModifiers; // 0x4a8
	UBattalionGameInstance* BattalionGameInstance; // 0x4b8
};

struct AOnlineBeaconHost {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct APaperTerrainActor {
	USceneComponent* DummyRoot; // 0x220
	UPaperTerrainSplineComponent* SplineComponent; // 0x228
	UPaperTerrainComponent* RenderComponent; // 0x230
};

struct UWidgetBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
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

struct ABP_StimshotFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	UBP_RegenCameraModifier_C* CameraModifier; // 0x3d0
	FHealthRegenEvent Health Regen Event; // 0x3d8
};

struct UInterpTrackSound {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UPlayerSceneCaptureComponent2D {
	ABattalionCharacter* CachedCharacter; // 0x8a8
};

struct UInterpTrackEvent {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UWBP_BlitzTeamRole_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Role; // 0x268
	FText PickupText; // 0x270
	FText PlantText; // 0x288
	FText EscortText; // 0x2a0
	FText KillText; // 0x2b8
	FText DefendText; // 0x2d0
	FText DefuseText; // 0x2e8
};

struct UDistributionFloatConstantCurve {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct UDatasmithAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct ULevelStreaming {
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

struct UParticleModuleVectorFieldRotation {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UEditableTextBoxWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UDistributionFloatUniform {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UMaterialExpressionOneMinus {
	FExpressionInput Input; // 0x40
};

struct UInGameAdManager {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UMovieSceneVectorSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UNuclearAnalyticsSystem {
	FString ReportEndpoint; // 0x30
};

struct UMovieSceneFadeSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UParticleModuleColorScaleOverLife {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
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

struct UPoseAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
};

struct AAkIndoorReverbVolume {
	EVolumeType VolumeType; // 0x290
	float MaxRTPCValue; // 0x294
	UAkComponent* AkComponent; // 0x298
	UAkAudioEvent* OnEnteredEvent; // 0x2a0
	UAkAudioEvent* OnExitEvent; // 0x2a8
};

struct ACargoGameMode {
	bool bCheckpointPipsCountForDraws; // 0xd4d
	float TugOfWarTitleTime; // 0xd50
	float TugOfWarTransitionTime; // 0xd54
	float TugOfWarPercentageAdvantageIncrementSize; // 0xd58
	float TugOfWarPercentageAdvantageTickSize; // 0xd5c
	float TugOfWarMaxAdvantageCap; // 0xd60
	bool bTugOfWarFireupsAllowed; // 0xd64
	float TugOfWarPassiveFireupMultiplier; // 0xd68
	float TugOfWarTime; // 0xd6c
	float TugOfWarTime_SuddenDeath; // 0xd70
	float TugOfWarSuddenDeathWinPercentage; // 0xd74
	float TugOfWarRespawnTime; // 0xd78
	float TugOfWarIdleTime; // 0xd7c
	bool bUseTugOfWar; // 0xd80
	float CargoVictoryTime; // 0xd84
	float EndOfRoundMusicStart; // 0xd88
	float FirstAttackerPayloadSpeed; // 0xd8c
	float PassivePayloadSpeed; // 0xd90
	int32_t MaxSpeedIncreaseAttackers; // 0xd94
	float ExtraAttackerPayloadSpeed; // 0xd98
	float CargoIdleReverseTime; // 0xd9c
	bool bAllowOvertime; // 0xda0
	float TotalGracePeriod; // 0xda4
	float MinimumGracePeriod; // 0xda8
	float PayloadCloseTrigger; // 0xdb0
	float TugOfWarCloseTrigger; // 0xdb4
	UAkAudioEvent* CheckPointReachedSound; // 0xdb8
	UAkAudioEvent* CheckPointUnlockedSound; // 0xdc0
	UAkAudioEvent* PayloadBlockedSound; // 0xdc8
	UAkAudioEvent* PayloadUnblockedSound; // 0xdd0
	UAkAudioEvent* TugOfWarPayloadBlockedSound; // 0xdd8
	UAkAudioEvent* TugOfWarPayloadUnblockedSound; // 0xde0
	ACargoGameState* CargoGameState; // 0xde8
	AMonorail* CargoActor; // 0xdf0
	ATugOfWarMonorail* TugOfWarActor; // 0xdf8
	AMonorailPath* CargoPathActor; // 0xe00
	ATugOfWarMonorailPath* TugOfWarPathActor; // 0xe08
	int32_t CurrentCheckpoint; // 0xe10
	float LastRoundEndTime; // 0xe14
	float TotalOvertimeUsed; // 0xe18
	UAkAudioEvent* GameStartSound; // 0xe20
	UAkAudioEvent* AttackerInstructionsSound; // 0xe28
	UAkAudioEvent* DefenderInstructionsSound; // 0xe30
	UAkAudioEvent* NearFinalCheckpointSound; // 0xe38
	UAkAudioEvent* StartRoundEndMusic; // 0xe40
	UAkAudioEvent* StopRoundEndMusic; // 0xe48
	UAkAudioEvent* OvertimeAnnouncerSound; // 0xe50
};

struct UBrainComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct UMovieSceneVectorTrack {
	int32_t NumChannelsUsed; // 0xb0
};

struct UTextRenderComponent {
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

struct UABP_Socom_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct UInAppPurchaseCallbackProxy2 {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UBTService {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UParticleModuleKillHeight {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct USteamNetConnection {
	bool bIsPassthrough; // 0x1b90
};

struct UAISense_Hearing {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct AGeometryCollectionDebugDrawActor {
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

struct UParticleModuleAccelerationOverLifetime {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UKantanSeriesStyleSet {
	TArray<FKantanSeriesStyle> Styles; // 0x30
};

struct UEnvQueryGenerator_PathingGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UNUIScoreboardTeamMember {
	FText PlayerScore; // 0x320
	int32_t PlayerStartingXP; // 0x338
	int32_t PlayerStartingProScore; // 0x33c
	FText PlayerKills; // 0x340
	FText PlayerAssists; // 0x358
	FText PlayerDeaths; // 0x370
	FText FFAPlayerKDR; // 0x388
	FText CTFPlayerCaptures; // 0x3a0
	FText CTFPlayerReturns; // 0x3b8
	FText DOMPlayerCaptures; // 0x3d0
	FText DOMPlayerNeutralizations; // 0x3e8
	bool bPlayerReady; // 0x400
	ESlateVisibility FFAVisibility; // 0x401
	ESlateVisibility WartideVisibility; // 0x402
	ESlateVisibility CTFVisibility; // 0x403
	ESlateVisibility DOMVisibility; // 0x404
	ESlateVisibility INFVisibility; // 0x405
	FUniqueNetIdRepl PlatformId; // 0x408
};

struct UWBP_ServerBrowser_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_Filters; // 0x268
	UButton* BTN_ApplyFilters; // 0x270
	UButton* BTN_Filters; // 0x278
	UButton* BTN_HostPrivateServer; // 0x280
	UButton* BTN_Join; // 0x288
	UButton* BTN_NextPage; // 0x290
	UButton* BTN_PrevPage; // 0x298
	UButton* BTN_Refresh; // 0x2a0
	UButton* BTN_ResetFilters; // 0x2a8
	UButton* BTN_Search; // 0x2b0
	UCanvasPanel* CP_Extras; // 0x2b8
	UEditableText* ET_SearchBox; // 0x2c0
	UEditableText* ETB_Password; // 0x2c8
	UWBP_ServerBrowserFilterOption_C* Filter_Mode_Wartide; // 0x2d0
	UWBP_ServerBrowserFilterOption_C* Filter_Players_LessThanFive; // 0x2d8
	UWBP_ServerBrowserFilterOption_C* Filter_Players_None; // 0x2e0
	UWBP_ServerBrowserFilterOption_C* Filter_Players_NotFull; // 0x2e8
	UWBP_ServerBrowserFilterOption_C* Filter_Type_Locked; // 0x2f0
	UWBP_ServerBrowserFilterOption_C* Filter_Type_Public; // 0x2f8
	UWBP_ServerBrowserFilterOption_C* Filter_Type_VersionNumber; // 0x300
	UImage* Image; // 0x308
	UImage* Image_2; // 0x310
	UImage* Image_3; // 0x318
	UImage* Image_4; // 0x320
	UImage* Image_5; // 0x328
	UImage* Image_6; // 0x330
	UImage* Image_7; // 0x338
	UImage* Image_8; // 0x340
	UImage* Image_9; // 0x348
	UImage* Image_165; // 0x350
	UImage* Image_389; // 0x358
	UImage* Image_580; // 0x360
	UImage* IMG_FiltersBtnBackground; // 0x368
	UImage* IMG_FiltersBtnBackground_2; // 0x370
	UImage* IMG_FiltersBtnBackground_3; // 0x378
	UImage* IMG_FiltersBtnBackground_4; // 0x380
	UImage* IMG_FiltersBtnBottomBar; // 0x388
	UImage* IMG_FiltersBtnBottomBar_2; // 0x390
	UImage* IMG_FiltersBtnBottomBar_3; // 0x398
	UImage* IMG_FiltersBtnBottomBar_4; // 0x3a0
	UImage* IMG_MapPreview; // 0x3a8
	UImage* MapArrowImg; // 0x3b0
	UButton* MapBtn; // 0x3b8
	UImage* ModeArrowImg; // 0x3c0
	UButton* ModeBtn; // 0x3c8
	UImage* PingArrowImg; // 0x3d0
	UButton* PingBtn; // 0x3d8
	UImage* PlayerCountArrowImg; // 0x3e0
	UButton* PlayerCountBtn; // 0x3e8
	USizeBox* SB_Password; // 0x3f0
	UScrollBox* ServerListContainer; // 0x3f8
	UImage* ServerNameArrowImg; // 0x400
	UButton* ServerNameBtn; // 0x408
	UTextBlock* TB_ButtonText; // 0x410
	UTextBlock* TB_ButtonText_2; // 0x418
	UTextBlock* TB_ButtonText_3; // 0x420
	UTextBlock* TB_FiltersBtnText; // 0x428
	UTextBlock* TB_FiltersBtnText_2; // 0x430
	UTextBlock* TB_FiltersBtnText_3; // 0x438
	UTextBlock* TB_FiltersBtnText_4; // 0x440
	UTextBlock* TB_Info_Map; // 0x448
	UTextBlock* TB_Info_Mode; // 0x450
	UTextBlock* TB_Info_PlayerCount; // 0x458
	UTextBlock* TB_Info_Title; // 0x460
	UTextBlock* TB_Info_Type; // 0x468
	UOverlay* ThrobberContainer; // 0x470
	UImage* TypeArrowImg; // 0x478
	UButton* TypeBtn; // 0x480
	UVerticalBox* VB_ServerInfo; // 0x488
	UWrapBox* WB_MapNames; // 0x490
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem; // 0x498
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_2; // 0x4a0
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_3; // 0x4a8
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_4; // 0x4b0
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_5; // 0x4b8
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_885; // 0x4c0
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_941; // 0x4c8
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_1031; // 0x4d0
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_1160; // 0x4d8
	UWBP_ServerBrowserItem_C* WBP_ServerBrowserItem_1296; // 0x4e0
	UWidgetSwitcher* WS_Extras; // 0x4e8
	FNuclearSessionSettings SearchParams; // 0x4f0
	TArray<UWBP_ServerBrowserItem_C*> ServerListWidgets; // 0x570
	UWBP_ServerBrowserItem_C* SelectedServerWidget; // 0x580
	int32_t SortColumn; // 0x588
	ENuclearSortDirection SortDirection; // 0x58c
	UWBP_ServerBrowserItem_C* PendingJoinWidget; // 0x590
	FString PendingJoinOptions; // 0x598
	bool FiltersOpen; // 0x5a8
	int32_t ServersPerPage; // 0x5ac
	TArray<FSessionArray> PagedServers; // 0x5b0
	TArray<FNuclearSessionResult> AllSessions; // 0x5c0
	int32_t CurrentPageIdx; // 0x5d0
	TArray<FString> AvailableMaps; // 0x5d8
	FString SearchText; // 0x5e8
	TMap<FString, UGuardiansMapAsset*> MapDetailsAssets; // 0x5f8
	bool FilterProtected; // 0x648
	bool FilterProtectedSet; // 0x649
	int32_t Max Players; // 0x64c
};

struct UBattalionColoursDataAsset {
	TArray<FBattalionColourEntity> Colours; // 0x30
};

struct UWBP_Crosshair_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	UImage* CenterCrosshair; // 0x318
	UImage* CenterCrosshair_Grenade; // 0x320
	UImage* CenterCrosshair_ThrowingKnife; // 0x328
	UWidgetSwitcher* CrosshairSwitcher; // 0x330
	UImage* DownCrosshair; // 0x338
	UCanvasPanel* Grenade; // 0x340
	UImage* LeftCrosshair; // 0x348
	UImage* RightCrosshair; // 0x350
	UCanvasPanel* Standard; // 0x358
	UCanvasPanel* ThrowingKnife; // 0x360
	UImage* UpCrosshair; // 0x368
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

struct UReset-Legend-button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UImage* Image_405; // 0x288
	UButton* Wish-Button; // 0x290
	FMulticastInlineDelegate ButtonClicked; // 0x298
};

struct UMovieSceneFloatSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct UARTrackedObject {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct USynthSamplePlayer {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct AMonorail {
	float CurrentTime; // 0x220
	float CurrentCheckpointSplineKey; // 0x224
	int32_t CurrentCheckpoint; // 0x228
	float CurrentTotalMonorailMultiplier; // 0x22c
	bool bCargoInitialized; // 0x230
	bool bCargoDisabled; // 0x231
	float CurrentDisableTimer; // 0x234
	float CurrentEnableTimer; // 0x238
	float CurrentInitializationTimer; // 0x23c
	float FirstTeamScore; // 0x240
	AMonorailPath* SelectedPath; // 0x248
	ECrawlerState CrawlerState; // 0x250
	AMonorailCarriage* CargoMeshActor; // 0x258
	float TimeUntilReverse; // 0x260
	float DecayTimer; // 0x264
	FMulticastInlineDelegate OnCheckpointReached; // 0x280
	FMulticastInlineDelegate OnCheckpointPassed; // 0x290
	ACargoGameMode* CargoGameMode; // 0x2b0
	ACargoGameState* CargoGameState; // 0x2b8
};

struct UWBP_ToolTip_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeIn; // 0x268
	UTextBlock* ToolTipText1; // 0x270
};

struct UDatasmithCineCameraComponentTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct UInterpTrackInstToggle {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UNUICallVoteMenu {
	TArray<FString> TimeoutTypes; // 0x278
	UTextBlock* Title; // 0x288
};

struct URadialVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct UParticleModuleLocationPrimitiveTriangle {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct UKillFeedTimeDisplay_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_ComparisonArrow; // 0x268
	UImage* IMG_ComparisonArrow_2; // 0x270
	UImage* IMG_ComparisonIndicator; // 0x278
	UImage* IMG_PlusIcon; // 0x280
	UTextBlock* TimeDisplayText; // 0x288
	UWidgetSwitcher* WS_ComparisonType; // 0x290
	UWidgetSwitcher* WS_CompArrow; // 0x298
	float Seconds; // 0x2a0
	bool ShouldColourText; // 0x2a4
	bool ShouldUseTriangle; // 0x2a5
	FLinearColor DownColour; // 0x2a8
	FLinearColor UpColour; // 0x2b8
	FLinearColor DownOutlineColour; // 0x2c8
	FLinearColor UpOutlineColour; // 0x2d8
};

struct UAkTVOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8
};

struct UWorldComposition {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct UWBP_Metric_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UTextBlock* LabelTextBlock; // 0x278
	UTextBlock* ValueTextBlock; // 0x280
	FText Label; // 0x288
	FText ValueFormat; // 0x2a0
	int32_t MinIntegralDigits; // 0x2b8
	int32_t MinFractionalDigits; // 0x2bc
	int32_t MaxFractionalDigits; // 0x2c0
	bool bShowAverage; // 0x2c4
};

struct UNUIClosedPrototypeVersion {
	FText MilestoneText; // 0x260
	FText MatchIdText; // 0x278
};

struct UParticleModuleAcceleration {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct UMaterialExpressionTemporalSobol {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UPostProcessComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x750
	float BlendRadius; // 0x754
	float BlendWeight; // 0x758
	char bEnabled : 1; // 0x75c
	char bUnbound : 1; // 0x75c
};

struct UMedal30BombCTF {
	ACTFGameMode* CTFGameMode; // 0x48
};

struct UMaterialExpressionSquareRoot {
	FExpressionInput Input; // 0x40
};

struct APromodGameState {
	APromodClassSettings* CleanClassSettings; // 0x540
	float FuseTime; // 0x548
	FMulticastInlineDelegate Delegate_SpawnVFXManager; // 0x550
	FMulticastInlineDelegate Delegate_DespawnAllVFX; // 0x560
	FMulticastInlineDelegate OnBombPlanted; // 0x570
	FMulticastInlineDelegate OnBombDefused; // 0x580
	int32_t NumLives_Team0; // 0x590
	int32_t NumLives_Team1; // 0x594
	TArray<APromodPlayerState*> ShootoutOrderedPlayerList_Team0; // 0x598
	TArray<APromodPlayerState*> ShootoutOrderedPlayerList_Team1; // 0x5a8
	APromodPlayerState* NextShootoutPlayer_Team0; // 0x5b8
	APromodPlayerState* NextShootoutPlayer_Team1; // 0x5c0
	bool SmokeVFXOverridden; // 0x5c8
	FName SmokeVFXName; // 0x5cc
	bool bShouldFlashGrenadeBeBlockedBySmoke; // 0x5d4
	int32_t NumRounds; // 0x5d8
	int32_t LeftScorePreShootout; // 0x5dc
	TArray<AActor*> ActiveInteractableActors; // 0x5e8
	int32_t AssaultLimit; // 0x5f8
	int32_t BreacherLimit; // 0x5fc
	int32_t ReconLimit; // 0x600
};

struct AVolatileAsset {
	UStaticMeshComponent* MeshComponentPtr; // 0x230
	UCameraShakeSourceComponent* CameraShakeComponentPtr; // 0x238
	UActorSequenceComponent* ExplosionSequencePtr; // 0x240
	UAkComponent* AudioComponent; // 0x248
	float BaseHealth; // 0x250
	UCurveFloat* DecayRatePtr; // 0x258
	TArray<FVolatileStage> Stages; // 0x260
	float BaseDamage; // 0x270
	float MinimumDamage; // 0x274
	float DamageInnerRadius; // 0x278
	float DamageOuterRadius; // 0x27c
	float DamageFalloff; // 0x280
	UDamageType* DamageType; // 0x288
	TArray<FVolatileDamageModifier> DamageModifiers; // 0x290
	bool DisplayDamageDebug; // 0x2a0
	float CurrentHealth; // 0x2a4
	bool IsDead; // 0x2a8
	UParticleSystemComponent* ActiveParticleSystem; // 0x2b0
	AController* LastDamageEventInstigator; // 0x2b8
};

struct UAISense {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UTimeSeriesPlot {
	UObject* DataSource; // 0x398
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

struct UBTDecorator_TagCooldown {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct AWorldSettings {
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

struct ARectLight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct UWBP_CargoVictoryProgress_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	USpacer* CenterProgressBarSpacer; // 0x268
	USpacer* CenterProgressBarSpacer_2; // 0x270
	UHorizontalBox* HB_ProgressOverview; // 0x278
	UHorizontalBox* HB_ProgressOverview_2; // 0x280
	UImage* IMG_Contested; // 0x288
	UImage* IMG_Contested_2; // 0x290
	UImage* IMG_Disabled_2; // 0x298
	UImage* IMG_Lost; // 0x2a0
	UImage* IMG_ProgressBackground; // 0x2a8
	UImage* IMG_ProgressBackground_2; // 0x2b0
	UImage* IMG_Push1; // 0x2b8
	UImage* IMG_Push1_2; // 0x2c0
	UImage* IMG_Push2; // 0x2c8
	UImage* IMG_Push2_2; // 0x2d0
	UImage* IMG_Push3; // 0x2d8
	UImage* IMG_Push3_2; // 0x2e0
	UImage* IMG_Won; // 0x2e8
	UImage* IMG_Won_2; // 0x2f0
	UScaleBox* MyTeamContainer; // 0x2f8
	UWBP_CargoProgress_C* MyTeamProgress; // 0x300
	UImage* SpeedStateBackgroundImage; // 0x308
	UImage* SpeedStateBackgroundImage_2; // 0x310
	UScaleBox* TheirTeamContainer; // 0x318
	UWBP_CargoProgress_C* TheirTeamProgress; // 0x320
	UWidgetSwitcher* WS_CargoSpeedState; // 0x328
	UWidgetSwitcher* WS_CargoSpeedState_2; // 0x330
	ACargoGameState* CargoGameState; // 0x338
	float My Team Progress; // 0x340
	float Their Team Progress; // 0x344
	float MyTeamTime; // 0x348
	float TheirTeamTime; // 0x34c
	float CurrentTime; // 0x350
	bool bTickAnimation; // 0x354
	UHUDTextDataAsset* HUDColour; // 0x358
	bool bCenter; // 0x360
	bool bWeWon; // 0x361
};

struct UMedalKillInfected {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct APatrolPath {
	USceneComponent* RootComp; // 0x220
	USplineComponent* SplineComp; // 0x228
	USplineComponent* PathSplineComp; // 0x230
	TArray<APatrolPoint*> PatrolPoints; // 0x238
	bool LoopPath; // 0x248
	FText PathName; // 0x250
	FColor PathColor; // 0x268
	bool ShowAIPath; // 0x26c
	FColor NavigationPathColor; // 0x270
};

struct AIntervalGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230
};

struct UMaterialExpressionRound {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionClamp {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct UNUINetworkStatus {
	float EstimatedPing; // 0x2c8
	bool CheatsEnabled; // 0x2cc
	ENetworkStatus PingQuality; // 0x2cd
	ENetworkStatus PingVariationQuality; // 0x2ce
	ENetworkStatus FramerateQuality; // 0x2cf
	ENetworkStatus RefreshRateQuality; // 0x2d0
	ENetworkStatus PacketLossQuality; // 0x2d1
	ENetworkStatus ServerPerformanceQuality; // 0x2d2
};

struct UBTTask_GameplayTaskBase {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UBTTaskNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct APainCausingVolume {
	char bPainCausing : 1; // 0x268
	float DamagePerSec; // 0x26c
	UDamageType* DamageType; // 0x270
	float PainInterval; // 0x278
	char bEntryPain : 1; // 0x27c
	char BACKUP_bPainCausing : 1; // 0x27c
	AController* DamageInstigator; // 0x280
};

struct UMaterialParameterCollectionInstance {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UParticleModuleLocationDirect {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct ASceneCapture2D {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
};

struct UMyPluginObject {
	FMyPluginStruct MyStruct; // 0x28
};

struct UWBP_InventoryItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* IndexText; // 0x268
	UImage* ItemImage; // 0x270
	UTexture2D* ItemTexture; // 0x278
	FText Key; // 0x280
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

struct UDistributionVector {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UBTDecorator_BlueprintBase {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct UWBP_BombProgressBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
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

struct UMaterialExpressionSobol {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct UParticleModuleSubUV {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UBattalionNationDataAsset {
	TArray<FNationDataEntity> Nations; // 0x30
};

struct UMedal1v4Clutch {
	AWartideGameMode* WartideGameMode; // 0x48
	ABattalionPlayerControllerGMBase* ClutcherPC; // 0x50
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

struct ABattalionReplaySpectatorPlayerController {
	int32_t CurrentPlayerIndex; // 0xc00
	ABattalionSpectatorPawn* SpecPawn; // 0xc08
	bool IsPlayingReplay; // 0xc10
	ABattalionCharacter* CurrentSpecPlayer; // 0xc18
	AReplayDataActor* ReplayDataActor; // 0xc20
	FViewTargetTransitionParams VTTransitionParams; // 0xc28
	bool IsUIHidden; // 0xc38
};

struct UBlendProfile {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UPlayerAnimInstance {
	UAnimMontage* StandToCrouchMontage; // 0x330
	UAnimMontage* CrouchToProneMontage; // 0x338
	UAnimMontage* ProneToCrouchMontage; // 0x340
	UAnimMontage* CrouchToStandMontage; // 0x348
	UAnimMontage* JumpLandMontage; // 0x350
	UAnimSequence* DefaultGripPoseSequence; // 0x358
	UCurveFloat* Turn90HalfSecondCurve; // 0x360
	UAnimMontage* StandShuffleMontage; // 0x368
	UAnimMontage* StandShuffleMontageReverse; // 0x370
	UAnimMontage* CrouchTurnLeft90; // 0x378
	UAnimMontage* CrouchTurnRight90; // 0x380
	UAnimMontage* StandShuffle180Montage; // 0x388
	UAnimMontage* StandShuffle180MontageReverse; // 0x390
	UAnimMontage* CrouchTurnLeft180; // 0x398
	UAnimMontage* CrouchTurnRight180; // 0x3a0
	float FootPosition; // 0x42c
	float FootPositionDirection; // 0x430
	float Speed; // 0x434
	APromodCharacter* ThirdPersonPawn; // 0x438
	bool InAir; // 0x440
	float Direction; // 0x444
	float StartPosition; // 0x448
	float RootOffsetYaw; // 0x44c
	int32_t Stance; // 0x450
	bool StanceEquals2; // 0x454
	UAnimSequence* AdditiveGripPose3P; // 0x458
	FTransform AdditiveGripTransform; // 0x460
	bool IsOneHanded; // 0x490
	float TargetingAnimTransition; // 0x494
	bool IsRunning; // 0x498
	float RunLean; // 0x49c
	bool ShouldStandStill; // 0x4a0
	float InstantDirection; // 0x4a4
	bool IsFiring; // 0x4a8
	bool bDisplayDead; // 0x4a9
	bool OnLadder; // 0x4aa
	float LadderAnimationProgress; // 0x4ac
	FVector LeanTranslation; // 0x4b0
	FRotator LeanUpperBodyRotation; // 0x4bc
	FRotator LeanLowerBodyRotation; // 0x4c8
	bool BlendGripPose; // 0x4d4
	float BlendGripPoseFlt; // 0x4d8
	float AdditiveInvertedGripFixApply; // 0x4dc
	bool AdditiveInvertedGripFixApplyBool; // 0x4e0
	FVector2D AODulledInverted; // 0x4e4
	FVector2D AODulledInvertedClamped; // 0x4ec
	float IsOneHandedFloat; // 0x4f4
	bool LastTimeInAirST1; // 0x4f8
	float CardinalLerpDirection; // 0x4fc
	bool IsKnife; // 0x500
	bool IsThompsonOrTargeting; // 0x501
	bool IsSliding; // 0x502
};

struct UPromodFireUpActionDataAsset {
	TMap<EFireUpActionType, FFireUpActionData> ActionData; // 0x30
};

struct UMovieSceneActorReferenceSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct UGizmoTransformProxyTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct UDrawFrustumComponent {
	FColor FrustumColor; // 0x440
	float FrustumAngle; // 0x444
	float FrustumAspectRatio; // 0x448
	float FrustumStartDist; // 0x44c
	float FrustumEndDist; // 0x450
	UTexture* Texture; // 0x458
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

struct ANavSystemConfigOverride {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UAnimBoneCompressionCodec {
	FString Description; // 0x28
};

struct UInteractiveToolManager {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct ATUTHUD {
	UNUIBuyScreen* BuyScreen; // 0x5f8
	UNUIBuyScreen* BuyScreenClass; // 0x600
};

struct UAnimNotify_ScreenSwayCurve {
	UCurveVector* ScreenSwayCurve; // 0x38
};

struct UWBP_HardpointOverviewScore_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* LockFadeIn; // 0x268
	UImage* BottomTeamBars; // 0x270
	UImage* BottomTeamBars_2; // 0x278
	UProgressBar* LeftTeamProgressBar; // 0x280
	UTextBlock* LeftTeamScore; // 0x288
	UImage* Lock; // 0x290
	UImage* MatchTime; // 0x298
	UTextBlock* MatchTimer; // 0x2a0
	UOverlay* Overlay_1; // 0x2a8
	UProgressBar* RightTeamProgressBar; // 0x2b0
	UTextBlock* RightTeamScore; // 0x2b8
	UTextBlock* SecondaryTimer; // 0x2c0
	UImage* WhiteTimer; // 0x2c8
	bool TimerLocked; // 0x2d0
};

struct UBTTask_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
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

struct UMovieSceneGeometryCollectionTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct ABattalionWeapon_Projectile {
	FProjectileWeaponData ProjectileConfig; // 0x7c0
};

struct UPromodGameModeScoreAwardsDataAsset {
	TMap<EScoreAwardType, int32_t> ScoreAwards; // 0x30
	TMap<EScoreAwardType, float> FireUpAwards; // 0x80
	float TimedObjectiveAwardTickInterval; // 0xd0
	int32_t MaxTimedObjectiveAward; // 0xd4
};

struct UNUIScoreboardScreen {
	UNUIScoreboard* CurrentScoreboard; // 0x278
	FText ModeName; // 0x280
	FText MapName; // 0x298
	FText MatchTime; // 0x2b0
	TMap<FString, FText> DisplayMapNames; // 0x2c8
	TMap<FString, FText> DisplayModeNames; // 0x318
};

struct UDatasmithPointLightComponentTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UWBP_CustomLoadoutButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* BTN_Main; // 0x268
	UImage* IMG_Background; // 0x270
	UImage* IMG_BackgroundAdd; // 0x278
	UImage* IMG_BackgroundInvisible; // 0x280
	UImage* IMG_Favourite; // 0x288
	UImage* IMG_FireupIcon; // 0x290
	UTextBlock* TB_LoadoutIndex; // 0x298
	UTextBlock* TB_LoadoutName; // 0x2a0
	UWidgetSwitcher* WS_Type; // 0x2a8
	FLinearColor HoverColor; // 0x2b0
	FLinearColor UnHoverColor; // 0x2c0
	FString Loadout Name; // 0x2d0
	int32_t Loadout Index; // 0x2e0
	int32_t MaxCharacters; // 0x2e4
	FLoadoutData Loadout; // 0x2e8
	int32_t Type; // 0x430
	FMulticastInlineDelegate LoadoutHovered; // 0x438
	FMulticastInlineDelegate LoadoutSelected; // 0x448
	FMulticastInlineDelegate LoadoutDeleted; // 0x458
	bool Selected; // 0x468
	bool Hovered; // 0x469
};

struct ABP_MonorailCarriage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
	UNiagaraComponent* Niagara_Fire2; // 0x3b8
	UNiagaraComponent* Niagara_Fire1; // 0x3c0
	UNiagaraComponent* Niagara_Volatile_Fire; // 0x3c8
	UParticleSystemComponent* Volatile_Fire2; // 0x3d0
	UParticleSystemComponent* Volatile_Fire1; // 0x3d8
	UParticleSystemComponent* Volatile_HighDamage2; // 0x3e0
	UParticleSystemComponent* Volatile_HighDamage1; // 0x3e8
	UParticleSystemComponent* Volatile_Fire; // 0x3f0
	UParticleSystemComponent* Volatile_HighDamage; // 0x3f8
	UStaticMeshComponent* Cube; // 0x400
	ECargoWorldMarkers ActiveMarkerState; // 0x408
	float MarkerScreenScale; // 0x40c
	FVector2D MarkerScreenPos; // 0x410
	UWorldMarkerComponent* ActiveWorldMarker; // 0x418
	ECargoPlayerSideState PlayerSide; // 0x420
};

struct UPrimitiveComponent {
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

struct UPromodWeaponArchetypeDataAsset {
	EWeaponArchetype WeaponArchetype; // 0x30
	TArray<ABattalionWeapon*> ModKits; // 0x38
};

struct UNiagaraRendererProperties {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	bool bIsEnabled; // 0x5c
	bool bMotionBlurEnabled; // 0x5d
};

struct UAsyncActionShowPrompt {
	FMulticastInlineDelegate OnClosed; // 0x30
	UObject* WorldContextObject; // 0x40
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

struct UParticleModuleVectorFieldScale {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct USynthSound {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UMovieSceneCompiledDataManager {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct UDestroySessionCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UMovieSceneFolder {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct UMedal1v3Clutch {
	AWartideGameMode* WartideGameMode; // 0x48
	ABattalionPlayerControllerGMBase* ClutcherPC; // 0x50
};

struct USettingsHeader_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UInvalidationBox* InvalidationBox_1; // 0x270
	UTextBlock* NameText; // 0x278
	USpacer* Spacer_4; // 0x280
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

struct UWBP_CargoObjectiveProgressBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* CP_Main; // 0x268
	UImage* Image_241; // 0x270
	UImage* IMG_ProgressMarker; // 0x278
	UInvalidationBox* InvalidationBox_ProgressMarker; // 0x280
	UProgressBar* ProgressBar_Cargo; // 0x288
	TArray<UWBP_CargoCheckpointPip_C*> PipWidgets; // 0x290
	int32_t Pips; // 0x2a0
	FGeometry My Geometry; // 0x2a4
	int32_t FirstTeamPipIdx; // 0x2dc
	UWBP_CargoProgressCheckpoint_C* FirstTeamProgressWidget; // 0x2e0
	ACargoGameState* CargoGameState; // 0x2e8
	FLinearColor FillColour; // 0x2f0
	float StartAtProgress; // 0x300
	float Percent; // 0x304
};

struct USettingsItem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f8
	UWidgetAnimation* DoSetDisabled; // 0x300
	USettings_Backdrop__Option_Selected_C* BackdropSelected; // 0x308
	USettings_Backdrop__Option_Unselected_C* BackdropUnselected; // 0x310
	UBorder* Border_1; // 0x318
	UBorder* Border_2; // 0x320
	UCombo_C* Combo; // 0x328
	UKeyBind_C* KeyBind; // 0x330
	ULeftRight_C* LeftRightSetting; // 0x338
	UTextBlock* NameText; // 0x340
	USettingSlider_C* SettingSlider; // 0x348
	USizeBox* SizeBox; // 0x350
	USizeBox* SizeBox_21; // 0x358
	USizeBox* ToolTipHit; // 0x360
	UWidgetSwitcher* WidgetSwitcher_1; // 0x368
	USettings_C* Settings; // 0x370
	int32_t LeftRightInt; // 0x378
	int32_t LeftRightMin; // 0x37c
	int32_t LeftRightMax; // 0x380
	FLinearColor SelectedColour; // 0x384
	FLinearColor UnselectedColour; // 0x394
	FLinearColor AlternateColor; // 0x3a4
};

struct UWeaponAnimInstance {
	bool Empty; // 0x2b8
	float TransitionProgress; // 0x2bc
	float TPStandingOrCrouched; // 0x2c0
	bool bIsMeleeing; // 0x2c4
};

struct UMovieSceneObjectPropertySection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct AFireUp_Dash {
	ERootMotionAccumulateMode AccumulateMode; // 0x3c8
	float DashDistance; // 0x3cc
	float Duration; // 0x3d0
	bool bRestrictSpeedToExpected; // 0x3d4
	ERootMotionFinishVelocityMode FinishVelocityMode; // 0x3d5
	FVector FinishSetVelocity; // 0x3d8
	float FinishClampVelocity; // 0x3e4
	EDashDirection DashDirection; // 0x3e8
	float TimeBeforeMeleeAllowed; // 0x3ec
};

struct UABP_M4_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct UMaterialExpressionViewProperty {
	EMaterialExposedViewProperty Property; // 0x40
};

struct UNavCollisionBase {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UAISense_Team {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UTestMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct UMaterialExpressionSubtract {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UWindDirectionalSourceComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct UMovieSceneEventTriggerSection {
	FMovieSceneEventChannel EventChannel; // 0xf0
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

struct UMaterialExpressionDotProduct {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMaterialExpressionCollectionParameter {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UGenlockedTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct UWBP_Flipbook_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* IMG_Sprite; // 0x268
	UPaperFlipbook* flipbook; // 0x270
	bool Loop; // 0x278
	bool Active; // 0x279
	float CurrentTime; // 0x27c
	float Delta Time; // 0x280
	FMulticastInlineDelegate OnFlipbookFinished; // 0x288
	bool StartActive; // 0x298
	FVector2D SpriteSize; // 0x29c
	int32_t PreviewFrame; // 0x2a4
	bool bFadeOut; // 0x2a8
	float FadeOutTime; // 0x2ac
	UCurveFloat* FadeOutCurve; // 0x2b0
	float FadeOutStartTime; // 0x2b8
	float CurrentFadeOutPercentage; // 0x2bc
};

struct UPathFollowingComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UMedalTacNade {
	TArray<FOneTapKillerExpiry> KillerExpiryArray; // 0x48
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

struct UInAppPurchaseRestoreCallbackProxy2 {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct AFFAHUD {
	UNUIBuyScreen* BuyScreen; // 0x5f8
	UNUIWeaponPrompt* WeaponPrompt; // 0x600
	UNUIFFAObjectiveScores* FFAObjectiveScore; // 0x608
	UNUIBuyScreen* BuyScreenClass; // 0x610
	UNUIWeaponPrompt* WeaponPromptClass; // 0x618
	UNUIFFAObjectiveScores* FFAObjectiveScoreClass; // 0x620
};

struct ASnapshotGrenade {
	USphereComponent* CollisionComponent; // 0x220
	UStaticMeshComponent* MeshComponent; // 0x228
	UProjectileMovementComponent* MovementComponent; // 0x230
	UAkComponent* DefaultAkComp; // 0x238
	UAkAudioEvent* BleepSound; // 0x240
	UAkAudioEvent* DetonateSound; // 0x248
	UAkAudioEvent* PlayerDetected; // 0x250
	UTimelineComponent* DematerializeTimeline; // 0x258
	TArray<UMaterialInstanceDynamic*> WeaponMIDs; // 0x260
	float DematerializeTimelineLength; // 0x270
	UCurveFloat* DematerializeTimelineCurve; // 0x278
	FSnapshotDartDematerializationData DartDematerializationData; // 0x280
};

struct ACharacter {
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

struct USphereComponent {
	float SphereRadius; // 0x458
};

struct UGameOverScreen {
	FText ResultText; // 0x260
	FText ScoreText; // 0x278
};

struct UBTTask_RunBehavior {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UWBP_HUDEquipment_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Anim_AmmoAdded; // 0x268
	UHorizontalBox* HB_Ammo; // 0x270
	UInvalidationBox* IB_Ammo; // 0x278
	UInvalidationBox* IB_OffensiveUtil; // 0x280
	UInvalidationBox* IB_QuickUtil; // 0x288
	UInvalidationBox* IB_TacticalUtil; // 0x290
	UInvalidationBox* IB_WeaponSlot; // 0x298
	UImage* IMG_OffensiveUtilBackground; // 0x2a0
	UImage* IMG_OffensiveUtilImage; // 0x2a8
	UImage* IMG_QuickUtilBackground; // 0x2b0
	UImage* IMG_QuickUtilImage; // 0x2b8
	UImage* IMG_Slot1; // 0x2c0
	UImage* IMG_Slot2; // 0x2c8
	UImage* IMG_Slot3; // 0x2d0
	UImage* IMG_TacticalUtilBackground; // 0x2d8
	UImage* IMG_TacticalUtilImage; // 0x2e0
	UImage* IMG_WeaponBackground; // 0x2e8
	UImage* IMG_WeaponIconSlot1; // 0x2f0
	UImage* IMG_WeaponIconSlot2; // 0x2f8
	UImage* IMG_WeaponIconSlot3; // 0x300
	UPlatformKeyImage_C* KEY_OffensiveUtil; // 0x308
	UPlatformKeyImage_C* KEY_QuickUtil; // 0x310
	UPlatformKeyImage_C* KEY_TacticalUtil; // 0x318
	UProgressBar* PB_QuickUtilRegen; // 0x320
	UTextBlock* TB_AddedAmmo; // 0x328
	UTextBlock* TB_ClipAmmo; // 0x330
	UTextBlock* TB_ReserveAmmo; // 0x338
	UWidgetSwitcher* WS_QuickUtilBackground; // 0x340
	UWidgetSwitcher* WS_SlotIcon; // 0x348
	UWidgetSwitcher* WS_SlotIndex; // 0x350
	int32_t Clip Ammo; // 0x358
	int32_t Reserve Ammo; // 0x35c
	ESpecialGrenadeType Tactical Util Type; // 0x360
	EGrenadeType Offensive Util Type; // 0x361
	EFireUpType Quick Util Type; // 0x362
	int32_t Offensive Util Count; // 0x364
	int32_t Tactical Util Count; // 0x368
	int32_t Quick Util Count; // 0x36c
	APromodPlayerState* Player State; // 0x370
	ESlotType ActiveSlot; // 0x378
	UTexture2D* AvailableBackground; // 0x380
	UTexture2D* NotAvailableBackground; // 0x388
	APromodPlayerController* OwningController; // 0x390
	APromodPawn_C* SpectatedPlayerCharacter; // 0x398
};

struct USubUVAnimation {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UClothLODDataCommon_Legacy {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct UPlatformKeyGeneral {
	FString CurrentForcingPlatform; // 0x260
};

struct URESTART-Legend-button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Clicked; // 0x270
	UWidgetAnimation* Unselected; // 0x278
	UWidgetAnimation* Selected; // 0x280
	UImage* Image_405; // 0x288
	UTextBlock* Text_Button; // 0x290
	UButton* Wish-Button; // 0x298
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
	int32_t MapIndex; // 0x2b0
};

struct USpectatorPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct ULandscapeSplineSegment {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct UMinimapInternal_Tooltip_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* TextBlock_17; // 0x268
	FText MapTooltipText; // 0x270
	UMapIconComponent* MapIconComp; // 0x288
};

struct ULeaderboardQueryCallbackProxy {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UTcpMessagingSettings {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct UTileView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct ABP_SmokeGrenade_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x420
};

struct UWBP_BombInfo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_60; // 0x268
	UHUDTextDataAsset* HUDText Colour; // 0x270
	UHUDTextDataAsset* HUDColour; // 0x278
};

struct UNUIAnnouncementList {
	TArray<UNUIAnnouncement*> Announcements; // 0x278
	UNUIAnnouncement* AnnouncementClass; // 0x288
};

struct AVolumetricLightmapDensityVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
};

struct ABlitzBombBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
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

struct UABP_UNDC_SMG_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x350
	FAnimNode_Slot AnimGraphNode_Slot; // 0x418
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4e0
	float Targeting Transition; // 0x560
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

struct UMovieSceneCameraCutSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UInstancedStaticMeshComponent {
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

struct UCameraAnimInst {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
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

struct URichTextBlockImageDecorator {
	UDataTable* ImageSet; // 0x28
};

struct AARSkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct UWBP_PlantProgressBar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Default; // 0x268
	UWidgetAnimation* Fade_Out; // 0x270
	UWidgetAnimation* Fade_In; // 0x278
	URetainerBox* RetainerBox_1; // 0x280
	UProgressBar* StaminaProgressBar; // 0x288
	bool FadedIn; // 0x290
	float CurrentProgress; // 0x294
	float ExpectedDuration; // 0x298
	bool bIsPlanting; // 0x29c
	bool bIsDefusing; // 0x29d
	APromodPlayerController* OwningPlayer; // 0x2a0
};

struct UCheckBoxStyleAsset {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct ABP_DashFireUp_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x400
	float Fov_Amount_3B20B9E44814D202930ABFBA3BA0B96E; // 0x408
	ETimelineDirection Fov__Direction_3B20B9E44814D202930ABFBA3BA0B96E; // 0x40c
	UTimelineComponent* FOV; // 0x410
	float ChromaticAberration_Amount_187BF6614619C30E9F3222901B0F536A; // 0x418
	ETimelineDirection ChromaticAberration__Direction_187BF6614619C30E9F3222901B0F536A; // 0x41c
	UTimelineComponent* ChromaticAberration; // 0x420
	float MaxChromaticAberration; // 0x428
	UBP_DashCameraModifier_C* CameraModifier; // 0x430
	float MaxFovAddition; // 0x438
};

struct UAB_WW2Sidearm_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x308
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4b8
};

struct UWBP_KillfeedEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* ShowThenHide; // 0x268
	USpacer* AssisterSpacer1; // 0x270
	USpacer* AssisterSpacer2; // 0x278
	UBorder* Border_AssisterPlayer; // 0x280
	UBorder* Border_KilledPlayer; // 0x288
	UBorder* Border_KillerPlayer; // 0x290
	UBorder* Border_TimeDisplay; // 0x298
	UTextBlock* CheckpointNumberText; // 0x2a0
	UImage* GizmoIcon; // 0x2a8
	UTextBlock* GizmoUseText; // 0x2b0
	UImage* IMG_CheckpointIcon; // 0x2b8
	UImage* KILL_ICON; // 0x2c0
	UImage* KILL_ICON_3; // 0x2c8
	UKillFeedTimeDisplay_C* KillFeedTimeDisplay_C_1; // 0x2d0
	UHorizontalBox* KILLICON; // 0x2d8
	UHorizontalBox* KILLICON2; // 0x2e0
	UImage* PlusIcon; // 0x2e8
	UTextBlock* TB_AssisterPlayer; // 0x2f0
	UTextBlock* TB_KilledPlayer; // 0x2f8
	UTextBlock* TB_KillerPlayer; // 0x300
	UImage* WeaponIcon; // 0x308
	UWidgetSwitcher* WidgetSwitcher_368; // 0x310
	FSlateBrush Headshot; // 0x318
	FSlateBrush Wallbang; // 0x3a0
	FSlateBrush noscope; // 0x428
	FSlateBrush Nade; // 0x4b0
	FText LocationSavedText; // 0x538
	FText LocationLoadedText; // 0x550
	float SplitDifference; // 0x568
	UBattalionDamageType* BombDamage; // 0x570
	FSlateBrush FellToDeath; // 0x578
	FSlateBrush CarBomb; // 0x600
	FSlateBrush BombExplode; // 0x688
	UHUDTextDataAsset* HUDText Colour; // 0x710
	UBattalionDamageType* Damage Type; // 0x718
	FLinearColor UpColour; // 0x720
	FLinearColor DownColour; // 0x730
	FKillMetaData Kill Meta Data; // 0x740
	FLinearColor FriendlyColour; // 0x780
	FLinearColor EnemyColour; // 0x790
	FLinearColor FriendlyBackgroundColour; // 0x7a0
	FLinearColor EnemyBackgroundColour; // 0x7b0
	FString Killer Player Name; // 0x7c0
	FString Killed Player Name; // 0x7d0
	FString Assister Player Name; // 0x7e0
	FLinearColor EnemyOutlineColour; // 0x7f0
	FLinearColor FriendlyOutlineColour; // 0x800
};

struct ASkyAtmosphere {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct ABattalionProjectile {
	UProjectileMovementComponent* MovementComp; // 0x220
	USphereComponent* CollisionComp; // 0x228
	UParticleSystemComponent* ParticleComp; // 0x230
	ABattalionExplosionEffect* ExplosionTemplate; // 0x238
	bool bExploded; // 0x268
};

struct UControllerLayoutLabel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UControllerLayoutLabelText_C* AltLabel1; // 0x268
	UControllerLayoutLabelText_C* AltLabel2; // 0x270
	UControllerLayoutLabelText_C* AltLabel3; // 0x278
	UHorizontalBox* AltLabelBox1; // 0x280
	UHorizontalBox* AltLabelBox2; // 0x288
	UHorizontalBox* AltLabelBox3; // 0x290
	USpacer* AltSpacer1; // 0x298
	USpacer* AltSpacer2; // 0x2a0
	USpacer* AltSpacer3; // 0x2a8
	UImage* Icon1; // 0x2b0
	UImage* Icon2; // 0x2b8
	UImage* Icon3; // 0x2c0
	UControllerLayoutLabelText_C* Label1; // 0x2c8
	UControllerLayoutLabelText_C* Label2; // 0x2d0
	UControllerLayoutLabelText_C* Label3; // 0x2d8
	USpacer* RightAlignmentSpacer; // 0x2e0
	USpacer* RightAlignmentSpacer2; // 0x2e8
	USpacer* RightAlignmentSpacer3; // 0x2f0
	USpacer* RightAlignmentSpacer4; // 0x2f8
	USpacer* RightAlignmentSpacer5; // 0x300
	UTextBlock* Spacer1; // 0x308
	UTextBlock* Spacer2; // 0x310
	UWidgetSwitcher* WidgetSwitcher_2; // 0x318
	ETextJustify TextJustification; // 0x320
	bool IsCustom; // 0x321
	TArray<UControllerLayoutLabelText_C*> Labels; // 0x328
	TArray<UTextBlock*> Spacers; // 0x338
	bool UseAlternateLayout; // 0x348
	TArray<UControllerLayoutLabelText_C*> VerticalLabels; // 0x350
	TArray<UImage*> VerticalIcons; // 0x360
	TArray<FKey> Binds; // 0x370
};

struct UPromodWeaponStatsDataAsset {
	EWeaponArchetype WeaponArchetype; // 0x30
	TArray<ABattalionGameMode*> ValidGameModesForPickupCreationFromDeath; // 0x38
	TArray<ABattalionGameMode*> ValidGameModesForPickupCreationFromDeathDuringShootout; // 0x48
	bool bInfiniteAmmo; // 0x58
	bool bInfiniteClip; // 0x59
	int32_t MaxAmmo; // 0x5c
	int32_t AmmoPerClip; // 0x60
	int32_t InitialClips; // 0x64
	bool bMultiReloadable; // 0x68
	int32_t ReloadAmount; // 0x6c
	float AccumulateTargetingScale; // 0x70
	float AccumulateHipScale; // 0x74
	float AccumulateAdd; // 0x78
	float AccumulateRecoverySpeed; // 0x7c
	float AccumulateMax; // 0x80
	float AccumulationRotationRange; // 0x84
	FVector AccumulationRotationPoint; // 0x88
	UCurveFloat* DematerializeTimelineCurve; // 0x98
	float TimeBetweenShots; // 0xa0
	float SemiAutoMercyRatio; // 0xa4
	bool bReloadEmptyOnly; // 0xa8
	float NoAnimReloadDuration; // 0xac
	bool bReloadSegmented; // 0xb0
	float ReloadFromEmptyAnimReloadDuration; // 0xb4
	float ReloadSegmentedStartAnimDuration; // 0xb8
	float ReloadSegmentedLoopAnimDuration; // 0xbc
	float ReloadSegmentedEndAnimDuration; // 0xc0
	float ClipLoadTime; // 0xc4
	float ClipLoadTimeFromEmpty; // 0xc8
	float ReloadFromNotEmptyAnimReloadDuration; // 0xcc
	float EquipDuration; // 0xd0
	float QuickEquipDuration; // 0xd4
	float AltEquipDuration; // 0xd8
	float HolsterDuration; // 0xdc
	float CancelHolsterAnimSpeed; // 0xe0
	float CancelHolsterReverseTime; // 0xe4
	bool bSemiAuto; // 0xe8
	bool bHeavy; // 0xe9
	bool bCanADS; // 0xea
	bool bCanOneTap; // 0xeb
	bool bEjectMagazineFinalShot; // 0xec
	bool bUseSniperVignette; // 0xed
	float TargetingTransitionInTime; // 0xf0
	float TargetingTransitionOutTime; // 0xf4
	float TargetingTransitionFOVRatio; // 0xf8
	float MoveSpeedScalar; // 0xfc
	float MoveSpeedTargetingScalar; // 0x100
	float MoveSpeedTargetingForwardsBackwardsLandingPunishmentScalar; // 0x104
	float TargetingFOV; // 0x108
	bool bUseFixedADSFOV; // 0x10c
	bool bBoltAction; // 0x10d
	float RechamberDuration; // 0x110
	float RechamberAnimDuration; // 0x114
	float EarlyRechamberDuration; // 0x118
	float FireWaitToRechamberDuration; // 0x11c
	bool bExitTargetingOnRechambering; // 0x120
	bool bFastRechamber; // 0x121
	float ExitTargetingAfterRechamberEarlyTime; // 0x124
	float FastRechamberFOV; // 0x128
	float FireWaitToReloadDuration; // 0x12c
	bool bWeaponRecoilDelay; // 0x130
	bool bSingleHandedTP; // 0x131
	float ADSFOVAspectFix; // 0x134
	FRotator SpawnRotationOffset; // 0x138
	float SprintingTransitionInTime; // 0x144
	float SprintingTransitionOutTime; // 0x148
	bool bAllowAutoAim; // 0x14c
	UCurveFloat* ADSTransitionCurve; // 0x150
	float ReloadEndTransitionPoint; // 0x158
	float MaxPenetrationThickness; // 0x15c
	int32_t MaxPenetrationCount; // 0x160
	float DamageReductionPerCm; // 0x164
	UCurveFloat* DamageReductionCurve; // 0x168
	TArray<FPhysMatModifier> PenetrationThicknessModifiers; // 0x170
	TArray<FPhysMatModifier> PenetrationDamageModifiers; // 0x180
	float AdsSensitivityScalar; // 0x190
	UCurveFloat* MovementSpeedSpreadCurve; // 0x198
	float TargetingWeaponSpread; // 0x1a0
	float InAirTargetingWeaponSpread; // 0x1a4
	float HipFiringSpreadIncrement; // 0x1a8
	float HipFiringMovementIncrement; // 0x1ac
	float HipFiringSpreadStandingMax; // 0x1b0
	float HipFiringSpreadCrouchingMax; // 0x1b4
	float HipFiringSpreadProneMax; // 0x1b8
	float HipFiringSpreadStandingMin; // 0x1bc
	float HipFiringSpreadCrouchingMin; // 0x1c0
	float HipFiringSpreadProneMin; // 0x1c4
	float HipSpreadRecoveryRate; // 0x1c8
	float SpreadMovementTolerance; // 0x1cc
	UCurveFloat* YawViewRecoilCurve; // 0x1d0
	UCurveFloat* PitchViewRecoilCurve; // 0x1d8
	UCurveFloat* ADSYawViewRecoilCurve; // 0x1e0
	UCurveFloat* ADSPitchViewRecoilCurve; // 0x1e8
	UCurveFloat* ViewKickCurve; // 0x1f0
	UCurveFloat* ViewKickRecoveryCurve; // 0x1f8
	bool UseSeparateRecoils; // 0x200
	float ViewRecoilRecovery; // 0x204
	float ADSViewRecoilRecovery; // 0x208
	FVector2D MaxViewRecoil; // 0x20c
	float ViewRecoilFriction; // 0x214
	float ADSViewRecoilFriction; // 0x218
	float MinRange; // 0x21c
	float MaxRange; // 0x220
	float MaxTraceRange; // 0x224
	float BaseDamage; // 0x228
	float MinDamage; // 0x22c
	float MaxRangeDamageModifier; // 0x230
	float MinRangeDamageModifier; // 0x234
	float RangeGridSnap; // 0x238
	float HeadshotDamage; // 0x23c
	float NeckDamage; // 0x240
	float UpperTorsoDamage; // 0x244
	float LowerTorsoDamage; // 0x248
	float UpperArmDamage; // 0x24c
	float LowerArmDamage; // 0x250
	float HandDamage; // 0x254
	float UpperLegDamage; // 0x258
	float LowerLegDamage; // 0x25c
	float FootDamage; // 0x260
	float ClientSideHitLeeway; // 0x264
	float MassiveBoxLeeway; // 0x268
	float AllowedViewDotHitDir; // 0x26c
	bool bIsBuckshot; // 0x270
	TArray<FVector2D> BuckshotRotations; // 0x278
	bool bCollateral; // 0x288
	bool bUseMIDIFire; // 0x289
	float MIDIOffSampleValue; // 0x28c
};

struct UAnimationSharingStateProcessor {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct UBTTask_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct ULevelSelect-Arrow-button-Promod_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Pressed; // 0x268
	UWidgetAnimation* Default; // 0x270
	UWidgetAnimation* Clicked; // 0x278
	UWidgetAnimation* Unhovered; // 0x280
	UWidgetAnimation* Hovered; // 0x288
	UImage* Image_117; // 0x290
	UButton* Wish-Button; // 0x298
	FMulticastInlineDelegate ButtonClicked; // 0x2a0
	bool bHovered; // 0x2b0
	bool bPressed; // 0x2b1
};

struct UMovieSceneNiagaraSystemSpawnSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UMovieSceneEnumSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
};

struct UAkWindowsInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8
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

struct UEnvQueryGenerator_CurrentLocation {
	UEnvQueryContext* QueryContext; // 0x50
};

struct AWartideGameMode {
	UAkAudioEvent* WartideStartAlliesEvent; // 0x9b0
	UAkAudioEvent* WartideStartAxisEvent; // 0x9b8
};

struct UMedalZombieland {
	AInfectionGameMode* INFGameMode; // 0x48
};

struct USourceEffectPannerPreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UPlayMontageCallbackProxy {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UInterpTrackInstDirector {
	AActor* OldViewTarget; // 0x28
};

struct UWBP_HardpointHUD_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UWidgetAnimation* FlashBang; // 0x270
	UWidgetAnimation* Kill+15-And-Beyond; // 0x278
	UWidgetAnimation* Kill+10; // 0x280
	UWidgetAnimation* Kill+5; // 0x288
	UWidgetAnimation* DamageTaken; // 0x290
	UVerticalBox* BlockedMessagesVerticalBox; // 0x298
	USizeBox* ClientFPS; // 0x2a0
	UCanvasPanel* FlashBangableWidgets; // 0x2a8
	USizeBox* FrameTime; // 0x2b0
	USizeBox* GameLatency; // 0x2b8
	USizeBox* GameThreadTime; // 0x2c0
	USizeBox* GameToRenderLatency; // 0x2c8
	USizeBox* GPUTemp; // 0x2d0
	UCanvasPanel* HudPanel; // 0x2d8
	USizeBox* IdleTime; // 0x2e0
	UWidgetSwitcher* OverviewSwitcher; // 0x2e8
	URetainerBox* RB_CurvedHud; // 0x2f0
	USizeBox* RenderLatency; // 0x2f8
	USizeBox* RenderThreadTime; // 0x300
	USizeBox* RHIThreadTime; // 0x308
	UWBP_ActionPrompt_C* WBP_ActionPrompt; // 0x310
	UWBP_Announcement_C* WBP_Announcement; // 0x318
	UWBP_BasicScoreAward_C* WBP_BasicScoreAward; // 0x320
	UWBP_ChatFeed_C* WBP_ChatFeed; // 0x328
	UWBP_ClassChanged_C* WBP_ClassChanged; // 0x330
	UWBP_Crosshair_C* WBP_Crosshair; // 0x338
	UWBP_DamageTakenIndicator_C* WBP_DamageTakenIndicator; // 0x340
	UWBP_FireUpProgress_C* WBP_FireUpProgress; // 0x348
	UWBP_GrenadeIndicator_C* WBP_GrenadeIndicator; // 0x350
	UWBP_HardpointGameOverview_C* WBP_HardpointGameOverview; // 0x358
	UWBP_Hitmarker_C* WBP_Hitmarker; // 0x360
	UWBP_HUDEquipment_C* WBP_HUDEquipment_C_170; // 0x368
	UWBP_InGameLoadoutSelection_C* WBP_InGameLoadoutSelection_304; // 0x370
	UWBP_Interaction_C* WBP_Interaction; // 0x378
	UWBP_Killfeed_C* WBP_Killfeed; // 0x380
	UWBP_KillSuccess_C* WBP_KillSuccess; // 0x388
	UWBP_Message_C* WBP_Message; // 0x390
	UWBP_MiniMap_C* WBP_MiniMap; // 0x398
	UWBP_Overtime_Shootout_Title_C* WBP_Overtime_Shootout_Title; // 0x3a0
	UWBP_Overtime_Shootout_Transition_C* WBP_Overtime_Shootout_Transition; // 0x3a8
	UWBP_Overtime_Shootout_Victory_C* WBP_Overtime_Shootout_Victory; // 0x3b0
	UWBP_Overtime_Title_C* WBP_Overtime_Title; // 0x3b8
	UWBP_PingSelection_C* WBP_PingSelection; // 0x3c0
	UWBP_RespawnTimer_C* WBP_RespawnTimer; // 0x3c8
	UWBP_ShootoutOverview_C* WBP_ShootoutOverview_C_2; // 0x3d0
	UWBP_SNDLeaderboard_C* WBP_SNDLeaderboard; // 0x3d8
	UWBP_SniperVignette_C* WBP_SniperVignette; // 0x3e0
	UWBP_Spectating_C* WBP_Spectating; // 0x3e8
	UWBP_StaminaAndHealthBars_C* WBP_StaminaAndHealthBars; // 0x3f0
	UWBP_StrafeJumpSpeedFeedback_C* WBP_StrafeJumpSpeedFeedback; // 0x3f8
	UWBP_SwappingSides_C* WBP_SwappingSides; // 0x400
	UWBP_Vault_C* WBP_Vault; // 0x408
	UWBP_WeaponPickup_C* WBP_WeaponPickup; // 0x410
	ESlateVisibility In Visibility; // 0x418
	FMulticastInlineDelegate OnShowUpdateLeaderboard; // 0x420
	bool IsPlayingHealth; // 0x430
	FMulticastInlineDelegate OnShowUpdateGameOverScreen; // 0x438
	TArray<UWBP_GenericBlockedMessage_C*> CurrentBlockedMessages; // 0x448
	bool bBlockedUIFound; // 0x458
	float RemainingStamina; // 0x45c
	float StaminaRegenMultiplier; // 0x460
	int32_t StaminaDirection; // 0x464
	FStaminaEvent StaminaEvent; // 0x468
};

struct UNiagaraDataInterfaceCamera {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
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

struct URadialIntMask {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UBTTask_PlaySound {
	USoundCue* SoundToPlay; // 0x70
};

struct UChaosSolverSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

