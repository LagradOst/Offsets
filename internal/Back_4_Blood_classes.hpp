namespace off {
	constexpr auto GNames = 0x6927e00;
	constexpr auto GObjects = 0x6623a18;
	constexpr auto GWorld = 0x6914c5f;
	constexpr auto ObjectsXorValue = 0x7a2f;
}
struct UCloudStorageBase {
	TArray<FString> LocalCloudFiles; // 0x40
	char bSuppressDelegateCalls : 1; // 0x50
};

struct UAnimNotifyState_ParticleColliderTimed {
	TMap<FName, UImpactEffectConfig*> Events; // 0xb8
};

struct UClingComponent {
	FMulticastInlineDelegate OnStateChanged; // 0x178
	FClingConfig ClingConfig; // 0x188
	FClingMoveTickData MoveTickData; // 0x2f0
	EZombieAttachLocationType AttachedLocationType; // 0x314
	EZombieAttachLocationType AttachToLocationType; // 0x315
	bool bIsSwiveling; // 0x316
	bool bClingMoving; // 0x317
	UAnimMontage* CurrentActiveMontage; // 0x318
	FName PoleAttachedCollisionProfileName; // 0x360
};

struct UFloatingPawnMovement {
	float MaxSpeed; // 0x170
	float Acceleration; // 0x174
	float Deceleration; // 0x178
	float TurningBoost; // 0x17c
	char bPositionCorrected : 1; // 0x180
};

struct URoundAnalyticsComponent {
	TArray<TWeakObjectPtr<AGobiPlayerState>> LateJoinersAwaitingProfileLoad; // 0x160
};

struct ATraumaKitBase {
	USceneComponent* SceneRoot; // 0x2a0
	UStaticMeshComponent* StaticMeshComponent; // 0x2a8
	UBoxComponent* UseTriggerVolumeComponent; // 0x2b0
	UAnimContextLocatorComponent* AnimContextLocatorComponent; // 0x2b8
	UPingableComponent* PingableComponent; // 0x2c0
	UStaticMeshComponent* StaticMeshTemp1Component; // 0x2c8
	UStaticMeshComponent* StaticMeshTemp2Component; // 0x2d0
	UUsableComponent* UsableComponent; // 0x2d8
	UUsableHighlightComponent* UsableHighlightComponent; // 0x2e0
	UItemAudioComponent* ItemAudioComponent; // 0x2e8
	FText CostText; // 0x2f0
	FText UsableCurrencyCostTextMsg; // 0x308
	FText ChargeText; // 0x320
	FName HeroCardCompareName; // 0x338
	int32_t FreeChargesPerDifficulty[0x6]; // 0x340
	int32_t CurrencyChargeCost; // 0x358
	float ChanceOfSpawning; // 0x35c
	float HealthHealAmt; // 0x360
	float TraumaHealAmt; // 0x364
	int32_t StrikesHealAmt; // 0x368
	TArray<UGameplayEffect*> ApplyEffectsToTarget; // 0x370
	bool bIsEnabled; // 0x380
	int32_t CurrentChargeCnt; // 0x384
};

struct UNavigationSystemModuleConfig {
	char bStrictlyStatic : 1; // 0x58
	char bCreateOnClient : 1; // 0x58
	char bAutoSpawnMissingNavData : 1; // 0x58
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x58
};

struct UMovieScenePrimitiveMaterialSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UAchievementsPanelUserWidget {
	TMap<EAchievementCategory, FText> CategoriesToText; // 0x458
};

struct ULootSpawnConfigAsset {
	TArray<float> AttachmentCountWeights; // 0x38
	TArray<FLootSpawnConfig> SpawnConfigs; // 0x48
};

struct AEffectActor {
	UAkComponent* AkComponent; // 0x2a0
	TArray<FImpactDecalDefinition> Decals; // 0x2a8
	TArray<UParticleSystem*> BaseEmitters; // 0x2b8
	FVector2D LifetimeMinMax; // 0x2c8
	float EmitterFadeOutTime; // 0x2d0
	float DestroyDelay; // 0x2d4
	UAkAudioEvent* AudioAOELoop; // 0x2e0
	UAkAudioEvent* AudioAOELoopStop; // 0x2e8
	float AudioCheckRadius; // 0x2f0
	int8_t AudioCheckCountThreshold; // 0x2f4
	FReplicatedEffectActorInfo ReplicatedEffectActorInfo; // 0x32c
};

struct UEnvQueryTest_WallCling_Dot {
	UEnvQueryContext* LineFrom; // 0x208
	UEnvQueryContext* LineTo; // 0x210
	EEnvTestDot TestMode; // 0x218
	bool bAbsoluteValue; // 0x219
};

struct ALevelResetCoordinator {
	TArray<ULevelStreamingDynamic*> LevelsToReset; // 0x2c0
};

struct UInterpTrackInstParticleReplay {
	float LastUpdatePosition; // 0x30
};

struct UMatchmaking {
	UGobiWebServices* GobiWebServices; // 0x30
	UMatchmakingPoolManager* MatchmakingPoolManager; // 0x38
	UOnlineSessions* OnlineSessions; // 0x40
	TArray<FTaskTimerConfig> TimerConfigs; // 0x60
	double GameServerAutoConnectTime; // 0xa98
	double GameServerWaitForFirstPartySessionTime; // 0xaa0
	TArray<FMatchmakingUIBucket> UIBuckets; // 0xaa8
	TArray<FMatchmakingUIAtuinEnvironment> UIAtuinEnvironments; // 0xab8
	TArray<UMatchmakingLocalUserSlot*> LocalUserSlots; // 0xac8
	double WaitForJoinersToLeaveDuration; // 0xcf0
	double PacketRelayGracePeriod; // 0xdd0
	double StartupReconnectGracePeriod; // 0xe08
	double ReconnectSettingsUpdateInterval; // 0xe10
	FMulticastInlineDelegate OnPoolJoined; // 0xfe8
	FMulticastInlineDelegate OnPoolLeft; // 0xff8
	FMulticastInlineDelegate OnPoolServerAllocated; // 0x1008
};

struct UParticleModuleAccelerationBase {
	char bAlwaysInWorldSpace : 1; // 0x38
};

struct UGameCoachListUserWidget {
	TMap<TWeakObjectPtr<UGameCoachLesson>, AWaypoint*> GameCoachWaypoints; // 0x458
	TMap<UGameCoachLesson*, FLessonNotificationData> NotificationLessons; // 0x4a8
};

struct USpectatorPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x188
};

struct UEnvQueryNode {
	int32_t VerNum; // 0x30
};

struct UCanvasPanelSlot {
	FAnchorData LayoutData; // 0x40
	bool bAutoSize; // 0x68
	bool bAutoWidth; // 0x69
	bool bAutoHeight; // 0x6a
	int32_t ZOrder; // 0x6c
};

struct AC4Placement {
	UStaticMeshComponent* StaticMeshComponent; // 0x2a0
	UUsableComponent* UsableComponent; // 0x2a8
	UBoxComponent* UsableTriggerComponent; // 0x2b0
	UAkComponent* AkComponent; // 0x2b8
	UPointLightComponent* PointLightComponent; // 0x2c0
	UGameCoachLessonsComponent* GameCoachLessonsComponent; // 0x2c8
	USceneComponent* AlignComponent; // 0x2d0
	UAnimMontage* UseMontage3P; // 0x2d8
	UMaterialInterface* PlaceableMaterial; // 0x2e0
	UMaterialInterface* C4PlacedMaterial; // 0x2e8
	UAkAudioEvent* AKEC4Activated; // 0x2f0
	UAkAudioEvent* AKEC4ActiveChirp; // 0x2f8
	float PointLightMaxIntensity; // 0x300
	float PointLightMinIntensity; // 0x304
	float FirstFlashChirpDelay; // 0x308
	float InitialFlashChirpDelay; // 0x30c
	int32_t InitialFlashChirpCountMax; // 0x310
	float FlashChirpDelay; // 0x314
};

struct UParticleModuleVectorFieldRotationRate {
	FVector RotationRate; // 0x38
};

struct UParticleModuleLocationWorldOffset_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct UCampaignRunData {
	ECampaignRoundResult LastRoundResult; // 0x30
	bool bNeedsCardDraw; // 0x34
	uint64_t GameplayCardManagerSeed; // 0x38
	TArray<FActiveGameplayCard> StaticDirectorCards; // 0x40
	TArray<FActiveGameplayCard> DynamicDirectorCards; // 0x50
	TArray<FCampaignPlayerSlotData> CampaignPlayerSlotData; // 0x60
};

struct UWander_Special_SpawnPlacementCondition_C {
	FAISpawnEval_InViewOfSafeRoom InViewOfSafeRoom; // 0x78
};

struct UMaterialExpressionConstant3Vector {
	FLinearColor Constant; // 0x48
};

struct UComboButtonWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x38
};

struct UGlobalAnalyticsManager {
	UMatchmakingAnalytics* MatchmakingAnalytics; // 0x90
	UPcHwAnalytics* PcHwAnalyticsComponent; // 0x98
	UProfileDeltaAnalytics* ProfileDeltaAnalytics; // 0xa0
	USurveyPopup* SurveyPopup; // 0xa8
};

struct UNiagaraDataInterfaceColorCurve {
	FRichCurve RedCurve; // 0x60
	FRichCurve GreenCurve; // 0xe0
	FRichCurve BlueCurve; // 0x160
	FRichCurve AlphaCurve; // 0x1e0
};

struct UAnimEvalSet_FallOverStart_C {
	FGameplayEval_RandomChance RandomChance; // 0x1b8
};

struct UHealthBarComponent {
	bool bEnabled; // 0xf8
	FText DisplayName; // 0x100
	bool bEnableHealthbarOnlyForTaggedLocalPlayer; // 0x118
	bool bDisplayHealthbarWhenTeammatesDoDamage; // 0x119
	float ClearOwnerTime; // 0x11c
};

struct UPlayerAnalyticsSettings {
	TArray<FString> PreviouslySentEntitlements; // 0x98
};

struct USubmixEffectSubmixEQPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0x80
};

struct UPlayerInput {
	TArray<FKeyBind> DebugExecBindings; // 0x128
	TArray<FName> InvertedAxis; // 0x168
};

struct UCompressedImageSequenceProtocol {
	int32_t CompressionQuality; // 0xe0
};

struct UParticleModuleSubUVMovie {
	char bUseEmitterTime : 1; // 0x78
	FRawDistributionFloat FrameRate; // 0x80
	int32_t StartingFrame; // 0xb0
};

struct UGameplayTagsDeveloperSettings {
	FString DeveloperConfigName; // 0x30
};

struct UCameraModifier_DamageScreenEffect {
	TArray<FDamageThreshold> DamageThresholds; // 0x630
};

struct UApplyGameModeTagMod {
	FGameplayTagContainer TagsToApply; // 0xd0
};

struct UEnvQueryGenerator_Composite {
	TArray<UEnvQueryGenerator*> Generators; // 0x58
	char bAllowDifferentItemTypes : 1; // 0x68
	char bHasMatchingItemType : 1; // 0x68
	UEnvQueryItemType* ForcedItemType; // 0x70
};

struct UGameCoachPluginSettings {
	UGameCoach* GameCoachClass; // 0x40
	TArray<UGameCoachLesson*> TipLessons; // 0x48
	int32_t NumTipsPerLevel; // 0x58
};

struct UMaterialExpressionSpeedTree {
	FExpressionInput GeometryInput; // 0x48
	FExpressionInput WindInput; // 0x5c
	FExpressionInput LODInput; // 0x70
	FExpressionInput ExtraBendWS; // 0x84
	ESpeedTreeGeometryType GeometryType; // 0x98
	ESpeedTreeWindType WindType; // 0x99
	ESpeedTreeLODType LODType; // 0x9a
	float BillboardThreshold; // 0x9c
	bool bAccurateWindVelocities; // 0xa0
};

struct AAkReverbVolume {
	char bEnabled : 1; // 0x318
	UAkAuxBus* AuxBus; // 0x320
	FString AuxBusName; // 0x328
	float SendLevel; // 0x338
	float FadeRate; // 0x33c
	float Priority; // 0x340
	UAkLateReverbComponent* LateReverbComponent; // 0x348
};

struct ULevelStreamingMod {
	FName LevelStreamingKeyToAdd; // 0xd0
};

struct AWaterVolume {
	TArray<AGobiCharacter*> Characters; // 0x2f8
	UWaterVolumeDef* Definition; // 0x3a8
	UWaterSurface* Surface; // 0x3b0
	bool bSurfaceHeightModifiable; // 0x410
	float WaterSurfaceZ; // 0x414
};

struct UNavMovementComponent {
	FNavAgentProperties NavAgentProps; // 0x128
	float FixedPathBrakingDistance; // 0x158
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x15c
	char bUseAccelerationForPaths : 1; // 0x15c
	char bUseFixedBrakingDistanceForPaths : 1; // 0x15c
	FMovementProperties MovementState; // 0x15d
	UObject* PathFollowingComp; // 0x160
};

struct UParticleModuleLifetime {
	FRawDistributionFloat Lifetime; // 0x38
};

struct UInAppPurchaseRestoreCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UExponentialHeightFogComponent {
	float FogDensity; // 0x230
	float FogHeightFalloff; // 0x234
	FExponentialHeightFogData SecondFogData; // 0x238
	FLinearColor FogInscatteringColor; // 0x244
	UTextureCube* InscatteringColorCubemap; // 0x258
	float InscatteringColorCubemapAngle; // 0x260
	FLinearColor InscatteringTextureTint; // 0x264
	float FullyDirectionalInscatteringColorDistance; // 0x274
	float NonDirectionalInscatteringColorDistance; // 0x278
	float DirectionalInscatteringExponent; // 0x27c
	float DirectionalInscatteringStartDistance; // 0x280
	FLinearColor DirectionalInscatteringColor; // 0x284
	float FogMaxOpacity; // 0x294
	float StartDistance; // 0x298
	float FogCutoffDistance; // 0x29c
	bool bEnableVolumetricFog; // 0x2a0
	float VolumetricFogScatteringDistribution; // 0x2a4
	FColor VolumetricFogAlbedo; // 0x2a8
	FLinearColor VolumetricFogEmissive; // 0x2ac
	float VolumetricFogExtinctionScale; // 0x2bc
	float VolumetricFogDistance; // 0x2c0
	float VolumetricFogStaticLightingScatteringIntensity; // 0x2c4
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x2c8
};

struct UInstantInventoryUpgradeMod {
	FGameplayTagQuery TagQuery; // 0xd0
};

struct ULegalScreen_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x558
	UWidgetAnimation* EpilepsyWarningFadeOut; // 0x560
	UWidgetAnimation* EpilepsyWarningDelay10s; // 0x568
	UWidgetAnimation* LegalFadeOut; // 0x570
	UWidgetAnimation* LegalFadeIn; // 0x578
	UWidgetAnimation* LogoFadeOut; // 0x580
	UWidgetAnimation* LogoFadeIn; // 0x588
	UVerticalBox* LegalPanel; // 0x590
	UShaderBuildProgress_WBP_C* ShaderBuildProgress_WBP; // 0x598
	FMulticastInlineDelegate OnAnimationsFinished; // 0x5a0
	bool bWaitOnAssets; // 0x5b0
	bool bShaderCompilationEnabled; // 0x5b1
	bool bSkipLegalScreen; // 0x5b2
};

struct UShrubEmitterNode {
	FShrubEmitterInfo ShrubInfo; // 0x70
};

struct UNiagaraDataInterfaceVector2DCurve {
	FRichCurve XCurve; // 0x60
	FRichCurve YCurve; // 0xe0
};

struct UFixedFrameRateCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x30
};

struct UAISenseConfig_Blueprint {
	UAISense_Blueprint* Implementation; // 0x50
};

struct UPawnAction_Move {
	AActor* GoalActor; // 0xa0
	FVector GoalLocation; // 0xa8
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

struct UItemFilterUserWidget {
	FMulticastInlineDelegate OnFilterChanged; // 0x458
	TArray<EItemFilter> Filters; // 0x468
	EItemFilter DefaultFilter; // 0x478
};

struct UMovieSceneEventTrack {
	char bFireEventsWhenForwards : 1; // 0x60
	char bFireEventsWhenBackwards : 1; // 0x60
	EFireEventsAtPosition EventPosition; // 0x64
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x68
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UOnSaferoomStateChangeTrigger {
	float TimerInterval; // 0x58
	float InSaferoomDelay; // 0x5c
	float InitialEndingSaferoomDelay; // 0x60
	FVector2D SaferoonWaitingDelayMinMax; // 0x64
	float InjuredChance; // 0x6c
	TWeakObjectPtr<ASafeRoom> StartingSaferoom; // 0x70
};

struct UProjectileImpactEmitterComponent {
	FName GameplayEffectEmitterComponentTag; // 0xe8
	bool bEmitOnFirstImpactOnly; // 0xf0
};

struct UAIDataProvider_TuningData {
	FName ParamName; // 0x30
	float FloatValue; // 0x38
	int32_t IntValue; // 0x3c
	bool BoolValue; // 0x40
	FGameplayTagContainer TagsValue; // 0x48
	FGameplayTagQuery TagQueryValue; // 0x68
	UObject* UObjectValue; // 0xb0
};

struct UMaterialExpressionRayTracingQualitySwitch {
	FExpressionInput Normal; // 0x48
	FExpressionInput RayTraced; // 0x5c
};

struct UAkWwiseTree {
	FMulticastInlineDelegate OnSelectionChanged; // 0x148
	FMulticastInlineDelegate OnItemDragged; // 0x158
};

struct UCharacterMusicInfo {
	AActor* ClassFilter; // 0x38
	UAkAudioEvent* CharacterMusicStart; // 0x40
	UAkAudioEvent* CharacterMusicStop; // 0x48
	float MusicDelayDueToDeath; // 0x50
	FString DistanceRTPCName; // 0x58
	EMusicEventType SupportedCharacterEvents; // 0x68
	float EngagedDistance; // 0x6c
	float MaxDistance; // 0x70
	FName PassiveMusicState; // 0x74
	FName DistantMusicState; // 0x7c
	bool bWantsBeatSync; // 0x84
	FName StateGroup; // 0x88
	FGameplayTag CharacterTag; // 0x90
	TMap<FGameplayTag, FCharacterMusicStateConfig> TagToStateMapping; // 0x98
	FCharacterMusicStateConfig ActiveCharacterMusicState; // 0xf0
	TWeakObjectPtr<AActor> ClosestCharacter; // 0x12c
};

struct UGameplayAction_BotAttack {
	float DefaultAtkRange; // 0x210
	float DefaultEnemyRadius; // 0x214
	UAnimContext_Actor* EnemyContext; // 0x218
	UGameplayEvaluatorSet* FilterSet; // 0x220
	UGameplayEffect* CooldownEffectOnSecondaryAtk; // 0x228
	FGameplayTag BotAtkSecondaryCooldownTag; // 0x230
};

struct ABirdSite {
	int32_t PerchVisibility; // 0x2a0
	bool bAllowHorizontalBirdMovement; // 0x2c8
	bool bEnableTrigger; // 0x2c9
	bool bTriggersAllBirdSites; // 0x2ca
	FGamePropertyFloat ChanceToHorde; // 0x2d0
	FGamePropertyFloat ChanceToAlert; // 0x308
	bool bHordeRetriggerable; // 0x340
	bool bAlertRetriggerable; // 0x341
	FGameplayTagContainer TriggerOmenTags; // 0x348
	float HordeAlertDelay; // 0x368
	int32_t MinBirdsToHordeAndAlert; // 0x36c
	float TrackedCharactersUpdateRate; // 0x370
	float CrouchedTriggerRadius; // 0x374
	FVector2D TakeOffDistance; // 0x378
	FVector2D TakeOffPitch; // 0x380
	FVector2D TakeOffYaw; // 0x388
	EBirdFacing BirdFacing; // 0x390
	bool bBirdsVisibleInInvalidCell; // 0x391
	bool bSnapSplinePointsToGround; // 0x392
	float SnapSearchUp; // 0x394
	float SnapSearchDown; // 0x398
	bool AlertsTriggerAll; // 0x39c
	USplineComponent* SplineComponent; // 0x3a0
	UAkComponent* AkComponent; // 0x3a8
	UPingableComponent* PingableComponent; // 0x3b0
	UBoxComponent* PingableVolume; // 0x3b8
	FGameplayTag HordeCue; // 0x3c0
	FVector2D HordeCueDistance; // 0x3c8
	FVector2D HordeCueHeight; // 0x3d0
	UAkAudioEvent* AKEIdleLoop; // 0x3d8
	UAkAudioEvent* AKEIdleLoopStop; // 0x3e0
	UAkAudioEvent* AKEFlyAway; // 0x3e8
	float MaxDistanceSurprised; // 0x3f0
	ABirdSystem* BirdSystem; // 0x468
};

struct UGameplayAction_BotIdle {
	UGameplayEvaluatorSet* FilterSet; // 0x210
	float MaxIdleTime; // 0x218
	float MaxIdleTimeNoPlayers; // 0x21c
	bool bFocusWatch; // 0x220
	FFocusWatch FocusWatch; // 0x224
	float TeammateObjectiveDistThreshold; // 0x268
	float TeammateObjectiveUpdateFreq; // 0x26c
};

struct UCheckBoxWidgetStyle {
	FCheckBoxStyle CheckBoxStyle; // 0x38
};

struct AAudioMaterialOverride {
	float Priority; // 0x318
	EPhysicalSurface Surface; // 0x31c
	FString SpecialSurface; // 0x320
};

struct UEnvQueryGenerator_NavmeshBordersCentroids {
	UNavigationQueryFilter* NavigationFilter; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x60
	FAIDataProviderFloatValue SpaceBetween; // 0x98
	bool bPlaceOnBorders; // 0xd0
	bool bPlaceCentroids; // 0xd1
	UEnvQueryContext* Querier; // 0xd8
	bool bPlaceAtQuerierLocation; // 0xe0
	UEnvQueryContext* GenerateAround; // 0xe8
};

struct UBTService_Hag {
	FBlackboardKeySelector HagStateBBKey; // 0x78
	FBlackboardKeySelector PrevHagStateBBKey; // 0xa0
};

struct UOmenConfigAsset {
	FGameplayTagQuery OmenQuery; // 0x38
	float Range; // 0x80
	EStencilChannel HighlightChannel; // 0x84
	FGameplayTag ScreenEffectTag; // 0x88
	float ScreenEffectDuration; // 0x90
	float ScreenEffectCooldown; // 0x94
	FDataTableRowHandle Dialogue; // 0x98
	float DialogueCooldown; // 0xb8
	TArray<FOmenConfig> Overrides; // 0xc0
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

struct UAnimEvalSet_Light_Damage_DeathReaction_C {
	FGameplayEval_DamageAmount DamageAmountComparison; // 0xc0
	FGameplayEval_DamageRange DamageAmountRange; // 0x158
	FGameplayEval_DamageType DamageType; // 0x220
	FGameplayEval_DamageBone DamageBone; // 0x2e0
	FGameplayEval_Distance DistanceToDamageSource; // 0x340
	FGameplayEval_Health AvatarHealth; // 0x410
	FGameplayEval_GameplayTags AvatarTags; // 0x468
	FGameplayEval_SpeedRange AvatarSpeed; // 0x500
};

struct ULeaderboardScreen {
	TArray<ULeaderboardListItem*> ListItems; // 0x598
};

struct ASceneCapture2D {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x2b0
};

struct UGameplayEffectEmitterComponent {
	bool bStartActive; // 0xe8
	FGameplayEffectContext EffectContext; // 0x100
	FGameplayEffectsEmitterTestConfig Config; // 0x180
	UAkComponent* AkComponent; // 0x1d0
	bool bUseShapeComponent; // 0x1d8
	float TickInterval; // 0x1dc
	FEffectEmitterSphere CollisionSphere; // 0x1e0
	FName ShapeComponentTag; // 0x1ec
	FGameplayTag ShapeComponentGameplayTag; // 0x1f4
	FGameplayTag EffectSourceLocationComponentTag; // 0x1fc
	bool bEmitOnlyOnce; // 0x204
	bool bRemoveEffectOnEndOverlap; // 0x205
	bool bRemoveEffectOnStop; // 0x206
	bool bRemoveActiveEffectOnTestFail; // 0x207
	bool bRefreshActiveEffectOnTestPass; // 0x208
	bool bRequiresLineOfSight; // 0x209
	bool bRequiresDotProductCheck; // 0x20a
	float MinTargetDotProduct; // 0x20c
	FGameplayTagQuery OverlapTagQuery; // 0x210
	bool bIgnoreOwnerOverlaps; // 0x258
	FName LineOfSightTargetComponentTag; // 0x25c
	bool bUseTargetEyePosForLoS; // 0x264
	float TraceStartForwardOffset; // 0x268
	UGameplayEffect* EffectClass; // 0x2a8
	UGameplayEffect* OwnerEffectClass; // 0x2b0
	FParticleSet ParticleSet; // 0x2c0
	UAkAudioEvent* StartAkEvent; // 0x340
	UAkAudioEvent* StopAkEvent; // 0x348
	UShapeComponent* ShapeComponent; // 0x350
};

struct UTRSPerfSubsystem {
	UTRSPerfOverall* PerfOverall; // 0x40
};

struct UAISenseConfig_Damage {
	UAISense_Damage* Implementation; // 0x50
};

struct UAkLinuxInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0xf8
};

struct UDatasmithCineCameraComponentTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x38
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x40
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x44
	float CurrentFocalLength; // 0x4c
	float CurrentAperture; // 0x50
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x60
};

struct ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x2a0
};

struct UAnimNotify_SharedSoundEnemy {
	ESharedEnemyAnimSound EnemySound; // 0x50
	float ChanceToPlayIfLocal; // 0x54
	float ChanceToPlayIfRemote; // 0x58
};

struct USplineMeshMergeComponent {
	FName StaticMeshToReplaceTag; // 0xe8
};

struct UNavLocationComponent {
	FVector NavmeshQueryExtent; // 0x4b8
};

struct UMovieSceneBuiltInEasingFunction {
	EMovieSceneBuiltInEasing Type; // 0x38
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

struct UParticleModuleColor_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb8
};

struct UFacialAnimationPluginSettings {
	FFilePath LipsyncCommandlineTool; // 0x40
	FDirectoryPath VoiceAudioFolder; // 0x50
	TSoftObjectPtr<UDataTable> LocalizationTable; // 0x60
};

struct ALevelVisibilityVolume {
	bool bAddNewLevelsAsVisibile; // 0x370
	TMap<FName, bool> VisibleLevels; // 0x378
	bool bAffectsSectorsAndPortalsTypes; // 0x3c8
};

struct UGameplayEvalSet_LadderIsReady_C {
	FGameplayEval_NavArea IsLadder; // 0x78
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xe8
	FGameplayEval_IsAvatarFacing IsAvatarFacing; // 0x130
	FGameplayEval_Distance IsAtLadder; // 0x188
	FGameplayEval_LadderIsReady LadderIsReady; // 0x258
};

struct UEnvQueryGenerator_Perception {
	UEnvQueryContext* SearchCenter; // 0x58
};

struct UFTUESettings {
	FMulticastInlineDelegate OnTutorialChanged; // 0x88
	TArray<FName> TutorialPopups; // 0xa8
	TArray<FName> BakedMessageSlugs; // 0xb8
	TArray<FName> DynamicMessageSlugs; // 0xc8
	bool bHasAcceptedEULA; // 0xd8
	bool bHasSetStartupOptions; // 0xd9
	bool bHasSeenVoiceRecordingWarning; // 0xda
	bool bHasCompletedTutorialLevels; // 0xdb
	bool bHasSeenCrossplayWarning; // 0xdc
	bool bHasSeenHardwareToast; // 0xdd
	bool bHasSeenPvPDisconnectWarning; // 0xde
	char CompletedTutorials[0x19]; // 0xdf
};

struct UShaderPlatformQualitySettings {
	FMaterialQualityOverrides QualityOverrides[0x3]; // 0x30
};

struct UMaterialExpressionSobol {
	FExpressionInput Cell; // 0x48
	FExpressionInput Index; // 0x5c
	FExpressionInput Seed; // 0x70
	uint32_t ConstIndex; // 0x84
	FVector2D ConstSeed; // 0x88
};

struct ALevelSequenceSmartActor {
	AActor* ProxyActorToReplace; // 0x460
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

struct UTexture2DDynamic {
	EPixelFormat Format; // 0xc8
};

struct UTimecodeProvider {
	float FrameDelay; // 0x30
};

struct ACommon_AICharacterBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x13a8
	UBoxComponent* AimAssist_Head; // 0x13b0
	UZombieFacialAnimationComponent* ZombieFacialAnimation; // 0x13b8
	UWeakSpotsComponent* WeakSpots; // 0x13c0
	UStumbleDamageAccumulatorComponent* StumbleDamageAccumulator; // 0x13c8
	UCapsuleComponent* Melee; // 0x13d0
	UMutilationComponent* Mutilation; // 0x13d8
	UStandardBoneMap_BP_C* StandardBoneMap_BP; // 0x13e0
	UEnemyAudioComponent_BP_C* EnemyAudioComponent_BP; // 0x13e8
	UPingableComponent* Pingable; // 0x13f0
};

struct UHeroHighlightComponent {
	FGameplayTagContainer ImpairedHighlightTags; // 0x148
	FName VisibilityBone; // 0x168
	UHeroLifeStateComponent* HeroLifeStateComponent; // 0x170
	bool bHeroHighlightEnabled; // 0x178
	FGameplayTagQuery DeadHighlightItemTagQuery; // 0x180
};

struct UAnimCurveCompressionSettings {
	UAnimCurveCompressionCodec* Codec; // 0x30
};

struct USkinnedDamageTextureComponent {
	USkinnedMeshComponent* SkeletalMesh; // 0xe8
	UTextureRenderTarget2D* DamageTexture; // 0xf0
	uint32_t TextureSize; // 0xf8
	float DamageScalar; // 0xfc
	float DamageInfluenceArea; // 0x100
	uint32_t UVSetToUse; // 0x104
	float InnerGradient; // 0x108
	float OutterGradient; // 0x10c
	bool bUseNormalsForNegativeValues; // 0x110
};

struct ULifeStateZombieGhost {
	TArray<FGhostMaterial> GhostMaterials; // 0xa8
};

struct UPlatformCallouts_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458
	UHorizontalBox* PrimaryCallouts; // 0x460
	UHorizontalBox* RootPanel; // 0x468
	UHorizontalBox* SecondaryCallouts; // 0x470
	TMap<FName, UPlatformCalloutButtonUserWidget*> WidgetsByAction; // 0x478
	float ChildSpacing; // 0x4c8
};

struct UCameraAnimInst {
	UCameraAnim* CamAnim; // 0x30
	UInterpGroupInst* InterpGroupInst; // 0x38
	float PlayRate; // 0x58
	UInterpTrackMove* MoveTrack; // 0x70
	UInterpTrackInstMove* MoveInst; // 0x78
	ECameraAnimPlaySpace PlaySpace; // 0x80
};

struct USoundAttenuation {
	FSoundAttenuationSettings Attenuation; // 0x30
};

struct UGameplayCue_Audio_OneShot {
	ESharedSurvivorAnimSound SoundLookup; // 0x30
	bool bPrepSurface; // 0x31
	bool bShouldFollow; // 0x32
	bool bStopOnDestroy; // 0x33
	bool bFPOnly; // 0x34
};

struct UDialogueEvalSet_Surrounded_C {
	FGameplayEval_NearbyCharacters NearbyCharacters; // 0x78
};

struct UAkIOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkAudioSession AudioSession; // 0x98
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0
	FAkTRSPerPlatformSettings TRSSettings; // 0x104
};

struct ULevelSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x890
};

struct UEnvQueryTest_TimeInActiveAreaSet {
	bool bZeroIfNotVisible; // 0x208
};

struct UMountedGunAnimInstance {
	FRotator DesiredRotation; // 0x2b8
	float DesiredBarrelRotation; // 0x2c4
	float BarrelRotationRate; // 0x2c8
	float BarrelRotationFalloffRate; // 0x2cc
	float GunRotationInterpSpeed; // 0x2d0
};

struct UEnvQueryTest_DirectnessDistance {
	UEnvQueryContext* DirectnessTo; // 0x208
	UEnvQueryContext* DirectnessFrom; // 0x210
	float DistanceRadius; // 0x218
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

struct UMovieSceneByteSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct UInterpTrackInstFloatParticleParam {
	float ResetFloat; // 0x30
};

struct UStereoLayerShapeCylinder {
	float Radius; // 0x30
	float OverlayArc; // 0x34
	int32_t Height; // 0x38
};

struct AFogVolume {
	FLinearColor FogColor; // 0x2a0
	float MinVolumeFog; // 0x2b0
	float FogNoiseScale; // 0x2b4
	FVector FogNoisePan; // 0x2b8
	float FogNoisePanSpeed; // 0x2c4
	bool bGenerateGroundFog; // 0x2c8
	float GroundFogHeight; // 0x2cc
	float GroundFogAO; // 0x2d0
	float HeightmapPixelDistance; // 0x2d4
	UMaterialInstanceDynamic* DynamicFogMaterial; // 0x2e0
	UTexture2D* GroundHeightmap; // 0x2e8
};

struct UMovieScene3DAttachSection {
	FName AttachSocketName; // 0x110
	FName AttachComponentName; // 0x118
	EAttachmentRule AttachmentLocationRule; // 0x120
	EAttachmentRule AttachmentRotationRule; // 0x121
	EAttachmentRule AttachmentScaleRule; // 0x122
	EDetachmentRule DetachmentLocationRule; // 0x123
	EDetachmentRule DetachmentRotationRule; // 0x124
	EDetachmentRule DetachmentScaleRule; // 0x125
};

struct UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x60
};

struct UAnimNotify_SpawnDecal {
	UAnimContext_Rotation* TraceDirectionContext; // 0x40
	ECollisionChannel TraceChannel; // 0x48
	float TraceLength; // 0x4c
	FName TraceStartPosBoneName; // 0x50
	float ImpactDirectionAngle; // 0x58
	UDecalDefinition* DecalDefinitionAsset; // 0x60
};

struct URadialForceComponent {
	float Radius; // 0x230
	ERadialImpulseFalloff Falloff; // 0x234
	float ImpulseStrength; // 0x238
	char bImpulseVelChange : 1; // 0x23c
	char bIgnoreOwningActor : 1; // 0x23c
	float ForceStrength; // 0x240
	float DestructibleDamage; // 0x244
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x248
};

struct AGobiSwitchActor {
	FMulticastInlineDelegate SwitchedOn; // 0x2a0
	USceneComponent* SceneRoot; // 0x2b0
	UBoxComponent* UsableVolume; // 0x2b8
	UStaticMeshComponent* UsableMesh; // 0x2c0
	UWaypointSpawnerComponent* WaypointSpawner; // 0x2c8
	UUsableComponent* Usable; // 0x2d0
	UAkComponent* AKComp; // 0x2d8
	UMaterialInterface* MeshMaterial; // 0x2e0
	UMaterialInterface* HologramMeshMaterial; // 0x2e8
	UAkAudioEvent* ActivationSound; // 0x2f0
	UAkAudioEvent* ActivationLoop; // 0x2f8
	UAkAudioEvent* ActivationLoopStop; // 0x300
};

struct ACommon_DismemberedPieceSkel_BP_C {
	USkeletalMeshComponent* SkeletalMesh; // 0x2a0
	USceneComponent* DefaultSceneRoot; // 0x2a8
};

struct UConversationQueue {
	TArray<FQueuedConversation> ConversationQueue; // 0x58
};

struct UHagComponent {
	FGameplayTag HagStateTags[0x5]; // 0x100
	float TimeToInvestigate; // 0x128
	float AlertBerserkDistance; // 0x12c
	FGameplayTagQuery FleeTags; // 0x138
	UBlackboardData* BlackboardAsset; // 0x180
	FBlackboardKeySelector EnemyBBKey; // 0x188
	FBlackboardKeySelector MadAnimPlayedBBKey; // 0x1b0
	FDifficultyBool AllowHordeByDifficulty; // 0x1d8
	AGobiCharacter* HagOwner; // 0x2d0
	AHeroCharacter* BerserkTarget; // 0x2d8
	EHagState CurrentHagState; // 0x2e0
	EHagState PreviousHagState; // 0x2e1
};

struct UBTTask_TriggerAction {
	FAIDataProviderGameplayTagContainerValue GameplayTags; // 0x78
	EGameplayActionMatchingTagType MatchingTagType; // 0xc8
	FAIDataProviderGameplayTagQueryContainerValue MatchingTagQuery; // 0xd0
};

struct ULevelVariantSets {
	UObject* DirectorClass; // 0x30
	TArray<UVariantSet*> VariantSets; // 0x38
};

struct UParticleModuleAttractorLine {
	FVector EndPoint0; // 0x38
	FVector EndPoint1; // 0x44
	FRawDistributionFloat Range; // 0x50
	FRawDistributionFloat Strength; // 0x80
};

struct UGameplayEffectApplyPingEffects {
	FGameplayTagQuery PingTargetQuery; // 0x250
	FGameplayTagQuery CancelTagsQuery; // 0x298
	TArray<UGameplayEffect*> EffectClasses; // 0x2e0
};

struct UAISubsystem {
	UAISystem* AISystem; // 0x38
};

struct UTimeSynchronizationSource {
	bool bUseForSynchronization; // 0x30
	int32_t FrameOffset; // 0x34
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe8
};

struct AGameSession {
	int32_t MaxSpectators; // 0x2a0
	int32_t MaxPlayers; // 0x2a4
	int32_t MaxPartySize; // 0x2a8
	char MaxSplitscreensPerConnection; // 0x2ac
	bool bRequiresPushToTalk; // 0x2ad
	FName SessionName; // 0x2b0
};

struct UTitanStage1TentacleComponent {
	FMulticastInlineDelegate OnTentaclePainRoarStart; // 0xe8
	FMulticastInlineDelegate OnTentaclePainRoarEnd; // 0xf8
	ETitanStage1TentacleState State; // 0x108
	ETitanStage1TentacleFlinchState FlinchState; // 0x114
	TWeakObjectPtr<AActor> TargetActor; // 0x148
	ETitanTentacleId ID; // 0x150
	TArray<UAnimSequence*> EmergeAnimSequenceVariants; // 0x158
	int8_t EmergeAnimSequenceIndex; // 0x170
	TArray<UAnimSequence*> RetractAnimSequenceVariants; // 0x178
	int8_t RetractAnimSequenceIndex; // 0x190
	TArray<UAnimSequence*> IdleAnimSequenceVariants; // 0x198
	int8_t IdleAnimSequenceIndex; // 0x1b0
	TArray<UAnimSequence*> WoundedIdleAnimSequenceVariants; // 0x1b8
	int8_t WoundedIdleAnimSequenceIndex; // 0x1d0
	UBlendSpace1D* SlapAttackWindUpEnterBlendSpace; // 0x1d8
	UBlendSpace1D* SlapAttackWindUpLoopBlendSpace; // 0x1e0
	UBlendSpace1D* SlapAttackWindUpStumbleBlendSpace; // 0x1e8
	UBlendSpace1D* SlapAttackEnterBlendSpace; // 0x1f0
	UBlendSpace1D* SlapAttackGroundLoopBlendSpace; // 0x1f8
	UBlendSpace1D* SlapAttackRecoverBlendSpace; // 0x200
	TArray<UAnimSequence*> PainRoarAnimSequenceVariants; // 0x208
	int8_t PainRoarAnimSequenceIndex; // 0x220
	UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x228
	UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x230
	UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x238
	UAnimSequence* AcidSprayAttackWindUpEnterAnimSequence; // 0x240
	UAnimSequence* AcidSprayAttackWindUpLoopAnimSequence; // 0x248
	float EmergeSeconds; // 0x250
	float RetractSeconds; // 0x254
	float SlapAttackWindUpSeconds; // 0x258
	float SlapAttackWindUpStumbleSeconds; // 0x25c
	float SlapAttackSeconds; // 0x260
	float SlapAttackRecoverSeconds; // 0x264
	float SlapAttackGroundLoopSeconds; // 0x268
	float SlapAttackAOEDelaySeconds; // 0x26c
	float AcidSprayAttackWindUpSeconds; // 0x270
	float AcidSprayAttackLoopSeconds; // 0x274
	float MaxAttackDistance; // 0x278
	float MaxAttackDistanceBelow; // 0x27c
	FGameplayTag AttackVolumeTag; // 0x280
	TArray<UGameplayEffect*> SlapAttackGameplayEffects; // 0x288
	TWeakObjectPtr<AActor> EmergeActor; // 0x298
	UAnimSequence* EmergeSKMAnimSequence; // 0x2a0
	TArray<UAnimSequence*> WindUpFlinchVariants; // 0x2a8
	TArray<UAnimSequence*> GroundLoopFlinchVariants; // 0x2b8
	int8_t WindUpFlinchIndex; // 0x2d0
	int8_t GroundLoopFlinchIndex; // 0x2d1
	FVector2D FlinchCooldownMinMax; // 0x2d8
	float WindUpAccumulatedDamageForStumble; // 0x2e0
	TArray<FGameplayTag> SlapAttackAOEEmitterTags; // 0x2e8
	FName TentacleEndBoneName; // 0x2f8
	TArray<FZOffsetForRange> ZOffsetForRangeArray; // 0x338
	float RiseRate; // 0x348
	UThreatComponent* ThreatComp; // 0x358
	int32_t AllowThreat[0x10]; // 0x360
};

struct UARSaveWorldAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x58
	FMulticastInlineDelegate OnFailed; // 0x68
};

struct UImage {
	FSlateBrush Brush; // 0x148
	FDelegate BrushDelegate; // 0x1d8
	FSlateColor ColorAndOpacity; // 0x1e8
	FDelegate ColorAndOpacityDelegate; // 0x218
	bool bFlipForRightToLeftFlowDirection; // 0x228
	FDelegate OnMouseButtonDownEvent; // 0x22c
};

struct UAnimNotify_PlayMontageNotify {
	FName NotifyName; // 0x40
};

struct UInGameScreen {
	bool bCloseWhenHeroDisabled; // 0x558
	bool bCloseWhenHeroNotAlive; // 0x559
};

struct AAkSpatialAudioVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x318
	UAkLateReverbComponent* LateReverb; // 0x320
	UAkRoomComponent* Room; // 0x328
};

struct UAnimEvalSet_Shared_Melee_C {
	FGameplayEval_Distance DistanceToEnemy; // 0xc0
	FGameplayEval_Distance DistanceZToEnemy; // 0x190
	FGameplayEval_Angle AngleToEnemy; // 0x260
	FAnimEval_MontageLastPlayed HasPlayedRecently; // 0x2c0
	FGameplayEval_RandomChance RandomChance; // 0x310
	FGameplayEval_Dismembered CheckDismembered; // 0x360
	FGameplayEval_Speed EnemySpeed; // 0x3b8
	FGameplayEval_Random RandomScore; // 0x418
	FGameplayEval_GameplayTags AvatarTags; // 0x460
};

struct ANavLinkProxy {
	TArray<FNavigationLink> PointLinks; // 0x2b0
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x2c0
	UNavLinkCustomComponent* SmartLinkComp; // 0x2d0
	bool bSmartLinkIsRelevant; // 0x2d8
	FMulticastInlineDelegate OnSmartLinkReached; // 0x2e0
};

struct UPartyPlayerCardUserWidget {
	FPartyPlayer Player; // 0x460
	bool bIsEnemy; // 0x570
	bool bIsInGroup; // 0x571
	bool bIsGroupLeader; // 0x572
	bool bIsPlayingGobi; // 0x573
	bool bShowGroupMarker; // 0x574
	bool bIsEmpty; // 0x575
	bool bCharacterNameVisible; // 0x576
	EPartyScreenTab PartyScreenTab; // 0x577
	FSlateColor StatusNormalColor; // 0x578
	FSlateColor StatusNotInGameColor; // 0x5a8
	FSlateColor StatusInPartyColor; // 0x5d8
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

struct UARTrackedImage {
	UARCandidateImage* DetectedImage; // 0xe8
	FVector2D EstimatedSize; // 0xf0
};

struct UParticleModuleVelocityOverLifetime {
	FRawDistributionVector VelOverLife; // 0x40
	char Absolute : 1; // 0x88
};

struct UBTService_Brute {
	FBlackboardKeySelector BruteStateBBKey; // 0x78
	FBlackboardKeySelector PrevBruteStateBBKey; // 0xa0
};

struct ACineCameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x830
};

struct UAnimEvalSet_Shared_DestructibleAttackLink_C {
	FGameplayEval_Distance Distance To Destructible; // 0xc0
	FGameplayEval_Distance Z DistanceTo Destructible; // 0x190
	FAnimEval_MontageLastPlayed PlayedRecently; // 0x260
	FGameplayEval_BlockedByPawn BlockedByPawn; // 0x2b0
};

struct UHealthHitMarkerComponent {
	FGameplayTagQuery DamageTagQuery; // 0xe8
	FGameplayTagQuery DamageSourceTagQuery; // 0x130
	float MaxRecentDamageInfoAge; // 0x178
	UHealthComponent* HealthComponent; // 0x180
	AGobiGameStateBase* GobiGameState; // 0x188
};

struct ULandscapeComponent {
	int32_t SectionBaseX; // 0x4b0
	int32_t SectionBaseY; // 0x4b4
	int32_t ComponentSizeQuads; // 0x4b8
	int32_t SubsectionSizeQuads; // 0x4bc
	int32_t NumSubsections; // 0x4c0
	UMaterialInterface* OverrideMaterial; // 0x4c8
	UMaterialInterface* OverrideHoleMaterial; // 0x4d0
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4d8
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x4e8
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x4f8
	TArray<int8_t> LODIndexToMaterialIndex; // 0x508
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x518
	UTexture2D* XYOffsetmapTexture; // 0x528
	FVector4 WeightmapScaleBias; // 0x530
	float WeightmapSubsectionOffset; // 0x540
	FVector4 HeightmapScaleBias; // 0x550
	FBox CachedLocalBox; // 0x560
	LazyObjectProperty CollisionComponent; // 0x57c
	UTexture2D* HeightmapTexture; // 0x598
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x5a0
	TArray<UTexture2D*> WeightmapTextures; // 0x5b0
	FGuid MapBuildDataId; // 0x5c0
	TArray<FGuid> IrrelevantLights; // 0x5d0
	int32_t CollisionMipLevel; // 0x5e0
	int32_t SimpleCollisionMipLevel; // 0x5e4
	float NegativeZBoundsExtension; // 0x5e8
	float PositiveZBoundsExtension; // 0x5ec
	float StaticLightingResolution; // 0x5f0
	int32_t ForcedLOD; // 0x5f4
	int32_t LODBias; // 0x5f8
	FGuid StateId; // 0x5fc
	FGuid BakedTextureMaterialGuid; // 0x60c
	UTexture2D* GIBakedBaseColorTexture; // 0x620
	char MobileBlendableLayerMask; // 0x628
	UMaterialInterface* MobileMaterialInterface; // 0x630
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x638
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x648
};

struct UAnimContext_NavLinkContextLoc {
	ENavLinkContextLocations DesiredContextLocation; // 0x70
};

struct UDefibrillatorComponent {
	FMulticastInlineDelegate OnDefibSucceeded; // 0x160
	FMulticastInlineDelegate OnDefibFailed; // 0x170
	FDefibillatorMoveTickData MoveTickData; // 0x1d8
	float MaxTargetDistance; // 0x1e8
	float MinAngleToTarget; // 0x1ec
	FGameplayTagContainer OwningPlayerBlockingTags; // 0x1f0
	FGameplayTagContainer OwningPlayerAppliedTags; // 0x210
	FGameplayTagQuery DefibTargetTagQuery; // 0x230
	float RequiredUseTime; // 0x278
	UAnimMontage* FirstPersonMontage; // 0x280
	UAnimMontage* ThirdPersonMontage; // 0x288
	TArray<UMontageSet*> TargetMontageSets; // 0x290
	float TargetAnimationTime; // 0x2a0
	FText OwningPlayerProgressBarText; // 0x2a8
	FText TargetProgressBarText; // 0x2c0
	TArray<UGameplayEffect*> ReviveEffects; // 0x2d8
	UAkAudioEvent* AKEOnBeginUse; // 0x2e8
	UAkAudioEvent* AKEOnEndUse; // 0x2f0
	UAkAudioEvent* AKEOnSuccessfulUse; // 0x2f8
};

struct ASocialSpaceGameState {
	FMulticastInlineDelegate OnSocialSpaceMatchStarted; // 0x578
	FMulticastInlineDelegate OnSocialSpaceMatchEnded; // 0x588
	UGameplayCueManager* GameplayCueManager; // 0x5a0
};

struct USoundNodeDoppler {
	float DopplerIntensity; // 0x60
	bool bUseSmoothing; // 0x64
	float SmoothingInterpSpeed; // 0x68
};

struct ATRSSplineAudioSource {
	UAkComponent* SoundSource; // 0x2a0
	USplineComponent* SoundSpline; // 0x2a8
	bool bAudioPlayOnStart; // 0x2b0
	bool bDrawDebugSphere; // 0x2b1
	ESplineMovementMode MoveType; // 0x2b2
	float SplineRate; // 0x2b4
};

struct UAISystemBase {
	FSoftClassPath AISystemClassName; // 0x30
	FName AISystemModuleName; // 0x48
	bool bInstantiateAISystemOnClient; // 0x58
};

struct UAnimNotify_EvalBranch {
	TArray<FEvalBranchData> BranchData; // 0x40
};

struct AAISpawnActor_BP_C {
	USceneComponent* Scene; // 0x590
	UBillboardComponent* Billboard; // 0x598
	UArrowComponent* Arrow; // 0x5a0
	UNavLocationComponent* NavLocation; // 0x5a8
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

struct UAnimationSharingManager {
	TArray<USkeleton*> Skeletons; // 0x30
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x40
};

struct UGobiWatermarkSettings {
	FMargin LegalTextPadding; // 0x40
	FMargin DateTextPadding; // 0x50
	FMargin PartnerDetailsTextPadding; // 0x60
	FTextBlockStyle TextStyle; // 0x70
};

struct UMovieScene2DTransformSection {
	FMovieScene2DTransformMask TransformMask; // 0xe8
	FMovieSceneFloatChannel Translation[0x2]; // 0xf0
	FMovieSceneFloatChannel Rotation; // 0x230
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d0
	FMovieSceneFloatChannel Shear[0x2]; // 0x410
};

struct UMultiLineEditableTextBox {
	FText Text; // 0x168
	FText HintText; // 0x180
	FDelegate HintTextDelegate; // 0x198
	FEditableTextBoxStyle WidgetStyle; // 0x1a8
	FTextBlockStyle TextStyle; // 0xa28
	bool bIsReadOnly; // 0xcc8
	bool AllowContextMenu; // 0xcc9
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xcca
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xccb
	USlateWidgetStyleAsset* Style; // 0xcd0
	FSlateFontInfo Font; // 0xcd8
	FLinearColor ForegroundColor; // 0xd38
	FLinearColor BackgroundColor; // 0xd48
	FLinearColor ReadOnlyForegroundColor; // 0xd58
	FMulticastInlineDelegate OnTextChanged; // 0xd68
	FMulticastInlineDelegate OnTextCommitted; // 0xd78
};

struct UParticleModuleSize_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct USlateVectorArtData {
	TArray<FSlateMeshVertex> VertexData; // 0x30
	TArray<uint32_t> IndexData; // 0x40
	UMaterialInterface* Material; // 0x50
	FVector2D ExtentMin; // 0x58
	FVector2D ExtentMax; // 0x60
};

struct UGameplayAction_Snitch {
	float GatherRadius; // 0x2e8
	float GatherRadiusGrowthAmount; // 0x2ec
	float MaxGatherRadius; // 0x2f0
	TArray<UGameplayEffect*> AlertToEnemyEffects; // 0x2f8
	float SnitchDuration; // 0x308
	FGameplayTagQuery GatherBlockingTags; // 0x318
	AAISmartActor* GatherToSmartActorClass; // 0x360
	FGameplayTag SnitchedAndFinishedTag; // 0x378
};

struct UHeroMovementComponent {
	FHarpoonData Harpoon; // 0xe8c
	AActor* NextHarpoonSource; // 0xec0
	FMovementForceData MovementForceData; // 0xed0
	FMovementForceData PendingMovementForceData; // 0xf10
	FMoveToTargetData MoveToTargetData; // 0xf50
	FMovementSpeedConfig MovementSpeedConfig; // 0x1510
	float MaxIncapSpeed; // 0x15f8
	UInventoryComponent* Inventory; // 0x1600
	AHeroCharacter* OwningHero; // 0x1608
	FGameplayTagQuery BlockingKnockbackTags; // 0x1610
	FMovementForcePhysConfig KnockbackPhysConfig; // 0x1658
	FMovementForcePhysConfig MeleeMovementForcePhysConfig; // 0x1664
	float AlertRadiusCrouch; // 0x167c
	float AlertRadiusWalk; // 0x1680
	float AlertRadiusSprint; // 0x1684
	float AlertLoudnessCrouch; // 0x1688
	float AlertLoudnessWalk; // 0x168c
	float AlertLoudnessSprint; // 0x1690
	float MinTimeBetweenCrouchInputToggle; // 0x1694
	float DelayBetweenAlerts; // 0x16a8
	float DefaultPrimaryInputThreshold; // 0x16ac
};

struct AAudioController {
	TArray<UAkAudioBank*> SharedBanks; // 0x2a0
	TArray<UAkAudioBank*> MapSpecificBanks; // 0x2b0
	UAkAudioBank* PVPBank; // 0x2c0
	UAkSimpleComponent* AkSimpleComp; // 0x2c8
	UAudioStateComponent* AudioStateMonitor; // 0x2d0
	UCardListenerComponent* ModListener; // 0x2d8
	UAkAudioEvent* DemoPausedSound; // 0x2e0
	UAkAudioEvent* DemoUnpausedSound; // 0x2e8
	FName MapMusicIdentifier; // 0x2f0
	FDataTableRowHandle SafeRoomMusicRow; // 0x2f8
	UAkAudioBank* AtmosphereBank; // 0x318
	UAkAudioEvent* AtmosphereStart; // 0x320
	UAkAudioEvent* AtmosphereStop; // 0x328
	UAkAudioEvent* RainEvent; // 0x330
	float StartingPresentationValue; // 0x338
};

struct UGameplayEffectLadderMovementModeComponent {
	FGamePropertyFloatMod AscendSpeedMod; // 0x240
	FGamePropertyFloatMod DescendSpeedMod; // 0x250
};

struct UAnimContext_ClosestCharacter {
	FGameplayTagQuery CharacterTags; // 0x150
	int32_t MinCloseCharacters; // 0x198
	float MaxCharacterDistance; // 0x19c
};

struct UInteractiveCar {
	float LootDoorUseTime; // 0xe8
	float DoorPartialOpenAlpha; // 0xec
	UCurveFloat* DoorOpenCurve; // 0xf0
	UCurveFloat* DoorCloseCurve; // 0xf8
	float CarDamageDialogueMaxRange; // 0x100
	float CarAlarmDialogueMaxRange; // 0x104
	bool bInvulnerable; // 0x108
	FGameplayTag OnFirePingableTag; // 0x10c
	FGameplayTag OnFireLifeStateTag; // 0x114
	FGameplayTag DestroyedLifeStateTag; // 0x11c
	FGameplayTagContainer CrushedDamageTypes; // 0x128
	UAkAudioEvent* Crushed; // 0x148
	float AlarmChance; // 0x150
	float AlarmDelay; // 0x154
	float AlarmDuration; // 0x158
	float AlarmDamageActivationRange; // 0x15c
	FGameplayTagContainer AlarmOmenTags; // 0x160
	UCurveFloat* AlarmVfxIdleCurve; // 0x180
	UCurveFloat* AlarmVfxActiveCurve; // 0x188
	float AlarmLightIntensityIdle; // 0x190
	float AlarmLightIntensityActive; // 0x194
	TArray<FInteractiveCarAlarmMaterialParams> AlarmMaterialParams; // 0x198
	UAkAudioEvent* AlarmLightClick; // 0x1a8
	TMap<UAkAudioEvent*, UAkAudioEvent*> AlarmLoops; // 0x1b0
	FGameplayTag HordeStartCue; // 0x200
	UMeshComponent* BodyMeshComponent; // 0x208
	UMeshComponent* DestroyedBodyMeshComponent; // 0x210
	UMeshComponent* GasCapMeshComponent; // 0x218
	UHealthComponent* HealthComponent; // 0x220
	UAkComponent* AudioComponent; // 0x228
	UAlertComponent* AlertComponent; // 0x230
	UPingableComponent* PingableComponent; // 0x238
	TArray<ULightComponent*> Lights; // 0x240
	TArray<EInteractiveCarDoorState> DoorStates; // 0x250
	TArray<EInteractiveCarWindowState> WindowStates; // 0x270
	UAkAudioEvent* AlarmLoop; // 0x330
	UAkAudioEvent* AlarmLoopStop; // 0x338
	bool bHasAlarm; // 0x340
	bool bAlarmUsed; // 0x341
};

struct UItemObservableComponent {
	FItemObservableToolTipOverride TooltipOverride; // 0x550
	int32_t SimpleCollisionFlags; // 0x5b0
	FVector BoxExtents; // 0x5b4
	TArray<FItemObservableState> ObservableStates; // 0x5c0
};

struct UStumbleComponent {
	bool bPlayerControlledOnly; // 0xe8
	FStumbleConfig StumbleConfig; // 0xf0
};

struct UInterpTrackFloatParticleParam {
	FName ParamName; // 0x98
};

struct ACableActor {
	UCableComponent* CableComponent; // 0x2a0
};

struct USoundfieldEndpointSubmix {
	FName SoundfieldEndpointType; // 0x40
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x48
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x58
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x60
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x68
};

struct USoundClass {
	FSoundClassProperties Properties; // 0x30
	TArray<USoundClass*> ChildClasses; // 0x88
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x98
	FSoundModulation Modulation; // 0xa8
	USoundClass* ParentClass; // 0xb8
};

struct UTextureRenderTargetCube {
	int32_t SizeX; // 0xc8
	FLinearColor ClearColor; // 0xcc
	EPixelFormat OverrideFormat; // 0xdc
	char bHDR : 1; // 0xdd
	char bForceLinearGamma : 1; // 0xdd
};

struct UAnimNotify_AOEEmitter {
	FGameplayTag AOEEmitterTag; // 0x40
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

struct UScaleBox {
	EStretch Stretch; // 0x160
	EStretchDirection StretchDirection; // 0x161
	float UserSpecifiedScale; // 0x164
	bool IgnoreInheritedScale; // 0x168
};

struct UAnimEvalSet_FPMantle_C {
	FGameplayEval_MantleHeight MantleHeight; // 0xc0
};

struct USoundNodeBranch {
	FName BoolParameterName; // 0x60
};

struct UParticleModuleRotation {
	FRawDistributionFloat StartRotation; // 0x38
};

struct UPhysicalMaterialMask {
	int32_t UVChannelIndex; // 0x30
	TextureAddress AddressX; // 0x34
	TextureAddress AddressY; // 0x35
};

struct AChallengeGameState {
	UChallengeMonitorComponent* ChallengeMonitorComponent; // 0x6a8
};

struct UMantleComponent {
	FMulticastInlineDelegate OnMantleStateChanged; // 0x130
	FMantleMontageConfig Config; // 0x270
	bool bActivateOnJump; // 0x348
	bool bActivateOnMovement; // 0x349
	bool bActivateOnMovementWhileFalling; // 0x34a
	float ActivationFallSpeedMin; // 0x34c
	float ActivationFallSpeedMax; // 0x350
	FGameplayTagContainer BlockingTags; // 0x358
	float MinDetectionHeight; // 0x378
	float MaxDetectionHeight; // 0x37c
	float MaxHorizontalDistance; // 0x380
	float MaxLedgeExtrusion; // 0x384
	float OpeningTestStepHeight; // 0x388
	float LandDistance; // 0x38c
	float RestrictSurfaceInclineWhenHeightBelow; // 0x390
	float SurfaceInclineRestriction; // 0x394
	float RelaxedSurfaceInclineRestriction; // 0x398
	bool bCalculateMantleDepth; // 0x39c
	float MaxDepthCalculationSize; // 0x3a0
	float GroundCheckDistance; // 0x3a4
	float MinMantleHeightFromGround; // 0x3a8
	float WallHitRequiredAngle; // 0x3ac
	bool bUseMovementDirectionForWallDetection; // 0x3b0
	bool bUseWallNormalAsMantleDirection; // 0x3b1
	FMantleProceduralClimbParameters DefaultClimbParameters; // 0x3b4
	bool bMoveToWall; // 0x3c0
	float MoveToWallTime; // 0x3c4
	float ClimbTimeout; // 0x3c8
	bool bAutoCrouch; // 0x3cc
	float SnapToWallYawRotationOnHeightAbove; // 0x3d0
	TArray<FMantleClimbHeightConfig> ClimbParametersHeightOverrides; // 0x3d8
	UMontageSet* MontageSet; // 0x3e8
	UMontageSet* LeapMontageSet; // 0x3f0
	FGameplayTagContainer ItemSwappingTags; // 0x3f8
	float MaxMoveSpeedOnMontageEnd; // 0x418
	bool bClearZVelocityOnMontageEnd; // 0x41c
};

struct UNiagaraDataInterfaceCurlNoise {
	uint32_t Seed; // 0x38
};

struct UEnvQueryGenerator_AISpawners {
	UEnvQueryContext* SearchCenter; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x60
	FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0x98
	FAIDataProviderGameplayTagQueryContainerValue SecondaryTagQuery; // 0x110
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

struct USteamNetConnection {
	bool bIsPassthrough; // 0x1ad8
};

struct UParticleSystemComponent {
	UParticleSystem* Template; // 0x4b0
	TArray<UMaterialInterface*> EmitterMaterials; // 0x4b8
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x4c8
	char bResetOnDetach : 1; // 0x4d9
	char bUpdateOnDedicatedServer : 1; // 0x4d9
	char bAllowRecycling : 1; // 0x4d9
	char bAutoManageAttachment : 1; // 0x4d9
	char bAutoAttachWeldSimulatedBodies : 1; // 0x4d9
	char bWarmingUp : 1; // 0x4da
	char bOverrideLODMethod : 1; // 0x4da
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x4da
	ParticleSystemLODMethod LODMethod; // 0x4e5
	EParticleSignificanceLevel RequiredSignificance; // 0x4e6
	TArray<FParticleSysParam> InstanceParameters; // 0x4e8
	FMulticastInlineDelegate OnParticleSpawn; // 0x4f8
	FMulticastInlineDelegate OnParticleBurst; // 0x508
	FMulticastInlineDelegate OnParticleDeath; // 0x518
	FMulticastInlineDelegate OnParticleCollide; // 0x528
	bool bOldPositionValid; // 0x550
	FVector OldPosition; // 0x554
	FVector PartSysVelocity; // 0x560
	float WarmupTime; // 0x56c
	float WarmupTickRate; // 0x570
	float SecondsBeforeInactive; // 0x578
	float MaxTimeBeforeForceUpdateTransform; // 0x580
	TArray<UParticleSystemReplay*> ReplayClips; // 0x5a0
	float CustomTimeDilation; // 0x5b8
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x610
	FName AutoAttachSocketName; // 0x618
	EAttachmentRule AutoAttachLocationRule; // 0x620
	EAttachmentRule AutoAttachRotationRule; // 0x621
	EAttachmentRule AutoAttachScaleRule; // 0x622
	FMulticastInlineDelegate OnSystemFinished; // 0x650
};

struct UInterpTrackAkAudioRTPC {
	FString Param; // 0x98
	char bPlayOnReverse : 1; // 0xa8
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8
};

struct UProjectileThrowComponent {
	FMulticastInlineDelegate OnThrowEnded; // 0x1e0
	FProjectileThrowTickData MoveTickData; // 0x1f0
	bool bUsesTuningDataTable; // 0x218
	FName TuningDataIdentifier; // 0x21c
	FProjectileThrowTuning ProjectileThrowTuning; // 0x228
	FProjectileThrowConfig ThrowConfig; // 0x2a8
	uint16_t ReplicatedSpawnProjectileCount; // 0x5f8
	FReplicatedThrowInfo ReplicatedThrow; // 0x5fc
	AActor* ThrowTarget; // 0x618
};

struct UAnimEvalSet_ItemStance_C {
	FGameplayEval_SelectedItemAnimationStance ItemStance; // 0xc0
};

struct UBoxComponent {
	FVector BoxExtent; // 0x4c8
	float LineThickness; // 0x4d4
};

struct UMutilationHitReactionConfig {
	TArray<UMutilationHitReactionSet*> HitReactionSets; // 0x38
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
	float MoirePatternAdjustment; // 0x298
	int32_t ContactShadowStepCount; // 0x29c
	int32_t ContactShadowDitherSwitch; // 0x2a0
	float ContactShadowDitherAdjustment; // 0x2a4
	int32_t ContactShadowDitherFrameMod; // 0x2a8
	int32_t ContactShadowDistanceCurveMode; // 0x2ac
	char InverseSquaredFalloff : 1; // 0x2b0
	char CastTranslucentShadows : 1; // 0x2b0
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x2b0
	char bAffectDynamicIndirectLighting : 1; // 0x2b0
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x2b0
	char bAllowLightingSubsystemControl : 1; // 0x2b0
	FLightingChannels LightingChannels; // 0x2b4
	FShadowChannels ShadowChannels; // 0x2b5
	float ShadowOpacity; // 0x2b8
	UMaterialInterface* LightFunctionMaterial; // 0x2c0
	FVector LightFunctionScale; // 0x2c8
	UTextureLightProfile* IESTexture; // 0x2d8
	char bUseIESBrightness : 1; // 0x2e0
	float IESBrightnessScale; // 0x2e4
	float LightFunctionFadeDistance; // 0x2e8
	float DisabledBrightness; // 0x2ec
	char bEnableLightShaftBloom : 1; // 0x2f0
	float BloomScale; // 0x2f4
	float BloomThreshold; // 0x2f8
	float BloomMaxBrightness; // 0x2fc
	FColor BloomTint; // 0x300
	bool bUseRayTracedDistanceFieldShadows; // 0x304
	float RayStartOffsetDepthScale; // 0x308
	float Hardness; // 0x30c
	char bOwnerNoSee : 1; // 0x310
	char bOnlyOwnerSee : 1; // 0x310
	bool bCanBeVisCulled; // 0x311
};

struct UMaterialExpressionOneMinus {
	FExpressionInput Input; // 0x48
};

struct UMovieSceneParameterSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UInteractiveToolManager {
	UInteractiveTool* ActiveLeftTool; // 0x38
	UInteractiveTool* ActiveRightTool; // 0x40
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x98
};

struct UGeometryCacheCodecRaw {
	int32_t DummyProperty; // 0x40
};

struct UAnimNotify_SetLeapDestination {
	UAnimContext_LeapComponent* Leap; // 0x40
	UAnimContext_Transform* Destination; // 0x48
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

struct UGameplayCue_BulletImpact {
	UImpactEffectConfig* ImpactTable; // 0x30
	bool bThirdPersonOnly; // 0x38
	bool bGetCharacterMeshImpactResultFromHitResult; // 0x39
	bool bOverrideImpactDirectionWithInstigatorForward; // 0x3a
};

struct ARoomVolume {
	uint32_t Type; // 0x2d8
};

struct UMovieSceneEventSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct UParticleSystemReplay {
	int32_t ClipIDNumber; // 0x30
};

struct UInputKeySelector {
	FButtonStyle WidgetStyle; // 0x148
	FTextBlockStyle TextStyle; // 0x3e0
	FInputChord SelectedKey; // 0x680
	FSlateFontInfo Font; // 0x6a0
	FMargin Margin; // 0x700
	FLinearColor ColorAndOpacity; // 0x710
	FText KeySelectionText; // 0x720
	FText NoKeySpecifiedText; // 0x738
	bool bAllowModifierKeys; // 0x750
	bool bAllowGamepadKeys; // 0x751
	TArray<FKey> EscapeKeys; // 0x758
	FMulticastInlineDelegate OnKeySelected; // 0x768
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x778
};

struct UEnvQueryContext_PerceivedActors {
	FAISenseAffiliationFilter Affiliation; // 0x30
	FGameplayTagQuery TagQueryToMatch; // 0x38
};

struct UPlatformCalloutImageUserWidget {
	UTexture2D* PCTextureOverride; // 0x458
};

struct UAnimComposite {
	FAnimTrack AnimationTrack; // 0xc0
};

struct AAkAcousticPortal {
	AkAcousticPortalState InitialState; // 0x348
	float ObstructionRefreshInterval; // 0x34c
	ECollisionChannel ObstructionCollisionChannel; // 0x350
};

struct UOptionDefaultsDeveloperSettings {
	float VoiceVolume; // 0x40
	float MicBoost; // 0x44
	float MicThreshold; // 0x48
	bool bVOIPSideChainEnabled; // 0x4c
	bool bSuppressAudioOnFocusLost; // 0x4d
	FName MixProfileName; // 0x50
	bool bStaminaBreathEnabled; // 0x58
	TSoftObjectPtr<UDataTable> GPUSettingsTable; // 0x60
};

struct UAnimSingleNodeInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UClipReloadComponent {
	FReplicatedReloadData ReplicatedReloadData; // 0x258
	float ReloadLength; // 0x260
	float ReloadAnimationLength; // 0x264
	float ReloadAddTime; // 0x268
	bool bAutoReloadWhenEmpty; // 0x26c
	UAnimMontage* ReloadMontageFP; // 0x270
	UAnimMontage* ReloadMontage3P; // 0x278
	FGameplayTag AppliedTag; // 0x280
	FGameplayTagContainer BlockingTags; // 0x288
	FGameplayTagContainer InterruptingTags; // 0x2a8
	FGameplayTagContainer CancellingTags; // 0x2c8
	UAkAudioEvent* BackgroundReloadAKE; // 0x2e8
};

struct UParticleModuleOrientationAxisLock {
	EParticleAxisLock LockAxisFlags; // 0x38
};

struct UPostRoundScreen {
	TArray<FPostRoundPanelInfo> PanelInfoArray; // 0x558
};

struct UGobiNavLinkComponent {
	FNavLinkGenerator NavGenerationData; // 0x4d0
	uint32_t CustomUserID; // 0x580
	TArray<FNavLinkOffset> RelativeLinkOffsets; // 0x588
	UNavArea* EnabledNavAreaClass; // 0x598
	UNavArea* BeginPlayNavAreaClass; // 0x5b8
	bool bEnableBeginPlayNavAreaClass; // 0x5c0
	float HighClimbDistance; // 0x5c4
	TArray<FVector> ContextLocations; // 0x5c8
	TArray<float> ContextDistances; // 0x5d8
	float ErrorTolerance; // 0x5e8
};

struct UMaterialExpressionNoise {
	FExpressionInput Position; // 0x48
	FExpressionInput FilterWidth; // 0x5c
	float Scale; // 0x70
	int32_t Quality; // 0x74
	ENoiseFunction NoiseFunction; // 0x78
	char bTurbulence : 1; // 0x7c
	int32_t Levels; // 0x80
	float OutputMin; // 0x84
	float OutputMax; // 0x88
	float LevelScale; // 0x8c
	char bTiling : 1; // 0x90
	uint32_t RepeatSize; // 0x94
};

struct UCardFan {
	FMulticastInlineDelegate OnShowExpandedCard; // 0x160
	FMulticastInlineDelegate OnUserScrolled; // 0x170
	UUserWidget* CardWidgetClass; // 0x180
	FScrollBarStyle ScrollBarStyle; // 0x188
	ESlateVisibility ScrollBarVisibility; // 0x6a0
	EConsumeMouseWheel ConsumeMouseWheel; // 0x6a1
	FVector2D ScrollbarThickness; // 0x6a4
	FMargin ScrollbarPadding; // 0x6ac
	bool bAlwaysShowScrollbar; // 0x6bc
	bool bAlwaysShowScrollbarTrack; // 0x6bd
	bool bScrollBarHasSizeWhenNotInUse; // 0x6be
	bool bAllowOverscroll; // 0x6bf
	bool bAnimateWheelScrolling; // 0x6c0
	bool bHandleNavigation; // 0x6c1
	EDescendantScrollDestination NavigationDestination; // 0x6c2
	float NavigationScrollPadding; // 0x6c4
	FKey ClickDragKey; // 0x6c8
	bool bAllowClickDragScrolling; // 0x6e0
	float WheelScrollMultiplier; // 0x6e4
	float ScrollAnimationSpeed; // 0x6e8
	float MinChildSize; // 0x6ec
	float ChildSpacing; // 0x6f0
	UUserWidget* ExpandedCardWidget; // 0x708
};

struct UGPEvalSet_FilterNavLink {
	TArray<UNavArea*> AllowedNavAreas; // 0x78
	FGameplayEval_Distance MaxStartRangeEval; // 0x88
	FGameplayEval_NavArea AllowedNavAreaEval; // 0x158
};

struct USoundGroups {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x30
};

struct UPawnActionsComponent {
	APawn* ControlledPawn; // 0xe8
	TArray<FPawnActionStack> ActionStacks; // 0xf0
	TArray<FPawnActionEvent> ActionEvents; // 0x100
	UPawnAction* CurrentAction; // 0x110
};

struct UMaterialExpressionRotateAboutAxis {
	FExpressionInput NormalizedRotationAxis; // 0x48
	FExpressionInput RotationAngle; // 0x5c
	FExpressionInput PivotPoint; // 0x70
	FExpressionInput Position; // 0x84
	float Period; // 0x98
};

struct UNiagaraDataInterfaceGrid2D {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
};

struct UGameDirectorSeamlessTravelData {
	float TimeSinceLastHorde; // 0x30
};

struct AGobiSplineMeshActor {
	USplineComponent* EditableSpline; // 0x2a0
	TArray<USplineMeshComponent*> GeneratedSubObjects; // 0x2a8
	TArray<UTextRenderComponent*> PointNumbers; // 0x2b8
	bool bFinalized; // 0x2c8
	bool bUseCollisionProfile; // 0x2c9
	FName CollisionProfile; // 0x2cc
	ECollisionChannel CollisionChannelToUse; // 0x2d4
	ECollisionEnabled CollisionEnabled; // 0x2d5
	ESplineMeshMode SplineMeshMode; // 0x2d6
	ESplineMeshAxis ForwardAxis; // 0x2d7
	float Padding; // 0x2d8
	UStaticMesh* Mesh; // 0x2e0
	bool bCastShadows; // 0x2e8
	int8_t ForceLOD; // 0x2e9
	bool bLockCurrentMeshArray; // 0x2ea
	bool bContiguous; // 0x2eb
	TArray<FSplineMeshElement> AvailableMeshes; // 0x2f0
	bool bSequential; // 0x300
	bool bPreventAdjancency; // 0x301
	FVector GlobalScale; // 0x304
	FVector CachedGlobalScale; // 0x310
	TArray<FPerInstanceData> PerInstanceData; // 0x320
	TArray<FVector> PerInstanceRotation; // 0x330
	bool bUseCapMeshes; // 0x340
	FCapData CapMeshes; // 0x348
	bool bDrawOnlySpline; // 0x368
	bool bShowDebugMaterials; // 0x369
	TArray<UMaterialInterface*> DebugMaterials; // 0x370
	bool bDrawDebugNumbers; // 0x380
	FDebugNumbersPrefs DebugNumbersPrefs; // 0x384
	TArray<FSplineMeshElement> MeshesToUse; // 0x390
	TArray<float> Distances; // 0x3a0
	TArray<UMaterialInterface*> DebugMaterialsToUse; // 0x3b0
	TArray<FSplineMeshElement> MeshesCache; // 0x3c0
};

struct UBTService_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UDamageStatTracker {
	FMulticastInlineDelegate OnIncrementKillStat; // 0x40
	FGameplayTagQuery SnitcherTagsQuery; // 0x50
	AGobiCharacter* CurrentCharacter; // 0x98
};

struct UAkAudioBank {
	bool IsDialogueBank; // 0x30
	bool IsCacheManaged; // 0x31
	TArray<FString> MemberEvents; // 0x38
};

struct UGameplayEffectRecoilComponent {
	FGamePropertyFloatMod RecoilYawScaleMod; // 0x250
	FGamePropertyFloatMod RecoilPitchScaleMod; // 0x260
	FGamePropertyFloatMod RecoilMinRequiredYawScaleMod; // 0x270
	FGamePropertyFloatMod RecoilMinRequiredPitchScaleMod; // 0x280
	FGamePropertyFloatMod GunKickYawScaleMod; // 0x290
	FGamePropertyFloatMod GunKickPitchScaleMod; // 0x2a0
	FGamePropertyFloatMod GunKickRollScaleMod; // 0x2b0
	FGamePropertyFloatMod GunKickMaxAngleScaleMod; // 0x2c0
	FGamePropertyFloatMod PushbackInitialOffsetScaleMod; // 0x2d0
	FGamePropertyFloatMod PushbackStabilizedOffsetScaleMod; // 0x2e0
};

struct UZombieMeshConfigMod {
	FSkeletalMeshConfigMod MeshConfigMod; // 0xd0
};

struct UMaterialExpressionLandscapeLayerSwitch {
	FExpressionInput LayerUsed; // 0x48
	FExpressionInput LayerNotUsed; // 0x5c
	FName ParameterName; // 0x70
	char PreviewUsed : 1; // 0x78
	FGuid ExpressionGUID; // 0x7c
};

struct UShadowMapTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0xf0
};

struct UDocHealOtherLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e8
};

struct USourceEffectChorusPreset {
	FSourceEffectChorusSettings Settings; // 0x88
};

struct ULogoutCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UChargeComponent {
	FMulticastInlineDelegate OnChargeEnded; // 0x1e0
	FMulticastInlineDelegate OnChargeBreakPressed; // 0x1f0
	int32_t ChargePushingCount; // 0x200
	FHitResult StumbleImpact; // 0x334
	FChargeMoveTickData MoveTickData; // 0x3bc
	UAnimMontage* CurrentActiveMontage; // 0x3e0
	UGameplayEvaluatorSet* FilterSet; // 0x3e8
	TArray<UAnimMontage*> AccelerateMontages; // 0x3f0
	TArray<UAnimMontage*> DecelerateMontages; // 0x400
	TArray<UAnimMontage*> CharacterImpactMontages; // 0x410
	TArray<UAnimMontage*> ImpactStumbleMontages; // 0x420
	TArray<FName> DisableMovementInputScalars; // 0x430
	bool bStumbleOnWorldImpacts; // 0x440
	bool bDeflectOnWorldImpacts; // 0x441
	bool bPlayerCancelsChargeWhenFalling; // 0x442
	float MinTimeBeforeChargeButtonCancels; // 0x444
	bool bUsesBreakButton; // 0x448
	float MinTimeBeforeBackButtonCancels; // 0x44c
	float BreakDeceleration; // 0x450
	bool bAIStopAtCliffs; // 0x454
	bool bAICancelsChargeWhenFalling; // 0x455
	UImpactEffectConfig* StumbleImpactTable; // 0x458
	FGameplayTagContainer AppliedTags; // 0x460
	FGameplayTagContainer RampUpTags; // 0x480
	FGameplayTagContainer DeceleratingTags; // 0x4a0
	FGameplayTagQuery CancelTags; // 0x4c0
	FGameplayTagQuery AccelerateMontageTagQuery; // 0x508
	FGameplayTagQuery BlockingTags; // 0x550
	FGameplayTagQuery BlockingTargetTags; // 0x598
	FGameplayTagQuery InterruptChargeCharacterTags; // 0x5e0
	FGameplayTag ChargeCollisionTag; // 0x628
	FGameplayTagQuery BlockingChargeImpactMontageTags; // 0x630
	TArray<UGameplayEffect*> ChargingEffects; // 0x678
	TArray<UGameplayEffect*> ChargeCollisionEffects; // 0x688
	TArray<UGameplayEffect*> ImpactStumbleEffects; // 0x698
	TArray<FEnemyAudioEvent> AudioStartEvents; // 0x6a8
	TArray<FEnemyAudioEvent> AudioStopEvents; // 0x6b8
	float ChargePushMinTime; // 0x6c8
	float MaxChargePathAngle; // 0x6cc
	float MaxNavLinkClimbHeight; // 0x6d4
	float TraceAheadDistance; // 0x6d8
	float TraceAheadNavMeshDistance; // 0x6dc
	FGameplayTag ImpactExplosionComponentTag; // 0x6e0
	FChargeTuning ChargeTuning; // 0x6e8
};

struct UAnimContext_DamageSource {
	UAnimContext_DamageInfo* DamageInfo; // 0x70
};

struct UAudioStateComponent {
	FMulticastInlineDelegate OnUIActivated; // 0xe8
	FMulticastInlineDelegate OnIncapStateChanged; // 0xf8
	FMulticastInlineDelegate OnResetMission; // 0x108
	FMulticastInlineDelegate OnMissionSuccess; // 0x118
	FMulticastInlineDelegate OnCampaignEnded; // 0x128
	FMulticastInlineDelegate OnLoadingNextMission; // 0x138
	UAkAudioEvent* AKERiddenSaferoomOpen; // 0x148
	bool bIsFullscreen; // 0x150
	bool bIsMoviePlaying; // 0x151
	bool bIsInGameCinematicPlaying; // 0x152
	bool bIsLoadingIntoNextMission; // 0x153
};

struct UBTService_ChaserRunEQS {
	FBlackboardKeySelector WallClingBlackboardKey; // 0x190
};

struct UEditableGameplayTagQueryExpression_AllExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x30
};

struct UMeleeGameCoachLesson {
	UGameplayContext_NearbyCharacters* NearbyCharactersContext; // 0x460
};

struct AVendorNPC {
	bool bDisableNags; // 0x2a0
	float DelayForAttract; // 0x2a4
	FVector2D DialogueAmbientRate; // 0x2a8
	FVector2D DialogueNagRate; // 0x2b0
	bool bIsSaferoomVendor; // 0x2b8
	bool bEndingSaferoom; // 0x2b9
	float FocusTrackingUpdateRate; // 0x2bc
	USceneComponent* DefaultRootComponent; // 0x2c0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x2c8
	UAkSkeletalComponent* AudioEmitterComponent; // 0x2d0
	UGobiDialogueComponent* DialogueComponent; // 0x2d8
	ULiteCharacterAudioComponent* AudioComponent; // 0x2e0
	UFacialAnimationComponent* FacialAnimationComponent; // 0x2e8
	FDataTableRowHandle VoiceRowHandle; // 0x2f0
	UBoxComponent* NagBoxComponent; // 0x310
	EVendorAnimBehaviorState State; // 0x338
};

struct UNiagaraDataInterfaceNeighborGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xf8
};

struct UPlayDeathReactionComponent {
	TArray<UMontageSet*> MontageSets; // 0xe8
	FGameplayTag DieToRagdollTag; // 0xf8
	UAnimMontage* ReplicatedDeathReactionMontage; // 0x140
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x58
	FMulticastInlineDelegate OnFailed; // 0x68
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

struct UDistributionFloatUniformCurve {
	FInterpCurveVector2D ConstantCurve; // 0x40
};

struct UDemoNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x858
	float CheckpointSaveMaxMSPerFrame; // 0xc6c
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xca0
	bool bIsLocalReplay; // 0xd00
	TArray<APlayerController*> SpectatorControllers; // 0xd08
};

struct UNestBoilComponent {
	UAkAudioEvent* DamageSound; // 0x180
};

struct UMaterialExpressionConstant {
	float R; // 0x48
};

struct UAnimEvaluator_HitBone {
	FName HitBoneBelow; // 0x50
	UAnimContext_HitResult* Hit; // 0x58
};

struct UGameplayEffectDamageFilter {
	UDamageFilter* OutgoingDamageFilter; // 0x248
	UDamageFilter* IncomingDamageFilter; // 0x250
	FGamePropertyFloatMod WeakSpotDamageMultiplierMod; // 0x258
	FGamePropertyFloatMod OutgoingFriendlyFireScaleMod; // 0x268
};

struct UBorder {
	EHorizontalAlignment HorizontalAlignment; // 0x160
	EVerticalAlignment VerticalAlignment; // 0x161
	FSlateColor ContentColorAndOpacity; // 0x168
	FDelegate ContentColorAndOpacityDelegate; // 0x198
	FMargin Padding; // 0x1a8
	FSlateBrush Background; // 0x1b8
	FDelegate BackgroundDelegate; // 0x248
	FSlateColor BrushColor; // 0x258
	FDelegate BrushColorDelegate; // 0x288
	FVector2D DesiredSizeScale; // 0x298
	bool bFlipForRightToLeftFlowDirection; // 0x2a0
	FDelegate OnMouseButtonDownEvent; // 0x2a4
	FDelegate OnMouseButtonUpEvent; // 0x2b4
	FDelegate OnMouseMoveEvent; // 0x2c4
	FDelegate OnMouseDoubleClickEvent; // 0x2d4
};

struct UHeroLOSVolumeComponent {
	TArray<FVector> LOSVolumeExtents; // 0x4b0
	TArray<FVector> LOSTestPositions; // 0x4c0
};

struct UUniformInteger {
	int32_t Magnitude; // 0xe8
};

struct UMovieSceneLevelVisibilityTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct ULifeStateFakeDead {
	FName AutoRagdollFromBoneName; // 0xa8
	FName DeadCapsuleCollisionProfile; // 0xb0
	TArray<FGameplayTag> TurnOffCollisionOnComponents; // 0xb8
	float HealthResetPct; // 0xc8
	bool bShouldRagdoll; // 0xcc
	int32_t MaxFakeDeathCount; // 0xd0
	bool bOnFinalDeathBecomeInvulnerable; // 0xd4
	FGameplayTagContainer RemovedTags; // 0xd8
	FGameplayTagContainer FinalDeathAppliedTags; // 0xf8
};

struct UAnimNotifyState_SetTags {
	FGameplayTagContainer Tags; // 0x38
	bool bApplyToAnimatingActor; // 0x58
	UAnimContext_Actor* Actor; // 0x60
	UAnimContext_GameplayTags* ActorTags; // 0x68
};

struct UNavRedirectorComponent {
	UGobiNavLinkComponent* NavLink; // 0xe8
	UGobiNavModifierComponent* NavMod; // 0xf0
};

struct UGameplayAction {
	FGameplayTagContainer ActionTags; // 0x30
	FGameplayTagContainer CancelActionsWithTag; // 0x50
	FGameplayTagContainer BlockActionsWithTag; // 0x70
	FGameplayTagQuery BlockActionsThatMatch; // 0x90
	FGameplayTagQuery RunningActionTagRequirements; // 0xd8
	FGameplayTagContainer ActivationOwnedTags; // 0x120
	FGameplayTagQuery ActivatingActorTagRequirements; // 0x140
	UGameplayEffect* CooldownEffect; // 0x188
	UGameplayEffect* CooldownEffectOnSuccess; // 0x190
	UGameplayEffect* CooldownEffectOnFailed; // 0x198
	TArray<UGameplayEffect*> ActivationEffects; // 0x1a0
	char Priority; // 0x1b0
	bool bDisableSteeringBehavior; // 0x1b1
	USteeringBehavior* SteeringBehaviorOverride; // 0x1b8
	USteeringControl* SteeringControlOverride; // 0x1c0
	AActor* ActivatingActor; // 0x1e0
	AGobiCharacter* ActivatingCharacter; // 0x1e8
};

struct UFP_HeroLoco_Base_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x3c0
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x438
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x468
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x4e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x510
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x538
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x560
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x588
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x5b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x5d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x600
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x628
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x650
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x678
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x6a0
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x718
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x748
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x7c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x7f0
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x868
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x898
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x910
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x940
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x968
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x9e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa10
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xa88
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0xab8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xb68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb98
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc10
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xc40
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xcf0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xd20
	FWeaponAnimState WeaponAnimState; // 0xdd0
	FHeroAnimStateFP HeroAnimState; // 0xe14
	FWeaponAnimsFP FirstPersonAnimations; // 0xe40
	float MinWalkStartSpeed; // 0xe80
	FGobiAnimationState GobiAnimState; // 0xe84
	FLadderAnimStateFP LadderState; // 0xedc
};

struct AGobiPlayerController {
	UPlayerSpraysComponent* PlayerSprays; // 0x7f0
	UPlayerWaypointsComponent* PlayerWaypoints; // 0x7f8
	FMulticastInlineDelegate OnBeginPlayingState; // 0x810
	FMulticastInlineDelegate OnEndPlayingState; // 0x820
	FMulticastInlineDelegate OnBeginSpectatingState; // 0x830
	FMulticastInlineDelegate OnEndSpectatingState; // 0x840
	UScreenFXComponent* ScreenFXComponent; // 0x850
	FSyncedClientPlayerControllerCVars SyncedClientCVars; // 0x85c
	UTriggerEffectsHandler* TriggerEffectsHandler; // 0x870
	AActor* CheatBoomClass; // 0x878
	AActor* CheatMolotovClass; // 0x880
	UTriggerEffectsHandler* TriggerEffectsHandlerClass; // 0x888
};

struct UDamageFilterComponent {
	UDamageFilter* InitialOutgoingDamageFilterClass; // 0xe8
};

struct UAnimNotifyState_TitanStage3TailThrashModeDisable {
	ETitanStage3TailThrashMode ThrashMode; // 0x38
};

struct USignInTask {
	UGobiWebServices* GobiWebServices; // 0x50
	UGobiWBP1* GobiWBP1; // 0x58
	UGobiGameInstance* GameInstance; // 0x60
	TArray<FSignInTaskDependency> Dependencies; // 0x68
};

struct ABaseball_Bat_BP_C {
	UItemAnimationDataComponent* ItemAnimationData; // 0x4e0
	UTraceMeleeComponent* MeleeAttack; // 0x4e8
};

struct UBTService_Health {
	FBlackboardKeySelector HealthBBKey; // 0x78
	UEnum* HealthLabelEnum; // 0xa0
	TArray<FHealthRange> HealthRanges; // 0xa8
};

struct UFTUETutorialScreen {
	TSoftObjectPtr<UTexture2D> BGTexture; // 0x5d8
};

struct USynthSamplePlayer {
	USoundWave* SoundWave; // 0x710
	FMulticastInlineDelegate OnSampleLoaded; // 0x718
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x728
};

struct UMovieScenePropertyTrack {
	UMovieSceneSection* SectionToKey; // 0x60
	FName PropertyName; // 0x68
	FString PropertyPath; // 0x70
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UMaterialExpressionArcsineFast {
	FExpressionInput Input; // 0x48
};

struct UListView {
	EOrientation Orientation; // 0x320
	ESelectionMode SelectionMode; // 0x321
	EConsumeMouseWheel ConsumeMouseWheel; // 0x322
	bool bClearSelectionOnClick; // 0x323
	bool bIsFocusable; // 0x324
	float EntrySpacing; // 0x328
	bool bReturnFocusToSelection; // 0x32c
	TArray<UObject*> ListItems; // 0x330
	FMulticastInlineDelegate BP_OnEntryInitialized; // 0x350
	FMulticastInlineDelegate BP_OnItemClicked; // 0x360
	FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x370
	FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x380
	FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x390
	FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x3a0
};

struct UTestMovieSceneTrack {
	bool bHighPassFilter; // 0x60
	TArray<UMovieSceneSection*> SectionArray; // 0x68
};

struct UHitMarkerComponent {
	FMulticastInlineDelegate OnHitMarkerRequested; // 0xe8
	FGameplayTagQuery RequiredVictimTags; // 0xf8
};

struct UMasterAudioSubmixCaptureProtocol {
	FString Filename; // 0x60
};

struct ASpawnLocalityVolume {
	float DefaultWeight; // 0x2d8
	FGameplayTagQuery TagRequirements; // 0x2e0
	TArray<FSpawnLocalityCharacterSet> CharacterSets; // 0x328
};

struct UWmfMediaSettings {
	bool AllowNonStandardCodecs; // 0x30
	bool LowLatency; // 0x31
	bool NativeAudioOut; // 0x32
	bool HardwareAcceleratedVideoDecoding; // 0x33
};

struct UAnimEvaluator {
	bool bDrawDebug; // 0x30
	float Weight; // 0x34
	EEvalType EvalType; // 0x38
	bool bInvertTest; // 0x39
	int32_t ID; // 0x3c
};

struct UGizmoLocalVec2ParameterSource {
	FVector2D Value; // 0x50
	FGizmoVec2ParameterChange LastChange; // 0x58
};

struct UVerticalBoxSlot {
	FSlateChildSize Size; // 0x40
	FMargin Padding; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x60
	EVerticalAlignment VerticalAlignment; // 0x61
};

struct UNavCollisionBase {
	char bIsDynamicObstacle : 1; // 0x30
};

struct UAkSwitchInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettings CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
	FAkTRSPerPlatformSettings TRSSettings; // 0xf0
};

struct UDistributionVectorParameterBase {
	FName ParameterName; // 0x58
	FVector MinInput; // 0x60
	FVector MaxInput; // 0x6c
	FVector MinOutput; // 0x78
	FVector MaxOutput; // 0x84
	DistributionParamMode ParamModes[0x3]; // 0x90
};

struct UAudioCaptureComponent {
	int32_t JitterLatencyFrames; // 0x710
};

struct UGobiPlayerChallengeComponent {
	FMulticastInlineDelegate OnPlayerChallengeRankUpdated; // 0xe8
	FGobiPlayerChallengeRank ChallengeRank; // 0x100
};

struct UEnvQueryGenerator_BlueprintBase {
	FText GeneratorsActionDescription; // 0x58
	UEnvQueryContext* Context; // 0x70
	UEnvQueryItemType* GeneratedItemType; // 0x78
};

struct UParticleModuleMeshMaterial {
	TArray<UMaterialInterface*> MeshMaterials; // 0x38
};

struct UNiagaraDataInterfaceSkeletalMesh {
	AActor* Source; // 0x38
	FNiagaraUserParameterBinding MeshUserParameter; // 0x40
	USkeletalMeshComponent* SourceComponent; // 0x68
	ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70
	TArray<FName> SamplingRegions; // 0x78
	int32_t WholeMeshLOD; // 0x88
	TArray<FName> FilteredBones; // 0x90
	TArray<FName> FilteredSockets; // 0xa0
	FName ExcludeBoneName; // 0xb0
	char bExcludeBone : 1; // 0xb8
};

struct UPostProcessComponent {
	FPostProcessSettings Settings; // 0x240
	float Priority; // 0x7a0
	float BlendRadius; // 0x7a4
	float BlendWeight; // 0x7a8
	char bEnabled : 1; // 0x7ac
	char bUnbound : 1; // 0x7ac
};

struct ALevelSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2b0
	ULevelSequencePlayer* SequencePlayer; // 0x2c8
	FSoftObjectPath LevelSequence; // 0x2d0
	TArray<AActor*> AdditionalEventReceivers; // 0x2e8
	FLevelSequenceCameraSettings CameraSettings; // 0x2f8
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x300
	UMovieSceneBindingOverrides* BindingOverrides; // 0x308
	char bAutoPlay : 1; // 0x310
	char bOverrideInstanceData : 1; // 0x310
	char bReplicatePlayback : 1; // 0x310
	UObject* DefaultInstanceData; // 0x318
	ULevelSequenceBurnIn* BurnInInstance; // 0x320
	bool bShowBurnin; // 0x328
};

struct UNavLinkComponent {
	TArray<FNavigationLink> Links; // 0x4b8
};

struct UAnimEvalSet_Shared_DestructibleAttack_C {
	FGameplayEval_Distance Distance To Destructible; // 0xc0
	FGameplayEval_Distance Z DistanceTo Destructible; // 0x190
	FAnimEval_MontageLastPlayed PlayedRecently; // 0x260
	FGameplayEval_BlockedByPawn BlockedByPawn; // 0x2b0
};

struct UMapSelectUserWidget {
	FMulticastInlineDelegate OnMapSelected; // 0x458
	FMulticastInlineDelegate OnMapFocused; // 0x468
	TSet<UGobiUserWidget*> HeaderWidgets; // 0x478
	TSet<UMatchmakingSettingEntryUserWidget*> MapWidgets; // 0x4c8
};

struct UEnvQueryTest_IsCurrentEnemy {
	FAIDataProviderFloatValue StickyTimeDP; // 0x208
};

struct UBossPositionTrigger {
	float TestInterval; // 0x40
	float WarningNameCooldown; // 0x44
	float SpottedByEnemyCooldown; // 0x4c
	TSoftClassPtr<UObject> CommonFilterClass; // 0x58
	TMap<TSoftClassPtr<UObject>, FBossReqsData> BossReqsMapData; // 0x80
	FGameplayTag FleeTag; // 0xd0
	float DelayForBossFlee; // 0xd8
	float BossFleeCooldown; // 0xdc
};

struct UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0xd8
	FGuid ExpressionGUID; // 0xe0
	FName Group; // 0xf0
};

struct USoundNodeModulator {
	float PitchMin; // 0x60
	float PitchMax; // 0x64
	float VolumeMin; // 0x68
	float VolumeMax; // 0x6c
};

struct UAkWindowsInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0x100
};

struct UInterpTrackInstAkAudioEvent {
	float LastUpdatePosition; // 0x30
};

struct UForceFeedbackComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x230
	char bAutoDestroy : 1; // 0x238
	char bStopWhenOwnerDestroyed : 1; // 0x238
	char bLooping : 1; // 0x238
	char bIgnoreTimeDilation : 1; // 0x238
	char bOverrideAttenuation : 1; // 0x238
	float IntensityMultiplier; // 0x23c
	UForceFeedbackAttenuation* AttenuationSettings; // 0x240
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x248
	FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2f8
};

struct UCaravanSelectPanelUserWidget {
	TArray<FCaravanInstance> LastKnownCaravans; // 0x458
};

struct UGameplayEffectTriggerHorde {
	FString HordeLabel; // 0x238
};

struct UGobiWebServices {
	UWebServiceMatchmakingAPI* WebServiceMatchmakingAPI; // 0x30
	UWebServiceSessionAPI* WebServiceSessionAPI; // 0x38
	UWebServiceAgoraHydraLeaderboards* AgoraLeaderboardsClient; // 0x40
	UWebServiceAgoraHydraCommerce* AgoraCommerceClient; // 0x48
	UWebServiceAgoraHydraAuthAPI* WebServiceAgoraHydraAuthAPI; // 0x50
	UWebServiceAgoraHydraSSC* AgoraSSCClient; // 0x58
};

struct UWeaponTracer {
	UParticleSystem* ParticleSystem; // 0x38
	float FadeDuration; // 0x40
	UMaterialInterface* Material; // 0x48
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
	float ConnectionTimeout; // 0x84
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x88
	bool bNoTimeouts; // 0x8c
	bool bNeverApplyNetworkEmulationSettings; // 0x8d
	UNetConnection* ServerConnection; // 0x90
	TArray<UNetConnection*> ClientConnections; // 0x98
	int32_t RecentlyDisconnectedTrackingTime; // 0x108
	UWorld* World; // 0x148
	UPackage* WorldPackage; // 0x150
	UObject* NetConnectionClass; // 0x178
	UObject* ReplicationDriverClass; // 0x180
	FName NetDriverName; // 0x198
	TArray<FChannelDefinition> ChannelDefinitions; // 0x1a0
	TMap<FName, FChannelDefinition> ChannelDefinitionMap; // 0x1b0
	TArray<UChannel*> ActorChannelPool; // 0x200
	float Time; // 0x218
	UReplicationDriver* ReplicationDriver; // 0x700
};

struct UOnPlayerStaminaStateChangedTrigger {
	TArray<FCharacterStaminaInfo> AllCharacterStaminaInfo; // 0x50
	float TickTimerInterval; // 0x60
};

struct USteeringBehavior_Pursue {
	UAnimContext_Actor* TargetActor; // 0x58
	bool bIgnoreZ; // 0x60
};

struct APlayerTrackingAudioVolume {
	UAkComponent* SoundSource; // 0x318
	bool bAudioPlayOnStart; // 0x320
	bool bDrawDebugSphere; // 0x321
};

struct UWrapBoxSlot {
	FMargin Padding; // 0x40
	bool bFillEmptySpace; // 0x50
	float FillSpanWhenLessThan; // 0x54
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct USpacer {
	FVector2D Size; // 0x148
};

struct UZombieCancelChannelHintUserWidget {
	FGameplayTagQuery VisibilityTagQuery; // 0x458
};

struct UMovieSceneMaterialTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
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

struct UInterpTrackInstSlomo {
	float OldTimeDilation; // 0x30
};

struct UBTService_GobiRunEQS {
	bool bRequiresBlackboardCondition; // 0x138
	EBasicKeyOperation BlackboardCondition; // 0x139
	FGameplayTagQuery TagRequirements; // 0x140
	bool bAllowsAnyObject; // 0x188
};

struct UNPCHealthDamagedTrigger {
	FGameplayTag BulletDamageTypeTag; // 0x50
	float ChanceForFriendlyFire; // 0x58
	float ReactionCooldown; // 0x5c
};

struct URelationshipSettings {
	TMap<FString, FRelationshipOutgoingFriendInvite> OutgoingFriendInvites; // 0x98
	TMap<FString, FRelationshipIncomingFriendInvite> IncomingFriendInvites; // 0xe8
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

struct URespawnActorComponent {
	FRespawnPayload Payload; // 0xf0
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

struct UBaseMediaSource {
	FName PlayerName; // 0x88
};

struct UAnimEvalSet_Shared_DeathReaction_BoneArray_C {
	FGameplayEval_Angle AvatarHitDirection; // 0xc0
	FGameplayEval_DamageType DamageType; // 0x120
	FGameplayEval_HitReactionBone DamageBone; // 0x1e0
	FGameplayEval_Distance DistanceToDamageSource; // 0x290
	FGameplayEval_Health AvatarHealth; // 0x360
	FGameplayEval_RandomChance RandomChance; // 0x3b8
	FGameplayEval_HasContext HasTarget; // 0x408
	FGameplayEval_GameplayTags AvatarTags; // 0x458
};

struct UWorldComposition {
	TArray<ULevelStreaming*> TilesStreaming; // 0x50
	double TilesStreamingTimeThreshold; // 0x60
	bool bLoadAllTilesDuringCinematic; // 0x68
	bool bRebaseOriginIn3DSpace; // 0x69
	float RebaseOriginDistance; // 0x6c
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch {
	FGameplayTagContainer Tags; // 0x30
};

struct USubmixEffectFlexiverbPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0x80
};

struct UOverlaySlot {
	FMargin Padding; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct ACommonArmored_AICharacterBP_C {
	UArmorComponent* Armor; // 0x13f8
};

struct UAnimNotify_TRSEvent {
	FName EventName; // 0x40
};

struct UHUDScreen {
	FMulticastInlineDelegate OnHealingStart; // 0x558
	FMulticastInlineDelegate OnHealingEnd; // 0x568
	UAkAudioEvent* MissionStartEvent; // 0x578
	UAkAudioEvent* MissionEndEvent; // 0x580
	UAkAudioEvent* ObjectiveStartEvent; // 0x588
	UAkAudioEvent* ObjectiveEndEvent; // 0x590
	FMulticastInlineDelegate OnCommWheelVisibilityChanged; // 0x598
	TArray<FCenterBannerMessage> CenterBannerMessages; // 0x5a8
	TArray<FDamageNumberInfo> DamageNumberInfos; // 0x5b8
	UPanelWidget* CenteredPanel; // 0x6c8
};

struct UGranularSynth {
	USoundWave* GranulatedSoundWave; // 0x710
};

struct UGameCoachSubsystem {
	UGameCoach* GameCoach; // 0x38
};

struct UEnvQueryTest_DistanceMapBasic {
	UEnvQueryContext* DistanceMapSource; // 0x208
	FNavAgentSelector DistanceMapNavMesh; // 0x210
	EEnvItemStatus ItemsWithNoDistanceShould; // 0x214
};

struct UInterestingMomentComponent {
	AGameplayAnalyticsManager* GameplayAnalyticsManager; // 0xe8
};

struct UOnlineSessionClient {
	bool bIsFromInvite; // 0x1e0
	bool bHandlingDisconnect; // 0x1e1
};

struct UOnlineSettings {
	EMatchmakingVoicePreference VoicePreference; // 0x99
	bool bCrossPlayEnabled; // 0x9a
	EGroupInvitePrivacy GroupInvitePrivacy; // 0x9b
	TArray<FString> ActiveMatches; // 0xa0
};

struct UGameplayTask {
	FName InstanceName; // 0x38
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x42
	UGameplayTask* ChildTask; // 0x68
};

struct UEnvQueryTest_Voronoi {
	UEnvQueryContext* RegionSource; // 0x208
	UEnvQueryContext* SampleSources; // 0x210
};

struct UMaterialExpressionClamp {
	FExpressionInput Input; // 0x48
	FExpressionInput Min; // 0x5c
	FExpressionInput Max; // 0x70
	EClampMode ClampMode; // 0x84
	float MinDefault; // 0x88
	float MaxDefault; // 0x8c
};

struct UVendorScreen {
	UVendorSubcategoryUserWidget* ItemSubcategoryWidget; // 0x588
	TArray<FCategoryGroup> CategoryGroups; // 0x590
	TArray<FVendorStockItem> LastSeenVendorStock; // 0x5f0
	FSlateSound ErrorSound; // 0x600
	TSoftObjectPtr<UInventoryComponent> InventoryComponent; // 0x618
};

struct UGizmoArrowComponent {
	FVector Direction; // 0x4d0
	float Gap; // 0x4dc
	float Length; // 0x4e0
	float Thickness; // 0x4e4
};

struct UGizmoCircleComponent {
	FVector Normal; // 0x4d0
	float Radius; // 0x4dc
	float Thickness; // 0x4e0
	int32_t NumSides; // 0x4e4
	bool bViewAligned; // 0x4e8
	bool bOnlyAllowFrontFacingHits; // 0x4e9
};

struct UVFXCorpseManager {
	FMulticastInlineDelegate OnFadeNearby; // 0x58
};

struct APopupPromptVolume {
	FText PopupTitle; // 0x328
	FText PopupMessage; // 0x340
	EPopupButtonCombo ButtonCombo; // 0x358
};

struct AAISpawnActor_Sleeper_Wall_BP_C {
	UHeroLOSVolumeComponent* HeroLOSVolume; // 0x5b0
};

struct ATRSPortal {
	bool bDisableAfterDistance; // 0x3b0
	float MaxDistance; // 0x3b4
	bool bEnabled; // 0x3b8
	bool bIncludeOutdoorSectors; // 0x3b9
	bool bExclusiveOutdoorSectors; // 0x3ba
};

struct UAnimNotify_SS_Human_C {
	SharedSurvivorAnimSound_Enum HumanSound_1; // 0x58
};

struct UCardPaginatorUserWidget {
	FMulticastInlineDelegate OnDragDrop; // 0x458
	FMulticastInlineDelegate OnCardFocused; // 0x468
	FMulticastInlineDelegate OnCardUnfocused; // 0x478
	UTextBlock* PageText; // 0x488
	UGobiTextBlock* PagesText; // 0x490
	UWrapBox* CardWrapBox; // 0x498
	UGobiUserWidget* PrevPageButton; // 0x4a0
	UGobiUserWidget* NextPageButton; // 0x4a8
	int32_t CARDS_PER_PAGE; // 0x4b0
	USelectableGameplayCardUserWidget* CardClass; // 0x4b8
	FText NoCardsMessage; // 0x4c0
};

struct UParticleModuleLocationPrimitiveSphere {
	FRawDistributionFloat StartRadius; // 0xb8
};

struct USceneCaptureComponent {
	ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x230
	ESceneCaptureSource CaptureSource; // 0x231
	char bCaptureEveryFrame : 1; // 0x232
	char bCaptureOnMovement : 1; // 0x232
	bool bAlwaysPersistRenderingState; // 0x233
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x238
	TArray<AActor*> HiddenActors; // 0x248
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x258
	TArray<AActor*> ShowOnlyActors; // 0x268
	float LODDistanceFactor; // 0x278
	float MaxViewDistanceOverride; // 0x27c
	int32_t CaptureSortPriority; // 0x280
	bool bUseRayTracingIfEnabled; // 0x284
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x288
	FString ProfilingEventName; // 0x2a8
};

struct UAnimNotifyState_AttackWindow {
	FGameplayTag AttackVolumeTag; // 0x38
	TArray<UGameplayEffect*> AttackGameplayEffects; // 0x40
	bool bResetOverlaps; // 0x50
	bool bUpdateOverlaps; // 0x51
	bool bOverrideAttackVolumeCollision; // 0x52
	FCollisionProfileName AttackVolumeCollisionProfile; // 0x54
};

struct UMatchmakingPoolManager {
	TArray<FMatchmakingPoolConfig> PoolConfigs; // 0x30
	UGobiWebServices* GobiWebServices; // 0x40
	float SequenceMessagesTimeout; // 0x60
	float SequenceSessionJoinTimeout; // 0x64
};

struct UInterpTrackAkAudioEvent {
	TArray<FAkAudioEventTrackKey> Events; // 0x98
	char bContinueEventOnMatineeEnd : 1; // 0xa8
};

struct UAISense_TRSHearing {
	TArray<FAITRSNoiseEvent> NoiseEvents; // 0x88
	float SpeedOfSoundSq; // 0x98
};

struct UAudioInteractableComponent {
	UAkAudioEvent* AudioToPlay; // 0x230
	bool bCanBeDamaged; // 0x238
	bool bCanBeUsed; // 0x239
	FText DefaultPromptText; // 0x240
	float Cooldown; // 0x258
	UHealthComponent* HealthComponent; // 0x260
	UUsableComponent* UsableComponent; // 0x268
};

struct UMaterialExpressionClearCoatNormalCustomOutput {
	FExpressionInput Input; // 0x48
};

struct UCardListenerComponent {
	TArray<FCardRequestToCueData> CardRequestToTagMapping; // 0xe8
	int32_t RequestCounter; // 0xf8
	int32_t RequestIndex; // 0xfc
};

struct UAmmoDragPayload {
	EAmmoType AmmoType; // 0x38
	int32_t NumToDrop; // 0x3c
};

struct UProceduralSnapToGroundComponent {
	EProceduralBuildPhase ProceduralPhase; // 0xf1
	float TraceZOffset; // 0xf4
	float TraceDistance; // 0xf8
	FCollisionProfileName TraceProfileName; // 0xfc
};

struct UProjectileSimple {
	float MaxLifetime; // 0x94
	float CollisionRadius; // 0x98
	ECollisionChannel CollisionChannel; // 0x9c
	float CharacterCollisionRadius; // 0xa0
	FGameplayTagQuery ContinueMovingIfHitActorWithTags; // 0xa8
	UImpactEffectConfig* ImpactEffectConfig; // 0xf0
	bool bSpawnImpactDeferred; // 0xf8
	bool bAlsoImpactGroundIfImpactedCharacter; // 0xf9
	float GroundTraceDownDistance; // 0xfc
	bool bApplyDamage; // 0x100
	float DamageAmount; // 0x104
	UGobiDamageType* DamageType; // 0x108
};

struct UDatasmithSpotLightComponentTemplate {
	float InnerConeAngle; // 0x38
	float OuterConeAngle; // 0x3c
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

struct UMediaComponent {
	UMediaTexture* MediaTexture; // 0xe8
	UMediaPlayer* MediaPlayer; // 0xf0
};

struct ANavMeshBoundsVolume {
	FNavAgentSelector SupportedAgents; // 0x2d8
};

struct UGeometryCollectionComponent {
	AChaosSolverActor* ChaosSolverActor; // 0x530
	UGeometryCollection* RestCollection; // 0x618
	TArray<AFieldSystemActor*> InitializationFields; // 0x620
	bool Simulating; // 0x630
	EObjectStateTypeEnum ObjectType; // 0x638
	bool EnableClustering; // 0x639
	int32_t ClusterGroupIndex; // 0x63c
	int32_t MaxClusterLevel; // 0x640
	TArray<float> DamageThreshold; // 0x648
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x658
	int32_t CollisionGroup; // 0x65c
	float CollisionSampleFraction; // 0x660
	float LinearEtherDrag; // 0x664
	float AngularEtherDrag; // 0x668
	UChaosPhysicalMaterial* PhysicalMaterial; // 0x670
	EInitialVelocityTypeEnum InitialVelocityType; // 0x678
	FVector InitialLinearVelocity; // 0x67c
	FVector InitialAngularVelocity; // 0x688
	FGeomComponentCacheParameters CacheParameters; // 0x698
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x6e8
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6f8
	FMulticastInlineDelegate OnChaosBreakEvent; // 0x720
	float DesiredCacheTime; // 0x730
	bool CachePlayback; // 0x734
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x738
	bool bNotifyBreaks; // 0x748
	bool bNotifyCollisions; // 0x749
	UBodySetup* DummyBodySetup; // 0x928
};

struct UGizmoScaledTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x50
};

struct UEnvQueryTest_EnemyDamageAttackable {
	FAIDataProviderIntValue MaxAttackFailures; // 0x2a0
	bool bUseAttackTime; // 0x2d8
	FAIDataProviderFloatValue MaxTimeSinceAttackFailure; // 0x2e0
	bool bUseAttackDistance; // 0x318
	FAIDataProviderBoolValue UseAttackLocation; // 0x320
	FAIDataProviderFloatValue MinDistanceSinceAttackFailure; // 0x358
	FAIDataProviderFloatValue MaxDistance; // 0x390
};

struct AProfileCamera {
	bool TeleportPlayerWhenViewedFromHere; // 0x2a0
};

struct UGameplayAction_TraversalSteer {
	TArray<FTraversalSteeringConfig> SteeringConfigs; // 0x210
	float ArrivalDistance; // 0x220
};

struct USteeringBehavior {
	EChildBehaviorMode ChildBehaviorMode; // 0x38
	TArray<FSteeringBehaviorChild> ChildBehaviors; // 0x40
	bool bNormalizeChildWeights; // 0x50
};

struct UBlueprintCore {
	UObject* SkeletonGeneratedClass; // 0x30
	UObject* GeneratedClass; // 0x38
	bool bLegacyNeedToPurgeSkelRefs; // 0x40
	FGuid BlueprintGuid; // 0x44
};

struct UPlaneFalloff {
	float Magnitude; // 0xe8
	float MinRange; // 0xec
	float MaxRange; // 0xf0
	float Default; // 0xf4
	float Distance; // 0xf8
	FVector Position; // 0xfc
	FVector Normal; // 0x108
	EFieldFalloffType Falloff; // 0x114
};

struct UEditableTextBox {
	FText Text; // 0x148
	FDelegate TextDelegate; // 0x160
	FEditableTextBoxStyle WidgetStyle; // 0x170
	USlateWidgetStyleAsset* Style; // 0x9f0
	FText HintText; // 0x9f8
	FDelegate HintTextDelegate; // 0xa10
	FSlateFontInfo Font; // 0xa20
	FLinearColor ForegroundColor; // 0xa80
	FLinearColor BackgroundColor; // 0xa90
	FLinearColor ReadOnlyForegroundColor; // 0xaa0
	bool IsReadOnly; // 0xab0
	bool IsPassword; // 0xab1
	float MinimumDesiredWidth; // 0xab4
	FMargin Padding; // 0xab8
	bool IsCaretMovedWhenGainFocus; // 0xac8
	bool SelectAllTextWhenFocused; // 0xac9
	bool RevertTextOnEscape; // 0xaca
	bool ClearKeyboardFocusOnCommit; // 0xacb
	bool SelectAllTextOnCommit; // 0xacc
	bool AllowContextMenu; // 0xacd
	EVirtualKeyboardType KeyboardType; // 0xace
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xacf
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xad0
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xad1
	ETextJustify Justification; // 0xad2
	FShapedTextOptions ShapedTextOptions; // 0xad3
	FMulticastInlineDelegate OnTextChanged; // 0xad8
	FMulticastInlineDelegate OnTextCommitted; // 0xae8
};

struct UHUDMissionObjectiveTipsUserWidget {
	UHUDMissionObjectiveTipUserWidget* ObjectiveTipClass; // 0x458
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

struct UParticleModuleRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UBTTask_RegisterAttackAttempt {
	FBlackboardKeySelector EnemyBBKey; // 0x78
};

struct UDemoTimeline {
	FSlateBrush BackgroundBrush; // 0x148
	FDelegate BackgroundBrushDelegate; // 0x1d8
	FSlateBrush IndicatorBrush; // 0x1e8
	FDelegate IndicatorBrushDelegate; // 0x278
};

struct UCrowdFollowingComponent {
	UCharacterMovementComponent* CharacterMovement; // 0x298
	FVector CrowdAgentMoveDirection; // 0x2a0
};

struct UVendorSaleMod {
	FVendorSaleParams SaleParams; // 0xd0
};

struct UOptionsTextSpinnerWidget {
	TMap<int32_t, FString> TTSValueOverrides; // 0x468
};

struct UBlackboardKeyType_Class {
	UObject* BaseClass; // 0x38
};

struct UGobiUserWidget {
	FMulticastInlineDelegate OnHovered; // 0x2d8
	FMulticastInlineDelegate OnUnhovered; // 0x2e8
	FMulticastInlineDelegate OnPressed; // 0x2f8
	FMulticastInlineDelegate OnReleased; // 0x308
	FMulticastInlineDelegate OnClicked; // 0x318
	FMulticastInlineDelegate OnRightClicked; // 0x328
	FMulticastInlineDelegate OnDoubleClicked; // 0x338
	bool bListenForCultureChange; // 0x348
	bool bIgnoreTrapFocus; // 0x349
	bool bListenForInputDeviceChange; // 0x34a
	TMap<EIconPlatform, UAkAudioEvent*> TTSFocusAudioEvents; // 0x350
	UAkAudioEvent* TTSFocusStopAudioEvent; // 0x3a0
	bool bTTSFocusPlayDuringPreSignIn; // 0x3a8
	FString TTSFocusMessage; // 0x3b8
	bool bIsTTSQueued; // 0x3c8
	FSlateSound PressedSound; // 0x3d0
	FSlateSound ClickedSound; // 0x3e8
	FSlateSound HoveredSound; // 0x400
	bool bIsHoverEnabled; // 0x418
	bool bIsClickEnabled; // 0x419
	bool bIsMouseClickEnabled; // 0x41a
	bool bIsRightClickEnabled; // 0x41b
	bool bIsGamepadClickEnabled; // 0x41c
	bool bIsKeyboardClickEnabled; // 0x41d
	FName KeyboardClickActionOverride; // 0x420
	FName GamepadClickActionOverride; // 0x428
	FKey DragDropKey; // 0x430
	bool bIsHovered; // 0x448
	bool bIsPressed; // 0x449
	bool bIsRightPressed; // 0x44a
};

struct UCardDrawScreen {
	UAkAudioEvent* DefaultCardClickedSound; // 0x558
	UAkAudioEvent* LightCardClickedSound; // 0x560
	UAkAudioEvent* MediumCardClickedSound; // 0x568
	UAkAudioEvent* HeavyCardClickedSound; // 0x570
	UAkAudioEvent* WildCardClickedSound; // 0x578
	float CardFlipDelay; // 0x580
	TArray<FDataTableRowHandle> PreviousDrawnCards; // 0x588
	FDataTableRowHandle LastCardPlayed; // 0x598
	TArray<FDataTableRowHandle> CardsWaitingForServerResponse; // 0x5b8
	TWeakObjectPtr<UGameplayCardManager> CardManager; // 0x5c8
};

struct APVPHoldoutGameMode {
	float ReadyToWaitMinTime; // 0x5a8
	int32_t ReadyToWaitMinTicks; // 0x5b0
	FPVPHoldoutSupplyPointsConfig SupplyPointsConfig; // 0x5bc
	TArray<FTeamImbalanceEffects> HeroAdvantageEffects; // 0x5d8
	TArray<FTeamImbalanceEffects> ZombieAdvantageEffects; // 0x5e8
	TArray<FTeamImbalanceEffects> HeroDisadvantageEffects; // 0x5f8
	TArray<FTeamImbalanceEffects> ZombieDisadvantageEffects; // 0x608
};

struct UMovieSceneGeometryCacheSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UDialogueWave {
	char bMature : 1; // 0x30
	char bOverride_SubtitleOverride : 1; // 0x30
	FString SpokenText; // 0x38
	FString SubtitleOverride; // 0x48
	TArray<FDialogueContextMapping> ContextMappings; // 0x58
	FGuid LocalizationGUID; // 0x68
};

struct UMaterialExpressionScalarParameter {
	float DefaultValue; // 0x60
	bool bUseCustomPrimitiveData; // 0x64
	char PrimitiveDataIndex; // 0x65
};

struct UAnimNotify_SpawnImpactEffect {
	bool bUseRotationContext; // 0x40
	UAnimContext_Rotation* TraceDirectionContext; // 0x48
	EAnimNotifySpawnImpactTraceDirection TraceDirection; // 0x50
	ECollisionChannel TraceChannel; // 0x51
	float TraceLength; // 0x54
	FName TraceStartPosBoneName; // 0x58
	EAnimNotifySpawnImpactDirectionOverride DirectionOverride; // 0x60
	float DirectionOverrideYawOffset; // 0x64
	UImpactEffectConfig* ImpactEffectConfig; // 0x68
	FGameplayTagContainer BlockingTags; // 0x70
};

struct UItemFinder_Mod {
	float EntropyChance; // 0xd0
	float ChancePerKill; // 0xd4
	FGameplayTagContainer ItemTags; // 0xd8
	FGameplayTagQuery DamageTypeTagQuery; // 0xf8
	FGameplayTagQuery TargetTagQuery; // 0x140
	bool bTargetMustBeCharacter; // 0x188
};

struct UGlobalAssetLoader {
	TArray<FGlobalAssetLoaderAsset> ConfigAssets; // 0x38
	TArray<TSoftObjectPtr<UObject>> WeaponTableClasses; // 0x48
	TArray<UAssetTable*> GeneratedAssetTables; // 0x58
	TArray<UAssetTable*> RequestedAssetTables; // 0x68
	TArray<UObject*> LoadedObjects; // 0x78
	TArray<UObject*> AppLaunchUIAssets; // 0x88
};

struct UGameMapsSettings {
	FString LocalMapOptions; // 0x30
	FSoftObjectPath TransitionMap; // 0x40
	bool bUseSplitscreen; // 0x58
	ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x59
	EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x5a
	EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x5b
	bool bOffsetPlayerGamepadIds; // 0x5c
	FSoftClassPath GameInstanceClass; // 0x60
	FSoftObjectPath GameDefaultMap; // 0x78
	FSoftObjectPath ServerDefaultMap; // 0x90
	FSoftClassPath GlobalDefaultGameMode; // 0xa8
	FSoftClassPath GlobalDefaultServerGameMode; // 0xc0
	TArray<FGameModeName> GameModeMapPrefixes; // 0xd8
	TArray<FGameModeName> GameModeClassAliases; // 0xe8
};

struct AMapMetrics {
	bool bRebuildMetrics; // 0x2a0
	UMapMetricsDataAsset* MapMetricsData; // 0x2a8
};

struct UAnimNotify_RattleTrigger {
	FName Bone; // 0x40
	float Radius; // 0x48
	float SpeedModifier; // 0x4c
};

struct UAnimNotify_SS_Enemy_C {
	SharedEnemyAnimSound_Enum EnemySound_1; // 0x60
};

struct ULifeStateHeroLedgeHang {
	float HelpInteractionTime; // 0xa8
	FName UsableComponentTag; // 0xac
	float TwoArmsHangHealthPct; // 0xb4
	float OneArmsHangHealthPct; // 0xb8
	UAnimMontage* FallDeathMontage; // 0xd0
};

struct UMapSpatialInfoComponent {
	TArray<char> SerializedCellInfo; // 0x4c8
	float GoldenPathLength; // 0x548
	bool bRestrictToNavPlacementVolumes; // 0x54c
	float DistanceFromNavPlacementVolumes; // 0x550
	float VisibilityMaxDistanceForward; // 0x554
	float VisibilityMaxDistanceBackward; // 0x558
	float NearbyDistance; // 0x55c
	float MaxAudibleDistance; // 0x560
	bool bGenerateMergedCells; // 0x564
	bool bGenerateGoldenPathDistances; // 0x565
	bool bGenerateVisibility; // 0x566
	FName GenerationBoundsTag; // 0x568
	bool bRestrictMergedCellsBasedOnVisibility; // 0x570
	int32_t MaxMergeTestVisMismatches; // 0x574
	bool bGenerateDebugMergeTestVisInfo; // 0x578
	bool bGenerateDebugNonVisibleAreaInfo; // 0x579
	bool bGenerateNearbyCells; // 0x57a
	bool bGenerateAudibleCells; // 0x57b
	bool bGenerateWallsOnlyAtTestActor; // 0x57c
	bool bGenerateWallsNorth; // 0x57d
	bool bGenerateWallsEast; // 0x57e
	bool bGenerateWallsSouth; // 0x57f
	bool bGenerateWallsWest; // 0x580
	bool bDrawOnlyIfSelected; // 0x581
	bool bDrawBehindWalls; // 0x582
	bool bDrawConnections; // 0x583
	bool bDrawLinkToGenerationVolumes; // 0x584
	bool bDrawVisibilityLocations; // 0x585
	bool bDrawInViewFromSafeRoom; // 0x586
	bool bDrawWalls; // 0x587
	bool bDrawWallSources; // 0x588
	bool bDrawWallTestPoints; // 0x589
	ECollisionChannel MovementChannel; // 0x58a
	ECollisionChannel VisiblityChannel; // 0x58b
	TArray<AActor*> TraceActorBaseClassesToIgnore; // 0x590
	TArray<FName> CollisionProfileNamesToIgnore; // 0x5a0
	TArray<FName> TraceActorTagsToIgnore; // 0x5b0
	EMapSpatialInfoDrawType DrawType; // 0x5c0
	TArray<AActor*> NavMeshSpawnActorClasses; // 0x610
	TArray<char> SerializedSonicProperties; // 0x620
	bool EnableSonicPropertyGeneration; // 0x640
	FString SonicFootprintReport; // 0x648
	float SonicPropertiesSize; // 0x658
	float MaxTotalSonicPathlength; // 0x65c
	float GoldenPathCullingDistance; // 0x660
	float MaxObstructionToExclude; // 0x664
	bool EnableMirrorReduction; // 0x668
};

struct UMovieSceneFloatSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UGameplayEffectParticleInstant {
	UParticleSystem* ParticleSystem; // 0x238
};

struct URendererSettings {
	char bMobileDisableVertexFog : 1; // 0x40
	int32_t MaxMobileCascades; // 0x44
	EMobileMSAASampleCount MobileMSAASampleCount; // 0x48
	char bMobileUseLegacyShadingModel : 1; // 0x4c
	char bMobileAllowDitheredLODTransition : 1; // 0x4c
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x4c
	char bMobileVirtualTextures : 1; // 0x4c
	char bDiscardUnusedQualityLevels : 1; // 0x4c
	char bOcclusionCulling : 1; // 0x4c
	float MinScreenRadiusForLights; // 0x50
	float MinScreenRadiusForEarlyZPass; // 0x54
	float MinScreenRadiusForCSMdepth; // 0x58
	char bPrecomputedVisibilityWarning : 1; // 0x5c
	char bTextureStreaming : 1; // 0x5c
	char bUseDXT5NormalMaps : 1; // 0x5c
	char bUseDX11Formats : 1; // 0x5c
	char bVirtualTextures : 1; // 0x5c
	char bVirtualTexturedLightmaps : 1; // 0x5c
	uint32_t VirtualTextureTileSize; // 0x60
	uint32_t VirtualTextureTileBorderSize; // 0x64
	uint32_t VirtualTextureFeedbackFactor; // 0x68
	char bVirtualTextureEnableCompressZlib : 1; // 0x6c
	char bVirtualTextureEnableCompressCrunch : 1; // 0x6c
	char bClearCoatEnableSecondNormal : 1; // 0x6c
	char bAnisotropicBRDF : 1; // 0x6c
	int32_t ReflectionCaptureResolution; // 0x70
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x74
	char bForwardShading : 1; // 0x74
	char bVertexFoggingForOpaque : 1; // 0x74
	char bAllowStaticLighting : 1; // 0x74
	char bUseNormalMapsForStaticLighting : 1; // 0x74
	char bGenerateMeshDistanceFields : 1; // 0x74
	char bEightBitMeshDistanceFields : 1; // 0x74
	char bGenerateLandscapeGIData : 1; // 0x74
	char bCompressMeshDistanceFields : 1; // 0x75
	float TessellationAdaptivePixelsPerTriangle; // 0x78
	char bSeparateTranslucency : 1; // 0x7c
	ETranslucentSortPolicy TranslucentSortPolicy; // 0x80
	FVector TranslucentSortAxis; // 0x84
	ECustomDepthStencil CustomDepthStencil; // 0x90
	char bCustomDepthTaaJitter : 1; // 0x94
	EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x98
	FString NGXAppId; // 0xa0
	char bDefaultFeatureBloom : 1; // 0xb0
	char bDefaultFeatureAmbientOcclusion : 1; // 0xb0
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0xb0
	char bDefaultFeatureAutoExposure : 1; // 0xb0
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0xb4
	float DefaultFeatureAutoExposureBias; // 0xb8
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xbc
	char bUsePreExposure : 1; // 0xbc
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xbc
	char bDefaultFeatureMotionBlur : 1; // 0xbc
	char bDefaultFeatureLensFlare : 1; // 0xbc
	char bTemporalUpsampling : 1; // 0xbc
	char bSSGI : 1; // 0xbc
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xc0
	ELightUnits DefaultLightUnits; // 0xc1
	EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xc2
	char bRenderUnbuiltPreviewLightsInGame : 1; // 0xc4
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xc4
	char bStencilForLODDither : 1; // 0xc4
	EEarlyZPass EarlyZPass; // 0xc8
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xcc
	char bDBuffer : 1; // 0xcc
	EClearSceneOptions ClearSceneMethod; // 0xd0
	char bBasePassOutputsVelocity : 1; // 0xd4
	char bVertexDeformationOutputsVelocity : 1; // 0xd4
	char bSelectiveBasePassOutputs : 1; // 0xd4
	char bDefaultParticleCutouts : 1; // 0xd4
	int32_t GPUSimulationTextureSizeX; // 0xd8
	int32_t GPUSimulationTextureSizeY; // 0xdc
	char bGlobalClipPlane : 1; // 0xe0
	EGBufferFormat GBufferFormat; // 0xe4
	char bUseGPUMorphTargets : 1; // 0xe8
	char bNvidiaAftermathEnabled : 1; // 0xe8
	char bMultiView : 1; // 0xe8
	char bMobilePostProcessing : 1; // 0xe8
	char bMobileMultiView : 1; // 0xe8
	char bMobileUseHWsRGBEncoding : 1; // 0xe8
	char bRoundRobinOcclusion : 1; // 0xe8
	char bODSCapture : 1; // 0xe8
	char bMeshStreaming : 1; // 0xe9
	float WireframeCullThreshold; // 0xec
	char bEnableRayTracing : 1; // 0xf0
	char bEnableRayTracingTextureLOD : 1; // 0xf0
	char bSupportStationarySkylight : 1; // 0xf0
	char bSupportLowQualityLightmaps : 1; // 0xf0
	char bSupportPointLightWholeSceneShadows : 1; // 0xf0
	char bSupportAtmosphericFog : 1; // 0xf0
	char bSupportSkyAtmosphere : 1; // 0xf0
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xf0
	char bSupportSkinCacheShaders : 1; // 0xf1
	ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xf4
	float SkinCacheSceneMemoryLimitInMB; // 0xf8
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xfc
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xfc
	char bMobileAllowDistanceFieldShadows : 1; // 0xfc
	char bMobileAllowMovableDirectionalLights : 1; // 0xfc
	uint32_t MobileNumDynamicPointLights; // 0x100
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0x104
	char bMobileAllowMovableSpotlights : 1; // 0x104
	char bSupport16BitBoneIndex : 1; // 0x104
	char bGPUSkinLimit2BoneInfluences : 1; // 0x104
	char bSupportDepthOnlyIndexBuffers : 1; // 0x104
	char bSupportReversedIndexBuffers : 1; // 0x104
	char bSupportMaterialLayers : 1; // 0x104
	char bLPV : 1; // 0x104
	char bSupportAlphaToCoverage : 1; // 0x105
	float TRSMobileLuminance; // 0x108
	char bEnableNonCSMProjectedWholeSceneShadows : 1; // 0x10c
};

struct UGameplayContext_NextUsable {
	UAnimContext_NavLinkLocation* BaseNavLink; // 0x90
	FGameplayTagContainer UsableTags; // 0x98
	bool bSkipActivatableUsables; // 0xb8
	float SearchDist; // 0xbc
};

struct UGobiLoadingScreenDataSet {
	TSoftObjectPtr<UTexture2D> LoadingImage; // 0x38
	TSoftObjectPtr<UTexture2D> ShowDemoLoadingImage; // 0x60
};

struct UReplicatedMontageComponent {
	TArray<FName> IgnoreRootMotionSlots; // 0x130
	FReplicatedMontageData RepData; // 0x1b8
	UAnimInstance* AnimInstance; // 0x1e8
	AGobiCharacter* GobiCharacter; // 0x280
	UGobiCharacterMovementComponent* Movement; // 0x288
	TArray<UAnimMontage*> SerializableMontages; // 0x290
	UPlayDeathReactionComponent* PlayDeathReactionComponent; // 0x2a0
};

struct UTipEvaluatorSet_BP_C {
	FGobiGameCoachEval_CanShowTip CanShowTip; // 0x78
};

struct UMaterialExpressionTextureProperty {
	FExpressionInput TextureObject; // 0x48
	EMaterialExposedTextureProperty Property; // 0x5c
};

struct UInputAxisDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x30
};

struct UAssetTableOrganizer {
	TMap<FString, UAssetTable*> AssetLists; // 0x38
};

struct ALevelBounds {
	UBoxComponent* BoxComponent; // 0x2a0
	bool bAutoUpdateBounds; // 0x2a8
};

struct UAnimNotify_GobiMusicEvent {
	FDataTableRowHandle EventHandle; // 0x40
};

struct UCombineComponent {
	ECombineState CombineState; // 0xe8
	FMulticastInlineDelegate OnCombineStarted; // 0x158
	FMulticastInlineDelegate OnCombineStopped; // 0x168
	UUsableComponent* Usable; // 0x178
	TArray<FCornstalk> CornStalks; // 0x180
	FName CornStalkTag; // 0x190
	FName CornSplineTag; // 0x198
	UInstancedStaticMeshComponent* InstanceClass; // 0x1a0
	FName InstanceClassTag; // 0x1a8
	TArray<FName> BladeSocketLocationNames; // 0x1b0
	TArray<FVector> BladeSocketLocations; // 0x1c0
	TArray<ABirdSite*> BirdSites; // 0x1d0
	FName BirdSiteTag; // 0x1e0
	float BirdLaunchDistance; // 0x1e8
	UGobiNavModifierComponent* GobiNavModifierStart; // 0x1f0
	FName GobiNavModifierStartTag; // 0x1f8
	UGobiNavModifierComponent* GobiNavModifierEnd; // 0x200
	FName GobiNavModifierEndTag; // 0x208
	UNavArea* NavAreaDisabled; // 0x210
	UNavArea* NavAreaGobiDefault; // 0x218
	TArray<UStaticMeshComponent*> Blades; // 0x220
	FName BladesTag; // 0x230
	TArray<APlaceableAudioJostle*> CornAudioJostles; // 0x238
	FName CornAudioJostleTag; // 0x248
	float MinCombineDistanceToAudioJostle; // 0x250
	UAkComponent* AkVehicle; // 0x258
	FName AkVehicleTag; // 0x260
	UAkComponent* AkBlades; // 0x268
	FName AkBladesTag; // 0x270
	UItemAkBankComponent* ItemAkBank; // 0x278
	FName ItemAkBankTag; // 0x280
	UAkAudioEvent* CombineEngineStart; // 0x288
	UAkAudioEvent* CombineEngineLoop; // 0x290
	UAkAudioEvent* CombineEngineExplode; // 0x298
	UAkAudioEvent* CombineEngineDeath; // 0x2a0
	UAkAudioEvent* CombineEngineCrash; // 0x2a8
	UAkAudioEvent* BladesLoop; // 0x2b0
	UAkAudioEvent* BladesLoopStop; // 0x2b8
	UAkAudioEvent* PlantShred; // 0x2c0
	UAkAudioEvent* BodyShred; // 0x2c8
	float BodyHitAudioDelayTime; // 0x2d0
	float PlantHitAudioDelayTime; // 0x2d4
	UCurveFloat* CombineIgnitionCurve; // 0x2d8
	float StartCountdown; // 0x2e0
	float CombineIgnitionUpdateRate; // 0x2e4
	TArray<USpotLightComponent*> Spotlights; // 0x2e8
	FName SpotlightTag; // 0x2f8
	float MaxIntensity; // 0x300
	UParticleSystemComponent* CombineSmokeParticle; // 0x308
	FName CombineSmokeParticleTag; // 0x310
	UParticleSystemComponent* CornShuckGroup; // 0x318
	FName CornShuckGroupTag; // 0x320
	TArray<UParticleSystemComponent*> CombineWheelParticles; // 0x328
	FName CombineWheelsTag; // 0x338
	TArray<UStaticMeshComponent*> WheelMeshes; // 0x340
	FName WheelMeshTag; // 0x350
	UParticleSystem* CornShuck; // 0x358
	float PlantHitVFXDelayTime; // 0x360
	float WheelParticleDelayTime; // 0x364
	UParticleSystemComponent* CornSpray; // 0x368
	FName CornSprayTag; // 0x370
	UParticleSystemComponent* CombineBloodVFX; // 0x378
	FName CombineBloodVFXTag; // 0x380
	TArray<UBoxComponent*> PushbackVolumes; // 0x388
	FName PushbackVolumeTag; // 0x398
	float PushbackVolumeDamage; // 0x3a0
	float PushbackVolumeDamageEnableDelay; // 0x3a4
	UGobiDamageType* CombinePushbackDamageType; // 0x3a8
	EPhysicalSurface PhysicalSurfaceForDamage; // 0x3b0
	UBoxComponent* BladeCornBox; // 0x3b8
	FName BladeCornBoxTag; // 0x3c0
	AActor* CornStalkClass; // 0x3c8
	TArray<EObjectTypeQuery> QueryTypes; // 0x3d0
	float MoveCombineCountdown; // 0x3e0
	float MaxTravelZ; // 0x3e4
	float SuspensionLinearInterpSpeed; // 0x3e8
	float SuspensionAngularInterpSpeed; // 0x3ec
	USplineComponent* Spline; // 0x3f0
	FName SplineTag; // 0x3f8
	UStaticMeshComponent* CombineMesh; // 0x400
	FName CombineMeshTag; // 0x408
	float BladeMovementRate; // 0x410
	UChildActorComponent* ChildActorComponentClass; // 0x418
	FName ChildActorComponentTag; // 0x420
	bool bIsCombineMoving; // 0x428
	float CombineDamageAmount; // 0x42c
	float CombineDamageCooldown; // 0x430
	UGobiDamageType* CombineDamageType; // 0x438
	float CombineDistanceCheck; // 0x440
	float CombineBloodDeactiveCountdown; // 0x444
	FName CleanupKillVolumeTag; // 0x448
	float CleanupKillVolumeDelay; // 0x450
	UBoxComponent* CleanupKillVolume; // 0x458
};

struct ACutsceneCoordinator {
	FDataTableRowHandle CutsceneDefinitionRowHandle; // 0x2a0
	FMulticastInlineDelegate OnIntroFadeOut; // 0x2c0
	FMulticastInlineDelegate OnCutsceneSetup; // 0x2d0
	FMulticastInlineDelegate OnPlaySequence; // 0x2e0
	FMulticastInlineDelegate OnCutsceneCleanup; // 0x2f0
	FMulticastInlineDelegate OnPhaseChanged; // 0x300
	ECutsceneControl ControlState; // 0x310
	ULevelSequence* LevelSequence; // 0x318
	ALevelSequenceActor* LevelSequenceActor; // 0x320
	ULevelSequencePlayer* LevelSequencePlayer; // 0x328
	UPlayerCutsceneSynchronizationComponent* LocalSynchronizationComponent; // 0x330
	TArray<UObject*> PreloadedAssets; // 0x338
};

struct UGameplayEffectSetTags {
	FGameplayTagContainer Tags; // 0x250
	int32_t CountDelta; // 0x270
};

struct UGobiMediaSubtitleHelperSubsystem {
	UDataTable* SubtitleTimingTable; // 0x40
};

struct ALevelSequenceScenarioActorBase {
	USceneComponent* SceneRoot; // 0x2a0
	UTextRenderComponent* TextRender; // 0x2a8
	bool bIsEnabled; // 0x2b0
	bool bForceSequenceActorDespawn; // 0x2b1
	FGameplayTagQuery ForceDespawnOfCharactersThatMatch; // 0x2b8
	bool bOnlyOnePlayerIsRequiredToStart; // 0x300
	bool bTriggerWhenAllPlayersAreOutOfTriggerVolume; // 0x301
	ATriggerVolume* StartSequenceTriggerVolume; // 0x308
	AGobiCharacter* SequenceCharacterClass; // 0x310
	bool bSequenceActorIsUnkillable; // 0x318
	FGameplayTagContainer TagsToAddToSpawnedCharacter; // 0x320
	FGameplayTagContainer InPlaySequenceActorTagContainer; // 0x340
	ACharacterSpawnActor* CharacterSpawnActor; // 0x360
	ALevelSequenceActor* LevelSequenceActor; // 0x368
	AAISmartActor* HighPrioritySmartActor; // 0x370
	ALevelSequenceScenarioActorBase* OnRecycledEnableLSSAB; // 0x378
	ALevelSequenceScenarioActorBase* OnCompletedActivateLinkedLSSAB; // 0x380
	TArray<ALevelSequenceScenarioActorBase*> GetSavedHealthFromTheseLSSABs; // 0x388
	float OnCompletedLinkDelayTime; // 0x398
	FMulticastInlineDelegate OnSpawnSequenceCharacter; // 0x3a0
	bool bSequenceActorsKilled; // 0x3bc
	bool bSequenceActorIsActing; // 0x3bd
	ULevelSequenceScenarioComponent* LevelSequenceScenario; // 0x3c0
};

struct UEnvQueryGenerator_Usables {
	UEnvQueryContext* SearchCenter; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x60
};

struct UGizmoComponentHitTarget {
	UPrimitiveComponent* Component; // 0x38
};

struct ASpotLight {
	USpotLightComponent* SpotLightComponent; // 0x2b0
};

struct ABaseMeleeWeapon_BP_C {
	UStaticMeshComponent* BaseStaticMesh_3P; // 0x4d0
	UFPRigSkeletalMeshComponent* BaseMesh_1P; // 0x4d8
};

struct UBTDecorator_Cooldown {
	FAIDataProviderFloatValue CooldownTime; // 0x70
};

struct ABotController {
	FInventoryLoadout BaseLoadout; // 0x448
	FMulticastInlineDelegate OnGoToLocReached; // 0x480
	FMulticastInlineDelegate OnGoToLocSeqCompleted; // 0x490
	FMulticastInlineDelegate OnBotConfigChangedEvent; // 0x4a0
	FMulticastInlineDelegate OnBotSwarmedEvent; // 0x4b0
	FMulticastInlineDelegate OnCombatEvent; // 0x4c0
	float CombatExitDelay; // 0x4d0
	float CombatEndGroupUpDelay; // 0x4d4
	float HordeEndGroupUpDelay; // 0x4d8
	float InitFailTimer; // 0x4dc
	FGobiWorldProbeManager GobiWorldProbeMgr; // 0x4e0
	FBotAwarenessSystem AwarenessSystem; // 0x558
	FBotItemSystem ItemSystem; // 0x858
	FBotInventorySystem InventorySystem; // 0x960
	FBotInteractSystem InteractSystem; // 0xb18
	FTetherSystem TetherSystem; // 0xe20
	FBotPingSystem PingSystem; // 0xf40
	FBotCombatSystem CombatSystem; // 0x11d0
	FBotTeamInfo TeamInfo; // 0x1738
	FBotThreatList ThreatList; // 0x1c68
	AGobiCharacter* OwnerGobiChar; // 0x1cb8
	AHeroCharacter* OwnerHeroChar; // 0x1cc0
	FGameplayTag BotTypeBotTag; // 0x1cc8
	FGameplayTag BotTypeNPCTag; // 0x1cd0
	FGameplayTag BotBehaviorNoCombatTag; // 0x1cd8
	FGameplayTag BotBehaviorNoWanderTag; // 0x1ce0
	FGameplayTag BotItemUseCooldownTag; // 0x1ce8
	FGameplayTagContainer AttackTags; // 0x1cf0
	float ThreatDistScore; // 0x1d10
	float EyePosHeight; // 0x1d14
	FGameplayTagContainer DbgDisableActionsTags; // 0x1d18
	FGameplayTagContainer DbgDisableAttacksTags; // 0x1d38
	FGameplayTagContainer DbgDisableMovementTags; // 0x1d58
	FGameplayTagContainer DisableMovementTags; // 0x1d80
	UEnvQuery* Wander_EQS; // 0x1da0
	UEnvQuery* ThreatEQS; // 0x1da8
	UEnvQuery* AttackLocEQS; // 0x1db0
	UAIDistanceRanges* AttackDistanceRanges; // 0x1db8
	FGameplayTag BotInteractIgnoreTag; // 0x1dc0
	FGameplayTag BotInteractIgnoreAlwaysTag; // 0x1dc8
	FGameplayTag BotItemPickupLimitTag; // 0x1dd0
	FGameplayTagQuery TargetMeleeOnlyTagQuery; // 0x1dd8
	FGameplayTagQuery TargetMeleePreferredTagQuery; // 0x1e20
	FGameplayTagQuery TargetRangedOnlyTagQuery; // 0x1e68
	float ItemPickupSearchDist; // 0x1eb0
	FGameplayTagQuery EnvironSenseAllowedTagQuery; // 0x1eb8
	FGameplayTagQuery ThreatPingTagQuery; // 0x1f00
	float UsableSearchDist; // 0x2040
	float InteractNavToDist; // 0x2044
	float InteractActivateDist; // 0x2048
	float TeammateFollowTetherDist; // 0x204c
	UBotPlaystyleConfigCollection* DefaultBotPlaystyleConfigSet; // 0x2060
	FDataTableRowHandle BotSharedConfigRowHandle; // 0x2898
	UPlayerStatsComponent* StatsComponent; // 0x2918
	bool bIsCombatAllowed; // 0x299b
	bool bIsWanderAllowed; // 0x299c
	bool bReturnToCombatStartLoc; // 0x299d
	bool bAutoHideWeapons; // 0x299e
};

struct UGameplayEvalSet_Jump_C {
	FGameplayEval_NavArea IsJump; // 0x78
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xe8
	FGameplayEval_Distance IsAtJump; // 0x130
};

struct AMolotov_FirePool_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x2d8
	USphereComponent* GameplayEffectRadius; // 0x2e0
	USceneComponent* DefaultSceneRoot; // 0x2e8
	TArray<UParticleSystem*> ParticleSets; // 0x2f0
	UParticleSystemComponent* SpawnedParticleSet; // 0x300
	UAkComponent* MolotovFireAkComp; // 0x308
};

struct AGameplayEffectEmitterActor {
	UGameplayEffectEmitterComponent* EmitterComponent; // 0x2a0
	USceneComponent* DefaultRootComponent; // 0x2a8
	UBoxComponent* EmitterVolume; // 0x2b0
	UStaticMeshComponent* MeshComponent; // 0x2b8
	bool bStartActive; // 0x2c0
};

struct UNameplateManagerUserWidget {
	float ADSOpacity; // 0x458
	float IncapOffset; // 0x45c
	FGameplayTagQuery AutoCollapseTagQuery; // 0x460
	TMap<TWeakObjectPtr<APlayerSlot>, UNameplateUserWidget*> Nameplates; // 0x4a8
};

struct UNavigationSystemV1 {
	ANavigationData* MainNavData; // 0x30
	ANavigationData* AbstractNavData; // 0x38
	FName DefaultAgentName; // 0x40
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x48
	char bAutoCreateNavigationData : 1; // 0x70
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x70
	char bAllowClientSideNavigation : 1; // 0x70
	char bShouldDiscardSubLevelNavData : 1; // 0x70
	char bTickWhilePaused : 1; // 0x70
	char bSupportRebuilding : 1; // 0x70
	char bInitialBuildingLocked : 1; // 0x70
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x71
	ENavDataGatheringModeConfig DataGatheringMode; // 0x74
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x78
	float ActiveTilesUpdateInterval; // 0x7c
	TArray<FNavDataConfig> SupportedAgents; // 0x80
	FNavAgentSelector SupportedAgentsMask; // 0x90
	TArray<ANavigationData*> NavDataSet; // 0x98
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa8
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc8
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd8
	FNavigationSystemRunMode OperationMode; // 0x1c4
	float DirtyAreasUpdateFreq; // 0x51c
};

struct UAnimNotify_PlayParticleEffect {
	UParticleSystem* PSTemplate; // 0x40
	FVector LocationOffset; // 0x48
	FRotator RotationOffset; // 0x54
	FVector Scale; // 0x60
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UTierStarsUserWidget {
	UMaterialInstanceDynamic* StarMaterialInstance; // 0x458
};

struct ASphereReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x2a8
};

struct UBTTask_TriggerHorde {
	FString TriggerReason; // 0x78
};

struct UDeathGasSpawnComponent {
	FMulticastInlineDelegate OnDeathGasSpawnEnded; // 0x1e0
	FName SpawnMontagesName; // 0x1f0
	TArray<UAnimMontage*> SpawnMontages; // 0x1f8
	FGameplayTagContainer AppliedTags; // 0x208
	FGameplayTagQuery ActivatingActorTagRequirements; // 0x228
	FDeathGasSpawnTuning DeathGasSpawnTuning; // 0x270
	ADeathGasActor* DeathGasClass; // 0x290
	TArray<UGameplayEffect*> AppliedGameplayEffects; // 0x298
	FDeathGasSpawnMoveTickData MoveTickData; // 0x2c0
};

struct UBreakpoint {
	char bEnabled : 1; // 0x30
	UEdGraphNode* Node; // 0x38
	char bStepOnce : 1; // 0x40
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x40
	char bStepOnce_RemoveAfterHit : 1; // 0x40
};

struct USteeringBehavior_Distance {
	UAnimContext_Distance* DistanceContextClass; // 0x58
	FFloatRange DistanceRange; // 0x60
	USteeringBehavior* MinDistSteeringBehaviorOld; // 0x70
	USteeringBehavior* MaxDistSteeringBehaviorOld; // 0x78
	USteeringBehavior* MinDistSteeringBehavior; // 0x80
	USteeringBehavior* MaxDistSteeringBehavior; // 0x88
};

struct UParticleModuleSizeScaleBySpeed {
	FVector2D SpeedScale; // 0x38
	FVector2D MaxScale; // 0x40
};

struct UBlendProfile {
	USkeleton* OwningSkeleton; // 0x38
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x40
};

struct UGameplayEffectMoveSpeedScale {
	FCustomDataProviderFloat BaseSpeedMod; // 0x238
	float AdditionalSpeedModPerStack; // 0x240
};

struct UDistributionFloatConstant {
	float Constant; // 0x40
};

struct AProfilePhysicsCaster {
	int32_t NumCasts; // 0x2a0
	EPhysicsCasterType CasterType; // 0x2a4
	EPhysicsCasterPosition CasterStart; // 0x2a5
	EPhysicsCasterPosition CasterEnd; // 0x2a6
	bool bTraceComplex; // 0x2a7
	EPhysicsCasterTraceType TraceType; // 0x2a8
	ECollisionChannel Channel; // 0x2a9
	FName TraceTypeProfileName; // 0x2ac
	bool bTraceHitOnly; // 0x2b4
	bool bGetMaterial; // 0x2b5
	float InitialDelay; // 0x2b8
	UStaticMeshComponent* UserBounds; // 0x2c0
};

struct USoundCollectionAssetAnimPreview {
	USoundCollectionAsset* SCAHumanAnimPreview; // 0x38
	USoundCollectionAsset* SCAEnemyAnimPreview; // 0x40
};

struct APlayerCharacter {
	FMulticastInlineDelegate OnPlayerCharacterSlotChanged; // 0x1330
	bool bApplyControllerYawRotationRate; // 0x1368
	float ControllerYawRotationRate; // 0x136c
	float ControllerYawRotationRateStartDistance; // 0x1370
	float ControllerYawRotationRateStopDistance; // 0x1374
	APlayerSlot* OccupiedPlayerSlot; // 0x1378
	float CrouchTransitionTime; // 0x1394
	FCameraViewModifier CrouchViewModifier; // 0x13a0
	FGameplayTagQuery CanJumpTagQuery; // 0x13e8
};

struct UGameplayEffectItemCycleComponent {
	FGamePropertyFloatMod WeaponSwapSpeedScaleMod; // 0x250
	TArray<UGameplayEffect*> PowerSwapEffects; // 0x260
	TArray<UGameplayEffect*> PowerSwapPlayerEffects; // 0x270
};

struct AAudioJostleProceduralBuilder {
	TArray<UEmitterNodeBase*> UnmappedEmitterInfo; // 0x2a8
};

struct UBTTask_MoveDirectlyToward {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb8
	char bProjectVectorGoalToNavigation : 1; // 0xb8
	char bUpdatedDeprecatedProperties : 1; // 0xb8
};

struct USpinBox {
	float Value; // 0x148
	FDelegate ValueDelegate; // 0x14c
	FSpinBoxStyle WidgetStyle; // 0x160
	USlateWidgetStyleAsset* Style; // 0x478
	int32_t MinFractionalDigits; // 0x480
	int32_t MaxFractionalDigits; // 0x484
	bool bAlwaysUsesDeltaSnap; // 0x488
	float Delta; // 0x48c
	float SliderExponent; // 0x490
	FSlateFontInfo Font; // 0x498
	ETextJustify Justification; // 0x4f8
	float MinDesiredWidth; // 0x4fc
	bool ClearKeyboardFocusOnCommit; // 0x500
	bool SelectAllTextOnCommit; // 0x501
	bool bIsFocusedOnHover; // 0x502
	FSlateColor ForegroundColor; // 0x508
	FMulticastInlineDelegate OnValueChanged; // 0x538
	FMulticastInlineDelegate OnValueCommitted; // 0x548
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x558
	FMulticastInlineDelegate OnEndSliderMovement; // 0x568
	char bOverride_MinValue : 1; // 0x578
	char bOverride_MaxValue : 1; // 0x578
	char bOverride_MinSliderValue : 1; // 0x578
	char bOverride_MaxSliderValue : 1; // 0x578
	float MinValue; // 0x57c
	float MaxValue; // 0x580
	float MinSliderValue; // 0x584
	float MaxSliderValue; // 0x588
};

struct UTRSOnlineEntitlementsEOSSettings {
	TArray<FString> EntitlementIds; // 0x40
};

struct UAIDataProvider_QueryParams {
	FName ParamName; // 0x30
	float FloatValue; // 0x38
	int32_t IntValue; // 0x3c
	bool BoolValue; // 0x40
	FGameplayTagContainer TagsValue; // 0x48
	FGameplayTagQuery TagQueryValue; // 0x68
	UObject* ObjectValue; // 0xb0
};

struct UInterpTrackInstColorProp {
	FColor ResetColor; // 0x60
};

struct UGameplayContext_HeroIsInCombat {
	FDamageInfo LastDamageReceived; // 0x68
	FDamageInfo LastDamageInflicted; // 0x128
};

struct UItemBaseComponent {
	UHeroMovementComponent* OwnerMovementComponent; // 0x140
	FText UsePrompt; // 0x148
};

struct UBTTask_FinishWithResult {
	EBTNodeResult Result; // 0x78
};

struct APlaceableAudioJostle {
	EJostleMode JostleType; // 0x2a0
	FShrubEmitterInfo ShrubBehavior; // 0x2a8
	FBumpEmitterInfo BumpBehavior; // 0x2d0
	FRattleEmitterInfo RattleBehavior; // 0x300
	bool bAutoEnable; // 0x340
	bool bIsEnabled; // 0x341
	UEmitterNodeBase* Node; // 0x348
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

struct UPropertyValue {
	TArray<TFieldPath<FProperty>> Properties; // 0x90
	TArray<int32_t> PropertyIndices; // 0xa0
	TArray<FCapturedPropSegment> CapturedPropSegments; // 0xb0
	FString FullDisplayString; // 0xc0
	FName PropertySetterName; // 0xd0
	TMap<FString, FString> PropertySetterParameterDefaults; // 0xd8
	bool bHasRecordedData; // 0x128
	UObject* LeafPropertyClass; // 0x130
	TArray<char> ValueBytes; // 0x140
	EPropertyValueCategory PropCategory; // 0x150
};

struct UAutomationTestSettings {
	TArray<FString> EngineTestModules; // 0x30
	TArray<FString> EditorTestModules; // 0x40
	FSoftObjectPath AutomationTestmap; // 0x50
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x68
	TArray<FSoftObjectPath> AssetsToOpen; // 0x78
	FBuildPromotionTestSettings BuildPromotionTest; // 0x88
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x278
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a8
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b8
	TArray<FString> TestLevelFolders; // 0x2e8
	TArray<FExternalToolDefinition> ExternalTools; // 0x2f8
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x308
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x318
	FIntPoint DefaultScreenshotResolution; // 0x328
};

struct UWeaponAttachmentComponent {
	FMulticastInlineDelegate OnAttachmentsChanged; // 0x160
	FMulticastInlineDelegate OnAttachmentAdded; // 0x170
	FMulticastInlineDelegate OnAttachmentRemoved; // 0x180
	TArray<FDataTableRowHandle> PendingAttachmentApplications; // 0x1c0
	TArray<FDataTableRowHandle> PendingAttachmentRemovals; // 0x1d0
	TArray<FDataTableRowHandle> AppliedAttachments; // 0x1e0
	TArray<FDataTableRowHandle> AppliedAttachments_Client; // 0x1f0
	FGameplayTagContainer UnsupportedAttachments; // 0x200
	TArray<FGameplayTagContainer> AttachmentSlots; // 0x220
	UAttachmentMeshConfigurations* DefaultMeshConfigurations; // 0x230
	TArray<FWeaponAttachmentMeshConfig> MeshConfigurationOverrides; // 0x238
};

struct UMapBuildDataRegistry {
	ELightingBuildQuality LevelLightingQuality; // 0x30
};

struct UMovieSceneMarginSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UAnimEvalSet_FixedScore_C {
	FGameplayEval_FixedScore FixedScore; // 0xc0
};

struct URendererOverrideSettings {
	char bSupportAllShaderPermutations : 1; // 0x40
	char bForceRecomputeTangents : 1; // 0x40
};

struct UGameplayContext_AIStimulus {
	UAnimContext_Actor* StimuliSourceActor; // 0x90
};

struct ACameraRig_Crane {
	float CranePitch; // 0x2a0
	float CraneYaw; // 0x2a4
	float CraneArmLength; // 0x2a8
	bool bLockMountPitch; // 0x2ac
	bool bLockMountYaw; // 0x2ad
	USceneComponent* TransformComponent; // 0x2b0
	USceneComponent* CraneYawControl; // 0x2b8
	USceneComponent* CranePitchControl; // 0x2c0
	USceneComponent* CraneCameraMount; // 0x2c8
};

struct UAISenseEvent_Damage {
	FAIDamageEvent Event; // 0x30
};

struct UInputAxisKeyDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x30
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

struct ULifeStateRescueFromRespawn {
	TWeakObjectPtr<ARescuePlayerStart> CurrentRescueStart; // 0xb4
	TMap<ERescueSpawnPointType, UAnimMontage*> InNeedOfRescueMontages; // 0xc0
	TMap<ERescueSpawnPointType, UAnimMontage*> RescuedMontages; // 0x110
	bool bApplyCameraSocketOffset; // 0x160
	FVector CameraSocketOffset; // 0x164
	bool bApplyCameraTargetArmLength; // 0x17c
	float CameraTargetArmLength; // 0x180
	bool bApplyViewYawLimit; // 0x188
	float ViewYawLimit; // 0x18c
	bool bApplyViewPitchLimit; // 0x190
	FVector2D ViewPitchLimit; // 0x194
};

struct UTireType {
	float FrictionScale; // 0x38
};

struct UAnimContext_PawnProximity {
	UAnimContext_Transform* QueryOrigin; // 0x50
	UAnimContext_Transform* QueryBorder; // 0x58
	float QueryRadius; // 0x60
	AGobiCharacter* PawnFilterClass; // 0x68
	FGameplayTagQuery TagQueryFilter; // 0x70
	FGameplayTagContainer BlockingGameplayTags; // 0xb8
};

struct UGameplayContext_NearbyCharacters {
	FGameplayTagQuery CharacterTags; // 0x50
	float MinDistance; // 0x98
	float MaxDistance; // 0x9c
	bool bCheckViewAngle; // 0xa0
	float ViewAngle; // 0xa4
};

struct UAudioZombieManagerSystem {
	FName ManagerName; // 0x30
	bool bPushZombieCallouts; // 0x38
	bool bPushNumThreateningZombies; // 0x39
	bool bPushMaxThreat; // 0x3a
	bool bPushCumulativeThreat; // 0x3b
	FName NumThreateningZombiesRTPCName; // 0x3c
	FName MaxThreatRTPCName; // 0x44
	FName CumulativeThreatRTPCName; // 0x4c
	float PVPCollapsePhaseMultiplier; // 0x54
	FGameplayTagQuery RegistrationQuery; // 0x58
	float FrayRadius; // 0xa0
	float MinRadiusMultiplier; // 0xa4
	float CalloutRadius; // 0xa8
	float MaxRadius; // 0xac
	float MaxRadiusMultiplier; // 0xb0
	float FromBehindMultiplier; // 0xb4
	float MutedMultiplier; // 0xb8
	bool bUpdatePreferenceOnManagedCharacter; // 0xbc
	float PreferenceMinDeltaBeforeUpdate; // 0xc0
	TMap<FGameplayTag, float> TagMultipliers; // 0xc8
	FColor DebugColor; // 0x118
	bool bTextRenderer; // 0x11c
	float DebugTextSize; // 0x120
};

struct UAkPS4InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8
	FAkTRSPerPlatformSettings TRSSettings; // 0xf8
};

struct ULifeStateHealth {
	TArray<FLifeStateTransitionRuleHealth> EnterRules; // 0xa8
	TArray<FLifeStateTransitionRuleHealth> ExitRules; // 0xb8
};

struct UMaterialExpressionTemporalSobol {
	FExpressionInput Index; // 0x48
	FExpressionInput Seed; // 0x5c
	uint32_t ConstIndex; // 0x70
	FVector2D ConstSeed; // 0x74
};

struct UParticleModuleLocationPrimitiveCylinder {
	char RadialVelocity : 1; // 0xb8
	FRawDistributionFloat StartRadius; // 0xc0
	FRawDistributionFloat StartHeight; // 0xf0
	CylinderHeightAxis HeightAxis; // 0x120
};

struct UInterpTrackInstAkAudioRTPC {
	float LastUpdatePosition; // 0x30
};

struct UMaterialExpressionShaderStageSwitch {
	FExpressionInput PixelShader; // 0x48
	FExpressionInput VertexShader; // 0x5c
};

struct UWaterSimulation {
	FIntVector GridSize; // 0x38
	UCanvasRenderTarget2D* SimGrid; // 0x48
	UCanvasRenderTarget2D* SimGridT; // 0x50
	UCanvasRenderTarget2D* SimColorGrid; // 0x58
	UCanvasRenderTarget2D* SimColorGridT; // 0x60
	FVector GridWorldSize; // 0x68
	UTexture2D* Ground; // 0x78
	FVector GroundOrigin; // 0x80
	FVector2D GroundSize; // 0x8c
	float GroundScale; // 0x94
	UTexture2D* ForceTexture; // 0x98
	float ForceTextureScale; // 0xa0
	float Speed; // 0xa4
	int32_t SimulationSteps; // 0xa8
	float Viscosity; // 0xac
	float WaterLineHeight; // 0xb0
	float WaterLineAttenuation; // 0xb4
	float WaterColorRChannelAtten; // 0xb8
	float WaterColorGChannelAtten; // 0xbc
	float WaterColorBChannelAtten; // 0xc0
	float WaterDynamicFoamAtten; // 0xc4
	float WaterDynamicFoamGeneration; // 0xc8
	WaterForceChannelType ForceResponseChannel; // 0xcc
	FVector VolumeCenterLocation; // 0xd0
	FVector OldVolumeCenterLocation; // 0xdc
	FVector PlayerSurfaceLocation; // 0xe8
	FVector EffectiveGridWorldSize; // 0xf4
	FString LastName; // 0x100
	UTexture2D* CachedGround; // 0x110
	float Time; // 0x118
};

struct ADatasmithSceneActor {
	UDatasmithScene* Scene; // 0x2a0
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x2a8
};

struct UOnlinePIESettings {
	bool bOnlinePIEEnabled; // 0x40
	TArray<FPIELoginSettingsInternal> Logins; // 0x48
};

struct UReticleComponent {
	AGobiReticle* ReticleClass; // 0x100
	FGameplayTagQuery ShowReticleTagQuery; // 0x108
	bool bLocalPlayerOnly; // 0x150
};

struct UParticleModuleBeamModifier {
	BeamModifierType ModifierType; // 0x38
	FBeamModifierOptions PositionOptions; // 0x3c
	FRawDistributionVector Position; // 0x40
	FBeamModifierOptions TangentOptions; // 0x88
	FRawDistributionVector Tangent; // 0x90
	char bAbsoluteTangent : 1; // 0xd8
	FBeamModifierOptions StrengthOptions; // 0xdc
	FRawDistributionFloat Strength; // 0xe0
};

struct USoundNodeParamCrossFade {
	FName ParamName; // 0x70
};

struct UEnvQueryTest_PounceTrace {
	UEnvQueryContext* Context; // 0x208
	FAIDataProviderFloatValue ItemHeightOffset; // 0x210
	FAIDataProviderFloatValue ContextHeightOffset; // 0x248
	FAIDataProviderFloatValue TraceHalfHeightOffset; // 0x280
};

struct UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x30
	FDynamicPropertyPath SourcePath; // 0x38
	FName DestinationProperty; // 0x60
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

struct UGameplayAction_LeapAttack {
	UAnimMontage* TellMontage; // 0x210
	float TellDuration; // 0x218
};

struct UZombieGhostComponent {
	float UpdateCanSpawnInterval; // 0xf8
	float MinSpawnDistance2DFromHeroes; // 0xfc
	float MinSpawnDistanceZFromHeroes; // 0x100
	float MinTeleportDistanceFromHeroes; // 0x104
	float MinSecondsUnseenToTeleport; // 0x108
	float MinSecondsUndamagedToTeleport; // 0x10c
	UAnimMontage* SpawnInMontage; // 0x110
	TArray<TSoftClassPtr<UObject>> FortificationsThatCollide; // 0x118
	TArray<FName> LOSCheckBoneNames; // 0x128
	TArray<UGameplayEffect*> CanSpawnEffects; // 0x138
	UAkAudioEvent* AKESpawnError; // 0x148
	ECanSpawnResult CanSpawnResult; // 0x150
	ECanSpawnResult CanTeleportResult; // 0x151
};

struct UZombieMutationNodeUserWidget {
	FDataTableRowHandle ZombieCardRowHandle; // 0x458
	bool bPurchased; // 0x478
	bool bPrereqsSatisfied; // 0x479
	bool bOwningPlayerCanAfford; // 0x47a
	bool bOwningPlayerCanSpendOn; // 0x47b
};

struct UGizmoLineHandleComponent {
	FVector Normal; // 0x4d0
	float HandleSize; // 0x4dc
	float Thickness; // 0x4e0
	FVector Direction; // 0x4e4
	float Length; // 0x4f0
	bool bImageScale; // 0x4f4
};

struct UDistributionFloatParameterBase {
	FName ParameterName; // 0x48
	float MinInput; // 0x50
	float MaxInput; // 0x54
	float MinOutput; // 0x58
	float MaxOutput; // 0x5c
	DistributionParamMode ParamMode; // 0x60
};

struct UAkActivatedPlugins {
	TMap<FString, FAkPluginList> Platforms; // 0x30
};

struct AFOVManager {
	TMap<ULocalPlayer*, FPlayerFOVState> PlayerFOVStates; // 0x2b8
	TArray<TScriptInterface<ICustomProjectionInterface>> ActiveFirstPersonMeshes; // 0x310
};

struct UGameplayAction_HagIdle {
	float CalmInvestigateDuration; // 0x210
	TArray<UAnimMontage*> IdleMontages; // 0x218
	TArray<UGameplayEffect*> CalmInvestigateEffectsToRemove; // 0x228
};

struct UAkItemProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x148
	FMulticastInlineDelegate OnPropertyDragged; // 0x158
};

struct UVoipOverlayGridUserWidget {
	UPanelWidget* EntryGridPanel; // 0x460
};

struct ALODActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x2a0
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x2a8
	UHLODProxy* Proxy; // 0x2f8
	FName Key; // 0x300
	float LODDrawDistance; // 0x308
	int32_t LODLevel; // 0x30c
	TArray<AActor*> SubActors; // 0x310
	char CachedNumHLODLevels; // 0x320
};

struct UZombiePopupMutationUserWidget {
	UHorizontalBox* MutationPointsHBox; // 0x458
	UImage* LeftBar; // 0x460
	UImage* RightBar; // 0x468
	UTextBlock* CompletedText; // 0x470
	UTextBlock* LevelText; // 0x478
	UTextBlock* MutationDescriptionText; // 0x480
	UTextBlock* MutationPointsText; // 0x488
	FSlateColor CompleteColor; // 0x490
	FSlateColor IncompleteColor; // 0x4c0
};

struct UGizmoConstantFrameAxisSource {
	FVector Origin; // 0x38
	FVector Direction; // 0x44
	FVector TangentX; // 0x50
	FVector TangentY; // 0x5c
};

struct UShaderBuildProgress_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458
	UCircularThrobber* CircularThrobber_73; // 0x460
	UProgressBar* CompilationProgress; // 0x468
	UVerticalBox* OuterVBox; // 0x470
	UBaseTextBlock_C* ProgressText; // 0x478
	int32_t MaxRemainingToCompile; // 0x480
	bool bShaderCompilationEnabled; // 0x484
};

struct UTimelineTemplate {
	float TimelineLength; // 0x30
	ETimelineLengthMode LengthMode; // 0x34
	char bAutoPlay : 1; // 0x35
	char bLoop : 1; // 0x35
	char bReplicated : 1; // 0x35
	char bIgnoreTimeDilation : 1; // 0x35
	TArray<FTTEventTrack> EventTracks; // 0x38
	TArray<FTTFloatTrack> FloatTracks; // 0x48
	TArray<FTTVectorTrack> VectorTracks; // 0x58
	TArray<FTTLinearColorTrack> LinearColorTracks; // 0x68
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x78
	FGuid TimelineGuid; // 0x88
	FName VariableName; // 0x98
	FName DirectionPropertyName; // 0xa0
	FName UpdateFunctionName; // 0xa8
	FName FinishedFunctionName; // 0xb0
};

struct UAchievementTrackerComponent {
	FMulticastInlineDelegate OnAchievementCompleted; // 0xe8
	TArray<UAchievement*> AllAchievements; // 0x148
	TArray<UAchievement*> ActiveAchievements; // 0x158
	TArray<UAchievement*> AchievementClasses; // 0x168
	UAchievement* PartyUpAchievementClass; // 0x190
	UAchievement* TestRewardAchievementClass; // 0x198
};

struct USynth2DSlider {
	float ValueX; // 0x148
	float ValueY; // 0x14c
	FDelegate ValueXDelegate; // 0x150
	FDelegate ValueYDelegate; // 0x160
	FSynth2DSliderStyle WidgetStyle; // 0x170
	FLinearColor SliderHandleColor; // 0x450
	bool IndentHandle; // 0x460
	bool Locked; // 0x461
	float StepSize; // 0x464
	bool IsFocusable; // 0x468
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x470
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x480
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x490
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4a0
	FMulticastInlineDelegate OnValueChangedX; // 0x4b0
	FMulticastInlineDelegate OnValueChangedY; // 0x4c0
};

struct AExponentialHeightFog {
	UExponentialHeightFogComponent* Component; // 0x2a0
	char bEnabled : 1; // 0x2a8
};

struct UDecalComponent {
	UMaterialInterface* DecalMaterial; // 0x230
	int32_t SortOrder; // 0x280
	float FadeScreenSize; // 0x284
	float FadeStartDelay; // 0x288
	float FadeDuration; // 0x28c
	float FadeInDuration; // 0x290
	float FadeInStartDelay; // 0x294
	char bDestroyOwnerAfterFade : 1; // 0x298
	FVector DecalSize; // 0x29c
};

struct UInterpTrackParticleReplay {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x78
};

struct UAnimEvalSet_Shared_DeathReaction_Survivor_C {
	FGameplayEval_IsHeroPreviousLifeState PreviousLifeState; // 0x4a0
	FGameplayEval_GameplayTags IsCrouched; // 0x4f0
};

struct UBTDecorator_ConeCheck {
	float ConeHalfAngle; // 0x70
	FBlackboardKeySelector ConeOrigin; // 0x78
	FBlackboardKeySelector ConeDirection; // 0xa0
	FBlackboardKeySelector Observed; // 0xc8
};

struct UAIDataProvider_Random {
	float Min; // 0xb8
	float Max; // 0xbc
	char bInteger : 1; // 0xc0
};

struct UDistributionFloat {
	char bCanBeBaked : 1; // 0x38
	char bBakedDataSuccesfully : 1; // 0x38
};

struct UHorizontalBox {
	float ChildSpacing; // 0x170
};

struct UProgressBar {
	FProgressBarStyle WidgetStyle; // 0x148
	USlateWidgetStyleAsset* Style; // 0x300
	USlateBrushAsset* BackgroundImage; // 0x308
	USlateBrushAsset* FillImage; // 0x310
	USlateBrushAsset* MarqueeImage; // 0x318
	float Percent; // 0x320
	EProgressBarFillType BarFillType; // 0x324
	bool bIsMarquee; // 0x325
	FVector2D BorderPadding; // 0x328
	FDelegate PercentDelegate; // 0x330
	FSlateColor FillColorAndOpacity; // 0x340
	FDelegate FillColorAndOpacityDelegate; // 0x370
};

struct UMutilationSubsystem {
	TArray<FMutilationQualityCache> QualityCache; // 0x100
};

struct UCardTooltipUserWidget {
	UWidget* HostWidget; // 0x458
	FDataTableRowHandle HostCardRowHandle; // 0x460
	UPerkDetailsEntryUserWidget* PerkEntryClass; // 0x480
	float PerkDescWrapWidth; // 0x488
};

struct UTextPropertyTestObject {
	FText DefaultedText; // 0x30
	FText UndefaultedText; // 0x48
	FText TransientText; // 0x60
};

struct APlayerSlot {
	FSlotIndex SlotIdx; // 0x2a0
	FString ReservedPlayerId; // 0x2a8
	bool bReserved; // 0x2b8
	bool bAllowBots; // 0x2b9
	EGobiTeam Team; // 0x2ba
	bool bHasReceivedInitialSpawn; // 0x2bb
	bool bHasChosenLoadout; // 0x2bc
	bool bNeedsQuickPlayCharacterTransfer; // 0x2bd
	int32_t CharacterTransferOwedDraws; // 0x2c0
	float TimeSpentDead; // 0x2c4
	bool bIsCurrentlyAlive; // 0x2c8
	FDataTableRowHandle CurrentHeroRowHandle; // 0x2d0
	FCharacterCustomizationSet CurrentCustomizationSet; // 0x310
	TArray<FPostRoundSummaryStatValue> CachedPostRoundBonuses; // 0x398
	FRespawnSnapshot_Hero HeroRespawnSnapshot; // 0x3a8
	bool bHasEverBeenAlive; // 0x581
	FMulticastInlineDelegate OnSlotSelectedCharacterChanged; // 0x588
	FMulticastInlineDelegate OnOwningPlayerChanged; // 0x598
	FMulticastInlineDelegate OnControllingPlayerChanged; // 0x5a8
	FMulticastInlineDelegate OnAssignedPawnChanged; // 0x5b8
	FMulticastInlineDelegate OnPlayerNameChanged; // 0x5c8
	APawn* AssignedPawn; // 0x658
	AGobiPlayerState* OwningPlayer; // 0x660
	AGobiPlayerState* ControllingPlayer; // 0x668
	FPlayerLoadout PlayerLoadout; // 0x670
	FRespawnSnapshot_Hero SaferoomSnapshot; // 0x718
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
	int32_t NumPreSelectedIndices; // 0x6c
};

struct UAkMarkerCallbackInfo {
	int32_t Identifier; // 0x40
	int32_t Position; // 0x44
	FString Label; // 0x48
};

struct UEdGraphNode_Documentation {
	FString Link; // 0xa0
	FString Excerpt; // 0xb0
};

struct UMaterialExpressionMaterialProxyReplace {
	FExpressionInput Realtime; // 0x48
	FExpressionInput MaterialProxy; // 0x5c
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

struct UBTDecorator_DataBindingIsValid {
	FAIDataProviderUObjectValue UObjectDataProvider; // 0x70
};

struct UPlayerMoveSpeedMod {
	FCustomDataProviderFloat Speed; // 0xd0
};

struct UChannel {
	UNetConnection* Connection; // 0x30
};

struct UAtmosphericFogComponent {
	float SunMultiplier; // 0x230
	float FogMultiplier; // 0x234
	float DensityMultiplier; // 0x238
	float DensityOffset; // 0x23c
	float DistanceScale; // 0x240
	float AltitudeScale; // 0x244
	float DistanceOffset; // 0x248
	float GroundOffset; // 0x24c
	float StartDistance; // 0x250
	float SunDiscScale; // 0x254
	float DefaultBrightness; // 0x258
	FColor DefaultLightColor; // 0x25c
	char bDisableSunDisk : 1; // 0x260
	char bAtmosphereAffectsSunIlluminance : 1; // 0x260
	char bDisableGroundScattering : 1; // 0x260
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x264
	UTexture2D* TransmittanceTexture; // 0x290
	UTexture2D* IrradianceTexture; // 0x298
};

struct UAnimNotifyState_RepickMontage {
	bool bAllowRepickOfSelf; // 0x38
};

struct ADebugCameraController {
	char bShowSelectedInfo : 1; // 0x628
	char bIsFrozenRendering : 1; // 0x628
	char bIsOrbitingSelectedActor : 1; // 0x628
	char bOrbitPivotUseCenter : 1; // 0x628
	char bEnableBufferVisualization : 1; // 0x628
	char bEnableBufferVisualizationFullMode : 1; // 0x628
	char bIsBufferVisualizationInputSetup : 1; // 0x628
	char bLastDisplayEnabled : 1; // 0x628
	UDrawFrustumComponent* DrawFrustum; // 0x630
	AActor* SelectedActor; // 0x638
	UPrimitiveComponent* SelectedComponent; // 0x640
	FHitResult SelectedHitPoint; // 0x648
	APlayerController* OriginalControllerRef; // 0x6d0
	UPlayer* OriginalPlayer; // 0x6d8
	float SpeedScale; // 0x6e0
	float InitialMaxSpeed; // 0x6e4
	float InitialAccel; // 0x6e8
	float InitialDecel; // 0x6ec
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
	FName BestRatioSkelMeshName; // 0xa0
};

struct ULightComponentBase {
	FGuid LightGuid; // 0x230
	float Brightness; // 0x240
	float Intensity; // 0x244
	FColor LightColor; // 0x248
	char bAffectsWorld : 1; // 0x24c
	char CastShadows : 1; // 0x24c
	char CastStaticShadows : 1; // 0x24c
	char CastDynamicShadows : 1; // 0x24c
	char bAffectTranslucentLighting : 1; // 0x24c
	char bTransmission : 1; // 0x24c
	char bCastVolumetricShadow : 1; // 0x24c
	char bCastDeepShadow : 1; // 0x24c
	char bCastRaytracedShadow : 1; // 0x24d
	char bAffectReflection : 1; // 0x24d
	char bAffectGlobalIllumination : 1; // 0x24d
	float IndirectLightingIntensity; // 0x250
	float VolumetricScatteringIntensity; // 0x254
	int32_t SamplesPerPixel; // 0x258
};

struct UPlacementComponent {
	AActor* ActorClass; // 0xf0
	EProceduralBuildPhase ProceduralPhase; // 0xf8
	bool bGenerateRandomSeed; // 0xf9
	int32_t RandomSeed; // 0xfc
	EPlacementOffsetMode OffsetMode; // 0x100
	FVector Translation; // 0x104
	FRotator Rotation; // 0x110
	FVector MinTranslation; // 0x11c
	FVector MaxTranslation; // 0x128
	FRotator MinRotation; // 0x134
	FRotator MaxRotation; // 0x140
};

struct UPostRoundChallengeObjectiveUserWidget {
	FGobiCountAnim PointCountAnim; // 0x468
	FGobiCountAnim DiffCountAnim; // 0x490
};

struct USupplyPointsUserWidget {
	int32_t SupplyPoints; // 0x458
};

struct UPlatformInputIcons {
	TMap<FKey, FInputIcons> Keys; // 0x30
};

struct ASurfaceTypeDebugActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x2a0
	UTextRenderComponent* TextRendererComponent; // 0x2a8
	USceneComponent* InternalRootComponent; // 0x2b0
	FGameplayTag ImpactGameplayTag; // 0x2b8
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

struct UGobiLocalPlayer {
	FMulticastInlineDelegate OnSettingsInitialized; // 0x260
	UPlayerSettingsGame* PlayerSettings; // 0x2e0
	UGameCoachSettings* GameCoachSettings; // 0x2e8
	UFTUESettings* FTUESettings; // 0x2f0
	UPlayerProfileSettings* PlayerProfileSettings; // 0x2f8
	UOnlineSettings* OnlineSettings; // 0x300
	URelationshipSettings* RelationshipSettings; // 0x308
	UPlayerAnalyticsSettings* PlayerAnalyticsSettings; // 0x310
};

struct UFXSystemAsset {
	uint32_t MaxPoolSize; // 0x30
};

struct UGeometryCache {
	TArray<UMaterialInterface*> Materials; // 0x38
	TArray<UGeometryCacheTrack*> Tracks; // 0x48
	int32_t StartFrame; // 0x68
	int32_t EndFrame; // 0x6c
};

struct UStumbleOthersComponent {
	float StumbleFrequency; // 0x150
	float MinDistance; // 0x154
	float AngleThreshold; // 0x158
	float FrontImpactAngle; // 0x15c
	float FrontAngle; // 0x160
	FGameplayTagQuery TagRequirements; // 0x168
	FGameplayTagQuery TargetTagRequirements; // 0x1b0
	TArray<UGameplayEffect*> ApplyEffects; // 0x1f8
};

struct UGizmoComponentWorldTransformSource {
	USceneComponent* Component; // 0x50
	bool bModifyComponentOnTransform; // 0x58
};

struct UGameplayEvalSet_Shared_Melee_Filter_C {
	FGameplayEval_Distance DistanceToEnemy; // 0xc0
	FGameplayEval_Distance DistanceZToEnemy; // 0x190
	FGameplayEval_Angle AngleToEnemy; // 0x260
	FGameplayEval_NavBlocked NavBlocked; // 0x2c0
	FGameplayEval_GameplayTags AvatarTags; // 0x318
	FGameplayEval_GameplayTags EnemyTags; // 0x3b0
	FGameplayEval_Speed EnemySpeed; // 0x448
	FGameplayEval_BlockedByPawn BlockedByPawn; // 0x4a8
	FGameplayEval_HasVisibility VisibilityToEnemy; // 0x510
};

struct ULightmassPortalComponent {
	UBoxComponent* PreviewBox; // 0x230
};

struct UNestsComponent {
	bool bHasFinishedSetup; // 0xe8
	TArray<FClusterBoils> HiddenNestClusterBoils; // 0xf0
	bool bIsNestDead; // 0x100
	TArray<FClusterBoils> VisibleNestClusterBoils; // 0x108
	int32_t HordeTriggeredCount; // 0x118
	AActor* WaypointLessonActorClass; // 0x140
	float WaypointLessonActorZoffset; // 0x148
	TArray<AActor*> SpawnedBoils; // 0x150
	FMulticastInlineDelegate OnBoilShrink; // 0x160
	FMulticastInlineDelegate OnClusterDestroyed; // 0x170
	FMulticastInlineDelegate OnNestDestroyed; // 0x180
	FMulticastInlineDelegate OnPlayedCards; // 0x190
	bool bAllowScenarioToAffectNest; // 0x1a0
	bool bClusterDeathDropsLoot; // 0x1a1
	bool bClusterDeathAddsCards; // 0x1a2
	bool bNestDeathDropsLoot; // 0x1a3
	bool bNestDeathAddsCards; // 0x1a4
	AActor* BoilsToSpawn; // 0x1a8
	AActor* NestBoilToSpawn; // 0x1b0
	int32_t TotalOfClustersVisible; // 0x1b8
	int32_t NumberOfClusterDestroyed; // 0x1bc
	FGameplayTag ClusterTag; // 0x1c0
	FGameplayTag NestBoilBaseTag; // 0x1c8
	FGameplayTag NestBaseTag; // 0x1d0
	int32_t NumberOfArmsforEasyDifficulty; // 0x1d8
	int32_t NumberOfArmsforNormalDifficulty; // 0x1dc
	int32_t NumberOfArmsforHardDifficulty; // 0x1e0
	int32_t NumberOfArmsforLegendaryDifficulty; // 0x1e4
	AAISpawnActorVolume* AISpawnActorVolume; // 0x1e8
	TArray<AAISpawnActorVolume*> SpawnedAISpawnActorVolumes; // 0x1f0
	FVector AISpawnActorVolumeScale; // 0x200
	FGameplayTag HordeBlockTag; // 0x20c
	FGameplayTagContainer ClusterLootTag; // 0x218
	FGameplayTagContainer DisallowedClusterLootTag; // 0x238
	FGameplayTagContainer NestLootTag; // 0x258
	FGameplayTagContainer DisallowedNestLootTag; // 0x278
	USceneComponent* NestLootSpawn; // 0x298
	FName NestLootSpawnTag; // 0x2a0
	float ClusterTransformZOffset; // 0x2a8
	float ClusterTransformZGroundOffset; // 0x2ac
	FVector NavBoundsExtents; // 0x2b0
	UParticleSystem* FliesParticle; // 0x2c0
	float ClusterParticleOffset; // 0x2c8
	UParticleSystem* ClusterExplodeParticle; // 0x2d0
	UParticleSystem* NestPodExplosion; // 0x2d8
	TArray<UAkComponent*> ClustersAkComponents; // 0x2e0
	TArray<USplineComponent*> VisibleSplines; // 0x2f0
	FName AKBasePodTag; // 0x300
	FName AkTentacleTag; // 0x308
	FName HordeRoarLocationTag; // 0x310
	FName NearBasePodTag; // 0x318
	UAkAudioEvent* NestIdleAudio; // 0x320
	UAkAudioEvent* TentacleIdleAudio; // 0x328
	UAkAudioEvent* TentacleIdleStopAudio; // 0x330
	float TentacleLocationUpdateRate; // 0x338
	UAkAudioEvent* NestHurtAudio; // 0x340
	UAkAudioEvent* ClusterDestroyedAudio; // 0x348
	UAkAudioEvent* NestSmallIdleAudio; // 0x350
	UAkAudioEvent* BoilsDestoryedAudio; // 0x358
	UAkAudioEvent* BoilsShrinkAudioEvent; // 0x360
	UAkAudioEvent* BoilsGrowAudioEvent; // 0x368
	UAkAudioEvent* NestPodDeathAudioEvent; // 0x370
	UAkAudioEvent* NestPodExplosionAudioEvent; // 0x378
	float DialogueDelay; // 0x380
	FDataTableRowHandle LastClusterAliveDialogueTable; // 0x388
	FDataTableRowHandle TwoClusterAliveDialogueTable; // 0x3a8
	TArray<FDataTableRowHandle> ThreePlusClusterAliveDialogueTableArray; // 0x3c8
	FDataTableRowHandle HordeDialogueTable; // 0x3d8
	FGameplayTag HordeTag; // 0x3f8
	FDataTableRowHandle NestDefeatedDialogueTable; // 0x400
	FDataTableRowHandle NestEncounterDialogueTable; // 0x420
	FDataTableRowHandle NestEncounterHint1DialogueTable; // 0x440
	FDataTableRowHandle NestEncounterHint2DialogueTable; // 0x460
	float Hint1CountdownTimer; // 0x480
	float Hint2CountdownTimer; // 0x484
	float ExcitationRadius; // 0x488
	float SpeedOfPropagation; // 0x48c
	float LifeSpanWhenDestroyed; // 0x490
	UAkComponent* AKBasePod; // 0x498
	UAkComponent* AKTentacle; // 0x4a0
	UBillboardComponent* HordeRoarLocation; // 0x4a8
	UBoxComponent* NearBasePodBox; // 0x4b0
	TArray<FDataTableRowHandle> ActiveCardsInPlay; // 0x4b8
	TArray<FNestChallengeCards> EasyDifficultyCardsArray; // 0x4c8
	TArray<FNestChallengeCards> NormalDifficultyCardsArray; // 0x4d8
	TArray<FNestChallengeCards> HardDifficultyCardsArray; // 0x4e8
	TArray<FNestChallengeCards> LegendaryDifficultyCardsArray; // 0x4f8
	TArray<int32_t> NumOfCardDraws; // 0x508
	FDifficultyInt ScenarioDifficultyCardDraw; // 0x518
	FString ClusterDestroyedText; // 0x530
	FString NestDestroyedText; // 0x540
};

struct ABandwidthTestActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x2a0
};

struct USubmixEffectReverbFastPreset {
	FSubmixEffectReverbFastSettings Settings; // 0xa8
};

struct UInteractiveCarMod {
	FGamePropertyFloatMod DestroyableChance; // 0xd8
};

struct UVendorAnimInstance {
	EVendorAnimBehaviorState CurrentBehaviorState; // 0x2b8
	UAnimSequence* LonelyAnim; // 0x2c0
	UAnimSequence* NagAnim; // 0x2c8
	UAnimSequence* InteractAnim; // 0x2d0
	UAnimSequence* InteractToLonelyAnim; // 0x2d8
	UAnimSequence* LonelyToNagAnim; // 0x2e0
	UAnimSequence* NagToLonelyAnim; // 0x2e8
	UAnimSequence* NagToInteractAnim; // 0x2f0
	FLookAtInfo LookAtInfo; // 0x2f8
};

struct UNiagaraPreviewAxis_InterpParamLinearColor {
	FLinearColor Min; // 0x40
	FLinearColor Max; // 0x50
};

struct UInputActionDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x30
};

struct UMatchmakingLocalUserSlot {
	UGobiWebServices* GobiWebServices; // 0x30
	UMatchmaking* Matchmaking; // 0x38
	UOnlineSessions* OnlineSessions; // 0x40
	UGobiWBP1* GobiWBP1; // 0x48
	UGameInstance* GameInstance; // 0x50
	TArray<FTaskTimerConfig> TimerConfigs; // 0x58
	FSignInTasks SignInTasks; // 0x298
	UVivoxListener* VivoxListener; // 0x310
	UBroadcastMessageManager* BroadcastMessageManager; // 0x318
};

struct UAudioJostleSystemPluginSettings {
	UAudioJostleBehaviors* AudioJostleBehaviorsClass; // 0x40
	float GridSize; // 0x48
	FAudioJostleQualitySettings HighQualitySettings; // 0x4c
	FAudioJostleQualitySettings LowQualitySettings; // 0x58
};

struct UMaterialExpressionLandscapeLayerCoords {
	ETerrainCoordMappingType MappingType; // 0x48
	ELandscapeCustomizedCoordType CustomUVType; // 0x49
	float MappingScale; // 0x4c
	float MappingRotation; // 0x50
	float MappingPanU; // 0x54
	float MappingPanV; // 0x58
};

struct ALandscapeStreamingProxy {
	LazyObjectProperty LandscapeActor; // 0x5c0
};

struct UInstancedStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x5c0
	int32_t NumCustomDataFloats; // 0x5d0
	TArray<float> PerInstanceSMCustomData; // 0x5d8
	int32_t InstancingRandomSeed; // 0x5e8
	int32_t InstanceStartCullDistance; // 0x5ec
	int32_t InstanceEndCullDistance; // 0x5f0
	TArray<int32_t> InstanceReorderTable; // 0x5f8
	int32_t NumPendingLightmaps; // 0x664
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x668
};

struct UInventoryLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
};

struct UEndpoints {
	int32_t AtuinVersion; // 0x30
	TArray<FWebServiceEndpoint> ClientEndpoints; // 0x38
	TArray<FWebServiceEndpoint> DediEndpoints; // 0x48
};

struct UTextBlock {
	FText Text; // 0x168
	FDelegate TextDelegate; // 0x180
	FSlateColor ColorAndOpacity; // 0x190
	FDelegate ColorAndOpacityDelegate; // 0x1c0
	FSlateFontInfo Font; // 0x1d0
	FSlateBrush StrikeBrush; // 0x230
	FVector2D ShadowOffset; // 0x2c0
	FLinearColor ShadowColorAndOpacity; // 0x2c8
	FDelegate ShadowColorAndOpacityDelegate; // 0x2d8
	float MinDesiredWidth; // 0x2e8
	bool bWrapWithInvalidationPanel; // 0x2ec
	bool bAutoWrapText; // 0x2ed
	bool bForceUppercase; // 0x2ee
	int32_t Kerning; // 0x2f0
	bool bSimpleTextMode; // 0x2f4
};

struct UBTComposite_SimpleParallelEx {
	EBTParallelExMode ParallelMode; // 0x98
};

struct UApplyEffectItemComponent {
	FMulticastInlineDelegate OnItemApplied; // 0x160
	FMulticastInlineDelegate OnItemCancelled; // 0x170
	EEffectApplicationItemState CurrentState; // 0x180
	AActor* TargetActor; // 0x188
	UPrimitiveComponent* HitComponent; // 0x198
	AGobiCharacter* VisualTargetCharacter; // 0x1a0
	bool bWillExpendAmmoOnUse; // 0x1a8
	float RequiredUseLength; // 0x28c
	float FinishUseStateLength; // 0x290
	bool bRequireButtonHeld; // 0x294
	bool bActivateWithoutValidTarget; // 0x295
	bool bExpendAmmoWithoutValidTarget; // 0x296
	bool bSelectPreviousWeaponAfterUse; // 0x297
	bool bCancelUseOnKnockback; // 0x298
	bool bRequireSelection; // 0x299
	float ChanceToExpendAmmoOnUse; // 0x29c
	bool bCanUseWhileFalling; // 0x2a0
	bool bWaitForPrimaryRelease; // 0x2a1
	TSoftClassPtr<UObject> UsableClassForUsableTimeScale; // 0x2b0
	float MovementScale; // 0x2d8
	FName MovementScaleLabel; // 0x2dc
	bool bApplyMovementScaleToTargetPlayer; // 0x2e4
	bool bScaleAnimationLengthToUseLength; // 0x2e5
	UAnimMontage* UseMontageFP; // 0x2e8
	UAnimMontage* UseMontage3P; // 0x2f0
	UAnimMontage* EndUseMontageFP; // 0x2f8
	UAnimMontage* EndUseMontage3P; // 0x300
	UAnimMontage* AltUseMontageFP; // 0x308
	UAnimMontage* AltUseMontage3P; // 0x310
	UAnimMontage* EndAltUseMontageFP; // 0x318
	UAnimMontage* EndAltUseMontage3P; // 0x320
	bool bRemoveAppliedTagsBeforeApplyingSuccessfulEffects; // 0x328
	bool bRemoveTargetAppliedEffectsUponEndUse; // 0x329
	FGameplayTagContainer AppliedTags; // 0x330
	FGameplayTagContainer BlockingTags; // 0x350
	FGameplayTagQuery ContinuousTagQuery; // 0x370
	FGameplayTagContainer TargetAppliedTags; // 0x3b8
	FGameplayTagQuery InitialTargetTagQuery; // 0x3d8
	FGameplayTagQuery ContinuousTargetTagQuery; // 0x420
	FGameplayTag BeginUseCue; // 0x468
	FGameplayTag SuccessfulUseCue; // 0x470
	FGameplayTag UnsuccessfulUseCue; // 0x478
	FText ProgressBarText; // 0x480
	FText TargetProgressBarText; // 0x498
	FText TargetSelfProgressBarText; // 0x4b0
	bool bShowProgressbar; // 0x4c8
	bool bAllowAltUseTargetting; // 0x4c9
	float MaxAltUseTargetDistance; // 0x4cc
	float MaxAltUseTargetDistanceWhenUsing; // 0x4d0
	float MinAngleToTarget; // 0x4d4
	TArray<UGameplayEffect*> OnSuccessGameplayEffects; // 0x4d8
	TArray<UGameplayEffect*> OnTargetUseGameplayEffects; // 0x4e8
	TArray<UGameplayEffect*> OnOwnerUseGameplayEffects; // 0x4f8
	TArray<UGameplayEffect*> OnHeldGameplayEffects; // 0x508
	FName TriggeredEventName; // 0x518
};

struct UEnvQueryGenerator_Spiral {
	FAIDataProviderFloatValue InnerRadius; // 0x88
	FAIDataProviderFloatValue OuterRadius; // 0xc0
	FAIDataProviderIntValue NumberOfLoops; // 0xf8
	FAIDataProviderFloatValue SpaceBetweenLoops; // 0x130
	FAIDataProviderFloatValue SpaceBetweenPoints; // 0x168
	UEnvQueryContext* Center; // 0x1a0
};

struct URadioButton {
	FRadioButtonStyle WidgetStyle; // 0x160
	bool bIsChecked; // 0x568
	bool bIsContentInside; // 0x569
	EHorizontalAlignment HorizontalAlignment; // 0x56a
	bool IsFocusable; // 0x56b
	bool bIsFocusedOnHover; // 0x56c
	FName RadioButtonGroup; // 0x570
	FMulticastInlineDelegate OnCheckStateChanged; // 0x578
	FMulticastInlineDelegate OnClicked; // 0x588
	FMulticastInlineDelegate OnHovered; // 0x598
	FMulticastInlineDelegate OnUnhovered; // 0x5a8
	FMulticastInlineDelegate OnPressed; // 0x5b8
	FMulticastInlineDelegate OnReleased; // 0x5c8
	EButtonClickMethod ClickMethod; // 0x5d8
};

struct UPushToTalkComponent {
	UInputComponent* InputComponent; // 0xe8
};

struct UGobiGameCoachLesson {
	AActor* LastUpdateTarget; // 0xe0
	UGameplayTagsComponent* TargetGameplayTagsComponentCached; // 0xe8
	UGobiLocalPlayer* GobiLocalPlayer; // 0xf0
	AGobiCharacter* TargetCharacter; // 0xf8
	bool bListenForPawnChanges; // 0x100
	bool bAllowAllTRSEvents; // 0x101
	FMulticastInlineDelegate OnExtraInfo; // 0x108
	FMulticastInlineDelegate OnShowWaypoint; // 0x118
	FMulticastInlineDelegate OnSetWaypointText; // 0x128
	EGobiTeam Team; // 0x138
	FGameplayTagQuery LocalPlayerTags; // 0x140
	FGameplayTagQuery TargetTags; // 0x188
	FGameplayTagQuery LocalPlayerInventoryItemTagQuery; // 0x1d0
	TArray<UGobiGameCoachEvaluatorSet*> LocalPlayerTeachableEvalSets; // 0x218
	TArray<UGobiGameCoachEvaluatorSet*> TargetTeachableEvalSets; // 0x228
	FDataTableRowHandle ActiveMissionObjective; // 0x238
	bool bMainMenu; // 0x258
	bool bSocialSpace; // 0x259
	bool bPvP; // 0x25a
	bool bCoop; // 0x25b
	EMissionDifficulty LowestCoopDifficulty; // 0x25c
	EMissionDifficulty HighestCoopDifficulty; // 0x25d
	bool bShowDemo2020; // 0x25e
	FGameplayTagQuery TeachingSuccessLocalPlayerTags; // 0x260
	FGameplayTagQuery TeachingSuccessTargetTags; // 0x2a8
	TArray<UGobiGameCoachEvaluatorSet*> TeachingSuccessLocalPlayerEvalSets; // 0x2f0
	TArray<UGobiGameCoachEvaluatorSet*> TeachingSuccessTargetEvalSets; // 0x300
	TArray<FName> TeachingSuccessTRSEventNames; // 0x310
	FGameplayTagQuery TeachingFailureLocalPlayerTags; // 0x320
	FGameplayTagQuery TeachingFailureTargetTags; // 0x368
	TArray<UGobiGameCoachEvaluatorSet*> TeachingFailureLocalPlayerEvalSets; // 0x3b0
	bool bFailIfEvalSetFails; // 0x3c0
	TArray<UGobiGameCoachEvaluatorSet*> TeachingFailureTargetEvalSets; // 0x3c8
	UTexture2D* NotificationIcon; // 0x3d8
	FText NotificationText; // 0x3e0
	FText NotificationGamepadText; // 0x3f8
	bool bNotificationOutputTTS; // 0x410
	UTexture2D* WaypointIcon; // 0x418
	FText WaypointTitle; // 0x420
	FText WaypointText; // 0x438
	EEquipmentSlot HighlightEquipSlot; // 0x450
	bool bShowInGameOnly; // 0x451
	bool bHideForPotentialUsableTarget; // 0x452
	bool bHideForAltUseTarget; // 0x453
	UAkAudioEvent* DisplayOverrideSound; // 0x458
};

struct UTweenManagerComponent {
	TArray<UTweenContainer*> mTweenContainers; // 0xe8
};

struct ASafeRoomVendor {
	FMatchStartedCondition MatchStartedCondition; // 0x2a0
};

struct UPartyBeaconState {
	FName SessionName; // 0x30
	int32_t NumConsumedReservations; // 0x38
	int32_t MaxReservations; // 0x3c
	int32_t NumTeams; // 0x40
	int32_t NumPlayersPerTeam; // 0x44
	FName TeamAssignmentMethod; // 0x48
	int32_t ReservedHostTeamNum; // 0x50
	int32_t ForceTeamNum; // 0x54
	bool bRestrictCrossConsole; // 0x58
	bool bEnableRemovalRequests; // 0x59
	TArray<FPartyReservation> Reservations; // 0x60
};

struct USceneCaptureComponentCube {
	UTextureRenderTargetCube* TextureTarget; // 0x2c8
	bool bCaptureRotation; // 0x2d0
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2d8
	UTextureRenderTargetCube* TextureTargetRight; // 0x2e0
	UTextureRenderTarget2D* TextureTargetODS; // 0x2e8
	float IPD; // 0x2f0
};

struct UCutsceneAudioSinkSubsystem {
	TMap<TWeakObjectPtr<UMediaPlayer>, UAudioSinkSystem*> MediaPlayerPairs; // 0x48
};

struct UEnvQueryTest_DistanceAlongGoldenPathDelta {
	UEnvQueryContext* HeroContext; // 0x208
};

struct ULootSpawnCountMod {
	FLootSpawnCountModifier SpawnCountModifier; // 0xd0
};

struct UGameplayAction_Death {
	FGameplayTagQuery DieToRagdollQuery; // 0x2e8
};

struct UAnimContext_ActorSocket {
	FName Socket; // 0x90
	bool bFailIfSocketNotFound; // 0x98
};

struct UItemAmmoMod {
	FGameplayTag RequiredAssociatedItemTag; // 0xd0
	int32_t Count; // 0xd8
};

struct UGobiPlayerProfileComponent {
	bool bPlayerProfileServiceHealthy; // 0x18a
};

struct UTextLayoutWidget {
	FShapedTextOptions ShapedTextOptions; // 0x148
	ETextJustify Justification; // 0x14b
	ETextWrappingPolicy WrappingPolicy; // 0x14c
	char AutoWrapText : 1; // 0x14d
	float WrapTextAt; // 0x150
	FMargin Margin; // 0x154
	float LineHeightPercentage; // 0x164
};

struct UChatBoxUserWidget {
	UAkAudioEvent* PlayerJoinedGroupAudio; // 0x458
};

struct USphereReflectionCaptureComponent {
	float InfluenceRadius; // 0x2a8
	float CaptureDistanceScale; // 0x2ac
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x2b0
};

struct ASwapTeamVolume {
	USceneComponent* RejectionTeleportLocation; // 0x360
};

struct USourceEffectEQPreset {
	FSourceEffectEQSettings Settings; // 0x80
};

struct UNiagaraComponent {
	UNiagaraSystem* Asset; // 0x4b0
	ENiagaraTickBehavior TickBehavior; // 0x4b8
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x4c0
	char bForceSolo : 1; // 0x5c8
	char bAutoDestroy : 1; // 0x5f4
	char bRenderingEnabled : 1; // 0x5f4
	char bAutoManageAttachment : 1; // 0x5f4
	char bAutoAttachWeldSimulatedBodies : 1; // 0x5f4
	float MaxTimeBeforeForceUpdateTransform; // 0x5f8
	FMulticastInlineDelegate OnSystemFinished; // 0x600
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x610
	FName AutoAttachSocketName; // 0x618
	EAttachmentRule AutoAttachLocationRule; // 0x620
	EAttachmentRule AutoAttachRotationRule; // 0x621
	EAttachmentRule AutoAttachScaleRule; // 0x622
};

struct UAnimNotifyState_TimedNiagaraEffect {
	UNiagaraSystem* Template; // 0x38
	FName SocketName; // 0x40
	FVector LocationOffset; // 0x48
	FRotator RotationOffset; // 0x54
	bool bDestroyAtEnd; // 0x60
};

struct UOptionsBindingTextLabelUserWidget {
	TArray<FOptionsBindingTextLabelInputType> InputList; // 0x458
	bool bShowIcon; // 0x468
	float CalloutIconHeight; // 0x46c
	TArray<UDataTable*> HumanAxisDataTableList; // 0x470
	TArray<UDataTable*> ZombieAxisDataTableList; // 0x480
	TArray<UDataTable*> HumanActionsDataTableList; // 0x490
	TArray<UDataTable*> ZombieActionsDataTableList; // 0x4a0
};

struct UGameplayTagsTrait {
	FGameplayTagContainer Tags; // 0x30
	float RandomChance; // 0x50
};

struct UAnimNotifyState_SetBoneVis {
	TArray<FAnimNotify_BoneVisDef> BoneVisibilityChanges; // 0x38
};

struct UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderFloatValue GridSize; // 0x88
	FAIDataProviderFloatValue SpaceBetween; // 0xc0
	UEnvQueryContext* GenerateAround; // 0xf8
};

struct UAnimEvalSet_ClimbTop_C {
	FGameplayEval_ReachedClimbLocation DistanceToTopStart; // 0xc0
	FGameplayEval_Distance TopDistance; // 0x110
	FGameplayEval_Distance ClimbDownDistance; // 0x1e0
	FGameplayEval_RandomChance RandomChance; // 0x2b0
};

struct UAnimContext_RandomOnce {
	TMap<FName, float> RandomValues; // 0x50
};

struct UGameplayTask_SpawnActor {
	FMulticastInlineDelegate Success; // 0x70
	FMulticastInlineDelegate DidNotSpawn; // 0x80
	AActor* ClassToSpawn; // 0xa8
};

struct UMaterialExpressionArctangent2Fast {
	FExpressionInput Y; // 0x48
	FExpressionInput X; // 0x5c
};

struct UMovieSceneNiagaraParameterTrack {
	FNiagaraVariable Parameter; // 0x70
};

struct UGizmoTransformChangeStateTarget {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x58
};

struct UES_DangerClose_C {
	FGameplayEval_NearbyCharacters NearbyCharacters; // 0x78
};

struct UClothPhysicalMeshDataNv_Legacy {
	TArray<float> MaxDistances; // 0xe8
	TArray<float> BackstopDistances; // 0xf8
	TArray<float> BackstopRadiuses; // 0x108
	TArray<float> AnimDriveMultipliers; // 0x118
};

struct UPlanarReflectionComponent {
	UBoxComponent* PreviewBox; // 0x2c8
	float NormalDistortionStrength; // 0x2d0
	float PrefilterRoughness; // 0x2d4
	float PrefilterRoughnessDistance; // 0x2d8
	int32_t ScreenPercentage; // 0x2dc
	float ExtraFOV; // 0x2e0
	float DistanceFromPlaneFadeStart; // 0x2e4
	float DistanceFromPlaneFadeEnd; // 0x2e8
	float DistanceFromPlaneFadeoutStart; // 0x2ec
	float DistanceFromPlaneFadeoutEnd; // 0x2f0
	float AngleFromPlaneFadeStart; // 0x2f4
	float AngleFromPlaneFadeEnd; // 0x2f8
	bool bShowPreviewPlane; // 0x2fc
	bool bRenderSceneTwoSided; // 0x2fd
};

struct USoundNodeRandom {
	TArray<float> Weights; // 0x60
	TArray<bool> HasBeenUsed; // 0x70
	int32_t NumRandomUsed; // 0x80
	int32_t PreselectAtLevelLoad; // 0x84
	char bShouldExcludeFromBranchCulling : 1; // 0x88
	char bSoundCueExcludedFromBranchCulling : 1; // 0x88
	char bRandomizeWithoutReplacement : 1; // 0x88
};

struct UCardDrawOverviewUserWidget {
	FCardAnim SourceToCenter; // 0x480
	FCardAnim CenterToDest; // 0x4a0
	FCardAnim SourceShrink; // 0x4c0
	FCardAnim DestExpand; // 0x4e0
};

struct UMaterialExpressionFloor {
	FExpressionInput Input; // 0x48
};

struct UBTService {
	float Interval; // 0x68
	float RandomDeviation; // 0x6c
	char bCallTickOnSearchStart : 1; // 0x70
	char bRestartTimerOnEachActivation : 1; // 0x70
};

struct UBlackboardComponent {
	UBrainComponent* BrainComp; // 0xe8
	UBlackboardData* DefaultBlackboardAsset; // 0xf0
	UBlackboardData* BlackboardAsset; // 0xf8
	TArray<UBlackboardKeyType*> KeyInstances; // 0x120
};

struct UTimedActivationComponent {
	bool bStartCountdownOnBeginPlay; // 0xe8
	float Countdown; // 0xec
	UAkAudioEvent* CountdownIntervalSound; // 0xf0
	float LongestIntervalDelay; // 0xf8
	float ShortestIntervalDelay; // 0xfc
	float CountdownPctForShortestInterval; // 0x100
	float CountdownPctForLongestInterval; // 0x104
	FMulticastInlineDelegate OnCountdownFinished; // 0x108
};

struct UTeamRelationshipMap {
	TArray<FTeamRelationship> Relationships; // 0x30
};

struct UBTDecorator_ClearBlackboardKey {
	char bOnlyClearOnSuccess : 1; // 0x98
};

struct UThreatMod_SafeRoom {
	float ChangeRate; // 0x40
};

struct UAnimNotifyState_Trail {
	UParticleSystem* PSTemplate; // 0x38
	FName FirstSocketName; // 0x40
	FName SecondSocketName; // 0x48
	ETrailWidthMode WidthScaleMode; // 0x50
	FName WidthScaleCurve; // 0x54
	char bRecycleSpawnedSystems : 1; // 0x5c
	FName OverrideComponentTag; // 0x60
};

struct USoundNodeDistanceCrossFade {
	TArray<FDistanceDatum> CrossFadeInput; // 0x60
};

struct UAnimContext_Trace {
	UAnimContext_Transform* TraceStart; // 0x50
	UAnimContext_Transform* TraceEnd; // 0x58
	float TraceStartForwardOffset; // 0x60
	float TraceEndForwardOffset; // 0x64
	ECollisionChannel TraceChannel; // 0x68
	bool bUseCustomTraceChannel; // 0x69
	FName CustomTraceChannel; // 0x6c
	bool bTraceBothDirections; // 0x74
	bool bDoSweep; // 0x75
	float Radius; // 0x78
	float HalfHeight; // 0x7c
};

struct UAnimNotify_SharedSoundHuman {
	ESharedSurvivorAnimSound HumanSound; // 0x50
	bool PlayIfLocal; // 0x51
	bool PlayIfRemote; // 0x52
};

struct AAudioVolume {
	float Priority; // 0x2d8
	char bEnabled : 1; // 0x2dc
	FReverbSettings Settings; // 0x2e0
	FInteriorSettings AmbientZoneSettings; // 0x300
};

struct UEnvQueryTest_DeltaMap {
	UEnvQueryContext* DeltaMapSource; // 0x208
	FNavAgentSelector DeltaMapNavMesh; // 0x210
	EEnvItemStatus ItemsWithNoDeltaShould; // 0x214
};

struct UFontFace {
	FString SourceFilename; // 0x38
	EFontHinting Hinting; // 0x48
	EFontLoadingPolicy LoadingPolicy; // 0x49
	EFontLayoutMethod LayoutMethod; // 0x4a
};

struct UOnlineEngineInterfaceImpl {
	TMap<FName, FName> MappedUniqueNetIdTypes; // 0x30
	TArray<FName> CompatibleUniqueNetIdTypes; // 0x80
	FName VoiceSubsystemNameOverride; // 0x90
};

struct APartyBeaconClient {
	FString DestSessionId; // 0x360
	FPartyReservation PendingReservation; // 0x370
	EClientRequestType RequestType; // 0x3c0
	bool bPendingReservationSent; // 0x3c1
	bool bCancelReservation; // 0x3c2
};

struct UTeamPositionTrigger {
	float TestInterval; // 0x40
	float TakeLeadSeparationDistance; // 0x44
	float TakeLeadMaxDistFromGoldenPath; // 0x48
	float TeamClusterDistance; // 0x4c
	float SeparatedFromTeamDistance; // 0x50
};

struct UGobiEnemyDamageComponent {
	UBlackboardData* BlackboardAsset; // 0xe8
	FBlackboardKeySelector EnemyBBKey; // 0xf0
	AGobiCharacter* CharacterOwner; // 0x118
	TMap<AGobiCharacter*, FGobiEnemyDamage> EnemyDamage; // 0x120
	AGobiCharacter* CurrentEnemy; // 0x170
	UBlackboardComponent* BlackboardComp; // 0x180
};

struct ULootScenario {
	TSoftClassPtr<UObject> ScenarioClass; // 0x38
	bool bStartWithScenario; // 0x60
	bool bStopWithScenario; // 0x61
	bool bAutoSpawnItems; // 0x62
	bool bRemoveUnusedItems; // 0x63
	float SpawnDistanceThreshold; // 0x64
	TArray<FLootScenarioItemMaintenance> ItemsToMaintain; // 0x68
};

struct UThrowableComponent {
	FMulticastInlineDelegate OnItemThrown; // 0x160
	bool bActivationPressed; // 0x170
	AActor* Projectile; // 0x1e0
	FThrowableStateConfig PullBackStateConfig; // 0x1e8
	FThrowableStateConfig PullBackLoopStateConfig; // 0x210
	FThrowableStateConfig ThrowingStateConfig; // 0x238
	float ThrowTime; // 0x260
	FVector LaunchVelocity; // 0x264
	bool bDelayThrowUntilNextTick; // 0x270
	bool bUseImpulse; // 0x271
	bool bUseImpulseScalarOverride; // 0x272
	float ImpulseScalarOverride; // 0x274
	FGameplayTagContainer AppliedTags; // 0x278
	FGameplayTagQuery InitialTagQuery; // 0x298
	FGameplayTagQuery ContinuousTagQuery; // 0x2e0
	AActor* TargetingReticleActor; // 0x328
	float TargetingReticlePredictTime; // 0x330
	int32_t RequiredAmmo; // 0x334
	FName HiddenBoneOnThrow; // 0x338
	FVector SpawnPositionOffset; // 0x340
	FRotator SpawnRotationOffset; // 0x34c
};

struct USourceEffectMidSideSpreaderPreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x7c
};

struct UPathFollowingComponent {
	UNavMovementComponent* MovementComp; // 0x120
	ANavigationData* MyNavData; // 0x130
};

struct UBTTask_MoveTo {
	float AcceptableRadius; // 0xa0
	UNavigationQueryFilter* FilterClass; // 0xa8
	float ObservedBlackboardValueTolerance; // 0xb0
	char bObserveBlackboardValue : 1; // 0xb4
	char bAllowStrafe : 1; // 0xb4
	char bAllowPartialPath : 1; // 0xb4
	char bTrackMovingGoal : 1; // 0xb4
	char bProjectGoalLocation : 1; // 0xb4
	char bReachTestIncludesAgentRadius : 1; // 0xb4
	char bReachTestIncludesGoalRadius : 1; // 0xb4
	char bStopOnOverlap : 1; // 0xb4
	char bStopOnOverlapNeedsUpdate : 1; // 0xb5
};

struct UBTTask_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x78
	bool bAddToExistingDuration; // 0x80
	float CooldownDuration; // 0x84
};

struct UBumpEmitterNode {
	FBumpEmitterInfo BumpInfo; // 0x70
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

struct UChaosSolverSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x48
};

struct UGameplayEffectCameraShake {
	bool bPlayAsWorldCameraShake; // 0x238
	float InnerRadius; // 0x23c
	float OuterRadius; // 0x240
	FVector EpicenterOffset; // 0x244
	bool bUseBoneLocationAsEpicenter; // 0x250
	FName EpicenterBone; // 0x254
	float Falloff; // 0x25c
	bool bOrientShakeTowardsEpicenter; // 0x260
	bool bLocalPlayerOnly; // 0x261
	UCameraShake* Shake; // 0x268
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x270
	bool bForceFeedbackIsLooping; // 0x278
};

struct UBTTaskNode {
	TArray<UBTService*> Services; // 0x60
	char bIgnoreRestartSelf : 1; // 0x70
};

struct UGameplayAction_BotLadderTraversal {
	UGameplayEvaluatorSet* FilterSet; // 0x210
	bool bDisabled; // 0x218
	UAnimContext_Transform* DesiredDestContext; // 0x220
	float DestDistConstraint; // 0x228
	FGameplayTagContainer RemoveTags; // 0x230
	FVector SearchExtents; // 0x250
};

struct UEndMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UActorToComponentConverter {
	bool bUpdate; // 0x38
	AActor* ActorClass; // 0x40
};

struct UMovieSceneAudioTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x60
};

struct UGameplayEffectWeakspot {
	FWeakSpotAttachment AppliedWeakspot; // 0x240
	FGamePropertyFloatMod WeakSpotMaxHealthMod; // 0x420
};

struct UHeroAudioComponent {
	int32_t TempTestFootsteps; // 0x308
	UAkAudioEvent* WetStep; // 0x310
	float WetStepMinDuration; // 0x318
	float WetStepMaxDuration; // 0x31c
	float LowHealthPercentage; // 0x320
	FDataTableRowHandle IncappedRowHandle; // 0x328
	FDataTableRowHandle RevivedRowHandle; // 0x348
	FDataTableRowHandle FullHealthReachedRowHandle; // 0x368
	FDataTableRowHandle LowHealthReachedRowHandle; // 0x388
	TArray<USoundCollectionAsset*> PossibleSoundCollections; // 0x3a8
	TArray<FAudioDamageTypeEvent> AudioDamageTypeEvents; // 0x3c0
	FGameplayTag DefaultDamageType; // 0x3d0
	TWeakObjectPtr<AAudioController> AudioController; // 0x3d8
	UAkAudioEvent* LadderGrabHardAudioEvent; // 0x3e0
	UAkAudioEvent* LadderGrabSoftAudioEvent; // 0x3e8
	UAkAudioEvent* LadderDismountAudioEvent; // 0x3f0
	float SpeedRTPCRequiredForLadderGrabHard; // 0x3f8
	float LadderMvmtThresholdScalar; // 0x3fc
	UCurveFloat* FootstepThresholdCurve; // 0x400
	float MaxSpeedForFootsteps; // 0x408
	float FoleyDuckingScalar; // 0x40c
	float FoleyDuckReleaseTimeScale; // 0x410
	float PlayerMaxSpeedSquared; // 0x414
	float PivotThresholdSquared; // 0x418
	float PivotScuffAudioCooldown; // 0x41c
	FVector2D ItemMvmtFoleyMinMaxDelay; // 0x420
	TMap<AItem*, UAkAudioEvent*> ItemMovementFoleyMap; // 0x428
	TMap<FName, float> MovementFoleyDelayMap; // 0x478
	TMap<FName, float> ItemMovementFoleyDelayMap; // 0x4c8
	UDataTable* WeaponAnimDataTable; // 0x518
	bool bIsMovementDisabled; // 0x520
	bool bIsSprinting; // 0x521
	bool bIsCrouching; // 0x522
	bool bIsADSing; // 0x523
	UAkAudioEvent* GreedMvmtAudioEvent; // 0x528
	int32_t GreedMaxRTPCValue; // 0x530
	UAkAudioEvent* ReviveFromIncapLocalAudioEvent; // 0x5a0
	UAkAudioEvent* ReviveFromIncapWorldAudioEvent; // 0x5a8
	UAkAudioEvent* UtilityStopAllAudioEvent; // 0x5b0
	UAkAudioEvent* PlayerDeathAudioEvent; // 0x5b8
	UAkAudioEvent* PlayerDeath2DAudioEvent; // 0x5c0
	UAkAudioEvent* OverhealAudioEvent; // 0x5e8
	UAkAudioEvent* BodyfallSwtAudioEvent; // 0x5f0
	UAkAudioEvent* HeartbeatLoopAudioEvent; // 0x5f8
	UAkAudioEvent* HeartbeatLoopStopAudioEvent; // 0x600
	float HeartbeatUpdateRate; // 0x608
	float HeartbeatCooldown; // 0x60c
	float HeartbeatHealthRatioMultiplier; // 0x610
	float HeartbeatRTPCDivider; // 0x614
	float LowHealthTime; // 0x618
	UAkAudioEvent* HitMarkerAudioEvent; // 0x640
	UAkAudioEvent* HitMarkerFriendlyAudioEvent; // 0x648
	FGameplayTagContainer HitMarkerDamageTypeTagContainer; // 0x650
	UAkAudioEvent* HitMarkerArmorAudioEvent; // 0x670
	UAkAudioEvent* HitMarkerMeleeArmorAudioEvent; // 0x678
	UAkAudioEvent* HitMarkerArmorDestroyedAudioEvent; // 0x680
	FGameplayTagContainer KevlarArmoredTagContainer; // 0x688
	UAkAudioEvent* HitMarkerKevlarAudioEvent; // 0x6a8
	UAkAudioEvent* HeadPopMinorAudioEvent; // 0x6b0
	UAkAudioEvent* HeadshotAudioEvent; // 0x6b8
	UAkAudioEvent* PVPRiddenDeathAudioEvent; // 0x6c0
	UAkAudioEvent* FlashlightOnAudioEvent; // 0x6c8
	UAkAudioEvent* FlashlightOffAudioEvent; // 0x6d0
	UAkAudioEvent* CurrencyEarnedAudioEvent; // 0x6d8
	TMap<FString, UAkAudioEvent*> AdditionalCurrencyAKE; // 0x6e0
};

struct UMaterialExpressionStaticBoolParameter {
	char DefaultValue : 1; // 0x60
};

struct UAsyncActionLoadPrimaryAssetClassList {
	FMulticastInlineDelegate Completed; // 0x80
};

struct UTitanMouthComponent {
	TArray<AActor*> Tongues; // 0x128
	TArray<UTitanTongueComponent*> TongueComponents; // 0x138
	UAnimMontage* GrabTellMontage; // 0x148
	UAnimMontage* GrabMontage; // 0x150
	UAnimMontage* PullMontage; // 0x158
	UAnimMontage* BiteMontage; // 0x160
	UAnimMontage* AllTonguesDestroyedMontage; // 0x168
	UAnimMontage* MouthWeakSpotDestroyedMontage; // 0x170
	TArray<AActor*> TongueClasses; // 0x178
	FName TongueAttachSocket; // 0x188
};

struct UGameplayAction_Spawn {
	bool bSortMontagesAlphabetically; // 0x210
	TArray<UAnimMontage*> SpawnMontages; // 0x218
	TArray<UMontageSet*> MontageSets; // 0x228
	TArray<UAnimMontage*> ExitSpawnMontages; // 0x238
	TMap<UAnimMontage*, UAnimSequence*> SupplementalPreSpawnSequences; // 0x248
	TArray<UMontageSet*> ExitMontageSets; // 0x298
	FGameplayTagContainer TriggerExitTags; // 0x2a8
	bool bExitOnEnemyChanged; // 0x2c8
	float EnemyChangedExitDelayTime; // 0x2cc
	bool bExitOnAlerted; // 0x2d0
	float AlertedExitDelayTime; // 0x2d4
	bool bSpawnHidden; // 0x2d8
	FVector PreSpawnLocationOffset; // 0x2dc
	UParticleSystem* PreSpawnEmitter; // 0x2e8
	UGameplayEffect* SpawnActorPostSpawnGE; // 0x2f0
	UGameplayEffect* SpawnActorPostSpawnHordingGE; // 0x2f8
	UGameplayEffect* SpawnActorPostSpawnWanderingGE; // 0x300
	float MaxSpawnDelay; // 0x308
	bool bExitMontageDelayAsRange; // 0x30c
	float ExitMontageDelayTime; // 0x310
	bool bDisablePhysicalizeDeathAnimation; // 0x314
	bool bSetLandMovementMode; // 0x315
	EMovementMode LandMovementMode; // 0x316
	FName SpawnCollisionProfileName; // 0x318
};

struct UAnimMetaData_MontageSync {
	UAnimMontage* Montage; // 0x30
	UGameplayContext_ActorComponent* SyncTargetContext; // 0x38
	bool bSyncStops; // 0x40
};

struct UNPCBanterDialogueTrigger {
	UDataTable* NPCBanterDataTable; // 0x58
	float MaxConversationDistance; // 0x60
	FVector2D TimerInterval; // 0x64
	float BackupBanterStartTimer; // 0x6c
};

struct USkeletalMeshSimplificationSettings {
	FName SkeletalMeshReductionModuleName; // 0x40
};

struct USharedSoundManager {
	FSharedSoundQualitySettings HighQualitySettings; // 0x30
	FSharedSoundQualitySettings LowQualitySettings; // 0x44
	TSet<FName> VocalizationSharedSoundFilter; // 0x58
	TSet<FName> FootstepSharedSoundFilter; // 0xa8
	TSet<FName> LowPrioritySharedSoundFilter; // 0xf8
};

struct AZombieWallAttachLocation {
	UBillboardComponent* BadLocatorSpriteComponent; // 0x2c8
	FVector2D VerticalDistanceRange; // 0x2d0
	FVector2D HorizontalDistanceRange; // 0x2d8
	FMulticastInlineDelegate OnSetLocationVisible; // 0x2e0
	FMulticastInlineDelegate OnSetLocationFocused; // 0x2f0
	EZombieAttachLocationType LocationType; // 0x300
	FGameplayTag PrimitiveComponentTag; // 0x304
	bool bIgnorePrimitiveOffset; // 0x30c
	UPrimitiveComponent* Primitive; // 0x310
	USplineComponent* Spline; // 0x318
	UStaticMeshComponent* VisualizationMesh; // 0x320
	UNavLocationComponent* NavLocationComponent; // 0x328
};

struct UEnvelopeFollowerListener {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xe8
};

struct UEnvQueryTest {
	int32_t TestOrder; // 0x38
	EEnvTestPurpose TestPurpose; // 0x3c
	FString TestComment; // 0x40
	EEnvTestFilterOperator MultipleContextFilterOp; // 0x50
	EEnvTestScoreOperator MultipleContextScoreOp; // 0x51
	EEnvTestFilterType FilterType; // 0x52
	FAIDataProviderBoolValue BoolValue; // 0x58
	FAIDataProviderFloatValue FloatValueMin; // 0x90
	FAIDataProviderFloatValue FloatValueMax; // 0xc8
	EEnvTestScoreEquation ScoringEquation; // 0x101
	EEnvQueryTestClamping ClampMinType; // 0x102
	EEnvQueryTestClamping ClampMaxType; // 0x103
	EEQSNormalizationType NormalizationType; // 0x104
	FAIDataProviderFloatValue ScoreClampMin; // 0x108
	FAIDataProviderFloatValue ScoreClampMax; // 0x140
	EEnvQueryTestClampBehavior ScoreClampBehavior; // 0x178
	FAIDataProviderFloatValue ScoringFactor; // 0x180
	FAIDataProviderFloatValue ReferenceValue; // 0x1b8
	bool bDefineReferenceValue; // 0x1f0
	char bWorkOnFloatValues : 1; // 0x200
};

struct UGeometryCacheTrackStreamable {
	UGeometryCacheCodecBase* Codec; // 0x60
	float StartSampleTime; // 0xd0
};

struct APhysicsVolume {
	float TerminalVelocity; // 0x2d8
	int32_t Priority; // 0x2dc
	float FluidFriction; // 0x2e0
	char bWaterVolume : 1; // 0x2e4
	char bPhysicsOnContact : 1; // 0x2e4
};

struct UNetDriverEOS {
	bool bIsPassthrough; // 0x7d0
	bool bIsUsingP2PSockets; // 0x7d1
};

struct UFlashBangReceiverComponent {
	TWeakObjectPtr<APlayerCharacter> OwnerPlayer; // 0xec
	FGameplayTag FlashbangGameplayTag; // 0xf8
	TWeakObjectPtr<UGameplayTagsComponent> GameplayTagsComponent; // 0x100
	UMaterialInterface* FlashbangMaterial; // 0x118
	FLinearColor FlashColor; // 0x120
	UCurveFloat* FlashIntensityCurve; // 0x130
	UCurveFloat* AfterImageIntensityCurve; // 0x138
	float AfterImageScalePerSec; // 0x140
	TWeakObjectPtr<UMaterialInstanceDynamic> PostProcessMaterialInstance; // 0x144
	UFramebufferCopy* FramebufferCopy; // 0x150
};

struct UMaterialExpressionAtmosphericFogColor {
	FExpressionInput WorldPosition; // 0x48
};

struct UMaterialExpressionQualitySwitch {
	FExpressionInput Default; // 0x48
	FExpressionInput Inputs[0x3]; // 0x5c
};

struct UDefaultLevelSequenceInstanceData {
	AActor* TransformOriginActor; // 0x38
	FTransform TransformOrigin; // 0x40
};

struct UOnGameplayTagChangedTrigger {
	FGameplayTagContainer PinnedTagContainer; // 0x60
	FGameplayTagContainer PinnedByEnemyTagContainer; // 0x80
	float PinnedCalloutInterval; // 0xa4
	float ChanceForPinnedCallout; // 0xa8
	int32_t MaxStruggleBeforePinnedCallout; // 0xac
	FGameplayTagContainer PukedTagContainer; // 0xb8
	float PukedCalloutDelay; // 0xd8
	FGameplayTagContainer SqueezedTagContainer; // 0xe0
	float SqueezedCalloutInterval; // 0x100
	FGameplayTagContainer EatenTagContainer; // 0x108
	float DelayBeforeHagEating; // 0x12c
	FGameplayTagContainer OutOfSafezoneTagContainer; // 0x130
	float OutOfSafezoneCoughInterval; // 0x150
};

struct UAnimEvalSet_Shared_Alert_Attacked_C {
	FGameplayEval_Angle AngleToEnemy; // 0xc0
	FGameplayEval_DamageType DamageType; // 0x120
	FGameplayEval_RandomChance RandomChance; // 0x1e0
};

struct ABaseWeapon_BP_C {
	UTuningDataComponent* TuningData; // 0x4a8
	UItemAkBankComponent* ItemAkBank; // 0x4b0
	UItemCycleComponent* ItemCycle; // 0x4b8
	UWeaponMovementSpeedComponent* WeaponMovementSpeed; // 0x4c0
	UAkAudioEvent* MovementFoley; // 0x4c8
};

struct UDrenchComponent {
	bool bEnabled; // 0x1fc
	float FadeTime; // 0x200
	float HalfLife; // 0x204
	float MaxStrength; // 0x208
	float ScaleCurrentStrength; // 0x20c
	float ScaleIncomingStrength; // 0x210
	float EaseOutPower; // 0x214
	float MinDecayStrength; // 0x218
	float ReplacePct; // 0x21c
	float DecayDelay; // 0x220
	float UpdateDelta; // 0x224
	TMap<FGameplayTag, UMeshMaterialParamSet*> DrenchParams; // 0x228
	FDrenchReplicatedData IncomingDrench; // 0x278
};

struct UAkAndroidInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0x100
};

struct AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x2d0
	UNetConnection* BeaconConnection; // 0x2d8
	EBeaconConnectionState ConnectionState; // 0x2e0
};

struct ACameraShakeSourceActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x2a0
};

struct ASleeper_Projectile_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x798
	USphereComponent* AimAssistSphere; // 0x7a0
	UAimAssistTargetComponent* AimAssistTarget; // 0x7a8
	USphereComponent* CollisionHero; // 0x7b0
	UThreatComponent* Threat; // 0x7b8
	ASleeper_HeroGrappled_ScenarioActor_C* ScenarioActor; // 0x7c0
	bool TargetSnared; // 0x7c8
	AGobiCharacter* TargetCharacter; // 0x7d0
	UGameplayEffect* FriendlyFireImmunityGE; // 0x7d8
};

struct UAnimNotify_Detach {
	UAnimContext_Enemy* EnemyContextClass; // 0x40
};

struct UCurveFloat {
	FRichCurve FloatCurve; // 0x38
	bool bIsEventCurve; // 0xb8
};

struct UBTTask_NavigateTo {
	FAIDataProviderFloatValue AcceptableRadius; // 0xa0
	UNavigationQueryFilter* FilterClass; // 0xd8
	float ObservedBlackboardValueTolerance; // 0xe0
	char bAllowStrafe : 1; // 0xe4
	char bAllowPartialPath : 1; // 0xe4
	char bStopOnOverlap : 1; // 0xe4
	char bResetVelocityOnAbort : 1; // 0xe4
	char bObserveBlackboardValue : 1; // 0xe4
	bool bFailOnBetterClaim; // 0xe8
	bool bPursueTarget; // 0xe9
	FVector2D PursueTargetUpdateRate; // 0xec
	FAIDataProviderUObjectValue SteeringBehaviorDataProvider; // 0xf8
	FAIDataProviderUObjectValue SteeringControlDataProvider; // 0x130
};

struct ADrawbridge {
	USceneComponent* InternalRootComponent; // 0x2a0
	UStaticMeshComponent* BridgeStaticMeshComp; // 0x2a8
	UStaticMeshComponent* PulleyStaticMeshComp; // 0x2b0
	UStaticMeshComponent* PulleyRopeStaticMeshComp; // 0x2b8
	USkeletalMeshComponent* CrankSkeletalMeshComp; // 0x2c0
	UCableComponent* CrankPulleyCableComp; // 0x2c8
	UCableComponent* CrankBridgeCableComp; // 0x2d0
	USceneComponent* CableBridgeAttachPoint; // 0x2d8
	USceneComponent* CableCrankAttachPoint; // 0x2e0
	USceneComponent* CrankLocation; // 0x2e8
	UParticleSystemComponent* RopeParticleSystemComp; // 0x2f0
	UParticleSystemComponent* BridgeImpactParticleSystemComp; // 0x2f8
	UUsableComponent* UsableComponent; // 0x300
	UBoxComponent* UsableTriggerComponent; // 0x308
	UUsableHighlightComponent* UsableHighlightComp; // 0x310
	UGameplayEffectsComponent* GameplayEffectsComp; // 0x318
	UItemAkBankComponent* ItemAkBankComponent; // 0x320
	UAkComponent* PulleyAKComponent; // 0x328
	UAkComponent* CrankAKComponent; // 0x330
	UAkComponent* BridgeAKComponent; // 0x338
	UBoxComponent* StartLessonTriggerBox; // 0x340
	UGameCoachLessonsComponent* GameCoachLessonsComponent; // 0x348
	FMulticastInlineDelegate OnBridgeFullyLowered; // 0x350
	UAnimMontage* UseMontage3P; // 0x360
	FString TriggerHordeReason; // 0x368
	AActor* GobiNavModifierActor; // 0x378
	AAISpawnActorVolume* SpawnActorVolume; // 0x380
	FGameplayTag HordeBlockingTag; // 0x388
	float StartingBridgePitch; // 0x390
	float EndingBridgePitch; // 0x394
	float RopeBreakPct; // 0x398
	float RotationProgressMultiplier; // 0x39c
	float PulleyMultiplier; // 0x3a0
	float BridgeFallSpeedIncrease; // 0x3a4
	float MaxBridgeFallSpeed; // 0x3a8
	float MaxBridgeToolkitFallSpeed; // 0x3ac
	FWalkableSlopeOverride BridgeLoweredWalkableSlopeOverride; // 0x3b0
	TSet<TWeakObjectPtr<AActor>> ActorsToDestroyWhenLowered; // 0x3c0
	TArray<UMaterialInterface*> LoweredCrankMaterials; // 0x410
	float LessonDelay; // 0x420
	FGameplayTagContainer HighlightGameplayTagContainer; // 0x428
	FName CableScalarParameterName; // 0x448
	float CrankBridgeCableMultiplier; // 0x450
	float CrankPulleyCableMultiplier; // 0x454
	bool bHideCableWhenBridgeFalls; // 0x458
	bool bDetachFromEnd; // 0x459
	bool bShouldEnableCableCollision; // 0x45a
	float DeactivateCableCollisionCooldown; // 0x45c
	UAkAudioEvent* AKEPulleyLoop; // 0x460
	UAkAudioEvent* AKEPulleyLoopStop; // 0x468
	UAkAudioEvent* AKEHandleLoop; // 0x470
	UAkAudioEvent* AKEHandleLoopStop; // 0x478
	UAkAudioEvent* AKEBridgeCreakLoop; // 0x480
	UAkAudioEvent* AKEBridgeCreakLoopStop; // 0x488
	UAkAudioEvent* AKEBridgeSquealLoop; // 0x490
	UAkAudioEvent* AKEBridgeSquealLoopStop; // 0x498
	UAkAudioEvent* AKEBridgeSquealFall; // 0x4a0
	UAkAudioEvent* AKEBridgeImpact; // 0x4a8
	UAkAudioEvent* AKEToolkitBridgeImpact; // 0x4b0
	FGameplayTag TriggerHordeCue; // 0x4b8
	float BridgeMovementPct; // 0x4c0
};

struct UGobiSpectatorMovementComponent {
	USpringArmComponent* SpringArmComponent; // 0x190
	float GamepadLookHorzRate; // 0x1b8
	float GamepadLookVertRate; // 0x1bc
	float MouseLookHorzScale; // 0x1c0
	float MouseLookVertScale; // 0x1c4
	bool bAllowFirstPerson; // 0x1c8
	float AutoFollowPitchOffset; // 0x1cc
	float AutoFollowDelaySeconds; // 0x1d0
	float AutoFollowFadeoutSeconds; // 0x1d4
};

struct UDatasmithCineCameraActorTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x38
};

struct UBlackboardKeyType_String {
	FString StringValue; // 0x38
};

struct UGameplayEffectWeightedRandomItem {
	FGameplayTagContainer SupportedTags; // 0x238
	FGameplayTagContainer DisallowedTags; // 0x258
	bool bAddAttachments; // 0x278
	FGameplayTagContainer DisallowedAttachments; // 0x280
	int32_t MinAttachments; // 0x2a0
	int32_t MaxAttachments; // 0x2a4
};

struct UPoseAsset {
	FPoseDataContainer PoseContainer; // 0x88
	bool bAdditivePose; // 0x118
	int32_t BasePoseIndex; // 0x11c
	FName RetargetSource; // 0x120
};

struct UParticleModuleLocationSkelVertSurface {
	ELocationSkelVertSurfaceSource SourceType; // 0x38
	FVector UniversalOffset; // 0x3c
	char bUpdatePositionEachFrame : 1; // 0x48
	char bOrientMeshEmitters : 1; // 0x48
	char bInheritBoneVelocity : 1; // 0x48
	float InheritVelocityScale; // 0x4c
	FName SkelMeshActorParamName; // 0x50
	TArray<FName> ValidAssociatedBones; // 0x58
	char bEnforceNormalCheck : 1; // 0x68
	FVector NormalToCompare; // 0x6c
	float NormalCheckToleranceDegrees; // 0x78
	float NormalCheckTolerance; // 0x7c
	TArray<int32_t> ValidMaterialIndices; // 0x80
	char bInheritVertexColor : 1; // 0x90
	char bInheritUV : 1; // 0x90
	uint32_t InheritUVChannel; // 0x94
};

struct UGameplayTagsRndSelectionTrait {
	TArray<FGameplayTagSet> TagSets; // 0x30
	bool bAddAllTagSets; // 0x40
	float RandomChance; // 0x44
};

struct USubmixEffectReverbPreset {
	FSubmixEffectReverbSettings Settings; // 0xa4
};

struct UAITypePointCosts {
	TArray<FAITypeCost> Costs; // 0x38
};

struct UInheritableComponentHandler {
	TArray<FComponentOverrideRecord> Records; // 0x30
	TArray<UActorComponent*> UnnecessaryComponents; // 0x40
};

struct UNavLinkDefinition {
	TArray<FNavigationLink> Links; // 0x30
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x40
};

struct UMaterialParameterCollectionInstance {
	UMaterialParameterCollection* Collection; // 0x38
};

struct UEnvQueryTest_Project {
	FEnvTraceData ProjectionData; // 0x208
};

struct UTitanTongueComponent {
	ETitanTongueState State; // 0xe8
	AActor* TargetActor; // 0x140
	float PullSecs; // 0x148
	float GrabRange; // 0x14c
	float PullNearDist; // 0x150
	float PullFarDist; // 0x154
	TArray<UGameplayEffect*> GrabbedEffects; // 0x158
	float GrabSecs; // 0x168
	UBlendSpace1D* GrabBlendSpace; // 0x170
	float MissSecs; // 0x178
	UBlendSpace1D* MissBlendSpace; // 0x180
	UBlendSpace1D* PullBlendSpace; // 0x188
	UBlendSpace1D* ReleaseBlendSpace; // 0x190
	UAnimSequence* BiteAnimSequence; // 0x198
	UAnimSequence* EatAnimSequence; // 0x1a0
	FGameplayTag AttachComponentTag; // 0x1a8
	FName AttachBone; // 0x1b0
};

struct UDialogueEvaluatorTrigger {
	UGobiDialogueEvaluatorSet* EvalSet; // 0x50
	float TestInterval; // 0x58
	FName OnPassedEventName; // 0x5c
	FName OnContinueEventName; // 0x64
	FName OnFailedEventName; // 0x6c
	bool OwningCharacterAsEventTarget; // 0x74
	UGobiDialogueEvaluatorSet* ActiveEvalSet; // 0x78
};

struct UNiagaraRibbonRendererProperties {
	UMaterialInterface* Material; // 0x58
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60
	ENiagaraRibbonFacingMode FacingMode; // 0x88
	float UV0TilingDistance; // 0x8c
	FVector2D UV0Scale; // 0x90
	FVector2D UV0Offset; // 0x98
	ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0xa0
	float UV1TilingDistance; // 0xa4
	FVector2D UV1Scale; // 0xa8
	FVector2D UV1Offset; // 0xb0
	ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xb8
	ENiagaraRibbonDrawDirection DrawDirection; // 0xb9
	float CurveTension; // 0xbc
	ENiagaraRibbonTessellationMode TessellationMode; // 0xc0
	int32_t TessellationFactor; // 0xc4
	bool bUseConstantFactor; // 0xc8
	float TessellationAngle; // 0xcc
	bool bScreenSpaceTessellation; // 0xd0
	FNiagaraVariableAttributeBinding PositionBinding; // 0xd8
	FNiagaraVariableAttributeBinding ColorBinding; // 0x150
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c8
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x240
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2b8
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x330
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3a8
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x420
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x498
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x510
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x588
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x600
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x678
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6f0
};

struct UDialogueSubsystem {
	UDialogueSystem* DialogueSystem; // 0x38
};

struct ABarbedWire_Planted {
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x2a0
	USceneComponent* InternalRootComponent; // 0x2a8
	UStaticMeshComponent* StaticMeshComponent; // 0x2b0
	UBoxComponent* BoxComponent; // 0x2b8
	UGameplayEffectEmitterComponent* GameplayEffectEmitterComponent; // 0x2c0
	UHealthComponent* HealthComponent; // 0x2c8
	UItemAudioComponent* ItemAudioComponent; // 0x2d0
	bool bShouldSpread; // 0x2d8
	float SpreadDistance; // 0x2dc
	FVector TraceOffset; // 0x2e0
	ECollisionChannel TraceChannel; // 0x2ec
};

struct UGobiPerformanceMetricTestController {
	AActor* CurrentActor; // 0x68
};

struct UTitanStage3TailComponent {
	ETitanStage3TailState State; // 0x100
	ETitanStage3TailThrashMode CurrentThrashMode; // 0x101
	FGameplayTag AttackVolumeTag; // 0x104
	TArray<UGameplayEffect*> ThrashGameplayEffects; // 0x110
	UAnimSequence* ThrashLeftAnimSequence; // 0x120
	UAnimSequence* ThrashRightAnimSequence; // 0x128
};

struct UMaterialExpressionArccosineFast {
	FExpressionInput Input; // 0x48
};

struct UChallengeObjectiveDamageDealtData {
	FGameplayTagQuery DamageTypeQuery; // 0x70
	int32_t IgnoreDamageContextFlags; // 0xb8
};

struct ASocialSpacePlayerController {
	FMulticastInlineDelegate OnSignedIn; // 0x8a0
	FMulticastInlineDelegate OnSignedOut; // 0x8b0
};

struct UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x30
	FNavigationFilterFlags IncludeFlags; // 0x40
	FNavigationFilterFlags ExcludeFlags; // 0x44
};

struct ASleeper {
	USceneComponent* SceneRoot; // 0x2a0
	USkeletalMeshComponent* PodMeshComponent; // 0x2a8
	USceneComponent* ProjectileSpawnLocation; // 0x2b0
	USphereComponent* SensorySphereComponent; // 0x2b8
	UPingableComponent* PingableComponent; // 0x2c0
	UHealthComponent* HealthComponent; // 0x2c8
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x2d0
	UGameplayTagsComponent* GameplayTagsComponent; // 0x2d8
	UThreatComponent* ThreatComponent; // 0x2e0
	float AggroTimeDelay; // 0x2e8
	float AttackAimConeAngleDegrees; // 0x2ec
	ASleeperProjectile* ProjectileClass; // 0x2f0
	float ProjectileSpeed; // 0x2f8
	float PredictiveAimingScalar; // 0x2fc
	float MinTargetLocationChangeForPredicitveAiming; // 0x300
	FGameplayTagQuery TargetValidTagQuery; // 0x308
	UParticleSystem* DeathVFX; // 0x350
	UAkAudioEvent* IdleLoopAudioEvent; // 0x358
	UAkAudioEvent* IdleLoopStopAudioEvent; // 0x360
	UAkAudioEvent* ReleaseAudioEvent; // 0x368
	UAkAudioEvent* IdleVOXAudioEvent; // 0x370
	FVector2D IdleVOXRate; // 0x378
	float ProjectileSpawnOffset; // 0x380
	FDataTableRowHandle SleeperBurstMusicStinger; // 0x388
	FMulticastInlineDelegate OnLaunch; // 0x3a8
	bool bLaunched; // 0x3b8
	ASleeperProjectile* LiveProjectile; // 0x3c0
	TWeakObjectPtr<AGobiCharacter> AttackTarget; // 0x3fc
};

struct UGameplayEffectAdjustContinues {
	EAdjustContinuesMode Mode; // 0x238
	int32_t Adjustment; // 0x23c
};

struct UInventoryComponent {
	TMap<EEquipmentSlot, float> LastConsumableActivations; // 0x130
	FMulticastInlineDelegate OnAddRemoveItemServer; // 0x180
	FMulticastInlineDelegate OnDroppedItem; // 0x190
	FMulticastInlineDelegate OnSelectedItemChanged; // 0x1a0
	FMulticastInlineDelegate OnUtilityItemApplied; // 0x1b0
	FMulticastInlineDelegate OnCurrencyChanged; // 0x1c0
	FMulticastInlineDelegate OnCurrencyChangedDetailed; // 0x1d0
	FMulticastInlineDelegate OnAdjustCurrency; // 0x1f8
	FMulticastInlineDelegate OnItemUseFailed; // 0x208
	FMulticastInlineDelegate OnConsumableSlotSelected; // 0x218
	FMulticastInlineDelegate EquipmentSlotChanged; // 0x228
	EEquipmentSlot InputSelectedSlot; // 0x300
	TArray<AItem*> EquipmentSlots; // 0x308
	int32_t PostRoundBonusCurrency; // 0x318
	int32_t Currency; // 0x31c
	TWeakObjectPtr<APlayerState> LootingPlayerState; // 0x320
	AItemPickup* DeathItemContainer; // 0x328
	TArray<EEquipmentSlot> SelectableEquipmentSlots; // 0x330
	TArray<FDataTableRowHandle> PerkItems; // 0x340
	FGameplayTagContainer ItemsDisabledTags; // 0x350
	FGameplayTagContainer ItemsDisabledInstantTags; // 0x378
	FGameplayTagContainer PrimaryWeaponDisabledTags; // 0x398
	FGameplayTagContainer SecondaryWeaponDisabledTags; // 0x3b8
	FGameplayTag IsOnLadderTag; // 0x3d8
	AItem* SelectedItemActor; // 0x3e0
	AItem* MoveTickSelectedActor; // 0x3e8
	UGameplayTagsComponent* GameplayTagsComponent; // 0x3f0
	ULifeStateComponent* LifeStateComponent; // 0x3f8
	UGobiPlayerMovementComponent* GobiPlayerMovementComponent; // 0x400
	APawn* OwnerPawn; // 0x408
	FAmmoReserve AmmoReserves[0x7]; // 0x410
	AItem* ServerSelectionActor; // 0xb48
	char ServerSelectionParity; // 0xb51
	UAkAudioEvent* LowAmmoEffectAudioCue; // 0xba8
	FGameplayTag LowAmmoEffectScreenEffectCue; // 0xbb0
	TArray<FCurrencyReward> CurrencyRewardEntries; // 0xbb8
};

struct URichTextBlockImageDecorator {
	UDataTable* ImageSet; // 0x30
};

struct UAkLuminInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0xf8
};

struct UParticleModuleMeshRotationRate {
	FRawDistributionVector StartRotationRate; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamVector4 {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct UTextBlockWidgetStyle {
	FTextBlockStyle TextBlockStyle; // 0x38
};

struct UGizmoBaseComponent {
	FLinearColor Color; // 0x4b0
	float HoverSizeMultiplier; // 0x4c0
	float PixelHitDistanceThreshold; // 0x4c4
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

struct UGameplayCardTravelSubsystem {
	FGameplayCardTravelData TravelData; // 0x38
};

struct USoundSubmixWithParentBase {
	USoundSubmixBase* ParentSubmix; // 0x40
};

struct UMaterialExpressionParticleSubUV {
	char bBlend : 1; // 0xd8
};

struct UParticleModuleEventGenerator {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x38
};

struct UVariantObjectBinding {
	FString CachedActorLabel; // 0x30
	FSoftObjectPath ObjectPtr; // 0x40
	LazyObjectProperty LazyObjectPtr; // 0x58
	TArray<UPropertyValue*> CapturedProperties; // 0x78
	TArray<FFunctionCaller> FunctionCallers; // 0x88
};

struct UHealthPipUserWidget {
	UMaterialInstanceDynamic* MaterialInstance; // 0x458
	float Health; // 0x460
	float HealingHealth; // 0x464
	float TempHealth; // 0x468
	float MaxHealth; // 0x46c
	float CurWidth; // 0x470
	FName HealthBaxMaxDamageMaterialName; // 0x474
	FName HealthBaxMaxDamageColorGroup; // 0x47c
	FName HealthBaxTraumaMaterialName; // 0x484
	FName HealthBaxTraumaColorGroup; // 0x48c
};

struct UCurveLinearColorAtlas {
	uint32_t TextureSize; // 0xf0
	TArray<UCurveLinearColor*> GradientCurves; // 0xf8
};

struct ULodClipboardContent {
	FRawLodInfo LODInfo; // 0x30
};

struct UEnvQueryContext_ScenarioData {
	FGameplayTag ScenarioTag; // 0x30
};

struct AGameDirectorDebugger {
	TArray<FHeroContext> HeroSpawnContexts; // 0x2a0
	bool bAllHerosPreparing; // 0x2b0
	float GameIntensity; // 0x2b4
	float GameIntensityRate; // 0x2b8
	uint32_t GameThreatLevel; // 0x2bc
	int32_t TotalAICount; // 0x2c0
	int32_t TotalAggroAICount; // 0x2c4
	int32_t TotalPointBudget; // 0x2c8
	int32_t NumPlayersOnNav; // 0x2cc
	int32_t NumNavmeshes; // 0x2d0
	int32_t NumPlayersOnObjectiveDMap; // 0x2d4
	bool bHasValidObjective; // 0x2d8
	int32_t NumSpawnersByPlayers; // 0x2dc
	TArray<FName> ActiveScenarios; // 0x2e0
	TArray<FString> ActiveScenarioDetails; // 0x2f0
	TArray<float> ActiveScenarioSpawnerSuccessRate; // 0x300
	TArray<FName> DormantScenarios; // 0x310
	TArray<FAISpawnActorDebugInfo> SpawnActorDebug; // 0x320
	float RecycleDistance; // 0x330
	float DistanceAdvancedAfterHorde; // 0x334
	float CurrentObjectiveDistance; // 0x338
	float ObjectiveSearchDistance; // 0x33c
	FVector ObjectiveLocation; // 0x340
	EPacingPhase PacingPhase; // 0x34c
	FName PhaseHolder; // 0x350
	float RemainingPhaseTime; // 0x358
	uint32_t HeroSpawnIdx; // 0x35c
	TArray<FVector> GreySpawners; // 0x360
	TArray<FVector> RedSpawners; // 0x370
	TArray<FVector> GreenSpawners; // 0x380
	TArray<FVector> CyanSpawners; // 0x390
	TArray<FVector> OrangeSpawners; // 0x3a0
	TArray<FVector> YellowSpawners; // 0x3b0
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

struct UGobiCameraShake {
	UCurveFloat* OscillationBlendCurve; // 0x168
};

struct UInteractiveGizmo {
	UInputBehaviorSet* InputBehaviors; // 0x38
};

struct UAIScriptingComponent {
	FMulticastInlineDelegate OnSenseUnWatched; // 0xe8
	FMulticastInlineDelegate OnSensedWhizBy; // 0xf8
	FMulticastInlineDelegate OnAlertedChanged; // 0x108
	FMulticastInlineDelegate OnEnemyChanged; // 0x118
	FMulticastInlineDelegate OnHideFromHordesChanged; // 0x128
	AActor* CachedEnemy; // 0x138
	UBlackboardData* BlackboardAsset; // 0x140
	FBlackboardKeySelector AlertToLocationBBKey; // 0x148
	FBlackboardKeySelector PseudoAlertToLocationBBKey; // 0x170
	FBlackboardKeySelector RetreatLocationBBKey; // 0x198
	FBlackboardKeySelector AmbushLocationBBKey; // 0x1c0
	FBlackboardKeySelector WanderLocationBBKey; // 0x1e8
	FBlackboardKeySelector IsHordingBBKey; // 0x210
	FBlackboardKeySelector EnemyBBKey; // 0x238
	FBlackboardKeySelector HighPrioritySmartActorBBKey; // 0x260
	FBlackboardKeySelector LowPrioritySmartActorBBKey; // 0x288
	FBlackboardKeySelector ReachInSmartActorBBKey; // 0x2b0
	FBlackboardKeySelector WallClingActorBBKey; // 0x2d8
	FBlackboardKeySelector CanTriggerAttackBBKey; // 0x300
	FBlackboardKeySelector CanTriggerAttackIgnoreEnabledBBKey; // 0x328
	FBlackboardKeySelector IsDeadBBKey; // 0x350
	FBlackboardKeySelector HealthBBKey; // 0x378
	FBlackboardKeySelector ScriptSplineBBKey; // 0x3a0
	FBlackboardKeySelector HideFromHordesBBKey; // 0x3c8
	FBlackboardKeySelector ShouldHideBBKey; // 0x3f0
	FBlackboardKeySelector AttackLocationBBKey; // 0x418
	FVector DefaultExtents; // 0x440
};

struct APVPClassicGameMode {
	float ZombieRelocateOnDistanceFromHeroes; // 0x5a8
	int32_t MaxDistancePointsToObjective; // 0x5ac
	float ExpGrowthFactor; // 0x5b0
	float BonusScoreForRemainingCapable; // 0x5b4
	FGameplayTagQuery HasBeenIncapacitatedQuery; // 0x5b8
	float DistanceTraveledUpdateInterval; // 0x600
};

struct UAISense_Touch {
	TArray<FAITouchEvent> RegisteredEvents; // 0x88
};

struct UMessagePopupUserWidget {
	TSoftClassPtr<UObject> ButtonClass; // 0x498
};

struct ASleeper_AICharacterBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1330
	UHealthBarComponent* HealthBar; // 0x1338
	UInfectedHighlightComponent* InfectedHighlight; // 0x1340
	UEnemyAudioComponent_BP_C* EnemyAudioComponent_BP; // 0x1348
	AItemPickupBase_BP_C* LootContainer; // 0x1350
	AActor* LootContainerClass; // 0x1358
	float AttackRadius; // 0x1360
	float ThreatReactThresholdTime; // 0x1364
	AActor* SleeperPod; // 0x1368
	bool IsActiveSleeper; // 0x1370
	float InactiveMaxHealth; // 0x1374
	UThreatComponent* ThreatComponent; // 0x1378
	ASleeper_HeroGrappled_ScenarioActor_C* ScenarioActor; // 0x1380
	int32_t NewVar_1; // 0x1388
	FVector SpawnOffset; // 0x138c
};

struct UMovieSceneGeometryCollectionSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct UPreviewMeshCollection {
	USkeleton* Skeleton; // 0x40
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x48
};

struct UMicroManagerSubsystem {
	TMap<UMicroManager*, UMicroManager*> ManagerMap; // 0x38
};

struct ULevelStreamingDynamic {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
	char bReloadOnSoftReset : 1; // 0x14c
	char bDefaultSpawnLevel : 1; // 0x14c
};

struct ACameraRig_Rail {
	float CurrentPositionOnRail; // 0x2a0
	bool bLockOrientationToRail; // 0x2a4
	USceneComponent* TransformComponent; // 0x2a8
	USplineComponent* RailSplineComponent; // 0x2b0
	USceneComponent* RailCameraMount; // 0x2b8
};

struct UBlackboardKeyType_Object {
	UObject* BaseClass; // 0x38
};

struct UInterpTrackEvent {
	TArray<FEventTrackKey> EventTrack; // 0x78
	char bFireEventsWhenForwards : 1; // 0x88
	char bFireEventsWhenBackwards : 1; // 0x88
	char bFireEventsWhenJumpingForwards : 1; // 0x88
	char bUseCustomEventName : 1; // 0x88
};

struct USkeletalMeshLODSettings {
	FPerPlatformInt MinLOD; // 0x38
	FPerPlatformBool DisableBelowMinLodStripping; // 0x3c
	FPerPlatformBool bSupportLODStreaming; // 0x3d
	FPerPlatformInt MaxNumStreamedLODs; // 0x40
	FPerPlatformInt MaxNumOptionalLODs; // 0x44
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x48
};

struct AHero_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x16d0
	UCameraViewModifierComponent* CameraViewModifier; // 0x16d8
	UModifyViewComponent* ModifyView; // 0x16e0
	UDrench_Component_Hero_BP_C* Drench; // 0x16e8
	USkeletalMeshComponent* ThirdPersonLegsMesh; // 0x16f0
	USkeletalMeshComponent* ThirdPersonHeadMesh; // 0x16f8
	UAttachableComponent* Attachable; // 0x1700
	UTRSEventTrigger_BP_C* TRSEventTrigger_BP; // 0x1708
	UFlashlightPoseComponent* FlashlightPose1; // 0x1710
	UHeroDialogue_BP_C* HeroDialogue_BP; // 0x1718
	UStumbleComponent* Stumble; // 0x1720
	UGrappleComponent* Grapple; // 0x1728
	UHeroFacialAnimationComponent* HeroFacialAnimation; // 0x1730
	UPhysicalAnimationComponent* PhysicalAnimation; // 0x1738
	UHeroGameCoachLessons_BP_C* HeroGameCoachLessons; // 0x1740
	UHealthHitMarkerComponent* HealthHitMarker; // 0x1748
	UDamageFilterComponent* DamageFilterComponent; // 0x1750
	UKillHandlerComponent* KillHandler; // 0x1758
	UFlashBangReceiver_BP_C* FlashBangReceiver_BP; // 0x1760
	UMountedWeaponInteractComponent* MountedWeaponInteract; // 0x1768
	UPingableComponent* Pingable; // 0x1770
	UFlashlightPoseComponent* FlashlightPose; // 0x1778
	UHeroHighlight_BP_C* HeroHighlight_BP; // 0x1780
	UMantleComponent* Mantle; // 0x1788
	UGameplayContextComponent* GameplayContext; // 0x1790
	USceneComponent* CameraRoot; // 0x1798
	UCameraComponent* ThirdPersonCamera; // 0x17a0
	UCameraComponent* FirstPersonCamera; // 0x17a8
	UFPRigSkeletalMeshComponent* FirstPersonArms; // 0x17b0
	USpringArmComponent* FirstPersonSpringArm; // 0x17b8
	USpringArmComponent* ThirdPersonSpringArm; // 0x17c0
	UPlayerStaminaComponent* PlayerStamina; // 0x17c8
	UPlayerSprintComponent* PlayerSprint; // 0x17d0
	UPlayerAimAssistComponent* PlayerAimAssist; // 0x17d8
	UMoveIgnoreActorsComponent* MoveIgnoreActors; // 0x17e0
	UIncapUsable_BP_C* IncapUsable_BP; // 0x17e8
	UPerkComponent* PerkComponent; // 0x17f0
	UPlayHitReactionComponent* PlayHitReaction; // 0x17f8
	UCapsuleComponent* Player_Damage_Capsule; // 0x1800
	UHealthComponent* Health; // 0x1808
	UHeroLightComponent* FlashlightManager; // 0x1810
	ULedgeHangUsable_BP_C* LedgeHangUsable_BP; // 0x1818
	UPlayerMovementDebugComponent* PlayerMovementDebug; // 0x1820
	UHeroLifeStateComponent_BP_C* HeroLifeStateComponent_BP; // 0x1828
	USpotLightComponent* GrappleSpotLight; // 0x1830
	UDistanceMapSourceComponent* DistanceMapSource; // 0x1838
	UCapsuleComponent* IncapUseVolume; // 0x1840
	UHeroUseComponent* HeroUse; // 0x1848
	UGameplayEffectsComponent* GameplayEffects; // 0x1850
	UHitMarkerComponent* HitMarker; // 0x1858
	UHeroAudioComponent_BP_C* HeroAudioComponent_BP; // 0x1860
	UPlayerViewComponent* HeroView; // 0x1868
	UInventoryComponent* Inventory; // 0x1870
	FMulticastInlineDelegate Callback_OnJumped; // 0x1878
	FMulticastInlineDelegate Callback_OnLanded; // 0x1888
	float AlertCommons_Radius; // 0x1898
};

struct UParticleModuleKillBox {
	FRawDistributionVector LowerLeftCorner; // 0x38
	FRawDistributionVector UpperRightCorner; // 0x80
	char bAbsolute : 1; // 0xc8
	char bKillInside : 1; // 0xc8
	char bAxisAlignedAndFixedSize : 1; // 0xc8
};

struct UAnimEvalSet_Climb {
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xc0
	FAnimEval_Climb ClimbLinkEval; // 0x108
	float MaxStartingDistance; // 0x170
	float ClimbUp; // 0x174
	float TopDistance; // 0x178
	float ClimbDown; // 0x17c
	TArray<UNavArea*> ClimbNavAreas; // 0x180
	bool bNeedsClearPathToLinkStart; // 0x190
};

struct UBTService_TeamSensor {
	FGameplayTagQuery AllowSensorTagQuery; // 0x78
	FGameplayTagQuery TeammateTagQuery; // 0xc0
	FBlackboardKeySelector TeammateTargetBBKey; // 0x108
	FBlackboardKeySelector TeammateDistBBKey; // 0x130
	FBlackboardKeySelector ShouldTeamTeleportBBKey; // 0x158
	FBlackboardKeySelector TeamCentroidBBKey; // 0x180
};

struct UEnvQueryTest_NotAggroOrOld {
	float OldThreshold; // 0x208
};

struct UPrespawnComponent {
	FPreSpawnInfo PreSpawnInfo; // 0xf0
	AActor* PreSpawnActorClass; // 0x140
	USkeletalMeshComponent* PreSpawnSKMComp; // 0x148
};

struct UBTDecorator_CanEnterBruteState {
	EBruteState State; // 0x70
	float FlowControlDelay; // 0x74
};

struct UVendorSubcategoryUserWidget {
	FMulticastInlineDelegate OnItemFocusReceived; // 0x458
	FMulticastInlineDelegate OnItemFocusLost; // 0x468
	FMulticastInlineDelegate OnItemClicked; // 0x478
};

struct UHagAnimInstance {
	FHagAnimState HagAnimState; // 0x7f8
};

struct UGameplayContextComponent {
	TArray<UGameplayContext*> Contexts; // 0xe8
	FRepContextLocation RepContextLocation; // 0x148
	FRepContextRotation RepContextRotation; // 0x160
	TArray<UGameplayContext*> InitialContexts; // 0x178
};

struct UProjectileSprayComponent {
	FMulticastInlineDelegate OnSprayEnded; // 0x1d8
	FProjectileSprayConfig SprayConfig; // 0x1e8
	FProjectileSprayMoveTickData MoveTickData; // 0x328
	TArray<UProjectileSimple*> Projectiles; // 0x338
	FVector SprayTarget; // 0x3d4
};

struct UTestMovieSceneSequence {
	UMovieScene* MovieScene; // 0x350
};

struct UWaterRipplerComponent {
	UWaterRipplerDef* RipplerDefinition; // 0x230
	AWaterVolume* WaterVolume; // 0x238
	FWaterRipplerRuntime RuntimeData; // 0x240
};

struct UEnvQueryTest_EnemyClaim {
	FAIDataProviderIntValue InitialEnemyMaxDP; // 0x208
	FAIDataProviderFloatValue ClaimRadiusDP; // 0x240
};

struct UParticleModuleAcceleration {
	FRawDistributionVector Acceleration; // 0x40
	char bApplyOwnerScale : 1; // 0x88
};

struct UActivitySubsystem {
	bool bEnabledForPlatform; // 0x38
};

struct UBTService_BlueprintBase {
	AAIController* AIOwner; // 0x78
	AActor* ActorOwner; // 0x80
	char bShowPropertyDetails : 1; // 0x98
	char bShowEventDetails : 1; // 0x98
};

struct ANavigationObjectBase {
	UCapsuleComponent* CapsuleComponent; // 0x2a8
	UBillboardComponent* GoodSprite; // 0x2b0
	UBillboardComponent* BadSprite; // 0x2b8
	char bIsPIEPlayerStart : 1; // 0x2c0
};

struct ABirdSystem {
	bool bBirdSystemEnabled; // 0x2a8
	bool bNetworked; // 0x2a9
	bool bControlledByMicroManager; // 0x2aa
	uint32_t SupportedGameModes; // 0x2ac
	int32_t BirdCount; // 0x2b0
	FVector2D InitialLocation; // 0x2b4
	FVector2D HoverRadius; // 0x2bc
	int32_t CircleCount; // 0x2c4
	int32_t SplinePointCount; // 0x2c8
	float SplineRadius; // 0x2cc
	bool bLandSameSiteAllowed; // 0x2d0
	EBirdAfterInitialFlight InitialFlightOption; // 0x2d1
	TArray<ABird*> ActorTypes; // 0x2d8
	TArray<ABirdSite*> Sites; // 0x2e8
	ABirdSite* StartSite; // 0x398
	TArray<ABird*> BirdActors; // 0x3a0
	TArray<USplineComponent*> Splines; // 0x3b0
	TArray<int8_t> BirdSpawns; // 0x3c0
	TArray<FBirdInfo> BirdInfos; // 0x3d0
};

struct UGameplayAction_BotInteractUse {
	UUsableComponent* UsableComponentClass; // 0x210
	UAnimContext_Actor* InteractContext; // 0x218
	UGameplayEvaluatorSet* FilterSet; // 0x220
};

struct UTweenVector {
	FMulticastInlineDelegate OnTweenStart; // 0xb0
	FMulticastInlineDelegate OnTweenUpdate; // 0xc0
	FMulticastInlineDelegate OnTweenEnd; // 0xd0
	FMulticastInlineDelegate OnTweenActorHit; // 0xe0
	FMulticastInlineDelegate OnTweenActorBeginOverlap; // 0xf0
	FMulticastInlineDelegate OnTweenPrimitiveComponentHit; // 0x100
	FMulticastInlineDelegate OnTweenPrimitiveComponentBeginOverlap; // 0x110
};

struct ABaseGun_Static_BP_C {
	UStaticMeshComponent* SightMesh_3P; // 0x508
	UStaticMeshComponent* BarrelMesh_3P; // 0x510
	UStaticMeshComponent* BaseStaticMesh_3P; // 0x518
};

struct UDebugCameraControllerSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x40
};

struct UMaterialExpressionStaticBool {
	char Value : 1; // 0x48
};

struct UBot_DeathReaction_GA_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x210
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
	char bUnstickInitialHits : 1; // 0x190
	char bIgnoreSourceActor : 1; // 0x190
	float MaxCollisionDistance; // 0x194
};

struct UAkXSXInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0xfc
};

struct UDialogueResponseSet {
	TMap<FName, FDialogueResponse> Responses; // 0x38
};

struct UEditableTextBoxWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x38
};

struct UTextureRenderTarget {
	float TargetGamma; // 0xc0
};

struct UParticleModuleRotationRateMultiplyLife {
	FRawDistributionFloat LifeMultiplier; // 0x38
};

struct UGameplayEffectReloadComponent {
	FGamePropertyFloatMod ReloadSpeedScaleMod; // 0x250
	TArray<UGameplayEffect*> PowerReloadEffects; // 0x260
	TArray<UGameplayEffect*> PowerReloadPlayerEffects; // 0x270
};

struct ULightmappedSurfaceCollection {
	UModel* SourceModel; // 0x30
	TArray<int32_t> Surfaces; // 0x38
};

struct UInterpGroup {
	TArray<UInterpTrack*> InterpTracks; // 0x38
	FName GroupName; // 0x48
	FColor GroupColor; // 0x50
	char bCollapsed : 1; // 0x54
	char bVisible : 1; // 0x54
	char bIsFolder : 1; // 0x54
	char bIsParented : 1; // 0x54
	char bIsSelected : 1; // 0x54
};

struct UTRSAudioDebugger {
	UWorld* World; // 0x30
};

struct UGameplayAction_SmartActor {
	UPlayMontageAndWaitProxy* PlayAndWaitProxy; // 0x218
	UAnimMontage* ChosenMontage; // 0x220
	TArray<UAnimMontage*> Montages; // 0x228
	bool bDeactivateOnBlendOut; // 0x238
	FVector2D PlayRateRange; // 0x23c
	UGameplayEffect* SmartActorCooldownEffect; // 0x248
};

struct UWallGrabTrait {
	FWallGrabConfig Config; // 0x30
	UWallGrabComponent* WallGrabComponentClass; // 0x188
};

struct UGameplayEffectAudio {
	TArray<UAkAudioEvent*> StartAkAudioEvents; // 0x238
	TArray<UAkAudioEvent*> StopAkAudioEvents; // 0x248
	bool bLocallyControlledOnly; // 0x258
	bool bPostAtLocation; // 0x259
};

struct USignInScreen {
	FMulticastInlineDelegate OnPlayerSignedIn; // 0x560
	FSignInFailedPopupData MatchmakingFailedPopupData; // 0x570
	UAkAudioEvent* RoboSignInKBMAudio; // 0x5e8
	UAkAudioEvent* RoboSignInPSAudio; // 0x5f0
	UAkAudioEvent* RoboSignInSteamContAudio; // 0x5f8
	UAkAudioEvent* RoboSignInSwitchAudio; // 0x600
	UAkAudioEvent* RoboSignInXboxAudio; // 0x608
	UAkAudioEvent* RoboSignInStopAudio; // 0x610
	UMatchmaking* Matchmaking; // 0x640
};

struct UAISenseConfig_Sight {
	UAISense_Sight* Implementation; // 0x50
	float SightRadius; // 0x58
	float LoseSightRadius; // 0x5c
	float PeripheralVisionAngleDegrees; // 0x60
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x64
	float AutoSuccessRangeFromLastSeenLocation; // 0x68
};

struct UBTTask_RunBehaviorDynamic {
	FGameplayTag InjectionTag; // 0x78
	UBehaviorTree* DefaultBehaviorAsset; // 0x80
	UBehaviorTree* BehaviorAsset; // 0x88
};

struct UGizmoLocalFloatParameterSource {
	float Value; // 0x50
	FGizmoFloatParameterChange LastChange; // 0x54
};

struct USkeletalBodySetup {
	bool bSkipScaleFromAnimation; // 0x258
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x260
};

struct ATemplateSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2a8
	UTemplateSequencePlayer* SequencePlayer; // 0x2c0
	FSoftObjectPath TemplateSequence; // 0x2c8
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x2e0
};

struct UMaterialExpressionMaterialFunctionCall {
	UMaterialFunctionInterface* MaterialFunction; // 0x48
	FMaterialParameterInfo FunctionParameterInfo; // 0x50
};

struct ACableFerry {
	EFerryState CurrentFerryState; // 0x2a0
	AGobiGameStateBase* GobiGameState; // 0x2c8
	USceneComponent* DefaultSceneRoot; // 0x2d0
	UStaticMeshComponent* Ferry; // 0x2d8
	UStaticMeshComponent* FerryMotor; // 0x2e0
	UCableComponent* FerryMotorCable1; // 0x2e8
	UCableComponent* FerryMotorCable2; // 0x2f0
	USceneComponent* IntactFerryRoot; // 0x2f8
	USceneComponent* BrokenFerryRoot; // 0x300
	UBoxComponent* UsableVolume; // 0x308
	UBoxComponent* DamageVolume; // 0x310
	UBoxComponent* PushbackVolume; // 0x318
	UBoxComponent* KnockbackVolume; // 0x320
	TArray<UBoxComponent*> ZombieBlockVolumes; // 0x328
	UBoxComponent* PlayerCheckerVolume; // 0x338
	UBoxComponent* NavModifierVolume; // 0x340
	USplineComponent* FerryTravelSpline; // 0x348
	UUsableComponent* UsableComp; // 0x350
	UUsableComponent* NotUsableComp; // 0x358
	UHealthComponent* HealthComp; // 0x360
	UGobiNavModifierComponent* GobiNavModifierComp; // 0x368
	UUsableHighlightComponent* UsableHighlightComp; // 0x370
	UGameplayEffectsComponent* GameplayEffectsComp; // 0x378
	TArray<UStaticMeshComponent*> IntactFerry; // 0x380
	TArray<UStaticMeshComponent*> IntactFerryMotor; // 0x390
	TArray<UStaticMeshComponent*> BrokenFerry; // 0x3a0
	TArray<UStaticMeshComponent*> BrokenFerryMotor; // 0x3b0
	TArray<AHeroCharacter*> PlayersInVolume; // 0x3c0
	TArray<FName> HeroAttachmentLocations; // 0x3d0
	TArray<FName> FerryHitLocations; // 0x3e0
	AActor* ThreatActorClassForBigObjects; // 0x3f0
	TArray<AActor*> SpawnThreatActors; // 0x3f8
	FGameplayTag FerrySceneComponentTag; // 0x408
	bool bRequiresAllPlayersForUse; // 0x410
	float PushbackDelay; // 0x414
	float PushbackCooldown; // 0x418
	float PushbackHeroDamage; // 0x41c
	float PushbackZombieDamage; // 0x420
	float IncapCameraCollisionDisableTime; // 0x424
	bool bKillPlayerIncappedByFerry; // 0x428
	float KnockbackImpulseStrength; // 0x42c
	float KnockbackDuration; // 0x430
	float KnockbackGravityScalar; // 0x434
	UGobiDamageType* PushbackDamageType; // 0x438
	EPhysicalSurface PushbackDamagePhysicalSurface; // 0x440
	TMap<AGobiCharacter*, float> PushbackTargets; // 0x448
	FGameplayTagQuery SpeedAdjustTargetQuery; // 0x498
	FGameplayTagContainer SpeedAdjustTagsToRemove; // 0x4e0
	FGameplayTagContainer SpeedAdjustTagsToAdd; // 0x500
};

struct UGlobalAssetLoaderV2 {
	UDataTable* GlobalAssetTable; // 0x30
	TArray<UAssetTable*> RequestedAssetTables; // 0x38
	TArray<UAssetTable*> LoadedAssetTables; // 0x48
};

struct UVisibilityNavMapQueryFilter {
	float VisibilityCountInfluence; // 0x50
	float PartialVisibilityScalar; // 0x54
};

struct ADefaultPawn {
	float BaseTurnRate; // 0x2f8
	float BaseLookUpRate; // 0x2fc
	UPawnMovementComponent* MovementComponent; // 0x300
	USphereComponent* CollisionComponent; // 0x308
	UStaticMeshComponent* MeshComponent; // 0x310
	char bAddDefaultMovementBindings : 1; // 0x318
};

struct UAISenseEvent_TRSHearing {
	FAITRSNoiseEvent Event; // 0x30
};

struct UGameplayTasksComponent {
	char bIsNetDirty : 1; // 0xf4
	TArray<UGameplayTask*> SimulatedTasks; // 0xf8
	TArray<UGameplayTask*> TaskPriorityQueue; // 0x108
	TArray<UGameplayTask*> TickingTasks; // 0x128
	TArray<UGameplayTask*> KnownTasks; // 0x138
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x148
};

struct UAnimEvalSet_ItemStanceHitDirection_C {
	FGameplayEval_SelectedItemAnimationStance ItemStance; // 0xc0
	FGameplayEval_Angle HitDirection; // 0x110
};

struct UColorBlindOutlineHighlightData {
	TMap<EColorBlindMode, FHighlightPalette> OutlinePalettes; // 0x38
};

struct UCommon_LocoBase_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x370
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x398
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x410
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x440
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x4b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x4e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x510
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x538
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x560
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x588
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x5b0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0x5d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_18; // 0x688
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_16; // 0x818
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_19; // 0x8a0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_17; // 0x940
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_15; // 0xad0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_18; // 0xb58
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_16; // 0xbf8
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_14; // 0xd88
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_17; // 0xe10
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_15; // 0xeb0
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_13; // 0x1040
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_16; // 0x10c8
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x1168
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_14; // 0x1198
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_12; // 0x1328
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_13; // 0x13b0
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_11; // 0x1540
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_12; // 0x15c8
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_10; // 0x1758
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_11; // 0x17e0
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_9; // 0x1970
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_15; // 0x19f8
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_14; // 0x1a98
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_13; // 0x1b38
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0x1bd8
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_12; // 0x1c88
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x1d28
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_28; // 0x1d58
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_27; // 0x1dc8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_26; // 0x1e38
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_25; // 0x1ea8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x1f18
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_24; // 0x1fc8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_23; // 0x2038
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_22; // 0x20a8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_21; // 0x2118
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x2188
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_20; // 0x2238
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_19; // 0x22a8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_18; // 0x2318
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_17; // 0x2388
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_4; // 0x23f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_28; // 0x24c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_27; // 0x25a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_26; // 0x2690
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_25; // 0x2778
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_24; // 0x2860
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_23; // 0x2948
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_22; // 0x2a30
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0x2b18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x2c00
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x2ce8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x2dd0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x2eb8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x2fa0
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x3050
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_10; // 0x3080
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_11; // 0x3210
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x32b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x32d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x3300
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x3378
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_3; // 0x33a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x3470
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x34e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x3560
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x35d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x3650
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x36c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x3740
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x37b8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x37e8
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x3898
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x38c8
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x3978
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x39a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x39d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x39f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x3a20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x3a48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x3a70
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0x3a98
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_9; // 0x3b48
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_8; // 0x3cd8
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_10; // 0x3d60
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8; // 0x3e00
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_7; // 0x3f90
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_9; // 0x4018
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x40b8
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_6; // 0x4248
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_8; // 0x42d0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x4370
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_5; // 0x4500
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_7; // 0x4588
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x4628
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0x4658
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_4; // 0x47e8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x4870
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_3; // 0x4a00
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x4a88
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching_2; // 0x4c18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x4ca0
	FAnimNode_DistanceMatching AnimGraphNode_DistanceMatching; // 0x4e30
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_6; // 0x4eb8
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_5; // 0x4f58
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_4; // 0x4ff8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0x5098
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_3; // 0x5148
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x51e8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_16; // 0x5218
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_15; // 0x5288
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_14; // 0x52f8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_13; // 0x5368
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_12; // 0x53d8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_11; // 0x5448
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_10; // 0x54b8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_9; // 0x5528
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_8; // 0x5598
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_7; // 0x5608
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_6; // 0x5678
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_5; // 0x56e8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_4; // 0x5758
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_3; // 0x57c8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_2; // 0x5838
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping; // 0x58a8
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_2; // 0x5918
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x59e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x5ac8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x5bb0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x5c98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x5d80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x5e30
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x5f18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x6000
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x60e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x61d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x6280
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x6368
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x6450
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x6538
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x6620
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x66d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x67b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x68a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x6988
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x6a70
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x6b20
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x6b50
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_2; // 0x6ce0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x6d80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x6da8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x6dd0
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x6e48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x6e78
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag; // 0x6ef0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x6fb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x7030
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x70a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x7120
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x7198
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x7210
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x7288
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x72b8
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x7368
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x7398
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x7448
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x7478
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7528
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x75e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x7608
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x7630
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x7658
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x7680
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x76a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x76d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x76f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x7720
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x7798
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x77c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x7868
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x7888
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x78a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x79b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x7a50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x7ac8
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7b40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7b70
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x7be8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7c18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7c40
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x7cb8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7d80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7db0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7e28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7e58
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7e80
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7eb0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7f60
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7f80
	FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x7fa0
	FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x8090
	FLocoTurnInPlace TurnInPlaceState; // 0x8180
	FLocomotionPrediction LocoPredictState; // 0x8230
	FAnimDirectionRange ForwardDirection; // 0x8298
	FAnimDirectionRange RightDirection; // 0x82b4
	FAnimDirectionRange LeftDirection; // 0x82d0
	FAnimDirectionRange BackwardDirection; // 0x82ec
	FAnimLocomotionData LocomotionData; // 0x8308
	FGobiAnimationState AnimationState; // 0x8348
	FAnimState3P AnimState3P; // 0x83a0
	FLocomotionPrediction LocoPredict; // 0x83a8
	FLocoLeaning Leaning; // 0x8410
	float LocoBlendTime; // 0x841c
	float LocoSpeedsBlendTime; // 0x8420
	float ClimbWallOffset; // 0x8424
	float AttackAimAlpha; // 0x8428
	float LocoCounterYaw; // 0x842c
};

struct UChildActorComponent {
	AActor* ChildActorClass; // 0x230
	AActor* ChildActor; // 0x238
	AActor* ChildActorTemplate; // 0x240
};

struct UCharacterDialogueComponent {
	TWeakObjectPtr<AGobiCharacter> OwnerCharacter; // 0x228
	FGameplayTagContainer DialogueDisabledTags; // 0x238
};

struct AItemPickup_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4f8
	UGameplayTagsComponent* GameplayTags; // 0x500
	UBillboardComponent* GlintLocation; // 0x508
	UItemAudioComponent* ItemAudio; // 0x510
	UPingableComponent* Pingable; // 0x518
	FMulticastInlineDelegate OnPickedUp; // 0x520
	UParticleSystemComponent* ItemGlintParticle; // 0x530
	bool bAutoPositionObservable; // 0x538
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

struct UVideoCaptureProtocol {
	bool bUseCompression; // 0x70
	float CompressionQuality; // 0x74
};

struct UAnimContext_Angle {
	UAnimContext_Transform* AngleFrom; // 0x60
	bool InvertAngleFrom; // 0x68
	UAnimContext_Transform* AngleTo; // 0x70
	bool InvertAngleTo; // 0x78
};

struct USteeringBehavior_MeleeCircle {
	float AttackDistance; // 0x58
	float SlowdownDistance; // 0x5c
	float EnemyFrontConeDeg; // 0x60
	float StrafeSpeed; // 0x64
};

struct UParticleModuleVelocity {
	FRawDistributionVector StartVelocity; // 0x40
	FRawDistributionFloat StartVelocityRadial; // 0x88
};

struct UNiagaraSettings {
	TArray<FSoftObjectPath> AdditionalParameterTypes; // 0x40
	TArray<FSoftObjectPath> AdditionalPayloadTypes; // 0x50
	TArray<FSoftObjectPath> AdditionalParameterEnums; // 0x60
	FSoftObjectPath DefaultEffectType; // 0x70
	TArray<FText> QualityLevels; // 0x88
	UNiagaraEffectType* DefaultEffectTypePtr; // 0x98
};

struct UCameraViewModifierComponent {
	UCameraModifier_InterpolateFOV* CameraModifierClass; // 0x100
};

struct UGameplayEffectPathMoveScale {
	FGameplayTag Tag; // 0x238
};

struct UAsyncActionLoadPrimaryAssetClass {
	FMulticastInlineDelegate Completed; // 0x80
};

struct AMolotovProjectile {
	float MaxExplodeAngleDegrees; // 0x660
	int32_t MaximumBounces; // 0x664
	float AcceptableCharacterImpactZOffset; // 0x668
	TArray<UGameplayEffect*> AboveImpactZOffsetEffects; // 0x670
	FGameplayTagQuery CharacterTagQueryToAllowAOE; // 0x680
	FGameplayEffectsEmitterTestConfig AOEGameplayEffects; // 0x6c8
	AActor* InitialFlameToSpawn; // 0x718
	UAkAudioEvent* BounceAudioEvent; // 0x720
	int32_t NumberOfBouncesAccrued; // 0x72c
};

struct UMissionOverviewScreen {
	TSoftObjectPtr<UTexture2D> FallbackImage; // 0x558
	UDataTable* TipTable; // 0x580
};

struct UParticleSpawnDef {
	TArray<FGobiParticleParam> Params; // 0x38
	TArray<FImpactEmitterSet> EmitterSets; // 0x48
	TArray<FImpactSourceEmitterSet> SourceItemEmitterSets; // 0x58
};

struct UAIDataProvider_BehaviorParams {
	FName ParamName; // 0x30
	float FloatValue; // 0x38
	int32_t IntValue; // 0x3c
	bool BoolValue; // 0x40
	FGameplayTagContainer TagsValue; // 0x48
	FGameplayTagQuery TagQueryValue; // 0x68
	FAITraceData TraceDataValue; // 0xb0
	UObject* UObjectValue; // 0xc8
};

struct UServerStatusComponent {
	FServerStatus ServerStatus; // 0xe8
};

struct UMaterialExpressionDecalMipmapLevel {
	FExpressionInput TextureSize; // 0x48
	float ConstWidth; // 0x5c
	float ConstHeight; // 0x60
};

struct UInAppPurchaseCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UDedicatedServerManager {
	double NoMatchmakingTimingOutDelay; // 0xf0
	UWebServiceFortDediAPI* FortDediAPI; // 0xf8
	UGobiWebServices* GobiWebServices; // 0x100
	UMatchmakingPoolManager* MatchmakingPoolManager; // 0x108
	TArray<FTaskTimerConfig> TimerConfigs; // 0x150
	double WaitForConnectionsTime; // 0x948
	double UnloadDelay; // 0x950
	double WaitForPendingSessionParticipantsDuration; // 0xa28
	double RequestedShutdownEmptyServerTimeout; // 0xa38
};

struct UParticleModuleSubUV {
	USubUVAnimation* Animation; // 0x38
	FRawDistributionFloat SubImageIndex; // 0x40
	char bUseRealTime : 1; // 0x70
};

struct UButton {
	USlateWidgetStyleAsset* Style; // 0x160
	FButtonStyle WidgetStyle; // 0x168
	FSlateColor ColorAndOpacity; // 0x400
	FSlateColor BackgroundColor; // 0x430
	EButtonClickMethod ClickMethod; // 0x460
	EButtonTouchMethod TouchMethod; // 0x461
	EButtonPressMethod PressMethod; // 0x462
	bool IsFocusable; // 0x463
	bool bIsFocusedOnHover; // 0x464
	FMulticastInlineDelegate OnClicked; // 0x468
	FMulticastInlineDelegate OnPressed; // 0x478
	FMulticastInlineDelegate OnReleased; // 0x488
	FMulticastInlineDelegate OnHovered; // 0x498
	FMulticastInlineDelegate OnUnhovered; // 0x4a8
};

struct UAkAuxBus {
	UAkAudioBank* RequiredBank; // 0x30
};

struct UGameplayContext_ActorComponent {
	FGameplayTag ComponentTag; // 0x58
	bool bIncludeParentTags; // 0x60
};

struct UWaypointDataSet {
	UAkAudioEvent* SurvivorPingCreatedSound; // 0x38
	UAkAudioEvent* ZombiePingCreatedSound; // 0x40
	TMap<EPingType, UTexture2D*> PingIcons; // 0x48
	UTexture2D* WideItemPingBackground; // 0x98
	UTexture2D* WideItemPingBorder; // 0xa0
	UTexture2D* SquareItemPingBackground; // 0xa8
	UTexture2D* SquareItemPingBorder; // 0xb0
};

struct UJukeboxMusicComponent {
	bool bAutoLoadNextSong; // 0xe8
	UJukeboxMusicPlaylist* Playlist; // 0xf0
	UAkAudioEvent* AKEStartTrack; // 0xf8
	UAkAudioEvent* AKEStopTrack; // 0x100
	FName MusicScenarioName; // 0x108
	bool bInvokeMusicState; // 0x110
	FMulticastInlineDelegate OnNewTrackSelected; // 0x118
	int32_t TimescaleRampTimeMs; // 0x128
	TWeakObjectPtr<UAkComponent> AkComponent; // 0x12c
	int32_t TrackNumber; // 0x134
	EJukeboxMusicState State; // 0x138
	int32_t CurrentTrackStartTimeStamp; // 0x13c
};

struct UMaterialExpressionArctangent {
	FExpressionInput Input; // 0x48
};

struct UBTTask_GameplayTaskBase {
	char bWaitForGameplayTask : 1; // 0x78
};

struct UAudioCurveSourceComponent {
	FName CurveSourceBindingName; // 0x828
	float CurveSyncOffset; // 0x830
};

struct UMovieSceneCameraAnimTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x60
};

struct UClothLODDataCommon_Legacy {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x30
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x38
	FClothCollisionData CollisionData; // 0x130
};

struct AGameStateBase {
	AGameModeBase* GameModeClass; // 0x2a0
	AGameModeBase* AuthorityGameMode; // 0x2a8
	ASpectatorPawn* SpectatorClass; // 0x2b0
	TArray<APlayerState*> PlayerArray; // 0x2b8
	bool bReplicatedHasBegunPlay; // 0x2c8
	float ReplicatedWorldTimeSeconds; // 0x2cc
	float ServerWorldTimeSecondsDelta; // 0x2d0
	float ServerWorldTimeSecondsUpdateFrequency; // 0x2d4
};

struct UMaterialExpressionTransform {
	FExpressionInput Input; // 0x48
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x5c
	EMaterialVectorCoordTransform TransformType; // 0x5d
};

struct ULightMapVirtualTexture2D {
	TArray<int8_t> TypeToLayer; // 0xf0
};

struct UGameplayAction_BotMantleTraversal {
	UGameplayEvaluatorSet* FilterSet; // 0x210
	bool bDisabled; // 0x218
	UAnimContext_Transform* DesiredDestContext; // 0x220
	FVector ArriveExtent; // 0x228
};

struct USubmixEffectFilterPreset {
	FSubmixEffectFilterSettings Settings; // 0x7c
};

struct UEnvQueryGenerator_SingleActor {
	UEnvQueryContext* ActorContext; // 0x58
};

struct UParticleModuleMeshRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UPhysicalAnimationComponent {
	float StrengthMultiplyer; // 0xe8
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xf0
};

struct UAttachmentMeshConfigurations {
	TArray<FWeaponAttachmentMeshConfig> MeshConfigurations; // 0x38
};

struct UAIAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct USourceEffectPannerPreset {
	FSourceEffectPannerSettings Settings; // 0x78
};

struct UStreamMediaSource {
	FString StreamUrl; // 0x90
};

struct ALMG02_BP_C {
	UADSComponent* ADS; // 0x520
	UFireModeSingleTraceComponent* FireModeSingleTrace; // 0x528
	UBulletPenetrationComponent* BulletPenetration; // 0x530
	UClipAmmoComponent* ClipAmmo; // 0x538
	URecoilComponent* Recoil; // 0x540
	UClipReloadComponent* ClipReload; // 0x548
	USpreadComponent* Spread; // 0x550
	UItemAnimationDataComponent* ItemAnimationData; // 0x558
};

struct ULandscapeInfo {
	LazyObjectProperty LandscapeActor; // 0x30
	FGuid LandscapeGuid; // 0x4c
	int32_t ComponentSizeQuads; // 0x5c
	int32_t SubsectionSizeQuads; // 0x60
	int32_t ComponentNumSubsections; // 0x64
	FVector DrawScale; // 0x68
	TMap<FIntPoint, ULandscapeComponent*> XYtoComponentMap; // 0x78
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x118
};

struct USceneComponent {
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0xf0
	USceneComponent* AttachParent; // 0xf8
	FName AttachSocketName; // 0x100
	TArray<USceneComponent*> AttachChildren; // 0x108
	TArray<USceneComponent*> ClientAttachedChildren; // 0x118
	FVector RelativeLocation; // 0x154
	FRotator RelativeRotation; // 0x160
	FVector RelativeScale3D; // 0x16c
	FVector ComponentVelocity; // 0x178
	char bComponentToWorldUpdated : 1; // 0x184
	char bAbsoluteLocation : 1; // 0x184
	char bAbsoluteRotation : 1; // 0x184
	char bAbsoluteScale : 1; // 0x184
	char bVisible : 1; // 0x184
	char bShouldBeAttached : 1; // 0x184
	char bShouldSnapLocationWhenAttached : 1; // 0x184
	char bShouldSnapRotationWhenAttached : 1; // 0x185
	char bShouldUpdatePhysicsVolume : 1; // 0x185
	char bHiddenInGame : 1; // 0x185
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x185
	char bUseAttachParentBound : 1; // 0x185
	EComponentMobility Mobility; // 0x187
	char bAssetDecidesDetailMode : 1; // 0x188
	EDetailMode ComponentDetailMode; // 0x189
	FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x18a
};

struct UTitanTentacleComponent {
	ETitanTentacleState State; // 0xe8
	AActor* TargetActor; // 0x160
	float AttackAngle; // 0x168
	ETitanTentacleId ID; // 0x16c
	FGameplayTag AttackVolumeTag; // 0x170
	TArray<UGameplayEffect*> SmashGameplayEffects; // 0x178
	TArray<UGameplayEffect*> SwipeGameplayEffects; // 0x188
};

struct AIntervalGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x2a0
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x2a8
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x2b0
};

struct UTutorialPopupUserWidget {
	float ButtonDelayTime; // 0x478
};

struct UActorSequenceComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xe8
	UActorSequence* Sequence; // 0x100
	UActorSequencePlayer* SequencePlayer; // 0x108
};

struct UGizmoWorldAxisSource {
	FVector Origin; // 0x38
	int32_t AxisIndex; // 0x44
};

struct UEnvQueryTest_GoldenPathDistance {
	EGoldenPathDistanceMode Mode; // 0x208
};

struct UDistributionVectorUniformCurve {
	FInterpCurveTwoVectors ConstantCurve; // 0x40
	char bLockAxes1 : 1; // 0x58
	char bLockAxes2 : 1; // 0x58
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x5c
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x5e
	char bUseExtremes : 1; // 0x64
};

struct UAnimEvalSet_Shared_Traversal_2D_C {
	FGameplayEval_Distance Distance2D NavLinkStartToEnd; // 0xc0
	FGameplayEval_NavArea NavArea; // 0x190
	FGameplayEval_RandomChance RandomChance; // 0x200
	FGameplayEval_Distance DistanceToNavLinkStart; // 0x250
};

struct ATitan_AcidBloodPool_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UBoxComponent* Box; // 0x340
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x348
};

struct UParticleModuleAttractorPointGravity {
	FVector Position; // 0x38
	float Radius; // 0x44
	UDistributionFloat* Strength; // 0x48
	FRawDistributionFloat StrengthRaw; // 0x50
};

struct ULeapMovementModeComponent {
	float MaxLeapDuration; // 0x130
	float LeapSlideableDuration; // 0x134
	float MinLeapImpactDotToStepUp; // 0x138
	float MinLeapImpactDotToSlide; // 0x13c
	bool bAttemptToStepUpOnBlockingHit; // 0x140
};

struct UGameplayMod {
	bool bApplyOnlyToOwner; // 0x30
	FGameplayTagQuery ApplyTagQuery; // 0x38
	FGameplayTagQuery FirstApplicationTagQuery; // 0x80
	bool bInstanced; // 0xc8
	bool bApplyOnClients; // 0xc9
	bool bApplyToSingleplayerOnly; // 0xca
	int32_t SupportedPhases; // 0xcc
};

struct UMaterialExpressionSubtract {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	float ConstA; // 0x70
	float ConstB; // 0x74
};

struct USpectatorBeaconState {
	FName SessionName; // 0x30
	int32_t NumConsumedReservations; // 0x38
	int32_t MaxReservations; // 0x3c
	bool bRestrictCrossConsole; // 0x40
	TArray<FSpectatorReservation> Reservations; // 0x48
};

struct USoundCollectionAsset {
	UEnum* UserDefinedEnum; // 0x38
	ESharedSoundCollectionMode SoundCollectionMode; // 0x40
	TMap<FName, FSharedSoundBehavior> Sounds; // 0x48
};

struct UMovieSceneParticleSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct ULevelSequenceBurnIn {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x2d8
	ALevelSequenceActor* LevelSequenceActor; // 0x390
};

struct UAnimNotify_MotionCorrectionGoal {
	bool bDrawDebug; // 0x40
	FMotionCorrectionGoal CorrectionGoal; // 0x48
};

struct ALevelStreamingVolume {
	TArray<FName> StreamingLevelNames; // 0x2d8
	char bEditorPreVisOnly : 1; // 0x2e8
	char bDisabled : 1; // 0x2e8
	EStreamingVolumeUsage StreamingUsage; // 0x2ec
};

struct UVirtualTexturePoolConfig {
	int32_t DefaultSizeInMegabyte; // 0x30
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x38
};

struct UMaterial {
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
	char TranslucentCustomDepthWritesEveryPixel : 1; // 0x1d8
	float TranslucentShadowDensityScale; // 0x1dc
	float TranslucentSelfShadowDensityScale; // 0x1e0
	float TranslucentSelfShadowSecondDensityScale; // 0x1e4
	float TranslucentSelfShadowSecondOpacity; // 0x1e8
	float TranslucentBackscatteringExponent; // 0x1ec
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x1f0
	float TranslucentShadowStartOffset; // 0x200
	char bDisableDepthTest : 1; // 0x204
	char bWriteOnlyAlpha : 1; // 0x204
	char bGenerateSphericalParticleNormals : 1; // 0x204
	char bTangentSpaceNormal : 1; // 0x204
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x204
	char bBlockGI : 1; // 0x204
	char bUsedAsSpecialEngineMaterial : 1; // 0x204
	char bUsedWithSkeletalMesh : 1; // 0x204
	char bUsedWithEditorCompositing : 1; // 0x205
	char bUsedWithParticleSprites : 1; // 0x205
	char bUsedWithBeamTrails : 1; // 0x205
	char bUsedWithMeshParticles : 1; // 0x205
	char bUsedWithNiagaraSprites : 1; // 0x205
	char bUsedWithNiagaraRibbons : 1; // 0x205
	char bUsedWithNiagaraMeshParticles : 1; // 0x205
	char bUsedWithGeometryCache : 1; // 0x205
	char bUsedWithStaticLighting : 1; // 0x206
	char bUsedWithMorphTargets : 1; // 0x206
	char bUsedWithSplineMeshes : 1; // 0x206
	char bUsedWithInstancedStaticMeshes : 1; // 0x206
	char bUsedWithGeometryCollections : 1; // 0x206
	char bUsesDistortion : 1; // 0x206
	char bUsedWithClothing : 1; // 0x206
	char bUsedWithWater : 1; // 0x208
	char bUsedWithHairStrands : 1; // 0x208
	char bUsedWithLidarPointCloud : 1; // 0x208
	char bUsedWithUI : 1; // 0x20c
	char bAutomaticallySetUsageInEditor : 1; // 0x20c
	char bFullyRough : 1; // 0x20c
	char bUseFullPrecision : 1; // 0x20c
	char bUseLightmapDirectionality : 1; // 0x20c
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x210
	char bUseHQForwardReflections : 1; // 0x214
	char bUsePlanarForwardReflections : 1; // 0x214
	char bNormalCurvatureToRoughness : 1; // 0x214
	EMaterialTessellationMode D3D11TessellationMode; // 0x215
	char bEnableCrackFreeDisplacement : 1; // 0x216
	char bEnableAdaptiveTessellation : 1; // 0x216
	char AllowTranslucentCustomDepthWrites : 1; // 0x216
	char Wireframe : 1; // 0x216
	EMaterialShadingRate ShadingRate; // 0x217
	char bCanMaskedBeAssumedOpaque : 1; // 0x218
	char bIsMasked : 1; // 0x218
	char bIsPreviewMaterial : 1; // 0x218
	char bIsFunctionPreviewMaterial : 1; // 0x218
	char bUseMaterialAttributes : 1; // 0x218
	char bCastRayTracedShadows : 1; // 0x218
	char bUseTranslucencyVertexFog : 1; // 0x218
	char bIsSky : 1; // 0x218
	char bComputeFogPerPixel : 1; // 0x219
	char bOutputTranslucentVelocity : 1; // 0x219
	char bAllowDevelopmentShaderCompile : 1; // 0x219
	char bIsMaterialEditorStatsMaterial : 1; // 0x219
	EBlendableLocation BlendableLocation; // 0x21a
	char BlendableOutputAlpha : 1; // 0x21b
	char bEnableStencilTest : 1; // 0x21b
	EMaterialStencilCompare StencilCompare; // 0x21c
	char StencilRefValue; // 0x21d
	ERefractionMode RefractionMode; // 0x21e
	int32_t BlendablePriority; // 0x220
	char bIsBlendable : 1; // 0x224
	uint32_t UsageFlagWarnings; // 0x228
	float RefractionDepthBias; // 0x22c
	FGuid StateId; // 0x230
	float MaxDisplacement; // 0x240
	FMaterialCachedExpressionData CachedExpressionData; // 0x2d0
};

struct UUserDefinedEnum {
	TMap<FName, FText> DisplayNameMap; // 0x68
};

struct UCurveVector {
	FRichCurve FloatCurves[0x3]; // 0x38
};

struct UMissionOverviewFooterUserWidget {
	UMissionOverviewMapChainUserWidget* MapChainUserWidget; // 0x458
};

struct USaferoomCurrencyMod {
	int32_t CurrencyGrantedPerSaferoom; // 0xe0
	FString AdjustCurrencyCause; // 0xe8
};

struct UParticleModuleVectorFieldScale {
	UDistributionFloat* VectorFieldScale; // 0x38
	FRawDistributionFloat VectorFieldScaleRaw; // 0x40
};

struct USkeletalMeshPieceTrait {
	TArray<FMeshesConfig> MeshPieces; // 0x30
	FGameplayTag SkelMeshMasterGameplayTag; // 0x40
	bool bStartHidden; // 0x48
	bool bCastShadow; // 0x49
	bool bRelativeTransform; // 0x4a
	FTransform RelativeTransform; // 0x50
};

struct USourceEffectFoldbackDistortionPreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x7c
};

struct UActorPlacementSpec {
	AActor* ActorClass; // 0x30
	int32_t SegmentStartIndex; // 0x38
	int32_t SegmentEndIndex; // 0x3c
	float DistanceInterval; // 0x40
	float OffsetFromStart; // 0x44
	bool InheritSplineRotation; // 0x48
	bool bInheritSplineYawRotation; // 0x49
	ESplineActorOffsetMode OffsetMode; // 0x4a
	FVector Translation; // 0x4c
	FRotator Rotation; // 0x58
	FVector MinTranslation; // 0x64
	FVector MaxTranslation; // 0x70
	FRotator MinRotation; // 0x7c
	FRotator MaxRotation; // 0x88
	TArray<AActor*> PlacedActors; // 0x98
};

struct UGameplayAction_LeapTraversal {
	UGameplayContext_LeapShortcut* LeapShortcutContext; // 0x2e8
};

struct UDirectorCardWeightsConverter {
	bool bUpdate; // 0x38
};

struct UGameplayEffectHeroUseComponent {
	TSoftClassPtr<UObject> ApplicableUsableClass; // 0x240
	FGamePropertyFloatMod UsableTimeScaleMod; // 0x268
	int32_t MaxUseCount; // 0x278
	float Cooldown; // 0x27c
};

struct APassageSpawner {
	UObject* SyncedClass; // 0x2a0
	TArray<UObject*> PrecachedClasses; // 0x2a8
	uint32_t AllowedTypes; // 0x2b8
	TMap<EGameModeClassification, FAllowedTypes> AllowedTypesOverride; // 0x2c0
	bool bMirrored; // 0x310
	TSoftClassPtr<UObject> PassageClasses[0x4]; // 0x318
	TSoftClassPtr<UObject> SpecialClasses[0x2]; // 0x3b8
	TSoftClassPtr<UObject> PassageClassesMirrored[0x4]; // 0x408
	TSoftClassPtr<UObject> SpecialClassesMirrored[0x2]; // 0x4a8
	EAlarmMode AlarmMode; // 0x4f8
	TMap<EGameModeClassification, EAlarmMode> AlarmModeOverride; // 0x500
	bool bCastStaticShadow; // 0x550
	bool bAkAudioPortalEnabled; // 0x551
	TArray<FDoorAlarmAudio> AlarmAudioEvents; // 0x558
	APassageSpawner* SyncedPassageSpawner; // 0x568
	UGobiNavLinkComponent* NavLinkComponent; // 0x570
	UGobiNavModifierComponent* NavModifierComponent; // 0x578
	UAkAcousticPortalComponent* AkAcousticPortalComponent; // 0x580
	AActor* SpawnedPassage; // 0x588
	FMulticastInlineDelegate OnPassageSpawned; // 0x590
};

struct UTitanTongueAnimInstance {
	UTitanTongueComponent* TitanTongueComponent; // 0x2c0
	bool bIdle; // 0x2c8
	bool bGrabbing; // 0x2c9
	float GrabPlayRate; // 0x2cc
	bool bMissing; // 0x2d0
	float MissPlayRate; // 0x2d4
	bool bPulling; // 0x2d8
	float PullPlayRate; // 0x2dc
	bool bHolding; // 0x2e0
	bool bBiting; // 0x2e1
	bool bReleasing; // 0x2e2
	bool bEating; // 0x2e3
	float TargetDist; // 0x2e4
};

struct AWaterSurfaceMesh {
	AWaterVolume* WaterVolume; // 0x2b0
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

struct AGobiWorldSettings {
	bool bOnlineInventoryEnabled; // 0x430
	bool bSignInInputProcessing; // 0x431
	bool bMainMenu; // 0x432
	bool bSharedScreen; // 0x433
	bool bSupportsBots; // 0x434
	bool bNeedsCommonZombieMeshMerge; // 0x435
	FDataTableRowHandle Chapter; // 0x438
	TArray<FAutoStartMapMission> AutoStartMapMissions; // 0x458
	TSoftObjectPtr<UWorld> CharacterLineupLevel; // 0x468
	bool bSectorsAndPortalsEnabled; // 0x490
	int32_t FoliageSectorsAndPortalsMode; // 0x494
	bool bAllowLODDistanceScaling; // 0x498
	int32_t PoolSizeAdjustment; // 0x49c
};

struct UWaypointUserWidget {
	float ADSOpacity; // 0x2d8
	float ArrowOffsetFromIcon; // 0x2e4
};

struct UAsyncTaskDownloadImage {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFail; // 0x48
};

struct UCaravanProgressScreen {
	bool bWaitingOnRequest; // 0x564
};

struct ULayer {
	FName LayerName; // 0x30
	char bIsVisible : 1; // 0x38
	TArray<FLayerActorStats> ActorStats; // 0x40
};

struct UStaticCaravans {
	FStaticCaravan TutorialCaravan; // 0x38
	TArray<FStaticCaravanChain> CaravanChains; // 0x68
};

struct UCardFilterUserWidget {
	FMulticastInlineDelegate OnFilterChanged; // 0x458
	TArray<ECardFilter> Filters; // 0x468
	ECardFilter DefaultFilter; // 0x478
};

struct UNavigationPath {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x30
	TArray<FVector> PathPoints; // 0x40
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x50
};

struct UNiagaraPreviewAxis_InterpParamVector {
	FVector Min; // 0x40
	FVector Max; // 0x4c
};

struct UAnimEvalSet_Shared_Idle_C {
	FGameplayEval_Random Random; // 0xc0
	FAnimEval_MontageLastPlayed HasPlayedRecently; // 0x108
};

struct UAnimNotify_PlaySound {
	USoundBase* Sound; // 0x40
	float VolumeMultiplier; // 0x48
	float PitchMultiplier; // 0x4c
	char bFollow : 1; // 0x50
	FName AttachName; // 0x54
};

struct UNiagaraDataInterfaceVolumeTexture {
	UVolumeTexture* Texture; // 0x38
};

struct UIpNetDriver {
	char LogPortUnreach : 1; // 0x760
	char AllowPlayerPortUnreach : 1; // 0x760
	uint32_t MaxPortCountToTry; // 0x764
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x774
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x778
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x77c
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x780
	double MaxSecondsInReceive; // 0x788
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x790
	float ResolutionConnectionTimeout; // 0x794
};

struct UBrushComponent {
	UModel* Brush; // 0x4b0
	UBodySetup* BrushBodySetup; // 0x4b8
};

struct UHapticFeedbackEffect_Buffer {
	TArray<char> Amplitudes; // 0x30
	int32_t SampleRate; // 0x40
};

struct UAnimEvalSet_DefibReation_C {
	FGameplayEval_ReviveSource ReviveSource; // 0xc0
};

struct UGameplayAction_Traversal {
	bool bSortMontagesAlphabetically; // 0x210
	TArray<UAnimMontage*> TraversalMontages; // 0x218
	TArray<UMontageSet*> MontageSets; // 0x228
	FName TraversalCollisionProfileName; // 0x238
	TArray<UGameplayEffect*> ReapplyEffectsOnTraversalSuccess; // 0x240
	TArray<UAnimSequenceBase*> TraversalFlyRequesters; // 0x250
	TArray<UAnimNotifyState_EvalChainMontage*> EvalChains; // 0x260
	FVector2D PlayRateRange; // 0x270
	TArray<FQueuedEffect> QueuedEffectsToReapply; // 0x278
};

struct UBTDecorator_CanTriggerAction {
	FGameplayTagQuery ActionTagQuery; // 0x70
	FAIDataProviderGameplayTagQueryContainerValue ActionTags; // 0xb8
	bool bTestIsEnabledForActor; // 0x130
	bool bDisableOnSuccess; // 0x131
	float FlowControlDelay; // 0x134
};

struct UVariantSet {
	FText DisplayText; // 0x30
	bool bExpanded; // 0x60
	TArray<UVariant*> Variants; // 0x68
};

struct UHUDEquipmentEntryUserWidget {
	bool bIsLowAmmo; // 0x4a8
};

struct UItemAudioComponent {
	bool bDebug; // 0xe8
	bool bStopAttractOnBeginUse; // 0xe9
	bool bStopAttractOnEndUse; // 0xea
	float MinSpeedForBounceAudio; // 0xec
	float MaxSpeedForRollAudio; // 0xf0
	float BounceCooldown; // 0xf4
	UAkAudioEvent* AKESpawn; // 0x100
	UAkAudioEvent* AKEAttractLoop; // 0x108
	UAkAudioEvent* AKEAttractLoopStop; // 0x110
	UAkAudioEvent* AKEInteractStart; // 0x118
	UAkAudioEvent* AKEInteractEnd; // 0x120
	UAkAudioEvent* AKEInteractSuccess; // 0x128
	UAkAudioEvent* AKESpawnedFromKill; // 0x130
};

struct UMaterialExpressionShadingModel {
	EMaterialShadingModel ShadingModel; // 0x48
};

struct UGameplayAction_TriggerHorde {
	FDifficultyBool IsAllowedByDifficulty; // 0x210
};

struct UGameplayTask_WaitDelay {
	FMulticastInlineDelegate OnFinish; // 0x70
};

struct UMantleSpeedMod {
	FCustomDataProviderFloat MantleSpeed; // 0xd0
};

struct USkinnedMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x528
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x530
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x538
	UPhysicsAsset* PhysicsAssetOverride; // 0x640
	int32_t ForcedLodModel; // 0x648
	int32_t MinLodModel; // 0x64c
	int32_t IndividualLodBias; // 0x650
	float StreamingDistanceMultiplier; // 0x65c
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x668
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x69c
	char bOverrideMinLod : 1; // 0x69e
	char bUseBoundsFromMasterPoseComponent : 1; // 0x69e
	char bForceWireframe : 1; // 0x69e
	char bDisplayBones : 1; // 0x69e
	char bDisableMorphTarget : 1; // 0x69e
	char bHideSkin : 1; // 0x69e
	char bPerBoneMotionBlur : 1; // 0x69f
	char bComponentUseFixedSkelBounds : 1; // 0x69f
	char bUseFixedBoundsOverrideMinMax : 1; // 0x69f
	FVector FixedBoundsOverrideMin; // 0x6a0
	FVector FixedBoundsOverrideMax; // 0x6ac
	char bUsePhysicsAssetToCalcBounds : 1; // 0x6b8
	char bConsiderAllBodiesForBounds : 1; // 0x6b8
	char bSyncAttachParentLOD : 1; // 0x6b8
	char bCanHighlightSelectedSections : 1; // 0x6b8
	char bRecentlyRendered : 1; // 0x6b8
	char bCastCapsuleDirectShadow : 1; // 0x6b8
	char bCastCapsuleIndirectShadow : 1; // 0x6b8
	char bCPUSkinning : 1; // 0x6b8
	char bEnableUpdateRateOptimizations : 1; // 0x6b9
	char bServerIgnoresUpdateRateOptimizationFrameSkip : 1; // 0x6b9
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x6b9
	char bRenderStatic : 1; // 0x6b9
	char bIgnoreMasterPoseComponentLOD : 1; // 0x6b9
	bool bStopTickingWhenNoLongerAnimating; // 0x6ba
	float StopTickingWhenNoLongerAnimatingTime; // 0x6bc
	char bCachedLocalBoundsUpToDate : 1; // 0x6c0
	char bForceMeshObjectUpdate : 1; // 0x6cc
	float CapsuleIndirectShadowMinVisibility; // 0x6d0
	FBoxSphereBounds CachedLocalSpaceBounds; // 0x6e8
};

struct UMovieSceneFadeSection {
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UGameplayAction_BotAttackRanged {
	float FullAutoTimeMult; // 0x400
};

struct AARSkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x2b0
};

struct ADecalActor {
	UDecalComponent* Decal; // 0x2a0
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

struct UParticleModuleVectorFieldRotation {
	FVector MinInitialRotation; // 0x38
	FVector MaxInitialRotation; // 0x44
};

struct UBlueprintGeneratedClass {
	int32_t NumReplicatedProperties; // 0x260
	char bHasNativizedParent : 1; // 0x264
	char bHasCookedComponentInstancingData : 1; // 0x264
	TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x268
	TArray<UActorComponent*> ComponentTemplates; // 0x278
	TArray<UTimelineTemplate*> Timelines; // 0x288
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x298
	USimpleConstructionScript* SimpleConstructionScript; // 0x2a8
	UInheritableComponentHandler* InheritableComponentHandler; // 0x2b0
	UStructProperty* UberGraphFramePointerProperty; // 0x2b8
	UFunction* UberGraphFunction; // 0x2c8
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2d0
};

struct UBTDecorator_Loop {
	int32_t NumLoops; // 0x70
	bool bInfiniteLoop; // 0x74
	float InfiniteLoopTimeoutTime; // 0x78
};

struct UAsyncAssetSet {
	TArray<UObject*> LoadedObjects; // 0x90
};

struct UGobiSlider {
	UAkAudioEvent* DefaultClickSound; // 0x5b0
};

struct UAISpawnActorVariantsConfig {
	TArray<FAISpawnActorVariantDefinition> Variants; // 0x38
};

struct UGameplayAction_ReachIn {
	float DistanceToActivate; // 0x210
	float DistanceToPlayReachIn; // 0x214
	float LoopTime; // 0x218
	float ThrowSpeed; // 0x21c
	FGameplayTag SkeletalMeshTag; // 0x220
	UAnimContext_ReachInSmartActor* ReachInSmartActorContext; // 0x228
	USteeringBehavior* SmartActorSteeringBehavior; // 0x230
	TArray<UGameplayEffect*> SuccessfulGrabEffects; // 0x238
	TArray<UGameplayEffect*> SuccessfulGrabTargetEffects; // 0x248
	TArray<UGameplayEffect*> GrabReleasedEffects; // 0x258
	UGameplayEffect* SmartActorCooldown; // 0x268
	FGameplayTagQuery BlockingTagQuery; // 0x270
	UMontageSet* ReachInMontageSet; // 0x2b8
	UMontageSet* ReachInLoopMontageSet; // 0x2c0
	UMontageSet* ReachInLoopEndMontageSet; // 0x2c8
	UMontageSet* ReachInGrabMontageSet; // 0x2d0
	TMap<FName, FReachInSweepVolumeInfo> NotifyVolumeInfoMap; // 0x2d8
};

struct UTitanStage3TentacleComponent {
	ETitanStage3TentacleState State; // 0xe8
	int32_t CurrentAttackZoneId; // 0x13c
	ETitanTentacleId ID; // 0x140
	FGameplayTag SprayComponentTag; // 0x144
	TArray<FTitanStage3AcidSprayAttackZone> AcidSprayAttackZones; // 0x150
	FName PathRootBone; // 0x160
	UAnimSequence* DeathAnimSequence; // 0x168
};

struct UInterpTrackInstVisibility {
	EVisibilityTrackAction Action; // 0x30
	float LastUpdatePosition; // 0x34
};

struct UInterpTrackToggle {
	TArray<FToggleTrackKey> ToggleTrack; // 0x78
	char bActivateSystemEachUpdate : 1; // 0x88
	char bActivateWithJustAttachedFlag : 1; // 0x88
	char bFireEventsWhenForwards : 1; // 0x88
	char bFireEventsWhenBackwards : 1; // 0x88
	char bFireEventsWhenJumpingForwards : 1; // 0x88
};

struct AGobiPlayerControllerBase {
	FMulticastInlineDelegate OnLastInputDeviceChanged; // 0x628
	FMulticastInlineDelegate OnInputDisabled; // 0x650
	FMulticastInlineDelegate OnInputEnabled; // 0x660
	FMulticastInlineDelegate OnChatMessageReceived; // 0x6c8
	FMulticastInlineDelegate OnSystemMessageReceived; // 0x6e8
	UGobiPlayerInput* GobiPlayerInput; // 0x6f8
	UBugReporterComponent* BugReporter; // 0x708
	UMaterialInstance* WatermarkMaterial; // 0x710
	UCanvasRenderTarget2D* WatermarkRenderTarget; // 0x718
	UMaterialInterface* WatermarkMaterialClass; // 0x720
	UFont* WatermarkFont; // 0x728
	UUIScreenManager* UIScreenManagerClass; // 0x730
	UUIScreenManager* UIScreenManager; // 0x738
	UGlobalSafeZoneUserWidget* GlobalSafeZoneWidget; // 0x740
	UPushToTalkComponent* PushToTalkComponent; // 0x748
	UVoiceTalkersComponent* VoiceTalkersComponent; // 0x750
	UTRSSubtitleComponent* SubtitleComponent; // 0x758
	UGobiPlayerProfileComponent* GobiPlayerProfileComponent; // 0x760
	UPlayerStatsComponent* PlayerStatsComponent; // 0x768
	UGobiPlayerChallengeComponent* GobiPlayerChallengeComponent; // 0x770
};

struct UDrawFrustumComponent {
	FColor FrustumColor; // 0x4b0
	float FrustumAngle; // 0x4b4
	float FrustumAspectRatio; // 0x4b8
	float FrustumStartDist; // 0x4bc
	float FrustumEndDist; // 0x4c0
	UTexture* Texture; // 0x4c8
};

struct UPlayerLevelStreamingComponent {
	int32_t NumLoadedLevels; // 0x100
};

struct USoundfieldSubmix {
	FName SoundfieldEncodingFormat; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x50
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x58
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x68
};

struct UGameplayEffectHeroIncapReviveBonus {
	FGamePropertyFloatMod IncapReviveHealingMod; // 0x240
};

struct ULifeStateAlive {
	float StartInjuredHealthPct; // 0xa8
	float StartCriticalHealthPct; // 0xac
	FName CriticalHealthMoveInputScaleLabel; // 0xb0
	float CriticalHealthMoveInputScale; // 0xb8
	EHealthState HealthState; // 0xbc
	FGameplayTag CriticallyInjuredScreenFXTag; // 0xc0
	bool bRevertCollisionProfileOnEnter; // 0xc8
	FName AliveCapsuleCollisionProfile; // 0xcc
	FGameplayTag HealthStateTags[0x4]; // 0xd4
};

struct UAchievementQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
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
	FDatasmithReimportOptions ReimportOptions; // 0x50
	FString Filename; // 0x58
	FString FilePath; // 0x68
};

struct UGameplayEffectHeal {
	bool bAutoHealOutOfCriticalState; // 0x244
	float InstantHealing; // 0x248
	float InstantPermanentHealing; // 0x24c
	float RecurringHealing; // 0x250
	float RecurringPermanentHealing; // 0x254
	float RecurringHealingFrequency; // 0x258
	float MinHealAmount; // 0x25c
	bool bStackTemporaryHealth; // 0x260
	float TemporaryHealth; // 0x264
	FTemporaryHealthParams TemporaryHealthParams; // 0x268
	bool bUseHealingScaleMods; // 0x280
	bool bSourcePawnPerkCriticalHeal; // 0x281
	TArray<UGameplayEffect*> CritHealGameplayEffects; // 0x288
};

struct UMovieSceneParticleParameterTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UFogMod {
	char bOverride_HeightFogStartDistance : 1; // 0xd0
	char bOverride_HeightFogInscatteringColor : 1; // 0xd0
	char bOverride_VolumeFogAlbedo : 1; // 0xd0
	char bOverride_MinVolumeFog : 1; // 0xd0
	char bOverride_VolumeFogNoiseScale : 1; // 0xd0
	char bOverride_VolumeFogNoisePan : 1; // 0xd0
	char bOverride_VolumeFogNoisePanSpeed : 1; // 0xd0
	char bOverride_VolumeGroundFogHeight : 1; // 0xd0
	char bOverride_VolumeGroundFogAO : 1; // 0xd1
	float HeightFogStartDistance; // 0xd4
	FLinearColor HeightFogInscatteringColor; // 0xd8
	char bUseSecondFog : 1; // 0xe8
	float SecondFogDensity; // 0xec
	float SecondFogHeightFalloff; // 0xf0
	float SecondFogHeightOffset; // 0xf4
	FLinearColor VolumeFogAlbedo; // 0xf8
	float MinVolumeFog; // 0x108
	UCurveFloat* MinVolumeFogOverTime; // 0x110
	float VolumeFogNoiseScale; // 0x118
	FVector VolumeFogNoisePan; // 0x11c
	float VolumeFogNoisePanSpeed; // 0x128
	float VolumeGroundFogHeight; // 0x12c
	float VolumeGroundFogAO; // 0x130
};

struct UMaterialExpressionStaticSwitchParameter {
	FExpressionInput A; // 0x68
	FExpressionInput B; // 0x7c
};

struct UParticleEmitter {
	FName EmitterName; // 0x30
	int32_t SubUVDataOffset; // 0x38
	EEmitterRenderMode EmitterRenderMode; // 0x3c
	EParticleSignificanceLevel SignificanceLevel; // 0x3d
	char bUseLegacySpawningBehavior : 1; // 0x3f
	char ConvertedModules : 1; // 0x3f
	char bIsSoloing : 1; // 0x3f
	char bCookedOut : 1; // 0x3f
	char bDisabledLODsKeepEmitterAlive : 1; // 0x3f
	char bDisableWhenInsignficant : 1; // 0x40
	TArray<UParticleLODLevel*> LODLevels; // 0x48
	int32_t PeakActiveParticles; // 0x58
	int32_t InitialAllocationCount; // 0x5c
	float QualityLevelSpawnRateScale; // 0x60
	uint32_t DetailModeBitmask; // 0x64
};

struct UCullingField {
	UFieldNodeBase* Culling; // 0xe8
	UFieldNodeBase* Field; // 0xf0
	EFieldCullingOperationType Operation; // 0xf8
};

struct ULifeStateBase {
	FGameplayTagContainer AppliedTags; // 0x50
	TArray<UGameplayEffect*> AppliedGameplayEffects; // 0x70
	TArray<UGameplayEffect*> ExitGameplayEffects; // 0x80
	TArray<TWeakObjectPtr<UGameplayEffect>> ActiveEffects; // 0x98
};

struct UParticleColliderComponent {
	TMap<FName, UImpactEffectConfig*> Events; // 0xe8
	bool bMaterialNormalParam; // 0x138
	bool bMaterialLocationParam; // 0x139
};

struct UInteractiveToolsContext {
	UInputRouter* InputRouter; // 0x60
	UInteractiveToolManager* ToolManager; // 0x68
	UInteractiveGizmoManager* GizmoManager; // 0x70
	TSoftClassPtr<UObject> ToolManagerClass; // 0x78
};

struct UGobiSafeZone {
	bool PadLeft; // 0x160
	bool PadRight; // 0x161
	bool PadTop; // 0x162
	bool PadBottom; // 0x163
};

struct UTRSSubtitleComponent {
	UUserWidget* SubtitleWidget; // 0xe8
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

struct UNavModifierComponent {
	UNavArea* AreaClass; // 0x118
	FVector FailsafeExtent; // 0x120
	char bIncludeAgentHeight : 1; // 0x12c
};

struct UNiagaraSimulationStageBase {
	UNiagaraScript* Script; // 0x30
	FName SimulationStageName; // 0x38
};

struct UBTDecorator_HasBlackboardTimeoutExpired {
	float Offset; // 0x98
};

struct UAnimEvalSet_Rubble_DeathReaction_C {
	FGameplayEval_Health AvatarHealth; // 0xc0
	FGameplayEval_GameplayTags AvatarTags; // 0x118
};

struct UWidgetSwitcherSlot {
	FMargin Padding; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct ADialogueBankManger {
	TArray<FName> RequiredSpeakerBanks; // 0x2b8
	TArray<FName> RequiredConversationBanks; // 0x2c8
};

struct ASleeperNest_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x418
	UCapsuleComponent* PlayerBlockerCapsule; // 0x420
	UInfectedHighlightComponent* InfectedHighlight; // 0x428
	UAkComponent* AkComponent; // 0x430
	UItemAkBankComponent* ItemAkBank; // 0x438
	UAimAssistTargetComponent* AimAssistTarget; // 0x440
	bool HasChosenSpawnLocation; // 0x448
};

struct UButtonStyleAsset {
	FButtonStyle ButtonStyle; // 0x30
};

struct AZombieCharacter {
	FMulticastInlineDelegate OnLockedInSafeRoom; // 0x1430
	FMulticastInlineDelegate OutOfRangeStateChanged; // 0x1440
	bool bLockedInSafeRoom; // 0x1450
	bool bInSafeRoom; // 0x1451
	bool bOutOfRange; // 0x1452
	UZombieGhostComponent* ZombieGhostComponent; // 0x1458
	FZombieUIData ZombieUIData; // 0x14a0
	float FloatingReticleInterpolationSpeed; // 0x15c0
	float DamageInflictedMutationPoints; // 0x15c4
	int32_t KillInflictedMutationPoints; // 0x15c8
	int32_t IncapInflictedMutationPoints; // 0x15cc
	TArray<float> ZombieAdvantageMutationGainScalar; // 0x15d0
	TArray<float> ZombieDisdvantageMutationGainScalar; // 0x15e0
};

struct UInterpTrackMove {
	FInterpCurveVector PosTrack; // 0x78
	FInterpCurveVector EulerTrack; // 0x90
	FInterpLookupTrack LookupTrack; // 0xa8
	FName LookAtGroupName; // 0xb8
	float LinCurveTension; // 0xc0
	float AngCurveTension; // 0xc4
	char bUseQuatInterpolation : 1; // 0xc8
	char bShowArrowAtKeys : 1; // 0xc8
	char bDisableMovement : 1; // 0xc8
	char bShowTranslationOnCurveEd : 1; // 0xc8
	char bShowRotationOnCurveEd : 1; // 0xc8
	char bHide3DTrack : 1; // 0xc8
	EInterpTrackMoveRotMode RotMode; // 0xcc
};

struct UEnvQueryContext_Character {
	AGobiCharacter* CharacterClass; // 0x30
};

struct UBTDecorator_SetBlackboardKey {
	FBlackboardKeySet KeySet; // 0x70
};

struct UDeviceProfileManager {
	TArray<UObject*> Profiles; // 0x30
};

struct UVoiceRoutingComponent {
	UMatchmaking* Matchmaking; // 0xe8
};

struct UPawnAction_Sequence {
	TArray<UPawnAction*> ActionSequence; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0
	UPawnAction* RecentActionCopy; // 0xb8
};

struct UHitMarkerUserWidget {
	UWidgetAnimation* Show; // 0x4c8
	UTexture2D* ArmorHitTexture; // 0x4d0
	UTexture2D* ArmorBrokenTexture; // 0x4d8
	float LineThickness; // 0x4e0
	float ExtendedLength; // 0x4e4
	float ShortLength; // 0x4e8
	FSlateColor GeneralDamageColor; // 0x4f0
	FSlateColor FriendlyFireColor; // 0x520
	FSlateColor HitArmorColor; // 0x550
	FSlateColor DestroyedArmorColor; // 0x580
	FSlateColor HitWeakSpotColor; // 0x5b0
	FSlateColor DestroyedWeakSpotColor; // 0x5e0
	FSlateColor KilledColor; // 0x610
};

struct UPawnNoiseEmitterComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xe8
	FVector LastRemoteNoisePosition; // 0xec
	float NoiseLifetime; // 0xf8
	float LastRemoteNoiseVolume; // 0xfc
	float LastRemoteNoiseTime; // 0x100
	float LastLocalNoiseVolume; // 0x104
	float LastLocalNoiseTime; // 0x108
};

struct UMaterialExpressionComponentMask {
	FExpressionInput Input; // 0x48
	char R : 1; // 0x5c
	char G : 1; // 0x5c
	char B : 1; // 0x5c
	char A : 1; // 0x5c
};

struct UMovieSceneVectorTrack {
	int32_t NumChannelsUsed; // 0x90
};

struct UAISeparationGroups {
	TArray<FAISeparationGroup> Groups; // 0x38
};

struct UWrapBox {
	FVector2D InnerSlotPadding; // 0x160
	float WrapWidth; // 0x168
	bool bExplicitWrapWidth; // 0x16c
};

struct UEnvQueryTest_VoronoiDepth {
	UEnvQueryContext* RegionSource; // 0x208
	UEnvQueryContext* SampleSources; // 0x210
};

struct UVendorComponent {
	TArray<FVendorStockItem> VendorStock; // 0xe8
	TArray<FRolledVendorStockItemParams> RandomItemStockParams; // 0xf8
	TArray<FRolledVendorStockCardParams> RandomCardStockParams; // 0x108
	FMulticastInlineDelegate OnUserClosedVendorScreen; // 0x118
	FMulticastInlineDelegate OnPurchaseMade; // 0x128
	TArray<FVendorStockItem> ReplicatedVendorStock; // 0x148
};

struct UGameplayDeveloperSettings {
	EPerfScalingMethod ImpactQualityScaling; // 0x40
	FImpactQualitySettings ImpactQualitySettings[0x5]; // 0x44
	TSoftObjectPtr<UDataTable> DecalCategoryTable; // 0xd0
	int32_t DecalMaxCountPerQuality[0x5]; // 0xf8
	float DecalMaxCountFadeEarlyRatio; // 0x10c
	float DecalInsignificantMinDistance; // 0x110
	EPerfScalingMethod DecalQualityScaling; // 0x114
	FDecalQualitySettings DecalQualitySettings[0x5]; // 0x118
	float ParticleSpawnCullSizeMinDistance; // 0x230
	FParticleQualitySettings ParticleQuality[0x5]; // 0x238
	TMap<FName, FParticleSpawnCullingGroup> ParticleCullGroups; // 0x300
	int32_t SurvivorHealthPerPip; // 0x350
	int32_t SurvivorMaxPipHealth; // 0x354
	int32_t RiddenHealthPerPip; // 0x358
	int32_t RiddenMaxPipHealth; // 0x35c
	int32_t StaminaPerPip; // 0x360
	TSoftObjectPtr<UDataTable> TableOfGameplayCardTables; // 0x368
	TArray<TSoftObjectPtr<UDataTable>> PerkTables; // 0x390
	TSoftObjectPtr<UDataTable> GameplayCardPresetsTable; // 0x3a0
	TSoftObjectPtr<UDataTable> GameplayCardPresetsTablePvP; // 0x3c8
	TSoftObjectPtr<UDataTable> GameplayCardsTable; // 0x3f0
	TSoftObjectPtr<UDataTable> AIDirectorCardsTable; // 0x418
	TSoftObjectPtr<UDataTable> AIDirectorCardWeightsTable; // 0x440
	TSoftObjectPtr<UDataTable> AIDirectorCardWeightsShowDemoTable; // 0x468
	TArray<TSoftObjectPtr<UDataTable>> DynamicCardOverrideTables; // 0x490
	TSoftObjectPtr<UDataTable> BurnCardsTable; // 0x4a0
	TSoftObjectPtr<UDataTable> ZombieMutationGameplayCardsTable; // 0x4c8
	TSoftObjectPtr<UDataTable> ZombieMutationTreesTable; // 0x4f0
	TSoftObjectPtr<UStaticCaravans> StaticCaravans; // 0x518
	TSoftObjectPtr<UDataTable> CaravanMerchantsTable; // 0x540
	TSoftObjectPtr<UDataTable> CaravanSchemasTable; // 0x568
	TSoftObjectPtr<UDataTable> ProductsTable; // 0x590
	TSoftObjectPtr<UDataTable> SpraysTable; // 0x5b8
	TSoftObjectPtr<UDataTable> WeaponsTable; // 0x5e0
	TSoftObjectPtr<UDataTable> HeroDefinitionsTable; // 0x608
	TSoftObjectPtr<UDataTable> EntitlementsTable; // 0x630
	TSoftObjectPtr<UDataTable> EntitlementContentPackagesTable; // 0x658
	TSoftObjectPtr<UGameplayDataSet> GameplayDataSet; // 0x680
	TSoftObjectPtr<UHealthDamageRanges> HealthDamageRanges; // 0x6a8
	TSoftObjectPtr<UHealthDamageRanges> HealthPercentRanges; // 0x6d0
	int32_t DeckLoadoutCards; // 0x6f8
	int32_t DeckLoadoutCardsPvP; // 0x6fc
	int32_t MaxDeckSize; // 0x700
	int32_t MaxDeckSizePvP; // 0x704
	int32_t PvPStartCurrency; // 0x708
	int32_t PvPNextMapCurrency; // 0x70c
	FDataTableRowHandle DroppedCurrencyItem; // 0x710
	float AimAssistFrictionDefault; // 0x730
	float AimAssistMagnetismDefault; // 0x734
	float MaxCameraInputSmoothingSecsDefault; // 0x738
	float LeftStickInnerDeadZoneDefault; // 0x73c
	float LeftStickInnerDeadZoneMax; // 0x740
	float LeftStickOuterDeadZoneDefault; // 0x744
	float RightStickInnerDeadZoneDefault; // 0x748
	float RightStickInnerDeadZoneMax; // 0x74c
	float RightStickOuterDeadZoneDefault; // 0x750
	TMap<FGameplayTag, FSignificanceCategory> SignificanceCategories; // 0x758
	TMap<FGameplayTag, FUpdateRateOptimizationCategory> UpdateRateOptimizationCategories; // 0x7a8
	TMap<FGameplayTag, FFootplantCategory> FootplantCategories; // 0x7f8
	FCorpseSettings CorpseSettings; // 0x848
	FVistaCharacterSettings VistaCharacterSettings; // 0x8b8
	int32_t MutilationExplosionMaxRagdolls; // 0x8d0
	float MutilationExplosionRatioRagdolls; // 0x8d4
	EPerfScalingMethod MutilationQualityScaling; // 0x8d8
	FMutilationScalability MutilationScalability[0x5]; // 0x8e0
	TMap<FGameplayTag, FMutilationCategory> MutilationCategories; // 0xc28
	TMap<AEffectActor*, FEffectActorSettings> EffectActorSettings; // 0xc78
	float WaterMaxDepth; // 0xcc8
	float WaterDeepDepth; // 0xccc
	float WaterProjectileDeepDepth; // 0xcd0
	float WaterDeepExitTime; // 0xcd4
	UGameplayEffect* WaterEffectDefault; // 0xcd8
	UGameplayEffect* WaterDeepEffectDefault; // 0xce0
	FSoftObjectPath WaterPhysicsMaterialDefault; // 0xce8
	TSoftObjectPtr<UWaterRipplerDef> WaterRipplerGenericSmallDef; // 0xd00
	TSoftObjectPtr<UWaterVolumeDef> WaterVolumeDefault; // 0xd28
	TSoftObjectPtr<UWaterSurfaceDef> WaterSurfaceDefault; // 0xd50
	FNavAgentProperties PathToObjectiveAgentProperties; // 0xd78
	UNavigationQueryFilter* PathToObjectiveNavFilterClass; // 0xda8
	UNavigationQueryFilter* ItemNavFilterClass; // 0xdb0
	TSoftObjectPtr<UForceFeedbackEffect> UIEnableForceFeedbackEffect; // 0xdb8
	TArray<FDataTableRowHandle> PreroundPrecacheItems; // 0xde0
	float StaticResolutionScaleMin; // 0xdf0
	float DynamicResolutionScaleMin; // 0xdf4
	float SafeRoomVendorGracePeriod; // 0xdf8
	TSoftObjectPtr<UDataTable> GameplayAudioCaptionsTable; // 0xe00
	TSoftObjectPtr<UDataTable> MissionMapsTable; // 0xe28
	TSoftObjectPtr<UDataTable> MissionMapChainsTable; // 0xe50
	TSoftObjectPtr<UAssetTable> MissionChapterAssets; // 0xe78
	TSoftObjectPtr<UAssetTable> MissionTabelAssets; // 0xea0
	TSoftObjectPtr<UAssetTable> MissionObjectiveAssets; // 0xec8
	TSoftObjectPtr<UDataTable> MissionDifficultiesTable; // 0xef0
	TSoftObjectPtr<UDataTable> ChallengeSetsTable; // 0xf18
	TSoftObjectPtr<UDataTable> ChallengeRanksTable; // 0xf40
	FDataTableRowHandle HoldoutMission; // 0xf68
	FGobiAnimGraphTags AnimGraphTags; // 0xf88
	FHighlightPalette HighlightPalette; // 0xfb0
	UCameraModifier_WeaponRecoil* RecoilCameraModifier; // 0x1000
	float LowAmmoStateRecentTime; // 0x1008
	EPerfScalingMethod WeaponQualityScalingMethod; // 0x100c
	FWeaponSimulatedQualitySettings WeaponSimulatedQualitySettings[0x5]; // 0x1010
	int32_t FirstMapPvEDrawBonus; // 0x104c
	int32_t BasePvEDraws; // 0x1050
	int32_t FirstMapPvPDrawBonus; // 0x1054
	int32_t BasePvPDraws; // 0x1058
	TArray<FDataTableRowHandle> DefaultGameplayCards; // 0x1060
	FName DistanceMatchingCurveName; // 0x1070
	TSoftObjectPtr<USkeleton> CommonZombieSkeleton; // 0x1078
	TSoftObjectPtr<UPhysicsAsset> CommonZombiePhysicsAsset; // 0x10a0
	TSoftObjectPtr<UPhysicsAsset> CommonZombieShadowPhysicsAsset; // 0x10c8
	TSoftObjectPtr<UMaterialInterface> CommonZombieMeshHideMaterial; // 0x10f0
	int32_t MaxZombieMergedMeshPoolSize; // 0x1118
	TSoftObjectPtr<UDataTable> CommonZombiesMapMeshTable; // 0x1120
	TSoftObjectPtr<UCurveFloat> MinFogUIDistanceCutoffCurve; // 0x1148
	TSoftObjectPtr<UMaterialParameterCollection> GlobalGameplayMaterialParamCollection; // 0x1170
	TSoftObjectPtr<UDataTable> GenericAggregationTable; // 0x1198
};

struct UCableComponent {
	bool bAttachStart; // 0x528
	bool bAttachEnd; // 0x529
	FComponentReference AttachEndTo; // 0x530
	FName AttachEndToSocketName; // 0x558
	FVector EndLocation; // 0x560
	float CableLength; // 0x56c
	int32_t NumSegments; // 0x570
	float SubstepTime; // 0x574
	int32_t SolverIterations; // 0x578
	bool bEnableStiffness; // 0x57c
	bool bEnableCollision; // 0x57d
	float CollisionFriction; // 0x580
	FVector CableForce; // 0x584
	float CableGravityScale; // 0x590
	float CableWidth; // 0x594
	int32_t NumSides; // 0x598
	float TileMaterial; // 0x59c
};

struct UInterpTrackInstBoolProp {
	bool ResetBool; // 0x68
};

struct UBulletPenetrationDefense {
	TMap<EPhysicalSurface, FBulletPenetrationDefenseDefinition> Surfaces; // 0x38
};

struct UFriendlyFireMod {
	float FriendlyFireAdjustment; // 0xd0
};

struct AAISmartActorBase {
	FGameplayTagContainer GameplayTags; // 0x2a8
	TArray<UGameplayAction*> UserActionSet; // 0x2c8
	bool bShuffleUserActions; // 0x2d8
	int32_t MaxUsers; // 0x2dc
	bool bNeedsToRenderOnClient; // 0x2e0
	FGameplayTagContainer RequiredCharacterTags; // 0x2e8
	FGameplayTagContainer BlockingCharacterTags; // 0x308
	FGameplayTagContainer BlockingTags; // 0x328
	float MinRotatingCooldownTime; // 0x348
	float MaxRotatingCooldownTime; // 0x34c
	float MinRotatingCooldownOffset; // 0x350
	float MaxRotatingCooldownOffset; // 0x354
	UGameplayTagsComponent* GameplayTagsComponent; // 0x358
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x360
	float SpawnerBlockingRadius; // 0x368
	float RequiresSameActorWithin; // 0x36c
	FMulticastInlineDelegate OnStartUse; // 0x370
	FMulticastInlineDelegate OnStopUse; // 0x380
};

struct UAnimContextLocatorComponent {
	FGameplayTag LocatorTag; // 0x4b8
	TArray<FTagLocator> Locators; // 0x4c0
	float TraceDistance; // 0x4d0
	float ScanDistance; // 0x4d4
	bool bShowDetailDebug; // 0x4d8
	bool bHasValidClimbData; // 0x4d9
};

struct UChaserAnimInstance {
	FChaserAnimState ChaserAnimState; // 0x828
	FGameplayTagQuery PounceQuery; // 0x848
	FGameplayTagQuery PounceAttackingQuery; // 0x890
	FGameplayTagQuery LeapInterruptedQuery; // 0x8d8
};

struct UTexture2D {
	int32_t LevelIndex; // 0xc0
	int32_t FirstResourceMemMip; // 0xc4
	char bTemporarilyDisableStreaming : 1; // 0xc8
	TextureAddress AddressX; // 0xc9
	TextureAddress AddressY; // 0xca
	FIntPoint ImportedSize; // 0xcc
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

struct UMountedWeaponInteractComponent {
	FGameplayTagQuery ValidMountQuery; // 0xe8
	TArray<UGameplayEffect*> EffectsToApplyOnMount; // 0x130
	AActor* CurrentMountedWeapon; // 0x140
	UMountedWeaponComponent* MountedWeaponComponent; // 0x148
};

struct ULMG01_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c0
	FAnimNode_Root AnimGraphNode_Root; // 0x3c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x470
};

struct UADSComponent {
	bool bIsHoldingADS; // 0x160
	FAssetLookupFloat ADSActivatePercent; // 0x278
	FAssetLookupFloat ADSMeshSwapPercent; // 0x290
	FAssetLookupFloat ADSActiveFOV; // 0x2a8
	FAssetLookupCurveFloat FOVBlendCurve; // 0x2c0
	EAimSensitivitySpace ZoomLevel; // 0x2d8
	FAssetLookupAnimSequence ADSEnterAnimation; // 0x2e0
	FAssetLookupAnimSequence ADSExitAnimation; // 0x2f8
	FAssetLookupAnimSequence ADSIdleAnimation; // 0x310
	FAssetLookupFloat FiringNoiseAdditiveAlphaMax; // 0x328
	FAssetLookupFloat JumpWeightMax; // 0x340
	FAssetLookupFloat WalkWeightMax; // 0x358
	FAssetLookupFloat LookSwayWeightMax; // 0x370
	FName CharacterADSSoundTag; // 0x388
	TArray<FName> GunBonesToHideAtADS; // 0x390
	TArray<FName> PlayerBonesToHideAtADS; // 0x3a0
	FAssetLookupNameArray BonesToHideWhenADS; // 0x3b0
	FAssetLookupNameArray BonesToUnhideWhenADS; // 0x3d0
	FAssetLookupGameplayTagContainer BlockingTags; // 0x3f0
	FAssetLookupGameplayTagContainer TagsToApply; // 0x420
	FGameplayTagContainer InstantlyCancellingTags; // 0x450
	FADSTuning ADSTuning; // 0x470
};

struct UGameplayCueSet {
	TArray<FGameplayCueData> GameplayCues; // 0x38
};

struct UAnimStreamable {
	int32_t NumFrames; // 0xc0
	EAnimInterpolationType Interpolation; // 0xc4
	FName RetargetSource; // 0xc8
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xe0
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xe8
	bool bEnableRootMotion; // 0xf0
	ERootMotionRootLock RootMotionRootLock; // 0xf1
	bool bForceRootLock; // 0xf2
	bool bUseNormalizedRootMotionScale; // 0xf3
};

struct AGobiSpatialAudioVolume {
	UAkLateReverbComponent* LateReverbComp; // 0x318
	UAkRoomComponent* RoomComp; // 0x320
	float Priority; // 0x330
	FString AuxBusName; // 0x338
	FString ExteriorDelayAux; // 0x348
	UAkAudioEvent* AmbienceLoopStart; // 0x358
	UAkAudioEvent* AmbienceLoopStop; // 0x360
	float WallOcclusion; // 0x368
	EWeaponDecayEnum WeaponDecay; // 0x36c
	FAkRTPCTransition ThreatSoundOcclusion; // 0x370
	float SendLevel; // 0x388
	float FadeRate; // 0x38c
	bool bEnableRoom; // 0x390
};

struct UAnimSharingTransitionInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct UExplosionComponent {
	FExplosionConfig Config; // 0x230
	FMulticastInlineDelegate OnDebugVisualizeAddSplineComponent; // 0x370
	FMulticastInlineDelegate OnExploded; // 0x380
};

struct UGameplayContext_PlayerStaminaState {
	UAnimContext_Actor* SubjectPlayer; // 0x50
};

struct UCharacterAudioComponent {
	bool bUseCrowdSound; // 0x118
	ECharacterBodySize BodySize; // 0x119
	float MovementSpeedMaxDivisor; // 0x11c
	UDataTable* GameplayTagSetDataTable; // 0x120
	UAkSkeletalComponent* AudioEmitter; // 0x128
	USoundCollectionAsset* SelectedSoundCollection; // 0x130
	TWeakObjectPtr<AGobiCharacter> OwningCharacter; // 0x138
	FStartingStateAndParams StartingStateAndParams; // 0x140
	AGobiSpatialAudioVolume* CurrentSpatialVolume; // 0x1f0
	bool bWetPrimed; // 0x1f8
	UAkAudioEvent* WaterEnter; // 0x200
	UAkAudioEvent* WaterExit; // 0x208
	UAkAudioEvent* WaterMove; // 0x210
	UAkAudioEvent* WaterDrips; // 0x218
	UAkAudioEvent* SpectateSwap; // 0x220
	bool bStartingStatesDebug; // 0x228
	FName DialogueBoneName; // 0x22c
	FDelegate VoiceLineFinishedCallback; // 0x240
	FString CurrentVoiceLine; // 0x268
	UAkAudioEvent* DialogueStopEvent; // 0x278
	TArray<FMusicDamageTypeEvent> DamageDrivenMusicEvents; // 0x2e0
};

struct UItemAkBankComponent {
	UAkAudioBank* AkBank; // 0xe8
	TArray<UAkAudioBank*> AdditionalBanks; // 0xf0
	float MaxDistanceForLoad; // 0x100
	bool bStopLoadWhenHealthIsZero; // 0x104
};

struct UMeleeComponent {
	FMulticastInlineDelegate OnStartMelee; // 0x1e0
	FMulticastInlineDelegate OnStopMelee; // 0x1f0
	TArray<FHitResult> PerFrameOverlapResults; // 0x3b8
	FHitResult ImpactHitResult; // 0x3c8
	TArray<AActor*> OverlappedActors; // 0x450
	FGameplayCueHandle ImpactCueHandle; // 0x460
	TArray<FMeleeAttack> MeleeAttacks; // 0x478
	FCollisionProfileName ImpactVolumeCollisionProfile; // 0x488
	bool bUseMeleeTarget; // 0x490
	UAnimMontage* CookingMontage; // 0x498
	TArray<UAnimMontage*> PrepReattackMontages; // 0x4a0
	FName ComboWindowMontageNotifyName; // 0x4b0
	FName CollisionWindowMontageNotifyname; // 0x4b8
	FName ImpactWindowMontageNotifyName; // 0x4c0
	FName ReattackWindowMontageNotifyName; // 0x4c8
	FName MoveToMeleeTargetNotifyName; // 0x4d0
	FName AttackMontagesName; // 0x4d8
	FName ImpactMontagesName; // 0x4e0
	FName CalculateMeleeTargetTraceName; // 0x4e8
	FName MeleeHitValidationTraceCheckName; // 0x4f0
	FName CollisionMeshTag; // 0x4f8
	EMeleeCollisionMode CollisionMode; // 0x500
	bool bRequiresClearTraceCheck; // 0x501
	ECollisionChannel ClearTraceChannel; // 0x502
	FCollisionProfileName ImpactSweepCollisionProfile; // 0x504
	bool ImpactOverlapLagCompensationEnabled; // 0x50c
	float ImpactOverlapLagCompensationScalar; // 0x510
	FGameplayTag ImpactCue; // 0x514
	UAkAudioEvent* MeleeSwipeSound; // 0x520
	UAkAudioEvent* MeleeHitSound; // 0x528
	FGameplayTag AppliedTag; // 0x530
	FGameplayTagContainer BlockingTags; // 0x538
	FGameplayTagContainer SkipCookingTags; // 0x558
	FGameplayTagQuery CancelTagsQuery; // 0x578
	bool bReactivateIfInputHeld; // 0x5c0
	float ServerVolumePadding; // 0x5c4
	TArray<UGameplayEffect*> CookingEffects; // 0x5c8
	TArray<UGameplayEffect*> ApplyEffectsToSelf; // 0x5d8
	TArray<UGameplayEffect*> ApplyEffects; // 0x5e8
	AGobiReticle* MeleeTargetClass; // 0x5f8
	AGobiReticle* MeleeTargetLockedOnClass; // 0x600
	bool bSetReticleRadiusToImpactRadius; // 0x608
	FMeleeTuning MeleeTuning; // 0x60c
};

struct UGameplayEffectsComponent {
	FMulticastInlineDelegate OnApplyEffect; // 0xe8
	TArray<UGameplayEffect*> OwnedEffects; // 0xf8
	FNetGameplayEffectArray NetEffects_OwnerOnly; // 0x130
	TArray<FNetGameplayEffect> ClientEffects_OwnerOnly; // 0x248
	FNetGameplayEffectArray NetEffects_NoCond; // 0x258
	TArray<FNetGameplayEffect> ClientEffects_NoCond; // 0x370
};

struct USleeperAnimInstance {
	ESleeperAnimBehaviorState CurrentBehaviorState; // 0x2b8
	FTransform TetherLocation; // 0x2c0
};

struct UAnimContext_LastVisibleLocation {
	UAnimContext_Trace* Trace; // 0x78
};

struct UZombieAbilityUserWidget {
	UAbilityComponent* AbilityComponent; // 0x458
	FZombieAbilityData AbilityData; // 0x460
};

struct UNavCollision {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x88
	TArray<FNavCollisionBox> BoxCollision; // 0x98
	UNavArea* AreaClass; // 0xa8
	char bGatherConvexGeometry : 1; // 0xb0
	char bCreateOnClient : 1; // 0xb0
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
	char CollisionWithWorld : 1; // 0x10c
	FVector CollisionScale; // 0x110
	FBoxSphereBounds MeshBounds; // 0x11c
	FVector LowBoundOriginRadius; // 0x138
	EComponentMobility Mobility; // 0x144
	FInt32Interval CullDistance; // 0x148
	FInt32Interval LodLimits; // 0x150
	float LODDistanceScale; // 0x158
	char bEnableStaticLighting : 1; // 0x15c
	char CastShadow : 1; // 0x15c
	char bAffectDynamicIndirectLighting : 1; // 0x15c
	char bAffectDistanceFieldLighting : 1; // 0x15c
	char bCastDynamicShadow : 1; // 0x15c
	char bCastStaticShadow : 1; // 0x15c
	char bCastShadowAsTwoSided : 1; // 0x15c
	char bReceivesDecals : 1; // 0x15c
	char bOverrideLightMapRes : 1; // 0x15d
	int32_t OverriddenLightMapRes; // 0x160
	ELightmapType LightmapType; // 0x164
	char bUseAsOccluder : 1; // 0x168
	FBodyInstance BodyInstance; // 0x170
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
	float DensityScalingBias; // 0x360
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x368
	int32_t VirtualTextureCullMips; // 0x378
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x37c
};

struct UMovieSceneCameraCutTrack {
	bool bCanBlend; // 0x60
	TArray<UMovieSceneSection*> Sections; // 0x68
};

struct UMovieSceneCaptureProtocolBase {
	EMovieSceneCaptureProtocolState State; // 0x58
};

struct UAkLateReverbComponent {
	char bEnable : 1; // 0x230
	UAkAuxBus* AuxBus; // 0x238
	FString AuxBusName; // 0x240
	float SendLevel; // 0x250
	float FadeRate; // 0x254
	float Priority; // 0x258
	UAkLateReverbComponent* NextLowerPriorityComponent; // 0x260
};

struct ALandscapeProxy {
	ULandscapeSplinesComponent* SplineComponent; // 0x2a0
	FGuid LandscapeGuid; // 0x2a8
	FIntPoint LandscapeSectionOffset; // 0x2b8
	int32_t MaxLODLevel; // 0x2c0
	float LODDistanceFactor; // 0x2c4
	ELandscapeLODFalloff LODFalloff; // 0x2c8
	float ComponentScreenSizeToUseSubSections; // 0x2cc
	float LOD0ScreenSize; // 0x2d0
	float LOD0DistributionSetting; // 0x2d4
	float LODDistributionSetting; // 0x2d8
	float TessellationComponentScreenSize; // 0x2dc
	bool UseTessellationComponentScreenSizeFalloff; // 0x2e0
	float TessellationComponentScreenSizeFalloff; // 0x2e4
	int32_t OccluderGeometryLOD; // 0x2e8
	int32_t StaticLightingLOD; // 0x2ec
	UPhysicalMaterial* DefaultPhysMaterial; // 0x2f0
	float StreamingDistanceMultiplier; // 0x2f8
	UMaterialInterface* LandscapeMaterial; // 0x300
	UMaterialInterface* LandscapeHoleMaterial; // 0x328
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x330
	bool bMeshHoles; // 0x340
	char MeshHolesMaxLod; // 0x341
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x348
	int32_t VirtualTextureNumLods; // 0x358
	int32_t VirtualTextureLodBias; // 0x35c
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x360
	float NegativeZBoundsExtension; // 0x364
	float PositiveZBoundsExtension; // 0x368
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x370
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x380
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x390
	bool bHasLandscapeGrass; // 0x404
	float StaticLightingResolution; // 0x408
	char bCastStaticShadow : 1; // 0x40c
	char bCastShadowAsTwoSided : 1; // 0x40c
	char bCastFarShadow : 1; // 0x40c
	char bAffectDistanceFieldLighting : 1; // 0x410
	FLightingChannels LightingChannels; // 0x411
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x414
	char bRenderCustomDepth : 1; // 0x414
	int32_t CustomDepthStencilValue; // 0x418
	float LDMaxDrawDistance; // 0x41c
	FLightmassPrimitiveSettings LightmassSettings; // 0x420
	int32_t CollisionMipLevel; // 0x438
	int32_t SimpleCollisionMipLevel; // 0x43c
	float CollisionThickness; // 0x440
	FBodyInstance BodyInstance; // 0x448
	char bGenerateOverlapEvents : 1; // 0x558
	char bAffectsGroundFog : 1; // 0x558
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x558
	int32_t ComponentSizeQuads; // 0x55c
	int32_t SubsectionSizeQuads; // 0x560
	int32_t NumSubsections; // 0x564
	char bUsedForNavigation : 1; // 0x568
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x568
	bool bUseDynamicMaterialInstance; // 0x56c
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x56d
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x56e
	bool bHasLayersContent; // 0x56f
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x570
};

struct UMaterialExpressionCosine {
	FExpressionInput Input; // 0x48
	float Period; // 0x5c
};

struct UCheatManager {
	ADebugCameraController* DebugCameraControllerRef; // 0x30
	ADebugCameraController* DebugCameraControllerClass; // 0x38
};

struct URadiusHordeScenarioComponent {
	float AffectCharactersRadius; // 0xe8
	FGameplayTagQuery CharacterMatchTags; // 0xf0
	bool bActivateOnOwnerCharacterDeath; // 0x138
	float OnDeathActivateDelay; // 0x13c
	AGobiCharacter* HordeOnCharacterClass; // 0x140
	EPlayerHordeTriggerTypes AlertTriggerHordeType; // 0x148
	FGameplayTag HordeTag; // 0x14c
	FString HordeReason; // 0x158
};

struct ANiagaraActor {
	UNiagaraComponent* NiagaraComponent; // 0x2a0
	char bDestroyOnSystemFinish : 1; // 0x2a8
};

struct UFPAssetSlot {
	TArray<UObject*> LoadedAssets; // 0x58
};

struct UBTService_GameplayTags {
	TArray<FGameplayTagChange> Values; // 0x78
};

struct UGobiPathFollowingComponent {
	bool bShouldAvoidObstacles; // 0x291
	bool bShouldAnticipateTurns; // 0x292
	bool bShouldSlowdownAtGoal; // 0x293
	bool bShouldUsePathOffset; // 0x294
	bool bEnableAgentSeparation; // 0x295
	float AgentSeparationWeight; // 0x298
	FGameplayTag TraversalTag; // 0x29c
	FGameplayTag ShortcuttingTag; // 0x2a4
	FGameplayTag DestructibleTag; // 0x2ac
	USteeringControl* DefaultSteeringControl; // 0x2b8
	USteeringBehavior* DefaultSteeringBehavior; // 0x2c0
	float PathingWalkableFloorAngle; // 0x2c8
	float PathingMaxStepHeight; // 0x2d0
};

struct UIncapHealthUserWidget {
	FGameplayTagQuery SelectedItemTags; // 0x458
};

struct UPlayerStaminaComponent {
	FMulticastInlineDelegate OnStaminaExhaustionStarted; // 0x130
	FMulticastInlineDelegate OnStaminaExhaustionFinished; // 0x140
	FMulticastInlineDelegate OnStaminaStateChanged; // 0x150
	float CurrentStamina; // 0x160
	FGamePropertyFloat MaxStamina; // 0x170
	FGamePropertyFloat StaminaRegenPerSecond; // 0x1a8
	float StaminaRegenerationDelay; // 0x1e0
	float LowStaminaPercent; // 0x1e4
	FCachedGameplayTagQuery InfiniteStaminaTagQuery; // 0x1e8
};

struct UFramebufferCopy {
	UTextureRenderTarget2D* TextureTarget; // 0x38
	FMulticastInlineDelegate FramebufferCopyReady; // 0x40
};

struct UColorTableTexture {
	UDataTable* SourceTable; // 0x38
	EColorTableSource SourceTableSetting; // 0x40
	UTexture2D* TargetTexture; // 0x48
	TArray<FLinearColor> TextureData; // 0x50
};

struct UEnvQueryContext_QuerierNavFloor {
	float SearchHeight; // 0x38
};

struct UWaterRipplerDef {
	FVector2D MovingHeightRange; // 0x38
	FVector2D MovingWidthRange; // 0x40
	FVector2D Strength; // 0x48
	FVector2D Size; // 0x50
	FVector2D Lifetime; // 0x58
	FVector2D Frequency; // 0x60
	EWaterRippleStartType ForceType; // 0x68
	bool EnableAmbientRipples; // 0x69
	FVector2D AmbientRippleStrength; // 0x6c
	FVector2D AmbientRippleSize; // 0x74
};

struct UFooter_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458
	UImage* FullScreenGradient; // 0x460
	UImage* HR; // 0x468
	UImage* LetterboxGradient; // 0x470
	UImage* Tint; // 0x478
	FSlateColor SetFillColor; // 0x480
	float SetFillOpacity; // 0x4b0
	ESlateVisibility SetFillVisibility; // 0x4b4
	ESlateVisibility SetHRVisibility; // 0x4b5
	ESlateVisibility SetLetterboxGradientVisibility; // 0x4b6
	ESlateVisibility SetFullScreenGradientVisibility; // 0x4b7
};

struct UBlendSpace1D {
	bool bScaleAnimation; // 0x150
};

struct UComboBoxString {
	TArray<FString> DefaultOptions; // 0x148
	FString SelectedOption; // 0x158
	FComboBoxStyle WidgetStyle; // 0x168
	FTableRowStyle ItemStyle; // 0x588
	FMargin ContentPadding; // 0xde8
	float MaxListHeight; // 0xdf8
	bool HasDownArrow; // 0xdfc
	bool EnableGamepadNavigationMode; // 0xdfd
	FSlateFontInfo Font; // 0xe00
	FSlateColor ForegroundColor; // 0xe60
	bool bIsFocusable; // 0xe90
	bool bIsFocusedOnHover; // 0xe91
	bool bPlaySoundOnClear; // 0xe92
	FSlateSound ItemNavigationSound; // 0xe98
	EConsumeMouseWheel ConsumeMouseWheel; // 0xeb0
	FDelegate OnGenerateWidgetEvent; // 0xeb4
	FMulticastInlineDelegate OnSelectionChanged; // 0xec8
	FMulticastInlineDelegate OnOpening; // 0xed8
};

struct URegions {
	TArray<FWebServiceRegion> Regions; // 0x30
};

struct UPathMoveScaleMod {
	FGameplayTag Tag; // 0xd0
};

struct UTempPerkEntryUserWidget {
	bool bPreventExpiration; // 0x458
};

struct UMaterialExpressionLandscapeGrassOutput {
	TArray<FGrassInput> GrassTypes; // 0x48
};

struct UPlayerName_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5a8
	UPlatformIcon_WBP_C* PlatformIcon; // 0x5b0
	UTextBlock* PlayerNameText; // 0x5b8
	UScaleBox* ScaleBox_63; // 0x5c0
	FSlateFontInfo NameFont; // 0x5c8
	ETextJustify TextJustification; // 0x628
	bool bDisableScaling; // 0x629
};

struct ULevel {
	UWorld* OwningWorld; // 0xc0
	UModel* Model; // 0xc8
	TArray<UModelComponent*> ModelComponents; // 0xd0
	TArray<FString> WhitelistedActorFactoryNames; // 0xf0
	ULevelActorContainer* ActorCluster; // 0x100
	int32_t NumTextureStreamingUnbuiltComponents; // 0x108
	int32_t NumTextureStreamingDirtyResources; // 0x10c
	ALevelScriptActor* LevelScriptActor; // 0x110
	ANavigationObjectBase* NavListStart; // 0x118
	ANavigationObjectBase* NavListEnd; // 0x120
	TArray<UNavigationDataChunk*> NavDataChunks; // 0x128
	float LightmapTotalSize; // 0x138
	float ShadowmapTotalSize; // 0x13c
	TArray<FVector> StaticNavigableGeometry; // 0x140
	TArray<FGuid> StreamingTextureGuids; // 0x150
	FGuid LevelBuildDataId; // 0x1f8
	UMapBuildDataRegistry* MapBuildData; // 0x208
	FIntVector LightBuildLevelOffset; // 0x210
	char bIsLightingScenario : 1; // 0x21c
	char bTextureStreamingRotationChanged : 1; // 0x21c
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x21c
	char bIsVisible : 1; // 0x21c
	AWorldSettings* WorldSettings; // 0x268
	TArray<UAssetUserData*> AssetUserData; // 0x278
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x298
};

struct UBTService_Angle {
	FBlackboardKeySelector TargetBlackboardKey; // 0xa0
	UEnum* AngleLabelEnum; // 0xc8
	TArray<FAngleRange> AngleRanges; // 0xd0
};

struct ADatasmithAreaLightActor {
	EDatasmithAreaLightActorType LightType; // 0x2a0
	EDatasmithAreaLightActorShape LightShape; // 0x2a1
	FVector2D Dimensions; // 0x2a4
	float Intensity; // 0x2ac
	ELightUnits IntensityUnits; // 0x2b0
	FLinearColor Color; // 0x2b4
	float Temperature; // 0x2c4
	UTextureLightProfile* IESTexture; // 0x2c8
	bool bUseIESBrightness; // 0x2d0
	float IESBrightnessScale; // 0x2d4
	FRotator Rotation; // 0x2d8
	float SourceRadius; // 0x2e4
	float SourceLength; // 0x2e8
	float AttenuationRadius; // 0x2ec
	float SpotlightInnerAngle; // 0x2f0
	float SpotlightOuterAngle; // 0x2f4
};

struct UInterpTrackInstMove {
	FVector ResetLocation; // 0x30
	FRotator ResetRotation; // 0x3c
};

struct AMolotov_TargetingReticle_BP_C {
	UParticleSystemComponent* VFX_UI_Grenade_Targeting_PS; // 0x2a0
	USceneComponent* Root; // 0x2a8
	UStaticMeshComponent* Sphere; // 0x2b0
	UBillboardComponent* Billboard; // 0x2b8
	UArrowComponent* Arrow; // 0x2c0
};

struct UPhysicsThrusterComponent {
	float ThrustStrength; // 0x230
};

struct ACharacterCustomizationManager {
	ACustomizationMannequin* CustomizationMannequin; // 0x2a0
	AWeaponCustomizationMannequin* WeaponCustomizationMannequin; // 0x2a8
	FViewTargetTransitionParams ViewTargetTransitionParams; // 0x2b0
	ACameraActor* CharacterCustomizationCamera; // 0x2c0
	ACameraActor* WeaponCustomizationCamera; // 0x2c8
	TArray<FCharacterRelatedActors> CharacterToActorMap; // 0x2d0
};

struct USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x30
};

struct UStereoLayerComponent {
	char bLiveTexture : 1; // 0x230
	char bSupportsDepth : 1; // 0x230
	char bNoAlphaChannel : 1; // 0x230
	UTexture* Texture; // 0x238
	UTexture* LeftTexture; // 0x240
	char bQuadPreserveTextureRatio : 1; // 0x248
	FVector2D QuadSize; // 0x24c
	FBox2D UVRect; // 0x254
	float CylinderRadius; // 0x268
	float CylinderOverlayArc; // 0x26c
	int32_t CylinderHeight; // 0x270
	FEquirectProps EquirectProps; // 0x274
	EStereoLayerType StereoLayerType; // 0x2bc
	EStereoLayerShape StereoLayerShape; // 0x2bd
	UStereoLayerShape* Shape; // 0x2c0
	int32_t Priority; // 0x2c8
};

struct UBaseBrushTool {
	UBrushBaseProperties* BrushProperties; // 0xc8
	bool bInBrushStroke; // 0xd0
	FBrushStampData LastBrushStamp; // 0xd4
	TSoftClassPtr<UObject> PropertyClass; // 0x190
	UBrushStampIndicator* BrushStampIndicator; // 0x1b8
};

struct UAIPerceptionSystem {
	TArray<UAISense*> Senses; // 0x90
	float PerceptionAgingRate; // 0xa0
};

struct UMoveIgnoreActorsComponent {
	float OverlapPadding; // 0x130
};

struct UBTTask_WaitBlackboardTime {
	FBlackboardKeySelector BlackboardKey; // 0x80
};

struct UHapticFeedbackEffect_SoundWave {
	USoundWave* SoundWave; // 0x30
};

struct USubsurfaceProfile {
	FSubsurfaceProfileStruct Settings; // 0x30
};

struct UMeshMaterialParamSet {
	bool bDevDisabled; // 0x38
	TArray<FName> SlotNames; // 0x40
	FGameplayTagQuery TagRequirements; // 0x50
	TArray<FMeshMaterialParamValuesSet> ParamValuesSet; // 0x98
};

struct UAnimEvalSet_MorgueFreezer_DeathReaction_C {
	FGameplayEval_Health AvatarHealth; // 0xc0
	FGameplayEval_GameplayTags AvatarTags; // 0x118
};

struct UAnimEvalSet_Shared_DeathReaction_Gib_C {
	FGameplayEval_GameplayTags HasTags; // 0x4a0
};

struct UInterpTrackLinearColorBase {
	FInterpCurveLinearColor LinearColorTrack; // 0x78
	float CurveTension; // 0x90
};

struct UDatasmithSkyLightComponentTemplate {
	ESkyLightSourceType SourceType; // 0x38
	int32_t CubemapResolution; // 0x3c
	UTextureCube* Cubemap; // 0x40
};

struct UConsole {
	ULocalPlayer* ConsoleTargetPlayer; // 0x40
	UTexture2D* DefaultTexture_Black; // 0x48
	UTexture2D* DefaultTexture_White; // 0x50
	TArray<FString> HistoryBuffer; // 0x70
};

struct UEnvQueryTest_CanSeeSpawnActor {
	UEnvQueryContext* LookerContext; // 0x208
	float LookerZOffset; // 0x210
	float MaxTimeInActiveAreaSetToConsiderNotVisible; // 0x214
};

struct UZombieCrosshairUserWidget {
	FLinearColor SavedReticleColor; // 0x458
	FGameplayTag SupportedGameplayTags; // 0x468
};

struct UBasicOverlays {
	TArray<FOverlayItem> Overlays; // 0x30
};

struct UNoiseField {
	float MinRange; // 0xe8
	float MaxRange; // 0xec
	FTransform Transform; // 0xf0
};

struct UClingPropertyMod {
	EClingPropertyModType Type; // 0xf0
	int32_t CanAttach; // 0xf4
};

struct UMovieScene3DTransformSection {
	FMovieSceneTransformMask TransformMask; // 0xe8
	FMovieSceneFloatChannel Translation[0x3]; // 0xf0
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d0
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b0
	FMovieSceneFloatChannel ManualWeight; // 0x690
	bool bUseQuaternionInterpolation; // 0x734
};

struct UChatMessage {
	FText Message; // 0x30
};

struct ULandscapeHeightfieldCollisionComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x4b0
	int32_t SectionBaseX; // 0x4c0
	int32_t SectionBaseY; // 0x4c4
	int32_t CollisionSizeQuads; // 0x4c8
	float CollisionScale; // 0x4cc
	int32_t SimpleCollisionSizeQuads; // 0x4d0
	TArray<char> CollisionQuadFlags; // 0x4d8
	FGuid HeightfieldGuid; // 0x4e8
	FBox CachedLocalBox; // 0x4f8
	LazyObjectProperty RenderComponent; // 0x514
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x540
};

struct UAnimNotify_SetChargeDistance {
	UAnimContext_ChargeComponent* Charge; // 0x40
	UAnimContext_Transform* TargetLocation; // 0x48
};

struct UGameplayAction_Hide {
	FVector2D HideDuration; // 0x2e8
};

struct APlanarReflection {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x2b0
	bool bShowPreviewPlane; // 0x2b8
};

struct UTweenRotatorLatentFactory {
	FMulticastInlineDelegate OnTweenStart; // 0x38
	FMulticastInlineDelegate OnTweenUpdate; // 0x48
	FMulticastInlineDelegate OnTweenEnd; // 0x58
};

struct UMaterialExpressionSetMaterialAttributes {
	TArray<FExpressionInput> Inputs; // 0x48
	TArray<FGuid> AttributeSetTypes; // 0x58
};

struct ULifeStateIncap {
	FGamePropertyInt MaxIncapCount; // 0xb8
	float IncapHealthPool; // 0xf0
	FTemporaryHealthParams TemporaryHealthParams; // 0xf8
	bool bCanDie; // 0x110
	FGameplayTagContainer PermanentAppliedTags; // 0x118
	int32_t CurrentIncapCount; // 0x138
	FCollisionProfileName CollisionProfile; // 0x13c
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

struct UAISense {
	float DefaultExpirationAge; // 0x30
	EAISenseNotifyType NotifyType; // 0x34
	char bWantsNewPawnNotification : 1; // 0x38
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x40
};

struct ULicensePopupUserWidget {
	ELicensePopupMode ScreenMode; // 0x500
};

struct UCardFanSlot {
	EVerticalAlignment VerticalAlignment; // 0x40
};

struct UMouseCursorDefault_WBP_C {
	UImage* Icon; // 0x458
};

struct UMovieScene3DConstraintSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UAnimNotifyState_MotionCorrection {
	bool bDrawDebug; // 0x38
	bool bIsLinkedToGoal; // 0x39
	FName LinkedGoal; // 0x3c
	FMotionCorrectionGoal CorrectionGoal; // 0x48
};

struct UParticleModuleLocationEmitter {
	FName EmitterName; // 0x38
	ELocationEmitterSelectionMethod SelectionMethod; // 0x40
	char InheritSourceVelocity : 1; // 0x44
	float InheritSourceVelocityScale; // 0x48
	char bInheritSourceRotation : 1; // 0x4c
	float InheritSourceRotationScale; // 0x50
};

struct UOnHealthChangeTrigger {
	float TimerInterval; // 0x60
	float MinHealthForOnHealed; // 0x64
	FGameplayTagContainer OnHeroDamagedTagExceptions; // 0x68
	float HealthMaxPercentageForNag; // 0x88
	float HealthMaxPercentageForLowHealth; // 0x8c
	float HealthMaxPercentageForLowHealthBig; // 0x90
	float DoomCoughChance; // 0x94
	float FriendlyFireDelay; // 0x98
	float FriendlyFireCooldown; // 0x9c
	FGameplayTagQuery HealingItemTagQuery; // 0xa8
	FGameplayTag BulletDamageTypeTag; // 0xf0
	FGameplayTagContainer FireDamageTypeContainer; // 0xf8
	float FireDamageAmountReq; // 0x118
};

struct AItem {
	FDataTableRowHandle RowHandle; // 0x318
	FName Name; // 0x338
	EEquipmentSlot EquipmentSlot; // 0x340
	USceneComponent* InternalRootComponent; // 0x348
	UItemMeshManagementComponent* MeshManagementComponent; // 0x350
	TArray<UMovementTickableComponent*> MovementTickableComponents; // 0x420
	FDataTableRowHandle ItemToReturnWhenDropped; // 0x430
	FFPFOVConfiguration BaseFirstPersonFoV; // 0x450
	TArray<FFirstPersonFoVAttachmentConfiguration> AttachmentFoVConfigurations; // 0x478
	FDataTableRowHandle AdditionalItemGrantedWhenPickedUp; // 0x488
};

struct UTraceMeleeComponent {
	FTraceMeleeActiveMontage ActiveMontages; // 0x1e0
	TArray<AActor*> OverlappedActors; // 0x1f0
	TArray<AActor*> DamagedCharacters; // 0x200
	FGameplayCueHandle ImpactCueHandle; // 0x210
	EHeroMeleeState CurrentState_MoveTick; // 0x228
	char ComboCount_MoveTick; // 0x22a
	FReplicatedAttackData ReplicatedAttackData; // 0x22c
	UAkAudioEvent* StartBuildUpSound; // 0x388
	UAkAudioEvent* BuildUpMaxSound; // 0x390
	UAkAudioEvent* ExitBuildUpSound; // 0x3a0
	bool bAlwaysPlayExitBuildUpSound; // 0x3a8
	float ExertBigOnReleaseChance; // 0x3ac
	UAkAudioEvent* MeleeSwipeSound; // 0x3b8
	UAkAudioEvent* LowStamMeleeSwipeSwt; // 0x3c0
	UAkAudioEvent* BuildUpMeleeSwipeSound; // 0x3c8
	UAkAudioEvent* NoCleavePowerSound; // 0x3d0
	UAkAudioEvent* MeleeHitSound; // 0x3d8
	TArray<UAkAudioEvent*> HeavyHitterMeleeHitSounds; // 0x3e0
	TArray<UAkAudioEvent*> BuildUpMeleeHitSounds; // 0x3f0
	FName SharedMeleeSwipeSound; // 0x400
	FGameplayTag ImpactCue; // 0x408
	FDataTableRowHandle BashOverrideDialogue; // 0x410
	UForceFeedbackEffect* AttackStartForceFeedback; // 0x430
	UForceFeedbackEffect* InitialHitForceFeedback; // 0x438
	FTriggerEffectsDefinition TriggerEffects; // 0x440
	FGameplayTagContainer MeleeActiveAppliedTags; // 0x450
	FGameplayTagContainer BlockingTags; // 0x470
	bool bUsesPrimaryButton; // 0x570
	TArray<UGameplayEffect*> EffectsAppliedToHitActor; // 0x578
	UBulletPenetrationDefense* CleaveDefense; // 0x588
	UGobiDamageType* DamageType; // 0x590
	UGobiDamageType* HeavyAttackDamageType; // 0x598
	TArray<FTraceMeleeAttack> LightAttackSequence; // 0x5a0
	TArray<FHeavyHeroMeleeAttack> HeavyAttackSequence; // 0x5b0
	UAnimMontage* BlockMontageFP; // 0x5c0
	UAnimMontage* BlockMontage3P; // 0x5c8
	TArray<UGameplayEffect*> BlockingStateAppliedEffects; // 0x5d0
	TArray<UGameplayEffect*> BlockedDamageSelfAppliedEffects; // 0x5e0
	TArray<UGameplayEffect*> BlockedDamageInstigatorAppliedEffects; // 0x5f0
	FTraceMeleeTuning TraceMeleeTuning; // 0x600
	FGameplayTagQuery HeavyAttackRequiredQuery; // 0x6a0
	FGameplayTagQuery BlockedDamageInstigatorQuery; // 0x6e8
	FGameplayTagQuery BlockedDamageDamageTypeQuery; // 0x730
};

struct UEvansburgh_D_Hero_C4_Holder_Lesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
};

struct UTRSCubemapCapturer {
	TArray<USceneCaptureComponent2D*> CaptureComponents; // 0x40
};

struct UParticleModuleVectorFieldGlobal {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x38
	float GlobalVectorFieldScale; // 0x3c
	float GlobalVectorFieldTightness; // 0x40
};

struct UMovieSceneBoolSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct UAxisPositionGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50
	TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x60
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80
	bool bEnableSignedAxis; // 0x90
	bool bInInteraction; // 0x91
	FVector InteractionOrigin; // 0x94
	FVector InteractionAxis; // 0xa0
	FVector InteractionStartPoint; // 0xac
	FVector InteractionCurPoint; // 0xb8
	float InteractionStartParameter; // 0xc4
	float InteractionCurParameter; // 0xc8
	float ParameterSign; // 0xcc
};

struct UInterpTrackInstAnimControl {
	float LastUpdatePosition; // 0x30
};

struct UWidget {
	UPanelSlot* Slot; // 0x30
	FDelegate bIsEnabledDelegate; // 0x38
	FText ToolTipText; // 0x48
	FDelegate ToolTipTextDelegate; // 0x60
	UWidget* ToolTipWidget; // 0x70
	FDelegate ToolTipWidgetDelegate; // 0x78
	FDelegate VisibilityDelegate; // 0x88
	FWidgetTransform RenderTransform; // 0x98
	FVector2D RenderTransformPivot; // 0xb4
	char bIsVariable : 1; // 0xbc
	char bCreatedByConstructionScript : 1; // 0xbc
	char bIsEnabled : 1; // 0xbc
	char bShowDisabledEffect : 1; // 0xbc
	char bPlaySoundOnFocus : 1; // 0xbc
	char bOverride_Cursor : 1; // 0xbc
	USlateAccessibleWidgetData* AccessibleWidgetData; // 0xc0
	char bIsVolatile : 1; // 0xc8
	EMouseCursor Cursor; // 0xc9
	EWidgetClipping Clipping; // 0xca
	ESlateVisibility Visibility; // 0xcb
	float RenderOpacity; // 0xcc
	UWidgetNavigation* Navigation; // 0xd0
	EFlowDirectionPreference FlowDirectionPreference; // 0xd8
	TArray<UPropertyBinding*> NativeBindings; // 0x100
	FMulticastInlineDelegate OnVisibilityChanged; // 0x130
	bool bForceShowFocus; // 0x140
	bool bShowFocusRectIfFocused; // 0x141
};

struct UApplyEffectItemTraceComponent {
	float TraceDistance; // 0x520
	bool bTargetCharactersOnly; // 0x524
	ECollisionChannel TraceChannel; // 0x525
	UObject* RequiredClassType; // 0x528
};

struct AMatineeActorCameraAnim {
	UCameraAnim* CameraAnim; // 0x348
};

struct UTweenVectorLatentFactory {
	FMulticastInlineDelegate OnTweenStart; // 0x38
	FMulticastInlineDelegate OnTweenUpdate; // 0x48
	FMulticastInlineDelegate OnTweenEnd; // 0x58
};

struct UInterpTrackFloatAnimBPParam {
	UObject* AnimBlueprintClass; // 0x98
	UAnimInstance* AnimClass; // 0xa0
	FName ParamName; // 0xa8
};

struct UGameplayEffectFireModeComponent {
	FGamePropertyFloatMod AlertRadiusScaleMod; // 0x250
	FGamePropertyFloatMod BulletDamageScaleMod; // 0x260
	FGamePropertyFloatMod BulletRangeScaleMod; // 0x270
	FGamePropertyFloatMod StumbleDamageScaleMod; // 0x280
	FGamePropertyFloatMod UnalertDamageScale; // 0x290
	FGamePropertyFloatMod DelayBetweenShotsScale; // 0x2a0
	FGamePropertyFloatMod WeakSpotDamageMultiplierMod; // 0x2b0
	FGameplayTag FireAnimAssetLookupTag; // 0x2c0
	FGameplayTag RechamberAnimAssetLookupTag; // 0x2c8
	FGameplayTag FireAudioAssetLookupTag; // 0x2d0
	FGameplayTag MuzzleSocketAssetLookupTag; // 0x2d8
	FGameplayTag WeaponTracerAssetLookupTag; // 0x2e0
};

struct UAutoDestroySubsystem {
	TArray<AActor*> ActorsToPoll; // 0x40
};

struct UEnvQueryContext_Objective {
	FAIDataProviderUObjectValue GameplayObjectiveClass; // 0x30
};

struct AWaterRippler {
	UWaterRipplerComponent* WaterRipplerComponent; // 0x2a0
};

struct AGobiSpectatorPawn {
	FMulticastInlineDelegate OnSpectateTargetChanged; // 0x320
	AActor* TargetActor; // 0x330
	AActor* LocalHeroActor; // 0x338
	TArray<AActor*> PotentialTargets; // 0x340
};

struct UInAppPurchaseCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x60
	TArray<UBTService*> Services; // 0x70
	char bApplyDecoratorScope : 1; // 0x90
};

struct UAnimEvalSet_Bot_InteractTarget_C {
	FGameplayEval_Distance Distance2D; // 0xc0
	FGameplayEval_Distance DistanceVert; // 0x190
	FGameplayEval_ActorClass ActorClass; // 0x260
	FGameplayEval_GameplayTags GameplayTags; // 0x2b8
	FGameplayEval_CanUseUsable CanUseUsable; // 0x350
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

struct UGameplayAction_HagAggro {
	UMontageSet* AggroTellMontageSet; // 0x210
	UMontageSet* AggroSuccessMontageSet; // 0x218
	UMontageSet* AggroFailedMontageSet; // 0x220
	float TimeToAggro; // 0x228
};

struct UDialogueSystem {
	FMulticastInlineDelegate OnConversationBegin; // 0x30
	FMulticastInlineDelegate OnConversationEnd; // 0x40
	UDataTable* EventDefinitionTable; // 0x50
	UDataTable* SpeakerTable; // 0x58
	TMap<UDialogueComponent*, FSpeakerRuntimeData> SpeakerMap; // 0x60
	UDialoguePlayback* DialoguePlayback; // 0x290
	ADialogueSystemDebugger* Debugger; // 0x298
	ADialogueBankManger* BankManager; // 0x2a0
	ADialogueSystemDebugger* DebuggerClass; // 0x2a8
	UDataTable* ResponseGroupTable; // 0x2b0
	UDataTable* ConversationTable; // 0x2b8
	UDataTable* DialogueAnimationTable; // 0x2c0
	UDataTable* PriorityTable; // 0x2c8
	UDialogueComponent* LastSpokenDialogueComp; // 0x2d0
};

struct ATRSSplineMeshActor {
	USplineComponent* EditableSpline; // 0x2a0
	TArray<USplineMeshComponent*> GeneratedSubObjects; // 0x2a8
	TArray<UTextRenderComponent*> PointNumbers; // 0x2b8
	UStaticMeshComponent* ConvertedMesh; // 0x2c8
	bool bFinalized; // 0x2d0
	bool bAffectsNavigation; // 0x2d1
	bool bDisableCollision; // 0x2d2
	ETRSSplineMeshActorSplineMeshMode SplineMeshMode; // 0x2d3
	ESplineMeshAxis ForwardAxis; // 0x2d4
	float GlobalBank; // 0x2d8
	FVector GlobalScale; // 0x2dc
	float Padding; // 0x2e8
	UStaticMesh* Mesh; // 0x2f0
	bool bCastShadows; // 0x2f8
	int8_t ForceLOD; // 0x2f9
	bool bLockCurrentMeshArray; // 0x2fa
	bool bContiguous; // 0x2fb
	TArray<FTRSSplineMeshActorSplineMeshElement> AvailableMeshes; // 0x300
	bool bSequential; // 0x310
	bool bPreventAdjancency; // 0x311
	FVector CachedGlobalScale; // 0x314
	TArray<FTRSSplineMeshActorPerInstanceData> PerInstanceData; // 0x320
	TArray<FVector> PerInstanceRotation; // 0x330
	bool bUseCapMeshes; // 0x340
	bool bOverrideEndPointData; // 0x341
	FTRSSplineMeshActorPerInstanceData EndPointDataOverride; // 0x344
	FTRSSplineMeshActorCapData CapMeshes; // 0x358
	ETRSSplineMeshActorMeshType StaticMeshTypeToUse; // 0x378
	bool bUsedWithWater; // 0x379
	float UMult; // 0x37c
	bool bAutoMultU; // 0x380
	bool bFlipU; // 0x381
	float VMult; // 0x384
	bool bAutoMultV; // 0x388
	bool bFlipV; // 0x389
	int32_t AutoMultAdjust; // 0x38c
	bool bDrawOnlySpline; // 0x390
	bool bShowDebugMaterials; // 0x391
	TArray<UMaterialInterface*> DebugMaterials; // 0x398
	bool bDrawDebugNumbers; // 0x3a8
	FTRSSplineMeshActorDebugNumbersPrefs DebugNumbersPrefs; // 0x3ac
	TArray<FTRSSplineMeshActorSplineMeshElement> MeshesToUse; // 0x3b8
	TArray<float> Distances; // 0x3c8
	TArray<UMaterialInterface*> DebugMaterialsToUse; // 0x3d8
	TArray<FTRSSplineMeshActorSplineMeshElement> MeshesCache; // 0x3e8
	bool bMeshTypeSelected; // 0x3f8
};

struct UNiagaraDataInterfaceSpline {
	AActor* Source; // 0x38
};

struct UBTDecorator_CompareBBEntries {
	EBlackBoardEntryComparison Operator; // 0x70
	FBlackboardKeySelector BlackboardKeyA; // 0x78
	FBlackboardKeySelector BlackboardKeyB; // 0xa0
};

struct ALandscapeMeshProxyActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x2a0
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

struct UGameplayEffectAdjustIncapStrikes {
	int32_t IncapStrikesToApply; // 0x238
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

struct UAkAudioEvent {
	UAkAudioBank* RequiredBank; // 0x30
	float MaxAttenuationRadius; // 0x38
	bool IsInfinite; // 0x3c
	float MinimumDuration; // 0x40
	float MaximumDuration; // 0x44
	TMap<FName, float> MaxDurationForLanguage; // 0x48
	TMap<FName, float> MinDurationForLanguage; // 0x98
	int32_t DataVersion; // 0xe8
};

struct UDatasmithStaticMeshTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x38
	int32_t LightMapCoordinateIndex; // 0x88
	int32_t LightMapResolution; // 0x8c
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x90
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0xa0
};

struct UNiagaraParameterCollection {
	FName Namespace; // 0x30
	TArray<FNiagaraVariable> Parameters; // 0x38
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct UPvPHoldoutStateUserWidget {
	UAkAudioEvent* PhaseEndAudio; // 0x458
	UAkAudioEvent* PhaseTransitionAudio; // 0x460
	UAkAudioEvent* TimerClickStartAudio; // 0x468
	UAkAudioEvent* TimerClickAudio; // 0x470
	UAkAudioEvent* TimerSurpassPositiveAudio; // 0x478
	UAkAudioEvent* TimerSurpassNegativeAudio; // 0x480
	int32_t ALARM_THRESHOLD_SECONDS; // 0x488
};

struct UEnvQueryTest_EnemyDamageAmount {
	bool bUseDamagePrecent; // 0x2a0
};

struct UMaterialExpressionFontSample {
	UFont* Font; // 0x48
	int32_t FontTexturePage; // 0x50
};

struct UArmorTrait {
	FArmor Armor; // 0x30
};

struct UAnimContext_BotTarget {
	UAnimContext_Actor* TargetContext; // 0x150
};

struct UGridPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x290
};

struct UGameplayAction_ProjectileThrow {
	FGameplayTag ThrowComponentTag; // 0x210
	bool bAddActivationOwnedTagsForCanActivate; // 0x218
};

struct UTitanStage1TentacleAnimInstance {
	UTitanStage1TentacleComponent* TentacleComponent; // 0x2c0
	bool bDormant; // 0x2c8
	bool bIdle; // 0x2c9
	bool bEmerge; // 0x2ca
	bool bSlapAttackWindUp; // 0x2cb
	bool bSlapAttack; // 0x2cc
	bool bSlapAttackGroundLoop; // 0x2cd
	float SlapAttackPlayRate; // 0x2d0
	bool bSlapAttackRecover; // 0x2d4
	bool bPainRoar; // 0x2d5
	bool bWoundedIdle; // 0x2d6
	bool bAcidSprayAttackWindUp; // 0x2d7
	bool bAcidSprayAttackEnter; // 0x2d8
	bool bAcidSprayAttackLoop; // 0x2d9
	bool bAcidSprayAttackExit; // 0x2da
	float EmergePlayRate; // 0x2dc
	bool bRetract; // 0x2e0
	float AngleToTarget; // 0x2e4
	bool bFlinching1; // 0x2e8
	bool bFlinching2; // 0x2e9
	bool bSlapAttackWindUpStumble; // 0x2ea
	UAnimSequence* EmergeAnimSequence; // 0x2f0
	UAnimSequence* RetractAnimSequence; // 0x2f8
	UAnimSequence* IdleAnimSequence; // 0x300
	UAnimSequence* HurtIdleAnimSequence; // 0x308
	UBlendSpace1D* SlapAttackWindUpEnterBlendSpace; // 0x310
	UBlendSpace1D* SlapAttackWindUpLoopBlendSpace; // 0x318
	UBlendSpace1D* SlapAttackWindUpStumbleBlendSpace; // 0x320
	UBlendSpace1D* SlapAttackEnterBlendSpace; // 0x328
	UBlendSpace1D* SlapAttackGroundLoopBlendSpace; // 0x330
	UBlendSpace1D* SlapAttackRecoverBlendSpace; // 0x338
	UAnimSequence* PainRoarAnimSequence; // 0x340
	UAnimSequence* AcidSprayAttackWindUpEnterAnimSequence; // 0x348
	UAnimSequence* AcidSprayAttackWindUpLoopAnimSequence; // 0x350
	UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x358
	UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x360
	UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x368
	UAnimSequence* FlinchAnimSequence; // 0x370
};

struct UMaterialExpressionBlackBody {
	FExpressionInput Temp; // 0x48
};

struct UActiveAreaSetBucketWeightMod {
	TArray<float> BucketWeights; // 0xd0
};

struct UPacketRelayClientConnectionConfig {
	double HeartbeatInterval; // 0x30
	double TimeoutSeconds; // 0x38
};

struct UBreakableComponent {
	FCollisionProfileName PristineHiddenCollisionProfile; // 0xe8
	FCollisionProfileName DeformableVisibleCollisionProfile; // 0xf0
	FCollisionProfileName BreakableVisibleCollisionProfile; // 0xf8
	FCollisionProfileName BreakableVisibleIntercollisionProfile; // 0x100
	ECollisionChannel BreakableTraceChannel; // 0x108
	float BonesToHealth; // 0x10c
	float BoneHealthVariance; // 0x110
	TArray<FName> AnchorBones; // 0x118
	TArray<FName> UncrackableBones; // 0x128
	TArray<FName> UnbreakableBones; // 0x138
	TArray<FBonePair> CustomNeighbors; // 0x148
	TArray<FBonePair> CustomNotNeighbors; // 0x158
	FVector2D CrackDepth; // 0x168
	float LinearImpulseScale; // 0x170
	float AngularImpulseScale; // 0x174
	float DestroyedImpulseScale; // 0x178
	float DetachableLinearImpulseScale; // 0x17c
	float DetachableAngularImpulseScale; // 0x180
	float MaxSimulationTime; // 0x184
	FVector2D IntercollisionDelay; // 0x188
	UCurveFloat* DoorShakeCurve; // 0x190
	float DoorShakeDistance; // 0x198
	float DoorShakeHalfAngle; // 0x19c
	USceneComponent* Hinge; // 0x1a0
	UHealthComponent* HealthComponent; // 0x1a8
	TArray<UMeshComponent*> PristineMeshes; // 0x1b0
	UPoseableMeshComponent* DeformableMesh; // 0x1c0
	UPoseableMeshComponent* BreakableMesh; // 0x1c8
	USkinnedDamageTextureComponent* SkinnedDamage; // 0x1d0
	TMap<USceneComponent*, FName> AttachmentBoneMap; // 0x1d8
	TArray<FDetachableInfo> Detachables; // 0x228
	FVector NetHitDir; // 0x2d8
	TArray<int32_t> NetBonesCracked; // 0x2e8
	TArray<int32_t> NetBonesDestroyed; // 0x2f8
	TArray<FHitInfo> NetDeformations; // 0x308
	TArray<FBoneInfo> BoneInfos; // 0x318
};

struct UGameplayEffectDamage {
	float InstantDamage; // 0x248
	float InstantPermanentDamage; // 0x24c
	float RecurringDamage; // 0x250
	float RecurringPermanentDamage; // 0x254
	float RecurringDamageFrequency; // 0x258
	float BeginDamageRampTime; // 0x25c
	float EndDamageRampTime; // 0x260
	float RecurringDamageStart; // 0x264
	TArray<UGameplayEffect*> ApplyEffectsOnRecurringDamage; // 0x268
	bool bApplyAccumulatedDamageOnStop; // 0x278
	float MinAccumulatedDamageOnStop; // 0x27c
	UGobiDamageType* DamageTypeClass; // 0x280
	bool bAllowZeroInstantDamage; // 0x288
	bool bCalculatePermanentDamageAsPctOfDamage; // 0x289
};

struct AMindControlProjectile {
	USphereComponent* BumpCollisionComponent; // 0x660
	FMulticastInlineDelegate OnHit; // 0x668
	UHealthComponent* Health; // 0x678
	AActor* MoveToTarget; // 0x680
	FMulticastInlineDelegate OnMiss; // 0x688
	AGobiCharacter* MCAI_Class; // 0x698
	UParticleSystem* MissPSTemplate; // 0x6a0
	UGameplayEffect* CooldownEffectOnSuccess; // 0x6a8
	UGameplayEffect* CooldownEffectOnFailed; // 0x6b0
	FGameplayTagContainer BlockingTargetTags; // 0x6b8
	UGobiDamageType* DamageTypeToFriendlies; // 0x6d8
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

struct UBTTask_RotateToFaceBBEntry {
	float Precision; // 0xa0
	bool bNeverClearFocus; // 0xa8
};

struct UAISense_Team {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x88
};

struct UChildConnection {
	UNetConnection* Parent; // 0x1a38
};

struct ULocalLightComponent {
	ELightUnits IntensityUnits; // 0x388
	float Radius; // 0x38c
	float AttenuationRadius; // 0x390
	FLightmassPointLightSettings LightmassSettings; // 0x394
};

struct UEnvQueryGenerator_TRSPathingGrid {
	UNavigationQueryFilter* NavigationFilter; // 0x58
	FAIDataProviderFloatValue GridHalSize; // 0x60
	FAIDataProviderFloatValue SpaceBetween; // 0x98
	bool bPlaceCentroids; // 0xd0
	FAIDataProviderFloatValue CentroidCullDistance; // 0xd8
	UEnvQueryContext* GenerateAround; // 0x110
	UEnvQueryContext* Querier; // 0x118
	bool bPlaceAtQuerierLocation; // 0x120
	bool bSearchNearbyContextOnFail; // 0x121
	int32_t MinPolysToConsiderAFail; // 0x124
	float NearbyContextSearchRange; // 0x128
};

struct UItemMeshManagementComponent {
	FMulticastInlineDelegate OnFirstPersonMeshInitialized; // 0x160
	FMulticastInlineDelegate OnFirstPersonMeshShutdown; // 0x170
	TArray<UPrimitiveComponent*> ThirdPersonMeshComponents; // 0x180
	TArray<UPrimitiveComponent*> FirstPersonMeshComponents; // 0x190
	TArray<FWeaponAttachmentMeshConfig> AppliedAttachmentMeshConfigs; // 0x1a0
	FDataTableRowHandle CustomizationRow; // 0x1b0
	TArray<FName> DefaultMeshes; // 0x2c8
	TArray<FName> FirstPersonBonesHiddenByDefault; // 0x328
	UPhysicsAsset* FirstPersonPhysicsAssetOverride; // 0x338
	FGameplayTag BaseThirdPersonMeshTag; // 0x340
	FName ThirdPersonAttachBoneName; // 0x348
	FGameplayTag SecondaryThirdPersonMeshTag; // 0x350
	FName SecondaryThirdPersonAttachBoneName; // 0x358
};

struct UCharacterEmitterMod {
	FCharacterEmitterDef CharacterEmitterDef; // 0xd0
};

struct UAnimEvalSet_Common_Melee_Overlap_C {
	FGameplayEval_OverlapActor OverlapTest; // 0xc0
	FAnimEval_MontageLastPlayed HasPlayedRecently; // 0x198
	FGameplayEval_Dismembered CheckDismembered; // 0x1e8
	FGameplayEval_Random RandomScore; // 0x240
	FGameplayEval_RandomChanceByTag RandomChanceByTag; // 0x288
	FGameplayEval_HasVisibility HasVisibility; // 0x330
	FGameplayEval_NavBlocked NavBlocked; // 0x388
	FGameplayEval_GameplayTags GameplayTags; // 0x3e0
};

struct UCarAlarmGameCoachLesson {
	float CarAlarmTeachDuration; // 0x460
};

struct AGravelFiller {
	USceneComponent* InternalRootComponent; // 0x2a0
	UStaticMeshComponent* SwitchStaticMeshComponent; // 0x2a8
	UStaticMeshComponent* GravelMoundMeshComponent; // 0x2b0
	UParticleSystemComponent* GravelPourParticleSystemComponent; // 0x2b8
	UUsableComponent* UsableComponent; // 0x2c0
	UBoxComponent* UsableTriggerComponent; // 0x2c8
	UBoxComponent* StartGravelLessonTriggerBox; // 0x2d0
	UBoxComponent* EndGravelLessonTriggerBox; // 0x2d8
	USceneComponent* AudioMachinerySceneComponent; // 0x2e0
	UUsableHighlightComponent* UsableHighlightComp; // 0x2e8
	AActor* GravelNavBuilder; // 0x2f0
	FDataTableRowHandle GravelFillerStartRowHandle; // 0x2f8
	FDataTableRowHandle GravelFillerStopRowHandle; // 0x318
	FName GravelMusicScenario; // 0x338
	UAkAudioEvent* ButtonActivateAudioEvent; // 0x340
	UAkAudioEvent* ConveyorStartLoopAudioEvent; // 0x348
	UAkAudioEvent* ConveyorStopLoopAudioEvent; // 0x350
	UAkAudioEvent* FactoryStartLoopAudioEvent; // 0x358
	UAkAudioEvent* FactoryStopLoopAudioEvent; // 0x360
	UAkAudioEvent* SwitchStartLoopAudioEvent; // 0x368
	UAkAudioEvent* SwitchStopLoopAudioEvent; // 0x370
	UAkAudioEvent* GravelMoundTrickleStartLoopAudioEvent; // 0x378
	UAkAudioEvent* GravelMoundTrickleStopLoopAudioEvent; // 0x380
	UAkAudioEvent* ChuteHornAudioEvent; // 0x388
	FMulticastInlineDelegate OnGravelPileStateChange; // 0x390
	float DelayAfterSwitchUse; // 0x3a0
	float GravelTotalFillTime; // 0x3a4
	float GravelTotalHeightGrowth; // 0x3a8
	UCurveFloat* GravelHeightGrowthFloatCurve; // 0x3b0
	FQueuedConversation ReachGravelConversation; // 0x3b8
	UObject* FirstGameCoachLessonsClass; // 0x420
	float FirstGameCoachLessonDelay; // 0x428
	UObject* SecondGameCoachLessonsClass; // 0x430
	float SecondGameCoachLessonDelay; // 0x438
	FGameplayTagContainer HighlightGameplayTagContainer; // 0x440
	float HintOneTimer; // 0x460
	float HintTwoTimer; // 0x464
	float PercentInEventForStatusDialogue; // 0x468
	float MinHealthPctForWinning; // 0x46c
	int32_t MinHeroesNeededForWinning; // 0x470
	UGameCoachLessonsComponent* FirstLesson; // 0x478
	UGameCoachLessonsComponent* SecondLesson; // 0x480
	UAkComponent* ConveyorAkComponent; // 0x488
	UAkComponent* FactoryAkComponent; // 0x490
	UAkComponent* SwitchAkComponent; // 0x498
	UAkComponent* GravelMoundAkComponent; // 0x4a0
	float MoundHeight; // 0x4a8
	bool bPlayersEnteredArea; // 0x4ac
	bool bPlayersOverMound; // 0x4ad
};

struct USelectableGameplayCardUserWidget {
	FDataTableRowHandle ProductRowHandle; // 0x458
	FDataTableRowHandle CardRowHandle; // 0x478
	FMulticastInlineDelegate OnFlipAnimFinished; // 0x498
	bool bShowTooltip; // 0x4a8
	FMulticastInlineDelegate OnDragDrop; // 0x4b0
	EGameplayCardDeckType DeckType; // 0x4c0
	USmallDeckEntryDragVisualUserWidget* DragVisualClass; // 0x4c8
};

struct UGameplayEffectRevive {
	FReviveEffectData ReviveData; // 0x238
};

struct UVectorFieldComponent {
	UVectorField* VectorField; // 0x4b0
	float Intensity; // 0x4b8
	float Tightness; // 0x4bc
	char bPreviewVectorField : 1; // 0x4c0
	int32_t CreationPointCountX; // 0x4c4
	int32_t CreationPointCountY; // 0x4c8
	int32_t CreationPointCountZ; // 0x4cc
	FVector CreationFlowVector; // 0x4d0
	float CreationMaxDistanceToCollider; // 0x4dc
};

struct UGameplayAction_Cling {
	TArray<UAnimMontage*> TauntMontages; // 0x248
	FVector2D TauntCooldown; // 0x258
};

struct UMaterialExpressionPower {
	FExpressionInput Base; // 0x48
	FExpressionInput Exponent; // 0x5c
	float ConstExponent; // 0x70
};

struct UAnimEvalSet_Shared_HitReaction_UB_C {
	FGameplayEval_Angle AvatarHitDirection; // 0xc0
	FGameplayEval_RandomChance RandomChance; // 0x120
	FGameplayEval_HitReactionBone HitBone; // 0x170
	FGameplayEval_Health Health; // 0x220
	FGameplayEval_GameplayTags GameplayTags; // 0x278
};

struct UAnimationSharingSetup {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x30
	FAnimationSharingScalability ScalabilitySettings; // 0x40
};

struct UEQTest_VoronoiDistanceMapCell {
	UEnvQueryContext* CellSource; // 0x208
	FNavAgentSelector DistanceMapNavMesh; // 0x210
	EEnvItemStatus ItemsWithNoCellShould; // 0x214
};

struct UFoliageType_Actor {
	AActor* ActorClass; // 0x380
	bool bShouldAttachToBaseComponent; // 0x388
};

struct APawn {
	char bUseControllerRotationPitch : 1; // 0x2a8
	char bUseControllerRotationYaw : 1; // 0x2a8
	char bUseControllerRotationRoll : 1; // 0x2a8
	char bCanAffectNavigationGeneration : 1; // 0x2a8
	float BaseEyeHeight; // 0x2ac
	EAutoReceiveInput AutoPossessPlayer; // 0x2b0
	EAutoPossessAI AutoPossessAI; // 0x2b1
	char RemoteViewPitch; // 0x2b2
	AController* AIControllerClass; // 0x2b8
	APlayerState* PlayerState; // 0x2c0
	AController* Controller; // 0x2d0
	FVector ControlInputVector; // 0x2dc
	FVector LastControlInputVector; // 0x2e8
};

struct UAIDistanceRanges {
	UEnum* DistanceLabelEnum; // 0x38
	TArray<FDistanceRange> Ranges; // 0x40
};

struct UBTNode {
	FString NodeName; // 0x38
	UBehaviorTree* TreeAsset; // 0x48
	UBTCompositeNode* ParentNode; // 0x50
};

struct UAnimAttackWindowComponent {
	FGameplayTag AttackCollisionVolumeTag; // 0xe8
	bool bRequiresLineOfSight; // 0xf0
	FName LineOfSightTargetComponentTag; // 0xf4
	bool bUseTargetEyePosForLoS; // 0xfc
};

struct UHeroStatTracker {
	AHeroCharacter* CurrentCharacter; // 0x40
};

struct UMatchmakingSettingsInfoUserWidget {
	TSoftObjectPtr<UTexture2D> PvPBackgroundTexture; // 0x478
};

struct UMeshMaterialSet {
	TArray<FName> SlotNames; // 0x38
	TArray<UMaterialInterface*> Materials; // 0x48
};

struct UInterpTrackInstToggle {
	ETrackToggleAction Action; // 0x30
	float LastUpdatePosition; // 0x34
	char bSavedActiveState : 1; // 0x38
};

struct UGameplayContext_UsableComponent {
	FGameplayTag ComponentTag; // 0x58
	bool bIncludeParentTags; // 0x60
	bool bUseBotInteract; // 0x61
};

struct UFileMediaSource {
	FString FilePath; // 0x90
	bool PrecacheFile; // 0xa0
};

struct UARCandidateImage {
	UTexture2D* CandidateTexture; // 0x38
	FString FriendlyName; // 0x40
	float Width; // 0x50
	float Height; // 0x54
	EARCandidateImageOrientation Orientation; // 0x58
};

struct UDatasmithPointLightComponentTemplate {
	ELightUnits IntensityUnits; // 0x38
	float SourceRadius; // 0x3c
	float SourceLength; // 0x40
	float AttenuationRadius; // 0x44
};

struct UOnLifeStateChangeTrigger {
	float IncapBeatDelay; // 0x60
	float FirstIncapCalloutDelay; // 0x64
	float DeathBeatDelay; // 0x68
	float DeathLaterDelay; // 0x6c
	float IncapInterval; // 0x70
	int32_t RescueCalloutsBeforeLong; // 0x74
	float ChanceForRescueCallout; // 0x78
	float ChanceForRescueCalloutLong; // 0x7c
	float RescueInterval; // 0x80
	float LedgeHangInterval; // 0x84
};

struct USnitchComponent {
	FMulticastInlineDelegate OnSnitched; // 0xe8
	bool bSnitchOnDeath; // 0xf8
	FGameplayTag SnitchedTag; // 0xfc
};

struct UMonoWaveTableSynthPreset {
	FString PresetName; // 0x30
	char bLockKeyframesToGridBool : 1; // 0x40
	int32_t LockKeyframesToGrid; // 0x44
	int32_t WaveTableResolution; // 0x48
	TArray<FRuntimeFloatCurve> WaveTable; // 0x50
	char bNormalizeWaveTables : 1; // 0x60
};

struct USynthComponent {
	char bAutoDestroy : 1; // 0x230
	char bStopWhenOwnerDestroyed : 1; // 0x230
	char bAllowSpatialization : 1; // 0x230
	char bOverrideAttenuation : 1; // 0x230
	char bOutputToBusOnly : 1; // 0x234
	USoundAttenuation* AttenuationSettings; // 0x238
	FSoundAttenuationSettings AttenuationOverrides; // 0x240
	USoundConcurrency* ConcurrencySettings; // 0x5e0
	TSet<USoundConcurrency*> ConcurrencySet; // 0x5e8
	USoundClass* SoundClass; // 0x638
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x640
	USoundSubmixBase* SoundSubmix; // 0x648
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x650
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x660
	FSoundModulation Modulation; // 0x670
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x680
	char bIsUISound : 1; // 0x690
	char bIsPreviewSound : 1; // 0x690
	int32_t EnvelopeFollowerAttackTime; // 0x694
	int32_t EnvelopeFollowerReleaseTime; // 0x698
	FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x6a0
	USynthSound* Synth; // 0x6d0
	UAudioComponent* AudioComponent; // 0x6d8
};

struct UParticleModuleAccelerationDragScaleOverLife {
	UDistributionFloat* DragScale; // 0x40
	FRawDistributionFloat DragScaleRaw; // 0x48
};

struct UGameplayAction_BotFallTraversal {
	UGameplayEvaluatorSet* FilterSet; // 0x210
	bool bDisabled; // 0x218
};

struct UAnimEvalSet_Shared_Traversal_3D_C {
	FGameplayEval_Distance Distance2D NavLinkStartToEnd; // 0xc0
	FGameplayEval_Distance DistanceZ NavLinkStartToEnd; // 0x190
	FGameplayEval_NavArea NavArea; // 0x260
	FGameplayEval_RandomChance RandomChance; // 0x2d0
	FGameplayEval_Distance DistanceToNavLinkStart; // 0x320
};

struct USoundfieldEffectBase {
	USoundfieldEffectSettingsBase* Settings; // 0x30
};

struct ABaseGun_Skeletal_BP_C {
	UStaticMeshComponent* SightMesh_3P; // 0x508
	UStaticMeshComponent* BarrelMesh_3P; // 0x510
	USkeletalMeshComponent* BaseMesh_3P; // 0x518
};

struct UBTService_LifeState {
	FBlackboardKeySelector LifeStateBBKey; // 0x78
	TMap<FGameplayTag, ELifeState> TagToEnumMap; // 0xa0
};

struct UGameplayEffectProjectileThrowComponent {
	FGameplayTag ThrowComponentTag; // 0x240
	TMap<UAnimMontage*, FGamePropertyFloatMod> PlayRateMods; // 0x248
};

struct UGobiSafeZoneSlot {
	FMargin SafeAreaScale; // 0x40
	EHorizontalAlignment HAlign; // 0x50
	EVerticalAlignment VAlign; // 0x51
	FMargin Padding; // 0x54
};

struct UHierarchicalLODSetup {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x30
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x40
};

struct UBTTask_ClearBlackboardKey {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UAISenseConfig_UnWatched {
	UAISense_UnWatched* Implementation; // 0x50
	float WatchedMaxRadius; // 0x58
	float AutoWatchedRadius; // 0x5c
	float GlobalWatchTimeLimitMS; // 0x60
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x64
	char bResetTimerOnLookedAt : 1; // 0x68
	char bResetTimerOnTrigger : 1; // 0x68
};

struct UGameplayEffectDrench {
	bool bDisableDrenchComponent; // 0x238
	FGameplayTag DrenchTag; // 0x23c
	EDrenchDistanceMode DistanceMode; // 0x244
	bool bChainEffect; // 0x245
	TArray<FDrenchStrengthSettings> StrengthSettings; // 0x248
};

struct UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UAnimNotify_Ragdoll {
	FName BoneName; // 0x40
	FName CollisionProfileToSet; // 0x48
};

struct UInteractiveCarSpawner {
	TMap<TSoftClassPtr<UObject>, EInteractiveCarType> ClassTypes; // 0xe8
	TArray<UObject*> PrecachedClasses; // 0x138
	AActor* SpawnedCar; // 0x148
};

struct UAISense_Blueprint {
	UUserDefinedStruct* ListenerDataType; // 0x88
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x90
	TArray<UAISenseEvent*> UnprocessedEvents; // 0xa0
};

struct UARBasicLightEstimate {
	float AmbientIntensityLumens; // 0x30
	float AmbientColorTemperatureKelvin; // 0x34
	FLinearColor AmbientColor; // 0x38
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x30
};

struct UAISenseConfig_Omnipotence {
	UAISense_Omnipotence* Implementation; // 0x50
	float OmniRadius; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct UAssetLoaderComponent {
	TArray<UAssetTable*> AssetLists; // 0xe8
};

struct UCameraModifier {
	char bDebug : 1; // 0x30
	char bExclusive : 1; // 0x30
	char Priority; // 0x34
	APlayerCameraManager* CameraOwner; // 0x38
	float AlphaInTime; // 0x40
	float AlphaOutTime; // 0x44
	float Alpha; // 0x48
};

struct UChatScreen {
	FMulticastInlineDelegate OnScreenNewStatusChanged; // 0x558
	TMap<TSoftClassPtr<UObject>, FVector2D> ScreensToVoipOverlayPosition; // 0x568
	FVector2D DefaulVoipOverlayPos; // 0x5b8
	FMulticastInlineDelegate OnChatOpened; // 0x5c0
};

struct UItemSlotUserWidget {
	bool bSmallIcon; // 0x458
};

struct UParticleModulePivotOffset {
	FVector2D PivotOffset; // 0x38
};

struct UOptionsColorComboBoxWidget {
	TArray<FLinearColor> ComboOptions; // 0x480
};

struct UPlayerNameUserWidget {
	int32_t TruncateWidth; // 0x478
	bool bShowPlatformIcon; // 0x47c
	FPartyPlayer Player; // 0x480
};

struct UZombieFacialAnimationComponent {
	FName CurveSourceBindingName; // 0xf0
	float ExpressionBlendTime; // 0xf8
	float MinDamageForPainExpression; // 0xfc
	float PainExpressionTime; // 0x100
	UZombieFacialAnimationData* ZombieFacialAnimationData; // 0x108
};

struct UMovieSceneVectorSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UMaterialExpressionTextureBase {
	UTexture* Texture; // 0x48
	EMaterialSamplerType SamplerType; // 0x50
	char IsDefaultMeshpaintTexture : 1; // 0x51
};

struct UCineCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x810
	FCameraFilmbackSettings Filmback; // 0x81c
	FCameraLensSettings LensSettings; // 0x828
	FCameraFocusSettings FocusSettings; // 0x840
	float CurrentFocalLength; // 0x898
	float CurrentAperture; // 0x89c
	float CurrentFocusDistance; // 0x8a0
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x8b0
	TArray<FNamedLensPreset> LensPresets; // 0x8c0
	FString DefaultFilmbackPresetName; // 0x8d0
	FString DefaultFilmbackPreset; // 0x8e0
	FString DefaultLensPresetName; // 0x8f0
	float DefaultLensFocalLength; // 0x900
	float DefaultLensFStop; // 0x904
};

struct USignInTask_HydraAuth {
	USignInTask_HydraAllowList* HydraAllowListTask; // 0x88
};

struct USourceEffectFilterPreset {
	FSourceEffectFilterSettings Settings; // 0x7c
};

struct UTestAnimInstance {
	TWeakObjectPtr<AHeroCharacter> TargetCharacter; // 0x7c0
};

struct AAmbientSound {
	UAudioComponent* AudioComponent; // 0x2a0
};

struct ALevelScriptActor {
	char bInputEnabled : 1; // 0x2a0
};

struct UParticleModuleLifetime_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UP1AccountButtonUserWidget {
	int32_t AccountNameTruncateWidth; // 0x458
	TSoftClassPtr<UObject> P1IconWidgetClass; // 0x498
	TSoftClassPtr<UObject> P1SignInScreenClass; // 0x4c0
};

struct UUISpeakerTest {
	UAkAudioBank* Bank; // 0x30
	UAkAudioEvent* FrontLeftEvent; // 0x38
	UAkAudioEvent* FrontCenterEvent; // 0x40
	UAkAudioEvent* FrontRightEvent; // 0x48
	UAkAudioEvent* SideLeftEvent; // 0x50
	UAkAudioEvent* SideRightEvent; // 0x58
	UAkAudioEvent* BackLeftEvent; // 0x60
	UAkAudioEvent* BackRightEvent; // 0x68
	UAkAudioEvent* LFEEvent; // 0x70
	UAkAudioEvent* StopEvent; // 0x78
	FMulticastInlineDelegate OnSpeakerTestStateChanged; // 0x80
};

struct UPersonalEventTrigger {
	EEventTriggerPolicy Policy; // 0x30
};

struct ULightPropagationVolumeBlendable {
	FLightPropagationVolumeSettings Settings; // 0x38
	float BlendWeight; // 0x78
};

struct UNiagaraDataInterfaceVectorField {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UChaosGameplayEventDispatcher {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x200
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x250
};

struct UBTService_RegisterAttackAttempt {
	ETimeframe Timeframe; // 0x78
	FBlackboardKeySelector EnemyBBKey; // 0x80
};

struct ASwitchActor {
	USceneComponent* SceneComponent; // 0x2b8
	int32_t LastSelectedOption; // 0x2c0
};

struct AAkAmbientSound {
	UAkComponent* AkComponent; // 0x2a0
	bool StopWhenOwnerIsDestroyed; // 0x2a8
	bool AutoPost; // 0x2a9
};

struct UDatasmithFBXSceneImportData {
	bool bGenerateLightmapUVs; // 0x30
	FString TexturesDir; // 0x38
	char IntermediateSerialization; // 0x48
	bool bColorizeMaterials; // 0x49
};

struct UAnimSequenceBase {
	TArray<FAnimNotifyEvent> Notifies; // 0x88
	float SequenceLength; // 0x98
	float RateScale; // 0x9c
	FRawCurveTracks RawCurveData; // 0xa0
	float AbsoluteRootMotionTranslationDistance; // 0xb0
	float AbsoluteRootMotionTranslationDistance2D; // 0xb4
	float RootMotionSpeed; // 0xb8
	float RootMotionSpeed2D; // 0xbc
};

struct UPlayerStatsComponent {
	TArray<UStatTrackerBase*> StatTrackers; // 0x100
	TArray<UStatTrackerBase*> StatTrackerClasses; // 0x110
	AController* OwningController; // 0x120
	UGobiPlayerProfileComponent* PlayerProfileComponent; // 0x128
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
	FKey ConsoleKey; // 0xd0
	TArray<FKey> ConsoleKeys; // 0xe8
};

struct UItemSpawningAnalyticsComponent {
	AGameplayAnalyticsManager* AnalyticsManager; // 0x138
};

struct UMaterialExpressionLandscapeLayerBlend {
	TArray<FLayerBlendInput> Layers; // 0x48
	FGuid ExpressionGUID; // 0x58
};

struct UMovieSceneByteTrack {
	UEnum* Enum; // 0x90
};

struct UDialoguePlayback {
	TArray<UWorldDialogueTrigger*> DialogueTriggers; // 0x380
	float AttenuationAdjustment; // 0x390
	TArray<UWorldDialogueTrigger*> ActiveTriggers; // 0x398
	UDialogueLedger* DialogueLedger; // 0x3a8
	float AfterConvoDelayTime; // 0x3b4
};

struct APlayerSpawnManagerDebugger {
	FPlayerDebugInfo FurthestAlongDebugInfo; // 0x2a0
	TArray<FPlayerDebugInfo> DeadPlayerDebugInfo; // 0x2b8
	float RequiredGoldenPathDelta; // 0x2c8
};

struct UBTService_Damage {
	FBlackboardKeySelector DamageCounterBBKey; // 0x78
	FGameplayTagContainer DamageTags; // 0xa0
	EGameplayTagContainerMatchType DamageTagMatchType; // 0xc0
};

struct UBirdsWarningLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
};

struct UEnvQueryTest_PlayerSpawnInfluence {
	float DefaultScore; // 0x208
};

struct UGameplayEffectAccumStumble {
	float StumbleAmount; // 0x238
};

struct AGobiPlayerStart {
	FDataTableRowHandle MissionHandle; // 0x2d0
};

struct UAnimationDataSourceRegistry {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x30
};

struct UHubHeaderEntryUserWidget {
	TArray<FDataTableRowHandle> TrackedObjectives; // 0x458
};

struct UGameplayEvalSet_BotSharedTraversal2D_C {
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0x78
	FGameplayEval_IsAvatarFacing IsAvatarFacing; // 0xc0
	FGameplayEval_Distance Distance2D NavLinkStartToEnd; // 0x118
	FGameplayEval_NavArea NavArea; // 0x1e8
	FGameplayEval_Distance DistanceToNavLinkStart; // 0x258
};

struct UAISpawnCard {
	bool bShouldLogOnSuccess; // 0x30
	bool bLimitOnePerDeck; // 0x31
	UAISpawnConditionEvaluatorSet* GenerationConditionEvalSet; // 0x38
	UAISpawnConditionEvaluatorSet* ConditionEvalSet; // 0x40
	UAISpawnConditionEvaluatorSet* SpawnerPlacementConditionEvalSet; // 0x48
	TArray<FAIPopulation> Populations; // 0x50
	int32_t TotalAICount; // 0x60
	bool bHasWakingPopulation; // 0x64
	bool bShouldSpawnEarly; // 0x65
	FGameplayTagContainer TagsToApplyToAllPopulations; // 0x68
	FGameplayTagContainer CardTags; // 0x88
	bool bShouldExhaust; // 0xa8
	USpawningEQSData* SpawningData; // 0xb0
	bool bAllowSpawnEQSToBeOverridden; // 0xb8
	AAISpawnActor* AISpawnerClass; // 0xc0
	FGameplayTagContainer DespawnerTags; // 0xc8
	FGameplayTagContainer AISpawnerTags; // 0xe8
	int32_t InitialWanderDistanceBucketsToSkip; // 0x108
	bool bPlaceOnWalls; // 0x10c
	FVector2D WallSpawnHeight; // 0x110
	float SpawnRadiusOverride; // 0x118
	float SelfSpawnRadiusOverride; // 0x11c
	float SpawnHalfHeightOverride; // 0x120
	bool bLimitOneSpawnerPerActorSpawnData; // 0x124
	bool bOnRecycleEnableSpawners; // 0x125
	bool bOnSpawnDisableAllSpawners; // 0x126
	FVector2D EnableSpawnerStartDistancePercentage; // 0x128
	bool bIgnoreMaxAILimit; // 0x130
	bool bUseDesiredGoldenPathDistanceDeltaFromHeroes; // 0x131
	FVector2D DesiredGoldenPathDistanceFromHeroes; // 0x134
	bool bGuaranteeSpawnAtPreplacedSpawner; // 0x13c
	bool bDisableFleeAtLastPreplacedSpawner; // 0x13d
	bool bHighPriority; // 0x13e
	bool bForceSpawnUnseeable; // 0x13f
	bool bApplyExitPlayCooldownsOnSafeRoomExit; // 0x140
	TArray<char> ForceSpawnAtBuckets; // 0x148
	bool bPreferTestActors; // 0x158
	bool bDiscardForHighSpawnHeat; // 0x159
	FName DesiredGoldenPathDistanceDeltaName; // 0x15c
	bool bEnterPlayCooldownOffsetSet; // 0x164
	float EnterPlayCooldownOffset; // 0x168
	bool bExitPlayCooldownOffsetSet; // 0x16c
	float ExitPlayCooldownOffset; // 0x170
	float RotatingCooldownPhase; // 0x174
};

struct UBirdsAlertedGameCoachLesson {
	float BirdTeachDuration; // 0x460
};

struct ABaseProjectile {
	UProjectileMovementComponent* ProjectileMovement; // 0x490
	UParticleSystemComponent* ParticleSystem; // 0x498
	UStaticMeshComponent* StaticMeshComponent; // 0x4a0
	float MaxLifetime; // 0x4a8
	float MinDotFromInstigatorCheck; // 0x4ac
	bool bRequiresClearTraceCheck; // 0x4b0
	bool bRequiresClientCollision; // 0x4b1
	ECollisionChannel ClearTraceChannel; // 0x4b2
	FGameplayTag InterpComponentGameplayTag; // 0x4b4
	FMulticastInlineDelegate OnProjectileImpact; // 0x4c0
	uint16_t ProjectileImpactBehavior; // 0x4d0
	FGameplayTagQuery ApplyImpactBehaviorToOverlappingActors; // 0x4d8
	float HitDestroyDelay; // 0x520
	float StayHiddenDuration; // 0x524
	float DeathDestroyDelay; // 0x528
	bool bWaterDeepDestroys; // 0x52c
	float WaterDeepDepth; // 0x530
	FGameplayTag CollisionComponentGameplayTag; // 0x538
	TSet<AActor*> ActorsHit; // 0x550
	FGameplayCueHandle ImpactCueHandle; // 0x5a0
	FGameplayTag ImpactCue; // 0x5b8
	UImpactEffectConfig* ImpactEffectConfig; // 0x5c0
	bool bSpawnImpactDeferred; // 0x5c8
	UAkAudioEvent* ImpactAudioEvent; // 0x5d0
	bool bAlsoImpactGroundIfImpactedCharacter; // 0x5d8
	float GroundTraceDownDistance; // 0x5dc
	UAkAudioEvent* TravelLoopAudioEvent; // 0x5e0
	UAkAudioEvent* TravelLoopStopAudioEvent; // 0x5e8
	bool bApplyDamage; // 0x5f8
	float DamageAmount; // 0x5fc
	UGobiDamageType* DamageType; // 0x600
	bool bIgnoreIncapHeroImpacts; // 0x608
	TArray<FHitResult> ReplicatedImpacts; // 0x618
	UParticleSystem* EmitterOnSpawn; // 0x630
	UParticleSystem* EmitterOnImpact; // 0x640
	bool bImpactEmitterInheritsImpactNormalRotation; // 0x648
	FRotator AdditionalImpactEmitterRotation; // 0x64c
};

struct UGameplayEffectHeroLightComponent {
	FFlashlightViewConfig FirstPersonLightConfig; // 0x240
	FFlashlightViewConfig ThirdPersonLightConfig; // 0x2a0
};

struct UMovieSceneCameraShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x60
};

struct UAnimNotify_AkEvent {
	FName AttachName; // 0x40
	UAkAudioEvent* Event; // 0x48
	bool Follow; // 0x50
	FString EventName; // 0x58
	FVector PositionOffset; // 0x68
	bool Debug; // 0x74
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

struct AImpostorProxySpline {
	USplineComponent* SplineComponent; // 0x2a8
	float MinSpawnDelay; // 0x2b0
	float MaxSpawnDelay; // 0x2b4
	float MovementSpeed; // 0x2b8
};

struct ASafeRoomVendor_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UVendorComponent* Vendor; // 0x2d0
	UItemAudioComponent* ItemAudio; // 0x2d8
	UBoxComponent* UseTriggerVolume; // 0x2e0
	UAnimContextLocatorComponent* AnimContextLocator; // 0x2e8
	UUsableComponent* Usable; // 0x2f0
	UStaticMeshComponent* StaticMesh; // 0x2f8
	USceneComponent* DefaultSceneRoot; // 0x300
};

struct UAudioComponent {
	USoundBase* Sound; // 0x230
	TArray<FAudioComponentParam> InstanceParameters; // 0x238
	USoundClass* SoundClassOverride; // 0x248
	char bAutoDestroy : 1; // 0x250
	char bStopWhenOwnerDestroyed : 1; // 0x250
	char bShouldRemainActiveIfDropped : 1; // 0x250
	char bAllowSpatialization : 1; // 0x250
	char bOverrideAttenuation : 1; // 0x250
	char bOverrideSubtitlePriority : 1; // 0x250
	char bIsUISound : 1; // 0x250
	char bEnableLowPassFilter : 1; // 0x250
	char bOverridePriority : 1; // 0x251
	char bSuppressSubtitles : 1; // 0x251
	char bAutoManageAttachment : 1; // 0x252
	FName AudioComponentUserID; // 0x258
	float PitchModulationMin; // 0x260
	float PitchModulationMax; // 0x264
	float VolumeModulationMin; // 0x268
	float VolumeModulationMax; // 0x26c
	float VolumeMultiplier; // 0x270
	int32_t EnvelopeFollowerAttackTime; // 0x274
	int32_t EnvelopeFollowerReleaseTime; // 0x278
	float Priority; // 0x27c
	float SubtitlePriority; // 0x280
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x288
	float PitchMultiplier; // 0x290
	float LowPassFilterFrequency; // 0x294
	USoundAttenuation* AttenuationSettings; // 0x2a0
	FSoundAttenuationSettings AttenuationOverrides; // 0x2a8
	USoundConcurrency* ConcurrencySettings; // 0x648
	TSet<USoundConcurrency*> ConcurrencySet; // 0x650
	EAttachmentRule AutoAttachLocationRule; // 0x6ac
	EAttachmentRule AutoAttachRotationRule; // 0x6ad
	EAttachmentRule AutoAttachScaleRule; // 0x6ae
	FMulticastInlineDelegate OnAudioFinished; // 0x6b0
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x6d8
	FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x700
	FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x728
	FSoundModulation Modulation; // 0x750
	FDelegate OnQueueSubtitles; // 0x760
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x770
	FName AutoAttachSocketName; // 0x778
};

struct UGameplayEffectStumbleComponent {
	TMap<UAnimMontage*, FGamePropertyFloatMod> PlayRateMods; // 0x240
};

struct UMainMenuScreen {
	FMulticastInlineDelegate OnReturnToSignIn; // 0x558
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

struct AHeroGameMode {
	FName SpawnTagOverride; // 0x488
	float PostMatchWaitDuration; // 0x490
	float TransitionWaitDuration; // 0x494
	FName DefaultSpawnTag; // 0x4dc
	FGameplayTagQuery ExcludeCharactersFromGameDirectorSpawning; // 0x4e8
};

struct UDatasmithPostProcessVolumeTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x40
	char bEnabled : 1; // 0x80
	char bUnbound : 1; // 0x80
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
	FMulticastInlineDelegate OnMontageStarted; // 0x80
	FMulticastInlineDelegate OnMontageEnded; // 0x90
	FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0xa0
	FAnimNotifyQueue NotifyQueue; // 0x140
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x1c0
	UDebugTabControl* TabControl; // 0x1d0
};

struct UUIDeveloperSettings {
	TSoftObjectPtr<UUIDataSet> DataSet; // 0x40
	TArray<TSoftClassPtr<UObject>> ScreenClasses; // 0x68
	TArray<FSoftObjectPath> AppLaunchScreenClasses; // 0x78
	TSoftClassPtr<UObject> MutationScreenClass; // 0x88
	FIntPoint StandardScreenResolution; // 0xb0
	float SafeZoneStepSize; // 0xb8
	float SafeZoneMinValue; // 0xbc
	TSoftObjectPtr<UWaypointDataSet> WaypointDataSet; // 0xc0
	TSoftClassPtr<UObject> PingWaypointClass; // 0xe8
	TSoftClassPtr<UObject> DefaultWaypointClass; // 0x110
	float PingLifetime; // 0x138
	float ItemPingLifetime; // 0x13c
	float PingDistance; // 0x140
	float PingHeightOffset; // 0x144
	int32_t PerPlayerPingLimit; // 0x148
	FVector2D PingOldNewScaleRange; // 0x14c
	FMargin WaypointBounds; // 0x154
	float AnalogBindThreshold; // 0x164
	float GamepadChatDoubleClickTime; // 0x168
	float GamepadAxisThreshold; // 0x16c
	FSlateFontInfo CalloutTextFont; // 0x170
	FSlateFontInfo CalloutSingleCharTextFont; // 0x1d0
	FMargin CalloutTextPadding; // 0x230
	FSlateColor CalloutTextColor; // 0x240
	int32_t CalloutIconHeight; // 0x270
	int32_t CalloutIconTextWidth; // 0x274
	FVector2D ItemToolTipOffset; // 0x278
	TSoftClassPtr<UObject> ItemPickupTooltipClass; // 0x280
	float ItemObservationDistance; // 0x2a8
	float ItemObservationSphereRadius; // 0x2ac
	float ItemPickupTooltipOffset; // 0x2b0
	FMargin ItemPickupTooltipBounds; // 0x2b4
	float ItemPickupUseDuration; // 0x2c4
	int32_t NumAmmoToDrop; // 0x2c8
	int32_t NumCurrencyToDrop; // 0x2cc
	FRotator ItemDropRandomRotationMin; // 0x2d0
	TArray<EItemAttributeType> ItemAttributeSortOrder; // 0x2e0
	TMap<EItemAttributeType, EItemAttributeDisplayType> ItemAttributeDisplayTypes; // 0x2f0
	FSlateColor PositiveAttributeColor; // 0x340
	FSlateColor NegativeAttributeColor; // 0x370
	FRotator ItemDropRandomRotationMax; // 0x3a0
	TSoftClassPtr<UObject> DefaultMessageCountdownPopupClass; // 0x3b0
	TSoftClassPtr<UObject> DefaultMessageThrobberPopupClass; // 0x3d8
	TSoftClassPtr<UObject> DefaultMessagePopupClass; // 0x400
	TSoftClassPtr<UObject> CalloutTooltipClass; // 0x428
	TSoftClassPtr<UObject> CardTooltipClass; // 0x450
	TSoftClassPtr<UObject> TutorialPopupClass; // 0x478
	TSoftClassPtr<UObject> MOTDPopupClass; // 0x4a0
	TSoftClassPtr<UObject> PasswordPopupClass; // 0x4c8
	TSoftClassPtr<UObject> LicensePopupClass; // 0x4f0
	TSoftClassPtr<UObject> StartupOptionsPopupClass; // 0x518
	TSoftClassPtr<UObject> NameChangerPopupClass; // 0x540
	TSoftClassPtr<UObject> SignInPopupClass; // 0x568
	TSoftClassPtr<UObject> ReportPlayerPopupClass; // 0x590
	TSoftClassPtr<UObject> SurveyPopupClass; // 0x5b8
	TSoftClassPtr<UObject> PartyCrossplayErrorPopupClass; // 0x5e0
	int32_t TooltipZOrder; // 0x608
	int32_t DifficultyPopupTimesToShow; // 0x60c
	float InvitePromptDuration; // 0x610
	float ZombieStuckRespawnDuration; // 0x614
	TSoftObjectPtr<UCommWheelActionsData> CommWheelActionsDataSet; // 0x618
	float CommWheelHoldDuration; // 0x640
	float CommWheelPingLifetime; // 0x644
	float CommWheelAnalogSelectionThreshold; // 0x648
	float CommWheelMouseSelectionThreshold; // 0x64c
	float CommWheelAnalogLockThreshold; // 0x650
	float ScrollSpeed; // 0x654
	float ListViewScrollSpeed; // 0x658
	TMap<EGameplayCardAffinity, FText> CardAffinitiesToNames; // 0x660
	TMap<EGameplayCardAffinity, FSlateColor> CardAffinitiesToColors; // 0x6b0
	TMap<EItemCategory, FText> ItemCategoriesToNames; // 0x700
	TSoftClassPtr<UObject> TestAchievementClass; // 0x750
	int32_t LowClickThreshold; // 0x778
	int32_t ClickThreshold; // 0x77c
	int32_t BeepThreshold; // 0x780
	int32_t ChatMessageCacheSize; // 0x784
	TSoftObjectPtr<UWorld> PreRoundCharacterSelectLevel; // 0x788
	TSoftObjectPtr<UWorld> PostRoundCharacterSelectLevel; // 0x7b0
	float SplashFailureDuration; // 0x7d8
	float DefaultPostroundPanelDuration; // 0x7dc
	TMap<EPostRoundPanel, float> PostroundPanelDurations; // 0x7e0
	TSoftClassPtr<UObject> PlayerSprayActor; // 0x830
	FSprayData DefaultUserSpray; // 0x858
	TSoftObjectPtr<UDataTable> UnockableSpraysTable; // 0x868
	float SprayDistance; // 0x890
	FBadgeData DefaultUserBadge; // 0x894
	TSoftObjectPtr<UDataTable> UnlockableTitlesTable; // 0x8a0
	TSoftObjectPtr<UDataTable> UnlockableEmblemsTable; // 0x8c8
	TSoftObjectPtr<UDataTable> UnlockableBannersTable; // 0x8f0
	int32_t MaxUserSprays; // 0x918
	TSoftObjectPtr<UDataTable> MixProfileTable; // 0x920
	TSoftObjectPtr<UDataTable> MOTDTable; // 0x948
	float MediumDamageThreshold; // 0x970
	float LargeDamageThreshold; // 0x974
	char MaxDamageIndicators; // 0x978
	TArray<EDamageContext> HitMarkerContextPriority; // 0x980
	float LateJoinerCinematicThreshold; // 0x990
	FSlateColor SelectedPipOnColor; // 0x998
	FSlateColor SelectedPipOffColor; // 0x9c8
	TArray<FDataTableRowHandle> TutorialMaps; // 0x9f8
	EMissionDifficulty DefaultDifficulty; // 0xa08
};

struct UEnvQueryTest_Distance {
	EEnvTestDistance TestMode; // 0x208
	UEnvQueryContext* DistanceTo; // 0x210
};

struct UMaterialExpressionArccosine {
	FExpressionInput Input; // 0x48
};

struct UMaterialExpressionFresnel {
	FExpressionInput ExponentIn; // 0x48
	float Exponent; // 0x5c
	FExpressionInput BaseReflectFractionIn; // 0x60
	float BaseReflectFraction; // 0x74
	FExpressionInput Normal; // 0x78
};

struct UGameplayEffectLifeStateIncap {
	FGamePropertyIntMod MaxIncapCountMod; // 0x270
};

struct UNPCComponent {
	float MaxHeroFocusDistance; // 0xe8
	float FocusTrackingUpdateRate; // 0xf0
	AGobiCharacter* NPCOwner; // 0xf8
	bool bCanFocusEnable; // 0x119
};

struct ADialogueSystemDebugger {
	TArray<FName> RegisteredSpeakers; // 0x2a8
	TArray<FDialogueActiveSpeechDebugInfo> ActiveSpeech; // 0x2b8
	TArray<FQueuedEventDebugInfo> QueuedEvents; // 0x2c8
	TArray<FDialogueRecordDebugInfo> FullHistory; // 0x2d8
};

struct USlateSettings {
	bool bExplicitCanvasChildZOrder; // 0x30
};

struct UMaterialExpressionPanner {
	FExpressionInput Coordinate; // 0x48
	FExpressionInput Time; // 0x5c
	FExpressionInput Speed; // 0x70
	float SpeedX; // 0x84
	float SpeedY; // 0x88
	uint32_t ConstCoordinate; // 0x8c
	bool bFractionalPart; // 0x90
};

struct UPersonalizationScreen {
	FSprayData SprayData; // 0x558
	FSprayData TempSprayData; // 0x568
};

struct UNavigationDataChunk {
	FName NavigationDataName; // 0x30
};

struct UEnvQueryGenerator_ItemPickups {
	UEnvQueryContext* SearchCenter; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x60
};

struct ARadialForceActor {
	URadialForceComponent* ForceComponent; // 0x2a0
};

struct UAkSettings {
	char MaxSimultaneousReverbVolumes; // 0x30
	FFilePath WwiseProjectPath; // 0x38
	FDirectoryPath WwiseSoundBankFolder; // 0x48
	bool bAutoConnectToWAAPI; // 0x58
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x59
	FNavAgentSelector NavMeshSelector; // 0x5c
	bool bEnableMultiCoreRendering; // 0xb0
	bool MigratedEnableMultiCoreRendering; // 0xb1
	FDirectoryPath WwiseWindowsInstallationPath; // 0xb8
	FFilePath WwiseMacInstallationPath; // 0xc8
	bool bUseHeadphoneStateGroup; // 0xd8
	FString HeadphoneStateGroupName; // 0xe0
	FString PluggedInStateName; // 0xf0
	FString UnpluggedStateName; // 0x100
	bool bUsePlatformEQStateGroup; // 0x110
	FString PlatformEQStateGroupName; // 0x118
	FString AndroidEQStateName; // 0x128
	FString OculusGoEQStateName; // 0x138
	FString OculusSantaCruzEQStateName; // 0x148
	FString WindowsEQStateName; // 0x158
	bool bLinkDialogueLanguageToTextCulture; // 0x168
	TMap<FString, FString> CultureToWwiseLanguageDirectory; // 0x170
	bool bUseDistanceTickOptimizations; // 0x1c0
	float AlwaysTickDistance; // 0x1c4
	float SlowTickDistance; // 0x1c8
	float TargetTickInterval; // 0x1cc
	float SlowTickMaxInterval; // 0x1d0
	bool bStopTickingInactiveComponents; // 0x1d4
	bool bUsingVelocitySensitiveTicking; // 0x1d5
	float AngleGranularity; // 0x1d8
	float RadiusRatio; // 0x1dc
	FString FirstPersonRTPCName; // 0x1e0
	bool bUsingSoundBankCachingSystem; // 0x1f0
	bool bEnableAmbientSoundManagement; // 0x1f1
	double CacheManagerThrashingTimestep; // 0x1f8
	float ExtraDistancePadding; // 0x200
	bool bEnableAcousticPortalManagement; // 0x204
	float AcousticPortalMaxAudibleDistance; // 0x208
	float ManagerUpdateRate; // 0x20c
	float ActivePortalTickRate; // 0x210
	UTRSListenerManager* ListenerManagerClass; // 0x218
	TArray<TSoftObjectPtr<UAkAudioBank>> InitializationBanks; // 0x220
	FString ImportToolDestinationFolderName; // 0x230
	FString DLCPrefix; // 0x240
	TSet<FString> AdditionalAudioDirectories; // 0x250
};

struct UDataTable {
	UScriptStruct* RowStruct; // 0x30
	char bStripFromClientBuilds : 1; // 0x88
	char bIgnoreExtraFields : 1; // 0x88
	char bIgnoreMissingFields : 1; // 0x88
	FString ImportKeyField; // 0x90
};

struct UConnectionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UGobiMusicSubsystem {
	UGobiMusicSystem* MusicSystem; // 0x38
};

struct UAsyncActionLoadPrimaryAsset {
	FMulticastInlineDelegate Completed; // 0x80
};

struct UModularSynthComponent {
	int32_t VoiceCount; // 0x710
};

struct UCameraComponent {
	float FieldOfView; // 0x230
	float OrthoWidth; // 0x234
	float OrthoNearClipPlane; // 0x238
	float OrthoFarClipPlane; // 0x23c
	float AspectRatio; // 0x240
	char bConstrainAspectRatio : 1; // 0x244
	char bUseFieldOfViewForLOD : 1; // 0x244
	char bLockToHmd : 1; // 0x244
	char bUsePawnControlRotation : 1; // 0x244
	char bUsePawnControlRotationAsRelativeRotation : 1; // 0x248
	ECameraProjectionMode ProjectionMode; // 0x24d
	float PostProcessBlendWeight; // 0x280
	FPostProcessSettings PostProcessSettings; // 0x2b0
};

struct UAnimEvalSet_Medium_Damage_DeathReaction_C {
	FGameplayEval_DamageAmount DamageAmountComparison; // 0xc0
	FGameplayEval_DamageRange DamageAmountRange; // 0x158
	FGameplayEval_DamageType DamageType; // 0x220
	FGameplayEval_HitReactionBone DamageBone; // 0x2e0
	FGameplayEval_Distance DistanceToDamageSource; // 0x390
	FGameplayEval_Health AvatarHealth; // 0x460
	FGameplayEval_GameplayTags AvatarTags; // 0x4b8
	FGameplayEval_SpeedRange AvatarSpeed; // 0x550
};

struct USystemTimeTimecodeProvider {
	FFrameRate FrameRate; // 0x38
	bool bGenerateFullFrame; // 0x40
	bool bUseHighPerformanceClock; // 0x41
};

struct UMeshApplicationTrait {
	TArray<FSkeletalMeshConfig> SkeletalMeshConfigs; // 0x30
	TArray<FStaticMeshConfig> StaticMeshConfigs; // 0x40
};

struct USubmixEffectDynamicsProcessorPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xc0
};

struct UDistributionFloatConstantCurve {
	FInterpCurveFloat ConstantCurve; // 0x40
};

struct UEnvQueryTest_Volume {
	UEnvQueryContext* VolumeContext; // 0x208
	AVolume* VolumeClass; // 0x210
	char bDoComplexVolumeTest : 1; // 0x218
};

struct UBurstAttackComponent {
	FMulticastInlineDelegate OnBurstEnded; // 0x1e0
	FBurstMoveTickData MoveTickData; // 0x1f0
	bool bCanBurstOffLedges; // 0x2b2
	bool bCanWalkOffLedgesDuringBurstEnd; // 0x2b3
	bool bSqueezeAttack; // 0x2b4
	bool bMeleeAttack; // 0x2b5
	bool bSecondaryButtonCancelsBurst; // 0x2b6
	FGameplayTag MeleeAttackComponentTag; // 0x2b8
	FName BurstCollisionProfileName; // 0x2c0
	FName BurstMontagesName; // 0x2c8
	FName RotationRateClampName; // 0x2d0
	TArray<UAnimMontage*> BurstMontages; // 0x2d8
	TArray<UAnimMontage*> BurstTraversalMontages; // 0x2e8
	TArray<UAnimMontage*> BurstStopMontages; // 0x2f8
	FGameplayTagContainer AppliedTags; // 0x308
	FGameplayTagQuery BlockingTags; // 0x328
	FGameplayTagContainer CancelTags; // 0x370
	FGameplayTag BurstCollisionStumbleTag; // 0x390
	TArray<UGameplayEffect*> BurstCollisionStumbleEffects; // 0x398
	bool bUsesTuningData; // 0x3a8
	FBurstAttackTuning BurstAttackTuning; // 0x3ac
};

struct UAkSurfaceReflectorSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x230
	TArray<FAkPoly> AcousticPolys; // 0x238
	char bEnableDiffraction : 1; // 0x248
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x248
	AActor* AssociatedRoom; // 0x250
};

struct UMovieSceneEnumTrack {
	UEnum* Enum; // 0x90
};

struct UMaterialExpressionLinearInterpolate {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	FExpressionInput Alpha; // 0x70
	float ConstA; // 0x84
	float ConstB; // 0x88
	float ConstAlpha; // 0x8c
};

struct UTextureLightProfile {
	float Brightness; // 0xf0
	float TextureMultiplier; // 0xf4
};

struct ACameraActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x2a0
	UCameraComponent* CameraComponent; // 0x2a8
	USceneComponent* SceneComponent; // 0x2b0
	char bConstrainAspectRatio : 1; // 0x2c0
	float AspectRatio; // 0x2c4
	float FOVAngle; // 0x2c8
	float PostProcessBlendWeight; // 0x2cc
	FPostProcessSettings PostProcessSettings; // 0x2d0
};

struct UInterpTrackInstFloatMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x30
	TArray<float> ResetFloats; // 0x40
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x50
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x60
};

struct UGamepadConfigPanelUserWidget {
	bool bIsZombieMode; // 0x4c8
	bool bCustomBindingsShowing; // 0x4c9
	FMulticastInlineDelegate OnButtonConfigPreviewed; // 0x4d0
	TArray<FGamepadConfigButtonData> GamepadHumanButtons; // 0x4e0
	TArray<FGamepadConfigButtonData> GamepadZombieButtons; // 0x4f0
};

struct UAIPerceptionStimuliSourceComponent {
	char bAutoRegisterAsSource : 1; // 0xe8
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xf0
};

struct UNiagaraDataInterfaceGrid3D {
	FIntVector NumVoxels; // 0xd8
	float VoxelSize; // 0xe4
	bool SetGridFromVoxelSize; // 0xe8
	FVector WorldBBoxSize; // 0xec
};

struct UAnimContext_Facing {
	UAnimContext_Transform* Facing; // 0x60
	UAnimContext_Transform* TargetPos; // 0x68
};

struct UEnvQueryGenerator_Donut {
	FAIDataProviderFloatValue InnerRadius; // 0x88
	FAIDataProviderFloatValue OuterRadius; // 0xc0
	FAIDataProviderIntValue NumberOfRings; // 0xf8
	FAIDataProviderIntValue PointsPerRing; // 0x130
	FEnvDirection ArcDirection; // 0x168
	FAIDataProviderFloatValue ArcAngle; // 0x188
	bool bUseSpiralPattern; // 0x1c0
	UEnvQueryContext* Center; // 0x1c8
	char bDefineArc : 1; // 0x1d0
};

struct UPartyGroupsTab_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458
	UVerticalBox* PlayerLeftStack; // 0x460
	TArray<FPartyPlayer> GroupPlayers; // 0x468
	TArray<FPartyPlayer> EnemyPlayers; // 0x478
	int32_t MaxLeftPlayersForMode; // 0x488
	int32_t EditorEmptyPlayerCount; // 0x48c
	int32_t AvailableInviteSlots; // 0x490
};

struct UNiagaraEffectType {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x30
	ENiagaraCullReaction CullReaction; // 0x34
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct UGenCondition_ScenarioCausedInterruption_C {
	FAISpawnEval_ScenarioCausedInterruption ScenarioInterruption; // 0x78
};

struct UTitanStage1Component {
	FMulticastInlineDelegate OnTitanPainRoarStart; // 0xf0
	ETitanStage1State State; // 0x100
	float MaxAttackRange; // 0x104
	bool bAutoAttackOnBegin; // 0x108
	FTitanStage1Tuning TitanStage1Tuning; // 0x110
	int8_t NumEmergeAnimSequences; // 0x150
	int8_t NumRetractAnimSequences; // 0x151
	TArray<AActor*> OptionalTentacleActorReferences; // 0x198
	TArray<UTitanStage1TentacleComponent*> TentacleComponents; // 0x1a8
};

struct UAssetTable {
	FString DebugName; // 0x38
	TArray<FSoftObjectPath> Assets; // 0x48
	TArray<UAkAudioBank*> SoundBanks; // 0x58
};

struct UCardDragPayload {
	FDataTableRowHandle CardRowHandle; // 0x30
};

struct UEnvQueryTest_IsPerceived {
	float MaxStimulusAge; // 0x208
};

struct USkeletalMeshSocket {
	FName SocketName; // 0x30
	FName BoneName; // 0x38
	FVector RelativeLocation; // 0x40
	FRotator RelativeRotation; // 0x4c
	FVector RelativeScale; // 0x58
	bool bForceAlwaysAnimated; // 0x64
};

struct UPopupManager {
	FMulticastInlineDelegate OnPopupOpened; // 0x38
	FMulticastInlineDelegate OnPopupClosed; // 0x48
	TArray<UPopupUserWidget*> PopupQueue; // 0x58
};

struct UAISystem {
	FSoftClassPath PerceptionSystemClassName; // 0x60
	FSoftClassPath HotSpotManagerClassName; // 0x78
	float AcceptanceRadius; // 0x90
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x94
	float PathfollowingNavLinkAcceptanceRadius; // 0x98
	bool bFinishMoveOnGoalOverlap; // 0x9c
	bool bAcceptPartialPaths; // 0x9d
	bool bAllowStrafing; // 0x9e
	bool bEnableBTAITasks; // 0x9f
	bool bAllowControllersAsEQSQuerier; // 0xa0
	bool bEnableDebuggerPlugin; // 0xa1
	bool bForgetStaleActors; // 0xa2
	ECollisionChannel DefaultSightCollisionChannel; // 0xa3
	UBehaviorTreeManager* BehaviorTreeManager; // 0xa8
	UEnvQueryManager* EnvironmentQueryManager; // 0xb0
	UAIPerceptionSystem* PerceptionSystem; // 0xb8
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xc0
	UAIHotSpotManager* HotSpotManager; // 0xd0
	UNavLocalGridManager* NavLocalGrids; // 0xd8
};

struct UMovieSceneCinematicShotSection {
	FString ShotDisplayName; // 0x160
	FText DisplayName; // 0x170
};

struct UMovieSceneSkeletalAnimationTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x60
	bool bUseLegacySectionIndexBlend; // 0x70
};

struct UGameplayAction_BotTraversal {
	TArray<FBotTraversalGroup> TraversalGroups; // 0x210
	UGameplayEvaluatorSet* FilterSet; // 0x220
};

struct AGameModeBase {
	AGameSession* GameSessionClass; // 0x2b0
	AGameStateBase* GameStateClass; // 0x2b8
	APlayerController* PlayerControllerClass; // 0x2c0
	APlayerState* PlayerStateClass; // 0x2c8
	AHUD* HUDClass; // 0x2d0
	APawn* DefaultPawnClass; // 0x2d8
	ASpectatorPawn* SpectatorClass; // 0x2e0
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x2e8
	AServerStatReplicator* ServerStatReplicatorClass; // 0x2f0
	AGameSession* GameSession; // 0x2f8
	AGameStateBase* GameState; // 0x300
	AServerStatReplicator* ServerStatReplicator; // 0x308
	FText DefaultPlayerName; // 0x310
	char bUseSeamlessTravel : 1; // 0x328
	char bStartPlayersAsSpectators : 1; // 0x328
	char bPauseable : 1; // 0x328
};

struct UDialogueVoice {
	EGrammaticalGender Gender; // 0x30
	EGrammaticalNumber Plurality; // 0x31
	FGuid LocalizationGUID; // 0x34
};

struct AGobiTeleportMarker {
	USceneComponent* InternalRootComponent; // 0x2a0
};

struct ULandscapeMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x418
	char bIsLayerThumbnail : 1; // 0x428
	char bDisableTessellation : 1; // 0x428
	char bMobile : 1; // 0x428
	char bEditorToolUsage : 1; // 0x428
};

struct UPlayerCutsceneSynchronizationComponent {
	bool bVotingToSkip; // 0xe9
	ECutscenePhase CutscenePhase; // 0xea
};

struct USteeringBehavior_PathFollowing {
	FVector2D MaxTurnAngleRange; // 0x58
	bool bMaxTurnAngleRelativeToOwnerFacing; // 0x60
	float MaxRotationRateWhenStationary; // 0x64
	float SlowdownDistance; // 0x68
	UAnimContext_Rotation* SpeedAdjustmentContext; // 0x70
	float MaxAngleFromSpeedAdjContext; // 0x78
	bool bUseLookAheadLocation; // 0x7c
	float LookAheadDistance; // 0x80
	float LinkFocusDistanceThreshold; // 0x84
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance {
	int32_t LightIndex; // 0x48
	FExpressionInput WorldPosition; // 0x4c
};

struct UParticleModuleLight {
	bool bUseInverseSquaredFalloff; // 0x38
	bool bAffectsTranslucency; // 0x39
	float Hardness; // 0x3c
	float SpecularScale; // 0x40
	bool bPreviewLightRadius; // 0x44
	float SpawnFraction; // 0x48
	FRawDistributionVector ColorScaleOverLife; // 0x50
	FRawDistributionFloat BrightnessOverLife; // 0x98
	FRawDistributionFloat RadiusScale; // 0xc8
	FRawDistributionFloat LightExponent; // 0xf8
	FLightingChannels LightingChannels; // 0x128
	float VolumetricScatteringIntensity; // 0x12c
	bool bHighQualityLights; // 0x130
	bool bShadowCastingLights; // 0x131
};

struct UMaterialExpressionNormalize {
	FExpressionInput VectorInput; // 0x48
};

struct UBehaviorTreeManager {
	int32_t MaxDebuggerSteps; // 0x30
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x38
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x48
};

struct UNiagaraDataInterfaceVectorCurve {
	FRichCurve XCurve; // 0x60
	FRichCurve YCurve; // 0xe0
	FRichCurve ZCurve; // 0x160
};

struct UPVPGameModeSeamessTravelData {
	bool bTeamAHero; // 0x30
};

struct UTutorialTipUserWidget {
	EFTUETutorial Tutorial; // 0x468
	bool bAlwaysShowDuringTutorialLevels; // 0x469
};

struct UBTDecorator_TimeLimit {
	float TimeLimit; // 0x70
};

struct UMaterialExpressionDistanceToNearestSurface {
	FExpressionInput Position; // 0x48
};

struct UARPlaneGeometry {
	EARPlaneOrientation Orientation; // 0xe8
	FVector Center; // 0xec
	FVector Extent; // 0xf8
	UARPlaneGeometry* SubsumedBy; // 0x118
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

struct UParticleModuleColorOverLife {
	FRawDistributionVector ColorOverLife; // 0x38
	FRawDistributionFloat AlphaOverLife; // 0x80
	char bClampAlpha : 1; // 0xb0
};

struct UMovementComponent {
	USceneComponent* UpdatedComponent; // 0xe8
	UPrimitiveComponent* UpdatedPrimitive; // 0xf0
	FVector Velocity; // 0xfc
	FVector PlaneConstraintNormal; // 0x108
	FVector PlaneConstraintOrigin; // 0x114
	char bUpdateOnlyIfRendered : 1; // 0x120
	char bAutoUpdateTickRegistration : 1; // 0x120
	char bTickBeforeOwner : 1; // 0x120
	char bAutoRegisterUpdatedComponent : 1; // 0x120
	char bConstrainToPlane : 1; // 0x120
	char bSnapToPlaneAtStart : 1; // 0x120
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0x120
	char bComponentShouldUpdatePhysicsVolume : 1; // 0x120
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0x123
};

struct UAISpawnDeck {
	TArray<UAISpawnCard*> SpawnCards; // 0x90
	TArray<UAISpawnCard*> PrioritySpawnCards; // 0xa0
	TArray<UAISpawnCard*> ExhaustedCards; // 0xb0
	TArray<FDiscardedCard> DiscardedCards; // 0xc0
	TArray<FDiscardedCard> PriorityDiscardedCards; // 0xd0
	TArray<FCardInPlay> CardsInPlay; // 0xe0
};

struct USkyLightComponent {
	ESkyLightSourceType SourceType; // 0x260
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

struct UBTDecorator_Blackboard {
	int32_t IntValue; // 0x98
	float FloatValue; // 0x9c
	FString StringValue; // 0xa0
	FString CachedDescription; // 0xb0
	char OperationType; // 0xc0
	EBTBlackboardRestart NotifyObserver; // 0xc1
};

struct UPlatformEventsComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xe8
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xf8
};

struct UAssetMappingTable {
	TArray<FAssetMapping> MappedAssets; // 0x30
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

struct UBTService_ActorLocation {
	FBlackboardKeySelector ActorBBKey; // 0x78
	FBlackboardKeySelector LocationBBKey; // 0xa0
};

struct UWeaponCustomizationScreen {
	FDataTableRowHandle CurrentItem; // 0x598
	FDataTableRowHandle InitialEquippedCustomization; // 0x5b8
	FDataTableRowHandle EquippedCustomization; // 0x5d8
	TArray<FDataTableRowHandle> RelatedCustomizationRowHandles; // 0x5f8
	TArray<FDataTableRowHandle> ItemRowHandles; // 0x610
};

struct UAISenseConfig_TRSSight {
	UAISense_TRSSight* Implementation; // 0x50
	float SightRadius; // 0x58
	float AlertSightRadius; // 0x5c
	float LoseSightRadius; // 0x60
	float MinRadius; // 0x64
	float PeripheralVisionAngleDegrees; // 0x68
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x6c
	float AutoSuccessRangeFromLastSeenLocation; // 0x70
	bool bUseAimAssist; // 0x74
};

struct UAnimCompress {
	char bNeedsSkeleton : 1; // 0x40
	AnimationCompressionFormat TranslationCompressionFormat; // 0x44
	AnimationCompressionFormat RotationCompressionFormat; // 0x45
	AnimationCompressionFormat ScaleCompressionFormat; // 0x46
};

struct UGameplayAction_Despawn {
	bool bRecycleOnDespawn; // 0x210
	bool bLeaveDeadBody; // 0x211
	FCollisionProfileName DespawnCollisionProfile; // 0x214
	TArray<UAnimMontage*> PreDespawnMontages; // 0x220
	TArray<UAnimMontage*> DespawnMontages; // 0x230
	float PreDespawnTime; // 0x240
};

struct UEmissiveScalingComponent {
	FName EmissiveScalarParamName; // 0xe8
	FName MaterialSlotName; // 0xf0
	FGameplayTagContainer SkelMeshComponentTags; // 0xf8
};

struct UIncapUsableComponent {
	float DamageForMinProgressLost; // 0x4f8
	float DamageForMaxProgressLost; // 0x4fc
	float MinProgressLostFromDamage; // 0x500
	float MaxProgressLostFromDamage; // 0x504
	FGameplayTagQuery DamageTagsToIgnore; // 0x508
	TArray<UGameplayEffect*> ReviveEffects; // 0x550
};

struct UTargetingReticleComponent {
	FTargetingReticleTuning TuningData; // 0x140
	AGobiReticle* TargetReticleClass; // 0x168
	AGobiReticle* TargetReticleLockedOnClass; // 0x170
	AGobiReticle* TargetReticleGhostClass; // 0x178
	FGameplayTagQuery ShowReticleTagQuery; // 0x180
	FGameplayTagQuery UpdateTargetTagQuery; // 0x1c8
	FGameplayTagQuery ExcludeAngleChecksTagQuery; // 0x210
	FName TargetHitValidationTraceCheckName; // 0x258
	FName CalculateTargetTraceName; // 0x260
	bool bLockOnCharacters; // 0x268
	bool bUseActorLocationForTraceStart; // 0x2c0
};

struct UTumorTossComponent {
	TArray<AActor*> AlternateTargetClasses; // 0x620
	float SweepRadius; // 0x630
	int32_t AvailableAimModes; // 0x634
};

struct AMotDActor {
	FMulticastInlineDelegate OnMessageUpdated; // 0x2a0
	FString MessageURLDev; // 0x2b0
	FString MessageURLShipping; // 0x2c0
	bool bUpdateOnBeginPlay; // 0x2d0
};

struct UAkItemBoolProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x148
	FMulticastInlineDelegate OnPropertyDragged; // 0x158
};

struct ULevelSequenceDirector {
	ULevelSequencePlayer* Player; // 0x30
};

struct UMatchmakingScreen {
	FMulticastInlineDelegate OnModeChanged; // 0x588
	bool bCanMatchmake; // 0x750
};

struct UAnimBlueprint {
	USkeleton* TargetSkeleton; // 0xb0
	TArray<FAnimGroupInfo> Groups; // 0xb8
	bool bUseMultiThreadedAnimationUpdate; // 0xc8
	bool bWarnAboutBlueprintUsage; // 0xc9
};

struct UGameState_PostRoundStickTogetherComponent {
	bool bVotingToStickTogether; // 0x100
	FString UserIdToJoin; // 0x108
};

struct UMaterialExpressionFrac {
	FExpressionInput Input; // 0x48
};

struct UBTDecorator_CheckDifficulty {
	FDifficultyBool IsAllowed; // 0x70
};

struct UNPCMissionComponent {
	UDataTable* NPCMissionDataTable; // 0xe8
	UDataTable* NPCObjectiveDataTable; // 0xf0
};

struct ABrush {
	EBrushType BrushType; // 0x2a0
	FColor BrushColor; // 0x2a4
	int32_t PolyFlags; // 0x2a8
	char bColored : 1; // 0x2ac
	char bSolidWhenSelected : 1; // 0x2ac
	char bPlaceableFromClassBrowser : 1; // 0x2ac
	char bNotForClientOrServer : 1; // 0x2ac
	UModel* Brush; // 0x2b0
	UBrushComponent* BrushComponent; // 0x2b8
	char bInManipulation : 1; // 0x2c0
	TArray<FGeomSelection> SavedSelections; // 0x2c8
};

struct UGameplayEffectKnockback {
	FGameplayEffectKnockbackData Knockback; // 0x238
};

struct USoundNodeModulatorContinuous {
	FModulatorContinuousParams PitchModulationParams; // 0x60
	FModulatorContinuousParams VolumeModulationParams; // 0x80
};

struct UPingableComponent {
	float OffsetHeight; // 0xe8
	FGameplayTag IdentifierTag; // 0xec
	EGobiTeam OwningTeam; // 0xf4
	EPingType Type; // 0xf5
	bool bAutoPosition; // 0xf6
	bool bEnabled; // 0xf7
};

struct UMaterialExpressionStaticComponentMaskParameter {
	FExpressionInput Input; // 0x60
	char DefaultR : 1; // 0x74
	char DefaultG : 1; // 0x74
	char DefaultB : 1; // 0x74
	char DefaultA : 1; // 0x74
};

struct USoundSubmixBase {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x30
};

struct UStreamingSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x40
	char WarnIfTimeLimitExceeded : 1; // 0x40
	float TimeLimitExceededMultiplier; // 0x44
	float TimeLimitExceededMinTime; // 0x48
	int32_t MinBulkDataSizeForAsyncLoading; // 0x4c
	char UseBackgroundLevelStreaming : 1; // 0x50
	char AsyncLoadingUseFullTimeLimit : 1; // 0x50
	float AsyncLoadingTimeLimit; // 0x54
	float PriorityAsyncLoadingExtraTime; // 0x58
	float LevelStreamingActorsUpdateTimeLimit; // 0x5c
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x60
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x64
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x68
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x6c
	char FlushStreamingOnExit : 1; // 0x70
	char EventDrivenLoaderEnabled : 1; // 0x70
};

struct UHapticFeedbackEffect_Curve {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x30
};

struct UAnimNotify_ChangeAttachMovement {
	bool bNewMoveToAttachLocation; // 0x40
	UAnimContext_Enemy* EnemyContextClass; // 0x48
};

struct UImageSequenceProtocol_EXR {
	bool bCompressed; // 0xe0
	EHDRCaptureGamut CaptureGamut; // 0xe1
};

struct UBTService_DefaultFocus {
	char FocusPriority; // 0xa0
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

struct UOmenConfigSetAsset {
	TArray<UOmenConfigAsset*> OmenConfigs; // 0x38
};

struct UEnvQueryGenerator_Cone {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x88
	FAIDataProviderFloatValue ConeDegrees; // 0xc0
	FAIDataProviderFloatValue AngleStep; // 0xf8
	FAIDataProviderFloatValue Range; // 0x130
	UEnvQueryContext* CenterActor; // 0x168
	char bIncludeContextLocation : 1; // 0x170
};

struct ALedgeHangTriggerVolume {
	bool bTriggerLedgeHang; // 0x2e8
};

struct UGameCoachLesson {
	ULocalPlayer* LocalPlayer; // 0x30
	UGameCoach* GameCoach; // 0x38
	AActor* Target; // 0x70
	AActor* DisplayTarget; // 0x78
	EGameCoachLessonState State; // 0x80
	EGameCoachTargetType TargetType; // 0x81
	bool bTeachableVisibility; // 0x82
	int32_t Priority; // 0x84
	int32_t ConcurrentLimit; // 0x88
	EGameCoachLessonReplacementPolicy ReplacementPolicy; // 0x8c
	int32_t VisibleLimit; // 0x90
	int32_t SuccessLimit; // 0x94
	int32_t PerRoundLimit; // 0x98
	int32_t PerRoundSuccessLimit; // 0x9c
	float MinDuration; // 0xa0
	float MaxDuration; // 0xa4
	float CooldownDuration; // 0xa8
	float MaxOpportunityDuration; // 0xac
	float OpenDelay; // 0xb0
	float MinTeachableDistance; // 0xb4
	float MaxTeachableDistance; // 0xb8
	float MinFailureDistance; // 0xbc
	float MaxFailureDistance; // 0xc0
	bool bFailureVisibility; // 0xc4
};

struct UBloaterExplodePropertyMod {
	EExplodModType Type; // 0xf0
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch {
	FGameplayTagContainer Tags; // 0x30
};

struct USaveSlotListUserWidget {
	FMulticastInlineDelegate OnSlotSelected; // 0x458
	FMulticastInlineDelegate OnSlotFocused; // 0x468
};

struct UAnimNotifyState_EvalChainMontage {
	TArray<FEvalChain> EvalChains; // 0x38
};

struct UGameplayEffectSpawnImpact {
	bool bThirdPersonOnly; // 0x238
	UImpactEffectConfig* ImpactEffectConfig; // 0x240
	bool bGetCharacterMeshImpactResultFromHitResult; // 0x248
};

struct UGameplayAction_SmartSequencer {
	float DistanceToActivate; // 0x210
	float DistanceToPlaySequence; // 0x214
	USteeringBehavior* SmartActorSteeringBehavior; // 0x218
	bool bStartSequenceWhenReady; // 0x220
	float BindingDelayTime; // 0x224
	ALevelSequenceActor* LevelSequenceActor; // 0x230
};

struct UCheckBox {
	ECheckBoxState CheckedState; // 0x160
	FDelegate CheckedStateDelegate; // 0x164
	FCheckBoxStyle WidgetStyle; // 0x178
	USlateWidgetStyleAsset* Style; // 0x750
	USlateBrushAsset* UncheckedImage; // 0x758
	USlateBrushAsset* UncheckedHoveredImage; // 0x760
	USlateBrushAsset* UncheckedPressedImage; // 0x768
	USlateBrushAsset* CheckedImage; // 0x770
	USlateBrushAsset* CheckedHoveredImage; // 0x778
	USlateBrushAsset* CheckedPressedImage; // 0x780
	USlateBrushAsset* UndeterminedImage; // 0x788
	USlateBrushAsset* UndeterminedHoveredImage; // 0x790
	USlateBrushAsset* UndeterminedPressedImage; // 0x798
	EHorizontalAlignment HorizontalAlignment; // 0x7a0
	FMargin Padding; // 0x7a4
	FSlateColor BorderBackgroundColor; // 0x7b8
	bool IsFocusable; // 0x7e8
	bool bIsFocusedOnHover; // 0x7e9
	FMulticastInlineDelegate OnCheckStateChanged; // 0x7f0
	EButtonClickMethod ClickMethod; // 0x800
};

struct ULeaderboardFlushCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULocalPlayer {
	UGameViewportClient* ViewportClient; // 0x78
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x9c
	APlayerController* PendingLevelPlayerControllerClass; // 0xa0
	char bSentSplitJoin : 1; // 0xa8
	int32_t ControllerId; // 0xc0
};

struct AMissionGameMode {
	float GoldenPathTraveledDistancePctForRespawn; // 0x530
	bool bHeroRescueRespawnEnabled; // 0x540
	float RespawnDelayTime; // 0x544
	float NoHumanPresenceFailTimerDelaySeconds; // 0x548
	float IncapableHeroFailureDelay; // 0x54c
	bool bHeroTestNonCapableGrappleTags; // 0x550
};

struct ULootUpgradeMod {
	TArray<FLootUpgradeConfig> LootUpgradeConfigs; // 0xd0
	TArray<FLootSpawnCountModifier> StackedSpawnCountModifiers; // 0xe0
};

struct UAnimNotify_PlayNiagaraEffect {
	UNiagaraSystem* Template; // 0x40
	FVector LocationOffset; // 0x48
	FRotator RotationOffset; // 0x54
	FVector Scale; // 0x60
	char Attached : 1; // 0x90
	FName SocketName; // 0x94
};

struct UMaterialExpressionChannelMaskParameter {
	EChannelMaskParameterColor MaskChannel; // 0x78
	FExpressionInput Input; // 0x7c
};

struct UPlayerViewComponent {
	FMulticastInlineDelegate OnViewChanged; // 0xe8
	FPlayerViewConfig ThirdPersonViewConfig; // 0xf8
	bool bSupportsFirstPerson; // 0x148
	FPlayerViewConfig FirstPersonViewConfig; // 0x14c
	FGameplayTagContainer ThirdPersonTags; // 0x188
	FGameplayTagContainer ThirdPersonOrbitTags; // 0x1a8
	FGameplayTagContainer ThirdPersonOccludedTags; // 0x1c8
	bool bThirdPersonOrbitResetsToFirstPersonRotation; // 0x1e8
	float CharacterFadeOutDistance; // 0x1ec
	float CharacterFadeOutOpacity; // 0x1f0
	float CharacterHideDistance; // 0x1f4
	ULifeStateComponent* LifeStateComponent; // 0x220
	UGameplayTagsComponent* GameplayTagsComponent; // 0x228
	FPlayerViewData RepViewData; // 0x230
};

struct UMovieSceneAkAudioRTPCSection {
	FString Name; // 0xe8
	FRichCurve FloatCurve; // 0xf8
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178
	FMovieSceneFloatChannel RTPCChannel; // 0x1a8
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

struct APlayerSpawnManagerBase {
	UEnvQuery* RescueStartPointQueryTemplate; // 0x2b0
	float RescueRespawnSearchRadius; // 0x2b8
	ECollisionChannel RescueStartLoSChannel; // 0x2bc
	UEnvQuery* RescueRepositionQueryTemplate; // 0x2c0
	float TimeRequiredForReposition; // 0x2c8
	float RepositionCheckInterval; // 0x2cc
	UEnvQuery* ZombieStartPointQueryTemplate; // 0x2f0
	UEnvQuery* ZombieStartPointNoHeroesQueryTemplate; // 0x2f8
	AZombiePlayerStart* ZombieTestStart; // 0x360
	TArray<FVector> PossibleZombieStarts; // 0x368
	TArray<FSpawnRequestContext> DeferredSpawnRequests; // 0x378
	TArray<FSpawnRequestContext> InitialSpawnRequests; // 0x388
	APlayerSpawnManagerDebugger* SpawnManagerDebugger; // 0x3f8
};

struct UParticleModuleTypeDataMesh {
	UStaticMesh* Mesh; // 0x38
	float LODSizeScale; // 0x58
	char bUseStaticMeshLODs : 1; // 0x5c
	char CastShadows : 1; // 0x5c
	char DoCollisions : 1; // 0x5c
	EMeshScreenAlignment MeshAlignment; // 0x5d
	char bOverrideMaterial : 1; // 0x5e
	char bOverrideDefaultMotionBlurSettings : 1; // 0x5e
	char bEnableMotionBlur : 1; // 0x5e
	FRawDistributionVector RollPitchYawRange; // 0x60
	EParticleAxisLock AxisLockOption; // 0xa8
	char bCameraFacing : 1; // 0xa9
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0xaa
	EMeshCameraFacingOptions CameraFacingOption; // 0xab
	char bApplyParticleRotationAsSpin : 1; // 0xac
	char bFaceCameraDirectionRatherThanPosition : 1; // 0xac
	char bCollisionsConsiderPartilceSize : 1; // 0xac
};

struct UDamageIndicatorPipUserWidget {
	UTexture2D* SmallDamage; // 0x458
	UTexture2D* MediumDamage; // 0x460
	UTexture2D* LargeDamage; // 0x468
};

struct USpawningEQSData {
	UEnvQuery* SpawnEQS; // 0x38
	FGameplayTagQuery TagQuery; // 0x40
	float MaxSpawnDistanceFromPlayers; // 0x88
	EGameplayContainerMatchType RequiredTagCheckOption; // 0x8c
	FGameplayTagContainer RequiredTags; // 0x90
};

struct UTextButton_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UImage* BG; // 0x478
	UImage* CTABG; // 0x480
	UImage* CTAHover; // 0x488
	UImage* Frame; // 0x490
	UOverlay* HoverContainer; // 0x498
	UButtonTextBlock_C* TextBlock; // 0x4a0
	UScaleBox* TextScaleBox; // 0x4a8
	UOverlay* TutorialPanel; // 0x4b0
	FText Text; // 0x4b8
	bool bIsHighlighted; // 0x4d0
	bool bIsLeftJustified; // 0x4d1
	bool bIsCTAButton; // 0x4d2
	bool bShowHighlightWhenFocused; // 0x4d3
	bool bUseCustomPadding; // 0x4d4
	FMargin CustomPadding; // 0x4d8
};

struct UBodySetup {
	FKAggregateGeom AggGeom; // 0x30
	FName BoneName; // 0x88
	EPhysicsType PhysicsType; // 0x90
	char bAlwaysFullAnimWeight : 1; // 0x91
	char bConsiderForBounds : 1; // 0x91
	char bMeshCollideAll : 1; // 0x91
	char bDoubleSidedGeometry : 1; // 0x91
	char bGenerateNonMirroredCollision : 1; // 0x91
	char bSharedCookedData : 1; // 0x91
	char bGenerateMirroredCollision : 1; // 0x91
	char bSupportUVsAndFaceRemap : 1; // 0x91
	EBodyCollisionResponse CollisionReponse; // 0x93
	ECollisionTraceFlag CollisionTraceFlag; // 0x94
	UPhysicalMaterial* PhysMaterial; // 0x98
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xa0
	FBodyInstance DefaultInstance; // 0x128
	FVector BuildScale3D; // 0x240
};

struct UAnimNotify_CameraShake {
	float InnerRadius; // 0x40
	float OuterRadius; // 0x44
	FVector EpicenterOffset; // 0x48
	bool bUseBoneLocationAsEpicenter; // 0x54
	FName EpicenterBone; // 0x58
	float Falloff; // 0x60
	bool bOrientShakeTowardsEpicenter; // 0x64
	UCameraShake* Shake; // 0x68
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x70
	FGameplayTagQuery TagQueryRequirment; // 0x78
};

struct AProfilingPlayerController {
	AActor* HoveredActor; // 0x8a0
	UActorComponent* HoveredComponent; // 0x8a8
	TArray<AActor*> HiddenActorStack; // 0x8b0
	TArray<AProfileCamera*> ProfileCameras; // 0x8e8
};

struct UAnimNotify_EvalBranchWithOffset {
	bool bInvertOffset; // 0x50
};

struct AAssetLoader {
	UAssetLoaderComponent* AssetLoaderComponent; // 0x2a0
};

struct UInterpTrackInstEvent {
	float LastUpdatePosition; // 0x30
};

struct UNestMod {
	int32_t NumPodsAdjustment; // 0xe0
};

struct UImpactEffectConfig {
	bool bEnableOnDedicatedServer; // 0x38
	TArray<UAkAudioEvent*> AudioEvents; // 0x40
	FExplosionJostler Jostler; // 0x50
	TMap<FGameplayTag, FImpactDefinition> GameplayTagDefinitions; // 0x60
	TArray<FImpactGameplayTagContainerDefinition> GameplayTagContainerDefinitions; // 0xb0
	TMap<EPhysicalSurface, FImpactDefinition> ImpactDefinitions; // 0xc0
	bool bOverrideScalabilitySettings; // 0x110
	FImpactOverrideQuality OverrideQualities[0x5]; // 0x114
	uint32_t DeferredImpactFlags; // 0x150
};

struct ULootSpawnSubsystem {
	TArray<UDataTable*> LootTables; // 0x48
	TArray<ULootSpawnCountMod*> Mods; // 0x58
	TArray<ULootUpgradeMod*> Upgrades; // 0x68
	TArray<ULootScenario*> LootScenarios; // 0x78
	TArray<UScenarioComponent*> ScenarioRefs; // 0x88
};

struct UParticleModuleVectorFieldScaleOverLife {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x38
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x40
};

struct USplineMeshComponent {
	FSplineMeshParams SplineParams; // 0x5c8
	FVector SplineUpDir; // 0x620
	float SplineBoundaryMin; // 0x62c
	FGuid CachedMeshBodySetupGuid; // 0x630
	UBodySetup* BodySetup; // 0x640
	float SplineBoundaryMax; // 0x648
	char bAllowSplineEditingPerInstance : 1; // 0x64c
	char bSmoothInterpRollScale : 1; // 0x64c
	char bMeshDirty : 1; // 0x64c
	ESplineMeshAxis ForwardAxis; // 0x64d
	float VirtualTextureMainPassMaxDrawDistance; // 0x650
};

struct APlayerCameraManager {
	APlayerController* PCOwner; // 0x2a0
	USceneComponent* TransformComponent; // 0x2a8
	float DefaultFOV; // 0x2b8
	float DefaultOrthoWidth; // 0x2c0
	float DefaultAspectRatio; // 0x2c8
	FCameraCacheEntry CameraCache; // 0x310
	FCameraCacheEntry LastFrameCameraCache; // 0x910
	FTViewTarget ViewTarget; // 0xf10
	FTViewTarget PendingViewTarget; // 0x1520
	FCameraCacheEntry CameraCachePrivate; // 0x1b60
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2160
	TArray<UCameraModifier*> ModifierList; // 0x2760
	TArray<UCameraModifier*> DefaultModifiers; // 0x2770
	float FreeCamDistance; // 0x2780
	FVector FreeCamOffset; // 0x2784
	FVector ViewTargetOffset; // 0x2790
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x27b0
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x27c0
	UCameraAnimInst* AnimInstPool[0x8]; // 0x27c8
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2808
	TArray<UCameraAnimInst*> ActiveAnims; // 0x2828
	TArray<UCameraAnimInst*> FreeAnims; // 0x2838
	ACameraActor* AnimCameraActor; // 0x2848
	char bIsOrthographic : 1; // 0x2850
	char bDefaultConstrainAspectRatio : 1; // 0x2850
	char bClientSimulatingViewTarget : 1; // 0x2850
	char bUseClientSideCameraUpdates : 1; // 0x2850
	char bGameCameraCutThisFrame : 1; // 0x2851
	float ViewPitchMin; // 0x2854
	float ViewPitchMax; // 0x2858
	float ViewYawMin; // 0x285c
	float ViewYawMax; // 0x2860
	float ViewRollMin; // 0x2864
	float ViewRollMax; // 0x2868
	float ServerUpdateCameraTimeout; // 0x2870
};

struct UInvalidationBox {
	bool bCanCache; // 0x160
	bool CacheRelativeTransforms; // 0x161
};

struct UTRSEventSubsystem {
	UTRSEventSystem* TRSEventSystem; // 0x38
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

struct UFleeComponent {
	FMulticastInlineDelegate OnDistanceConditionMet; // 0xe8
	FMulticastInlineDelegate OnHealthConditionMet; // 0xf8
	bool bDistanceCondition; // 0x108
	float FleeObjectiveDeltaDistance; // 0x10c
	float FleeDeltaDistance; // 0x110
	bool bHealthCondition; // 0x114
	float FleeHealthPercentDelta; // 0x118
	bool bChanceCondition; // 0x11c
	float FleeChancePercent; // 0x120
	FString FleeStatSpecifier; // 0x128
	AGobiCharacter* CharacterOwner; // 0x138
};

struct ABobsArm_Weapon_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4f0
	UGameplayTagsComponent* OwnerGameplayComponent; // 0x4f8
};

struct UDoorAlarmGameCoachLesson {
	float AlarmTeachDuration; // 0x460
};

struct AGobiGameStateBase {
	UVoiceRoutingComponent* VoiceRoutingComponent; // 0x310
	UGameState_PostRoundStickTogetherComponent* GameState_PostRoundStickTogetherComponent; // 0x318
	UCharacterSelectLevelManager* CharacterSelectLevelManager; // 0x320
	EGameModeType GameModeType; // 0x328
	TArray<FGobiReadyStatus> PlayerReadyStatuses; // 0x330
	float ActiveTransitionDuration; // 0x340
	float LastTransitionTime; // 0x344
	FString PoolConfig; // 0x348
	TArray<int32_t> TeamScores; // 0x358
	APlayerSlotManager* PlayerSlotManagerClass; // 0x368
	APlayerSlot* PlayerSlotClass; // 0x370
	APlayerSlotManager* PlayerSlotManager; // 0x378
	APlayerAssetLoader* PlayerAssetLoader; // 0x380
	int32_t NumTimesMissionRestarted; // 0x388
	UGameplayCardManager* GameplayCardManager; // 0x390
	FLevelTravelDetails LevelTravelDetails; // 0x398
	UZombieMutationManager* ZombieMutationManager; // 0x3d0
	UCampaignRunComponent* CampaignRunComponent; // 0x3d8
	UOmenConfigSetAsset* OmenConfigSet; // 0x3e0
	FMulticastInlineDelegate OnAllPlayersReady; // 0x3e8
	FMulticastInlineDelegate OnPlayerReadyChanged; // 0x3f8
	int32_t TotalElapsedTime; // 0x418
	bool bFirstMapInChain; // 0x41c
	bool bShouldSkipCardDraw; // 0x41d
	int32_t ZombieMeshRandomSeed; // 0x420
	FMulticastInlineDelegate OnMatchStarted; // 0x428
	FMulticastInlineDelegate OnMatchEnded; // 0x438
	FMulticastInlineDelegate OnLeavingMap; // 0x448
	FMulticastInlineDelegate OnWaitingToResetMatch; // 0x458
	FMulticastInlineDelegate OnResetMission; // 0x468
	FMulticastInlineDelegate OnResetCompleted; // 0x478
	FMulticastInlineDelegate OnCreditsStarted; // 0x488
	FMulticastInlineDelegate OnPlayerStatesChanged; // 0x498
	FMulticastInlineDelegate OnWaitForReadyPlayers; // 0x4a8
	FMulticastInlineDelegate OnMatchStateChanged; // 0x4b8
	FMulticastInlineDelegate OnAllMatchStateChangedHandlersDone; // 0x4c8
	TArray<FGobiReadyStatus> OldPlayerStatuses; // 0x548
	AGobiGameStateDebugger* GameStateDebugger; // 0x558
	UMissionManager* MissionManager; // 0x560
	bool bTutorial; // 0x568
	bool bTraining; // 0x569
	bool bIsSinglePlayer; // 0x56a
	bool bIsPrivate; // 0x56b
	ELeaverPenaltyState LeaverPenaltyState; // 0x56c
	AGameplayAnalyticsManager* AnalyticsManager; // 0x570
};

struct UDistributionVectorUniform {
	FVector Max; // 0x40
	FVector Min; // 0x4c
	char bLockAxes : 1; // 0x58
	EDistributionVectorLockFlags LockedAxes; // 0x5c
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x5d
	char bUseExtremes : 1; // 0x60
};

struct UEnvQueryTest_ItemPickupScore {
	bool bForTeammates; // 0x208
};

struct UGlobalLoadingSettings {
	TSoftObjectPtr<UDataTable> GlobalAssetTable; // 0x40
};

struct UGameplayEffectGrappleComponent {
	FGamePropertyIntMod BreakoutCountPerLevelMod; // 0x240
	FGamePropertyFloatMod BreakoutCooldownSecsMod; // 0x250
	FGamePropertyFloatMod BreakoutRequiredInputHeldTimeMod; // 0x260
	bool bEnableBreakout; // 0x270
};

struct UApplyOnItemSelectedMod {
	FGameplayTagQuery ItemTagQuery; // 0xd0
	FCharacterEmitterDef CharacterEmitterDef; // 0x118
};

struct UMaterialExpressionTextureCoordinate {
	int32_t CoordinateIndex; // 0x48
	float UTiling; // 0x4c
	float VTiling; // 0x50
	char UnMirrorU : 1; // 0x54
	char UnMirrorV : 1; // 0x54
};

struct UGameplayEffectAddComponent {
	UActorComponent* ActorComponentClass; // 0x240
	FGameplayTag GameplayTag; // 0x248
};

struct UAnimEvalSet_Shared_DeathReaction_Moving_C {
	FGameplayEval_Angle AvatarHitDirection; // 0xc0
	FGameplayEval_SpeedRange AvatarSpeed; // 0x120
	FGameplayEval_GameplayTags AvatarTags; // 0x1e8
	FGameplayEval_HitReactionBone DamageBone; // 0x280
	FGameplayEval_RandomChance RandomChance; // 0x330
	FGameplayEval_DamageType DamageType; // 0x380
};

struct UBackgroundBlur {
	FMargin Padding; // 0x160
	EHorizontalAlignment HorizontalAlignment; // 0x170
	EVerticalAlignment VerticalAlignment; // 0x171
	bool bApplyAlphaToBlur; // 0x172
	float BlurStrength; // 0x174
	bool bOverrideAutoRadiusCalculation; // 0x178
	int32_t BlurRadius; // 0x17c
	FSlateBrush LowQualityFallbackBrush; // 0x180
};

struct UEnvQueryInstanceBlueprintWrapper {
	int32_t QueryID; // 0x38
	UEnvQueryItemType* ItemType; // 0x60
	int32_t OptionIndex; // 0x68
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x70
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x128
};

struct UNiagaraParameterCollectionInstance {
	UNiagaraParameterCollection* Collection; // 0x30
	TArray<FNiagaraVariable> OverridenParameters; // 0x38
	FNiagaraParameterStore ParameterStorage; // 0x48
};

struct URestrictedGameplayTagsList {
	FString ConfigFileName; // 0x30
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x40
};

struct UAkComponent {
	float AttenuationScalingFactor; // 0x368
	UAkAudioEvent* AkAudioEvent; // 0x370
	FString EventName; // 0x378
	bool IsManagedAmbientSound; // 0x388
};

struct UAnimEvalSet_Common_Idle_C {
	FGameplayEval_GameplayTags GameplayTagEval; // 0xc0
};

struct UGameCoachSettings {
	TArray<FGameCoachLessonSettings> Lessons; // 0x98
	int32_t TipIndex; // 0xa8
};

struct UMovieSceneBindingOverrides {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x30
};

struct UAnimEvalSet_Bot_ItemUseTarget_C {
	FGameplayEval_Distance Distance2D; // 0xc0
	FGameplayEval_Distance DistanceVert; // 0x190
	FGameplayEval_ActorClass ActorClass; // 0x260
	FGameplayEval_GameplayTags GameplayTags; // 0x2b8
	FGameplayEval_LineOfSight LineOfSight; // 0x350
};

struct AInteractiveFoliageActor {
	UCapsuleComponent* CapsuleComponent; // 0x2b0
	FVector TouchingActorEntryPosition; // 0x2b8
	FVector FoliageVelocity; // 0x2c4
	FVector FoliageForce; // 0x2d0
	FVector FoliagePosition; // 0x2dc
	float FoliageDamageImpulseScale; // 0x2e8
	float FoliageTouchImpulseScale; // 0x2ec
	float FoliageStiffness; // 0x2f0
	float FoliageStiffnessQuadratic; // 0x2f4
	float FoliageDamping; // 0x2f8
	float MaxDamageImpulse; // 0x2fc
	float MaxTouchImpulse; // 0x300
	float MaxForce; // 0x304
	float Mass; // 0x308
};

struct AGameplayObjective {
	UDistanceMapSourceComponent* DistanceMapSourceComp; // 0x2a0
};

struct UReflectionCaptureComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x230
	EReflectionSourceType ReflectionSourceType; // 0x238
	UTextureCube* Cubemap; // 0x240
	float SourceCubemapAngle; // 0x248
	float Brightness; // 0x24c
	FVector CaptureOffset; // 0x250
	FGuid MapBuildDataId; // 0x25c
};

struct UMaterialExpressionArcsine {
	FExpressionInput Input; // 0x48
};

struct UTRSAudioTickManager {
	UWorld* World; // 0x30
};

struct UPartyToolTipUserWidget {
	FPartyPlayer Player; // 0x460
	TArray<FMenuCommand> Commands; // 0x570
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

struct UNiagaraComponentPool {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x30
};

struct UMaterialExpressionMakeMaterialAttributes {
	FExpressionInput BaseColor; // 0x48
	FExpressionInput Metallic; // 0x5c
	FExpressionInput Specular; // 0x70
	FExpressionInput Roughness; // 0x84
	FExpressionInput Anisotropy; // 0x98
	FExpressionInput EmissiveColor; // 0xac
	FExpressionInput Opacity; // 0xc0
	FExpressionInput OpacityMask; // 0xd4
	FExpressionInput Normal; // 0xe8
	FExpressionInput Tangent; // 0xfc
	FExpressionInput WorldPositionOffset; // 0x110
	FExpressionInput WorldDisplacement; // 0x124
	FExpressionInput TessellationMultiplier; // 0x138
	FExpressionInput SubsurfaceColor; // 0x14c
	FExpressionInput ClearCoat; // 0x160
	FExpressionInput ClearCoatRoughness; // 0x174
	FExpressionInput AmbientOcclusion; // 0x188
	FExpressionInput Refraction; // 0x19c
	FExpressionInput CustomizedUVs[0x8]; // 0x1b0
	FExpressionInput PixelDepthOffset; // 0x250
	FExpressionInput ShadingModel; // 0x264
};

struct UGenConditionBase_C {
	FAISpawnEval_PacingPhase Phase; // 0x78
	FAISpawnEval_Chance ChanceToPlay; // 0xc0
	FAISpawnEval_CheckGeneratingDeckTags Check Deck; // 0x118
	FAISpawnEval_CheckCardTags Check Card; // 0x1a8
	FAISpawnEval_CheckCharacterTags Check Character; // 0x238
	FAISpawnEval_CheckCharacterTags Check Character_3; // 0x2e8
	FAISpawnEval_Difficulty Check_Difficulty; // 0x398
	FAISpawnEval_GrowingChanceByDifficulty ChanceGrowingByDifficulty; // 0x3e0
	FAISpawnEval_GrowingChance Check_GrowingChance; // 0x438
	FAISpawnEval_Cooldown Cooldown; // 0x490
	FAISpawnEval_Cooldown Cooldown_3; // 0x510
};

struct UParticleEffectTrait {
	TArray<FParticleEffectTraitDef> ParticleEffectDefinitions; // 0x30
};

struct AFlashlightBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	USpotLightComponent* SpotLight1; // 0x2a8
	USpotLightComponent* SpotLight; // 0x2b0
};

struct UGlobalSafeZone_WBP_C {
	UGobiSafeZone* GobiSafeZone_77; // 0x2e0
};

struct UBlendSpace {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x150
};

struct UAnimNotify_WeaponSharedSound {
	UAkAudioEvent* PreviewAudio; // 0x40
	FName BoneName; // 0x48
	ESharedWeaponAnimSound SoundLookup; // 0x50
};

struct UParticleModuleRotationRate {
	FRawDistributionFloat StartRotationRate; // 0x38
};

struct UScenarioManagerMod {
	int32_t MinNumToEnabledAdjustment; // 0xd0
	int32_t MaxNumToEnabledAdjustment; // 0xd4
	FGameplayTag ScenarioManagerModTag; // 0xd8
};

struct UScareBirdsScenario_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x388
	FScenarioHeroEval_FixedScore HeroFixedScore; // 0x390
	bool StartedInViolent; // 0x3d8
};

struct UProceduralFoliageComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xe8
	float TileOverlap; // 0xf0
	AVolume* SpawningVolume; // 0xf8
	FGuid ProceduralGuid; // 0x100
};

struct UParticleModuleVelocityBase {
	char bInWorldSpace : 1; // 0x38
	char bApplyOwnerScale : 1; // 0x38
};

struct ARescuePlayerStart {
	UNavLocationComponent* NavLocationComponent; // 0x310
	ERescueSpawnPointType SpawnPointType; // 0x318
	bool bEnabled; // 0x319
	APawn* CurrentPawn; // 0x320
};

struct UGobiDialogueComponent {
	TArray<FName> PvPZombieBlacklist; // 0x200
	TArray<FName> StaminaBreathResponseGroup; // 0x210
};

struct UInterpTrackFloatProp {
	FName PropertyName; // 0x98
};

struct UEnvQueryContext_AIActorsInRange {
	FAISenseAffiliationFilter Affiliation; // 0x30
	float Radius; // 0x34
};

struct AWeaponCustomizationMannequin {
	USkeletalMesh* BaseSkeletalMesh; // 0x310
	FDataTableRowHandle DesiredItemRowHandle; // 0x318
	FDataTableRowHandle CurrentLoadingRowHandle; // 0x338
	FDataTableRowHandle DesiredCustomizationRowHandle; // 0x358
	FDataTableRowHandle CurrentLoadingCustomizationRowHandle; // 0x378
	TArray<FName> BonesHiddenByDefault; // 0x398
	float WeaponCameraDistance; // 0x3a8
};

struct UGameplayContext_NextPathCornerOfNavArea {
	UNavArea* NavArea; // 0x90
};

struct AGobiGameModeBase {
	FMulticastInlineDelegate OnWaitingPostMatch; // 0x390
	EGameModeType GameModeType; // 0x3a0
	bool bSupportsBots; // 0x3a1
	float WaitToResetMatchDuration; // 0x3a4
	float WaitToStartAfterResetMatchDuration; // 0x3a8
	float ResettingMatchTimeoutDuration; // 0x3ac
	float ResetCompletedMatchStateDuration; // 0x3b0
	float CreditsWaitDuration; // 0x3b4
	APlayerSpawnManagerBase* PlayerSpawnManager; // 0x3b8
	UGameplayTagsComponent* GameplayTagsComponent; // 0x3c0
	ALevelStreamingCoordinator* LevelStreamingCoordinator; // 0x3c8
	ULootData* LootData; // 0x3d0
	APlayerSpawnManagerBase* PlayerSpawnManagerClass; // 0x3d8
	AActor* AudioControllerClass; // 0x3e0
	AActor* AudioController; // 0x3e8
	UGameDirector* GameDirectorClass; // 0x3f0
	UGameDirector* GameDirector; // 0x3f8
	ABotController* BotControllerClass; // 0x400
	ALevelResetCoordinator* LevelResetCoordinator; // 0x408
	ALullSystem* LullSystem; // 0x410
	float WaitForBackfillDuration; // 0x420
	float WaitForReadyPlayersDuration; // 0x424
	UWaypointManager* WaypointManager; // 0x430
};

struct AController {
	APlayerState* PlayerState; // 0x2a8
	FName StateName; // 0x2b8
	APawn* Pawn; // 0x2c0
	ACharacter* Character; // 0x2d0
	USceneComponent* TransformComponent; // 0x2d8
	FRotator ControlRotation; // 0x2f8
	char bAttachToPawn : 1; // 0x304
};

struct UApplyGameplayEffectMod {
	float ChanceToApplyEffects; // 0xe8
	FGameplayTagContainer TagsToApply; // 0xf0
	TArray<UGameplayEffect*> GameplayEffectsToApply; // 0x110
	EGameplayCardAffinity LinkedAffinity; // 0x120
	int32_t RandomSeed; // 0x124
};

struct URotatingMovementComponent {
	FRotator RotationRate; // 0x128
	FVector PivotTranslation; // 0x134
	char bRotationInLocalSpace : 1; // 0x140
};

struct UBTDecorator_IsInPacingPhase {
	EPacingPhase PacingPhase; // 0x70
};

struct UAnimEvalSet_HitReaction_FB_Stun_C {
	FGameplayEval_Health AvatarHealth; // 0xc0
	FGameplayEval_GameplayTags AvatarTags; // 0x118
	FGameplayEval_Random Random; // 0x1b0
	FGameplayEval_DamageType DamageType; // 0x1f8
};

struct ULeaderboardQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UCardStatsUserWidget {
	TSet<UStatEntryUserWidget*> StatWidgets; // 0x458
	UAffinityStatsPopup* AffinityStatsPopup; // 0x4a8
	UAffinityStatsPopup* AffinityPopupClass; // 0x4b0
};

struct UMaterialExpressionBumpOffset {
	FExpressionInput Coordinate; // 0x48
	FExpressionInput Height; // 0x5c
	FExpressionInput HeightRatioInput; // 0x70
	float HeightRatio; // 0x84
	float ReferencePlane; // 0x88
	uint32_t ConstCoordinate; // 0x8c
};

struct UTimeSynchronizableMediaSource {
	bool bUseTimeSynchronization; // 0x90
	int32_t FrameDelay; // 0x94
	double TimeDelay; // 0x98
};

struct UBrushBaseProperties {
	float BrushSize; // 0x58
	bool bSpecifyRadius; // 0x5c
	float BrushRadius; // 0x60
	float BrushDepth; // 0x64
	float BrushStrength; // 0x68
	float BrushFalloffAmount; // 0x6c
	bool bShowStrength; // 0x70
	bool bShowFalloff; // 0x71
};

struct AGobiReticle {
	USceneComponent* TargetRoot; // 0x2a0
	USplineComponent* SplineComponent; // 0x2a8
	TArray<USplineMeshComponent*> SplineMeshComponents; // 0x2b0
	int32_t MaxSplinePoints; // 0x2c0
	UStaticMesh* SplineMesh; // 0x2c8
	float RadiusScale; // 0x2d0
	float RadiusBuffer; // 0x2d4
};

struct UMaterialBillboardComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x4b0
};

struct UStatEntryUserWidget {
	bool bCanShowDiff; // 0x458
};

struct UMaterialExpressionDepthFade {
	FExpressionInput InOpacity; // 0x48
	FExpressionInput FadeDistance; // 0x5c
	float OpacityDefault; // 0x70
	float FadeDistanceDefault; // 0x74
};

struct UPointLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x3a0
	float LightFalloffExponent; // 0x3a4
	float SourceRadius; // 0x3a8
	float SoftSourceRadius; // 0x3ac
	float SourceLength; // 0x3b0
};

struct UChallengeData {
	UTexture2D* Banner; // 0x38
	FText DisplayName; // 0x40
	FDataTableRowHandle Map; // 0x58
	TArray<FDataTableRowHandle> ChallengeCards; // 0x78
	TArray<UChallengeObjectiveData*> ChallengeObjectives; // 0x88
	int32_t InitialCurrency; // 0x98
};

struct UOpenScreenUsableComponent {
	FMulticastInlineDelegate OnScreenClosedEvent; // 0x4f8
	UUIScreen* ScreenClass; // 0x508
	EMatchmakingScreenMode MatchmakingScreenMode; // 0x510
	UUIScreen* DependencyScreenClass; // 0x518
	bool bDisabledForTradeShow; // 0x520
	bool bDisabledDuringChunkInstall; // 0x521
};

struct UEditableMesh {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3c0
	int32_t TextureCoordinateCount; // 0x3d8
	int32_t PendingCompactCounter; // 0x524
	int32_t SubdivisionCount; // 0x528
};

struct USourceEffectEnvelopeFollowerPreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x7c
};

struct UMaterialExpressionConstant2Vector {
	float R; // 0x48
	float G; // 0x4c
};

struct UBTTask_SetHagState {
	EHagState HagState; // 0x78
};

struct UAnimContext_Character {
	FAIDataProviderFloatValue LocationOffsetX; // 0x98
	FAIDataProviderFloatValue LocationOffsetY; // 0xd0
	FAIDataProviderFloatValue LocationOffsetZ; // 0x108
};

struct UMaterialExpressionTangentOutput {
	FExpressionInput Input; // 0x48
};

struct UCapsuleComponent {
	float CapsuleHalfHeight; // 0x4c8
	float CapsuleRadius; // 0x4cc
};

struct UAnimNotifyState_ContextTickable {
	UGameplayContext* Context; // 0x38
};

struct UGameplayCueManager {
	UGameplayCueSet* GameplayCueSet; // 0x38
};

struct UMaterialFunctionInterface {
	FGuid StateId; // 0x30
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x40
};

struct UGameplayEffectMeleeComponent {
	FGameplayTag MeleeComponentTag; // 0x240
	FGamePropertyFloatMod CookPlayRateMod; // 0x248
	FGamePropertyFloatMod AttackPlayRateMod; // 0x258
	FGamePropertyFloatMod ImpactPlayRateMod; // 0x268
};

struct UNiagaraDataInterfaceParticleRead {
	FString EmitterName; // 0x38
};

struct UFieldSystemMetaDataIteration {
	int32_t Iterations; // 0xe8
};

struct UAkComponentBase {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x258
	FString EarlyReflectionAuxBusName; // 0x260
	float EarlyReflectionBusSendGain; // 0x270
	char EnableSpotReflectors : 1; // 0x274
	char DrawFirstOrderReflections : 1; // 0x274
	char DrawSecondOrderReflections : 1; // 0x274
	char DrawHigherOrderReflections : 1; // 0x274
	char DrawDiffraction : 1; // 0x274
	bool StopWhenOwnerDestroyed; // 0x278
	float OcclusionRefreshInterval; // 0x27c
	bool bUseReverbVolumes; // 0x280
};

struct USkyAtmosphereComponent {
	ESkyAtmosphereTransformMode TransformMode; // 0x230
	float BottomRadius; // 0x234
	FColor GroundAlbedo; // 0x238
	float AtmosphereHeight; // 0x23c
	float MultiScatteringFactor; // 0x240
	float RayleighScatteringScale; // 0x244
	FLinearColor RayleighScattering; // 0x248
	float RayleighExponentialDistribution; // 0x258
	float MieScatteringScale; // 0x25c
	FLinearColor MieScattering; // 0x260
	float MieAbsorptionScale; // 0x270
	FLinearColor MieAbsorption; // 0x274
	float MieAnisotropy; // 0x284
	float MieExponentialDistribution; // 0x288
	float OtherAbsorptionScale; // 0x28c
	FLinearColor OtherAbsorption; // 0x290
	FTentDistribution OtherTentDistribution; // 0x2a0
	FLinearColor SkyLuminanceFactor; // 0x2ac
	float AerialPespectiveViewDistanceScale; // 0x2bc
	float HeightFogContribution; // 0x2c0
	float TransmittanceMinLightElevationAngle; // 0x2c4
	FGuid bStaticLightingBuiltGUID; // 0x2ec
};

struct AGobiPlayerState {
	FMulticastInlineDelegate OnCharacterSelected; // 0x3a0
	FMulticastInlineDelegate OnCharacterSelectionFailed; // 0x3b0
	FMulticastInlineDelegate OnCardDrawFailed; // 0x3c0
	FMulticastInlineDelegate OnPvPEvent; // 0x3d0
	FMulticastInlineDelegate OnStartMissionObjective; // 0x3f8
	FMulticastInlineDelegate OnEndMissionObjective; // 0x408
	FMulticastInlineDelegate OnCurrentPawnChanged; // 0x418
	FMulticastInlineDelegate OnQueuedZombieRespawnTurnStart; // 0x440
	FMulticastInlineDelegate OnQueuedZombieRespawnTurnEnd; // 0x450
	FMulticastInlineDelegate OnPreRoundStepChanged; // 0x460
	FMulticastInlineDelegate OnOwnedSlotChanged; // 0x470
	FMulticastInlineDelegate OnControlledSlotChanged; // 0x480
	FMulticastInlineDelegate OnPostRoundBonusSPChanged; // 0x4a0
	FMulticastInlineDelegate OnRespawnCountChanged; // 0x4b0
	FMulticastInlineDelegate OnCardGiverApplied; // 0x4c0
	FMulticastInlineDelegate OnBadgeDirty; // 0x500
	UMatchmaking* Matchmaking; // 0x510
	TWeakObjectPtr<APawn> RecentPawn; // 0x51c
	TWeakObjectPtr<APawn> CurrentPawn; // 0x524
	TWeakObjectPtr<APlayerSlot> OwnedPlayerSlot; // 0x52c
	TWeakObjectPtr<APlayerSlot> ControlledPlayerSlot; // 0x534
	FDataTableRowHandle BotRowHandle; // 0x540
	FString HydraDisplayName; // 0x560
	UPlayerCutsceneSynchronizationComponent* PlayerCutsceneSynchronizationComponent; // 0x580
	UPlayerLevelStreamingComponent* PlayerLevelStreamingComponent; // 0x588
	UPlayerLevelResetComponent* PlayerLevelResetComponent; // 0x590
	UPlayerState_PostRoundStickTogetherComponent* PlayerState_PostRoundStickTogetherComponent; // 0x598
	float DistanceTraveledToObjective; // 0x5a0
	float DistanceTraveledToObjectivePct; // 0x5a4
	float PVPHoldoutTime; // 0x5a8
	float MutationPointsAtLastSpawn; // 0x5b8
	TArray<FZombieRespawnTime> ZombieRespawnTimes; // 0x620
	float NextZombieMinRespawnTime; // 0x630
	FRespawnSnapshot_Zombie ZombieRespawnSnapshot; // 0x634
	int32_t PlayerRespawnCount; // 0x640
	TArray<FString> UnmutedHydraPublicIds; // 0x648
	FString VivoxTalker; // 0x658
	bool bGroupLeader; // 0x669
	FString GroupSessionId; // 0x670
	FString GroupSessionCluster; // 0x680
	ESessionPrivacy GroupSessionPrivacy; // 0x690
	bool bIsPlayingTutorial; // 0x691
	FPlayerStateUserIds UserIds; // 0x698
	EGobiTeam CurrentTeam; // 0x6c0
	EGobiTeam PrevTeam; // 0x6c1
	float DeadToSpectatorDelay; // 0x6c4
	APawn* CurrentPawnClass; // 0x6c8
	int32_t BotGameCardsPicked; // 0x6d0
	EPreRoundStep PreRoundStep; // 0x6d4
	FBadgeData BadgeData; // 0x700
	UPlayerStatsComponent* PlayerStatsComponent; // 0x710
	UGobiPlayerProfileComponent* PlayerProfileComponent; // 0x718
	TArray<FPostRoundStatConfig> PostRoundStatConfigs; // 0x728
	TArray<int32_t> PostRoundStatValues; // 0x738
	int32_t PostRoundBonusSP; // 0x748
	double PostRoundLineupStats[0xb]; // 0x750
	double ScoreboardStats[0x2]; // 0x7a8
};

struct USkeletalMeshRegionConfig {
	TArray<USkeletalMeshRegion*> Regions; // 0x38
	TArray<UMeshMaterialParamSet*> MaterialParamSets; // 0x48
	FGameplayTagQuery TagRequirements; // 0x58
	FGameplayTag ConfigIdentifier; // 0xa0
};

struct UDatasmithCommonTessellationOptions {
	FDatasmithTessellationOptions Options; // 0x30
};

struct UInstantSpawnedLootUpgradeMod {
	FGameplayTagQuery ItemQuery; // 0xd0
	FGameplayTagQuery SpawnerQuery; // 0x118
	bool bApplyOnlyToItemsAtSpawners; // 0x160
};

struct ANiagaraPreviewGrid {
	UNiagaraSystem* System; // 0x2a0
	ENiagaraPreviewGridResetMode ResetMode; // 0x2a8
	UNiagaraPreviewAxis* PreviewAxisX; // 0x2b0
	UNiagaraPreviewAxis* PreviewAxisY; // 0x2b8
	ANiagaraPreviewBase* PreviewClass; // 0x2c0
	float SpacingX; // 0x2c8
	float SpacingY; // 0x2cc
	int32_t NumX; // 0x2d0
	int32_t NumY; // 0x2d4
	TArray<UChildActorComponent*> PreviewComponents; // 0x2d8
};

struct UAIDeckGenBase_C {
	FAISpawnEval_Chance Chance; // 0x78
	FAISpawnEval_CheckGeneratingDeckTags Check Generating Deck Tags; // 0xd0
	FAISpawnEval_Difficulty Difficulty; // 0x160
};

struct UThreatMod_ChangeOverTime {
	float ChangeRate; // 0x40
	EThreatChange_Mode Mode; // 0x44
};

struct UBTDecorator_KeepFocus {
	FBlackboardKeySelector FocusTargetKey; // 0x70
	char FocusPriority; // 0x98
};

struct UFirstPersonAssetLoader {
	TArray<UFPAssetSlot*> AssetSlots; // 0x40
	UAsyncAssetSet* NearbyItemAssetSet; // 0x50
	UAsyncAssetSet* AllPickupItemsAssetSet; // 0x58
	UAsyncAssetSet* PreroundAssetSet; // 0x60
};

struct UItemCycleComponent {
	TArray<UGameplayEffect*> PowerSwapEffects; // 0x248
	TArray<UGameplayEffect*> PowerSwapPlayerEffects; // 0x258
	bool bIsSelectable; // 0x268
	FItemCycleSpec RaiseSpec; // 0x270
	FItemCycleSpec LowerSpec; // 0x2b0
	FName CharacterItemCycleSoundTag; // 0x2f0
	FItemCycleTuning ItemCycleTuning; // 0x2f8
};

struct UMovieSceneComponentMaterialTrack {
	int32_t MaterialIndex; // 0x70
};

struct UCharacterEmitterComponent {
	FGameplayEffectContext EffectContext; // 0x118
	FName CollisionProfile; // 0x198
	float LineOfSightForgivenessTime; // 0x1a0
};

struct UWindDirectionalSourceComponent {
	float Strength; // 0x230
	float Speed; // 0x234
	float MinGustAmount; // 0x238
	float MaxGustAmount; // 0x23c
	float Radius; // 0x240
	char bPointWind : 1; // 0x244
};

struct AFortificationActor {
	UAlertComponent* AlertComponent; // 0x2a0
	UNotificationBoxComponent* NotificationBoxComponent; // 0x2a8
	UBoxComponent* UsableTriggerComponent; // 0x2b0
	UUsableComponent* UsableComponent; // 0x2b8
	USceneComponent* InternalRootComponent; // 0x2c0
	UHealthComponent* HealthComponent; // 0x2c8
	UStaticMeshComponent* FortificationMeshComponent; // 0x2d0
	USkeletalMeshComponent* FortificationSkelMeshComponent; // 0x2d8
	UDecalComponent* DecalComponent; // 0x2e0
	UGobiNavLinkComponent* FortifiedNavLinkComponent; // 0x2e8
	UGobiNavLinkComponent* DestroyedNavLinkComponent; // 0x2f0
	UGobiNavModifierComponent* NavModifierComponent; // 0x2f8
	UAkAcousticPortalComponent* AkAcousticPortalComponent; // 0x300
	bool bUseSkeletalMesh; // 0x308
	TArray<FFortificationMeshInfo> FortificationMeshes; // 0x310
	FFortificationSkelMeshInfo FortificationSkelMeshInfo; // 0x320
	float ImpulseMagnitude; // 0x350
	float ChanceToBeginDestroyed; // 0x354
	bool bShowDecal; // 0x358
	UNavArea* DestroyedNavAreaClass; // 0x360
	float BrokenPieceLifetime; // 0x368
	UStaticMesh* BrokenFortificationMesh; // 0x370
	UMaterialInterface* BrokenFortificationMaterialOverride; // 0x378
	UParticleSystem* BrokenFortificationParticleEffect; // 0x380
	bool bCanUpgradeFromBroken; // 0x388
	TArray<FUsableInventoryCondition> RequiredMaterialsForBrokenUpgrade; // 0x390
	UParticleSystem* DamageParticleEffect; // 0x3b0
	UGobiDamageType* OverlapDamageType; // 0x3b8
	float OverlapDamage; // 0x3c0
	FGameplayTag OnFortificationBreakTag; // 0x3c4
	float PercentageBrokenToOpenAKPortal; // 0x3e4
};

struct UEnvQueryTest_RescuePointOccupied {
	ERescueOccupiedMatchType MatchType; // 0x208
};

struct ULandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x30
	FGuid LayerGuid; // 0x50
};

struct UBookMark {
	FVector Location; // 0x30
	FRotator Rotation; // 0x3c
	TArray<FString> HiddenLevels; // 0x48
};

struct UAnimContext_Distance {
	UAnimContext_Transform* DistFrom; // 0x50
	UAnimContext_Transform* DistTo; // 0x58
	bool bAccountForRadii; // 0x60
	bool bAccountForNavLinkOffset; // 0x61
};

struct UDatasmithMaterialInstanceTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x38
	TMap<FName, float> ScalarParameterValues; // 0x60
	TMap<FName, FLinearColor> VectorParameterValues; // 0xb0
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0x100
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x150
};

struct UHUDEquipmentPanelUserWidget {
	bool bIsVendor; // 0x458
};

struct UMaterialExpressionSine {
	FExpressionInput Input; // 0x48
	float Period; // 0x5c
};

struct AScenarioManager {
	EScenarioManagerPhase StartupPhase; // 0x2a0
	TArray<FScenarioCollection> ScenarioCollections; // 0x2a8
};

struct UNiagaraDataInterfaceStaticMesh {
	UStaticMesh* DefaultMesh; // 0x38
	AActor* Source; // 0x40
	UStaticMeshComponent* SourceComponent; // 0x48
	FNDIStaticMeshSectionFilter SectionFilter; // 0x50
};

struct UParticleModuleAttractorParticle {
	FName EmitterName; // 0x38
	FRawDistributionFloat Range; // 0x40
	char bStrengthByDistance : 1; // 0x70
	FRawDistributionFloat Strength; // 0x78
	char bAffectBaseVelocity : 1; // 0xa8
	EAttractorParticleSelectionMethod SelectionMethod; // 0xac
	char bRenewSource : 1; // 0xb0
	char bInheritSourceVel : 1; // 0xb0
	int32_t LastSelIndex; // 0xb4
};

struct UGhostModeIndicatorUserWidget {
	UPanelWidget* SpawnNotfication; // 0x460
};

struct UDestroySessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct ULifeStateComponent {
	TArray<UMontageSet*> ReviveMontageSets; // 0xe8
	float ReviveAnimationTime; // 0xf8
	FMulticastInlineDelegate OnLifeStateChanged; // 0x100
	FGameplayTag ActiveLifeStateTag; // 0x180
	FLifeStateChangeInfo ReplicatedLifeStateChangeInfo; // 0x198
	TArray<FLifeStateMap> LifeStates; // 0x1a8
	ULifeStateBase* ActiveLifeState; // 0x1b8
	TArray<ULifeStateBase*> ReplicatedLifeStates; // 0x1c0
	UAnimMontage* CurrentReviveMontage; // 0x1f0
};

struct UCommonZombieMeshSubsystem {
	TArray<FMeshMergeConfiguration> MergedMeshes; // 0x40
	TArray<FSkeletalMeshConfigMod> MeshConfigMods; // 0x50
};

struct UFoliageInstancedStaticMeshComponent {
	FGuid GenerationGuid; // 0x770
};

struct UAnimNotifyState_ClampInputRotationRate {
	FName Label; // 0x38
	EClampInputRotationType Type; // 0x40
	FVector2D Rate; // 0x44
};

struct UZombieVariantEntryUserWidget {
	FSlateColor LocalUserPipColor; // 0x468
	FSlateColor OtherUserPipColor; // 0x498
	FSlateColor UnusedPipColor; // 0x4c8
	UGobiUserWidget* TeamPipWidget; // 0x4f8
	UHorizontalBox* TeamPipsHBox; // 0x500
	UImage* Portrait; // 0x508
	UTextBlock* VariantText; // 0x510
};

struct USkeletalMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x728
	UAnimInstance* AnimClass; // 0x730
	UAnimInstance* AnimScriptInstance; // 0x738
	UAnimInstance* PostProcessAnimInstance; // 0x740
	FSingleAnimationPlayData AnimationData; // 0x748
	FVector RootBoneTranslation; // 0x770
	FVector LineCheckBoundsScale; // 0x77c
	TArray<UAnimInstance*> LinkedInstances; // 0x7a8
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x7b8
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x7c8
	float GlobalAnimRateScale; // 0x7f8
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x7fc
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x7fd
	EAnimationMode AnimationMode; // 0x7ff
	char bDisablePostProcessBlueprint : 1; // 0x801
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x801
	char bHasValidBodies : 1; // 0x801
	char bBlendPhysics : 1; // 0x801
	char bEnablePhysicsOnDedicatedServer : 1; // 0x801
	char bUpdateJointsFromAnimation : 1; // 0x802
	char bDisableClothSimulation : 1; // 0x802
	char bDisableRigidBodyAnimNode : 1; // 0x802
	char bAllowAnimCurveEvaluation : 1; // 0x802
	char bDisableAnimCurves : 1; // 0x802
	char bCollideWithEnvironment : 1; // 0x803
	char bCollideWithAttachedChildren : 1; // 0x803
	char bLocalSpaceSimulation : 1; // 0x803
	char bResetAfterTeleport : 1; // 0x803
	char bDeferKinematicBoneUpdate : 1; // 0x803
	char bNoSkeletonUpdate : 1; // 0x803
	char bPauseAnims : 1; // 0x803
	char bUseRefPoseOnInitAnim : 1; // 0x804
	char bEnablePerPolyCollision : 1; // 0x804
	char bForceRefpose : 1; // 0x804
	char bOnlyAllowAutonomousTickPose : 1; // 0x804
	char bIsAutonomousTickPose : 1; // 0x804
	char bOldForceRefPose : 1; // 0x804
	char bShowPrePhysBones : 1; // 0x804
	char bRequiredBonesUpToDate : 1; // 0x804
	char bAnimTreeInitialised : 1; // 0x805
	char bIncludeComponentLocationIntoBounds : 1; // 0x805
	char bEnableLineCheckWithBounds : 1; // 0x805
	char bUseBendingElements : 1; // 0x805
	char bUseTetrahedralConstraints : 1; // 0x805
	char bUseThinShellVolumeConstraints : 1; // 0x805
	char bUseSelfCollisions : 1; // 0x805
	char bUseContinuousCollisionDetection : 1; // 0x805
	char bPropagateCurvesToSlaves : 1; // 0x806
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x806
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x806
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x806
	uint16_t CachedAnimCurveUidVersion; // 0x808
	EClothMassMode MassMode; // 0x80a
	float UniformMass; // 0x80c
	float TotalMass; // 0x810
	float Density; // 0x814
	float MinPerParticleMass; // 0x818
	float ClothBlendWeight; // 0x81c
	float EdgeStiffness; // 0x820
	float BendingStiffness; // 0x824
	float AreaStiffness; // 0x828
	float VolumeStiffness; // 0x82c
	float StrainLimitingStiffness; // 0x830
	float ShapeTargetStiffness; // 0x834
	TArray<FName> DisallowedAnimCurves; // 0x838
	UBodySetup* BodySetup; // 0x848
	FMulticastInlineDelegate OnConstraintBroken; // 0x858
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x868
	float TeleportDistanceThreshold; // 0x940
	float TeleportRotationThreshold; // 0x944
	uint32_t LastPoseTickFrame; // 0x950
	UClothingSimulationInteractor* ClothingInteractor; // 0x9b0
	FMulticastInlineDelegate OnAnimInitialized; // 0xa80
};

struct UGameplayEffectAbilityComponent {
	FGameplayTag AbilityComponentTag; // 0x240
	FGamePropertyFloatMod CooldownMod; // 0x248
	FGamePropertyFloatMod DurationMod; // 0x258
};

struct UTweenFloat {
	FMulticastInlineDelegate OnTweenStart; // 0xb0
	FMulticastInlineDelegate OnTweenUpdate; // 0xc0
	FMulticastInlineDelegate OnTweenEnd; // 0xd0
	FMulticastInlineDelegate OnTweenActorHit; // 0xe0
	FMulticastInlineDelegate OnTweenActorBeginOverlap; // 0xf0
	FMulticastInlineDelegate OnTweenPrimitiveComponentHit; // 0x100
	FMulticastInlineDelegate OnTweenPrimitiveComponentBeginOverlap; // 0x110
	FMulticastInlineDelegate OnTweenSplinePointReached; // 0x120
};

struct ULandscapeMeshCollisionComponent {
	FGuid MeshGuid; // 0x590
};

struct USaferoomConfigurationAsset {
	TMap<EPartySafeRoomState, FGameplayTag> DoorIdentifierMapping; // 0x38
};

struct ULaserSightComponent {
	UParticleSystemComponent* FirstPersonDotParticle; // 0x190
	UParticleSystemComponent* ThirdPersonDotParticle; // 0x198
	FLaserSightConfig FirstPersonLaserSightConfig; // 0x1a0
	FLaserSightConfig ThirdPersonLaserSightConfig; // 0x1d8
};

struct UGameplayEffectMovementComponent {
	FDirectionalMoveSpeedModifier StandingBaseMoveSpeedScaleMod; // 0x248
	FDirectionalMoveSpeedModifier StandingADSMoveSpeedScaleMod; // 0x278
	FDirectionalMoveSpeedModifier StandingHipFiringMoveSpeedScaleMod; // 0x2a8
	FDirectionalMoveSpeedModifier StandingADSFiringMoveSpeedScaleMod; // 0x2d8
	FDirectionalMoveSpeedModifier CrouchedBaseMoveSpeedScaleMod; // 0x308
	FDirectionalMoveSpeedModifier CrouchedADSMoveSpeedScaleMod; // 0x338
	FDirectionalMoveSpeedModifier CrouchedHipFiringMoveSpeedScaleMod; // 0x368
	FDirectionalMoveSpeedModifier CrouchedADSFiringMoveSpeedScaleMod; // 0x398
	FGamePropertyFloatMod SprintingMoveSpeedScaleMod; // 0x3c8
	FGamePropertyFloatMod MovementNoiseScaleMod; // 0x3d8
};

struct ACommon_DismemberedPieceStaticMesh_BP_C {
	UStaticMeshComponent* StaticMesh; // 0x2a0
	USceneComponent* DefaultSceneRoot; // 0x2a8
};

struct UTitanStage2And3AnimInstance {
	UTitanStage2And3Component* TitanStage2And3Component; // 0x2c0
	bool bDormant; // 0x2c8
	bool bIdle; // 0x2c9
	bool bBiteTell; // 0x2ca
	bool bBiting; // 0x2cb
	bool bDead; // 0x2cc
	float BiteAngle; // 0x2d0
	bool bRetreat; // 0x2d4
	bool bDig; // 0x2d5
	bool bTailThrash; // 0x2d6
	bool bTailThrashLeft; // 0x2d7
	bool bTailThrashRight; // 0x2d8
	FTitanStage3TentacleAnimInfo TentacleFrontLeft; // 0x2e0
	FTitanStage3TentacleAnimInfo TentacleFrontRight; // 0x308
	FTitanStage3TentacleAnimInfo TentacleBackLeft; // 0x330
	FTitanStage3TentacleAnimInfo TentacleBackRight; // 0x358
	UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x380
	UAnimSequence* TailThrashLeftAnimSequence; // 0x388
	UAnimSequence* TailThrashRightAnimSequence; // 0x390
	UAnimSequence* DeathAnimSequence; // 0x398
};

struct ABirdSite_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4d0
	UDecalComponent* Decal_Bird_Entrails_01; // 0x4d8
	USceneComponent* DecalRoot; // 0x4e0
	UStaticMeshComponent* Nest_Piles_SML_02_SM2; // 0x4e8
	UStaticMeshComponent* Nest_Piles_SML_02_SM1; // 0x4f0
	UStaticMeshComponent* Nest_Piles_SML_01_SM; // 0x4f8
	USceneComponent* GibsRoot; // 0x500
	UGameCoachLessonsComponent* GameCoachLessons; // 0x508
	UScareBirdsScenario_BP_C* ScareBirdsScenario_BP; // 0x510
	UAlertComponent* Alert; // 0x518
	USphereComponent* SphereTrigger; // 0x520
	UBillboardComponent* Bird Site BB Icon; // 0x528
	bool ShowGibs; // 0x530
	FVector ScaleGibs; // 0x534
};

struct AProceduralFoliageVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x2d8
};

struct UHeroAnimInstance3P {
	FHeroAnimData3P HeroAnimData; // 0x7e0
	FHeroAnimState3P HeroAnimState; // 0xa30
	FHeroDraggedAnimData3P HeroDraggedAnimData; // 0xe30
	UPoseAsset* FacePoseAsset; // 0xe48
	FGobiAnimationCurveData FemaleScaleCurve; // 0xe50
	float FemaleCharacterScale; // 0xe60
	FOffHandIK ThirdPersonLeftHandIK; // 0xe64
	FOffHandIK ThirdPersonRightHandIK; // 0xe98
	UHeroLocoStances* LocoStances; // 0xed0
	FCachedGameplayTagQuery ForceUnarmedQuery; // 0xed8
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

struct USoundNodeAttenuation {
	USoundAttenuation* AttenuationSettings; // 0x60
	FSoundAttenuationSettings AttenuationOverrides; // 0x68
	char bOverrideAttenuation : 1; // 0x408
};

struct UShowLoginUICallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UUserInterfaceSettings {
	ERenderFocusRule RenderFocusRule; // 0x40
	TMap<EMouseCursor, FHardwareCursorReference> HardwareCursors; // 0x48
	TMap<EMouseCursor, FSoftClassPath> SoftwareCursors; // 0x98
	FSoftClassPath DefaultCursor; // 0xe8
	FSoftClassPath TextEditBeamCursor; // 0x100
	FSoftClassPath CrosshairsCursor; // 0x118
	FSoftClassPath HandCursor; // 0x130
	FSoftClassPath GrabHandCursor; // 0x148
	FSoftClassPath GrabHandClosedCursor; // 0x160
	FSoftClassPath SlashedCircleCursor; // 0x178
	float ApplicationScale; // 0x190
	EUIScalingRule UIScaleRule; // 0x194
	FSoftClassPath CustomScalingRuleClass; // 0x198
	FRuntimeFloatCurve UIScaleCurve; // 0x1b0
	bool bAllowHighDPIInGameMode; // 0x238
	bool bLoadWidgetsOnDedicatedServer; // 0x239
	TSoftObjectPtr<UGlobalStyle> GlobalStyle; // 0x240
	TArray<UObject*> CursorClasses; // 0x268
	UObject* CustomScalingRuleClassInstance; // 0x278
	UDPICustomScalingRule* CustomScalingRule; // 0x280
};

struct UFacialAnimationComponent {
	FName CurveSourceBindingName; // 0xf0
	float ExpressionBlendTime; // 0xf8
	float VisemeBlendOutTime; // 0xfc
	UFacialAnimationData* FacialAnimationData; // 0x100
	UDialogueComponent* DialogComponent; // 0x108
	ULipsyncHelperSubsystem* LipsyncHelperSubsystem; // 0x120
};

struct UInterpTrackInstFloatAnimBPParam {
	UAnimInstance* AnimScriptInstance; // 0x30
	float ResetFloat; // 0x38
};

struct UPerkComponent {
	FMulticastInlineDelegate OnPerkChange; // 0xe8
	FMulticastInlineDelegate OnPerkAdded; // 0xf8
	FMulticastInlineDelegate OnPerkRemoved; // 0x108
	FMulticastInlineDelegate OnPerkExpirationTimeChanged; // 0x118
	TArray<FActivePerk> ActivePerks; // 0x138
};

struct AAISpawnActor_Open_AvgBig_BP_C {
	UHeroLOSVolumeComponent* HeroLOSVolume; // 0x5b0
};

struct UParticleModuleEventReceiverKillParticles {
	char bStopSpawning : 1; // 0x48
};

struct UEnvQueryTest_HasPathedToRecently {
	float TimeSinceLastPathfind; // 0x208
	UBlackboardData* BlackboardAsset; // 0x210
	FBlackboardKeySelector PathFollowInfoBBKey; // 0x218
};

struct UAudioJostleBehaviors {
	TArray<FShrubBehaviorContainer> ShrubBehaviors; // 0x30
	TArray<FBumpBehaviorContainer> BumpBehaviors; // 0x40
	TArray<FRattleBehaviorContainer> RattleBehaviors; // 0x50
};

struct ULineOfSightSubsystem {
	TArray<FLOSTrace> LOSTraceBuffer; // 0x38
	TMap<AActor*, FLOSData> LOSData; // 0x48
	TMap<AActor*, FLOSActor> DynamicActors; // 0x98
};

struct UAnimContext_NavPathCorner {
	int32_t CornerIdx; // 0x70
};

struct AZombieStandIn {
	bool bIsMale; // 0x2a0
	FMulticastInlineDelegate OnAppearanceChanged; // 0x2a8
	UAnimSequence* MaleDefaultAnimation; // 0x2b8
	UAnimSequence* FemaleDefaultAnimation; // 0x2c0
	FGobiCharacterConfig MaleConfig; // 0x2c8
	FGobiCharacterConfig FemaleConfig; // 0x2f0
	FCharacterRandomizationData CharacterRandomizationData; // 0x318
};

struct UMaterialExpressionMultiply {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	float ConstA; // 0x70
	float ConstB; // 0x74
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

struct UMovieSceneTrack {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x58
	bool bIsEvalDisabled; // 0x5d
};

struct UGameplayAction_Pounce {
	FGameplayTag PounceComponentTag; // 0x218
};

struct UUsableComponent {
	FMulticastInlineDelegate OnBeginUse; // 0xe8
	FMulticastInlineDelegate OnEndUse; // 0xf8
	FMulticastInlineDelegate OnSuccessfulUse; // 0x108
	FMulticastInlineDelegate OnEnabledChanged; // 0x118
	FMulticastInlineDelegate OnSuccessfulUseDetailed; // 0x140
	bool bCanUseWhileFalling; // 0x168
	AActor* UsingActor; // 0x170
	FGameplayTag RequiredTriggerGameplayTag; // 0x178
	float RequiredUseTime; // 0x180
	bool bResetOnStopUse; // 0x184
	bool bSupportsTapAndHold; // 0x185
	TArray<APlayerSlot*> UsedByPlayerSlots; // 0x1f8
	bool bIsEnabled; // 0x208
	bool bDisableOnSuccessfulUse; // 0x209
	bool bAllowQuickUseItems; // 0x20a
	bool bAllowQuickUseItemsWithZeroRequiredUseTime; // 0x20b
	bool bRequireQuickUseItem; // 0x20c
	bool bQuickUseItemOnlyRequiredForFirstUse; // 0x20d
	bool bSingleUsePerPlayerSlot; // 0x20e
	FText DefaultPromptText; // 0x210
	FText SingleUsePerPlayerText; // 0x228
	FUsableProgressBarDefinition UsersProgressBarDef; // 0x240
	FUsableProgressBarDefinition OwnersProgressBarDef; // 0x268
	bool bCanDisablePingable; // 0x290
	TArray<UGameplayEffect*> OwnerAppliedGameplayEffects; // 0x298
	TArray<UGameplayEffect*> UserAppliedGameplayEffects; // 0x2a8
	FGameplayTagQuery OwnerRequiredTagQuery; // 0x2b8
	FGameplayTagContainer UsingActorBlockingTags; // 0x300
	FGameplayTagContainer TagsAppliedToOwner; // 0x320
	FGameplayTagContainer TagsAppliedToUsingActor; // 0x340
	FGameplayTag BeginUseCueTag; // 0x360
	FGameplayTag SuccessfulUseCueTag; // 0x368
	FGameplayTag EndUseCueTag; // 0x370
	FCurrencyCondition CurrencyCondition; // 0x378
	FHealthPercentCondition HealthPercentCondition; // 0x3a8
	FMissionObjectiveCondition MissionObjectiveCondition; // 0x3e0
	FSafeRoomVendorCondition SafeRoomVendorCondition; // 0x430
	EInventoryConditionMode InventoryConditionMode; // 0x460
	TArray<FUsableInventoryCondition> InventoryConditions; // 0x468
	TArray<FGameplayTagCondition> GameplayTagConditions; // 0x478
	bool bUsingActorCanBeBelow; // 0x488
	bool bRequireClearLineOfSight; // 0x489
	EUsableTraceLocation TraceLocation; // 0x48a
	float ClearLoSTraceTimeForgiveness; // 0x48c
	bool bFailTriggerTraceOnOwnerHit; // 0x490
	FGameplayTagContainer AssociatedMeshTags; // 0x498
	bool bPerformReachOutAnimation; // 0x4b8
	bool bBypassCapsuleCheckOnHold; // 0x4b9
	float CancelDistance; // 0x4bc
	UAkAudioEvent* FailedUseSound; // 0x4c0
	UAnimMontage* UseAnimation; // 0x4c8
	TArray<UAnimMontage*> UseAnimations; // 0x4d0
	bool bScaleUseAnimBasedOnUsersUseRate; // 0x4e0
	UAnimMontage* EndUseAnimation; // 0x4e8
	EUsablePriority UsablePriority; // 0x4f0
};

struct APlayerSpray {
	FSprayData SprayData; // 0x2a8
	UAkAudioEvent* SprayAudioEvent; // 0x2b8
	float AudioOffset; // 0x2c0
};

struct UDatasmithGLTFSceneImportData {
	FString Generator; // 0x30
	float Version; // 0x40
	FString Author; // 0x48
	FString License; // 0x58
	FString Source; // 0x68
};

struct UPingLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
};

struct UQuickInvitePlayerCardUserWidget {
	FPartyPlayer Player; // 0x458
};

struct UReportPlayerPopupUserWidget {
	TArray<FReportPlayerEntry> ReportOptions; // 0x478
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

struct UGameplayEffectApplyPerk {
	TArray<FDataTableRowHandle> PerksToApply; // 0x248
};

struct URig {
	TArray<FTransformBase> TransformBases; // 0x38
	TArray<FNode> Nodes; // 0x48
};

struct UGameThreatSystem {
	TArray<UGameThreatModifier*> ThreatModifierProfile; // 0x30
	float GameThreatStartAmount; // 0x40
	float ThreatLevels[0x6]; // 0x44
	float StressScalePerLevel[0x6]; // 0x5c
	TArray<UGameThreatModifier*> ThreatModifiers; // 0x78
};

struct UAchievementWriteCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UIpConnection {
	float SocketErrorDisconnectDelay; // 0x1a88
};

struct UVoipOverlayBaseUserWidget {
	bool bSkipScreenVisibilityBinding; // 0x458
};

struct UVoiceTalkersComponent {
	UMatchmaking* Matchmaking; // 0xe8
	APlayerController* Controller; // 0xf0
	FMulticastInlineDelegate OnAnyLocalPlayerTalkingChanged; // 0x100
	FMulticastInlineDelegate OnAnyRemotePlayerTalkingChanged; // 0x110
};

struct USynthKnob {
	float Value; // 0x148
	float StepSize; // 0x14c
	float MouseSpeed; // 0x150
	float MouseFineTuneSpeed; // 0x154
	char ShowTooltipInfo : 1; // 0x158
	FText ParameterName; // 0x160
	FText ParameterUnits; // 0x178
	FDelegate ValueDelegate; // 0x190
	FSynthKnobStyle WidgetStyle; // 0x1a0
	bool Locked; // 0x3f8
	bool IsFocusable; // 0x3f9
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x400
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x410
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x420
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x430
	FMulticastInlineDelegate OnValueChanged; // 0x440
};

struct UStaticMeshSimulationComponent {
	bool Simulating; // 0xf0
	bool bNotifyCollisions; // 0xf1
	EObjectStateTypeEnum ObjectType; // 0xf2
	float Mass; // 0xf4
	ECollisionTypeEnum CollisionType; // 0xf8
	EImplicitTypeEnum ImplicitType; // 0xf9
	int32_t MinLevelSetResolution; // 0xfc
	int32_t MaxLevelSetResolution; // 0x100
	EInitialVelocityTypeEnum InitialVelocityType; // 0x104
	FVector InitialLinearVelocity; // 0x108
	FVector InitialAngularVelocity; // 0x114
	float DamageThreshold; // 0x120
	UChaosPhysicalMaterial* PhysicalMaterial; // 0x128
	AChaosSolverActor* ChaosSolverActor; // 0x130
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x138
	TArray<UPrimitiveComponent*> SimulatedComponents; // 0x158
};

struct UVerticalBox {
	float ChildSpacing; // 0x170
};

struct UAnimNotify_ParticleCollider {
	FTransform Offset; // 0x40
	FName BoneName; // 0x70
	FImpactEmitterDefinition EmitterDef; // 0x78
};

struct UAISmartActor_BruteReachIn {
	UBoxComponent* EnabledBox; // 0xe8
	UStaticMeshComponent* VisualizationMesh; // 0xf0
	AAISmartActor* AISmartActor; // 0xf8
	UHealthComponent* DoorHealthComponent; // 0x100
	bool bShouldEnableOnOverlap; // 0x108
	float MaxSearchDistance; // 0x10c
	UGobiDamageType* DamageTypeClass; // 0x110
	TSet<AHeroCharacter*> ValidOverlappingActors; // 0x120
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

struct UCompositeDataTable {
	TArray<UDataTable*> ParentTables; // 0xd8
	TArray<UDataTable*> OldParentTables; // 0xe8
};

struct UEndpointSubmix {
	FName EndpointType; // 0x40
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x48
	UAudioEndpointSettingsBase* EndpointSettings; // 0x50
};

struct USlider {
	float Value; // 0x148
	FDelegate ValueDelegate; // 0x14c
	float MinValue; // 0x15c
	float MaxValue; // 0x160
	FSliderStyle WidgetStyle; // 0x168
	EOrientation Orientation; // 0x4d8
	FSlateColor SliderBarColor; // 0x4e0
	FSlateColor SliderHandleColor; // 0x510
	bool IndentHandle; // 0x540
	bool Locked; // 0x541
	bool MouseUsesStep; // 0x542
	bool RequiresControllerLock; // 0x543
	float StepSize; // 0x544
	bool bSnapToStep; // 0x548
	bool IsFocusable; // 0x549
	bool bIsFocusedOnHover; // 0x54a
	bool bLockFocusWhileControllerCaptured; // 0x54b
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x550
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x560
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x570
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x580
	FMulticastInlineDelegate OnValueChanged; // 0x590
};

struct UParticleModuleEventReceiverBase {
	EParticleEventType EventGeneratorType; // 0x38
	FName EventName; // 0x3c
};

struct URetainerBox {
	bool RenderOnInvalidation; // 0x160
	bool RenderOnPhase; // 0x161
	int32_t Phase; // 0x164
	int32_t PhaseCount; // 0x168
	UMaterialInterface* EffectMaterial; // 0x170
	FName TextureParameter; // 0x178
};

struct UGameplayEvalSet_Fall_C {
	FGameplayEval_NavArea IsFall; // 0x78
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xe8
	FGameplayEval_Distance IsAtFall; // 0x130
};

struct UMaterialExpressionCustom {
	FString Code; // 0x48
	ECustomMaterialOutputType OutputType; // 0x58
	FString Description; // 0x60
	TArray<FCustomInput> Inputs; // 0x70
	TArray<FCustomDefine> AdditionalDefines; // 0x80
	TArray<FString> IncludeFilePaths; // 0x90
};

struct APVPGameState {
	TArray<FQueuedZombieRespawnState> QueuedZombieRespawnState; // 0x6a8
	TMap<APawn*, AGobiPlayerState*> LastQueueZombiePlayerTurns; // 0x6b8
};

struct USphereComponent {
	float SphereRadius; // 0x4c8
};

struct UHLODProxy {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x30
};

struct USoundNodeDelay {
	float DelayMin; // 0x60
	float DelayMax; // 0x64
};

struct AItemPickupBase_BP_C {
	UProjectileMovementComponent* ProjectileMovement; // 0x540
};

struct UTRSListenerManagerSubsystem {
	UTRSListenerManager* Manager; // 0x38
};

struct UInAppPurchaseQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGameplayAction_Stumble {
	UGobiDamageType* StumbleOthersDamageType; // 0x2e8
	FGameplayTagQuery StumbleOthersTagsRequirement; // 0x2f0
	float StumbleOthersRadius; // 0x338
};

struct UPlayerMicIconUserWidget {
	UTexture2D* TalkingTexture; // 0x460
	UTexture2D* MutedTexture; // 0x468
	UImage* IconImage; // 0x470
};

struct UAISenseEvent_Hearing {
	FAINoiseEvent Event; // 0x30
};

struct UAITask_MoveTo {
	FMulticastInlineDelegate OnRequestFailed; // 0x78
	FMulticastInlineDelegate OnMoveFinished; // 0x88
	FAIMoveRequest MoveRequest; // 0x98
};

struct UAISpawnDeckGenerator {
	UAISpawnConditionEvaluatorSet* GenerationConditionEvalSet; // 0x38
	EChildDeckBehavior ChildDeckBehavior; // 0x40
	FIntPoint NumChildDecks; // 0x44
	bool bAllowChildDeckReuse; // 0x4c
	TArray<UAISpawnDeckGenerator*> ChildSpawnDeckGenerators; // 0x50
	TArray<FAISpawnCardRule> SpawnCardRules; // 0x60
	FGameplayTagContainer DeckTags; // 0x70
	int32_t MaxCardsInPlay; // 0x90
	float DelayBetweenCardDraws; // 0x94
	float DelayAfterDiscard; // 0x98
	TArray<FPerThreatLevelSpawnDelay> DelayBeforeInitialSpawn; // 0xa0
	TArray<FPerThreatLevelSpawnDelay> DelayBeforeWaveSpawn; // 0xb0
	float DelayBetweenCueAndSpawn; // 0xc0
	FIntPoint NumHordeWaves; // 0xc4
	float CompleteAfterSpawningStoppedTime; // 0xcc
	bool bCompleteWhenAllCardsAreInPlayOrExhausted; // 0xd0
	bool bCompleteWhenAllCardsAreExhausted; // 0xd1
	bool bApplyModCards; // 0xd2
	float DeckWeight; // 0xd4
	bool bRetryEQSWithoutOverrideIfNoSpawnersFound; // 0xd8
	bool bExcludeCardsInPlayFromGeneratedDeck; // 0xd9
	FDifficultyFloat SpawnHeatBlockStart; // 0xdc
};

struct UMaterialExpressionRotator {
	FExpressionInput Coordinate; // 0x48
	FExpressionInput Time; // 0x5c
	float CenterX; // 0x70
	float CenterY; // 0x74
	float Speed; // 0x78
	uint32_t ConstCoordinate; // 0x7c
};

struct UGameplayEffect {
	TArray<UGameplayEffect*> ChildEffectClasses; // 0x38
	FMulticastInlineDelegate OnFinished; // 0x48
	TArray<UGameplayEffect*> ChildEffects; // 0x60
	EGameplayEffectApplicationScheme ApplicationScheme; // 0x70
	bool bResetChildrenLifetimeOnLifetimeReset; // 0x71
	bool bInheritEffectSourceFromTargetsRecentDamage; // 0x72
	uint16_t MaxStackOrInstanceCount; // 0x74
	bool bOnlyOneActivePerTarget; // 0x76
	EGameplayEffectResetLifetimeScheme ResetLifetimeScheme; // 0x77
	float Duration; // 0x78
	float MinDuration; // 0x7c
	float MaxDuration; // 0x80
	FGameplayTagQuery GameplayTagsQuery; // 0x88
	FGameplayTagQuery InstigatorTagsQuery; // 0xd0
	FGameplayTagContainer PausingGameplayTags; // 0x118
	TArray<UGameplayEffect*> RemoveEffectsOfTypeOnApplication; // 0x138
	EGameplayEffectStackRemovalRules ApplicationEffectRemovalStackRules; // 0x148
	TArray<UGameplayEffect*> ApplyEffectsOnRemoval; // 0x150
	bool bRemoveOnInstigatorDestroyed; // 0x160
	UGameplayEffectsComponent* OwningGameplayEffectComponent; // 0x168
	FGameplayEffectContext EffectContext; // 0x170
	AActor* TargetActor; // 0x1f8
};

struct AMicroManagerDefaults {
	UMicroManagerDefaultsAsset* MicroManagerDefaults; // 0x2a0
};

struct UGameplayAction_FakeDeath {
	UMontageSet* FakeDeathMontageSet; // 0x210
	TMap<UAnimMontage*, UAnimMontage*> FakeDeathExitMontageMap; // 0x218
	float TimeToRemainDead; // 0x268
	float HealthPctThreshold; // 0x26c
	float FakeDeathChancePct; // 0x270
	float HeroDetectDistance; // 0x274
	FGameplayTagQuery HeroDetectTagQuery; // 0x278
	float FleeDeltaDistance; // 0x2c0
	UAnimContext_Enemy* EnemyContextClass; // 0x2c8
	FGameplayTag AttachSkeletalMeshTag; // 0x2d0
	FName AttachSkeletalMeshBone; // 0x2d8
	FRotator AttachRelativeRotation; // 0x2e0
	TArray<UGameplayEffect*> AttachTargetEffects; // 0x2f0
};

struct UAnimEvalSet_IncapRevive_C {
	FGameplayEval_ReviveSource ReviveSource; // 0xc0
};

struct USpotLightComponent {
	float InnerConeAngle; // 0x3b8
	float OuterConeAngle; // 0x3bc
	float LightShaftConeAngle; // 0x3c0
};

struct AGeometryCacheActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x2a0
};

struct USleeper_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
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
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x4b0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x528
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x558
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x5d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x600
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x678
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6a8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x720
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x750
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7f8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x870
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x8a0
	FAnimNode_Root AnimGraphNode_Root; // 0x950
};

struct ULevelCapture {
	bool bAutoStartCapture; // 0x228
	FGuid PrerequisiteActorId; // 0x234
};

struct UParticleModuleCameraOffset {
	FRawDistributionFloat CameraOffset; // 0x38
	char bSpawnTimeOnly : 1; // 0x68
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x6c
};

struct UInterpTrackInstSound {
	float LastUpdatePosition; // 0x30
	UAudioComponent* PlayAudioComp; // 0x38
};

struct AGeometryCollectionDebugDrawActor {
	FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x2a0
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x2a8
	bool bDebugDrawWholeCollection; // 0x2c0
	bool bDebugDrawHierarchy; // 0x2c1
	bool bDebugDrawClustering; // 0x2c2
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x2c3
	bool bShowRigidBodyId; // 0x2c4
	bool bShowRigidBodyCollision; // 0x2c5
	bool bCollisionAtOrigin; // 0x2c6
	bool bShowRigidBodyTransform; // 0x2c7
	bool bShowRigidBodyInertia; // 0x2c8
	bool bShowRigidBodyVelocity; // 0x2c9
	bool bShowRigidBodyForce; // 0x2ca
	bool bShowRigidBodyInfos; // 0x2cb
	bool bShowTransformIndex; // 0x2cc
	bool bShowTransform; // 0x2cd
	bool bShowParent; // 0x2ce
	bool bShowLevel; // 0x2cf
	bool bShowConnectivityEdges; // 0x2d0
	bool bShowGeometryIndex; // 0x2d1
	bool bShowGeometryTransform; // 0x2d2
	bool bShowBoundingBox; // 0x2d3
	bool bShowFaces; // 0x2d4
	bool bShowFaceIndices; // 0x2d5
	bool bShowFaceNormals; // 0x2d6
	bool bShowSingleFace; // 0x2d7
	int32_t SingleFaceIndex; // 0x2d8
	bool bShowVertices; // 0x2dc
	bool bShowVertexIndices; // 0x2dd
	bool bShowVertexNormals; // 0x2de
	bool bUseActiveVisualization; // 0x2df
	float PointThickness; // 0x2e0
	float LineThickness; // 0x2e4
	bool bTextShadow; // 0x2e8
	float TextScale; // 0x2ec
	float NormalScale; // 0x2f0
	float AxisScale; // 0x2f4
	float ArrowScale; // 0x2f8
	FColor RigidBodyIdColor; // 0x2fc
	float RigidBodyTransformScale; // 0x300
	FColor RigidBodyCollisionColor; // 0x304
	FColor RigidBodyInertiaColor; // 0x308
	FColor RigidBodyVelocityColor; // 0x30c
	FColor RigidBodyForceColor; // 0x310
	FColor RigidBodyInfoColor; // 0x314
	FColor TransformIndexColor; // 0x318
	float TransformScale; // 0x31c
	FColor LevelColor; // 0x320
	FColor ParentColor; // 0x324
	float ConnectivityEdgeThickness; // 0x328
	FColor GeometryIndexColor; // 0x32c
	float GeometryTransformScale; // 0x330
	FColor BoundingBoxColor; // 0x334
	FColor FaceColor; // 0x338
	FColor FaceIndexColor; // 0x33c
	FColor FaceNormalColor; // 0x340
	FColor SingleFaceColor; // 0x344
	FColor VertexColor; // 0x348
	FColor VertexIndexColor; // 0x34c
	FColor VertexNormalColor; // 0x350
	UBillboardComponent* SpriteComponent; // 0x358
};

struct AZombiePlayerStart {
	UNavLocationComponent* NavLocationComponent; // 0x2f8
};

struct UBTTask_RunBehavior {
	UBehaviorTree* BehaviorAsset; // 0x78
};

struct UAnimBoneCompressionCodec {
	FString Description; // 0x30
};

struct UUIScreen {
	FMulticastInlineDelegate OnClosed; // 0x458
	UAkAudioEvent* OpenSoundOverride; // 0x468
	UAkAudioEvent* CloseSoundOverride; // 0x470
	FSlateSound MuteClickOverride; // 0x478
	FSlateSound UnmuteClickOverride; // 0x490
	bool bIsFullscreen; // 0x4a8
	bool bDisableWorldRendering; // 0x4a9
	bool bForceVsync; // 0x4aa
	bool bHideWaypoints; // 0x4ab
	bool bRequiresPlayerPawn; // 0x4ac
	bool bPlayOpenSound; // 0x4ad
	bool bPlayCloseSound; // 0x4ae
	bool bIsPersistent; // 0x4af
	bool bExecuteSplitscreenActions; // 0x4b0
	bool bCenterCursorOnOpen; // 0x4b1
	bool bTrapFocus; // 0x4b2
	bool bAllowSystemSettings; // 0x4b3
	int32_t ZOrder; // 0x4b4
	FString ScreenName; // 0x4b8
	bool bSuppressBackgroundAudio; // 0x4c8
	EUIScreenPresence Presence; // 0x4c9
};

struct UMaterialExpressionThinTranslucentMaterialOutput {
	FExpressionInput TransmittanceColor; // 0x48
};

struct UEnvQueryGenerator_SmartActorGrid {
	AAISmartActorBase* SmartActorClass; // 0x58
	float SearchRadius; // 0x60
	UEnvQueryContext* SearchCenter; // 0x68
};

struct UHealOtherGameCoachLesson {
	FGameplayTagQuery SelectedItemTags; // 0x460
	FText OutOfRangeText; // 0x4a8
	FText InRangeText; // 0x4c0
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

struct USleeperNest_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x328
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x350
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x378
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x418
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x440
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x468
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x490
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x508
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x538
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x5b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5e0
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x658
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x688
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x730
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7d8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x850
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x880
};

struct UClusterBoilComponent {
	FMulticastInlineDelegate OnBoilDeath; // 0xe8
	FMulticastInlineDelegate OnGrew; // 0xf8
	bool bShrunk; // 0x108
	UHealthComponent* HealthComp; // 0x138
	UStaticMeshComponent* OwnerMesh; // 0x140
	UThreatComponent* ThreatComp; // 0x148
	UAkAudioEvent* HitSound; // 0x150
	UAkAudioEvent* DeathSound; // 0x158
	UParticleSystem* DeathExplosion; // 0x160
	UCurveFloat* ShrinkGrowCurve; // 0x168
	float GrowDelay; // 0x170
	FVector BoilWorldScale; // 0x174
};

struct UGobiButton {
	UAkAudioEvent* DefaultClickSound; // 0x4c8
};

struct UMaterialExpressionStaticSwitch {
	char DefaultValue : 1; // 0x48
	FExpressionInput A; // 0x4c
	FExpressionInput B; // 0x60
	FExpressionInput Value; // 0x74
};

struct UPaperDollAttachmentDragUserWidget {
	AItem* ParentItem; // 0x460
	FDataTableRowHandle AttachmentRowHandle; // 0x468
};

struct UUpdateHealthBarEnabledMod {
	bool bEnabled; // 0xd0
};

struct UItemDragPayload {
	AItem* Item; // 0x30
};

struct UAISenseConfig_TRSHearing {
	UAISense_TRSHearing* Implementation; // 0x50
	ESenseHearingMode HearingMode; // 0x58
	float HearingRange; // 0x5c
	float LoSHearingRange; // 0x60
	float HearingDistPathingMult; // 0x64
	char bUseLoSHearing : 1; // 0x68
	bool bAlertToInstigator; // 0x6c
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x70
};

struct UGameUserSettings {
	bool bUseVSync; // 0x30
	bool bUseDynamicResolution; // 0x31
	uint32_t ResolutionSizeX; // 0x88
	uint32_t ResolutionSizeY; // 0x8c
	uint32_t LastUserConfirmedResolutionSizeX; // 0x90
	uint32_t LastUserConfirmedResolutionSizeY; // 0x94
	bool bLastUserConfirmedHDREnabled; // 0x98
	int32_t WindowPosX; // 0x9c
	int32_t WindowPosY; // 0xa0
	int32_t FullscreenMode; // 0xa4
	int32_t LastConfirmedFullscreenMode; // 0xa8
	int32_t PreferredFullscreenMode; // 0xac
	uint32_t Version; // 0xb0
	int32_t AudioQualityLevel; // 0xb4
	int32_t LastConfirmedAudioQualityLevel; // 0xb8
	float FrameRateLimit; // 0xbc
	int32_t DesiredScreenWidth; // 0xc4
	bool bUseDesiredScreenHeight; // 0xc8
	int32_t DesiredScreenHeight; // 0xcc
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xd0
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xd4
	float LastRecommendedScreenWidth; // 0xd8
	float LastRecommendedScreenHeight; // 0xdc
	float LastCPUBenchmarkResult; // 0xe0
	float LastGPUBenchmarkResult; // 0xe4
	TArray<float> LastCPUBenchmarkSteps; // 0xe8
	TArray<float> LastGPUBenchmarkSteps; // 0xf8
	float LastGPUBenchmarkMultiplier; // 0x108
	bool bUseHDRDisplayOutput; // 0x10c
	int32_t HDRDisplayOutputNits; // 0x110
	FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x138
};

struct UBruteAnimInstance {
	FBruteAnimState BruteAnimState; // 0x7f8
};

struct UTweenVector2D {
	FMulticastInlineDelegate OnTweenStart; // 0xb0
	FMulticastInlineDelegate OnTweenUpdate; // 0xc0
	FMulticastInlineDelegate OnTweenEnd; // 0xd0
};

struct UGameplayTagsManager {
	TArray<FGameplayTagSource> TagSources; // 0xc8
	TArray<UDataTable*> GameplayTagTables; // 0x1b8
};

struct UGameplayTagsList {
	FString ConfigFileName; // 0x30
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x40
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

struct UBTService_SmartActor {
	FBlackboardKeySelector SmartActorBBKey; // 0x78
	FGameplayTagQuery RequiredSmartActorTags; // 0xa0
	FAIDataProviderGameplayTagContainerValue BlockingSmartActorTags; // 0xe8
	FAIDataProviderFloatValue MaxSearchDistance; // 0x138
};

struct UBTService_ClosestActorOfClass {
	AActor* SearchedActorClass; // 0xa0
};

struct AHeroCharacter {
	FMulticastInlineDelegate OnHeroWalkOffLedge; // 0x1448
	UAlertComponent* AlertComponent; // 0x1470
	FMulticastInlineDelegate OnHeroDefinitionChanged; // 0x1478
	FMulticastInlineDelegate OnSafeRoomChanged; // 0x1488
	ASafeRoom* CurSafeRoom; // 0x1498
	UBotPlaystyleConfigCollection* BotPlaystyleConfigSet; // 0x14a0
	float IncappedEyeHeight; // 0x1610
	FDataTableRowHandle HeroDefinitionRowHandle; // 0x1618
	FGameplayTag CameraRootGameplayTag; // 0x1638
	FGameplayTagContainer FiringTags; // 0x1640
	UItemObserverComponent* ItemObserverComponent; // 0x1660
	UHeroLedgeHangComponent* HeroLedgeHangComponent; // 0x1668
	FHeroFirstPersonMeshConfig FirstPersonMeshConfig; // 0x1670
	bool bMainHero; // 0x16c8
};

struct UTransformProxy {
	bool bRotatePerObject; // 0x78
	bool bSetPivotMode; // 0x79
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct AMolotovFlame {
	UParticleSystemComponent* ParticleSystemComponent; // 0x2a0
	FVector AudioSourceOffset; // 0x2a8
	float AudioInitialDelay; // 0x2b4
	UAkAudioEvent* FireStartLoopSound; // 0x2b8
	UAkAudioEvent* FireStopLoopSound; // 0x2c0
};

struct AServerStatReplicator {
	bool bUpdateStatNet; // 0x2a0
	bool bOverwriteClientStats; // 0x2a1
	uint32_t Channels; // 0x2a4
	uint32_t InRate; // 0x2a8
	uint32_t OutRate; // 0x2ac
	uint32_t MaxPacketOverhead; // 0x2b4
	uint32_t InRateClientMax; // 0x2b8
	uint32_t InRateClientMin; // 0x2bc
	uint32_t InRateClientAvg; // 0x2c0
	uint32_t InPacketsClientMax; // 0x2c4
	uint32_t InPacketsClientMin; // 0x2c8
	uint32_t InPacketsClientAvg; // 0x2cc
	uint32_t OutRateClientMax; // 0x2d0
	uint32_t OutRateClientMin; // 0x2d4
	uint32_t OutRateClientAvg; // 0x2d8
	uint32_t OutPacketsClientMax; // 0x2dc
	uint32_t OutPacketsClientMin; // 0x2e0
	uint32_t OutPacketsClientAvg; // 0x2e4
	uint32_t NetNumClients; // 0x2e8
	uint32_t InPackets; // 0x2ec
	uint32_t OutPackets; // 0x2f0
	uint32_t InBunches; // 0x2f4
	uint32_t OutBunches; // 0x2f8
	uint32_t OutLoss; // 0x2fc
	uint32_t InLoss; // 0x300
	uint32_t VoiceBytesSent; // 0x304
	uint32_t VoiceBytesRecv; // 0x308
	uint32_t VoicePacketsSent; // 0x30c
	uint32_t VoicePacketsRecv; // 0x310
	uint32_t PercentInVoice; // 0x314
	uint32_t PercentOutVoice; // 0x318
	uint32_t NumActorChannels; // 0x31c
	uint32_t NumConsideredActors; // 0x320
	uint32_t PrioritizedActors; // 0x324
	uint32_t NumRelevantActors; // 0x328
	uint32_t NumRelevantDeletedActors; // 0x32c
	uint32_t NumReplicatedActorAttempts; // 0x330
	uint32_t NumReplicatedActors; // 0x334
	uint32_t NumActors; // 0x338
	uint32_t NumNetActors; // 0x33c
	uint32_t NumDormantActors; // 0x340
	uint32_t NumInitiallyDormantActors; // 0x344
	uint32_t NumNetGUIDsAckd; // 0x348
	uint32_t NumNetGUIDsPending; // 0x34c
	uint32_t NumNetGUIDsUnAckd; // 0x350
	uint32_t ObjPathBytes; // 0x354
	uint32_t NetGUIDOutRate; // 0x358
	uint32_t NetGUIDInRate; // 0x35c
	uint32_t NetSaturated; // 0x360
};

struct UHeroLightComponent {
	FMulticastInlineDelegate OnHeroLightStatusChanged; // 0xe8
	bool bLightStatus; // 0xf8
	AActor* FlashLightBPs[0x6]; // 0x100
	float SmoothAlpha; // 0x130
	FName FPFlashlightPoseName; // 0x134
	FName TPFlashlightPoseName; // 0x148
	UPlayerViewComponent* PlayerViewComponent; // 0x158
	TArray<FLightParameterFlickerModifier> FlickerModifiers; // 0x1d8
	TArray<FLightParameterConfig> FlashLightConfig; // 0x1e8
	TArray<USpotLightComponent*> FlashLightComponents; // 0x1f8
};

struct UMorphTarget {
	USkeletalMesh* BaseSkelMesh; // 0x30
};

struct UAkXboxOneGDKInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0xfc
};

struct UWeakSpotsComponent {
	FMulticastInlineDelegate OnWeakSpotHealthChanged; // 0xf0
	FMulticastInlineDelegate OnWeakSpotAttachmentDestroyed; // 0x100
	bool bUseWeakspotsForTargetLineOfSightTests; // 0x110
	UAkAudioEvent* NonCharacterHitSound; // 0x118
	FWeakSpotsTuning WeakSpotsTuning; // 0x120
	TArray<FWeakSpotAttachment> InitialWeakSpotAttachments; // 0x148
	TArray<FWeakSpotSurface> WeakSpotSurfaces; // 0x158
	TArray<FWeakSpotAttachment> WeakSpotAttachments; // 0x178
	TArray<FWeakSpotAttachment> CachedWeakSpotAttachments; // 0x188
	int32_t MaxRecentHitTags; // 0x1d4
	bool bDestroyWeakSpotsOnDeath; // 0x1d8
	bool bWeakspotsUseAttachParentBound; // 0x1d9
};

struct UAnimEvalSet_Shared_Alerted_C {
	FGameplayEval_Angle AngleToAlert; // 0xc0
	FGameplayEval_DamageType DamageType; // 0x120
	FGameplayEval_RandomChance RandomChance; // 0x1e0
};

struct UAkWwiseTreeSelector {
	FMulticastInlineDelegate OnSelectionChanged; // 0x148
	FMulticastInlineDelegate OnItemDragged; // 0x158
};

struct UMicroManagerDefaultsAsset {
	TArray<FMicroManagerDefault> Defaults; // 0x38
};

struct UGameplayContext_LeapShortcut {
	float MinShortCuttingDistance; // 0x70
	float MaxShortCuttingDistance; // 0x74
	float ArcParam; // 0x78
	FPredictProjectilePathParams ProjectileParams; // 0x80
};

struct UBTDecorator_CompareDistance {
	FBlackboardKeySelector StartKey; // 0x70
	FBlackboardKeySelector EndKey; // 0x98
	EDistanceOperation Operation; // 0xc0
	FAIDataProviderFloatValue Distance; // 0xc8
	FAIDataProviderFloatValue Offset; // 0x100
	EOffsetOperation OffsetOperation; // 0x138
	float FlowControlDelay; // 0x13c
};

struct URagdollComponent {
	FMulticastInlineDelegate OnSetToRagdoll; // 0x100
	FMulticastInlineDelegate OnUnsetFromRagdoll; // 0x128
	AVFXCorpse* VFXCorpseActorType; // 0x140
	UDecalDefinition* BloodPoolDecalDef; // 0x148
	UAkAudioEvent* DissolveAudioEvent; // 0x150
	FName MeshTag; // 0x158
	bool bPhysicalizeDeathAnimations; // 0x160
	FGameplayTagQuery PhysicalizeDeathTagQuery; // 0x168
	FName PhysicalAnimProfile; // 0x1b0
	FName PhysicalizeBoneName; // 0x1b8
	FRagdollReplicatedData ReplicatedRagdollData; // 0x1e8
	FRagdollWaterData Water; // 0x218
	bool bHasBegunPhysicalizedDeath; // 0x258
};

struct UPhysicsSettings {
	float DefaultGravityZ; // 0x40
	float DefaultTerminalVelocity; // 0x44
	float DefaultFluidFriction; // 0x48
	int32_t SimulateScratchMemorySize; // 0x4c
	int32_t RagdollAggregateThreshold; // 0x50
	float TriangleMeshTriangleMinAreaThreshold; // 0x54
	bool bEnableShapeSharing; // 0x58
	bool bEnablePCM; // 0x59
	bool bEnableStabilization; // 0x5a
	bool bWarnMissingLocks; // 0x5b
	bool bEnable2DPhysics; // 0x5c
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x60
	ESettingsLockedAxis LockedAxis; // 0x94
	ESettingsDOF DefaultDegreesOfFreedom; // 0x95
	float BounceThresholdVelocity; // 0x98
	EFrictionCombineMode FrictionCombineMode; // 0x9c
	EFrictionCombineMode RestitutionCombineMode; // 0x9d
	float MaxAngularVelocity; // 0xa0
	float MaxDepenetrationVelocity; // 0xa4
	float ContactOffsetMultiplier; // 0xa8
	float MinContactOffset; // 0xac
	float MaxContactOffset; // 0xb0
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xb4
	ECollisionTraceFlag DefaultShapeComplexity; // 0xb5
	bool bDefaultHasComplexCollision; // 0xb6
	bool bSuppressFaceRemapTable; // 0xb7
	bool bSupportUVFromHitResults; // 0xb8
	bool bDisableActiveActors; // 0xb9
	bool bDisableKinematicStaticPairs; // 0xba
	bool bDisableKinematicKinematicPairs; // 0xbb
	bool bDisableCCD; // 0xbc
	bool bEnableEnhancedDeterminism; // 0xbd
	float AnimPhysicsMinDeltaTime; // 0xc0
	bool bSimulateAnimPhysicsAfterReset; // 0xc4
	float MaxPhysicsDeltaTime; // 0xc8
	bool bSubstepping; // 0xcc
	bool bSubsteppingAsync; // 0xcd
	float MaxSubstepDeltaTime; // 0xd0
	int32_t MaxSubsteps; // 0xd4
	float SyncSceneSmoothingFactor; // 0xd8
	float InitialAverageFrameRate; // 0xdc
	int32_t PhysXTreeRebuildRate; // 0xe0
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0xe8
	FBroadphaseSettings DefaultBroadphaseSettings; // 0xf8
	FChaosPhysicsSettings ChaosSettings; // 0x138
};

struct UMaterialExpressionGetMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x48
	TArray<FGuid> AttributeGetTypes; // 0x60
};

struct UPawnMovementComponent {
	APawn* PawnOwner; // 0x168
};

struct UPlayerMovementDebugComponent {
	UGobiPlayerMovementComponent* GobiPlayerMovementComponent; // 0xe8
	ACharacter* CharacterOwner; // 0xf0
};

struct UMatchmakingAnalytics {
	UMatchmaking* Matchmaking; // 0x280
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch {
	FGameplayTagContainer Tags; // 0x30
};

struct UEngine {
	UFont* TinyFont; // 0x38
	FSoftObjectPath TinyFontName; // 0x40
	UFont* SmallFont; // 0x58
	FSoftObjectPath SmallFontName; // 0x60
	UFont* MediumFont; // 0x78
	FSoftObjectPath MediumFontName; // 0x80
	UFont* LargeFont; // 0x98
	FSoftObjectPath LargeFontName; // 0xa0
	UFont* SubtitleFont; // 0xb8
	FSoftObjectPath SubtitleFontName; // 0xc0
	TArray<UFont*> AdditionalFonts; // 0xd8
	TArray<FString> AdditionalFontNames; // 0xf0
	UConsole* ConsoleClass; // 0x100
	FSoftClassPath ConsoleClassName; // 0x108
	UGameViewportClient* GameViewportClientClass; // 0x120
	FSoftClassPath GameViewportClientClassName; // 0x128
	ULocalPlayer* LocalPlayerClass; // 0x140
	FSoftClassPath LocalPlayerClassName; // 0x148
	AWorldSettings* WorldSettingsClass; // 0x160
	FSoftClassPath WorldSettingsClassName; // 0x168
	FSoftClassPath NavigationSystemClassName; // 0x180
	UNavigationSystemBase* NavigationSystemClass; // 0x198
	FSoftClassPath NavigationSystemConfigClassName; // 0x1a0
	UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1b8
	FSoftClassPath AvoidanceManagerClassName; // 0x1c0
	UAvoidanceManager* AvoidanceManagerClass; // 0x1d8
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1e0
	FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1e8
	FSoftClassPath GameUserSettingsClassName; // 0x200
	UGameUserSettings* GameUserSettingsClass; // 0x218
	FSoftClassPath AIControllerClassName; // 0x220
	UGameUserSettings* GameUserSettings; // 0x238
	ALevelScriptActor* LevelScriptActorClass; // 0x240
	FSoftClassPath LevelScriptActorClassName; // 0x248
	FSoftClassPath DefaultBlueprintBaseClassName; // 0x260
	FSoftClassPath GameSingletonClassName; // 0x278
	UObject* GameSingleton; // 0x290
	FSoftClassPath AssetManagerClassName; // 0x298
	UAssetManager* AssetManager; // 0x2b0
	UTexture2D* DefaultTexture; // 0x2b8
	FSoftObjectPath DefaultTextureName; // 0x2c0
	UTexture* DefaultDiffuseTexture; // 0x2d8
	FSoftObjectPath DefaultDiffuseTextureName; // 0x2e0
	UTexture2D* DefaultBSPVertexTexture; // 0x2f8
	FSoftObjectPath DefaultBSPVertexTextureName; // 0x300
	UTexture2D* HighFrequencyNoiseTexture; // 0x318
	FSoftObjectPath HighFrequencyNoiseTextureName; // 0x320
	UTexture2D* DefaultBokehTexture; // 0x338
	FSoftObjectPath DefaultBokehTextureName; // 0x340
	UTexture2D* DefaultBloomKernelTexture; // 0x358
	FSoftObjectPath DefaultBloomKernelTextureName; // 0x360
	UMaterial* WireframeMaterial; // 0x378
	FString WireframeMaterialName; // 0x380
	UMaterial* DebugMeshMaterial; // 0x390
	FSoftObjectPath DebugMeshMaterialName; // 0x398
	UMaterial* EmissiveMeshMaterial; // 0x3b0
	FSoftObjectPath EmissiveMeshMaterialName; // 0x3b8
	int32_t DefaultLineBatchComponentTranslucentSortPriority; // 0x3d0
	UMaterial* LevelColorationLitMaterial; // 0x3d8
	FString LevelColorationLitMaterialName; // 0x3e0
	UMaterial* LevelColorationUnlitMaterial; // 0x3f0
	FString LevelColorationUnlitMaterialName; // 0x3f8
	UMaterial* LightingTexelDensityMaterial; // 0x408
	FString LightingTexelDensityName; // 0x410
	UMaterial* ShadedLevelColorationLitMaterial; // 0x420
	FString ShadedLevelColorationLitMaterialName; // 0x428
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x438
	FString ShadedLevelColorationUnlitMaterialName; // 0x440
	UMaterial* RemoveSurfaceMaterial; // 0x450
	FSoftObjectPath RemoveSurfaceMaterialName; // 0x458
	UMaterial* VertexColorMaterial; // 0x470
	FString VertexColorMaterialName; // 0x478
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x488
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x490
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x4a0
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x4a8
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4b8
	FString VertexColorViewModeMaterialName_RedOnly; // 0x4c0
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4d0
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x4d8
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4e8
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x4f0
	FSoftObjectPath DebugEditorMaterialName; // 0x500
	UMaterial* ConstraintLimitMaterial; // 0x518
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x520
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x528
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x530
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x538
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x540
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x548
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x550
	UMaterial* InvalidLightmapSettingsMaterial; // 0x558
	FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x560
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x578
	FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x580
	UMaterial* ArrowMaterial; // 0x598
	UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x5a0
	FSoftObjectPath ArrowMaterialName; // 0x5a8
	FLinearColor LightingOnlyBrightness; // 0x5c0
	TArray<FLinearColor> ShaderComplexityColors; // 0x5d0
	TArray<FLinearColor> QuadComplexityColors; // 0x5e0
	TArray<FLinearColor> LightComplexityColors; // 0x5f0
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x600
	TArray<FLinearColor> LODColorationColors; // 0x610
	TArray<FLinearColor> HLODColorationColors; // 0x620
	TArray<FLinearColor> StreamingAccuracyColors; // 0x630
	float MaxPixelShaderAdditiveComplexityCount; // 0x640
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x644
	float MinLightMapDensity; // 0x648
	float IdealLightMapDensity; // 0x64c
	float MaxLightMapDensity; // 0x650
	char bRenderLightMapDensityGrayscale : 1; // 0x654
	float RenderLightMapDensityGrayscaleScale; // 0x658
	float RenderLightMapDensityColorScale; // 0x65c
	FLinearColor LightMapDensityVertexMappedColor; // 0x660
	FLinearColor LightMapDensitySelectedColor; // 0x670
	TArray<FStatColorMapping> StatColorMappings; // 0x680
	UPhysicalMaterial* DefaultPhysMaterial; // 0x690
	FSoftObjectPath DefaultPhysMaterialName; // 0x698
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x6b0
	TArray<FClassRedirect> ActiveClassRedirects; // 0x6c0
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x6d0
	TArray<FStructRedirect> ActiveStructRedirects; // 0x6e0
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6f0
	FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x6f8
	UTexture2D* BlueNoiseTexture; // 0x710
	FSoftObjectPath BlueNoiseTextureName; // 0x718
	UTexture2D* MiniFontTexture; // 0x730
	FSoftObjectPath MiniFontTextureName; // 0x738
	UTexture* WeightMapPlaceholderTexture; // 0x750
	FSoftObjectPath WeightMapPlaceholderTextureName; // 0x758
	UTexture2D* LightMapDensityTexture; // 0x770
	FSoftObjectPath LightMapDensityTextureName; // 0x778
	UGameViewportClient* GameViewport; // 0x798
	TArray<FString> DeferredCommands; // 0x7a0
	int32_t TickCycles; // 0x7b0
	int32_t GameCycles; // 0x7b4
	int32_t ClientCycles; // 0x7b8
	float NearClipPlane; // 0x7bc
	char bHardwareSurveyEnabled : 1; // 0x7c0
	char bSubtitlesEnabled : 1; // 0x7c0
	char bSubtitlesForcedOff : 1; // 0x7c0
	int32_t MaximumLoopIterationCount; // 0x7c4
	char bCanBlueprintsTickByDefault : 1; // 0x7c8
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7c8
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7c8
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7c8
	char bSmoothFrameRate : 1; // 0x7c8
	char bUseFixedFrameRate : 1; // 0x7c8
	float FixedFrameRate; // 0x7cc
	FFloatRange SmoothedFrameRateRange; // 0x7d0
	UEngineCustomTimeStep* CustomTimeStep; // 0x7e0
	FSoftClassPath CustomTimeStepClassName; // 0x808
	UTimecodeProvider* TimecodeProvider; // 0x820
	FSoftClassPath TimecodeProviderClassName; // 0x848
	bool bGenerateDefaultTimecode; // 0x860
	FFrameRate GenerateDefaultTimecodeFrameRate; // 0x864
	float GenerateDefaultTimecodeFrameDelay; // 0x86c
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x870
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x874
	char bShouldGenerateLowQualityLightmaps : 1; // 0x878
	FColor C_WorldBox; // 0x87c
	FColor C_BrushWire; // 0x880
	FColor C_AddWire; // 0x884
	FColor C_SubtractWire; // 0x888
	FColor C_SemiSolidWire; // 0x88c
	FColor C_NonSolidWire; // 0x890
	FColor C_WireBackground; // 0x894
	FColor C_ScaleBoxHi; // 0x898
	FColor C_VolumeCollision; // 0x89c
	FColor C_BSPCollision; // 0x8a0
	FColor C_OrthoBackground; // 0x8a4
	FColor C_Volume; // 0x8a8
	FColor C_BrushShape; // 0x8ac
	float StreamingDistanceFactor; // 0x8b0
	FDirectoryPath GameScreenshotSaveDirectory; // 0x8b8
	ETransitionType TransitionType; // 0x8c8
	FString TransitionDescription; // 0x8d0
	FString TransitionGameMode; // 0x8e0
	float MeshLODRange; // 0x8f0
	char bAllowMatureLanguage : 1; // 0x8f4
	float CameraRotationThreshold; // 0x8f8
	float CameraTranslationThreshold; // 0x8fc
	float PrimitiveProbablyVisibleTime; // 0x900
	float MaxOcclusionPixelsFraction; // 0x904
	char bPauseOnLossOfFocus : 1; // 0x908
	int32_t MaxParticleResize; // 0x90c
	int32_t MaxParticleResizeWarn; // 0x910
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x918
	float NetClientTicksPerSecond; // 0x928
	float DisplayGamma; // 0x92c
	float MinDesiredFrameRate; // 0x930
	FLinearColor DefaultSelectedMaterialColor; // 0x934
	FLinearColor SelectedMaterialColor; // 0x944
	FLinearColor SelectionOutlineColor; // 0x954
	FLinearColor SubduedSelectionOutlineColor; // 0x964
	FLinearColor SelectedMaterialColorOverride; // 0x974
	bool bIsOverridingSelectedColor; // 0x984
	char bEnableOnScreenDebugMessages : 1; // 0x988
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x988
	char bSuppressMapWarnings : 1; // 0x988
	char bDisableAILogging : 1; // 0x988
	uint32_t bEnableVisualLogRecordingOnStart; // 0x98c
	int32_t ScreenSaverInhibitorSemaphore; // 0x994
	char bLockReadOnlyLevels : 1; // 0x998
	FString ParticleEventManagerClassPath; // 0x9a0
	float SelectionHighlightIntensity; // 0x9b0
	float BSPSelectionHighlightIntensity; // 0x9b4
	float SelectionHighlightIntensityBillboards; // 0x9b8
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xc18
	TArray<FString> ServerActors; // 0xc28
	TArray<FString> RuntimeServerActors; // 0xc38
	float NetErrorLogInterval; // 0xc48
	char bStartedLoadMapMovie : 1; // 0xc4c
	int32_t NextWorldContextHandle; // 0xc68
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter {
	FName ParameterName; // 0x98
	FGuid ExpressionGUID; // 0xa0
	FName Group; // 0xb0
};

struct UHUDMissionEntryUserWidget {
	UHUDMissionObjectiveEntryUserWidget* ObjectiveWidget; // 0x458
	FDataTableRowHandle MissionHandle; // 0x460
};

struct UAnimNotify_SetPhysicalBlend {
	FName BoneName; // 0x40
	FName CollisionProfileName; // 0x48
	float PhysicsBlendWeight; // 0x50
	bool bSkipCustomPhysicsType; // 0x54
};

struct UUserDefinedImageCaptureProtocol {
	EDesiredImageFormat Format; // 0xe0
	bool bEnableCompression; // 0xe1
	int32_t CompressionQuality; // 0xe4
};

struct UMaterialExpressionCrossProduct {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
};

struct UPlayerMoneyUserWidget {
	bool bAnimate; // 0x458
	bool bAlwaysVisible; // 0x459
	FVector2D AnimStartCoordinates; // 0x45c
	FGobiEasingAnim CenterToDest; // 0x468
	FMoneyCountAnim CountAnim; // 0x488
	UAkAudioEvent* PositiveMoneyLoopAudioEvent; // 0x4b0
	UAkAudioEvent* PositiveMoneyLoopStopAudioEvent; // 0x4b8
	UAkAudioEvent* NegativeMoneyLoopAudioEvent; // 0x4c0
	UAkAudioEvent* NegativeMoneyLoopStopAudioEvent; // 0x4c8
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

struct UMultiLineEditableText {
	FText Text; // 0x168
	FText HintText; // 0x180
	FDelegate HintTextDelegate; // 0x198
	FTextBlockStyle WidgetStyle; // 0x1a8
	bool bIsReadOnly; // 0x448
	FSlateFontInfo Font; // 0x450
	bool SelectAllTextWhenFocused; // 0x4b0
	bool ClearTextSelectionOnFocusLoss; // 0x4b1
	bool RevertTextOnEscape; // 0x4b2
	bool ClearKeyboardFocusOnCommit; // 0x4b3
	bool AllowContextMenu; // 0x4b4
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4b5
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4b6
	FMulticastInlineDelegate OnTextChanged; // 0x4b8
	FMulticastInlineDelegate OnTextCommitted; // 0x4c8
	bool bIsFocusedOnHover; // 0x4d8
};

struct UTimelineComponent {
	FTimeline TheTimeline; // 0xe8
	char bIgnoreTimeDilation : 1; // 0x180
};

struct UCleanerNightmareAchievement {
	TArray<FDataTableRowHandle> Maps; // 0xb8
	FDataTableRowHandle Cleaner; // 0xc8
};

struct UMissionOverviewTeamUserWidget {
	bool bEnemyTeam; // 0x458
	EMatchmakingTeam WidgetMatchmakingTeam; // 0x459
	int32_t TeamScore; // 0x45c
};

struct UAnimSharingInstance {
	TArray<AActor*> RegisteredActors; // 0x30
	UAnimationSharingStateProcessor* StateProcessor; // 0xb0
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xf0
	UEnum* StateEnum; // 0x110
	AActor* SharingActor; // 0x118
};

struct UGeometryCacheComponent {
	UGeometryCache* GeometryCache; // 0x528
	bool bRunning; // 0x530
	bool bLooping; // 0x531
	float StartTimeOffset; // 0x534
	float PlaybackSpeed; // 0x538
	int32_t NumTracks; // 0x53c
	float ElapsedTime; // 0x540
	float Duration; // 0x574
	bool bManualTick; // 0x578
};

struct UMaterialExpressionCollectionParameter {
	UMaterialParameterCollection* Collection; // 0x48
	FName ParameterName; // 0x50
	FGuid ParameterId; // 0x58
};

struct UUniformVector {
	float Magnitude; // 0xe8
	FVector Direction; // 0xec
};

struct UEnvQueryTest_GameplayTags {
	FGameplayTagQuery TagQueryToMatch; // 0x208
	bool bUpdatedToUseQuery; // 0x250
	EGameplayContainerMatchType TagsToMatch; // 0x251
	FGameplayTagContainer GameplayTags; // 0x258
};

struct UFP_HeroAdd_Base_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x398
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x3c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x3e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x410
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x438
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x460
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x488
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x4b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x4d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_19; // 0x500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x5c8
	FAnimNode_StateResult AnimGraphNode_StateResult_24; // 0x640
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x670
	FAnimNode_StateResult AnimGraphNode_StateResult_23; // 0x698
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x6c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_18; // 0x6f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x7b8
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x830
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_17; // 0x860
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x928
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x950
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x9c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x9f8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_16; // 0xa20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0xae8
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0xb60
	FAnimNode_StateMachine AnimGraphNode_StateMachine_8; // 0xb90
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0xc40
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0xdd0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0xf60
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x10f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x1280
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x12a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x12d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x12f8
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x1320
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x1350
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x1378
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_15; // 0x13f0
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x14b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x14e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x1510
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_14; // 0x1588
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x1650
	FAnimNode_StateMachine AnimGraphNode_StateMachine_7; // 0x1680
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x1730
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x1760
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_13; // 0x17d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x18a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x18c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_12; // 0x1940
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x1a08
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x1a38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x1ae8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x1b10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x1b38
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x1b60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x1b90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x1bb8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11; // 0x1c30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x1cf8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10; // 0x1d70
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x1e38
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x1e68
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x1f18
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x1fd0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x2088
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x20b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x20d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x2100
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x2128
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2150
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x2178
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x21a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x21d0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9; // 0x2248
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x2310
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x2338
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x2368
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8; // 0x23e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x24a8
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x24d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x2500
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0x2578
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x2640
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x2668
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x2698
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x2748
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x2770
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x2798
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x27c8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x2840
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x2908
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x2980
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x29b0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x2a60
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x2b28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2be0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2c08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2c30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2c58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2c80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2ca8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x2cd0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x2cf8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x2d28
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x2d50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x2e18
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2e90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x2ec0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x2ee8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2fb0
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3028
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x3058
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3080
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x30b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3160
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x31d8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x32a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3368
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x33e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x3498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3550
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3608
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3630
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x3658
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3720
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x3810
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x3838
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3900
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3930
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3958
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3988
	FWeaponAnimState WeaponAnimState; // 0x3a38
	FGobiAnimationState GobiAnimationState; // 0x3a7c
	FFirstPersonAdditiveState AdditiveState; // 0x3ad4
	FWeaponAnimsFP FirstPersonAnimations; // 0x3b48
	FHeroAnimStateFP HeroAnimState; // 0x3b88
};

struct UGameplayContext_LadderTransform {
	bool bGetLadderTop; // 0x70
	bool bWithCapsuleOffset; // 0x71
};

struct UCrowdManager {
	TArray<ANavigationData*> NavDataSet; // 0x30
	TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x40
	TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x50
	int32_t MaxAgents; // 0x60
	float MaxAgentRadius; // 0x64
	int32_t MaxAvoidedAgents; // 0x68
	int32_t MaxAvoidedWalls; // 0x6c
	float NavmeshCheckInterval; // 0x70
	float PathOptimizationInterval; // 0x74
	float SeparationDirClamp; // 0x78
	float PathOffsetRadiusMultiplier; // 0x7c
	char bResolveCollisions : 1; // 0x80
};

struct UAudioSettings {
	char bDisableUE4AudioSystem : 1; // 0x40
	FSoftObjectPath DefaultSoundClassName; // 0x48
	FSoftObjectPath DefaultMediaSoundClassName; // 0x60
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x78
	FSoftObjectPath DefaultBaseSoundMix; // 0x90
	FSoftObjectPath VoiPSoundClass; // 0xa8
	FSoftObjectPath MasterSubmix; // 0xc0
	FSoftObjectPath ReverbSubmix; // 0xd8
	FSoftObjectPath EQSubmix; // 0xf0
	EVoiceSampleRate VoiPSampleRate; // 0x108
	float DefaultReverbSendLevel; // 0x10c
	int32_t MaximumConcurrentStreams; // 0x110
	float GlobalMinPitchScale; // 0x114
	float GlobalMaxPitchScale; // 0x118
	TArray<FAudioQualitySettings> QualityLevels; // 0x120
	char bAllowPlayWhenSilent : 1; // 0x130
	char bDisableMasterEQ : 1; // 0x130
	char bAllowCenterChannel3DPanning : 1; // 0x130
	uint32_t NumStoppingSources; // 0x134
	EPanningMethod PanningMethod; // 0x138
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x139
	FString DialogueFilenameFormat; // 0x140
};

struct UMaterialExpressionDivide {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	float ConstA; // 0x70
	float ConstB; // 0x74
};

struct USteeringControl {
	TArray<FMovementSpeedStance> MovementSpeedStances; // 0x38
	FVector2D CognitiveAbilityRange; // 0x48
};

struct APathToObjectiveActor {
	USceneComponent* DefaultRootComponent; // 0x2a0
	USplineComponent* PathToObjectiveSpline; // 0x2a8
};

struct UEditableStaticMeshAdapter {
	UStaticMesh* StaticMesh; // 0x30
	UStaticMesh* OriginalStaticMesh; // 0x38
	int32_t StaticMeshLODIndex; // 0x40
};

struct UMaterialExpressionDDY {
	FExpressionInput Value; // 0x48
};

struct USlateAccessibleWidgetData {
	bool bCanChildrenBeAccessible; // 0x30
	ESlateAccessibleBehavior AccessibleBehavior; // 0x31
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32
	FText AccessibleText; // 0x38
	FDelegate AccessibleTextDelegate; // 0x50
	FText AccessibleSummaryText; // 0x60
	FDelegate AccessibleSummaryTextDelegate; // 0x78
};

struct AAudioAreaTrigger {
	USceneComponent* InternalRootComponent; // 0x2a0
	TArray<UAkAudioBank*> AudioBanks; // 0x2a8
	TArray<FMultiPositioningInfo> OneAkEventMultipleTargetPoints; // 0x2c0
	TArray<FMultiAudioEventInfo> OneTargetPointMultipleAkEvents; // 0x2d0
	TArray<UAkAudioEvent*> DirectAudioAllEnter; // 0x2e0
	TArray<UAkAudioEvent*> DirectAudioAllExit; // 0x2f0
	TArray<UAkAudioEvent*> DirectAudioLocalEnter; // 0x300
	TArray<UAkAudioEvent*> DirectAudioLocalExit; // 0x310
	bool bDebug; // 0x320
};

struct AGobiGameState {
	FMulticastInlineDelegate OnSafeRoomStateChanged; // 0x578
	FMulticastInlineDelegate OnPlayerInsideChanged; // 0x588
	FMulticastInlineDelegate OnMissionDifficultyChanged; // 0x598
	FMulticastInlineDelegate OnCampaignEnded; // 0x5a8
	FMulticastInlineDelegate OnMissionEnded; // 0x5b8
	EPartySafeRoomState PartySafeRoomState; // 0x5c8
	bool bSafeRoomVendorsDisabled; // 0x5c9
	FMissionState MissionState; // 0x5d8
	bool bEnableVoice; // 0x5da
	EMissionDifficulty MissionDifficulty; // 0x5db
	float FriendlyFireModifier; // 0x5dc
	UGameplayCueManager* GameplayCueManager; // 0x5e0
	AActor* FallbackSpectatorLocationClass; // 0x5e8
	FVector FallbackSpectatorLocationOffset; // 0x5f0
	FSyncedPacketSimulationSettings PacketSimulationSettings; // 0x5fc
	UCharacterMovementDebugEndpoint* CharacterMovementDebugEndpoint; // 0x630
	UServerStatusComponent* ServerStatusComponent; // 0x638
	uint32_t GameThreatLevel; // 0x640
	FGameplayTag OnThreatLevelRaised; // 0x644
	FGameplayTag OnThreatLevelLowered; // 0x664
	float GameThreatNormalized; // 0x684
	float GameThreat; // 0x688
	EPacingPhase PacingPhase; // 0x68c
	int32_t CurrentMapChainIndex; // 0x690
	FString NextMapToUnlock; // 0x698
};

struct UPendingNetGame {
	UNetDriver* NetDriver; // 0x38
	UDemoNetDriver* DemoNetDriver; // 0x40
};

struct UInterpTrackInstDirector {
	AActor* OldViewTarget; // 0x30
};

struct UGameEngine {
	float MaxDeltaTime; // 0xe00
	float ServerFlushLogInterval; // 0xe04
	UGameInstance* GameInstance; // 0xe08
};

struct UAREnvironmentCaptureProbe {
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8
};

struct ULevelSequence {
	UMovieScene* MovieScene; // 0x350
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x358
	FLevelSequenceBindingReferences BindingReferences; // 0x3a8
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x448
	UObject* DirectorClass; // 0x498
};

struct UDistributionVectorConstant {
	FVector Constant; // 0x40
	char bLockAxes : 1; // 0x4c
	EDistributionVectorLockFlags LockedAxes; // 0x50
};

struct UMaterialExpressionSkyAtmosphereLightDirection {
	int32_t LightIndex; // 0x48
};

struct USubUVAnimation {
	UTexture2D* SubUVTexture; // 0x30
	int32_t SubImages_Horizontal; // 0x38
	int32_t SubImages_Vertical; // 0x3c
	ESubUVBoundingVertexCount BoundingMode; // 0x40
	EOpacitySourceMode OpacitySourceMode; // 0x41
	float AlphaThreshold; // 0x44
};

struct AImpostorGroupManager {
	USceneComponent* SceneRoot; // 0x2a0
	UBoxComponent* BoxComponent; // 0x2a8
	TArray<UStaticMesh*> ImpostorStationaryStaticMeshs; // 0x2b0
	TArray<UStaticMesh*> ImpostorSplineStaticMeshs; // 0x2c0
	TArray<UMaterialInterface*> StationaryImpostorMaterials; // 0x2d0
	TArray<UMaterialInterface*> SplineImpostorMaterials; // 0x2e0
	bool bStartPopulated; // 0x2f0
};

struct USoundNodeOscillator {
	char bModulateVolume : 1; // 0x60
	char bModulatePitch : 1; // 0x60
	float AmplitudeMin; // 0x64
	float AmplitudeMax; // 0x68
	float FrequencyMin; // 0x6c
	float FrequencyMax; // 0x70
	float OffsetMin; // 0x74
	float OffsetMax; // 0x78
	float CenterMin; // 0x7c
	float CenterMax; // 0x80
};

struct UPrimitiveComponent {
	float MinDrawDistance; // 0x238
	float LDMaxDrawDistance; // 0x23c
	char bAssetDecidesMaxDrawDistance : 1; // 0x240
	float CachedMaxDrawDistance; // 0x244
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x248
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x249
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x24a
	ELightmapType LightmapType; // 0x24b
	char bAssetDecidesEnableAutoLODGeneration : 1; // 0x24c
	char bUseMaxLODAsImposter : 1; // 0x24c
	char bBatchImpostersAsInstances : 1; // 0x24c
	char bNeverDistanceCull : 1; // 0x24c
	char bAlwaysCreatePhysicsState : 1; // 0x24d
	char bGenerateOverlapEvents : 1; // 0x24d
	char bAffectsGroundFog : 1; // 0x24d
	char bMultiBodyOverlap : 1; // 0x24d
	char bTraceComplexOnMove : 1; // 0x24d
	char bReturnMaterialOnMove : 1; // 0x24d
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x24d
	char bAllowCullDistanceVolume : 1; // 0x24d
	char bHasMotionBlurVelocityMeshes : 1; // 0x24e
	char bVisibleInReflectionCaptures : 1; // 0x24e
	char bVisibleInRayTracing : 1; // 0x24e
	char bRenderInMainPass : 1; // 0x24e
	char bRenderInDepthPass : 1; // 0x24e
	char bReceivesDecals : 1; // 0x24e
	char bOwnerNoSee : 1; // 0x24e
	char bOnlyOwnerSee : 1; // 0x24f
	char bTreatAsBackgroundForOcclusion : 1; // 0x24f
	char bUseAsOccluder : 1; // 0x24f
	char bSelectable : 1; // 0x24f
	char bForceMipStreaming : 1; // 0x24f
	char bHasPerInstanceHitProxies : 1; // 0x24f
	char CastShadow : 1; // 0x24f
	char bAffectDynamicIndirectLighting : 1; // 0x24f
	char bAffectDistanceFieldLighting : 1; // 0x250
	char bCastDynamicShadow : 1; // 0x250
	char bCastStaticShadow : 1; // 0x250
	char bCastVolumetricTranslucentShadow : 1; // 0x250
	char bSelfShadowOnly : 1; // 0x250
	char bCastFarShadow : 1; // 0x250
	char bCastInsetShadow : 1; // 0x250
	char bCastCinematicShadow : 1; // 0x250
	char bCastHiddenShadow : 1; // 0x251
	char bCastShadowAsTwoSided : 1; // 0x251
	char bLightAsIfStatic : 1; // 0x251
	char bLightAttachmentsAsGroup : 1; // 0x251
	char bExcludeFromLightAttachmentGroup : 1; // 0x251
	char bReceiveMobileCSMShadows : 1; // 0x251
	char bSingleSampleShadowFromStationaryLights : 1; // 0x251
	char bIgnoreRadialImpulse : 1; // 0x251
	char bIgnoreRadialForce : 1; // 0x252
	char bApplyImpulseOnDamage : 1; // 0x252
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x252
	char bFillCollisionUnderneathForNavmesh : 1; // 0x252
	char AlwaysLoadOnClient : 1; // 0x252
	char AlwaysLoadOnServer : 1; // 0x252
	char bUseEditorCompositing : 1; // 0x252
	char bRenderCustomDepth : 1; // 0x252
	char bRenderCustomDepthPlayer2 : 1; // 0x253
	char bRenderForeground : 1; // 0x253
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x254
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x256
	FLightingChannels LightingChannels; // 0x257
	FShadowChannels ShadowChannels; // 0x258
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x259
	int32_t CustomDepthStencilValue; // 0x25c
	FCustomPrimitiveData CustomPrimitiveData; // 0x260
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x270
	int32_t TranslucencySortPriority; // 0x288
	int32_t VisibilityId; // 0x28c
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x290
	int8_t VirtualTextureLodBias; // 0x2a0
	int8_t VirtualTextureCullMips; // 0x2a1
	int8_t VirtualTextureMinCoverage; // 0x2a2
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2a3
	float LpvBiasMultiplier; // 0x2a8
	float BoundsScale; // 0x2b4
	TArray<AActor*> MoveIgnoreActors; // 0x2c8
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x2d8
	FBodyInstance BodyInstance; // 0x2f8
	FMulticastSparseDelegate OnComponentHit; // 0x408
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x409
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x40a
	FMulticastSparseDelegate OnComponentWake; // 0x40d
	FMulticastSparseDelegate OnComponentSleep; // 0x40e
	FMulticastInlineDelegate OnBeginCursorOver; // 0x410
	FMulticastInlineDelegate OnEndCursorOver; // 0x420
	FMulticastInlineDelegate OnClicked; // 0x430
	FMulticastInlineDelegate OnReleased; // 0x440
	FMulticastInlineDelegate OnInputTouchBegin; // 0x450
	FMulticastInlineDelegate OnInputTouchEnd; // 0x460
	FMulticastInlineDelegate OnInputTouchEnter; // 0x470
	FMulticastInlineDelegate OnInputTouchLeave; // 0x480
	UPrimitiveComponent* LODParentPrimitive; // 0x4a8
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

struct UEnvQueryGenerator_OnCircle {
	FAIDataProviderFloatValue CircleRadius; // 0x88
	FAIDataProviderFloatValue SpaceBetween; // 0xc0
	FAIDataProviderIntValue NumberOfPoints; // 0xf8
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x130
	FEnvDirection ArcDirection; // 0x138
	FAIDataProviderFloatValue ArcAngle; // 0x158
	float AngleRadians; // 0x190
	UEnvQueryContext* CircleCenter; // 0x198
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1a0
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a8
	FEnvTraceData TraceData; // 0x1e0
	char bDefineArc : 1; // 0x210
};

struct UAnimCompress_RemoveTrivialKeys {
	float MaxPosDiff; // 0x48
	float MaxAngleDiff; // 0x4c
	float MaxScaleDiff; // 0x50
};

struct UGameplayEffectEmitterRadius {
	FGameplayTag EmitterComponentTag; // 0x238
	FGamePropertyFloatMod Radius; // 0x240
};

struct UClickDragInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UMaterialExpressionFmod {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
};

struct UGameplayAudioCaptionSubsystem {
	UDataTable* GameplayAudioCaptionsTable; // 0x50
	APlayerController* LocalController; // 0x58
};

struct UApplyTagMod {
	FGameplayTagContainer TagsToApply; // 0xd0
};

struct UJukeboxMusicPlaylist {
	UAkAudioBank* RequiredBank; // 0x38
	TSet<UAkAudioEvent*> TrackList; // 0x40
};

struct UBTDecorator_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	TArray<FName> ObservedKeyNames; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0xa0
	char bIsObservingBB : 1; // 0xa0
};

struct AMelee_AICharacterBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1330
	UPlayDeathReactionComponent* PlayDeathReaction; // 0x1338
	UDrench_Component_Zombie_BP_C* Drench; // 0x1340
	UDamageFilterComponent* DamageFilter; // 0x1348
	UGameplayContextComponent* GameplayContext; // 0x1350
	UAimAssistTargetComponent* AimAssistTarget; // 0x1358
	UAnimAttackWindowComponent* AnimAttackWindow; // 0x1360
	UPlayHitReactionComponent* PlayHitReaction; // 0x1368
	UAIZombieLifeStateComponent_BP_C* LifeStateComponent; // 0x1370
	UCapsuleComponent* Damage_Capsule; // 0x1378
	UGameplayEffectsComponent* GameplayEffects; // 0x1380
	UPhysicalAnimationComponent* PhysicalAnimation; // 0x1388
	UHealthComponent* Health; // 0x1390
	UGameplayEffect* DamageFilterEffect; // 0x1398
};

struct UMaterialExpressionBreakMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x48
};

struct UMaterialExpressionArctangent2 {
	FExpressionInput Y; // 0x48
	FExpressionInput X; // 0x5c
};

struct UGameplayTagsComponent {
	FMulticastInlineDelegate OnTagChanged; // 0xf0
	FGameplayTagContainer GameplayTags; // 0x130
};

struct UHighlightComponent {
	FHighlightState ActiveState; // 0xe8
	bool bDisableWhenVisible; // 0xec
	FGameplayTagContainer CustomHighlightMeshTags; // 0xf0
	AGobiCharacter* GobiCharacterOwner; // 0x110
};

struct UHeroAudioComponent_BP_C {
	float MovementThreshold; // 0x738
	bool TempFootstepsEnabled; // 0x73c
	UCharacterMovementComponent* OwnerMovementComponent; // 0x740
	TArray<FAudioScreenEffect_Struct> AudioScreenEffects; // 0x748
	float CumulativeDistance; // 0x758
	float CrouchThresholdScalar; // 0x75c
	float SprintScalar; // 0x760
};

struct UActSelectUserWidget {
	FMulticastInlineDelegate OnMapSelected; // 0x458
	FMulticastInlineDelegate OnMapChainToggled; // 0x468
	FMulticastInlineDelegate OnMapFocused; // 0x478
};

struct UOptionsGamepadLayoutUserWidget {
	EGamepadLayoutDisplayMode DisplayMode; // 0x458
};

struct UCardInsertUserWidget {
	UTextBlock* TitleText; // 0x458
	UTextBlock* WrapTitleText; // 0x460
	UWidgetSwitcher* TitleWidgetSwitcher; // 0x468
	UTextBlock* TypeText; // 0x470
	URichTextBlock* BodyText; // 0x478
	URichTextBlock* SPRewardText; // 0x480
	UOverlay* SharedTextContainer; // 0x488
	URichTextBlock* SharedBodyText; // 0x490
};

struct UPounceComponent {
	FMulticastInlineDelegate OnPounceCookStarted; // 0x1e0
	FMulticastInlineDelegate OnPounceCookEnded; // 0x1f0
	FMulticastInlineDelegate OnPounceEnded; // 0x200
	bool bUsesTuningData; // 0x210
	FName TuningDataIdentifier; // 0x214
	FPounceTuning PounceTuning; // 0x220
	FName GrabCollisionMeshTag; // 0x300
	TArray<UAnimMontage*> LeapMontages; // 0x308
	TArray<UAnimMontage*> LeapFromWallMontages; // 0x318
	bool bLeapMontagePlaysLoop; // 0x328
	TArray<UAnimMontage*> LandMontages; // 0x330
	FAttackStumbleMontage AttackStumbleMontage; // 0x340
	FAttackStumbleMontage AttackStumbleIncapMontage; // 0x350
	TArray<UAnimMontage*> AttackMontages; // 0x360
	TArray<UAnimMontage*> CookingMontages; // 0x370
	TArray<UAnimMontage*> LeapFromWallCookingMontages; // 0x380
	TArray<UAnimMontage*> ReleaseDeadCharacterMontages; // 0x390
	TArray<UGameplayEffect*> ApplyEffects; // 0x3a0
	TArray<UGameplayEffect*> ApplyAttackingEffects; // 0x3b0
	TArray<UGameplayEffect*> ApplyEndingEffects; // 0x3c0
	TArray<UGameplayEffect*> ApplyEndingEffectsToTarget; // 0x3d0
	TArray<UGameplayEffect*> ApplyEffectsToPouncedTarget; // 0x3e0
	TArray<UGameplayEffect*> CookingEffects; // 0x3f0
	FGameplayTagContainer AppliedTags; // 0x400
	FGameplayTagContainer AppliedLeapingTags; // 0x420
	FGameplayTagContainer LeapInterruptTags; // 0x440
	FGameplayTagContainer BlockingTags; // 0x460
	FGameplayTagContainer BlockingTargetTags; // 0x480
	FGameplayTagQuery RequiredTargetMoveTagQuery; // 0x4a0
	FGameplayTagQuery CancelTags; // 0x4e8
	FGameplayTagQuery CancelTargetTags; // 0x530
	TArray<FEnemyAudioEvent> AudioCookingStopEvents; // 0x578
	TArray<FEnemyAudioEvent> AudioCookingInterruptedEvents; // 0x588
	FGameplayTagQuery MoveIgnoreCharacters; // 0x598
	bool bCrouchWhenCooking; // 0x5e0
	bool bCrouchWhenLeaping; // 0x5e1
	bool bDamageInterruptsLeap; // 0x5e2
	FGameplayTagQuery DamageInterruptsLeapTagQuery; // 0x5e8
	UCurveFloat* SpeedMultiplierCurve; // 0x630
	float MaxDistanceFromGrabbedTarget; // 0x638
	UGobiDamageType* ChargeDamageTypeToFriendlies; // 0x640
	FName LineOfSightTargetComponentTag; // 0x648
	float LineOfSightSweepRadius; // 0x650
	float LineOfSightSweepHalfHeight; // 0x654
	FCollisionProfileName PounceCollisionProfileName; // 0x658
	float LandCheckAheadDotThreshold; // 0x660
	bool bIsBunnyKick; // 0x664
	FPounceBunnyKick BunnyKick; // 0x668
	AGobiCharacter* MCAI_Class; // 0x6c8
	bool bSetVictimCameraDownwards; // 0x6d0
	FPounceAIConfig AI; // 0x6d8
	FPouncePlayerConfig Player; // 0x6e8
	TArray<UGameplayEffect*> ReapplyEffectsOnLeapEnd; // 0x7e0
	AGobiCharacter* GameplayGrabbedCharacter; // 0x7f0
	bool bLeapInterrupted; // 0x7f8
	TArray<FQueuedEffect> QueuedEffectsToReapply; // 0x800
};

struct AVectorFieldVolume {
	UVectorFieldComponent* VectorFieldComponent; // 0x2a0
};

struct UCharacterSelectUserWidget {
	TMap<AGobiPlayerState*, FDataTableRowHandle> ClaimedCharacters; // 0x4b8
};

struct UGameplayActionsComponent {
	TArray<UGameplayAction*> ActionSet; // 0xf0
	TArray<UGameplayAction*> Actions; // 0x100
	TArray<UGameplayAction*> RunningActions; // 0x110
	TArray<UGameplayAction*> TickableActions; // 0x120
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

struct URadialFalloff {
	float Magnitude; // 0xe8
	float MinRange; // 0xec
	float MaxRange; // 0xf0
	float Default; // 0xf4
	float Radius; // 0xf8
	FVector Position; // 0xfc
	EFieldFalloffType Falloff; // 0x108
};

struct UMeshSimplificationSettings {
	FName MeshReductionModuleName; // 0x40
};

struct UGameplayEffectSpreadComponent {
	FGamePropertyFloatMod SpreadMinScaleMod; // 0x250
	FGamePropertyFloatMod SpreadMaxScaleMod; // 0x260
	FGamePropertyFloatMod SpreadDecayRateScaleMod; // 0x270
	FGamePropertyFloatMod FiringSpreadAddScaleMod; // 0x280
	FGamePropertyFloatMod MovingSpreadAddScaleMod; // 0x290
};

struct UModularSynthPresetBank {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x30
};

struct URattleEmitterNode {
	FRattleEmitterInfo RattleEmitterInfo; // 0xa0
};

struct UInterpTrackBoolProp {
	TArray<FBoolTrackKey> BoolTrack; // 0x78
	FName PropertyName; // 0x88
};

struct APreparationArea {
	USceneComponent* DefaultRootComponent; // 0x2a0
	uint32_t SupportedGameModes; // 0x2a8
};

struct UTitanComponent {
	FMulticastInlineDelegate OnPhaseKilled; // 0xe8
	ETitanState State; // 0xf8
	TArray<UTitanTentacleComponent*> TentacleComponents; // 0x168
	int32_t PhaseIdx; // 0x178
	UAnimMontage* DeathMontage; // 0x180
	UAnimMontage* TurnRight90Montage; // 0x188
	UAnimMontage* TurnLeft90Montage; // 0x190
	UAnimMontage* TurnRight180Montage; // 0x198
	UAnimMontage* TurnLeft180Montage; // 0x1a0
	TArray<FTitanPhase> Phases; // 0x1a8
};

struct UAISenseMod {
	TArray<FAISenseModInfo> SenseMods; // 0xd0
};

struct URigidBodyDynamicsComponent {
	USkeletalMesh* RigidBodySkelMesh; // 0xe8
	USkeletalMeshComponent* RigidBodySkelMeshComponent; // 0xf0
	float RigidBodyLifetime; // 0xf8
	UAnimationAsset* AnimationToPlay; // 0x100
	float ImpulseMagnitude; // 0x108
};

struct UPrimaryAssetLabel {
	FPrimaryAssetRules Rules; // 0x38
	char bLabelAssetsInMyDirectory : 1; // 0x58
	char bIsRuntimeLabel : 1; // 0x58
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x60
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x70
	FCollectionReference AssetCollection; // 0x80
};

struct UMaterialExpressionTangent {
	FExpressionInput Input; // 0x48
	float Period; // 0x5c
};

struct UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x148
};

struct UBTDecorator_CopyLocationFromBBKey {
	FBlackboardKeySelector BlackboardKey; // 0x70
	FBlackboardKeySelector BlackboardKeyToCopy; // 0x98
};

struct UTitanTailComponent {
	bool bOnLeft; // 0x120
	FGameplayTag AttackVolumeTag; // 0x124
	float SwipeAttackAngle; // 0x12c
	TArray<UGameplayEffect*> SwipeGameplayEffects; // 0x130
	UAnimMontage* SwipeLeftTellMontage; // 0x140
	UAnimMontage* SwipeLeftAttackMontage; // 0x148
	UAnimMontage* SwipeRightTellMontage; // 0x150
	UAnimMontage* SwipeRightAttackMontage; // 0x158
	float SweepForwardAngleMin; // 0x160
	float SweepForwardAngleMax; // 0x164
	TArray<UGameplayEffect*> SweepForwardGameplayEffects; // 0x168
	UAnimMontage* SweepForwardLeftTailOnLeftTellMontage; // 0x178
	UAnimMontage* SweepForwardLeftTailOnLeftAttackMontage; // 0x180
	UAnimMontage* SweepForwardLeftTailOnRightTellMontage; // 0x188
	UAnimMontage* SweepForwardLeftTailOnRightAttackMontage; // 0x190
	UAnimMontage* SweepForwardRightTailOnLeftTellMontage; // 0x198
	UAnimMontage* SweepForwardRightTailOnLeftAttackMontage; // 0x1a0
	UAnimMontage* SweepForwardRightTailOnRightTellMontage; // 0x1a8
	UAnimMontage* SweepForwardRightTailOnRightAttackMontage; // 0x1b0
};

struct UAnimContext_MantleTarget {
	bool bUseMantleLedgePos; // 0x78
};

struct UPrimitiveParameterCollection {
	TArray<FPrimitiveFloatParameter> FloatParameters; // 0x38
	TArray<FPrimitiveVectorParameter> VectorParameters; // 0x48
	FGuid StateId; // 0x58
	int32_t TotalNumberOfFloats; // 0x68
};

struct UBTTask_MakeNoise {
	float Loudnes; // 0x78
};

struct APVPHoldoutGameState {
	FMulticastInlineDelegate OnHoldoutStateChanged; // 0x708
	int32_t MaxRounds; // 0x718
	float SurvivalStartTime; // 0x71c
	float SurvivalEndTime; // 0x720
	float TeamForfeitTime; // 0x724
	TArray<int32_t> TeamSurvivalTimes; // 0x728
	EHoldoutResult HoldoutResult; // 0x738
	EMatchmakingTeam WinningTeam; // 0x739
};

struct UEditableTextWidgetStyle {
	FEditableTextStyle EditableTextStyle; // 0x38
};

struct USteeringBehavior_Seek {
	UAnimContext_Transform* TargetLocation; // 0x58
	bool bIgnoreZ; // 0x60
	bool bUseCharacterEyeHeightForFocusOffset; // 0x61
};

struct UDialoguePluginSettings {
	TSoftClassPtr<UObject> DialogueSystemClass; // 0x40
	TSoftClassPtr<UObject> DialoguePlaybackClass; // 0x68
	TSoftClassPtr<UObject> BankManagerClass; // 0x90
	TSoftObjectPtr<UDataTable> ConversationTable; // 0xb8
	TSoftObjectPtr<UDataTable> ResponseGroupTable; // 0xe0
	TSoftObjectPtr<UDataTable> PriorityTable; // 0x108
	TSoftObjectPtr<UDataTable> EventDefinitionTable; // 0x130
	TSoftObjectPtr<UDataTable> DialogueAnimationTable; // 0x158
	float FloatingConversationDelay; // 0x180
	int32_t FloatingConversationMax; // 0x184
	float ConversationBankLoadDelay; // 0x188
	bool PreloadAllConversationBanks; // 0x18c
	FString CommsRTPC; // 0x190
	float CommsInnerRadius; // 0x1a0
	float CommsOuterRadius; // 0x1a4
	float CommsOcclusionThreshold; // 0x1a8
};

struct UAnimNotify_ThrowProjectileBase {
	UProjectileThrowComponent* ProjectileThrowClass; // 0x40
};

struct UNiagaraLightRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x58
	char bAffectsTranslucency : 1; // 0x58
	char bOverrideRenderingEnabled : 1; // 0x58
	float RadiusScale; // 0x5c
	FVector ColorAdd; // 0x60
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x70
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0xe8
	FNiagaraVariableAttributeBinding PositionBinding; // 0x160
	FNiagaraVariableAttributeBinding ColorBinding; // 0x1d8
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x250
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2c8
};

struct UWidgetSwitcher {
	int32_t ActiveWidgetIndex; // 0x160
	FMulticastInlineDelegate OnActiveWidgetChanged; // 0x168
};

struct UTextureLODSettings {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x30
};

struct APartyBeaconHost {
	UPartyBeaconState* State; // 0x2c8
	bool bLogoutOnSessionTimeout; // 0x330
	float SessionTimeoutSecs; // 0x334
	float TravelSessionTimeoutSecs; // 0x338
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
	char bAllowCullDistanceVolume : 1; // 0x68
	TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x70
	TArray<FLandscapeSplineInterpPoint> Points; // 0x80
	FBox Bounds; // 0x90
	UControlPointMeshComponent* LocalMeshComponent; // 0xb0
};

struct UAkSettingsPerUser {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x30
	FFilePath WwiseMacInstallationPath; // 0x40
	FString WaapiIPAddress; // 0x50
	uint32_t WaapiPort; // 0x60
	bool SuppressWwiseProjectPathWarnings; // 0x64
};

struct UTweenRotator {
	FMulticastInlineDelegate OnTweenStart; // 0xb0
	FMulticastInlineDelegate OnTweenUpdate; // 0xc0
	FMulticastInlineDelegate OnTweenEnd; // 0xd0
	FMulticastInlineDelegate OnTweenActorHit; // 0xe0
	FMulticastInlineDelegate OnTweenActorBeginOverlap; // 0xf0
	FMulticastInlineDelegate OnTweenPrimitiveComponentHit; // 0x100
	FMulticastInlineDelegate OnTweenPrimitiveComponentBeginOverlap; // 0x110
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

struct UMaterialExpressionMax {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	float ConstA; // 0x70
	float ConstB; // 0x74
};

struct UAsyncActionHandleSaveGame {
	FMulticastInlineDelegate Completed; // 0x38
	USaveGame* SaveGameObject; // 0x68
};

struct AGobiGameStateDebugger {
	AGobiGameStateBase* GameState; // 0x2a0
};

struct UGobiPlayerMovementComponent {
	FMulticastInlineDelegate OnJump; // 0x950
	APlayerCharacter* OwningPlayer; // 0x968
	ULifeStateComponent* LifeStateComponent; // 0x970
	UCameraComponent* CameraComponent; // 0x978
	bool bIsJumping; // 0x980
	FGameplayTagQuery LookDisabledTags; // 0x988
	EEquipmentSlot InputSelectedEquipmentSlot; // 0xa88
	AItem* InputSelectedEquipmentActor; // 0xa90
	AActor* PotentialUsableActor; // 0xa98
	FVector_NetQuantize NetAccel; // 0xaa0
	float DebugFlySpeed; // 0xaac
	float MaxSprintSpeed; // 0xab0
	bool CrouchedJumpCancelsCrouch; // 0xab4
	TArray<FCustomDataProviderFloat> MantleVerticalSpeedMods; // 0xab8
	TArray<FCustomDataProviderFloat> MaxSpeedMods; // 0xac8
	float JumpOffLadderLateralSpeed; // 0xad8
	float MovementInputScaleLowerLimit; // 0xadc
	FLookInputHandler LookInputHandler; // 0xae0
	FGameplayTagContainer DisableInputMovementTags; // 0xcb0
	FGameplayTagQuery DisableJumpInputTags; // 0xcd0
	bool bTickSpringArms; // 0xd18
	bool bServerEnforcedFixedTimestep; // 0xd54
	UPrimitiveComponent* ServerMovementBase; // 0xd58
	TArray<FQueuedClientAdjustment> QueuedClientAdjustments; // 0xe68
};

struct UEOSSettings {
	FString CacheDir; // 0x30
	FString DefaultArtifactName; // 0x40
	int32_t TickBudgetInMilliseconds; // 0x50
	bool bEnableOverlay; // 0x54
	bool bEnableSocialOverlay; // 0x55
	bool bShouldEnforceBeingLaunchedByEGS; // 0x56
	TArray<FString> TitleStorageTags; // 0x58
	int32_t TitleStorageReadChunkLength; // 0x68
	TArray<FArtifactSettings> Artifacts; // 0x70
	bool bUseEAS; // 0x80
	bool bUseEOSConnect; // 0x81
	bool bMirrorStatsToEOS; // 0x82
	bool bMirrorAchievementsToEOS; // 0x83
	bool bUseEOSSessions; // 0x84
	bool bMirrorPresenceToEAS; // 0x85
};

struct UMatchmakingDifficultyUserWidget {
	FMulticastInlineDelegate OnDifficultyFocused; // 0x458
};

struct UPvPEventsFeedUserWidget {
	UGobiUserWidget* EntryWidget; // 0x458
	int32_t MaxEntries; // 0x460
	float EntryExpireSeconds; // 0x464
	TArray<FPvPEventData> PvPEventEntries; // 0x468
};

struct USourceEffectWaveShaperPreset {
	FSourceEffectWaveShaperSettings Settings; // 0x78
};

struct UPawnAction_Repeat {
	UPawnAction* ActionToRepeat; // 0xa0
	UPawnAction* RecentActionCopy; // 0xa8
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0
};

struct UInterpTrackFloatMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x98
	FName ParamName; // 0xa8
};

struct UNiagaraPreviewAxis_InterpParamVector2D {
	FVector2D Min; // 0x40
	FVector2D Max; // 0x48
};

struct UMatchSettingToggleButtonUserWidget {
	FMulticastInlineDelegate OnSuccessfulClick; // 0x458
	bool bIsToggle; // 0x469
	UTexture2D* CheckBoxCheckedImage; // 0x470
	UTexture2D* CheckBoxUncheckedImage; // 0x478
};

struct UARTrackableNotifyComponent {
	FMulticastInlineDelegate OnAddTrackedGeometry; // 0xe8
	FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xf8
	FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0x108
	FMulticastInlineDelegate OnAddTrackedPlane; // 0x118
	FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x128
	FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x138
	FMulticastInlineDelegate OnAddTrackedPoint; // 0x148
	FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x158
	FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x168
	FMulticastInlineDelegate OnAddTrackedImage; // 0x178
	FMulticastInlineDelegate OnUpdateTrackedImage; // 0x188
	FMulticastInlineDelegate OnRemoveTrackedImage; // 0x198
	FMulticastInlineDelegate OnAddTrackedFace; // 0x1a8
	FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1b8
	FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1c8
	FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1d8
	FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1e8
	FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1f8
	FMulticastInlineDelegate OnAddTrackedObject; // 0x208
	FMulticastInlineDelegate OnUpdateTrackedObject; // 0x218
	FMulticastInlineDelegate OnRemoveTrackedObject; // 0x228
};

struct UMutilationConfig {
	TMap<EMutilationRegion, FMutilationPieceConfig> Pieces; // 0x38
	bool bSkelPiecesCanStopTicking; // 0x88
	int32_t ExplodeRegions; // 0x8c
	AActor* DismemberedPieceSkelMeshActor; // 0x90
	AActor* DismemberedPieceStaticMeshActor; // 0x98
};

struct UARCandidateObject {
	TArray<char> CandidateObjectData; // 0x38
	FString FriendlyName; // 0x48
	FBox BoundingBox; // 0x58
};

struct UMaterialExpressionPerInstanceCustomData {
	FExpressionInput DefaultValue; // 0x48
	float ConstDefaultValue; // 0x5c
	uint32_t DataIndex; // 0x60
};

struct UParticleModuleLocationDirect {
	FRawDistributionVector Location; // 0x38
	FRawDistributionVector LocationOffset; // 0x80
	FRawDistributionVector ScaleFactor; // 0xc8
	FRawDistributionVector Direction; // 0x110
};

struct UCameraModifier_CameraShake {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x50
	TMap<UCameraShake*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x60
	float SplitScreenShakeScale; // 0xb0
};

struct ULeaderboardListItem {
	FLeaderboardData Data; // 0x30
	int32_t Index; // 0x48
	FText ChallengeRankName; // 0x50
	UTexture2D* ChallengeRankIcon; // 0x68
	bool bIsLocalPlayer; // 0x70
};

struct UPhysicsHandleComponent {
	UPrimitiveComponent* GrabbedComponent; // 0xe8
	char bSoftAngularConstraint : 1; // 0xf8
	char bSoftLinearConstraint : 1; // 0xf8
	char bInterpolateTarget : 1; // 0xf8
	float LinearDamping; // 0xfc
	float LinearStiffness; // 0x100
	float AngularDamping; // 0x104
	float AngularStiffness; // 0x108
	float InterpolationSpeed; // 0x170
};

struct UOptionsToggleSpinnerWidget {
	FMulticastInlineDelegate SpinnerChanged; // 0x458
};

struct UMovieSceneObjectPropertyTrack {
	UObject* PropertyClass; // 0x90
};

struct UAkGameObject {
	UAkAudioEvent* AkAudioEvent; // 0x230
	FString EventName; // 0x238
};

struct AAcousticVolume {
	FBox BoundingBox; // 0x2f8
};

struct UAnimNotifyState_TimedParticleEffect {
	UParticleSystem* PSTemplate; // 0x38
	FName SocketName; // 0x40
	FVector LocationOffset; // 0x48
	FRotator RotationOffset; // 0x54
	bool bDestroyAtEnd; // 0x60
	FName OverrideComponentTag; // 0x64
	EAttachLocation AttachLocationType; // 0x6c
	FGameplayTagQuery TagQueryRequirment; // 0x70
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

struct UGobiViewportClient {
	AFOVManager* FOVManager; // 0x3a0
};

struct UMatchmakingModeUserWidget {
	FMulticastInlineDelegate OnViewSwitched; // 0x458
	bool bIsActive; // 0x468
};

struct UFindTurnBasedMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UOptionsTextComboBoxWidget {
	TMap<FString, FText> ComboOptions; // 0x480
};

struct UBTDecorator_CheckEnemyDamageAttackable {
	FBlackboardKeySelector EnemyBBKey; // 0x70
	bool bOwnerDamageOnly; // 0x98
	FAIDataProviderIntValue MaxAttackFailures; // 0xa0
	bool bUseAttackTime; // 0xd8
	FAIDataProviderFloatValue MaxTimeSinceAttackFailure; // 0xe0
	bool bUseAttackDistance; // 0x118
	FAIDataProviderBoolValue UseAttackLocation; // 0x120
	FAIDataProviderFloatValue MinDistanceSinceAttackFailure; // 0x158
	FAIDataProviderFloatValue MaxDistance; // 0x190
};

struct UAnimNotify_FocusTrackingRefPose {
	FFocusTrackingRefPose RefPoseData; // 0x40
	FName SlotName; // 0xa0
};

struct UFallingRockComponent {
	EFallingRockState State; // 0xe8
	TArray<FFallingRockTell> FallTells; // 0xf0
	float ExplodeDuration; // 0x100
	FGameplayTag ImpactEffectParticleSystemTag; // 0x104
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x38
};

struct UAssetManagerSettings {
	TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40
	TArray<FDirectoryPath> DirectoriesToExclude; // 0x50
	TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x60
	TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x70
	bool bOnlyCookProductionAssets; // 0x80
	bool bShouldManagerDetermineTypeAndName; // 0x81
	bool bShouldGuessTypeAndNameInEditor; // 0x82
	bool bShouldAcquireMissingChunksOnLoad; // 0x83
	TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x88
	TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x98
	TArray<FAssetManagerRedirect> AssetPathRedirects; // 0xa8
	TSet<FName> MetaDataTagsForAssetRegistry; // 0xb8
};

struct UBTDecorator_KeepInCone {
	float ConeHalfAngle; // 0x70
	FBlackboardKeySelector ConeOrigin; // 0x78
	FBlackboardKeySelector Observed; // 0xa0
	char bUseSelfAsOrigin : 1; // 0xc8
	char bUseSelfAsObserved : 1; // 0xc8
};

struct UGameplayContext_MeleeImpactLocation {
	FGameplayTag MeleeComponentGameplayTag; // 0x78
};

struct AControlPointMeshActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x2a0
};

struct UObservationSystemSettings {
	float ObserverUpdateTime; // 0x30
	float ObservationUpdateTime; // 0x34
	ECollisionChannel DefaultLOSCollisionChannel; // 0x38
	bool bTraceComplex; // 0x39
	EObservationTick Tick; // 0x3a
};

struct UAnimBoneCompressionCodec_ACL {
	UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x40
};

struct UARPin {
	UARTrackedGeometry* TrackedGeometry; // 0x30
	USceneComponent* PinnedComponent; // 0x38
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd0
};

struct ATransformGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x2a0
	UPrimitiveComponent* TranslateY; // 0x2a8
	UPrimitiveComponent* TranslateZ; // 0x2b0
	UPrimitiveComponent* TranslateYZ; // 0x2b8
	UPrimitiveComponent* TranslateXZ; // 0x2c0
	UPrimitiveComponent* TranslateXY; // 0x2c8
	UPrimitiveComponent* RotateX; // 0x2d0
	UPrimitiveComponent* RotateY; // 0x2d8
	UPrimitiveComponent* RotateZ; // 0x2e0
	UPrimitiveComponent* UniformScale; // 0x2e8
	UPrimitiveComponent* AxisScaleX; // 0x2f0
	UPrimitiveComponent* AxisScaleY; // 0x2f8
	UPrimitiveComponent* AxisScaleZ; // 0x300
	UPrimitiveComponent* PlaneScaleYZ; // 0x308
	UPrimitiveComponent* PlaneScaleXZ; // 0x310
	UPrimitiveComponent* PlaneScaleXY; // 0x318
};

struct UCommWheelActionsData {
	TMap<ECommWheelAction, FCommWheelActionDefinition> ActionDefinitions; // 0x38
	TArray<FCommWheelActionPage> SurvivorActions; // 0x88
	TArray<FCommWheelActionPage> ZombieActions; // 0x98
};

struct UEconomyAnalyticsComponent {
	UDataTable* EntitlementsTable; // 0x150
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles {
	uint32_t NumParticles; // 0x30
};

struct UAnimNotifyState_ApplyGameplayEffects {
	TArray<UGameplayEffect*> GameplayEffects; // 0x38
};

struct UHealthComponent {
	FMulticastInlineDelegate OnDamage; // 0xf0
	FMulticastInlineDelegate OnDeath; // 0x160
	FMulticastInlineDelegate OnHeal; // 0x170
	FMulticastInlineDelegate OnHealthChanged; // 0x198
	FMulticastInlineDelegate OnTemporaryHealthChanged; // 0x1a8
	FMulticastInlineDelegate OnRecentDamageInfoChanged; // 0x1b8
	FGamePropertyFloat HealingReceivedScale; // 0x1f0
	FGamePropertyFloat HealingAppliedScale; // 0x228
	FGamePropertyFloat TemporaryHealingReceivedScale; // 0x260
	FGamePropertyFloat TemporaryHealingAppliedScale; // 0x298
	FGamePropertyFloat CriticalHealMultiplier; // 0x340
	FGamePropertyFloat PermanentDamageScale; // 0x378
	FGamePropertyFloat HealthRegenPerSecond; // 0x3b0
	FGamePropertyFloat HealthDepletedMaxHealthPenalty; // 0x3e8
	float InitialHealthPercent; // 0x420
	FGamePropertyFloat InitialMaxHealth; // 0x428
	float MaxHealthLowerLimit; // 0x460
	FHealthTuning HealthTuning; // 0x468
	float CurrentMaxHealth; // 0x5b0
	UDamageFilter* DamageFilterClass; // 0x5b8
	int32_t MaxRecentDamageInfo; // 0x5d0
	FTemporaryHealthParams DefaultTempHealthParams; // 0x5d8
	TArray<FReplicatedDamageInfo> RecentDamageInfo; // 0x5f0
	UArmorComponent* ArmorComponent; // 0x608
	UWeakSpotsComponent* WeakSpotsComponent; // 0x610
	float Health; // 0x618
	float TemporaryHealth; // 0x61c
	FTemporaryHealthParams TemporaryHealthParams; // 0x628
	int32_t HealEventCounter; // 0x640
	FGameplayTagQuery PermanentDamageBlockingTagQuery; // 0x718
	FGameplayTagQuery WeakSpotOnlyDamageTagQuery; // 0x760
	FGameplayTagContainer TemporaryHealthGrantedTags; // 0x7a8
	FName PersistentHealthName; // 0x7c8
	bool bAllowDamageNumbers; // 0x7d0
	bool bIgnoreDamageFromBots; // 0x7d1
};

struct UAnimNotify_AddTagToAttachedEnemy {
	FGameplayTagContainer TagsToAdd; // 0x40
	UAnimContext_Enemy* EnemyContextClass; // 0x60
};

struct UGarbageCollectionSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x40
	char FlushStreamingOnGC : 1; // 0x44
	char AllowParallelGC : 1; // 0x44
	char ForceParallelGCOnDedicatedServers : 1; // 0x44
	char IncrementalBeginDestroyEnabled : 1; // 0x44
	char MultithreadedDestructionEnabled : 1; // 0x44
	char CreateGCClusters : 1; // 0x44
	char AssetClusteringEnabled : 1; // 0x44
	char ActorClusteringEnabled : 1; // 0x44
	char BlueprintClusteringEnabled : 1; // 0x45
	char UseDisregardForGCOnDedicatedServers : 1; // 0x45
	int32_t MinGCClusterSize; // 0x48
	int32_t NumRetriesBeforeForcingGC; // 0x4c
	int32_t MaxObjectsNotConsideredByGC; // 0x50
	int32_t SizeOfPermanentObjectPool; // 0x54
	int32_t MaxObjectsInGame; // 0x58
	int32_t MaxObjectsInEditor; // 0x5c
};

struct UMaterialExpressionPrimitiveParameter {
	UPrimitiveParameterCollection* Collection; // 0x48
	FName ParameterName; // 0x50
	int32_t ParameterIndex; // 0x58
};

struct UPreRenderedCinematicScreen {
	FDataTableRowHandle CinematicRowHandle; // 0x558
	UMediaPlayer* MediaPlayer; // 0x578
};

struct UGameplayAction_HagDeath {
	TArray<UMontageSet*> MontageSets; // 0x210
	UAnimContext_Enemy* EnemyContextClass; // 0x220
	FGameplayTag AttachSkeletalMeshTag; // 0x228
	FName AttachSkeletalMeshBone; // 0x230
	FRotator AttachRelativeRotation; // 0x238
	TArray<UGameplayEffect*> AttachTargetEffects; // 0x248
};

struct ULadderUsableComponent {
	FText ReleasePromptText; // 0x4f8
};

struct ATitan_AcidBloodPool_S2_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UBoxComponent* Box; // 0x340
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x348
};

struct UGameplayEffectApplyGE {
	UGameplayEffect* EffectClass; // 0x238
};

struct UParticleModuleTypeDataGpu {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x40
	FGPUSpriteResourceData ResourceData; // 0x2c0
	float CameraMotionBlurAmount; // 0x420
	char bClearExistingParticlesOnInit : 1; // 0x424
};

struct ARectLight {
	URectLightComponent* RectLightComponent; // 0x2b0
};

struct UPostRoundChallengeResultsUserWidget {
	FGobiCountAnim ScoreCountAnim; // 0x458
	FGobiCountAnim ScoreDiffCountAnim; // 0x480
	FGobiCountAnim NewBestScoreCountAnim; // 0x4a8
	FGobiCountAnim RankCountAnim; // 0x4d0
	FGobiCountAnim RankDiffCountAnim; // 0x4f8
	FGobiCountAnim SupplyPointsCountAnim; // 0x520
	float ObjectiveDelay; // 0x548
};

struct UTestMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x70
};

struct UAnimSharingAdditiveInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UMaterialExpressionLandscapeLayerSample {
	FName ParameterName; // 0x48
	float PreviewWeight; // 0x50
	FGuid ExpressionGUID; // 0x54
};

struct UCompositionGraphCaptureProtocol {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x60
	bool bCaptureFramesInHDR; // 0x70
	int32_t HDRCompressionQuality; // 0x74
	EHDRCaptureGamut CaptureGamut; // 0x78
	FSoftObjectPath PostProcessingMaterial; // 0x80
	bool bDisableScreenPercentage; // 0x98
	UMaterialInterface* PostProcessingMaterialPtr; // 0xa0
};

struct ULandscapeSplinesComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x4b0
	TArray<ULandscapeSplineSegment*> Segments; // 0x4c0
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x4d0
};

struct UProceduralMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x530
	bool bUseAsyncCooking; // 0x531
	UBodySetup* ProcMeshBodySetup; // 0x538
	TArray<FProcMeshSection> ProcMeshSections; // 0x540
	TArray<FKConvexElem> CollisionConvexElems; // 0x550
	FBoxSphereBounds LocalBounds; // 0x560
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x580
};

struct ASkyAtmosphere {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x2a0
};

struct UBTTask_UseSmartActor {
	FBlackboardKeySelector SmartActorBlackboardKey; // 0x78
};

struct AProjectilePin {
	FGameplayTagQuery BlockingTargetTags; // 0x2a0
	float MaxPinTime; // 0x2e8
	bool bUseOwnerChargePinTime; // 0x2ec
	bool bDestroyOnInstigatorDeath; // 0x2ed
	FGameplayTag OwnerThrowComponentTag; // 0x2f0
	FName AttachBone; // 0x2f8
	bool bIgnoreParentRotation; // 0x300
	FGameplayTagContainer VictimCancelTags; // 0x308
	TArray<UGameplayEffect*> ApplyPinnedEffects; // 0x328
	TArray<UGameplayEffect*> ApplyInstigatorEffects; // 0x338
	UParticleSystem* SpawnEmitterOnDestroy; // 0x348
	EProjectilePinState CurrentState; // 0x354
};

struct UAnimMontage {
	FAlphaBlend BlendIn; // 0xc0
	float BlendInTime; // 0xf0
	FAlphaBlend BlendOut; // 0xf8
	float BlendOutTime; // 0x128
	float BlendOutTriggerTime; // 0x12c
	FName SyncGroup; // 0x130
	int32_t SyncSlotIndex; // 0x138
	FMarkerSyncData MarkerData; // 0x140
	TArray<FCompositeSection> CompositeSections; // 0x160
	TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x170
	TArray<FBranchingPoint> BranchingPoints; // 0x180
	bool bEnableRootMotionTranslation; // 0x190
	bool bEnableRootMotionRotation; // 0x191
	bool bEnableAutoBlendOut; // 0x192
	ERootMotionRootLock RootMotionRootLock; // 0x193
	TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x198
	TArray<int32_t> BranchingPointStateNotifyIndices; // 0x1a8
	FTimeStretchCurve TimeStretchCurve; // 0x1b8
	FName TimeStretchCurveName; // 0x1e0
};

struct UVolumeTexture {
	char UAV : 1; // 0x118
};

struct UEnvQueryTest_Trace {
	FEnvTraceData TraceData; // 0x208
	FAIDataProviderBoolValue TraceFromContext; // 0x238
	FAIDataProviderFloatValue ItemHeightOffset; // 0x270
	FAIDataProviderFloatValue ContextHeightOffset; // 0x2a8
	UEnvQueryContext* Context; // 0x2e0
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

struct UBTTask_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct AFlashlightVolume {
	bool bDisableFlashlightDialogue; // 0x2d8
	float TimeBetweenOnOffDialogue; // 0x2dc
};

struct URadialIntMask {
	float Radius; // 0xe8
	FVector Position; // 0xec
	int32_t InteriorValue; // 0xf8
	int32_t ExteriorValue; // 0xfc
	ESetMaskConditionType SetMaskCondition; // 0x100
};

struct UOnlineSessions {
	FTaskTimerConfig TimerConfig; // 0x48
};

struct UPlatformMediaSource {
	UMediaSource* MediaSource; // 0x88
};

struct UGizmoAxisIntervalParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x50
	float MinParameter; // 0x60
	float MaxParameter; // 0x64
};

struct UMaterialExpressionVectorNoise {
	FExpressionInput Position; // 0x48
	EVectorNoiseFunction NoiseFunction; // 0x5c
	int32_t Quality; // 0x60
	char bTiling : 1; // 0x64
	uint32_t TileSize; // 0x68
};

struct UPlayerSprintComponent {
	FSprintConfig SprintConfig; // 0x130
	FSprintStateData SprintMoveTickData; // 0x1d0
};

struct UUniformGridSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x40
	EVerticalAlignment VerticalAlignment; // 0x41
	int32_t Row; // 0x44
	int32_t Column; // 0x48
};

struct UMainMenuScreenManager {
	UCaravanManager* CaravanManager; // 0x278
	TArray<FMOTDTab> StaticMOTDEntries; // 0x280
};

struct UActorSequence {
	UMovieScene* MovieScene; // 0x350
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x358
};

struct UEnvQueryTest_Overlap {
	FEnvOverlapData OverlapData; // 0x208
};

struct UAnimNotifyState_AttachActor {
	UAnimContext_Actor* AttachActor; // 0x38
	FGameplayTag AttachSkeletalMeshTag; // 0x40
	FName AttachSkeletalMeshBone; // 0x48
	FRotator AttachRelativeRotation; // 0x50
	TArray<UGameplayEffect*> AttachTargetEffects; // 0x60
	bool bAuoDetachOnEnd; // 0x70
	bool bIncapActorOnDetach; // 0x71
};

struct URandomVector {
	float Magnitude; // 0xe8
};

struct UHUDMissionObjectiveEntryUserWidget {
	FDataTableRowHandle ObjectiveHandle; // 0x458
	EObjectiveState ObjectiveState; // 0x478
	TMap<EObjectiveState, UAkAudioEvent*> StateToSound; // 0x480
	int32_t LOW_TIMER_THRESHOLD; // 0x4d0
};

struct UGizmoTransformProxyTransformSource {
	UTransformProxy* Proxy; // 0x50
};

struct UEnvQueryTest_ActiveAreaSetVisibility {
	int32_t Visibility; // 0x208
};

struct UBTService_CanTriggerAction {
	TArray<FActionToCheck> ActionsToCheck; // 0x78
	EGameplayActionMatchingTagType MatchingTagType; // 0x88
	bool bTestIsEnabledForActor; // 0x89
};

struct UApplyOnItemThrownMod {
	FGameplayTagQuery ItemTagQuery; // 0xd0
	FCharacterEmitterDef CharacterEmitterDef; // 0x118
};

struct UMaterialExpressionTextureSampleParameterSubUV {
	char bBlend : 1; // 0xf8
};

struct UBTService_BlackboardValues {
	TArray<FBlackBoardValue> Values; // 0x78
};

struct UAISense_Sight {
	int32_t MaxTracesPerTick; // 0x150
	int32_t MinQueriesPerTimeSliceCheck; // 0x154
	double MaxTimeSlicePerTick; // 0x158
	float HighImportanceQueryDistanceThreshold; // 0x160
	float MaxQueryImportance; // 0x168
	float SightLimitQueryImportance; // 0x16c
};

struct UAnimNotify_ApplyGameplayEffect {
	bool bUnconditional; // 0x40
	float Distance; // 0x44
	bool bApplyToCharactersOnly; // 0x48
	int32_t ApplyToCharacterTeams; // 0x4c
	FCollisionProfileName OverlapCollisionProfile; // 0x50
	bool bRequiresLineOfSight; // 0x58
	bool bCheckLineOfSightToWeakSpots; // 0x59
	FName LineOfSightTargetComponentTag; // 0x5c
	bool bUseTargetEyePosForLoS; // 0x64
	bool bSkipLOSForHostileTargets; // 0x65
	FName BoneName; // 0x68
	bool bExcludeInstigatingActor; // 0x70
	bool bExcludeGodPlayers; // 0x71
	bool bFavorWeakspots; // 0x72
	TArray<UGameplayEffect*> GameplayEffects; // 0x78
};

struct ALight {
	ULightComponent* LightComponent; // 0x2a0
	char bEnabled : 1; // 0x2a8
};

struct UAnimContext_PounceDestination {
	UAnimContext_PounceComponent* Pounce; // 0x70
};

struct UFireModeShotgunComponent {
	FFireModeShotgunTuning FireModeShotgunTuning; // 0x808
};

struct UTerrainFollowerComponent {
	bool bOrientMesh; // 0xe8
	float LerpSpeed; // 0xec
};

struct UShapeComponent {
	UBodySetup* ShapeBodySetup; // 0x4b0
	UNavAreaBase* AreaClass; // 0x4b8
	FColor ShapeColor; // 0x4c0
	char bDrawOnlyIfSelected : 1; // 0x4c4
	char bShouldCollideWhenPlacing : 1; // 0x4c4
	char bDynamicObstacle : 1; // 0x4c4
};

struct UApplyOnTagMod {
	FGameplayTagQuery CharacterTagQuery; // 0xe0
	FCharacterEmitterDef CharacterEmitterDef; // 0x128
};

struct UAmmoPouchComponent {
	int32_t UseCount; // 0x52c
	float AmmoPecentageToGrant[0x7]; // 0x530
	UAkAudioEvent* AKEOnUse; // 0x550
};

struct UTriggerHordeComponent {
	FMulticastInlineDelegate OnTriggerHordeEnded; // 0x1e0
	FGameplayTag TriggerHordeCue; // 0x1f0
	FTriggerHordeTuning TriggerHordeTuning; // 0x1f8
	FString HordeLabel; // 0x218
	FName TriggerHordeMontagesName; // 0x228
	int32_t HordeCounter; // 0x250
};

struct ASkyLight {
	USkyLightComponent* LightComponent; // 0x2a0
	char bEnabled : 1; // 0x2a8
};

struct UCollisionProfile {
	TArray<FCollisionResponseTemplate> Profiles; // 0x40
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x50
	TArray<FCustomProfile> EditProfiles; // 0x60
	TArray<FRedirector> ProfileRedirects; // 0x70
	TArray<FRedirector> CollisionChannelRedirects; // 0x80
	TMap<FName, FAutoApplyProfileSettings> AutoApplySettingsPerCollisionProfile; // 0x90
};

struct UHorizontalBoxSlot {
	FMargin Padding; // 0x48
	FSlateChildSize Size; // 0x58
	EHorizontalAlignment HorizontalAlignment; // 0x60
	EVerticalAlignment VerticalAlignment; // 0x61
};

struct UKeybindEntryUserWidget {
	FMulticastInlineDelegate OnEntryFocusGained; // 0x458
};

struct UGobiLoadingScreenSettings {
	TSoftObjectPtr<UGobiLoadingScreenDataSet> DataSet; // 0x40
};

struct UInteractiveGizmoManager {
	TArray<FActiveGizmo> ActiveGizmos; // 0x38
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x60
};

struct UMissionOverviewMapChainUserWidget {
	UMissionOverviewMapPipUserWidget* PipUserWidget; // 0x458
	UUserWidget* SubChainSpacerUserWidget; // 0x460
	UUserWidget* PipSpacerUserWidget; // 0x468
};

struct UInterpTrackVisibility {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x78
	char bFireEventsWhenForwards : 1; // 0x88
	char bFireEventsWhenBackwards : 1; // 0x88
	char bFireEventsWhenJumpingForwards : 1; // 0x88
};

struct UStereoLayerShapeEquirect {
	FBox2D LeftUVRect; // 0x30
	FBox2D RightUVRect; // 0x44
	FVector2D LeftScale; // 0x58
	FVector2D RightScale; // 0x60
	FVector2D LeftBias; // 0x68
	FVector2D RightBias; // 0x70
};

struct AComms_DialogueSpeaker {
	FDataTableRowHandle VoiceRowHandle; // 0x2b8
	UAkSimpleComponent* AkComponent; // 0x2d8
	UGobiDialogueComponent* DialogueComp; // 0x2e0
	FString CurrentVoiceLine; // 0x300
	UAkAudioEvent* DialogueStopEvent; // 0x310
};

struct UHeroLedgeHangComponent {
	FHeroLedgeHangConfig Config; // 0x130
	FHeroLedgeHangData MoveTickData; // 0x1c0
};

struct UCircularThrobber {
	int32_t NumberOfPieces; // 0x148
	float Period; // 0x14c
	float Radius; // 0x150
	USlateBrushAsset* PieceImage; // 0x158
	FSlateBrush Image; // 0x160
	bool bEnableRadius; // 0x1f0
};

struct UBTService_RunEQS {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xa0
	bool bClearBlackboardOnNoResults; // 0x120
	bool bClearBlackboardOnInvalidEQS; // 0x121
};

struct UEmitterNodeBase {
	FVector Position; // 0x30
	FTransform ReferenceActorTransform; // 0x40
};

struct UMaterialExpressionGIReplace {
	FExpressionInput Default; // 0x48
	FExpressionInput StaticIndirect; // 0x5c
	FExpressionInput DynamicIndirect; // 0x70
};

struct UBashHealthComponent {
	int32_t MaxBashesBeforeDeath; // 0xe8
	bool bAIDieFromBashIfIdle; // 0xec
	FGameplayTagQuery DamageTypeTagQuery; // 0xf0
	UGobiDamageType* DamageTypeOverride; // 0x138
};

struct UEdGraph {
	UEdGraphSchema* Schema; // 0x30
	TArray<UEdGraphNode*> Nodes; // 0x38
	char bEditable : 1; // 0x48
	char bAllowDeletion : 1; // 0x48
	char bAllowRenaming : 1; // 0x48
};

struct UEnvQueryTest_CanHearSpawnActor {
	UEnvQueryContext* ListenerContext; // 0x208
	float ListenerZOffset; // 0x210
};

struct AItemPickup {
	UBoxComponent* PingableVolume; // 0x2a0
	UStaticMeshComponent* StaticMeshComponent; // 0x2a8
	USphereComponent* UsableVolumeComponent; // 0x2b0
	UItemPickupUsableComponent* UsableComponent; // 0x2b8
	UItemObservableComponent* ItemObservableComponent; // 0x2c0
	UUsableHighlightComponent* UsableHighlightComponent; // 0x2c8
	FMulticastInlineDelegate OnItemsClaimed; // 0x2e8
	FMulticastInlineDelegate OnItemsClaimedDetailed; // 0x2f8
	EItemPickupCreationContext CreationContext; // 0x308
	bool bGivesCard; // 0x320
	bool bGivesBasicCard; // 0x321
	FDataTableRowHandle GivenCardHandle; // 0x328
	bool bApplyUsableConditionForGivenCard; // 0x348
	FGameplayCardCondition GameplayCardCondition; // 0x350
	EPickupCountType CountType; // 0x398
	EPickupSlot PickupSlot; // 0x399
	FGameplayTag UpgradeOverrideTag; // 0x39c
	bool bDestroyWhenLastItemLooted; // 0x3a4
	bool bAddItemAmmoOnPickup; // 0x3a5
	TArray<FItemRowAndQuantity> ItemRowsAndQuantities; // 0x3a8
	TArray<FRandomItemTableRoll> RandomItemRolls; // 0x3b8
	FGameplayTag ItemPickedUpCue; // 0x3c8
	float DroppedSpeed; // 0x3d0
	FRotator DroppedRotationOffset; // 0x3d4
	FVector DroppedTranslationOffset; // 0x3e0
	FGameplayTagQuery KillZVolumesToIgnore; // 0x3f0
	bool bEnablePingableVolume; // 0x438
	UTexture2D* PingIconOverride; // 0x440
	FSlateColor PingIconTint; // 0x448
	TMap<EItemQuality, FLinearColor> QualityColor; // 0x4a8
};

struct USCS_Node {
	UObject* ComponentClass; // 0x30
	UActorComponent* ComponentTemplate; // 0x38
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x40
	FName AttachToName; // 0x88
	FName ParentComponentOrVariableName; // 0x90
	FName ParentComponentOwnerClassName; // 0x98
	bool bIsParentComponentNative; // 0xa0
	TArray<USCS_Node*> ChildNodes; // 0xa8
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb8
	FGuid VariableGuid; // 0xc8
	FName InternalVariableName; // 0xd8
};

struct UGeometryCollectionDebugDrawComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xe8
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xf0
};

struct UMaterialExpressionBlendMaterialAttributes {
	FMaterialAttributesInput A; // 0x48
	FMaterialAttributesInput B; // 0x60
	FExpressionInput Alpha; // 0x78
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x8c
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x8d
};

struct UPlayerAimAssistComponent {
	float MinTargetingRange; // 0x1b0
	float MaxTargetingRange; // 0x1b4
	float MaxTargetingAngle; // 0x1b8
	float PreviousTargetScoreWeight; // 0x1bc
	float DistanceScoreWeight; // 0x1c0
	float AngleScoreWeight; // 0x1c4
	bool bFrictionEnabled; // 0x1c8
	float VerticalInputFriction; // 0x1cc
	float HorizontalInputFriction; // 0x1d0
	float ADSFrictionScalar; // 0x1d4
	bool bADSSnapEnabled; // 0x1d8
	float ADSSnapSecs; // 0x1dc
	float ADSSnapCooldownSecs; // 0x1e0
	float MaxADSSnapAngle; // 0x1e4
	float MaxBotADSSnapAngle; // 0x1e8
	float ADSSnapExponent; // 0x1ec
	bool bTrackingEnabled; // 0x1f0
	float ADSTrackingStrength; // 0x1f4
	float NonADSTrackingStrength; // 0x1f8
	float TrackingPitchBlendInPercent; // 0x1fc
	float SprintingTrackingStrengthScalar; // 0x200
	char HordedEnemyCount; // 0x204
	float HordedDistance; // 0x208
	float MaxMagnetismPitch; // 0x20c
	float MinMagnetismDeltaAnglePerSec; // 0x210
	int8_t MaxAsyncThreads; // 0x214
};

struct URadialVector {
	float Magnitude; // 0xe8
	FVector Position; // 0xec
};

struct UNetworkSettings {
	char bVerifyPeer : 1; // 0x40
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x40
	int32_t MaxRepArraySize; // 0x44
	int32_t MaxRepArrayMemory; // 0x48
	int32_t PlayerNameMaxLength; // 0x4c
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x50
};

struct UEnvironmentStatus_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458
	UTextBlock* BucketText; // 0x460
	UTextBlock* EnvironmentText; // 0x468
	UImage* NonStandardBackground; // 0x470
	UTextBlock* SeparatorText; // 0x478
};

struct ADeathGasActor {
	UCapsuleComponent* SafeZone_Volume; // 0x2a0
	float OriginalMeshRadius; // 0x2a8
	float StartingRadius; // 0x2ac
	float EndingRadius; // 0x2b0
	float TransitionTime; // 0x2b4
	float WarmupTime; // 0x2b8
	float Duration; // 0x2bc
	TArray<UGameplayEffect*> AppliedGameplayEffects; // 0x2c0
	bool bStartImmediately; // 0x2d0
	float CurrentEffectRadius; // 0x2d4
	TMap<AGobiCharacter*, FDeathGasAppliedEffects> AppliedEffectsMap; // 0x2e8
	EDeathGasState CurrentState; // 0x338
};

struct UParticleModuleAccelerationDrag {
	UDistributionFloat* DragCoefficient; // 0x40
	FRawDistributionFloat DragCoefficientRaw; // 0x48
};

struct UPacketHandlerProfileConfig {
	TArray<FString> Components; // 0x30
};

struct UDifficultyManager {
	TArray<FDifficultyRow> DifficultyData; // 0x30
};

struct UToIntegerField {
	UFieldNodeFloat* FloatField; // 0xe8
};

struct UDatasmithActorTemplate {
	TSet<FName> Layers; // 0x38
	TSet<FName> Tags; // 0x88
};

struct AGeometryCollectionActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x2a0
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x2a8
};

struct UStumbleDamageAccumulatorComponent {
	FDamageAccumulationConfig Config; // 0xe8
};

struct USteeringBehavior_SeekDir {
	UAnimContext_Transform* SourceLocation; // 0x58
	UAnimContext_Transform* TargetLocation; // 0x60
	bool bIgnoreZ; // 0x68
	bool bUseCharacterEyeHeightForFocusOffset; // 0x69
};

struct UMaterialExpressionPreviousFrameSwitch {
	FExpressionInput CurrentFrame; // 0x48
	FExpressionInput PreviousFrame; // 0x5c
};

struct UZombieMutationScreen {
	float CalloutTooltipXOffset; // 0x648
	TSoftObjectPtr<UAkAudioEvent> DefaultPurchaseSound; // 0x650
	TSoftObjectPtr<UAkAudioEvent> ProgressUpgradeSound; // 0x678
	TSoftObjectPtr<UAkAudioEvent> ErrorSound; // 0x6a0
	TSoftObjectPtr<UAkAudioEvent> OpenPopupSound; // 0x6c8
	UZombieFamilyUserWidget* ZombieFamilyUserWidget; // 0x6f0
	UZombiePopupAbilityUserWidget* PopupAbilityWidget; // 0x6f8
	UZombiePopupMutationUserWidget* PopupMutationWidget; // 0x700
	UZombiePopupMutationProgressBarUserWidget* PopupMutationProgressBarWidget; // 0x708
	FDataTableRowHandle FocusedTreeHandle; // 0x710
	APawn* FocusedVariantPawnClass; // 0x730
	TWeakObjectPtr<UGobiUserWidget> FocusedWidget; // 0x738
	UHorizontalBox* ContextHBox; // 0x748
	UHorizontalBox* FamilyHBox; // 0x750
	UOverlay* ContextOverlay; // 0x758
	UTextBlock* DescriptionText; // 0x760
	UVerticalBox* MainVBox; // 0x768
};

struct UGamepadOptionsPanelUserWidget {
	TArray<UDataTable*> GamepadStickBindingData; // 0x4a8
};

struct ULiteCharacterAudioComponent {
	FName DialogueBoneName; // 0x100
	UAkAudioEvent* DialogueStopEvent; // 0x108
	USoundCollectionAsset* SoundCollection; // 0x110
	FDelegate VoiceLineFinishedCallback; // 0x118
	TWeakObjectPtr<UAkSkeletalComponent> AudioEmitter; // 0x128
	TWeakObjectPtr<USkeletalMeshComponent> MeshComp; // 0x130
	FString CurrentVoiceLine; // 0x140
};

struct UMOTDPopupUserWidget {
	float ButtonDelayTime; // 0x478
};

struct UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x78
	float CurveTension; // 0x90
};

struct UWidgetAnimationDelegateBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30
};

struct UAnimEvalSet_Heavy_Damage_DeathReaction_C {
	FGameplayEval_DamageAmount DamageAmountComparison; // 0xc0
	FGameplayEval_DamageRange DamageAmountRange; // 0x158
	FGameplayEval_DamageType DamageType; // 0x220
	FGameplayEval_DamageBone DamageBone; // 0x2e0
	FGameplayEval_Distance DistanceToDamageSource; // 0x340
	FGameplayEval_Health AvatarHealth; // 0x410
	FGameplayEval_GameplayTags AvatarTags; // 0x468
	FGameplayEval_SpeedRange AvatarSpeed; // 0x500
};

struct UGeometryCacheTrack {
	float Duration; // 0x30
};

struct UAsyncActionChangePrimaryAssetBundles {
	FMulticastInlineDelegate Completed; // 0x80
};

struct UPaperDollWeaponSlotUserWidget {
	FDelegate OnCanEquipAttachment; // 0x468
	FDelegate OnTryEquipAttachment; // 0x478
};

struct AJukebox {
	UStaticMeshComponent* StaticMeshComponent; // 0x2a0
	UUsableComponent* UsableComponent; // 0x2a8
	UBoxComponent* UsableTriggerComponent; // 0x2b0
	UAkComponent* AkComponent; // 0x2b8
	UJukeboxMusicComponent* JukeboxMusicComp; // 0x2c0
	bool bAutoLoadNextSong; // 0x2c8
	FText TurnOnText; // 0x2d0
	FText TurnOffText; // 0x2e8
	float TurnOnUseTime; // 0x300
	float TurnOffUseTime; // 0x304
	UAkAudioEvent* AKEBeginUse; // 0x308
	UAkAudioEvent* AKEEndUse; // 0x310
	FMulticastInlineDelegate OnButtonPressed; // 0x318
	bool bIsPlaying; // 0x328
};

struct ULandscapeMeshProxyComponent {
	FGuid LandscapeGuid; // 0x5c0
	TArray<FIntPoint> ProxyComponentBases; // 0x5d0
	int8_t ProxyLOD; // 0x5e0
};

struct UScrollBoxSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UEnvQueryContext_Player {
	FGameplayTagQuery GameplayTagsQuery; // 0x30
};

struct UAudioJostleComponent {
	EJostleMode JostleType; // 0xe8
	FShrubEmitterInfo ShrubBehavior; // 0xf0
	FBumpEmitterInfo BumpBehavior; // 0x118
	FRattleEmitterInfo RattleBehavior; // 0x148
	bool bAutoEnable; // 0x188
	bool bIsEnabled; // 0x189
	UEmitterNodeBase* Node; // 0x190
};

struct UMaterialExpressionAdd {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	float ConstA; // 0x70
	float ConstB; // 0x74
};

struct ASceneCapture {
	UStaticMeshComponent* MeshComp; // 0x2a0
	USceneComponent* SceneComponent; // 0x2a8
};

struct UListViewBase {
	UUserWidget* EntryWidgetClass; // 0x148
	float WheelScrollMultiplier; // 0x150
	bool bEnableScrollAnimation; // 0x154
	bool bEnableFixedLineOffset; // 0x155
	float FixedLineScrollOffset; // 0x158
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x160
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x170
	bool bIsFocusedOnHover; // 0x180
	bool bScrollBarHasSizeWhenNotInUse; // 0x181
	FUserWidgetPool EntryWidgetPool; // 0x188
};

struct UAnimNotify_Navigation {
	UNavArea* NavModifierAreaClass; // 0x40
	UNavArea* NavLinkAreaClass; // 0x48
};

struct UPostRoundSummaryUserWidget {
	TArray<FUIPlayerStat> Stats; // 0x458
	FSlateColor FailureTextColor; // 0x468
};

struct UPlayHitReactionComponent {
	FMulticastInlineDelegate OnHitReaction; // 0xe8
	TArray<UMontageSet*> MontageSets; // 0x170
	FVector2D TimeBetweenReactions; // 0x180
	bool bAutoTriggerHitReactsOnRecentDamage; // 0x188
	UGameplayEvaluatorSet* DeathFilterSet; // 0x190
	FGameplayTagQuery CameraShakeRequiredDamageQuery; // 0x198
	TArray<FCameraShakeReaction> CameraShakeReactions; // 0x1e0
};

struct UInterpTrackInstVectorProp {
	FVector ResetVector; // 0x60
};

struct UWidgetNavigation {
	FWidgetNavigationData Up; // 0x30
	FWidgetNavigationData Down; // 0x54
	FWidgetNavigationData Left; // 0x78
	FWidgetNavigationData Right; // 0x9c
	FWidgetNavigationData Next; // 0xc0
	FWidgetNavigationData Previous; // 0xe4
};

struct UBTService_Horde {
	FBlackboardKeySelector AlertLocationBBKey; // 0x78
	FGameplayTagQuery HordeTagQuery; // 0xa0
};

struct USoundNodeDialoguePlayer {
	FDialogueWaveParameter DialogueWaveParameter; // 0x60
	char bLooping : 1; // 0x80
};

struct UTitanAnimInstance {
	UTitanComponent* TitanComponent; // 0x2c0
	bool bIdle; // 0x2c8
	bool bTailOnLeft; // 0x2c9
	bool bDead; // 0x2ca
	FTitanTentacleAnimInfo TentacleFrontLeft; // 0x2d0
	FTitanTentacleAnimInfo TentacleFrontRight; // 0x318
	FTitanTentacleAnimInfo TentacleBackLeft; // 0x360
	FTitanTentacleAnimInfo TentacleBackRight; // 0x3a8
	UAnimSequence* IdleAnimSequence; // 0x3f0
};

struct UInputBehaviorSet {
	TArray<FBehaviorInfo> Behaviors; // 0x30
};

struct UMotionControllerComponent {
	int32_t PlayerIndex; // 0x4b0
	EControllerHand Hand; // 0x4b4
	FName MotionSource; // 0x4b8
	char bDisableLowLatencyUpdate : 1; // 0x4c0
	ETrackingStatus CurrentTrackingStatus; // 0x4c4
	bool bDisplayDeviceModel; // 0x4c5
	FName DisplayModelSource; // 0x4c8
	UStaticMesh* CustomDisplayMesh; // 0x4d0
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x4d8
	UPrimitiveComponent* DisplayComponent; // 0x550
};

struct UTextRenderComponent {
	FText Text; // 0x4b0
	UMaterialInterface* TextMaterial; // 0x4c8
	UFont* Font; // 0x4d0
	EHorizTextAligment HorizontalAlignment; // 0x4d8
	EVerticalTextAligment VerticalAlignment; // 0x4d9
	FColor TextRenderColor; // 0x4dc
	float XScale; // 0x4e0
	float YScale; // 0x4e4
	float WorldSize; // 0x4e8
	float InvDefaultSize; // 0x4ec
	float HorizSpacingAdjust; // 0x4f0
	float VertSpacingAdjust; // 0x4f4
	char bAlwaysRenderAsText : 1; // 0x4f8
};

struct USoundNodeWaveParam {
	FName WaveParameterName; // 0x60
};

struct UAnimNotifyState_ThrowProjectile {
	UProjectileThrowComponent* ProjectileThrowClass; // 0x38
};

struct UNiagaraDataInterfaceVector4Curve {
	FRichCurve XCurve; // 0x60
	FRichCurve YCurve; // 0xe0
	FRichCurve ZCurve; // 0x160
	FRichCurve WCurve; // 0x1e0
};

struct UMaterialExpressionReroute {
	FExpressionInput Input; // 0x48
};

struct UActiveAreaSetComponent {
	FActiveAreaSetDebugData DebugOverall; // 0xe8
	FActiveAreaSetDebugData DebugActiveAreaSet; // 0xf8
	TArray<int32_t> DebugDistanceBucketWeightLevels; // 0x108
	FVector2D GoldenPathPopulationRange; // 0x118
	float GoldenPathMinScale; // 0x120
	EInclusionMode InclusionMode; // 0x124
	float WanderPopulationBucketDistance; // 0x128
	TArray<float> WanderPopulationBucketDensities; // 0x130
	TArray<FWanderBucketDensityLevelsByDifficultyEntry> WanderPopulationBucketDensityLevelsByDifficulty; // 0x140
	float WanderPopulationInitialBucketDistance; // 0x150
	float WanderPopulationInitialBucketDensity; // 0x154
	TArray<FWanderBucketInitialDensityLevelByDifficultyEntry> WanderPopulationInitialBucketDensityLevelsByDifficulty; // 0x158
	UWanderPopulationDensityConfig* WanderDensityConfig; // 0x168
	ECollisionChannel MovementChannel; // 0x170
};

struct UAnimNotify_Mutilate {
	bool bExplode; // 0x40
	float PctToDismember; // 0x44
	float DismemberImpulseMagnitude; // 0x48
	float ImpulseMagnitude; // 0x4c
	EMutilationRegion Region; // 0x50
	EMutilationType Type; // 0x51
	UAnimContext_DamageInfo* DamageInfo; // 0x58
};

struct ULocalizedOverlays {
	UBasicOverlays* DefaultOverlays; // 0x30
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x38
};

struct UWidgetAnimation {
	UMovieScene* MovieScene; // 0x350
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x358
	bool bLegacyFinishOnStop; // 0x368
	FString DisplayLabel; // 0x370
};

struct UInterpGroupCamera {
	UCameraAnim* CameraAnimInst; // 0x58
	float CompressTolerance; // 0x60
};

struct APlayerStandIn {
	FMulticastInlineDelegate OnAppearanceChanged; // 0x2a0
	bool bEnabled; // 0x2b0
	EPlayerStandInGender OnlyValidIfSlotMatchesGender; // 0x2b1
	FDataTableRowHandle OnlyValidIfSlotMatchesCharacter; // 0x2b8
	FDataTableRowHandle ConfigureForNonPartyCharacter; // 0x2d8
	FDataTableRowHandle CharacterRowHandle; // 0x2f8
	FCharacterCustomizationSet CustomizationSet; // 0x318
	EDrenchSettings DrenchSettings; // 0x3a0
	UAnimSequence* MaleDefaultAnimation; // 0x3c0
	UAnimSequence* FemaleDefaultAnimation; // 0x3c8
	UMeshMaterialParamSet* IncappedMeshMaterialParamSet; // 0x3d0
	UMeshMaterialParamSet* DeadMeshMaterialParamSet; // 0x3d8
};

struct UMovieSceneObjectPropertySection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UCaravanScreen {
	bool bReadyForTutorialPopup; // 0x594
};

struct UVendorItemUserWidget {
	UVendorRefillTrackerUserWidget* RefillTrackerWidget; // 0x458
	TArray<EEquipmentSlot> WatchedEquipSlots; // 0x460
};

struct UAnimNotifyState_ModifyView {
	FCameraViewModifier ViewModifier; // 0x38
	FGameplayTagQuery RequiredTags; // 0x80
};

struct UEnvQueryTest_EnemyDamageLocation {
	bool bUseAttackLocation; // 0x2a0
};

struct UAttachmentDragPayload {
	FDataTableRowHandle Attachment; // 0x38
	int32_t SlotIndex; // 0x58
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

struct AGameMode {
	FName MatchState; // 0x340
	char bDelayedStart : 1; // 0x348
	int32_t NumSpectators; // 0x34c
	int32_t NumPlayers; // 0x350
	int32_t NumBots; // 0x354
	float MinRespawnDelay; // 0x358
	int32_t NumTravellingPlayers; // 0x35c
	ULocalMessage* EngineMessageClass; // 0x360
	TArray<APlayerState*> InactivePlayerArray; // 0x368
	float InactivePlayerStateLifeSpan; // 0x378
	int32_t MaxInactivePlayers; // 0x37c
};

struct AConversationTrigger {
	USceneComponent* InternalRootComponent; // 0x2a0
	bool bTriggersOnFullPartyEnter; // 0x2a8
	bool bTriggerOnce; // 0x2a9
	bool bUseDirectional; // 0x2aa
	float MinDirectionalAmount; // 0x2ac
	bool bUseLookAt; // 0x2b0
	float MinLookAtAngle; // 0x2b4
	bool bActivated; // 0x2b8
	bool bDequeueConversationOnPlayerExitTrigger; // 0x2b9
	EInstigatorRule InstigatorRule; // 0x2ba
	TArray<FName> NeededHeroNames; // 0x2c0
	bool bQueueAllChoices; // 0x2d0
	TArray<FQueuedConversation> ConversationChoices; // 0x2d8
	TArray<FQueuedConversation> ConversationsToDequeue; // 0x2e8
	TArray<AConversationTrigger*> ConversationTriggersToDisable; // 0x2f8
};

struct UMaterialExpressionReflectionVectorWS {
	FExpressionInput CustomWorldNormal; // 0x48
	char bNormalizeCustomWorldNormal : 1; // 0x5c
};

struct ULifeStateDead {
	FName AutoRagdollFromBoneName; // 0xa8
	FName DeadCapsuleCollisionProfile; // 0xb0
	bool bRegisterWithCorpseManager; // 0xb8
	TArray<FGameplayTag> TurnOffCollisionOnComponents; // 0xc0
	TArray<UMontageSet*> MontageSets; // 0xd0
	UAnimMontage* PlayingDeathMontage; // 0xe0
	UAnimMontage* DeathMontage; // 0xe8
	bool bNeedsToBeHidden; // 0xf0
};

struct UOnlineFlow {
	UMatchmaking* Matchmaking; // 0x60
	FMulticastInlineDelegate OnMatchmakingStateChanged; // 0x140
};

struct UPaperDollDragUserWidget {
	UItemDragVisualUserWidget* DragVisualClass; // 0x458
};

struct UGobiDamageType {
	FGameplayTagContainer DamageTagContainer; // 0x30
	TArray<UGameplayEffect*> GameplayEffects; // 0x50
};

struct UAudioImpulseResponse {
	TArray<float> ImpulseResponse; // 0x30
	int32_t NumChannels; // 0x40
	int32_t SampleRate; // 0x44
	float NormalizationVolumeDb; // 0x48
	TArray<float> IRData; // 0x50
};

struct ALootSystem {
	ULootSpawnConfigAsset* LootConfig; // 0x2a0
	ULootSpawnConfigAsset* LootConfigPVPClassic; // 0x2a8
	ULootSpawnConfigAsset* LootConfigPVPHoldout; // 0x2b0
	ULootSpawnConfigAsset* TradeShowLootConfig; // 0x2b8
	ULootSpawnConfigAsset* TradeShowLootConfigPVPClassic; // 0x2c0
	ULootSpawnConfigAsset* TradeShowLootConfigPVPHoldout; // 0x2c8
	FSpawnCountRange TreasureRooms; // 0x2d0
};

struct UAITask {
	AAIController* OwnerController; // 0x70
};

struct UUIDataSet {
	UAkAudioEvent* LowClickAudioEvent; // 0x38
	UAkAudioEvent* ClickAudioEvent; // 0x40
	UAkAudioEvent* BeepAudioEvent; // 0x48
	UAkAudioEvent* ObjectiveCountChangeDefaultAudioEvent; // 0x50
	UUISpeakerTest* UISpeakerTestClass; // 0x58
	FSlateSound WidgetFocusedSound; // 0x60
	FSlateBrush FocusBrush; // 0x78
	FSlateBrush CalloutTextBrush; // 0x108
	TMap<FGameplayTag, UTexture2D*> GameplayTagsToStatusIcons; // 0x198
	UTexture2D* DefaultCardIcon; // 0x1e8
	UTexture2D* DefaultCardBackground; // 0x1f0
	TMap<EGameplayCardAffinity, UTexture2D*> CardAffinitiesToIcons; // 0x1f8
	UTexture2D* DefaultAchievementIcon; // 0x248
	UTexture2D* DefaultRewardIconSmall; // 0x250
	UTexture2D* DefaultRewardIconShowcase; // 0x258
	UTexture2D* DefaultSprayIcon; // 0x260
	UTexture2D* DefaultWeaponSkinIcon; // 0x268
	UTexture2D* DefaultCharacterSkinIcon; // 0x270
	UTexture2D* DefaultTitleIcon; // 0x278
	UTexture2D* DefaultEmblemIcon; // 0x280
	UTexture2D* DefaultBannerIcon; // 0x288
	UTexture2D* DefaultObjectiveIcon; // 0x290
	UTexture2D* CheckBoxCheckedImage; // 0x298
	UTexture2D* CheckBoxUncheckedImage; // 0x2a0
	TMap<EObjectiveState, UTexture2D*> ObjectiveStateToIcon; // 0x2a8
	TMap<EObjectiveState, FSlateColor> ObjectiveStateToColor; // 0x2f8
	UGlobalSafeZoneUserWidget* GlobalSafeZoneWidgetClass; // 0x348
	UColorBlindGroupData* ColorBlindGroupDataSet; // 0x350
	UColorTableTexture* ColorBlindMaterialColors; // 0x358
	UColorBlindOutlineHighlightData* ColorBlindPlayerOutlineHighlightData; // 0x360
	UDataTable* ColorBlindMaterialData; // 0x368
};

struct UAkEventCallbackInfo {
	int32_t PlayingID; // 0x38
	int32_t EventID; // 0x3c
};

struct UEdGraphPin_Deprecated {
	FString PinName; // 0x30
	FString PinToolTip; // 0x40
	EEdGraphPinDirection Direction; // 0x50
	FEdGraphPinType PinType; // 0x58
	FString DefaultValue; // 0xb0
	FString AutogeneratedDefaultValue; // 0xc0
	UObject* DefaultObject; // 0xd0
	FText DefaultTextValue; // 0xd8
	TArray<UEdGraphPin_Deprecated*> LinkedTo; // 0xf0
	TArray<UEdGraphPin_Deprecated*> SubPins; // 0x100
	UEdGraphPin_Deprecated* ParentPin; // 0x110
	UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x118
};

struct UGameplayAction_AmbushHide {
	FVector2D StayInCoverDuration; // 0x2e8
	bool bRepositionOnHeroLOS; // 0x2f0
	float RepositionOnHeroDistanceMapDistance; // 0x2f4
	FGameplayTag SneakAdvanceTag; // 0x2f8
	FNavAgentSelector DistanceMapNavMesh; // 0x300
};

struct USpringArmComponent {
	float TargetArmLength; // 0x230
	FVector SocketOffset; // 0x234
	FVector TargetOffset; // 0x240
	float ProbeSize; // 0x24c
	ECollisionChannel ProbeChannel; // 0x250
	char bDoCollisionTest : 1; // 0x254
	char bUsePawnControlRotation : 1; // 0x254
	char bInheritPitch : 1; // 0x254
	char bInheritYaw : 1; // 0x254
	char bInheritRoll : 1; // 0x254
	char bEnableCameraLag : 1; // 0x254
	char bEnableCameraRotationLag : 1; // 0x254
	char bUseCameraLagSubstepping : 1; // 0x254
	char bDrawDebugLagMarkers : 1; // 0x255
	float CameraLagSpeed; // 0x258
	float CameraRotationLagSpeed; // 0x25c
	bool bCollisionTargetOffsetEnabled; // 0x260
	FVector CollisionTargetOffset; // 0x264
	FVector CollisionSocketOffset; // 0x270
	float CollisionTargetOffsetLagSpeed; // 0x27c
	float CameraArmLengthLagSpeed; // 0x280
	float CameraReplicationRotationInterpSpeed; // 0x284
	float CameraLagMaxTimeStep; // 0x288
	float CameraLagMaxDistance; // 0x28c
};

struct UFontImportOptions {
	FFontImportOptionsData Data; // 0x30
};

struct UNavAgentLocationComponent {
	float TestForFloorDistance; // 0xe8
};

struct USynthSound {
	USynthComponent* OwningSynthComponent; // 0x370
};

struct UHealthBarUserWidget {
	float MaxHealth; // 0x458
	float CurrentMaxHealth; // 0x45c
	float Health; // 0x460
	float HealingHealth; // 0x464
	float TempHealth; // 0x468
	UHealthPipUserWidget* PipClass; // 0x470
};

struct UBadgeEditPanelUserWidget {
	EBadgeEditMode BadgeEditMode; // 0x458
};

struct UOptionsSelectableButtonUserWidget {
	FMulticastInlineDelegate OnSelected; // 0x458
	FMulticastInlineDelegate OnDeselected; // 0x468
};

struct UHoldoutConfig {
	float SafeZoneFinalRadius; // 0x38
	float PrepPhaseDuration; // 0x3c
	TArray<float> CollapsePhaseDurations; // 0x40
	float HordePhaseDuration; // 0x50
	float HordePhaseHordeDelay; // 0x54
	TArray<UGameplayEffect*> HeroPrepPhaseGameplayEffects; // 0x58
	float FinalPhaseScenarioLoopTime; // 0x68
	TArray<FHoldoutCollapsePhase> CollapsePhases; // 0x70
};

struct ASplineBasedActorPlacer {
	USplineComponent* SplineComponent; // 0x2a0
	ESplinePointType ForcePointType; // 0x2a8
	bool bForcePointType; // 0x2a9
	bool bClosedLoop; // 0x2aa
};

struct UTuningDataComponent {
	FDataTableRowHandle DataTableRow; // 0x100
};

struct UVFXCorpseSubsystem {
	UVFXCorpseManager* VFXCorpseManager; // 0x38
};

struct UBTTask_SetBruteState {
	EBruteState BruteState; // 0x78
};

struct UZombieMutationManager {
	UDataTable* Table; // 0x38
	TArray<float> MinRespawnTimes; // 0x40
	TArray<FTeamAdvantageZombieRespawnTimes> ZombieAdvantageRespawnTimes; // 0x50
	TArray<FTeamAdvantageZombieRespawnTimes> ZombieDisadvantageRespawnTimes; // 0x60
	float DefaultRespawnTime; // 0x70
	float QueuedZombieRespawnTurnWaitTime; // 0x74
	bool bVariantLocksEnabled; // 0x78
	bool bIgnoreOnFieldLimits; // 0x79
};

struct UBTTask_RunEQSQuery {
	UEnvQuery* QueryTemplate; // 0xa0
	TArray<FEnvNamedValue> QueryParams; // 0xa8
	TArray<FAIDynamicParam> QueryConfig; // 0xb8
	EEnvQueryRunMode RunMode; // 0xc8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xd0
	bool bUseBBKey; // 0xf8
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x100
};

struct UEnvQueryTest_PathfindingBatch {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x290
};

struct UDatasmithAssetUserData {
	TMap<FName, FString> MetaData; // 0x30
};

struct UAttachableComponent {
	FAttachToActorInfo DesiredAttachment; // 0x140
	FAttachToActorInfo CurrentAttachment; // 0x1b0
	FCollisionProfileName AttachedCollisionProfile; // 0x220
};

struct UDemoDeveloperSettings {
	TSoftClassPtr<UObject> DemoHUDWidget; // 0x40
	float PlaybackSpeedStep; // 0x68
	float PlaybackSpeedMin; // 0x6c
	float PlaybackSpeedMax; // 0x70
	float PlaybackJumpStep; // 0x74
};

struct UStepOnComponent {
	TArray<FStepOnActorConfig> StepOnActorConfigs; // 0xf0
};

struct UDamageIndicatorUserWidget {
	UGobiUserWidget* DamageIndicatorClass; // 0x458
};

struct USkeletalMesh {
	USkeleton* Skeleton; // 0x68
	FBoxSphereBounds ImportedBounds; // 0x70
	FBoxSphereBounds ExtendedBounds; // 0x8c
	FVector PositiveBoundsExtension; // 0xa8
	FVector NegativeBoundsExtension; // 0xb4
	TArray<FSkeletalMaterial> Materials; // 0xe0
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xf0
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0x100
	FPerPlatformInt MinLOD; // 0x160
	FPerPlatformBool DisableBelowMinLodStripping; // 0x164
	bool bServerUsesOnlyHighestIndexLOD; // 0x165
	EAxis SkelMirrorAxis; // 0x166
	EAxis SkelMirrorFlipAxis; // 0x167
	char bUseFullPrecisionUVs : 1; // 0x168
	char bUseHighPrecisionTangentBasis : 1; // 0x168
	char bExplicitCPUSkinning : 1; // 0x168
	char bCPUAccessOnly : 1; // 0x168
	char bHasBeenSimplified : 1; // 0x168
	char bHasVertexColors : 1; // 0x168
	char bEnablePerPolyCollision : 1; // 0x168
	UBodySetup* BodySetup; // 0x170
	UPhysicsAsset* PhysicsAsset; // 0x178
	UPhysicsAsset* ShadowPhysicsAsset; // 0x180
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x188
	char bSupportRayTracing : 1; // 0x198
	TArray<UMorphTarget*> MorphTargets; // 0x1a0
	UAnimInstance* PostProcessAnimBlueprint; // 0x328
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x330
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x340
	TArray<UAssetUserData*> AssetUserData; // 0x370
	TArray<USkeletalMeshSocket*> Sockets; // 0x388
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x3a8
};

struct UEnvQueryGenerator_AICharacters {
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	UEnvQueryContext* SearchCenter; // 0x90
	FAIDataProviderFloatValue SearchRadius; // 0x98
	FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0xd0
	FAIDataProviderGameplayTagQueryContainerValue SecondaryTagQuery; // 0x148
};

struct UARTrackedQRCode {
	FString QRCode; // 0xf8
	int32_t Version; // 0x108
};

struct UMaterialExpressionViewProperty {
	EMaterialExposedViewProperty Property; // 0x48
};

struct UParticleModuleParameterDynamic {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x38
	int32_t UpdateFlags; // 0x48
	char bUsesVelocity : 1; // 0x4c
};

struct ASpectatorBeaconClient {
	FString DestSessionId; // 0x360
	FSpectatorReservation PendingReservation; // 0x370
	ESpectatorClientRequestType RequestType; // 0x3e8
	bool bPendingReservationSent; // 0x3e9
	bool bCancelReservation; // 0x3ea
};

struct UInteractiveToolPropertySet {
	UObject* CachedProperties; // 0x48
	bool bIsPropertySetEnabled; // 0x50
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

struct UMaterialExpressionTextureSample {
	FExpressionInput Coordinates; // 0x58
	FExpressionInput TextureObject; // 0x6c
	FExpressionInput MipValue; // 0x80
	FExpressionInput CoordinatesDX; // 0x94
	FExpressionInput CoordinatesDY; // 0xa8
	FExpressionInput AutomaticViewMipBiasValue; // 0xbc
	ETextureMipValueMode MipValueMode; // 0xd0
	ESamplerSourceMode SamplerSource; // 0xd1
	char AutomaticViewMipBias : 1; // 0xd2
	char ConstCoordinate; // 0xd3
	int32_t ConstMipValue; // 0xd4
};

struct UAsyncActionLoadPrimaryAssetList {
	FMulticastInlineDelegate Completed; // 0x80
};

struct ALevelStreamingCoordinator {
	TArray<FGameModeStreamingVolumes> GameModeStreamingVolumes; // 0x2a0
	TArray<FCardStreamingVolumes> CardStreamingVolumes; // 0x2b0
	TArray<ALevelStreamingVolume*> LevelStreamingVolumes; // 0x2c0
	TArray<ALevelStreamingVolume*> InMatchLevelStreamingVolumes; // 0x2d0
	TArray<FGameModeStreamingVolume> GameModeLevelStreamingVolumes; // 0x2e0
	TArray<FGameModeStreamingVolume> GameModeInMatchLevelStreamingVolumes; // 0x2f0
	TArray<FCardDependentStreamingVolume> CardDependentStreamingVolumes; // 0x300
	TArray<ALevelStreamingVolume*> ActiveGameModeStreamingVolumes; // 0x310
	TArray<ALevelStreamingVolume*> ActiveSafeRoomStreamingVolumes; // 0x320
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

struct UMolotovGrowthComponent {
	FMulticastInlineDelegate AllSequencesComplete; // 0xe8
	FMulticastInlineDelegate OnFlamesStopped; // 0xf8
	FMulticastInlineDelegate OnSequenceComplete; // 0x108
	AMolotovFlame* ActorToSpawn; // 0x118
	FCollisionProfileName TraceProfileName; // 0x120
	FVector LaunchPositionOffset; // 0x128
	char MaxLaunchesPerFrame; // 0x134
	float AdditionalDelayForEachChildStep; // 0x138
	float LaunchStepHeight; // 0x13c
	float MaxFlameDistanceFromGround; // 0x140
	bool bUseInitialLaunchDirForAllLaunches; // 0x144
	FLaunchConfig ForwardLaunchConfig; // 0x148
	bool bLaunchInReverseDirection; // 0x15c
	FLaunchConfig ReverseLaunchConfig; // 0x160
	float MaxLifetime; // 0x174
	bool bAlignFlamesToSurface; // 0x178
	TArray<AMolotovFlame*> SpawnedActors; // 0x1a8
};

struct UDialogueComponent {
	int32_t MaxRecentDialogueInfo; // 0xe8
	TArray<FReplicatedDialogueInfo> RecentDialogueInfos; // 0xf0
	FReplicatedStopSpeakingInfo LastStopSpeakingInfo; // 0x104
	int32_t BookendEndRequestCounter; // 0x110
	FMulticastInlineDelegate OnDialogueBegin; // 0x118
	FMulticastInlineDelegate OnDialogueFinished; // 0x128
	FMulticastInlineDelegate OnDialogueStopped; // 0x138
	bool bShowAvailableSubtitles; // 0x148
	FName SpeakerRowId; // 0x1a8
};

struct UApplicationLifecycleComponent {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xe8
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xf8
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x108
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x118
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x128
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x138
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x148
	FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x158
	FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x168
};

struct AWoundConfigActor {
	USceneComponent* InternalRootComponent; // 0x2a0
	USkeletalMeshComponent* Mesh; // 0x2a8
	UMutilationWoundConfigData* WoundConfigsData; // 0x2b0
};

struct UAnimNotify_SetAttackLocation {
	bool bUseFeetLocation; // 0x40
};

struct UGizmoBoxComponent {
	FVector Origin; // 0x4d0
	FQuat Rotation; // 0x4e0
	FVector Dimensions; // 0x4f0
	float LineThickness; // 0x4fc
	bool bRemoveHiddenLines; // 0x500
	bool bEnableAxisFlip; // 0x501
};

struct UTweenContainer {
	UTweenManagerComponent* OwningTweenManager; // 0x30
	FMulticastInlineDelegate OnTweenContainerEnd; // 0x38
	TArray<FParallelTween> mSequences; // 0x58
};

struct UGameCoach {
	ULocalPlayer* LocalPlayer; // 0x50
	TArray<UGameCoachLesson*> EnabledLessons; // 0x58
	TArray<FGameCoachQueuedEnable> QueuedEnables; // 0x68
	float VisiblityMinRefreshInterval; // 0x158
	float VisiblityMaxRefreshInterval; // 0x15c
};

struct UBTTask_Wait {
	float WaitTime; // 0x78
	float RandomDeviation; // 0x7c
};

struct ASafeRoom {
	USaferoomConfigurationAsset* ConfigAsset; // 0x2a0
	USceneComponent* DefaultRootComponent; // 0x2a8
	UBoxComponent* DefaultSaferoomVolume; // 0x2b0
	TArray<ADoor*> SaferoomDoors; // 0x2c8
	TArray<AGameplayEffectEmitterActor*> EffectEmitters; // 0x2d8
	EPartySafeRoomState OccupiedState; // 0x2e8
	FName SpawnTag; // 0x2ec
	FLevelTravelDetails FinalSaferoomDetails; // 0x2f8
	FCheckpointSaferoomConfig CheckpointSaferoomConfig; // 0x330
	FName CurrentMissionObjectiveScheme; // 0x390
	TMap<FName, FSafeRoomMissionObjectiveConfig> MissionObjectiveSchemes; // 0x398
	float DoorLockedDuration; // 0x3e8
	float DoorOpenDuration; // 0x3ec
	FName StartingConvo; // 0x3f0
	FName StartingConvoResponseGroup; // 0x3f8
	bool bCanPostEnterExitDialogue; // 0x400
	bool bCanPostSaferoomNagDialogue; // 0x401
	EPartySafeRoomState CurrentSaferoomState; // 0x432
	FMulticastInlineDelegate OnOccupancyChanged; // 0x438
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

struct UScenarioComponent {
	bool bInterruptable; // 0xe8
	bool bInterrupting; // 0xe9
	FGameplayTagContainer CardEvalTags; // 0xf0
	bool bCanEverSpawn; // 0x110
	bool bWantsSoloSpawning; // 0x111
	bool bDisableOnComplete; // 0x112
	EPacingPhase HeldPacingPhaseForInfiniteWaves; // 0x113
	bool bUseDelayBeforeSpawn; // 0x114
	TArray<FGameplayTag> FirstWaveCueTags; // 0x118
	TArray<FGameplayTag> LastWaveDoneCueTags; // 0x128
	TArray<FGameplayTag> NextWaveCueTags; // 0x138
	FGameplayTag SpawningLocationTag; // 0x148
	uint32_t SupportedGameModes; // 0x150
	FTopLevelSpawnDeckOverrides AISDGTopLevelSpawnDeckOverrides; // 0x158
	UScenarioEvaluatorSet* ActivationConditions; // 0x1e0
	UScenarioEvaluatorSet* CompletionConditions; // 0x1e8
	UScenarioEvaluatorSet* FailureConditions; // 0x1f0
	float FailureTime; // 0x1f8
	UScenarioHeroEvaluatorSet* HeroEvaluators; // 0x208
	UAISpawnDeckGenerator* AISpawnDeckGenerator; // 0x210
	UAISpawnDeck* AISpawnDeck; // 0x218
	FGameplayTagContainer AISpawnDeckOverrideTags; // 0x228
	UAISpawnDeckGenerator* OverrideAISpawnDeckGenerator; // 0x248
	FRecycleConfigOverride InitialRecycleConfigOverride; // 0x250
	FRecycleConfigOverride RecycleConfigOverride; // 0x278
	TArray<AActor*> UsableActors; // 0x2a0
	TArray<AAISmartActorBase*> AISmartActors; // 0x2b8
	EScenarioState State; // 0x2c8
	TArray<FScenarioHeroDebugInfo> HeroDebugInfos; // 0x300
	FName LastActiveSpawnRule; // 0x310
	float SpawnerSuccessRate; // 0x318
	bool bDeckCleanup; // 0x31e
	float MaxDeckCleanupDuration; // 0x320
	float DeckCleanupHeroAdvanceRange; // 0x324
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
	bool bUseIESBrightness; // 0x88
	float IESBrightnessScale; // 0x8c
	FRotator Rotation; // 0x90
	float SourceRadius; // 0x9c
	float SourceLength; // 0xa0
	float AttenuationRadius; // 0xa4
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

struct UVectorFieldStatic {
	int32_t SizeX; // 0x50
	int32_t SizeY; // 0x54
	int32_t SizeZ; // 0x58
	bool bAllowCPUAccess; // 0x5c
	TArray<FVector4> CPUData; // 0x90
};

struct UInterpTrackVectorMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x98
	FName ParamName; // 0xa8
};

struct ALightmassPortal {
	ULightmassPortalComponent* PortalComponent; // 0x2a0
};

struct UMaterialExpressionFeatureLevelSwitch {
	FExpressionInput Default; // 0x48
	FExpressionInput Inputs[0x4]; // 0x5c
};

struct URuntimeVirtualTextureStreamingProxy {
	FVirtualTextureBuildSettings Settings; // 0xf0
	bool bSinglePhysicalSpace; // 0xfc
	uint32_t BuildHash; // 0x100
};

struct UBTDecorator_CheckLOS {
	bool bDoAsyncTrace; // 0x70
	FAIDataProviderTraceDataValue TraceData; // 0x78
	FBlackboardKeySelector StartKey; // 0xc0
	FBlackboardKeySelector EndKey; // 0xe8
	FAIDataProviderFloatValue TraceStartForwardOffset; // 0x110
	FAIDataProviderFloatValue TraceEndForwardOffset; // 0x148
	FAIDataProviderFloatValue TraceStartHeightOffset; // 0x180
	FAIDataProviderFloatValue TraceStartCharacterHeightOffsetScalar; // 0x1b8
	FAIDataProviderFloatValue TraceEndHeightOffset; // 0x1f0
	bool bTraceBothDirections; // 0x228
	bool bDisableOnSuccess; // 0x229
	float FlowControlDelay; // 0x22c
};

struct UPassageSpawnerMod {
	FGamePropertyFloatMod AlarmCountsMin[0x4]; // 0xd8
	FGamePropertyFloatMod AlarmCountsMax[0x4]; // 0x118
	FGamePropertyFloatMod ClassCountsMin[0x4]; // 0x158
	FGamePropertyFloatMod ClassCountsMax[0x4]; // 0x198
	FGamePropertyFloatMod AlarmWeights[0x4]; // 0x1d8
	FGamePropertyFloatMod ClassWeights[0x4]; // 0x218
};

struct UMRMeshComponent {
	UMaterialInterface* Material; // 0x4b8
	bool bCreateMeshProxySections; // 0x4c0
	bool bUpdateNavMeshOnMeshUpdate; // 0x4c1
	bool bNeverCreateCollisionMesh; // 0x4c2
	UBodySetup* CachedBodySetup; // 0x4c8
	TArray<UBodySetup*> BodySetups; // 0x4d0
	UMaterialInterface* WireframeMaterial; // 0x4e0
};

struct UProceduralBuilderEditorSettings {
	bool bSelectionPrefabOptionsEnabled; // 0x30
	bool bFullMapPrefabOptionsEnabled; // 0x31
	bool bAutoUpdatePlacedPrefabsWithoutPromptPostUpdate; // 0x32
	bool bAutoBuildOnPlacement; // 0x33
	bool bAutoSelectPostAutoBuild; // 0x34
	bool bAutoUpdatePrefabsOnMapLoadForCommandlets; // 0x35
	bool bAutoUpdatePromptForLocked; // 0x36
	bool bAutoUpdatePromptForUnlocked; // 0x37
	bool bReplaceSelectionWithPrefabOnCreateFromPrefab; // 0x38
	TArray<FString> StrictClassFilter; // 0x40
	TArray<FString> InheritedClassFilter; // 0x50
	TArray<FString> StrictClassAndAttachedFilter; // 0x60
	TArray<FString> InheritedClassAndAttachedFilter; // 0x70
};

struct UNavigationSystemConfig {
	FSoftClassPath NavigationSystemClass; // 0x30
	FNavAgentSelector SupportedAgentsMask; // 0x48
	FName DefaultAgentName; // 0x4c
	char bIsOverriden : 1; // 0x54
};

struct UBTTask_PlaySound {
	USoundCue* SoundToPlay; // 0x78
};

struct UMaterialExpressionDesaturation {
	FExpressionInput Input; // 0x48
	FExpressionInput Fraction; // 0x5c
	FLinearColor LuminanceFactors; // 0x70
};

struct UBTComposite_SimpleParallel {
	EBTParallelMode FinishMode; // 0x98
};

struct UMaterialExpressionTruncate {
	FExpressionInput Input; // 0x48
};

struct UMaterialExpressionBentNormalCustomOutput {
	FExpressionInput Input; // 0x48
};

struct UMovieSceneAkTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
	char bIsAMasterTrack : 1; // 0x70
};

struct UAffinityPopupStatEntryUserWidget {
	UStatEntryUserWidget* StatEntryClass; // 0x458
};

struct UThreatComponent {
	bool bIsEnabled; // 0xe8
	EThreatLevel ThreatLevel; // 0xe9
	bool bStartsEnabled; // 0xea
	float DefaultAlertRadius; // 0xec
	float NoiseLoudness; // 0xf0
	float NoiseEventFrequency; // 0xf4
	bool bValidOnlyForAllBotTeams; // 0xfc
	bool bDynamicProximityChecks; // 0xfd
	float ProximityChkFreq; // 0x100
	float FriendlyProximityDist; // 0x110
	int32_t NumFriendliesToDisable; // 0x118
	float EnemyProximityDist; // 0x11c
	int32_t NumEnemiesToEnable; // 0x124
};

struct ANavSystemConfigOverride {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x2a0
	ENavSystemOverridePolicy OverridePolicy; // 0x2a8
	char bLoadOnClient : 1; // 0x2a9
};

struct USignificanceManager {
	FSoftClassPath SignificanceManagerClassName; // 0x110
};

struct UTaskManRelayStatusUserWidget {
	FString DisabledText; // 0x458
};

struct UObjectReferencer {
	TArray<UObject*> ReferencedObjects; // 0x30
};

struct UMaterialExpressionTime {
	char bIgnorePause : 1; // 0x48
	char bOverride_Period : 1; // 0x48
	float Period; // 0x4c
};

struct USimpleConstructionScript {
	TArray<USCS_Node*> RootNodes; // 0x30
	TArray<USCS_Node*> AllNodes; // 0x40
	USCS_Node* DefaultSceneRootNode; // 0x50
};

struct UBirdSystemMod {
	FGamePropertyIntMod MinSystems; // 0xd8
	FGamePropertyIntMod MaxSystems; // 0xe8
};

struct UGameplayEffectTraceMeleeComponent {
	FGamePropertyFloatMod MeleeDamageScaleMod; // 0x250
	FGamePropertyFloatMod MeleeSwingSpeedScaleMod; // 0x260
	FGamePropertyFloatMod MeleeStaminaScaleMod; // 0x270
	FGamePropertyFloatMod MeleeStumbleDamageScaleMod; // 0x280
	FGamePropertyFloatMod MeleeCleavePowerScaleMod; // 0x290
	TArray<UGameplayEffect*> BlockingStateAppliedEffects; // 0x2a0
	TArray<UGameplayEffect*> BlockedDamageSelfAppliedEffects; // 0x2b0
	TArray<UGameplayEffect*> BlockedDamageInstigatorAppliedEffects; // 0x2c0
	bool bAllowCollateralDamage; // 0x2d0
};

struct UMovieSceneNiagaraVectorParameterTrack {
	int32_t ChannelsUsed; // 0x98
};

struct UHeroScreenManager {
	FMulticastInlineDelegate OnNewHeroCardAdded; // 0x210
	FMulticastInlineDelegate OnNewHeroCardsCleared; // 0x220
	TArray<FDataTableRowHandle> KnownAIDirectorCards; // 0x230
	TArray<FDataTableRowHandle> NewHeroCards; // 0x240
};

struct UAISense_Hearing {
	TArray<FAINoiseEvent> NoiseEvents; // 0x88
	float SpeedOfSoundSq; // 0x98
};

struct UHeroLocoStances {
	TArray<FLocomotionStance> LocoStances; // 0x38
};

struct UDrenchAssetUserData {
	TMap<FGameplayTag, FDrenchMaterialParamOverride> DrenchMaterialParamOverrides; // 0x30
};

struct UPlayMontageCallbackProxy {
	FMulticastInlineDelegate OnCompleted; // 0x30
	FMulticastInlineDelegate OnBlendOut; // 0x40
	FMulticastInlineDelegate OnInterrupted; // 0x50
	FMulticastInlineDelegate OnNotifyBegin; // 0x60
	FMulticastInlineDelegate OnNotifyEnd; // 0x70
};

struct UAnimEvalSet_Shared_HitReaction_FB_Recent_C {
	FGameplayEval_Health AvatarHealth; // 0xc0
	FGameplayEval_Angle AvatarHitDirection; // 0x118
	FGameplayEval_GameplayTags AvatarTags; // 0x178
	FAnimEval_MontageLastPlayed PlayedRecently; // 0x210
	FGameplayEval_Random Random; // 0x260
};

struct UAnimEvalSet_Shared_RangedAttack_C {
	FGameplayEval_Distance Distance3D ToEnemy; // 0xc0
	FGameplayEval_Angle AngleToEnemy; // 0x190
	FGameplayEval_RandomChance RandomChance; // 0x1f0
	FGameplayEval_LineOfSight LineOfSight; // 0x240
	FGameplayEval_GameplayTags EnemyTags; // 0x290
};

struct UGameplayEffectMaterialParameterCollection {
	TArray<FMaterialParameterCollectionData> ApplyOnStart; // 0x238
	TArray<FMaterialParameterCollectionData> ApplyOnStop; // 0x248
};

struct UEnvQueryContext_FurthestCapableHero {
	ECapablePlayerDistanceMode DistanceMode; // 0x30
	UEnvQueryContext* DistanceMapSource; // 0x38
	FNavAgentSelector DistanceMapNavMesh; // 0x40
};

struct UWidgetBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x358
	char bAllowTemplate : 1; // 0x360
	char bAllowDynamicCreation : 1; // 0x360
	char bValidTemplate : 1; // 0x360
	char bTemplateInitialized : 1; // 0x360
	char bCookedTemplate : 1; // 0x360
	char bClassRequiresNativeTick : 1; // 0x360
	TArray<FDelegateRuntimeBinding> Bindings; // 0x368
	TArray<UWidgetAnimation*> Animations; // 0x378
	TArray<FName> NamedSlots; // 0x388
	TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x398
	UUserWidget* Template; // 0x3c0
};

struct UKillFeedUserWidget {
	TMap<TWeakObjectPtr<APlayerSlot>, EKillFeedState> PlayerStates; // 0x458
};

struct USteeringBehavior_FocusLookAhead {
	float LookAheadTime; // 0x58
};

struct UAnimSequence {
	int32_t NumFrames; // 0xc0
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xc8
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xe8
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xf0
	EAdditiveAnimationType AdditiveAnimType; // 0x168
	EAdditiveBasePoseType RefPoseType; // 0x169
	UAnimSequence* RefPoseSeq; // 0x170
	int32_t RefFrameIndex; // 0x178
	FName RetargetSource; // 0x17c
	EAnimInterpolationType Interpolation; // 0x184
	bool bEnableRootMotion; // 0x185
	ERootMotionRootLock RootMotionRootLock; // 0x186
	bool bForceRootLock; // 0x187
	bool bUseNormalizedRootMotionScale; // 0x188
	bool bAnimIsComplete; // 0x189
	bool bRootMotionSettingsCopiedFromMontage; // 0x18a
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x190
};

struct UPeriodicMovementComponent {
	bool UseRandomTimeOffset; // 0x128
	bool MoveInWorldAxis; // 0x129
	FPeriodicMovementParams X_Axis; // 0x12c
	FPeriodicMovementParams Y_Axis; // 0x13c
	FPeriodicMovementParams Z_Axis; // 0x14c
	FPeriodicMovementParams Yaw; // 0x15c
};

struct UAkSlider {
	float Value; // 0x148
	FDelegate ValueDelegate; // 0x14c
	FSliderStyle WidgetStyle; // 0x160
	EOrientation Orientation; // 0x4d0
	FLinearColor SliderBarColor; // 0x4d4
	FLinearColor SliderHandleColor; // 0x4e4
	bool IndentHandle; // 0x4f4
	bool Locked; // 0x4f5
	float StepSize; // 0x4f8
	bool IsFocusable; // 0x4fc
	FAkPropertyToControl ThePropertyToControl; // 0x500
	FAkWwiseItemToControl ItemToControl; // 0x510
	FMulticastInlineDelegate OnValueChanged; // 0x550
	FMulticastInlineDelegate OnItemDropped; // 0x560
	FMulticastInlineDelegate OnPropertyDropped; // 0x570
};

struct UAnimNotify_SharedSoundBase {
	FName Bone; // 0x40
	USoundCollectionAssetAnimPreview* DemoSoundAsset; // 0x48
};

struct UGameplayEffectPlayerStaminaComponent {
	FGamePropertyFloatMod MaxStaminaMod; // 0x240
	FGamePropertyFloatMod StaminaRegenPerSecondMod; // 0x250
};

struct USteeringBehavior_Oscillate {
	UAnimContext_Distance* DistanceContextClass; // 0x58
	UAnimContext_Actor* TargetActor; // 0x60
	float Period; // 0x68
	FFloatRange OscillationOuterRange; // 0x6c
	FFloatRange MaxOscillationRange; // 0x7c
};

struct UNavArea {
	float DefaultCost; // 0x38
	float FixedAreaEnteringCost; // 0x3c
	float RandomCost; // 0x44
	FColor DrawColor; // 0x48
	FNavAgentSelector SupportedAgents; // 0x4c
	char bSupportsAgent0 : 1; // 0x50
	char bSupportsAgent1 : 1; // 0x50
	char bSupportsAgent2 : 1; // 0x50
	char bSupportsAgent3 : 1; // 0x50
	char bSupportsAgent4 : 1; // 0x50
	char bSupportsAgent5 : 1; // 0x50
	char bSupportsAgent6 : 1; // 0x50
	char bSupportsAgent7 : 1; // 0x50
	char bSupportsAgent8 : 1; // 0x51
	char bSupportsAgent9 : 1; // 0x51
	char bSupportsAgent10 : 1; // 0x51
	char bSupportsAgent11 : 1; // 0x51
	char bSupportsAgent12 : 1; // 0x51
	char bSupportsAgent13 : 1; // 0x51
	char bSupportsAgent14 : 1; // 0x51
	char bSupportsAgent15 : 1; // 0x51
};

struct UAnimEvalSet_EnterLadderTop_C {
	FAnimEval_EnterLadder EnterLadder; // 0xc0
};

struct UAsyncTask_LoadXRDeviceVisComponent {
	FMulticastInlineDelegate OnModelLoaded; // 0x38
	FMulticastInlineDelegate OnLoadFailure; // 0x48
	UPrimitiveComponent* SpawnedComponent; // 0x60
};

struct UAnimEvalSet_Shared_HitReaction_UB_Weakspot_Rupture_C {
	FGameplayEval_Dismembered Dismembered; // 0xc0
	FGameplayEval_HitReactionBone HitBone; // 0x118
	FGameplayEval_DamageType DamageType; // 0x1c8
	FGameplayEval_DamageAmount DamageAmount; // 0x288
	FGameplayEval_HitReactionHealth HitReactionHealth; // 0x320
	FGameplayEval_CanRupture CanRupture; // 0x378
	FGameplayEval_HitReactionWeakSpot HitReactionWeakspot; // 0x3c8
};

struct UMutilationHitReactionSet {
	UGameplayEvaluatorSet* FilterSet; // 0x38
	TArray<FMutilationHitReaction> HitReactions; // 0x40
};

struct UBTDecorator_CheckPounceTrace {
	FBlackboardKeySelector StartKey; // 0x70
	FBlackboardKeySelector EndKey; // 0x98
	FAIDataProviderFloatValue TraceStartHeightOffset; // 0xc0
	FAIDataProviderFloatValue TraceEndHeightOffset; // 0xf8
	FAIDataProviderFloatValue TraceHalfHeightOffset; // 0x130
};

struct UDatasmithStaticMeshIFCImportData {
	FString SourceGlobalId; // 0x30
};

struct URuntimeVirtualTextureComponent {
	URuntimeVirtualTexture* VirtualTexture; // 0x230
	bool bUseStreamingLowMipsInEditor; // 0x238
	AActor* BoundsSourceActor; // 0x240
};

struct UGlobalStyle {
	TMap<FName, FGlobalStyleColor> Colors; // 0x58
	TMap<FName, FSlateFontInfo> Fonts; // 0xa8
	TMap<FName, FTextBlockStyle> RichTextStyles; // 0xf8
};

struct UFoliageType_InstancedStaticMesh {
	UStaticMesh* Mesh; // 0x380
	TArray<UMaterialInterface*> OverrideMaterials; // 0x388
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x398
};

struct AMolotov_Item_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4d0
	UStaticMeshComponent* BaseStaticMesh_3P; // 0x4d8
	UFPRigParticleSystemComponent* Flames_1P; // 0x4e0
	UFPRigSkeletalMeshComponent* BaseMesh_1P; // 0x4e8
	UClipAmmoComponent* ClipAmmo; // 0x4f0
	UThrowableComponent* Throwable; // 0x4f8
	UItemAnimationDataComponent* ItemAnimationData; // 0x500
};

struct AARSharedWorldGameState {
	TArray<char> PreviewImageData; // 0x310
	TArray<char> ARWorldData; // 0x320
	int32_t PreviewImageBytesTotal; // 0x330
	int32_t ARWorldBytesTotal; // 0x334
	int32_t PreviewImageBytesDelivered; // 0x338
	int32_t ARWorldBytesDelivered; // 0x33c
};

struct UPacketRelayNetConnection {
	bool bIsPassthrough; // 0x1ad8
};

struct UExplosionTrait {
	FExplosionConfig Config; // 0x30
	FGameplayTag ComponentTag; // 0x170
	UExplosionComponent* ExplosionComponentClass; // 0x178
};

struct UWaterInteractableComponent {
	InjectionType Type; // 0x4d8
	UTexture* Texture; // 0x4e0
	FVector TextureRGBScale; // 0x4e8
	float TextureAlphaScale; // 0x4f4
	WaterForceChannelType Channel; // 0x4f8
	float IntensityCycleBaseline; // 0x4fc
	float IntensityCycleDuration; // 0x500
	float IntensityCycleAttack; // 0x504
	float IntensityCycleDecay; // 0x508
	float IntensityCycleSustain; // 0x50c
	float IntensityCycleSustainLevel; // 0x510
	float IntensityCycleRelease; // 0x514
	bool TileEverywhere; // 0x518
};

struct USoundNodeSoundClass {
	USoundClass* SoundClassOverride; // 0x60
};

struct UInputKeySelectorImage {
	FButtonStyle WidgetStyle; // 0x148
	FVector2D IconSize; // 0x3e0
	FSlateBrush EmptyImage; // 0x3e8
	FName ActionOrAxisName; // 0x478
	bool IsAxis; // 0x480
	float AxisScale; // 0x484
	float AnalogBindThreshold; // 0x488
	float BindingTimerDuration; // 0x48c
	FInputChord SelectedKey; // 0x490
	FMargin Margin; // 0x4b0
	bool bAllowGamepadKeys; // 0x4c0
	bool bAllowPCKeys; // 0x4c1
	bool bRightMouseClear; // 0x4c2
	bool bCanRebind; // 0x4c3
	TArray<FKey> EscapeKeys; // 0x4c8
	TArray<FKey> ClearKeys; // 0x4e8
	FMulticastInlineDelegate OnPreviewSelectKey; // 0x4f8
	FMulticastInlineDelegate OnKeySelected; // 0x508
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x518
	FMulticastInlineDelegate OnCantRebind; // 0x528
	FMulticastInlineDelegate OnKeyBlocked; // 0x538
};

struct UMovieSceneEnumSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
};

struct UChaosDestructionListener {
	char bIsCollisionEventListeningEnabled : 1; // 0x230
	char bIsBreakingEventListeningEnabled : 1; // 0x230
	char bIsTrailingEventListeningEnabled : 1; // 0x230
	FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x234
	FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x24c
	FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x264
	TSet<AChaosSolverActor*> ChaosSolverActors; // 0x280
	TSet<AGeometryCollectionActor*> GeometryCollectionActors; // 0x2d0
	FMulticastInlineDelegate OnCollisionEvents; // 0x320
	FMulticastInlineDelegate OnBreakingEvents; // 0x330
	FMulticastInlineDelegate OnTrailingEvents; // 0x340
};

struct UCommon_DismemberedPiece_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x328
};

struct UVectorField {
	FBox Bounds; // 0x30
	float Intensity; // 0x4c
};

struct AMelee_ControllerBP_C {
	UAIScriptingComponent* AIScripting; // 0x498
	UAIPerceptionComponent* AIPerception; // 0x4a0
	FGameplayTagContainer AttackTags; // 0x4a8
	FGameplayTagContainer AlertTags; // 0x4c8
	FGameplayTagContainer IdleTags; // 0x4e8
	UEnvQuery* AttackLocation_EQS; // 0x508
	UEnvQuery* Threat_EQS; // 0x510
	FGameplayTagContainer HitReactionTags; // 0x518
	UEnvQuery* Wander_EQS; // 0x538
	FGameplayTagContainer AngerTags; // 0x540
	UEnvQuery* AmbushLocation_EQS; // 0x560
	UEnvQuery* SneakAdvanceLocation_EQS; // 0x568
	FGameplayTagQuery SneakTags; // 0x570
	FGameplayTagQuery SneakAdvanceTags; // 0x5b8
};

struct UWidgetInteractionComponent {
	FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x230
	int32_t VirtualUserIndex; // 0x250
	float PointerIndex; // 0x254
	ECollisionChannel TraceChannel; // 0x258
	float InteractionDistance; // 0x25c
	EWidgetInteractionSource InteractionSource; // 0x260
	bool bEnableHitTesting; // 0x261
	bool bHitTestReturnsFaceIndex; // 0x262
	bool bIgnoreObstructions; // 0x263
	bool bShowDebug; // 0x264
	FLinearColor DebugColor; // 0x268
	FHitResult CustomHitResult; // 0x2f0
	FVector2D LocalHitLocation; // 0x378
	FVector2D LastLocalHitLocation; // 0x380
	UWidgetComponent* HoveredWidgetComponent; // 0x388
	FHitResult LastHitResult; // 0x390
	bool bIsHoveredWidgetInteractable; // 0x418
	bool bIsHoveredWidgetFocusable; // 0x419
	bool bIsHoveredWidgetHitTestVisible; // 0x41a
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

struct UTitanStage2TentacleComponent {
	FTitanStage2StateInfo StateInfo; // 0x118
	TArray<FTitanStage2TentacleZoneAnims> ZoneAnims; // 0x120
};

struct UVariant {
	FText DisplayText; // 0x30
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct ULifetimeStatsScreen {
	TArray<FUIPlayerStat> Stats; // 0x558
};

struct UAnimNotifyState_DisableAimAssist {
	bool bEnableOnNotifyEnd; // 0x38
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

struct ULipsyncHelperSubsystem {
	UDataTable* CurrentLanguageLipsyncLines; // 0x48
	UDataTable* LocalizationTable; // 0x50
};

struct UAnimationSharingStateProcessor {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x30
};

struct UWaypointSpawnerComponent {
	FWaypointDefinition WaypointDef; // 0x4d0
	AWaypoint* Waypoint; // 0x5a0
};

struct AVistaCharacterSpawner {
	FMulticastInlineDelegate OnVistaCharacteSpawn; // 0x2a0
	AGobiCharacter* GobiCharacterClass; // 0x2b0
	TArray<USkeletalMeshRegionConfig*> PreloadMeshConfigs; // 0x2b8
	int32_t NumCharactersToSpawn; // 0x2c8
	bool bFillOnStart; // 0x2d0
	bool bRespawnOnDeath; // 0x2d1
	float SpawnDelay; // 0x2d4
	float SpawnRadius; // 0x2d8
	bool bSpawnOnlyWhenNotVisible; // 0x2dc
	UNavigationQueryFilter* SpawnNavigationFilterClass; // 0x2e0
	UGobiDamageType* KillPopDamageType; // 0x2e8
	TArray<UObject*> LoadedAssets; // 0x2f0
};

struct UNiagaraSpriteRendererProperties {
	UMaterialInterface* Material; // 0x58
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60
	ENiagaraSpriteAlignment Alignment; // 0x88
	ENiagaraSpriteFacingMode FacingMode; // 0x89
	FVector2D PivotInUVSpace; // 0x8c
	ENiagaraSortMode SortMode; // 0x94
	FVector2D SubImageSize; // 0x98
	char bSubImageBlend : 1; // 0xa0
	char bRemoveHMDRollInVR : 1; // 0xa0
	char bSortOnlyWhenTranslucent : 1; // 0xa0
	float MinFacingCameraBlendDistance; // 0xa4
	float MaxFacingCameraBlendDistance; // 0xa8
	FNiagaraVariableAttributeBinding PositionBinding; // 0xb0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x128
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1a0
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x218
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x290
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x308
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x380
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3f8
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x470
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4e8
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x560
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5d8
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x650
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x6c8
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x740
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x7b8
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x830
};

struct UBoxFalloff {
	float Magnitude; // 0xe8
	float MinRange; // 0xec
	float MaxRange; // 0xf0
	float Default; // 0xf4
	FTransform Transform; // 0x100
	EFieldFalloffType Falloff; // 0x130
};

struct UApplyDamageDealtEffectsMod {
	EApplyDamageEffectModType ApplicationMethod; // 0xd0
	FDamageDealtTriggeredEffectConfig DamageDealtTriggerConfig; // 0xd8
	FCharacterEmitterDef DamageSourceEmitterDef; // 0x1e0
	FCharacterEmitterDef DamageTargetEmitterDef; // 0x2e8
};

struct UFireModeMachineGunComponent {
	float WindUpTime; // 0x18c
	float MaxDamageDistance; // 0x190
	float DelayBetweenDamageTicks; // 0x194
	UGobiDamageType* DamageType; // 0x198
	FCollisionProfileName ImpactTraceProfile; // 0x1a0
	FCollisionProfileName ImpactEffectOverlapProfile; // 0x1a8
	float ImpactEffectRadius; // 0x1b0
	TArray<UGameplayEffect*> ImpactLocationGameplayEffects; // 0x1b8
	FGameplayTag GunMeshTag; // 0x1c8
	float MaxVisualTraceLength; // 0x1d0
	float DelayBetweenVisualTraces; // 0x1d4
	UAkAudioEvent* WindupLoopAudio; // 0x1d8
	UAkAudioEvent* WindupLoopStopAudio; // 0x1e0
	UAkAudioEvent* FireLoopAudio; // 0x1e8
	UAkAudioEvent* FireLoopStopAudio; // 0x1f0
	FName MuzzleFlashBoneName; // 0x1f8
	FName TracerSpawnLocationBoneName; // 0x200
	UParticleSystem* FirstPersonMuzzleFlash; // 0x208
	UParticleSystem* ThirdPersonMuzzleFlash; // 0x210
	FVector2D TracerVelocityMinMax; // 0x218
	UImpactEffectConfig* ImpactEffectConfig; // 0x220
	UWeaponTracer* WeaponTracer; // 0x228
	char TracerFrequency; // 0x230
};

struct UHudSettings {
	char bShowHUD : 1; // 0x30
	TArray<FName> DebugDisplay; // 0x38
};

struct UAnimCompress_RemoveEverySecondKey {
	int32_t MinKeys; // 0x48
	char bStartAtSecondKey : 1; // 0x4c
};

struct UCreateSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UBTService_CanUseSmartActor {
	FBlackboardKeySelector SmartActorBlackboardKey; // 0xa0
};

struct USoundNodeEnveloper {
	float LoopStart; // 0x60
	float LoopEnd; // 0x64
	float DurationAfterLoop; // 0x68
	int32_t LoopCount; // 0x6c
	char bLoopIndefinitely : 1; // 0x70
	char bLoop : 1; // 0x70
	UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x78
	UDistributionFloatConstantCurve* PitchInterpCurve; // 0x80
	FRuntimeFloatCurve VolumeCurve; // 0x88
	FRuntimeFloatCurve PitchCurve; // 0x110
	float PitchMin; // 0x198
	float PitchMax; // 0x19c
	float VolumeMin; // 0x1a0
	float VolumeMax; // 0x1a4
};

struct UOperatorField {
	float Magnitude; // 0xe8
	UFieldNodeBase* RightField; // 0xf0
	UFieldNodeBase* LeftField; // 0xf8
	EFieldOperationType Operation; // 0x100
};

struct UMastermindSettings {
	TSoftClassPtr<UObject> MastermindDebugCommandManagerClass; // 0x40
	int32_t MastermindTCPPort; // 0x68
};

struct UMaterialExpressionConstant4Vector {
	FLinearColor Constant; // 0x48
};

struct UAnimBlueprintGeneratedClass {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x360
	USkeleton* TargetSkeleton; // 0x370
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x378
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x388
	TArray<FName> SyncGroupNames; // 0x458
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x468
	TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x478
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x4c8
};

struct UAnimationAsset {
	USkeleton* Skeleton; // 0x40
	TArray<UAnimMetaData*> MetaData; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x78
};

struct USoundConcurrency {
	FSoundConcurrencySettings Concurrency; // 0x30
};

struct UFieldSystemMetaDataProcessingResolution {
	EFieldResolutionType ResolutionType; // 0xe8
};

struct UBaseTween {
	UTweenContainer* mOwningTweenContainer; // 0x70
};

struct UGameplayEffectClipAmmoComponent {
	FGamePropertyFloatMod MaxClipAmountScaleMod; // 0x250
};

struct UGameDirector {
	FMulticastInlineDelegate OnHordeEvent; // 0x30
	UAITypePointCosts* AITypePointCosts; // 0x40
	FPacingConfigBase PacingConfigBase; // 0xe8
	TArray<FPacingConfigOverride> PacingConfigOverride; // 0x130
	UAISpawnPointBudgets* AISpawnPointBudgets; // 0x220
	FNavAgentSelector HeroNavmeshSelector; // 0x228
	FGameplayTagQuery ValidHeroSpawnQuery; // 0x238
	FGameplayTagQuery ValidHeroLOSQuery; // 0x280
	int32_t MaxAICount; // 0x2c8
	FPerPlatformInt MaxAIInSolo; // 0x2cc
	TSoftClassPtr<UObject> TestSpawningScenarioClass; // 0x2d8
	float HeroDistanceScoreWeight; // 0x308
	float HeroPopulationScoreWeight; // 0x30c
	float HeroSeparationScoreWeight; // 0x310
	float HeroBudgetScoreWeight; // 0x314
	float HeroLifeStateScoreWeight; // 0x318
	float DelayForHordeFinishDialogue; // 0x31c
	float FloatingConvoDelayAdjustment; // 0x320
	UGameIntensitySystem* IntensitySystemClass; // 0x360
	UGameIntensitySystem* IntensitySystem; // 0x368
	FRecycleConfig RecycleConfig; // 0x378
	FRecycleConfig ResolvedRecycleConfig; // 0x390
	bool bDisableHorde; // 0x3c8
	bool bDebugShowStats; // 0x3c9
	ECollisionChannel LOSChannel; // 0x3e2
	UAISpawnDeckGenerator* OverrideAISpawnDeckGenerator; // 0x3f8
	UAISpawnDeckGenerator* AISpawnDeckGeneratorForGobiSpawnAIFromClass; // 0x420
	UAISpawnDeck* AISpawnDeckForGobiSpawnAIFromClass; // 0x428
	AGameDirectorDebugger* GameDirectorDebugger; // 0x430
	FDirectorStateSummary DirectorStateSummary; // 0x438
	FClearAfterHordeConfig ClearAfterHordeConfig; // 0x458
	float SpawnHeatDecayRate; // 0x468
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

struct UAudioMutilationManager {
	uint16_t MaxMutilationEventsPerFrame; // 0x30
};

struct UClothingAssetBase {
	FString ImportedFilePath; // 0x30
	FGuid AssetGuid; // 0x40
};

struct UProgressWidgetStyle {
	FProgressBarStyle ProgressBarStyle; // 0x38
};

struct UPartyScreen {
	UPartyPrivacyOptionsPopup* PartyPrivacyOptionsPtr; // 0x5b8
};

struct AMolotov_Projectile_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x730
	UParticleSystemComponent* LitRagParticle; // 0x738
	UAlertComponent* Alert; // 0x740
	URotatingMovementComponent* RotatingMovement; // 0x748
};

struct UAkPS5InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkPellegrinoAdvancedInitializationSettings AdvancedSettings; // 0xb8
	FAkTRSPerPlatformSettings TRSSettings; // 0xf8
};

struct AStaticMeshActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x2a0
	bool bStaticMeshReplicateMovement; // 0x2a8
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x2a9
};

struct UCharacterAudioManagerSubsystem {
	UAudioMutilationManager* MutilationManager; // 0x38
	USharedSoundManager* SharedSoundManager; // 0x40
};

struct UBorderSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UPaperDollAmmoUserWidget {
	EAmmoType AmmoType; // 0x460
};

struct USegmentedReloadComponent {
	bool bReloadPressed; // 0x210
	float ReloadEnterLength; // 0x268
	float ReloadAddTime; // 0x26c
	float ReloadLoopLength; // 0x270
	float ReloadExitLength; // 0x274
	float ReloadExitAnimationLength; // 0x278
	bool AutoReloadWhenEmpty; // 0x27c
	FGameplayTagContainer AppliedTags; // 0x280
	FGameplayTagContainer BlockingTags; // 0x2a0
	FGameplayTagContainer InterruptingTags; // 0x2c0
	FGameplayTagContainer CancellingTags; // 0x2e0
	int8_t MinRequiredAmmoForReloadInterrupt; // 0x300
	UAnimMontage* ReloadMontageFP; // 0x308
	UAnimMontage* ReloadMontage3P; // 0x310
};

struct UInterpTrackAnimControl {
	FName SlotName; // 0x98
	TArray<FAnimControlTrackKey> AnimSeqs; // 0xa0
	char bSkipAnimNotifiers : 1; // 0xb0
};

struct UButtonWidgetStyle {
	FButtonStyle ButtonStyle; // 0x38
};

struct UProceduralFoliageTile {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x30
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd8
};

struct UTraitCollection {
	TArray<UTrait*> Traits; // 0x38
};

struct UBotPlaystyleConfigCollection {
	TArray<FBotPlaystyleConfig> Playstyles; // 0x38
};

struct UPawnAction_Wait {
	float TimeToWait; // 0xa0
};

struct UMatchmakingSettingsPanelUserWidget {
	EMatchmakingScreenMode Mode; // 0x468
};

struct UGameViewportClient {
	UConsole* ViewportConsole; // 0x48
	TArray<FDebugDisplayProperty> DebugProperties; // 0x50
	int32_t MaxSplitscreenPlayers; // 0x70
	UWorld* World; // 0x80
	UGameInstance* GameInstance; // 0x88
};

struct UHierarchicalInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x688
	int32_t NumBuiltInstances; // 0x698
	FBox BuiltInstanceBounds; // 0x6a0
	FBox UnbuiltInstanceBounds; // 0x6bc
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x6d8
	char bEnableDensityScaling : 1; // 0x6e8
	int32_t OcclusionLayerNumNodes; // 0x6f4
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x6f8
	bool bDisableCollision; // 0x714
	int32_t InstanceCountToRender; // 0x718
};

struct UDistributionFloatUniform {
	float Min; // 0x40
	float Max; // 0x44
};

struct UBTDecorator_CheckGameplayTagsOnActorFlowControl {
	EBTGameplayTagRestart NotifyObserver; // 0x148
};

struct UCampaignRunManager {
	FCampaignRunDataV3 LoadedCampaignRunData; // 0x80
};

struct AVolumetricLightmapDensityVolume {
	FInt32Interval AllowedMipLevelRange; // 0x2d8
};

struct UAnimNotify_PlayerSound {
	UAkAudioEvent* PlayerSoundEvent; // 0x40
};

struct UCurrencyDragPayload {
	int32_t NumToDrop; // 0x38
};

struct UStaminaBarUserWidget {
	UStaminaPipUserWidget* PipClass; // 0x458
	float CurrentStamina; // 0x460
	float MaxStamina; // 0x464
};

struct AWaterSimSurfaceMesh {
	bool bStandaloneWaterSim; // 0x2b0
	UWaterSimulation* WaterSim; // 0x2b8
	UWaterSurfaceComponent* WaterSurfaceComponent; // 0x2c0
	float DistanceCheckInterval; // 0x2c8
};

struct UAnimationCompressionLibraryDatabase {
	TArray<char> CookedCompressedBytes; // 0x30
	TArray<uint64_t> CookedAnimSequenceMappings; // 0x40
	uint32_t MaxStreamRequestSizeKB; // 0x120
};

struct ULadderMovementModeComponent {
	TArray<UAnimMontage*> ApproachMontages; // 0x130
	TArray<UAnimMontage*> DismountMontages; // 0x140
	FLadderMovementModeConfig Config; // 0x150
	FLadderMovementModeData MoveTickData; // 0x320
};

struct UNiagaraDataInterfaceCurve {
	FRichCurve Curve; // 0x60
};

struct UNiagaraDataInterfaceExport {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
};

struct UEditableText {
	FText Text; // 0x148
	FDelegate TextDelegate; // 0x160
	FText HintText; // 0x170
	FDelegate HintTextDelegate; // 0x188
	FEditableTextStyle WidgetStyle; // 0x198
	USlateWidgetStyleAsset* Style; // 0x3e0
	USlateBrushAsset* BackgroundImageSelected; // 0x3e8
	USlateBrushAsset* BackgroundImageComposing; // 0x3f0
	USlateBrushAsset* CaretImage; // 0x3f8
	FSlateFontInfo Font; // 0x400
	FSlateColor ColorAndOpacity; // 0x460
	bool IsReadOnly; // 0x490
	bool IsPassword; // 0x491
	float MinimumDesiredWidth; // 0x494
	bool IsCaretMovedWhenGainFocus; // 0x498
	bool SelectAllTextWhenFocused; // 0x499
	bool RevertTextOnEscape; // 0x49a
	bool ClearKeyboardFocusOnCommit; // 0x49b
	bool SelectAllTextOnCommit; // 0x49c
	bool AllowContextMenu; // 0x49d
	EVirtualKeyboardType KeyboardType; // 0x49e
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x49f
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x4a0
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4a1
	ETextJustify Justification; // 0x4a2
	FShapedTextOptions ShapedTextOptions; // 0x4a3
	bool bIsFocusedOnHover; // 0x4a6
	bool bIsFocusRectVisible; // 0x4a7
	FDelegate OnIsTypedCharValid; // 0x4a8
	FMulticastInlineDelegate OnTextChanged; // 0x4b8
	FMulticastInlineDelegate OnTextCommitted; // 0x4c8
};

struct UNavAreaMeta_SwitchByAgent {
	UNavArea* Agent0Area; // 0x58
	UNavArea* Agent1Area; // 0x60
	UNavArea* Agent2Area; // 0x68
	UNavArea* Agent3Area; // 0x70
	UNavArea* Agent4Area; // 0x78
	UNavArea* Agent5Area; // 0x80
	UNavArea* Agent6Area; // 0x88
	UNavArea* Agent7Area; // 0x90
	UNavArea* Agent8Area; // 0x98
	UNavArea* Agent9Area; // 0xa0
	UNavArea* Agent10Area; // 0xa8
	UNavArea* Agent11Area; // 0xb0
	UNavArea* Agent12Area; // 0xb8
	UNavArea* Agent13Area; // 0xc0
	UNavArea* Agent14Area; // 0xc8
	UNavArea* Agent15Area; // 0xd0
};

struct UExpandableArea {
	FExpandableAreaStyle Style; // 0x150
	FSlateBrush BorderBrush; // 0x280
	FSlateColor BorderColor; // 0x310
	bool bIsExpanded; // 0x340
	float MaxHeight; // 0x344
	FMargin HeaderPadding; // 0x348
	FMargin AreaPadding; // 0x358
	FMulticastInlineDelegate OnExpansionChanged; // 0x368
	UWidget* HeaderContent; // 0x378
	UWidget* BodyContent; // 0x380
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

struct UParticleModuleOrbit {
	EOrbitChainMode ChainMode; // 0x40
	FRawDistributionVector OffsetAmount; // 0x48
	FOrbitOptions OffsetOptions; // 0x90
	FRawDistributionVector RotationAmount; // 0x98
	FOrbitOptions RotationOptions; // 0xe0
	FRawDistributionVector RotationRateAmount; // 0xe8
	FOrbitOptions RotationRateOptions; // 0x130
};

struct AGeometryCollectionRenderLevelSetActor {
	UVolumeTexture* TargetVolumeTexture; // 0x2a0
	UMaterial* RayMarchMaterial; // 0x2a8
	float SurfaceTolerance; // 0x2b0
	float Isovalue; // 0x2b4
	bool Enabled; // 0x2b8
	bool RenderVolumeBoundingBox; // 0x2b9
};

struct USourceEffectSimpleDelayPreset {
	FSourceEffectSimpleDelaySettings Settings; // 0x88
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

struct UCharacterMovementComponent {
	ACharacter* CharacterOwner; // 0x180
	float GravityScale; // 0x188
	float MaxStepHeight; // 0x18c
	float MaxFloorTraceDistance; // 0x190
	float JumpZVelocity; // 0x194
	float JumpOffJumpZFactor; // 0x198
	float JumpOffSpeed; // 0x19c
	float WalkableFloorAngle; // 0x1a0
	float WalkableFloorZ; // 0x1a4
	EMovementMode MovementMode; // 0x1a8
	char CustomMovementMode; // 0x1a9
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x1aa
	float GroundFriction; // 0x1ac
	float MaxWalkSpeed; // 0x1cc
	float MaxWalkSpeedCrouched; // 0x1d0
	float MaxSwimSpeed; // 0x1d4
	float MaxFlySpeed; // 0x1d8
	float MaxCustomMovementSpeed; // 0x1dc
	float MaxAcceleration; // 0x1e0
	float MinAnalogWalkSpeed; // 0x1e4
	float BrakingFrictionFactor; // 0x1e8
	float BrakingFriction; // 0x1ec
	float BrakingSubStepTime; // 0x1f0
	float BrakingDecelerationWalking; // 0x1f4
	float BrakingDecelerationFalling; // 0x1f8
	float BrakingDecelerationSwimming; // 0x1fc
	float BrakingDecelerationFlying; // 0x200
	float AirControl; // 0x204
	float AirControlBoostMultiplier; // 0x208
	float AirControlBoostVelocityThreshold; // 0x20c
	float FallingLateralFriction; // 0x210
	float CrouchedHalfHeight; // 0x214
	float Buoyancy; // 0x218
	float PerchRadiusThreshold; // 0x21c
	float PerchAdditionalHeight; // 0x220
	FRotator RotationRate; // 0x224
	char bUseSeparateBrakingFriction : 1; // 0x230
	char bApplyGravityWhileJumping : 1; // 0x230
	char bUseControllerDesiredRotation : 1; // 0x230
	char bOrientRotationToMovement : 1; // 0x230
	char bSweepWhileNavWalking : 1; // 0x230
	char bMovementInProgress : 1; // 0x230
	char bEnableScopedMovementUpdates : 1; // 0x230
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x231
	char bForceMaxAccel : 1; // 0x231
	char bRunPhysicsWithNoController : 1; // 0x231
	char bForceNextFloorCheck : 1; // 0x231
	char bShrinkProxyCapsule : 1; // 0x231
	char bCanWalkOffLedges : 1; // 0x231
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x231
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x232
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x232
	char bDeferUpdateMoveComponent : 1; // 0x232
	char bEnablePhysicsInteraction : 1; // 0x232
	char bTouchForceScaledToMass : 1; // 0x232
	char bPushForceScaledToMass : 1; // 0x232
	char bPushForceUsingZOffset : 1; // 0x232
	char bScalePushForceToVelocity : 1; // 0x233
	USceneComponent* DeferredUpdatedMoveComponent; // 0x238
	float MaxOutOfWaterStepHeight; // 0x240
	float OutofWaterZ; // 0x244
	float Mass; // 0x248
	float StandingDownwardForceScale; // 0x24c
	float InitialPushForceFactor; // 0x250
	float PushForceFactor; // 0x254
	float PushForcePointZOffsetFactor; // 0x258
	float TouchForceFactor; // 0x25c
	float MinTouchForce; // 0x260
	float MaxTouchForce; // 0x264
	float RepulsionForce; // 0x268
	FVector Acceleration; // 0x26c
	FQuat LastUpdateRotation; // 0x280
	FVector LastUpdateLocation; // 0x290
	FVector LastUpdateVelocity; // 0x29c
	float ServerLastTransformUpdateTimeStamp; // 0x2a8
	float ServerLastClientGoodMoveAckTime; // 0x2ac
	float ServerLastClientAdjustmentTime; // 0x2b0
	FVector PendingImpulseToApply; // 0x2b4
	FVector PendingForceToApply; // 0x2c0
	float AnalogInputModifier; // 0x2cc
	float MaxSimulationTimeStep; // 0x2dc
	int32_t MaxSimulationIterations; // 0x2e0
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2e4
	float MaxDepenetrationWithGeometry; // 0x2e8
	float MaxDepenetrationWithGeometryAsProxy; // 0x2ec
	float MaxDepenetrationWithPawn; // 0x2f0
	float MaxDepenetrationWithPawnAsProxy; // 0x2f4
	float NetworkSimulatedSmoothLocationTime; // 0x2f8
	float NetworkSimulatedSmoothRotationTime; // 0x2fc
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x300
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x304
	float NetProxyShrinkRadius; // 0x308
	float NetProxyShrinkHalfHeight; // 0x30c
	float NetworkMaxSmoothUpdateDistance; // 0x310
	float NetworkNoSmoothUpdateDistance; // 0x314
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x318
	float NetworkMinTimeBetweenClientAdjustments; // 0x31c
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x320
	float NetworkLargeClientCorrectionDistance; // 0x324
	float LedgeCheckThreshold; // 0x328
	float JumpOutOfWaterPitch; // 0x32c
	FFindFloorResult CurrentFloor; // 0x330
	EMovementMode DefaultLandMovementMode; // 0x3c4
	EMovementMode DefaultWaterMovementMode; // 0x3c5
	EMovementMode GroundMovementMode; // 0x3c6
	char bMaintainHorizontalGroundVelocity : 1; // 0x3c7
	float MaxSpeedWhenMaintainingHorizontalGroundVelocity; // 0x3c8
	char bImpartBaseVelocityX : 1; // 0x3cc
	char bImpartBaseVelocityY : 1; // 0x3cc
	char bImpartBaseVelocityZ : 1; // 0x3cc
	char bImpartBaseAngularVelocity : 1; // 0x3cc
	char bJustTeleported : 1; // 0x3cc
	char bNetworkUpdateReceived : 1; // 0x3cc
	char bNetworkMovementModeChanged : 1; // 0x3cc
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x3cc
	char bServerAcceptClientAuthoritativePosition : 1; // 0x3cd
	char bNotifyApex : 1; // 0x3cd
	char bCheatFlying : 1; // 0x3cd
	char bWantsToCrouch : 1; // 0x3cd
	char bCrouchMaintainsBaseLocation : 1; // 0x3cd
	char bIgnoreBaseRotation : 1; // 0x3cd
	char bFastAttachedMove : 1; // 0x3cd
	char bAlwaysCheckFloor : 1; // 0x3cd
	char bUseFlatBaseForFloorChecks : 1; // 0x3ce
	char bPerformingJumpOff : 1; // 0x3ce
	char bWantsToLeaveNavWalking : 1; // 0x3ce
	char bUseRVOAvoidance : 1; // 0x3ce
	char bRequestedMoveUseAcceleration : 1; // 0x3ce
	char bWasSimulatingRootMotion : 1; // 0x3d8
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x3d8
	char bHasRequestedVelocity : 1; // 0x3d8
	char bRequestedMoveWithMaxSpeed : 1; // 0x3d8
	char bWasAvoidanceUpdated : 1; // 0x3d8
	char bProjectNavMeshWalking : 1; // 0x3d8
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x3d9
	float AvoidanceConsiderationRadius; // 0x3ec
	FVector RequestedVelocity; // 0x3f0
	int32_t AvoidanceUID; // 0x3fc
	FNavAvoidanceMask AvoidanceGroup; // 0x400
	FNavAvoidanceMask GroupsToAvoid; // 0x404
	FNavAvoidanceMask GroupsToIgnore; // 0x408
	float AvoidanceWeight; // 0x40c
	FVector PendingLaunchVelocity; // 0x410
	float NavMeshProjectionInterval; // 0x4c0
	float NavMeshProjectionTimer; // 0x4c4
	float NavMeshProjectionInterpSpeed; // 0x4c8
	float NavMeshProjectionHeightScaleUp; // 0x4cc
	float NavMeshProjectionHeightScaleDown; // 0x4d0
	float NavWalkingFloorDistTolerance; // 0x4d4
	char bClampToNavMeshWhenNormalWalking : 1; // 0x4d8
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x4e0
	float MinTimeBetweenTimeStampResets; // 0x53c
	FRootMotionSourceGroup CurrentRootMotion; // 0x548
	FRootMotionMovementParams RootMotionParams; // 0x610
	FVector AnimRootMotionVelocity; // 0x654
};

struct UMaterialExpressionVertexInterpolator {
	FExpressionInput Input; // 0x48
};

struct UParticleModuleMeshRotation {
	FRawDistributionVector StartRotation; // 0x38
	char bInheritParent : 1; // 0x80
};

struct UProceduralFoliageSpawner {
	int32_t RandomSeed; // 0x30
	float TileSize; // 0x34
	int32_t NumUniqueTiles; // 0x38
	float MinimumQuadTreeSize; // 0x3c
	TArray<FFoliageTypeObject> FoliageTypes; // 0x48
};

struct UAnimEvalSet_Shared_DeathReaction_Fire_C {
	FGameplayEval_DamageType DamageType; // 0xc0
	FGameplayEval_Health AvatarHealth; // 0x180
	FGameplayEval_RandomChance RandomChance; // 0x1d8
	FGameplayEval_GameplayTags GameplayTags; // 0x228
};

struct UDialogueEventSet {
	TArray<FDialogueEvent> Events; // 0x38
};

struct UBTDecorator_IsActionEnabledForActor {
	FGameplayTagQuery ActionTagQuery; // 0x70
	FAIDataProviderGameplayTagQueryContainerValue ActionTags; // 0xb8
	bool bDisableOnSuccess; // 0x130
	float FlowControlDelay; // 0x134
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

struct AExplodingBarrel {
	UStaticMeshComponent* StaticMeshComponent; // 0x2a0
	UExplosionComponent* ExplosionComponent; // 0x2a8
	UParticleSystemComponent* BurnSmoke; // 0x2b0
	UBoxComponent* NavModifierVolume; // 0x2b8
	UPingableComponent* PingableComponent; // 0x2c0
	UBoxComponent* PingableVolume; // 0x2c8
	UHealthComponent* HealthComponent; // 0x2d0
	UGobiNavModifierComponent* GobiNavModifierComponent; // 0x2d8
	UHighlightComponent* HighlightComponent; // 0x2e0
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x2e8
	float SmokeEmitterDuration; // 0x2f0
	float RandomHealthMin; // 0x2f4
	float RandomHealthMax; // 0x2f8
	FCollisionProfileName AfterExplosionCollision; // 0x2fc
	float XYImpulseMin; // 0x304
	float XYImpulseMax; // 0x308
	float ZImpulseMin; // 0x30c
	float ZImpulseMax; // 0x310
	float LocalRotationXYMin; // 0x314
	float LocalRotationXYMax; // 0x318
	UObject* InitialFlame; // 0x320
	UStaticMesh* ExplodedStaticMesh; // 0x328
};

struct UArmorComponent {
	FMulticastInlineDelegate OnArmorDamage; // 0xe8
	FMulticastInlineDelegate OnArmorHealthChanged; // 0xf8
	FMulticastInlineDelegate OnDestroyedArmor; // 0x108
	TArray<FArmor> InitialArmor; // 0x118
	UArmorSet* InitialArmorSet; // 0x128
	float DestroyedImpactScale; // 0x130
	FDamageInfo LastDamageInfo; // 0x198
	TArray<FArmorHealth> ArmorHealth; // 0x250
	TArray<FArmorDestroyed> ArmorDestroyed; // 0x260
};

struct AProceduralFoliageBlockingVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x2d8
};

struct UMovieSceneCapture {
	FSoftClassPath ImageCaptureProtocolType; // 0x40
	FSoftClassPath AudioCaptureProtocolType; // 0x58
	UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x70
	UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x78
	FMovieSceneCaptureSettings Settings; // 0x80
	bool bUseSeparateProcess; // 0xf0
	bool bCloseEditorWhenCaptureStarts; // 0xf1
	FString AdditionalCommandLineArguments; // 0xf8
	FString InheritedCommandLineArguments; // 0x108
};

struct UFTUETutorialScreen_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x618
	UImage* BG; // 0x620
	UPlatformCallouts_WBP_C* Callouts; // 0x628
	UFooter_WBP_C* Footer_WBP; // 0x630
	UTextButton_WBP_C* FriendsCancelButton; // 0x638
	UOverlay* FriendsPanel; // 0x640
	UTextButton_WBP_C* FriendsStartButton; // 0x648
	UPartyGroupsTab_WBP_C* PartyGroupsTab; // 0x650
	UTextButton_WBP_C* PlayFriendsButton; // 0x658
	UTextButton_WBP_C* PlaySoloButton; // 0x660
	UTextButton_WBP_C* SkipButton; // 0x668
	UTextButton_WBP_C* SoloCancelButton; // 0x670
	UWidgetSwitcher* Switcher; // 0x678
};

struct UAnimEvalSet_Shared_DeathReaction_C {
	FGameplayEval_Angle AvatarHitDirection; // 0xc0
	FGameplayEval_DamageType DamageType; // 0x120
	FGameplayEval_DamageBone DamageBone; // 0x1e0
	FGameplayEval_Distance DistanceToDamageSource; // 0x240
	FGameplayEval_Health AvatarHealth; // 0x310
	FGameplayEval_RandomChance RandomChance; // 0x368
	FGameplayEval_HasContext HasTarget; // 0x3b8
	FGameplayEval_GameplayTags AvatarTags; // 0x408
};

struct AEmitterCameraLensEffectBase {
	UParticleSystem* PS_CameraEffect; // 0x308
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x310
	APlayerCameraManager* BaseCamera; // 0x318
	FTransform RelativeTransform; // 0x320
	float BaseFOV; // 0x350
	char bAllowMultipleInstances : 1; // 0x354
	char bResetWhenRetriggered : 1; // 0x354
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x358
	float DistFromCamera; // 0x368
};

struct UNiagaraPreviewAxis_InterpParamInt32 {
	int32_t Min; // 0x40
	int32_t Max; // 0x44
};

struct UGameplayContext_PounceTrace {
	UAnimContext_PounceComponent* Pounce; // 0x50
	UAnimContext_Transform* TraceEnd; // 0x58
};

struct UZombieMutationTreeUserWidget {
	UZombieMutationLinkUserWidget* TreeLinkWidget; // 0x458
};

struct USoundEffectSourcePresetChain {
	TArray<FSourceEffectChainEntry> Chain; // 0x30
	char bPlayEffectChainTails : 1; // 0x40
};

struct UWidgetComponent {
	EWidgetSpace Space; // 0x528
	EWidgetTimingPolicy TimingPolicy; // 0x529
	UUserWidget* WidgetClass; // 0x530
	FIntPoint DrawSize; // 0x538
	bool bManuallyRedraw; // 0x540
	bool bRedrawRequested; // 0x541
	float RedrawTime; // 0x544
	FIntPoint CurrentDrawSize; // 0x550
	bool bDrawAtDesiredSize; // 0x558
	FVector2D Pivot; // 0x55c
	bool bReceiveHardwareInput; // 0x564
	bool bWindowFocusable; // 0x565
	EWindowVisibility WindowVisibility; // 0x566
	bool bApplyGammaCorrection; // 0x567
	ULocalPlayer* OwnerPlayer; // 0x568
	FLinearColor BackgroundColor; // 0x570
	FLinearColor TintColorAndOpacity; // 0x580
	float OpacityFromTexture; // 0x590
	EWidgetBlendMode BlendMode; // 0x594
	bool bIsTwoSided; // 0x595
	bool bHasTranslucentDepthTest; // 0x596
	bool TickWhenOffscreen; // 0x597
	UUserWidget* Widget; // 0x598
	UBodySetup* BodySetup; // 0x5c0
	UMaterialInterface* TranslucentMaterial; // 0x5c8
	UMaterialInterface* TranslucentMaterial_NoDepth; // 0x5d0
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x5d8
	UMaterialInterface* TranslucentMaterial_OneSided_NoDepth; // 0x5e0
	UMaterialInterface* OpaqueMaterial; // 0x5e8
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x5f0
	UMaterialInterface* MaskedMaterial; // 0x5f8
	UMaterialInterface* MaskedMaterial_OneSided; // 0x600
	UTextureRenderTarget2D* RenderTarget; // 0x608
	UMaterialInstanceDynamic* MaterialInstance; // 0x610
	bool bAddedToScreen; // 0x618
	bool bEditTimeUsable; // 0x619
	bool bForceDrawOneFrame; // 0x61a
	FName SharedLayerName; // 0x61c
	int32_t LayerZOrder; // 0x624
	EWidgetGeometryMode GeometryMode; // 0x628
	float CylinderArcAngle; // 0x62c
};

struct UDeviceProfile {
	FString DeviceType; // 0x40
	FString BaseProfileName; // 0x50
	UObject* Parent; // 0x60
	TArray<FString> CVars; // 0x80
};

struct UMaterialExpressionLandscapeLayerWeight {
	FExpressionInput Base; // 0x48
	FExpressionInput Layer; // 0x5c
	FName ParameterName; // 0x70
	float PreviewWeight; // 0x78
	FVector ConstBase; // 0x7c
	FGuid ExpressionGUID; // 0x88
};

struct UWoundComponent {
	FWoundData Config; // 0x5c0
};

struct UNineSliceAssetUserData {
	ESlateBrushDrawType DrawAs; // 0x30
	FMargin Margin; // 0x34
};

struct UNiagaraRendererProperties {
	int32_t SortOrderHint; // 0x30
	bool bIsEnabled; // 0x34
	bool bMotionBlurEnabled; // 0x35
};

struct UPlayedCardsGridUserWidget {
	int32_t NumRows; // 0x458
	int32_t NumColumns; // 0x45c
	UMiniCardUserWidget* MiniCardClass; // 0x460
	TMap<FDataTableRowHandle, int32_t> CardCounts; // 0x468
};

struct AChaosSolverActor {
	float TimeStepMultiplier; // 0x2a0
	int32_t CollisionIterations; // 0x2a4
	int32_t PushOutIterations; // 0x2a8
	int32_t PushOutPairIterations; // 0x2ac
	float ClusterConnectionFactor; // 0x2b0
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2b4
	bool DoGenerateCollisionData; // 0x2b5
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2b8
	bool DoGenerateBreakingData; // 0x2c8
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2cc
	bool DoGenerateTrailingData; // 0x2dc
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2e0
	bool bHasFloor; // 0x2f0
	float FloorHeight; // 0x2f4
	float MassScale; // 0x2f8
	bool bGenerateContactGraph; // 0x2fc
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2fd
	UBillboardComponent* SpriteComponent; // 0x300
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x320
};

struct UAnimNotify_GameplayCue {
	UAnimContext_Actor* Instigator; // 0x40
	UAnimContext_Actor* SourceActor; // 0x48
	UAnimContext_Actor* TargetActor; // 0x50
	FName BoneName; // 0x58
	FGameplayTag Cue; // 0x60
};

struct ALevelSequenceMediaController {
	ALevelSequenceActor* Sequence; // 0x2a8
	UMediaComponent* MediaComponent; // 0x2b0
	float ServerStartTimeSeconds; // 0x2b8
};

struct UAnimMetaData_AnimEvaluatorSet {
	UAnimationEvalSet* AnimEvaluatorSet; // 0x30
	EPawnControllerType PawnControllerType; // 0x38
	bool bDrawDebug; // 0x39
};

struct UParticleModuleSizeMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x38
	char MultiplyX : 1; // 0x80
	char MultiplyY : 1; // 0x80
	char MultiplyZ : 1; // 0x80
};

struct UBTTask_ChaserRunEQSQuery {
	bool bClearBlackboardOnNoResults; // 0x190
	FBlackboardKeySelector WallClingBlackboardKey; // 0x198
};

struct UInterpTrackInstProperty {
	TFieldPath<FProperty> InterpProperty; // 0x30
	UObject* PropertyOuterObjectInst; // 0x50
};

struct UReloadComponent {
	TArray<UGameplayEffect*> PowerReloadEffects; // 0x1f0
	TArray<UGameplayEffect*> PowerReloadPlayerEffects; // 0x200
};

struct UDismembermentAnimInstance {
	FPoseSnapshot PoseSnapshot; // 0x2b8
};

struct UGenericAggregationComponent {
	UDataTable* AggregationConfiguration; // 0xe8
	AGameplayAnalyticsManager* GameplayAnalyticsManager; // 0xf0
	TMap<FName, FSystemRecord> TrackedSystems; // 0x198
};

struct UGobiPlayerInput {
	float AxialDeadzoneRequiredMin; // 0x408
	float AxialDeadzoneRequiredMax; // 0x40c
	float AxialDeadzoneGrowthMin; // 0x410
	float AxialDeadzoneGrowthMax; // 0x414
};

struct ALadder {
	USceneComponent* InternalRootComponent; // 0x2a0
	UBoxComponent* LadderTouchVolume; // 0x2a8
	UBoxComponent* LadderUsableVolume; // 0x2b0
	USceneComponent* LadderTop; // 0x2b8
	USceneComponent* LadderBottom; // 0x2c0
	UUsableComponent* LadderUsable; // 0x2c8
	UGameplayTagsComponent* GameplayTagsComponent; // 0x2d0
};

struct UBehaviorTree {
	UBTCompositeNode* RootNode; // 0x38
	UBlackboardData* BlackboardAsset; // 0x40
	TArray<UBTDecorator*> RootDecorators; // 0x48
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x58
};

struct UDamageFilter {
	TArray<FDamageTypeDamageMod> DamageTypeMods; // 0x30
};

struct UGizmoConstantAxisSource {
	FVector Origin; // 0x38
	FVector Direction; // 0x44
};

struct UTraitsMod {
	TArray<UTrait*> Traits; // 0xd0
	bool bSelf; // 0xe0
	FGameplayTagQuery TagQuery; // 0xe8
};

struct UMaterialExpressionLogarithm2 {
	FExpressionInput X; // 0x48
};

struct UWanderPopulationDensityConfig {
	TMap<EWanderBucketDensityLevel, FWanderPopulationBucketDensityLevel> WanderPopulationBucketDensityLevels; // 0x38
};

struct UMaterialExpressionShadowReplace {
	FExpressionInput Default; // 0x48
	FExpressionInput Shadow; // 0x5c
};

struct UVOIPTalker {
	FVoiceSettings Settings; // 0xe8
};

struct UPlayerHealthUserWidget {
	FMulticastInlineDelegate OnPlayerHealthChanged; // 0x458
	FMulticastInlineDelegate OnCurrentMaxHealthChanged; // 0x468
	float HealAnimHealthPerSecond; // 0x478
};

struct AEQSTestingPawn {
	UEnvQuery* QueryTemplate; // 0x5d8
	TArray<FEnvNamedValue> QueryParams; // 0x5e0
	TArray<FAIDynamicParam> QueryConfig; // 0x5f0
	float TimeLimitPerStep; // 0x600
	int32_t StepToDebugDraw; // 0x604
	EEnvQueryHightlightMode HighlightMode; // 0x608
	char bDrawLabels : 1; // 0x60c
	char bDrawFailedItems : 1; // 0x60c
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x60c
	char bShouldBeVisibleInGame : 1; // 0x60c
	char bTickDuringGame : 1; // 0x60c
	EEnvQueryRunMode QueryingMode; // 0x610
	FNavAgentProperties NavAgentProperties; // 0x618
};

struct UCanvasRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xf0
	TWeakObjectPtr<UWorld> World; // 0x100
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x108
};

struct UAnimEvalSet_FallLand_C {
	FGameplayEval_ReachedClimbLocation DistanceToClimbEnd; // 0xc0
};

struct UAmbisonicsEncodingSettings {
	int32_t AmbisonicsOrder; // 0x30
};

struct UGameplayAction_BotItemUse {
	UGameplayEvaluatorSet* FilterSet; // 0x210
};

struct UGameplayContext_HeroUseTransform {
	FGameplayTag ComponentTag; // 0x70
};

struct UPlantableGhostComponent {
	FMulticastInlineDelegate OnSetToValidLocation; // 0xe8
	FMulticastInlineDelegate OnSetToInvalidLocation; // 0xf8
};

struct UAISenseConfig_Hearing {
	UAISense_Hearing* Implementation; // 0x50
	float HearingRange; // 0x58
	float LoSHearingRange; // 0x5c
	char bUseLoSHearing : 1; // 0x60
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x64
};

struct UStatTrackerBase {
	AController* OwningController; // 0x30
	UPlayerStatsComponent* StatsComponent; // 0x38
};

struct UGameplayEffectApplyTrait {
	TArray<UTrait*> Traits; // 0x240
};

struct UObservableComponent {
	FColor ShapeColor; // 0x4b0
	bool bDrawOnlyIfSelected; // 0x4b4
	int32_t DebugDrawFlags; // 0x4b8
	bool bDrawContinueRules; // 0x4bc
	FMulticastInlineDelegate OnObservationStart; // 0x4c0
	FMulticastInlineDelegate OnObservationEnd; // 0x4d0
	bool bEnabled; // 0x4e0
	bool UsesDifferentContinueRules; // 0x4e1
	FObservationRule ObservationStartRules; // 0x4e4
	FObservationRule ObservationContinueRules; // 0x50c
};

struct USlateWidgetStyleAsset {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x30
};

struct UCommWheelLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
	bool bCanTeach; // 0x468
};

struct AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x2a0
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x2b0
	TArray<AOnlineBeaconClient*> ClientActors; // 0x2b8
};

struct UMaterialExpressionAppendVector {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
};

struct AAISpawnActor {
	EVisibilityMode VisibilityMode; // 0x460
	EAudibilityMode AudibilityMode; // 0x461
	bool bUseStandSpawnPositioning; // 0x462
	bool bUseNavLocationCompForSpawnLocation; // 0x463
	int32_t MaxSpawnCount; // 0x464
	FGameplayTagContainer HordeBlockingTags; // 0x468
	FGameplayTagContainer WanderBlockingTags; // 0x488
	bool bDisableOnSeen; // 0x4c4
	bool bDisableOnHeard; // 0x4c5
	UGameplayEffect* OnSeenGE; // 0x4c8
	UGameplayEffect* OnHeardGE; // 0x4d0
};

struct UGameplayEffectMoveInputScale {
	FName ScaleLabel; // 0x238
	float MoveInputScale; // 0x240
};

struct ALevelVariantSetsActor {
	FSoftObjectPath LevelVariantSets; // 0x2a0
};

struct UFP_HeroPostProcess_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8
};

struct USoundNodeConcatenator {
	TArray<float> InputVolume; // 0x60
};

struct UMovieSceneNiagaraSystemSpawnSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct ATRSOccluder {
	float MaxDistance; // 0x380
	bool bExclusiveOutdoorSector; // 0x384
};

struct UUniformScalar {
	float Magnitude; // 0xe8
};

struct UDamageCameraShakeComponent {
	TArray<FDamageCameraShake> CameraShakes; // 0xe8
};

struct UAkGeometryComponent {
	AkMeshType MeshType; // 0x230
	int32_t LOD; // 0x234
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x238
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x288
	char bEnableDiffraction : 1; // 0x298
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x298
	AActor* AssociatedRoom; // 0x2a0
	FAkGeometryData GeometryData; // 0x2b0
};

struct UMindControlComponent {
	AGobiCharacter* AttachedHeroTargetReplicated; // 0xe8
	bool bKillOnTick; // 0xf8
	FGameplayTag TgtToMCAIAttachPrimitiveComponentTag; // 0x158
	FName TgtToMCAIAttachPoint; // 0x160
	FVector TgtToMCAIAttachRelativeLocation; // 0x168
	FRotator TgtToMCAIAttachRelativeRotation; // 0x174
	FGameplayTag TgtAttachMeshTag; // 0x180
	FName MCAIToTgtAttachPoint; // 0x188
	FGameplayTagContainer InterruptDmgTypeTags; // 0x190
	int32_t InterruptDmgAttempts; // 0x1b0
	FGameplayTag NoApplyDmgTag; // 0x1b4
	TArray<UGameplayEffect*> ApplyEffectsToTarget; // 0x1c0
	FGameplayTagContainer BlockingTargetTags; // 0x1d0
	FGameplayTagContainer CancelBlockingTargetTags; // 0x1f0
	TArray<UGameplayEffect*> ApplyInstigatorEffects; // 0x210
	UGameplayEffect* ApplyInstigatorEffectOnEnd; // 0x220
	float MaxDurationAfterSrcDies; // 0x228
	UParticleSystem* DeathPSTemplate; // 0x230
	FVector DeathPSRelativeLocation; // 0x238
};

struct AHelicopter {
	FMulticastInlineDelegate OnCharacterEnteredHelicopter; // 0x2a0
	FMulticastInlineDelegate OnAllCharactersEnteredHelicopter; // 0x2b0
	UBoxComponent* TriggerVolume; // 0x2c0
	USceneComponent* DefaultRootComponent; // 0x2c8
	TArray<UGameplayEffect*> ApplyEffectsToCharacter; // 0x2d0
	FName GiveCharactersPrimaryWeapon; // 0x2e0
	float CharacterAttachPointDistThreshold; // 0x304
	float CharacterAttachPointUpdateRate; // 0x308
};

struct UDynamicEntryBox {
	UUserWidget* EntryWidgetClass; // 0x208
};

struct UFindSessionsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UDistanceMapSourceComponent {
	bool bShouldEnableOnBegin; // 0x4b0
	int32_t DebugMapIdx; // 0x4b4
	float DistanceThresholdForRegen; // 0x4d0
	float SearchDistance; // 0x4d4
	bool bRequiresDeltas; // 0x4d8
	FNavAgentSelector SupportedAgents; // 0x4dc
	bool bAllowMultipleSupportedAgents; // 0x4e0
};

struct UUniformGridPanel {
	FMargin SlotPadding; // 0x160
	float MinDesiredSlotWidth; // 0x170
	float MinDesiredSlotHeight; // 0x174
};

struct UGameStateBaseSeamessTravelData {
	TArray<int32_t> TeamScores; // 0x30
};

struct UColorBlindGroupData {
	TMap<FName, FColorBlindGroup> ColorBlindGroups; // 0x38
};

struct UEnvQueryGenerator_PathingGrid {
	FAIDataProviderBoolValue PathToItem; // 0x100
	UNavigationQueryFilter* NavigationFilter; // 0x138
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x140
};

struct UWidgetAnimationPlayCallbackProxy {
	FMulticastInlineDelegate Finished; // 0x30
};

struct UAbilityTimeMod {
	EAbilityTimeModType Type; // 0xd0
	FGamePropertyFloatMod Time; // 0xd4
	FGameplayTagContainer AbilityTags; // 0xe8
};

struct UMissionManager {
	FMulticastInlineDelegate OnMissionStartServer; // 0xe8
	FMulticastInlineDelegate OnMissionEndServer; // 0xf8
	FMulticastInlineDelegate OnStartObjectiveServer; // 0x108
	FMulticastInlineDelegate OnObjectiveCountChangedServer; // 0x118
	FMulticastInlineDelegate OnEndObjectiveServer; // 0x128
	FMulticastInlineDelegate OnServerMissionChangedClient; // 0x138
	FMulticastInlineDelegate OnMissionSublevelsLoadedServer; // 0x178
	TArray<APlayerState*> PlayersAwaitingServerMission; // 0x190
	TArray<APlayerState*> PlayersAwaitingTeam; // 0x1a0
	TArray<UDataTable*> ChapterDataTables; // 0x1b8
	TArray<UDataTable*> MissionDataTables; // 0x1c8
	TArray<UDataTable*> ObjectiveDataTables; // 0x1d8
	TSet<FDataTableRowHandle> ActiveMissions; // 0x3a8
	TArray<FPlayerLiveMissionData> PlayerLiveMissionDataArray; // 0x3f8
	TArray<int32_t> LiveObjectiveTimersReplicated; // 0x408
	TArray<FObjectiveTimerData> LiveObjectiveTimers; // 0x418
	FDataTableRowHandle ServerMissionRowHandle; // 0x428
};

struct UEnvQueryGenerator_CurrentLocation {
	UEnvQueryContext* QueryContext; // 0x58
};

struct UTcpMessagingSettings {
	bool EnableTransport; // 0x30
	FString ListenEndpoint; // 0x38
	TArray<FString> ConnectToEndpoints; // 0x48
	int32_t ConnectionRetryDelay; // 0x58
	bool bStopServiceWhenAppDeactivates; // 0x5c
};

struct UPartyPlayerCard_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x628
	UTextBlock* AddPlayerPlus; // 0x630
	UImage* BG; // 0x638
	UTextBlock* CharacterNameText; // 0x640
	UImage* Emblem; // 0x648
	UImage* Frame; // 0x650
	UOverlay* HoverContainer; // 0x658
	UImage* LeaderIcon; // 0x660
	UImage* PartyIcon; // 0x668
	UPlayerMicIcon_WBP_C* PlayerMicIcon; // 0x670
	UPlayerName_WBP_C* PlayerName; // 0x678
	UTextBlock* StatusText; // 0x680
	bool bSupportsInvite; // 0x688
	float FrameUnfocusedRenderOpacity; // 0x68c
	float FrameFocusedRenderOpacity; // 0x690
};

struct UMaterialExpressionVectorParameter {
	FLinearColor DefaultValue; // 0x60
	bool bUseCustomPrimitiveData; // 0x70
	char PrimitiveDataIndex; // 0x71
};

struct ASpawnEQSInfluencer {
	int32_t Influence; // 0x2a0
	USceneComponent* DefaultRootComponent; // 0x2a8
};

struct UAnimInstance3P {
	FAnimLocomotionData LocomotionData; // 0x3b8
	FAnimDirectionRange ForwardDirection; // 0x3f8
	FAnimDirectionRange RightDirection; // 0x414
	FAnimDirectionRange LeftDirection; // 0x430
	FAnimDirectionRange BackwardDirection; // 0x44c
	FLocoTurnInPlace TurnInPlaceState; // 0x468
	FLocomotionPrediction LocoPredict; // 0x518
	FLocoLeaning Leaning; // 0x580
	float DirectionInterpAlpha; // 0x58c
	float DirectionChangingSpeedThreshold; // 0x590
	FLookAtInfo LookAtInfo; // 0x594
	FAimRotationInfo AimRotationInfo; // 0x5c8
	FLadderAnimState LadderAnimState; // 0x5d4
	FGobiFootPlanting FootPlanting; // 0x5e0
	FGobiAnimationCurveData IkAlphaCurve; // 0x758
	FGobiAnimationCurveData FootPlantingAlphaCurve; // 0x768
	FGobiAnimationCurveData DisableAimOffsetCurve; // 0x778
	float LegIKAlpha; // 0x788
	float FootPlantingAlpha; // 0x78c
	FGobiSlopeWarping SlopeWarping; // 0x790
	float AimOffsetAlpha; // 0x7a4
	FAnimState3P AnimState3P; // 0x7a8
};

struct UScrollBar {
	FScrollBarStyle WidgetStyle; // 0x148
	USlateWidgetStyleAsset* Style; // 0x660
	bool bAlwaysShowScrollbar; // 0x668
	bool bAlwaysShowScrollbarTrack; // 0x669
	EOrientation Orientation; // 0x66a
	FVector2D Thickness; // 0x66c
	FMargin Padding; // 0x674
};

struct UAnimContext_DamageInfo {
	FDamageInfo DamageInfo; // 0x70
	bool bIgnoreZeroDamageInSameFrame; // 0x128
};

struct UComponentDelegateBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x30
};

struct UMutilationWoundConfigData {
	TArray<FMutilationWoundsConfig> Configs; // 0x38
};

struct UMaterialExpressionDistanceFieldGradient {
	FExpressionInput Position; // 0x48
};

struct UBTTask_PushPawnAction {
	UPawnAction* Action; // 0x78
};

struct UInAppPurchaseQueryCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEnvQueryOption {
	UEnvQueryGenerator* Generator; // 0x30
	TArray<UEnvQueryTest*> Tests; // 0x38
};

struct UWoundRootComponent {
	FGameplayTag WoundTag; // 0x230
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

struct UGameplayAction_BotJumpTraversal {
	UGameplayEvaluatorSet* FilterSet; // 0x210
	bool bDisabled; // 0x218
	UAnimContext_Transform* DesiredDestContext; // 0x220
};

struct UGameplayEffectADSComponent {
	FGamePropertyFloatMod ADSSpeedScaleMod; // 0x250
	FGameplayTag ADSConfigAssetLookupTag; // 0x260
	EAimSensitivitySpace ZoomLevelOverride; // 0x268
};

struct ALightweightNPC {
	USkeletalMeshComponent* Mesh; // 0x2a0
	UAkSkeletalComponent* AudioEmitter; // 0x2a8
	UGobiDialogueComponent* DialogueComponent; // 0x2b0
	ULiteCharacterAudioComponent* AudioComponent; // 0x2b8
	UFacialAnimationComponent* FacialAnimationComponent; // 0x2c0
	UGameplayTagsComponent* GameplayTagsComponent; // 0x2c8
	FDataTableRowHandle VoiceRowHandle; // 0x2d0
	bool bIsFemale; // 0x2f0
	TArray<UFacialAnimationData*> MaleFacialAnimationData; // 0x2f8
	TArray<UFacialAnimationData*> FemaleFacialAnimationData; // 0x308
};

struct ULootData {
	TArray<UDataTable*> LootTables; // 0x38
	ULootSystemMapConfigAsset* LootSystemMapConfig; // 0x48
};

struct UHeroAnimInstanceFP {
	FFirstPersonAdditiveState FirstPersonAdditiveState; // 0x3b8
	FFirstPersonAdditiveConfig FirstPersonAdditiveConfig; // 0x428
	float CameraMotionStrength; // 0x454
	FVector MeshOffset; // 0x458
	FVector CameraOffset; // 0x464
	FHeroAnimDataFP HeroAnimData; // 0x470
	FHeroAnimStateFP HeroAnimState; // 0x4d8
	FLadderAnimStateFP LadderAnimState; // 0x504
	FVector VerticalSplitscreenFPMeshOffset; // 0x514
	FVector HorizontalSplitscreenFPMeshOffset; // 0x520
	FWeaponAnimData WeaponAnimData; // 0x530
	FWeaponAnimState WeaponAnimState; // 0x550
	FWeaponAnimsFP WeaponAnims; // 0x598
	float TurnInPlaceBlendTime; // 0x618
};

struct UTemplateSequence {
	UMovieScene* MovieScene; // 0x350
	TSoftClassPtr<UObject> BoundActorClass; // 0x358
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x380
	TMap<FGuid, FName> BoundActorComponents; // 0x3a8
};

struct ULandscapeLayerInfoObject {
	FName LayerName; // 0x30
	UPhysicalMaterial* PhysMaterial; // 0x38
	float Hardness; // 0x40
	FLinearColor LayerUsageDebugColor; // 0x44
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance {
	int32_t LightIndex; // 0x48
};

struct UAnimEvalSet_Armored_Common_Melee_Overlap_C {
	FGameplayEval_OverlapActor OverlapTest; // 0xc0
	FAnimEval_MontageLastPlayed HasPlayedRecently; // 0x198
	FGameplayEval_Dismembered CheckDismembered; // 0x1e8
	FGameplayEval_Random RandomScore; // 0x240
	FGameplayEval_HasVisibility HasVisibility; // 0x288
	FGameplayEval_NavBlocked NavBlocked; // 0x2e0
	FGameplayEval_GameplayTags GameplayTags; // 0x338
};

struct UAISense_Prediction {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x88
};

struct UMaterialExpressionSceneColor {
	EMaterialSceneAttributeInputMode InputMode; // 0x48
	FExpressionInput Input; // 0x4c
	FExpressionInput OffsetFraction; // 0x60
	FVector2D ConstInput; // 0x74
};

struct AWorldSettings {
	TArray<FSoftObjectPath> ActiveMapsForBuild; // 0x2a8
	int32_t VisibilityCellSize; // 0x2b8
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x2bc
	char bPrecomputeVisibility : 1; // 0x2bd
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x2bd
	char bEnableWorldBoundsChecks : 1; // 0x2bd
	char bEnableNavigationSystem : 1; // 0x2bd
	char bEnableAISystem : 1; // 0x2bd
	char bEnableWorldComposition : 1; // 0x2bd
	char bUseClientSideLevelStreamingVolumes : 1; // 0x2bd
	char bEnableWorldOriginRebasing : 1; // 0x2bd
	char bWorldGravitySet : 1; // 0x2be
	char bGlobalGravitySet : 1; // 0x2be
	char bMinimizeBSPSections : 1; // 0x2be
	char bForceNoPrecomputedLighting : 1; // 0x2be
	char bHighPriorityLoading : 1; // 0x2be
	char bHighPriorityLoadingLocal : 1; // 0x2be
	char bOverrideDefaultBroadphaseSettings : 1; // 0x2be
	UNavigationSystemConfig* NavigationSystemConfig; // 0x2c0
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x2c8
	float WorldToMeters; // 0x2d0
	float KillZ; // 0x2d4
	float WorldGravityZ; // 0x2d8
	float GlobalGravityZ; // 0x2dc
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x2e0
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x2e8
	AGameModeBase* DefaultGameMode; // 0x2f0
	AGameNetworkManager* GameNetworkManagerClass; // 0x2f8
	int32_t PackedLightAndShadowMapTextureSize; // 0x300
	FVector DefaultColorScale; // 0x304
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x310
	float GlobalDistanceFieldViewDistance; // 0x314
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x318
	FReverbSettings DefaultReverbSettings; // 0x320
	FInteriorSettings DefaultAmbientZoneSettings; // 0x340
	float MonoCullingDistance; // 0x364
	USoundMix* DefaultBaseSoundMix; // 0x368
	float TimeDilation; // 0x370
	float MatineeTimeDilation; // 0x374
	float DemoPlayTimeDilation; // 0x378
	float MinGlobalTimeDilation; // 0x37c
	float MaxGlobalTimeDilation; // 0x380
	float MinUndilatedFrameTime; // 0x384
	float MaxUndilatedFrameTime; // 0x388
	FBroadphaseSettings BroadphaseSettings; // 0x38c
	bool bDrawDebugMBPBounds; // 0x3cc
	bool bFlashMBPBounds; // 0x3cd
	FColor MBPBoundsDrawColor; // 0x3d0
	FColor MBPOuterBoundsDrawColor; // 0x3d4
	APlayerState* Pauser; // 0x3d8
	TArray<FNetViewer> ReplicationViewers; // 0x3e0
	TArray<UAssetUserData*> AssetUserData; // 0x3f0
	APlayerState* PauserPlayerState; // 0x400
	int32_t MaxNumberOfBookmarks; // 0x408
	UBookmarkBase* DefaultBookmarkClass; // 0x410
	TArray<UBookmarkBase*> BookmarkArray; // 0x418
	UBookmarkBase* LastBookmarkClass; // 0x428
};

struct UCameraAnim {
	UInterpGroup* CameraInterpGroup; // 0x30
	float AnimLength; // 0x38
	FBox BoundingBox; // 0x3c
	char bRelativeToInitialTransform : 1; // 0x58
	char bRelativeToInitialFOV : 1; // 0x58
	float BaseFOV; // 0x5c
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5c0
};

struct UTRSAcousticPortalDistanceManager {
	UWorld* World; // 0x38
};

struct AGobiCharacter {
	FMulticastInlineDelegate OnPossessedBy; // 0x5f0
	FMulticastInlineDelegate OnUnpossessed; // 0x618
	FMulticastInlineDelegate OnSpectateStart; // 0x628
	FMulticastInlineDelegate OnSpectateStop; // 0x638
	FMulticastInlineDelegate OnPlayerStateChanged; // 0x648
	FMulticastInlineDelegate OnFellOutOfWorld; // 0x658
	FMulticastInlineDelegate OnTriggeredHorde; // 0x668
	UGameplayTagsComponent* GameplayTagsComponent; // 0xef0
	UTraitsComponent* TraitsComponent; // 0xef8
	UCharacterEmitterComponent* CharacterEmitterComponent; // 0xf00
	UAkSkeletalComponent* SkeletalAudioEmitter; // 0xf08
	UCharacterAudioComponent* CharacterAudioComponent; // 0xf10
	ULadderMovementModeComponent* LadderMovementModeComponent; // 0xf18
	UGameplayActionsComponent* GameplayActionsComponent; // 0xf20
	ULifeStateComponent* LifeStateComp; // 0xf28
	UMoveIgnoreActorsComponent* MoveIgnoreActorsComponent; // 0xf30
	URagdollComponent* RagdollComponent; // 0xf38
	UReplicatedMontageComponent* ReplicatedMontageComponent; // 0xf40
	UTuningDataComponent* TuningDataComponent; // 0xf48
	UAIScriptingComponent* ScriptingComponent; // 0xf50
	AGobiPlayerController* LastKnownController; // 0xf58
	bool bDamageNumbersVisible; // 0xf60
	bool bWasBotControlled; // 0xf78
	TArray<FSelectedLocoInfo> CurrentLocoVariations; // 0xf80
	AActor* Enemy; // 0xf90
	bool bIsAggro; // 0xf98
	FCharacterRandomizationData CharacterRandomizationData; // 0xf9c
	FWasRenderedClientInfo WasRenderedClientInfo; // 0xfa8
	FText CharacterDisplayName; // 0xfc8
	UEnvQuery* SpawnEnvQuery; // 0xfe0
	UEnvQuery* BackfillSpawnEnvQuery; // 0xfe8
	FGobiCharacterLoadout Loadout; // 0xff0
	bool bUsesZombieMergeMeshPool; // 0x1038
	TArray<FGobiCharacterConfig> CharacterConfigs; // 0x1040
	float PlayerAimPitchOffset; // 0x1050
	FFallDamageData FallDamage; // 0x1058
	TMap<FGameplayTag, FCharacterImpactTableConfig> ImpactTableMap; // 0x1088
	TArray<FMaterialParamOverride> MaterialParamOverrideConfigs; // 0x10d8
	EIntensityMode IntensityMode; // 0x10e8
	float MaxDistanceToAffectIntensity; // 0x10ec
	bool bProlongHordeCleanup; // 0x10f0
	FName GlowingEyesMaterialSlotName; // 0x10f4
	FName GlowingEyesSocketName; // 0x10fc
	FName GlowingEyesFwdVectorParamName; // 0x1104
	FName GlowingEyesStrengthParamName; // 0x110c
	FLocoVariationConfig LocoVariationConfig; // 0x1118
	FGobiCharacterMoveEffects MoveEffects; // 0x1130
	FGameplayTagContainer GameplayTags; // 0x11a8
	FGameplayTagContainer CrouchingTags; // 0x11c8
	FGameplayTag DisableYawRotationTag; // 0x11e8
	FGameplayTagQuery NonCapableGrappleTags; // 0x11f0
	FName DamageComponentCollisionName; // 0x1238
	bool bCharacterAvoidanceMovementEnabled; // 0x1240
	float CharacterAvoidanceMinDistance; // 0x1244
	float CharacterAvoidanceWakeUpDelay; // 0x1248
	FCharacterAvoidanceTuning EnemyCharacterAvoidance; // 0x1250
	FCharacterAvoidanceTuning FriendlyCharacterAvoidance; // 0x1280
	FName Slug; // 0x12b0
	FGameplayTagContainer HordingTags; // 0x12b8
	bool bApplyGameplayCardAISpawnPhase; // 0x12d8
	bool bTrackHeroCanSee; // 0x12d9
	FName EyeSocket; // 0x12dc
	TArray<UTraitCollection*> CharacterTraits; // 0x12e8
	FGameplayTag UpdateRateOptimizationCategory; // 0x12f8
	FGameplayTag SignificanceCategory; // 0x1300
	float SignificanceDistanceWeight; // 0x1308
	FGameplayTag FootplantIKLODCategory; // 0x130c
	FGameplayTag MutilationCategory; // 0x1314
	bool bDisableUpdatingCharactersPhysicsVolume; // 0x131c
	float SpawnHeat; // 0x1320
	UMapSpatialInfoComponent* CachedMapSpatialInfoComponent; // 0x1328
};

struct UProxyLODMeshSimplificationSettings {
	FName ProxyLODMeshReductionModuleName; // 0x40
};

struct USteeringBehavior_ReturnToNavmesh {
	float SearchExtentScale; // 0x58
};

struct UEnvQuery {
	FName QueryName; // 0x38
	TArray<UEnvQueryOption*> Options; // 0x40
};

struct UAnimEvalSet_Common_Melee_Crowding_C {
	FAnimEval_MontageCurrentlyPlaying IsMontageCurrentlyPlaying; // 0x4f8
	FGameplayEval_BlockedByPawn PawnBlocked; // 0x540
	FGameplayEval_NavBlocked NavBlocked; // 0x5a8
};

struct UToFloatField {
	UFieldNodeInt* IntField; // 0xe8
};

struct ABlighted_AcidPool_BP_C {
	UBoxComponent* Box; // 0x338
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x340
};

struct UTweenFloatLatentFactory {
	FMulticastInlineDelegate OnTweenStart; // 0x38
	FMulticastInlineDelegate OnTweenUpdate; // 0x48
	FMulticastInlineDelegate OnTweenEnd; // 0x58
};

struct UMaterialInstanceConstant {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x410
};

struct AMatineeActor {
	UInterpData* MatineeData; // 0x2a0
	FName MatineeControllerName; // 0x2a8
	float PlayRate; // 0x2b0
	char bPlayOnLevelLoad : 1; // 0x2b4
	char bForceStartPos : 1; // 0x2b4
	float ForceStartPosition; // 0x2b8
	char bLooping : 1; // 0x2bc
	char bRewindOnPlay : 1; // 0x2bc
	char bNoResetOnRewind : 1; // 0x2bc
	char bRewindIfAlreadyPlaying : 1; // 0x2bc
	char bDisableRadioFilter : 1; // 0x2bc
	char bClientSideOnly : 1; // 0x2bc
	char bSkipUpdateIfNotVisible : 1; // 0x2bc
	char bIsSkippable : 1; // 0x2bc
	int32_t PreferredSplitScreenNum; // 0x2c0
	char bDisableMovementInput : 1; // 0x2c4
	char bDisableLookAtInput : 1; // 0x2c4
	char bHidePlayer : 1; // 0x2c4
	char bHideHud : 1; // 0x2c4
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x2c8
	char bShouldShowGore : 1; // 0x2d8
	TArray<UInterpGroupInst*> GroupInst; // 0x2e0
	TArray<FCameraCutInfo> CameraCuts; // 0x2f0
	char bIsPlaying : 1; // 0x300
	char bReversePlayback : 1; // 0x300
	char bPaused : 1; // 0x300
	char bPendingStop : 1; // 0x300
	float InterpPosition; // 0x304
	char ReplicationForceIsPlaying; // 0x30c
	FMulticastInlineDelegate OnPlay; // 0x310
	FMulticastInlineDelegate OnStop; // 0x320
	FMulticastInlineDelegate OnPause; // 0x330
};

struct UMaterialExpressionFunctionInput {
	FExpressionInput Preview; // 0x48
	FName InputName; // 0x5c
	FString Description; // 0x68
	FGuid ID; // 0x78
	EFunctionInputType InputType; // 0x88
	FVector4 PreviewValue; // 0x90
	char bUsePreviewValueAsDefault : 1; // 0xa0
	int32_t SortPriority; // 0xa4
	char bCompilingFunctionPreview : 1; // 0xa8
};

struct UPlayMontageAndWaitProxy {
	FMulticastInlineDelegate OnCompleted; // 0x30
	FMulticastInlineDelegate OnBlendOut; // 0x40
	FMulticastInlineDelegate OnInterrupted; // 0x50
	FMulticastInlineDelegate OnNotifyBegin; // 0x60
	FMulticastInlineDelegate OnNotifyEnd; // 0x70
};

struct ASleeper_HeroGrappled_ScenarioActor_C {
	USleeper_HeroGrappled_Scenario_BP_C* Sleeper_HeroGrappled_Scenario_BP; // 0x2a0
	USceneComponent* DefaultSceneRoot; // 0x2a8
};

struct UMaterialExpressionMaterialAttributeLayers {
	FName ParameterName; // 0x48
	FGuid ExpressionGUID; // 0x50
	FMaterialAttributesInput Input; // 0x60
	FMaterialLayersFunctions DefaultLayers; // 0x78
	TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb8
	int32_t NumActiveLayerCallers; // 0xc8
	TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xd0
	int32_t NumActiveBlendCallers; // 0xe0
	bool bIsLayerGraphBuilt; // 0xe4
};

struct UMediaSoundComponent {
	EMediaSoundChannels Channels; // 0x710
	bool DynamicRateAdjustment; // 0x714
	float RateAdjustmentFactor; // 0x718
	FFloatRange RateAdjustmentRange; // 0x71c
	UMediaPlayer* MediaPlayer; // 0x730
};

struct UHeroUseComponent {
	FMulticastInlineDelegate OnBeginUse; // 0xe8
	FMulticastInlineDelegate OnEndUse; // 0xf8
	FMulticastInlineDelegate OnSuccessfulUse; // 0x108
	float InitialProbeRadius; // 0x118
	float InitialProbeLength; // 0x11c
	float SecondaryProbeRadius; // 0x120
	float SecondaryProbeLength; // 0x124
	float SpottingHeightIncrease; // 0x128
	float PotentialUsableAngle; // 0x12c
	float ReachoutAnimationDelay; // 0x130
	AActor* ActorBeingUsed; // 0x138
	AActor* PotentialUsableActor; // 0x140
	UUsableComponent* ActiveUsableComponent; // 0x148
	UUsableComponent* PotentialUsableComponent; // 0x150
	UUsableComponent* SpottingUsableComponent; // 0x158
	UUsableComponent* LastUsePressUsable; // 0x160
	UAnimMontage* CurrentUseAnimation; // 0x168
	EHeroUseState CurrentHeroUseState; // 0x170
};

struct UMovieSceneLevelVisibilitySection {
	ELevelVisibility Visibility; // 0xe8
	TArray<FName> LevelNames; // 0xf0
};

struct USourceEffectRingModulationPreset {
	FSourceEffectRingModulationSettings Settings; // 0x84
};

struct UAnimEvalSet_Chaser_ProjectileThrow_C {
	FGameplayEval_Speed SelfVelocity; // 0x328
	FGameplayEval_GameplayTags Tags; // 0x388
	FGameplayEval_HasPath HasPath; // 0x420
	FGameplayEval_ClingAttached ClingAttached; // 0x468
};

struct UCameraModifier_InterpolateFOV {
	float TargetFOVPct; // 0x50
	EAlphaBlendOption BlendOption; // 0x5c
	UCurveFloat* CustomBlendCurve; // 0x60
	ULocalPlayer* OwnerPlayer; // 0xe8
};

struct USubmixEffectConvolutionReverbPreset {
	FSubmixEffectConvolutionReverbSettings Settings; // 0x48
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x70
	bool bEnableHardwareAcceleration; // 0x71
};

struct UMovieScenePrimitiveMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct UGameplayDataSet {
	TArray<FPerThreatCatchUpBonus> PerThreatCatchUpBonuses; // 0x38
	TArray<FDataTableRowHandle> AlwaysUnlockedCards; // 0x48
	TArray<FDataTableRowHandle> AlwaysUnlockedCardsPvP; // 0x58
	TMap<EGameplayCardCategory, FGameplayCardUIData> GameplayCardCategoryData; // 0x68
	int32_t MaxCardsToDrawOnCharacterTransfer; // 0xb8
};

struct UParticleModuleAccelerationConstant {
	FVector Acceleration; // 0x40
};

struct UGameplayEffectCharacterEmitter {
	FCharacterEmitterDef CharacterEmitterDef; // 0x240
};

struct UHUDHintTextUserWidget {
	FGameplayTagContainer ReloadBlockingTags; // 0x458
	UClipAmmoComponent* Ammo; // 0x478
	AItem* SelectedItem; // 0x480
	UReloadComponent* Reload; // 0x488
	UHeroLifeStateComponent* HeroLifeState; // 0x490
	float EventSecondsRemaining; // 0x498
};

struct UBlackboardKeyType_Enum {
	UEnum* EnumType; // 0x38
	FString EnumName; // 0x40
	char bIsEnumNameValid : 1; // 0x50
};

struct USignInScreen_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x658
	UWidgetAnimation* NewAnimation; // 0x660
	UBaseTextBlock_C* AcceptingInviteText; // 0x668
	UImage* BG; // 0x670
	UImage* BGImage; // 0x678
	UBaseTextBlock_C* CreatingGroupText; // 0x680
	UBaseTextBlock_C* CreatingPartyText; // 0x688
	UEnvironmentStatus_WBP_C* EnvironmentStatus_WBP; // 0x690
	UBaseTextBlock_C* FetchingProfileText; // 0x698
	UImage* Frame; // 0x6a0
	UBaseTextBlock_C* SigningInText; // 0x6a8
	UOverlay* SignInPrompt; // 0x6b0
	URichTextBlock* SignInPromptText; // 0x6b8
	UTaskManRelayStatus_WBP_C* TaskManRelayStatus; // 0x6c0
	UCircularThrobber* WaitingForServerThrobber; // 0x6c8
	ESignInScreenState SignInState; // 0x6d0
	TArray<FKey> CancelKeys; // 0x6d8
	TSoftObjectPtr<UTexture2D> BGTexture; // 0x6e8
	UTweenContainer* TweenOpenContainer; // 0x710
};

struct UMatchmakingMOTDUserWidget {
	TArray<FMOTDHubInfo> Tabs; // 0x458
	UTexture2D* DynamicIcon; // 0x468
};

struct UInterpFilter {
	FString Caption; // 0x30
};

struct UBruteComponent {
	FGameplayTag BruteStateTags[0x5]; // 0x100
	float MeleeProbability; // 0x128
	UBlackboardData* BlackboardAsset; // 0x130
	FBlackboardKeySelector EnemyBBKey; // 0x138
	FGameplayTagQuery MeleeActionTagQuery; // 0x160
	FGameplayTagQuery TumorTossActionTagQuery; // 0x1a8
	int32_t MinTargetAttacksBeforeTargetSwitch; // 0x1f0
	float MinTargetDistanceDiffBeforeTargetSwitch; // 0x1f4
	AGobiCharacter* BruteOwner; // 0x338
	EBruteState CurrentBruteState; // 0x340
	EBruteState PreviousBruteState; // 0x341
};

struct UGobiProjectileMovementComponent {
	FRotator RotationRate; // 0x210
	FVector RotationPositionOffset; // 0x21c
	char bRotationInLocalSpace : 1; // 0x228
};

struct UBTDecorator_DoesPathExist {
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
	char bUseSelf : 1; // 0xc0
	EPathExistanceQueryType PathQueryType; // 0xc4
	UNavigationQueryFilter* FilterClass; // 0xc8
};

struct UInterpTrackLinearColorProp {
	FName PropertyName; // 0x98
};

struct UInputRouter {
	bool bAutoInvalidateOnHover; // 0x30
	bool bAutoInvalidateOnCapture; // 0x31
	UInputBehaviorSet* ActiveInputBehaviors; // 0x40
};

struct UBTTask_BlueprintBase {
	AAIController* AIOwner; // 0x78
	AActor* ActorOwner; // 0x80
	FIntervalCountdown TickInterval; // 0x88
	char bShowPropertyDetails : 1; // 0xa8
};

struct UParticleModuleSpawnBase {
	char bProcessSpawnRate : 1; // 0x38
	char bProcessBurstList : 1; // 0x38
};

struct UScreenFXComponent {
	TArray<UScreenEffect*> ScreenFXData; // 0xe8
	UScreenEffect* DefaultDamageEffectClass; // 0xf8
	UScreenEffect* DefaultDamageScreenEffect; // 0x100
	TArray<FDamageScreenEffectMapping> DamageTypeFXOverrides; // 0x108
	TArray<UScreenEffect*> ScreenEffectInstances; // 0x118
	TWeakObjectPtr<APlayerCharacter> OwnerPlayer; // 0x128
	TWeakObjectPtr<APlayerController> OwningPlayerController; // 0x130
	TWeakObjectPtr<APlayerCameraManager> CameraManager; // 0x138
	TWeakObjectPtr<UHealthComponent> HealthComponent; // 0x140
	FMulticastInlineDelegate OnScreenEffectActiveChanged; // 0x158
};

struct UGameplayEffectOmenSensor {
	FGameplayTagQuery OmenQuery; // 0x238
};

struct UGuidDataTable {
	TMap<FGuid, FName> GuidToDisplayName; // 0xd8
};

struct UPopupUserWidget {
	FMulticastInlineDelegate OnPopupClosed; // 0x458
	UObject* Payload; // 0x468
	bool bDestroyOnClose; // 0x470
	bool bInvokeAudioPauseStateWhenOpen; // 0x471
};

struct UARTexture {
	EARTextureType TextureType; // 0xc0
	float Timestamp; // 0xc4
	FGuid ExternalTextureGuid; // 0xc8
	FVector2D Size; // 0xd8
};

struct UAnimContext_ActorSceneComp {
	FName ComponentTag; // 0x90
};

struct UFriendRequestsPopupUserWidget {
	int32_t NumRequestsPerPage; // 0x560
	int32_t NumRequestsToSearch; // 0x564
};

struct UEnvQueryGenerator_ActorsOfClass {
	AActor* SearchedActorClass; // 0x58
	FAIDataProviderUObjectValue SearchActorClass; // 0x60
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x98
	FAIDataProviderFloatValue SearchRadius; // 0xd0
	UEnvQueryContext* SearchCenter; // 0x108
};

struct UCommon_Zombie_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x800
	FAnimNode_Root AnimGraphNode_Root; // 0x808
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x838
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x8f0
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x9b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x9f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0xa20
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0xa48
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0xa90
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0xb48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xb90
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xbb8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xc70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0xd30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xd58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xd80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xda8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0xe48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xf00
	FAnimNode_CurveSource AnimGraphNode_CurveSource; // 0xf28
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0xf68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1000
	float __CustomProperty_LocoCounterYaw_838DA19C4320A3A8999F0D8735A716A4; // 0x10a0
	float __CustomProperty_AttackAimAlpha_838DA19C4320A3A8999F0D8735A716A4; // 0x10a4
	float __CustomProperty_LocoSpeedsBlendTime_838DA19C4320A3A8999F0D8735A716A4; // 0x10a8
	float __CustomProperty_LocoBlendTime_838DA19C4320A3A8999F0D8735A716A4; // 0x10ac
	FLocoLeaning __CustomProperty_Leaning_838DA19C4320A3A8999F0D8735A716A4; // 0x10b0
	FLocomotionPrediction __CustomProperty_LocoPredict_838DA19C4320A3A8999F0D8735A716A4; // 0x10c0
	FAnimState3P __CustomProperty_AnimState3P_838DA19C4320A3A8999F0D8735A716A4; // 0x1128
	FGobiAnimationState __CustomProperty_AnimationState_838DA19C4320A3A8999F0D8735A716A4; // 0x1130
	FAnimLocomotionData __CustomProperty_LocomotionData_838DA19C4320A3A8999F0D8735A716A4; // 0x1188
	FAnimDirectionRange __CustomProperty_BackwardDirection_838DA19C4320A3A8999F0D8735A716A4; // 0x11c8
	FAnimDirectionRange __CustomProperty_LeftDirection_838DA19C4320A3A8999F0D8735A716A4; // 0x11e4
	FAnimDirectionRange __CustomProperty_RightDirection_838DA19C4320A3A8999F0D8735A716A4; // 0x1200
	FAnimDirectionRange __CustomProperty_ForwardDirection_838DA19C4320A3A8999F0D8735A716A4; // 0x121c
	FLocomotionPrediction __CustomProperty_LocoPredictState_838DA19C4320A3A8999F0D8735A716A4; // 0x1238
	FLocoTurnInPlace __CustomProperty_TurnInPlaceState_838DA19C4320A3A8999F0D8735A716A4; // 0x12a0
	FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph_2; // 0x1350
	float __CustomProperty_LocoCounterYaw_595F317948A60B33D1850393E04CDD36; // 0x13f8
	float __CustomProperty_AttackAimAlpha_595F317948A60B33D1850393E04CDD36; // 0x13fc
	float __CustomProperty_LocoSpeedsBlendTime_595F317948A60B33D1850393E04CDD36; // 0x1400
	float __CustomProperty_LocoBlendTime_595F317948A60B33D1850393E04CDD36; // 0x1404
	FLocoLeaning __CustomProperty_Leaning_595F317948A60B33D1850393E04CDD36; // 0x1408
	FLocomotionPrediction __CustomProperty_LocoPredict_595F317948A60B33D1850393E04CDD36; // 0x1418
	FAnimState3P __CustomProperty_AnimState3P_595F317948A60B33D1850393E04CDD36; // 0x1480
	FGobiAnimationState __CustomProperty_AnimationState_595F317948A60B33D1850393E04CDD36; // 0x1488
	FAnimLocomotionData __CustomProperty_LocomotionData_595F317948A60B33D1850393E04CDD36; // 0x14e0
	FAnimDirectionRange __CustomProperty_BackwardDirection_595F317948A60B33D1850393E04CDD36; // 0x1520
	FAnimDirectionRange __CustomProperty_LeftDirection_595F317948A60B33D1850393E04CDD36; // 0x153c
	FAnimDirectionRange __CustomProperty_RightDirection_595F317948A60B33D1850393E04CDD36; // 0x1558
	FAnimDirectionRange __CustomProperty_ForwardDirection_595F317948A60B33D1850393E04CDD36; // 0x1574
	FLocomotionPrediction __CustomProperty_LocoPredictState_595F317948A60B33D1850393E04CDD36; // 0x1590
	FLocoTurnInPlace __CustomProperty_TurnInPlaceState_595F317948A60B33D1850393E04CDD36; // 0x15f8
	FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x16a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1750
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x1808
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x18d0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x18f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1940
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x19f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1a20
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1a48
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1ae8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1ba0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1d30
	float AdditiveBlendWeight; // 0x1d58
	float UpperBodyBlendWeight; // 0x1d5c
};

struct UTitanStage2And3Component {
	FMulticastInlineDelegate OnStageKilled; // 0xf0
	FMulticastInlineDelegate OnBeganStage3Death; // 0x100
	FMulticastInlineDelegate OnEscape; // 0x110
	int32_t RemainingWeakSpots; // 0x138
	FReplicatedTitanStateInfo ReplicatedStateInfo; // 0x1b8
	int32_t Stage; // 0x1c4
	int32_t Stage2PhaseIdx; // 0x1c8
	int32_t Stage3PhaseIdx; // 0x1cc
	int32_t Stage3SegmentIdx; // 0x1d0
	bool bPredictKnockbackOnClient; // 0x1d4
	TArray<AActor*> Stage2Tentacles; // 0x1d8
	TArray<UTitanStage3TentacleComponent*> Stage3TentacleComponents; // 0x1f8
	bool bAutoAttackOnBegin; // 0x218
	UAnimSequence* DeathAnimSequence; // 0x220
	FName RightWeakSpotSocketName; // 0x228
	FName LeftWeakSpotSocketName; // 0x230
	float Stage2Health; // 0x238
	AActor* Stage2TentacleClass; // 0x240
	int32_t Stage2WeakSpotCount; // 0x248
	FGameplayTagContainer KnockbackTagsToApply; // 0x250
	FGameplayTag PlayerKnocbackTriggerTag; // 0x270
	float KnockbackImpulse; // 0x278
	float KnockbackDuration; // 0x27c
	float KnockbackGravityScalar; // 0x280
	float Stage3Health; // 0x284
	TWeakObjectPtr<AActor> Stage3ScenarioActor; // 0x288
	TWeakObjectPtr<AActor> FallBehindTrigger; // 0x290
	int32_t Stage3WeakSpotCount; // 0x298
	FName PathRootBone; // 0x29c
	FTitanStage2Tuning TitanStage2Tuning; // 0x2a8
	FTitanStage3Tuning TitanStage3Tuning; // 0x2c0
	FDataTableRowHandle Phase2WeakspotOneDestroyed; // 0x2f0
	FDataTableRowHandle Phase2WeakspotTwoDestroyed; // 0x310
	FDataTableRowHandle Phase3WeakspotHit; // 0x330
	FDataTableRowHandle Phase3WeakspotDestroyed; // 0x350
	TArray<FWeakspotAimAssistData> Stage2AimAssistData; // 0x370
	TArray<FWeakspotAimAssistData> Stage3AimAssistData; // 0x380
	float Stage3BlendTime; // 0x390
};

struct UUMGSequencePlayer {
	UWidgetAnimation* Animation; // 0x410
};

struct UInterpCurveEdSetup {
	TArray<FCurveEdTab> Tabs; // 0x30
	int32_t ActiveTab; // 0x40
};

struct UBlackboardData {
	UBlackboardData* Parent; // 0x38
	TArray<FBlackboardEntry> Keys; // 0x40
	char bHasSynchronizedKeys : 1; // 0x50
};

struct UBTDecorator {
	char bInverseCondition : 1; // 0x68
	EBTFlowAbortMode FlowAbortMode; // 0x6c
};

struct UBoneMaskFilter {
	TArray<FInputBlendPose> BlendPoses; // 0x30
};

struct AOnlineBeacon {
	float BeaconConnectionInitialTimeout; // 0x2a8
	float BeaconConnectionTimeout; // 0x2ac
	UNetDriver* NetDriver; // 0x2b0
};

struct USubmixEffectDelayPreset {
	FSubmixEffectDelaySettings Settings; // 0x7c
	FSubmixEffectDelaySettings DynamicSettings; // 0x88
};

struct UCardInventoryLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
};

struct UFlashlightPoseComponent {
	float SmoothAlpha; // 0x230
	float FlashlightLeadStrength; // 0x234
};

struct UAkMusicSyncCallbackInfo {
	int32_t PlayingID; // 0x38
	FAkSegmentInfo SegmentInfo; // 0x3c
	EAkCallbackType MusicSyncType; // 0x60
	FString UserCueName; // 0x68
};

struct AHUD {
	APlayerController* PlayerOwner; // 0x2a0
	char bLostFocusPaused : 1; // 0x2a8
	char bShowHUD : 1; // 0x2a8
	char bShowDebugInfo : 1; // 0x2a8
	int32_t CurrentTargetIndex; // 0x2ac
	char bShowHitBoxDebugInfo : 1; // 0x2b0
	char bShowOverlays : 1; // 0x2b0
	char bEnableDebugTextShadow : 1; // 0x2b0
	TArray<AActor*> PostRenderedActors; // 0x2b8
	TArray<FName> DebugDisplay; // 0x2d0
	TArray<FName> ToggledDebugCategories; // 0x2e0
	UCanvas* Canvas; // 0x2f0
	UCanvas* DebugCanvas; // 0x2f8
	TArray<FDebugTextInfo> DebugTextList; // 0x300
	AActor* ShowDebugTargetDesiredClass; // 0x310
	AActor* ShowDebugTargetActor; // 0x318
	int32_t ScrollSpeed; // 0x320
	int32_t TabChangeDirection; // 0x324
};

struct UAnimContext_Direction {
	UAnimContext_Transform* DirectionFrom; // 0x60
	UAnimContext_Transform* DirectionTo; // 0x68
};

struct APVPGameMode {
	TArray<APawn*> DefaultZombiePawnClasses; // 0x570
	float ZombieRespawnEQSTimerMax; // 0x580
	float MutationPointTrickleRate; // 0x588
	int32_t MutationPointTrickleAmount; // 0x58c
	TArray<int32_t> ZombieMutationPointsPerRound; // 0x590
};

struct UNiagaraDataInterfaceRWBase {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct UDynamicEntryBoxBase {
	EDynamicBoxType EntryBoxType; // 0x148
	FVector2D EntrySpacing; // 0x14c
	TArray<FVector2D> SpacingPattern; // 0x158
	FSlateChildSize EntrySizeRule; // 0x168
	EHorizontalAlignment EntryHorizontalAlignment; // 0x170
	EVerticalAlignment EntryVerticalAlignment; // 0x171
	int32_t MaxElementSize; // 0x174
	FUserWidgetPool EntryWidgetPool; // 0x188
};

struct UWaterSurface {
	UWaterSurfaceDef* Definition; // 0x40
	UMaterialInstanceDynamic* HeightMID; // 0x48
	UMaterialInstanceDynamic* ForceMID; // 0x50
	UMaterialInstanceDynamic* NormalMID; // 0x58
	UMaterialInterface* OriginalMeshMaterial; // 0x60
	TArray<UTextureRenderTarget2D*> RenderTargets; // 0x68
	TArray<UTextureRenderTarget2D*> NormalRenderTargets; // 0x78
	UStaticMeshComponent* RTMeshComponent; // 0x90
	UMaterialInstanceDynamic* WaterMID; // 0x98
	UTextureRenderTarget2D* ShiftRTTempTarget; // 0xa0
	FWaterMapperData MapperData; // 0xa8
	TArray<FWaterRipplerProxy> RipplerProxies; // 0xd8
	TArray<FWaterRipplerHit> RipplerHits; // 0xe8
};

struct UGameCoachLessonsComponent {
	TArray<UGameCoachLesson*> LessonClasses; // 0xe8
	AActor* AlternateTarget; // 0xf8
	AActor* AlternateDisplayTarget; // 0x100
	EGameCoachRegistrationScope Scope; // 0x108
	ECollisionChannel TraceChannel; // 0x109
	bool bUseCustomTraceChannel; // 0x10a
	FName CustomTraceChannel; // 0x10c
};

struct UControlPointMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x5c0
};

struct USessionConnectionConfig {
	FTaskTimerConfig ReconnectTimer; // 0x30
	double ReconnectAbandonTime; // 0xa0
	double InGameReconnectAbandonTime; // 0xa8
	double TaskTimeout; // 0xb0
	double PingIntervalMin; // 0xb8
	double PingIntervalMax; // 0xc0
	int32_t NumPingsToMigrate; // 0xc8
};

struct UMovieSceneColorSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct UTitanStage2MouthComponent {
	FMulticastInlineDelegate OnMouthOpenEvent; // 0xe8
	FMulticastInlineDelegate OnMouthCloseEvent; // 0xf8
	ETitanStage2MouthState State; // 0x168
	float BiteAngle; // 0x16c
	UBlendSpace1D* BiteBlendSpace; // 0x170
	float BiteRange; // 0x178
	UAnimMontage* RoarMontage; // 0x180
	UAnimMontage* FlinchMontage; // 0x188
	UAnimMontage* RoarExitMontage; // 0x190
	TArray<UGameplayEffect*> BiteGameplayEffects; // 0x198
	FGameplayTag AttackVolumeTag; // 0x1a8
	FName PivotSocket; // 0x1b0
	UGobiDamageType* TitanBiteDamageClass; // 0x1b8
	FDataTableRowHandle RoarInterruptMusicHandle; // 0x1d8
};

struct UParticleModuleAccelerationOverLifetime {
	FRawDistributionVector AccelOverLife; // 0x40
};

struct UParticleModuleBeamSource {
	Beam2SourceTargetMethod SourceMethod; // 0x38
	FName SourceName; // 0x3c
	char bSourceAbsolute : 1; // 0x44
	FRawDistributionVector Source; // 0x48
	char bLockSource : 1; // 0x90
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x94
	FRawDistributionVector SourceTangent; // 0x98
	char bLockSourceTangent : 1; // 0xe0
	FRawDistributionFloat SourceStrength; // 0xe8
	char bLockSourceStength : 1; // 0x118
};

struct UDatasmithStaticMeshComponentTemplate {
	UStaticMesh* StaticMesh; // 0x38
	TArray<UMaterialInterface*> OverrideMaterials; // 0x40
};

struct UGameplayAction_Ambush {
	float AmbushOnHeroLOSMinDistance; // 0x210
	float AmbushOnHeroMinDistance; // 0x218
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
	FNiagaraVariableAttributeBinding ColorBinding; // 0x118
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x190
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x208
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x280
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2f8
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x370
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3e8
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x460
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4d8
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x550
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x5c8
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x640
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x6b8
};

struct UMovieSceneSpawnTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
	FGuid ObjectGuid; // 0x70
};

struct UGameplayTask_TimeLimitedExecution {
	FMulticastInlineDelegate OnFinished; // 0x70
	FMulticastInlineDelegate OnTimeExpired; // 0x80
};

struct UZombieFacialAnimationData {
	UPoseAsset* FacePoseAsset; // 0x38
	FName ExpressionCurves[0xf]; // 0x40
};

struct ASplineMeshActor {
	USplineMeshComponent* SplineMeshComponent; // 0x2a0
};

struct UAnimMetaData_MontageLink {
	UAnimMontage* LinkedMontage; // 0x30
};

struct UGameplayEffectAISense {
	TArray<FAISenseModInfo> SenseMods; // 0x240
};

struct UGameplayEffectInventoryComponent {
	FGamePropertyFloatMod AmmoReservesStartingPct[0x7]; // 0x240
	FGamePropertyFloatMod AmmoReservesRefillPct[0x7]; // 0x2b0
	FGamePropertyIntMod AmmoReservesMax[0x7]; // 0x320
	bool bAllowPrimariesInSecondarySlot; // 0x390
	bool bDisableSpawningDroppedItems; // 0x391
};

struct UBotAIScriptingComponent {
	FBlackboardKeySelector TeammateTargetBBKey; // 0x478
	FBlackboardKeySelector TeammateDistBBKey; // 0x4a0
	FBlackboardKeySelector ShouldTeleportBBKey; // 0x4c8
	FBlackboardKeySelector WanderFollowTeammateBBKey; // 0x4f0
	FBlackboardKeySelector AllowMeleeNavBBKey; // 0x518
	FBlackboardKeySelector GoToLocationBBKey; // 0x540
	FBlackboardKeySelector InteractTargetBBKey; // 0x568
	FBlackboardKeySelector InteractTargetNavLocBBKey; // 0x598
	FBlackboardKeySelector DesiredSelfItemPickupBBKey; // 0x5c0
	FBlackboardKeySelector DesiredTeamItemPickupBBKey; // 0x5e8
	FBlackboardKeySelector DesiredUsableBBKey; // 0x610
	FBlackboardKeySelector ItemUseBBKey; // 0x638
	FBlackboardKeySelector ItemUseNavActorBBKey; // 0x660
	FBlackboardKeySelector ItemUseNavLocBBKey; // 0x688
};

struct USourceEffectStereoDelayPreset {
	FSourceEffectStereoDelaySettings Settings; // 0x84
};

struct UDatasmithLandscapeTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x38
	int32_t StaticLightingLOD; // 0x40
};

struct UPlatformCalloutImage_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UImage* CalloutIcon; // 0x478
	UTextBlock* CalloutText; // 0x480
	FName Action; // 0x488
	bool bShowKey; // 0x490
	bool bShowGamepad; // 0x491
	FMulticastInlineDelegate OnIconVisibilityChanged; // 0x498
	FMulticastInlineDelegate OnInputChanged; // 0x4a8
};

struct UMaterialExpressionRuntimeVirtualTextureReplace {
	FExpressionInput Default; // 0x48
	FExpressionInput VirtualTextureOutput; // 0x5c
};

struct UWindowTitleBarAreaSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UArmorSet {
	TArray<FArmor> Armor; // 0x38
};

struct UCampaignRunComponent {
	EActiveCampaignRunType ActiveCampaignRunType; // 0x100
	TArray<FString> CampaignRunOwners; // 0x108
	ECampaignRoundResult LastRoundResult; // 0x118
	int32_t RemainingRetries; // 0x11c
	UDedicatedServerManager* DedicatedServerManager; // 0x120
	UCampaignRunManager* CampaignRunManager; // 0x128
	UGobiPlayerProfileManager* PlayerProfileManager; // 0x130
	bool bCampaignRunAbandoned; // 0x148
};

struct UMaterialExpressionShadingPathSwitch {
	FExpressionInput Default; // 0x48
	FExpressionInput Inputs[0x3]; // 0x5c
};

struct APostProcessVolume {
	FPostProcessSettings Settings; // 0x2e0
	float Priority; // 0x840
	float BlendRadius; // 0x844
	float BlendWeight; // 0x848
	char bEnabled : 1; // 0x84c
	char bUnbound : 1; // 0x84c
};

struct UGobiNavModifierComponent {
	UNavArea* AreaClass; // 0x118
	UNavArea* InactiveAreaClass; // 0x120
	FNavAgentSelector SupportedAgents; // 0x128
	FGameplayTag CustomNavBoundsVolumesTag; // 0x12c
	UNavArea* AreaClassToRemoveHordeBlockingTagOnSpawnActors; // 0x138
	FGameplayTag HordeBlockingTagToRemoveOnSpawnActors; // 0x140
	char bIncludeAgentHeight : 1; // 0x148
};

struct UPlayerSlotManagerSeamlessTravelData {
	TArray<FTeamSlots> TeamSlots; // 0x30
	TArray<FCharacterSelectMapping> TeamAMapping; // 0x40
	TArray<FCharacterSelectMapping> TeamBMapping; // 0x50
};

struct UApplyOnItemAppliedMod {
	EApplyOnItemAppliedTargeting ActivateWhenAppliedTo; // 0xd0
	EApplyOnItemAppliedTargeting ApplyEmitterDefTo; // 0xd1
	FGameplayTagQuery ItemTagQuery; // 0xd8
	FCharacterEmitterDef CharacterEmitterDef; // 0x120
};

struct AProfilingGameMode {
	AGameplayAnalyticsManager* AnalyticsManager; // 0x488
};

struct UZombieFamilyUserWidget {
	FMulticastInlineDelegate OnVariantClicked; // 0x458
	FMulticastInlineDelegate OnVariantRightClicked; // 0x468
	FMulticastInlineDelegate OnVariantFocused; // 0x478
	FMulticastInlineDelegate OnUpgradeClicked; // 0x488
	FMulticastInlineDelegate OnUpgradeRightClicked; // 0x498
	FMulticastInlineDelegate OnUpgradeFocused; // 0x4a8
	FMulticastInlineDelegate OnUpgradeUnfocused; // 0x4b8
	UGobiUserWidget* TeamPipWidget; // 0x4c8
	FText MutationPointsFormatText; // 0x4d0
	UZombieUpgradePreviewUserWidget* UpgradePreviewWidget; // 0x4e8
	UZombieVariantEntryUserWidget* VariantWidget; // 0x4f0
	UZombieMutationProgressUserWidget* MutationProgressWidget; // 0x4f8
	UImage* BG; // 0x500
	UHorizontalBox* UpgradePreviewsHBox; // 0x508
	UHorizontalBox* VariantsHBox; // 0x510
	UVerticalBox* UpgradesVBox; // 0x518
	UTextBlock* FamilyNameText; // 0x520
};

struct UChatMessageUserWidget {
	float FadeDelay; // 0x460
	float FadeDuration; // 0x464
};

struct UGrappleComponent {
	FMulticastInlineDelegate OnGrappleStateChanged; // 0xe8
	bool bCanBreakout; // 0x105
	bool bBreakingOut; // 0x106
	TArray<FActiveGrappler> ActiveGrapplers; // 0x168
	EGrappleState State; // 0x178
	bool bAutoBreakout; // 0x179
	float DelayBeforeBreakoutSecs; // 0x17c
	FGamePropertyFloat BreakoutInputRequiredHoldTime; // 0x180
	FGamePropertyInt BreakoutCountPerLevel; // 0x1b8
	FGamePropertyFloat BreakoutCooldownSecs; // 0x1f0
	TArray<UGameplayEffect*> BreakoutTargetGameplayEffects; // 0x228
	TArray<UGameplayEffect*> BreakoutSelfGameplayEffects; // 0x250
	UAnimMontage* BreakoutFPAnimMontage; // 0x260
	UAnimMontage* Breakout3PAnimMontage; // 0x268
	UAnimMontage* BreakingOutAdditiveMontage; // 0x270
	FGameplayTagContainer BreakoutEnabledTags; // 0x278
	FGameplayTagContainer BreakoutDisablingTags; // 0x298
	UAkAudioEvent* AKEBreakout; // 0x2b8
	UDamageFilter* GrappledDamageFilter; // 0x2c0
};

struct UGameIntensitySystem {
	float CombatDecayRate; // 0xac
	float NonCombatDecayRate; // 0xb0
	float AdvancingDecayRate; // 0xb4
	int32_t NumPlayersToAverage; // 0xb8
	FHeroIntensityEventData AggroEnemiesNear; // 0xbc
	FHeroIntensityEventData SelfDamaged; // 0xd0
	FHeroIntensityEventData TeammateDamaged; // 0xe4
	FHeroIntensityEventData TeammateIncapped; // 0xf8
	FHeroIntensityEventData TeammateDied; // 0x10c
};

struct UZombieNameplateManagerUserWidget {
	float ADSOpacity; // 0x45c
};

struct UAnimEvalSet_Shared_HitReaction_UB_Dismember_C {
	FGameplayEval_Dismembered Dismembered; // 0xc0
	FGameplayEval_HitReactionBone HitBone; // 0x118
	FGameplayEval_DamageType DamageType; // 0x1c8
	FGameplayEval_DamageAmount DamageAmount; // 0x288
	FGameplayEval_HitReactionHealth HitReactionHealth; // 0x320
	FGameplayEval_CanRupture CanRupture; // 0x378
};

struct ULeaderboardUsableComponent {
	ELeaderboardRegion Region; // 0x530
};

struct UMaterialShaderQualitySettings {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x30
};

struct UInterpTrackFade {
	char bPersistFade : 1; // 0x98
	char bFadeAudio : 1; // 0x98
	FLinearColor FadeColor; // 0x9c
};

struct UAISense_TRSSight {
	int32_t MaxTracesPerTick; // 0x138
	int32_t MinQueriesPerTimeSliceCheck; // 0x13c
	double MaxTimeSlicePerTick; // 0x140
	float HighImportanceQueryDistanceThreshold; // 0x148
	float MaxQueryImportance; // 0x150
	float SightLimitQueryImportance; // 0x154
};

struct APVPHoldoutActor {
	USceneComponent* DefaultRootComponent; // 0x2a0
	bool bUsePlayAreaVolume; // 0x2a8
	UBoxComponent* PlayAreaBox; // 0x2b0
	AVolume* PlayAreaVolume; // 0x2b8
	USceneComponent* SafeZoneRoot; // 0x2c0
	UCapsuleComponent* SafeZoneCollisionCapsule; // 0x2c8
	UStaticMeshComponent* SafeZoneVisibleCylinder; // 0x2d0
	UStaticMeshComponent* SafeZoneCenterMarker; // 0x2d8
	USplineComponent* SafeZoneWallSpline; // 0x2e0
	UAkComponent* SafeZoneWallAK; // 0x2e8
	float SafeZoneVisibleCylinderRadiusScale; // 0x2f0
	TArray<FGameplayTag> ScenarioComponentTags; // 0x2f8
	FGameplayTag FinalPhaseScenarioComponentTag; // 0x308
	EHoldoutState CurrentState; // 0x310
	float StateStartTime; // 0x314
	FHoldoutCollapseStateData CollapseStateData; // 0x318
	UHoldoutConfig* HoldoutConfig; // 0x448
	float InSwarmWarningCooldown; // 0x450
	UDialogueComponent* CoachDialogueComp; // 0x458
};

struct USourceEffectBitCrusherPreset {
	FSourceEffectBitCrusherSettings Settings; // 0x78
};

struct UInteractiveTool {
	UInputBehaviorSet* InputBehaviors; // 0x50
	TArray<UObject*> ToolPropertyObjects; // 0x58
};

struct UEnemyAudioComponent {
	bool bVocalFreeze; // 0x308
	TArray<USoundCollectionAsset*> PossibleSoundCollectionsMale; // 0x310
	TArray<USoundCollectionAsset*> PossibleSoundCollectionsFemale; // 0x320
	TArray<FName> VocalizationList; // 0x330
	FName IdleName; // 0x350
	FName BlightedIdleName; // 0x358
	FVector2D IdleTimerMinMax; // 0x360
	FVector2D AggroTimerMinMax; // 0x368
	FVector2D BlightedIdleTimerMinMax; // 0x370
	FGameplayTag BlightedTag; // 0x378
	float ChanceToPlayGoreSoundWhenHit; // 0x3a0
	UAkAudioEvent* BloodSprayAudioEvent; // 0x3a8
	UAkAudioEvent* UtilityStopAllAudioEvent; // 0x3b0
	TArray<FAudioDamageTypeEvent> LocalAudioDamageTypeEvents; // 0x3b8
	FGameplayTag DefaultLocalDamageType; // 0x3c8
	TArray<FAudioDamageTypeEvent> RemoteAudioDamageTypeEvents; // 0x3d0
	FGameplayTag DefaultRemoteDamageType; // 0x3e0
	FName HurtName; // 0x3e8
	FName HurtCriticalName; // 0x3f0
	TArray<UAkAudioEvent*> LocalAttackerHitWeakSpotAudioEvents; // 0x3f8
	UAkAudioEvent* LocalAttackerGunHitWeakSpotAudioEvents; // 0x408
	UAkAudioEvent* RemoteAttackerHitWeakSpotAudioEvent; // 0x410
	FName DeathName; // 0x418
	float DelayBeforeOnDeath; // 0x420
	UAkAudioEvent* ShotgunKillAudioEvent; // 0x428
	TMap<FGameplayTag, FName> TagSharedSoundOnDeathMap; // 0x430
	UAkAudioEvent* DebrisDropLightAudioEvent; // 0x490
	float ChanceToPlayDebrisDropLight; // 0x498
	UAkAudioEvent* GibBloodLimbAudioEvent; // 0x4a0
	UAkAudioEvent* GibBloodHeadAudioEvent; // 0x4a8
	UAkAudioEvent* GibHeadAudioEvent; // 0x4b0
	UAkAudioEvent* GibLimbAudioEvent; // 0x4b8
	bool bCountTorsoAsHeadless; // 0x4c0
	FName BodyfallBoneName; // 0x4c4
	FName BodyfallName; // 0x4cc
	bool bUseOnHitDuringRagDoll; // 0x4d4
	float CenterToOuterThickness; // 0x4d8
	float BodyfallTimerRate; // 0x4dc
	FName EnemyChangedLocalPlayerName; // 0x4f8
	FName EnemyChangedName; // 0x500
	UAkAudioEvent* ArmorHitAudioEvent; // 0x508
	UAkAudioEvent* ArmorBreakAudioEvent; // 0x510
	UAkAudioEvent* WallPounceTell; // 0x518
	float WallPounceTellRate; // 0x520
	UAkAudioBank* AudioBank; // 0x528
	UAkAudioEvent* BeginPreSpawnAudioEvent; // 0x530
	FDataTableRowHandle BeginPreSpawnMusicEvent; // 0x538
	UAkAudioEvent* EndPreSpawnAudioEvent; // 0x558
	FDataTableRowHandle EndPreSpawnMusicEvent; // 0x560
	float PreSpawnRattleTimerRate; // 0x580
	float PreSpawnRattleRadius; // 0x584
	FVector2D PreSpawnRattleLocationOffsetRange; // 0x588
	float RadiusBarkNearCooldown; // 0x5c0
	float DelayBetweenBehindTellAndAggro; // 0x5c4
	float RadiusBarkFarCooldown; // 0x5c8
	float ChanceToPlayIdleOnEnter; // 0x5cc
	bool bIgnoreIfNotTargetRadius; // 0x5d0
	bool bEntersFrayDebug; // 0x5d1
	UAkAudioEvent* SpawnedAudioEvent; // 0x600
	FGameplayTag DespawnTag; // 0x608
	FGameplayTagContainer HitMarkerSlimeTagContainer; // 0x620
	UAkAudioEvent* HitMarkerSlimeAudioEvent; // 0x640
	UAkAudioEvent* HitMarkerGoreAudioEvent; // 0x648
	UAkAudioEvent* HitMarkerMeleeSwtAudioEvent; // 0x650
};

struct UNiagaraDataInterfaceTexture {
	UTexture* Texture; // 0x38
};

struct UMaterialExpressionSquareRoot {
	FExpressionInput Input; // 0x48
};

struct UCustomCollisionChannelMap {
	FName CustomCollisionChannelNames[0x4]; // 0x38
};

struct UPlayerSettingsSystem {
	FMulticastInlineDelegate OnApplySettings; // 0x148
	UGameInstance* GameInstance; // 0x1a0
	UDataTable* GPUSettingsTable; // 0x1a8
	int32_t SettingsVersion; // 0x1b8
	bool bSplitscreenVertical; // 0x1bc
	bool bPushToTalk; // 0x1bd
	bool bVoiceEnabled; // 0x1be
	float MasterVolume; // 0x1c0
	float VoiceVolume; // 0x1c4
	float SFXVolume; // 0x1c8
	float DialogVolume; // 0x1cc
	float MusicVolume; // 0x1d0
	float MicBoost; // 0x1d4
	float MicThreshold; // 0x1d8
	FName MixProfile; // 0x1dc
	bool bVOIPSideChainEnabled; // 0x1e4
	bool bSuppressAudioOnFocusLost; // 0x1e5
	FString TargetMonitorName; // 0x1e8
	EUpscalingMode UpscalingMode; // 0x1f8
	EAAMode AAMode; // 0x1f9
	EFSRMode FSRMode; // 0x1fa
	EDLSSMode DLSSMode; // 0x1fb
	EFramerateCapMode FramerateCapMode; // 0x1fc
	int32_t GraphicsQuality; // 0x200
	float FieldOfView; // 0x204
	FFOVSettings FOVSettings; // 0x208
	EFOVConstraint FOVConstraint; // 0x218
	float LDRBrightness; // 0x21c
	float LDRContrast; // 0x220
	float LDRSaturation; // 0x224
	float HDRBrightness; // 0x228
	float HDRContrast; // 0x22c
	float HDRSaturation; // 0x230
	bool bStaticResolutionScaleOverriden; // 0x234
	float StaticResolutionScale; // 0x238
	float TargetFramerate; // 0x23c
	EMotionBlurMode MotionBlurMode; // 0x240
	bool bCASSharpening; // 0x241
	float DLSSSharpening; // 0x244
	bool bFlashlightShadows; // 0x248
	uint32_t PcHardwareHash; // 0x24c
	uint32_t PcSettingsHash; // 0x250
	bool bHasBeenSentSurvey; // 0x254
	float SafeZoneScale; // 0x258
	bool bChromaticAberration; // 0x25c
	bool bAdaptiveFXQualityEnabled; // 0x25d
	FString StoredHydraId; // 0x260
	int64_t LastSurveyDisplayTimestamp; // 0x270
	FString TextLanguageCode; // 0x278
	FString DialogueLanguageCode; // 0x288
	FString LastSystemLanguageCode; // 0x298
	FString AudioOutputDeviceName; // 0x2a8
	FString AudioInputDeviceName; // 0x2b8
	AkChannelConfiguration AudioChannelOverride; // 0x2c8
	FString MuxyGameLinkRefreshToken; // 0x2d0
	int32_t DetectedGraphicsQuality; // 0x2e0
	int32_t DetectedSyntheticBenchmarkQuality; // 0x2e4
	bool bStaminaBreathEnabled; // 0x2e8
};

struct UPlayerProfileSettings {
	FString PublicId; // 0x98
	FPlayerProfileData OfflineData; // 0xa8
	FTU02PlayerProfileData OnlineDataCache; // 0x4b0
};

struct UAtuinBeacons {
	double ResolveTimeoutSeconds; // 0x30
	int32_t NumResolveThreads; // 0x38
	double RoundIntervalSeconds; // 0x40
	double RoundIntervalMinSeconds; // 0x48
	double DefaultLatencyMilliseconds; // 0x50
	int32_t Rounds; // 0x58
};

struct UPacketRelayServerConnectionConfig {
	double HeartbeatInterval; // 0x30
	double TimeoutSeconds; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamFloat {
	float Min; // 0x40
	float Max; // 0x44
};

struct UMaterialExpressionFunctionOutput {
	FName OutputName; // 0x48
	FString Description; // 0x50
	int32_t SortPriority; // 0x60
	FExpressionInput A; // 0x64
	char bLastPreviewed : 1; // 0x78
	FGuid ID; // 0x7c
};

struct UPlatformCalloutButtonUserWidget {
	bool bExecutePressReleaseActions; // 0x458
};

struct UMaterialExpressionMin {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	float ConstA; // 0x70
	float ConstB; // 0x74
};

struct UAIPerceptionComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xe8
	UAISense* DominantSense; // 0xf8
	AAIController* AIOwner; // 0x110
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x198
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x1a8
};

struct UIntervalGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x40
	UTransformProxy* TransformProxy; // 0x58
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x60
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x70
	UGizmoComponentAxisSource* AxisYSource; // 0x98
	UGizmoComponentAxisSource* AxisZSource; // 0xa0
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

struct ABaseGun_BP_C {
	UFPRigStaticMeshComponent* ADSSightStaticMesh_1P; // 0x4d0
	UFPRigStaticMeshComponent* HipSightStaticMesh_1P; // 0x4d8
	UFPRigStaticMeshComponent* BarrelStaticMesh_1P; // 0x4e0
	UFPRigSkeletalMeshComponent* BaseSkeletalMesh_1P; // 0x4e8
	UGameplayEffectsComponent* GameplayEffects; // 0x4f0
	ULaserSightComponent* LaserSight; // 0x4f8
	UWeaponAttachmentComponent* WeaponAttachment; // 0x500
};

struct UChallengeMonitorComponent {
	FMulticastInlineDelegate OnChallengeSuccess; // 0xe8
	FMulticastInlineDelegate OnChallengeFailure; // 0xf8
	FMulticastInlineDelegate OnChallengeObjectivesUpdated; // 0x108
	bool bGauntlet; // 0x118
	FChallengeIndexPair ChallengeIndex; // 0x11c
	TArray<UChallengeObjectiveTracker*> ObjectiveTrackers; // 0x130
};

struct UPhysPropComponent {
	UStaticMesh* MeshSwapOnImpulse; // 0x118
	TArray<UStaticMesh*> SpawnAdditionalMeshesOnDeath; // 0x120
	FCollisionProfileName SpawnedMeshCollisionProfile; // 0x130
	bool bDeleteOnImpulse; // 0x138
	float DeletionDelay; // 0x13c
	bool bActivateParticleOnFirstImpulseOnly; // 0x140
	UAkAudioEvent* BounceAudioEvent; // 0x148
	UAkAudioEvent* BaseMeshDestructionAudioEvent; // 0x150
	float MinSpeedForBounceAudio; // 0x158
	float BounceCooldown; // 0x15c
	bool bSingleImpactSound; // 0x164
	float LinearStrengthScale; // 0x168
	float LinearStrengthBias; // 0x16c
	float RadialStrengthScale; // 0x170
	float RadialStrengthBias; // 0x174
};

struct UAISpawnDeckGeneratorMod {
	TArray<FAISpawnCardRule> SpawnCardRulesToAdd; // 0xd0
	FGameplayTagQuery SpawnCardRemovalTagQuery; // 0xe0
	TArray<UAISpawnDeckGenerator*> SpawnDeckGeneratorsToAdd; // 0x128
	FGameplayTagContainer SpawnDeckTagsToAdd; // 0x138
	bool bUseTargetDeckTagQuery; // 0x158
	FGameplayTagQuery TargetDeckTagQuery; // 0x160
};

struct UInAppPurchaseRestoreCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAnimContext_NavPathNode {
	int32_t NodeIndex; // 0x90
};

struct UHalfSpaceComponent {
	TArray<FRotator> HalfSpaces; // 0x4b0
};

struct UAnimationSettings {
	int32_t CompressCommandletVersion; // 0x40
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x48
	bool ForceRecompression; // 0x58
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x59
	bool bForceBelowThreshold; // 0x5a
	bool bFirstRecompressUsingCurrentOrDefault; // 0x5b
	bool bRaiseMaxErrorToExisting; // 0x5c
	bool bEnablePerformanceLog; // 0x5d
	bool bStripAnimationDataOnDedicatedServer; // 0x5e
	bool bTickAnimationOnSkeletalMeshInit; // 0x5f
};

struct UParticleModuleVelocityCone {
	FRawDistributionFloat Angle; // 0x40
	FRawDistributionFloat Velocity; // 0x70
	FVector Direction; // 0xa0
};

struct UEnvQueryTest_CheckGameplayTags {
	FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0x208
	bool bUseTagQuery; // 0x280
	FAIDataProviderGameplayTagContainerValue TagsToCheck; // 0x288
	EGameplayContainerMatchType DefaultCheckOption; // 0x2d8
	FAIDataProviderIntValue CheckOption; // 0x2e0
};

struct UMovieSceneFolder {
	FName FolderName; // 0x30
	TArray<UMovieSceneFolder*> ChildFolders; // 0x38
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x48
	TArray<FString> ChildObjectBindingStrings; // 0x58
};

struct UItemAnimationDataComponent {
	FWeaponAnimationConfig WeaponAnimationConfig; // 0x160
	UAnimInstance* FirstPersonLocomotionAnimInstance; // 0x180
	UAnimInstance* FirstPersonAdditiveAnimInstance; // 0x188
	UAnimInstance* FirstPersonPostProcessAnimInstance; // 0x190
	TArray<UAnimMontage*> FirstPersonMantleMontages; // 0x198
	FGameplayTag ThirdPersonAnimationStance; // 0x1a8
	UMontageSet* ThirdPersonGrabItemMontageSet; // 0x1b0
	FItemAnimationDataTuning ItemAnimationDataTuning; // 0x1b8
};

struct USplineBasedPlacementComp {
	FGameplayTag SplineCompTag; // 0x168
	int32_t SegmentStartIndex; // 0x170
	int32_t SegmentEndIndex; // 0x174
	float DistanceInterval; // 0x178
	float CornerSpacing; // 0x17c
	bool InheritSplineRotation; // 0x180
	bool bInheritSplineYawRotation; // 0x181
};

struct UNiagaraDataInterfaceAudioSubmix {
	USoundSubmix* Submix; // 0x38
};

struct UMaterialExpressionRuntimeVirtualTextureOutput {
	FExpressionInput BaseColor; // 0x48
	FExpressionInput Specular; // 0x5c
	FExpressionInput Roughness; // 0x70
	FExpressionInput Normal; // 0x84
	FExpressionInput WorldHeight; // 0x98
	FExpressionInput Opacity; // 0xac
	FExpressionInput Mask; // 0xc0
};

struct UScrollBox {
	FScrollBoxStyle WidgetStyle; // 0x160
	FScrollBarStyle WidgetBarStyle; // 0x3a8
	USlateWidgetStyleAsset* Style; // 0x8c0
	USlateWidgetStyleAsset* BarStyle; // 0x8c8
	EOrientation Orientation; // 0x8d0
	ESlateVisibility ScrollBarVisibility; // 0x8d1
	EConsumeMouseWheel ConsumeMouseWheel; // 0x8d2
	FVector2D ScrollbarThickness; // 0x8d4
	FMargin ScrollbarPadding; // 0x8dc
	bool AlwaysShowScrollbar; // 0x8ec
	bool AlwaysShowScrollbarTrack; // 0x8ed
	bool bScrollBarHasSizeWhenNotInUse; // 0x8ee
	bool bHandleNavigation; // 0x8ef
	bool AllowOverscroll; // 0x8f0
	bool bAnimateWheelScrolling; // 0x8f1
	EDescendantScrollDestination NavigationDestination; // 0x8f2
	float NavigationScrollPadding; // 0x8f4
	EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8f8
	bool bAllowRightClickDragScrolling; // 0x8f9
	float WheelScrollMultiplier; // 0x8fc
	float ChildSpacing; // 0x900
	float ScrollAnimationSpeed; // 0x904
	FMulticastInlineDelegate OnUserScrolled; // 0x908
};

struct UDistributionVectorConstantCurve {
	FInterpCurveVector ConstantCurve; // 0x40
	char bLockAxes : 1; // 0x58
	EDistributionVectorLockFlags LockedAxes; // 0x5c
};

struct UBTService_TacticalSensor {
	FGameplayTagQuery AllowSensorTagQuery; // 0x78
};

struct UAnimNotify_PauseResumeAI {
	EAIPauseResume Mode; // 0x40
	FString Reason; // 0x48
};

struct UMeshMaterialParamsTrait {
	UMeshMaterialParamSet* MaterialParamSet; // 0x30
};

struct UBTDecorator_IsBBEntryOfClass {
	UObject* TestClass; // 0x98
};

struct UMaterialExpressionDepthOfFieldFunction {
	EDepthOfFieldFunctionValue FunctionValue; // 0x48
	FExpressionInput Depth; // 0x4c
};

struct AFoliageDensityVolume {
	TMap<EQualitySettings, float> DensityScale; // 0x2d8
	TMap<EQualitySettings, float> LODDistanceScale; // 0x328
};

struct AWindDirectionalSource {
	UWindDirectionalSourceComponent* Component; // 0x2a0
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

struct UNiagaraSimulationStageGeneric {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct ASceneCaptureCube {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x2b0
};

struct UFP_Hero_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x620
	FAnimNode_Root AnimGraphNode_Root; // 0x628
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x658
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x710
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x758
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x780
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x838
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x860
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x918
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x9d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xa20
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xa48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xb08
	FAnimNode_CopyBone AnimGraphNode_CopyBone_3; // 0xb30
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xc40
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0xc68
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0xcb0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xd78
	FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0xe80
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xf70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1078
	FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1180
	FLadderAnimStateFP __CustomProperty_LadderState_0F3C9E314B0681E014F6469FACBD79E6; // 0x1270
	FGobiAnimationState __CustomProperty_GobiAnimState_0F3C9E314B0681E014F6469FACBD79E6; // 0x1280
	FWeaponAnimsFP __CustomProperty_FirstPersonAnimations_0F3C9E314B0681E014F6469FACBD79E6; // 0x12d8
	FHeroAnimStateFP __CustomProperty_HeroAnimState_0F3C9E314B0681E014F6469FACBD79E6; // 0x1318
	FWeaponAnimState __CustomProperty_WeaponAnimState_0F3C9E314B0681E014F6469FACBD79E6; // 0x1344
	FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance_2; // 0x1388
	FHeroAnimStateFP __CustomProperty_HeroAnimState_1B081B93442EDF417CAAFAA777A2C1DE; // 0x1430
	FWeaponAnimsFP __CustomProperty_FirstPersonAnimations_1B081B93442EDF417CAAFAA777A2C1DE; // 0x1460
	FFirstPersonAdditiveState __CustomProperty_AdditiveState_1B081B93442EDF417CAAFAA777A2C1DE; // 0x14a0
	FGobiAnimationState __CustomProperty_GobiAnimationState_1B081B93442EDF417CAAFAA777A2C1DE; // 0x1510
	FWeaponAnimState __CustomProperty_WeaponAnimState_1B081B93442EDF417CAAFAA777A2C1DE; // 0x1568
	FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x15b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1658
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x1680
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1748
	FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0x1770
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1818
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1838
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1880
	FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x1920
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1990
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1a50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1b08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1b30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1b58
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective {
	FExpressionInput WorldPosition; // 0x48
};

struct UGameplayEffectBulletPenetrationComponent {
	FGamePropertyFloatMod BulletPenetrationScaleMod; // 0x250
};

struct UMaterialExpressionSaturate {
	FExpressionInput Input; // 0x48
};

struct UBTDecorator_CheckGameplayTagsOnActor {
	FBlackboardKeySelector ActorToCheck; // 0x70
	bool bUseDataProvider; // 0x98
	EGameplayContainerMatchType TagsToMatch; // 0x99
	FGameplayTagContainer GameplayTags; // 0xa0
	FAIDataProviderGameplayTagQueryContainerValue GameplayTags_DataProvider; // 0xc0
	FString CachedDescription; // 0x138
};

struct UZombieMutationProgressUserWidget {
	UImage* MutationIcon; // 0x458
	UTextBlock* BranchText; // 0x460
	UTextBlock* CostText; // 0x468
	UTextBlock* DescriptionText; // 0x470
	UHorizontalBox* CostContainer; // 0x478
	UCircularProgressBarUserWidget* PreviewRadial; // 0x480
	UCircularProgressBarUserWidget* ProgressRadial; // 0x488
	FText MutationPointsFormatText; // 0x490
	float ProgressAnimDuration; // 0x4a8
};

struct UMovieSceneGeometryCacheTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x60
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

struct USkeletalMeshSimulationComponent {
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0
	AChaosSolverActor* ChaosSolverActor; // 0xf8
	UPhysicsAsset* OverridePhysicsAsset; // 0x100
	bool bSimulating; // 0x108
	bool bNotifyCollisions; // 0x109
	EObjectStateTypeEnum ObjectType; // 0x10a
	float Density; // 0x10c
	float MinMass; // 0x110
	float MaxMass; // 0x114
	ECollisionTypeEnum CollisionType; // 0x118
	float ImplicitShapeParticlesPerUnitArea; // 0x11c
	int32_t ImplicitShapeMinNumParticles; // 0x120
	int32_t ImplicitShapeMaxNumParticles; // 0x124
	int32_t MinLevelSetResolution; // 0x128
	int32_t MaxLevelSetResolution; // 0x12c
	int32_t CollisionGroup; // 0x130
	EInitialVelocityTypeEnum InitialVelocityType; // 0x134
	FVector InitialLinearVelocity; // 0x138
	FVector InitialAngularVelocity; // 0x144
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x150
};

struct UMaterialExpressionAbs {
	FExpressionInput Input; // 0x48
};

struct UNavMeshBasedPlacementComp {
	FGameplayTag ShapeCompTag; // 0x168
	FGameplayTag ExclusionShapeCompTag; // 0x170
	FNavAgentSelector SupportedNavmesh; // 0x178
	UNavigationQueryFilter* QueryFilter; // 0x180
	float SeparationDistance; // 0x188
};

struct USpinBoxWidgetStyle {
	FSpinBoxStyle SpinBoxStyle; // 0x38
};

struct UBoneMapComponent {
	TMap<FGameplayTag, FBoneCollection> BoneMap; // 0xe8
};

struct UMaterialExpressionLightmassReplace {
	FExpressionInput Realtime; // 0x48
	FExpressionInput Lightmass; // 0x5c
};

struct AMaterialInstanceActor {
	TArray<AActor*> TargetActors; // 0x2a0
};

struct UFireModeSingleTraceComponent {
	FFireModeSingleTraceTuning FireModeSingleTraceTuning; // 0x798
};

struct UNiagaraDataInterfaceAudioOscilloscope {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UGizmoRectangleComponent {
	FVector DirectionX; // 0x4d0
	FVector DirectionY; // 0x4dc
	float OffsetX; // 0x4e8
	float OffsetY; // 0x4ec
	float LengthX; // 0x4f0
	float LengthY; // 0x4f4
	float Thickness; // 0x4f8
	char SegmentFlags; // 0x4fc
};

struct APlayerState {
	float Score; // 0x2a0
	int32_t PlayerId; // 0x2a4
	char Ping; // 0x2a8
	char bShouldUpdateReplicatedPing : 1; // 0x2aa
	char bIsSpectator : 1; // 0x2aa
	char bOnlySpectator : 1; // 0x2aa
	char bIsABot : 1; // 0x2aa
	char bIsInactive : 1; // 0x2aa
	char bFromPreviousLevel : 1; // 0x2aa
	int32_t StartTime; // 0x2ac
	ULocalMessage* EngineMessageClass; // 0x2b0
	FString SavedNetworkAddress; // 0x2c0
	FUniqueNetIdRepl UniqueId; // 0x2d0
	APawn* PawnPrivate; // 0x300
	FString PlayerNamePrivate; // 0x380
};

struct UArrowComponent {
	FColor ArrowColor; // 0x4b0
	float ArrowSize; // 0x4b4
	float ScreenSize; // 0x4b8
	char bIsScreenSizeScaled : 1; // 0x4bc
	char bTreatAsASprite : 1; // 0x4bc
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

struct UDynamicSequenceBindingComponent {
	ALevelSequenceActor* LevelSequenceActor; // 0xe8
	FGameplayTagContainer BoundActorAppliedTags; // 0xf0
};

struct UWaterSurfaceComponent {
	UTextureCube* CubemapOverride; // 0x230
	bool SecondaryLayer; // 0x240
	UWaterSimulation* WaterSim; // 0x248
};

struct APhysicsThruster {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x2a0
};

struct ASocialSpacePlayerState {
	FPlayerStateLeaverPenalties LeaverPenalties; // 0x830
};

struct UPlatformCalloutButton_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
	UImage* BG; // 0x468
	UOverlay* BGContainer; // 0x470
	UImage* BGHover_A; // 0x478
	UPlatformCalloutImage_WBP_C* CalloutImage; // 0x480
	UBaseTextBlock_C* CalloutText; // 0x488
	UImage* Frame; // 0x490
	UHorizontalBox* HBox; // 0x498
	UOverlay* HoverContainer_B; // 0x4a0
	FText Text; // 0x4a8
	FName Action; // 0x4c0
	FSlateColor TextColor; // 0x4c8
	FSlateFontInfo TextFont; // 0x4f8
	bool bShowBackground; // 0x558
	bool bImageOnRight; // 0x559
	bool bShowGamepad; // 0x55a
	bool bShowKey; // 0x55b
	ESlateVisibility GamepadVisibility; // 0x55c
	ESlateVisibility KeyVisibility; // 0x55d
	bool bEnableVisibilityToggles; // 0x55e
};

struct UTRSSubtitlePluginSettings {
	TSoftClassPtr<UObject> SubtitleWidgetClass; // 0x40
};

struct UParticleModuleMeshRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct APointLight {
	UPointLightComponent* PointLightComponent; // 0x2b0
};

struct USubtitleListUserWidget {
	UGobiUserWidget* SubtitleClass; // 0x458
	int32_t MaxSubtitles; // 0x460
	float DefaultDisplayTime; // 0x464
	FText SpeakerTextFormat; // 0x468
	TArray<FSubtitleWidgetList> CurrentSubtitles; // 0x480
	int32_t MaxEntries; // 0x490
};

struct UHealthMaterialModifier {
	FGameplayTag MeshTag; // 0xe8
	FMeshMaterialParamValueMapper Modifier; // 0xf0
	USkeletalMeshComponent* SkeletalMesh; // 0x118
	UHealthComponent* HealthComponent; // 0x120
};

struct ATurretGobiSwitchActor {
	FMulticastInlineDelegate FlameTurretFilled; // 0x308
	UParticleSystemComponent* FlameJet; // 0x328
	UParticleSystemComponent* PilotLight; // 0x330
	UBoxComponent* DamageVolume; // 0x338
	TArray<UGameplayEffect*> EffectClass; // 0x340
	UGobiDamageType* DamageType; // 0x350
	float TurretDamageCooldown; // 0x358
	float DeactivateFireCooldown; // 0x35c
	float AboveMinHealthDamageModifier; // 0x360
	float BelowMinHealthDamageModifier; // 0x364
	float MinHealthModifierThreshold; // 0x368
};

struct UMissionsCompletedAchievement {
	TArray<FDataTableRowHandle> Maps; // 0xb8
	TArray<EMissionDifficulty> Difficulties; // 0xc8
};

struct UTraitsComponent {
	FMulticastInlineDelegate OnTraitsAppliedDynamic; // 0x100
	TArray<FTraitMapping> TraitMap; // 0x140
	TArray<UTraitCollection*> AppliedTraitCollections; // 0x150
	TArray<UTraitCollection*> Replicated_AppliedTraitCollections; // 0x160
	TArray<FSingularTraitMapping> SingularTraitMap; // 0x170
	TArray<UTrait*> AppliedSingularTraits; // 0x180
	TArray<UTrait*> Replicated_AppliedSingularTraits; // 0x190
	int32_t RandomSeed; // 0x1a0
};

struct UChallengeObjectivePlayerSlotTracker {
	EGobiTeam SlotsToWatch; // 0x48
};

struct USuicideComponent {
	FMulticastInlineDelegate OnSuicideCookStarted; // 0x1d8
	FMulticastInlineDelegate OnSuicideCookEnded; // 0x1e8
	FSuicideConfig SuicideConfig; // 0x218
	UGobiCharacterMovementComponent* MovementComponent; // 0x350
};

struct UPostRoundReadyButtonUserWidget {
	UHorizontalBox* ReadyPips; // 0x458
	UHorizontalBox* PvPReadyPips; // 0x460
	USpacer* ReadyPipSpacer; // 0x468
};

struct UAISenseConfig_Watched {
	UAISense_Watched* Implementation; // 0x50
	float WarnTargetNearbyRadius; // 0x58
	float WarnTargetLoseNearbyRadius; // 0x5c
	float WatchedRadius; // 0x60
	float WatchedAngleDegrees; // 0x64
	float ListenerSizeRadiusMultModifier; // 0x68
	float ListenerSizeRadiusMinimum; // 0x6c
	float GlobalWatchTimeLimitMS; // 0x70
	float IndividualAggroWatchTimeLimitMS; // 0x74
	float IndividualAlertWatchTimeLimitMS; // 0x78
	float CenterNoiseOffsetDist; // 0x7c
	UGameplayEffect* ApplyListenerEffectOnWatched; // 0x80
	UGameplayEffect* ApplyListenerEffectOnCenterWatched; // 0x88
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x90
	char bResetIndividualTimersOnLookaway : 1; // 0x94
	char bResetGlobalTimerOnLookaway : 1; // 0x94
	char bCenterWatchRequiresFlashlight : 1; // 0x94
};

struct UNiagaraDataInterfaceCamera {
	int32_t PlayerControllerIndex; // 0x38
};

struct ATRSAssociativePlane {
	UModel* PlaneModel; // 0x370
	UBrushComponent* PlaneBrushComponent; // 0x378
	bool bAutomaticAssociationBounds; // 0x3a0
	float AssociationBoundsWidth; // 0x3a4
	EAssociativePlaneVersion Version; // 0x3a8
};

struct UNiagaraDataInterfaceCurveBase {
	TArray<float> ShaderLUT; // 0x38
	float LUTMinTime; // 0x48
	float LUTMaxTime; // 0x4c
	float LUTInvTimeRange; // 0x50
	float LUTNumSamplesMinusOne; // 0x54
	char bUseLUT : 1; // 0x58
};

struct UPanelSlot {
	UPanelWidget* Parent; // 0x30
	UWidget* Content; // 0x38
};

struct UAkDurationCallbackInfo {
	float Duration; // 0x40
	float EstimatedDuration; // 0x44
	int32_t AudioNodeID; // 0x48
	int32_t MediaID; // 0x4c
	bool bStreaming; // 0x50
};

struct UAimAssistTargetComponent {
	bool bStartRegistered; // 0x150
	float MagnetismScale; // 0x154
	float FrictionScale; // 0x158
	bool bIncludeTargetLocationAsADSSnapLocation; // 0x15c
	FGameplayTag ADSSnapTargetedComponentGameplayTag; // 0x160
	TArray<FName> ADSSnapTargetedComponentSocketNames; // 0x168
	float TargetScoringBonus; // 0x178
	FName SphereSnappingSocketOrBone; // 0x17c
	FVector TargetLocationOffset; // 0x184
	float SphereInternalRadius; // 0x190
	float SphereExternalRadius; // 0x194
	bool bInvalidateOnDeath; // 0x198
};

struct USoundNodeWavePlayer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x60
	USoundWave* SoundWave; // 0x88
	char bLooping : 1; // 0x90
};

struct AGobiPlayerCameraManager {
	ACameraManagerDebugger* CameraManagerDebugger; // 0x2878
};

struct ULevelSequenceBurnInOptions {
	bool bUseBurnIn; // 0x30
	FSoftClassPath BurnInClass; // 0x38
	ULevelSequenceBurnInInitSettings* Settings; // 0x50
};

struct UMountedWeaponComponent {
	FMulticastInlineDelegate OnDetached; // 0xe8
	bool bTeleportToPreMountLocation; // 0xf8
	FDataTableRowHandle MountedWeaponItemHandle; // 0x100
	FGameplayTag RotatedComponentTag; // 0x120
	FGameplayTag AttachComponentGameplayTag; // 0x128
	FName AttachComponentBoneName; // 0x130
	FVector AttachmentRelativeLocation; // 0x138
	FRotator AttachmentRelativeRotation; // 0x144
	FVector2D ViewPitchClampRange; // 0x150
	FVector2D ViewYawClampRange; // 0x158
	FMulticastInlineDelegate OnWeaponMounted; // 0x160
	FMulticastInlineDelegate OnWeaponDismounted; // 0x170
	FName ViewLimitLabel; // 0x180
	float RemoteViewYaw; // 0x188
};

struct UBTDecorator_IsAtLocation {
	float AcceptableRadius; // 0x98
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xa0
	FAIDistanceType GeometricDistanceType; // 0xd8
	char bUseParametrizedRadius : 1; // 0xdc
	char bUseNavAgentGoalLocation : 1; // 0xdc
	char bPathFindingBasedTest : 1; // 0xdc
};

struct UGameplayEffectDamageAccumulatorComponent {
	FGamePropertyFloatMod StumbleDamageScalarMod; // 0x240
};

struct USteeringBehavior_Arrive {
	UAnimContext_Transform* TargetLocation; // 0x58
	EArrivalMode ArrivalMode; // 0x60
	float ArrivedDistance; // 0x64
	float SlowdownDistance; // 0x68
	FVector FocusOffsetFromTarget; // 0x6c
};

struct UMaterialExpressionMapARPassthroughCameraUV {
	FExpressionInput Coordinates; // 0x48
};

struct AEmitter {
	UParticleSystemComponent* ParticleSystemComponent; // 0x2a0
	char bDestroyOnSystemFinish : 1; // 0x2a8
	char bPostUpdateTickGroup : 1; // 0x2a8
	char bCurrentlyActive : 1; // 0x2a8
	FMulticastInlineDelegate OnParticleSpawn; // 0x2b0
	FMulticastInlineDelegate OnParticleBurst; // 0x2c0
	FMulticastInlineDelegate OnParticleDeath; // 0x2d0
	FMulticastInlineDelegate OnParticleCollide; // 0x2e0
};

struct UMaterialExpressionSceneDepth {
	EMaterialSceneAttributeInputMode InputMode; // 0x48
	FExpressionInput Input; // 0x4c
	FExpressionInput Coordinates; // 0x60
	FVector2D ConstInput; // 0x74
};

struct UUserDefinedStruct {
	EUserDefinedStructureStatus Status; // 0xc8
	FGuid Guid; // 0xcc
};

struct UAudioSinkSystem {
	UMediaPlayer* MediaPlayer; // 0x88
};

struct UDatasmithStaticMeshGLTFImportData {
	FString SourceMeshName; // 0x30
};

struct ARecastNavMesh {
	char bDrawTriangleEdges : 1; // 0x480
	char bDrawPolyEdges : 1; // 0x480
	char bDrawFilledPolys : 1; // 0x480
	char bDrawNavMeshEdges : 1; // 0x480
	char bDrawTileBounds : 1; // 0x480
	char bDrawPathCollidingGeometry : 1; // 0x480
	char bDrawTileLabels : 1; // 0x480
	char bDrawPolygonLabels : 1; // 0x480
	char bDrawDefaultPolygonCost : 1; // 0x481
	char bDrawLabelsOnPathNodes : 1; // 0x481
	char bDrawNavLinks : 1; // 0x481
	char bDrawFailedNavLinks : 1; // 0x481
	char bDrawClusters : 1; // 0x481
	char bDrawOctree : 1; // 0x481
	char bDrawOctreeDetails : 1; // 0x481
	char bDrawMarkedForbiddenPolys : 1; // 0x481
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x482
	char bDrawNavMesh : 1; // 0x482
	float DrawOffset; // 0x484
	char bFixedTilePoolSize : 1; // 0x488
	int32_t TilePoolSize; // 0x48c
	float TileSizeUU; // 0x490
	float CellSize; // 0x494
	float CellHeight; // 0x498
	float AgentRadius; // 0x49c
	float AgentHeight; // 0x4a0
	float AgentMaxHeight; // 0x4a4
	float AgentMaxSlope; // 0x4a8
	float AgentMaxStepHeight; // 0x4ac
	float MinRegionArea; // 0x4b0
	float MergeRegionSize; // 0x4b4
	float MaxSimplificationError; // 0x4b8
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x4bc
	int32_t TileNumberHardLimit; // 0x4c0
	int32_t PolyRefTileBits; // 0x4c4
	int32_t PolyRefNavPolyBits; // 0x4c8
	int32_t PolyRefSaltBits; // 0x4cc
	FVector NavMeshOriginOffset; // 0x4d0
	float DefaultDrawDistance; // 0x4dc
	float DefaultMaxSearchNodes; // 0x4e0
	float DefaultMaxHierarchicalSearchNodes; // 0x4e4
	ERecastPartitioning RegionPartitioning; // 0x4e8
	ERecastPartitioning LayerPartitioning; // 0x4e9
	int32_t RegionChunkSplits; // 0x4ec
	int32_t LayerChunkSplits; // 0x4f0
	char bSortNavigationAreasByCost : 1; // 0x4f4
	char bPerformVoxelFiltering : 1; // 0x4f4
	char bMarkLowHeightAreas : 1; // 0x4f4
	char bFilterLowSpanSequences : 1; // 0x4f4
	char bFilterLowSpanFromTileCache : 1; // 0x4f4
	char bDoFullyAsyncNavDataGathering : 1; // 0x4f4
	char bUseBetterOffsetsFromCorners : 1; // 0x4f4
	char bStoreEmptyTileLayers : 1; // 0x4f4
	char bUseVirtualFilters : 1; // 0x4f5
	char bAllowNavLinkAsPathEnd : 1; // 0x4f5
	char bUseVoxelCache : 1; // 0x4f5
	float TileSetUpdateInterval; // 0x4f8
	float HeuristicScale; // 0x4fc
	float VerticalDeviationFromGroundCompensation; // 0x500
};

struct UPhysicsConstraintComponent {
	AActor* ConstraintActor1; // 0x230
	FConstrainComponentPropName ComponentName1; // 0x238
	AActor* ConstraintActor2; // 0x240
	FConstrainComponentPropName ComponentName2; // 0x248
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x260
	FMulticastInlineDelegate OnConstraintBroken; // 0x268
	FConstraintInstance ConstraintInstance; // 0x278
};

struct UBTDecorator_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UEnvQueryTest_Pathfinding {
	EEnvTestPathfinding TestMode; // 0x208
	UEnvQueryContext* Context; // 0x210
	FAIDataProviderBoolValue PathFromContext; // 0x218
	FAIDataProviderBoolValue SkipUnreachable; // 0x250
	UNavigationQueryFilter* FilterClass; // 0x288
};

struct UFacialAnimationData {
	UPoseAsset* FacePoseAsset; // 0x38
	FName ExpressionCurves[0xd]; // 0x40
	float ExpressionIntensity[0x5]; // 0xa8
	FName LipsyncPhonemeVisemeMapping[0x28]; // 0xbc
};

struct UParticleModuleSourceMovement {
	FRawDistributionVector SourceMovementScale; // 0x38
};

struct UScoreboardUserWidget {
	TArray<FScoreboardPlayerData> MyTeamPlayers; // 0x458
	TArray<FScoreboardPlayerData> EnemyTeamPlayers; // 0x468
};

struct AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x2a0
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

struct UTRSPostEventEndNotification {
	FMulticastInlineDelegate OnEndOfEvent; // 0x40
};

struct UTreeView {
	FDelegate BP_OnGetItemChildren; // 0x3c0
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3d0
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
	FUniqueNetIdRepl PlayerId; // 0x168
	double LastReceiveTime; // 0x1d8
	TArray<UChannel*> ChannelsToTick; // 0x1518
};

struct AMainMenuGameMode {
	bool bLoadGlobalAssets; // 0x488
	TSoftClassPtr<UObject> DefaultZombiePawnClass; // 0x490
	float RespawnTime; // 0x4b8
};

struct UMediaPlaylist {
	TArray<UMediaSource*> Items; // 0x30
};

struct UMaterialExpressionParameter {
	FName ParameterName; // 0x48
	FGuid ExpressionGUID; // 0x50
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
	char bBlockInput : 1; // 0x61
	char bCollideWhenPlacing : 1; // 0x62
	char bFindCameraComponentWhenViewTarget : 1; // 0x62
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x62
	char bIgnoresOriginShifting : 1; // 0x62
	char bEnableAutoLODGeneration : 1; // 0x62
	char bIsEditorOnlyActor : 1; // 0x62
	char bActorSeamlessTraveled : 1; // 0x62
	char bReplicates : 1; // 0x62
	char bCanBeInCluster : 1; // 0x63
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x63
	char bActorEnableCollision : 1; // 0x64
	char bActorIsBeingDestroyed : 1; // 0x64
	EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x65
	EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x66
	ENetRole RemoteRole; // 0x67
	FRepMovement ReplicatedMovement; // 0x80
	float InitialLifeSpan; // 0xbc
	char bIgnoreGlobalTimeDilation : 1; // 0xc0
	float CustomTimeDilation; // 0xc4
	FRepAttachment AttachmentReplication; // 0xd0
	AActor* Owner; // 0x110
	FName NetDriverName; // 0x118
	ENetRole Role; // 0x120
	ENetDormancy NetDormancy; // 0x121
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x122
	EAutoReceiveInput AutoReceiveInput; // 0x123
	int32_t InputPriority; // 0x124
	UInputComponent* InputComponent; // 0x128
	float NetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateFrequency; // 0x138
	float MinNetUpdateFrequency; // 0x13c
	float NetPriority; // 0x140
	APawn* Instigator; // 0x148
	TArray<AActor*> Children; // 0x150
	USceneComponent* RootComponent; // 0x160
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x168
	TArray<FName> Layers; // 0x180
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x190
	TArray<FName> Tags; // 0x1a0
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x1b0
	FMulticastSparseDelegate OnActorEndOverlap; // 0x1b1
	FMulticastSparseDelegate OnBeginCursorOver; // 0x1b2
	FMulticastSparseDelegate OnEndCursorOver; // 0x1b3
	FMulticastSparseDelegate OnClicked; // 0x1b4
	FMulticastSparseDelegate OnReleased; // 0x1b5
	FMulticastSparseDelegate OnInputTouchBegin; // 0x1b6
	FMulticastSparseDelegate OnInputTouchEnd; // 0x1b7
	FMulticastSparseDelegate OnInputTouchEnter; // 0x1b8
	FMulticastSparseDelegate OnInputTouchLeave; // 0x1b9
	FMulticastSparseDelegate OnActorHit; // 0x1ba
	FMulticastSparseDelegate OnDestroyed; // 0x1bb
	FMulticastSparseDelegate OnEndPlay; // 0x1bc
	TArray<UActorComponent*> InstanceComponents; // 0x270
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x280
};

struct UGameplayEffectLifeStateBase {
	ULifeStateBase* LifeStateToAffect; // 0x240
	FGameplayTagContainer TagsToStripFromAppliedTags; // 0x248
};

struct APlayerController {
	UPlayer* Player; // 0x308
	APawn* AcknowledgedPawn; // 0x310
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x318
	AHUD* MyHUD; // 0x320
	bool bNoRollRotationOnPossess; // 0x328
	APlayerCameraManager* PlayerCameraManager; // 0x330
	APlayerCameraManager* PlayerCameraManagerClass; // 0x338
	bool bAutoManageActiveCameraTarget; // 0x340
	FRotator TargetViewRotation; // 0x344
	float SmoothTargetViewRotationSpeed; // 0x35c
	TArray<AActor*> HiddenActors; // 0x368
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x378
	float LastSpectatorStateSynchTime; // 0x38c
	FVector LastSpectatorSyncLocation; // 0x390
	FRotator LastSpectatorSyncRotation; // 0x39c
	int32_t ClientCap; // 0x3a8
	UCheatManager* CheatManager; // 0x3b0
	UCheatManager* CheatClass; // 0x3b8
	UPlayerInput* PlayerInputClassOverride; // 0x3c0
	UPlayerInput* PlayerInput; // 0x3c8
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x3d0
	char bPlayerIsWaiting : 1; // 0x450
	char NetPlayerIndex; // 0x454
	UNetConnection* PendingSwapConnection; // 0x490
	UNetConnection* NetConnection; // 0x498
	float InputYawScale; // 0x4ac
	float InputPitchScale; // 0x4b0
	float InputRollScale; // 0x4b4
	char bShowMouseCursor : 1; // 0x4b8
	char bEnableClickEvents : 1; // 0x4b8
	char bEnableTouchEvents : 1; // 0x4b8
	char bEnableMouseOverEvents : 1; // 0x4b8
	char bEnableTouchOverEvents : 1; // 0x4b8
	char bForceFeedbackEnabled : 1; // 0x4b8
	float ForceFeedbackScale; // 0x4bc
	TArray<FKey> ClickEventKeys; // 0x4c0
	EMouseCursor DefaultMouseCursor; // 0x4d0
	EMouseCursor CurrentMouseCursor; // 0x4d1
	ECollisionChannel DefaultClickTraceChannel; // 0x4d2
	ECollisionChannel CurrentClickTraceChannel; // 0x4d3
	float HitResultTraceDistance; // 0x4d4
	uint16_t SeamlessTravelCount; // 0x4d8
	uint16_t LastCompletedSeamlessTravelCount; // 0x4da
	FMulticastInlineDelegate OnPreUpdatePawnRotation; // 0x4e0
	FMulticastInlineDelegate OnPostUpdatePawnRotation; // 0x4f0
	UInputComponent* InactiveStateInputComponent; // 0x588
	char bShouldPerformFullTickWhenPaused : 1; // 0x590
	UTouchInterface* CurrentTouchInterface; // 0x5a8
	ASpectatorPawn* SpectatorPawn; // 0x600
	bool bIsLocalPlayerController; // 0x60c
	FVector SpawnLocation; // 0x610
};

struct UAnimNotify_Explode {
	FGameplayTag ExplosionComponentTag; // 0x40
};

struct UParticleModuleVelocityInheritParent {
	FRawDistributionVector Scale; // 0x40
};

struct UEnvQueryTest_EnemyDamageBase {
	FGameplayTagQuery TagRequirements; // 0x208
	FGameplayTagQuery FilterTagRequirements; // 0x250
	bool bOwnerDamageOnly; // 0x298
};

struct UApplyEffectItemGrapplerComponent {
	bool bUseTraceIfNoGrappler; // 0x538
};

struct USqueezeComponent {
	FMulticastInlineDelegate OnSqueezeEnded; // 0x1e0
	FSqueezeMoveTickData MoveTickData; // 0x2f8
	AGobiCharacter* ReplicatedTargetCharacter; // 0x318
	bool bGameplayTargetAttached; // 0x320
	TArray<UAnimMontage*> SqueezeMontages; // 0x328
	TArray<UAnimMontage*> PinMontages; // 0x338
	TArray<UAnimMontage*> MissMontages; // 0x348
	TArray<UAnimMontage*> PinMissMontages; // 0x358
	TArray<UAnimMontage*> StopMontages; // 0x368
	TArray<UAnimMontage*> PinStopMontages; // 0x378
	FGameplayTagContainer AppliedTags; // 0x388
	FGameplayTagQuery BlockingTags; // 0x3a8
	FGameplayTagQuery BlockingTargetTags; // 0x3f0
	FGameplayTagContainer CooldownTags; // 0x438
	FGameplayTag GrabPrimitiveComponentTag; // 0x458
	TArray<UGameplayEffect*> ApplyEffectsToTarget; // 0x460
	TArray<UGameplayEffect*> ApplyNotifyEffectsToTarget; // 0x470
	TArray<UGameplayEffect*> ApplyEffectsWhileGrabbing; // 0x480
	TArray<UGameplayEffect*> ApplyMissedEffects; // 0x490
	TArray<UGameplayEffect*> ApplyEndingEffectsToTarget; // 0x4a0
	float MaxDistanceToAttachPoint; // 0x4b0
	float MaxDistanceToServerValidateGrab; // 0x4b4
	float MaxAngleToSqueeze; // 0x4b8
	float MaxDistanceToContinueSqueeze; // 0x4bc
	float MaxDistanceToContinuePin; // 0x4c0
	float TestAroundDistance; // 0x4c4
	float TestUpDistance; // 0x4c8
	float BestCandidateForwardOffset; // 0x4cc
	FVector2D TargetViewPitch; // 0x4d0
	FVector2D TargetPinnedViewPitch; // 0x4d8
	FVector2D TargetViewYaw; // 0x4e0
	float SqueezeTargetMoveSpeedOverride; // 0x4e8
	FSqueezeMoveToReticleData MoveToReticleData; // 0x4ec
	FSqueezeMoveToReticleData PinMoveToReticleData; // 0x4fc
	bool bUsesSecondaryButton; // 0x50c
	bool bUseTargetingReticle; // 0x50d
	bool bCancelOnSprintPressed; // 0x50e
	float SqueezeVolumeTestPadding; // 0x510
	float SqueezeMoveBackDuration; // 0x514
	float SqueezeMoveBackMaxDistance; // 0x518
	FName GrabBone; // 0x51c
	FName SqueezeMontagesName; // 0x524
	FName ViewLimitLabel; // 0x52c
	FSqueezeTuning SqueezeTuning; // 0x534
};

struct UEnvQueryTest_IsSmartActorEnabledForAI {
	bool bUseQueryOwner; // 0x208
	FAIDataProviderUObjectValue AIClass; // 0x210
};

struct UVertexAnimationComponent {
	UStaticMesh* VertexAnimationMesh; // 0xe8
	UStaticMeshComponent* VertexAnimationMeshComponent; // 0xf0
	UMaterialInstanceDynamic* DynamicVertexAnimMeshMaterial; // 0xf8
	float VertexAnimationLifetime; // 0x100
};

struct UBTDecorator_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x70
	float CooldownDuration; // 0x78
	bool bAddToExistingDuration; // 0x7c
};

struct UProjectileMovementComponent {
	float InitialSpeed; // 0x128
	float MaxSpeed; // 0x12c
	char bRotationFollowsVelocity : 1; // 0x130
	char bRotationRemainsVertical : 1; // 0x130
	char bShouldBounce : 1; // 0x130
	char bInitialVelocityInLocalSpace : 1; // 0x130
	char bForceSubStepping : 1; // 0x130
	char bSimulationEnabled : 1; // 0x130
	char bSweepCollision : 1; // 0x130
	char bIsHomingProjectile : 1; // 0x130
	char bBounceAngleAffectsFriction : 1; // 0x131
	char bIsSliding : 1; // 0x131
	char bInterpMovement : 1; // 0x131
	char bInterpRotation : 1; // 0x131
	float PreviousHitTime; // 0x134
	FVector PreviousHitNormal; // 0x138
	float ProjectileGravityScale; // 0x144
	float Buoyancy; // 0x148
	float Bounciness; // 0x14c
	float Friction; // 0x150
	float BounceVelocityStopSimulatingThreshold; // 0x154
	float MinFrictionFraction; // 0x158
	FMulticastInlineDelegate OnProjectileBounce; // 0x160
	FMulticastInlineDelegate OnProjectileStop; // 0x170
	float HomingAccelerationMagnitude; // 0x180
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x184
	float MaxSimulationTimeStep; // 0x18c
	int32_t MaxSimulationIterations; // 0x190
	int32_t BounceAdditionalIterations; // 0x194
	float InterpLocationTime; // 0x198
	float InterpRotationTime; // 0x19c
	float InterpLocationMaxLagDistance; // 0x1a0
	float InterpLocationSnapToTargetDistance; // 0x1a4
};

struct UARTrackedObject {
	UARCandidateObject* DetectedObject; // 0xe8
};

struct UAnimContext_GameplayTags {
	UAnimContext_Actor* Actor; // 0x50
};

struct ALootSpawnerCrate {
	USceneComponent* DefaultSceneRoot; // 0x2a0
	UStaticMeshComponent* Crate; // 0x2a8
	UStaticMeshComponent* Lid; // 0x2b0
	ULootSpawnerComponent* LootSpawner; // 0x2b8
	TArray<USceneComponent*> ItemLocations; // 0x2c0
	USceneComponent* ItemLocation0; // 0x2d0
	USceneComponent* ItemLocation1; // 0x2d8
	USceneComponent* ItemLocation2; // 0x2e0
	USceneComponent* ItemLocation3; // 0x2e8
	USceneComponent* ItemLocation4; // 0x2f0
	USceneComponent* ItemLocation5; // 0x2f8
	USceneComponent* ItemLocation6; // 0x300
	USceneComponent* ItemLocation7; // 0x308
	USceneComponent* ItemLocation8; // 0x310
	UBoxComponent* NavModifierVolume; // 0x318
	UPingableComponent* Pingable; // 0x320
	UBoxComponent* PingableVolume; // 0x328
	USphereComponent* UsableSphere; // 0x330
	UUsableComponent* Usable; // 0x338
	UGobiNavModifierComponent* GobiNavModifier; // 0x340
	UItemAkBankComponent* ItemAkBank; // 0x348
	UUsableHighlightComponent* UsableHighlight; // 0x350
	UGameplayEffectsComponent* GameplayEffects; // 0x358
	UItemAudioComponent* ItemAudio; // 0x360
	bool bEnableGobiNavModifier; // 0x368
	bool bDynamicLoot; // 0x369
	FGameplayTagContainer ValidItemTags; // 0x370
	FGameplayTagContainer DisallowedItemTags; // 0x390
	UStaticMesh* OpenedCrateMesh; // 0x3b0
	UMeshMaterialParamSet* OpenedCrateMeshMaterialParamSet; // 0x3b8
	FVector2D ItemCountRange; // 0x3c4
	TArray<FGameplayTagContainer> ItemPickupTagsArray; // 0x3d0
	FGameplayTagQuery ItemShortageQuery; // 0x3e0
	float ItemShortageScalar; // 0x428
	bool bAlwaysSpawned; // 0x42c
	AItemPickup* SeedItemClass; // 0x430
	bool bContainerOpened; // 0x438
	TArray<AItemPickup*> ItemPickups; // 0x440
	FGameplayTagContainer SpawnedItemsTags; // 0x450
	bool bContainerVisible; // 0x470
};

struct UMoviePlayerSettings {
	bool bWaitForMoviesToComplete; // 0x30
	bool bMoviesAreSkippable; // 0x31
	TArray<FString> StartupMovies; // 0x38
};

struct UEnvQueryTest_TRSTrace {
	bool bUseDataProviderForTraceData; // 0x208
	FEnvTraceData TraceData; // 0x210
	FAIDataProviderTraceDataValue DataProviderTraceData; // 0x240
	ETRSTraceType Type; // 0x288
	float ArcParam; // 0x28c
	float ArcSimFrequency; // 0x290
	float ArcMaxSimTime; // 0x294
	FAIDataProviderBoolValue TraceFromContext; // 0x298
	FAIDataProviderFloatValue ItemHeightOffset; // 0x2d0
	FAIDataProviderFloatValue ItemDirectionOffset; // 0x308
	FAIDataProviderFloatValue ContextDirectionOffset; // 0x340
	FAIDataProviderFloatValue ContextHeightOffset; // 0x378
	UEnvQueryContext* Context; // 0x3b0
	bool bVLOGTrace; // 0x3b8
};

struct UFogSubsystem {
	UFogMod* BaseMod; // 0x68
};

struct UGizmoComponentAxisSource {
	USceneComponent* Component; // 0x38
	int32_t AxisIndex; // 0x40
	bool bLocalAxes; // 0x44
};

struct UParticleModuleOrbitBase {
	char bUseEmitterTime : 1; // 0x38
};

struct AGobiDemoSpectator {
	FMulticastInlineDelegate OnReplayPaused; // 0x7f0
	FMulticastInlineDelegate OnReplayUnpaused; // 0x800
	UDemoHUDUserWidget* DemoHUD; // 0x818
};

struct UWaterVolumeDef {
	UGameplayEffect* EffectShallowClass; // 0x38
	UGameplayEffect* EffectDeepClass; // 0x40
	UGameplayEffect* EffectDeepRecentClass; // 0x48
	UParticleSystem* DeepMovementEmitter; // 0x50
	UParticleSystem* DeepSplashEmitter; // 0x58
	UParticleSystem* ShallowMovementEmitter; // 0x60
	UParticleSystem* ShallowSplashEmitter; // 0x68
	float BuoyantForceMultiplier; // 0x70
	float SkeletalLinearDampening; // 0x74
	float SkeletalAngularDampening; // 0x78
};

struct AGobiDestructibleActor {
	USceneComponent* InternalRootComponent; // 0x2a0
	UStaticMeshComponent* StaticMeshComponent; // 0x2a8
	UBoxComponent* DamageVolumeComponent; // 0x2b0
	UGobiNavModifierComponent* NavModifierComponent; // 0x2b8
	UHealthComponent* HealthComponent; // 0x2c0
};

struct UBTService_OutsideOfSneakVolume {
	FGameplayTagContainer ApplyTags; // 0xa0
};

struct UTweenVector2DLatentFactory {
	FMulticastInlineDelegate OnTweenStart; // 0x38
	FMulticastInlineDelegate OnTweenUpdate; // 0x48
	FMulticastInlineDelegate OnTweenEnd; // 0x58
};

struct UAkAcousticPortalComponent {
	AkAcousticPortalState InitialState; // 0x508
	float ObstructionRefreshInterval; // 0x50c
	ECollisionChannel ObstructionCollisionChannel; // 0x510
	bool bPortalEnabled; // 0x538
};

struct UEditableGameplayTagQuery {
	FString UserDescription; // 0x30
	UEditableGameplayTagQueryExpression* RootExpression; // 0x50
	FGameplayTagQuery TagQueryExportText_Helper; // 0x58
};

struct UEvalSet_Shared_Mutilation_HitReaction_C {
	FGameplayEval_Dismembered Dismembered; // 0xc0
	FGameplayEval_HitReactionBone HitBone; // 0x118
	FGameplayEval_DamageType DamageType; // 0x1c8
	FGameplayEval_DamageAmount DamageAmount; // 0x288
	FGameplayEval_HitReactionHealth HitReactionHealth; // 0x320
	FGameplayEval_CanRupture CanRupture; // 0x378
	FGameplayEval_HitReactionWeakSpot HitReactionWeakspot; // 0x3c8
	FGameplayEval_DamageRange DamageRange; // 0x428
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
	FName TRSSpawnCullingGroup; // 0xbc
	ParticleSystemLODMethod LODMethod; // 0xc4
	EParticleSystemInsignificanceReaction InsignificantReaction; // 0xc5
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xc6
	EParticleSignificanceLevel MaxSignificanceLevel; // 0xc8
	uint32_t MinTimeBetweenTicks; // 0xcc
	float InsignificanceDelay; // 0xd0
	FVector MacroUVPosition; // 0xd4
	FBox CustomOcclusionBounds; // 0xe0
	TArray<FLODSoloTrack> SoloTracking; // 0x100
	TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0x110
};

struct AAISpawnActorVolume {
	FGameplayTagContainer InitialHordeBlockingTags; // 0x2d8
	FGameplayTagContainer CurrentHordeBlockingTags; // 0x2f8
	FGameplayTagContainer InitialWanderBlockingTags; // 0x318
	FGameplayTagContainer CurrentWanderBlockingTags; // 0x338
	FGameplayTagContainer InitialPersistentTags; // 0x358
	bool bUsePhysX; // 0x378
	FGameplayTagContainer CurrentPersistentTags; // 0x380
};

struct UWallGrabComponent {
	FWallGrabConfig WallGrabConfig; // 0x130
	FWallGrabMoveTickData MoveTickData; // 0x288
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
	char bNotOfflineProcessed : 1; // 0x68
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UFireModeBaseComponent {
	char RemoteClientFireParity; // 0x42c
	UAnimMontage* LastKnownFirstPersonMontage; // 0x430
	EWeaponFireBehavior WeaponFireBehavior; // 0x438
	bool bWantsRechamber; // 0x439
	bool bAllowInputBuffering; // 0x43a
	int8_t ShotsPerBurst; // 0x43b
	int8_t AmmoRequiredPerShot; // 0x43c
	bool bIsMountedWeapon; // 0x43d
	FGameplayTag MountedWeaponMeshTag; // 0x440
	UGobiDamageType* DamageType; // 0x448
	FAssetLookupWeaponTracerContainer WeaponTracer; // 0x450
	uint32_t TracerRate; // 0x468
	FVector2D TracerForwardVelocityMinMax; // 0x46c
	FVector2D Tracer3PForwardVelocityMinMax; // 0x474
	float TracerRibbonWidthFP; // 0x47c
	float TracerRibbonWidth3P; // 0x480
	UParticleSystem* MuzzleFlashParticleFP; // 0x488
	UParticleSystem* MuzzleFlashLoopingParticleFP; // 0x490
	UParticleSystem* MuzzleFlashParticle3P; // 0x498
	UParticleSystem* MuzzleFlashLoopingParticle3P; // 0x4a0
	float LoopingShellEjectRate; // 0x4a8
	FVector ShellEjectVelocity; // 0x4ac
	UParticleSystem* ShellEjectParticleFP; // 0x4b8
	UParticleSystem* ShellEjectLoopingParticleFP; // 0x4c0
	UParticleSystem* ShellEjectParticle3P; // 0x4c8
	UParticleSystem* ShellEjectLoopingParticle3P; // 0x4d0
	FGameplayTag ImpactCue; // 0x4d8
	FGameplayTag ShotFiredCue; // 0x4e0
	FAssetLookupName MuzzleSocketName; // 0x4e8
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x500
	bool bForceFeedbackIsLooping; // 0x508
	FTriggerEffectsDefinition TriggerEffects; // 0x50c
	FGameplayTagContainer BlockingTags; // 0x518
	FGameplayTagContainer FiringStateAppliedTags; // 0x538
	FGameplayTagContainer RechamberStateAppliedTags; // 0x558
	FGameplayTagContainer AnimationCancellingTags; // 0x578
	int32_t MinShotsBeforeAkLoop; // 0x598
	FName FireRateRTPC; // 0x59c
	FAssetLookupAkAudioEventArray FirstPersonFireSingleEvents; // 0x5a8
	FAssetLookupAkAudioEventArray FirstPersonFireSingleUnderBurstEvents; // 0x5c8
	FAssetLookupAkAudioEventArray FirstPersonFireLoopEvents; // 0x5e8
	FAssetLookupAkAudioEventArray FirstPersonFireLoopStopEvents; // 0x608
	FAssetLookupAkAudioEvent ThirdPersonFireSingleEvent; // 0x628
	FAssetLookupAkAudioEvent ThirdPersonFireLoopEvent; // 0x640
	FAssetLookupAkAudioEvent ThirdPersonFireLoopStopEvent; // 0x658
	FAssetLookupAkAudioEvent LastShotFireEvent; // 0x670
	FAssetLookupAkAudioEvent DryFireEvent; // 0x688
	FAssetLookupAkAudioEvent WhizByEvent; // 0x6a0
	UAkAudioEvent* WindupLoopAudio; // 0x6b8
	UAkAudioEvent* WindupLoopStopAudio; // 0x6c0
	bool bFireNotPressedForThirdPersonSingle; // 0x6c8
	float WhizByMaxDistance; // 0x6cc
	FAssetLookupMontageArray FireMontagesFP; // 0x6d0
	FAssetLookupMontageArray FireMontages3P; // 0x6f0
	FAssetLookupMontageArray RechamberMontagesFP; // 0x710
	FAssetLookupMontageArray RechamberMontages3P; // 0x730
	TArray<UGameplayEffect*> AppliedEffects; // 0x750
	FFireModeBaseTuning FireModeBaseTuning; // 0x760
	float DelayBetweenAlerts; // 0x794
};

struct ULightmassPrimitiveSettingsObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x30
};

struct UGeometryCacheTrack_FlipbookAnimation {
	uint32_t NumMeshSamples; // 0x60
};

struct UMapMeshConfigMod {
	FSkeletalMeshConfigMod MeshConfigMod; // 0x38
};

struct ACharacterLineupLayoutManager {
	TArray<ACustomizationMannequin*> Mannequins; // 0x2a8
	ATargetPoint* CharacterSelectTargetPoint; // 0x2b8
	TArray<ATargetPoint*> PreRoundLockInTargetPoints; // 0x2c0
	TArray<ATargetPoint*> PostRoundTargetPoints; // 0x2d0
	ACameraActor* Camera; // 0x2e0
};

struct ACharacter {
	USkeletalMeshComponent* Mesh; // 0x2f8
	UCharacterMovementComponent* CharacterMovement; // 0x300
	UCapsuleComponent* CapsuleComponent; // 0x308
	FBasedMovementInfo BasedMovement; // 0x310
	FBasedMovementInfo ReplicatedBasedMovement; // 0x340
	float AnimRootMotionTranslationScale; // 0x370
	FVector BaseTranslationOffset; // 0x374
	FQuat BaseRotationOffset; // 0x380
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x390
	float ReplayLastTransformUpdateTimeStamp; // 0x394
	char ReplicatedMovementMode; // 0x398
	bool bInBaseReplication; // 0x399
	float CrouchedEyeHeight; // 0x39c
	char bIsCrouched : 1; // 0x3a0
	char bProxyIsJumpForceApplied : 1; // 0x3a0
	char bPressedJump : 1; // 0x3a0
	char bClientUpdating : 1; // 0x3a0
	char bClientWasFalling : 1; // 0x3a0
	char bClientResimulateRootMotion : 1; // 0x3a0
	char bClientResimulateRootMotionSources : 1; // 0x3a0
	char bSimGravityDisabled : 1; // 0x3a0
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x3a1
	char bServerMoveIgnoreRootMotion : 1; // 0x3a1
	char bWasJumping : 1; // 0x3a1
	float JumpForceTimeRemaining; // 0x3a4
	float ProxyJumpForceStartedTime; // 0x3a8
	float JumpKeyHoldTime; // 0x3ac
	float JumpMaxHoldTime; // 0x3b0
	int32_t JumpMaxCount; // 0x3b4
	int32_t JumpCurrentCount; // 0x3b8
	FMulticastInlineDelegate OnReachedJumpApex; // 0x3c0
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x3e0
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x3f0
	FRootMotionSourceGroup SavedRootMotion; // 0x400
	FRootMotionMovementParams ClientRootMotionParams; // 0x440
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x480
	FRepRootMotionMontage RepRootMotion; // 0x490
	FRepRootMotionMontageHighFreq RepRootMotionHighFreq; // 0x528
	FRepRootMotionMontageLowFreq RepRootMotionLowFreq; // 0x550
};

struct UDirectionalLightComponent {
	float ShadowCascadeBiasDistribution; // 0x388
	char bEnableLightShaftOcclusion : 1; // 0x38c
	float OcclusionMaskDarkness; // 0x390
	float OcclusionDepthRange; // 0x394
	FVector LightShaftOverrideDirection; // 0x398
	float WholeSceneDynamicShadowRadius; // 0x3a4
	float DynamicShadowDistanceMovableLight; // 0x3a8
	float DynamicShadowDistanceStationaryLight; // 0x3ac
	int32_t DynamicShadowCascades; // 0x3b0
	float CascadeDistributionExponent; // 0x3b4
	float CascadeTransitionFraction; // 0x3b8
	float ShadowDistanceFadeoutFraction; // 0x3bc
	char bUseInsetShadowsForMovableObjects : 1; // 0x3c0
	int32_t FarShadowCascadeCount; // 0x3c4
	float FarShadowDistance; // 0x3c8
	float DistanceFieldShadowDistance; // 0x3cc
	float LightSourceAngle; // 0x3d0
	float LightSourceSoftAngle; // 0x3d4
	float TraceDistance; // 0x3d8
	FLightmassDirectionalLightSettings LightmassSettings; // 0x3dc
	char bCastModulatedShadows : 1; // 0x3ec
	FColor ModulatedShadowColor; // 0x3f0
	float ShadowAmount; // 0x3f4
	char bUsedAsAtmosphereSunLight : 1; // 0x3f8
	int32_t AtmosphereSunLightIndex; // 0x3fc
};

struct UMaterialExpressionFontSampleParameter {
	FName ParameterName; // 0x58
	FGuid ExpressionGUID; // 0x60
	FName Group; // 0x70
};

struct ULevelStreaming {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x30
	FName PackageNameToLoad; // 0x58
	TArray<FName> LODPackageNames; // 0x60
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

struct UMaterialExpressionSceneTexture {
	FExpressionInput Coordinates; // 0x48
	ESceneTextureId SceneTextureId; // 0x5c
	bool bFiltered; // 0x5d
};

struct USoundMix {
	char bApplyEQ : 1; // 0x30
	float EQPriority; // 0x34
	FAudioEQEffect EQSettings; // 0x38
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x78
	float InitialDelay; // 0x88
	float FadeInTime; // 0x8c
	float Duration; // 0x90
	float FadeOutTime; // 0x94
};

struct UFriendsManager {
	UMatchmaking* Matchmaking; // 0x50
	FTaskTimerConfig TimerConfig; // 0x60
};

struct UGobiDestructibleComponent {
	UGobiNavModifierComponent* NavModComponent; // 0xe8
	UHealthComponent* HealthComponent; // 0xf0
};

struct UPlayerLevelResetComponent {
	int32_t NumResetLevels; // 0x108
};

struct URawInputSettings {
	TArray<FRawInputDeviceConfiguration> DeviceConfigurations; // 0x40
	bool bRegisterDefaultDevice; // 0x50
};

struct ULandscapeSettings {
	int32_t MaxNumberOfLayers; // 0x40
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

struct AFieldSystemActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x2a0
};

struct UVendorPaginatorUserWidget {
	FMulticastInlineDelegate OnItemFocusReceived; // 0x458
	FMulticastInlineDelegate OnItemFocusLost; // 0x468
	FMulticastInlineDelegate OnItemClicked; // 0x478
	FMulticastInlineDelegate OnPageInfoChanged; // 0x488
	UVendorItemUserWidget* WidgetClass; // 0x498
};

struct AARSharedWorldGameMode {
	int32_t BufferSizePerChunk; // 0x388
};

struct UMovieSceneEventRepeaterSection {
	FMovieSceneEvent Event; // 0xe8
};

struct UPlantableItemComponent {
	FMulticastInlineDelegate OnSuccessfulPlant; // 0x160
	FHitResult LastKnownTraceResult; // 0x174
	AActor* SpawnedGhostActor; // 0x200
	EPlantableItemState State; // 0x230
	AActor* PlantedActor; // 0x248
	AActor* PlantableGhostActor; // 0x250
	float CoolDownPeriod; // 0x258
	float PlantingDuration; // 0x25c
	bool bRequireNavMeshToPlant; // 0x260
	UNavigationQueryFilter* NavFilter; // 0x268
	float NavMeshTolerance; // 0x270
	float MaxPlantDistance; // 0x274
	FRotator DesiredPlantRotation; // 0x278
	FCollisionProfileName TraceProfileName; // 0x284
	FVector BoxHalfExtents; // 0x28c
	FVector BoxOverlapLocalOffset; // 0x298
	FCollisionProfileName InvalidOverlapProfileName; // 0x2a4
	TArray<FName> InvalidFloorActorTags; // 0x2b0
	FGameplayTagQuery InvalidFloorGameplayTagQuery; // 0x2c0
	float MaxTraceDownDistance; // 0x30c
	float AdditionalPlantRadius; // 0x310
	bool bCanPlantOnCharacters; // 0x314
	TArray<FAdditionalPlantData> AdditionalPlants1; // 0x318
	TArray<FAdditionalPlantData> AdditionalPlants2; // 0x328
	FPlantableRangeDefinition PlantableSurfaceTypes; // 0x338
	UAnimMontage* UseMontageFP; // 0x348
	UAnimMontage* UseMontage3P; // 0x350
	float ChanceToExpendAmmoOnUse; // 0x358
	UAkAudioEvent* AKENotExpended; // 0x360
};

struct USignInTask_PSNUpgradeLogin {
	USignInTask_UserLogin* UserLoginTask; // 0x88
};

struct AAIController {
	char bStartAILogicOnPossess : 1; // 0x338
	char bStopAILogicOnUnposses : 1; // 0x338
	char bLOSflag : 1; // 0x338
	char bSkipExtraLOSChecks : 1; // 0x338
	char bAllowStrafe : 1; // 0x338
	char bWantsPlayerState : 1; // 0x338
	char bSetControlRotationFromPawnOrientation : 1; // 0x338
	char bUpdatePawnRotationToFocus : 1; // 0x338
	UPathFollowingComponent* PathFollowingComponent; // 0x340
	UBrainComponent* BrainComponentClass; // 0x348
	UBrainComponent* BrainComponent; // 0x350
	UAIPerceptionComponent* PerceptionComponent; // 0x358
	UPawnActionsComponent* ActionsComp; // 0x360
	UBlackboardComponent* Blackboard; // 0x368
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x370
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x378
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x380
};

struct UAnimBoneCompressionSettings {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x30
};

struct UAudioDestructibleComponent {
	UAkAudioEvent* ImpactHeavyAudio; // 0xe8
	UAkAudioEvent* ImpactLightAudio; // 0xf0
	UAkAudioEvent* RiddenDamageSwtAudio; // 0xf8
	UAkAudioEvent* DebrisFallAudio; // 0x100
	UAkAudioEvent* BreakAudio; // 0x108
	TArray<UAkAudioEvent*> BreakSweetenersAudio; // 0x110
	FGameplayTagContainer HeavyTagContainer; // 0x120
	TMap<FGameplayTag, UAkAudioEvent*> DamageTypeEventMap; // 0x140
	FVector ImpactOffset; // 0x190
	float DebrisDelay; // 0x19c
	bool bIndestructible; // 0x1a0
	int32_t ZeroDamageCount; // 0x1a4
};

struct UAttachmentDefinitionComponent {
	FAttachmentDefinition AttachmentDefinition; // 0xe8
};

struct UMovieSceneCameraCutSection {
	FGuid CameraGuid; // 0xe8
	FMovieSceneObjectBindingID CameraBindingID; // 0xf8
};

struct UGameplayAction_Devour {
	UMontageSet* DevourMontageSet; // 0x210
	UMontageSet* DevourInterruptMontageSet; // 0x218
	float DevourDuration; // 0x220
	float HealthPercentToDisrupt; // 0x224
	FGameplayTagQuery DevourInterruptTagQuery; // 0x228
	UAnimContext_Enemy* EnemyContextClass; // 0x270
	TArray<UGameplayEffect*> BeginDevourEffects; // 0x278
	TArray<UGameplayEffect*> BeginDevourTargetEffects; // 0x288
	TArray<UGameplayEffect*> SuccessfulDevourEffects; // 0x298
	TArray<UGameplayEffect*> SuccessfulDevourTargetEffects; // 0x2a8
	TArray<UGameplayEffect*> DisruptedDevourEffects; // 0x2b8
	FRotator BeginDevourRelativeRotation; // 0x2c8
	FGameplayTag SkeletalMeshTag; // 0x2d4
	FName BeginDevourSkeletalMeshBone; // 0x2dc
	FName SuccessfulDevourSkeletalMeshBone; // 0x2e4
};

struct ACullDistanceVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x2d8
	char bEnabled : 1; // 0x2e8
};

struct UStaticMesh {
	FPerPlatformInt MinLOD; // 0x68
	float LpvBiasMultiplier; // 0x6c
	TArray<FStaticMaterial> StaticMaterials; // 0x70
	float LightmapUVDensity; // 0x80
	int32_t LightMapResolution; // 0x84
	int32_t LightMapCoordinateIndex; // 0x88
	float DistanceFieldSelfShadowBias; // 0x8c
	UBodySetup* BodySetup; // 0x90
	int32_t LODForCollision; // 0x98
	char bGenerateMeshDistanceField : 1; // 0x9c
	char bStripComplexCollisionForConsole : 1; // 0x9c
	char bHasNavigationData : 1; // 0x9c
	char bAffectsNavigationOverride : 1; // 0x9c
	float MaxDrawDistance; // 0xa0
	EStaticMeshDetailMode DetailMode; // 0xa4
	char bSupportUniformlyDistributedSampling : 1; // 0xa5
	char bSupportPhysicalMaterialMasks : 1; // 0xa5
	char bSupportRayTracing : 1; // 0xa5
	char bIsBuiltAtRuntime : 1; // 0xa5
	FPrimitiveParameterCollectionOverrides CollectionOverrides; // 0xa8
	char bHeuristicVolumetricLighting : 1; // 0xd8
	char bOverride_LightmapType : 1; // 0xd8
	ELightmapType LightmapType; // 0xd9
	char bHeuristicLightOccluder : 1; // 0xda
	char bOverride_LightOccluder : 1; // 0xda
	char bLightOccluder : 1; // 0xda
	char bAffectsGroundFog : 1; // 0xda
	char bAllowCPUAccess : 1; // 0xda
	char bSupportGpuUniformlyDistributedSampling : 1; // 0xda
	TArray<UStaticMeshSocket*> Sockets; // 0x100
	FVector PositiveBoundsExtension; // 0x120
	FVector NegativeBoundsExtension; // 0x12c
	FBoxSphereBounds ExtendedBounds; // 0x138
	int32_t ElementToIgnoreForTexFactor; // 0x154
	TArray<UAssetUserData*> AssetUserData; // 0x158
	UObject* EditableMesh; // 0x170
	UNavCollisionBase* NavCollision; // 0x178
};

struct ULeapComponent {
	FMulticastInlineDelegate OnLeapEnded; // 0x1f8
	bool bLeapEnabled; // 0x208
	FLeapTuning LeapTuning; // 0x210
	FPlayerLeapConfig Player; // 0x3f8
	bool bCrouchWhenCooking; // 0x490
	bool bCrouchWhenLeaping; // 0x491
	TArray<UAnimMontage*> CookingMontages; // 0x498
	TArray<UAnimMontage*> LeapFromWallMontages; // 0x4a8
	TArray<UAnimMontage*> LeapFromWallCookingMontages; // 0x4b8
	TArray<UGameplayEffect*> ApplyEffects; // 0x4c8
	TArray<UGameplayEffect*> CookingEffects; // 0x4d8
	TArray<UGameplayEffect*> ReapplyEffectsOnLeapEnd; // 0x4e8
	FGameplayTagQuery MoveIgnoreCharacters; // 0x4f8
	TArray<FEnemyAudioEvent> AudioCookingStopEvents; // 0x540
	TArray<FEnemyAudioEvent> AudioCookingInterruptedEvents; // 0x550
	FVector LaunchVelocity; // 0x69c
	TArray<FQueuedEffect> QueuedEffectsToReapply; // 0x6a8
};

struct UQuitMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UIncapUsable_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	FMulticastInlineDelegate DidIncapRevive; // 0x578
	FMulticastInlineDelegate DidRescue; // 0x588
	FMulticastInlineDelegate DidIncapReviveStart; // 0x598
	float RequiredUseTimeVOThreshold; // 0x5a8
};

struct UParticleModuleRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UPhysicsCollisionHandler {
	float ImpactThreshold; // 0x30
	float ImpactReFireDelay; // 0x34
	USoundBase* DefaultImpactSound; // 0x38
	float LastImpactSoundTime; // 0x40
};

struct UPlatformInterfaceWebResponse {
	FString OriginalURL; // 0x30
	int32_t ResponseCode; // 0x40
	int32_t Tag; // 0x44
	FString StringResponse; // 0x48
	TArray<char> BinaryResponse; // 0x58
};

struct UNavigationGraphNodeComponent {
	FNavGraphNode Node; // 0x230
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x248
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x250
};

struct UBTTask_SetBlackboardTime {
	float Offset; // 0xa0
};

struct U3P_HeroAdd_Base_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x370
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x428
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8; // 0x4e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x670
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x800
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x990
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x9b8
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag; // 0x9e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0xaa8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0xc38
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0xc60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0xdf0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0xe18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0xfa8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0xfd0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1160
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x12f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1390
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x1408
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x14d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x1570
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x1598
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x15c0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1678
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x1738
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1760
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1800
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x18b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x18e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x1908
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x1930
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x1958
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x1980
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x19a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1a48
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x1ac0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1b88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1c28
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1ca0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1d68
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1d90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1e48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1e70
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1e98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1f50
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1f78
	FGameplayTag HeroStance; // 0x2018
	FGobiAnimationState AnimationState; // 0x2020
	FAnimState3P AnimState3P; // 0x2078
	FHeroAnimState3P HeroAnimState; // 0x2080
	float AimOffsetWeight; // 0x2480
	bool UpperBody; // 0x2484
	bool EnableLeftHandAdditive; // 0x2485
	bool EnableRightHandAdditive; // 0x2486
};

struct UPlaneReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x2a8
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x2b0
	UBoxComponent* PreviewCaptureBox; // 0x2b8
};

struct UBrainComponent {
	UBlackboardComponent* BlackboardComp; // 0xf0
	AAIController* AIOwner; // 0xf8
};

struct UWindowTitleBarArea {
	bool bWindowButtonsEnabled; // 0x160
	bool bDoubleClickTogglesFullscreen; // 0x161
};

struct UMaterialExpressionLogarithm10 {
	FExpressionInput X; // 0x48
};

struct UMaterialExpressionRuntimeVirtualTextureSample {
	FExpressionInput Coordinates; // 0x48
	FExpressionInput WorldPosition; // 0x5c
	FExpressionInput MipValue; // 0x70
	URuntimeVirtualTexture* VirtualTexture; // 0x88
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x90
	bool bSinglePhysicalSpace; // 0x91
	ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x92
};

struct UAnimEvalSet_Common_Melee_High_C {
	FGameplayEval_NavBlocked NavBlocked; // 0x4f8
};

struct UStaticMeshSocket {
	FName SocketName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	FString Tag; // 0x60
};

struct UAnimEvalSet_ClimbLink {
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xc0
	FAnimEval_ClimbLink ClimbLinkEval; // 0x108
	float MaxStartingDistance; // 0x180
	float MinClimbUp; // 0x184
	float MaxClimbUp; // 0x188
	float MinTopDistance; // 0x18c
	float MaxTopDistance; // 0x190
	float MinClimbDown; // 0x194
	float MaxClimbDown; // 0x198
	TArray<UNavArea*> ClimbNavAreas; // 0x1a0
	float ClimbEvalWeight; // 0x1b0
	bool bNeedsClearPathToLinkStart; // 0x1b4
};

struct APlayerStart {
	FName PlayerStartTag; // 0x2c8
};

struct UPlayerSettingsBase {
	FMulticastInlineDelegate OnApplySettings; // 0x30
	uint32_t Version; // 0x58
};

struct UForceFeedbackAttenuation {
	FForceFeedbackAttenuationSettings Attenuation; // 0x30
};

struct UInputComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x158
};

struct UEnvQueryGenerator_ProjectedPoints {
	FEnvTraceData ProjectionData; // 0x58
};

struct UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x38
	TArray<FName> ComponentTags; // 0x68
	FGameplayTagContainer ComponentGameplayTags; // 0x78
	TArray<UAssetUserData*> AssetUserData; // 0xa8
	int32_t UCSSerializationIndex; // 0xbc
	char bNetAddressable : 1; // 0xc0
	char bReplicates : 1; // 0xc0
	char bAutoActivate : 1; // 0xc1
	char bIsActive : 1; // 0xc2
	char bEditableWhenInherited : 1; // 0xc2
	char bCanEverAffectNavigation : 1; // 0xc2
	char bAssetOverridesCanEverAffectNavigation : 1; // 0xc2
	char bIsEditorOnly : 1; // 0xc2
	EComponentCreationMethod CreationMethod; // 0xc4
	FMulticastSparseDelegate OnComponentActivated; // 0xc5
	FMulticastSparseDelegate OnComponentDeactivated; // 0xc6
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc8
};

struct UInterpTrackMoveAxis {
	EInterpMoveAxis MoveAxis; // 0x98
	FInterpLookupTrack LookupTrack; // 0xa0
};

struct UGobiAnimInstance {
	APawn* PawnOwner; // 0x2b8
	UGobiCharacterMovementComponent* MovementComponent; // 0x2c0
	FGobiAnimationData BaseData; // 0x2c8
	FGobiAnimationState AnimationState; // 0x2dc
	FGobiAnimationState LastAnimationState; // 0x334
	bool bUseStartStopTransitions; // 0x38c
	float SpeedInterpAlpha; // 0x390
	bool bShowDebug; // 0x394
	bool IsThirdPerson; // 0x395
};

struct UChallengeObjectiveKillData {
	FGameplayTagQuery EnemyTypeQuery; // 0x70
};

struct ULevelActorContainer {
	TArray<AActor*> Actors; // 0x30
};

struct UMaterialExpressionDDX {
	FExpressionInput Value; // 0x48
};

struct UGameplayEffectDamageNumbers {
	bool bDamageNumbersVisible; // 0x240
};

struct UGobiPlayerProfileManager {
	UDataTable* ProductsTable; // 0x128
	UDataTable* MerchantsTable; // 0x130
	UDataTable* CaravanSchemasTable; // 0x138
	UDataTable* GameplayCardsTable; // 0x140
	TMap<FDataTableRowHandle, FDataTableRowHandle> ItemToProductLookup; // 0x198
};

struct UHUDMissionsUserWidget {
	UHUDMissionEntryUserWidget* MissionWidget; // 0x458
};

struct USteeringBehavior_FocusLocation {
	float DistanceThreshold; // 0x58
	float MovementConeAngle; // 0x5c
	bool bUseDifferentConeAngleWhenStationary; // 0x60
	float StationaryConeAngle; // 0x64
	UAnimContext_Transform* FocusFromLocation; // 0x68
	UAnimContext_Transform* FocusToLocation; // 0x70
	float MaxVisibleAge; // 0x78
	bool bUseDifferentMaxVisibleAgeWhenStationary; // 0x7c
	float MaxStationaryVisibleAge; // 0x80
	bool bInterpFromPrevFocusLoc; // 0x84
	float FocusInterpRate; // 0x88
	bool bUseRotationLimiter; // 0x8c
	UAnimContext_Rotation* RotationLimiter; // 0x90
	float MaxAngleFromRotationLimiter; // 0x98
};

struct UBoxReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x2a8
	UBoxComponent* PreviewInfluenceBox; // 0x2b0
	UBoxComponent* PreviewCaptureBox; // 0x2b8
};

struct ALullSystem {
	int32_t RequiredSurvivorCount; // 0x2a0
	float NearbyBossMonsterDistance; // 0x2a4
	FGameplayTagContainer BossMonsterTags; // 0x2a8
	FMulticastInlineDelegate OnLullBegin; // 0x2c8
	FMulticastInlineDelegate OnLullEnd; // 0x2d8
	bool LullActive; // 0x2e8
	char LullStatus; // 0x2e9
	UGameDirector* GameDirector; // 0x2f0
	UGobiCollectionsSubsystem* Collections; // 0x2f8
};

struct AVomiter_VomitAcidPool_Water_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UBoxComponent* Box; // 0x340
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x348
};

struct UMicroTransactionBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x40
	FString LastError; // 0x50
	FString LastErrorSolution; // 0x60
};

struct ALMG01_BP_C {
	UADSComponent* ADS; // 0x520
	UFireModeSingleTraceComponent* FireModeSingleTrace; // 0x528
	UBulletPenetrationComponent* BulletPenetration; // 0x530
	UClipAmmoComponent* ClipAmmo; // 0x538
	URecoilComponent* Recoil; // 0x540
	UClipReloadComponent* ClipReload; // 0x548
	USpreadComponent* Spread; // 0x550
	UItemAnimationDataComponent* ItemAnimationData; // 0x558
};

struct UParticleModuleLocationEmitterDirect {
	FName EmitterName; // 0x38
};

struct UAnimContext_PrevTransform {
	UAnimContext_Transform* Current; // 0x70
};

struct UAnimNotify_HideActor {
	bool bHidden; // 0x40
};

struct AParticleColliderActor {
	UParticleColliderComponent* ParticleColliderComponent; // 0x2a0
	UParticleSystemComponent* ParticleSystemComponent; // 0x2a8
};

struct UMovieSceneNiagaraTrack {
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UAnimEvalSet_Mantle_C {
	FGameplayEval_MantleHeight MantleHeight; // 0xc0
	FGameplayEval_MantleDepth MantleDepth; // 0x110
};

struct UTileView {
	float EntryHeight; // 0x3b0
	float EntryWidth; // 0x3b4
	EListItemAlignment TileAlignment; // 0x3b8
	bool bWrapHorizontalNavigation; // 0x3b9
};

struct UGameplayTaskResource {
	int32_t ManualResourceID; // 0x30
	int8_t AutoResourceID; // 0x34
	char bManuallySetID : 1; // 0x38
};

struct UAnimEvalSet_Shared_HitReaction_FB_C {
	FGameplayEval_Health AvatarHealth; // 0xc0
	FGameplayEval_Angle AvatarHitDirection; // 0x118
	FGameplayEval_GameplayTags AvatarTags; // 0x178
	FGameplayEval_RandomChance RandomChance; // 0x210
	FGameplayEval_MovementMode AvatarMovementMode; // 0x260
	FGameplayEval_Speed AvatarSpeed; // 0x2b8
	FGameplayEval_DamageType DamageType; // 0x318
};

struct UGameplayEffectSprintComponent {
	FGamePropertyFloatMod SprintStaminaCostScaleMod; // 0x240
	bool bAllowFiringWhileSprinting; // 0x250
};

struct UChallengeObjectiveTracker {
	float Points; // 0x30
	float Value; // 0x34
	UChallengeObjectiveData* ObjectiveData; // 0x38
	UChallengeMonitorComponent* ChallengeMonitor; // 0x40
};

struct USizeBoxSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x60
	EVerticalAlignment VerticalAlignment; // 0x61
};

struct UPlayer {
	APlayerController* PlayerController; // 0x38
	int32_t CurrentNetSpeed; // 0x40
	int32_t ConfiguredInternetSpeed; // 0x44
	int32_t ConfiguredLanSpeed; // 0x48
};

struct UWaterSurfaceDef {
	UMaterialInterface* HeightSimMaterial; // 0x38
	UMaterialInterface* NormalMaterial; // 0x40
	UMaterialInterface* ForceMaterial; // 0x48
	UWaterRippleMakers* RippleMakers; // 0x50
	float ProceduralFPS; // 0x58
	float NormalHeightScale; // 0x5c
	float TravelSpeed; // 0x60
	int32_t NumSimulationSteps; // 0x64
	float Dampening; // 0x68
	int32_t RenderTargetSize; // 0x6c
	float RenderTargetWorldSize; // 0x70
	int32_t EdgePixelsReservedForScroll; // 0x74
	float MaskPixelDistance; // 0x78
	float MovementPredictionMult; // 0x7c
	float MaxWaveHeight; // 0x80
	float WaterLineAtten; // 0x84
	FString WaterSimSharedVolumePrefix; // 0x88
	UWaterRipplerDef* BuoyantRippleDef; // 0x98
	bool UseFlowingWater; // 0xa0
	UTextureCube* CubemapOverride; // 0xa8
};

struct UInterpTrackSound {
	TArray<FSoundTrackKey> Sounds; // 0x98
	char bPlayOnReverse : 1; // 0xa8
	char bContinueSoundOnMatineeEnd : 1; // 0xa8
	char bSuppressSubtitles : 1; // 0xa8
	char bTreatAsDialogue : 1; // 0xa8
	char bAttach : 1; // 0xa8
};

struct AMapSpatialInfoActor {
	UMapSpatialInfoComponent* MapSpatialInfoComponent; // 0x2a0
	UActiveAreaSetComponent* ActiveAreaSetComponent; // 0x2a8
};

struct UMovieSceneActorReferenceSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct UButtonSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UChallengeObjectiveData {
	UTexture2D* Icon; // 0x30
	FText DisplayName; // 0x38
	FText Description; // 0x50
	UChallengeObjectiveTracker* TrackerClass; // 0x68
};

struct UInterpTrackInstLinearColorProp {
	FLinearColor ResetColor; // 0x60
};

struct UParticleModuleVelocity_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb8
};

struct UBTService_Distance {
	FBlackboardKeySelector TargetPositionBlackboardKey; // 0xa0
	FAIDataProviderUObjectValue DistanceRanges; // 0xc8
};

struct USoundSourceBus {
	ESourceBusChannels SourceBusChannels; // 0x318
	float SourceBusDuration; // 0x31c
	char bAutoDeactivateWhenSilent : 1; // 0x320
};

struct UMovieSceneGeometryCollectionTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x60
};

struct UUIScreenManager {
	FMulticastInlineDelegate OnInitialized; // 0x50
	FMulticastInlineDelegate OnScreenOpened; // 0x60
	FMulticastInlineDelegate OnScreenOpenedExDynamic; // 0x70
	FMulticastInlineDelegate OnScreenClosed; // 0x80
	UAkAudioEvent* OpenScreenSound; // 0xd8
	UAkAudioEvent* CloseScreenSound; // 0xe0
	UUISpeakerTest* SpeakerTest; // 0xe8
	TArray<FHubScreenInfo> HubScreens; // 0xf0
	bool bCanShowCorruptSavePopup; // 0x100
	bool bLoadGlobalAssets; // 0x101
	bool bBlockInput; // 0x102
	int32_t InputPriority; // 0x104
	UPopupManager* PopupManager; // 0x108
	TArray<UUIScreen*> Screens; // 0x110
	TArray<UUIScreen*> ScreensWaitingForPawn; // 0x120
	UInputComponent* InputComponent; // 0x130
	ATweenManagerActor* TweenManager; // 0x138
	UCardTooltipUserWidget* CardTooltip; // 0x140
	TMap<UUIScreen*, FScreenStateWrapper> SavedScreenStates; // 0x198
	UVivoxListener* VivoxListener; // 0x1f8
};

struct UParticleModuleRotationOverLifetime {
	FRawDistributionFloat RotationOverLife; // 0x38
	char Scale : 1; // 0x68
};

struct UAggroGrowthComponent {
	float CurAggroLevel; // 0xe8
	float AggroDefault; // 0xec
	float AggroMinimum; // 0xf0
	float AggroMaximum; // 0xf4
	float AggroUpTime; // 0xf8
	float AggroDownTime; // 0xfc
	float TransitionTime; // 0x100
	FGameplayTag DetectAggroTag; // 0x104
	FGameplayTagContainer RemoveOnAggroTags; // 0x110
	TArray<UGameplayEffect*> ApplyAggroEffectsToOwner; // 0x130
	FMulticastInlineDelegate OnAggroEnded; // 0x140
};

struct ULandscapeSplineSegment {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30
	char bAllowCullDistanceVolume : 1; // 0x60
	FInterpCurveVector SplineInfo; // 0x68
	TArray<FLandscapeSplineInterpPoint> Points; // 0x80
	FBox Bounds; // 0x90
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xb0
};

struct UAnimNotify_SpawnThrowProjectileBase {
	UProjectileThrowComponent* ProjectileThrowClass; // 0x40
};

struct UHUDNotificationShelfEntryUserWidget {
	FMulticastInlineDelegate OnNotificationActionCompleted; // 0x458
	UTexture2D* PartyInviteIcon; // 0x468
};

struct URecoilComponent {
	FRecoilTuning RecoilTuning; // 0x410
};

struct UDecalSubsystem {
	UDecalManager* DecalManager; // 0x38
};

struct UAnimNotify_EmissiveScaling {
	float EmissiveValue; // 0x40
	float TimeToScale; // 0x44
};

struct AVFXCorpse {
	UAkAudioEvent* DissolveAudioEvent; // 0x2a0
	float FadeDuration; // 0x2a8
	UParticleSystem* FadeParticleSystem; // 0x2b0
	TArray<FName> FadeParticleBoneNames; // 0x2b8
	TArray<UMaterialInstanceDynamic*> FadeDynamicMaterials; // 0x2d8
};

struct UMessagePopupButton_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UTextButton_WBP_C* TextButton; // 0x2f8
};

struct UGameplayEvalSet_Mantle_C {
	FGameplayEval_NavArea IsMantle; // 0x78
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0xe8
	FGameplayEval_Distance IsAtMantle; // 0x130
};

struct UWeaponMovementSpeedComponent {
	FWeaponMoveSpeedTuning WeaponMoveSpeedTuning; // 0x160
};

struct AVomiter_VomitAcidPool_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UBoxComponent* Box; // 0x340
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x348
};

struct UTRSOnlineEntitlementsSteamSettings {
	TArray<int32_t> EntitlementIds; // 0x40
};

struct UMovieSceneSequence {
	FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x58
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x348
	bool bParentContextsAreSignificant; // 0x349
	bool bPlayableDirectly; // 0x34a
};

struct UGameplayEffectHealthComponent {
	FGamePropertyFloatMod InitialMaxHealthMod; // 0x248
	FGamePropertyFloatMod PermanentDamageScaleMod; // 0x258
	FGamePropertyFloatMod HealthRegenPerSecondMod; // 0x268
	float HealthRegenWhenHealthBelow; // 0x278
	FGamePropertyFloatMod HealingReceivedScaleMod; // 0x27c
	FGamePropertyFloatMod HealingAppliedScaleMod; // 0x28c
	FGamePropertyFloatMod TemporaryHealingReceivedScaleMod; // 0x29c
	FGamePropertyFloatMod TemporaryHealingAppliedScaleMod; // 0x2ac
	FGamePropertyFloatMod FriendlyFireOverrideMod; // 0x2bc
	FGamePropertyFloatMod CriticalHealChanceMod; // 0x2cc
	FGamePropertyFloatMod CriticalHealMultiplierMod; // 0x2dc
	FGamePropertyFloatMod HealthDepletedMaxHealthPenaltyMod; // 0x2ec
	TArray<UGameplayEffect*> HealthRegenEffects; // 0x300
	bool bDisableDamage; // 0x310
	bool bDisableDeath; // 0x311
	float DisableHealthRegenOnRecentDamageTime; // 0x314
	bool bEnableOverheal; // 0x318
};

struct UMaterialExpressionCeil {
	FExpressionInput Input; // 0x48
};

struct USplineComponent {
	bool bShowSnapPointsToGround; // 0x4b0
	bool bSnapPointsToGround; // 0x4b1
	ECollisionChannel SearchChannel; // 0x4b2
	float SearchUp; // 0x4b4
	float SearchDown; // 0x4b8
	float Offset; // 0x4bc
	FSplineCurves SplineCurves; // 0x4c0
	FInterpCurveVector SplineInfo; // 0x528
	FInterpCurveQuat SplineRotInfo; // 0x540
	FInterpCurveVector SplineScaleInfo; // 0x558
	FInterpCurveFloat SplineReparamTable; // 0x570
	bool bAllowSplineEditingPerInstance; // 0x588
	int32_t ReparamStepsPerSegment; // 0x58c
	float Duration; // 0x590
	bool bStationaryEndpoints; // 0x594
	bool bSplineHasBeenEdited; // 0x595
	bool bModifiedByConstructionScript; // 0x596
	ESplinePointType ForcePointType; // 0x597
	bool bForcePointType; // 0x598
	bool bInputSplinePointsToConstructionScript; // 0x599
	bool bDrawDebug; // 0x59a
	bool bClosedLoop; // 0x59b
	bool bLoopPositionOverride; // 0x59c
	float LoopPosition; // 0x5a0
	FVector DefaultUpVector; // 0x5a4
};

struct UGobiMusicSystem {
	float TickInterval; // 0x60
	UAkAudioBank* MusicBank; // 0x68
	UAkAudioEvent* MusicEvent; // 0x70
	UAkAudioEvent* MusicStopEvent; // 0x78
	UDataTable* MusicStateBehaviorTable; // 0x80
	FDataTableRowHandle LegalScreenStateRowHandle; // 0x88
	FDataTableRowHandle SignInScreenStateRowHandle; // 0xa8
	FDataTableRowHandle MovieStateRowHandle; // 0xc8
	FDataTableRowHandle PreRoundStateRowHandle; // 0xe8
	FDataTableRowHandle MissionFailStateRowHandle; // 0x108
	FDataTableRowHandle MissionCompleteStateRowHandle; // 0x128
	FDataTableRowHandle CreditsStateRowHandle; // 0x148
	FDataTableRowHandle SafeRoomStateRowHandle; // 0x168
	FDataTableRowHandle ExploreStateRowHandle; // 0x188
	FDataTableRowHandle CombatStateRowHandle; // 0x1a8
	FDataTableRowHandle IncapStateRowHandle; // 0x1c8
	FDataTableRowHandle RevivingStateRowHandle; // 0x1e8
	FDataTableRowHandle SnitcherHordeStateRowHandle; // 0x208
	FDataTableRowHandle EndlessHordeStateRowHandle; // 0x228
	FDataTableRowHandle PVPPrepStateRowHandle; // 0x248
	FDataTableRowHandle PVPCollapseStateRowHandle; // 0x268
	FDataTableRowHandle PVPHordeStateRowHandle; // 0x288
	FDataTableRowHandle PVPSurvivalStateRowHandle; // 0x2a8
	FDataTableRowHandle PVPEndedStateRowHandle; // 0x2c8
	FDataTableRowHandle PVPEndNeutralStateRowHandle; // 0x2e8
	FDataTableRowHandle PVPEndPositiveStateRowHandle; // 0x308
	FDataTableRowHandle PVPEndNegativeStateRowHandle; // 0x328
	FDataTableRowHandle MissionLoadingStateRowHandle; // 0x348
	UDataTable* MusicEventTable; // 0x368
	UDataTable* TRSGenericMusicEvents; // 0x370
	TArray<UCharacterMusicInfo*> CharacterMusics; // 0x378
	float HordeThreatThreshold; // 0x388
	float MinDyingDownDuration; // 0x38c
	EMusicHordeState MusicHordeState; // 0x390
	FDelegate MusicEventCallback; // 0x420
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

struct UOmenSubsystem {
	TArray<UOmenConfigAsset*> Configs; // 0x40
};

struct ASleeperProjectile {
	USphereComponent* CollisionComponent; // 0x658
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x660
	UHealthComponent* Health; // 0x668
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x670
	UGameplayTagsComponent* GameplayTagsComponent; // 0x678
	UPingableComponent* PingableComponent; // 0x680
	ULifeStateComponent* LifeStateComponent; // 0x688
	URagdollComponent* RagdollComponent; // 0x690
	FMulticastInlineDelegate OnSleeperTargetSnared; // 0x698
	FMulticastInlineDelegate OnSleeperSnareRelease; // 0x6a8
	FString HordeLabel; // 0x6b8
	float SnareDuration; // 0x6c8
	float DeathDuration; // 0x6cc
	TArray<UGameplayEffect*> ApplyHitEffectsToTarget; // 0x6d0
	FGameplayTagContainer BlockingTargetTags; // 0x6e0
	FGameplayTag TriggerHordeCue; // 0x700
	ASleeper* OwnerSleeper; // 0x708
	AGobiCharacter* SnaredTarget; // 0x710
	ESleeperAnimBehaviorState AnimState; // 0x718
	FName CollisionComponentAttachSocketName; // 0x71c
	FName AttachSkeletalMeshBone; // 0x724
	FVector AttachRelativeLocation; // 0x72c
	FRotator AttachRelativeRotation; // 0x738
	float CollisionEnableDelay; // 0x744
	FString SleeperSlug; // 0x748
	bool bTriggerHordeOnSnare; // 0x790
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
	bool bSuppressSubtitles; // 0x2f8
	bool bOverrideAttenuation; // 0x2f9
	USoundAttenuation* AttenuationSettings; // 0x300
	FDelegate OnQueueSubtitles; // 0x308
	FMulticastInlineDelegate OnAudioFinished; // 0x318
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x328
};

struct UHealthDamageRanges {
	TArray<FHealthDamageRange> Ranges; // 0x38
	TArray<FOverrideHealthDamageRanges> GobiCharTagOverrides; // 0x48
};

struct UEnvQueryGenerator {
	FString OptionName; // 0x38
	UEnvQueryItemType* ItemType; // 0x48
	char bAutoSortTests : 1; // 0x50
};

struct UUserDefinedCaptureProtocol {
	UWorld* World; // 0x60
};

struct UMaterialExpressionIf {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	FExpressionInput AGreaterThanB; // 0x70
	FExpressionInput AEqualsB; // 0x84
	FExpressionInput ALessThanB; // 0x98
	float EqualsThreshold; // 0xac
	float ConstB; // 0xb0
	float ConstAEqualsB; // 0xb4
};

struct UMaterialExpressionSphericalParticleOpacity {
	FExpressionInput Density; // 0x48
	float ConstantDensity; // 0x5c
};

struct UZombieAnimInstance {
	FZombieAnimState ZombieAnimState; // 0x7c0
	float AimSpeed; // 0x7c4
	FGobiAnimationCurveData AttackAimAlphaCurve; // 0x7c8
	float AttackAimAlpha; // 0x7d8
	float AttackAimCounterYaw; // 0x7dc
	float LocoCounterYaw; // 0x7e0
};

struct UCharacterDetailsUserWidget {
	UPerkDetailsEntryUserWidget* PerkEntryClass; // 0x458
};

struct UBTService_LineOfSight {
	FBlackboardKeySelector TargetBlackboardKey; // 0xa0
};

struct UParticleModuleParameterDynamic_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x50
};

struct UPostRoundLineupUserWidget {
	FMulticastInlineDelegate OnShowLineup; // 0x458
	TArray<EPostRoundLineupStat> PrioritizedPvEStats; // 0x468
	TArray<EPostRoundLineupStat> PrioritizedPvPStats; // 0x478
	TMap<EPostRoundLineupStat, FText> StatToText; // 0x488
};

struct UMaterialExpressionArctangentFast {
	FExpressionInput Input; // 0x48
};

struct AGobiAIController_BP_C {
	USteeringControl* NavToAlertLoc_SC; // 0x440
	USteeringControl* NavToAttackLoc_SC; // 0x448
	USteeringControl* NavToWanderLoc_SC; // 0x450
	USteeringControl* NavToHighPrioritySmartActor_SC; // 0x458
	USteeringControl* NavToLowPrioritySmartActor_SC; // 0x460
	USteeringBehavior* NavToAttackLoc_SB; // 0x468
	USteeringBehavior* NavToAlertLoc_SB; // 0x470
	USteeringBehavior* NavToWanderLoc_SB; // 0x478
	USteeringBehavior* NavToRetreatLoc_SB; // 0x480
	USteeringBehavior* NavToHighPrioritySmartActor_SB; // 0x488
	USteeringBehavior* NavToLowPrioritySmartActor_SB; // 0x490
};

struct UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0x78
	float CurveTension; // 0x90
};

struct UMeshComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x4b0
	char bEnableMaterialParameterCaching : 1; // 0x4d0
};

struct UTRSEventTriggerComponent {
	TArray<UPersonalEventTrigger*> EventTriggers; // 0xe8
	TArray<UPersonalEventTrigger*> ActiveTriggers; // 0xf8
};

struct UGameplayContext_HeroHealthState {
	UAnimContext_Actor* SubjectHero; // 0x50
};

struct AGobiPlayerController_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x898
	UAchievementTrackerComponent_BP_C* AchievementTrackerComponent_BP; // 0x8a0
	float Chaser_MaxLeapToAttachDistance; // 0x8a8
	FMulticastInlineDelegate JumpInputPressed; // 0x8b0
	FMulticastInlineDelegate SprintInputPressed; // 0x8c0
};

struct UBTDecorator_NavRaycast {
	FBlackboardKeySelector TargetBBKey; // 0x70
};

struct UCameraModifier_ScreenEffect {
	FPostProcessSettings PostProcessSettings; // 0x50
	bool bPlayOnce; // 0x5b0
	FFloatParameterBehavior PostProcessActivationBlend; // 0x5b8
	FFloatParameterBehavior PostProcessDeactivationBlend; // 0x5c8
	UMaterialInterface* ParentMaterial; // 0x5d8
	TArray<FFloatMaterialParameter> ScalarParameters; // 0x5e0
	TArray<FVectorMaterialParameter> VectorParameters; // 0x5f0
	bool bUseDistanceFromSource; // 0x600
	float DistanceToStartScaling; // 0x604
	float DistanceToRemoveEffectAt; // 0x608
	UMaterialInstanceDynamic* MaterialInstance; // 0x610
	TWeakObjectPtr<AActor> Source; // 0x618
	UScreenFXComponent* OwnerComponent; // 0x628
};

struct UMaterialExpressionLandscapeVisibilityMask {
	FGuid ExpressionGUID; // 0x48
};

struct UPlayerState_PostRoundStickTogetherComponent {
	EPostGameStickTogetherVote Vote; // 0x101
};

struct UTweenLinearColor {
	FMulticastInlineDelegate OnTweenStart; // 0xb0
	FMulticastInlineDelegate OnTweenUpdate; // 0xc0
	FMulticastInlineDelegate OnTweenEnd; // 0xd0
};

struct UMovieSceneEventTriggerSection {
	FMovieSceneEventChannel EventChannel; // 0xe8
};

struct UMatchmakingSettingEntryUserWidget {
	FSlateColor UnlockedTextColor; // 0x590
	FSlateColor LockedTextColor; // 0x5c0
	FSlateSound SuccessfulClickSound; // 0x5f0
	FSlateSound FailedClickSound; // 0x608
};

struct UTRSEngineSettings {
	bool bPrimitiveComponentDefaultToNoCollision; // 0x40
	bool bPrimitiveComponentDefaultToGenerateOverlapEvents; // 0x41
	bool bTextRenderComponentDefaultToEditorOnly; // 0x42
	float AkComponentDefaultOcclusionRefreshInterval; // 0x44
	float MaxOcclusionDistance; // 0x48
	ECollisionChannel AudioOcclusionChannel; // 0x4c
	EVisibilityBasedAnimTickOption SkinnedMeshComponentMeshUpdateFlag; // 0x4d
	bool bEnableSkinnedMeshUpdateRateOptimizations; // 0x4e
	bool bSkinnedMeshStopTickingWhenNoLongerAnimating; // 0x4f
	bool bSkinnedMeshUpdateOverlapsOnAnimationFinalize; // 0x50
	bool bSceneCaptureComponent_CaptureEveryFrame; // 0x51
	bool bSceneCaptureComponent_CaptureOnMovement; // 0x52
	bool bSceneCaptureActor_EditorOnly; // 0x53
	int32_t ScreenMessageOffsetX; // 0x54
	int32_t ScreenMessageOffsetY; // 0x58
	float IndirectLightingSmoothness; // 0x5c
	bool bCompileEditorWithBrofiler; // 0x60
	bool bCompilePCGameWithBrofiler; // 0x61
	bool bCompileAndroidGameWithBrofiler; // 0x62
	int32_t BuildLightingSkipsBSP; // 0x64
	bool bGameOverridesVisibilityId; // 0x68
};

struct UGameplayEffectStamina {
	bool bAsPercentOfMax; // 0x244
	float MinStaminaAmount; // 0x248
	float InstantStamina; // 0x24c
	float RecurringStamina; // 0x250
	float RecurringStaminaFrequency; // 0x254
};

struct UAREnvironmentCaptureProbeTexture {
	EARTextureType TextureType; // 0x118
	float Timestamp; // 0x11c
	FGuid ExternalTextureGuid; // 0x120
	FVector2D Size; // 0x130
};

struct UMovieSceneColorTrack {
	bool bIsSlateColor; // 0x90
};

struct UCharacterSelect {
	TArray<FCharacterSelectMapping> SelectedCharacterMapping; // 0x30
	UDataTable* HeroDefinitions; // 0x40
};

struct ADoor {
	USceneComponent* InternalRootComponent; // 0x2a0
	USceneComponent* DoorHingeComponent; // 0x2a8
	UStaticMeshComponent* DoorMeshComponent; // 0x2b0
	UBoxComponent* UseTriggerVolumeComponent; // 0x2b8
	UPingableComponent* PingableComponent; // 0x2c0
	UAkAcousticPortalComponent* AkAcousticPortalComponent; // 0x2c8
	UGobiNavModifierComponent* NavModifierComponent; // 0x2d0
	UGobiNavLinkComponent* NavLinkComponent; // 0x2d8
	UNavRedirectorComponent* NavRedirector; // 0x2e8
	bool bCastStaticShadow; // 0x2f0
	bool bTriggerHorde; // 0x2f1
	bool bAffectAISteeringSeparation; // 0x2f2
	FDoorNavArea DoorNavModifiers; // 0x2f8
	FDoorNavArea DoorNavLinkAreas; // 0x308
	bool bShouldStumbleWhenMoving; // 0x318
	UGobiDamageType* StumbleDamageType; // 0x320
	UAkAudioEvent* SingleOpenStartSound; // 0x328
	UAkAudioEvent* SingleOpenEndSound; // 0x330
	UAkAudioEvent* SingleCloseStartSound; // 0x338
	UAkAudioEvent* SingleCloseEndSound; // 0x340
	UAkAudioEvent* DoubleOpenStartSound; // 0x348
	UAkAudioEvent* DoubleOpenEndSound; // 0x350
	UAkAudioEvent* DoubleCloseStartSound; // 0x358
	UAkAudioEvent* DoubleCloseEndSound; // 0x360
	FMulticastInlineDelegate OnDoorActionBegin; // 0x368
	FMulticastInlineDelegate OnDoorActionComplete; // 0x378
	FMulticastInlineDelegate OnDoorInitialized; // 0x388
	ADoor* SyncedDoor; // 0x398
	UAnimMontage* OpenAnimation; // 0x3a0
	UAnimMontage* AlreadyOpenedAnimation; // 0x3a8
	UAnimMontage* CloseAnimation; // 0x3b0
	UAnimMontage* ClosedAnimation; // 0x3b8
	UCurveFloat* DoorOpenCurve; // 0x3c0
	UCurveFloat* DoorCloseCurve; // 0x3c8
	FCollisionProfileName DamageVolumeOpenDoorCollision; // 0x3d0
	FCollisionProfileName DamageVolumeClosedDoorCollision; // 0x3d8
	float MovementTime; // 0x41c
	float OpenDelay; // 0x420
	float AnimationLengthOverride; // 0x424
	float OpenYawRotation; // 0x428
	FVector OpenLocation; // 0x42c
	bool bCanOpenReversed; // 0x438
	bool bStartLocked; // 0x439
	bool bSingleUse; // 0x43a
	bool bHasCollisionWhenOpen; // 0x43b
	bool bHasCollisionWhenMoving; // 0x43c
	float RequiredUnlockTime; // 0x440
	bool bAutoClose; // 0x444
	float AutoCloseTime; // 0x448
	float NavOpenThreshold; // 0x450
	FGameplayTag DoorStartOpeningCue; // 0x454
	FGameplayTag DoorStartClosingCue; // 0x45c
	FGameplayTag DoorFinishClosingCue; // 0x464
	FGameplayTag DoorFinishOpeningCue; // 0x46c
	FGameplayTag HordeStartCue; // 0x474
	EDoorState DesiredDoorState; // 0x4a8
	bool bRequestLocked; // 0x4a9
	EAlarmMode AlarmMode; // 0x4aa
	float AlarmChance; // 0x4ac
	float AlarmDuration; // 0x4b0
	float AlarmDamageActivationRange; // 0x4b4
	int32_t HitsToTriggerAlarm; // 0x4b8
	bool bAlarmTriggersHorde; // 0x4bc
	bool bDamageFromNonHeroesDisablesAlarm; // 0x4bd
	FGameplayTagContainer AlarmOmenTags; // 0x4c0
	TArray<FDoorAlarmAudio> AlarmAudioEvents; // 0x4e0
	TArray<AActor*> AlarmActors; // 0x4f0
	UAkComponent* AlarmAkComponent; // 0x500
	TArray<USceneComponent*> AlarmSceneComponents; // 0x528
	UAkAudioEvent* AlarmLoop; // 0x550
	UAkAudioEvent* AlarmLoopStop; // 0x558
	UAkAudioEvent* AlarmBeepSound; // 0x560
	float AlarmBeepRate; // 0x568
	EAlarmState AlarmState; // 0x56c
};

struct UAISpawnPointBudgets {
	TArray<FSpawnPointBudget> Budgets; // 0x38
};

struct UEnvQueryGenerator_Teammates {
	bool bPlayersOnly; // 0x58
	FAIDataProviderGameplayTagQueryContainerValue TagQuery; // 0x60
};

struct UScrollBoxWidgetStyle {
	FScrollBoxStyle ScrollBoxStyle; // 0x38
};

struct U3P_Hero_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf90
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xfa0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1530
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x1550
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x1608
	FAnimNode_CurveSource AnimGraphNode_CurveSource; // 0x16a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x16e0
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x17e8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x18e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x19e8
	FAnimNode_SlopeWarping AnimGraphNode_SlopeWarping; // 0x1af0
	float __CustomProperty_AimOffsetWeight_81EF3843487DC4C90A795AABE38C2FA4; // 0x1c90
	FHeroAnimState3P __CustomProperty_HeroAnimState_81EF3843487DC4C90A795AABE38C2FA4; // 0x1ca0
	FAnimState3P __CustomProperty_AnimState3P_81EF3843487DC4C90A795AABE38C2FA4; // 0x20a0
	FGobiAnimationState __CustomProperty_AnimationState_81EF3843487DC4C90A795AABE38C2FA4; // 0x20a8
	FGameplayTag __CustomProperty_HeroStance_81EF3843487DC4C90A795AABE38C2FA4; // 0x2100
	FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance_2; // 0x2108
	FHeroDraggedAnimData3P __CustomProperty_HeroDraggedAnimData_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21b0
	FAnimState3P __CustomProperty_AnimState3P_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21c4
	float __CustomProperty_BlendTime_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21cc
	float __CustomProperty_LocoBlendTime_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21d0
	FLocoLeaning __CustomProperty_Leaning_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21d4
	FLadderAnimState __CustomProperty_LadderState_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21e0
	FLocomotionPrediction __CustomProperty_LocoPredict_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x21e8
	FLocoTurnInPlace __CustomProperty_TurnInPlaceState_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x2250
	FHeroAnimState3P __CustomProperty_HeroAnimState_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x2300
	FGobiAnimationState __CustomProperty_AnimationState_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x2700
	FAnimLocomotionData __CustomProperty_LocomotionData_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x2758
	FAnimDirectionRange __CustomProperty_ForwardDirection_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x2798
	FAnimDirectionRange __CustomProperty_RightDirection_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x27b4
	FAnimDirectionRange __CustomProperty_LeftDirection_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x27d0
	FAnimDirectionRange __CustomProperty_BackwardDirection_6F9D7EFD4B3DCFD3AF55CD9C7A86368D; // 0x27ec
	FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x2808
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x28b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x28f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x29b8
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x2a78
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x2ac0
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag; // 0x2b60
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x2c28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x2ce0
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x2d08
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x2d50
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x2e10
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x2e58
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x2f10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x2f58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x2f80
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2fa8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x3068
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x3108
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x31c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x31e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x3210
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x3238
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x3260
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x3288
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x32b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x3368
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x3390
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x33d8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x3400
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x34b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x34e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x3508
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x35c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x35e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x3610
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x36c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x37a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x3890
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x3978
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_4; // 0x3a60
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_3; // 0x3ad0
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_2; // 0x3b40
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping; // 0x3bb0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x3c20
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x3db0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x3e70
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x4050
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4230
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x4250
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x4308
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x43c0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x43e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x44a8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x4548
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x4590
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x45b8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x45e0
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting; // 0x4698
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x47b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x4870
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x4898
	FAnimNode_Slot AnimGraphNode_Slot; // 0x48c0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x4908
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x49a8
	FAnimNode_Root AnimGraphNode_Root; // 0x4a60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x4a90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x4ab8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4ae0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x4b80
	FGameplayTag HeroStance; // 0x4ba8
	float LocoBlendTime; // 0x4bb0
	float WarpAngle; // 0x4bb4
	float WarpHipOffset; // 0x4bb8
};

struct UNodeMappingContainer {
	TMap<FName, FNodeItem> SourceItems; // 0x30
	TMap<FName, FNodeItem> TargetItems; // 0x80
	TMap<FName, FName> SourceToTarget; // 0xd0
	TSoftObjectPtr<UObject> SourceAsset; // 0x120
	TSoftObjectPtr<UObject> TargetAsset; // 0x148
};

struct AMolotov_InitialFlame_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	UMolotovGrowthComponent* MolotovGrowth; // 0x318
	UAkComponent* Molotov_Fire_AkComp; // 0x320
};

struct UObjectPoolSubsystem {
	TMap<UObject*, FClassPool> Pools; // 0x38
};

struct UMenuAnchor {
	UUserWidget* MenuClass; // 0x160
	FDelegate OnGetMenuContentEvent; // 0x168
	EMenuPlacement Placement; // 0x178
	bool bFitInWindow; // 0x179
	bool ShouldDeferPaintingAfterWindowContent; // 0x17a
	bool UseApplicationMenuStack; // 0x17b
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x180
};

struct UCameraShakeSourceComponent {
	ECameraShakeAttenuation Attenuation; // 0x230
	float InnerAttenuationRadius; // 0x234
	float OuterAttenuationRadius; // 0x238
	UCameraShake* CameraShake; // 0x240
	bool bAutoPlay; // 0x248
};

struct UMaterialExpressionVirtualTextureFeatureSwitch {
	FExpressionInput No; // 0x48
	FExpressionInput Yes; // 0x5c
};

struct UAnimBoneCompressionCodec_ACLDatabase {
	UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x40
};

struct ULootSystemMapConfigAsset {
	TMap<FFilePath, FLootSystemConfig> SystemConfigs; // 0x38
};

struct UObjectLibrary {
	UObject* ObjectBaseClass; // 0x30
	bool bHasBlueprintClasses; // 0x38
	TArray<UObject*> Objects; // 0x40
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x50
	bool bUseWeakReferences; // 0x60
	bool bIsFullyLoaded; // 0x61
};

struct UGameInstance {
	TArray<ULocalPlayer*> LocalPlayers; // 0x40
	UOnlineSession* OnlineSession; // 0x50
	TArray<UObject*> ReferencedObjects; // 0x58
	TArray<UObject*> PerModuleDataObjects; // 0xd8
};

struct UAkRoomComponent {
	char bEnable : 1; // 0x258
	UAkRoomComponent* NextLowerPriorityComponent; // 0x260
	float Priority; // 0x268
	float WallOcclusion; // 0x26c
	FString AuxBusName; // 0x270
	float ReverbLevel; // 0x280
	float AuxSendLevel; // 0x284
	bool AutoPost; // 0x288
};

struct UEnvQueryContext_SpawnContextHero {
	bool bCurrentHeroOnly; // 0x30
};

struct UMovieSceneEasingExternalCurve {
	UCurveFloat* Curve; // 0x38
};

struct UGameplayEvalSet_ClimbLink_C {
	FGameplayEval_IsNavLinkNext IsNavLinkNext; // 0x78
	FGameplayEval_IsAvatarFacing IsAvatarFacing; // 0xc0
	FGameplayEval_ClimbLink ClimbLink; // 0x118
};

struct UForceFeedbackEffect {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x30
	float Duration; // 0x40
};

struct UGameplayEffectRadialDamage {
	FRadialDamageSet RadialDamageSet; // 0x238
	UGobiDamageType* DamageTypeClass; // 0x258
	bool bCalculatePermanentDamageAsPctOfDamage; // 0x260
};

struct UMaterialExpressionComment {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	FString Text; // 0x50
	FLinearColor CommentColor; // 0x60
	int32_t FontSize; // 0x70
};

struct AMainMenuPlayerController {
	FMulticastInlineDelegate OnSignedIn; // 0x7f8
	FMulticastInlineDelegate OnSignedOut; // 0x808
};

struct UMaterialExpressionSphereMask {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
	FExpressionInput Radius; // 0x70
	FExpressionInput Hardness; // 0x84
	float AttenuationRadius; // 0x98
	float HardnessPercent; // 0x9c
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

struct UAnimContext_NavCast {
	UAnimContext_Actor* CastFrom; // 0x50
	UAnimContext_Transform* CastTo; // 0x58
	UNavigationQueryFilter* QueryFilter; // 0x60
	bool bProjectPointsOntoNavMesh; // 0x68
};

struct UMaterialExpressionDistance {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
};

struct USystemSettingsScreen {
	UTextBlock* SafeToLeaveText; // 0x558
};

struct UEnvQueryGenerator_PathingSpline {
	int32_t NumPointsToConsiderAlongSpline; // 0x58
	float DistanceInterval; // 0x5c
	int32_t NumPointsToConsiderWide; // 0x60
	float WidthInterval; // 0x64
	float NavRaycastLength; // 0x68
};

struct UZombieUpgradePreviewUserWidget {
	UImage* UpgradeIcon; // 0x458
	UTextBlock* LevelText; // 0x460
};

struct ARuntimeVirtualTextureVolume {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x2a0
};

struct ABuilderActor {
	bool IsLocked; // 0x2a8
	TArray<TWeakObjectPtr<AActor>> PlacedActors; // 0x2b0
	FName ParentProceduralActorsPath; // 0x2c0
	bool IsExplicitBuilding; // 0x2c8
	bool bIsPrefabBroken; // 0x2c9
	uint32_t LatestVersion; // 0x2cc
	uint32_t PlacedVersion; // 0x2d0
};

struct UDataAsset {
	UDataAsset* NativeClass; // 0x30
};

struct UPlayerPerkMod {
	TArray<FPerkSet> PerkSets; // 0xd0
	char DesiredPerkCount; // 0xe0
};

struct APlayerSlotManager {
	FSlotManagerConfig Config; // 0x2a0
	bool bSupportsBots; // 0x2b0
	TArray<FTeamSlots> TeamSlots; // 0x2b8
	FMulticastInlineDelegate OnPlayerSlotClaimed; // 0x2d0
	FMulticastInlineDelegate OnSlotReplacedWithBot; // 0x2e0
	FMulticastInlineDelegate OnPlayerSlotControlled; // 0x2f0
	FMulticastInlineDelegate OnPlayerSlotReleased; // 0x300
	FMulticastInlineDelegate OnPlayerSlotControlReleased; // 0x310
	FMulticastInlineDelegate OnTeamsSwitched; // 0x320
	UDedicatedServerManager* DedicatedServerManager; // 0x360
};

struct UMovieScene3DPathSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
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

struct USleeper_HeroGrappled_Scenario_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x388
	FScenarioHeroEval_FixedScore FixedHeroEval; // 0x390
	bool StartedInViolent; // 0x3d8
};

struct UGameplayContext_NextDestructible {
	float DestructibleLinkWidth; // 0x90
	float DestructibleLinkEdgePct; // 0x94
	float DistructibleDirectionClampAngle; // 0x98
};

struct UEditableGameplayTagQueryExpression_NoExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x30
};

struct UMovieSceneParticleTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x60
};

struct AFPFlashlight_Epic_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	USpotLightComponent* SpotLight2; // 0x2c0
};

struct UGameplayAction_BurstAttack {
	UGameplayEvaluatorSet* FilterSet; // 0x210
	UGameplayEvaluatorSet* TraversalFilterSet; // 0x218
	float StopDistance; // 0x220
	UAnimContext_Transform* BurstTargetContext; // 0x228
	UAnimContext_Transform* BurstTraveralTargetContext; // 0x230
};

struct UCaravanManager {
	int32_t MaxCaravans; // 0x58
	TWeakObjectPtr<UUIScreenManager> OwningScreenManager; // 0x5c
	FProfileCaravanData ProfileCaravanData; // 0x68
	UStaticCaravans* LoadedStaticCaravans; // 0x80
};

struct USteeringBehavior_Separation {
	float Strength; // 0x58
	float ArrivalStrength; // 0x5c
	float QueryDistance; // 0x60
	float StrengthExponent; // 0x64
	float ArrivalThreshold; // 0x68
	float CoordinateArrivalPathPointDist; // 0x6c
	bool bSeparateWhenNotMoving; // 0x70
	bool bSkipIgnoresWhenNotMoving; // 0x71
	bool bSteerAroundDoors; // 0x72
	float DoorRelevantDistXY; // 0x74
	float DoorRelevantDistZ; // 0x78
	FVector2D DoorAvoidanceMultiplesOfCharacterRadius; // 0x7c
	bool bDoorDebugDraw; // 0x84
	float DoorDebugSpeedScalar; // 0x88
	UAISeparationGroups* IgnoreGroups; // 0x90
	FGameplayTagQuery AvoidTagQuery; // 0x98
	FGameplayTagQuery AllowSteeringTagQuery; // 0xe0
	uint32_t MaxCharacters; // 0x128
};

struct UAnimEvalSet_Vehicle_DeathReaction_C {
	FGameplayEval_Health AvatarHealth; // 0xc0
	FGameplayEval_GameplayTags AvatarTags; // 0x118
};

struct UActiveAreaSetVisibilityComponent {
	FMulticastInlineDelegate OnVisibilityChanged; // 0xe8
	EAASVisibility CurrentVisibility; // 0xf8
	uint32_t CellId; // 0xfc
};

struct APVPHoldoutPlayerSpawnManager {
	UEnvQuery* HeroStartPointQueryTemplate; // 0x408
	AGobiPlayerStart* HeroTestStart; // 0x418
};

struct UInterpToMovementComponent {
	float Duration; // 0x128
	char bPauseOnImpact : 1; // 0x12c
	bool bSweep; // 0x130
	ETeleportType TeleportType; // 0x131
	EInterpToBehaviourType BehaviourType; // 0x132
	bool bCheckIfStillInWorld; // 0x133
	char bForceSubStepping : 1; // 0x134
	FMulticastInlineDelegate OnInterpToReverse; // 0x138
	FMulticastInlineDelegate OnInterpToStop; // 0x148
	FMulticastInlineDelegate OnWaitBeginDelegate; // 0x158
	FMulticastInlineDelegate OnWaitEndDelegate; // 0x168
	FMulticastInlineDelegate OnResetDelegate; // 0x178
	float MaxSimulationTimeStep; // 0x188
	int32_t MaxSimulationIterations; // 0x18c
	TArray<FInterpControlPoint> ControlPoints; // 0x190
};

struct UUserWidget {
	FMulticastInlineDelegate HandleFocusReceived; // 0x150
	FMulticastInlineDelegate HandleFocusLost; // 0x160
	FMulticastInlineDelegate OnFadeTransitionComplete; // 0x170
	FSlateColor ColorAndOpacity; // 0x180
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	FSlateColor ForegroundColor; // 0x1c0
	FDelegate ForegroundColorDelegate; // 0x1f0
	FMargin Padding; // 0x200
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x210
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x220
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x230
	UWidgetTree* WidgetTree; // 0x240
	int32_t Priority; // 0x248
	char bSupportsKeyboardFocus : 1; // 0x24c
	char bIsFocusable : 1; // 0x24c
	char bIsFocusedOnHover : 1; // 0x24c
	char bStopAction : 1; // 0x24c
	char bHasScriptImplementedTick : 1; // 0x24c
	char bHasScriptImplementedPaint : 1; // 0x24c
	char bCookedWidgetTree : 1; // 0x24d
	EWidgetTickFrequency TickFrequency; // 0x258
	UInputComponent* InputComponent; // 0x260
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x268
};

struct UEndTurnCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct UGameplayAction_PlayMontage {
	bool bSortMontagesAlphabetically; // 0x210
	TArray<UAnimMontage*> Montages; // 0x218
	TArray<UMontageSet*> MontageSets; // 0x228
	UMontageSet* FallbackMontageSet; // 0x238
	TArray<UAnimMontage*> ExitMontages; // 0x240
	TArray<UMontageSet*> ExitMontageSets; // 0x250
	FGameplayTagContainer TriggerExitTags; // 0x260
	bool bExitOnEnemyChanged; // 0x280
	bool bExitOnAlerted; // 0x281
	bool bAutoRepickOnBlendout; // 0x282
	bool bAllowExternalMontages; // 0x283
	FVector2D PlayRateRange; // 0x284
	FName TraversalCollisionProfileName; // 0x28c
	TArray<UAnimSequenceBase*> TraversalFlyRequesters; // 0x298
};

struct UItemComponentCopyConverter {
	bool bUpdate; // 0x38
	AActor* ItemClass; // 0x40
	UItemBaseComponent* ItemBaseComponentClass; // 0x48
};

struct UMutilationComponent {
	FMulticastInlineDelegate OnMutilated; // 0xe8
	FMulticastInlineDelegate OnExploded; // 0xf8
	UMutilationConfig* Config; // 0x108
	UMutilationWoundConfigData* WoundConfigsData; // 0x110
	UMutilationHitReactionConfig* HitReactionsData; // 0x118
	int32_t MaxRuptureWounds; // 0x120
	int32_t MaxWounds; // 0x124
	TArray<FMutilationInfo> MutilationState; // 0x190
	FExplodeInfo ExplodeState; // 0x1a0
	TArray<FDismembermentMeshPiece> DismembermentMeshPieces; // 0x230
};

struct UOptionsComboBoxBaseUserWidget {
	bool bShouldIgnoreChangeEvent; // 0x478
	int32_t DefaultIndex; // 0x47c
};

struct UNiagaraDataInterfaceAudioSpectrum {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct USoundNodeLooping {
	int32_t LoopCount; // 0x60
	char bLoopIndefinitely : 1; // 0x64
};

struct UARTextureCameraDepth {
	EARDepthQuality DepthQuality; // 0xe0
	EARDepthAccuracy DepthAccuracy; // 0xe1
	bool bIsTemporallySmoothed; // 0xe2
};

struct UGameplayCardManager {
	FMulticastInlineDelegate OnBurnCardPlayed; // 0x100
	FMulticastInlineDelegate OnDirectorCardPlayed; // 0x110
	FMulticastInlineDelegate OnGameplayCardsChanged; // 0x120
	FMulticastInlineDelegate OnPlayerStateGameplayCardsChanged; // 0x130
	FMulticastInlineDelegate OnPlayerSlotGameplayCardsChanged; // 0x140
	FMulticastInlineDelegate OnGameplayCardsPresetChanged; // 0x150
	FMulticastInlineDelegate OnZombieMutationsChanged; // 0x170
	FMulticastInlineDelegate OnZombieCommunalMutationPointsChanged; // 0x180
	FMulticastInlineDelegate OnPlayerStateZombieMutationPointsChanged; // 0x190
	FMulticastInlineDelegate OnRandomDraw; // 0x1b0
	FMulticastInlineDelegate OnPlayerStateGameplayCardAdded; // 0x1c0
	FMulticastInlineDelegate OnPlayerSlotGameplayCardAdded; // 0x1d0
	FMulticastInlineDelegate OnPlayerStateZombieCardAdded; // 0x1e0
	FMulticastInlineDelegate OnPlayerSlotZombieCardAdded; // 0x1f0
	FMulticastInlineDelegate OnPlayerStateGameplayCardRemoved; // 0x200
	FMulticastInlineDelegate OnPlayerSlotGameplayCardRemoved; // 0x210
	FMulticastInlineDelegate OnPlayerStateZombieCardRemoved; // 0x220
	FMulticastInlineDelegate OnPlayerSlotZombieCardRemoved; // 0x230
	FMulticastInlineDelegate OnPhaseApplication; // 0x240
	TArray<FPlayerActiveGameplayCardData> PlayerActiveGameplayCardDataArray; // 0x278
	TArray<FActiveGameplayCard> StaticCardsFromDifficulty; // 0x298
	TArray<FActiveGameplayCard> DynamicCardsFromDifficulty; // 0x2b8
	FDataTableRowHandle QueuedMissionRowHandle; // 0x2e8
	bool bProcessedQueuedMission; // 0x308
	TArray<FZombieMutationTeamData> ZombieMutationTeamDataArray; // 0x310
	uint64_t RandomStreamSeed; // 0x340
	UGameplayDataSet* GameplayDataSet; // 0x3b8
	TArray<FModInstance> InstancedMods; // 0x3c0
	TMap<UObject*, UGameplayMod*> SharedMods; // 0x3d0
	TArray<FDataTableRowHandle> AllCards; // 0x420
	TArray<FDataTableRowHandle> StarterCards; // 0x430
	TArray<FDataTableRowHandle> BasicCards; // 0x440
	TSet<FDataTableRowHandle> PresetCards; // 0x450
	TSet<FDataTableRowHandle> PresetCardsPvP; // 0x4a0
	TSet<FDataTableRowHandle> ProductCards; // 0x4f0
	TMap<FName, FDataTableRowHandle> CardNameToProductHandles; // 0x590
	TArray<FGameplayCardPreset> BuiltInHeroCardPresetsPvE; // 0x5e0
	TArray<FGameplayCardPreset> BuiltInHeroCardPresetsPvP; // 0x5f0
	TArray<FDataTableRowHandle> AllMutations; // 0x600
};

struct UMaterialExpressionDynamicParameter {
	TArray<FString> ParamNames; // 0x48
	FLinearColor DefaultValue; // 0x58
	uint32_t ParameterIndex; // 0x68
};

struct UBTService_EnvironSensor {
	FGameplayTagQuery AllowSensorTagQuery; // 0x78
	FAIDataProviderGameplayTagQueryContainerValue ThreatPingTagQueryDP; // 0xc0
};

struct AImpostorProxy {
	USceneComponent* DefaultRootComponent; // 0x2a0
};

struct ABotPlaythroughGameMode {
	UMapSpatialInfoComponent* MapSpatialInfoComponent; // 0x588
	APlayerController* PlayerCommandController; // 0x590
};

struct USkeletalMeshRegion {
	TArray<FSkeletalMeshSet> MeshSets; // 0x38
	FGameplayTag SkelMeshMasterGameplayTag; // 0x48
	bool bStartHidden; // 0x50
	bool bCastShadow; // 0x51
	bool bRelativeTransform; // 0x52
	FTransform RelativeTransform; // 0x60
	FGameplayTag RegionIdentifier; // 0x90
};

struct UVRNotificationsComponent {
	FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xe8
	FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xf8
	FMulticastInlineDelegate HMDRecenteredDelegate; // 0x108
	FMulticastInlineDelegate HMDLostDelegate; // 0x118
	FMulticastInlineDelegate HMDReconnectedDelegate; // 0x128
	FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x138
	FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x148
	FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x158
	FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x168
};

struct UModelComponent {
	UBodySetup* ModelBodySetup; // 0x4c8
};

struct UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x38
	float DistributeOverNPoints; // 0x80
	float DistributeThreshold; // 0x84
};

struct UParticleModuleSpawn {
	FRawDistributionFloat Rate; // 0x40
	FRawDistributionFloat RateScale; // 0x70
	EParticleBurstMethod ParticleBurstMethod; // 0xa0
	TArray<FParticleBurst> BurstList; // 0xa8
	FRawDistributionFloat BurstScale; // 0xb8
	char bApplyGlobalSpawnRateScale : 1; // 0xe8
};

struct UClothingAssetCommon {
	UPhysicsAsset* PhysicsAsset; // 0x50
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x58
	UClothConfigBase* ClothSharedSimConfig; // 0xa8
	UClothConfigBase* ClothSimConfig; // 0xb0
	UClothConfigBase* ChaosClothSimConfig; // 0xb8
	TArray<UClothLODDataCommon_Legacy*> ClothLODData; // 0xc0
	TArray<FClothLODDataCommon> LODData; // 0xd0
	TArray<int32_t> LodMap; // 0xe0
	TArray<FName> UsedBoneNames; // 0xf0
	TArray<int32_t> UsedBoneIndices; // 0x100
	int32_t ReferenceBoneIndex; // 0x110
	UClothingAssetCustomData* CustomData; // 0x118
	FClothConfig_Legacy ClothConfig; // 0x120
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput {
	FExpressionInput ScatteringCoefficients; // 0x48
	FExpressionInput AbsorptionCoefficients; // 0x5c
	FExpressionInput PhaseG; // 0x70
};

struct UMaterialExpressionConstantBiasScale {
	FExpressionInput Input; // 0x48
	float Bias; // 0x5c
	float Scale; // 0x60
};

struct UMaterialExpressionWorldPosition {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x48
};

struct UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x528
	int32_t PreviousLODLevel; // 0x52c
	int32_t MinLOD; // 0x530
	int32_t SubDivisionStepSize; // 0x534
	UStaticMesh* StaticMesh; // 0x538
	FColor WireframeColorOverride; // 0x540
	char bEvaluateWorldPositionOffset : 1; // 0x544
	char bOverrideWireframeColor : 1; // 0x544
	char bOverrideMinLod : 1; // 0x544
	char bOverrideNavigationExport : 1; // 0x544
	char bForceNavigationObstacle : 1; // 0x544
	char bDisallowMeshPaintPerInstance : 1; // 0x544
	char bIgnoreInstanceForTextureStreaming : 1; // 0x544
	char bOverrideLightMapRes : 1; // 0x544
	char bCastDistanceFieldIndirectShadow : 1; // 0x545
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x545
	char bUseSubDivisions : 1; // 0x545
	char bUseDefaultCollision : 1; // 0x545
	char bUseBoundsForSectorInclusion : 1; // 0x545
	char bIncludeOutdoorSectors : 1; // 0x545
	char bExclusiveOutdoorSectors : 1; // 0x545
	char bInheritLightShadowPropertiesFromMesh : 1; // 0x545
	char bReverseCulling : 1; // 0x546
	int32_t OverriddenLightMapRes; // 0x548
	float DistanceFieldIndirectShadowMinVisibility; // 0x54c
	float DistanceFieldSelfShadowBias; // 0x550
	float StreamingDistanceMultiplier; // 0x554
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x558
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x568
	FLightmassPrimitiveSettings LightmassSettings; // 0x578
	FPrimitiveParameterCollectionOverrides CollectionOverrides; // 0x590
};

struct UCompositeCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa8
	TArray<UCurveTable*> OldParentTables; // 0xb8
};

struct ULoadoutMod {
	ELoadoutModAdjustmentType LoadoutAdjustmentType; // 0xd0
	FInventoryLoadout Loadout; // 0xd8
	TArray<FLoadoutCharacterOverride> LoadoutCharacterOverrides; // 0x110
};

struct UEnvQueryContext_NavFloorBase {
	bool bUseAgentRadius; // 0x30
	float SearchRadius; // 0x34
};

struct UAnimEvalSet_FilterNavLink {
	TArray<UNavArea*> AllowedNavAreas; // 0xc0
	FGameplayEval_NavArea AllowedNavAreaEval; // 0xd0
};

struct ULootSpawnerComponent {
	FMulticastInlineDelegate OnSpawnItem; // 0x230
	bool bEnabled; // 0x240
	uint32_t SupportedGameModes; // 0x244
	FGameplayTagContainer SupportedTags; // 0x248
	FGameplayTagContainer DisallowedTags; // 0x268
	FGameplayTagContainer ConfigRequiredTags; // 0x288
	EPickupCountType ItemQuantity; // 0x2a8
	bool bAddAttachments; // 0x2a9
	bool RequiresCurrency; // 0x2aa
	TSoftObjectPtr<ULootScenario> LootScenario; // 0x2b0
	AActor* SpawnedItem; // 0x2e0
};

struct USlateBrushAsset {
	FSlateBrush Brush; // 0x30
};

struct UNotificationBoxComponent {
	TArray<FNotificationItem> Notifications; // 0x4d8
	float FacingAngle; // 0x4e8
};

struct UActorChannel {
	AActor* Actor; // 0x78
	TArray<UObject*> CreateSubObjects; // 0x168
};

struct USoundNodeSwitch {
	FName IntParameterName; // 0x60
};

struct ATextRenderActor {
	UTextRenderComponent* TextRender; // 0x2a0
};

struct UComboBox {
	TArray<UObject*> Items; // 0x148
	FDelegate OnGenerateWidgetEvent; // 0x158
	bool bIsFocusable; // 0x168
	bool bIsFocusedOnHover; // 0x169
};

struct UPaperDollItemUserWidget {
	AItem* Item; // 0x460
};

struct UParticleModuleLight_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x138
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
	TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x140
};

struct UMockDataMeshTrackerComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x230
	bool ScanWorld; // 0x240
	bool RequestNormals; // 0x241
	bool RequestVertexConfidence; // 0x242
	EMeshTrackerVertexColorMode VertexColorMode; // 0x243
	TArray<FColor> BlockVertexColors; // 0x248
	FLinearColor VertexColorFromConfidenceZero; // 0x258
	FLinearColor VertexColorFromConfidenceOne; // 0x268
	float UpdateInterval; // 0x278
	UMRMeshComponent* MRMesh; // 0x280
};

struct UAnimNotify_PlayMontageNotifyWindow {
	FName NotifyName; // 0x38
};

struct UNiagaraPrecompileContainer {
	TArray<UNiagaraScript*> Scripts; // 0x30
	UNiagaraSystem* System; // 0x40
};

struct UMovieSceneIntegerSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UNetAnalyticsAggregatorConfig {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x30
};

struct ATitan_AcidBloodPool_S1_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UBoxComponent* Box; // 0x340
	UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x348
};

struct UMovieSceneWidgetMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x70
	FName TrackName; // 0x80
};

struct UMaterialExpression {
	UMaterial* Material; // 0x30
	UMaterialFunction* Function; // 0x38
	char bIsParameterExpression : 1; // 0x40
};

struct UParticleModuleCollisionGPU {
	FRawDistributionFloat Resilience; // 0x38
	FRawDistributionFloat ResilienceScaleOverLife; // 0x68
	float Friction; // 0x98
	float RandomSpread; // 0x9c
	float RandomDistribution; // 0xa0
	float RadiusScale; // 0xa4
	float RadiusBias; // 0xa8
	EParticleCollisionResponse Response; // 0xac
	EParticleCollisionMode CollisionMode; // 0xad
};

struct USizeBox {
	float WidthOverride; // 0x170
	float HeightOverride; // 0x174
	float MinDesiredWidth; // 0x178
	float MinDesiredHeight; // 0x17c
	float MaxDesiredWidth; // 0x180
	float MaxDesiredHeight; // 0x184
	float MinAspectRatio; // 0x188
	float MaxAspectRatio; // 0x18c
	char bOverride_WidthOverride : 1; // 0x190
	char bOverride_HeightOverride : 1; // 0x190
	char bOverride_MinDesiredWidth : 1; // 0x190
	char bOverride_MinDesiredHeight : 1; // 0x190
	char bOverride_MaxDesiredWidth : 1; // 0x190
	char bOverride_MaxDesiredHeight : 1; // 0x190
	char bOverride_MinAspectRatio : 1; // 0x190
	char bOverride_MaxAspectRatio : 1; // 0x190
};

struct UGobiSpatialAudioVolumePreset {
	float Priority; // 0x38
	FString AuxBusName; // 0x40
	FString ExteriorDelayAux; // 0x50
	UAkAudioEvent* AmbienceLoopStart; // 0x60
	UAkAudioEvent* AmbienceLoopStop; // 0x68
	float WallOcclusion; // 0x70
	EWeaponDecayEnum WeaponDecay; // 0x74
	FAkRTPCTransition ThreatSoundOcclusion; // 0x78
	float SendLevel; // 0x90
	float FadeRate; // 0x94
	bool bEnableRoom; // 0x98
};

struct UMatchmakingSelectionUserWidget {
	EMatchmakingScreenMode Mode; // 0x458
	bool bIsSelected; // 0x459
};

struct UPartyToolTipHolderUserWidget {
	UPartyToolTipUserWidget* PartyTooltip; // 0x458
};

struct ACustomizationMannequin {
	FCharacterCustomizationSet DesiredCustomizationSet; // 0x2d8
	TSoftObjectPtr<UAnimMontage> DesiredIdleAnimation; // 0x360
	FDataTableRowHandle SecondaryWeaponRow; // 0x388
	UStaticMeshComponent* WeaponMeshComponent; // 0x3a8
	EHeroMannequinType MannequinType; // 0x3b0
};

struct USourceEffectDynamicsProcessorPreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0x98
};

struct UNavLinkCustomComponent {
	uint32_t NavLinkUserId; // 0x120
	UNavArea* EnabledAreaClass; // 0x128
	UNavArea* DisabledAreaClass; // 0x130
	FNavAgentSelector SupportedAgents; // 0x138
	FVector LinkRelativeStart; // 0x13c
	FVector LinkRelativeEnd; // 0x148
	ENavLinkDirection LinkDirection; // 0x154
	char bLinkEnabled : 1; // 0x158
	char bNotifyWhenEnabled : 1; // 0x158
	char bNotifyWhenDisabled : 1; // 0x158
	char bCreateBoxObstacle : 1; // 0x158
	FVector ObstacleOffset; // 0x15c
	FVector ObstacleExtent; // 0x168
	UNavArea* ObstacleAreaClass; // 0x178
	float BroadcastRadius; // 0x180
	float BroadcastInterval; // 0x184
	ECollisionChannel BroadcastChannel; // 0x188
};

struct UParticleModuleColor {
	FRawDistributionVector StartColor; // 0x38
	FRawDistributionFloat StartAlpha; // 0x80
	char bClampAlpha : 1; // 0xb0
};

struct UGeometryCacheCodecBase {
	TArray<int32_t> TopologyRanges; // 0x30
};

struct AAISmartActor {
	bool bUpdateCollectionGrid; // 0x450
};

struct UEnvQueryTest_Directness {
	UEnvQueryContext* DirectnessTo; // 0x208
	UEnvQueryContext* DirectnessFrom; // 0x210
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

struct UWidgetTree {
	UWidget* RootWidget; // 0x30
};

struct UInfectedHighlightComponent {
	FGameplayTagContainer HighlightTags; // 0x148
	FGameplayTag GhostTag; // 0x168
	bool bHighlightForZombies; // 0x170
};

struct UEnvQueryTest_EnemyDamageTime {
	EEnemyDaamgeTimeSpan Timespan; // 0x2a0
};

struct UInterpTrackColorProp {
	FName PropertyName; // 0x98
};

struct UGameplayEffectForceFeedback {
	float MaxRadius; // 0x238
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x240
	bool bForceFeedbackIsLooping; // 0x248
};

struct UScreenEffect {
	FGameplayTag ScreenEffectTag; // 0x30
	UCameraModifier_ScreenEffect* CameraModifierClass; // 0x38
	FGameplayTagContainer ActivationGameplayTags; // 0x40
	bool bStartActive; // 0x60
	UAkAudioEvent* StartAkEvent; // 0x68
	float StartAkEventCooldown; // 0x70
	UAkAudioEvent* LoopAkEvent; // 0x78
	UAkAudioEvent* StopAkEvent; // 0x80
	TWeakObjectPtr<UCameraModifier> CameraModifier; // 0x88
	float ActivatedTimestamp; // 0x90
};

struct UEnvQueryContext_Blackboard {
	UBlackboardData* BlackboardAsset; // 0x30
	FBlackboardKeySelector BlackboardKey; // 0x38
};

struct AAtmosphericFog {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x2a0
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
	FCompositeFont CompositeFont; // 0x150
};

struct ASphereProjectile {
	USphereComponent* CollisionComponent; // 0x658
};

struct UInputTouchDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x30
};

struct UParticleModuleSizeScale {
	FRawDistributionVector SizeScale; // 0x38
	char EnableX : 1; // 0x80
	char EnableY : 1; // 0x80
	char EnableZ : 1; // 0x80
};

struct UFTUEOptionsPanelUserWidget {
	bool bShowContinueButton; // 0x478
	FText Title; // 0x488
};

struct UEnvQueryGenerator_ActorsOfTypes {
	TArray<FAIDataProviderUObjectValue> ActorTypes; // 0x58
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x68
	FAIDataProviderFloatValue SearchRadius; // 0xa0
	UEnvQueryContext* SearchCenter; // 0xd8
};

struct UMaterialFunction {
	FString Description; // 0x48
	char bExposeToLibrary : 1; // 0x58
	char bPrefixParameterNames : 1; // 0x58
	char bSuffixParameterNames : 1; // 0x58
	uint32_t ParameterNamesSuffixPadding; // 0x5c
	uint32_t ParameterNamesSuffix; // 0x60
	char bReentrantFlag : 1; // 0x64
};

struct AGameState {
	FName MatchState; // 0x2f0
	FName PreviousMatchState; // 0x2f8
	int32_t ElapsedTime; // 0x300
};

struct UScrollBarWidgetStyle {
	FScrollBarStyle ScrollBarStyle; // 0x38
};

struct UFieldSystemComponent {
	UFieldSystem* FieldSystem; // 0x4b0
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x4c8
};

struct UDecalAnalyticsComponent {
	AGameplayAnalyticsManager* AnalyticsManager; // 0x190
};

struct UBrushBuilder {
	FString BitmapFilename; // 0x30
	FString Tooltip; // 0x40
	char NotifyBadParams : 1; // 0x50
	TArray<FVector> Vertices; // 0x58
	TArray<FBuilderPoly> Polys; // 0x68
	FName Layer; // 0x78
	char MergeCoplanars : 1; // 0x80
};

struct UAudioZombieManagerSubsystem {
	TMap<FName, UAudioZombieManagerSystem*> AudioZombieManagerSystems; // 0x38
};

struct UHealOtherLesson_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e8
};

struct UAkCheckBox {
	ECheckBoxState CheckedState; // 0x518
	FDelegate CheckedStateDelegate; // 0x51c
	FCheckBoxStyle WidgetStyle; // 0x530
	EHorizontalAlignment HorizontalAlignment; // 0xb08
	bool IsFocusable; // 0xb09
	FAkBoolPropertyToControl ThePropertyToControl; // 0xb10
	FAkWwiseItemToControl ItemToControl; // 0xb20
	FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb60
	FMulticastInlineDelegate OnItemDropped; // 0xb70
	FMulticastInlineDelegate OnPropertyDropped; // 0xb80
};

struct APhysicsConstraintActor {
	UPhysicsConstraintComponent* ConstraintComp; // 0x2a0
	AActor* ConstraintActor1; // 0x2a8
	AActor* ConstraintActor2; // 0x2b0
	char bDisableCollision : 1; // 0x2b8
};

struct UTRSAmbientSoundManager {
	UWorld* World; // 0x30
};

struct UGameSessionSettings {
	int32_t MaxSpectators; // 0x30
	int32_t MaxPlayers; // 0x34
	char bRequiresPushToTalk : 1; // 0x38
};

struct USoundNodeGroupControl {
	TArray<int32_t> GroupSizes; // 0x60
};

struct AGameNetworkManager {
	float BadPacketLossThreshold; // 0x2a0
	float SeverePacketLossThreshold; // 0x2a4
	int32_t BadPingThreshold; // 0x2a8
	int32_t SeverePingThreshold; // 0x2ac
	int32_t AdjustedNetSpeed; // 0x2b0
	float LastNetSpeedUpdateTime; // 0x2b4
	int32_t TotalNetBandwidth; // 0x2b8
	int32_t MinDynamicBandwidth; // 0x2bc
	int32_t MaxDynamicBandwidth; // 0x2c0
	char bIsStandbyCheckingEnabled : 1; // 0x2c4
	char bHasStandbyCheatTriggered : 1; // 0x2c4
	float StandbyRxCheatTime; // 0x2c8
	float StandbyTxCheatTime; // 0x2cc
	float PercentMissingForRxStandby; // 0x2d0
	float PercentMissingForTxStandby; // 0x2d4
	float PercentForBadPing; // 0x2d8
	float JoinInProgressStandbyWaitTime; // 0x2dc
	float MoveRepSize; // 0x2e0
	float MAXPOSITIONERRORSQUARED; // 0x2e4
	float MAXNEARZEROVELOCITYSQUARED; // 0x2e8
	float CLIENTADJUSTUPDATECOST; // 0x2ec
	float MAXCLIENTUPDATEINTERVAL; // 0x2f0
	float MaxClientForcedUpdateDuration; // 0x2f4
	float ServerForcedUpdateHitchThreshold; // 0x2f8
	float ServerForcedUpdateHitchCooldown; // 0x2fc
	float MaxMoveDeltaTime; // 0x300
	float MaxClientSmoothingDeltaTime; // 0x304
	float ClientNetSendMoveDeltaTime; // 0x308
	float ClientNetSendMoveDeltaTimeThrottled; // 0x30c
	float ClientNetSendMoveDeltaTimeStationary; // 0x310
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x314
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x318
	bool ClientAuthorativePosition; // 0x31c
	float ClientErrorUpdateRateLimit; // 0x320
	float ClientNetCamUpdateDeltaTime; // 0x324
	float ClientNetCamUpdatePositionLimit; // 0x328
	bool bMovementTimeDiscrepancyDetection; // 0x32c
	bool bMovementTimeDiscrepancyResolution; // 0x32d
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x330
	float MovementTimeDiscrepancyMinTimeMargin; // 0x334
	float MovementTimeDiscrepancyResolutionRate; // 0x338
	float MovementTimeDiscrepancyDriftAllowance; // 0x33c
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x340
	bool bUseDistanceBasedRelevancy; // 0x341
};

struct UObjectPropertyMod {
	FName PropertyName; // 0xd0
	EObjectPropertyModType ModType; // 0xd8
	FCustomDataProviderFloat Modifier; // 0xdc
	FCustomDataProviderInt32 IntModifier; // 0xe4
};

struct UZombiePopupAbilityUserWidget {
	UImage* AbilityIcon; // 0x458
	UTextBlock* AbilityNameText; // 0x460
	UTextBlock* AbilityDescriptionText; // 0x468
};

struct UMovieSceneMaterialParameterCollectionTrack {
	UMaterialParameterCollection* MPC; // 0x70
};

struct UCharacterSelectLevelManager {
	ACharacterLineupLayoutManager* LineupLayoutManager; // 0x48
};

struct UMaterialParameterCollection {
	FGuid StateId; // 0x30
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x40
	TArray<FCollectionVectorParameter> VectorParameters; // 0x50
};

struct UPlatformGameInstance {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x1b0
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1c0
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1d0
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1e0
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1f0
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x200
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x210
	FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x220
	FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x230
	FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x240
	FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x250
	FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x260
	FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x270
};

struct ACameraManagerDebugger {
	TWeakObjectPtr<AGobiPlayerCameraManager> CameraManager; // 0x2a0
};

struct UMovieSceneCameraShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraAnimPlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct AGobiGameState_BP_C {
	USceneComponent* DefaultSceneRoot; // 0x6a8
};

struct UControlsOptionsPanelUserWidget {
	UDataTable* CommonActionsTable; // 0x468
	UDataTable* CommonAxisTable; // 0x470
	UDataTable* HeroActionsTable; // 0x478
	UDataTable* HeroAxisTable; // 0x480
	UDataTable* InfectedActionsTable; // 0x488
	UDataTable* InfectedAxisTable; // 0x490
	UDataTable* MovementActionsTable; // 0x498
	UDataTable* MovementAxisTable; // 0x4a0
};

struct UDeckEditPanelUserWidget {
	EGameplayCardDeckType DeckType; // 0x458
};

struct USafeZone {
	bool PadLeft; // 0x160
	bool PadRight; // 0x161
	bool PadTop; // 0x162
	bool PadBottom; // 0x163
};

struct UInputKeyDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x30
};

struct UMaterialInterface {
	USubsurfaceProfile* SubsurfaceProfile; // 0x40
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x58
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x78
	bool bAssignPhysMatToChildren; // 0x8c
};

struct UParticleModuleColorScaleOverLife {
	FRawDistributionVector ColorScaleOverLife; // 0x38
	FRawDistributionFloat AlphaScaleOverLife; // 0x80
	char bEmitterTime : 1; // 0xb0
};

struct UPlayReplicatedMontageCallbackProxy {
	FMulticastInlineDelegate OnCompleted; // 0x30
	FMulticastInlineDelegate OnBlendOut; // 0x40
	FMulticastInlineDelegate OnInterrupted; // 0x50
	FMulticastInlineDelegate OnNotifyBegin; // 0x60
	FMulticastInlineDelegate OnNotifyEnd; // 0x70
};

struct UModifyViewComponent {
	FCameraViewModifier ViewModifier; // 0x138
	FGameplayTagQuery RequiredTags; // 0x180
	bool bRequiresInputPress; // 0x1c8
};

struct ASpectatorBeaconHost {
	USpectatorBeaconState* State; // 0x2c8
	bool bLogoutOnSessionTimeout; // 0x330
	float SessionTimeoutSecs; // 0x334
	float TravelSessionTimeoutSecs; // 0x338
};

struct UBulletPenetrationComponent {
	bool bIgnoreDeadActors; // 0x198
	FUnlimitedBulletPenetration UnlimitedPenetration; // 0x1a0
	UBulletPenetrationDefense* PenetrationDefense; // 0x1f8
	FBulletPenetrationTuning BulletPenetrationTuning; // 0x200
};

struct UEditableGeometryCollectionAdapter {
	UGeometryCollection* GeometryCollection; // 0x30
	UGeometryCollection* OriginalGeometryCollection; // 0x38
	int32_t GeometryCollectionLODIndex; // 0x40
};

struct UPlayerSettingsGame {
	bool bGamePadInvert; // 0xf8
	bool bGamePadInvertHoriz; // 0xf9
	bool bForceFeedbackEnabled; // 0xfa
	bool bMouseInvert; // 0xfb
	bool bMouseSmoothing; // 0xfc
	bool bAutoRecenterRecoil; // 0xfd
	bool bCycleAccessories; // 0xfe
	bool bHoldToSprintKeyboard; // 0xff
	bool bHoldToSprintGamepad; // 0x100
	bool bHoldToCrouchKeyboard; // 0x101
	bool bHoldToCrouchGamepad; // 0x102
	bool bHoldToADSKeyboard; // 0x103
	bool bHoldToADSGamepad; // 0x104
	bool bTreatSemiAutoWeaponsAsFullAuto; // 0x105
	bool bAutoSelectWeaponsOnPickup; // 0x106
	bool bDepletedAmmoWeaponSwitchEnabled; // 0x107
	bool bOffensiveItemQuickUseEnabled; // 0x108
	EAnalogStickResponseCurve MovementAnalogStickResponseCurve; // 0x109
	EAnalogStickResponseCurve CameraAnalogStickResponseCurve; // 0x10a
	float MaxCameraInputSmoothingSecs; // 0x10c
	bool bCameraAccelerationEnabled; // 0x110
	float LeftStickInnerDeadZone; // 0x114
	float LeftStickOuterDeadZone; // 0x118
	float RightStickInnerDeadZone; // 0x11c
	float RightStickOuterDeadZone; // 0x120
	float CameraAnimationStrength; // 0x124
	float ForceFeedbackScale; // 0x128
	FAimSensitivitySettings AimSensitivitySettings; // 0x12c
	FString DefaultOfflineMapName; // 0x150
	TArray<FInputActionKeyMapping> ActionMappings; // 0x160
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x170
	TArray<FInputActionKeyMapping> DefaultActionMappings; // 0x180
	TArray<FInputAxisKeyMapping> DefaultAxisMappings; // 0x190
	EKeyLayout KeyLayout; // 0x1a0
	EColorBlindMode ColorBlindMode; // 0x1a1
	FColorBlindGroupPalette ColorBlindCustomColorPalette; // 0x1a8
	float WaypointOpacity; // 0x1f8
	bool bGameCoachEnabled; // 0x1fc
	bool bHitMarkersEnabled; // 0x1fd
	bool bSkipLegalScreen; // 0x1fe
	bool bTextToSpeechEnabled; // 0x1ff
	ETextToSpeechVoice TextToSpeechVoice; // 0x200
	bool bSpeechToText; // 0x201
	bool bShowSubtitlesOverUI; // 0x202
	ECaptioning Captioning; // 0x203
	EColorBlindMode CaptionColorBlindMode; // 0x204
	int32_t CaptionFontSize; // 0x208
	float CaptionBackgroundOpacity; // 0x20c
	bool bProfanityFilterEnabled; // 0x210
	bool bTakeABreakEnabled; // 0x211
	int32_t GamepadStickConfigIndex; // 0x214
	int32_t GamepadButtonHumanConfigIndex; // 0x218
	int32_t GamepadButtonZombieConfigIndex; // 0x21c
	EReticleOptionType ReticleType; // 0x220
	FLinearColor ReticleColor; // 0x224
	bool bAimAssistEnabled; // 0x234
	float AimAssistFrictionStrength; // 0x238
	float AimAssistMagnetismStrength; // 0x23c
	bool bTargetSnappingEnabled; // 0x240
	EAimAssistSnapType AimAssistSnapType; // 0x241
	int32_t DifficultyPopupMessageShownCount; // 0x244
	FName CampaignMap; // 0x248
	EMissionDifficulty CampaignDifficulty; // 0x250
	FName TrainingMap; // 0x254
	EMissionDifficulty TrainingDifficulty; // 0x25c
	TArray<FName> QuickplayMapChains; // 0x260
	TArray<EMissionDifficulty> QuickplayDifficulties; // 0x270
	bool bBloodDrenchEnabled; // 0x280
};

struct UDecalDefinition {
	FDataTableRowHandle CategoryRowRef; // 0x38
	UMaterialInstance* Decal; // 0x58
	FVector2D RotationMinMax; // 0x60
	FVector2D LifetimeMinMax; // 0x68
	TArray<FDecalDefLifetimeQuality> LifetimePerQuality; // 0x70
	FVector2D FadeDurationMinMax; // 0x80
	FVector2D FadeInDelayMinMax; // 0x88
	FVector2D FadeInDurationMinMax; // 0x90
	float FadeScreenSize; // 0x98
	float ProjectionDepth; // 0x9c
	FVector2D ScaleMinMax; // 0xa0
	bool ScaleNonUniform; // 0xa8
	FVector2D ScaleNonUniformMin; // 0xac
	FVector2D ScaleNonUniformMax; // 0xb4
	bool DirectionStretchEnable; // 0xbc
	FVector2D DirectionStretchMinMax; // 0xc0
	float DirectionStretchSpawnPercent; // 0xc8
	bool bNormal; // 0xcc
	bool bLifetimeParams; // 0xcd
	bool SoftnessOverride; // 0xce
	float Softness; // 0xd0
	bool SubUVOverride; // 0xd4
	int32_t SubUVFrameMin; // 0xd8
	int32_t SubUVFrameMax; // 0xdc
	bool CurveOverride; // 0xe0
	UCurveLinearColorAtlas* CurveAtlas; // 0xe8
	UCurveLinearColor* Curve; // 0xf0
	int32_t SortOrder; // 0xf8
};

struct UTitanStage2TentacleAnimInstance {
	UTitanStage2TentacleComponent* TentacleComponent; // 0x2c0
	bool bDormant; // 0x2c8
	bool bSmashTell; // 0x2c9
	bool bSmashAttack; // 0x2ca
	bool bSmashAttackLoop; // 0x2cb
	bool bSmashRetract; // 0x2cc
	UAnimSequence* SmashTellBeginAnimSequence; // 0x2d0
	UAnimSequence* SmashTellLoopAnimSequence; // 0x2d8
	UAnimSequence* SmashAttackBeginAnimSequence; // 0x2e0
	UAnimSequence* SmashAttackLoopAnimSequence; // 0x2e8
	UAnimSequence* SmashRetractAnimSequence; // 0x2f0
};

struct UInterpTrackInstFloatProp {
	float ResetFloat; // 0x60
};

struct UTuningDataConverter {
	bool bUpdate; // 0x38
	UActorComponent* ActorComponentClass; // 0x40
	TArray<AActor*> ActorClasses; // 0x48
};

struct UParticleModuleKillHeight {
	FRawDistributionFloat Height; // 0x38
	char bAbsolute : 1; // 0x68
	char bFloor : 1; // 0x68
	char bApplyPSysScale : 1; // 0x68
};

struct UHeroFacialAnimationComponent {
	float FlinchExpressionTime; // 0x1b0
	float FlinchCooldown; // 0x1b4
	float MinPctDamageForExpression; // 0x1b8
	float MaxPctLowDamage; // 0x1bc
	float MaxPctMedDamage; // 0x1c0
	TArray<FacialExpressionCombos> GrappledFacialExpressions; // 0x1c8
	TArray<FacialExpressionCombos> LowDamageFacialExpressions; // 0x1d8
	TArray<FacialExpressionCombos> MedDamageFacialExpressions; // 0x1e8
	TArray<FacialExpressionCombos> HighDamageFacialExpressions; // 0x1f8
	float ExertBlendTime; // 0x208
	float ExertMaxAHValue; // 0x20c
};

struct UHUDAmmoUserWidget {
	bool bIsLowAmmo; // 0x4b0
};

struct UParticleModuleMeshRotationRateOverLife {
	FRawDistributionVector RotRate; // 0x38
	char bScaleRotRate : 1; // 0x80
};

struct UBTDecorator_TagCooldown {
	FGameplayTag CooldownTag; // 0x70
	float CooldownDuration; // 0x78
	bool bAddToExistingDuration; // 0x7c
	bool bActivatesCooldown; // 0x7d
};

struct UParticleModuleSize {
	FRawDistributionVector StartSize; // 0x38
};

struct AVFXCorpse_BP_C {
	UPoseableMeshComponent* PoseableMesh; // 0x308
};

struct UInterpTrackDirector {
	TArray<FDirectorTrackCut> CutTrack; // 0x78
	char bSimulateCameraCutsOnClients : 1; // 0x88
};

struct UPhysicsSpringComponent {
	float SpringStiffness; // 0x230
	float SpringDamping; // 0x234
	float SpringLengthAtRest; // 0x238
	float SpringRadius; // 0x23c
	ECollisionChannel SpringChannel; // 0x240
	bool bIgnoreSelf; // 0x241
	float SpringCompression; // 0x244
};

struct ULedgeHangUsable_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4f8
	bool BeingRevived; // 0x500
	float UseTime; // 0x504
	float RequiredUseTime_1; // 0x508
	FMulticastInlineDelegate DidIncapRevive; // 0x510
	FMulticastInlineDelegate DidRescue; // 0x520
	FMulticastInlineDelegate DidIncapReviveStart; // 0x530
	float RequiredUseTimeVOThreshold; // 0x540
};

struct UEnvQueryTest_IsClaimed {
	UEnvQueryContext* Querier; // 0x208
	float ClaimRadius; // 0x210
	ERadiusOperation RadiusOperation; // 0x214
	EEnvItemStatus ItemsClaimingTheirPositionShould; // 0x215
};

struct AWaypoint {
	FWaypointDefinition WaypointDef; // 0x2a8
	UActorComponent* PingTarget; // 0x378
	float Scale; // 0x380
	UWaypointDataSet* DataSet; // 0x388
	TArray<UWaypointUserWidget*> Widgets; // 0x390
};

struct UCheckBoxStyleAsset {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct ATPFlashlight_Low_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
};

struct UParticleModuleLocation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct ANavigationData {
	UPrimitiveComponent* RenderingComp; // 0x2a8
	FNavDataConfig NavDataConfig; // 0x2b0
	char bEnableDrawing : 1; // 0x328
	char bForceRebuildOnLoad : 1; // 0x328
	char bAutoDestroyWhenNoNavigation : 1; // 0x328
	char bCanBeMainNavData : 1; // 0x328
	char bCanSpawnOnRebuild : 1; // 0x328
	char bRebuildAtRuntime : 1; // 0x328
	ERuntimeGenerationType RuntimeGeneration; // 0x32c
	float ObservedPathsTickInterval; // 0x330
	uint32_t DataVersion; // 0x334
	TArray<FSupportedAreaData> SupportedAreas; // 0x418
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

struct AZombieMelee_AICharacterBP_C {
	UInfectedHighlightComponent* InfectedHighlight; // 0x13a0
};

struct UARFaceGeometry {
	FVector LookAtTarget; // 0xe8
	bool bIsTracked; // 0xf4
	TMap<EARFaceBlendShape, float> BlendShapes; // 0xf8
};

struct UGameplayEffectParticle {
	USceneComponent* TargetSceneComponent; // 0x238
	FComponentLookup TargetSceneComponentLookup; // 0x240
	FParticleSet ParticleSet; // 0x280
	FParticleSet OnStopParticleSet; // 0x300
	bool bTurnOffOnTargetDeath; // 0x380
};

struct UGridPanel {
	TArray<float> ColumnFill; // 0x160
	TArray<float> RowFill; // 0x170
};

struct UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x30
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

struct UGameplayCardFan {
	FMulticastInlineDelegate OnCardAdded; // 0x718
	FMulticastInlineDelegate OnCardCountChanged; // 0x728
};

struct UInGameAdManager {
	char bShouldPauseWhileAdOpen : 1; // 0x40
	TArray<FDelegate> ClickedBannerDelegates; // 0x48
	TArray<FDelegate> ClosedAdDelegates; // 0x58
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

struct ACapsuleProjectile {
	UCapsuleComponent* CollisionComponent; // 0x658
};

struct AGobiNavLink {
	UGobiNavLinkComponent* NavLinkComponent; // 0x2a8
};

struct ABird {
	UStaticMesh* PerchedMesh; // 0x2a8
	UStaticMesh* FlyingMesh; // 0x2b0
	USkeletalMesh* SkeletalMesh; // 0x2b8
	FName ParticlesBone; // 0x2c0
	float FlyoffParticlesChance; // 0x2c8
	UParticleSystem* FlyoffParticles; // 0x2d0
	UParticleSystem* DeathParticles; // 0x2d8
	UAnimMontage* IdleAnim; // 0x2e0
	TMap<FName, float> IdleFlourishWeights; // 0x2e8
	TArray<FName> IdleFlourishesWithHorizontalMovement; // 0x338
	FVector2D IdleFlourishDelay; // 0x348
	UAnimMontage* FlyingAnim; // 0x350
	FName LandingSection; // 0x358
	float LandingDuration; // 0x360
	FVector2D HealthScale; // 0x364
	FVector2D Scale; // 0x36c
	FVector2D Speed; // 0x374
	float TurnRate; // 0x37c
	float LaunchDelay; // 0x380
	float AlertHearingRadius; // 0x384
	float AlertRadiusMultiplier; // 0x388
	float WeaponShotHearingRadius; // 0x38c
	float WeaponWhizByHearingRadius; // 0x390
	float WeaponImpactHearingRadius; // 0x394
	float WeaponAlertRadiusScalePower; // 0x398
	bool bDamageable; // 0x39c
	UAkAudioEvent* AKEDeath; // 0x3a0
	UAkAudioEvent* AKEDeathFire; // 0x3a8
	FGameplayTag UpdateRateOptimizationCategory; // 0x3b0
	EBirdState State; // 0x3b8
	USplineComponent* SplineFlying; // 0x3c0
	ABirdSystem* BirdSystem; // 0x3c8
	ABirdSite* CurrentSite; // 0x3d0
	bool TakeoffDelay; // 0x3d8
	UStaticMeshComponent* StaticMeshComponent; // 0x408
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x410
	UGameplayTagsComponent* GameplayTagsComponent; // 0x418
	UHealthComponent* HealthComponent; // 0x420
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x428
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

struct UJoinSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x38
	FMulticastInlineDelegate OnFailure; // 0x48
};

struct ULoadoutTrait {
	FInventoryLoadout Loadout; // 0x30
	ELoadoutSource LoadoutSource; // 0x68
};

struct USynthComponentMonoWaveTable {
	FMulticastInlineDelegate OnTableAltered; // 0x710
	FMulticastInlineDelegate OnNumTablesChanged; // 0x720
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x730
};

struct UMatchesSubsystem {
	bool bEnabledForPlatform; // 0x58
	FTaskTimerConfig OperationTimerConfig; // 0x60
	FTaskTimerConfig AddRemovePlayersTimerConfig; // 0x160
	FTaskTimerConfig HeartbeatTimerConfig; // 0x260
};

struct UInterpTrackInstVectorMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x30
	TArray<FVector> ResetVectors; // 0x40
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x50
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x60
};

struct USoundNodeMixer {
	TArray<float> InputVolume; // 0x60
};

struct UScaleBoxSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UDistributionVector {
	char bCanBeBaked : 1; // 0x38
	char bIsDirty : 1; // 0x38
	char bBakedDataSuccesfully : 1; // 0x38
};

struct UAkMacInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
	FAkTRSPerPlatformSettings TRSSettings; // 0xf8
};

struct UOnInflictDamageTrigger {
	int32_t KillCountL1; // 0x50
	int32_t KillCountL2; // 0x54
	int32_t KillCountL3; // 0x58
	int32_t KillCountL4; // 0x5c
	float MinTimeForEngagingEnemy; // 0x60
	float MinTimeForEngagingSpecial; // 0x64
	float SpecialLowHealthRequirement; // 0x68
	int32_t HitsRequiredForAimHead; // 0x6c
	int32_t HitsRequiredForFindWeakSpot; // 0x70
	FGameplayTag HagTag; // 0x74
	FGameplayTag FakeDeathTag; // 0x7c
	TArray<TWeakObjectPtr<AGobiCharacter>> DeadHags; // 0x88
	FGameplayTagQuery SpecialDownedTags; // 0x98
	FGameplayTagQuery AllSpecialTags; // 0xe0
	FGameplayTagQuery MeleeKillTag; // 0x128
	FGameplayTagQuery HeadshotWeaponTag; // 0x170
	FGameplayTagQuery SpecialHeadWeakspotTags; // 0x1b8
	FGameplayTagQuery SpecialShootWeakspotTags; // 0x200
};

struct AQADashBoundary {
	UTextRenderComponent* TextRenderDottedLine; // 0x2a0
	UTextRenderComponent* TextRenderSection; // 0x2a8
	UTextRenderComponent* TextRenderSector; // 0x2b0
};

struct UBlackboardKeyType_NativeEnum {
	FString EnumName; // 0x38
	UEnum* EnumType; // 0x48
};

struct UNavigationInvokerComponent {
	float TileGenerationRadius; // 0xe8
	float TileRemovalRadius; // 0xec
};

struct URichTextBlock {
	FRichTextGlobalStyle DefaultGlobalStyle; // 0x168
	bool bForceUppercase; // 0x170
	FText Text; // 0x178
	UDataTable* TextStyleSet; // 0x190
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x198
	bool bOverrideDefaultStyle; // 0x1a8
	FTextBlockStyle DefaultTextStyleOverride; // 0x1b0
	float MinDesiredWidth; // 0x450
	int32_t Kerning; // 0x454
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x6f8
};

struct UMaterialExpressionDotProduct {
	FExpressionInput A; // 0x48
	FExpressionInput B; // 0x5c
};

struct APrecomputedVisibilityOverrideVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x2d8
	TArray<AActor*> OverrideInvisibleActors; // 0x2e8
	TArray<FName> OverrideInvisibleLevels; // 0x2f8
};

struct UInterpTrackVectorProp {
	FName PropertyName; // 0x98
};

struct UMovieSceneStringSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UMapMetricsDataAsset {
	bool bLogOutResults; // 0x38
	float ClimbMetricStepDist; // 0x3c
	float JumpMetricStepDist; // 0x40
	FMapMetricData MapMetricsCombined; // 0x48
	TArray<FMapMetricData> MapMetrics; // 0x80
};

struct UAnimContext_ActorLocator {
	UAnimContext_Actor* ActorContext; // 0x70
	FGameplayTag LocatorTag; // 0x78
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

struct AHG05_BP_C {
	UADSComponent* ADS; // 0x520
	UFireModeSingleTraceComponent* FireModeSingleTrace; // 0x528
	UBulletPenetrationComponent* BulletPenetration; // 0x530
	UClipAmmoComponent* ClipAmmo; // 0x538
	URecoilComponent* Recoil; // 0x540
	UClipReloadComponent* ClipReload; // 0x548
	USpreadComponent* Spread; // 0x550
	UItemAnimationDataComponent* ItemAnimationData; // 0x558
};

struct AGobiAIController {
	UBehaviorTree* BTAsset; // 0x398
	FDMapAISpawnData DMapSpawnData; // 0x3b4
	FMulticastInlineDelegate OnDMapSpawnDistanceCalculated; // 0x3c0
	bool bIsClientAI; // 0x3d0
	bool bIgnoresBotsWhenCalm; // 0x3d1
	TMap<uint32_t, FMovePathRequestData> CurrentRequestsData; // 0x3f0
};

struct UComboBoxWidgetStyle {
	FComboBoxStyle ComboBoxStyle; // 0x38
};

struct UParticleModuleLocationPrimitiveTriangle {
	FRawDistributionVector StartOffset; // 0x38
	FRawDistributionFloat Height; // 0x80
	FRawDistributionFloat Angle; // 0xb0
	FRawDistributionFloat Thickness; // 0xe0
};

struct UAISenseConfig {
	FColor DebugColor; // 0x30
	float MaxAge; // 0x34
	char bStartsEnabled : 1; // 0x38
};

struct UBookMark2D {
	float Zoom2D; // 0x30
	FIntPoint Location; // 0x34
};

struct UBillboardComponent {
	UTexture2D* Sprite; // 0x4b0
	char bIsScreenSizeScaled : 1; // 0x4b8
	float ScreenSize; // 0x4bc
	float U; // 0x4c0
	float UL; // 0x4c4
	float V; // 0x4c8
	float VL; // 0x4cc
};

struct ASkeletalMeshActor {
	char bShouldDoAnimNotifies : 1; // 0x2a8
	char bWakeOnLevelStart : 1; // 0x2a8
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x2b0
	USkeletalMesh* ReplicatedMesh; // 0x2b8
	UPhysicsAsset* ReplicatedPhysAsset; // 0x2c0
	UMaterialInterface* ReplicatedMaterial0; // 0x2c8
	UMaterialInterface* ReplicatedMaterial1; // 0x2d0
};

struct UGridSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
	int32_t Row; // 0x54
	int32_t RowSpan; // 0x58
	int32_t Column; // 0x5c
	int32_t ColumnSpan; // 0x60
	int32_t Layer; // 0x64
	FVector2D Nudge; // 0x68
};

struct UGobiCharacterMovementComponent {
	ECollisionEnabled CollisionType; // 0x68c
	int8_t CollisionProfileIndex; // 0x68d
	FGameplayTagContainer AttachedTags; // 0x698
	UCharacterMovementDebugEndpoint* CharacterMovementDebugEndpoint; // 0x708
	bool bUseGroundCheckSphereSweep; // 0x710
	bool bUseFootPlantingSphereSweep; // 0x711
	ARecastNavMesh* RecastNavMesh; // 0x718
	float OverrideGroundTraceLength; // 0x720
	float FallTimeTillFallOutOfWorld; // 0x734
	AGobiCharacter* GobiCharacter; // 0x760
	FMovementTickableInput SimulatedInput; // 0x768
	UReplicatedMontageComponent* ReplicatedMontageComponent; // 0x790
	UGameplayTagsComponent* GameplayTagsComponent; // 0x7a0
	EAutoCrouch AutoCrouch; // 0x7e4
	float MaxBackupToUnCrouch; // 0x7e8
	bool bCanWalkOnUnwalkableSurfaces; // 0x7ec
	UChargeComponent* ChargeComponent; // 0x818
	float DefaultPathMovementScalar; // 0x820
	TMap<FGameplayTag, float> PathMovementScalars; // 0x828
	UNavigationQueryFilter* NavWalkingFilter; // 0x8c8
	FGameplayTagQuery NavMeshIgnoreTagsQuery; // 0x8d0
	FCollisionProfileName NavWalkingCollisionProfile; // 0x918
	FName DefaultWalkingCollisionProfile; // 0x920
};

struct UBehaviorTreeComponent {
	TArray<UBTNode*> NodeInstances; // 0x168
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x2a0
};

struct UWaterRippleMakers {
	UWaterRipplerDef* DefaultDef; // 0x38
	TMap<AGobiCharacter*, UWaterRipplerDef*> ActorTypes; // 0x40
};

struct UGameplayEffectSetMaterialParams {
	UMeshMaterialParamSet* MaterialParamSet; // 0x238
	UMeshMaterialParamSet* OnStopMaterialParamSet; // 0x240
	bool bRestoreParamValuesOnStop; // 0x248
};

struct USingleClickInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UAchievement {
	EAchievementCategory Category; // 0x31
	FAchievementConfig AchievementConfig; // 0x38
	bool bRunInCampaign; // 0x60
	bool bRunInPVP; // 0x61
	TArray<FDataTableRowHandle> CardRewards; // 0x68
	int32_t SupplyPointsReward; // 0x78
	bool bNotForShipping; // 0x7c
	FText FriendlyName; // 0x80
	FText FriendlyDescription; // 0x98
	UTexture2D* Icon; // 0xb0
};

struct UItemPreLoader {
	TArray<FDataTableRowHandle> ItemRows; // 0x30
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
};

struct UAnimSharingStateInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct AOnlineBeaconHost {
	int32_t ListenPort; // 0x2d0
	TArray<AOnlineBeaconClient*> ClientActors; // 0x2d8
};

struct AMapSpatialInfoGenerationVolume {
	bool bOverrideNavMeshQueryExtentZFactor; // 0x2d8
	float NavMeshQueryExtentZFactor; // 0x2dc
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

struct UGobiGameInstance {
	FMulticastInlineDelegate OnLocalTeamChanged; // 0x1b0
	TMap<FString, UObject*> SeamlessTravelData; // 0x8e8
	UPlayerSettingsSystem* PlayerSettingsSystem; // 0x938
	USecondarySignInInputProcessor* SecondarySignInInputProcessor; // 0x940
	UDistanceMapManager* DistanceMapManagerClass; // 0x948
	UDistanceMapManager* DistanceMapManager; // 0x950
	UDifficultyManager* DifficultyManager; // 0x958
	UClaimManager* ClaimManager; // 0x960
	UCorpseManager* CorpseManagerClass; // 0x968
	UCampaignRunManager* CampaignRunManagerClass; // 0x970
	UCorpseManager* CorpseManager; // 0x978
	UOnlineSessions* OnlineSessions; // 0x980
	UDedicatedServerManager* DedicatedServerManager; // 0x988
	UGobiPlayerProfileManager* GobiPlayerProfileManager; // 0x990
	UMatchmaking* Matchmaking; // 0x998
	UMatchmakingPoolManager* MatchmakingPoolManager; // 0x9a0
	UOnlineFlow* OnlineFlow; // 0x9a8
	UFriendsManager* FriendsManager; // 0x9b0
	UGobiWebServices* GobiWebServices; // 0x9b8
	UDedicatedServerConsole* DedicatedServerConsole; // 0x9c0
	UDataTable* MissionMapsTable; // 0x9c8
	UGlobalAssetLoader* GlobalAssetLoader; // 0x9d0
	UGlobalAssetLoaderV2* GlobalAssetLoaderV2; // 0x9d8
	UTeamRelationshipMap* TeamRelationshipMapClass; // 0x9e0
	UPlatformInputIcons* InputIconsClass; // 0x9e8
	UItemPreLoader* ItemPreLoader; // 0x9f0
	UGobiMusicSystem* MusicSystemClass; // 0x9f8
	UAudioMutilationManager* AudioMutilationManagerClass; // 0xa00
	USharedSoundManager* SharedSoundManagerClass; // 0xa08
	TArray<UAudioZombieManagerSystem*> AudioZombieManagerSystemClasses; // 0xa10
	UCampaignRunManager* CampaignRunManager; // 0xa20
	UGlobalAnalyticsManager* GlobalAnalyticsManager; // 0xa28
	UCustomCollisionChannelMap* CustomCollisionChannelMap; // 0xa30
	UAutomatedClient* AutomatedClient; // 0xa48
	AAudioController* AudioController; // 0xa50
};

struct APlayerAssetLoader {
	UAsyncAssetSet* MannequinAssetSet; // 0x2a0
	UAsyncAssetSet* SelectedCharactersAssetSet; // 0x2a8
	UAsyncAssetSet* HeroBotAssetSet; // 0x2b0
};

struct UGraphNodeContextMenuContext {
	UBlueprint* Blueprint; // 0x30
	UEdGraph* Graph; // 0x38
	UEdGraphNode* Node; // 0x40
	bool bIsDebugging; // 0x50
};

struct U3P_HeroLoco_Base_ABP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_77; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_76; // 0x320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_75; // 0x348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_74; // 0x370
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_23; // 0x398
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_22; // 0x408
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_21; // 0x478
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_20; // 0x4e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_27; // 0x558
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_26; // 0x640
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_25; // 0x728
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_24; // 0x810
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x8f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x9a8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_19; // 0xa48
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_18; // 0xab8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_17; // 0xb28
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_16; // 0xb98
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_15; // 0xc08
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_14; // 0xc78
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_13; // 0xce8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_12; // 0xd58
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_11; // 0xdc8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_10; // 0xe38
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_9; // 0xea8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_8; // 0xf18
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_7; // 0xf88
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_6; // 0xff8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_23; // 0x1068
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x1150
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_5; // 0x1218
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x12e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_22; // 0x1380
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0x1468
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x1550
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x1638
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x1720
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x1808
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x18f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x19d8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x1ac0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x1b70
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x1c58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x1d08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x1df0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x1ed8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x1fc0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0x20a8
	FAnimNode_StateResult AnimGraphNode_StateResult_59; // 0x2158
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_73; // 0x2188
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_72; // 0x21b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x21d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x2250
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x22f0
	FAnimNode_StateResult AnimGraphNode_StateResult_58; // 0x2368
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_4; // 0x2398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x2460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x24d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x2550
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x25c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x2640
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x26b8
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_3; // 0x2758
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x2820
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x2898
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x2910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x2988
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x2a00
	FAnimNode_StateResult AnimGraphNode_StateResult_57; // 0x2a78
	FAnimNode_StateMachine AnimGraphNode_StateMachine_17; // 0x2aa8
	FAnimNode_StateResult AnimGraphNode_StateResult_56; // 0x2b58
	FAnimNode_StateMachine AnimGraphNode_StateMachine_16; // 0x2b88
	FAnimNode_StateResult AnimGraphNode_StateResult_55; // 0x2c38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_71; // 0x2c68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_70; // 0x2c90
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x2cb8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x2da0
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_5; // 0x2e68
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_4; // 0x2ed8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_3; // 0x2f48
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping_2; // 0x2fb8
	FAnimNode_OrientationWarping AnimGraphNode_OrientationWarping; // 0x3028
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x3098
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x3180
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x3268
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x3350
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0x3438
	FAnimNode_StateResult AnimGraphNode_StateResult_54; // 0x34e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_69; // 0x3518
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_68; // 0x3540
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x3568
	FAnimNode_StateResult AnimGraphNode_StateResult_53; // 0x35e0
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag_2; // 0x3610
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x36d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x3750
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x37c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x3840
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x38b8
	FAnimNode_StateResult AnimGraphNode_StateResult_52; // 0x3930
	FAnimNode_StateMachine AnimGraphNode_StateMachine_15; // 0x3960
	FAnimNode_StateResult AnimGraphNode_StateResult_51; // 0x3a10
	FAnimNode_StateMachine AnimGraphNode_StateMachine_14; // 0x3a40
	FAnimNode_StateResult AnimGraphNode_StateResult_50; // 0x3af0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_13; // 0x3b20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_67; // 0x3bd0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_66; // 0x3bf8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_65; // 0x3c20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_64; // 0x3c48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_63; // 0x3c70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_62; // 0x3c98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_61; // 0x3cc0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_60; // 0x3ce8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59; // 0x3d10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_58; // 0x3d38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_57; // 0x3d60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_56; // 0x3d88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_55; // 0x3db0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_54; // 0x3dd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_53; // 0x3e00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_52; // 0x3e28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_51; // 0x3e50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50; // 0x3e78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_49; // 0x3ea0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_48; // 0x3ec8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_47; // 0x3ef0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_46; // 0x3f18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45; // 0x3f40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44; // 0x3f68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43; // 0x3f90
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42; // 0x3fb8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41; // 0x3fe0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_40; // 0x4008
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39; // 0x4030
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0x4058
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0x4080
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0x40a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x40d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x40f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x4120
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0x4148
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x4170
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x4198
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x41c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x41e8
	FAnimNode_StateResult AnimGraphNode_StateResult_49; // 0x4260
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x4290
	FAnimNode_StateResult AnimGraphNode_StateResult_48; // 0x4308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x4338
	FAnimNode_StateResult AnimGraphNode_StateResult_47; // 0x43b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x43e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x4408
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x4430
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x4458
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x4480
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x44a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x44d0
	FAnimNode_StateResult AnimGraphNode_StateResult_46; // 0x4548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x4578
	FAnimNode_StateResult AnimGraphNode_StateResult_45; // 0x45f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x4620
	FAnimNode_StateResult AnimGraphNode_StateResult_44; // 0x4698
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x46c8
	FAnimNode_StateResult AnimGraphNode_StateResult_43; // 0x4740
	FAnimNode_StateMachine AnimGraphNode_StateMachine_12; // 0x4770
	FAnimNode_StateResult AnimGraphNode_StateResult_42; // 0x4820
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0x4850
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x48c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x48f0
	FAnimNode_StateResult AnimGraphNode_StateResult_41; // 0x49b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x49e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x4a10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0x4a38
	FAnimNode_StateResult AnimGraphNode_StateResult_40; // 0x4ab0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0x4ae0
	FAnimNode_StateResult AnimGraphNode_StateResult_39; // 0x4b58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0x4b88
	FAnimNode_StateResult AnimGraphNode_StateResult_38; // 0x4c00
	FAnimNode_StateMachine AnimGraphNode_StateMachine_11; // 0x4c30
	FAnimNode_StateResult AnimGraphNode_StateResult_37; // 0x4ce0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x4d10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x4d38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0x4d60
	FAnimNode_StateResult AnimGraphNode_StateResult_36; // 0x4dd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0x4e08
	FAnimNode_StateResult AnimGraphNode_StateResult_35; // 0x4e80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0x4eb0
	FAnimNode_StateResult AnimGraphNode_StateResult_34; // 0x4f28
	FAnimNode_StateMachine AnimGraphNode_StateMachine_10; // 0x4f58
	FAnimNode_StateResult AnimGraphNode_StateResult_33; // 0x5008
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x5038
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x5060
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x5088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0x50b0
	FAnimNode_StateResult AnimGraphNode_StateResult_32; // 0x5128
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0x5158
	FAnimNode_StateResult AnimGraphNode_StateResult_31; // 0x51d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0x5200
	FAnimNode_StateResult AnimGraphNode_StateResult_30; // 0x5278
	FAnimNode_StateMachine AnimGraphNode_StateMachine_9; // 0x52a8
	FAnimNode_StateResult AnimGraphNode_StateResult_29; // 0x5358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x5388
	FAnimNode_StateResult AnimGraphNode_StateResult_28; // 0x5400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x5430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x5458
	FAnimNode_StateResult AnimGraphNode_StateResult_27; // 0x54d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x5500
	FAnimNode_StateResult AnimGraphNode_StateResult_26; // 0x5578
	FAnimNode_StateMachine AnimGraphNode_StateMachine_8; // 0x55a8
	FAnimNode_StateResult AnimGraphNode_StateResult_25; // 0x5658
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x5688
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x56b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x56d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x5700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x5728
	FAnimNode_StateResult AnimGraphNode_StateResult_24; // 0x57a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x57d0
	FAnimNode_StateResult AnimGraphNode_StateResult_23; // 0x5848
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x5878
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x58f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x5920
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x5998
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x59c8
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x5a40
	FAnimNode_StateMachine AnimGraphNode_StateMachine_7; // 0x5a70
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x5b20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x5b50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x5bc8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x5c40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x5cf0
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x5d68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x5d98
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x5e10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x5eb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x5ed8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x5f00
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x5fe8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x60d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x61b8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x62a0
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x6350
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x6380
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x63a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x63d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x6448
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x64c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x6538
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x65b0
	FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag; // 0x6628
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x66f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x6720
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x6798
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x67c8
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x6878
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x68a8
	FAnimNode_BlendListByGameplayTagQuery AnimGraphNode_BlendListByGameplayTagQuery; // 0x6958
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x6a20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x6a98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x6b10
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x6b88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x6bb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6be0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x6c80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x6cf8
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x6d70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x6da0
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x6e18
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x6e48
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x6ef8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x6f28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x6fa0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x6fc8
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x7090
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x70c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x70e8
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x7160
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x7190
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x7208
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x7238
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x72e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x7318
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7340
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x7370
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x7420
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x74d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x7500
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x7528
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x7550
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x7578
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x75f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x7668
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x76e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x7790
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x77b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x7880
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x78f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7928
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7950
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x7980
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x79f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7a70
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x7ae8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7b98
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x7bc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7c88
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7d00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7d30
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7d58
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7d88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7e38
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7ef0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7f10
	FAnimNode_CopyBone AnimGraphNode_CopyBone_4; // 0x7f30
	FAnimNode_CopyBone AnimGraphNode_CopyBone_3; // 0x8020
	FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x8110
	FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x8200
	FAnimDirectionRange BackwardDirection; // 0x82f0
	FAnimDirectionRange LeftDirection; // 0x830c
	FAnimDirectionRange RightDirection; // 0x8328
	FAnimDirectionRange ForwardDirection; // 0x8344
	FAnimLocomotionData LocomotionData; // 0x8360
	FGobiAnimationState AnimationState; // 0x83a0
	FHeroAnimState3P HeroAnimState; // 0x8400
	FLocoTurnInPlace TurnInPlaceState; // 0x8800
	FLocomotionPrediction LocoPredict; // 0x88b0
	FLadderAnimState LadderState; // 0x8918
	FLocoLeaning Leaning; // 0x8920
	float LocoBlendTime; // 0x892c
	float BlendTime; // 0x8930
	FAnimState3P AnimState3P; // 0x8934
	FHeroDraggedAnimData3P HeroDraggedAnimData; // 0x893c
	float MaxJogSpeed; // 0x8950
};

struct UGeometryCollectionCache {
	FRecordedTransformTrack RecordedData; // 0x30
	UGeometryCollection* SupportedCollection; // 0x40
	FGuid CompatibleCollectionState; // 0x48
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
	TArray<ULevelStreaming*> StreamingLevels; // 0xa0
	FStreamingLevelsToConsider StreamingLevelsToConsider; // 0xb0
	FString StreamingLevelsPrefix; // 0xd8
	ULevel* CurrentLevelPendingVisibility; // 0xe8
	ULevel* CurrentLevelPendingInvisibility; // 0xf0
	UDemoNetDriver* DemoNetDriver; // 0xf8
	AParticleEventManager* MyParticleEventManager; // 0x100
	APhysicsVolume* DefaultPhysicsVolume; // 0x108
	char bAreConstraintsDirty : 1; // 0x126
	UWorldSubsystem* CachedGobiCollectionsSubsystem; // 0x128
	UNavigationSystemBase* NavigationSystem; // 0x130
	AGameModeBase* AuthorityGameMode; // 0x138
	AGameStateBase* GameState; // 0x140
	UAISystemBase* AISystem; // 0x148
	UAvoidanceManager* AvoidanceManager; // 0x150
	TArray<ULevel*> Levels; // 0x158
	TArray<FLevelCollection> LevelCollections; // 0x168
	ULevelStreaming* DefaultSpawnLevel; // 0x198
	UGameInstance* OwningGameInstance; // 0x1a0
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x1a8
	UCanvas* CanvasForRenderingToTarget; // 0x1b8
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1c0
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x218
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x228
	UWorldComposition* WorldComposition; // 0x580
	FWorldPSCPool PSCPool; // 0x610
};

struct UOptionsSpinnerUserWidget {
	UAkAudioEvent* ValueChangedSound; // 0x458
	TMap<int32_t, FString> TTSValueOverrides; // 0x460
};

struct UBackgroundBlurSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UAnimNotify_Teleport {
	UAnimContext_Transform* Destination; // 0x40
};

struct UNamedInterfaces {
	TArray<FNamedInterface> NamedInterfaces; // 0x30
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x40
};

struct UGameThreatMod {
	EModifyOp ModifyOp; // 0xd0
	int32_t ModValue; // 0xd4
};

struct UNavRelevantComponent {
	char bAttachToOwnersRoot : 1; // 0x10c
	UObject* CachedNavParent; // 0x110
};

struct UTweenLinearColorLatentFactory {
	FMulticastInlineDelegate OnTweenStart; // 0x38
	FMulticastInlineDelegate OnTweenUpdate; // 0x48
	FMulticastInlineDelegate OnTweenEnd; // 0x58
};

struct UAlertComponent {
	float AlertRadius; // 0x230
	bool bAlertRadiusGrows; // 0x234
	float AlertRadiusGrowthAmount; // 0x238
	float MaxAlertRadius; // 0x23c
};

struct UWaterRagdollSettings {
	FName CenterOfMassBoneName; // 0x38
	float CenterOfMassBodyRadius; // 0x40
	float MaxForceDepth; // 0x44
	float Force; // 0x48
	float LinearDampening; // 0x4c
	float AngularDampening; // 0x50
	float CollisionSphereRadius; // 0x54
	FName CollisionSocketName; // 0x58
	TArray<FRagdollWaterBoneSettings> Bones; // 0x60
	UParticleSystem* SplashParticleEffect; // 0x70
	UParticleSystem* SplashBoneParticleEffect; // 0x78
	UWaterRipplerDef* WaterRipplerDef; // 0x80
	UWaterRipplerDef* WaterRipplerBoneDef; // 0x88
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

struct ADistanceMapTestActor {
	bool bShouldDrawMap; // 0x2a8
	ADistanceMapTestActor* TestA; // 0x2b0
	ADistanceMapTestActor* TestB; // 0x2b8
	FNavAgentSelector SupportedAgents; // 0x2c0
	float SearchDistance; // 0x2c4
};

struct UMaterialExpressionCurveAtlasRowParameter {
	UCurveLinearColor* Curve; // 0x68
	UCurveLinearColorAtlas* Atlas; // 0x70
	FExpressionInput InputTime; // 0x78
};

struct UBTTask_PlayAnimation {
	UAnimationAsset* AnimationToPlay; // 0x78
	char bLooping : 1; // 0x80
	char bNonBlocking : 1; // 0x80
	UBehaviorTreeComponent* MyOwnerComp; // 0x88
	USkeletalMeshComponent* CachedSkelMesh; // 0x90
};

struct URectLightComponent {
	float SourceWidth; // 0x3a0
	float SourceHeight; // 0x3a4
	float BarnDoorAngle; // 0x3a8
	float BarnDoorLength; // 0x3ac
	UTexture* SourceTexture; // 0x3b0
};

struct UMaterialExpressionRound {
	FExpressionInput Input; // 0x48
};

struct ANavModifierVolume {
	UNavArea* AreaClass; // 0x2e0
};

struct USceneCaptureComponent2D {
	ECameraProjectionMode ProjectionType; // 0x2c8
	float FOVAngle; // 0x2cc
	float OrthoWidth; // 0x2d0
	UTextureRenderTarget2D* TextureTarget; // 0x2d8
	ESceneCaptureCompositeMode CompositeMode; // 0x2e0
	FPostProcessSettings PostProcessSettings; // 0x2f0
	float PostProcessBlendWeight; // 0x850
	char bOverride_CustomNearClippingPlane : 1; // 0x854
	float CustomNearClippingPlane; // 0x858
	bool bUseCustomProjectionMatrix; // 0x85c
	FMatrix CustomProjectionMatrix; // 0x860
	bool bEnableClipPlane; // 0x8a0
	FVector ClipPlaneBase; // 0x8a4
	FVector ClipPlaneNormal; // 0x8b0
	char bCameraCutThisFrame : 1; // 0x8bc
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x8bc
	bool bDisableFlipCopyGLES; // 0x8c0
};

struct UPhysicsConstraintTemplate {
	FConstraintInstance DefaultInstance; // 0x30
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8
	FConstraintProfileProperties DefaultProfile; // 0x1f8
};

struct UClipAmmoComponent {
	int32_t CurrentClipAmount; // 0x1e4
	int32_t CalculatedMaxClipAmount; // 0x1f0
	FDataTableRowHandle AmmoRowHandle; // 0x208
	float LowAmmoPercentage; // 0x228
	bool bInfiniteReserveAmmo; // 0x22c
	FName AmmoBeltBoneNamePrefix; // 0x230
	int32_t AmmoBeltVacuumClipCountStart; // 0x238
	FClipAmmoTuning ClipAmmoTuning; // 0x23c
};

struct ADatasmithImportedSequencesActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x2a0
};

struct UCharacterMovementDebugEndpoint {
	int32_t Port; // 0xe8
	TMap<ACharacter*, int32_t> RecordingCharacters; // 0x110
	TSet<ACharacter*> LocalRecordingCharacters; // 0x160
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
};

struct UMaterialExpressionTransformPosition {
	FExpressionInput Input; // 0x48
	EMaterialPositionTransformSource TransformSourceType; // 0x5c
	EMaterialPositionTransformSource TransformType; // 0x5d
};

struct UMaterialExpressionDeriveNormalZ {
	FExpressionInput InXY; // 0x48
};

struct UBTService_ShouldHorde {
	FBlackboardKeySelector AlertGenerationBBKey; // 0x78
	FAIDataProviderFloatValue HeroLOSThreshold; // 0xa0
	FAIDataProviderIntValue AggroBubble; // 0xd8
};

struct UStaminaPipUserWidget {
	float Stamina; // 0x458
	float CurWidth; // 0x45c
};

struct UNiagaraPreviewAxis_InterpParamBase {
	FName Param; // 0x30
	int32_t Count; // 0x38
};

struct UDatasmithSceneComponentTemplate {
	FTransform RelativeTransform; // 0x40
	EComponentMobility Mobility; // 0x70
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x78
	TSet<FName> Tags; // 0xa0
};

struct USafeZoneSlot {
	bool bIsTitleSafe; // 0x40
	FMargin SafeAreaScale; // 0x44
	EHorizontalAlignment HAlign; // 0x54
	EVerticalAlignment VAlign; // 0x55
	FMargin Padding; // 0x58
};

struct USubmixEffectTapDelayPreset {
	FSubmixEffectTapDelaySettings Settings; // 0x88
};

struct UAISense_Damage {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x88
};

struct AAkSpotReflector {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x2a0
	FString EarlyReflectionAuxBusName; // 0x2a8
	UAkAcousticTexture* AcousticTexture; // 0x2b8
	float DistanceScalingFactor; // 0x2c0
	float Level; // 0x2c4
};

struct ANavigationTestingActor {
	UCapsuleComponent* CapsuleComponent; // 0x2b0
	UNavigationInvokerComponent* InvokerComponent; // 0x2b8
	char bActAsNavigationInvoker : 1; // 0x2c0
	FNavAgentProperties NavAgentProps; // 0x2c8
	FVector QueryingExtent; // 0x2f8
	ANavigationData* MyNavData; // 0x308
	FVector ProjectedLocation; // 0x310
	char bProjectedLocationValid : 1; // 0x31c
	char bSearchStart : 1; // 0x31c
	float CostLimitFactor; // 0x320
	float MinimumCostLimit; // 0x324
	char bBacktracking : 1; // 0x328
	char bUseHierarchicalPathfinding : 1; // 0x328
	char bGatherDetailedInfo : 1; // 0x328
	char bDrawDistanceToWall : 1; // 0x328
	char bShowNodePool : 1; // 0x328
	char bShowBestPath : 1; // 0x328
	char bShowDiffWithPreviousStep : 1; // 0x328
	char bShouldBeVisibleInGame : 1; // 0x328
	ENavCostDisplay CostDisplayMode; // 0x32c
	FVector2D TextCanvasOffset; // 0x330
	char bPathExist : 1; // 0x338
	char bPathIsPartial : 1; // 0x338
	char bPathSearchOutOfNodes : 1; // 0x338
	float PathfindingTime; // 0x33c
	float PathCost; // 0x340
	int32_t PathfindingSteps; // 0x344
	bool bDoRaycast; // 0x348
	bool bFindStartNode; // 0x349
	FVector RaycastStart; // 0x34c
	FVector AdjustedRaycastStart; // 0x358
	FVector RaycastEnd; // 0x364
	FString StartNavLabel; // 0x370
	char bRaycastHit : 1; // 0x380
	float RaycastHitTime; // 0x384
	FVector RaycastHitNormal; // 0x388
	FVector HitLocation; // 0x394
	char bIsRaycastEndInCorridor : 1; // 0x3a0
	int32_t RaycastCorridorPolysCount; // 0x3a4
	ANavigationTestingActor* OtherActor; // 0x3a8
	UNavigationQueryFilter* FilterClass; // 0x3b0
	int32_t ShowStepIndex; // 0x3b8
	float OffsetFromCornersDistance; // 0x3bc
};

struct UGameplayAction_HagHuntIdle {
	float HuntInvestigateDuration; // 0x210
	TArray<UAnimMontage*> HuntIdleMontages; // 0x218
	TArray<UAnimMontage*> ReturnToIdleMontages; // 0x228
	TArray<UGameplayEffect*> ReturnToIdleEffects; // 0x238
	TArray<UGameplayEffect*> HuntInvestigateEffectsToRemove; // 0x248
};

struct UInteractiveCarSpawnerMod {
	FGamePropertyFloatMod ClassWeights[0x3]; // 0xd8
};

struct UViewport {
	FLinearColor BackgroundColor; // 0x160
};

struct UInterpGroupInst {
	UInterpGroup* Group; // 0x30
	AActor* GroupActor; // 0x38
	TArray<UInterpTrackInst*> TrackInst; // 0x40
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

struct USmallDeckEntryUserWidget {
	FMulticastInlineDelegate OnDragDrop; // 0x458
	FDataTableRowHandle CardRowHandle; // 0x468
	USmallDeckEntryDragVisualUserWidget* DragVisualClass; // 0x488
};

struct UAnimContext_Transform {
	FVector Location; // 0x60
};

struct USpreadComponent {
	bool bStartSpreadAtMax; // 0x290
	FSpreadTuning SpreadTuning; // 0x294
};

struct ALootSystemDebugger {
	TArray<FDebugLootCategoryInfo> CategoryPool; // 0x2a0
	TArray<FDebugLootSpawnCountMod> DebugSpawnCountMods; // 0x2b0
};

struct UZombieMovementComponent {
	FZombieMovementForceProperties ChargeProps; // 0xe80
	FZombieMovementForceAttributes ChargeAttributes; // 0xe88
	float MaxGhostStepHeight; // 0xe94
	float AutoMantleHeight; // 0xe9c
	float GhostAutoMantleHeight; // 0xea0
	FZombieMovementSpeedConfig MovementSpeedConfig; // 0xff8
	FGameplayTagQuery DisableCrouchInputTags; // 0x1028
	float MinTimeBeforeSprintCanRelease; // 0x1070
	FZombieMovementForce ZombieMovementForce; // 0x1078
	float MantleRequiresJumpPressedAfterHeight; // 0x1098
};

struct UMaterialExpressionSign {
	FExpressionInput Input; // 0x48
};

struct USourceEffectPhaserPreset {
	FSourceEffectPhaserSettings Settings; // 0x80
};

struct UMaterialExpressionAntialiasedTextureMask {
	float Threshold; // 0xf8
	ETextureColorChannel Channel; // 0xfc
};

struct UEnvQueryGenerator_WallClingLocations {
	UEnvQueryContext* SearchCenter; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x60
	bool bExcludeClaimed; // 0x98
};

struct UMovieSceneSignedObject {
	FGuid Signature; // 0x30
};

struct UMontageSet {
	float Priority; // 0x38
	UGameplayEvaluatorSet* FilterSet; // 0x40
	TArray<UAnimMontage*> Montages; // 0x48
};

struct UThrobber {
	int32_t NumberOfPieces; // 0x148
	bool bAnimateHorizontally; // 0x14c
	bool bAnimateVertically; // 0x14d
	bool bAnimateOpacity; // 0x14e
	USlateBrushAsset* PieceImage; // 0x150
	FSlateBrush Image; // 0x158
};

struct UAOEAttackComponent {
	FMulticastInlineDelegate OnStartAttack; // 0x1e0
	FMulticastInlineDelegate OnStopAttack; // 0x1f0
	FAOEAttackMoveTickData MoveTickData; // 0x200
	TArray<UAnimMontage*> AttackMontages; // 0x2b8
	TArray<UAnimMontage*> AttackEndMontages; // 0x2c8
	FName AOEMontageNotifyName; // 0x2d8
	FName ReattackMontageNotifyName; // 0x2e0
	FName AttackMontagesName; // 0x2e8
	float AttackCancelBlendOutTime; // 0x2f0
	FGameplayTagContainer AppliedTags; // 0x2f8
	FGameplayTagContainer BlockingTags; // 0x318
	FGameplayTagQuery CancelTagsQuery; // 0x338
	FGameplayTagQuery ShowReticleTagsQuery; // 0x380
	bool bReactivateIfInputHeld; // 0x3c8
	bool bUsesPrimaryButton; // 0x3c9
	bool bRequiresClearTraceCheck; // 0x3ca
	FName AOEHitTraceValidationTraceCheck; // 0x3cc
	ECollisionChannel ClearTraceChannel; // 0x3d4
	float ServerVolumePadding; // 0x3d8
	TArray<UGameplayEffect*> ApplyEffectsToSelf; // 0x3e0
	TArray<UGameplayEffect*> AOEEffects; // 0x3f0
	AGobiReticle* AOEReticleClass; // 0x400
	AGobiReticle* AOEReticleActiveClass; // 0x408
	bool bUsesTuningData; // 0x410
	FAOEAttackTuning AOEAttackTuning; // 0x414
};

struct UEnvQueryTest_DistanceMapBase {
	EDMapDirectionMode DirectionMode; // 0x208
	bool bUseDirectionModeDataProvider; // 0x209
	FAIDataProviderIntValue DirectionModeDataProvider; // 0x210
	ERelativeDistanceMode RelativeDistanceMode; // 0x248
	FAIDataProviderFloatValue RelativeDistancePadding; // 0x250
	UEnvQueryContext* RelativeDistanceSources; // 0x288
	EEnvItemStatus ItemResultWhenNoRelativeSourcesOnMap; // 0x290
	FNavAgentSelector DistanceMapNavMesh; // 0x294
	UEnvQueryContext* DistanceMapSource; // 0x298
	EEnvItemStatus ItemsNotOnMapShould; // 0x2a0
	bool bInvertScore; // 0x2a1
};

struct AGameplayAnalyticsManager {
	UGlobalAnalyticsManager* GlobalAnalyticsManager; // 0x2d0
	URoundAnalyticsComponent* RoundAnalyticsComponent; // 0x2d8
	UItemSpawningAnalyticsComponent* ItemSpawningComponent; // 0x2e0
	UDirectorAnalyticsComponent* DirectorAnalyticsComponent; // 0x2e8
	UDecalAnalyticsComponent* DecalAnalyticsComponent; // 0x2f0
	UPlayerStateAnalyticsComponent* PlayerStateComponent; // 0x2f8
	UCardSystemAnalyticsComponent* CardSystemComponent; // 0x300
	UGameCoachAnalyticsComponent* GameCoachAnalyticsComponent; // 0x308
	UGenericAggregationComponent* GenericAggregationComponent; // 0x310
	UInterestingMomentComponent* InterestingMomentComponent; // 0x318
	UWeaponUsageAnalyticsComponent* WeaponUsageComponent; // 0x320
	UPerfStatsAnalyticsComponent* PerfStatsAnalyticsComponent; // 0x328
	UFTUEAnalyticsComponent* FTUEAnalyticsComponent; // 0x330
	UEconomyAnalyticsComponent* EconomyAnalyticsComponent; // 0x338
	UAchievementAnalyticsComponent* AchievementAnalyticsComponent; // 0x340
	UHealingAnalyticsComponent* HealingAnalyticsComponent; // 0x348
	UCinematicAnalyticsComponent* CinematicAnalyticsComponent; // 0x350
	UPVPHoldoutAnalyticsComponent* PVPHoldoutComponent; // 0x358
	FGameplayAnalyticsRoundData RoundData; // 0x360
};

struct UObserverComponent {
	FMulticastInlineDelegate OnObservationStart; // 0xe8
	FMulticastInlineDelegate OnObservationEnd; // 0xf8
	bool bEnabled; // 0x108
	USceneComponent* ViewComponent; // 0x110
	TArray<AActor*> LOSIgnoredActors; // 0x118
};

struct UGameplayContext_MeleeTarget {
	FGameplayTag MeleeComponentGameplayTag; // 0x78
};

struct UAbilityComponent {
	FTriggerEffectsDefinition TriggerEffects; // 0x130
	EAbilityType AbilityType; // 0x1c8
	UAkAudioEvent* DryFireAudio; // 0x1d0
};

struct UAnimEvalSet_Shared_HitReaction_Death_Prediction_C {
	FGameplayEval_HitReactionHealth HitReactionHealth; // 0xc0
};

struct UPoseWatch {
	UEdGraphNode* Node; // 0x30
	FColor PoseWatchColour; // 0x38
};

struct UPawnSensingComponent {
	float HearingThreshold; // 0xe8
	float LOSHearingThreshold; // 0xec
	float SightRadius; // 0xf0
	float SensingInterval; // 0xf4
	float HearingMaxSoundAge; // 0xf8
	char bEnableSensingUpdates : 1; // 0xfc
	char bOnlySensePlayers : 1; // 0xfc
	char bSeePawns : 1; // 0xfc
	char bHearNoises : 1; // 0xfc
	FMulticastInlineDelegate OnSeePawn; // 0x108
	FMulticastInlineDelegate OnHearNoise; // 0x118
	float PeripheralVisionAngle; // 0x128
	float PeripheralVisionCosine; // 0x12c
};

struct UMeshSelectionSet {
	TArray<int32_t> Vertices; // 0x48
	TArray<int32_t> Edges; // 0x58
	TArray<int32_t> Faces; // 0x68
	TArray<int32_t> Groups; // 0x78
};

struct UEnvQueryTest_Dot {
	FEnvDirection LineA; // 0x208
	FEnvDirection LineB; // 0x228
	EEnvTestDot TestMode; // 0x248
	bool bAbsoluteValue; // 0x249
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

