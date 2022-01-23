// Created by BlueFire1337
// Updated 2022-01-20
// Generated 2022-01-23

#pragma once

struct FNonVerbalPageData {
	TArray<FNonVerbalPhraseData> Phrases; // 0x0
	FText PageName; // 0x10
};

struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x0
	bool BoolTrue; // 0x1
	uint32_t Bitfield; // 0x4
};

struct FRepairObjectActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetSubObjectPtr RepairableObject; // 0x30
	FNetActorPtr WieldedItem; // 0x44
	UNotificationInputId* InputID; // 0x58
};

struct FDiscoveryNotificationEvent {
	int32_t Count; // 0x0
	TArray<FString> Images; // 0x8
	FString Background; // 0x18
	FText Text; // 0x28
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName VectorPropertyName; // 0x18
	UStructProperty* VectorProperty; // 0x20
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FActiveLightning {
	FLightningImpact Impact; // 0x0
};

struct FCharacterSocketCollisionResult {
	bool HasHit; // 0x0
	FHitResult HitResult; // 0x4
	FVector SocketVelocity; // 0x84
	FTransform SocketTransform; // 0x90
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FFrameTypeTelemetryFragment {
	uint64_t NumLoadingScreenFrames; // 0x0
	uint64_t NumFullyOccludedFrames; // 0x8
	uint64_t NumFullScreenUIFrames; // 0x10
};

struct FSetFrontEndSelection {
	bool IsAdventureActive; // 0x0
	bool IsArenaActive; // 0x1
	bool IsTutorialActive; // 0x2
	bool IsCreativeActive; // 0x3
	bool IsBeachNPCSpawnActive; // 0x4
};

struct FItemSpawnWeightedType {
	UObject* Type; // 0x0
	FName Feature; // 0x8
	int32_t Weight; // 0x10
	TArray<USpawnRequirement*> Requirements; // 0x18
};

struct FServerProjectileHitRegInfoTelemetryEvent {
	FGuid AttackId; // 0x0
	FString ProjectileId; // 0x10
	FString HitObjectId; // 0x20
	FString HitObjectType; // 0x30
	FString HitActorName; // 0x40
	FString InstigatorName; // 0x50
	FVector HitLocation; // 0x60
};

struct FPlayerRequiresMermaidCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FWeightedFireworkVFXData {
	UObject* VFX; // 0x0
	UWwiseEvent* Sfx; // 0x8
	UWwiseEvent* SecondarySFX; // 0x10
	float Weight; // 0x18
	FLinearColor AmbientLightColour; // 0x1c
};

struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties {
	UItemCategory* ItemCategory; // 0x0
	UCurveFloat* DistanceInMToProjectileHitChanceCurve; // 0x8
};

struct FTreasureMapDataCaptureParams {
	FVector CameraPosition; // 0x0
	FRotator CameraOrientation; // 0xc
	FVector WorldSpaceCameraPosition; // 0x18
	float CameraFOV; // 0x24
	float CameraAspect; // 0x28
	float CameraOrthoWidth; // 0x2c
	float CameraNearClip; // 0x30
	float CameraFarClip; // 0x34
	int32_t TextureWidth; // 0x38
	int32_t TextureHeight; // 0x3c
};

struct FKrakenShipWrappingBehaviourHeavyAttackParams {
	FWeightedProbabilityRangeOfRanges AttackDuration; // 0x0
	float ChanceOfEnteringHeavyAttack; // 0x30
	FKnockBackInfo ExteriorKnockbackParams; // 0x34
	FKnockBackInfo InteriorKnockbackParams; // 0x84
};

struct FAggressiveGhostShipEncounterWaveDesc {
	bool BackfillActive; // 0x0
	int32_t NumGrunts; // 0x4
	int32_t NumGruntsToKill; // 0x8
	TArray<FAggressiveGhostShipEncounterWaveFormationDesc> Formations; // 0x10
	FWeightedProbabilityRangeOfRanges SpawnDelay; // 0x20
	FWeightedProbabilityRangeOfRanges TimeBetweenBackfillSpawns; // 0x50
	TArray<FAggressiveGhostShipEncounterShipDesc> GruntShipDescs; // 0x80
	AActor* WaveMusicZoneActorClass; // 0x90
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType WaveAnnouncementType; // 0x98
	bool PreventGoingToNextWaveUntilNotified; // 0x99
};

struct FContestMatchmakingCrewModel {
	FGuid CrewId; // 0x0
	FUniqueNetIdRepl UserId; // 0x10
	int32_t SessionType; // 0x28
};

struct FUseMountedWeaponActionStateParams : FControlObjectActionStateParams {
	float CameraDockTime; // 0x18
	UForceFeedbackEffect* FireForceFeedbackEffect; // 0x20
	UCameraShake* FireCameraShake; // 0x28
	UNotificationInputId* FireInputId; // 0x30
	TArray<UAnalogInputId*> AimYawInputId; // 0x38
	TArray<UAnalogInputId*> AimPitchInputId; // 0x48
};

struct FBootFlowUpdateTaskStatusEvent {
	FString Message; // 0x0
};

struct FEventShipDestroyed {
	AActor* Ship; // 0x0
};

struct FRestrictedClueType {
	UClueSiteType* Type; // 0x0
	int32_t Max; // 0x8
};

struct FWheelAdditiveProperties {
	float RightHandOnHandleAMin; // 0x0
	float RightHandOnHandleAMax; // 0x4
	float RightHandOnHandleBMin; // 0x8
	float RightHandOnHandleBMax; // 0xc
	float LeftHandOnHandleAMin; // 0x10
	float LeftHandOnHandleAMax; // 0x14
	float LeftHandOnHandleBMin; // 0x18
	float LeftHandOnHandleBMax; // 0x1c
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x30
};

struct FRewardGrantedEvent {
	FString RewardId; // 0x0
	EWalletCurrencyId CurrencyId; // 0x10
	uint32_t CurrencyAmount; // 0x14
	FString CompanyId; // 0x18
	uint32_t Xp; // 0x28
	uint32_t NumLevels; // 0x2c
	TArray<FString> Entitlements; // 0x30
	FGuid RequestID; // 0x40
	FString DeferralReason; // 0x50
};

struct FEnterTunnelOfTheDamnedActionStateParams {
	float FadeDuration; // 0x0
	float FadeEventTimeout; // 0x4
	float FadeServerTimeout; // 0x8
	FLinearColor FadeColour; // 0xc
	bool FadeAudio; // 0x1c
};

struct FStorageContainerUnregisterServerEventsRpc : FBoxedRpc {
	UObject* InStorageContainerOwnerObject; // 0x10
};

struct FKrakenShipWrappingTentacleVFXParams {
	UParticleSystem* VFX; // 0x0
	float TriggerTime; // 0x8
	FVector Location; // 0xc
	FRotator Rotation; // 0x18
};

struct FEventStatueThreatWasDefeated {
	AActor* Instigator; // 0x0
	AActor* DirectInstigator; // 0x8
};

struct FCrewCompletedEmergentVoyageEvent {
	FGuid CrewId; // 0x0
	bool DoNotNotifyParticipantsOnVoyageComplete; // 0x10
};

struct FPromptsCounterIncrementEvent {
	UPromptCounterAccessKey* AccessKey; // 0x0
};

struct FActiveGameplayEffectHandle {
	int32_t Handle; // 0x0
};

struct FWaterSlideParams {
	float ForwardSpeed; // 0x0
	float IncreaseForwardSpeedMultiplier; // 0x4
	float DecreaseForwardSpeedMultiplier; // 0x8
	float VeeringSpeed; // 0xc
	float LeftVeeringDistance; // 0x10
	float RightVeeringDistance; // 0x14
	FPlayerStat StatToFireForRouteChange; // 0x18
	UParticleSystem* PlayerSplashingVFXOverride; // 0x20
};

struct FServerMigrationHeartbeatEvent {
	FGuid ServerId; // 0x0
	FString ServerLocation; // 0x10
	FString GameEndpoint; // 0x20
	FString MigrationEndpoint; // 0x30
	TArray<FServerMigrationCrewMigrationStatus> CrewsMigrationStatus; // 0x40
	int32_t SequenceId; // 0x50
	FTimespan ServerUptime; // 0x58
	FTimespan ExpectedServerLifetime; // 0x60
	FTimespan MessageInterval; // 0x68
	bool ContestMatchmaking; // 0x70
};

struct FSpawnRequests {
	TArray<FSalvageSpawnCompRequest> Requests; // 0x0
};

struct FSetShouldSkipFerryOfTheDamnedData {
	int32_t PlayerNetGUID; // 0x0
	bool bShouldSkipFerryOfTheDamned; // 0x4
};

struct FEventMeleeAttackHit {
	FMeleeAttackHitResponseData HitResponseData; // 0x0
};

struct FPlayerAggregatePositionTelemetryFragmentInput : FTelemetryFragmentInput {
	TArray<FVector> PositionData; // 0x0
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FServerTelemetryConfigurationSettings {
	float PlayerHeartbeatInterval; // 0x0
	float PlayerHeartbeatAggregatePositionInterval; // 0x4
	bool TelemetryEnabled_ItemEquip; // 0x8
	bool TelemetryEnabled_ItemUsageEnd; // 0x9
	bool TelemetryEnabled_ItemUsageStart; // 0xa
	bool TelemetryEnabled_ObjectUsageEnd; // 0xb
	bool TelemetryEnabled_ObjectUsageStart; // 0xc
	bool TelemetryEnabled_PlayerAction; // 0xd
	bool TelemetryEnabled_PlayerChangedLoadout; // 0xe
	bool TelemetryEnabled_PlayerChangedShipLoadout; // 0xf
	bool TelemetryEnabled_PlayerHeartbeat; // 0x10
	bool TelemetryEnabled_PlayerPerformedEmote; // 0x11
};

struct FCampaignPopUpNotificationInfo {
	FName Name; // 0x0
	UPopUpMessageDesc* PopUp; // 0x8
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FNPCCustomAnimationBlueprintPlayingAnimations {
	UAnimSequenceBase* OneShot; // 0x0
	UAnimSequenceBase* ContinouousIn; // 0x8
	UAnimSequenceBase* ContinouousLoop_A; // 0x10
	UAnimSequenceBase* ContinouousLoop_B; // 0x18
	UAnimSequenceBase* ContinouousOut; // 0x20
};

struct FAssetDelayLoadEntry {
	FString Comment; // 0x0
	EDelayLoadPhase LoadAtPhase; // 0x10
	ELoadPersistance Persistence; // 0x11
	bool LoadForClient; // 0x12
	bool LoadForServer; // 0x13
	TArray<FStringAssetReference> AssetsToLoad; // 0x18
	TArray<UClass*> BlueprintsToLoad; // 0x28
};

struct FWorldEventSnapshotV1 {
	FString EventID; // 0x0
	FString Status; // 0x10
};

struct FTrackedActorTelemetryFragment {
	FJsonObjectWrapper Json; // 0x0
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FFeatureToggledChapters {
	FName Feature; // 0x0
	TArray<FChapterQuests> Chapters; // 0x8
};

struct FRenderToTextureTestChangeEvent {
	AActor* Object; // 0x0
};

struct FQueryServerMemoryRpc : FBoxedRpc {
	AAthenaPlayerController* AthenaPlayerController; // 0x10
};

struct FTestActorActionStateConstructionInfo : FActorActionStateConstructionInfo {
	int32_t IntProp; // 0x30
};

struct FKrakenTentacleParams {
	FWeightedProbabilityRangeOfRanges TentacleHealth; // 0x0
	FFloatRange InactiveToActiveTentacleTimeout; // 0x30
	float InactiveToActiveTentacleTimeoutThresholdInSeconds; // 0x40
	float ChanceOfInactiveToActiveTentacle; // 0x44
	float ChanceOfInactiveToActiveTentacleOnDeathOrFlee; // 0x48
};

struct FServerContestScoreUpdateTelemetryEvent {
	EScoreReason ReasonForScoreChange; // 0x0
	int32_t CurrentCrewScore; // 0x4
	int32_t ScoreChangeAmount; // 0x8
	FString ScoreContext; // 0x10
	FGuid InstigatorId; // 0x20
};

struct FPremiumStoreOffersEvent {
	FPremiumStoreLandingPage Data; // 0x0
	int64_t TimeLimitedExpiresInSeconds; // 0x10
	FString CurrencyCode; // 0x18
};

struct FPlayerRadialChatCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FQuestVariableLinkEQSContext : FQuestVariable {
	FName ParamName; // 0x8
};

struct FGameServiceCoordinator {
	TArray<FGameServiceCoordinatorUnit> Services; // 0x0
};

struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0
	FFloatRange WorkingRange; // 0x50
	FFloatRange ViewRange; // 0x60
};

struct FMovieSceneLevelVisibilitySharedTrack : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FPocketWatchDateDisplay {
	UWwiseEvent* DateSwitchSFX; // 0x0
	UMaterialInstanceDynamic* FirstPersonMeshDynamicMaterialInstance; // 0x8
	UMaterialInstanceDynamic* ThirdPersonMeshDynamicMaterialInstance; // 0x10
};

struct FStorageContainerWeightedItemListEntry {
	float Weight; // 0x0
	UItemDesc* ItemDesc; // 0x8
};

struct FEventShipSpawnLocationDestroyed {
	AShipSpawnLocation* SpawnLocation; // 0x0
};

struct FGameTime {
	FDateTime DateTimeRepresentation; // 0x0
};

struct FQuestVariableMerchantItem : FQuestVariable {
	FName ParamName; // 0x8
};

struct FShroudBreakerActivatedEvent {
	FGuid ShroudBreakerId; // 0x0
};

struct FDropItemParams {
	TArray<UClass*> AttachOnDropParentTypes; // 0x0
	FVector DropItemOffset; // 0x10
	float MaxShallowWaterHeightToAllowItemDrop; // 0x1c
	ECollisionChannel DropItemPosTestTraceChannel; // 0x20
	float WaterVolumeOverlapRadius; // 0x24
	float MaxDroppedItemPitchRoll; // 0x28
	float ItemWorldProxyCapsuleCastRadius; // 0x2c
	float ItemWorldProxyCapsuleCastHeight; // 0x30
	float ItemWorldProxyCapsuleDownCastRadiusModifier; // 0x34
	float LineTraceDepth; // 0x38
	float SweepPercentageOnHit; // 0x3c
	float HitDiffTolerance; // 0x40
	float LineTraceOffsetUpwardsFromStart; // 0x44
};

struct FShantyPuzzlePlayerEnterInteractionZoneEvent {
	AActor* Player; // 0x0
};

struct FSpawnerTypeMapping {
	UItemCategory* Type; // 0x0
	UStorageContainerContentSpawner* Spawner; // 0x8
};

struct FEventItemTransmuted {
	AItemInfo* NewItem; // 0x0
};

struct FAthenaAnimationAsyncLoadedObjectJumpingAnimations {
	UBlendSpace* Start; // 0x0
	UBlendSpace* Cycle; // 0x20
	UBlendSpace* PreImpact; // 0x40
	UBlendSpace* LandLight; // 0x60
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FCriticalActorWrapper {
	AActor* CriticalActor; // 0x0
};

struct FRopeCatenaryDynamicsParams {
	float CatenaryToTautLengthRatioToConsiderCatenary; // 0x0
	bool ReactsToWind; // 0x4
};

struct FAnimNode_HIKBase : FAnimNode_Base {
	FComponentSpacePoseLink HIKSettings; // 0x30
};

struct FEventReceiveTankardRefillerComponentState {
	UTankardRefillerComponent* Source; // 0x0
};

struct FSpikeMechanismMaterialAnimationContext : FMechanismMaterialAnimationContext {
	UMeshComponent* Mesh; // 0x8
	TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x10
};

struct FPredictionKey {
	int16_t Current; // 0x0
	int16_t Base; // 0x2
	UPackageMap* PredictiveConnection; // 0x8
	bool bIsStale; // 0x10
	bool bIsServerInitiated; // 0x11
};

struct FGameplayAttribute {
	UProperty* Attribute; // 0x0
};

struct FWhatsNewArticleClientResponseModel {
	TArray<FWhatsNewArticleModel> WhatsNewArticleList; // 0x0
};

struct FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x98
	FSlateBrush ActiveFillBrush; // 0x128
	FSlateBrush InactiveFillBrush; // 0x1b8
	FSlateBrush ArrowsImage; // 0x248
	FSlateColor ForegroundColor; // 0x2d8
	FMargin TextPadding; // 0x308
};

struct FEventStatusScreenSpaceParticleEffectEnded {
	UObject* ParticleSystem; // 0x0
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
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

struct FEventNewPlayerStartedPlayingShanty {
	AActor* Player; // 0x0
	AActor* Instrument; // 0x8
	AActor* Ensemble; // 0x10
};

struct FRowboatDamageEffectData {
	UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x0
	float FadeInDuration; // 0x8
};

struct FGameplayCueParameters {
	float NormalizedMagnitude; // 0x0
	float RawMagnitude; // 0x4
	FGameplayEffectContextHandle EffectContext; // 0x8
	FName MatchedTagName; // 0x28
	FGameplayTag OriginalTag; // 0x30
	FGameplayTagContainer AggregatedSourceTags; // 0x38
	FGameplayTagContainer AggregatedTargetTags; // 0x60
};

struct FGameplayTargetDataFilter {
	AActor* SelfActor; // 0x8
	ETargetDataFilterSelf SelfFilter; // 0x10
	AActor* RequiredActorClass; // 0x18
	bool bReverseFilter; // 0x20
};

struct FEmissaryGlobalActionRewardBoostServiceEvent {
	UGameEventType* FinishedEventType; // 0x0
	FGuid AssociatedCrew; // 0x8
};

struct FEmblemId {
	FName Name; // 0x0
	FGuid Id; // 0x8
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FShipSnapshotV1 {
	int32_t Id; // 0x0
	FVector Position; // 0x4
	FWheelSnapshot Wheel; // 0x10
	FCapstanSnapshot Capstan; // 0x18
	TArray<FMastSnapshot> Masts; // 0x20
	TArray<FCannonStateData> Cannons; // 0x30
	TArray<FStorageContainerStateData> StorageContainers; // 0x40
};

struct FRainZoneParametersAndLocation {
	FRainZoneParameters RainZoneParameters; // 0x0
	FVector2D Location; // 0xc
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
	int32_t Valid; // 0x68
};

struct FPetTurnRateModifier {
	UAIStrategyId* Strategy; // 0x0
	float TurnRateModifier; // 0x8
};

struct FUseMapTableActionStateParams : FControlObjectActionStateParams {
	float CameraDockTime; // 0x18
};

struct FQueryContendedResourcesRpc : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FMastDamageAudioParams {
	FWwiseEmitter MastHingeAudioEmitter; // 0x0
	UWwiseObjectPoolWrapper* MastHingeAudioPool; // 0x20
	FWwiseEmitter MastImpactAudioEmitter; // 0x28
	UWwiseObjectPoolWrapper* MastImpactAudioPool; // 0x48
	UWwiseEvent* MastDamaged; // 0x50
	UWwiseEvent* MastFallingStart; // 0x58
	UWwiseEvent* MastFallingStop; // 0x60
	UWwiseEvent* MasthHoistingStart; // 0x68
	UWwiseEvent* MastHoistingStop; // 0x70
	UWwiseEvent* MastHoistingComplete; // 0x78
	UWwiseEvent* MastFallComplete; // 0x80
	UWwiseEvent* MastFallenStop; // 0x88
	FName MastDamageLevelAudioSwitch; // 0x90
	FName MastHoistingSpeedAudioSwitch; // 0x98
	FName MastAngleRTPC; // 0xa0
	FName MastFallingSpeedRTPC; // 0xa8
};

struct FTunnelOfTheDamnedBaseTelemetryFragment {
	FGuid TunnelInstanceId; // 0x0
};

struct FVaultLock {
	int32_t Tier; // 0x0
	FLockData VaultLock; // 0x10
	UStaticMeshMemoryConstraintComponent* MeshComponent; // 0x580
};

struct FMeleeAttackHitResponses {
	char DecalsParticlesAudio : 1; // 0x0
	char Animation : 1; // 0x0
	char CameraShake : 1; // 0x0
	char GamepadRumble : 1; // 0x0
	char HitIndicator : 1; // 0x0
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FSwimmingCreatureAIStrategyMovementProperties {
	UAIStrategyId* AIStrategy; // 0x0
	ESwimRotationMode SwimRotationMode; // 0x8
	float RotationRate; // 0xc
	float CorrectingMaxSpeed; // 0x10
	float CorrectingYawTurnRate; // 0x14
	float MaxAbsPitch; // 0x18
	float MaxSpeed; // 0x1c
	float VelocitySmoothingFactor; // 0x20
	float TrackedActorVelocityScaling; // 0x24
	float TrackedActorVelocityScalingSmoothingFactor; // 0x28
};

struct FBootFlowErrorMessageQueryResponseEvent {
	FString ErrorMessage; // 0x0
};

struct FActorVelocityData {
	FVector ActorsVelocityVector; // 0x0
	float ActorSpeed; // 0xc
	bool IsCharacterMoving; // 0x10
	float WantedMovementSpeed; // 0x14
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
	FSlateBrush LeftShadowBrush; // 0x128
	FSlateBrush RightShadowBrush; // 0x1b8
};

struct FKeySequence {
	UItemDesc* VaultKeyDesc; // 0x0
	TArray<FMechanismCheckpoint> ActiveToInactiveSequenceCheckpoints; // 0x8
	TArray<FMechanismCheckpoint> InactiveToActiveSequenceCheckpoints; // 0x18
};

struct FWieldablePetHungerAnimationData {
	EAthenaAnimationPetHeldReactionState AnimState; // 0x0
	float AnimTimeout; // 0x4
};

struct FCrewSessionLeaveTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	FGuid CrewId; // 0x0
};

struct FPlayerItemEquipTelemetryEvent {
	FString ItemId; // 0x0
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FAIBountySpawnerArchive : FAISpawnerArchive {
	int32_t CurrentWaveIndex; // 0x8
	TArray<FAIBountySpawnerArchiveWaveGroupEntry> WaveGroupEntries; // 0x10
	float BountyAudioIntensity; // 0x20
};

struct FContestShipLiverySet {
	FGuid OwningCrewID; // 0x0
	TMap<UShipSize*, FGuid> ShipLiveryTeamSet; // 0x10
};

struct FPlayerAddedToEmissaryCrew {
	int32_t EmissaryLevel; // 0x0
	float EmissaryLevelProgress; // 0x4
	FName EmissaryCompany; // 0x8
};

struct FNotificationStickiness {
	EStickinessType Type; // 0x0
	uint32_t StickDurationMs; // 0x4
};

struct FPetChestCloseRequestEvent {
	FRequestClosePossessionsChestEvent ClosePossessionsChestEvent; // 0x0
};

struct FFortDespawnTelemetryEvent {
	FGuid FortId; // 0x0
	ESkellyFortDestructionReason DestructionReason; // 0x10
	FName FortType; // 0x14
};

struct FEventAthenaLocalPlayerRequestRequiredControllersConnectedResponse {
	bool ControllerConnected; // 0x0
};

struct FObjectMessagingHandle {
	UStruct* EventType; // 0x8
};

struct FEmblemCriteria {
	FPlayerStat PlayerStat; // 0x0
	uint64_t Threshold; // 0x8
	EPlayerStatsOperator Operator; // 0x10
};

struct FStoryInfo {
	FName Name; // 0x0
	int64_t StartTimeTicks; // 0x8
	int64_t EndTimeTicks; // 0x10
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FTransientActorEntry {
	AActor* Actor; // 0x0
};

struct FIPGData {
	TArray<FIPGDynamicSliderName> DynamicSliderNames; // 0x0
	TArray<FIPGBlendingMethod> BlendingMethods; // 0x10
	TArray<FIPGSetGroup> Groups; // 0x20
	int32_t CurrentVersion; // 0x30
	TArray<FIPGSetsData> Versions; // 0x38
};

struct FEmissaryCompanyQuestIcons {
	UCompany* Company; // 0x0
	FStringAssetReference Background; // 0x8
	TArray<FStringAssetReference> Icons; // 0x18
};

struct FAthenaAIEngageEnemyData {
	UAICharacterEngageEnemyMethod* EngageEnemyMethod; // 0x0
	float BestTargetRange; // 0x8
};

struct FEventGhostShipDoorDestroyed {
	AGhostShipDoor* GhostShipDoor; // 0x0
};

struct FAthenaAnimationLocomotionTurningAnimDataPitchOverride {
	UBlendSpace1D* Turn90; // 0x0
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FEventRegisterSettingsGroup {
	FName SettingsGroupName; // 0x0
	TArray<FName> SettingsGroupSettings; // 0x8
};

struct FQuestVariableBool : FQuestVariable {
	FName ParamName; // 0x8
};

struct FAthenaAnimationCharacterSelect {
	UAnimSequence* Idle; // 0x0
	UAnimSequence* IntoHighlight; // 0x8
	UAnimSequence* Highlighted; // 0x10
	UAnimSequence* OutOfHighlight; // 0x18
	UAnimSequence* Selected; // 0x20
};

struct FEventKrakenShipWrappingTentacleStateChanged {
	EKrakenShipWrappingTentacleState PreviousState; // 0x0
	EKrakenShipWrappingTentacleState NewState; // 0x1
};

struct FTelemetryStepContext {
	FQuestVariableName Name; // 0x0
	FQuestVariableDataAsset Asset; // 0x10
	FQuestVariableAsset AssetRef; // 0x20
	FQuestVariableClass Type; // 0x30
	FQuestVariableActor Actor; // 0x40
};

struct FEventOnlineAthenaPlayerControllerUnpossessed {
	APlayerController* PlayerController; // 0x0
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
	UField* Field; // 0x18
};

struct FPlayerModerationReportablePlayerDetails {
	FString ReportableGamertag; // 0x0
	FString ScrambledGamertag; // 0x10
	FString XUID; // 0x20
};

struct FWWiseEmitterCreationRTPCSetting {
	FName RTPCName; // 0x0
	float RTPCValue; // 0x8
};

struct FMermaidAnimMapping {
	EMermaidState State; // 0x0
	FName MontageLabel; // 0x4
};

struct FTestStringMapSerializationObject {
	TMap<FString, FString> StringMap; // 0x0
};

struct FCatalogOfferBundleDataAsset {
	UCatalogOfferDataAsset* OwningBundle; // 0x0
	uint32_t TileSize; // 0x8
	FStringAssetReference TileImage; // 0x10
};

struct FProjectileQueuedEffect {
	int32_t HitCount; // 0x0
	FHitResult HitResult; // 0x4
	FWeaponProjectileEffectParams Effects; // 0x84
	FVector InitialShootingPosition; // 0xec
	UDamagerType* DamagerType; // 0xf8
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FVoyageChestDiscovered {
	FNetActorPtr PlayerStateOfDiscoverer; // 0x0
	bool IsDiscovererMe; // 0x14
	FName ChestRarity; // 0x18
	bool PlayAudio; // 0x20
	UPopUpMessageDesc* PopUpDesc; // 0x28
};

struct FEventPlayerControllerPossess {
	APawn* Pawn; // 0x0
};

struct FWalletBalanceItem {
	EWalletCurrencyId CurrencyId; // 0x0
	uint32_t Balance; // 0x4
};

struct FEventSessionCodeTextboxFocusRequest {
	bool ShouldFocusSessionCodeTextbox; // 0x0
};

struct FNPCOnSurfaceCannonManagerCrewSizeSettings {
	int32_t CrewSize; // 0x0
	FWeightedProbabilityRangeOfRanges TimeBetweenShots; // 0x8
	float ChanceOfNearMiss; // 0x38
};

struct FEventSetFishingAnimationState {
	EFishingState State; // 0x0
};

struct FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FShipConfigurationSettings {
	float MetresSailedStatSendFrequency; // 0x0
	float MinimumDistanceSailedBeforeSendingUpdate; // 0x4
	float MaxVelocityAllowedForServerMigration; // 0x8
	float MaxAngularVelocityAllowedForServerMigration; // 0xc
	float ShipHeartbeatFrequencySeconds; // 0x10
	bool MigrationBasedOnVelocityEnabled; // 0x14
};

struct FAggressiveGhostShipShotSelection {
	float Weight; // 0x0
	ALaunchableProjectile* ProjectileClass; // 0x8
	TArray<FAggressiveGhostShipDifficultyShipSizeTargetSelection> ShipSizeTargetSelection; // 0x10
	TArray<FAggressiveGhostShipDifficultyTargetSelection> LongRangeTargetSelection; // 0x20
};

struct FPortalSpawningInfo {
	uint32_t ResourceId; // 0x0
	APortalLocatorActor* Locator; // 0x8
};

struct FAchievementDefinition {
	FName DevCenterId; // 0x0
	TArray<FAchievementCriteria> UnlockCriteria; // 0x8
};

struct FHitResult {
	char bBlockingHit : 1; // 0x0
	char bStartPenetrating : 1; // 0x0
	float Time; // 0x4
	float Distance; // 0x8
	FVector_NetQuantize Location; // 0xc
	FVector_NetQuantize ImpactPoint; // 0x18
	FVector_NetQuantizeNormal Normal; // 0x24
	FVector_NetQuantizeNormal ImpactNormal; // 0x30
	FVector_NetQuantize TraceStart; // 0x3c
	FVector_NetQuantize TraceEnd; // 0x48
	float PenetrationDepth; // 0x54
	int32_t Item; // 0x58
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x5c
	TWeakObjectPtr<AActor> Actor; // 0x64
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x6c
	FName BoneName; // 0x74
	int32_t FaceIndex; // 0x7c
};

struct FObjectLeakDetectionDataReceivedEvent {
	UNetConnection* Connection; // 0x0
	TArray<char> DataBlob; // 0x8
};

struct FServerMigrationCompletedDevTelemetryEvent {
	FGuid MigrationId; // 0x0
	TArray<FServerMigrationCompletedTelemetryActorData> ActorDetails; // 0x10
	float TotalTime; // 0x20
	int32_t NumClients; // 0x24
	int32_t NumActorsMigrated; // 0x28
	int32_t ActorSerialisationBytes; // 0x2c
};

struct FPrioritisedPromptWithHandle {
	FPrioritisedPromptHandle PromptHandle; // 0x0
	FPrioritisedPrompt Prompt; // 0x10
};

struct FStopNpcAnimationNetworkEvent : FBoxedRpc {
	AActor* TargetActor; // 0x10
	APlaceableReaction* PlaceableReaction; // 0x18
};

struct FAthenaAnimationAI {
	bool SpawnAnimationActive; // 0x0
	bool SpawnAnimationReadyToBegin; // 0x1
	UAnimSequence* AISpawn; // 0x8
	UAnimSequence* AIDespawn; // 0x10
	float AIAnimationSpawnTime; // 0x18
	bool AISpawnOnLand; // 0x1c
	bool AIFleeActive; // 0x1d
	FAthenaAnimationSkeletonSensingParams AISensing; // 0x20
	FAthenaAnimationSkeletonEmoteActionParams AIEmoteActions; // 0x58
	FAthenaAnimationSkeletonShipCaptainParams SkeletonShipCaptainParams; // 0x90
};

struct FAIStategyControllerMovementMod {
	UAIStrategyId* AIStrategy; // 0x0
	float OverrideControlRotationInterpSpeed; // 0x8
};

struct FPresortedBillboardsParams {
	EPresortedBillboardsMode Mode; // 0x0
	int32_t NumDirections; // 0x4
};

struct FResponseServerMemoryNetworkEvent : FNetworkEventStruct {
	FMemoryCommonData MemoryData; // 0x10
	TArray<FMemoryVisualiserCategory> VisualiserCategories; // 0x60
};

struct FToggleCinematicModeRpc : FBoxedRpc {
	bool bInCinematicMode; // 0x10
	APlayerController* PlayerController; // 0x18
};

struct FChaliceStatuePhaseUpdate {
	int32_t NewLevel; // 0x0
};

struct FEventBuoyantSpawnedObjectOwnershipTransferred {
	TScriptInterface<Class> BuoyancyInterface; // 0x0
};

struct FMastFallenAngleChangedEvent {
	float Angle; // 0x0
};

struct FGetNPCsDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FNPCStateData> Data; // 0x8
};

struct FCollectionLimits {
	FName CollectionName; // 0x0
	ECollectionAuditType AuditType; // 0x8
	bool IsOnlyParentCollection; // 0x9
	FCollectionTotalsLimits CollectionTotals; // 0xc
	FCollectionStaticMeshLimits StaticMeshLimits; // 0x1c
	FCollectionSkeleMeshLimits SkeleMeshLimits; // 0x24
	FCollectionAnimSequenceLimits AnimLimits; // 0x2c
	bool CanUseComplexCollisionAsSimple; // 0x30
	bool CanUseLOD0Collision; // 0x31
};

struct FClothingLoadoutUpdatedEvent {
	AActor* Character; // 0x0
};

struct FGhostPlayModeParameters {
	EPlayMode Playmode; // 0x0
	float RotationPerSecond; // 0x4
	float DisplacementPerSecond; // 0x8
};

struct FQuestVariableGuid : FQuestVariable {
	FName ParamName; // 0x8
};

struct FIPGBlendShape {
	FName Name; // 0x0
	FName NodeName; // 0x8
	float Value; // 0x10
};

struct FShipCreatureManagerCreatureInstance {
	UMeshComponent* CreatureMeshComponent; // 0x0
	UWwiseEvent* StopCreatureSounds; // 0x8
};

struct FTQStructGenSelection {
	UTaleQuestDescAsset* TaleQuestDesc; // 0x0
	UPLQuestLocationDataAsset* LocationData; // 0x8
};

struct FAthenaAnimationSkeletonEmoteActionParams {
	TArray<FAthenaAnimationSkeletonEmoteActionAnimations> AllLoadedAIEmoteActionAnimations; // 0x0
	ESkeletonEmoteActionState CurrentEmoteActionState; // 0x10
	UAnimSequence* TauntAnimation; // 0x18
	UAnimSequence* CheerAnimation; // 0x20
	UAnimSequence* TauntAnimationB; // 0x28
	UAnimSequence* CheerAnimationB; // 0x30
};

struct FTreasureData {
	FTreasureLocationData TreasureLocation; // 0x0
	UItemDesc* TreasureChestDesc; // 0x20
	UItemSpawnData* TreasureSpawnData; // 0x28
	float DigRadius; // 0x30
};

struct FEventExitedWatercraft {
	AActor* Watercraft; // 0x0
	AActor* Actor; // 0x8
};

struct FPLSectionBundleEntry {
	UPirateLegendSection* Section; // 0x0
	float Weight; // 0x8
};

struct FGameplayAbilitySpec : FFastArraySerializerItem {
	FGameplayAbilitySpecHandle Handle; // 0x8
	UGameplayAbility* Ability; // 0x10
	int32_t Level; // 0x18
	int32_t InputID; // 0x1c
	UObject* SourceObject; // 0x20
	bool InputPressed; // 0x28
	char ActiveCount; // 0x29
	bool RemoveAfterActivation; // 0x2a
	FGameplayAbilityActivationInfo ActivationInfo; // 0x30
	TArray<UGameplayAbility*> NonReplicatedInstances; // 0x50
	TArray<UGameplayAbility*> ReplicatedInstances; // 0x60
	FActiveGameplayEffectHandle GameplayEffectHandle; // 0x70
	bool PendingRemove; // 0x74
};

struct FBountyQuestParams : FQuestTypeParams {
	UAIBountySpawner* Spawner; // 0x30
	FBountyQuestRandomSpawnGeneratorParams BountyQuestRandomSpawnGeneratorParams; // 0x38
};

struct FPremiumStoreCardsView {
	FGuid Id; // 0x0
	FString PageTitle; // 0x10
	FString PageIcon; // 0x20
	TArray<FPremiumStoreCardView> CardViews; // 0x30
	FString TopBannerUrl; // 0x40
	FString BottomBannerUrl; // 0x50
};

struct FNotificationInputDisplayName {
	UNotificationInputId* InputID; // 0x0
	FText Name; // 0x8
};

struct FMerchantQuestRequiredItemsGroup {
	TArray<UMerchantQuestItemData*> RequiredItems; // 0x0
};

struct FRewardDefinition {
	FName RewardIdentifier; // 0x0
	UPopUpMessageDesc* PopUp; // 0x8
	bool IgnorePopUp; // 0x10
	TArray<UReward*> Rewards; // 0x18
	TArray<UEntitlementDesc*> PrerequisiteEntitlements; // 0x28
	bool AllowedFromInsecureSources; // 0x38
	bool AwardToAccountAndNotJustToPirate; // 0x39
	bool EmissaryExempt; // 0x3a
};

struct FClientBannedHandlerRetrieveDataResponse {
	bool Success; // 0x0
};

struct FEventAthenaAISpawnActive {
	EAthenaAISpawnType SpawnType; // 0x0
	bool SpawnActive; // 0x1
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FAshenWindsSkullMissfireParams {
	float ChargeThreshold; // 0x0
	FFloatRange SecondsBetweenMissfires; // 0x4
	FFloatRange MissfireDurationInSeconds; // 0x14
	UWwiseEvent* MissfireStartedSFX; // 0x28
	UWwiseEvent* MissfireStoppedSFX; // 0x30
};

struct FCarouselPirateDesc {
	int32_t Seed; // 0x0
	EIPGGender Gender; // 0x4
	EIPGEthnicity Ethnicity; // 0x5
	float Age; // 0x8
	FRadialCoordinate BodyShape; // 0xc
	float Dirtiness; // 0x14
	float Wonkiness; // 0x18
	TArray<UClothingDesc*> Outfit; // 0x20
};

struct FWorldMapShipLocation {
	FGuid CrewId; // 0x0
	UShipSize* ShipSize; // 0x10
	FVector2D Location; // 0x18
	float Rotation; // 0x20
	char ReplicatedRotation; // 0x24
	EWorldMapShipType Flags; // 0x25
	UTexture* CrewLiveryOverlayIcon; // 0x28
	char ReapersMarkLevel; // 0x30
	char EmissaryLevel; // 0x31
};

struct FEmissaryLevelRankChange {
	int32_t NewLevel; // 0x0
	FName CompanyName; // 0x4
};

struct FFeatureToggledLevels {
	FName Feature; // 0x0
	TArray<FStringAssetReference> Levels; // 0x8
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FVoyageParticipantView {
	FText Title; // 0x0
	FGuid Id; // 0x38
	int32_t ChapterIndex; // 0x48
	int32_t ChapterCount; // 0x4c
	int32_t ActiveQuestCount; // 0x50
	EVoyageChangeReason History; // 0x54
	UCompany* Company; // 0x58
	bool IsEmergent; // 0x60
	bool IsTale; // 0x61
	EEmergentVoyageSource EmergentSource; // 0x62
	FViewVoyageBanners ViewVoyageBanners; // 0x63
	bool DoNotNotifyParticipantsOnVoyageComplete; // 0x65
	int32_t Rank; // 0x68
	FNetActorPtr PlayerStateOfDiscoverer; // 0x6c
	bool IsDiscovererMe; // 0x80
	FName ChestRarity; // 0x84
	bool PlayAudio; // 0x8c
	int32_t ChestDiscoveredId; // 0x90
	UPopUpMessageDesc* PopUpDesc; // 0x98
	int32_t CollectCratesPopUpId; // 0xa0
	TArray<FPlayerStat> VoyageCompletionStats; // 0xa8
	TArray<FPlayerStat> ReapersMarkCompletionStats; // 0xb8
};

struct FClassFunctionSelectionType {
	UObject* Class; // 0x0
	FName Function; // 0x8
};

struct FHiddenActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FVoyageAndTaleProposalsUpdatedEvent {
	TArray<FVoyageProposalDescViewModel> VoyageProposalEntitlements; // 0x0
	TArray<FVoyageProposalDescViewModel> TaleProposalEntitlements; // 0x10
	bool VoyageIsActive; // 0x20
	bool TaleIsActive; // 0x21
};

struct FPlayerFinishedInteractingWithNPCDialog {
	AActor* Interactee; // 0x0
};

struct FEventEmoteRequested {
	FEmoteData EmoteData; // 0x0
	FName ForcedEmoteIdentifier; // 0x98
	bool ForcedEmote; // 0xa0
};

struct FSingleNPCCompanyRedirectionData {
	UCompany* Company; // 0x0
	FText VisitNPCTooltip; // 0x8
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingId; // 0x0
	uint16_t EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	TArray<FMovieSceneSegment> Segments; // 0x18
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x28
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0x38
	FName EvaluationGroup; // 0x70
	char bEvaluateInPreroll : 1; // 0x78
	char bEvaluateInPostroll : 1; // 0x78
};

struct FFFTWaterComponentParticleParams {
	int32_t MaxParticlesPerFrame; // 0x0
	FFFTWaterComponentWaveParticleType WaveParticles[0x4]; // 0x8
	FFFTWaterComponentIntersectParticleType IntersectionParticles[0x4]; // 0xe8
};

struct FEventClearCrewProgressOverride {
	FGuid CrewId; // 0x0
};

struct FCharacterActionStateConstructionInfo : FActionStateConstructionInfo {
	AAthenaCharacter* CharacterOwner; // 0x28
};

struct FSendMarketingOptInResponse {
	bool OptedIn; // 0x0
};

struct FCampaignCompletedNetworkEvent : FNetworkEventStruct {
	FName Name; // 0x10
};

struct FStatus {
	TArray<UStatusBase*> Type; // 0x0
	FStatusDescriptor Descriptor; // 0x10
};

struct FClientPawnDetails {
	TArray<APawn*> Pawns; // 0x0
};

struct FAthenaAIControllerSenseSettings {
	bool EnableSight; // 0x0
	bool EnableHearing; // 0x1
	bool EnableDamage; // 0x2
	float SightRadius; // 0x4
	float LoseSightRadius; // 0x8
	float PeripheralVisionAngleDegrees; // 0xc
	float MaxHearingRange; // 0x10
};

struct FBoxedRpcDiscardVoyage : FBoxedRpc {
	UVoyageProposalDesc* VoyageToDiscard; // 0x10
};

struct FCrewCompletedTaleEvent {
	FGuid CrewId; // 0x0
	bool DontNotifyParticipants; // 0x10
};

struct FEventFaunaAnimationImpact {
	float ImpactStrength; // 0x0
};

struct FRequestCompanyProgressEvent {
	FPirateIdentity PirateIdentity; // 0x0
	FGuid RequestID; // 0x78
};

struct FRewardIdCount {
	FName RewardId; // 0x0
	int32_t Count; // 0x8
};

struct FClientRequestExitConcealingObjectNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FWreckEvictionAfterMigrationFailedTelemetryEvent {
	FVector Location; // 0x0
};

struct FShipCurseSpawnedFXObject {
	UWwiseEvent* StopAudioLoopEvent; // 0x28
};

struct FPlayerXpGrantedTelemetryEvent {
	uint64_t XpAmount; // 0x0
	FName CompanyId; // 0x8
	FGuid BootyId; // 0x10
};

struct FQuestVariableArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FLinearTransitionActionStateConstructionInfo : FActorActionStateConstructionInfo {
	USceneComponent* SceneComponent; // 0x30
	FVector TargetLocation; // 0x38
	FQuat TargetRotation; // 0x50
};

struct FAthenaAnimationTalking {
	bool Talking; // 0x0
	TWeakObjectPtr<APawn> Owner; // 0x4
	TScriptInterface<Class> VoiceChatEmitter; // 0x10
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FAimSensitivitySettingParams {
	FFloatInterval Range; // 0x0
	float Default; // 0x8
};

struct FClearRadialInventory : FRadialInventoryEvent {
	int32_t RadialIdentifier; // 0x0
};

struct FEventStormLightningImpact {
	FVector ImpactPoint; // 0x0
	float TimeTillImpact; // 0xc
};

struct FInputSequencePair {
	UNotificationInputId* InputID; // 0x0
	UAnimMontage* Sequence; // 0x8
};

struct FQuestVariableName : FQuestVariable {
	FName ParamName; // 0x8
};

struct FContextualTutorialPromptDesc {
	AActor* PromptActorClass; // 0x0
	UPromptCounterAccessKey* AccessKey; // 0x8
	FName FeatureName; // 0x10
	int32_t MustBeUnderCount; // 0x18
};

struct FVaultTreasureRarity {
	UItemDesc* VaultKeyDesc; // 0x0
	FItemSpawnParams SpawnParams; // 0x8
	UWeightedItemDescSpawnDataAsset* ReferencedSpawnDistributionAsset; // 0x30
};

struct FMastSailLoweredProportionChangedEvent {
	float Proportion; // 0x0
	float DeltaTime; // 0x4
	float MovementRate; // 0x8
};

struct FCannonEnchantmentDesc {
	UObject* MuzzleFlashVfxFirstPerson; // 0x0
	UObject* MuzzleFlashVfxThirdPerson; // 0x8
	UWwiseEvent* FireSfx; // 0x10
};

struct FInlineVotingParameterSet {
	float HoldTime; // 0x0
	UVoteConsumerInlineBase* Consumer; // 0x8
	UVoteValidatorInlineBase* Validator; // 0x10
};

struct FAIAmmoRankMapping {
	UAthenaAIAmmoDataAsset* Ammo; // 0x0
	TArray<float> Weights; // 0x8
};

struct FServerAllocationSessionCookie {
	FString ServerLocation; // 0x0
	FString PrivateServerId; // 0x10
	FPlayModeDefiniton PlayModeDefinition; // 0x20
	int32_t CrewCountBucket; // 0x48
	FString TitleVersion; // 0x50
	uint32_t FeatureHash; // 0x60
	FString StampId; // 0x68
	bool ProgressionEnabled; // 0x78
};

struct FEventUserGameSettingsBooleanChanged {
	FName KeyName; // 0x0
	bool Value; // 0x8
};

struct FMermaidUsedEvent : FNetworkEventStruct {
	AMermaid* Mermaid; // 0x10
};

struct FEventItemWielded {
	AWieldableItem* WieldedItem; // 0x0
	AActor* Wielder; // 0x8
};

struct FEventShipwreckDiscoveredNotification {
	FText WreckName; // 0x0
};

struct FKrakenSpawnLocationParams {
	float KrakenRadius; // 0x0
	float MinDistanceFromExistingLocations; // 0x4
};

struct FActorFireDamageParams {
	UClass* ActorClass; // 0x0
	FFloatRange TimeInFireBeforeDamage; // 0x20
	int32_t LevelsOfDamage; // 0x30
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FFaunaAnimationBaseStructure {
	TArray<UAnimSequence*> Idle; // 0x0
	TArray<UBlendSpace1D*> Locomotion; // 0x10
	FFaunaAnimationTurningStructure Turning; // 0x20
	FFaunaAnimationStartledStructure Startled; // 0x30
	TArray<UBlendSpace1D*> Impact; // 0x48
	TArray<UAnimSequence*> DyingLoop; // 0x58
	TArray<UAnimSequence*> Death; // 0x68
	TArray<UAnimSequence*> Special; // 0x78
	FFaunaAnimationPigStarvingStructure PigStarving; // 0x88
	FFaunaAnimationEatingStructure Eating; // 0xb8
	FFaunaAnimationSnakeAttack SnakeAttack; // 0xc8
};

struct FPirateDescription {
	EIPGPirateType Type; // 0x0
	int32_t Version; // 0x4
	EIPGGender Gender; // 0x8
	EIPGEthnicity Ethnicity; // 0x9
	FRadialCoordinate BodyShapeCoordinate; // 0xc
	TArray<FIPGBlendShape> BlendShapes; // 0x18
	TArray<FIPGDynamicSlider> DynamicSliders; // 0x28
	int32_t Seed; // 0x38
	TArray<FName> Items; // 0x40
	TArray<FName> TextureReferences; // 0x50
	TArray<FName> MaterialReferences; // 0x60
	TArray<FIPGScalarParameter> ScalarParameters; // 0x70
};

struct FNPCOnSurfaceLocationGroup {
	FName GroupName; // 0x0
	TArray<FNPCOnSurfaceLocationsEntry> LocationsEntries; // 0x8
};

struct FStowAllItemsToContainerRPC : FBoxedRpc {
	FNetSubObjectPtr Container; // 0x10
	UItemDesc* ItemDescToStow; // 0x28
};

struct FEjectFromTunnelOfTheDamnedActionStateConstructionInfo : FActorActionStateConstructionInfo {
	int32_t TunnelId; // 0x30
	int32_t TunnelStreamingLevelId; // 0x34
	FTeleportLocation TeleportLocation; // 0x38
};

struct FAIShipWeightedSize {
	FName Feature; // 0x0
	int32_t Weight; // 0x8
	UShipSize* ShipSize; // 0x10
};

struct FEmissaryCompanyCampaignSettings {
	UCompany* Company; // 0x0
	TArray<FEmissaryCompanyCampaignKillPlayer> KillPlayers; // 0x8
	TArray<FEmissaryCompanyCampaignGameEvent> GameEvents; // 0x18
};

struct FCargoRunQuestCategoryGroup {
	float Weight; // 0x0
	FName GroupName; // 0x4
	TArray<FCargoRunQuestRandomRequiredItemsEntry> RequiredItemEntries; // 0x10
};

struct FReplacementDialogue {
	FText ReplacementText; // 0x0
};

struct FWeightedAIShipCrewFormType {
	int32_t Weight; // 0x0
	FAIShipCrewFormType Params; // 0x8
};

struct FEmissarySessionEndTelemetryEvent {
	FGuid EmissarySessionId; // 0x0
	FName EmissaryCompany; // 0x10
	EEmissaryDeactivateReason DisbandedReason; // 0x18
};

struct FEventStorageContainerCreated {
	UObject* Replenishable; // 0x0
};

struct FTutorialStepEatBanana : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FRequestCompanyProgressFailedEvent {
	FGuid RequestID; // 0x0
};

struct FSetVaultDoorStateData {
	int32_t ActorId; // 0x0
	char DoorType; // 0x4
	char DoorState; // 0x5
};

struct FNetworkEventStruct : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FSittingActionStateSerialisableData : FControlObjectActionStateSerialisableData {
	FVector UndockLocation; // 0x30
	bool UndockRequested; // 0x3c
};

struct FWieldablePetFoodSourceEntry {
	AActor* FoodSourceActor; // 0x0
	float TimeUntilConsumption; // 0x8
};

struct FKrakenAnimatedTentacleHitReactAnimation {
	int32_t CollisionBoneIndex; // 0x0
	UAnimSequence* HitReactAnimation; // 0x8
};

struct FUseItemActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr UsableObject; // 0x30
	UNotificationInputId* InputID; // 0x48
};

struct FConsumedIngestibleTelemetryEvent {
	FString ItemName; // 0x0
	ECookingState CookState; // 0x10
	TArray<FString> StatusesApplied; // 0x18
};

struct FShipMastCollapseStateTelemetryEvent {
	bool MastCollapsedState; // 0x0
};

struct FShipActiveCurseFXData {
	FShipCurseFXData CurseFXData; // 0x0
	FTimerHandle TimerHandle; // 0x30
};

struct FShipDamagedTelemetryEvent {
	FString DamageType; // 0x0
	FVector DamageLocation; // 0x10
	FString DamagedShipPart; // 0x20
	int32_t DamageLevel; // 0x30
	FGuid AttackId; // 0x34
};

struct FStorageContainerHealthChangedCloseInventoryRpc : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FEmissaryStoleLootNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
};

struct FCreatePirateRequestFailedEvent {
	FUniqueNetIdRepl UserId; // 0x0
	FGuid RequestID; // 0x18
};

struct FActorPtr {
	AActor* Actor; // 0x0
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FSleepingActionStateConstructionInfo : FControlObjectActionStateConstructionInfo {
	FSleepingActionStateParams SleepingActionStateParams; // 0x48
};

struct FAIShipContextDescGenerationSharedParams {
	TArray<EAIShipEncounterType> EncounterTypes; // 0x0
	TArray<FWeightedAIShipCrewFormType> SkeletonForms; // 0x10
	TArray<FWeightedAIShipCrewAmmoType> SkeletonAmmoTypes; // 0x20
	TArray<FColor> SailColours; // 0x30
	TArray<FAIShipCaptainParams> Captains; // 0x40
	TArray<UAIClassId*> CaptainGenders; // 0x50
};

struct FSailWithFlameOfFateColoursAboardStatData {
	uint32_t NumberOfUniqueFlameColoursAboard; // 0x0
	FPlayerStat DefaultStatToFire; // 0x4
	FPlayerStat AllianceStatToFire; // 0x8
};

struct FRewardRequestFailedMessage {
	TArray<FPirateIdentity> PirateIdentities; // 0x0
	FGuid RequestID; // 0x10
	FGuid CrewId; // 0x20
	ERewardRequestFailureReason FailureReason; // 0x30
};

struct FCutsceneGroup {
	float GroupCooldown; // 0x0
	TArray<FCutscenePool> Pools; // 0x8
};

struct FPlayerBriggedEndTelemetryEvent {
	FGuid BriggedId; // 0x0
	FDateTime BriggedStartDateTime; // 0x10
	EBrigReleaseReason ReleaseReason; // 0x18
};

struct FPremiumStoreLandingPage {
	TArray<FPremiumStoreLandingPageTab> Tabs; // 0x0
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x50
};

struct FEntitlementToRedeemItems {
	UEntitlementDesc* RequiredEntitlement; // 0x0
	TArray<FCommodityDescWithRedeemId> RedeemItems; // 0x8
};

struct FUICompanyShopInfo {
	bool ShouldShowCompanyInfo; // 0x0
	FText InfoTitle; // 0x8
	TArray<FText> InfoTips; // 0x40
};

struct FMerchantCrateItemInfoFaunaBreedRarityEntry {
	UFaunaBreed* FaunaBreed; // 0x0
	FName Rarity; // 0x8
	TArray<FCompanySpecificBootyReward> CompanySpecificHandInRewardIds; // 0x10
};

struct FWheelDesc {
	USkeletalMesh* WheelMesh; // 0x0
};

struct FPressurePlateAnimationComponent {
	USceneComponent* Component; // 0x0
	UTransformBlendCurveComponent* Curve; // 0x8
};

struct FCookableComponentSmokeFeedbackTimingEntry {
	float StateDuration; // 0x0
	ECookingSmokeFeedbackLevel StateFeedbackLevel; // 0x4
};

struct FExposureSettings {
	int32_t LogOffset; // 0x0
	bool bFixed; // 0x4
};

struct FTQStructGenWeightedContainer {
	FName Name; // 0x0
	float Weight; // 0x8
	int32_t MaxOccurrences; // 0xc
};

struct FActionStateMessage {
	UScriptStruct* Type; // 0x8
};

struct FImpactDamageEvent {
	FGuid AttackId; // 0x0
	UDamagerType* DamagerType; // 0x10
	AActor* DirectInstigator; // 0x18
	AActor* RootInstigator; // 0x20
	FVector Location; // 0x28
	FVector SurfaceNormal; // 0x34
	FVector Velocity; // 0x40
	float DamageAmount; // 0x4c
	int32_t DamageSpread; // 0x50
	EHealthChangedReason Reason; // 0x54
	bool DealFriendlyFireDamage; // 0x55
};

struct FPlayerBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<APlayerState> PlayerState; // 0x0
};

struct FCrewManagementMatchmakingVisibilityData {
	bool Voted; // 0x0
	int32_t VotesCast; // 0x4
	int32_t VotesRequired; // 0x8
	EMatchmakingVisibilityState State; // 0xc
};

struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	FColor Constant; // 0x3c
};

struct FPremiumCatalogLandingPageTab {
	FGuid Id; // 0x0
	FText DisplayName; // 0x10
	TArray<UPremiumCatalogLandingPageItemDataAsset*> Children; // 0x48
	FName FeatureToggle; // 0x58
	FName IncludeForPromotion; // 0x60
	FName ExcludeFromPromotion; // 0x68
	bool RealMoneyOnly; // 0x70
};

struct FLootToRangeDist {
	FWeightedProbabilityRange NumberOfLootItemsToSpawn; // 0x0
	UWeightedTreasureChestDescAsset* WeightedLootDescAsset; // 0x20
};

struct FPlayerGameFishingTelemetryEvent {
	float FishingDuration; // 0x0
	EFishSpawnTimeOfDay TimeOfDay; // 0x4
	bool InPool; // 0x5
	bool CloseToActiveFortOrSkellyShip; // 0x6
	bool InStorm; // 0x7
	bool CloseToShipwreck; // 0x8
	FString Sea; // 0x10
	FString IslandInRange; // 0x20
	EBaitType BaitType; // 0x30
	FString RewardId; // 0x38
	EFishingRodServerState ServerState; // 0x48
};

struct FEventInGameUISetPhotoMode {
	bool PhotoModeEnabled; // 0x0
};

struct FVoteSessionData {
	TArray<FVotersByOption> Votes; // 0x0
	FGuid SessionId; // 0x10
	bool IsLocked; // 0x20
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FRequestShopOffersEvent {
	FString CatalogName; // 0x0
};

struct FSwimmingCreatureLoadedMaterial {
	UMaterialInstance* MaterialInstance; // 0x0
	bool CastShadows; // 0x8
};

struct FCheatPerformedByClientNetworkEvent : FNetworkEventStruct {
	FString CheatSource; // 0x10
	FString CheatFunction; // 0x20
	FString CheatArguments; // 0x30
};

struct FTradeRouteMapData : FRegionMapData {
	FInterpCurveVector2D TradeRoutePath; // 0x48
	FVector2D TradeRoutePathOffset; // 0x60
	float TradeRoutePathSpacing; // 0x68
	float TradeRoutePathSegmentTextureWidth; // 0x6c
	float TradeRoutePathSegmentTextureLength; // 0x70
	bool NormalizeSplinePointSpacing; // 0x74
	float NormalizeAdjustment; // 0x78
	bool IgnoreFirstPoint; // 0x7c
};

struct FAthenaAnimationFishingAnimations {
	UAnimSequence* CastIntoHoldBack; // 0x0
	UBlendSpace* CastHoldBackLoop; // 0x8
	UAnimSequence* CastForwards; // 0x10
	UAnimSequence* CastHoldLoop; // 0x18
	UAnimSequence* CastToFishing; // 0x20
	UAnimSequence* CastFail; // 0x28
	UBlendSpace* Fishing; // 0x30
	UBlendSpace1D* FishingAdditive; // 0x38
	UBlendSpace1D* IntoFighting; // 0x40
	UBlendSpace* FightingCentral; // 0x48
	UBlendSpace1D* FightingAdditive; // 0x50
	UBlendSpace1D* Linesnap; // 0x58
	UAnimSequence* SuccessReelIn; // 0x60
	UAnimSequence* ComedyItemSuccessReelIn; // 0x68
	UAnimSequence* ShakingAdditive; // 0x70
	UAnimSequence* LineSnapShakingAdditive; // 0x78
	UAnimSequence* FishingToIdle; // 0x80
	UAnimSequence* FishingToUnequip; // 0x88
};

struct FGameplayEventData {
	FGameplayTag EventTag; // 0x0
	AActor* Instigator; // 0x8
	AActor* Target; // 0x10
	UObject* OptionalObject; // 0x18
	UObject* OptionalObject2; // 0x20
	FGameplayEffectContextHandle ContextHandle; // 0x28
	FGameplayTagContainer InstigatorTags; // 0x48
	FGameplayTagContainer TargetTags; // 0x70
	float EventMagnitude; // 0x98
};

struct FIslandMaterialZoneStatusMapping {
	UPhysicalMaterial* SurfaceMaterial; // 0x0
	bool ActivateOnStart; // 0x8
	TArray<FStatus> Status; // 0x10
};

struct FAthenaAICharacterCannonTarget {
	float Weight; // 0x0
	FName TargetLocation; // 0x4
};

struct FRewardRequestMessage {
	TArray<FPirateIdentity> Pirates; // 0x0
	FGuid RequestID; // 0x10
	FGuid CrewId; // 0x20
	FName RewardId; // 0x30
	FName CompanyAffiliation; // 0x38
	FName EmissaryAffiliation; // 0x40
	int32_t EmissaryLevel; // 0x48
	bool NotifyPlayer; // 0x4c
	EPlayMode Playmode; // 0x4d
	EPlayModeVariant PlayModeVariant; // 0x4e
};

struct FPetBreedViewModel {
	FString Name; // 0x0
	FString Icon; // 0x10
	FString Description; // 0x20
	bool HasNewStuff; // 0x30
	bool IsOwned; // 0x31
	TArray<FShopOffer> Offers; // 0x38
	TArray<FCategoryTab> Categories; // 0x48
};

struct FEventPlayerLoggedOut {
	AOnlineAthenaPlayerController* OnlineAthenaPlayerController; // 0x0
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x10
	FRotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	FVector LinearVelocity; // 0x2c
};

struct FEventPlayerEnteredIslandVicinity {
	AActor* Player; // 0x0
	FName IslandName; // 0x10
};

struct FPlayerTalkingSettings {
	FLinearColor IconTint; // 0x0
	UTexture2D* Icon; // 0x10
	float ScreenEdgePadding; // 0x18
	float Scale; // 0x1c
	float FadeInTimeInSeconds; // 0x20
};

struct FAnimNode_HIKResist : FAnimNode_HIKBase {
	float Alpha; // 0x48
	EHIKEffector Effector; // 0x4c
};

struct FSetTotalItemsOnRadialInventorySlot {
	int32_t SlotIndex; // 0x0
	int32_t TotalItems; // 0x4
	int32_t Capacity; // 0x8
};

struct FPlayerStatusEffectDeactivatedCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString Effect; // 0x28
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0xc8
};

struct FShipTypeAIShipEncounterParams {
	UShipSize* ShipSize; // 0x0
	UAIShipEncounterParamsDataAsset* Params; // 0x8
};

struct FShipCustomizationLoadoutPartCustomizations {
	TArray<FPartDesc> Parts; // 0x0
};

struct FShipPartsCatalogue {
	TArray<FShipPartsCataloguePartCustomisations> Parts; // 0x0
};

struct FLaunchableProjectileDamageEvent {
	AActor* Instigator; // 0x0
	AActor* ProjectileActor; // 0x8
	AActor* ActorHit; // 0x10
};

struct FAggressiveGhostShipFixedSpline {
	float StartAngleOffset; // 0x0
	TArray<float> Offsets; // 0x8
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x28
};

struct FTutorialEventControlledObjectDestroyed {
	ATutorialEventControlledObject* TutorialEventControlledObject; // 0x0
};

struct FUILiveCampaignDataErrorEvent {
	FString ErrorMessage; // 0x0
	FString ErrorStack; // 0x10
};

struct FGameplayTagResponseTableEntry {
	FGameplayTagReponsePair Positive; // 0x0
	FGameplayTagReponsePair Negative; // 0x10
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

struct FCircleElement2D {
	FVector2D Center; // 0x0
	float Radius; // 0x8
};

struct FRecentlyInteractedWithPlayer {
	FString GamerTag; // 0x0
	FString ScrambledGamertag; // 0x10
	FString XUID; // 0x20
	FDateTime LastInteractionTime; // 0x30
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FServiceMessagingTestMessage {
	int32_t Data; // 0x0
};

struct FEquipmentChestEquipItemEvent {
	UItemDesc* ItemDesc; // 0x0
};

struct FLevelProgressionEvent {
	FGuid SeasonId; // 0x0
	FGuid SourceGoalId; // 0x10
	int32_t XpChange; // 0x20
	int32_t CurrentXP; // 0x24
	int32_t CurrentTier; // 0x28
	int32_t CurrentLevel; // 0x2c
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve EnumCurve; // 0x38
};

struct FFuseComponentMetaWrapper : FItemMetaBase {
	TWeakObjectPtr<AActor> Instigator; // 0x18
	bool FuseEnabled; // 0x20
	float FuseTimeScale; // 0x24
};

struct FEmissaryCompanyCosmetics {
	TArray<UCostumeDesc*> CompanyCostumeCosmetics; // 0x0
	TArray<UShipCustomizationDesc*> CompanyShipCosmetics; // 0x10
};

struct FCargoRunQuestParams : FQuestTypeParams {
	FWeightedProbabilityRange NumberOfRequiredItems; // 0x30
	FWeightedProbabilityRangeOfRanges TimeLimitInMinutes; // 0x50
	UCargoRunQuestRandomRequiredItemsDataAsset* RequiredItemsDataAsset; // 0x80
};

struct FNameActiveStatePair {
	FName StateName; // 0x0
	bool IsActive; // 0x8
};

struct FTransitionLadderActionStateParams : FDockToObjectActionStateParams {
	float DockTime; // 0x0
	float DelayAfterDockingTime; // 0x4
	float ForcedFieldOfView; // 0x8
	bool ForceStash; // 0xc
};

struct FTutorialDialogEvent {
	ETutorialDialogStep StepStarted; // 0x0
};

struct FEventAthenaLoadingScreenStateResponse {
	bool IsVisible; // 0x0
};

struct FMovieScene2DTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve Translation[0x2]; // 0x38
	FRichCurve Rotation; // 0x128
	FRichCurve Scale[0x2]; // 0x1a0
	FRichCurve Shear[0x2]; // 0x290
};

struct FEventSpawnLocationDestroyed {
	ASpawnLocation* SpawnLocation; // 0x0
};

struct FMigrationActionPair {
	FTaleResourceHandle AllocatedResourceHandle; // 0x0
	UTaleMigrationAction* MigrationAction; // 0x8
};

struct FPirateRemoteServiceModel {
	TArray<FPirateProfile> Pirates; // 0x0
};

struct FTimedDoorLandmarkReactions {
	TArray<FLandmarkReactionKeyFrame> Reactions; // 0x0
};

struct FVoyageCompleteAnimationEvent {
	FText VoyageTitle; // 0x0
	FString AudioSwitchName; // 0x38
	FString AudioSwitchValue; // 0x48
	FName CompanyId; // 0x58
};

struct FStatusActivatedEvent {
	FGuid Id; // 0x0
	FName StatusName; // 0x10
};

struct FShipDamageEntry {
	UShipSize* OtherShipSize; // 0x0
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x8
	FInt32Range NumZonesToDamageForInstigator; // 0x10
	FInt32Range DamageLevelForInstigator; // 0x20
	FInt32Range NumZonesToDamageForReceiver; // 0x30
	FInt32Range DamageLevelForReceiver; // 0x40
};

struct FPurchaseConfigurationSettings {
	float BackOffTimeInSeconds; // 0x0
	float BackOffTimeGain; // 0x4
};

struct FEmissaryNonQuestCompanyActionRewardBoostEvent {
	EEmisaryCompanyActionType CompanyActionType; // 0x0
};

struct FAthenaAnimationLocomotion {
	FVector CharacterVelocity; // 0x0
	float WantedMovementSpeed; // 0xc
	float HalfWantedMovementSpeed; // 0x10
	bool CharacterMoving; // 0x14
	bool RunStopWanted; // 0x15
	float TurnRate; // 0x18
	float CurrentYaw; // 0x1c
	float CurrentDirection; // 0x20
	bool TurningActive; // 0x24
	bool TurningLeft; // 0x25
	bool IsSwimming; // 0x26
	bool IsUnderwaterSwimming; // 0x27
	float BlendedTurnRate; // 0x28
	float MinimumMoveSpeedToTriggerRunStop; // 0x2c
	float InterpSpeed; // 0x30
	float TurnRateToDisableTurns; // 0x34
	float TurningAnimationExplicitTime; // 0x38
	float FixedBlendedTurnRateForAI; // 0x3c
	bool IsInAITurn; // 0x40
	UAthenaAnimationInstance* CachedOwner; // 0x58
};

struct FVoteAddedNetworkEvent : FBoxedRpc {
	FName CompanyId; // 0x10
	FGuid CrewId; // 0x18
};

struct FTestProjectileWeaponParameters {
	bool PassCanTrigger; // 0x0
};

struct FAISwimmingCreatureDeadActionStateEventMapItem {
	ESwimmingCreatureDeathCustomEventEnum Event; // 0x0
	float FireAtTimeLeftInState; // 0x4
};

struct FHttpResponseTelemetryFragment {
	FString Method; // 0x0
	FString Endpoint; // 0x10
	FString Context; // 0x20
	EHttpRequestTelemetryResult Result; // 0x30
	int32_t StatusCode; // 0x34
	int32_t DurationMS; // 0x38
	FString ResponseBody; // 0x40
	TArray<FString> ResponseHeaders; // 0x50
	int32_t Attempts; // 0x60
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FEventStarvingAmountChanged {
	float PercentageStarved; // 0x0
};

struct FGameplayAbilityActivationInfo {
	EGameplayAbilityActivationMode ActivationMode; // 0x0
	bool bCanBeEndedByOtherInstance; // 0x1
	FPredictionKey PredictionKeyWhenActivated; // 0x8
};

struct FSuspensionStatusResponse {
	int32_t StrikeCount; // 0x0
};

struct FAIStrategySpeedOverride {
	UAIStrategyId* Strategy; // 0x0
	float Speed; // 0x8
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FEventUserGameSettingsSingleChange {
	FName SettingName; // 0x0
};

struct FPetDespawnActionStateParams {
	float TakeOffHeight; // 0x0
	float TakeOffTime; // 0x4
	float TotalGhostShaderTime; // 0x8
	float TimeToTriggerVFX; // 0xc
	UObject* DespawnVFX; // 0x10
	FLinearColor DespawnVFXColour; // 0x18
	UWwiseEvent* DespawnSFX; // 0x28
	UWwiseEvent* StopDespawnSFX; // 0x30
	float TotalDespawningTime; // 0x38
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FKrakenShipWrappingBehaviourWarningParams {
	AKrakenAnimatedTentacle* TentacleType; // 0x0
	float TickDuration; // 0x8
	FFloatRange TentacleTimeoutRange; // 0xc
	FWeightedProbabilityRangeOfRanges TentacleHealthRange; // 0x20
	TArray<FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations; // 0x50
	float TentacleTimeout; // 0x60
	float TentacleHealth; // 0x64
	FTransform TentacleLocation; // 0x70
};

struct FDebugMenuDataAssetEntry {
	FString MenuPath; // 0x0
	FString DisplayName; // 0x10
	FString ConsoleCommand; // 0x20
	bool CloseMenuWhenExecuted; // 0x30
	bool AvailableInShippingBuilds; // 0x31
	bool AddToCommonlyUsedMenu; // 0x32
};

struct FTeleportLocation {
	bool Valid; // 0x0
	USceneComponent* TeleportBase; // 0x8
	FVector TeleportLocation; // 0x10
	FRotator TeleportRotation; // 0x1c
};

struct FWwiseBinkTrackMappings {
	EWwiseLanguageOrder mLanguage; // 0x0
	TArray<FWwiseBinkTrackMapping> mChannels; // 0x8
};

struct FAdditionalWave {
	TArray<FAdditionalCaptainTarget> TargetOptions; // 0x0
	FWeightedProbabilityRange NumberOfTargets; // 0x10
	bool RandomSelect; // 0x30
	UAICombatDialogue* AICombatDialogue; // 0x38
};

struct FAddAITypeSpawnRuleData {
	FString TypeName; // 0x0
	FString Region; // 0x10
	bool Enabled; // 0x20
};

struct FVoyageProposalWonVotingSessionTelemetryEvent {
	FGuid VoyageProposalSessionId; // 0x0
	FString VoyageProposalEntitlementId; // 0x10
	int32_t NumberOfVotes; // 0x20
	int32_t SessionLength; // 0x24
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FEventOptimalInteractionObjectChanged {
	UObject* PreviousFocusObject; // 0x0
	UObject* NewFocusObject; // 0x8
};

struct FClientBootFlowExistingSessionTelemetry {
	FString SessionId; // 0x0
	FString Playmode; // 0x10
	FString SessionType; // 0x20
	FString OwningUserId; // 0x30
};

struct FPetRoamingAnimationStateDefinition {
	EPetMontageAnimationType AnimationType; // 0x0
	UAnimMontage* MontageData; // 0x8
	FPetAnimationCycleMontage CycleData; // 0x10
	EWieldAnimationLocation CurrentWieldableLocation; // 0x28
	EWieldAnimationLocation ResetWieldableLocation; // 0x29
	float BlendInTime; // 0x2c
	float BlendOutTime; // 0x30
	bool Uninterruptable; // 0x34
	bool ResetWieldableIfInterrupted; // 0x35
	bool AllowHappyReact; // 0x36
};

struct FCompanyProgressUpdateEvent {
	FCompanyReputationProgressModel CompanyProgress; // 0x0
};

struct FPetLoadoutContainer {
	FPetLoadout Loadout; // 0x0
	bool HasBeenSet; // 0x18
};

struct FSetRadialItemsAggregate : FRadialInventoryEvent {
	TArray<FSetItemOnRadialInventorySlot> Items; // 0x8
	TArray<FSetTotalItemsOnRadialInventorySlot> Quantities; // 0x18
	TArray<FSetMapTypeOnRadialInventorySlot> Maps; // 0x28
};

struct FPurchasePremiumCurrencyErrorEvent {
	FString Message; // 0x0
};

struct FEventResetSettingsGroup {
	FName SettingsGroupNameToReset; // 0x0
};

struct FMovieSceneSequencePlaybackSettings {
	int32_t LoopCount; // 0x0
	float PlayRate; // 0x4
	bool bRandomStartTime; // 0x8
	float StartTime; // 0xc
	bool bRestoreState; // 0x10
	TScriptInterface<Class> BindingOverrides; // 0x18
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName FloatPropertyName; // 0x18
	UFloatProperty* FloatProperty; // 0x20
};

struct FGetGeysersDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FGeyserStateData> Data; // 0x8
};

struct FServerRegionModel {
	FVector2D Position; // 0x0
	float Radius; // 0x8
};

struct FNPCCustomAnimationBlueprintPlayingMontage {
	UAnimMontage* OneShot; // 0x0
	UAnimMontage* ContinouousIn; // 0x8
	UAnimMontage* ContinouousLoop_A; // 0x10
	UAnimMontage* ContinouousLoop_B; // 0x18
	UAnimMontage* ContinouousOut; // 0x20
};

struct FAICustomClassIdNameOverrides {
	TArray<UAIClassId*> ClassIds; // 0x0
	TArray<FText> Names; // 0x10
};

struct FEventPlayerControllerHitNotification {
	bool PlaySfx; // 0x0
};

struct FNamedPointsCollectionGroup {
	FName GroupName; // 0x0
	TArray<FOrientedPoint> GroupPoints; // 0x8
	TArray<ENamedPointGroupSearchTag> GroupTags; // 0x18
};

struct FKrakenShipWrappingBehaviourTentacleHeadParams {
	AKrakenAnimatedTentacle* TentacleType; // 0x0
	FWeightedProbabilityRangeOfRanges DamageRequiredToRelocate; // 0x8
	float RelocationThreshold; // 0x38
	float ChanceOfSwitchingSides; // 0x3c
	float ChanceOfSelectingNearLocationAfterSwitchingSides; // 0x40
	float ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide; // 0x44
};

struct FGameServerWebSocketEntityEvent {
	FString EventID; // 0x0
	FString ServerId; // 0x10
	FDateTime ServerTimeUTC; // 0x20
};

struct FRadialInventoryEvent {
	int32_t RadialIdentifier; // 0x0
};

struct FMaterialQualityOverrides {
	bool bEnableOverride; // 0x0
	bool bForceFullyRough; // 0x1
	bool bForceNonMetal; // 0x2
	bool bForceDisableLMDirectionality; // 0x3
};

struct FEventCrewReleasedCapstan {
	FGuid CrewId; // 0x0
};

struct FWeightedContestZone {
	FName ContestZoneName; // 0x0
	int32_t Weight; // 0x8
};

struct FWeightedSpawnDirection {
	float DirectionAngle; // 0x0
	float DirectionWidth; // 0x4
	float Weight; // 0x8
	TArray<FWeightedSpawnOffset> SpawnOffsets; // 0x10
};

struct FTreasureSoldCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString CrewId; // 0x28
	FString TreasureType; // 0x38
	FString VendorId; // 0x48
	FString CompanyId; // 0x58
};

struct FPlayerItemAddToContainerCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FPlayModeLevelArray {
	TArray<FStringAssetReference> PlayModeLevels; // 0x0
	TArray<FSubModeLevel> SubModes; // 0x10
};

struct FAttackTimingWindow {
	float StartTime; // 0x0
	float EndTime; // 0x4
};

struct FUIKeyBindingOptionSelectedTelemetryEvent {
	FString BindingSet; // 0x0
	FKeyBinding Value; // 0x10
};

struct FAthenaAnimationObjectEquipAnimations {
	UAnimSequence* Equip; // 0x0
	UBlendSpace* EquipAsBlendSpace; // 0x8
	UBlendSpace* EquipSwimming; // 0x10
	UAnimSequence* UnEquip; // 0x18
	UBlendSpace* UnEquipAsBlendSpace; // 0x20
	UAnimSequence* Pickup; // 0x28
	UAnimSequence* Drop; // 0x30
	bool UseEquipBlendSpace; // 0x38
	bool UseUnequipBlendSpace; // 0x39
};

struct FAchievementSailThroughStormAtNightWithLightsOff {
	uint32_t RequiredTravelDistance; // 0x0
	AShip* Ship; // 0x50
};

struct FCharacterAnimationIKUpdateParams {
	float CurrentAlpha; // 0x0
	float TranslationStrength; // 0x4
	float RotationStrength; // 0x8
	FVector Location; // 0xc
	FQuat Orientation; // 0x20
	EHIKEffectorSpace EffectorSpace; // 0x30
	FName ParentBone; // 0x34
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionBlueprintSettings BlueprintSettings; // 0x1c0
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1e0
	FFilePath SourceControlMaterial; // 0x200
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FEventAthenaLoadingScreenBlockUntilUIIntialisedClear {
	FString Description; // 0x0
};

struct FCustomAnimationMontageId {
	FName CustomAnimationMontageId; // 0x0
};

struct FSessionTypeSelectionResponseEvent {
	ECrewSessionType SessionType; // 0x0
};

struct FEventAmmoChanged {
	int32_t Ammo; // 0x0
};

struct FQuestVariableAISpawnerArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FPremiumCatalogOfferGroup {
	FText Title; // 0x0
	TArray<FGuid> Children; // 0x38
};

struct FExitTunnelOfTheDamnedActionStateParams {
	float ClientSetupResponseTimeout; // 0x0
	float CameraAnimationRate; // 0x4
	float CameraAnimationScale; // 0x8
	float CameraAnimationBlendInTime; // 0xc
	float CameraAnimationBlendOutTime; // 0x10
};

struct FThrowGrenadeMulticastRpc : FBoxedRpc {
	AActor* Wielder; // 0x10
	AGrenade* Grenade; // 0x18
	FVector ServerThrowLocation; // 0x20
	FVector LaunchVelocity; // 0x2c
	AActor* ThrownProjectileType; // 0x38
	float FirstPersonScaleModifier; // 0x40
	float ProjectileGravityScale; // 0x44
	FVector FirstPersonThrowOffset; // 0x48
	bool UseVisualThrowOffset; // 0x54
};

struct FShipAnnouncementCinematicEvent {
	FText ShipName; // 0x0
	FText ShipTitle; // 0x38
};

struct FEventPlayerFellDistance {
	float FallDamage; // 0x0
	float LandingSpeed; // 0x4
};

struct FEventPetRefusedFood : FEventPetFoodBase {
	AActor* FeedingActor; // 0x10
};

struct FPlayerKillAICustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x48
	FVector2D ShadowOffset; // 0x78
	FLinearColor ShadowColorAndOpacity; // 0x80
	FSlateColor SelectedBackgroundColor; // 0x90
	FLinearColor HighlightColor; // 0xc0
	FSlateBrush HighlightShape; // 0xd0
};

struct FAthenaAnimationAsyncLoadedObjectIdleAnimations {
	UAnimSequence* Idle1; // 0x0
	UAnimSequence* Idle2; // 0x20
	UAnimSequence* Idle3; // 0x40
};

struct FEventStartedBeingFed {
	AActor* FedBy; // 0x0
};

struct FWaterModifierZoneParametersAndLocation {
	FWaterModifierZoneParameters WaterModifierZoneParameters; // 0x0
	FVector Location; // 0x78
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	FMaterialSimplificationSettings Material; // 0x4
	int32_t TextureWidth; // 0x48
	int32_t TextureHeight; // 0x4c
	bool bExportNormalMap; // 0x50
	bool bExportMetallicMap; // 0x51
	bool bExportRoughnessMap; // 0x52
	bool bExportSpecularMap; // 0x53
	bool bRecalculateNormals; // 0x54
	float HardAngleThreshold; // 0x58
	int32_t MergeDistance; // 0x5c
	bool bUseClippingPlane; // 0x60
	float ClippingLevel; // 0x64
	int32_t AxisIndex; // 0x68
	bool bPlaneNegativeHalfspace; // 0x6c
};

struct FEventPlayerEnteredAISpawnRegion {
	AActor* Player; // 0x0
};

struct FEventPlayerCharacterEnteredShip {
	AActor* PlayerCharacter; // 0x0
};

struct FCosmeticItems {
	TArray<AActor*> CosmeticItemArray; // 0x0
};

struct FGameEventExclusionZone {
	FVector2D Location; // 0x0
	float Radius; // 0x8
};

struct FConvexElement2D {
	TArray<FVector2D> VertexData; // 0x0
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	int32_t Index; // 0x8
	FRichCurve XCurve; // 0x10
	FRichCurve YCurve; // 0x88
	FRichCurve ZCurve; // 0x100
};

struct FTaleQuestChecklistItem {
	FText Description; // 0x0
	int32_t NumCurrentCompletions; // 0x38
	int32_t NumRequiredCompletions; // 0x3c
	UTexture* UnfulfilledIcon; // 0x40
	UTexture* FulfilledIcon; // 0x48
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FModalInteractionActionStateSerialisableData : FActionStateSerialisableData {
	FNetActorPtr Interaction; // 0x30
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x98
};

struct FRewardRequestCrew {
	FGuid CrewId; // 0x0
	TArray<FPirateIdentity> Pirates; // 0x10
	FName EmissaryAffiliation; // 0x20
	uint32_t EmissaryLevel; // 0x28
};

struct FAthenaAnimationCannonAnimData {
	UBlendSpace1D* Into; // 0x0
	TArray<UBlendSpace1D*> Idle; // 0x8
	UBlendSpace1D* Fire; // 0x18
	UBlendSpace1D* Outof; // 0x20
};

struct FSessionVisibilityChangedTelemetryEvent {
	FString SessionVisibility; // 0x0
};

struct FGameNarrationOverrideStateChangeEvent {
	int32_t Status; // 0x0
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	char bApplyToChildren : 1; // 0x10
	float VoiceCenterChannelVolumeAdjuster; // 0x14
};

struct FAthenaAIAbilityDamageStage {
	TArray<UAthenaAIAbilityStageParams*> AbilitiesInStage; // 0x0
};

struct FRequestCreateItemPreviewEvent {
	int32_t ResolutionX; // 0x0
	int32_t ResolutionY; // 0x4
};

struct FEventPopUpQueueServicePaused {
	bool Paused; // 0x0
	int32_t Reason; // 0x4
};

struct FFireCellAudioParams {
	UWwiseObjectPoolWrapper* EmitterPool; // 0x0
	UWwiseObjectPoolWrapper* DousePool; // 0x8
	UWwiseEvent* FirePlay; // 0x10
	UWwiseEvent* FireStop; // 0x18
	UWwiseEvent* FireDouse; // 0x20
	FName FireSwitchGroup; // 0x28
	FName FireSwitchBurning; // 0x30
	FName FireSwitchKindled; // 0x38
};

struct FPlayerStartedDiggingEvent {
	AActor* ActorBeingDugUp; // 0x0
};

struct FPlayerHealthChangeCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FServerMigrationSetServerConfigMessage {
	FTimespan ExpectedServerLifetime; // 0x0
};

struct FWwiseAudioAcousticSurfaceParams {
	float Thickness; // 0x0
	float Reflectivity; // 0x4
};

struct FEmissaryLeaderboardScoreUpdatedNetworkEvent : FNetworkEventStruct {
	FName EmissaryAffiliation; // 0x10
	int64_t From; // 0x18
	int64_t To; // 0x20
};

struct FAthenaAnimationRowboatParams {
	bool InLeftArmRow; // 0x0
	bool InLeftArmRecover; // 0x1
	bool InRightArmRow; // 0x2
	bool InRightArmRecover; // 0x3
	float LeftArmForce; // 0x4
	float LeftArmRecover; // 0x8
	float RightArmForce; // 0xc
	float RightArmRecover; // 0x10
	ERowBraking Braking; // 0x14
	bool BrakingLeftOrBoth; // 0x15
	bool BrakingRightOrBoth; // 0x16
	int32_t Direction; // 0x18
	bool PlayIdle; // 0x1c
	bool LeftArmInactive; // 0x1d
	bool RightArmInactive; // 0x1e
	FVector CameraAdjustment; // 0x20
	bool IsSeated; // 0x2c
	FAthenaAnimationRowboatAnimationsFirstPerson RowBoatAnimationsFirstPerson; // 0x30
	FAthenaAnimationRowboatAnimationsThirdPerson RowBoatAnimationsThirdPerson; // 0x60
	FAthenaAnimationRowboatAnimationsPassenger RowBoatAnimationsPassenger; // 0xb0
};

struct FEventLocalPlayerEnteredSittingState {
	bool SeatSupportsThirdPersonCamera; // 0x0
};

struct FAggressiveGhostShipRewardData {
	TArray<FGhostShipRewardData> Rewards; // 0x0
	float SpawnRate; // 0x10
};

struct FTableRowStyle : FSlateWidgetStyle {
	FSlateBrush SelectorFocusedBrush; // 0x8
	FSlateBrush ActiveHoveredBrush; // 0x98
	FSlateBrush ActiveBrush; // 0x128
	FSlateBrush InactiveHoveredBrush; // 0x1b8
	FSlateBrush InactiveBrush; // 0x248
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8
	FSlateBrush EvenRowBackgroundBrush; // 0x368
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8
	FSlateBrush OddRowBackgroundBrush; // 0x488
	FSlateColor TextColor; // 0x518
	FSlateColor SelectedTextColor; // 0x548
	FSlateBrush DropIndicator_Above; // 0x578
	FSlateBrush DropIndicator_Onto; // 0x608
	FSlateBrush DropIndicator_Below; // 0x698
};

struct FKrakenShipWrappingBehaviourParamsCollection {
	TArray<UKrakenShipWrappingBehaviourParamsDataAsset*> Params; // 0x0
};

struct FContestMapContents {
	FString VoyageName; // 0x0
	FString ScoreboardTitle; // 0x10
	TArray<FContestMapCrewData> CrewsData; // 0x20
	TArray<EScoreReason> ScoreReasonsToShowInfo; // 0x30
};

struct FMovieSceneStringPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FStringCurve StringCurve; // 0x38
};

struct FServerShutdownRequestFilter {
	FDateTime ShutdownTimeUtc; // 0x0
	FString VersionNumber; // 0x8
	EPlayMode Playmode; // 0x18
	EPlayModeVariant PlayModeVariant; // 0x19
	EServerEnvironmentShutdownStatus ServerEnvironmentStatus; // 0x1a
	FString FeatureHash; // 0x20
	FString BuildId; // 0x30
	uint32_t AgeOverSeconds; // 0x40
	FGuid SessionId; // 0x44
};

struct FEnableRadialInventoryMouseControl : FRadialInventoryEvent {
	int32_t RadialIdentifier; // 0x0
};

struct FWeightedTallTaleContestRecipe {
	UTallTaleContestRecipeDataAsset* TallTaleContest; // 0x0
	int32_t WeightedChance; // 0x8
};

struct FOutgoingServerMigrationCompletedEvent : FServerMigrationInstanceEventBase {
	FGuid ServerId; // 0x0
	FGuid MigrationId; // 0x10
};

struct FCleanlinessInfo {
	EDirtinessType DirtinessType; // 0x0
	float Strength; // 0x4
	float QuickClean; // 0x8
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
};

struct FProjectileHitTelemetryEvent {
	FGuid AttackId; // 0x0
	FString ProjectileId; // 0x10
	FString HitObjectId; // 0x20
	FString HitObjectType; // 0x30
};

struct FEventClientPlayerSpawnedBeforeGameState : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FWeightedSpawnOffset {
	float MinSpawnDistance; // 0x0
	float MaxSpawnDistance; // 0x4
	float Weight; // 0x8
	FWeightedProbabilityRangeOfRanges SpawnRotations; // 0x10
};

struct FNotesManagementAddNoteResponseModel {
	bool Success; // 0x0
	FGuid NoteId; // 0x4
};

struct FResetCustomConfigForPlayerData {
	int32_t PlayerNetGUID; // 0x0
};

struct FCustomCalculationBasedFloat {
	UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x0
	FScalableFloat Coefficient; // 0x8
	FScalableFloat PreMultiplyAdditiveValue; // 0x28
	FScalableFloat PostMultiplyAdditiveValue; // 0x48
};

struct FShockwaveDamagerShipDamage {
	float MaxDistanceInMetres; // 0x0
	int32_t MinNumHoles; // 0x4
	int32_t MaxNumHoles; // 0x8
	int32_t LevelOfHoleDamage; // 0xc
};

struct FCrewSessionLeaveCustomServerEvent : FGlobalCustomServerEvent {
	FString CrewId; // 0x18
};

struct FUIReturnedToPlayerEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FPendingInviteViewModel {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
};

struct FVoyageProposalDescViewModel : FVoyageDisplayInformation {
	FString ProposalDesc; // 0x98
	EVoyageDisplayState State; // 0xa8
	int32_t VoyageIndex; // 0xac
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FCampfireDamageLightingChance {
	UDamagerType* DamageType; // 0x0
	float Chance; // 0x8
};

struct FAggressiveGhostShipEncounterFormationDesc {
	TArray<FAggressiveGhostShipEncounterFormationLocationDesc> Locations; // 0x0
};

struct FActiveGameplayCueContainer : FFastArraySerializer {
	TArray<FActiveGameplayCue> GameplayCues; // 0xa8
	UAbilitySystemComponent* Owner; // 0xb8
};

struct FWeightedRewardTable {
	TArray<FWeightedRewardTableUnit> Rewards; // 0x0
};

struct FDebugCrewContestInfo {
	FGuid CrewId; // 0x0
	FString ShipName; // 0x10
	int32_t Score; // 0x20
};

struct FSeasonRewardEarnedEvent {
	FGuid SeasonId; // 0x0
	bool MultipleRewards; // 0x10
	TArray<FSeasonReward> Rewards; // 0x18
};

struct FIslandEventTooltipData {
	FVoyageDisplayInformation DisplayInfo; // 0x0
	FGuid EventID; // 0x98
};

struct FAthenaAnimationWaterPump {
	AActor* WaterPump; // 0x10
};

struct FEventUserGameSettingsSetKeyBindingToInvalid {
	EBindingSet BindingSet; // 0x0
	FString BindingName; // 0x8
	EInputControllerType ControllerType; // 0x18
};

struct FLargeSessionEncounterDevTelemetryEvent {
	FString EncounteredUserId; // 0x0
	bool TaskSucceeded; // 0x10
};

struct FEventSpawnLocationCreated {
	ASpawnLocation* SpawnLocation; // 0x0
};

struct FTTFloatTrack : FTTTrackBase {
	UCurveFloat* CurveFloat; // 0x10
};

struct FEventWheelStoppedMoving {
	bool IsAtEnd; // 0x0
};

struct FEventCharacterInert {
	bool bIsInert; // 0x0
};

struct FNullActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FIgnoreActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	float TimeRemaining; // 0x8
};

struct FClothingAssetData {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties PhysicsProperties; // 0x1c
};

struct FCommerceRemoteServiceWalletBalanceResponse {
	TMap<FString, uint32_t> Balances; // 0x0
};

struct FAthenaAnimationEmoteAnimgraphStructure {
	TArray<FAthenaAnimationEmoteAnimations> EmoteAnimationArray; // 0x0
	UAnimSequence* OneShotAnimationToUse; // 0x10
	UAnimSequence* ContinuousInAnimationToUse; // 0x18
	UAnimSequence* ContinuousLoopAnimationToUseA; // 0x20
	UAnimSequence* ContinuousLoopAnimationToUseB; // 0x28
	bool EmoteActive; // 0x30
	bool OneShotEmoteActive; // 0x31
	bool ContinuousEmoteActive; // 0x32
	bool ContinuousEmoteLoopExit; // 0x33
};

struct FKrakenDynamicsParams {
	FKrakenDynamicsStateParams AmbientWobble; // 0x0
	FKrakenDynamicsStateParams EnteringShakeAttack; // 0x10
	FKrakenDynamicsStateParams ShakeAttack; // 0x20
	FKrakenDynamicsStateParams ExitingShakeAttack; // 0x30
	FKrakenDynamicsStateParams HeavyAttack; // 0x40
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FMemoryVisualiserStat {
	FName StatName; // 0x0
	FString DisplayName; // 0x8
	float MemoryUsageMB; // 0x18
};

struct FHierarchicalSimplification {
	bool bSimplifyMesh; // 0x0
	float DrawDistance; // 0x4
	float DesiredBoundRadius; // 0x8
	float DesiredFillingPercentage; // 0xc
	int32_t MinNumberOfActorsToBuild; // 0x10
	FMeshProxySettings ProxySetting; // 0x14
	FMeshMergingSettings MergeSetting; // 0x88
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
	TArray<FEmitterPointData> EmitterPoints; // 0x40
};

struct FCompressedOffsetData {
	TArray<int32_t> OffsetData; // 0x0
	int32_t StripSize; // 0x10
};

struct FEarthquakeForceFeedback {
	TArray<FEarthquakeForceFeedbackOption> ForceFeedbackOptions; // 0x0
	FWeightedProbabilityRangeOfRanges TimeBetweenRumbles; // 0x10
};

struct FTaleResourceHandle {
	int32_t ResourceHandle; // 0x0
	int32_t ValidationId; // 0x4
};

struct FPartsCustomisation {
	TArray<FPartDesc> Parts; // 0x0
	TArray<UShipCustomizationDesc*> InitialEntitlements; // 0x10
};

struct FAthenaAnimationFallbackLocomotionAnimations {
	UBlendSpace* FallbackLocomotionMovement; // 0x0
	UAnimSequence* FallbackTurningLeft; // 0x8
	UAnimSequence* FallbackTurningRight; // 0x10
	UBlendSpace* FallbackLocomotionSwimming; // 0x18
};

struct FVFXHandlerComponentParams {
	UParticleSystem* ParticleSystem; // 0x0
	FVector VFXRelativeOffset; // 0x8
	FVector VFXScale; // 0x14
	FRotator VFXRotationOffset; // 0x20
	FName VFXAttachSocket; // 0x2c
	float VFXDrivingCurveValue; // 0x34
	EVfxCustomLocalSpaceMode VFXCustomLocalSpaceMode; // 0x38
};

struct FKrakenShipHittingBehaviourImpactParams {
	int32_t Weight; // 0x0
	FTransform TentacleTransform; // 0x10
	FVector ImpactLocation; // 0x40
	FVector ImpactForce; // 0x4c
	FVector DamageLocation; // 0x58
	FWeightedProbabilityRangeOfRanges NumZonesToDamage; // 0x68
};

struct FCanvasWorldMapShipLocation {
	FGuid CrewId; // 0x0
	UShipSize* ShipSize; // 0x10
	FVector2D Location; // 0x18
	float Rotation; // 0x20
	FCanvasLerpData LerpData; // 0x24
	bool IsInAlliance; // 0x34
	char ReapersMarkLevel; // 0x35
	char EmissaryLevel; // 0x36
	bool IsContestShip; // 0x37
	UTexture* CrewLiveryOverlayIcon; // 0x38
	bool IsReapersTrackedShip; // 0x40
	bool IsInTunnel; // 0x41
};

struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	float Constant; // 0x3c
};

struct FShipLeak {
	FShipLeakParams Params; // 0x0
	UParticleSystemComponent* SplashParticleSystem; // 0x40
};

struct FPremiumCurrencyItemsErrorEvent {
	FString Message; // 0x0
};

struct FClientEndEngagementMessageTelemetryEvent {
	float ScreenDuration; // 0x0
	FString EndedScreen; // 0x8
};

struct FAthenaAnimationSkeletonEmoteActionAnimations {
	UWieldableItemAnimationStoreId* UseWithObject; // 0x0
	TArray<UAnimSequence*> Taunt; // 0x8
	TArray<UAnimSequence*> Cheer; // 0x18
};

struct FHUDBlur {
	UMaterialParameterCollectionInstance* ScreenEffectsMaterialParameterCollectionInstance; // 0x0
};

struct FNPCStateData : FActorStateData {
	FString Name; // 0x20
};

struct FVoyageBegunAnimationEvent {
	FText ShipName; // 0x0
	TArray<FString> CrewMembers; // 0x38
	int32_t ChapterIndex; // 0x48
	int32_t ChapterCount; // 0x4c
	FText VoyageTitle; // 0x50
	FString AudioSwitchName; // 0x88
	FString AudioSwitchValue; // 0x98
	FName CompanyId; // 0xa8
};

struct FStatusDeactivatedEvent {
	FGuid Id; // 0x0
	FName StatusName; // 0x10
};

struct FWorldRegionMapping {
	USeaId* SeaId; // 0x0
	EWorldRegion WorldRegion; // 0x8
};

struct FShipwreckSiteRotation {
	FRotator Base; // 0x0
	FRotator MaxVariance; // 0xc
};

struct FDamageInstance {
	FGuid AttackId; // 0x0
	AActor* DirectInstigator; // 0x10
	AActor* RootInstigator; // 0x18
	float Amount; // 0x20
	EHealthChangedReason Reason; // 0x24
};

struct FMovieSceneSequenceCachedSignature {
	TWeakObjectPtr<UMovieSceneSequence> Sequence; // 0x0
	FGuid CachedSignature; // 0x8
};

struct FSeasonTierInfo {
	int32_t Number; // 0x0
	FString LocalizedTitle; // 0x8
};

struct FPrimitiveSphereEmitterAngleRanges {
	FVector2D HorizontalAngle; // 0x0
	FVector2D VerticalAngle; // 0x8
};

struct FVomitVFXObject {
	FName VFXName; // 0x0
	UObject* FirstPerson; // 0x8
	UObject* ThirdPerson; // 0x10
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FWreckSpawnQueryPriorityData {
	TArray<FWreckQueryPriorityEntry> PriorityTable; // 0x0
};

struct FMovieScenePossessable {
	FGuid Guid; // 0x0
	FString Name; // 0x10
	UObject* PossessedObjectClass; // 0x20
	FGuid ParentGuid; // 0x28
};

struct FTestTextObject {
	FText TestText; // 0x0
	FText TestTextExport; // 0x38
};

struct FQuestVariableNotificationDesc : FQuestVariable {
	FName ParamName; // 0x8
};

struct FEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FEventTeleportLocationCreated {
	FTeleportLocation TeleportLocation; // 0x0
};

struct FWeightedAnimationData {
	FStringAssetReference Animation; // 0x0
	float Weighting; // 0x10
};

struct FAIActorTimeout {
	AActor* AIActor; // 0x0
	float Timer; // 0x8
};

struct FEventPlayerRemovedFromCrew {
	APlayerState* UniqueId; // 0x10
};

struct FServiceStatusNotificationCollectionModel {
	TArray<FServiceStatusNotificationModel> Notifications; // 0x0
};

struct FRemoveStatusesData {
	int32_t ActorId; // 0x0
	TArray<FString> Statuses; // 0x8
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0x58
	EBoneControlSpace DisplaySpace; // 0x64
	bool bRelativeToRefPose; // 0x65
	FVector Translation; // 0x68
	FRotator Rotation; // 0x74
	FVector Scale; // 0x80
};

struct FAshenLordFireShroudParams {
	AStatusEffectOverlapZone* FireShroudZoneClass; // 0x0
	FVector FireShroudCollisionVolume; // 0x8
};

struct FEventTinySharkSpawned {
	FString TinySharkPartTag; // 0x0
	FGuid SpawnConfigId; // 0x10
};

struct FScoreReasonIcons {
	EScoreReason ReasonForScore; // 0x0
	FStringAssetReference ScoringIconAssetReference; // 0x8
	UTexture* ScoreScrollScoringIcon; // 0x18
};

struct FEventOverMemoryThreshold {
	FString EventID; // 0x0
	FDateTime ServerTimeUTC; // 0x10
	int32_t MemoryUsedPercentage; // 0x18
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x20
	char bCtrl : 1; // 0x20
	char bAlt : 1; // 0x20
	char bCmd : 1; // 0x20
};

struct FCommandData {
	FString Command; // 0x0
	FString Params; // 0x10
};

struct FStunnedActionStateParams {
	float StunDuration; // 0x0
	bool LockCameraMovement; // 0x4
	bool TriggerStunScreenSpaceVFX; // 0x5
	bool ApplyStunAnim; // 0x6
	EStunAnimationType StunAnimType; // 0x7
	bool InterruptMeleeAttacks; // 0x8
	EStunnedActionStateDurationType DurationType; // 0x9
	EStunnedActionStateItemWielding IsItemWieldingAllowed; // 0xa
	UDamagerType* DamagerType; // 0x10
};

struct FDeferralReasonPopUpNotificationInfo {
	FString DeferralReason; // 0x0
	UPopUpMessageDesc* PopUp; // 0x10
};

struct FKrakenTentacleBehaviourParams {
	UEnvQuery* InactiveSpawnQueryTemplate; // 0x0
	float ChanceOfCannonSideSpawn; // 0x8
	UEnvQuery* ActiveCannonSideSpawnQueryTemplate; // 0x10
	UEnvQuery* ActiveNonCannonSideSpawnQueryTemplate; // 0x18
	AKrakenAnimatedTentacle* TentacleClass; // 0x20
	float MinScale; // 0x28
	float MaxScale; // 0x2c
	float MinPlayRateScale; // 0x30
	float MaxPlayRateScale; // 0x34
	float PanicDespawnShipRangeRadius; // 0x38
	float PanicDespawnWatercraftRangeRadius; // 0x3c
	float PanicDespawnTentacleRadius; // 0x40
	float PanicDespawnAnimationPlayRateScale; // 0x44
	float PreDeathAnimationPlayRateScale; // 0x48
	TArray<FKrakenTentacleBehaviourActionChances> OnDamageActionChances; // 0x50
	FWeightedProbabilityRangeOfRanges TimeToSpendInInactiveState; // 0x60
	FWeightedProbabilityRangeOfRanges TimeToSpendInActiveState; // 0x90
};

struct FVoyageLocationParams {
	EVoyageLocationType Type; // 0x0
	FVoyageLocationFixedParams Fixed; // 0x4
	FVoyageLocationRandomParams Random; // 0x10
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0x58
	FBoneReference LookAtBone; // 0x64
	FVector LookAtLocation; // 0x70
	EAxisOption LookAtAxis; // 0x7c
	bool bUseLookUpAxis; // 0x7d
	EAxisOption LookUpAxis; // 0x7e
	float LookAtClamp; // 0x80
	EInterpolationBlend InterpolationType; // 0x84
	float InterpolationTime; // 0x88
	float InterpolationTriggerThreashold; // 0x8c
	bool bEnableDebug; // 0x90
};

struct FEventToComponentMapping {
	UWwiseEvent* PlayEvent; // 0x0
	UWwiseEvent* StopEvent; // 0x8
	TArray<UWwiseEmitterComponent*> WwiseEmitterComponents; // 0x10
};

struct FPetChestNamePetFeedbackEvent {
	bool bSuccess; // 0x0
};

struct FActorActionStateConstructionInfo : FActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FSwimAttackTargetShipImpulseData {
	UShipSize* ShipSize; // 0x0
	float PushImpulseForce; // 0x8
	FVector PushImpulseLocation; // 0xc
	float PushForceScalingFactorForeAndAftOfShipLowerBound; // 0x18
	float PushForceScalingFactorForeAndAftOfShipUpperBound; // 0x1c
	float RollImpulseForce; // 0x20
	FVector RollImpulseLocation; // 0x24
	float RollForceScalingFactorForeAndAftOfShipLowerBound; // 0x30
	float RollForceScalingFactorForeAndAftOfShipUpperBound; // 0x34
};

struct FWeightedQuestParams {
	float Weight; // 0x0
	FQuestParams Params; // 0x8
};

struct FCrewSessionMemberTelemetry {
	FString UserId; // 0x0
	FString StatusString; // 0x10
	bool IsSessionHost; // 0x20
};

struct FSeasonGoalPopupAsset {
	FName Category; // 0x0
	FStringAssetReference GlowIcon; // 0x8
	FStringAssetReference Icon; // 0x18
	FStringAssetReference ChatIcon; // 0x28
	FString ToastSfxEventName; // 0x38
	FString ToastEventName; // 0x48
	FString ToastSwitchName; // 0x58
	FString ToastSwitchValue; // 0x68
	float ToastHoldDuration; // 0x78
};

struct FGameplayCuePendingExecute {
	FGameplayTag GameplayCueTag; // 0x0
	FPredictionKey PredictionKey; // 0x8
	EGameplayCuePayloadType PayloadType; // 0x20
	UAbilitySystemComponent* OwningComponent; // 0x28
	FGameplayEffectSpecForRPC FromSpec; // 0x30
	FGameplayCueParameters CueParameters; // 0xc0
};

struct FEventCharacterBeginTeleport {
	AActor* Character; // 0x0
	bool PlayOnTeleportBeginSounds; // 0x8
	ETeleportNotificationSource TeleportNotificationSource; // 0x9
};

struct FTreasureChestSoldInAllianceNetworkEvent : FNetworkEventStruct {
	FName RewardId; // 0x10
	FStringAssetReference AllianceIcon; // 0x18
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x30
	TArray<FPoseLink> BlendPoses; // 0x48
	TArray<FInputBlendPose> LayerSetup; // 0x58
	TArray<float> BlendWeights; // 0x68
	bool bMeshSpaceRotationBlend; // 0x78
	ECurveBlendOption CurveBlendOption; // 0x79
};

struct FMysteriousNotesCompletionEventsModel {
	FName CompletionIdent; // 0x0
};

struct FProjectile {
	FVector Origin; // 0x0
	FVector Direction; // 0xc
	float MaxDistance; // 0x18
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FPlayerEntitlements : FEntitlements {
	EEntitlementStatus EntitlementsStatus; // 0x78
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FQuestDistributionParams {
	EQuestDistributionMethod Method; // 0x0
	FQuestDistributionAllAtOnceParams AllAtOnce; // 0x8
	FQuestDistributionPerChapterParams PerChapter; // 0x48
	FQuestDistributionFixedChaptersParams FixedChapters; // 0xb0
};

struct FBaseTelemetryFragment {
	FString DateLogged; // 0x0
	FString Sandbox; // 0x10
	FString FeatureConfigHash; // 0x20
	FString StampId; // 0x30
};

struct FUIPremiumStorePanelHighlightEvent {
	FString CurrentPage; // 0x0
	FString CurrentPanel; // 0x10
	FString SessionId; // 0x20
	float TimeOnPanel; // 0x30
};

struct FStorageContainerWeightedItemListFeatureGroup {
	FName Feature; // 0x0
	TArray<FStorageContainerWeightedItemListEntry> Entries; // 0x8
};

struct FFishingMiniGameData {
	UFishingMiniGameSetupDataAsset* SetupDataAsset; // 0x0
	UFishingMiniGameFishDataAsset* FishDataAsset; // 0x8
};

struct FTestUStructMapSerializationObject {
	TMap<FString, FTestSerializationObject> StructMap; // 0x0
};

struct FLightningStrikeFrequency {
	float MinStrength; // 0x0
	FWeightedProbabilityRangeOfRanges TimePerStrike; // 0x8
};

struct FChanceAndBlackboardKeyPair {
	FAIDataProviderFloatValue Chance; // 0x0
	FBlackboardKeySelector BlackboardKey; // 0x30
};

struct FTinySharkParams {
	ATinySharkExperience* TinySharkType; // 0x0
	float TargetRadius; // 0x8
	FVector SpawnOffset; // 0xc
	UClass* TinySharkAIType; // 0x18
	UAthenaAIControllerParamsDataAsset* TinySharkSkillset; // 0x38
	ULoadoutAsset* TinySharkLoadout; // 0x58
	UAIClassId* TinySharkClassID; // 0x78
	FWeightedProbabilityRangeOfRanges LifetimeTimeout; // 0x80
	float TrackedShipDistanceThreshold; // 0xb0
	float RepositionTime; // 0xb4
};

struct FTutorialStepDependencies {
	AAthenaPlayerController* Controller; // 0x0
};

struct FCompanyLevelClaim {
	uint32_t Level; // 0x0
	FString Sig; // 0x8
};

struct FEventPickupableObjectDropped {
	EPhysicalSurface SurfaceType; // 0x0
};

struct FPremiumStoreBundleSetView {
	FGuid Id; // 0x0
	FString PageTitle; // 0x10
	FString PageIcon; // 0x20
	FPremiumStoreBundleView Bundle; // 0x30
	FPremiumStoreItemsView Items; // 0x268
	FString TopBannerUrl; // 0x2a8
	FString BottomBannerUrl; // 0x2b8
};

struct FEventMarkNoteRead {
	APlayerController* PlayerController; // 0x0
	FGuid NoteId; // 0x8
};

struct FCutsceneResponseData {
	FName CutsceneName; // 0x0
};

struct FHealthChange {
	float From; // 0x0
	float To; // 0x4
	EHealthChangedReason Reason; // 0x8
	AActor* DirectInstigator; // 0x10
	AActor* RootInstigator; // 0x18
	FGuid IncidentId; // 0x20
	FVector_NetQuantize10 DirectInstigatorLocation; // 0x30
};

struct FPartCustomisation {
	FString Category; // 0x0
	FStringAssetReference Customisation; // 0x10
};

struct FPoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunction* Function; // 0x10
};

struct FClothingChestRandomFilter {
	UClothingCategory* Category; // 0x0
	float Likelihood; // 0x8
};

struct FCrewSessionCreatedTelemetryEvent : FCrewSessionBaseSessionTelemetryEvent {
	TArray<FCrewSessionQoSMeasurementTelemetry> QoSTelemetry; // 0x50
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x2b0
	FSlateBrush MenuBorderBrush; // 0x340
	FMargin MenuBorderPadding; // 0x3d0
};

struct FAchievementUpdatedEvent {
	FString AchievementId; // 0x0
	uint32_t Progress; // 0x10
	bool Successful; // 0x14
	FString Reason; // 0x18
	FString Platform; // 0x28
};

struct FEventPetNameTextboxFocusRequest {
	bool ShouldFocusPetNameTextbox; // 0x0
};

struct FPlayerStatusEffectDeactivatedTelemetryEvent {
	FGuid Id; // 0x0
	FName StatusName; // 0x10
};

struct FBuoyancySampleMovement {
	TArray<FBuoyancySampleMovementConfiguration> Configurations; // 0x0
	UCurveFloat* BuoyancyScalarCurve; // 0x50
	UCurveFloat* ProbeMovementCurve; // 0x58
};

struct FHullDamagePersistenceModel : FPersistenceModel {
	TArray<FHullDamageZoneInfo> DamageZones; // 0x0
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve ActorGuidIndexCurve; // 0x38
	TArray<FGuid> ActorGuids; // 0xa8
};

struct FForkedStep {
	int32_t Index; // 0x0
	FGuid Id; // 0x4
	UTaleQuestStep* Step; // 0x18
};

struct FNPCReactionVOEntry {
	UClass* ActorToReactTo; // 0x0
	FName VOGroupName; // 0x20
	FWeightedProbabilityRangeOfRanges VOCooldown; // 0x28
};

struct FClientEndEngagementMessageEvent {
	float ScreenDuration; // 0x0
	FString EndedScreen; // 0x8
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FPlayerEncounterStartTelemetryEvent {
	FGuid EncounterId; // 0x0
	FString EncounteredObjectId; // 0x10
	EEncounterType EncounterType; // 0x20
	EShipRegion ShipRegion; // 0x21
	float EncounterDistance; // 0x24
};

struct FFlameSpecificDataEntry {
	EFlameOfFateType FlameType; // 0x0
	FStringAssetReference TextureAsset; // 0x8
	FPlayerStat StatToFireWhenKilled; // 0x18
};

struct FMeshMemoryConstraintRegistrationFailedTelemetryEvent {
	FString MeshReference; // 0x0
};

struct FItemDiggingAnimationOverride {
	TArray<UClass*> Classes; // 0x0
	UItemDiggingAnimationConfig* DiggingAnimationConfig; // 0x10
};

struct FTavernBoardTakeMapSuccessEvent {
	FCappedCount TakeLimit; // 0x0
};

struct FKrakenAnimatedTentacleAnimationBoneTrack {
	TArray<FKrakenAnimatedTentacleAnimationBoneFrame> Frames; // 0x0
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FGetCannonsDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FCannonStateData> Data; // 0x8
};

struct FEmissaryVoteAddedEvent {
	FName Company; // 0x0
};

struct FApplyStatusEvent {
	FStatus StatusToApply; // 0x0
};

struct FRequestEquipClothingPiratePreviewEvent {
	FString ClothingDesc; // 0x0
};

struct FEventCharacterDiedDuringReviving {
	ACharacter* OwningCharacter; // 0x0
};

struct FHoleItemToSpawn {
	float Weight; // 0x0
	UItemDesc* ItemDesc; // 0x8
	TArray<EPhysicalSurface> RestrictToSurface; // 0x10
	FName FeatureFlag; // 0x20
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FPickupObjectActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr PickupableObject; // 0x30
};

struct FBountySpawnerNewWaveGroupSpawnedEvent {
	bool IsFinalWave; // 0x0
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x58
};

struct FLightningTargetSelector {
	TArray<FLightningTarget> Targets; // 0x0
};

struct FQuestVariableTextArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FVolcanoActorStateData : FActorStateData {
	EVolcanoState State; // 0x20
};

struct FEventReceiveExplosiveComponentState {
	UExplosiveComponent* Source; // 0x0
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x20
	FQuat Orientation; // 0x30
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
};

struct FStreamersResponse {
	TArray<FStreamingStatusModel> StreamingStatuses; // 0x0
};

struct FInventoryInteractionTakeRequestEvent {
	int32_t Index; // 0x0
};

struct FVotersByOption {
	int32_t VoteOption; // 0x0
	TArray<UObject*> Voters; // 0x8
};

struct FCaptainedSessionChangedEvent {
	bool IsCaptainedSession; // 0x0
};

struct FMovieSceneSequenceHierarchy {
	TMap<uint32_t, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<uint32_t, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FShipHullDamageParams {
	TArray<FShipHullDamageLevel> DamageLevels; // 0x0
};

struct FPetFedTelemetryEvent {
	FString FedWithItemId; // 0x0
	FString FeedingPlayerId; // 0x10
	FGuid FeedingInteractionId; // 0x20
};

struct FGameplayEventExclusionInfo {
	UGameEventType* Type; // 0x0
	float ExclusionRadius; // 0x8
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x30
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0x58
	FVector EffectorLocation; // 0x64
	FVector JointTargetLocation; // 0x70
	FVector2D StretchLimits; // 0x7c
	FName EffectorSpaceBoneName; // 0x84
	char bTakeRotationFromEffectorSpace : 1; // 0x8c
	char bMaintainEffectorRelRot : 1; // 0x8c
	char bAllowStretching : 1; // 0x8c
	EBoneControlSpace EffectorLocationSpace; // 0x90
	EBoneControlSpace JointTargetLocationSpace; // 0x91
	FName JointTargetSpaceBoneName; // 0x94
};

struct FClientInputBlockedTelemetryEvent {
	FString BlockedKey; // 0x0
};

struct FServerMigrationInstanceEventBase {
	FGuid ServerId; // 0x0
	FGuid MigrationId; // 0x10
};

struct FCookStartTelemetryEvent {
	FString ItemName; // 0x0
	ECookingState CookState; // 0x10
	FVector Location; // 0x14
	FGuid CookId; // 0x20
};

struct FPlayersSpawningInTavern {
	APlayerState* PlayerState; // 0x0
};

struct FLevelCancelRequestedTelemetryEvent : FStreamingTelemetryBaseEvent {
	float TimeCancelRequested; // 0x30
};

struct FSeagullManagerFormationOffset {
	TArray<FVector> Offsets; // 0x0
};

struct FEventPlayerTextChatMessageUINotification : FEventUINotification {
	FPlayerTextChatMessage PlayerTextChatMessage; // 0x0
};

struct FCompanyProgressIcon {
	FStringAssetReference Icon; // 0x0
};

struct FEventScreenSizeInfo {
	int32_t ScreenWidth; // 0x0
	int32_t ScreenHeight; // 0x4
	int32_t WindowWidth; // 0x8
	int32_t WindowHeight; // 0xc
	int32_t AutoDetectedMaxVerticalResolution; // 0x10
	int32_t AutoDetectedMachineSpec; // 0x14
	bool IsFullScreen; // 0x18
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FEventCosmeticItemSpawned {
	AActor* Owner; // 0x0
	UCosmeticItemAnimationSetDataAsset* CosmeticData; // 0x8
};

struct FRadialInventoryCenterUpdated : FRadialInventoryEvent {
	float X; // 0x4
	float Y; // 0x8
};

struct FUpdateInteractionEvent {
	FInteractionDefinition Definition; // 0x0
};

struct FPoolableCollectionMapConfigurationEntry {
	UClass* Type; // 0x0
	int32_t Size; // 0x20
};

struct FWaterModifierDrowningParams {
	FBlendableDrowningParams BlendableDrowningParams; // 0x0
};

struct FQuestVariableSharkPawn : FQuestVariable {
	FName ParamName; // 0x8
};

struct FBountyQuestDesc : FQuestDesc {
	UAIBountySpawner* Spawner; // 0x28
	UBountyMapLayout* Layout; // 0x30
	FTreasureMapTextDesc Location; // 0x38
	TArray<FTreasureMapTextDesc> Descriptions; // 0x80
	TArray<FBountyMapTargetDesc> Targets; // 0x90
	TArray<UItemDesc*> BountyRewards; // 0xa0
	TArray<UItemSpawnData*> BountyRewardsSpawnData; // 0xb0
	ALandmark* Landmark; // 0xc0
	float IslandRotation; // 0xc8
	UTexture* MapInventoryTexture; // 0xd0
	FAIBountySpawnerParams SpawnerGeneratedData; // 0xf0
	UTreasureMapItemDesc* OverrideTreasureMapItemDesc; // 0x1b8
};

struct FAICustomNameTitleMapping {
	UAIClassId* AIClassId; // 0x0
	FText Title; // 0x8
};

struct FGetShipwrecksDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FShipwreckStateData> Data; // 0x8
};

struct FAthenaAnimationWheelArmOverlayAnimData {
	UBlendSpace1D* ArmLower; // 0x0
	UBlendSpace1D* ArmRaise; // 0x8
};

struct FActorActivationRequested {
	bool Reset; // 0x0
	float ActivationDuration; // 0x4
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

struct FPurchasePremiumCurrencyRequestEvent {
	FString Id; // 0x0
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FPremiumStoreBundleOffer : FShopOffer {
	FString Saving; // 0x1e0
	FString AccentUrl; // 0x1f0
	FPremiumStoreTimeLimited TimeLimited; // 0x200
	FString RealMoneyPrice; // 0x208
};

struct FHideoutRevealedEvent {
	FText HideoutName; // 0x0
};

struct FTunnelOfTheDamnedInitializedTelemetryEvent {
	FString RequestedMatchmakingPlayModeTag; // 0x0
};

struct FEventPlayerUseItemStart {
	UNotificationInputId* InputID; // 0x0
	AActor* UsedItem; // 0x8
};

struct FEmissaryLevelChanged {
	int32_t NewLevel; // 0x0
	FGuid AssociatedCrew; // 0x4
	FName CompanyName; // 0x14
};

struct FItemSpawnTelemetryEvent {
	FGuid ItemId; // 0x0
	FName SpawnedClass; // 0x10
	ESpawnedItemSource Source; // 0x18
	FString SourceId; // 0x20
	FVector SpawnLocation; // 0x30
};

struct FMerchantContractDeliveryRequest {
	int32_t Id; // 0x0
	FMerchantContractItemDesc ItemDesc; // 0x8
	int32_t NumToAllocate; // 0x30
	int32_t NumToCollect; // 0x34
	int32_t NumToDeliver; // 0x38
};

struct FVoyageQuestsBegun {
	int32_t QuestCount; // 0x0
};

struct FPlayerRecieveFlameTelemetryEvent {
	FString LightSourceId; // 0x0
	FString LightSourceType; // 0x10
	FString FlameColour; // 0x20
};

struct FCannonStateData : FActorStateData {
	FString LoadedItemId; // 0x20
};

struct FEventEncounterEnd : FEventEncounterBase {
	FGuid EncounterId; // 0x0
	AActor* EncounterActor; // 0x10
	EEncounterType EncounterType; // 0x18
	float EncounterRadiusSquared; // 0x1c
};

struct FStructRedirect {
	FString OldStructName; // 0x0
	FString NewStructName; // 0x10
};

struct FEventShopOffersEvent {
	TArray<FShopOffer> Offers; // 0x0
	TArray<FString> Categories; // 0x10
	TArray<FShopOffer> GildedVoyages; // 0x20
};

struct FFirstInteractableTelemetryEvent {
	float StartTime; // 0x0
	float FirstSpinnerShownTime; // 0x4
	float StartEntryLevelLoadTime; // 0x8
	float StartLegalSplashTime; // 0xc
	float EndLegalSplashTime; // 0x10
	float FirstInteractableTime; // 0x14
};

struct FPlayerHideoutInfo {
	APlayerState* PlayerState; // 0x0
	TArray<ASpawnLocation*> ExitPoints; // 0x8
};

struct FClientConditionsCompleteNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x48
	FSlateBrush BackgroundImageSelected; // 0x78
	FSlateBrush BackgroundImageComposing; // 0x108
	FSlateBrush CaretImage; // 0x198
};

struct FSetTimeData {
	int32_t Hours; // 0x0
};

struct FPlayerGameStartTelemetryEvent {
	FGuid TitleSession; // 0x0
	bool IsMigration; // 0x10
};

struct FVoyageMembershipInfo {
	FText Title; // 0x0
	FGuid Id; // 0x38
	TArray<FQuestInfo> QuestStatus; // 0x48
	UCompany* Company; // 0x58
	bool IsEmergent; // 0x60
	bool IsTale; // 0x61
	EEmergentVoyageSource EmergentSource; // 0x62
	FViewVoyageBanners ViewVoyageBanners; // 0x63
	bool DoNotNotifyParticipantsOnVoyageComplete; // 0x65
	int32_t Rank; // 0x68
	TArray<FPlayerStat> VoyageCompletionStats; // 0x70
	TArray<FPlayerStat> ReapersMarkCompletionStats; // 0x80
};

struct FAggressiveGhostShipDifficultyTargetSelection {
	float Weight; // 0x0
	EAggressiveGhostShipTarget Target; // 0x4
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x38
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FDockableCutsceneActionStateParams : FControlObjectActionStateParams {
	FLookAtOffsetParams LookAtOffsetParams; // 0x18
};

struct FBootFlowSessionDetailsEvent {
	ESessionVisibility SessionVisibility; // 0x0
	ECrewSessionType SessionType; // 0x1
	EPlayMode SelectedPlayMode; // 0x2
	bool CrossInput; // 0x3
};

struct FStatBatchMessage {
	FPirateIdentity PirateIdentity; // 0x0
	EPlayMode Playmode; // 0x78
	EPlayModeVariant PlayModeVariant; // 0x79
	TMap<uint32_t, FStatBatchMessageValues> StatIds; // 0x80
};

struct FSingleStickMappingUserSettingsInteger {
	FName SettingName; // 0x0
	int32_t Value; // 0x8
};

struct FWeightedItemDescSpawner {
	ESpawnedItemSource SpawnSource; // 0x0
	TArray<FSpawnerData> SpawnList; // 0x8
	TArray<TWeakObjectPtr<AActor>> SpawnedItems; // 0x18
};

struct FRequestArmoryItemEntitlementsEvent {
	FString ItemCategory; // 0x0
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FInviteFriendsEvent {
	bool IsFromCreatorMode; // 0x0
};

struct FRiddleTextPhrasebookEntry {
	FName Id; // 0x0
	URiddleTextPhraseDataAsset* Phrase; // 0x8
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FIPGTestSimpleType {
	FName StringTest; // 0x0
	int32_t IntTest; // 0x8
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FClueSiteLootRestriction {
	UClueSiteType* SiteType; // 0x0
	int32_t LootMax; // 0x8
};

struct FSeasonProgressionUIEventTypeTelemetryFragment {
	FString EventName; // 0x0
	int32_t NumReceivedEvents; // 0x10
};

struct FQuestVariableTransform : FQuestVariable {
	FName SocketName; // 0x10
};

struct FRiggingSystemPulleyParams {
	FSocketId Anchor; // 0x0
	float OffsetFromAnchor; // 0x20
	FPulleyVisualParams Visuals; // 0x28
	FRiggingSystemPulleyAttachmentParams AttachmentRope; // 0x38
};

struct FMysteriousNotesCompletionEventsModelEntry {
	FName CompletionIdent; // 0x0
};

struct FEventPlayerStartedSwimming {
	AActor* Player; // 0x0
};

struct FOfferPurchasedEvent {
	FShopOffer Purchase; // 0x0
	FName NPCName; // 0x1e0
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FItemLoadoutItemCategoryRemovedEvent {
	UItemCategory* ItemCategory; // 0x0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FPlayerChangedLoadoutTelemetryEvent {
	FString EquippedItemType; // 0x0
	FString EquippedItemName; // 0x10
};

struct FPeriodicResponse {
	FFloatRange PeriodRange; // 0x0
	UObject* Owner; // 0x10
};

struct FAIShipEncounterRevealNetEvent : FBoxedRpc {
	int32_t BattleIdx; // 0x10
	int32_t SkellyCrewIdx; // 0x14
	ECannonballIconType CannonballIconType; // 0x18
	ESkellyFormIconType SkellyFormIconType; // 0x19
};

struct FAthenaAnimationFishing {
	bool AnimationOverride; // 0x0
	AActor* FishingRodActor; // 0x320
	AActor* FishingFloat; // 0x328
	UAthenaAnimationInstance* OwningAnimationInstance; // 0x330
};

struct FProjectileShotParams {
	int32_t Seed; // 0x0
	float ProjectileDistributionMaxAngle; // 0x4
	int32_t NumberOfProjectiles; // 0x8
	float ProjectileMaximumRange; // 0xc
	float ProjectileDamage; // 0x10
	float ProjectileDamageMultiplierAtMaximumRange; // 0x14
};

struct FAimSensitivityRuntimeDataEntry {
	FAimSensitivitySettingParams SettingParams; // 0x0
	float CurrentAimSensitivity; // 0xc
};

struct FSpikeStatEntry {
	TArray<FFuncStatEntry> WorstRPCs; // 0x0
	uint32_t TotalRPCCount; // 0x10
	char SpikeDetected; // 0x14
};

struct FCompanySpecificBootyReward {
	UCompany* CompanyId; // 0x0
	FRewardId RewardId; // 0x8
	bool RequirePirateLegend; // 0x10
};

struct FIndividualMeshScoringToRemove {
	FName MeshName; // 0x0
	FGuid RegistrationToken; // 0x8
};

struct FPhraseData {
	FText TextToBroadcast; // 0x0
	bool RequiresWieldedItemObjectNameAsArgument; // 0x38
	bool WieldedItemObjectNameIsNotLocalised; // 0x39
};

struct FLightingControllerLightingParams {
	float SunYaw; // 0x0
	float SunElevation; // 0x4
	float UnderworldSunElevation; // 0x8
	float MinSunAngle; // 0xc
	float UnderworldZThreshold; // 0x10
	float HideoutZThreshold; // 0x14
	float UnderwaterInsideShipBrightnessInBoatSpace; // 0x18
	float UnderwaterInsideShipBrightnessOutsideBoatSpace; // 0x1c
	float UnderwaterBrightnessInBoatSpace; // 0x20
	float UnderwaterDepthDarkenStart; // 0x24
	float UnderwaterDepthDarkenRange; // 0x28
	float UnderwaterDepthDarkenMin; // 0x2c
	float UnderwaterMurkDensity; // 0x30
	float SecondaryLPVCascadeOcclusionIntensityScale; // 0x34
	int32_t LPVPropagationSteps; // 0x38
	int32_t DefaultLightingSet; // 0x3c
	bool EnableGodRays; // 0x40
};

struct FMaterialRelevance {
	char bOpaque : 1; // 0x0
	char bMasked : 1; // 0x0
	char bDistortion : 1; // 0x0
	char bSeparateTranslucency : 1; // 0x0
	char bNormalTranslucency : 1; // 0x0
	char bDisableDepthTest : 1; // 0x0
	char bOutputsVelocityInBasePass : 1; // 0x0
	char bUsesGlobalDistanceField : 1; // 0x0
	uint16_t ShadingModelMask; // 0x4
	char bOITTranslucencyRelevance : 1; // 0x8
	char bOITAfterTranslucencyRelevance : 1; // 0x8
	char bLowResTranslucencyRelevance : 1; // 0x8
	char bLowResCloudsRelevance : 1; // 0x8
	char bMaskPassRelevance : 1; // 0x8
	char bTranslucentBeforeTranslucency : 1; // 0x8
	char bTranslucentBeforeVolumeFog : 1; // 0x8
	char bTranslucentWithDepthWrite : 1; // 0x8
};

struct FColorTextureSwitchSeedEntry {
	FName ReferenceName; // 0x0
	FLinearColor Color; // 0x8
};

struct FRequestArmoryItemLoadoutEvent {
	TArray<FString> Categories; // 0x0
};

struct FAIBountySpawnerArchiveWaveGroupEntry {
	int32_t NumNonTargetAIKills; // 0x0
	int32_t NumTargetAIKills; // 0x4
	TArray<FAIBountySpawnerArchiveWaveEntry> WaveEntries; // 0x8
};

struct FAthenaAnimationRowboatAnimationsThirdPerson {
	UAnimSequence* SitDown; // 0x0
	UAnimSequence* Stand; // 0x8
	UAnimSequence* Idle; // 0x10
	UBlendSpace1D* Row; // 0x18
	UBlendSpace1D* Recover; // 0x20
	UBlendSpace1D* IntoRow; // 0x28
	UBlendSpace1D* IntoRowBrake; // 0x30
	UBlendSpace1D* BrakeRow; // 0x38
	UBlendSpace1D* BrakeRecover; // 0x40
	UBlendSpace1D* BrakeIdle; // 0x48
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FCoordinatedKrakenHeadAction {
	UKrakenHeadState* State; // 0x0
	float TimeOffset; // 0x8
};

struct FBuildPromotionBlueprintSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
};

struct FDrawDebugItemBox {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	FVector CentrePos; // 0xc
	FVector Box; // 0x18
	FQuat Rotation; // 0x30
	FColor Colour; // 0x40
};

struct FStaggerModifiers {
	float StaggerSpeedModifierX; // 0x0
	float StaggerSpeedModifierY; // 0x4
	float StaggerAmplitudeModifierX; // 0x8
	float StaggerAmplitudeModifierY; // 0xc
};

struct FShipHullDamageTypeEntry {
	EShipHullDamageType DamageType; // 0x0
	FShipHullLandscapeDamageEntry LandscapeDamageParams; // 0x8
	FShipHullRammingSpurDamageEntry RammingSpurDamageParams; // 0x38
};

struct FUseItemNoParamsOnServerRpc : FUseItemOnServerRpc {
	AWieldableItem* Item; // 0x10
};

struct FOpenPremiumStoreFrontEvent {
	FShopDefinition ShopDefinition; // 0x0
};

struct FAchievementSinkAnotherCrewsShip {
	float CrewRange; // 0x0
};

struct FWeightedGoldReward {
	FRewardId RewardId; // 0x0
	float Weight; // 0x8
};

struct FClientMarkerRepresentation {
	UBaseWorldMarker* MarkerPtr; // 0x0
	UObject* MarkerVisualObjectPtr; // 0x8
};

struct FPartialClientHitRegProjectileSnapshotData {
	AActor* SendingPlayer; // 0x0
	TArray<FHitRegSnapshotProjectileRecord> AttackRecords; // 0x8
};

struct FAthenaAnimationWheelTurnsAnimData {
	UAnimSequence* Turn; // 0x0
	UAnimSequence* TurnFast; // 0x8
	UAnimSequence* TurnFast180; // 0x10
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x18
	char bFireEventsWhenForwards : 1; // 0x38
	char bFireEventsWhenBackwards : 1; // 0x38
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve IntegerCurve; // 0x38
};

struct FTinySharkShipSpawnData {
	UShipSize* ShipSize; // 0x0
	FWeightedProbabilityRangeOfRanges Timer; // 0x8
	TArray<UAthenaAIControllerParamsDataAsset*> ControllerParams; // 0x38
	FWeightedProbabilityRange ControllerParamsToUse; // 0x48
};

struct FShipCreatureManagerCreatureInstanceModifierCurves {
	UCurveFloat* SpeedModifierCurve; // 0x0
	UCurveFloat* RollCurve; // 0x8
	UCurveVector* OffsetCurve; // 0x10
};

struct FContestCrewPositionTelemetryFragmentInput : FTelemetryFragmentInput {
	FGuid CrewId; // 0x0
};

struct FPremiumStoreLandingPageTab {
	FGuid Id; // 0x0
	FString DisplayName; // 0x10
	TArray<FPremiumStoreLandingPageItem> Children; // 0x20
	bool RealMoneyOnly; // 0x30
};

struct FHttpClientComponentRequestEvent {
	FString Uri; // 0x0
	FString Body; // 0x10
	bool ShouldEncrypt; // 0x20
	bool ShouldAuthorize; // 0x21
	FString Method; // 0x28
	TMap<FString, FString> Headers; // 0x38
	FString Id; // 0x88
};

struct FEventKilledCharacter {
	AActor* KilledCharacter; // 0x0
};

struct FCompanyRankData {
	TArray<FCompanyRankGradeData> RankGradeData; // 0x0
};

struct FLobbyCrewMember {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
};

struct FAtmosphericPressureZoneParameters {
	float Radius; // 0x0
	float TargetPressure; // 0x4
	float PushForce; // 0x8
	float TwistForce; // 0xc
	float Weight; // 0x10
};

struct FEventJustBeenFed {
	AActor* FedBy; // 0x0
};

struct FSplineTransitionLadderActionStateParams : FTransitionLadderActionStateParams {
	float DockTime; // 0x0
	float DelayAfterDockingTime; // 0x4
	float ForcedFieldOfView; // 0x8
	bool ForceStash; // 0xc
};

struct FWielderInfo {
	AAthenaPlayerCharacter* Character; // 0x0
	AAthenaPlayerController* Controller; // 0x8
	AAthenaPlayerState* State; // 0x10
};

struct FTavernBoardCreateMapRequestEvent {
	FITavernBoardMap Map; // 0x0
};

struct FExpireCustomWreckEvent {
	FGuid CrewOwner; // 0x0
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FFallingIntoWaterEvent {
	float FallingSpeed; // 0x0
};

struct FNPCBeckonGestureEntry {
	FString BeckonGesture; // 0x0
	FStringAssetReference BeckonGestureDataAsset; // 0x10
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0xa8
	char ActiveEnumValue; // 0xb8
};

struct FCoordinatedKrakenExplosionEvent {
	int32_t ExplosionPointIndex; // 0x0
	float TimeOffset; // 0x4
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	float DesiredWeight; // 0x8
	float Weight; // 0xc
	float BlendTime; // 0x10
	float DefaultBlendTimeMultiplier; // 0x14
	TArray<int32_t> NextSections; // 0x18
	TArray<int32_t> PrevSections; // 0x28
	bool bPlaying; // 0x38
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x68
	float Position; // 0x78
	float PlayRate; // 0x7c
};

struct FQuestSelectionParams {
	EQuestPoolSelectionMethod PoolSelectionMethod; // 0x0
	EQuestLocationSelectionMethod LocationSelectionMethod; // 0x1
	bool UseChapterBasedVoyageHistory; // 0x2
	int32_t MaxNumberOfPoolRetries; // 0x4
};

struct FRiddleTextRenderer {
	float MaskSizeScale; // 0x0
	UFont* Font; // 0x8
	float FontScale; // 0x10
	float FontMaxScale; // 0x14
	float FontScaleChange; // 0x18
	float FontLineSpacingScale; // 0x1c
	TArray<FString> DroppedTextCharacters; // 0x20
	bool VerticallyCentredText; // 0x30
	bool HorizontallyCentredText; // 0x31
	float MaxTextHeightRatioForRiddleText; // 0x34
	float MarginSize; // 0x38
	FVector2D OriginRatio; // 0x3c
	float StepSpacingRatio; // 0x44
	float StepSpacingWithDroppedTailInLastLineRatio; // 0x48
	float MaskOffsetRatio; // 0x4c
	FVector2D MaskBorderRatio; // 0x50
};

struct FEventCustomizableActorChanged {
	AActor* CustomizableActor; // 0x0
	bool StripOverrideMaterials; // 0x8
};

struct FStreamersRequest {
	TArray<FStreamingStatusModel> StreamingStatuses; // 0x0
};

struct FItemSnapshotSwapInstigatedEvent {
	FGuid SnapshotID; // 0x0
	TScriptInterface<Class> NewInstagator; // 0x10
	AActor* WorldContextObject; // 0x20
};

struct FEventEmoteStarted {
	FEmoteData EmoteData; // 0x0
};

struct FDominanceGroupName {
	EDominanceGroup Type; // 0x0
	FName Name; // 0x4
};

struct FVolcanoTarget {
	EVolcanoTargetType Type; // 0x0
	EVolcanoTargetHitType HitType; // 0x1
	AActor* Target; // 0x8
	int32_t NumExtraShots; // 0x10
};

struct FTiledCloudProperties {
	FVector2D TilePosition; // 0x0
	int32_t CloudTypeIndex; // 0x8
	float RelativeRadius; // 0xc
	float Scale; // 0x10
	float PressureThreshold; // 0x14
	float RotationYaw; // 0x18
	float OverlapTolerance; // 0x1c
};

struct FBountyQuestWaveCompletedTelemetryEvent {
	FString LandmarkName; // 0x0
	int32_t BountyWaveIndex; // 0x10
	int32_t TotalBountyWaves; // 0x14
};

struct FLevelLoadCompletedCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FEventPlayerDockToObjectEnd {
	TScriptInterface<Class> ObjectBeingUsed; // 0x0
	bool CanLookAtBeDisabledWhenDockedToObject; // 0x10
};

struct FOpenableItemMaterialAnimationReactionComponentAnimationNameAndSfxCueSet {
	FName Open; // 0x0
	FName OpeningFirstTime; // 0x8
	UWwiseEvent* OpeningFirstTimeSfx; // 0x10
	FName Opening; // 0x18
	UWwiseEvent* OpeningSfx; // 0x20
	FName Closing; // 0x28
	UWwiseEvent* ClosingSfx; // 0x30
	FName Closed; // 0x38
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FTavernBoardTakeMapRequestEvent {
	FITavernBoardMap Map; // 0x0
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x30
	FPoseLink Additive; // 0x48
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x64
};

struct FAthenaAnimationLocomotionTurningAnimData {
	UAnimSequence* Turn90; // 0x0
};

struct FActiveHitRegSnapshot {
	AActor* AttackingActor; // 0x0
	AActor* SnapshotActor; // 0x8
	UHitRegSnapshotComponent* SnapshotComponent; // 0x10
};

struct FGenericPartDesc {
	UStaticMesh* Mesh; // 0x0
};

struct FBountyQuestTargetDefeatedNetworkEvent : FNetworkEventStruct {
	FText TargetName; // 0x10
	UPopUpMessageDesc* PopUpDesc; // 0x48
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FBucketContentsInfo {
	EThrowableLiquidType ThrowableLiquidType; // 0x0
	ALiquidProjectile* ProjectileClassToSpawn; // 0x8
	ALiquidProjectile* ProjectileClassToSpawnAtWielder; // 0x10
	UWwiseEvent* ThrowSfx; // 0x18
	UObject* ThrowVfxFirstPerson; // 0x20
	UObject* ThrowVfxThirdPerson; // 0x28
	UObject* DrenchWielderVfxThirdPerson; // 0x30
	UObject* BucketContentsParticleSystemFirstPerson; // 0x38
	UObject* BucketContentsParticleSystemThirdPerson; // 0x40
	FName SwitchState; // 0x48
	float LiquidLevel; // 0x50
};

struct FNPCDialogFormattedHeaderByConditionText {
	FText Text; // 0x0
	FString ParameterName; // 0x38
	TArray<UNPCDialogConditional*> Conditions; // 0x48
};

struct FCapstanParams {
	float MaxVelocityPerPlayer; // 0x0
	float MaxFreeLoweringVelocity; // 0x4
	float MaxError; // 0x8
	float CorrectiveForceMultiplier; // 0xc
	float PlayerAnimationOnCapstanMultiplier; // 0x10
};

struct FEventWithinRainZoneChanged {
	bool IsWithinRainZone; // 0x0
};

struct FCrewBaseTelemetryFragment {
	FGuid CrewId; // 0x0
	FGuid CrewSessionId; // 0x10
	FGuid AllianceId; // 0x20
	int32_t CurrentCrewCount; // 0x30
	FString SessionType; // 0x38
	FString CrewType; // 0x48
};

struct FStartInteractionEvent {
	FInteractionDefinition Definition; // 0x0
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FPlayerChangedLoadoutEvent {
	FString EquippedType; // 0x0
	FString EquippedName; // 0x10
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FContestCrewManagementMemberData {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
	EMuteState Muted; // 0x20
	FString CrewIcon; // 0x28
};

struct FMaterialInformationAudioData : FTableRowBase {
	FName SurfaceSwitch; // 0x0
	FWwiseAudioAcousticSurfaceParams Acoustics; // 0x8
};

struct FRewardRuntimeDefinition {
	UPopUpMessageDesc* PopUp; // 0x8
	TArray<UEntitlementDesc*> PrerequisiteEntitlements; // 0x20
};

struct FInvertRadialYInputEvent {
	bool InvertRadialYInputEvent; // 0x0
};

struct FQuestVariableClueSite : FQuestVariable {
	FName ParamName; // 0x8
};

struct FAthenaAnimationWaterPumpParams {
	float WaterPumpHandlePosition; // 0x0
	float WaterPumpHandlePreviousPosition; // 0x4
	bool WaterPumpHandleInMotion; // 0x8
};

struct FEventUserGameSettingsRadialMappings {
	FName RadialSlotIndex0SelectedKeyboard; // 0x0
	FName RadialSlotIndex1SelectedKeyboard; // 0x8
	FName RadialSlotIndex2SelectedKeyboard; // 0x10
	FName RadialSlotIndex3SelectedKeyboard; // 0x18
	FName RadialSlotIndex4SelectedKeyboard; // 0x20
	FName RadialSlotIndex5SelectedKeyboard; // 0x28
	FName RadialSlotIndex6SelectedKeyboard; // 0x30
	FName RadialSlotIndex7SelectedKeyboard; // 0x38
	FName RadialSlotClockwise; // 0x40
	FName RadialSlotCounterClockwise; // 0x48
};

struct FCustomWreckEntry {
	FGuid OwningCrewID; // 0x0
	TWeakObjectPtr<ACustomShipwreck> WreckObject; // 0x10
	bool WreckExpired; // 0x18
};

struct FEmissaryMaxLevelReachedNetworkEvent : FNetworkEventStruct {
	UDataAsset* PopUpDesc; // 0x10
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FFrameDurationDataTelemetryFragment {
	uint32_t Num02ms; // 0x0
	uint32_t Num04ms; // 0x4
	uint32_t Num06ms; // 0x8
	uint32_t Num08ms; // 0xc
	uint32_t Num10ms; // 0x10
	uint32_t Num12ms; // 0x14
	uint32_t Num14ms; // 0x18
	uint32_t Num16ms; // 0x1c
	uint32_t Num18ms; // 0x20
	uint32_t Num20ms; // 0x24
	uint32_t Num22ms; // 0x28
	uint32_t Num24ms; // 0x2c
	uint32_t Num26ms; // 0x30
	uint32_t Num28ms; // 0x34
	uint32_t Num30ms; // 0x38
	uint32_t Num32ms; // 0x3c
	uint32_t Num34ms; // 0x40
	uint32_t Num36ms; // 0x44
	uint32_t Num38ms; // 0x48
	uint32_t Num40ms; // 0x4c
	uint32_t Num42ms; // 0x50
	uint32_t Num44ms; // 0x54
	uint32_t Num46ms; // 0x58
	uint32_t Num48ms; // 0x5c
	uint32_t Num50ms; // 0x60
	uint32_t Num52ms; // 0x64
	uint32_t Num54ms; // 0x68
	uint32_t Num56ms; // 0x6c
	uint32_t Num58ms; // 0x70
	uint32_t Num60ms; // 0x74
	uint32_t Num62ms; // 0x78
	uint32_t Num64ms; // 0x7c
	uint32_t Num66ms; // 0x80
	uint32_t NumOver66ms; // 0x84
	float Min; // 0x88
	float Max; // 0x8c
	float Average; // 0x90
};

struct FQuestBaseTelemetryFragment {
	FGuid QuestId; // 0x0
	FGuid VoyageId; // 0x10
};

struct FAggressiveGhostShipNameBucket {
	FName Key; // 0x0
	TArray<FText> Names; // 0x8
};

struct FAthenaAnimationHarpoonLauncherAnimData {
	TArray<UBlendSpace1D*> Idle; // 0x0
	UBlendSpace1D* FireInto; // 0x10
	UBlendSpace1D* FireOutOf; // 0x18
	UBlendSpace1D* FireAction; // 0x20
};

struct FPlayerEmoteTelemetryEvent {
	FString EmoteName; // 0x0
	uint32_t EmoteDuration; // 0x10
};

struct FAthenaAnimationFire {
	float MinimumDistanceToStartCoughing; // 0x0
	char Coughing : 1; // 0x4
};

struct FPlayerBucketEmptyTelemetryEvent {
	FGuid ScoopID; // 0x0
	FString EmptyBucketTo; // 0x10
};

struct FSqueakyWheelEnabledEvent {
	bool SqueakyWheelEnabled; // 0x0
};

struct FEventDockedToObject {
	EControllableObjectType ObjectType; // 0x0
};

struct FPersistentUserGameSettings {
	bool InvertYAxisGamepad; // 0x0
	bool InvertYAxisMouse; // 0x1
	bool InvertXAxisGamepad; // 0x2
	bool InvertXAxisMouse; // 0x3
	bool UseVirtualKeyboard; // 0x4
	bool UsePlatformForUnattenuatedChat; // 0x5
	bool UsePushToTalk; // 0x6
	bool UseProximityChatDirection; // 0x7
	float ForceFeedbackIntensity; // 0x8
	float FieldOfView; // 0xc
	float MouseSensitivity; // 0x10
	float MasterVolume; // 0x14
	float SfxVolume; // 0x18
	float MusicVolume; // 0x1c
	float ShantyVolume; // 0x20
	float CrewChatVolume; // 0x24
	float NonCrewChatVolume; // 0x28
	float Brightness; // 0x2c
	int32_t VSync; // 0x30
	int32_t MaxFPS; // 0x34
	bool Fullscreen; // 0x38
	int32_t MaxVerticalResolution; // 0x3c
	int32_t DefaultDetail; // 0x40
	int32_t ShadowDetail; // 0x44
	int32_t ModelDetail; // 0x48
	int32_t TextureDetail; // 0x4c
	int32_t WaterDetail; // 0x50
	int32_t AnimationQuality; // 0x54
	int32_t MMCThresholdScale; // 0x58
	int32_t ParticleEmitterQuality; // 0x5c
	int32_t ParticleResolutionQuality; // 0x60
	float ResolutionScaling; // 0x64
	int32_t LightingDetail; // 0x68
	int32_t BackBufferCount; // 0x6c
	float ControllerSensitivity; // 0x70
	float ControllerDeadzone; // 0x74
	float ControllerNonLinearity; // 0x78
	float MouseSensitivity_Blunderbuss; // 0x7c
	float ControllerSensitivity_Blunderbuss; // 0x80
	float MouseSensitivity_Flintlock; // 0x84
	float ControllerSensitivity_Flintlock; // 0x88
	float MouseSensitivity_EyeOfReach; // 0x8c
	float ControllerSensitivity_EyeOfReach; // 0x90
	float MouseSensitivity_Spyglass; // 0x94
	float ControllerSensitivity_Spyglass; // 0x98
	float MouseSensitivity_TridentOfDarkTides; // 0x9c
	float ControllerSensitivity_TridentOfDarkTides; // 0xa0
	TArray<FKeyBinding> ActionBindings; // 0xa8
	TArray<FKeyBinding> AxisBindings; // 0xb8
	int32_t ShowPerformanceCounters; // 0xc8
	int32_t NumberOfLogins; // 0xcc
	bool OptedInToMarketing; // 0xd0
	int32_t KeyboardLayout; // 0xd4
	int32_t GameLanguage; // 0xd8
	bool ShowPlayerTalkingIndicator; // 0xdc
	bool MuteCopyrightedAudio; // 0xdd
	bool UseAltMapMarkTexture; // 0xde
	bool VariableRefreshRate; // 0xdf
	float HighDynamicRangeCalib; // 0xe0
	bool HDR; // 0xe4
	int32_t CVDMode; // 0xe8
	float CVDStrength; // 0xec
	float ColorSaturationScale; // 0xf0
	float NotificationScale; // 0xf4
	bool Joinable; // 0xf8
	bool ShowOwnCrewNameplates; // 0xf9
	bool ShowOtherCrewNameplates; // 0xfa
	bool ShowOwnCrewStatusTags; // 0xfb
	bool ScrambleGamertags; // 0xfc
	bool ShowTallTalesOnMapTable; // 0xfd
	bool AutoVoteOnProposedVoyage; // 0xfe
	bool NotificationsInMenus; // 0xff
	bool ToggleRadialMenu; // 0x100
	bool StickyRadialItems; // 0x101
	bool EnableMovementDuringRadial; // 0x102
	bool EnableLookWhenControllingObject; // 0x103
	bool EnableAutoCentreLook; // 0x104
	float AutoCentreLookTimeDelay; // 0x108
	float AutoCentreLookSpeed; // 0x10c
	bool HoldActionsDontRequireHold; // 0x110
	bool HoldActionsWithHeldItemsDontRequireHold; // 0x111
	int32_t TTSOverride; // 0x114
	int32_t STTOverride; // 0x118
	int32_t LGRTMOverride; // 0x11c
	bool TranslateOtherPlayers; // 0x120
	bool ScreenSpaceTooltips; // 0x121
	bool NarrateToasts; // 0x122
	float ToastHoldDurationMultiplier; // 0x124
	bool NarrateOnHover; // 0x128
	bool NarrateChangeOnly; // 0x129
	bool EscapeAsBackAccessibilityOption; // 0x12a
	bool CrossInputPreference; // 0x12b
	bool AdventureCrossInputPreference; // 0x12c
	int32_t AdventureIslandBanners; // 0x130
	int32_t ArenaIslandBanners; // 0x134
	bool OutpostLocationBanners; // 0x138
	int32_t UseSingleStick; // 0x13c
	int32_t UseSingleStickSettingsApplied; // 0x140
	int32_t UseSingleStickCameraToggle; // 0x144
	int32_t SingleStickState; // 0x148
	bool DisableControllerOnPC; // 0x14c
	bool RecenterMouseInMenus; // 0x14d
	bool AutoFloatInWater; // 0x14e
	int32_t PushToTalkMode; // 0x150
	bool CircularUINavigation; // 0x154
	bool Enable120Hz; // 0x155
	bool AlwaysSkipMapTableAnimation; // 0x156
	bool AudioMonoMix; // 0x157
	bool AudioOutputHeadphones; // 0x158
	bool AudioOutputSpatialAudio; // 0x159
	bool DisableSeasonsNotifications; // 0x15a
	bool DisableInviteNotifications; // 0x15b
	bool ControlledTextAlignment; // 0x15c
	bool ControlledLineHeight; // 0x15d
	int32_t OtherCrewsMuteState; // 0x160
	int32_t NauticalNarrationEnabled; // 0x164
	float ContinuousNarrationDelay; // 0x168
	bool DisableFlashes; // 0x16c
	bool DisableBlur; // 0x16d
	bool DisableScreenShake; // 0x16e
	bool DisableOnScreenEffects; // 0x16f
	bool EnchantedCompassProximityAnnouncerEnabled; // 0x170
	bool DisableRats; // 0x171
	bool EnableSqueakyWheel; // 0x172
	float SqueakyWheelVolume; // 0x174
};

struct FSimplygonRemeshingSettings {
	bool bActive; // 0x0
	int32_t ScreenSize; // 0x4
	bool bRecalculateNormals; // 0x8
	float HardAngleThreshold; // 0xc
	int32_t MergeDistance; // 0x10
	bool bUseClippingPlane; // 0x14
	float ClippingLevel; // 0x18
	int32_t AxisIndex; // 0x1c
	bool bPlaneNegativeHalfspace; // 0x20
	bool bUseMassiveLOD; // 0x21
	bool bUseAggregateLOD; // 0x22
	FSimplygonMaterialLODSettings MaterialLODSettings; // 0x28
};

struct FLevelSequenceObject {
	UObject* ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FEventItemConsumed {
	AActor* Consumer; // 0x0
};

struct FDebugTeleportDestinationEntry {
	FString DebugMenuSubPath; // 0x0
	FVector Destination; // 0x10
	FGuid AssociatedCrew; // 0x1c
	FGuid Id; // 0x2c
};

struct FDecalEntry {
	UDecalComponent* DecalComponent; // 0x0
	UMaterialInstanceDynamic* DecalMaterial; // 0x8
	FLinearColor DecalColour; // 0x10
	int32_t LocationIndex; // 0x20
};

struct FEventShipRemovedFromCrew {
	FGuid CrewId; // 0x0
};

struct FPlayerGameEndTelemetryEvent {
	uint32_t IdleDuration; // 0x0
	uint32_t ActiveDuration; // 0x4
	uint32_t VoiceChatDuration; // 0x8
	bool IsMigration; // 0xc
	bool HadSTTEnabled; // 0xd
	bool HadTTSEnabled; // 0xe
	bool HadTranslationEnabled; // 0xf
};

struct FRequestJoinSessionEvent {
	FString SessionCode; // 0x0
};

struct FMovieSceneAkAudioRTPCSectionData {
	FString RTPCName; // 0x0
	FRichCurve RTPCCurve; // 0x10
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FKrakenShipWrappingTentacleAnimationState {
	uint32_t EpochId; // 0x0
	EKrakenShipWrappingTentacleState State; // 0x4
	double EndTime; // 0x8
};

struct FClientCargoRunCrewDataUnit {
	FGuid CrewId; // 0x0
	TArray<FGuid> NPCPickUpPoints; // 0x10
};

struct FEquipmentChestItemEntitlementsUpdatedEvent {
	TArray<FChestEntitlementViewModel> ItemEntitlements; // 0x0
};

struct FItemInfoTogglePair {
	FName Toggle; // 0x0
	FStringClassReference ItemInfo; // 0x8
};

struct FAIExclusionZone {
	FVector Location; // 0x0
	float RadiusSquared; // 0xc
	float Radius; // 0x10
	float Height; // 0x14
};

struct FCarouselPirateGeneratorParams {
	int32_t MinNumOfEachGender; // 0x0
	int32_t MinNumOfEachEthnicity; // 0x4
	TArray<FCarouselPirateGroup> Groups; // 0x8
	FCarouselPirateGroup Default; // 0x18
	FCarouselPirateClothing MaleClothing; // 0x88
	FCarouselPirateClothing FemaleClothing; // 0xa8
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FOceanCrawlerSporeBreathAnimationData {
	UBlendSpace1D* Into; // 0x0
	UBlendSpace1D* Locomotion; // 0x8
	UBlendSpace1D* Outof; // 0x10
};

struct FEventPlayerEnteredProximity {
	AActor* Player; // 0x0
};

struct FCrewMuteOthersVoiceEvent {
	bool IsMuted; // 0x0
};

struct FAthenaAnimationSkeletonKnockbackLocomotionStrength {
	FAthenaAnimationSkeletonKnockbackLocomotion LowStrength; // 0x0
	FAthenaAnimationSkeletonKnockbackLocomotion HighStrength; // 0x10
};

struct FServerHeartbeatTelemetryEvent {
	FTimespan ServerUptime; // 0x0
	FTimespan ServerTimeToLive; // 0x8
	FString ServerAddress; // 0x10
	bool ForcingShutdown; // 0x20
};

struct FTutorialStepEndOfTutorial : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FStoreTokenModel {
	FString AccessToken; // 0x0
	FString WsidToken; // 0x10
};

struct FSetNonVerbalOptionWithImages : FRadialInventoryEvent {
	TArray<FNonVerbalRadialSlot> Slots; // 0x8
};

struct FWeaponProjectileMaxIterationsTelemetryEvent {
	int32_t MaxSimulationIterations; // 0x0
	float MinTickTimeSecs; // 0x4
	float MaxSimulationTimeStep; // 0x8
	FGuid TelemetryAttackId; // 0xc
};

struct FOtherPartyTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<AActor> OtherParty; // 0x0
};

struct FAthenaAnimationIKLimbStretch {
	float IKStretchArms; // 0x0
	float IKStretchLegs; // 0x4
	float IKStretchSpine; // 0x8
};

struct FGenericPopupAudioDescriptor {
	FString SfxEventName; // 0x0
	FString EventName; // 0x10
	FString SwitchName; // 0x20
	FString SwitchValue; // 0x30
};

struct FAthenaAnimationWheelAnimData {
	UAnimSequence* Into; // 0x0
	FAthenaAnimationWheelTurnsAnimData LeftTurn; // 0x8
	FAthenaAnimationWheelTurnsAnimData RightTurn; // 0x20
	FAthenaAnimationWheelArmOverlayAnimData LeftArm; // 0x38
	FAthenaAnimationWheelArmOverlayAnimData RightArm; // 0x48
	TArray<UAnimSequence*> Idles; // 0x58
	TArray<UAnimSequence*> LeftFingerIdles; // 0x68
	TArray<UAnimSequence*> RightFingerIdles; // 0x78
};

struct FRewardRequestSucceededMessage {
	FGuid RequestID; // 0x0
};

struct FEmergentContestVoyageRecipe : FVoyageRecipe {
	bool IsSharableVoyage; // 0x140
	FContestZoneDistribution WeightedContestZonesToActivate; // 0x148
	FContestTimerData ContestVoyageTime; // 0x158
	FStringClassReference ScoreSystemToLoad; // 0x170
	FText ContestArenaName; // 0x180
};

struct FDetailAppearenceMaterialDesc {
	FStringAssetReference Material; // 0x0
	int32_t MaterialIndex; // 0x10
};

struct FQuestVariableRotator : FQuestVariable {
	FName ParamName; // 0x8
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	float GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	int32_t StartCullDistance; // 0x14
	int32_t EndCullDistance; // 0x18
	int32_t MinLOD; // 0x1c
	bool RandomRotation; // 0x20
	float AlignToSurface; // 0x24
	float ScaleVariationMin; // 0x28
	float ScaleVariationMax; // 0x2c
};

struct FSetRadialTitleText : FRadialInventoryEvent {
	FText Text; // 0x8
};

struct FCrewMemberVotes {
	FGuid CrewId; // 0x0
	TArray<FPerCompanyVotes> CompanyVotes; // 0x10
};

struct FTaleQuestDeliveryRequest {
	int32_t Id; // 0x0
	FMerchantContractItemDesc Item; // 0x8
	int32_t NumToDeliver; // 0x30
	int32_t NumToAllocate; // 0x34
};

struct FEventAIOnDelayedAssignedMeshConsumed {
	USkeletalMeshComponent* MeshComponent; // 0x0
	USkeletalMesh* ConsumedMesh; // 0x8
};

struct FUseSingleStickCameraToggleModeChangedEvent {
	EToggleOrHoldMode UseSingleStickCameraToggleMode; // 0x0
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FPlayerStat {
	uint32_t StatId; // 0x0
};

struct FFishingActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x18
	FRotator Rotator; // 0x28
	FVector Vector; // 0x34
};

struct FShowPendingInviteEvent {
	FString XUID; // 0x0
};

struct FAnimExtractContext {
	bool bExtractRootMotion; // 0x0
	float CurrentTime; // 0x4
};

struct FVoyageCreatedTelemetryEvent {
	FString VoyageRecipeAsset; // 0x0
	FString VoyageGenerationLocation; // 0x10
	int32_t VoyageRank; // 0x20
	int32_t NumIslandsToAvoid; // 0x24
	uint32_t VoyageGenerationSeed; // 0x28
	TArray<FRewardIdCount> GeneratedRewards; // 0x30
};

struct FAggressiveGhostShipVisualsMaterialOverride {
	int32_t MaterialIndexToReplace; // 0x0
	FStringAssetReference OriginalMaterial; // 0x8
	FStringAssetReference ReplacementMaterial; // 0x18
};

struct FEnvFloatParam_DEPRECATED {
	float Value; // 0x0
	FName ParamName; // 0x4
};

struct FMaterialAttributesInput : FExpressionInput {
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

struct FLoadout {
	FItemLoadout ItemLoadout; // 0x0
	FClothingLoadout ClothingLoadout; // 0x20
	FPetLoadout PetLoadout; // 0x30
};

struct FVector_NetQuantize : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FAeolusIncorrectAchievementsRemovedTelemetry {
	FString UserId; // 0x0
	FString PirateId; // 0x10
	bool Success; // 0x20
	int32_t AchievementsRemovedCount; // 0x24
};

struct FSetAdventureIslandBanners {
	int32_t Value; // 0x0
};

struct FPetAnimationDataBeingHeld {
	FWeightedPetAnimations WeightedBaseIdle; // 0x0
	FWeightedAnimationTimeoutSelector WeightedIdleTimeouts; // 0x10
	UAnimSequenceBase* DefaultIdle; // 0x20
	UAnimSequenceBase* Equip; // 0x28
	UAnimSequenceBase* Drop; // 0x30
	UAnimSequenceBase* Chew; // 0x38
	UAnimSequenceBase* PositiveFeedingReact; // 0x40
	UAnimSequenceBase* PositiveFeedingReactShown; // 0x48
	UAnimSequenceBase* NegativeFeedingReact; // 0x50
	UAnimSequenceBase* NegativeFeedingReactShown; // 0x58
	UAnimSequenceBase* RefuseFeedingReact; // 0x60
	UAnimSequenceBase* RefuseFeedingReactShown; // 0x68
	FPetAnimationCycle Stroke; // 0x70
	FPetAnimationCycle StrokeAlternate; // 0x88
	FPetAnimationCycle Give; // 0xa0
	UBlendSpace* Locomotion; // 0xb8
	UBlendSpace* ShowingLocomotion; // 0xc0
	UAnimSequenceBase* Underwater; // 0xc8
	UAnimSequenceBase* ShowingUnderwater; // 0xd0
	FPetAnimationDataJump Jump; // 0xd8
	FPetAnimationDataJump JumpAlternateStroke; // 0xf8
	FPetAnimationDataJump JumpShowing; // 0x118
	FJumpHeldAdditiveBlendWeight JumpHeldAdditiveBlendWeight; // 0x138
	FAlternateHeldPose AlternateHeldPose; // 0x150
};

struct FTreasureMapWidget {
	FVector2D Position; // 0x0
	ETreasureMapHorizontalAlignment HorizontalAlignment; // 0x8
	ETreasureMapVerticalAlignment VerticalAlignment; // 0x9
	float Angle; // 0xc
	float Width; // 0x10
	float Opacity; // 0x14
};

struct FMechanismTransformAnimationCurve {
	UMechanismAnimationCurve_Transform* CurveAsset; // 0x0
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FGhostPawnEntry {
	float TimeRemaining; // 0x0
	APawn* Pawn; // 0x8
	bool RespawnCompleted; // 0x10
	bool IsDoorOpen; // 0x11
	FObjectMessagingHandle FinishedSpawningHandle; // 0x18
};

struct FWatercraftRolloverCorrector {
	float RollThresholdToConsiderRolledOver; // 0x0
	float TorqueScalar; // 0x4
};

struct FRequestEmblemProgressFailedEvent {
	FGuid RequestID; // 0x0
};

struct FTaleQuestTaskStartedTelemetryEvent {
	FString Description; // 0x0
	TArray<FString> Context; // 0x10
	FGuid TaskId; // 0x20
};

struct FCrewPlayerLeftCustomServerEvent : FGlobalCustomServerEvent {
	FString CrewId; // 0x18
};

struct FBoxElement2D {
	FVector2D Center; // 0x0
	float Width; // 0x8
	float Height; // 0xc
	float Angle; // 0x10
};

struct FPlayerDeathTelemetryEvent {
	FGuid AttackId; // 0x0
	FString Location; // 0x10
	int32_t LifetimeInSeconds; // 0x20
	uint32_t PossessCount; // 0x24
	double SecondsSinceSpawned; // 0x28
};

struct FAIShipBattleParams {
	FText Name; // 0x0
	FVector2D Location; // 0x38
	float Radius; // 0x40
};

struct FAwardGoldMessage {
	FGuid CrewId; // 0x0
	TArray<FPirateGoldReward> Rewards; // 0x10
	FGuid TransactionId; // 0x20
	FString Source; // 0x30
};

struct FShipHeartbeatTelemetryEvent {
	float Speed; // 0x0
	float Yaw; // 0x4
	float InternalWaterLevel; // 0x8
	int32_t FireCellsActive; // 0xc
};

struct FEventShipExitedSafeZone {
	AActor* Ship; // 0x0
};

struct FPlayerItemRetrievalFromContainerTelemetryEvent {
	FString ContainerId; // 0x0
	FString ItemType; // 0x10
	int32_t NumberOfItemsRemainingInContainer; // 0x20
};

struct FExplosionForceFeedbackInfo {
	UDamagerType* DamagerType; // 0x0
	UForceFeedbackEffect* Effect; // 0x8
	UForceFeedbackEffect* EffectLower; // 0x10
	float LowerTriggerPercentage; // 0x18
	FName Tag; // 0x1c
	float ShakeOuterRadius; // 0x24
};

struct FChainLink {
	AActor* Source; // 0x0
	AActor* Target; // 0x8
	FVector_NetQuantize LastSourceLocation; // 0x10
	FVector_NetQuantize LastTargetLocation; // 0x1c
};

struct FWeightedVoyageLocationParams {
	float Weight; // 0x0
	TArray<FVoyageLocationParams> Locations; // 0x8
};

struct FMerchantMapLayoutItem {
	FTreasureMapWidgetText Name; // 0x0
	FTreasureMapWidgetTexture IconImage; // 0x20
};

struct FAggressiveGhostShipProjectileShotTelemetryEvent {
	FGuid ShipId; // 0x0
	FGuid ProjectileAttackId; // 0x10
	FString ProjectileType; // 0x20
	EAggressiveGhostShipTarget Target; // 0x30
};

struct FFragileComponentHealthScalarEntry {
	EHealthChangedReason HealthChangedReason; // 0x0
	float HealthChangeScalar; // 0x4
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30
};

struct FXMarksTheSpotMapMark {
	FVector2D Position; // 0x0
	float Rotation; // 0x8
	bool IsUnderground; // 0xc
};

struct FSetContestShipTypes {
	bool IsGalleonEnabled; // 0x0
	bool IsBrigantineEnabled; // 0x1
	bool IsSloopEnabled; // 0x2
	bool IsSloopDuoEnabled; // 0x3
	bool IsMixedGalleonBrigantineEnabled; // 0x4
};

struct FFishAnimationSwimmingLoopAnimations {
	UAnimMontage* IdleLoopEndingForwards; // 0x0
	UAnimMontage* IdleLoopEndingRight; // 0x8
	UAnimMontage* IdleLoopEndingLeft; // 0x10
	UAnimMontage* IdleLoopEndingBackwards; // 0x18
};

struct FEventPlayerControllerDestroyedCalled {
	AAthenaPlayerController* Controller; // 0x0
};

struct FServerMigrationRequestEvent {
	FGuid MigrationId; // 0x0
	FString DestinationAddress; // 0x10
	FGuid CrewId; // 0x20
	FString SubMode; // 0x30
};

struct FFireGridCharringManager {
	TArray<UMaterialInterface*> OwnerMaterials; // 0x0
	FVector AdditionalGridOffsetForCharring; // 0x10
	UTexture2DDynamic* FireGridTexture; // 0x20
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FPetLoadoutItem {
	UPetEntitlementBaseDesc* PetEntitlementDesc; // 0x0
	UPetEntitlementBaseDesc* PetCustomizationDesc; // 0x8
	FString PetName; // 0x10
};

struct FIPGDynamicSliderName {
	int32_t AffectedPriority; // 0x0
	FName Name; // 0x4
};

struct FMermaidUsedCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FMerchantQuestRequiredItemsGroupList {
	int32_t NumRequiredItems; // 0x0
	TArray<FMerchantQuestRequiredItemsGroup> RequiredItemsGroups; // 0x8
};

struct FNetViewer {
	AActor* InViewer; // 0x0
	AActor* ViewTarget; // 0x8
	FVector ViewLocation; // 0x10
	FVector ViewDir; // 0x1c
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FPuzzleVaultKeyUsedTelemetryEvent {
	FGuid VaultId; // 0x0
	FName VaultType; // 0x10
	FName VaultKeyUsed; // 0x18
};

struct FShippingStatsTelemetryFragment {
	FJsonObjectWrapper Json; // 0x0
};

struct FMaterialVisualisation {
	FActorComponentSelector TargetMesh; // 0x0
	float TransitionTime; // 0x10
	int32_t MaterialIndex; // 0x14
	FName ParameterName; // 0x18
	float ActiveValue; // 0x20
	float InactiveValue; // 0x24
	UMaterialInstanceDynamic* DynamicMaterial; // 0x28
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FBountyQuestApproachesLandmarkTelemetryEvent {
	FString LandmarkName; // 0x0
};

struct FCanvasLOD {
	bool IsCanvasCountLimited; // 0x0
	int32_t MaxNumCanvasesAtThisLOD; // 0x4
	float ResolutionScaler; // 0x8
};

struct FContestMigrationRequestMessage {
	FGuid MigrationId; // 0x0
	FString DestinationEndpoint; // 0x10
	TArray<FGuid> CrewIds; // 0x20
};

struct FEventStartStow {
	TScriptInterface<Class> Object; // 0x0
	bool FastStow; // 0x10
	EStowMethod StowMethod; // 0x11
};

struct FEventWieldableStashedToStashPoint {
	UPrimitiveComponent* StashPointAttachParent; // 0x0
	bool Visible; // 0x8
};

struct FEventPlayerEnteredSittingState {
	USeatAnimationId* SeatAnimationId; // 0x0
};

struct FKrakenIdleBehaviourParams : FKrakenTentacleBehaviourParams {
	UEnvQuery* InactiveSpawnQueryTemplate; // 0x0
	float ChanceOfCannonSideSpawn; // 0x8
	UEnvQuery* ActiveCannonSideSpawnQueryTemplate; // 0x10
	UEnvQuery* ActiveNonCannonSideSpawnQueryTemplate; // 0x18
	AKrakenAnimatedTentacle* TentacleClass; // 0x20
	float MinScale; // 0x28
	float MaxScale; // 0x2c
	float MinPlayRateScale; // 0x30
	float MaxPlayRateScale; // 0x34
	float PanicDespawnShipRangeRadius; // 0x38
	float PanicDespawnWatercraftRangeRadius; // 0x3c
	float PanicDespawnTentacleRadius; // 0x40
	float PanicDespawnAnimationPlayRateScale; // 0x44
	float PreDeathAnimationPlayRateScale; // 0x48
	TArray<FKrakenTentacleBehaviourActionChances> OnDamageActionChances; // 0x50
	FWeightedProbabilityRangeOfRanges TimeToSpendInInactiveState; // 0x60
	FWeightedProbabilityRangeOfRanges TimeToSpendInActiveState; // 0x90
};

struct FQuestTypeParams {
	UWeightedTreasureChestDescAsset* ReferencedRewards; // 0x8
	TArray<FWeightedTreasureChestDesc> Rewards; // 0x10
	UWeightedItemDescSpawnDataAsset* RewardsAsset; // 0x20
	UTreasureMapItemDesc* OverrideTreasureMapItemDesc; // 0x28
};

struct FRankOffer {
	FShopOffer ShopOffer; // 0x0
	int32_t LevelRequirement; // 0x1e0
};

struct FWheelAdditiveAlphaSets {
	float IsAdditiveRightFingerIdle; // 0x0
	float IsAdditiveLeftFingerIdle; // 0x4
	float IsAdditiveIdle; // 0x8
	float LeftFingerAdditiveValue; // 0xc
	float RightFingerAdditiveValue; // 0x10
	float fullBodyAdditiveValue; // 0x14
	float RHandAdditiveBlendValue; // 0x18
	float LHandAdditiveBlendValue; // 0x1c
	float FullBodyAdditiveBlendValue; // 0x20
};

struct FCutScenePlayData {
	int32_t PlayIndex; // 0x0
	double StartTimeInSeconds; // 0x8
	USceneDialogueData* DialogueData; // 0x10
	TArray<FText> LocalisableNames; // 0x18
	TArray<FPossessableSequence> PossessableSequences; // 0x28
};

struct FCustomAnimationMontageStagedLoopingData {
	UAnimMontage* Into; // 0x0
	TArray<UAnimMontage*> LoopAnims; // 0x8
	TArray<UAnimMontage*> OutOfAnims; // 0x18
};

struct FUIRankSkin {
	FString DisplayName; // 0x0
	FString Description; // 0x10
	FString RibbonImageUrl; // 0x20
};

struct FGamerTagUpdated {
	FString GamerTag; // 0x0
};

struct FKrakenAnimatedTentacleHeldTargetVomittingChance {
	float Chance; // 0x0
	UKrakenAnimatedTentacleState* CurrentState; // 0x8
};

struct FClientTelemetryFragment {
	FGuid TitleSession; // 0x0
	FString UserId; // 0x10
	char PlatformId; // 0x20
	char DeviceSpecScore; // 0x21
	FString DeviceID; // 0x28
	FGuid PlayerGameId; // 0x38
	FString BuildId; // 0x48
	FString ClientPlayMode; // 0x58
	FString PlayModeState; // 0x68
};

struct FEmissaryStateUpdateEvent {
	float CurrentRepTotal; // 0x0
	FName CompanyId; // 0x4
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FSerialisedRpc {
	UScriptStruct* ContentsType; // 0x18
};

struct FClientPanicGarbageCollectionTelemetryEvent {
	int32_t GCPanicMemThreshold; // 0x0
	uint32_t PercentMemUsedBefore; // 0x4
	uint64_t UsedPhysicalBefore; // 0x8
	uint32_t PercentMemUsedAfter; // 0x10
	uint64_t UsedPhysicalAfter; // 0x18
};

struct FUIFrameDurationDataTelemetryFragment {
	uint32_t Num02ms; // 0x0
	uint32_t Num04ms; // 0x4
	uint32_t Num06ms; // 0x8
	uint32_t Num08ms; // 0xc
	uint32_t Num10ms; // 0x10
	uint32_t Num12ms; // 0x14
	uint32_t Num14ms; // 0x18
	uint32_t Num16ms; // 0x1c
	uint32_t Num18ms; // 0x20
	uint32_t Num20ms; // 0x24
	uint32_t Num22ms; // 0x28
	uint32_t Num24ms; // 0x2c
	uint32_t Num26ms; // 0x30
	uint32_t Num28ms; // 0x34
	uint32_t Num30ms; // 0x38
	uint32_t Num32ms; // 0x3c
	uint32_t Num34ms; // 0x40
	uint32_t Num36ms; // 0x44
	uint32_t Num38ms; // 0x48
	uint32_t Num40ms; // 0x4c
	uint32_t Num42ms; // 0x50
	uint32_t Num44ms; // 0x54
	uint32_t Num46ms; // 0x58
	uint32_t Num48ms; // 0x5c
	uint32_t Num50ms; // 0x60
	uint32_t Num52ms; // 0x64
	uint32_t Num54ms; // 0x68
	uint32_t Num56ms; // 0x6c
	uint32_t Num58ms; // 0x70
	uint32_t Num60ms; // 0x74
	uint32_t Num62ms; // 0x78
	uint32_t Num64ms; // 0x7c
	uint32_t Num66ms; // 0x80
	uint32_t NumOver66ms; // 0x84
	float Min; // 0x88
	float Max; // 0x8c
	float Average; // 0x90
};

struct FNamedStateSelector {
	TArray<FNameActiveStatePair> NamedStates; // 0x0
	FName DefaultStateName; // 0x10
};

struct FEventSwimmingCreatureShipBite {
	AShip* Ship; // 0x0
	FVector BiteLocation; // 0x8
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

struct FRegionMapIslandData {
	FIslandSelectionType Island; // 0x0
	bool RenderToMap; // 0x8
	float Scale; // 0xc
	float RotationOffset; // 0x10
	FVector2D LocationOffset; // 0x14
	bool Selectable; // 0x1c
	int32_t MaxNumSelections; // 0x20
};

struct FCapstanNetState {
	float TargetRatio; // 0x0
	bool IsLocked; // 0x4
};

struct FEventMeleeAttackStarted {
	UMeleeAttackDataAsset* AttackData; // 0x0
};

struct FPiratePreviewGeneratePirateEvent {
	FPirateDescription PirateDescription; // 0x0
	FPiratePreviewView View; // 0x80
	bool ForceRebuild; // 0xa0
};

struct FDamageParamWeights {
	float StrainUpperBound; // 0x0
	float ArenaStrainUpperBound; // 0x4
	FWeightedProbabilityRangeOfRanges MinMaxRanges; // 0x8
	FWeightedProbabilityRangeOfRanges AnticipationRanges; // 0x38
	FWeightedProbabilityRangeOfRanges DamageRanges; // 0x68
	float BottomDeckWeight; // 0x98
	float ExistingHoleWeight; // 0x9c
};

struct FLandClueCreationChoice {
	UClueSiteType* ClueSiteType; // 0x0
	FName IslandIdentifier; // 0x8
	ULandClueCreator* ClueCreator; // 0x10
};

struct FTreasuryWaveEncounter {
	ETreasuryEncounterType EncounterType; // 0x0
	ASpawnAIWaveMechanismAction* SpawnerMechanism; // 0x8
	AActor* MechanismTrigger; // 0x10
	ASpawnAIWaveMechanismAction* SpawnerMechanismVaultMaster; // 0x18
	AActor* MechanismTriggerVaultMaster; // 0x20
	UTreasuryWaveDataAsset* Waves; // 0x28
	UTreasuryWaveDataAsset* FinalWaves; // 0x30
	UTreasuryWaveDataAsset* FinalWavesVaultMaster; // 0x38
	bool NeedsRoomFlooded; // 0x40
};

struct FRopeCatenaryLengthPair {
	float Taut; // 0x0
	float Catenary; // 0x4
};

struct FAlphaBlend {
	EAlphaBlendOption BlendOption; // 0x0
	float BeginValue; // 0x4
	float DesiredValue; // 0x8
	float BlendTime; // 0xc
	UCurveFloat* CustomCurve; // 0x10
	float AlphaLerp; // 0x18
	float AlphaBlend; // 0x1c
	float AlphaTarget; // 0x20
	float BlendTimeRemaining; // 0x24
	float BlendedValue; // 0x28
};

struct FEnableMoreButtonEvent {
	EMoreButtonSource MoreButtonSource; // 0x0
	FNavigationDesc Navigation; // 0x4
};

struct FEmissarySecuredLootOnShipNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
};

struct FWaterInformation {
	UWaterId* WaterType; // 0x0
	bool CanSwim; // 0x8
};

struct FGameplayEffectAttributeCaptureDefinition {
	FGameplayAttribute AttributeToCapture; // 0x0
	EGameplayEffectAttributeCaptureSource AttributeSource; // 0x8
	bool bSnapshot; // 0x9
};

struct FGameplayAbilitySpecDef {
	UGameplayAbility* Ability; // 0x0
	int32_t Level; // 0x8
	int32_t InputID; // 0xc
	EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x10
	UObject* SourceObject; // 0x18
	FGameplayAbilitySpecHandle AssignedHandle; // 0x20
};

struct FLobbyServiceModel {
	FLobbyInviteCode InviteCode; // 0x0
	FString HostXuid; // 0x20
	FLobbyCreationRequestModel LobbyCreationRequest; // 0x30
	FString CreationTimeUtc; // 0x40
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
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

struct FPlayerCapstanUsageEndTelemetryEvent {
	int32_t NumCurrentUsers; // 0x0
	float CapstanVelocity; // 0x4
	float CapstanState; // 0x8
};

struct FActorInsideFlameInformation {
	TScriptInterface<Class> DamageableInterface; // 0x0
	TScriptInterface<Class> StatusEffectRecipientInterface; // 0x10
	AActor* ActorWithFirePropagationInterface; // 0x20
};

struct FEmoteDiceOutcomeTelemetryEvent {
	int32_t MaxLimit; // 0x0
	int32_t RollNumber; // 0x4
	FVector OrientationUsed; // 0x8
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

struct FIslandSnapshotV1 {
	int32_t Id; // 0x0
	FVector Position; // 0x4
	FString Name; // 0x10
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FEventFaunaThreatLevelChanged {
	EAIThreatLevel ThreatLevel; // 0x0
};

struct FShipMetadata {
	FString Name; // 0x0
	UShipType* ShipTypeObject; // 0x10
	UShipCategory* ShipCategoryObject; // 0x18
};

struct FHangoutSpotPosition {
	FHangoutSpotId Id; // 0x0
	FTransform Transform; // 0x10
	EHangoutRotationMode RotationMode; // 0x40
	EShipDeck ShipDeck; // 0x41
	APawn* Occupier; // 0x48
	bool IsPerch; // 0x60
	bool NeedOverrideInteractionPoint; // 0x61
	FVector OverrideInteractionPointPosition; // 0x64
	bool BlockPetEmoteReactions; // 0x70
	bool IgnorePickupFromHangoutTooltipDisplayOffset; // 0x71
};

struct FLiquidContents {
	AShip* LiquidSource; // 0x0
	TArray<AShip*> LiquidTargets; // 0x8
	AActor* Container; // 0x18
	float LiquidVolume; // 0x20
	FGuid ScoopID; // 0x24
	float LiquidTransferFillAmountModifier; // 0x34
	EContainerType ContainerType; // 0x38
};

struct FReviveGhostAnimations {
	UAnimSequence* ReviveInto; // 0x0
	UAnimSequence* SwimmingReviveInto; // 0x8
	UAnimSequence* ReviveLoop; // 0x10
	UAnimSequence* ReviveOutOf; // 0x18
	UAnimSequence* ReviveOutOfLoop; // 0x20
};

struct FEventPawnStartedDying {
	APawn* AIPawn; // 0x0
	ECharacterDeathType DeathType; // 0x8
	AActor* Instigator; // 0x10
};

struct FNarrationStateEvent {
	bool IsEnabled; // 0x0
};

struct FDigAnimParams {
	EShovelDigType DigType; // 0x0
	float Duration; // 0x4
	float TimeStampOfUnlockingWielderMovement; // 0x8
	float TimeStampOfEnterGround; // 0xc
	float TimeStampOfLeaveGround; // 0x10
	EWieldableItemAnimVariant AnimVariant; // 0x14
};

struct FShipDesc {
	FShipMetadata MetaData; // 0x0
	FShipTemplate Template; // 0x20
	FPartsCustomisation Customisation; // 0x28
};

struct FCanLoadItemCategoryEntry {
	UItemCategory* CanLoadItemCategory; // 0x0
	FName FeatureToggle; // 0x8
};

struct FEventRelinquishedControlOfObject {
	UObject* RelinquishedObject; // 0x0
};

struct FStoreCatalog {
	TArray<FStoreCatalogItem> Items; // 0x0
};

struct FAthenaAnimationObjectActionContinuousStruct {
	UAnimSequence* MainInto; // 0x0
	UBlendSpace* MainIntoLocomotion; // 0x8
	UAnimSequence* OneShotInto; // 0x10
	UAnimSequence* MainCycleIdle; // 0x18
	UBlendSpace* MainCycleLocomotion; // 0x20
	bool UseMainCycleJump; // 0x28
	FAthenaAnimationObjectJumpingAnimations MainCycleJump; // 0x30
	UAnimSequence* MainOutOf; // 0x50
	UBlendSpace* MainOutOfLocomotion; // 0x58
	FAthenaAnimationObjectActionContinuousSwimming MainSwimming; // 0x60
	FAthenaAnimationLocomotionTurningAnimData TurningLeftAlt; // 0x80
	FAthenaAnimationLocomotionTurningAnimData TurningRightAlt; // 0x88
	UAnimSequence* TurnOutAlt; // 0x90
	bool IgnoreOverlayHandAdditiveForAction; // 0x98
	UAnimSequence* CustomAdditiveForAction; // 0xa0
};

struct FMeleeAIAbilityAngleChecker {
	TScriptInterface<Class> PawnCharacterOrientationInterface; // 0x0
};

struct FEventAIPawnRemovedFromAIRegion {
	APawn* AIPawn; // 0x0
};

struct FDebugFishSelectionBreed {
	FString BreedName; // 0x0
	TArray<FDebugFishSelectionColour> FishColours; // 0x10
};

struct FRammableDamageSpeedEntry {
	UShipSpeedBand* SpeedBand; // 0x0
	TArray<FRammableDamageEntry> DamageRammerTypes; // 0x8
};

struct FTaleQuestNotificationStepEvent : FNetworkEventStruct {
	UPopUpMessageDesc* PopUpDesc; // 0x10
	FNetActorPtr DiscoveringPlayerStateNetPtr; // 0x18
};

struct FLocalGameChatStatusEvent {
	ELocalGameChatStatus Status; // 0x0
};

struct FKrakenHeadTransitionAnimation {
	UKrakenHeadState* FromState; // 0x0
	UAnimSequence* TransitionAnimation; // 0x8
};

struct FShipPartLevelsOfDamage {
	UClass* ActorClass; // 0x0
	TArray<FDistanceAndLevelOfDamage> DamagePerDistance; // 0x20
};

struct FAnimationDataStoreAssetWeakReferenceEntry {
	UAnimationDataStoreId* AnimDataId; // 0x0
	UClass* AnimData; // 0x8
};

struct FMeshMemoryConstraintTelemetryFragment {
	TArray<FMeshMemoryConstraintTelemetryBudgetFragment> BudgetData; // 0x0
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FGameEventSchedulerConfigTelemetry {
	EGameEventSchedulerEventType TrackedActorType; // 0x0
	int32_t NumAllowed; // 0x4
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	float StartOffset; // 0x8
	float EndOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	FName SlotName; // 0x18
	FRichCurve Weight; // 0x20
};

struct FAISpawnContextIdEncounterSettingsPair {
	TArray<UAISpawnContextId*> SpawnContexts; // 0x0
	bool DisableSpawning; // 0x10
	UAIEncounterSettings* EncounterSettings; // 0x18
	UAISpawnWaveSequenceRankProgression* SpawnWaveProgression; // 0x20
	TArray<FAIEncounterAndWaveSettingsOverride> EncounterAndWaveSettingsOverride; // 0x28
};

struct FGenericLightTemplate {
	ELightTemplateType LightType; // 0x0
	FBaseLightData BaseLightData; // 0x8
	FPointLightData PointLightData; // 0x88
	FSpotLightData SpotLightData; // 0xc4
};

struct FPlayerBuriedItemServiceMapTakenFromTavernBoardEvent {
	FString PlayerName; // 0x0
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FLaunchableActiveProjectileData {
	FLaunchableProjectileData Projectile; // 0x0
};

struct FCrewMutePlayerVoiceEvent {
	FString XUID; // 0x0
	bool IsMuted; // 0x10
};

struct FLevelLoadCompletedTelemetryEvent : FStreamingTelemetryBaseEvent {
	bool WasCancelRequested; // 0x30
	bool WasCancelActioned; // 0x31
	float DistancePlayerTravelledSinceLoadRequest; // 0x34
	float TimeSinceLoadRequested; // 0x38
};

struct FAIShipEncounterZoneExitedNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FLevelCompletionMessage {
	FPirateIdentity Pirate; // 0x0
	FGuid SeasonId; // 0x78
	int32_t Level; // 0x88
	int32_t TimeSpentInLevel; // 0x8c
	int32_t Tier; // 0x90
	int32_t TimeSpentInTier; // 0x94
	bool TierCompleted; // 0x98
	bool SeasonCompleted; // 0x99
};

struct FCoordinatedKrakenAction {
	FName ActionName; // 0x0
	float ActionLength; // 0x8
	ECoordinatedKrakenActionType ActionType; // 0xc
	TArray<FCoordinatedKrakenSpecialEvent> SpecialEvents; // 0x10
	TArray<FCoordinatedKrakenTentacleAction> TentacleActions; // 0x20
	TArray<FCoordinatedKrakenHeadAction> HeadActions; // 0x30
	TArray<FCoordinatedKrakenExplosionEvent> ExplosionEvents; // 0x40
	FRuntimeVectorCurve TargetActorLocationAnimation; // 0x50
	FRuntimeVectorCurve TargetActorRotationAnimation; // 0x1c0
};

struct FContestTimerData {
	float Time; // 0x0
	FString ServicesConfigRetrievalString; // 0x8
};

struct FOceanCrawlerBuffAudioSettings {
	UWwiseEvent* GiveBuffAudioEvent; // 0x0
	UWwiseEvent* ReceiveBuffAudioEvent; // 0x8
};

struct FCapturedByKrakenActionStateParams {
	UCurveFloat* MovementAlphaXY; // 0x0
	UCurveFloat* MovementAlphaZ; // 0x8
	UCurveFloat* MovementRotation; // 0x10
	float MovementTime; // 0x18
	float DistanceFromTentacleToStartFade; // 0x1c
	float FadeInDuration; // 0x20
	float ClientConditionsCompleteTimeout; // 0x24
	float MinCameraPitch; // 0x28
	float MaxCameraPitch; // 0x2c
	float MinCameraYaw; // 0x30
	float MaxCameraYaw; // 0x34
	float AnimationProgressionToStopCameraFade; // 0x38
	float BlockInteractInputTime; // 0x3c
};

struct FRiddleTextPhraseId {
	FName PhraseId; // 0x0
	int32_t VariantIndex; // 0x8
};

struct FAdditionalSpawnerBehaviour {
	USpawnerBehaviourStrategy* BehaviourStrategy; // 0x0
};

struct FVirtualActionBindingDefinition {
	TArray<FName> ActionNames; // 0x0
	FString BindingName; // 0x10
};

struct FEventFriendsListResponse {
	TArray<FString> FriendsList; // 0x0
};

struct FGameTimeRange {
	FGameTime Start; // 0x0
	FGameTime End; // 0x8
};

struct FMerchantQuestParams : FQuestTypeParams {
	FWeightedProbabilityRange NumberOfRequiredItems; // 0x30
	FWeightedProbabilityRangeOfRanges TimeLimitInMinutes; // 0x50
	UMerchantQuestRequiredItemsDataAsset* RequiredItemsDataAsset; // 0x80
	UMerchantQuestRandomRequiredItemsDataAsset* RandomRequiredItemsDataAsset; // 0x88
	FWeightedProbabilityRange NumberOfGroups; // 0x90
	TArray<FMerchantQuestCategoryGroupBounds> CategoryGroupBounds; // 0xb0
};

struct FEventHdrSettingsVisible {
	bool Visible; // 0x0
};

struct FVoyageProposalLostVotingSessionTelemetryEvent {
	FGuid VoyageProposalSessionId; // 0x0
	FString VoyageProposalEntitlementId; // 0x10
	int32_t NumberOfVotes; // 0x20
};

struct FEnvBoolParam_DEPRECATED {
	bool Value; // 0x0
	FName ParamName; // 0x4
};

struct FEventKeybindCaptureRequest {
	EInputControllerType ControllerTypeKeyToExpect; // 0x0
};

struct FAthenaAnimationLODSettings {
	EIKState IKState; // 0x0
	EIKSolverType IKSolverType; // 0x1
	EIKFootPlantingState IKFootPlantingState; // 0x2
};

struct FRequestedLoopAnims {
	FName RequestedLoopingAnimName; // 0x0
	int32_t RequestedOutOfAnimIndex; // 0x8
};

struct FAthenaAnimationIdleVariantChange {
	float CurrentTime; // 0x0
	float TriggerTime; // 0x4
	int32_t VariantID; // 0x8
	bool VariantCompleted; // 0xc
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x98
};

struct FCarouselPirateGroup {
	FName Name; // 0x0
	int32_t Count; // 0x8
	FFloatRange Age; // 0xc
	FFloatRange Wonkiness; // 0x1c
	FFloatRange Dirt; // 0x2c
	FCarouselPirateBodyshape MaleBodyShape; // 0x3c
	FCarouselPirateBodyshape FemaleBodyShape; // 0x54
};

struct FRemoteLocalizationData {
	TArray<FLocText> LocDictionary; // 0x0
	FString Locale; // 0x10
};

struct FCompanyShopSkin {
	FStringAssetReference TopBanner; // 0x0
	FStringAssetReference BottomBanner; // 0x10
};

struct FEventEncounterStart : FEventEncounterBase {
	FGuid EncounterId; // 0x0
	AActor* EncounterActor; // 0x10
	EEncounterType EncounterType; // 0x18
	float EncounterRadiusSquared; // 0x1c
};

struct FEventMeleeWeaponAttackTriggered {
	EMeleeWeaponAttackType AttackType; // 0x0
	int32_t AttackIndex; // 0x4
};

struct FPlayerCheatTelemetryEvent {
	FString CheatSource; // 0x0
	FString CheatFunction; // 0x10
	FString CheatArguments; // 0x20
};

struct FAthenaAnimationOverrideEntry {
	FName Name; // 0x0
	FStringAssetReference MeshFirstPerson; // 0x8
	FStringAssetReference MeshThirdPerson; // 0x18
	FStringAssetReference AnimationDataStore; // 0x28
	UAnimationDataStoreId* ALKFirstPerson; // 0x38
	UAnimationDataStoreId* ALKThirdPerson; // 0x40
};

struct FEventCharacterLanded {
	FHitResult HitResult; // 0x0
	float VerticalSpeed; // 0x80
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FHealthUI {
	float MinVisibleHealth; // 0x0
	float ContinuousTimePerUpdate; // 0x4
	APawn* TargetPawn; // 0x20
};

struct FCloudWeatherParameters {
	FVector2D DefaultCloudVelocity; // 0x0
	UMaterialParameterCollection* AtmosphericMaterialParams; // 0x8
	float GlobalAtmosphericPressure; // 0x10
	float AtmosphericPressureThresholdSize; // 0x14
	float MaxWindDelayLength; // 0x18
	float WindSpeedMultiplier; // 0x1c
	char UsesGlobalWindService : 1; // 0x20
	char UsesPressureZones : 1; // 0x20
	char CloudsCastShadows : 1; // 0x20
	char PressureIsControlledByParameterCollection : 1; // 0x20
};

struct FWeaponProjectileCreator {
	FGuid Id; // 0x0
	FGuid AttackId; // 0x10
	TWeakObjectPtr<AActor> Instigator; // 0x20
	FVector Origin; // 0x28
	FVector Direction; // 0x34
	FProjectileAim AimData; // 0x40
	TArray<AActor*> IgnoredActors; // 0x90
	FWeaponProjectileParams Params; // 0xa0
	UDamagerType* DamagerType; // 0x150
	FGuid TelemetryAttackId; // 0x158
	int32_t SubAttackGroupId; // 0x168
	FTransform WeaponMeshTransform; // 0x170
	UObject* WeaponMesh; // 0x1a0
	float DistanceBeforeGravity; // 0x1a8
};

struct FClueSiteTypeToMarkId {
	UClueSiteType* ClueSiteType; // 0x0
	UMapMarkId* MapMarkId; // 0x8
};

struct FQuestVariablePlayerActor : FQuestVariable {
	FName ParamName; // 0x8
};

struct FEventCharacterEndTeleport {
	AActor* Character; // 0x0
	bool PlayOnTeleportEndSounds; // 0x8
	ETeleportNotificationSource TeleportNotificationSource; // 0x9
};

struct FRemoteProjectileAim {
	FProjectileAim AimData; // 0x0
	bool IsRelativeAim; // 0x50
	FProjectileTimeStamp TimeStamp; // 0x58
};

struct FAIWeightedProbabilityRangeOfRangesRankMapping {
	UAIWeightedProbabilityRangeOfRangesAsset* RangeOfRanges; // 0x0
	TArray<float> Weights; // 0x8
};

struct FAthenaAnimationSkeletonCurseAnimations {
	UAnimSequence* SkeletonDrunk; // 0x0
	UAnimSequence* SkeletonDance; // 0x8
	UAnimSequence* SkeletonSleepInto; // 0x10
	UAnimSequence* SkeletonSleepLoop; // 0x18
	UAnimSequence* SkeletonSleepOut; // 0x20
};

struct FStandardSailDynamicsParameters {
	float ForceGeneratedByWindSpeedPerMPS; // 0x0
	float AirDragPerSailPerMPS; // 0x4
	float PowerRatioOfSailForwardForceToFullForce; // 0x8
};

struct FEventOnCrewStorageFull {
	FGuid CrewStoring; // 0x0
	int16_t IslandHash; // 0x10
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	FKey Key; // 0x8
	char bShift : 1; // 0x28
	char bCtrl : 1; // 0x28
	char bAlt : 1; // 0x28
	char bCmd : 1; // 0x28
};

struct FAggressiveGhostShipEncounterEndTelemetryEvent {
	FGuid EncounterId; // 0x0
	bool WasSuccessfullyCompleted; // 0x10
};

struct FHitRegSnapshotDisplaySettings {
	bool DisplaySnapshot; // 0x0
	bool DisplayAttackingClientData; // 0x1
	bool DisplayServerData; // 0x2
	bool ShowDetailedExplanations; // 0x3
};

struct FEventTinySharkDespawned {
	ETinySharkDespawnReason DespawnReason; // 0x0
};

struct FNotesManagementRemoteServiceNoteTextModel {
	FString Locale; // 0x0
	FString Title; // 0x10
	FString Text; // 0x20
};

struct FShipwreckStateData : FActorStateData {
	FString Name; // 0x20
};

struct FSleepingActionStateParams : FControlObjectActionStateParams {
	EControllableObjectType ControllableObjectType; // 0x18
	USeatAnimationId* BedAnimationId; // 0x20
	float CameraFadeDuration; // 0x28
	float TooltipDelay; // 0x2c
	float HealthRegenDelay; // 0x30
	float HealthRegenTickInterval; // 0x34
	float HealthRegenTickAmount; // 0x38
	bool ShouldHideFirstPersonMesh; // 0x3c
	ESleepingActionStateDockingMode DockingMode; // 0x3d
	float SleepingSfxDelay; // 0x40
	float SleepingAudioStateDelay; // 0x44
	bool NeverFartWhileSleeping; // 0x48
	float UnderwaterDepthThreshold; // 0x4c
};

struct FDeepSeaRegionData {
	float DeepSeaRegionRadius; // 0x8
	float MaxSwimDepth; // 0xc
	bool ShouldUseDeepSeaSwimmingBounds; // 0x10
	float SwimmingBoundsRadius; // 0x14
	float SlowDownZoneWidth; // 0x18
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FEventPlayerTakenControlOfControllable {
	AActor* ControllableObject; // 0x0
};

struct FMeshScoring {
	FName MeshName; // 0x0
	TArray<FIndividualMeshScoring> RegisteredComponents; // 0x8
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FShantyPuzzleSingleInteractionZoneUnlockEvent {
	AActor* Player; // 0x0
	int32_t InteractionZoneIdx; // 0x8
};

struct FMemoryDataTelemetryFragment {
	uint64_t MemAvailPhyAvg; // 0x0
	uint64_t MemAvailPhyMin; // 0x8
	uint64_t MemAvailPhyMax; // 0x10
	uint64_t MemAvailVirAvg; // 0x18
	uint64_t MemAvailVirMin; // 0x20
	uint64_t MemAvailVirMax; // 0x28
	uint64_t MemUsedPhyAvg; // 0x30
	uint64_t MemUsedPhyMin; // 0x38
	uint64_t MemUsedPhyMax; // 0x40
	uint64_t MemUsedVirAvg; // 0x48
	uint64_t MemUsedVirMin; // 0x50
	uint64_t MemUsedVirMax; // 0x58
	uint64_t MemAvailPhyUIAvg; // 0x60
	uint64_t MemAvailPhyUIMin; // 0x68
	uint64_t MemAvailPhyUIMax; // 0x70
	uint64_t MemAvailVirUIAvg; // 0x78
	uint64_t MemAvailVirUIMin; // 0x80
	uint64_t MemAvailVirUIMax; // 0x88
	uint64_t MemUsedPhyUIAvg; // 0x90
	uint64_t MemUsedPhyUIMin; // 0x98
	uint64_t MemUsedPhyUIMax; // 0xa0
	uint64_t MemUsedVirUIAvg; // 0xa8
	uint64_t MemUsedVirUIMin; // 0xb0
	uint64_t MemUsedVirUIMax; // 0xb8
	uint64_t MemUsedMallocCurrent; // 0xc0
	uint64_t MemUsedMallocPeak; // 0xc8
	TArray<FMemoryTableData> TableInfo; // 0xd0
	uint64_t NumLargeAllocations; // 0xe0
	uint64_t PeakLargeAllocations; // 0xe8
	uint64_t MemUsedCachedPagesCurrent; // 0xf0
	uint64_t MemUsedCachedPagesPeak; // 0xf8
	uint64_t MemUsedAsyncLoadingRegularMax; // 0x100
	uint64_t MemUsedAsyncLoadingOverflowMax; // 0x108
	uint64_t MemUsedAsyncLoadingExtraOverflowMax; // 0x110
	int32_t HighMemoryThresholdPercentage; // 0x118
	uint64_t MemUsedTexturePoolAvg; // 0x120
	uint64_t MemUsedTexturePoolMin; // 0x128
	uint64_t MemUsedTexturePoolMax; // 0x130
	uint64_t MemUsedTextureUnstreamedAvg; // 0x138
	uint64_t MemUsedTextureUnstreamedMin; // 0x140
	uint64_t MemUsedTextureUnstreamedMax; // 0x148
	uint64_t MemUsedRenderTargetAvg; // 0x150
	uint64_t MemUsedRenderTargetMin; // 0x158
	uint64_t MemUsedRenderTargetMax; // 0x160
};

struct FItemBlockingParameters {
	float BlockingHalfAngle; // 0x0
};

struct FLightingControllerAssetParams {
	UMaterialParameterCollection* AtmosphericMaterialParams; // 0x0
	UMaterialParameterCollection* CloudMaterialParams; // 0x8
	UMaterialParameterCollection* ScreenEffectsMaterialParams; // 0x10
	UMaterialParameterCollection* IslandDangerMaterialParams; // 0x18
	ULightingControllerSettings* UnderworldLightingSet; // 0x20
	ULightingControllerSettings* HideoutLightingSet; // 0x28
	ULightingControllerSettings* ArenaTavernLightingSet; // 0x30
	UStaticMesh* SkyDomeMesh; // 0x38
	UStaticMesh* NorthStarMesh; // 0x40
	UStaticMesh* MoonMesh; // 0x48
};

struct FSeasonsChatNotificationEvent {
	FSeasonsChatNotification SeasonsChatNotification; // 0x0
};

struct FGiveEmergentVoyageData {
	int32_t PlayerNetGUID; // 0x0
	FString VoyageAssetPath; // 0x8
};

struct FVoyageLocationFixedParams {
	FName Name; // 0x0
};

struct FSetVulnerabilityData {
	int32_t ActorId; // 0x0
	FString DamagerType; // 0x8
	float DamageMultipler; // 0x18
};

struct FBountyQuestTargetKilledTelemetryEvent {
	FString BountyTargetName; // 0x0
	FGuid BootyId; // 0x10
};

struct FQuestVariableOrientedPoint : FQuestVariable {
	FName ParamName; // 0x8
};

struct FRiddleActionLocation {
	float Weight; // 0x0
	ERiddleLocations RiddleLocation; // 0x4
	ERiddleActionLocationOffsets RiddleActionLocationOffset; // 0x5
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x30
	FName SlotName; // 0x48
	int16_t LastSlotNodeInitializationCounter; // 0x58
};

struct FMaterialReferencesEntry {
	FName Name; // 0x0
	TArray<FMaterialReferenceEntry> References; // 0x8
};

struct FDigEventFxParams {
	UObject* Particles; // 0x0
	bool bAttachParticlesToShovel; // 0x8
	UForceFeedbackEffect* Rumble; // 0x10
};

struct FNavAgentProperties : FMovementProperties {
	FName Name; // 0x4
	float AgentRadius; // 0xc
	float AgentHeight; // 0x10
	float AgentStepHeight; // 0x14
	float NavWalkingSearchHeightScale; // 0x18
	float NavWalkingSearchRadiusScale; // 0x1c
	float NavWalkingSearchRadiusScaleOffMesh; // 0x20
	float AgentMaxSlope; // 0x24
	float MinRegionArea; // 0x28
};

struct FWindZoneParams {
	float OuterRadius; // 0x0
	float InnerRadius; // 0x4
	float TurbulenceScalar; // 0x8
	bool WindOnlyAffectsTrees; // 0xc
};

struct FEmissaryDeactivatedNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FEventCharacterStartedDrowning {
	float TimeTillDrown; // 0x0
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FEventGameNarrationClientNotificationMessage {
	ENotificationType NotificationType; // 0x0
	FString Sender; // 0x8
	FString Text; // 0x18
};

struct FCustomAnimationMontageStateMachine {
	UCustomAnimationMontageDefinitionDataAsset* ActiveState; // 0x0
	UCustomAnimationMontageDefinitionDataAsset* PendingState; // 0x8
	UAnimMontage* ActiveMontage; // 0x10
};

struct FIslandDioramas {
	TArray<TScriptInterface<Class>> Entries; // 0x0
};

struct FInvalidFireRequestDetected {
	UObject* RequestingObject; // 0x0
};

struct FEventAIFormSelected {
	UAthenaAIFormDataAsset* Form; // 0x0
};

struct FMatineeActorSetPositionNetworkEvent : FNetworkEventStruct {
	AMatineeActor* MatineeActor; // 0x10
	float InterpolationPosition; // 0x18
	bool Jump; // 0x1c
};

struct FEventShipTopDeckBlocked {
	FGuid BlockerId; // 0x0
};

struct FAISpawnActionStateParams {
	float SpawnTimeMax; // 0x0
	bool BeginInvis; // 0x4
	float InvisTime; // 0x8
	bool SkipAnimTimeCheck; // 0xc
};

struct FVaultPuzzleSolutionPositions {
	TArray<int32_t> SolutionPositions; // 0x0
};

struct FWheelPartsScales {
	FVector FractureWestScale; // 0x0
	FVector FractureEastScale; // 0xc
	FVector FractureSouthScale; // 0x18
	FVector PlankWestScale; // 0x24
	FVector PlankEastScale; // 0x30
	FVector PlankSouthScale; // 0x3c
};

struct FShipPartDamagePersistenceModel : FPersistenceModel {
	TArray<ERepairableState> ComponentRepairableStates; // 0x0
	FString Id; // 0x10
};

struct FPlayerBuriedItemsMapBundlePickedUpTelemetryEvent {
	FGuid MapBundleId; // 0x0
	FGuid OwningCrewID; // 0x10
	FGuid PickedUpByPlayerId; // 0x20
	FGuid PickedUpByCrewId; // 0x30
	FGuid OwningCrewSessionId; // 0x40
	FGuid PickedUpByCrewSessionId; // 0x50
	TArray<FGuid> PlayerBuriedItemMapIds; // 0x60
	TArray<FGuid> MapIdsOriginalOwners; // 0x70
};

struct FQuestVariableTexture : FQuestVariable {
	FName ParamName; // 0x8
};

struct FPrioritisedPromptHandle {
	FGuid Id; // 0x0
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FSceneDialogueStartNetworkEvent : FSceneDialogueBaseNetworkEvent {
	UScriptStruct* Type; // 0x8
};

struct FPlayerActionCannonTelemetryEvent {
	FString ProjectileId; // 0x0
	FGuid AttackId; // 0x10
};

struct FQuestVariableMerchantItemArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FEventPlayerTeleportComplete {
	AAthenaPlayerState* PlayerState; // 0x0
};

struct FMermaidServiceMermaidSpawnParams {
	float MinDistFromSpawnOrigin; // 0x0
	float MinDistFromSpawnOriginForDestroyedShip; // 0x4
	float MaxDistFromSpawnOriginBeforeGivingUp; // 0x8
	float DistIncrementPerFailedSpawnCircle; // 0xc
	int32_t NumSamplesInSpawnCircle; // 0x10
	float SpawnCastStartZ; // 0x14
	float MinSpawnDepth; // 0x18
	float SpawnHalfConeAngleRestrictIfSpawningForPlayer; // 0x1c
	ECollisionChannel HitTestTraceChannel; // 0x20
	float AssumedMermaidRadius; // 0x24
	float MinDistanceOfFinalSpawnPosToAnyActiveMermaid; // 0x28
	float MinDistanceOfFinalSpawnPosToAnyActiveMermaidWhenNearEnemyShip; // 0x2c
	float MinDistFromEdgeOfWorld; // 0x30
	float MinAngularStepSize; // 0x34
	float MaxAngularStepSize; // 0x38
	float MinDistanceIncrementPerFail; // 0x3c
	float MaxDistanceIncrementPerFail; // 0x40
	float AdditionalDistanceFromOriginMultiplierPerMeter; // 0x44
};

struct FFireGridCellSelectionParams {
	AActor* ActorClassFilter; // 0x0
	float ChanceToAffectTheActor; // 0x8
	FFireGridCellSelection FireGridCellSelectionParams; // 0xc
};

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FClientRequestAsyncLoadingCompleteAckNetworkEvent : FNetworkEventStruct {
	int32_t StreamOutLevelId; // 0x10
	int32_t StreamInLevelId; // 0x14
};

struct FClientPirateDeleteTelemetryEvent {
	FString PirateId; // 0x0
};

struct FPlaySoundRpc : FBoxedRpc {
	UWwiseEvent* WwiseEvent; // 0x10
	bool PlayOnTarget; // 0x18
};

struct FBlueprintLiveStreamInfo {
	FString GameName; // 0x0
	FString StreamName; // 0x10
	FString URL; // 0x20
};

struct FServerCrewModel {
	FGuid CrewId; // 0x0
	FUniqueNetIdRepl UserId; // 0x10
	FGuid ServerId; // 0x28
	int32_t SessionType; // 0x38
	TArray<FVector2D> Positions; // 0x40
	TArray<uint32_t> Resources; // 0x50
};

struct FEventRepairableObjectRepairEndedEvent {
	UObject* Repairable; // 0x0
	FVector Position; // 0x8
	AActor* RepairerActor; // 0x18
	float RepairPercentage; // 0x20
};

struct FCachedMovieSceneEvaluationTemplate : FMovieSceneEvaluationTemplate {
	TMap<uint32_t, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FMovieSceneEvaluationField EvaluationField; // 0xa0
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
	FMovieSceneGenerationLedger Ledger; // 0x170
	char bHasLegacyTrackInstances : 1; // 0x218
	char bKeepStaleTracks : 1; // 0x218
};

struct FCreateBoxTriggerData {
	FVector Location; // 0x0
	FVector Extent; // 0xc
};

struct FItemInfoHealthMetaWrapper : FItemMetaBase {
	float CurrentHealth; // 0x18
	float MaxHealth; // 0x1c
};

struct FOpenForListEntry {
	APawn* Pawn; // 0x0
	float TimeUntilDoorFullyOpen; // 0x8
};

struct FAthenaAnimationFirstPersonTurnDelay {
	float MaxAngle; // 0x0
	float DelayOutSpeed; // 0x4
	float DelayInSpeed; // 0x8
};

struct FStartGameNarrative {
	FString TexturePath; // 0x0
	FString Text; // 0x10
	float EnterDurationSeconds; // 0x20
	float HoldDurationSeconds; // 0x24
	float ExitDurationSeconds; // 0x28
	EStartGameNarrativePositionX AlignX; // 0x2c
	EStartGameNarrativePositionY AlignY; // 0x2d
	EStartGameNarrativeMediaSize Size; // 0x2e
};

struct FContestMatchmakingClientRequestModel {
	TArray<FString> PlayModeTags; // 0x0
	TArray<FString> PlayModeStates; // 0x10
	TMap<FString, FString> OptionalPlayModeInfo; // 0x20
	TArray<FContestMatchmakingCrewModel> Crews; // 0x70
	FString ServerLocation; // 0x80
	uint32_t FeatureHash; // 0x90
	FString PrivateServerId; // 0x98
	FGuid RequestCorrelationId; // 0xa8
};

struct FNPCInitialSpawnedCosmeticItems {
	AActor* CosmeticItemObject; // 0x0
	FName AttachSocketName; // 0x8
};

struct FScrollBarStyle : FSlateWidgetStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x8
	FSlateBrush VerticalBackgroundImage; // 0x98
	FSlateBrush VerticalTopSlotImage; // 0x128
	FSlateBrush HorizontalTopSlotImage; // 0x1b8
	FSlateBrush VerticalBottomSlotImage; // 0x248
	FSlateBrush HorizontalBottomSlotImage; // 0x2d8
	FSlateBrush NormalThumbImage; // 0x368
	FSlateBrush HoveredThumbImage; // 0x3f8
	FSlateBrush DraggedThumbImage; // 0x488
};

struct FNPCReactionDualActorVOEntry {
	UClass* Actor1ToReactTo; // 0x0
	UClass* Actor2ToReactTo; // 0x20
	FName VOGroupName; // 0x40
	FWeightedProbabilityRangeOfRanges VOCooldown; // 0x48
};

struct FTinySharkDespawnTelemetryEvent {
	FString TinySharkId; // 0x0
	ETinySharkDespawnReason TinySharkDespawnReason; // 0x10
};

struct FContestMatchmakingLocationsResponseModel {
	TArray<FString> Locations; // 0x0
	int32_t MaxHops; // 0x10
};

struct FHitReactionAnimationState {
	float Yaw; // 0x0
	float AdditiveBlend; // 0x4
	ECharacterHitReactionAnimType ReactType; // 0x8
	bool ActivateNewHitReact; // 0x9
};

struct FPlayerMysteriousNoteItem {
	FGuid OriginalNoteID; // 0x0
	FString LocalisedTitle; // 0x10
	FString LocalisedBody; // 0x20
	FString NoteType; // 0x30
};

struct FHDRTelemetryFragment {
	bool HDR; // 0x0
};

struct FGameplayEffectAttributeCaptureSpecContainer {
	TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0
	TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10
	bool bHasNonSnapshottedAttributes; // 0x20
};

struct FAthenaCharacterSwimSpeed {
	float SprintSpdAmp; // 0x0
	float SprintAccelAmp; // 0x4
	float TurnSpeedScalar; // 0x8
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x30
};

struct FSeasonProgressionUITelemetryFragment {
	TArray<FSeasonProgressionUIEventTypeTelemetryFragment> ReceivedEventsData; // 0x0
	int32_t TotalNumReceivedEvents; // 0x10
};

struct FFormatTextArgument {
	FText ArgumentName; // 0x0
	FText TextValue; // 0x38
};

struct FExposedValueCopyRecord {
	UProperty* SourceProperty; // 0x0
	FName SourcePropertyName; // 0x8
	TArray<FName> SourceSubPropertyNames; // 0x10
	int32_t SourceArrayIndex; // 0x20
	UProperty* DestProperty; // 0x28
	int32_t DestArrayIndex; // 0x30
	int32_t Size; // 0x34
	EPostCopyOperation PostCopyOperation; // 0x38
	UBoolProperty* CachedBoolSourceProperty; // 0x40
	UBoolProperty* CachedBoolDestProperty; // 0x48
};

struct FAnimNode_HIKFloorContact : FAnimNode_HIKBase {
	bool FeetContact; // 0x48
	bool HandsContact; // 0x49
	bool FingersContact; // 0x4a
	bool ToesContact; // 0x4b
	EHIKFeetContactType FeetContactType; // 0x4c
	EHIKHandsContactType HandsContactType; // 0x4d
	float DistanceUp; // 0x50
	float DistanceDown; // 0x54
	int32_t NbRays; // 0x58
	float FootRadius; // 0x5c
	float DeltaTime; // 0x60
	float Smoothing; // 0x64
	FCollisionResponseContainer OverrideRaycastCollisionResponse; // 0x68
	float FeetHeight; // 0x88
	float FeetBack; // 0x8c
	float FeetMiddle; // 0x90
	float FeetFront; // 0x94
	float FeetInSide; // 0x98
	float FeetOutSide; // 0x9c
	float HandsHeight; // 0xa0
	float HandsBack; // 0xa4
	float HandsMiddle; // 0xa8
	float HandsFront; // 0xac
	float HandsInSide; // 0xb0
	float HandsOutSide; // 0xb4
};

struct FAIDebugVisualisationLine {
	FVector From; // 0x0
	FVector To; // 0xc
	float LifeTime; // 0x18
	EAIDebugColour Colour; // 0x1c
};

struct FMarkerVariantDesc {
	UWorldMarkerVariant* Variant; // 0x0
	UBaseWorldMarker* MarkerType; // 0x8
	bool UseActorMarker; // 0x10
	FStringAssetReference MarkerVfx; // 0x18
	FStringClassReference MarkerClass; // 0x28
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
};

struct FLevelLoadRequestedTelemetryEvent : FStreamingTelemetryBaseEvent {
	FString LevelName; // 0x0
	int32_t LodLevel; // 0x10
	FVector PlayerPosition; // 0x14
	float DistanceFromPlayer; // 0x20
	float DistanceFromBoundsToPlayer; // 0x24
	bool PlayerIsWaitingToSpawn; // 0x28
	bool PlayerIsTeleporting; // 0x29
};

struct FLeaderboardScoreUpdateMessage {
	FPirateIdentity PirateIdentity; // 0x0
	FName EmissaryAffiliation; // 0x78
	int64_t Before; // 0x80
	int64_t After; // 0x88
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

struct FEventCharacterFootExitWater {
	FCharacterFootWaterImpactResult Result; // 0x0
};

struct FCampaignGoalModel {
	FGuid Id; // 0x0
	FDateTime ActiveFrom; // 0x10
	FDateTime ActiveUntil; // 0x18
	TMap<FString, FString> Meta; // 0x20
};

struct FEventUseItemStopped {
	UNotificationInputId* InputID; // 0x0
	AActor* ActionSource; // 0x8
	AActor* Usable; // 0x10
	EActionStateMachineTrackId TrackToUse; // 0x18
};

struct FPacketDiscardStats {
	int32_t DiscardCounts[0x7]; // 0x0
	int32_t BytesDiscarded; // 0x1c
};

struct FEventPlayerStatePawnPossessed {
	APlayerState* PlayerState; // 0x0
	APawn* PossessedPawn; // 0x8
	bool IsLocalPlayer; // 0x10
};

struct FDrawDebugItemString {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	FString String; // 0x10
	FColor Colour; // 0x20
	FVector StringPos; // 0x24
};

struct FMakeFriendsEmoteParams {
	TArray<FName> TriggerEmoteNames; // 0x0
	float TriggerDistanceThreshold; // 0x10
};

struct FUndoRepairActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetSubObjectPtr RepairableObject; // 0x30
	UNotificationInputId* InputID; // 0x48
};

struct FTrackCommodityPurchaseOnServerRpc : FBoxedRpc {
	UObject* CommodityDemandStorageObject; // 0x10
	FName NPCName; // 0x18
	FGuid ItemOfferId; // 0x20
	FString ItemClientId; // 0x30
};

struct FRopeVisualParams {
	float Thickness; // 0x0
	float UVScale; // 0x4
	float Roughness; // 0x8
};

struct FEventTakenControlOfObject {
	TScriptInterface<Class> ControlledObject; // 0x0
	EControllableObjectType ControllableType; // 0x10
};

struct FCookStartCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString FoodType; // 0x28
};

struct FGameplayEffectExecutionScopedModifierInfo {
	FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0
	EGameplayModOp ModifierOp; // 0x10
	FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x18
	FGameplayTagRequirements SourceTags; // 0x188
	FGameplayTagRequirements TargetTags; // 0x1d8
};

struct FMechanismCheckpoint {
	FMechanismTransformAnimationCurve AnimationCurve; // 0x0
	float StartDelay; // 0x8
	ETimedDoorCheckpointState ClosingState; // 0xc
};

struct FFishingMiniGamePlayerInput {
	EFishingMiniGamePlayerInputDirection InputDirection; // 0x0
	char BattlingDirection; // 0x1
	bool IsReeling; // 0x2
};

struct FGhostShipCoordinator {
	TArray<FGhostPawnEntry> GhostPawns; // 0x0
	UObject* Parent; // 0x10
	AGhostShipPlayerSpawnLocation* SpawnLocation; // 0x20
	AGhostShipDoor* GhostShipDoor; // 0x28
};

struct FIslandItemSpawnLocationData {
	FVector SpawnLocation; // 0x0
	FVector SpawnLocationNormal; // 0xc
};

struct FEmergentVoyageSourceIconInfo {
	EQuestMapIcon IconType; // 0x0
	EEmergentVoyageSource VoyageSource; // 0x1
};

struct FAthenaAIControllerWeightedRangesParamValue {
	FName ParamName; // 0x0
	FWeightedProbabilityRangeOfRanges Value; // 0x8
};

struct FEventMastSailsBillowed {
	EMastType MastType; // 0x0
	AActor* ParentShip; // 0x8
};

struct FContestNotificationNetworkEvent : FNetworkEventStruct {
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FEventEmblemUnlockedNotification {
	FName CompanyName; // 0x0
	FName FriendlyName; // 0x8
	FText EmblemName; // 0x10
	FString EmblemUrl; // 0x48
};

struct FFeatureLockedCampaignParams {
	FName Feature; // 0x0
	UCursedSailsCampaignDataAsset* CampaignDataAsset; // 0x8
};

struct FBattleElevatorEventRoomPhase {
	FName PhaseName; // 0x0
	bool IsFinalPhase; // 0x8
	FName NextPhaseName; // 0xc
	TArray<UBattleElevatorEventRoomBasePolicy*> Policies; // 0x18
	TArray<UElevatorActionBase*> Actions; // 0x28
};

struct FAmmoEffectState {
	FEventAmmoChanged LastAmmoEvent; // 0x0
	bool ShouldSkipUpdates; // 0x4
};

struct FSinkShipData {
	int32_t ShipNetGUID; // 0x0
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UObject* ObjectPtr; // 0x8
};

struct FPetRelationship {
	APetItemInfo* PetInfo; // 0x0
};

struct FCustomPlayerNoteList {
	TArray<FNotesRemoteServiceNoteDetailModel> Notes; // 0x0
};

struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData {
	FHitResult HitResult; // 0x8
};

struct FHitRegProjectileSnapshotData {
	FHitRegProjectileAttackData AttackerClientData; // 0x0
	FHitRegProjectileAttackData ServerData; // 0x70
};

struct FTriangleSortSettings {
	ETriangleSortOption TriangleSorting; // 0x0
	ETriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x4
};

struct FFireworkDebugListByFireworkType {
	TArray<UItemDescSpawnData*> Rockets; // 0x0
	TArray<UItemDescSpawnData*> Cakes; // 0x10
};

struct FUpdatedEntitlementsAvailableEvent {
	FPirateIdentity PirateIdentity; // 0x0
};

struct FQuestVariableAsset : FQuestVariable {
	FName ParamName; // 0x8
};

struct FBlockDecalMaterials {
	TArray<UMaterialInterface*> BlockMaterials; // 0x0
};

struct FEventFaunaAnimationAgitated {
	bool Agitated; // 0x0
};

struct FAthenaAnimationActiveItemComplexAnimData {
	UAnimSequence* WarmUp; // 0x0
	UAnimSequence* HeavyWarmUp; // 0x8
	UAnimSequence* Action; // 0x10
	UAnimSequence* Recover; // 0x18
	UAnimSequence* HeavyAttackStunRecover; // 0x20
	EWieldableItemComplexOneShotAnimType AnimType; // 0x28
	float WarmUpPlaySpeed; // 0x2c
	char IsHeavyAttackActive : 1; // 0x30
};

struct FWalkConditionsParams {
	float WalkSpeedMultiplier; // 0x0
	float WalkStopThreshold; // 0x4
};

struct FEmissaryActionRewardData {
	TArray<FEmissaryEventAward> OwnershipChangedRewards; // 0x0
	TArray<FEmissaryEventAward> PlacedOnShipRewards; // 0x10
	FEmissaryKillPlayerReward KillPlayerReward; // 0x20
	TArray<FEmissaryGameEventsReward> GameEventsRewards; // 0x48
	TArray<FEmissaryEventAward> HandinRewards; // 0x58
	TArray<FEmissaryCompanyActionReward> CompanyActionRewards; // 0x68
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FEmissaryProgressUpdatedNetworkEvent : FNetworkEventStruct {
	float OldRepTotal; // 0x10
	float NewRepTotal; // 0x14
	FName CompanyId; // 0x18
};

struct FCloudTileParameters {
	TArray<FCloudTypeDefinition> Meshes; // 0x0
	int32_t Samples; // 0x10
	int32_t Seed; // 0x14
	float MeshScaleMultiplier; // 0x18
	bool ShouldCloudTileBeGenerated; // 0x1c
};

struct FEventCapstanDamageLevelChanged {
	AActor* Capstan; // 0x0
	int32_t DamageLevel; // 0x8
};

struct FContestShipSinkNetworkEvent : FNetworkEventStruct {
	FGuid CrewLiveryId; // 0x10
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FNotifyFrontendOfCurrentPirateStatus {
	bool Locked; // 0x0
};

struct FVoyageProposalsUpdatedEvent {
	TArray<FVoyageProposalDescViewModel> Entitlements; // 0x0
};

struct FSeasonProgressionUITelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<APlayerController> PlayerController; // 0x0
};

struct FEventDisableInteractionPoints {
	EShipCurseTag ShipCurseTag; // 0x0
	ECurseTag CurseTag; // 0x1
	TArray<AInteractableBase*> InteractionPointsToDisable; // 0x8
	float DurationToDisableFor; // 0x18
};

struct FShipPartsCataloguePartCustomisation {
	FString FriendlyName; // 0x0
	TArray<FPartCustomisation> Customisation; // 0x10
};

struct FAISpawnTypeParamsCollection {
	TArray<FWeightedAISpawnTypeParams> SpawnParams; // 0x8
};

struct FItemProxyImpactVfxParams {
	EPhysicalSurface SurfaceType; // 0x0
	UObject* Particles; // 0x8
};

struct FGeyserSpawnAngleOption {
	float Weight; // 0x0
	float Direction; // 0x4
	float Range; // 0x8
};

struct FCrewLeftAllianceTelemetryEvent {
	FGuid AllianceId; // 0x0
	FGuid LeavingCrewSessionId; // 0x10
};

struct FActorComponentSelector {
	FName ComponentName; // 0x0
	UActorComponent* CachedComponent; // 0x8
};

struct FPlayerDoesNotRequireMermaidTelemetryEvent {
	EPlayerAbandonedReason Reason; // 0x0
};

struct FClientNoteData {
	bool NotifyArrival; // 0x0
	TArray<FMysteriousNoteInfo> PendingNotes; // 0x8
};

struct FRequestPremiumShopOffersEvent {
	FString CatalogName; // 0x0
};

struct FTreasureSpawnedCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FAthenaAnimationKeyedInstrumentAnimData {
	UAnimSequence* Into; // 0x0
	UAnimSequence* Action; // 0x8
	UAnimSequence* Outof; // 0x10
};

struct FXMarksTheSpotQuestDesc : FQuestDesc {
	TArray<FTreasureData> Treasure; // 0x28
	UTexture* MapTexture; // 0x38
	UTexture* MapInventoryTexture; // 0x58
	float RotationFromNorth; // 0x78
	FGuid MapGroupGuid; // 0x7c
	TArray<UAIBoobyTrapSpawner*> BoobyTrapSpawners; // 0x90
	UTreasureMapItemDesc* OverrideTreasureMapItemDesc; // 0xa0
};

struct FKrakenTentacleDestroyedTelemetryEvent {
	FString KrakenId; // 0x0
};

struct FContestResultMessage {
	FGuid SessionId; // 0x0
	FString ContestType; // 0x10
	FString ShipType; // 0x20
	TArray<FContestCrewResultModel> CrewResults; // 0x30
	FDateTime TimestampUtc; // 0x40
};

struct FWaterSplashProbesContainer {
	TArray<FWaterSplashProbe> Probes; // 0x0
	float ProbeSamplingTime; // 0x10
};

struct FAttenuationSettings {
	char bAttenuate : 1; // 0x0
	char bSpatialize : 1; // 0x0
	char bAttenuateWithLPF : 1; // 0x0
	ESoundDistanceModel DistanceAlgorithm; // 0x4
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x8
	ESoundDistanceCalc DistanceType; // 0x88
	EAttenuationShape AttenuationShape; // 0x89
	float dBAttenuationAtMax; // 0x8c
	float OmniRadius; // 0x90
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0x94
	float RadiusMin; // 0x98
	float RadiusMax; // 0x9c
	FVector AttenuationShapeExtents; // 0xa0
	float ConeOffset; // 0xac
	float FalloffDistance; // 0xb0
	float LPFRadiusMin; // 0xb4
	float LPFRadiusMax; // 0xb8
};

struct FAIShipSingleWaveEncounterDescGenerationParams {
	TArray<FAIShipClassWeightedSizes> ShipClassWeightedSizes; // 0x0
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionVector* Distribution; // 0x30
};

struct FNoteDeletedEvent {
	FPirateIdentity PirateIdentity; // 0x0
	FGuid NoteId; // 0x78
};

struct FAthenaAICharacterControllerSpawnItemDescForItemCategory {
	UItemCategory* ItemCategory; // 0x0
	UItemDesc* ItemDesc; // 0x8
};

struct FPlayerTextChatMessage {
	FUniqueNetIdRepl SenderNetId; // 0x0
	FString GamerTag; // 0x18
	FString Text; // 0x28
	ENotificationType NotificationType; // 0x38
	FNotificationStickiness Stickiness; // 0x3c
};

struct FBellPlayerStats {
	TArray<FPlayerStat> StatsToFireUponBellRing; // 0x0
};

struct FAthenaAnimationDeath {
	FAthenaAnimationDeathData DeathData; // 0x8
	FAthenaAnimationDeathAnimData DeathAnimData; // 0x38
	UAthenaAnimationDeathDataAsset* DeathDataAsset; // 0x78
};

struct FCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FKrakenTentaclesChanceParams {
	int32_t NumberOfTentaclesSpawned; // 0x0
	FWeightedProbabilityRange ProbabilityRange; // 0x8
};

struct FWeightedProjectileMeshAnimationData {
	FRuntimeVectorCurve AnimationCurve; // 0x0
	float Weight; // 0x170
};

struct FEntitlementsUpdatedMessage {
	FPirateIdentity Identity; // 0x0
};

struct FEmblemDefinitionActiveDuration {
	bool HasActiveDuration; // 0x0
	FDateTime ActiveFrom; // 0x8
	FDateTime ActiveUntil; // 0x10
};

struct FSwallowedByKrakenActionStateParams {
	float FadeToBlackDuration; // 0x0
	float DeathDelayTime; // 0x4
};

struct FSittingActionStateConstructionInfo : FControlObjectActionStateConstructionInfo {
	FSittingActionStateParams SittingActionStateParams; // 0x48
};

struct FItemRequirementData {
	int32_t RequiredNumberToMatch; // 0x0
	TArray<UItemDesc*> RequiredItemsInLoadout; // 0x8
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	UDialogueSoundWaveProxy* Proxy; // 0x20
};

struct FDetailAppearenceDesc {
	FStringAssetReference Mesh; // 0x0
	TArray<FDetailAppearenceMaterialDesc> Materials; // 0x10
	FStringAssetReference CustomDepthMaterial; // 0x20
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FRichCurve SlomoCurve; // 0x18
};

struct FAggressiveGhostShipAnchorDropTelemetryEvent {
	FGuid ShipId; // 0x0
};

struct FPetReactedToFoodTelemetryEvent {
	FGuid FeedingInteractionId; // 0x0
	EPetFeedingReactionType FeedingReaction; // 0x10
};

struct FMinMaxAbilityRange {
	float MinDistanceToTarget; // 0x0
	float MaxDistanceToTarget; // 0x4
};

struct FWwiseNetworkRelationship {
	FName SwitchGroupName; // 0x0
	FName RemotePlayerSwitchValue; // 0x8
	FName LocalPlayerSwitchValue; // 0x10
};

struct FAddWorldEventData {
	FString EventType; // 0x0
	TMap<FString, FString> Parameters; // 0x10
};

struct FVoyageDisplayInformation {
	FText Title; // 0x0
	FText Description; // 0x38
	FString KeyArtUrl; // 0x70
	FString IconUrl; // 0x80
	int32_t RumouredHaulMin; // 0x90
	bool Locked; // 0x94
};

struct FProgressPoint {
	float Progress; // 0x0
	FString Image; // 0x8
};

struct FShroudBreakerSoftTearDownEvent {
	FGuid ShroudBreakerId; // 0x0
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FTestTelemetryFragmentWithInt {
	uint32_t ExampleFragmentProperty; // 0x0
};

struct FAthenaAnimationWeapon {
	FAthenaAnimationActiveItemComplexAnimData AnimData; // 0x18
	bool Attacking; // 0x50
	bool NewAttack; // 0x51
	FAthenaAnimationWeaponData WeaponData; // 0x58
};

struct FBootFlowStateQueryResponseEvent {
	FString StateName; // 0x0
};

struct FTaleQuestStateTelemetryEvent {
	FString TaleState; // 0x0
};

struct FEventCosmeticItemSpawnedOwnerNotification {
	AActor* CosmeticItemActor; // 0x0
};

struct FPlayerHeartbeatCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FPlayerActionCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString Action; // 0x28
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0x8
	FEdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x68
	FText Category; // 0x78
	uint64_t PropertyFlags; // 0xb0
	FName RepNotifyFunc; // 0xb8
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xc0
	FString DefaultValue; // 0xd0
};

struct FTriMeshCollisionData {
	TArray<FVector> Vertices; // 0x0
	TArray<FTriIndices> Indices; // 0x10
	char bFlipNormals : 1; // 0x20
};

struct FAIDioramaPawn {
	APawn* Pawn; // 0x0
};

struct FPlayerNonVerbalComponentTelemetry {
	AAthenaPlayerController* PlayerController; // 0x0
};

struct FEventPlayerPinnedMapTable {
	FVector2D PinWorldLocation; // 0x0
};

struct FControlPulleyActionStateConstructionInfo : FControlObjectActionStateConstructionInfo {
	EControllableObjectType ControllableType; // 0x48
	UAnalogInputId* AnalogInputId; // 0x50
	FControlPulleyActionStateParams ActionStateParamsOverride; // 0x58
	bool UseActionStateParamsOverride; // 0x8c
};

struct FCatalogTab {
	FString CatalogName; // 0x0
	FString CatalogDisplayName; // 0x10
	FString CatalogTabImageUrl; // 0x20
};

struct FMapTablePersistenceModel : FPersistenceModel {
	TArray<FVector2D> MapPins; // 0x0
};

struct FMermaidActivatedLocally {
	AMermaid* Mermaid; // 0x0
	bool IsForLocalPlayer; // 0x8
};

struct FCinematicEmissaryEvent {
	int32_t Level; // 0x0
	FName Tag; // 0x4
};

struct FEventOceanCrawlerAIBuffAudioRequest {
	bool IsBuffGiver; // 0x0
};

struct FOtherCrewMuteStateResponse {
	EMuteState MuteState; // 0x0
};

struct FUpdateSnapshotVersionData {
	FName Version; // 0x0
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	float StartEndFalloff; // 0x3c
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

struct FEmissaryLevelMultiplierModel {
	int32_t Level; // 0x0
	float Multiplier; // 0x4
};

struct FNPCBeckonGroupEntry {
	FString NPCGroup; // 0x0
	TArray<FNPCBeckonGestureEntry> NPCBeckonGestures; // 0x10
};

struct FActiveNPCDemands {
	TArray<uint32_t> NPCIdHashes; // 0x0
	TArray<FActiveCommodityDemands> NPCDemands; // 0x10
};

struct FScalableFloat {
	float Value; // 0x0
	FCurveTableRowHandle Curve; // 0x8
};

struct FWaterSlideActionStateConstructionInfo : FActorActionStateConstructionInfo {
	USceneComponent* SceneComponent; // 0x30
};

struct FAthenaCharacterDodgeParams {
	float DodgeCooldown; // 0x0
	float DodgeForce; // 0x4
	float GroundLaunchAngle; // 0x8
	bool DodgePerpendicularToGround; // 0xc
	bool Disabled; // 0xd
};

struct FVaultStateData : FActorStateData {
	bool IsActive; // 0x20
	float RewardPlinthSpawnX; // 0x24
	float RewardPlinthSpawnY; // 0x28
	float RewardPlinthSpawnZ; // 0x2c
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FOptionalPlayModeModel {
	TMap<FString, FString> OptionalPlayModeMap; // 0x0
};

struct FRequestEmblemProgressMessage {
	FPirateIdentity PirateIdentity; // 0x0
};

struct FFaunaAnimationCurrentPlayingAnimations {
	UBlendSpace1D* LandLocomotionA; // 0x0
	UBlendSpace1D* LandLocomotionB; // 0x8
	UBlendSpace1D* SeaLocomotionA; // 0x10
	UBlendSpace1D* SeaLocomotionB; // 0x18
	UBlendSpace1D* UnderwaterLocomotionA; // 0x20
	UBlendSpace1D* UnderwaterLocomotionB; // 0x28
	UAnimSequence* LandIdleA; // 0x30
	UAnimSequence* LandIdleB; // 0x38
	UAnimSequence* SeaIdleA; // 0x40
	UAnimSequence* SeaIdleB; // 0x48
	UAnimSequence* UnderwaterIdleA; // 0x50
	UAnimSequence* UnderwaterIdleB; // 0x58
};

struct FVomitScreenFX {
	float EnterDuration; // 0x0
	float FullOnDuration; // 0x4
	float ExitDuration; // 0x8
	float DebugInterval; // 0xc
};

struct FHeldStateSpecificBlendWeight {
	EAthenaAnimationPetHeldState HeldState; // 0x0
	float BlendWeight; // 0x4
};

struct FServiceMessagingUnsubscribedEvent {
	FString RoutingKey; // 0x0
};

struct FUpdateEmissaryValueForCompany {
	FGuid SessionId; // 0x0
	FName Company; // 0x10
	FGuid AssociatedCrew; // 0x18
	EBootyRewardType RewardType; // 0x28
	int32_t UpdateAmount; // 0x2c
};

struct FForcePlayerRespawnData {
	int32_t PlayerNetGUID; // 0x0
	bool bRespawnAsGhost; // 0x4
};

struct FPlayerPromptTelemetryEvent {
	FString Message; // 0x0
	FString Key; // 0x10
};

struct FTextureRenderData {
	UTexture* RenderTexture; // 0x0
	FVector2D ScreenPosition; // 0x8
	FVector2D ScreenSize; // 0x10
	FVector2D CoordinatePosition; // 0x18
	FVector2D CoordinateSize; // 0x20
	FLinearColor RenderColor; // 0x28
	EBlendMode BlendMode; // 0x38
	float Rotation; // 0x3c
	FVector2D PivotPoint; // 0x40
};

struct FContestScoreTelemetryFragment {
	TArray<FCrewScore> CrewScores; // 0x0
};

struct FClothingChestEquipClothingEvent {
	UClothingDesc* Desc; // 0x0
};

struct FFrontendCrewDefinition {
	TArray<FFrontendCrewMember> CrewMembers; // 0x0
};

struct FOrientedPoint {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
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

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	bool bEnableShadowCasting; // 0x8
};

struct FMastSnapshot {
	float Length; // 0x0
	float Angle; // 0x4
	float Damage; // 0x8
};

struct FSwimmingCreatureImpactAnimData {
	UAnimSequenceBase* ImpactAnim; // 0x0
	float MinDamageRange; // 0x8
	float MaxDamageRange; // 0xc
};

struct FWeaponProjectileParams {
	float Damage; // 0x0
	float DamageMultiplierAtMaximumRange; // 0x4
	float LifeTime; // 0x8
	float TrailFadeOutTime; // 0xc
	float Velocity; // 0x10
	float TimeBeforeApplyingGravity; // 0x14
	float DownForceVelocityFractionPerSecond; // 0x18
	float VelocityDampeningPerSecond; // 0x1c
	FLinearColor Color; // 0x20
	UImpactProjectileId* ProjectileId; // 0x30
	EHealthChangedReason HealthChangeReason; // 0x38
	FWeaponProjectileEffectParams ProjectileEffects; // 0x3c
	int32_t SuggestedMaxSimulationIterations; // 0xa4
	float SuggestedMinTickTimeSecs; // 0xa8
	float SuggestedMaxSimulationTimeStep; // 0xac
};

struct FHealthRegenState {
	float CurrentPoolAmount; // 0x0
	ERegenerationState State; // 0x4
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FRegionAssetsList {
	ENetworkRegion Region; // 0x0
	TArray<FStringAssetReference> CachedAssetsForRegion; // 0x8
};

struct FInteractableLightParams {
	bool DebugDraw; // 0x0
	bool IsSpotlight; // 0x1
	FName LightTag; // 0x4
	FInteractableLightState OnParameters; // 0x10
	FInteractableLightState OffParameters; // 0x90
};

struct FCharacterFootWaterImpactResult {
	FCharacterSocketFootWaterImpactResult SocketFootImpactResult; // 0x0
	int32_t FootIndex; // 0x1c
};

struct FEventAttachedRetractableToItemProxy {
	AActor* Item; // 0x0
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FWorldMapRequestWorldResponse {
	FWorldMapWorldData WorldData; // 0x0
};

struct FTestLevelMetadataEntry {
	FString Property; // 0x0
	FString Value; // 0x10
};

struct FWorldLocationBannerEvent {
	FGenericPopupAudioDescriptor Audio; // 0x0
	FString IconPath; // 0x40
	FString Text; // 0x50
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
	FString Keywords; // 0x20
};

struct FAchievementRemoteServiceLogTelemetry {
	FString UserId; // 0x0
	FString PirateId; // 0x10
	TArray<FString> LogLines; // 0x20
};

struct FPlayerRevivalCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FSirenAnimationDataStructure {
	FSirenAnimationLocomotion LocomotionAnims; // 0x0
	UCustomAnimationMontageDefinitionListingDataAsset* FullBodyMontageListings; // 0x48
	UAthenaAnimationWeaponDataAsset* AttackAnimationAsset; // 0x50
	FHitReactionAnimationData HitReactAnimationData; // 0x58
};

struct FCompanySkin {
	FStringAssetReference BackgroundImage; // 0x0
	FStringAssetReference RibbonImage; // 0x10
	EProgressStyle Style; // 0x20
	FString RankIncreaseAudioCue; // 0x28
	FString RankIncreaseStopAudioCue; // 0x38
	FString RankLevelUpAudioCue; // 0x48
	FString RankTriggerAudioCue; // 0x58
	FString EmissaryRankIncreaseAudioCue; // 0x68
	FString EmissaryRankIncreaseStopAudioCue; // 0x78
	FString EmissaryRankLevelUpAudioCue; // 0x88
	FString EmissaryRankTriggerAudioCue; // 0x98
	FString EmissaryRankLevelUpMusicCue; // 0xa8
};

struct FIngestedByKrakenActionStateParams {
	float StowItemsProgressThreshold; // 0x0
};

struct FViewVoyageBanners {
	EShowVoyageBannersState ShowIntroBanners; // 0x0
	EShowVoyageBannersState ShowOutroBanners; // 0x1
};

struct FEventShipSetSail {
	AActor* Ship; // 0x0
};

struct FEventCompanyDataResponse {
	TArray<FUICompanyData> CompanyData; // 0x0
};

struct FPetTurnToFaceData {
	FQuat EndRotation; // 0x0
	float RotationTime; // 0x10
};

struct FTreasureMapTextDesc {
	FText Pattern; // 0x0
	TArray<FTreasureMapTextEntry> Substitutions; // 0x38
};

struct FMessageInABottleVoyageEntry {
	FName FeatureFlag; // 0x0
	UVoyageRecipeDataAsset* VoyageRecipe; // 0x8
};

struct FEventShipEnteredSafeZone {
	AActor* Ship; // 0x0
};

struct FCollectorsChestItemSlotDefinition {
	TArray<UClass*> TargetObjectTypes; // 0x0
	FTransform RelativeTransform; // 0x10
};

struct FCookEndTelemetryEvent {
	FString ItemName; // 0x0
	ECookingState CookState; // 0x10
	FVector Location; // 0x14
	FGuid CookId; // 0x20
};

struct FDigSurfaceTypeParams {
	EPhysicalSurface SurfaceType; // 0x0
	FDigEventFxParams EnterGroundFx; // 0x8
	FDigEventFxParams LeaveGroundFx; // 0x20
};

struct FEventPetLeftHangout {
	AActor* Pet; // 0x0
};

struct FTestMessageInt64 {
	int64_t TestInt; // 0x0
};

struct FChecklistMapItemData {
	FTreasureMapTextDesc Description; // 0x0
	UTexture* IconImage; // 0x48
};

struct FNPCOnSurfaceFloodedLevel {
	float NormalisedWaterLevel; // 0x0
	ENPCOnSurfaceFloodedLevel FloodedLevel; // 0x4
};

struct FCargoRunItemDropOffData {
	FGuid PickUpId; // 0x0
	FGuid DeliveryLocationId; // 0x10
	int64_t DeliveryDeadlineTicks; // 0x20
};

struct FCharacterMovementComponentPreClothTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FParticleEventGPU_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	FName CustomName; // 0x8
	EGPUParticleCollisionEventLimit CollisionEventLimit; // 0x10
	TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18
};

struct FFaunaAnimationSnakeCharmStructure {
	UAnimSequence* CharmIn; // 0x0
	UAnimSequence* CharmLoop; // 0x8
	UAnimSequence* CharmOut; // 0x10
};

struct FAthenaAnimationDebugTrackingParams {
	bool TrackObjectActive; // 0x0
	bool TrackOverlayState; // 0x1
	bool TrackActiveAnimations; // 0x2
	bool TrackOverlayFlags; // 0x3
};

struct FPetFlyingStrategyProperties {
	UAIStrategyId* Strategy; // 0x0
	float ChanceOfFlying; // 0x8
	float MinFlyingMeshZOffset; // 0xc
	float MaxFlyingMeshZOffset; // 0x10
};

struct FEventSingleCompanyProgressUpdate {
	FUICompanyProgress Progress; // 0x0
};

struct FEventApplySingleStickSettings {
	EUseSingleStick UseSingleStick; // 0x0
};

struct FCompanyRankGradeData {
	URankDesc* Rank; // 0x0
	FStringAssetReference Ribbon; // 0x8
};

struct FCustomTriggerOverlap : FGameServerWebSocketEntityEvent {
	int32_t TriggerNetId; // 0x28
	int32_t OtherNetId; // 0x2c
};

struct FAthenaAnimationEmoteAnimations {
	FName EmoteName; // 0x0
	EEmoteSequenceType EmoteSequenceType; // 0x8
	UAnimSequence* OneShotSequence; // 0x10
	UAnimSequence* ContinuousIn; // 0x30
	TArray<UAnimSequence*> ContinuousCycle; // 0x50
	UAnimSequenceBase* EmotePreviewSequence; // 0x60
	UWieldableItemAnimationStoreId* UseWithObject; // 0x80
};

struct FEventPlayerCharacterInPuzzleVaultChanged {
	bool IsInPuzzleVault; // 0x0
	float CurrentWaterLevel; // 0x4
};

struct FAddStatusesData {
	int32_t ActorId; // 0x0
	TArray<FString> Statuses; // 0x8
};

struct FApplyDamageData {
	int32_t ActorId; // 0x0
	float Damage; // 0x4
	int32_t InstigatorId; // 0x8
	EHealthChangedReason Reason; // 0xc
};

struct FAggressiveGhostShipEncounterFormationLocationDesc {
	float ForwardOffsetInMetres; // 0x0
	FWeightedProbabilityRangeOfRanges ForwardOffsetVarianceInMetres; // 0x8
	float SidewaysOffsetInMetres; // 0x38
	FWeightedProbabilityRangeOfRanges SidewaysOffsetVarianceInMetres; // 0x40
};

struct FAthenaAnimationItemListingMappings {
	UAnimationDataStoreId* AnimDataBodyTypeID; // 0x0
	UAthenaAnimationItemListingAsset* ItemListing; // 0x8
};

struct FAthenaAnimationCapstanAnimData {
	UAnimSequence* Attach; // 0x0
	UAnimSequence* Detach; // 0x8
	TArray<UBlendSpace1D*> NeutralForce; // 0x10
	TArray<UBlendSpace1D*> PushForce; // 0x20
	TArray<UBlendSpace1D*> PullForce; // 0x30
	UBlendSpace1D* PullToNeutral; // 0x40
	UBlendSpace1D* PushToPull; // 0x48
	UBlendSpace1D* PullToPush; // 0x50
	float RemapSpeed; // 0x58
	UBlendSpace1D* UpperIntent; // 0x60
};

struct FAthenaAnimationObjectActionOneShotPlayingStruct {
	UAnimSequence* Action; // 0x0
	UAnimSequence* ActionVariant1; // 0x8
	UAnimSequence* ActionVariant2; // 0x10
	UAnimSequence* ActionVariant3; // 0x18
	UAnimSequence* ActionVariant4; // 0x20
};

struct FCompanyReputationProgressModel {
	FName CompanyId; // 0x0
	uint32_t Level; // 0x8
	uint32_t Xp; // 0xc
	FCompanyLevelDefinition NextCompanyLevel; // 0x10
	FString Sig; // 0x18
};

struct FAthenaAnimationHandHeldItemParams {
	bool LeftArmOverlayActive; // 0x0
	bool RightArmOverlayActive; // 0x1
	bool UpperBodyOverlayActive; // 0x2
	bool FullBodyOverlayActive; // 0x3
	bool SpineOverlayActive; // 0x4
	bool SpineLockActive; // 0x5
	bool ObjectActive; // 0x6
	bool ObjectOverrideStateActive; // 0x7
	FString OverlayAnimationName; // 0x8
	EItemPassiveState ObjectPassiveState; // 0x18
	bool QuickStow; // 0x19
	bool Reload; // 0x1a
	bool ContinuousInteractionCustomLocomotionEnabled; // 0x1b
};

struct FMovieSceneEvaluationTemplate {
	TMap<uint32_t, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FMovieSceneEvaluationField EvaluationField; // 0xa0
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
	FMovieSceneGenerationLedger Ledger; // 0x170
	char bHasLegacyTrackInstances : 1; // 0x218
	char bKeepStaleTracks : 1; // 0x218
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FAIDeadActionStateParams {
	float DeathDelay; // 0x0
};

struct FEventPetOwnerAssigned {
	AActor* Owner; // 0x0
};

struct FGameplayEffectSpecForRPC {
	UGameplayEffect* Def; // 0x0
	TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8
	FGameplayEffectContextHandle EffectContext; // 0x18
	FGameplayTagContainer AggregatedSourceTags; // 0x38
	FGameplayTagContainer AggregatedTargetTags; // 0x60
	float Level; // 0x88
};

struct FAggressiveGhostShipMineFormation {
	TArray<FVector2D> OffsetsInMetres; // 0x0
};

struct FLiquidProjectileImpactEvent {
	UImpactProjectileId* ProjectileType; // 0x0
};

struct FServerCameraFadeCompleteAckNetworkEvent : FNetworkEventStruct {
	EServerCameraFadeAckReason Reason; // 0x10
};

struct FToggleableAIShipServiceDataAssetFileLocation {
	FName ToggleName; // 0x0
	FStringAssetReference Location; // 0x8
};

struct FAggressiveGhostShipsEncounterHeightPerIslandOffsets {
	FName IslandName; // 0x0
	float EventSignalHeightOffset; // 0x8
};

struct FFuncStatEntry {
	FString Name; // 0x0
	uint64_t RPCId; // 0x10
	uint32_t Count; // 0x18
};

struct FEventKrakenAnimatedTentacleTakenDamage {
	int32_t TentacleIndex; // 0x0
};

struct FBuoyantObjectSpawnGroup {
	TArray<FBuoyantObjectSpawnDesc> Objects; // 0x0
};

struct FCurrentHealthInfo {
	float Health; // 0x0
	EHealthChangedReason LastChangedReason; // 0x4
	FVector_NetQuantize10 LastInstigatorLocation; // 0x8
	uint32_t HealthChangeCount; // 0x14
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FClientBootFlowStampSwapResultTelemetryEvent {
	FString FromStampId; // 0x0
	FString ToStampId; // 0x10
	bool StampSwapOccurred; // 0x20
};

struct FAchievementSailWithFlameOfFateColoursAboard {
	uint32_t RequiredTravelDistanceInMetres; // 0x0
	AShip* Ship; // 0x8
	TArray<AShipInteractableLight*> ShipLights; // 0x10
};

struct FShipLiveryRGBSwap {
	UMaterialInterface* TargetMaterial; // 0x0
	FName TargetParameterName; // 0x8
	FLinearColor TargetRGBValue; // 0x10
};

struct FAutomaticInstancingMeshComponentArray {
	TArray<UInstancedStaticMeshComponent*> Array; // 0x0
};

struct FPremiumCurrencyItemsResponseEvent {
	TArray<FPremiumCurrencyItem> PremiumCurrencyItems; // 0x0
};

struct FClientBootFlowExistingSessionsRetrievedTelemetryEvent {
	int32_t OfferedSessionIndex; // 0x0
	TArray<FClientBootFlowExistingSessionTelemetry> ExistingSessions; // 0x8
};

struct FEnvTraceData {
	int32_t VersionNum; // 0x0
	UNavigationQueryFilter* NavigationFilter; // 0x8
	FName OverrideNavMesh; // 0x10
	float ProjectDown; // 0x18
	float ProjectUp; // 0x1c
	float ExtentX; // 0x20
	float ExtentY; // 0x24
	float ExtentZ; // 0x28
	float PostProjectionVerticalOffset; // 0x2c
	ETraceTypeQuery TraceChannel; // 0x30
	ECollisionChannel SerializedChannel; // 0x31
	EEnvTraceShape TraceShape; // 0x32
	EEnvQueryTrace TraceMode; // 0x33
	char bTraceComplex : 1; // 0x34
	char bOnlyBlockingHits : 1; // 0x34
	char bCanTraceOnNavMesh : 1; // 0x34
	char bCanTraceOnGeometry : 1; // 0x34
	char bCanDisableTrace : 1; // 0x34
	char bCanProjectDown : 1; // 0x34
	bool bUseUpDownAsAbsoluteZStartAndEnd; // 0x38
	bool bUseSourceZAsEnd; // 0x39
};

struct FNavigationOptions {
	int32_t UpKeyID; // 0x0
	int32_t DownKeyID; // 0x4
	int32_t LeftKeyID; // 0x8
	int32_t RightKeyID; // 0xc
};

struct FThrottledProjectileTickPool {
	int32_t MaxNumberToTickPerFrame; // 0x0
	TArray<UImpactProjectileId*> Projectiles; // 0x8
};

struct FWwiseBinkSettings {
	FStringAssetReference PlayEvent; // 0x0
	FStringAssetReference StopEvent; // 0x10
	int32_t PreBufferCount; // 0x20
	TArray<FWwiseBinkTrackMappings> Mappings; // 0x28
};

struct FKrakenShipWrappingBehaviourWrapLocationParams {
	AKrakenShipWrappingTentacle* TentacleType; // 0x0
	FVector WrapLocationAnchorPoint; // 0x8
	FTransform TentacleHeadHoldShipLocation; // 0x20
	FKrakenShipWrappingBehaviourTentacleHeadLocations PortTentacleHeadLocations; // 0x50
	FKrakenShipWrappingBehaviourTentacleHeadLocations StarboardTentacleHeadLocations; // 0x70
	FKrakenDynamicsParams DynamicsParams; // 0x90
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FPlayerBucketScoopCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FLootSpawnedAtClueSite {
	UClueSiteType* SiteType; // 0x0
	FVector SiteLocation; // 0x8
	int32_t NumLoot; // 0x14
};

struct FMigrationActionStateParams {
	float ClientSetupResponseTimeout; // 0x0
};

struct FPlayerGeneratedMapsContainerUnregisterServerEventsRpc : FBoxedRpc {
	UObject* InPlayerGeneratedMapsContainerOwnerObject; // 0x10
};

struct FEventCurseCapstan {
	float DurationToToggleCapstanPosition; // 0x0
};

struct FQuestVariableAIDioramaDesc : FQuestVariable {
	FName ParamName; // 0x8
};

struct FIslandEventIconData {
	FIslandEventData EventData; // 0x0
	FIslandEventIcons IslandIcons; // 0x38
	FIslandEventIcons HeaderIcons; // 0x48
};

struct FNPCDialogOverrideTypeWithConditionalsUnit {
	UNPCDialogOverrideType* OverrideType; // 0x0
	TArray<UNPCDialogConditional*> Conditionals; // 0x8
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FPlayerBuriedItemServiceDataAssetMapStorePopulationHaul {
	float Weight; // 0x0
	FName MapName; // 0x4
	UVoyageLocationOnlyNamedIslandListDataAsset* NamedIslands; // 0x10
	FWeightedProbabilityRange NumXs; // 0x18
	UWeightedItemDescSpawnDataAsset* WeightedItemDescSpawnDataAsset; // 0x38
};

struct FServerPerformanceHeartbeatTelemetryEvent {
	float FrameMSAverage; // 0x0
	float FrameMSMin; // 0x4
	float FrameMSMax; // 0x8
	float FPSAverage; // 0xc
	float FPSMin; // 0x10
	float FPSMax; // 0x14
	uint64_t MemAvailPhyAvg; // 0x18
	uint64_t MemAvailPhyMin; // 0x20
	uint64_t MemAvailPhyMax; // 0x28
	uint64_t MemAvailVirAvg; // 0x30
	uint64_t MemAvailVirMin; // 0x38
	uint64_t MemAvailVirMax; // 0x40
	uint64_t MemUsedPhyAvg; // 0x48
	uint64_t MemUsedPhyMin; // 0x50
	uint64_t MemUsedPhyMax; // 0x58
	uint64_t MemUsedVirAvg; // 0x60
	uint64_t MemUsedVirMin; // 0x68
	uint64_t MemUsedVirMax; // 0x70
	int32_t NumOfPlayers; // 0x78
	int32_t NumOfAI; // 0x7c
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x18
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x28
	TArray<FColorParameterNameAndCurves> Colors; // 0x38
};

struct FCanShowTertiaryActionButton : FRadialInventoryEvent {
	bool CanShow; // 0x4
	FText Text; // 0x8
};

struct FSetToastHoldDurationMultiplier {
	float Multiplier; // 0x0
};

struct FAIBountySpawnerArchiveWaveEntry {
	int32_t NumPawnsToSpawn; // 0x0
};

struct FVoyageHandInEntry {
	UVoyageRecipeDataAsset* VoyageRecipe; // 0x0
	UItemDesc* Item; // 0x8
};

struct FStringAssetClassPairFeatureOverride {
	FName FeatureName; // 0x0
	UClass* AssetClass; // 0x8
};

struct FPlayerHeartbeatTelemetryEvent {
	FString MovementMode; // 0x0
	FString LocationOnShip; // 0x10
	float CurrentHealth; // 0x20
	int32_t ActiveTime; // 0x24
	int32_t IdleTime; // 0x28
	int32_t CurrentStateTime; // 0x2c
	int32_t MoveTimeStampReset; // 0x30
	int32_t MoveTimeStampExpired; // 0x34
	int32_t MoveDiscrepancyCorrections; // 0x38
	int32_t AverageNetActorConsiderCount; // 0x3c
	int32_t AverageNetActorEvaluatedCount; // 0x40
	int32_t AverageNetActorDormantCount; // 0x44
};

struct FInlineUserDefinedStructDetails {
	UScriptStruct* Struct; // 0x0
};

struct FAnimationLODParameters {
	int32_t MaxIKEntities; // 0x0
	float MaxIKDistance; // 0x4
	float MinLODSolverDistance; // 0x8
	float MinFootPlantingActiveDistance; // 0xc
};

struct FRequestCompanyShopOffersEvent {
	FString CatalogName; // 0x0
	FString CompanyId; // 0x10
};

struct FItemSpawnCustomServerEvent : FGlobalCustomServerEvent {
	FString ItemId; // 0x18
	FString ItemType; // 0x28
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FEventPetReactedToFood : FEventPetFoodBase {
	EPetFeedingReactionType ReactionType; // 0x10
};

struct FAnimNotifyWwiseObserver {
	UWwiseEvent* OnEventPosted; // 0x0
	bool PreventPlayingPostedEvent; // 0x8
	TArray<UWwiseEvent*> AdditionalEventsToTrigger; // 0x10
};

struct FTeleportActionStateParams {
	float FadeDuration; // 0x0
	float FadeEventTimeout; // 0x4
	float FadeServerTimeout; // 0x8
	FLinearColor FadeColour; // 0xc
	bool FadeAudio; // 0x1c
	float CharacterFadeCompleteTimeout; // 0x20
	float TeleportCompleteTimeout; // 0x24
	float TeleportNetRelevancyTimeout; // 0x28
};

struct FRequestJoinCrewEvent {
	int32_t CrewId; // 0x0
};

struct FEventCharacterStartedContinuousUse {
	UNotificationInputId* InputID; // 0x0
};

struct FAggressiveGhostShipSplineDataOffsets {
	float FormationForwardOffsetInMetres; // 0x0
	float FormationForwardOffsetVarianceInMetres; // 0x4
	float FormationForwardOffsetVarianceSpeed; // 0x8
	float FormationSidewaysOffsetInMetres; // 0xc
	float FormationSidewaysOffsetVarianceInMetres; // 0x10
	float FormationSidewaysOffsetVarianceSpeed; // 0x14
};

struct FFeatureToggledLevel {
	FName Feature; // 0x0
	FStringAssetReference Level; // 0x8
};

struct FSyncLoadPackageTelemetryEvent {
	FString ObjectName; // 0x0
	FString PackageName; // 0x10
};

struct FKrakenShipWrappingBehaviourDamageParams {
	float ChanceOfDamagingBottomDeckDamageHoles; // 0x0
	float ChanceThatExistingHolesWillBeDamaged; // 0x4
	int32_t LevelsOfDamage; // 0x8
	FWeightedProbabilityRangeOfRanges NumHolesToDamageRange; // 0x10
	FWeightedProbabilityRangeOfRanges DamageIntervalRange; // 0x40
};

struct FPlayerGeneratedMapsContainerHealthChangedCloseInventoryRpc : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FShipLiveryCatalogueEntry {
	FGuid Id; // 0x0
	FStringAssetReference Desc; // 0x10
	FStringAssetReference RowboatLiveryDesc; // 0x20
	TArray<FText> Names; // 0x30
	UShipSize* ShipSize; // 0x40
	bool AvailableToGame; // 0x48
	FName FeatureName; // 0x4c
	FText ShipTeamName; // 0x58
	FText ArenaCrewWelcomeMessage; // 0x90
	FText ShipUINotificationTeamName; // 0xc8
	UTexture* ShipScrollTeamIcon; // 0x100
	FStringAssetReference ShipToastTeamIcon; // 0x108
	FStringAssetReference ShipToastTeamBackgroundImage; // 0x118
	FStringAssetReference ShipToastForegroundArtWork; // 0x128
	FStringAssetReference ShipTeamBackgroundImage; // 0x138
	FName AudioEventName; // 0x148
	FStringAssetReference TeamTavernBannerTexture; // 0x150
	UTexture* CrewLiveryOverlayIcon; // 0x160
	bool AvailableWhenFeatureEnabled; // 0x168
	bool AvailableWhenFeatureDisabled; // 0x169
};

struct FRadialInventoryClearHighlight : FRadialInventoryEvent {
	int32_t RadialIdentifier; // 0x0
};

struct FUIPremiumStoreOpenEvent {
	bool IsFrontend; // 0x0
	FString SessionId; // 0x8
};

struct FEventExitedShip {
	AActor* Ship; // 0x0
	AActor* Actor; // 0x8
};

struct FDestroyAllExistingActorsByClassData {
	TArray<FString> ActorClassNames; // 0x0
};

struct FTaleQuestSelectWreckLocationTelemetryEvent {
	FString EventIdent; // 0x0
	int32_t NumLocations; // 0x10
	int32_t LocationIndex; // 0x14
	int32_t KeyIndex; // 0x18
	TArray<int32_t> FlagResponses; // 0x20
};

struct FQuestVariableBountyTargetArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FHttpResponseTelemetryFragmentInput : FTelemetryFragmentInput {
	FString Method; // 0x0
	FString Endpoint; // 0x10
	FString Context; // 0x20
	EHttpRequestTelemetryResult Result; // 0x30
	int32_t StatusCode; // 0x34
	int32_t DurationMS; // 0x38
	FString ResponseBody; // 0x40
	TArray<FString> ResponseHeaders; // 0x50
	int32_t Attempts; // 0x60
};

struct FEmissaryFlagMeshReferences {
	FStringAssetReference BackOfShipEmissaryFlagMeshAssetReference; // 0x0
	FStringAssetReference MastEmissaryFlagMeshAssetReference; // 0x10
};

struct FRumbleParameters {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
	UCameraShake* CameraShakeEffect; // 0x8
	bool Looping; // 0x10
	FName Tag; // 0x14
};

struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x8
	FSlateBrush SortPrimaryDescendingImage; // 0x98
	FSlateBrush SortSecondaryAscendingImage; // 0x128
	FSlateBrush SortSecondaryDescendingImage; // 0x1b8
	FSlateBrush NormalBrush; // 0x248
	FSlateBrush HoveredBrush; // 0x2d8
	FSlateBrush MenuDropdownImage; // 0x368
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x3f8
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488
};

struct FPlayerSetFlameOfFateEvent {
	AAthenaPlayerCharacter* PlayerCharacter; // 0x0
	UObject* Target; // 0x8
	EFlameOfFateType FlameOfFateType; // 0x10
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FServerTelemetryFragment {
	uint32_t ServerSequenceId; // 0x0
	FGuid ServerSessionId; // 0x4
	FString ServerBuildId; // 0x18
	FString ServerLocation; // 0x28
	FString ServerPlayMode; // 0x38
	FString PlayModeState; // 0x48
	bool ServerIsActive; // 0x58
	bool ServerIsXboxPadOnlySession; // 0x59
};

struct FLightningTarget {
	ELightningHitTarget TargetType; // 0x0
	float Chance; // 0x4
};

struct FInventoryInteractionUpdateEvent {
	TArray<FIInventoryItem> Current; // 0x0
	TArray<FIInventoryItem> Available; // 0x10
	TArray<FIInventoryItemDescription> Descriptions; // 0x20
};

struct FEventStatusMaterialEffectEnded {
	FName MaterialParamName; // 0x0
	FName CanShowMaterialParam; // 0x8
	float FadeOutAcceleration; // 0x10
};

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x28
	float OrthoWidth; // 0x2c
	float OrthoNearClipPlane; // 0x30
	float OrthoFarClipPlane; // 0x34
	float AspectRatio; // 0x38
	char bConstrainAspectRatio : 1; // 0x3c
	char bUseFieldOfViewForLOD : 1; // 0x3c
	ECameraProjectionMode ProjectionMode; // 0x40
	float PostProcessBlendWeight; // 0x44
	FPostProcessSettings PostProcessSettings; // 0x50
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FEventStartWield {
	TScriptInterface<Class> Object; // 0x0
};

struct FWeightedItemDescSpawnDataWithRandomQuantityResult {
	UItemSpawnData* ItemSpawnData; // 0x0
	bool CustomLifetimeManagement; // 0xc
};

struct FTypedStorageContainerContentTypeSelectorEntry {
	float Weight; // 0x0
	int32_t MinimumUses; // 0x4
	int32_t MaximumUses; // 0x8
	UItemCategory* ContentSpawnerType; // 0x10
};

struct FGetVolcanoesDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FVolcanoActorStateData> Data; // 0x8
};

struct FIconCaptureDataRow : FTableRowBase {
	UClass* CategoryClass; // 0x0
	FString MapToPositionIn; // 0x20
	UClass* CaptureProxyActor; // 0x30
	UClass* WieldableActorParent; // 0x50
	FName FolderPath; // 0x70
	TArray<FName> AssetSearchFolderPaths; // 0x78
};

struct FGameplayAbilityLocalAnimMontage {
	UAnimMontage* AnimMontage; // 0x0
	bool PlayBit; // 0x8
	FPredictionKey PredictionKey; // 0x10
	UGameplayAbility* AnimatingAbility; // 0x28
};

struct FSingleStickMappingAxis {
	FString BindingName; // 0x0
	bool Invert; // 0x10
};

struct FClientMeleeHitRegInfoTelemetryEvent {
	FGuid AttackId; // 0x0
	int32_t NumHits; // 0x10
	FString HitObjectId; // 0x18
	FString HitObjectType; // 0x28
	FString HitActorName; // 0x38
	bool IsDamageBlocked; // 0x48
};

struct FCrewServiceParams {
	float MinSafeDistanceToShip; // 0x0
	float SpawnDistAroundSunkenShip; // 0x4
	TArray<int32_t> VotesRequiredForSendToBrig; // 0x8
	TArray<int32_t> VotesRequiredForReleaseFromBrig; // 0x18
	TArray<int32_t> VotesRequiredForScuttleShip; // 0x28
	TArray<int32_t> VotesRequiredForChangeMatchmakingVisibility; // 0x38
	TArray<int32_t> VotesRequiredForArenaRivalVote; // 0x48
	float BrigMinReleaseTime; // 0x58
	float BrigServerTimeToRememberPastCrewMates; // 0x5c
};

struct FGameplayAbilityTargetingLocationInfo {
	EGameplayAbilityTargetingLocationType LocationType; // 0x10
	FTransform LiteralTransform; // 0x20
	AActor* SourceActor; // 0x50
	UMeshComponent* SourceComponent; // 0x58
	UGameplayAbility* SourceAbility; // 0x60
	FName SourceSocketName; // 0x68
};

struct FDirectorSettingEntry {
	UVoyageDescDataAsset* VoyageDesc; // 0x0
};

struct FPetPickedUpTelemetryEvent {
	bool IsOnPerch; // 0x0
};

struct FAnimNode_HIKPull : FAnimNode_HIKBase {
	float Alpha; // 0x48
	EHIKEffector Effector; // 0x4c
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FAthenaAIControllerTargetPickingData {
	FString TargetName; // 0x0
	bool BestTargetByScore; // 0x10
	bool IsCurrentTargetActor; // 0x11
	float TargetScore; // 0x14
	float DistScore; // 0x18
	float FacingScore; // 0x1c
	float TargetWeightScore; // 0x20
	float DamageScore; // 0x24
	float TargetDistance; // 0x28
	float TargetAngle; // 0x2c
	int32_t NumTargeting; // 0x30
	float RecentDamage; // 0x34
};

struct FTrackItemOwnershipEvent {
	AActor* TrackedItem; // 0x0
	TScriptInterface<Class> CrewMembershipInterface; // 0x8
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FEnableMovementDuringRadialEvent {
	bool EnableMovementDuringRadial; // 0x0
};

struct FAchievementUnlockedMessage {
	FPirateIdentity PirateIdentity; // 0x0
	FString AchievementId; // 0x78
};

struct FKrakenShipHittingBehaviourParams {
	UShipSize* ShipSize; // 0x0
	AKrakenAnimatedTentacle* TentacleType; // 0x8
	FWeightedProbabilityRangeOfRanges DamageRequiredToCancelImpact; // 0x10
	float CancellationThreshold; // 0x40
	float ImpactTime; // 0x44
	int32_t LevelsOfDamage; // 0x48
	TArray<FKrakenShipHittingBehaviourImpactParams> Configurations; // 0x50
};

struct FAISpawnerWave {
	float SpawnChance; // 0x0
	FWeightedProbabilityRange NumOfSpawnsInWave; // 0x8
	FAISpawnTypeParamsCollection SpawnTypeParamsOverride; // 0x28
	FWeightedProbabilityRangeOfRanges DelayBeforeWave; // 0x70
	FWeightedProbabilityRangeOfRanges DelayBetweenSpawns; // 0xa0
	FWeightedProbabilityRangeOfRanges DelayBeforeNextWaveIfSuccessful; // 0xd0
};

struct FAnimNode_Base {
	FExposedValueHandler EvaluateGraphExposedInputs; // 0x8
};

struct FAIShipGenerationParams {
	EAIShipEncounterType EncounterType; // 0x0
	EAIShipType ShipType; // 0x1
	UAthenaAIShipControllerParamsDataAsset* ShipControllerParams; // 0x8
	TArray<FAIShipSkeletonSkillsetOverride> SkillsetOverrides; // 0x10
	TArray<FWeightedAIShipCrewAmmoType> SkeletonAmmoTypeOverrides; // 0x20
	FAIShipContextDescDamageParams DamageParams; // 0x30
};

struct FSetShouldUseRevivalFlowData {
	int32_t PlayerNetGUID; // 0x0
	bool bShouldUseRevivalFlow; // 0x4
};

struct FContinuousHealthChange {
	float Rate; // 0x0
	float ChangeApplied; // 0x4
	EHealthChangedReason Reason; // 0x8
};

struct FInstancedRopeParams {
	FVector Start; // 0x0
	FVector End; // 0xc
	float Thickness; // 0x18
	float UVScale; // 0x1c
	float UVBase; // 0x20
	float UVOffset; // 0x24
	float Roughness; // 0x28
	FRopeCatenaryShapeParams Shape; // 0x2c
	FRopeCatenarySwingParams Swing; // 0x44
	FRopeCatenaryDynamicsParams Dynamics; // 0x4c
};

struct FAnimNode_HIKSolve : FAnimNode_HIKBase {
	float Alpha; // 0x48
	FComponentSpacePoseLink InputFKPose; // 0x50
	bool enablePullEngine; // 0x68
	bool enableBodyPartSolving; // 0x69
	bool enableLODSolver; // 0x6a
	bool enableLegsSNS; // 0x6b
	bool enableArmsSNS; // 0x6c
	bool boneLengthFromInputPose; // 0x6d
	bool bodyPartSolveLeftShoulder; // 0x6e
	bool bodyPartSolveRightShoulder; // 0x6f
	bool bodyPartSolveLeftArm; // 0x70
	bool bodyPartSolveRightArm; // 0x71
	bool bodyPartSolveLeftLeg; // 0x72
	bool bodyPartSolveRightLeg; // 0x73
	bool bodyPartSolveLeftHand; // 0x74
	bool bodyPartSolveRightHand; // 0x75
	bool bodyPartSolveLeftFoot; // 0x76
	bool bodyPartSolveRightFoot; // 0x77
	bool bodyPartSolveHead; // 0x78
	bool bodyPartSolveSpine; // 0x79
	bool checkOutputPoseContainsNaNs; // 0x7a
};

struct FCutsceneStateChangedEvent {
	ECutsceneActivatonState NewState; // 0x0
};

struct FKeyTakenEvent {
	AItemInfo* KeyTaken; // 0x0
};

struct FHttpClientComponentResponseEvent {
	bool Success; // 0x0
	FString Body; // 0x8
	FString Id; // 0x18
};

struct FSeaRock {
	FVector2D Location; // 0x0
	float Radius; // 0x8
};

struct FITavernBoardMap {
	TArray<FString> Creators; // 0x0
	FString IconPath; // 0x10
	float IconRotation; // 0x20
	FGuid Id; // 0x24
	bool IsAvailable; // 0x34
	FString Name; // 0x38
	EWorldRegion WorldRegion; // 0x48
};

struct FAmmoChangeEffectParams {
	float InputRangeMin; // 0x0
	float InputRangeMax; // 0x4
	float OutputRangeMin; // 0x8
	float OutputRangeMax; // 0xc
	float OutputRangeThreshold; // 0x10
	bool UseThresholdValueAsNewOutputRangeMax; // 0x14
	UCurveFloat* LerpSpeedCurve; // 0x18
	FScalarParameterValue ScalarParameterValue; // 0x20
};

struct FMerchantContract {
	TArray<FMerchantContractDeliveryRequest> DeliveryRequests; // 0x18
};

struct FEventCurrentWaterPlaneChange {
	UBaseWaterComponent* FormerWaterPlane; // 0x0
	UBaseWaterComponent* NewWaterPlane; // 0x8
};

struct FAggregateGeometry2D {
	TArray<FCircleElement2D> CircleElements; // 0x0
	TArray<FBoxElement2D> BoxElements; // 0x10
	TArray<FConvexElement2D> ConvexElements; // 0x20
};

struct FControlObjectActionStateParams : FDockToObjectActionStateParams {
	bool UndockToLastKnownLocation; // 0x10
	float UndockDuration; // 0x14
};

struct FMultipleNPCCompaniesRedirectionData {
	TArray<UCompany*> Companies; // 0x0
	FText VisitNPCTooltip; // 0x10
};

struct FCreateFogBankData {
	FVector2D Location; // 0x0
	float Density; // 0x8
	FVector SizeInKm; // 0xc
	float FadeDuration; // 0x18
};

struct FActiveGameplayCue : FFastArraySerializerItem {
	FGameplayTag GameplayCueTag; // 0x8
	FPredictionKey PredictionKey; // 0x10
	bool bPredictivelyRemoved; // 0x28
};

struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x0
	int32_t TargetLightMapUVChannel; // 0x4
	int32_t TargetLightMapResolution; // 0x8
	bool bImportVertexColors; // 0xc
	bool bPivotPointAtZero; // 0xd
	bool bMergePhysicsData; // 0xe
	bool bMergeMaterials; // 0xf
	bool bExportNormalMap; // 0x10
	bool bExportMetallicMap; // 0x11
	bool bExportRoughnessMap; // 0x12
	bool bExportSpecularMap; // 0x13
	int32_t MergedMaterialAtlasResolution; // 0x14
	bool bEnableCollisionMerging; // 0x18
	bool bUseRelativeTransform; // 0x19
	bool bMergeRelativeToFirstComponent; // 0x1a
	bool bDuplicateLODs; // 0x1b
	TArray<float> LODScreenSizes; // 0x20
	int32_t LODForCollision; // 0x30
};

struct FLobbyInviteCode {
	FString Code; // 0x0
	FString CreatedUtc; // 0x10
};

struct FHapticFeedbackDetails {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x80
};

struct FCargoRunQuestCrateEntries {
	FString Rarity; // 0x0
	int32_t CargoCount; // 0x10
};

struct FEventStorageContainerContentsChanged {
	UStorageContainerComponent* Source; // 0x0
};

struct FLoadoutPetCategory {
	FString PetEntitlementId; // 0x0
	FString PetCustomizationEntitlementId; // 0x10
	FString PetName; // 0x20
};

struct FEventCompanyScreenDisplayInformationResponse {
	FCompanyScreenInformation CompanyData; // 0x0
};

struct FFaunaAnimationEatingStructure {
	UAnimSequence* EatingNormal; // 0x0
	UAnimSequence* EatingStarving; // 0x8
};

struct FBarrelsOfPlentyDebugLocationEntry {
	FVector WorldSpacePosition; // 0x0
	float SinkTime; // 0xc
};

struct FSetCustomPlayerStartData {
	int32_t PlayerNetGUID; // 0x0
	int32_t PlayerStartActorNetID; // 0x4
};

struct FLightVisualisation {
	FActorComponentSelector TargetLight; // 0x0
	float TransitionTime; // 0x10
	float ActiveValue; // 0x14
	float InactiveValue; // 0x18
	ULightComponent* Light; // 0x20
};

struct FPlayerBuriedItemServiceItemDigUpRadiusSurfaceOverride {
	EPhysicalSurface SurfaceType; // 0x0
	float ItemDigUpRadius; // 0x4
};

struct FMainTutorialSequence : FTutorialSequence {
	FTutorialStepPlayIntroAnimatic PlayIntro; // 0xb8
	FTutorialStepEatBanana EatBanana; // 0x160
	FTutorialStepUseMap UseMap; // 0x2c0
	FTutorialStepBuyVoyage BuyVoyage; // 0x430
	FTutorialStepCycleWeapons CycleWeapons; // 0x548
	FTutorialStepSellTreasure SellTreasure; // 0x5c8
	FTutorialStepBuyClothes BuyClothes; // 0x850
	FTutorialStepReturnToStranger ReturnToStranger; // 0x8e8
	FTutorialStepBeginTallTale BeginTallTale; // 0xa48
	FTutorialStepEndOfTutorial EndOfTutorial; // 0xb10
};

struct FEventCompanyReputationCampaignInformation {
	FString CampaignId; // 0x0
	FString Title; // 0x10
	FString Description; // 0x20
	FCappedCount Progress; // 0x30
	FString ImageUrl; // 0x38
	bool MarkAsNew; // 0x48
	bool Locked; // 0x49
	FMoreInfoDetails MoreInfo; // 0x50
};

struct FContestUIDescriptions {
	UPopUpMessageDesc* NewMapDesc; // 0x0
	UPopUpMessageDesc* ShipSunkDesc; // 0x8
	FText ContestStartBlindText; // 0x10
	FText ContestEndBlindText; // 0x48
};

struct FMerchantItemGroupDesc {
	TArray<UMerchantQuestItemData*> Items; // 0x0
};

struct FWaterBarrelFeedbackLevel {
	float Strength; // 0x0
	UForceFeedbackEffect* Effect; // 0x8
};

struct FInteractableMechanismIslandData {
	FName IslandName; // 0x0
};

struct FKrakenShipWrappingBehaviourTentacleHeadLocations {
	TArray<FKrakenShipWrappingBehaviourNamedTransform> Near; // 0x0
	TArray<FKrakenShipWrappingBehaviourNamedTransform> Far; // 0x10
};

struct FTestMessageDateTime {
	FDateTime DateTime; // 0x0
};

struct FEntityCustomServerEvent : FCustomServerEvent {
	int32_t EntityNetId; // 0x18
};

struct FGameplayAbilitySpecHandle {
	int32_t Handle; // 0x0
};

struct FTrackedPlayerKillEntry {
	FString KilledPlayer; // 0x0
	int32_t KillCount; // 0x10
	float KillTime; // 0x14
};

struct FVoyageProposalCompanyAssetData {
	UCompany* Company; // 0x0
	FStringAssetReference OpenVoyageProposalMesh; // 0x8
	TArray<FVoyageProposalAssetData> Ranks; // 0x18
};

struct FBuoyancySampleMovementConfiguration {
	UCurveVector* CenterOfMassOffsetCurve; // 0x0
	TArray<FBuoyancySampleMovementConfigurationEntry> SampleMoveData; // 0x8
	float OverallBuoyancyScalar; // 0x18
	UCurveFloat* OverallBuoyancyScalarBlendCurve; // 0x20
	UCurveFloat* ProbeMovementBlendCurve; // 0x28
	float Duration; // 0x30
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType_InstancedStaticMesh* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FEventUserGameSettingsSetKeyBinding {
	EBindingSet BindingSet; // 0x0
	FString BindingName; // 0x8
	FString KeyName; // 0x18
};

struct FHIKBoneTransform {
	int32_t BoneID; // 0x0
	FVector Translation; // 0x4
	FQuat Orientation; // 0x10
	FVector Scale; // 0x20
};

struct FEventAthenaPlayerControllerEndingPlay {
	AAthenaPlayerController* Controller; // 0x0
};

struct FMobileInstancedStaticMeshLOD {
	float LODReduction; // 0x0
	float DistanceToLOD; // 0x4
};

struct FEventKrakenAnimatedTentacleAnimationStarted {
	UAnimSequence* Animation; // 0x0
};

struct FInitRHIDiagnosticTelemetryEvent {
	FString ErrorMessage; // 0x0
};

struct FSubstringAuditQueryData {
	TArray<FString> QueryStringArray; // 0x0
	int32_t SearchSetSize; // 0x10
	int32_t MemoryLimitForSet; // 0x14
};

struct FCrewMemberData {
	bool Vote; // 0x0
	char NumVotes; // 0x1
	EBrigState BrigState; // 0x2
	APlayerState* PlayerState; // 0x8
};

struct FEventVolcanoStateChanged {
	EVolcanoState State; // 0x0
};

struct FContestVoyageIslandData {
	FName IslandName; // 0x0
	int32_t MaxItemCountForIsland; // 0x8
};

struct FClassRedirect {
	FString ObjectName; // 0x0
	FString OldClassName; // 0x10
	FString NewClassName; // 0x20
	FString OldSubobjName; // 0x30
	FString NewSubobjName; // 0x40
	bool InstanceOnly; // 0x50
};

struct FPlayerGameStartVoyageTelemetryEvent {
	FString VoyageTitle; // 0x0
	FGuid VoyageId; // 0x10
	EVoyageJoinStatus JoinStatus; // 0x20
	bool IsTale; // 0x21
	bool IsStarlightTale; // 0x22
};

struct FFeatureLockedAIShipEncounterBattleGenerationParams {
	FName Feature; // 0x0
	FAIShipEncounterBattleGenerationParams Params; // 0x8
};

struct FUIPremiumStorePageTransitionTelemetryEvent {
	FString CurrentPage; // 0x0
	FString PreviousHighlight; // 0x10
	FString PreviousPage; // 0x20
	FString SessionId; // 0x30
	float TimeOnPreviousPage; // 0x40
};

struct FEventLocalPlayerSuperheatedWaterZoneChanged {
	bool IsInSuperheatedWaterZone; // 0x0
};

struct FEventBeginningToSink {
	AActor* Ship; // 0x0
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FCanShowQuaternaryActionButton : FRadialInventoryEvent {
	bool CanShow; // 0x4
	FText Text; // 0x8
};

struct FEventOwnedPawnFinishedDying {
	ECharacterDeathType DeathType; // 0x0
};

struct FHealthChangeAudio {
	EHealthChangedReason Reason; // 0x0
	UWwiseEvent* Sfx; // 0x8
};

struct FQuestDistributionFixedChaptersParams {
	bool UseProceduralQuestRewards; // 0x0
	int32_t NumChapters; // 0x4
	TArray<FChapterDataEntry> Chapters; // 0x8
};

struct FPlayerBuriedItemServiceHaulSizeEntry {
	FText Title; // 0x0
	int32_t MinHaulSize; // 0x38
};

struct FEventGhostShipDoorCreated {
	AGhostShipDoor* GhostShipDoor; // 0x0
};

struct FBountySpawnerAudioChangedNetworkEvent : FNetworkEventStruct {
	EBountySpawnerAudioState AudioState; // 0x10
	float Intensity; // 0x14
	EBountySpawnerType BountyType; // 0x18
	FVector BountyPosition; // 0x1c
};

struct FVelocityConeGroupParams {
	FRawDistributionFloat Angle; // 0x0
	FRawDistributionFloat Velocity; // 0x38
	FVector Direction; // 0x70
};

struct FCrewSessionOperationFailedTelemetryEvent {
	FString ErrorMessage; // 0x0
	int32_t OperationTypeCode; // 0x10
	bool WasCancelled; // 0x14
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FString TooltipDescription; // 0x40
	FText Category; // 0x50
	FText Keywords; // 0x88
	int32_t Grouping; // 0xc0
	int32_t SectionID; // 0xc4
};

struct FClientRequestCameraFadeCompleteAckNetworkEvent : FNetworkEventStruct {
	float AckTimeout; // 0x10
};

struct FLightingControllerPostProcessParams {
	FRainPostProcessSettings RainPostProcessParams; // 0x0
	FRainPostProcessSettings UnderwaterPostProcessParams; // 0xc0
	UMaterialInterface* PostProcessUnderWaterPrelightingMaterial; // 0x180
	UMaterialInterface* PostProcessUnderwaterCausticsMaterial; // 0x188
	UMaterialInterface* PostProcessDistortionMaterial; // 0x190
	UMaterialInterface* PostProcessColourOverlayMaterial; // 0x198
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x18
	float ElapsedTime; // 0x28
};

struct FEventExplosionIgnitedActor {
	AActor* IgnitedActor; // 0x0
};

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x2b0
	FSlateBrush ActiveBrush; // 0x340
	FSlateBrush ColorOverlayBrush; // 0x3d0
	FSlateBrush ForegroundBrush; // 0x460
	FSlateBrush HoveredBrush; // 0x4f0
	FSlateBrush ContentAreaBrush; // 0x580
	FSlateBrush TabWellBrush; // 0x610
	FMargin TabPadding; // 0x6a0
	float OverlapWidth; // 0x6b0
	FSlateColor FlashColor; // 0x6b8
};

struct FMergedCollisionActorsSimplification {
	FCollisionMergingSettings MergeCollisionSettings; // 0x0
	float MaxBoundRadius; // 0x4
	int32_t MinNumberOfComponentsToMerge; // 0x8
};

struct FUpdateScoreBalanceHUDEvent : FNetworkEventStruct {
	TArray<FContestLeaderboardEntry> ContestLeaderboard; // 0x10
};

struct FCreateStormData {
	FVector2D StormCentre; // 0x0
	float StormStrength; // 0x8
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
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x20
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

struct FEventWieldableItemUseStoppedAndFullyHidden {
	AActor* Item; // 0x0
	EPerspectiveTypes PerspectiveType; // 0x8
};

struct FAggressiveGhostShipDroppedMineTelemetryEvent {
	FGuid ShipId; // 0x0
};

struct FEventPetPickedUp {
	bool IsOnPerch; // 0x0
};

struct FSessionJoinThroughServiceRequestModel {
	FString OwningUserId; // 0x0
	FString SessionTemplateName; // 0x10
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
	EAngularConstraintMotion AngularSwing1Motion; // 0xa4
	EAngularConstraintMotion AngularTwistMotion; // 0xa5
	EAngularConstraintMotion AngularSwing2Motion; // 0xa6
	char bSwingLimitSoft : 1; // 0xa8
	char bTwistLimitSoft : 1; // 0xa8
	float Swing1LimitAngle; // 0xac
	float TwistLimitAngle; // 0xb0
	float Swing2LimitAngle; // 0xb4
	float SwingLimitStiffness; // 0xb8
	float SwingLimitDamping; // 0xbc
	float TwistLimitStiffness; // 0xc0
	float TwistLimitDamping; // 0xc4
	FRotator AngularRotationOffset; // 0xc8
	char bAngularBreakable : 1; // 0xd4
	float AngularBreakThreshold; // 0xd8
	char bLinearXPositionDrive : 1; // 0xdc
	char bLinearXVelocityDrive : 1; // 0xdc
	char bLinearYPositionDrive : 1; // 0xdc
	char bLinearYVelocityDrive : 1; // 0xdc
	char bLinearZPositionDrive : 1; // 0xdc
	char bLinearZVelocityDrive : 1; // 0xdc
	char bLinearPositionDrive : 1; // 0xdc
	char bLinearVelocityDrive : 1; // 0xdc
	FVector LinearPositionTarget; // 0xe0
	FVector LinearVelocityTarget; // 0xec
	float LinearDriveSpring; // 0xf8
	float LinearDriveDamping; // 0xfc
	float LinearDriveForceLimit; // 0x100
	char bSwingPositionDrive : 1; // 0x104
	char bSwingVelocityDrive : 1; // 0x104
	char bTwistPositionDrive : 1; // 0x104
	char bTwistVelocityDrive : 1; // 0x104
	char bAngularSlerpDrive : 1; // 0x104
	char bAngularOrientationDrive : 1; // 0x104
	char bEnableSwingDrive : 1; // 0x104
	char bEnableTwistDrive : 1; // 0x104
	char bAngularVelocityDrive : 1; // 0x105
	FQuat AngularPositionTarget; // 0x110
	EAngularDriveMode AngularDriveMode; // 0x120
	FRotator AngularOrientationTarget; // 0x124
	FVector AngularVelocityTarget; // 0x130
	float AngularDriveSpring; // 0x13c
	float AngularDriveDamping; // 0x140
	float AngularDriveForceLimit; // 0x144
};

struct FEventItemUseAINoiseEvent {
	float NoiseRange; // 0x0
	FName NoiseTag; // 0x4
};

struct FPlayerBuriedItemsMapTakenFromStoreTelemetryEvent {
	FGuid MapBundleId; // 0x0
	FGuid TakingCrewId; // 0x10
	FGuid TakingCrewSessionId; // 0x20
	FGuid MapId; // 0x30
	bool IsPlayerGenerated; // 0x40
};

struct FVoyageBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	FGuid VoyageId; // 0x0
};

struct FShantyPuzzleInteractionZoneDefinition {
	FVector Location; // 0x0
	float Radius; // 0xc
	EMusicalInstrumentType RequiredMusicalInstrumentType; // 0x10
	int32_t RequiredNumInteractors; // 0x14
};

struct FEventGhostShipLevelLoaded {
	int32_t LevelId; // 0x0
};

struct FCloudDomeParameters {
	float Width; // 0x0
	float DomeToTileProportion; // 0x4
	float Height; // 0x8
	float HighPressureExtraHeight; // 0xc
	float FadeProportion; // 0x10
	float DistanceCurvatureOvershoot; // 0x14
	float DistantStreetCloudRotation; // 0x18
	float ProportionOfCloudDomeToAlwaysUpdate; // 0x1c
	int32_t SplitRemainingCloudsOverThisManyUpdates; // 0x20
	bool UpdateClosestProportionEveryOtherFrame; // 0x24
	bool EnableDistanceCurvature; // 0x25
};

struct FEventAthenaLocalPlayerSetControllerId {
	int32_t ControllerId; // 0x0
};

struct FLandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x0
};

struct FCatalogOfferCommodity {
	UCompany* RequiredEmissary; // 0x0
	FCommoditySelectionType Type; // 0x8
	ECommodityDemand Demand; // 0x10
};

struct FCustomModeInfoModel {
	FString GameModeId; // 0x0
	FString UserId; // 0x10
	FString Name; // 0x20
	FString Description; // 0x30
	FString ControllerAddress; // 0x40
	bool ProgressionEnabled; // 0x50
};

struct FRetrieveAllPiratesRequestSuccessEvent {
	FUniqueNetIdRepl UserId; // 0x0
	TArray<FPirateProfile> PirateProfiles; // 0x18
	FGuid RequestID; // 0x28
};

struct FEventOwnedPawnStartedDying {
	ECharacterDeathType DeathType; // 0x0
	AActor* Instigator; // 0x8
};

struct FRewardGroupList {
	int32_t NumRewards; // 0x0
	TArray<FRewardGroup> RewardGroups; // 0x8
};

struct FTextboxFocusRequest {
	bool ShouldFocusTextbox; // 0x0
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FFireGridCellSelection {
	int32_t NumberOfAffectedCells; // 0x0
	int32_t AdjacencyRadius; // 0x4
	float ChanceToAffectCellsAbove; // 0x8
	float ChanceToAffectCellsBelow; // 0xc
	bool TreatDiagonalsAsAdjacent; // 0x10
	bool OverrideFirePropagationTimesForAffectedCells; // 0x11
	FFloatRange SidewaysPropagationTimeOverride; // 0x14
	FFloatRange UpwardPropagationTimeOverride; // 0x24
	FFloatRange DownwardPropagationTimeOverride; // 0x34
};

struct FServerTenancyTelemetryFragment {
	FString VmId; // 0x0
	FString InstanceId; // 0x10
	FString ClusterId; // 0x20
	FString GsiId; // 0x30
};

struct FEventFriendsListChanged {
	TArray<FString> FriendsList; // 0x0
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float ProxyPixelSize; // 0x4
	FMaterialSimplificationSettings StaticMeshMaterial; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x4c
	int32_t LandscapeExportLOD; // 0x50
	FMaterialSimplificationSettings LandscapeMaterial; // 0x54
	bool bRemoveDownwardFacingTriangles; // 0x98
	float CullAngleThreshold; // 0x9c
	bool bBakeFoliageToLandscape; // 0xa0
	bool bBakeGrassToLandscape; // 0xa1
	bool bGenerateMeshNormalMap; // 0xa2
	bool bGenerateMeshMetallicMap; // 0xa3
	bool bGenerateMeshRoughnessMap; // 0xa4
	bool bGenerateMeshSpecularMap; // 0xa5
	bool bGenerateLandscapeNormalMap; // 0xa6
	bool bGenerateLandscapeMetallicMap; // 0xa7
	bool bGenerateLandscapeRoughnessMap; // 0xa8
	bool bGenerateLandscapeSpecularMap; // 0xa9
};

struct FProjectileWeaponFiredTelemetryEvent {
	FGuid AttackId; // 0x0
	FGuid TelemetryAttackId; // 0x10
	FString DamagerType; // 0x20
	FString WeaponName; // 0x30
	bool WasLoaded; // 0x40
	bool WasAiming; // 0x41
	float RequesterLatencyMs; // 0x44
	float RequesterTimeOffset; // 0x48
};

struct FShowDeedProgressEvent {
	FDeedProgressDesc DeedProgressDesc; // 0x0
};

struct FVolcanoTargetChances {
	float OnTarget; // 0x0
	float NearMiss; // 0x4
	float Random; // 0x8
	FWeightedProbabilityRange OnTargetNumExtraShots; // 0x10
	FWeightedProbabilityRange NearMissNumExtraShots; // 0x30
	float CoolDownDuration; // 0x50
};

struct FLoadoutRepairTelemetryEventBase {
	int32_t PirateSeed; // 0x0
};

struct FBuriedBuriable {
	FVector Location; // 0x18
	float Radius; // 0x24
};

struct FTakeMapFromContainerRPC : FBoxedRpc {
	FNetSubObjectPtr Container; // 0x10
	FGuid MapToTake; // 0x24
};

struct FNonVerbalPhraseData {
	FText TextToBroadcast; // 0x0
	bool RequiresWieldedItemObjectNameAsArgument; // 0x38
	bool WieldedItemObjectNameIsNotLocalised; // 0x39
};

struct FGetCampfiresDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FCampfireStateData> Data; // 0x8
};

struct FGameplayAbilityRepAnimMontage {
	UAnimMontage* AnimMontage; // 0x0
	float PlayRate; // 0x8
	float Position; // 0xc
	float BlendTime; // 0x10
	char NextSectionID; // 0x14
	char IsStopped : 1; // 0x15
	char ForcePlayBit : 1; // 0x15
	FPredictionKey PredictionKey; // 0x18
};

struct FEventFinishedSpawning {
	ECharacterType SpawnType; // 0x10
};

struct FEventStatueThreatWasDamaged {
	FImpactDamageEvent ImpactDamageEvent; // 0x0
};

struct FAthenaAnimationObjectMeleeV2 {
	TArray<FAthenaAnimationObjectComplexOneShot> ComboAttacks; // 0x0
	TArray<FAthenaAnimationObjectComplexOneShot> ComboAttacksStatic; // 0x10
	TArray<FAthenaAnimationObjectComplexOneShot> SwimmingComboAttacks; // 0x20
	FAthenaAnimationObjectComplexOneShot HeavyAttack; // 0x30
	FAthenaAnimationObjectComplexOneShot SwimmingHeavyAttack; // 0x58
	TArray<FAthenaAnimationObjectMeleeV2SpecialAttack> SpecialAttacks; // 0x80
	UAnimSequence* BlockingMainInto; // 0x90
	UAnimSequence* BlockingIntoFromCombat; // 0x98
	UBlendSpace* BlockingMainBlendSpace; // 0xa0
	TArray<UAnimSequence*> BlockingFeedbackSequences; // 0xa8
	UAnimSequence* BlockingOut; // 0xb8
	UAnimSequence* BlockingMainIntoSwimming; // 0xc0
	UBlendSpace* BlockingMainBlendSpaceSwimming; // 0xc8
	TArray<UAnimSequence*> BlockingFeedbackSequencesSwimming; // 0xd0
	UAnimSequence* BlockingOutSwimming; // 0xe0
	FAthenaAnimationObjectJumpingAnimations BlockingJump; // 0xe8
	UBlendSpace* CombatLocomotion; // 0x108
	UAnimSequence* CombatLocomotionTurningLeft; // 0x110
	UAnimSequence* CombatLocomotionTurningRight; // 0x118
	UAnimSequence* CombatLocomotionTurnOut; // 0x120
	UBlendSpace* Dodge; // 0x128
	UBlendSpace* LungeWarmupLocomotion; // 0x130
	char AttacksRespectFullBodyFlag : 1; // 0x138
};

struct FTaleQuestToggledDefinition {
	FName FeatureToggle; // 0x0
	UObject* Definition; // 0x8
};

struct FSupplementalLoadout {
	FName Feature; // 0x0
	FStringAssetReference LoadoutAsset; // 0x8
};

struct FWaterSimPlane {
	UWaterId* WaterId; // 0x0
	UObject* WaterOwner; // 0x8
	FPlane NonFFTPlane; // 0x10
	bool bUseFFT; // 0x20
	bool bActive; // 0x21
	float FFTBasePlaneHeight; // 0x24
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FRemoveFogBankData {
	int32_t ActorId; // 0x0
};

struct FStaticMeshActorList {
	TArray<AStaticMeshActor*> Actors; // 0x0
};

struct FControlPulleyActionStateParams : FControlObjectActionStateParams {
	FLookAtOffsetParams LookAtOffsetParams; // 0x18
};

struct FPlayCutsceneNetworkEvent : FBoxedRpc {
	UCutsceneComponent* TargetComponent; // 0x10
	int32_t GroupIdx; // 0x18
	int32_t PoolIdx; // 0x1c
	int32_t VariantIdx; // 0x20
};

struct FWalletBalance {
	TArray<FWalletBalanceItem> Balances; // 0x0
};

struct FClothingChestUnequipClothingEvent {
	UClothingDesc* Desc; // 0x0
};

struct FShowInviteErrorModalEvent {
	FString Message; // 0x0
};

struct FExistingNPCToPhasedNPC {
	UClass* ExistingNPC; // 0x0
	UClass* PhasedNPC; // 0x20
};

struct FEventUseAlternateIdle {
	bool UseAlternateIdle; // 0x0
};

struct FFireCellStateTimingParams {
	FFloatRange KindleTime; // 0x0
	FFloatRange BurningTime; // 0x10
	FFloatRange RainExposureTime; // 0x20
	float CharringTime; // 0x30
	FFloatRange SmoulderingTime; // 0x34
	FFloatRange SteamingTime; // 0x44
	FFloatRange WetTime; // 0x54
	FFloatRange SidewaysPropagationTime; // 0x64
	FFloatRange UpwardPropagationTime; // 0x74
	FFloatRange DownwardPropagationTime; // 0x84
};

struct FEventReceiveAmmoStoreComponentState {
	UAmmoStoreComponent* Source; // 0x0
};

struct FLandmarkTreasureLocationEntry {
	FString LandmarkName; // 0x0
	TArray<FVector> Locations; // 0x10
};

struct FDistanceThrottledRandomParticleSystemPickerSurfaceTypeEntry {
	EPhysicalSurface SurfaceType; // 0x0
	FRandomParticleSystemPicker Effect; // 0x8
};

struct FBlendAdditiveValues {
	float HandAdditiveBlendValueON; // 0x0
	float HandAdditiveBlendValueOFF; // 0x4
	float FullBodyAdditiveBlendValueON; // 0x8
	float FullBodyAdditiveBlendValueOFF; // 0xc
};

struct FEventPetReactCancellation {
	AActor* ReactSource; // 0x0
	FName ReactId; // 0x8
};

struct FBeaconStateData : FActorStateData {
	EFlameOfFateType FlameOfFate; // 0x20
	bool IsLit; // 0x21
};

struct FEventUserGameSettingsFloatChanged {
	FName KeyName; // 0x0
	float Value; // 0x8
};

struct FLargeSessionServerEncounterDevTelemetryEvent {
	FString InitiatingUserId; // 0x0
	FString EncounteredUserId; // 0x10
	bool TaskSucceeded; // 0x20
};

struct FMovieSceneEventSectionData {
	TArray<float> KeyTimes; // 0x0
	TArray<FEventPayload> KeyValues; // 0x10
};

struct FEnvBoolParam : FEnvBoolParam_DEPRECATED {
	bool Value; // 0x0
	FName ParamName; // 0x4
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FCommodityDescWithRedeemId {
	FCommoditySelectionType RedeemId; // 0x0
	UItemDesc* RedeemItemDesc; // 0x8
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0xa8
};

struct FVaultKeyMapping {
	UItemDesc* VaultKey; // 0x0
	UItemDesc* VaultMedallion; // 0x8
};

struct FInventoryInteractionStowAllRequestEvent {
	FString ItemDesc; // 0x0
};

struct FAIShipSkeletonSkillsetOverride {
	FName SpawnLocationType; // 0x0
	FStringAssetReference Skillset; // 0x8
};

struct FHullDamageNamedParamSet {
	FName Name; // 0x0
	FHullDamageParamSet Params; // 0x10
};

struct FPlayerActionBaseTelemetryFragment {
	FString ObjectId; // 0x0
	FString ActionName; // 0x10
};

struct FTreasureSpawnedTelemetryEvent {
	FGuid BootyId; // 0x0
	EBootyTypes BootyType; // 0x10
	FString Rarity; // 0x18
	ESpawnedItemSource Source; // 0x28
	FString SourceId; // 0x30
	FVector TreasureLocation; // 0x40
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x40
	FSimplygonRemeshingSettings RemeshingSettings; // 0x98
	int32_t OverriddenLightMapRes; // 0xe8
	float LODDistance; // 0xec
	float ScreenSize; // 0xf0
	float MaxDeviation; // 0xf4
};

struct FAthenaAnimationObjectActionOneShotPlayingStructPitchOverride {
	UBlendSpace1D* Action; // 0x0
	UBlendSpace1D* ActionVariant1; // 0x8
	UBlendSpace1D* ActionVariant2; // 0x10
	UBlendSpace1D* ActionVariant3; // 0x18
	UBlendSpace1D* ActionVariant4; // 0x20
};

struct FTestSerializationObject {
	bool TestBool; // 0x0
	int32_t TestInt; // 0x4
	FString TestString; // 0x8
	FGuid TestGuid; // 0x18
};

struct FSteamAccountLinkRequest {
	FString NetworkToken; // 0x0
	FString NetworkAppId; // 0x10
	FString AppId; // 0x20
};

struct FClientReachedInGameTelemetryEvent {
	FGuid PlayerGameId; // 0x0
	FString SessionType; // 0x10
	FGuid MatchmakingAttemptId; // 0x20
};

struct FCompanySkillsetProgressions {
	UCompany* Company; // 0x0
	FTargetSkillsetProgressionPair TargetSkillsets; // 0x8
};

struct FSerialisedConstructionInfoStore {
	FSerialisedActionStateInfo SerialisedConstructionInfo[0x5]; // 0x0
};

struct FSwimmingCreatureMovementReplicatedData {
	FVector CurrentServerGoalLocation; // 0x0
	FRotationUpdateResult CurrentServerRotationData; // 0xc
	float CurrentServerMaxSpeed; // 0x24
	float CurrentServerVelocitySmoothingFactor; // 0x28
	bool CurrentServerIsSharkArcCorrectionTurn; // 0x2c
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FWaterSpout {
	FTransform SpoutLocatorTransform; // 0x0
	UParticleSystemComponent* SpoutParticleSystem; // 0x30
	UParticleSystemComponent* SplashParticleSystem; // 0x38
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	UVertexAnimation* VertexAnimToPlay; // 0x8
	char bSavedLooping : 1; // 0x10
	char bSavedPlaying : 1; // 0x10
	float SavedPosition; // 0x14
	float SavedPlayRate; // 0x18
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FAthenaAnimationWheel {
	FSocketId LeftHandMaleSocket; // 0x0
	FSocketId RightHandMaleSocket; // 0x20
	FSocketId LeftHandFemaleSocket; // 0x40
	FSocketId RightHandFemaleSocket; // 0x60
	float TranslationStrength; // 0x80
	float RotationStrength; // 0x84
	float BlendInSpeed; // 0x88
	float BlendOutSpeed; // 0x8c
	FHandOnWheelAnimationRanges HandOnWheelAnimationRanges; // 0x90
	FWheelIKActivationRanges WheelArmIKDownWithinRange; // 0xd0
	EWheelAnimationType WheelAnimationType; // 0x110
	float WheelTime; // 0x114
	float WheelDirection; // 0x118
	float RightFingerAlpha; // 0x11c
	float LeftFingerAlpha; // 0x120
	float FullBodyAlpha; // 0x124
	float WheelDockingHandClaspAlpha; // 0x128
	bool LeftWheelArmDown; // 0x12c
	bool RightWheelArmDown; // 0x12d
	AActor* ControlledObject; // 0x130
};

struct FMastSailAngleChangedEvent {
	float Angle; // 0x0
	float DeltaTime; // 0x4
	float SailTurnRate; // 0x8
};

struct FCanvasWorldMapGeneric {
	AActor* MarkerActor; // 0x0
	UTexture* Icon; // 0x8
	FVector Location; // 0x10
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

struct FContestRequestScoreBoardData : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FEmblemRuntimeDefinition {
	UPopUpMessageDesc* UnlockPopUp; // 0x130
	UPopUpAudioDesc* UnlockPopUpAudioOverrides; // 0x138
};

struct FTunnelOfTheDamnedInstance {
	TScriptInterface<Class> Locator; // 0x0
	TScriptInterface<Class> ActiveInstance; // 0x10
};

struct FDestroyingUnsafeWreckEvent {
	FVector Location; // 0x0
	FGuid CrewId; // 0xc
	bool IsCustomWreck; // 0x1c
};

struct FAthenaAnimationActionRelevancy {
	bool UsePrimary; // 0x0
	bool UsePrimaryAlt; // 0x1
	bool UseSecondary; // 0x2
	bool UseSecondaryAlt; // 0x3
};

struct FCrewWinEvent {
	EContestScoreId ScoreId; // 0x0
	FGuid CrewId; // 0x4
	int32_t CrewScore; // 0x14
	EScoreReason ReasonForScoring; // 0x18
};

struct FCutsceneTriggerEditorOnlyData {
	bool AlwaysShowCutsceneName; // 0x0
	bool AlwaysShowShapeComponentOutlines; // 0x1
	bool PrintStateChangesToScreen; // 0x2
};

struct FAthenaAnimationSitting {
	FAthenaAnimationSittingAnimData SittingAnimData; // 0x0
	bool AnimationLoaded; // 0x10
	UAthenaAnimationSittingDataAsset* SittingDataAsset; // 0x18
};

struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x18
	char bHasBeenSimplified : 1; // 0x28
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x30
	FSimplygonRemeshingSettings RemeshingSettings; // 0xa0
};

struct FKrakenAnimatedTentacleStateAnimationMapping {
	UKrakenAnimatedTentacleState* State; // 0x0
	UAnimSequence* Animation; // 0x8
	bool Loop; // 0x10
	TArray<FKrakenAnimatedTentacleTransitionAnimation> Transitions; // 0x18
};

struct FAthenaStreamedLevelData {
	int32_t LevelId; // 0x0
	FName PackagePath; // 0x4
	TArray<ULevelStreaming*> Levels; // 0x10
	TMap<FString, FName> LevelPaths; // 0x20
};

struct FToggledSpawnerOverride {
	UAISpawner* Spawner; // 0x0
	FName Toggle; // 0x8
};

struct FConditionalHandInStat {
	FPlayerStat Stat; // 0x18
};

struct FQuestBootyItemPopUpEntry {
	FName BootyItemIdentifier; // 0x0
	UPopUpMessageDesc* PopUp; // 0x8
};

struct FFogVolumeInfo {
	UFogVolumeComponent* Component; // 0x0
	UTexture* VolumeTexture; // 0x100
	UTexture* MeshFogVolumeTexture; // 0x108
};

struct FRequestRealMoneyPurchasePremiumShopOfferEvent {
	FGuid OfferId; // 0x0
	FString CatalogName; // 0x10
};

struct FPhasedItem {
	AItemProxy* ItemProxy; // 0x0
	AItemInfo* ItemInfo; // 0x8
	bool Tracked; // 0x10
};

struct FSoundBankFailureTelemetryEntry {
	uint32_t BankID; // 0x0
	uint32_t FailureReason; // 0x4
};

struct FEventPlayerLeftIslandVicinity {
	AActor* Player; // 0x0
	FName IslandName; // 0x10
};

struct FRadialInstance {
	FText Name; // 0x8
	URadialContentRule* Content; // 0x40
	URadialAction* PrimaryAction; // 0x48
	URadialAction* SecondaryAction; // 0x50
	URadialAction* TertiaryAction; // 0x58
	URadialAction* QuaternaryAction; // 0x60
	URadialManagerInputComponent* InputComponent; // 0x68
	URadialInputBinder* RadialInputBinder; // 0x70
	bool ShouldActionsUpdateWhenContextChanges; // 0x90
	bool ShouldContentUpdateWhenContextChanges; // 0x91
	bool ShouldRadialCloseWhenWieldingNewItem; // 0x92
	bool ShouldRadialCloseWhenStowingWieldedItem; // 0x93
};

struct FRewindPhysicsServiceEntry {
	URewindComponent* Rewindable; // 0x0
};

struct FPromptCountersModel {
	TMap<FString, int32_t> PromptCounters; // 0x0
};

struct FActionStatePriorityRelationship {
	UActionStateId* State; // 0x0
	EActionStatePriority Priority; // 0x8
};

struct FCrewSessionBaseSessionTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	FCrewSessionTelemetry Session; // 0x10
};

struct FTreasureLocationData {
	FVector WorldSpaceLocation; // 0x0
	FVector IslandSpaceLocation; // 0xc
	FVector2D MapSpaceLocation; // 0x18
};

struct FGenericNotificationUIEvent {
	TArray<FText> Text; // 0x0
	TArray<FString> Images; // 0x10
	FString Background; // 0x20
	TArray<FString> FlagIcons; // 0x30
	FGenericPopupAudioDescriptor Audio; // 0x40
	TArray<EStyleModifiers> StyleModifiers; // 0x80
	bool OnlyPlayAudio; // 0x90
	bool PlayAudio; // 0x91
	float HoldDuration; // 0x94
	int32_t Multiplier; // 0x98
};

struct FEventKrakenDespawned {
	EKrakenDespawnReason DespawnReason; // 0x0
};

struct FRowboatStrainDamageData {
	float StormDamageScalar; // 0x0
	float WaterStrengthToCountAsStorm; // 0x4
	float StormStrengthThresholdForDamage; // 0x8
	float MinStormDamageFrequencyInSeconds; // 0xc
	float MaxStormDamageFrequencyInSeconds; // 0x10
	float WorldEdgeDamageScalar; // 0x14
	float MinWorldEdgeDamageFrequencyInSeconds; // 0x18
	float MaxWorldEdgeDamageFrequencyInSeconds; // 0x1c
};

struct FAssetAuditConstants {
	TArray<FAssetAuditConstantEntry> AssetAuditConstants; // 0x0
};

struct FEventFallWithDamageLegNotBroken {
	FName RumbleTag; // 0x0
};

struct FCollectorsChestStoredItemInfo {
	AItemInfo* ItemInfo; // 0x0
	TWeakObjectPtr<USceneComponent> SourceAttachParent; // 0x8
	FName SourceAttachSocket; // 0x10
	int64_t ItemStoreTimestamp; // 0x18
	FItemSnapshot StoredItemSnapshot; // 0x20
};

struct FCollectorsChestMetaWrapper : FItemMetaBase {
	TArray<FItemSnapshot> StoredItemSnapshots; // 0x18
};

struct FAthenaAnimationSkeletonSensingParams {
	TArray<FAthenaAnimationSkeletonSensingAnimations> AllLoadedAISensingAnimations; // 0x0
	ESkeletonSensingState CurrentSensingState; // 0x10
	UAnimSequence* InitialReactionAnimation; // 0x18
	UBlendSpace1D* SearchingAnimation; // 0x20
	UAnimSequence* AlertingOthersAnimation; // 0x28
	UBlendSpace1D* PursuitAnimation; // 0x30
};

struct FEventNamedProgressLocationCreated {
	AProgressSpawnLocation* SpawnLocation; // 0x0
};

struct FEventReceiveQuestBookPagesInContainerComponentState {
	UQuestBookPagesInContainerComponent* Source; // 0x0
};

struct FServerMigrationTelemetryActorData {
	UClass* ActorClass; // 0x0
	int32_t Count; // 0x20
};

struct FTaleActorSpawnParameters {
	bool Tracked; // 0x0
	bool GatherForMigration; // 0x1
	bool DeferredSpawning; // 0x2
};

struct FDestroyMysteriousNoteData {
	int32_t PlayerNetGUID; // 0x0
	FGuid NoteGUID; // 0x4
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

struct FCrewMutePlayerChatEvent {
	FString XUID; // 0x0
	bool IsMuted; // 0x10
};

struct FAITypeData {
	FName AITypeName; // 0x0
	FStringClassReference AIPawnClass; // 0x8
	FStringAssetReference DefaultDebugSkillset; // 0x18
	FStringAssetReference DefaultDebugLoadout; // 0x28
	UAIClassId* DefaultDebugAIClassId; // 0x38
	bool RequireNavMesh; // 0x40
	int32_t AIRegionCostUnits; // 0x44
	int32_t AIWorldCostUnits; // 0x48
	FName FeatureToggle; // 0x4c
};

struct FQuestVariableActorAssetTypeArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FTestActionStateSerialisableData : FActionStateSerialisableData {
	int32_t IntProp; // 0x30
};

struct FInviteFriendRequest {
	FString XUID; // 0x0
	EPlatformId Platform; // 0x10
};

struct FVisibleSessionTypeSelectionResponseEvent {
	ESessionVisibility SessionVisibility; // 0x0
	ECrewSessionType SessionType; // 0x1
	EPlayMode SelectedPlayMode; // 0x2
	ESessionGrouping SessionGrouping; // 0x3
	ESessionStyle SessionStyle; // 0x4
};

struct FKrakenServiceSpawnParams {
	float SpawnLocationDistributionRadius; // 0x0
	float SpawnLocationDistributionMinDistanceBetweenPoints; // 0x4
	float SpawnDistanceInFrontOfShip; // 0x8
	FWeightedProbabilityRangeOfRanges TimeBetweenSpawnAttemptsRange; // 0x10
	FWeightedProbabilityRangeOfRanges TimeBetweenSpawnAttemptsPostSpawnFailure; // 0x40
	float SpawnChance; // 0x70
	int32_t MaxConsecutiveFailedSpawnAttempts; // 0x74
	UEnvQuery* SpawnLocationQuery; // 0x78
};

struct FIPGCompatibleSet {
	FName SetName; // 0x0
};

struct FVolcanoSetupDataEmbersEntry {
	float MaxDistanceInMetres; // 0x0
	UObject* Effect; // 0x8
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FPirateCreationEvent_UserConfirmationResponse {
	bool ShouldSavePirate; // 0x0
};

struct FTestInvalidStringMapSerializationObject {
	TMap<int32_t, FString> StringMap; // 0x0
};

struct FIndividualMeshConsumer {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x18
	TArray<UMaterialInterface*> OverrideFallbackMaterials; // 0x28
};

struct FGameplayEffectAttributeCaptureSpec {
	FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x0
};

struct FNPCCustomAnimationBlueprintData {
	bool SequenceActive; // 0x0
	bool LoopActive; // 0x1
	int32_t ActiveSequenceIndex; // 0x4
	bool IsOneShot; // 0x8
	FNPCCustomAnimationBlueprintPlayingAnimations BlueprintPlayingAnimations; // 0x10
	FNPCCustomAnimationBlueprintPlayingMontage BlueprintPlayingFacialMontages; // 0x38
	ENPCCustomAnimationState CustomAnimationState; // 0x60
};

struct FFriendsListResponse {
	TArray<FFriendViewModel> Friends; // 0x0
};

struct FCompanyReputationProgressModelCollection {
	TArray<FCompanyReputationProgressModel> CompanyProgress; // 0x0
};

struct FAthenaAnimationMountedWeapon {
	bool IsFiring; // 0x0
	float Pitch; // 0x4
	float Yaw; // 0x8
	AActor* ControlledObject; // 0x10
};

struct FTakeAllItemsFromContainerRPC : FBoxedRpc {
	FNetSubObjectPtr Container; // 0x10
	int32_t IndexToTake; // 0x24
};

struct FIntentPredictorParams {
	float MaxError; // 0x0
	float MinError; // 0x4
	float MinCorrectionVelocity; // 0x8
	float MinValue; // 0xc
	float MaxValue; // 0x10
	bool WrapCorrectionToValueRange; // 0x14
};

struct FSeaClueCreationChoice {
	UClueSiteType* SiteType; // 0x0
	USeaClueCreator* ClueCreator; // 0x8
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FEventWieldableItemDropped {
	UItemCategory* DroppedItemCategory; // 0x0
	AActor* ContactActor; // 0x8
	float DropDistance; // 0x10
	bool InDeepWater; // 0x14
};

struct FAIFormDamageResponse {
	UDamagerType* DamagerType; // 0x0
	float DamageMultiplier; // 0x8
	ECharacterHitReactionAnimType HitReaction; // 0xc
	bool IsKnockbackDisabled; // 0xd
	bool IsStunDisabled; // 0xe
};

struct FAITargetBounds {
	FVector Offset; // 0x0
	FVector Extents; // 0xc
};

struct FSnapshottedActorData {
	TScriptInterface<Class> Instagator; // 0x0
	FGuid SnapshotID; // 0x10
	bool ActorWasCritical; // 0x20
	bool ActorWasTracked; // 0x21
	FText FailureMessage; // 0x28
};

struct FContestMapCrewData {
	FGuid CrewId; // 0x0
	bool IsLocalCrew; // 0x10
	UTexture* CrewIcon; // 0x18
	UTexture* ScoreIcon; // 0x20
	UTexture* UnderlineIcon; // 0x28
	FName CrewName; // 0x30
	int32_t Score; // 0x38
};

struct FPlayerBaseTelemetryFragment {
	FGuid PlayerGameId; // 0x0
	FString UserId; // 0x10
	FString PirateId; // 0x20
	char PlatformId; // 0x30
	FString DeviceID; // 0x38
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FShipBaseTelemetryFragment {
	FString ShipObjectId; // 0x0
	FVector Position; // 0x10
	FGuid CrewId; // 0x1c
	FGuid CrewSessionId; // 0x2c
	FGuid ShipId; // 0x3c
	FString ShipSize; // 0x50
};

struct FRadialActionBindings {
	FName PrimaryActionKeyBinding; // 0x0
	FName SecondaryActionKeyBinding; // 0x8
	FName TertiaryActionKeyBinding; // 0x10
	FName QuaternaryActionKeyBinding; // 0x18
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

struct FShipHullLandscapeDamageEntry {
	EPhysicalSurface PhysicalSurface; // 0x0
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x8
	FInt32Range NumZonesToDamage; // 0x10
	FInt32Range DamageLevel; // 0x20
};

struct FVoyageProposalCompletedNetworkEvent : FNetworkEventStruct {
	TArray<FString> VoyageProposalIds; // 0x10
};

struct FIInventoryItemDescription {
	FString ThumbnailImageUrl; // 0x0
	FString PreviewImageUrl; // 0x10
	FString DisplayName; // 0x20
	FString Description; // 0x30
	FString ItemDesc; // 0x40
	UItemDesc* DescKey; // 0x50
};

struct FAggressiveGhostShipLocationEntryDesc {
	float Weight; // 0x0
	UAggressiveGhostShipLocationDataAsset* Location; // 0x8
};

struct FAthenaAnimationFirstPersonTurnDelayStates {
	FAthenaAnimationFirstPersonTurnDelay PassiveState; // 0x0
	FAthenaAnimationFirstPersonTurnDelay ContinuousUse; // 0xc
	float TurnDelayAngle; // 0x18
	float InvTurnDelayAngle; // 0x1c
};

struct FPlayerJoinCrewInProgressRequestMessage {
	FGuid CrewId; // 0x0
	FUniqueNetIdRepl UserId; // 0x10
	FString PirateId; // 0x28
	ECrewSessionType SessionType; // 0x38
};

struct FPlayerVoyageProposalVoteTelemetryEvent {
	FGuid VoyageProposalSessionId; // 0x0
	int32_t VoyageProposalSlot; // 0x10
	FString VoyageProposalEntitlementId; // 0x18
};

struct FBeingRetractedActionStateConstructionInfo : FActorActionStateConstructionInfo {
	USceneComponent* RetractingComponent; // 0x30
};

struct FShipCustomizationChestUnequipShipCustomizationEvent {
	UShipCustomizationDesc* Desc; // 0x0
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FWheelSnapshot {
	float Angle; // 0x0
	float MaxAngle; // 0x4
};

struct FRevivedActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FDynamicMaterialsList {
	TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> Materials; // 0x0
};

struct FReplicatedFireCellCharringData {
	float MaxCharringTime; // 0x0
	TArray<float> TimeSpentCharring; // 0x8
};

struct FAudioDataTelemetryFragment {
	uint32_t WwiseDefaultPoolMemoryUsage; // 0x0
	uint32_t WwiseTotalMemoryUsage; // 0x4
	uint32_t WwiseTotalMediaMemoryUsage; // 0x8
	uint32_t TritonMemoryUsage; // 0xc
	uint8_t WwiseKWeightedOutput; // 0x10
	uint32_t OutputClippingCount; // 0x14
	uint8_t NonUIBusKWeightedOutput; // 0x18
	TArray<uint32_t> WwiseStateGroups; // 0x20
	TArray<uint32_t> WwiseStateValues; // 0x30
	TArray<uint32_t> PeakProxyCountsPools; // 0x40
	TArray<uint32_t> PeakProxyCounts; // 0x50
	TArray<uint32_t> StreamFindFailedIDs; // 0x60
	TArray<uint32_t> StreamOpenFailedIDs; // 0x70
	TArray<uint32_t> StreamReadFailedIDs; // 0x80
	TArray<FSoundBankFailureTelemetryEntry> FailedToLoadBankIDs; // 0x90
	uint32_t FailedPostEventCount; // 0xa0
	uint32_t IODeviceMemUsage; // 0xa4
	uint32_t PeakIOBytesRead; // 0xa8
	float AverageIOBytesPerSecondRead; // 0xac
};

struct FCompanySpecificCargoRunStats {
	UCompany* CompanyId; // 0x0
	TArray<FPlayerStat> StatsToFireUponPerfectOnTimeHandIn; // 0x8
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FUIAdventuresDataErrorEvent {
	FString ErrorMessage; // 0x0
	FString ErrorStack; // 0x10
};

struct FAthenaAnimationHitReactsSelectedAnimations {
	UBlendSpace1D* SelectedHitReact0; // 0x0
	UBlendSpace1D* SelectedHitReactItem0; // 0x8
	UBlendSpace1D* SelectedHitReactItemAction0; // 0x10
	UBlendSpace1D* SelectedHitReactSubtle0; // 0x18
	UBlendSpace1D* SelectedHitReact1; // 0x20
	UBlendSpace1D* SelectedHitReactItem1; // 0x28
	UBlendSpace1D* SelectedHitReactItemAction1; // 0x30
	UBlendSpace1D* SelectedHitReactSubtle1; // 0x38
	UBlendSpace1D* SelectedOverrideHitReact; // 0x40
};

struct FCategorisedLoadout {
	TArray<FLoadoutCategory> ItemLoadout; // 0x0
	TArray<FLoadoutCategory> ClothingLoadout; // 0x10
	TArray<FLoadoutPetCategory> PetLoadout; // 0x20
	bool PetNamingDisallowed; // 0x30
	bool InitialLoadout; // 0x31
	FString Hash; // 0x38
};

struct FTrackedObjectiveCompletionMessage {
	FGuid ObjectiveId; // 0x0
	FPirateIdentity PirateIdentity; // 0x10
	FPlayerBaseTelemetryFragment PlayerInfo; // 0x88
	EPlayMode Playmode; // 0xd0
	EPlayModeVariant PlayModeVariant; // 0xd1
	double CreatedAt; // 0xd8
};

struct FEnterTunnelOfTheDamnedActionStateConstructionInfo : FActorActionStateConstructionInfo {
	int32_t TunnelId; // 0x30
	int32_t TunnelStreamingLevelId; // 0x34
	FTeleportLocation TeleportLocation; // 0x38
};

struct FPetReactedTelemetryEvent {
	FString ReactId; // 0x0
	EAthenaAnimationPetRoamingState AnimationState; // 0x10
};

struct FServerMigrateFromTelemetryEvent {
	FGuid MigrationId; // 0x0
};

struct FLoadingTelemetryEvent {
	FString LoadingEvent; // 0x0
	FString MapName; // 0x10
	float StartTime; // 0x20
	float EndTime; // 0x24
};

struct FCrew {
	FGuid CrewId; // 0x0
	FGuid SessionId; // 0x10
	TArray<APlayerState*> Players; // 0x20
	FCrewSessionTemplate CrewSessionTemplate; // 0x30
	FGuid LiveryID; // 0x68
	TArray<AActor*> AssociatedActors; // 0x80
};

struct FLevelMadeHiddenTelemetryEvent : FStreamingTelemetryBaseEvent {
	FString LevelName; // 0x0
	int32_t LodLevel; // 0x10
	FVector PlayerPosition; // 0x14
	float DistanceFromPlayer; // 0x20
	float DistanceFromBoundsToPlayer; // 0x24
	bool PlayerIsWaitingToSpawn; // 0x28
	bool PlayerIsTeleporting; // 0x29
};

struct FPremiumStoreOffer : FShopOffer {
	bool IsSuperPremium; // 0x1e0
	FString LockedReason; // 0x1e8
	FPremiumStoreTimeLimited TimeLimited; // 0x1f8
	FString RealMoneyPrice; // 0x200
};

struct FCatalog {
	FString DisplayName; // 0x0
	FString DisplayDescription; // 0x10
	TArray<FCatalogOffer> Offers; // 0x20
};

struct FFeaturedShipCustomisationCategory {
	UShipCustomizationCategory* Category; // 0x0
	FName Feature; // 0x8
};

struct FVfxSelectorRange {
	float MinValue; // 0x0
	float MaxValue; // 0x4
	FVfxSelectorEntry EffectParams; // 0x8
};

struct FProjectileImpactTelemetryEvent {
	FGuid AttackId; // 0x0
	FString ProjectileId; // 0x10
	FString DamagerTypeId; // 0x20
	FString InstigatorObjectId; // 0x30
	FString InstigatorObjectType; // 0x40
};

struct FDebugMenuOptionExecutedEvent {
	FString DebugMenuItemName; // 0x0
	FString ConsoleCommand; // 0x10
};

struct FAthenaAnimationObjectActionContinuousStructPitchOverride {
	UBlendSpace1D* MainInto; // 0x0
	UBlendSpace1D* MainCycleIdle; // 0x8
	UBlendSpace1D* MainCycleLocomotion; // 0x10
	TArray<UBlendSpace1D*> VariantCycleIdle; // 0x18
	bool UseMainCycleJump; // 0x28
	bool IgnoreFullBody; // 0x29
	FAthenaAnimationObjectJumpingAnimationsPitchOverride MainCycleJump; // 0x30
	UBlendSpace1D* MainOutOf; // 0x50
	FAthenaAnimationObjectActionContinuousSwimming MainSwimming; // 0x58
};

struct FStrongholdKeyInfo {
	USkellyFortGameEventType* SkellyFortEventType; // 0x0
	UItemDesc* StrongholdKey; // 0x8
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0x58
	FBoneReference LeftHandFK; // 0x64
	FBoneReference RightHandIK; // 0x70
	FBoneReference LeftHandIK; // 0x7c
	TArray<FBoneReference> IKBonesToMove; // 0x88
	float HandFKWeight; // 0x98
};

struct FSpeechAccessibilityModel {
	TArray<FSpeechAccessibilityProfileUser> ProfileUsers; // 0x0
};

struct FLookAtOffset {
	float LookAtPitchRate; // 0x0
	float LookAtYawRate; // 0x4
	float LookAtYawRawScale; // 0x8
	float LookAtPitchRawScale; // 0xc
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FCrewManagementEvent {
	FCrewManagementData CrewDefinition; // 0x0
};

struct FCrewSnapshotV1 {
	FGuid CrewId; // 0x0
	FString ShipSize; // 0x10
	int32_t ShipId; // 0x20
	TArray<FPlayerStateSnapshot> Players; // 0x28
	TArray<FCollectedBootySnapshot> Booty; // 0x38
};

struct FSetHealthData {
	int32_t ActorId; // 0x0
	float Health; // 0x4
	EHealthChangedReason Reason; // 0x8
};

struct FSessionCreationCrewMemberModel {
	FString XUID; // 0x0
};

struct FSirenAnimationLocomotion {
	UAnimSequence* TreadwaterSequence; // 0x0
	UAnimSequence* AggressiveTreadwaterSequence; // 0x8
	UBlendSpace1D* LongwaysLocomotionBlendSpace; // 0x10
	UBlendSpace1D* AggressiveLongwaysLocomotionBlendSpace; // 0x18
	UBlendSpace1D* AlternativeAggressiveLongwaysLocomotionBlendSpace; // 0x20
	UBlendSpace1D* LocomotionTurningAdditiveBlendSpace; // 0x28
	UBlendSpace1D* LocomotionSpinningAdditiveBlendSpace; // 0x30
	UAnimSequence* DivingFromSurfaceSequence; // 0x38
	UAnimSequence* EmergingToSurfaceSequence; // 0x40
};

struct FPlayerMusicController {
	UPlayerMusicControllerParams* PlayerMusicParams; // 0x0
	AActor* LocalPlayerActor; // 0x38
	UPlayerOceanAudioComponent* PlayerOceanAudioComponent; // 0x40
	UPlayerAtmosphericsAudioComponent* AtmosphericsAudioComponent; // 0x48
	AAthenaPlayerCharacter* AthenaPlayerCharacter; // 0x50
	AAthenaWorldSettings* AthenaWorldSettings; // 0x58
	TArray<FAudioStingRelevantShips> RelevantAudioStingShips; // 0x198
	TArray<FAudioStingShipsSpotted> AudioStingShipsSpottedRecently; // 0x1a8
};

struct FPetWieldableReactMapping {
	AWieldableItem* WieldableType; // 0x0
	FName ReactId; // 0x8
};

struct FPetDangerHearingThreatResponse {
	EPetDangerHearingResponseType Type; // 0x0
	EPetDangerHearingTarget IgnoredTarget; // 0x1
	bool InvertIgnoredTarget; // 0x2
};

struct FAISpawnCustomServerEvent : FGlobalCustomServerEvent {
	FString AIId; // 0x18
	FString AIType; // 0x28
};

struct FProposedTaleEntry {
	UVoyageDescDataAsset* TaleData; // 0x0
	AActor* ProposingObject; // 0x8
	bool CanStartTale; // 0x10
};

struct FBuoyancyComponentSinkingParams {
	float BuoyancyBlendTimeWhenSinking; // 0x0
	EBuoyancyBlend FloatingToSinkingBuoyancyCurveTransition; // 0x4
	float FloatingToSinkingBuoyancyCurveBlendTime; // 0x8
	float FinalSinkingBuoyancy; // 0xc
	float SinkingTimeUntilDestroy; // 0x10
	float DisappearingTime; // 0x14
	bool AutomaticSinkingEnabled; // 0x18
	FFloatRange TimeInFloatingStateBeforeSinking; // 0x1c
	float WaterDepthToAllowItemToSink; // 0x2c
	ECollisionChannel WorldHitsTraceChannel; // 0x30
};

struct FWorldMapSetMapLabelsRotation {
	float Rotation; // 0x0
};

struct FEmissaryEntitlementPurchasedEvent {
	FGuid OfferId; // 0x0
};

struct FCrewVoteToBrigEvent {
	FString XUID; // 0x0
};

struct FLevelStreamingStatusUpdateInfo {
	FString PackageName; // 0x0
	int32_t LODIndex; // 0x10
	char bNewShouldBeLoaded : 1; // 0x14
	char bNewShouldBeVisible : 1; // 0x14
	char bNewShouldBlockOnLoad : 1; // 0x14
};

struct FPartDesc {
	FString Name; // 0x0
	TArray<FPartCustomisation> Customisations; // 0x10
};

struct FAthenaAnimationLoadObjectsWrapper {
	FAthenaAnimationCoreObjectAnimations ObjectAnimation; // 0x0
	FAthenaAnimationPitchControlStates ObjectTargeting3rdPerson; // 0x9a0
	FAthenaAnimationFirstPersonTurnDelayStates FirstPersonTurnDelay; // 0xb08
	UWieldableItemAnimationStoreId* ObjectId; // 0xb28
};

struct FAchievementCriteria {
	FPlayerStat PlayerStat; // 0x0
	uint64_t Threshold; // 0x8
	EPlayerStatsOperator Operator; // 0x10
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	USkeletalMeshComponent* SourceMeshComponent; // 0x30
	bool bUseAttachedParent; // 0x38
};

struct FActiveNoteData {
	TArray<FNotesRemoteServiceNoteModel> NotesRemoteServiceNoteModels; // 0x0
	TArray<FNoteCompletionEntry> PendingCompletionEntries; // 0x10
	TArray<FGuid> PendingDetailRequestIDs; // 0x20
};

struct FCannonAILocation {
	FVector Centre; // 0x0
	FVector Direction; // 0xc
};

struct FMerchantQuestContractCompleteNetworkEvent : FNetworkEventStruct {
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FEventFishingFishCaught {
	AActor* CaughtActor; // 0x0
};

struct FLocationGeneratorSample {
	ELocationGeneratorSampleType Type; // 0x0
	FVector Location; // 0x4
	FVector Normal; // 0x10
};

struct FTaleQuestVariableMapMarkType : FQuestVariable {
	FName ParamName; // 0x8
};

struct FDockToObjectActionStateParams {
	float DockTime; // 0x0
	float DelayAfterDockingTime; // 0x4
	float ForcedFieldOfView; // 0x8
	bool ForceStash; // 0xc
};

struct FDebugFishSelectionColour {
	int32_t ColourIndex; // 0x0
	TArray<FDebugFishSelectionSize> FishSizes; // 0x8
};

struct FVoyageWithdrawnEvent {
	APlayerState* Proposer; // 0x0
};

struct FWeightedRewardDistribution {
	TArray<FWeightedRewardEntry> RewardWeightings; // 0x0
};

struct FHitRegProjectileAttackData {
	bool HasValidData; // 0x0
	FVector AimDirection; // 0x4
	FVector AimPosition; // 0x10
	FTransform WeaponMeshTransform; // 0x20
	UObject* WeaponMesh; // 0x50
	TArray<FHitRegTrailData> ProjectileTrails; // 0x58
};

struct FItemAndReward {
	UItemDesc* ItemDesc; // 0x0
	FRewardId HandInOnTimeRewardId; // 0x8
};

struct FEventClientItemUseSpeedScaled {
	float ClientTimeStamp; // 0x0
	bool bItemUseSlowed; // 0x4
};

struct FControlWheelActionStateParams : FControlObjectActionStateParams {
	FLookAtOffsetParams LookAtOffsetParams; // 0x18
};

struct FShipSpecificData {
	UShipSize* ShipSize; // 0x0
	ULevelSequence* VignetteSequence; // 0x8
};

struct FEventSpawnedAsGhostNotification {
	FText NotificationText; // 0x0
};

struct FWeightedPetAnimation {
	UAnimSequence* Animation; // 0x0
	float Weighting; // 0x8
};

struct FRequestArmoryEquipSlotEvent {
	FString ItemDesc; // 0x0
	int32_t SlotId; // 0x10
};

struct FEventShipWaterAddedOnOffEvent {
	AActor* Ship; // 0x0
	float WaterAdded; // 0x8
	float PrevWaterAdded; // 0xc
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FPremiumStoreTimeLimited {
	bool Item; // 0x0
	bool Price; // 0x1
};

struct FCategorySpec {
	UItemCategory* ItemCategory; // 0x0
	TArray<UItemCategory*> FallbackCategories; // 0x8
	FString DefaultSlotIconURL; // 0x18
};

struct FActivateEmissaryForCrew {
	FGuid SessionId; // 0x0
	FName Company; // 0x10
	FGuid AssociatedCrew; // 0x18
};

struct FTTEventTrack : FTTTrackBase {
	UCurveFloat* CurveKeys; // 0x10
};

struct FCrewScoreAppendedEvent {
	EContestScoreId ScoreId; // 0x0
	FGuid CrewId; // 0x4
	int32_t CrewScore; // 0x14
	EScoreReason ScoreReason; // 0x18
	FStringAssetReference ScoringIconAssetReference; // 0x20
};

struct FRadialActionGroup {
	URadialAction* PrimaryAction; // 0x0
	URadialAction* SecondaryAction; // 0x8
	URadialAction* TertiaryAction; // 0x10
	URadialAction* QuaternaryAction; // 0x18
};

struct FBootyItemDroppedOnShipEvent {
	AActor* Ship; // 0x0
	AItemInfo* ItemOnShip; // 0x8
	bool FirstTimeDroppedOnOwnOrAnotherShipByCrew; // 0x10
};

struct FRequestSilverEvent {
	FGuid CrewId; // 0x0
	AWieldableItem* WieldableItemSold; // 0x10
};

struct FDebugStoryInfoModelSchedule {
	TArray<FStoryInfoModel> Stories; // 0x0
	FTimespan RepeatDuration; // 0x10
	FTimespan RepeatDelay; // 0x18
	bool AlwaysRelevant; // 0x20
};

struct FStartUpdatingShipAnnouncementVisibility {
	ACharacter* Character; // 0x0
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FAnimUpdateRateParameters {
	int32_t UpdateRate; // 0x4
	int32_t EvaluationRate; // 0x8
	bool bInterpolateSkippedFrames; // 0xc
	bool bSkipUpdate; // 0xd
	bool bSkipEvaluation; // 0xe
	float TickedPoseOffestTime; // 0x10
	float AdditionalTime; // 0x14
	int32_t BaseNonRenderedUpdateRate; // 0x1c
	TArray<float> BaseVisibleDistanceFactorThesholds; // 0x28
};

struct FEventShipAddedToCrew {
	FGuid CrewId; // 0x0
	AActor* ShipActor; // 0x10
};

struct FQuestVariableActorAssetType : FQuestVariable {
	FName ParamName; // 0x8
};

struct FAthenaAnimationObjectJumpingAnimationsPitchOverride {
	UBlendSpace1D* Start; // 0x0
	UBlendSpace1D* Cycle; // 0x8
	UBlendSpace1D* PreImpact; // 0x10
	UBlendSpace1D* LandLight; // 0x18
};

struct FRopeCatenaryShapeParams {
	FRopeCatenaryLengthParams Length; // 0x0
	FRopeCatenarySlopeBlendParams Slope; // 0x10
};

struct FRopeStyleParams {
	UStaticMesh* Mesh; // 0x0
	UTexture2D* DiffuseTexture; // 0x8
	UTexture2D* NormalTexture; // 0x10
	int32_t ShadowLOD; // 0x18
};

struct FShipOnFireEndCustomServerEvent : FGlobalCustomServerEvent {
	FString ShipId; // 0x18
};

struct FAIShipEncounterZoneEnteredNetworkEvent : FNetworkEventStruct {
	int32_t RemainingAIShips; // 0x10
	int32_t TotalAIShips; // 0x14
	int32_t TotalAIShipsInFinalWave; // 0x18
};

struct FNPCOnSurfaceCannonManagerCannon {
	ACannon* Cannon; // 0x0
	FTransform NearestLocation; // 0x10
};

struct FQuestVariablePrioritisedPrompt : FQuestVariable {
	FName ParamName; // 0x8
};

struct FRevivePlayerActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr CharacterReviving; // 0x30
	FNetSubObjectPtr CharacterBeingRevived; // 0x44
	UNotificationInputId* InputID; // 0x58
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x868
};

struct FMerchantCrateSfx {
	UWwiseEvent* EquipSfx; // 0x0
	UWwiseEvent* UnequipSfx; // 0x8
	UWwiseEvent* WielderLandedJumpSfx; // 0x10
	UWwiseEvent* WielderFootstepLayerOneshot; // 0x18
};

struct FItemSnapshotOwnerDestroyed {
	FGuid SnapshotID; // 0x0
	TScriptInterface<Class> CurrentInstagator; // 0x10
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FEventRequestSayPhrase {
	FString PhraseKey; // 0x0
};

struct FCampfireStateData : FActorStateData {
	bool IsBuilt; // 0x20
	bool IsOnFire; // 0x21
	bool IsPartiallyBurned; // 0x22
};

struct FTextboxTextFromVirtualKeyboard {
	FString Text; // 0x0
};

struct FContestTavernStagingTelemetryFragment {
	int32_t CrewCountNeeded; // 0x0
	int32_t OpenCrewMemberCountNeeded; // 0x4
	bool TickingCountdown; // 0x8
	bool HasServerRecruitmentTimeEnded; // 0x9
	int32_t TavernPlayersAwaitingSpawn; // 0xc
	bool AreCrewsReadyToStart; // 0x10
};

struct FTextureSwitchEthnicityEntry {
	EIPGEthnicity Ethnicity; // 0x0
	FStringAssetReference Texture; // 0x8
};

struct FSphereData {
	FVector Location; // 0x0
	float Radius; // 0xc
	int32_t Segments; // 0x10
	FColor Colour; // 0x14
};

struct FEditorMapPerformanceTestDefinition {
	FFilePath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x10
};

struct FMapTableStateForTunnel {
	AActor* Table; // 0x0
	bool Enabled; // 0x8
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x18
};

struct FEarthquakeForceFeedbackOption {
	TArray<FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedback; // 0x0
};

struct FEventAISkeletalShipCaptainAnimState {
	ESkeletonShipCaptainDockedAnimationState ActiveAnimationState; // 0x0
};

struct FCustomPlayerStartConfigData {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	TArray<FString> Tags; // 0x20
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FSeasonGoalProgressionEvent {
	int32_t PreviousProgress; // 0x0
	int32_t CurrentProgress; // 0x4
	int32_t CompletionThreshold; // 0x8
	FGuid SeasonId; // 0xc
	FGuid GoalId; // 0x1c
	ESeasonGoalType GoalType; // 0x2c
	FGuid GoalGroupId; // 0x30
};

struct FGetSkeletonThronesDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FSkeletonThroneStateData> Data; // 0x8
};

struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	FVector Constant; // 0x3c
};

struct FPremiumCatalogItemSet {
	FText Title; // 0x0
	TArray<FPremiumShopOfferItem> Items; // 0x38
};

struct FStoreOnlinePurchaseResult {
	bool Success; // 0x0
	FString ProductId; // 0x8
};

struct FCanShowSecondaryActionButton : FRadialInventoryEvent {
	bool CanShow; // 0x4
	FText Text; // 0x8
};

struct FFlamesOfFateShipInfo {
	UShipSize* ShipSize; // 0x0
	uint32_t NumLanterns; // 0x8
};

struct FPirateProfileImageModel {
	FString Hash; // 0x0
};

struct FRequestClothingChestClothingEntitlementsEvent {
	FString ItemCategory; // 0x0
};

struct FFortStartedTelemetryEvent {
	FGuid FortId; // 0x0
	FName FortIsland; // 0x10
	FName FortType; // 0x18
};

struct FBuoyantObjectSpawnDesc {
	float LifeTime; // 0x0
	float SpawnDepth; // 0x4
	FVector2D Location; // 0x8
	UObject* Type; // 0x10
};

struct FEnableDefaultGameEventSchedulerData {
	bool Enabled; // 0x0
};

struct FCutsceneAnimationElement {
	FName SequenceName; // 0x0
	TArray<UAnimSequenceBase*> OneShotSequences; // 0x8
};

struct FRewardGroup {
	TArray<UItemDesc*> Rewards; // 0x0
};

struct FRewardHandInPopupNetworkEvent : FNetworkEventStruct {
	UPopUpMessageDesc* PopUpDesc; // 0x10
	UPopUpAudioDesc* AudioOverride; // 0x18
	FText FormattingText; // 0x20
	TArray<FString> Images; // 0x58
};

struct FMerchantContractItemDesc {
	UItemDesc* AllocatedCrate; // 0x0
	TArray<FItemAndReward> ItemData; // 0x8
	UFaunaSpecies* FaunaSpecies; // 0x18
	UFaunaBreed* FaunaBreed; // 0x20
};

struct FFeatureToggledNamedIslands {
	FName FeatureName; // 0x0
	FName IslandName; // 0x8
};

struct FUIPremiumStorePageTransitionEvent {
	FString CurrentPage; // 0x0
	FString PreviousHighlight; // 0x10
	FString PreviousPage; // 0x20
	FString SessionId; // 0x30
	float TimeOnPreviousPage; // 0x40
};

struct FTextureSwitchSeedEntry {
	FName ReferenceName; // 0x0
	FStringAssetReference Texture; // 0x8
};

struct FCatalogOfferRewardDataAsset {
	UCompany* Company; // 0x0
	FRewardId Reward; // 0x8
};

struct FWindTurbulenceParameters {
	FFloatRange GustPower; // 0x0
	FWeightedProbabilityRangeOfRanges GustTime; // 0x10
	FWeightedProbabilityRangeOfRanges CalmTime; // 0x40
};

struct FEventRequestSayPhraseWithArgument {
	FString PhraseKey; // 0x0
	FString ArgumentKey; // 0x10
};

struct FRPCStatEntry {
	double AccumulatedPayloadInKB; // 0x30
	double TimeIntervalInSec; // 0x38
	FSpikeStatEntry WorstSpike; // 0x40
	uint32_t RPCCount; // 0x58
};

struct FCommodityRedemptionTrackingModel {
	uint16_t EntitlementDesc; // 0x0
	char NPCName; // 0x2
	int64_t TickWhenTracked; // 0x8
};

struct FRammableExplosiveEntry {
	URammerType* RammerType; // 0x0
	UShipSpeedBand* MinimumSpeedForExplosion; // 0x8
};

struct FEventFaunaAnimationLocationChanged {
	EFaunaAnimationLocation Location; // 0x0
};

struct FPlayModePhrases {
	EPlayMode PlayModeKey; // 0x0
	UPhrasesRadialDataAsset* PhraseDataAsset; // 0x8
	UNonVerbalRadialDataAsset* QuickAccessDataAsset; // 0x10
	UNonVerbalRadialDataAsset* StrategyDataAsset; // 0x18
};

struct FServerStartingForcedShutdownEvent {
	FTimespan TimeTillShutdown; // 0x0
};

struct FFireWeaponOnServerRpc : FUseItemOnServerRpc {
	FFireRequest FireRequest; // 0x20
};

struct FAbilityTriggerData {
	FGameplayTag TriggerTag; // 0x0
	EGameplayAbilityTriggerSource TriggerSource; // 0x8
};

struct FProjectileWeaponParameters {
	int32_t AmmoClipSize; // 0x0
	int32_t AmmoCostPerShot; // 0x4
	float EquipDuration; // 0x8
	float IntoAimingDuration; // 0xc
	float RecoilDuration; // 0x10
	float ReloadDuration; // 0x14
	FProjectileShotParams HipFireProjectileShotParams; // 0x18
	FProjectileShotParams AimDownSightsProjectileShotParams; // 0x30
	int32_t Seed; // 0x48
	float ProjectileDistributionMaxAngle; // 0x4c
	int32_t NumberOfProjectiles; // 0x50
	float ProjectileMaximumRange; // 0x54
	float ProjectileDamage; // 0x58
	float ProjectileDamageMultiplierAtMaximumRange; // 0x5c
	UDamagerType* DamagerType; // 0x60
	UImpactProjectileId* ProjectileId; // 0x68
	FWeaponProjectileParams AmmoParams; // 0x70
	bool UsesScope; // 0x120
	float ZoomedRecoilDurationIncrease; // 0x124
	float SecondsUntilZoomStarts; // 0x128
	float SecondsUntilPostStarts; // 0x12c
	float WeaponFiredAINoiseRange; // 0x130
	float MaximumRequestPositionDelta; // 0x134
	float MaximumRequestAngleDelta; // 0x138
	float TimeoutTolerance; // 0x13c
	float AimingMoveSpeedScalar; // 0x140
	EAimSensitivitySettingCategory AimSensitivitySettingCategory; // 0x144
	float InAimFOV; // 0x148
	float BlendSpeed; // 0x14c
	UWwiseEvent* DryFireSfx; // 0x150
	FAudioEmitterParameters AudioEmitterParameters; // 0x158
	FName RumbleTag; // 0x168
	bool KnockbackEnabled; // 0x170
	FKnockBackInfo KnockbackParams; // 0x174
	bool StunEnabled; // 0x1c4
	float StunDuration; // 0x1c8
	FVector TargetingOffset; // 0x1cc
};

struct FServerMigrateToTelemetryEvent {
	FGuid MigrationId; // 0x0
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FWreckMatch {
	FVector Location; // 0x0
	TScriptInterface<Class> Wreck; // 0x10
	float DistanceData; // 0x30
	FGuid OwningCrewID; // 0x34
};

struct FLandmarkReactionEventPlayForceFeedbackEntry {
	float OuterRadius; // 0x0
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x8
};

struct FOwnedCrewCostumes {
	FGuid CrewId; // 0x0
	TArray<UClass*> Costumes; // 0x10
};

struct FPlayerActionCannonCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString ShipId; // 0x28
};

struct FStatSingleMessage {
	FPirateIdentity PirateIdentity; // 0x0
	uint64_t Value; // 0x78
};

struct FReactStateMapping {
	FName AnimationID; // 0x0
	bool CanTimeout; // 0x8
	float AnimationTimeout; // 0xc
	FWeightedPetAnimationSelector PetStateSelector; // 0x10
	float AnimationChance; // 0xb0
	FFloatRange AnimationDelay; // 0xb4
	TArray<UAIStrategyId*> IgnoringStrategies; // 0xc8
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FConfigurationComboAndTrigger {
	TArray<uint8_t> RequiredConfigurationCombo; // 0x0
	AActor* TriggerToActivate; // 0x10
	TArray<AActor*> TriggeredActionMechanisms; // 0x18
	EPuzzleStatueActivatedMechanismType ActivatedMechanismType; // 0x28
};

struct FReactivateEmissaryForMigratedCrew {
	FGuid SessionId; // 0x0
	FName Company; // 0x10
	FGuid AssociatedCrew; // 0x18
};

struct FReplenishShipData {
	FGuid CrewId; // 0x0
};

struct FEventShipCurseFX {
	FShipCurseFXData CurseFXData; // 0x0
	float Duration; // 0x30
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5b0
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FAthenaAnimationRowboatAnimationsPassenger {
	UAnimSequence* PassengerIntoSitting; // 0x0
	UAnimSequence* PassengerSittingIdle; // 0x8
	UAnimSequence* PassengerStand; // 0x10
};

struct FReverbSettings {
	char bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	UReverbEffect* ReverbEffect; // 0x8
	float Volume; // 0x10
	float FadeTime; // 0x14
};

struct FEventWieldableItemUseStopped {
	AActor* Item; // 0x0
	UNotificationInputId* InputID; // 0x8
	EItemUseStoppedReason ItemUseStoppedReason; // 0x10
	EActionStateMachineTrackId TrackId; // 0x11
};

struct FEventSetCrewProgressOverride {
	UProgressLocationId* ProgressId; // 0x0
	FGuid CrewId; // 0x8
};

struct FSpawnedPetData {
	APet* SpawnedPet; // 0x0
	APetItemInfo* SpawnedInfo; // 0x8
};

struct FWieldablePetPutOnPerchTelemetryEvent {
	FString HangoutSpotName; // 0x0
	uint32_t HangoutSpotIndex; // 0x10
	FString WieldingActorTelemetrySubjectId; // 0x18
};

struct FPetRoamingAnimationStateDefinitionWeightedDataAsset {
	UPetRoamingAnimationStateDefinitionDataAsset* AnimationDefinitionData; // 0x0
	float Weighting; // 0x8
};

struct FAttributeDefaults {
	UAttributeSet* Attributes; // 0x0
	UDataTable* DefaultStartingTable; // 0x8
};

struct FGameplayModifierInfo {
	FGameplayAttribute Attribute; // 0x0
	EGameplayModOp ModifierOp; // 0x8
	FScalableFloat Magnitude; // 0x10
	FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x30
	FGameplayTagRequirements SourceTags; // 0x1a0
	FGameplayTagRequirements TargetTags; // 0x1f0
};

struct FEventFaunaAnimationTransition {
	EFaunaAnimationState AnimationState; // 0x0
};

struct FTestEnumObject {
	EJsonTestEnum TestEnum; // 0x0
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FLockData {
	bool UnlockBySpecificKey; // 0x0
	UItemDesc* RequiredKey; // 0x8
	FTransform KeyMeshTargetTransform; // 0x10
	bool StartLocked; // 0x40
	float HandToLockLerpDuration; // 0x44
	float LocalPredictionTimeout; // 0x48
	float UnlockAudioCueTriggerTime; // 0x4c
	UWwiseEvent* UnlockAudioCue; // 0x50
	UWwiseEvent* CrewOnlyUnlockMusic; // 0x58
	UWwiseObjectPoolWrapper* SfxPool; // 0x60
	FTransformBlendCurve UnlockAnimationLerp; // 0x70
};

struct FMaelstromEventBaseFragment {
	uint64_t SequenceId; // 0x0
	uint64_t TypeID; // 0x8
	FString Name; // 0x10
	FString TimestampUtc; // 0x20
};

struct FMassPropertiesOverride {
	FVector InertiaTensorOverride; // 0x0
	FVector COMTranslationOverride; // 0xc
	FRotator COMRotatorOverride; // 0x18
};

struct FWeightedPetAnimationSelector {
	TArray<FPetAnimationWeighting> Weightings; // 0x0
};

struct FAthenaAIItemEngageEnemyMethods {
	UItemCategory* ItemCategory; // 0x0
	TArray<FAthenaAIEngageEnemyData> EngageEnemyDataList; // 0x8
};

struct FClamberBeginEvent {
	FLadderBlendParams ClamberBlendParams; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
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

struct FQuestVariableDataAsset : FQuestVariable {
	FName ParamName; // 0x8
};

struct FQuestVariableAISpawner : FQuestVariable {
	FName ParamName; // 0x8
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FSpawnerCreatedAutomationEvent {
	AActor* SpawnerLocation; // 0x0
	UAISpawner* Spawner; // 0x8
};

struct FLoadoutCacheEntry {
	FString PirateId; // 0x0
	FLoadout Loadout; // 0x10
};

struct FCollectionSkeleMeshLimits : FCollectionMeshLimitsBase {
	int32_t MaxVerts; // 0x0
	int32_t MaxMemory; // 0x4
};

struct FPioneerObjectiveCompleteEvent {
	bool HasReward; // 0x0
};

struct FWreckQueryPriorityEntry {
	EWreckSpawnCheckFlag FlagIdent; // 0x0
	EWreckSpawnBlockType BlockType; // 0x1
};

struct FInventoryCountsResponseEvent {
	FCappedCount Cannonballs; // 0x0
	FCappedCount CursedCannonballs; // 0x8
	FCappedCount Food; // 0x10
	FCappedCount Hardware; // 0x18
	FCappedCount Bait; // 0x20
	FCappedCount Firebombs; // 0x28
	FCappedCount ChainShots; // 0x30
	FCappedCount Fireworks; // 0x38
};

struct FEventWieldablePetPutOnPerch {
	AActor* Pet; // 0x0
	FName HangoutSpotName; // 0x8
	uint32_t HangoutSpotIndex; // 0x10
	TWeakObjectPtr<AActor> WieldingActor; // 0x14
};

struct FEventRequestRespawn {
	APawn* Character; // 0x0
	ECharacterType RespawnType; // 0x8
};

struct FShipInternalWaterParams {
	UCurveFloat* SloshinessCurve; // 0x0
	float MaxWaterAmount; // 0x8
	float MaxWaterHeight; // 0xc
	float CorrectiveSpeed; // 0x10
	float MaxClientWaterError; // 0x14
	float WaterStartHeight; // 0x18
	float VisibleWaterLevelSpringAccel; // 0x1c
	float MinShowAmount; // 0x20
	float MaxTipAdjustmentDepth; // 0x24
	float MaxTipAdjustmentRoll; // 0x28
	float MinTipAdjustmentAmount; // 0x2c
	UCurveFloat* FillPercentageVSMaxRollAngleCurve; // 0x30
};

struct FQuestVariableClueDescriptor : FQuestVariable {
	FName ParamName; // 0x8
};

struct FCreatorCrewSettings {
	float UpdateStreamersPollIntervalSeconds; // 0x0
	float UpdateStreamersRateLimitSeconds; // 0x4
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FMermaidDeactivatedLocally {
	AMermaid* Mermaid; // 0x0
	bool IsForLocalPlayer; // 0x8
};

struct FClientProjectileHitRegInfoTelemetryEvent {
	FGuid AttackId; // 0x0
	FString ProjectileId; // 0x10
	FString HitObjectId; // 0x20
	FString HitObjectType; // 0x30
	FString HitActorName; // 0x40
	FVector HitLocation; // 0x50
};

struct FWeightedContestIslandData {
	FContestVoyageIslandData IslandData; // 0x0
	int32_t WeightedChance; // 0xc
};

struct FWwiseIOPriorityMappingConfig {
	int32_t WwisePriority; // 0x0
	EWwiseAsyncIOPriorityDisplay AsyncIOPriority; // 0x4
};

struct FMorphTargetMap {
	FName Name; // 0x0
	UMorphTarget* MorphTarget; // 0x8
};

struct FPiratePreviewCreatedEvent {
	FString PreviewURL; // 0x0
};

struct FDefinitionUpdatedMessage {
	FString ContentHash; // 0x0
};

struct FAggressiveGhostShipState {
	bool IsShipVisible; // 0x0
	bool IsShipDead; // 0x1
	float ShipSpeed; // 0x4
};

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	FGuid AttachGuid; // 0x18
	FName AttachSocketName; // 0x28
	FName AttachComponentName; // 0x30
};

struct FEventStorageContainerDestroyed {
	UObject* Replenishable; // 0x0
};

struct FComponentSpacePoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FCrewManagementData {
	TArray<FCrewManagementMemberData> CrewMembers; // 0x0
	TArray<FReservedCrewSlotData> CrewMembersThatAreNotConnectedToTheServerButHaveAReservedSlot; // 0x10
	FCrewManagementOtherCrewData OtherCrews; // 0x20
	FCrewManagementShipData Ship; // 0x24
	FCrewManagementMatchmakingVisibilityData MatchmakingVisibility; // 0x34
	FCrewManagementArenaRivalVotingData ArenaRivalVoting; // 0x44
	bool CrewFull; // 0x50
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FMeleeWeaponAttackTelemetryEvent {
	FGuid AttackId; // 0x0
	FString AttackType; // 0x10
	int32_t ComboIndex; // 0x20
	FString WeaponName; // 0x28
	float RequesterLatencyMs; // 0x38
	float RequesterTimeOffset; // 0x3c
};

struct FMaterialInformationVFXData : FTableRowBase {
	float DummyVFXValue; // 0x0
};

struct FDestroyingUnsafeWreckTelemetryEvent {
	FVector Location; // 0x0
	bool IsCustomWreck; // 0xc
};

struct FEventCannonFiredOnServer {
	ACannon* Cannon; // 0x0
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FDebrisToRangeDist {
	FWeightedProbabilityRange NumberOfDebrisItemsToSpawn; // 0x0
	UWeightedDebrisDataAsset* WeightedDebrisTypeAsset; // 0x20
};

struct FUIBooleanOptionSelectedTelemetryEvent {
	FString Option; // 0x0
	bool Value; // 0x10
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAudioStingRelevantShips {
	AActor* Ship; // 0x0
	bool IsAIShip; // 0x8
};

struct FRequestClothingChestActionEvent {
	EChestEntitlementActionType Action; // 0x0
	FString Subject; // 0x8
};

struct FHideRadialInventory : FRadialInventoryEvent {
	bool IsSwitchingToLinkedRadial; // 0x4
};

struct FKrakenSpawnLocationExclusionZone {
	FVector Centre; // 0x0
	float Radius; // 0xc
};

struct FCatalogOfferPrerequisitesDataAsset {
	TArray<UEntitlementDesc*> Entitlements; // 0x0
	TArray<FCatalogOfferCompanyLevelDataAsset> CompanyLevel; // 0x10
	uint32_t EntitlementRequirementThreshold; // 0x20
};

struct FAthenaAnimationAsyncLoadedLocomotionAnimations {
	UBlendSpace* Locomotion1; // 0x0
	UBlendSpace* Locomotion2; // 0x20
	UBlendSpace* Locomotion3; // 0x40
	UBlendSpace* Locomotion4; // 0x60
	UAnimSequence* LocomotionTurningLeft; // 0x80
	UAnimSequence* LocomotionTurningRight; // 0xa0
	UAnimSequence* LocomotionOutOf; // 0xc0
	UBlendSpace* LocomotionSwimming; // 0xe0
};

struct FRequestShowGamerCard {
	FString XUID; // 0x0
};

struct FStaticMeshWwiseEmitterData {
	UWwiseObjectPoolWrapper* Pool; // 0x0
	FVector LocalOriginOffset; // 0x8
	TArray<UWwiseEvent*> StartEvents; // 0x18
	TArray<UWwiseEvent*> StopEvents; // 0x28
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x0
	ESlateBrushDrawType DrawAs; // 0x8
	FMargin Margin; // 0xc
	FLinearColor Tint; // 0x1c
	FSlateColor TintColor; // 0x30
	ESlateBrushTileType Tiling; // 0x60
	ESlateBrushMirrorType Mirroring; // 0x61
	ESlateBrushImageType ImageType; // 0x62
	UObject* ResourceObject; // 0x68
	FName ResourceName; // 0x70
	bool bIsDynamicallyLoaded; // 0x78
	bool bHasUObject; // 0x79
	FBox2D UVRegion; // 0x7c
};

struct FItemLoadout {
	TArray<FItemLoadoutCapacity> Capacities; // 0x0
	TArray<UItemDesc*> Items; // 0x10
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceId; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FCommodityTrackingModel {
	FGuid ItemOfferId; // 0x0
	char NPCName; // 0x10
	int64_t TickWhenTracked; // 0x18
};

struct FGlitterBeardVFXTransitionCompletedEvent {
	int32_t Index; // 0x0
};

struct FLightingZoneParameters {
	int32_t PriorityLayer; // 0x0
	int32_t TargetLightingIndex; // 0x4
	float OuterRadius; // 0x8
	float InnerRadius; // 0xc
	float Weight; // 0x10
	bool IsUnderwaterZone; // 0x14
	bool Is3DLightingZone; // 0x15
	float OuterCylinderHalfHeight; // 0x18
	float InnerCylinderHalfHeight; // 0x1c
};

struct FSkeletonAICharacterStrategyAudioEvents {
	UAIStrategyId* AIStrategy; // 0x0
	FSkeletonAudioEvents DefaultEvents; // 0x8
	TArray<FSkeletonAICharacterItemSpecificAudioEvents> ItemSpecificEventOverrides; // 0x28
};

struct FRiddleQuestGateStartedTelemetryEvent {
	ERiddleLocations RiddleLocation; // 0x0
	ERiddleActionLocationOffsets RiddleActionLocationOffset; // 0x1
	ERiddleActions RiddleAction; // 0x2
	FString LandmarkName; // 0x8
	FString GateDescription; // 0x18
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FShipCustomizationLoadout {
	TArray<UShipCustomizationDesc*> Customizations; // 0x0
	TArray<UShipCustomizationDesc*> InitialCustomizations; // 0x10
	bool HasInitialCustomizationsSet; // 0x20
};

struct FShipHullRammingSpurDamageEntry {
	TArray<FShipDamageEntry> DamageAppliedToSelf; // 0x0
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30
	float BlendWeight; // 0x34
	float InternalTimeAccumulator; // 0x38
};

struct FHandOnWheelAnimationRanges {
	FFloatRange LeftHandOnWheelA; // 0x0
	FFloatRange LeftHandOnWheelB; // 0x10
	FFloatRange RightHandOnWheelA; // 0x20
	FFloatRange RightHandOnWheelB; // 0x30
};

struct FPirateCreationEvent_SavePirate {
	FPirateDescription Description; // 0x0
	TArray<UClothingDesc*> Outfit; // 0x80
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FEventWieldablePetPendingDrop {
	EWieldablePetDropRequestReason DropRequestReason; // 0x0
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x78
};

struct FEventSetDateTime {
	int32_t Year; // 0x0
	int32_t Month; // 0x4
	int32_t Day; // 0x8
	int32_t Hour; // 0xc
	int32_t Minute; // 0x10
};

struct FCustomAnimationMontageDefinitionEntry {
	FName MontageId; // 0x0
	FStringAssetReference Definition; // 0x8
};

struct FVisualFeedbackList {
	TArray<FVisualFeedbackEntry> Entires; // 0x0
	float StartDelay; // 0x10
	float TransitionTime; // 0x14
};

struct FAllianceStatusChangedNetworkEvent : FNetworkEventStruct {
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FRivalChangeTelemetryEvent {
	FGuid CrewId; // 0x0
};

struct FAnimationStateCompleteEvent {
	UAnimationStateId* CompletedStateId; // 0x0
};

struct FOutOfAmmoDestructionEffects {
	float DestroyDelayDuration; // 0x0
	float DestroyDuration; // 0x4
	float InterpTarget; // 0x8
	UCurveFloat* DestroyLerpCurve; // 0x10
	FScalarParameterValue ScalarParameterValue; // 0x18
	UObject* DestroyVfx; // 0x38
	FName VfxSocketName; // 0x40
	UWwiseEvent* DestroyAudioEvent; // 0x48
	UWwiseObjectPoolWrapper* DestroyAudioPool; // 0x50
	FWwiseEmitterCreationParams DestroySfxParams; // 0x58
};

struct FMechanismFloatAnimationCurve {
	UMechanismAnimationCurve_Float* CurveAsset; // 0x0
};

struct FConstellationAudioPair {
	AConstellation* ConstellationClass; // 0x0
	UWwiseEvent* AudioStartEvent; // 0x8
	UWwiseEvent* AudioStopEvent; // 0x10
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FRequestPetChestPetEntitlementsEvent {
	FString ItemCategory; // 0x0
};

struct FItemUseSpeedParams {
	float LookSpeedScalar; // 0x0
	float MaxMoveSpeedScalar; // 0x4
};

struct FAthenaAnimationJumpingThirdPersonAnimData {
	TArray<UBlendSpace*> JumpStart; // 0x0
	TArray<UBlendSpace*> JumpCycle; // 0x10
	TArray<UBlendSpace*> PreImpact; // 0x20
	TArray<UBlendSpace*> LandLight; // 0x30
	TArray<UBlendSpace*> LandHeavy; // 0x40
};

struct FClueSiteLootHistory {
	TArray<FLootSpawnedAtClueSite> History; // 0x0
};

struct FMeleeWeaponMovementSpeedPair {
	EMeleeWeaponMovementSpeed Label; // 0x0
	float SpeedScalar; // 0x4
};

struct FPremiumStoreCardView {
	TArray<FString> Image; // 0x0
	FString Cost; // 0x10
	FString RealMoneyPrice; // 0x20
	FString Title; // 0x30
	FString Description; // 0x40
	bool Owned; // 0x50
	FPremiumStoreTimeLimited TimeLimited; // 0x51
	FPremiumStoreItemsSetView SetView; // 0x58
};

struct FEventPetSpawnedForShip {
	APawn* LinkedPet; // 0x0
	AActor* LinkedShip; // 0x8
};

struct FAthenaAnimationHitReactsAnimData {
	TArray<UBlendSpace1D*> HitReact; // 0x0
	TArray<UBlendSpace1D*> HitReactItem; // 0x10
	TArray<UBlendSpace1D*> HitReactItemAction; // 0x20
	TArray<UBlendSpace1D*> HitReactSubtle; // 0x30
};

struct FQueryMigrationStatusRpc : FBoxedRpc {
	AAthenaPlayerController* AthenaPlayerController; // 0x10
};

struct FFogColourForSea {
	USeaId* Sea; // 0x0
	FLinearColor Colour; // 0x8
};

struct FPetAnimationCycleMontage {
	UAnimMontage* In; // 0x0
	UAnimMontage* Loop; // 0x8
	UAnimMontage* Out; // 0x10
};

struct FCollectionAnimSequenceLimits {
	int32_t MaxMemory; // 0x0
};

struct FPlayerCharacterSnapshot {
	int32_t Id; // 0x0
	FVector Position; // 0x4
	float Health; // 0x10
};

struct FPageReference {
	FStringAssetReference PageReference; // 0x0
	char NumberOfPages; // 0x10
};

struct FEventTriggerOverlayAction {
	UObject* InteractObject; // 0x0
	EInteractableOverlayActionType InteractableActionType; // 0x8
};

struct FChainLightningParameters {
	float ChainLightningOverlapRadius; // 0x0
	float InitialSelectionRadiusSquared; // 0x4
	int32_t InitialNumberOfNodesSelected; // 0x8
	float MaxDistanceBetweenChainsSquared; // 0xc
	int32_t MaxNumberOfLinks; // 0x10
	bool OverrideMaxFramesBeforeReplication; // 0x14
	int32_t MaxFramesBeforeReplicationOverride; // 0x18
	float ChainVisualActorLifetime; // 0x1c
};

struct FEventReputationDisplayInformationResponse {
	TArray<FCompanyReputationSummary> ReputationData; // 0x0
};

struct FHiddenActionStateParams {
	bool MakeInvincibleWhileInState; // 0x0
	bool DisableCollisionWhileInState; // 0x1
	bool MakeInvisibleWhileInState; // 0x2
	bool HideNamePlatesWhileInState; // 0x3
	bool DisableGravityWhileInState; // 0x4
};

struct FAthenaAnimationLocomotionAlternateAnimData {
	UAnimSequence* Idle; // 0x0
	UBlendSpace* MainMovement; // 0x8
	FAthenaAnimationLocomotionTurningAnimData TurningLeft; // 0x10
	FAthenaAnimationLocomotionTurningAnimData TurningRight; // 0x18
	UAnimSequence* TurnOut; // 0x20
	UBlendSpace* RunStop; // 0x28
	FAthenaAnimationLocomotionStairsAnimData StairsLocomotion; // 0x30
};

struct FScheduledShutdownSettingsClient {
	float StartScreenFadeWithTimeRemainingSeconds; // 0x0
	float ScreenFadeTimeSeconds; // 0x4
	float QuitGameTimeRemainingSeconds; // 0x8
	float UpperDisplayPeriodTimeSeconds; // 0xc
	float LowerDisplayPeriodTimeSeconds; // 0x10
	float SwitchToLowerTimePeriodWithTimeRemainingSeconds; // 0x14
};

struct FEventSummonMegalodon {
	ETinySharkTypes SoulType; // 0x0
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FPetChestUnequipPetEvent {
	UPetEntitlementBaseDesc* Desc; // 0x0
};

struct FHoldToUseInput {
	FName FeatureFlag; // 0x0
	UNotificationInputId* StartUse; // 0x8
	UNotificationInputId* StopUse; // 0x10
	FWieldableItemActionVisuals ActionVisuals; // 0x18
	UHoldToUseInputVisualModifier* WieldableVisualModifier; // 0x30
	bool SplitActionRules; // 0x38
};

struct FRewardGrantedNetworkEvent : FNetworkEventStruct {
	FString RewardId; // 0x10
	EWalletCurrencyId CurrencyId; // 0x20
	uint32_t CurrencyAmount; // 0x24
	FString CompanyId; // 0x28
	uint32_t Xp; // 0x38
	uint32_t NumLevels; // 0x3c
	TArray<FString> Entitlements; // 0x40
	FString DeferralReason; // 0x50
};

struct FContestCrewRequirementData {
	int32_t CrewCount; // 0x0
	FString CrewCountServicesConfigRetrievalString; // 0x8
	TArray<FShipSizeRequirementData> OpenCrewRequirementData; // 0x18
};

struct FCaptureResolution {
	uint32_t ResX; // 0x0
	uint32_t ResY; // 0x4
};

struct FRotationAboutAxisParameters {
	FVector Rotation; // 0x0
	char bUseRotation : 1; // 0xc
	char bUseLocalSpace : 1; // 0xc
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FWaterModifierZoneParameters {
	float OuterRadius; // 0x0
	float InnerRadius; // 0x4
	float Strength; // 0x8
	bool UseDragScalar; // 0xc
	float DragScalar; // 0x10
	FBlendableDrowningParams DrowningParameters; // 0x18
	FBlendableDrowningParams ShipInternalWaterDrowningParameters; // 0x40
	bool IsSuperHeatedWater; // 0x68
	bool ResetOxygenLevel; // 0x69
	bool Is3DWaterModifierZone; // 0x6a
	float OuterCylinderHalfHeight; // 0x6c
	float InnerCylinderHalfHeight; // 0x70
};

struct FShovelTelemetryEvent {
	FString DigType; // 0x0
	FString Terrain; // 0x10
};

struct FEventAthenaLoadingScreenBlockUntilUIIntialised {
	FString Description; // 0x0
};

struct FSkeletalMeshComponentPreClothTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
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

struct FEventReceiveWeepingComponentState {
	UWeepingComponent* Source; // 0x0
};

struct FKrakenShipWrappingBehaviourParams {
	UShipSize* ShipSize; // 0x0
	FKrakenShipWrappingBehaviourWarningParams WarningParams; // 0x10
	FKrakenShipWrappingBehaviourWrapParams WrapParams; // 0xb0
	FKrakenShipWrappingBehaviourTentacleHeadParams TentacleHeadParams; // 0x1f0
	FKrakenShipWrappingBehaviourShakeAttackParams ShakeAttackParams; // 0x238
	FKrakenShipWrappingBehaviourHeavyAttackParams HeavyAttackParams; // 0x2a0
	FKrakenShipWrappingBehaviourDamageParams DamageParams; // 0x378
	FKrakenShipWrappingBehaviourHealthParams HealthParams; // 0x3e8
};

struct FEmoteFlourishCategoryMapping {
	UItemCategory* ItemCategory; // 0x0
	FStringAssetReference IconPath; // 0x8
	FEmoteData EmoteData; // 0x18
	FString PairName; // 0xb0
};

struct FCapstanSnapshot {
	float Raised; // 0x0
};

struct FWeightedAIStrategyChance {
	UAIStrategyId* Strategy; // 0x0
	FAIDataProviderFloatValue WeightedChance; // 0x8
};

struct FSeasonPassRealMoneyPriceResponseEvent {
	FString RealMoneyPrice; // 0x0
	FString CurrencyCode; // 0x10
};

struct FMerchantQuestCrateFilledNetworkEvent : FNetworkEventStruct {
	FString PlayerName; // 0x10
	UPopUpMessageDesc* PopUpDesc; // 0x20
	bool OnlyPlayAudio; // 0x28
};

struct FMatchmakeQuestDesc : FQuestDesc {
	FString Title; // 0x8
	bool IsEmergent; // 0x18
	FName IslandName; // 0x1c
};

struct FIPGSetGroup {
	int32_t Priority; // 0x0
	EIPGSetMode Mode; // 0x4
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FLaunchableProjectileCreator {
	UPrimitiveComponent* AimBase; // 0x50
	TArray<AActor*> IgnoredActors; // 0x58
	TArray<UActorComponent*> IgnoredComponents; // 0x68
};

struct FCrewCancelVoteOutOfBrigEvent {
	FString XUID; // 0x0
};

struct FCarouselPirateClothing {
	TArray<FCarouselPirateClothingItem> AvailableItems; // 0x0
	TArray<FCarouselPirateClothingCategoryBias> Probabilities; // 0x10
};

struct FKrakenTentacleBehaviourActionChances {
	EKrakenTentacleBehaviourDamageActions ActionToTransitionTo; // 0x0
	float WeightedChance; // 0x4
};

struct FContestCrewMemberModel {
	FUniqueNetIdRepl UserId; // 0x0
	FString GamerTag; // 0x18
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	float SectionStartTime; // 0x98
	float SectionEndTime; // 0x9c
};

struct FNamedPointsActorLocation {
	FName NamedPointsGroup; // 0x0
	FStringAssetReference ActorWithNamedPointsComponent; // 0x8
	UClass* ActorToSpawn; // 0x18
};

struct FAIShipSpawnedNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FStorageContainerNode {
	UItemDesc* ItemDesc; // 0x0
	int32_t NumItems; // 0x8
};

struct FEventHUDSetMousePosition {
	FVector2D Position; // 0x0
};

struct FSessionTemplate {
	FString TemplateName; // 0x0
	ECrewSessionType SessionType; // 0x10
	int32_t MaxPlayers; // 0x14
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FEntitlementsResponseEvent {
	TArray<FEntitlementItem> Entitlements; // 0x0
};

struct FEventFaunaAnimationSnakeInCharmStance {
	bool SnakeInCharmStance; // 0x0
};

struct FMerchantSpawnData {
	UClass* MerchantReference; // 0x0
	FTransform MerchantTransform; // 0x20
};

struct FLeaveGhostShipActionStateConstructionInfo : FActorActionStateConstructionInfo {
	int32_t GhostShipLevelId; // 0x30
};

struct FIncomingMigrationPreventionZone {
	FVector2D Location; // 0x0
	float Radius; // 0x8
};

struct FEventApplyStatusShipCurse {
	FStatus Status; // 0x8
};

struct FScoreGrantedNotificationUIEvent {
	EContestScoreId ScoreId; // 0x0
	FString DisplayAmount; // 0x8
	int32_t Amount; // 0x18
	FString ScoringIconPath; // 0x20
};

struct FPossessableSequence {
	AActor* ActorToPossess; // 0x0
	FString TrackNameToPossess; // 0x8
};

struct FModalInteractionActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr InteractionProxy; // 0x30
};

struct FAnimationSwitchEntry {
	FName BodyShape; // 0x0
	UAnimationDataStoreId* AnimSetDataId; // 0x8
};

struct FDrunkennessSetupData {
	EDrunkennessType DrunkennessType; // 0x0
	float MaxDrunkenness; // 0x4
	float GettingDrunkDrunkennessChangePerSec; // 0x8
	float SoberingUpDrunkennessChangePerSec; // 0xc
	bool AutoSoberUpWhenFullyDrunk; // 0x10
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

struct FCachedRespawnPoint {
	FGuid CrewId; // 0x0
	FTransform AllocatedRespawnPoint; // 0x10
	AShipSpawnLocation* AllocatedSpawnLocation; // 0x40
};

struct FEmblemRemoteProgress {
	FGuid Id; // 0x0
	FName CompanyId; // 0x10
	bool IsCompleted; // 0x18
	TArray<FEmblemRemoteCriteriaProgress> CriteriaProgress; // 0x20
};

struct FTaleQuestContextInvalidTelemetryEvent {
	FName StepType; // 0x0
	FName Tale; // 0x8
};

struct FRainPostProcessSettings {
	char bOverride_RainParticleTexture : 1; // 0x0
	char bOverride_RainMeshTexture : 1; // 0x0
	char bOverride_RainIntensity : 1; // 0x0
	char bOverride_RainParticleAlpha : 1; // 0x0
	char bOverride_RainCloseParticleAlphaReductionMultiplier : 1; // 0x0
	char bOverride_RainCloseParticleAlphaDistance : 1; // 0x0
	char bOverride_RainParticleDensity : 1; // 0x0
	char bOverride_RainParticleSpeed : 1; // 0x0
	char bOverride_RainParticleWindVelocity : 1; // 0x1
	char bOverride_RainParticleWidth : 1; // 0x1
	char bOverride_RainParticleLength : 1; // 0x1
	char bOverride_RainMeshScale : 1; // 0x1
	char bOverride_RainMeshTextureScroll : 1; // 0x1
	char bOverride_RainMeshTextureTiling : 1; // 0x1
	char bOverride_RainMeshAlpha : 1; // 0x1
	char bOverride_RainMeshRowDivision : 1; // 0x1
	char bOverride_RainMeshColumnDivision : 1; // 0x2
	char bOverride_RainMeshBrightness : 1; // 0x2
	char bOverride_RainBrightness : 1; // 0x2
	char bOverride_RainTint : 1; // 0x2
	char bOverride_RainMeshEndRadiusScale : 1; // 0x2
	char bOverride_RainMeshEndAlphaFade : 1; // 0x2
	char bOverride_RainMeshFadeDistance : 1; // 0x2
	char bOverride_RainAnimationFrameTime : 1; // 0x2
	char bOverride_RainSplashesPerSecond : 1; // 0x3
	char bOverride_RainSplashesPerSquareMetre : 1; // 0x3
	char bOverride_RainSplashesMaxPlacementAngle : 1; // 0x3
	char bOverride_RainSplashData : 1; // 0x3
	char bOverride_RainSplashesMaxDistance1 : 1; // 0x3
	char bOverride_RainSplashData2 : 1; // 0x3
	char bOverride_RainSplashesMaxDistance2 : 1; // 0x3
	UTexture* RainParticleTexture; // 0x8
	UTexture* RainMeshTexture; // 0x10
	float RainIntensity; // 0x18
	float RainParticleAlpha; // 0x1c
	float RainCloseParticleAlphaReductionMultiplier; // 0x20
	float RainCloseParticleAlphaDistance; // 0x24
	float RainParticleDensity; // 0x28
	float RainParticleSpeed; // 0x2c
	FVector RainParticleWindVelocity; // 0x30
	float RainParticleWidth; // 0x3c
	float RainParticleLength; // 0x40
	FVector RainMeshScale; // 0x44
	FVector2D RainMeshTextureScroll; // 0x50
	FVector2D RainMeshTextureTiling; // 0x58
	float RainMeshAlpha; // 0x60
	int32_t RainMeshRowDivision; // 0x64
	int32_t RainMeshColumnDivision; // 0x68
	float RainMeshEndRadiusScale; // 0x6c
	float RainMeshEndAlphaFade; // 0x70
	float RainMeshFadeDistance; // 0x74
	float RainMeshBrightness; // 0x78
	float RainBrightness; // 0x7c
	FLinearColor RainTint; // 0x80
	float RainAnimationFrameTime; // 0x90
	int32_t RainSplashesPerSecond; // 0x94
	float RainSplashesPerSquareMetre; // 0x98
	float RainSplashesMaxPlacementAngle; // 0x9c
	UParticleComputeShaderData* RainSplashData; // 0xa0
	float RainSplashesMaxDistance1; // 0xa8
	UParticleComputeShaderData* RainSplashData2; // 0xb0
	float RainSplashesMaxDistance2; // 0xb8
};

struct FCrewManagementMemberData {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
	FCrewManagementMemberBrigState Brig; // 0x20
	EMuteState Muted; // 0x30
};

struct FEventHandInMegalodonSoul {
	ETinySharkTypes SoulType; // 0x0
	AActor* HandInLocation; // 0x8
};

struct FPlayerNameplateUIInfo {
	FString GamerTag; // 0x0
	FString Title; // 0x10
	EAttitudeTowardActor Attitude; // 0x20
	EVoiceChatState ChatState; // 0x21
	float Health; // 0x24
	bool HealthVisible; // 0x28
	bool TitleVisible; // 0x29
	FString NameplateIconReference; // 0x30
};

struct FBuoyancyVolumeSample {
	FVector Offset; // 0x0
	float Radius; // 0xc
	EBuoyancySampleType Type; // 0x10
	bool bRelevantForSubmersionVolumeCalculation; // 0x11
	float Scalar; // 0x14
	float DampingScalar; // 0x18
	UCurveFloat* DistUnderwaterVSBuoyancyForce; // 0x20
	UCurveFloat* DistUnderwaterVSBuoyancyForceSecondary; // 0x28
	UCurveFloat* DistUnderwaterVSBuoyancyForceTertiary; // 0x30
	UCurveFloat* FakeZOffsetGeneratorCurve; // 0x38
	float FakeZOffsetAmp; // 0x40
	float FakeZOffsetGeneratorTimeScale; // 0x44
};

struct FStagingQuestDesc : FQuestDesc {
	FString Title; // 0x8
	bool IsEmergent; // 0x18
	FName IslandName; // 0x1c
};

struct FClothingChestClothingEntitlementsUpdatedEvent {
	TArray<FChestEntitlementViewModel> Entitlements; // 0x0
};

struct FEventCompanyReputationCampaignDetailRequest {
	FString CampaignId; // 0x0
};

struct FEditedDocumentInfo {
	UObject* EditedObject; // 0x0
	FVector2D SavedViewOffset; // 0x8
	float SavedZoomAmount; // 0x10
};

struct FTeleportActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FTeleportLocation TeleportLocationOverride; // 0x30
	ETeleportActionStateFadeType TeleportFadeType; // 0x58
	int32_t StreamInLevelId; // 0x5c
	int32_t StreamOutLevelId; // 0x60
	ETeleportActionStateConditions TeleportConditions; // 0x64
	bool ShouldPlayTeleportSFX; // 0x65
	bool ShouldWaitForLoadout; // 0x67
	bool ShouldWaitForEntitlements; // 0x68
	bool CallFinishSpawningOnEnd; // 0x69
	ETeleportActionStateReason Reason; // 0x6a
	ETeleportTransformSpace TeleportSpace; // 0x6b
};

struct FEmissaryCompanyActionRewardBoostServiceEvent {
	FName AssociatedCompany; // 0x0
	EEmisaryCompanyActionType CompanyActionType; // 0x8
	FGuid AssociatedCrew; // 0xc
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	FName Name; // 0x4
	ECollisionResponse DefaultResponse; // 0xc
	bool bTraceType; // 0xd
	bool bStaticObject; // 0xe
};

struct FGeyserStateData : FActorStateData {
	EGeyserState State; // 0x20
};

struct FDebugSuperSailorActionStateParams {
	float BaseForwardSpeed; // 0x0
	float YawSpeed; // 0x4
	float RightTriggerHeldSpdAmp; // 0x8
	float RightTriggerHeldYawAmp; // 0xc
};

struct FAnimationDataStoreLoadingEntry {
	UAnimationDataStoreId* AnimDataId; // 0x38
};

struct FRepairLoadoutFromSeedRpc : FBoxedRpc {
	TArray<int32_t> Seeds; // 0x10
	TArray<FStringClassReference> CategoriesToApply; // 0x20
};

struct FGameEventSchedulerConfigChangeTelemetryEvent {
	FGuid ConfigId; // 0x0
	TArray<FGameEventSchedulerConfigTelemetry> Events; // 0x10
};

struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent {
	AActor* Ship; // 0x0
};

struct FEmissaryQuestCompanyActionRewardBoostEvent {
	EEmisaryCompanyActionType CompanyActionType; // 0x0
	FGuid QuestId; // 0x4
};

struct FScoreboardItems {
	FString Icon; // 0x0
	FString CrewName; // 0x10
	FString Score; // 0x20
	bool IsMyCrew; // 0x30
};

struct FAIShipCrewFormType {
	ESkellyFormIconType IconType; // 0x0
	FColor IconColour; // 0x4
	uint8_t IconIndex; // 0x8
	uint8_t CaptainIconIndex; // 0x9
	FStringAssetReference Form; // 0x10
};

struct FCompanyProgressUpdateMessage {
	FPirateIdentity PirateIdentity; // 0x0
	FCompanyReputationProgressModel CompanyProgress; // 0x78
	FGuid RequestID; // 0xa0
};

struct FEmissaryVoteRemovedEvent {
	FName Company; // 0x0
};

struct FRequestPetChestActionEvent {
	EChestEntitlementActionType Action; // 0x0
	FString Subject; // 0x8
};

struct FCinematicEmissaryNetworkEvent : FNetworkEventStruct {
	int32_t Level; // 0x10
	FName Tag; // 0x14
};

struct FAchievementSailFullyWithTheWind {
	float DistanceToTravelInMetres; // 0x0
};

struct FEventNoteClientCompletionStep {
	APlayerController* PlayerController; // 0x0
	FName CompletionStepID; // 0x8
};

struct FWwiseListenerInfo {
	FVector Position; // 0x0
	FVector Up; // 0xc
	FVector Right; // 0x18
	FVector Front; // 0x24
	FVector Velocity; // 0x30
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FSpawnedItem {
	TWeakObjectPtr<AActor> SpawnedActor; // 0x0
	UItemSpawnData* ItemSpawnData; // 0x8
	bool CustomLifetimeManagement; // 0x40
};

struct FTestTelemetryJsonSchemaWriterNestedStruct {
	FString StringField; // 0x0
};

struct FDebugFlyingActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FEmissaryCompanyCampaignScale {
	FName Campaign; // 0x0
	float Scale; // 0x8
};

struct FOnLiquidProjectileImpactEvent {
	bool ImpactFilledShip; // 0x0
};

struct FMetalAIFormRustyDamageResponse {
	UDamagerType* DamagerType; // 0x0
	float DamageMultiplier; // 0x8
	ECharacterHitReactionAnimType HitReaction; // 0xc
};

struct FPetAnimationCycle {
	UAnimSequenceBase* In; // 0x0
	UAnimSequenceBase* Loop; // 0x8
	UAnimSequenceBase* Out; // 0x10
};

struct FChestOfRageReplicatedData {
	ERageState State; // 0x0
	float RageValue; // 0x4
	bool HasBeenActivated; // 0x8
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FEventTransferObjectState {
	TScriptInterface<Class> Target; // 0x0
	AActor* TargetActor; // 0x10
};

struct FKrakenDynamicsStateFragmentParams {
	UCurveVector* TorqueCurve; // 0x0
	float BaselineTorque; // 0x8
	TArray<FKrakenDynamicsStateEvent> Events; // 0x10
};

struct FMigrationUIContentsDataAssetEntry {
	TArray<FText> DisplayText; // 0x0
};

struct FRewindComponentParameters {
	float MaxTimeSpan; // 0x0
	float TimeStampModifier; // 0x4
	float MaxPredictionTimeDelta; // 0x8
	float TimeStampEstimationForwardVectorDistance; // 0xc
	int32_t MaxRecordPerSecond; // 0x10
};

struct FVolcanoProjectileData {
	int32_t WeightedVolcanoProjectileIndex; // 0x0
	FVector LaunchVelocity; // 0x4
	FVector RotationRate; // 0x10
};

struct FServerMigrationCrewMigrationStatus {
	FGuid CrewId; // 0x0
	bool Migratable; // 0x10
	TArray<FVector2D> Locations; // 0x18
};

struct FPlayerJoinRefusedMessage {
	FGuid CrewId; // 0x0
};

struct FPetChestOpenRequestEvent {
	FRequestOpenPossessionsChestEvent OpenPossessionsChestEvent; // 0x0
	AActor* Interaction; // 0x18
};

struct FBuffedTargetData {
	TWeakObjectPtr<AActor> ActorBuffed; // 0x0
	TScriptInterface<Class> StatusEffectRecipient; // 0x8
};

struct FBountyMapContents {
	FTreasureMapTextDesc Location; // 0x0
	TArray<FTreasureMapTextDesc> Descriptions; // 0x48
	TArray<FBountyMapTargetDesc> Targets; // 0x58
};

struct FCoordinatedKrakenPhaseAssetEntry {
	FTransform RelativeAnimationOrigin; // 0x0
	UCoordinatedKrakenPhaseActionsDataAsset* Asset; // 0x30
};

struct FIPGBlendRange {
	FName Name; // 0x0
	float Min; // 0x8
	float Max; // 0xc
	float Env; // 0x10
	TArray<FIPGCompatibleSet> Compatibility; // 0x18
};

struct FInheritedTagContainer {
	FGameplayTagContainer CombinedTags; // 0x0
	FGameplayTagContainer Added; // 0x28
	FGameplayTagContainer Removed; // 0x50
};

struct FPlayerCurseToAudioSwitchValue {
	EPlayerCurseTag CurseTag; // 0x0
	FName SwitchValue; // 0x4
};

struct FEntitlementIdInfo {
	UClass* Desc; // 0x0
	FString EntitlementId; // 0x20
};

struct FBeaconData {
	bool LightIsOn_Server; // 0x0
	EFlameOfFateType FlameOfFateType; // 0x1
};

struct FRandomParticleSystemPicker {
	TArray<FRandomParticleSystemPickerEntry> Effects; // 0x0
};

struct FCrewSessionMatchmakingFollowedTelemetryEvent : FCrewSessionBaseSessionTelemetryEvent {
	FGuid NewCrewId; // 0x50
	int32_t ResultCode; // 0x60
	FString Message; // 0x68
};

struct FEmblemDefinitionModel {
	FGuid Id; // 0x0
	FName FriendlyName; // 0x10
	FText CampaignDescription; // 0x18
	FName CampaignId; // 0x50
	FStringAssetReference CampaignImagePath; // 0x58
	FText CampaignTitle; // 0x68
	FString CompanyId; // 0xa0
	UCompany* Company; // 0xb0
	FText MoreInfoFirst; // 0xb8
	FText MoreInfoSecond; // 0xf0
	FText MoreInfoFirstLocked; // 0x128
	FText MoreInfoSecondLocked; // 0x160
	FString RewardId; // 0x198
	bool HasActiveDuration; // 0x1a8
	bool MarkAsNew; // 0x1a9
	FDateTime ActiveFrom; // 0x1b0
	FDateTime ActiveUntil; // 0x1b8
	uint32_t UnlockAtNumCriteriaCompleted; // 0x1c0
	FString Name; // 0x1c8
	FEmblemSetDefinition EmblemSet; // 0x1d8
};

struct FEventReceiveAmmoTransferComponentState {
	UAmmoTransferComponent* Source; // 0x0
};

struct FDistanceThrottledRandomParticleSystemPickerEntry {
	float DistanceInMetres; // 0x0
	TArray<FDistanceThrottledRandomParticleSystemPickerSurfaceTypeEntry> EffectsBySurfaceType; // 0x8
	int32_t MaxNumber; // 0x18
};

struct FMerchantQuestStartTelemetryEvent {
	FString PickupLocationIslandName; // 0x0
	FString DeliveryLocationIslandName; // 0x10
	int32_t RealTimeLimitInMins; // 0x20
	FString DeliverByTimeText; // 0x28
	TArray<FMerchantQuestStartTelemetryEventRequiredItemEntry> ContractList; // 0x38
};

struct FSignOutButtonVisibilityEvent {
	bool IsVisible; // 0x0
};

struct FAnimNode_HIKSetProperty : FAnimNode_HIKBase {
	EHIKProperty Property; // 0x48
	float Value; // 0x4c
};

struct FRevivingWindowStart {
	FDamageInstance DamageInstance; // 0x0
	ECharacterDeathType CharacterDeathType; // 0x28
	ACharacter* RevivableCharacter; // 0x30
};

struct FAIPartIdNumVariantInfo {
	FName AIPartId; // 0x0
	int32_t NumVariants; // 0x8
};

struct FCreativeCrewMember {
	int32_t CrewId; // 0x0
	FString GamerTag; // 0x8
	FString XUID; // 0x18
};

struct FShipPartConnections {
	FName AnchorName; // 0x0
	FName CapstanName; // 0x8
	FName RudderName; // 0x10
	FName WheelName; // 0x18
	FName MainMastName; // 0x20
	FName MainMastSailHoistRightName; // 0x28
	FName MainMastSailHoistLeftName; // 0x30
	FName MainMastSailAngleRightName; // 0x38
	FName MainMastSailAngleLeftName; // 0x40
	FName MizzenMastName; // 0x48
	FName MizzenMastSailHoistRightName; // 0x50
	FName MizzenMastSailHoistLeftName; // 0x58
	FName MizzenMastSailAngleRightName; // 0x60
	FName MizzenMastSailAngleLeftName; // 0x68
	FName ForeMastName; // 0x70
	FName ForeMastSailHoistRightName; // 0x78
	FName ForeMastSailHoistLeftName; // 0x80
	FName ForeMastSailAngleRightName; // 0x88
	FName ForeMastSailAngleLeftName; // 0x90
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FAchievementHeavyAttackRivalOffTheirShip {
	AAthenaCharacter* Character; // 0x0
	float TimeWindowInSeconds; // 0x8
};

struct FLoadoutEntry {
	FPirateIdentity PirateIdentity; // 0x0
	FLoadout Loadout; // 0x78
	FString Tag; // 0xc0
};

struct FChanceForSharksToBlockSirenEncounterData {
	int32_t NumberOfSharks; // 0x0
	float ChanceToSpawn; // 0x4
	float RadiusToCheck; // 0x8
};

struct FEventCharacterMovementModeChanged {
	EMovementMode PreviousMovementMode; // 0x0
	EMovementMode NewMovementMode; // 0x1
	char PreviousCustomMovementMode; // 0x2
	char NewCustomMovementMode; // 0x3
};

struct FShowRadialInventory : FRadialInventoryEvent {
	FText ActionText; // 0x8
	FRadialActionBindings ActionBindings; // 0x40
	bool AsLinkedRadial; // 0x60
};

struct FHideInObjectActionStateConstructionInfo : FControlObjectActionStateConstructionInfo {
	FNetActorPtr LoadableObject; // 0x48
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FGameModePrefix {
	FString Prefix; // 0x0
	FString GameMode; // 0x10
};

struct FWeightedAnimationTimeout {
	FFloatRange TimeoutRange; // 0x0
	float Weighting; // 0x10
};

struct FGetBeaconsDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FBeaconStateData> Data; // 0x8
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FUIPremiumStoreItemInteractTelemetryEvent {
	FString CurrencyUsed; // 0x0
	FString EngagementOutcome; // 0x10
	FString ItemCost; // 0x20
	FString ItemName; // 0x30
	FString PageName; // 0x40
	FString SessionId; // 0x50
};

struct FAthenaAnimationIKFootplantingAnimData {
	bool Active; // 0x0
	float HipHeight; // 0x4
	float HipPullStrength; // 0x8
	float FloorContactDownDistance; // 0xc
	float RelativePlantDownDistance; // 0x10
	float FloorContactToRangeStart; // 0x14
	float FloorContactToRangeEnd; // 0x18
	float RelativePlantToRangeStart; // 0x1c
	float RelativePlantToRangeEnd; // 0x20
	float IKLegStretch; // 0x24
};

struct FEmissaryCompanyActionReward {
	EEmisaryCompanyActionType CompanyActionType; // 0x0
	float Amount; // 0x4
};

struct FCrewRequestedRivalChangeEvent {
	FGuid CrewId; // 0x0
};

struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
	FExposedValueHandler EvaluateGraphExposedInputs; // 0x8
};

struct FEventInactivityDetectionActionPerformed {
	FPirateIdentity PirateIdentity; // 0x0
	FName ActionName; // 0x78
};

struct FQuestVariableCrewShipManifest : FQuestVariableActor {
	FName ParamName; // 0x8
};

struct FClientNPCDialogOptionUsedTelemetryEvent {
	FString DialogOptionName; // 0x0
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FPetSpeciesViewModel {
	FString Name; // 0x0
	FString Icon; // 0x10
	FString Description; // 0x20
	bool HasNewStuff; // 0x30
	bool HasOwnedOffer; // 0x31
	TArray<FPetBreedViewModel> Breeds; // 0x38
};

struct FAISpawnOverride {
	FStringAssetReference FormOverride; // 0x0
};

struct FHoleContainer {
	TArray<TWeakObjectPtr<AHole>> Holes; // 0x0
	FName IslandName; // 0x10
};

struct FPlayNpcAnimationNetworkEvent : FBoxedRpc {
	AActor* TargetActor; // 0x10
	FName AnimationNameToPlay; // 0x18
	UMusicZoneComponent* LocalMusicZone; // 0x20
	APlaceableReaction* PlaceableReaction; // 0x28
};

struct FThrowGrenadeRpc : FBoxedRpc {
	FVector RelativeLocalThrowLocation; // 0x10
	FRotator LocalLaunchAngle; // 0x1c
	float LocalLaunchSpeed; // 0x28
	FVector LocalWielderVelocity; // 0x2c
};

struct FAIProgressiveWavesSpawnerArchive : FAISpawnerArchive {
	int32_t CurrentWaveIndex; // 0x8
};

struct FNavDataConfig : FNavAgentProperties {
	FColor Color; // 0x30
	FVector DefaultQueryExtent; // 0x34
	ANavigationData* NavigationDataClass; // 0x40
	FStringClassReference NavigationDataClassName; // 0x48
};

struct FLevelUnloadCompletedTelemetryEvent : FStreamingTelemetryBaseEvent {
	FString LevelName; // 0x0
	int32_t LodLevel; // 0x10
	FVector PlayerPosition; // 0x14
	float DistanceFromPlayer; // 0x20
	float DistanceFromBoundsToPlayer; // 0x24
	bool PlayerIsWaitingToSpawn; // 0x28
	bool PlayerIsTeleporting; // 0x29
};

struct FRopeCatenarySwingParams {
	float LengthForNeutralSwing; // 0x0
	float LengthBias; // 0x4
};

struct FFrontendCrewMember {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
	bool CurrentPlayer; // 0x20
	bool Captain; // 0x21
	bool ReservedForPlayerThatDroppedConnection; // 0x22
};

struct FQuestStartXMarksTheSpotTelemetryEvent {
	FString IslandName; // 0x0
	int32_t NumTreasures; // 0x10
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FPetAnimationDataStructure {
	FPetAnimationDataBeingHeld BeingHeld; // 0x0
	FPetAnimationDataRoaming Roaming; // 0x160
	UWeightedAnimationLoadOnDemandDataAsset* WeightedAnimationLoadOnDemandDataRoaming; // 0x200
	UWeightedAnimationLoadOnDemandDataAsset* WeightedAnimationLoadOnDemandDataHeld; // 0x208
	UWeightedAnimationLoadOnDemandDataAsset* WeightedAnimationLoadOnDemandDataShow; // 0x210
};

struct FTinySharkCollidedTelemetryEvent {
	FString TinySharkId; // 0x0
	FString TinySharkName; // 0x10
	FString ObstacleName; // 0x20
	FVector CollisionLocation; // 0x30
	FVector HomeLocation; // 0x3c
	FString BehaviourTreeInfo; // 0x48
	FString BlackboardInfo; // 0x58
};

struct FChestEntitlementViewModel {
	EChestEntitlementActionType Action; // 0x0
	FString ItemDesc; // 0x8
	FString Name; // 0x18
	FString ThumbnailImageUrl; // 0x28
	FString PreviewImageUrl; // 0x38
	FString Description; // 0x48
	int32_t SlotId; // 0x58
	FString Category; // 0x60
	FString EmoteBackgroundImageUrl; // 0x70
	FString EmoteIconImageUrl; // 0x80
	bool DoesPlayerOwnEntitlement; // 0x90
};

struct FContestMatchmakingClientResponseModel {
	FTimespan EstimatedWaitTime; // 0x0
	FTimespan RetryAfter; // 0x8
};

struct FLinearTransitionLadderActionStateConstructionInfo : FTransitionLadderActionStateConstructionInfo {
	float StartingInteractionHeight; // 0x48
	char ClimbId; // 0x4c
	ELadderTransitionMode LadderTransitionMode; // 0x4d
	FLadderDefinition LadderDefinition; // 0x50
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FSeasonChallengeGroupInfo {
	FGuid Id; // 0x0
	FString LocalizedTitle; // 0x10
	FString LocalizedCopy; // 0x20
	TArray<FSeasonChallengeInfo> Challenges; // 0x30
};

struct FCurrencyGrantedNotificationUIEvent {
	EWalletCurrencyId CurrencyId; // 0x0
	int32_t Amount; // 0x4
	FString DisplayAmount; // 0x8
	FString EmissaryAddition; // 0x18
	FString EmissaryId; // 0x28
};

struct FNPCOneShotAnimationElement {
	FName SequenceName; // 0x0
	TArray<FNPCAnimationSequence> OneShotSequence; // 0x8
};

struct FDestroyingUnsafeExpiredWreckEvent {
	FVector Location; // 0x0
	FGuid CrewId; // 0xc
};

struct FResourceCacheEntry {
	TArray<UObject*> Resources; // 0x0
};

struct FEventPawnFinishedDying {
	APawn* AIPawn; // 0x0
	ECharacterDeathType DeathType; // 0x8
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x48
};

struct FPlayerNoteStateChangeTelemetryEvent {
	FGuid NoteId; // 0x0
	FString NoteState; // 0x10
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FUseCannonActionStateParams {
	FUseMountedWeaponActionStateParams MountedWeaponParams; // 0x0
	float ReloadAttemptRepeatRate; // 0x58
};

struct FGameplayAbilityBindInfo {
	EGameplayAbilityInputBinds Command; // 0x0
	UGameplayAbility* GameplayAbilityClass; // 0x8
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x30
};

struct FNPCOnDespawnVOEntry {
	ENPCOnSurfaceDespawnReason DespawnReason; // 0x0
	FName VOGroupName; // 0x4
};

struct FHullCharringPersistenceModel : FPersistenceModel {
	TArray<float> TimeSpentCharring; // 0x0
};

struct FPlayerCompanyProgressCache {
	ECompanyStatus CompanyProgressStatus; // 0x0
	TMap<FName, FPlayerCompanyProgress> ProgressInfoByCompany; // 0x8
};

struct FTeleportStageCompletedEvent {
	FGuid Id; // 0x0
	float Duration; // 0x10
	ETeleportActionStateReason Reason; // 0x14
	ETeleportActionStateStage CompletedStage; // 0x15
};

struct FRewardRequestForPirateEvent {
	FGuid RequestID; // 0x0
	FPirateIdentity PirateIdentity; // 0x10
	FGuid CrewId; // 0x88
	FName RewardId; // 0x98
	FName CompanyAffiliation; // 0xa0
	FName EmissaryAffiliation; // 0xa8
	int32_t EmissaryLevel; // 0xb0
	bool FromInsecureSource; // 0xb4
	bool NotifyPlayer; // 0xb5
};

struct FIndividualMeshScoringToAdd {
	FName MeshName; // 0x0
	FIndividualMeshScoring IndividualMeshScoring; // 0x8
};

struct FEventAthenaPlayerControllerBegunPlay {
	AAthenaPlayerController* Controller; // 0x0
};

struct FGameplayEffectSpec {
	UGameplayEffect* Def; // 0x0
	TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8
	FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18
	float Duration; // 0x50
	float Period; // 0x54
	float ChanceToApplyToTarget; // 0x58
	FTagContainerAggregator CapturedSourceTags; // 0x60
	FTagContainerAggregator CapturedTargetTags; // 0x108
	FGameplayTagContainer DynamicGrantedTags; // 0x1b0
	FGameplayTagContainer DynamicAssetTags; // 0x1d8
	TArray<FModifierSpec> Modifiers; // 0x200
	int32_t StackCount; // 0x210
	char bCompletedSourceAttributeCapture : 1; // 0x214
	char bCompletedTargetAttributeCapture : 1; // 0x214
	char bDurationLocked : 1; // 0x214
	TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x218
	FGameplayEffectContextHandle EffectContext; // 0x278
	float Level; // 0x298
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FEventPlayerReliquishedControlOfControllable {
	AActor* ControllableObject; // 0x0
};

struct FMeshRegistration {
	TArray<FIndividualMeshConsumer> RegisteredComponents; // 0x0
	UMeshMemoryConstraintCategory* MeshFallbackCategory; // 0x18
	UObject* FallbackMeshToAssign; // 0x20
};

struct FFishingComedyItemInfo {
	float Weight; // 0x0
	UItemDesc* ItemDesc; // 0x8
	FTransform SpawnOffset; // 0x10
};

struct FPlayerPositionTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<APlayerController> PlayerController; // 0x0
};

struct FAthenaAnimationFishingParams {
	EFishingState FishingState; // 0x0
	bool InFishing; // 0x1
	FVector2D RodBend; // 0x4
	float ReelSpeed; // 0xc
	bool CastFailed; // 0x10
	bool IsFishHookedAndVisible; // 0x11
	FVector2D PlayerInputForce; // 0x14
	float TensionShake; // 0x1c
	float LineSnapShake; // 0x20
	bool IKIsActive; // 0x24
	float IKBlendInSpeed; // 0x28
	float IKBlendIOutSpeed; // 0x2c
	bool IsComedyItem; // 0x30
	EFishingState FishingJIPState; // 0x31
};

struct FPlayerBanishedToBrig {
	FString PlayerName; // 0x0
};

struct FServiceStatusNotificationModel {
	uint32_t NotificationId; // 0x0
	FDateTime ActivatedDateTimeUtc; // 0x8
	FGuid CorrelationId; // 0x10
};

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x30
	TArray<float> BlendTime; // 0x40
	EAlphaBlendOption BlendType; // 0x50
	UCurveFloat* CustomBlendCurve; // 0x58
	TArray<FAlphaBlend> Blends; // 0x60
	TArray<float> BlendWeights; // 0x70
	TArray<float> RemainingBlendTimes; // 0x80
	int32_t LastActiveChildIndex; // 0x90
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneAudioSectionTemplateData AudioData; // 0x18
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FEventAIBountySpawnerAllTargetsKilled {
	FName IslandName; // 0x0
	FGuid CrewId; // 0x8
	AActor* InstigatorOfFinalAIPawnDeath; // 0x18
};

struct FParticleVisualisation {
	FActorComponentSelector TargetParticles; // 0x0
	float Delay; // 0x10
	float DelayAfterPutOutParticles; // 0x14
	UParticleSystem* PutOutParticles; // 0x18
	UParticleSystemComponent* ParticleSystem; // 0x20
};

struct FLoadoutCategory {
	FString CategoryName; // 0x0
	FString EntitlementId; // 0x10
};

struct FEventSetFishingFloatActor {
	AActor* FishingFloat; // 0x0
};

struct FShipCurseVFXTemplate {
	AActor* ActorClass; // 0x0
	UParticleSystem* Template; // 0x8
	FString SocketNameSubstring; // 0x10
};

struct FAllianceCreatedTelemetryEvent {
	FGuid AllianceId; // 0x0
	FGuid OfferingCrewSessionId; // 0x10
	FGuid AcceptingCrewSessionId; // 0x20
};

struct FEmblemUnlockedEvent {
	FGuid EmblemId; // 0x0
};

struct FTargetSkillsetProgressionPair {
	FStringAssetReference CrewSkillset; // 0x0
	FStringAssetReference CaptainSkillset; // 0x10
};

struct FUIAdventuresDataErrorTelemetryEvent {
	FString ErrorMessage; // 0x0
	FString ErrorStack; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FTreasureMapTextEntry {
	FString Name; // 0x0
	FText Substitution; // 0x10
};

struct FMovieSceneMarginSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve TopCurve; // 0x38
	FRichCurve LeftCurve; // 0xb0
	FRichCurve RightCurve; // 0x128
	FRichCurve BottomCurve; // 0x1a0
};

struct FShipDynamics {
	bool bProcessSailBasedFakeRoll; // 0x0
	float SidewaysForceFromSailsForMaxFakeRoll; // 0x4
	float BuoyancyProbeZOffsetAtMaxFakeRoll; // 0x8
	float MinHullSubmersionToApplyNoHullDragOrRudder; // 0xc
	float CapsizedAngleThreshold; // 0x10
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FHUDBlurParams {
	UMaterialParameterCollection* ScreenEffectsMaterialParameterCollection; // 0x0
	FHUDBlurSourceParams MenuBlurParams; // 0x8
	FHUDBlurSourceParams MigrationBlurParams; // 0x10
};

struct FPetFeedingAnimationData {
	EAthenaAnimationPetRoamingState AnimationState; // 0x0
	float AnimationTimeout; // 0x4
};

struct FSpotLightData {
	float InnerConeAngle; // 0x0
	float OuterConeAngle; // 0x4
	float KickBackRatio; // 0x8
};

struct FPlayerSpawnCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FAggressiveGhostShipEncounterFormationDescGroup {
	int32_t NumShipsInFormation; // 0x0
	TArray<FAggressiveGhostShipEncounterFormationDesc> FormationDescs; // 0x8
};

struct FFFTWaterComponentWaveParticleType {
	FVector2D SpawnRadiusRange; // 0x0
	FVector2D FoamRange; // 0x8
	FVector2D HeightRange; // 0x10
	FVector2D AngleRange; // 0x18
	FVector2D CalmWaterDampeningFactorRange; // 0x20
	float Density; // 0x28
	UParticleComputeShaderData* ParticleComputeShaderData; // 0x30
};

struct FServerCrewResponseModel {
	TArray<FServerCrewModel> Crews; // 0x0
	TMap<FString, FString> OptionalPlayModeInfo; // 0x10
	FTimespan RetryAfter; // 0x60
	FTimespan MigrationThreshold; // 0x68
	FTimespan ExpireAfter; // 0x70
};

struct FEventCompanyScreenDisplayInformationRequest {
	FString CompanyId; // 0x0
};

struct FEmissaryEncounteredTinySharkEvent {
	FName CompanyName; // 0x0
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
	bool bForceRebuild; // 0x40
	FSimplygonMaterialLODSettings MaterialLODSettings; // 0x48
};

struct FCrewShipEntry {
	FGuid CrewId; // 0x0
	AActor* Ship; // 0x10
};

struct FMechanismMaterialOverride {
	UMechanismMaterialGroup* Group; // 0x0
	FStringAssetReference Material; // 0x8
};

struct FVoyageStartTelemetryEventPerQuest {
	FGuid QuestId; // 0x0
	FString QuestType; // 0x10
};

struct FStormStrengthType {
	float Strength; // 0x0
	float Chance; // 0x4
};

struct FPenaltyRequestEvent {
	FGuid RequestID; // 0x0
	FPirateIdentity PirateIdentity; // 0x10
	FName PenaltyId; // 0x88
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FPlayerBuriedItemServiceMapAddedToTavernBoardEvent {
	FString PlayerName; // 0x0
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FTradeRouteMapTextLayout {
	TArray<FTradeRouteMapTextData> TextFields; // 0x0
};

struct FAthenaAICharacterWasKilledWhileCursed {
	TArray<EPlayerCurseTag> Curses; // 0x0
	AActor* Instigator; // 0x10
};

struct FNotesManagementRemoteServiceAddNoteScheduleModel {
	FGuid NoteId; // 0x0
	FDateTime ActiveFrom; // 0x10
	FDateTime ActiveTo; // 0x18
	TArray<FString> CompletionEventIds; // 0x20
	FString RewardId; // 0x30
};

struct FEventFaunaAnimationSnakeInAttackStance {
	bool SnakeInAttackStance; // 0x0
	EFaunaAnimationSnakeAttackDirection SnakeAttackDirection; // 0x1
};

struct FAllianceRewardRequestMessage {
	FGuid RequestID; // 0x0
	FGuid AllianceId; // 0x10
	FRewardRequestCrew PrimaryRecipient; // 0x20
	TArray<FRewardRequestCrew> SecondaryRecipients; // 0x50
	FName RewardId; // 0x60
	FName CompanyAffiliation; // 0x68
	FGuid BootyId; // 0x70
	FName NPCName; // 0x80
	bool NotifyPlayer; // 0x88
	EPlayMode Playmode; // 0x89
	EPlayModeVariant PlayModeVariant; // 0x8a
	bool DontRewardCurrency; // 0x8b
	bool DontRewardXp; // 0x8c
	bool DontRewardSeasonXp; // 0x8d
};

struct FFogTypeToAudio {
	EFogBankType FogBankType; // 0x0
	UWwiseEvent* FogMusicPlayEvent; // 0x8
	UWwiseEvent* FogMusicStopEvent; // 0x10
};

struct FMovieSceneSpawnable {
	FGuid Guid; // 0x0
	FString Name; // 0x10
	UObject* ObjectTemplate; // 0x20
	TArray<FGuid> ChildPossessables; // 0x28
	ESpawnOwnership Ownership; // 0x38
};

struct FTreasureMapWidgetText : FTreasureMapWidget {
	float Scale; // 0x18
	bool CutoutTextStyle; // 0x1c
};

struct FMovieSceneLegacyTrackInstanceTemplate : FMovieSceneEvalTemplate {
	UMovieSceneTrack* Track; // 0x18
};

struct FClassicFireworkDebugList {
	TArray<UItemDescSpawnData*> Peony; // 0x0
	TArray<UItemDescSpawnData*> Crackle; // 0x10
	TArray<UItemDescSpawnData*> Strobe; // 0x20
	TArray<UItemDescSpawnData*> Brocade; // 0x30
	TArray<UItemDescSpawnData*> Comet; // 0x40
	TArray<UItemDescSpawnData*> HummingSnakes; // 0x50
	TArray<UItemDescSpawnData*> Cakes; // 0x60
};

struct FQuestVarTaleQuest : FQuestVariable {
	FName ParamName; // 0x8
};

struct FCanvasWorldMapShipIcons {
	UShipSize* ShipSize; // 0x0
	UTexture* ShipTexture; // 0x8
	UTexture* OffscreenTexture; // 0x10
};

struct FPioneerRewardEpochCompleteEvent {
	int64_t PlayTime; // 0x0
	FPirateIdentity PirateIdentity; // 0x8
	FGuid PlayerGameId; // 0x80
};

struct FShipTemplate {
	UShipSize* ShipSizeObject; // 0x0
};

struct FItemLoadoutItemCategoryAddedEvent {
	UItemCategory* ItemCategory; // 0x0
};

struct FFaunaAnimationSnakeBiteStructure {
	UAnimSequence* BiteStanceIn; // 0x0
	UAnimSequence* BiteStanceOut; // 0x8
	UAnimSequence* BiteStanceLoopIdle; // 0x10
	UAnimSequence* BiteStanceAttack; // 0x18
};

struct FSalvageSpawnCompRequest {
	USalvageItemSpawnComponent* SalvageItemSpawnComp; // 0x0
};

struct FVoyageChapterBegun {
	int32_t ChapterIndex; // 0x0
	int32_t ChapterCount; // 0x4
};

struct FAlliancePennantData {
	FStringAssetReference PennantDesc; // 0x0
	TArray<FAllianceNotificationData> PopUpNotificationDescs; // 0x10
	FStringAssetReference GenericPopupAllianceIcon; // 0x20
	UTexture* MapFlagIcon; // 0x30
};

struct FAIShipContextDescGenerationParams {
	FAIShipContextDescGenerationSharedParams SharedParams; // 0x0
	TArray<FAIShipContextDescGenerationSharedParams> EncounterSpecificParams; // 0x60
	TArray<FAIShipContextDescGenerationShipSpecificParams> ShipSpecificParams; // 0x70
};

struct FQuestParams {
	EQuestType Type; // 0x0
	FXMarksTheSpotQuestParams XMarksTheSpot; // 0x8
	FRiddleQuestParams Riddle; // 0x90
	FBountyQuestParams Bounty; // 0xd0
	FMerchantQuestParams Merchant; // 0x218
	FCargoRunQuestParams CargoRun; // 0x2d8
	FMatchmakingQuestParams Matchmake; // 0x360
	FStagingQuestParams Staging; // 0x361
	FEmergantVoyageQuestParams EmergantVoyage; // 0x362
	FRewardQuestParams Reward; // 0x363
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

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FRichCurve FadeCurve; // 0x18
	FLinearColor FadeColor; // 0x90
	char bFadeAudio : 1; // 0xa0
};

struct FSeasonReward {
	FGuid Id; // 0x0
	int64_t Tier; // 0x10
	int64_t Level; // 0x18
};

struct FAllianceNotificationData {
	EAllianceNotificationType NotificationType; // 0x0
	UPopUpMessageDesc* PopUpDesc; // 0x8
};

struct FRequestEmblemProgressEvent {
	FPirateIdentity PirateIdentity; // 0x0
	FGuid RequestID; // 0x78
};

struct FLoadableProjectileData {
	FStringAssetReference DataAsset; // 0x0
	int32_t GeneratedDataRNGSeed; // 0x10
	bool ShouldProjectileTrailDoReflections; // 0x14
};

struct FPuzzleVaultStartedTelemetryEvent {
	FGuid VaultId; // 0x0
	FName VaultType; // 0x10
};

struct FDisplayServiceStatusNotificationClient {
	uint32_t NotificationId; // 0x0
	FText NotificationText; // 0x8
	FTimespan Duration; // 0x40
};

struct FEventSetFishingTensionShake {
	float TensionShake; // 0x0
};

struct FAthenaAIAbilityPlayerBasedRange {
	int32_t MaxPlayers; // 0x0
	FWeightedProbabilityRangeOfRanges WeightedArray; // 0x8
};

struct FBuriedFactor {
	int32_t CurrentBuriedFactor; // 0x0
	int32_t FactorToConsiderFullyBuried; // 0x4
	int32_t BuryStep; // 0x8
	int32_t ExhumeStep; // 0xc
	EDigDirection LastDigDirection; // 0x10
};

struct FRequestPetChestPreviewUpdateEvent {
	EChestEntitlementActionType Action; // 0x0
	FString Subject; // 0x8
};

struct FCommodityTypeDataEntry {
	FName CommodityType; // 0x0
	FName DisplayName; // 0x8
};

struct FUpdateRivalVoteCountUIEvent {
	int32_t VoteCount; // 0x0
	int32_t VoteLimit; // 0x4
	bool HasPlayerVotedInFavour; // 0x8
};

struct FEmissaryKillScaleFactor {
	int32_t KillCount; // 0x0
	float ScaleFactor; // 0x4
};

struct FReverbPresetControllerSettings {
	uint32_t VectorsPerSegment; // 0x0
	uint32_t TracesPerSegmentPerFrame; // 0x4
	uint32_t HorizontalSegments; // 0x8
	float HorizontalConeSegmentElevationAngle; // 0xc
	float UpwardsConeAngle; // 0x10
	float TraceVectorLength; // 0x14
	float TimeToDiscardSample; // 0x18
	float DistanceToDiscardSample; // 0x1c
	float BiasTowardsVerticalSegment; // 0x20
	uint32_t MaxNumSampleFramesInHistory; // 0x24
};

struct FPoolDensityData {
	UWwiseObjectPoolWrapper* WwiseObjectPoolDensityWrapper; // 0x0
	FWwiseEmitter DensityEmitter; // 0x8
};

struct FGameEventSettings {
	UGameEventType* GameEventType; // 0x0
	float RepeatQueryTime; // 0x8
	float InertQueryTime; // 0xc
	float InertCancelTime; // 0x10
	FWeightedProbabilityRangeOfRanges FirstRegenInterval; // 0x18
	FWeightedProbabilityRangeOfRanges RegenInterval; // 0x48
	FWeightedProbabilityRangeOfRanges SpawnTime; // 0x78
	bool Required; // 0xa8
};

struct FTriggerStartUseEvent {
	UNotificationInputId* InputID; // 0x0
	AActor* ActionSource; // 0x8
	AActor* Usable; // 0x10
	EActionStateMachineTrackId TrackToUse; // 0x18
};

struct FCoastObject {
	USplineComponent* CoastSplineInternal; // 0x0
	USplineComponent* InnerSplineInternal; // 0x8
	FVector SplineOrigin; // 0x10
	float CoastalLookupSquaredDistance; // 0x1c
};

struct FAlwaysSkipMapTableAnimationChangeEvent {
	bool AlwaysSkipMapTableAnimation; // 0x0
};

struct FShipFireLight {
	FShipFireLightRelativeSpawnDesc Desc; // 0x0
	UPointLightComponent* PointLight; // 0x58
	UStaticMeshComponent* AreaLight; // 0x60
	UMaterialInstanceDynamic* AreaLightMaterial; // 0x68
};

struct FPrimitiveComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FEventCollectedMegalodonSoul {
	ETinySharkTypes SoulType; // 0x0
};

struct FAthenaWorldSettingsGameEventSchedulerSettingsConfiguration {
	FName FeatureFlag; // 0x0
	EPlayMode RequiredPlayMode; // 0x8
	UGameEventSchedulerSettingsAsset* EventSchedulerSettings; // 0x10
};

struct FEventApplyStatusPlayerCurse {
	FStatus Status; // 0x8
};

struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x18
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x28
	TArray<FColorParameterNameAndCurves> Colors; // 0x38
};

struct FServerWieldSet {
	FNetActorPtr WieldedItem; // 0x0
	int32_t EpochId; // 0x14
	bool Fast; // 0x18
};

struct FGameplayAbilitySpecContainer : FFastArraySerializer {
	TArray<FGameplayAbilitySpec> Items; // 0xa8
};

struct FDeactivateEmissaryForCrew {
	FGuid SessionId; // 0x0
	FName Company; // 0x10
	FGuid AssociatedCrew; // 0x18
	EEmissaryDeactivateReason EmissaryDeactivateReason; // 0x28
	int32_t EmissaryTotal; // 0x2c
};

struct FContestStateChangedEvent : FNetworkEventStruct {
	EContestState ContestState; // 0x10
};

struct FAshenWindsSkullRewardLevel {
	float MaximumChargePercentage; // 0x0
	FRewardId DefaultRewardId; // 0x4
	TArray<FCompanySpecificBootyReward> CompanyRewardIds; // 0x10
};

struct FShipAnnouncementShipDescription {
	FText ShipName; // 0x0
	FText ShipTitle; // 0x38
};

struct FPurchaseRequestFailedResponse {
	FGuid TransactionId; // 0x0
	EPurchaseRequestFailureReason Reason; // 0x10
};

struct FCharacterHitReactionDamagerTypeToAnimTypePair {
	UDamagerType* DamagerType; // 0x0
};

struct FActiveGameplayEffectsContainer : FFastArraySerializer {
	TArray<FActiveGameplayEffect> GameplayEffects_Internal; // 0xc8
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FCrewTrackedItemOwnershipSet {
	AActor* Item; // 0x0
	FGuid CrewId; // 0x8
};

struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData {
	FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10
	TArray<TWeakObjectPtr<AActor>> TargetActorArray; // 0x80
};

struct FServerAsyncLoadingCompleteAckNetworkEvent : FNetworkEventStruct {
	EServerAsyncLoadingAckReason Reason; // 0x10
};

struct FDebugMenuStatusDefinition {
	FName Identifier; // 0x0
	FStatus Status; // 0x8
};

struct FBountyQuestMugShotSet {
	UAthenaAIFormDataAsset* Form; // 0x0
	UTexture* MaleCaptainMugShot; // 0x8
	UTexture* FemaleCaptainMugShot; // 0x10
	UTexture* MaleCrewMugShot; // 0x18
	UTexture* FemaleCrewMugShot; // 0x20
};

struct FItemLoadoutComponentSlots {
	TArray<UWeaponItemCategory*> WeaponSlots; // 0x0
	TArray<FItemLoadoutSlot> Slots; // 0x10
};

struct FFontData {
	FString FontFilename; // 0x0
	UFontBulkData* BulkDataPtr; // 0x10
	EFontHinting Hinting; // 0x18
	TArray<char> FontData; // 0x20
};

struct FCookingClientRepresentation {
	bool Cooking; // 0x0
	bool HasItem; // 0x1
	AItemInfo* CurrentlyCookingItem; // 0x8
	FText CurrentCookingItemDisplayName; // 0x10
	UItemCategory* CurrentCookingItemCategory; // 0x48
	ECookingSmokeFeedbackLevel SmokeFeedbackLevel; // 0x50
	float VisibleCookedExtent; // 0x54
	float CurrentItemPlacementAngle; // 0x58
	FName CurrentCookableTypeName; // 0x5c
};

struct FFlatWaterMeshTextureOverride : FNameIndexPair {
	UTexture* Texture; // 0x10
};

struct FEventPlayerLeftAISpawnableWater {
	AActor* Player; // 0x0
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FPlayerBucketEmptyCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FCompanyReputationSummary {
	FReputationCompanyDisplayInformation CompanyData; // 0x0
	FCappedCount Commendations; // 0xe0
	FCappedCount Items; // 0xe8
	FCappedCount Promotions; // 0xf0
	FCappedCount Titles; // 0xf8
};

struct FMerchantMapItemData {
	FTreasureMapTextDesc Name; // 0x0
	UTexture* IconImage; // 0x48
	UItemDesc* CrateItemDesc; // 0x50
	TArray<FMerchantQuestItemDescAndReward> AcceptableAlternativeCrateItemData; // 0x58
	UFaunaSpecies* FaunaSpecies; // 0x68
	UFaunaBreed* FaunaBreed; // 0x70
	int32_t NumLeftToAllocate; // 0x78
	int32_t NumLeftToDeliver; // 0x7c
};

struct FFogBankSettings {
	EFogState FogState; // 0x0
	float Density; // 0x4
	FVector Scale; // 0x8
	FLinearColor FogColour; // 0x14
	float FadeInDuration; // 0x24
	float ActiveDuration; // 0x28
	float FadeOutDuration; // 0x2c
	bool Persistent; // 0x30
};

struct FMastPhysicsComponents {
	UPrimitiveComponent* MastBaseComponent; // 0x0
	UPrimitiveComponent* MastTopComponent; // 0x8
	UPrimitiveComponent* MastWeldedPhysicsBodyComponent; // 0x10
	UPrimitiveComponent* WeldedCrowsNestComponent; // 0x18
	UPrimitiveComponent* UnweldedCrowsNestComponent; // 0x20
	TArray<UPrimitiveComponent*> UnweldedCrossBeamComponents; // 0x28
};

struct FRequestPurchasePremiumShopOfferEvent {
	FGuid OfferId; // 0x0
	FString CatalogName; // 0x10
};

struct FTreasureMapWidgetTextWithScaledWidthBackground : FTreasureMapWidgetText {
	FTreasureMapWidgetTexture Background; // 0x20
	float MaxTextWidthForDefaultTextureScale; // 0x48
	float MinScaleModifier; // 0x4c
	float MaxScaleModifier; // 0x50
};

struct FReplicatedPhysicsState {
	UPrimitiveComponent* MovementBase; // 0x0
	USceneComponent* AttachParent; // 0x8
	FRepMovement ReplicatedMovement; // 0x10
	bool IsAttached; // 0x48
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	FName ObjectTypeName; // 0xc
	TArray<FResponseChannel> CustomResponses; // 0x18
	FString HelpMessage; // 0x28
	bool bCanModify; // 0x38
};

struct FRemoveAITypeSpawnRuleData {
	FString TypeName; // 0x0
	FString Region; // 0x10
};

struct FPirateGeneratorBakeFailureTelemetryEvent : FPirateGeneratorBakeTelemetryEvent {
	TArray<FString> CompleteTextures; // 0xa8
	TArray<FString> IncompleteTextures; // 0xb8
};

struct FContestBaseTelemetryFragment {
	FGuid ContestUniqueId; // 0x0
	FString ContestVoyageName; // 0x10
	EContestScoreId ContestScoreIdentifier; // 0x20
	float TimeRemainingInCurrentContestState; // 0x24
	FString ShipSize; // 0x28
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
	float PlayRate; // 0x4c
	bool bLoop; // 0x50
	UBlendSpaceBase* BlendSpace; // 0x58
	int32_t GroupIndex; // 0x60
	EAnimGroupRole GroupRole; // 0x64
	FBlendFilter BlendFilter; // 0x68
	TArray<FBlendSampleData> BlendSampleDataCache; // 0xf8
};

struct FPlayerInfoResponse {
	FText GamerTag; // 0x0
	FText Title; // 0x38
};

struct FMeshMemoryConstraintTelemetryBudgetFragment {
	FString Budget; // 0x0
	int32_t MemoryUsedInBytes; // 0x10
	int32_t NumUniqueMeshes; // 0x14
	int32_t NumUniqueMeshesUsingFallback; // 0x18
	int32_t NumTotalMeshesUsingFallback; // 0x1c
	int32_t ThresholdScale; // 0x20
};

struct FKrakenSpawnCustomServerEvent : FGlobalCustomServerEvent {
	FVector Position; // 0x18
};

struct FEventRequestSayPhraseWithNonLocalisedArgument {
	FString PhraseKey; // 0x0
	FString Argument; // 0x10
};

struct FWwiseSubtitle {
	FString Subtitle; // 0x0
};

struct FReviveEffectsValues {
	UMaterialInstanceDynamic* AstralCordPostProcessMID; // 0x0
};

struct FOnRepIsXboxGamePadOnlyServerEvent {
	bool IsXboxGamePadOnlyServer; // 0x0
};

struct FPlayerItemUsageEndCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FEmissaryLevelProgressUpdatedEvent {
	float LevelProgress; // 0x0
	FGuid AssociatedCrew; // 0x4
};

struct FPremiumStoreItemsSetView {
	FGuid Id; // 0x0
	FString PageTitle; // 0x10
	FString PageIcon; // 0x20
	TArray<FPremiumStoreItemsView> Items; // 0x30
	FString TopBannerUrl; // 0x40
	FString BottomBannerUrl; // 0x50
};

struct FStreamingStatusModel {
	FPirateIdentity PirateIdentity; // 0x0
	TMap<FString, FStreamSnapshotModel> StreamSnapshots; // 0x78
};

struct FStorySpawnedActorsList {
	FName StoryName; // 0x0
	TArray<FActorLocationPair> ActorLocations; // 0x8
	TArray<FNamedPointsActorLocation> NamedPointsActorLocations; // 0x18
};

struct FAthenaAnimationPlayingEquipAnimations {
	UAnimSequence* Equip; // 0x0
	UBlendSpace* EquipAsBlendSpace; // 0x8
	UBlendSpace* EquipSwimming; // 0x10
};

struct FWatercraftSpawnCustomServerEvent : FGlobalCustomServerEvent {
	FString WatercraftId; // 0x18
};

struct FFiredFromActorActionStateParams {
	float GravityScaleOverride; // 0x0
	float MassOverride; // 0x4
	float UnderwaterBrakingFactorOverride; // 0x8
	float UnderwaterBrakingFactorOverrideDuration; // 0xc
	FVector2D MaskFiringLagScaleMinMax; // 0x10
	FVector2D MaskFiringLagScalingTimeMinMax; // 0x18
	float MaskFiringLagSpeedToleranceSquared; // 0x20
	float TimeUntilRevertingIgnoredActors; // 0x24
};

struct FFireworkAmbientLightData {
	float FadeInTimer; // 0x0
	float FadeOutTimer; // 0x4
	float LifetimeTimer; // 0x8
	float Radius; // 0xc
	float AmbientIntensity; // 0x10
};

struct FAthenaAnimationSkeletonShipCaptainAnimations {
	UAnimSequence* EnterDockedPose; // 0x0
	TArray<UAnimSequence*> DockedIdles; // 0x8
	UAnimSequence* ExitDockedPose; // 0x18
	UAnimSequence* Taunt; // 0x20
	UAnimSequence* RamInto; // 0x28
	UAnimSequence* RamCycle; // 0x30
	UAnimSequence* RamImpact; // 0x38
	UAnimSequence* RamOutOf; // 0x40
};

struct FGameplayTagRequirements {
	FGameplayTagContainer RequireTags; // 0x0
	FGameplayTagContainer IgnoreTags; // 0x28
};

struct FWaitingToSpawnActionStateParams {
	float ClientStartedTimeout; // 0x0
	float ClientConditionsCompleteTimeout; // 0x4
	float ScreenFadeInTime; // 0x8
	float TeleportCompleteTimeout; // 0xc
	float TeleportNetRelevancyTimeout; // 0x10
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FPlayerRequiresMermaidTelemetryEvent {
	EPlayerAbandonedReason Reason; // 0x0
};

struct FRiddleQuestDesc : FQuestDesc {
	TArray<FRiddleQuestGateDesc> Gates; // 0x28
	float IslandRotation; // 0x38
	UTexture* MapInventoryTexture; // 0x40
	FVector TreasureChestWorldSpaceLocation; // 0x60
	UItemDesc* TreasureChestDesc; // 0x70
	UItemSpawnData* TreasureSpawnData; // 0x78
	float DigRadius; // 0x80
	UAIBoobyTrapSpawner* BoobyTrapSpawner; // 0x88
	UTreasureMapItemDesc* OverrideTreasureMapItemDesc; // 0x90
};

struct FAimSensitivitySettingsEntry {
	EAimSensitivitySettingCategory SettingCategory; // 0x0
	FAimSensitivitySettingParams SettingParams_Mouse; // 0x4
	FAimSensitivitySettingParams SettingParams_Controller; // 0x10
};

struct FGameplayEffectExecutionDefinition {
	UGameplayEffectExecutionCalculation* CalculationClass; // 0x0
	FGameplayTagContainer PassedInTags; // 0x8
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x30
	TArray<UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x40
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FRepairObjectActionStateSerialisableData : FActionStateSerialisableData {
	bool SuccessfulRepair; // 0x30
};

struct FMapTransformRenderData {
	FVector2D Pivot; // 0x0
	FVector2D Position; // 0x8
	EBlendMode BlendMode; // 0x10
	FVector2D Size; // 0x14
	float RotationToNorth; // 0x1c
	float RotationOffset; // 0x20
};

struct FPetSpawnActionStateParams {
	float LandingHeight; // 0x0
	float LandingTime; // 0x4
	float TotalGhostShaderTime; // 0x8
	float TimeToTriggerVFX; // 0xc
	UObject* SpawnVFX; // 0x10
	FLinearColor SpawnVFXColour; // 0x18
	UWwiseEvent* SpawnSFX; // 0x28
	UWwiseEvent* StopSpawnSFX; // 0x30
	float TotalSpawningTime; // 0x38
};

struct FPremiumStoreItemsView {
	FString Title; // 0x0
	TArray<FPremiumStoreOffer> Items; // 0x10
	FString TopBannerUrl; // 0x20
	FString BottomBannerUrl; // 0x30
};

struct FMerchantQuestContractExpiredNetworkEvent : FNetworkEventStruct {
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	FGuid PathGuid; // 0x18
	FRichCurve TimingCurve; // 0x28
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xa0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xa1
	char bFollow : 1; // 0xa4
	char bReverse : 1; // 0xa4
	char bForceUpright : 1; // 0xa4
};

struct FTrackingNoiseGenerator {
	UCurveFloat* ParallelOffsetCurve; // 0x0
	float OscillationTime; // 0x8
};

struct FStatBatchMessageValues {
	TArray<uint64_t> Values; // 0x0
};

struct FContestMapLayoutCrew {
	FTreasureMapWidgetTexture CrewIcon; // 0x0
	FTreasureMapWidgetTexture ScoreIcon; // 0x28
	FTreasureMapWidgetTexture UnderlineIcon; // 0x50
	FTreasureMapWidgetText CrewName; // 0x78
	FTreasureMapWidgetText Score; // 0x98
};

struct FTestNetworkEvent : FNetworkEventStruct {
	int32_t Data; // 0x10
};

struct FEventReceiveChestOfRageComponentState {
	UChestOfRageComponent* Source; // 0x0
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

struct FAthenaAnimationSkeletonShipCaptainParams {
	FAthenaAnimationSkeletonShipCaptainAnimations AllSkeletonShipCaptainAnimations; // 0x0
	UAnimSequence* ShipCaptainIdleCycleA; // 0x48
	UAnimSequence* ShipCaptainIdleCycleB; // 0x50
	ESkeletonShipCaptainDockedAnimationState DockedAnimationState; // 0x58
};

struct FEventUserGameSettingsSetFloat {
	FName KeyName; // 0x0
	float Value; // 0x8
};

struct FSpawnerData {
	UItemSpawnData* ItemSpawnData; // 0x0
};

struct FEventOnCrewStorageUpdate {
	FGuid CrewStoring; // 0x0
	int16_t IslandHash; // 0x10
};

struct FAthenaAICharacterParams {
	float MissFiringHeightOffset; // 0x0
	float MissFiringTargetInFrontOffset; // 0x4
	float MinMissFiringTargetInFrontOffset; // 0x8
	float MaxMissFiringTargetInFrontOffset; // 0xc
	float BufferTimeWhenChangingItems; // 0x10
};

struct FGetActorsInRadiusData {
	float PositionX; // 0x0
	float PositionY; // 0x4
	float Radius; // 0x8
};

struct FChestOfRageDamageTableEntry {
	EHealthChangedReason Reason; // 0x0
	float TimeToAdd; // 0x4
};

struct FEventAIPawnAddedToAIRegion {
	APawn* AIPawn; // 0x0
};

struct FMovieSceneColorSectionTemplate : FMovieSceneEvalTemplate {
	FName PropertyName; // 0x18
	FString PropertyPath; // 0x20
	FRichCurve Curves[0x4]; // 0x30
};

struct FVoyageProposedEvent {
	UVoyageProposalDesc* ProposalDesc; // 0x0
	APlayerState* Proposer; // 0x8
	bool AutoVoteOnVoyage; // 0x10
};

struct FUseLadderActionStateConstructionInfo : FDockToObjectActionStateConstructionInfo {
	float StartingInteractionHeight; // 0x48
	char ClimbId; // 0x4c
	FLadderDefinition LadderDefinition; // 0x50
};

struct FAmmoTransferMetaWrapper : FItemMetaBase {
	int32_t AmmoCount; // 0x18
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x30
	float Alpha; // 0x48
	FInputScaleBias AlphaScaleBias; // 0x4c
};

struct FSleepingActionStateSerialisableData : FControlObjectActionStateSerialisableData {
	FVector UndockLocation; // 0x30
	bool UndockRequested; // 0x3c
};

struct FMeleeAttackIdWeights {
	UMeleeAttackId* MeleeAttackType; // 0x0
	float Weight; // 0x8
};

struct FEventPetFoodBase {
	FGuid FeedingInteractionId; // 0x0
};

struct FAchievementSailCloseToShipWithoutFiring {
	float RangeToRemainWithinInMetres; // 0x0
	float DistanceToTravelInMetres; // 0x4
};

struct FPlayerBuriedItemServiceDataAssetMapStorePopulationSeaRegion {
	USeaId* SeaId; // 0x0
	TArray<FPlayerBuriedItemServiceDataAssetMapStorePopulationHaul> Hauls; // 0x8
};

struct FShipLiveryCatalogue {
	TArray<FShipLiveryCatalogueEntry> Liveries; // 0x0
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x30
	FName FunctionNameToBind; // 0x34
};

struct FRequestPurchaseSeasonPassOfferEvent {
	FString OfferId; // 0x0
	FString CatalogName; // 0x10
};

struct FDynamicMaterialListContainer {
	TArray<UMaterialInstanceDynamic*> MaterialsList; // 0x0
};

struct FEventSetFishingReelingSpeed {
	float ReelingSpeed; // 0x0
};

struct FAthenaAnimationObjectComplexOneShot {
	UAnimSequence* WarmUp; // 0x0
	UAnimSequence* WarmUpFromBlock; // 0x8
	UAnimSequence* Action; // 0x10
	UAnimSequence* Recover; // 0x18
	UAnimSequence* HeavyAttackStunRecover; // 0x20
};

struct FLocomotionActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FWaitForLoadingScreenTelemetryEvent {
	FString OldStateName; // 0x0
	FString NewStateName; // 0x10
	float OldStateDuration; // 0x20
};

struct FWorldMarkerDesc {
	UBaseWorldMarker* Marker; // 0x0
	UWorldMarkerVariant* Variant; // 0x18
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	int32_t Index; // 0x8
	FRichCurve RedCurve; // 0x10
	FRichCurve GreenCurve; // 0x88
	FRichCurve BlueCurve; // 0x100
	FRichCurve AlphaCurve; // 0x178
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0x58
	FBoneReference SourceBone; // 0x64
	float Multiplier; // 0x70
	EBoneAxis RotationAxisToRefer; // 0x74
	bool bIsAdditive; // 0x75
};

struct FSetWindAngleData {
	float Angle; // 0x0
};

struct FFragileComponentShipDamageTypeEntry {
	UDamagerType* ShipDamagerType; // 0x0
	float HealthChangePropagated; // 0x8
};

struct FSetWindMagnitudeData {
	float Magnitude; // 0x0
};

struct FClientSettings {
	bool FailToConnectToServer; // 0x0
	bool PauseMigrationBeforeOwnershipTransfer; // 0x1
};

struct FFogBankManagerFogAvoidanceArea {
	FVector Location; // 0x0
	float Radius; // 0xc
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FCapturedByKrakenActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr Tentacle; // 0x30
};

struct FWorldMapIslandData {
	FText Name; // 0x0
	FString IslandUrl; // 0x38
	float MinX; // 0x48
	float MinY; // 0x4c
	float MaxX; // 0x50
	float MaxY; // 0x54
	float Rotation; // 0x58
	float LabelOffset; // 0x5c
};

struct FAthenaAnimationCannonConcealedAnimData {
	UAnimSequence* InCannonIdle; // 0x0
	UAnimSequence* FiredFromCannon; // 0x8
};

struct FMoveToLocationActionStateConstructionInfo : FActorActionStateConstructionInfo {
	USceneComponent* RelativeToComponent; // 0x30
	FVector TargetLocation; // 0x38
};

struct FVoyageDiscardedTelemetryEvent {
	FString VoyageRecipeAsset; // 0x0
	FString CompanyId; // 0x10
	int32_t VoyageRank; // 0x20
};

struct FSurfaceDigType {
	EPhysicalSurface SurfaceType; // 0x0
	EShovelDigType DigType; // 0x1
};

struct FLightingControllerTransformParams {
	FTransform NorthStarRelativeTransform; // 0x0
	FTransform SkyDomeRelativeTransform; // 0x30
	FRotator HideoutLightRotation; // 0x60
	FRotator ArenaTavernLightRotation; // 0x6c
	float FogHeight; // 0x78
	float UnderworldFogHeight; // 0x7c
	float HideoutFogHeight; // 0x80
	float ArenaTavernFogHeight; // 0x84
};

struct FAthenaAIControllerSenseSettingOverride {
	UAIStrategyId* AIStrategy; // 0x0
	FAthenaAIControllerSenseSettings SenseSettings; // 0x8
	bool ClearPerceivedData; // 0x1c
};

struct FTextEntryWithLayout {
	FText TextEntry; // 0x0
	FTreasureMapWidgetText TextLayout; // 0x38
};

struct FLadderDefinition {
	ELadderType LadderType; // 0x0
	FLadderBlendParams OnTopLadderBlendParams; // 0x4
	FLadderBlendParams OffTopLadderBlendParams; // 0x10
};

struct FEventSetRemappedPlayerDirection {
	FVector2D PlayerDirection; // 0x0
};

struct FCrewScoredEvent {
	EContestScoreId ScoreId; // 0x0
	FGuid CrewId; // 0x4
	int32_t CrewScore; // 0x14
	EScoreReason ReasonForScoring; // 0x18
};

struct FWwiseAudioReverbPresets {
	FName ShortEarlyReflectionPresetName; // 0x0
	FName LongEarlyReflectionPresetName; // 0x8
	FName SpaceSizeRTPCName; // 0x10
	FName EnclosedRatioRTPCName; // 0x18
	FName MaterialThicknessRTPCName; // 0x20
	FName MaterialReflectivityRTPCName; // 0x28
	ECollisionChannel EnvironmentTraceChannel; // 0x30
	float MinSpaceSizeWindowForEarlyReflections; // 0x34
	float MaxSpaceSizeWindowforEarlyReflections; // 0x38
	FReverbPresetControllerSettings SamplingSettings; // 0x3c
};

struct FLightmassMaterialInterfaceSettings {
	char bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float ExportResolutionScale; // 0xc
	char bOverrideCastShadowAsMasked : 1; // 0x10
	char bOverrideEmissiveBoost : 1; // 0x10
	char bOverrideDiffuseBoost : 1; // 0x10
	char bOverrideExportResolutionScale : 1; // 0x10
};

struct FBaseLightTemplate {
	FBaseLightData BaseLightData; // 0x0
};

struct FTreasureChestSoldClientPredictionEvent {
	UCompany* Company; // 0x0
};

struct FKrakenBehaviourParams {
	EKrakenBehaviourType Type; // 0x0
	uint32_t MaxInstancesOfBehaviourAllowed; // 0x4
	FWeightedProbabilityRangeOfRanges TargetTimeout; // 0x8
	UKrakenIdleBehaviourParamsDataAsset* IdleParams; // 0x38
	FKrakenShipWrappingBehaviourParamsCollection ShipWrappingParams; // 0x40
	FKrakenShipHittingBehaviourParamsCollection ShipHittingParams; // 0x50
	UKrakenPlayerGrabbingBehaviourParamsDataAsset* PlayerGrabbingParams; // 0x60
};

struct FLaunchableProjectileState {
	FTransform SpawnTransform; // 0x0
	EProjectileSpawnedState SpawnedState; // 0x30
};

struct FMapTableTutorialHandler {
	AActor* CachedMapController; // 0x0
	UTutorial2019Component* CachedMapControllerTutorialComponent; // 0x8
};

struct FEventCharacterStoppedContinuousUse {
	UNotificationInputId* InputID; // 0x0
};

struct FDeepSeaRegionScreenEffects {
	bool ShouldUseScreenEffects; // 0x0
	float DepthFadeEnd; // 0x4
	float RadialFadeStart; // 0x8
	float RadialFadeEnd; // 0xc
};

struct FConditionalStat {
	FPlayerStat Stat; // 0x0
	EConditionalStatType StatType; // 0x4
	FPlayerTrackedObjective TrackedObjective; // 0x8
	ETrackedObjectiveType TrackedObjectiveType; // 0x18
	EConditionalStatType TrackedObjectiveTargetType; // 0x19
	TArray<UStatCondition*> Conditions; // 0x20
};

struct FExitTunnelOfTheDamnedActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FVector TunnelLocation; // 0x30
	UCameraAnim* CameraAnim; // 0x40
	UCurveFloat* CameraBlendCurve; // 0x48
};

struct FIPGTestClass {
	FName StringTest; // 0x0
	float FloatTest; // 0x8
	int32_t IntTest; // 0xc
	EIPGTestEnum EnumTest; // 0x10
	FIPGTestSimpleType ObjectTest; // 0x14
	FIPGTestSimpleType ObjectNoneTest; // 0x20
	TArray<FIPGTestSimpleType> VectorTest; // 0x30
	TArray<FName> StrVectorTest; // 0x40
	TArray<EIPGTestEnum> EnumVectorTest; // 0x50
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FEventShipDamageApplied {
	AActor* Ship; // 0x0
	FName DamagedShipPartIdentifier; // 0x8
	int32_t NewDamageLevel; // 0x10
	FImpactDamageEvent ImpactDamageEvent; // 0x18
};

struct FPushToTalkModeChangedEvent {
	EToggleOrHoldMode PushToTalkMode; // 0x0
};

struct FAnimatedMaterialData {
	FName ParamName; // 0x0
	float BlendDuration; // 0x8
	UCurveFloat* InCurve; // 0x10
	UCurveFloat* OutCurve; // 0x18
	TArray<UMaterialInstanceDynamic*> FoundMaterials; // 0x20
	UCurveFloat* CurrentBlendCurve; // 0x30
};

struct FAIShipBattleEncounterDescGenerationParams {
	bool EnableHardShip; // 0x0
	TArray<FFeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams; // 0x8
	TArray<FAIShipEncounterBattleDesc> BattleDescs; // 0x18
};

struct FEventAIBountySpawnerTargetKilled {
	FText TargetName; // 0x0
	AActor* TargetActor; // 0x38
	FName RewardId; // 0x40
	AItemInfo* ItemDropped; // 0x48
	EBountyTargetRank Rank; // 0x50
	FVector DeathLocation; // 0x54
	AActor* Instigator; // 0x60
};

struct FLandmarkSoundPlayedEvent {
	int32_t PlayingId; // 0x0
	UWwiseEvent* AudioEvent; // 0x8
	FWwiseEmitter Emitter; // 0x10
};

struct FQuestVariableAssetArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FEventPlayerEnterAISpawnableWater {
	AActor* Player; // 0x0
};

struct FEventCharacterInteraction {
	UObject* Interactable; // 0x0
};

struct FClientPlayerNewLevelTelemetryEvent {
	uint32_t PlayerLevel; // 0x0
	uint32_t PreviousPlayerLevel; // 0x4
	FName CompanyId; // 0x8
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FQuestBookPageRenderer {
	UFont* Font; // 0x0
	float FontScale; // 0x8
	float FontMaxScale; // 0xc
	float FontLineSpacingScale; // 0x10
};

struct FRetractorOrientationAdjustmentFlags {
	bool AdjustPitch; // 0x0
	bool AdjustRoll; // 0x1
	bool AdjustYaw; // 0x2
};

struct FResetStateMachineRpc {
	FActionStateChangeRequestId LatestEpochIds[0x5]; // 0x0
	FActionStateChangeRequestId LatestRequestIds[0x5]; // 0x5
	FSerialisedConstructionInfoStore PerTrackConstructionInfoStore; // 0x10
};

struct FVoyageProposedTelemetryEvent {
	FGuid VoyageProposalSessionId; // 0x0
	FString VoyageProposalEntitlementId; // 0x10
};

struct FCappedCount {
	uint32_t Cap; // 0x0
	uint32_t Value; // 0x4
};

struct FProjectileWeaponFiredCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FLightningImpact {
	int64_t TimeInTicks; // 0x0
	FVector2D Location; // 0x8
	AActor* AttachActor; // 0x10
	AAthenaCharacter* TargetCharacter; // 0x18
	bool TargetedHighPriorityTarget; // 0x20
};

struct FAthenaAnimationLadder {
	float TranslationStrength; // 0x0
	float RotationStrength; // 0x4
	float BlendInSpeed; // 0x8
	float BlendOutSpeed; // 0xc
	bool AnimationOverride; // 0x10
	float AnimationLoopMod; // 0x14
	float HeightPerStep; // 0x18
	FName LeftHandSocketName; // 0x1c
	FName RightHandSocketName; // 0x24
	FName LeftFootSocketName; // 0x2c
	FName RightFootSocketName; // 0x34
	EAthenaAnimationLadderState LadderState; // 0x3c
	EAthenaAnimationLadderTransitionState LadderTransitionState; // 0x3d
	FLadderDefinition LadderDefinition; // 0x40
	float ClimbDistance; // 0x5c
	float AnimationDistance; // 0x60
	float PlayerIntent; // 0x64
	bool ClimbOnComplete; // 0x68
	bool ClimbOffComplete; // 0x69
	bool IsClambering; // 0x6a
};

struct FLocator {
	EShipLocation Location; // 0x0
	FVector Position; // 0x4
	FQuat Rotation; // 0x10
};

struct FVaultPuzzleSolutionEntry {
	FVaultPuzzleSolutionPositions SolutionPositions; // 0x0
	FStringAssetReference MaterialSet; // 0x10
	FStringAssetReference TreasureVaultTableMaterialSet; // 0x20
};

struct FEventEmoteSwapped {
	FEmoteData EmoteData; // 0x0
};

struct FPlayerActionBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<UObject> ObjectBeingUsed; // 0x0
	FString ActionName; // 0x8
};

struct FPlayerFeedback {
	FEarthquakeForceFeedback ForceFeedback; // 0x0
	TArray<UCameraShake*> CameraShakes; // 0x40
	FWeightedProbabilityRangeOfRanges StaggerStrength; // 0x50
};

struct FPulleyVisualParams {
	UStaticMesh* Mesh; // 0x0
	float Scale; // 0x8
	float Radius; // 0xc
};

struct FGameplayEffectModifierMagnitude {
	EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0
	FScalableFloat ScalableFloatMagnitude; // 0x8
	FAttributeBasedFloat AttributeBasedMagnitude; // 0x28
	FCustomCalculationBasedFloat CustomMagnitude; // 0x100
	FSetByCallerFloat SetByCallerMagnitude; // 0x168
};

struct FMechanismMaterialMapEntry {
	TArray<FMechanismMaterialOverride> Materials; // 0x0
};

struct FPlayerBuriedItemServiceMapBundlePickedUpEvent {
	FString PlayerName; // 0x0
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FPlayerObjectUsageTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<UObject> ObjectBeingUsed; // 0x0
};

struct FStorageContainerWeightedItemListEntryList {
	float Weight; // 0x0
	TArray<FStorageContainerWeightedItemListEntry> Entries; // 0x8
};

struct FReplicatedTransformState {
	USceneComponent* MovementBase; // 0x0
	USceneComponent* AttachParent; // 0x8
	FRepTransform ReplicatedMovement; // 0x10
	bool IsAttached; // 0x28
};

struct FIslandTypeWeights {
	float FeatureIslandWeight; // 0x0
	float ResourceIslandWeight; // 0x4
	float OutpostIslandWeight; // 0x8
	float SeapostIslandWeight; // 0xc
	float FortIslandWeight; // 0x10
};

struct FEmoteId {
	FName EmoteId; // 0x0
};

struct FTreasureFoundCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString TreasureType; // 0x28
};

struct FPlayerLeftGhostShipCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FTestActionStateMessage2 : FActionStateMessage {
	UScriptStruct* Type; // 0x8
};

struct FCoordinatedKrakenTentacleAction {
	UKrakenAnimatedTentacleState* State; // 0x0
	int32_t TentacleIndex; // 0x8
	float TimeOffset; // 0xc
};

struct FPlayerSpawnTelemetryEvent {
	FString SpawnPointName; // 0x0
	FString IslandName; // 0x10
	uint32_t SpawnCount; // 0x20
	ECharacterType SpawnType; // 0x24
	double SpawnDuration; // 0x28
	int32_t PlayersCrewSize; // 0x30
	double DistanceToClosestOpponent; // 0x38
};

struct FSpawnLocationGroup {
	TArray<FName> AllowedSpawnTypes; // 0x0
	TArray<FVector> SpawnLocations; // 0x10
};

struct FMermaidStatueDespawnedTelemetryEvent {
	FString MermaidStatueId; // 0x0
	FString MermaidStatueDespawnReason; // 0x10
	TArray<FGuid> Crews; // 0x20
};

struct FFortKeyUsedCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FSkeletonAudioEvents {
	UWwiseEvent* PlayLoop; // 0x0
	UWwiseEvent* StopLoop; // 0x8
	UWwiseEvent* StartOneShot; // 0x10
	UWwiseEvent* LeaveOneShot; // 0x18
};

struct FItemDiggingBaseOverride {
	TArray<UClass*> Classes; // 0x0
	UItemDiggingBaseConfig* DiggingBaseConfig; // 0x10
};

struct FPlayerTrackedObjective {
	FGuid ObjectiveId; // 0x0
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FEmoteActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FEmoteData EmoteData; // 0x30
	FName EmoteIdentifier; // 0xc8
	bool ForcedEmote; // 0xd0
};

struct FSplineTransitionLadderActionStateConstructionInfo : FTransitionLadderActionStateConstructionInfo {
	float StartingInteractionHeight; // 0x48
	char ClimbId; // 0x4c
	ELadderTransitionMode LadderTransitionMode; // 0x4d
	FLadderDefinition LadderDefinition; // 0x50
};

struct FEmissaryLeaderboardScoreUpdatedEvent {
	FPirateIdentity PirateIdentity; // 0x0
	FName EmissaryAffiliation; // 0x78
	int64_t From; // 0x80
	int64_t To; // 0x88
};

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush DisabledBarImage; // 0x98
	FSlateBrush NormalThumbImage; // 0x128
	FSlateBrush DisabledThumbImage; // 0x1b8
};

struct FMergedCollisionComponentStaticMeshInstanceData {
	FTransform RelativeTransform; // 0x0
	UStaticMesh* StaticMesh; // 0x30
	int32_t OwningActorCrc32; // 0x38
};

struct FSceneDialogueBaseNetworkEvent : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FEventEmoteCompleted {
	FName EmoteName; // 0x0
	uint32_t EmoteDuration; // 0x8
};

struct FEventCharacterHitReaction {
	FImpactDamageEvent ImpactDamage; // 0x0
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FOneShotAnimationElement {
	FName SequenceName; // 0x0
	TArray<UAnimSequence*> OneShotSequence; // 0x8
	float EffectTime; // 0x18
	float BlendTime; // 0x1c
};

struct FCannonAISpawnerZone {
	FVector Centre; // 0x0
	float Radius; // 0xc
	bool IslandNotCannonZone; // 0x10
};

struct FUIPremiumStoreOpenTelemetryEvent {
	bool IsFrontend; // 0x0
	FString SessionId; // 0x8
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

struct FQuestStartRiddleTelemetryEvent {
	FString IslandName; // 0x0
};

struct FRemoteCommodityDemandData {
	FName TradeRouteId; // 0x0
	TArray<FPeriodicCommodityMultipliers> TradeRoutes; // 0x8
	FDateTime OverrideFromDate; // 0x18
	FDateTime OverrideToDate; // 0x20
	TArray<FCommodityDemandMultipliers> OverrideMultipliers; // 0x28
};

struct FIInventoryItem {
	FString ItemDesc; // 0x0
	int32_t Count; // 0x10
	bool IsFull; // 0x14
	bool IsBlocked; // 0x15
	InventoryItemState State; // 0x16
	UItemDesc* DescKey; // 0x18
};

struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	UAnimNotify* Notify; // 0x48
	UAnimNotifyState* NotifyStateClass; // 0x50
	UAnimNotifyCondition* NotifyCondition; // 0x58
	float Duration; // 0x60
	FAnimLinkableElement EndLink; // 0x68
	bool bConvertedFromBranchingPoint; // 0x98
	EMontageNotifyTickType MontageTickType; // 0x99
	float NotifyTriggerChance; // 0x9c
	ENotifyFilterType NotifyFilterType; // 0xa0
	int32_t NotifyFilterLOD; // 0xa4
	int32_t TrackIndex; // 0xa8
};

struct FVoyageParticipantViewContainer {
	FVoyageParticipantView State; // 0x0
};

struct FEventObjectStowed {
	TScriptInterface<Class> Object; // 0x0
	bool FastStow; // 0x10
	EStowMethod StowMethod; // 0x11
};

struct FUIPremiumStoreItemInteractEvent {
	FString CurrencyUsed; // 0x0
	FString EngagementOutcome; // 0x10
	FString ItemCost; // 0x20
	FString ItemName; // 0x30
	FString PageName; // 0x40
	FString SessionId; // 0x50
};

struct FKnockBackInfo {
	FName FeatureName; // 0x0
	float HorizontalVelocity; // 0x8
	float VerticalVelocity; // 0xc
	float MinHorizontalVelocity; // 0x10
	float MinVerticalVelocity; // 0x14
	float SwimmingVelocity; // 0x18
	float DockedHorizontalVelocity; // 0x1c
	float DockedVerticalVelocity; // 0x20
	bool UseDockedVelocitiesWhenDocked; // 0x24
	FName RumbleTag; // 0x28
	float StunDuration; // 0x30
	float AIKnockbackDistance; // 0x34
	float AIKnockbackSpeed; // 0x38
	float AIKnockbackAcceleration; // 0x3c
	EAIKnockbackStrengthType AIKnockbackStrengthType; // 0x40
	bool UseOverrideLaunchDirection; // 0x41
	FVector OverrideLaunchDirectionInWorldSpace; // 0x44
};

struct FNamedFirstPersonAnimatic {
	FName Name; // 0x0
	FStringAssetReference Anim; // 0x8
};

struct FFlamethrowerStatusOverride {
	UClass* ActorType; // 0x0
	TArray<FStatus> StatusesToApplyOnOverlap; // 0x20
};

struct FFishBaitInfo {
	EBaitType BaitType; // 0x0
	UItemDesc* BaitItemDesc; // 0x8
};

struct FMigrationRequestedAutomationEvent {
	UWaitForTunnelOfTheDamnedMigrationTaleQuestStep* MigrationStep; // 0x0
};

struct FAthenaAnimationLoadObjectByID {
	int32_t LoadedObjectID; // 0x0
	bool ObjectFound; // 0x4
	UAnimationDataStoreId* CharacterType; // 0x8
	UScriptStruct* DestinationStruct; // 0x10
	FAthenaAnimationCoreObjectAnimations LoadedObjectAnimations; // 0x20
};

struct FEventNewAIStrategyBPReadable {
	UObject* NewAIStrategy; // 0x0
};

struct FShipCustomizationChestEquipShipCustomizationEvent {
	UShipCustomizationDesc* Desc; // 0x0
};

struct FAthenaAnimationMapTable {
	TArray<UAnimSequence*> Into; // 0x0
	TArray<UAnimSequence*> IdleCycle; // 0x10
	TArray<UAnimSequence*> Outof; // 0x20
};

struct FLoadoutSubstitution {
	FStringAssetReference LoadoutToSubstituteOut; // 0x0
	TArray<FStringAssetReference> LoadoutsToSubstituteIn; // 0x10
};

struct FTestActionStateConstructionInfoWithInner : FActionStateConstructionInfo {
	float FloatProp; // 0x28
	FInnerTestStruct InnerStruct; // 0x30
};

struct FEventCustomAnimationPlayAnimation {
	FName AnimSequenceName; // 0x0
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

struct FActorDeactivationRequested {
	float DeactivationDuration; // 0x0
};

struct FCrewBaseTelemetryFragmentPlayerCharacterLookupInput : FTelemetryFragmentInput {
	ACharacter* CrewMemberCharacter; // 0x0
};

struct FEventSessionCodeTextboxTextFromVirtualKeyboard {
	FString Text; // 0x0
};

struct FShipLiveryTextureSwap {
	UMaterialInterface* TargetMaterial; // 0x0
	FName TargetParameterName; // 0x8
	UTexture2D* TargetTexture; // 0x10
};

struct FMovieSceneSubSequenceData {
	UMovieSceneSequence* Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x8
	FGuid SourceSequenceSignature; // 0x10
	FMovieSceneSequenceID DeterministicSequenceID; // 0x20
};

struct FWeightedAshenLordVolcanoProjectile {
	float Weight; // 0x0
	float GravityMultiplier; // 0x4
	FWeightedProbabilityRangeOfRanges Speed; // 0x8
	FWeightedProbabilityRangeOfRanges RotationRatePitch; // 0x38
	FWeightedProbabilityRangeOfRanges RotationRateRoll; // 0x68
	FWeightedProbabilityRangeOfRanges RotationRateYaw; // 0x98
	ALaunchableProjectile* ProjectileClass; // 0xc8
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FCompanyXpGrantedMessage {
	FPirateIdentity PirateIdentity; // 0x0
	FName CompanyId; // 0x78
	uint32_t Xp; // 0x80
	FGuid RequestID; // 0x84
	FGuid BootyId; // 0x94
	FName EmissaryAffiliation; // 0xa4
	uint32_t EmissaryLevel; // 0xac
};

struct FPlayerStateSnapshot {
	int32_t PlayerStateId; // 0x0
	FGuid PlayerGameId; // 0x4
	FString GamerTag; // 0x18
	FPlayerCharacterSnapshot Character; // 0x28
};

struct FEventAthenaLocalPlayerControllerTypeChange {
	EInputControllerType ControllerType; // 0x0
};

struct FQuestVariableVector : FQuestVariable {
	FName ParamName; // 0x8
};

struct FKillPlayerData {
	int32_t PlayerNetGUID; // 0x0
};

struct FEventSwimRotationModeChanged {
	ESwimRotationMode NewSwimRotationMode; // 0x0
	float NewRotationRate; // 0x4
};

struct FEventIsDrunk {
	bool bIsDrunk; // 0x0
};

struct FAthenaPlayerZonePenetrationTrackerUpdateEvent {
	AActor* PenetratedActor; // 0x0
	AActor* Player; // 0x8
	float PenetrationT3D; // 0x10
	float PenetrationTHorizontal; // 0x14
	float PenetrationTVertical; // 0x18
};

struct FShipRepairCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString ShipId; // 0x28
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FTextureLODGroup {
	TextureGroup Group; // 0x0
	int32_t LODBias; // 0xc
	int32_t NumStreamedMips; // 0x14
	TextureMipGenSettings MipGenSettings; // 0x18
	int32_t MinLODSize; // 0x1c
	int32_t MaxLODSize; // 0x20
	FName MinMagFilter; // 0x24
	FName MipFilter; // 0x2c
	int32_t TextureQualityReduction; // 0x34
};

struct FReviveableActionStateConstructionInfo : FActorActionStateConstructionInfo {
	UActionStateId* ActionStateId; // 0x30
	FDamageInstance DamageInstance; // 0x38
	ECharacterDeathType CharacterDeathType; // 0x60
	ECharacterType CharacterType; // 0x61
};

struct FSplashProbe {
	FWaterSplashProbe Probe; // 0x8
	float ProbeSamplingTime; // 0xe0
	float TimeBetweenProbeVfx; // 0xe4
	UObject* ParticleSystem; // 0xe8
	bool SpawnAttached; // 0xf0
	bool AttachToWaterSurface; // 0xf1
	EAttachLocation SplashAttachType; // 0xf2
	FVector VfxSpawnOffset; // 0xf4
	bool Enabled; // 0x100
	UParticleSystemComponent* CurrentlyPlayingVFX; // 0x108
};

struct FGameEventWeightedList {
	FName ServerConfigName; // 0x0
	TArray<FGameEventCount> Events; // 0x8
	float Weight; // 0x18
};

struct FTreasureSoldTelemetryEvent {
	FGuid BootyId; // 0x0
	EBootyTypes BootyType; // 0x10
	FString Rarity; // 0x18
	bool GoldAwarded; // 0x28
	ESpawnedItemSource Source; // 0x29
};

struct FAeolusAchievementsUpdatedFromServicesTelemetry {
	FString UserId; // 0x0
	FString PirateId; // 0x10
	bool Success; // 0x20
	int32_t AchievementsUpdatedCount; // 0x24
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FWheelArmIKDownWithinRange {
	float LeftArmDownRangeAMin; // 0x0
	float LeftArmDownRangeAMax; // 0x4
	float LeftArmDownRangeBMin; // 0x8
	float LeftArmDownRangeBMax; // 0xc
	float RightArmDownRangeAMin; // 0x10
	float RightArmDownRangeAMax; // 0x14
	float RightArmDownRangeBMin; // 0x18
	float RightArmDownRangeBMax; // 0x1c
};

struct FTaleProposalVoteSlotUpdatedEvent {
	FProposedTaleEntry TaleProposal; // 0x0
	UVoyageDescDataAsset* CurrentActiveTale; // 0x18
	FGuid CrewId; // 0x20
};

struct FShipFireLightRelativeSpawnDesc : FFireGridRelativeSpawnDesc {
	FVector LightPositionOffset; // 0x30
	TArray<EShipRegion> DormantShipRegions; // 0x40
	float DormantFadeDistance; // 0x50
	float AreaLightScaleWhenNotOnShip; // 0x54
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x40
	float ExplicitTime; // 0x48
};

struct FSpeechAccessibilityProfileUser {
	FString Id; // 0x0
	FString HostID; // 0x10
	TArray<FSpeechAccessibilitySetting> Settings; // 0x20
	bool IsSponsoredUser; // 0x30
};

struct FCustomTriggerOverlapCustomServerEvent : FGlobalCustomServerEvent {
	int32_t TriggerNetId; // 0x18
	int32_t OtherNetId; // 0x1c
};

struct FServerStateUpdateMessage {
	FGuid ServerId; // 0x0
	FString TitleVersion; // 0x10
	EPlayMode Playmode; // 0x20
	TArray<FServerUpdateCrewState> Crews; // 0x28
	TArray<FIncomingMigrationPreventionZone> IncomingMigrationPreventionZones; // 0x38
	FTimespan TimeToLive; // 0x48
	FTimespan Uptime; // 0x50
	FTimespan TotalUptime; // 0x58
	FTimespan MessageInterval; // 0x60
	int32_t SequenceId; // 0x68
	FString ServerAddress; // 0x70
	FString ServerLocation; // 0x80
	FString ServerDataCentre; // 0x90
	bool HighPriorityForMatchmaking; // 0xa0
	bool ServerIsActive; // 0xa1
	bool ContestMatchmaking; // 0xa2
};

struct FCrewScore {
	FGuid CrewId; // 0x0
	int32_t Score; // 0x10
	EContestScoreId ScoreId; // 0x14
};

struct FPeriodicCommodityMultipliers {
	FDateTime DateFrom; // 0x0
	FDateTime DateTo; // 0x8
	TArray<FCommodityDemandMultipliers> Rewards; // 0x10
};

struct FEventMastDamageLevelChanged {
	AActor* Mast; // 0x0
	int32_t DamageLevel; // 0x8
};

struct FCanShowPrimaryActionButton : FRadialInventoryEvent {
	bool CanShow; // 0x4
};

struct FChestTabViewModel {
	FString ItemCategory; // 0x0
	FString CategoryImageUrl; // 0x10
	FString Name; // 0x20
	TArray<FChestEntitlementViewModel> EquippedEntitlements; // 0x30
};

struct FLightingZoneBlendValues {
	int32_t LightingSetIndex; // 0x0
	float LightingZoneWeight; // 0x4
};

struct FLaunchedFromKrakenActionStateConstructionInfo : FFiredFromActorActionStateConstructionInfo {
	FNetActorPtr Tentacle; // 0x50
};

struct FNPCDialogExecuteOptionOnServerRpc : FBoxedRpc {
	UNPCDialogComponent* DialogComponent; // 0x10
	int32_t CurrentDialog; // 0x18
	int32_t CurrentOption; // 0x1c
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x28
};

struct FAppearMaterialParams {
	FName ParameterName; // 0x0
	UCurveFloat* AppearCurveAsset; // 0x8
	UCurveFloat* DisppearCurveAsset; // 0x10
};

struct FTreasureChestSoldInContestNetworkEvent : FNetworkEventStruct {
	FName RewardId; // 0x10
	FText CrewName; // 0x18
	FStringAssetReference ToastBackgroundImage; // 0x50
	FStringAssetReference BackgroundImage; // 0x60
	FName AudioEventName; // 0x70
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FCrewBeganTaleEvent {
	FGuid CrewId; // 0x0
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x98
	FSlateBrush MarqueeImage; // 0x128
};

struct FRiggingSystemPulleyData {
	TArray<float> AttachmentSag; // 0x0
	TArray<float> AttachmentLength; // 0x10
	TArray<float> Scale; // 0x20
	TArray<float> ScaledOffset; // 0x30
	TArray<float> ScaledRadius; // 0x40
	TArray<int32_t> MeshIDs; // 0x50
};

struct FAIShipDespawnCustomServerEvent : FGlobalCustomServerEvent {
	FString AIShipId; // 0x18
};

struct FRatManagerRatInfestationLevel {
	float WaterLevel; // 0x0
	FWeightedProbabilityRangeOfRanges RatSpawnFrequency; // 0x8
	FWeightedProbabilityRangeOfRanges RatSpeed; // 0x38
	TArray<FName> Locations; // 0x68
	double Modulo; // 0x78
	TArray<FRatManagerPseudoRandomEntry> Intervals; // 0x80
};

struct FAimSensitivitySettingsDefaults {
	TArray<FAimSensitivitySettingsEntry> Entries; // 0x0
};

struct FRequestClothingChestPreviewUpdateEvent {
	EChestEntitlementActionType Action; // 0x0
	FString Subject; // 0x8
};

struct FWieldableItemFirstTimeEquipRpc : FBoxedRpc {
	UWwiseEvent* FirstTimeEquipSfx; // 0x10
};

struct FEventCurseChangeSailHeight {
	float Duration; // 0x0
};

struct FRewardPouchGivenRewardTelemetryEvent {
	FGuid PouchId; // 0x0
	FName RewardId; // 0x10
	EBootyTypes BootyType; // 0x18
	FName Rarity; // 0x1c
	ETrackedActorType TrackedActorType; // 0x24
};

struct FKrakenShipWrappingBehaviourWrapParams {
	FFloatRange WrapTimeBeforeGivingUpRange; // 0x0
	float ShipInternalWaterLevelToTriggerUnwrap; // 0x10
	FKrakenAnchorDynamicsParams AnchorDynamicsParams; // 0x18
	TArray<FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations; // 0x40
	float WrapTimeBeforeGivingUp; // 0x50
	FKrakenShipWrappingBehaviourWrapLocationParams WrapLocation; // 0x60
};

struct FKeyBind {
	FKey Key; // 0x0
	FString Command; // 0x20
	char Control : 1; // 0x30
	char Shift : 1; // 0x30
	char Alt : 1; // 0x30
	char Cmd : 1; // 0x30
	char bIgnoreCtrl : 1; // 0x30
	char bIgnoreShift : 1; // 0x30
	char bIgnoreAlt : 1; // 0x30
	char bIgnoreCmd : 1; // 0x30
};

struct FProjectileAttackGroup {
	TArray<FWeaponProjectile> Projectiles; // 0x0
	TWeakObjectPtr<AActor> Instigator; // 0x10
};

struct FServerContestStateUpdateTelemetryEvent {
	EContestState CurrentContestState; // 0x0
};

struct FBlendableDrowningParams {
	float TimeToEmptyLungs; // 0x0
	float TimeToFillLungs; // 0x4
	float DamagePerMinute; // 0x8
	float DrownWaterLevel; // 0xc
	float GulpingStartTime; // 0x10
	float GulpingPeakTime; // 0x14
	float ClientErrorOxygenDifference; // 0x18
	UObject* ExtraBubblesFirstPerson; // 0x20
};

struct FPetAnimationDataPreview {
	FStringAssetReference MontageData; // 0x0
};

struct FFeatureToggledPremiumCatalog {
	FFeatureFlag FeatureToggle; // 0x0
	UPremiumCatalogDataAsset* PremiumCatalog; // 0x8
};

struct FLightData {
	EFlameOfFateType FlameOfFateType; // 0x0
	bool LightIsOn_Server; // 0x1
	bool LitWithLantern; // 0x2
};

struct FEventEnteredWatercraft {
	AActor* Watercraft; // 0x0
	AActor* Actor; // 0x8
};

struct FAIPartsCategoryFormMapping {
	UAthenaAIFormDataAsset* Form; // 0x0
	TArray<FAIPartsCategoryMapping> CategoryMappings; // 0x8
};

struct FWeightedProbabilityRange {
	uint32_t Min; // 0x8
	uint32_t Max; // 0xc
	TArray<float> Weights; // 0x10
};

struct FWwiseBinkTrackMapping {
	EWwise7Point1Order mChannelMapping; // 0x0
	bool mRequired; // 0x1
	float mVolumeDb; // 0x4
};

struct FSeasonsPopupEvent {
	TArray<FText> Text; // 0x0
	TArray<FString> Images; // 0x10
	FString Background; // 0x20
	FGenericPopupAudioDescriptor Audio; // 0x30
	TArray<ESeasonStyleModifiers> StyleModifiers; // 0x70
	int32_t Rank; // 0x80
	FNavigationDesc NavigationDesc; // 0x84
	float HoldDuration; // 0x98
};

struct FTrackedCrewInContest {
	TArray<FPlayersSpawningInTavern> PlayersSpawningInTavern; // 0x18
};

struct FEventBuriedItemRevealed {
	AItemInfo* BuriedItem; // 0x0
};

struct FLockState {
	FLockData LockData; // 0x0
	bool Locked; // 0x570
	UItemDesc* RequiredKey; // 0x578
	AItemInfo* KeyItem; // 0x580
	UStaticMeshMemoryConstraintComponent* TargetKeyMesh; // 0x588
	bool UnlockBySpecificKey; // 0x590
	AItemInfo* RequiredSpecificKey; // 0x598
	ULockComponent* OwnerLockComponent; // 0x5a0
	float CurrentAnimationSequenceTime; // 0x5a8
	bool IsInUnlockingSequence; // 0x5ac
	ELockAnimationState AnimationSequenceState; // 0x5ad
	AInterpolatingItem* InterpolatingItem; // 0x5b0
	AActor* UnlockingInteractor; // 0x5b8
};

struct FEventSpawnComponentRequest {
	USalvageItemSpawnComponent* SalvageItemSpawnComponent; // 0x0
	int32_t NumberOfLocationsRequested; // 0x8
};

struct FQuestBookPageRenderingTriggerRedraw {
	EQuestBookPageRenderingMode PreviousMode; // 0x0
	EQuestBookPageRenderingMode NewMode; // 0x1
};

struct FPreSellTutorialItem {
	AItemInfo* SpawnedItem; // 0x0
};

struct FUseMaidenVoyageFlowEvent {
	bool IsNewPlayer; // 0x0
};

struct FPuzzleVaultCompletedTelemetryEvent {
	FGuid VaultId; // 0x0
	FName VaultType; // 0x10
};

struct FSpawnerTypeMappings {
	TArray<FSpawnerTypeMapping> Mappings; // 0x0
};

struct FPlayerCrewAssignmentMessage {
	FGuid CrewId; // 0x0
	FUniqueNetIdRepl UserId; // 0x10
	FString PirateId; // 0x28
	ECrewSessionType SessionType; // 0x38
	int32_t ServerCrewCapacity; // 0x3c
};

struct FEventPlayerConfigSetBooleanValue {
	FName KeyName; // 0x0
	bool Value; // 0x8
};

struct FAIDebugVisualisationCylinder {
	FVector To; // 0x0
	FVector From; // 0xc
	float Radius; // 0x18
	float LifeTime; // 0x1c
	EAIDebugColour Colour; // 0x20
};

struct FMeshAnimatorAnimationMeshEntry {
	FRuntimeVectorCurve Position; // 0x0
	FRuntimeVectorCurve Rotation; // 0x170
	bool ModifyScale; // 0x2e0
	FRuntimeVectorCurve Scale; // 0x2e8
};

struct FAthenaAnimationHitReactParams {
	int32_t StandardIndex0; // 0x0
	int32_t StandardIndex1; // 0x4
	char HitReactTransition : 1; // 0x8
	float DirectionYaw; // 0xc
	int32_t ItemIndex0; // 0x10
	int32_t ItemIndex1; // 0x14
	int32_t ActionIndex0; // 0x18
	int32_t ActionIndex1; // 0x1c
	int32_t SubtleIndex0; // 0x20
	int32_t SubtleIndex1; // 0x24
	ECharacterHitReactionAnimType AnimationType; // 0x28
};

struct FAISpawnActionStateConstructionInfo : FActorActionStateConstructionInfo {
	UItemCategory* HeldItemToBeginSpawn; // 0x30
	EAthenaAISpawnType SpawnType; // 0x38
	bool QuickSpawn; // 0x39
};

struct FPlayerJoinedCrew : FNetworkEventStruct {
	FText PlayerName; // 0x10
	FText PlayerNameOverride; // 0x48
	bool IsJoining; // 0x80
};

struct FRequestOpenShopEvent {
	FShopDefinition ShopDefinition; // 0x0
};

struct FMermaidRespawnConfig {
	float ScorePenaltyForEachMeterAwayFromShipwreck; // 0x0
	float MinRespawnLocDistanceFromSunkShip; // 0x4
	float MinScorePenaltyForEnemyShipProximity; // 0x8
	float MaxScorePenaltyForEnemyShipProximity; // 0xc
	float MaxDistanceFromEnemyShipToApplyPenalty; // 0x10
	float MinScorePenaltyForAlliedShipProximity; // 0x14
	float MaxScorePenaltyForAlliedShipProximity; // 0x18
	float MaxDistanceFromAlliedShipToApplyPenalty; // 0x1c
	float MaxDistanceFromIslandWeHaveMapForToApplyPenalty; // 0x20
	float ScorePenaltyForIslandsWeHaveMapFor; // 0x24
};

struct FIslandTeleportLocation {
	FString Description; // 0x0
	FVector TeleportLocation; // 0x10
	float TeleportYaw; // 0x1c
	USeaId* SeaId; // 0x20
};

struct FWeightedAmmoType {
	float ProbabilityAtRange; // 0x0
	UItemDesc* AmmoType; // 0x8
};

struct FCrewManagementOtherCrewData {
	EMuteState Muted; // 0x0
};

struct FTriggerPlayerControllerHitNotificationNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FSetItemOnRadialInventorySlot {
	int32_t SlotIndex; // 0x0
	FString SlotItemUrl; // 0x8
	float SlotItemRotation; // 0x18
	float SlotItemScale; // 0x1c
	FVector2D SlotItemOffset; // 0x20
	FString SlotItemTitle; // 0x28
};

struct FTestActionStateConstructionInfo : FActionStateConstructionInfo {
	int32_t IntProp; // 0x28
};

struct FItemStoredInChestEvent {
	AItemInfo* StoredItem; // 0x0
};

struct FCaptureProtocolID {
	FName Identifier; // 0x0
};

struct FFortWaveCompletedTelemetryEvent {
	FGuid EncounteredObjectId; // 0x0
	int32_t FortWaveIndex; // 0x10
	int32_t TotalFortWaves; // 0x14
};

struct FPioneerProgressMessage {
	FString UserId; // 0x0
	FGuid PlayerGameId; // 0x10
	FString ObjectiveKey; // 0x20
	int64_t Value; // 0x30
	FDateTime DateTimeStampUtc; // 0x38
};

struct FFeatureToggledStringAssetReferenceEntry {
	FStringAssetReference Asset; // 0x0
	FName Feature; // 0x10
};

struct FFolderTotals {
	bool EnforceCollectionMembership; // 0x0
	TArray<FName> CollectionsAllowedForFolder; // 0x8
	TArray<FName> AssetTypesToTest; // 0x18
};

struct FActionStateConstructionInfo {
	UActionStateId* Id; // 0x0
	UScriptStruct* Type; // 0x8
};

struct FTTTrackBase {
	FName TrackName; // 0x0
	bool bIsExternalCurve; // 0x8
};

struct FHullDamageZoneInfo {
	FString DamageZoneId; // 0x0
	int32_t DamageLevel; // 0x10
	ERepairableState RepairableState; // 0x14
	TArray<FHullDamageHit> ExternalHitList; // 0x18
};

struct FMigrationActionStateConstructionInfo : FActorActionStateConstructionInfo {
	bool EnableMigrationUI; // 0x30
};

struct FEmblemSetDefinition {
	FString FriendlyName; // 0x0
	FText Title; // 0x10
	FText Description; // 0x48
	FText CompletedDescription; // 0x80
	float ValueArgScalar; // 0xb8
	TArray<FEmblemRankDefinition> Emblems; // 0xc0
	UPopUpMessageDesc* UnlockPopUp; // 0xd0
	UPopUpAudioDesc* UnlockPopUpAudioOverrides; // 0xd8
	bool GrantsTitleAfterLastUnlock; // 0xe0
	bool Hidden; // 0xe1
	bool NoPopUp; // 0xe2
};

struct FPerChapterRankRewardEntry {
	int32_t Rank; // 0x0
	int32_t Payout; // 0x4
	TArray<FRewardGroupList> Rewards; // 0x8
};

struct FWeightedAIBoobyTrapSpawner {
	UAIBoobyTrapSpawner* Spawner; // 0x0
	float Weight; // 0x8
};

struct FTunnelOfTheDamnedMigrationFailedTelemetryEvent {
	FString Reason; // 0x0
};

struct FAthenaAnimationWaterSlideControlAnimData {
	UAnimSequence* Into; // 0x0
	UAnimSequence* Action; // 0x8
	UAnimSequence* Outof; // 0x10
	bool IsSliding; // 0x18
};

struct FTransitionLadderEndEvent {
	ELadderTransitionMode LadderTransitionMode; // 0x0
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FItemPreviewView {
	FName CameraName; // 0x0
	UAnimationAsset* Anim; // 0x8
	bool ShouldSpin; // 0x10
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char IsValid; // 0x10
};

struct FTextureSwitchBodyShapeEntry {
	FName BodyShape; // 0x0
	FStringAssetReference Texture; // 0x8
};

struct FTavernBoardRequestOpenEvent {
	FCappedCount TakeLimit; // 0x0
};

struct FServerMigrationCompletedTelemetryActorData {
	FString ActorClass; // 0x0
	int32_t Count; // 0x10
};

struct FBlueprintableIntegerHandle {
	int32_t Handle; // 0x0
};

struct FRotationUpdateResult {
	FRotator UpdatedRotation; // 0x0
	float SpinAngle; // 0xc
	float TiltAngle; // 0x10
	float TiltDirection; // 0x14
};

struct FEventEmoteEndRequested {
	FName EmoteIdentifier; // 0x0
	bool EndForcedEmote; // 0x8
};

struct FEventPetNotFed : FEventPetFoodBase {
	AActor* FeedingActor; // 0x10
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FSetInvincibilityData {
	int32_t ActorId; // 0x0
	bool Enable; // 0x4
};

struct FFortWaveCompletedCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FEventMeleeAttackUpdateRecoverDuration {
	float RecoverDuration; // 0x0
};

struct FEntityEventSubscriptionData {
	TArray<FName> EventIds; // 0x0
	TArray<int32_t> EntityNetIds; // 0x10
	bool AllEntities; // 0x20
	bool Enable; // 0x21
};

struct FTestActionStateConstructionInfoWithObjPointers : FActionStateConstructionInfo {
	UObject* ObjPointer; // 0x28
	FInnerWithObjTestStruct Inner; // 0x30
	TArray<UObject*> Array; // 0x38
};

struct FEncounterServiceEntry {
	EEncounterListenerType EncounterListenerType; // 0x0
	TArray<EEncounterType> ValidEncounterTypes; // 0x8
};

struct FCanvasWorldMapForegroundItems {
	UTexture* Texture; // 0x0
	FName FeatureToggle; // 0x8
	TArray<FVector2D> Locations; // 0x10
};

struct FTagContainerAggregator {
	FGameplayTagContainer CapturedActorTags; // 0x0
	FGameplayTagContainer CapturedSpecTags; // 0x28
	FGameplayTagContainer ScopedTags; // 0x50
};

struct FActorTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FSeasonInfoModel {
	FGuid Id; // 0x0
	FString ThemeId; // 0x10
	FDateTime ActiveFrom; // 0x20
	FDateTime ActiveUntil; // 0x28
	FString LocalizedTitle; // 0x30
	TArray<FSeasonTierInfo> Tiers; // 0x40
	TArray<FSeasonChallengeGroupInfo> ChallengeGroups; // 0x50
	TArray<FSeasonGoalInfo> IndividualGoals; // 0x60
};

struct FSetFirstPersonMeshVisibleEvent {
	bool IsVisible; // 0x0
};

struct FTakeItemFromContainerRPC : FBoxedRpc {
	FNetSubObjectPtr Container; // 0x10
	int32_t IndexToTake; // 0x24
};

struct FMovieSceneEvaluationGroupLUTIndex {
	bool bRequiresImmediateFlush; // 0x0
	int32_t LUTOffset; // 0x4
	int32_t NumInitPtrs; // 0x8
	int32_t NumEvalPtrs; // 0xc
};

struct FWieldAnimationParams {
	EWieldAnimationLocation WieldLocation; // 0x0
	FTransform PropOffset; // 0x10
};

struct FUseItemOnServerRpc : FBoxedRpc {
	AWieldableItem* Item; // 0x10
};

struct FNoValidWreckLocationFoundTelemetryEvent {
	FVector Location; // 0x0
};

struct FEventWieldablePetHungerStateUpdated {
	EAthenaAnimationPetHeldReactionState NewState; // 0x0
};

struct FCreativeCrewConfig {
	ECrewSessionType CrewSessionType; // 0x0
};

struct FItemSpawnTransform {
	FTransform Transform; // 0x0
	UWeightedItemDescSpawnDataAsset* ReferencedSpawnDistributionAsset; // 0x30
	UItemSpawnDistributionAsset* ReferencedSpawnDistribution; // 0x38
	FItemSpawnDistribution SpawnDistribution; // 0x40
	int32_t Weight; // 0x50
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
};

struct FRopeCatenarySlopeBlendParams {
	float MinSlopeForTautBlend; // 0x0
	float MaxSlopeForTautBlend; // 0x4
};

struct FAthenaAnimationUndoRepair {
	FAthenaAnimationUndoRepairAnimData UndoRepairAnimData; // 0x0
	bool UndoingRepair; // 0x10
	UAthenaAnimationUndoRepairDataAsset* UndoRepairDataAsset; // 0x18
};

struct FXMarksTheSpotQuestParams : FQuestTypeParams {
	FWeightedProbabilityRange NumTreasureLocations; // 0x30
	UBoobyTrapSpawnerDataAsset* BoobyTrapSpawnerDataAsset; // 0x50
	TArray<UBoobyTrapSpawnerDataAsset*> UniqueTreasureLocationBoobyTraps; // 0x58
	TArray<UWeightedTreasureChestDescAsset*> UniqueTreasureLocationRewards; // 0x68
	TArray<UWeightedItemDescSpawnDataAsset*> UniqueTreasureLocationRewardsAssets; // 0x78
};

struct FMapTextureRenderData {
	UMapRenderResource* RenderResource; // 0x0
	UMaterialInstance* Material; // 0x8
	TArray<FMapTransformRenderData> Transforms; // 0x10
};

struct FAthenaAIAbilityPlayerBasedRanges {
	TArray<FAthenaAIAbilityPlayerBasedRange> AbilityRanges; // 0x0
};

struct FQuestVarPLSectionBundle : FQuestVariable {
	FName ParamName; // 0x8
};

struct FRequestSeasonPassRealMoneyPriceEvent {
	int32_t Price; // 0x0
};

struct FConfig {
	FIPGData IPG; // 0x0
	FName MaleBaseShape; // 0x48
	FName FemaleBaseShape; // 0x50
	FIPGBodyShapes BodyShapes; // 0x58
};

struct FGetAmmoChestsDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FAmmoChestStateData> Data; // 0x8
};

struct FContinuousAnimationElement {
	FName SequenceName; // 0x0
	FAnimationContinuousCycle ContinuousSequence; // 0x8
	float BlendTime; // 0x50
};

struct FRemoveStormData {
	int32_t ActorId; // 0x0
};

struct FSetTriggerDetectingData {
	int32_t NetId; // 0x0
	bool Detecting; // 0x4
};

struct FEventPlayerLeftAISpawnRegion {
	AActor* Player; // 0x0
};

struct FNetPositionErrorTolerance {
	float ZDistance; // 0x0
	float XYDistance; // 0x4
};

struct FBootFlowSetEngagementMessage {
	FString Message; // 0x0
};

struct FCommerceRemoteServicePurchaseRequest {
	FString StoreId; // 0x0
	FGuid OfferId; // 0x10
	EWalletCurrencyId CurrencyId; // 0x20
	FString TransactionId; // 0x28
	FPiratePurchaseClaims PiratePurchaseClaims; // 0x38
	EPlayMode Playmode; // 0x88
	EPlayModeVariant PlayModeVariant; // 0x89
};

struct FCoherentUIGTViewInfo {
	int32_t Width; // 0x0
	int32_t Height; // 0x4
	bool IsTransparent; // 0x8
	float ClickThroughAlphaThreshold; // 0xc
	float AnimationFrameDefer; // 0x10
};

struct FPlayerLeftGhostShipTelemetryEvent {
	int32_t LifetimeInSeconds; // 0x0
};

struct FClothingChestCloseRequestEvent {
	FRequestClosePossessionsChestEvent ClosePossessionsChestEvent; // 0x0
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FTeleportShipToTunnelEvent {
	AActor* Ship; // 0x0
};

struct FAthenaAnimationDeathAnimData {
	UAnimSequence* SwimmingSurfaceDeath; // 0x0
	UAnimSequence* LocomotionDeath; // 0x8
	UAnimSequence* DrowningDeath; // 0x10
	UAnimSequence* WakeUp; // 0x18
	UAnimSequence* WakeUpSwimming; // 0x20
	UBlendSpace1D* DrowningDeath3rdPerson; // 0x28
	UAnimSequence* BeckonInto; // 0x30
	UAnimSequence* BeckonLoop; // 0x38
};

struct FEventExplosionOverlap {
	UDamagerType* DamagerType; // 0x0
};

struct FClientBootFlowErrorOccurredTelemetryEvent {
	FString ErrorMessage; // 0x0
};

struct FEventPickupableObjectPickedUp {
	APickupableObject* PickupableObject; // 0x0
	AActor* InteractingPlayer; // 0x8
};

struct FAnimatedMechanismActionState {
	int32_t AnimationID; // 0x0
	double StartTime; // 0x8
	double EndTime; // 0x10
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0x58
	EComponentType SourceComponent; // 0x64
	UCurveFloat* DrivingCurve; // 0x68
	float Multiplier; // 0x70
	bool bUseRange; // 0x74
	float RangeMin; // 0x78
	float RangeMax; // 0x7c
	float RemappedMin; // 0x80
	float RemappedMax; // 0x84
	FBoneReference TargetBone; // 0x88
	EComponentType TargetComponent; // 0x94
	char bAffectTargetTranslationX : 1; // 0x98
	char bAffectTargetTranslationY : 1; // 0x98
	char bAffectTargetTranslationZ : 1; // 0x98
	char bAffectTargetRotationX : 1; // 0x98
	char bAffectTargetRotationY : 1; // 0x98
	char bAffectTargetRotationZ : 1; // 0x98
	char bAffectTargetScaleX : 1; // 0x98
	char bAffectTargetScaleY : 1; // 0x98
	char bAffectTargetScaleZ : 1; // 0x99
	EDrivenBoneModificationMode ModificationMode; // 0x9c
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FDeadActionStateParams {
	float FadeDelay; // 0x0
	float FadeDuration; // 0x4
	float FadeEventTimeout; // 0x8
	float FadeServerTimeout; // 0xc
	FLinearColor FadeColour; // 0x10
	bool FadeAudio; // 0x20
	float DeathCameraBlackFadeDelay; // 0x24
	float DeathCameraBlackFadeDuration; // 0x28
	float DeathCameraBlackFadeEventTimeout; // 0x2c
	float DeathCameraBlackFadeServerTimeout; // 0x30
	FLinearColor DeathCameraBlackFadeColour; // 0x34
	float DeathCameraDelayBeforeEvaporate; // 0x44
	bool DeathCameraFadeAudio; // 0x48
	float DeathCameraDelay; // 0x4c
	UGhostDataAsset* PlayerGhostDataAsset; // 0x50
};

struct FEventPlayerConfigRequestAllConfigsResponse {
	TMap<FString, int32_t> AllConfigs; // 0x0
};

struct FCurrencyGrantedNetworkEvent : FNetworkEventStruct {
	EWalletCurrencyId CurrencyId; // 0x10
	uint32_t Amount; // 0x14
	FName EmissaryAffiliation; // 0x18
	float EmissaryMultiplier; // 0x20
	FName RewardId; // 0x24
};

struct FTypedIslandItemSpawnLocationData {
	UIslandItemDataAsset* LocationType; // 0x0
	TArray<FIslandItemSpawnLocationData> Locations; // 0x8
};

struct FShipLeakParams {
	float InternalWaterSamplePositionTopOffset; // 0x0
	float InternalWaterSamplePositionBottomOffset; // 0x4
	float WaterSplashDelayMin; // 0x8
	float WaterSplashDelayMax; // 0xc
	float HullFloodedPercentageToShiftWaterSamplingPos; // 0x10
	float WaterSampleOffsetBelowHullFloodThreshold; // 0x14
	float WaterSampleOffsetAboveHullFloodThreshold; // 0x18
};

struct FRewardGrantedMessage {
	FString RewardId; // 0x0
	EWalletCurrencyId CurrencyId; // 0x10
	uint32_t CurrencyAmount; // 0x14
	FString CompanyId; // 0x18
	uint32_t Xp; // 0x28
	uint32_t NumLevels; // 0x2c
	TArray<FString> Entitlements; // 0x30
	FGuid RequestID; // 0x40
	FString DeferralReason; // 0x50
};

struct FAthenaAnimationCoreObjectAnimations {
	FAthenaAnimationObjectLocomotionAnimations Locomotion; // 0x0
	FAthenaAnimationObjectLocomotionAnimations AlternateLocomotion; // 0x40
	FAthenaAnimationObjectJumpingAnimations Jumping; // 0x80
	FAthenaAnimationObjectJumpingAnimations AlternateJumping; // 0xa0
	FAthenaAnimationObjectEquipAnimations Equipping; // 0xc0
	FAthenaAnimationObjectIdleAnimations Idles; // 0x100
	FAthenaAnimationObjectIdleAnimations AlternateIdles; // 0x118
	FAthenaAnimationObjectActionOneShot ActionPrimarySingle; // 0x130
	FAthenaAnimationObjectActionContinuous ActionPrimaryContinuous; // 0x170
	bool PrimaryActionPitchOverride; // 0x2c0
	FAthenaAnimationObjectActionOneShotPitchOverride ActionPrimarySinglePitchOverride; // 0x2c8
	FAthenaAnimationObjectActionContinuousPitchOverride ActionPrimaryContinuousPitchOverride; // 0x2e8
	FAthenaAnimationObjectActionOneShot ActionSecondarySingle; // 0x3d8
	FAthenaAnimationObjectActionContinuous ActionSecondaryContinuous; // 0x418
	bool SecondaryActionPitchOverride; // 0x568
	FAthenaAnimationObjectActionOneShotPitchOverride ActionSecondarySinglePitchOverride; // 0x570
	FAthenaAnimationObjectActionContinuousPitchOverride ActionSecondaryContinuousPitchOverride; // 0x590
	FAthenaAnimationObjectMeleeV2 MeleeV2; // 0x680
	UAnimSequence* HandAdditive; // 0x7c0
	float HandAdditiveDeactivationBlendTime; // 0x7c8
	FTransform OffsetLeftHand; // 0x7d0
	FTransform OffsetRightHand; // 0x800
	FWieldAnimationParams Params; // 0x830
	FAthenaAnimationObjectFacial Facial; // 0x870
	bool RangedWeapon; // 0x8e0
	bool UseAlternateAsTransition; // 0x8e1
	FAthenaAnimationSkeletonKnockbackLocomotionStrength KnockBack; // 0x8e8
	FAthenaAnimationFishingAnimations Fishing; // 0x908
	UAnimSequence* ScreamStun; // 0x998
};

struct FMemoryCommonData {
	float mUsedPhysicalMB; // 0x0
	float mUsedPhysicalPercentage; // 0x4
	float mAvailablePhysicalMB; // 0x8
	float mAvailablePhysicalPercentage; // 0xc
	float mOOMBackupPoolSize; // 0x10
	float mExecutableSize; // 0x14
	float mConfigCacheMemoryUsage; // 0x18
	float mFNameTableMemoryUsage; // 0x1c
	float mAssetRegistrySize; // 0x20
	float mGCWorkingMemoryPoolSizeMB; // 0x24
	float mGCAllocated; // 0x28
	float mObjectsArraySizeMB; // 0x2c
	int32_t mMaxObjectsAllowed; // 0x30
	int32_t mNumPermanentObjects; // 0x34
	int32_t mNumTransientObjects; // 0x38
	int32_t mUnsetSlotCound; // 0x3c
	uint32_t mClusterMemoryUsedBytes; // 0x40
	int32_t mNumClusters; // 0x44
	int32_t mNumClusteredObjects; // 0x48
	int32_t mMaxClusterSize; // 0x4c
};

struct FLinkEndpointId {
	FName Raw; // 0x0
};

struct FBuoyancyDragSample {
	FVector Offset; // 0x0
	FVector Normal; // 0xc
	FVector Tangent; // 0x18
	float Radius; // 0x24
	float DragCoefficient; // 0x28
	EBuoyancyDragSampleType Type; // 0x2c
};

struct FCloudTypeDefinition {
	UStaticMesh* CloudMesh; // 0x0
	UStaticMesh* CloudFluffyMesh; // 0x8
	FVector2D ScaleRange; // 0x10
	FVector2D StorminessRange; // 0x18
	float ProbabilityWeight; // 0x20
	float OverlapTolerance; // 0x24
	bool IsStreetCloud; // 0x28
	bool CastsShadow; // 0x29
};

struct FClothingSlot {
	FName Name; // 0x0
	TArray<FName> Tags; // 0x8
	EIPGSlotType Type; // 0x18
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FTradeRouteMapping {
	FIslandSelectionType StartIsland; // 0x0
	UTradeRouteDifficultyBand* DifficultyBand; // 0x8
	FStringAssetReference TradeRouteReference; // 0x10
};

struct FEventExposedToRainChanged {
	bool IsExposedToRain; // 0x0
};

struct FLockMetaWrapper : FItemMetaBase {
	TArray<FStorableLockState> LockStates; // 0x18
	FScriptMulticastDelegate LockOpenDelegate; // 0x28
	FScriptMulticastDelegate LockOpened; // 0x38
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

struct FQuestVariableContestIslandArchetype : FQuestVariable {
	FName ParamName; // 0x8
};

struct FAthenaAnimationSittingAnimData {
	UAnimSequence* Into; // 0x0
	UAnimSequence* Loop; // 0x8
};

struct FWaterSlideActionStateParams {
	float ForcedFieldOfView; // 0x0
	bool ForceStash; // 0x4
	FLookAtOffsetParams LookAtOffsetParams; // 0x8
};

struct FTTLinearColorTrack : FTTTrackBase {
	UCurveLinearColor* CurveLinearColor; // 0x10
};

struct FCompanyScreenInformation {
	FReputationCompanyDisplayInformation CompanySummary; // 0x0
	FCappedCount CompanyProgression; // 0xe0
	FText CompanyFlavourText1; // 0xe8
	FText CompanyFlavourText2; // 0x120
	TArray<FEmblemSetInformation> EmblemSets; // 0x158
};

struct FTaleQuestDesc : FQuestDesc {
	UTaleQuestStepDesc* Root; // 0x28
	UObject* Definition; // 0x30
	FText TaleFailMessage; // 0x38
	FName TaleFailBannerTag; // 0x70
	bool ShouldFireStartTallTaleTrackedObjective; // 0x78
	bool Development; // 0x79
};

struct FCrewSessionJoinedTelemetryEvent : FCrewSessionBaseSessionTelemetryEvent {
	FString JoinMethod; // 0x50
	TArray<FCrewSessionQoSMeasurementTelemetry> QoSTelemetry; // 0x60
};

struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FQuestStartBountyTelemetryEvent {
	FString IslandName; // 0x0
	FString LandmarkName; // 0x10
};

struct FResetToMaxHealthData {
	int32_t ActorId; // 0x0
};

struct FEmoteDataEntryFrontend {
	FName EmoteIdent; // 0x0
	UAnimSequenceBase* EmotePreviewSequence; // 0x8
};

struct FParticleSystemPicker {
	UParticleSystem* ObserverAboveEffectAboveWater; // 0x0
	UParticleSystem* ObserverBelowEffectBelowWater; // 0x8
	UParticleSystem* ObserverAboveEffectBelowWater; // 0x10
	UParticleSystem* ObserverBelowEffectAboveWater; // 0x18
};

struct FChecklistMapLayoutItem {
	FTreasureMapWidgetText Description; // 0x0
	FTreasureMapWidgetTexture IconImage; // 0x20
};

struct FInitialShipSpawnLocations {
	TArray<AShipSpawnLocation*> ShipSpawnLocations; // 0x0
};

struct FInstancedNavMesh {
	UClass* AssetClass; // 0x0
	FVector Location; // 0x20
	FName NavMeshName; // 0x2c
	FNavAgentSelector SupportedAgents; // 0x34
};

struct FGameplayTagReponsePair {
	FGameplayTag Tag; // 0x0
	UGameplayEffect* ResponseGameplayEffect; // 0x8
};

struct FPirateProfile {
	FPirateIdentity PirateIdentity; // 0x0
	FPirateDescription Description; // 0x78
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x868
	FSlateBrush UpArrowImage; // 0x8a8
	FSlateBrush DownArrowImage; // 0x938
	FSlateBrush GlassImage; // 0x9c8
	FSlateBrush ClearImage; // 0xa58
	FMargin ImagePadding; // 0xae8
	bool bLeftAlignButtons; // 0xaf8
};

struct FMastDesc {
	UStaticMesh* MastUnbrokenMesh; // 0x0
	UStaticMesh* MastMainYardMesh; // 0x8
	UStaticMesh* MastTopYardMesh; // 0x10
	UStaticMesh* MastTopgallantYardMesh; // 0x18
	UStaticMesh* MastPennantMesh; // 0x20
	UStaticMesh* MastSecondaryPennantMesh; // 0x28
	UStaticMesh* MastCrowsNestMesh; // 0x30
};

struct FDrawDebugItemMessage {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	FString Message; // 0x10
	FColor Colour; // 0x20
};

struct FAggressiveGhostShipSpawnTelemetryEvent {
	FGuid ShipId; // 0x0
	EAggressiveGhostShipType ShipType; // 0x10
	FGuid EncounterId; // 0x14
	int32_t WaveIndex; // 0x24
};

struct FAnimNode_HIKReachRotator : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float ReachT; // 0x4c
	float ReachR; // 0x50
	FVector Translation; // 0x54
	FRotator Orientation; // 0x60
	EHIKEffector Effector; // 0x6c
	EHIKEffectorSpace EffectorSpace; // 0x6d
};

struct FEmissaryValueChangeUIEvent {
	int64_t From; // 0x0
	int64_t To; // 0x8
	FString EmissaryId; // 0x10
};

struct FEventPlayerUseItemEnd {
	UNotificationInputId* InputID; // 0x0
	AActor* UsedItem; // 0x8
};

struct FEncounterListener {
	AActor* EncounterListenerActor; // 0x0
	FVector EncounterListenerLocation; // 0x8
	EEncounterListenerType EncounterListenerType; // 0x14
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

struct FTestTelemetryInheritanceLevel1Struct : FTestTelemetryInheritanceBaseStruct {
	FString B; // 0x10
};

struct FEventGhostShipPlayerSpawnLocationCreated {
	AGhostShipPlayerSpawnLocation* SpawnLocation; // 0x0
};

struct FKrakenHeadStateAnimationMapping {
	UKrakenHeadState* State; // 0x0
	UAnimSequence* Animation; // 0x8
	bool Loop; // 0x10
	TArray<FKrakenHeadTransitionAnimation> Transitions; // 0x18
};

struct FCapstanDesc {
	UStaticMesh* CapstanBodyMesh; // 0x0
	UStaticMesh* CapstanArmMesh; // 0x8
	UStaticMesh* CapstanReleaseMesh; // 0x10
	UStaticMesh* CapstanRopeMesh; // 0x18
};

struct FGetFilteredCatalogRequestModel {
	FPirateIdentity PirateIdentity; // 0x0
	TMap<EWalletCurrencyId, uint32_t> Balances; // 0x78
	TMap<FName, FCompanyLevelClaim> CompanyLevels; // 0xc8
};

struct FShipCustomizationPersistenceModel : FPersistenceModel {
	TArray<FName> EntitlementKeys; // 0x0
};

struct FFishSizeAndType {
	EFishSize Size; // 0x0
	AFishingFish* Type; // 0x8
};

struct FGameNameRedirect {
	FString OldGameName; // 0x0
	FString NewGameName; // 0x10
};

struct FServerCrewRequestModel {
	FGuid ServerId; // 0x0
	FString VmId; // 0x10
	FString PrivateServerId; // 0x20
	FString ServerLocation; // 0x30
	uint32_t FeatureHash; // 0x40
	TArray<FString> PlayModeTags; // 0x48
	FString PlayModeState; // 0x58
	int32_t CrewCount; // 0x68
	int32_t CrewCountBucket; // 0x6c
	int32_t CrewMin; // 0x70
	int32_t CrewMax; // 0x74
	TArray<int32_t> CrewSessionTypes; // 0x78
	FTimespan Uptime; // 0x88
	FServerContendedModel Contended; // 0x90
};

struct FRemoteAchievementProgressModel {
	TMap<FString, uint32_t> AchievementProgress; // 0x0
};

struct FServerTeleportCompleteAckNetworkEvent : FNetworkEventStruct {
	EServerTeleportAckReason Reason; // 0x10
};

struct FEntitlementItem {
	FText Description; // 0x0
	bool Owned; // 0x38
	FStringAssetReference PreviewImageUrl; // 0x40
	FStringAssetReference ThumbnailImageUrl; // 0x50
	FText DisplayName; // 0x60
	FString Id; // 0x98
};

struct FPirateDeletionRequestedEvent {
	FPirateIdentity Target; // 0x0
};

struct FShipUndoRepairTelemetryEvent {
	FString UserId; // 0x0
	FVector UndoRepairLocation; // 0x10
	FString ShipPart; // 0x20
	int32_t DamageLevel; // 0x30
	float UndoRepairPercentage; // 0x34
};

struct FRemotePreferencesModel {
	FRemotePreferences Preferences; // 0x0
};

struct FMeshAnimatorInstance {
	TArray<UMeshComponent*> Meshes; // 0x60
};

struct FStartPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FVfxSpawner {
	UObject* EmitterTemplate; // 0x8
	USceneComponent* AttachToComponent; // 0x10
	USceneComponent* SocketOwnerComponent; // 0x18
	UObject* Owner; // 0x20
};

struct FTimedDoorState {
	ETimedDoorState State; // 0x0
	int32_t JammedLandmarkReactionIndex; // 0x4
	int32_t LoweringLandmarkReactionIndex; // 0x8
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x1e0
};

struct FFireGridRelativeSpawnDesc {
	FVector Location; // 0x0
	FIntVector GridLocation; // 0xc
	int32_t NumCellRowsToSpawnFor; // 0x18
	int32_t MinNumCellsToActivate; // 0x1c
	TArray<int32_t> CellIndicesToSpawnFor; // 0x20
};

struct FRemoteRewardRequestModel {
	TArray<FPirateIdentity> Pirates; // 0x0
	FGuid RequestID; // 0x10
	FString CrewId; // 0x20
	FName RewardId; // 0x30
	FName Company; // 0x38
	bool NotifyPlayer; // 0x40
};

struct FAthenaAnimationJumpingAnimData {
	FAthenaAnimationJumpingFirstPersonAnimData Jumping1stPerson; // 0x0
	FAthenaAnimationJumpingThirdPersonAnimData Jumping3rdPerson; // 0x28
};

struct FSetNotificationScale {
	float ScaleValue; // 0x0
};

struct FCrewAllianceJoinStatus {
	FGuid CrewId; // 0x0
	EAllianceJoinStatus AllianceJoinStatus; // 0x10
	EAllianceJoinStatus LastAllianceJoinStatus; // 0x11
};

struct FWeightedProbabilityRangeOfRanges : FWeightedProbabilityRange {
	TArray<FWeightedProbabilityRangeOfRangesFloatPair> SubRanges; // 0x20
};

struct FEmissaryBootyItemStats {
	UCompany* EmissaryCompany; // 0x0
	TArray<FPlayerStat> Stats; // 0x8
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FCreateStormDataResponse {
	bool Success; // 0x0
	int32_t StormId; // 0x4
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FChargedAttackProjectileWeights {
	float ChargeTime; // 0x0
	float Weight; // 0x4
};

struct FEventOneShotUseTriggered {
	AActor* Item; // 0x0
	UNotificationInputId* InputID; // 0x8
	FWieldableItemActionVisuals Visuals; // 0x10
};

struct FIntentPredictor {
	FIntentPredictorParams Params; // 0x4
};

struct FPlayerTamperedTelemetryEvent {
	uint64_t TamperFlags; // 0x0
	uint64_t ShipRegion; // 0x8
};

struct FPlayerSetFootLocationTelemetryEvent {
	FString LocationName; // 0x0
};

struct FAIShipCaptainActionStateSerialisableData : FControlObjectActionStateSerialisableData {
	FVector UndockLocation; // 0x30
	bool UndockRequested; // 0x3c
};

struct FDebugSuperSailorSetSpeedAmpRPCEvent : FNetworkEventStruct {
	float FwdSpdAmp; // 0x10
	float YawSpdAmp; // 0x14
};

struct FRetrieveAllPiratesRequestEvent {
	FUniqueNetIdRepl UserId; // 0x0
	FGuid RequestID; // 0x18
};

struct FNPCDialogHeaderByConditionText {
	FText Text; // 0x0
	TArray<UNPCDialogConditional*> Conditions; // 0x38
};

struct FAshenLordWorldEndCloudAnimation {
	float ServerStartTime; // 0x0
	float ServerLifeTime; // 0x4
};

struct FPermanentPromptNetworkEvent : FNetworkEventStruct {
	FPrioritisedPromptWithHandle Prompt; // 0x10
	EPromptStartStop StartOrStop; // 0x78
};

struct FPetListingTypeEntry {
	FStringAssetReference PetPartsCategory; // 0x0
	FStringClassReference PetType; // 0x10
	FName FeatureToggleName; // 0x20
	FString PetListingName; // 0x28
};

struct FIndividualMeshScoring {
	FGuid RegistrationToken; // 0x0
	AActor* MeshOwner; // 0x10
};

struct FSeagullManagerFormation {
	int32_t NumInFormation; // 0x0
	TArray<FSeagullManagerFormationOffset> FormationOffsets; // 0x8
};

struct FIPGSetsData {
	int32_t Version; // 0x0
	TArray<FIPGSetData> Sets; // 0x8
};

struct FOwnerListEntry {
	TArray<FGuid> OwnerList; // 0x0
};

struct FHullDamageHit {
	FVector HitPosition; // 0x0
	FVector HitNormal; // 0xc
	float HitStrength; // 0x18
	int32_t HitLevel; // 0x1c
	bool HasDecal; // 0x20
};

struct FPurchasePremiumCurrencyResponseEvent {
	FString Id; // 0x0
	FString Title; // 0x10
	FString ImageUrl; // 0x20
};

struct FTreasureChestSoldNetworkEvent : FNetworkEventStruct {
	FName RewardId; // 0x10
};

struct FAthenaAnimationObjectJumpingAnimations {
	UBlendSpace* Start; // 0x0
	UBlendSpace* Cycle; // 0x8
	UBlendSpace* PreImpact; // 0x10
	UBlendSpace* LandLight; // 0x18
};

struct FAnimNode_HIKPin : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float PinTStrength; // 0x4c
	float PinRStrength; // 0x50
	EHIKEffector Effector; // 0x54
};

struct FRiddleQuestParams : FQuestTypeParams {
	uint32_t MinNumGates; // 0x30
	uint32_t MaxNumGates; // 0x34
	UBoobyTrapSpawnerDataAsset* BoobyTrapSpawnerDataAsset; // 0x38
};

struct FItemLoadoutItemAddedEvent {
	AItemInfo* Item; // 0x0
};

struct FEnchantedCompassTarget {
	int32_t TargetID; // 0x0
	FVector TargetLocation; // 0x4
	TWeakObjectPtr<AActor> TargetActor; // 0x10
};

struct FOpenSeasonsMenuEvent {
	ENavigationAction NavigationAction; // 0x0
	FGuid Id; // 0x4
};

struct FAthenaAnimationObjectLocomotionAnimations {
	UBlendSpace* Locomotion1; // 0x0
	UBlendSpace* Locomotion2; // 0x8
	UBlendSpace* Locomotion3; // 0x10
	UBlendSpace* Locomotion4; // 0x18
	UAnimSequence* LocomotionTurningLeft; // 0x20
	UAnimSequence* LocomotionTurningRight; // 0x28
	UAnimSequence* LocomotionOutOf; // 0x30
	UBlendSpace* LocomotionSwimming; // 0x38
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FTriIndices {
	int32_t v0; // 0x0
	int32_t v1; // 0x4
	int32_t v2; // 0x8
};

struct FEventCompanyReputationCampaignDetail {
	FString Title; // 0x0
	FString Description; // 0x10
	FString ImageUrl; // 0x20
	FCappedCount CommendationProgress; // 0x30
	FCappedCount TitleProgress; // 0x38
	TArray<FEmblemSetInformation> EmblemSets; // 0x40
};

struct FItemSpawnDistribution {
	TArray<FItemSpawnWeightedType> WeightedList; // 0x0
};

struct FEventPlayerLeftProximity {
	AActor* Player; // 0x0
};

struct FSeasonGoalProgressionMessage {
	FPirateIdentity Pirate; // 0x0
	int32_t PreviousProgress; // 0x78
	int32_t CurrentProgress; // 0x7c
	int32_t CompletionThreshold; // 0x80
	FGuid SeasonId; // 0x84
	FGuid GoalId; // 0x94
	ESeasonGoalType GoalType; // 0xa4
	FGuid GoalGroupId; // 0xa8
};

struct FSingleStickMappingUserSettingsBoolean {
	FName SettingName; // 0x0
	bool Value; // 0x8
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FEmissaryDisplayInformation {
	FText Title; // 0x0
	FText Description; // 0x38
	FStringAssetReference KeyArt; // 0x70
	FStringAssetReference Icon; // 0x80
};

struct FCanvasWorldMapBackgroundItems {
	UTexture* Texture; // 0x0
	FVector2D WorldSize; // 0x8
	TArray<FVector2D> Locations; // 0x10
};

struct FEventSetFishingRodWieldedItem {
	AActor* FishingRod; // 0x0
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

struct FCommoditySelectionType {
	FName CommodityType; // 0x0
};

struct FRiggingSystemLine {
	uint32_t RopeStart; // 0x0
	uint32_t SocketStart; // 0x4
	uint32_t PulleyStart; // 0x8
	uint32_t NumRopes; // 0xc
};

struct FHangoutSpotId {
	FName Name; // 0x0
};

struct FShopOffersEvent {
	TArray<FShopOffer> Offers; // 0x0
	TArray<FString> Categories; // 0x10
};

struct FEventCrewShipManifestChanged {
	AShip* Ship; // 0x0
	ACrewShipManifest* Manifest; // 0x8
};

struct FEmissarySoldLootNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
};

struct FPlayerItemRetrievalFromContainerCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FEmissaryRewardEntry {
	UCompany* Company; // 0x0
	FEmissaryActionRewardData ActionRewardData; // 0x8
};

struct FWieldedItemData {
	AActor* Wieldable; // 0x0
	UItemCategory* ItemCategory; // 0x8
};

struct FVoyageChapterBegunAnimationEvent {
	int32_t ChapterIndex; // 0x0
	int32_t ChapterCount; // 0x4
	FText VoyageTitle; // 0x8
	FString AudioSwitchName; // 0x40
	FString AudioSwitchValue; // 0x50
	FName CompanyId; // 0x60
};

struct FStepChecklistItemDesc {
	FText Description; // 0x0
	int32_t NumRequiredCompletions; // 0x38
	UTexture* UnfulfilledIcon; // 0x40
	UTexture* FulfilledIcon; // 0x48
};

struct FWhatsNewArticleModel {
	FString Title; // 0x0
	FString Description; // 0x10
	FString HeroImage; // 0x20
	FString GridImage; // 0x30
	FString GridPrimaryDescription; // 0x40
	FString GridSecondaryDescription; // 0x50
	FString DescriptionTimes; // 0x60
};

struct FPlayerEncounterEndCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FFocusRadialInventorySlot : FRadialInventoryEvent {
	int32_t SlotIndex; // 0x4
};

struct FFeatureToggledMechanismGroups {
	FName Feature; // 0x0
	TArray<AMechanismGroup*> MechanismGroups; // 0x8
};

struct FChainData {
	TArray<FChainLink> Chain; // 0x0
	float LifeTime; // 0x10
};

struct FAIShipEncounterCompleteNetEvent : FBoxedRpc {
	int32_t BattleIdx; // 0x10
	ECannonballIconType CannonballIconType; // 0x14
	ESkellyFormIconType SkellyFormIconType; // 0x15
};

struct FOnCannonBallHitShipCustomServerEvent : FGlobalCustomServerEvent {
	FString CannonBallType; // 0x18
	int32_t ShipId; // 0x28
};

struct FFriendsListError {
	FString Error; // 0x0
};

struct FVomitVFX {
	float Delay; // 0x0
	TArray<FVomitVFXObject> VomitVFXObjects; // 0x8
	FName SocketName1st; // 0x18
	FVector Location1st; // 0x20
	FRotator Rotation1st; // 0x2c
	UParticleSystemComponent* Component1st; // 0x38
	FName SocketName3rd; // 0x40
	FVector Location3rd; // 0x48
	FRotator Rotation3rd; // 0x54
	UParticleSystemComponent* Component3rd; // 0x60
	TArray<AControllableObject*> No1stObjects; // 0x68
	AController* Controller; // 0x78
};

struct FCampaignGoalProgressEvent {
	FPirateIdentity PirateIdentity; // 0x0
	int64_t PreviousProgress; // 0x78
	int64_t CurrentProgress; // 0x80
	int64_t CompletionThreshold; // 0x88
	FGuid GoalId; // 0x90
	FDateTime ActiveFrom; // 0xa0
	FDateTime ActiveUntil; // 0xa8
};

struct FBumperZoneData {
	AShipBumperZone* BumperZone; // 0x0
};

struct FPlayerObjectUsageStartCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FAIShipEncounterBattleGenerationParams {
	UShipSize* HardShipType; // 0x0
	FWeightedProbabilityRange NumberOfWaves; // 0x8
	FInt32Range MinMaxNumberOfShips; // 0x28
	int32_t MinNumberOfShipsInFinalWave; // 0x38
	TArray<FAIShipSizeLimit> ShipSizeLimits; // 0x40
	TArray<FAIShipEncounterWaveDesc> WaveConfigurations; // 0x50
};

struct FShipPartCustomizationInfo {
	FName PartName; // 0x0
	FStringAssetReference Customization; // 0x8
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FEventCharacterSpawned {
	ACharacter* Character; // 0x0
};

struct FMatineeActorStopNetworkEvent : FNetworkEventStruct {
	AMatineeActor* MatineeActor; // 0x10
};

struct FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FEventAIPawnCarrierChange {
	AActor* Carrier; // 0x0
};

struct FAchievementUnlockedEvent {
	FString AchievementId; // 0x0
};

struct FAthenaAnimationSwimmingAnimData {
	UBlendSpace* SwimmingMovement; // 0x0
	UBlendSpace* SwimmingMovementUnderwater; // 0x8
	UBlendSpace1D* UnderwaterTreadwater; // 0x10
	FAthenaAnimationLocomotionTurningAnimData TurningLeft; // 0x18
	FAthenaAnimationLocomotionTurningAnimData TurningRight; // 0x20
	TArray<UAnimSequence*> Idles; // 0x28
	TArray<UAnimSequence*> IdlesUnderwater; // 0x38
	FAthenaAnimationSwimmingSprintAnimData SwimSprint; // 0x48
};

struct FOnPlayerChangedWaterSlideRouteActionStateEvent {
	UWwiseEvent* WaterSlideChangeForkOneShot; // 0x8
};

struct FShopDialogueMessages {
	FString ConfirmPurchaseMessage; // 0x0
	FString PurchaseFailedMessage; // 0x10
	FString PurchasePendingMessage; // 0x20
	FString PurchaseSuccessMessage; // 0x30
	FString GetShopOffersFailedMessage; // 0x40
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FSerialisedTestStruct {
	int32_t Int; // 0x0
	float Float; // 0x4
	FString String; // 0x8
	TArray<int32_t> IntArray; // 0x18
	TArray<FSerialisedNestedStruct> StructArray; // 0x28
	FSerialisedNestedStruct NestedStruct; // 0x38
};

struct FAIKnockbackActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FVector KnockbackDirection; // 0x30
	float KnockbackSpeed; // 0x3c
	float KnockbackAccel; // 0x40
	EAIKnockbackStrengthType KnockbackStrengthType; // 0x44
};

struct FHaulItemDescSpawnDataKey {
	char SeaRegionIndex; // 0x0
	char HaulIndex; // 0x1
	uint16_t ItemSpawnDataIndex; // 0x2
};

struct FQuestBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	FGuid QuestId; // 0x0
};

struct FEventShipTopDeckUnblocked {
	FGuid BlockerId; // 0x0
};

struct FRequiredClothingData {
	int32_t RequiredNumberToMatch; // 0x0
	TArray<UClothingDesc*> RequiredClothing; // 0x8
};

struct FEmergantVoyageQuestDesc : FQuestDesc {
	FString Title; // 0x8
	bool IsEmergent; // 0x18
	FName IslandName; // 0x1c
};

struct FSimpleOverlapInfo {
	AActor* OtherActor; // 0x0
	UPrimitiveComponent* OtherComponent; // 0x8
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x18
	bool bAttached; // 0x20
	float OriginalRadius; // 0x24
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	char bAffectsLeftTrigger : 1; // 0x0
	char bAffectsRightTrigger : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FArmoryItemEntitlementsUpdatedEvent {
	TArray<FChestEntitlementViewModel> ItemEntitlements; // 0x0
};

struct FGPUSpriteResourceData {
	TArray<FColor> QuantizedColorSamples; // 0x0
	TArray<FColor> QuantizedMiscSamples; // 0x10
	TArray<FColor> QuantizedDynamicParamSamples; // 0x20
	TArray<FColor> QuantizedSimulationAttrSamples; // 0x30
	TArray<FColor> QuantizedSizeOverVelocitySamples; // 0x40
	FVector4 ColorScale; // 0x50
	FVector4 ColorBias; // 0x60
	FVector4 MiscScale; // 0x70
	FVector4 MiscBias; // 0x80
	FVector4 DynParamScale; // 0x90
	FVector4 DynParamBias; // 0xa0
	FVector4 MurkyColorScale; // 0xb0
	FVector4 SimulationAttrCurveScale; // 0xc0
	FVector4 SimulationAttrCurveBias; // 0xd0
	FVector4 SizeOverVelocityScale; // 0xe0
	FVector4 SizeOverVelocityBias; // 0xf0
	FVector4 SubImageSize; // 0x100
	FVector4 SizeBySpeed; // 0x110
	FVector ConstantAcceleration; // 0x120
	FVector OrbitOffsetBase; // 0x12c
	FVector OrbitOffsetRange; // 0x138
	FVector OrbitFrequencyBase; // 0x144
	FVector OrbitFrequencyRange; // 0x150
	FVector OrbitPhaseBase; // 0x15c
	FVector OrbitPhaseRange; // 0x168
	float GlobalVectorFieldScale; // 0x174
	float GlobalVectorFieldTightness; // 0x178
	float PerParticleVectorFieldScale; // 0x17c
	float PerParticleVectorFieldBias; // 0x180
	float DragCoefficientScale[0x6]; // 0x184
	float DragCoefficientBias[0x6]; // 0x19c
	float DragLocalVelocityScale[0x6]; // 0x1b4
	float DragLocalVelocityBias[0x6]; // 0x1cc
	float ResilienceScale; // 0x1e4
	float ResilienceBias; // 0x1e8
	float CollisionRadiusScale; // 0x1ec
	float CollisionRadiusBias; // 0x1f0
	float CollisionTimeBias; // 0x1f4
	float OneMinusFriction; // 0x1f8
	float CameraMotionBlurAmount; // 0x1fc
	float AlphaThreshold; // 0x200
	EParticleScreenAlignment ScreenAlignment[0x6]; // 0x204
	EParticleAxisLock LockAxisFlag; // 0x20a
	FVector2D PivotOffset; // 0x20c
	float AlignmentInheritedVelocityScale; // 0x680
};

struct FAIEncounterWave {
	TArray<FAIEncounterSpecification> Specifications; // 0x0
	TArray<int32_t> SpecificationSpawnOrder; // 0x10
};

struct FSpeechAccessibilitySetting {
	FString Id; // 0x0
	FString Value; // 0x10
};

struct FCompositeSubFont {
	FTypeface Typeface; // 0x0
	TArray<FInt32Range> CharacterRanges; // 0x10
	TArray<EFontLanguage> Languages; // 0x20
	float ScalingFactor; // 0x30
};

struct FAIShipCaptainParams {
	UAIClassId* AIClassId; // 0x0
	FName Name; // 0x8
};

struct FTutorialStepBuyVoyage : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FSocketPath {
	TArray<FSocketPathNode> Nodes; // 0x0
};

struct FWheelIKActivationRanges {
	FFloatRange LeftArmDownRangeA; // 0x0
	FFloatRange LeftArmDownRangeB; // 0x10
	FFloatRange RightArmDownRangeA; // 0x20
	FFloatRange RightArmDownRangeB; // 0x30
};

struct FAnimNode_HIKRelativePlant : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float Depth; // 0x4c
	float HipsRotationFactor; // 0x50
	float ChestRotationFactor; // 0x54
	float DistanceUp; // 0x58
	float DistanceDown; // 0x5c
	int32_t NbRays; // 0x60
	float FootRadius; // 0x64
	FCollisionResponseContainer OverrideRaycastCollisionResponse; // 0x68
	float DeltaTime; // 0x88
	float Smoothing; // 0x8c
};

struct FContestLeaderboardUpdateEvent : FNetworkEventStruct {
	TArray<FCrewScore> Leaderboard; // 0x10
};

struct FAITargetInfo {
	FAITargetBounds Bounds; // 0x0
	FVector TargetPos; // 0x18
	FVector TargetVelocity; // 0x24
	float TargetYaw; // 0x30
};

struct FDeadActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FDamageInstance FinalBlow; // 0x30
	ECharacterDeathType DeathType; // 0x58
	ECharacterType RespawnCharacterType; // 0x59
};

struct FMerchantQuestItemDescAndReward {
	UItemDesc* CrateDesc; // 0x0
	FRewardId HandInOnTimeRewardId; // 0x8
};

struct FEventShipRegionChanged {
	AActor* Ship; // 0x0
	AActor* Actor; // 0x8
	EShipRegion ShipRegion; // 0x10
	EShipRegion PreviousShipRegion; // 0x11
};

struct FEventRevivableRepresentationSpawnCompleted {
	bool FromSwimming; // 0x0
};

struct FEventUserGameSettingsSetInteger {
	FName KeyName; // 0x0
	int32_t Value; // 0x8
};

struct FStrainDamage {
	TArray<FDamageParamWeights> DamageParams; // 0x0
	UDamagerType* DamagerType; // 0x10
};

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
};

struct FKrakenAnimatedTentacleHoldingStateTransitionChance {
	float WeightedChance; // 0x0
	UKrakenAnimatedTentacleState* StateToTransitionTo; // 0x8
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FRequestRealMoneyPurchaseSeasonPassOfferEvent {
	FString OfferId; // 0x0
	FString CatalogName; // 0x10
	int32_t Price; // 0x20
};

struct FFortTogglerUnit {
	UAIProximityPlayerTracker* AIProxPlayerTracker; // 0x8
	TArray<UAISpawner*> AISpawners; // 0x10
};

struct FLobbySetup {
	TArray<FLobbyCrewInfo> Crews; // 0x0
	TArray<FLobbyCrewMember> CrewlessMembers; // 0x10
};

struct FBountyQuestLayoutOption {
	int32_t NumCaptains; // 0x0
	int32_t NumCrew; // 0x4
	UBountyMapLayout* Layout; // 0x8
};

struct FActorId {
	FString ActorLocalName; // 0x0
};

struct FOneShotToggleCollisionAudioParams {
	UWwiseEvent* OverlapBeginAudioEvent; // 0x0
	UWwiseEvent* OverlapEndAudioEvent; // 0x8
	UWwiseObjectPoolWrapper* OverlapEventAudioPool; // 0x10
	FWwiseEmitter OverlapEmitter; // 0x18
};

struct FPremiumStoreItemView : FPremiumStoreOffer {
	FString TopBannerUrl; // 0x210
	FString BottomBannerUrl; // 0x220
};

struct FPlayerAmbientLightOverrideSettings {
	char OverrideBodyLightAmbience : 1; // 0x0
	float BodyLightAmbienceLightFactor; // 0x4
	float BodyLightAmbienceBlendWithDefault; // 0x8
	char OverrideLanternAmbience : 1; // 0xc
	float LanternAmbienceLightFactor; // 0x10
	float LanternAmbienceBlendWithDefault; // 0x14
};

struct FAthenaAnimationCameraAdditiveAnimData {
	UAnimSequence* CameraDefaultYaw; // 0x0
	UAnimSequence* CameraDefaultPitch; // 0x8
	UAnimSequence* CameraWheelYaw; // 0x10
	UAnimSequence* CameraWheelPitch; // 0x18
	UAnimSequence* CameraCapstanYaw; // 0x20
	UAnimSequence* CameraCapstanPitch; // 0x28
	UAnimSequence* CameraSailYaw; // 0x30
	UAnimSequence* CameraSailPitch; // 0x38
	UAnimSequence* CameraLadderYaw; // 0x40
	UAnimSequence* CameraLadderPitch; // 0x48
};

struct FShipwreckSite {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FVisualFeedbackEntry {
	UEffectBlendObjectBase* Effect; // 0x0
};

struct FMemoryVisualiserCategory {
	FString CategoryName; // 0x0
	TArray<FMemoryVisualiserStat> CategoryStats; // 0x10
	TArray<FMemoryVisualiserClass> CategoryClasses; // 0x20
	bool CollectOnServer; // 0x30
	float XboxOneBudgetMB; // 0x34
	float XboxOneSBudgetMB; // 0x38
	float XboxOneXBudgetMB; // 0x3c
	float PCLowSpecBudgetMB; // 0x40
	float PCMidSpecBudgetMB; // 0x44
	float PCHighSpecBudgetMB; // 0x48
	float PCUltraSpecBudgetMB; // 0x4c
	float MemoryUsageMB; // 0x50
};

struct FEventInteractionBlockingStateChanged {
	bool IsInteractionBlocked; // 0x0
	EInteractionBlockReason InteractionBlockReason; // 0x1
};

struct FMermaidUsedTelemetryEvent {
	int32_t MermaidId; // 0x0
};

struct FPlayerObjectUsageBaseTelemetryFragment {
	FString ObjectId; // 0x0
};

struct FFireLaunchableShotRpc : FUseItemOnServerRpc {
	FFireRequest Request; // 0x20
	ULaunchableShotActionComponent* Action; // 0xb0
	FVector LocalWielderVelocity; // 0xb8
	int64_t StartTime; // 0xc8
	int64_t StopTime; // 0xd0
};

struct FInteractionOption {
	FString Text; // 0x0
	int32_t Index; // 0x10
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FAIPerCrewSpawnerCrewUnit {
	TArray<FAISpawnerWave> SelectedWaves; // 0x20
};

struct FEventFaunaAgitationBegun {
	AActor* SourceActor; // 0x0
};

struct FFinaleReplicationState {
	EFinaleState State; // 0x0
	UObject* TargetEnsemble; // 0x8
};

struct FCarriedItemThreatOverride {
	UItemDesc* ItemDesc; // 0x0
	float Threat; // 0x8
};

struct FActionVisualsOverride {
	UNotificationInputId* InputID; // 0x0
	FWieldableItemActionVisuals ActionVisuals; // 0x8
};

struct FRammableDamageEntry {
	URammerType* RammerType; // 0x0
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x8
	int32_t DamageAmount; // 0x10
};

struct FAthenaAnimationObjectTargetingOptions {
	EObjectPitchTargetingLimbs ArmSelection; // 0x0
	float UpperClampTargetingAngle; // 0x4
	float LowerClampTargetingAngle; // 0x8
	float ShoulderInfluenceUpper; // 0xc
	float ShoulderInfluenceLower; // 0x10
	FVector VirtualPivotOffsetUpper; // 0x14
	FVector VirtualPivotOffsetLower; // 0x20
	bool LockHandOrientation; // 0x2c
	FVector VirtualPivotOffsetLerped; // 0x30
};

struct FActorLocationPair {
	FStringAssetReference SpawnLocation; // 0x0
	UClass* ActorToSpawn; // 0x10
};

struct FRowboatSnapshotV1 {
	int32_t Id; // 0x0
	FVector Position; // 0x4
};

struct FAIShipEncounterParamsSpawnerData {
	UAISpawner* Spawner; // 0x0
	FName SpawnLocationType; // 0x8
	EAIShipPlayerTrackerType ShipPlayerTrackerType; // 0x10
	FName CaptainName; // 0x14
	bool CanRepairDamage; // 0x1c
	bool CanUseCannons; // 0x1d
	bool IsCaptain; // 0x1e
	bool BelowDeck; // 0x1f
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FKrakenShipWrappingBehaviourHealthParams {
	FWeightedProbabilityRangeOfRanges HealthReductionRequiredToUnwrapTheShipRange; // 0x0
};

struct FAthenaAnimationJumpingFirstPersonAnimData {
	UAnimSequence* JumpStart; // 0x0
	UBlendSpace* JumpCycle; // 0x8
	UAnimSequence* PreImpact; // 0x10
	UBlendSpace* LandLight; // 0x18
	UBlendSpace* LandHeavy; // 0x20
};

struct FEventAppliedStatusToTargets {
	TArray<UStatusBase*> StatusApplied; // 0x0
	TArray<AActor*> Targets; // 0x10
	AActor* StatusSource; // 0x20
};

struct FResolutionTelemetryFragment {
	uint32_t ResolutionWidth; // 0x0
	uint32_t ResolutionHeight; // 0x4
	float ScreenPercentage; // 0x8
	bool DynamicResolution; // 0xc
};

struct FShopOfferPrice {
	EWalletCurrencyId Currency; // 0x0
	FText DisplayPrice; // 0x8
	uint32_t Price; // 0x40
};

struct FWieldingParamsAssetLookup : FTableRowBase {
	AWieldableItem* Class; // 0x0
	FStringAssetReference Params; // 0x8
};

struct FAthenaAnimationLocomotionAnimData {
	UBlendSpace* MainMovement; // 0x0
	FAthenaAnimationLocomotionTurningAnimData TurningLeft; // 0x8
	FAthenaAnimationLocomotionTurningAnimData TurningRight; // 0x10
	UAnimSequence* MovementOutOf; // 0x18
	UAnimSequence* TurnOut; // 0x20
	UBlendSpace* RunStop; // 0x28
	FAthenaAnimationLocomotionStairsAnimData StairsLocomotion; // 0x30
};

struct FPetChestPetLoadoutUpdatedEvent {
	TArray<FChestTabViewModel> Loadout; // 0x0
};

struct FNoiseMakerController {
	UNoiseMakerControllerParams* NoiseMakerParams; // 0x0
	float MaxRunningSpeed; // 0x8
	float SimulatedMaxRunningSpeed; // 0xc
};

struct FGameModeDeathPenaltyRespawnTimerData {
	float SpawnTimer; // 0x0
};

struct FEventObjectWielded {
	TScriptInterface<Class> Object; // 0x0
};

struct FCreatePirateRequestSuccessEvent {
	FUniqueNetIdRepl UserId; // 0x0
	FPirateProfile PirateProfile; // 0x18
	FGuid RequestID; // 0x110
};

struct FResponseEventSchedulerStatusNetworkEvent : FNetworkEventStruct {
	TArray<FString> EventStatus; // 0x10
};

struct FPlayerReleasedFromBrig {
	FString PlayerName; // 0x0
};

struct FFireMesh {
	UStaticMeshComponent* Mesh; // 0x0
};

struct FPetRefusedFoodTelemetryEvent {
	FString TryingToFeedPlayerId; // 0x0
	FGuid FeedingInteractionId; // 0x10
};

struct FQuestVariableText : FQuestVariable {
	FName ParamName; // 0x8
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FFallbackSittingDataAsset {
	UAthenaAnimationSittingDataAsset* SittingAnimCorrectionDataAsset; // 0x0
	float NormalizedWheelAngle; // 0x8
	float MinSliderRange; // 0xc
	float MaxSliderRange; // 0x10
};

struct FEnvIntParam : FEnvIntParam_DEPRECATED {
	int32_t Value; // 0x0
	FName ParamName; // 0x4
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

struct FPlayerStatOption {
	FPlayerStat StatToFire; // 0x0
	bool FireForWholeCrew; // 0x4
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0xa8
};

struct FCrewUpdateEvent {
	FFrontendCrewDefinition CrewDefinition; // 0x0
};

struct FRequestShipCustomizationChestShipCustomizationEntitlementsEvent {
	FString ItemCategory; // 0x0
};

struct FFireCellDesc {
	FVector Position; // 0x0
	FBox BoundingBox; // 0xc
	FIntVector GridPosition; // 0x28
	bool CanBurn; // 0x34
	bool IsExposedToWeather; // 0x35
	EShipDeck Deck; // 0x36
	int32_t CellIndex; // 0x38
	int32_t MasterCellFlatIndex; // 0x3c
	bool ShouldSpawnDefaultParticleEffect; // 0x40
	FTransform DefaultParticleEffectSpawnTransform; // 0x50
	FPlane DefaultParticleEffectPlane; // 0x80
	TArray<FFireCellStateParticleTemplate> CustomParticleEffectTemplates; // 0x90
	FTransform CustomParticleEffectSpawnTransform; // 0xa0
	TArray<int32_t> NeighbourCellIndices; // 0xd0
	TArray<FIntVector> CustomAddedDiagonalNeighbourOffsets; // 0xe0
	TArray<FIntVector> CustomRemovedDefaultNeighbourOffsets; // 0xf0
};

struct FTextureSwitchItemEntry {
	FName ItemName; // 0x0
	FStringAssetReference Texture; // 0x8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FTutorialSequence {
	int32_t CurrentStep; // 0x8
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FEmissaryRewardMultiplierModel {
	FName EmissaryName; // 0x0
	TArray<FEmissaryLevelMultiplierModel> Multipliers; // 0x8
};

struct FMurkyRegion {
	bool Enabled; // 0x0
	FVector Position; // 0x4
	float InnerRadius; // 0x10
	float OuterRadius; // 0x14
	float Density; // 0x18
	bool IsSuperHeatedWater; // 0x1c
};

struct FDisableMoreButtonEvent {
	EMoreButtonSource MoreButtonSource; // 0x0
};

struct FAnimNotify_SoundSwitch {
	FStringAssetReference SkeletalMeshReference; // 0x0
	FName SkeletalMeshCategoryName; // 0x10
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FAthenaAnimationObjectActionContinuousPitchOverride {
	FAthenaAnimationObjectActionContinuousStructPitchOverride MainContinuousActions; // 0x0
	FAthenaAnimationObjectActionContinuousStructPitchOverride AlternateContinuousActions; // 0x78
};

struct FRatManagerPseudoRandomEntry {
	double TimeBoundary; // 0x0
	float RatSpeed; // 0x8
	float RatScale; // 0xc
	FName LocationName; // 0x10
};

struct FAIPersistentSpawnerWave : FAISpawnerWave {
	bool CacheHealthOnDespawn; // 0x100
	UAIClassId* AITypeToCache; // 0x108
};

struct FShantyPuzzlePlayerExitInteractionZoneEvent {
	AActor* Player; // 0x0
};

struct FFireBroadcast {
	AActor* Instigator; // 0x0
	TArray<FHitResult> HitResults; // 0x8
	FVector FirePosition; // 0x18
	FVector FireDirection; // 0x24
	FProjectileAim ProjectileAim; // 0x30
	int32_t ProjectileSeed; // 0x80
};

struct FPetShopPetBreed {
	FText Title; // 0x0
	FStringAssetReference Icon; // 0x38
	FText Description; // 0x48
	TArray<UCategoryBase*> Categories; // 0x80
};

struct FPiratePreviewReadyEvent {
	TWeakObjectPtr<USkeletalMesh> Mesh; // 0x0
	TWeakObjectPtr<USkeletalMeshComponent> MeshComponent; // 0x8
	FPirateDescription Desc; // 0x10
	bool Valid; // 0x90
};

struct FUICompanyProgress {
	FName CompanyId; // 0x0
	float Level; // 0x8
	uint32_t Rank; // 0xc
};

struct FAIAbilityFollowUp {
	UAthenaAIAbilityType* AbilityType; // 0x0
	float Chance; // 0x8
};

struct FCatalogOfferCompanyLevelDataAsset {
	UCompany* Company; // 0x0
	uint32_t Level; // 0x8
};

struct FAthenaAnimationFootPlanting {
	FCollisionResponseContainer OverrideRaycast; // 0x8
	float HipHeight; // 0x28
	float HipPullStrength; // 0x2c
	float FloorContactDownDistance; // 0x30
	float RelativePlantDownDistance; // 0x34
	float FloorContactToRangeStart; // 0x38
	float FloorContactToRangeEnd; // 0x3c
	float RelativePlantToRangeStart; // 0x40
	float RelativePlantToRangeEnd; // 0x44
	float IKLegStretch; // 0x48
	float SlopeAngle; // 0x4c
	bool Active; // 0x50
	bool FeetContact; // 0x51
};

struct FEventCosmeticItemAttachmentSwitched {
	AActor* Owner; // 0x0
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FTreasurePickedUpCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FMerchantQuestCategoryGroup {
	FName GroupName; // 0x0
	TArray<FMerchantQuestRandomRequiredItemsEntry> RequiredItemEntries; // 0x8
};

struct FAthenaAnimationPitchShoulders {
	FRotator Shoulder; // 0x0
	FRotator Clavicle; // 0xc
	bool ActiveLeft; // 0x18
	bool ActiveRight; // 0x19
};

struct FAthenaAnimationAsyncLoadedFishingAnimations {
	UAnimSequence* CastIntoHoldBack; // 0x0
	UBlendSpace* CastHoldBackLoop; // 0x20
	UAnimSequence* CastForwards; // 0x40
	UAnimSequence* CastHoldLoop; // 0x60
	UAnimSequence* CastToFishing; // 0x80
	UAnimSequence* CastFail; // 0xa0
	UBlendSpace* Fishing; // 0xc0
	UBlendSpace1D* FishingAdditive; // 0xe0
	UBlendSpace1D* IntoFighting; // 0x100
	UBlendSpace* FightingCentral; // 0x120
	UBlendSpace1D* FightingAdditive; // 0x140
	UBlendSpace1D* Linesnap; // 0x160
	UAnimSequence* SuccessReelIn; // 0x180
	UAnimSequence* ComedyItemSuccessReelIn; // 0x1a0
	UAnimSequence* ShakingAdditive; // 0x1c0
	UAnimSequence* LineSnapShakingAdditive; // 0x1e0
	UAnimSequence* FishingToIdle; // 0x200
	UAnimSequence* FishingToUnequip; // 0x220
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
};

struct FEventBrokeLeg {
	FName RumbleTag; // 0x0
};

struct FPetShopResponseEvent {
	FPetShopDefinition Data; // 0x0
};

struct FWeightedPetAnimations {
	TArray<FWeightedPetAnimation> Weightings; // 0x0
};

struct FBuryDecal {
	FGuid Id; // 0x0
	FVector Location; // 0x10
};

struct FAthenaAnimationLadderTransitionsAnimData {
	UAnimSequence* ClimbOnTop; // 0x0
	UAnimSequence* ClimbOffTop; // 0x8
	UAnimSequence* ClimbOnBottom; // 0x10
	UAnimSequence* ClimbOffBottom; // 0x18
	UAnimSequence* ClamberOffTop; // 0x20
};

struct FQuestVariableChecklistItem : FQuestVariable {
	FName ParamName; // 0x8
};

struct FHitchDataTelemetryFragment {
	uint64_t NumLowSeverityHitches; // 0x0
	uint64_t NumMediumSeverityHitches; // 0x8
	uint64_t NumHighSeverityHitches; // 0x10
	uint64_t NumHighestSeverityHitches; // 0x18
};

struct FIPGScalarParameter {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FCrewSessionMatchmakingStartedTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	FGuid CrewMatchmakingAttemptId; // 0x10
	FString SessionType; // 0x20
	FString MatchmakingHopper; // 0x30
	FString MatchmakingType; // 0x40
	TArray<int32_t> CrewSegmentValues; // 0x50
	int32_t CurrentCrewCount; // 0x60
	int32_t EstimatedWaitTime; // 0x64
	int32_t MaxWaitTime; // 0x68
};

struct FWaterPuzzleWaterLevel {
	float WaterLevel; // 0x0
	float FillTransitionTime; // 0x4
	float DrainTransitionTime; // 0x8
};

struct FModeSpecificReviveSettings {
	EPlayMode AssociatedPlaymode; // 0x0
	float DeathCameraBlackFadeDelay; // 0x4
	float DeathCameraBlackFadeDuration; // 0x8
	float DeathCameraBlackFadeEventClientTimeout; // 0xc
	float DeathCameraBlackFadeEventServerTimeout; // 0x10
	float DelayBeforeEvaporate; // 0x14
	float EvaporateDuration; // 0x18
	float DeathCameraStartDelay; // 0x1c
	float ReviveWindowDuration; // 0x20
	float GhostFadeDuration; // 0x24
	UReviveSettings* CachedReviveSettings; // 0x28
};

struct FVector_NetQuantize100 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FKrakenServiceParams {
	AKraken* KrakenType; // 0x0
	FKrakenServiceSpawnParams SpawnParams; // 0x8
	UKrakenParamsDataAsset* DefaultKrakenParams; // 0x88
	TArray<FKrakenServiceShipParams> KrakenParams; // 0x90
};

struct FBootFlowWhatsNewArticle {
	FString Title; // 0x0
	FString Description; // 0x10
	FString HeroImage; // 0x20
	FString GridImage; // 0x30
	FString GridPrimaryDescription; // 0x40
	FString GridSecondaryDescription; // 0x50
	FString DescriptionTimes; // 0x60
};

struct FJoinSessionFailedEvent {
	FString Message; // 0x0
};

struct FUIAudioCueEvent {
	FString CueKey; // 0x0
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x58
	TArray<FStringCurveKey> Keys; // 0x68
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FAthenaAnimationPlayingFacialAnimations {
	UBlendSpace1D* Capstan; // 0x0
	UAnimSequence* SailAction; // 0x8
	UAnimSequence* SailIdle; // 0x10
	UAnimSequence* CannonFire; // 0x18
	UAnimSequence* CannonAim; // 0x20
	UAnimSequence* HarpoonFire; // 0x28
	UAnimSequence* FacialIdle0; // 0x30
	UAnimSequence* FacialIdle1; // 0x38
};

struct FAnimationLookAt {
	FAnimationLookAtParams Params; // 0x8
	FVector LookAtTarget; // 0x14
	bool IKLookAtActive; // 0x20
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	float TotalWeight; // 0x4
	float Time; // 0x8
};

struct FStunnedEvent {
	bool Stunned; // 0x0
	bool ApplyStunAnim; // 0x1
	EStunAnimationType StunAnimType; // 0x2
	bool TriggerStunnedVFX; // 0x3
	float Duration; // 0x4
	bool InterruptMeleeAttacks; // 0x8
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FPetCustomisation {
	FString PetName; // 0x0
	FAIPartId PetPartId; // 0x10
};

struct FGameplayEffectCue {
	FGameplayAttribute MagnitudeAttribute; // 0x0
	float MinLevel; // 0x8
	float MaxLevel; // 0xc
	FGameplayTagContainer GameplayCueTags; // 0x10
};

struct FWatercraftSpawnTelemetryEvent {
	FGuid WatercraftId; // 0x0
	FString WatercraftType; // 0x10
	FVector Location; // 0x20
	FVector Forward; // 0x2c
};

struct FInteractionInputComponentTickFunction : FTickFunction {
	UInteractionInputComponent* Target; // 0x48
};

struct FPopupQueueFinished {
	FString Id; // 0x0
};

struct FEmblemRankDefinition {
	FGuid Id; // 0x0
	FStringAssetReference ImagePath; // 0x10
	FStringAssetReference LockedImagePath; // 0x20
	TArray<FEmblemCriteria> UnlockCriteria; // 0x30
	FRewardId RewardId; // 0x40
	uint32_t UnlockAtNumCriteriaCompleted; // 0x48
};

struct FPiratePurchaseClaims {
	TMap<FString, FCompanyLevelClaim> CompanyLevels; // 0x0
};

struct FContestCeremonyEvent {
	TArray<UWwiseEvent*> AudioEvents; // 0x0
	TArray<ESpecialEvents> SpecialEvents; // 0x10
	FText NPCName; // 0x20
	FText NPCMessageToAllPlayers; // 0x58
	float TimeToEvent; // 0x90
};

struct FCanvasWorldMapWorldData {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	TArray<FCanvasWorldMapIslandData> Islands; // 0x10
};

struct FLookAtOffsetParams {
	bool UseLookAtPosition; // 0x0
	bool UseSpring; // 0x1
	float SpringAccel; // 0x4
	float MinYaw; // 0x8
	float MaxYaw; // 0xc
	float MinPitch; // 0x10
	float MaxPitch; // 0x14
	ECameraLookatAnimationType CameraLookatAnimationType; // 0x18
};

struct FNPCOnSurfaceStateInfo {
	FName StateName; // 0x0
	FName LocationGroupName; // 0x8
	bool PeriodicallyChangeLocation; // 0x10
	bool ChangeLocationEvenIfPlayerIsNearby; // 0x11
	FWeightedProbabilityRangeOfRanges ChangeLocationTime; // 0x18
	bool HideWhenInDanger; // 0x48
	float InternalWaterWarningDepth; // 0x4c
	FName InternalWaterWarningVOGroupName; // 0x50
	FWeightedProbabilityRangeOfRanges InternalWaterWarningVOCooldown; // 0x58
	bool UseCannons; // 0x88
	bool DespawnIfNoCrewOnShip; // 0x89
	FName AppearVOGroupName; // 0x8c
	TArray<FNPCOnDespawnVOEntry> DespawnVOGroupEntries; // 0x98
	TArray<FNPCReactionVOEntry> OnActorDamagedReactions; // 0xa8
	TArray<FNPCReactionVOEntry> OnActorKilledReactions; // 0xb8
	TArray<FNPCReactionDualActorVOEntry> OnActorSpawnedActorReactions; // 0xc8
};

struct FDestroyCustomPlayerStartData {
	int32_t PlayerStartActorNetID; // 0x0
	FString Tag; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FAthenaAnimationControllableFacialAnimData {
	UBlendSpace1D* Capstan; // 0x0
	UAnimSequence* SailAction; // 0x8
	UAnimSequence* SailIdle; // 0x10
	UAnimSequence* CannonFire; // 0x18
	UAnimSequence* CannonAim; // 0x20
	UAnimSequence* HarpoonFire; // 0x28
};

struct FClientTelemetryConfigurationSettings {
	float HighMemoryPerformanceHeartbeatIntervalSeconds; // 0x0
	float HighMemoryThresholdDurango; // 0x4
	float HighMemoryThresholdEdmonton; // 0x8
	float HighMemoryThresholdScorpio; // 0xc
	float HighMemoryThresholdLockhart; // 0x10
	float HighMemoryThresholdAnaconda; // 0x14
};

struct FWeightedEmergentContestVoyageRecipe {
	UEmergentContestVoyageRecipeDataAsset* ContestVoyage; // 0x0
	int32_t WeightedChance; // 0x8
};

struct FCargoRunQuestRandomRequiredItemsEntry {
	float Weight; // 0x0
	int32_t MaxNum; // 0x4
	UItemDesc* RequiredItem; // 0x8
};

struct FFeaturedEntitlements {
	FName Feature; // 0x0
	FStringAssetReference EntitlementsAsset; // 0x8
	FStringAssetReference SupplementalEntitlementMap; // 0x18
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FPopupQueuePlay {
	FString Id; // 0x0
	FString EventName; // 0x10
	FString EventData; // 0x20
};

struct FVoyageInfo {
	FText Title; // 0x0
	FGuid Id; // 0x38
	UCompany* Company; // 0x48
	bool IsEmergent; // 0x50
	bool IsTale; // 0x51
	EEmergentVoyageSource EmergentSource; // 0x52
	FViewVoyageBanners ViewVoyageBanners; // 0x53
	int32_t Rank; // 0x58
	TArray<FPlayerStat> VoyageCompletionStats; // 0x60
	TArray<FPlayerStat> ReapersMarkCompletionStats; // 0x70
};

struct FAIShipSizeLimit {
	UShipSize* ShipSize; // 0x0
	int32_t MaxInstances; // 0x8
};

struct FAIShipContextDescGenerationShipSpecificParams {
	UShipSize* ShipSize; // 0x0
	UShipDescAsset* ShipDesc; // 0x8
	TArray<FAIShipGenerationParams> ShipGenerationParams; // 0x10
	TArray<FAIShipEncounterParamsSpawnerData> SpawnerTemplates; // 0x20
};

struct FBaseLightData {
	float Intensity; // 0x0
	FColor LightColor; // 0x4
	char bAffectsWorld : 1; // 0x8
	char CastShadows : 1; // 0x8
	char CastStaticShadows : 1; // 0x8
	char CastDynamicShadows : 1; // 0x8
	char bAffectTranslucentLighting : 1; // 0x8
	char bPrecomputedLightingIsValid : 1; // 0x8
	char RainOcclusion : 1; // 0x8
	float IndirectLightingIntensity; // 0xc
	float ScaleForTranslucency; // 0x10
	float CapForTranslucency; // 0x14
	float Temperature; // 0x18
	char bUseTemperature : 1; // 0x1c
	float MinRoughness; // 0x20
	float ShadowBias; // 0x24
	float ShadowSharpen; // 0x28
	float ShadowResMaxDynamicDegradation; // 0x2c
	char CastTranslucentShadows : 1; // 0x30
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x30
	char bAffectDynamicIndirectLighting : 1; // 0x30
	UMaterialInterface* LightFunctionMaterial; // 0x38
	FVector LightFunctionScale; // 0x40
	UTextureLightProfile* IESTexture; // 0x50
	char bUseIESBrightness : 1; // 0x58
	float IESBrightnessScale; // 0x5c
	float LightFunctionFadeDistance; // 0x60
	float DisabledBrightness; // 0x64
	char bEnableLightShaftBloom : 1; // 0x68
	float BloomScale; // 0x6c
	float BloomThreshold; // 0x70
	FColor BloomTint; // 0x74
	bool bUseRayTracedDistanceFieldShadows; // 0x78
	float RayStartOffsetDepthScale; // 0x7c
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FRequestEquipmentChestItemLoadoutEvent {
	TArray<FString> Categories; // 0x0
};

struct FRadialPageChanged : FRadialInventoryEvent {
	int32_t RadialIdentifier; // 0x0
};

struct FContestZoneVendorShipData {
	UClass* VendorShipToSpawn; // 0x0
	FTransform ContestZoneWorldLocation; // 0x20
};

struct FMeleeWeaponSpecialAttackData {
	UNotificationInputId* NotificationInputId; // 0x0
	UMeleeAttackDataAsset* Asset; // 0x8
};

struct FTutorialStepEnteredEvent {
	FName StepName; // 0x0
};

struct FBootyItemTransferredToVendor {
	ABootyItemInfo* ItemInfo; // 0x0
	FGuid CrewId; // 0x8
};

struct FStorableLockState {
	bool Locked; // 0x0
	FStringAssetReference RequiredKey; // 0x8
	bool IsInUnlockingSequence; // 0x18
};

struct FPetCustomiationOverrideMappingEntry {
	FString Identifier; // 0x0
	UPetCustomisationOverrideDataAsset* OverrideAsset; // 0x10
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FAthenaAICharacterControllerItemCategoryNamedParams {
	UItemCategory* ItemCategory; // 0x0
	TArray<FAthenaAIControllerParamValue> NamedControllerParams; // 0x8
};

struct FPlayerHeroStatUpdatedEvent {
	EPlayerHeroStatsSuccess Result; // 0x0
	FPlayerStat Stat; // 0x4
};

struct FPlayerEncounterEndTelemetryEvent {
	FGuid EncounterId; // 0x0
};

struct FActivateHatchEvent {
	FName EventID; // 0x0
	EFlameOfFateType FlameSpecificPhobia; // 0x8
};

struct FEventCompanyProgressData {
	TArray<FUICompanyProgress> CompanyProgress; // 0x0
};

struct FDeferredRewardRequestEvent {
	FGuid RequestID; // 0x0
	FName CompanyAffiliation; // 0x10
	FName RewardId; // 0x18
	FString UserId; // 0x20
	FString PirateId; // 0x30
	bool RewardAccount; // 0x40
	bool NotifyPlayer; // 0x41
	bool DontRewardCurrency; // 0x42
	bool DontRewardXp; // 0x43
	bool DontRewardSeasonXp; // 0x44
	FString DeferralReason; // 0x48
	double RewardMultiplier; // 0x58
};

struct FFaunaAnimationSnakeAttack {
	FFaunaAnimationSnakeBiteStructure BiteForwards; // 0x0
	FFaunaAnimationSnakeBiteStructure BiteBackwards; // 0x20
	FFaunaAnimationSnakeCharmStructure Charm; // 0x40
};

struct FResponseContendedResourcesNetworkEvent : FNetworkEventStruct {
	FString ContendedResources; // 0x10
};

struct FSessionInfoUpdateAvailableEvent {
	FGuid CrewId; // 0x0
};

struct FStormScalingParameters {
	FName MaterialMaskPropertyName; // 0x0
	FName RainOpacityPropertyName; // 0x8
	UCurveFloat* RadiusCurve; // 0x10
	UCurveFloat* OuterRadiusCurve; // 0x18
	UCurveFloat* RainSheetOuterOpacityCurve; // 0x20
	UCurveFloat* RainSheetInnerOpacityCurve; // 0x28
	UCurveFloat* BaseCloudHeightCurve; // 0x30
	UCurveFloat* BaseCloudMaskCurve; // 0x38
	UCurveFloat* RingCloudHeightCurve; // 0x40
	UCurveFloat* RingCloudMaskCurve; // 0x48
	UCurveFloat* TopCloudHeightCurve; // 0x50
	UCurveFloat* TopCloudMaskCurve; // 0x58
	UCurveFloat* PressureZoneRadiusCurve; // 0x60
	UCurveFloat* PressureZoneTargetCurve; // 0x68
	UCurveFloat* PressureZonePushCurve; // 0x70
	UCurveFloat* PressureZoneWeightCurve; // 0x78
	UCurveFloat* RainStrengthCurve; // 0x80
	UCurveFloat* WindStrengthCurve; // 0x88
	UCurveFloat* WindInnerRadiusCurve; // 0x90
	UCurveFloat* WaterStrengthCurve; // 0x98
	UCurveLinearColor* RainSheetOuterScaleCurve; // 0xa0
	UCurveLinearColor* RainSheetInnerScaleCurve; // 0xa8
	UCurveLinearColor* BaseCloudScaleCurve; // 0xb0
	UCurveLinearColor* RingCloudScaleCurve; // 0xb8
	UCurveLinearColor* TopCloudScaleCurve; // 0xc0
	float AngryWaterLerpRatio; // 0xc8
};

struct FAggressiveGhostShipSplineData {
	FAggressiveGhostShipSplineDataVariables Variables; // 0x0
	FAggressiveGhostShipSplineDataOffsets Offsets; // 0x38
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0x60
	EBoneControlSpace EffectorTransformSpace; // 0x90
	FBoneReference EffectorTransformBone; // 0x94
	EBoneRotationSource EffectorRotationSource; // 0xa0
	FBoneReference TipBone; // 0xa4
	FBoneReference RootBone; // 0xb0
	float Precision; // 0xbc
	int32_t MaxIterations; // 0xc0
	bool bEnableDebugDraw; // 0xc4
};

struct FConditionalStatContext {
	UObject* ObjectOfInterest1; // 0x0
	UObject* ObjectOfInterest2; // 0x8
};

struct FFishingRodForceFeedbackLevel {
	float MinimumTensionFactor; // 0x0
	UForceFeedbackEffect* ForceFeedback; // 0x8
};

struct FMeshBuildSettings {
	bool bUseMikkTSpace; // 0x0
	bool bRecomputeNormals; // 0x1
	bool bRecomputeTangents; // 0x2
	bool bRemoveDegenerates; // 0x3
	bool bBuildAdjacencyBuffer; // 0x4
	bool bUseFullPrecisionUVs; // 0x5
	bool bGenerateLightmapUVs; // 0x6
	FPresortedBillboardsParams PresortedBillboardsParams; // 0x8
	int32_t MinLightmapResolution; // 0x10
	int32_t SrcLightmapIndex; // 0x14
	int32_t DstLightmapIndex; // 0x18
	float BuildScale; // 0x1c
	FVector BuildScale3D; // 0x20
	float DistanceFieldResolutionScale; // 0x2c
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x30
	UStaticMesh* DistanceFieldReplacementMesh; // 0x38
};

struct FMastCollisionProfiles {
	FName CollisionDisabledProfile; // 0x0
	FName PlayerAndItemsCollisionProfile; // 0x8
	FName PlayerOnlyCollisionProfile; // 0x10
	FName ItemsOnlyCollisionProfile; // 0x18
	FName ProjectilesOnlyCollisionProfile; // 0x20
};

struct FEventCompanyRankProgressUpdateNotification {
	FName Company; // 0x0
	uint32_t Rank; // 0x8
	uint32_t PreviousRank; // 0xc
};

struct FAthenaAnimationRowing {
	AActor* ControlledObject; // 0x0
	AActor* CachedPlayerCharacter; // 0x8
	UObject* CosmeticOarClass; // 0x10
};

struct FManagedVulnerabilityLayer {
	FName LayerName; // 0x0
	UDamageableVulnerabilityLayer* VulnerabilityLayerToApply; // 0x10
};

struct FEventPreStartStow {
	EStowMethod StowMethod; // 0x0
};

struct FEventBroadcastWwiseEventToInstigatorsCrew {
	AActor* Instigator; // 0x0
	UWwiseEvent* WwiseEvent; // 0x8
};

struct FHitRegSnapshotProjectileRecord {
	FVector AimDirection; // 0x0
	FVector AimPosition; // 0xc
	float BulletLifetime; // 0x18
	FTransform WeaponMeshTransform; // 0x20
	UObject* WeaponMesh; // 0x50
	int32_t AttackGroupSize; // 0x58
	int32_t SubAttackGroupId; // 0x5c
	FHitRegTrailData ProjectileTrail; // 0x60
};

struct FShipFireDamageParams {
	UDamagerType* DamagerType; // 0x0
	TArray<FActorFireDamageParams> ShipFireDamageParams; // 0x8
};

struct FFailedToFindPlayerSpawnLocationTelemetryEvent {
	ECrewSpawnState SpawnState; // 0x0
	bool IsInBrig; // 0x1
	bool IsInHideout; // 0x2
	bool IsFirstTimePlaying; // 0x3
	bool IsOnContestServer; // 0x4
	bool IsInContestTavern; // 0x5
	TArray<FFailedToFindPlayerSpawnLocationPotentialLocation> PotentialLocations; // 0x8
};

struct FAIShipSpawnedEvent {
	AShip* Ship; // 0x0
	FGuid SpawningCrew; // 0x8
	FGuid SpawningEventId; // 0x18
	FGuid SpawnConfigId; // 0x28
	int32_t Wave; // 0x38
};

struct FWorldSnapshotV1 : FWorldSnapshot {
	TArray<FCrewSnapshotV1> Crews; // 0x10
	TArray<FShipSnapshotV1> Ships; // 0x20
	TArray<FIslandSnapshotV1> Islands; // 0x30
	TArray<FRowboatSnapshotV1> Rowboats; // 0x40
	TArray<FWorldEventSnapshotV1> WorldEvents; // 0x50
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FDynamicPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
};

struct FEmissarySunkNetworkEvent : FNetworkEventStruct {
	UDataAsset* PopUpDesc; // 0x10
	FName CompanyName; // 0x18
};

struct FQuestVariableActor : FQuestVariable {
	FName ParamName; // 0x8
};

struct FBootFlowWaitForLoadingScreenStateTransitionEvent {
	FString OldState; // 0x0
	FString NewState; // 0x10
	float OldStateDuration; // 0x20
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FGPUSpriteEmitterInfo {
	UParticleModuleRequired* RequiredModule; // 0x0
	UParticleModuleSpawn* SpawnModule; // 0x8
	UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
	UParticleModuleSpawnRepeatPerPoint* SpawnRepeatPerPointModule; // 0x18
	UParticleComputeShaderData* ParticleComputeData; // 0x20
	UParticleModuleParametersOverVelocity* ParametersOverVelocity; // 0x28
	UParticleModuleParametersOverCustom* ParametersOverCustom; // 0x30
	TArray<UParticleModule*> SpawnModules; // 0x38
	FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x50
	FFloatDistribution VectorFieldScale; // 0xc0
	FFloatDistribution PointAttractorStrength; // 0xe8
	FFloatDistribution Resilience; // 0x110
	FVector ConstantAcceleration; // 0x138
	FVector PointAttractorPosition; // 0x144
	float PointAttractorRadiusSq; // 0x150
	FVector OrbitOffsetBase; // 0x154
	FVector OrbitOffsetRange; // 0x160
	FVector2D InvMaxSize; // 0x16c
	float MaxLifetime; // 0x174
	int32_t MaxParticleCount; // 0x178
	int32_t MaxDeathRate; // 0x17c
	EParticleScreenAlignment ScreenAlignment[0x6]; // 0x180
	EParticleAxisLock LockAxisFlag; // 0x186
	char bEnableCollision : 1; // 0x188
	char bNeedsVectorFields : 1; // 0x188
	char bOpacitySpawnsOnCPU : 1; // 0x188
	char bSizeSpawnsOnCPU : 1; // 0x188
	char bVelocitySpawnsOnCPU : 1; // 0x188
	char bIgnoreComponentColorTint : 1; // 0x188
	char bGeneratesDeathEvents : 1; // 0x188
	char bGeneratesCollisionEvents : 1; // 0x188
	EParticleCollisionMode CollisionMode; // 0x18c
	FRawDistributionVector DynamicColor; // 0x190
	FRawDistributionFloat DynamicAlpha; // 0x1c8
	FRawDistributionVector DynamicColorScale; // 0x200
	FRawDistributionFloat DynamicAlphaScale; // 0x238
	FVector4 MurkyColorScale; // 0x270
	FName LocationEmitterName; // 0x280
	char bUseInheritedVelocityLocationEmitter : 1; // 0x288
	FVector2D InheritedVelocityScaleLocationEmitter; // 0x28c
	char bKillParticlesOnFFTWater : 1; // 0x294
};

struct FAggressiveGhostShipsEncounterServiceDesc : FGameEventServiceDesc {
	FStringAssetReference ServiceParamsAssetPath; // 0x0
};

struct FStorageContainerContentSpawnerEntry {
	UItemDesc* ItemDesc; // 0x0
	UStorageContainerSpawnerItemListBase* ItemList; // 0x8
	FWeightedProbabilityRangeOfRanges AmountToStock; // 0x10
};

struct FPlayerStatsDispatcherSettings {
	float DispatchFrequencySeconds; // 0x0
	uint32_t NumOfCachedValuesToTriggerFlush; // 0x4
	float PollIntervalSeconds; // 0x8
	float BatchWindowMilliseconds; // 0xc
	uint32_t MaxBatchMessageNumberOfStats; // 0x10
	uint32_t BatchesPerSecond; // 0x14
	uint32_t BurstCapacity; // 0x18
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FRequestEquipmentChestEquipItemEvent {
	FString ItemDesc; // 0x0
};

struct FWeightedClueDestinationDescriptor {
	UClueDestinationDescriptor* DestinationType; // 0x0
	TArray<float> DifficultyWeightings; // 0x8
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FAIPartsCategoryMapping {
	UAIClassId* ClassId; // 0x0
	UAIPartsCategory* PartsCategory; // 0x8
};

struct FHangoutSpotParams {
	FName HangoutSpotName; // 0x0
	float Weight; // 0x8
	TArray<FPetHangoutSpotParams> PetParams; // 0x10
	FName FeatureName; // 0x20
};

struct FOpenTestAsset {
	FFilePath AssetToOpen; // 0x0
	bool bSkipTestWhenUnAttended; // 0x10
};

struct FUseLadderActionStateParams : FDockToObjectActionStateParams {
	float ClimbUpSpeed; // 0x10
	float ClimbDownSpeed; // 0x14
	float LadderRungHeight; // 0x18
	float SpeedToEnterSlidingAnimationMs; // 0x1c
	float MaxLadderSlidingSpeedMs; // 0x20
	float InitialDockBottomPitch; // 0x24
	float InitialDockTopPitch; // 0x28
	float TopBottomTolerance; // 0x2c
	FLookAtOffsetParams LookAtOffsetParams; // 0x30
};

struct FServerMigrationTelemetryFailedData {
	FString Stage; // 0x0
};

struct FUILiveCampaignDataErrorTelemetryEvent {
	FString ErrorMessage; // 0x0
	FString ErrorStack; // 0x10
};

struct FModifierSpec {
	float EvaluatedMagnitude; // 0x0
};

struct FDrawDebugItemLine {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	FVector LineStart; // 0xc
	FVector LineEnd; // 0x18
	FColor Colour; // 0x24
	float Thickness; // 0x28
};

struct FMatchmakingVoyageRecipe : FVoyageRecipe {
	EMatchmakingServerType ServerType; // 0x140
	EContestType ContestType; // 0x141
};

struct FActiveGameplayEffect : FFastArraySerializerItem {
	FGameplayEffectSpec Spec; // 0x10
	FPredictionKey PredictionKey; // 0x2b0
	float StartServerWorldTime; // 0x2c8
	float CachedStartServerWorldTime; // 0x2cc
	float StartWorldTime; // 0x2d0
	bool bIsInhibited; // 0x2d4
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FIslandSelectionType {
	FName IslandName; // 0x0
};

struct FNPCChat {
	FString SenderName; // 0x0
	FString Text; // 0x10
	ENPCChatType Type; // 0x20
	FString Image; // 0x28
	int32_t Timeout; // 0x38
};

struct FInvalidDependencyRootPackageEncounteredTelemetryEvent {
	FString DependencyRootPackageName; // 0x0
	FString ImportPackageName; // 0x10
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

struct FGameEventCount {
	UGameEventType* GameEventType; // 0x0
	int32_t NumAllowed; // 0x8
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect* HapticEffect; // 0x0
};

struct FCanvasWorldMapSeaAreaItems {
	UTexture* Texture; // 0x0
	FText Name; // 0x8
	FVector2D Location; // 0x40
	FName FeatureName; // 0x48
};

struct FEventCancelForceFeedback {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
	FName Tag; // 0x8
};

struct FKrakenTentacleDestroyedCustomServerEvent : FGlobalCustomServerEvent {
	int32_t TentacleRemaining; // 0x18
};

struct FPlayerEmoteCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString Emote; // 0x28
};

struct FCanvasWorldMapIslandData {
	FText Name; // 0x0
	UTexture* IslandTex; // 0x38
	FBox2D Bounds; // 0x40
	float Rotation; // 0x54
	float LabelOffset; // 0x58
};

struct FCompanyShopInfo {
	bool ShouldShowCompanyInfo; // 0x0
	FStringAssetReference InfoSkin; // 0x8
	FText InfoTitle; // 0x18
	TArray<FText> InfoTips; // 0x50
};

struct FEventReceiveCollectorsChestItemSlotsState {
	UCollectorsChestItemSlotInteractable* Source; // 0x0
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EEnvQueryParam ParamType; // 0x8
	float Value; // 0xc
};

struct FDeedProgressDesc {
	FString Description; // 0x0
	FString Icon; // 0x10
	FNavigationDesc NavigationDesc; // 0x20
	int32_t ProgressValue; // 0x34
	int32_t Threshold; // 0x38
	FGenericPopupAudioDescriptor Audio; // 0x40
};

struct FItemPreviewItemChanged {
	FString ItemDesc; // 0x0
};

struct FEventPlayerStatePawnUnPossessed {
	APlayerState* PlayerState; // 0x0
	APawn* UnPossessedPawn; // 0x8
};

struct FClothingItem {
	FName Type; // 0x0
	FName Name; // 0x8
	TArray<EIPGPirateType> CompatiblePirateTypes; // 0x10
	TArray<FName> Variants; // 0x20
	TArray<FName> NewSlots; // 0x30
	FName Parent; // 0x40
	TArray<FClothingPart> Parts; // 0x48
	TArray<FIPGScalarParameter> ScalarParameters; // 0x58
	TArray<FName> MaterialReferences; // 0x68
};

struct FSubModeLevel {
	FString SubMode; // 0x0
	FStringAssetReference Level; // 0x10
};

struct FVoyageLocationDistance {
	float Min; // 0x0
	float Max; // 0x4
};

struct FEventPawnRemoveOwnership {
	APawn* AIPawn; // 0x0
};

struct FQuestVariableAny : FQuestVariable {
	FName ParamName; // 0x8
};

struct FCreateFogBankDataResponse {
	bool Success; // 0x0
	int32_t FogBankId; // 0x4
};

struct FEventSinkingShipTeleportTime {
	AActor* Ship; // 0x0
};

struct FTTVectorTrack : FTTTrackBase {
	UCurveVector* CurveVector; // 0x10
};

struct FRequiredShipCustomizationData {
	int32_t RequiredNumberToMatch; // 0x0
	TArray<UShipCustomizationDesc*> RequiredShipCustomizations; // 0x8
};

struct FWaitForDemoResetActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FCrewServerRequestMessage {
	FGuid CrewId; // 0x0
	FString PirateId; // 0x10
	FString BuildId; // 0x20
	bool JoinInProgress; // 0x30
	ECrewSessionType SessionType; // 0x31
	TArray<FString> ServerLocations; // 0x38
};

struct FShipHullDamageLevel {
	UShipSpeedBand* SpeedBand; // 0x0
	TArray<FShipHullDamageTypeEntry> Params; // 0x8
};

struct FAggressiveGhostShipEncounterShipDesc {
	float Weight; // 0x0
	UAggressiveGhostShipDifficultyDataAsset* Difficulty; // 0x8
	UAggressiveGhostShipShotSelectionDataAsset* ShotSelection; // 0x10
	AAggressiveGhostShip* Ship; // 0x18
	UAggressiveGhostShipVisualsDataAsset* Visuals; // 0x20
	TArray<FAggressiveGhostShipLocationEntryDesc> Locations; // 0x28
	TArray<FPlayerStat> StatsToFireOnDeath; // 0x38
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
	FKey AltInputKey; // 0x58
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FTimedResponseAction {
	TArray<AActor*> TargetActors; // 0x0
	float Duration; // 0x10
	bool IsActive; // 0x14
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FActorSpawnedAutomationEvent {
	TWeakObjectPtr<AActor> Actor; // 0x0
};

struct FShipFireLightManager {
	TArray<FShipFireLightRelativeSpawnDesc> LightSpawnDescs; // 0x0
	FGenericLightTemplate LightTemplate; // 0x10
	TArray<FShipFireLight> Lights; // 0xe0
	UFirePropagator* Propagator; // 0xf0
	UStaticMesh* AreaLightMesh; // 0xf8
	float AreaLightZScale; // 0x100
	float MinLightRadius; // 0x104
	float MaxLightRadius; // 0x108
	float MinFlickerScale; // 0x10c
	float LightMovementSpeedCmPerSecond; // 0x110
	UShipFireLightParamsDataAsset* LightParams; // 0x118
	UPostProcessComponent* ShipPostProcessComponent; // 0x120
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FEmissaryState {
	bool EmissaryActive; // 0x0
	float Level; // 0x4
};

struct FEventExplosionDidDestroyWieldedItem {
	AWieldableItem* DestroyedItem; // 0x0
};

struct FCollectionLimitsArray {
	TArray<FCollectionLimits> CollectionLimits; // 0x0
};

struct FWorldSnapshotV2 : FWorldSnapshot {
	TArray<FCrewSnapshotV1> Crews; // 0x10
	TArray<FShipSnapshotV1> Ships; // 0x20
	TArray<FIslandSnapshotV1> Islands; // 0x30
	TArray<FRowboatSnapshotV1> Rowboats; // 0x40
	TArray<FWorldEventSnapshotV1> WorldEvents; // 0x50
};

struct FOutfit {
	TArray<FName> PartNames; // 0x0
	TArray<FName> FreeSlots; // 0x10
	TArray<FIPGScalarParameter> ScalarParameters; // 0x20
	TArray<FName> MaterialReferences; // 0x30
};

struct FEventPlayerWaitingToSpawnComplete {
	AAthenaPlayerState* PlayerState; // 0x0
};

struct FTestMessageUInt64 {
	uint64_t TestInt; // 0x0
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FEventConcealingObjectUsed {
	AActor* UsingActor; // 0x0
};

struct FEventMeleeAttackPredictedHit {
	AActor* HitActor; // 0x0
};

struct FActionStateChangeRequestId {
	char Raw; // 0x0
};

struct FEventPetFed : FEventPetFoodBase {
	AActor* FedWithActor; // 0x10
	AActor* FeedingActor; // 0x18
};

struct FOnlineStoreCatalogItem {
	FString ProductId; // 0x0
	FString Title; // 0x10
	FString Description; // 0x20
	FString FormattedPrice; // 0x30
	FString FormattedBasePrice; // 0x40
	bool IsOnSale; // 0x50
	FDateTime SaleEndDate; // 0x58
	FString ImageUri; // 0x60
	FString CurrencyCode; // 0x70
	TArray<FString> MetaTags; // 0x80
};

struct FOnStartWaterSlideActionStateEvent {
	UWwiseEvent* WaterSlideStart; // 0x0
	UParticleSystem* WaterSlideVfxOverride; // 0x8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FQuestVariableShipwreck : FQuestVariable {
	FName ParamName; // 0x8
};

struct FPlayerCharacterEnteredShipCustomServerEvent : FGlobalCustomServerEvent {
	int32_t UserId; // 0x18
	int32_t ShipId; // 0x1c
};

struct FAIShipSpawnTelemetryEvent {
	FString AIShipId; // 0x0
	FString SpawningCrewId; // 0x10
	FString AIShipBattleId; // 0x20
	FString AIShipType; // 0x30
	FGuid SpawnConfigId; // 0x40
	FString AIShipSize; // 0x50
	int32_t AIShipWaveIndex; // 0x60
};

struct FActorStateData {
	int32_t Id; // 0x0
	FVector Position; // 0x4
	FString IslandName; // 0x10
};

struct FPremiumShopBundleOfferItem {
	UCatalogOfferDataAsset* Offer; // 0x0
	bool IsPurchasable; // 0x8
	FText LockedReason; // 0x10
};

struct FEventCustomAnimationStateChanged {
	ENPCCustomAnimationState CustomAnimationState; // 0x0
};

struct FEventPlayerWithdrewVoyage : FNetworkEventStruct {
	FText Title; // 0x10
};

struct FAIIndividualVarietyEntry {
	TArray<FStringAssetReference> Loadouts; // 0x0
	int32_t RankOffset; // 0x10
	float Weight; // 0x14
	int32_t MaxPerEncounter; // 0x18
};

struct FSetScreenSpaceTooltips {
	bool IsEnabled; // 0x0
};

struct FSetTriggerDetectingEntityData : FSetTriggerDetectingData {
	int32_t EntityNetId; // 0x8
};

struct FQuestDistributionAllAtOnceParams {
	FWeightedProbabilityRange NumQuests; // 0x0
	FWeightedProbabilityRange QuestsPerChapter; // 0x20
};

struct FPetRoamingAnimationStateLoadableWeightedDefinition {
	FStringAssetReference LoadableDefinition; // 0x0
	float Weight; // 0x10
};

struct FDominanceGroupPair {
	EDominanceGroup FirstGroupId; // 0x0
	EDominanceGroup SecondGroupId; // 0x1
	int32_t FirstDominanceValue; // 0x4
	int32_t SecondDominanceValue; // 0x8
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x30
	float Pitch; // 0x48
	float Yaw; // 0x4c
	FRotator MeshToComponent; // 0x50
};

struct FClothingChestUnequipEmoteEvent {
	UEmoteDesc* Desc; // 0x0
};

struct FAIShipEncounterBattleDesc {
	TArray<FAIShipEncounterWaveDesc> WaveDescs; // 0x0
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FContestCrewPositionTelemetryFragment {
	FGuid CrewId; // 0x0
	int32_t CrewPositionInLastContest; // 0x10
};

struct FPlayerActiveInWorldMessage {
	FPirateIdentity PirateIdentity; // 0x0
	EPlayMode Playmode; // 0x78
	EPlayModeVariant PlayModeVariant; // 0x79
};

struct FPlayerSetFlameOfFateTelemetryEvent {
	FString LitObjectId; // 0x0
	FString FlameColour; // 0x10
	FString LitObjectType; // 0x20
};

struct FPetCustomizationPartMapping {
	FAIPartId AppliedToPetPartId; // 0x0
	FAIPartId CustomizationPetPartId; // 0x8
};

struct FCompassTargetSet {
	FVector TargetLocation; // 0x0
};

struct FEmissarySessionStartTelemetryEvent {
	FGuid EmissarySessionId; // 0x0
	FName EmissaryCompany; // 0x10
	int32_t EmisarriesOnServerCount; // 0x18
};

struct FActiveVertexAnim {
	UVertexAnimBase* VertAnim; // 0x0
	float Weight; // 0x8
	float Time; // 0xc
};

struct FGameEventServiceDesc {
	FStringAssetReference ServiceParamsAssetPath; // 0x0
};

struct FPetsServiceParams {
	uint32_t MaximumDistanceFromOwner; // 0x0
	uint32_t ProximityRadius; // 0x4
	int32_t MaxPetsInProximity; // 0x8
	float RespawnRequestTimeout; // 0xc
	float SpawnTimeDelay; // 0x10
	float MinPetProximityLifespan; // 0x14
	float MaxPetProximityLifespan; // 0x18
	float MinPetProximityRespawnDelay; // 0x1c
	float MaxPetProximityRespawnDelay; // 0x20
	float HeldPetDespawnDelay; // 0x24
	TArray<UShipSize*> IllegalShipsSizesForSpawn; // 0x28
};

struct FGameClassShortName {
	FString ShortName; // 0x0
	FString GameClassName; // 0x10
};

struct FAthenaAnimationPersistentItemAnimations {
	FAthenaAnimationObjectEquipAnimations EquipAnimations; // 0x0
	FAthenaAnimationFallbackLocomotionAnimations FallbackLocomotionAnimations; // 0x40
	FAthenaAnimationJumpingAnimData FallbackJumpingAnimations; // 0x60
	UAnimSequence* FallbackIdleAnimation; // 0xd8
};

struct FPetChestSuccessfulNameChangeTelemetryEvent {
	FString PetName; // 0x0
	FString PetCategory; // 0x10
	FString PetVariantName; // 0x20
};

struct FWeightedDebris {
	UClass* DebrisClass; // 0x0
	float Weight; // 0x20
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FEntitlements {
	TArray<UEntitlementDesc*> PreCachedEntitlementTypes; // 0x8
	TArray<UEntitlementDesc*> Entitlements; // 0x18
};

struct FPremiumStoreBundleView {
	FString Title; // 0x0
	FPremiumStoreBundleOffer Offer; // 0x10
	TArray<FPremiumStoreBundleItem> Items; // 0x228
};

struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData {
	FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10
	FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x80
};

struct FMeshMemoryConstraintRegistrationDelayedTelemetryEvent {
	FString MeshReference; // 0x0
};

struct FSeasonInfoModelContainer {
	TArray<FSeasonInfoModel> Seasons; // 0x0
};

struct FRandomParticleSystemPickerEntry {
	float Weight; // 0x0
	UObject* Effect; // 0x8
};

struct FAIAbilityDebugReplicatedIntervals {
	float ActivationTimerCooldown; // 0x0
	float TimeBeforeNextExecution; // 0x4
	float DamageBeforeNextExecution; // 0x8
};

struct FHUDWalletBalance {
	EWalletCurrencyId CurrencyId; // 0x0
	FText DisplayBalance; // 0x8
	uint32_t Balance; // 0x40
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x2b0
	FMargin Padding; // 0x410
};

struct FAthenaAnimationIdlesAnimData {
	TArray<UAnimSequence*> IdleAnimations; // 0x0
};

struct FIsland {
	FName IslandName; // 0x0
	EIslandType IslandType; // 0x8
	USeaId* Sea; // 0x10
	FVector IslandBoundsCentre; // 0x18
	float IslandBoundsRadius; // 0x24
	float IslandTriggerRadius; // 0x28
	float IslandSafeZoneRadius; // 0x2c
	float Rotation; // 0x30
	FVector CompassDirectionIslandCentre; // 0x34
	UAICreatureMovementModifierParamsDataAsset* PetMovementParamsData; // 0x40
	TArray<FName> IslandFeatureNames; // 0x58
};

struct FAIShipEncounterWave {
	TArray<UAIShipContextDescDataAsset*> AIShipsInWave; // 0x0
};

struct FEventUseItemForceStop {
	UNotificationInputId* InputID; // 0x0
	AActor* ActionSource; // 0x8
	AActor* Usable; // 0x10
	EActionStateMachineTrackId TrackToUse; // 0x18
};

struct FEventCargoRunCratePickedUp {
	FGuid CrewId; // 0x0
	FGuid BatchId; // 0x10
	FGuid PickUpId; // 0x20
	ABootyItemInfo* ItemInfo; // 0x30
	AWieldableItem* Item; // 0x38
};

struct FAggressiveGhostShipVisualsExtraMesh {
	FStringAssetReference Mesh; // 0x0
	FVector Offset; // 0x10
	TArray<FAggressiveGhostShipVisualsMaterialOverride> MaterialOverrides; // 0x20
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FNetTimeStampCalculator {
	uint16_t TimesWrapped; // 0x6a
	uint16_t PackedTimeStamp; // 0x6c
};

struct FNarrationRequestEvent {
	FString Text; // 0x0
};

struct FAITelemetryFragment {
	FString AIType; // 0x0
	FString AIId; // 0x10
	TArray<FString> AILoadOut; // 0x20
	FString AIPawnType; // 0x30
	FString AISkillset; // 0x40
	FString AIForm; // 0x50
	FString AIClass; // 0x60
};

struct FMechanismBinding {
	TArray<AMechanismElementProxy*> Actions; // 0x0
	TArray<AMechanismElementProxy*> Triggers; // 0x10
	FMechanismBindingSettings Settings; // 0x20
	TArray<AMechanismElementProxy*> SelectedActions; // 0x88
	TArray<AMechanismElementProxy*> SelectedTriggers; // 0x98
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x28
};

struct FEventPlayerCharacterExitedShip {
	AActor* PlayerCharacter; // 0x0
};

struct FCompanySpecificCargoRunReward {
	UCompany* CompanyId; // 0x0
	FCargoRunReward Reward; // 0x8
};

struct FCinematicCrewNetworkEvent : FNetworkEventStruct {
	TArray<APlayerState*> CrewMembersPlayerStates; // 0x10
	FText Header; // 0x20
	FName Tag; // 0x58
};

struct FFireGridVFXParams {
	TArray<FFireCellStateParticleTemplate> DefaultParticleTemplates; // 0x0
	UParticleSystem* ExteriorLowDetailParticleSystem; // 0x10
	UParticleSystem* ExteriorSmokeParticleSystem; // 0x18
	UParticleSystem* InteriorSmokeParticleSystem; // 0x20
	int32_t InteriorSmokeTranslucencySortPriority; // 0x28
	int32_t NumInterleaveSpawnSteps; // 0x2c
	float TickIntervalForAllCells; // 0x30
	float KillSphereRadiusForDousingFire; // 0x34
	float ExteriorLowDetailTransitionWarmupTime; // 0x38
	int32_t MaxDefaultVFXToSpawnPerFrame; // 0x3c
};

struct FAnimationDataStoreAssetEntry {
	UAnimationDataStoreId* AnimDataId; // 0x0
	UAnimationData* AnimDataTypeCooked; // 0x8
	UAnimationServerData* AnimServerData; // 0x10
};

struct FAISwimmingCreatureDeadActionStateParams : FAIDeadActionStateParams {
	float TimeLeftInStateToStartDithering; // 0x4
	TArray<FAISwimmingCreatureDeadActionStateEventMapItem> CustomEvents; // 0x8
	float DoQuickDeathTestWhenLessThanTimeLeftInState; // 0x18
	float QuickDeathTime; // 0x1c
};

struct FQuestStartTelemetryEvent {
	EQuestType QuestType; // 0x0
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FEventCompanyReputationCampaignInformationResponse {
	TArray<FEventCompanyReputationCampaignInformation> CampaignInformation; // 0x0
};

struct FBuoyancyComponentLockToSurfaceParams {
	bool Enabled; // 0x0
	float SpringAcceleration; // 0x4
	float EnterLockStateBlendTime; // 0x8
	float ExitLockStateBlendTime; // 0xc
	float ChoppinessScalar; // 0x10
	float SubmersionHint; // 0x14
	float DistanceFromWaterSurfaceToConsiderSurfaced; // 0x18
};

struct FServerSpireInfo {
	int32_t LevelId; // 0x0
	FVector Location; // 0x4
	AActor* SpireActor; // 0x10
	TMap<FString, FName> InstancedLevelPaths; // 0x18
};

struct FEventCargoRunCrateSetDropOff {
	FGuid PickUpId; // 0x0
	FGuid DropOffLocationId; // 0x10
	int64_t DeliveryDeadlineAbsolute; // 0x20
};

struct FEmissaryActivated {
	FName CompanyName; // 0x0
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FRewardPopUpNotificationInfo {
	FRewardId RewardId; // 0x0
	UPopUpMessageDesc* PopUp; // 0x8
};

struct FClientTallTaleDebugInfoNetworkEvent : FBoxedRpc {
	FTallTaleDebugInfo QuestInfo; // 0x10
};

struct FTinySharkKilledNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FCatalogOffer {
	FGuid OfferId; // 0x0
	FText DisplayName; // 0x10
	FText DisplayDescription; // 0x48
	uint32_t Price; // 0x80
	FString CurrencyType; // 0x88
	TArray<FString> AssetPaths; // 0x98
	FString Thumbnail; // 0xa8
	TArray<FString> PurchaseStats; // 0xb8
	FCatalogOfferPrerequisites Prerequisites; // 0xc8
	FCatalogOfferPrerequisites ExclusionConditions; // 0x140
	ECatalogOfferAvailability Availability; // 0x1b8
	TMap<FString, FString> MetaData; // 0x1c0
	FPremiumCatalogOfferData Premium; // 0x210
	FString Sig; // 0x338
};

struct FTallTaleContestInfo {
	TArray<UShipSize*> ValidShipTypes; // 0x0
	FWeightedTallTaleContestRecipe WeightedTallTaleContest; // 0x10
};

struct FSetArenaIslandBanners {
	int32_t Value; // 0x0
};

struct FPlayerItemUsageBaseTelemetryFragment {
	FString InputID; // 0x0
	FString ItemId; // 0x10
};

struct FEventChangeMatchmakingVisibility {
	bool MatchmakingEnabled; // 0x0
};

struct FEventLanternIsLightOnStateChanged {
	AActor* Item; // 0x0
	UNotificationInputId* InputID; // 0x8
	bool IsLightOn; // 0x10
};

struct FInnerTestStruct {
	bool BoolProp; // 0x0
	FString StringProp; // 0x8
};

struct FSpireInfo {
	int32_t LevelId; // 0x0
	bool ShouldBeLoaded; // 0x4
	bool ShouldBeVisible; // 0x5
};

struct FAthenaAnimationWieldedItemStateMachine {
	EWieldedItemAnimationState CurrentState; // 0x0
	EWieldedItemAnimationState PreviousState; // 0x1
	bool ExpectingTransition; // 0x2
	UNotificationInputId* ContinuousUseInputId; // 0x8
	UNotificationInputId* OutOfContinuousUseInputId; // 0x10
	UNotificationInputId* OneShotUseInputId; // 0x18
	bool OneShotIsAlternate; // 0x20
	bool ContinuousIsAlternate; // 0x21
	EWieldableItemAnimVariant OneShotAnimationVariant; // 0x22
	bool IdleIsAlternate; // 0x23
	bool UsePrimaryContinuousAnimations; // 0x24
	bool UsePrimaryContinuousOutOfAnimations; // 0x25
	bool UsePrimaryOneShotAnimations; // 0x26
	UAnimSequence* LastValidAnimSequence; // 0x50
	UBlendSpace1D* LastValidBlendspace; // 0x58
	AActor* PreviousWieldedItem; // 0x60
	bool DuplicateTransition; // 0x68
	FName WieldSockets[0x7]; // 0x6c
};

struct FBootFlowErrorOccurredEvent {
	FString ErrorMessage; // 0x0
};

struct FDirectoryPath {
	FString path; // 0x0
};

struct FEventCompanyReputationCampaignDetailResponse {
	FEventCompanyReputationCampaignDetail CampaignDetail; // 0x0
};

struct FRepTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FRadialCoordinate {
	float NormalizedAngle; // 0x0
	float RadialDistance; // 0x4
};

struct FInteractLoadableActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr LoadableObject; // 0x30
	FNetActorPtr Interactable; // 0x44
	bool ControllingLoadable; // 0x58
	UItemDesc* DefaultItemDesc; // 0x60
};

struct FAshenLordFireShroud {
	AStatusEffectOverlapZone* FireShroudOverlapZone; // 0x0
	FAshenLordFireShroudParams Params; // 0x8
};

struct FInventoryEquipEvent {
	FString ItemDesc; // 0x0
};

struct FWreckSpawnBlockingObjectArrays {
	TArray<FVector> ShipsLocations; // 0x20
	TArray<TScriptInterface<Class>> AmbientShipwrecks; // 0x30
	TArray<TScriptInterface<Class>> ActiveCustomShipwrecks; // 0x40
	TArray<FWreckMatch> AmbientWrecksWithoutClosePlayers; // 0x50
	TArray<FWreckMatch> AmbientWrecksWithClosePlayers; // 0x60
};

struct FGenderSpecificTextPairings {
	FText MasculineClueDestinationDescription; // 0x0
	FText FeminineClueDestinationDescription; // 0x38
};

struct FWeightedVolcanoProjectile {
	float Weight; // 0x0
	AActor* ProjectileClass; // 0x8
	float ProjectileSpeedMinAtInnerRadius; // 0x10
	float ProjectileSpeedMaxAtInnerRadius; // 0x14
	float ProjectileSpeedMinAtOuterRadius; // 0x18
	float ProjectileSpeedMaxAtOuterRadius; // 0x1c
	float ProjectileGravityScale; // 0x20
	FWeightedProbabilityRangeOfRanges RotationRatePitch; // 0x28
	FWeightedProbabilityRangeOfRanges RotationRateRoll; // 0x58
	FWeightedProbabilityRangeOfRanges RotationRateYaw; // 0x88
	UWwiseEvent* LaunchAudioPlayEvent; // 0xb8
};

struct FAIBountySpawnerParams {
	TArray<FAIEncounterWave> AISpawnerCreationDesc; // 0x0
	FStringAssetReference TeamColor; // 0x10
	TArray<int32_t> NumTargetsInWave; // 0x20
	TArray<int32_t> NumCaptainsInWave; // 0x30
	float MinTimeBetweenSpawns; // 0x40
	float MaxTimeBetweenSpawns; // 0x44
	float MinTimeBetweenWaves; // 0x48
	float MaxTimeBetweenWaves; // 0x4c
	FWeightedProbabilityRange WavesPerRelocate; // 0x50
	FWeightedProbabilityRange WaveSplitChance; // 0x70
	TArray<float> WaveSuicideTime; // 0x90
	float WaveSuicideMinDist; // 0xa0
	int32_t NumWavesPerGroup; // 0xa4
	int32_t NumWaveGroups; // 0xa8
	int32_t NumTotalWaves; // 0xac
	int32_t NumTargetsPerWaveGroup; // 0xb0
	int32_t NumCaptainsPerWaveGroup; // 0xb4
	TArray<UAICombatDialogue*> AICombatDialogue; // 0xb8
};

struct FPlayModeVariantResponse {
	int32_t Variant; // 0x0
};

struct FShovelDigActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr UsableObject; // 0x30
};

struct FRPCTelemetryFragment {
	FRPCStats RPCStats; // 0x0
};

struct FLinearTransitionActionStateDurationCompletedEvent {
	USceneComponent* SceneComponent; // 0x0
};

struct FClientStartLobbyTelemetryEvent {
	FString SessionType; // 0x0
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName LinearColorPropertyName; // 0x18
	UStructProperty* LinearColorProperty; // 0x20
};

struct FEnableSkeletonSpawnerData {
	bool Skeletons; // 0x0
	bool CannonSkeletons; // 0x1
	bool SkeletonCaptains; // 0x2
	bool AncientSkeletons; // 0x3
	FString IslandName; // 0x8
};

struct FEventCharacterDespawned {
	ACharacter* Character; // 0x0
};

struct FCutscenePriorityQueueEntry {
	TArray<FQueuedCutsceneData> QueuedCutscenes; // 0x0
};

struct FContestEventSet {
	TArray<FContestCeremonyEvent> Events; // 0x0
	EContestEventStages BelongingStage; // 0x10
	EContestStagePivot StageTimePivot; // 0x11
};

struct FUIScreenTransitionTelemetryEvent {
	FString CurrentScreen; // 0x0
	FString PreviousScreen; // 0x10
};

struct FMeshMemoryConstraintUnregistrationFailedTelemetryEvent {
	FString MeshReference; // 0x0
};

struct FMeshAnimatorAnimationEntry {
	FName AnimationName; // 0x0
	FName NextAnimationName; // 0x8
	TArray<FMeshAnimatorAnimationMeshEntry> PerMeshAnimations; // 0x10
};

struct FWorldMapIslandDataCaptureParams {
	FVector CameraPosition; // 0x0
	FRotator CameraOrientation; // 0xc
	FVector WorldSpaceCameraPosition; // 0x18
	float CameraFOV; // 0x24
	float CameraAspect; // 0x28
	float CameraOrthoWidth; // 0x2c
	float CameraNearClip; // 0x30
	float CameraFarClip; // 0x34
	int32_t TextureWidth; // 0x38
	int32_t TextureHeight; // 0x3c
};

struct FPhasedActor {
	AActor* MapActor; // 0x0
	AActor* Actor; // 0x8
};

struct FReactionSequenceStateInfo {
	EReactionSequenceState State; // 0x0
	EPuzzleStatueActivatedMechanismType ActivatedMechanismType; // 0x1
	double TimeStateStarted; // 0x8
};

struct FPenaltyRequestMessage {
	FPirateIdentity Pirate; // 0x0
	FGuid RequestID; // 0x78
	FName PenaltyId; // 0x88
};

struct FQuestVariableClassArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FBootyItemShipOwnershipChangeEvent {
	AActor* Ship; // 0x0
	AItemInfo* ItemOnShip; // 0x8
};

struct FInnerWithObjTestStruct {
	UObject* ObjPointer; // 0x0
};

struct FPlayerChangedShipLoadoutEvent {
	FString ShipEquippedType; // 0x0
	FString ShipEquippedName; // 0x10
};

struct FBountyMapTargetDesc {
	FTreasureMapTextDesc Name; // 0x0
	UTexture* MugShotImage; // 0x48
};

struct FEventEmissaryFlagMeshChanged {
	FEmissaryFlagMeshReferences EmissaryFlagMeshReferences; // 0x0
	FStringAssetReference EmissaryFlotsamSpawnDataAsset; // 0x20
	FStringAssetReference EmissaryFlagTextureReference; // 0x30
};

struct FAthenaPlayerControllerEndingPlayInContestStage {
	AAthenaPlayerController* Controller; // 0x0
};

struct FContestMatchmakingServerRequestModel {
	FGuid ServerId; // 0x0
	FString VmId; // 0x10
	FString PrivateServerId; // 0x20
	FString ServerLocation; // 0x30
	uint32_t FeatureHash; // 0x40
	TArray<FString> PlayModeTags; // 0x48
	TArray<FString> PlayModeStates; // 0x58
	TArray<FServerCrewModel> Crews; // 0x68
	FGuid RequestCorrelationId; // 0x78
};

struct FGameplayEffectQuery {
	DelegateProperty CustomMatchDelegate_BP; // 0x8
	FGameplayTagQuery OwningTagQuery; // 0x18
	FGameplayTagQuery EffectTagQuery; // 0x60
	FGameplayAttribute ModifyingAttribute; // 0xa8
	UObject* EffectSource; // 0xb0
	UGameplayEffect* EffectDefinition; // 0xb8
};

struct FContestLeaderboardEntry : FNetworkEventStruct {
	FString CrewIconPath; // 0x10
	bool IsMyCrew; // 0x20
	int32_t Amount; // 0x24
	FString DisplayAmount; // 0x28
};

struct FMountCompleteEvent {
	AActor* MountedToActor; // 0x0
	AActor* MountedActor; // 0x8
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	UTexture* ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FAthenaAnimationRowboatAnimationsFirstPerson {
	UAnimSequence* SitDown; // 0x0
	UAnimSequence* Stand; // 0x8
	UAnimSequence* Idle; // 0x10
	UAnimSequence* Row; // 0x18
	UAnimSequence* Recover; // 0x20
	UAnimSequence* Brake; // 0x28
};

struct FFortTargetKilledTelemetryEvent {
	FGuid FortKeyId; // 0x0
	FString FortTargetName; // 0x10
};

struct FQuestVariableItemDescType : FQuestVariable {
	FName ParamName; // 0x8
};

struct FConditionalStatsTriggerUnit {
	UConditionalStatsTriggerType* TriggerType; // 0x0
	TArray<UConditionalStatsAsset*> ConditionalStatsAssets; // 0x8
};

struct FCreateSessionFailedEvent {
	FString Message; // 0x0
};

struct FChecklistMapContents {
	FTreasureMapTextDesc Title; // 0x0
	FTreasureMapTextDesc Description; // 0x48
	TArray<FChecklistMapItemData> ChecklistItems; // 0x90
	FTreasureMapTextDesc Afternote; // 0xa0
};

struct FUnlockableEntitlementCategory {
	FName Category; // 0x0
	TArray<UEntitlementDesc*> Entitlements; // 0x8
};

struct FEventHUDMouseFocusRequest {
	bool RequestFocus; // 0x0
};

struct FEventNamedProgressLocationDestroyed {
	AProgressSpawnLocation* SpawnLocation; // 0x0
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

struct FAIShipContextDescDamageParams {
	float OverrideRainFillRate; // 0x0
	bool OverrideRepairTime; // 0x4
	float RepairTimeMultiplier; // 0x8
	bool OverrideLeakAmounts; // 0xc
	float LeakAmountMultiplier; // 0x10
};

struct FRemotePreferences {
	TArray<FKeyBindingRemote> ActionBindings; // 0x0
	TArray<FKeyBindingRemote> AxisBindings; // 0x10
	FGuid Tag; // 0x20
	float ForceFeedbackIntensity; // 0x30
	float MouseSensitivity; // 0x34
	float ControllerSensitivity; // 0x38
	float ControllerDeadzone; // 0x3c
	float ControllerNonLinearity; // 0x40
	float FieldOfView; // 0x44
	float MasterVolume; // 0x48
	float SfxVolume; // 0x4c
	float MusicVolume; // 0x50
	float ShantyVolume; // 0x54
	float CrewChatVolume; // 0x58
	float NonCrewChatVolume; // 0x5c
	bool UsePushToTalk; // 0x60
	bool UseVirtualKeyboard; // 0x61
	bool InvertYAxisGamepad; // 0x62
	bool InvertYAxisMouse; // 0x63
	bool InvertXAxisGamepad; // 0x64
	bool InvertXAxisMouse; // 0x65
	bool UsePlatformForUnattenuatedChat; // 0x66
	bool UseProximityChatDirection; // 0x67
	int32_t NumberOfLogins; // 0x68
	bool OptedInToMarketing; // 0x6c
	int32_t KeyboardLayout; // 0x70
	bool ShowPlayerTalkingIndicator; // 0x74
	bool MuteCopyrightedAudio; // 0x75
	bool UseAltMapMarkTexture; // 0x76
	float MouseSensitivity_Blunderbuss; // 0x78
	float ControllerSensitivity_Blunderbuss; // 0x7c
	float MouseSensitivity_Flintlock; // 0x80
	float ControllerSensitivity_Flintlock; // 0x84
	float MouseSensitivity_EyeOfReach; // 0x88
	float ControllerSensitivity_EyeOfReach; // 0x8c
	float MouseSensitivity_Spyglass; // 0x90
	float ControllerSensitivity_Spyglass; // 0x94
	float MouseSensitivity_TridentOfDarkTides; // 0x98
	float ControllerSensitivity_TridentOfDarkTides; // 0x9c
	bool VariableRefreshRate; // 0xa0
	float HighDynamicRangeCalib; // 0xa4
	int32_t CVDMode; // 0xa8
	float CVDStrength; // 0xac
	float ColorSaturationScale; // 0xb0
	float NotificationScale; // 0xb4
	bool Joinable; // 0xb8
	bool ShowOwnCrewNameplates; // 0xb9
	bool ShowOtherCrewNameplates; // 0xba
	bool ShowOwnCrewStatusTags; // 0xbb
	bool ScrambleGamertags; // 0xbc
	bool ShowTallTalesOnMapTable; // 0xbd
	bool AutoVoteOnProposedVoyage; // 0xbe
	bool NotificationsInMenus; // 0xbf
	bool ToggleRadialMenu; // 0xc0
	bool StickyRadialItems; // 0xc1
	bool EnableMovementDuringRadial; // 0xc2
	bool EnableLookWhenControllingObject; // 0xc3
	bool EnableAutoCentreLook; // 0xc4
	float AutoCentreLookTimeDelay; // 0xc8
	float AutoCentreLookSpeed; // 0xcc
	bool HoldActionsDontRequireHold; // 0xd0
	bool HoldActionsWithHeldItemsDontRequireHold; // 0xd1
	int32_t TTSOverride; // 0xd4
	int32_t STTOverride; // 0xd8
	int32_t LGRTMOverride; // 0xdc
	bool TranslateOtherPlayers; // 0xe0
	bool ScreenSpaceTooltips; // 0xe1
	bool NarrateToasts; // 0xe2
	float ToastHoldDurationMultiplier; // 0xe4
	bool NarrateOnHover; // 0xe8
	bool NarrateChangeOnly; // 0xe9
	bool EscapeAsBackAccessibilityOption; // 0xea
	bool CrossInputPreference; // 0xeb
	bool AdventureCrossInputPreference; // 0xec
	int32_t AdventureIslandBanners; // 0xf0
	int32_t ArenaIslandBanners; // 0xf4
	bool OutpostLocationBanners; // 0xf8
	int32_t UseSingleStick; // 0xfc
	int32_t UseSingleStickSettingsApplied; // 0x100
	int32_t UseSingleStickCameraToggle; // 0x104
	bool DisableControllerOnPC; // 0x108
	bool RecenterMouseInMenus; // 0x109
	bool AutoFloatInWater; // 0x10a
	int32_t PushToTalkMode; // 0x10c
	bool CircularUINavigation; // 0x110
	bool Enable120Hz; // 0x111
	bool AlwaysSkipMapTableAnimation; // 0x112
	bool AudioMonoMix; // 0x113
	bool AudioOutputHeadphones; // 0x114
	bool DisableSeasonsNotifications; // 0x115
	bool DisableInviteNotifications; // 0x116
	bool ControlledTextAlignment; // 0x117
	bool ControlledLineHeight; // 0x118
	int32_t OtherCrewsMuteState; // 0x11c
	int32_t NauticalNarrationEnabled; // 0x120
	bool UseContinuousNarration; // 0x124
	float ContinuousNarrationDelay; // 0x128
	bool DisableFlashes; // 0x12c
	bool DisableBlur; // 0x12d
	bool DisableScreenShake; // 0x12e
	bool DisableOnScreenEffects; // 0x12f
	bool EnchantedCompassProximityAnnouncerEnabled; // 0x130
	bool DisableRats; // 0x131
	bool EnableSqueakyWheel; // 0x132
	float SqueakyWheelVolume; // 0x134
};

struct FCharacterSocketCollisionDesc {
	FName SocketName; // 0x0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x8
	ECharacterSocketCollisionTraceType TraceType; // 0x10
	float TraceDistance; // 0x14
	float TraceOffset; // 0x18
	ECharacterSocketCollisionResultType ResultType; // 0x1c
	int32_t FootIndex; // 0x20
};

struct FConsistentPercentageRewardDistributionModel {
	float PrimaryCrewPercentage; // 0x0
	float SecondaryCrewsPercentage; // 0x4
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

struct FAttributeMetaData : FTableRowBase {
	float BaseValue; // 0x0
	float MinValue; // 0x4
	float MaxValue; // 0x8
	FString DerivedAttributeInfo; // 0x10
	bool bCanStack; // 0x20
};

struct FEventOceanCrawlerAIAbilityAudioRequest {
	EOceanCrawlerAbilityAudioKey RequestAudioKey; // 0x0
	float AudioDelay; // 0x4
};

struct FEventPlayerChangedTableMapZoom {
	float ZoomDelta; // 0x0
};

struct FCrosshairUI {
	AProjectileWeapon* WieldedWeapon; // 0x0
};

struct FCinematicQuestNetworkEvent : FNetworkEventStruct {
	FCinematicQuestEvent BannerData; // 0x10
};

struct FTutorialStepBuyClothes : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FServerMeleeHitRegInfoTelemetryEvent {
	FGuid AttackId; // 0x0
	int32_t NumHits; // 0x10
	FString HitObjectId; // 0x18
	FString HitObjectType; // 0x28
	FString HitActorName; // 0x38
	bool IsDamageBlocked; // 0x48
	bool IsDamageConfirmed; // 0x49
	bool HasPerformedKnockBack; // 0x4a
	bool HasPerformedStun; // 0x4b
};

struct FPlayDockableKeyedInstrumentActionStateParams : FControlObjectActionStateParams {
	float CameraDockTime; // 0x18
};

struct FAthenaAnimationPitchAlpha {
	float ArmPitchAlphaLeft; // 0x0
	float ArmPitchAlphaRight; // 0x4
	float ArmPitchInterpSpeed; // 0x8
	FName BaseRotationIKSocketName; // 0xc
};

struct FKrakenParams {
	AMurk* MurkClass; // 0x0
	UGeneratedLocationsDataAsset* PotentialTentacleSpawnLocations; // 0x8
	FWeightedProbabilityRange NumberOfTentaclesToSpawn; // 0x10
	TArray<FKrakenTentaclesChanceParams> TentaclesRequiredToDismissKraken; // 0x30
	float TickFrequencyToLookForNewBehaviours; // 0x40
	float OperatingAreaRadius; // 0x44
	float MinimumOperatingAreaMovementDeltaToInvalidateLocations; // 0x48
	float RadiusToleranceBeforeOperatingAreaDespawn; // 0x4c
	TArray<FKrakenTentaclesChanceParams> NumTentacleInstancesToAssignToShip; // 0x50
	float GlobalPlayRateScale; // 0x60
	FFloatRange NewTargetTimeout; // 0x64
	FFloatRange UnavailableTargetTimeout; // 0x74
	FKrakenTentacleParams TentacleParams; // 0x88
	FWeightedProbabilityRangeOfRanges DismissTimeoutWhenNoTargets; // 0xd8
	FWeightedProbabilityRangeOfRanges DismissTimeoutWithNewTarget; // 0x108
	TArray<FKrakenWeightedBehaviour> ShipInteractingBehaviourWeights; // 0x138
	TArray<FKrakenBehaviourParams> Behaviours; // 0x148
	float DamageAmountToTriggerAudioComponentNotification; // 0x158
};

struct FSocketId {
	FSocketPath path; // 0x0
	FName Name; // 0x18
};

struct FTaleAvailableForCancel {
	UVoyageDescDataAsset* TaleData; // 0x0
};

struct FPremiumStoreLandingPageItem {
	TArray<FString> Image; // 0x0
	FString Cost; // 0x10
	FString RealMoneyPrice; // 0x20
	FString Title; // 0x30
	FString Description; // 0x40
	bool Owned; // 0x50
	FPremiumStoreTimeLimited TimeLimited; // 0x51
	EPremiumStoreLandingPageItemType Type; // 0x53
	int32_t Size; // 0x54
	FPremiumStoreBundleSetView BundleSetView; // 0x58
	FPremiumStoreItemsSetView ItemsSetView; // 0x320
	FPremiumStoreCardsView CardsView; // 0x380
	FPremiumStoreItemView ItemView; // 0x3e0
	FString AccentUrl; // 0x610
};

struct FSetByCallerFloat {
	FName DataName; // 0x0
};

struct FActionMappingKeyLookupFallback {
	FName ActionBeingLookedUp; // 0x0
	FName ActionToAlsoLookup; // 0x8
};

struct FCrewTrackedItemOwnershipChanged {
	AActor* Item; // 0x0
	FGuid CrewId; // 0x8
	FGuid PreviousCrewId; // 0x18
	bool IsFirstTimeOwnedByThisCrew; // 0x28
};

struct FControlCapstanArmActionStateParams : FControlObjectActionStateParams {
	FLookAtOffsetParams LookAtOffsetParams; // 0x18
};

struct FFFTWaterComponentParams {
	FLinearColor AmbientColour; // 0x0
	FLinearColor WaterColour; // 0x10
	FLinearColor ShallowWaterColour; // 0x20
	FLinearColor BackLitColour; // 0x30
	FLinearColor FoamColour; // 0x40
	FLinearColor FoamHighlightColour; // 0x50
	float FresnelPower; // 0x60
	float SpecularBrightness; // 0x64
	float FoamBrightness; // 0x68
	float ReflectionBrightness; // 0x6c
	float FoamFadeStart; // 0x70
	float FoamFadeEnd; // 0x74
	char DEBUG_Wireframe : 1; // 0x78
	float Size; // 0x7c
	float WindSpeed; // 0x80
	float WindSpeedInEditor; // 0x84
	float CarrierWaveAmplitude; // 0x88
	float CarrierWaveWaveLength; // 0x8c
	float CarrierWavePropagationSpeed; // 0x90
	float HorizonFadeDistance; // 0x94
	float HorizonDarkenStart; // 0x98
	float HorizonDarkenRange; // 0x9c
	float CloudShadowDarkenStart; // 0xa0
	float CloudShadowDarkenRange; // 0xa4
	float CausticsDepth; // 0xa8
	UTexture* FoamColourTex; // 0xb0
	FFFTWaterComponentParticleParams ParticleParams; // 0xb8
	float ExtendedPlaneSize; // 0x300
	float ExtendedPlaneFadeDistance; // 0x304
	FVector2D PositionOffset; // 0x308
};

struct FKillCrewData {
	FGuid CrewNetGUID; // 0x0
};

struct FNotesManagementRemoteServiceAddNoteModel {
	FString Type; // 0x0
	TArray<FNotesManagementRemoteServiceNoteTextModel> NoteText; // 0x10
};

struct FHearingThreat {
	FName SoundTag; // 0x0
	float Threat; // 0x8
	float CarrierSpeedThreshold; // 0xc
};

struct FNPCAnimationSequence {
	UAnimSequenceBase* AnimationSequence; // 0x0
	UAnimMontage* FacialAdditive; // 0x8
};

struct FUISeasonsDataErrorTelemetryEvent {
	FString ErrorMessage; // 0x0
	FString ErrorStack; // 0x10
};

struct FTalkToNPCActionStateConstructionInfo : FActorActionStateConstructionInfo {
	UNPCDialogComponent* NPCDialogComp; // 0x30
};

struct FQuestBookMaterialHandler {
	int32_t PageWidth; // 0x0
	int32_t PageHeight; // 0x4
	FQuestBookPageRenderer PageTextRenderer; // 0x8
	UMaybeCompressedCanvasRenderTarget2D* LeftSpreadLeftPageRenderTarget; // 0x20
	UMaybeCompressedCanvasRenderTarget2D* LeftSpreadRightPageRenderTarget; // 0x28
	UMaybeCompressedCanvasRenderTarget2D* RightSpreadLeftPageRenderTarget; // 0x30
	UMaybeCompressedCanvasRenderTarget2D* RightSpreadRightPageRenderTarget; // 0x38
	UQuestBookPageLayout* LeftSpreadLeftPageContents; // 0x40
	UQuestBookPageLayout* LeftSpreadRightPageContents; // 0x58
	UQuestBookPageLayout* RightSpreadLeftPageContents; // 0x70
	UQuestBookPageLayout* RightSpreadRightPageContents; // 0x88
};

struct FQuestVarPLSection : FQuestVariable {
	FName ParamName; // 0x8
};

struct FProjectileServiceUpdateRewindFailedEvent {
	TArray<FGuid> AffectedProjectilesTelemetryAttackIds; // 0x0
	FString DamagerType; // 0x10
	float AttackGroupStartTime; // 0x20
	float AttackGroupEndTime; // 0x24
	int32_t Count; // 0x28
};

struct FFireTelemetryFragment {
	int32_t NumOfShipWithActiveCells; // 0x0
	int32_t NumOfActiveCells; // 0x4
};

struct FMaterialInformationTranslationData : FTableRowBase {
	FName AudioSurfaceType; // 0x0
	FName VFXSurfaceType; // 0x8
};

struct FAthenaAnimationWaterPumpAnimData {
	UAnimSequence* IntoWaterPump; // 0x0
	UAnimSequence* WaterPumpIdle; // 0x8
	UAnimSequence* WaterPumpAction; // 0x10
	UAnimSequence* WaterPumpActionOverlay; // 0x18
	UAnimSequence* OutOfWaterPump; // 0x20
};

struct FRemoteLocalizationModel {
	FRemoteLocalizationData LocalizationData; // 0x0
};

struct FEventStatusMaterialEffectStarted {
	FName MaterialParamName; // 0x0
	FName CanShowMaterialParam; // 0x8
	FName TintParamName; // 0x10
	FLinearColor TintColor; // 0x18
	float TargetEffectStrength; // 0x28
	float FadeInAcceleration; // 0x2c
};

struct FSeasonsChatNotification {
	FString IconUrl; // 0x0
	FString Message; // 0x10
	FGenericPopupAudioDescriptor Audio; // 0x20
};

struct FRadialInputBindings {
	UNotificationInputId* GamepadActivatedId; // 0x0
	UNotificationInputId* GamepadDectivatedId; // 0x8
};

struct FEventAthenaLocalPlayerControllerConnected {
	int32_t ControllerId; // 0x0
};

struct FOnlineAthenaGameModeConfigurationSettings {
	FTimespan PreLoginEntitlementQueryTimeout; // 0x0
	FTimespan PreLoginPirateValidationTimeout; // 0x8
	bool ConfigAllowCrossWorld; // 0x10
};

struct FGameplayEffectModifiedAttribute {
	FGameplayAttribute Attribute; // 0x0
	float TotalMagnitude; // 0x8
};

struct FSingleStickSettings {
	TArray<FSingleStickMappingUserSettingsBoolean> UserSettingsBooleans; // 0x0
	TArray<FSingleStickMappingUserSettingsInteger> UserSettingsIntegers; // 0x10
};

struct FEmissaryGameEventsReward {
	UGameEventType* FinishedEventType; // 0x0
	float Amount; // 0x8
};

struct FActivePortal {
	FPortalSpawningInfo PortalSpawnInfo; // 0x0
	ATunnelOfTheDamnedPortal* Portal; // 0x10
	FGuid CrewId; // 0x18
};

struct FMeshReductionSettings {
	float PercentTriangles; // 0x0
	float MaxDeviation; // 0x4
	float WeldingThreshold; // 0x8
	float HardAngleThreshold; // 0xc
	EMeshFeatureImportance SilhouetteImportance; // 0x10
	EMeshFeatureImportance TextureImportance; // 0x11
	EMeshFeatureImportance ShadingImportance; // 0x12
	bool bActive; // 0x13
	bool bRecalculateNormals; // 0x14
	int32_t BaseLODModel; // 0x18
	bool bGenerateUniqueLightmapUVs; // 0x1c
	bool bKeepSymmetry; // 0x1d
	bool bVisibilityAided; // 0x1e
	bool bCullOccluded; // 0x1f
	EMeshFeatureImportance VisibilityAggressiveness; // 0x20
	FSimplygonMaterialLODSettings MaterialLODSettings; // 0x28
	EMeshFeatureImportance VertexColorImportance; // 0x50
	bool bForceRebuild; // 0x51
};

struct FRiddleActionInfo {
	ERiddleActions RiddleAction; // 0x0
	FName GotoLocationPhraseId; // 0x4
	FName GotoLocationWithOffsetPhraseId; // 0xc
	FName GotoOffsetPhraseId; // 0x14
	FName GotoUndergroundLocationPhraseId; // 0x1c
	FName GotoUndergroundLocationWithOffsetPhraseId; // 0x24
	FName GotoUndergroundOffsetPhraseId; // 0x2c
	FName GotoNonVagueNonUniqueLandmarkPhraseId; // 0x34
	float TimeToTriggerGateCompletion; // 0x3c
};

struct FEventAthenaAISpawnBeginAnim {
	EAthenaAISpawnType SpawnType; // 0x0
};

struct FEventWieldableItemUseStarted {
	AActor* Item; // 0x0
	UNotificationInputId* InputID; // 0x8
	FWieldableItemActionVisuals Visuals; // 0x10
	EActionStateMachineTrackId TrackId; // 0x28
};

struct FQuestWeightedDistance {
	float Min; // 0x0
	float Max; // 0x4
	float MinWeight; // 0x8
	float MaxWeight; // 0xc
};

struct FAISkillsetRankMapping {
	UAthenaAIControllerParamsDataAsset* Skillset; // 0x0
	TArray<float> Weights; // 0x8
};

struct FEventAthenaLocalPlayerControllerDisconnected {
	int32_t ControllerId; // 0x0
};

struct FAthenaAnimationStunData {
	EStunAnimationType StunAnimType; // 0x0
	char IsCursedVariant : 1; // 0x4
};

struct FAggressiveGhostShipEncounterWaveFormationDesc {
	int32_t NumShipsInFormation; // 0x0
	FAggressiveGhostShipEncounterShipDesc FormationShipDesc; // 0x8
	FAggressiveGhostShipEncounterShipDesc FormationLeaderShipDesc; // 0x50
	TArray<UAggressiveGhostShipVisualsDataAsset*> FormationGruntVisuals; // 0x98
	bool FormationLeaderIsCaptain; // 0xa8
	bool IsBurningBlade; // 0xa9
	bool IsHellishMermaid; // 0xaa
	bool PreventSpawningFormationGruntsUntilNotified; // 0xab
	bool DespawnShipsInFormationWhenLeaderIsDestroyed; // 0xac
	EAggressiveGhostShipSpawnDirectionType SpawnDirection; // 0xad
	bool SpawnShipOnTopOfPlayer; // 0xae
	float SpawnShipOnTopOfPlayerSpawnAheadDistanceInMetres; // 0xb0
	UAggressiveGhostShipFixedSplinesDataAsset* FixedSpline; // 0xb8
	int32_t DoNotDamageFormationLeaderShipBelowThisNumShots; // 0xc0
	bool ImmuneToLightning; // 0xc4
	bool FlipSideOffsetIfReversed; // 0xc5
};

struct FDebugReplicatedAbilityData {
	FAIAbilityDebugReplicatedIntervals AbilityIntervals; // 0x0
	UAthenaAIAbilityType* TypeClass; // 0x10
	bool AbilityInRange; // 0x18
	bool AbilityDebugBlocked; // 0x19
	bool UseTimerBetween; // 0x1a
	bool UseDamageBetween; // 0x1b
	EAIAbilityDamageIntervalCounterMode DamageIntervalBlockMode; // 0x1c
};

struct FFogBankManagerIslandTypesToKeepAwayFrom {
	EIslandType IslandType; // 0x0
	float MinimumDistanceFromIslandInKm; // 0x4
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FStringAssetReference {
	FString AssetLongPathname; // 0x0
};

struct FQuestVariableTradeRouteData : FQuestVariable {
	FName ParamName; // 0x8
};

struct FPetChestNamePetEvent {
	FString PetName; // 0x0
};

struct FPlayerChangedLoadoutCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FEventTeleportLocationDestroyed {
	FTeleportLocation TeleportLocation; // 0x0
};

struct FSetNonVerbalOption : FRadialInventoryEvent {
	TArray<FString> Phrases; // 0x8
};

struct FSeagullManagerPseudoRandomEntry {
	double TimeBoundary; // 0x0
	float SeagullSpeed; // 0x8
	float SeagullScale; // 0xc
	FName LocationName; // 0x10
	int32_t NumInFormation; // 0x18
	int32_t FormationOffsetsIndex; // 0x1c
	int32_t SpeedModifierCurveIndex; // 0x20
	TArray<int32_t> RollCurveIndices; // 0x28
	TArray<int32_t> OffsetCurveIndices; // 0x38
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

struct FRecentlyInteractedWithPlayers {
	TArray<AAthenaPlayerCharacter*> RecentlyInteractedPlayers; // 0x0
	AAthenaPlayerCharacter* ReportingCharacter; // 0x10
	FDateTime InteractionTime; // 0x18
};

struct FSetNarrateToasts {
	bool IsEnabled; // 0x0
};

struct FFaunaAnimationPigStarvingStructure {
	UAnimSequence* StarveIn; // 0x0
	UAnimSequence* StarveLoop; // 0x8
	UAnimSequence* StarveOut; // 0x10
	UAnimSequence* StarveDeath; // 0x18
	UAnimSequence* StarveStartledLow; // 0x20
	UAnimSequence* StarveStartledHigh; // 0x28
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x30
	int32_t MaxTransitionsPerFrame; // 0x34
	int32_t CurrentState; // 0x40
	float ElapsedTime; // 0x44
};

struct FCurrencyGrantedEvent {
	uint32_t Amount; // 0x0
	EWalletCurrencyId Currency; // 0x4
	FGuid TransactionId; // 0x8
	FName EmissaryAffiliation; // 0x18
	uint32_t EmissaryLevel; // 0x20
	double EmissaryMultiplier; // 0x28
};

struct FRiddleQuestGateDesc {
	ERiddleLocations RiddleLocation; // 0x0
	ERiddleActionLocationOffsets RiddleActionLocationOffset; // 0x1
	ERiddleActions RiddleAction; // 0x2
	FTreasureMapTextDesc Text; // 0x8
	ALandmark* Landmark; // 0x50
	FVector TargetPositionIfNotLandmark; // 0x58
	FName NonVagueNonUniqueLandmarkPhraseId; // 0x64
};

struct FAthenaAnimationLocomotionStairsAnimData {
	UBlendSpace* UpStairsLeft; // 0x0
	UBlendSpace* UpStairsRight; // 0x8
	UBlendSpace* DownStairsLeft; // 0x10
	UBlendSpace* DownStairsRight; // 0x18
};

struct FServerUpdateCrewState {
	FGuid CrewId; // 0x0
	TArray<FVector2D> Locations; // 0x10
	ECrewSessionType SessionType; // 0x20
	TArray<uint32_t> ContendedResources; // 0x28
};

struct FSimpleOverlapEnd {
	FSimpleOverlapInfo OverlapInfo; // 0x0
};

struct FReapersMarkCurseStatInfo {
	EPlayerCurseTag Curse; // 0x0
	FPlayerStat StatToFire; // 0x4
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FNPCData {
	FNetActorPtr NPC; // 0x0
	FGuid Id; // 0x14
	FText Name; // 0x28
	FVector Location; // 0x60
	FName IslandName; // 0x6c
	FText IslandNameLocalised; // 0x78
	EInteractableGrammaticalGender GrammaticalGender; // 0xb0
};

struct FClientNPCDialogBeganTelemetryEvent {
	FGuid NPCInteractionSessionId; // 0x0
	FString NPCInteracted; // 0x10
	FString NPCInteractedType; // 0x20
};

struct FSimplygonMaterialLODSettings {
	bool bActive; // 0x0
	EMaterialLODType MaterialLODType; // 0x1
	bool bUseAutomaticSizes; // 0x2
	ESimplygonTextureResolution TextureWidth; // 0x3
	ESimplygonTextureResolution TextureHeight; // 0x4
	ESimplygonTextureSamplingQuality SamplingQuality; // 0x5
	int32_t GutterSpace; // 0x8
	ESimplygonTextureStrech TextureStrech; // 0xc
	bool bReuseExistingCharts; // 0xd
	TArray<FSimplygonChannelCastingSettings> ChannelsToCast; // 0x10
	bool bBakeVertexData; // 0x20
	bool bBakeActorData; // 0x21
	bool bAllowMultiMaterial; // 0x22
	bool bPreferTwoSideMaterials; // 0x23
};

struct FLightingZoneParametersAndLocation {
	FLightingZoneParameters LightingZoneParameters; // 0x0
	FVector Location; // 0x20
};

struct FCannonDesc {
	UStaticMesh* CannonBarrelMesh; // 0x0
	USkeletalMesh* CannonBoxMesh; // 0x8
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FRequestEmoteSelectEquipEvent {
	int32_t Index; // 0x0
	FString ItemDesc; // 0x8
};

struct FCrewJoinedAllianceTelemetryEvent {
	FGuid AllianceId; // 0x0
	FGuid OfferingCrewSessionId; // 0x10
	FGuid AcceptingCrewSessionId; // 0x20
};

struct FKrakenAnimatedTentacleWaterTriggerableFX {
	UKrakenAnimatedTentacleState* State; // 0x0
	float WaterHeightOffset; // 0x8
	UObject* FirstPersonTargetVFX; // 0x10
	UObject* ThirdPersonTargetVFX; // 0x18
	UObject* AboveWaterVFX; // 0x20
	UObject* BelowWaterVFX; // 0x28
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

struct FAshenLordNewHealthStageTelemetryEvent {
	uint32_t CurrentStage; // 0x0
	uint32_t NumStages; // 0x4
};

struct FTinySharkMusicEvent : FMusicEvent {
	UWwiseEvent* StartEvent; // 0x0
	UWwiseEvent* StopEvent; // 0x8
};

struct FEmissaryDiscoveredCargoRunCrateNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
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

struct FWheelEventProperties {
	float VelocityThresholdForStopped; // 0x0
	float DeadZoneForCenter; // 0x4
};

struct FEventPlayerCharacterJoined {
	AAthenaPlayerCharacter* AthenaCharacter; // 0x0
};

struct FFaunaAnimationLocationStructure {
	FFaunaAnimationBaseStructure OnLand; // 0x0
	FFaunaAnimationBaseStructure OnSea; // 0x120
	FFaunaAnimationBaseStructure Underwater; // 0x240
};

struct FGlobalProjectileSettings {
	EProjectileFiredFrom SettingsFor; // 0x0
	float ProjectileDestroyDepth; // 0x4
	float ProjectileOceanFloorDestroyDepth; // 0x8
	float ProjectileMinimumFallDistance; // 0xc
};

struct FWeakActorHandle {
	FActorId ActorId; // 0x0
	FNetActorPtr NetActorPtr; // 0x10
	bool Valid; // 0x24
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

struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x8
	int32_t NextState; // 0xc
	float CrossfadeDuration; // 0x10
	int32_t StartNotify; // 0x14
	int32_t EndNotify; // 0x18
	int32_t InterruptNotify; // 0x1c
	EAlphaBlendOption BlendMode; // 0x20
	UCurveFloat* CustomCurve; // 0x28
	ETransitionLogicType LogicType; // 0x30
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FBlackboardValueCondition {
	FBlackboardKeySelector BlackboardKey; // 0x0
	EBlackboardValueComparisonType Comparison; // 0x28
	float Value; // 0x2c
	bool OnEntry; // 0x30
	bool OnExit; // 0x31
};

struct FTeleportActionStateSerialisableData : FActionStateSerialisableData {
	bool IsTeleporting; // 0x30
};

struct FSetShipFlameOfFateEvent {
	EFlameOfFateType FlameOfFateType; // 0x0
	UObject* Source; // 0x8
	UObject* Ship; // 0x10
};

struct FFishingFishSelector {
	UAvailableFishForSpawning* AvailableFish; // 0x0
	TArray<UFishSpawnParamsDataAsset*> SelectedFishCache; // 0xb0
	UObject* Root; // 0xc0
	UFishSpawnParamsDataAsset* GatheredConditions; // 0xc8
	UVoyageLocationOnlyNamedIslandListDataAsset* GatheredIsland; // 0xd0
};

struct FMastDamageStateChangedEvent {
	EMastDamageState NewMastDamageState; // 0x0
	AActor* Mast; // 0x8
};

struct FEventQueriedPlayerSpawnLocation {
	ECrewSpawnState CrewSpawnState; // 0x0
};

struct FAthenaAnimationServerAnimAISpawnData {
	UClass* ObjectId; // 0x0
	float MaxSpawnAnimDurations[0x4]; // 0x20
};

struct FTaleQuestWeightedItemDescSpawnData {
	UItemSpawnData* ItemSpawnData; // 0x0
	float Weight; // 0x8
	bool LimitMaxSpawnedItems; // 0xc
	int32_t MaxTimesCanBeSelected; // 0x10
};

struct FKrakenServiceShipParams {
	FName Feature; // 0x0
	TArray<UShipSize*> ValidShipTypes; // 0x8
	UKrakenParamsDataAsset* KrakenParams; // 0x18
};

struct FFortCompletedTelemetryEvent {
	FGuid FortId; // 0x0
	FName FortIsland; // 0x10
	FName FortType; // 0x18
	bool PresentForCompletion; // 0x20
};

struct FCrewMutePlayerPhrasesEvent {
	FString XUID; // 0x0
	bool IsMuted; // 0x10
};

struct FStowItemToContainerRPC : FBoxedRpc {
	FNetSubObjectPtr Container; // 0x10
	UItemDesc* ItemDescToStow; // 0x28
};

struct FItemBuriedHistoryMetaWrapper : FItemMetaBase {
	FStringAssetReference StoredStructType; // 0x8
};

struct FQuestVariableCollection : FQuestVariable {
	FName ParamName; // 0x8
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
};

struct FEventDiggingStarted {
	AActor* ActorBeingDugUp; // 0x0
};

struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x0
	FLinearColor SubsurfaceColor; // 0x4
	FLinearColor FalloffColor; // 0x14
};

struct FMermaidServiceParams {
	float LocallyActiveMermaidCheckInterval; // 0x0
	float PlayerAbandonedCheckInterval; // 0x4
	float MinDestroyDistancePlayerToMermaidIfPlayerNearEnemyShip; // 0x8
	float MinDestroyDistancePlayerToMermaidIfPlayerNearIsland; // 0xc
	float MinDestroyDistancePlayerToMermaidIfPlayerNotNearIsland; // 0x10
	float MaxDistFromCoastForPlayerToCountAsNearIsland; // 0x14
	float MaxDistFromCoastForShipToCountAsNearIsland; // 0x18
	float MinPlayerToShipDistForPlayerToQualifyAsAbandoned; // 0x1c
	float MinPlayerToShipDistForPlayerToBeClearedOfAbandonedStatus; // 0x20
	float MinPlayerToEnemyShipDistForPlayerToQualifyForStealthSpawns; // 0x24
	float MinPlayerToWatercraftDistForPlayerToQualifyAsAbandoned; // 0x28
	float MinDistFromAnyMermaidForPlayerToBeAbandonedIfPlayerNotNearIsland; // 0x2c
	float MinDistFromAnyMermaidForPlayerToBeAbandonedIfPlayerNearIsland; // 0x30
	int32_t MaxNumberOfConcurrentMermaids; // 0x34
	float MinLifeTimeOfMermaidBeforeCanBeCulledInPopulationCheck; // 0x38
	float SpawnDistAroundSaviourMermaid; // 0x3c
	FMermaidServiceMermaidSpawnParams SpawnParams; // 0x40
};

struct FPremiumCurrencyItem {
	FString Description; // 0x0
	FString Id; // 0x10
	FString ImageUrl; // 0x20
	FString Price; // 0x30
	FString BasePrice; // 0x40
	bool IsOnSale; // 0x50
	FString SaleEndDate; // 0x58
	FString Title; // 0x68
	FString Quantity; // 0x78
};

struct FPetNotFedTelemetryEvent {
	FString IgnoringPlayerId; // 0x0
	FGuid FeedingInteractionId; // 0x10
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FUIIntegerOptionSelectedTelemetryEvent {
	FString Option; // 0x0
	int32_t Value; // 0x10
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FPetSpawnDefinition {
	UPetDesc* PetDesc; // 0x0
	FPetCustomisation PetCustomisation; // 0x8
};

struct FLinearTransitionLadderActionStateParams : FTransitionLadderActionStateParams {
	float Duration; // 0x10
};

struct FCreativeSession {
	TArray<FCreativeCrewConfig> CrewConfigs; // 0x0
	bool IsHost; // 0x10
	TArray<FCreativeCrewMember> Members; // 0x18
	FString SessionCode; // 0x28
	int32_t State; // 0x38
	FString XUID; // 0x40
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FVector_NetQuantize10 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FEmblemCriteriaProgress {
	FPlayerStat Stat; // 0x0
	uint32_t Value; // 0x4
	uint32_t Threshold; // 0x8
	bool IsCompleted; // 0xc
};

struct FTutorialStepReturnToStranger : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FVfxSelectorEntry {
	UObject* ParticleSystem; // 0x0
	UWwiseEvent* WiseEvent; // 0x8
	UWwiseObjectPoolWrapper* WwisePoolToUse; // 0x10
	FName RTPCName; // 0x18
	float RTPCValue; // 0x20
};

struct FBuriedTreasureChestParams {
	int32_t MaxSmallCrewSizeForNumDigsSelection; // 0x0
	FWeightedProbabilityRange NumDigsRequiredForSmallCrewSize; // 0x8
	FWeightedProbabilityRange NumDigsRequiredForBiggerCrewSize; // 0x28
};

struct FCrewSessionTemplate : FSessionTemplate {
	FString MatchmakingHopper; // 0x18
	UShipSize* ShipSize; // 0x28
	int32_t MaxMatchmakingPlayers; // 0x30
};

struct FAIFixedWavesSpawnerArchive : FAISpawnerArchive {
	TArray<int32_t> NumSpawnedPawnsInWaves; // 0x8
	bool WavesSpawnedOnSpottedNewTarget; // 0x18
};

struct FComponentOverrideRecord {
	UActorComponent* ComponentTemplate; // 0x0
	FComponentKey ComponentKey; // 0x8
};

struct FMerchantCrateAllocatedTelemetryEvent {
	FGuid BootyId; // 0x0
	FString Rarity; // 0x10
};

struct FAthenaAnimationCustomSkeletonAnimationBlueprintData {
	bool SequenceActive; // 0x0
	bool LoopActive; // 0x1
	int32_t ActiveSequenceIndex; // 0x4
	bool IsOneShot; // 0x8
	FSkeletonCustomAnimationBlueprintPlayingAnimations BlueprintPlayingAnimations; // 0x10
	UNPCHeldObjectData* WieldableCosmeticItemList; // 0x48
	ENPCCustomAnimationState CustomAnimationState; // 0x50
	float BlendTime; // 0x54
};

struct FUpdateSelectedPirateEvent {
	TArray<UClothingDesc*> Outfit; // 0x80
};

struct FItemSpawnParams {
	FWeightedProbabilityRange Total; // 0x0
	float AllowedAngleDeviation; // 0x20
	float MaxZ; // 0x24
};

struct FQuestVariableChecklistItemArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FTunnelsOfTheDamnedMigrationDataHolder {
	FTransform ShipsTransform; // 0x0
	FGuid CrewId; // 0x30
};

struct FAthenaAnimationSpawnBase {
	UWieldableItemAnimationStoreId* ObjectId; // 0x0
	UAnimSequence* SpawnOnLand; // 0x8
	UAnimSequence* SpawnOnShip; // 0x10
	UAnimSequence* SpawnSummoned; // 0x18
	UAnimSequence* SpawnBoarding; // 0x20
	UAnimSequence* Despawn; // 0x28
};

struct FTutorialStepEndedTelemetryEvent {
	FString SequenceName; // 0x0
	FString StepName; // 0x10
	bool StepCompleted; // 0x20
	bool IsFinalStep; // 0x21
};

struct FVoyageOffer {
	FShopOffer ShopOffer; // 0x0
	FString BackgroundImage; // 0x1e0
	FString RibbonImage; // 0x1f0
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FPlayerCapstanUsageStartTelemetryEvent {
	int32_t NumCurrentUsers; // 0x0
	float CapstanVelocity; // 0x4
	float CapstanState; // 0x8
};

struct FInteractionOptionSelectedNonUI {
	FName EventName; // 0x0
	FGuid InstagatorCrewID; // 0x8
	int32_t Index; // 0x18
};

struct FProjectileWeaponFireAimClampTelemetryEvent {
	FGuid TelemetryAttackId; // 0x0
	FString DamagerType; // 0x10
	float RequesterLatencyMs; // 0x20
	FVector ClampedByAmmount; // 0x24
};

struct FEventReceiveOpenableItemComponentState {
	UOpenableItemComponent* Source; // 0x0
};

struct FEventAthenaLocalPlayerFocalUserSet {
	bool FocalUserSet; // 0x0
};

struct FInstancedCoverageMeshLOD {
	float LODReduction; // 0x0
	float DistanceToLOD; // 0x4
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x198
	FVectorCurve ScaleCurve; // 0x318
};

struct FQuestVariableUObject : FQuestVariable {
	FName ParamName; // 0x8
};

struct FWardrobeConfig {
	TArray<FClothingSlot> Slots; // 0x0
	TArray<FName> Priority; // 0x10
};

struct FRequestCompanyProgressSucceededEvent {
	FGuid RequestID; // 0x0
	FCompanyReputationProgressModelCollection PirateCompanyProgress; // 0x10
};

struct FBeachNPCSpawnFlowNetworkEvent : FNetworkEventStruct {
	bool HasTaleCheckpointVoyage; // 0x10
};

struct FTreasureDroppedTelemetryEvent {
	FGuid BootyId; // 0x0
	EBootyTypes BootyType; // 0x10
	FString Rarity; // 0x18
	FString LocationOnShip; // 0x28
};

struct FPhasedActorInfo {
	AActor* MapActor; // 0x0
	AActor* PhasedActor; // 0x8
};

struct FLinearTransitionActionStateParams : FDockToObjectActionStateParams {
	float Duration; // 0x10
};

struct FSeasonChallengeInfo {
	FGuid GoalId; // 0x0
	int64_t Threshold; // 0x10
	FString XPGain; // 0x18
	FString Category; // 0x28
	FString LocalizedTitle; // 0x38
	FString LocalizedCopy; // 0x48
	TArray<FSeasonGoalInfo> Goals; // 0x58
};

struct FCoherentUIGTLoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x0
	bool bAutoCompleteWhenLoadingCompletes; // 0x4
	bool bWaitForManualStop; // 0x5
	FString URL; // 0x8
};

struct FItemSnapshot {
	AItemInfo* ProtectedItemInfo; // 0x10
	FStringAssetReference ItemDesc; // 0x18
	FGuid Id; // 0x28
};

struct FPlayerEnteredWorldLocationNotificationEvent {
	UPopUpAudioDesc* AudioOverride; // 0x0
	FString IconPath; // 0x8
	FString DisplayText; // 0x18
};

struct FAnimationDataStoreEntry {
	UAnimationDataStoreId* AnimDataId; // 0x0
	UAnimationData* AnimData; // 0x8
	UAnimationServerData* AnimServerData; // 0x10
};

struct FWeightedContestList {
	TArray<FWeightedEmergentContestVoyageRecipe> WeightedContests; // 0x8
	TArray<FWeightedTallTaleContestRecipe> WeightedTallTaleContests; // 0x18
};

struct FNoValidWreckLocationFoundEvent {
	FVector Location; // 0x0
	FGuid CrewId; // 0xc
};

struct FBootFlowSetWhatsNewArticleList {
	TArray<FBootFlowWhatsNewArticle> WhatsNewArticleList; // 0x0
};

struct FMerchantQuestStartTelemetryEventRequiredItemEntry {
	int32_t NumItems; // 0x0
	FString Rarity; // 0x8
};

struct FServerSettings {
	bool FailToConnectToServer; // 0x0
	bool RefuseMigrationStart; // 0x1
	bool DisconnectServerConnectionDuringMigration; // 0x2
	int32_t RefuseIncomingClientConnections; // 0x4
};

struct FTriggerStopUseEvent {
	UNotificationInputId* InputID; // 0x0
	AActor* ActionSource; // 0x8
	AActor* Usable; // 0x10
	EActionStateMachineTrackId TrackToUse; // 0x18
};

struct FSittingActionStateParams : FControlObjectActionStateParams {
	EControllableObjectType ControllableObjectType; // 0x18
	USeatAnimationId* SeatAnimationId; // 0x20
	FLookAtOffsetParams LookAtOffsetParams; // 0x28
	bool ShouldHideFirstPersonMesh; // 0x44
	UWwiseEvent* OnSitSfx; // 0x48
	UWwiseEvent* OnStandSfx; // 0x50
	UWwiseObjectPoolWrapper* SeatPool; // 0x58
	bool AllowInteractWithOtherObjectsWhileSitting; // 0x60
	TArray<UObject*> AllowedInteractableTypes; // 0x68
	TArray<UNotificationInputId*> AllowedInteractionNotificationInputIds; // 0x78
	ESittingActionStateDockingMode DockingMode; // 0x88
	bool ThirdPersonCameraEnabled; // 0x89
	UAthenaSpringArmComponentParams* ThirdPersonCameraParams; // 0x90
	bool CameraRollEnabled; // 0x98
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x38
};

struct FReplicatedDateTime {
	int64_t Ticks; // 0x0
};

struct FWeightedAnimationTimeoutSelector {
	TArray<FWeightedAnimationTimeout> Weightings; // 0x0
};

struct FWeightedItemDescSpawnDataAssetWithWeight {
	UWeightedItemDescSpawnDataAsset* WeightedItemSpawnDataAsset; // 0x0
	float Weight; // 0x8
	bool LimitMaxSpawnedItems; // 0xc
	int32_t MaxTimesCanBeSelected; // 0x10
};

struct FScoreRewardShipPartData {
	AActor* ShipPart; // 0x0
	FScoreRewardValueData Score; // 0x8
};

struct FOpenShopFrontEvent {
	FShopDefinition ShopDefinition; // 0x0
};

struct FBaseRadialEntry {
	FRadialInputBindings RadialBindings; // 0x0
	URadialCreationRuleAsset* RadialCreationRule; // 0x10
	URadialContextBase* RadialContextBase; // 0x18
};

struct FPetMaterialEntry {
	FStringAssetReference MaterialReference; // 0x0
	bool CastShadows; // 0x10
};

struct FPlayerDeathCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FDeveloperTelemetryPayload {
	FString EventTag; // 0x0
	FJsonObjectWrapper Json; // 0x10
};

struct FRemoveWorldEventData {
	FString EventType; // 0x0
	TMap<FString, FString> Parameters; // 0x10
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x18
};

struct FNPCDialogRankGatedText {
	FText Text; // 0x0
	TArray<URankDesc*> RequiredRanks; // 0x38
};

struct FAthenaCharacterSwimParams {
	float EnterSwimmingDepth; // 0x0
	float ExitSwimmingDepth; // 0x4
	float FloatHeight; // 0x8
	float ThirdPersonMeshOffset; // 0xc
	float ThirdPersonMeshAdjustTime; // 0x10
	float FullGravityHeight; // 0x14
	float SurfaceSwimDepth; // 0x18
	float SurfaceSwimExitDepth; // 0x1c
	float SubmergedBuoyancyDepth; // 0x20
	float ZeroDragDepth; // 0x24
	float MaxBuoyancyAcceleration; // 0x28
	float SubmergedBuoyancyAcceleration; // 0x2c
	float SubmergedBuoyancyTime; // 0x30
	float DragFactor; // 0x34
	float MaxDragAcceleration; // 0x38
	float MinPushDownRoofAngle; // 0x3c
	float MinPushDownRoofZ; // 0x40
	float MinCorrectionVelForSurfaceSwim; // 0x44
	float SurfaceVelBlendTime; // 0x48
	float UnderwaterSwimmingEntryPitch; // 0x4c
	float UnderwaterSwimmingEntryAccel; // 0x50
	float UnderwaterSwimDepth; // 0x54
	float UnderwaterSwimmingDragSpeed; // 0x58
	float UnderwaterSwimmingSpeed; // 0x5c
	float PitchBlendOffRate; // 0x60
	float MaxSwimDepth; // 0x64
	float MaxSwimDepthBuoyancy; // 0x68
	float MaxSwimDepthBuoyancyRange; // 0x6c
	float MaxSwimDepthDragFactor; // 0x70
	float CharacterCentreOffset; // 0x74
	ETraceTypeQuery WaterDepthTraceQueryType; // 0x78
	FAthenaCharacterSwimSpeed SurfaceSwimSpeeds; // 0x7c
	FAthenaCharacterSwimSpeed UnderwaterSwimSpeeds; // 0x88
	float SurfaceSwimmingDepthWhenEnteredWater; // 0x94
};

struct FEventShipCreated {
	AActor* Ship; // 0x0
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x48
};

struct FAISpawnWaveSequenceRankMapping {
	UAISpawnWaveSequence* SpawnWaveSequence; // 0x0
	TArray<float> Weights; // 0x8
};

struct FServerPopulationTelemetryFragment {
	int32_t NumberOfPlayers; // 0x0
	int32_t NumberOfCrews; // 0x4
};

struct FIslandLocationVerifierResult {
	bool Success; // 0x0
	FVector AdjustedLocation; // 0x4
	int32_t ResultCode; // 0x10
};

struct FPerComanyItemQualityEntry {
	UCompany* Company; // 0x0
	EEmissaryQualityLevel Quality; // 0x8
};

struct FQuestVariableItemSpawnDataType : FQuestVariable {
	FName ParamName; // 0x8
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x20
	float Radius; // 0x2c
};

struct FPopUpNotificationUIEvent {
	FString BackgroundImage; // 0x0
	FString ForegroundImage; // 0x10
	FText Text; // 0x20
	FString AudioSfxEventName; // 0x58
	FString AudioEventName; // 0x68
	FString AudioSwitchName; // 0x78
	FString AudioSwitchValue; // 0x88
	FString StyleModifier; // 0x98
};

struct FObjectLeakDetectionTelemetryRpc : FBoxedRpc {
	TArray<char> DataBlob; // 0x10
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

struct FShipSizeRequirementData {
	UShipSize* ShipSize; // 0x0
	int32_t OpenCrewMemberCount; // 0x8
	FString OpenCrewCountRetrivalString; // 0x10
};

struct FEventCompanyProgressUpdateNotification {
	FCompanyReputationProgressModel CurrentProgress; // 0x0
	FCompanyReputationProgressModel PreviousProgress; // 0x28
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FPostReviveLocomotionActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FEventHealthChanged {
	FHealthChange ChangePayload; // 0x0
	bool IsLocalPrediction; // 0x40
	bool IsRepetitionOfPrediction; // 0x41
};

struct FFireRequest {
	AActor* Instigator; // 0x0
	FRemoteProjectileAim RemoteAimData; // 0x10
	TArray<FHitResult> HitResults; // 0x70
	FGuid TelemetryAttackId; // 0x80
};

struct FQuestInfo {
	FGuid QuestId; // 0x0
	FString Name; // 0x10
	EQuestStatus Status; // 0x20
	EQuestType Type; // 0x21
};

struct FCommoditySourceMetaWrapper : FItemMetaBase {
	FName NPCIdentifier; // 0x18
};

struct FEventFishingRodFishingStateChanged {
	bool IsInFishingState; // 0x0
	bool IsFishHooked; // 0x1
};

struct FUndoRepairActionStateSerialisableData : FActionStateSerialisableData {
	bool SuccessfulUndo; // 0x30
};

struct FMapTableCanvasDetails {
	TArray<FCanvasWorldMapBackgroundItems> BackgroundDetails; // 0x0
	TArray<FCanvasWorldMapForegroundItems> ForegroundDetails; // 0x10
	TArray<FCanvasWorldMapSeaAreaItems> SeaDetails; // 0x20
};

struct FRewardId {
	FName RewardId; // 0x0
};

struct FMovieSceneAudioSectionTemplateData {
	USoundBase* Sound; // 0x0
	float AudioStartOffset; // 0x8
	FFloatRange AudioRange; // 0xc
	FRichCurve AudioPitchMultiplierCurve; // 0x20
	FRichCurve AudioVolumeCurve; // 0x98
	int32_t RowIndex; // 0x110
};

struct FGameplayEffectCustomExecutionOutput {
	TArray<FGameplayModifierEvaluatedData> OutputModifiers; // 0x0
	char bTriggerConditionalGameplayEffects : 1; // 0x10
	char bHandledStackCountManually : 1; // 0x10
	char bHandledGameplayCuesManually : 1; // 0x10
};

struct FWorldContext {
	FURL LastURL; // 0xe0
	FURL LastRemoteURL; // 0x150
	UPendingNetGame* PendingNetGame; // 0x1c0
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1c8
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1e8
	TArray<UObjectReferencer*> ObjectReferencers; // 0x210
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x220
	UGameViewportClient* GameViewport; // 0x230
	UGameInstance* OwningGameInstance; // 0x238
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x240
};

struct FEventSubmergedStateChanged {
	ESubmergedState SubmergedState; // 0x0
};

struct FTaleQuestProgressTelemetryEvent {
	FString ProgressDescription; // 0x0
	TArray<FString> Context; // 0x10
};

struct FShroudBreakerDeactivatedEvent {
	FGuid ShroudBreakerId; // 0x0
};

struct FShipSizePartCustomizationInfo {
	UShipSize* ShipSize; // 0x0
	TArray<FShipPartCustomizationInfo> Customizations; // 0x8
};

struct FServerCrewChangedVisibilityStateEvent {
	FGuid CrewId; // 0x0
	EMatchmakingVisibilityState CrewVisibilityState; // 0x10
};

struct FDamageTypeToAudio {
	UDamagerType* DamagerType; // 0x0
	FName AudioState; // 0x8
	UWwiseEvent* StartAudioEvent; // 0x10
	UWwiseEvent* EndAudioEvent; // 0x18
	float Duration; // 0x20
};

struct FAthenaAnimationLadderAnimData {
	UAnimSequence* Climb; // 0x0
	UAnimSequence* Slide; // 0x8
	UBlendSpace1D* SlideStop; // 0x10
	FAthenaAnimationLadderTransitionsAnimData Mast; // 0x18
	FAthenaAnimationLadderTransitionsAnimData ShipSide; // 0x40
};

struct FSessionCreationRequestModel {
	FString PrivateServerId; // 0x0
	TArray<FSessionCreationCrewModel> Crews; // 0x10
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FFeaturedPetCategory {
	UPetEntitlementBaseCategory* Category; // 0x0
	FName Feature; // 0x8
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
};

struct FContestCrewResult {
	FGuid CrewId; // 0x0
	uint32_t Score; // 0x10
};

struct FCloudVisualParameters {
	bool RenderInMainPass; // 0x0
	FVector ScalingVector; // 0x4
	FVector2D BillboardScale; // 0x10
	FVector2D BillboardRandomScale; // 0x18
	FVector2D BillboardRearCutOff; // 0x20
	FVector2D BillboardForeCutOff; // 0x28
	FVector2D BillboardSink; // 0x30
	float BillboardScaleAlphaDependence; // 0x38
	float BillboardRotationRate; // 0x3c
	float DistanceFadeExponent; // 0x40
	float TurbulenceScale; // 0x44
	float TurbulenceStrength; // 0x48
	float FluffCullDistance; // 0x4c
	UMaterialInterface* MaterialTemplatePointCloudSolid; // 0x50
	UMaterialInterface* MaterialTemplatePointCloudFluffy; // 0x58
	UMaterialInterface* MaterialTemplateStreetCloudSolid; // 0x60
	UMaterialInterface* MaterialTemplateStreetCloudFluffy; // 0x68
};

struct FLevelOfDamageProperties {
	float LeakAmount; // 0x0
	float RepairTime; // 0x4
	float UndoRepairTime; // 0x8
	float NonOwningCrewUndoRepairTime; // 0xc
	UMaterialInterface* HoleDecalMaterial; // 0x10
	FTransform HoleDecalComponentTransform; // 0x20
	FVector ParticleSystemComponentLocation; // 0x50
	float InternalWaterSamplePositionTopOffset; // 0x5c
	float InternalWaterSamplePositionBottomOffset; // 0x60
	UParticleSystem* ParticleSystem_WaterLeakAboveWater; // 0x68
	UParticleSystem* ParticleSystem_WaterLeakBelowWater; // 0x70
	UParticleSystem* ParticleSystem_RepairLeakAboveWater; // 0x78
	UParticleSystem* ParticleSystem_RepairLeakBelowWater; // 0x80
	UParticleSystem* ParticleSystem_SplashOnInternalWaterSurface; // 0x88
};

struct FEventAITriggerCustomAnimationSequence {
	FName SequenceName; // 0x0
};

struct FEntitlementsFailedEvent {
	FString Message; // 0x0
};

struct FDigRequestInformation {
	UWwiseEvent* RevealSFX; // 0x0
};

struct FWaitingToSpawnActionStateConstructionInfo : FActorActionStateConstructionInfo {
	AActor* StartSpot; // 0x30
	int32_t StreamOutLevel; // 0x38
	int32_t StreamInLevel; // 0x3c
	ETeleportActionStateReason Reason; // 0x40
	bool ReceiveLoadout; // 0x41
	bool ReceiveEntitlement; // 0x42
	bool WaitForRelevancy; // 0x43
};

struct FLevelMadeVisibleTelemetryEvent : FLevelLoadCompletedTelemetryEvent {
	float DistancePlayerTravelledSinceLoadCompleted; // 0x40
	float TimeSinceLoadCompleted; // 0x44
};

struct FOceanCrawlerLocomotionAnimationDataStructure {
	UBlendSpace1D* LocomotionIntoAsBlendspace; // 0x0
	UAnimSequence* Idle; // 0x8
	UAnimSequence* LocomotionOutOf; // 0x10
	UBlendSpace1D* LocomotionOutOfAsBlendspace; // 0x18
	UBlendSpace* Locomotion; // 0x20
	float IntoDeadZone; // 0x28
	float OutOfDeadZone; // 0x2c
};

struct FArmoryItemLoadoutUpdatedEvent {
	TArray<FChestTabViewModel> ItemLoadout; // 0x0
};

struct FContentTypeSelectorPair {
	UContentTypeSelectionConditional* ContentTypeSelectorCondition; // 0x0
	UStorageContainerContentTypeSelector* ContentTypeSelector; // 0x8
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0x58
	FBoneReference TargetBone; // 0x64
	bool bCopyTranslation; // 0x70
	bool bCopyRotation; // 0x71
	bool bCopyScale; // 0x72
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FContestMapLayoutScoreInfo {
	FTreasureMapWidgetTexture ScoreInfoIcon; // 0x0
	FTreasureMapWidgetText ScoreInfoText; // 0x28
	EScoreReason ScoreReason; // 0x48
};

struct FStaticMeshVoteIndicator {
	int32_t VoteId; // 0x0
	UStaticMeshComponent* Mesh; // 0x8
};

struct FPromptEvaluation {
	EPromptEvaluatedType PromptType; // 0x0
	FPrioritisedPromptWithHandle Prompt; // 0x8
};

struct FSessionCreationCrewModel {
	FString CrewLeaderXuid; // 0x0
	TArray<FSessionCreationCrewMemberModel> CrewMembers; // 0x10
	ECrewSessionType SessionType; // 0x20
};

struct FFogBankManagerIslandNamesToKeepAwayFrom {
	FName IslandName; // 0x0
	float MinimumDistanceFromIslandInKm; // 0x8
};

struct FConditionalBasedOnBlackboardKey {
	bool UseCondition; // 0x0
	FBlackboardKeySelector BlackboardKey; // 0x8
	bool NegateCondition; // 0x30
};

struct FSpawnLaunchableShotRpc : FUseItemOnServerRpc {
	FTransform SpawnTransform; // 0x20
	ULaunchableShotActionComponent* Action; // 0x50
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x20
	FBox ElemBox; // 0x30
	FTransform Transform; // 0x50
};

struct FWeaponProjectile {
	FProjectileAim AimData; // 0xf0
	UObject* WeaponMesh; // 0x140
};

struct FUICompanySkin {
	EProgressStyle Style; // 0x0
	FString BackgroundImageUrl; // 0x8
	FString RibbonImageUrl; // 0x18
	int32_t ProgressStep; // 0x28
	TArray<FString> ProgressIconUrls; // 0x30
	FString ShopTopBannerUrl; // 0x40
	FString ShopBottomBannerUrl; // 0x50
	TArray<FUIRankSkin> Ranks; // 0x60
	FString ShopInfoUrl; // 0x70
};

struct FProgressUpdatedNotificationUIEvent {
	FProgressPoint Old; // 0x0
	FProgressPoint New; // 0x18
	FString RibbonImage; // 0x30
	FString BackgroundImage; // 0x40
	FText Title; // 0x50
	FText Body; // 0x88
	EProgressStyle Style; // 0xc0
	FString RankIncreaseAudioCue; // 0xc8
	FString RankIncreaseStopAudioCue; // 0xd8
	FString RankLevelUpAudioCue; // 0xe8
	FString RankTriggerAudioCue; // 0xf8
};

struct FStandardAnchorDynamicsParameters {
	float AnchorForce; // 0x0
	float VelocityDeadZoneThreshold; // 0x4
	UCurveFloat* UnaryWheelAngleBasedTorque; // 0x8
	UCurveFloat* ForwardSpeedBasedTorque; // 0x10
	float BaseHandbrakeTorque; // 0x18
	float TimeAfterAnchorDownToGrabWantedYaw; // 0x1c
	UCurveFloat* YawDeltaVsCorrectiveTorquePerKgMass; // 0x20
};

struct FLandmarkReaction {
	bool Enabled; // 0x0
	float RelevantRadiusInMetres; // 0x4
	TArray<ERiddleActions> ActionsThatTriggerThisReaction; // 0x8
	UWwiseEvent* GateCompletedAudioCue; // 0x18
	UWwiseEvent* GateCompletedMusicCue; // 0x20
	TArray<FLandmarkReactionKeyFrame> Events; // 0x28
};

struct FWwiseAudioGameStateSettings {
	FName AudioGameStateGroupName; // 0x0
	FName AudioGameStateFrontend; // 0x8
	FName AudioGameStateLoading; // 0x10
	FName AudioGameStateIngame; // 0x18
	TArray<FStringAssetReference> EventsToPlayOnLobbyStart; // 0x20
	TArray<FStringAssetReference> EventsToPlayOnLobbyEnd; // 0x30
	TArray<FStringAssetReference> EventsToPlayOnEngageStart; // 0x40
	TArray<FStringAssetReference> EventsToPlayOnEngageEnd; // 0x50
	TArray<FStringAssetReference> EventsToPlayOnLoadingStart; // 0x60
	TArray<FStringAssetReference> EventsToPlayOnLoadingEnd; // 0x70
	TArray<FStringAssetReference> EventsToPlayOnFrontEndOrLoadingStart; // 0x80
	TArray<FStringAssetReference> EventsToPlayOnFrontEndOrLoadingEnd; // 0x90
};

struct FAIBountySpawnerWave : FAIPersistentSpawnerWave {
	bool IsTarget; // 0x128
	bool IsUsingDialogue; // 0x129
	EBountyTargetGender Gender; // 0x12a
	EBountyTargetRank Rank; // 0x12b
	UPostBountyAIPawnSpawnedAction* PostSpawnAction; // 0x130
	UItemDesc* BountyReward; // 0x170
	TWeakObjectPtr<UItemSpawnData> BountyRewardSpawnData; // 0x178
};

struct FEventPlayerLoggedIn {
	AOnlineAthenaPlayerController* OnlineAthenaPlayerController; // 0x0
};

struct FTelemetryFragmentListenerHandle {
	UScriptStruct* FragmentType; // 0x8
};

struct FTunnelOfTheDamnedBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	FGuid TunnelInstanceId; // 0x0
};

struct FEventFaunaAnimationSpecial {
	bool LoopAnimation; // 0x0
};

struct FSceneDialogueStructure {
	FText LocalisableName; // 0x0
	FText Text; // 0x38
	ENPCChatType ChatType; // 0x70
	float DelayAfter; // 0x74
};

struct FAnimNode_HIKReach : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float ReachT; // 0x4c
	float ReachR; // 0x50
	FVector Translation; // 0x54
	FQuat Orientation; // 0x60
	EHIKEffector Effector; // 0x70
	EHIKEffectorSpace EffectorSpace; // 0x71
	FName ParentBone; // 0x74
};

struct FLoadableComponentState {
	ELoadableState LoadableState; // 0x0
	UObject* LoadedItem; // 0x8
};

struct FPlayerHealthChangeTelemetryEvent {
	FGuid AttackId; // 0x0
	float CurrentHealth; // 0x10
	float PreviousHealth; // 0x14
	float HealthDelta; // 0x18
	EHealthChangedReason Reason; // 0x1c
	uint32_t PossessCount; // 0x20
	double SecondsSinceSpawned; // 0x28
};

struct FServerDeveloperTelemetryEvent : FDeveloperTelemetryPayload {
	FString EventTag; // 0x0
	FJsonObjectWrapper Json; // 0x10
};

struct FFireExtinguishedEvent {
	FVector ExtinguishLocation; // 0x0
};

struct FKey {
	FName KeyName; // 0x0
};

struct FGameplayAbilitySpecHandleAndPredictionKey {
	FGameplayAbilitySpecHandle AbilityHandle; // 0x0
	int32_t PredictionKeyAtCreation; // 0x4
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

struct FVoyageCancelled {
	FText Title; // 0x0
};

struct FStringClassReference : FStringAssetReference {
	FString AssetLongPathname; // 0x0
};

struct FCrewCancelledPrimaryVoyageEvent {
	FGuid CrewId; // 0x0
};

struct FMovieSceneSectionParameters {
	float StartOffset; // 0x0
	float TimeScale; // 0x4
	float PrerollTime; // 0x8
	float PostrollTime; // 0xc
};

struct FClusterNode {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FNotesRemoteServiceNoteDetailModel {
	FGuid Id; // 0x0
	FString NoteType; // 0x10
	FString Title; // 0x20
	FString Note; // 0x30
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FEventStatusScreenEffectStarted {
	FName MaterialParamName; // 0x0
	FName TintParamName; // 0x8
	FLinearColor TintColor; // 0x10
	float TargetEffectStrength; // 0x20
	float FadeInAcceleration; // 0x24
};

struct FOar {
	FOarParams OarParams; // 0x0
};

struct FEventAIBountySpawnerWaveCompleted {
	FName IslandName; // 0x0
	FGuid CrewId; // 0x8
	int32_t WaveIndex; // 0x18
	int32_t TotalWaves; // 0x1c
	AActor* InstigatorOfFinalAIPawnDeath; // 0x20
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FEventHitReactAnimationRequested {
	FVector HitNormal; // 0x0
	FVector HitVelocity; // 0xc
	ECharacterHitReactionAnimType ReactionAnimType; // 0x18
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FAISpawnContextData {
	FName Name; // 0x0
	UAISpawnContextId* Id; // 0x8
};

struct FTutorialStepUseMap : FTutorialStep {
	AWieldableItem* TutorialMap; // 0x168
};

struct FAthenaAnimationShopInteractionParams {
	TArray<FAthenaAnimationShopInteractionAnimations> AllLoadedInteractionAnimations; // 0x0
	UAnimSequence* IntoAnimToPlay; // 0x10
	UAnimSequence* LoopAnimToPlay; // 0x18
	UAnimSequence* OutOfAnimToPlay; // 0x20
	bool Active; // 0x28
};

struct FShipCustomizationChestShipCustomizationEntitlementsUpdatedEvent {
	TArray<FChestEntitlementViewModel> Entitlements; // 0x0
};

struct FAthenaAICharacterCannonTargetingParams {
	TArray<FAthenaAICharacterCannonTarget> Params; // 0x0
};

struct FKrakenHeadHitReactAnimations {
	float Weight; // 0x0
	UAnimSequence* HitReactAnimation; // 0x8
};

struct FPlayerItemAddToContainerTelemetryEvent {
	FString ContainerId; // 0x0
	FString ItemType; // 0x10
	int32_t NumberOfItemsInContainer; // 0x20
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FPioneerObjectiveCompleteNetworkEvent : FNetworkEventStruct {
	bool Granted; // 0x10
};

struct FKrakenShipHittingBehaviourParamsCollection {
	TArray<UKrakenShipHittingBehaviourParamsDataAsset*> Params; // 0x0
};

struct FAttributeBasedFloat {
	FScalableFloat Coefficient; // 0x0
	FScalableFloat PreMultiplyAdditiveValue; // 0x20
	FScalableFloat PostMultiplyAdditiveValue; // 0x40
	FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60
	FCurveTableRowHandle AttributeCurve; // 0x70
	EAttributeBasedFloatCalculationType AttributeCalculationType; // 0x80
	FGameplayTagContainer SourceTagFilter; // 0x88
	FGameplayTagContainer TargetTagFilter; // 0xb0
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FGlobalEventSubscriptionData {
	TArray<FName> EventIds; // 0x0
	bool Enable; // 0x10
};

struct FBoobyTrapSpawnerRankEntry {
	int32_t Rank; // 0x0
	float ChanceOfBeingBoobyTrapped; // 0x4
	TArray<FWeightedAIBoobyTrapSpawner> WeightedSpawners; // 0x8
};

struct FSeasonGoalCompletionMessage {
	FPirateIdentity Pirate; // 0x0
	FGuid SeasonId; // 0x78
	FGuid GoalId; // 0x88
	ESeasonGoalType GoalType; // 0x98
	FGuid GoalGroupId; // 0x9c
};

struct FClueSiteTypeSupportedDescribedByEntry {
	UClueSiteType* SiteType; // 0x0
	TArray<FWeightedClueDescriptor> SupportedDescriptors; // 0x8
};

struct FEventShipSailedDistance {
	AActor* Ship; // 0x0
	float DistanceSailedMetres; // 0x8
};

struct FTestTelemetryInheritanceBaseStruct {
	FString A; // 0x0
};

struct FConsumeEntitlementRequestFailedTelemetryEvent {
	EConsumeEntitlementFailureReason Reason; // 0x0
};

struct FPlayerActivityLifetimeRule {
	EPlayerActivityType ActivityType; // 0x0
	float ActivityDuration; // 0x4
	EPlayerActivityType ActivityToEnd; // 0x8
	uint8_t ActivityPriority; // 0x9
};

struct FSequenceResponseContainer {
	int32_t SequenceIndexToTrigger; // 0x0
	AActor* ResponseActor; // 0x8
};

struct FSetMapTypeOnRadialInventorySlot {
	int32_t SlotIndex; // 0x0
	EQuestMapIcon QuestMapIcon; // 0x4
	FString BackgroundImageUrl; // 0x8
};

struct FTinySharkWorldSettingsParams {
	bool TinySharkEnabled; // 0x0
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FEquipmentChestItemLoadoutUpdatedEvent {
	TArray<FChestTabViewModel> ItemLoadout; // 0x0
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	int32_t Index; // 0x8
	FRichCurve ParameterCurve; // 0x10
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x30
	TArray<float> DesiredAlphas; // 0x40
	bool bAdditiveNode; // 0x50
	bool bNormalizeAlpha; // 0x51
	FInputScaleBias AlphaScaleBias; // 0x54
};

struct FBlendedSubMeshSpecification {
	USkeletalMesh* Mesh; // 0x0
	float BaseMeshWeight; // 0x8
	TArray<UMeshPatchAsset*> MeshPatchAssets; // 0x10
	TArray<float> MeshPatchAssetWeights; // 0x20
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	TArray<FCompositeSubFont> SubTypefaces; // 0x10
};

struct FEncounterServiceParams {
	TArray<FEncounterServiceEntry> EncounterList; // 0x0
	int32_t MinEventsToTriggerPerCycle; // 0x10
	double SecondsToSpendTriggeringEventsPerCycle; // 0x18
};

struct FRevivedActionStateParams {
	float HealthRegained; // 0x0
	float ReviveDuration; // 0x4
	UWwiseEvent* ReviveGaspAudio; // 0x8
};

struct FGameplayAbilityActorInfo {
	TWeakObjectPtr<AActor> OwnerActor; // 0x8
	TWeakObjectPtr<AActor> AvatarActor; // 0x10
	TWeakObjectPtr<APlayerController> PlayerController; // 0x18
	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent; // 0x20
	TWeakObjectPtr<UAnimInstance> AnimInstance; // 0x28
	TWeakObjectPtr<UMovementComponent> MovementComponent; // 0x30
};

struct FPetPartSizeMapping {
	EPetSize PetSize; // 0x0
	float PetScale; // 0x4
};

struct FPlayerCompanyProgress {
	FName CompanyId; // 0x0
	uint32_t Level; // 0x8
	uint32_t Xp; // 0xc
	uint32_t XpRequiredToAttain; // 0x10
	uint32_t Rank; // 0x14
	FString Sig; // 0x18
};

struct FClientNPCDialogOptionSelectedTelemetryEvent {
	FGuid NPCInteractionSessionId; // 0x0
	FString NPCDialogueTreeDataAsset; // 0x10
	int32_t DialogIndex; // 0x20
	int32_t OptionChosenIndex; // 0x24
};

struct FFireParticleSpawnData {
	float MaximumLODDistance; // 0x0
	float SpawnInterval; // 0x4
};

struct FConditionalAISpawnOverride {
	UAISpawnOverrideCondition* Condition; // 0x0
	FAISpawnOverride Override; // 0x8
};

struct FEmissaryEncounteredAIShipEvent {
	FName CompanyName; // 0x0
};

struct FPetChestPetNameUpdatedEvent {
	FString PetName; // 0x0
};

struct FMapRadialIconData {
	FStringAssetReference AssetReference; // 0x0
	float Rotation; // 0x10
};

struct FSwallowedByKrakenActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr Tentacle; // 0x30
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x18
	float SectionStartTime; // 0x38
};

struct FNavigationDesc {
	ENavigationAction Action; // 0x0
	FGuid Id; // 0x4
};

struct FLocText {
	FString Namespace; // 0x0
	FString Key; // 0x10
	FString LocalizedText; // 0x20
};

struct FSurfaceDigHole {
	EPhysicalSurface SurfaceType; // 0x0
	AShovelHole* DigHoleClass; // 0x8
	float DigAINoiseRange; // 0x10
};

struct FAthenaAnimationActiveOneShotAnimationStruct {
	UAnimSequence* Action; // 0x0
	UBlendSpace1D* ActionPitchOverride; // 0x8
	UBlendSpace* ActionLocomotion; // 0x10
	bool UsePitchOverride; // 0x18
	bool LocomotingWithPitchOverrideDisabled; // 0x19
	bool IdleWithPitchOverrideDisabled; // 0x1a
};

struct FDestroyActorData {
	int32_t ActorNetID; // 0x0
};

struct FIPGBodyShapes {
	TArray<FIPGBodyShape> Male; // 0x0
	TArray<FIPGBodyShape> Female; // 0x10
};

struct FImpactProjectileData {
	UImpactProjectileId* ProjectileId; // 0x0
	TArray<FImpactSurfaceData> SurfaceList; // 0x8
};

struct FDeactivateHatchEvent {
	FName EventID; // 0x0
};

struct FQuestVarLocationData : FQuestVariable {
	FName ParamName; // 0x8
};

struct FRequestShipCustomizationChestUnequipShipCustomizationEvent {
	FString ItemDesc; // 0x0
};

struct FHideInObjectActionStateParams : FControlObjectActionStateParams {
	TArray<EHealthChangedReason> PreventedHealthChanges; // 0x18
};

struct FAIPartId {
	FName PartId; // 0x0
};

struct FPirateInventoryItemModel {
	FString InstanceId; // 0x0
	FString CatalogItemId; // 0x10
	FString Signature; // 0x20
};

struct FOceanCrawlerAnimationDataStructure {
	FOceanCrawlerLocomotionAnimationDataStructure LocomotionData; // 0x0
	UCustomAnimationMontageDefinitionListingDataAsset* MontageData; // 0x30
	UAthenaAnimationWeaponDataAsset* AttackAnimations; // 0x38
	FHitReactionAnimationData HitReactionData; // 0x40
	FOceanCrawlerSporeBreathAnimationData SporeBreathData; // 0x48
	TArray<FCustomAnimationMontageId> AttackInterruptMontages; // 0x60
	FCustomAnimationMontageId DeathMontageId; // 0x70
	FCustomAnimationMontageId SpawnMontageId; // 0x78
	FCustomAnimationMontageId SpawnOnShipMontageId; // 0x80
	FCustomAnimationMontageId SpawnBoardedMontageId; // 0x88
};

struct FCriticalActorDelegateData {
	AActor* CriticalActor; // 0x0
	FText FailureMessage; // 0x8
};

struct FCreatePirateRequestEvent {
	FUniqueNetIdRepl UserId; // 0x0
	FGuid RequestID; // 0x18
	FPirateDescription Description; // 0x28
};

struct FWeightedTreasureChestDesc {
	float Weight; // 0x0
	FName Feature; // 0x4
	UItemDesc* Desc; // 0x10
};

struct FCompanyLevelDefinition {
	uint32_t Level; // 0x0
	uint32_t XpRequiredToAttain; // 0x4
};

struct FAthenaAnimationItemListingMappingType {
	TArray<FAthenaAnimationItemListingMappings> FirstPersonListing; // 0x0
	TArray<FAthenaAnimationItemListingMappings> ThirdPersonListing; // 0x10
};

struct FSwitchMechanismTriggerPosition {
	EMechanismTriggerState MechanismState; // 0x0
	FTransform PivotTransform; // 0x10
	UWwiseEvent* SwitchStartTransitionAudioEvent; // 0x40
	UWwiseEvent* SwitchStopTransitionAudioEvent; // 0x48
};

struct FDrawDebugItemSector {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	float RotationAngle; // 0xc
	FVector Centre; // 0x10
	float SectorAngle; // 0x1c
	float Radius; // 0x20
	FColor Colour; // 0x24
	FVector ZeroAngleVector; // 0x28
	FVector RotationAxis; // 0x34
	float SubAngles; // 0x40
	float Thickness; // 0x44
};

struct FAIEncounterAndWaveSettingsOverride {
	UAIEncounterSettings* EncounterSettings; // 0x0
	UAISpawnWaveSequenceRankProgression* SpawnWaveProgression; // 0x8
	float Chance; // 0x10
	FName FeatureToggle; // 0x14
};

struct FClothingChestClothingLoadoutUpdatedEvent {
	TArray<FChestTabViewModel> Loadout; // 0x0
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FFootstepLocation {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FPlayerExitsShopTelemetryEvent {
	FString ShopLocation; // 0x0
	FString VisitStartDate; // 0x10
	uint32_t VisitDuration; // 0x20
	FString ShopName; // 0x28
	FString CatalogName; // 0x38
	FGuid CatalogId; // 0x48
	bool ForcedExit; // 0x58
};

struct FArenaSuspensionState {
	bool IsUserSuspended; // 0x0
	int32_t SuspensionTimeRemainingInMinutes; // 0x4
};

struct FRuntimeVectorCurve {
	FRichCurve FloatCurves[0x3]; // 0x0
	UCurveVector* ExternalCurve; // 0x168
};

struct FEventSetJIPFishingAnimationState {
	EFishingState State; // 0x0
};

struct FAthenaAnimationFirstPersonAnimatic {
	char IsFirstPersonAnimaticActive : 1; // 0x0
	char IsFirstPersonCustomAnimatic : 1; // 0x0
	UAnimSequence* FirstPersonAnimationToPlay; // 0x8
	UFirstPersonAnimaticList* FirstPersonAnimaticList; // 0x10
};

struct FAISpawnTypeParams {
	UClass* AIClass; // 0x0
	FStringAssetReference SkillsetOverride; // 0x20
	FStringAssetReference LoadoutOverride; // 0x30
	FStringAssetReference FormOverride; // 0x40
	FStringAssetReference AmmoOverride; // 0x50
	UClass* ItemDropComponentClassOverride; // 0x60
	UAIClassId* AIClassIdOverride; // 0x80
	FStringAssetReference TeamColorOverride; // 0x88
	FEncounterParams EncounterTrackingParams; // 0x98
	FName DioramaRole; // 0xa4
	FText LocalisableName; // 0xb0
};

struct FRequestClearClothingCategoryPiratePreviewEvent {
	TArray<UClothingCategory*> ClothingCategories; // 0x0
};

struct FSetHealthChangeLockData {
	int32_t ActorId; // 0x0
	EHealthChangedReason Reason; // 0x4
	bool EnableLock; // 0x5
};

struct FKrakenAnimatedTentacleTransitionAnimation {
	UKrakenAnimatedTentacleState* FromState; // 0x0
	float BranchAnimationTimeRemaining; // 0x8
	TArray<UAnimSequence*> TransitionAnimations; // 0x10
};

struct FActiveStatusEffect {
	TArray<UStatusBase*> SourceStatus; // 0x0
	FStatusDescriptor Descriptor; // 0x10
	TArray<UStatusResponse*> ResponseTemplates; // 0x18
	TArray<UStatusResponse*> InstancedResponses; // 0x28
	bool ResponsesAreActive; // 0x38
};

struct FStoreRedemptionStateFailedTelemetryEvent {
	EStoreAsyncResult Status; // 0x0
};

struct FItemSpawnTransformWithRandomQuantity {
	FTransform Transform; // 0x0
	UWeightedItemDescSpawnDataAssetWithRandomQuantity* ReferencedSpawnDistributionAssetWithRandomQuantity; // 0x30
	float SpawnRadius; // 0x38
};

struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget {
	float MinDamageTargetScore; // 0x0
	float MaxDamageTargetScore; // 0x4
	float DamageForMinDamageTargetScore; // 0x8
	float DamageForMaxDamageTargetScore; // 0xc
	float RateToDecayDamagedFromTarget; // 0x10
};

struct FNPCAnimationContinuousCycle {
	FNPCAnimationSequence In; // 0x0
	TArray<FNPCAnimationSequence> Loop; // 0x10
	FNPCAnimationSequence Out; // 0x20
};

struct FServerProjectileImpactHitRegInfoTelemetryEvent {
	FGuid AttackId; // 0x0
	FString ProjectileId; // 0x10
	FString DamagerTypeId; // 0x20
	FVector HitLocation; // 0x30
	FString InstigatorObjectId; // 0x40
	FString InstigatorObjectType; // 0x50
	FString InstigatorActorName; // 0x60
};

struct FTreasureMapWidgetTexture : FTreasureMapWidget {
	UTexture* Image; // 0x18
	float RelativeHeightModifier; // 0x20
	bool FlipX; // 0x24
};

struct FMaterialManipulationSettings {
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x0
	TArray<FTextureParameterValue> TextureParameterValues; // 0x10
	TArray<FVectorParameterValue> VectorParameterValues; // 0x20
};

struct FEventPlayerControllerUnPossess {
	APawn* Pawn; // 0x0
};

struct FVomitProjectiles {
	AVomitProjectile* VomitProjectileClass; // 0x0
	FName SocketName; // 0x8
	float Speed; // 0x10
	float AdditionalLiftAngle; // 0x14
	float Radius; // 0x18
	float ImpactDelay; // 0x1c
	float ImpactCutoff; // 0x20
	int32_t ImpactsMin; // 0x24
	int32_t ImpactsMax; // 0x28
	ECollisionChannel ChannelToIgnoreInShip; // 0x2c
	bool DebugLaunchClientProjectiles; // 0x2d
};

struct FAIShipDamagedCustomServerEvent : FGlobalCustomServerEvent {
	FString AIShipId; // 0x18
	float AIShipWaterLevel; // 0x28
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x30
};

struct FTargetItemDropProgressionPair {
	FStringAssetReference CrewItemSpawn; // 0x0
	FStringAssetReference CaptainItemSpawn; // 0x10
};

struct FUpdateWalletBalanceHUDEvent {
	TArray<FHUDWalletBalance> Balances; // 0x0
};

struct FEventInGameUIFocusRequest {
	bool ShouldFocusUI; // 0x0
};

struct FCrewMember {
	FString UserId; // 0x0
};

struct FQuestVariableActorArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FContestStartEvent {
	FString Message; // 0x0
	FString CrewIcon; // 0x10
	FString CrewName; // 0x20
	TArray<FString> CrewMembers; // 0x30
	float HoldDuration; // 0x40
};

struct FCursedSailsBattleParams {
	FText Name; // 0x0
	FText SkellyCrewName; // 0x38
	ECannonballIconType CannonBallType; // 0x70
	ESkellyFormIconType SkellyType; // 0x71
	UAIShipEncounterDesc* EncounterDescription; // 0x78
};

struct FAthenaAnimationFacialAnimData {
	int32_t FacialIdleAnimationIndex0; // 0x0
	int32_t FacialIdleAnimationIndex1; // 0x4
	TArray<UAnimSequence*> IdleAnimations; // 0x8
	UAnimSequence* Death; // 0x18
	UAnimSequence* HitReact; // 0x20
	FAthenaAnimationControllableFacialAnimData Controllables; // 0x28
	UAnimMontage* Sick; // 0x58
	UAnimSequence* Cough; // 0x60
	UAnimSequence* Talk; // 0x68
	UAnimSequence* UnderwaterIdle; // 0x70
	UAnimMontage* CurrentFacialMontage; // 0x78
	UAnimMontage* PlayingFacialMontage; // 0x80
	EFacialPriority CurrentFacialPriority; // 0x88
};

struct FTutorialStepCycleWeapons : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FUndoRepairActionStateParams {
	float MountTime; // 0x0
};

struct FEventCharacterStartedOneShotUse {
	UNotificationInputId* InputID; // 0x0
};

struct FEventEncounterBase {
	FGuid EncounterId; // 0x0
	AActor* EncounterActor; // 0x10
	EEncounterType EncounterType; // 0x18
	float EncounterRadiusSquared; // 0x1c
};

struct FVoyageProposalDiscardEvent {
	FString ProposalDesc; // 0x0
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FMastSailAngleBecameStationaryEvent {
	float Angle; // 0x0
};

struct FCargoRunReward {
	TArray<FRewardId> OnTimeRewards; // 0x0
	TArray<FRewardId> LateRewards; // 0x10
};

struct FSharedShovelParams {
	FShovelSurfaceDigType DigSurfaceDigType; // 0x0
	EPhysicalSurface SandSurfaceType; // 0x10
	EPhysicalSurface WetSandSurfaceType; // 0x11
	float MaxHeightDifferenceToNotBeConsideredWetSand; // 0x14
	FVector DigPosOffsetFromPlayerPos; // 0x18
	float SurfaceTypeRaycastLength; // 0x24
	float MaxSurfaceAngleForDig; // 0x28
	float InitialSphereCastRadiusForSuccessfulDig; // 0x2c
	ECollisionChannel ItemProxyCollisionChannel; // 0x30
	float SphereRadiusForItemProxySweep; // 0x34
	float RequiredObstacleFreeRadiusForSuccessfulDig; // 0x38
	float ObstacleCheckStartOffsetZFromSphereTestPos; // 0x3c
	int32_t NumSamplesForBlockingSurfacesTest; // 0x40
	float MaxWaterDepthToStartSuccessfulDig; // 0x44
	ECollisionChannel HitTestTraceChannel; // 0x48
	float MinPlanarTestRadius; // 0x4c
	int32_t NumSamplesForPlanarityTest; // 0x50
	float MaxBumpinessForPlanarityTestInCm; // 0x54
	float AssumedPlayerWaistHeight; // 0x58
	bool bDrawDebug; // 0x5c
};

struct FPlayerDeemedInactiveTelemetryEvent {
	FPirateIdentity PirateIdentity; // 0x0
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x250
	FSlateBrush MidVolumeImage; // 0x2e0
	FSlateBrush LowVolumeImage; // 0x370
	FSlateBrush NoVolumeImage; // 0x400
	FSlateBrush MutedImage; // 0x490
};

struct FReplicatedTimespan {
	int64_t Ticks; // 0x0
};

struct FPuzzleStatueConfigurationPosition {
	FTransform PivotTransform; // 0x0
	UWwiseEvent* PositionAudioEvent; // 0x30
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FAnimNode_HIKTest : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float Param; // 0x4c
	float Intensity; // 0x50
};

struct FCrewCompletedPrimaryVoyageEvent {
	FGuid CrewId; // 0x0
	bool DoNotNotifyParticipantsOnVoyageComplete; // 0x10
};

struct FJumpHeldAdditiveBlendWeight {
	TArray<FHeldStateSpecificBlendWeight> HeldStateSpecificBlendWeights; // 0x0
	float DefaultBlendWeight; // 0x10
};

struct FAthenaAnimationSkeletonAIFastPathData {
	char FullBodyAISensingCanActivate : 1; // 0x0
	char ArmOverlayAISensingCanActivate : 1; // 0x0
	char AIShadowStunActive : 1; // 0x0
	char CanBeKnockedBack : 1; // 0x0
	char AICanFlee : 1; // 0x0
	char AICanEmote : 1; // 0x0
	char AIControllingCaptainWheel : 1; // 0x0
};

struct FEmblemUnlockedMessage {
	FPirateIdentity PirateIdentity; // 0x0
	FGuid EmblemId; // 0x78
};

struct FSeasonNotificationContent {
	FStringAssetReference GlowIcon; // 0x0
	FStringAssetReference Icon; // 0x10
	FString SfxEventName; // 0x20
	FString EventName; // 0x30
	FString SwitchName; // 0x40
	FString SwitchValue; // 0x50
	float ToastHoldDuration; // 0x60
};

struct FAnimNode_HIKPlant : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float HipsLevel; // 0x4c
	float ProjectionDistance; // 0x50
	bool PullFeetInsteadOfAnkles; // 0x54
	bool IsQuadruped; // 0x55
	float ChestLevel; // 0x58
	bool PullHandsInsteadOfWrists; // 0x5c
};

struct FFaunaAnimationStartledStructure {
	UAnimSequence* StartledLowAgitation; // 0x0
	UAnimSequence* StartledHighAgitation; // 0x8
	UAnimSequence* StartledOneShot; // 0x10
};

struct FPurchaseRequestSuccessResponse {
	FGuid TransactionId; // 0x0
	TArray<FString> PurchasedItems; // 0x10
};

struct FRejectGrenadeThrowRpc : FBoxedRpc {
	AGrenade* Grenade; // 0x10
};

struct FFeatureToggledStatusResponseList {
	FName Feature; // 0x0
	TArray<UStatusResponseAsset*> ResponseAssets; // 0x8
};

struct FShipwreckHullAudioData {
	FWwiseEmitter Emitter; // 0x0
	UWwiseObjectPoolWrapper* WwiseObjectPoolWrapper; // 0x20
	UWwiseEvent* WwiseEvent; // 0x28
	FName Name; // 0x30
	FVector Offset; // 0x38
};

struct FAIStrategyVulnerabilityData {
	UAIStrategyId* Strategy; // 0x0
	TArray<EHealthChangedReason> PreventedHealthChanges; // 0x8
};

struct FEventFrontendSetSceneVisibility {
	bool Visible; // 0x0
};

struct FServerMigrationRefusedEvent {
	FGuid MigrationId; // 0x0
	FGuid CrewId; // 0x10
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FCoherentToWwiseEventDataAssetEntry {
	FString CueKey; // 0x0
	UWwiseEvent* AudioEvent; // 0x10
};

struct FLPVCascadeSettings {
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
	char bOverride_NumberOfPropagationSteps : 1; // 0x1
	char bFreezeLPVUpdate : 1; // 0x1
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
	int32_t LPVNumberOfPropagationSteps; // 0x38
	FTransform LPVWorldRef; // 0x40
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FPlayerEntitlementsCompact {
	EEntitlementStatus Status; // 0x0
	TArray<UEntitlementDesc*> Loose; // 0x28
};

struct FPointLightTemplate : FBaseLightTemplate {
	FPointLightData PointLightData; // 0x80
};

struct FShipSizePartCustomizationNameData {
	UShipSize* ShipSize; // 0x0
	TArray<FName> PartNames; // 0x8
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FShantyInstrumentData {
	EMusicalInstrumentType InstrumentType; // 0x0
	UWwiseEvent* PlayLead; // 0x8
	UWwiseEvent* PlayAccompaniment; // 0x10
	UWwiseEvent* StopLead; // 0x18
	UWwiseEvent* StopAccompaniment; // 0x20
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

struct FQuestVariableItemInfo : FQuestVariable {
	FName ParamName; // 0x8
};

struct FShaderQualityOverridesListItem {
	FString RangeName; // 0x0
	UBoolProperty* QualityProperty; // 0x10
	UShaderPlatformQualitySettings* SettingContainer; // 0x18
};

struct FAthenaAnimationSkeletonFleeInGraph {
	UAnimSequence* TurnLeft; // 0x0
	UAnimSequence* TurnRight; // 0x8
	UBlendSpace* LocomotionBase; // 0x10
	UBlendSpace* LocomotionVariant; // 0x18
	TArray<UBlendSpace*> LocomotionVariantSelection; // 0x20
	int32_t PrecentageChanceOfVariantOccuring; // 0x30
};

struct FAthenaAIControllerHealthCustomisation {
	bool OverrideMaxHealth; // 0x0
	bool OverrideMaxHealthWithMinMax; // 0x1
	float MinHealth; // 0x4
	float MaxHealth; // 0x8
};

struct FEventFaunaAnimationIsCaged {
	bool IsCaged; // 0x0
};

struct FPlayerGeneratedMapDisplayData {
	FGuid CrewId; // 0x0
	int32_t IslandIndex; // 0x10
	int32_t NumXs; // 0x14
	int32_t MapCreatedByPlayerNameOverrideIndex; // 0x18
	FGuid MapId; // 0x1c
	FString MapCreatedByPlayerName; // 0x30
};

struct FMysteriousNoteInfo {
	FGuid NoteId; // 0x0
	bool NoteRead; // 0x10
	bool ShowNoteAnimation; // 0x11
};

struct FProcessableActions {
	EActionQueueEntryStatus CurrentStatus; // 0x0
	double StartTime; // 0x8
	int32_t ActionIndex; // 0x10
};

struct FFishAnimationSequences {
	FFishAnimationSwimmingLoops FishAnimationSwimmingLoops; // 0x0
	UAnimMontage* FishAnimationOnHookFighting; // 0x60
	UAnimMontage* FishAnimationOnHookTired; // 0x68
	UAnimMontage* FishAnimationOnHookCaught; // 0x70
	UAnimMontage* FishAnimationOnHookCaughtIdle; // 0x78
	UAnimMontage* FishAnimationEscaping; // 0x80
};

struct FRelativeSpawnLocationGeneratorParams {
	TArray<FWeightedSpawnDirection> SpawnDirections; // 0x0
};

struct FStandardHullDragDynamicsParameters {
	float ForwardDragForcePerMPS; // 0x0
	float BackwardsDragForcePerMPS; // 0x4
	float SidewaysDragCounterForcePerMPS; // 0x8
	float MaxSailFractionToCountAsFullyUpForDragCalc; // 0xc
	float ForwardDragWhenBeached; // 0x10
	float WaterZoneDragAmp; // 0x14
};

struct FCustomPlayersAITrackerData {
	UAIPlayerTracker* Tracker; // 0x0
};

struct FStateChangeCoordination {
	ACoordinatedCutsceneTrigger* OtherCutscene; // 0x0
	ECutsceneActivatonState OtherCutsceneStateChangeCondition; // 0x8
	ECutsceneActivatonState CutsceneStateChangeResponse; // 0x9
};

struct FSirenEncounterData {
	UWorld* GameWorld; // 0x0
	UAIPerPlayerSpawner* SirenSpawner; // 0x8
	USimpleAIRegion* AIRegion; // 0x10
	UAIProximityPlayerTracker* ProximityPlayerTracker; // 0x18
	float ShutdownTime; // 0x20
	ESirenEncounterState SirenEncounterState; // 0x24
};

struct FStagingPlayerWelcomingPopup : FNetworkEventStruct {
	FGuid LiveryID; // 0x10
};

struct FEventPlayerStoppedSwimming {
	AActor* Player; // 0x0
};

struct FAthenaAnimationObjectActionContinuous {
	FAthenaAnimationObjectActionContinuousStruct MainContinuousActions; // 0x0
	FAthenaAnimationObjectActionContinuousStruct AlternateContinuousActions; // 0xa8
};

struct FTQStructGenEntry : FTQStructGenWeightedContainer {
	UTaleQuestDescAsset* TaleQuestDesc; // 0x10
	UPLQuestLocationDataBundle* LocationBundle; // 0x18
	bool LocationFiltering; // 0x20
	FVector2D AcceptableAreaLocation; // 0x24
	float AcceptableAreaRadius; // 0x2c
};

struct FFaunaTypeSettings {
	bool bGuaranteedSpawn; // 0x0
	int32_t FaunaTypeSpawnChance; // 0x4
	FWeightedProbabilityRange NumFaunaGroups; // 0x8
	FWeightedProbabilityRange NumFaunaPerGroup; // 0x28
	TArray<FWeightedAISpawnTypeParams> SpawnTypes; // 0x48
};

struct FShowTutorialNotificationUIEvent : FGenericNotificationUIEvent {
	TArray<FText> Text; // 0x0
	TArray<FString> Images; // 0x10
	FString Background; // 0x20
	TArray<FString> FlagIcons; // 0x30
	FGenericPopupAudioDescriptor Audio; // 0x40
	TArray<EStyleModifiers> StyleModifiers; // 0x80
	bool OnlyPlayAudio; // 0x90
	bool PlayAudio; // 0x91
	float HoldDuration; // 0x94
	int32_t Multiplier; // 0x98
};

struct FGoldInContainerData {
	FRewardId RewardIdentifier; // 0x0
	FVector Position; // 0x8
	FVector Scale; // 0x14
	UStaticMesh* GoldMesh; // 0x20
};

struct FKrakenPlayerGrabbingBehaviourParams : FKrakenTentacleBehaviourParams {
	float MinUnsuccessfulTargetTimeout; // 0xc0
	float MaxUnsuccessfulTargetTimeout; // 0xc4
	TArray<FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances; // 0xc8
	float MinTargetHoldingTime; // 0xd8
	float MaxTargetHoldingTime; // 0xdc
	float TargetThrowingSpeed; // 0xe0
};

struct FClientScheduleShutdownNetworkEvent : FNetworkEventStruct {
	int64_t ShutdownTimeTicks; // 0x10
};

struct FQuestVariableTinySharkExperience : FQuestVariable {
	FName ParamName; // 0x8
};

struct FLoadoutRepairFailedTelemetryEvent : FLoadoutRepairTelemetryEventBase {
	TArray<int32_t> CarouselSeeds; // 0x8
};

struct FEventWieldableItemSetIsWielded {
	AActor* Wielder; // 0x0
	bool bIsWielded; // 0x8
	bool bGettingDropped; // 0x9
	bool bIsUnstashing; // 0xa
};

struct FWeightedItemDescSpawnDataWithRandomQuantity : FWeightedItemDescSpawnData {
	FWeightedProbabilityRange ProbabilityRange; // 0x30
};

struct FAchievementUpdatedTelemetry {
	TArray<FAchievementUpdatedEvent> UpdatedAchievements; // 0x0
};

struct FPlayerStatusEffectActivatedTelemetryEvent {
	FGuid Id; // 0x0
	FName StatusName; // 0x10
};

struct FCurseShipCannonsEvent {
	float PitchAngle; // 0x0
	float YawAngle; // 0x4
	float BlendTime; // 0x8
};

struct FMastFallingProportionBecameStationaryEvent {
	float Proportion; // 0x0
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0x48
	FStructSerializerArrayTestStruct Arrays; // 0x88
};

struct FInputMontagePair {
	UNotificationInputId* InputID; // 0x0
	UAnimSequenceBase* Into; // 0x8
	UAnimSequenceBase* Loop; // 0x10
	UAnimSequenceBase* Outof; // 0x18
};

struct FPremiumStoreBundleItem : FShopOffer {
	bool EnablePurchase; // 0x1e0
	FPremiumStoreTimeLimited TimeLimited; // 0x1e1
	FString RealMoneyPrice; // 0x1e8
	FString LockedReason; // 0x1f8
};

struct FInAppPurchaseProductInfo {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DisplayName; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	FString CurrencyCode; // 0x50
	FString CurrencySymbol; // 0x60
	FString DecimalSeparator; // 0x70
	FString GroupingSeparator; // 0x80
	FString ReceiptData; // 0x90
};

struct FNetSubObjectPtr {
	FNetObjectPtr SubObject; // 0x0
};

struct FSinkingShipParams {
	float DragWhenGrindingToHalt; // 0x0
	float MinSpdToStopToBeforeLowering; // 0x4
	float LowerIntoWaterTime; // 0x8
	float TimeIntoLoweringToStartOcclusionZoneShrinkage; // 0xc
	float AngularDragDuringSinkingSequence; // 0x10
	float KeeledOverTime; // 0x14
	float TurnOffBuoyancyTime; // 0x18
	float FinalSinkingBuoyancy; // 0x1c
	float SinkingTimeUntilDestroy; // 0x20
	float ReduceWaterOcclusionZoneTime; // 0x24
	float ReduceWaterOcclusionZoneTimeHurryUp; // 0x28
	float TimeIntoKeelingOverToTeleportPlayer; // 0x2c
	float MinSampleSubmersionToConsiderInWater; // 0x30
	float MinPctSamplesRequiredSubmergedToBeAbleToSink; // 0x34
};

struct FItemPreviewCreatedEvent {
	FString PreviewURL; // 0x0
};

struct FQuickTransferTelemetryEvent {
	FString SrcClass; // 0x0
	FString DestClass; // 0x10
	float TransferTime; // 0x20
	int32_t NumTransferred; // 0x24
	bool Giving; // 0x28
};

struct FFireParticleSystem {
	UParticleSystemComponent* SpawnedParticleSystem; // 0x0
	FFireCellStateParticleTemplate ParticleTemplate; // 0x10
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x98
	FSlateBrush Pressed; // 0x128
	FSlateBrush Disabled; // 0x1b8
	FMargin NormalPadding; // 0x248
	FMargin PressedPadding; // 0x258
	FSlateSound PressedSlateSound; // 0x268
	FSlateSound HoveredSlateSound; // 0x280
	FName PressedSound; // 0x298
	FName HoveredSound; // 0x2a0
};

struct FTallTaleDebugInfo {
	TArray<FString> StepNames; // 0x0
	TArray<FString> VariableStringBlobs; // 0x10
};

struct FCategoryDefaultsUnit {
	TArray<FString> PartialStrings; // 0x0
	UCategoryBase* Category; // 0x10
};

struct FAISpawnTelemetryEvent {
	FString LocationName; // 0x0
};

struct FAthenaAnimationPulleyControl {
	TArray<EControllableObjectType> PulleyObjectTypes; // 0x0
	float MaxRate; // 0x10
	float ForceMultiplier; // 0x14
	float PulleyMovementForce; // 0x18
	bool UsingPulley; // 0x1c
	bool MovingPulley; // 0x1d
	bool LookAtOffsetSet; // 0x1e
	bool LookingRight; // 0x1f
};

struct FLevelCancelCompletedTelemetryEvent : FStreamingTelemetryBaseEvent {
	float TimeSinceCancelRequested; // 0x30
};

struct FStartClothSimulationFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FTreasureSurfacedTelemetryEvent {
	FGuid BootyId; // 0x0
	FString Rarity; // 0x10
};

struct FMastSailLoweredProportionBecameStationaryEvent {
	float Proportion; // 0x0
};

struct FEventSwimmingCreatureCollided {
	AActor* SwimmingCreatureActor; // 0x0
};

struct FStepMerchantItemDesc {
	FText Name; // 0x0
	UTexture* Icon; // 0x38
};

struct FItemConsumptionStatusChanceEntry {
	float Chance; // 0x0
	FStatus Status; // 0x8
};

struct FSingleStickMapping {
	TArray<FSingleStickMappingAxis> BindToLeftX; // 0x0
	TArray<FSingleStickMappingAxis> BindToLeftY; // 0x10
	TArray<FSingleStickMappingAxis> BindToRightX; // 0x20
	TArray<FSingleStickMappingAxis> BindToRightY; // 0x30
	TArray<FString> Unbind; // 0x40
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FContestEndEvent {
	int32_t Position; // 0x0
	FString Message; // 0x8
	TArray<FScoreboardItems> Scores; // 0x18
	float HoldDuration; // 0x28
};

struct FAthenaAnimationObjectActionOneShotPitchOverride {
	TArray<UBlendSpace1D*> MainAction; // 0x0
	TArray<UBlendSpace1D*> AlternateAction; // 0x10
};

struct FCrewShipData {
	bool Vote; // 0x0
	char NumVotes; // 0x1
	EScuttleState ScuttleState; // 0x2
};

struct FTimelineEventEntry {
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x4
};

struct FTaleQuestSelectorServiceSeedSetTelemetryEvent {
	int32_t Seed; // 0x0
};

struct FPirateGoldReward {
	FPirateIdentity Pirate; // 0x0
	uint32_t Amount; // 0x78
};

struct FDockableInfo {
	FName SocketName; // 0x0
	USceneComponent* SceneComponent; // 0x8
	EDockableSocketOverlapUpdates ShouldOverlapsUpdateOnParentUpdate; // 0x10
};

struct FPirateSelectedTelemetryEvent {
	FString PirateEthnicity; // 0x0
	FString PirateGender; // 0x10
	FString HighestWeightedBodyShape; // 0x20
	float PirateAge; // 0x30
	int32_t PirateGenerationRequestCount; // 0x34
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	float FrameRate; // 0x4
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FPurchaseOfferResponse {
	TArray<FString> PurchasedItems; // 0x0
};

struct FRequestEmblemProgressSucceededEvent {
	FGuid RequestID; // 0x0
	TArray<FEmblemProgress> EmblemProgress; // 0x10
};

struct FTornMapTearingParams {
	int32_t NumPieces; // 0x0
	FStringAssetReference VisibilityMask1; // 0x8
	FStringAssetReference VisibilityMask2; // 0x18
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0x110
};

struct FShipSpawnedCustomServerEvent : FGlobalCustomServerEvent {
	FString ShipId; // 0x18
	FString ShipType; // 0x28
};

struct FPossessionsChestClosedEvent {
	EPossessionsChestType PossessionsChestType; // 0x0
};

struct FRomeBeaconVelocityMap {
	ERomeBeaconAttachType AttachType; // 0x0
	float AssociatedMaxVelocity; // 0x4
};

struct FKrakenHeadHealthPair {
	int32_t PlayerCount; // 0x0
	float KrakenHeadHealth; // 0x4
};

struct FEmissaryEventAward {
	bool FirstTimeOnly; // 0x0
	bool NotOriginalOwner; // 0x1
	EEmissaryQualityLevel ItemQualityRequirement; // 0x2
	int32_t EmissaryLevelIncrease; // 0x4
};

struct FCrewShipPersistentData {
	FGuid CrewId; // 0x0
	ACrewShipManifest* CrewShipManifest; // 0x10
};

struct FKrakenDynamicsStateParams {
	TArray<FKrakenDynamicsStateFragmentParams> FragmentParams; // 0x0
};

struct FEventPlayerControllerPossessed {
	APlayerController* PlayerController; // 0x0
};

struct FPrioritisedPrompt {
	FText Message; // 0x0
	FString Key; // 0x38
	UPopUpMessageDesc* PopUpMessageDesc; // 0x48
	EPromptPriority BasePriority; // 0x50
};

struct FContestVoyagesSelectorUnit {
	FName FeatureToggle; // 0x0
	UContestVoyagesDataAsset* ContestVoyages; // 0x8
};

struct FPopUpQueueServicePausedTelemetryEvent {
	bool Paused; // 0x0
	int32_t Reason; // 0x4
};

struct FRequestPurchaseShopOfferEvent {
	FGuid OfferId; // 0x0
	FString CatalogName; // 0x10
};

struct FCrewMuteOthersPhrasesEvent {
	bool IsMuted; // 0x0
};

struct FLevelSequencePlayerSnapshot {
	FText MasterName; // 0x0
	float MasterTime; // 0x38
	FText CurrentShotName; // 0x40
	float CurrentShotLocalTime; // 0x78
	UCameraComponent* CameraComponent; // 0x80
	FLevelSequenceSnapshotSettings Settings; // 0x88
};

struct FFixedStepInterpCurvePointVector2D {
	FVector2D OutVal; // 0x0
	FVector2D Tangent; // 0x8
};

struct FEmissaryEncounteredSkellyFortNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
};

struct FWaterBarrelActionStateParams : FControlObjectActionStateParams {
	FLookAtOffsetParams LookAtOffsetParams; // 0x18
};

struct FTestTelemetryEventWithIntAndTestFragment {
	uint32_t ExampleProperty; // 0x0
};

struct FExplosionInfo {
	UDamagerType* DamagerType; // 0x0
	EHealthChangedReason HealthChangedReason; // 0x8
	ECollisionChannel CollisionChannel; // 0x9
	float MaxExplosionRadius; // 0xc
	float BaseDamageAmount; // 0x10
	UCurveFloat* PlayerDamageCurve; // 0x18
	UCurveFloat* OtherPawnDamageCurve; // 0x20
	float PlayerInsideShipDamageMultiplier; // 0x28
	bool DealFriendlyFireDamage; // 0x2c
	FShipDamageParams ShipDamageParams; // 0x30
	int32_t MaxNumDamageHolesPerShip; // 0x40
	UCurveFloat* ShipDamageCurveInMetres; // 0x48
	bool ShouldIgnoreZForShipHullDamage; // 0x50
	FWeightedProbabilityRangeOfRanges ForceToApplyToShip; // 0x58
	float ForceModifierToApplyToKrakenWrappedShip; // 0x88
	FName IgnitionFeatureName; // 0x8c
	UFireGridCellSelectionParamsDataAsset* IgnitionParameters; // 0x98
	TArray<FStatus> StatusesToApply; // 0xa0
	bool ApplyStatusEffectsWhenUnderwater; // 0xb0
	float StatusEffectInnerRadiusMultiplier; // 0xb4
	FKnockBackInfo KnockbackParams; // 0xb8
	float KnockbackInnerRadiusMultiplier; // 0x108
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x110
	UForceFeedbackEffect* ForceFeedbackEffectLower; // 0x118
	float ForceFeedbackEffectInnerRadiusMultiplier; // 0x120
	FName ForceFeedbackTag; // 0x124
	UCameraShake* CameraShake; // 0x130
	float CameraShakeInnerRadiusMultiplier; // 0x138
};

struct FGameEventSchedulerConfiguration {
	FName Feature; // 0x0
	FName ServerConfigName; // 0x8
	TArray<FGameEventCount> MainEvents; // 0x10
	TArray<FGameEventWeightedList> SubConfigs; // 0x20
	float Weight; // 0x30
};

struct FEnvIntParam_DEPRECATED {
	int32_t Value; // 0x0
	FName ParamName; // 0x4
};

struct FEventCannonAimingStoppedYaw {
	bool IsAtEnd; // 0x0
};

struct FUICompanyData {
	FString CompanyId; // 0x0
	FString DisplayName; // 0x10
	FUICompanySkin Skin; // 0x20
	FUICompanyShopInfo ShopInfo; // 0xa0
};

struct FItemBuriedTaleQuestAutomationEvent {
	UObject* ItemBuried; // 0x0
	FVector Location; // 0x8
};

struct FGhostShipRewardData {
	UWeightedItemDescSpawnDataAsset* Rewards; // 0x0
	FWeightedProbabilityRange NumberOfItemsToSpawn; // 0x8
	TArray<FTransform> SpawnTransforms; // 0x28
};

struct FMysteriousNoteRequest {
	APlayerController* PlayerController; // 0x0
	FPirateIdentity PirateIdentity; // 0x8
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FEventWheelDamageLevelChanged {
	AActor* Wheel; // 0x0
	int32_t DamageLevel; // 0x8
};

struct FUseSingleStickChangedEvent {
	EUseSingleStick UseSingleStick; // 0x0
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FUIPremiumStorePanelHighlightTelemetryEvent {
	FString CurrentPage; // 0x0
	FString CurrentPanel; // 0x10
	FString SessionId; // 0x20
	float TimeOnPanel; // 0x30
};

struct FTextureAuditorProperties {
	ETextureAuditorMipSetting RequiredMipsSetting; // 0x0
	TArray<EPixelFormat> AllowedTextureFormats; // 0x8
	uint32_t MinSizeToValidateFormatX; // 0x18
	uint32_t MinSizeToValidateFormatY; // 0x1c
};

struct FSplineTransitionLadderActionFinishedMessage : FActionStateMessage {
	float TimeCompleted; // 0x10
};

struct FPetHangoutSpotParams {
	UPetDesc* PetType; // 0x0
	FFloatRange HangoutTime; // 0x8
	FWeightedPetAnimationSelector AnimationSelector; // 0x18
};

struct FPerCompanyVotes {
	TArray<APlayerState*> MemberVotes; // 0x0
	FName CompanyIdentifier; // 0x10
};

struct FCrewSessionTelemetry {
	TArray<FCrewSessionMemberTelemetry> SessionMembers; // 0x0
	FString SessionTemplate; // 0x10
	FString SessionVisibility; // 0x20
	FString Playmode; // 0x30
};

struct FAthenaAnimationPitchControlStates {
	FAthenaAnimationObjectTargetingOptions StandardPassive; // 0x0
	FAthenaAnimationObjectTargetingOptions StandardWater; // 0x3c
	FAthenaAnimationObjectTargetingOptions Action1; // 0x78
	FAthenaAnimationObjectTargetingOptions Action1Water; // 0xb4
	FAthenaAnimationObjectTargetingOptions Action2; // 0xf0
	FAthenaAnimationObjectTargetingOptions Action2Water; // 0x12c
};

struct FOceanCrawlerAudioKeyPair {
	EOceanCrawlerAbilityAudioKey AudioKey; // 0x0
	UWwiseEvent* AudioEvent; // 0x8
};

struct FSessionEvent {
	FCreativeSession Session; // 0x0
};

struct FStormAvoidanceArea {
	FVector2D Location; // 0x0
	float Radius; // 0x8
};

struct FPetRoamingAnimationState {
	EPetMontageAnimationType AnimationType; // 0x0
	UAnimMontage* MontageData; // 0x8
	FPetAnimationCycleMontage CycleData; // 0x10
	EWieldAnimationLocation CurrentWieldableLocation; // 0x28
	EWieldAnimationLocation ResetWieldableLocation; // 0x29
	float BlendInTime; // 0x2c
	float BlendOutTime; // 0x30
	bool Uninterruptable; // 0x34
	bool ResetWieldableIfInterrupted; // 0x35
	bool AllowHappyReact; // 0x36
};

struct FKrakenAnimatedTentacleMappedAnimation {
	UAnimSequence* ClientAnimation; // 0x0
	UKrakenAnimatedTentacleAnimationDataAsset* AnimationAsset; // 0x8
};

struct FPirateReRollRequestModel {
	FPirateInventoryItemModel EntitlementItem; // 0x0
	FPirateDescription PirateDescription; // 0x30
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x48
};

struct FMeleeAttackMoveSpeedValidationTelemetryEvent {
	EMeleeAttackMoveCorrectionReason CorrectionReason; // 0x0
	float AllowedWindowStartTimeSeconds; // 0x4
	float AllowedWindowFinishTimeSeconds; // 0x8
	float CurrentAttackClientTimeSeconds; // 0xc
};

struct FAnimationContinuousCycle {
	UAnimSequence* In; // 0x0
	float InEffectTime; // 0x8
	TArray<UAnimSequence*> Loop; // 0x10
	UBlendSpace1D* LoopHitReact; // 0x20
	UAnimSequence* Out; // 0x28
	TArray<UAnimSequence*> OutAlternates; // 0x30
	float OutUndockTime; // 0x40
};

struct FAggressiveGhostShipEncounterStartTelemetryEvent {
	FGuid EncounterId; // 0x0
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
};

struct FPickedUpItemFromChestEvent {
	AActor* PickupActor; // 0x0
};

struct FGameplayModifierEvaluatedData {
	FGameplayAttribute Attribute; // 0x0
	EGameplayModOp ModifierOp; // 0x8
	float Magnitude; // 0xc
	FActiveGameplayEffectHandle Handle; // 0x10
	bool IsValid; // 0x14
};

struct FOpenableItemMetaWrapper : FItemMetaBase {
	EOpenableItemState OpenState; // 0x18
	bool HasEverClosed; // 0x19
};

struct FBootyItemStats {
	TArray<FPlayerStat> HandInPlayerStats; // 0x0
	TArray<FPlayerStat> HandInStolenPlayerStats; // 0x10
	TArray<FPlayerStat> HandInAsPirateLegendPlayerStats; // 0x20
	TArray<FPlayerStat> HandInOnSchedulePlayerStats; // 0x30
	TArray<FPlayerStat> HandInAsPirateLegendOnSchedulePlayerStats; // 0x40
	TArray<FEmissaryBootyItemStats> HandInAsEmissaryPlayerStats; // 0x50
	TArray<FEmissaryBootyItemStats> HandInAsMaxLevelEmissaryPlayerStats; // 0x60
	TArray<FEmissaryBootyItemStats> HandInStolenAsEmissaryPlayerStats; // 0x70
	TArray<FEmissaryBootyItemStats> HandInStolenAsMaxLevelEmissaryPlayerStats; // 0x80
};

struct FUpdateCameraPositionRpc : FBoxedRpc {
	AAthenaPlayerController* AthenaPlayerController; // 0x10
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
};

struct FManagedItems {
	TArray<AItemProxy*> Items; // 0x0
};

struct FStorageContainerMetaWrapper : FItemMetaBase {
	FStringAssetReference StoredStructType; // 0x8
};

struct FPlayerChangedShipLoadoutTelemetryEvent {
	FString ShipEquippedItemType; // 0x0
	FString ShipEquippedItemName; // 0x10
};

struct FQueryEventSchedulerStatusRpc : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FEventUserGameSettingsSetBoolean {
	FName KeyName; // 0x0
	bool Value; // 0x8
};

struct FEmissaryPointBoostMultipliers {
	float PlayerWearningCompanyCostume; // 0x0
	float CrewShipFullyEquippedWithCompanyCosmetics; // 0x4
};

struct FVomitSFX {
	UWwiseObjectPoolWrapper* VomitSfxPool; // 0x0
	UWwiseEvent* VomitSfxEvent; // 0x8
	UWwiseEvent* VomitInBucketSfxEvent; // 0x10
};

struct FRewardRequestCrewGame {
	FGuid CrewId; // 0x0
	TArray<FPirateIdentity> Pirates; // 0x10
	FName EmissaryAffiliation; // 0x20
	uint32_t EmissaryLevel; // 0x28
};

struct FDestroyingUnsafeExpiredWreckTelemetryEvent {
	FVector Location; // 0x0
};

struct FItemHealthMetaWrapper : FItemMetaBase {
	float MaxHealth; // 0x18
	float CurrentHealth; // 0x1c
};

struct FShipMastCollapseStateCustomServerEvent : FGlobalCustomServerEvent {
	FString ShipId; // 0x18
	FString MastId; // 0x28
};

struct FRequestClothingChestClothingLoadoutEvent {
	TArray<FString> Categories; // 0x0
};

struct FMoreInfoDetails {
	FString DescriptionFirst; // 0x0
	FString DescriptionSecond; // 0x10
};

struct FWorldMapWorldData {
	float MinX; // 0x0
	float MinY; // 0x4
	float MaxX; // 0x8
	float MaxY; // 0xc
	TArray<FWorldMapIslandData> Islands; // 0x10
};

struct FKrakenDespawnTelemetryEvent {
	FString KrakenId; // 0x0
	EKrakenDespawnReason KrakenDespawnReason; // 0x10
};

struct FWwiseEventParam {
	TWeakObjectPtr<UWwiseEvent> WwiseEvent; // 0x0
	FName SourcePath; // 0x8
	FName SourceObj; // 0x10
};

struct FWeightedItemDescSpawnDataAssetsWithWeights {
	TArray<FWeightedItemDescSpawnDataAssetWithWeight> WeightedItemSpawnDatas; // 0x0
};

struct FWaterSplashProbe {
	FString ProbeDebugName; // 0x8
	FVector LocalOffset; // 0x18
	float Height; // 0x24
	float Pitch; // 0x28
	float Yaw; // 0x2c
	float Roll; // 0x30
	float RateOfChangeThreshold; // 0x34
	FVector LocalOffsetAdjustment; // 0x38
	float LocalOffsetAdjustmentDuration; // 0x44
	EWaterSplashProbeType Type; // 0x48
	EWaterHeightType WaterHeightType; // 0x49
	float StaticWaterHeightValue; // 0x4c
};

struct FEventPlayerAddedToCrew {
	APlayerState* UniqueId; // 0x10
};

struct FPrioritizedCompositeInputHandler {
	UCompositeInputHandler* InputHandler; // 0x0
};

struct FShipCustomizationChestShipCustomizationLoadoutUpdatedEvent {
	TArray<FChestTabViewModel> Loadout; // 0x0
};

struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
	bool bTemporarilyHiddenInGame; // 0xa8
};

struct FRemoveTriggerData {
	int32_t TriggerId; // 0x0
};

struct FScrapeableDamageSpeedEntry {
	UShipSpeedBand* SpeedBand; // 0x0
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x8
	int32_t DamageAmount; // 0x10
};

struct FFireworkExplosionData {
	UObject* VFX; // 0x8
	UWwiseEvent* Sfx; // 0x10
	UWwiseEvent* SecondarySFX; // 0x18
};

struct FAthenaAnimationPulleyControlAnimData {
	UAnimSequence* Entry; // 0x0
	UAnimSequence* IntoLeft; // 0x8
	UAnimSequence* IdleLeft; // 0x10
	UAnimSequence* ActionLeft; // 0x18
	UAnimSequence* OutOfLeft; // 0x20
	UAnimSequence* IntoRight; // 0x28
	UAnimSequence* IdleRight; // 0x30
	UAnimSequence* ActionRight; // 0x38
	UAnimSequence* OutOfRight; // 0x40
};

struct FShopDefinition {
	FString ShopName; // 0x0
	FString CatalogName; // 0x10
	TArray<FCatalogTab> CatalogTabs; // 0x20
	FString Storefront; // 0x30
	FString OpenAudioCue; // 0x40
	FShopDialogueMessages Dialogue; // 0x50
	FString CompanyId; // 0xa0
	bool EnablePiratePreview; // 0xb0
	EWalletCurrencyId CurrencyType; // 0xb1
	TArray<FCategoryTab> Categories; // 0xb8
	FStringAssetReference AllTabIcon; // 0xc8
};

struct FItemDiggingAudioOverride {
	TArray<UClass*> Classes; // 0x0
	UItemDiggingAudioConfig* DiggingAudioConfig; // 0x10
};

struct FKrakenAnimatedTentacleAnimationBoneFrame {
	FVector BoneLocation; // 0x0
};

struct FServerPlayerBannedTelemetryEvent {
	FString UserId; // 0x0
};

struct FShopOffer {
	FGuid OfferId; // 0x0
	FString DisplayName; // 0x10
	FString Description; // 0x20
	FShopOfferPrice Price; // 0x30
	FString ThumbnailImageUrl; // 0x78
	TArray<FString> ClientIds; // 0x88
	FString CatalogName; // 0x98
	TArray<FString> PurchaseStats; // 0xa8
	FShopOfferPrerequisites Prerequisites; // 0xb8
	FShopOfferPrerequisites ExclusionConditions; // 0x120
	EShopOfferAvailability Availability; // 0x188
	TMap<FString, FString> MetaData; // 0x190
};

struct FPremiumCatalogOfferData {
	EPremiumCatalogOfferType Type; // 0x0
	TArray<FString> TileImages; // 0x8
	int32_t TileSize; // 0x18
	FText PageTitle; // 0x20
	FString PageIcon; // 0x58
	TArray<FPremiumCatalogOfferGroup> Groups; // 0x68
	FText LockedReason; // 0x78
	bool TimeLimited; // 0xb0
	bool TimeLimitedPrice; // 0xb1
	int32_t PremiumCurrencyRealMoneyPrice; // 0xb4
	bool Purchasable; // 0xb8
	bool SuperPremium; // 0xb9
	FText Saving; // 0xc0
	FString Accent; // 0xf8
	FString TopBanner; // 0x108
	FString BottomBanner; // 0x118
};

struct FClientStartCrewMatchmakingTelemetryEvent {
	FGuid CrewId; // 0x0
	FString SessionType; // 0x10
	FGuid MatchmakingAttemptId; // 0x20
};

struct FMovieScene3DTransformSectionTemplate : FMovieSceneEvalTemplate {
	FRichCurve TranslationCurve[0x3]; // 0x18
	FRichCurve RotationCurve[0x3]; // 0x180
	FRichCurve ScaleCurve[0x3]; // 0x2e8
};

struct FCargoRunMapContents {
	FGuid NPCId; // 0x0
	int32_t CompanyIndex; // 0x10
	int32_t NumOfItems; // 0x14
};

struct FCarouselPirateClothingItem {
	UClothingDesc* Item; // 0x0
	EIPGEthnicity EthnicityFilter; // 0x8
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FWorldMapSetLocation {
	TArray<FVector2D> MapPins; // 0x0
	int32_t MaxMapPins; // 0x10
	int32_t SelectedPin; // 0x14
	float WorldX; // 0x18
	float WorldY; // 0x1c
	float Zoom; // 0x20
};

struct FEventHealthChangeContinuousRemoved {
	EHealthChangedReason Reason; // 0x0
};

struct FAllowedInteractableTypes {
	UClass* ActorType; // 0x0
	FCollisionProfileName CollisionProfileName; // 0x20
};

struct FSerialisedNestedStruct {
	FString String; // 0x0
	TArray<int32_t> IntArray; // 0x10
	int32_t Int; // 0x20
	float Float; // 0x24
};

struct FAIAbilityContinuousCooldownParameterData {
	FAthenaAIAbilityPlayerBasedRanges InitialCooldown; // 0x0
	FAthenaAIAbilityPlayerBasedRanges CooldownBetweenActivations; // 0x10
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FInteractionDefinition {
	FString Header; // 0x0
	TArray<FInteractionOption> Options; // 0x10
};

struct FPetShopDefinition {
	FString Title; // 0x0
	TArray<FPetSpeciesViewModel> Species; // 0x10
};

struct FStorageContainerContentSpawnerOutput {
	UItemDesc* ItemDesc; // 0x0
};

struct FAggressiveGhostShipDifficultyShipSizeTargetSelection {
	UShipSize* ShipSize; // 0x0
	TArray<FAggressiveGhostShipDifficultyTargetSelection> TargetSelection; // 0x8
};

struct FWieldableMysteriousNoteLayoutItem {
	FString Theme; // 0x0
	UFont* Font; // 0x10
	FTreasureMapWidgetStreamedTexture Image; // 0x18
	FStringAssetReference RadialIcon; // 0x48
	FTreasureMapWidgetText NoteTitleWidgetText; // 0x58
	FTreasureMapWidgetText NoteBodyWidgetText; // 0x78
	float NoteWidth; // 0x98
};

struct FIKLookAtParams {
	float ActivationSpeed; // 0x0
	float HorizontalLimit; // 0x4
	float VerticalLimit; // 0x8
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid Id; // 0x8
};

struct FLobbyCrewInfo {
	ECrewSessionType SessionType; // 0x0
	TArray<FLobbyCrewMember> Members; // 0x8
	FString SessionName; // 0x18
};

struct FTestSerializationNestedObject {
	FTestSerializationObject NestedObject; // 0x0
};

struct FWeightedItemDescSpawnData {
	UItemSpawnData* ItemSpawnData; // 0x0
	float Weight; // 0x8
	FName Feature; // 0xc
	TArray<USpawnRequirement*> Requirements; // 0x18
	bool CustomLifetimeManagement; // 0x28
};

struct FFaunaAnimationStructure {
	FFaunaAnimationLocationStructure FreeRange; // 0x0
	FFaunaAnimationLocationStructure Caged; // 0x360
};

struct FAIShipClassWeightedSizes {
	UShipSize* TargetShipSize; // 0x0
	TArray<FAIShipWeightedSize> ShipSizes; // 0x8
};

struct FSkeletonThroneStateData : FActorStateData {
	int32_t Id; // 0x0
	FVector Position; // 0x4
	FString IslandName; // 0x10
};

struct FEntitlementsRequestEvent {
	TArray<FString> EntitlementIds; // 0x0
};

struct FPotentialChainNode {
	AActor* NodeActor; // 0x0
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FKrakenDynamicsStateEvent {
	EKrakenDynamicsStateEvent Event; // 0x0
	float Time; // 0x4
	float Value; // 0x8
};

struct FEventSetFishingIsComedyItem {
	bool IsComedyItem; // 0x0
};

struct FEventPreviewCharacterAnimationRequest {
	UAnimationAsset* AnimationToPlay; // 0x0
};

struct FNPCContinuousAnimationElement {
	FName SequenceName; // 0x0
	FNPCAnimationContinuousCycle ContinuousSequence; // 0x8
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

struct FEncounterParams {
	EEncounterType EncounterType; // 0x0
	float EncounterRadius; // 0x4
	EEncounterDimensions EncounterDimensions; // 0x8
	EEncounterMobility EncounterMobility; // 0x9
};

struct FNPCCustomAnimationDataStructure {
	TArray<FNPCOneShotAnimationElement> OneShotSequences; // 0x0
	TArray<FNPCContinuousAnimationElement> ContinuousSequences; // 0x10
	UNPCHeldObjectData* WieldableCosmeticItemList; // 0x20
	TArray<FNPCInitialSpawnedCosmeticItems> InitialSpawnedCosmeticItems; // 0x28
};

struct FPerDepthSpawnChance {
	float DepthUpperBound; // 0x0
	float DepthLowerBound; // 0x4
	float ChanceToSpawn; // 0x8
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x98
	FSlateBrush BackgroundImageFocused; // 0x128
	FSlateBrush BackgroundImageReadOnly; // 0x1b8
	FMargin Padding; // 0x248
	FSlateFontInfo Font; // 0x258
	FSlateColor ForegroundColor; // 0x298
	FSlateColor BackgroundColor; // 0x2c8
	FSlateColor ReadOnlyForegroundColor; // 0x2f8
	FMargin HScrollBarPadding; // 0x328
	FMargin VScrollBarPadding; // 0x338
	FScrollBarStyle ScrollBarStyle; // 0x348
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FPrepareForWorldSwitchRpc : FBoxedRpc {
	UScriptStruct* Type; // 0x8
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FKrakenWorldSettingsParams {
	bool KrakenEnabled; // 0x0
};

struct FCrewVoteOutOfBrigEvent {
	FString XUID; // 0x0
};

struct FAIDataProviderStructValue : FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FAIShipWorldSettings {
	TArray<FFeatureLockedCampaignParams> CampaignParams; // 0x0
	UAIShipBattlesDataAsset* BattlesData; // 0x10
};

struct FShipCustomizationChestCrewMember {
	FGuid CrewId; // 0x0
	AActor* Player; // 0x10
	FNetActorPtr NetPlayerState; // 0x18
};

struct FPiratePreviewView {
	FName CameraName; // 0x0
	FName LookAtBoneName; // 0x8
	UAnimationAsset* Anim; // 0x10
	bool ShouldSpin; // 0x18
};

struct FClientProjectileImpactHitRegInfoTelemetryEvent {
	FGuid AttackId; // 0x0
	FString ProjectileId; // 0x10
	FString DamagerTypeId; // 0x20
	FVector HitLocation; // 0x30
	FString InstigatorObjectId; // 0x40
	FString InstigatorObjectType; // 0x50
	FString InstigatorActorName; // 0x60
};

struct FEmissaryCompanyCampaignKillPlayer {
	UCompany* Company; // 0x0
	TArray<FEmissaryCompanyCampaignScale> Scales; // 0x8
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FCompanyLevelDataTable : FTableRowBase {
	int32_t XpRequiredForLevel; // 0x0
};

struct FCloudTypeNormalizedWeight {
	FLinearColor LodScreenPercentages; // 0x0
	float ProbabilityWeight; // 0x10
	float MeshRadius; // 0x14
};

struct FWatercraftDespawnCustomServerEvent : FGlobalCustomServerEvent {
	FString WatercraftId; // 0x18
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x520
	FSplitterStyle ColumnSplitterStyle; // 0xa38
	FSlateBrush BackgroundBrush; // 0xb60
	FSlateColor ForegroundColor; // 0xbf0
};

struct FWeightedProbabilityRangeOfRangesFloatPair {
	float Min; // 0x0
	float Max; // 0x4
};

struct FPlayerRevivalTelemetryEvent {
	bool Success; // 0x0
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FEncounter {
	AActor* EncounterActor; // 0x0
};

struct FCollectionTotalsLimits {
	int32_t MaxTotalVerts; // 0x0
	int32_t MaxTotalMemory; // 0x4
	int32_t MostExpensiveAssetsSetSize; // 0x8
	int32_t ExpensiveAssetSetMaxTotalMemory; // 0xc
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FAthenaAnimationSkeletonScream {
	UAnimSequence* SkeletonScream; // 0x0
};

struct FPlayerEnteredFortVicinityEvent {
	AActor* Player; // 0x0
};

struct FEventAthenaLocalPlayerControllerPairingChanged {
	int32_t ControllerId; // 0x0
};

struct FPlayerBuriedItemServiceNumMapsTakenFromStoreThisDayPerCrew {
	FGuid CrewId; // 0x0
	int32_t NumMaps; // 0x10
};

struct FAIShipSailData {
	FColor SailRGB; // 0x0
	FColor IconRGB; // 0x4
	int32_t CrewIndex; // 0x8
	int32_t CursedCannonballIndex; // 0xc
};

struct FReapersMarkLevelEntry {
	int32_t VoyageCount; // 0x0
	TArray<FReapersMarkLevelMultiplier> CompanyMultipliers; // 0x8
};

struct FRequestEmblemDefinitionsSucceededEvent {
	TArray<UEmblemDefinitionDataAsset*> DataAssets; // 0x0
};

struct FEventClueObtained {
	UClueDescriptor* ObtainedClue; // 0x0
	UClueSiteType* ObtainedSiteType; // 0x8
};

struct FWwiseEmitterCreationParams {
	UWwiseEvent* Event; // 0x0
	TArray<FWWiseEmitterCreationRTPCSetting> RTPCs; // 0x8
	TArray<FWWiseEmitterCreationSwitchSetting> Switches; // 0x18
};

struct FAdditionalCaptainTarget {
	UClass* PawnClass; // 0x0
	UAIClassId* ClassId; // 0x20
	UAthenaAIFormDataAsset* Form; // 0x28
	UAthenaAIControllerParamsDataAsset* Skillset; // 0x30
	UClass* ItemDropComponentClass; // 0x38
	ULoadoutAsset* Loadout; // 0x58
	FText NameplateOverride; // 0x60
	TArray<FPlayerStat> CrewStatsToFireWhenDefeated; // 0x98
	TArray<FPlayerStat> AllianceStatsToFireWhenDefeated; // 0xa8
	bool IsUsingDialogue; // 0xb8
	UAICombatDialogue* OverrideAICombatDialogue; // 0xc0
};

struct FPromptsCounterModel {
	TMap<FString, int32_t> PromptCounters; // 0x0
	FDateTime NowUtc; // 0x50
};

struct FQuestVariableTaleResourceHandle : FQuestVariable {
	FName ParamName; // 0x8
};

struct FMovieSceneTrackCompilationParams {
	bool bForEditorPreview; // 0x0
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x40
};

struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList {
	FName FeatureName; // 0x0
	TArray<UAIEncounterGenerationRecipe*> Recipes; // 0x8
};

struct FContestIslandArchetype {
	TArray<FWeightedContestIslandData> AvailableIslands; // 0x0
};

struct FTutorialStepSellTreasure : FTutorialStep {
	AItemInfo* SpawnedChest; // 0x88
};

struct FReapersMarkTrackedBootyItemInfo {
	FVector ItemLocation; // 0x0
	EReapersMarkTrackedBootyItemType ItemType; // 0xc
};

struct FAthenaAIFormComponentVfxCustomisation {
	UVfxCustomisationType* VfxCustomisationType; // 0x0
	bool VfxEnabled; // 0x8
	UObject* VfxTemplate; // 0x10
};

struct FRequestShipCustomizationChestShipCustomizationLoadoutEvent {
	TArray<FString> Categories; // 0x0
};

struct FEventReceiveStorageContainerComponentState {
	UStorageContainerComponent* Source; // 0x0
};

struct FShipDestroyedCustomServerEvent : FGlobalCustomServerEvent {
	FString ShipId; // 0x18
};

struct FRewardQuestDesc : FQuestDesc {
	FString Title; // 0x8
	bool IsEmergent; // 0x18
	FName IslandName; // 0x1c
};

struct FEventEnableLookAtEmoteCamera {
	TWeakObjectPtr<AActor> LookAtTarget; // 0x0
};

struct FQuestVariableClass : FQuestVariable {
	FName ParamName; // 0x8
};

struct FInteractionOptionSelected {
	FName EventName; // 0x0
	int32_t Index; // 0x8
};

struct FEndClothSimulationFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FMatineeActorPlayNetworkEvent : FNetworkEventStruct {
	AMatineeActor* MatineeActor; // 0x10
};

struct FEventReceiveMountpointComponentState {
	UMountpointComponent* Source; // 0x0
};

struct FAthenaAIItemParamValue {
	UClass* ItemClass; // 0x0
	FName ParamName; // 0x20
	float Value; // 0x28
};

struct FAthenaStreamedLevelItem {
	FVector Location; // 0x0
	UAthenaStreamedLevelDataAsset* DataAsset; // 0x10
	FName FeatureToggle; // 0x18
	bool ShouldBeVisibleOnLoad; // 0x20
};

struct FVolcanoTargetCoolDown {
	AActor* Target; // 0x0
};

struct FSetFlameOfFateEvent {
	EFlameOfFateType FlameOfFateType; // 0x0
	UObject* Source; // 0x8
};

struct FRemoteEntitlementsModel {
	TArray<FEntitlementInfo> Entitlements; // 0x0
};

struct FMountedWeaponFireRejectionRpc : FBoxedRpc {
	UObject* MountedWeaponObject; // 0x10
};

struct FItemDiggingMergedConfig {
	UItemDiggingBaseConfig* BaseConfig; // 0x0
	UItemDiggingAnimationConfig* AnimationConfig; // 0x8
	UItemDiggingEffectsConfig* EffectsConfig; // 0x10
	UItemDiggingAudioConfig* AudioConfig; // 0x18
	UItemDiggingBuryConfig* BuryingConfig; // 0x20
};

struct FValidRiddleOptions {
	FRiddleActionLocation RiddleActionLocation; // 0x0
	TArray<FRiddleActionLocation> ValidRiddleActionLocations; // 0x8
};

struct FMerchantQuestRequiredItemsRankEntry {
	int32_t Rank; // 0x0
	int32_t Payout; // 0x4
	TArray<FMerchantQuestRequiredItemsGroupList> RequiredItems; // 0x8
};

struct FVoyageAvailableForCancel {
	UVoyageProposalDesc* ProposalDesc; // 0x0
};

struct FDockableBaseActionStateParams : FControlObjectActionStateParams {
	FLookAtOffsetParams LookAtOffsetParams; // 0x18
};

struct FWalletLastKnownBalanceUpdatedEvent {
	FWalletBalance Balance; // 0x0
};

struct FTutorialStepBeginTallTale : FTutorialStep {
	FTutorialStepDependencies Dependencies; // 0x20
};

struct FAISpawnerTelemetryEvent {
	FString AISpawnerType; // 0x0
	FString AISpawnerRegion; // 0x10
	TArray<FString> AISpawnerContexts; // 0x20
	int32_t AISpawnerWaveSpawnNumber; // 0x30
	float AISpawnerWaveDelayBefore; // 0x34
	float AISpawnerWaveDelayAfter; // 0x38
};

struct FPlayerBuriedItemServiceCrewMapsChangedEvent {
	FGuid CrewId; // 0x0
};

struct FAIBountySpawnerWaveGroup {
	TArray<FAIBountySpawnerWave> Waves; // 0x0
	int32_t NumNonTargetAIToKillToMoveToNextWaveGroup; // 0x10
	UAICombatDialogue* CombatDialogueForWaveGroup; // 0x18
};

struct FAIFaunaSpawnerWave : FAISpawnerWave {
	float SpawnChance; // 0x0
	FWeightedProbabilityRange NumOfSpawnsInWave; // 0x8
	FAISpawnTypeParamsCollection SpawnTypeParamsOverride; // 0x28
	FWeightedProbabilityRangeOfRanges DelayBeforeWave; // 0x70
	FWeightedProbabilityRangeOfRanges DelayBetweenSpawns; // 0xa0
	FWeightedProbabilityRangeOfRanges DelayBeforeNextWaveIfSuccessful; // 0xd0
};

struct FRopeCatenaryLengthParams {
	float MinTautLength; // 0x0
	float MaxTautLength; // 0x4
	float CatenaryScaleAtMinLength; // 0x8
	float CatenaryScaleAtMaxLength; // 0xc
};

struct FControlObjectActionStateSerialisableData : FActionStateSerialisableData {
	FVector UndockLocation; // 0x30
	bool UndockRequested; // 0x3c
};

struct FStorageContainerContentTypeSelectorEntry {
	float Weight; // 0x0
	int32_t MinimumUses; // 0x4
	int32_t MaximumUses; // 0x8
	UStorageContainerContentSpawner* ContentSpawner; // 0x10
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x40
	bool bLoopAnimation; // 0x48
	float PlayRate; // 0x4c
	int32_t GroupIndex; // 0x50
	EAnimGroupRole GroupRole; // 0x54
};

struct FSirenStatuesSelector_BasedOnShipSize_Entry {
	UClass* ShipSize; // 0x0
	TArray<UClass*> SirenStatueTypes; // 0x20
};

struct FSetRivalVotingUIEvent {
	FString TitleTextAsString; // 0x0
	FString BodyTextAsString; // 0x10
	UNotificationInputId* NotificationInputId; // 0x20
};

struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x0
	char bOverride_WhiteTint : 1; // 0x0
	char bOverride_ColorSaturation : 1; // 0x0
	char bOverride_ColorContrast : 1; // 0x0
	char bOverride_ColorGamma : 1; // 0x0
	char bOverride_ColorGain : 1; // 0x0
	char bOverride_ColorOffset : 1; // 0x0
	char bOverride_FilmWhitePoint : 1; // 0x0
	char bOverride_FilmSaturation : 1; // 0x1
	char bOverride_FilmChannelMixerRed : 1; // 0x1
	char bOverride_FilmChannelMixerGreen : 1; // 0x1
	char bOverride_FilmChannelMixerBlue : 1; // 0x1
	char bOverride_FilmContrast : 1; // 0x1
	char bOverride_FilmDynamicRange : 1; // 0x1
	char bOverride_FilmHealAmount : 1; // 0x1
	char bOverride_FilmToeAmount : 1; // 0x1
	char bOverride_FilmShadowTint : 1; // 0x2
	char bOverride_FilmShadowTintBlend : 1; // 0x2
	char bOverride_FilmShadowTintAmount : 1; // 0x2
	char bOverride_FilmSlope : 1; // 0x2
	char bOverride_FilmToe : 1; // 0x2
	char bOverride_FilmShoulder : 1; // 0x2
	char bOverride_FilmBlackClip : 1; // 0x2
	char bOverride_FilmWhiteClip : 1; // 0x2
	char bOverride_SceneColorTint : 1; // 0x3
	char bOverride_SceneFringeIntensity : 1; // 0x3
	char bOverride_SceneFringeSaturation : 1; // 0x3
	char bOverride_AmbientCubemapTint : 1; // 0x3
	char bOverride_AmbientCubemapIntensity : 1; // 0x3
	char bOverride_BloomIntensity : 1; // 0x3
	char bOverride_BloomThreshold : 1; // 0x3
	char bOverride_Bloom1Tint : 1; // 0x3
	char bOverride_Bloom1Size : 1; // 0x4
	char bOverride_Bloom2Size : 1; // 0x4
	char bOverride_Bloom2Tint : 1; // 0x4
	char bOverride_Bloom3Tint : 1; // 0x4
	char bOverride_Bloom3Size : 1; // 0x4
	char bOverride_Bloom4Tint : 1; // 0x4
	char bOverride_Bloom4Size : 1; // 0x4
	char bOverride_Bloom5Tint : 1; // 0x4
	char bOverride_Bloom5Size : 1; // 0x5
	char bOverride_Bloom6Tint : 1; // 0x5
	char bOverride_Bloom6Size : 1; // 0x5
	char bOverride_BloomSizeScale : 1; // 0x5
	char bOverride_BloomDirtMaskIntensity : 1; // 0x5
	char bOverride_BloomDirtMaskTint : 1; // 0x5
	char bOverride_BloomDirtMask : 1; // 0x5
	char bOverride_AutoExposureLowPercent : 1; // 0x5
	char bOverride_AutoExposureHighPercent : 1; // 0x6
	char bOverride_AutoExposureMinBrightness : 1; // 0x6
	char bOverride_AutoExposureMaxBrightness : 1; // 0x6
	char bOverride_AutoExposureSpeedUp : 1; // 0x6
	char bOverride_AutoExposureSpeedDown : 1; // 0x6
	char bOverride_AutoExposureBias : 1; // 0x6
	char bOverride_HistogramLogMin : 1; // 0x6
	char bOverride_HistogramLogMax : 1; // 0x6
	char bOverride_LensFlareIntensity : 1; // 0x7
	char bOverride_LensFlareTint : 1; // 0x7
	char bOverride_LensFlareTints : 1; // 0x7
	char bOverride_LensFlareBokehSize : 1; // 0x7
	char bOverride_LensFlareBokehShape : 1; // 0x7
	char bOverride_LensFlareThreshold : 1; // 0x7
	char bOverride_VignetteIntensity : 1; // 0x7
	char bOverride_GrainIntensity : 1; // 0x7
	char bOverride_GrainJitter : 1; // 0x8
	char bOverride_AmbientOcclusionIntensity : 1; // 0x8
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x8
	char bOverride_AmbientOcclusionRadius : 1; // 0x8
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x8
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x8
	char bOverride_AmbientOcclusionDistance : 1; // 0x8
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x8
	char bOverride_AmbientOcclusionPower : 1; // 0x9
	char bOverride_AmbientOcclusionBias : 1; // 0x9
	char bOverride_AmbientOcclusionQuality : 1; // 0x9
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x9
	char bOverride_AmbientOcclusionMipScale : 1; // 0x9
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x9
	char bOverride_AmbientOcclusionHemiIntensity : 1; // 0x9
	char bOverride_AmbientOcclusionHemiPower : 1; // 0x9
	char bOverride_AmbientOcclusionHemiRadius : 1; // 0xa
	char bOverride_AmbientOcclusionHemiBlurTolerance : 1; // 0xa
	char bOverride_AmbientOcclusionHemiUpsampleTolerance : 1; // 0xa
	char bOverride_AmbientOcclusionHemiNoiseFilterTolerance : 1; // 0xa
	char bOverride_AmbientOcclusionHemiRejectionFalloff : 1; // 0xa
	char bOverride_AmbientOcclusionHemiBias : 1; // 0xa
	char bOverride_AmbientOcclusionHemiMaxDepthDownsample : 1; // 0xa
	char bOverride_AmbientOcclusionHemiUseNormals : 1; // 0xa
	char bOverride_AmbientOcclusionHemiCombineBeforeBlur : 1; // 0xb
	char bOverride_AmbientOcclusionHemiCombineWithMultiply : 1; // 0xb
	char bOverride_MinOverdrawCount : 1; // 0xb
	char bOverride_MaxOverdrawCount : 1; // 0xb
	char bOverride_MinOverdrawColour : 1; // 0xb
	char bOverride_MaxOverdrawColour : 1; // 0xb
	char bOverride_LPVIntensity : 1; // 0xb
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0xb
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0xc
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0xc
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0xc
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0xc
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0xc
	char bOverride_LPVSize : 1; // 0xc
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0xc
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0xc
	char bOverride_LPVGeometryVolumeBias : 1; // 0xd
	char bOverride_LPVVplInjectionBias : 1; // 0xd
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0xd
	char bOverride_LPVWorldRef : 1; // 0xd
	char bOverride_IndirectLightingColor : 1; // 0xd
	char bOverride_IndirectLightingIntensity : 1; // 0xd
	char bOverride_ColorGradingIntensity : 1; // 0xd
	char bOverride_ColorGradingLUT : 1; // 0xd
	char bOverride_DepthOfFieldFocalDistance : 1; // 0xe
	char bOverride_DepthOfFieldFstop : 1; // 0xe
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0xe
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0xe
	char bOverride_DepthOfFieldFocalRegion : 1; // 0xe
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0xe
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0xe
	char bOverride_DepthOfFieldScale : 1; // 0xe
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0xf
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0xf
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0xf
	char bOverride_DepthOfFieldMethod : 1; // 0xf
	char bOverride_DepthOfFieldBokehShape : 1; // 0xf
	char bOverride_DepthOfFieldOcclusion : 1; // 0xf
	char bOverride_DepthOfFieldColorThreshold : 1; // 0xf
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0xf
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x10
	char bOverride_MotionBlurAmount : 1; // 0x10
	char bOverride_MotionBlurMax : 1; // 0x10
	char bOverride_MotionBlurPerObjectSize : 1; // 0x10
	char bOverride_ScreenPercentage : 1; // 0x10
	char bOverride_AntiAliasingMethod : 1; // 0x10
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x10
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x10
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x11
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x11
	char bOverride_SkyLightIntensityScale : 1; // 0x11
	char bOverride_SkyLightIntensityScaleForMinSpec : 1; // 0x11
	char bOverride_SkyLightIntensityScaleInteriorInfluence : 1; // 0x11
	char bOverride_GlobalReflectionTint : 1; // 0x11
	char bOverride_InsideAmbientColourForParticlesInfluence : 1; // 0x11
	char bOverride_InsideAmbientColourForParticles : 1; // 0x11
	char bUseThisVolumeForLPVSettings : 1; // 0x12
	char bOverride_GaussianBlur : 1; // 0x12
	char bOverride_DisableShadowMapMethod : 1; // 0x12
	char bOverride_UseVolumeFogScale : 1; // 0x12
	char bOverride_VolumeFogScale : 1; // 0x12
	float WhiteTemp; // 0x14
	float WhiteTint; // 0x18
	FVector ColorSaturation; // 0x1c
	FVector ColorContrast; // 0x28
	FVector ColorGamma; // 0x34
	FVector ColorGain; // 0x40
	FVector ColorOffset; // 0x4c
	FLinearColor FilmWhitePoint; // 0x58
	FLinearColor FilmShadowTint; // 0x68
	float FilmShadowTintBlend; // 0x78
	float FilmShadowTintAmount; // 0x7c
	float FilmSaturation; // 0x80
	FLinearColor FilmChannelMixerRed; // 0x84
	FLinearColor FilmChannelMixerGreen; // 0x94
	FLinearColor FilmChannelMixerBlue; // 0xa4
	float FilmContrast; // 0xb4
	float FilmToeAmount; // 0xb8
	float FilmHealAmount; // 0xbc
	float FilmDynamicRange; // 0xc0
	float FilmSlope; // 0xc4
	float FilmToe; // 0xc8
	float FilmShoulder; // 0xcc
	float FilmBlackClip; // 0xd0
	float FilmWhiteClip; // 0xd4
	FLinearColor SceneColorTint; // 0xd8
	float SceneFringeIntensity; // 0xe8
	float SceneFringeSaturation; // 0xec
	float BloomIntensity; // 0xf0
	float BloomThreshold; // 0xf4
	float BloomSizeScale; // 0xf8
	float Bloom1Size; // 0xfc
	float Bloom2Size; // 0x100
	float Bloom3Size; // 0x104
	float Bloom4Size; // 0x108
	float Bloom5Size; // 0x10c
	float Bloom6Size; // 0x110
	FLinearColor Bloom1Tint; // 0x114
	FLinearColor Bloom2Tint; // 0x124
	FLinearColor Bloom3Tint; // 0x134
	FLinearColor Bloom4Tint; // 0x144
	FLinearColor Bloom5Tint; // 0x154
	FLinearColor Bloom6Tint; // 0x164
	float BloomDirtMaskIntensity; // 0x174
	FLinearColor BloomDirtMaskTint; // 0x178
	UTexture* BloomDirtMask; // 0x188
	float LPVIntensity; // 0x190
	float LPVVplInjectionBias; // 0x194
	float LPVSize; // 0x198
	float LPVSecondaryOcclusionIntensity; // 0x19c
	float LPVSecondaryBounceIntensity; // 0x1a0
	float LPVGeometryVolumeBias; // 0x1a4
	float LPVEmissiveInjectionIntensity; // 0x1a8
	float LPVDirectionalOcclusionIntensity; // 0x1ac
	FTransform LPVWorldRef; // 0x1b0
	float LPVDirectionalOcclusionRadius; // 0x1e0
	float LPVDiffuseOcclusionExponent; // 0x1e4
	float LPVSpecularOcclusionExponent; // 0x1e8
	float LPVDiffuseOcclusionIntensity; // 0x1ec
	float LPVSpecularOcclusionIntensity; // 0x1f0
	FLinearColor AmbientCubemapTint; // 0x1f4
	float AmbientCubemapIntensity; // 0x204
	UTextureCube* AmbientCubemap; // 0x208
	float AutoExposureLowPercent; // 0x210
	float AutoExposureHighPercent; // 0x214
	float AutoExposureMinBrightness; // 0x218
	float AutoExposureMaxBrightness; // 0x21c
	float AutoExposureSpeedUp; // 0x220
	float AutoExposureSpeedDown; // 0x224
	float AutoExposureBias; // 0x228
	float HistogramLogMin; // 0x22c
	float HistogramLogMax; // 0x230
	float LensFlareIntensity; // 0x234
	FLinearColor LensFlareTint; // 0x238
	float LensFlareBokehSize; // 0x248
	float LensFlareThreshold; // 0x24c
	UTexture* LensFlareBokehShape; // 0x250
	FLinearColor LensFlareTints[0x8]; // 0x258
	float VignetteIntensity; // 0x2d8
	float GrainJitter; // 0x2dc
	float GrainIntensity; // 0x2e0
	float AmbientOcclusionIntensity; // 0x2e4
	float AmbientOcclusionStaticFraction; // 0x2e8
	float AmbientOcclusionRadius; // 0x2ec
	char AmbientOcclusionRadiusInWS : 1; // 0x2f0
	float AmbientOcclusionFadeDistance; // 0x2f4
	float AmbientOcclusionFadeRadius; // 0x2f8
	float AmbientOcclusionDistance; // 0x2fc
	float AmbientOcclusionPower; // 0x300
	float AmbientOcclusionBias; // 0x304
	float AmbientOcclusionQuality; // 0x308
	float AmbientOcclusionMipBlend; // 0x30c
	float AmbientOcclusionMipScale; // 0x310
	float AmbientOcclusionMipThreshold; // 0x314
	float AmbientOcclusionHemiIntensity; // 0x318
	float AmbientOcclusionHemiPower; // 0x31c
	float AmbientOcclusionHemiRadius; // 0x320
	float AmbientOcclusionHemiBlurTolerance; // 0x324
	float AmbientOcclusionHemiUpsampleTolerance; // 0x328
	float AmbientOcclusionHemiNoiseFilterTolerance; // 0x32c
	float AmbientOcclusionHemiRejectionFalloff; // 0x330
	float AmbientOcclusionHemiBias; // 0x334
	char AmbientOcclusionHemiMaxDepthDownsample : 1; // 0x338
	char AmbientOcclusionHemiUseNormals : 1; // 0x338
	char AmbientOcclusionHemiCombineBeforeBlur : 1; // 0x338
	char AmbientOcclusionHemiCombineWithMultiply : 1; // 0x338
	float MinOverdrawCount; // 0x33c
	float MaxOverdrawCount; // 0x340
	FLinearColor MinOverdrawColour; // 0x344
	FLinearColor MaxOverdrawColour; // 0x354
	FLinearColor IndirectLightingColor; // 0x364
	float IndirectLightingIntensity; // 0x374
	float ColorGradingIntensity; // 0x378
	UTexture* ColorGradingLUT; // 0x380
	EDepthOfFieldMethod DepthOfFieldMethod; // 0x388
	float DepthOfFieldDepthBlurAmount; // 0x38c
	float DepthOfFieldDepthBlurRadius; // 0x390
	float DepthOfFieldFstop; // 0x394
	float DepthOfFieldFocalDistance; // 0x398
	float DepthOfFieldFocalRegion; // 0x39c
	float DepthOfFieldNearTransitionRegion; // 0x3a0
	float DepthOfFieldFarTransitionRegion; // 0x3a4
	float DepthOfFieldScale; // 0x3a8
	float DepthOfFieldMaxBokehSize; // 0x3ac
	float DepthOfFieldNearBlurSize; // 0x3b0
	float DepthOfFieldFarBlurSize; // 0x3b4
	UTexture* DepthOfFieldBokehShape; // 0x3b8
	float DepthOfFieldOcclusion; // 0x3c0
	float DepthOfFieldColorThreshold; // 0x3c4
	float DepthOfFieldSizeThreshold; // 0x3c8
	float DepthOfFieldSkyFocusDistance; // 0x3cc
	float MotionBlurAmount; // 0x3d0
	float MotionBlurMax; // 0x3d4
	float MotionBlurPerObjectSize; // 0x3d8
	float ScreenPercentage; // 0x3dc
	EAntiAliasingMethod AntiAliasingMethod; // 0x3e0
	float ScreenSpaceReflectionIntensity; // 0x3e4
	float ScreenSpaceReflectionQuality; // 0x3e8
	float ScreenSpaceReflectionMaxRoughness; // 0x3ec
	float SkyLightIntensityScale; // 0x3f0
	float SkyLightIntensityScaleForMinSpec; // 0x3f4
	float SkyLightIntensityScaleInteriorInfluence; // 0x3f8
	char bUseVolumeFogScale : 1; // 0x3fc
	float VolumeFogScale; // 0x400
	FLinearColor GlobalReflectionTint; // 0x404
	float InsideAmbientColourForParticlesInfluence; // 0x414
	FLinearColor InsideAmbientColourForParticles; // 0x418
	FRainPostProcessSettings RainSettings; // 0x428
	TArray<FLPVCascadeSettings> LPVSettings; // 0x4e8
	FPlayerAmbientLightOverrideSettings PlayerAmbientLightOverrideSettings; // 0x4f8
	float GaussianBlurIntensity; // 0x510
	EDisableShadowMapMethod DisableShadowMethod; // 0x514
	FWeightedBlendables WeightedBlendables; // 0x518
	TArray<UObject*> Blendables; // 0x528
};

struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	ENavLinkDirection Direction; // 0x8
	float SnapRadius; // 0x10
	float SnapHeight; // 0x14
	char bUseSnapHeight : 1; // 0x18
	char bSnapToCheapestArea : 1; // 0x18
	UNavArea* AreaClass; // 0x20
	FNavAgentSelector SupportedAgents; // 0x28
	char bSupportsAgent0 : 1; // 0x2c
	char bSupportsAgent1 : 1; // 0x2c
	char bSupportsAgent2 : 1; // 0x2c
	char bSupportsAgent3 : 1; // 0x2c
	char bSupportsAgent4 : 1; // 0x2c
	char bSupportsAgent5 : 1; // 0x2c
	char bSupportsAgent6 : 1; // 0x2c
	char bSupportsAgent7 : 1; // 0x2c
	char bSupportsAgent8 : 1; // 0x2d
	char bSupportsAgent9 : 1; // 0x2d
	char bSupportsAgent10 : 1; // 0x2d
	char bSupportsAgent11 : 1; // 0x2d
	char bSupportsAgent12 : 1; // 0x2d
	char bSupportsAgent13 : 1; // 0x2d
	char bSupportsAgent14 : 1; // 0x2d
	char bSupportsAgent15 : 1; // 0x2d
};

struct FPirateIdentity {
	FUniqueNetIdRepl UserId; // 0x0
	FString PirateId; // 0x18
	TMap<FString, FString> Claims; // 0x28
};

struct FResettableSettingsGroup {
	FName SettingsGroupName; // 0x0
	TArray<FName> SettingsNames; // 0x8
};

struct FTinySharkSpawnedNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FBootyItemOwnershipChangedParams {
	FGuid NewCrewId; // 0x0
	FGuid PreviousCrewId; // 0x10
	FGuid BootyId; // 0x20
	EBootyTypes BootyType; // 0x30
	FName Rarity; // 0x34
};

struct FPlayerBuriedItemServiceMapBundleGiftedEvent {
	FString PlayerName; // 0x0
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FFireGridVfxSpawnSettings {
	TArray<FFireGridRelativeSpawnDesc> InteriorSmokeSpawnDescs; // 0x0
	TArray<FFireGridLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs; // 0x10
	TArray<FFireParticleSpawnData> ParticleSpawnLODSettings; // 0x20
	FFireParticleSpawnData LowFrequencyParticleSpawnSettings; // 0x30
	TArray<FFireGridLowDetailRelativeSpawnDesc> ExteriorSmokeVFXSpawnDescs; // 0x40
	UFireGridVFXParamsDataAsset* VFXParams; // 0x50
};

struct FKrakenAnimatedTentacleAnimationSpecBone {
	FName BoneName; // 0x0
};

struct FEnableDefaultStormsData {
	bool Enable; // 0x0
};

struct FSpawnInstance {
	UObject* Type; // 0x30
	UItemSpawnData* ItemSpawnData; // 0x38
	bool CustomLifetimeManagement; // 0x40
};

struct FCurrencyGrantedMessage {
	uint32_t Amount; // 0x0
	EWalletCurrencyId Currency; // 0x4
	FGuid TransactionId; // 0x8
	FName EmissaryAffiliation; // 0x18
	uint32_t EmissaryLevel; // 0x20
	double EmissaryMultiplier; // 0x28
};

struct FPlayerItemUsageTelemetryFragmentInput : FTelemetryFragmentInput {
	UNotificationInputId* InputID; // 0x0
	TWeakObjectPtr<AActor> ItemBeingUsed; // 0x8
};

struct FNumCrewsPercentageModel {
	uint32_t NumCrews; // 0x0
	float Percentage; // 0x4
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingPtr ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x10
	bool bOverridesDefault; // 0x18
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FSeasonIconPopupAsset {
	FStringAssetReference GlowIcon; // 0x0
	FStringAssetReference Icon; // 0x10
	FString ToastSfxEventName; // 0x20
	FString ToastEventName; // 0x30
	FString ToastSwitchName; // 0x40
	FString ToastSwitchValue; // 0x50
	float ToastHoldDuration; // 0x60
};

struct FDamageableVulnerabilityPair {
	UDamagerType* DamagerType; // 0x0
	float DamageMultiplier; // 0x8
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FServerMigrationClientFailedTelemetryEvent {
	FGuid MigrationId; // 0x0
	FString Stage; // 0x10
	FString Error; // 0x20
};

struct FEventWielderHasExternalLightSource {
	bool bOn; // 0x0
};

struct FTreasurePickedUpTelemetryEvent {
	FGuid BootyId; // 0x0
	EBootyTypes BootyType; // 0x10
	FString Rarity; // 0x18
};

struct FCrewBootyStorage {
	FGuid CrewId; // 0x0
	TArray<FLocationBootyStorage> CrewStorage; // 0x10
};

struct FEventTinySharkDamaged {
	FImpactDamageEvent ImpactDamageEvent; // 0x0
};

struct FLightingControllerIslandDangerParams {
	float IslandDangerSpringAcceleration; // 0x0
	float MaxDangerValue; // 0x4
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
};

struct FTransitionLadderBeginEvent {
	ELadderTransitionMode LadderTransitionMode; // 0x0
	FLadderDefinition LadderDefinition; // 0x4
};

struct FPlayerCapstanUsageEndCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString ShipId; // 0x28
};

struct FShipPartsCataloguePartCustomisations {
	FString PartName; // 0x0
	TArray<FShipPartsCataloguePartCustomisation> Customisations; // 0x10
};

struct FStunnedActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FStunnedActionStateParams Params; // 0x30
};

struct FAggressiveGhostShipMineFormationOptions {
	int32_t NumMinesInFormation; // 0x0
	TArray<FAggressiveGhostShipMineFormation> Formations; // 0x8
};

struct FInventoryManipulatorAutoEquipPolicyEntry {
	UItemCategory* Category; // 0x0
	EInventoryManipulatorAutoEquipPolicy Policy; // 0x8
};

struct FNPCOnSurfaceShipSizeFloodedLevels {
	UShipSize* ShipSize; // 0x0
	TArray<FNPCOnSurfaceFloodedLevel> FloodedLevels; // 0x8
};

struct FMeshAnimatorSyncData {
	double AnimationStartTime; // 0x0
	int32_t AnimationIndex; // 0x8
};

struct FAssetAuditConstantEntry {
	FString Name; // 0x0
	int32_t Value; // 0x10
};

struct FStreamingTelemetryConfigurationSettings {
	int32_t PercentageOfPlayersToSendTelemetryFromForHighLOD; // 0x0
	int32_t PercentageOfPlayersToSendTelemetryFromForLowLOD; // 0x4
	int32_t PercentageOfPlayersToSendVerboseTelemetryFromForHighLOD; // 0x8
	int32_t PercentageOfPlayersToSendVerboseTelemetryFromForLowLOD; // 0xc
};

struct FPetRoamingAnimationStateDefinitionWrapper {
	FStringAssetReference LoadableDefinition; // 0x0
	TArray<FPetRoamingAnimationStateLoadableWeightedDefinition> LoadableWeightedDefinitions; // 0x10
	EAthenaAnimationPetRoamingState AnimationState; // 0x20
	UPetRoamingAnimationStateDefinitionDataAsset* DefinitionAsset; // 0x28
	TArray<FPetRoamingAnimationStateDefinitionWeightedDataAsset> WeightedDefinitionAssets; // 0x30
	bool LoadOnDemand; // 0x40
	bool UseWeightedAnimationArray; // 0x41
};

struct FAthenaAnimationObjectMeleeBlocking {
	UAnimSequence* BlockingInto; // 0x0
	UAnimSequence* BlockingIntoFromCombat; // 0x8
	UBlendSpace* BlockingMainBlendSpace; // 0x10
	UAnimSequence* BlockingFeedbackSequenceA; // 0x18
	UAnimSequence* BlockingFeedbackSequenceB; // 0x20
	UAnimSequence* BlockingOut; // 0x28
	UBlendSpace* Dodge; // 0x30
	UAnimSequence* BlockingIntoSwimming; // 0x38
	UBlendSpace* BlockingMainBlendSpaceSwimming; // 0x40
	UAnimSequence* BlockingFeedbackSequenceASwimming; // 0x48
	UAnimSequence* BlockingFeedbackSequenceBSwimming; // 0x50
	UAnimSequence* BlockingOutSwimming; // 0x58
};

struct FMechanismMaterialAnimationContext {
	UMeshComponent* Mesh; // 0x8
	TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x10
};

struct FPetAnimationDataRoaming {
	UPetRoamingAnimationStateDefinitionsDataAsset* RoamingAnimationStateDefinitionsAsset; // 0x0
	UAnimSequenceBase* Locomotion_In; // 0x8
	UBlendSpace1D* Locomotion; // 0x10
	UAnimSequenceBase* Locomotion_Out; // 0x18
	UAnimSequenceBase* Locomotion_Scared; // 0x20
	UAnimSequenceBase* Locomotion_Sad_Additive; // 0x28
	UAnimSequenceBase* TurnLeft; // 0x30
	UAnimSequenceBase* TurnRight; // 0x38
	UAnimSequenceBase* TurnLeftIntoLocomotion; // 0x40
	UAnimSequenceBase* TurnRightIntoLocomotion; // 0x48
	UAnimSequenceBase* Arrive; // 0x50
	UAnimSequenceBase* Exit; // 0x58
	UAnimSequenceBase* LandingLoop; // 0x60
	UAnimSequenceBase* Landing_Out; // 0x68
	UAnimSequenceBase* TakingOff_In; // 0x70
	UAnimSequenceBase* TakingOffLoop; // 0x78
	UBlendSpace1D* Flying; // 0x80
	UAnimSequenceBase* Flying_Scared; // 0x88
	UAnimSequenceBase* PositiveMood; // 0x90
	UAnimSequenceBase* CloseRadiusPositiveMood; // 0x98
};

struct FAthenaAnimationObjectFacial {
	TArray<UAnimMontage*> PrimaryContinuous; // 0x0
	TArray<UAnimMontage*> SecondaryContinuous; // 0x10
	TArray<UAnimMontage*> PrimaryOneShot; // 0x20
	TArray<UAnimMontage*> SecondaryOneShot; // 0x30
	TArray<UAnimMontage*> MeleeBlocking; // 0x40
	TArray<UAnimMontage*> MeleeAttack; // 0x50
	TArray<UAnimMontage*> MeleeBlockReact; // 0x60
};

struct FStaticMeshComponentAudioAssociation {
	FStaticMeshWwiseEmitterData PlaybackData; // 0x0
	FVector EmitterPositionRelativeToComponentOrigin; // 0x38
};

struct FFishAnimationSwimmingLoops {
	FFishAnimationSwimmingLoopAnimations TurnLeftLoopAnimations; // 0x0
	FFishAnimationSwimmingLoopAnimations TurnRightLoopAnimations; // 0x20
	FFishAnimationSwimmingLoopAnimations JumpingLoopAnimations; // 0x40
};

struct FTinySharkSpawnCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FEmissaryKilledAnotherEmissaryNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
	FName VictimCompanyName; // 0x18
};

struct FLevelSequencePlaybackSettings : FMovieSceneSequencePlaybackSettings {
	int32_t LoopCount; // 0x0
	float PlayRate; // 0x4
	bool bRandomStartTime; // 0x8
	float StartTime; // 0xc
	bool bRestoreState; // 0x10
	TScriptInterface<Class> BindingOverrides; // 0x18
};

struct FCrewBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	FGuid CrewId; // 0x0
};

struct FEventTriggerForceFeedback {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
	bool Looping; // 0x8
	FName Tag; // 0xc
};

struct FSimplygonChannelCastingSettings {
	ESimplygonMaterialChannel MaterialChannel; // 0x0
	ESimplygonCasterType Caster; // 0x1
	bool bActive; // 0x2
	ESimplygonColorChannels ColorChannels; // 0x3
	int32_t BitsPerChannel; // 0x4
	bool bUseSRGB; // 0x8
	bool bBakeVertexColors; // 0x9
	bool bFlipBackfacingNormals; // 0xa
	bool bUseTangentSpaceNormals; // 0xb
	bool bFlipGreenChannel; // 0xc
};

struct FContestScoreTelemetryGameEvent {
	EScoreReason ScoreReason; // 0x0
	int32_t CurrentScore; // 0x4
	int32_t ScoreChangeAmount; // 0x8
	FString ScoreContext; // 0x10
	FGuid InstigatorId; // 0x20
};

struct FProposedVoyageEntry {
	UVoyageProposalDesc* ProposalDesc; // 0x0
	AAthenaPlayerState* ProposingPlayerState; // 0x8
};

struct FPlayModeDefiniton {
	TArray<FString> Tags; // 0x0
	TArray<FString> States; // 0x10
	int32_t CrewMin; // 0x20
	int32_t CrewMax; // 0x24
};

struct FTestControlObjectActionStateConstructionInfo : FControlObjectActionStateConstructionInfo {
	float DockTime; // 0x48
};

struct FEventUserGameSettingsIntegerChanged {
	FName KeyName; // 0x0
	int32_t Value; // 0x8
};

struct FAIFormRankMapping {
	UAthenaAIFormDataAsset* Form; // 0x0
	TArray<float> Weights; // 0x8
};

struct FEventAIAmmoSelected {
	UAthenaAIAmmoDataAsset* Ammo; // 0x0
};

struct FWWiseEmitterCreationSwitchSetting {
	FName SwitchGroup; // 0x0
	FName SwitchValue; // 0x8
};

struct FCargoDeliveredTelemetryEvent {
	bool GoldAwarded; // 0x0
	FGuid BootyId; // 0x4
	EBootyTypes BootyType; // 0x14
	FString Rarity; // 0x18
	int32_t MaxQuality; // 0x28
	int32_t DeliveredQuality; // 0x2c
	bool DeliveredOnTime; // 0x30
};

struct FTestFloatObject {
	float TestFloat1; // 0x0
	float TestFloat2; // 0x4
};

struct FClientRequestTeleportCompleteAckNetworkEvent : FNetworkEventStruct {
	USceneComponent* Base; // 0x10
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
};

struct FCollectionStaticMeshLimits : FCollectionMeshLimitsBase {
	int32_t MaxVerts; // 0x0
	int32_t MaxMemory; // 0x4
};

struct FEventCharacterFootImpact {
	FCharacterFootImpactResult Result; // 0x0
};

struct FAnimationLookAtParams {
	float ActivationSpeed; // 0x0
	float HorizontalLimit; // 0x4
	float VerticalLimit; // 0x8
};

struct FSeasonGoalInfo {
	FGuid GoalId; // 0x0
	int64_t Threshold; // 0x10
	FString XPGain; // 0x18
	FString LocalizedTitle; // 0x28
};

struct FEventDeathCameraActivated {
	float CameraDuration; // 0x0
};

struct FAudioEmitterParameters {
	UWwiseObjectPoolWrapper* LocalEmitterPool; // 0x0
	UWwiseObjectPoolWrapper* RemoteEmitterPool; // 0x8
};

struct FUseLadderBeginEvent {
	FLadderDefinition LadderDefinition; // 0x0
};

struct FGameplayCueNotifyData {
	FGameplayTag GameplayCueTag; // 0x0
	FStringAssetReference GameplayCueNotifyObj; // 0x8
	UObject* LoadedGameplayCueClass; // 0x18
};

struct FEventAILoadoutSelected {
	FItemLoadout Loadout; // 0x0
	UItemDesc* NonStorableItem; // 0x20
};

struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	float ConstantX; // 0x3c
	float ConstantY; // 0x40
};

struct FAthenaAnimationCapstan {
	float IntentInterpSpeed; // 0x0
	FVector2D CapstanAngularVelocityRange; // 0x4
	FVector2D AnimationRemapSpeedRange; // 0xc
	float AngularVelocityInterpSpeed; // 0x14
	FSocketId LeftHandMaleSocket; // 0x18
	FSocketId RightHandMaleSocket; // 0x38
	FSocketId LeftHandFemaleSocket; // 0x58
	FSocketId RightHandFemaleSocket; // 0x78
	float TranslationStrength; // 0x98
	float RotationStrength; // 0x9c
	float BlendInSpeed; // 0xa0
	float BlendOutSpeed; // 0xa4
	bool AnimationOverride; // 0xa8
	EAthenaAnimationCapstanState CapstanState; // 0xa9
	float AngularVelocityWanted; // 0xac
	AActor* ControlledObject; // 0xb0
};

struct FKrakenShipWrappingTentacleParams {
	FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates; // 0x0
	float TimeIntoWrappingToDisableInteractables; // 0x80
	float TimeIntoUnwrappingToEnableInteractables; // 0x84
	float TimeIntoWrappingToEnableCollisions; // 0x88
	float TimeIntoUnwrappingToDisableCollisions; // 0x8c
	float TimeIntoEnteringShakeAttackToEnableCollisions; // 0x90
	float TimeIntoExitingShakeAttackToDisableCollisions; // 0x94
	float HighDetailAnimationStreamingDistance; // 0x98
	FKrakenShipWrappingTentacleVFXParams WrappingOutOfWaterSplashVFX; // 0xa0
	FKrakenShipWrappingTentacleVFXParams WrappingIntoWaterSplashVFX; // 0xc8
};

struct FPetBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<AActor> PetInfo; // 0x0
};

struct FCookEndCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString FoodType; // 0x28
	FString CookedState; // 0x38
};

struct FAthenaAnimationObjectIdleAnimations {
	UAnimSequence* Idle1; // 0x0
	UAnimSequence* Idle2; // 0x8
	UAnimSequence* Idle3; // 0x10
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FPoolableCollectionMapConfiguration {
	TArray<FPoolableCollectionMapConfigurationEntry> Pools; // 0x0
	bool PopulateJustInTime; // 0x10
};

struct FAthenaAnimationSkeletonKnockbackLocomotion {
	UAnimSequence* Forwards; // 0x0
	UAnimSequence* Backwards; // 0x8
};

struct FPetFeedingParams {
	FPetFeedingAnimationData EatingAnimData; // 0x0
	FPetFeedingAnimationData FedAnimData; // 0x8
	FPetFeedingAnimationData NotFedAnimData; // 0x10
	FPetFeedingAnimationData SickAnimData; // 0x18
	FPetFeedingAnimationData RefusalAnimData; // 0x20
	float TimeToStartEating; // 0x28
	float TimeUntilGivingUp; // 0x2c
	float DistToleranceSquared; // 0x30
	float RotationTolerance; // 0x34
};

struct FMaterialAnimatorGroup {
	FName MaterialParamName; // 0x0
	TArray<FMaterialAnimatorAnimationEntry> Animations; // 0x8
};

struct FCrewSessionQoSMeasurementTelemetry {
	FString Location; // 0x0
	uint32_t AvgLatency; // 0x10
	int32_t NumReceivedPings; // 0x14
	int32_t NumFailedPings; // 0x18
	ECrewSessionQoSServerResolveResult ResolveResult; // 0x1c
	bool LocationWasConsidered; // 0x1d
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	int16_t LastInitializedContextCounter; // 0x30
	int16_t LastCacheBonesContextCounter; // 0x32
	int16_t LastUpdatedContextCounter; // 0x34
	int16_t LastEvaluatedContextCounter; // 0x36
	FPoseLink Pose; // 0x38
};

struct FClamberActionStateParams : FDockToObjectActionStateParams {
	float InitialClamberPitch; // 0x10
	FLookAtOffsetParams LookAtOffsetParams; // 0x14
};

struct FEntitlementMapEntry {
	FName Identifier; // 0x0
	FStringClassReference EntitlementDesc; // 0x8
};

struct FLadderBlendParams {
	float RotationBlendStartByPercentage; // 0x0
	float RotationBlendEndByPercentage; // 0x4
	float LocationBlendEndByPercentage; // 0x8
};

struct FCharacterFootImpactResult {
	FHitResult HitResult; // 0x0
	ECharacterFootImpactType FootImpactType; // 0x80
	FTransform SocketTransform; // 0x90
	FVector SocketVelocity; // 0xc0
	int32_t FootIndex; // 0xcc
};

struct FQuestPageListPopulator {
	TArray<UQuestBookPageList*> PageListsToUpdate; // 0x0
};

struct FShipCustomizationChestMutualExclusion {
	UShipCustomizationCategory* A; // 0x0
	UShipCustomizationCategory* B; // 0x8
};

struct FAggressiveGhostShipDespawnTelemetryEvent {
	FGuid ShipId; // 0x0
	EAggressiveGhostShipType ShipType; // 0x10
	FGuid EncounterId; // 0x14
	EEncounterActorRemovedReason Reason; // 0x24
};

struct FAthenaPlayerCharacterModelSwap {
	USkeletalMesh* FirstPersonMesh; // 0x0
	UAnimationDataStoreId* FirstPersonAnimSetDataId; // 0x8
	USkeletalMesh* ThirdPersonMesh; // 0x10
	UAnimationDataStoreId* ThirdPersonAnimSetDataId; // 0x18
};

struct FSharkPlayerStats {
	FPlayerStat SharkDefeatStat; // 0x0
	FPlayerStat SharkDefeatStatLegend; // 0x4
};

struct FNotesManagementAddNoteScheduleResponseModel {
	bool Success; // 0x0
	FGuid ScheduleId; // 0x4
};

struct FContestCrewManagementMemberDataEvent {
	TArray<FContestCrewManagementMemberData> Members; // 0x0
};

struct FTransitionLadderActionStateConstructionInfo : FDockToObjectActionStateConstructionInfo {
	float StartingInteractionHeight; // 0x48
	char ClimbId; // 0x4c
	ELadderTransitionMode LadderTransitionMode; // 0x4d
	FLadderDefinition LadderDefinition; // 0x50
};

struct FQueryConfirmInviteResponse {
	bool IsInviteConfirmationPending; // 0x0
	FString ErrorMessage; // 0x8
	bool IsErrorMessage; // 0x18
};

struct FStaticMeshComponentLODInfo {
	TArray<FPaintedVertex> PaintedVertices; // 0x10
};

struct FEventCurrentShipChanged {
	AActor* CurrentShip; // 0x0
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FEventShipLightStateChange {
	AActor* Ship; // 0x0
	AShipInteractableLight* Light; // 0x8
};

struct FEmblemProgress {
	FGuid Id; // 0x0
	FName CompanyId; // 0x10
	bool IsCompleted; // 0x18
	TArray<FEmblemCriteriaProgress> CriteriaProgress; // 0x20
};

struct FPlayerModerationParams {
	float PlayerReportableDistance; // 0x0
	float PlayerReportableTimeBetweenChecksInSeconds; // 0x4
	float RemovePlayerFromListAfterSeconds; // 0x8
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

struct FUIScreenTransitionEvent {
	FString CurrentScreen; // 0x0
	FString PreviousScreen; // 0x10
};

struct FReplicatedAuthoritativeTime {
	FReplicatedDateTime WorldTime; // 0x0
	FReplicatedDateTime SyncTime; // 0x8
};

struct FServerMigrationTelemetrySucceededData {
	TArray<FServerMigrationTelemetryActorData> ActorDetails; // 0x0
	float TotalTime; // 0x10
	int32_t NumClients; // 0x14
	int32_t NumActorsMigrated; // 0x18
	int32_t ActorSerialisationBytes; // 0x1c
};

struct FTrackedActorData {
	AActor* Actor; // 0x0
};

struct FLevelCompletionEvent {
	FGuid SeasonId; // 0x0
	int32_t Level; // 0x10
	int32_t TimeSpentInLevel; // 0x14
	int32_t Tier; // 0x18
	int32_t TimeSpentInTier; // 0x1c
	bool TierCompleted; // 0x20
	bool SeasonCompleted; // 0x21
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve FloatCurve; // 0x38
};

struct FCrewArenaRivalVotingData {
	bool IsCrewMemberInFavourOfChangingArenaLobby; // 0x0
	char NumberOfVotes; // 0x1
};

struct FContextAction {
	URadialContextBase* Context; // 0x0
	URadialCreationRuleAsset* Radial; // 0x8
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FEventSendCapturedKeybind {
	FString CapturedKey; // 0x0
};

struct FEventAISenseAnimationChange {
	ESkeletonSensingState ActiveSenseState; // 0x0
	AAthenaCharacter* Owner; // 0x8
};

struct FAllianceDisbandedTelemetryEvent {
	FGuid AllianceId; // 0x0
	FGuid LeavingCrewSessionId; // 0x10
};

struct FContestUpdateScoreBoardTimer {
	FString TimeRemaining; // 0x0
};

struct FMastReceivedDamageEvent {
	int32_t OldLevelsOfDamage; // 0x0
	int32_t DamageReceived; // 0x4
	int32_t CurrentLevelsOfDamage; // 0x8
};

struct FPlayerBuriedItemsMapAddedToStoreTelemetryEvent {
	FGuid MapBundleId; // 0x0
	FGuid OwningCrewID; // 0x10
	FGuid OwningCrewSessionId; // 0x20
	FGuid MapId; // 0x30
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FStoryInfoModel {
	FName Name; // 0x0
	FDateTime StartTime; // 0x8
	FDateTime EndTime; // 0x10
};

struct FDeepSeaRegionAmbienceAudio {
	UWwiseEvent* PlayerInDeepSeaStart; // 0x0
	UWwiseEvent* PlayerInDeepSeaStop; // 0x8
	bool OnlyPostMoodMusicEventsWhenSubmerged; // 0x10
};

struct FTinySharkServiceParams {
	UTinySharkParamsDataAsset* TinySharkParams; // 0x0
	TArray<FTinySharkShipSpawnData> SpawnForShipData; // 0x8
	UEnvQuery* SpawnForShipQuery; // 0x18
	float SpawnFailureTimer; // 0x20
};

struct FBootyItemInfoMetaWrapper : FItemMetaBase {
	FGuid BootyId; // 0x18
};

struct FBuoyancyComponentExclusionParams {
	float MaxDistanceCheck; // 0x0
	ECollisionChannel HitsChannel; // 0x4
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x18
	TArray<FName> LevelNames; // 0x20
};

struct FKrakenPlayerGrabbingHoldingStateTransitionChance {
	float WeightedChance; // 0x0
	UKrakenAnimatedTentacleState* StateToTransitionTo; // 0x8
};

struct FPlayerChangedShipLoadoutCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString ShipId; // 0x28
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

struct FPopupQueueStarted {
	FString Id; // 0x0
};

struct FEventSendNewTextMessageToServer {
	FText Message; // 0x0
};

struct FGlobalCustomServerEvent : FCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FEmissaryLevelEntry {
	UCompany* Company; // 0x0
	TArray<FEmissaryLevelData> CompanyLevelData; // 0x8
	UDataAsset* MaxRankPopUpToastData; // 0x18
	UDataAsset* EmissarySunkPopUpToastData; // 0x20
	FEmissaryCompanyCosmetics CompanyCosmetics; // 0x28
	TArray<FPlayerStat> StatsToFireOnFullEmissaryClothing; // 0x48
	TArray<FPlayerStat> StatsToFireOnFullEmissaryShipCustomizations; // 0x58
	TArray<FPlayerStat> StatsToFireOnFullShipCustomizationsAndClothing; // 0x68
};

struct FBountyQuestRandomSpawnGeneratorParams {
	FWeightedProbabilityRange NumberOfWaves; // 0x0
	FWeightedProbabilityRange NumberOfWaveGroups; // 0x20
	int32_t MinNumberOfAIPerWave; // 0x40
	int32_t MaxNumberOfAIPerWave; // 0x44
	int32_t MinFormsPerEncounter; // 0x48
	int32_t MaxFormsPerEncounter; // 0x4c
	int32_t MinVarietiesPerEncounter; // 0x50
	int32_t MaxVarietiesPerEncounter; // 0x54
	float MinTimeBetweenSpawns; // 0x58
	float MaxTimeBetweenSpawns; // 0x5c
	float MinTimeBetweenWaves; // 0x60
	float MaxTimeBetweenWaves; // 0x64
	FWeightedProbabilityRange WavesPerRelocate; // 0x68
	FWeightedProbabilityRange WaveSplitChance; // 0x88
	TArray<float> WaveSuicideTime; // 0xa8
	float WaveSuicideMinDist; // 0xb8
	UAIEncounterGenerationRecipeRankOrderList* Recipes; // 0xc0
	FWeightedProbabilityRange NumberOfTargetsTotal; // 0xc8
	FWeightedProbabilityRange NumberOfTargetsWhichAreCaptains; // 0xe8
	float ChanceOfAllTargetsBeingOnTheLastWave; // 0x108
	float ChanceOfFemale; // 0x10c
};

struct FDisplayShutdownTimerMessageClient {
	FTimespan TimeTillShutdown; // 0x0
	FTimespan DisplayPeriod; // 0x8
};

struct FControlObjectActionStateConstructionInfo : FDockToObjectActionStateConstructionInfo {
	FNetObjectPtr DockToObject; // 0x30
	bool IsInteractingActorFemale; // 0x44
};

struct FMerchantQuestDesc : FQuestDesc {
	UMerchantMapLayout* Layout; // 0x28
	FText PickupLocationLocalisedIslandName; // 0x30
	FText DeliveryLocationLocalisedIslandName; // 0x68
	FTreasureMapTextDesc PickupLocation; // 0xa0
	FTreasureMapTextDesc DeliveryLocation; // 0xe8
	FTreasureMapTextDesc DeliverByTimeText; // 0x130
	TArray<FMerchantMapItemData> ItemData; // 0x178
	TArray<FMerchantItemGroupDesc> ItemGroupDescs; // 0x188
	int32_t TimeLimitInMinutes; // 0x198
	FGameTime DeliverByTime; // 0x1a0
	UTreasureMapItemDesc* OverrideTreasureMapItemDesc; // 0x1a8
};

struct FEventFishingReelingWhileBattlingStateChange {
	bool IsReelingWhileBattling; // 0x0
};

struct FShipCurseSpawnedFXForCurse {
	TArray<FShipCurseSpawnedFXObject> SpawnedFXObjects; // 0x8
};

struct FEjectFromTunnelOfTheDamnedActionStateParams {
	float FadeDuration; // 0x0
	float FadeEventTimeout; // 0x4
	float FadeServerTimeout; // 0x8
	FLinearColor FadeColour; // 0xc
	bool FadeAudio; // 0x1c
};

struct FPocketWatchHandParams {
	TArray<FPocketWatchTickAnimation> PrimaryTickAnimations; // 0x0
	FWeightedProbabilityRange PrimaryTickAnimationProbabilities; // 0x10
	TArray<FPocketWatchTickAnimation> SpecialTickAnimations; // 0x30
	FWeightedProbabilityRange SpecialTickAnimationProbabilities; // 0x40
	float ProbabilityOfSpecialTick; // 0x60
};

struct FShipFireLightParams {
	float FadeOutTime; // 0x0
	FName FirePostprocessComponentName; // 0x4
	float DistanceToFireToActivatePostProcessSq; // 0xc
	float PostProcessSpringAcceleration; // 0x10
};

struct FDistanceThrottledRandomParticleSystemPicker {
	TArray<FDistanceThrottledRandomParticleSystemPickerEntry> Entries; // 0x0
};

struct FEventShipSpawnLocationCreated {
	AShipSpawnLocation* SpawnLocation; // 0x0
};

struct FFailedToFindPlayerSpawnLocationPotentialLocation {
	FVector Position; // 0x0
	FString Description; // 0x10
};

struct FFortSpawnTelemetryEvent {
	FGuid FortId; // 0x0
	FGuid ConfigSpawnId; // 0x10
	FName FortName; // 0x20
	FName FortType; // 0x28
};

struct FDebugSuperSailorSetFwdSpeedRPCEvent : FNetworkEventStruct {
	float FwdSpd; // 0x10
};

struct FClientStartServerMatchmakingTelemetryEvent {
	FGuid CrewId; // 0x0
	FString SessionType; // 0x10
	FGuid MatchmakingAttemptId; // 0x20
};

struct FHitReactionAnimationData {
	UBlendSpace1D* HitReactBlendSpace; // 0x0
};

struct FTestMessageTimespan {
	FTimespan Timespan; // 0x0
};

struct FNPCOnSurfaceVOEntry {
	USceneDialogueData* DialogueData; // 0x0
	UWwiseEvent* VOEvent; // 0x8
};

struct FStringAssetClassPair {
	FString String; // 0x0
	UClass* AssetClass; // 0x10
	TArray<FStringAssetClassPairFeatureOverride> FeatureOverrides; // 0x30
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FAthenaAICharacterControllerWeightedAmmoType {
	UItemDesc* AmmoType; // 0x0
	float Weighting; // 0x8
};

struct FEventCharacterKnockedBack {
	FName RumbleTag; // 0x0
};

struct FAthenaAnimationObjectMeleeV2SpecialAttack {
	FAthenaAnimationObjectComplexOneShot Attack; // 0x0
	FAthenaAnimationObjectComplexOneShot SwimmingAttack; // 0x28
};

struct FNPCDialogData {
	UNPCDialogHeader* Header; // 0x0
	TArray<UNPCDialogOption*> Options; // 0x8
};

struct FCurrentPhaseData {
	FBattleElevatorEventRoomPhase CurrentPhase; // 0x0
};

struct FClothingLoadout {
	TArray<UClothingDesc*> Items; // 0x0
};

struct FStatusEffectPersistenceKey {
	FStatus AppliedStatuses; // 0x0
};

struct FTradeRouteMapTextData {
	FText Text; // 0x0
	ETradeRouteMapTextIdentifier TextId; // 0x38
	FTreasureMapWidgetText TextLayout; // 0x3c
};

struct FEventKrakenAnimatedTentacleTriggerHitReaction {
	int32_t CollisionBoneIndex; // 0x0
};

struct FEventPlayerSendOutDirectTextMessage {
	APlayerState* Sender; // 0x0
	FText Message; // 0x8
};

struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x0
	bool bOverride_BlendMode; // 0x1
	bool bOverride_ShadingModel; // 0x2
	bool bOverride_DitheredLODTransition; // 0x3
	bool bOverride_TwoSided; // 0x4
	bool bOverride_TessellationMode; // 0x5
	bool bOverride_LowResTranslucency; // 0x6
	bool bOverride_SkyLightWhenOccluded; // 0x7
	bool bOverride_CloudShadowInfluence; // 0x8
	bool bOverride_LightColorInfluence; // 0x9
	bool bOverride_AmbientLightColorInfluence; // 0xa
	bool bOverride_LightIntensityInfluence; // 0xb
	bool bOverride_AmbientLightIntensityInfluence; // 0xc
	bool bOverride_AlternativeAmbientLightColorInfluence; // 0xd
	bool bOverride_AlternativeAmbientLightIntensityInfluence; // 0xe
	bool bOverride_EvaluateLightningAtParticleCenter; // 0xf
	bool bOverride_DontRenderWhenPlayerInsideShip; // 0x10
	bool bOverride_ObjectFadeEnabled; // 0x11
	bool bOverride_ObjectFadeRate; // 0x12
	bool bOverride_ObjectFadeDistanceThreshold; // 0x13
	bool bOverride_TranslucencyDirectionalLightingIntensity; // 0x14
	bool bOverride_TranslucencyVolumeFogScale; // 0x15
	bool bOverride_TranslucencyDistanceFog; // 0x16
	bool bOverride_TranslucencyPass; // 0x17
	bool bOverride_TranslucencyInReflection; // 0x18
	float OpacityMaskClipValue; // 0x1c
	EBlendMode BlendMode; // 0x20
	EMaterialShadingModel ShadingModel; // 0x21
	char TwoSided : 1; // 0x24
	char DitheredLODTransition : 1; // 0x24
	EMaterialTessellationMode D3D11TessellationMode; // 0x28
	char ForceResolution : 1; // 0x2c
	ELowResTranslucencyCascade ForcedResolution; // 0x30
	char DisableTransition : 1; // 0x34
	float FirstSplitDistance; // 0x38
	float SecondSplitDistance; // 0x3c
	float FullResInFrontMaxDistance; // 0x40
	char FullResInFront : 1; // 0x44
	char PopPerParticle : 1; // 0x44
	float SkyLightWhenOccluded; // 0x48
	float CloudShadowInfluence; // 0x4c
	float LightIntensityInfluence; // 0x50
	float LightColorInfluence; // 0x54
	float AmbientLightIntensityInfluence; // 0x58
	float AmbientLightColorInfluence; // 0x5c
	float AlternativeAmbientLightIntensityInfluence; // 0x60
	float AlternativeAmbientLightColorInfluence; // 0x64
	char bEvaluateLightningAtParticleCenter : 1; // 0x68
	char bDontRenderWhenPlayerInsideShip : 1; // 0x68
	char ObjectFadeEnabled : 1; // 0x68
	float ObjectFadeRate; // 0x6c
	float ObjectFadeDistanceThreshold; // 0x70
	float TranslucencyDirectionalLightingIntensity; // 0x74
	float TranslucencyVolumeFogScale; // 0x78
	char TranslucencyDistanceFog : 1; // 0x7c
	char TranslucencyInReflection : 1; // 0x7c
	ETranslucencyPass TranslucencyPass; // 0x80
};

struct FShroudBreakerActivateEffectsEvent {
	FGuid ShroudBreakerId; // 0x0
};

struct FAlliance {
	FGuid AllianceId; // 0x0
	TArray<FGuid> Crews; // 0x10
	char AllianceIndex; // 0x20
};

struct FStreamingTelemetryBaseEvent {
	FString LevelName; // 0x0
	int32_t LodLevel; // 0x10
	FVector PlayerPosition; // 0x14
	float DistanceFromPlayer; // 0x20
	float DistanceFromBoundsToPlayer; // 0x24
	bool PlayerIsWaitingToSpawn; // 0x28
	bool PlayerIsTeleporting; // 0x29
};

struct FFireDefaultVFXSpawnData {
	FFireCellStateParticleTemplate Template; // 0x0
	FFireCellDesc CellDesc; // 0x40
};

struct FSessionCreationCrewResponseModel {
	FString SessionName; // 0x0
	FSessionCreationCrewModel Crew; // 0x10
};

struct FReputationDisplayInformation {
	TArray<FCompanyReputationSummary> CompanyReputationSummaries; // 0x0
};

struct FComplexItemQualityEntry {
	EStatusType OnTime; // 0x0
	EHealthIndex HealthLevel; // 0x1
	EStatusType IsComissioned; // 0x2
	EStatusType IsStolen; // 0x3
	EItemQualityQueryReason QueryReason; // 0x4
	EEmissaryQualityLevel QualityLevel; // 0x5
	FName Rarity; // 0x8
};

struct FClothingChestChangeClothingEvent {
	TArray<UClothingDesc*> Adds; // 0x0
	TArray<UClothingDesc*> Removes; // 0x10
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FPlayerDepartLocationTelemetryEvent {
	FString LocationName; // 0x0
};

struct FFishAnimationParams {
	EFishAnimationState FishAnimationState; // 0x0
	int32_t FishLoopEndingDirection; // 0x4
};

struct FCapstanAudioParams {
	UWwiseEvent* CapstanStart; // 0x0
	UWwiseEvent* CapstanStop; // 0x8
	UWwiseEvent* CapstanDamagedStart; // 0x10
	UWwiseEvent* CapstanDamagedStop; // 0x18
	UWwiseEvent* CapstanStopFullyRaised; // 0x20
	UWwiseEvent* CapstanStopFullyLowered; // 0x28
	UWwiseObjectPoolWrapper* CapstanEmitterPool; // 0x30
	FName CapstanTurnRateRtpc; // 0x38
	float CapstanTurnMinRtpcValue; // 0x40
	float CapstanTurnMaxRtpcValue; // 0x44
	FName BoatVelocityRtpc; // 0x48
	float BoatVelocityMinRtpcValue; // 0x50
	float BoatVelocityMaxRtpcValue; // 0x54
	float EmpiricalMaxShipVelocity; // 0x58
	FName CapstanDamageRtpc; // 0x5c
	float CapstanDamageRtpcMaxValue; // 0x64
};

struct FOnFireChangedEvent {
	bool OnFire; // 0x0
};

struct FEventTriggerMysteriousNotesPopup {
	APlayerController* PlayerController; // 0x0
	bool CinematicSkipped; // 0x8
};

struct FShipLiveryTeamSet {
	TArray<FShipLiveryCatalogueEntry> ShipCatalogue; // 0x0
};

struct FMaxHolePerIslandDataAsset {
	FName IslandName; // 0x0
	int32_t MaxHoles; // 0x8
};

struct FLightingControllerLightningParams {
	UCurveFloat* LightningTimeIntensityCurve; // 0x0
	UCurveFloat* LightningDistanceIntensityCurve; // 0x8
	float MaxLightningDistance; // 0x10
	float SkyLightIntensity; // 0x14
	float SkyLightMaxLerp; // 0x18
	float SunLightIntensity; // 0x1c
	float SunLightMaxLerp; // 0x20
	float FoamIntensity; // 0x24
	float FoamMaxLerp; // 0x28
	float RainIntensity; // 0x2c
	float LightningDuration; // 0x30
	float SkyLightOcclusion; // 0x34
	float CloudShadowMultiplier; // 0x38
};

struct FRequestEventShopOffersEvent {
	FString CatalogName; // 0x0
};

struct FCompanyValidationAssetUnit {
	UCompany* Company; // 0x0
	bool ShouldHaveLevels; // 0x8
	bool ShouldHaveEmblems; // 0x9
};

struct FAudioStingShipsSpotted {
	AActor* SpottedShip; // 0x0
	double TimeSpotted; // 0x8
};

struct FPlayerHeroStatUnit {
	FPlayerStat PlayerStat; // 0x0
	FName HeroStatId; // 0x4
};

struct FAllianceRewardRequestEvent {
	FGuid AllianceId; // 0x0
	FGuid RequestID; // 0x10
	FRewardRequestCrewGame PrimaryRecipient; // 0x20
	TArray<FRewardRequestCrewGame> SecondaryRecipients; // 0x50
	FName RewardId; // 0x60
	FName CompanyAffiliation; // 0x68
	FGuid BootyId; // 0x70
	FName NPCName; // 0x80
	bool NotifyPlayer; // 0x88
	bool DontRewardCurrency; // 0x89
	bool DontRewardXp; // 0x8a
	bool DontRewardSeasonXp; // 0x8b
};

struct FScoreRewardWieldableItemData {
	AWieldableItem* WieldableItemClass; // 0x0
	FScoreRewardValueData NotStolenScore; // 0x8
	FScoreRewardValueData StolenScore; // 0x38
};

struct FLightingControllerMoonParams {
	TArray<float> MoonPhaseAngles; // 0x0
	float MoonYaw; // 0x10
	float MoonElevation; // 0x14
	float MoonOrbitVerticalOffset; // 0x18
	float MoonMeshDistance; // 0x1c
	float MoonMeshSize; // 0x20
	float SunInfluenceDuration; // 0x24
	float SunInfluenceDistance; // 0x28
	int32_t NumMoonPhases; // 0x2c
	int32_t DaysInMoonCycle; // 0x30
	char SunInfluencesRotation : 1; // 0x34
	char SunInfluencesLighting : 1; // 0x34
};

struct FMechanismAnimationEvent_VFXParams {
	UParticleSystem* ParticleSystem; // 0x0
	EVFXMechanismAnimationEventMode Mode; // 0x8
	FName MechanismVFXComponentTag; // 0xc
	FName AttachParentComponentTag; // 0x14
	EAttachLocation AttachType; // 0x1c
	FVector LocationOffset; // 0x20
	FRotator RotationOffset; // 0x2c
	FVector Scale; // 0x38
	bool IsUnderwater; // 0x44
	EVfxRegion VFXRegion; // 0x45
};

struct FTextureSwitchGenderEntry {
	EIPGGender Gender; // 0x0
	FStringAssetReference Texture; // 0x8
};

struct FPlayerBuriedItemServicePlayerTreasureDiscoveredTelemetryEvent {
	EBootyTypes BootyType; // 0x0
	FGuid BootyId; // 0x4
	FString ItemName; // 0x18
	FGuid BuriedByCrewId; // 0x28
	FGuid DiscoveredByCrewId; // 0x38
	TArray<FGuid> CrewBuryHistory; // 0x48
	TArray<FGuid> CrewDiscoverHistory; // 0x58
	bool WasDeferredRewardSent; // 0x68
};

struct FAIShipCrewAmmoType {
	ECannonballIconType IconType; // 0x0
	uint8_t IconIndex; // 0x1
	FStringAssetReference AmmoType; // 0x8
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FAchievementKillOpponentFromBehindWithBlunderbuss {
	float FacingDirAngleTolerance; // 0x0
};

struct FNetworkDataTelemetryFragment {
	uint64_t AvgRttMilliseconds; // 0x0
	uint64_t AvgOutBytesPerSecond; // 0x8
	uint64_t AvgInBytesPerSecond; // 0x10
	uint64_t AvgOutVoiceBytesPerSecond; // 0x18
	uint64_t AvgInVoiceBytesPerSecond; // 0x20
};

struct FEmblemSetInformation {
	bool LockedStatus; // 0x0
	TArray<FEmblemInformation> Emblems; // 0x8
};

struct FInteractOnServerRpc : FBoxedRpc {
	FNetSubObjectPtr Interactable; // 0x10
	UNotificationInputId* NotificationInputId; // 0x28
};

struct FQuestVariableItemDescTypeArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FEmissaryKillPlayerReward {
	int32_t EmissaryLevelIncrease; // 0x0
	TArray<FEmissaryKillScaleFactor> EmissaryLevelKillCountScaleFactors; // 0x8
	TArray<UCompany*> ValidEmissariesToKill; // 0x18
};

struct FWaterBuoyancy {
	UPrimitiveComponent* PrimitiveComponent; // 0x0
	float OverallBuyoancyScalar; // 0x8
	float DampingPerSample; // 0xc
	float AdditionalAngularDampingWhenSubmerged; // 0x10
	TArray<FBuoyancyVolumeSample> VolumeSamples; // 0x18
	TArray<FBuoyancyDragSample> DragSamples; // 0x28
	UCurveFloat* BuyoancySampleZSpeedVSDampeningScalar; // 0x38
	float QuadSubmersionTestSampleResolution; // 0x40
};

struct FNoteDeletedMessage {
	FPirateIdentity PirateIdentity; // 0x0
	FGuid NoteId; // 0x78
};

struct FQuestVariableInt : FQuestVariable {
	FName ParamName; // 0x8
};

struct FKrakenAnchorDynamicsParams : FStandardAnchorDynamicsParameters {
	float AnchorForce; // 0x0
	float VelocityDeadZoneThreshold; // 0x4
	UCurveFloat* UnaryWheelAngleBasedTorque; // 0x8
	UCurveFloat* ForwardSpeedBasedTorque; // 0x10
	float BaseHandbrakeTorque; // 0x18
	float TimeAfterAnchorDownToGrabWantedYaw; // 0x1c
	UCurveFloat* YawDeltaVsCorrectiveTorquePerKgMass; // 0x20
};

struct FVoyageProposalOverride {
	TArray<FName> NecessaryFeatures; // 0x0
	UVoyageProposalDesc* Proposal; // 0x10
	int32_t ProposalIndex; // 0x18
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	FKey Key; // 0x8
	float Scale; // 0x28
};

struct FOutgoingServerMigrationAbortedEvent : FServerMigrationInstanceEventBase {
	FGuid ServerId; // 0x0
	FGuid MigrationId; // 0x10
};

struct FEmptyWaterFromVaultData {
	int32_t ActorId; // 0x0
};

struct FEventPayload {
	FName EventName; // 0x0
	bool IsSubtitleEvent; // 0x8
	int32_t ActorNumber; // 0xc
	int32_t SubtitleIndex; // 0x10
	FMovieSceneEventParameters Parameters; // 0x18
};

struct FContestZoneDistribution {
	TArray<FWeightedContestZone> WeightedContestZones; // 0x0
};

struct FContestParticipantData {
	FGuid CrewId; // 0x0
	int32_t NumberOfCrewMembers; // 0x10
};

struct FOpenInventoryInteractionEvent {
	FString InventoryName; // 0x0
	TArray<FIInventoryItem> Current; // 0x10
	TArray<FIInventoryItem> Available; // 0x20
	TArray<FIInventoryItemDescription> Descriptions; // 0x30
	bool CanPlayerStoreItems; // 0x40
};

struct FAggressiveGhostHealthToVfxLevel {
	int32_t NumShotsLeftToKill; // 0x0
	float VfxLevel; // 0x4
};

struct FAggressiveGhostShipPortalJumpedTelemetryEvent {
	FGuid ShipId; // 0x0
};

struct FTreasureDroppedCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString TreasureType; // 0x28
	FVector Position; // 0x38
};

struct FLightingControllerMaterialInstances {
	TArray<UMaterialInstanceDynamic*> SkyDomeMaterials; // 0x0
	UMaterialInstanceDynamic* NorthStarMaterial; // 0x10
	UMaterialInstanceDynamic* MoonMaterial; // 0x18
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FPlayerModerationReportablePlayers {
	FString ReportingGamertag; // 0x0
	FString ReportingXUID; // 0x10
	TArray<FPlayerModerationReportablePlayerDetails> Players; // 0x20
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
};

struct FNPCAnimationIdlesVariantStruct {
	UAnimSequence* IdleVariant; // 0x0
	UAnimSequence* InactiveIdleVariant; // 0x8
	UAnimSequence* InteractIdleVariant; // 0x10
	bool IdleVariantIsValid; // 0x18
	bool InactiveIdleVariantIsValid; // 0x19
	bool InteractIdleVariantIsValid; // 0x1a
};

struct FFinishIntroAnimaticTutorialStepRpc : FBoxedRpc {
	UAthenaTutorialComponent* TutorialComponent; // 0x10
};

struct FRequestLobbyUIEvent {
	ECrewSessionType SessionType; // 0x0
	ESessionVisibility SessionVisibility; // 0x1
};

struct FKrakenAnimatedTentacleCollisionSegment {
	int32_t BottomBoneIndex; // 0x0
	int32_t TopBoneIndex; // 0x4
	float BoneLocationAlpha; // 0x8
	float CapsuleRadius; // 0xc
	float CapsuleHalfHeight; // 0x10
	UCapsuleComponent* Capsule; // 0x18
};

struct FShovelSurfaceDigType {
	TArray<FSurfaceDigType> SurfaceDigType; // 0x0
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x110
};

struct FRegionMapData {
	FVector2D RegionCenter; // 0x0
	FVector2D RegionMin; // 0x8
	FVector2D RegionMax; // 0x10
	FVector2D RegionExtents; // 0x18
	FVector2D CenterOffset; // 0x20
	float DistanceScaling; // 0x28
	float MapRotation; // 0x2c
	float GlobalTextureScaling; // 0x30
	TArray<FRegionMapIslandData> IslandData; // 0x38
};

struct FAIShipDespawnedEvent {
	AActor* Ship; // 0x0
	EAIShipDestructionReason ShipDestructionReason; // 0x8
};

struct FWwiseEmitterParams {
	bool bEnableObstructionAndOcclusion; // 0x0
	bool bEnableAccoustics; // 0x1
};

struct FServicesStampId {
	FString StampId; // 0x0
};

struct FShipCurseFXData {
	EShipCurseTag ShipCurseTag; // 0x0
	TArray<FShipCurseVFXTemplate> VFXTemplates; // 0x8
	FShipCurseAudioLoop AudioLoop; // 0x18
};

struct FEventEnteredShip {
	AActor* Ship; // 0x0
	AActor* Actor; // 0x8
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FRichCurve : FIndexedCurve {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x58
	ERichCurveExtrapolation PostInfinityExtrap; // 0x59
	TArray<FRichCurveKey> Keys; // 0x60
	float DefaultValue; // 0x70
};

struct FChapterQuests {
	TArray<UQuestDescDataAsset*> QuestDescAssets; // 0x0
};

struct FMemoryVisualiserClass {
	UObject* ClassType; // 0x0
	EMemoryGatheringMode MemoryGatheringMode; // 0x8
	FString DisplayName; // 0x10
	float MemoryUsageMB; // 0x20
};

struct FPiratePreviewMoveCameraEvent {
	float Rotation; // 0x0
	float Pitch; // 0x4
	float Zoom; // 0x8
};

struct FEventAncientAIFormDespawned {
	bool WasKilled; // 0x0
	AActor* KilledBy; // 0x8
};

struct FQueuedCutsceneData {
	FName CutsceneName; // 0x0
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x218
};

struct FHeadStateChangeRequest {
	UKrakenHeadState* RequestedState; // 0x0
	FGuid StateChangeID; // 0x8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FStaticMeshComponentList {
	TArray<UStaticMeshComponent*> Components; // 0x0
};

struct FTreasureMapWidgetLocalisedTextWithFontOverride : FTreasureMapWidgetLocalisedText {
	UFont* FontOverride; // 0x58
};

struct FAtmosphericPressureZoneParametersAndLocation {
	FAtmosphericPressureZoneParameters PressureZoneParameters; // 0x0
	FVector2D Location; // 0x14
};

struct FRelativePercentageRewardDistributionModel {
	float DefaultPercentage; // 0x0
	TArray<FNumCrewsPercentageModel> NumCrewsPercentageMap; // 0x8
};

struct FContestCrewResultModel {
	FGuid CrewId; // 0x0
	TArray<FContestCrewMemberModel> Members; // 0x10
	uint32_t Reputation; // 0x20
	uint32_t Score; // 0x24
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FEventSwimmingCreatureDeathCustomEvent {
	ESwimmingCreatureDeathCustomEventEnum EventType; // 0x0
};

struct FInventoryResponseEvent {
	TArray<FIInventoryItem> Equipment; // 0x0
	TArray<FIInventoryItem> Resources; // 0x10
	TArray<FIInventoryItemDescription> Descriptions; // 0x20
};

struct FServiceMessagingSubscribedEvent {
	FString RoutingKey; // 0x0
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	float ForcedTime; // 0x4
};

struct FEventPetEndPlay {
	APawn* LinkedPet; // 0x0
};

struct FLiquidTypeParams {
	ELiquidType LiquidType; // 0x0
	FVector FogColour; // 0x4
	FVector LiquidColour; // 0x10
	FVector ScumColour; // 0x1c
	float EdgeScumStart; // 0x28
	float EdgeScumEnd; // 0x2c
	float FogFadeDistance; // 0x30
	float RefractionScale; // 0x34
	float RippleFrequency; // 0x38
	float Slosh; // 0x3c
	float SurfaceThickness; // 0x40
	float Viscosity; // 0x44
	float BubbleBrightness; // 0x48
	float BillboardScale; // 0x4c
	float EmissiveScale; // 0x50
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

struct FClientStartConnectingToServerTelemetryEvent {
	FGuid MatchmakingAttemptId; // 0x0
};

struct FPlayerControllerTypeTelemetryEvent {
	EInputControllerType ControllerType; // 0x0
};

struct FAggressiveGhostShipEncounterStartFromTaleTelemetryEvent {
	FGuid EncounterId; // 0x0
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
};

struct FEventChatboxFocusRequest {
	bool ShouldFocusChatbox; // 0x0
};

struct FAIShipEncounterParams {
	float MinEngagedDistanceFromPlayers; // 0x0
	TArray<FShipTypeAIShipEncounterParams> ShipTypeParams; // 0x8
};

struct FNetworkDataTelemetryFragmentInput : FTelemetryFragmentInput {
	uint64_t AvgRttMilliseconds; // 0x0
	uint64_t AvgOutBytesPerSecond; // 0x8
	uint64_t AvgInBytesPerSecond; // 0x10
	uint64_t AvgOutVoiceBytesPerSecond; // 0x18
	uint64_t AvgInVoiceBytesPerSecond; // 0x20
};

struct FWalletUpdatedMessage {
	FPirateIdentity PirateIdentity; // 0x0
};

struct FFlashbangEffectEvent {
	bool IsFlashbanged; // 0x0
};

struct FFishingMiniGame {
	FFishingMiniGameData Data; // 0x0
};

struct FItemPreviewUpdateCameraEvent {
	FItemPreviewView View; // 0x0
};

struct FPlayerAttackTelemetryEvent {
	FGuid AttackId; // 0x0
	FString DamageType; // 0x10
	FString WeaponType; // 0x20
	FVector TargetPos; // 0x30
	float DamageDealt; // 0x3c
	bool Success; // 0x40
};

struct FAIDropSpawnerRankMapping {
	UClass* SpawnerClass; // 0x0
	TArray<float> Weights; // 0x20
};

struct FMinMaxBurrowAbility {
	float MinValue; // 0x0
	float MaxValue; // 0x4
};

struct FEventWieldableItemUseStartingAndJustMadeVisible {
	AActor* Item; // 0x0
	EPerspectiveTypes PerspectiveType; // 0x8
};

struct FLocationBootyStorage {
	char IslandHash; // 0x0
	FName IslandName; // 0x4
	FVector IslandLocation; // 0xc
	TArray<FItemSnapshot> StoredTreasure; // 0x18
	char StoredTreasureCount; // 0x28
};

struct FFiredFromActorActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr FiringActor; // 0x30
	FVector LaunchVelocity; // 0x44
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FWorldSnapshot {
	FName Version; // 0x8
};

struct FItemLoadoutItemRemovedEvent {
	AItemInfo* Item; // 0x0
};

struct FCompositeInputDelegator {
	TArray<FPrioritizedCompositeInputHandler> PrioritizedCompositeInputHandlers; // 0x0
};

struct FServerMigrationSerialisationDetailsTestsUStruct {
	float FloatWithNoMarkup; // 0x0
	uint16_t UInt16WithMigrationMarkup; // 0x4
	uint16_t UInt16WithNotReplicatedMarkup; // 0x6
	uint16_t UInt16WithMigrationAndNotReplicatedMarkup; // 0x8
};

struct FItemBuryingBaseOverride {
	TArray<UClass*> Classes; // 0x0
	UItemDiggingBuryConfig* BuryingConfig; // 0x10
};

struct FEventSwimmingCreatureUnderwaterStateChange {
	bool IsAboveWater; // 0x0
};

struct FItemCategoryAIStrategyMovementPropertiesOverride {
	UItemCategory* ItemCategory; // 0x0
	TArray<FAIStrategyMovementProperties> AIStrategyMovementPropertiesOverrides; // 0x8
};

struct FTestActionStateMessage : FActionStateMessage {
	int32_t TestProperty; // 0x10
};

struct FAIDebugVisualisationSphere {
	FVector Centre; // 0x0
	float Radius; // 0xc
	float LifeTime; // 0x10
	EAIDebugColour Colour; // 0x14
};

struct FCargoRunCrateMetaWrapper : FItemMetaBase {
	FCargoRunItemDropOffData DropOffData; // 0x18
};

struct FPlayerSetFootLocationCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString Location; // 0x28
};

struct FStorageContainerBackingStore {
	TArray<FAllowedItemsBasedOnFeature> AllowedItems; // 0x0
	int32_t MaxCapacityPerNode; // 0x10
	int32_t MaxNumNodes; // 0x14
	int32_t MaxCapacityTotal; // 0x18
	TArray<FStorageContainerNode> ContainerNodes; // 0x20
	bool AllowedItemsAreCached; // 0x30
	UContainerAllowedItemsDataAsset* CachedAllowedItems; // 0x38
};

struct FVaultAssignedAutomationEvent {
	AActor* Vault; // 0x0
	UItemDesc* Key; // 0x8
};

struct FVoyageProposalAssetData {
	FStringAssetReference Mesh; // 0x0
	FStringAssetReference IconInv; // 0x10
	FStringAssetReference IconPrv; // 0x20
};

struct FLandmarkReactionKeyFrame {
	ULandmarkReactionEvent* Event; // 0x0
	float KeyFrame; // 0x8
};

struct FQuestDesc {
	FString Title; // 0x8
	bool IsEmergent; // 0x18
	FName IslandName; // 0x1c
};

struct FAthenaAnimationCamera {
	float CameraAlpha; // 0x0
	float CameraLookYawTime; // 0x4
	float CameraLookPitchTime; // 0x8
	float CameraYaw; // 0xc
	float CameraPitch; // 0x10
	ECameraLookatAnimationType CameraObjectAttachmentType; // 0x14
};

struct FCrewShipPersistentDataManager {
	TArray<FCrewShipPersistentData> Data; // 0x0
};

struct FIslandDiscoveredRpc : FBoxedRpc {
	FName IslandName; // 0x10
};

struct FTextureAuditorGroupProperties {
	TextureGroup TextureGroup; // 0x0
	FTextureAuditorProperties Properties; // 0x8
};

struct FTreasureMapWidgetStreamedTexture : FTreasureMapWidget {
	FStringAssetReference TexturePath; // 0x18
	float RelativeHeightModifier; // 0x28
	bool FlipX; // 0x2c
};

struct FClientPlayerEmblemUnlockTelemetryEvent {
	FName EmblemName; // 0x0
};

struct FBellDesc {
	UStaticMesh* BellMesh; // 0x0
	UWwiseEvent* BellRingSFX; // 0x8
	UWwiseEvent* BellRingTurbulenceSFX; // 0x10
};

struct FIPGBlendNode {
	FName Name; // 0x0
	TArray<FIPGBlendRange> Ranges; // 0x8
};

struct FPetChestEquipPetEvent {
	UPetEntitlementBaseDesc* Desc; // 0x0
};

struct FAILoadoutRankMapping {
	ULoadoutAsset* Loadout; // 0x0
	TArray<float> Weights; // 0x8
};

struct FPointLightData {
	float AttenuationRadius; // 0x0
	char bUseInverseSquaredFalloff : 1; // 0x4
	float LightFalloffExponent; // 0x8
	float IntensityScaleForWater; // 0xc
	float MinDistanceToLightAssumed; // 0x10
	float SourceRadius; // 0x14
	float SourceLength; // 0x18
	ESimpleLightFunctionType SimpleFunctionType; // 0x1c
	float ScaleOffset; // 0x20
	float PulsePhase; // 0x24
	float FlickerFrequency; // 0x28
	int32_t FlickerPerlinRow; // 0x2c
	FLightmassPointLightSettings LightmassSettings; // 0x30
};

struct FAggressiveGhostShipSpawnedRewardsTelemetryEvent {
	TArray<FString> RewardTypes; // 0x0
	FGuid ShipId; // 0x10
};

struct FRepairableAuthoritiveRepairState {
	ERepairableState RepairableState; // 0x0
	TArray<TWeakObjectPtr<AActor>> RepairingList; // 0x8
};

struct FLightingControllerRainParams {
	float RainOcclusionDistance; // 0x0
	float MaxDesaturation; // 0x4
	float MaxRainIntensity; // 0x8
	float FogInscatteringDistance; // 0xc
	float LPVOcclusionReduction; // 0x10
	float MaxRainWind; // 0x14
};

struct FEventPetReactBegun {
	FName ReactId; // 0x0
	EAthenaAnimationPetRoamingState ReactState; // 0x8
};

struct FEmissaryGlobalActionRewardBoostEvent {
	UGameEventType* GameEventType; // 0x0
};

struct FReapersMarkStatusStatInfo {
	UStatusBase* Status; // 0x0
	FPlayerStat StatToFire; // 0x8
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FEventKrakenAnimatedTentacleTentacleDead {
	int32_t TentacleIndex; // 0x0
};

struct FEventEnteredSurfaceMaterialStatusZone {
	TScriptInterface<Class> EnteredZone; // 0x0
};

struct FCategoryTab {
	FText Name; // 0x0
	FString UniqueTextIdentifier; // 0x38
	FString IconPath; // 0x48
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve BoolCurve; // 0x38
};

struct FGeneratedFireworkData {
	FFireworkAmbientLightData FireworkAmbientLightData; // 0xc
	TArray<FFireworkExplosionData> ExplosionData; // 0x28
	UWwiseObjectPoolWrapper* SfxPool; // 0x38
	UWwiseEvent* LaunchSfx; // 0x40
	UFireworkFeedbackDataAsset* FireworkFeedbackData; // 0x50
};

struct FActiveCampaignInfo {
	FName Name; // 0x0
	int64_t ActiveFromTicks; // 0x8
	int64_t ActiveUntilTicks; // 0x10
};

struct FCollectionMeshLimitsBase {
	int32_t MaxVerts; // 0x0
	int32_t MaxMemory; // 0x4
};

struct FAITelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<APawn> AIPawn; // 0x0
	FAIEncounterSpecification AIEncounterSpecification; // 0x8
};

struct FOutgoingServerMigrationStartedEvent : FServerMigrationInstanceEventBase {
	FGuid ServerId; // 0x0
	FGuid MigrationId; // 0x10
};

struct FWaterSensitiveHealthChange {
	bool HealthChangeEnabled; // 0x0
	float HealthChangeAmount; // 0x4
};

struct FWeightedRewardTableUnit {
	UEntitlementDesc* Entitlement; // 0x0
	float Weight; // 0x8
	uint32_t Value; // 0xc
};

struct FLocationMapBannerParams {
	int32_t NumChests; // 0x0
	FStringAssetReference BannerTexture; // 0x8
	FVector2D BannerSize; // 0x18
	FVector2D BannerLocation; // 0x20
	TArray<FVector2D> ChestCanvasOffsets; // 0x28
};

struct FTaleQuestCargoRunContractItem {
	UItemDesc* ItemToCollect; // 0x0
};

struct FDamageZoneDamageLevelChanged {
	AActor* DamageZone; // 0x0
	int32_t DamageLevel; // 0x8
};

struct FNonVerbalRadialSlot {
	FString Phrase; // 0x0
	FString BackgroundImageUrl; // 0x10
	FString IconImageUrl; // 0x20
};

struct FPlayerItemEquipCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FStepBountyTargetDesc {
	FText Name; // 0x0
	UTexture* Portrait; // 0x38
};

struct FRewardRequestForPirateMessage {
	FPirateIdentity Pirate; // 0x0
	FGuid RequestID; // 0x78
	FName RewardId; // 0x88
	FName CompanyAffiliation; // 0x90
	FName EmissaryAffiliation; // 0x98
	int32_t EmissaryLevel; // 0xa0
	bool NotifyPlayer; // 0xa4
	EPlayMode Playmode; // 0xa5
	EPlayModeVariant PlayModeVariant; // 0xa6
};

struct FTextureSwitchParameters {
	bool bAsync; // 0x8
	bool bHighPriority; // 0x9
	int32_t Seed; // 0xc
	EIPGGender SelectedGender; // 0x10
	EIPGEthnicity SelectedEthnicity; // 0x11
	FName SelectedBodyShape; // 0x14
	TArray<FName> SelectedItems; // 0x20
	TArray<FName> SelectedReferences; // 0x30
};

struct FUnlockEventData {
	int32_t Idx; // 0x0
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x20
};

struct FRequestPetChestPetLoadoutEvent {
	TArray<FString> Categories; // 0x0
};

struct FMermaidSpawnedTelemetryEvent {
	int32_t MermaidId; // 0x0
	FVector MermaidPosition; // 0x4
};

struct FRequestShipCustomizationChestEquipShipCustomizationEvent {
	FString ItemDesc; // 0x0
};

struct FRadialRuleInstanceMapping {
	URadialCreationRuleAsset* Rule; // 0x0
	FRadialInstance Instance; // 0x8
};

struct FPetAnimationDataJump {
	UAnimSequenceBase* JumpStart; // 0x0
	UAnimSequenceBase* JumpCycle; // 0x8
	UAnimSequenceBase* PreImpact; // 0x10
	UAnimSequenceBase* LandLight; // 0x18
};

struct FDeformablesSettings {
	float DistanceStiffness; // 0x0
	float VolumeStiffness; // 0x4
	float Damping; // 0x8
	float MaxDistance; // 0xc
};

struct FFeatureConfigTelemetryEvent {
	FString FeatureConfigHash; // 0x0
	FJsonObjectWrapper Json; // 0x10
};

struct FQuestMerchantCrateAllocatedTelemetryEvent {
	FGuid BootyId; // 0x0
	FString Rarity; // 0x10
};

struct FAthenaAnimationSkeletonFlee {
	UWieldableItemAnimationStoreId* UseWithObject; // 0x0
	TArray<UAnimSequence*> FleeTurnLeft; // 0x8
	TArray<UAnimSequence*> FleeTurnRight; // 0x18
	UBlendSpace* FleeLocomotionBase; // 0x28
	TArray<UBlendSpace*> FleeLocomotionVariants; // 0x30
};

struct FVoyageChestDiscoveredInContest : FNetworkEventStruct {
	FString DiscovererName; // 0x10
	bool IsDiscovererMe; // 0x20
	bool PlayAudio; // 0x21
	UPopUpMessageDesc* PopUpDesc; // 0x28
	FText CrewName; // 0x30
	FStringAssetReference ToastBackgroundImage; // 0x68
	FStringAssetReference BackgroundImage; // 0x78
	FName AudioEventName; // 0x88
};

struct FPirateGeneratorBakeTelemetryEvent {
	FPirateDescription Desc; // 0x0
	EPirateBakeFlags Flags; // 0x80
	FString Operation; // 0x88
	FGuid OperationId; // 0x98
};

struct FClueDestinationChoice {
	UClueDestinationDescriptor* Destination; // 0x0
	int16_t ClueChoice; // 0x8
};

struct FEmissaryLevelStatusStatInfo {
	FPlayerStat StatToFire; // 0x0
};

struct FAthenaAnimationSkeletonSensingAnimations {
	UWieldableItemAnimationStoreId* UseWithObject; // 0x0
	UAnimSequence* InitialReaction; // 0x8
	UBlendSpace1D* Searching; // 0x10
	UAnimSequence* AlertingOthers; // 0x18
	UBlendSpace1D* Pursuit; // 0x20
};

struct FMovieSceneSequenceTransform {
	float TimeScale; // 0x0
	float Offset; // 0x4
};

struct FCosmeticItemAnimationSetLoopData {
	UAnimSequenceBase* Into; // 0x0
	UAnimSequenceBase* Loop; // 0x8
	FName IntoSyncGroup; // 0x10
	FName LoopSyncGroup; // 0x18
};

struct FHullDamageParamSet {
	FShipLeakParams LeakParams; // 0x0
	float LeakAmount; // 0x1c
	FTransform InternalHoleDecalOffset; // 0x20
	EHullDamageDeck Deck; // 0x50
};

struct FCampaignGoalProgressMessage {
	int64_t PreviousProgress; // 0x0
	int64_t CurrentProgress; // 0x8
	int64_t CompletionThreshold; // 0x10
	FGuid GoalId; // 0x18
	FDateTime ActiveFrom; // 0x28
	FDateTime ActiveUtil; // 0x30
	FPirateIdentity Pirate; // 0x38
};

struct FWardrobeOutfitResult {
	TArray<USkeletalMesh*> Meshes; // 0x0
	TArray<FIPGScalarParameter> ScalarParameters; // 0x10
	TArray<FName> MaterialReferences; // 0x20
};

struct FCatalogOfferPrerequisites {
	TArray<FString> Entitlements; // 0x0
	TMap<FString, uint32_t> CompanyLevel; // 0x10
	uint32_t EntitlementRequirementThreshold; // 0x60
	FString Sig; // 0x68
};

struct FPlayerHeroStatUpdatedTelemetryEvent {
	FString Result; // 0x0
	uint32_t Stat; // 0x10
};

struct FEventCannonAimingStoppedPitch {
	bool IsAtEnd; // 0x0
};

struct FMusicEvent {
	UWwiseEvent* StartEvent; // 0x0
	UWwiseEvent* StopEvent; // 0x8
};

struct FGraphicalSettingsTelemetryEvent {
	uint32_t AutoDetectBucket; // 0x0
};

struct FQuestDistributionPerChapterParams {
	int32_t MinNumChapters; // 0x0
	FWeightedProbabilityRange NumQuests; // 0x8
	FWeightedProbabilityRange NumQuestsInFirstChapter; // 0x28
	FWeightedProbabilityRange NumQuestsInOtherChapters; // 0x48
};

struct FPrepareInstantFireRpc : FBoxedRpc {
	ATestProjectileWeapon* Weapon; // 0x10
};

struct FFeatureFlag {
	FName FeatureName; // 0x0
};

struct FAnimNode_BlendListByObject : FAnimNode_BlendListBase {
	UObject* ActiveTypeValue; // 0xa8
	TArray<UObject*> ObjectToPoseIndex; // 0xb0
};

struct FItemMetaBase {
	FStringAssetReference StoredStructType; // 0x8
};

struct FVaultButtonData {
	FTransformBlendCurve ButtonPressAnimation; // 0x0
	FTransformBlendCurve ButtonActivationAnimation; // 0x500
	float IncorrectSolutionPenaltyInSeconds; // 0xa00
	float ButtonHoldTime; // 0xa04
	UStaticMeshComponent* ButtonMesh; // 0xa80
};

struct FSkeletonCustomAnimationBlueprintPlayingAnimations {
	UAnimSequence* OneShot; // 0x0
	UAnimSequence* ContinuousIn; // 0x8
	UAnimSequence* ContinuousLoop_A; // 0x10
	UAnimSequence* ContinuousLoop_B; // 0x18
	UAnimSequence* ContinuousOut; // 0x20
	TArray<UAnimSequence*> AlternateContinuousOuts; // 0x28
};

struct FUIFloatOptionSelectedTelemetryEvent {
	FString Option; // 0x0
	float Value; // 0x10
};

struct FItemLoadoutCapacity {
	UItemCategory* ItemCategory; // 0x0
	int32_t Capacity; // 0x8
};

struct FCookerIgnitionParams {
	FFloatRange InitialIgnitionTime; // 0x0
	FFloatRange SuccessIgnitionTime; // 0x10
	FFloatRange FailureIgnitionTime; // 0x20
	float ChanceToIgnite; // 0x30
	FFireGridCellSelection IgnitionSelection; // 0x34
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FServerNetworkDataTelemetryFragment {
	FPacketDiscardStats DiscardedPackets; // 0x0
};

struct FRPCStats {
	FRPCStatEntry Entries[0x2]; // 0x0
};

struct FEmblemRemoteCriteriaProgress {
	FName StatName; // 0x0
	uint32_t Value; // 0x8
	uint32_t Threshold; // 0xc
	bool IsCompleted; // 0x10
};

struct FGameNarrationStateChangeEvent {
	bool Enabled; // 0x0
	FString PreferredVoice; // 0x8
	FString Language; // 0x18
	int32_t Gender; // 0x28
};

struct FPirateDeletionSucceededEvent {
	FString PirateId; // 0x0
};

struct FVector_NetQuantizeNormal : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FEventShipBuilt {
	AActor* Ship; // 0x0
};

struct FMeleeWeaponAttackCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FPetSpawnActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FEventSetFishingLineSnapShake {
	float LineSnapShake; // 0x0
};

struct FCompanyProgressIcons {
	TArray<FCompanyProgressIcon> Icons; // 0x0
	uint32_t Step; // 0x10
};

struct FClothingLoadoutContainer {
	FClothingLoadout Loadout; // 0x0
	bool HasBeenSet; // 0x10
};

struct FFeedStruct {
	AActor* ActorToFeed; // 0x0
	bool WantRules; // 0x8
};

struct FDebugMenuUserItem {
	FString path; // 0x0
	FString Command; // 0x10
};

struct FEmissaryCompanyCampaignGameEvent {
	UGameEventType* EventType; // 0x0
	TArray<FEmissaryCompanyCampaignScale> Scales; // 0x8
};

struct FImpactSurfaceData {
	EPhysicalSurface SurfaceType; // 0x0
	UImpactDataAsset* ImpactData; // 0x8
};

struct FEventItemsRetrieved {
	FGuid CrewRetrieving; // 0x0
	int16_t IslandHash; // 0x10
};

struct FItemStateData : FActorStateData {
	FString ItemName; // 0x20
};

struct FCarouselPirateClothingCategoryBias {
	UClothingCategory* Category; // 0x0
	float LikelihoodOfHaving; // 0x8
	bool ProgressivlyDecreaseChance; // 0xc
};

struct FEventPlayerCharacterDeath {
	ACharacter* PirateKilled; // 0x0
	FDamageInstance FinalBlowInformation; // 0x8
};

struct FDebugFishSelectionSize {
	int32_t SizeIndex; // 0x0
	AFishingFish* FishClass; // 0x8
};

struct FMovieSceneAdditiveCameraAnimationTrackTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FCappedItemsByGroup {
	TMap<UItemCapForAssets*, FManagedItems> ItemGroupMapping; // 0x0
};

struct FFirstPersonAnimaticSettings {
	FVector CutsceneFirstPersonMeshOffset; // 0x0
	FRotator CutsceneRotation; // 0xc
	float TimeBeforeFadeIn; // 0x18
	float FadeInDuration; // 0x1c
	float FirstPersonMeshBoundsScale; // 0x20
	FName FirstPersonAnimName; // 0x24
};

struct FEventFaceTargetEnabled {
	bool Enabled; // 0x0
};

struct FServerLifetimeConfigurationSettings {
	float ServerTimeToLiveSeconds; // 0x0
	float HeartbeatFrequencySeconds; // 0x4
	float MaxTimeToAcceptShutdownRequestSeconds; // 0x8
};

struct FPocketWatchTickAnimation {
	UCurveFloat* AnimationCurve; // 0x0
	UWwiseEvent* AnimationSound; // 0x8
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FName TypefaceFontName; // 0x28
	int32_t Size; // 0x30
	FName FontName; // 0x34
	EFontHinting Hinting; // 0x3c
};

struct FSpireEntry {
	FVector Location; // 0x0
	FName IslandName; // 0xc
};

struct FCrewSessionBaseTelemetryEvent {
	FGuid CrewId; // 0x0
};

struct FCrewMuteOthersChatEvent {
	bool IsMuted; // 0x0
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	EEvaluatorDataSource DataSource; // 0x30
	EEvaluatorMode EvaluatorMode; // 0x31
	int32_t FramesToCachePose; // 0x34
	int32_t CacheFramesRemaining; // 0x78
};

struct FEmissaryNotificationState {
	float CurrentRepTotal; // 0x0
	FName CompanyId; // 0x4
};

struct FEventHarpoonProjectileClientStateChanged {
	EHarpoonProjectileState ProjectileState; // 0x0
};

struct FEventGhostShipPlayerSpawnLocationDestroyed {
	AGhostShipPlayerSpawnLocation* SpawnLocation; // 0x0
};

struct FAthenaAnimationWeaponData {
	TArray<FAthenaAnimationObjectComplexOneShot> ComboAttacks; // 0x0
	TArray<FAthenaAnimationObjectComplexOneShot> StaticComboAttacks; // 0x10
	FAthenaAnimationObjectComplexOneShot HeavyAttack; // 0x20
};

struct FFireGridLowDetailRelativeSpawnDesc : FFireGridRelativeSpawnDesc {
	FName EmitterName; // 0x30
};

struct FAthenaAIControllerParamValue {
	FName ParamName; // 0x0
	float Value; // 0x8
};

struct FAmmoChestStateData : FActorStateData {
	int32_t Id; // 0x0
	FVector Position; // 0x4
	FString IslandName; // 0x10
};

struct FDebugMenuButtonShortcut {
	FString DisplayName; // 0x0
	FString ConsoleCommand; // 0x10
	TArray<FKey> Buttons; // 0x20
	float RequiredHoldTime; // 0x30
	bool AvailableInShippingBuilds; // 0x34
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FCrewManagementMemberBrigState {
	bool Voted; // 0x0
	int32_t VotesCast; // 0x4
	int32_t VotesRequired; // 0x8
	EBrigState State; // 0xc
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FEventItemDroppedOnActor {
	AActor* DroppedActor; // 0x0
};

struct FCompletionEventsRemoteServiceModel {
	TArray<FString> CompletionEvents; // 0x0
};

struct FAddItemToShipData {
	FString ItemName; // 0x0
	FGuid CrewId; // 0x10
	int32_t Quantity; // 0x20
};

struct FProjectileHitCustomServerEvent : FGlobalCustomServerEvent {
	FString ProjectileType; // 0x18
	FString RecipientId; // 0x28
};

struct FEventPlayerTeleportToSafety : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FMerchantQuestCategoryGroupBounds {
	FName GroupName; // 0x0
	float Weight; // 0x8
	int32_t MinNum; // 0xc
	int32_t MaxNum; // 0x10
	int32_t MinDifferent; // 0x14
	int32_t MaxDifferent; // 0x18
};

struct FTutorialStepExitedEvent {
	FName StepName; // 0x0
};

struct FControlObjectActionRuleParams {
	TArray<EWieldableItemSize> WieldableItemSizesToDisableControl; // 0x0
};

struct FAthenaAnimationAIKnockback {
	FAthenaAnimationSkeletonKnockbackLocomotionStrength KnockbackAnimations; // 0x0
	EKnockbackAnimDirection AIKnockbackDirection; // 0x20
	char KnockbackActive : 1; // 0x24
	UAnimSequence* KnockbackAnimToUse; // 0x28
};

struct FQuestStartCargoRunTelemetryEvent {
	TArray<FCargoRunQuestCrateEntries> ContractList; // 0x0
	FString DeliveryLocationIslandName; // 0x10
	FString PickupLocationIslandName; // 0x20
	int32_t DeliveryTimeLimitInMinutes; // 0x30
};

struct FEventSetFishingRodBend {
	FVector2D RodBend; // 0x0
};

struct FAimSensitivityRuntimeData {
	TMap<EAimSensitivitySettingCategory, FAimSensitivityRuntimeDataEntry> MouseData; // 0x0
	TMap<EAimSensitivitySettingCategory, FAimSensitivityRuntimeDataEntry> ControllerData; // 0x50
};

struct FProjectileWeaponFireStatsTelemetryEvent {
	float AimPositionDifference; // 0x0
	float AimPositionCorrection; // 0x4
	float LatencyMs; // 0x8
	FGuid AttackId; // 0xc
	FString WeaponType; // 0x20
};

struct FPartialHitRegProjectileSnapshotData {
	TArray<FHitRegSnapshotProjectileRecord> AttackerClientRecords; // 0x0
	TArray<FHitRegSnapshotProjectileRecord> ServerRecords; // 0x10
	AActor* ServerAttacker; // 0x20
	TMap<AActor*, FPartialClientHitRegProjectileSnapshotData> RemoteClientRecords; // 0x28
};

struct FBootFlowSetContentEngagementMessage {
	FString Title; // 0x0
	FString Body; // 0x10
	FString KeyArt; // 0x20
};

struct FVoyageLocationRandomParams {
	bool NPCsOnly; // 0x0
	bool CargoRunNPCsOnly; // 0x1
	bool Feature; // 0x2
	bool Resource; // 0x3
	bool Outpost; // 0x4
	bool Fort; // 0x5
	bool SeaPost; // 0x6
	bool HasLandmarks; // 0x7
	bool OnlyNamedIslands; // 0x8
	UVoyageLocationOnlyNamedIslandListDataAsset* OnlyNamedIslandsListDataAsset; // 0x10
	TArray<USeaId*> Seas; // 0x18
	bool WithinDistance; // 0x28
	FVoyageLocationDistance Distance; // 0x2c
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x20
	FQuat Orientation; // 0x30
	float Radius; // 0x40
	float Length; // 0x44
};

struct FMeleeBlockingActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr WieldedItem; // 0x30
	UNotificationInputId* InputID; // 0x48
	float BlockMovementLockTime; // 0x50
};

struct FTQStructGenGroup : FTQStructGenWeightedContainer {
	FName FeatureName; // 0x10
	TArray<FTQStructGenEntry> Entries; // 0x18
};

struct FOtherPartyTelemetryFragment {
	FString OtherPartyType; // 0x0
	FString OtherPartyId; // 0x10
	uint32_t OtherPartyPossessCount; // 0x20
	double OtherPartySecondsSinceSpawned; // 0x28
};

struct FEventPlayerEnteredSleepingState {
	float AudioEventDelay; // 0x0
	float AudioStateDelay; // 0x4
	bool NoFarting; // 0x8
};

struct FKrakenShipWrappingTentacleAnimationPhaseCollection {
	FKrakenShipWrappingTentacleAnimationStateParams Dormant; // 0x0
	FKrakenShipWrappingTentacleAnimationStateParams Wrapping; // 0x10
	FKrakenShipWrappingTentacleAnimationStateParams AmbientWobble; // 0x20
	FKrakenShipWrappingTentacleAnimationStateParams EnteringShakeAttack; // 0x30
	FKrakenShipWrappingTentacleAnimationStateParams ShakeAttack; // 0x40
	FKrakenShipWrappingTentacleAnimationStateParams ExitingShakeAttack; // 0x50
	FKrakenShipWrappingTentacleAnimationStateParams HeavyAttack; // 0x60
	FKrakenShipWrappingTentacleAnimationStateParams Unwrapping; // 0x70
};

struct FKeyBindingRemote {
	FString BindingName; // 0x0
	FName KeyName; // 0x10
	EInputControllerTypeRemote ControllerType; // 0x18
};

struct FEventUserGameSettingsResponse {
	FPersistentUserGameSettings CurrentSettings; // 0x0
};

struct FBootFlowCrossInputMatchmakingStateEvent {
	bool CrossInput; // 0x0
};

struct FShantyPuzzleSingleInteractionZoneStopInteractingEvent {
	AActor* Player; // 0x0
	int32_t InteractionZoneIdx; // 0x8
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FFishSizeAndWeight {
	EFishSize Size; // 0x0
	float Weight; // 0x4
};

struct FAggressiveGhostShipProjectileCollidedTelemetryEvent {
	FGuid ShipId; // 0x0
	FString ProjectileType; // 0x10
};

struct FServiceStatusNotification {
	uint32_t NotificationId; // 0x0
	FDateTime ActivatedDateTimeUtc; // 0x8
};

struct FOnPlacedItemInCookingPot {
	AItemInfo* ItemToCook; // 0x0
};

struct FAIStrategyMovementProperties {
	UAIStrategyId* AIStrategy; // 0x0
	float MaxSpeedAmp; // 0x8
	float MaxAccelAmp; // 0xc
	float OverrideRVOAvoidanceRadius; // 0x10
	float OverrideBlendSpeed; // 0x14
};

struct FPlayerRelevancyRequest {
	AAthenaPlayerController* PlayerController; // 0x0
	ERequestState RequestState; // 0x8
	float TimeRemaining; // 0xc
};

struct FPetMovementRequest {
	EAthenaAnimationPetRoamingState State; // 0x0
	float TargetMeshZOffset; // 0x4
	bool AdjustingFlight; // 0x8
};

struct FEventCapstanArmIntentChanged {
	float NewIntent; // 0x0
};

struct FWieldablePetDropTimeout {
	EWieldablePetDropRequestReason RequestReason; // 0x0
	float DropDelay; // 0x4
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FIntegralCurve Curve; // 0x18
};

struct FMaterialAnimatorAnimationEntry {
	FName AnimationName; // 0x0
	FName NextAnimationName; // 0x8
	UCurveFloat* AnimationCurve; // 0x10
};

struct FWardrobeOutfitCategoryBias {
	FName CategoryName; // 0x0
	float EmptyProbability; // 0x8
};

struct FRepairObjectActionStateParams {
	float MountTime; // 0x0
};

struct FDebugSuperSailorSetYawSpeedRPCEvent : FNetworkEventStruct {
	float YawSpd; // 0x10
};

struct FMechanismAnimationEventContainer {
	TArray<UMechanismOneShotEvent*> AnimationStartedEvents; // 0x0
	TArray<UMechanismAnimationEvent*> OneShotTimelineEvents; // 0x10
	TArray<UMechanismAnimationEvent*> ContinuousTimelineEvents; // 0x20
	TArray<UMechanismOneShotEvent*> AnimationStoppedEvents; // 0x30
};

struct FVirtualAxisBindingDefinition {
	TArray<FName> AxisNames; // 0x0
	TArray<FName> CombinedAxisNamesX; // 0x10
	TArray<FName> CombinedAxisNamesY; // 0x20
	FString BindingName; // 0x30
	float Scale; // 0x40
};

struct FClothingChestEquipEmoteEvent {
	UEmoteDesc* Desc; // 0x0
	int32_t Index; // 0x8
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FPlayerFireGridTickParams {
	AActor* FireGridActorPlayerIsInsideOf; // 0x28
	UShipSize* PlayerShipSize; // 0x30
};

struct FLeak {
	FWwiseEmitter SFXEmitter; // 0x30
	UParticleSystemComponent* WaterLeakParticleSystem; // 0x50
};

struct FMountedWeaponFireAcknowledgeRpc : FBoxedRpc {
	UObject* MountedWeaponObject; // 0x10
};

struct FShipwreckDiscoveredRpc : FBoxedRpc {
	AShipwreck* Wreck; // 0x10
};

struct FItemPreviewMoveCameraEvent {
	float Rotation; // 0x0
	float Pitch; // 0x4
	float Zoom; // 0x8
};

struct FEventSpawnedAsSalvageItem {
	bool SpawnedAsSunkenItem; // 0x0
};

struct FSkeletonAICharacterItemSpecificAudioEvents {
	TArray<UItemCategory*> ItemCategories; // 0x0
	FSkeletonAudioEvents Events; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FQuestVariableObjectArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FMechanismBindingSettings {
	EMechanismActionActivationMode ActionActivationMode; // 0x0
	FWeightedProbabilityRangeOfRanges NumActionsToSelect; // 0x8
	FWeightedProbabilityRangeOfRanges NumTriggersToSelect; // 0x38
};

struct FCoordinatedKrakenSpecialEvent {
	ECoordinatedKrakenSpecialEventTypes Type; // 0x0
	float TimeOffset; // 0x4
};

struct FEventNewAIStrategy {
	UAIStrategyId* NewAIStrategy; // 0x0
};

struct FShroudBreakerDeactivateEffectsEvent {
	FGuid ShroudBreakerId; // 0x0
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FGuid CameraGuid; // 0x18
};

struct FTaleQuestFailedTelemetryEvent {
	FString FailReason; // 0x0
};

struct FTestInt32MapSerializationObject {
	TMap<FString, int32_t> Int32Map; // 0x0
};

struct FChangeGlitterBeardVFXStateEvent {
	int32_t Index; // 0x0
	EGlitterbeardVFXState Target; // 0x4
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x18
};

struct FCrewBaseTelemetryFragmentPlayerControllerLookupInput : FTelemetryFragmentInput {
	APlayerState* CrewMemberPlayerState; // 0x0
};

struct FRiggingSystemLineGroup {
	FName Name; // 0x0
	TArray<FRiggingSystemLineParams> Lines; // 0x8
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FContestParticipantTelemetryFragment {
	int32_t NumberOfCrews; // 0x0
	int32_t NumberOfParticipants; // 0x4
	TArray<FContestParticipantData> ContestParticipants; // 0x8
};

struct FEventCharacterDrowning {
	bool Drowning; // 0x0
};

struct FClothingPart {
	FName Name; // 0x0
	TArray<FName> Slots; // 0x8
	EIPGGender Gender; // 0x18
	EIPGPartType PartType; // 0x19
};

struct FCrewCancelVoteToBrigEvent {
	FString XUID; // 0x0
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

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x98
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FBountyMapLayoutTarget {
	FTreasureMapWidgetTextWithScaledWidthBackground Name; // 0x0
	FTreasureMapWidgetTexture MugShot; // 0x58
};

struct FEventPlayerItemEquip {
	AActor* EquippedItem; // 0x0
};

struct FWeightedClueDescriptor {
	UClueDescriptor* Descriptor; // 0x0
	TArray<float> DifficultyWeightings; // 0x8
};

struct FHitRegRecordProjectileShotRpc : FBoxedRpc {
	FGuid AttackId; // 0x10
	FHitRegSnapshotProjectileRecord AttackRecord; // 0x20
};

struct FWatercraftDespawnTelemetryEvent {
	FGuid WatercraftId; // 0x0
	FVector Location; // 0x10
	EWatercraftDespawnReason DespawnReason; // 0x1c
};

struct FStreamSnapshotModel {
	int32_t ViewerCount; // 0x0
	FDateTime TimeStamp; // 0x8
};

struct FAIEncounterSpecification {
	UClass* PawnClass; // 0x0
	UAthenaAIControllerParamsDataAsset* Skillset; // 0x20
	ULoadoutAsset* Loadout; // 0x28
	UAthenaAIFormDataAsset* Form; // 0x30
	UAthenaAIAmmoDataAsset* Ammo; // 0x38
	UAIClassId* AIClass; // 0x40
	UAIPartsCategory* PartsCategory; // 0x48
	UClass* ItemDropComponentClass; // 0x50
	int32_t TeamColorIndex; // 0x70
	FName DioramaRole; // 0x74
	FText LocalisableName; // 0x80
	FEncounterParams EncounterTrackingParams; // 0xb8
	bool ShowNameplate; // 0xc4
	bool IsUsingDialogue; // 0xc5
};

struct FTutorialStepPlayIntroAnimatic : FTutorialStep {
	UFirstPersonAnimationInstance* AnimInstance; // 0x80
};

struct FRewardRequestEvent {
	FGuid RequestID; // 0x0
	TArray<FPirateIdentity> PirateIdentities; // 0x10
	FGuid CrewId; // 0x20
	FName RewardId; // 0x30
	FName CompanyAffiliation; // 0x38
	FName EmissaryAffiliation; // 0x40
	int32_t EmissaryLevel; // 0x48
	bool NotifyPlayer; // 0x4c
};

struct FSessionCreationResponseModel {
	TArray<FSessionCreationCrewResponseModel> Crews; // 0x0
};

struct FQuestVariableNameArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FShutdownServerMessage {
	FString ShutdownReason; // 0x0
	bool ShutdownNonActiveServers; // 0x10
	FServerShutdownRequestFilter ServerShutdownRequestFilter; // 0x18
};

struct FGameServiceCoordinatorUnit {
	UObject* Service; // 0x0
};

struct FWeightedAIShipCrewAmmoType {
	int32_t Weight; // 0x0
	FAIShipCrewAmmoType Params; // 0x8
};

struct FBootFlowNetworkErrorTelemetryEvent {
	double TimeConnected; // 0x0
	FString ServerAddress; // 0x8
	FString Message; // 0x18
};

struct FCompanyBootyStatList {
	TArray<FCompanyBootyStats> CompanyList; // 0x0
};

struct FEntitlementInfo {
	FString InstanceId; // 0x0
	FString CatalogItemId; // 0x10
	FString Signature; // 0x20
};

struct FMovieSceneCaptureSettings {
	FDirectoryPath OutputDirectory; // 0x0
	bool bCreateTemporaryCopiesOfLevels; // 0x10
	AGameMode* GameModeOverride; // 0x18
	FString OutputFormat; // 0x20
	bool bOverwriteExisting; // 0x30
	bool bUseRelativeFrameNumbers; // 0x31
	int32_t HandleFrames; // 0x34
	char ZeroPadFrameNumbers; // 0x38
	int32_t FrameRate; // 0x3c
	FCaptureResolution Resolution; // 0x40
	bool bEnableTextureStreaming; // 0x48
	bool bCinematicEngineScalability; // 0x49
	bool bCinematicMode; // 0x4a
	bool bAllowMovement; // 0x4b
	bool bAllowTurning; // 0x4c
	bool bShowPlayer; // 0x4d
	bool bShowHUD; // 0x4e
};

struct FSprintConditionsParams {
	float ForwardInputVectorTolerance; // 0x0
	float MinVelocityForwardDot; // 0x4
	float MinVelocityMagnitude; // 0x8
};

struct FMaterialSimplificationSettings {
	FIntPoint BaseColorMapSize; // 0x0
	bool bNormalMap; // 0x8
	FIntPoint NormalMapSize; // 0xc
	float MetallicConstant; // 0x14
	bool bMetallicMap; // 0x18
	FIntPoint MetallicMapSize; // 0x1c
	float RoughnessConstant; // 0x24
	bool bRoughnessMap; // 0x28
	FIntPoint RoughnessMapSize; // 0x2c
	float SpecularConstant; // 0x34
	bool bSpecularMap; // 0x38
	FIntPoint SpecularMapSize; // 0x3c
};

struct FVoyageRecipe {
	FQuestDistributionParams QuestDistribution; // 0x0
	FQuestSelectionParams QuestSelection; // 0xc8
	TArray<FQuestPoolParams> QuestPools; // 0xd0
	bool UseFixedFinalQuestPool; // 0xe0
	bool RandomiseChapters; // 0xe1
	FQuestPoolParams FixedFinalQuestPool; // 0xe8
	bool DoNotNotifyParticipantsOnVoyageComplete; // 0x118
	TArray<FPlayerStat> CompletionStats; // 0x120
	TArray<FPlayerStat> ReapersMarkCompletionStats; // 0x130
};

struct FRequestClosePossessionsChestEvent {
	EPossessionsChestType PossessionsChestType; // 0x0
};

struct FCameraSpringArmPlayModeParameters {
	EPlayMode Playmode; // 0x0
	float CameraPullbackSpeed; // 0x4
};

struct FCustomDataProviderObjectPropertySelector {
	UCustomDataProviderObject* ObjectClass; // 0x0
	FName PropertyName; // 0x8
};

struct FStorageContainerStateData : FActorStateData {
	TMap<FString, int32_t> Items; // 0x20
};

struct FAthenaAnimationJumping {
	EAthenaAnimationJumpingState JumpingState; // 0x0
	float PreImpactTime; // 0x4
	int32_t JumpSequence; // 0x8
	int32_t LandingSequence; // 0xc
	char FiredFromActor : 1; // 0x10
	char Jumping : 1; // 0x10
};

struct FAddWaterToVaultData {
	int32_t ActorId; // 0x0
	float WaterAmount; // 0x4
};

struct FEnableObjectLeakDetectionTelemetryRpc : FBoxedRpc {
	float Interval; // 0x10
};

struct FFogBankLocalPlayerPenetrationEvent {
	EFogBankType FogBankType; // 0x0
	float PenetrationT3D; // 0x4
	float PenetrationTHorizontal; // 0x8
	float PenetrationTVertical; // 0xc
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3e8
	FSlateSound SelectionChangeSlateSound; // 0x400
	FName PressedSound; // 0x418
	FName SelectionChangeSound; // 0x420
};

struct FRenderedCloudProperties {
	FVector WorldPosition; // 0x0
	float Fade; // 0xc
	float Storminess; // 0x10
	float RotationYaw; // 0x14
	float StreetRotationFront; // 0x18
	float StreetRotationBack; // 0x1c
	bool Visible; // 0x20
	bool FluffVisible; // 0x21
	bool IsStreetCloud; // 0x22
	bool UpdatesThisFrame; // 0x23
};

struct FMovieSceneSkeletalAnimationSharedTrack : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FQuestVariablePageLayout : FQuestVariable {
	FName ParamName; // 0x8
};

struct FBowSplashProbe : FSplashProbe {
	EShipAlignmentType ShipAlignmentType; // 0x128
};

struct FPersistenceIdentifier {
	FString Identifier; // 0x0
	FName Name; // 0x10
};

struct FVoyageBegun {
	FText Title; // 0x0
};

struct FShipDamagedCustomServerEvent : FGlobalCustomServerEvent {
	FString ShipId; // 0x18
};

struct FShipCameraAnimation {
	UShipSize* ShipSize; // 0x0
	UCameraAnim* Animation; // 0x8
	UCurveFloat* BlendCurve; // 0x10
};

struct FFireCellStateParticleTemplate {
	UParticleSystem* Template; // 0x0
	int32_t TranslucencySortPriority; // 0x8
	UStaticMesh* Mesh; // 0x10
	float MeshSpawnTime; // 0x18
	float MeshDespawnTime; // 0x1c
	FVector MeshScale; // 0x20
	EFireCellState State; // 0x2c
	bool OverrideMaxLODToSpawnFor; // 0x2d
	int32_t MaxLODToSpawnFor; // 0x30
	bool SpawnWithLowFrequencySettings; // 0x34
	bool VisibleInLowDetailMode; // 0x35
};

struct FEventPlayerExittedSleepingState {
	bool NoFarting; // 0x0
};

struct FSceneDialogueEndNetworkEvent : FSceneDialogueBaseNetworkEvent {
	UScriptStruct* Type; // 0x8
};

struct FClueDestinationToTextIndex {
	UClueDestinationDescriptor* DestinationType; // 0x0
	UAbandonedNoteClueTextIndexAssetBase* RequiredIndexAsset; // 0x8
};

struct FGetItemsInRadiusData : FGetActorsInRadiusData {
	FString ItemName; // 0x10
};

struct FAthenaAnimationObjectActionOneShot {
	TArray<UAnimSequence*> MainAction; // 0x0
	TArray<UBlendSpace*> MainActionLocomotion; // 0x10
	TArray<UAnimSequence*> AlternateAction; // 0x20
	TArray<UBlendSpace*> AlternateActionLocomotion; // 0x30
};

struct FLeaveGhostShipActionStateParams {
	float FadeDelay; // 0x0
	float FadeDuration; // 0x4
	float FadeEventTimeout; // 0x8
	float FadeServerTimeout; // 0xc
	FLinearColor FadeColour; // 0x10
	bool FadeAudio; // 0x20
};

struct FDeferredRewardRequestMessage {
	FGuid RequestID; // 0x0
	FName CompanyAffiliation; // 0x10
	FName RewardId; // 0x18
	FString UserId; // 0x20
	FString PirateId; // 0x30
	bool RewardAccount; // 0x40
	bool NotifyPlayer; // 0x41
	bool DontRewardCurrency; // 0x42
	bool DontRewardXp; // 0x43
	bool DontRewardSeasonXp; // 0x44
	FString DeferralReason; // 0x48
	double RewardMultiplier; // 0x58
};

struct FShipCurseAudioLoop {
	UWwiseEvent* PlayLoop; // 0x0
	UWwiseEvent* StopLoop; // 0x8
	UWwiseObjectPoolWrapper* PoolWrapper; // 0x10
};

struct FAIShipEncounterNotification {
	FText BattleName; // 0x0
	FName SeaName; // 0x38
	FText SkellyCrewName; // 0x40
	ECannonballIconType CannonBallType; // 0x78
	ESkellyFormIconType SkellyType; // 0x79
};

struct FWindZoneTurbulence {
	float Base; // 0x0
	float Current; // 0x4
};

struct FAIDioramaLocationSourceComponentData {
	FTransform RelativeTransform; // 0x0
	AActor* Interactable; // 0x30
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
	char GrassMapChannelIndex; // 0xa
};

struct FItemDiggingEffectsOverride {
	TArray<UClass*> Classes; // 0x0
	UItemDiggingEffectsConfig* DiggingEffectsConfig; // 0x10
};

struct FLightingControllerSettingsOutput {
	float FogDensity; // 0x0
	float FogStartDistance; // 0x4
	float LightIntensity; // 0x8
	float SkyDomeBrightness; // 0xc
	float SkyDomeMoonVisibility; // 0x10
	float SkyDomeStarBrightness; // 0x14
	float SkyDomeSunBrightness; // 0x18
	float PostLPVIntensity; // 0x1c
	float PostExposureBias; // 0x20
	float PostLPVOcclusionIntensity; // 0x24
	float SkyLightIntensity; // 0x28
	float FogBrightnessNear; // 0x2c
	float FogBrightnessFar; // 0x30
	float PostBloomIntensity; // 0x34
	float PostBloomThreshold; // 0x38
	float SkyDomeAuraBrightness; // 0x3c
	float PostReflectionProbeBrightness; // 0x40
	float PostReflectionProbeShadowBrightness; // 0x44
	float VfxController; // 0x48
	float FogMaxOpacity; // 0x4c
	float FogScatterExp; // 0x50
	float FogUnderwaterDensity; // 0x54
	float PostLensFlareIntensity; // 0x58
	float EmissiveFoliage; // 0x5c
	float EmissiveLights; // 0x60
	float PostExposureMinBrightness; // 0x64
	float PostExposureMaxBrightness; // 0x68
	float SkyDomeMoonBrightness; // 0x6c
	float SkyDomeHorizonCloudBrightness; // 0x70
	float SkyDomeGreenFlashStrength; // 0x74
	float PostSaturation; // 0x78
	float PostContrast; // 0x7c
	float CloudRimlightScale; // 0x80
	float CloudSkylightScale; // 0x84
	float CloudSunlightScale; // 0x88
	float CloudGlobalPressure; // 0x8c
	float PostUnderWaterBrightness; // 0x90
	float VfxCloudBrightness; // 0x94
	float LightGodRayIntensity; // 0x98
	float CloudBottomBrightness; // 0x9c
	float CloudSunlightShadowing; // 0xa0
	float SunDiscScale; // 0xa4
	float WaterSpecularBrightness; // 0xa8
	float VfxAmbientScale; // 0xac
	float FogUnderwaterMaxOpacity; // 0xb0
	float FogUnderwaterScatterExp; // 0xb4
	float FogUnderwaterStartDistance; // 0xb8
	float FogUnderwaterBrightnessNear; // 0xbc
	float FogUnderwaterBrightnessFar; // 0xc0
	float FogDirectionalInscatteringStart; // 0xc4
	float FogUnderwaterDirectionalInscatteringStart; // 0xc8
	float CloudShadowBrightness; // 0xcc
	float StormCloudShadowBrightness; // 0xd0
	float StormPostBloomIntensity; // 0xd4
	float StormPostBloomThreshold; // 0xd8
	float DirectionalLightShadowSteppingRate; // 0xdc
	float SkullBrightness; // 0xe0
	float UnderwaterDirectionalLightMinBrightness; // 0xe4
	FLinearColor FogColourAway; // 0xe8
	FLinearColor FogColourTowards; // 0xf8
	FLinearColor LightSunColour; // 0x108
	FLinearColor SkyDomeHorizonColour; // 0x118
	FLinearColor SkyDomeZenithColour; // 0x128
	FLinearColor SkyLightColour; // 0x138
	FLinearColor PostAmbientShadowColour; // 0x148
	FLinearColor FogColourAwayFar; // 0x158
	FLinearColor FogColourUnderwater; // 0x168
	FLinearColor FogColourAwayUnderwater; // 0x178
	FLinearColor WaterColour; // 0x188
	FLinearColor WaterColourShallow; // 0x198
	FLinearColor WaterBackLitColour; // 0x1a8
	FLinearColor WaterFoamColour; // 0x1b8
	FLinearColor WaterFoamHighlightColour; // 0x1c8
	FLinearColor WaterAmbientColour; // 0x1d8
	FLinearColor PostReflectionProbeTint; // 0x1e8
	FLinearColor CloudRimlightColour; // 0x1f8
	FLinearColor CloudSkylightColour; // 0x208
	FLinearColor CloudSunlightColour; // 0x218
	FLinearColor PostUnderWaterTint; // 0x228
	FLinearColor SkyDomeMoonColour; // 0x238
	FLinearColor PostGamma; // 0x248
	FLinearColor SkyDomeSunColour; // 0x258
	FLinearColor VFXFoamColour; // 0x268
	FLinearColor VFXWindColour; // 0x278
	FLinearColor VFXUnderwaterTint; // 0x288
	FLinearColor StormRainColour; // 0x298
	FLinearColor StormSkyLightColour; // 0x2a8
	FLinearColor StormPostGamma; // 0x2b8
	FLinearColor StormFogColourUnderwater; // 0x2c8
	FLinearColor StormFogColourAwayUnderwater; // 0x2d8
	FLinearColor StormWaterColour; // 0x2e8
	FLinearColor StormWaterColourShallow; // 0x2f8
	FLinearColor StormWaterBackLitColour; // 0x308
	FLinearColor StormWaterFoamColour; // 0x318
	FLinearColor StormWaterFoamHighlightColour; // 0x328
	FLinearColor StormWaterAmbientColour; // 0x338
	FLinearColor StormPostReflectionProbeTint; // 0x348
	FLinearColor SkullEyeColour; // 0x358
	FLinearColor SandColour; // 0x368
};

struct FAthenaAnimationObjectActionContinuousSwimming {
	UBlendSpace* MainInSwimming; // 0x0
	UBlendSpace* MainOneShotInSwimming; // 0x8
	UBlendSpace* MainCycleSwimming; // 0x10
	UBlendSpace* MainOutSwimming; // 0x18
};

struct FDelayedStatusEffect {
	FStatus StatusEffect; // 0x0
	float InEffectTime; // 0x18
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	int32_t SegmentIndex; // 0x8
};

struct FTunnelOfTheDamnedClass {
	UShipSize* ShipSize; // 0x0
	ATunnelOfTheDamned* TunnelClass; // 0x8
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FVoyageBaseTelemetryFragment {
	FGuid VoyageId; // 0x0
};

struct FQuestPoolParams {
	float Weight; // 0x0
	TArray<FWeightedQuestParams> Quests; // 0x8
	TArray<FWeightedVoyageLocationParams> Location; // 0x18
	bool AllowRepeatIslandsWithinQuest; // 0x28
	bool LimitTimesCanBeSelected; // 0x29
	int32_t MaxTimesCanBeSelected; // 0x2c
};

struct FPlayerBuriedItemsDeferredRewardCompensationTelemetryEvent {
	FGuid RequestID; // 0x0
	FName CompanyAffiliation; // 0x10
	FName RewardId; // 0x18
	FString UserId; // 0x20
	FString PirateId; // 0x30
	bool DontRewardCurrency; // 0x40
	bool DontRewardXp; // 0x41
	bool DontRewardSeasonXp; // 0x42
	FString DeferralReason; // 0x48
	double RewardMultiplier; // 0x58
};

struct FSwingMechanismMaterialAnimationContext : FMechanismMaterialAnimationContext {
	UMeshComponent* Mesh; // 0x8
	TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x10
};

struct FMovieSceneObjectBindingPtr {
	FGuid Guid; // 0x0
};

struct FEventCannonFired {
	ACannon* FiredCannon; // 0x0
};

struct FEventCurseWheelLock {
	ECurseTag CurseTag; // 0x0
	float AngleThreshold; // 0x4
	float Duration; // 0x8
};

struct FCreateSphereTriggerData {
	FVector Location; // 0x0
	float Radius; // 0xc
};

struct FIPGDynamicSlider {
	int32_t AffectedPriority; // 0x0
	float Value; // 0x4
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FGenericConfirmationEvent {
	FString DisplayMessage; // 0x0
};

struct FGetVaultsDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FVaultStateData> Data; // 0x8
};

struct FEventPetNameTextboxTextFromVirtualKeyboard {
	FString Text; // 0x0
};

struct FSetMaxHealthData {
	int32_t ActorId; // 0x0
	float MaxHealth; // 0x4
};

struct FPlayerGameLeftVoyageTelemetryEvent {
	FString VoyageTitle; // 0x0
	FGuid VoyageId; // 0x10
	EVoyageLeaveStatus LeaveStatus; // 0x20
	bool IsTale; // 0x21
	bool IsStarlightTale; // 0x22
};

struct FRenderToTextureTestStringEvent {
	FString Message; // 0x0
};

struct FWwiseExternalSource {
	FString path; // 0x0
};

struct FContestChestDugUpEvent {
	FGuid CrewId; // 0x0
	AActor* DiscoveringCharacter; // 0x10
	AItemInfo* TreasureChestItemInformation; // 0x18
};

struct FRowboatMountStateTelemetryEvent {
	FGuid WatercraftId; // 0x0
	ERowboatActionTelemetry ActionName; // 0x10
};

struct FMoveSpeedValidationFailedTelemetryEvent {
	FString Item; // 0x0
	int32_t SpeedId; // 0x10
	int32_t DurationMS; // 0x14
	int32_t IgnoredRequestCount; // 0x18
};

struct FRequestAuthoritativeFire {
	UObject* RequestingObject; // 0x0
};

struct FTinySharkSpawnTelemetryEvent {
	FString TinySharkId; // 0x0
	FString TinySharkType; // 0x10
	FGuid ConfigSpawnId; // 0x20
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FXPGrantedEvent {
	uint32_t XPGranted; // 0x0
	FName CompanyId; // 0x4
	FGuid RequestID; // 0xc
	FGuid BootyId; // 0x1c
	FName EmissaryAffiliation; // 0x2c
	uint32_t EmissaryLevel; // 0x34
};

struct FEmissaryDiscoveredLootNetworkEvent : FNetworkEventStruct {
	FName CompanyName; // 0x10
};

struct FCrewSessionMatchmakingEndedTelemetryEvent : FCrewSessionBaseTelemetryEvent {
	FGuid NewCrewId; // 0x10
	FGuid CrewMatchmakingAttemptId; // 0x20
	FString SessionType; // 0x30
	FString MatchmakingHopper; // 0x40
	FString MatchmakingType; // 0x50
	FString MatchmakingResult; // 0x60
	FString ErrorMessage; // 0x70
	TArray<int32_t> CrewSegmentValues; // 0x80
	int32_t CurrentCrewCount; // 0x90
	int32_t TotalWaitTime; // 0x94
};

struct FTestTelemetryJsonSchemaWriterStruct {
	int32_t IntegerField; // 0x0
	float NumberField; // 0x4
	bool BooleanField; // 0x8
	FString StringField; // 0x10
	TArray<FString> StringArrayField; // 0x20
	FTestTelemetryJsonSchemaWriterNestedStruct ObjectField; // 0x30
	char UInt8Field; // 0x40
	uint16_t UInt16Field; // 0x42
	uint32_t UInt32Field; // 0x44
	uint64_t UInt64Field; // 0x48
	uint8_t Int8Field; // 0x50
	int16_t Int16Field; // 0x52
	int32_t Int32Field; // 0x54
	int64_t Int64Field; // 0x58
	float FloatField; // 0x60
	double DoubleField; // 0x68
	FDateTime DateTimeField; // 0x70
	FGuid GuidField; // 0x78
	FVector PositionField; // 0x88
	ETestTelemetryJsonSchemaWriterUEnum UEnumField; // 0x94
};

struct FLPVAdaptationState {
	FTransform InitialTransform; // 0x0
	FTransform DestinationTransform; // 0x30
	FTransform CurrentTransform; // 0x60
	FTransform SavedOffShipTransform; // 0x90
	float BlendWeight; // 0xc0
	float BlendTime; // 0xc4
	float BlendTranslationTime; // 0xc8
	float AdditionalAdaptationTime; // 0xcc
	float DefaultRotationBlendTime; // 0xd0
	float DefaultTranslationBlendTime; // 0xd4
	float DefaultAdditionalBlendTime; // 0xd8
	ELPVAdaptationType DefaultAdaptationType; // 0xdc
	ELPVAdaptationType AdaptationType; // 0xdd
	char bIsPlayerInLPVRefFrameArea : 1; // 0xe0
	char bIsLPVAdapting : 1; // 0xe0
	char bAdaptRotationOnly : 1; // 0xe0
	char bUseInstanceDefaultValues : 1; // 0xe0
};

struct FPreviewAttachedObjectPair {
	UObject* AttachedObject; // 0x0
	UObject* Object; // 0x20
	FName AttachedTo; // 0x28
};

struct FInteractableLightState {
	bool Enabled; // 0x0
	FTransform Transform; // 0x10
	float Intensity; // 0x40
	float ConeAngleInner; // 0x44
	float ConeAngleOuter; // 0x48
	float AttenuationRadius; // 0x4c
	FColor LightColour; // 0x50
	ESimpleLightFunctionType SimpleFunctionType; // 0x54
	float ScaleOffset; // 0x58
	float PulsePhase; // 0x5c
	float FlickerFrequency; // 0x60
	float IntensityScaleForWater; // 0x64
	float MinDistanceToLightClamp; // 0x68
	bool ApplyScaleForTranslucency; // 0x6c
	float ScaleForTranslucency; // 0x70
	bool ApplyCapForTranslucency; // 0x74
	float CapForTranslucency; // 0x78
};

struct FLobbyCreationRequestModel {
	FString SessionName; // 0x0
};

struct FTutorialAnimationResult {
	UFirstPersonAnimationInstance* AnimInstance; // 0x8
};

struct FStaticMeshAudioAssociation {
	TArray<FStaticMeshWwiseEmitterData> PlaybackDataArray; // 0x0
	TArray<UStaticMesh*> Meshes; // 0x10
};

struct FEventUpdateIslandEventToggle {
	FGuid EventID; // 0x0
	FVector2D EventScreenPos; // 0x10
	bool IsInverted; // 0x18
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x30
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FCommodityDemandModel {
	TArray<FRemoteCommodityDemandData> NPCTradeRouteMultipliers; // 0x0
};

struct FContestParticipantJoinedServerEvent {
	FGuid NewCrewJoining; // 0x0
};

struct FEventPlayerTreasureMapSet {
	TWeakObjectPtr<UTexture> MapTexture; // 0x0
	TArray<FVector2D> Marks; // 0x8
};

struct FInertialSmoothedFloat {
	float AccelerationMagnitude; // 0x0
	float MaxSpeed; // 0x4
	float CurrentVelocity; // 0x8
	float CurrentValue; // 0xc
};

struct FRiddleMapContents {
	TArray<FTreasureMapTextDesc> Text; // 0x0
	int32_t Progress; // 0x10
};

struct FPlayerInReviveableStateCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FSpawnableItemCategory {
	FName Category; // 0x0
	TArray<UItemDesc*> SpawnableItems; // 0x8
};

struct FEventBuriableAdded {
	FBuriedBuriable BuryData; // 0x0
};

struct FTreasureBuriedTelemetryEvent {
	FGuid BootyId; // 0x0
	EBootyTypes BootyType; // 0x10
	FString Rarity; // 0x18
	FVector TreasureLocation; // 0x28
	FGuid MapId; // 0x34
	FGuid BuriedByCrewId; // 0x44
};

struct FPlayerRadialChatTelemetryEvent {
	FGuid RadialChatID; // 0x0
	FString RadialChatString; // 0x10
	FString RadialContextType; // 0x20
};

struct FProjectileHitEvent {
	FImpactDamageEvent DamageEvent; // 0x0
	FHitResult HitResult; // 0x58
	UImpactProjectileId* ProjectileId; // 0xd8
	FWeaponProjectileEffectParams Effects; // 0xe0
	FVector InitialPosition; // 0x148
	FGuid TelemetryAttackId; // 0x154
	TArray<FVector> TrailData; // 0x168
};

struct FUserSettingsMapMarkDefinition {
	UMapMarkId* MarkId; // 0x0
	UTexture* DefaultTexture; // 0x8
	UTexture* HighContrastTexture; // 0x28
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FPetChestRemovePetEvent {
	TArray<UPetEntitlementBaseDesc*> Removes; // 0x0
};

struct FQuestVariableSetEQSTaleContextValue : FQuestVariable {
	FName ParamName; // 0x8
};

struct FCrewChangeFailedEvent {
	FString Message; // 0x0
};

struct FAthenaAnimationPetSelectedArrayAnimations {
	UAnimSequence* HeldBaseIdle_A; // 0x0
	UAnimSequence* HeldBaseIdle_B; // 0x8
};

struct FAnimationNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x30
	FPoseLink B; // 0x48
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x64
};

struct FTutorialDialogOptionSelectEvent {
	ETutorialDialogOption OptionSelected; // 0x0
};

struct FHUDBlurSourceParams {
	float SecondsToFullyBlur; // 0x0
	float SecondsToFullyUnblur; // 0x4
};

struct FFlameData {
	EFlameOfFateType FlameOfFateType; // 0x0
	bool SkipChangeAnimation; // 0x1
};

struct FCrewManagementShipData {
	bool Voted; // 0x0
	int32_t VotesCast; // 0x4
	int32_t VotesRequired; // 0x8
	EScuttleState State; // 0xc
};

struct FWheelArmIKBoolSets {
	bool LeftIKOn; // 0x0
	bool RightIKOn; // 0x1
	bool LeftArmDown; // 0x2
	bool RightArmDown; // 0x3
};

struct FRequestRandomiseClothingCategoryPiratePreviewEvent {
	TArray<UClothingCategory*> ClothingCategories; // 0x0
};

struct FVoyageProposalVoteSlotUpdatedEvent {
	FProposedVoyageEntry Proposal; // 0x0
	int32_t VoteIndex; // 0x10
};

struct FEventUserGameSettingsResetToDefaultBindings {
	EInputControllerType ControllerTypeToReset; // 0x0
	bool ResetActions; // 0x1
	bool ResetAxes; // 0x2
};

struct FStartPickupObjectActionRuleParams {
	TArray<EWieldableItemSize> WieldableItemSizesDisablePickup; // 0x0
};

struct FReplicatedAIPartsData {
	UAIPartsCategory* PartsCategory; // 0x0
	FAIPartId AIPartId; // 0x8
	int32_t MeshIndex; // 0x10
	int32_t TeamColorIndex; // 0x14
};

struct FVaultReserved {
	bool IsReserved; // 0x0
	FGuid CrewId; // 0x4
};

struct FRetrieveAllPiratesRequestFailedEvent {
	FUniqueNetIdRepl UserId; // 0x0
	FGuid RequestID; // 0x18
};

struct FTakeControlActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TScriptInterface<Class> ControlledObject; // 0x30
};

struct FTriggerPlaceableReactionEvent : FBoxedRpc {
	APlaceableReaction* PlaceableReaction; // 0x10
};

struct FVoyageStartTelemetryEvent {
	bool IsEmergent; // 0x0
	TArray<FVoyageStartTelemetryEventPerQuest> Quests; // 0x8
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FClothingChestOpenRequestEvent {
	FRequestOpenPossessionsChestEvent OpenPossessionsChestEvent; // 0x0
	AActor* Interaction; // 0x18
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FMessageInABottleGivenVoyageTelemetryEvent {
	FGuid BottleId; // 0x0
	FGuid VoyageId; // 0x10
};

struct FItemSnapshotExpandedEvent {
	FGuid SnapshotID; // 0x0
	UObject* CreatedObject; // 0x10
};

struct FCrewMatchmakingVisibilityData {
	bool Vote; // 0x0
	char NumVotes; // 0x1
	EMatchmakingVisibilityState MatchmakingVisibilityState; // 0x2
};

struct FEventCharacterDead {
	FDamageInstance FinalBlow; // 0x0
	ECharacterDeathType DeathType; // 0x28
};

struct FBountySpawnerTargetDesc {
	EBountyTargetGender Gender; // 0x0
	EBountyTargetRank Rank; // 0x1
};

struct FAthenaAnimationPets {
	EAthenaAnimationPetSpawnState PetSpawnState; // 0x8
	bool PetIsSad; // 0x9
	bool FlyingScared; // 0xa
	bool StaticBaseHeldPoseActive; // 0xb
	bool UseAlternativeStrokeAnimations; // 0xc
	bool CurrentlyLocomoting; // 0xd
	bool UseShowingLocomotionSet; // 0xe
	EAthenaAnimationPetHeldState CurrentHeldState; // 0xf
	EAthenaAnimationPetRoamingState CurrentRoamingState; // 0x10
	EWieldedItemAnimationState ParentCurrentWieldedState; // 0x11
	FAthenaAnimationLocomotion ParentLocomotionData; // 0x18
	EAthenaAnimationJumpingState ParentJumpingState; // 0x80
	UPetsAnimationData* PetAnimations; // 0x88
	FAthenaAnimationPetSelectedArrayAnimations PetSelectedArrayAnimations; // 0x90
	EAthenaAnimationPetHeldReactionState ReactState; // 0xa0
	float JumpAlphaBlend; // 0xa4
	bool CurrentlyJumping; // 0xa8
	bool Submerged; // 0xa9
};

struct FCookerSmokeFeedbackEntry {
	ECookingSmokeFeedbackLevel FeedbackLevel; // 0x0
	UParticleSystem* SmokeVFX; // 0x8
};

struct FMysteriousNoteTheme {
	FString NoteType; // 0x0
};

struct FEventPetReactRequest {
	AActor* ReactSource; // 0x0
	FName ReactId; // 0x8
};

struct FStunAttackerOnHitSurfacePair {
	UPhysicalMaterial* PhysMaterial; // 0x0
	float StunDuration; // 0x8
};

struct FAIShipEncounterWaveDesc {
	TArray<UShipSize*> ShipSizes; // 0x0
};

struct FEmissaryLevelData {
	int32_t LevelTarget; // 0x0
	FEmissaryFlagMeshReferences EmissaryFlagMeshAssetReferences; // 0x8
	UWeightedItemDescSpawnDataAsset* EmissaryFlotsamSpawnDataAsset; // 0x28
	FRewardId EmissaryDeactivationReward; // 0x48
	TArray<FPlayerStat> StatsToFireOnEmissaryLevelReached; // 0x50
	FStringAssetReference TreasureSoldNotificationFlag; // 0x60
	FStringAssetReference EmissaryFlagTextureReference; // 0x70
};

struct FPendingInvitesListEvent {
	TArray<FPendingInviteViewModel> Invites; // 0x0
};

struct FPlayerGameFishingCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FCinematicCrewEvent {
	TArray<FString> CrewMembers; // 0x0
	FText Header; // 0x10
	FName Tag; // 0x48
};

struct FTavernBoardMyMapsEvent {
	TArray<FITavernBoardMap> MyMaps; // 0x0
};

struct FMerchantMapContents {
	FTreasureMapTextDesc PickupLocation; // 0x0
	FTreasureMapTextDesc DeliveryLocation; // 0x48
	FTreasureMapTextDesc DeliverByTime; // 0x90
	FName DeliveryLocationIslandName; // 0xd8
	TArray<FMerchantMapItemData> ItemData; // 0xe0
};

struct FSeasonRewardEarnedMessage {
	FPirateIdentity Pirate; // 0x0
	FGuid SeasonId; // 0x78
	bool MultipleRewards; // 0x88
	TArray<FSeasonReward> Rewards; // 0x90
};

struct FAnimNode_HIKLookAt : FAnimNode_HIKBase {
	float Alpha; // 0x48
	FVector TargetPosition; // 0x4c
	float ChestContribution; // 0x58
	bool XYOnly; // 0x5c
	EHIKLookAtLimits Limits; // 0x5d
	float LimitsHorizontalAngle; // 0x60
	float LimitsVerticalAngle; // 0x64
	float ActivationSpeed; // 0x68
	float TargetPositionSpeed; // 0x6c
	EHIKLookAtInterpolation InterpolationMode; // 0x70
};

struct FStutterDataTelemetryFragment {
	float StutterFramePercentage; // 0x0
	float StutterFrameDeltaMax; // 0x4
	float StutterFrameDeltaAverage; // 0x8
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0x58
	bool bLimitDisplacement; // 0x64
	float MaxDisplacement; // 0x68
	float SpringStiffness; // 0x6c
	float SpringDamping; // 0x70
	float ErrorResetThresh; // 0x74
	bool bNoZSpring; // 0x78
	bool bTranslateX; // 0x79
	bool bTranslateY; // 0x7a
	bool bTranslateZ; // 0x7b
	bool bRotateX; // 0x7c
	bool bRotateY; // 0x7d
	bool bRotateZ; // 0x7e
};

struct FSeasonGoalCompletionEvent {
	FGuid SeasonId; // 0x0
	FGuid GoalId; // 0x10
	ESeasonGoalType GoalType; // 0x20
	FGuid GoalGroupId; // 0x24
};

struct FClientInputMatchmakingNotificationResultTelemetryEvent {
	bool Accepted; // 0x0
};

struct FCanvasLerpData {
	float LerpTime; // 0x0
	float EaseExponent; // 0x4
};

struct FAIBountySpawnerWaveLocation {
	FVector Location; // 0x0
	float SelectionWeight; // 0xc
	bool AllowForTarget; // 0x10
};

struct FUISeasonsDataErrorEvent {
	FString ErrorMessage; // 0x0
	FString ErrorStack; // 0x10
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FWheelAnimationProperties {
	float MaxWheelAngle; // 0x0
	float MinWheelAngle; // 0x4
	float MaxWheelSpeed; // 0x8
	float SpeedForFastTurns; // 0xc
	float SpeedForMidTurns; // 0x10
	float Left180ZoneAMin; // 0x14
	float Left180ZoneAMax; // 0x18
	float Left180ZoneBMin; // 0x1c
	float Left180ZoneBMax; // 0x20
	float Right180ZoneAMin; // 0x24
	float Right180ZoneAMax; // 0x28
	float Right180ZoneBMin; // 0x2c
	float Right180ZoneBMax; // 0x30
	float LeftMid180ZoneAMin; // 0x34
	float LeftMid180ZoneAMax; // 0x38
	float RightMid180ZoneAMin; // 0x3c
	float RightMid180ZoneAMax; // 0x40
	float Animation180AngleMap; // 0x44
	float ServerWheelBlend; // 0x48
	float WheelBlend; // 0x4c
	float TurbulenceMaxDriftSpeed; // 0x50
	UCurveFloat* TurbulenceInputScale; // 0x58
	float TurbulenceMaxDriftPercentageCounter; // 0x60
	float TurbulenceMaxDriftBoostPercentage; // 0x64
	float TurbulenceLockJitterRate; // 0x68
	float TurbulenceLockJitter; // 0x6c
	float TurbulenceSmoothRate; // 0x70
	float SteeringAngleFeedbackThreshold; // 0x74
};

struct FAthenaAnimationDeathData {
	FDamageInstance KillingDamage; // 0x0
	ECharacterDeathType DeathType; // 0x28
	char IsDead : 1; // 0x2c
	char Reviving : 1; // 0x2c
};

struct FEnvFloatParam : FEnvFloatParam_DEPRECATED {
	float Value; // 0x0
	FName ParamName; // 0x4
};

struct FShovelDigActionStateParams {
	UCurveFloat* SuccessfulPitchBlendCurve; // 0x0
	UCurveFloat* DeflectedPitchBlendCurve; // 0x8
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
};

struct FTavernBoardAvailableMapsEvent {
	TArray<FITavernBoardMap> Maps; // 0x0
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0x58
	FVector Translation; // 0x64
	FRotator Rotation; // 0x70
	FVector Scale; // 0x7c
	EBoneModificationMode TranslationMode; // 0x88
	EBoneModificationMode RotationMode; // 0x89
	EBoneModificationMode ScaleMode; // 0x8a
	EBoneControlSpace TranslationSpace; // 0x8b
	EBoneControlSpace RotationSpace; // 0x8c
	EBoneControlSpace ScaleSpace; // 0x8d
};

struct FShipDamageParams {
	TArray<FShipPartLevelsOfDamage> DamageParams; // 0x0
};

struct FTrackedObjectiveProgressUpdateMessage {
	FGuid ObjectiveId; // 0x0
	FPirateIdentity PirateIdentity; // 0x10
	FPlayerBaseTelemetryFragment PlayerInfo; // 0x88
	EPlayMode Playmode; // 0xd0
	EPlayModeVariant PlayModeVariant; // 0xd1
	int32_t Value; // 0xd4
	double CreatedAt; // 0xd8
};

struct FGameplayTagTableRow : FTableRowBase {
	FString Tag; // 0x0
	FText CategoryText; // 0x10
};

struct FWieldableItemActionVisuals {
	TArray<UNotificationInputId*> BlockActions; // 0x0
	EWieldableItemAnimVariant AnimVariant; // 0x10
	bool IsAlternate; // 0x11
	bool HideItem; // 0x12
};

struct FEmblemInformation {
	FString BackgroundImageUrl; // 0x0
	FText Name; // 0x10
	TArray<FText> ProgressDescriptions; // 0x48
	TArray<FCappedCount> Progressions; // 0x58
	uint32_t Doubloons; // 0x68
};

struct FSpawnLocationReservation {
	UIslandItemDataAsset* LocationType; // 0x0
	FIslandItemSpawnLocationData SpawnData; // 0x8
};

struct FQuestVariableVectorArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FKrakenSpawnTelemetryEvent {
	FString KrakenId; // 0x0
	FGuid ConfigSpawnId; // 0x10
};

struct FPirateGeneratorTextureReference {
	FName Name; // 0x0
	TArray<FName> References; // 0x8
};

struct FEventStatusScreenSpaceParticleEffectStarted {
	UObject* ParticleSystem; // 0x0
};

struct FCrewBeganPrimaryVoyageEvent {
	FGuid CrewId; // 0x0
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FPlayerSentNotesTelemetryEvent {
	int32_t NoteCount; // 0x0
};

struct FPioneerRewardInfo {
	UPopUpMessageDesc* PopUp; // 0x0
	FString RewardId; // 0x8
};

struct FAIShipDespawnTelemetryEvent {
	FString AIShipId; // 0x0
	EAIShipDestructionReason AIShipDestructionReason; // 0x10
};

struct FAthenaAnimationShopInteractionAnimations {
	EInteractionObject ObjectType; // 0x0
	UAnimSequence* Into; // 0x8
	TArray<UAnimSequence*> Loop; // 0x10
	UAnimSequence* Out; // 0x20
};

struct FBootyItemShipDroppedInfo {
	FGuid CrewId; // 0x0
	bool DroppedOnOwnShip; // 0x10
	bool DroppedOnAnotherShip; // 0x11
};

struct FStoreCatalogItem {
	FString ProductId; // 0x0
	FString Title; // 0x10
	FString Description; // 0x20
	FString FormattedPrice; // 0x30
	FString FormattedBasePrice; // 0x40
	FString CurrencyCode; // 0x50
	bool IsOnSale; // 0x60
	FDateTime SaleEndDate; // 0x68
	FString ImageUri; // 0x70
	TArray<FString> MetaTags; // 0x80
	int32_t DisplayPriority; // 0x90
};

struct FShipIdentityOwnership {
	FGuid OwningCrewID; // 0x0
	FShipLiveryCatalogueEntry Identity; // 0x10
};

struct FQuestVariableFloat : FQuestVariable {
	FName ParamName; // 0x8
};

struct FEventKrakenSpawned {
	AShip* PrimaryShipTarget; // 0x0
	FGuid ConfigSpawnId; // 0x8
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType_InstancedStaticMesh* Type; // 0x38
};

struct FPlayerBucketScoopTelemetryEvent {
	FString BucketContents; // 0x0
	FGuid ScoopID; // 0x10
	FString ScoopSource; // 0x20
	float ScoopVolume; // 0x30
};

struct FResponseMigrationStatusNetworkEvent : FNetworkEventStruct {
	FString MigrationStatusLog; // 0x10
};

struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams {
	float Weight; // 0x0
	FKrakenShipWrappingBehaviourWrapLocationParams Params; // 0x10
};

struct FCinematicQuestEvent {
	FText Message; // 0x0
	FText Header; // 0x38
	FName Tag; // 0x70
	bool DisableMusic; // 0x78
};

struct FPlayerBrigStatusChanged : FNetworkEventStruct {
	FNetActorPtr NetPlayerState; // 0x10
	bool IsFree; // 0x24
};

struct FRewardRequestSucceededEvent {
	FGuid RequestID; // 0x0
	FName RewardId; // 0x10
};

struct FWorldReticleParameters {
	FVector AOEScale; // 0x0
};

struct FAshenWindSkullUseItemTelemetryEvent {
	FGuid BootyId; // 0x0
	float Charge; // 0x10
};

struct FNetActorPtr {
	FNetObjectPtr ObjectPtr; // 0x0
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

struct FPetShopPetSpecies {
	FText Title; // 0x0
	FStringAssetReference Icon; // 0x38
	FText Description; // 0x48
	TArray<FPetShopPetBreed> Breeds; // 0x80
};

struct FServerMatchmakingFailedMessage {
	FGuid CrewId; // 0x0
	EServerMatchmakingFailureReason Reason; // 0x10
};

struct FIdleTimeTracker {
	FTimespan InactivityThreshold; // 0x0
};

struct FInputCombinedAxisKeyMapping {
	FName AxisName; // 0x0
	FKey KeyX; // 0x8
	FKey KeyY; // 0x28
	float Scale; // 0x48
	float CircularDeadZoneLowerBound; // 0x4c
	float CircularDeadZoneUpperBound; // 0x50
	float Exponent; // 0x54
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

struct FArmoryChestEquipItemEvent {
	UItemDesc* ItemDesc; // 0x0
	int32_t SlotIndex; // 0x8
};

struct FProjectileAim {
	FVector AimDirection; // 0x0
	FVector AimPosition; // 0xc
	UPrimitiveComponent* AimBase; // 0x18
	FTransform AimBaseTransform; // 0x20
};

struct FCharacterSocketFootWaterImpactResult {
	FVector Position; // 0x0
	FVector SocketVelocity; // 0xc
	int32_t FootIndex; // 0x18
};

struct FIslandEventIcons {
	UTexture* ActiveEventIcon; // 0x0
	UTexture* InactiveEventIcon; // 0x8
};

struct FTreasureMapData {
	UTreasureMapDataAsset* Map; // 0x0
	UGeneratedLocationsDataAsset* LocationSource; // 0x8
	TArray<FTreasureLocationData> TreasureLocations; // 0x10
	float RotationFromNorth; // 0x20
};

struct FEventKrakenAnimatedTentacleStateEntered {
	UKrakenAnimatedTentacleState* State; // 0x0
	UKrakenAnimatedTentacleState* PreviousState; // 0x8
	bool SkipTransitions; // 0x10
};

struct FMigrationSetupCompleteNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FAthenaAnimationPulleyDataAssetEntry {
	UAnimSequence* Into; // 0x0
	UAnimSequence* Idle; // 0x8
	UAnimSequence* Action; // 0x10
	UAnimSequence* Outof; // 0x18
};

struct FEventStatusScreenEffectEnded {
	FName MaterialParamName; // 0x0
	float FadeOutAcceleration; // 0x8
};

struct FWwiseNativeEmitterPoolDensityParams {
	bool PlayPoolDensityAudio; // 0x0
	UWwiseEvent* PoolDensityAudioPlayEvent; // 0x8
	UWwiseEvent* PoolDensityAudioStopEvent; // 0x10
	FName DensityRtpcName; // 0x18
	int32_t FullDensityAmount; // 0x20
	float DensityDistance; // 0x24
};

struct FEventNPCChatUINotification : FEventUINotification {
	FNPCChat NpcMessage; // 0x0
};

struct FPlayerKillAITelemetryEvent {
	FGuid AttackId; // 0x0
};

struct FGameplayEffectContext {
	TWeakObjectPtr<AActor> Instigator; // 0x8
	TWeakObjectPtr<AActor> EffectCauser; // 0x10
	TWeakObjectPtr<UObject> SourceObject; // 0x18
	TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x20
	TArray<TWeakObjectPtr<AActor>> Actors; // 0x28
	FVector WorldOrigin; // 0x50
	bool bHasWorldOrigin; // 0x5c
};

struct FFFTWaterQueryResult {
	float Height; // 0x0
	FVector2D Choppiness; // 0x4
	FVector Normal; // 0xc
	EWaterQueryResult WaterQueryResult; // 0x18
};

struct FPeriodObjectiveCompleteMessage {
	FString PeriodId; // 0x0
	FDateTime PeriodStartDateTime; // 0x10
	FDateTime PeriodEndDateTime; // 0x18
	FString PeriodObjectiveId; // 0x20
	FString UserId; // 0x30
	TArray<FGuid> PlayerGameIds; // 0x40
	bool HasReward; // 0x50
	FString RewardId; // 0x58
};

struct FAIFormVarietyEntry {
	FStringAssetReference Form; // 0x0
	float Weight; // 0x10
	int32_t MaxPerEncounter; // 0x14
	TArray<FAIIndividualVarietyEntry> Individuals; // 0x18
};

struct FGetItemsDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FItemStateData> Data; // 0x8
};

struct FEventPlayerChangedTableMapPan {
	FVector2D PanDelta; // 0x0
};

struct FFFTWaterComponentIntersectParticleType {
	FVector2D VelocityRange; // 0x0
	FVector2D FoamRange; // 0x8
	FVector2D HeightRange; // 0x10
	FVector2D ParticleWaveVelocityRange; // 0x18
	FVector2D ParticleWaveAbsoluteSpeedDifferenceRange; // 0x20
	float Density; // 0x28
	float VolumeHorizontalVelocityWeight; // 0x2c
	float HorizontalDirectionFromVolumeWeight; // 0x30
	float HorizontalRandomVelocityWeight; // 0x34
	float VolumeVerticalVelocityWeight; // 0x38
	float VerticalRandomVelocityWeight; // 0x3c
	float WaterVelocityWeight; // 0x40
	float VelocityScaling; // 0x44
	char UnderwaterParticles : 1; // 0x48
	UParticleComputeShaderData* ParticleComputeShaderData; // 0x50
};

struct FTreasureMapWidgetLocalisedText : FTreasureMapWidgetText {
	FText Text; // 0x20
};

struct FTreasureFoundTelemetryEvent {
	FGuid BootyId; // 0x0
	FGuid QuestId; // 0x10
	FString Rarity; // 0x20
	bool IsBoobyTrapped; // 0x30
};

struct FAthenaAnimationSwimmingSprintAnimData {
	UAnimSequence* Into; // 0x0
	UAnimSequence* Loop; // 0x8
	UAnimSequence* IntoUnderwater; // 0x10
	UAnimSequence* LoopUnderwater; // 0x18
};

struct FVoiceChatStatusTelemetryEvent {
	EVoiceChatAudioDevice Device; // 0x0
	bool IsInPartyChat; // 0x1
};

struct FExternalMip {
	uint32_t SizeX; // 0x0
	uint32_t SizeY; // 0x4
	uint32_t OffsetInFile; // 0x8
	uint32_t DataSizeOnDisk; // 0xc
	uint32_t DataSize; // 0x10
	uint32_t DecompressionFlags; // 0x14
};

struct FAIDebugVisualisationBox {
	FVector Centre; // 0x0
	FVector Extents; // 0xc
	FQuat Rotation; // 0x20
	float LifeTime; // 0x30
	EAIDebugColour Colour; // 0x34
};

struct FGameSessionIdTelemetryFragment {
	FString SessionHostId; // 0x0
	FGuid SessionId; // 0x10
};

struct FBakedAnimationState {
	FName StateName; // 0x0
	FName PathedStateName; // 0x8
	TArray<FBakedStateExitTransition> Transitions; // 0x10
	int32_t StateRootNodeIndex; // 0x20
	int32_t StartNotify; // 0x24
	int32_t EndNotify; // 0x28
	int32_t FullyBlendedNotify; // 0x2c
	bool bIsAConduit; // 0x30
	int32_t EntryRuleNodeIndex; // 0x34
	TArray<int32_t> PlayerNodeIndices; // 0x38
	bool CanBeReEntered; // 0x48
};

struct FAllowedItemsBasedOnFeature {
	FName FeatureName; // 0x0
	UContainerAllowedItemsDataAsset* AllowedItems; // 0x8
};

struct FCanvasWorldMapReaperTrackedBootItemIcon {
	EReapersMarkTrackedBootyItemType BootyItemType; // 0x0
	UTexture* Texture; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FFirstPersonAnimaticActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FFirstPersonAnimaticSettings FirstPersonAnimaticSettings; // 0x30
};

struct FSpotLightTemplate : FPointLightTemplate {
	FSpotLightData SpotLightData; // 0xc0
};

struct FReapersMarkLevelChanged {
	int32_t NewLevel; // 0x0
	FGuid AssociatedCrew; // 0x4
};

struct FRequestEquipmentChestItemEntitlementsEvent {
	FString ItemCategory; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionFloat* Distribution; // 0x30
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FKrakenMusicEvent : FMusicEvent {
	UWwiseEvent* StartEvent; // 0x0
	UWwiseEvent* StopEvent; // 0x8
};

struct FEventChatboxTextFromVirtualKeyboard {
	FString Text; // 0x0
};

struct FAIDebugVisualisationCone {
	FVector Origin; // 0x0
	FVector Direction; // 0xc
	float Length; // 0x18
	float AngleWidthRadians; // 0x1c
	float AngleHeightRadians; // 0x20
	float LifeTime; // 0x24
	EAIDebugColour Colour; // 0x28
};

struct FItemLoadoutSlot {
	UItemCategory* ItemCategory; // 0x0
	TArray<AItemInfo*> Items; // 0x8
	int32_t Capacity; // 0x18
};

struct FCargoRunCratePickedUpTelemetryEvent {
	FGuid BootyId; // 0x0
	FString Rarity; // 0x10
};

struct FNotesRemoteServiceModel {
	TArray<FGuid> Notes; // 0x0
};

struct FPetControllerSetTickOrderEvent {
	AActor* Actor; // 0x0
};

struct FPetChestPetEntitlementsUpdatedEvent {
	TArray<FChestEntitlementViewModel> Entitlements; // 0x0
};

struct FInteractObjectActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetSubObjectPtr InteractObject; // 0x30
};

struct FEmoteData {
	FEmoteId EmoteId; // 0x0
	FText EmoteDisplayName; // 0x8
	FText AudioDescription; // 0x40
	float DelayBeforeAllowingExit; // 0x78
	float VerticalOffsetFactorWhenZoomed; // 0x7c
	bool HideNameplate; // 0x80
	UEmotePropData* EmotePropDataAsset; // 0x88
	bool CanPlayInSuccession; // 0x90
	bool ShowDescriptionInTextChat; // 0x91
};

struct FCategoryPreviewEntry {
	UItemCategory* PreviewCategory; // 0x0
	UObject* ItemCategoryClass; // 0x8
	UItemPreviewDataObject* PreviewClassType; // 0x10
};

struct FEventIslandDiscoveredNotification {
	FText IslandName; // 0x0
	EIslandType IslandType; // 0x38
	FName SeaName; // 0x3c
	EIslandActiveEventType IslandActiveEventType; // 0x44
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FCharacterSocketCollisionServiceParams {
	float MaxCharacterDistanceSqr; // 0x0
	int32_t MaxSockets; // 0x4
};

struct FRiggingSystemLineParams {
	FSocketId Start; // 0x0
	TArray<FRiggingSystemPulleyParams> Pulleys; // 0x20
	FSocketId End; // 0x30
	FRopeVisualParams Visuals; // 0x50
	FRopeCatenaryShapeParams Shape; // 0x5c
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FEventAIEmoteActionAnimationChange {
	ESkeletonEmoteActionState ActiveEmoteActionState; // 0x0
	AAthenaCharacter* Owner; // 0x8
};

struct FCheckBoxStyle : FSlateWidgetStyle {
	ESlateCheckBoxType CheckBoxType; // 0x8
	FSlateBrush UncheckedImage; // 0x10
	FSlateBrush UncheckedHoveredImage; // 0xa0
	FSlateBrush UncheckedPressedImage; // 0x130
	FSlateBrush CheckedImage; // 0x1c0
	FSlateBrush CheckedHoveredImage; // 0x250
	FSlateBrush CheckedPressedImage; // 0x2e0
	FSlateBrush UndeterminedImage; // 0x370
	FSlateBrush UndeterminedHoveredImage; // 0x400
	FSlateBrush UndeterminedPressedImage; // 0x490
	FMargin Padding; // 0x520
	FSlateColor ForegroundColor; // 0x530
	FSlateColor BorderBackgroundColor; // 0x560
	FSlateSound CheckedSlateSound; // 0x590
	FSlateSound UncheckedSlateSound; // 0x5a8
	FSlateSound HoveredSlateSound; // 0x5c0
	FName CheckedSound; // 0x5d8
	FName UncheckedSound; // 0x5e0
	FName HoveredSound; // 0x5e8
};

struct FPetBaseTelemetryFragment {
	FString OwnerId; // 0x0
	FString PetPartId; // 0x10
	EItemRepresentation CurrentPetRepresentation; // 0x20
	FVector PetLocation; // 0x24
};

struct FAIShipSpawnCustomServerEvent : FGlobalCustomServerEvent {
	FString AIShipId; // 0x18
};

struct FQuestVariable {
	FName ParamName; // 0x8
};

struct FCutscenePool {
	FName CutsceneName; // 0x0
	int32_t Priority; // 0x8
	int32_t ActivationChance; // 0xc
	bool ShouldQueue; // 0x10
	float AdditionalPoolCooldown; // 0x14
	UCutscenePoolType* PoolType; // 0x18
	TArray<USceneDialogueData*> DialogueData; // 0x20
	TArray<float> CutsceneLengths; // 0x30
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FCustomTriggerData {
	ATriggerBase* TriggerObject; // 0x0
	TMap<int32_t, ECollisionChannel> EntitiesToTrigger; // 0x8
	bool DetectingPlayers; // 0x58
	bool DetectingShips; // 0x59
	bool DetectingEnemies; // 0x5a
};

struct FEvictPlayerMessage {
	FString UserId; // 0x0
};

struct FShipTrackerSnapshot {
	int32_t ShipId; // 0x0
	EShipRegion Region; // 0x4
};

struct FKrakenWeightedBehaviour {
	int32_t Weight; // 0x0
	EKrakenBehaviourType BehaviourType; // 0x4
};

struct FUserSettingsTelemetryEvent {
	int32_t AutoDetectedMachineSpec; // 0x0
	FPersistentUserGameSettings UserSettings; // 0x8
	bool RHIThread; // 0x180
};

struct FEventHealthChangeContinuousApplied {
	float ChangeDelta; // 0x0
	EHealthChangedReason Reason; // 0x4
};

struct FDistanceAndLevelOfDamage {
	float DistanceLimit; // 0x0
	int32_t LevelOfDamage; // 0x4
};

struct FCreateMysteriousNoteData {
	int32_t PlayerNetGUID; // 0x0
	FString NoteType; // 0x8
	FString NoteTitle; // 0x18
	FString NoteBody; // 0x28
};

struct FContestLaunchStartBlinds : FNetworkEventStruct {
	FGuid CrewId; // 0x10
	float DisplayDuration; // 0x20
};

struct FServerDeniedClientAtPreLoginTelemetryEvent {
	FString ErrorMessage; // 0x0
	FString UserId; // 0x10
	EPreLoginDeniedReason ReasonCode; // 0x20
};

struct FWorldMapSetShipLocation {
	float ShipX; // 0x0
	float ShipY; // 0x4
	float Rotation; // 0x8
};

struct FCompanyBootyStats {
	UCompany* CompanyId; // 0x0
	FBootyItemStats Stats; // 0x8
};

struct FCarouselPirateBodyshapeCompass {
	ECarouselPirateBodyshapeDirection StartDirection; // 0x0
	ECarouselPirateBodyshapeDirection EndDirection; // 0x1
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

struct FPlayerBuriedItemServiceMapBundlePlacedOnTableEvent {
	FString PlayerName; // 0x0
	UPopUpMessageDesc* PopUpDesc; // 0x10
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FPetLoadedMaterial {
	UMaterialInstance* MaterialInstance; // 0x0
	bool CastShadows; // 0x8
};

struct FCommodityDemandMultipliers {
	FName RewardId; // 0x0
	TArray<FNPCDemandMultiplier> NPCMultipliers; // 0x8
};

struct FEventAthenaLocalPlayerPirateIdentitySet {
	FPirateIdentity PirateIdentity; // 0x0
};

struct FFeaturedClothingCategory {
	UClothingCategory* Category; // 0x0
	FName Feature; // 0x8
};

struct FPetAnimationWeighting {
	EAthenaAnimationPetRoamingState AnimationState; // 0x0
	float Weighting; // 0x4
};

struct FAthenaAnimationObjectComplexOneShotPlaySpeeds {
	float WarmUpPlaySpeed; // 0x0
	float WarmUpFromBlockPlaySpeed; // 0x4
	float ActionPlaySpeed; // 0x8
	float RecoverPlaySpeed; // 0xc
	float HeavyAttackStunRecoverPlaySpeed; // 0x10
};

struct FVolcanoStateData {
	EVolcanoState State; // 0x0
	float StateDuration; // 0x4
	float PercentageOfMaxTargetingRange; // 0x8
};

struct FEmissaryEncounteredKrakenEvent {
	FName CompanyName; // 0x0
};

struct FShipHullAudioData {
	FWwiseEmitter Emitter; // 0x0
	UWwiseObjectPoolWrapper* WwiseObjectPoolWrapper; // 0x20
	UWwiseEvent* WwiseEvent; // 0x28
	FName Name; // 0x30
	FVector Offset; // 0x38
	char ShipSinkingExceededRollThreshold : 1; // 0x44
	char SetRTPC_Pitch : 1; // 0x44
	char SetRTPC_Roll : 1; // 0x44
	char SetRTPC_Velocity : 1; // 0x44
	char SetRTPC_Strain : 1; // 0x44
};

struct FCameraCacheEntry {
	float TimeStamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FLoadShipCannonData {
	FString ItemName; // 0x0
	FGuid CrewId; // 0x10
	int32_t CannonIndex; // 0x20
};

struct FServerMigrationFailedDevTelemetryEvent {
	FGuid MigrationId; // 0x0
	FString Stage; // 0x10
};

struct FShopOfferPrerequisites {
	TArray<FString> Entitlements; // 0x0
	TMap<FString, uint32_t> Reputations; // 0x10
	uint32_t EntitlementRequirementThreshold; // 0x60
};

struct FReputationCompanyDisplayInformation {
	FText CompanyName; // 0x0
	FText Motto; // 0x38
	FText CurrentRank; // 0x70
	FString BackgroundImageUrl; // 0xa8
	FString RibbonImageUrl; // 0xb8
	FName CompanyId; // 0xc8
	EProgressStyle Style; // 0xd0
	float CompanyLevel; // 0xd4
	FEmissaryState EmissaryState; // 0xd8
};

struct FFaunaAnimationTurningStructure {
	UAnimSequence* TurnLeft; // 0x0
	UAnimSequence* TurnRight; // 0x8
};

struct FAlternateHeldPose {
	UAnimSequenceBase* AlternateHeldPose; // 0x0
	float AlternateHeldPoseStrength; // 0x8
};

struct FAggressiveGhostShipSplineDataVariables {
	double StartTime; // 0x0
	double StartTimeOffset; // 0x8
	TArray<float> SplineOffsets; // 0x10
	FVector CentrePoint; // 0x20
	float StartAngleOffset; // 0x2c
	bool ReverseDirection; // 0x30
};

struct FEventInGameUISetMigrationMode {
	bool MigrationModeEnabled; // 0x0
};

struct FSharkMaterialEntry {
	FStringAssetReference MaterialReference; // 0x0
	bool CastShadows; // 0x10
};

struct FSpatialOffset {
	float OffsetValue; // 0x0
	ESpatialOffsetMethod OffsetMethod; // 0x4
};

struct FTetherProjectileImpact {
	AActor* HitActor; // 0x0
};

struct FEncounterListenerData {
	TArray<EEncounterListenerType> EncounterListenerTypes; // 0x0
	TArray<AActor*> EncounterListenerActors; // 0x10
	TArray<FVector> EncounterListenerLocations; // 0x20
};

struct FLoadoutRepairSuccessTelemetryEvent : FLoadoutRepairTelemetryEventBase {
	int32_t CarouselSeed; // 0x4
	int32_t NumAppliedDescs; // 0x8
	int32_t NumMissingCategories; // 0xc
};

struct FOpenableItemMeshAnimationReactionComponentAnimationNameAndSfxCueSet {
	FName Open; // 0x0
	FName OpeningFirstTime; // 0x8
	UWwiseEvent* OpeningFirstTimeSfx; // 0x10
	FName Opening; // 0x18
	UWwiseEvent* OpeningSfx; // 0x20
	FName Closing; // 0x28
	UWwiseEvent* ClosingSfx; // 0x30
	FName Closed; // 0x38
};

struct FFixedStepInterpCurveVector2D {
	TArray<FFixedStepInterpCurvePointVector2D> Points; // 0x0
	float StepTime; // 0x10
	bool IsLooped; // 0x14
};

struct FEventOwnedPawnFinishedSpawning {
	UObject* AICoordinator; // 0x0
	FName Region; // 0x8
	FVector SpawnPos; // 0x10
	AActor* ActorToPerceiveOnSpawn; // 0x20
	float MaximumDistanceToPerceiveOnSpawn; // 0x28
	UAthenaAIControllerParamsDataAsset* Skillset; // 0x30
	FName HomeRegionZone; // 0x38
	UObject* TargetInteractableOnSpawn; // 0x40
	UAISpawner* OwnerAISpawner; // 0x48
};

struct FPosablePirateAnimation {
	UAnimSequence* Animation; // 0x0
	USkeletalMesh* SkeletalMeshProp; // 0x8
	UStaticMesh* StaticMeshProp; // 0x10
	FName PropSocketName; // 0x18
};

struct FEventAnimationShopInteraction {
	bool Active; // 0x0
	EInteractionObject Type; // 0x1
};

struct FKrakenShipWrappingBehaviourNamedTransform {
	FName Name; // 0x0
	FTransform Transform; // 0x10
};

struct FPlayerTookFlameOfFateEvent {
	AAthenaPlayerCharacter* PlayerCharacter; // 0x0
	UObject* Source; // 0x8
	EFlameOfFateType FlameOfFateType; // 0x10
};

struct FEventShipBecameUseless {
	AActor* Ship; // 0x0
};

struct FShipRepairTelemetryEvent {
	FString UserId; // 0x0
	FVector DamageLocation; // 0x10
	FString RepairedShipPart; // 0x20
	int32_t DamageLevel; // 0x30
	float RepairPercentage; // 0x34
};

struct FCampaignRanks {
	FName CampaignId; // 0x0
	TArray<UTaleRankDesc*> Ranks; // 0x8
};

struct FCurveUpdateValues {
	FName CurveName; // 0x0
	float FinalValue; // 0x8
};

struct FCustomAnimationMontageComponentReplicatedData {
	FCustomAnimationMontageId CustomMontageId; // 0x0
	int32_t AnimationCallId; // 0x8
};

struct FTaleQuestFailedNetworkEvent : FNetworkEventStruct {
	URunnable* FailureRunnable; // 0x10
};

struct FEventNoteCompletionStep {
	APlayerController* PlayerController; // 0x0
	FName CompletionStepID; // 0x8
};

struct FDioramaDebugMenuEntry {
	UAISpawner* Spawner; // 0x0
	UAIDioramaDesc* DioramaDesc; // 0x8
	FString DioramaName; // 0x10
	FString TaleId; // 0x20
};

struct FKeyBinding {
	FString BindingName; // 0x0
	FName KeyName; // 0x10
	EInputControllerType ControllerType; // 0x18
};

struct FActorComponentTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x30
	char bTickEvenWhenPaused : 1; // 0x32
	char bCanEverTick : 1; // 0x32
	char bStartWithTickEnabled : 1; // 0x32
	char bAllowTickOnDedicatedServer : 1; // 0x32
	float TickInterval; // 0x40
};

struct FPlayerNewLevelEvent {
	uint32_t NewLevel; // 0x0
	uint32_t PreviousLevel; // 0x4
	FName CompanyId; // 0x8
};

struct FEventCompanyReputationCampaignInformationRequest {
	FString CompanyId; // 0x0
};

struct FOnEndWaterSlideActionStateEvent {
	UWwiseEvent* WaterSlideEnd; // 0x8
	UWwiseEvent* WaterSlideIsEndOneShot; // 0x10
};

struct FClientDeveloperTelemetryEvent : FDeveloperTelemetryPayload {
	FString EventTag; // 0x0
	FJsonObjectWrapper Json; // 0x10
};

struct FQuestVariableItemSpawnDataTypeArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FQuestVariableGuidArray : FQuestVariable {
	FName ParamName; // 0x8
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FInventoryMemory {
	TMap<UItemCategory*, int32_t> LastEquippedIndexOfCategoryMap; // 0x0
};

struct FEventWaterAmountChanged {
	float NewWaterAmount; // 0x0
};

struct FCutSceneLoadData {
	FStringAssetReference SequenceToPlayAssetReference; // 0x0
	AActor* SpawnablesParent; // 0x10
};

struct FWeightedAISpawnTypeParams {
	float Weight; // 0x0
	int32_t MaxTimesCanBeSelected; // 0x4
	FAISpawnTypeParams Params; // 0x8
};

struct FEnableDefaultFogBanksData {
	bool Enable; // 0x0
};

struct FWeaponProjectileEffectParams {
	bool ApplyStun; // 0x0
	float StunDuration; // 0x4
	bool ApplyKnockback; // 0x8
	FKnockBackInfo KnockbackParams; // 0xc
	int32_t MinimumHitProjectilesForKnockback; // 0x5c
	float MaximumKnockbackDistance; // 0x60
	bool EnableKnockbackFalloffOverDistance; // 0x64
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FEventUpdateIslandEventHighlight {
	bool IsHighlightActive; // 0x0
};

struct FIPGBlendingMethod {
	FName Name; // 0x0
	float Probability; // 0x8
	EIPGBlendType BlendType; // 0xc
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FNotesRemoteServiceNoteModel {
	FGuid Id; // 0x0
	FDateTime ActiveFromUtc; // 0x10
	FDateTime ActiveToUtc; // 0x18
	bool IsRead; // 0x20
	TArray<FString> CompletionEventIds; // 0x28
	TMap<FString, FString> MetaData; // 0x38
};

struct FInventoryInteractionStowRequestEvent {
	FString ItemDesc; // 0x0
};

struct FEventPlayerStoppedPlayingShanty {
	AActor* Player; // 0x0
};

struct FSittingThirdPersonCameraActionStateConstructionInfo : FActorActionStateConstructionInfo {
	UAthenaSpringArmComponentParams* SpringArmParams; // 0x30
	float VerticalOffsetFactorWhenZoomed; // 0x38
};

struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x0
	int32_t StaticSingleElement; // 0x10
	int32_t StaticInt32Array[0x3]; // 0x14
	float StaticFloatArray[0x3]; // 0x20
	TArray<FVector> VectorArray; // 0x30
};

struct FShipLivery {
	TArray<FShipLiveryTextureSwap> LiveryTextureSwaps; // 0x0
	TArray<FShipLiveryRGBSwap> LiveryRGBSwaps; // 0x10
};

struct FEventAIUseAlternateLocomotionSet {
	bool UseAlternateLocomotionSet; // 0x0
	UWieldableItemAnimationStoreId* WieldedItemAnimationStoreId; // 0x8
};

struct FFishingRodReplicatedFishState {
	AFishingFish* FishingFish; // 0x0
	EFishingFishState FishingFishState; // 0x8
	bool FishHasEscaped; // 0x9
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FStandardRudderDynamicsParameters {
	float SteeringBoostMultiplier; // 0x0
	float RudderBrakeAmplitude; // 0x4
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FEventPetDismissed {
	AActor* DismissingActor; // 0x0
};

struct FSiteGeneratorThresholdData {
	float MinSpawnDistanceFromEndOfWorldZone; // 0x0
	float ClearanceRadius; // 0x4
	float MinDistanceFromClosestShipwreck; // 0x8
	float MinDistanceFromClosestCrewShip; // 0xc
	float MinDistanceFromClosestIsland; // 0x10
	float MinDistanceFromClosestPlayer; // 0x14
	float MinDistanceFromClosestRock; // 0x18
};

struct FHIKBoneMapping {
	FName UnrealBoneName; // 0x0
	int32_t HumanIKBone; // 0x8
};

struct FGetStorageContainersDataResponse : FGetActorsInRadiusDataResponse {
	TArray<FStorageContainerStateData> Data; // 0x8
};

struct FAIIncrementalWaveSpawnerArchive : FAISpawnerArchive {
	FVector LastTargetPosition; // 0x8
	int32_t CurrentNumSpawnedPawns; // 0x14
};

struct FRainZoneParameters {
	float OuterRadius; // 0x0
	float InnerRadius; // 0x4
	float Strength; // 0x8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FSetHiddenData {
	ASequencerCutSceneActor* SequencerActor; // 0x0
	ULevelSequence* LevelSeq; // 0x8
	FString ActorName; // 0x10
	bool Visible; // 0x20
};

struct FSpeechAccessibilityOptions {
	bool GameChatSTT; // 0x0
	bool GameChatTTS; // 0x1
	FString PersonaID; // 0x8
	FString PersonaName; // 0x18
	int32_t PersonaGender; // 0x28
	FString PersonaLang; // 0x30
	bool GameTextSS; // 0x40
};

struct FStaggerModifiersEntry {
	EStaggerReason StaggerToModify; // 0x0
	TArray<EStaggerReason> StaggersThatCancelThisModifier; // 0x8
	bool OnlyWhenSprinting; // 0x18
	FStaggerModifiers Modifiers; // 0x1c
};

struct FMaterialAnimatorGroupInstance {
	FName MaterialParamName; // 0x0
	FName CurrentAnimation; // 0x8
	FName WantedAnimation; // 0x10
	float CurrentAnimTime; // 0x18
	float AnimDuration; // 0x1c
};

struct FBootyItemSellPrerequisites {
	TArray<UEntitlementDesc*> Entitlements; // 0x0
};

struct FBuoyantObjectWeightedGroup {
	float Weight; // 0x0
	FWeightedProbabilityRange NumberOfItems; // 0x8
	UItemSpawnDistributionAsset* Items; // 0x28
};

struct FAchievementHaveADrinkWithAnotherCrewAtAnOutpost {
	AAthenaPlayerCharacter* Character; // 0x0
	float RangeOfCheckInMetres; // 0x18
	float DrinkConsumedVolumeThreshold; // 0x1c
};

struct FStateCategoryGroup : FNamedStateSelector {
	FName GroupName; // 0x18
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FBuoyantObjectSpawnDistributionParams {
	FFloatRange ObjectDistanceFromSpawnCentre; // 0x0
	float MinDistanceBetweenObjects; // 0x10
};

struct FEmissaryLedgerVisited {
	FString CompanyId; // 0x0
};

struct FUISetAudioSwitchEvent {
	FString SwitchGroup; // 0x0
	FString SwitchValue; // 0x10
};

struct FNPCOnSurfaceVOGroup {
	FName GroupName; // 0x0
	TArray<FNPCOnSurfaceVOEntry> VOEntries; // 0x8
};

struct FEventMarkNoteDeleted {
	APlayerController* PlayerController; // 0x0
	FGuid NoteId; // 0x8
};

struct FTQStructGenParams {
	int32_t GenerationIterations; // 0x0
	bool FailIfNoLocationData; // 0x4
	float PreferredDistance; // 0x8
	float EventExclusionZoneRadius; // 0xc
	int32_t ModuleCount; // 0x10
	FTQStructGenEntry FinalModuleOverride; // 0x18
	float CombatWeight; // 0x48
	int32_t MaxCombatOccurrences; // 0x4c
	TArray<FTQStructGenGroup> CombatGroups; // 0x50
	int32_t MaxNonCombatOccurrences; // 0x60
	TArray<FTQStructGenGroup> NonCombatGroups; // 0x68
};

struct FHitRegTrailData {
	TArray<FVector> Trail; // 0x0
	float DistanceBeforeGravity; // 0x10
	bool GravityActivated; // 0x14
	bool HitSomething; // 0x15
	FVector GravityStartPoint; // 0x18
	FVector ImpactPoint; // 0x24
	UPrimitiveComponent* ImpactedComponent; // 0x30
	AActor* ImpactedActor; // 0x38
};

struct FFireParticleSpawnList {
	TArray<FFireParticleSpawnData> ParticleSpawnLODs; // 0x0
};

struct FKrakenShipWrappingBehaviourShakeAttackParams {
	FWeightedProbabilityRangeOfRanges TimeBetweenShakeAttackAttempts; // 0x0
	FWeightedProbabilityRangeOfRanges AttackDuration; // 0x30
	uint32_t MaxFailedShakeAttackAttempts; // 0x60
	float ChanceOfShake; // 0x64
};

struct FCoordinatedKrakenTentacleSpawnInfo {
	FTransform SpawnTransform; // 0x0
	FTransform FinalSpawnTransform; // 0x30
	int32_t ClientCapsuleCullCount; // 0x60
	bool ShouldDockToTargetActor; // 0x64
	bool RequiresBoxCollider; // 0x65
	bool RequiresKnockback; // 0x66
	FVector BoxExtents; // 0x68
	FTransform BoxOffset; // 0x80
	TWeakObjectPtr<AKrakenAnimatedTentacle> SpawnedTentacle; // 0xb0
};

struct FCrewOwnershipTrackingComponentMetaWrapper : FItemMetaBase {
	FGuid SpawningCrewId; // 0x18
	FGuid CurrentOwnedByCrewId; // 0x28
	FOwnerListEntry PreviousOwnedByCrewIdList; // 0x38
	TMap<FName, FOwnerListEntry> CustomTrackingMap; // 0x48
};

struct FEventFaunaAnimationStarving {
	bool PigIsStarving; // 0x0
};

struct FVoteRemovedNetworkEvent : FBoxedRpc {
	FName CompanyId; // 0x10
	FGuid CrewId; // 0x18
};

struct FVoyageComplete {
	bool DoNotNotifyParticipantsOnVoyageComplete; // 0x0
	FText Title; // 0x8
};

struct FEventCharacterFootEnterWater {
	FCharacterFootWaterImpactResult Result; // 0x0
};

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	char bMature : 1; // 0x20
	char bManualWordWrap : 1; // 0x20
	char bSingleLine : 1; // 0x20
};

struct FPlayerDeveloperTelemetryEvent : FDeveloperTelemetryPayload {
	FString EventTag; // 0x0
	FJsonObjectWrapper Json; // 0x10
};

struct FQuestBookRepInfo {
	int32_t LeftPageIndex; // 0x0
	TArray<int32_t> CurrentBookContents; // 0x8
	TArray<FPageLayoutRepInfo> ProcPageList; // 0x18
};

struct FTutorialEventControlledObjectCreated {
	ATutorialEventControlledObject* TutorialEventControlledObject; // 0x0
};

struct FEventInGameBlurRequest {
	bool ShouldBlurGame; // 0x0
};

struct FPushCachedSlotActionEvent {
	TArray<UNotificationInputId*> NotificationIDs; // 0x0
};

struct FRequestBucketStateRpc : FUseItemOnServerRpc {
	EBucketState RequestedBucketState; // 0x18
};

struct FSocketPathNode {
	FName Name; // 0x0
};

struct FDebugSuperSailorActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FSetStormSettingsData {
	int32_t ActorId; // 0x0
	FVector2D StormCentre; // 0x4
	float StormStrength; // 0xc
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FPlayerEncounterStartCustomServerEvent : FGlobalCustomServerEvent {
	FName EventID; // 0x8
	FDateTime ServerTimeUTC; // 0x10
};

struct FQuestVariablePageBundle : FQuestVariable {
	FName ParamName; // 0x8
};

struct FVoyageProposalSelectedEvent {
	FString ProposalDesc; // 0x0
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
};

struct FEventCargoRunCrateDelivered {
	FGuid PickUpId; // 0x0
	ABootyItemInfo* ItemInfo; // 0x10
};

struct FTaleQuestTaskCompleteTelemetryEvent {
	FGuid TaskId; // 0x0
};

struct FXPGrantedNetworkEvent : FNetworkEventStruct {
	uint32_t XPGranted; // 0x10
	uint32_t CurrentLevel; // 0x14
	uint32_t CurrentXP; // 0x18
	FName CompanyId; // 0x1c
};

struct FInstrumentHandlePairedWithActor {
	AActor* InstrumentActor; // 0x0
};

struct FFlamesOfFateFlameInfo {
	EFlameOfFateType FlameOfFateType; // 0x0
	FColor LightColour; // 0x4
	FColor FXColour; // 0x8
	FColor GlowColour; // 0xc
	FColor FlameColour; // 0x10
	UTexture* FlameTexture; // 0x18
	FPlayerStat StatToFireWhenTaken; // 0x20
	FPlayerStat StatToFireWhenTakenInAlliance; // 0x24
};

struct FCrewCancelledTaleEvent {
	FGuid CrewId; // 0x0
};

struct FWeightedRewardEntry {
	FRewardId Reward; // 0x0
	FString WeightingConfigurationKey; // 0x8
	float FallbackWeight; // 0x18
};

struct FNPCDemandMultiplier {
	FName NPCId; // 0x0
	float Multiplier; // 0x8
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

struct FPlayerMerchantContract {
	FGuid Id; // 0x0
	FName IslandName; // 0x10
	TArray<FMerchantContractDeliveryRequest> Requests; // 0x18
};

struct FRequestCreatePiratePreviewEvent {
	int32_t ResolutionX; // 0x0
	int32_t ResolutionY; // 0x4
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

struct FQuestVariableClueSiteArray : FQuestVariable {
	FName ParamName; // 0x8
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

struct FFlamethrowerCollisionsParams {
	float CollisionCapsuleRadius; // 0x0
	float FlamePointTravelDistance; // 0x4
	float InheritOwnerForwardVelocityScalar; // 0x8
	float FlamePointTravelTime; // 0xc
	float FlamePointFireRate; // 0x10
	float MaxDistanceSquaredBetweenPointsBeforeDiscontinuity; // 0x14
	int32_t MaxNumOfHitsProccessedPerFlameCollision; // 0x18
	FVector FlameOriginOffset; // 0x1c
	FRotator FlameOrientationOffset; // 0x28
	UCurveFloat* FlamePointsTravelCurve; // 0x38
	ECollisionChannel CollisionChannel; // 0x40
	FCollisionResponseContainer CollisionResponse; // 0x41
};

struct FScoreRewardValueData {
	int32_t ScoreToAward; // 0x0
	FString ServicesConfigRetrievalString; // 0x8
	EScoreReason ReasonForScore; // 0x18
	TArray<int32_t> ScoreByPeriod; // 0x20
};

struct FMerchantQuestRandomRequiredItemsEntry {
	float Weight; // 0x0
	int32_t MaxNum; // 0x4
	UMerchantQuestItemData* RequiredItem; // 0x8
};

struct FEventHealthChangeContinuousStart {
	float CurrentHealth; // 0x0
	float ChangeRate; // 0x4
};

struct FWeightedAmmoTypeRange {
	float MinRange; // 0x0
	TArray<FWeightedAmmoType> AmmoTypeProbabilities; // 0x8
};

struct FClientInputMatchmakingResult {
	bool IsAccepted; // 0x0
};

struct FChapterDataEntry {
	int32_t NumQuests; // 0x0
	UVoyageRewardDataAsset* PerChapterRewardAsset; // 0x8
};

struct FPremiumShopOfferItem {
	UCatalogOfferDataAsset* Offer; // 0x0
	bool IsSuperPremium; // 0x8
	FText LockedReason; // 0x10
};

struct FReapersMarkLevelMultiplier {
	UCompany* CompanyId; // 0x0
	float GoldMultiplier; // 0x8
	float XPMultiplier; // 0xc
};

struct FEventPlayerSetFootUponAISpawnRegion {
	AActor* Player; // 0x0
};

struct FScoreRewardData {
	TArray<FScoreRewardWieldableItemData> WieldableItemScores; // 0x0
	TArray<FScoreRewardShipPartData> ShipPartScores; // 0x10
	FScoreRewardValueData KillingPlayerScore; // 0x20
	FScoreRewardValueData DownedPlayerScore; // 0x50
	FScoreRewardValueData CrewShipSunkScore; // 0x80
	FScoreRewardValueData DigUpChestScore; // 0xb0
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FTransformBlendCurve {
	bool UseLocationCurve; // 0x0
	FRuntimeVectorCurve LocationCurve; // 0x8
	bool UseRotationCurve; // 0x178
	FRuntimeVectorCurve RotationCurve; // 0x180
	bool UseScaleCurve; // 0x2f0
	FRuntimeVectorCurve ScaleCurve; // 0x2f8
	FTransform SourceTransform; // 0x470
	FTransform TargetTransform; // 0x4a0
};

struct FAthenaCharacterDodgeEvent {
	FVector DodgeDirection; // 0x0
};

struct FMeshPatchEntry {
	FName Name; // 0x0
	FStringAssetReference Reference; // 0x8
};

struct FPlayerStatusEffectActivatedCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString Effect; // 0x28
};

struct FMemoryTableData {
	uint64_t BlockSize; // 0x0
	uint64_t NumActivePools; // 0x8
	uint64_t PeakActivePools; // 0x10
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x2b0
	FButtonStyle RestoreButtonStyle; // 0x558
	FButtonStyle CloseButtonStyle; // 0x800
	FTextBlockStyle TitleTextStyle; // 0xaa8
	FSlateBrush ActiveTitleBrush; // 0xc08
	FSlateBrush InactiveTitleBrush; // 0xc98
	FSlateBrush FlashTitleBrush; // 0xd28
	FSlateBrush OutlineBrush; // 0xdb8
	FSlateColor OutlineColor; // 0xe48
	FSlateBrush BorderBrush; // 0xe78
	FSlateBrush BackgroundBrush; // 0xf08
	FSlateBrush ChildBackgroundBrush; // 0xf98
};

struct FIntentSignChangedEvent {
	int32_t NewIntentSign; // 0x0
};

struct FCannonProjectileHitShipWithStatusEffectsEvent {
	AShip* Ship; // 0x0
	TArray<FStatus> Statuses; // 0x8
	AActor* Instigator; // 0x18
};

struct FPageLayoutRepInfo {
	TArray<FTreasureMapWidgetTexture> Images; // 0x8
	TArray<FTreasureMapWidgetLocalisedTextWithFontOverride> GeneralText; // 0x18
};

struct FAttackableTypeToAnimMapping {
	ESwimAttackableType AttackType; // 0x0
	UObject* AnimMontage; // 0x8
	bool PlayAsDynamicMontage; // 0x10
	float AnimLength; // 0x14
	float TimeIntoAnimOfAttack; // 0x18
	float TargetKnockBackStrength; // 0x1c
	FName RumbleTag; // 0x20
};

struct FIslandNameAndBounds {
	FName IslandName; // 0x0
	FBox2D IslandBounds; // 0x8
};

struct FFogBankManagerFogBankTemplate {
	float Weight; // 0x0
	TArray<AFogBank*> FogBanks; // 0x8
	FWeightedProbabilityRangeOfRanges DistanceFromIslandInKm; // 0x18
};

struct FLevelUnloadRequestedTelemetryEvent : FStreamingTelemetryBaseEvent {
	FString LevelName; // 0x0
	int32_t LodLevel; // 0x10
	FVector PlayerPosition; // 0x14
	float DistanceFromPlayer; // 0x20
	float DistanceFromBoundsToPlayer; // 0x24
	bool PlayerIsWaitingToSpawn; // 0x28
	bool PlayerIsTeleporting; // 0x29
};

struct FBuoyantObjectSpawnParams {
	UBuoyantObjectSpawnProfileDataAsset* DefaultSpawnProfile; // 0x0
	UBuoyantObjectSpawnProfileDataAsset* ArenaSpawnProfile; // 0x8
	UBuoyantObjectSpawnProfileDataAsset* FloatingItemsWithBarrelsOfPlentySpawnProfile; // 0x10
	UBuoyantObjectSpawnProfileDataAsset* MerchantAllianceBarrelsOfPlentySpawnProfile; // 0x18
	ECollisionChannel HitTestTraceChannel; // 0x20
	TArray<UShipSize*> ExcludedShipSizes; // 0x28
	FBuoyantObjectSpawnDistributionParams SpawnDistributionParams; // 0x38
};

struct FRequestPlayerNameplateUIEventData {
	int32_t Index; // 0x0
	int32_t Id; // 0x4
	FPlayerNameplateUIInfo Data; // 0x8
};

struct FRefreshRateTelemetryFragment {
	bool Supports120Hz; // 0x0
	uint32_t RefreshRate; // 0x4
};

struct FMaterialReferenceEntry {
	bool bCopyParametersAcross; // 0x0
	bool bReplaceAll; // 0x1
	UMaterialInterface* FromMaterial; // 0x8
	UMaterialInstanceConstant* ToMaterial; // 0x10
};

struct FEventFireWeapon {
	bool bForFirstPerson; // 0x0
};

struct FMovieSceneEvaluationField {
	TArray<FFloatRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FDrawDebugItemCapsule {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	FVector CentrePos; // 0xc
	float HalfHeight; // 0x18
	float Radius; // 0x1c
	FQuat Rotation; // 0x20
	FColor Colour; // 0x30
};

struct FAIShipSinkNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FPlayerCapstanUsageStartCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
	FString ShipId; // 0x28
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FEmissaryProgressUpdatedNotificationUIEvent {
	float Old; // 0x0
	float New; // 0x4
	FString CompanyId; // 0x8
	FString RankIncreaseAudioCue; // 0x18
	FString RankIncreaseStopAudioCue; // 0x28
	FString RankLevelUpAudioCue; // 0x38
	FString RankTriggerAudioCue; // 0x48
	FString RankLevelUpMusicCue; // 0x58
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FShovelCustomServerEvent : FGlobalCustomServerEvent {
	FString UserId; // 0x18
};

struct FRiggingSystemPulleyAttachmentParams {
	FRopeVisualParams Visuals; // 0x0
	float Length; // 0xc
	float Sag; // 0x10
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FCatalogDescTab {
	FStringAssetReference FilterIcon; // 0x0
	UCatalogDataAsset* Catalog; // 0x10
};

struct FClamberActionStateConstructionInfo : FDockToObjectActionStateConstructionInfo {
	float NormalisedInteractionWidth; // 0x48
	char ClimbId; // 0x4c
	FLadderBlendParams ClamberBlendParams; // 0x50
};

struct FGDTCustomViewNames {
	FString GameView1; // 0x0
	FString GameView2; // 0x10
	FString GameView3; // 0x20
	FString GameView4; // 0x30
	FString GameView5; // 0x40
};

struct FMeleeAttackHitResponseData {
	APawn* AttackingCharacter; // 0x0
	FHitResult Hit; // 0x8
	FImpactDamageEvent ImpactDamageEvent; // 0x88
	bool DamageConfirmed; // 0xe0
	bool Blocked; // 0xe1
	UMeleeAttackDataAsset* AttackData; // 0xe8
	bool AttackCanDamage; // 0xf0
};

struct FGenericModalContinueEvent {
	FString DisplayMessage; // 0x0
};

struct FInteractingActorData {
	FName PreviousCollisionProfile; // 0x8
};

struct FPlayerActivityIconInfo {
	EPlayerActivityType ActivityType; // 0x0
	FStringAssetReference ActivityIcon; // 0x8
};

struct FTimedContestEventAction {
	FText NPCName; // 0x8
	FText NPCMessageToAllPlayers; // 0x40
	float Duration; // 0x78
	TArray<ESpecialEvents> SpecialEvents; // 0x80
	TArray<UWwiseEvent*> AudioEvents; // 0x90
};

struct FActionStatePriorityList {
	UActionStateId* State; // 0x0
	TArray<FActionStatePriorityRelationship> Entries; // 0x8
};

struct FSpawnedActorsList {
	TArray<FPhasedActorInfo> ActorsList; // 0x0
};

struct FMerchantCrateMetaWrapper : FItemMetaBase {
	float Health; // 0x18
	FStringAssetReference FaunaType; // 0x20
	float TimeSpentStarving; // 0x30
	float TimeToStarveInSeconds; // 0x34
	FVector TempSpawnLocationForActor; // 0x38
};

struct FRadialInventorySlotHighlighted : FRadialInventoryEvent {
	int32_t SlotIndex; // 0x4
};

struct FInventoryInteractionTakeAllRequestEvent {
	int32_t Index; // 0x0
};

struct FEventPlayerDockToObjectStart {
	TScriptInterface<Class> ObjectBeingUsed; // 0x0
	bool CanLookAtBeDisabledWhenDockedToObject; // 0x10
};

struct FAshenLordEncounterServiceDesc : FGameEventServiceDesc {
	FStringAssetReference ServiceParamsAssetPath; // 0x0
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FBodyInstance {
	FVector Scale3D; // 0x4
	FName CollisionProfileName; // 0x14
	FCollisionResponse CollisionResponses; // 0x20
	char bUseCCD : 1; // 0x50
	char bNotifyRigidBodyCollision : 1; // 0x50
	char bSimulatePhysics : 1; // 0x50
	char bOverrideMass : 1; // 0x50
	char bOverrideMassProperties : 1; // 0x50
	char bEnableGravity : 1; // 0x50
	char bAutoWeld : 1; // 0x50
	char bStartAwake : 1; // 0x51
	char bGenerateWakeEvents : 1; // 0x51
	char bUpdateMassWhenScaleChanges : 1; // 0x51
	char bLockTranslation : 1; // 0x51
	char bLockRotation : 1; // 0x51
	char bLockXTranslation : 1; // 0x51
	char bLockYTranslation : 1; // 0x51
	char bLockZTranslation : 1; // 0x51
	char bLockXRotation : 1; // 0x52
	char bLockYRotation : 1; // 0x52
	char bLockZRotation : 1; // 0x52
	char bOverrideMaxAngularVelocity : 1; // 0x52
	char bUseAsyncScene : 1; // 0x52
	char bOverrideMaxDepenetrationVelocity : 1; // 0x52
	char bOverrideWalkableSlopeOnInstance : 1; // 0x52
	float MaxDepenetrationVelocity; // 0x54
	float MassInKg; // 0x58
	FMassPropertiesOverride MassPropertiesOverride; // 0x5c
	float LinearDamping; // 0x80
	float AngularDamping; // 0x84
	FVector COMNudge; // 0x88
	float MassScale; // 0x94
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8
	UPhysicalMaterial* PhysMaterialOverride; // 0xb0
	float MaxAngularVelocity; // 0xb8
	float CustomSleepThresholdMultiplier; // 0xbc
	float PhysicsBlendWeight; // 0xc0
	int32_t PositionSolverIterationCount; // 0xc4
	EDominanceGroup DominanceGroup; // 0xc8
	uint64_t RigidActorSyncId; // 0x100
	uint64_t RigidActorAsyncId; // 0x108
	int32_t VelocitySolverIterationCount; // 0x110
	ESleepFamily SleepFamily; // 0x17c
	EDOFMode DOFMode; // 0x17d
	ECollisionEnabled CollisionEnabled; // 0x17e
	ECollisionChannel ObjectType; // 0x17f
};

struct FPlayLandmarkReactionRPC : FBoxedRpc {
	ALandmark* Landmark; // 0x10
	int32_t LandmarkReactionIndex; // 0x18
};

struct FBeaconLitWithFlameOfFateStatsToFire {
	EFlameOfFateType FlameOfFateType; // 0x0
	TArray<FPlayerStat> StatsToFire; // 0x8
};

struct FIPGBodyShape {
	FName Name; // 0x0
	float NormalizedWheelAngle; // 0x8
};

struct FAthenaAnimationSpawnAnimData {
	TArray<UAnimSequence*> Spawn; // 0x0
	TArray<UAnimSequence*> Despawn; // 0x10
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0xc
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
	float SpawnMultiplier; // 0xc
	EBurstGroup Group; // 0x10
};

struct FPetLoadout {
	TArray<FPetLoadoutItem> Items; // 0x0
	bool PetNamingDisallowed; // 0x10
	int32_t CurrentPetIndex; // 0x14
};

struct FRewardDistributionModelData {
	FConsistentPercentageRewardDistributionModel ConsistentPercentage; // 0x0
	FRelativePercentageRewardDistributionModel RelativePercentage; // 0x8
};

struct FRewardRequestFailedEvent {
	FGuid RequestID; // 0x0
	ERewardRequestFailureReason FailureReason; // 0x10
};

struct FAmmoUI {
	APawn* TargetPawn; // 0x18
};

struct FPlayerPositionTelemetryFragment {
	FVector Position; // 0x0
	FString WorldLocationName; // 0x10
};

struct FZoomedInOnWieldableMapActionStateConstructionInfo : FActorActionStateConstructionInfo {
	TWeakObjectPtr<AActor> ActorOwner; // 0x28
};

struct FPlayerArriveLocationTelemetryEvent {
	FString LocationName; // 0x0
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FCrewMemberRivalVoteEvent {
	APlayerState* CrewMemberPlayerState; // 0x0
	bool IsInFavourOfRivalChange; // 0x8
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FAdvanceGameEventSchedulerData {
	int32_t Seconds; // 0x0
};

struct FOarParams {
	float RowingPower; // 0x0
	float OarLength; // 0x4
	FVector OarOffsetDirection; // 0x8
	FVector OarForwardForceDirection; // 0x14
	float TimeForCompleteStroke; // 0x20
	float TimeForResetCompletion; // 0x24
	UCurveFloat* RowingPowerCurve; // 0x28
	float BrakeForcePerMetresPerSecond; // 0x30
	float EndOfStrokeBrakeForcePerMetresPerSecond; // 0x34
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FIntegralCurve ParticleKeys; // 0x18
};

struct FIngestedByKrakenActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetActorPtr Tentacle; // 0x30
};

struct FAIDioramaRoleDesc {
	FName RoleName; // 0x0
	FStringAssetReference CustomAnimationAsset; // 0x8
	FName CustomAnimationToRunOnSpawn; // 0x18
	UItemCategory* StartingItemCategory; // 0x20
};

struct FCargoRunQuestDesc : FQuestDesc {
	TArray<UItemDesc*> CrateItemDesc; // 0x50
	UTreasureMapItemDesc* OverrideTreasureMapItemDesc; // 0x60
};

struct FShipBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	TWeakObjectPtr<AActor> ShipActor; // 0x0
};

struct FGetActorsInRadiusDataResponse {
	bool Success; // 0x0
};

struct FDioramaCategoryEntries {
	TMap<FName, FIslandDioramas> EntriesByIslandName; // 0x0
};

struct FCrewManagementArenaRivalVotingData {
	bool Voted; // 0x0
	int32_t VotesCast; // 0x4
	int32_t VotesRequired; // 0x8
};

struct FTaleQuestDeliverableItem {
	FText Name; // 0x0
	UTexture* Icon; // 0x38
};

struct FLightingControllerTimeParams {
	UCurveFloat* TimeScalerCurve; // 0x0
	float SunRiseTime; // 0x8
	float SunSetTime; // 0xc
	float InitialTimeOfDay; // 0x10
	float ReflectionCaptureTimeOfDay; // 0x14
	int32_t InitialDay; // 0x18
	float TutorialTimeOfDay; // 0x1c
};

struct FAnimNode_WeightedLoadOnDemandSquencePlayer : FAnimNode_AssetPlayerBase {
	float PlayRate; // 0x40
	UWeightedAnimSequenceLoadOnDemand* WeightedAnimSequenceLoadOnDemand; // 0x48
	int32_t GroupIndex; // 0x50
	EAnimGroupRole GroupRole; // 0x54
	UAnimSequence* CurrentSequence; // 0x58
	UAnimSequence* NextSequence; // 0x60
};

struct FEventPlayerSetFootOnIsland {
	AActor* Player; // 0x0
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	UFont* FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x48
};

struct FMermaidStatueSpawnTelemetryEvent {
	FString LocationName; // 0x0
	FString MermaidStatueId; // 0x10
	FString MermaidStatueClass; // 0x20
};

struct FReplicatedFireCellData {
	EFireCellState State; // 0x0
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FPlayerAggregatePositionTelemetryFragment {
	TArray<FVector> PositionData; // 0x0
};

struct FBuoyantObjectSpawnProfile {
	FWeightedProbabilityRangeOfRanges TravelDistanceToSpawnObjects; // 0x0
	FWeightedProbabilityRange NumberOfBarrelsToSpawn; // 0x30
	FWeightedProbabilityRange NumberOfSpecialItemTypesToSpawn; // 0x50
	FFloatRange SpawnCentreDistanceInFrontOfShip; // 0x70
	FFloatRange SpawnCentreOffsetFromShipPath; // 0x80
	FFloatRange ObjectSpawnDepth; // 0x90
	FFloatRange ObjectLifetime; // 0xa0
	float ObjectSinkingTime; // 0xb0
	float ObjectSinkRadius; // 0xb4
	float MinShipSpeedInKnotsToSpawnObjects; // 0xb8
	float WildlifeSpawnHeight; // 0xbc
	float ChanceOfSpawningSpecialItems; // 0xc0
	AActor* WildlifeType; // 0xc8
	UObject* BarrelType; // 0xd0
	TArray<FBuoyantObjectWeightedGroup> SpecialItemTypes; // 0xd8
};

struct FServerActionStateClientStartedAckNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x8
	TArray<FName> Tags; // 0x18
};

struct FEventShipDamaged {
	AActor* Ship; // 0x0
	FImpactDamageEvent ImpactDamageEvent; // 0x8
};

struct FShantyData {
	FName ShantyName; // 0x0
	TArray<FShantyInstrumentData> InstrumentData; // 0x8
	int32_t LengthOfShantyInMs; // 0x18
	UShantyUnlockDesc* UnlockEntitlement; // 0x20
	bool CanRandomPlay; // 0x28
	bool CanBeSelected; // 0x29
	bool DisableMigrationWhilePlaying; // 0x2a
};

struct FEventVisualAppearanceSelected {
	UAIPartsCategory* PartsCategory; // 0x0
	FAIPartId AIPartId; // 0x8
	int32_t PartsIndexToUse; // 0x10
	int32_t ColorTextureIndex; // 0x14
};

struct FCompanyShopOffersEvent {
	FRankOffer RankOffer; // 0x0
	TArray<FVoyageOffer> VoyageOffers; // 0x1e8
	TArray<FShopOffer> ItemOffers; // 0x1f8
};

struct FCauseOfDeathItemSpawnDistribution {
	TArray<EHealthChangedReason> CauseOfDeath; // 0x0
	UWeightedItemDescSpawnDataAsset* ItemSpawnDistributionAsset; // 0x10
};

struct FMermaidSpawnedCustomServerEvent : FGlobalCustomServerEvent {
	FVector Position; // 0x18
};

struct FEnableServerCreationEvent {
	bool Value; // 0x0
};

struct FEventGetAllKeybindingsResponse {
	TArray<FKeyBinding> ActionBindings; // 0x0
	TArray<FKeyBinding> AxisBindings; // 0x10
	int32_t DefaultKeyboardLayout; // 0x20
};

struct FNativeAndUserDefinedStructSelector {
	UScriptStruct* Struct; // 0x0
};

struct FEventAIStartedDeadActionState {
	ECharacterDeathType DeathReason; // 0x0
	AActor* Killer; // 0x8
};

struct FAnimNode_HIKOffset : FAnimNode_HIKBase {
	float Alpha; // 0x48
	float ReachT; // 0x4c
	FVector Translation; // 0x50
	EHIKEffector Effector; // 0x5c
	EHIKEffectorSpace EffectorSpace; // 0x5d
};

struct FShipMovementParams {
	float MinTargetDistanceForMovement; // 0x0
	float MaxTurnAngle; // 0x4
	float MaxTurnAngleForObstacleAvoidance; // 0x8
	float MaxTurnAngleForPlayerShipObstacleAvoidance; // 0xc
	float MinTurnSpeedScaler; // 0x10
	float MaxSpeed; // 0x14
	float MinSpeed; // 0x18
	float TimeToAccelerateFromZeroToMaxSpeed; // 0x1c
	float TimeToAccelerateFromZeroToMaxTurnSpeed; // 0x20
	float MoveBackwardsAngleThreshold; // 0x24
	float MoveBackwardsDistanceThreshold; // 0x28
	float MoveBackwardsShipSpeedThreshold; // 0x2c
	float MaxObstacleAvoidanceOverrideDistance; // 0x30
};

struct FFortKeyUsedTelemetryEvent {
	FGuid FortKeyId; // 0x0
	FName FortName; // 0x10
	FName KeyType; // 0x18
};

struct FGarbageCollectionFrametimeTelemetryFragment {
	TArray<float> GCFrametimesMs; // 0x0
	float MaxGCFrametimeMs; // 0x10
};

struct FAddMapToContainerRPC : FBoxedRpc {
	FNetSubObjectPtr Container; // 0x10
	FGuid MapToAddToContainer; // 0x24
};

struct FRespawnPetEvent {
	AActor* PetOwner; // 0x0
};

struct FUpdateRadialIconUrls : FRadialInventoryEvent {
	TArray<FString> ItemUrlCacheList; // 0x8
};

struct FCollectedBootySnapshot {
	FGuid BootyId; // 0x0
	EBootyTypes BootyType; // 0x10
	FString Rarity; // 0x18
};

struct FEmblemUnlockedPopupEvent {
	UPopUpMessageDesc* PopUpDesc; // 0x0
	UPopUpAudioDesc* PopUpAudioOverrides; // 0x8
};

struct FKrakenShipWrappingTentacleAnimationStateParams {
	bool Visible; // 0x0
	int32_t StartFrame; // 0x4
	int32_t EndFrame; // 0x8
	float Duration; // 0xc
};

struct FStatusDescriptor {
	float Intensity; // 0x0
};

struct FEventKrakenTentacleDestroyed {
	AActor* KillingBlowInstigator; // 0x0
};

struct FBlueprintInstancedActorDelegateBinding {
	FName DelegatePropertyName; // 0x0
	FName FunctionNameToBind; // 0x8
};

struct FSkeletonCustomAnimationDataStructure {
	TArray<FOneShotAnimationElement> OneShotSequences; // 0x0
	TArray<FContinuousAnimationElement> ContinuousSequences; // 0x10
	UNPCHeldObjectData* WieldableCosmeticItemList; // 0x20
	TArray<UWwiseEvent*> AudioEvents; // 0x28
};

struct FAIShipDamagedTelemetryEvent {
	FString DamageType; // 0x0
	FVector DamageLocation; // 0x10
	FString DamagedShipPart; // 0x20
	int32_t DamageLevel; // 0x30
	FGuid AttackId; // 0x34
};

struct FEventPlayerCharacterModelsReplaced {
	AActor* PlayerCharacter; // 0x0
};

struct FRequestCreateSessionEvent {
	TArray<ECrewSessionType> SessionTypes; // 0x0
};

struct FCarouselPirateBodyshape {
	float RandomizationBias; // 0x0
	FFloatRange ShapeMagnitude; // 0x4
	FCarouselPirateBodyshapeCompass BodyShapeCompass; // 0x14
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAthenaAnimationUndoRepairAnimData {
	UAnimSequence* UndoRepairInto; // 0x0
	UAnimSequence* UndoRepairLoop; // 0x8
};

struct FReapersMarkTrackedBootyItem {
	AActor* Item; // 0x0
	EReapersMarkTrackedBootyItemType ItemType; // 0x8
};

struct FEmitterPointData {
	FVector4 Position; // 0x0
	FVector4 InheritedVelocity; // 0x10
	FVector4 Orientation; // 0x20
	FVector Scale; // 0x30
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x58
	int32_t DefaultValue; // 0x68
	bool bUseDefaultValueBeforeFirstKey; // 0x6c
};

struct FWaterPuzzleRepData {
	int32_t CurrentWaterLevelIndex; // 0x0
	bool TransitionDueToReset; // 0x4
};

struct FNPCOnSurfaceLocationsEntry {
	float Weight; // 0x0
	FName SpawnLocationsName; // 0x4
	ENPCOnSurfaceFloodedLevel InvalidWhen; // 0xc
	UClass* AnimationData; // 0x10
	float FadeOutDelay; // 0x30
	float AlternateFadeOutDelay; // 0x34
	bool CheckPlayerIsNearby; // 0x38
	bool UsesActiveAnimations; // 0x39
	FName PlayerNearbyVOGroupName; // 0x3c
	FWeightedProbabilityRangeOfRanges PlayerNearbyVOCooldown; // 0x48
};

struct FRequestPremiumStoreOffersEvent {
	FString CatalogName; // 0x0
};

struct FAmmoStoreMetaWrapper : FItemMetaBase {
	int32_t AmmoCount; // 0x18
};

struct FEventPlayerViewUnderWaterStateChanged {
	bool NewUnderWaterState; // 0x0
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
};

struct FMovieSceneBytePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve ByteCurve; // 0x38
};

struct FPerComanyComplexItemQualityEntry {
	UCompany* Company; // 0x0
	TArray<FComplexItemQualityEntry> QualityData; // 0x8
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
	FTransform LPVWorldRef; // 0x40
};

struct FScalarParamInfo {
	FName ParamName; // 0x0
	bool UseWorldTime; // 0x8
	float NewScalarValue; // 0xc
};

struct FAuthorityRepairableState {
	ERepairableState RepairableState; // 0x0
	TArray<TWeakObjectPtr<AActor>> RepairingList; // 0x8
};

struct FApplyBoundaryToWorldMapEvent {
	FLinearColor BoundaryData; // 0x0
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x28
};

struct FEventSceneDialogueFinished {
	ASceneDialogueCoordinator* Sender; // 0x0
};

struct FQuestVariablePlayerStat : FQuestVariable {
	FName ParamName; // 0x8
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FNoteCompletionEntry {
	FGuid NoteId; // 0x0
	TArray<FString> CompletionEventIds; // 0x10
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x18
	float SectionStartTime; // 0x38
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FBoneNode {
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x0
};

struct FIslandEventData {
	UIslandEventType* EventType; // 0x0
	FString VoyageDescAssetString; // 0x8
	FVector2D WorldPos; // 0x18
	bool IsActive; // 0x20
	FGuid EventID; // 0x24
};

struct FContestVoyageInfo {
	TArray<UShipSize*> ValidShipTypes; // 0x0
	FWeightedEmergentContestVoyageRecipe WeightedContestVoyage; // 0x10
};

struct FEventPlayerCharacterLeft {
	AAthenaPlayerCharacter* AthenaCharacter; // 0x0
};

struct FItemPreviewDataReadyEvent {
	TWeakObjectPtr<UItemDesc> ItemDesc; // 0x0
	TWeakObjectPtr<USkeletalMesh> SkeletalMesh; // 0x8
	TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent; // 0x10
	TWeakObjectPtr<UAnimationAsset> AnimationAsset; // 0x18
	TWeakObjectPtr<UStaticMesh> StaticMesh; // 0x20
	TWeakObjectPtr<UStaticMeshComponent> StaticMeshComponent; // 0x28
	FItemPreviewView ItemView; // 0x30
	bool Valid; // 0x48
	float PreviewTickInitialTime; // 0x4c
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x58
	int32_t ChainLength; // 0x64
	EAxis ChainBoneAxis; // 0x68
	bool bInvertChainBoneAxis; // 0x69
	bool bLimitStretch; // 0x6a
	float TrailRelaxation; // 0x6c
	float StretchLimit; // 0x70
	FVector FakeVelocity; // 0x74
	bool bActorSpaceFakeVel; // 0x80
};

struct FPetDangerHearingThreat {
	FName SoundTag; // 0x0
	float TimeBeforeForgotten; // 0x8
	TArray<FPetDangerHearingThreatResponse> Responses; // 0x10
};

struct FBuoyancySampleMovementConfigurationEntry {
	FVector SampleOffset; // 0x0
	UCurveFloat* BuoyancyScaleCurve; // 0x10
};

struct FAchievementBlockThenHitAndGetBlockedThenTakeHit {
	AAthenaPlayerCharacter* Character; // 0x0
	float TimeWindowInSeconds; // 0x8
};

struct FRequestOpenPossessionsChestEvent {
	EPossessionsChestType PossessionsChestType; // 0x0
	TArray<FString> Categories; // 0x8
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FRemoteAchievementCompletionModel {
	TArray<FString> AchievementIds; // 0x0
};

struct FPlayerServerAssignmentMessage {
	FGuid CrewId; // 0x0
	FString ServerAddress; // 0x10
	FString ConnectionKey; // 0x20
	uint64_t ConnectionToken; // 0x30
};

struct FSimpleOverlapBegin {
	FSimpleOverlapInfo OverlapInfo; // 0x0
};

struct FAppliedDamageToShipEvent {
	UShipSize* ShipType; // 0x0
	AActor* Ship; // 0x8
};

struct FDockToObjectActionStateConstructionInfo : FActorActionStateConstructionInfo {
	FNetObjectPtr DockToObject; // 0x30
	bool IsInteractingActorFemale; // 0x44
};

struct FReservedCrewSlotData {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
};

struct FWindServiceParams {
	float MinAngleChange; // 0x0
	float MaxAngleChange; // 0x4
	float MinTimeChange; // 0x8
	float MaxTimeChange; // 0xc
	float MinWindMagnitude; // 0x10
	float MaxWindMagnitude; // 0x14
	float AbsoluteMaxWindMagnitude; // 0x18
	float MinBlendTimeBetweenChanges; // 0x1c
	float MaxBlendTimeBetweenChanges; // 0x20
};

struct FClientRequestExitControlObjectActionStateNetworkEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FSlateLoadingScreenImageParams {
	FStringAssetReference ImageAsset; // 0x0
	TArray<FText> ImageTips; // 0x10
};

struct FRequestContestStateEvent : FNetworkEventStruct {
	UScriptStruct* Type; // 0x8
};

struct FIntentChangedEvent {
	float NewIntent; // 0x0
};

struct FEmissaryRoleplayActionTelemetryEvent {
	FGuid EmissarySessionId; // 0x0
	FName EmissaryCompany; // 0x10
	int32_t EmissaryRank; // 0x18
	EBootyRewardType ActionName; // 0x1c
	int32_t PointsRewarded; // 0x20
	int32_t PointsAccumulated; // 0x24
	int32_t PointsRequiredToNextRank; // 0x28
};

struct FActiveCommodityDemands {
	TArray<uint32_t> CommodityIdHashes; // 0x0
	TArray<ECommodityDemand> CommodityDemands; // 0x10
};

struct FItemSnapshotTakenEvent {
	TScriptInterface<Class> Instagator; // 0x0
	FGuid SnapshotID; // 0x10
	UObject* SnapshotObject; // 0x20
};

struct FAirGivingVolumeData {
	FVector Location; // 0x0
	float Radius; // 0x18
	bool UseLineOfSight; // 0x1c
	bool CanBeUsedOutsideIslandBounds; // 0x1d
};

struct FServerContendedModel {
	TArray<FVector2D> Positions; // 0x0
	TArray<FServerRegionModel> Regions; // 0x10
	TArray<uint32_t> Resources; // 0x20
};

struct FLastCrewMemberEnteredTunnel {
	FGuid CrewId; // 0x0
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FFriendViewModel {
	FString XUID; // 0x0
	FString GamerTag; // 0x10
	FString GamerpicUrl; // 0x20
	FString RealName; // 0x30
	FString RichPresence; // 0x40
	EFriendStatus Status; // 0x50
	EPlatformId Platform; // 0x51
};

struct FClueSite {
	UClueSiteType* SiteType; // 0x0
	UClueSiteData* SiteData; // 0x8
	FVector Location; // 0x10
};

struct FDrawDebugItemSphere {
	FName GroupName; // 0x0
	bool ReplaceInGroup; // 0x8
	FVector CentrePos; // 0xc
	float Radius; // 0x18
	FColor Colour; // 0x1c
};

struct FActionStateSerialisableData {
	UActionStateId* Id; // 0x8
	UScriptStruct* Type; // 0x10
};

struct FMeshAuditLimits {
	TArray<FSubstringAuditQueryData> SubstringQueries; // 0x0
	FFolderTotals FolderMeshLimits; // 0x10
};

struct FTeleportStageCompletedTelemetryEvent {
	FGuid Id; // 0x0
	float Duration; // 0x10
	FString Reason; // 0x18
	FString CompletedStage; // 0x28
};

struct FIPGSetData {
	FName Name; // 0x0
	EIPGGender Gender; // 0x8
	EIPGEthnicity Ethnicity; // 0x9
	int32_t Priority; // 0xc
	TArray<FIPGBlendNode> Nodes; // 0x10
};

struct FSeatAnimationDefinition {
	USeatAnimationId* AnimationID; // 0x0
	FStringAssetReference Into; // 0x8
	FStringAssetReference Loop; // 0x18
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UProperty* PropertyType; // 0x20
};

struct FEventCharacterDeath {
	FDamageInstance DamageInstance; // 0x0
};

