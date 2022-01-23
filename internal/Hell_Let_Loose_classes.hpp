// Created by BlueFire1337
// Updated 2021-12-07
// Generated 2022-01-23

namespace off {
	constexpr auto GNames = 0x3e33c00;
	constexpr auto GObjects = 0x3e4c5f0;
	constexpr auto GWorld = 0x3f8ddb0;
}

struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x790
};

struct AHLLMapData_HalfTrack : AHLLMapData_Vehicle {
	AMobileSpawn* LinkedSpawn; // 0x260
};

struct AHLLArmourWeapon_Ballistic : AHLLArmourWeapon {
	TArray<FZeroAngle> ZeroAngles; // 0x470
	char ZeroAngleIndex; // 0x480
	FBallisticShotID WeaponSeed; // 0x481
	FRepShot RepShot; // 0x484
	float ShotSpread; // 0x4a0
	UHLLBallisticsComponent_Vehicle* BallisticHandler; // 0x4a8
};

struct UShooterCharacterMovement : UCharacterMovementComponent {
	float MaxWalkSpeedADS; // 0x610
	float MaxWalkSpeedProne; // 0x614
	float MaxSprintSpeed; // 0x618
	float MaxSprintSpeedCrouched; // 0x61c
	float VaultingSpeed; // 0x620
	float ClimbingSpeed; // 0x624
	float BarbedWireMaxSpeed; // 0x628
	AShooterCharacter* m_owningCharacter; // 0x630
};

struct UHLLMainMenuBase : UUserWidget {
	char bCanZoom : 1; // 0x230
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

struct UWGT_GameMenuItem_C : UHLLMenuButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	URichTextBlock* RTxt_MenuText; // 0x278
};

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8
};

struct AHLL_GameState_C : AShooterGameState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x700
	USceneComponent* DefaultSceneRoot; // 0x708
	FMulticastInlineDelegate OnPlayerCountsChanged; // 0x710
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

struct UWGT_ReplenishAmmoNotification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* Pulse; // 0x238
	UWidgetAnimation* FadeInOut; // 0x240
	UImage* BG; // 0x248
	UImage* Icon; // 0x250
	UOverlay* Overlay; // 0x258
	FSlateBrush Image; // 0x260
	bool bForSupplies; // 0x2e8
};

struct UWGT_CosmeticItem_Large_V2_C : UHLLUI_CosmeticItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Hover; // 0x280
	UImage* EquipedIndicator; // 0x288
	UBorder* SelectBorder; // 0x290
	bool bFocus; // 0x298
	FMulticastInlineDelegate OnCreateCosmeticButtons; // 0x2a0
};

struct UW_MapKey_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UHorizontalBox* HB_11; // 0x238
	UHorizontalBox* HB_01; // 0x240
	UHorizontalBox* HB_02; // 0x248
	UHorizontalBox* HB_03; // 0x250
	UHorizontalBox* HB_04; // 0x258
	UHorizontalBox* HB_06; // 0x260
	UHorizontalBox* HB_07; // 0x268
	UHorizontalBox* HB_08; // 0x270
	UHorizontalBox* HB_09; // 0x278
	UHorizontalBox* HB_Airhead; // 0x280
	UHorizontalBox* HB_FuelNode; // 0x288
	UHorizontalBox* HB_Halftrack; // 0x290
	UHorizontalBox* HB_HeavyTank; // 0x298
	UHorizontalBox* HB_LightTank; // 0x2a0
	UHorizontalBox* HB_Logi; // 0x2a8
	UHorizontalBox* HB_ManpowerNode; // 0x2b0
	UHorizontalBox* HB_MediumTank; // 0x2b8
	UHorizontalBox* HB_MunitionsNode; // 0x2c0
	UHorizontalBox* HB_Officer; // 0x2c8
	UHorizontalBox* HB_ReconVehicle; // 0x2d0
	UHorizontalBox* HB_TransportTruck; // 0x2d8
	UHorizontalBox* HorizontalBox_1; // 0x2e0
	UHorizontalBox* HorizontalBox_2; // 0x2e8
	UHorizontalBox* HorizontalBox_3; // 0x2f0
	UHorizontalBox* HorizontalBox_4; // 0x2f8
	UHorizontalBox* HorizontalBox_5; // 0x300
	UHorizontalBox* HorizontalBox_6; // 0x308
	UHorizontalBox* HorizontalBox_7; // 0x310
	UHorizontalBox* HorizontalBox_8; // 0x318
	UHorizontalBox* HorizontalBox_9; // 0x320
	UHorizontalBox* HorizontalBox_13; // 0x328
	UHorizontalBox* HorizontalBox_14; // 0x330
	UImage* Image_127; // 0x338
	UImage* Image_160; // 0x340
	UUniformGridPanel* Panel; // 0x348
	UScrollBox* ScrollBox_3; // 0x350
	UVerticalBox* VB_Title; // 0x358
	bool Key_Title; // 0x360
	UW_HoverToolTip_Explained_C* Widget_ExplainedTooltip; // 0x368
	int32_t Key_Columns; // 0x370
	FMulticastInlineDelegate ReInitialize Event Dispatcher; // 0x378
	TMap<MapKeys, FMapKey> KeyData; // 0x388
	UDataTable* MapKeyTable; // 0x3d8
	UWGT_OverviewMap_V2_C* ParentOverviewMap; // 0x3e0
};

struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct UHLLUI_Loadout : UUserWidget {
	TWeakObjectPtr<UHLLUI_LoadoutSelector> ParentSelector; // 0x230
	UImage* ItemIcon; // 0x238
	UTextBlock* ItemName; // 0x240
	char bIsSelected : 1; // 0x248
	char bIsUnlocked : 1; // 0x248
	char LoadoutID; // 0x249
	FSlateBrush DefaultIcon; // 0x250
};

struct AProneMechanicsTestLogic : AActor {
	AShooterCharacterT1* StandToCrouchChar; // 0x220
	AShooterCharacterT1* ProneToStandChar; // 0x228
	AShooterCharacterT1* ProneToCrouchChar; // 0x230
	AShooterCharacterT1* CantLeaveProneChar; // 0x238
	AShooterCharacterT1* CanLeaveProneToCrouchChar; // 0x240
	AShooterCharacterT1* ProneToSlopeChar; // 0x248
	AShooterCharacterT1* CrawlSlopeChar; // 0x250
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
	AWorldSettings* WorldSettings; // 0x240
	TArray<UAssetUserData*> AssetUserData; // 0x250
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x270
};

struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2c8
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate Success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
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

struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct USoundNodeDistanceDelay : USoundNode {
	float SpeedOfSound; // 0x48
	float BypassDistance; // 0x4c
	float MaxDelay; // 0x50
};

struct UHintsAndTips : UObject {
	TSoftObjectPtr<UDataTable> HintDataTable; // 0x28
	float MinDisplayTimeToComplete; // 0x50
	EHint CurrentHint; // 0x54
	int32_t CurrentHintPriority; // 0x58
	UDataTable* HintTable; // 0x70
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct UHLLAnimNotify_CameraAnim : UAnimNotify {
	UCameraAnim* AnimToPlay; // 0x38
	float Scale; // 0x40
	float PlaySpeed; // 0x44
	float BlendInTime; // 0x48
	float BlendOutTime; // 0x4c
};

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct ADynamicSpawn : AActor {
	FDynamicSpawnGatherParams SpawnGatherParams; // 0x288
	float WaveIntervalSeconds; // 0x29c
	AHLLPlatoon* m_owningPlatoon; // 0x2a0
	ETeam m_OwningTeam; // 0x2a8
	float m_nextWaveTime; // 0x2ac
	float DismantleTime; // 0x2b0
	EDynamicSpawnType DynamicSpawnType; // 0x2b4
	EHLLDamageFilterType DamageFilterType; // 0x2b5
	FName UnitSpawnOnScoreAction; // 0x2b8
	FName TeamSpawnOnScoreAction; // 0x2c0
	FText DisplayName; // 0x2c8
	int32_t DestroyedByEnemyManpowerPenalty; // 0x2e0
	int32_t MinEnemyPlayersToOverrun; // 0x2e4
	USoundBase* EnemyDestroyedSound; // 0x2e8
	FText EnemyDestroyedMessage; // 0x2f0
	float OverrunSphereRadius; // 0x308
	FCollisionProfileName OverrunQuery; // 0x30c
	AShooterPlayerState* SpawnedByPlayer; // 0x340
	USceneComponent* DummyRoot; // 0x348
	UStaticMeshComponent* MeshComponent; // 0x350
	UAudioComponent* LoopingAC; // 0x358
	UHLLMapComponent* MapComponent; // 0x360
	UHLLIndicatorComponent* IndicatorComponent; // 0x368
	UBoxComponent* GhostBlockerComponent; // 0x370
	UHLLSimpleHealthComponent* HealthComponent; // 0x378
	FRepGhostBarrier GhostBarrierInfo; // 0x380
	UNearbySpawnEnemyDetection* NearbySpawnEnemyDetection; // 0x390
	char bDetectNearbyEnemies : 1; // 0x3b0
	float EnemyDetectionDistance; // 0x3b4
	float EnemyBlockingDistance; // 0x3b8
	float NonFriendlySectorBlockingDistance; // 0x3bc
	float SpawnBlockingCooldown; // 0x3c0
	char bCanBeRemovedByCommander : 1; // 0x3c4
	FText OwnerMessageWhenRemoved; // 0x3c8
	USoundBase* AbilityRemovedSound; // 0x3e0
	EHint HintWhenSpawnedOn; // 0x3e8
};

struct AHLLCommanderAbility_PlaneBase : AHLLCommanderAbility_Placeable {
	FVector CoverageInfo; // 0x370
	UStaticMeshComponent* PlaneMesh; // 0x380
	UAudioComponent* PlaneAudio; // 0x388
	UAudioComponent* PlaneFlybyAudio; // 0x390
	UParticleSystemComponent* PlaneParticles; // 0x398
	float FlightTime; // 0x3a0
	float PlaneSpeed; // 0x3a4
	float PlaneAltitude; // 0x3a8
	float SpawnOffset; // 0x3ac
	float DespawnOffset; // 0x3b0
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0
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

struct AHLLDispenserItem_Garrison : AHLLDispenserItem_DynamicSpawnGhost {
	char bAutoDestroyGarrisonsPlacedByOtherOfficers : 1; // 0x4c8
};

struct UNearbySpawnEnemyDetection : UActorComponent {
	char bDetectNearbyEnemies : 1; // 0xc8
	float EnemyDetectionDistance; // 0xcc
	float EnemyBlockingDistance; // 0xd0
	float NonFriendlySectorBlockingDistance; // 0xd4
	float SpawnBlockingCooldown; // 0xd8
	FSpawnEnemyInfo SpawnEnemyInfo; // 0xdc
};

struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x1f0
	FVector SocketOffset; // 0x1f4
	FVector TargetOffset; // 0x200
	float ProbeSize; // 0x20c
	ECollisionChannel ProbeChannel; // 0x210
	char bDoCollisionTest : 1; // 0x214
	char bUsePawnControlRotation : 1; // 0x214
	char bInheritPitch : 1; // 0x214
	char bInheritYaw : 1; // 0x214
	char bInheritRoll : 1; // 0x214
	char bEnableCameraLag : 1; // 0x214
	char bEnableCameraRotationLag : 1; // 0x214
	char bUseCameraLagSubstepping : 1; // 0x214
	char bDrawDebugLagMarkers : 1; // 0x215
	float CameraLagSpeed; // 0x218
	float CameraRotationLagSpeed; // 0x21c
	float CameraLagMaxTimeStep; // 0x220
	float CameraLagMaxDistance; // 0x224
};

struct UHLLDialogButton : UUserWidget {
	UButton* RootButton; // 0x230
	UTextBlock* ButtonText; // 0x238
	int32_t Index; // 0x240
	FMulticastInlineDelegate OnPressed; // 0x248
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

struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x148
	char bReverseAsBrake : 1; // 0x148
	char bUseRVOAvoidance : 1; // 0x148
	char bRawHandbrakeInput : 1; // 0x148
	char bRawGearUpInput : 1; // 0x148
	char bRawGearDownInput : 1; // 0x148
	char bWasAvoidanceUpdated : 1; // 0x14c
	char bAutoDriveOnPlay : 1; // 0x150
	float Mass; // 0x168
	TArray<FWheelSetup> WheelSetups; // 0x170
	float DragCoefficient; // 0x180
	float MaxWaterVolumeUpdateDistance; // 0x184
	float ChassisWidth; // 0x188
	float ChassisHeight; // 0x18c
	char bHasParkingGear : 1; // 0x190
	float DragArea; // 0x194
	float EstimatedMaxEngineSpeed; // 0x198
	float MaxEngineRPM; // 0x19c
	float DebugDragMagnitude; // 0x1a0
	FVector CenterOfMassOffset; // 0x1a4
	FVector InertiaTensorScale; // 0x1b0
	float MinNormalizedTireLoad; // 0x1bc
	float MinNormalizedTireLoadFiltered; // 0x1c0
	float MaxNormalizedTireLoad; // 0x1c4
	float MaxNormalizedTireLoadFiltered; // 0x1c8
	float ThresholdLongitudinalSpeed; // 0x1cc
	int32_t LowForwardSpeedSubStepCount; // 0x1d0
	int32_t HighForwardSpeedSubStepCount; // 0x1d4
	TArray<UVehicleWheel*> Wheels; // 0x1d8
	float RVOAvoidanceRadius; // 0x200
	float RVOAvoidanceHeight; // 0x204
	float AvoidanceConsiderationRadius; // 0x208
	float RVOSteeringStep; // 0x20c
	float RVOThrottleStep; // 0x210
	int32_t AvoidanceUID; // 0x214
	FNavAvoidanceMask AvoidanceGroup; // 0x218
	FNavAvoidanceMask GroupsToAvoid; // 0x21c
	FNavAvoidanceMask GroupsToIgnore; // 0x220
	float AvoidanceWeight; // 0x224
	FVector PendingLaunchVelocity; // 0x228
	FReplicatedVehicleState ReplicatedState; // 0x250
	float RawSteeringInput; // 0x26c
	float RawThrottleInput; // 0x270
	float RawBrakeInput; // 0x274
	float SteeringInput; // 0x278
	float ThrottleInput; // 0x27c
	float BrakeInput; // 0x280
	float HandbrakeInput; // 0x284
	float IdleBrakeInput; // 0x288
	float StopThreshold; // 0x28c
	float WrongDirectionThreshold; // 0x290
	FVehicleInputRate ThrottleInputRate; // 0x294
	FVehicleInputRate BrakeInputRate; // 0x29c
	FVehicleInputRate HandbrakeInputRate; // 0x2a4
	FVehicleInputRate SteeringInputRate; // 0x2ac
	AController* OverrideController; // 0x2d8
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AHLLMapData_Ability : AHLLMapData_Basic {
	AHLLCommanderAbility_Placeable* AssignedAbility; // 0x248
};

struct UHLLMapIcon_SpawnBase : UHLLMapIconBase {
	FLinearColor DotColour_Selected; // 0x368
	FLinearColor DotColour_Unselected; // 0x378
	FLinearColor DotColour_EnemyNear; // 0x388
	FLinearColor GradientColour_Default; // 0x398
	FLinearColor GradientColour_Selected; // 0x3a8
	FLinearColor GradientColour_Pulsing; // 0x3b8
	FLinearColor GradientColour_EnemyNear; // 0x3c8
	FLinearColor SelectionRingColour_Default; // 0x3d8
	FLinearColor SelectionRingColour_EnemyNear; // 0x3e8
	FLinearColor IconColour_Default; // 0x3f8
	FLinearColor IconColour_Platoon; // 0x408
	FLinearColor IconColour_Enemy; // 0x418
	char bColouriseIconWhenSelected : 1; // 0x428
	FLinearColor IconColour_Selected; // 0x42c
	FLinearColor PulseColour_Platoon; // 0x43c
	FLinearColor PulseColour_Ally; // 0x44c
	UImage* IconDot; // 0x460
	UImage* Gradient; // 0x468
	UImage* PulseRing; // 0x470
	UImage* SelectionRing; // 0x478
	UTextBlock* PlatoonIDText; // 0x480
	UImage* NearbyEnemyIndicator; // 0x488
	UWidgetAnimation* Anim_PulseLoop; // 0x490
	UWidgetAnimation* Anim_SelectedLoop; // 0x498
	UWidgetAnimation* Anim_Selected; // 0x4a0
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40
	float G; // 0x44
};

struct UHLLAdminCameraMovement : UFloatingPawnMovement {
	float MinSpeed; // 0x150
};

struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30
};

struct UPlatoonManagementStackNotification : UUserWidget {
	UTextBlock* Title; // 0x248
	UTextBlock* Message; // 0x250
	float DisplayTime; // 0x258
};

struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct UHLLArmourWeaponUI : UUserWidget {
	AHLLArmourWeapon* AssignedWeapon; // 0x230
	UHLLArmourWeaponUI_AmmoItem* AmmoItemWidget; // 0x238
	TArray<UHLLArmourWeaponUI_AmmoItem*> ActiveAmmoItems; // 0x240
	UImage* WeaponIcon; // 0x250
	UTextBlock* WeaponNameText; // 0x258
	UTextBlock* WeaponHeaderText; // 0x260
	UProgressBar* LoadProgress; // 0x268
	UWidget* SingleAmmoContainer; // 0x270
	UTextBlock* AmmoClip; // 0x278
	UTextBlock* AmmoClips; // 0x280
	UTextBlock* AmmoState; // 0x288
	UTextBlock* MunitionsCost; // 0x290
	UWidgetSwitcher* MunitionsSwitcher; // 0x298
	UVerticalBox* MultiAmmoContainer; // 0x2a0
};

struct AHLLDispenserItem_TimedSatchel : AHLLDispenserItem_Base {
	TArray<char> TimeValues; // 0x470
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
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

struct AHLLSatchelCharge : AHLLExplosive {
	UStaticMeshComponent* SatchelMesh; // 0x3b0
	char DetonationTimeSeconds; // 0x3b8
	float ServerTimeAtDetonation; // 0x3bc
	FCollisionProfileName HitQueryProfile; // 0x3c0
	FTimerHandle TH_SatchelDetonate; // 0x3c8
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

struct UHLLUI_ServerBrowser : UUserWidget {
	char bRefreshQueued : 1; // 0x230
	UHLLUI_ServerBrowserItem* SearchResultWidget; // 0x240
	TArray<UHLLUI_ServerBrowserItem*> SearchResultWidgets; // 0x248
	int32_t SelectedServerIndex; // 0x258
	EHLLSearchQueryType CurrentQueryType; // 0x25c
	EHLLUI_ServerSortMode CurrentSortMode; // 0x25d
	char bSortAscendingMode : 1; // 0x25e
	TArray<FHLLUI_ServerResult> SortedResults; // 0x260
	char bShowingPasswordEntry : 1; // 0x270
	float SelectedServerRefreshInterval; // 0x274
	UDataTable* MapBrowserInfo; // 0x288
	UWidgetSwitcher* ServerListSwitcher; // 0x290
	UWidgetSwitcher* ServerDetailsSwitcher; // 0x298
	UImage* ServerInfoImage; // 0x2a0
	UScrollBox* ServerScrollBox; // 0x2a8
	UTextBlock* MessageText; // 0x2b0
	UTextBlock* ActivityText; // 0x2b8
	UTextBlock* JoinServerText; // 0x2c0
	UTextBlock* ServerDetails_MapName; // 0x2c8
	UTextBlock* ServerDetails_PlayerCount; // 0x2d0
	UTextBlock* ServerDetails_GameMode; // 0x2d8
	UTextBlock* ServerDetails_OffensiveModeAttackingFaction; // 0x2e0
	UTextBlock* ServerDetails_Ping; // 0x2e8
	UTextBlock* ServerDetails_ServerQueueData; // 0x2f0
	UEditableTextBox* ServerNameFilter; // 0x2f8
	UTextBlock* ServerFoundText; // 0x300
	UEditableTextBox* PasswordEntryBox; // 0x308
	UPanelWidget* PasswordEntryPanel; // 0x310
	UButton* PasswordJoin; // 0x318
	UButton* PasswordCancel; // 0x320
};

struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct AShooterImpactEffect : AActor {
	char bHitSurfaceSet : 1; // 0x220
	FHitResult HitSurface; // 0x224
	float DecalProjectionDepth; // 0x2ac
	float SurfaceSearchDepth; // 0x2b0
	char bFindComplexSurface : 1; // 0x2b4
	char bOrientToSurface : 1; // 0x2b4
	char bSearchInWorldSpace : 1; // 0x2b4
	EAxis SurfaceSearchAxis; // 0x2b5
	char bAttachDecals : 1; // 0x2b6
	char bDecalsUseRelevancy : 1; // 0x2b6
	float DecalRelevancyDistance; // 0x2b8
	float DecalFadeScreenSize; // 0x2bc
	FSurfaceVFX SurfaceEffects; // 0x2c0
	FSurfaceSounds SurfaceSounds; // 0x418
	FSurfaceDecals SurfaceDecals; // 0x570
	UParticleSystemComponent* SpawnedPC; // 0x830
	UAudioComponent* SpawnedAC; // 0x838
	UDecalComponent* SpawnedDC; // 0x840
};

struct UWidget_DebugPlayerStates_C : UUserWidget {
	UButton* Background; // 0x230
	UImage* Image_1; // 0x238
	UImage* Image_2; // 0x240
	UImage* Image_3; // 0x248
	UTextBlock* TextBox; // 0x250
};

struct UWGT_UseContext_UseHealWeapon_C : UHLLUseContext_HealWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
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
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x288
	FLightingChannels LightingChannels; // 0x289
	char bRenderCustomDepth : 1; // 0x28c
	int32_t CustomDepthStencilValue; // 0x290
	int32_t TranslucencySortPriority; // 0x294
	float CollisionRadius; // 0x298
	float ShadeRadius; // 0x29c
	int32_t NumSteps; // 0x2a0
	float InitialSeedDensity; // 0x2a4
	float AverageSpreadDistance; // 0x2a8
	float SpreadVariance; // 0x2ac
	int32_t SeedsPerStep; // 0x2b0
	int32_t DistributionSeed; // 0x2b4
	float MaxInitialSeedOffset; // 0x2b8
	bool bCanGrowInShade; // 0x2bc
	bool bSpawnsInShade; // 0x2bd
	float MaxInitialAge; // 0x2c0
	float MaxAge; // 0x2c4
	float OverlapPriority; // 0x2c8
	FFloatInterval ProceduralScale; // 0x2cc
	FRuntimeFloatCurve ScaleCurve; // 0x2d8
	int32_t ChangeCount; // 0x360
	char ReapplyDensity : 1; // 0x364
	char ReapplyRadius : 1; // 0x364
	char ReapplyAlignToNormal : 1; // 0x364
	char ReapplyRandomYaw : 1; // 0x364
	char ReapplyScaling : 1; // 0x364
	char ReapplyScaleX : 1; // 0x364
	char ReapplyScaleY : 1; // 0x364
	char ReapplyScaleZ : 1; // 0x364
	char ReapplyRandomPitchAngle : 1; // 0x365
	char ReapplyGroundSlope : 1; // 0x365
	char ReapplyHeight : 1; // 0x365
	char ReapplyLandscapeLayers : 1; // 0x365
	char ReapplyZOffset : 1; // 0x365
	char ReapplyCollisionWithWorld : 1; // 0x365
	char ReapplyVertexColorMask : 1; // 0x365
	char bEnableDensityScaling : 1; // 0x365
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x368
	int32_t VirtualTextureCullMips; // 0x378
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x37c
};

struct UHLLGunnerUI_HowitzerRangeItem : UUserWidget {
	UTextBlock* RangeText; // 0x230
	UTextBlock* ElevationText; // 0x238
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct UOptionButton_V2_C : UHLLUI_OptionSelection {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UImage* FocusEffect; // 0x248
	UImage* LeftArrow; // 0x250
	UButton* LeftButton; // 0x258
	UImage* LeftFocusedArrow; // 0x260
	UOverlay* LeftOverlay; // 0x268
	UImage* LeftShoulder; // 0x270
	UButton* OptionButton; // 0x278
	USlider* OptionSlider; // 0x280
	UTextBlock* OptionTextBlock; // 0x288
	UImage* RightArrow; // 0x290
	UButton* RightButton; // 0x298
	UImage* RightFocusedArrow; // 0x2a0
	UOverlay* RightOverlay; // 0x2a8
	UImage* RightShoulder; // 0x2b0
	FText Text; // 0x2b8
	EOptionMenuItemType Type; // 0x2d0
	int32_t Value; // 0x2d4
	FSlateColor NormalTextColor; // 0x2d8
	FSlateColor HoveredTextColor; // 0x300
	FMulticastInlineDelegate OnClicked; // 0x328
	FButtonStyle InitialButtonStyle; // 0x338
	TArray<FText> CustomOptions; // 0x5b0
	int32_t CustomMaxValue; // 0x5c0
	FButtonStyle FocusedButtonStyle; // 0x5c8
	int32_t MinValue; // 0x840
	bool bHasArrows; // 0x844
	float SliderValue; // 0x848
	bool bIncreaseButtonSize; // 0x84c
	bool bHasShoulderButtons; // 0x84d
	FMulticastInlineDelegate OnCreateSelectButton; // 0x850
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct AHLLMapData_ReconItem : AHLLMapData_Basic {
	FReconDataItem ReconData; // 0x248
};

struct UHLLVoiceData : UDataAsset {
	TMap<EHLLDamageType, TSoftObjectPtr<USoundBase>> PainVoices; // 0x30
	float PainThreshold; // 0x80
	TMap<EHLLDamageType, TSoftObjectPtr<USoundBase>> CriticalVoices; // 0x88
	TMap<EHLLDamageType, TSoftObjectPtr<USoundBase>> DeathVoices; // 0xd8
	TSoftObjectPtr<USoundBase> DismemberedDeathVoice; // 0x128
	TSoftObjectPtr<USoundBase> WoundedLoop; // 0x150
	TSoftObjectPtr<USoundBase> CriticalLoop; // 0x178
	TSoftObjectPtr<USoundBase> WeaponSteadyBreath; // 0x1a0
	TSoftObjectPtr<USoundBase> WeaponUnsteadyBreath; // 0x1c8
	TSoftObjectPtr<USoundBase> JumpSound; // 0x1f0
};

struct UReportPlayerDialog_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	FString TargetGlobalPlayerId; // 0x238
	FMulticastInlineDelegate OnOpenCloseChanged; // 0x248
};

struct AHLLCommanderAbility_StrafingRun : AHLLCommanderAbility_Placeable {
	USplineComponent* FollowSpline_2; // 0x370
	UStaticMeshComponent* PlaneMesh_2; // 0x378
	UAudioComponent* PlaneAmbientSound; // 0x380
	UAudioComponent* PlaneDiveSound; // 0x388
	USceneComponent* PlaneRoot; // 0x390
	float PlaneSpeed; // 0x398
	float ActivationTime; // 0x39c
	float DiveActivationTime; // 0x3a0
	AShooterImpactEffect* ImpactEffect; // 0x3a8
	float PlaneGunSpacing; // 0x3b0
	float ShotRandomOffset; // 0x3b4
	float ShotRadius; // 0x3b8
	float ShotAngle; // 0x3bc
	float Damage; // 0x3c0
	float Suppression; // 0x3c4
	float SuppressionRadius; // 0x3c8
	float FireTime; // 0x3cc
	float CoverageLength; // 0x3d0
	int32_t NumShots; // 0x3d4
	UShooterDamageType* DamageType; // 0x3d8
	UParticleSystem* MuzzleFlash; // 0x3e0
	USoundBase* MuzzleSound; // 0x3e8
	TArray<TWeakObjectPtr<UParticleSystemComponent>> MuzzleFlashPSC; // 0x3f0
	TArray<TWeakObjectPtr<UAudioComponent>> MuzzleAC; // 0x400
};

struct UHLLOnlinePlayerStats : UObject {
	FHLLStatDeltaAccumulator ActiveAccumulator; // 0x48
	FHLLStatDeltaAccumulator PendingWriteAccumulator; // 0x58
	char bPendingStartWrite : 1; // 0x78
	char bWaitingForRefresh : 1; // 0x78
	char bWaitingForWrite : 1; // 0x78
	char bWaitingForFlush : 1; // 0x78
	char bKillOnComplete : 1; // 0x78
	char bInitialStatsPopulated : 1; // 0x78
	FPackedOnlineStats InitialStatValues; // 0x80
	char bOnlineStatsPopulated : 1; // 0xa0
	FPackedOnlineStats CachedOnlineStatValues; // 0xa8
	FDateTime StartTime; // 0xc8
};

struct AServerQueueFrontend : AInfo {
	UServerQueueProgressWidget* ProgressWidgetClass; // 0x220
	int32_t ProgressWidgetZOrder; // 0x228
	AServerQueueBeaconClient* BeaconClient; // 0x230
	UServerQueueProgressWidget* ProgressWidget; // 0x238
};

struct UHLLHUDBase : UUserWidget {
	UCanvasPanel* WorldWidgetPanel; // 0x230
	UCanvasPanel* WorldWidgetPanel_Toggleable; // 0x238
	TArray<UHLLIndicatorBase*> ActiveIndicatorWidgets; // 0x320
	TArray<int32_t> SectorDisplayPriorities; // 0x330
	UTextBlock* SectorWarningMessage; // 0x340
	UVerticalBox* HealVBox; // 0x348
	UTextBlock* HealMessage; // 0x350
	UImage* HealProgress; // 0x358
	UTextBlock* TeamKillMessage; // 0x360
	UHLLWeaponListItem* WeaponListItem; // 0x370
	float WeaponListShowTime; // 0x378
	TArray<UHLLWeaponListItem*> ActiveWeaponListItems; // 0x380
	UVerticalBox* WeaponListVBox; // 0x390
	UWidget* SecondaryOutput; // 0x3a0
	UWidget* WarmupWidget; // 0x3a8
};

struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x338
	float SourceHeight; // 0x33c
	float BarnDoorAngle; // 0x340
	float BarnDoorLength; // 0x344
	UTexture* SourceTexture; // 0x348
};

struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x410
	char bIsScreenSizeScaled : 1; // 0x418
	float ScreenSize; // 0x41c
	float U; // 0x420
	float UL; // 0x424
	float V; // 0x428
	float VL; // 0x42c
};

struct UButtonPrompt : UUserWidget {
	UTextBlock* Timeout; // 0x250
	TSoftObjectPtr<UTexture2D> GamepadIcon; // 0x258
	TSoftObjectPtr<UTexture2D> SecondaryGamepadIcon; // 0x280
};

struct UReplicationGraph : UReplicationDriver {
	UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28
	UNetDriver* NetDriver; // 0x30
	TArray<UNetReplicationGraphConnection*> Connections; // 0x38
	TArray<UNetReplicationGraphConnection*> PendingConnections; // 0x48
	TArray<UReplicationGraphNode*> GlobalGraphNodes; // 0x98
	TArray<UReplicationGraphNode*> PrepareForReplicationNodes; // 0xa8
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x410
	UNavAreaBase* AreaClass; // 0x418
	FColor ShapeColor; // 0x420
	char bDrawOnlyIfSelected : 1; // 0x424
	char bShouldCollideWhenPlacing : 1; // 0x424
	char bDynamicObstacle : 1; // 0x424
};

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x58
	FName PropertyName; // 0x60
	FString PropertyPath; // 0x68
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x68
	FName TrackName; // 0x78
};

struct UGameplayMessage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* Message; // 0x238
	FText Text; // 0x240
	float LifeSpan; // 0x258
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x220
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
	ETextJustify Justification; // 0x478
	float MinDesiredWidth; // 0x47c
	bool ClearKeyboardFocusOnCommit; // 0x480
	bool SelectAllTextOnCommit; // 0x481
	FSlateColor ForegroundColor; // 0x488
	FMulticastInlineDelegate OnValueChanged; // 0x4b0
	FMulticastInlineDelegate OnValueCommitted; // 0x4c0
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x4d0
	FMulticastInlineDelegate OnEndSliderMovement; // 0x4e0
	char bOverride_MinValue : 1; // 0x4f0
	char bOverride_MaxValue : 1; // 0x4f0
	char bOverride_MinSliderValue : 1; // 0x4f0
	char bOverride_MaxSliderValue : 1; // 0x4f0
	float MinValue; // 0x4f4
	float MaxValue; // 0x4f8
	float MinSliderValue; // 0x4fc
	float MaxSliderValue; // 0x500
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct USoundSourceBus : USoundWave {
	ESourceBusChannels SourceBusChannels; // 0x308
	float SourceBusDuration; // 0x30c
	char bAutoDeactivateWhenSilent : 1; // 0x310
};

struct UHLLOptionScreenBase : UUserWidget {
	UShooterGameViewportClient* ViewportClient; // 0x348
	UVoipMicCheckWidget* VoipMicCheckWidgetClass; // 0x350
	UHLLUI_OptionSelection* VoipConnectionButton; // 0x358
	UTextBlock* VoipConnectionStatusText; // 0x360
	UTextBlock* VoipConnectionLabel; // 0x368
	float VoipConnectionStatusChangeTimeout; // 0x370
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UCreatePlatoon_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UAvailablePlatoonTypes_V2_C* AvailablePlatoonTypes; // 0x238
	UCircularThrobber* CircularThrobber_1; // 0x240
	UVerticalBox* MainPanel; // 0x248
	UWidgetSwitcher* PanelSwitcher; // 0x250
	UBorder* ProgressPanel; // 0x258
	Uhll_text_C* txt_title; // 0x260
	FMulticastInlineDelegate OnClosed; // 0x268
	FMulticastInlineDelegate OnHovered; // 0x278
	FMulticastInlineDelegate OnUnhovered; // 0x288
	int32_t CurrentIndex; // 0x298
};

struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AHLLMapData_Supplies : AHLLMapData_Basic {
	ESupplyType SupplyType; // 0x248
	uint16_t SuppliesRemaining; // 0x24a
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
	EMouseCursor cursor; // 0xc1
	EWidgetClipping Clipping; // 0xc2
	ESlateVisibility Visibility; // 0xc3
	float RenderOpacity; // 0xc4
	UWidgetNavigation* Navigation; // 0xc8
	EFlowDirectionPreference FlowDirectionPreference; // 0xd0
	TArray<UPropertyBinding*> NativeBindings; // 0xf8
};

struct UHLLUpgradeData_Structure : UHLLUpgradeData {
	UStaticMesh* UpgradeMesh; // 0x150
};

struct UWGT_RoleSelectItem_V2_C : UHLLUI_RoleItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UBorder* LevelBorder; // 0x270
	UButton* SelectButton; // 0x278
	UBorder* TextBorder; // 0x280
	bool bFavourite; // 0x288
	FMulticastInlineDelegate OnClick; // 0x290
	bool bHasSectionFocus; // 0x2a0
	FMulticastInlineDelegate ChangeFaction; // 0x2a8
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct AWarfareGameMode : AShooterGameMode {
	int32_t NumBaseLineCapsToWin; // 0x528
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

struct UHLLMapIcon_Ability : UHLLMapIconBase {
	int32_t PlacingPriority; // 0x368
	UImage* DirectionIndicator; // 0x370
	UImage* ProgressIndicator; // 0x378
	USizeBox* CoverageIndicator; // 0x380
	UBorder* CoverageBorder; // 0x388
};

struct UWGT_LoadoutOption_V2_C : UHLLUI_Loadout {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
	UWidgetAnimation* Hover; // 0x2e0
	UImage* LockIcon; // 0x2e8
	UButton* RootButton; // 0x2f0
	UBorder* SelectBorder; // 0x2f8
	bool bFocus; // 0x300
	FMulticastInlineDelegate OnCreateConfirmButton; // 0x308
	UImage* LockIcon; // 0x318
};

struct UWGT_Credits_V2_C : UHLLUI_Credits {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	UWidgetAnimation* OpenAnim; // 0x380
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x388
	UMainMenuWidget_V2_C* MainMenu; // 0x390
};

struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x78
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48
};

struct UHLLAnimNotify_VibrationEvent : UAnimNotify {
	USoundBase* Sound; // 0x48
	float VolumeMultiplier; // 0x50
	float PitchMultiplier; // 0x54
	char bFollow : 1; // 0x58
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

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UWGT_HealthCircular_C : UHLLSeatHealthStatusItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FSlateBrush Brush; // 0x278
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xe0
	FMovieSceneFloatChannel GreenCurve; // 0x180
	FMovieSceneFloatChannel BlueCurve; // 0x220
	FMovieSceneFloatChannel AlphaCurve; // 0x2c0
};

struct UWGT_MarkerTooltip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* Desc; // 0x238
	UTextBlock* Vis; // 0x240
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

struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x4a8
	FVector SplineUpDir; // 0x500
	float SplineBoundaryMin; // 0x50c
	FGuid CachedMeshBodySetupGuid; // 0x510
	UBodySetup* BodySetup; // 0x520
	float SplineBoundaryMax; // 0x528
	char bAllowSplineEditingPerInstance : 1; // 0x52c
	char bSmoothInterpRollScale : 1; // 0x52c
	char bMeshDirty : 1; // 0x52c
	ESplineMeshAxis ForwardAxis; // 0x52d
	float VirtualTextureMainPassMaxDrawDistance; // 0x530
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

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x410
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

struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
};

struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UAudioComponent : USceneComponent {
	USoundBase* Sound; // 0x1f0
	TArray<FAudioComponentParam> InstanceParameters; // 0x1f8
	USoundClass* SoundClassOverride; // 0x208
	char bAutoDestroy : 1; // 0x210
	char bStopWhenOwnerDestroyed : 1; // 0x210
	char bShouldRemainActiveIfDropped : 1; // 0x210
	char bAllowSpatialization : 1; // 0x210
	char bOverrideAttenuation : 1; // 0x210
	char bOverrideSubtitlePriority : 1; // 0x210
	char bIsUISound : 1; // 0x210
	char bEnableLowPassFilter : 1; // 0x210
	char bOverridePriority : 1; // 0x211
	char bSuppressSubtitles : 1; // 0x211
	char bAutoManageAttachment : 1; // 0x212
	FName AudioComponentUserID; // 0x218
	float PitchModulationMin; // 0x220
	float PitchModulationMax; // 0x224
	float VolumeModulationMin; // 0x228
	float VolumeModulationMax; // 0x22c
	float VolumeMultiplier; // 0x230
	int32_t EnvelopeFollowerAttackTime; // 0x234
	int32_t EnvelopeFollowerReleaseTime; // 0x238
	float Priority; // 0x23c
	float SubtitlePriority; // 0x240
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x248
	float PitchMultiplier; // 0x250
	float LowPassFilterFrequency; // 0x254
	USoundAttenuation* AttenuationSettings; // 0x260
	FSoundAttenuationSettings AttenuationOverrides; // 0x268
	USoundConcurrency* ConcurrencySettings; // 0x608
	TSet<USoundConcurrency*> ConcurrencySet; // 0x610
	EAttachmentRule AutoAttachLocationRule; // 0x66c
	EAttachmentRule AutoAttachRotationRule; // 0x66d
	EAttachmentRule AutoAttachScaleRule; // 0x66e
	FMulticastInlineDelegate OnAudioFinished; // 0x670
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x698
	FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x6c0
	FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x6e8
	FSoundModulation Modulation; // 0x710
	FDelegate OnQueueSubtitles; // 0x720
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x730
	FName AutoAttachSocketName; // 0x738
};

struct UTextRenderComponent : UPrimitiveComponent {
	FText Text; // 0x410
	UMaterialInterface* TextMaterial; // 0x428
	UFont* Font; // 0x430
	EHorizTextAligment HorizontalAlignment; // 0x438
	EVerticalTextAligment VerticalAlignment; // 0x439
	FColor TextRenderColor; // 0x43c
	float XScale; // 0x440
	float YScale; // 0x444
	float WorldSize; // 0x448
	float InvDefaultSize; // 0x44c
	float HorizSpacingAdjust; // 0x450
	float VertSpacingAdjust; // 0x454
	char bAlwaysRenderAsText : 1; // 0x458
};

struct UTurretControllerComponent2 : UPitchYawControllerComponent {
	FName TurretBoneName; // 0x488
	FName BarrelBoneName; // 0x490
	float MinTurretRotationScale; // 0x498
	ATankGunnerSeat* GunnerSeat; // 0x4a8
	UAudioComponent* YawAudio; // 0x4b0
	UAudioComponent* PitchAudio; // 0x4b8
	UStaticMeshComponent* CharacterMovementBarrierTurret; // 0x4c0
	UStaticMeshComponent* CharacterMovementBarrierBarrel; // 0x4c8
	UVibrationEventController* YawVibrationController; // 0x4d0
	UVibrationEventController* PitchVibrationController; // 0x4d8
};

struct AShooterPlayerState : APlayerState {
	FMulticastInlineDelegate OnRoleChanged; // 0x340
	FMulticastInlineDelegate OnTeamChanged; // 0x350
	FMulticastInlineDelegate OnPlatoonChanged; // 0x360
	float OutpostBuildTimer; // 0x374
	int32_t NumKills; // 0x378
	int32_t NumDeaths; // 0x37c
	char bQuitter : 1; // 0x380
	float m_lastOutpostBuildTime; // 0x384
	UObject* m_lastSpawnObject; // 0x388
	char bPendingPlatoonKickOnDeath : 1; // 0x390
	FHLLPlayerScoreData ScoreData; // 0x394
	float LastPawnRestartTime; // 0x400
	UHLLPlayerStats* MatchStatsTracker; // 0x408
	float LastTeamSwitchTime; // 0x45c
	uint16_t PlayerLevel; // 0x464
	FHLLPlayerInfo RepPlayerInfo; // 0x468
	FCharacterCosmeticProfile RequestedCosmetics_Character; // 0x498
	char RequestedLoadout_Character; // 0x4b0
	char NumCommendationsReceived; // 0x4b1
	FMulticastInlineDelegate OnMarkerAddedOrUpdated; // 0x4b8
	FMulticastInlineDelegate OnMarkerRemoved; // 0x4c8
	FRepMarkerInfo RepMarkerInfo; // 0x4e8
	EPlayingState PlayingState; // 0x738
	char NumPunishments; // 0x739
	float AccruedPunishTime; // 0x73c
	FMulticastInlineDelegate OnSharedAmmoRegenStarted; // 0x740
	FMulticastInlineDelegate OnSharedAmmoRegenComplete; // 0x750
	USoundBase* AmmoRegenStartSound; // 0x760
	USoundBase* AmmoRegenSound; // 0x768
	float DefaultAmmoRegenTime; // 0x770
	FHLLSharedAmmoData SharedAmmo; // 0x774
	FString ClanTag; // 0x7b8
	float NextAvailableVoteTime_Instigator; // 0x7c8
	float NextAvailableVoteTime_Target; // 0x7cc
	char bVoteKickImmune : 1; // 0x7d0
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

struct AHLLAbilityDrop_Spawn : ADynamicSpawn {
	UHLLParachuteMeshComponent* Parachute; // 0x3f8
	float DescentSpeed; // 0x400
	char MaxWaves; // 0x404
	FDropSpawnInfo ReplicatedDropInfo; // 0x408
	char NumExecutedWaves; // 0x414
};

struct UBasicReplicationGraph : UReplicationGraph {
	UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x498
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4a0
	TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x4a8
	TArray<AActor*> ActorsWithoutNetConnection; // 0x4b8
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UWGT_RadialChat_Base_V2_C : UHLLRadialMenu_ChatBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UBackgroundBlur* BackgroundBlur_63; // 0x340
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x428
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UMultiLineEditableTextBox : UTextLayoutWidget {
	FText Text; // 0x128
	FText HintText; // 0x140
	FDelegate HintTextDelegate; // 0x158
	FEditableTextBoxStyle WidgetStyle; // 0x168
	FTextBlockStyle TextStyle; // 0x958
	bool bIsReadOnly; // 0xbc0
	bool AllowContextMenu; // 0xbc1
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbc2
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbc3
	USlateWidgetStyleAsset* Style; // 0xbc8
	FSlateFontInfo Font; // 0xbd0
	FLinearColor ForegroundColor; // 0xc20
	FLinearColor BackgroundColor; // 0xc30
	FLinearColor ReadOnlyForegroundColor; // 0xc40
	FMulticastInlineDelegate OnTextChanged; // 0xc50
	FMulticastInlineDelegate OnTextCommitted; // 0xc60
};

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x58
};

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UABP_Rifleman_TPP_V2_C : UHLLCharacterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x2d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10; // 0x3e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_33; // 0x400
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84; // 0x4b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_101; // 0x530
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_100; // 0x558
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_32; // 0x580
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_99; // 0x638
	FAnimNode_Slot AnimGraphNode_Slot_23; // 0x660
	FAnimNode_Slot AnimGraphNode_Slot_22; // 0x6a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_98; // 0x6f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_97; // 0x718
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83; // 0x740
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82; // 0x7b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81; // 0x830
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_31; // 0x8a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_96; // 0x960
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_29; // 0x988
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_27; // 0xa50
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_30; // 0xb10
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_41; // 0xbc8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10; // 0xc78
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xc98
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9; // 0xda0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_29; // 0xdc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_95; // 0xe78
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0xea0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9; // 0xf40
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8; // 0xf60
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8; // 0xf80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_28; // 0xfa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_94; // 0x1058
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x1080
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_8; // 0x1120
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_80; // 0x1188
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_7; // 0x1200
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79; // 0x1268
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_40; // 0x12e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x1390
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_93; // 0x1430
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78; // 0x1458
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_28; // 0x14d0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x1598
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0x1720
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77; // 0x18a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_27; // 0x1920
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76; // 0x19e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x1a60
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_26; // 0x1b00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_92; // 0x1bc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_91; // 0x1be8
	FAnimNode_StateResult AnimGraphNode_StateResult_35; // 0x1c10
	FAnimNode_StateMachine AnimGraphNode_StateMachine_7; // 0x1c40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_90; // 0x1cf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_89; // 0x1d18
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_26; // 0x1d40
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_25; // 0x1e08
	FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1ec8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x1fc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x20c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_88; // 0x21d0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_27; // 0x21f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_26; // 0x22b0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_25; // 0x2368
	FAnimNode_Slot AnimGraphNode_Slot_21; // 0x2420
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_87; // 0x2468
	FAnimNode_Slot AnimGraphNode_Slot_20; // 0x2490
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_86; // 0x24d8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_25; // 0x2500
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_24; // 0x25c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_75; // 0x2690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_74; // 0x2708
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73; // 0x2780
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_85; // 0x27f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_84; // 0x2820
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x2848
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_83; // 0x28e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_24; // 0x2910
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_23; // 0x29c8
	FAnimNode_Slot AnimGraphNode_Slot_19; // 0x2a80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_82; // 0x2ac8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_22; // 0x2af0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x2bb0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2d90
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_6; // 0x2e98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_81; // 0x2f00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_80; // 0x2f28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_79; // 0x2f50
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_24; // 0x2f78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_78; // 0x3038
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_77; // 0x3060
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0x3088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x3100
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x3178
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0x31f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x32b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x3330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x33a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x3420
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x3498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x3510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x3588
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x3600
	FAnimNode_Slot AnimGraphNode_Slot_18; // 0x36c8
	FAnimNode_Slot AnimGraphNode_Slot_17; // 0x3710
	FAnimNode_Slot AnimGraphNode_Slot_16; // 0x3758
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_39; // 0x37a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_38; // 0x3850
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_37; // 0x3900
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_36; // 0x39b0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_35; // 0x3a60
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_34; // 0x3b10
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_33; // 0x3bc0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_23; // 0x3c70
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x3d38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_76; // 0x3e00
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0x3e28
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_21; // 0x3e48
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0x3f00
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_22; // 0x3f20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_75; // 0x3fe8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_84; // 0x4010
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_83; // 0x4038
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_82; // 0x4060
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_81; // 0x4088
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_80; // 0x40b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_79; // 0x40d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_78; // 0x4100
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_77; // 0x4128
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_76; // 0x4150
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_75; // 0x4178
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_74; // 0x41a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_73; // 0x41c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x41f0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_23; // 0x4268
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x4328
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x43f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_74; // 0x4468
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_5; // 0x4490
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_73; // 0x44f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_22; // 0x4520
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x45e0
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting_3; // 0x4600
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x4720
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x4740
	FAnimNode_StateResult AnimGraphNode_StateResult_34; // 0x47b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x47e8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_21; // 0x4860
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x4928
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x49a0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_20; // 0x4a18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x4ae0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_21; // 0x4b58
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x4c18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x4ce0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_72; // 0x4d58
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_4; // 0x4d80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_71; // 0x4de8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_20; // 0x4e10
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x4ed0
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting_2; // 0x4ef0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x5010
	FAnimNode_StateResult AnimGraphNode_StateResult_33; // 0x5030
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_70; // 0x5060
	FAnimNode_StateResult AnimGraphNode_StateResult_32; // 0x5088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x50b8
	FAnimNode_StateResult AnimGraphNode_StateResult_31; // 0x5130
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_19; // 0x5160
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x5228
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x52a0
	FAnimNode_StateResult AnimGraphNode_StateResult_30; // 0x5318
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x5348
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_18; // 0x53f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_69; // 0x54c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x54e8
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_3; // 0x55f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_72; // 0x5658
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_71; // 0x5680
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_70; // 0x56a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_69; // 0x56d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_68; // 0x56f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_67; // 0x5720
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_66; // 0x5748
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_65; // 0x5770
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_64; // 0x5798
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_63; // 0x57c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_62; // 0x57e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_61; // 0x5810
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_60; // 0x5838
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59; // 0x5860
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_58; // 0x5888
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_57; // 0x58b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_56; // 0x58d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_55; // 0x5900
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_54; // 0x5928
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_53; // 0x5950
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_52; // 0x5978
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_51; // 0x59a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50; // 0x59c8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_17; // 0x59f0
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_6; // 0x5ab8
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_5; // 0x5b10
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult_3; // 0x5b68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_49; // 0x5b98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_48; // 0x5bc0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_47; // 0x5be8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_46; // 0x5c10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_16; // 0x5c38
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_4; // 0x5d00
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_3; // 0x5d58
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult_2; // 0x5db0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45; // 0x5de0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44; // 0x5e08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43; // 0x5e30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42; // 0x5e58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41; // 0x5e80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_40; // 0x5ea8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39; // 0x5ed0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_15; // 0x5ef8
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2; // 0x5fc0
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator; // 0x6018
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult; // 0x6070
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0x60a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0x60c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0x60f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x6118
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x6140
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x6168
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0x6190
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x61b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x61e0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_32; // 0x6258
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_68; // 0x6308
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_19; // 0x6330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x63f0
	FAnimNode_StateResult AnimGraphNode_StateResult_29; // 0x6468
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_31; // 0x6498
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x6548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x65c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x6638
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x66b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0x6728
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0x67a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0x6818
	FAnimNode_StateResult AnimGraphNode_StateResult_28; // 0x6890
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x68c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0x68e8
	FAnimNode_StateResult AnimGraphNode_StateResult_27; // 0x6960
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0x6990
	FAnimNode_StateResult AnimGraphNode_StateResult_26; // 0x6a08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0x6a38
	FAnimNode_StateResult AnimGraphNode_StateResult_25; // 0x6ab0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x6ae0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_37; // 0x6b80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_36; // 0x6c60
	FAnimNode_StateResult AnimGraphNode_StateResult_24; // 0x6d40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x6d70
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_30; // 0x6d98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_29; // 0x6e48
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_28; // 0x6ef8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_35; // 0x6fa8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_34; // 0x7088
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_33; // 0x7168
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_32; // 0x7248
	FAnimNode_StateResult AnimGraphNode_StateResult_23; // 0x7328
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_14; // 0x7358
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_13; // 0x7420
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0x74e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0x7560
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_27; // 0x75d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0x7688
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0x7700
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x7778
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_26; // 0x77a8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_25; // 0x7858
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_31; // 0x7908
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_30; // 0x79e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_29; // 0x7ac8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_12; // 0x7ba8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_28; // 0x7c70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_27; // 0x7d50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_26; // 0x7e30
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x7f10
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_24; // 0x7f40
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_23; // 0x7ff0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x80a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x8118
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x8190
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x8208
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_11; // 0x8280
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_22; // 0x8348
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x83f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_25; // 0x8498
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_24; // 0x8578
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_23; // 0x8658
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x8738
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x87b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_67; // 0x87e0
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x8808
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x8838
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x8860
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x8888
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x88b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x88d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x8900
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x8928
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x8950
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x8978
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x89a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x89d0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_21; // 0x89f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_20; // 0x8aa8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_18; // 0x8b58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_22; // 0x8c18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0x8cf8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x8dd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x8eb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x8f30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x8fa8
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x9020
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_19; // 0x9050
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x9100
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x91e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x92c0
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x93a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_18; // 0x93d0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_17; // 0x9480
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x9530
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x9610
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x96f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x97d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x98b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x9990
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_10; // 0x9a70
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x9b38
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_16; // 0x9b68
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_15; // 0x9c18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_17; // 0x9cc8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x9d88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x9e68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x9f48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0xa028
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0xa0a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0xa118
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0xa190
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0xa1c0
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0xa270
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0xa2a0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_9; // 0xa350
	FAnimNode_Slot AnimGraphNode_Slot_15; // 0xa418
	FAnimNode_Slot AnimGraphNode_Slot_14; // 0xa460
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_20; // 0xa4a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0xa560
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_19; // 0xa640
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_66; // 0xa6f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_65; // 0xa720
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_16; // 0xa748
	FAnimNode_Slot AnimGraphNode_Slot_13; // 0xa808
	FAnimNode_Slot AnimGraphNode_Slot_12; // 0xa850
	FAnimNode_Slot AnimGraphNode_Slot_11; // 0xa898
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_14; // 0xa8e0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xa990
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0xaa58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0xaad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0xab48
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_13; // 0xabc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_64; // 0xac70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_63; // 0xac98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0xacc0
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting; // 0xace0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0xae00
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0xae20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_62; // 0xaec0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_15; // 0xaee8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_61; // 0xafa8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0xafd0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0xb088
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_60; // 0xb140
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_59; // 0xb168
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_58; // 0xb190
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_57; // 0xb1b8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0xb1e0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0xb2b0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0xb380
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_12; // 0xb450
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0xb500
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_56; // 0xb5b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_55; // 0xb5e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0xb608
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_54; // 0xb6a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0xb6d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0xb770
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0xb850
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0xb898
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0xb8e0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0xb928
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_53; // 0xb9d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_52; // 0xba00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_51; // 0xba28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0xba50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0xba78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0xbaa0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0xbac8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0xbaf0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0xbb18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0xbb40
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0xbbb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0xbbe8
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0xbc60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0xbc90
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0xbd08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0xbd38
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0xbdb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_50; // 0xbde0
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0xbe08
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0xbe38
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0xbee8
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0xbfa0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0xc030
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xc0d0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0xc1d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0xc1f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_49; // 0xc218
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0xc240
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xc2f8
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0xc320
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xc500
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0xc520
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_8; // 0xc5d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0xc6a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_48; // 0xc828
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0xc850
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_47; // 0xc930
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_46; // 0xc958
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_45; // 0xc980
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0xc9a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_44; // 0xca60
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0xca88
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0xcb40
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0xcbf0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_7; // 0xcca0
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_2; // 0xcd68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_43; // 0xcdd0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_6; // 0xcdf8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0xcec0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_42; // 0xcf78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_41; // 0xcfa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0xcfc8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0xcff0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0xd0a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0xd0d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0xd0f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_14; // 0xd120
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0xd1e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_13; // 0xd208
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0xd2c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_12; // 0xd2f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0xd3b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0xd3d8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_11; // 0xd400
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0xd4c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0xd570
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0xd650
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0xd708
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0xd730
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10; // 0xd758
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0xd818
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0xd860
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0xd918
	FAnimNode_Root AnimGraphNode_Root; // 0xd960
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_5; // 0xd990
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0xda58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0xda80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0xdaa8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0xdb60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0xdb88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0xdbb0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0xdbd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0xdc98
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0xdcc0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0xdd08
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xddd0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0xde88
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0xdeb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0xdf78
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0xdfa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0xe068
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel; // 0xe090
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0xe0f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0xe120
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0xe148
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0xe170
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0xe198
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0xe1c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0xe1e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0xe210
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0xe238
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xe260
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xe288
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xe2b8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0xe2e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0xe390
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0xe408
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0xe480
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xe4f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0xe528
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0xe5d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xe650
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xe6c8
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xe740
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xe770
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xe7e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0xe860
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xe910
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0xe9d8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0xea98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0xeb48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xebf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xec70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xece8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xed60
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xedd8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0xee08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xeeb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xef30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xefa8
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xf020
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xf050
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0xf100
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xf148
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xf210
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xf238
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xf260
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0xf290
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0xf330
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xf410
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xf4f0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xf520
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0xf5d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0xf690
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0xf730
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xf758
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xf808
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0xf880
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0xf940
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0xf968
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0xf990
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0xfa50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0xfaf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0xfb18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0xfb40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0xfb68
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0xfc08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0xfcc0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0xfce8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0xfda8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0xfdd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0xfdf8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xfe98
	FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xfeb8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xffa8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0xffc8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x10080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x100a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x100d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x10170
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x101e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x10288
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x10368
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x104f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x10678
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x10718
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x108a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x10958
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x10980
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x10a20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x10ad8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x10b00
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x10b28
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x10b70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x10c30
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x10c58
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x10cf8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x10d40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x10e00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x10e28
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x10e50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x10e78
	FAnimNode_Slot AnimGraphNode_Slot; // 0x10f18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x10f60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x11020
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x11048
	bool IsLocallyControlled; // 0x11070
	bool IsDead; // 0x11071
	bool IsDeployed; // 0x11072
	bool IsBraced; // 0x11073
	bool IsADS; // 0x11074
	bool EnableFullBody; // 0x11075
	bool WeaponUsesADS; // 0x11076
	float Speed; // 0x11078
	bool WantsToMove; // 0x1107c
	bool IsSprinting; // 0x1107d
	bool IsTurning; // 0x1107e
	bool DirectionPivot; // 0x1107f
	bool LockMovingDirection; // 0x11080
	bool LockPivotingDirection; // 0x11081
	float MovementThreshold; // 0x11084
	float SprintWeight; // 0x11088
	float SprintWeightInv; // 0x1108c
	float LegsTurnRef; // 0x11090
	float LegsTurnRate; // 0x11094
	bool Debug; // 0x11098
	FRotator CharacterRotation; // 0x1109c
	float DeltaTimeX; // 0x110a8
	FRotator LastVelocityRotation; // 0x110ac
	FRotator PreviousVelocityRotation; // 0x110b8
	UABP_Rifleman_FPP_V2_C* FPP_Component; // 0x110c8
	AShooterWeapon* Weapon; // 0x110d0
	UCapsuleComponent* CapsuleComponent; // 0x110d8
	AShooterWeapon* RequestedWeapon; // 0x110e0
	UWeaponTPPAnimationSet* AnimSet; // 0x110e8
	UWeaponTPPAnimationSet* DefaultAnimSet; // 0x110f0
	AShooterCharacter* PlayerPawn; // 0x110f8
	USkeletalMeshComponent* TPP_Component; // 0x11100
	float FallSpeed; // 0x11108
	float InAirTime; // 0x1110c
	float JumpVelocity; // 0x11110
	float LeanInAir; // 0x11114
	float AccelerationDifference; // 0x11118
	float PreviousSpeed; // 0x1111c
	float LeanRotation; // 0x11120
	float LeanAcceleration; // 0x11124
	float FootPositionPhase; // 0x11128
	float FootPositionDirection; // 0x1112c
	int32_t RandomIndex_Idle; // 0x11130
	UAnimSequenceBase* pose_inheritance_stand; // 0x11138
	UAnimSequenceBase* pose_inheritance_crouch; // 0x11140
	UAnimSequenceBase* pose_inheritance_prone; // 0x11148
	UAnimSequenceBase* idle_stand; // 0x11150
	UAnimSequenceBase* idle_crouch; // 0x11158
	UAnimSequenceBase* idle_prone; // 0x11160
	UAnimSequenceBase* idle_stand_break_01; // 0x11168
	UAnimSequenceBase* idle_stand_break_02; // 0x11170
	UAnimSequenceBase* idle_crouch_break_01; // 0x11178
	UAnimSequenceBase* idle_crouch_break_02; // 0x11180
	UBlendSpaceBase* bs_locomotion_stand; // 0x11188
	UBlendSpaceBase* bs_locomotion_crouch; // 0x11190
	UBlendSpaceBase* bs_locomotion_prone; // 0x11198
	UBlendSpaceBase* bs_stop_walk_stand; // 0x111a0
	UBlendSpaceBase* bs_stop_walk_crouch; // 0x111a8
	UBlendSpaceBase* bs_stop_jog_stand; // 0x111b0
	UBlendSpaceBase* bs_stop_jog_crouch; // 0x111b8
	UBlendSpaceBase* bs_stop_sprint_stand; // 0x111c0
	UBlendSpaceBase* bs_stop_sprint_crouch; // 0x111c8
	UBlendSpaceBase* bs_stop_jog_stand_to_prone; // 0x111d0
	UBlendSpaceBase* bs_stop_jog_crouch_to_prone; // 0x111d8
	UBlendSpaceBase* bs_stop_sprint_stand_to_prone; // 0x111e0
	UBlendSpaceBase* bs_stop_sprint_crouch_to_prone; // 0x111e8
	UAnimSequenceBase* rotate_stand_r; // 0x111f0
	UAnimSequenceBase* rotate_stand_l; // 0x111f8
	UAnimSequenceBase* rotate_crouch_r; // 0x11200
	UAnimSequenceBase* rotate_crouch_l; // 0x11208
	UAnimSequenceBase* rotate_prone_r; // 0x11210
	UAnimSequenceBase* rotate_prone_l; // 0x11218
	UBlendSpaceBase* stand_vault; // 0x11220
	UBlendSpaceBase* stand_climb; // 0x11228
	UAnimSequenceBase* t_stand_to_crouch; // 0x11230
	UAnimSequenceBase* t_stand_to_prone; // 0x11238
	UAnimSequenceBase* t_crouch_to_prone; // 0x11240
	UAnimSequenceBase* t_crouch_to_stand; // 0x11248
	UAnimSequenceBase* t_prone_to_stand; // 0x11250
	UAnimSequenceBase* t_prone_to_crouch; // 0x11258
	UAnimSequenceBase* bipod_deploy_stand; // 0x11260
	bool Bipod_Moving; // 0x11268
	bool Bipod_Moving_Direction; // 0x11269
	ECharacterStance Stance; // 0x1126a
	ECharacterStance StanceStored; // 0x1126b
	ECharacterStance StancePrevious; // 0x1126c
	ECharacterStance StanceDeath; // 0x1126d
	bool ChangedStance; // 0x1126e
	EWeaponType WeaponTypeCurrent; // 0x1126f
	bool IsVaulting; // 0x11270
	bool IsClimbing; // 0x11271
	FVector2D LeanAdditive; // 0x11274
	FRotator SprintRotation; // 0x1127c
	UWidget_DebugPlayerStates_C* DebugWidget; // 0x11288
	EWeaponType WeaponTypeLast; // 0x11290
	float ADS_Weight; // 0x11294
	EWeaponGroups_V2 WeaponGroup; // 0x11298
	float Speed_Max_ADS; // 0x1129c
	float Speed_Max_Sprint_Standing; // 0x112a0
	float Speed_Max_Sprint_Crouched; // 0x112a4
	ETransitionState_V2 TransitionState; // 0x112a8
	ETransitionState_V2 TransitionStateLast; // 0x112a9
	bool Initialized; // 0x112aa
	FVector2D RelativeVelocity; // 0x112ac
	FVector2D RelativeVelocitySlow; // 0x112b4
	FVector2D RelativeVelocityStored; // 0x112bc
	float RelativeVelocityDifference; // 0x112c4
	FVector LegsForwardDirRef; // 0x112c8
	float DebugAlignRadius; // 0x112d4
	float StanceTransitionSpeed; // 0x112d8
	float SpeedTimerTime; // 0x112dc
	float Speed_Max_Jog_Standing; // 0x112e0
	float Speed_Max_Jog_Crouched; // 0x112e4
	float Speed_Max_Proned; // 0x112e8
	float Bipod_IntepPose; // 0x112ec
	float Bipod_IntepPose_Stored; // 0x112f0
	float Bipod_AimVerticalBlend; // 0x112f4
	FVector PlayerBipod_T; // 0x112f8
	FRotator PlayerBipod_R; // 0x11304
	FTransform Bipod_Anchor; // 0x11310
	float IK_Left; // 0x11340
	float IK_Right; // 0x11344
	bool IK_Left_Enabled; // 0x11348
	bool IK_Right_Enabled; // 0x11349
	UAnimSequenceBase* stand_jump_enter; // 0x11350
	UAnimSequenceBase* stand_jump_loop; // 0x11358
	UAnimSequenceBase* stand_jump_exit; // 0x11360
	UAnimSequenceBase* sprint_stand; // 0x11368
	UAnimSequenceBase* sprint_crouch; // 0x11370
	UAnimSequenceBase* pose_inheritance_deploy; // 0x11378
	UAnimSequenceBase* pose_ads_stand; // 0x11380
	UAnimSequenceBase* pose_ads_crouch; // 0x11388
	UAnimSequenceBase* pose_ads_prone; // 0x11390
	UAnimSequenceBase* bipod_deploy_crouch; // 0x11398
	UAnimSequenceBase* bipod_deploy_prone; // 0x113a0
	UAnimSequenceBase* bipod_idle_stand; // 0x113a8
	UAnimSequenceBase* bipod_idle_crouch; // 0x113b0
	UAnimSequenceBase* bipod_idle_prone; // 0x113b8
	UAnimSequenceBase* bipod_undeploy_stand; // 0x113c0
	UAnimSequenceBase* bipod_undeploy_crouch; // 0x113c8
	UAnimSequenceBase* bipod_undeploy_prone; // 0x113d0
	UBlendSpaceBase* bs_start_walk_stand; // 0x113d8
	UBlendSpaceBase* bs_start_walk_crouch; // 0x113e0
	UBlendSpaceBase* bs_start_jog_stand; // 0x113e8
	UBlendSpaceBase* bs_start_jog_crouch; // 0x113f0
	UBlendSpaceBase* bs_start_prone_to_jog; // 0x113f8
	UBlendSpaceBase* bs_start_prone_to_sprint; // 0x11400
	float Timer_Turn; // 0x11408
	float Time_Stop; // 0x1140c
	bool CaptureStopTimer; // 0x11410
	EVelocityStage_V2 VelocityStage; // 0x11411
	float VelocityDifference; // 0x11414
	FVector CharacterVelocityStored; // 0x11418
	float ac_LegsTurnCurve; // 0x11424
	UBlendSpaceBase* AO_Stand; // 0x11428
	UBlendSpaceBase* AO_Stand_ADS; // 0x11430
	UBlendSpaceBase* AO_Crouch; // 0x11438
	UBlendSpaceBase* AO_Crouch_ADS; // 0x11440
	UBlendSpaceBase* AO_Prone; // 0x11448
	UBlendSpaceBase* AO_Prone_ADS; // 0x11450
	float ac_IK_Right_Default; // 0x11458
	float ac_IK_Left_Default; // 0x1145c
	UAnimSequenceBase* pose_idle_stand; // 0x11460
	UAnimSequenceBase* pose_idle_crouch; // 0x11468
	UAnimSequenceBase* pose_idle_prone; // 0x11470
	FRotator LegsForwardDir; // 0x11478
	float CharDirection; // 0x11484
	float CharDirectionSign; // 0x11488
	UAimOffsetBlendSpace* AO_Crouch_Moving; // 0x11490
	float Speed_Normalized_Relevant; // 0x11498
	float Speed_Normalized_Relevant_Max; // 0x1149c
	float Speed_Normalized_Stand; // 0x114a0
	float Speed_Normalized_Crouch; // 0x114a4
	float Speed_Normalized_Prone; // 0x114a8
	float Speed_Normalized_Stand_Sprint; // 0x114ac
	float Speed_Normalized_Crouch_Sprint; // 0x114b0
	float Speed_Normalized_ADS; // 0x114b4
	float Speed_Sticky; // 0x114b8
	int32_t RandomIndex_Death; // 0x114bc
	int32_t RandomIndex_Death_Prone; // 0x114c0
	float FullBodyBlend; // 0x114c4
	float CharDirection_Moving; // 0x114c8
	float AimOffsetWeight; // 0x114cc
	float CharDirection_Moving_Slow; // 0x114d0
	float CharDirection_Pivoting; // 0x114d4
	UAnimSequenceBase* idle_stand_ads; // 0x114d8
	UAnimSequenceBase* idle_crouch_ads; // 0x114e0
	UAnimSequenceBase* idle_prone_ads; // 0x114e8
	float Bipod_HeightDiff; // 0x114f0
	float ac_InheritanceWeight; // 0x114f4
	float ac_OverrideHandIK; // 0x114f8
	EWeaponGroups_V2 EquippedGroup; // 0x114fc
	float Prone_FrontSlopeAngle; // 0x11500
	float Prone_BackSlopeAngle; // 0x11504
	float Prone_FrontSlopeAngle_Stored; // 0x11508
	float Prone_BackSlopeAngle_Stored; // 0x1150c
	float ac_Weight_UpperBody; // 0x11510
	APlayerPawn_Anim_V2_C* PlayerPawnAnim; // 0x11518
	float IK_Foot_Offset; // 0x11520
	float Bipod_AimRotation; // 0x11524
	float Bipod_AimRotation_Stored; // 0x11528
	float ac_IK_Action_Override_Left; // 0x1152c
	float ac_IK_Action_Override_Right; // 0x11530
	UAnimSequenceBase* brace_stand_idle; // 0x11538
	UAnimSequenceBase* brace_crouch_idle; // 0x11540
	UAnimSequenceBase* brace_prone_idle; // 0x11548
	float ac_Action; // 0x11550
	AStressTestBot_C* BotTestPawn; // 0x11558
	FRotator Prone_FrontSlopeRotation; // 0x11560
	FRotator Prone_BackSlopeRotation; // 0x1156c
	FVector IK_Foot_Target_Left_Location; // 0x11578
	FRotator IK_Foot_Target_Left_Rotation; // 0x11584
	FVector IK_Foot_Target_Right_Location; // 0x11590
	FRotator IK_Foot_Target_Right_Rotation; // 0x1159c
	float LeanWeight; // 0x115a8
	UBlendSpace* bs_locomotion_stand_ads; // 0x115b0
	UBlendSpace* bs_locomotion_crouch_ads; // 0x115b8
	UAnimSequenceBase* Brace_Stand_Enter; // 0x115c0
	UAnimSequenceBase* brace_crouch_enter; // 0x115c8
	UAnimSequenceBase* brace_prone_enter; // 0x115d0
	UAnimSequenceBase* brace_stand_exit; // 0x115d8
	UAnimSequenceBase* brace_crouch_exit; // 0x115e0
	UAnimSequenceBase* brace_prone_exit; // 0x115e8
	float ac_RightHandAction; // 0x115f0
	FVector CharacterVelocityLastDetermined; // 0x115f4
	float CharacterVelocityTimeCheck; // 0x11600
	FRotator LegsForwardDirInv; // 0x11604
	float AimPitch; // 0x11610
	float AimYaw; // 0x11614
	UCurveVector* crv_vault; // 0x11618
	UCurveVector* crv_climb; // 0x11620
	UAnimSequenceBase* vault_enter_low; // 0x11628
	UAnimSequenceBase* vault_enter_high; // 0x11630
	EVaultingMoveType Vault_Type; // 0x11638
	bool Vault_Low; // 0x11639
	bool Vault_WaitForGround; // 0x1163a
	float Vault_Enter_Start; // 0x1163c
	float Vault_Exit_Start; // 0x11640
	float Vault_Enter_Alpha; // 0x11644
	float Vault_Over_Alpha; // 0x11648
	float Vault_Exit_Alpha; // 0x1164c
	float Vault_Over_Time; // 0x11650
	FVector Vault_Obstacle; // 0x11654
	FVector Vault_Obstacle_World; // 0x11660
	FVector Vault_MeshStart; // 0x1166c
	FVector Vault_RootOffset; // 0x11678
	float Vault_Enter_Speed; // 0x11684
	float Vault_Over_Speed; // 0x11688
	float Vault_Exit_Speed; // 0x1168c
	float Vault_Enter_Speed_Mod; // 0x11690
	float Vault_Over_Speed_Mod; // 0x11694
	float Vault_Exit_Speed_Mod; // 0x11698
	FVector Vault_Enter_Vec; // 0x1169c
	FVector Vault_Over_Vec; // 0x116a8
	FVector Vault_Exit_Vec; // 0x116b4
	FVector Vault_Velocity; // 0x116c0
	float AimYaw_Stored; // 0x116cc
	float Vault_Enter_Low_AnimRate; // 0x116d0
	float Vault_Enter_High_AnimRate; // 0x116d4
	float Vault_Over_Low_AnimRate; // 0x116d8
	float Vault_Over_High_AnimRate; // 0x116dc
	float Vault_Exit_Low_AnimRate; // 0x116e0
	float Vault_Exit_High_AnimRate; // 0x116e4
	bool Vault_OverTransition; // 0x116e8
	bool Vault_ExitTransition; // 0x116e9
	float IK_ForceOn; // 0x116ec
	UAnimSequenceBase* rotate_stand_r_brc; // 0x116f0
	UAnimSequenceBase* rotate_stand_l_brc; // 0x116f8
	UAnimSequenceBase* rotate_crouch_r_brc; // 0x11700
	UAnimSequenceBase* rotate_crouch_l_brc; // 0x11708
	UAnimSequenceBase* rotate_prone_r_brc; // 0x11710
	UAnimSequenceBase* rotate_prone_l_brc; // 0x11718
	float CharDirection_HighSpeed; // 0x11720
	FVector Climb_Enter_Vec; // 0x11724
	float HorizontalTurnThreshold; // 0x11730
	EWeaponGroups_V2 WeaponGroup_Last; // 0x11734
	FVector ProneRootOffset; // 0x11738
	float ProneRootOffset_Length; // 0x11744
	bool IsMoving; // 0x11748
	bool IsStopping; // 0x11749
	bool IsGrounded; // 0x1174a
	bool IsPivoting; // 0x1174b
	float t_Update_100ms; // 0x1174c
	float t_Update_300ms; // 0x11750
	float Climb_Enter_Alpha; // 0x11754
	FVector Climb_GoalOffset; // 0x11758
	float t_Update_1000ms; // 0x11764
	FVector PlayerCenterOffset; // 0x11768
	TArray<UAnimMontage*> StanceTransitionMontages; // 0x11778
	UAnimSequence* PivotSequence; // 0x11788
	UAnimMontage* EquipMontage; // 0x11790
	bool ResetTimerResetters; // 0x11798
	float Climb_Enter_Start; // 0x1179c
	float Climb_Speed; // 0x117a0
	float Climb_Speed_Mod; // 0x117a4
	bool EnableVaultAndClimb; // 0x117a8
	UBlendSpaceBase* a_lean_ads; // 0x117b0
	UBlendSpaceBase* a_lean; // 0x117b8
	bool DisableAdvancedLayering; // 0x117c0
	FRotator PrevCapsuleRot; // 0x117c4
	bool T_Melee_Bayonet; // 0x117d0
	bool T_Melee_Bayonet_Hit; // 0x117d1
	UAnimSequenceBase* a_vault_enter_high; // 0x117d8
	UAnimSequenceBase* a_vault_enter_low; // 0x117e0
	UAnimSequenceBase* a_vault_exit_high; // 0x117e8
	UAnimSequenceBase* a_vault_exit_low; // 0x117f0
	UAnimSequenceBase* a_vault_exit_land_high; // 0x117f8
	UAnimSequenceBase* a_vault_exit_land_low; // 0x11800
	UAnimSequenceBase* a_climb; // 0x11808
	bool VaultForceExitTrigger; // 0x11810
	bool EquipPose; // 0x11811
	FPoseSnapshot EquipSnapshot; // 0x11818
	UBlendSpaceBase* a_lean_Unarmed; // 0x11850
	EWeaponDeployState CurrentDeployState; // 0x11858
	float LegIKAlpha; // 0x1185c
	bool PerformingQuickAttack; // 0x11860
	bool FullyIdleBlended; // 0x11861
	FVector ShotDirection; // 0x11864
	bool ValidBraceStandExit; // 0x11870
	bool bHitReaction; // 0x11871
	bool FinishedVaultClimb; // 0x11872
	bool Reloading; // 0x11873
};

struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x320
	char bEnableLightShaftOcclusion : 1; // 0x324
	float OcclusionMaskDarkness; // 0x328
	float OcclusionDepthRange; // 0x32c
	FVector LightShaftOverrideDirection; // 0x330
	float WholeSceneDynamicShadowRadius; // 0x33c
	float DynamicShadowDistanceMovableLight; // 0x340
	float DynamicShadowDistanceStationaryLight; // 0x344
	int32_t DynamicShadowCascades; // 0x348
	float CascadeDistributionExponent; // 0x34c
	float CascadeTransitionFraction; // 0x350
	float ShadowDistanceFadeoutFraction; // 0x354
	char bUseInsetShadowsForMovableObjects : 1; // 0x358
	int32_t FarShadowCascadeCount; // 0x35c
	float FarShadowDistance; // 0x360
	float DistanceFieldShadowDistance; // 0x364
	float LightSourceAngle; // 0x368
	float LightSourceSoftAngle; // 0x36c
	float TraceDistance; // 0x370
	FLightmassDirectionalLightSettings LightmassSettings; // 0x374
	char bCastModulatedShadows : 1; // 0x384
	FColor ModulatedShadowColor; // 0x388
	float ShadowAmount; // 0x38c
	char bUsedAsAtmosphereSunLight : 1; // 0x390
	int32_t AtmosphereSunLightIndex; // 0x394
};

struct UReverbEffect : UObject {
	float Density; // 0x28
	float Diffusion; // 0x2c
	float Gain; // 0x30
	float GainHF; // 0x34
	float DecayTime; // 0x38
	float DecayHFRatio; // 0x3c
	float ReflectionsGain; // 0x40
	float ReflectionsDelay; // 0x44
	float LateGain; // 0x48
	float LateDelay; // 0x4c
	float AirAbsorptionGainHF; // 0x50
	float RoomRolloffFactor; // 0x54
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString Code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomDefine> AdditionalDefines; // 0x78
	TArray<FString> IncludeFilePaths; // 0x88
};

struct UHLLAdminCameraSpringArm : USpringArmComponent {
	AActor* TraceIgnoreActor; // 0x280
};

struct UWGT_RconConsoleWindow_C : UHLLRconCommandWindow {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
	UMultiLineEditableTextBox* Output_Multi; // 0x250
	UScrollBox* TextScrollBox; // 0x258
	UEditableText* UserCommandTextBox; // 0x260
};

struct UWGT_ServerListItem_V2_C : UHLLUI_ServerBrowserItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
	UBorder* RootBorder; // 0x2b8
	UButton* RootButton; // 0x2c0
	UWGT_ServerBrowser_V2_C* ServerBrowserWidget; // 0x2c8
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UHLLMarkers_MapMenuItem : UUserWidget {
	EHLLMarker AssignedMarker; // 0x230
	TWeakObjectPtr<UHLLMarkers_MapMenu> OwningMenu; // 0x234
	UImage* IconType; // 0x240
	UTextBlock* MarkerName; // 0x248
	UTextBlock* MarkerCount; // 0x250
};

struct UHLLRadialMenu_WeaponSegment : UHLLRadialMenu_Segment {
	EWeaponType WeaponType; // 0x2c4
	UImage* WeaponIcon; // 0x2c8
};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
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

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UHLLUI_RoleItem : UUserWidget {
	TWeakObjectPtr<UHLLUI_CharacterSelection> ParentPanel; // 0x230
	EPlayerRole Role; // 0x238
	UCheckBox* FavouriteChecker; // 0x240
	UImage* RoleIcon; // 0x248
	UTextBlock* RoleName; // 0x250
	UTextBlock* RoleLevel; // 0x258
	UProgressBar* RoleLevelProgress; // 0x260
};

struct UWGT_AdminCamPlayerEntry_C : UHLLAdminCamPlayerEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UButton* CopyID; // 0x270
	UButton* CopyName; // 0x278
	UBorder* RootBorder; // 0x280
	UButton* RootButton; // 0x288
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

struct UHLLUseContext_MountWeapon : UHLLUseContextBase {
	URichTextBlock* UseText; // 0x238
};

struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f0
	char bStopWhenOwnerDestroyed : 1; // 0x1f0
	char bAllowSpatialization : 1; // 0x1f0
	char bOverrideAttenuation : 1; // 0x1f0
	char bOutputToBusOnly : 1; // 0x1f4
	USoundAttenuation* AttenuationSettings; // 0x1f8
	FSoundAttenuationSettings AttenuationOverrides; // 0x200
	USoundConcurrency* ConcurrencySettings; // 0x5a0
	TSet<USoundConcurrency*> ConcurrencySet; // 0x5a8
	USoundClass* SoundClass; // 0x5f8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x600
	USoundSubmixBase* SoundSubmix; // 0x608
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x610
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x620
	FSoundModulation Modulation; // 0x630
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640
	char bIsUISound : 1; // 0x650
	char bIsPreviewSound : 1; // 0x650
	int32_t EnvelopeFollowerAttackTime; // 0x654
	int32_t EnvelopeFollowerReleaseTime; // 0x658
	FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x660
	USynthSound* Synth; // 0x690
	UAudioComponent* AudioComponent; // 0x698
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

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
};

struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1ad0
};

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0x88
};

struct AShooterWeapon_Projectile : AShooterWeapon {
	AShooterProjectile* ProjectileClass; // 0x8b8
};

struct UMaterialExpressionShadingModel : UMaterialExpression {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct USoundNodeHLLDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UHLLUseContext_Dispenser : UHLLUseContextBase {
	FLinearColor CantDropTint; // 0x23c
	UVerticalBox* ItemList; // 0x250
	TArray<UHLLDispenserListItem*> ItemWidgets; // 0x258
	TWeakObjectPtr<AShooterWeapon_Dispenser> CurrentListWeapon; // 0x268
	UVerticalBox* RootVBox; // 0x270
	UImage* RadialProg; // 0x278
	UImage* IconImage; // 0x280
	URichTextBlock* DisplayText; // 0x288
	URichTextBlock* SelectText; // 0x290
	UHorizontalBox* RotateHBox; // 0x298
	URichTextBlock* RotateLText; // 0x2a0
	URichTextBlock* RotateRText; // 0x2a8
};

struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58
};

struct UHLLWeaponForceFeedbackData : UHLLWeaponVibrationData {
	TArray<FHLLWeaponForceFeedbackEvent> Events; // 0x30
};

struct UWGT_RoundSummaryPlayer_C : UHLLRoundSummaryPlayer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UButton* Button_179; // 0x330
	UButton* FriendButton; // 0x338
	UImage* Image; // 0x340
	UImage* Image_9; // 0x348
	UImage* Image_10; // 0x350
	UImage* PlatformIcon; // 0x358
	UW_HoverToolTip_C* Tooltip_Widget_Kick; // 0x360
	UW_HoverToolTip_C* Tooltip_Widget_Mute; // 0x368
	UW_HoverToolTip_C* Tooltip_Widget_Friend; // 0x370
	UWGT_RoundSummaryDetails_V2_C* Scoreboard; // 0x378
	float DefaultBGAlpha; // 0x380
	FMulticastInlineDelegate OnCustomNavigation; // 0x388
	int32_t PlatoonButtonIndex; // 0x398
	UWidget* CustomNavigationTarget; // 0x3a0
	FMulticastInlineDelegate OnFocus; // 0x3a8
	FMulticastInlineDelegate OnFocusLoss; // 0x3b8
	bool bIsFocused; // 0x3c8
	UWidget* MenuAnchorContent; // 0x3d0
	FLinearColor HilightColour; // 0x3d8
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
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

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UBTTask_FinishWithResult : UBTTaskNode {
	EBTNodeResult Result; // 0x70
};

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58
};

struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	EARTextureType TextureType; // 0x110
	float Timestamp; // 0x114
	FGuid ExternalTextureGuid; // 0x118
	FVector2D Size; // 0x128
};

struct AShooterWeapon_TravelTime : AShooterWeapon {
	ARifleProjectile* ProjectileClass; // 0x8b8
	TMap<uint32_t, ARifleProjectile*> TravelingProjectiles; // 0x8c0
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40
};

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct USkinnedMeshComponent : UMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x438
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x440
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x448
	UPhysicsAsset* PhysicsAssetOverride; // 0x550
	int32_t ForcedLodModel; // 0x558
	int32_t MinLodModel; // 0x55c
	float StreamingDistanceMultiplier; // 0x568
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x578
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x5ac
	char bOverrideMinLod : 1; // 0x5ae
	char bUseBoundsFromMasterPoseComponent : 1; // 0x5ae
	char bForceWireframe : 1; // 0x5ae
	char bDisplayBones : 1; // 0x5ae
	char bDisableMorphTarget : 1; // 0x5ae
	char bHideSkin : 1; // 0x5ae
	char bPerBoneMotionBlur : 1; // 0x5af
	char bComponentUseFixedSkelBounds : 1; // 0x5af
	char bConsiderAllBodiesForBounds : 1; // 0x5af
	char bSyncAttachParentLOD : 1; // 0x5af
	char bCanHighlightSelectedSections : 1; // 0x5af
	char bRecentlyRendered : 1; // 0x5af
	char bCastCapsuleDirectShadow : 1; // 0x5af
	char bCastCapsuleIndirectShadow : 1; // 0x5af
	char bCPUSkinning : 1; // 0x5b0
	char bEnableUpdateRateOptimizations : 1; // 0x5b0
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x5b0
	char bRenderStatic : 1; // 0x5b0
	char bIgnoreMasterPoseComponentLOD : 1; // 0x5b0
	char bCachedLocalBoundsUpToDate : 1; // 0x5b0
	char bForceMeshObjectUpdate : 1; // 0x5b1
	float CapsuleIndirectShadowMinVisibility; // 0x5b4
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x5c8
	FMatrix CachedWorldToLocalTransform; // 0x5f0
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x220
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x270
	float PermutationTimeOffset; // 0x278
	float PlayRate; // 0x27c
	bool bStateBool; // 0x280
	UAnimSharingInstance* Instance; // 0x288
};

struct AHLLCommanderAbility_GhostPlane : AHLLCommanderAbility_DropperPlane {
	FDispenserData DispenserData; // 0x3d8
	AHLLGhostAbilitySafezone* SafezoneClass; // 0x568
	AHLLDispenserItem_Base* GhostInstance; // 0x570
	AHLLGhostAbilitySafezone* SafezoneInstance; // 0x578
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct AHLLAdminCamera : APawn {
	USphereComponent* CollisionSphere; // 0x280
	UHLLAdminCameraMovement* AdminCameraMovement; // 0x288
	UHLLAdminCameraSpringArm* CameraArm; // 0x290
	UCameraComponent* Camera; // 0x298
	UHLLMapComponent* MapComponent; // 0x2a0
	float TargetScanDistance; // 0x2a8
	float TargetScanRadius; // 0x2ac
	float ZoomSpeed; // 0x2b0
	UMaterialInterface* PostProcessMaterial; // 0x2b8
	float FOVZoomMin; // 0x2c0
	FFollowCamSettings VehicleSettings; // 0x2c4
	FFollowCamSettings CharacterSettings; // 0x2e4
	UMaterialInstanceDynamic* PostProcessMID; // 0x308
	float TargetArmRatio; // 0x310
	float CurrentArmRatio; // 0x314
	float MinArmLength; // 0x318
	float MaxArmLength; // 0x31c
	float TargetZoomRatio; // 0x320
	float CurrentZoomRatio; // 0x324
	FAdminCamTarget ReticleTarget; // 0x328
	FAdminCamTarget LockedTarget; // 0x338
	EAdminCamMode CurrentMode; // 0x2e78
	EAdminHighlightMode HighlightMode; // 0x2e79
	EAdminUIMode UIMode; // 0x2e7a
	char PermissionsMask; // 0x2e7b
};

struct UHLLScopeWidget : UUserWidget {
	AShooterWeapon* AssignedWeapon; // 0x230
	char bRotateWithLean : 1; // 0x238
	char bScopeParallax : 1; // 0x238
	UHLLScopeImage* ScopeImage; // 0x240
	UTextBlock* ZoomText; // 0x248
};

struct UFlamethrowerComponent : USceneComponent {
	AFlamethrowerBurningSpot* GroundBurningFX; // 0x1f0
	AFlamethrowerBurningCharacter* CharacterBurningFX; // 0x1f8
};

struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30
	bool bGenerateCollisionForMeshData; // 0x31
	bool bGenerateNavMeshForMeshData; // 0x32
	bool bUseMeshDataForOcclusion; // 0x33
	bool bRenderMeshDataInWireframe; // 0x34
	bool bTrackSceneObjects; // 0x35
	bool bUsePersonSegmentationForOcclusion; // 0x36
	EARWorldAlignment WorldAlignment; // 0x37
	EARSessionType SessionType; // 0x38
	EARPlaneDetectionMode PlaneDetectionMode; // 0x39
	bool bHorizontalPlaneDetection; // 0x3a
	bool bVerticalPlaneDetection; // 0x3b
	bool bEnableAutoFocus; // 0x3c
	EARLightEstimationMode LightEstimationMode; // 0x3d
	EARFrameSyncMode FrameSyncMode; // 0x3e
	bool bEnableAutomaticCameraOverlay; // 0x3f
	bool bEnableAutomaticCameraTracking; // 0x40
	bool bResetCameraTracking; // 0x41
	bool bResetTrackedObjects; // 0x42
	TArray<UARCandidateImage*> CandidateImages; // 0x48
	int32_t MaxNumSimultaneousImagesTracked; // 0x58
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c
	TArray<char> WorldMapData; // 0x60
	TArray<UARCandidateObject*> CandidateObjects; // 0x70
	FARVideoFormat DesiredVideoFormat; // 0x80
	EARFaceTrackingDirection FaceTrackingDirection; // 0x8c
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8d
	TArray<char> SerializedARCandidateImageDatabase; // 0x90
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa0
};

struct UGamepadLayoutKey_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	URichTextBlock* ActionText; // 0x238
	UImage* ButtonIcon; // 0x240
	URichTextBlock* HoldActionText; // 0x248
	UScaleBox* IconScaleBox; // 0x250
	UHorizontalBox* LayoutContainer; // 0x258
	USpacer* Spacer_88; // 0x260
	UVerticalBox* TextContainer; // 0x268
	FKey AssociatedGamepadKey; // 0x270
	bool bIsTextOnLeftSide; // 0x288
	FText RichTextFormat; // 0x290
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0xf0
	int32_t AdditionalSlotIndex; // 0xf4
	FText SlotDisplayName; // 0xf8
};

struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	FLinearColor FadeColor; // 0x180
	char bFadeAudio : 1; // 0x190
};

struct UMockDataMeshTrackerComponent : USceneComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f0
	bool ScanWorld; // 0x200
	bool RequestNormals; // 0x201
	bool RequestVertexConfidence; // 0x202
	EMeshTrackerVertexColorMode VertexColorMode; // 0x203
	TArray<FColor> BlockVertexColors; // 0x208
	FLinearColor VertexColorFromConfidenceZero; // 0x218
	FLinearColor VertexColorFromConfidenceOne; // 0x228
	float UpdateInterval; // 0x238
	UMRMeshComponent* MRMesh; // 0x240
};

struct AHLLArtillerySpawner : AActor {
	USceneComponent* DummyRoot; // 0x220
	AHLLArtilleryBase* ArtilleryClass; // 0x228
};

struct AShooterBot : AShooterCharacter {
	UBehaviorTree* BotBehavior; // 0x1038
};

struct URichTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	UDataTable* TextStyleSet; // 0x140
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x148
	bool bOverrideDefaultStyle; // 0x158
	FTextBlockStyle DefaultTextStyleOverride; // 0x160
	float MinDesiredWidth; // 0x3c8
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x638
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	UNetConnection* NetConnection; // 0x28
	AReplicationGraphDebugActor* DebugActor; // 0x170
	TArray<FLastLocationGatherInfo> LastGatherLocations; // 0x190
	TArray<UReplicationGraphNode*> ConnectionGraphNodes; // 0x1a8
	UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1b8
};

struct AHLLCommanderAbility_Placeable : AHLLCommanderAbility {
	FRepAbilityPlacement PlacementData; // 0x350
	char bChatMessageNameSector : 1; // 0x35c
	char bAllowPlacementOutOfBounds : 1; // 0x35c
	char bSupportRotation : 1; // 0x35c
	char bTickPlacementChecks : 1; // 0x35c
	ECollisionChannel PlacementChannelName; // 0x35d
	char bFixedBaseRotation : 1; // 0x35e
	UHLLMapComponent* MapComponent; // 0x360
	char bTransformValid : 1; // 0x368
	char bIsPlacementValid : 1; // 0x368
	char bHideIconForThisActivation : 1; // 0x368
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

struct ABaseTruck : ABaseVehicle {
	AHLLSeat* FrontPassengerSeatClass; // 0x4e8
	int32_t NumBackPassengerSeats; // 0x4f0
	AHLLSeat* BackPassengerSeatClass; // 0x4f8
	AHLLSeat* FrontPassengerSeat; // 0x500
	TArray<AHLLSeat*> BackPassengerSeats; // 0x508
	UHLLArmourCollisionMesh* ArmourCollision_Body; // 0x518
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UHLLRoundSummaryStat : UUserWidget {
	FSlateColor HostileTeamColour; // 0x230
	FSlateColor FriendlyTeamColour; // 0x258
	UTextBlock* TitleText; // 0x280
	UTextBlock* StatText; // 0x288
};

struct AHLLSeat : AActor {
	char bUsePostProcess : 1; // 0x220
	FPostProcessSettings PostSettings; // 0x230
	TArray<FHLLSeatZoomLevel> ZoomFOVList; // 0x778
	USoundBase* ZoomInSound; // 0x788
	USoundBase* ZoomOutSound; // 0x790
	AShooterCharacter* CurrentOccupant; // 0x798
	FHLLSeatOccupancyUpdate OccupancyUpdate; // 0x7a0
	FHLLSeatOccupancyUpdate PendingOccupancyUpdateRep; // 0x7b0
	bool bHasPendingOccupancyUpdate; // 0x7c0
	char bHideFirstPerson : 1; // 0x7c1
	char bHideThirdPerson : 1; // 0x7c1
	char bFirstPersonIsThirdPerson : 1; // 0x7c1
	char bHideThirdPersonHeadInFirstPerson : 1; // 0x7c1
	char bAllowSameTeamOnly : 1; // 0x7c1
	char bAllowEntryDuringMatchWarmup : 1; // 0x7c1
	char bAttachOccupant : 1; // 0x7c1
	ESeatAttachmentMode AttachmentMode; // 0x7c2
	char bProtectOccupant : 1; // 0x7c3
	char bUnequipWeaponOnSeating : 1; // 0x7c3
	char bUseSeatViewpoint : 1; // 0x7c3
	char bEnableLaserTagging : 1; // 0x7c3
	char bDisablePingMarkers : 1; // 0x7c4
	FName AttachSocketName; // 0x7c8
	FName EyepointSocketName; // 0x7d0
	UAnimInstance* OccupantAnim_1P; // 0x7d8
	UAnimInstance* OccupantAnim_3P; // 0x7e0
	UHLLSeatWidgetBase* SeatUI; // 0x7e8
	FSlateBrush SeatIcon; // 0x7f0
	FText SeatDisplayName; // 0x878
	TSet<EHint> HintsToDisplay; // 0x890
	char bClearEnterOrExitHintOnEnter : 1; // 0x8e0
	EHint CanEnterHint; // 0x8e1
	EHint CantEnterHint; // 0x8e2
	char bSendSeatCapsuleOffsets : 1; // 0x8e3
	ESeatOccupantDeathAction OccupantDeathAction; // 0x8e4
	USoundMix* SoundMix; // 0x8e8
	char bIsExterior : 1; // 0x8f0
	USoundBase* ExitSound; // 0x8f8
	USoundBase* EnterSound; // 0x900
	char bHasPushedSoundMix : 1; // 0x908
	UInputComponent* SeatInput; // 0x910
	AActor* SeatOwner; // 0x918
	int32_t SeatIndex; // 0x920
	float EntryTime; // 0x930
	float SwitchTime; // 0x934
	float ExitTime; // 0x938
	char bHidesPlayerNameHUDIndicator : 1; // 0x93c
	TArray<AHLLArmourWeapon*> OwnedWeapons; // 0x960
};

struct UHLLRoundSummaryDetails : UUserWidget {
	EViewMode CurrentViewMode; // 0x230
	UShooterGameViewportClient* ViewportClient; // 0x238
	TArray<UHLLRoundSummaryStat*> StatWidgets; // 0x240
	char bMatchEnded : 1; // 0x250
	bool ViewingPersonal; // 0x251
	int32_t MaxRows; // 0x254
	float StatUpdateFrequency; // 0x258
	UHLLTeamContainer* TeamContainerClass; // 0x268
	UHLLRoundSummaryStat* StatWidgetClass; // 0x270
	UHLLTeamContainer* AxisTeamData; // 0x278
	UHLLTeamContainer* AlliedTeamData; // 0x280
	UNamedSlot* LHSSlot; // 0x288
	UNamedSlot* RHSSlot; // 0x290
	UTextBlock* WinScoreText; // 0x298
	UTextBlock* LHSTeamName; // 0x2a0
	UTextBlock* RHSTeamName; // 0x2a8
	UTextBlock* LHSPlayerCount; // 0x2b0
	UTextBlock* RHSPlayerCount; // 0x2b8
	UImage* LHSTeamIcon; // 0x2c0
	UImage* RHSTeamIcon; // 0x2c8
	UWidget* CommendationHint; // 0x2d0
	UUniformGridPanel* StatGridPanel; // 0x2d8
	UWidgetSwitcher* ContentSwitcher; // 0x2e0
	UTextBlock* ServerPopulationText; // 0x2e8
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

struct UShooterCheatManager : UCheatManager {
	char bGodMode : 1; // 0x78
};

struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xe0
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UHLLMedicIndicator : UHLLIndicatorBase {
	UTextBlock* DistanceText; // 0x2a8
	UTextBlock* PlayerName; // 0x2b0
};

struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct UHLLAimAssistManager : UWorldSubsystem {
	UHLLAimAssistSettingsDataAsset* AimAssistSettingsAsset; // 0x30
};

struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x438
	int32_t PreviousLODLevel; // 0x43c
	int32_t MinLOD; // 0x440
	int32_t SubDivisionStepSize; // 0x444
	UStaticMesh* StaticMesh; // 0x448
	FColor WireframeColorOverride; // 0x450
	char bEvaluateWorldPositionOffset : 1; // 0x454
	char bOverrideWireframeColor : 1; // 0x454
	char bOverrideMinLod : 1; // 0x454
	char bOverrideNavigationExport : 1; // 0x454
	char bForceNavigationObstacle : 1; // 0x454
	char bDisallowMeshPaintPerInstance : 1; // 0x454
	char bIgnoreInstanceForTextureStreaming : 1; // 0x454
	char bOverrideLightMapRes : 1; // 0x454
	char bCastDistanceFieldIndirectShadow : 1; // 0x455
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x455
	char bUseSubDivisions : 1; // 0x455
	char bUseDefaultCollision : 1; // 0x455
	char bReverseCulling : 1; // 0x455
	int32_t OverriddenLightMapRes; // 0x458
	float DistanceFieldIndirectShadowMinVisibility; // 0x45c
	float DistanceFieldSelfShadowBias; // 0x460
	float StreamingDistanceMultiplier; // 0x464
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x468
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x478
	FLightmassPrimitiveSettings LightmassSettings; // 0x488
};

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x410
	TArray<ULandscapeSplineSegment*> Segments; // 0x420
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x430
};

struct UWGT_RadialMarkers_Segment_C : UHLLRadialMenu_MarkersSegment {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	USizeBox* IconSizer; // 0x290
	UImage* SegmentBG; // 0x298
	FLinearColor DefaultBGColor; // 0x2a0
	FLinearColor DefaultColor; // 0x2b0
	UMaterialInstanceDynamic* DynMatSegmentBG; // 0x2c0
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
	FRootMotionSourceGroup CurrentRootMotion; // 0x4d8
	FRootMotionMovementParams RootMotionParams; // 0x5a0
	FVector AnimRootMotionVelocity; // 0x5e0
};

struct AReconVehiclePassengerSeat : AVehicleSeatBase {
	USceneComponent* InteriorMeshAttachmentRoot; // 0x978
	UStaticMeshComponent* InteriorMesh; // 0x980
	USeatCameraController* CameraController; // 0x988
};

struct UW_HoverToolTip_C : UUserWidget {
	UTextBlock* TextBlock_1; // 0x230
	FText Text_Tooltip; // 0x238
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe0
};

struct UHTP_Widget_Role_Loadout_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UImage* bottomline; // 0x238
	UBPW_EquipmentItem_C* BPW_EquipmentItem; // 0x240
	UTextBlock* label_slotType; // 0x248
	UTextBlock* txt_primaryName; // 0x250
	EWeaponType Weapon; // 0x258
	E_SlotTypes SlotType; // 0x259
	E_SlotSizes SlotSize; // 0x25a
};

struct UVaultingComponent : UActorComponent {
	float MinObstacleHeight; // 0xb0
	float MaxObstacleHeight; // 0xb4
	float MaxObstacleThicknessToVaultOver; // 0xb8
	float MaxDistanceToObstacle; // 0xbc
	float MaxAllowedAngleFromFacingObstacleStraight; // 0xc0
	float MinOpeningWidthForVaulting; // 0xc4
	float MinOpeningHeightForVaulting; // 0xc8
	float MaxClimbableObstacleHeightStillClassifiedAsVault; // 0xcc
};

struct UHLLUI_LoadoutTooltip : UUserWidget {
	UTextBlock* ItemName; // 0x230
	UTextBlock* RequirementText; // 0x238
	UShooterGameViewportClient* ViewportClient; // 0x240
};

struct UHLLUI_Credits : UUserWidget {
	UScrollBox* CreditsScroller; // 0x230
	float AutoScrollSpeed; // 0x238
	float LeadEmptySpaceHeight; // 0x240
	UStringTable* RolesStringTable; // 0x248
	UStringTable* DepartmentsStringTable; // 0x250
	UDataTable* CreditsInfo; // 0x258
	UDataTable* OrganisationInfo; // 0x260
	UHLLUI_CreditsOrganisation* OrganisationWidget; // 0x268
	UHLLUI_CreditsCategory_Department* DepartmentWidget; // 0x270
	UHLLUI_CreditsCategory_RoleAndMembers* RolesAndMembersWidget; // 0x278
	TMap<FName, UHLLUI_CreditsOrganisation*> OrganisationOverrides; // 0x280
	TMap<FName, UHLLUI_CreditsCategory_Department*> DepartmentOverrides; // 0x2d0
	TMap<FName, UHLLUI_CreditsCategory_RoleAndMembers*> RolesAndMembersOverrides; // 0x320
};

struct UPlatoonManagementStack : UUserWidget {
	UBorder* RequestsContainer; // 0x230
	UBorder* NotificationsContainer; // 0x248
	UPlatoonManagementStackNotification* NotificationWidget; // 0x250
	TArray<FPlatoonManagementNotification> PendingNotifications; // 0x258
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
	char bCastStaticShadow : 1; // 0x38c
	char bCastShadowAsTwoSided : 1; // 0x38c
	char bCastFarShadow : 1; // 0x38c
	char bAffectDistanceFieldLighting : 1; // 0x390
	FLightingChannels LightingChannels; // 0x391
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x394
	char bRenderCustomDepth : 1; // 0x394
	int32_t CustomDepthStencilValue; // 0x398
	float LDMaxDrawDistance; // 0x39c
	FLightmassPrimitiveSettings LightmassSettings; // 0x3a0
	int32_t CollisionMipLevel; // 0x3b8
	int32_t SimpleCollisionMipLevel; // 0x3bc
	float CollisionThickness; // 0x3c0
	FBodyInstance BodyInstance; // 0x3c8
	char bGenerateOverlapEvents : 1; // 0x4f8
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4f8
	int32_t ComponentSizeQuads; // 0x4fc
	int32_t SubsectionSizeQuads; // 0x500
	int32_t NumSubsections; // 0x504
	char bUsedForNavigation : 1; // 0x508
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x508
	bool bUseDynamicMaterialInstance; // 0x50c
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x50d
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x50e
	bool bHasLayersContent; // 0x50f
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x510
};

struct UStaticMesh : UStreamableRenderAsset {
	FPerPlatformInt MinLOD; // 0x60
	float LpvBiasMultiplier; // 0x64
	TArray<FStaticMaterial> StaticMaterials; // 0x68
	float LightmapUVDensity; // 0x78
	int32_t LightMapResolution; // 0x7c
	int32_t LightMapCoordinateIndex; // 0x80
	float DistanceFieldSelfShadowBias; // 0x84
	UBodySetup* BodySetup; // 0x88
	int32_t LODForCollision; // 0x90
	char bGenerateMeshDistanceField : 1; // 0x94
	char bStripComplexCollisionForConsole : 1; // 0x94
	char bHasNavigationData : 1; // 0x94
	char bSupportUniformlyDistributedSampling : 1; // 0x94
	char bSupportPhysicalMaterialMasks : 1; // 0x94
	char bIsBuiltAtRuntime : 1; // 0x94
	char bAllowCPUAccess : 1; // 0x94
	char bSupportGpuUniformlyDistributedSampling : 1; // 0x95
	TArray<UStaticMeshSocket*> Sockets; // 0xb8
	FVector PositiveBoundsExtension; // 0xd8
	FVector NegativeBoundsExtension; // 0xe4
	FBoxSphereBounds ExtendedBounds; // 0xf0
	int32_t ElementToIgnoreForTexFactor; // 0x10c
	TArray<UAssetUserData*> AssetUserData; // 0x110
	UObject* EditableMesh; // 0x128
	UNavCollisionBase* NavCollision; // 0x130
};

struct UBPW_SpeakingPlayersListItem_C : USpeakingPlayersListItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
	UImage* Image_1; // 0x250
	UImage* PlatformIcon; // 0x258
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

struct UHLLAdminCamUI : UUserWidget {
	UWidget* PlayerSearchPanel; // 0x230
	UWidget* KickBanPanel; // 0x238
	UWidget* HotkeyPanel; // 0x240
	UScrollBox* PlayerSearchEntryBox; // 0x248
	UEditableTextBox* PlayerNameFilter; // 0x250
	UEditableTextBox* KickBanReasonEntry; // 0x258
	UProgressBar* SpeedBar; // 0x260
	UTextBlock* NumPlayersText; // 0x268
	UHLLAdminCamPlayerEntry* PlayerEntryWidget; // 0x270
	TArray<UHLLAdminCamPlayerEntry*> PlayerWidgets; // 0x278
	AShooterPlayerState* SelectedPlayer; // 0x288
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UCameraShake : UObject {
	char bSingleInstance : 1; // 0x28
	float OscillationDuration; // 0x2c
	float OscillationBlendInTime; // 0x30
	float OscillationBlendOutTime; // 0x34
	FROscillator RotOscillation; // 0x38
	FVOscillator LocOscillation; // 0x5c
	FFOscillator FOVOscillation; // 0x80
	float AnimPlayRate; // 0x8c
	float AnimScale; // 0x90
	float AnimBlendInTime; // 0x94
	float AnimBlendOutTime; // 0x98
	float RandomAnimSegmentDuration; // 0x9c
	UCameraAnim* Anim; // 0xa0
	char bRandomAnimSegment : 1; // 0xa8
	APlayerCameraManager* CameraOwner; // 0xc0
	float ShakeScale; // 0x148
	float OscillatorTimeRemaining; // 0x14c
	UCameraAnimInst* AnimInst; // 0x150
};

struct UServerQueueProgressWidget : UUserWidget {
	UTextBlock* BodyText; // 0x248
	UButton* CancelButton; // 0x250
	UWidget* MatchOverIndicator; // 0x258
	AServerQueueBeaconClient* BeaconClient; // 0x260
};

struct ABP_Powerline_Master_C : AActor {
	UStaticMeshComponent* Cable2; // 0x220
	UStaticMeshComponent* Cable1; // 0x228
	UStaticMeshComponent* Connector2; // 0x230
	UStaticMeshComponent* Connector1; // 0x238
	UStaticMeshComponent* SM_PowerPole; // 0x240
	USceneComponent* Root; // 0x248
	TArray<ABP_Powerline_Master_C*> Powerlines; // 0x250
	TArray<ABP_Powerline_Master_C*> Temp Powerlines; // 0x260
	ABP_Powerline_Master_C* Closest Powerline; // 0x270
	float Closest Distance; // 0x278
	int32_t Powerline Target; // 0x27c
	int32_t Number Of Powerlines; // 0x280
	bool Has Lamp; // 0x284
	bool Has Transformer; // 0x285
	bool Has Frames; // 0x286
	bool Has Pegs; // 0x287
	bool Light On; // 0x288
	UMaterialInstanceDynamic* DMI_Main; // 0x290
	float Rust Opacity; // 0x298
	float Rust Tweaker; // 0x29c
	float Rust Flipper; // 0x2a0
	FLinearColor Color; // 0x2a4
	TArray<ABP_Powerline_Master_C*> Sorted Powerlines; // 0x2b8
	UStaticMesh* Cable 1 Style; // 0x2c8
	UStaticMesh* Cable 2 Style; // 0x2d0
	float Light Intensity; // 0x2d8
	TSoftObjectPtr<ABP_Powerline_Master_C> Powerline; // 0x2e0
	bool NewVar_1; // 0x308
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe0
};

struct UArmyCommanderRole : UUserWidget {
	char bReadOnly : 1; // 0x230
	UImage* RoleIcon; // 0x238
	UTextBlock* PlayerName; // 0x240
	UWidgetSwitcher* ButtonSwitcher; // 0x248
	UUserWidget* ClaimRole; // 0x250
	UUserWidget* ReleaseRole; // 0x258
};

struct UMRMeshComponent : UPrimitiveComponent {
	UMaterialInterface* Material; // 0x418
	bool bCreateMeshProxySections; // 0x420
	bool bUpdateNavMeshOnMeshUpdate; // 0x421
	bool bNeverCreateCollisionMesh; // 0x422
	UBodySetup* CachedBodySetup; // 0x428
	TArray<UBodySetup*> BodySetups; // 0x430
	UMaterialInterface* WireframeMaterial; // 0x440
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct UArtyTurnControllerComponent : UPitchYawControllerComponent {
	AHLLSeat_ArtilleryGunner* GunnerSeat; // 0x488
	AHLLSeat_ArtilleryLoader* LoaderSeat; // 0x490
	UCapsuleComponent* CharacterTurretGuard; // 0x498
	UAudioComponent* TurnAudio; // 0x4a0
	UVibrationEventController* TurnVibrationController; // 0x4a8
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x74
};

struct UWGT_RoundSummaryStat_C : UHLLRoundSummaryStat {
	UImage* Image_1; // 0x290
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40
};

struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
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

struct UHLLSectorIndicator : UHLLIndicatorBase {
	UTextBlock* SectorNameText; // 0x2a8
	UProgressBar* CaptureProgress_Friendly; // 0x2b0
	UProgressBar* CaptureProgress_Enemy; // 0x2b8
	UImage* CurrentCap; // 0x2c0
	UTextBlock* DistanceText; // 0x2c8
	UImage* ResourceBrush; // 0x2d0
	UImage* FlagBrush; // 0x2d8
	UWidgetAnimation* AnimExpandCollapse; // 0x2e0
	bool bExpandedState; // 0x2e8
	float ExpandedAngle; // 0x2ec
	FLinearColor Colour_Neutral; // 0x2f0
	FLinearColor Colour_Friendly; // 0x300
	FLinearColor Colour_Enemy; // 0x310
};

struct USoundNodeVehicleEngine : USoundNode {
	char bEqualPowerCrossfade : 1; // 0x48
	TArray<FVehicleEngineDatum> EngineSamples; // 0x50
	float CurrentRPM; // 0x64
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

struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0xe8
	TArray<UCurveLinearColor*> GradientCurves; // 0xf0
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UOptionsHeader_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* HeaderText; // 0x238
	FText HeaderValue; // 0x240
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
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

struct UWGT_BarracksPanel_V2_C : UHLLUI_CharacterSelection {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* FadeInRightColumn; // 0x360
	UWidgetAnimation* FadeInLeftColumn; // 0x368
	UWidgetAnimation* Fade; // 0x370
	UWidgetAnimation* TitleChange; // 0x378
	UWidgetAnimation* RightPanelChange; // 0x380
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x388
	USlider* CharacterSpinSlider; // 0x390
	UVerticalBox* CosmeticDetailsVBox; // 0x398
	UOptionButton_V2_C* FactionSwitcher; // 0x3a0
	UHorizontalBox* HBox_Switcher; // 0x3a8
	USizeBox* LeftSBox; // 0x3b0
	UTabbedButtonContainer_V2_C* LoadoutTabbedButtonContainer; // 0x3b8
	USizeBox* RightSBox; // 0x3c0
	UVerticalBox* RoleDetailsVBox; // 0x3c8
	UTabbedButtonContainer_V2_C* RoleTabbedButtonContainer; // 0x3d0
	UScrollBox* SB_Roles; // 0x3d8
	UTextBlock* TeamCategory; // 0x3e0
	UMainMenuWidget_V2_C* MainMenu; // 0x3e8
	int32_t ButtonIndex; // 0x3f0
	UWGT_RoleSelectItem_V2_C* SelectedRole; // 0x3f8
	bool bFocusedOnRoles; // 0x400
	UMatchmakingScreen_V2_C* MatchmakingScreen; // 0x408
	bool bWasFocused; // 0x410
	int32_t FactionIndex; // 0x414
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
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

struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xe0
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220
};

struct AHLLSupplyDropBase : AActor {
	USceneComponent* SceneRoot; // 0x288
	UStaticMeshComponent* Mesh; // 0x290
	UHLLMapComponent* MapComponent; // 0x298
	UHLLIndicatorComponent* IndicatorComponent; // 0x2a0
	UHLLSimpleHealthComponent* HealthComponent; // 0x2a8
	float DismantleTime; // 0x2b0
	FText DisplayName; // 0x2b8
	ETeam OwningTeam; // 0x2d0
	EHLLDamageFilterType DamageFilterType; // 0x2d1
	AShooterPlayerState* SpawnedByPlayer; // 0x2d8
};

struct UHLLMapIcon_Player : UHLLMapIconBase {
	char bIsHighlighted : 1; // 0x368
	UWidgetAnimation* PlayerPingAnimation; // 0x378
	UWidgetAnimation* HighlightAnimation; // 0x380
	UTextBlock* PlatoonID; // 0x388
	UImage* Icon_Star; // 0x390
	UImage* LocalPlayerFOV; // 0x398
	UWidget* RotationContainer; // 0x3a0
};

struct UPlatoonMemberCommander : UPlatoonMemberBase {
	UBorder* Colouriser; // 0x278
	UWidgetAnimation* Anim_NoCommander; // 0x280
	FLinearColor WarningColour; // 0x288
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x58
	char bFireEventsWhenBackwards : 1; // 0x58
	EFireEventsAtPosition EventPosition; // 0x5c
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x60
	TArray<UMovieSceneSection*> Sections; // 0x70
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
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

struct UHLLIndicatorBase : UUserWidget {
	float ViewDistance; // 0x230
	float EnemyViewDistance; // 0x234
	float VerticalOffset; // 0x238
	FLinearColor EnemyTint; // 0x23c
	FVector2D IconAlignment; // 0x24c
	char bFadeWithHUD : 1; // 0x254
	char bScaleOverDistance : 1; // 0x254
	char bCustomColourise : 1; // 0x254
	char bShowEnemy : 1; // 0x254
	char bShowEnemyInAdminCamera : 1; // 0x254
	char bHideWhenAimedAt : 1; // 0x254
	char bOnlyHideInADS : 1; // 0x254
	int32_t ZPriority; // 0x258
	float AngleTolerance; // 0x25c
	char bEnableOcclusionTest : 1; // 0x260
	ECollisionChannel OcclusionTraceChannel; // 0x261
	TWeakObjectPtr<UHLLIndicatorComponent> AssignedComponent; // 0x264
	UImage* Icon; // 0x270
};

struct UWidgetComponent : UMeshComponent {
	EWidgetSpace Space; // 0x438
	EWidgetTimingPolicy TimingPolicy; // 0x439
	UUserWidget* WidgetClass; // 0x440
	FIntPoint DrawSize; // 0x448
	bool bManuallyRedraw; // 0x450
	bool bRedrawRequested; // 0x451
	float RedrawTime; // 0x454
	FIntPoint CurrentDrawSize; // 0x460
	bool bDrawAtDesiredSize; // 0x468
	FVector2D Pivot; // 0x46c
	bool bReceiveHardwareInput; // 0x474
	bool bWindowFocusable; // 0x475
	EWindowVisibility WindowVisibility; // 0x476
	bool bApplyGammaCorrection; // 0x477
	ULocalPlayer* OwnerPlayer; // 0x478
	FLinearColor BackgroundColor; // 0x480
	FLinearColor TintColorAndOpacity; // 0x490
	float OpacityFromTexture; // 0x4a0
	EWidgetBlendMode BlendMode; // 0x4a4
	bool bIsTwoSided; // 0x4a5
	bool TickWhenOffscreen; // 0x4a6
	UUserWidget* Widget; // 0x4a8
	UBodySetup* BodySetup; // 0x4d0
	UMaterialInterface* TranslucentMaterial; // 0x4d8
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x4e0
	UMaterialInterface* OpaqueMaterial; // 0x4e8
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x4f0
	UMaterialInterface* MaskedMaterial; // 0x4f8
	UMaterialInterface* MaskedMaterial_OneSided; // 0x500
	UTextureRenderTarget2D* RenderTarget; // 0x508
	UMaterialInstanceDynamic* MaterialInstance; // 0x510
	bool bAddedToScreen; // 0x518
	bool bEditTimeUsable; // 0x519
	FName SharedLayerName; // 0x51c
	int32_t LayerZOrder; // 0x524
	EWidgetGeometryMode GeometryMode; // 0x528
	float CylinderArcAngle; // 0x52c
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

struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct UHLLArmourHealthComponent : UActorComponent {
	FHLLArmourDeltaInfo ArmourInfo; // 0xc8
	float ExplodeDelay; // 0x1f8
	float MinTimeBetweenRepairSounds; // 0x1fc
	USoundBase* RepairSound; // 0x200
	USoundBase* RepairCompleteSound; // 0x208
	AController* KilledInstigator; // 0x220
	UHLLVehicleDamageFX* DamageEffectData; // 0x228
	AHLLVehicleWreck* WreckActor; // 0x230
	float DeathExplosionDamage; // 0x238
	float DeathExplosionRadius; // 0x23c
	float DeathExplosionSuppression; // 0x240
	float DeathExplosionSuppressionRadius; // 0x244
	UDamageType* ExplosionDamageType; // 0x248
	AShooterImpactEffect* ExplosionEffect; // 0x250
	TMap<FName, FHLLActiveDamageFX> ActiveDamageFX; // 0x258
	UPrimitiveComponent* OverrideReferenceComponent; // 0x2a8
	EHLLArmourRating DefaultArmourRating; // 0x2b0
	float DefaultResistance[0x4]; // 0x2b4
	TArray<FArmouredBody> ArmouredBodies; // 0x2c8
	TArray<FArmourBox> Compartments; // 0x2d8
};

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneSequencePlayer : UObject {
	FMulticastInlineDelegate OnPlay; // 0x408
	FMulticastInlineDelegate OnPlayReverse; // 0x418
	FMulticastInlineDelegate OnStop; // 0x428
	FMulticastInlineDelegate OnPause; // 0x438
	FMulticastInlineDelegate OnFinished; // 0x448
	EMovieScenePlayerStatus Status; // 0x458
	char bReversePlayback : 1; // 0x45c
	UMovieSceneSequence* Sequence; // 0x460
	FFrameNumber StartTime; // 0x468
	int32_t DurationFrames; // 0x46c
	int32_t CurrentNumLoops; // 0x470
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a0
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x828
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x838
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840
	float CheckpointSaveMaxMSPerFrame; // 0xc54
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xc88
	bool bIsLocalReplay; // 0xce8
	TArray<APlayerController*> SpectatorControllers; // 0xcf0
};

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 1; // 0x38
	int32_t MaxMobileCascades; // 0x3c
	EMobileMSAASampleCount MobileMSAASampleCount; // 0x40
	char bMobileUseLegacyShadingModel : 1; // 0x44
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
	char bAnisotropicBRDF : 1; // 0x64
	int32_t ReflectionCaptureResolution; // 0x68
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x6c
	char bForwardShading : 1; // 0x6c
	char bVertexFoggingForOpaque : 1; // 0x6c
	char bAllowStaticLighting : 1; // 0x6c
	char bUseNormalMapsForStaticLighting : 1; // 0x6c
	char bGenerateMeshDistanceFields : 1; // 0x6c
	char bEightBitMeshDistanceFields : 1; // 0x6c
	char bGenerateLandscapeGIData : 1; // 0x6c
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
	char bSupport16BitBoneIndex : 1; // 0xe8
	char bGPUSkinLimit2BoneInfluences : 1; // 0xe8
	char bSupportDepthOnlyIndexBuffers : 1; // 0xe8
	char bSupportReversedIndexBuffers : 1; // 0xe8
	char bSupportMaterialLayers : 1; // 0xe8
	char bLPV : 1; // 0xe8
};

struct URuntimeVirtualTexture : UObject {
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x28
	bool bCompressTextures; // 0x29
	bool bEnable; // 0x2a
	bool bClearTextures; // 0x2b
	bool bSinglePhysicalSpace; // 0x2c
	bool bPrivateSpace; // 0x2d
	bool bEnableScalability; // 0x2e
	int32_t Size; // 0x30
	int32_t TileCount; // 0x34
	int32_t TileSize; // 0x38
	int32_t TileBorderSize; // 0x3c
	int32_t StreamLowMips; // 0x40
	URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48
	bool bEnableCompressCrunch; // 0x50
	int32_t RemoveLowMips; // 0x54
};

struct UReplicationGraphNode : UObject {
	TArray<UReplicationGraphNode*> AllChildNodes; // 0x28
};

struct AReplicationGraphDebugActor : AActor {
	UReplicationGraph* ReplicationGraph; // 0x220
	UNetReplicationGraphConnection* ConnectionManager; // 0x228
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

struct ATrackedVehicle : AWheeledVehicle {
	UTracksComponent* Tracks; // 0x290
	USuspensionsComponent* Suspensions; // 0x298
};

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct USmoothNetworkedMovement : UActorComponent {
	char bInterpMovement : 1; // 0xb0
	char bInterpRotation : 1; // 0xb0
	float InterpLocationTime; // 0xb4
	float InterpRotationTime; // 0xb8
	float InterpLocationMaxLagDistance; // 0xbc
	float InterpLocationSnapToTargetDistance; // 0xc0
	float FinalLocationInterpSpeed; // 0xc4
	USceneComponent* UpdatedComponent; // 0xc8
};

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct AShooterWeapon_Repair : AShooterWeapon {
	float TimeBetweenRepairs; // 0x8b8
	int32_t RepairPerSecond; // 0x8bc
	float RepairRange; // 0x8c0
	char RepairActionScoreInterval; // 0x8c4
	FName RepairActionScore; // 0x8c8
	UParticleSystem* SurfaceParticle; // 0x8d0
	USoundBase* SurfaceSound; // 0x8d8
	UParticleSystemComponent* RepairPSC; // 0x8e0
	UAudioComponent* RepairASC; // 0x8e8
	TWeakObjectPtr<UHLLArmourHealthComponent> CurrentRepairTarget; // 0x8f0
	float LastRepairTime; // 0x8f8
	int32_t RepairCounter; // 0x8fc
	UVibrationEventController* WeldVibrationEventController; // 0x900
};

struct UUnitLeaderSettings_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UGridPanel* GridPanel_84; // 0x238
	UOptionButton_V2_C* InvitePlayersButton; // 0x240
	UBorder* RootBorder; // 0x248
	UOptionButton_V2_C* UnitDesignationToggle; // 0x250
	UOptionButton_V2_C* UnitPrivacyToggle; // 0x258
	UOptionButton_V2_C* VOIPToggle; // 0x260
	UDeploymentScreen_V2_C* DeploymentScreen; // 0x268
};

struct ULoadingScreensData : UDataAsset {
	FSlateColor BackgroundBrushColor; // 0x30
	UMaterialInterface* ImagePannerMaterial; // 0x58
	FSlateColor ImageDarkeningBrushColor; // 0x60
	UMaterialInterface* VignetteMaterial; // 0x88
	FSlateColor VignetteImageColor; // 0x90
	UMaterialInterface* TextGritMaterial; // 0xb8
	FSlateColor TextGritColor; // 0xc0
	UMaterialInterface* ScratchesMaterial; // 0xe8
	FSlateColor ScratchesColor; // 0xf0
	FSlateColor GameModeColor; // 0x118
	FSlateFontInfo GameModeFont; // 0x140
	FSlateColor MapNameColor; // 0x190
	FSlateFontInfo MapNameFont; // 0x1b8
	FSlateColor DateColor; // 0x208
	FSlateFontInfo DateFont; // 0x230
	FSlateColor LocationColor; // 0x280
	FSlateFontInfo LocationFont; // 0x2a8
	FSlateColor DateLocationSeparatorLineColor; // 0x2f8
	UTexture2D* ThrobberImage; // 0x320
	UDataTable* MapDataTable; // 0x328
	UDataTable* NonMapDataTable; // 0x330
};

struct UHLLUseContext_HealWeapon : UHLLUseContextBase {
	URichTextBlock* HealText; // 0x238
	UImage* RadialProg; // 0x240
	UImage* IconImage; // 0x248
};

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40
	EMaterialSamplerType SamplerType; // 0x48
	char IsDefaultMeshpaintTexture : 1; // 0x49
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
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

struct UHLLAnimInstance_ArtilleryBase : UAnimInstance {
	AHLLArtilleryBase* ArtilleryPiece; // 0x270
	AHLLArmourWeapon* ArtilleryWeapon; // 0x278
	float TurretYaw; // 0x280
	float TurretPitch; // 0x284
	float LoadingProgress; // 0x288
	bool bIsLoading; // 0x28c
};

struct AShooterCharacter : ACharacter {
	USceneComponent* Mesh1PTransform; // 0x4e0
	USkeletalMeshComponent* Mesh1P; // 0x4e8
	USkelMeshWithLinkedBoundsComponent* HeadMesh; // 0x4f0
	UStaticMeshComponent* Helmet; // 0x4f8
	FName HelmetAttachSocketName; // 0x500
	UPostProcessComponent* ADS_DOF_PostProcess; // 0x508
	UClientBotPlayerInputComponent* m_clientBotPlayerInputComponent; // 0x510
	TArray<TSoftClassPtr<UObject>> DebugInventory; // 0x518
	TArray<FString> LocalDebugInventory; // 0x528
	AShooterWeapon* CurrentWeapon; // 0x538
	char bWantsToRun : 1; // 0x54c
	USoundCue* RunLoopSound; // 0x568
	USoundCue* RunStopSound; // 0x570
	float MinTimeBeforeRunStopSound; // 0x578
	float ProneEyeHeight; // 0x57c
	float EyeHeightTransitionSpeed; // 0x580
	FHeadBobSettings WalkingHeadBob; // 0x584
	FHeadBobSettings SprintingHeadBob; // 0x598
	FHeadBobSettings ProneHeadBob; // 0x5ac
	float SprintingStrafeMultipliler; // 0x5c0
	TArray<AShooterWeapon*> Inventory; // 0x670
	EHLLInventorySlot LastEquippedSlot; // 0x680
	EHLLInventorySlot LastEquippedWeaponSlot; // 0x681
	UHLLMapComponent* MapComponent; // 0x688
	char bIsViewingMap : 1; // 0x690
	UInputComponent* MapModeBlockedInput; // 0x698
	float SuppressionRecoveryRate; // 0x6b0
	float SuppressionLockTimer; // 0x6b4
	float MaxSuppression; // 0x6b8
	UMaterialInterface* SuppressionBlendable; // 0x6c0
	USoundBase* SuppressionLocalSound; // 0x6c8
	UCurveFloat* Suppression_SoundCurve; // 0x6d0
	UCurveFloat* Suppression_ShakeCurve_Explosion; // 0x6d8
	UCurveFloat* Suppression_ShakeCurve_Firearm; // 0x6e0
	UCameraShake* Suppression_CamShake_Explosion; // 0x6e8
	UCameraShake* Suppression_CamShake_Firearms; // 0x6f0
	FFrameSuppressionInfo ReplicatedSuppressionInfo; // 0x6f8
	UMaterialInstanceDynamic* m_PostProcessDMI; // 0x710
	UPostProcessComponent* PlayerPostProcess; // 0x718
	UAudioComponent* Suppress_Heartbeat; // 0x720
	FHLLUseContext UseContext; // 0x728
	char bUseContextLocked : 1; // 0x734
	char bUseContextActive : 1; // 0x734
	FMulticastInlineDelegate OnWeaponChangedDelegate; // 0x748
	FMulticastInlineDelegate OnStateChangedDelegate; // 0x758
	float CriticalTime; // 0x768
	float HoldToLetGoTime; // 0x76c
	int32_t MaxCriticalChances; // 0x770
	float HealthFXInterp_Speed; // 0x778
	float HealthPulseSpeedLow; // 0x780
	float HealthPulseSpeedHigh; // 0x784
	float SplatterLockTime; // 0x788
	float SplatterFadeSpeed; // 0x78c
	float Health; // 0x79c
	float WoundedBleedTime; // 0x7a0
	float WoundedBleedAmount; // 0x7a4
	EHLLHealthState HealthState; // 0x7a8
	FHLLHealthDeltaInfo LastHealthDeltaInfo; // 0x7b0
	FRepHealData ReplicatedHealInfo; // 0x9e4
	UShapeComponent* HealingCollisionShape; // 0x9f0
	FName HealingCollisionAttachmentSocket; // 0x9f8
	UAudioComponent* VoiceAudioComponent; // 0xa00
	UAudioComponent* BreathAudioComponent; // 0xa08
	UHLLVoiceData* VoiceData; // 0xa10
	float MinTimeBetweenBreaths; // 0xa18
	float MinTimeBetweenVocalisations; // 0xa1c
	TMap<EHLLDamageType, TSoftObjectPtr<USoundBase>> DamageSounds; // 0xa20
	float MinTimeBetweenImpactSounds; // 0xa70
	float WoundedLoopMinVolume; // 0xa84
	FSurfaceSounds LandSounds; // 0xa88
	UAudioComponent* HealthLoopAC; // 0xbe0
	float WeaponSway_ProneModifier; // 0xbe8
	float WeaponSway_CrouchedModifier; // 0xbec
	float WeaponSway_StandingModifier; // 0xbf0
	float WeaponSway_FallingModifier; // 0xbf4
	float MinTimeBetweenJumps; // 0xc34
	FKillTimerInfo KillTimerInfo; // 0xc48
	char SectorKillTime; // 0xc50
	char SectorVehicleKillTime; // 0xc51
	char DrownKillTime; // 0xc52
	float KillTimer_FXInterpSpeed; // 0xc54
	float TotemPollingRepulsionPower; // 0xc5c
	UCurveFloat* FallDamageCurve; // 0xc68
	UCameraShake* FallCameraShake; // 0xc70
	UCameraShake* ProneCameraShake; // 0xc78
	UCameraShake* ProneLandedCameraShake; // 0xc80
	UCameraShake* CrouchCameraShake; // 0xc88
	UCameraShake* StandCameraShake; // 0xc90
	UCameraShake* JumpCameraShake; // 0xc98
	UCameraShake* ThrowCameraShake; // 0xca0
	UCameraShake* StartSprintingCameraShake; // 0xca8
	UCameraShake* StopSprintingCameraShake; // 0xcb0
	float MinStanceTransitionTime; // 0xcc0
	float LastStanceTransitionTime; // 0xcc4
	AHLLSeat* CurrentSeat; // 0xcc8
	FRepSeatPendingTransition RepSeatTransition; // 0xcd0
	FMulticastInlineDelegate OnCharacterSeatChange; // 0xcd8
	UPostProcessComponent* Close_DOF_PostProcess; // 0xd00
	UAudioComponent* AC_TurnInPlace; // 0xd10
	USoundBase* TurnInPlaceSound; // 0xd18
	USoundBase* TurnInPlaceStopSound; // 0xd20
	UHLLGoreComponent* GoreComponent; // 0xd28
	FVector DeployCameraOffset; // 0xd30
	FVector4 DeployCameraRotationLimits; // 0xd40
	float DeployedCamBlendAlpha; // 0xd50
	float DeployCameraBlendSpeed; // 0xd54
	float SpeedScaleFactor_Default; // 0xd58
	float SpeedScaleFactor_Crouched; // 0xd5c
	float SpeedScaleFactor_Prone; // 0xd60
	UHLLFootstepData* FootstepData; // 0xd68
	float HeadTiltAngle; // 0xd90
	float TiltBlendSpeed; // 0xd94
	FRigPivotSettings RigPivotSettings; // 0xdb0
	float ObstacleDistance; // 0xe18
	float ObstacleHeight; // 0xe1c
	EVaultingMoveType VaultingMoveType; // 0xe20
	UVaultingComponent* Vaulting; // 0xe28
	TWeakObjectPtr<UAudioComponent> UseContextAC; // 0xe50
	char bUseContextACStarted : 1; // 0xe58
	UInputComponent* m_grenadeInput; // 0xe60
	char bWantsToADS : 1; // 0xe6a
	char bIsTargeting : 1; // 0xe6a
	ETeam m_BackupTeam; // 0xe6b
	UHLLIndicatorComponent* PlayerIndicator; // 0xe78
	UHLLIndicatorComponent* MedicIndicator; // 0xe80
	UHLLIndicatorComponent* CriticalIndicator; // 0xe88
	FVector_NetQuantize RelativeHeadLocation; // 0xe9c
	FVector_NetQuantize RelativeMeshLocation; // 0xea8
	float CameraVerticalMovementSpeed; // 0xecc
	AActor* LastDamageCauser; // 0xee8
	float RagdollBlendAnimPercent; // 0xef0
	UAnimMontage* StandingDeathAnimations; // 0xef8
	UAnimMontage* CrouchedDeathAnimations; // 0xf00
	UAnimMontage* ProneDeathAnimations; // 0xf08
	UStaticMesh* BackerHelmetMesh; // 0xf18
	UStaticMesh* PreOrderHelmetMesh; // 0xf20
	USoundBase* EnterWaterSound; // 0xf28
	USoundBase* ExitWaterSound; // 0xf30
	float MinSplashZVeloc; // 0xf38
	float MinTimeBetweenSplashFX; // 0xf3c
	ULeaningComponent* Leaning; // 0xf50
	char bShowTPPMeshInFPP : 1; // 0xf58
	USkeletalMesh* PronePoseMesh; // 0xf68
	USkeletalMesh* CrouchPoseMesh; // 0xf70
	USkeletalMesh* StandingPoseMesh; // 0xf78
	float MaxAutoRunDoubleTapInterval; // 0xfd8
	ECharacterStance CharacterStance; // 0xfe4
	FName FPPCameraBone; // 0xfe8
	char bIsSpectatorMode : 1; // 0xff0
	TArray<UMaterialInstanceDynamic*> HandMaterials; // 0xff8
	UVibrationEventController* CrawlVibrationController; // 0x1010
	UVibrationEventController* JumpVibrationController; // 0x1018
	UVibrationEventController* DamageVibrationController; // 0x1020
	UVibrationEventController* CriticalVibrationController; // 0x1028
	UVibrationEventController* WoundedVibrationController; // 0x1030
};

struct UParticleSystemComponent : UFXSystemComponent {
	UParticleSystem* Template; // 0x410
	TArray<UMaterialInterface*> EmitterMaterials; // 0x418
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x428
	char bResetOnDetach : 1; // 0x439
	char bUpdateOnDedicatedServer : 1; // 0x439
	char bAllowRecycling : 1; // 0x439
	char bAutoManageAttachment : 1; // 0x439
	char bAutoAttachWeldSimulatedBodies : 1; // 0x439
	char bWarmingUp : 1; // 0x43a
	char bOverrideLODMethod : 1; // 0x43a
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x43a
	ParticleSystemLODMethod LODMethod; // 0x445
	EParticleSignificanceLevel RequiredSignificance; // 0x446
	TArray<FParticleSysParam> InstanceParameters; // 0x448
	FMulticastInlineDelegate OnParticleSpawn; // 0x458
	FMulticastInlineDelegate OnParticleBurst; // 0x468
	FMulticastInlineDelegate OnParticleDeath; // 0x478
	FMulticastInlineDelegate OnParticleCollide; // 0x488
	bool bOldPositionValid; // 0x498
	FVector OldPosition; // 0x49c
	FVector PartSysVelocity; // 0x4a8
	float WarmupTime; // 0x4b4
	float WarmupTickRate; // 0x4b8
	float SecondsBeforeInactive; // 0x4c0
	float MaxTimeBeforeForceUpdateTransform; // 0x4c8
	TArray<UParticleSystemReplay*> ReplayClips; // 0x4e8
	float CustomTimeDilation; // 0x500
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x558
	FName AutoAttachSocketName; // 0x560
	EAttachmentRule AutoAttachLocationRule; // 0x568
	EAttachmentRule AutoAttachRotationRule; // 0x569
	EAttachmentRule AutoAttachScaleRule; // 0x56a
	FMulticastInlineDelegate OnSystemFinished; // 0x598
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct AHLLArtilleryBase : AActor {
	float YawRate; // 0x288
	float MaxYawAngle; // 0x28c
	float PitchRate; // 0x290
	float MinPitchAngle; // 0x294
	float MaxPitchAngle; // 0x298
	float ServerUpdateTurretRate; // 0x29c
	UArtyBarrelControllerComponent* BarrelController; // 0x2a0
	UArtyTurnControllerComponent* TurnController; // 0x2a8
	UAudioComponent* PitchAudio; // 0x2b0
	UAudioComponent* YawAudio; // 0x2b8
	UAudioComponent* TurnAudio; // 0x2c0
	UHLLMapComponent* MapComponent; // 0x2c8
	float TurnSpeed; // 0x2d0
	ETeam Team; // 0x2d4
	FHLLArmourMetaData ArmourMetaData; // 0x2d8
	EHLLDamageFilterType DamageFilterType; // 0x2f8
	USkeletalMeshComponent* ArtilleryMesh; // 0x300
	UHLLArmourHealthComponent* ArmourHealth; // 0x308
	UHLLArmourInventory* ArmourInventory; // 0x310
	UHLLIndicatorComponent* IndicatorComponent; // 0x318
	UCapsuleComponent* CharacterTurretGuard; // 0x320
	AHLLSeat_ArtilleryGunner* GunnerSeatClass; // 0x328
	AHLLSeat_ArtilleryLoader* LoaderSeatClass; // 0x330
	AHLLSeat_ArtilleryGunner* GunnerSeat; // 0x338
	AHLLSeat_ArtilleryLoader* LoaderSeat; // 0x340
	AShooterPlayerState* SpawnedByPlayer; // 0x348
	UVibrationEventController* PitchVibrationController; // 0x350
	UVibrationEventController* YawVibrationController; // 0x358
	UVibrationEventController* TurnVibrationController; // 0x360
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UHLLArmourWeaponUI_AmmoItem : UUserWidget {
	UHLLArmourWeaponUI* OwningPanel; // 0x230
	char AmmoIndex; // 0x238
	UHLLKeyText* SelectKeyText; // 0x240
	UBorder* SelectionBorder; // 0x248
	UTextBlock* AmmoName; // 0x250
	UImage* AmmoIcon; // 0x258
	UTextBlock* AmmoClip; // 0x260
	UTextBlock* AmmoClips; // 0x268
	UTextBlock* MunitionsCost; // 0x270
	UWidgetSwitcher* MunitionsSwitcher; // 0x278
};

struct UKeyBindingButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBorder* EditingMode; // 0x238
	UTextBlock* PrimaryKey; // 0x240
	UButton* PrimaryKeyButton; // 0x248
	UWidgetSwitcher* Switcher; // 0x250
	FSlateColor NormalTextColor; // 0x258
	FSlateColor HoveredTextColor; // 0x280
	bool Hovered; // 0x2a8
	bool Editing; // 0x2a9
	FButtonStyle HighlightedButtonStyle; // 0x2b0
	FButtonStyle NotHighlightedButtonStyle; // 0x528
	FKey Key; // 0x7a0
	UKeyBinding_V2_C* Owner; // 0x7b8
};

struct UHLLMapTooltip_Player : UHLLTooltipBase {
	UTextBlock* PlayerName; // 0x260
	UTextBlock* PlayerIcon; // 0x268
	UTextBlock* PlayerDistance; // 0x270
};

struct UHLLIndicatorComponent : UActorComponent {
	UHLLIndicatorBase* IndicatorClass; // 0xb0
	char bAutoCreate : 1; // 0xb8
	char bWantsIndicator : 1; // 0xb8
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x410
	UBodySetup* BrushBodySetup; // 0x418
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct UHLLMarkers_MapMenu : UHLLMapContextWidget {
	UHLLMarkers_MapMenuItem* ItemClass; // 0x248
	TArray<UHLLMarkers_MapMenuItem*> Items; // 0x250
	UVerticalBox* Options; // 0x260
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AShooterPlayerController_Menu : APlayerController {
	char bIsZoomedIn : 1; // 0x580
	float ZoomOutTime; // 0x584
	float ZoomInTime; // 0x588
	EViewTargetBlendFunction BlendMode; // 0x58c
	float BlendPower; // 0x590
	UHLLMainMenuBase* MainMenuWidget; // 0x598
	ACameraActor* MainViewCamera; // 0x5a0
	ACameraActor* ZoomedViewCamera; // 0x5a8
	UShooterGameViewportClient* ViewportClient; // 0x5b0
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

struct UHLLVoteWidget : UUserWidget {
	FVoteHandle Vote; // 0x230
	URichTextBlock* BodyText; // 0x238
	UTextBlock* TitleText; // 0x240
	UTextBlock* Countdown; // 0x248
	UShooterGameViewportClient* ViewportClient; // 0x250
	AShooterPlayerController* PlayerController; // 0x258
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x2f0
	FVehicleDifferential4WData DifferentialSetup; // 0x390
	float AckermannAccuracy; // 0x3ac
	FVehicleTransmissionData TransmissionSetup; // 0x3b0
	FRuntimeFloatCurve SteeringCurve; // 0x3e0
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x98
	UPawnAction* RecentActionCopy; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
};

struct UHLLMapMetaTemplate : UObject {
	ETeam OffensiveModeAttackingTeam; // 0x28
	float SectorWidth; // 0x2c
	float SectorHeight; // 0x30
	int32_t MapWidth; // 0x34
	int32_t MapHeight; // 0x38
	TArray<FHLLSectorDefinition> Sectors; // 0x40
	FText MapFriendlyName; // 0x50
	FString MapID; // 0x68
	FText MapShortName; // 0x78
	EMapOrientation Orientation; // 0x90
	TSoftObjectPtr<UTexture2D> OverviewImage; // 0xa0
	float CompassOffset; // 0xc8
	EFaction AxisFaction; // 0xcc
	EFaction AlliesFaction; // 0xcd
	UHLLMapAbilityData* AxisAbilityData; // 0xd0
	UHLLMapAbilityData* AlliesAbilityData; // 0xd8
};

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct AHLLAbility_ResourceConversion : AHLLCommanderAbility {
	EGameResource GeneratedResource; // 0x350
	int32_t GeneratedAmount; // 0x354
};

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0xe8
};

struct AHLLAbility_ProjectileStrike : AHLLCommanderAbility_Placeable {
	AShooterProjectile* ProjectileClass; // 0x370
	char NumProjectiles; // 0x378
	float StrikeZoneRadius; // 0x37c
	float DelayBetweenProjectiles; // 0x380
	float InitialLaunchDelay; // 0x384
	float ProjectileStartDistance; // 0x388
	float ProjectileLaunchZOffset; // 0x38c
	float ProjectileArcFactor; // 0x390
	USoundBase* LaunchSound; // 0x398
	bool bProjectilesStartedFiring; // 0x3a0
};

struct UHTP_Widget_Role_Loadout_Engineer_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_3; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_7; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_8; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x268
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x270
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_5; // 0x278
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x280
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_12; // 0x288
	UImage* icn_faction; // 0x290
	UImage* Image_10; // 0x298
	UImage* Image_17; // 0x2a0
};

struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110
	AActor* LastViewer; // 0x120
	AActor* LastViewTarget; // 0x128
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

struct UChatLine_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* Channel; // 0x238
	UThrobber* CooldownIndicator; // 0x240
	UHorizontalBox* HB_Cooldown; // 0x248
	UEditableTextBox* Message; // 0x250
	EChatChannel ChatChannel; // 0x258
	FChatStyle Style; // 0x260
	float MinDelayBetweenMessages; // 0x3a0
	FTimerHandle Timer_MessageAvailable; // 0x3a8
	int32_t MaxCharacterInput; // 0x3b0
	UChat_C* Widget_Chat; // 0x3b8
};

struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x428
	float LineThickness; // 0x434
};

struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0xe8
};

struct UWGT_OverviewMap_V2_C : UHLLOverviewMapWrapper {
	FPointerToUberGraphFrame UberGraphFrame; // 0x348
	UWidgetAnimation* A_OpenMapKey; // 0x350
	UWidgetAnimation* Anim_OpenClose; // 0x358
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo_V2; // 0x360
	UHorizontalBox* HorizontalBox_2; // 0x368
	UW_HotkeyPanelElement_C* hotkey_Marker; // 0x370
	UW_HotkeyPanelElement_C* hotkey_StrategicMap; // 0x378
	UImage* Image_1; // 0x380
	UImage* Image_3; // 0x388
	UImage* Image_6; // 0x390
	UImage* Image_81; // 0x398
	UHorizontalBox* KeyboardButtons; // 0x3a0
	USizeBox* SB_Map; // 0x3a8
	USizeBox* SizeBox_5; // 0x3b0
	URichTextBlock* txt_KeyExpand; // 0x3b8
	UW_MapKey_C* W_MapKey; // 0x3c0
	bool Map_KeyOpen; // 0x3c8
	EMapInputState CurrentInputState; // 0x3c9
	UHLLMapIconBase* NewVar_1; // 0x3d0
	bool HasHighlightedIcon; // 0x3d8
	bool HasAbilityIconSelected; // 0x3d9
	bool CanPlaceAbility; // 0x3da
	bool CanSelectAbility; // 0x3db
	bool CanActivate; // 0x3dc
	bool CanBeRotated; // 0x3dd
};

struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x438
	UMaterialInterface* MaterialOverride; // 0x440
	FLinearColor SpriteColor; // 0x448
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct AShooterWeapon_Grenade : AShooterWeapon {
	FGrenadeWeaponData GrenadeConfig; // 0x8b8
	FWeaponAnim AimOverhandAnimation; // 0x8e8
	FWeaponAnim AimUnderhandAnimation; // 0x910
	FWeaponAnim ThrowOverhandAnimation; // 0x938
	FWeaponAnim ThrowUnderhandAnimation; // 0x960
	char m_throwOverhandCounter; // 0x988
	char m_throwUnderhandCounter; // 0x989
	char m_aimOverhandCounter; // 0x98a
	char m_aimUnderhandCounter; // 0x98b
	AGrenadeProjectile* m_projectile; // 0x9b0
	UGlobalGrenadeThrowSettings* m_globalThrowSettings; // 0x9b8
};

struct UHLLSettings : UDeveloperSettings {
	int32_t PlayerLevelStart; // 0x38
	int32_t PlayerLevelMod; // 0x3c
	int32_t MaxPlayerLevels; // 0x40
	int32_t RoleLevelStart; // 0x44
	int32_t RoleLevelMod; // 0x48
	int32_t MaxRoleLevels; // 0x4c
	int32_t MaxRank; // 0x50
	TArray<int32_t> PlayerLevelTable; // 0x58
	TArray<int32_t> RoleLevelTable; // 0x68
	TArray<TSoftObjectPtr<UDataTable>> CosmeticData; // 0x78
	TSoftObjectPtr<UDataTable> GamepadLayouts; // 0x88
	TArray<TSoftObjectPtr<UHLLTeamLoadouts>> Loadouts; // 0xb0
	TArray<TSoftObjectPtr<USoundBase>> MatchWinMusic; // 0xc0
	TSoftObjectPtr<UDataTable> DLCData; // 0xd0
};

struct UHLLVoteDataComponent : UActorComponent {
	float VoteLifetime; // 0xb8
	float VoteCompletionTime; // 0xbc
	TArray<FVoteThreshold> DefaultThresholds; // 0xc0
	float VoteTargetCooldown; // 0xd0
	float VoteInstigatorCooldown; // 0xd4
	char bVoteKickEnabled : 1; // 0xd8
	FVoteDataContainer_Static StaticData; // 0xe0
	FVoteDataContainer_Dynamic DynamicData; // 0x1f8
};

struct URadialForceComponent : USceneComponent {
	float Radius; // 0x1f0
	ERadialImpulseFalloff Falloff; // 0x1f4
	float ImpulseStrength; // 0x1f8
	char bImpulseVelChange : 1; // 0x1fc
	char bIgnoreOwningActor : 1; // 0x1fc
	float ForceStrength; // 0x200
	float DestructibleDamage; // 0x204
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x208
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
	char bUsedWithUI : 1; // 0x200
	char bAutomaticallySetUsageInEditor : 1; // 0x200
	char bFullyRough : 1; // 0x200
	char bUseFullPrecision : 1; // 0x200
	char bUseLightmapDirectionality : 1; // 0x200
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x204
	char bUseHQForwardReflections : 1; // 0x208
	char bUsePlanarForwardReflections : 1; // 0x208
	char bNormalCurvatureToRoughness : 1; // 0x208
	EMaterialTessellationMode D3D11TessellationMode; // 0x209
	char bEnableCrackFreeDisplacement : 1; // 0x20a
	char bEnableAdaptiveTessellation : 1; // 0x20a
	char AllowTranslucentCustomDepthWrites : 1; // 0x20a
	char Wireframe : 1; // 0x20a
	char bCanMaskedBeAssumedOpaque : 1; // 0x20a
	char bIsMasked : 1; // 0x20a
	char bIsPreviewMaterial : 1; // 0x20a
	char bIsFunctionPreviewMaterial : 1; // 0x20a
	char bUseMaterialAttributes : 1; // 0x20b
	char bCastRayTracedShadows : 1; // 0x20b
	char bUseTranslucencyVertexFog : 1; // 0x20b
	char bIsSky : 1; // 0x20b
	char bComputeFogPerPixel : 1; // 0x20b
	char bOutputTranslucentVelocity : 1; // 0x20b
	char bAllowDevelopmentShaderCompile : 1; // 0x20b
	char bIsMaterialEditorStatsMaterial : 1; // 0x20b
	EBlendableLocation BlendableLocation; // 0x20c
	char BlendableOutputAlpha : 1; // 0x20d
	char bEnableStencilTest : 1; // 0x20d
	EMaterialStencilCompare StencilCompare; // 0x20e
	char StencilRefValue; // 0x20f
	ERefractionMode RefractionMode; // 0x210
	int32_t BlendablePriority; // 0x214
	char bIsBlendable : 1; // 0x218
	uint32_t UsageFlagWarnings; // 0x21c
	float RefractionDepthBias; // 0x220
	FGuid StateId; // 0x224
	float MaxDisplacement; // 0x234
	FMaterialCachedExpressionData CachedExpressionData; // 0x2c0
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct UHLLUI_CosmeticItemTooltip : UUserWidget {
	UTextBlock* ItemName; // 0x230
	UTextBlock* RequirementText; // 0x238
	UTextBlock* ItemAdditionalText; // 0x240
	UShooterGameViewportClient* ViewportClient; // 0x248
};

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	bool bExplicitWrapWidth; // 0x12c
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct UHLLScrollZoom : UWidget {
	FDelegate ColorAndOpacityDelegate; // 0x108
	FDelegate BrushDelegate; // 0x118
	FSlateBrush Brush; // 0x128
	FLinearColor ColorAndOpacity; // 0x1b0
	FDrawSectorInfo DrawSectorInfo; // 0x1c0
	bool bDrawGridLines; // 0x1d8
	bool bDrawSubGrid; // 0x1d9
	bool bDrawGridShadow; // 0x1da
	bool bAntiAliasGrid; // 0x1db
	bool bDrawText; // 0x1dc
	bool bDrawSectors; // 0x1dd
	float MaxZoom; // 0x1e0
	FSlateFontInfo GridFont; // 0x1e8
	FVector2D TopTextOffset; // 0x238
	FVector2D LeftTextOffset; // 0x240
	int32_t MajorNumSegments; // 0x248
	float MajorLineThickness; // 0x24c
	float MajorShadowThickness; // 0x250
	FLinearColor MajorLineColour; // 0x254
	FLinearColor MajorShadowColour; // 0x264
	FVector2D MajorShadowOffset; // 0x274
	int32_t MinorNumSegments; // 0x27c
	float MinorLineThickness; // 0x280
	FLinearColor MinorLineColour; // 0x284
	float MinorMinZoom; // 0x294
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

struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct UMainMenuNavigationScreen_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UbtnNav_V2_C* btnNav_Barracks; // 0x238
	UbtnNav_V2_C* btnNav_Credits; // 0x240
	UbtnNav_V2_C* btnNav_Enlist; // 0x248
	UbtnNav_V2_C* btnNav_Guide; // 0x250
	UbtnNav_V2_C* btnNav_Quit; // 0x258
	UbtnNav_V2_C* btnNav_Settings; // 0x260
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x268
	UOverlay* Home; // 0x270
	UTextBlock* SlashBarracks; // 0x278
	UTextBlock* SlashCredits; // 0x280
	UTextBlock* SlashEnlist; // 0x288
	UTextBlock* SlashGuide; // 0x290
	UTextBlock* SlashQuit; // 0x298
	UTextBlock* SlashSettings; // 0x2a0
	UVerticalBox* VB_Nav; // 0x2a8
	UMainMenuWidget_V2_C* MainMenu; // 0x2b0
	int32_t LastMenuIndex; // 0x2b8
};

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
};

struct UHTP_Widget_Topic_Generic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UHorizontalBox* HB_Header; // 0x238
	UHTP_Widget_Role_Loadout_Commander_C* HTP_Widget_Role_Loadout_Commander; // 0x240
	UImage* Image_2; // 0x248
	UImage* Image_3; // 0x250
	UImage* img_headerIcon; // 0x258
	UImage* img_Image; // 0x260
	URichTextBlock* rtxt_Description; // 0x268
	USizeBox* SB_HeaderIcon; // 0x270
	USizeBox* SB_Image; // 0x278
	USizeBox* SB_SubWidget; // 0x280
	UTextBlock* txt_Name; // 0x288
	UTextBlock* txt_subTitle; // 0x290
	UTextBlock* txt_Tagline; // 0x298
	UWidgetSwitcher* WidgetSwitcher_Visuals; // 0x2a0
	FText MapName; // 0x2a8
	UTexture2D* MapImage; // 0x2c0
	FText MapDescription; // 0x2c8
	FName TableRow; // 0x2e0
	FMargin rColumnMargins; // 0x2e8
	FMargin lColumnMargins; // 0x2f8
	bool hasImage; // 0x308
	FMargin ColumnMargins_null; // 0x30c
	bool isUltrawide; // 0x31c
	bool isNotWidescreen; // 0x31d
	FVector2D imageDimensions; // 0x320
	float wrapLength; // 0x328
	bool hasWidget; // 0x32c
	FST_HTP HintInfo; // 0x330
};

struct UW_Btn_HTPTopic_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* Btn_Topic; // 0x238
	UImage* Img_TopicSelected; // 0x240
	UTextBlock* Txt_TopicTitle; // 0x248
	FMulticastInlineDelegate Clicked; // 0x250
	bool Active; // 0x260
	FSlateColor NormalTextColor; // 0x268
	FSlateColor HoveredTextColor; // 0x290
	FButtonStyle ActiveButtonStyle; // 0x2b8
	FButtonStyle NormalButtonStyle; // 0x530
	bool Hovered; // 0x7a8
	FText Topic_Text; // 0x7b0
	int32_t Topic_Int; // 0x7c8
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
	FMulticastInlineDelegate OnReachedJumpApex; // 0x350
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x370
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x380
	FRootMotionSourceGroup SavedRootMotion; // 0x390
	FRootMotionMovementParams ClientRootMotionParams; // 0x3d0
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x410
	FRepRootMotionMontage RepRootMotion; // 0x420
};

struct AHLLArmourWeapon_ReconGun : AHLLArmourWeapon {
	float ScannedAreaInterpSpeed; // 0x470
	float ScannedAreaRadius; // 0x474
	TArray<EObjectTypeQuery> ScanObjectTypes; // 0x478
	float FadeOutDuration; // 0x488
	UStaticMesh* ReconAreaMesh; // 0x490
	UMaterial* ReconAreaMaterial; // 0x498
	UMaterialInstanceDynamic* ReconAreaSphereMID; // 0x4a0
	UStaticMeshComponent* ReconAreaVisualsComponent; // 0x4a8
	FVector ShotLocation; // 0x4b0
};

struct AHLLMapDataBase : AActor {
	UHLLMapIconBase* IconClass; // 0x220
	FRepMapPosition MapPosition; // 0x228
	char bOwnerIsMovable : 1; // 0x230
};

struct AHLLVehicleWreck : AActor {
	USceneComponent* DummyRoot; // 0x238
	UStaticMeshComponent* Mesh; // 0x240
	UHLLSimpleHealthComponent* HealthComponent; // 0x248
	float ServerSpawnedTime; // 0x250
	AActor* ReplacedVehicleActor; // 0x258
	ETeam Team; // 0x260
	AShooterImpactEffect* ExplosionEffect; // 0x268
	float BaseLifespan; // 0x270
	float WreckReplacementDelay; // 0x274
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UHLLUseContext_SwitchOrExitSeat : UHLLUseContextBase {
	UImage* SwitchProgress; // 0x238
	URichTextBlock* SwitchText; // 0x240
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct UUserWidget : UWidget {
	FLinearColor ColorAndOpacity; // 0x110
	FDelegate ColorAndOpacityDelegate; // 0x120
	FSlateColor ForegroundColor; // 0x130
	FDelegate ForegroundColorDelegate; // 0x158
	FMargin Padding; // 0x168
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x178
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x188
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x198
	UWidgetTree* WidgetTree; // 0x1a8
	int32_t Priority; // 0x1b0
	char bSupportsKeyboardFocus : 1; // 0x1b4
	char bIsFocusable : 1; // 0x1b4
	char bStopAction : 1; // 0x1b4
	char bHasScriptImplementedTick : 1; // 0x1b4
	char bHasScriptImplementedPaint : 1; // 0x1b4
	char bCookedWidgetTree : 1; // 0x1b4
	EWidgetTickFrequency TickFrequency; // 0x1c0
	UInputComponent* InputComponent; // 0x1c8
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x1d0
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShake*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	bool bAutoRepair; // 0x29
	bool bStopServiceWhenAppDeactivates; // 0x2a
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

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0xf0
	ETextureColorChannel Channel; // 0xf4
};

struct UW_OnScreenTip_C : UHLLHintWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* A_TipFadeOut; // 0x238
	UVerticalBox* DismissVBox; // 0x240
	URichTextBlock* HintRichText; // 0x248
	FMulticastInlineDelegate OST_Completed; // 0x250
	FHint Hint_Current; // 0x260
	bool Hint_Removing; // 0x2b8
	FHint Hint_Next; // 0x2c0
	bool Hint_InQueue; // 0x318
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct UArmyLogo : UUserWidget {
	UImage* ArmyIcon; // 0x230
	UTextBlock* ArmyName; // 0x238
};

struct UWGT_PlatoonRole_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UImage* icn_defaultRole; // 0x238
	Uhll_text_C* txt_label; // 0x240
	EPlayerRole RoleType; // 0x248
};

struct UHLLSatchelIndicator : UHLLIndicatorBase {
	UImage* CountdownProg; // 0x2a8
};

struct UM3SuspensionComponent : UActorComponent {
	char bEnabled : 1; // 0xb0
	FM3SuspensionSideSetup LeftSideSetup; // 0xb4
	FM3SuspensionSideSetup RightSideSetup; // 0x114
	float BogieArmLength; // 0x174
	float BogieWheelRadius; // 0x178
	float BogieFrameHalfLength; // 0x17c
};

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x58
	TArray<UMovieSceneSection*> Sections; // 0x60
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
	UPawnAction* RecentActionCopy; // 0xb0
};

struct AMainMenu_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
};

struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
	FExpressionInput Input; // 0x74
};

struct UHLLUI_LoadoutSelector : UUserWidget {
	TWeakObjectPtr<UHLLUI_CharacterSelection> ParentPanel; // 0x238
	int32_t MaxLoadoutColumns; // 0x240
	UHLLUI_LoadoutEntry* LargeItemWidget; // 0x248
	UHLLUI_LoadoutEntry* SmallItemWidget; // 0x250
	TArray<UHLLUI_LoadoutEntry*> ActiveItems; // 0x258
	TArray<UHLLUI_Loadout*> ActiveLoadouts; // 0x268
	UHLLUI_LoadoutTooltip* TooltipItem; // 0x278
	UUniformGridPanel* LoadoutPanel; // 0x280
	UWrapBox* EntryPanel; // 0x288
	UTextBlock* UnlockedText; // 0x290
	UTextBlock* LoadoutName; // 0x298
};

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct ADeathCamera : AActor {
	UCameraComponent* Camera; // 0x238
	USphereComponent* Collision; // 0x240
	UProjectileMovementComponent* Movement; // 0x248
	float RotationAxisConeHalfAngle; // 0x250
	float RotationSpeed; // 0x254
	float RotationDecelerationSpeed; // 0x258
	float FadeToBlackTime; // 0x25c
	float FadeToSkyViewTime; // 0x260
	float BlownUpDeathScreenDelay; // 0x264
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct UPlatoonInvitationDialogPlayer : UUserWidget {
	UTextBlock* PlayerName; // 0x230
	UCheckBox* Invited; // 0x238
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct AHLL_GameMode_C : AShooterGameMode {
	USceneComponent* DefaultSceneRoot; // 0x528
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

struct UWeaponTPPAnimationSet : UObject {
	UAnimSequence* StandIdle; // 0x28
	UAnimSequence* StandIdleBreak01; // 0x30
	UAnimSequence* StandIdleBreak02; // 0x38
	UAnimSequence* CrouchIdle; // 0x40
	UAnimSequence* CrouchIdleBreak01; // 0x48
	UAnimSequence* CrouchIdleBreak02; // 0x50
	UAnimSequence* ProneIdle; // 0x58
	UAnimSequence* StandRotateRight; // 0x60
	UAnimSequence* StandRotateLeft; // 0x68
	UAnimSequence* CrouchRotateRight; // 0x70
	UAnimSequence* CrouchRotateLeft; // 0x78
	UAnimSequence* ProneRotateRight; // 0x80
	UAnimSequence* ProneRotateLeft; // 0x88
	UAnimSequence* JumpEnter; // 0x90
	UAnimSequence* JumpLoop; // 0x98
	UAnimSequence* JumpExit; // 0xa0
	UAnimSequence* StandSprint; // 0xa8
	UAnimSequence* CrouchSprint; // 0xb0
	UAnimSequence* PoseInheritanceStand; // 0xb8
	UAnimSequence* PoseInheritanceCrouch; // 0xc0
	UAnimSequence* PoseInheritanceProne; // 0xc8
	UAnimSequence* PoseIdleStand; // 0xd0
	UAnimSequence* PoseIdleCrouch; // 0xd8
	UAnimSequence* PoseIdleProne; // 0xe0
	UAnimSequence* PoseAdsStand; // 0xe8
	UAnimSequence* PoseAdsCrouch; // 0xf0
	UAnimSequence* PoseAdsProne; // 0xf8
	UAnimSequence* StandToCrouch; // 0x100
	UAnimSequence* StandToProne; // 0x108
	UAnimSequence* CrouchToStand; // 0x110
	UAnimSequence* CrouchToProne; // 0x118
	UAnimSequence* ProneToStand; // 0x120
	UAnimSequence* ProneToCrouch; // 0x128
	UAnimSequence* DeployInheritPose; // 0x130
	UAnimSequence* StandDeployPivot; // 0x138
	UAnimSequence* StandBipodDeploy; // 0x140
	UAnimMontage* StandBipodUndeploy; // 0x148
	UAnimSequence* CrouchBipodDeploy; // 0x150
	UAnimMontage* CrouchBipodUndeploy; // 0x158
	UAnimSequence* ProneBipodDeploy; // 0x160
	UAnimMontage* ProneBipodUndeploy; // 0x168
	UAnimSequence* StandBipodIdle; // 0x170
	UAnimSequence* CrouchBipodIdle; // 0x178
	UAnimSequence* ProneBipodIdle; // 0x180
	UAnimSequence* BraceStandEnter; // 0x188
	UAnimSequence* BraceStandIdle; // 0x190
	UAnimSequence* BraceStandExit; // 0x198
	UAnimSequence* BraceCrouchEnter; // 0x1a0
	UAnimSequence* BraceCrouchIdle; // 0x1a8
	UAnimSequence* BraceCrouchExit; // 0x1b0
	UAnimSequence* BraceProneEnter; // 0x1b8
	UAnimSequence* BraceProneIdle; // 0x1c0
	UAnimSequence* BraceProneExit; // 0x1c8
	UAnimSequence* BracePivotStand_R; // 0x1d0
	UAnimSequence* BracePivotStand_L; // 0x1d8
	UAnimSequence* BracePivotCrouch_R; // 0x1e0
	UAnimSequence* BracePivotCrouch_L; // 0x1e8
	UAnimSequence* BracePivotProne_R; // 0x1f0
	UAnimSequence* BracePivotProne_L; // 0x1f8
	UBlendSpace* StandLocomotion; // 0x200
	UBlendSpace* StandLocomotionADS; // 0x208
	UBlendSpace* CrouchLocomotion; // 0x210
	UBlendSpace* CrouchLocomotionADS; // 0x218
	UBlendSpace* ProneLocomotion; // 0x220
	UBlendSpace* StandWalkStart; // 0x228
	UBlendSpace* StandWalkStop; // 0x230
	UBlendSpace* StandJogStart; // 0x238
	UBlendSpace* StandJogStop; // 0x240
	UBlendSpace* StandSprintStop; // 0x248
	UBlendSpace* CrouchWalkStart; // 0x250
	UBlendSpace* CrouchWalkStop; // 0x258
	UBlendSpace* CrouchJogStart; // 0x260
	UBlendSpace* CrouchJogStop; // 0x268
	UBlendSpace* CrouchSprintStop; // 0x270
	UBlendSpace* ProneToJog; // 0x278
	UBlendSpace* ProneToSprint; // 0x280
	UBlendSpace* StandSprintStopToProne; // 0x288
	UBlendSpace* StandJogStopToProne; // 0x290
	UBlendSpace* CrouchSprintStopToProne; // 0x298
	UBlendSpace* CrouchJogStopToProne; // 0x2a0
	UBlendSpace* StandVault; // 0x2a8
	UBlendSpace* StandClimb; // 0x2b0
	UAnimMontage* StandLeft; // 0x2b8
	UAnimMontage* StandRight; // 0x2c0
	UAnimMontage* CrouchLeft; // 0x2c8
	UAnimMontage* CrouchRight; // 0x2d0
	UAnimMontage* ProneLeft; // 0x2d8
	UAnimMontage* ProneRight; // 0x2e0
	UAimOffsetBlendSpace* AO_Stand; // 0x2e8
	UAimOffsetBlendSpace* AO_Crouch; // 0x2f0
	UAimOffsetBlendSpace* AO_Crouch_Moving; // 0x2f8
	UAimOffsetBlendSpace* AO_Prone; // 0x300
	UAimOffsetBlendSpace* AO_Stand_ADS; // 0x308
	UAimOffsetBlendSpace* AO_Crouch_ADS; // 0x310
	UAimOffsetBlendSpace* AO_Prone_ADS; // 0x318
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
};

struct UDialogueVoice : UObject {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xe0
	FMovieSceneFloatChannel Translation[0x3]; // 0xe8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2c8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4a8
	FMovieSceneFloatChannel ManualWeight; // 0x688
	bool bUseQuaternionInterpolation; // 0x72c
};

struct UWGT_LoadoutEntry_Small_C : UHLLUI_LoadoutEntry {
	USizeBox* RootSizer; // 0x268
};

struct AHLLPhysicsVolume : APhysicsVolume {
	char CharacterMovementFlags; // 0x268
};

struct UWGT_UseContext_Resupply_C : UHLLUseContext_Supplies {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360
};

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
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
	bool IsFocusable; // 0x748
	FMulticastInlineDelegate OnCheckStateChanged; // 0x750
};

struct UHLLAmmoDepotIndicator : UHLLIndicatorBase {
	UBorder* ReplenishBorder; // 0x2a8
};

struct UBPW_EquipmentItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UImage* Image_1; // 0x238
	USizeBox* SizeBox_1; // 0x240
	EWeaponType Equipment_Type; // 0x248
	UW_HoverToolTip_Explained_C* Widget_TooltipRef; // 0x250
	FST_EquipmentItem_Info Equipment_Info; // 0x258
	E_SlotSizes SlotSize; // 0x2a8
	FVector2D SlotDimensions; // 0x2ac
};

struct UHLLPhysicalMaterial : UPhysicalMaterial {
	char bSupportBulletPenetration : 1; // 0x80
	char bOverlapGeneratesProjectileFX : 1; // 0x80
	char bEnableEntryFX : 1; // 0x80
	char bEnableExitFX : 1; // 0x80
	char bIgnoreDamageOnPenetration : 1; // 0x80
	int32_t RequiredPower; // 0x84
	float DamageReduction; // 0x88
	float VelocityReduction; // 0x8c
	FLinearColor DebugColour; // 0x90
};

struct AMapData_AdminCam_C : AHLLMapData_AdminCamera {
	USceneComponent* DefaultSceneRoot; // 0x240
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
};

struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UHLLRoundSummaryTeam : UUserWidget {
	UImage* TeamFlag; // 0x238
	UTextBlock* MunitionsText; // 0x240
	UTextBlock* ManpowerText; // 0x248
	UTextBlock* FuelText; // 0x250
	UTextBlock* ScoreValue; // 0x258
};

struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UHTP_Widget_DeploymentScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UImage* Image_1; // 0x238
	UImage* Image_2; // 0x240
	UImage* Image_3; // 0x248
	UImage* Image_22; // 0x250
	UImage* Image_23; // 0x258
	URichTextBlock* RichTextBlock_1; // 0x260
	UTextBlock* txt_Name; // 0x268
	UTextBlock* txt_Tagline; // 0x270
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

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28
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

struct UBPW_Army_V2_C : UArmy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
	UWidgetAnimation* A_NewUnit; // 0x260
	UBorder* Border_1; // 0x268
	UButton* btn_NewUnit; // 0x270
	UVerticalBox* CommanderPanel; // 0x278
	UHLLScrollBox* HLLScrollBox_358; // 0x280
	UImage* Image_161; // 0x288
	FTimerHandle Timer_CheckForUnits; // 0x290
	FMulticastInlineDelegate Btn_NewUnitPressed; // 0x298
	ETeam Player_Team; // 0x2a8
	FMulticastInlineDelegate CreateInfantry; // 0x2b0
	FMulticastInlineDelegate CreateArmor; // 0x2c0
	FMulticastInlineDelegate CreateRecon; // 0x2d0
	UArmyCommanderRole* CommanderWidget; // 0x2e0
	FMulticastInlineDelegate OnNavigateRight; // 0x2e8
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x2f8
	UWidget* LastSelectedWidget; // 0x300
};

struct AHLLMapData_Player : AHLLMapDataBase {
	char PlayerYaw; // 0x238
	char bIsSeated : 1; // 0x239
	APlayerState* PlayerState; // 0x240
};

struct UHLLUI_CreditsCategory_RoleAndMembers : UUserWidget {
	UTextBlock* TitleText; // 0x230
	UTextBlock* MemberText; // 0x238
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

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UGamepadRTBImageDecorator : URichTextBlockImageDecorator {
	UDataTable* PlaystationButtonTable; // 0x30
	UDataTable* XboxButtonTable; // 0x38
};

struct UReconDriverSeatUI : UVehicleDriverSeatUI {
	UImage* TankTurretImage; // 0x2d0
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0xf8
	int32_t Version; // 0x108
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

struct AShooterWeapon_HealBase : AShooterWeapon {
	FHealWeaponData HealWeaponConfig; // 0x8b8
	TWeakObjectPtr<AShooterCharacter> CurrentHealTarget; // 0x988
};

struct UOptionsTabButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* OptionButton; // 0x238
	UTextBlock* OptionTextBlock; // 0x240
	FButtonStyle InitialButtonStyle; // 0x248
	FText Text; // 0x4c0
	FSlateColor NormalTextColor; // 0x4d8
	FSlateColor HoveredTextColor; // 0x500
	FMulticastInlineDelegate OnClicked; // 0x528
	bool Active; // 0x538
	bool Hovered; // 0x539
	FButtonStyle NormalButtonStyle; // 0x540
	FButtonStyle ActiveButtonStyle; // 0x7b8
	FButtonStyle FocusedButtonStyle; // 0xa30
	FButtonStyle SelectedButtonStyle; // 0xca8
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct USignificanceManager : UObject {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; // 0x160
	USoundNode* FirstNode; // 0x168
	float VolumeMultiplier; // 0x170
	float PitchMultiplier; // 0x174
	FSoundAttenuationSettings AttenuationOverrides; // 0x178
	float SubtitlePriority; // 0x518
	char bOverrideAttenuation : 1; // 0x520
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x520
	int32_t CookedQualityIndex; // 0x524
	char bHasPlayWhenSilent : 1; // 0x528
};

struct AShermanJumbo : ABaseTank {
	UTracksComponent* Tracks2; // 0x5d8
};

struct UHLLSeatNameplateContainer : UHLLNameplateIndicatorBase {
	UHLLSeatIndicatorItem* ItemClass; // 0x2b8
	char bShowOnlyDriver : 1; // 0x2c0
	char bShowPassengerCount : 1; // 0x2c0
	TArray<UHLLSeatIndicatorItem*> ItemWidgets; // 0x2c8
	UVerticalBox* OccupantVBox; // 0x2d8
	UWidget* AdditionalOccupants; // 0x2e0
	UTextBlock* AdditionalOccupantText; // 0x2e8
};

struct AShooterGameSession : AGameSession {
	AOnlineBeaconHost* BeaconHost; // 0x4f0
	AServerQueueBeaconHostObject* ServerQueueBeaconHostObject; // 0x4f8
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct AShooterWeapon_Instant : AShooterWeapon {
	FInstantWeaponData InstantConfig; // 0x8b8
	AShooterImpactEffect* ImpactTemplate; // 0x8f0
	FHLLTracerProperties TracerProperties; // 0x8f8
	FInstantHitInfo HitNotify; // 0x910
	float SuppressionBulletRadius; // 0x928
	float SuppressionBulletAmount; // 0x92c
	float SuppressionBulletFalloff; // 0x930
	float SuppressionScoreModifier; // 0x934
	int32_t NumSuppressionShotsForScore; // 0x938
	float Cached_MaxRange; // 0x940
	float Cached_MaxTravelTime; // 0x944
	char TracerCounter; // 0x948
};

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7a0
	float BlendRadius; // 0x7a4
	float BlendWeight; // 0x7a8
	char bEnabled : 1; // 0x7ac
	char bUnbound : 1; // 0x7ac
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0xd0
};

struct UWGT_BrowserFilterButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UCheckBox* RootCheck; // 0x238
	UTextBlock* RootText; // 0x240
	EHLLUI_ServerShowFilter FilterType; // 0x248
	FMulticastInlineDelegate OnToggle; // 0x250
	FCheckBoxStyle FocusedStyle; // 0x260
	FCheckBoxStyle InitialStyle; // 0x7e0
	UWGT_ServerBrowser_V2_C* ServerBrowser; // 0xd60
};

struct UW_HotkeyPanelElement_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UScaleBox* SB_Icon; // 0x238
	UTextBlock* txt_hintText; // 0x240
	FText HintText; // 0x248
	FName KeybindName; // 0x260
	bool isKey; // 0x268
	FSlateBrush IconBrush; // 0x270
	FText KeyBind; // 0x2f8
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UMovieSceneAudioSection : UMovieSceneSection {
	USoundBase* Sound; // 0xe0
	FFrameNumber StartFrameOffset; // 0xe8
	float StartOffset; // 0xec
	float AudioStartTime; // 0xf0
	float AudioDilationFactor; // 0xf4
	float AudioVolume; // 0xf8
	FMovieSceneFloatChannel SoundVolume; // 0x100
	FMovieSceneFloatChannel PitchMultiplier; // 0x1a0
	FMovieSceneActorReferenceData AttachActorData; // 0x240
	bool bSuppressSubtitles; // 0x2f0
	bool bOverrideAttenuation; // 0x2f1
	USoundAttenuation* AttenuationSettings; // 0x2f8
	FDelegate OnQueueSubtitles; // 0x300
	FMulticastInlineDelegate OnAudioFinished; // 0x310
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x320
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

struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
};

struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
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

struct AMapData_Recon_C : AHLLMapData_ReconItem {
	USceneComponent* DefaultSceneRoot; // 0x268
};

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct AFlamethrowerBurningSpot : AActor {
	float Power; // 0x220
};

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xe0
	TArray<FName> LevelNames; // 0xe8
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x220
	UPaperTerrainSplineComponent* SplineComponent; // 0x228
	UPaperTerrainComponent* RenderComponent; // 0x230
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

struct UTankGunnerSeatUI : UHLLTankSeatUI_Base {
	UHLLArmourWeaponUI* PrimaryWeaponInfo; // 0x280
	UHLLArmourWeaponUI* SecondaryWeaponInfo; // 0x288
	URichTextBlock* ZoomKeyText; // 0x290
	URichTextBlock* PrecisionKeyText; // 0x298
	UBorder* MuzzleOcclusion; // 0x2a0
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct AMobileSpawn : AActor {
	float WaveIntervalSeconds; // 0x230
	FDynamicSpawnGatherParams SpawnGatherParams; // 0x234
	UNearbySpawnEnemyDetection* NearbySpawnEnemyDetection; // 0x260
	UHLLMapComponent* SpawnMapComponent; // 0x268
	UAudioComponent* SpawnAudio; // 0x270
	float NextSpawnWaveTime; // 0x278
	char bAllowedToDeploy : 1; // 0x27c
	char bIsDrowning : 1; // 0x27c
	float MovementSpeedKph; // 0x280
	char NumAvailableSpawnLocations; // 0x284
	ETeam Team; // 0x285
};

struct UHLLUseContext_Supplies : UHLLUseContextBase {
	FSlateBrush CanUseIcon; // 0x238
	FSlateBrush CantUseIcon; // 0x2c0
	UImage* RadialProg; // 0x348
	UImage* IconImage; // 0x350
	URichTextBlock* DisplayText; // 0x358
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350
	FLevelSequenceBindingReferences BindingReferences; // 0x3a0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x440
	UObject* DirectorClass; // 0x490
};

struct UMovieSceneBuiltInEasingFunction : UObject {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UShooterGameInstance : UGameInstance {
	FMulticastInlineDelegate RconStatePostInitialisedEvent; // 0x198
	FString WelcomeScreenMap; // 0x1b0
	FString MainMenuMap; // 0x1c0
	ULoadingScreensData* LoadingScreensData; // 0x408
	AActor* m_pendingRconActor; // 0x468
	UHLLOnlineStatsManager* StatManager; // 0x488
	UHLLCosmeticManager* CosmeticManager; // 0x490
	UServerQueue* ServerQueue; // 0x498
	UHintsAndTips* HintsAndTips; // 0x4a0
	TSoftClassPtr<UObject> MaterialManagerClass; // 0x4b8
	UHLLMaterialManager* MaterialManager; // 0x4e0
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UHLLScopeImage : UImage {
	ESlateVisibility VisibilityWhenUnloaded; // 0x210
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

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct ATiger : ABaseTank {
	UTracksComponent* Tracks2; // 0x5d8
};

struct UHLLMarkerIndicator : UHLLIndicatorBase {
	float FadeTime; // 0x2a8
	float ProjectionEdgePadding; // 0x2ac
	UWidgetAnimation* MovedOrPlacedAnim; // 0x2b0
	UImage* MarkerIcon; // 0x2b8
	UTextBlock* MarkerText; // 0x2c0
	UTextBlock* OwnerText; // 0x2c8
	UTextBlock* DistanceText; // 0x2d0
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x40
};

struct AHLLCommanderAbility_ReconPlane : AHLLCommanderAbility_PlaneBase {
	char bLOSCheck : 1; // 0x3b8
	TArray<EObjectTypeQuery> ScanObjectTypes; // 0x3c0
	ECollisionChannel LOSChannel; // 0x3d0
	float DistanceBetweenScans; // 0x3d4
	float ScanRadius; // 0x3d8
};

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UHLLUI_PlayerLevel : UUserWidget {
	char bUseGrouping : 1; // 0x230
	UTextBlock* PlayerName; // 0x238
	UTextBlock* PlayerLevel; // 0x240
	UTextBlock* CurrentXP; // 0x248
	UTextBlock* NextLevelXP; // 0x250
	UProgressBar* LevelProgress; // 0x258
	UWidget* RankContainer; // 0x260
	UImage* RankIcon; // 0x268
};

struct UHLLDeployment_TeamSelectItem : UUserWidget {
	UHLLDeployment_TeamSelect* OwningTeamPanel; // 0x230
	ETeam AssignedTeam; // 0x238
	EFaction AssignedFaction; // 0x239
	char bIsAvailable : 1; // 0x23a
	UWidget* EnabledStateWidget; // 0x240
	UTextBlock* PlayerCount; // 0x248
	UTextBlock* FactionName; // 0x250
	UImage* FactionIcon; // 0x258
	UButton* SelectButton; // 0x260
};

struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
};

struct UWGT_MapIcon_Garrison_C : UHLLMapIcon_Garrison {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	UBorder* Icon; // 0x4b0
	UOverlay* Overlay; // 0x4b8
	UScaleBox* Scaler; // 0x4c0
	USizeBox* Sizer; // 0x4c8
	UW_HoverToolTip_Explained_C* Widget_TooltipRef; // 0x4d0
};

struct AGarrison : ADynamicSpawn {
	bool bStrongInLockedSectors; // 0x3f0
	float StrongDismantleTime; // 0x3f4
};

struct UArmy : UUserWidget {
	UArmyCommanderRole* CommanderRole; // 0x230
	UPlatoonList* Infantry; // 0x238
	UPlatoonList* Armor; // 0x240
	UPlatoonList* Recon; // 0x248
	char bReadOnly : 1; // 0x250
};

struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct AHLLAmmoDepot : AHLLDispenseStructure {
	int32_t ReplenishRate; // 0x370
	float ReplenishRadius; // 0x374
	USoundBase* ReplenishingSound; // 0x378
	char bIsReplenishing : 1; // 0x388
	UParticleSystemComponent* ReplenishParticle; // 0x390
	TWeakObjectPtr<UAudioComponent> ReplenishAC; // 0x398
	UHLLMapComponent* MapComponent; // 0x3a0
	UHLLIndicatorComponent* IndicatorComponent; // 0x3a8
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x58
};

struct UAutoDestroySubsystem : UWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38
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

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UHLLRoundSummaryPlayer : UUserWidget {
	bool bIsLocalPlayer; // 0x230
	bool bHasFocus; // 0x232
	UBorder* RootBorder; // 0x248
	UTextBlock* PlayerName; // 0x250
	UTextBlock* PlayerClan; // 0x258
	UImage* PlayerIcon; // 0x260
	UImage* RankIcon; // 0x268
	UPanelWidget* RankIconContainer; // 0x270
	UTextBlock* PlayerLevel; // 0x278
	UTextBlock* PingValue; // 0x280
	UTextBlock* CombatValue; // 0x288
	UTextBlock* OffenseValue; // 0x290
	UTextBlock* DefenseValue; // 0x298
	UTextBlock* SupportValue; // 0x2a0
	UTextBlock* CommendCount; // 0x2a8
	UButton* CommendButton; // 0x2b0
	UImage* CommendIcon; // 0x2b8
	UMenuAnchor* MenuAnchor; // 0x2c0
	ECommendationTooltipType CommendationType; // 0x2ca
	UImage* VoipIcon; // 0x2d0
	TWeakObjectPtr<AShooterPlayerState> AssignedPlayer; // 0x2d8
	UImage* KickIcon; // 0x2e0
	UTextBlock* VotingText; // 0x2e8
	FText KickTooltipText; // 0x2f0
	FText MuteTooltipText; // 0x308
	UWidget* FriendWidget; // 0x320
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x410
	int32_t SectionBaseX; // 0x420
	int32_t SectionBaseY; // 0x424
	int32_t CollisionSizeQuads; // 0x428
	float CollisionScale; // 0x42c
	int32_t SimpleCollisionSizeQuads; // 0x430
	TArray<char> CollisionQuadFlags; // 0x438
	FGuid HeightfieldGuid; // 0x448
	FBox CachedLocalBox; // 0x458
	LazyObjectProperty RenderComponent; // 0x474
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4a0
};

struct AHLLResourceNode : AActor {
	USceneComponent* DummyRoot; // 0x290
	UStaticMeshComponent* Mesh; // 0x298
	UHLLMapComponent* MapComponent; // 0x2a0
	UHLLIndicatorComponent* IndicatorComponent; // 0x2a8
	UHLLResourceGenerator* ResourceComponent; // 0x2b0
	UHLLSimpleHealthComponent* HealthComponent; // 0x2b8
	float DismantleTime; // 0x2c0
	ETeam OwningTeam; // 0x2c4
	char RegenerationTypes; // 0x2c5
	float AmmoRegenRadius; // 0x2c8
	FCollisionProfileName AmmoRegenQuery; // 0x2cc
	float AmmoRegenLength; // 0x2d4
	FName RegenerationScoreName; // 0x2d8
	FHLLUpgradeInfo UpgradeData; // 0x2e0
	UHLLUpgradeGhostComponent* UpgradeGhostComponent; // 0x368
	EHLLDamageFilterType DamageFilterType; // 0x370
	AShooterPlayerState* SpawnedByPlayer; // 0x378
	int32_t NodeID; // 0x388
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

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x428
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct AFlamethrowerBurningCharacter : AActor {
	ACharacter* BurningCharacter; // 0x220
};

struct UTruckDriverSeatUI : UVehicleDriverSeatUI {
	UPanelWidget* DropsPanel; // 0x2d0
	UTextBlock* DropCount; // 0x2d8
	UPanelWidget* DropActionPanel; // 0x2e0
	UImage* DropProgressWheel; // 0x2e8
	UWidgetSwitcher* DropsStatusSwitcher; // 0x2f0
	UPanelWidget* DropBlockedPanel; // 0x2f8
	UPanelWidget* DropInProgressPanel; // 0x300
	URichTextBlock* SuppliesKeyHint; // 0x308
};

struct UBPW_PlatoonInvitationDialog_V2_C : UPlatoonInvitationDialog {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo_V2; // 0x260
	UbtnSimple_V2_C* CancelButton; // 0x268
	UImage* Image_1; // 0x270
	UbtnSimple_V2_C* InviteButton; // 0x278
	URetainerBox* RetainerBox_2; // 0x280
	int32_t PlayersSelected; // 0x288
	bool bClosing; // 0x28c
};

struct UHLLMenuButton : UUserWidget {
	FMulticastInlineDelegate OnPress; // 0x230
	FText Text; // 0x240
	UImage* HoverIcon; // 0x258
	UButton* RootButton; // 0x260
	UTextBlock* ButtonText; // 0x268
};

struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xe0
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
	int32_t NumberOfSpawnedNotifications; // 0x2dc
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

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct UPendingPlayerDeployment : UObject {
	TScriptInterface<IDynamicSpawnInterface> Spawn; // 0x30
	AShooterPlayerController* Player; // 0x40
};

struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UMatchmakingScreen_V2_C : UHLLMatchmaking {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* Anim_Select; // 0x238
	UTextBlock* ActivityText; // 0x240
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x248
	UWidgetSwitcher* ButtonSwitcher; // 0x250
	UbtnSimple_V2_C* CommunityServersButton; // 0x258
	UWidgetSwitcher* FilterSwitcher; // 0x260
	UbtnSimple_V2_C* FindMatchButton; // 0x268
	UGameFiltersScreen_C* GameFiltersScreen; // 0x270
	UHorizontalBox* HorizontalBox_1; // 0x278
	UImage* Image_3; // 0x280
	UImage* Image_4; // 0x288
	UImage* Loading; // 0x290
	UWidgetSwitcher* MatchmakingSwitcher; // 0x298
	UButton* MessageHelp; // 0x2a0
	UOptionsScreen_V2_C* OptionsScreen; // 0x2a8
	UWidgetSwitcher* OptionsSwitcher; // 0x2b0
	UScrollBox* PartyScrollingList; // 0x2b8
	UWidgetSwitcher* ServerListSwitcher; // 0x2c0
	UbtnSimple_V2_C* StartMatchButton; // 0x2c8
	UTextBlock* TimeAsText; // 0x2d0
	float WidthScaling; // 0x2d8
	bool bCurrentEnabledState; // 0x2dc
	UMainMenuWidget_V2_C* MainMenu; // 0x2e0
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x220
};

struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x40
	bool ForceRecompression; // 0x50
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x51
	bool bForceBelowThreshold; // 0x52
	bool bFirstRecompressUsingCurrentOrDefault; // 0x53
	bool bRaiseMaxErrorToExisting; // 0x54
	bool bEnablePerformanceLog; // 0x55
	bool bStripAnimationDataOnDedicatedServer; // 0x56
	bool bTickAnimationOnSkeletalMeshInit; // 0x57
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UWGT_CommendTooltip_List_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* 1; // 0x238
	UTextBlock* 2; // 0x240
	UTextBlock* 3; // 0x248
	UTextBlock* 4; // 0x250
	UTextBlock* 5; // 0x258
	UHLLRoundSummaryPlayer* OwningWidget; // 0x260
	TArray<UTextBlock*> NameWidgets; // 0x268
	int32_t MaxCommendations; // 0x278
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

struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; // 0x40
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48
	USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58
	int32_t EnvelopeFollowerAttackTime; // 0x60
	int32_t EnvelopeFollowerReleaseTime; // 0x64
	float OutputVolume; // 0x68
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x70
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct AHLLMapData_Marker : AHLLMapDataBase {
	EHLLMarker MarkerType; // 0x238
	char MarkerSubIndex; // 0x239
	TWeakObjectPtr<AShooterPlayerState> OwningPlayer; // 0x23c
	FMulticastInlineDelegate OnMovedOrPlacedDelegate; // 0x248
	bool bWantsDisplayed; // 0x258
	float DisplayToggleOnTime; // 0x25c
	float DisplayToggleOffTime; // 0x260
	UHLLIndicatorComponent_Marker* IndicatorComponent; // 0x268
};

struct UHLLMapIcon_SeatBase : UHLLMapIconBase {
	char bColouriseButton : 1; // 0x368
	char bColouriseIcon : 1; // 0x368
};

struct UTorsionBarSuspensionsComponent : USuspensionsComponent {
	float DefaultSuspensionArmLength; // 0xb8
	float RotationSpeed; // 0xbc
	TArray<FTrackedVehicleTorsionBarSuspensionDescriptor> SuspensionDescriptors; // 0xc0
	FTrackedVehicleTorsionBarSuspensionFixedWheel LeftSprocket; // 0xd0
	FTrackedVehicleTorsionBarSuspensionFixedWheel RightSprocket; // 0xe8
	FTrackedVehicleTorsionBarSuspensionFixedWheel LeftRoller; // 0x100
	FTrackedVehicleTorsionBarSuspensionFixedWheel RightRoller; // 0x118
	UTracksComponent* Tracks; // 0x130
	USkeletalMeshComponent* Mesh; // 0x138
};

struct AHLLDispenserItem_StructureAdv : AHLLDispenserItem_StructureBase {
	int32_t RequiredNearbyPlatoonMembers; // 0x488
	TArray<AActor*> DistanceCheckClasses; // 0x490
	float MinDistanceToOther; // 0x4a0
	float MinAllowedEnemyDistance; // 0x4a4
	float MaxPlatoonMemberDistance; // 0x4a8
};

struct UHLLDismemberData : UDataAsset {
	USkeletalMesh* GoreMesh; // 0x30
	UPhysicsAsset* GoreMeshPhysicsAsset; // 0x38
	FName COMBoneName; // 0x40
	float COMImpulseScale; // 0x48
	USoundCue* TearSound; // 0x50
	TArray<FHLLBreakableJointData> BreakableJoints; // 0x58
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
	ECollisionChannel DefaultSightCollisionChannel; // 0x9b
	UBehaviorTreeManager* BehaviorTreeManager; // 0xa0
	UEnvQueryManager* EnvironmentQueryManager; // 0xa8
	UAIPerceptionSystem* PerceptionSystem; // 0xb0
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xb8
	UAIHotSpotManager* HotSpotManager; // 0xc8
	UNavLocalGridManager* NavLocalGrids; // 0xd0
};

struct UTabbedButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UImage* LabelRadio; // 0x238
	UTextBlock* LabelText; // 0x240
	UButton* RootButton; // 0x248
	UTextBlock* SpacerText; // 0x250
	UWidget* ParentWidget; // 0x258
	bool bSelected; // 0x260
	bool bHovered; // 0x261
	FText ButtonText; // 0x268
	bool bHasSectionFocus; // 0x280
	FMulticastInlineDelegate OnClicked; // 0x288
	int32_t TextSize; // 0x298
};

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UWGT_CommanderPanel_C : UHLLCommanderUI {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UImage* GreyOut; // 0x2e8
	UImage* GreyOut_2; // 0x2f0
	UImage* GreyOut_3; // 0x2f8
	UImage* Image_1; // 0x300
	UImage* Image_6; // 0x308
	UImage* Image_7; // 0x310
	UImage* Image_8; // 0x318
	UImage* Image_10; // 0x320
	UImage* Image_11; // 0x328
	UImage* Image_13; // 0x330
	UCanvasPanel* Tooltip; // 0x338
	USizeBox* ToolTipContainer; // 0x340
	UWGT_OverviewMap_V2_C* OverviewMapParent; // 0x348
};

struct UW_GH_GameProgress_PopIndicator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBorder* B_Master; // 0x238
	UBorder* B_StrongPoint; // 0x240
	UGridPanel* GP_Holder; // 0x248
	UHorizontalBox* HB_PopHolder; // 0x250
	UImage* Img_PopI_01; // 0x258
	UImage* Img_PopI_02; // 0x260
	UImage* Img_PopI_03; // 0x268
	bool Population_Enemy; // 0x270
	bool test; // 0x271
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct AGameState : AGameStateBase {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
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

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x220
};

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
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

struct UWeaponFPPAnimationSet : UObject {
	UAnimSequence* PoseInheritance; // 0x28
	UAnimSequence* PoseIdle; // 0x30
	UAnimSequence* PoseADS; // 0x38
	FWeaponAnim Equip; // 0x40
	FWeaponAnim Fire; // 0x68
	FWeaponAnim Bolt; // 0x90
	FWeaponAnim Reload; // 0xb8
	FWeaponAnim ReloadEmpty; // 0xe0
	FWeaponAnim ChangeBarrel; // 0x108
	FWeaponAnim ReloadEnter; // 0x130
	FWeaponAnim ReloadEnterWet; // 0x158
	FWeaponAnim ReloadLoop; // 0x180
	FWeaponAnim ReloadLoopWet; // 0x1a8
	FWeaponAnim ReloadExit; // 0x1d0
	FWeaponAnim ReloadExitEmpty; // 0x1f8
	FWeaponAnim Deploy; // 0x220
	FWeaponAnim Undeploy; // 0x248
	FWeaponAnim ReloadDeployed; // 0x270
	FWeaponAnim ReloadDeployedEmpty; // 0x298
	FWeaponAnim ChangeBarrelDeployed; // 0x2c0
	UAnimMontage* Jump; // 0x2e8
	UAnimMontage* Vault; // 0x2f0
	UAnimMontage* Climb; // 0x2f8
	UAnimMontage* StandToProne; // 0x300
	UAnimMontage* ProneToStand; // 0x308
	UAnimSequence* Sprint; // 0x310
	UBlendSpace* Crawl; // 0x318
};

struct UHLLDispenserListItem : UUserWidget {
	UBorder* RootBorder; // 0x230
	UImage* ItemIcon; // 0x238
	UTextBlock* ItemName; // 0x240
	UTextBlock* ItemLimits; // 0x248
};

struct UWGT_MapSelectButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* Hover; // 0x238
	UWidgetAnimation* Fade; // 0x240
	UHorizontalBox* HB_Mode; // 0x248
	UImage* Image; // 0x250
	UImage* Image_111; // 0x258
	UTextBlock* MapModeField; // 0x260
	UTextBlock* MapNameField; // 0x268
	UImage* MapPreviewImage; // 0x270
	UButton* SelectMapButton; // 0x278
	FString map_DebugName; // 0x280
	UMapChangeMenu_V2_C* parentMenu; // 0x290
	FColor DeselectedColor; // 0x298
	FColor HighlightedColor; // 0x29c
	float DelayTimer; // 0x2a0
};

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UHLLUpgradeData : UDataAsset {
	int32_t UpgradeTime; // 0x30
	int32_t SuppliesCost; // 0x34
	FText UpgradeText; // 0x38
	FSlateBrush UpgradeIcon; // 0x50
	FName ActionScore; // 0xd8
	FName OwnerActionScore; // 0xe0
	float ScoreModifier; // 0xe8
	float OwnerScoreModifier; // 0xec
	int32_t MinContributionForScore; // 0xf0
	EHLLPlayerStat ContributorStatWhenApplied; // 0xf4
	EHLLPlayerStat OwnerStatWhenApplied; // 0xf5
	char bApplyToContributors : 1; // 0xf6
	char bApplyToStructureOwner : 1; // 0xf6
	EUpgradeScoringMethod OwnerScoringMethod; // 0xf7
	EHLLAchievementStat AchievementStat; // 0xf8
	uint32_t IncrementAmount; // 0xfc
	int32_t MinContributionForAchievement; // 0x100
	FTransform UpgradeEffectRelativeTransform; // 0x110
	USoundBase* UpgradeSound; // 0x140
	UParticleSystem* UpgradeParticle; // 0x148
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct AShooterGameMode : AGameMode {
	APawn* BotPawnClass; // 0x308
	APawn* AxisPlayerPawnClass; // 0x310
	APawn* AlliesPlayerPawnClass; // 0x318
	AHLLAdminCamera* AdminCameraClass; // 0x320
	int32_t WarmupTime; // 0x334
	int32_t RoundTime; // 0x338
	int32_t SectorCaptureTime; // 0x33c
	int32_t SectorCaptureProtectionTime; // 0x340
	int32_t DeathScore; // 0x34c
	int32_t MaxBots; // 0x350
	TArray<AShooterAIController*> BotControllers; // 0x358
	TSet<AController*> m_deployedPlayerControllers; // 0x3a8
	TArray<UPendingPlayerDeployment*> m_pendingDeployments; // 0x3f8
	TArray<AShooterPickup*> LevelPickups; // 0x408
	UHLL_AnalyticsServer* m_AnalyticsServer; // 0x428
	FScoreXPModifiers XP_ScoreModifiers; // 0x44c
	float MatchWinMultiplier; // 0x45c
	float MatchLossMultiplier; // 0x460
	int32_t XPPerMatchMinute; // 0x464
	float BonusMultiplierPerCommendation; // 0x468
	int32_t MinMatchTimeForXP; // 0x46c
	UDataTable* ActionScoreTable; // 0x470
	float GlobalScoreModifier; // 0x478
	FHLLRoleModifiers RoleModifiers[0xe]; // 0x47c
	int32_t FinaleTimer; // 0x4ec
	EMatchFinaleState FinaleState; // 0x4f0
	FDateTime TimeFinished; // 0x4f8
	int32_t FinaleTime_EndScreen; // 0x500
	int32_t FinaleTime_Commendations; // 0x504
	int32_t FinaleTime_ProgressionAndGroupPhoto; // 0x508
	float MaximumPunishTime; // 0x50c
	TArray<AHLLTurnBackVolume*> TurnBackAreas; // 0x510
};

struct UHLLResourceNodeIndicator : UHLLIndicatorBase {
	UTextBlock* GenerationText; // 0x2a8
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct AHLLRecoilTester : AActor {
	char NumBurstsToFire; // 0x220
	float LineDrawTime; // 0x224
	float HitDrawTime; // 0x228
	char ShotsPerBurst; // 0x22c
	TArray<FShotOffset> ShotOffsets; // 0x230
	FRecoilAndSpreadState RecoilState; // 0x240
	FRecoilAndSpread RecoilConfig; // 0x248
	UArrowComponent* BaseArrow; // 0x278
	UArrowComponent* AimArrow; // 0x280
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct UWGT_GameMenu_V2_C : UHLLInGameMenu {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UbtnNav_V2_C* btn_FieldManual_2; // 0x268
	UbtnNav_V2_C* btn_LeaveServer; // 0x270
	UbtnNav_V2_C* btn_Options_2; // 0x278
	UbtnNav_V2_C* btn_Quit; // 0x280
	UbtnNav_V2_C* btn_Redeploy; // 0x288
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x290
	UOverlay* DevSpace; // 0x298
	UMapChangeMenu_V2_C* MapChangeMenu; // 0x2a0
	UMenuHeader_C* MenuHeader; // 0x2a8
	UPartyManagementList_C* PartyManagementList; // 0x2b0
	UWidgetSwitcher* PartySwitcher; // 0x2b8
	UHorizontalBox* QuitContainer; // 0x2c0
	UHorizontalBox* RedeployContainer; // 0x2c8
	UReportPlayerDialog_C* ReportPlayerDialog; // 0x2d0
	UTextBlock* SlashFieldManual; // 0x2d8
	UTextBlock* SlashLeaveServer; // 0x2e0
	UTextBlock* SlashOptions; // 0x2e8
	UTextBlock* SlashQuit; // 0x2f0
	UTextBlock* SlashRedeploy; // 0x2f8
	UVerticalBox* VB_Nav; // 0x300
	UW_Menu_HTP_V2_C* W_Menu_HTP; // 0x308
	FMulticastInlineDelegate BackDelegate; // 0x310
	int32_t PopupIndex; // 0x320
	bool bFocusReceived; // 0x324
	bool bPopupVisible; // 0x325
	TArray<UbtnNav_V2_C*> MenuButtons; // 0x328
	bool ReportDialogOpen; // 0x338
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct UHLLSupplyComponent : UActorComponent {
	char bAutoRegisterSupplies : 1; // 0xb0
	FMulticastInlineDelegate OnSuppliesChanged; // 0xb8
	int32_t NumSupplies; // 0xc8
	float SupplyRange; // 0xcc
	uint16_t NumSuppliesRemaining; // 0xd0
	char bRegisteredSupplies : 1; // 0xd2
	FName SupplyUseScore; // 0xd4
	char bScaleScoreByAmount : 1; // 0xdc
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
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
	FMulticastInlineDelegate OnDoubleClicked; // 0x418
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct UARTextureCameraDepth : UARTexture {
	EARDepthQuality DepthQuality; // 0xd8
	EARDepthAccuracy DepthAccuracy; // 0xd9
	bool bIsTemporallySmoothed; // 0xda
};

struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	FMovieSceneSkeletalAnimationParams Params; // 0xe0
	UAnimSequence* AnimSequence; // 0x1b8
	UAnimSequenceBase* Animation; // 0x1c0
	float StartOffset; // 0x1c8
	float EndOffset; // 0x1cc
	float PlayRate; // 0x1d0
	char bReverse : 1; // 0x1d4
	FName SlotName; // 0x1d8
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UChatOverlay : UUserWidget {
	UChat* Chat; // 0x230
	UTextBlock* PromptText; // 0x238
	UTextBlock* AdminMessageText; // 0x240
	UScrollBox* AdminMessageScroller; // 0x248
	UWidgetAnimation* ToggleAdminMessage; // 0x250
	float ScrollSpeed; // 0x258
	float AdminMessage_InitialDelay; // 0x25c
	float AdminMessage_CompletionTime; // 0x260
	UButton* ConsumeClickButton; // 0x268
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
};

struct UShooterDamageType : UDamageType {
	UForceFeedbackEffect* HitForceFeedback; // 0x40
	UForceFeedbackEffect* KilledForceFeedback; // 0x48
	UCameraShake* HitCameraShake; // 0x50
	float HitCameraShakeScale; // 0x58
	float HeadshotDamageMultiplier; // 0x5c
	float LimbDamageMultiplier; // 0x60
	bool bInstantCritHeadshot; // 0x64
	bool bHeadshotsBypassCritical; // 0x65
	bool bAllowCriticalState; // 0x66
	float CriticalBypassDamageThreshold; // 0x68
	float CriticalBypassDamageDistance; // 0x6c
	char bApplyImpulse : 1; // 0x70
	float RagdollImpulse; // 0x74
	float RagdollUpKickImpulse; // 0x78
	float ImpulseFalloff; // 0x7c
	float PointDamageRadius; // 0x80
	char bEnableDismemberment : 1; // 0x84
	float MaxDistFromHitToDismember; // 0x88
	int32_t MaxBreaksPerHit; // 0x8c
	char bApplyVehicleImpulseOnPointDamage : 1; // 0x90
	EHLLArmourPenetration ArmourPenetration; // 0x91
	EHLLArmourPenetration RadialArmourPenetration; // 0x92
	EHLLArmourDamageType ArmourDamageType; // 0x93
	EHLLArmourDamageType RadialArmourDamageType; // 0x94
	float ArmourPassthroughTraceLength; // 0x98
	float InternalModulePenetrationDepth; // 0x9c
	char bBypassArmourDeflection_Impact : 1; // 0xa0
	char bBypassArmourDeflection_Radial : 1; // 0xa0
	char bForceCarryOverArmourDamage : 1; // 0xa0
	float SelfDamageScale; // 0xa4
	float FriendlyDamageScale; // 0xa8
	int64_t BypassFriendlyDamageScale; // 0xb0
	char bSuppressHelmetEject : 1; // 0xb8
	char bNotifyAnimationsPointDamage : 1; // 0xb8
	char bNotifyAnimationsRadialDamage : 1; // 0xb8
	char bBypassDamageFilters : 1; // 0xb8
	int64_t FriendlyDamageFilter; // 0xc0
	int64_t EnemyDamageFilter; // 0xc8
	EHLLDamageType DamageType; // 0xd0
	EHLLDamageOrigin DamageOrigin; // 0xd1
	float MinExecutionDamage; // 0xd4
	float PunishForTeamKill; // 0xd8
	float PunishForSelfKill; // 0xdc
	char bClearPendingPunishments : 1; // 0xe0
	char bRewardAllSeatsOccupants : 1; // 0xe0
	char bBypassSeatProtection : 1; // 0xe0
	char bHasSelfKillAchievement : 1; // 0xe0
	EHLLAchievement SelfKillAchievement; // 0xe1
	TSet<EHLLAchievementStat> EnemyKillStats; // 0xe8
	char bHasEnemyVehicleKillAchievement : 1; // 0x138
	EHLLAchievement VehicleKillAchievement; // 0x139
	TSet<EHLLAchievement> CustomAchievementImplementations; // 0x140
};

struct URangeSliderWithText_V2_C : UHLLUI_OptionSelection {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UImage* FocusEffect; // 0x248
	UTextBlock* Percentage; // 0x250
	USlider* Slider; // 0x258
	USizeBox* SliderSizeBox; // 0x260
	FMulticastInlineDelegate OnValueChanged; // 0x268
	FText Format; // 0x278
	float RangeMin; // 0x290
	float RangeMax; // 0x294
	int32_t MaxDecimalDigits; // 0x298
	float SliderWidthOverride; // 0x29c
	float DisplayedRangeMin; // 0x2a0
	float DisplayedRangeMax; // 0x2a4
	float LastValue; // 0x2a8
	float SliderStepSize; // 0x2ac
	bool bUseDiscreteValue; // 0x2b0
	float DiscreteValue; // 0x2b4
	FSliderStyle InitialSliderStyle; // 0x2b8
	FSliderStyle FocusedSliderStyle; // 0x5f8
	FSlateColor FocusedTextStyle; // 0x938
	FSlateColor InitialTextStyle; // 0x960
	SliderStepType StepType; // 0x988
	float CalculatedStepSize; // 0x98c
	bool 0-1Value; // 0x990
};

struct UHLLRichPresence : UGameInstanceSubsystem {
	float TimeBetweenPresenceUpdates; // 0x30
	FTimerHandle TH_Update; // 0x38
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UHLLAdminCamPlayerEntry : UUserWidget {
	AShooterPlayerState* AssignedPlayer; // 0x230
	char bIsSelected : 1; // 0x238
	char bHiddenByFilter : 1; // 0x238
	UTextBlock* PlayerRole; // 0x240
	UTextBlock* PlayerLevel; // 0x248
	UTextBlock* PlayerName; // 0x250
	UTextBlock* PlayerId; // 0x258
	UHLLAdminCamUI* OwningUI; // 0x260
};

struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58
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

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBPW_PlatoonManagementStack_KickRequest_V2_C : UPlatoonManagementStackKickRequest {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UbtnSimple_V2_C* Button_Cancel; // 0x298
	UbtnSimple_V2_C* Button_MakingRoomForFriend; // 0x2a0
	UbtnSimple_V2_C* Button_NotCommunicating; // 0x2a8
	UbtnSimple_V2_C* Button_NotWithOfficer; // 0x2b0
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
};

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x338
	float LightFalloffExponent; // 0x33c
	float SourceRadius; // 0x340
	float SoftSourceRadius; // 0x344
	float SourceLength; // 0x348
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f0
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x208
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x210
};

struct UBPW_PlatoonManagementStack_Invite_V2_C : UPlatoonManagementStackInvite {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UWidgetAnimation* Pulse; // 0x278
	UUniformGridPanel* ButtonPanel; // 0x280
	UWGT_PlayerVoteButton_C* No; // 0x288
	UTextBlock* txt_VoteSubmit; // 0x290
	UWidgetSwitcher* WidgetSwitcher_1; // 0x298
	UWGT_PlayerVoteButton_C* Yes; // 0x2a0
};

struct UHLLSimpleHealthComponent : UActorComponent {
	float DamageThreshold; // 0xb0
	ESimpleDeathBehaviour DeathBehaviour; // 0xb4
	float PostDeathLifespan; // 0xb8
	FName EnemyScoreForKill; // 0xbc
	EHLLPlayerStat EnemyStatForKill; // 0xc4
	EHint EnemyHintForKill; // 0xc5
	char bDismantleBehaviourOverride : 1; // 0xc6
	ESimpleDeathBehaviour DismantleBehaviour; // 0xc7
	TArray<AController*> KillerInstigators; // 0xc8
	AShooterImpactEffect* DeathEffect; // 0xd8
	FTransform EffectRelativeTransform; // 0xe0
	AHLLVehicleWreck* WreckActor; // 0x110
	char bHandledDeath : 1; // 0x118
	UDamageType* ExplosionDamageType; // 0x120
	float ExplosionDamage; // 0x128
	float ExplosionRadius; // 0x12c
	float ExplosionSuppression; // 0x130
	float ExplosionSuppressionRadius; // 0x134
	FMulticastInlineDelegate OnKilled; // 0x138
	FRepHealthInfo HealthInfo; // 0x148
	ESimpleDeathNotify DeathNotifyBehaviour; // 0x150
	char bDismantleNotifyOverride : 1; // 0x151
	ESimpleDeathNotify DismantleNotifyBehaviour; // 0x152
};

struct AHLLCosmeticCharacterRenderer : AHLLCosmeticCharacter {
	UCineCameraComponent* ViewCamera; // 0x260
	UStaticMeshComponent* BackgroundMesh; // 0x268
};

struct UABP_MG34_FPP_V2_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FAnimNode_Root AnimGraphNode_Root; // 0x278
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2a8
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x3b0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x3f8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x440
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x508
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x610
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x638
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x660
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x688
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x6b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6d8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x750
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x780
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7f8
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x870
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x8a0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x918
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa08
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xac0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xba8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0xbd0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xc18
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xcd8
	FAnimNode_Slot AnimGraphNode_Slot; // 0xd20
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xd68
	float BulletScale; // 0xe70
	bool IsDeployed; // 0xe74
	bool IsUnfolded; // 0xe75
	bool IsBraced; // 0xe76
	bool IsEmpty; // 0xe77
	FRotator BipodRotation; // 0xe78
	float BipodResult; // 0xe84
	UABP_Rifleman_FPP_V2_C* FPPInstance; // 0xe88
	UABP_Rifleman_TPP_V2_C* TPPInstance; // 0xe90
	AShooterCharacter* ShooterCharacter; // 0xe98
	AShooterWeapon* ShooterWeapon; // 0xea0
	float TransitionSpeed; // 0xea8
	ECharacterStance Stance; // 0xeac
};

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
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

struct UVehicleExitLocationComponent : UCapsuleComponent {
	int32_t Priority; // 0x430
};

struct UWGT_BrowserSortButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* RootButton; // 0x238
	USizeBox* RootSBox; // 0x240
	UImage* SortArrow; // 0x248
	UTextBlock* SortLabel; // 0x250
	EHLLUI_ServerSortMode SortType; // 0x258
	FMulticastInlineDelegate OnSort; // 0x260
	float Width; // 0x270
};

struct ATrench_ef01_Mound_C : AActor {
	UStaticMeshComponent* StaticMeshComponent7; // 0x220
	UStaticMeshComponent* StaticMeshComponent4; // 0x228
	UStaticMeshComponent* SM_WoodRubble_011; // 0x230
	UStaticMeshComponent* SM_TrenchPile03; // 0x238
	UStaticMeshComponent* SM_Crate05; // 0x240
	UStaticMeshComponent* SM_Crate04; // 0x248
	UStaticMeshComponent* SM_Crate03; // 0x250
	UStaticMeshComponent* SM_Crate02; // 0x258
	UStaticMeshComponent* SM_Crate01; // 0x260
	UStaticMeshComponent* SM_WoodRubble_03; // 0x268
	UStaticMeshComponent* SM_WoodRubble_06; // 0x270
	UStaticMeshComponent* SM_TrenchPile02; // 0x278
	UStaticMeshComponent* SM_TrenchPile01; // 0x280
	UStaticMeshComponent* StaticMeshComponent17; // 0x288
	UStaticMeshComponent* StaticMeshComponent15; // 0x290
	UStaticMeshComponent* StaticMeshComponent14; // 0x298
	UStaticMeshComponent* StaticMeshComponent9; // 0x2a0
	UStaticMeshComponent* StaticMeshComponent8; // 0x2a8
	UStaticMeshComponent* StaticMeshComponent6; // 0x2b0
	UStaticMeshComponent* StaticMeshComponent5; // 0x2b8
	UStaticMeshComponent* StaticMeshComponent3; // 0x2c0
	UStaticMeshComponent* StaticMeshComponent2; // 0x2c8
	UStaticMeshComponent* StaticMeshComponent0; // 0x2d0
	USceneComponent* SharedRoot; // 0x2d8
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
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

struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xe0
	FMovieSceneFloatChannel Translation[0x2]; // 0xe8
	FMovieSceneFloatChannel Rotation; // 0x228
	FMovieSceneFloatChannel Scale[0x2]; // 0x2c8
	FMovieSceneFloatChannel Shear[0x2]; // 0x408
};

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UHLLRadialMenu_ChildBase : UUserWidget {
	TWeakObjectPtr<UHLLRadialMenu_Base> OwningRadialMenu; // 0x230
};

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct UbtnNav_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* btn_Nav; // 0x238
	UTextBlock* txt_btn_Label; // 0x240
	FText Label; // 0x248
	FSlateFontInfo Font; // 0x260
	bool bUseEnabledColouring; // 0x2b0
	FMulticastInlineDelegate OnClick; // 0x2b8
	bool bSelected; // 0x2c8
	bool bAllCaps; // 0x2c9
	bool bFocus; // 0x2ca
	FButtonStyle InitialButtonStyle; // 0x2d0
	FButtonStyle FocusedButtonStyle; // 0x548
	UTextBlock* ButtonDescriptionTextWidget; // 0x7c0
	FText ButtonDescriptionText; // 0x7c8
	FMulticastInlineDelegate UpdateDescriptionText; // 0x7e0
	FMulticastInlineDelegate OnHover; // 0x7f0
	FMulticastInlineDelegate OnUnhover; // 0x800
	bool bIsMainMenuButton; // 0x810
	FButtonStyle MainMenuStyle; // 0x818
};

struct AHLLDispenserItem_ResourceNode : AHLLDispenserItem_StructureAdv {
	FText InvalidPlacement_BaseSector; // 0x4b0
	FText InvalidPlacement_NoFrontline; // 0x4c8
};

struct UForceFeedbackComponent : USceneComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x1f0
	char bAutoDestroy : 1; // 0x1f8
	char bStopWhenOwnerDestroyed : 1; // 0x1f8
	char bLooping : 1; // 0x1f8
	char bIgnoreTimeDilation : 1; // 0x1f8
	char bOverrideAttenuation : 1; // 0x1f8
	float IntensityMultiplier; // 0x1fc
	UForceFeedbackAttenuation* AttenuationSettings; // 0x200
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x208
	FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2b8
};

struct ATankDriverSeat : ATankSeatBase {
	UStaticMeshComponent* InteriorMesh; // 0x990
	USeatCameraController* CameraController; // 0x998
};

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UWGT_DialogBoxButton_V2_C : UHLLDialogButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
	UOverlay* ButtonOverlay; // 0x260
	UImage* ButtonPrompt; // 0x268
	FSlateColor ColTextHovered; // 0x270
	FSlateColor ColText; // 0x298
	FButtonStyle InitialisedButtonStyle; // 0x2c0
	FButtonStyle FocusedButtonStyle; // 0x538
	UButton* Button; // 0x7b0
	FSlateBrush ConfirmPromptStyle; // 0x7b8
	FSlateBrush CancelPromptStyle; // 0x840
	FSlateBrush PlaystationConfirmButton; // 0x8c8
	FSlateBrush PlaystationCancelButton; // 0x950
	FSlateBrush XboxConfirmButton; // 0x9d8
	FSlateBrush XboxCancelButton; // 0xa60
	int32_t CurrentButtonIndex; // 0xae8
	FSlateBrush PlaystationIgnoreButton; // 0xaf0
	FSlateBrush XboxIgnoreButton; // 0xb78
	FSlateBrush IgnorePromptStyle; // 0xc00
};

struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x4f0
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

struct UShooterGameUserSettings : UGameUserSettings {
	int32_t HLL_GlobalQualityLevel; // 0x120
	int32_t HLL_SSAOQualityLevel; // 0x124
	int32_t TeamNameplateDistIndex; // 0x128
	int32_t UnitNameplateDistIndex; // 0x12c
	int32_t SeatNameplateDistIndex; // 0x130
	float NameplateSwitchRatio; // 0x134
	float PlayerNameplateOpacity; // 0x138
	bool bUseNameplateOcclusion; // 0x13c
	FName SelectedGamepadLayout; // 0x140
	float HLL_ResolutionScale; // 0x148
	bool bAnalyticsEnabled; // 0x14c
	char HLLSettingsVersion; // 0x14e
	bool bIsLanMatch; // 0x150
	float Brightness; // 0x154
	bool MotionBlur; // 0x158
	float MouseSensitivity; // 0x15c
	float ADSMouseSensitivity; // 0x160
	bool InvertMouseVehicle; // 0x164
	bool InvertMouseFirstPerson; // 0x165
	float GamepadSensitivity; // 0x168
	float GamepadSensitivityY; // 0x16c
	float ADSGamepadSensitivity; // 0x170
	float ADSGamepadSensitivityY; // 0x174
	float ScopedGamepadSensitivity; // 0x178
	float GamepadCursorSensitivity; // 0x17c
	float GamepadMovementDeadZone; // 0x180
	float GamepadLookDeadZone; // 0x184
	EHLLAimAssistLevel GamepadAimAssist; // 0x188
	bool InvertAnalogVehicleYAxis; // 0x189
	bool InvertAnalogVehicleXAxis; // 0x18a
	bool InvertAnalogFirstPersonYAxis; // 0x18b
	bool InvertAnalogFirstPersonXAxis; // 0x18c
	bool ToggleSteadyAim; // 0x18d
	bool ToggleCrouch; // 0x18e
	bool ToggleADS; // 0x18f
	bool ToggleSprint; // 0x190
	bool ToggleLean; // 0x191
	bool HideKickVoteRequests; // 0x192
	float MasterVolume; // 0x194
	float MusicVolume; // 0x198
	float SfxVolume; // 0x19c
	float VoiceVolume; // 0x1a0
	float MicVolume; // 0x1a4
	float UIVolume_3D; // 0x1a8
	float UIVolume_2D; // 0x1ac
	bool bManualBolting; // 0x1b0
	float FOV; // 0x1b4
	bool bIsDedicatedServer; // 0x1b8
	USoundClass* MasterAudioClass; // 0x1c0
	USoundClass* SFXAudioClass; // 0x1c8
	USoundClass* MusicAudioClass; // 0x1d0
	USoundClass* UIAudioClass_3D; // 0x1d8
	USoundClass* UIAudioClass_2D; // 0x1e0
	FScalabilityLevelsSnapshot ScalabilityLevelsSnapshot; // 0x1e8
	bool bHideEmptyServers; // 0x218
	bool bHideFullServers; // 0x219
	bool bHideOfficialServers; // 0x21a
	bool bHideCommunityServers; // 0x21b
	bool bHidePasswordedServers; // 0x21c
	float DeadBodyDespawnDelay; // 0x220
	bool bProfanityFilterEnabled; // 0x224
	bool bShowChatOnNewMessage; // 0x225
	TArray<FHLLSavedCharacterCosmetics> SavedCosmetics; // 0x228
	char HLLCosmeticsVersion; // 0x238
	EFaction FavDisplayFaction; // 0x239
	EPlayerRole FavDisplayRole; // 0x23a
	TArray<FHLLSavedCharacterLoadout> SavedLoadouts; // 0x240
	EHLLAntiAliasingMethod AntiAliasingMethod; // 0x250
	TArray<bool> CompletedHints; // 0x258
	int32_t HintsVersion; // 0x268
	bool bHintsEnabled; // 0x26c
	FString Hints; // 0x270
	bool bLinkMarkersToHUD; // 0x280
	float MarkerFadeScale; // 0x284
	float POIFadeScale; // 0x288
	bool bHasShownDisclaimer; // 0x28c
	float HUDFadeTimeScale; // 0x290
	EHUDMode HUDMode; // 0x294
	char bDisableFPPBullets : 1; // 0x295
	FMulticastInlineDelegate OnResolutionChangeReverted; // 0x298
	FString ClanTag; // 0x2d0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x2e0
	FStreamerModeSettings StreamModeSettings; // 0x2e1
	bool bShowCommandMessages; // 0x2e5
	bool VibrationEnabled; // 0x2e6
	EHLLVibrationIntensityLevel VibrationLevel; // 0x2e7
	bool AdaptiveTriggersEnabled; // 0x2e8
	EHLLAdaptiveTriggerIntensityLevel AdaptiveTriggersLevel; // 0x2e9
	float ControllerAccelerationXValue; // 0x2ec
	float ControllerAccelerationYValue; // 0x2f0
	float MapIconScale; // 0x310
	bool bMapPingRepeating; // 0x330
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

struct UHLLDispenserListItem_Garrison : UHLLDispenserListItem_StructureBase {
	UTextBlock* TeamLimitText; // 0x258
};

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
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

struct UTeamSelectionOption_V2_C : UHLLDeployment_TeamSelectItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	FSlateColor TextColour_Hovered; // 0x270
	FSlateColor TextColour_Default; // 0x298
	FLinearColor IconColour_Hovered; // 0x2c0
	FLinearColor IconColour_Default; // 0x2d0
	UButtonPromptsInfo_V2_C* ButtonPrompts; // 0x2e0
	bool bFocus; // 0x2e8
};

struct AMapData_Marker_C : AHLLMapData_Marker {
	USceneComponent* DefaultSceneRoot; // 0x270
};

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe0
	FMovieSceneEventSectionData EventData; // 0x158
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

struct UWGT_PlayerVoteButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* Button; // 0x238
	UImage* ButtonPrompt; // 0x240
	UTextBlock* ButtonText; // 0x248
	UHLLKeyText* KeyText; // 0x250
	EPlayerVote Type; // 0x258
	FMulticastInlineDelegate Clicked; // 0x260
	TArray<FSlateBrush> GamepadButtonIcons; // 0x270
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct AShooterWeapon_Ballistic : AShooterWeapon {
	UHLLBallisticsComponent_Character* BallisticsComponent; // 0x8b8
	TArray<FZeroAngle> ZeroAngles; // 0x8c0
	char ZeroAngleIndex; // 0x8d0
	bool bIsMultiShotWeapon; // 0x8d1
	char MultiShotCount; // 0x8d2
	TArray<FShotOffset> MultiShotOffsets; // 0x8d8
	FBallisticShotID WeaponSeed; // 0x8e8
	FRepShot RepShot; // 0x8ec
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0x80
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x90
	FSoundModulation Modulation; // 0xa0
	USoundClass* ParentClass; // 0xb0
};

struct UTankCommanderSeatUI : UHLLTankSeatUI_Base {
	URichTextBlock* ZoomKeyText; // 0x280
	URichTextBlock* PingKeyText; // 0x288
};

struct UHLLOverviewMap : UUserWidget {
	TArray<UHLLMapIconBase*> MapIcons; // 0x248
	int32_t IconFilters; // 0x284
	char bHighlightLocked : 1; // 0x288
	UHLLMapIconBase* HighlightedIcon; // 0x290
	UCanvasPanel* RootPanel; // 0x298
	UHLLScrollZoom* MapImage; // 0x2a0
	UCanvasPanel* IconPanel; // 0x2a8
	UTextBlock* ZoomText; // 0x2b0
	FSlateBrush FriendlySectorBrush; // 0x2b8
	FSlateBrush EnemySectorBrush; // 0x340
	FSlateBrush NeutralSectorBrush; // 0x3c8
	TWeakObjectPtr<UHLLMapIconBase> SelectedIcon; // 0x450
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct UHLLMapTooltip_SeatBaseItem : UUserWidget {
	UTextBlock* PlayerName; // 0x230
	UTextBlock* PlayerRole; // 0x238
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
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

struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	FName AttachSocketName; // 0x108
	FName AttachComponentName; // 0x110
	EAttachmentRule AttachmentLocationRule; // 0x118
	EAttachmentRule AttachmentRotationRule; // 0x119
	EAttachmentRule AttachmentScaleRule; // 0x11a
	EDetachmentRule DetachmentLocationRule; // 0x11b
	EDetachmentRule DetachmentRotationRule; // 0x11c
	EDetachmentRule DetachmentScaleRule; // 0x11d
};

struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe0
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

struct AHLLSeat_ArtilleryGunner : AHLLSeat_ArtilleryBase {
	bool bCanPrecisionAim; // 0x981
	float SlowPitchMultiplier; // 0x984
	float SlowYawMultiplier; // 0x988
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UWGT_MapIcon_Outpost_C : UHLLMapIcon_Outpost {
	FPointerToUberGraphFrame UberGraphFrame; // 0x640
	UBorder* Icon; // 0x648
	UScaleBox* Scaler; // 0x650
	UW_HoverToolTip_Explained_C* Widget_TooltipRef; // 0x658
};

struct UWGT_UnitDesignationButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* RootButton; // 0x238
	FMulticastInlineDelegate Pressed; // 0x240
	EPlatoonMetaType Designation; // 0x250
	TArray<UTexture2D*> DesginationBrushes; // 0x258
};

struct AHLLPlatoon : AActor {
	int32_t ID; // 0x228
	EPlatoonType Type; // 0x22c
	ETeam Team; // 0x22d
	AShooterPlayerState* Officer; // 0x230
	FPlatoonMeta PlatoonMeta; // 0x238
	TArray<AShooterPlayerState*> Members; // 0x240
	UCurveVector* SuppressionModifierCurve; // 0x250
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xb8
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

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
};

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
};

struct UHLLUI_LoadoutEntryTooltip : UUserWidget {
	UTextBlock* ItemName; // 0x230
	UTextBlock* ItemDescription; // 0x238
	UTextBlock* ItemAmmoCount; // 0x240
	UImage* ItemAmmoIcon; // 0x248
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
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

struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x68
};

struct URetainerBox : UContentWidget {
	bool RenderOnInvalidation; // 0x120
	bool RenderOnPhase; // 0x121
	int32_t Phase; // 0x124
	int32_t PhaseCount; // 0x128
	UMaterialInterface* EffectMaterial; // 0x130
	FName TextureParameter; // 0x138
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x158
	FText DisplayName; // 0x168
};

struct UHLLBinoWidget : UHLLScopeWidget {
	UWidgetAnimation* RangeAnim; // 0x250
};

struct UHLLLoaderUI : UHLLSeatWidgetBase {
	UHLLArmourWeaponUI* ArtilleryWeaponInfo; // 0x270
	URichTextBlock* ReloadKeyText; // 0x278
	URichTextBlock* RotateKeyText; // 0x280
};

struct AServerQueueBeaconClient : AOnlineBeaconClient {
	ULocalPlayer* LocalPlayer; // 0x370
};

struct UHTP_Widget_Role_Loadout_Officer_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_3; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_5; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_8; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_9; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_10; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x268
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x270
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x278
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x280
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_5; // 0x288
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x290
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_12; // 0x298
	UImage* icn_faction; // 0x2a0
	UImage* Image_10; // 0x2a8
	UImage* Image_17; // 0x2b0
};

struct UHLLAnimNotify_CasingEject : UAnimNotify {
	char NumToPlay; // 0x38
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct USkeletalMesh : UStreamableRenderAsset {
	USkeleton* Skeleton; // 0x60
	FBoxSphereBounds ImportedBounds; // 0x68
	FBoxSphereBounds ExtendedBounds; // 0x84
	FVector PositiveBoundsExtension; // 0xa0
	FVector NegativeBoundsExtension; // 0xac
	TArray<FSkeletalMaterial> Materials; // 0xb8
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xc8
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0xd8
	FPerPlatformInt MinLOD; // 0x138
	FPerPlatformBool DisableBelowMinLodStripping; // 0x13c
	EAxis SkelMirrorAxis; // 0x13d
	EAxis SkelMirrorFlipAxis; // 0x13e
	char bUseFullPrecisionUVs : 1; // 0x13f
	char bUseHighPrecisionTangentBasis : 1; // 0x13f
	char bHasBeenSimplified : 1; // 0x13f
	char bHasVertexColors : 1; // 0x13f
	char bEnablePerPolyCollision : 1; // 0x13f
	UBodySetup* BodySetup; // 0x140
	UPhysicsAsset* PhysicsAsset; // 0x148
	UPhysicsAsset* ShadowPhysicsAsset; // 0x150
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x158
	TArray<UMorphTarget*> MorphTargets; // 0x168
	UAnimInstance* PostProcessAnimBlueprint; // 0x2f0
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x2f8
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x308
	TArray<UAssetUserData*> AssetUserData; // 0x338
	TArray<USkeletalMeshSocket*> Sockets; // 0x350
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x370
};

struct AShooterPlayerController : APlayerController {
	EPlayerRole DebugRole; // 0x598
	ETeam DebugTeam; // 0x599
	char bInfiniteAmmo : 1; // 0x59a
	char bInfiniteClip : 1; // 0x59a
	char bInvincible : 1; // 0x59a
	UActorComponent* DeploymentLogicClass; // 0x5a0
	UDeploymentLogic* DeploymentLogicComponent; // 0x5a8
	UPostProcessComponent* FatalStatePostProcess; // 0x5f0
	UPostProcessComponent* CriticalStatePostProcess; // 0x5f8
	UShooterGameViewportClient* ViewportClient; // 0x630
	UInputComponent* m_WeaponInput; // 0x638
	UInputComponent* m_WeaponScopeInput; // 0x640
	float ScopedGamepadSensitivity; // 0x648
	UInputComponent* m_keyBindingInputComponent; // 0x650
	TWeakObjectPtr<AActor> m_laserTaggedActor; // 0x680
	UInputComponent* m_roundSummaryInput; // 0x688
	UInputComponent* m_gameMenuInput; // 0x690
	UInputComponent* m_votingMenuInput; // 0x698
	UInputComponent* m_voiceInput; // 0x6a0
	UInputComponent* m_chatRadialInput; // 0x6a8
	UInputComponent* m_inventoryRadialInput; // 0x6b0
	UInputComponent* m_markerRadialInput; // 0x6b8
	UInputComponent* CurrentSeatInput; // 0x6c8
	UMaterialParameterCollection* PostProcessParameterCollection; // 0x6d0
	UMaterialInterface* MasterSharpeningMaterial; // 0x6d8
	float MinutesToShowGarrisonOutpostPlacementHint; // 0x740
	USoundBase* HeadshotNotifySound; // 0x758
	USoundBase* HeadshotSound; // 0x760
	USoundBase* BodyNotifySound; // 0x768
	float BodyNotifyMaxDist; // 0x770
	UHLL_AnalyticsClient* m_AnalyticsClient; // 0x778
	float SFXVolumeFadeOutSpeed; // 0x780
	TWeakObjectPtr<AShooterPlayerState> CommendedPlayer; // 0x788
	TArray<AShooterPlayerState*> PlayersWhoCommendedMe; // 0x790
	ADeathCamera* DeathCameraClass; // 0x7a8
	FReconID PlayerReconID; // 0x7f0
	FPlayerVoteContainer PlayerVoteData; // 0x7f8
	AHLLAdminCamera* CurrentAdminCamera; // 0x910
	TSoftObjectPtr<USoundBase> MatchCountdownSound; // 0x928
	int32_t MatchCountdownTimeSeconds; // 0x950
	UAudioComponent* MatchCountdownAC; // 0x958
	UVibrationEventController* HeadshotNotifyVibrationController; // 0x960
	UVibrationEventController* HeadshotSelfVibrationController; // 0x968
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

struct UHLLPlayerIndicator : UHLLNameplateIndicatorBase {
	UBorder* RootBorder; // 0x2b8
	UBorder* IconBorder; // 0x2c0
	UTextBlock* PlayerNameText; // 0x2c8
	UWidgetSwitcher* IconSwitcher; // 0x2d0
	UTextBlock* PlayerRoleGlyph; // 0x2d8
};

struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220
};

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48
};

struct UHLLArmourMaterial : UPhysicalMaterial {
	FHLLArmourSpec ArmourProperties; // 0x80
};

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe0
	FIntegralCurve ActorGuidIndexCurve; // 0x190
	TArray<FString> ActorGuidStrings; // 0x210
};

struct UTabbedButtonContainer : UUserWidget {
	UShooterGameViewportClient* ViewportClient; // 0x230
};

struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UHTP_Widget_Role_Commander_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UGridPanel* GridPanel_2; // 0x238
	UHTP_Widget_Role_Loadout_Commander_C* HTP_Widget_Role_Loadout_Commander; // 0x240
	UImage* Image_1; // 0x248
	UImage* Image_2; // 0x250
	UImage* Image_3; // 0x258
	URichTextBlock* RichTextBlock_1; // 0x260
	bool isNotWidescreen; // 0x268
	bool isUltrawide; // 0x269
	FVector2D imageDimensions; // 0x26c
	float wrapLength; // 0x274
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

struct ABP_StartScreenAnimation_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	UCameraComponent* Camera; // 0x228
	UParticleSystemComponent* ShootingInwards; // 0x230
	UParticleSystemComponent* BackgroundShooting; // 0x238
	UStaticMeshComponent* TankSmokeMat; // 0x240
	UParticleSystemComponent* MuzzleFlashSingle; // 0x248
	UParticleSystemComponent* BulletsL; // 0x250
	UParticleSystemComponent* BulletsR; // 0x258
	USkeletalMeshComponent* 3_PeopleRig; // 0x260
	UParticleSystemComponent* BulletsRare; // 0x268
	UParticleSystemComponent* ExplosionSmoke; // 0x270
	UParticleSystemComponent* TankSmoke; // 0x278
	UStaticMeshComponent* Propeller2; // 0x280
	UStaticMeshComponent* Propeller1; // 0x288
	UStaticMeshComponent* Propeller; // 0x290
	UParticleSystemComponent* PlaneSmoke; // 0x298
	USkeletalMeshComponent* 1_Main_Mat; // 0x2a0
	UParticleSystemComponent* MuzzleFlashesL; // 0x2a8
	UParticleSystemComponent* MuzzleFlashesR; // 0x2b0
	UStaticMeshComponent* 3_Mid_Mat1; // 0x2b8
	UStaticMeshComponent* Dust; // 0x2c0
	UStaticMeshComponent* BackgroundBlack; // 0x2c8
	USceneComponent* Scene; // 0x2d0
	UStaticMeshComponent* 1_Main_Fire_Mat; // 0x2d8
	UStaticMeshComponent* 1_Particles_Mat; // 0x2e0
	UStaticMeshComponent* 2_BC_Plane1_Mat_Inst; // 0x2e8
	UStaticMeshComponent* 2_BC_Plane2_Mat_Inst; // 0x2f0
	UStaticMeshComponent* 2_BC_Plane3_Mat_Inst; // 0x2f8
	UStaticMeshComponent* 4_Back_Mat; // 0x300
	UStaticMeshComponent* 2_Explosion_Mat_Inst; // 0x308
	UStaticMeshComponent* 2_FG_Smoke_Mat; // 0x310
	UStaticMeshComponent* 3_Mid_Mat; // 0x318
	UStaticMeshComponent* 2_Tank1_Mat_Inst; // 0x320
	UStaticMeshComponent* 2_Tank2_Mat_Inst; // 0x328
	UStaticMeshComponent* 2_Bombers_Mat_Inst; // 0x330
	float Initial_Load_4_8_A14C542D403442EF0256779B43192828; // 0x338
	float Initial_Load_0___5_Seconds_A14C542D403442EF0256779B43192828; // 0x33c
	ETimelineDirection Initial_Load__Direction_A14C542D403442EF0256779B43192828; // 0x340
	UTimelineComponent* Initial Load; // 0x348
	float Animation_Side_Movement_Shift_87EF145149461A3DE79791BEC5D0B1DB; // 0x350
	ETimelineDirection Animation__Direction_87EF145149461A3DE79791BEC5D0B1DB; // 0x354
	UTimelineComponent* Animation; // 0x358
	UMaterialInstanceDynamic* TankSmokeDynamicMaterial; // 0x360
	UMaterialInstanceDynamic* ExplosionDynamicMaterial; // 0x368
	UStartScreen_V2_C* StartScreenV2; // 0x370
	AActor* PreviousViewTarget; // 0x378
};

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UPlayerInfo_C : UUserWidget {
	UTextBlock* PlayerName; // 0x230
	UTextBlock* ReadyText; // 0x238
	UTextBlock* XPText; // 0x240
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UHLLUseContextBase : UUserWidget {
	char bOverrideOffset : 1; // 0x230
	float OverrideOffset; // 0x234
};

struct UHLLGoreComponent : UActorComponent {
	UHLLDismemberData* DismembermentData; // 0xb0
	UDataTable* DecalSets; // 0xc8
	float DecalRelevancyDistance; // 0x120
	float SplatterRadius; // 0x124
	char bAllBodiesGenerateGibs : 1; // 0x128
	float LargeGibMassThreshold; // 0x12c
	float GibImpact_SmallThreshold; // 0x130
	float GibImpact_LargeThreshold; // 0x134
	float BodyTrailCheckRate; // 0x138
	float BodyTrailSpawnDist2D; // 0x13c
	float BodyTrailTraceDistance; // 0x140
	UParticleSystem* BleedEmitter; // 0x148
	TWeakObjectPtr<UParticleSystemComponent> PSC_BleedEmitter; // 0x150
	FVector2D MinMaxBleedDecalSpawnRate; // 0x158
	float BleedDecalRandomOffset; // 0x160
	float SplatterTraceDistanceModifier; // 0x164
	float ImpactTraceDistance; // 0x168
	float BloodPoolMaxScale; // 0x16c
	float BloodPoolScaleSpeed; // 0x170
	float MinTimeBetweenDamageResponse; // 0x174
	EHLLGoreTrailType CurrentTrailMode; // 0x178
};

struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xe8
};

struct UWGT_LoadoutEntry_Large_C : UHLLUI_LoadoutEntry {
	USizeBox* RootSizer; // 0x268
};

struct URecoilCurve : UCurveBase {
	FRichCurve Vertical; // 0x30
	FRichCurve Horizontal; // 0xb0
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x418
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

struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0xa8
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xe8
	UEnum* StateEnum; // 0x108
	AActor* SharingActor; // 0x110
};

struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0x88
};

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UMediaSoundComponent : USynthComponent {
	EMediaSoundChannels Channels; // 0x6d0
	bool DynamicRateAdjustment; // 0x6d4
	float RateAdjustmentFactor; // 0x6d8
	FFloatRange RateAdjustmentRange; // 0x6dc
	UMediaPlayer* MediaPlayer; // 0x6f0
};

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
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

struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
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
	char bAnimNotifiesEnabled : 1; // 0x268
};

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x410
	float FrustumAngle; // 0x414
	float FrustumAspectRatio; // 0x418
	float FrustumStartDist; // 0x41c
	float FrustumEndDist; // 0x420
	UTexture* Texture; // 0x428
};

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0x78
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CooldownTime; // 0x68
};

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UHLLCommanderUI : UUserWidget {
	UHLLCommanderUISubCategory* SubCategoryWidgetClass; // 0x240
	FText DefaultTooltip; // 0x248
	FText ItemTooltip; // 0x260
	TArray<UHLLCommanderUIItem*> ListItems; // 0x278
	TArray<FScrollerItems> OrderedListItems; // 0x288
	UHLLCommanderUIItem* SelectedItem; // 0x298
	UHLLCommanderUIItem* HoveredItem; // 0x2a0
	TArray<UHLLCommanderUISubCategory*> SubCategoryWidgets; // 0x2a8
	UTextBlock* AbilityTooltip; // 0x2c0
	UScrollBox* MunitionsScroller; // 0x2c8
	UScrollBox* ManpowerScroller; // 0x2d0
	UScrollBox* FuelScroller; // 0x2d8
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct AShooterWeapon_Melee : AShooterWeapon {
	float MaxReachDistance; // 0x8b8
	float SweepSphereRadius; // 0x8bc
	FName CameraTargetBone; // 0x8c0
	float CameraTrackingSpeed; // 0x8c8
	float MeleeAttackDamage; // 0x8cc
	float WeaponBloodPerHit; // 0x8d0
	float HandsBloodPerHit; // 0x8d4
	float ScreenSplatterPerHit; // 0x8d8
	UHLLMeleeAttackDamage* MeleeDamageType; // 0x8e0
	AShooterImpactEffect* ImpactTemplate; // 0x8e8
	AShooterCharacter* CurrentTarget; // 0x8f0
	FHitResult ReplicatedHit; // 0x8f8
	EReplicatedMeleeAttackState ReplicatedMeleeAttackState; // 0x980
};

struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xe0
	FMovieSceneFloatChannel LeftCurve; // 0x180
	FMovieSceneFloatChannel RightCurve; // 0x220
	FMovieSceneFloatChannel BottomCurve; // 0x2c0
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x220
};

struct UWGT_RadialInventory_Segment_C : UHLLRadialMenu_WeaponSegment {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	USizeBox* IconSizer; // 0x2d8
	UImage* SegmentBG; // 0x2e0
	FLinearColor SegmentOffColour; // 0x2e8
	FLinearColor SegmentColour; // 0x2f8
	UMaterialInstanceDynamic* DynMatSegmentBG; // 0x308
};

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x260
};

struct UWGT_PlayerVote_C : UHLLVoteWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* PulseAnim; // 0x268
	UImage* ButtonPrompt; // 0x270
	UWidgetSwitcher* ContainerSwitch; // 0x278
	UButton* DismissButton; // 0x280
	UHLLKeyText* DismissKey; // 0x288
	UWGT_PlayerVoteButton_C* Ignore; // 0x290
	UWGT_PlayerVoteButton_C* No; // 0x298
	UTextBlock* PlayerVote; // 0x2a0
	UTextBlock* RatioText; // 0x2a8
	UWGT_PlayerVoteButton_C* Yes; // 0x2b0
	FSlateColor TitleColour; // 0x2b8
	FSlateColor TitleColour_Expired; // 0x2e0
	FSlateColor TitleColour_Failed; // 0x308
	FSlateColor TitleColour_Passed; // 0x330
	TArray<FSlateBrush> GamepadButtonIcons; // 0x358
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

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0xf0
};

struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
};

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct UBPW_PlatoonList_V2_C : UPlatoonList {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	UHorizontalBox* HorizontalBox_1; // 0x2b0
	UVerticalBox* VerticalBox_1; // 0x2b8
	FMulticastInlineDelegate CreateUnit; // 0x2c0
	UW_HoverToolTip_C* wTooltip; // 0x2d0
	FText Tooltip; // 0x2d8
	UDeploymentScreen_V2_C* DeploymentScreen; // 0x2f0
	UVerticalBox* PlatoonContainer; // 0x2f8
	UbtnSimple_V2_C* CreateUnitButton; // 0x300
	int32_t NumberOfPlatoons; // 0x308
	int32_t NumberOfPlatoonMembers; // 0x30c
	int32_t CurrentNumberOfPlayers; // 0x310
	int32_t PrevFocusedPlatoon; // 0x314
};

struct URuntimeVirtualTextureComponent : USceneComponent {
	URuntimeVirtualTexture* VirtualTexture; // 0x1f0
	bool bUseStreamingLowMipsInEditor; // 0x1f8
	AActor* BoundsSourceActor; // 0x200
};

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x288
	bool bCaptureRotation; // 0x290
	UTextureRenderTargetCube* TextureTargetLeft; // 0x298
	UTextureRenderTargetCube* TextureTargetRight; // 0x2a0
	UTextureRenderTarget2D* TextureTargetODS; // 0x2a8
	float IPD; // 0x2b0
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct AHLLSupplyDrop_Crate : AHLLSupplyDropBase {
	UHLLSupplyComponent* SupplyComponent; // 0x2e0
};

struct AHLLBarbedWireVolume : AHLLPhysicsVolume {
	float MaxCharacterMovementSpeed; // 0x270
	float OverlapParticleDelay; // 0x274
	float OverlapSoundDelay; // 0x278
	float OverlapPainDelay; // 0x27c
	float RemoveTimeTolerance; // 0x280
	float VelocityTolerance; // 0x284
	TSoftObjectPtr<UParticleSystem> OverlapParticle; // 0x288
	TSoftObjectPtr<USoundBase> OverlapSound; // 0x2b0
	bool bSkipParticlesForLocalPlayer; // 0x2d8
	UParticleSystem* LoadedParticle; // 0x2e0
	USoundBase* LoadedSound; // 0x2e8
};

struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
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

struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	FName VoiceSubsystemNameOverride; // 0x28
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UHLLBallisticsComponent : UActorComponent {
	UHLLProjectile* ProjectileClass; // 0xb0
	char ProjectileParticleInterval; // 0xb8
	bool bPendingNulls; // 0xc0
	bool bPendingHits; // 0xc1
	FBallisticBatchedNulls PendingBatchedNulls; // 0xc8
	FBallisticBatchedHits PendingBatchedHits; // 0xd8
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
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

struct AHLL_GameHUD_C : AShooterHUD {
	USceneComponent* DefaultSceneRoot; // 0x788
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x68
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct URuntimeVirtualTextureStreamingProxy : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0xe8
	bool bSinglePhysicalSpace; // 0xf4
	uint32_t BuildHash; // 0xf8
};

struct USoundNodeParameterDelay : USoundNode {
	FName ParamName; // 0x48
	float DefaultDelay; // 0x50
	float MaxDelay; // 0x54
};

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x410
	float Intensity; // 0x418
	float Tightness; // 0x41c
	char bPreviewVectorField : 1; // 0x420
};

struct UHLLAudioVolumeComponent : UBoxComponent {
	float Priority; // 0x438
	FReverbSettings ReverbSettings; // 0x440
	FInteriorSettings InteriorSettings; // 0x460
	EAudioVolumeType VolumeType; // 0x484
};

struct UW_GH_GameProgress_Sector_new_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* A_Sector_Enter; // 0x238
	UWidgetAnimation* A_SectorAlert; // 0x240
	UProgressBar* AttackCap; // 0x248
	UImage* BG; // 0x250
	UImage* BGColor; // 0x258
	UProgressBar* Cap; // 0x260
	UOverlay* Meter; // 0x268
	UImage* Ownership; // 0x270
	UImage* ResourceIcon; // 0x278
	ESectorCapturingState Sector_State; // 0x280
	bool Sector_Idle; // 0x281
	bool Sector_Locked; // 0x282
	bool Sector_Friendly; // 0x283
	bool Sector_Cooldown; // 0x284
	ETeam Sector_OwningTeam; // 0x285
	bool Sector_FriendlyFlipped; // 0x286
	bool Sector_Entered; // 0x287
	int32_t Sector_Index; // 0x288
};

struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UDynamicEntryBoxBase : UWidget {
	EDynamicBoxType EntryBoxType; // 0x108
	FVector2D EntrySpacing; // 0x10c
	TArray<FVector2D> SpacingPattern; // 0x118
	FSlateChildSize EntrySizeRule; // 0x128
	EHorizontalAlignment EntryHorizontalAlignment; // 0x130
	EVerticalAlignment EntryVerticalAlignment; // 0x131
	int32_t MaxElementSize; // 0x134
	FUserWidgetPool EntryWidgetPool; // 0x148
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	FGuid CameraGuid; // 0xe0
	FMovieSceneObjectBindingID CameraBindingID; // 0xf0
};

struct AHLLHowitzerShell : AActor {
	float IncomingDelay; // 0x228
	float ExplodeDelay; // 0x238
	float PostExplodeLifespan; // 0x248
	USoundBase* IncomingSound; // 0x250
	FVector IncomingSoundOffset; // 0x258
	AShooterImpactEffect* ExplosionTemplate; // 0x268
	float Damage; // 0x270
	float DamageRadius; // 0x274
	float DamageFalloff; // 0x278
	UShooterDamageType* DamageType; // 0x280
	char bIgnoreDamageOcclusion : 1; // 0x288
	float Suppression; // 0x28c
	float SuppressionRadius; // 0x290
	ETeam ShellTeam; // 0x294
	char bExploded : 1; // 0x295
	char bIncoming : 1; // 0x295
	FVector_NetQuantize ShotOrigin; // 0x298
	USoundBase* FireSound; // 0x2a8
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

struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
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

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UHLLDialCommon : UUserWidget {
	FVector2D MinMaxInput; // 0x230
	FVector2D MinMaxAngle; // 0x238
	float TargetDialValue; // 0x240
	float CurrentDialValue; // 0x244
	float DialInterpSpeed; // 0x248
	UImage* Needle; // 0x250
};

struct AM3Halftrack : ABaseHalftrack {
	UM3SuspensionComponent* Suspension; // 0x550
	UHalftrackWheelsComponent* HalftrackWheels; // 0x558
	UTracksComponent* Tracks; // 0x560
};

struct AHLLMineBase : AHLLExplosive {
	UStaticMeshComponent* MineMesh; // 0x3b0
	TSet<EObjectTypeQuery> FilterObjectTypes; // 0x3b8
	char bQueryOverlapsOnDeath : 1; // 0x408
	char bQueryHitsForDetonation : 1; // 0x408
	ECollisionChannel HitQueryChannel; // 0x409
	float MinOverlapVelocity; // 0x40c
	float CapsuleHalfHeight; // 0x410
	float CapsuleRadius; // 0x414
	float CapsuleOffset; // 0x418
	FCollisionProfileName QueryProfile; // 0x41c
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x638
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x648
	FGuid GenerationGuid; // 0x658
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
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

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct ABoatSpawnPath : AActor {
	int32_t SpawnGroup; // 0x220
	USplineComponent* PathSpline; // 0x228
};

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct UHLLSupplyIndicator : UHLLIndicatorBase {
	UTextBlock* SupplyText; // 0x2a8
};

struct UMain_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* Sector_AlertNew; // 0x238
	UWidgetAnimation* Sector_FadeIn; // 0x240
	UBorder* B_StrongPoint; // 0x248
	UOverlay* Detail; // 0x250
	UScaleBox* GameProgressHostPanel; // 0x258
	UScaleBox* GameProgressOffensiveHostPanel; // 0x260
	UHorizontalBox* HB_SectorAction; // 0x268
	UHorizontalBox* HB_SectorName; // 0x270
	UHorizontalBox* HB_StrongPoint; // 0x278
	UImage* Image_1; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_8; // 0x290
	UImage* Image_9; // 0x298
	UBackgroundBlur* LockTimerBackground; // 0x2a0
	UW_GH_GameProgress_PopIndicator_C* PopIndicator_Enemy; // 0x2a8
	UW_GH_GameProgress_PopIndicator_C* PopIndicator_Friendly; // 0x2b0
	UTextBlock* SA_Txt_SectorInfo; // 0x2b8
	UTextBlock* SA_Txt_SectorInstruction; // 0x2c0
	UTextBlock* Txt_SectorName; // 0x2c8
	UTextBlock* Txt_State; // 0x2d0
	UTextBlock* Txt_UnlockText; // 0x2d8
	UVerticalBox* vb_CaptureLock; // 0x2e0
	USoundBase* Alert_AudioCue; // 0x2e8
	TArray<int32_t> Population_IndicatorCount; // 0x2f0
	int32_t Sector_Previous; // 0x300
	UW_GH_GameProgress_C* GameProgress_Warfare; // 0x308
	UW_GH_GameProgress_Offensive_C* GameProgress_Offensive; // 0x310
	bool LockedState_Previous; // 0x318
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

struct UButtonPromptInfo : UUserWidget {
	UHorizontalBox* ButtonPrompts; // 0x230
	UShooterGameViewportClient* ViewportClient; // 0x238
	APlayerController* PlayerController; // 0x250
	UInputComponent* ButtonPromptInputComponent; // 0x258
};

struct UMovieSceneSubSection : UMovieSceneSection {
	FMovieSceneSectionParameters Parameters; // 0xe0
	float StartOffset; // 0x104
	float TimeScale; // 0x108
	float PrerollTime; // 0x10c
	UMovieSceneSequence* SubSequence; // 0x110
	LazyObjectProperty ActorToRecord; // 0x118
	FString TargetSequenceName; // 0x138
	FDirectoryPath TargetPathToRecordTo; // 0x148
};

struct UPlatoonList : UUserWidget {
	UTextBlock* TitleText; // 0x248
	UTextBlock* PlatoonCount; // 0x250
	UPanelWidget* PlatoonListPanel; // 0x258
	UUserWidget* btn_CreateNew; // 0x260
	char bReadOnly : 1; // 0x268
	char bInfiniteUnitCount : 1; // 0x268
	FText Title; // 0x270
	EPlatoonType PlatoonType; // 0x288
	UPlatoonListItem* PlatoonListItemWidgetClass; // 0x290
	AHLLPlatoon* LastKnownPlayerPlatoon; // 0x298
	ETeam LastPlayerTeam; // 0x2a0
};

struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct UHLLArmourCollisionMesh : UStaticMeshComponent {
	FName ArmourAttachSocket; // 0x4a0
	TSoftObjectPtr<UMaterialParameterCollection> DebugMPC; // 0x4a8
};

struct UHLLIndicatorComponent_Sector : UHLLIndicatorComponent {
	int32_t SectorIndex; // 0xc0
};

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
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

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe0
	FMovieSceneBoolChannel BoolCurve; // 0xe8
};

struct UHLLUI_CosmeticCategory : UUserWidget {
	TWeakObjectPtr<UHLLUI_CharacterSelection> ParentPanel; // 0x230
	EHLLCosmeticType CosmeticType; // 0x238
	UHLLUI_CosmeticItem* ItemWidget; // 0x240
	UHLLUI_CosmeticItemTooltip* ItemTooltipWidget; // 0x248
	int32_t MaxColumns; // 0x250
	TArray<UHLLUI_CosmeticItem*> ActiveItems; // 0x258
	UHLLUI_CosmeticItemTooltip* TooltipItem; // 0x268
	char bShowingVariations : 1; // 0x270
	UScrollBox* ItemScroller; // 0x278
	UUniformGridPanel* ItemPanel; // 0x280
	UTextBlock* CategoryText; // 0x288
	UTextBlock* UnlockedText; // 0x290
};

struct UPlatoonMemberBase : UUserWidget {
	UTextBlock* RoleGlyph; // 0x230
	UTextBlock* PlayerName; // 0x238
	UImage* POIIcon; // 0x240
	UWidgetAnimation* Anim_PingMarker; // 0x248
	AShooterPlayerState* AssignedPlayer; // 0x250
	float POIFadeTime; // 0x258
	float POIPulseSpeed; // 0x25c
	FLinearColor POIPulseColour; // 0x260
};

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0x90
};

struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x270
	FDelegate PostEvaluateAnimEvent; // 0x278
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x438
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x448
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120
};

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
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

struct UPhysicsConstraintComponent : USceneComponent {
	AActor* ConstraintActor1; // 0x1f0
	FConstrainComponentPropName ComponentName1; // 0x1f8
	AActor* ConstraintActor2; // 0x200
	FConstrainComponentPropName ComponentName2; // 0x208
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x220
	FMulticastInlineDelegate OnConstraintBroken; // 0x228
	FConstraintInstance ConstraintInstance; // 0x238
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UWGT_Disclaimer_tipColumn_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* FadeIn; // 0x238
	UImage* img_icon; // 0x240
	URichTextBlock* rtxt_Description; // 0x248
	UTextBlock* txt_label; // 0x250
	FSlateBrush IconImage; // 0x258
	FText LabelText; // 0x2e0
	FText DescriptionText; // 0x2f8
};

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220
};

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x220
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe0
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct AHLLArmourWeapon_Howitzer : AHLLArmourWeapon {
	TArray<AHLLHowitzerShell*> Shells; // 0x470
	FVector2D MinMaxRange; // 0x480
	FVector2D MinMaxDispersion; // 0x488
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88
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
	TArray<AActor*> LevelSequenceActors; // 0x88
	TArray<ULevelStreaming*> StreamingLevels; // 0x98
	FStreamingLevelsToConsider StreamingLevelsToConsider; // 0xa8
	FString StreamingLevelsPrefix; // 0xd0
	ULevel* CurrentLevelPendingVisibility; // 0xe0
	ULevel* CurrentLevelPendingInvisibility; // 0xe8
	UDemoNetDriver* DemoNetDriver; // 0xf0
	AParticleEventManager* MyParticleEventManager; // 0xf8
	APhysicsVolume* DefaultPhysicsVolume; // 0x100
	char bAreConstraintsDirty : 1; // 0x11e
	UNavigationSystemBase* NavigationSystem; // 0x120
	AGameModeBase* AuthorityGameMode; // 0x128
	AGameStateBase* GameState; // 0x130
	UAISystemBase* AISystem; // 0x138
	UAvoidanceManager* AvoidanceManager; // 0x140
	TArray<ULevel*> Levels; // 0x148
	TArray<FLevelCollection> LevelCollections; // 0x158
	UGameInstance* OwningGameInstance; // 0x188
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x190
	UCanvas* CanvasForRenderingToTarget; // 0x1a0
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1a8
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x200
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x210
	UWorldComposition* WorldComposition; // 0x560
	FWorldPSCPool PSCPool; // 0x5f0
};

struct AShooterPlayerCameraManager : APlayerCameraManager {
	float ViewPitchMinWhenProne; // 0x2738
	float ViewPitchMaxWhenProne; // 0x273c
	ACameraActor* MapStartCamera; // 0x2740
	UMaterialParameterCollection* WeaponFOVParameters; // 0x2748
};

struct UPitchYawControllerComponent : UActorComponent {
	float YawRate; // 0xb0
	char bLimitYawRange : 1; // 0xb4
	float MaxAllowedYaw; // 0xb8
	float PitchRate; // 0xbc
	float PitchAngleMin; // 0xc0
	float PitchAngleMax; // 0xc4
	float ServerUpdateRate; // 0xc8
	USoundBase* PitchSound; // 0xd0
	USoundBase* PitchStopSound; // 0xd8
	USoundBase* YawSound; // 0xe0
	USoundBase* YawStopSound; // 0xe8
	uint32_t RemotePackedTargetPitchAndYaw; // 0x10c
	FPitchYawControllerEffectiveSpeedRep EffectiveSpeedRep; // 0x110
	UObject* PitchEffect; // 0x128
	UObject* PitchStopEffect; // 0x130
	UObject* YawEffect; // 0x138
	UObject* YawStopEffect; // 0x140
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
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

struct APreplacedGarrisonSpawn : AActor {
	APreplacedGarrison* GarrisonToSpawn; // 0x220
};

struct AShooterPickup_Ammo : AShooterPickup {
	int32_t AmmoClips; // 0x260
	AShooterWeapon* WeaponType; // 0x268
};

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct UWGT_CosmeticItem_Small_V2_C : UHLLUI_CosmeticItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278
	UWidgetAnimation* Hover; // 0x280
	UImage* EquipedIndicator; // 0x288
	UBorder* SelectBorder; // 0x290
	bool bFocus; // 0x298
	FMulticastInlineDelegate OnCreateCosmeticButtons; // 0x2a0
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

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28
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
};

struct AHLLMapData_AdminCamera : AHLLMapDataBase {
	AHLLAdminCamera* AdminCam; // 0x238
};

struct UHTP_Widget_Role_Loadout_Sniper_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x268
	UImage* icn_faction; // 0x270
	UImage* Image_10; // 0x278
	UImage* Image_17; // 0x280
};

struct UPlatformGameInstance : UGameInstance {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x198
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1a8
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1b8
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1c8
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1d8
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x1e8
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x1f8
	FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x208
	FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x218
	FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x228
	FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x238
	FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x248
	FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x258
};

struct ACinematicPantherStub : AActor {
	USkeletalMeshComponent* TankMesh; // 0x220
	TArray<UStaticMeshComponent*> AllTrackTiles; // 0x228
	UStaticMeshComponent* TrackTile_000; // 0x238
	UStaticMeshComponent* TrackTile_001; // 0x240
	UStaticMeshComponent* TrackTile_002; // 0x248
	UStaticMeshComponent* TrackTile_003; // 0x250
	UStaticMeshComponent* TrackTile_004; // 0x258
	UStaticMeshComponent* TrackTile_005; // 0x260
	UStaticMeshComponent* TrackTile_006; // 0x268
	UStaticMeshComponent* TrackTile_007; // 0x270
	UStaticMeshComponent* TrackTile_008; // 0x278
	UStaticMeshComponent* TrackTile_009; // 0x280
	UStaticMeshComponent* TrackTile_010; // 0x288
	UStaticMeshComponent* TrackTile_011; // 0x290
	UStaticMeshComponent* TrackTile_012; // 0x298
	UStaticMeshComponent* TrackTile_013; // 0x2a0
	UStaticMeshComponent* TrackTile_014; // 0x2a8
	UStaticMeshComponent* TrackTile_015; // 0x2b0
	UStaticMeshComponent* TrackTile_016; // 0x2b8
	UStaticMeshComponent* TrackTile_017; // 0x2c0
	UStaticMeshComponent* TrackTile_018; // 0x2c8
	UStaticMeshComponent* TrackTile_019; // 0x2d0
	UStaticMeshComponent* TrackTile_020; // 0x2d8
	UStaticMeshComponent* TrackTile_021; // 0x2e0
	UStaticMeshComponent* TrackTile_022; // 0x2e8
	UStaticMeshComponent* TrackTile_023; // 0x2f0
	UStaticMeshComponent* TrackTile_024; // 0x2f8
	UStaticMeshComponent* TrackTile_025; // 0x300
	UStaticMeshComponent* TrackTile_026; // 0x308
	UStaticMeshComponent* TrackTile_027; // 0x310
	UStaticMeshComponent* TrackTile_028; // 0x318
	UStaticMeshComponent* TrackTile_029; // 0x320
	UStaticMeshComponent* TrackTile_030; // 0x328
	UStaticMeshComponent* TrackTile_031; // 0x330
	UStaticMeshComponent* TrackTile_032; // 0x338
	UStaticMeshComponent* TrackTile_033; // 0x340
	UStaticMeshComponent* TrackTile_034; // 0x348
	UStaticMeshComponent* TrackTile_035; // 0x350
	UStaticMeshComponent* TrackTile_036; // 0x358
	UStaticMeshComponent* TrackTile_037; // 0x360
	UStaticMeshComponent* TrackTile_038; // 0x368
	UStaticMeshComponent* TrackTile_039; // 0x370
	UStaticMeshComponent* TrackTile_040; // 0x378
	UStaticMeshComponent* TrackTile_041; // 0x380
	UStaticMeshComponent* TrackTile_042; // 0x388
	UStaticMeshComponent* TrackTile_043; // 0x390
	UStaticMeshComponent* TrackTile_044; // 0x398
	UStaticMeshComponent* TrackTile_045; // 0x3a0
	UStaticMeshComponent* TrackTile_046; // 0x3a8
	UStaticMeshComponent* TrackTile_047; // 0x3b0
	UStaticMeshComponent* TrackTile_048; // 0x3b8
	UStaticMeshComponent* TrackTile_049; // 0x3c0
	UStaticMeshComponent* TrackTile_050; // 0x3c8
	UStaticMeshComponent* TrackTile_051; // 0x3d0
	UStaticMeshComponent* TrackTile_052; // 0x3d8
	UStaticMeshComponent* TrackTile_053; // 0x3e0
	UStaticMeshComponent* TrackTile_054; // 0x3e8
	UStaticMeshComponent* TrackTile_055; // 0x3f0
	UStaticMeshComponent* TrackTile_056; // 0x3f8
	UStaticMeshComponent* TrackTile_057; // 0x400
	UStaticMeshComponent* TrackTile_058; // 0x408
	UStaticMeshComponent* TrackTile_059; // 0x410
	UStaticMeshComponent* TrackTile_060; // 0x418
	UStaticMeshComponent* TrackTile_061; // 0x420
	UStaticMeshComponent* TrackTile_062; // 0x428
	UStaticMeshComponent* TrackTile_063; // 0x430
	UStaticMeshComponent* TrackTile_064; // 0x438
	UStaticMeshComponent* TrackTile_065; // 0x440
	UStaticMeshComponent* TrackTile_066; // 0x448
	UStaticMeshComponent* TrackTile_067; // 0x450
	UStaticMeshComponent* TrackTile_068; // 0x458
	UStaticMeshComponent* TrackTile_069; // 0x460
	UStaticMeshComponent* TrackTile_070; // 0x468
	UStaticMeshComponent* TrackTile_071; // 0x470
	UStaticMeshComponent* TrackTile_072; // 0x478
	UStaticMeshComponent* TrackTile_073; // 0x480
	UStaticMeshComponent* TrackTile_074; // 0x488
	UStaticMeshComponent* TrackTile_075; // 0x490
	UStaticMeshComponent* TrackTile_076; // 0x498
	UStaticMeshComponent* TrackTile_077; // 0x4a0
	UStaticMeshComponent* TrackTile_078; // 0x4a8
	UStaticMeshComponent* TrackTile_079; // 0x4b0
	UStaticMeshComponent* TrackTile_080; // 0x4b8
	UStaticMeshComponent* TrackTile_081; // 0x4c0
	UStaticMeshComponent* TrackTile_082; // 0x4c8
	UStaticMeshComponent* TrackTile_083; // 0x4d0
	UStaticMeshComponent* TrackTile_084; // 0x4d8
	UStaticMeshComponent* TrackTile_085; // 0x4e0
	UStaticMeshComponent* TrackTile_086; // 0x4e8
	UStaticMeshComponent* TrackTile_087; // 0x4f0
	UStaticMeshComponent* TrackTile_088; // 0x4f8
	UStaticMeshComponent* TrackTile_089; // 0x500
	UStaticMeshComponent* TrackTile_090; // 0x508
	UStaticMeshComponent* TrackTile_091; // 0x510
	UStaticMeshComponent* TrackTile_092; // 0x518
	UStaticMeshComponent* TrackTile_093; // 0x520
	UStaticMeshComponent* TrackTile_094; // 0x528
	UStaticMeshComponent* TrackTile_095; // 0x530
	UStaticMeshComponent* TrackTile_096; // 0x538
	UStaticMeshComponent* TrackTile_097; // 0x540
	UStaticMeshComponent* TrackTile_098; // 0x548
	UStaticMeshComponent* TrackTile_099; // 0x550
	UStaticMeshComponent* TrackTile_101; // 0x558
	UStaticMeshComponent* TrackTile_102; // 0x560
	UStaticMeshComponent* TrackTile_103; // 0x568
	UStaticMeshComponent* TrackTile_104; // 0x570
	UStaticMeshComponent* TrackTile_105; // 0x578
	UStaticMeshComponent* TrackTile_106; // 0x580
	UStaticMeshComponent* TrackTile_107; // 0x588
	UStaticMeshComponent* TrackTile_108; // 0x590
	UStaticMeshComponent* TrackTile_109; // 0x598
	UStaticMeshComponent* TrackTile_110; // 0x5a0
	UStaticMeshComponent* TrackTile_111; // 0x5a8
	UStaticMeshComponent* TrackTile_112; // 0x5b0
	UStaticMeshComponent* TrackTile_113; // 0x5b8
	UStaticMeshComponent* TrackTile_114; // 0x5c0
	UStaticMeshComponent* TrackTile_115; // 0x5c8
	UStaticMeshComponent* TrackTile_116; // 0x5d0
	UStaticMeshComponent* TrackTile_117; // 0x5d8
	UStaticMeshComponent* TrackTile_118; // 0x5e0
	UStaticMeshComponent* TrackTile_119; // 0x5e8
	UStaticMeshComponent* TrackTile_120; // 0x5f0
	UStaticMeshComponent* TrackTile_121; // 0x5f8
	UStaticMeshComponent* TrackTile_122; // 0x600
	UStaticMeshComponent* TrackTile_123; // 0x608
	UStaticMeshComponent* TrackTile_124; // 0x610
	UStaticMeshComponent* TrackTile_125; // 0x618
	UStaticMeshComponent* TrackTile_126; // 0x620
	UStaticMeshComponent* TrackTile_127; // 0x628
	UStaticMeshComponent* TrackTile_128; // 0x630
	UStaticMeshComponent* TrackTile_129; // 0x638
	UStaticMeshComponent* TrackTile_130; // 0x640
	UStaticMeshComponent* TrackTile_131; // 0x648
	UStaticMeshComponent* TrackTile_132; // 0x650
	UStaticMeshComponent* TrackTile_133; // 0x658
	UStaticMeshComponent* TrackTile_134; // 0x660
	UStaticMeshComponent* TrackTile_135; // 0x668
	UStaticMeshComponent* TrackTile_136; // 0x670
	UStaticMeshComponent* TrackTile_137; // 0x678
	UStaticMeshComponent* TrackTile_138; // 0x680
	UStaticMeshComponent* TrackTile_139; // 0x688
	UStaticMeshComponent* TrackTile_140; // 0x690
	UStaticMeshComponent* TrackTile_141; // 0x698
	UStaticMeshComponent* TrackTile_142; // 0x6a0
	UStaticMeshComponent* TrackTile_143; // 0x6a8
	UStaticMeshComponent* TrackTile_144; // 0x6b0
	UStaticMeshComponent* TrackTile_145; // 0x6b8
	UStaticMeshComponent* TrackTile_146; // 0x6c0
	UStaticMeshComponent* TrackTile_147; // 0x6c8
	UStaticMeshComponent* TrackTile_148; // 0x6d0
	UStaticMeshComponent* TrackTile_149; // 0x6d8
	UStaticMeshComponent* TrackTile_150; // 0x6e0
	UStaticMeshComponent* TrackTile_151; // 0x6e8
	UStaticMeshComponent* TrackTile_152; // 0x6f0
	UStaticMeshComponent* TrackTile_153; // 0x6f8
	UStaticMeshComponent* TrackTile_154; // 0x700
	UStaticMeshComponent* TrackTile_155; // 0x708
	UStaticMeshComponent* TrackTile_156; // 0x710
	UStaticMeshComponent* TrackTile_157; // 0x718
	UStaticMeshComponent* TrackTile_158; // 0x720
	UStaticMeshComponent* TrackTile_159; // 0x728
	UStaticMeshComponent* TrackTile_160; // 0x730
	UStaticMeshComponent* TrackTile_161; // 0x738
	UStaticMeshComponent* TrackTile_162; // 0x740
	UStaticMeshComponent* TrackTile_163; // 0x748
	UStaticMeshComponent* TrackTile_164; // 0x750
	UStaticMeshComponent* TrackTile_165; // 0x758
	UStaticMeshComponent* TrackTile_166; // 0x760
	UStaticMeshComponent* TrackTile_167; // 0x768
	UStaticMeshComponent* TrackTile_168; // 0x770
	UStaticMeshComponent* TrackTile_169; // 0x778
	UStaticMeshComponent* TrackTile_170; // 0x780
	UStaticMeshComponent* TrackTile_171; // 0x788
	UStaticMeshComponent* TrackTile_172; // 0x790
	UStaticMeshComponent* TrackTile_173; // 0x798
	UStaticMeshComponent* TrackTile_174; // 0x7a0
	UStaticMeshComponent* TrackTile_175; // 0x7a8
	UStaticMeshComponent* TrackTile_176; // 0x7b0
	UStaticMeshComponent* TrackTile_177; // 0x7b8
	UStaticMeshComponent* TrackTile_178; // 0x7c0
	UStaticMeshComponent* TrackTile_179; // 0x7c8
	UStaticMeshComponent* TrackTile_180; // 0x7d0
	UStaticMeshComponent* TrackTile_181; // 0x7d8
	UStaticMeshComponent* TrackTile_182; // 0x7e0
	UStaticMeshComponent* TrackTile_183; // 0x7e8
	UStaticMeshComponent* TrackTile_184; // 0x7f0
	UStaticMeshComponent* TrackTile_185; // 0x7f8
	UStaticMeshComponent* TrackTile_186; // 0x800
	UStaticMeshComponent* TrackTile_187; // 0x808
	UStaticMeshComponent* TrackTile_188; // 0x810
	UStaticMeshComponent* TrackTile_189; // 0x818
	UStaticMeshComponent* TrackTile_190; // 0x820
	UStaticMeshComponent* TrackTile_191; // 0x828
	UStaticMeshComponent* TrackTile_192; // 0x830
};

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
};

struct UWGT_CosmeticCategory_C : UHLLUI_CosmeticCategory {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	UObject* LastSelected; // 0x2b0
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x78
};

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
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

struct UHLLNameplateIndicatorBase : UHLLIndicatorBase {
	char bLimitViewDistanceWhenLaserTagged : 1; // 0x2a8
	char bOnlyShowWhenLaserTagged : 1; // 0x2a8
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

struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct AShooterPickup_Health : AShooterPickup {
	int32_t Health; // 0x260
};

struct ATankCommanderSeat : ATankSeatBase {
	UStaticMeshComponent* InteriorMesh; // 0x980
	USeatCameraController* CameraController; // 0x988
	float PitchMin; // 0x990
	float PitchMax; // 0x994
	float PitchRate; // 0x998
	float YawRate; // 0x99c
};

struct UHLLUI_AvailableRoleItem : UHLLUI_RoleItem {
	bool IsAvailable; // 0x268
	FLinearColor IconColour_Current; // 0x26c
	FLinearColor IconColour_Available; // 0x27c
	FLinearColor IconColour_NotAvailable; // 0x28c
	UTextBlock* RoleLimits; // 0x2a0
};

struct UComboBoxOptionButton_V2_C : UHLLComboOption {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UImage* FocusEffect_2; // 0x248
	UButton* OptionButton; // 0x250
	UTextBlock* OptionTextBlock; // 0x258
	FButtonStyle FocusedButtonStyle; // 0x260
	FSlateColor HoveredTextColor; // 0x4d8
	FButtonStyle InitialButtonStyle; // 0x500
	FSlateColor NormalTextColor; // 0x778
	UComboBoxString* ParentComboBox; // 0x7a0
};

struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UNextWaveTimer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* TextBlock_1; // 0x238
	UBorder* Timer; // 0x240
	UTextBlock* TimerText; // 0x248
	UTextBlock* txt_label; // 0x250
};

struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38
};

struct UHLLTeamLoadouts : UDataAsset {
	TArray<FLoadout> Rifleman; // 0x30
	TArray<FLoadout> Assault; // 0x40
	TArray<FLoadout> AutomaticRifleman; // 0x50
	TArray<FLoadout> Medic; // 0x60
	TArray<FLoadout> Spotter; // 0x70
	TArray<FLoadout> Support; // 0x80
	TArray<FLoadout> MachineGunner; // 0x90
	TArray<FLoadout> AntiTank; // 0xa0
	TArray<FLoadout> Engineer; // 0xb0
	TArray<FLoadout> Officer; // 0xc0
	TArray<FLoadout> Sniper; // 0xd0
	TArray<FLoadout> Crewman; // 0xe0
	TArray<FLoadout> TankCommander; // 0xf0
	TArray<FLoadout> ArmyCommander; // 0x100
};

struct UW_HotkeyBoundKey_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UHLLKeyText* AutoTextBinding; // 0x238
	UImage* img_icon; // 0x240
	UImage* img_key; // 0x248
	FName KeyBind; // 0x250
	FSlateBrush IconBrush; // 0x258
	bool isKey; // 0x2e0
};

struct UTileView : UListView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct UHLLCriticalPlayerIndicator : UHLLIndicatorBase {
	FSlateBrush BandageBrush; // 0x2a8
	FSlateBrush CriticalBrush; // 0x330
	char bShowBandageWhenOffscreen : 1; // 0x3b8
	char bShowCriticalWhenOffscreen : 1; // 0x3b8
	UCurveFloat* BandagePulseCurve; // 0x3c0
	UCurveFloat* CriticalPulseCurve; // 0x3c8
	UCurveFloat* PulseSizeCurve; // 0x3d0
	UTextBlock* DistanceText; // 0x3e0
	UImage* Line; // 0x3e8
};

struct UHLLRadialMenu_ChatBase : UHLLRadialMenu_Base {
	UHLLRadialMenu_ChatSegment* SegmentClass; // 0x318
	UTextBlock* ChatName; // 0x320
	UTextBlock* ChatDesc; // 0x328
	UTextBlock* ChatVisibility; // 0x330
};

struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x270
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x278
	float Alpha; // 0x280
	bool bStateBool; // 0x284
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58
};

struct ACinematicTigerStub : AActor {
	USkeletalMeshComponent* TankMesh; // 0x220
	TArray<UStaticMeshComponent*> AllLeftTrackTiles; // 0x228
	TArray<UStaticMeshComponent*> AllRightTrackTiles; // 0x238
	UStaticMeshComponent* RightTrackTile_000; // 0x248
	UStaticMeshComponent* RightTrackTile_001; // 0x250
	UStaticMeshComponent* RightTrackTile_002; // 0x258
	UStaticMeshComponent* RightTrackTile_003; // 0x260
	UStaticMeshComponent* RightTrackTile_004; // 0x268
	UStaticMeshComponent* RightTrackTile_005; // 0x270
	UStaticMeshComponent* RightTrackTile_006; // 0x278
	UStaticMeshComponent* RightTrackTile_007; // 0x280
	UStaticMeshComponent* RightTrackTile_008; // 0x288
	UStaticMeshComponent* RightTrackTile_009; // 0x290
	UStaticMeshComponent* RightTrackTile_010; // 0x298
	UStaticMeshComponent* RightTrackTile_011; // 0x2a0
	UStaticMeshComponent* RightTrackTile_012; // 0x2a8
	UStaticMeshComponent* RightTrackTile_013; // 0x2b0
	UStaticMeshComponent* RightTrackTile_014; // 0x2b8
	UStaticMeshComponent* RightTrackTile_015; // 0x2c0
	UStaticMeshComponent* RightTrackTile_016; // 0x2c8
	UStaticMeshComponent* RightTrackTile_017; // 0x2d0
	UStaticMeshComponent* RightTrackTile_018; // 0x2d8
	UStaticMeshComponent* RightTrackTile_019; // 0x2e0
	UStaticMeshComponent* RightTrackTile_020; // 0x2e8
	UStaticMeshComponent* RightTrackTile_021; // 0x2f0
	UStaticMeshComponent* RightTrackTile_022; // 0x2f8
	UStaticMeshComponent* RightTrackTile_023; // 0x300
	UStaticMeshComponent* RightTrackTile_024; // 0x308
	UStaticMeshComponent* RightTrackTile_025; // 0x310
	UStaticMeshComponent* RightTrackTile_026; // 0x318
	UStaticMeshComponent* RightTrackTile_027; // 0x320
	UStaticMeshComponent* RightTrackTile_028; // 0x328
	UStaticMeshComponent* RightTrackTile_029; // 0x330
	UStaticMeshComponent* RightTrackTile_030; // 0x338
	UStaticMeshComponent* RightTrackTile_031; // 0x340
	UStaticMeshComponent* RightTrackTile_032; // 0x348
	UStaticMeshComponent* RightTrackTile_033; // 0x350
	UStaticMeshComponent* RightTrackTile_034; // 0x358
	UStaticMeshComponent* RightTrackTile_035; // 0x360
	UStaticMeshComponent* RightTrackTile_036; // 0x368
	UStaticMeshComponent* RightTrackTile_037; // 0x370
	UStaticMeshComponent* RightTrackTile_038; // 0x378
	UStaticMeshComponent* RightTrackTile_039; // 0x380
	UStaticMeshComponent* RightTrackTile_040; // 0x388
	UStaticMeshComponent* RightTrackTile_041; // 0x390
	UStaticMeshComponent* RightTrackTile_042; // 0x398
	UStaticMeshComponent* RightTrackTile_043; // 0x3a0
	UStaticMeshComponent* RightTrackTile_044; // 0x3a8
	UStaticMeshComponent* RightTrackTile_045; // 0x3b0
	UStaticMeshComponent* RightTrackTile_046; // 0x3b8
	UStaticMeshComponent* RightTrackTile_047; // 0x3c0
	UStaticMeshComponent* RightTrackTile_048; // 0x3c8
	UStaticMeshComponent* RightTrackTile_049; // 0x3d0
	UStaticMeshComponent* RightTrackTile_050; // 0x3d8
	UStaticMeshComponent* RightTrackTile_051; // 0x3e0
	UStaticMeshComponent* RightTrackTile_052; // 0x3e8
	UStaticMeshComponent* RightTrackTile_053; // 0x3f0
	UStaticMeshComponent* RightTrackTile_054; // 0x3f8
	UStaticMeshComponent* RightTrackTile_055; // 0x400
	UStaticMeshComponent* RightTrackTile_056; // 0x408
	UStaticMeshComponent* RightTrackTile_057; // 0x410
	UStaticMeshComponent* RightTrackTile_058; // 0x418
	UStaticMeshComponent* RightTrackTile_059; // 0x420
	UStaticMeshComponent* RightTrackTile_060; // 0x428
	UStaticMeshComponent* RightTrackTile_061; // 0x430
	UStaticMeshComponent* RightTrackTile_062; // 0x438
	UStaticMeshComponent* RightTrackTile_063; // 0x440
	UStaticMeshComponent* RightTrackTile_064; // 0x448
	UStaticMeshComponent* RightTrackTile_065; // 0x450
	UStaticMeshComponent* RightTrackTile_066; // 0x458
	UStaticMeshComponent* RightTrackTile_067; // 0x460
	UStaticMeshComponent* RightTrackTile_068; // 0x468
	UStaticMeshComponent* RightTrackTile_069; // 0x470
	UStaticMeshComponent* RightTrackTile_070; // 0x478
	UStaticMeshComponent* RightTrackTile_071; // 0x480
	UStaticMeshComponent* RightTrackTile_072; // 0x488
	UStaticMeshComponent* RightTrackTile_073; // 0x490
	UStaticMeshComponent* RightTrackTile_074; // 0x498
	UStaticMeshComponent* RightTrackTile_075; // 0x4a0
	UStaticMeshComponent* RightTrackTile_076; // 0x4a8
	UStaticMeshComponent* RightTrackTile_077; // 0x4b0
	UStaticMeshComponent* RightTrackTile_078; // 0x4b8
	UStaticMeshComponent* RightTrackTile_079; // 0x4c0
	UStaticMeshComponent* RightTrackTile_080; // 0x4c8
	UStaticMeshComponent* RightTrackTile_081; // 0x4d0
	UStaticMeshComponent* RightTrackTile_082; // 0x4d8
	UStaticMeshComponent* RightTrackTile_083; // 0x4e0
	UStaticMeshComponent* RightTrackTile_084; // 0x4e8
	UStaticMeshComponent* RightTrackTile_085; // 0x4f0
	UStaticMeshComponent* RightTrackTile_086; // 0x4f8
	UStaticMeshComponent* RightTrackTile_087; // 0x500
	UStaticMeshComponent* RightTrackTile_088; // 0x508
	UStaticMeshComponent* RightTrackTile_089; // 0x510
	UStaticMeshComponent* RightTrackTile_090; // 0x518
	UStaticMeshComponent* RightTrackTile_091; // 0x520
	UStaticMeshComponent* RightTrackTile_092; // 0x528
	UStaticMeshComponent* RightTrackTile_093; // 0x530
	UStaticMeshComponent* RightTrackTile_094; // 0x538
	UStaticMeshComponent* RightTrackTile_095; // 0x540
	UStaticMeshComponent* RightTrackTile_096; // 0x548
	UStaticMeshComponent* RightTrackTile_097; // 0x550
	UStaticMeshComponent* RightTrackTile_098; // 0x558
	UStaticMeshComponent* RightTrackTile_099; // 0x560
	UStaticMeshComponent* RightTrackTile_101; // 0x568
	UStaticMeshComponent* RightTrackTile_102; // 0x570
	UStaticMeshComponent* RightTrackTile_103; // 0x578
	UStaticMeshComponent* RightTrackTile_104; // 0x580
	UStaticMeshComponent* RightTrackTile_105; // 0x588
	UStaticMeshComponent* RightTrackTile_106; // 0x590
	UStaticMeshComponent* RightTrackTile_107; // 0x598
	UStaticMeshComponent* RightTrackTile_108; // 0x5a0
	UStaticMeshComponent* RightTrackTile_109; // 0x5a8
	UStaticMeshComponent* RightTrackTile_110; // 0x5b0
	UStaticMeshComponent* RightTrackTile_111; // 0x5b8
	UStaticMeshComponent* RightTrackTile_112; // 0x5c0
	UStaticMeshComponent* RightTrackTile_113; // 0x5c8
	UStaticMeshComponent* RightTrackTile_114; // 0x5d0
	UStaticMeshComponent* RightTrackTile_115; // 0x5d8
	UStaticMeshComponent* LeftTrackTile_000; // 0x5e0
	UStaticMeshComponent* LeftTrackTile_001; // 0x5e8
	UStaticMeshComponent* LeftTrackTile_002; // 0x5f0
	UStaticMeshComponent* LeftTrackTile_003; // 0x5f8
	UStaticMeshComponent* LeftTrackTile_004; // 0x600
	UStaticMeshComponent* LeftTrackTile_005; // 0x608
	UStaticMeshComponent* LeftTrackTile_006; // 0x610
	UStaticMeshComponent* LeftTrackTile_007; // 0x618
	UStaticMeshComponent* LeftTrackTile_008; // 0x620
	UStaticMeshComponent* LeftTrackTile_009; // 0x628
	UStaticMeshComponent* LeftTrackTile_010; // 0x630
	UStaticMeshComponent* LeftTrackTile_011; // 0x638
	UStaticMeshComponent* LeftTrackTile_012; // 0x640
	UStaticMeshComponent* LeftTrackTile_013; // 0x648
	UStaticMeshComponent* LeftTrackTile_014; // 0x650
	UStaticMeshComponent* LeftTrackTile_015; // 0x658
	UStaticMeshComponent* LeftTrackTile_016; // 0x660
	UStaticMeshComponent* LeftTrackTile_017; // 0x668
	UStaticMeshComponent* LeftTrackTile_018; // 0x670
	UStaticMeshComponent* LeftTrackTile_019; // 0x678
	UStaticMeshComponent* LeftTrackTile_020; // 0x680
	UStaticMeshComponent* LeftTrackTile_021; // 0x688
	UStaticMeshComponent* LeftTrackTile_022; // 0x690
	UStaticMeshComponent* LeftTrackTile_023; // 0x698
	UStaticMeshComponent* LeftTrackTile_024; // 0x6a0
	UStaticMeshComponent* LeftTrackTile_025; // 0x6a8
	UStaticMeshComponent* LeftTrackTile_026; // 0x6b0
	UStaticMeshComponent* LeftTrackTile_027; // 0x6b8
	UStaticMeshComponent* LeftTrackTile_028; // 0x6c0
	UStaticMeshComponent* LeftTrackTile_029; // 0x6c8
	UStaticMeshComponent* LeftTrackTile_030; // 0x6d0
	UStaticMeshComponent* LeftTrackTile_031; // 0x6d8
	UStaticMeshComponent* LeftTrackTile_032; // 0x6e0
	UStaticMeshComponent* LeftTrackTile_033; // 0x6e8
	UStaticMeshComponent* LeftTrackTile_034; // 0x6f0
	UStaticMeshComponent* LeftTrackTile_035; // 0x6f8
	UStaticMeshComponent* LeftTrackTile_036; // 0x700
	UStaticMeshComponent* LeftTrackTile_037; // 0x708
	UStaticMeshComponent* LeftTrackTile_038; // 0x710
	UStaticMeshComponent* LeftTrackTile_039; // 0x718
	UStaticMeshComponent* LeftTrackTile_040; // 0x720
	UStaticMeshComponent* LeftTrackTile_041; // 0x728
	UStaticMeshComponent* LeftTrackTile_042; // 0x730
	UStaticMeshComponent* LeftTrackTile_043; // 0x738
	UStaticMeshComponent* LeftTrackTile_044; // 0x740
	UStaticMeshComponent* LeftTrackTile_045; // 0x748
	UStaticMeshComponent* LeftTrackTile_046; // 0x750
	UStaticMeshComponent* LeftTrackTile_047; // 0x758
	UStaticMeshComponent* LeftTrackTile_048; // 0x760
	UStaticMeshComponent* LeftTrackTile_049; // 0x768
	UStaticMeshComponent* LeftTrackTile_050; // 0x770
	UStaticMeshComponent* LeftTrackTile_051; // 0x778
	UStaticMeshComponent* LeftTrackTile_052; // 0x780
	UStaticMeshComponent* LeftTrackTile_053; // 0x788
	UStaticMeshComponent* LeftTrackTile_054; // 0x790
	UStaticMeshComponent* LeftTrackTile_055; // 0x798
	UStaticMeshComponent* LeftTrackTile_056; // 0x7a0
	UStaticMeshComponent* LeftTrackTile_057; // 0x7a8
	UStaticMeshComponent* LeftTrackTile_058; // 0x7b0
	UStaticMeshComponent* LeftTrackTile_059; // 0x7b8
	UStaticMeshComponent* LeftTrackTile_060; // 0x7c0
	UStaticMeshComponent* LeftTrackTile_061; // 0x7c8
	UStaticMeshComponent* LeftTrackTile_062; // 0x7d0
	UStaticMeshComponent* LeftTrackTile_063; // 0x7d8
	UStaticMeshComponent* LeftTrackTile_064; // 0x7e0
	UStaticMeshComponent* LeftTrackTile_065; // 0x7e8
	UStaticMeshComponent* LeftTrackTile_066; // 0x7f0
	UStaticMeshComponent* LeftTrackTile_067; // 0x7f8
	UStaticMeshComponent* LeftTrackTile_068; // 0x800
	UStaticMeshComponent* LeftTrackTile_069; // 0x808
	UStaticMeshComponent* LeftTrackTile_070; // 0x810
	UStaticMeshComponent* LeftTrackTile_071; // 0x818
	UStaticMeshComponent* LeftTrackTile_072; // 0x820
	UStaticMeshComponent* LeftTrackTile_073; // 0x828
	UStaticMeshComponent* LeftTrackTile_074; // 0x830
	UStaticMeshComponent* LeftTrackTile_075; // 0x838
	UStaticMeshComponent* LeftTrackTile_076; // 0x840
	UStaticMeshComponent* LeftTrackTile_077; // 0x848
	UStaticMeshComponent* LeftTrackTile_078; // 0x850
	UStaticMeshComponent* LeftTrackTile_079; // 0x858
	UStaticMeshComponent* LeftTrackTile_080; // 0x860
	UStaticMeshComponent* LeftTrackTile_081; // 0x868
	UStaticMeshComponent* LeftTrackTile_082; // 0x870
	UStaticMeshComponent* LeftTrackTile_083; // 0x878
	UStaticMeshComponent* LeftTrackTile_084; // 0x880
	UStaticMeshComponent* LeftTrackTile_085; // 0x888
	UStaticMeshComponent* LeftTrackTile_086; // 0x890
	UStaticMeshComponent* LeftTrackTile_087; // 0x898
	UStaticMeshComponent* LeftTrackTile_088; // 0x8a0
	UStaticMeshComponent* LeftTrackTile_089; // 0x8a8
	UStaticMeshComponent* LeftTrackTile_090; // 0x8b0
	UStaticMeshComponent* LeftTrackTile_091; // 0x8b8
	UStaticMeshComponent* LeftTrackTile_092; // 0x8c0
	UStaticMeshComponent* LeftTrackTile_093; // 0x8c8
	UStaticMeshComponent* LeftTrackTile_094; // 0x8d0
	UStaticMeshComponent* LeftTrackTile_095; // 0x8d8
	UStaticMeshComponent* LeftTrackTile_096; // 0x8e0
	UStaticMeshComponent* LeftTrackTile_097; // 0x8e8
	UStaticMeshComponent* LeftTrackTile_098; // 0x8f0
	UStaticMeshComponent* LeftTrackTile_099; // 0x8f8
	UStaticMeshComponent* LeftTrackTile_101; // 0x900
	UStaticMeshComponent* LeftTrackTile_102; // 0x908
	UStaticMeshComponent* LeftTrackTile_103; // 0x910
	UStaticMeshComponent* LeftTrackTile_104; // 0x918
	UStaticMeshComponent* LeftTrackTile_105; // 0x920
	UStaticMeshComponent* LeftTrackTile_106; // 0x928
	UStaticMeshComponent* LeftTrackTile_107; // 0x930
	UStaticMeshComponent* LeftTrackTile_108; // 0x938
	UStaticMeshComponent* LeftTrackTile_109; // 0x940
	UStaticMeshComponent* LeftTrackTile_110; // 0x948
	UStaticMeshComponent* LeftTrackTile_111; // 0x950
	UStaticMeshComponent* LeftTrackTile_112; // 0x958
	UStaticMeshComponent* LeftTrackTile_113; // 0x960
	UStaticMeshComponent* LeftTrackTile_114; // 0x968
	UStaticMeshComponent* LeftTrackTile_115; // 0x970
};

struct UHLLWeaponListItem : UUserWidget {
	UBorder* RootBorder; // 0x230
	UHLLKeyText* WeaponKeyName; // 0x238
	UTextBlock* WeaponName; // 0x240
	UProgressBar* WeaponIcon; // 0x248
};

struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x270
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x278
	float BlendTime; // 0x280
	bool bBlendBool; // 0x284
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x580
	char bIsFrozenRendering : 1; // 0x580
	char bIsOrbitingSelectedActor : 1; // 0x580
	char bOrbitPivotUseCenter : 1; // 0x580
	char bEnableBufferVisualization : 1; // 0x580
	char bEnableBufferVisualizationFullMode : 1; // 0x580
	char bIsBufferVisualizationInputSetup : 1; // 0x580
	char bLastDisplayEnabled : 1; // 0x580
	UDrawFrustumComponent* DrawFrustum; // 0x588
	AActor* SelectedActor; // 0x590
	UPrimitiveComponent* SelectedComponent; // 0x598
	FHitResult SelectedHitPoint; // 0x5a0
	APlayerController* OriginalControllerRef; // 0x628
	UPlayer* OriginalPlayer; // 0x630
	float SpeedScale; // 0x638
	float InitialMaxSpeed; // 0x63c
	float InitialAccel; // 0x640
	float InitialDecel; // 0x644
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
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
	UClothingAssetCustomData* CustomData; // 0x110
	FClothConfig_Legacy ClothConfig; // 0x118
};

struct AHLLExplosive : AActor {
	UHLLMapComponent* MapComponent; // 0x288
	UHLLIndicatorComponent* IndicatorComponent; // 0x290
	UHLLSimpleHealthComponent* HealthComponent; // 0x298
	ETeam OwningTeam; // 0x2a0
	FRepExplosion RepExplosionInfo; // 0x2a4
	EWeaponType m_weaponType; // 0x33c
	EHLLDamageFilterType DamageFilterType; // 0x33d
	AShooterImpactEffect* ExplosionEffectClass; // 0x340
	float PostExplodeLifespan; // 0x348
	float Damage; // 0x34c
	float DamageRadius; // 0x350
	float DamageFalloff; // 0x354
	UDamageType* DamageType; // 0x358
	char bIgnoreDamageOcclusion : 1; // 0x360
	char bSuppressAllTeams : 1; // 0x360
	char bIgnoreSuppressionOcclusion : 1; // 0x360
	float Suppression; // 0x364
	float SuppressionRadius; // 0x368
	float SuppressionFalloff; // 0x36c
	AShooterPlayerState* SpawnedByPlayer; // 0x370
	AController* ExplosionInstigator; // 0x378
	char bCanBeDismantled : 1; // 0x380
	char bRecoverAmmoOnDismantle : 1; // 0x380
	FText DismantleItemName; // 0x388
	float DismantleTime; // 0x3a0
	FName EnemyDismantleScore; // 0x3a4
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0xe8
	float TextureMultiplier; // 0xec
};

struct UHLLProjectile_Bullet : UHLLProjectile {
	float InstantTravelTime; // 0x138
	float MuzzleVelocity; // 0x13c
	float GravityScale; // 0x140
	float MassG; // 0x144
	float DiameterMM; // 0x148
	float AirResistance; // 0x14c
	float FormFactor; // 0x150
	char MaxPenetrations; // 0x154
	int32_t PenetrationPower; // 0x158
	AShooterImpactEffect* ExitTemplate; // 0x160
};

struct UHLLKeyText : UTextBlock {
	FText DefaultText; // 0x2a0
	FName KeybindName; // 0x2b8
	char bIsAxis : 1; // 0x2c0
	char bShowSquareBrackets : 1; // 0x2c0
	float AxisScale; // 0x2c4
};

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x400
	char bDrawPolyEdges : 1; // 0x400
	char bDrawFilledPolys : 1; // 0x400
	char bDrawNavMeshEdges : 1; // 0x400
	char bDrawTileBounds : 1; // 0x400
	char bDrawPathCollidingGeometry : 1; // 0x400
	char bDrawTileLabels : 1; // 0x400
	char bDrawPolygonLabels : 1; // 0x400
	char bDrawDefaultPolygonCost : 1; // 0x401
	char bDrawLabelsOnPathNodes : 1; // 0x401
	char bDrawNavLinks : 1; // 0x401
	char bDrawFailedNavLinks : 1; // 0x401
	char bDrawClusters : 1; // 0x401
	char bDrawOctree : 1; // 0x401
	char bDrawOctreeDetails : 1; // 0x401
	char bDrawMarkedForbiddenPolys : 1; // 0x401
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x402
	char bDrawNavMesh : 1; // 0x402
	float DrawOffset; // 0x404
	char bFixedTilePoolSize : 1; // 0x408
	int32_t TilePoolSize; // 0x40c
	float TileSizeUU; // 0x410
	float CellSize; // 0x414
	float CellHeight; // 0x418
	float AgentRadius; // 0x41c
	float AgentHeight; // 0x420
	float AgentMaxHeight; // 0x424
	float AgentMaxSlope; // 0x428
	float AgentMaxStepHeight; // 0x42c
	float MinRegionArea; // 0x430
	float MergeRegionSize; // 0x434
	float MaxSimplificationError; // 0x438
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x43c
	int32_t TileNumberHardLimit; // 0x440
	int32_t PolyRefTileBits; // 0x444
	int32_t PolyRefNavPolyBits; // 0x448
	int32_t PolyRefSaltBits; // 0x44c
	FVector NavMeshOriginOffset; // 0x450
	float DefaultDrawDistance; // 0x45c
	float DefaultMaxSearchNodes; // 0x460
	float DefaultMaxHierarchicalSearchNodes; // 0x464
	ERecastPartitioning RegionPartitioning; // 0x468
	ERecastPartitioning LayerPartitioning; // 0x469
	int32_t RegionChunkSplits; // 0x46c
	int32_t LayerChunkSplits; // 0x470
	char bSortNavigationAreasByCost : 1; // 0x474
	char bPerformVoxelFiltering : 1; // 0x474
	char bMarkLowHeightAreas : 1; // 0x474
	char bFilterLowSpanSequences : 1; // 0x474
	char bFilterLowSpanFromTileCache : 1; // 0x474
	char bDoFullyAsyncNavDataGathering : 1; // 0x474
	char bUseBetterOffsetsFromCorners : 1; // 0x474
	char bStoreEmptyTileLayers : 1; // 0x474
	char bUseVirtualFilters : 1; // 0x475
	char bAllowNavLinkAsPathEnd : 1; // 0x475
	char bUseVoxelCache : 1; // 0x475
	float TileSetUpdateInterval; // 0x478
	float HeuristicScale; // 0x47c
	float VerticalDeviationFromGroundCompensation; // 0x480
};

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e0
	FConstraintProfileProperties DefaultProfile; // 0x1f0
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

struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UWGT_GameWarmup_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* Timer; // 0x238
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct UHLLMapIcon_SectorBooster : UHLLMapIconBase {
	UWidgetSwitcher* ProfileSwitcher; // 0x368
	USizeBox* RootSBox; // 0x370
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48
};

struct UHLLMapIcon_AdminCam : UHLLMapIconBase {
	UWidget* RotationContainer; // 0x368
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x558
	int32_t NumBuiltInstances; // 0x568
	FBox BuiltInstanceBounds; // 0x570
	FBox UnbuiltInstanceBounds; // 0x58c
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x5a8
	char bEnableDensityScaling : 1; // 0x5b8
	int32_t OcclusionLayerNumNodes; // 0x5c0
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x5c4
	bool bDisableCollision; // 0x5e0
	int32_t InstanceCountToRender; // 0x5e4
};

struct ALevelSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230
	ULevelSequencePlayer* SequencePlayer; // 0x248
	FSoftObjectPath LevelSequence; // 0x250
	TArray<AActor*> AdditionalEventReceivers; // 0x268
	FLevelSequenceCameraSettings CameraSettings; // 0x278
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x280
	UMovieSceneBindingOverrides* BindingOverrides; // 0x288
	char bAutoPlay : 1; // 0x290
	char bOverrideInstanceData : 1; // 0x290
	char bReplicatePlayback : 1; // 0x290
	UObject* DefaultInstanceData; // 0x298
	ULevelSequenceBurnIn* BurnInInstance; // 0x2a0
	bool bShowBurnin; // 0x2a8
};

struct AShooterHUD : AHUD {
	bool RoleSelectionEnabledOnDeploymentScreen; // 0x32a
	UHLLHUDBase* HUDWidgetClass; // 0x330
	int32_t HUDWidgetZOrder; // 0x338
	UHLLHintWidget* HintWidgetClass; // 0x340
	int32_t HintWidgetZOrder; // 0x348
	int32_t DeploymentWidgetZOrder; // 0x34c
	UChatOverlay* ChatOverlayWidgetClass; // 0x350
	int32_t ChatOverlayWidgetZOrder; // 0x358
	float ChatOverlayVisibilityTimeout; // 0x35c
	UHLLHUDBase* m_hudWidget; // 0x360
	UHLLHintWidget* m_HintWidget; // 0x368
	UChatOverlay* m_chatOverlay; // 0x370
	UHLLDeploymentScreen* m_deploymentScreen; // 0x388
	float MaxTeammateNameVisibilityDistance; // 0x3ec
	float MaxPlatoonMemberNameVisibilityDistance; // 0x3f0
	FMulticastInlineDelegate OnShowDeploymentScreenRequested; // 0x3f8
	FMulticastInlineDelegate OnHideDeploymentScreenRequested; // 0x408
	FMulticastInlineDelegate OnRoundSummaryVisibilityChanged; // 0x418
	int32_t OverviewMapZOrder; // 0x428
	UHLLOverviewMapWrapper* m_OverviewMap; // 0x430
	int32_t RconConsoleZOrder; // 0x438
	UHLLRconCommandWindow* RconConsoleClass; // 0x440
	UHLLRconCommandWindow* m_RconConsole; // 0x448
	UHLLUseContextContainer* UseContextWidgetClass; // 0x450
	FAnchors UseContextAnchors; // 0x458
	int32_t UseContextZOrder; // 0x468
	FVector2D UseContextAlignment; // 0x46c
	UHLLUseContextContainer* m_UseContextWidget; // 0x478
	int32_t ScopeWidgetZOrder; // 0x480
	UHLLScopeWidget* ActiveScopeWidget; // 0x488
	UHLLInGameMenu* ActiveGameMenu; // 0x498
	int32_t GameMenuZOrder; // 0x4a0
	UHLLRoundSummary* ActiveRoundSummary; // 0x4a8
	int32_t RoundSummaryZOrder; // 0x4b4
	UHLLRoundSummary* RoundSummaryClass; // 0x4b8
	int32_t DeathScreenZOrder; // 0x4c0
	UHLLDeathScreen* ActiveDeathScreen; // 0x4c8
	FSectorCaptureProgressWheelColor YourSectorProgressColors; // 0x528
	FSectorCaptureProgressWheelColor EnemySectorProgressColors; // 0x548
	FSectorCaptureProgressWheelColor ContestedSectorProgressColors; // 0x568
	int32_t SeatWidgetZOrder; // 0x588
	UHLLSeatWidgetBase* m_ActiveSeatUI; // 0x590
	float m_RconSayDuration; // 0x598
	UHLLDamageIndicator* DamageIndicator; // 0x5b0
	UHLLDamageIndicator* DamageIndicatorClass; // 0x5b8
	int32_t DamageIndicatorZOrder; // 0x5c0
	USpeakingPlayersList* SpeakingPlayers; // 0x5c8
	USpeakingPlayersList* SpeakingPlayersClass; // 0x5d0
	int32_t SpeakingPlayersZOrder; // 0x5d8
	FAnchors SpeakingPlayersAnchors; // 0x5dc
	FVector2D SpeakingPlayersAlignment; // 0x5ec
	FMargin SpeakingPlayersOffsets; // 0x5f4
	UUserWidget* StatsTestWidget; // 0x608
	UUserWidget* StatsTestWidgetClass; // 0x610
	int32_t PlatoonInvitationDialogZOrder; // 0x618
	UPlatoonManagementStack* PlatoonManagementStackWidget; // 0x628
	int32_t PlatoonManagementStackZOrder; // 0x630
	UHLLRadialMenu_MarkersBase* ActiveMarkerMenu; // 0x650
	int32_t MarkerMenuZOrder; // 0x658
	UHLLRadialMenu_MarkersBase* MarkerMenuClass; // 0x660
	FAnchors MarkerMenuAnchors; // 0x668
	FVector2D MarkerMenuAlignment; // 0x678
	FMargin MarkerMenuOffsets; // 0x680
	UHLLRadialMenu_ChatBase* ActiveChatMenu; // 0x698
	int32_t ChatMenuZOrder; // 0x6a0
	UHLLRadialMenu_ChatBase* ChatMenuClass; // 0x6a8
	FAnchors ChatMenuAnchors; // 0x6b0
	FVector2D ChatMenuAlignment; // 0x6c0
	FMargin ChatMenuOffsets; // 0x6c8
	UHLLRadialMenu_WeaponBase* WeaponRadialMenu; // 0x6d8
	UHLLRadialMenu_WeaponBase* EquipmentRadialMenuClass; // 0x6e0
	float DefaultFadeSpeed; // 0x6ec
	float FastFadeSpeed; // 0x6f0
	FHUDDisplayState SecondaryDisplayState; // 0x6f4
	UHLLVoteWidget* VoteWidget; // 0x708
	UHLLVoteWidget* VoteWidgetClass; // 0x710
	int32_t VoteWidgetZOrder; // 0x718
	FAnchors VoteWidgetAnchors; // 0x71c
	FVector2D VoteWidgetAlignment; // 0x72c
	FMargin VoteWidgetOffsets; // 0x734
	UHLLAdminCamUI* AdminCamWidget; // 0x748
	UHLLAdminCamUI* AdminCamWidgetClass; // 0x750
	int32_t AdminCamWidgetZOrder; // 0x758
	FAnchors AdminCamWidgetAnchors; // 0x75c
	FVector2D AdminCamWidgetAlignment; // 0x76c
	FMargin AdminCamWidgetOffsets; // 0x774
};

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0x88
};

struct ABaseLineSectorSpawn : ADynamicSpawn {
	int32_t Group; // 0x3f0
};

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UW_HoverToolTip_Explained_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBorder* Alert; // 0x238
	UBorder* Cooldown; // 0x240
	UImage* div_line; // 0x248
	UImage* img_icon; // 0x250
	URichTextBlock* Rtxt_Body; // 0x258
	URichTextBlock* Rtxt_Title; // 0x260
	USizeBox* SB_Icon; // 0x268
	UTextBlock* txt_alert; // 0x270
	UTextBlock* txt_cooldown; // 0x278
	FText Text_Tooltip_Title; // 0x280
	FText Text_Tooltip_Body; // 0x298
	bool Tooltip_Title; // 0x2b0
	FText Text_Tooltip_Cooldown; // 0x2b8
	FSlateBrush TooltipIconBrush; // 0x2d0
	bool TooltipHasIcon; // 0x358
	bool TooltipIsAlert; // 0x359
	FText Text_Tooltip_Alert; // 0x360
	bool IsDisplayingToolTipOnButtonPrompt; // 0x378
	bool TooltipIsCooldown; // 0x379
	bool UsingGamepad; // 0x37a
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct USceneCaptureComponent2D : USceneCaptureComponent {
	ECameraProjectionMode ProjectionType; // 0x288
	float FOVAngle; // 0x28c
	float OrthoWidth; // 0x290
	UTextureRenderTarget2D* TextureTarget; // 0x298
	ESceneCaptureCompositeMode CompositeMode; // 0x2a0
	FPostProcessSettings PostProcessSettings; // 0x2b0
	float PostProcessBlendWeight; // 0x7f0
	char bOverride_CustomNearClippingPlane : 1; // 0x7f4
	float CustomNearClippingPlane; // 0x7f8
	bool bUseCustomProjectionMatrix; // 0x7fc
	FMatrix CustomProjectionMatrix; // 0x800
	bool bEnableClipPlane; // 0x840
	FVector ClipPlaneBase; // 0x844
	FVector ClipPlaneNormal; // 0x850
	char bCameraCutThisFrame : 1; // 0x85c
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x85c
	bool bDisableFlipCopyGLES; // 0x860
};

struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x58
	TArray<UMovieSceneSection*> SectionArray; // 0x60
};

struct UHLLUI_CharacterSelection : UUserWidget {
	ERoleSelectionMode CurrentViewMode; // 0x230
	char bAllowFavourites : 1; // 0x231
	EFaction CurrentFaction; // 0x232
	EPlayerRole CurrentRole; // 0x233
	TWeakObjectPtr<AHLLCosmeticCharacter> CosmeticPreviewActor; // 0x234
	UWidgetSwitcher* CosmeticPanelSwitcher; // 0x250
	UPanelWidget* LoadingOverlay; // 0x258
	UTextBlock* PlatoonSelection; // 0x260
	UTextBlock* RoleSelection; // 0x268
	UTextBlock* RoleSelectionLevel; // 0x270
	UHLLUI_LoadoutSelector* LoadoutSelector; // 0x278
	URichTextBlock* RoleSelectionDescription; // 0x280
	UScrollBox* DescriptionScroller; // 0x288
	UVerticalBox* CommandVBox; // 0x290
	UVerticalBox* InfantryVBox; // 0x298
	UVerticalBox* ArmourVBox; // 0x2a0
	UVerticalBox* ReconVBox; // 0x2a8
	UHLLUI_RoleItem* RoleItemClass; // 0x2b0
	TArray<UHLLUI_RoleItem*> AllRoleItems; // 0x2b8
	UHLLUI_CosmeticCategory* HelmetCategory; // 0x2c8
	UHLLUI_CosmeticCategory* HeadCategory; // 0x2d0
	UHLLUI_CosmeticCategory* UniformCategory; // 0x2d8
	UShooterGameViewportClient* ViewportClient; // 0x2e0
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UWGT_DeployRoleItem_V2_C : UHLLUI_AvailableRoleItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	UBorder* LevelBorder; // 0x2b0
	UButton* SelectButton; // 0x2b8
	UBorder* TextBorder; // 0x2c0
	UWGT_DeployRoleSelection_V2_C* OwningWidget; // 0x2c8
	bool bSelectedRole; // 0x2d0
	bool bHasSectionFocus; // 0x2d1
	bool bIsRBM; // 0x2d2
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UBPW_DeploymentMap_V2_C : UHLLDeploymentMap {
	UWidgetAnimation* ShowFailure; // 0x488
	UTextBlock* FailedMessage; // 0x490
	USizeBox* MapSBox; // 0x498
};

struct UHLLAnimNotify_Footstep : UAnimNotify {
	EFoot Foot; // 0x38
	char bIsFirstPerson : 1; // 0x39
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct UHLLMapIcon_Marker : UHLLMapIconBase {
	UTextBlock* PlatoonIDText; // 0x368
	UWidgetAnimation* MovedOrPlacedAnim; // 0x370
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UChatMessage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBorder* BGColor; // 0x238
	UTextBlock* ChannelNick; // 0x240
	UImage* TeamColor; // 0x248
	FChatStyle Style; // 0x250
	EChatChannel ChatChannel; // 0x390
	bool Warning; // 0x391
	EPlayerRole PlayerRole; // 0x392
};

struct UTracksComponent : UInstancedStaticMeshComponent {
	char bEnabled : 1; // 0x548
	char bRenderLeftTrack : 1; // 0x548
	char bRenderRightTrack : 1; // 0x548
	char bSkipLastAnimatedWheelWhenBuildingCurves : 1; // 0x548
	float ExtendedWheelCurvesLength; // 0x54c
	float ExtraTilesToCloseGapsInExtremeCases; // 0x550
	float TrackTileLength; // 0x554
	float TrackTileThickness; // 0x558
	float TrackTileAlignment; // 0x55c
	char bHasRollerBones : 1; // 0x560
	float MaxVerticalSag; // 0x564
	float RollerWheelRadius; // 0x568
	TArray<FName> RollerWheelBones; // 0x570
	FVector2D FrontWheelTrackInclination; // 0x580
	FVector2D BackWheelTrackInclination; // 0x588
	float MaxSeenExtendedWheelCurvesLength; // 0x590
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct AHLLWaterVolume : AHLLPhysicsVolume {
	UBoxComponent* WaterVolume; // 0x270
	UPostProcessComponent* WaterPostProcess; // 0x278
	UStaticMeshComponent* SurfacePlane; // 0x280
	UStaticMeshComponent* UndersidePlane; // 0x288
	UAudioComponent* UnderwaterSoundComponent; // 0x290
	UPhysicalMaterial* SurfacePhysMaterial; // 0x298
	UPhysicalMaterial* UndersidePhysMaterial; // 0x2a0
	UMaterialInterface* SurfaceMaterial; // 0x2a8
	UMaterialInterface* UndersideMaterial; // 0x2b0
	UMaterialInterface* PPMaterial; // 0x2b8
	UMaterialInstanceDynamic* PostProcessDMI; // 0x2c0
	float BlockWeaponDeploymentDepth; // 0x2c8
	float BuildDepthOffset; // 0x2cc
	UCurveFloat* SpeedModifierCurve; // 0x2d0
	EWaterType WaterType; // 0x2d8
	char bShowUndersidePlane : 1; // 0x2d9
	char bEnableVehicleWading : 1; // 0x2d9
	char bEnablePlayerWading : 1; // 0x2d9
	char bEnableSplashes : 1; // 0x2d9
	char bDoCrouchCheck : 1; // 0x2d9
	char bDoProneCheck : 1; // 0x2d9
	char bShouldDrown : 1; // 0x2d9
	float PlayerWadeDepth; // 0x2dc
	USoundBase* UnderwaterSound; // 0x2e0
	TArray<FHLLWaterVolumeOverlap> ActiveWaterEffects; // 0x2e8
};

struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	UReplicationGraphNode* DynamicNode; // 0x140
	UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148
};

struct AInfantryCarrierBoat : AActor {
	FName DriverAttachmentSocket; // 0x238
	FName DriverHelmetAttachmentSocket; // 0x240
	UAnimMontage* DoorOpeningAnimation; // 0x248
	UAnimMontage* DoorClosingAnimation; // 0x250
	USceneComponent* SceneRoot; // 0x258
	USkeletalMeshComponent* Mesh; // 0x260
	USkeletalMeshComponent* DriverMesh; // 0x268
	UStaticMeshComponent* DriverHelmetMesh; // 0x270
	USmoothNetworkedMovement* SmoothNetworkedMovement; // 0x278
	UParticleSystemComponent* WaterEffectFrontLeft; // 0x280
	UParticleSystemComponent* WaterEffectFrontRight; // 0x288
	UParticleSystemComponent* WaterEffectMidLeft; // 0x290
	UParticleSystemComponent* WaterEffectMidRight; // 0x298
	UParticleSystemComponent* WaterEffectBackLeft; // 0x2a0
	UParticleSystemComponent* WaterEffectBackRight; // 0x2a8
	UAudioComponent* EngineSound; // 0x2b0
	UBoxComponent* VehicleBlockerAndCharacterKiller; // 0x2b8
	USplineComponent* Path; // 0x2c0
	float BoatTravelSpeed; // 0x2e8
	FName CurrentState; // 0x2ec
	TArray<ACharacter*> CarriedCharacters; // 0x2f8
};

struct UAISenseConfig_Sight : UAISenseConfig {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
};

struct UBPW_PlatoonInvitationDialogPlayer_V2_C : UPlatoonInvitationDialogPlayer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
	UBPW_PlatoonInvitationDialog_V2_C* ParentPlatoonInvitationDialog; // 0x250
	FCheckBoxStyle StyleFocused; // 0x258
	FCheckBoxStyle StyleNotFocused; // 0x7d8
};

struct AEF_RubblePile_01_C : AActor {
	UStaticMeshComponent* SM_MERGED_EF_RubblePile_01_3; // 0x220
	USceneComponent* SharedRoot; // 0x228
};

struct UWGT_MapIcon_Sector_C : UHLLMapIcon_Sector {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b8
	UWidgetAnimation* FadeIn; // 0x3c0
	UImage* img_banner; // 0x3c8
	UProgressBar* pb_capProgress; // 0x3d0
	UProgressBar* progressFade; // 0x3d8
	UMaterialInstanceDynamic* Sector_IconMaterial; // 0x3e0
	bool Sector_Idle; // 0x3e8
	bool Sector_Locked; // 0x3e9
	bool Sector_Cooldown; // 0x3ea
	bool Sector_Friendly; // 0x3eb
	FProgressBarStyle CapProgressFriendly; // 0x3f0
	FProgressBarStyle CapProgressEnemy; // 0x590
	FProgressBarStyle CapProgressNeutral; // 0x730
	FProgressBarStyle CapProgressDisabled; // 0x8d0
	FLinearColor ColFreindly; // 0xa70
	FLinearColor ColEnemy; // 0xa80
	FLinearColor ColNull; // 0xa90
	bool EnemyHasProgress; // 0xaa0
	FSlateColor OwnerColor; // 0xaa8
	FLinearColor AttackerColor; // 0xad0
	ETeam OwningTeam; // 0xae0
	ETeam AttackingTeam; // 0xae1
	ETeam PlayerTeam; // 0xae2
	FHLLUIStyle UIStyle; // 0xae8
};

struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct AHLLDispenseStructure : AActor {
	USceneComponent* DummyRoot; // 0x288
	UStaticMeshComponent* Mesh; // 0x290
	UHLLSimpleHealthComponent* HealthComponent; // 0x298
	char bCanBeDismantled : 1; // 0x2a0
	char bCanDismantleWhenPlacedInWorld : 1; // 0x2a0
	float DismantleTime; // 0x2a4
	FText DisplayName; // 0x2a8
	FName ScoreOnEnemyDismantled; // 0x2c0
	ETeam Team; // 0x2c8
	EHLLDamageFilterType DamageFilterType; // 0x2c9
	FHLLUpgradeInfo UpgradeData; // 0x2d0
	UHLLUpgradeGhostComponent* UpgradeGhostComponent; // 0x358
	char bRegisterWithTeamActors : 1; // 0x360
	EActorCountClass TeamActorCountClass; // 0x361
	AShooterPlayerState* SpawnedByPlayer; // 0x368
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UWGT_RoundSummary_C : UHLLRoundSummary {
	UNamedSlot* GroupPhotoSlot; // 0x2e8
	UImage* Image_1; // 0x2f0
	UImage* Image_2; // 0x2f8
	UImage* Image_3; // 0x300
	UImage* Image_4; // 0x308
	UWGT_GroupPhoto_C* WGT_GroupPhoto; // 0x310
};

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AHLLGhostAbilitySafezone : AActor {
	USceneComponent* DummyRoot; // 0x220
	UStaticMeshComponent* Mesh; // 0x228
};

struct UHLLSeatIcon : UUserWidget {
	FText EmptyOccupantText; // 0x230
	UBorder* SeatBorder; // 0x248
	UTextBlock* OccupantName; // 0x250
	UImage* SeatIcon; // 0x258
	UTextBlock* SwitchToKeyName; // 0x260
};

struct UHLLDispenserListItem_Outpost : UHLLDispenserListItem_StructureBase {
	UTextBlock* PlatoonLimitText; // 0x258
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe0
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf0
};

struct ASMtoHISM : AActor {
	USceneComponent* Scene; // 0x220
};

struct AHLLDispenserItem_Base : AActor {
	USceneComponent* DummyRoot; // 0x220
	UStaticMeshComponent* GhostMesh; // 0x228
	UBoxComponent* PlacementGuard; // 0x230
	UMaterialInterface* GhostMaterial; // 0x238
	UMaterialInstanceDynamic* GhostMeshDMI; // 0x240
	UObject* GhostOwnerObject; // 0x248
	AActor* ItemToDispense; // 0x250
	char bDestroyItemsWhenKilled : 1; // 0x258
	char bCanEditAutoDestroy : 1; // 0x258
	char bAutoDestroyItems : 1; // 0x258
	char MaxTotalDispensedItems; // 0x259
	char bMaxBuildDepthOverride : 1; // 0x25a
	float MaxBuildDepthOverride; // 0x25c
	FName ScoreTypeWhenPlaced; // 0x260
	float ScoreModifier; // 0x268
	EHLLPlayerStat StatIncrementType; // 0x26c
	char bBlockInEnemySectors : 1; // 0x26d
	char bBlockInNeutralSectors : 1; // 0x26d
	char bBlockInFriendlyBaseSectors : 1; // 0x26d
	EHLLDispenseSectorRule LockedEnemySectorRule; // 0x26e
	EHLLDispenseSectorRule UnlockedEnemySectorRule; // 0x26f
	EHLLDispenseSurfaceRule SurfaceRule; // 0x270
	float TraceDistance; // 0x274
	float TraceHeight; // 0x278
	float DropTime; // 0x27c
	float MaxSurfaceAngle; // 0x280
	ECollisionChannel FloorChannel; // 0x284
	ECollisionChannel SurfaceChannel; // 0x285
	FCollisionResponseContainer SurfaceResponses; // 0x286
	TArray<AActor*> AttachWhitelist; // 0x2a8
	TArray<AActor*> AttachBlacklist; // 0x2b8
	FText ItemName; // 0x2c8
	FSlateBrush ItemBrush; // 0x2e0
	UHLLDispenserListItem* ListItemWidgetClass; // 0x368
	UParticleSystem* DispenseParticle; // 0x370
	USoundBase* DispenseSound; // 0x378
	FText InvalidPlacement_Generic; // 0x380
	FText InvalidPlacement_PlayerLocation; // 0x398
	FText InvalidPlacement_EnemySector; // 0x3b0
	FText InvalidPlacement_NeutralSector; // 0x3c8
	FText InvalidPlacement_LockedSector; // 0x3e0
	FText InvalidPlacement_LockedBase; // 0x3f8
	FText InvalidPlacement_ReconOnly; // 0x410
	FText InvalidPlacement_FriendlyBaseSector; // 0x428
	char bIncrementAchievement : 1; // 0x440
	EHLLAchievementStat AchievementStat; // 0x441
	uint32_t IncrementAmount; // 0x444
	EHint HintWhenSelected; // 0x448
	char MaxPerTeam; // 0x449
	UScriptStruct* PerItemNetworkDataStruct; // 0x468
};

struct AShooterAIController : AAIController {
	UBlackboardComponent* BlackboardComp; // 0x328
	UBehaviorTreeComponent* BehaviorComp; // 0x330
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UHTP_Widget_Role_Loadout_AutomaticRifleman_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x268
	UImage* icn_faction; // 0x270
	UImage* Image_10; // 0x278
	UImage* Image_17; // 0x280
};

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x428
	float CapsuleRadius; // 0x42c
};

struct UBPW_HoverTintedImageButton_V2_C : UHoverTintedImageButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* Button_1; // 0x238
	UImage* IconImage; // 0x240
	USizeBox* ImageSizeBox; // 0x248
	FLinearColor HoveredContentTint; // 0x250
	FLinearColor NormalContentTint; // 0x260
	FMulticastInlineDelegate OnClicked; // 0x270
	FLinearColor PressedContentTint; // 0x280
	FSlateBrush IconBrush; // 0x290
	FMargin ContentPadding; // 0x318
	FVector2D ImageSize; // 0x328
	bool bFocus; // 0x330
	FMulticastInlineDelegate OnHovered; // 0x338
	FMulticastInlineDelegate OnUnhovered; // 0x348
	FMulticastInlineDelegate OnPressed; // 0x358
	bool bPressed; // 0x368
	FButtonStyle InitialButtonStyle; // 0x370
	FButtonStyle FocusedButtonStyle; // 0x5e8
	FLinearColor FocusedContentTint; // 0x860
};

struct UWGT_AdminCameraUI_C : UHLLAdminCamUI {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UbtnSimple_V2_C* ClearSelectedPlayer; // 0x298
	UHorizontalBox* ClipMode; // 0x2a0
	UTextBlock* ClipModeText; // 0x2a8
	UTextBlock* HighlightModeText; // 0x2b0
	UbtnSimple_V2_C* Kick; // 0x2b8
	UbtnSimple_V2_C* KickBanClose; // 0x2c0
	UbtnSimple_V2_C* KickBanPrompt; // 0x2c8
	UTextBlock* KickName; // 0x2d0
	UTextBlock* LockText; // 0x2d8
	UTextBlock* ModeText; // 0x2e0
	UTextBlock* ModeText_2; // 0x2e8
	UbtnSimple_V2_C* PermBan; // 0x2f0
	UbtnSimple_V2_C* SearchClose; // 0x2f8
	UbtnSimple_V2_C* SpectateSelected; // 0x300
	UHorizontalBox* Speed; // 0x308
	UTextBlock* SpeedText; // 0x310
	UTextBlock* TargetInfo; // 0x318
	UTextBlock* TargetName; // 0x320
	UbtnSimple_V2_C* TempBan; // 0x328
	UHorizontalBox* ToggleHighlight; // 0x330
	UHorizontalBox* ToggleMode; // 0x338
	UHorizontalBox* ToggleUI; // 0x340
	UHorizontalBox* Zoom; // 0x348
};

struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x438
	bool bAttachEnd; // 0x439
	FComponentReference AttachEndTo; // 0x440
	FName AttachEndToSocketName; // 0x468
	FVector EndLocation; // 0x470
	float CableLength; // 0x47c
	int32_t NumSegments; // 0x480
	float SubstepTime; // 0x484
	int32_t SolverIterations; // 0x488
	bool bEnableStiffness; // 0x48c
	bool bEnableCollision; // 0x48d
	float CollisionFriction; // 0x490
	FVector CableForce; // 0x494
	float CableGravityScale; // 0x4a0
	float CableWidth; // 0x4a4
	int32_t NumSides; // 0x4a8
	float TileMaterial; // 0x4ac
};

struct UAnimationDataSourceRegistry : UObject {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct AHLLArmourWeapon_Projectile : AHLLArmourWeapon {
	FName TurretBoneName; // 0x470
	TArray<AShooterProjectile*> Projectiles; // 0x478
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x270
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x278
};

struct UVoipMicCheckWidget : UUserWidget {
	USlider* MicVolumeSlider; // 0x230
	USlider* VoiceVolumeSlider; // 0x238
	UComboBoxString* InputDevice; // 0x240
	UComboBoxString* OutputDevice; // 0x248
};

struct AHLLMapData_Player_Replicator : AInfo {
	AHLLMapData_Player* DataClass; // 0x228
	FMapDataPlayerArray Data; // 0x230
	TArray<AHLLMapData_Player*> MapDataPlayerArray; // 0x350
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct ABaseHalftrack : ABaseTruck {
	AMobileSpawn* MobileSpawnClass; // 0x520
	float MaxTimeUnderwater; // 0x528
	AMobileSpawn* MobileSpawn; // 0x530
	UAudioComponent* TracksAudio; // 0x538
	UHLLArmourCollisionMesh* ArmourCollision_Tracks; // 0x548
};

struct UABP_CosmeticCharacter_C : UHLLCosmeticCharacterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	FAnimNode_Root AnimGraphNode_Root; // 0x288
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x2b8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x3e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x458
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5c0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x638
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x700
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x778
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x830
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x858
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x970
	FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x990
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb20
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xbf8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xc20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xcc0
	FAnimNode_Slot AnimGraphNode_Slot; // 0xce8
	ABP_MenuCharacter_C* MenuCharacterRef; // 0xd30
	int32_t RandomInt; // 0xd38
	float IdleBrakerTimer; // 0xd3c
	float InheritancePoseAlpha; // 0xd40
	FTransform WeaponGripSocketTransform; // 0xd50
	FTransform NewVar_1; // 0xd80
	bool USBazooka; // 0xdb0
	bool FG42; // 0xdb1
	USkeletalMeshComponent* WeaponMeshRef; // 0xdb8
	bool UsingHandLIK; // 0xdc0
	ABP_GameCharacter_C* GameCharacterRef; // 0xdc8
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UHLLMapIcon_Outpost : UHLLMapIcon_SpawnBase {
	FSlateBrush UnitOutpostIcon; // 0x4a8
	FSlateBrush TeamOutpostIcon; // 0x530
	FSlateBrush ReconOutpostIcon; // 0x5b8
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
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

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x1f0
	float FogHeightFalloff; // 0x1f4
	FExponentialHeightFogData SecondFogData; // 0x1f8
	FLinearColor FogInscatteringColor; // 0x204
	UTextureCube* InscatteringColorCubemap; // 0x218
	float InscatteringColorCubemapAngle; // 0x220
	FLinearColor InscatteringTextureTint; // 0x224
	float FullyDirectionalInscatteringColorDistance; // 0x234
	float NonDirectionalInscatteringColorDistance; // 0x238
	float DirectionalInscatteringExponent; // 0x23c
	float DirectionalInscatteringStartDistance; // 0x240
	FLinearColor DirectionalInscatteringColor; // 0x244
	float FogMaxOpacity; // 0x254
	float StartDistance; // 0x258
	float FogCutoffDistance; // 0x25c
	bool bEnableVolumetricFog; // 0x260
	float VolumetricFogScatteringDistribution; // 0x264
	FColor VolumetricFogAlbedo; // 0x268
	FLinearColor VolumetricFogEmissive; // 0x26c
	float VolumetricFogExtinctionScale; // 0x27c
	float VolumetricFogDistance; // 0x280
	float VolumetricFogStaticLightingScatteringIntensity; // 0x284
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x288
};

struct UWGT_CommanderListItem_V2_C : UHLLCommanderUIItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	UImage* Image_1; // 0x2a8
	UImage* Image_2; // 0x2b0
	UW_HoverToolTip_Explained_C* W_Tooltip; // 0x2b8
	FText Txt_TooltipAbility; // 0x2c0
	bool Tooltip_Ability; // 0x2d8
	FLinearColor HoverColor; // 0x2dc
	FLinearColor NormalColor; // 0x2ec
	bool Hovered; // 0x2fc
	int32_t CooldownTime; // 0x300
	bool bCoolDownUpdated; // 0x304
	bool LastGamepadHovered; // 0x305
};

struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct UDeploymentLogic_C : UDeploymentLogic {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
	AHLLPlatoon* SelectedPlatoon; // 0x118
	FMulticastInlineDelegate OnPlatoonSelectionChanged; // 0x120
	FMulticastInlineDelegate OnJoinPlatoonFailed; // 0x130
	FMulticastInlineDelegate OnPlayerTeamChanged; // 0x140
	EPlayerRole DefaultPlayerRole; // 0x150
	FMulticastInlineDelegate OnClaimCommanderRoleFailed; // 0x158
	FMulticastInlineDelegate OnClaimCommanderRoleSucceeded; // 0x168
	FMulticastInlineDelegate OnPlayerRoleChanged; // 0x178
	FMulticastInlineDelegate OnCommanderRoleReleased; // 0x188
	FMulticastInlineDelegate OnPlayerRoleChangeFailed; // 0x198
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

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct AShooterGameState : AGameState {
	int32_t NumTeams; // 0x2d8
	int32_t RemainingTime; // 0x2dc
	bool bTimerPaused; // 0x2e0
	char NumAxisPlayers; // 0x2e1
	char NumAlliedPlayers; // 0x2e2
	float BaseWaveIntervalSeconds; // 0x2e4
	TArray<AHLLPlatoon*> AxisPlatoons; // 0x2e8
	TArray<AHLLPlatoon*> AlliesPlatoons; // 0x2f8
	FMulticastInlineDelegate OnPlatoonsUpdated; // 0x308
	UHLLMapMetaTemplate* m_mapMetaTemplate; // 0x318
	TArray<FSectorState> m_sectors; // 0x320
	FTeamState m_axisTeam; // 0x330
	FTeamState m_alliesTeam; // 0x336
	UHLLMapStateComponent* MapStateComponent; // 0x350
	UOffensiveWarfareGameStateComponent* OffensiveGameStateComponent; // 0x358
	TArray<UHLLSupplyComponent*> RegisteredSupplyComponents; // 0x380
	TArray<ADynamicSpawn*> RegisteredSpawns; // 0x390
	TArray<AHLLResourceNode*> RegisteredNodes; // 0x3a0
	FActorCounter AxisActorCounter; // 0x3b0
	FActorCounter AlliesActorCounter; // 0x4c8
	FMulticastInlineDelegate OnAbilitiesChanged; // 0x5e0
	TArray<AHLLCommanderAbility*> AxisCommanderAbilities; // 0x5f0
	TArray<AHLLCommanderAbility*> AlliedCommanderAbilities; // 0x600
	FRepSpawnVehicleSlots AbilityVehicleSlots; // 0x610
	TArray<AShooterPlayerState*> RepCommanders; // 0x658
	float m_nextBaseSpawnWaveTime; // 0x668
	char AxisHQSectorIndex; // 0x66c
	char AlliedHQSectorIndex; // 0x66d
	uint32_t bHasHQSectors; // 0x670
	AHLLMapData_Player_Replicator* PlayerReplicatorClass; // 0x678
	TArray<AHLLMapData_Player_Replicator*> MapDataPlayerReplicatorArray; // 0x680
	char bTeamAutoBalanceEnabled : 1; // 0x690
	char TeamAutoBalanceThreshold; // 0x691
	char TeamSwitchingCooldownMinutes; // 0x692
	TArray<UHLLIndicatorComponent_Sector*> SectorIndicators; // 0x6b0
	UHLLReconDataComponent* ReconDataComponent; // 0x6c0
	UHLLVoteDataComponent* VoteDataComponent; // 0x6c8
	AHLLGameWarmupVolume* GameWarmupVolumeClass; // 0x6d0
	int32_t WarmupVolumeLifetime; // 0x6d8
	AHLLGameWarmupVolume* GameWarmupVolume; // 0x6e8
	FMulticastInlineDelegate OnPlayerArrayUpdated; // 0x6f0
};

struct UHLLSeatIndicatorItem : UUserWidget {
	UImage* SeatIcon; // 0x230
	UBorder* SeatOccupantBorder; // 0x238
	UTextBlock* SeatOccupantRole; // 0x240
	UTextBlock* SeatOccupantText; // 0x248
};

struct UButtonPrompt_V2_C : UButtonPrompt {
	FPointerToUberGraphFrame UberGraphFrame; // 0x388
	UButton* ClickableButton; // 0x390
	UHorizontalBox* Container; // 0x398
	UOverlay* Overlay_60; // 0x3a0
	UImage* PrimaryButtonIcon; // 0x3a8
	UTextBlock* PromptText; // 0x3b0
	UImage* SecondaryButtonIcon; // 0x3b8
	UHorizontalBox* TextContainer; // 0x3c0
	int32_t TextSize; // 0x3c8
	FMulticastInlineDelegate OnClicked; // 0x3d0
	FSlateColor EnabledColour; // 0x3e0
	FSlateColor DisabledColour; // 0x408
	FTimespan TimeoutDuration; // 0x430
	bool IconVisible; // 0x438
};

struct AHLL_MenuGameMode_C : AShooterGame_Menu {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	USceneComponent* DefaultSceneRoot; // 0x2d0
};

struct UStreamableRenderAsset : UObject {
	double ForceMipLevelsToBeResidentTimestamp; // 0x28
	int32_t NumCinematicMipLevels; // 0x30
	int32_t StreamingIndex; // 0x34
	int32_t CachedCombinedLODBias; // 0x38
	char CachedNumResidentLODs; // 0x3c
	char bCachedReadyForStreaming : 1; // 0x3d
	char NeverStream : 1; // 0x3d
	char bGlobalForceMipLevelsToBeResident : 1; // 0x3d
	char bIsStreamable : 1; // 0x3d
	char bHasStreamingUpdatePending : 1; // 0x3d
	char bForceMiplevelsToBeResident : 1; // 0x3d
	char bIgnoreStreamingMipBias : 1; // 0x3d
	char bUseCinematicMipLevels : 1; // 0x3d
};

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x408
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UDeploymentLogic : UActorComponent {
	FMulticastInlineDelegate OnPlayerPlatoonChanged; // 0xb0
	FMulticastInlineDelegate OnPlatoonMembersChanged; // 0xc0
	FMulticastInlineDelegate OnCreatePlatoonSucceeded; // 0xd0
	FMulticastInlineDelegate OnCreatePlatoonFailed; // 0xe0
	FMulticastInlineDelegate OnPlayerPlatoonJoined; // 0xf0
	FMulticastInlineDelegate OnPlayerInitiatedLeavingPlatoon; // 0x100
};

struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct UHLLMapStateComponent : UActorComponent {
	TArray<AHLLMapDataBase*> MapDataObjects; // 0xb0
	TArray<FPlayerMarkers> PlayerMarkers; // 0xc0
	TArray<FTeamRecon> TeamReconData; // 0xd0
	FMulticastInlineDelegate OnMapDataRegistered_Delegate; // 0xe0
	FMulticastInlineDelegate OnMapDataUnRegistered_Delegate; // 0xf0
	AHLLMapData_Sector* DataClass_Sector; // 0x100
	AHLLMapData_Marker* DataClass_MapMarker; // 0x108
	AHLLMapData_ReconItem* DataClass_ReconItem; // 0x110
};

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
};

struct UMainMenuVerticalNavigationScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UbtnNav_V2_C* btnNav_Barracks; // 0x238
	UbtnNav_V2_C* btnNav_Credits; // 0x240
	UbtnNav_V2_C* btnNav_GameFilters; // 0x248
	UbtnNav_V2_C* btnNav_Guide; // 0x250
	UbtnNav_V2_C* btnNav_Quit; // 0x258
	UbtnNav_V2_C* btnNav_Settings; // 0x260
	UHorizontalBox* EnlistBox; // 0x268
	UGameFiltersScreen_C* GameFiltersScreen; // 0x270
	UOverlay* Home; // 0x278
	UWidgetSwitcher* Main; // 0x280
	UMatchmakingScreen_V2_C* MatchmakingScreen_V2; // 0x288
	UVerticalBox* NavigationMenu; // 0x290
	UHorizontalBox* QuitBox; // 0x298
	UTextBlock* TextBlock_3; // 0x2a0
	UMainMenuWidget_V2_C* MainMenu; // 0x2a8
	int32_t LastMenuIndex; // 0x2b0
};

struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UWGT_RoleProgressionItem_C : UHLLRoleProgressionItem {
	UImage* Breaker; // 0x310
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x230
	ALevelSequenceActor* LevelSequenceActor; // 0x2e8
};

struct ABaseTank : ATrackedVehicle {
	UVehicleHitComponent* Hitter; // 0x2e8
	UStaticMeshComponent* CharacterMovementBarrierBody; // 0x2f0
	UStaticMeshComponent* CharacterMovementBarrierTurret; // 0x2f8
	UStaticMeshComponent* CharacterMovementBarrierBarrel; // 0x300
	UHLLArmourCollisionMesh* ArmourCollision_Body; // 0x308
	UHLLArmourCollisionMesh* ArmourCollision_Tracks; // 0x310
	UHLLArmourCollisionMesh* ArmourCollision_Turret; // 0x318
	UHLLArmourCollisionMesh* ArmourCollision_Barrel; // 0x320
	float EngineWarmupDuration; // 0x328
	float EngineShutdownDuration; // 0x32c
	float EngineSoundFadeInTime; // 0x330
	FVehicleSoundSetup EngineSound; // 0x338
	FVehicleSoundSetup EngineStartSound; // 0x358
	FVehicleSoundSetup EngineStartAbortedSound; // 0x378
	FVehicleSoundSetup EngineStopSound; // 0x398
	FVehicleSoundSetup EngineStartFailedSound; // 0x3b8
	UAudioComponent* EngineAudio; // 0x3d8
	UAudioComponent* InteriorAudio; // 0x3e0
	UAudioComponent* ExhaustAudio; // 0x3e8
	UAudioComponent* TracksAudio; // 0x3f0
	UAudioComponent* EngineStartAudio; // 0x3f8
	UAudioComponent* InteriorStartAudio; // 0x400
	UAudioComponent* ExhaustStartAudio; // 0x408
	char bEngineStarted : 1; // 0x410
	UAudioComponent* ClutchAudio; // 0x428
	ATankDriverSeat* DriverSeatClass; // 0x430
	ATankGunnerSeat* GunnerSeatClass; // 0x438
	ATankCommanderSeat* CommanderSeatClass; // 0x440
	ATankDriverSeat* DriverSeat; // 0x448
	ATankGunnerSeat* GunnerSeat; // 0x450
	ATankCommanderSeat* CommanderSeat; // 0x458
	UTurretControllerComponent2* TurretController2; // 0x460
	UAudioComponent* PitchAudio; // 0x468
	UAudioComponent* YawAudio; // 0x470
	FName TurretAudioAttachSocket; // 0x478
	USoundBase* TurretPitchSound; // 0x480
	USoundBase* TurretPitchStopSound; // 0x488
	USoundBase* TurretYawSound; // 0x490
	USoundBase* TurretYawStopSound; // 0x498
	float YawRate; // 0x4a0
	float MinTurretRotationScale; // 0x4a4
	float PitchRate; // 0x4a8
	float PitchAngleMin; // 0x4ac
	float PitchAngleMax; // 0x4b0
	float Turret_ServerUpdateRate; // 0x4b4
	UAudioComponent* InteriorHitAudio; // 0x4b8
	UHLLArmourHealthComponent* ArmourHealth; // 0x4c0
	UHLLArmourInventory* ArmourInventory; // 0x4c8
	FHLLArmourMetaData ArmourMetaData; // 0x4d0
	float DamageImpulseMagnitude; // 0x4f0
	UPhysicalMaterial* LowSpeedPhysMatOverride; // 0x4f8
	float LowSpeedThresholdKph; // 0x500
	ETeam Team; // 0x508
	UHLLVehicleFXComponent* VehicleEffects; // 0x510
	float MG_ServerUpdateRate; // 0x518
	float MG_YawRate; // 0x51c
	float MG_YawAngleMax; // 0x520
	float MG_PitchRate; // 0x524
	float MG_PitchAngleMin; // 0x528
	float MG_PitchAngleMax; // 0x52c
	uint16_t RemotePackedPitchAndYaw_HullMG; // 0x53c
	UHLLMapComponent* MapComponent; // 0x540
	UHLLVehicleInactivityComponent* InactivityMonitor; // 0x548
	UHLLIndicatorComponent* NameplateIndicatorComponent; // 0x550
	UVehicleWorldShiftingComponent* WorldShifting; // 0x558
	UVehicleAntiFlipComponent* AntiFlipComponent; // 0x560
	FName RootBoneName; // 0x568
	TArray<FName> RollerBones; // 0x570
	FName TurretBoneName; // 0x580
	FName BarrelBoneName; // 0x588
	UDataTable* WaterEffects; // 0x590
	FReconID VehicleReconID; // 0x598
	EReconItemType ReconType; // 0x59a
	EHLLDamageFilterType DamageFilterType; // 0x59b
	UHLLVehicleVibrationData* VehicleVibrationData; // 0x5a0
	UVibrationEventController* EngineVibrationController_Internal; // 0x5b0
	UVibrationEventController* EngineVibrationController_External; // 0x5b8
	UVibrationEventController* PitchVibrationController; // 0x5c0
	UVibrationEventController* YawVibrationController; // 0x5c8
	UVibrationEventController* InternalHitVibrationController; // 0x5d0
};

struct UMainMenuWidget_V2_C : UHLLMainMenuBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UWidgetAnimation* Title_Fade; // 0x240
	UWidgetAnimation* Intro_Fade; // 0x248
	UWGT_BarracksPanel_V2_C* Barracks; // 0x250
	UWGT_ServerBrowser_V2_C* Browser; // 0x258
	UTextBlock* CopyrightNotice; // 0x260
	UWGT_Credits_V2_C* Credits; // 0x268
	UWidgetSwitcher* EnlistSwitcher; // 0x270
	UW_Menu_HTP_V2_C* HowToPlayScreen; // 0x278
	UImage* Image; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_3; // 0x290
	UImage* Image_4; // 0x298
	UImage* Image_5; // 0x2a0
	UImage* Image_6; // 0x2a8
	UImage* Image_7; // 0x2b0
	UImage* Image_8; // 0x2b8
	UWidgetSwitcher* Main; // 0x2c0
	UMainMenuNavigationScreen_V2_C* MainMenuNavigationScreen; // 0x2c8
	UMainMenuVerticalNavigationScreen_C* MainMenuVerticalNavigationScreen; // 0x2d0
	UMatchmakingScreen_V2_C* MatchmakingScreen; // 0x2d8
	UOverlay* MenuBG; // 0x2e0
	UBackgroundBlur* MenuBGBlur; // 0x2e8
	UImage* MenuBGDarken; // 0x2f0
	UVerticalBox* NavHeader; // 0x2f8
	UVerticalBox* NavHeaderStart; // 0x300
	UOptionsScreen_V2_C* OptionsScreen; // 0x308
	UTextBlock* PageDescription; // 0x310
	UTextBlock* PageDescription_2; // 0x318
	UTextBlock* PageTitleText; // 0x320
	UTextBlock* PageTitleText_2; // 0x328
	UWidgetSwitcher* PanelSwitcher; // 0x330
	UBorder* RootBorder; // 0x338
	UUniformGridPanel* SocialGrid; // 0x340
	UStartScreen_V2_C* StartScreen; // 0x348
	UImage* StartScreenBG; // 0x350
	UWidgetSwitcher* TitleSwitcher; // 0x358
	UWidgetSwitcher* TitleSwitcher_2; // 0x360
	UImage* VivoxLogoImage; // 0x368
	FMulticastInlineDelegate ManageClutter; // 0x370
	TArray<UObject*> ServerListRows; // 0x380
	float OriginalPingColumnSize; // 0x390
	UObject* SelectedServerListRow; // 0x398
	int32_t NumAxisPlayers; // 0x3a0
	int32_t NumAlliesPlayers; // 0x3a4
	FDateTime LastRefreshTime; // 0x3a8
	FTimespan MinDelayBetweenRefreshesSeconds; // 0x3b0
	MenuPage CurrentPage; // 0x3b8
	TArray<FText> SelectedDescription; // 0x3c0
	TArray<UbtnNav_V2_C*> NavButtons; // 0x3d0
	FMulticastInlineDelegate BackDelegate; // 0x3e0
	MenuPage PreviousPage; // 0x3f0
	TSoftClassPtr<UObject> StartScreenAnimationClass; // 0x3f8
};

struct UStressTestPlayerControllerComponent : UActorComponent {
	AShooterCharacter* StressTestPawnClass; // 0xb8
	UPathFollowingComponent* PathFollowing; // 0xc0
	char bSimulationStopped : 1; // 0xc8
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48
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
	bool bLoadWidgetsOnDedicatedServer; // 0x231
	TArray<UObject*> CursorClasses; // 0x238
	UObject* CustomScalingRuleClassInstance; // 0x248
	UDPICustomScalingRule* CustomScalingRule; // 0x250
};

struct AHLLAbility_Reinforce : AHLLCommanderAbility_Placeable {
	float AbilityTime; // 0x370
	float ManpowerMultiplier; // 0x374
};

struct AHLLArmourWeapon : AActor {
	UHLLArmourInventory* OwningInventory; // 0x230
	bool bLastOwnerWasLocalPlayer; // 0x238
	FAmmoSourceContainer AmmoInfo; // 0x240
	char SelectedAmmoID; // 0x270
	EHint OutOfAmmoHint; // 0x271
	char bDisableLoadingWhenWeaponDamaged : 1; // 0x272
	char bAutoReload : 1; // 0x272
	char bAutoReloadWhenEmpty : 1; // 0x272
	char bCancelReloadOnOccupancyChange : 1; // 0x272
	float DisableLoadingHealthRatio; // 0x274
	float MinLoadTime; // 0x278
	USoundBase* LoadSound; // 0x280
	USoundBase* CancelLoadSound; // 0x288
	UAnimMontage* ReloadMontage; // 0x290
	UBlendSpace* ReloadBlendSpace; // 0x298
	TWeakObjectPtr<UAudioComponent> LoadAC; // 0x2a8
	FHLLWeaponBurstInfo BurstCounter; // 0x2b8
	FSlateBrush WeaponIcon; // 0x2c0
	FText WeaponName; // 0x348
	FText WeaponHeader; // 0x360
	char bDisableFiringWhenWeaponDamaged : 1; // 0x378
	char bAutomatic : 1; // 0x378
	char bAutoSimulationLoop : 1; // 0x378
	float DisableFiringHealthRatio; // 0x37c
	float ShotDelay; // 0x380
	float ShotVariance; // 0x384
	float RecoilImpulseMagnitude; // 0x388
	FName MuzzleSocketName; // 0x38c
	FName MuzzleSocketFlashName; // 0x394
	FMulticastInlineDelegate OnShotFired; // 0x3b0
	UParticleSystem* MuzzleFlash; // 0x3d0
	UParticleSystem* FireGroundSmoke; // 0x3d8
	EWeaponSoundMode FireSoundMode; // 0x3e0
	char MaxTails; // 0x3e1
	char MaxSingleFireSounds; // 0x3e2
	USoundBase* FireSound; // 0x3e8
	USoundBase* FireTailSound; // 0x3f0
	USoundBase* FireStopSound; // 0x3f8
	UCameraShake* FireCameraShake; // 0x400
	float CameraShakeRadius; // 0x408
	char bLoopedGroundSmoke : 1; // 0x40c
	char bLoopedMuzzleFlash : 1; // 0x40c
	UAnimMontage* FireMontage; // 0x410
	TWeakObjectPtr<UParticleSystemComponent> MuzzlePSC; // 0x418
	TWeakObjectPtr<UParticleSystemComponent> GroundPSC; // 0x420
	TArray<UAudioComponent*> MuzzleAudio; // 0x428
	TArray<UAudioComponent*> MuzzleAudioTails; // 0x438
	UHLLWeaponVibrationData* WeaponVibrationData; // 0x450
	UVibrationEventController* FireVibrationEventController; // 0x458
	UVibrationEventController* LoadVibrationComponent; // 0x460
	EHLLPlayerStat FireIncrementStat; // 0x468
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

struct ULocalLightComponent : ULightComponent {
	ELightUnits IntensityUnits; // 0x320
	float Radius; // 0x324
	float AttenuationRadius; // 0x328
	FLightmassPointLightSettings LightmassSettings; // 0x32c
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct UWBP_ResolutionComboBox_C : UHLLUI_OptionSelection {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UComboBoxString* ScreenResolutionComboBox; // 0x248
	FMulticastInlineDelegate OnSelectionChanged; // 0x250
};

struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UPacketHandlerProfileConfig : UObject {
	TArray<FString> Components; // 0x28
};

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xe8
	TWeakObjectPtr<UWorld> World; // 0xf8
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x100
};

struct UHLLUISettings : UDeveloperSettings {
	TSoftObjectPtr<USlateWidgetStyleAsset> UIStyleSet; // 0x38
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
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

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UHLLFootstepData : UDataAsset {
	char bCullFootstepSFX : 1; // 0x30
	char bCullFootstepFX : 1; // 0x30
	char bCullFootstepDecals : 1; // 0x30
	char bCullWaterSFX : 1; // 0x30
	char bCullWaterFX : 1; // 0x30
	float CullDistanceSound; // 0x34
	float CullDistanceEffects; // 0x38
	float CullDistanceDecals; // 0x3c
	float WaterCullDistanceSound; // 0x40
	float WaterCullDistanceEffects; // 0x44
	FRuntimeFloatCurve HeelToeDelay[0x3]; // 0x48
	FFootstepFX FootstepsFPP[0x3]; // 0x1e0
	FFootstepFX FootstepsTPP[0x3]; // 0x1218
	float FootstepDecalProjectionDistance; // 0x2250
	FWadeFX WadeFPP[0x3]; // 0x2258
	FWadeFX WadeTPP[0x3]; // 0x22a0
	FSplashFX Splashes[0x3]; // 0x22e8
	FSplashFX JumpOuts[0x3]; // 0x2318
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x410
	EControllerHand Hand; // 0x414
	FName MotionSource; // 0x418
	char bDisableLowLatencyUpdate : 1; // 0x420
	ETrackingStatus CurrentTrackingStatus; // 0x424
	bool bDisplayDeviceModel; // 0x425
	FName DisplayModelSource; // 0x428
	UStaticMesh* CustomDisplayMesh; // 0x430
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x438
	UPrimitiveComponent* DisplayComponent; // 0x4b0
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x108
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1a8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1a9
	char bFollow : 1; // 0x1ac
	char bReverse : 1; // 0x1ac
	char bForceUpright : 1; // 0x1ac
};

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UHLLResourceStatus : UUserWidget {
	EHLLResourceStatusMode StatusMode; // 0x230
	EHLLResourceStatusMode NodeMode; // 0x231
	ETeam StatusTeam; // 0x232
	FText UnknownText; // 0x238
	UTextBlock* Manpower; // 0x250
	UTextBlock* Fuel; // 0x258
	UTextBlock* Munitions; // 0x260
	UTextBlock* ManpowerNodes; // 0x268
	UTextBlock* FuelNodes; // 0x270
	UTextBlock* MunitionsNodes; // 0x278
};

struct UW_GH_GameProgress_Offensive_C : UOffensiveWarfareGameProgressWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* NewAnimation_2; // 0x238
	UW_GH_GameProgress_Offensive_Objective_C* Objective1; // 0x240
	UW_GH_GameProgress_Offensive_Objective_C* Objective2; // 0x248
	UW_GH_GameProgress_Offensive_Sector_C* Sector1; // 0x250
	UW_GH_GameProgress_Offensive_Sector_C* Sector2; // 0x258
	UW_GH_GameProgress_Offensive_Sector_C* Sector3; // 0x260
	UW_GH_GameProgress_Offensive_Sector_C* Sector4; // 0x268
	UW_GH_GameProgress_Offensive_Sector_C* Sector5; // 0x270
	UMain_C* Widget_MainRef; // 0x278
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct UMultiLineEditableText : UTextLayoutWidget {
	FText Text; // 0x128
	FText HintText; // 0x140
	FDelegate HintTextDelegate; // 0x158
	FTextBlockStyle WidgetStyle; // 0x168
	bool bIsReadOnly; // 0x3d0
	FSlateFontInfo Font; // 0x3d8
	bool SelectAllTextWhenFocused; // 0x428
	bool ClearTextSelectionOnFocusLoss; // 0x429
	bool RevertTextOnEscape; // 0x42a
	bool ClearKeyboardFocusOnCommit; // 0x42b
	bool AllowContextMenu; // 0x42c
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42d
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42e
	FMulticastInlineDelegate OnTextChanged; // 0x430
	FMulticastInlineDelegate OnTextCommitted; // 0x440
};

struct AHLLCommanderAbility : AActor {
	EGameResource ResourceCategory; // 0x228
	int32_t ResourceCost; // 0x22c
	float CooldownTime; // 0x230
	FText AbilityName; // 0x238
	FText AbilityTooltip; // 0x250
	FSlateBrush AbilityIcon; // 0x268
	char bTickWhileActive : 1; // 0x2f0
	int32_t UserInterfacePriority; // 0x2f4
	FName ActionScoreOnExecute; // 0x2f8
	FText UISubCategory; // 0x300
	char bEnableFilters : 1; // 0x318
	int32_t Filters; // 0x31c
	char bShowChatMessageWhenUsed : 1; // 0x320
	FRepAbilityState ActivationState; // 0x324
	ETeam AbilityTeam; // 0x330
	AShooterPlayerState* StartedBy; // 0x338
	USceneComponent* DummyRoot; // 0x340
};

struct UWGT_CommanderSubCategory_C : UHLLCommanderUISubCategory {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
	UImage* img_icon; // 0x260
	UHorizontalBox* TitleBox; // 0x268
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct UHLLUseContextContainer : UUserWidget {
	TMap<EHLLUseContextType, UHLLUseContextBase*> ContextWidgetClasses; // 0x230
	float BaseViewportYOffset; // 0x280
	TArray<UHLLUseContextBase*> ActiveContextWidgets; // 0x288
	EHLLUseContextType CurrentActiveContext; // 0x298
	UBorder* RootBorder; // 0x2a0
};

struct UHLLMapContextWidget : UUserWidget {
	TWeakObjectPtr<UHLLOverviewMapWrapper> OwningMap; // 0x230
	FVector2D MapPosition; // 0x238
	char bClosed : 1; // 0x240
};

struct UWGT_MapIcon_AdminCam_C : UHLLMapIcon_AdminCam {
	FPointerToUberGraphFrame UberGraphFrame; // 0x370
	UWidgetAnimation* PulseLoop; // 0x378
};

struct UHLLVehicleInactivityComponent : UActorComponent {
	int32_t OutOfBoundsTimeout; // 0xb0
	int32_t UnoccupiedTimeout; // 0xb4
	float DamageToApply; // 0xb8
	char bWorldBoundsCheck : 1; // 0xbc
	char bOccupancyCheck : 1; // 0xbc
};

struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28
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

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbFastSettings Settings; // 0xa0
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120
};

struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct APlayerCameraManager : AActor {
	APlayerController* PCOwner; // 0x220
	USceneComponent* TransformComponent; // 0x228
	float DefaultFOV; // 0x238
	float DefaultOrthoWidth; // 0x240
	float DefaultAspectRatio; // 0x248
	FCameraCacheEntry CameraCache; // 0x290
	FCameraCacheEntry LastFrameCameraCache; // 0x870
	FTViewTarget ViewTarget; // 0xe50
	FTViewTarget PendingViewTarget; // 0x1440
	FCameraCacheEntry CameraCachePrivate; // 0x1a60
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2040
	TArray<UCameraModifier*> ModifierList; // 0x2620
	TArray<UCameraModifier*> DefaultModifiers; // 0x2630
	float FreeCamDistance; // 0x2640
	FVector FreeCamOffset; // 0x2644
	FVector ViewTargetOffset; // 0x2650
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2670
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2680
	UCameraAnimInst* AnimInstPool[0x8]; // 0x2688
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x26c8
	TArray<UCameraAnimInst*> ActiveAnims; // 0x26e8
	TArray<UCameraAnimInst*> FreeAnims; // 0x26f8
	ACameraActor* AnimCameraActor; // 0x2708
	char bIsOrthographic : 1; // 0x2710
	char bDefaultConstrainAspectRatio : 1; // 0x2710
	char bClientSimulatingViewTarget : 1; // 0x2710
	char bUseClientSideCameraUpdates : 1; // 0x2710
	char bGameCameraCutThisFrame : 1; // 0x2711
	float ViewPitchMin; // 0x2714
	float ViewPitchMax; // 0x2718
	float ViewYawMin; // 0x271c
	float ViewYawMax; // 0x2720
	float ViewRollMin; // 0x2724
	float ViewRollMax; // 0x2728
	float ServerUpdateCameraTimeout; // 0x2730
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UAutomationTestSettings : UObject {
	TArray<FString> EngineTestModules; // 0x28
	TArray<FString> EditorTestModules; // 0x38
	FSoftObjectPath AutomationTestmap; // 0x48
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60
	TArray<FSoftObjectPath> AssetsToOpen; // 0x70
	FBuildPromotionTestSettings BuildPromotionTest; // 0x80
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x270
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a0
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b0
	TArray<FString> TestLevelFolders; // 0x2e0
	TArray<FExternalToolDefinition> ExternalTools; // 0x2f0
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x300
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x310
	FIntPoint DefaultScreenshotResolution; // 0x320
};

struct AMapData_Player_C : AHLLMapData_Player {
	USceneComponent* DefaultSceneRoot; // 0x258
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct AHLLAbilityDrop_BombingRun : AActor {
	TArray<FBombingRunDrop> Drops; // 0x230
	AHLLHowitzerShell* ShellClass; // 0x240
	ETeam MyTeam; // 0x248
	USceneComponent* DummyRoot; // 0x250
	TWeakObjectPtr<AShooterPlayerState> DroppedBy; // 0x258
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

struct AHLLMapData_Basic : AHLLMapDataBase {
	ETeam ObjectTeam; // 0x240
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x410
	char bEnableMaterialParameterCaching : 1; // 0x430
};

struct ACinematicShermanJumboStub : AActor {
	USkeletalMeshComponent* TankMesh; // 0x220
	TArray<UStaticMeshComponent*> AllLeftTrackTiles; // 0x228
	TArray<UStaticMeshComponent*> AllRightTrackTiles; // 0x238
	UStaticMeshComponent* RightTrackTile_000; // 0x248
	UStaticMeshComponent* RightTrackTile_001; // 0x250
	UStaticMeshComponent* RightTrackTile_002; // 0x258
	UStaticMeshComponent* RightTrackTile_003; // 0x260
	UStaticMeshComponent* RightTrackTile_004; // 0x268
	UStaticMeshComponent* RightTrackTile_005; // 0x270
	UStaticMeshComponent* RightTrackTile_006; // 0x278
	UStaticMeshComponent* RightTrackTile_007; // 0x280
	UStaticMeshComponent* RightTrackTile_008; // 0x288
	UStaticMeshComponent* RightTrackTile_009; // 0x290
	UStaticMeshComponent* RightTrackTile_010; // 0x298
	UStaticMeshComponent* RightTrackTile_011; // 0x2a0
	UStaticMeshComponent* RightTrackTile_012; // 0x2a8
	UStaticMeshComponent* RightTrackTile_013; // 0x2b0
	UStaticMeshComponent* RightTrackTile_014; // 0x2b8
	UStaticMeshComponent* RightTrackTile_015; // 0x2c0
	UStaticMeshComponent* RightTrackTile_016; // 0x2c8
	UStaticMeshComponent* RightTrackTile_017; // 0x2d0
	UStaticMeshComponent* RightTrackTile_018; // 0x2d8
	UStaticMeshComponent* RightTrackTile_019; // 0x2e0
	UStaticMeshComponent* RightTrackTile_020; // 0x2e8
	UStaticMeshComponent* RightTrackTile_021; // 0x2f0
	UStaticMeshComponent* RightTrackTile_022; // 0x2f8
	UStaticMeshComponent* RightTrackTile_023; // 0x300
	UStaticMeshComponent* RightTrackTile_024; // 0x308
	UStaticMeshComponent* RightTrackTile_025; // 0x310
	UStaticMeshComponent* RightTrackTile_026; // 0x318
	UStaticMeshComponent* RightTrackTile_027; // 0x320
	UStaticMeshComponent* RightTrackTile_028; // 0x328
	UStaticMeshComponent* RightTrackTile_029; // 0x330
	UStaticMeshComponent* RightTrackTile_030; // 0x338
	UStaticMeshComponent* RightTrackTile_031; // 0x340
	UStaticMeshComponent* RightTrackTile_032; // 0x348
	UStaticMeshComponent* RightTrackTile_033; // 0x350
	UStaticMeshComponent* RightTrackTile_034; // 0x358
	UStaticMeshComponent* RightTrackTile_035; // 0x360
	UStaticMeshComponent* RightTrackTile_036; // 0x368
	UStaticMeshComponent* RightTrackTile_037; // 0x370
	UStaticMeshComponent* RightTrackTile_038; // 0x378
	UStaticMeshComponent* RightTrackTile_039; // 0x380
	UStaticMeshComponent* RightTrackTile_040; // 0x388
	UStaticMeshComponent* RightTrackTile_041; // 0x390
	UStaticMeshComponent* RightTrackTile_042; // 0x398
	UStaticMeshComponent* RightTrackTile_043; // 0x3a0
	UStaticMeshComponent* RightTrackTile_044; // 0x3a8
	UStaticMeshComponent* RightTrackTile_045; // 0x3b0
	UStaticMeshComponent* RightTrackTile_046; // 0x3b8
	UStaticMeshComponent* RightTrackTile_047; // 0x3c0
	UStaticMeshComponent* RightTrackTile_048; // 0x3c8
	UStaticMeshComponent* RightTrackTile_049; // 0x3d0
	UStaticMeshComponent* RightTrackTile_050; // 0x3d8
	UStaticMeshComponent* RightTrackTile_051; // 0x3e0
	UStaticMeshComponent* RightTrackTile_052; // 0x3e8
	UStaticMeshComponent* RightTrackTile_053; // 0x3f0
	UStaticMeshComponent* RightTrackTile_054; // 0x3f8
	UStaticMeshComponent* RightTrackTile_055; // 0x400
	UStaticMeshComponent* RightTrackTile_056; // 0x408
	UStaticMeshComponent* RightTrackTile_057; // 0x410
	UStaticMeshComponent* RightTrackTile_058; // 0x418
	UStaticMeshComponent* RightTrackTile_059; // 0x420
	UStaticMeshComponent* RightTrackTile_060; // 0x428
	UStaticMeshComponent* RightTrackTile_061; // 0x430
	UStaticMeshComponent* RightTrackTile_062; // 0x438
	UStaticMeshComponent* RightTrackTile_063; // 0x440
	UStaticMeshComponent* RightTrackTile_064; // 0x448
	UStaticMeshComponent* RightTrackTile_065; // 0x450
	UStaticMeshComponent* RightTrackTile_066; // 0x458
	UStaticMeshComponent* RightTrackTile_067; // 0x460
	UStaticMeshComponent* RightTrackTile_068; // 0x468
	UStaticMeshComponent* RightTrackTile_069; // 0x470
	UStaticMeshComponent* RightTrackTile_070; // 0x478
	UStaticMeshComponent* RightTrackTile_071; // 0x480
	UStaticMeshComponent* RightTrackTile_072; // 0x488
	UStaticMeshComponent* RightTrackTile_073; // 0x490
	UStaticMeshComponent* RightTrackTile_074; // 0x498
	UStaticMeshComponent* RightTrackTile_075; // 0x4a0
	UStaticMeshComponent* RightTrackTile_076; // 0x4a8
	UStaticMeshComponent* LeftTrackTile_000; // 0x4b0
	UStaticMeshComponent* LeftTrackTile_001; // 0x4b8
	UStaticMeshComponent* LeftTrackTile_002; // 0x4c0
	UStaticMeshComponent* LeftTrackTile_003; // 0x4c8
	UStaticMeshComponent* LeftTrackTile_004; // 0x4d0
	UStaticMeshComponent* LeftTrackTile_005; // 0x4d8
	UStaticMeshComponent* LeftTrackTile_006; // 0x4e0
	UStaticMeshComponent* LeftTrackTile_007; // 0x4e8
	UStaticMeshComponent* LeftTrackTile_008; // 0x4f0
	UStaticMeshComponent* LeftTrackTile_009; // 0x4f8
	UStaticMeshComponent* LeftTrackTile_010; // 0x500
	UStaticMeshComponent* LeftTrackTile_011; // 0x508
	UStaticMeshComponent* LeftTrackTile_012; // 0x510
	UStaticMeshComponent* LeftTrackTile_013; // 0x518
	UStaticMeshComponent* LeftTrackTile_014; // 0x520
	UStaticMeshComponent* LeftTrackTile_015; // 0x528
	UStaticMeshComponent* LeftTrackTile_016; // 0x530
	UStaticMeshComponent* LeftTrackTile_017; // 0x538
	UStaticMeshComponent* LeftTrackTile_018; // 0x540
	UStaticMeshComponent* LeftTrackTile_019; // 0x548
	UStaticMeshComponent* LeftTrackTile_020; // 0x550
	UStaticMeshComponent* LeftTrackTile_021; // 0x558
	UStaticMeshComponent* LeftTrackTile_022; // 0x560
	UStaticMeshComponent* LeftTrackTile_023; // 0x568
	UStaticMeshComponent* LeftTrackTile_024; // 0x570
	UStaticMeshComponent* LeftTrackTile_025; // 0x578
	UStaticMeshComponent* LeftTrackTile_026; // 0x580
	UStaticMeshComponent* LeftTrackTile_027; // 0x588
	UStaticMeshComponent* LeftTrackTile_028; // 0x590
	UStaticMeshComponent* LeftTrackTile_029; // 0x598
	UStaticMeshComponent* LeftTrackTile_030; // 0x5a0
	UStaticMeshComponent* LeftTrackTile_031; // 0x5a8
	UStaticMeshComponent* LeftTrackTile_032; // 0x5b0
	UStaticMeshComponent* LeftTrackTile_033; // 0x5b8
	UStaticMeshComponent* LeftTrackTile_034; // 0x5c0
	UStaticMeshComponent* LeftTrackTile_035; // 0x5c8
	UStaticMeshComponent* LeftTrackTile_036; // 0x5d0
	UStaticMeshComponent* LeftTrackTile_037; // 0x5d8
	UStaticMeshComponent* LeftTrackTile_038; // 0x5e0
	UStaticMeshComponent* LeftTrackTile_039; // 0x5e8
	UStaticMeshComponent* LeftTrackTile_040; // 0x5f0
	UStaticMeshComponent* LeftTrackTile_041; // 0x5f8
	UStaticMeshComponent* LeftTrackTile_042; // 0x600
	UStaticMeshComponent* LeftTrackTile_043; // 0x608
	UStaticMeshComponent* LeftTrackTile_044; // 0x610
	UStaticMeshComponent* LeftTrackTile_045; // 0x618
	UStaticMeshComponent* LeftTrackTile_046; // 0x620
	UStaticMeshComponent* LeftTrackTile_047; // 0x628
	UStaticMeshComponent* LeftTrackTile_048; // 0x630
	UStaticMeshComponent* LeftTrackTile_049; // 0x638
	UStaticMeshComponent* LeftTrackTile_050; // 0x640
	UStaticMeshComponent* LeftTrackTile_051; // 0x648
	UStaticMeshComponent* LeftTrackTile_052; // 0x650
	UStaticMeshComponent* LeftTrackTile_053; // 0x658
	UStaticMeshComponent* LeftTrackTile_054; // 0x660
	UStaticMeshComponent* LeftTrackTile_055; // 0x668
	UStaticMeshComponent* LeftTrackTile_056; // 0x670
	UStaticMeshComponent* LeftTrackTile_057; // 0x678
	UStaticMeshComponent* LeftTrackTile_058; // 0x680
	UStaticMeshComponent* LeftTrackTile_059; // 0x688
	UStaticMeshComponent* LeftTrackTile_060; // 0x690
	UStaticMeshComponent* LeftTrackTile_061; // 0x698
	UStaticMeshComponent* LeftTrackTile_062; // 0x6a0
	UStaticMeshComponent* LeftTrackTile_063; // 0x6a8
	UStaticMeshComponent* LeftTrackTile_064; // 0x6b0
	UStaticMeshComponent* LeftTrackTile_065; // 0x6b8
	UStaticMeshComponent* LeftTrackTile_066; // 0x6c0
	UStaticMeshComponent* LeftTrackTile_067; // 0x6c8
	UStaticMeshComponent* LeftTrackTile_068; // 0x6d0
	UStaticMeshComponent* LeftTrackTile_069; // 0x6d8
	UStaticMeshComponent* LeftTrackTile_070; // 0x6e0
	UStaticMeshComponent* LeftTrackTile_071; // 0x6e8
	UStaticMeshComponent* LeftTrackTile_072; // 0x6f0
	UStaticMeshComponent* LeftTrackTile_073; // 0x6f8
	UStaticMeshComponent* LeftTrackTile_074; // 0x700
	UStaticMeshComponent* LeftTrackTile_075; // 0x708
	UStaticMeshComponent* LeftTrackTile_076; // 0x710
};

struct UWGT_MapIcon_BaseLineSectorSpawn_V2_C : UHLLMapIcon_BaseLineSectorSpawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	UBorder* Icon; // 0x4b0
	UScaleBox* Scaler; // 0x4b8
	UW_HoverToolTip_Explained_C* Widget_TooltipRef; // 0x4c0
};

struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	UReplicationGraphNode* ChildNode; // 0x50
};

struct AHLLSeat_ArtilleryBase : AHLLSeat {
	USoundBase* HitSound; // 0x970
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

struct UNetAnalyticsAggregatorConfig : UObject {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
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

struct UARTexture : UTexture {
	EARTextureType TextureType; // 0xb8
	float Timestamp; // 0xbc
	FGuid ExternalTextureGuid; // 0xc0
	FVector2D Size; // 0xd0
};

struct UWGT_VehicleStatus_UseContext_C : UHLLSeatHealthStatus {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
	UWGT_HealthCircular_C* Engine; // 0x258
	UWGT_HealthCircular_C* TankHull; // 0x260
	UWGT_HealthCircular_C* Tracks; // 0x268
	UWGT_HealthCircular_C* TruckHull; // 0x270
	UWGT_HealthCircular_C* Turret; // 0x278
};

struct UHTP_Widget_Role_Loadout_MachineGunner_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_6; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_13; // 0x258
	UImage* icn_faction; // 0x260
	UImage* Image_10; // 0x268
	UImage* Image_17; // 0x270
};

struct UGlobalGrenadeThrowSettings : UDataAsset {
	float StartingVelocityOverhand; // 0x30
	float StartingVelocityUnderhand; // 0x34
	float VerticalTrajectoryFactorOverhand; // 0x38
	float VerticalTrajectoryFactorUnderhand; // 0x3c
	float MovingThrowPowerFactor; // 0x40
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x4a0
	TArray<FIntPoint> ProxyComponentBases; // 0x4b0
	int8_t ProxyLOD; // 0x4c0
};

struct UHLLRadialMenu_ChatSegment : UHLLRadialMenu_Segment {
	EHLLChat ChatType; // 0x278
	UImage* ChatIcon; // 0x280
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UMaterialExpressionReroute : UMaterialExpression {
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

struct UHTP_Widget_Role_Loadout_Assault_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x268
	UImage* icn_faction; // 0x270
	UImage* Image_10; // 0x278
	UImage* Image_17; // 0x280
};

struct UHLLUseContext_LetGo : UHLLUseContextBase {
	UWidgetAnimation* PulseAnimation; // 0x238
	URichTextBlock* HealText; // 0x240
	UImage* RadialProg; // 0x248
};

struct AHLLDispenserItem_Outpost : AHLLDispenserItem_DynamicSpawnGhost {
	char bAutoDestroyOutpostsPlacedByOtherOfficers : 1; // 0x4c8
};

struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UBaseVehicleMovementComponent : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x2f0
	FVehicleTransmissionData TransmissionSetup; // 0x390
	FRuntimeFloatCurve SteeringCurve; // 0x3c0
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

struct UPlanarReflectionComponent : USceneCaptureComponent {
	UBoxComponent* PreviewBox; // 0x288
	float NormalDistortionStrength; // 0x290
	float PrefilterRoughness; // 0x294
	float PrefilterRoughnessDistance; // 0x298
	int32_t ScreenPercentage; // 0x29c
	float ExtraFOV; // 0x2a0
	float DistanceFromPlaneFadeStart; // 0x2a4
	float DistanceFromPlaneFadeEnd; // 0x2a8
	float DistanceFromPlaneFadeoutStart; // 0x2ac
	float DistanceFromPlaneFadeoutEnd; // 0x2b0
	float AngleFromPlaneFadeStart; // 0x2b4
	float AngleFromPlaneFadeEnd; // 0x2b8
	bool bShowPreviewPlane; // 0x2bc
	bool bRenderSceneTwoSided; // 0x2bd
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct ABotPawn_C : APawn {
	USceneComponent* DefaultSceneRoot; // 0x280
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

struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
	char bReentrantFlag : 1; // 0x50
};

struct UTireType : UDataAsset {
	float FrictionScale; // 0x30
};

struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct AHLLGrenadeSmokeEffect : AShooterImpactEffect {
	UStaticMeshComponent* GrenadeMesh; // 0x848
	float ExplodedTime; // 0x850
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58
};

struct UHLLRadialMenu_MarkersBase : UHLLRadialMenu_Base {
	UHLLRadialMenu_MarkersSegment* SegmentClass; // 0x318
	UTextBlock* MarkerName; // 0x320
	UTextBlock* MarkerDesc; // 0x328
	UTextBlock* MarkerCount; // 0x330
	UTextBlock* MarkerVisibility; // 0x338
};

struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f0
	AActor* ChildActor; // 0x1f8
	AActor* ChildActorTemplate; // 0x200
};

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
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

struct AHLLVehicleSpawner_PrePlaced : AHLLVehicleSpawnerBase {
	TMap<ETeam, FDataTableRowHandle> SpawnData; // 0x258
	char bIgnoreSectorControl : 1; // 0x2a8
	TWeakObjectPtr<AActor> MostRecentlySpawnedVehicle; // 0x2ac
};

struct AHLLMapData_SeatBase : AHLLMapData_Basic {
	TArray<AShooterPlayerState*> Occupants; // 0x248
	char RepYaw; // 0x258
	char bReplicateYaw : 1; // 0x259
};

struct UHLLSeatHealthStatusItem : UUserWidget {
	EHLLArmourCategory Category; // 0x230
	UImage* Icon; // 0x238
	UImage* RadialProgress; // 0x240
	UProgressBar* LinearProgress; // 0x248
	FLinearColor Colour_Min; // 0x250
	FLinearColor Colour_Max; // 0x260
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

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
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

struct UHLLRoleProgressionItem : UUserWidget {
	float CountTime; // 0x230
	FSlateSound PromotedSound; // 0x238
	FSlateSound LoopCountSound; // 0x250
	FSlateSound StopCountSound; // 0x268
	EPlayerRole Role; // 0x280
	UWidgetAnimation* Anim_FinishCount; // 0x288
	UWidgetAnimation* Anim_Promoted; // 0x290
	UWidgetAnimation* Anim_Show; // 0x298
	UTextBlock* RoleText; // 0x2a0
	UTextBlock* RoleLevelText; // 0x2a8
	UImage* RoleIcon; // 0x2b0
	UProgressBar* InitialBar; // 0x2b8
	UProgressBar* UpdateBar; // 0x2c0
	UTextBlock* ExpText; // 0x2c8
	TWeakObjectPtr<UAudioComponent> CounterLoopingAC; // 0x2d0
};

struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct UHLLVehicleFXComponent : UActorComponent {
	TMap<FName, FActiveDustTrail> ActiveDustTrails; // 0xb0
	USkeletalMeshComponent* VehicleMesh; // 0x100
	UDataTable* DustTrailData; // 0x178
	TMap<FName, FName> DustTrails; // 0x180
	float TrailSearchDistance; // 0x1d0
	float TrailCullDistance; // 0x1d4
	float TrailMinSpeed; // 0x1d8
	float TrailProjectionDepth; // 0x1dc
	TSet<FName> ExhaustSockets; // 0x1e0
	UParticleSystem* ExhaustTemplate; // 0x230
	UParticleSystem* BackfireTemplate; // 0x238
	USoundBase* BackfireSound; // 0x240
	TSet<UParticleSystemComponent*> ActiveExhaustFX; // 0x248
	float RPMDropForBackfire; // 0x298
	float BackfireChance; // 0x29c
	float MinTimeBetweenBackfires; // 0x2a0
	float SpawnMaxRPM; // 0x2a4
	float SpawnMaxRate; // 0x2a8
	AShooterImpactEffect* CollisionEffect; // 0x2b0
	float MinTimeBetweenImpacts; // 0x2b8
	float MinImpactEffectStrength; // 0x2bc
	float MinVelocForImpactEffect; // 0x2c0
};

struct UPartyManagementList_C : UUserWidget {
	UImage* LoadingParty; // 0x230
	UTextBlock* PartyAmount; // 0x238
	UScrollBox* PartyScrollingList; // 0x240
	UTextBlock* SpacerText; // 0x248
	UWGT_GameMenu_V2_C* PauseMenu; // 0x250
};

struct UHLLSeatWidgetBase : UUserWidget {
	TWeakObjectPtr<AHLLSeat> Seat; // 0x230
	UHLLSeatIcon* IconWidgetClass; // 0x238
	TArray<UHLLSeatIcon*> ActiveSeatIcons; // 0x240
	UPanelWidget* SeatIconVBox; // 0x250
	UPanelWidget* ZoomOverlay; // 0x258
	UHLLSeatHealthStatus* HealthStatusPanel; // 0x260
};

struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
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
	TArray<FSupportedAreaData> SupportedAreas; // 0x398
};

struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x248
};

struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct ABloodDecal : ADecalActor {
	TArray<UMaterialInterface*> DecalMaterials; // 0x228
};

struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x380
	bool bShouldAttachToBaseComponent; // 0x388
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bAllowTemplate : 1; // 0x330
	char bAllowDynamicCreation : 1; // 0x330
	char bValidTemplate : 1; // 0x330
	char bTemplateInitialized : 1; // 0x330
	char bCookedTemplate : 1; // 0x330
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
	TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x368
	UUserWidget* Template; // 0x390
};

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
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

struct UHLLUseContext_DismantleItem : UHLLUseContextBase {
	UImage* RadialProg; // 0x238
	URichTextBlock* DismantleText; // 0x240
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x58
	bool bUseLegacySectionIndexBlend; // 0x68
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
	FSlateColor ForegroundColor; // 0xd48
	bool bIsFocusable; // 0xd70
	FDelegate OnGenerateWidgetEvent; // 0xd74
	FMulticastInlineDelegate OnSelectionChanged; // 0xd88
	FMulticastInlineDelegate OnOpening; // 0xd98
};

struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0x88
};

struct UHLLAimAssistSettings : UDeveloperSettings {
	TSoftObjectPtr<UHLLAimAssistSettingsDataAsset> AimAssistSettingsDataAsset; // 0x38
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UOptionsScreen_V2_C : UHLLOptionScreenBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
	UWidgetAnimation* OpenMenu; // 0x388
	UWidgetAnimation* ApplyPulseIndication; // 0x390
	UOptionButton_V2_C* AAMethodOption; // 0x398
	UOptionButton_V2_C* AAQualityOption; // 0x3a0
	UOptionsTabButton_V2_C* AdminKeys; // 0x3a8
	UScrollBox* AdminKeysList; // 0x3b0
	URangeSliderWithText_V2_C* ADSMouseSensSlider; // 0x3b8
	UOptionButton_V2_C* ADSToggleOption; // 0x3c0
	UCanvasPanel* AudioPanel; // 0x3c8
	UOptionButton_V2_C* AudioQualityOption; // 0x3d0
	UHLLScrollBox* AudioScrollBox; // 0x3d8
	UOptionButton_V2_C* Btn_GameAnalytics; // 0x3e0
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x3e8
	UEditableText* ClanTagEditBox; // 0x3f0
	UOptionButton_V2_C* CommandMessagesOption; // 0x3f8
	UOptionsTabButton_V2_C* CommonKeys; // 0x400
	UScrollBox* CommonKeysList; // 0x408
	UCanvasPanel* ControlsPanel; // 0x410
	UHLLScrollBox* ControlsScrollBox; // 0x418
	USizeBox* ControlsSizeBox; // 0x420
	UOptionButton_V2_C* CrouchToggleOption; // 0x428
	URangeSliderWithText_V2_C* DeadBodiesLifetime; // 0x430
	UOptionsTabButton_V2_C* DriverKeys; // 0x438
	UOptionButton_V2_C* FoliageQualityOption; // 0x440
	UOptionButton_V2_C* FOVAspectMethod; // 0x448
	URangeSliderWithText_V2_C* FOVSlider; // 0x450
	UOptionButton_V2_C* FullScreenModeOption; // 0x458
	UOptionButton_V2_C* FXQualityOption; // 0x460
	URangeSliderWithText_V2_C* GamepadAccelerationSliderX; // 0x468
	URangeSliderWithText_V2_C* GamepadAccelerationSliderY; // 0x470
	UOptionButton_V2_C* GamepadAimAssistOption; // 0x478
	URangeSliderWithText_V2_C* GamepadCursorSensitivity; // 0x480
	UOptionsHeader_C* GamepadHeader; // 0x488
	UGamepadLayoutsScreen_C* GamepadLayoutsScreen; // 0x490
	URangeSliderWithText_V2_C* GamepadLookDeadZone; // 0x498
	URangeSliderWithText_V2_C* GamepadMovementDeadZone; // 0x4a0
	URangeSliderWithText_V2_C* GamepadScopedSensitivitySlider; // 0x4a8
	URangeSliderWithText_V2_C* GamepadSensitivityXSlider; // 0x4b0
	URangeSliderWithText_V2_C* GamepadSensitivityXWhenADSSlider; // 0x4b8
	URangeSliderWithText_V2_C* GamepadSensitivityYSlider; // 0x4c0
	URangeSliderWithText_V2_C* GamepadSensitivityYWhenADSSlider; // 0x4c8
	UCanvasPanel* GameplayPanel; // 0x4d0
	UHLLScrollBox* GameplayScrollBox; // 0x4d8
	USizeBox* GameplaySizebox; // 0x4e0
	URangeSliderWithText_V2_C* GammaSlider; // 0x4e8
	UVerticalBox* HeaderContainer; // 0x4f0
	UOptionButton_V2_C* HideFPPBullets; // 0x4f8
	UOptionButton_V2_C* HideKickVoteRequests; // 0x500
	UOptionButton_V2_C* HideOthersOption; // 0x508
	UOptionButton_V2_C* HideSelfOption; // 0x510
	UOptionButton_V2_C* HideServerInfoOption; // 0x518
	URangeSliderWithText_V2_C* HUDDisplaySliders; // 0x520
	UOptionsHeader_C* HUDHeader; // 0x528
	UOptionButton_V2_C* HUDModeButton; // 0x530
	UImage* Image_1; // 0x538
	UOptionsTabButton_V2_C* InfantryKeys; // 0x540
	UScrollBox* InfantryKeysList; // 0x548
	UOptionButton_V2_C* InvertGamepadVehicleXAxisOption; // 0x550
	UOptionButton_V2_C* InvertGamepadVehicleYAxisOption; // 0x558
	UOptionButton_V2_C* InvertGamepadXAxisOption; // 0x560
	UOptionButton_V2_C* InvertGamepadYAxisOption; // 0x568
	UOptionButton_V2_C* InvertMouseOption; // 0x570
	UOptionButton_V2_C* InvertVehicleMouse; // 0x578
	UCanvasPanel* KeyBindingsPanel; // 0x580
	UWidgetSwitcher* KeyBindingsTabSwitcher; // 0x588
	UOptionButton_V2_C* LeanToggleOption; // 0x590
	UImage* LeftTriggerPrompt; // 0x598
	UOptionButton_V2_C* ManualBolting; // 0x5a0
	UOptionButton_V2_C* MapIconRepeatAnim; // 0x5a8
	URangeSliderWithText_V2_C* MapIconScaleSlider; // 0x5b0
	URangeSliderWithText_V2_C* MarkerDisplayTimeSlider; // 0x5b8
	UOptionButton_V2_C* MarkerLink; // 0x5c0
	UOptionsHeader_C* MarkersHeader; // 0x5c8
	UOptionButton_V2_C* MasterQualityOption; // 0x5d0
	URangeSliderWithText_V2_C* MasterVolSlider; // 0x5d8
	UMenuHeader_C* MenuHeader; // 0x5e0
	UOptionButton_V2_C* MicCheckButton; // 0x5e8
	URangeSliderWithText_V2_C* MicVolSlider; // 0x5f0
	UOptionButton_V2_C* MotionBlurOption; // 0x5f8
	UOptionsHeader_C* MouseHeader; // 0x600
	UBorder* MouseInputBlocker; // 0x608
	URangeSliderWithText_V2_C* MouseSensSlider; // 0x610
	URangeSliderWithText_V2_C* MusicVolSlider; // 0x618
	URangeSliderWithText_V2_C* NameplateIconsOnlySlider; // 0x620
	URangeSliderWithText_V2_C* NameplateOpacitySliders; // 0x628
	UOptionsHeader_C* NameplatesHeader; // 0x630
	UCanvasPanel* OptionsPanel; // 0x638
	UTextBlock* OptionTextBlock; // 0x640
	UGridPanel* Panel_Audio; // 0x648
	UGridPanel* Panel_Controls; // 0x650
	UGridPanel* Panel_Gameplay; // 0x658
	UGridPanel* Panel_Video; // 0x660
	USizeBox* PanelSizeBox; // 0x668
	URangeSliderWithText_V2_C* POIDisplayTimeSlider; // 0x670
	UOptionButton_V2_C* PostProcessOption; // 0x678
	UOptionButton_V2_C* ProfanityFilter; // 0x680
	UOptionButton_V2_C* ResetHintsButton; // 0x688
	URangeSliderWithText_V2_C* ResScaleSlider; // 0x690
	UImage* RightTriggerPrompt; // 0x698
	UBorder* RootBorder; // 0x6a0
	URangeSliderWithText_V2_C* SFXVolSlider; // 0x6a8
	UOptionButton_V2_C* ShadowQualityOption; // 0x6b0
	UOptionButton_V2_C* ShowChatForNewMessages; // 0x6b8
	UOptionButton_V2_C* ShowHints; // 0x6c0
	UOptionButton_V2_C* SmoothMouseOption; // 0x6c8
	UOptionButton_V2_C* SprintToggleOption; // 0x6d0
	UOptionButton_V2_C* SSAOOption; // 0x6d8
	UOptionButton_V2_C* SteadyAimToggleOption; // 0x6e0
	UOptionsHeader_C* StreamingHeader; // 0x6e8
	UOptionButton_V2_C* StreamModeOption; // 0x6f0
	UWidgetSwitcher* Switcher; // 0x6f8
	UTabbedButtonContainer_V2_C* TabbedButtonContainer; // 0x700
	URangeSliderWithText_V2_C* TeamNameplateSliders; // 0x708
	UTextBlock* Text_Controls_InvertFirstPersonMouse; // 0x710
	UTextBlock* Text_Controls_InvertVehicleMouse; // 0x718
	UTextBlock* Text_Controls_MouseSensitivity; // 0x720
	UTextBlock* Text_Controls_MouseSensitivityAds; // 0x728
	UTextBlock* Text_Controls_SmoothMouse; // 0x730
	UTextBlock* Text_FOVAspectMethod; // 0x738
	UTextBlock* Text_Video_AAMethod; // 0x740
	UTextBlock* Text_Video_AAQuality; // 0x748
	UTextBlock* Text_Video_FoliageQuality; // 0x750
	UTextBlock* Text_Video_FullscreenMode; // 0x758
	UTextBlock* Text_Video_FXQuality; // 0x760
	UTextBlock* Text_Video_MasterQuality; // 0x768
	UTextBlock* Text_Video_PostProcessQuality; // 0x770
	UTextBlock* Text_Video_Resolution; // 0x778
	UTextBlock* Text_Video_ResolutionScale; // 0x780
	UTextBlock* Text_Video_ShadowQuality; // 0x788
	UTextBlock* Text_Video_SSAO; // 0x790
	UTextBlock* Text_Video_TextureQuality; // 0x798
	UTextBlock* Text_Video_ViewDistance; // 0x7a0
	UTextBlock* Text_Video_VSync; // 0x7a8
	UTextBlock* TextBlock_45; // 0x7b0
	UOptionButton_V2_C* TextureQualityOption; // 0x7b8
	UOptionButton_V2_C* TriggerEffectToggleOption; // 0x7c0
	URangeSliderWithText_V2_C* UIVolSlider_2D; // 0x7c8
	URangeSliderWithText_V2_C* UIVolSlider_3D; // 0x7d0
	URangeSliderWithText_V2_C* UnitNameplateSliders; // 0x7d8
	UOptionButton_V2_C* UseNameplateOcclusion; // 0x7e0
	UScrollBox* VehicleKeysList; // 0x7e8
	URangeSliderWithText_V2_C* VehicleNameplateSliders; // 0x7f0
	UOptionButton_V2_C* VerticalSyncOption; // 0x7f8
	UOptionButton_V2_C* VibrationToggleOption; // 0x800
	UCanvasPanel* VideoPanel; // 0x808
	UHLLScrollBox* VideoSettingsList; // 0x810
	USizeBox* VideoSizeBox; // 0x818
	UOptionButton_V2_C* ViewDistanceOption; // 0x820
	URangeSliderWithText_V2_C* VoiceVolSlider; // 0x828
	UWBP_ResolutionComboBox_C* WBP_ResolutionComboBox; // 0x830
	FMulticastInlineDelegate OnClosed; // 0x838
	bool EditingKeyBinding; // 0x848
	UMainMenuWidget_V2_C* MainMenu; // 0x850
	UWidget* SelectedButton; // 0x858
	UWGT_GameMenu_V2_C* PauseMenu; // 0x860
	TArray<FText> GameplayButtonPromptText; // 0x868
	TArray<FText> ControlsButtonPromptText; // 0x878
	TArray<FText> VideoButtonPromptText; // 0x888
	TArray<FText> KeyBindingsButtonPromptText; // 0x898
	TArray<FText> GamepadButtonPromptText; // 0x8a8
	TArray<FText> AudioButtonPromptText; // 0x8b8
	FSlateBrush RightTriggerXboxImage; // 0x8c8
	FSlateBrush LeftTriggerXboxImage; // 0x950
	FSlateBrush RightTriggerPlaystationImage; // 0x9d8
	FSlateBrush LeftTriggerPlaystationImage; // 0xa60
	bool bHasChangedKeyBinding; // 0xae8
	UMatchmakingScreen_V2_C* MatchmakingScreen; // 0xaf0
	TArray<FResolutionPair> Resolutions; // 0xaf8
	UHLLDialogBox* ResetHintsDialog; // 0xb08
	UHLLDialogBox* ResetPageDialog; // 0xb10
	bool bOriginalScrollBarVisibility; // 0xb18
	bool bCanScroll; // 0xb19
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x220
	float MaxDrawDistance; // 0x224
	float MaxDistanceFadeRange; // 0x228
	char bUseTemperature : 1; // 0x22c
	int32_t ShadowMapChannel; // 0x230
	float MinRoughness; // 0x238
	float SpecularScale; // 0x23c
	float ShadowResolutionScale; // 0x240
	float ShadowBias; // 0x244
	float ShadowSlopeBias; // 0x248
	float ShadowSharpen; // 0x24c
	float ContactShadowLength; // 0x250
	char ContactShadowLengthInWS : 1; // 0x254
	char InverseSquaredFalloff : 1; // 0x254
	char CastTranslucentShadows : 1; // 0x254
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x254
	char bAffectDynamicIndirectLighting : 1; // 0x254
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x254
	FLightingChannels LightingChannels; // 0x258
	UMaterialInterface* LightFunctionMaterial; // 0x260
	FVector LightFunctionScale; // 0x268
	UTextureLightProfile* IESTexture; // 0x278
	char bUseIESBrightness : 1; // 0x280
	float IESBrightnessScale; // 0x284
	float LightFunctionFadeDistance; // 0x288
	float DisabledBrightness; // 0x28c
	char bEnableLightShaftBloom : 1; // 0x290
	float BloomScale; // 0x294
	float BloomThreshold; // 0x298
	float BloomMaxBrightness; // 0x29c
	FColor BloomTint; // 0x2a0
	bool bUseRayTracedDistanceFieldShadows; // 0x2a4
	float RayStartOffsetDepthScale; // 0x2a8
};

struct UHLLCosmeticCharacterAnimInstance : UAnimInstance {
	ELoadoutAnimType AnimationType; // 0x270
	UAnimSequence* InheritancePose; // 0x278
};

struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x220
};

struct UHLLUseContext_Repair : UHLLUseContextBase {
	UImage* RadialProg; // 0x238
	URichTextBlock* RepairText; // 0x240
	UHLLSeatHealthStatus* HealthStatusPanel; // 0x248
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

struct UPhysicsSettings : UDeveloperSettings {
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
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x58
	ESettingsLockedAxis LockedAxis; // 0xbc
	ESettingsDOF DefaultDegreesOfFreedom; // 0xbd
	float BounceThresholdVelocity; // 0xc0
	EFrictionCombineMode FrictionCombineMode; // 0xc4
	EFrictionCombineMode RestitutionCombineMode; // 0xc5
	float MaxAngularVelocity; // 0xc8
	float MaxDepenetrationVelocity; // 0xcc
	float ContactOffsetMultiplier; // 0xd0
	float MinContactOffset; // 0xd4
	float MaxContactOffset; // 0xd8
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xdc
	ECollisionTraceFlag DefaultShapeComplexity; // 0xdd
	bool bDefaultHasComplexCollision; // 0xde
	bool bSuppressFaceRemapTable; // 0xdf
	bool bSupportUVFromHitResults; // 0xe0
	bool bDisableActiveActors; // 0xe1
	bool bDisableKinematicStaticPairs; // 0xe2
	bool bDisableKinematicKinematicPairs; // 0xe3
	bool bDisableCCD; // 0xe4
	bool bEnableEnhancedDeterminism; // 0xe5
	float AnimPhysicsMinDeltaTime; // 0xe8
	bool bSimulateAnimPhysicsAfterReset; // 0xec
	float MaxPhysicsDeltaTime; // 0xf0
	bool bSubstepping; // 0xf4
	bool bSubsteppingAsync; // 0xf5
	float MaxSubstepDeltaTime; // 0xf8
	int32_t MaxSubsteps; // 0xfc
	float SyncSceneSmoothingFactor; // 0x100
	float InitialAverageFrameRate; // 0x104
	int32_t PhysXTreeRebuildRate; // 0x108
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0x110
	FBroadphaseSettings DefaultBroadphaseSettings; // 0x120
	FChaosPhysicsSettings ChaosSettings; // 0x160
};

struct UHTP_Widget_Role_Loadout_AntiTank_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_5; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_6; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x268
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x270
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x278
	UImage* icn_faction; // 0x280
	UImage* Image_10; // 0x288
	UImage* Image_17; // 0x290
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f0
};

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe0
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf0
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x100
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x110
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x120
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x130
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UHLLXPItem : UUserWidget {
	UTextBlock* NameText; // 0x230
	UTextBlock* ValueText; // 0x238
	UWidgetAnimation* Anim_Show; // 0x240
	float Value; // 0x248
	char bIsMultiplier : 1; // 0x24c
};

struct AShooterPickup : AActor {
	UParticleSystemComponent* PickupPSC; // 0x220
	UParticleSystem* ActiveFX; // 0x228
	UParticleSystem* RespawningFX; // 0x230
	USoundCue* PickupSound; // 0x238
	USoundCue* RespawnSound; // 0x240
	float RespawnTime; // 0x248
	char bIsActive : 1; // 0x24c
	AShooterCharacter* PickedUpBy; // 0x250
};

struct UGameTimerWidget : UUserWidget {
	UTextBlock* Text; // 0x230
	UContentWidget* ManpowerIconPanel; // 0x238
	UWidgetAnimation* ResetToNormalState; // 0x240
	UWidgetAnimation* OverTime; // 0x248
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UCineCameraComponent : UCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x7b0
	FCameraFilmbackSettings Filmback; // 0x7bc
	FCameraLensSettings LensSettings; // 0x7c8
	FCameraFocusSettings FocusSettings; // 0x7e0
	float CurrentFocalLength; // 0x838
	float CurrentAperture; // 0x83c
	float CurrentFocusDistance; // 0x840
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x850
	TArray<FNamedLensPreset> LensPresets; // 0x860
	FString DefaultFilmbackPresetName; // 0x870
	FString DefaultFilmbackPreset; // 0x880
	FString DefaultLensPresetName; // 0x890
	float DefaultLensFocalLength; // 0x8a0
	float DefaultLensFStop; // 0x8a4
};

struct UHLLUI_CosmeticItem : UUserWidget {
	TWeakObjectPtr<UHLLUI_CosmeticCategory> ParentCategory; // 0x230
	UImage* ItemIcon; // 0x238
	UButton* RootButton; // 0x240
	UTextBlock* ItemName; // 0x248
	UHLLUI_CosmeticItemTooltip* TooltipClass; // 0x250
	char bIsSelected : 1; // 0x258
	char bIsUnlocked : 1; // 0x258
	char bIsPreviewing : 1; // 0x258
	FDataTableRowHandle CosmeticItemHandle; // 0x260
	UHLLUI_CosmeticItemTooltip* CosmeticTooltip; // 0x270
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x228
	UHLODProxy* Proxy; // 0x278
	FName Key; // 0x280
	float LODDrawDistance; // 0x288
	int32_t LODLevel; // 0x28c
	TArray<AActor*> SubActors; // 0x290
	char CachedNumHLODLevels; // 0x2a0
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x970
};

struct UHLLDeploymentMap : UHLLOverviewMap {
	FMulticastInlineDelegate OnSpawnPointSelectionChanged; // 0x460
	TArray<UHLLMapIconBase*> SpawnPoints; // 0x470
};

struct AHLLAbility_Encouraged : AHLLAbility_PassiveBase {
	int32_t Multiplier; // 0x360
};

struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UABP_Wrench_FPP_V2_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FAnimNode_Root AnimGraphNode_Root; // 0x278
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x338
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x440
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x460
	UABP_Rifleman_FPP_V2_C* FPPInstance; // 0x480
	UABP_Rifleman_TPP_V2_C* TPPInstance; // 0x488
	AShooterWeapon* ShooterWeapon; // 0x490
	AShooterCharacter* ShooterCharacter; // 0x498
	float TransitionSpeed; // 0x4a0
	ECharacterStance Stance; // 0x4a4
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct AHLLGameWarmupVolume : AActor {
	float ExpireTime; // 0x220
	UBoxComponent* VolumeCollision; // 0x228
	UStaticMeshComponent* WallMesh; // 0x230
	UMaterialInstanceDynamic* MeshDMI; // 0x238
	UAudioComponent* CountdownAC; // 0x240
	float FadeOutTime; // 0x24c
	float CountdownSoundTime; // 0x250
	USoundBase* CountdownSound; // 0x258
	USoundBase* StingerSound; // 0x260
};

struct UHLLUI_OptionSelection : UUserWidget {
	int32_t PlatformVisibility; // 0x230
	UShooterGameViewportClient* ViewportClient; // 0x238
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x1f0
	float FogMultiplier; // 0x1f4
	float DensityMultiplier; // 0x1f8
	float DensityOffset; // 0x1fc
	float DistanceScale; // 0x200
	float AltitudeScale; // 0x204
	float DistanceOffset; // 0x208
	float GroundOffset; // 0x20c
	float StartDistance; // 0x210
	float SunDiscScale; // 0x214
	float DefaultBrightness; // 0x218
	FColor DefaultLightColor; // 0x21c
	char bDisableSunDisk : 1; // 0x220
	char bAtmosphereAffectsSunIlluminance : 1; // 0x220
	char bDisableGroundScattering : 1; // 0x220
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x224
	UTexture2D* TransmittanceTexture; // 0x250
	UTexture2D* IrradianceTexture; // 0x258
};

struct UHLLDispenserListItem_Satchel : UHLLDispenserListItem {
	UTextBlock* TimeText; // 0x250
};

struct UWBP_RoundSummaryKeyDetails_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* KeyDescription; // 0x238
	UImage* KeyImage; // 0x240
	UTextBlock* KeyTitle; // 0x248
	UTexture2D* Image; // 0x250
	FText Title; // 0x258
	FText Description; // 0x270
};

struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	FExpressionInput WorldPosition; // 0x54
	FExpressionInput MipValue; // 0x68
	URuntimeVirtualTexture* VirtualTexture; // 0x80
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x88
	bool bSinglePhysicalSpace; // 0x89
	ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x8a
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
};

struct UWGT_Disclaimer_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* FadeInOut; // 0x238
	UbtnSimple_V2_C* btn_Continue; // 0x240
	UImage* div01; // 0x248
	UImage* div02; // 0x250
	UHorizontalBox* HB_Tips; // 0x258
	UImage* Image; // 0x260
	UImage* Image_86; // 0x268
	URetainerBox* RB_FLICKER; // 0x270
	UScrollBox* ScrollBox_1; // 0x278
	UWGT_Disclaimer_tipColumn_C* Tip_Communicate; // 0x280
	UWGT_Disclaimer_tipColumn_C* Tip_Socialize; // 0x288
	UWGT_Disclaimer_tipColumn_C* Tip_StartSimple; // 0x290
	UMainMenuWidget_V2_C* OwningMenu; // 0x298
	TArray<UWGT_Disclaimer_tipColumn_C*> Tips; // 0x2a0
	FHLLUIStyle StyleGuide; // 0x2b0
};

struct UW_Menu_HTP_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* A_NewInfoContent; // 0x238
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x240
	UEditableTextBox* ETB_SearchBar; // 0x248
	UHLLScrollBox* HLLScrollBox_2; // 0x250
	UHorizontalBox* HorizontalBox_2; // 0x258
	UHTP_Widget_Role_Commander_C* HTP_Widget_Role_Commander; // 0x260
	UImage* Image_2; // 0x268
	UImage* Image_3; // 0x270
	UImage* Img_Item; // 0x278
	UMenuHeader_C* MenuHeader; // 0x280
	UOverlay* OV_WidgetHolder; // 0x288
	URetainerBox* RetainerBox_1; // 0x290
	USizeBox* SizeBox_7; // 0x298
	UTabbedButtonContainer_V2_C* TabbedButtonContainer; // 0x2a0
	UTextBlock* Txt_HintBody; // 0x2a8
	URichTextBlock* Txt_RichHintBody; // 0x2b0
	UVerticalBox* VB_OptionsBtnList; // 0x2b8
	UVerticalBox* VB_OptionsList; // 0x2c0
	FMulticastInlineDelegate OnClosed; // 0x2c8
	Enum_HowToPlay Widget_Tab; // 0x2d8
	int32_t Widget_Topic; // 0x2dc
	TArray<UW_Btn_HTPTopic_V2_C*> Btn_TopicList; // 0x2e0
	UW_Btn_HTPTopic_V2_C* Widget_PreviousButton; // 0x2f0
	TArray<FST_HTP> Search_TopicList; // 0x2f8
	FName TopicRowName; // 0x308
	UMainMenuWidget_V2_C* MainMenu; // 0x310
	int32_t ButtonIndex; // 0x318
	bool bOriginalScrollBarVisibility; // 0x31c
	UHTP_Widget_Topic_Generic_C* ReusableGeneric; // 0x320
	TMap<FName, UUserWidget*> ReusableWidgetMap; // 0x328
	UOverlaySlot* GenericOverlayslot; // 0x378
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct ULeaningComponent : UActorComponent {
	float AngleDegrees; // 0xb0
	float LeanTime; // 0xb4
	float DistanceToPivot; // 0xb8
	ELeanDirection CurrentLeanDirection; // 0xbc
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

struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UGameplayTagsDeveloperSettings : UObject {
	FString DeveloperConfigName; // 0x28
};

struct UHLLRadialMenu_WeaponBase : UHLLRadialMenu_Base {
	UHLLRadialMenu_WeaponSegment* SegmentClass; // 0x318
	UTextBlock* WeaponName; // 0x320
};

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct UIndicator_Medic_C : UHLLMedicIndicator {
	UImage* Image_1; // 0x2b8
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

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct ABoxSectorCaptureBooster : ASectorCaptureBooster {
	UBoxComponent* TriggerShape; // 0x280
};

struct UWGT_MarkerMenu_C : UHLLMarkers_MapMenu {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UWidgetAnimation* Open; // 0x288
	UImage* Breaker; // 0x290
	UWGT_OverviewMap_V2_C* OveriewMapParent; // 0x298
};

struct AHLLCommanderAbility_Selection : AHLLCommanderAbility {
	TWeakObjectPtr<UObject> SelectionContext; // 0x350
	char bIsSelectionValid : 1; // 0x358
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
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

struct UWGT_WeaponListItem_C : UHLLWeaponListItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	USizeBox* KeySBox; // 0x2a8
};

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UHTP_Widget_Role_Loadout_Commander_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_6; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_7; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_8; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x268
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x270
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x278
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_5; // 0x280
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_12; // 0x288
	UImage* icn_faction; // 0x290
	UImage* Image_10; // 0x298
	UImage* Image_17; // 0x2a0
};

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct UHLLUseContext_Upgrade : UHLLUseContextBase {
	UWidget* RootWidget; // 0x238
	UImage* IconImage; // 0x240
	UImage* RadialProg; // 0x248
	URichTextBlock* DisplayText; // 0x250
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	FExpressionInput Input; // 0x58
	char DefaultR : 1; // 0x6c
	char DefaultG : 1; // 0x6c
	char DefaultB : 1; // 0x6c
	char DefaultA : 1; // 0x6c
};

struct UTabbedButtonContainer_V2_C : UTabbedButtonContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UHorizontalBox* ButtonContainer; // 0x248
	UImage* LeftShoulder_UI; // 0x250
	UImage* RightShoulder_UI; // 0x258
	FSlateBrush LeftShoulderStyle; // 0x260
	FSlateBrush RightShoulderStyle; // 0x2e8
	int32_t NumberOfTabs; // 0x370
	int32_t ActiveTabIndex; // 0x374
	TArray<FText> TabbedButtonsText; // 0x378
	TArray<bool> bPCOnly; // 0x388
	int32_t TextSize; // 0x398
	bool bSectionFocus; // 0x39c
	FMulticastInlineDelegate OnTabClicked; // 0x3a0
	int32_t ChosenButtonIndex; // 0x3b0
	bool bOriginalSectionFocus; // 0x3b4
	FSlateBrush LeftPlaystationShoulderStyle; // 0x3b8
	FSlateBrush LeftXboxShoulderStyle; // 0x440
	FSlateBrush RightPlaystationShoulderStyle; // 0x4c8
	FSlateBrush RightXboxShoulderStyle; // 0x550
};

struct AShooterTeamStart : APlayerStart {
	int32_t SpawnTeam; // 0x250
	char bNotForPlayers : 1; // 0x254
	char bNotForBots : 1; // 0x254
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct UWGT_RadialChat_Segment_C : UHLLRadialMenu_ChatSegment {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	USizeBox* IconSizer; // 0x290
	UImage* SegmentBG; // 0x298
	FLinearColor SegmentOffColour; // 0x2a0
	FLinearColor SegmentColour; // 0x2b0
	UMaterialInstanceDynamic* DynMatSegmentBG; // 0x2c0
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct AHLLVehicleSpawnerBase : AActor {
	USceneComponent* DummyRoot; // 0x220
	UBoxComponent* SafeZone; // 0x228
	float RetrySpawnDelay; // 0x230
	FVector_NetQuantize SpawnBounds; // 0x234
	int32_t SafeZoneInflation; // 0x240
	FTimerHandle TH_RetrySpawn; // 0x248
	AActor* RetrySpawnClass; // 0x250
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0xd0
	FGuid ExpressionGUID; // 0xd8
	FName Group; // 0xe8
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x58
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UHLLMapIconBase : UUserWidget {
	UScaleBox* MapIconScaleBox; // 0x230
	AHLLMapDataBase* AssignedData; // 0x238
	FVector2D IconAlignment; // 0x240
	int32_t IconPriority; // 0x248
	FRuntimeFloatCurve ZoomIconScale; // 0x250
	EMapIconFilter FilterType; // 0x2d8
	char bHighlightOnHover : 1; // 0x2d9
	char bAllowHighlightLock : 1; // 0x2d9
	char bAllowMapInteraction : 1; // 0x31c
	UHLLTooltipBase* TooltipClass; // 0x320
	int32_t TooltipZOrder; // 0x328
	UHLLTooltipBase* ActiveTooltip; // 0x330
	UMapIconButton* HoverButton; // 0x338
	UImage* IconImage; // 0x340
	UHLLOverviewMap* OwningMapWidget; // 0x358
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
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

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58
};

struct USkyAtmosphereComponent : USceneComponent {
	ESkyAtmosphereTransformMode TransformMode; // 0x1f0
	float BottomRadius; // 0x1f4
	FColor GroundAlbedo; // 0x1f8
	float AtmosphereHeight; // 0x1fc
	float MultiScatteringFactor; // 0x200
	float RayleighScatteringScale; // 0x204
	FLinearColor RayleighScattering; // 0x208
	float RayleighExponentialDistribution; // 0x218
	float MieScatteringScale; // 0x21c
	FLinearColor MieScattering; // 0x220
	float MieAbsorptionScale; // 0x230
	FLinearColor MieAbsorption; // 0x234
	float MieAnisotropy; // 0x244
	float MieExponentialDistribution; // 0x248
	float OtherAbsorptionScale; // 0x24c
	FLinearColor OtherAbsorption; // 0x250
	FTentDistribution OtherTentDistribution; // 0x260
	FLinearColor SkyLuminanceFactor; // 0x26c
	float AerialPespectiveViewDistanceScale; // 0x27c
	float HeightFogContribution; // 0x280
	float TransmittanceMinLightElevationAngle; // 0x284
	FGuid bStaticLightingBuiltGUID; // 0x2ac
};

struct AHLLRconState : AInfo {
	FMulticastInlineDelegate SayMessageUpdatedEvent; // 0x220
	FString m_CurrentRconSay; // 0x230
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148
};

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x268
	float CaptureDistanceScale; // 0x26c
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x270
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UWGT_UseContext_Upgrade_C : UHLLUseContext_Upgrade {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UWGT_UseContext_BandageSelf_C : UHLLUseContext_Bandage {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
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

struct UHLLMaterialManager : UObject {
	TArray<UMaterialParameterCollection*> FoliageParamCollections; // 0x28
	FName ParamNameFootLocation; // 0x38
};

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UHLLMapTooltip_ResourceNode : UHLLTooltipBase {
	UImage* ResourceTypeImage; // 0x260
	UTextBlock* ResourceTypeText; // 0x268
	UTextBlock* ResourceGenValue; // 0x270
};

struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct AVehicleDriverSeat : AVehicleSeatBase {
	char bOnlyAllowArmourUnitsIn : 1; // 0x978
	UStaticMeshComponent* InteriorMesh; // 0x990
	USeatCameraController* CameraController; // 0x998
};

struct UStartScreen_V2_C : UHLLSplashScreen {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UWidgetAnimation* TextGlow; // 0x240
	UWidgetAnimation* TextFade; // 0x248
	UButton* MouseButton; // 0x250
	URetainerBox* Retainer; // 0x258
	UTextBlock* StartText; // 0x260
	UTextBlock* UserNameText; // 0x268
	UMainMenuWidget_V2_C* MainMenu; // 0x270
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28
};

struct UHLLSeatHealthStatus : UUserWidget {
	UHLLArmourHealthComponent* HealthComponent; // 0x230
	TArray<UHLLSeatHealthStatusItem*> Items; // 0x238
	UWidget* RepairInProgressWidget; // 0x248
};

struct UWGT_RoundTeamContainer_C : UHLLTeamContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UImage* HeaderSplitter; // 0x2e8
	UImage* icn_attack; // 0x2f0
	UImage* icn_combat; // 0x2f8
	UImage* icn_defense; // 0x300
	UImage* icn_support; // 0x308
	UWidget* Tooltip; // 0x310
	UWGT_RoundSummaryDetails_V2_C* Scoreboard; // 0x318
};

struct UHLLDamageVolumeComponent : UBoxComponent {
	TArray<FDamageVolumeTracker> DamageTracker; // 0x438
	UShooterDamageType* DamageType; // 0x448
	float Damage; // 0x450
	float DamageInterval; // 0x454
	float InitialDamageDelay; // 0x458
	char bConsiderAsSelfInflicted : 1; // 0x45c
	char bUsePawnEyeLocation : 1; // 0x45c
	float EyeVerticalOffset; // 0x460
};

struct UHLLMapIcon_ResourceNode : UHLLMapIcon_Basic {
	USizeBox* RadiusSBox; // 0x368
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct USuspensionsComponent : UActorComponent {
	char bEnabled : 1; // 0xb0
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58
};

struct UWGT_UseContext_EnterSeat_C : UHLLUseContext_EnterSeat {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
};

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct AHLLSupplyDrop_Player : AHLLSupplyDropBase {
	TArray<TWeakObjectPtr<AShooterCharacter>> ResuppliedPlayers; // 0x2e0
	USoundBase* ResupplySound; // 0x2f0
	EHLLAmmoType SupplyType; // 0x2f8
	int32_t MaxResupplies; // 0x2fc
	float ResupplyTime; // 0x300
};

struct UHLLTankSeatUI_Base : UHLLSeatWidgetBase {
	UImage* TankBodyImage; // 0x270
	UImage* TankTurretImage; // 0x278
};

struct UPlatoonManagementStackKickRequest : UPlatoonManagementStackInvite {
	UButton* NotWithOfficer; // 0x270
	UButton* NotCommunicating; // 0x278
	UButton* MakingRoomForFriend; // 0x280
	UButton* Cancel; // 0x288
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

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UBPW_ArmyCommanderRole_V2_C : UArmyCommanderRole {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* HorizontalBox_1; // 0x268
	UTextBlock* RoleCount; // 0x270
	UVerticalBox* VerticalBox_1; // 0x278
	UW_HoverToolTip_C* Widget Tooltip Ref Release; // 0x280
	UDeploymentScreen_V2_C* DeploymentScreen; // 0x288
	bool bSelected; // 0x290
};

struct ABaseReconVehicle : ABaseVehicle {
	UTurretControllerComponent2* TurretController2; // 0x4e8
	UAudioComponent* PitchAudio; // 0x4f0
	UAudioComponent* YawAudio; // 0x4f8
	FName TurretAudioAttachSocket; // 0x500
	UStaticMeshComponent* CharacterMovementBarrierTurret; // 0x508
	UStaticMeshComponent* CharacterMovementBarrierBarrel; // 0x510
	UHLLArmourCollisionMesh* ArmourCollision_Body; // 0x518
	UHLLArmourCollisionMesh* ArmourCollision_Turret; // 0x520
	UHLLArmourCollisionMesh* ArmourCollision_Barrel; // 0x528
	ATankGunnerSeat* GunnerSeatClass; // 0x530
	ATankCommanderSeat* CommanderSeatClass; // 0x538
	AHLLSeat* FirstPassengerSeatClass; // 0x540
	AHLLSeat* SecondPassengerSeatClass; // 0x548
	ATankGunnerSeat* GunnerSeat; // 0x550
	ATankCommanderSeat* CommanderSeat; // 0x558
	AHLLSeat* FirstPassengerSeat; // 0x560
	AHLLSeat* SecondPassengerSeat; // 0x568
	UVibrationEventController* PitchVibrationController; // 0x570
	UVibrationEventController* YawVibrationController; // 0x578
};

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBPW_ArmyLogo_C : UArmyLogo {
	UOverlay* USArmyForce; // 0x248
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

struct UHLLReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	AActor* LastPawn; // 0x278
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x280
};

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x268
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x270
	UBoxComponent* PreviewCaptureBox; // 0x278
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UHLLCommanderUISubCategory : UUserWidget {
	FText SubCategoryTitle; // 0x230
	UVerticalBox* ItemVBox; // 0x248
	UTextBlock* CategoryHeading; // 0x250
};

struct AWarfareStart : APlayerStart {
	ETeam Team; // 0x258
	int32_t Group; // 0x25c
};

struct AHLLCommanderAbility_DropperPlane : AHLLCommanderAbility_PlaneBase {
	AActor* SpawnClass; // 0x3b8
	float SpawnAltitude; // 0x3c0
	char bDidDrop : 1; // 0x3c4
	float DropDelayTime; // 0x3c8
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

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0
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

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct ATankGunnerSeat : ATankSeatBase {
	bool bCanPrecisionAim; // 0x989
	float SlowPitchMultiplier; // 0x98c
	float SlowYawMultiplier; // 0x990
};

struct UGameFiltersScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* ExitSlide; // 0x238
	UWidgetAnimation* EnterSlide; // 0x240
	UImage* Image_37; // 0x248
	UbtnSimple_V2_C* PreferredGameModeButton; // 0x250
	UbtnSimple_V2_C* PreferredMapButton; // 0x258
	UbtnSimple_V2_C* PreferredRegionButton; // 0x260
	UbtnSimple_V2_C* PrivateLobbyButton; // 0x268
	UMatchmakingScreen_V2_C* MatchmakingScreen; // 0x270
	TArray<FText> GameModes; // 0x278
	TArray<FText> Maps; // 0x288
	TArray<FText> Regions; // 0x298
	TArray<FText> Lobbies; // 0x2a8
	TArray<int32_t> ButtonIndex; // 0x2b8
};

struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28
};

struct UHTP_Widget_Role_Loadout_Rifleman_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x268
	UImage* icn_faction; // 0x270
	UImage* Image_10; // 0x278
	UImage* Image_17; // 0x280
};

struct UPaperTerrainComponent : UPrimitiveComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x410
	bool bClosedSpline; // 0x418
	bool bFilledSpline; // 0x419
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x420
	int32_t RandomSeed; // 0x428
	float SegmentOverlapAmount; // 0x42c
	FLinearColor TerrainColor; // 0x430
	int32_t ReparamStepsPerSegment; // 0x440
	ESpriteCollisionMode SpriteCollisionDomain; // 0x444
	float CollisionThickness; // 0x448
	UBodySetup* CachedBodySetup; // 0x450
};

struct Uhll_text_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* txt_Text; // 0x238
	FText Text; // 0x240
	bool isAllCaps; // 0x258
	FSlateColor FontColor; // 0x260
	FSlateFontInfo Font; // 0x288
	bool AutoWrap; // 0x2d8
	FLinearColor ShadowColor; // 0x2dc
	FVector2D ShadowOffset; // 0x2ec
	ETextJustify Justification; // 0x2f4
};

struct UWGT_OverviewMapWidget_C : UHLLOverviewMap {
	USizeBox* MapSBox; // 0x460
};

struct UTrackedVehicleAnimInstance : UVehicleAnimInstance {
	UTrackedVehicleMovementComponent* TrackedVehicleMovementComponent; // 0x978
};

struct AHLLAntiTankGun : AHLLArtilleryBase {
	float DismantleTime; // 0x378
	FName DismantleScore; // 0x37c
	AShooterImpactEffect* DismantleEffect; // 0x388
	FTransform DismantleEffectTransform; // 0x390
	FHLLUpgradeInfo UpgradeData; // 0x3c0
	UHLLUpgradeGhostComponent* UpgradeGhostComponent; // 0x448
	UCapsuleComponent* PlayerBlockerL; // 0x450
	UCapsuleComponent* PlayerBlockerR; // 0x458
};

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct AShooterProjectile : AActor {
	UHLLProjectileMovement* MovementComp; // 0x230
	USphereComponent* CollisionComp; // 0x238
	UParticleSystemComponent* ParticleComp; // 0x240
	UStaticMeshComponent* ProjectileMesh; // 0x248
	AShooterImpactEffect* ExplosionTemplate; // 0x250
	AShooterImpactEffect* PenetrationTemplate; // 0x258
	AShooterImpactEffect* RicochetTemplate; // 0x260
	APlayerState* MyPlayerState; // 0x268
	ETeam Team; // 0x270
	float ProjectileLife; // 0x274
	int32_t ExplosionDamage; // 0x278
	float ExplosionRadius; // 0x27c
	float ExplosionFalloff; // 0x280
	UShooterDamageType* DamageType; // 0x288
	float PostExplodeLifespan; // 0x290
	char bExplodeAtEndOfLife : 1; // 0x294
	char bExploded : 1; // 0x294
	char bPenetrated : 1; // 0x294
	char bDidRicochet : 1; // 0x294
	FProjectileHitData HitData; // 0x298
	FVector RicochetLocationWS; // 0x3d8
	float SuppressionRadius; // 0x3e4
	float SuppressionAmount_Flyby; // 0x3e8
	char bApplyFlybySuppressionToAllTeams : 1; // 0x3ec
	ESuppressionType FlybySuppressionType; // 0x3ed
	float SuppressionConeAngle; // 0x3f0
	FCollisionProfileName SuppressionQuery; // 0x3f4
	float SuppressionAmount_Explode; // 0x3fc
	float SuppressionFalloff_Explode; // 0x400
	float SuppressionRadius_Explode; // 0x404
	char bApplyExplodeSuppressionToAllTeams : 1; // 0x408
	ESuppressionType ExplosionSuppressionType; // 0x409
	char bUseBulletCrackSound : 1; // 0x461
	float BulletCrackRadius; // 0x464
	USoundBase* BulletCrackSound; // 0x468
	FVector_NetQuantize SpawnLocation; // 0x470
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UGameplayTagsManager : UObject {
	TArray<FGameplayTagSource> TagSources; // 0xc0
	TArray<UDataTable*> GameplayTagTables; // 0x1b0
};

struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x438
	int32_t MapHeight; // 0x43c
	int32_t TileWidth; // 0x440
	int32_t TileHeight; // 0x444
	UPaperTileSet* DefaultLayerTileSet; // 0x448
	UMaterialInterface* Material; // 0x450
	TArray<UPaperTileLayer*> TileLayers; // 0x458
	FLinearColor TileMapColor; // 0x468
	int32_t UseSingleLayerIndex; // 0x478
	bool bUseSingleLayer; // 0x47c
	UPaperTileMap* TileMap; // 0x480
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UAvailablePlatoonTypes_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UPlatoonTypeListItem_V2_C* Armor; // 0x238
	UPlatoonTypeListItem_V2_C* Infantry; // 0x240
	UPlatoonTypeListItem_V2_C* Recon; // 0x248
	URetainerBox* RetainerBox_1; // 0x250
	UCreatePlatoon_V2_C* Widget_Parent; // 0x258
	UPlatoonTypeListItem_V2_C* Current; // 0x260
	FMulticastInlineDelegate Create; // 0x268
	FMulticastInlineDelegate OnHovered; // 0x278
	FMulticastInlineDelegate OnUnhovered; // 0x288
};

struct UHLLGunnerUI_AntiTank : UHLLSeatWidgetBase {
	UHLLArmourWeaponUI* ArtilleryWeaponInfo; // 0x270
	UTextBlock* TraverseValue; // 0x278
	UTextBlock* ElevationValue; // 0x280
	URichTextBlock* ZoomKeyText; // 0x288
	URichTextBlock* PrecisionKeyText; // 0x290
	UBorder* MuzzleOcclusion; // 0x298
};

struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x1f0
	float OrthoWidth; // 0x1f4
	float OrthoNearClipPlane; // 0x1f8
	float OrthoFarClipPlane; // 0x1fc
	float AspectRatio; // 0x200
	char bConstrainAspectRatio : 1; // 0x204
	char bUseFieldOfViewForLOD : 1; // 0x204
	char bLockToHmd : 1; // 0x204
	char bUsePawnControlRotation : 1; // 0x204
	ECameraProjectionMode ProjectionMode; // 0x205
	float PostProcessBlendWeight; // 0x240
	FPostProcessSettings PostProcessSettings; // 0x270
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
};

struct UHLLGlobalVibrationConfig : UDataAsset {
	float LowVibrationIntensity; // 0x30
	float MediumVibrationIntensity; // 0x34
	float HighVibrationIntensity; // 0x38
};

struct UHTP_Widget_Role_Loadout_TankCommander_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_6; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_8; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_13; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_15; // 0x268
	UImage* icn_faction; // 0x270
	UImage* Image_10; // 0x278
	UImage* Image_17; // 0x280
};

struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UWGT_MarkerMenuItem_C : UHLLMarkers_MapMenuItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* RootButton; // 0x268
	bool GamepadHovered; // 0x270
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct AMapStartCameraManager : APlayerCameraManager {
	ACameraActor* MapStartCamera; // 0x2738
};

struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UOffensiveWarfareGameStateComponent : UActorComponent {
	ETeam AttackingTeam; // 0xb0
	char bInOffensiveOvertime : 1; // 0xb1
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

struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UHLLVehicleDamageFX : UDataAsset {
	TMap<FName, FHLLArmourDamageFX> DamageEffects; // 0x30
	FArmourDepletedSound DepletedSounds[0x4]; // 0x80
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UDecalComponent : USceneComponent {
	UMaterialInterface* DecalMaterial; // 0x1f0
	int32_t SortOrder; // 0x1f8
	float FadeScreenSize; // 0x1fc
	float FadeStartDelay; // 0x200
	float FadeDuration; // 0x204
	float FadeInDuration; // 0x208
	float FadeInStartDelay; // 0x20c
	char bDestroyOwnerAfterFade : 1; // 0x210
	FVector DecalSize; // 0x214
};

struct AEF_BrickBuilding_01_D_C : AActor {
	UStaticMeshComponent* SM_MERGED_FBLD_EF_BrickBuilding_01_D18_3; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xb8
	int32_t FirstResourceMemMip; // 0xbc
	char bTemporarilyDisableStreaming : 1; // 0xc0
	TextureAddress AddressX; // 0xc1
	TextureAddress AddressY; // 0xc2
	FIntPoint ImportedSize; // 0xc4
};

struct AHLLWorldSettings : AWorldSettings {
	UHLLMapMetaTemplate* MapMetaData; // 0x3a0
	AHLLBarbedWireVolume* DefaultBarbedWireVolume; // 0x3a8
	TArray<AShooterWeapon*> LoadedAxisWeapons; // 0x3b0
	TArray<AShooterWeapon*> LoadedAlliedWeapons; // 0x3c0
};

struct USpeakingPlayersListItem : UUserWidget {
	UTextBlock* PlayerName; // 0x230
	UTextBlock* PlayerClan; // 0x238
	UTextBlock* PlatoonText; // 0x240
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UHLLParticleModule_KillSphere : UHLLParticleModule_Base {
	FRawDistributionFloat SphereRadius; // 0x30
};

struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4a0
};

struct UHLLParachuteMeshComponent : USkeletalMeshComponent {
	char bParachuteState : 1; // 0xad8
	UAnimMontage* CloseMontage; // 0xae0
	FMulticastInlineDelegate OnParachuteFinishedClosing; // 0xae8
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UIndicator_Marker_C : UHLLMarkerIndicator {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
	UImage* CommanderIcon; // 0x2e0
	UWidgetSwitcher* CommanderSwitch; // 0x2e8
	UBorder* IconBG; // 0x2f0
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct USkyLightComponent : ULightComponentBase {
	ESkyLightSourceType SourceType; // 0x220
	UTextureCube* Cubemap; // 0x228
	float SourceCubemapAngle; // 0x230
	int32_t CubemapResolution; // 0x234
	float SkyDistanceThreshold; // 0x238
	bool bCaptureEmissiveOnly; // 0x23c
	bool bLowerHemisphereIsBlack; // 0x23d
	FLinearColor LowerHemisphereColor; // 0x240
	float OcclusionMaxDistance; // 0x250
	float Contrast; // 0x254
	float OcclusionExponent; // 0x258
	float MinOcclusion; // 0x25c
	FColor OcclusionTint; // 0x260
	EOcclusionCombineMode OcclusionCombineMode; // 0x264
	UTextureCube* BlendDestinationCubemap; // 0x318
};

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct ABP_GameCharacter_C : AHLLCosmeticCharacterRenderer {
	UStaticMeshComponent* SM_RenderFloor08; // 0x270
	UStaticMeshComponent* SM_RenderFloor06; // 0x278
	USpotLightComponent* SpotLight4; // 0x280
	USpotLightComponent* SpotLight3; // 0x288
	UStaticMeshComponent* SM_RenderFloor04; // 0x290
	USpotLightComponent* SpotLight2; // 0x298
	USpotLightComponent* SpotLight1; // 0x2a0
	UStaticMeshComponent* SM_RenderFloor01; // 0x2a8
	UParticleSystemComponent* PS_LargeEmbers; // 0x2b0
	USpotLightComponent* SpotLight; // 0x2b8
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct UClientBotInputComponent : UInputComponent {
	TArray<UClientBotProcessor*> m_processors; // 0x138
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

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMovieSceneCaptureProtocolBase : UObject {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct UHLLRepairIndicator : UHLLIndicatorBase {
	UBorder* RepairBorder; // 0x2a8
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UWGT_ServerQueueProgress_C : UServerQueueProgressWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UTextBlock* ButtonText; // 0x270
	UImage* Image_2; // 0x278
	UImage* Image_3; // 0x280
	UImage* Image_118; // 0x288
	USizeBox* LeftButtonPanel; // 0x290
	URetainerBox* RetainerBox_1; // 0x298
	UThrobber* Throbber_1; // 0x2a0
};

struct UAvailableRole : UUserWidget {
	USlateWidgetStyleAsset* StyleSet; // 0x248
	FLinearColor NormalTextColor; // 0x250
	FLinearColor HoveredTextColor; // 0x260
	FLinearColor SelectedTextColor; // 0x270
	FLinearColor DisabledTextColor; // 0x280
	FLinearColor NormalBgColor; // 0x290
	FLinearColor HoveredBgColor; // 0x2a0
	FLinearColor SelectedBgColor; // 0x2b0
	FLinearColor DisabledBgColor; // 0x2c0
	UBorder* RootBorder; // 0x2d0
	UImage* IconImage; // 0x2d8
	UWidgetSwitcher* NameSwitcher; // 0x2e0
	UTextBlock* Limits; // 0x2e8
	UTextBlock* Rifleman; // 0x2f0
	UTextBlock* Assault; // 0x2f8
	UTextBlock* AutomaticRifleman; // 0x300
	UTextBlock* Medic; // 0x308
	UTextBlock* Spotter; // 0x310
	UTextBlock* Support; // 0x318
	UTextBlock* HeavyMachineGunner; // 0x320
	UTextBlock* AntiTank; // 0x328
	UTextBlock* Engineer; // 0x330
	UTextBlock* Sniper; // 0x338
	UTextBlock* Officer; // 0x340
	UTextBlock* Crewman; // 0x348
	UTextBlock* TankCommander; // 0x350
	UTextBlock* m_nameWidget; // 0x360
	UImage* m_iconWidget; // 0x368
	EPlayerRole m_playerRole; // 0x370
};

struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f0
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

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40
};

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x58
};

struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UHLLUI_LoadoutEntry : UUserWidget {
	FLoadoutEntry CachedEntry; // 0x230
	UTextBlock* ItemName; // 0x248
	UTextBlock* ItemAmmoCount; // 0x250
	UImage* ItemAmmoIcon; // 0x258
	UImage* ItemIcon; // 0x260
};

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UPlatoonInvitationDialog : UUserWidget {
	UPanelWidget* PlayerList; // 0x230
	UButton* Invite; // 0x238
	UButton* Cancel; // 0x240
	UPlatoonInvitationDialogPlayer* PlayerListItemWidgetClass; // 0x248
};

struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UHLLTeamContainer : UUserWidget {
	UHLLRoundSummaryPlatoon* PlatoonWidgetClass; // 0x238
	UHLLRoundSummaryPlayer* PlayerWidgetClass; // 0x240
	TArray<FScoreboardPlayerWidget> PlayerWidgets; // 0x248
	UHLLRoundSummaryPlayer* FirstPlayer; // 0x2a8
	UHLLRoundSummaryPlayer* CommanderPlayer; // 0x2b0
	UHLLRoundSummaryPlatoon* EmptyPlatoon; // 0x2b8
	ETeam AssignedTeam; // 0x2c0
	UScrollBox* TeamScroller; // 0x2c8
	UVerticalBox* PlatoonVBox; // 0x2d0
	UHLLResourceStatus* ResourceStatus; // 0x2d8
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UHalftrackDriverSeatUI : UTruckDriverSeatUI {
	UTextBlock* DeploymentAvailability; // 0x310
	UPanelWidget* DeploymentAvailabilityPanel; // 0x318
};

struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xe0
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct UHLLUI_RoleSelection_InGame : UHLLUI_CharacterSelection {
	AHLLCosmeticCharacterRenderer* CharacterRenderer; // 0x358
	FMulticastInlineDelegate OnRoleChangeConfirmed; // 0x360
	UButton* ConfirmButton; // 0x398
	UTextBlock* ConfirmText; // 0x3a0
	UButton* CancelButton; // 0x3a8
	UTextBlock* CancelText; // 0x3b0
	UWidget* WaitDialog; // 0x3b8
	char bIsForcedRoleChange : 1; // 0x3c0
	TWeakObjectPtr<AActor> LastViewTarget; // 0x3c4
	char bCreatedViewTarget : 1; // 0x3cc
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
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

struct UMenuHeader_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UNamedSlot* NavButtonsContainer; // 0x238
	UTextBlock* PageDescription; // 0x240
	UTextBlock* PageTitle; // 0x248
	UTextBlock* SecondaryDescription; // 0x250
	FText TitleText; // 0x258
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0x68
};

struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct UHLLMapTooltip_SeatBase : UHLLTooltipBase {
	UVerticalBox* SeatVBox; // 0x260
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410
	char bIsLayerThumbnail : 1; // 0x420
	char bDisableTessellation : 1; // 0x420
	char bMobile : 1; // 0x420
	char bEditorToolUsage : 1; // 0x420
};

struct UPlatoonPanel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UCommanderMember_C* CommanderMember; // 0x238
	UHorizontalBox* HB_Platoon; // 0x240
	UImage* img_line; // 0x248
	UImage* img_line_vert; // 0x250
	UPlatoonMember_C* PlatoonMember; // 0x258
	UPlatoonMember_C* PlatoonMember_C_1; // 0x260
	UPlatoonMember_C* PlatoonMember_C_2; // 0x268
	UPlatoonMember_C* PlatoonMember_C_3; // 0x270
	UPlatoonMember_C* PlatoonMember_C_4; // 0x278
	UPlatoonMember_C* PlatoonMember_C_5; // 0x280
	UVerticalBox* PlatoonMembers; // 0x288
	UTextBlock* PlatoonName; // 0x290
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
	char Blocked : 1; // 0xba
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

struct UHalftrackWheelsComponent : UActorComponent {
	float DefaultAnimatedWheelRadius; // 0xb0
	TArray<FAnimatedTrackedVehicleWheelSetup> AnimatedWheelSetups; // 0xb8
	char bUpdateWheelLocations : 1; // 0xc8
	UVehicleWheel* LeftReferenceRotationPhysicsWheel; // 0xe0
	UVehicleWheel* RightReferenceRotationPhysicsWheel; // 0xe8
};

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct UKeyBinding_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UTextBlock* DisplayName; // 0x238
	UImage* Image_53; // 0x240
	UKeyBindingButton_V2_C* PrimaryKeyBinding; // 0x248
	UKeyBindingButton_V2_C* SecondaryBindingButton; // 0x250
	FHLLKeyBinding Binding; // 0x258
	FSlateColor NormalTextColor; // 0x310
	FSlateColor HoveredTextColor; // 0x338
	TScriptInterface<IIKeyBindingHost_C> Host; // 0x360
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x410
	int32_t SectionBaseY; // 0x414
	int32_t ComponentSizeQuads; // 0x418
	int32_t SubsectionSizeQuads; // 0x41c
	int32_t NumSubsections; // 0x420
	UMaterialInterface* OverrideMaterial; // 0x428
	UMaterialInterface* OverrideHoleMaterial; // 0x430
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x438
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x448
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x458
	TArray<int8_t> LODIndexToMaterialIndex; // 0x468
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x478
	UTexture2D* XYOffsetmapTexture; // 0x488
	FVector4 WeightmapScaleBias; // 0x490
	float WeightmapSubsectionOffset; // 0x4a0
	FVector4 HeightmapScaleBias; // 0x4b0
	FBox CachedLocalBox; // 0x4c0
	LazyObjectProperty CollisionComponent; // 0x4dc
	UTexture2D* HeightmapTexture; // 0x4f8
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x500
	TArray<UTexture2D*> WeightmapTextures; // 0x510
	FGuid MapBuildDataId; // 0x520
	TArray<FGuid> IrrelevantLights; // 0x530
	int32_t CollisionMipLevel; // 0x540
	int32_t SimpleCollisionMipLevel; // 0x544
	float NegativeZBoundsExtension; // 0x548
	float PositiveZBoundsExtension; // 0x54c
	float StaticLightingResolution; // 0x550
	int32_t ForcedLOD; // 0x554
	int32_t LODBias; // 0x558
	FGuid StateId; // 0x55c
	FGuid BakedTextureMaterialGuid; // 0x56c
	UTexture2D* GIBakedBaseColorTexture; // 0x580
	char MobileBlendableLayerMask; // 0x588
	UMaterialInterface* MobileMaterialInterface; // 0x590
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x598
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x5a8
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

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
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

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x160
	int32_t StreamingPriority; // 0x164
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x168
	ESoundGroup SoundGroup; // 0x16a
	char bLooping : 1; // 0x16b
	char bStreaming : 1; // 0x16b
	char bSeekableStreaming : 1; // 0x16b
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x16c
	char bMature : 1; // 0x16d
	char bManualWordWrap : 1; // 0x16d
	char bSingleLine : 1; // 0x16d
	char bIsAmbisonics : 1; // 0x16e
	TArray<float> FrequenciesToAnalyze; // 0x170
	TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x180
	TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x190
	int32_t InitialChunkSize; // 0x1a0
	FString SpokenText; // 0x1e8
	float SubtitlePriority; // 0x1f8
	float Volume; // 0x1fc
	float Pitch; // 0x200
	int32_t NumChannels; // 0x204
	int32_t SampleRate; // 0x208
	TArray<FSubtitleCue> Subtitles; // 0x218
	UCurveTable* Curves; // 0x228
	UCurveTable* InternalCurves; // 0x230
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
};

struct UReflectionCaptureComponent : USceneComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x1f0
	EReflectionSourceType ReflectionSourceType; // 0x1f8
	UTextureCube* Cubemap; // 0x200
	float SourceCubemapAngle; // 0x208
	float Brightness; // 0x20c
	FVector CaptureOffset; // 0x210
	FGuid MapBuildDataId; // 0x21c
};

struct UPhysicalMaterial : UObject {
	float Friction; // 0x28
	EFrictionCombineMode FrictionCombineMode; // 0x2c
	bool bOverrideFrictionCombineMode; // 0x2d
	float Restitution; // 0x30
	EFrictionCombineMode RestitutionCombineMode; // 0x34
	bool bOverrideRestitutionCombineMode; // 0x35
	float Density; // 0x38
	float RaiseMassToPower; // 0x3c
	float DestructibleDamageThresholdScale; // 0x40
	UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x48
	EPhysicalSurface SurfaceType; // 0x50
	float TireFrictionScale; // 0x54
	TArray<FTireFrictionScalePair> TireFrictionScales; // 0x58
};

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
};

struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UEditableText : UWidget {
	FText Text; // 0x108
	FDelegate TextDelegate; // 0x120
	FText HintText; // 0x130
	FDelegate HintTextDelegate; // 0x148
	FEditableTextStyle WidgetStyle; // 0x158
	USlateWidgetStyleAsset* Style; // 0x370
	USlateBrushAsset* BackgroundImageSelected; // 0x378
	USlateBrushAsset* BackgroundImageComposing; // 0x380
	USlateBrushAsset* CaretImage; // 0x388
	FSlateFontInfo Font; // 0x390
	FSlateColor ColorAndOpacity; // 0x3e0
	bool IsReadOnly; // 0x408
	bool IsPassword; // 0x409
	float MinimumDesiredWidth; // 0x40c
	bool IsCaretMovedWhenGainFocus; // 0x410
	bool SelectAllTextWhenFocused; // 0x411
	bool RevertTextOnEscape; // 0x412
	bool ClearKeyboardFocusOnCommit; // 0x413
	bool SelectAllTextOnCommit; // 0x414
	bool AllowContextMenu; // 0x415
	EVirtualKeyboardType KeyboardType; // 0x416
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x417
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x418
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x419
	ETextJustify Justification; // 0x41a
	FShapedTextOptions ShapedTextOptions; // 0x41b
	FMulticastInlineDelegate OnTextChanged; // 0x420
	FMulticastInlineDelegate OnTextCommitted; // 0x430
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct UHLLDeathScreen : UUserWidget {
	float SpawnTime; // 0x238
	float RespawnDelay; // 0x23c
	FDeathInfo DeathInfo; // 0x240
	UWidgetAnimation* FadeInAnimation; // 0x260
	UHorizontalBox* TeamKillBox; // 0x268
	UTextBlock* TeamKillMessage; // 0x270
	UTextBlock* PunishMessage; // 0x278
	FText RespawnInfo; // 0x280
	UButton* RedeployButton; // 0x298
	FText ButtonText; // 0x2a0
};

struct UWGT_StatsTest_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* AchAdd; // 0x238
	UComboBoxString* AchCombo; // 0x240
	UComboBoxString* AchCombo_Oneshots; // 0x248
	UButton* AchUnlock; // 0x250
	UEditableTextBox* AchValue; // 0x258
	UVerticalBox* InGameContent; // 0x260
	UButton* ResetClientAchs; // 0x268
	UButton* ResetXP; // 0x270
	UButton* WriteNow; // 0x278
	UButton* XPAdd; // 0x280
	UComboBoxString* XPCombo; // 0x288
	UEditableTextBox* XPValue; // 0x290
	TArray<EHLLAchievement> AchievementLUT; // 0x298
};

struct UReconCommanderSeatUI : UTankCommanderSeatUI {
	UHLLArmourWeaponUI* ReconWeaponInfo; // 0x290
	URichTextBlock* FireKeyText; // 0x298
	URichTextBlock* AimKeyText; // 0x2a0
};

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
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

struct AHLLArmourDebugger : AActor {
	UBillboardComponent* RootBillboard; // 0x220
	UArrowComponent* ArrowComponent; // 0x228
	AActor* DebugTarget; // 0x230
	float Expansion; // 0x238
	char NumX; // 0x23c
	char NumY; // 0x23d
	char NumZ; // 0x23e
	float WallSizeY; // 0x240
	float WallSizeZ; // 0x244
	float WallTraceLength; // 0x248
	float WallRandomiseRot; // 0x24c
	FCollisionProfileName TestProfile; // 0x250
	char bVisualizeTraceVectors : 1; // 0x258
	char bVisualizeHits : 1; // 0x258
	char bHitsByArmourBox : 1; // 0x258
	char bHitsAngleRejection : 1; // 0x258
	char bTraceComplex : 1; // 0x258
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x360
};

struct UHLLVehicleVibrationData : UHLLVibrationData {
	float EngineHapticMinScale; // 0x30
	float EngineHapticMaxScale; // 0x34
};

struct UInputKeySelector : UWidget {
	FButtonStyle WidgetStyle; // 0x108
	FTextBlockStyle TextStyle; // 0x380
	FInputChord SelectedKey; // 0x5e8
	FSlateFontInfo Font; // 0x608
	FMargin Margin; // 0x658
	FLinearColor ColorAndOpacity; // 0x668
	FText KeySelectionText; // 0x678
	FText NoKeySpecifiedText; // 0x690
	bool bAllowModifierKeys; // 0x6a8
	bool bAllowGamepadKeys; // 0x6a9
	TArray<FKey> EscapeKeys; // 0x6b0
	FMulticastInlineDelegate OnKeySelected; // 0x6c0
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6d0
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct USectorCompassIndicator : UBaseCompassIndicator {
	int32_t SectorIndex; // 0x250
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

struct UTankAudioComponent : UActorComponent {
	UCurveFloat* EngineDuckingCurve; // 0xb0
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct USpawnPointListItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* SelectButton; // 0x238
	UImage* SpawnIcon; // 0x240
	UTextBlock* SpawnText; // 0x248
	UBorder* TextBorder; // 0x250
	FMulticastInlineDelegate OnClick; // 0x258
	bool bFocus; // 0x268
	FSlateBrush HQ_SpawnIcon; // 0x270
	FSlateBrush Garrison_SpawnIcon; // 0x2f8
	FSlateBrush Outpost_SpawnIcon; // 0x380
	bool bSelected; // 0x408
	FMulticastInlineDelegate OnUnhovered; // 0x410
	bool bAvailable; // 0x420
	FMulticastInlineDelegate OnNavigateLeft; // 0x428
};

struct UHLLUseContext_Bandage : UHLLUseContextBase {
	FSlateBrush CanBandageIcon; // 0x238
	FSlateBrush CantBandageIcon; // 0x2c0
	UImage* RadialProg; // 0x348
	UImage* IconImage; // 0x350
	URichTextBlock* DisplayText; // 0x358
};

struct UHLLDamageIndicator : UUserWidget {
	FSlateBrush DirectionalDamageBrush; // 0x230
	FSlateBrush FlashDamageBrush; // 0x2b8
	float OffsetFromCenter; // 0x340
	char bStickyIndicators : 1; // 0x344
	UCurveFloat* DirectionalIndicatorFadeCurve; // 0x348
	UCurveFloat* FlashIndicatorFadeCurve; // 0x350
	UCanvasPanel* RootPanel; // 0x358
};

struct UHLLRconCommandWindow : UUserWidget {
	UButton* CloseButton; // 0x230
};

struct AAnimationTests : AActor {
	AShooterCharacterT1* CharacterBP; // 0x220
	bool ADS; // 0x228
	bool Crouch; // 0x229
	bool GoProne; // 0x22a
	ATargetPoint* ForwardPauseBackwardSpawn; // 0x230
	ATargetPoint* ForwardBackwardSpawn; // 0x238
	ATargetPoint* SprintForwardBackwardPauseSpawn; // 0x240
	ATargetPoint* SprintForwardBackwardNoPauseSpawn; // 0x248
	ATargetPoint* WalkingLeftRightNoPauseSpawn; // 0x250
	ATargetPoint* WalkingLeftRightPauseSpawn; // 0x258
	ATargetPoint* TurningSpawn; // 0x260
	ATargetPoint* StandCrouchSpawn; // 0x268
	ATargetPoint* CrouchProneSpawn; // 0x270
	ATargetPoint* StandProneSpawn; // 0x278
	ATargetPoint* StandADSSpawn; // 0x280
	ATargetPoint* CrouchADSSpawn; // 0x288
	ATargetPoint* ProneADSSpawn; // 0x290
	ATargetPoint* BoltCycleStandSpawn; // 0x298
	ATargetPoint* BoltCycleCrouchSpawn; // 0x2a0
	ATargetPoint* BoltCycleProneSpawn; // 0x2a8
	AShooterCharacterT1* ForwardPauseBackwardChar; // 0x2b0
	AShooterCharacterT1* ForwardBackwardChar; // 0x2b8
	AShooterCharacterT1* SprintForwardBackwardPauseChar; // 0x2c0
	AShooterCharacterT1* SprintForwardBackwardNoPauseChar; // 0x2c8
	AShooterCharacterT1* WalkingLeftRightNoPauseChar; // 0x2d0
	AShooterCharacterT1* WalkingLeftRightPauseChar; // 0x2d8
	AShooterCharacterT1* TurningChar; // 0x2e0
	AShooterCharacterT1* StandCrouchChar; // 0x2e8
	AShooterCharacterT1* CrouchProneChar; // 0x2f0
	AShooterCharacterT1* StandProneChar; // 0x2f8
	AShooterCharacterT1* StandADSChar; // 0x300
	AShooterCharacterT1* CrouchADSChar; // 0x308
	AShooterCharacterT1* ProneADSChar; // 0x310
	AShooterCharacterT1* BoltCycleStandChar; // 0x318
	AShooterCharacterT1* BoltCycleCrouchChar; // 0x320
	AShooterCharacterT1* BoltCycleProneChar; // 0x328
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UMapLoadingScreenData : UDataAsset {
	FText MapName; // 0x30
	FText Date; // 0x48
	FText Location; // 0x60
	EGameModeType GameMode; // 0x78
	UTexture2D* BackgroundImage; // 0x80
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

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x410
	float ArrowSize; // 0x414
	float ScreenSize; // 0x418
	char bIsScreenSizeScaled : 1; // 0x41c
	char bTreatAsASprite : 1; // 0x41c
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct UEditableTextBox : UWidget {
	FText Text; // 0x108
	FDelegate TextDelegate; // 0x120
	FEditableTextBoxStyle WidgetStyle; // 0x130
	USlateWidgetStyleAsset* Style; // 0x920
	FText HintText; // 0x928
	FDelegate HintTextDelegate; // 0x940
	FSlateFontInfo Font; // 0x950
	FLinearColor ForegroundColor; // 0x9a0
	FLinearColor BackgroundColor; // 0x9b0
	FLinearColor ReadOnlyForegroundColor; // 0x9c0
	bool IsReadOnly; // 0x9d0
	bool IsPassword; // 0x9d1
	float MinimumDesiredWidth; // 0x9d4
	FMargin Padding; // 0x9d8
	bool IsCaretMovedWhenGainFocus; // 0x9e8
	bool SelectAllTextWhenFocused; // 0x9e9
	bool RevertTextOnEscape; // 0x9ea
	bool ClearKeyboardFocusOnCommit; // 0x9eb
	bool SelectAllTextOnCommit; // 0x9ec
	bool AllowContextMenu; // 0x9ed
	EVirtualKeyboardType KeyboardType; // 0x9ee
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ef
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9f0
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9f1
	ETextJustify Justification; // 0x9f2
	FShapedTextOptions ShapedTextOptions; // 0x9f3
	FMulticastInlineDelegate OnTextChanged; // 0x9f8
	FMulticastInlineDelegate OnTextCommitted; // 0xa08
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x740
	float BlendRadius; // 0x744
	float BlendWeight; // 0x748
	char bEnabled : 1; // 0x74c
	char bUnbound : 1; // 0x74c
};

struct ASectorCaptureBooster : AActor {
	float AdditionalManpower; // 0x220
	UHLLMapComponent* MapComponent; // 0x228
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UHLLServerConfig : UEngineSubsystem {
	bool bTeamAutoBalanceEnabled; // 0x48
	char TeamAutoBalanceThreshold; // 0x49
	char TeamSwitchingCooldownMinutes; // 0x4a
	int32_t IdleKickTimeoutMinutes; // 0x4c
	int32_t HighPlayerPingThresholdMs; // 0x50
	bool bVoteKickEnabled; // 0x54
	TArray<FVoteThreshold> CustomVoteKickThresholds; // 0x58
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

struct UHLLUseContext_EnterSeat : UHLLUseContextBase {
	UImage* IconImage; // 0x238
	UImage* RadialProg; // 0x240
	URichTextBlock* DisplayText; // 0x248
};

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UHLLRadialMenu_MarkersSegment : UHLLRadialMenu_Segment {
	EHLLMarker MarkerType; // 0x278
	UImage* MarkerIcon; // 0x280
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

struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput Mask; // 0xb8
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
	ENavDataGatheringModeConfig DataGatheringMode; // 0x6c
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x70
	float ActiveTilesUpdateInterval; // 0x74
	TArray<FNavDataConfig> SupportedAgents; // 0x78
	FNavAgentSelector SupportedAgentsMask; // 0x88
	TArray<ANavigationData*> NavDataSet; // 0x90
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa0
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0
	FNavigationSystemRunMode OperationMode; // 0x1bc
	float DirtyAreasUpdateFreq; // 0x514
};

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4a0
	int32_t NumCustomDataFloats; // 0x4b0
	TArray<float> PerInstanceSMCustomData; // 0x4b8
	int32_t InstancingRandomSeed; // 0x4c8
	int32_t InstanceStartCullDistance; // 0x4cc
	int32_t InstanceEndCullDistance; // 0x4d0
	TArray<int32_t> InstanceReorderTable; // 0x4d8
	int32_t NumPendingLightmaps; // 0x530
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x538
};

struct AShooterWeapon : AActor {
	FWeaponFPPAnimationParams FPPAnimationParams; // 0x238
	FDataTableRowHandle WeaponMetaData; // 0x2d8
	EWeaponType Type; // 0x2e8
	FName AttachSocketFPP; // 0x2ec
	FName AttachSocketTPP; // 0x2f4
	FCameraLagSettings AdsCameraLagSettings; // 0x2fc
	FCameraLagSettings HipCameraLagSettings; // 0x318
	FRecoilAndSpread RecoilAndSpread; // 0x338
	FRecoilAndSpread RecoilAndSpread_ADS; // 0x368
	FRecoilAndSpreadState RecoilAndSpreadState; // 0x398
	AShooterCharacter* MyPawn; // 0x3a0
	FWeaponData WeaponConfig; // 0x3a8
	USkeletalMeshComponent* Mesh1P; // 0x3c8
	USkeletalMeshComponent* Mesh3P; // 0x3d0
	TArray<UAudioComponent*> MuzzleAudio; // 0x3d8
	TArray<UAudioComponent*> MuzzleAudioTails; // 0x3e8
	FName MuzzleAttachPoint; // 0x3fc
	FName CasingEjectPoint; // 0x404
	UParticleSystem* MuzzleFX; // 0x410
	UParticleSystem* MuzzleFX_3P; // 0x418
	char bLoopedMuzzleFX : 1; // 0x420
	UParticleSystem* CasingFX; // 0x428
	float CasingScale1P; // 0x430
	UParticleSystemComponent* MuzzlePSC; // 0x438
	UCameraShake* FireCameraShake; // 0x440
	UForceFeedbackEffect* FireForceFeedback; // 0x448
	EWeaponSoundMode FireSoundMode; // 0x450
	char MaxTPPTails; // 0x451
	char MaxFPPTails; // 0x452
	char MaxSingleFireSounds; // 0x453
	char bForceStopFireSound : 1; // 0x454
	USoundCue* FireSound; // 0x458
	USoundCue* LastLoadedBulletFireSound; // 0x460
	USoundCue* FireTailSound; // 0x468
	USoundCue* LastLoadedBulletFireTailSound; // 0x470
	USoundCue* StopFireSound; // 0x478
	USoundCue* OutOfAmmoSound; // 0x480
	USoundCue* JammedSound; // 0x488
	USoundCue* EquipSound; // 0x490
	TWeakObjectPtr<UAudioComponent> EquipAC; // 0x498
	UWeaponTPPAnimationSet* TPPAnimationSetClass; // 0x4a0
	UWeaponFPPAnimationSet* FPPAnimationSetClass; // 0x4a8
	float ArtificialEquipDelay; // 0x4b0
	char bLoopedFireAnim : 1; // 0x4b4
	AShooterWeaponEject* EjectedClipActorClass; // 0x4b8
	FName ClipEjectionSocket; // 0x4c0
	float ClipEjectionSpeed1P; // 0x4c8
	float ClipEjectionSpeed3P; // 0x4cc
	char bEjectEmptyClip : 1; // 0x4d0
	char bPendingReload : 1; // 0x4ec
	EWeaponState CurrentState; // 0x4fc
	char MaxClips; // 0x50c
	uint16_t CurrentAmmo; // 0x50e
	FWeaponClipInfo CurrentClipInfo; // 0x510
	FHLLWeaponBurstInfo BurstCounter; // 0x513
	FWeaponADSInfo ADSInfo; // 0x570
	int32_t CurrentZoomIndex; // 0x608
	char bPendingBoltCycle : 1; // 0x60c
	FHLLWeaponDOFSettings HipSettings; // 0x628
	FHLLWeaponDOFSettings ADSSettings; // 0x648
	float OverheatRatio; // 0x668
	char bOverheatLocked : 1; // 0x66c
	FWeaponOverheatData OverheatConfig; // 0x678
	FRepOverheatData PackedOverheatData; // 0x6a0
	UParticleSystemComponent* OverheatPSC; // 0x6a8
	FRepMountableData DeployData; // 0x6b0
	char RemoteBipodYaw; // 0x700
	FMountableWeaponConfig MountableConfig; // 0x708
	char bForceNotifyClientOnShotFailure : 1; // 0x7f0
	EWeaponCasingMode WeaponCasingMode; // 0x800
	UHLLWeaponCasingSettings* BulletCasingSettings; // 0x808
	char bAnimationReloadLock : 1; // 0x814
	char bAnimationBoltLock : 1; // 0x814
	char bSupportBloodMaterial : 1; // 0x814
	float BloodAmount; // 0x818
	TArray<UMaterialInstanceDynamic*> DynamicMats_1P; // 0x820
	TArray<UMaterialInstanceDynamic*> DynamicMats_3P; // 0x830
	TSet<EHint> HintsToDisplay; // 0x840
	char bHideHintsOnUnequip : 1; // 0x890
	UHLLWeaponVibrationData* WeaponVibrationData; // 0x898
	UHLLWeaponVibrationData* SpecialVibrationData; // 0x8a0
	UVibrationEventController* FireVibrationEventController; // 0x8a8
	EHLLPlayerStat FireIncrementStat; // 0x8b0
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
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

struct AGrenadeProjectile : AActor {
	UStaticMeshComponent* Mesh; // 0x230
	UAudioComponent* Audio; // 0x238
	AShooterImpactEffect* ExplosionEffectClass; // 0x240
	AShooterImpactEffect* BounceEffectClass; // 0x248
	float ImpactMinVeloc; // 0x250
	float MinTimeBetweenImpactFX; // 0x254
	float ExplosionDelay; // 0x258
	int32_t ExplosionDamage; // 0x25c
	float ExplosionFalloff; // 0x260
	float ExplosionRadius; // 0x264
	float ExplosionSuppression; // 0x268
	float ExplosionSuppressionRadius; // 0x26c
	float ExplosionSuppressionFalloff; // 0x270
	UDamageType* DamageType; // 0x278
	char bExploded : 1; // 0x28c
	FVector ReleaseLocation; // 0x290
	EWeaponType m_type; // 0x29c
	ETeam OwningTeam; // 0x29e
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98
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

struct UPaperFlipbookComponent : UMeshComponent {
	UPaperFlipbook* SourceFlipbook; // 0x438
	UMaterialInterface* Material; // 0x440
	float PlayRate; // 0x448
	char bLooping : 1; // 0x44c
	char bReversePlayback : 1; // 0x44c
	char bPlaying : 1; // 0x44c
	float AccumulatedTime; // 0x450
	int32_t CachedFrameIndex; // 0x454
	FLinearColor SpriteColor; // 0x458
	UBodySetup* CachedBodySetup; // 0x468
	FMulticastInlineDelegate OnFinishedPlaying; // 0x470
};

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x58
};

struct AHLLRepairStation : AHLLDispenseStructure {
	int32_t RepairPerSecond; // 0x370
	float RepairRadius; // 0x374
	USoundBase* RepairSound; // 0x378
	FName RepairActionScore; // 0x380
	char bIsRepairing : 1; // 0x390
	UParticleSystemComponent* RepairParticle; // 0x398
	TWeakObjectPtr<UAudioComponent> RepairAC; // 0x3a0
	UHLLMapComponent* MapComponent; // 0x3a8
	UHLLIndicatorComponent* IndicatorComponent; // 0x3b0
};

struct ABP_Powerline_Child2_EF_C : ABP_Powerline_Master_C {
	UBoxComponent* Box; // 0x310
	UStaticMeshComponent* SM_PowerPole1; // 0x318
};

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8
};

struct USoundfieldEffectBase : UObject {
	USoundfieldEffectSettingsBase* Settings; // 0x28
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

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct UMouseCursor_C : UHLLMouseCursor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UImage* Image_1; // 0x240
};

struct UButtonPromptsInfo_V2_C : UButtonPromptInfo {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Advanced_DescriptionText; // 0x268
	USizeBox* AdvancePrompt; // 0x270
	UBorder* Alert; // 0x278
	UBackgroundBlur* BackgroundBlur_1; // 0x280
	UBorder* Cooldown; // 0x288
	UWidgetSwitcher* DescriptionSwitcher; // 0x290
	UTextBlock* DescriptionText; // 0x298
	UVerticalBox* DividerLine; // 0x2a0
	UImage* Image; // 0x2a8
	UImage* Image_4; // 0x2b0
	UImage* img_icon; // 0x2b8
	UVerticalBox* InfoBox; // 0x2c0
	URichTextBlock* Rtxt_Title; // 0x2c8
	USizeBox* SB_Icon; // 0x2d0
	USizeBox* SizeBox_3; // 0x2d8
	UTextBlock* txt_alert; // 0x2e0
	UTextBlock* txt_cooldown; // 0x2e8
	int32_t TextSize; // 0x2f0
	FMulticastInlineDelegate OnInputChanged; // 0x2f8
	float LeftPadding; // 0x308
	float RightPadding; // 0x30c
	float BottomPadding; // 0x310
	bool bShowDivider; // 0x314
	bool bShowDescriptionText; // 0x315
	bool bAlignRight; // 0x316
	bool isAlert; // 0x317
	FText Text_Tooltip_Alert; // 0x318
	bool Tooltip_Title; // 0x330
	FSlateBrush IconBrush; // 0x338
	FText Text_Tooltip_Cooldown; // 0x3c0
	FText Text_Tooltip_Body; // 0x3d8
	FText Text_Tooltip_Title; // 0x3f0
	TArray<TSoftObjectPtr<UTexture2D>> SelectedButtonPromptImages; // 0x408
	TArray<TSoftObjectPtr<UTexture2D>> XboxGamepadIcons; // 0x418
	TArray<TSoftObjectPtr<UTexture2D>> PlaystationGamepadIcons; // 0x428
	TArray<EHLLGamepadButtons> GamepadButtons_New; // 0x438
	bool bHidesBottomForKBM; // 0x448
	int32_t DefaultSwitcherIndex; // 0x44c
};

struct UForceFeedbackEventController : UVibrationEventController {
	UForceFeedbackComponent* feedbackComponent; // 0x28
};

struct UCameraShakeSourceComponent : USceneComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f0
	float InnerAttenuationRadius; // 0x1f4
	float OuterAttenuationRadius; // 0x1f8
	UCameraShake* CameraShake; // 0x200
	bool bAutoPlay; // 0x208
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58
};

struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct UWidgetInteractionComponent : USceneComponent {
	FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1f0
	int32_t VirtualUserIndex; // 0x210
	float PointerIndex; // 0x214
	ECollisionChannel TraceChannel; // 0x218
	float InteractionDistance; // 0x21c
	EWidgetInteractionSource InteractionSource; // 0x220
	bool bEnableHitTesting; // 0x221
	bool bShowDebug; // 0x222
	FLinearColor DebugColor; // 0x224
	FHitResult CustomHitResult; // 0x2b0
	FVector2D LocalHitLocation; // 0x338
	FVector2D LastLocalHitLocation; // 0x340
	UWidgetComponent* HoveredWidgetComponent; // 0x348
	FHitResult LastHitResult; // 0x350
	bool bIsHoveredWidgetInteractable; // 0x3d8
	bool bIsHoveredWidgetFocusable; // 0x3d9
	bool bIsHoveredWidgetHitTestVisible; // 0x3da
};

struct UPlayerManagementActionsBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UPlayerManagementButtonBP_C* AddFriendBtn; // 0x238
	UPlayerManagementButtonBP_C* BlockBtn; // 0x240
	UBorder* BR_FriendManagement; // 0x248
	UVerticalBox* DividerLine; // 0x250
	UImage* Image; // 0x258
	UImage* Image_3; // 0x260
	UImage* Image_4; // 0x268
	UImage* Image_6; // 0x270
	UPlayerManagementButtonBP_C* MuteBtn; // 0x278
	UImage* PlatformIcon_2; // 0x280
	UTextBlock* PlayerClan_2; // 0x288
	UImage* PlayerIcon_2; // 0x290
	UTextBlock* PlayerName_2; // 0x298
	UPlayerManagementButtonBP_C* ReportBtn; // 0x2a0
	UPlayerManagementButtonBP_C* UnMuteBtn; // 0x2a8
	UPlayerManagementButtonBP_C* VoteKickBtn; // 0x2b0
	UObject* FriendItem; // 0x2b8
	FString PlayerName; // 0x2c0
	UObject* FriendMenu; // 0x2d0
	FString UniqueId; // 0x2d8
	FString PlatformPlayerID; // 0x2e8
	bool FriendBlockConfirmation; // 0x2f8
	bool SamePlatform; // 0x2f9
	FMulticastInlineDelegate ButtonPressed; // 0x300
	FMulticastInlineDelegate OnSubMenuClosed; // 0x310
	char Action; // 0x320
	UWGT_RoundSummaryPlayer_C* SelectedPlayer; // 0x328
	bool allButtons; // 0x330
	UMenuAnchor* MenuAnchor; // 0x338
	UWGT_RoundSummaryDetails_V2_C* scoreScreen; // 0x340
};

struct UServerQueue : UObject {
	int32_t MaxPlayersInQueue; // 0xc8
	int32_t NumSlotsReservedForVIPPlayers; // 0xcc
	TArray<FString> VIPPlayerNetworkIDs; // 0xd0
	TArray<FVIPPlayerRecord> VIPPlayerRecords; // 0xe0
};

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28
};

struct AHLLCosmeticCharacter : AActor {
	float YawLimit; // 0x220
	float YawInterpSpeed; // 0x224
	bool bAllowRotation; // 0x228
	USceneComponent* DummyRoot; // 0x238
	USkeletalMeshComponent* UniformMesh; // 0x240
	USkeletalMeshComponent* HeadMesh; // 0x248
	UStaticMeshComponent* HelmetMesh; // 0x250
	USkeletalMeshComponent* WeaponMesh; // 0x258
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0x9c
};

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe0
	UCameraShake* ShakeClass; // 0x100
	float PlayScale; // 0x108
	ECameraAnimPlaySpace PlaySpace; // 0x10c
	FRotator UserDefinedPlaySpace; // 0x110
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
	TArray<FString> AdditionalFontNames; // 0xe8
	UConsole* ConsoleClass; // 0xf8
	FSoftClassPath ConsoleClassName; // 0x100
	UGameViewportClient* GameViewportClientClass; // 0x118
	FSoftClassPath GameViewportClientClassName; // 0x120
	ULocalPlayer* LocalPlayerClass; // 0x138
	FSoftClassPath LocalPlayerClassName; // 0x140
	AWorldSettings* WorldSettingsClass; // 0x158
	FSoftClassPath WorldSettingsClassName; // 0x160
	FSoftClassPath NavigationSystemClassName; // 0x178
	UNavigationSystemBase* NavigationSystemClass; // 0x190
	FSoftClassPath NavigationSystemConfigClassName; // 0x198
	UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1b0
	FSoftClassPath AvoidanceManagerClassName; // 0x1b8
	UAvoidanceManager* AvoidanceManagerClass; // 0x1d0
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1d8
	FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1e0
	FSoftClassPath GameUserSettingsClassName; // 0x1f8
	UGameUserSettings* GameUserSettingsClass; // 0x210
	FSoftClassPath AIControllerClassName; // 0x218
	UGameUserSettings* GameUserSettings; // 0x230
	ALevelScriptActor* LevelScriptActorClass; // 0x238
	FSoftClassPath LevelScriptActorClassName; // 0x240
	FSoftClassPath DefaultBlueprintBaseClassName; // 0x258
	FSoftClassPath GameSingletonClassName; // 0x270
	UObject* GameSingleton; // 0x288
	FSoftClassPath AssetManagerClassName; // 0x290
	UAssetManager* AssetManager; // 0x2a8
	UTexture2D* DefaultTexture; // 0x2b0
	FSoftObjectPath DefaultTextureName; // 0x2b8
	UTexture* DefaultDiffuseTexture; // 0x2d0
	FSoftObjectPath DefaultDiffuseTextureName; // 0x2d8
	UTexture2D* DefaultBSPVertexTexture; // 0x2f0
	FSoftObjectPath DefaultBSPVertexTextureName; // 0x2f8
	UTexture2D* HighFrequencyNoiseTexture; // 0x310
	FSoftObjectPath HighFrequencyNoiseTextureName; // 0x318
	UTexture2D* DefaultBokehTexture; // 0x330
	FSoftObjectPath DefaultBokehTextureName; // 0x338
	UTexture2D* DefaultBloomKernelTexture; // 0x350
	FSoftObjectPath DefaultBloomKernelTextureName; // 0x358
	UMaterial* WireframeMaterial; // 0x370
	FString WireframeMaterialName; // 0x378
	UMaterial* DebugMeshMaterial; // 0x388
	FSoftObjectPath DebugMeshMaterialName; // 0x390
	UMaterial* EmissiveMeshMaterial; // 0x3a8
	FSoftObjectPath EmissiveMeshMaterialName; // 0x3b0
	UMaterial* LevelColorationLitMaterial; // 0x3c8
	FString LevelColorationLitMaterialName; // 0x3d0
	UMaterial* LevelColorationUnlitMaterial; // 0x3e0
	FString LevelColorationUnlitMaterialName; // 0x3e8
	UMaterial* LightingTexelDensityMaterial; // 0x3f8
	FString LightingTexelDensityName; // 0x400
	UMaterial* ShadedLevelColorationLitMaterial; // 0x410
	FString ShadedLevelColorationLitMaterialName; // 0x418
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x428
	FString ShadedLevelColorationUnlitMaterialName; // 0x430
	UMaterial* RemoveSurfaceMaterial; // 0x440
	FSoftObjectPath RemoveSurfaceMaterialName; // 0x448
	UMaterial* VertexColorMaterial; // 0x460
	FString VertexColorMaterialName; // 0x468
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x478
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x480
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x490
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x498
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4a8
	FString VertexColorViewModeMaterialName_RedOnly; // 0x4b0
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4c0
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x4c8
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4d8
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x4e0
	FSoftObjectPath DebugEditorMaterialName; // 0x4f0
	UMaterial* ConstraintLimitMaterial; // 0x508
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x510
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x518
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x520
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x528
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x530
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x538
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x540
	UMaterial* InvalidLightmapSettingsMaterial; // 0x548
	FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x550
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x568
	FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x570
	UMaterial* ArrowMaterial; // 0x588
	UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x590
	FSoftObjectPath ArrowMaterialName; // 0x598
	FLinearColor LightingOnlyBrightness; // 0x5b0
	TArray<FLinearColor> ShaderComplexityColors; // 0x5c0
	TArray<FLinearColor> QuadComplexityColors; // 0x5d0
	TArray<FLinearColor> LightComplexityColors; // 0x5e0
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x5f0
	TArray<FLinearColor> LODColorationColors; // 0x600
	TArray<FLinearColor> HLODColorationColors; // 0x610
	TArray<FLinearColor> StreamingAccuracyColors; // 0x620
	float MaxPixelShaderAdditiveComplexityCount; // 0x630
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x634
	float MinLightMapDensity; // 0x638
	float IdealLightMapDensity; // 0x63c
	float MaxLightMapDensity; // 0x640
	char bRenderLightMapDensityGrayscale : 1; // 0x644
	float RenderLightMapDensityGrayscaleScale; // 0x648
	float RenderLightMapDensityColorScale; // 0x64c
	FLinearColor LightMapDensityVertexMappedColor; // 0x650
	FLinearColor LightMapDensitySelectedColor; // 0x660
	TArray<FStatColorMapping> StatColorMappings; // 0x670
	UPhysicalMaterial* DefaultPhysMaterial; // 0x680
	FSoftObjectPath DefaultPhysMaterialName; // 0x688
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x6a0
	TArray<FClassRedirect> ActiveClassRedirects; // 0x6b0
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x6c0
	TArray<FStructRedirect> ActiveStructRedirects; // 0x6d0
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6e0
	FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x6e8
	UTexture2D* BlueNoiseTexture; // 0x700
	FSoftObjectPath BlueNoiseTextureName; // 0x708
	UTexture2D* MiniFontTexture; // 0x720
	FSoftObjectPath MiniFontTextureName; // 0x728
	UTexture* WeightMapPlaceholderTexture; // 0x740
	FSoftObjectPath WeightMapPlaceholderTextureName; // 0x748
	UTexture2D* LightMapDensityTexture; // 0x760
	FSoftObjectPath LightMapDensityTextureName; // 0x768
	UGameViewportClient* GameViewport; // 0x788
	TArray<FString> DeferredCommands; // 0x790
	int32_t TickCycles; // 0x7a0
	int32_t GameCycles; // 0x7a4
	int32_t ClientCycles; // 0x7a8
	float NearClipPlane; // 0x7ac
	char bHardwareSurveyEnabled : 1; // 0x7b0
	char bSubtitlesEnabled : 1; // 0x7b0
	char bSubtitlesForcedOff : 1; // 0x7b0
	int32_t MaximumLoopIterationCount; // 0x7b4
	char bCanBlueprintsTickByDefault : 1; // 0x7b8
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7b8
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7b8
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7b8
	char bSmoothFrameRate : 1; // 0x7b8
	char bUseFixedFrameRate : 1; // 0x7b8
	float FixedFrameRate; // 0x7bc
	FFloatRange SmoothedFrameRateRange; // 0x7c0
	UEngineCustomTimeStep* CustomTimeStep; // 0x7d0
	FSoftClassPath CustomTimeStepClassName; // 0x7f8
	UTimecodeProvider* TimecodeProvider; // 0x810
	FSoftClassPath TimecodeProviderClassName; // 0x838
	bool bGenerateDefaultTimecode; // 0x850
	FFrameRate GenerateDefaultTimecodeFrameRate; // 0x854
	float GenerateDefaultTimecodeFrameDelay; // 0x85c
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x860
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x864
	char bShouldGenerateLowQualityLightmaps : 1; // 0x868
	FColor C_WorldBox; // 0x86c
	FColor C_BrushWire; // 0x870
	FColor C_AddWire; // 0x874
	FColor C_SubtractWire; // 0x878
	FColor C_SemiSolidWire; // 0x87c
	FColor C_NonSolidWire; // 0x880
	FColor C_WireBackground; // 0x884
	FColor C_ScaleBoxHi; // 0x888
	FColor C_VolumeCollision; // 0x88c
	FColor C_BSPCollision; // 0x890
	FColor C_OrthoBackground; // 0x894
	FColor C_Volume; // 0x898
	FColor C_BrushShape; // 0x89c
	float StreamingDistanceFactor; // 0x8a0
	FDirectoryPath GameScreenshotSaveDirectory; // 0x8a8
	ETransitionType TransitionType; // 0x8b8
	FString TransitionDescription; // 0x8c0
	FString TransitionGameMode; // 0x8d0
	float MeshLODRange; // 0x8e0
	char bAllowMatureLanguage : 1; // 0x8e4
	float CameraRotationThreshold; // 0x8e8
	float CameraTranslationThreshold; // 0x8ec
	float PrimitiveProbablyVisibleTime; // 0x8f0
	float MaxOcclusionPixelsFraction; // 0x8f4
	char bPauseOnLossOfFocus : 1; // 0x8f8
	int32_t MaxParticleResize; // 0x8fc
	int32_t MaxParticleResizeWarn; // 0x900
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x908
	float NetClientTicksPerSecond; // 0x918
	float DisplayGamma; // 0x91c
	float MinDesiredFrameRate; // 0x920
	FLinearColor DefaultSelectedMaterialColor; // 0x924
	FLinearColor SelectedMaterialColor; // 0x934
	FLinearColor SelectionOutlineColor; // 0x944
	FLinearColor SubduedSelectionOutlineColor; // 0x954
	FLinearColor SelectedMaterialColorOverride; // 0x964
	bool bIsOverridingSelectedColor; // 0x974
	char bEnableOnScreenDebugMessages : 1; // 0x978
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x978
	char bSuppressMapWarnings : 1; // 0x978
	char bDisableAILogging : 1; // 0x978
	uint32_t bEnableVisualLogRecordingOnStart; // 0x97c
	int32_t ScreenSaverInhibitorSemaphore; // 0x984
	char bLockReadOnlyLevels : 1; // 0x988
	FString ParticleEventManagerClassPath; // 0x990
	float SelectionHighlightIntensity; // 0x9a0
	float BSPSelectionHighlightIntensity; // 0x9a4
	float SelectionHighlightIntensityBillboards; // 0x9a8
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xbf8
	TArray<FString> ServerActors; // 0xc08
	TArray<FString> RuntimeServerActors; // 0xc18
	float NetErrorLogInterval; // 0xc28
	char bStartedLoadMapMovie : 1; // 0xc2c
	int32_t NextWorldContextHandle; // 0xc48
};

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UWGT_SocialLink_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* Button; // 0x238
	ESocialMedia Type; // 0x240
};

struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UHLLReplicationGraph : UReplicationGraph {
	TArray<UObject*> SpatializedClasses; // 0x498
	TArray<UObject*> NonSpatializedChildClasses; // 0x4a8
	TArray<UObject*> AlwaysRelevantClasses; // 0x4b8
	UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x4c8
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4d0
	UHLLReplicationGraphNode_Team* TeamNode; // 0x4d8
	UHLLReplicationGraphNode_CommanderAbilities* CommanderAbilitiesNode; // 0x4e0
	APawn* PlayerPawnClass; // 0x5d0
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

struct UWGT_DialogBox_V2_C : UHLLDialogBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
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

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct USearchButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* btn; // 0x238
	USizeBox* SB_ROOT; // 0x240
	UTextBlock* txt_btn_Label; // 0x248
	FText ButtonLabel; // 0x250
	FMulticastInlineDelegate Clicked; // 0x268
	bool CustomSize; // 0x278
	float Height; // 0x27c
	float Width; // 0x280
	bool Uppercase; // 0x284
	FSlateFontInfo Font; // 0x288
	FSlateColor FontColor; // 0x2d8
	FButtonStyle ButtonStyle; // 0x300
	FSlateColor FontColorHover; // 0x578
	FMulticastInlineDelegate Hovered; // 0x5a0
	FMulticastInlineDelegate Unhovered; // 0x5b0
	FButtonStyle FocusedButtonStyle; // 0x5c0
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct ABaseVehicle : AWheeledVehicle {
	ETeam Team; // 0x2d8
	AVehicleDriverSeat* DriverSeat; // 0x2e0
	float EngineWarmupDuration; // 0x2e8
	float EngineShutdownDuration; // 0x2ec
	char bCrippleMovementWhenDepleted : 1; // 0x2f0
	char bEngineStarted : 1; // 0x2f4
	UPhysicalMaterial* LowSpeedPhysMatOverride; // 0x308
	float LowSpeedThresholdKph; // 0x310
	AVehicleDriverSeat* DriverSeatClass; // 0x318
	float EngineSoundFadeInTime; // 0x320
	FVehicleSoundSetup EngineSound; // 0x328
	FVehicleSoundSetup EngineStartSound; // 0x348
	FVehicleSoundSetup EngineStartAbortedSound; // 0x368
	FVehicleSoundSetup EngineStopSound; // 0x388
	FVehicleSoundSetup EngineStartFailedSound; // 0x3a8
	UAudioComponent* EngineAudio; // 0x3c8
	UAudioComponent* InteriorAudio; // 0x3d0
	UAudioComponent* ExhaustAudio; // 0x3d8
	UAudioComponent* EngineStartAudio; // 0x3e0
	UAudioComponent* InteriorStartAudio; // 0x3e8
	UAudioComponent* ExhaustStartAudio; // 0x3f0
	UAudioComponent* ClutchAudio; // 0x3f8
	UAudioComponent* InteriorHitAudio; // 0x400
	UAudioComponent* HornAudio; // 0x408
	char bHornSoundEnabled : 1; // 0x410
	UHLLArmourHealthComponent* ArmourHealth; // 0x420
	UHLLArmourInventory* ArmourInventory; // 0x428
	FHLLArmourMetaData ArmourMetaData; // 0x430
	UHLLVehicleInactivityComponent* VehicleInactivityMonitor; // 0x450
	UHLLMapComponent* MapComponent; // 0x458
	UHLLIndicatorComponent* NameplateIndicatorComponent; // 0x460
	UVehicleWorldShiftingComponent* WorldShifting; // 0x468
	FReconID VehicleReconID; // 0x470
	EReconItemType ReconType; // 0x472
	UVehicleHitComponent* Hitter; // 0x478
	UStaticMeshComponent* CharacterMovementBarrierBody; // 0x480
	FName RootBoneName; // 0x488
	TArray<FName> WheelCollisionBodies; // 0x490
	UDataTable* WaterEffects; // 0x4a0
	UHLLVehicleFXComponent* VehicleEffects; // 0x4a8
	UVehicleAntiFlipComponent* AntiFlipComponent; // 0x4b0
	EHLLDamageFilterType DamageFilterType; // 0x4b8
	UHLLVehicleVibrationData* VehicleVibrationData; // 0x4c0
	UVibrationEventController* EngineVibrationController_Internal; // 0x4c8
	UVibrationEventController* EngineVibrationController_External; // 0x4d0
	UVibrationEventController* InternalHitVibrationController; // 0x4d8
};

struct ASphereSectorCaptureBooster : ASectorCaptureBooster {
	USphereComponent* TriggerShape; // 0x280
};

struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	UCharacterMovementComponent* CharacterMovement; // 0x260
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
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

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
};

struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe0
	UCameraAnim* CameraAnim; // 0x100
	float PlayRate; // 0x108
	float PlayScale; // 0x10c
	float BlendInTime; // 0x110
	float BlendOutTime; // 0x114
	bool bLooping; // 0x118
};

struct AStressTestBotAI_C : AAIController {
	UStressTestPlayerControllerComponent* StressTestPlayerController; // 0x328
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct AMainMenuLogic_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220
	USceneComponent* DefaultSceneRoot; // 0x228
	TArray<TScriptInterface<IKeyBindingInputProviderListener>> InputListeners; // 0x230
};

struct UWGT_UseContext_Repair_C : UHLLUseContext_Repair {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UGameHUD_C : UHLLHUDBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
	UWidgetAnimation* NoFireAnim; // 0x3b8
	UWidgetAnimation* A_NewGameplayMessage; // 0x3c0
	UCompass_C* Compass; // 0x3c8
	UWGT_ReplenishAmmoCooldownNotification_C* CooldownStartedAmmo; // 0x3d0
	UWGT_ReplenishAmmoCooldownNotification_C* CooldownStartedSupplies; // 0x3d8
	UGameplayMessages_C* GameplayMessages; // 0x3e0
	UImage* Image_1; // 0x3e8
	UImage* Image_3; // 0x3f0
	UImage* Image_12; // 0x3f8
	UImage* Image_13; // 0x400
	UMain_C* Main; // 0x408
	UOverlay* MainWrapper; // 0x410
	UImage* NoFireImage; // 0x418
	UPlatoonPanel_C* PlatoonPanel; // 0x420
	UOverlay* RCON_Overlay; // 0x428
	UTextBlock* RCON_Say_Message; // 0x430
	UWGT_ReplenishAmmoNotification_C* ReplenishAmmo; // 0x438
	UWGT_ReplenishAmmoNotification_C* ReplenishSupplies; // 0x440
	UScaleBox* ScaleBox_Compass; // 0x448
	UGameTimer_C* Timer; // 0x450
	UWeapon_C* Weapon; // 0x458
	UVerticalBox* WeaponInfoPrimary; // 0x460
	USizeBox* WeaponSBox; // 0x468
	TArray<FDisplayedSectorState> Sector_TugOfWar; // 0x470
	bool bAdminCamMode; // 0x480
};

struct UHLLRadialMenu_Segment : UHLLRadialMenu_ChildBase {
	FSlateSound HoveredSound; // 0x238
	FSlateSound UnhoveredSound; // 0x250
	char bIsSelected : 1; // 0x268
	UImage* SegmentProgress; // 0x270
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
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

struct UBPW_PlatoonManagementStack_Notification_C : UPlatoonManagementStackNotification {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0x88
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct UBPW_SpeakingPlayersList_C : USpeakingPlayersList {
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem; // 0x240
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_1; // 0x248
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_2; // 0x250
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_3; // 0x258
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_4; // 0x260
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_5; // 0x268
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_6; // 0x270
	UBPW_SpeakingPlayersListItem_C* BPW_SpeakingPlayersListItem_C_7; // 0x278
};

struct UFakeMouseCursor_C : UHLLFakeCursor {
	UImage* Image_1; // 0x230
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UBTDecorator_HasLoSTo : UBTDecorator {
	FBlackboardKeySelector EnemyKey; // 0x68
};

struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct UWeapon_C : UUserWidget {
	UWidgetAnimation* A_NameFlash; // 0x230
	UTextBlock* ammo; // 0x238
	UHorizontalBox* AmmoHBox; // 0x240
	UImage* Image_2; // 0x248
	UTextBlock* WeaponName; // 0x250
};

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct AHLL_PlayerState_C : AShooterPlayerState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7d8
	USceneComponent* DefaultSceneRoot; // 0x7e0
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x350
	float OuterConeAngle; // 0x354
	float LightShaftConeAngle; // 0x358
};

struct UHLLDeployment_TeamSelect : UUserWidget {
	FMulticastInlineDelegate OnTeamSelected; // 0x230
	UHLLDeployment_TeamSelectItem* Team_Allies; // 0x240
	UHLLDeployment_TeamSelectItem* Team_Axis; // 0x248
};

struct ATankSeatBase : AVehicleSeatBase {
	char bOnlyAllowArmourUnitsIn : 1; // 0x978
};

struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40
};

struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
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

struct UHLLWeaponCasingSettings : UDataAsset {
	FSurfaceSounds CasingEjectSounds; // 0x30
	FVector CasingEjectSoundOffset; // 0x188
	float CasingEjectDelay_Prone; // 0x194
	float CasingEjectDelay_Crouched; // 0x198
	float CasingEjectDelay_Standing; // 0x19c
	float MinTimeBetweenCasingEjectSound; // 0x1a0
	float CasingEjectCullDistance; // 0x1a4
	char MaxSimultaneousCasings; // 0x1a8
	float SimultaneousCasingMaxRandomDelay; // 0x1ac
	float SimultaneousCasingMaxRandomOffset; // 0x1b0
};

struct UPlatoonTypeListItem_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* Hover; // 0x238
	UWidgetAnimation* Select; // 0x240
	UButton* BackgroundButton; // 0x248
	UbtnSimple_V2_C* btnCreateClosed; // 0x250
	UbtnSimple_V2_C* btnCreateOpen; // 0x258
	UTextBlock* Counts; // 0x260
	UWidgetSwitcher* CountsSwitcher; // 0x268
	UUniformGridPanel* GP_Roles; // 0x270
	UImage* Image_1; // 0x278
	UImage* Image_2; // 0x280
	UImage* Image_3; // 0x288
	UImage* Image_4; // 0x290
	UImage* img_bg; // 0x298
	UTextBlock* Infinity; // 0x2a0
	UBorder* Leader; // 0x2a8
	UWGT_PlatoonRole_C* RoleLeader; // 0x2b0
	USizeBox* SB_ROOT; // 0x2b8
	Uhll_text_C* txt_info; // 0x2c0
	Uhll_text_C* txt_UnitBrief; // 0x2c8
	Uhll_text_C* txt_UnitType; // 0x2d0
	UImage* TypeIcon; // 0x2d8
	UVerticalBox* VB_InfantryRoleList; // 0x2e0
	UVerticalBox* VB_Roles; // 0x2e8
	UVerticalBox* VB_SelectInfo; // 0x2f0
	UWGT_PlatoonRole_C* WGT_PlatoonRole_1; // 0x2f8
	UWGT_PlatoonRole_C* WGT_PlatoonRole_2; // 0x300
	UWGT_PlatoonRole_C* WGT_PlatoonRole_3; // 0x308
	UWGT_PlatoonRole_C* WGT_PlatoonRole_4; // 0x310
	UWGT_PlatoonRole_C* WGT_PlatoonRole_5; // 0x318
	UWGT_PlatoonRole_C* WGT_PlatoonRole_6; // 0x320
	UWGT_PlatoonRole_C* WGT_PlatoonRole_7; // 0x328
	UWGT_PlatoonRole_C* WGT_PlatoonRole_8; // 0x330
	FSlateColor NormalTextColor; // 0x338
	FSlateColor HoveredTextColor; // 0x360
	FSlateColor DisabledTextColor; // 0x388
	FButtonStyle SelectedButtonStyle; // 0x3b0
	FButtonStyle NormalButtonStyle; // 0x628
	bool Selected; // 0x8a0
	bool Hovered; // 0x8a1
	FSlateColor SelectedTextColor; // 0x8a8
	FMulticastInlineDelegate OnClicked; // 0x8d0
	FText TypeName; // 0x8e0
	int32_t CurrentCount; // 0x8f8
	int32_t MaxCount; // 0x8fc
	bool InfiniteCount; // 0x900
	EPlatoonType Type; // 0x901
	FMulticastInlineDelegate Enabled; // 0x908
	FMulticastInlineDelegate Deselected; // 0x918
	FST_PlatoonRoles InfantryRoles; // 0x928
	FST_PlatoonRoles ArmorRoles; // 0x940
	FST_PlatoonRoles ReconRoles; // 0x958
	int32_t RoleColumn; // 0x970
	int32_t RoleRow; // 0x974
	FSlateColor SelectedIconColor; // 0x978
	int32_t NewVar_1; // 0x9a0
	FMulticastInlineDelegate Create; // 0x9a8
	FMulticastInlineDelegate OnHovered; // 0x9b8
	FMulticastInlineDelegate OnUnhovered; // 0x9c8
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

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct UTexture : UStreamableRenderAsset {
	FGuid LightingGuid; // 0x48
	int32_t LODBias; // 0x58
	TextureCompressionSettings CompressionSettings; // 0x5c
	TextureFilter Filter; // 0x5d
	ETextureMipLoadOptions MipLoadOptions; // 0x5e
	TextureGroup LODGroup; // 0x5f
	char SRGB : 1; // 0x60
	char bNoTiling : 1; // 0x60
	char VirtualTextureStreaming : 1; // 0x60
	char CompressionYCoCg : 1; // 0x60
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x68
};

struct UHLLMapTooltip_Supplies : UHLLTooltipBase {
	UTextBlock* TypeText; // 0x260
	UTextBlock* RemainingText; // 0x268
};

struct UUIClassSelector : UObject {
	FUIClassCollection DefaultClasses; // 0x30
};

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48
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

struct UARPlaneGeometry : UARTrackedGeometry {
	EARPlaneOrientation Orientation; // 0xe8
	FVector Center; // 0xec
	FVector Extent; // 0xf8
	UARPlaneGeometry* SubsumedBy; // 0x118
};

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x220
};

struct AMapData_SectorBooster_C : AHLLMapData_SectorBooster {
	USceneComponent* DefaultSceneRoot; // 0x238
};

struct AShooterWeapon_Dispenser : AShooterWeapon {
	FSlateBrush DefaultIcon; // 0x8c0
	FDispenserData DispenserData; // 0x950
	float RotationRate; // 0xae0
	char bCanDismantleItems : 1; // 0xae4
	char bCanPauseConstruction : 1; // 0xae4
	EDispenserMode DispenserMode; // 0xae5
	char bAllowDispensingWhileOnMovable : 1; // 0xae6
	TArray<AHLLDispenserItem_Base*> GhostInstances; // 0xae8
	int32_t DispenseIndex; // 0xaf8
	EGhostRotateDirection CurrentRotateDirection; // 0xafc
	float AdditionalYaw; // 0xb00
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct ABP_MenuCharacter_C : AHLLCosmeticCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
};

struct UUseableWeaponFPPAnimationSet : UWeaponFPPAnimationSet {
	char bUseLoopSections : 1; // 0x320
	char bDontWaitForLoopedSectionToEnd : 1; // 0x320
	FWeaponAnim Use; // 0x328
	FWeaponAnim UseExit; // 0x350
	FWeaponAnim UseOther; // 0x378
	FWeaponAnim UseOtherExit; // 0x3a0
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UHLLInGameMenu : UUserWidget {
	UWidgetAnimation* OpenAnim; // 0x238
	UWidgetAnimation* CloseAnim; // 0x240
	UWidgetSwitcher* OptionSwitcher; // 0x248
	UHLLOptionScreenBase* OptionsScreen; // 0x250
	UShooterGameViewportClient* ViewportClient; // 0x258
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0x88
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x380
	TArray<UMaterialInterface*> OverrideMaterials; // 0x388
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x398
};

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
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

struct UPlatoonManagementStackInvite : UUserWidget {
	UTextBlock* Title; // 0x230
	UTextBlock* Message; // 0x238
	UShooterGameViewportClient* ViewportClient; // 0x240
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
	bool bStartInAR; // 0x10b
	bool bSupportAR; // 0x10c
	bool bAllowWindowResize; // 0x10d
	bool bAllowClose; // 0x10e
	bool bAllowMaximize; // 0x10f
	bool bAllowMinimize; // 0x110
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

struct USplineComponent : UPrimitiveComponent {
	FSplineCurves SplineCurves; // 0x410
	FInterpCurveVector SplineInfo; // 0x478
	FInterpCurveQuat SplineRotInfo; // 0x490
	FInterpCurveVector SplineScaleInfo; // 0x4a8
	FInterpCurveFloat SplineReparamTable; // 0x4c0
	bool bAllowSplineEditingPerInstance; // 0x4d8
	int32_t ReparamStepsPerSegment; // 0x4dc
	float Duration; // 0x4e0
	bool bStationaryEndpoints; // 0x4e4
	bool bSplineHasBeenEdited; // 0x4e5
	bool bModifiedByConstructionScript; // 0x4e6
	bool bInputSplinePointsToConstructionScript; // 0x4e7
	bool bDrawDebug; // 0x4e8
	bool bClosedLoop; // 0x4e9
	bool bLoopPositionOverride; // 0x4ea
	float LoopPosition; // 0x4ec
	FVector DefaultUpVector; // 0x4f0
};

struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct UChat_C : UChat {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* FadeIn; // 0x238
	UOverlay* Chat_Body; // 0x240
	UScrollBox* ChatLines; // 0x248
	UChatMessage_C* CommandMessage; // 0x250
	UChatLine_C* MessageEntry; // 0x258
	int32_t MaxChatLinesVisible; // 0x260
	int32_t MaxCharactersPerLine; // 0x264
	bool Chat_Hidden; // 0x268
	FTimerHandle CommanderMessageTimer; // 0x270
	float CommanderMessageTime; // 0x278
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

struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1a80
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28
};

struct UWGT_UseContext_LetGo_C : UHLLUseContext_LetGo {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
	UWidgetAnimation* Pulse; // 0x258
	UImage* Image_1; // 0x260
};

struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UGamepadLayoutsScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UOptionsTabButton_V2_C* Artillery; // 0x238
	UOptionsTabButton_V2_C* Common; // 0x240
	UOptionsTabButton_V2_C* Infantry; // 0x248
	UOptionButton_V2_C* LayoutButton; // 0x250
	UImage* LeftTabButton; // 0x258
	UCanvasPanel* PlaystationButtonPanel; // 0x260
	UCanvasPanel* PlaystationButtonPanel_SonyOfficial; // 0x268
	UGamepadLayoutKey_C* PlaystationLeftAnalogYAxis; // 0x270
	UGamepadLayoutKey_C* PlaystationLeftAnalogYAxis_SonyOfficial; // 0x278
	UCanvasPanel* PlaystationLinePanel; // 0x280
	UCanvasPanel* PlaystationLinePanel_SonyOfficial; // 0x288
	UGamepadLayoutKey_C* PlaystationRightAnalogYAxis; // 0x290
	UGamepadLayoutKey_C* PlaystationRightAnalogYAxis_SonyOfficial; // 0x298
	UImage* RightTabButton; // 0x2a0
	UOptionButton_V2_C* SwitchSticksToggle; // 0x2a8
	UHorizontalBox* TabsContainer; // 0x2b0
	UOptionsTabButton_V2_C* Vehicle; // 0x2b8
	UOptionsTabButton_V2_C* VehicleGUNNER; // 0x2c0
	UCanvasPanel* XboxButtonPanel; // 0x2c8
	UGamepadLayoutKey_C* XboxLeftAnalogYAxis; // 0x2d0
	UCanvasPanel* XboxLinePanel; // 0x2d8
	UGamepadLayoutKey_C* XboxRightAnalogYAxis; // 0x2e0
	UOptionsScreen_V2_C* OptionsScreen; // 0x2e8
	TArray<UGamepadLayoutKey_C*> GamepadActions; // 0x2f0
	TArray<UOptionsTabButton_V2_C*> Tabs; // 0x300
	FSlateBrush LeftTriggerPlaystationImage; // 0x310
	FSlateBrush RightTriggerPlaystationImage; // 0x398
	FSlateBrush LeftTriggerXboxImage; // 0x420
	FSlateBrush RightTriggerXboxImage; // 0x4a8
	TMap<FKey, TSoftObjectPtr<UTexture2D>> XboxButtonIcons; // 0x530
	TMap<FKey, TSoftObjectPtr<UTexture2D>> PlaystationButtonIcons; // 0x580
	TMap<FKey, TSoftObjectPtr<UTexture2D>> SelectedPlatformIcons; // 0x5d0
	UCanvasPanel* VisibleLinesPanel; // 0x620
	UCanvasPanel* SelectedPlatformPanel; // 0x628
	UGamepadLayoutKey_C* SelectedRightStick; // 0x630
	UGamepadLayoutKey_C* SelectedLeftStick; // 0x638
	TArray<FName> DataTableArray; // 0x640
};

struct UWGT_RoundSummaryDetails_V2_C : UHLLRoundSummaryDetails {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* KeySwap; // 0x2f8
	UWidgetAnimation* StatSwap; // 0x300
	UbtnSimple_V2_C* btnStatSwitch; // 0x308
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x310
	UImage* icn_buttonArrow_l; // 0x318
	UImage* icn_buttonArrow_r; // 0x320
	UImage* Image_1; // 0x328
	UImage* Image_2; // 0x330
	UImage* Image_3; // 0x338
	UImage* Image_5; // 0x340
	UImage* Image_6; // 0x348
	UImage* Image_7; // 0x350
	UImage* Image_8; // 0x358
	UImage* Image_9; // 0x360
	UImage* Image_10; // 0x368
	UImage* Image_16; // 0x370
	UImage* Image_19; // 0x378
	UImage* Image_20; // 0x380
	UImage* Image_21; // 0x388
	UHorizontalBox* OrientationHBox; // 0x390
	UVerticalBox* OrientationVBox; // 0x398
	UBorder* StatSwitch; // 0x3a0
	UVerticalBox* VB_Personal; // 0x3a8
	UOptionsTabButton_V2_C* ViewPersonal; // 0x3b0
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_ArmyCommander; // 0x3b8
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_ArtilleryUnit; // 0x3c0
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Combat; // 0x3c8
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_CrossplayPlayer; // 0x3d0
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Defensive; // 0x3d8
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_DefensiveUnit; // 0x3e0
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Fuel; // 0x3e8
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_LogisticsUnit; // 0x3f0
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Manpower; // 0x3f8
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Munitions; // 0x400
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Offensive; // 0x408
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_OffensiveUnit; // 0x410
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_PlayerSpeaking; // 0x418
	UWBP_RoundSummaryKeyDetails_C* WBP_RoundSummaryKeyDetails_Support; // 0x420
	UWGT_RoundSummaryPlayer_C* SelectedPlayer; // 0x428
	bool bCanAccolade; // 0x430
	bool bExpandPlatoonPressed; // 0x431
	bool bPlatoonSelected; // 0x432
	bool bPlayerSelected; // 0x433
	bool bSelectedPlayerIsLocal; // 0x434
	UPlayerManagementActionsBP_C* activeManagementPopup; // 0x438
	bool bDebugIsConsole; // 0x440
};

struct UHLLCharacterAnimInstance : UAnimInstance {
	UCharacterMovementComponent* CharacterMovementComponent; // 0x280
	FVector CharacterVelocity; // 0x288
	FRotator CharacterActorRotation; // 0x294
	FRotator CharacterBaseAimRotation; // 0x2a0
	bool IsCharacterMoving; // 0x2ac
	bool IsCharacterMoving2D; // 0x2ad
	bool IsCharacterRunning; // 0x2ae
	bool IsCharacterProne; // 0x2af
	bool IsCharacterCrouching; // 0x2b0
	bool IsCharacterTargeting; // 0x2b1
	bool IsCharacterInAir; // 0x2b2
	float CharacterAimYaw; // 0x2b4
	float CharacterAimPitch; // 0x2b8
	float CharacterDirection; // 0x2bc
	float CharacterSpeed; // 0x2c0
	float CharacterLeanAngleDegrees; // 0x2c4
	EMovementMode CharacterMovementMode; // 0x2c8
	char CharacterCustomMovementMode; // 0x2c9
	bool IsReloadDry; // 0x2ca
	EWeaponType WeaponType; // 0x2cb
	EWeaponDeployState WeaponDeployState; // 0x2cc
	bool IsWeaponDeployed; // 0x2cd
	bool IsCharacterAnimationPaused; // 0x2ce
	EHLLHealthState CharacterHealthState; // 0x2cf
};

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x268
	UBoxComponent* PreviewInfluenceBox; // 0x270
	UBoxComponent* PreviewCaptureBox; // 0x278
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
};

struct UHLLMapAbilityData : UDataAsset {
	TArray<FAbilityDefinition> Abilities; // 0x30
};

struct UHLLArmourInventory : UActorComponent {
	TArray<FArmourWeaponSpec> DefaultInventory; // 0xb0
	TArray<AHLLArmourWeapon*> Inventory; // 0xc0
};

struct UMediaTexture : UTexture {
	TextureAddress AddressX; // 0xb8
	TextureAddress AddressY; // 0xb9
	bool AutoClear; // 0xba
	FLinearColor ClearColor; // 0xbc
	bool EnableGenMips; // 0xcc
	char NumMips; // 0xcd
	UMediaPlayer* MediaPlayer; // 0xd0
};

struct USceneCaptureComponent : USceneComponent {
	ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x1f0
	ESceneCaptureSource CaptureSource; // 0x1f1
	char bCaptureEveryFrame : 1; // 0x1f2
	char bCaptureOnMovement : 1; // 0x1f2
	bool bAlwaysPersistRenderingState; // 0x1f3
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x1f8
	TArray<AActor*> HiddenActors; // 0x208
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x218
	TArray<AActor*> ShowOnlyActors; // 0x228
	float LODDistanceFactor; // 0x238
	float MaxViewDistanceOverride; // 0x23c
	int32_t CaptureSortPriority; // 0x240
	bool bUseRayTracingIfEnabled; // 0x244
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x248
	FString ProfilingEventName; // 0x268
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UHLLUI_ServerBrowserItem : UUserWidget {
	TWeakObjectPtr<UHLLUI_ServerBrowser> ServerBrowser; // 0x230
	int32_t ItemIndex; // 0x238
	float LongServerNameScrollSpeed; // 0x23c
	UCheckBox* FavouriteToggle; // 0x240
	UImage* ServerThumbnail; // 0x248
	UTextBlock* ServerName; // 0x250
	UTextBlock* PlayerCount; // 0x258
	UTextBlock* MaxPlayerCount; // 0x260
	UTextBlock* Ping; // 0x268
	UTextBlock* MapName; // 0x270
	UTextBlock* ModeName; // 0x278
	UTextBlock* OffensiveModeAttackingFaction; // 0x280
	UWidget* PasswordWidget; // 0x288
	UScrollBox* LongNameScroller; // 0x290
	UTextBlock* LastTimePlayedText; // 0x298
	UButton* HistoryClearButton; // 0x2a0
};

struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xe8
	FVector2D EstimatedSize; // 0xf0
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
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

struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UBaseCompassIndicator : UUserWidget {
	bool bShouldShowOffscreen; // 0x230
	float OpaqueDistance; // 0x234
	float TransparentDistance; // 0x238
	FVector2D Alignment; // 0x23c
	char bOnScreen : 1; // 0x244
	float NormalisedPosition; // 0x248
};

struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UW_GH_GameProgress_Offensive_Sector_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBorder* Sector; // 0x238
	USizeBox* SizeBox_1; // 0x240
	UTextBlock* txt_sector; // 0x248
	FText SectorLabel; // 0x250
	FLinearColor ColFriend; // 0x268
	FLinearColor ColNeutral; // 0x278
	FLinearColor ColEnemy; // 0x288
	bool IsActive; // 0x298
	bool Friendly; // 0x299
	bool SectorLocked; // 0x29a
	bool Contested; // 0x29b
};

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58
	FGuid ObjectGuid; // 0x68
};

struct UHTP_Widget_Role_Loadout_Support_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_6; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_13; // 0x258
	UImage* icn_faction; // 0x260
	UImage* Image_10; // 0x268
	UImage* Image_17; // 0x270
};

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UHLLTooltipBase : UUserWidget {
	float ViewportEdgePadding; // 0x230
	char bAnchorAtBottom : 1; // 0x234
	UWidgetAnimation* ShowAnimation; // 0x238
	float Animation_ShowRate; // 0x240
	float Animation_HideRate; // 0x244
	char bIsDisplayed : 1; // 0x248
	TWeakObjectPtr<UWidget> CurrentContextItem; // 0x24c
	UWidget* GeometryRestriction; // 0x258
};

struct UHLLOverviewMapWrapper : UUserWidget {
	char bAllowMarkerPlacement : 1; // 0x230
	UHLLMarkers_MapMenu* CurrentMarkerMenu; // 0x238
	UHLLMarkers_MapMenu* MarkerContextMenu; // 0x240
	UWidgetAnimation* OpenCloseAnimation; // 0x250
	UBorder* RootBorder; // 0x258
	UTextBlock* MapName; // 0x260
	UTextBlock* PlayerCounts; // 0x268
	UHLLCommanderUI* CommanderPanel; // 0x270
	UHLLOverviewMap* Map; // 0x278
	UBorder* MapPlacementOverlay; // 0x280
	URichTextBlock* MapPlacementText; // 0x288
	UHLLResourceStatus* ResourceStatus; // 0x290
	UScaleBox* MapKeyScaleBox; // 0x298
	UHLLFakeCursor* FakeCursorClass; // 0x2a0
	UScaleBox* MarkerInfo; // 0x2c8
	UInputComponent* MapNaviationComponent; // 0x2d0
	UInputComponent* MapInputComponent; // 0x2d8
	UInputComponent* SelectCommanderAbilityComponent; // 0x2e0
	UInputComponent* PlacementCommanderAbilityComponent; // 0x2e8
	UInputComponent* SelectionCommanderAbilityComponent; // 0x2f0
	UInputComponent* MarkerMenuInputComponent; // 0x2f8
	UInputComponent* AxisInputComponent; // 0x300
	TArray<UInputComponent*> CurrentInputComponents; // 0x308
	UHLLCommanderUIItem* HoveredItem; // 0x330
	UHLLFakeCursor* FakeCursor; // 0x340
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
};

struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
};

struct AHLLPlanes : AActor {
	USplineComponent* FollowSpline; // 0x220
	UStaticMeshComponent* PlaneMesh; // 0x228
	UAudioComponent* PlaneAudio; // 0x230
	USceneComponent* PlaneTransform; // 0x238
	float MovementSpeed; // 0x240
	float MovementTime; // 0x244
};

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct UVehiclePassengerAnimInstance : UAnimInstance {
	FRotator CharacterBaseAimRotation; // 0x270
	AShooterCharacter* ShooterCharacter; // 0x280
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UWGT_RadialInventory_Base_V2_C : UHLLRadialMenu_WeaponBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UBackgroundBlur* BackgroundBlur_63; // 0x330
};

struct UHLLOnlineStatsManager : UObject {
	FMulticastInlineDelegate GlobalStatsUpdateDelegate; // 0x30
	TArray<UHLLOnlinePlayerStats*> PlayerStatObjects; // 0x40
	FTimerHandle TH_WriteMatchStats; // 0x50
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UHLLDialogBox : UUserWidget {
	FMulticastInlineDelegate OptionSelected; // 0x230
	int32_t CurrentPriority; // 0x258
	UTextBlock* TitleText; // 0x260
	UTextBlock* BodyText; // 0x268
	UVerticalBox* CustomContent; // 0x270
	int32_t ButtonsPerRow; // 0x278
	TArray<UHLLDialogButton*> Buttons; // 0x280
	UUniformGridPanel* ButtonPanel; // 0x290
	UInputComponent* PopupInput; // 0x2b0
	UShooterGameViewportClient* ViewportClient; // 0x2b8
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UActorChannel : UChannel {
	AActor* Actor; // 0x70
	TArray<UObject*> CreateSubObjects; // 0x160
};

struct UVehicleDriverSeatUI : UHLLSeatWidgetBase {
	float RPMSmoothingAlpha; // 0x270
	float IdleRPM; // 0x274
	float SpeedSmoothingAlpha; // 0x280
	UHLLDial_Speedometer* Speedometer; // 0x288
	UHLLDial_Tachometer* Tachometer; // 0x290
	UPanelWidget* EngineProgressPanel; // 0x298
	UWidgetSwitcher* EngineProgressTextSwitcher; // 0x2a0
	UTextBlock* Starting; // 0x2a8
	UTextBlock* Stopping; // 0x2b0
	UImage* EngineProgressWheel; // 0x2b8
	URichTextBlock* EngineKeyText; // 0x2c0
	URichTextBlock* GearKeyText; // 0x2c8
};

struct UHLLUI_CreditsOrganisation : UUserWidget {
	UTextBlock* OrganisationName; // 0x230
	UImage* OrganisationLogo; // 0x238
};

struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UWGT_RoundSummaryStatus_C : UHLLResourceStatus {
	UHorizontalBox* HB_Fuel; // 0x280
	UHorizontalBox* HB_Manpower; // 0x288
	UHorizontalBox* HB_Munitions; // 0x290
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
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

struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xe8
	bool bIsTracked; // 0xf4
	TMap<EARFaceBlendShape, float> BlendShapes; // 0xf8
};

struct UWGT_UseContext_UseDispenserWeapon_C : UHLLUseContext_Dispenser {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
};

struct UWGT_ServerBrowser_V2_C : UHLLUI_ServerBrowser {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UWidgetAnimation* Anim_Select; // 0x330
	UOverlay* Browser; // 0x338
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x340
	UWGT_BrowserFilterButton_V2_C* Filter_Community; // 0x348
	UWGT_BrowserFilterButton_V2_C* Filter_Empty; // 0x350
	UWGT_BrowserFilterButton_V2_C* Filter_Full; // 0x358
	UWGT_BrowserFilterButton_V2_C* Filter_Official; // 0x360
	UWGT_BrowserFilterButton_V2_C* Filter_Password; // 0x368
	UImage* Image_3; // 0x370
	UImage* Image_4; // 0x378
	UbtnSimple_V2_C* JoinButton; // 0x380
	UOverlay* JoinServerOverlay; // 0x388
	UButton* MessageHelp; // 0x390
	USearchButton_V2_C* SearchButton; // 0x398
	UWidgetSwitcher* SearchSwitcher; // 0x3a0
	UWGT_BrowserSortButton_V2_C* SortColumn_Map; // 0x3a8
	UWGT_BrowserSortButton_V2_C* SortColumn_Mode; // 0x3b0
	UWGT_BrowserSortButton_V2_C* SortColumn_Ping; // 0x3b8
	UWGT_BrowserSortButton_V2_C* SortColumn_Players; // 0x3c0
	UWGT_BrowserSortButton_V2_C* SortColumn_Server; // 0x3c8
	UTabbedButtonContainer_V2_C* TabbedButtonContainer; // 0x3d0
	float WidthScaling; // 0x3d8
	bool bCurrentEnabledState; // 0x3dc
	UMainMenuWidget_V2_C* MainMenu; // 0x3e0
	UWGT_ServerListItem_V2_C* SelectedServer; // 0x3e8
	bool bSelectedServer; // 0x3f0
	bool bHasFocused; // 0x3f1
};

struct AHLLAbilityDrop_ParachuteBase : AActor {
	char bParachuteIsOpen : 1; // 0x220
	float ParachuteDamping; // 0x224
	float FreefallDamping; // 0x228
	UAnimMontage* ParachuteClose; // 0x230
	FCollisionProfileName LandedCollisionProfile; // 0x238
	float RandImpulseOnHit; // 0x240
	UStaticMeshComponent* ObjectMesh; // 0x248
	USkeletalMeshComponent* ParachuteMesh; // 0x250
};

struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe0
};

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UVehicleAntiFlipComponent : UActorComponent {
	UCurveFloat* CorrectiveForceCurve; // 0xb0
	float MaxCorrectiveVelocity; // 0xb8
	float CorrectionProbeInterval; // 0xbc
	float CorrectionBurstDuration; // 0xc0
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	char bNotForDedicatedServer : 1; // 0x78
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct ACinematicShermanStub : AActor {
	USkeletalMeshComponent* TankMesh; // 0x220
	TArray<UStaticMeshComponent*> AllTrackTiles; // 0x228
	UStaticMeshComponent* TrackTile_000; // 0x238
	UStaticMeshComponent* TrackTile_001; // 0x240
	UStaticMeshComponent* TrackTile_002; // 0x248
	UStaticMeshComponent* TrackTile_003; // 0x250
	UStaticMeshComponent* TrackTile_004; // 0x258
	UStaticMeshComponent* TrackTile_005; // 0x260
	UStaticMeshComponent* TrackTile_006; // 0x268
	UStaticMeshComponent* TrackTile_007; // 0x270
	UStaticMeshComponent* TrackTile_008; // 0x278
	UStaticMeshComponent* TrackTile_009; // 0x280
	UStaticMeshComponent* TrackTile_010; // 0x288
	UStaticMeshComponent* TrackTile_011; // 0x290
	UStaticMeshComponent* TrackTile_012; // 0x298
	UStaticMeshComponent* TrackTile_013; // 0x2a0
	UStaticMeshComponent* TrackTile_014; // 0x2a8
	UStaticMeshComponent* TrackTile_015; // 0x2b0
	UStaticMeshComponent* TrackTile_016; // 0x2b8
	UStaticMeshComponent* TrackTile_017; // 0x2c0
	UStaticMeshComponent* TrackTile_018; // 0x2c8
	UStaticMeshComponent* TrackTile_019; // 0x2d0
	UStaticMeshComponent* TrackTile_020; // 0x2d8
	UStaticMeshComponent* TrackTile_021; // 0x2e0
	UStaticMeshComponent* TrackTile_022; // 0x2e8
	UStaticMeshComponent* TrackTile_023; // 0x2f0
	UStaticMeshComponent* TrackTile_024; // 0x2f8
	UStaticMeshComponent* TrackTile_025; // 0x300
	UStaticMeshComponent* TrackTile_026; // 0x308
	UStaticMeshComponent* TrackTile_027; // 0x310
	UStaticMeshComponent* TrackTile_028; // 0x318
	UStaticMeshComponent* TrackTile_029; // 0x320
	UStaticMeshComponent* TrackTile_030; // 0x328
	UStaticMeshComponent* TrackTile_031; // 0x330
	UStaticMeshComponent* TrackTile_032; // 0x338
	UStaticMeshComponent* TrackTile_033; // 0x340
	UStaticMeshComponent* TrackTile_034; // 0x348
	UStaticMeshComponent* TrackTile_035; // 0x350
	UStaticMeshComponent* TrackTile_036; // 0x358
	UStaticMeshComponent* TrackTile_037; // 0x360
	UStaticMeshComponent* TrackTile_038; // 0x368
	UStaticMeshComponent* TrackTile_039; // 0x370
	UStaticMeshComponent* TrackTile_040; // 0x378
	UStaticMeshComponent* TrackTile_041; // 0x380
	UStaticMeshComponent* TrackTile_042; // 0x388
	UStaticMeshComponent* TrackTile_043; // 0x390
	UStaticMeshComponent* TrackTile_044; // 0x398
	UStaticMeshComponent* TrackTile_045; // 0x3a0
	UStaticMeshComponent* TrackTile_046; // 0x3a8
	UStaticMeshComponent* TrackTile_047; // 0x3b0
	UStaticMeshComponent* TrackTile_048; // 0x3b8
	UStaticMeshComponent* TrackTile_049; // 0x3c0
	UStaticMeshComponent* TrackTile_050; // 0x3c8
	UStaticMeshComponent* TrackTile_051; // 0x3d0
	UStaticMeshComponent* TrackTile_052; // 0x3d8
	UStaticMeshComponent* TrackTile_053; // 0x3e0
	UStaticMeshComponent* TrackTile_054; // 0x3e8
	UStaticMeshComponent* TrackTile_055; // 0x3f0
	UStaticMeshComponent* TrackTile_056; // 0x3f8
	UStaticMeshComponent* TrackTile_057; // 0x400
	UStaticMeshComponent* TrackTile_058; // 0x408
	UStaticMeshComponent* TrackTile_059; // 0x410
	UStaticMeshComponent* TrackTile_060; // 0x418
	UStaticMeshComponent* TrackTile_061; // 0x420
	UStaticMeshComponent* TrackTile_062; // 0x428
	UStaticMeshComponent* TrackTile_063; // 0x430
	UStaticMeshComponent* TrackTile_064; // 0x438
	UStaticMeshComponent* TrackTile_065; // 0x440
	UStaticMeshComponent* TrackTile_066; // 0x448
	UStaticMeshComponent* TrackTile_067; // 0x450
	UStaticMeshComponent* TrackTile_068; // 0x458
	UStaticMeshComponent* TrackTile_069; // 0x460
	UStaticMeshComponent* TrackTile_070; // 0x468
	UStaticMeshComponent* TrackTile_071; // 0x470
	UStaticMeshComponent* TrackTile_072; // 0x478
	UStaticMeshComponent* TrackTile_073; // 0x480
	UStaticMeshComponent* TrackTile_074; // 0x488
	UStaticMeshComponent* TrackTile_075; // 0x490
	UStaticMeshComponent* TrackTile_076; // 0x498
	UStaticMeshComponent* TrackTile_077; // 0x4a0
	UStaticMeshComponent* TrackTile_078; // 0x4a8
	UStaticMeshComponent* TrackTile_079; // 0x4b0
	UStaticMeshComponent* TrackTile_080; // 0x4b8
	UStaticMeshComponent* TrackTile_081; // 0x4c0
	UStaticMeshComponent* TrackTile_082; // 0x4c8
	UStaticMeshComponent* TrackTile_083; // 0x4d0
	UStaticMeshComponent* TrackTile_084; // 0x4d8
	UStaticMeshComponent* TrackTile_085; // 0x4e0
	UStaticMeshComponent* TrackTile_086; // 0x4e8
	UStaticMeshComponent* TrackTile_087; // 0x4f0
	UStaticMeshComponent* TrackTile_088; // 0x4f8
	UStaticMeshComponent* TrackTile_089; // 0x500
	UStaticMeshComponent* TrackTile_090; // 0x508
	UStaticMeshComponent* TrackTile_091; // 0x510
	UStaticMeshComponent* TrackTile_092; // 0x518
	UStaticMeshComponent* TrackTile_093; // 0x520
	UStaticMeshComponent* TrackTile_094; // 0x528
	UStaticMeshComponent* TrackTile_095; // 0x530
	UStaticMeshComponent* TrackTile_096; // 0x538
	UStaticMeshComponent* TrackTile_097; // 0x540
	UStaticMeshComponent* TrackTile_098; // 0x548
	UStaticMeshComponent* TrackTile_099; // 0x550
	UStaticMeshComponent* TrackTile_101; // 0x558
	UStaticMeshComponent* TrackTile_102; // 0x560
	UStaticMeshComponent* TrackTile_103; // 0x568
	UStaticMeshComponent* TrackTile_104; // 0x570
	UStaticMeshComponent* TrackTile_105; // 0x578
	UStaticMeshComponent* TrackTile_106; // 0x580
	UStaticMeshComponent* TrackTile_107; // 0x588
	UStaticMeshComponent* TrackTile_108; // 0x590
	UStaticMeshComponent* TrackTile_109; // 0x598
	UStaticMeshComponent* TrackTile_110; // 0x5a0
	UStaticMeshComponent* TrackTile_111; // 0x5a8
	UStaticMeshComponent* TrackTile_112; // 0x5b0
	UStaticMeshComponent* TrackTile_113; // 0x5b8
	UStaticMeshComponent* TrackTile_114; // 0x5c0
	UStaticMeshComponent* TrackTile_115; // 0x5c8
	UStaticMeshComponent* TrackTile_116; // 0x5d0
	UStaticMeshComponent* TrackTile_117; // 0x5d8
	UStaticMeshComponent* TrackTile_118; // 0x5e0
	UStaticMeshComponent* TrackTile_119; // 0x5e8
	UStaticMeshComponent* TrackTile_120; // 0x5f0
	UStaticMeshComponent* TrackTile_121; // 0x5f8
	UStaticMeshComponent* TrackTile_122; // 0x600
	UStaticMeshComponent* TrackTile_123; // 0x608
	UStaticMeshComponent* TrackTile_124; // 0x610
	UStaticMeshComponent* TrackTile_125; // 0x618
	UStaticMeshComponent* TrackTile_126; // 0x620
	UStaticMeshComponent* TrackTile_127; // 0x628
	UStaticMeshComponent* TrackTile_128; // 0x630
	UStaticMeshComponent* TrackTile_129; // 0x638
	UStaticMeshComponent* TrackTile_130; // 0x640
	UStaticMeshComponent* TrackTile_131; // 0x648
	UStaticMeshComponent* TrackTile_132; // 0x650
	UStaticMeshComponent* TrackTile_133; // 0x658
	UStaticMeshComponent* TrackTile_134; // 0x660
	UStaticMeshComponent* TrackTile_135; // 0x668
	UStaticMeshComponent* TrackTile_136; // 0x670
	UStaticMeshComponent* TrackTile_137; // 0x678
	UStaticMeshComponent* TrackTile_138; // 0x680
	UStaticMeshComponent* TrackTile_139; // 0x688
	UStaticMeshComponent* TrackTile_140; // 0x690
	UStaticMeshComponent* TrackTile_141; // 0x698
	UStaticMeshComponent* TrackTile_142; // 0x6a0
	UStaticMeshComponent* TrackTile_143; // 0x6a8
	UStaticMeshComponent* TrackTile_144; // 0x6b0
	UStaticMeshComponent* TrackTile_145; // 0x6b8
	UStaticMeshComponent* TrackTile_146; // 0x6c0
	UStaticMeshComponent* TrackTile_147; // 0x6c8
	UStaticMeshComponent* TrackTile_148; // 0x6d0
	UStaticMeshComponent* TrackTile_149; // 0x6d8
	UStaticMeshComponent* TrackTile_150; // 0x6e0
	UStaticMeshComponent* TrackTile_151; // 0x6e8
	UStaticMeshComponent* TrackTile_152; // 0x6f0
	UStaticMeshComponent* TrackTile_153; // 0x6f8
	UStaticMeshComponent* TrackTile_154; // 0x700
	UStaticMeshComponent* TrackTile_155; // 0x708
	UStaticMeshComponent* TrackTile_156; // 0x710
	UStaticMeshComponent* TrackTile_157; // 0x718
	UStaticMeshComponent* TrackTile_158; // 0x720
};

struct UW_GH_GameProgress_C : UUserWidget {
	UW_GH_GameProgress_Sector_new_C* Able; // 0x230
	UW_GH_GameProgress_Sector_new_C* Baker; // 0x238
	UW_GH_GameProgress_Sector_new_C* Charlie; // 0x240
	UW_GH_GameProgress_Sector_new_C* Dog; // 0x248
	UW_GH_GameProgress_Sector_new_C* Easy; // 0x250
	bool Warning_FinalSectorProgress_Win; // 0x258
	UMain_C* Widget_MainRef; // 0x260
	bool Warning_FinalSectorProgress_Lose; // 0x268
};

struct UHLLUpgradeGhostComponent : UActorComponent {
	char bHideGhostFromEnemies : 1; // 0xb0
	char bCreateGhostBlocker : 1; // 0xb0
	FTransform BoxTransform; // 0xc0
	FVector BoxExtent; // 0xf0
	FCollisionProfileName GhostBoxProfile; // 0xfc
	char LeaveGhostTier; // 0x104
	FCollisionProfileName GhostProfile; // 0x108
	UMaterialInterface* GhostMaterial; // 0x110
	float IdleLifespan; // 0x118
	TMap<UPrimitiveComponent*, FGhostComponentDefaults> ModifiedComponents; // 0x120
	TWeakObjectPtr<UBoxComponent> GhostBlockerBox; // 0x170
	TArray<FGhostComponent> GhostComponents; // 0x178
	UMaterialInstanceDynamic* GhostDMI; // 0x188
	EGhostState GhostState; // 0x190
};

struct UABP_Rifleman_FPP_V2_C : UShooterCharacterAnimInstance2 {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FAnimNode_Slot AnimGraphNode_Slot_21; // 0x278
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_22; // 0x2c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_21; // 0x378
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x430
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x458
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x480
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x4f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_70; // 0x528
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x550
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x580
	FAnimNode_Slot AnimGraphNode_Slot_20; // 0x630
	FAnimNode_Slot AnimGraphNode_Slot_19; // 0x678
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0x6c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_20; // 0x780
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_69; // 0x838
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x860
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x888
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x8b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x8d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x900
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x928
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x950
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x978
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x9a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x9c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x9f0
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0xa68
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0xa98
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xb10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0xb40
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xbb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_68; // 0xbe8
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xc10
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xc40
	FAnimNode_Slot AnimGraphNode_Slot_18; // 0xcf0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_19; // 0xd38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xdf0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0xe68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_67; // 0xf20
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0xf48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0xfe8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_66; // 0x1088
	FAnimNode_Slot AnimGraphNode_Slot_17; // 0x10b0
	FAnimNode_Slot AnimGraphNode_Slot_16; // 0x10f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_65; // 0x1140
	FAnimNode_Slot AnimGraphNode_Slot_15; // 0x1168
	FAnimNode_Slot AnimGraphNode_Slot_14; // 0x11b0
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_12; // 0x11f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_64; // 0x1260
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x1288
	FAnimNode_Slot AnimGraphNode_Slot_13; // 0x1390
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_5; // 0x13d8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0x14a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0x1560
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x1618
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11; // 0x1720
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11; // 0x1740
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x1760
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x1788
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x17b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x17d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x1800
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x1828
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x1850
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x1878
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_13; // 0x18a0
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2; // 0x1968
	FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator; // 0x19c0
	FAnimNode_StateResult AnimGraphNode_CustomTransitionResult; // 0x1a18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x1a48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x1a70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1a98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1ac0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_63; // 0x1ae8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x1b10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1b40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_62; // 0x1b68
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1b90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_61; // 0x1bc0
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1be8
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_11; // 0x1c18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_60; // 0x1c80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_59; // 0x1ca8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10; // 0x1cd0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x1cf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_58; // 0x1df8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10; // 0x1e20
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x1e40
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting_2; // 0x1f48
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x2068
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_57; // 0x2138
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_56; // 0x2160
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_10; // 0x2188
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x21f0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_12; // 0x2268
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x2330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x23a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_11; // 0x2420
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x24e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x2560
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_10; // 0x25d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x26a0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9; // 0x27a8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9; // 0x27c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_55; // 0x27e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_54; // 0x2810
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_6; // 0x2838
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x2870
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0x2940
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_9; // 0x29f0
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_9; // 0x2ab8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_53; // 0x2b20
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_52; // 0x2b48
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_5; // 0x2b70
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x2ba8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_51; // 0x2c78
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8; // 0x2ca0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8; // 0x2cc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x2ce0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_50; // 0x2de8
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_8; // 0x2e10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_49; // 0x2e78
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_7; // 0x2ea0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_48; // 0x2f08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_47; // 0x2f30
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_6; // 0x2f58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_46; // 0x2fc0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0x2fe8
	FAnimNode_HandIKRetargeting AnimGraphNode_HandIKRetargeting; // 0x30a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x31c8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x32d0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_8; // 0x3398
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0x3460
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0x3480
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_45; // 0x34a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_44; // 0x34c8
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_4; // 0x34f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x3528
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x35a0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x35d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x3680
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x3788
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x37a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0x37c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_43; // 0x3880
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x38a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_7; // 0x3960
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_42; // 0x3a28
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_3; // 0x3a50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_41; // 0x3a88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0x3ab0
	FAnimNode_Slot AnimGraphNode_Slot_12; // 0x3ad8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x3b20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x3bf0
	FAnimNode_Slot AnimGraphNode_Slot_11; // 0x3cd0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x3d18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0x3dc8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0x3df0
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_5; // 0x3eb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0x3f18
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_2; // 0x3f40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0x3f78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0x3fa0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x3fc8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x4090
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_4; // 0x4148
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x41b0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x4270
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0x4328
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x4350
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x4378
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x43a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x4460
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x4488
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x44b0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x45b8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x45d8
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_3; // 0x45f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x4660
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x4688
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x4738
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x47f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x4818
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x4840
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x4888
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x48b0
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; // 0x48d8
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0x4910
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x4958
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x4a10
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x4ab0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x4b70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x4b98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x4c10
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x4cc8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x4d78
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x4da0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x4dc8
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0x4df0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x4e38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x4e60
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4e88
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x4f50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4f98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x5010
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_2; // 0x50c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x5128
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x5150
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x5258
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x5278
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x5298
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x5350
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x5530
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x5710
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x57c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x57f0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x58d0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_6; // 0x5990
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x5a58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x5b10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_5; // 0x5b38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x5c00
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x5c28
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x5ce0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x5d00
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x5d20
	FAnimNode_Root AnimGraphNode_Root; // 0x5e28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x5e58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5ef8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x5f70
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x6010
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x60c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x60f0
	FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x6110
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x6200
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x6220
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6248
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x62e8
	FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x6308
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x63f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6418
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x6490
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x64b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0x6530
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x65f8
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x6670
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x66b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x66e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x67e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x68a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x68d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x68f8
	FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel; // 0x6920
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x6988
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x6a50
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x6a78
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x6ac0
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x6b08
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x6b50
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x6b98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x6c60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x6d18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x6d40
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6d68
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x6db0
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x6f38
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x6f80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x7048
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x7100
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x7128
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7150
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7210
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7238
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x72f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7318
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x7340
	FAnimNode_Slot AnimGraphNode_Slot; // 0x73e0
	AShooterCharacter* PlayerPawn; // 0x7428
	AHLL_PlayerController_C* PlayerController; // 0x7430
	float InertiaMax; // 0x7438
	float InertiaSensitivity; // 0x743c
	FVector InertiaVelocity; // 0x7440
	FVector InertiaVelocityR; // 0x744c
	TArray<FFloatSpringState> InertiaSpring; // 0x7458
	float WeaponWeight; // 0x7468
	float InertiaPivot; // 0x746c
	FVector InertiaWeightT; // 0x7470
	FVector InertiaWeightR; // 0x747c
	FVector ProceduralResult_T; // 0x7488
	FRotator ProceduralResult_R; // 0x7494
	FVector PlayerVelocity; // 0x74a0
	FVector PlayerVelocity_Walk; // 0x74ac
	FVector PlayerVelocity_Prone; // 0x74b8
	bool IsSprinting; // 0x74c4
	bool IsMoving; // 0x74c5
	bool IsAiming; // 0x74c6
	bool IsAiming_Stored; // 0x74c7
	bool IsGrounded; // 0x74c8
	bool IsAnimValid_Check; // 0x74c9
	ECharacterStance Stance; // 0x74ca
	USkeletalMeshComponent* Mesh_FPP; // 0x74d0
	USkeletalMeshComponent* Mesh_TPP; // 0x74d8
	USkeletalMeshComponent* Mesh_WPN; // 0x74e0
	UABP_Rifleman_TPP_V2_C* ABP_TPP; // 0x74e8
	AShooterWeapon* WeaponInst; // 0x74f0
	float IK_Left; // 0x74f8
	float IK_Right; // 0x74fc
	bool IK_Left_Enabled; // 0x7500
	bool IK_Right_Enabled; // 0x7501
	UWeaponFPPAnimationSet* AnimSet; // 0x7508
	FWeaponFPPAnimationParams WeaponParams; // 0x7510
	EWeaponType WeaponType; // 0x75b0
	UAnimSequenceBase* a_inheritance_pose; // 0x75b8
	UAnimSequenceBase* a_idle; // 0x75c0
	UAnimSequenceBase* a_ads; // 0x75c8
	UAnimSequenceBase* a_sprint; // 0x75d0
	UCurveVector* crv_ads_enter_t; // 0x75d8
	UCurveVector* crv_ads_exit_t; // 0x75e0
	UCurveVector* crv_ads_enter_r; // 0x75e8
	UCurveVector* crv_ads_exit_r; // 0x75f0
	float ADS_Weight; // 0x75f8
	float ADS_Weight_Inv; // 0x75fc
	FVector ADS_Anim_T; // 0x7600
	FRotator ADS_Anim_R; // 0x760c
	FVector ADS_Offset_T; // 0x7618
	FRotator ADS_Offset_R; // 0x7624
	float Stance_Weight; // 0x7630
	FVector Idle_Offset_T; // 0x7634
	FRotator Idle_Offset_R; // 0x7640
	UCurveVector* crv_crouch_enter_t; // 0x7650
	UCurveVector* crv_crouch_exit_t; // 0x7658
	UCurveVector* crv_crouch_enter_r; // 0x7660
	UCurveVector* crv_crouch_exit_r; // 0x7668
	FVector Crouch_Anim_T; // 0x7670
	FRotator Crouch_Anim_R; // 0x767c
	int32_t StoredInertiaIndex; // 0x7688
	int32_t StoredInertiaSample; // 0x768c
	float Recoil_Phase; // 0x7690
	float Recoil_Power; // 0x7694
	FVector Crouch_Offset_T; // 0x7698
	FRotator Crouch_Offset_R; // 0x76a4
	UCurveVector* crv_idle_noise; // 0x76b0
	float Recoil_Reset; // 0x76b8
	float C_LeftPrio; // 0x76bc
	float Walk_Phase; // 0x76c0
	float Recoil_Impulse_Phase; // 0x76c4
	float Recoil_Impulse_Speed; // 0x76c8
	UCurveFloat* crv_recoil_settle; // 0x76d0
	float Walk_Weight; // 0x76d8
	UCurveVector* crv_walk_t; // 0x76e0
	UCurveVector* crv_walk_r; // 0x76e8
	FVector Walk_Anim_T; // 0x76f0
	FRotator Walk_Anim_R; // 0x76fc
	FRotator GroundAngle_Spine_R; // 0x7708
	FVector GroundAngle_Weapon_T; // 0x7714
	FRotator GroundAngle_Weapon_R; // 0x7720
	FRotator Idle_Noise_R; // 0x772c
	UCurveVector* crv_recoil_t; // 0x7738
	UCurveVector* crv_recoil_r; // 0x7740
	UCurveVector* crv_recoil_range_r; // 0x7748
	FVector RecoilKeys; // 0x7750
	FVector Weapon_Recoil_T; // 0x775c
	FRotator Weapon_Recoil_R; // 0x7768
	EWeaponType WeaponTypeLast; // 0x7774
	EWeaponGroups_V2 WeaponGroup; // 0x7775
	float Obstacle_TraceDistance; // 0x7778
	float Obstacle_TraceRadius; // 0x777c
	FVector Obstacle_HitDistance; // 0x7780
	float Obstacle_HitScale; // 0x778c
	bool IsProne; // 0x7790
	bool IsReloading; // 0x7791
	float IsReloading_F; // 0x7794
	bool IsBraced; // 0x7798
	bool IsDeployed; // 0x7799
	bool RegularSprint; // 0x779a
	float DeployedWeight; // 0x779c
	float DeployedWeightInv; // 0x77a0
	float InterpolatedTargetingWeight; // 0x77a4
	EWeaponGroups_V2 WeaponGroup_Last; // 0x77a8
	EWeaponGroups_V2 EquippedGroup; // 0x77a9
	APlayerPawn_Anim_V2_C* DebugCameraRef; // 0x77b0
	float ADS_Speed; // 0x77b8
	FVector Bipod_Offset; // 0x77bc
	FRotator Bipod_Rotation; // 0x77c8
	float DeltaTimeUnclamped; // 0x77d4
	float DeltaTimeClamped; // 0x77d8
	bool WantsToMove; // 0x77dc
	FVector WantsToMoveDirection; // 0x77e0
	float ADS_TimeStored_Enter; // 0x77ec
	float ADS_TimeStored_Exit; // 0x77f0
	UAnimSequenceBase* a_idle_deployed; // 0x77f8
	UAnimSequenceBase* a_brace_enter; // 0x7800
	UAnimSequenceBase* a_brace_idle; // 0x7808
	UAnimSequenceBase* a_brace_exit; // 0x7810
	UBlendSpace* bs_crawl; // 0x7818
	float LeanSign; // 0x7820
	float LeanAngleDiff; // 0x7824
	bool ResetStateMachines; // 0x7828
	FVector ManualADSVectorOffset; // 0x782c
	FVector SprintOffset; // 0x7838
	bool FiredWeapon; // 0x7844
	FVector RootOffset_T; // 0x7848
	FRotator RootOffset_R; // 0x7854
	float ADS_WeightC; // 0x7860
	float ADS_Speed_MP; // 0x7864
	float SimpleSprint_Weight; // 0x7868
	float Inertia_Weight; // 0x786c
	float IdleTimer; // 0x7870
	TArray<UAnimMontage*> MontageFidgets_Rifle; // 0x7878
	TArray<UAnimMontage*> MontageFidgets_RifleAltPivot; // 0x7888
	TArray<UAnimMontage*> MontageFidgets_Pistol; // 0x7898
	TArray<EWeaponType> FidgetTypes_Rifle; // 0x78a8
	TArray<EWeaponType> FidgetTypes_RifleAltPivot; // 0x78b8
	TArray<EWeaponType> FidgetTypes_Pistol; // 0x78c8
	float C_LockIKHands; // 0x78d8
	float RecoilTime; // 0x78dc
	float ContinuedRecoilWeight; // 0x78e0
	UCurveFloat* crv_ADS; // 0x78e8
	float FiredWeapon_Time; // 0x78f0
	FRotator Head_R; // 0x78f4
	bool AddInertiaToLeftHand; // 0x7900
	bool t_ToSprint; // 0x7901
	bool t_FromSprint; // 0x7902
	bool t_FromSprint_ToProne; // 0x7903
	bool t_MovingAndGrounded; // 0x7904
	bool t_StopMoving; // 0x7905
	bool InvInertiaPivot; // 0x7906
	float PlayerVelocity_Power; // 0x7908
	FVector PlayerVelocity_Late; // 0x790c
	float PlayerVelocity_LateDiff; // 0x7918
	TArray<FFloatSpringState> Movement_Spring; // 0x7920
	FVector Inertia_Velocity_Movement; // 0x7930
	FInertiaPack LateInertia_View; // 0x7940
	FInertiaPack LateInertia_Movement; // 0x7968
	bool DebugCameraView; // 0x7990
	FVector DebugCameraView_T; // 0x7994
	FRotator DebugCameraView_R; // 0x79a0
	float Time_ObstacleTrace; // 0x79ac
	float Inertia_Ironsight_Offset; // 0x79b0
	bool IsVaulting; // 0x79b4
	bool Initialized; // 0x79b5
	EWeaponCrawlType_V2 CrawlType; // 0x79b6
	ESprintType_V2 SprintType; // 0x79b7
	float ADSThumb_Weight; // 0x79b8
	bool QueueAnimationSetUpdate; // 0x79bc
	bool CorrectPanzerPelvis; // 0x79bd
	FRotator ProceduralResult_R_Inv; // 0x79c0
	AShooterCharacter* OwnerRef; // 0x79d0
	bool TempDisableAnim; // 0x79d8
	FVector JointTargetOffset_Left; // 0x79dc
	FVector JointTargetOffset_Right; // 0x79e8
	float JointTargetOffset_Left_weight; // 0x79f4
	float JointTargetOffset_Right_weight; // 0x79f8
	float JointTargetOffset_Globalweight; // 0x79fc
	float PlayerSpeedNormalized; // 0x7a00
	float SprintPlayRate; // 0x7a04
	TArray<FWeaponType_GetVec> BipodRange_Vertical; // 0x7a08
	TArray<FWeaponType_GetVec> BipodRange_Horizontal; // 0x7a18
	TArray<FWeaponType_GetVec> BipodRange_BaseOffset; // 0x7a28
	FVector CameraInertiaCurrent; // 0x7a38
	FVector CameraInertiaLast; // 0x7a44
	float C_ThrowInertia; // 0x7a50
	float ADS_AnimWeight_Base; // 0x7a54
	float ADS_AnimWeight_Clamped; // 0x7a58
	float ADS_AnimWeight_Unclamped; // 0x7a5c
	float PlayerSpeedNormalizedUnclamped; // 0x7a60
	UAnimMontage* A_Jump; // 0x7a68
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x130
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x268
};

struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1c8
};

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe0
};

struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x220
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

struct UCameraAnim : UObject {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5a0
};

struct UWGT_RoleCategory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UNamedSlot* ItemsSlot; // 0x238
	UTextBlock* Title; // 0x240
	EPlatoonType PlatoonType; // 0x248
};

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	TArray<FTearOffActorInfo> TearOffActors; // 0x50
};

struct UTrackedVehicleMovementComponent : UWheeledVehicleMovementComponent {
	uint32_t NumPhysicsWheelsPerSide; // 0x2f0
	float DefaultAnimatedWheelRadius; // 0x2f4
	TArray<FAnimatedTrackedVehicleWheelSetup> AnimatedWheelSetups; // 0x2f8
	FVehicleEngineData EngineSetup; // 0x308
	FVehicleTransmissionData TransmissionSetup; // 0x3a8
	float LowestGearEngineDampingRate; // 0x3d8
	float DefaultSteeringInducedBrakeInput; // 0x3dc
	TMap<int32_t, float> PerGearSteeringInducedBrakeInput; // 0x3e0
	float DefaultSteeringInducedThrustInput; // 0x430
	TMap<int32_t, float> PerGearSteeringInducedThrustInput; // 0x438
	UVehicleWheel* LeftReferenceRotationPhysicsWheel; // 0x498
	UVehicleWheel* RightReferenceRotationPhysicsWheel; // 0x4a0
};

struct AHLLAbility_PassiveBase : AHLLCommanderAbility {
	float AbilityTime; // 0x350
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xc0
	FLinearColor ClearColor; // 0xc4
	EPixelFormat OverrideFormat; // 0xd4
	char bHDR : 1; // 0xd5
	char bForceLinearGamma : 1; // 0xd5
};

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
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
	FSoftObjectPath DefaultTouchInterface; // 0xb0
	FKey ConsoleKey; // 0xc8
	TArray<FKey> ConsoleKeys; // 0xe0
};

struct UVehicleDropsComponent : UActorComponent {
	FMulticastInlineDelegate OnSuppliesAdded; // 0xb0
	float TimeToDrop; // 0xc0
	int32_t InitialDropCount; // 0xc4
	AVehicleDrop_Supplies* DropActorClass; // 0xc8
	USoundBase* StartDroppingSound; // 0xd0
	USoundBase* StoppedDroppingSound; // 0xd8
	UInputComponent* InputComponent; // 0xe0
	TWeakObjectPtr<UAudioComponent> DroppingASC; // 0xe8
	int32_t NumRemainingDrops; // 0xf0
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1a30
};

struct UTankDriverSeatUI : UHLLTankSeatUI_Base {
	float RPMSmoothingAlpha; // 0x280
	float IdleRPM; // 0x284
	float SpeedSmoothingAlpha; // 0x290
	UHLLArmourWeaponUI* DriverWeaponInfo; // 0x298
	UHLLDial_Speedometer* Speedometer; // 0x2a0
	UHLLDial_Tachometer* Tachometer; // 0x2a8
	UPanelWidget* EngineProgressPanel; // 0x2b0
	UWidgetSwitcher* EngineProgressTextSwitcher; // 0x2b8
	UTextBlock* Starting; // 0x2c0
	UTextBlock* Stopping; // 0x2c8
	UImage* EngineProgressWheel; // 0x2d0
	URichTextBlock* EngineKeyText; // 0x2d8
	URichTextBlock* GearKeyText; // 0x2e0
	UBorder* HullMGBorder; // 0x2e8
	UImage* HullMGReticle; // 0x2f0
};

struct UBaseMediaSource : UMediaSource {
	FName PlayerName; // 0x80
};

struct UHLLMapComponent : UActorComponent {
	AHLLMapDataBase* DataClass; // 0xb0
	char bAutoRegister : 1; // 0xb8
	char bAllowClientSideCreation : 1; // 0xb8
	AHLLMapDataBase* DataInstance; // 0xc0
};

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
	TArray<FVector4> CPUData; // 0x80
};

struct UWGT_DeployRoleSelection_V2_C : UHLLUI_RoleSelection_InGame {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
	UWidgetAnimation* FadeInLeftColumn; // 0x3d8
	UWidgetAnimation* FadeInRightColumn; // 0x3e0
	UWidgetAnimation* TitleChange; // 0x3e8
	UWidgetAnimation* RightPanelChange; // 0x3f0
	USlider* CharacterSpinSlider; // 0x3f8
	UVerticalBox* CosmeticDetailsVBox; // 0x400
	USizeBox* LeftSBox; // 0x408
	USizeBox* RightSBox; // 0x410
	UTabbedButtonContainer_V2_C* TabbedButtonContainer_V2; // 0x418
	UDeployment_V2_C* DeployWidgetParent; // 0x420
	bool bHasFocused; // 0x428
	UWGT_DeployRoleItem_V2_C* SelectedRole; // 0x430
	bool bFocusedOnRoles; // 0x438
};

struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x1f0
	float SpringDamping; // 0x1f4
	float SpringLengthAtRest; // 0x1f8
	float SpringRadius; // 0x1fc
	ECollisionChannel SpringChannel; // 0x200
	bool bIgnoreSelf; // 0x201
	float SpringCompression; // 0x204
};

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct USoundNodeVolumeType : USoundNode {
	char bUseListenerVolume : 1; // 0x48
	char bFallbackToDefault : 1; // 0x48
	char bContinuousUpdate : 1; // 0x48
	char bRestartOnSwap : 1; // 0x48
};

struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UHLLUIStyleContainer : USlateWidgetStyleContainerBase {
	FHLLUIStyle MapStyle; // 0x30
};

struct AVaultingTestCharacter : AShooterCharacter {
	char bShouldRun : 1; // 0x1038
	char bShouldWalk : 1; // 0x1038
	char bShowCapsule : 1; // 0x1038
};

struct UW_GH_GameProgress_Offensive_Objective_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBorder* ObjectiveNameCenter; // 0x238
	UBorder* ObjectiveNameLeft; // 0x240
	UBorder* ObjectiveNameRight; // 0x248
	UOverlay* ObjectiveProgress; // 0x250
	UProgressBar* PB_Progress; // 0x258
	UProgressBar* PB_ProgressLine; // 0x260
	UImage* SectorIcon; // 0x268
	UTextBlock* txt_name_center; // 0x270
	UTextBlock* txt_name_left; // 0x278
	UTextBlock* txt_name_right; // 0x280
	bool IsRightSide; // 0x288
	FText ObjName; // 0x290
	float CapProgress; // 0x2a8
	FSlateBrush CapProgressDefenderBG; // 0x2b0
	FSlateBrush CapProgressAttackerBG; // 0x338
	FSlateBrush CapProgressDefender; // 0x3c0
	FSlateBrush CapProgressAttacker; // 0x448
	bool IsFriendly; // 0x4d0
	bool IsCenter; // 0x4d1
	bool IsContested; // 0x4d2
};

struct UHLLCommanderUIItem : UUserWidget {
	TWeakObjectPtr<AHLLCommanderAbility> AssignedAbility; // 0x234
	TWeakObjectPtr<UHLLCommanderUI> OwningUI; // 0x23c
	UButton* RootButton; // 0x248
	UBorder* RootBorder; // 0x250
	UBorder* IconBorder; // 0x258
	UImage* DisplayIcon; // 0x260
	UImage* DisplayIconProgress; // 0x268
	UTextBlock* DisplayName; // 0x270
	UProgressBar* CooldownBar; // 0x278
	UTextBlock* Cost; // 0x280
	UButton* ExecuteButton; // 0x288
	UWidgetAnimation* PulseAnim; // 0x290
};

struct UDeployment_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UBPW_Army_V2_C* ArmySidebar; // 0x238
	UCreatePlatoon_V2_C* CreatePlatoon_2; // 0x240
	UHorizontalBox* DeployMap; // 0x248
	UBPW_DeploymentMap_V2_C* DeploymentMap; // 0x250
	UWGT_DeployRoleSelection_V2_C* DeployRoleSelection; // 0x258
	UImage* Image_67; // 0x260
	UBorder* InputBlocker; // 0x268
	UTextBlock* ServerMessage; // 0x270
	UWidgetSwitcher* ServerMessageMapKeySwitcher; // 0x278
	UTabbedButtonContainer_V2_C* ServerMessageMapKeyTabs; // 0x280
	UScrollBox* SpawnPointContainer; // 0x288
	UUnitLeaderSettings_C* UnitLeaderSettings; // 0x290
	UVerticalBox* VerticalBox_3; // 0x298
	UW_MapKey_C* W_MapKey; // 0x2a0
	UWidgetSwitcher* WS_DeploymentContent; // 0x2a8
	FMulticastInlineDelegate OnDeploy; // 0x2b0
	ETeam PlayerTeam; // 0x2c0
	FMulticastInlineDelegate OnDeployAtOutpost; // 0x2c8
	bool ForceCreatePlatoonDisabled; // 0x2d8
	float LatchedSpawnWaveTime; // 0x2dc
	float LastObservedSpawnWaveTime; // 0x2e0
	UDeploymentScreen_V2_C* Deployment_WidgetParent; // 0x2e8
	bool Deployment_PlatoonJoined; // 0x2f0
	UW_HoverToolTip_Explained_C* Widget_Tooltip_SpawnPoint; // 0x2f8
	FTimerHandle SwitchTeamUpdateTimer; // 0x300
	bool Player_Deploying; // 0x308
	TArray<UHLLMapIconBase*> AvailableSpawnPoints; // 0x310
	int32_t UnitIndex; // 0x320
	bool bHasFocused; // 0x324
	EDynamicSpawnType CurrentType; // 0x325
	int32_t CurrentHQIndex; // 0x328
	FString SpawnTextAsString; // 0x330
	FText SpawnText; // 0x340
	int32_t CurrentGarrisonIndex; // 0x358
	int32_t CurrentOutpostIndex; // 0x35c
	int32_t TotalSpawnPoints; // 0x360
	bool bIsSpawnAvailable; // 0x364
	USpawnPointListItem_C* UnavailableSpawnPoint; // 0x368
	int32_t CurrentAirheadIndex; // 0x370
	USpawnPointListItem_C* ChosenSpawnPoint; // 0x378
	bool IsBelowDeployCancellationTime; // 0x380
	bool bShouldHideSpawnItem; // 0x381
	bool bGamepadPlayerKickNavigation; // 0x382
	bool WasFocusedOnPlayer; // 0x383
	FText LastRCONMessage; // 0x388
	int32_t CurrentMobileSpawnIndex; // 0x3a0
	float TimePressedShoulderButton; // 0x3a4
	AShooterPlayerState* GamepadPlayerKickLastSelected; // 0x3a8
	AShooterHUD* ShooterHUD; // 0x3b0
};

struct UDeploymentScreen_V2_C : UHLLDeploymentScreen {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* A_DeployCancelled; // 0x238
	UBackgroundBlur* BGBlur; // 0x240
	UBPW_DeployButton_V2_C* BPW_DeployButton; // 0x248
	UButton* Btn_Deploy; // 0x250
	UButtonPromptsInfo_V2_C* ButtonPromptsInfo; // 0x258
	UButton* CancelDeployment; // 0x260
	UVerticalBox* Deploy_VBox; // 0x268
	UDeployment_V2_C* Deployment; // 0x270
	USizeBox* DeployStepBar; // 0x278
	UImage* Image_1; // 0x280
	UImage* Image_2; // 0x288
	UImage* Image_4; // 0x290
	UTextBlock* Lgnd_Txt_Entercombat; // 0x298
	UTextBlock* Lgnd_Txt_JoinUnit; // 0x2a0
	UTextBlock* Lgnd_Txt_SelectForce; // 0x2a8
	UTextBlock* Lgnd_Txt_SelectRole; // 0x2b0
	UMenuHeader_C* MenuHeader; // 0x2b8
	UNextWaveTimer_C* NextWaveTimer; // 0x2c0
	URetainerBox* RetainerBox_1; // 0x2c8
	UBorder* RootBorder; // 0x2d0
	UWidgetSwitcher* Switcher; // 0x2d8
	UTeamSelection_V2_C* TeamSelection; // 0x2e0
	UThrobber* WaitingForDeployIndicator; // 0x2e8
	UVerticalBox* WaitingToDeployIndicatorPanel; // 0x2f0
	FTimerHandle ServerDeploymentTimer; // 0x2f8
	float ServerDeploymentWarmupSeconds; // 0x300
	TScriptInterface<IDynamicSpawnInterface> SpawnToDeployAt; // 0x308
	bool HideDeploymentScreenRequested; // 0x318
	bool bCanDeploy; // 0x319
	bool bIsCommander; // 0x31a
	bool bIsFocusReceived; // 0x31b
	bool bHasRespawned; // 0x31c
	bool bPlatoonListItemClicked; // 0x31d
	bool bIsClaimingCommander; // 0x31e
	bool bCanExpandPlatoon; // 0x31f
	UBPW_PlatoonListItem_V2_C* FocusedPlatoon; // 0x320
	bool bCanCreateUnit; // 0x328
	bool bCanJoinUnit; // 0x329
	bool bCanBecomeCommander; // 0x32a
	bool bFocusedOnCreateButton; // 0x32b
	bool bPopupVisible; // 0x32c
	bool bLeaveUnitPopupVisible; // 0x32d
	bool bPlatoonFocused; // 0x32e
};

struct UBPW_DeployButton_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* WaitingAnim; // 0x238
	UWidgetAnimation* PressedAnim; // 0x240
	UButton* Btn_Deploy; // 0x248
	UImage* img_chevrons; // 0x250
	UImage* img_deploybg; // 0x258
	UTextBlock* txt_label; // 0x260
	FLinearColor ChevronColorDisabled; // 0x268
	FLinearColor ChevronColor; // 0x278
	FLinearColor ChevronColorHover; // 0x288
	bool IsHovered_2; // 0x298
	bool IsPressed; // 0x299
	bool IsDeploying; // 0x29a
	bool IsDisabled; // 0x29b
	FSlateColor TextColorDisabled; // 0x2a0
	FSlateColor TextColor; // 0x2c8
	FSlateColor TextColorHover; // 0x2f0
	FLinearColor BGColorDisabled; // 0x318
	FLinearColor BGColor; // 0x328
	FLinearColor BGColorHover; // 0x338
	FLinearColor BGColorDeploying; // 0x348
	FMulticastInlineDelegate Hovered; // 0x358
	FMulticastInlineDelegate Pressed; // 0x368
	FMulticastInlineDelegate Clicked; // 0x378
	FMulticastInlineDelegate Unhovered; // 0x388
	FMulticastInlineDelegate Disabled; // 0x398
	FMulticastInlineDelegate ClickedUndeploy; // 0x3a8
	FSlateColor CurrentTextColor; // 0x3b8
	FMulticastInlineDelegate ColorChange; // 0x3e0
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

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xc0
	int32_t SizeY; // 0xc4
	FLinearColor ClearColor; // 0xc8
	TextureAddress AddressX; // 0xd8
	TextureAddress AddressY; // 0xd9
	char bForceLinearGamma : 1; // 0xda
	char bHDR : 1; // 0xda
	char bGPUSharedFlag : 1; // 0xda
	ETextureRenderTargetFormat RenderTargetFormat; // 0xdb
	char bAutoGenerateMips : 1; // 0xdc
	TextureFilter MipsSamplerFilter; // 0xdd
	TextureAddress MipsAddressU; // 0xde
	TextureAddress MipsAddressV; // 0xdf
	EPixelFormat OverrideFormat; // 0xe0
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct AAudioVolume : AVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68
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

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x408
};

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UHLLUI_CreditsCategory_Department : UUserWidget {
	UTextBlock* TitleText; // 0x230
};

struct UArtyBarrelControllerComponent : UPitchYawControllerComponent {
	AHLLSeat_ArtilleryGunner* GunnerSeat; // 0x488
	AHLLSeat_ArtilleryLoader* LoaderSeat; // 0x490
	UCapsuleComponent* CharacterTurretGuard; // 0x498
	UAudioComponent* YawAudio; // 0x4a0
	UAudioComponent* PitchAudio; // 0x4a8
	UVibrationEventController* YawVibrationController; // 0x4b0
	UVibrationEventController* PitchVibrationController; // 0x4b8
};

struct UHLLReconDataComponent : UActorComponent {
	float DataExpireTime; // 0xb0
	FReconDataContainer AxisReconData; // 0xb8
	FReconDataContainer AlliedReconData; // 0x1d0
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UHLLProjectile : UDataAsset {
	ECollisionChannel SweepChannel; // 0x30
	float MaxFlightTime; // 0x34
	float ExpireVelocity; // 0x38
	UShooterDamageType* DamageType; // 0x40
	FRuntimeFloatCurve DamageCurve; // 0x48
	float DamageScale; // 0xd0
	float SuppressRadius; // 0xd4
	float SuppressScale; // 0xd8
	float SuppressFalloff; // 0xdc
	char bSuppressAllTeams : 1; // 0xe0
	float SuppressionSegmentLength; // 0xe4
	float SuppressionMinDist; // 0xe8
	char bFPPOnly : 1; // 0xec
	char bCanBeDisabledForFPP : 1; // 0xec
	UParticleSystem* ParticleTemplate; // 0xf0
	float ImpactEffectCullDistance; // 0xf8
	AShooterImpactEffect* ImpactTemplate; // 0x100
	USoundBase* FlybySound; // 0x108
	char bSeparateFlybySounds : 1; // 0x110
	USoundBase* FriendlyFlybySound; // 0x118
	float FlybyOffsetDistance; // 0x120
	float AttenuationRadiusOffset; // 0x124
	float MinInitialDist; // 0x128
	float FlybySkipAngle; // 0x12c
	float AttenuationCheckDistance; // 0x130
};

struct UShooterGameViewportClient : UGameViewportClient {
	bool bIsGamepad; // 0x3d0
};

struct ULightComponentBase : USceneComponent {
	FGuid LightGuid; // 0x1f0
	float Brightness; // 0x200
	float Intensity; // 0x204
	FColor LightColor; // 0x208
	char bAffectsWorld : 1; // 0x20c
	char CastShadows : 1; // 0x20c
	char CastStaticShadows : 1; // 0x20c
	char CastDynamicShadows : 1; // 0x20c
	char bAffectTranslucentLighting : 1; // 0x20c
	char bTransmission : 1; // 0x20c
	char bCastVolumetricShadow : 1; // 0x20c
	char bCastDeepShadow : 1; // 0x20c
	char bCastRaytracedShadow : 1; // 0x20d
	char bAffectReflection : 1; // 0x20d
	char bAffectGlobalIllumination : 1; // 0x20d
	float IndirectLightingIntensity; // 0x210
	float VolumetricScatteringIntensity; // 0x214
	int32_t SamplesPerPixel; // 0x218
};

struct AHLLAbilityDrop_Supplies : AHLLAbilityDrop_ParachuteBase {
	float DismantleTime; // 0x280
	FText DisplayName; // 0x288
	UHLLSupplyComponent* SupplyComponent; // 0x2a0
	UHLLIndicatorComponent* IndicatorComponent; // 0x2a8
	UHLLMapComponent* MapComponent; // 0x2b0
	UHLLSimpleHealthComponent* HealthComponent; // 0x2b8
	ETeam Team; // 0x2c0
	EHLLDamageFilterType DamageFilterType; // 0x2c1
	TWeakObjectPtr<AShooterPlayerState> DroppedBy; // 0x2c4
	AShooterImpactEffect* ImpactEffectClass; // 0x2d0
	float ImpactMinVeloc; // 0x2d8
	float MinTimeBetweenImpactFX; // 0x2dc
};

struct UInterpFilter : UObject {
	FString Caption; // 0x28
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UPlatoonListItem : UUserWidget {
	FMulticastInlineDelegate OnPlatoonMemberCountChange; // 0x248
	UTextBlock* PlatoonName; // 0x258
	UTextBlock* MemberCount; // 0x260
	UButton* WrapperButton; // 0x268
	UPanelWidget* PlatoonMembers; // 0x270
	UBorder* MainBorder; // 0x278
	UBorder* ButtonPanel; // 0x280
	UWidget* SpectatorIcon; // 0x288
	char bReadOnly : 1; // 0x290
	char bExpanded : 1; // 0x290
	AHLLPlatoon* Platoon; // 0x298
	UPlatoonMemberWidget* PlatoonMemberWidgetClass; // 0x2a0
};

struct UGraphNodeContextMenuContext : UObject {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct USpeakingPlayersList : UUserWidget {
	UImage* VOIPIndicator; // 0x230
	UVerticalBox* PlayersList; // 0x238
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct UHLLRadialMenu_Base : UUserWidget {
	UHLLRadialMenu_Separator* SeparatorClass; // 0x230
	float SelectionDeadzone; // 0x238
	char bLimitRadialSelection : 1; // 0x23c
	char bShowMouseWhenOpen : 1; // 0x23c
	float SelectionMaxRadiusInflation; // 0x240
	FSlateSound OpenedSound; // 0x248
	FSlateSound ClosedSound; // 0x260
	FSlateSound ClosedAndExecuteSuccessSound; // 0x278
	FSlateSound ClosedAndExecuteFailedSound; // 0x290
	TArray<UHLLRadialMenu_Segment*> Segments; // 0x2c0
	TArray<UHLLRadialMenu_Separator*> Separators; // 0x2d0
	char bIsShown : 1; // 0x2e0
	UOverlay* SegmentContainer; // 0x2e8
	UOverlay* SeparatorContainer; // 0x2f0
	UImage* Arrow; // 0x2f8
	UWidgetAnimation* ToggleAnimation; // 0x300
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x888
};

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct UHTP_Widget_Role_Loadout_Crewman_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_6; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_13; // 0x258
	UImage* icn_faction; // 0x260
	UImage* Image_10; // 0x268
	UImage* Image_17; // 0x270
};

struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
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

struct UHLLAimAssistSettingsDataAsset : UDataAsset {
	float AimAssistActiveFOVAngle; // 0x30
	float AimAssistActiveFOVAngleRadians; // 0x34
	float AimAssistActiveFOVAngleCosValue; // 0x38
	bool bActivateForUnprotectedVehicleOccupants; // 0x3c
	float LastRenderTimeThreshhold; // 0x40
	ECollisionChannel LineOfSightChannel; // 0x44
	TArray<FHLLAimAssistDistanceSettings> AimAssistDistanceSettings; // 0x48
};

struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct AVehicleDrop_Supplies : AActor {
	float DismantleTime; // 0x288
	FText DisplayName; // 0x290
	AShooterImpactEffect* ImpactFX; // 0x2a8
	UStaticMeshComponent* ObjectMesh; // 0x2b0
	UHLLSupplyComponent* SupplyComponent; // 0x2b8
	UHLLIndicatorComponent* IndicatorComponent; // 0x2c0
	UHLLMapComponent* MapComponent; // 0x2c8
	UHLLSimpleHealthComponent* HealthComponent; // 0x2d0
	ETeam Team; // 0x2d8
	EHLLDamageFilterType DamageFilterType; // 0x2d9
	AShooterPlayerState* SpawnedByPlayer; // 0x2e0
};

struct UPlayerManagementButtonBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* btn; // 0x238
	USizeBox* SB_ROOT; // 0x240
	UTextBlock* txt_btn_Label; // 0x248
	FText ButtonLabel; // 0x250
	FMulticastInlineDelegate Clicked; // 0x268
	bool CustomSize; // 0x278
	float Height; // 0x27c
	float Width; // 0x280
	bool Uppercase; // 0x284
	FSlateFontInfo Font; // 0x288
	FSlateColor FontColor; // 0x2d8
	FButtonStyle ButtonStyle; // 0x300
	FSlateColor FontColorHover; // 0x578
	FMulticastInlineDelegate Hovered; // 0x5a0
	FMulticastInlineDelegate Unhovered; // 0x5b0
	FButtonStyle FocusedButtonStyle; // 0x5c0
	bool bPressed; // 0x838
	bool bIsCreateUnitButton; // 0x839
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

struct APlayerPawn_Anim_V2_C : AShooterCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1040
	float DiveTimeline_DiveDelta_9586E2BB49623B7A2A5585A9243F3A2C; // 0x1048
	ETimelineDirection DiveTimeline__Direction_9586E2BB49623B7A2A5585A9243F3A2C; // 0x104c
	UTimelineComponent* DiveTimeline; // 0x1050
	FVector SavedPos; // 0x1058
};

struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; // 0x1f0
	char bSupportsDepth : 1; // 0x1f0
	char bNoAlphaChannel : 1; // 0x1f0
	UTexture* Texture; // 0x1f8
	UTexture* LeftTexture; // 0x200
	char bQuadPreserveTextureRatio : 1; // 0x208
	FVector2D QuadSize; // 0x20c
	FBox2D UVRect; // 0x214
	float CylinderRadius; // 0x228
	float CylinderOverlayArc; // 0x22c
	int32_t CylinderHeight; // 0x230
	FEquirectProps EquirectProps; // 0x234
	EStereoLayerType StereoLayerType; // 0x27c
	EStereoLayerShape StereoLayerShape; // 0x27d
	UStereoLayerShape* Shape; // 0x280
	int32_t Priority; // 0x288
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe0
	int32_t ChannelsUsed; // 0x360
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct AHLLAudioVolume : AAudioVolume {
	char bAutoRegisterVolume : 1; // 0x2a8
	EAudioVolumeType VolumeType; // 0x2a9
};

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraAnimPlaySpace PlaySpace; // 0x78
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x340
	bool bParentContextsAreSignificant; // 0x341
	bool bPlayableDirectly; // 0x342
};

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UWGT_UseContext_Dismantle_C : UHLLUseContext_DismantleItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct USoundBase : UObject {
	USoundClass* SoundClassObject; // 0x28
	char bDebug : 1; // 0x30
	char bOverrideConcurrency : 1; // 0x30
	char bOutputToBusOnly : 1; // 0x30
	char bHasDelayNode : 1; // 0x30
	char bHasConcatenatorNode : 1; // 0x30
	char bBypassVolumeScaleForPriority : 1; // 0x30
	EVirtualizationMode VirtualizationMode; // 0x31
	TSet<USoundConcurrency*> ConcurrencySet; // 0x88
	FSoundConcurrencySettings ConcurrencyOverrides; // 0xd8
	float Duration; // 0xf8
	float MaxDistance; // 0xfc
	float TotalSamples; // 0x100
	float Priority; // 0x104
	USoundAttenuation* AttenuationSettings; // 0x108
	FSoundModulation Modulation; // 0x110
	USoundSubmixBase* SoundSubmixObject; // 0x120
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x128
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x138
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x140
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x150
};

struct UHLLMapTooltip_Marker : UHLLTooltipBase {
	UScaleBox* MapIconScaleBox; // 0x260
	UTextBlock* TooltipName; // 0x268
	UTextBlock* PlacedInfo; // 0x270
	UTextBlock* Description; // 0x278
	UTextBlock* VisibilityInfo; // 0x280
	UTextBlock* TooltipDistance; // 0x288
	UTextBlock* Countdown; // 0x290
	UTextBlock* ClickToRemove; // 0x298
	UImage* TooltipIcon; // 0x2a0
};

struct UImage : UWidget {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UABP_MG42_FPP_V2_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FAnimNode_Root AnimGraphNode_Root; // 0x278
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2a8
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x3b0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x3f8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x440
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x508
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x610
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x638
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x660
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x688
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x6b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6d8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x750
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x780
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x828
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x8a0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x8d0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x918
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x948
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa18
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa38
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xaf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xbb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xbd8
	FAnimNode_Slot AnimGraphNode_Slot; // 0xc00
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xc48
	float BulletScale; // 0xd50
	bool IsDeployed; // 0xd54
	bool IsUnfolded; // 0xd55
	bool IsBraced; // 0xd56
	FRotator BipodRotation; // 0xd58
	float BipodResult; // 0xd64
	UABP_Rifleman_FPP_V2_C* FPPInstance; // 0xd68
	UABP_Rifleman_TPP_V2_C* TPPInstance; // 0xd70
	AShooterCharacter* ShooterCharacter; // 0xd78
	AShooterWeapon* ShooterWeapon; // 0xd80
	float TransitionSpeed; // 0xd88
	ECharacterStance Stance; // 0xd8c
	bool IsEmpty; // 0xd8d
};

struct AHLLAbility_SpawnVehicle : AHLLCommanderAbility_Placeable {
	AActor* VehicleClass; // 0x370
	char bLimitTotalCountPerTeam : 1; // 0x378
	char MaxTotalCountPerTeam; // 0x379
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UHTP_Widget_Role_Loadout_Medic_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_2; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_3; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_5; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_6; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x268
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_5; // 0x270
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_12; // 0x278
	UImage* icn_faction; // 0x280
	UImage* Image_10; // 0x288
	UImage* Image_17; // 0x290
};

struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
};

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x3]; // 0x28
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UHLLComboBox : UWidget {
	FComboBoxStyle WidgetStyle; // 0x120
	FTableRowStyle ItemStyle; // 0x510
	FMargin ContentPadding; // 0xcd8
	float MaxListHeight; // 0xce8
	FSlateFontInfo Font; // 0xcf0
	FSlateColor ForegroundColor; // 0xd40
	bool bIsFocusable; // 0xd68
};

struct UHLLDial_Tachometer : UHLLDialCommon {
	UTextBlock* GearText; // 0x258
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x350
	bool bLegacyFinishOnStop; // 0x360
	FString DisplayLabel; // 0x368
};

struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct USkeletalMeshLODSettings : UDataAsset {
	FPerPlatformInt MinLOD; // 0x30
	FPerPlatformBool DisableBelowMinLodStripping; // 0x34
	FPerPlatformBool bSupportLODStreaming; // 0x35
	FPerPlatformInt MaxNumStreamedLODs; // 0x38
	FPerPlatformInt MaxNumOptionalLODs; // 0x3c
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40
};

struct UMapChangeMenu_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* FadeIn; // 0x238
	UWidgetAnimation* FadeOut; // 0x240
	UWGT_GameMenuItem_C* BackFromMapSelect; // 0x248
	UImage* Image_70; // 0x250
	UUniformGridPanel* mapButtonContainer; // 0x258
	UButton* StartVoteButton; // 0x260
	UOverlay* voteStartOverlay; // 0x268
	UWidgetSwitcher* WidgetSwitcher_1; // 0x270
	int32_t buttonDisplayIndex; // 0x278
	TArray<UWGT_MapSelectButton_V2_C*> mapSelectWidgets; // 0x280
	FString TargetMap; // 0x290
	FMulticastInlineDelegate OnClosed; // 0x2a0
	FMulticastInlineDelegate OnVoteStarted; // 0x2b0
	int32_t RowNumber; // 0x2c0
	int32_t ColNumber; // 0x2c4
	int32_t MaxRows; // 0x2c8
	float DelayTimer; // 0x2cc
	FMulticastInlineDelegate PopulateList; // 0x2d0
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UBodySetup : UObject {
	FKAggregateGeom AggGeom; // 0x28
	FName BoneName; // 0x80
	EPhysicsType PhysicsType; // 0x88
	char bAlwaysFullAnimWeight : 1; // 0x89
	char bConsiderForBounds : 1; // 0x89
	char bMeshCollideAll : 1; // 0x89
	char bDoubleSidedGeometry : 1; // 0x89
	char bGenerateNonMirroredCollision : 1; // 0x89
	char bSharedCookedData : 1; // 0x89
	char bGenerateMirroredCollision : 1; // 0x89
	char bSupportUVsAndFaceRemap : 1; // 0x89
	EBodyCollisionResponse CollisionReponse; // 0x8b
	ECollisionTraceFlag CollisionTraceFlag; // 0x8c
	UPhysicalMaterial* PhysMaterial; // 0x90
	FWalkableSlopeOverride WalkableSlopeOverride; // 0x98
	FBodyInstance DefaultInstance; // 0x120
	FVector BuildScale3D; // 0x258
};

struct AHLLDispenserItem_StructureBase : AHLLDispenserItem_Base {
	int32_t SuppliesCost; // 0x470
	bool bDifferentCostInNonFriendlySector; // 0x474
	int32_t NonFriendlySectorSuppliesCost; // 0x478
};

struct UbtnSimple_V2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UButton* btn; // 0x238
	USizeBox* SB_ROOT; // 0x240
	UTextBlock* txt_btn_Label; // 0x248
	FText ButtonLabel; // 0x250
	FMulticastInlineDelegate Clicked; // 0x268
	bool CustomSize; // 0x278
	float Height; // 0x27c
	float Width; // 0x280
	bool Uppercase; // 0x284
	FSlateFontInfo Font; // 0x288
	FSlateColor FontColor; // 0x2d8
	FButtonStyle ButtonStyle; // 0x300
	FSlateColor FontColorHover; // 0x578
	FMulticastInlineDelegate Hovered; // 0x5a0
	FMulticastInlineDelegate Unhovered; // 0x5b0
	FButtonStyle FocusedButtonStyle; // 0x5c0
	bool bPressed; // 0x838
	bool bIsCreateUnitButton; // 0x839
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct AMapData_Sector_C : AHLLMapData_Sector {
	USceneComponent* DefaultSceneRoot; // 0x240
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x258
};

struct UMenuAnchor : UContentWidget {
	UUserWidget* MenuClass; // 0x120
	FDelegate OnGetMenuContentEvent; // 0x128
	EMenuPlacement Placement; // 0x138
	bool bFitInWindow; // 0x139
	bool ShouldDeferPaintingAfterWindowContent; // 0x13a
	bool UseApplicationMenuStack; // 0x13b
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x140
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
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

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UPlatoonMemberWidget : UUserWidget {
	UImage* PlatformIcon; // 0x230
	UWidget* PlatformIconContainer; // 0x238
	UBorder* Colouriser; // 0x240
	UTextBlock* RoleGlyph; // 0x248
	UTextBlock* PlayerName; // 0x250
	UTextBlock* PlayerClan; // 0x258
	UButton* Kick; // 0x260
	AShooterPlayerState* PlatoonMemberPlayerState; // 0x268
};

struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct UHLLBallisticsManager : UWorldSubsystem {
	TArray<UHLLBallisticsComponent*> BallisticComponents; // 0x48
	TArray<UHLLProjectile*> ProjectileClasses; // 0x58
	AHLLBallisticsDebugger* Debugger; // 0x68
	FBallisticsTickFunction BallisticsTickFunction; // 0x70
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x50
	FExpressionInput TextureObject; // 0x64
	FExpressionInput MipValue; // 0x78
	FExpressionInput CoordinatesDX; // 0x8c
	FExpressionInput CoordinatesDY; // 0xa0
	FExpressionInput AutomaticViewMipBiasValue; // 0xb4
	ETextureMipValueMode MipValueMode; // 0xc8
	ESamplerSourceMode SamplerSource; // 0xc9
	char AutomaticViewMipBias : 1; // 0xca
	char ConstCoordinate; // 0xcb
	int32_t ConstMipValue; // 0xcc
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UUserDefinedStruct : UScriptStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct USkeletalMeshComponent : USkinnedMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x650
	UAnimInstance* AnimClass; // 0x658
	UAnimInstance* AnimScriptInstance; // 0x660
	UAnimInstance* PostProcessAnimInstance; // 0x668
	FSingleAnimationPlayData AnimationData; // 0x670
	FVector RootBoneTranslation; // 0x698
	FVector LineCheckBoundsScale; // 0x6a4
	TArray<UAnimInstance*> LinkedInstances; // 0x6d0
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x6e0
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x6f0
	float GlobalAnimRateScale; // 0x720
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x724
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x725
	EAnimationMode AnimationMode; // 0x727
	char bDisablePostProcessBlueprint : 1; // 0x729
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x729
	char bHasValidBodies : 1; // 0x729
	char bBlendPhysics : 1; // 0x729
	char bEnablePhysicsOnDedicatedServer : 1; // 0x729
	char bUpdateJointsFromAnimation : 1; // 0x72a
	char bDisableClothSimulation : 1; // 0x72a
	char bDisableRigidBodyAnimNode : 1; // 0x72a
	char bAllowAnimCurveEvaluation : 1; // 0x72a
	char bDisableAnimCurves : 1; // 0x72a
	char bCollideWithEnvironment : 1; // 0x72b
	char bCollideWithAttachedChildren : 1; // 0x72b
	char bLocalSpaceSimulation : 1; // 0x72b
	char bResetAfterTeleport : 1; // 0x72b
	char bDeferKinematicBoneUpdate : 1; // 0x72b
	char bNoSkeletonUpdate : 1; // 0x72b
	char bPauseAnims : 1; // 0x72b
	char bUseRefPoseOnInitAnim : 1; // 0x72c
	char bEnablePerPolyCollision : 1; // 0x72c
	char bForceRefpose : 1; // 0x72c
	char bOnlyAllowAutonomousTickPose : 1; // 0x72c
	char bIsAutonomousTickPose : 1; // 0x72c
	char bOldForceRefPose : 1; // 0x72c
	char bShowPrePhysBones : 1; // 0x72c
	char bRequiredBonesUpToDate : 1; // 0x72c
	char bAnimTreeInitialised : 1; // 0x72d
	char bIncludeComponentLocationIntoBounds : 1; // 0x72d
	char bEnableLineCheckWithBounds : 1; // 0x72d
	char bUseBendingElements : 1; // 0x72d
	char bUseTetrahedralConstraints : 1; // 0x72d
	char bUseThinShellVolumeConstraints : 1; // 0x72d
	char bUseSelfCollisions : 1; // 0x72d
	char bUseContinuousCollisionDetection : 1; // 0x72d
	char bPropagateCurvesToSlaves : 1; // 0x72e
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x72e
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x72e
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x72e
	uint16_t CachedAnimCurveUidVersion; // 0x730
	EClothMassMode MassMode; // 0x732
	float UniformMass; // 0x734
	float TotalMass; // 0x738
	float Density; // 0x73c
	float MinPerParticleMass; // 0x740
	float ClothBlendWeight; // 0x744
	float EdgeStiffness; // 0x748
	float BendingStiffness; // 0x74c
	float AreaStiffness; // 0x750
	float VolumeStiffness; // 0x754
	float StrainLimitingStiffness; // 0x758
	float ShapeTargetStiffness; // 0x75c
	TArray<FName> DisallowedAnimCurves; // 0x760
	UBodySetup* BodySetup; // 0x770
	FMulticastInlineDelegate OnConstraintBroken; // 0x780
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x790
	float TeleportDistanceThreshold; // 0x868
	float TeleportRotationThreshold; // 0x86c
	uint32_t LastPoseTickFrame; // 0x878
	UClothingSimulationInteractor* ClothingInteractor; // 0x8d0
	FMulticastInlineDelegate OnAnimInitialized; // 0x9a0
};

struct UHLLDispenserListItem_StructureBase : UHLLDispenserListItem {
	UTextBlock* ItemCost; // 0x250
};

struct UVehicleHitComponent : UActorComponent {
	UDamageType* DamageType; // 0xb0
	float DirectionThreshold; // 0xb8
	float MinDamagingSpeedKPH; // 0xbc
	TArray<UPrimitiveComponent*> Colliders; // 0xc0
	float PostRemoveIgnoreTime; // 0xd0
	TMap<uint32_t, FTimerHandle> CollisionIgnoreList; // 0xd8
};

struct USpacer : UWidget {
	FVector2D Size; // 0x108
};

struct UWGT_RoundSummaryPlatoon_C : UHLLRoundSummaryPlatoon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UBorder* Border_2; // 0x298
	UButton* ExpandButton; // 0x2a0
	UImage* underline; // 0x2a8
	bool bAnyFocused; // 0x2b0
	UWGT_RoundSummaryDetails_V2_C* Scoreboard; // 0x2b8
	bool bIsInFocusPath; // 0x2c0
	FLinearColor HilightColour; // 0x2c4
};

struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xde0
	float ServerFlushLogInterval; // 0xde4
	UGameInstance* GameInstance; // 0xde8
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

struct UIngameCompass : UUserWidget {
	USectorCompassIndicator* SectorIndicatorClass; // 0x238
	TArray<UBaseCompassIndicator*> ActiveIndicators; // 0x240
	UCanvasPanel* IconPanel; // 0x250
	UImage* CompassImage; // 0x258
	UTextBlock* DialValue; // 0x260
};

struct UHLLVehicleForceFeedbackData : UHLLVehicleVibrationData {
	TArray<FHLLVehicleForceFeedbackEvent> Events; // 0x38
};

struct USeatCameraController : UActorComponent {
	float PitchMin; // 0xc0
	float PitchMax; // 0xc4
	float PitchRate; // 0xc8
	char bLimitYaw : 1; // 0xcc
	float YawMin; // 0xd0
	float YawMax; // 0xd4
	float YawRate; // 0xd8
};

struct UBPW_PlatoonListItem_V2_C : UPlatoonListItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	UWidgetAnimation* Expand; // 0x2b0
	UButton* Artillery; // 0x2b8
	UWidgetSwitcher* ButtonSwitcher; // 0x2c0
	UButton* Clear; // 0x2c8
	UButton* Defensive; // 0x2d0
	UHorizontalBox* HBox_UnitDesignationSelection; // 0x2d8
	UButton* Invite; // 0x2e0
	UBPW_HoverTintedImageButton_V2_C* JoinButton; // 0x2e8
	UBPW_HoverTintedImageButton_V2_C* LeaveButton; // 0x2f0
	UCheckBox* LockChecker; // 0x2f8
	UButton* Logistics; // 0x300
	UCheckBox* MicChecker; // 0x308
	UButton* Offensive; // 0x310
	UHorizontalBox* UnitDesignationContainer; // 0x318
	UWGT_UnitDesignationButton_C* UnitDesignationExpander; // 0x320
	UW_HoverToolTip_C* TooltipWidgetRef; // 0x328
	bool bUnitDesExpanded; // 0x330
	FCheckBoxStyle CheckerStyle; // 0x338
	FCheckBoxStyle InvertedCheckerStyle; // 0x8b8
	UDeploymentScreen_V2_C* DeploymentScreen; // 0xe38
	UBPW_PlatoonList_V2_C* ParentPlatoonList; // 0xe40
};

struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x1f8
	float LDMaxDrawDistance; // 0x1fc
	float CachedMaxDrawDistance; // 0x200
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x204
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x205
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x206
	ELightmapType LightmapType; // 0x207
	char bUseMaxLODAsImposter : 1; // 0x208
	char bBatchImpostersAsInstances : 1; // 0x208
	char bNeverDistanceCull : 1; // 0x208
	char bAlwaysCreatePhysicsState : 1; // 0x208
	char bGenerateOverlapEvents : 1; // 0x209
	char bMultiBodyOverlap : 1; // 0x209
	char bTraceComplexOnMove : 1; // 0x209
	char bReturnMaterialOnMove : 1; // 0x209
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x209
	char bAllowCullDistanceVolume : 1; // 0x209
	char bHasMotionBlurVelocityMeshes : 1; // 0x209
	char bVisibleInReflectionCaptures : 1; // 0x209
	char bVisibleInRayTracing : 1; // 0x20a
	char bRenderInMainPass : 1; // 0x20a
	char bRenderInDepthPass : 1; // 0x20a
	char bReceivesDecals : 1; // 0x20a
	char bOwnerNoSee : 1; // 0x20a
	char bOnlyOwnerSee : 1; // 0x20a
	char bTreatAsBackgroundForOcclusion : 1; // 0x20a
	char bUseAsOccluder : 1; // 0x20a
	char bSelectable : 1; // 0x20b
	char bForceMipStreaming : 1; // 0x20b
	char bHasPerInstanceHitProxies : 1; // 0x20b
	char CastShadow : 1; // 0x20b
	char bAffectDynamicIndirectLighting : 1; // 0x20b
	char bAffectDistanceFieldLighting : 1; // 0x20b
	char bCastDynamicShadow : 1; // 0x20b
	char bCastStaticShadow : 1; // 0x20b
	char bCastVolumetricTranslucentShadow : 1; // 0x20c
	char bSelfShadowOnly : 1; // 0x20c
	char bCastFarShadow : 1; // 0x20c
	char bCastInsetShadow : 1; // 0x20c
	char bCastCinematicShadow : 1; // 0x20c
	char bCastHiddenShadow : 1; // 0x20c
	char bCastShadowAsTwoSided : 1; // 0x20c
	float PerObjectShadowRadiusThresholdScale; // 0x210
	char bLightAsIfStatic : 1; // 0x214
	char bLightAttachmentsAsGroup : 1; // 0x214
	char bExcludeFromLightAttachmentGroup : 1; // 0x214
	char bReceiveMobileCSMShadows : 1; // 0x214
	char bSingleSampleShadowFromStationaryLights : 1; // 0x214
	char bIgnoreRadialImpulse : 1; // 0x214
	char bIgnoreRadialForce : 1; // 0x214
	char bApplyImpulseOnDamage : 1; // 0x214
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x215
	char bFillCollisionUnderneathForNavmesh : 1; // 0x215
	char AlwaysLoadOnClient : 1; // 0x215
	char AlwaysLoadOnServer : 1; // 0x215
	char bUseEditorCompositing : 1; // 0x215
	char bRenderCustomDepth : 1; // 0x215
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x216
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x218
	FLightingChannels LightingChannels; // 0x219
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x21a
	int32_t CustomDepthStencilValue; // 0x21c
	FCustomPrimitiveData CustomPrimitiveData; // 0x220
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x230
	int32_t TranslucencySortPriority; // 0x240
	int32_t VisibilityId; // 0x244
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x248
	int8_t VirtualTextureLodBias; // 0x258
	int8_t VirtualTextureCullMips; // 0x259
	int8_t VirtualTextureMinCoverage; // 0x25a
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x25b
	float LpvBiasMultiplier; // 0x260
	float BoundsScale; // 0x26c
	TArray<AActor*> MoveIgnoreActors; // 0x280
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x290
	FBodyInstance BodyInstance; // 0x2b0
	FMulticastSparseDelegate OnComponentHit; // 0x3e0
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x3e1
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x3e2
	FMulticastSparseDelegate OnComponentWake; // 0x3e3
	FMulticastSparseDelegate OnComponentSleep; // 0x3e4
	FMulticastSparseDelegate OnBeginCursorOver; // 0x3e6
	FMulticastSparseDelegate OnEndCursorOver; // 0x3e7
	FMulticastSparseDelegate OnClicked; // 0x3e8
	FMulticastSparseDelegate OnReleased; // 0x3e9
	FMulticastSparseDelegate OnInputTouchBegin; // 0x3ea
	FMulticastSparseDelegate OnInputTouchEnd; // 0x3eb
	FMulticastSparseDelegate OnInputTouchEnter; // 0x3ec
	FMulticastSparseDelegate OnInputTouchLeave; // 0x3ed
	UPrimitiveComponent* LODParentPrimitive; // 0x408
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
};

struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
};

struct ASdKfz251Halftrack : ABaseHalftrack {
	USuspensionsComponent* Suspension; // 0x550
	UHalftrackWheelsComponent* HalftrackWheels; // 0x558
	UTracksComponent* Tracks; // 0x560
};

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UHTP_Widget_Role_Loadout_Spotter_C : UUserWidget {
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_3; // 0x230
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_4; // 0x238
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_5; // 0x240
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_8; // 0x248
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_9; // 0x250
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Item_C_10; // 0x258
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary; // 0x260
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_3; // 0x268
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_4; // 0x270
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_16; // 0x278
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_17; // 0x280
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_5; // 0x288
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_11; // 0x290
	UHTP_Widget_Role_Loadout_Item_C* HTP_Widget_Role_Loadout_Primary_C_12; // 0x298
	UImage* icn_faction; // 0x2a0
	UImage* Image_10; // 0x2a8
	UImage* Image_17; // 0x2b0
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
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

struct UHLLGunnerUI_Howitzer : UHLLSeatWidgetBase {
	int32_t NumRangeEntries; // 0x270
	UHLLGunnerUI_HowitzerRangeItem* ItemClass; // 0x278
	TArray<UHLLGunnerUI_HowitzerRangeItem*> ItemList; // 0x280
	UVerticalBox* RangeVBox; // 0x290
	UHLLArmourWeaponUI* ArtilleryWeaponInfo; // 0x298
	UTextBlock* TraverseValue; // 0x2a0
	UTextBlock* ElevationValue; // 0x2a8
};

struct UHLLResourceGenerator : UActorComponent {
	ESectorResourceType ResourceType; // 0xb0
	int32_t GenerationAmount; // 0xb4
	FName GenerationActionScore; // 0xb8
	int32_t CachedSectorDistance; // 0xc0
};

struct UHLLDial_Speedometer : UHLLDialCommon {
	UTextBlock* DigitL; // 0x258
	UTextBlock* DigitR; // 0x260
};

struct UWGT_UseContext_MountMG_C : UHLLUseContext_MountWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
};

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0xc0
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct UTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	FDelegate TextDelegate; // 0x140
	FSlateColor ColorAndOpacity; // 0x150
	FDelegate ColorAndOpacityDelegate; // 0x178
	FSlateFontInfo Font; // 0x188
	FSlateBrush StrikeBrush; // 0x1d8
	FVector2D ShadowOffset; // 0x260
	FLinearColor ShadowColorAndOpacity; // 0x268
	FDelegate ShadowColorAndOpacityDelegate; // 0x278
	float MinDesiredWidth; // 0x288
	bool bWrapWithInvalidationPanel; // 0x28c
	bool bAutoWrapText; // 0x28d
	bool bSimpleTextMode; // 0x28e
};

struct UHLLRoundSummary : UUserWidget {
	EMatchFinaleState FinaleState; // 0x230
	FHLLMatchEndInfo CachedMatchInfo; // 0x234
	UWidgetAnimation* Anim_InitialMatchEnd; // 0x248
	UWidgetAnimation* Anim_SwitchPage; // 0x250
	UWidgetAnimation* Anim_MatchTimerOvertimeLoop; // 0x258
	UTextBlock* WinTeamText; // 0x268
	UTextBlock* WinStateText; // 0x270
	UTextBlock* MatchTimeText; // 0x278
	UImage* WinTeamBackground; // 0x280
	UHLLRoundSummaryTeam* LeftTeam; // 0x288
	UHLLRoundSummaryTeam* RightTeam; // 0x290
	UWidgetSwitcher* ContentSwitcher; // 0x298
	UNamedSlot* ScoreboardSlot; // 0x2a0
	UHLLRoundSummaryDetails* Scoreboard; // 0x2a8
	UHLLRoundSummaryProgression* ProgressionClass; // 0x2b0
	UNamedSlot* ProgressionSlot; // 0x2b8
	UHLLRoundSummaryProgression* Progression; // 0x2c0
	USoundMix* MusicDuckMix; // 0x2c8
	UTextBlock* ServerNameText; // 0x2d0
	UTextBlock* ModeAndMapText; // 0x2d8
	TWeakObjectPtr<UAudioComponent> MatchEndAC; // 0x2e0
};

struct UBoatSpawnComponent : UActorComponent {
	AInfantryCarrierBoat* InfantryCarrierBoatClass; // 0xb0
	float SpawnInterval; // 0xb8
	float FirstWaveDelay; // 0xbc
	float DockedDuration; // 0xc0
	float DeployedPlayerTravelDuration; // 0xc4
	float BoatTravelSpeedKnots; // 0xc8
	int32_t MaxPlayersPerBoat; // 0xcc
	int32_t PreferredPlayersPerBoat; // 0xd0
	int32_t SpawnGroup; // 0xd4
	TArray<ABoatSpawnPath*> Paths; // 0xd8
	float NextWaveTime; // 0xe8
	TArray<ABoatSpawnPath*> NotAllocatedPaths; // 0x100
	TMap<AActor*, ABoatSpawnPath*> AllocatedPaths; // 0x110
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f0
	float Speed; // 0x1f4
	float MinGustAmount; // 0x1f8
	float MaxGustAmount; // 0x1fc
	float Radius; // 0x200
	char bPointWind : 1; // 0x204
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct USoundPlayedOnlyWhileAnimationRuns : UAnimNotifyState {
	USoundBase* Sound; // 0x30
	float VolumeMultiplier; // 0x38
	float PitchMultiplier; // 0x3c
	char bFollow : 1; // 0x40
	FName AttachName; // 0x44
	UAudioComponent* PlayingSound; // 0x50
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UHLLRoundSummaryPlatoon : UUserWidget {
	UVerticalBox* PlayerVBox; // 0x238
	UTextBlock* PlatoonName; // 0x240
	UImage* ExpandIcon; // 0x248
	UImage* DesignationIcon; // 0x250
	UTextBlock* TeamCombatValue; // 0x258
	UTextBlock* TeamOffenseValue; // 0x260
	UTextBlock* TeamDefenseValue; // 0x268
	UTextBlock* TeamSupportValue; // 0x270
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x568
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
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

struct UDeathScreen_V2_C : UHLLDeathScreen {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UImage* MarkerRight; // 0x2c0
	URetainerBox* RetainerBox_1; // 0x2c8
	URichTextBlock* RTxt_DeployText; // 0x2d0
	bool bUseGamepadText; // 0x2d8
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x188
	bool bHandlingDisconnect; // 0x189
};

struct UBPW_PlatoonMember_C : UPlatoonMemberWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	UBorder* Border_1; // 0x278
	UImage* icn_x; // 0x280
	UImage* Image_1; // 0x288
	UW_HoverToolTip_Explained_C* WidgetTooltip; // 0x290
	UDeploymentScreen_V2_C* DeploymentScreen; // 0x298
};

struct UHLLRoundSummaryProgression : UUserWidget {
	UHLLXPItem* XPItemClass; // 0x230
	TArray<UHLLXPItem*> XPItems; // 0x238
	UHLLRoleProgressionItem* RoleProgressionClass; // 0x248
	TArray<UHLLRoleProgressionItem*> RoleProgressionItems; // 0x250
	int32_t MaxRoleItemCols; // 0x260
	FSlateSound PromotedSound; // 0x268
	FSlateSound PrestigeSound; // 0x280
	FSlateSound ItemCountSound; // 0x298
	FSlateSound ItemFinishedSound; // 0x2b0
	FSlateSound FinishedCountingSound; // 0x2c8
	UWidgetAnimation* Anim_Initial; // 0x2e0
	UWidgetAnimation* Anim_Promoted; // 0x2e8
	UWidgetAnimation* Anim_Prestige; // 0x2f0
	UWidgetAnimation* Anim_XPComplete; // 0x2f8
	FHLLMatchProgressionInfo CachedMatchEndInfo; // 0x300
	float TimePerItem; // 0x340
	float ItemInterpSpeed; // 0x344
	float DelayBetweenXPItems; // 0x348
	float DelayBetweenRoleItems; // 0x34c
	float DelayAfterCompletion; // 0x350
	UImage* RadialInitial; // 0x358
	UImage* RadialNew; // 0x360
	UImage* RankIcon; // 0x368
	UVerticalBox* XPItemContainer; // 0x370
	UTextBlock* LevelText; // 0x378
	UTextBlock* XPValue_Total; // 0x380
	UUniformGridPanel* RoleXPContainer; // 0x388
	TWeakObjectPtr<UAudioComponent> CounterLoopingAC; // 0x390
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

struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28
};

struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct UHLLMapIcon_Sector : UHLLMapIconBase {
	UTextBlock* SectorName; // 0x368
	FDisplayedSectorState SectorStateInfo; // 0x370
};

struct AShooterWeapon_Hammer : AShooterWeapon {
	float UpgradeRange; // 0x8b8
	float Timer; // 0x8bc
	int32_t UpgradePerTimer; // 0x8c0
	TWeakObjectPtr<AActor> CurrentUpgradeTarget; // 0x8c4
	char TierWhenStarted; // 0x8cc
};

struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xc8
	TArray<UDataTable*> OldParentTables; // 0xd8
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

struct AVehicleSeatBase : AHLLSeat {
	char bOnlyAllowSameUnitMembers : 1; // 0x970
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

struct UHLLCosmeticManager : UObject {
	FMulticastInlineDelegate CheckCosmeticsDelegate; // 0x128
};

struct UWGT_MapIcon_Airhead_C : UHLLMapIcon_Garrison {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
	UBorder* Icon; // 0x4b0
	UScaleBox* Scaler; // 0x4b8
	UW_HoverToolTip_Explained_C* Widget_TooltipRef; // 0x4c0
};

struct UWGT_ReplenishAmmoCooldownNotification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UWidgetAnimation* Pulse; // 0x238
	UWidgetAnimation* Rotate; // 0x240
	UWidgetAnimation* FadeInOut; // 0x248
	UImage* BG; // 0x250
	UImage* Icon; // 0x258
	UOverlay* Overlay; // 0x260
	UImage* Rotator; // 0x268
	FSlateBrush Image; // 0x270
	bool bForSupplies; // 0x2f8
};

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
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

struct AHLLTurnBackVolume : AVolume {
	int32_t AffectedTeams; // 0x258
};

struct UPlayerRoleSelection : UUserWidget {
	FMulticastInlineDelegate OnPlayerRoleSelected; // 0x230
	UAvailableRole* AvailableRoleWidgetClass; // 0x240
	UVerticalBox* AvailableRolesList; // 0x248
	UButton* SelectButton; // 0x250
	UButton* CancelButton; // 0x258
	TArray<UAvailableRole*> m_availableRoles; // 0x260
	TArray<UAvailableRole*> m_availableRoles2; // 0x270
};

struct UGameplayMessages_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UVerticalBox* MessageList; // 0x238
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

