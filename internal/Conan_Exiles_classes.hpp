// Created by BlueFire1337
// Updated 2021-12-08
// Generated 2022-01-23

namespace off {
	constexpr auto GNames = 0x660f0d0;
	constexpr auto GObjects = 0x6617630;
	constexpr auto GWorld = 0x670f290;
}

struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	UNavArea* Agent0Area; // 0x40
	UNavArea* Agent1Area; // 0x48
	UNavArea* Agent2Area; // 0x50
	UNavArea* Agent3Area; // 0x58
	UNavArea* Agent4Area; // 0x60
	UNavArea* Agent5Area; // 0x68
	UNavArea* Agent6Area; // 0x70
	UNavArea* Agent7Area; // 0x78
	UNavArea* Agent8Area; // 0x80
	UNavArea* Agent9Area; // 0x88
	UNavArea* Agent10Area; // 0x90
	UNavArea* Agent11Area; // 0x98
	UNavArea* Agent12Area; // 0xa0
	UNavArea* Agent13Area; // 0xa8
	UNavArea* Agent14Area; // 0xb0
	UNavArea* Agent15Area; // 0xb8
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x8d0
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct ULeaderboardQueryCallbackProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x120
};

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct AArchVisCharacter : ACharacter {
	FString LookUpAxisName; // 0x7f0
	FString LookUpAtRateAxisName; // 0x800
	FString TurnAxisName; // 0x810
	FString TurnAtRateAxisName; // 0x820
	FString MoveForwardAxisName; // 0x830
	FString MoveRightAxisName; // 0x840
	float MouseSensitivityScale_Pitch; // 0x850
	float MouseSensitivityScale_Yaw; // 0x854
};

struct USlateDataSheet : UObject {
	UTexture2D* DataTexture; // 0x28
};

struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	FName AttachSocketName; // 0xd8
	FName AttachComponentName; // 0xe0
	char bConstrainTx : 1; // 0xe8
	char bConstrainTy : 1; // 0xe8
	char bConstrainTz : 1; // 0xe8
	char bConstrainRx : 1; // 0xe8
	char bConstrainRy : 1; // 0xe8
	char bConstrainRz : 1; // 0xe8
};

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x110
	UGraniteTexture* GraniteTexture; // 0x118
};

struct UMovieSceneNameableTrack : UMovieSceneTrack {
	FMovieSceneTrackEvalOptions EvalOptions; // 0xb0
};

struct UConanBehaviorTreeComponent : UBehaviorTreeComponent {
	TArray<UBTNode*> NodeInstances; // 0x178
};

struct ULoadGuildsCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UFeatResultRecipeInfoView : URootWidget {
	URecipeItem* m_Item; // 0x318
};

struct ANavigationData : AActor {
	UPrimitiveComponent* RenderingComp; // 0x3d0
	FNavDataConfig NavDataConfig; // 0x3d8
	char bEnableDrawing : 1; // 0x428
	char bForceRebuildOnLoad : 1; // 0x428
	char bCanBeMainNavData : 1; // 0x428
	char bCanSpawnOnRebuild : 1; // 0x428
	char bRebuildAtRuntime : 1; // 0x428
	ERuntimeGenerationType RuntimeGeneration; // 0x42c
	float ObservedPathsTickInterval; // 0x430
	uint32_t DataVersion; // 0x434
	TArray<FSupportedAreaData> SupportedAreas; // 0x508
};

struct UConanAdaptiveSystemComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UW_RatingWidget_C : URatingWidgetBase {
	ERatingCategory RatingCategory; // 0x338
	bool CanBeChanged; // 0x339
};

struct UConanCheatManager : UCheatManager {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct UIconGridBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UCharacterMovementComponent : UPawnMovementComponent {
	ACharacter* CharacterOwner; // 0x1a0
	float GravityScale; // 0x1a8
	float MaxStepHeight; // 0x1ac
	float JumpZVelocity; // 0x1b0
	float JumpOffJumpZFactor; // 0x1b4
	float WalkableFloorAngle; // 0x1bc
	float WalkableFloorZ; // 0x1c0
	EMovementMode MovementMode; // 0x1c4
	char CustomMovementMode; // 0x1c5
	bool bIsSwimmingOnSurface; // 0x1c6
	float GroundFriction; // 0x1f0
	float MaxWalkSpeed; // 0x1f4
	float MaxWalkSpeedCrouched; // 0x1f8
	float MaxSwimSpeed; // 0x1fc
	float MaxFlySpeed; // 0x200
	float MaxCustomMovementSpeed; // 0x204
	float MaxClimbSpeed; // 0x208
	float MaxAcceleration; // 0x20c
	float MaxDepthDefiningSurfaceSwimming; // 0x210
	float TargetDepthWhenSurfaceSwimming; // 0x214
	float TimeToReachTargetDepth; // 0x218
	float MaxAllowedStabilizingVelocity; // 0x21c
	bool bIsCollidingWhileSwimming; // 0x220
	bool bIsWading; // 0x221
	bool bDisableBuoyancy; // 0x222
	float BrakingFrictionFactor; // 0x224
	float BrakingFriction; // 0x228
	char bUseSeparateBrakingFriction : 1; // 0x22c
	float BrakingDecelerationWalking; // 0x230
	float BrakingDecelerationFalling; // 0x234
	float BrakingDecelerationSwimming; // 0x238
	float BrakingDecelerationFlying; // 0x23c
	float AirControl; // 0x240
	float AirControlBoostMultiplier; // 0x244
	float AirControlBoostVelocityThreshold; // 0x248
	float FallingLateralFriction; // 0x24c
	float CrouchedHalfHeight; // 0x250
	float Buoyancy; // 0x254
	float PerchRadiusThreshold; // 0x258
	float PerchAdditionalHeight; // 0x25c
	FRotator RotationRate; // 0x260
	char bUseControllerDesiredRotation : 1; // 0x26c
	char bOrientRotationToMovement : 1; // 0x26c
	bool bAllowPhysicsRotationDuringRootMotion; // 0x270
	char bMovementInProgress : 1; // 0x274
	char bEnableScopedMovementUpdates : 1; // 0x274
	char bForceMaxAccel : 1; // 0x274
	char bRunPhysicsWithNoController : 1; // 0x274
	char bForceNextFloorCheck : 1; // 0x274
	char bShrinkProxyCapsule : 1; // 0x274
	char bCanWalkOffLedges : 1; // 0x274
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x274
	char bDeferUpdateMoveComponent : 1; // 0x274
	USceneComponent* DeferredUpdatedMoveComponent; // 0x278
	float MaxOutOfWaterStepHeight; // 0x280
	float OutofWaterZ; // 0x284
	float Mass; // 0x288
	bool bEnablePhysicsInteraction; // 0x28c
	bool bTouchForceScaledToMass; // 0x28d
	bool bPushForceScaledToMass; // 0x28e
	bool bPushForceUsingZOffset; // 0x28f
	bool bScalePushForceToVelocity; // 0x290
	float StandingDownwardForceScale; // 0x294
	float InitialPushForceFactor; // 0x298
	float PushForceFactor; // 0x29c
	float PushForcePointZOffsetFactor; // 0x2a0
	float TouchForceFactor; // 0x2a4
	float MinTouchForce; // 0x2a8
	float MaxTouchForce; // 0x2ac
	float RepulsionForce; // 0x2b0
	char bForceBraking : 1; // 0x2b4
	float CrouchedSpeedMultiplier; // 0x2b8
	float UpperImpactNormalScale; // 0x2bc
	FVector Acceleration; // 0x2c0
	FVector LastUpdateLocation; // 0x2cc
	FQuat LastUpdateRotation; // 0x2e0
	FVector LastUpdateVelocity; // 0x2f0
	float ServerLastTransformUpdateTimeStamp; // 0x2fc
	FVector PendingImpulseToApply; // 0x300
	FVector PendingForceToApply; // 0x30c
	float AnalogInputModifier; // 0x318
	float MaxSimulationTimeStep; // 0x324
	int32_t MaxSimulationIterations; // 0x328
	float MaxDepenetrationWithGeometry; // 0x32c
	float MaxDepenetrationWithGeometryAsProxy; // 0x330
	float MaxDepenetrationWithPawn; // 0x334
	float MaxDepenetrationWithPawnAsProxy; // 0x338
	float NetworkSimulatedSmoothLocationTime; // 0x33c
	float NetworkSimulatedSmoothLocationZTime; // 0x340
	float NetworkSimulatedSmoothRotationTime; // 0x344
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x348
	float ListenServerNetworkSimulatedSmoothLocationZTime; // 0x34c
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x350
	float NetworkMaxSmoothUpdateDistance; // 0x354
	float NetworkNoSmoothUpdateDistance; // 0x358
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x35c
	float LedgeCheckThreshold; // 0x360
	float JumpOutOfWaterPitch; // 0x364
	FFindFloorResult CurrentFloor; // 0x368
	EMovementMode DefaultLandMovementMode; // 0x400
	EMovementMode DefaultWaterMovementMode; // 0x401
	float NetMoveDeltaMultiplier; // 0x404
	FScriptMulticastDelegate SignalOnSurfaceTypeChanged; // 0x408
	EPhysicalSurface lastSurface; // 0x418
	EMovementMode GroundMovementMode; // 0x419
	char bMaintainHorizontalGroundVelocity : 1; // 0x41c
	char bImpartBaseVelocityX : 1; // 0x41c
	char bImpartBaseVelocityY : 1; // 0x41c
	char bImpartBaseVelocityZ : 1; // 0x41c
	char bImpartBaseAngularVelocity : 1; // 0x41c
	char bJustTeleported : 1; // 0x41c
	char bNetworkUpdateReceived : 1; // 0x41c
	char bNetworkMovementModeChanged : 1; // 0x41c
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x41c
	char bNotifyApex : 1; // 0x41c
	char bCheatFlying : 1; // 0x41c
	char bWantsToCrouch : 1; // 0x41c
	char bCrouchMaintainsBaseLocation : 1; // 0x41c
	char bIgnoreBaseRotation : 1; // 0x41c
	char bFastAttachedMove : 1; // 0x41c
	char bAlwaysCheckFloor : 1; // 0x41c
	char bUseFlatBaseForFloorChecks : 1; // 0x41c
	char bPerformingJumpOff : 1; // 0x41c
	char bWantsToLeaveNavWalking : 1; // 0x41c
	char bUseRVOAvoidance : 1; // 0x41c
	char bRequestedMoveUseAcceleration : 1; // 0x41c
	char bWantsToClimb : 1; // 0x41c
	char bHasRequestedVelocity : 1; // 0x41c
	char bRequestedMoveWithMaxSpeed : 1; // 0x41c
	char bWasAvoidanceUpdated : 1; // 0x41c
	char bProjectNavMeshWalking : 1; // 0x41c
	char bSwitchToWalkingIfNoNavData : 1; // 0x41c
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x41c
	char bForceSweepWhenNavWalking : 1; // 0x41c
	char bAssumeServerIsNavWalkingInSimulateMovement : 1; // 0x420
	float AvoidanceConsiderationRadius; // 0x438
	FVector RequestedVelocity; // 0x43c
	int32_t AvoidanceUID; // 0x448
	FNavAvoidanceMask AvoidanceGroup; // 0x44c
	FNavAvoidanceMask GroupsToAvoid; // 0x450
	FNavAvoidanceMask GroupsToIgnore; // 0x454
	float AvoidanceWeight; // 0x458
	FVector PendingLaunchVelocity; // 0x45c
	float NavMeshProjectionInterval; // 0x508
	float NavMeshProjectionTimer; // 0x50c
	float NavMeshProjectionInterpSpeed; // 0x510
	float NavMeshProjectionHeightScaleUp; // 0x514
	float NavMeshProjectionHeightScaleDown; // 0x518
	float NavWalkingFloorDistTolerance; // 0x51c
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x520
	float MinTimeBetweenTimeStampResets; // 0x588
	FRootMotionSourceGroup CurrentRootMotion; // 0x590
	FRootMotionMovementParams RootMotionParams; // 0x720
	FVector AnimRootMotionVelocity; // 0x760
	bool bWasSimulatingRootMotion; // 0x76c
};

struct UParticleModuleBeamBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x38
	float DelayMax; // 0x3c
};

struct URandomBuildingGeneratorProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate BuildingCreated; // 0x28
	FScriptMulticastDelegate BuildingFailed; // 0x38
	FScriptMulticastDelegate BuildingProgressUpdate; // 0x48
	bool DoneLoadingClasses; // 0xc0
	FVector SpawnLocation; // 0xc4
	FRotator spawnRotation; // 0xd0
	float spawnRadius; // 0xdc
	ESocketDistanceSortMethod sortMethod; // 0xe0
	int32_t NumFoundations; // 0xe4
	int32_t NumOtherPieces; // 0xe8
	int32_t NumRemainingFoundations; // 0xec
	int32_t NumRemainingOtherPieces; // 0xf0
	FString ListOfIDsToBuildWith; // 0xf8
	TArray<UObject*> m_FoundationClasses; // 0x108
	TArray<UObject*> m_BuildingClasses; // 0x118
	UObject* m_FoundationClass; // 0x128
	ABuildingBase* m_CreatedBuildingMaster; // 0x130
	float m_LastUpdateEventTime; // 0x138
	float m_LastAddedPieceTime; // 0x13c
	UObject* m_LastBuildingClassUsed; // 0x140
	UObject* m_CurrentBuildingClass; // 0x148
	TArray<FPotentialBuildGhost> m_DistanceSortedQueuedPotentialGhosts; // 0x150
	UInstancedBuildingComponent* m_AwaitingPhysicsStateComponent; // 0x198
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct ASpectatorPawn : ADefaultPawn {
	float BaseTurnRate; // 0x430
	float BaseLookUpRate; // 0x434
	UPawnMovementComponent* MovementComponent; // 0x438
	USphereComponent* CollisionComponent; // 0x440
	UStaticMeshComponent* MeshComponent; // 0x448
	char bAddDefaultMovementBindings : 1; // 0x450
};

struct UConanGameInstance : UDWGameInstance {
	float OnlineSessionCreationTimeout; // 0x158
	bool m_ShowLoadingScreens; // 0x1e0
	AServerSettings* ServerSettings; // 0x880
	FScriptMulticastDelegate SignalServerConnectionFailure; // 0x8a0
	FScriptMulticastDelegate SignalOtherConnectionFalure; // 0x8b0
	FScriptMulticastDelegate SignalGamepadChanged; // 0x8c0
	FScriptMulticastDelegate SignalLiveConnectionLost; // 0x8d0
	FScriptMulticastDelegate SignalLiveConnectionRestored; // 0x8e0
	FScriptMulticastDelegate SignalTrailStatusChanged; // 0x8f0
	FScriptMulticastDelegate SignalClientStateChanged; // 0x900
	bool m_GameStartedOffline; // 0x910
	bool m_ActiveUserIsGuestAccount; // 0x911
	UConanTicker* Ticker; // 0x918
	UConsoleSettingsHelper* m_ConsoleSettingsHelper; // 0x998
	UGUIModuleController* m_GUIModuleController; // 0x9a0
	UClass* m_SettingsBPClass; // 0xaa8
	FString m_NextMapName; // 0xac8
	UFrameRateReporter* m_BenchmarkFrameRateReporter; // 0xaf8
	UShowLoginUICallbackProxy* m_ShowLoginUIProxy; // 0xc40
	UConanOnlineEventsLibrary* m_OnlineEventsLibrary; // 0xc50
	UInGameJoinOrInvite* m_InGameJoinOrInvite; // 0xc58
	UInviteControllerParing* m_InviteParing; // 0xc60
	TArray<UMessageBoxWidget*> ErrorMessageBoxStack; // 0xc90
	TArray<UGraniteTileSet*> PreloadedGraniteTilesets; // 0xd10
	FScriptMulticastDelegate ActiveDeviceProfileChanged; // 0xd98
	UDataTable* m_SpawnProfessionTable; // 0xda8
	UDataTable* m_SpawnThrallTierTable; // 0xdb0
};

struct ADWPlayerController : APlayerController {
	UPlayer* Player; // 0x438
	APawn* AcknowledgedPawn; // 0x448
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x450
	AHUD* MyHUD; // 0x460
	APlayerCameraManager* PlayerCameraManager; // 0x468
	APlayerCameraManager* PlayerCameraManagerClass; // 0x470
	bool bAutoManageActiveCameraTarget; // 0x478
	FRotator TargetViewRotation; // 0x47c
	float SmoothTargetViewRotationSpeed; // 0x494
	TArray<AActor*> HiddenActors; // 0x498
	float LastSpectatorStateSynchTime; // 0x4a8
	FVector LastSpectatorSyncLocation; // 0x4ac
	FRotator LastSpectatorSyncRotation; // 0x4b8
	int32_t ClientCap; // 0x4c4
	UCheatManager* CheatManager; // 0x4c8
	UCheatManager* CheatClass; // 0x4d0
	UPlayerInput* PlayerInput; // 0x4d8
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x4e0
	char bPlayerIsWaiting : 1; // 0x580
	char NetPlayerIndex; // 0x584
	UNetConnection* PendingSwapConnection; // 0x588
	UNetConnection* NetConnection; // 0x590
	float InputYawScale; // 0x5a8
	float InputPitchScale; // 0x5ac
	float InputRollScale; // 0x5b0
	char bShowMouseCursor : 1; // 0x5b4
	char bEnableClickEvents : 1; // 0x5b4
	char bEnableTouchEvents : 1; // 0x5b4
	char bEnableMouseOverEvents : 1; // 0x5b4
	char bEnableTouchOverEvents : 1; // 0x5b4
	char bForceFeedbackEnabled : 1; // 0x5b4
	char bKeepPawnAliveOnControllerDeath : 1; // 0x5b4
	TArray<FKey> ClickEventKeys; // 0x5b8
	EMouseCursor DefaultMouseCursor; // 0x5c8
	EMouseCursor CurrentMouseCursor; // 0x5c9
	ECollisionChannel DefaultClickTraceChannel; // 0x5ca
	ECollisionChannel CurrentClickTraceChannel; // 0x5cb
	float HitResultTraceDistance; // 0x5cc
	UInputComponent* InactiveStateInputComponent; // 0x650
	UTouchInterface* CurrentTouchInterface; // 0x670
	ASpectatorPawn* SpectatorPawn; // 0x6b8
	FVector SpawnLocation; // 0x6c0
	bool bIsLocalPlayerController; // 0x6d0
	uint16_t SeamlessTravelCount; // 0x6d2
	uint16_t LastCompletedSeamlessTravelCount; // 0x6d4
};

struct UStreamingProxyUntyped : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnLoaded; // 0x28
	TArray<FStringAssetReference> Assets; // 0x40
};

struct UAIResource_Logic : UGameplayTaskResource {
	int32_t ManualResourceID; // 0x28
	uint8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct AGeneratedMeshAreaLight : ASpotLight {
	USpotLightComponent* SpotLightComponent; // 0x3e0
};

struct UAISenseConfig_Prediction : UAISenseConfig {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UInteractableFoliageBase : UFoliageInstancedStaticMeshComponent {
	UDestructibleMesh* DestructibleMesh; // 0x9e0
	FScriptMulticastDelegate OnInstanceTakePointDamage; // 0xa00
	FScriptMulticastDelegate OnInstanceTakeRadialDamage; // 0xa10
	UDestructibleMesh* DestructibleMeshPtr; // 0xa20
};

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct UAsyncTaskQueryPurchases : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnSucceeded; // 0x28
	FScriptMulticastDelegate OnFailed; // 0x38
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct AFunctionalTestGameMode : AGameModeBase {
	FString OptionsString; // 0x3d0
	AGameSession* GameSessionClass; // 0x3e0
	AGameStateBase* GameStateClass; // 0x3e8
	APlayerController* PlayerControllerClass; // 0x3f0
	APlayerState* PlayerStateClass; // 0x3f8
	AHUD* HUDClass; // 0x400
	APawn* DefaultPawnClass; // 0x408
	ASpectatorPawn* SpectatorClass; // 0x410
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x418
	AGameSession* GameSession; // 0x420
	AGameStateBase* GameState; // 0x428
	FText DefaultPlayerName; // 0x430
	char bUseSeamlessTravel : 1; // 0x448
	char bStartPlayersAsSpectators : 1; // 0x448
	char bPauseable : 1; // 0x448
};

struct UHorizontalBox : UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct UChatWindow : UWindowRoot {
	UUserWidget* ChatLineClass; // 0x398
	FColor SystemMessageColor; // 0x3a0
	FColor GlobalMessageColor; // 0x3a4
	FColor LocalMessageColor; // 0x3a8
	FColor GuildMessageColor; // 0x3ac
	FColor MeMessageColor; // 0x3b0
	FColor GeneratedMessageColor; // 0x3b4
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x3d0
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x60
};

struct UMaterial : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x70
	FColorMaterialInput DiffuseColor; // 0x78
	FColorMaterialInput SpecularColor; // 0xb8
	FColorMaterialInput BaseColor; // 0xf8
	FScalarMaterialInput Metallic; // 0x138
	FScalarMaterialInput Specular; // 0x178
	FScalarMaterialInput Roughness; // 0x1b8
	FVectorMaterialInput Normal; // 0x1f8
	FColorMaterialInput EmissiveColor; // 0x240
	FScalarMaterialInput Opacity; // 0x280
	FScalarMaterialInput OpacityMask; // 0x2c0
	EMaterialDomain MaterialDomain; // 0x300
	EBlendMode BlendMode; // 0x301
	EDecalBlendMode DecalBlendMode; // 0x302
	EMaterialDecalResponse MaterialDecalResponse; // 0x303
	EMaterialShadingModel ShadingModel; // 0x304
	float OpacityMaskClipValue; // 0x308
	FVectorMaterialInput WorldPositionOffset; // 0x310
	FVectorMaterialInput WorldDisplacement; // 0x358
	FScalarMaterialInput TessellationMultiplier; // 0x3a0
	FColorMaterialInput SubsurfaceColor; // 0x3e0
	FScalarMaterialInput ClearCoat; // 0x420
	FScalarMaterialInput ClearCoatRoughness; // 0x460
	FScalarMaterialInput AmbientOcclusion; // 0x4a0
	FScalarMaterialInput Refraction; // 0x4e0
	FVector2MaterialInput CustomizedUVs[0x8]; // 0x520
	FMaterialAttributesInput MaterialAttributes; // 0x760
	FScalarMaterialInput PixelDepthOffset; // 0x7a0
	char bEnableSeparateTranslucency : 1; // 0x7e0
	char bEnableMobileSeparateTranslucency : 1; // 0x7e0
	char bEnableResponsiveAA : 1; // 0x7e0
	char bScreenSpaceReflections : 1; // 0x7e0
	char TwoSided : 1; // 0x7e0
	char DitheredLODTransition : 1; // 0x7e0
	char DitherOpacityMask : 1; // 0x7e0
	char bAllowNegativeEmissiveColor : 1; // 0x7e0
	int32_t NumCustomizedUVs; // 0x7e4
	ETranslucencyLightingMode TranslucencyLightingMode; // 0x7e8
	float TranslucencyDirectionalLightingIntensity; // 0x7ec
	char AllowTranslucentCustomDepthWrites : 1; // 0x7f0
	float TranslucentShadowDensityScale; // 0x7f4
	float TranslucentSelfShadowDensityScale; // 0x7f8
	float TranslucentSelfShadowSecondDensityScale; // 0x7fc
	float TranslucentSelfShadowSecondOpacity; // 0x800
	float TranslucentBackscatteringExponent; // 0x804
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x808
	float TranslucentShadowStartOffset; // 0x818
	char bDisableDepthTest : 1; // 0x81c
	char bGenerateSphericalParticleNormals : 1; // 0x81c
	char bTangentSpaceNormal : 1; // 0x81c
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x81c
	char bBlockGI : 1; // 0x81c
	char bUsedAsSpecialEngineMaterial : 1; // 0x81c
	char bUsedWithSkeletalMesh : 1; // 0x81c
	char bUsedWithEditorCompositing : 1; // 0x81c
	char bUsedWithParticleSprites : 1; // 0x81c
	char bUsedWithBeamTrails : 1; // 0x81c
	char bUsedWithMeshParticles : 1; // 0x81c
	char bUsedWithStaticLighting : 1; // 0x81c
	char bUsedWithMorphTargets : 1; // 0x81c
	char bUsedWithSplineMeshes : 1; // 0x81c
	char bUsedWithInstancedStaticMeshes : 1; // 0x81c
	char bUsesDistortion : 1; // 0x81c
	char bUsedWithClothing : 1; // 0x81c
	char bUsedWithUI : 1; // 0x81c
	char bAutomaticallySetUsageInEditor : 1; // 0x81c
	char bFullyRough : 1; // 0x81c
	char bUseFullPrecision : 1; // 0x81c
	char bUseLightmapDirectionality : 1; // 0x81c
	char bUseHQForwardReflections : 1; // 0x81c
	char bUsePlanarForwardReflections : 1; // 0x81c
	char bNormalCurvatureToRoughness : 1; // 0x81c
	EMaterialTessellationMode D3D11TessellationMode; // 0x820
	char bEnableCrackFreeDisplacement : 1; // 0x824
	char bEnableAdaptiveTessellation : 1; // 0x824
	float MaxDisplacement; // 0x828
	char Wireframe : 1; // 0x82c
	char bOutputVelocityOnBasePass : 1; // 0x82c
	int32_t EditorX; // 0x830
	int32_t EditorY; // 0x834
	int32_t EditorPitch; // 0x838
	int32_t EditorYaw; // 0x83c
	TArray<UMaterialExpression*> Expressions; // 0x840
	TArray<FMaterialFunctionInfo> MaterialFunctionInfos; // 0x850
	TArray<FMaterialParameterCollectionInfo> MaterialParameterCollectionInfos; // 0x860
	char bCanMaskedBeAssumedOpaque : 1; // 0x870
	char bIsMasked : 1; // 0x870
	char bIsPreviewMaterial : 1; // 0x870
	char bUseMaterialAttributes : 1; // 0x870
	char bUseTranslucencyVertexFog : 1; // 0x870
	char bComputeFogPerPixel : 1; // 0x870
	char bAllowDevelopmentShaderCompile : 1; // 0x870
	char bIsMaterialEditorStatsMaterial : 1; // 0x870
	uint32_t UsageFlagWarnings; // 0x874
	EBlendableLocation BlendableLocation; // 0x878
	int32_t BlendablePriority; // 0x87c
	bool BlendableOutputAlpha; // 0x880
	ERefractionMode RefractionMode; // 0x881
	float RefractionDepthBias; // 0x884
	FGuid StateId; // 0x888
	TArray<UGraniteTexture*> ExpressionGraniteTextureReferences; // 0x900
	TArray<UTexture*> ExpressionTextureReferences; // 0x988
};

struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x3d0
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x140
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x30
};

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xc8
	UCameraShake* ShakeClass; // 0xe8
	float PlayScale; // 0xf0
	ECameraAnimPlaySpace PlaySpace; // 0xf4
	FRotator UserDefinedPlaySpace; // 0xf8
};

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xf8
	TArray<FPawnActionStack> ActionStacks; // 0x100
	TArray<FPawnActionEvent> ActionEvents; // 0x110
	UPawnAction* CurrentAction; // 0x120
};

struct UGUIModuleController_Activate_CallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnActivate; // 0x28
	FScriptMulticastDelegate OnNotActivated; // 0x38
	FScriptMulticastDelegate OnBeginLoad; // 0x48
	UGUIModuleController* GUIModuleController; // 0x58
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x28
	TArray<UEnvQueryOption*> Options; // 0x30
};

struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x28
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x30
	TArray<FString> AutoCompleteMapPaths; // 0x40
	float BackgroundOpacityPercentage; // 0x50
	bool bOrderTopToBottom; // 0x54
	FColor InputColor; // 0x58
	FColor HistoryColor; // 0x5c
	FColor AutoCompleteCommandColor; // 0x60
	FColor AutoCompleteCVarColor; // 0x64
	FColor AutoCompleteFadedColor; // 0x68
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x358
	bool bAllowTemplate; // 0x360
	TArray<FDelegateRuntimeBinding> Bindings; // 0x368
	TArray<UWidgetAnimation*> Animations; // 0x378
	TArray<FName> NamedSlots; // 0x388
	bool bValidTemplate; // 0x398
	bool bTemplateInitialized; // 0x399
	bool bCookedTemplate; // 0x39a
	UUserWidget* TemplateAsset; // 0x3a0
	UUserWidget* Template; // 0x3c0
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
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
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xf8
	TArray<UAISense*> RegisterAsSourceForSenses; // 0x100
};

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x38
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x478
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct UContentWidget : UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct UMenuAnchor : UContentWidget {
	UUserWidget* MenuClass; // 0x130
	DelegateProperty OnGetMenuContentEvent; // 0x138
	EMenuPlacement Placement; // 0x148
	bool ShouldDeferPaintingAfterWindowContent; // 0x149
	bool UseApplicationMenuStack; // 0x14a
	FScriptMulticastDelegate OnMenuOpenChanged; // 0x150
};

struct UDistributionVectorParticleParameter : UDistributionVectorParameterBase {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct USkeletalBodySetup : UBodySetup {
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x398
};

struct AAvatarCharacter : AConanCharacter {
	FText AvatarName; // 0x16e8
	AConanCharacter* m_Summoner; // 0x1700
	bool m_AvatarTimerStarted; // 0x170c
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x520
	FPartyReservation PendingReservation; // 0x530
	EClientRequestType RequestType; // 0x560
	bool bPendingReservationSent; // 0x561
	bool bCancelReservation; // 0x562
};

struct USlider : UWidget {
	float Value; // 0x118
	DelegateProperty ValueDelegate; // 0x120
	FSliderStyle WidgetStyle; // 0x130
	EOrientation Orientation; // 0x380
	FLinearColor SliderBarColor; // 0x384
	FLinearColor SliderHandleColor; // 0x394
	bool IndentHandle; // 0x3a4
	bool Locked; // 0x3a5
	float StepSize; // 0x3a8
	bool IsFocusable; // 0x3ac
	FScriptMulticastDelegate OnMouseCaptureBegin; // 0x3b0
	FScriptMulticastDelegate OnMouseCaptureEnd; // 0x3c0
	FScriptMulticastDelegate OnControllerCaptureBegin; // 0x3d0
	FScriptMulticastDelegate OnControllerCaptureEnd; // 0x3e0
	FScriptMulticastDelegate OnValueChanged; // 0x3f0
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x38
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
};

struct AConanSandboxLevelScriptActor : AConanLevelScriptActor {
	char bInputEnabled : 1; // 0x3d0
};

struct ASuspendableActor : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UVisibilityBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
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

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct USettingsGamepadPresetBase : USubSettingsMaster {
	UTexture2D* TextureControllerPS4; // 0x328
	UTexture2D* TextureControllerXBOX; // 0x348
	UDataTable* m_PresetTable; // 0x390
	UDataTable* m_LabelsTable; // 0x398
};

struct UGuildInviteBase : UWindowRoot {
	UUserWidget* ListEntryClass; // 0x3e0
	UUniqueID* m_GuildId; // 0x410
};

struct AMatineeActor : AActor {
	UInterpData* MatineeData; // 0x3d0
	FName MatineeControllerName; // 0x3d8
	float PlayRate; // 0x3e0
	char bPlayOnLevelLoad : 1; // 0x3e4
	char bForceStartPos : 1; // 0x3e4
	float ForceStartPosition; // 0x3e8
	char bLooping : 1; // 0x3ec
	char bRewindOnPlay : 1; // 0x3ec
	char bNoResetOnRewind : 1; // 0x3ec
	char bRewindIfAlreadyPlaying : 1; // 0x3ec
	char bDisableRadioFilter : 1; // 0x3ec
	char bClientSideOnly : 1; // 0x3ec
	char bSkipUpdateIfNotVisible : 1; // 0x3ec
	char bIsSkippable : 1; // 0x3ec
	int32_t PreferredSplitScreenNum; // 0x3f0
	char bDisableMovementInput : 1; // 0x3f4
	char bDisableLookAtInput : 1; // 0x3f4
	char bHidePlayer : 1; // 0x3f4
	char bHideHud : 1; // 0x3f4
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x3f8
	char bShouldShowGore : 1; // 0x408
	TArray<UInterpGroupInst*> GroupInst; // 0x410
	TArray<FCameraCutInfo> CameraCuts; // 0x420
	char bIsPlaying : 1; // 0x430
	char bReversePlayback : 1; // 0x430
	char bPaused : 1; // 0x430
	char bPendingStop : 1; // 0x430
	float InterpPosition; // 0x434
	char ReplicationForceIsPlaying; // 0x43c
	FScriptMulticastDelegate OnPlay; // 0x440
	FScriptMulticastDelegate OnStop; // 0x450
	FScriptMulticastDelegate OnPause; // 0x460
};

struct UVoiceChatWindow : UWindowRoot {
	UUserWidget* ChatLineClass; // 0x398
};

struct URichTextBlock : UTextLayoutWidget {
	FText Text; // 0x148
	DelegateProperty TextDelegate; // 0x160
	FSlateFontInfo Font; // 0x170
	FLinearColor Color; // 0x1d8
	TArray<URichTextBlockDecorator*> Decorators; // 0x1e8
};

struct UGameplayTagsManager : UObject {
	TArray<FGameplayTagSource> TagSources; // 0xa8
	TArray<UDataTable*> GameplayTagTables; // 0x120
};

struct UMaterialExpressionParticleRelativeTime : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x300
	FVector SocketOffset; // 0x304
	FVector TargetOffset; // 0x310
	float ProbeSize; // 0x31c
	ECollisionChannel ProbeChannel; // 0x320
	char bDoCollisionTest : 1; // 0x324
	char bUsePawnControlRotation : 1; // 0x324
	char bInheritPitch : 1; // 0x324
	char bInheritYaw : 1; // 0x324
	char bInheritRoll : 1; // 0x324
	char bEnableCameraLag : 1; // 0x324
	char bEnableCameraRotationLag : 1; // 0x324
	char bUseCameraLagSubstepping : 1; // 0x324
	char bDrawDebugLagMarkers : 1; // 0x324
	float CameraLagSpeed; // 0x328
	float CameraRotationLagSpeed; // 0x32c
	float CameraLagMaxTimeStep; // 0x330
	float CameraLagMaxDistance; // 0x334
};

struct UGameplayTickGroupScheduler : UActorComponent {
	AGameplayScheduler* Scheduler; // 0xf8
};

struct UApplyRadialDamageWithFalloffProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnComplete; // 0x28
	TArray<AActor*> IgnoreActors; // 0x60
	AActor* DamageCauser; // 0x70
	AController* InstigatedByController; // 0x78
	TMap<AActor*, FHitList> OverlapComponentMap; // 0xa0
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct UCollisionStaticMeshComponent : UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x7c8
	int32_t PreviousLODLevel; // 0x7cc
	UStaticMesh* StaticMesh; // 0x7d0
	int32_t MinLOD; // 0x7d8
	int32_t SubDivisionStepSize; // 0x7dc
	char bOverrideMinLOD : 1; // 0x7e0
	char bOverrideNavigationExport : 1; // 0x7e0
	char bForceNavigationObstacle : 1; // 0x7e0
	char bDisallowMeshPaintPerInstance : 1; // 0x7e0
	char bUseDefaultCollision : 1; // 0x7e0
	char bUseSubDivisions : 1; // 0x7e0
	char bIgnoreInstanceForTextureStreaming : 1; // 0x7e0
	char bOverrideLightMapRes : 1; // 0x7e0
	char bCastDistanceFieldIndirectShadow : 1; // 0x7e0
	int32_t OverriddenLightMapRes; // 0x7e4
	float DistanceFieldIndirectShadowMinVisibility; // 0x7e8
	float StreamingDistanceMultiplier; // 0x7ec
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x7f0
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x800
	FLightmassPrimitiveSettings LightmassSettings; // 0x810
};

struct AConanPlayerState : APlayerState {
	FString MasterAccountId; // 0x468
};

struct URadialMenuSegment : URootWidget {
	UTexture2D* m_IconTexture; // 0x348
	UTexture2D* m_StartCapTexture; // 0x350
	UTexture2D* m_EndCapTexture; // 0x358
};

struct UEditableTextBox : UWidget {
	FText Text; // 0x118
	DelegateProperty TextDelegate; // 0x130
	FEditableTextBoxStyle WidgetStyle; // 0x140
	USlateWidgetStyleAsset* Style; // 0x9b0
	FText HintText; // 0x9b8
	DelegateProperty HintTextDelegate; // 0x9d0
	FSlateFontInfo Font; // 0x9e0
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
	FShapedTextOptions ShapedTextOptions; // 0xa98
	FScriptMulticastDelegate OnTextChanged; // 0xaa0
	FScriptMulticastDelegate OnTextCommitted; // 0xab0
	FScriptMulticastDelegate OnFocusReceived; // 0xac0
};

struct UDmgTypeBP_Environmental_C : UDamageType {
	char bCausedByWorld : 1; // 0x28
	char bScaleMomentumByMass : 1; // 0x28
	char bRadialDamageVelChange : 1; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38
};

struct UMaterialExpressionCameraPositionWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UPetAttributeEntryView : URootWidget {
	FSlateBrush Icon; // 0x318
	FText Label; // 0x3a8
	ECharIntStatID AttributeID; // 0x3c0
};

struct UGameplayTask_ClaimResource : UGameplayTask {
	FName InstanceName; // 0x30
	UGameplayTask* ChildTask; // 0x60
};

struct UMaterialExpressionParticleMotionBlurFade : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct USettingsKeyBindingsBase : USubSettingsMaster {
	UUserWidget* m_CategoryClass; // 0x3a0
	UDataTable* m_CategoriesTable; // 0x3a8
};

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x28
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x30
};

struct UPaperTileSet : UObject {
	FIntPoint TileSize; // 0x28
	UTexture2D* TileSheet; // 0x30
	FIntMargin BorderMargin; // 0x38
	FIntPoint PerTileSpacing; // 0x48
	FIntPoint DrawingOffset; // 0x50
	int32_t WidthInTiles; // 0x58
	int32_t HeightInTiles; // 0x5c
	int32_t AllocatedWidth; // 0x60
	int32_t AllocatedHeight; // 0x64
	TArray<FPaperTileMetadata> PerTileData; // 0x68
	TArray<FPaperTileSetTerrain> Terrains; // 0x78
	int32_t TileWidth; // 0x88
	int32_t TileHeight; // 0x8c
	int32_t Margin; // 0x90
	int32_t Spacing; // 0x94
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct UW_Settings_Server_C : USettingsServerBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xab0
	UW_EditableLabeledSlider_C* AnimalPenCraftingTimeMultiplier; // 0xab8
	UW_TabButton_C* B_Abandonment; // 0xac0
	UW_TabButton_C* B_Chat; // 0xac8
	UW_ButtonCustom_C* B_ClearAdminPassword; // 0xad0
	UW_ButtonCustom_C* B_ClearServerpassword; // 0xad8
	UW_TabButton_C* B_Combat; // 0xae0
	UW_TabButton_C* B_Crafting; // 0xae8
	UW_TabButton_C* B_DayAndNight; // 0xaf0
	UW_TabButton_C* B_General; // 0xaf8
	UW_TabButton_C* B_Harvesting; // 0xb00
	UW_ButtonCustom_C* B_MakeMeAdmin; // 0xb08
	UW_TabButton_C* B_PetAndHunger; // 0xb10
	UW_TabButton_C* B_Progression; // 0xb18
	UW_TabButton_C* B_Purge; // 0xb20
	UW_TabButton_C* B_RegionalAccessControl; // 0xb28
	UW_TabButton_C* B_Siptah; // 0xb30
	UW_TabButton_C* B_Survival; // 0xb38
	UWidgetSwitcher* CategorySwitcher; // 0xb40
	UW_ButtonNormal_C* CB_AllowBuilding; // 0xb48
	UW_ButtonNormal_C* CB_AllowFamilySharedAccount; // 0xb50
	UW_ButtonNormal_C* CB_AvatarsDisabled; // 0xb58
	UW_ButtonNormal_C* CB_CanDamagePlayerStructures; // 0xb60
	UW_ButtonNormal_C* CB_ChatHasGlobal; // 0xb68
	UW_ButtonNormal_C* CB_ContainersIgnoreOwnership; // 0xb70
	UW_ButtonNormal_C* CB_DisableBuildingAbandonment; // 0xb78
	UW_ButtonNormal_C* CB_DisableBuildingDuringTimeRestrictedPVP; // 0xb80
	UW_ButtonNormal_C* CB_DisableLandclaimNotifications; // 0xb88
	UW_ButtonNormal_C* CB_DisableThrallDecay; // 0xb90
	UW_ButtonNormal_C* CB_DropEquipmentOnDeath; // 0xb98
	UW_ButtonNormal_C* CB_DynamicBuildingDamage; // 0xba0
	UW_ButtonNormal_C* CB_ElderThingsEnabled; // 0xba8
	UW_ButtonNormal_C* CB_EnableAutoFacingOnAttack; // 0xbb0
	UW_ButtonNormal_C* CB_EnableCatchUpTime; // 0xbb8
	UW_ButtonNormal_C* CB_EnableClanMarkers; // 0xbc0
	UW_ButtonNormal_C* CB_EnablePurge; // 0xbc8
	UW_ButtonNormal_C* CB_EnableSandStorm; // 0xbd0
	UW_ButtonNormal_C* CB_EnableStorm; // 0xbd8
	UW_ButtonNormal_C* CB_EnableTargetLock; // 0xbe0
	UW_ButtonNormal_C* CB_EnableWhitelist; // 0xbe8
	UW_ButtonNormal_C* CB_EverybodyCanLootCorpse; // 0xbf0
	UW_ButtonNormal_C* CB_IsBattlEyeEnabled; // 0xbf8
	UW_ButtonNormal_C* CB_IsLoadErrorsFatal; // 0xc00
	UW_ButtonNormal_C* CB_LogoutCharactersRemainInTheWorld; // 0xc08
	UW_ButtonNormal_C* CB_NoOwnership; // 0xc10
	UW_ButtonNormal_C* CB_PurgeRestrictToTime; // 0xc18
	UW_ButtonNormal_C* CB_PVPBuildingDamageFridayEnabled; // 0xc20
	UW_ButtonNormal_C* CB_PVPBuildingDamageMondayEnabled; // 0xc28
	UW_ButtonNormal_C* CB_PVPBuildingDamageSaturdayEnabled; // 0xc30
	UW_ButtonNormal_C* CB_PVPBuildingDamageSundayEnabled; // 0xc38
	UW_ButtonNormal_C* CB_PVPBuildingDamageThursdayEnabled; // 0xc40
	UW_ButtonNormal_C* CB_PVPBuildingDamageTuesdayEnabled; // 0xc48
	UW_ButtonNormal_C* CB_PVPBuildingDamageWednesdayEnabled; // 0xc50
	UW_ButtonNormal_C* CB_PVPEnabled; // 0xc58
	UW_ButtonNormal_C* CB_PVPFridayEnabled; // 0xc60
	UW_ButtonNormal_C* CB_PVPMondayEnabled; // 0xc68
	UW_ButtonNormal_C* CB_PVPRestrictToTime; // 0xc70
	UW_ButtonNormal_C* CB_PVPSaturdayEnabled; // 0xc78
	UW_ButtonNormal_C* CB_PVPSundayEnabled; // 0xc80
	UW_ButtonNormal_C* CB_PVPThursdayEnabled; // 0xc88
	UW_ButtonNormal_C* CB_PVPTuesdayEnabled; // 0xc90
	UW_ButtonNormal_C* CB_PVPWednesdayEnabled; // 0xc98
	UW_ButtonNormal_C* CB_RegionAllowAfrica; // 0xca0
	UW_ButtonNormal_C* CB_RegionAllowAsia; // 0xca8
	UW_ButtonNormal_C* CB_RegionAllowCentralEurope; // 0xcb0
	UW_ButtonNormal_C* CB_RegionAllowEasternEurope; // 0xcb8
	UW_ButtonNormal_C* CB_RegionAllowNorthAmerica; // 0xcc0
	UW_ButtonNormal_C* CB_RegionAllowOceania; // 0xcc8
	UW_ButtonNormal_C* CB_RegionAllowSouthAmerica; // 0xcd0
	UW_ButtonNormal_C* CB_RegionAllowWesternEurope; // 0xcd8
	UW_ButtonNormal_C* CB_SiegeElderThingMapMarkers; // 0xce0
	UW_ButtonNormal_C* CB_SiegeElderThingsEnabled; // 0xce8
	UW_ButtonNormal_C* CB_StormBuildingAllowed; // 0xcf0
	UW_ButtonNormal_C* CB_StormBuildingDamageEnabled; // 0xcf8
	UW_ButtonNormal_C* CB_StormMapBlocker; // 0xd00
	UW_ButtonNormal_C* CB_TimeRestrictAvatarSummoning; // 0xd08
	UW_ButtonNormal_C* CB_TimeRestrictPVPBuildingDamage; // 0xd10
	UW_FCComboBoxString_C* CBS_Community; // 0xd18
	UW_FCComboBoxString_C* CBS_EventLogCauserPrivacy; // 0xd20
	UW_FCComboBoxString_C* CBS_MapName; // 0xd28
	UW_FCComboBoxString_C* CBS_MaxNudity; // 0xd30
	UW_FCComboBoxString_C* CBS_ServerVoiceChat; // 0xd38
	UGridPanel* DifficultyPresets; // 0xd40
	UW_FCEditableTextBlock_C* ETXT_AdminPW; // 0xd48
	UW_FCMultiLineEditableTextBox_C* ETXT_MOTD; // 0xd50
	UW_FCEditableTextBlock_C* ETXT_RegionBlockList; // 0xd58
	UW_FCEditableTextBlock_C* ETXT_ServerPW; // 0xd60
	UW_EditableLabeledSlider_C* FeedBoxRangeMultiplier; // 0xd68
	UGridPanel* GRID_Abandonment; // 0xd70
	UGridPanel* GRID_CHAT; // 0xd78
	UGridPanel* Grid_Combat; // 0xd80
	UGridPanel* GRID_Crafting; // 0xd88
	UGridPanel* Grid_DAY_NIGHT_Cycle; // 0xd90
	UGridPanel* Grid_GENERAL; // 0xd98
	UGridPanel* Grid_HARVESTING; // 0xda0
	UGridPanel* Grid_Progression; // 0xda8
	UGridPanel* GRID_PurgeOptions; // 0xdb0
	UGridPanel* Grid_PurgeTimeRestriction; // 0xdb8
	UGridPanel* Grid_PVPbuildingDamage; // 0xdc0
	UGridPanel* Grid_PVPtime-restrict; // 0xdc8
	UGridPanel* Grid_REGIONAL_ACCESS_CONTROL; // 0xdd0
	UGridPanel* Grid_RestrictAvatarSummoningTime; // 0xdd8
	UGridPanel* Grid_SURVIVAL; // 0xde0
	UGridPanel* GridPanel_4; // 0xde8
	UImage* Image_1; // 0xdf0
	UImage* Image_2; // 0xdf8
	UImage* Image_10; // 0xe00
	UImage* Image_12; // 0xe08
	UOverlay* MapNameContainer; // 0xe10
	UOverlay* MapNameLabel; // 0xe18
	UOverlay* Overlay_24; // 0xe20
	UOverlay* Overlay_60; // 0xe28
	UW_EditableLabeledSlider_C* S_AltarModuleActiveTimeMultiplier; // 0xe30
	UW_EditableLabeledSlider_C* S_AmbientElderThingRespawnRate; // 0xe38
	UW_EditableLabeledSlider_C* S_AvatarLifeTime; // 0xe40
	UW_EditableLabeledSlider_C* S_BuildingDamageMultiplier; // 0xe48
	UW_EditableLabeledSlider_C* S_BuildingDecayTimeMultiplier; // 0xe50
	UW_EditableLabeledSlider_C* S_ChatLocalRadius; // 0xe58
	UW_EditableLabeledSlider_C* S_ChatMaxMessageLength; // 0xe60
	UW_EditableLabeledSlider_C* S_ClanMaxSize; // 0xe68
	UW_EditableLabeledSlider_C* S_ClanPurgeTrigger; // 0xe70
	UW_EditableLabeledSlider_C* S_ClanScoreUpateFrequency; // 0xe78
	UW_EditableLabeledSlider_C* S_ClientCatchUpTime; // 0xe80
	UW_EditableLabeledSlider_C* S_CoopTetheringLimit; // 0xe88
	UW_EditableLabeledSlider_C* S_CraftingCostMultiplier; // 0xe90
	UW_EditableLabeledSlider_C* S_DawnDuskTimeSpeedScale; // 0xe98
	UW_EditableLabeledSlider_C* S_DayCycleSpeedScale; // 0xea0
	UW_EditableLabeledSlider_C* S_DayTimeSpeedScale; // 0xea8
	UW_EditableLabeledSlider_C* S_DurabilityMultiplier; // 0xeb0
	UW_EditableLabeledSlider_C* S_DynamicBuildingDamagePeriod; // 0xeb8
	UW_EditableLabeledSlider_C* S_ElderThingsIdleLifespan; // 0xec0
	UW_EditableLabeledSlider_C* S_ElderThingSiegeBuildingSizeMultiplier; // 0xec8
	UW_EditableLabeledSlider_C* S_ElderThingSiegeDamageMultiplier; // 0xed0
	UW_EditableLabeledSlider_C* S_ElderThingSpawnRate; // 0xed8
	UW_EditableLabeledSlider_C* S_FriendlyFireDamageMultiplier; // 0xee0
	UW_EditableLabeledSlider_C* S_FuelBurnTimeMultiplier; // 0xee8
	UW_EditableLabeledSlider_C* S_HarvestAmountMultiplier; // 0xef0
	UW_EditableLabeledSlider_C* S_InitialPurgeDelay; // 0xef8
	UW_EditableLabeledSlider_C* S_ItemConvertionMultiplier; // 0xf00
	UW_EditableLabeledSlider_C* S_ItemSpoilRateScale; // 0xf08
	UW_EditableLabeledSlider_C* S_LandClaimRadiusMultiplier; // 0xf10
	UW_EditableLabeledSlider_C* S_MaxAmbientElderThings; // 0xf18
	UW_EditableLabeledSlider_C* S_MaxAmbushElderThings; // 0xf20
	UW_EditableLabeledSlider_C* S_MaxSiegeElderThings; // 0xf28
	UW_EditableLabeledSlider_C* S_MinimumBuildingSizeToBeSieged; // 0xf30
	UW_EditableLabeledSlider_C* S_MinimumStormDamageBuildingPieces; // 0xf38
	UW_EditableLabeledSlider_C* S_MinPurgeOnlinePlayers; // 0xf40
	UW_EditableLabeledSlider_C* S_NightTimeSpeedScale; // 0xf48
	UW_EditableLabeledSlider_C* S_NPCDamageMultiplier; // 0xf50
	UW_EditableLabeledSlider_C* S_NPCDamageTakenMultiplier; // 0xf58
	UW_EditableLabeledSlider_C* S_NPCRespawnMultiplier; // 0xf60
	UW_EditableLabeledSlider_C* S_PlayerActiveHungerMultiplier; // 0xf68
	UW_EditableLabeledSlider_C* S_PlayerActiveThirstMultiplier; // 0xf70
	UW_EditableLabeledSlider_C* S_PlayerCorruptionGainMultiplier; // 0xf78
	UW_EditableLabeledSlider_C* S_PlayerDamageMultiplier; // 0xf80
	UW_EditableLabeledSlider_C* S_PlayerDamageTakenMultiplier; // 0xf88
	UW_EditableLabeledSlider_C* S_PlayerIdleHungerMultiplier; // 0xf90
	UW_EditableLabeledSlider_C* S_PlayerIdleThirstMultiplier; // 0xf98
	UW_EditableLabeledSlider_C* S_PlayerXPCraftMultiplier; // 0xfa0
	UW_EditableLabeledSlider_C* S_PlayerXPHarvestMultiplier; // 0xfa8
	UW_EditableLabeledSlider_C* S_PlayerXPKillMultiplier; // 0xfb0
	UW_EditableLabeledSlider_C* S_PlayerXPRateMultiplier; // 0xfb8
	UW_EditableLabeledSlider_C* S_PlayerXPTimeMultiplier; // 0xfc0
	UW_EditableLabeledSlider_C* S_PurgeDelay; // 0xfc8
	UW_EditableLabeledSlider_C* S_PurgeDuration; // 0xfd0
	UW_EditableLabeledSlider_C* S_PurgeLevel; // 0xfd8
	UW_EditableLabeledSlider_C* S_PurgePreparationTime; // 0xfe0
	UW_EditableLabeledSlider_C* S_ResourceRespawnSpeedMultiplier; // 0xfe8
	UW_EditableLabeledSlider_C* S_SiegeElderThingRespawnRate; // 0xff0
	UW_EditableLabeledSlider_C* S_StaminaCostMultiplier; // 0xff8
	UW_EditableLabeledSlider_C* S_StormAccumulationTime; // 0x1000
	UW_EditableLabeledSlider_C* S_StormBuildingDamageMultiplier; // 0x1008
	UW_EditableLabeledSlider_C* S_StormBuildingDamageRateMultiplier; // 0x1010
	UW_EditableLabeledSlider_C* S_StormCooldown; // 0x1018
	UW_EditableLabeledSlider_C* S_StormDissipationTime; // 0x1020
	UW_EditableLabeledSlider_C* S_StormDuration; // 0x1028
	UW_EditableLabeledSlider_C* S_StormEnduranceDrainMultiplier; // 0x1030
	UW_EditableLabeledSlider_C* S_StormMinimumOnlinePlayers; // 0x1038
	UW_EditableLabeledSlider_C* S_SurgeDespawnTimer; // 0x1040
	UW_EditableLabeledSlider_C* S_SurgeSacrificeRequirementMultiplier; // 0x1048
	UW_EditableLabeledSlider_C* S_ThrallConversionMultiplier; // 0x1050
	UW_EditableLabeledSlider_C* S_ThrallCorruptionRemovalMultiplier; // 0x1058
	UW_EditableLabeledSlider_C* S_ThrallDamageToNPCsMultiplier; // 0x1060
	UW_EditableLabeledSlider_C* S_ThrallDamageToPlayersMultiplier; // 0x1068
	UW_EditableLabeledSlider_C* S_ThrallDecayTime; // 0x1070
	UW_EditableLabeledSlider_C* S_UnconsciousTimeSeconds; // 0x1078
	UW_EditableLabeledSlider_C* S_VaultRefreshDeviation; // 0x1080
	UW_EditableLabeledSlider_C* S_VaultRefreshTime; // 0x1088
	UW_EditableLabeledSlider_C* S_VocalVisibilityDurationInMinutes; // 0x1090
	UScrollBox* SB_MainScrollBox; // 0x1098
	UBorder* SideMenu; // 0x10a0
	UGridPanel* StormGridPanel; // 0x10a8
	UTextBlock* TextBlock_4; // 0x10b0
	UTextBlock* TextBlock_37; // 0x10b8
	UW_TimeInputBox_C* TIME_AvatarSummoningRestrictionWeekdayEnd; // 0x10c0
	UW_TimeInputBox_C* TIME_AvatarSummoningRestrictionWeekdayStart; // 0x10c8
	UW_TimeInputBox_C* TIME_AvatarSummoningRestrictionWeekendEnd; // 0x10d0
	UW_TimeInputBox_C* TIME_AvatarSummoningRestrictionWeekendStart; // 0x10d8
	UW_TimeInputBox_C* TIME_PurgeRestrictionWeekdayEnd; // 0x10e0
	UW_TimeInputBox_C* TIME_PurgeRestrictionWeekdayStart; // 0x10e8
	UW_TimeInputBox_C* TIME_PurgeRestrictionWeekendEnd; // 0x10f0
	UW_TimeInputBox_C* TIME_PurgeRestrictionWeekendStart; // 0x10f8
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionFridayEnd; // 0x1100
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionFridayStart; // 0x1108
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionMondayEnd; // 0x1110
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionMondayStart; // 0x1118
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionSaturdayEnd; // 0x1120
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionSaturdayStart; // 0x1128
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionSundayEnd; // 0x1130
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionSundayStart; // 0x1138
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionThursdayEnd; // 0x1140
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionThursdayStart; // 0x1148
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionTuesdayEnd; // 0x1150
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionTuesdayStart; // 0x1158
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionWednesdayEnd; // 0x1160
	UW_TimeInputBox_C* TIME_PVPBuildingDamageRestrictionWednesdayStart; // 0x1168
	UW_TimeInputBox_C* TIME_PVPRestrictionFridayEnd; // 0x1170
	UW_TimeInputBox_C* TIME_PVPRestrictionFridayStart; // 0x1178
	UW_TimeInputBox_C* TIME_PVPRestrictionMondayEnd; // 0x1180
	UW_TimeInputBox_C* TIME_PVPRestrictionMondayStart; // 0x1188
	UW_TimeInputBox_C* TIME_PVPRestrictionSaturdayEnd; // 0x1190
	UW_TimeInputBox_C* TIME_PVPRestrictionSaturdayStart; // 0x1198
	UW_TimeInputBox_C* TIME_PVPRestrictionSundayEnd; // 0x11a0
	UW_TimeInputBox_C* TIME_PVPRestrictionSundayStart; // 0x11a8
	UW_TimeInputBox_C* TIME_PVPRestrictionThursdayEnd; // 0x11b0
	UW_TimeInputBox_C* TIME_PVPRestrictionThursdayStart; // 0x11b8
	UW_TimeInputBox_C* TIME_PVPRestrictionTuesdayEnd; // 0x11c0
	UW_TimeInputBox_C* TIME_PVPRestrictionTuesdayStart; // 0x11c8
	UW_TimeInputBox_C* TIME_PVPRestrictionWednesdayEnd; // 0x11d0
	UW_TimeInputBox_C* TIME_PVPRestrictionWednesdayStart; // 0x11d8
	UW_TimeInputBox_C* TIME_StormWeekdayEnd; // 0x11e0
	UW_TimeInputBox_C* TIME_StormWeekdayStart; // 0x11e8
	UW_TimeInputBox_C* TIME_StormWeekendEnd; // 0x11f0
	UW_TimeInputBox_C* TIME_StormWeekendStart; // 0x11f8
	UTextBlock* TXT_AvatarLifeTime; // 0x1200
	UTextBlock* TXT_CategoryAbandonment; // 0x1208
	UTextBlock* TXT_CategoryChat; // 0x1210
	UTextBlock* TXT_CategoryCombat; // 0x1218
	UTextBlock* TXT_CategoryCrafting; // 0x1220
	UTextBlock* TXT_CategoryDayNightCycle; // 0x1228
	UTextBlock* TXT_CategoryGeneral; // 0x1230
	UTextBlock* TXT_CategoryHarvesting; // 0x1238
	UTextBlock* TXT_CategoryPresets; // 0x1240
	UTextBlock* TXT_CategoryProgression; // 0x1248
	UTextBlock* TXT_CategoryRegionAccessControl; // 0x1250
	UTextBlock* TXT_CategorySurvival; // 0x1258
	UTextBlock* TXT_CoopTetheringLimit; // 0x1260
	UTextBlock* TXT_IsBattlEyeEnabled; // 0x1268
	UTextBlock* TXT_MapName; // 0x1270
	UTextBlock* TXT_MaxNudity; // 0x1278
	UTextBlock* TXT_PurgeTitle; // 0x1280
	UTextBlock* TXT_ServerLocalTime; // 0x1288
	UW_ServerSettingsPresets_C* W_ServerSettingsPresets; // 0x1290
	UW_TooltipOverlay_C* W_TooltipOverlay; // 0x1298
	UW_TooltipOverlay_C* W_TooltipOverlay_1; // 0x12a0
	UW_TooltipOverlay_C* W_TooltipOverlay_2; // 0x12a8
	UW_TooltipOverlay_C* W_TooltipOverlay_3; // 0x12b0
	UW_TooltipOverlay_C* W_TooltipOverlay_4; // 0x12b8
	UW_TooltipOverlay_C* W_TooltipOverlay_5; // 0x12c0
	UW_TooltipOverlay_C* W_TooltipOverlay_6; // 0x12c8
	UW_TooltipOverlay_C* W_TooltipOverlay_7; // 0x12d0
	UW_TooltipOverlay_C* W_TooltipOverlay_8; // 0x12d8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_15; // 0x12e0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_69; // 0x12e8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_70; // 0x12f0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_71; // 0x12f8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_80; // 0x1300
	UW_TooltipOverlay_C* W_TooltipOverlay_C_81; // 0x1308
	UW_TooltipOverlay_C* W_TooltipOverlay_C_82; // 0x1310
	UW_TooltipOverlay_C* W_TooltipOverlay_C_83; // 0x1318
	UW_TooltipOverlay_C* W_TooltipOverlay_C_84; // 0x1320
	UW_TooltipOverlay_C* W_TooltipOverlay_C_85; // 0x1328
	UW_TooltipOverlay_C* W_TooltipOverlay_C_86; // 0x1330
	UW_TooltipOverlay_C* W_TooltipOverlay_C_87; // 0x1338
	UW_TooltipOverlay_C* W_TooltipOverlay_C_88; // 0x1340
	UW_TooltipOverlay_C* W_TooltipOverlay_C_89; // 0x1348
	UW_TooltipOverlay_C* W_TooltipOverlay_C_90; // 0x1350
	UW_TooltipOverlay_C* W_TooltipOverlay_C_92; // 0x1358
	UW_TooltipOverlay_C* W_TooltipOverlay_C_94; // 0x1360
	UW_TooltipOverlay_C* W_TooltipOverlay_C_95; // 0x1368
	UW_TooltipOverlay_C* W_TooltipOverlay_C_96; // 0x1370
	UW_TooltipOverlay_C* W_TooltipOverlay_C_97; // 0x1378
	UW_TooltipOverlay_C* W_TooltipOverlay_C_98; // 0x1380
	UW_TooltipOverlay_C* W_TooltipOverlay_C_99; // 0x1388
	UW_TooltipOverlay_C* W_TooltipOverlay_C_100; // 0x1390
	UW_TooltipOverlay_C* W_TooltipOverlay_C_101; // 0x1398
	UW_TooltipOverlay_C* W_TooltipOverlay_C_102; // 0x13a0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_103; // 0x13a8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_104; // 0x13b0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_105; // 0x13b8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_106; // 0x13c0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_107; // 0x13c8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_108; // 0x13d0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_109; // 0x13d8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_110; // 0x13e0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_111; // 0x13e8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_113; // 0x13f0
	UW_TooltipOverlay_C* W_TooltipOverlay_C_114; // 0x13f8
	UW_TooltipOverlay_C* W_TooltipOverlay_C_115; // 0x1400
	TArray<FString> CommunityOptions; // 0x1408
	TArray<FString> RegionOpstions; // 0x1418
	TArray<FString> nudityOptions; // 0x1428
	FString ServerDayName; // 0x1438
	TScriptInterface<BlueprintGeneratedClass> W_HostLocalParent; // 0x1448
	UFCButton* SelectedCategory; // 0x1458
	TArray<UWidget*> VisibleWidgets; // 0x1460
};

struct UParticleModuleColorBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct ULocalPlayerNameCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct APlayerController : AController {
	UPlayer* Player; // 0x438
	APawn* AcknowledgedPawn; // 0x448
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x450
	AHUD* MyHUD; // 0x460
	APlayerCameraManager* PlayerCameraManager; // 0x468
	APlayerCameraManager* PlayerCameraManagerClass; // 0x470
	bool bAutoManageActiveCameraTarget; // 0x478
	FRotator TargetViewRotation; // 0x47c
	float SmoothTargetViewRotationSpeed; // 0x494
	TArray<AActor*> HiddenActors; // 0x498
	float LastSpectatorStateSynchTime; // 0x4a8
	FVector LastSpectatorSyncLocation; // 0x4ac
	FRotator LastSpectatorSyncRotation; // 0x4b8
	int32_t ClientCap; // 0x4c4
	UCheatManager* CheatManager; // 0x4c8
	UCheatManager* CheatClass; // 0x4d0
	UPlayerInput* PlayerInput; // 0x4d8
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x4e0
	char bPlayerIsWaiting : 1; // 0x580
	char NetPlayerIndex; // 0x584
	UNetConnection* PendingSwapConnection; // 0x588
	UNetConnection* NetConnection; // 0x590
	float InputYawScale; // 0x5a8
	float InputPitchScale; // 0x5ac
	float InputRollScale; // 0x5b0
	char bShowMouseCursor : 1; // 0x5b4
	char bEnableClickEvents : 1; // 0x5b4
	char bEnableTouchEvents : 1; // 0x5b4
	char bEnableMouseOverEvents : 1; // 0x5b4
	char bEnableTouchOverEvents : 1; // 0x5b4
	char bForceFeedbackEnabled : 1; // 0x5b4
	char bKeepPawnAliveOnControllerDeath : 1; // 0x5b4
	TArray<FKey> ClickEventKeys; // 0x5b8
	EMouseCursor DefaultMouseCursor; // 0x5c8
	EMouseCursor CurrentMouseCursor; // 0x5c9
	ECollisionChannel DefaultClickTraceChannel; // 0x5ca
	ECollisionChannel CurrentClickTraceChannel; // 0x5cb
	float HitResultTraceDistance; // 0x5cc
	UInputComponent* InactiveStateInputComponent; // 0x650
	UTouchInterface* CurrentTouchInterface; // 0x670
	ASpectatorPawn* SpectatorPawn; // 0x6b8
	FVector SpawnLocation; // 0x6c0
	bool bIsLocalPlayerController; // 0x6d0
	uint16_t SeamlessTravelCount; // 0x6d2
	uint16_t LastCompletedSeamlessTravelCount; // 0x6d4
};

struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x7c8
	bool bAttachEnd; // 0x7c9
	FComponentReference AttachEndTo; // 0x7d0
	FName AttachEndToSocketName; // 0x7e8
	FVector EndLocation; // 0x7f0
	float CableLength; // 0x7fc
	int32_t NumSegments; // 0x800
	float SubstepTime; // 0x804
	int32_t SolverIterations; // 0x808
	bool bEnableStiffness; // 0x80c
	bool bEnableCollision; // 0x80d
	float CollisionFriction; // 0x810
	FVector CableForce; // 0x814
	float CableGravityScale; // 0x820
	float CableWidth; // 0x824
	int32_t NumSides; // 0x828
	float TileMaterial; // 0x82c
};

struct AStaticWaypoint : AActor {
	AStaticWaypoint* NextWaypoint; // 0x3d0
	USceneComponent* Root; // 0x3d8
};

struct UHostLocalBase : UWindowRoot {
	bool m_MapLocked; // 0x398
	UTexture2D* TextureExiledCivilized; // 0x3a0
	UTexture2D* TextureExiledDecadent; // 0x3c0
	UTexture2D* TextureExiledBarbaric; // 0x3e0
	UTexture2D* TextureSiptahCivilized; // 0x400
	UTexture2D* TextureSiptahDecadent; // 0x420
	UTexture2D* TextureSiptahBarbaric; // 0x440
	AServerSettings* ServerSettingsClass; // 0x508
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x6c8
};

struct UDemoPendingNetGame : UPendingNetGame {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UPawnAction_Move : UPawnAction {
	AActor* GoalActor; // 0xd0
	FVector GoalLocation; // 0xd8
	float AcceptableRadius; // 0xe4
	UNavigationQueryFilter* FilterClass; // 0xe8
	char bAllowStrafe : 1; // 0xf0
	char bFinishOnOverlap : 1; // 0xf0
	char bUsePathfinding : 1; // 0xf0
	char bAllowPartialPath : 1; // 0xf0
	char bProjectGoalToNavigation : 1; // 0xf0
	char bUpdatePathToGoal : 1; // 0xf0
	char bAbortChildActionOnPathChange : 1; // 0xf0
};

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x6e0
	float CapsuleRadius; // 0x6e4
	float CapsuleHeight; // 0x6e8
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x40
};

struct UBattleStandardZoneComponent : UBoxComponent {
	FScriptMulticastDelegate OnSetBattleZoneVisualization; // 0x6f0
	float NearbyZoneVisualizationRadius; // 0x700
	TArray<AConanCharacter*> m_RegisteredCharacters; // 0x708
	TArray<UBattleStandardZoneComponent*> m_VisualizedComponents; // 0x718
};

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x60
};

struct UAnimCompress_LeastDestructive : UAnimCompress {
	FString Description; // 0x28
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UParticleModuleCollisionBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
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
	FRawDistributionVector StartLocation; // 0x70
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x120
};

struct UMouseBlockWindowBase : UWindowRoot {
	USoundBase* dropItemSound; // 0x398
};

struct UPlayFabCloudScriptAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x150
	UPlayFabJsonObject* RequestJsonObj; // 0x158
	UPlayFabJsonObject* ResponseJsonObj; // 0x160
};

struct USmokeTestCommandlet : UCommandlet {
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
};

struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30
	EEnvTestPurpose TestPurpose; // 0x34
	FString TestComment; // 0x38
	EEnvTestFilterOperator MultipleContextFilterOp; // 0x48
	EEnvTestScoreOperator MultipleContextScoreOp; // 0x49
	EEnvTestFilterType FilterType; // 0x4a
	FAIDataProviderBoolValue BoolValue; // 0x50
	FAIDataProviderFloatValue FloatValueMin; // 0x80
	FAIDataProviderFloatValue FloatValueMax; // 0xb0
	EEnvTestScoreEquation ScoringEquation; // 0xe1
	EEnvQueryTestClamping ClampMinType; // 0xe2
	EEnvQueryTestClamping ClampMaxType; // 0xe3
	EEQSNormalizationType NormalizationType; // 0xe4
	FAIDataProviderFloatValue ScoreClampMin; // 0xe8
	FAIDataProviderFloatValue ScoreClampMax; // 0x118
	FAIDataProviderFloatValue ScoringFactor; // 0x148
	FAIDataProviderFloatValue ReferenceValue; // 0x178
	bool bDefineReferenceValue; // 0x1a8
	char bWorkOnFloatValues : 1; // 0x1b8
};

struct ACharacterCreationActorBase : AActor {
	FScriptMulticastDelegate OnCharacterSelected; // 0x3d0
	USpotLightComponent* m_Spotlight; // 0x3e0
	UAudioComponent* m_Voice; // 0x3e8
	float MaxIntensity; // 0x3f0
	float DefaultIntensity; // 0x3f4
	USkeletalMeshComponent* m_MeshComponents[0xa]; // 0x460
	USkeletalMeshComponent* m_CharacterBase; // 0x4b0
};

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	USoundWave* SoundWaveAssetPtr; // 0x38
	USoundWave* SoundWave; // 0x58
	char bLooping : 1; // 0x60
};

struct UMaterialInstance : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x70
	UMaterialInterface* Parent; // 0x78
	char bHasStaticPermutationResource : 1; // 0x80
	char bOverrideSubsurfaceProfile : 1; // 0x80
	TArray<FFontParameterValue> FontParameterValues; // 0x88
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x98
	TArray<FTextureParameterValue> TextureParameterValues; // 0xa8
	TArray<FGraniteTextureParameterValue> GraniteTextureParameterValues; // 0xb8
	TArray<FString> GraniteErrors; // 0xc8
	TArray<FVectorParameterValue> VectorParameterValues; // 0xd8
	bool bOverrideBaseProperties; // 0xe8
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xec
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
	TArray<FPartyReservation> Reservations; // 0x50
};

struct ULocationServicesImpl : UObject {
	FScriptMulticastDelegate OnLocationChanged; // 0x28
};

struct ABP_ServerSettings_C : AServerSettings {
	FPointerToUberGraphFrame UberGraphFrame; // 0x930
	float PlayerWaterMultiplier; // 0x938
	float PlayerIdleThirstMultiplier; // 0x93c
	float PlayerActiveThirstMultiplier; // 0x940
	float PlayerOfflineThirstMultiplier; // 0x944
	float PlayerIdleHungerMultiplier; // 0x948
	float PlayerActiveHungerMultiplier; // 0x94c
	float PlayerOfflineHungerMultiplier; // 0x950
	float ShieldDurabilityMultiplier; // 0x954
	float PlayerKnockbackMultiplier; // 0x958
	float NPCKnockbackMultiplier; // 0x95c
	float StructureDamageMultiplier; // 0x960
	float StructureHealthMultiplier; // 0x964
	float NPCRespawnMultiplier; // 0x968
	float NPCHealthMultiplier; // 0x96c
	float PlayerDamageMultiplier; // 0x970
	float PlayerDamageTakenMultiplier; // 0x974
	float MinionDamageMultiplier; // 0x978
	float MinionDamageTakenMultiplier; // 0x97c
	float NPCDamageMultiplier; // 0x980
	float NPCDamageTakenMultiplier; // 0x984
	float PlayerEncumbranceMultiplier; // 0x988
	float PlayerEncumbrancePenaltyMultiplier; // 0x98c
	float PlayerMovementSpeedScale; // 0x990
	float PlayerStaminaCostSprintMultiplier; // 0x994
	float PlayerSprintSpeedScale; // 0x998
	float PlayerStaminaCostMultiplier; // 0x99c
	float PlayerHealthRegenSpeedScale; // 0x9a0
	float PlayerXPRateMultiplier; // 0x9a4
	float PlayerXPKillMultiplier; // 0x9a8
	float PlayerXPHarvestMultiplier; // 0x9ac
	float PlayerXPCraftMultiplier; // 0x9b0
	float PlayerXPTimeMultiplier; // 0x9b4
	bool DogsOfTheDesertSpawnWithDogs; // 0x9b8
	bool CrossDesertOnce; // 0x9b9
	float WeaponEffectBoundsShorteningFraction; // 0x9bc
	int32_t OldVersion; // 0x9c0
	int32_t NewVersion; // 0x9c4
	float ThrallExclusionRadius; // 0x9c8
	float MaxAggroRange; // 0x9cc
	float FriendlyFireDamageMultiplier; // 0x9d0
	bool CampsIgnoreLandclaim; // 0x9d4
	float AvatarDomeDurationMultiplier; // 0x9d8
	float AvatarDomeDamageMultiplier; // 0x9dc
	float DodgeStaminaCost; // 0x9e0
	float NPCMaxSpawnCapMultiplier; // 0x9e4
	float AttackRotationMultiplier; // 0x9e8
	bool EnableThrallHungerSystem; // 0x9ec
	float PlayerMovementAccelerationMultiplier; // 0x9f0
	float SigilDamageMultiplier; // 0x9f4
	float SigilPercentageToKeep; // 0x9f8
	float SigilPercentageToDrop; // 0x9fc
	float WildSurgeDuration; // 0xa00
	float BlockStaminaMitigationMultiplier; // 0xa04
	float BlockHealthMitigationMultiplier; // 0xa08
	float DodgeInvulnerabilityDuration; // 0xa0c
	float StaminaLightArmorNoLoadRegenMultiplier; // 0xa10
	float StaminaLightArmorLightLoadRegenMultiplier; // 0xa14
	float StaminaLightArmorMediumLoadRegenMultiplier; // 0xa18
	float StaminaLightArmorHeavyLoadRegenMultiplier; // 0xa1c
	float StaminaLightArmorOverLoadRegenMultiplier; // 0xa20
	float StaminaMediumArmorNoLoadRegenMultiplier; // 0xa24
	float StaminaMediumArmorLightLoadRegenMultiplier; // 0xa28
	float StaminaMediumArmorMediumLoadRegenMultiplier; // 0xa2c
	float StaminaMediumArmorHeavyLoadRegenMultiplier; // 0xa30
	float StaminaMediumArmorOverLoadRegenMultiplier; // 0xa34
	float StaminaHeavyArmorNoLoadRegenMultiplier; // 0xa38
	float StaminaHeavyArmorLightLoadRegenMultiplier; // 0xa3c
	float StaminaHeavyArmorMediumLoadRegenMultiplier; // 0xa40
	float StaminaHeavyArmorHeavyLoadRegenMultiplier; // 0xa44
	float StaminaHeavyArmorOverLoadRegenMultiplier; // 0xa48
	bool CampCleanupDestroyFullBuilding; // 0xa4c
};

struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0x150
	char bPauseOnImpact : 1; // 0x154
	EInterpToBehaviourType BehaviourType; // 0x158
	char bForceSubStepping : 1; // 0x15c
	FScriptMulticastDelegate OnInterpToReverse; // 0x160
	FScriptMulticastDelegate OnInterpToStop; // 0x170
	FScriptMulticastDelegate OnWaitBeginDelegate; // 0x180
	FScriptMulticastDelegate OnWaitEndDelegate; // 0x190
	FScriptMulticastDelegate OnResetDelegate; // 0x1a0
	float MaxSimulationTimeStep; // 0x1b0
	int32_t MaxSimulationIterations; // 0x1b4
	TArray<FInterpControlPoint> ControlPoints; // 0x1b8
};

struct USceneCaptureComponentSand : USceneCaptureComponentImprints {
	UTextureRenderTarget2D* FluidColourMap; // 0x460
	UTextureRenderTarget2D* FluidNormalMap; // 0x468
	UTexture* ForcesTexture; // 0x470
	float ForcesTextureTiling; // 0x478
	float VorticityAmount; // 0x47c
	float ColourDecay; // 0x480
	float DensityDecay; // 0x484
	float VelocityDecay; // 0x488
	char Wrapping : 1; // 0x48c
	char OutputNormals : 1; // 0x48c
	char OutputColour : 1; // 0x48c
	char UseUniqueTextureSet : 1; // 0x48c
	FVector2D WindA; // 0x490
	FVector2D WindB; // 0x498
	FColor InjectionColourA; // 0x4a0
	float ColourScaleA; // 0x4a4
	FColor InjectionColourB; // 0x4a8
	float ColourScaleB; // 0x4ac
	float PressureScaleA; // 0x4b0
	float PressureScaleB; // 0x4b4
	float WindScale; // 0x4b8
	float WindGustFactorA; // 0x4bc
	float WindGustFactorB; // 0x4c0
};

struct UNiagaraEffect : UObject {
	TArray<UNiagaraEmitterProperties*> EmitterProps; // 0x28
};

struct USubSettingsMaster : URootWidget {
	bool ShowRestoreDefaults; // 0x318
	bool ShowClearKeyBinding; // 0x319
	bool ShowScroll; // 0x31a
	bool IsDirty; // 0x31b
};

struct UTextLayoutWidget : UWidget {
	FShapedTextOptions ShapedTextOptions; // 0x118
	ETextJustify Justification; // 0x120
	bool AutoWrapText; // 0x121
	float WrapTextAt; // 0x124
	ETextWrappingPolicy WrappingPolicy; // 0x128
	FMargin Margin; // 0x12c
	float LineHeightPercentage; // 0x13c
	int32_t MaxCharacterLimit; // 0x140
};

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x3d0
};

struct ATriggerSphere : ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x3d0
	UBillboardComponent* SpriteComponent; // 0x3d8
};

struct UBTComposite_Selector : UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
};

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UBookMark : UObject {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct USessionInviteGame : UWindowRoot {
	UFriendsGame* FriendsWindowBase; // 0x398
	USessionInviteEntry* EntryViewClass; // 0x3a0
	int32_t NumReceivedSessionInvites; // 0x3a8
	int32_t NumSentSessionInvites; // 0x3ac
};

struct UAnimInstance : UObject {
	float DeltaTime; // 0x28
	USkeleton* CurrentSkeleton; // 0x30
	ERootMotionMode RootMotionMode; // 0x38
	bool bRunUpdatesInWorkerThreads; // 0x39
	bool bCanUseParallelUpdateAnimation; // 0x3a
	bool bUseMultiThreadedAnimationUpdate; // 0x3b
	bool bWarnAboutBlueprintUsage; // 0x3c
	FScriptMulticastDelegate OnMontageBlendingOut; // 0x40
	FScriptMulticastDelegate OnMontageStarted; // 0x50
	FScriptMulticastDelegate OnMontageEnded; // 0x60
	FScriptMulticastDelegate OnAllMontageInstancesEnded; // 0x70
	bool bQueueMontageEvents; // 0xe0
	FAnimNotifyQueue NotifyQueue; // 0x110
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x180
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0x198
	TArray<FAnimGroupInfo> Groups; // 0x1a0
	bool bUseMultiThreadedAnimationUpdate; // 0x1b0
	bool bWarnAboutBlueprintUsage; // 0x1b1
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xd0
	FLinearColor ClearColor; // 0xd4
	EPixelFormat OverrideFormat; // 0xe4
	char bHDR : 1; // 0xe8
	char bForceLinearGamma : 1; // 0xe8
};

struct UEnemyHealthBar : URootWidget {
	FSlateBrush BorderBoss; // 0x318
	FSlateBrush BorderUniqueThrall; // 0x3a8
};

struct AStaticSpawnPoint : AActor {
	USceneComponent* Root; // 0x3d8
	UNpcSpawnerComponent* OwningSpawnerComponent; // 0x3e0
	UAILODComponent* OptionalAiLodComp; // 0x3e8
};

struct ANPCRegistry : AActor {
	TArray<TScriptInterface<Class>> m_ActiveSpawners; // 0x3d0
};

struct AGameMode : AGameModeBase {
	FName MatchState; // 0x460
	char bDelayedStart : 1; // 0x468
	int32_t NumSpectators; // 0x46c
	int32_t NumPlayers; // 0x470
	int32_t NumBots; // 0x474
	float MinRespawnDelay; // 0x478
	int32_t NumTravellingPlayers; // 0x47c
	ULocalMessage* EngineMessageClass; // 0x480
	TArray<APlayerState*> InactivePlayerArray; // 0x488
	float InactivePlayerStateLifeSpan; // 0x498
	bool bHandleDedicatedServerReplays; // 0x49c
};

struct APreCullTrianglesVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UAnimCompress : UObject {
	FString Description; // 0x28
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xf8
	float LOSHearingThreshold; // 0xfc
	float SightRadius; // 0x100
	float SensingInterval; // 0x104
	float HearingMaxSoundAge; // 0x108
	char bEnableSensingUpdates : 1; // 0x10c
	char bOnlySensePlayers : 1; // 0x10c
	char bSeePawns : 1; // 0x10c
	char bHearNoises : 1; // 0x10c
	FScriptMulticastDelegate OnSeePawn; // 0x118
	FScriptMulticastDelegate OnHearNoise; // 0x128
	float PeripheralVisionAngle; // 0x138
	float PeripheralVisionCosine; // 0x13c
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UHotkeyIconPlatforms_C : UHotkeyIconPlatforms {
	TArray<FHotkeyIconPlatform> Platforms; // 0x28
};

struct UBaseMediaSource : UMediaSource {
	FName playerName; // 0x30
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct UCraftingGUIBase : UWindowRoot {
	UExternalInventoryView* ChestInventoryViewClass; // 0x398
	UCraftingStationInventoryView* CraftingStationInventoryViewClass; // 0x3a0
	UCraftingStationInventoryView* DismantlingStationInventoryViewClass; // 0x3a8
	UAnimalPenInventoryView* AnimalPenInventoryViewClass; // 0x3b0
	USiegeWeaponInventoryView* SiegeWeaponInventoryViewClass; // 0x3b8
	UPaperdollPanel* PaperDollViewClass; // 0x3c0
	UUserWidget* PlayerInventoryViewClass; // 0x3c8
	UExternalInventoryView* NPCBackpackInventoryViewClass; // 0x3d0
	UPetInventoryView* PetInventoryViewClass; // 0x3d8
	UCraftingManagerGUI* CraftingPanelClass; // 0x3e0
	UPaperdollPanel* NPCPaperDollViewClass; // 0x3e8
	UPaperdollPanel* PetPaperDollViewClass; // 0x3f0
	UFeedingTrayPanel* FeedingTrayPanelClass; // 0x3f8
	FMargin CarouselModePadding; // 0x400
	URootWidget* m_CurrentCenterPanel; // 0x468
	URootWidget* m_CurrentRightPanel; // 0x470
};

struct UHighlightsOpenGroupAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMaterialExpressionViewSize : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UTwitterIntegrationBase : UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x60
	float ConstantDensity; // 0x98
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UUserWidget : UWidget {
	FLinearColor ColorAndOpacity; // 0x120
	DelegateProperty ColorAndOpacityDelegate; // 0x130
	FSlateColor ForegroundColor; // 0x140
	DelegateProperty ForegroundColorDelegate; // 0x168
	FMargin Padding; // 0x178
	bool bSupportsKeyboardFocus; // 0x188
	bool bIsFocusable; // 0x189
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x190
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1a0
	bool bStopAction; // 0x1b0
	int32_t Priority; // 0x1b4
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1b8
	FMargin SafeZonePadding; // 0x1c8
	UWidgetTree* WidgetTree; // 0x1d8
	char bCanEverTick : 1; // 0x1e0
	char bCanEverPaint : 1; // 0x1e0
	char bCookedWidgetTree : 1; // 0x1e0
	UInputComponent* InputComponent; // 0x1e8
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

struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x198
	TArray<FWheelSetup> WheelSetups; // 0x1a0
	float Mass; // 0x1b0
	float DragCoefficient; // 0x1b4
	float ChassisWidth; // 0x1b8
	float ChassisHeight; // 0x1bc
	bool bReverseAsBrake; // 0x1c0
	float DragArea; // 0x1c4
	float EstimatedMaxEngineSpeed; // 0x1c8
	float MaxEngineRPM; // 0x1cc
	float DebugDragMagnitude; // 0x1d0
	FVector InertiaTensorScale; // 0x1d4
	float MinNormalizedTireLoad; // 0x1e0
	float MinNormalizedTireLoadFiltered; // 0x1e4
	float MaxNormalizedTireLoad; // 0x1e8
	float MaxNormalizedTireLoadFiltered; // 0x1ec
	float ThresholdLongitudinalSpeed; // 0x1f0
	int32_t LowForwardSpeedSubStepCount; // 0x1f4
	int32_t HighForwardSpeedSubStepCount; // 0x1f8
	TArray<UVehicleWheel*> Wheels; // 0x200
	char bUseRVOAvoidance : 1; // 0x228
	float RVOAvoidanceRadius; // 0x22c
	float RVOAvoidanceHeight; // 0x230
	float AvoidanceConsiderationRadius; // 0x234
	float RVOSteeringStep; // 0x238
	float RVOThrottleStep; // 0x23c
	int32_t AvoidanceUID; // 0x240
	FNavAvoidanceMask AvoidanceGroup; // 0x244
	FNavAvoidanceMask GroupsToAvoid; // 0x248
	FNavAvoidanceMask GroupsToIgnore; // 0x24c
	float AvoidanceWeight; // 0x250
	FVector PendingLaunchVelocity; // 0x254
	FReplicatedVehicleState ReplicatedState; // 0x260
	float RawSteeringInput; // 0x278
	float RawThrottleInput; // 0x27c
	float RawBrakeInput; // 0x280
	char bRawHandbrakeInput : 1; // 0x284
	char bRawGearUpInput : 1; // 0x284
	char bRawGearDownInput : 1; // 0x284
	float SteeringInput; // 0x288
	float ThrottleInput; // 0x28c
	float BrakeInput; // 0x290
	float HandbrakeInput; // 0x294
	float IdleBrakeInput; // 0x298
	float StopThreshold; // 0x29c
	float WrongDirectionThreshold; // 0x2a0
	FVehicleInputRate ThrottleInputRate; // 0x2a4
	FVehicleInputRate BrakeInputRate; // 0x2ac
	FVehicleInputRate HandbrakeInputRate; // 0x2b4
	FVehicleInputRate SteeringInputRate; // 0x2bc
	char bWasAvoidanceUpdated : 1; // 0x2c4
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
};

struct UInventoryGridViewBase : URootWidget {
	UInventoryGridSlotViewBase* GridSlotViewClass; // 0x318
	UInventoryIconViewBase* ItemViewClass; // 0x320
	UTooltipWidget* ItemTooltipViewClass; // 0x328
	UStackSplitValueDialog* StackSplitDialogClass; // 0x330
	FLinearColor ItemViewClassEnabledColor; // 0x338
	FLinearColor ItemViewClassDisabledColor; // 0x348
	UItemInventory* inventory; // 0x358
	int32_t ColumnCount; // 0x360
	int32_t RowCount; // 0x364
	float IconSlotSize; // 0x368
	FMargin IconSlotPadding; // 0x36c
	FMargin IconSpacing; // 0x37c
	FMargin IconSlotSpacing; // 0x38c
	EOrientation Orientation; // 0x39c
	bool EnableScrollBar; // 0x39d
	bool SizeToFitVertically; // 0x39e
	bool SizeToFitHorizontally; // 0x39f
	bool ExpandingGrid; // 0x3a0
	bool m_HideEmptySlots; // 0x3a1
	bool ShowItemProgress; // 0x3a2
	bool AllowItemDrag; // 0x3a3
	bool AllowItemDrop; // 0x3a4
	FSlateSound ItemsCombinedSound; // 0x3a8
	USoundBase* HoveredSound; // 0x3c0
	DelegateProperty DelegateGetItemTooltip; // 0x3e0
	DelegateProperty DelegateFilterItem; // 0x3f0
	DelegateProperty DelegateDimItem; // 0x400
	DelegateProperty DelegateShowGlowItem; // 0x410
	DelegateProperty DelegateCompareItems; // 0x420
	FScriptMulticastDelegate SignalItemAdded; // 0x660
	FScriptMulticastDelegate SignalItemRemoved; // 0x670
	UInventoryGridViewBase* m_InventoryOnLeft; // 0x6b8
	UInventoryGridViewBase* m_InventoryOnRight; // 0x6c0
	UInventoryGridViewBase* m_InventoryOnTop; // 0x6c8
	UInventoryGridViewBase* m_InventoryOnDown; // 0x6d0
	UStackSplitValueDialog* m_SplitStackDialog; // 0x6d8
	UItemInventoryClientMonitor* m_InventoryMonitor; // 0x6e0
	UObjectPool* m_ItemIconViewPool; // 0x6e8
	UObjectPool* m_GridSlotViewPool; // 0x6f0
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UInventoryViewBase : URootWidget {
	UItemInventory* inventory; // 0x358
	USoundBase* SplitStackSound; // 0x360
	int32_t ColumnCount; // 0x380
	int32_t RowCount; // 0x384
	float FilterButtonSpacing; // 0x388
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

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x1d0
	int32_t MinQueriesPerTimeSliceCheck; // 0x1d4
	double MaxTimeSlicePerTick; // 0x1d8
	float HighImportanceQueryDistanceThreshold; // 0x1e0
	float MaxQueryImportance; // 0x1e8
	float SightLimitQueryImportance; // 0x1ec
};

struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	FName EmitterName; // 0x30
	FRawDistributionFloat range; // 0x38
	char bStrengthByDistance : 1; // 0x70
	FRawDistributionFloat Strength; // 0x78
	char bAffectBaseVelocity : 1; // 0xb0
	EAttractorParticleSelectionMethod SelectionMethod; // 0xb4
	char bRenewSource : 1; // 0xb8
	char bInheritSourceVel : 1; // 0xb8
	int32_t LastSelIndex; // 0xbc
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x70
	FExpressionInput TextureObject; // 0xa8
	FExpressionInput MipValue; // 0xe0
	FExpressionInput CoordinatesDX; // 0x118
	FExpressionInput CoordinatesDY; // 0x150
	ETextureMipValueMode MipValueMode; // 0x188
	ESamplerSourceMode SamplerSource; // 0x189
	uint32_t ConstCoordinate; // 0x18c
	int32_t ConstMipValue; // 0x190
};

struct UAnimCompositeBase : UAnimSequenceBase {
	TArray<FAnimNotifyEvent> Notifies; // 0x78
	float SequenceLength; // 0x88
	float RateScale; // 0x8c
	FRawCurveTracks RawCurveData; // 0x90
};

struct USceneCaptureComponentImprints : USceneCaptureComponent {
	UTextureRenderTarget2D* TextureTarget; // 0x3e0
	ETextureTargetOutput TextureTargetOutput; // 0x3e8
	UTextureRenderTarget2D* ReferenceHeightMap; // 0x3f0
	UTextureRenderTarget2D* ImprintsMap; // 0x3f8
	UMaterialParameterCollection* MaterialParams; // 0x400
	FName MaterialParameterName; // 0x408
	FName MaterialParameterName2; // 0x410
	FName MaterialParameterName3; // 0x418
	float CameraHeightOffset; // 0x420
	float ImprintHeight; // 0x424
	float ImprintFade; // 0x42c
	TArray<FImprintQualitySettings> QualitySettings; // 0x430
	UTexture* MaskTexture; // 0x440
	FVector2D MaskResolution; // 0x448
	FVector2D MaskUVOffset; // 0x450
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x130
	TArray<float> RowFill; // 0x140
};

struct UPlayFabEventsAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xa0
	UPlayFabJsonObject* RequestJsonObj; // 0xa8
	UPlayFabJsonObject* ResponseJsonObj; // 0xb0
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UW_HUD_FriendsNotificationEntry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UWidgetAnimation* Anim_Fade; // 0x248
	UWidgetAnimation* Anim_SlideIn; // 0x250
	UTextBlock* Message; // 0x258
	UNamedSlot* OtherWidget; // 0x260
	float SlideProgress; // 0x268
	FText ID; // 0x270
};

struct UInterpTrackColorScale : UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x7c8
	int32_t PreviousLODLevel; // 0x7cc
	UStaticMesh* StaticMesh; // 0x7d0
	int32_t MinLOD; // 0x7d8
	int32_t SubDivisionStepSize; // 0x7dc
	char bOverrideMinLOD : 1; // 0x7e0
	char bOverrideNavigationExport : 1; // 0x7e0
	char bForceNavigationObstacle : 1; // 0x7e0
	char bDisallowMeshPaintPerInstance : 1; // 0x7e0
	char bUseDefaultCollision : 1; // 0x7e0
	char bUseSubDivisions : 1; // 0x7e0
	char bIgnoreInstanceForTextureStreaming : 1; // 0x7e0
	char bOverrideLightMapRes : 1; // 0x7e0
	char bCastDistanceFieldIndirectShadow : 1; // 0x7e0
	int32_t OverriddenLightMapRes; // 0x7e4
	float DistanceFieldIndirectShadowMinVisibility; // 0x7e8
	float StreamingDistanceMultiplier; // 0x7ec
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x7f0
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x800
	FLightmassPrimitiveSettings LightmassSettings; // 0x810
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x60
};

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UThrallInfoComponent : UActorComponent {
	FThrallInfo ThrallInfo; // 0xf8
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat range; // 0x48
	FRawDistributionFloat Strength; // 0x80
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x640
};

struct UEngine : UObject {
	UFont* TinyFont; // 0x30
	FStringAssetReference TinyFontName; // 0x38
	UFont* SmallFont; // 0x48
	FStringAssetReference SmallFontName; // 0x50
	UFont* MediumFont; // 0x60
	FStringAssetReference MediumFontName; // 0x68
	UFont* LargeFont; // 0x78
	FStringAssetReference LargeFontName; // 0x80
	UFont* SubtitleFont; // 0x90
	FStringAssetReference SubtitleFontName; // 0x98
	TArray<UFont*> AdditionalFonts; // 0xa8
	TArray<FString> AdditionalFontNames; // 0xc0
	UConsole* ConsoleClass; // 0xd0
	FStringClassReference ConsoleClassName; // 0xd8
	UGameViewportClient* GameViewportClientClass; // 0xe8
	FStringClassReference GameViewportClientClassName; // 0xf0
	ULocalPlayer* LocalPlayerClass; // 0x100
	FStringClassReference LocalPlayerClassName; // 0x108
	AWorldSettings* WorldSettingsClass; // 0x118
	FStringClassReference WorldSettingsClassName; // 0x120
	FStringClassReference NavigationSystemClassName; // 0x130
	UNavigationSystem* NavigationSystemClass; // 0x140
	FStringClassReference AvoidanceManagerClassName; // 0x148
	UAvoidanceManager* AvoidanceManagerClass; // 0x158
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x160
	FStringClassReference PhysicsCollisionHandlerClassName; // 0x168
	FStringClassReference GameUserSettingsClassName; // 0x178
	UGameUserSettings* GameUserSettingsClass; // 0x188
	FStringClassReference AIControllerClassName; // 0x190
	UGameUserSettings* GameUserSettings; // 0x1a0
	ALevelScriptActor* LevelScriptActorClass; // 0x1a8
	FStringClassReference LevelScriptActorClassName; // 0x1b0
	FStringClassReference DefaultBlueprintBaseClassName; // 0x1c0
	FStringClassReference GameSingletonClassName; // 0x1d0
	UObject* GameSingleton; // 0x1e0
	FString PlayOnConsoleSaveDir; // 0x1e8
	UTexture2D* DefaultTexture; // 0x1f8
	FStringAssetReference DefaultTextureName; // 0x200
	UTexture* DefaultDiffuseTexture; // 0x210
	FStringAssetReference DefaultDiffuseTextureName; // 0x218
	UTexture2D* DefaultBSPVertexTexture; // 0x228
	FStringAssetReference DefaultBSPVertexTextureName; // 0x230
	UTexture2D* HighFrequencyNoiseTexture; // 0x240
	FStringAssetReference HighFrequencyNoiseTextureName; // 0x248
	UTexture2D* DefaultBokehTexture; // 0x258
	FStringAssetReference DefaultBokehTextureName; // 0x260
	UMaterial* WireframeMaterial; // 0x270
	FString WireframeMaterialName; // 0x278
	UMaterial* DebugMeshMaterial; // 0x288
	FStringAssetReference DebugMeshMaterialName; // 0x290
	UMaterial* LevelColorationLitMaterial; // 0x2a0
	FString LevelColorationLitMaterialName; // 0x2a8
	UMaterial* LevelColorationUnlitMaterial; // 0x2b8
	FString LevelColorationUnlitMaterialName; // 0x2c0
	UMaterial* LightingTexelDensityMaterial; // 0x2d0
	FString LightingTexelDensityName; // 0x2d8
	UMaterial* ShadedLevelColorationLitMaterial; // 0x2e8
	FString ShadedLevelColorationLitMaterialName; // 0x2f0
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x300
	FString ShadedLevelColorationUnlitMaterialName; // 0x308
	UMaterial* RemoveSurfaceMaterial; // 0x318
	FStringAssetReference RemoveSurfaceMaterialName; // 0x320
	UMaterial* VertexColorMaterial; // 0x330
	FString VertexColorMaterialName; // 0x338
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x348
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x350
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x360
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x368
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x378
	FString VertexColorViewModeMaterialName_RedOnly; // 0x380
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x390
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x398
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x3a8
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x3b0
	UMaterial* ConstraintLimitMaterial; // 0x3c0
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x3c8
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x3d0
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x3d8
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x3e0
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x3e8
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x3f0
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x3f8
	UMaterial* InvalidLightmapSettingsMaterial; // 0x400
	FStringAssetReference InvalidLightmapSettingsMaterialName; // 0x408
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x418
	FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0x420
	UMaterial* ArrowMaterial; // 0x430
	FStringAssetReference ArrowMaterialName; // 0x438
	FLinearColor LightingOnlyBrightness; // 0x448
	TArray<FLinearColor> ShaderComplexityColors; // 0x458
	TArray<FLinearColor> QuadComplexityColors; // 0x468
	TArray<FLinearColor> LightComplexityColors; // 0x478
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x488
	TArray<FLinearColor> LODColorationColors; // 0x498
	TArray<FLinearColor> HLODColorationColors; // 0x4a8
	TArray<FLinearColor> StreamingAccuracyColors; // 0x4b8
	float MaxPixelShaderAdditiveComplexityCount; // 0x4c8
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x4cc
	float MinLightMapDensity; // 0x4d0
	float IdealLightMapDensity; // 0x4d4
	float MaxLightMapDensity; // 0x4d8
	char bRenderLightMapDensityGrayscale : 1; // 0x4dc
	float RenderLightMapDensityGrayscaleScale; // 0x4e0
	float RenderLightMapDensityColorScale; // 0x4e4
	FLinearColor LightMapDensityVertexMappedColor; // 0x4e8
	FLinearColor LightMapDensitySelectedColor; // 0x4f8
	TArray<FStatColorMapping> StatColorMappings; // 0x508
	UPhysicalMaterial* DefaultPhysMaterial; // 0x518
	FStringAssetReference DefaultPhysMaterialName; // 0x520
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x530
	TArray<FClassRedirect> ActiveClassRedirects; // 0x540
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x550
	TArray<FStructRedirect> ActiveStructRedirects; // 0x560
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x570
	FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x578
	UTexture2D* MiniFontTexture; // 0x588
	FStringAssetReference MiniFontTextureName; // 0x590
	UTexture* WeightMapPlaceholderTexture; // 0x5a0
	FStringAssetReference WeightMapPlaceholderTextureName; // 0x5a8
	UTexture2D* LightMapDensityTexture; // 0x5b8
	FStringAssetReference LightMapDensityTextureName; // 0x5c0
	UGameViewportClient* GameViewport; // 0x5d8
	TArray<FString> DeferredCommands; // 0x5e0
	int32_t TickCycles; // 0x5f0
	int32_t GameCycles; // 0x5f4
	int32_t ClientCycles; // 0x5f8
	float NearClipPlane; // 0x5fc
	char bHardwareSurveyEnabled : 1; // 0x600
	char bSubtitlesEnabled : 1; // 0x600
	char bSubtitlesForcedOff : 1; // 0x600
	int32_t MaximumLoopIterationCount; // 0x604
	char bCanBlueprintsTickByDefault : 1; // 0x608
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x608
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x608
	char bEnableEditorPSysRealtimeLOD : 1; // 0x608
	char bSmoothFrameRate : 1; // 0x608
	char bUseFixedFrameRate : 1; // 0x608
	float FixedFrameRate; // 0x60c
	FFloatRange SmoothedFrameRateRange; // 0x610
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x620
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x624
	char bShouldGenerateLowQualityLightmaps : 1; // 0x628
	FColor C_WorldBox; // 0x62c
	FColor C_BrushWire; // 0x630
	FColor C_AddWire; // 0x634
	FColor C_SubtractWire; // 0x638
	FColor C_SemiSolidWire; // 0x63c
	FColor C_NonSolidWire; // 0x640
	FColor C_WireBackground; // 0x644
	FColor C_ScaleBoxHi; // 0x648
	FColor C_VolumeCollision; // 0x64c
	FColor C_BSPCollision; // 0x650
	FColor C_OrthoBackground; // 0x654
	FColor C_Volume; // 0x658
	FColor C_BrushShape; // 0x65c
	float StreamingDistanceFactor; // 0x660
	ETransitionType TransitionType; // 0x664
	FString TransitionDescription; // 0x668
	FString TransitionGameMode; // 0x678
	float MeshLODRange; // 0x688
	char bAllowMatureLanguage : 1; // 0x68c
	float CameraRotationThreshold; // 0x690
	float CameraTranslationThreshold; // 0x694
	float PrimitiveProbablyVisibleTime; // 0x698
	float MaxOcclusionPixelsFraction; // 0x69c
	char bPauseOnLossOfFocus : 1; // 0x6a0
	int32_t MaxParticleResize; // 0x6a4
	int32_t MaxParticleResizeWarn; // 0x6a8
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x6b0
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x6c0
	float NetClientTicksPerSecond; // 0x6dc
	float DisplayGamma; // 0x6e0
	float MinDesiredFrameRate; // 0x6e4
	FLinearColor DefaultSelectedMaterialColor; // 0x6e8
	FLinearColor SelectedMaterialColor; // 0x6f8
	FLinearColor SelectionOutlineColor; // 0x708
	FLinearColor SubduedSelectionOutlineColor; // 0x718
	FLinearColor SelectedMaterialColorOverride; // 0x728
	bool bIsOverridingSelectedColor; // 0x738
	char bEnableOnScreenDebugMessages : 1; // 0x750
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x750
	char bSuppressMapWarnings : 1; // 0x750
	char bDisableAILogging : 1; // 0x750
	uint32_t bEnableVisualLogRecordingOnStart; // 0x754
	int32_t ScreenSaverInhibitorSemaphore; // 0x75c
	char bLockReadOnlyLevels : 1; // 0x760
	FString ParticleEventManagerClassPath; // 0x768
	float SelectionHighlightIntensity; // 0x788
	float SelectionMeshSectionHighlightIntensity; // 0x78c
	float BSPSelectionHighlightIntensity; // 0x790
	float HoverHighlightIntensity; // 0x794
	float SelectionHighlightIntensityBillboards; // 0x798
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xbf0
	TArray<FString> ServerActors; // 0xc00
	TArray<FString> RuntimeServerActors; // 0xc10
	char bStartedLoadMapMovie : 1; // 0xc20
	int32_t NextWorldContextHandle; // 0xc38
	TArray<UObject*> KeepAliveAdditionalComponentClasses; // 0xd00
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x60
	FExpressionInput Height; // 0x98
	FExpressionInput HeightRatioInput; // 0xd0
	float HeightRatio; // 0x108
	float ReferencePlane; // 0x10c
	uint32_t ConstCoordinate; // 0x110
};

struct UHoudiniHandleComponent : USceneComponent {
	EHoudiniHandleType HandleType; // 0x3b0
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x80
	FRawDistributionVector ScaleFactor; // 0xd0
	FRawDistributionVector Direction; // 0x120
};

struct UNiagaraEmitterProperties : UObject {
	FString EmitterName; // 0x28
	bool bIsEnabled; // 0x38
	float SpawnRate; // 0x3c
	UMaterial* Material; // 0x40
	EEmitterRenderModuleType RenderModuleType; // 0x48
	float StartTime; // 0x4c
	float EndTime; // 0x50
	UNiagaraEffectRendererProperties* RendererProperties; // 0x58
	int32_t NumLoops; // 0x60
	FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x68
	FNiagaraEmitterScriptProperties SpawnScriptProps; // 0xc0
};

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x50
};

struct UConanPathFollowingComponent : UPathFollowingComponent {
	float PathWidth; // 0x3a8
	float BreakAngle; // 0x3ac
	float AccelerationFactor; // 0x3b0
	float AccelerationMinSpeed; // 0x3b4
	float NavMeshSearchExtent; // 0x3b8
	float AvoidanceMaxTimeHorizonSeconds; // 0x3bc
	float AvoidanceMinTimeHorizonSeconds; // 0x3c0
	float AvoidanceMinDistance; // 0x3c4
	float AvoidanceSearchRadius; // 0x3c8
	float InitialAvoidanceYawSearchRange; // 0x3cc
	float AvoidanceMinSpeed; // 0x3d0
	float SecondsUntilFullAvoidanceYawSearchRange; // 0x3d4
	char AvoidPlayerCharacters : 1; // 0x3d8
	TArray<FPredictedObstacle> PredictedObstacles; // 0x3e0
	FPolarUtilityVector YawAngleWeights; // 0x3f0
	TArray<AActor*> m_CandidateObstacles; // 0x4b0
};

struct AVolume : ABrush {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x38
};

struct ALandscapeProxy : AActor {
	ULandscapeSplinesComponent* SplineComponent; // 0x3d0
	FGuid LandscapeGuid; // 0x3d8
	FIntPoint LandscapeSectionOffset; // 0x3e8
	int32_t MaxLodLevel; // 0x3f0
	float LODDistanceFactor; // 0x3f4
	ELandscapeLODFalloff LODFalloff; // 0x3f8
	int32_t StaticLightingLOD; // 0x3fc
	UPhysicalMaterial* DefaultPhysMaterial; // 0x400
	float StreamingDistanceMultiplier; // 0x408
	UMaterialInterface* LandscapeMaterial; // 0x410
	UMaterialInterface* LandscapeHoleMaterial; // 0x418
	float NegativeZBoundsExtension; // 0x420
	float PositiveZBoundsExtension; // 0x424
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x428
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x438
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x448
	bool bHasLandscapeGrass; // 0x4b8
	float StaticLightingResolution; // 0x4bc
	char bCastStaticShadow : 1; // 0x4c0
	char bCastShadowAsTwoSided : 1; // 0x4c0
	char bCastFarShadow : 1; // 0x4c0
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x4c0
	FLightmassPrimitiveSettings LightmassSettings; // 0x4c4
	int32_t CollisionMipLevel; // 0x4dc
	int32_t SimpleCollisionMipLevel; // 0x4e0
	float CollisionThickness; // 0x4e4
	FBodyInstance BodyInstance; // 0x4f0
	char bGenerateOverlapEvents : 1; // 0x720
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x720
	int32_t ComponentSizeQuads; // 0x724
	int32_t SubsectionSizeQuads; // 0x728
	int32_t NumSubsections; // 0x72c
	char bUsedForNavigation : 1; // 0x730
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x734
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x735
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
	FName SkelMeshActorParamName; // 0x60
	int32_t NumPreSelectedIndices; // 0x68
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x3d0
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

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x3d0
};

struct UMaterialExpressionDecalDerivative : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UAISenseConfig_Team : UAISenseConfig {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x60
	float ConstWidth; // 0x98
	float ConstHeight; // 0x9c
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x60
};

struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	FRawDistributionFloat SpawnCount; // 0x40
	char bUseParticleTime : 1; // 0x78
	char bUsePSysLocation : 1; // 0x78
	char bInheritVelocity : 1; // 0x78
	FRawDistributionVector InheritVelocityScale; // 0x80
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xd0
	char bBanPhysicalMaterials : 1; // 0xe0
};

struct APlayerState : AInfo {
	float score; // 0x3d0
	char Ping; // 0x3d4
	FString playerName; // 0x3d8
	int32_t PlayerId; // 0x3f8
	char bIsSpectator : 1; // 0x3fc
	char bOnlySpectator : 1; // 0x3fc
	char bIsABot : 1; // 0x3fc
	char bIsInactive : 1; // 0x3fc
	char bFromPreviousLevel : 1; // 0x3fc
	int32_t StartTime; // 0x400
	ULocalMessage* EngineMessageClass; // 0x408
	FString SavedNetworkAddress; // 0x418
	FUniqueNetIdRepl UniqueID; // 0x428
};

struct UPlaceableInfoBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UNetConnection : UPlayer {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMap; // 0x60
	TArray<UChannel*> OpenChannels; // 0x68
	TArray<AActor*> SentTemporaries; // 0x78
	AActor* ViewTarget; // 0x88
	AActor* OwningActor; // 0x90
	int32_t MaxPacket; // 0x98
	char InternalAck : 1; // 0x9c
	TArray<UObject*> AsyncLoadedObjects; // 0xa0
	FUniqueNetIdRepl PlayerId; // 0x170
	double LastReceiveTime; // 0x200
	TMap<AActor*, UActorChannel*> ActorChannels; // 0x334e0
	TArray<UChannel*> ChannelsToTick; // 0x33730
};

struct ULevelScriptBlueprint : UBlueprint {
	char bRecompileOnLoad : 1; // 0x50
	UObject* ParentClass; // 0x58
	UObject* PRIVATE_InnermostPreviousCDO; // 0x60
	char bHasBeenRegenerated : 1; // 0x68
	char bIsRegeneratingOnLoad : 1; // 0x68
	USimpleConstructionScript* SimpleConstructionScript; // 0x70
	TArray<UActorComponent*> ComponentTemplates; // 0x78
	TArray<UTimelineTemplate*> Timelines; // 0x88
	UInheritableComponentHandler* InheritableComponentHandler; // 0x98
	EBlueprintType BlueprintType; // 0xa0
	int32_t BlueprintSystemVersion; // 0xa4
	bool bNativize; // 0x190
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x60
	EMaterialPositionTransformSource TransformSourceType; // 0x98
	EMaterialPositionTransformSource TransformType; // 0x99
};

struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x3d0
	ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x3d8
	bool bLobbyStarted; // 0x3e8
	float WaitForPlayersTimeRemaining; // 0x3ec
	FLobbyPlayerStateInfoArray Players; // 0x3f0
};

struct AConanGameMode : ADWGameMode {
	USpawnTableComponent* SpawnTableSystem; // 0x630
	bool m_DatabaseOK; // 0x638
	bool RunInsideCollisionCheckOnLoad; // 0x639
	APurgeVolume* PurgeVolumeClass; // 0x640
	ASharedDebugInfo* SharedDebugInfoClass; // 0x648
	UConanProjectileRegistry* ConanProjectileRegistry; // 0x690
	TArray<FString> CountryBlackList; // 0x6b8
	bool BlockVPNConnections; // 0x6c8
	uint32_t MaxPeriodicBackupsToKeep; // 0x6cc
	float PeriodicBackupInterval; // 0x6d0
	int32_t MaxUpgradeBackupstoKeep; // 0x6d4
	UFrameRateReporter* m_ServerFrameRateReporter; // 0x6d8
	float CorpsesHarvestTimeLockSeconds; // 0x8ac
	FTimerHandle m_TickServerPopulationTimer; // 0x8d0
	FTimerHandle m_VerifyAttributesTimer; // 0x8d8
	FTimerHandle m_GetServerRatingRetryTimer; // 0x8e0
	URatingServerRequestConnection* m_RatingServerConnection; // 0x8e8
	FTimerHandle m_GuildMemberCountReportTimer; // 0x8f0
	FTimerHandle m_GuildThrallCountReportTimer; // 0x8f8
	FTimerHandle m_AttributeDistributionReportTimer; // 0x900
	FTimerHandle m_ServerMergeExportTimer; // 0x908
	TArray<ABuildingBase*> m_BuildingsBeingRecorded; // 0x9e0
	TMap<int32_t, UObject*> m_BuildingRecordingPieceTypesIdToClass; // 0x9f0
	TMap<UObject*, int32_t> m_BuildingRecordingPieceTypesClassToId; // 0xa40
	TSet<ABuildingBase*> m_BuildingsNeedingReplicationRebuild; // 0xb38
	TMap<int64_t, ULoadCharacterCallProxy*> m_LoadOfflineCharacterCallbacks; // 0xb88
	TMap<int64_t, ULoadInventoryCallProxy*> m_LoadOfflineInventoryCallbacks; // 0xbd8
	TArray<UUniqueID*> m_LoadOfflineInventoryActiveUIDs; // 0xc28
	TSet<APlaceableBase*> m_PlaceablesForValidation; // 0xcd8
	TArray<APlaceableBase*> m_PlaceablesForStabilityCheck; // 0xd28
	TSet<ABuildingBase*> m_BuildingsForValidation; // 0xd38
	TSet<ABuildingBase*> m_AllMasterBuildings; // 0xdd8
	UDbTransfer* DbTransfer; // 0xe28
};

struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	FExpressionInput BaseColor; // 0x60
	FExpressionInput Metallic; // 0x98
	FExpressionInput Specular; // 0xd0
	FExpressionInput Roughness; // 0x108
	FExpressionInput EmissiveColor; // 0x140
	FExpressionInput Opacity; // 0x178
	FExpressionInput OpacityMask; // 0x1b0
	FExpressionInput Normal; // 0x1e8
	FExpressionInput WorldPositionOffset; // 0x220
	FExpressionInput WorldDisplacement; // 0x258
	FExpressionInput TessellationMultiplier; // 0x290
	FExpressionInput SubsurfaceColor; // 0x2c8
	FExpressionInput ClearCoat; // 0x300
	FExpressionInput ClearCoatRoughness; // 0x338
	FExpressionInput AmbientOcclusion; // 0x370
	FExpressionInput Refraction; // 0x3a8
	FExpressionInput CustomizedUVs[0x8]; // 0x3e0
	FExpressionInput PixelDepthOffset; // 0x5a0
};

struct UTexture2D : UTexture {
	int32_t RequestedMips; // 0xc8
	int32_t ResidentMips; // 0xcc
	int32_t StreamingIndex; // 0xd0
	int32_t LevelIndex; // 0xd4
	int32_t FirstResourceMemMip; // 0xd8
	FIntPoint ImportedSize; // 0xdc
	double ForceMipLevelsToBeResidentTimestamp; // 0xe8
	char bTemporarilyDisableStreaming : 1; // 0xf0
	char bIsStreamable : 1; // 0xf0
	char bHasStreamingUpdatePending : 1; // 0xf0
	char bHasCancelationPending : 1; // 0xf0
	char bForceMiplevelsToBeResident : 1; // 0xf0
	char bIgnoreStreamingMipBias : 1; // 0xf0
	char bGlobalForceMipLevelsToBeResident : 1; // 0xf0
	TextureAddress AddressX; // 0xf4
	TextureAddress AddressY; // 0xf5
};

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x118
	float Period; // 0x11c
	float Radius; // 0x120
	USlateBrushAsset* PieceImage; // 0x128
	FSlateBrush Image; // 0x130
	bool bEnableRadius; // 0x1c0
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct URichTextBlockDecorator : UObject {
	bool bReveal; // 0x28
	int32_t RevealedIndex; // 0x2c
};

struct UServerInfoBase : URootWidget {
	FBlueprintSessionResult m_Session; // 0x318
	bool m_IsBattlEyeEnabled; // 0x3f8
	bool m_ServerTransferEnabled; // 0x3f9
	FServerModList m_ServerModList; // 0x400
	bool m_IsValid; // 0x418
	USoundBase* HoveredSound; // 0x420
	FScriptMulticastDelegate SignalServerEntrySelected; // 0x450
	FScriptMulticastDelegate SignalServerListDeselected; // 0x460
	FScriptMulticastDelegate SignalServerEntryInvoked; // 0x470
};

struct UBuildingMasterActorComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<UCameraShake*> ActiveShakes; // 0x48
	float SplitScreenShakeScale; // 0x58
};

struct UMaterialExpressionDecalLifetimeOpacity : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UNavLinkRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UParticleModuleParameterBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UMovieSceneByteSection : UMovieSceneSection {
	FIntegralCurve ByteCurve; // 0xd0
};

struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x30
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x40
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x58
};

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
};

struct UMapData : UBlueprintFunctionLibrary {
	TMap<FString, FMapDataRow> m_MapData; // 0x28
	UDataTable* m_MapDataTable; // 0x78
};

struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x30
	int32_t Frequency; // 0x34
	int32_t Frequency_LowRange; // 0x38
	FRawDistributionVector NoiseRange; // 0x40
	FRawDistributionFloat NoiseRangeScale; // 0x90
	char bNRScaleEmitterTime : 1; // 0xc8
	FRawDistributionVector NoiseSpeed; // 0xd0
	char bSmooth : 1; // 0x120
	float NoiseLockRadius; // 0x124
	char bNoiseLock : 1; // 0x128
	char bOscillate : 1; // 0x128
	float NoiseLockTime; // 0x12c
	float NoiseTension; // 0x130
	char bUseNoiseTangents : 1; // 0x134
	FRawDistributionFloat NoiseTangentStrength; // 0x138
	int32_t NoiseTessellation; // 0x170
	char bTargetNoise : 1; // 0x174
	float FrequencyDistance; // 0x178
	char bApplyNoiseScale : 1; // 0x17c
	FRawDistributionFloat NoiseScale; // 0x180
};

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x60
};

struct URejoinCheck : UObject {
	ERejoinStatus LastKnownStatus; // 0x28
	bool bRejoinAfterCheck; // 0x29
	bool bAttemptingRejoin; // 0x2a
};

struct APhasedAutomationActorBase : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UDialogueVoice : UObject {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x300
	AActor* ChildActor; // 0x308
	AActor* ChildActorTemplate; // 0x310
};

struct UEmoteItem : UGameItem {
	FScriptMulticastDelegate SignalIntStatChanged; // 0x30
	FScriptMulticastDelegate SignalFloatStatChanged; // 0x40
	FScriptMulticastDelegate SignalEnableStateChanged; // 0x50
	FScriptMulticastDelegate SignalForceUnequip; // 0x60
	FScriptMulticastDelegate SignalIconChanged; // 0x70
	FScriptMulticastDelegate SignalIconLayersChanged; // 0x80
	FScriptMulticastDelegate SignalColorChanged; // 0x90
	FScriptMulticastDelegate SignalBorderChanged; // 0xa0
	FScriptMulticastDelegate SignalVisualMeshLoaded; // 0xb0
	FScriptMulticastDelegate SignalRepairCompleted; // 0xc0
	FScriptMulticastDelegate SignalVisualObjectClassLoaded; // 0xd0
	TArray<FGameItemStatModification> StatModifications; // 0xe0
	UDestructibleMesh* ActualDestructibleMesh; // 0x100
	AInventoryItemBase* VisualActor; // 0x108
	AActor* OwnerActor; // 0x110
	float RepairPercentPerTick; // 0x118
	int32_t m_MapMarkerIconID; // 0x11c
	int32_t templateID; // 0x120
	UTexture2D* m_ActualIcon; // 0x130
	TArray<UTexture2D*> m_ActualLayeredIcons; // 0x138
	UTexture2D* m_BorderIcon; // 0x148
	UObject* VisualObjectClass; // 0x200
	UItemInventory* m_OwnerInventory; // 0x208
	bool m_IsEnabled; // 0x244
	bool CanUseWhileClimbing; // 0x246
	EGameItemType TypeID; // 0x247
};

struct UPaperdollIconSlot : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UActorSequencePlayer : UMovieSceneSequencePlayer {
	FScriptMulticastDelegate OnPlay; // 0x380
	FScriptMulticastDelegate OnStop; // 0x390
	FScriptMulticastDelegate OnPause; // 0x3a0
	char bIsPlaying : 1; // 0x3b0
	char bReversePlayback : 1; // 0x3b0
	char bPendingFirstUpdate : 1; // 0x3b0
	UMovieSceneSequence* Sequence; // 0x3b8
	float TimeCursorPosition; // 0x3c0
	float StartTime; // 0x3c4
	float EndTime; // 0x3c8
	int32_t CurrentNumLoops; // 0x3cc
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3e0
};

struct ACameraBlockingVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x28
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x38
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x48
	char bUseAsyncScene : 1; // 0x58
	TArray<UBodySetup*> BodySetup; // 0x100
};

struct UBuildingItem : UGameItem {
	UObject* BuildingObjectClass; // 0x248
};

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FIntegralCurve ActorGuidIndexCurve; // 0xd0
	TArray<FString> ActorGuidStrings; // 0x150
};

struct UAddGuildMemberCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UEditorStyleSettings : UObject {
	FLinearColor SelectionColor; // 0x28
	FLinearColor PressedSelectionColor; // 0x38
	FLinearColor InactiveSelectionColor; // 0x48
	FLinearColor KeyboardFocusColor; // 0x58
	EColorVisionDeficiency ColorVisionDeficiencyPreviewType; // 0x68
	char bUseSmallToolBarIcons : 1; // 0x6c
	char bUseGrid : 1; // 0x6c
	FLinearColor RegularColor; // 0x70
	FLinearColor RuleColor; // 0x80
	FLinearColor CenterColor; // 0x90
	uint32_t GridSnapSize; // 0xa0
	char bEnableWindowAnimations : 1; // 0xa4
	char bShowFriendlyNames : 1; // 0xa4
	char bExpandConfigurationMenus : 1; // 0xa4
	char bShowProjectMenus : 1; // 0xa4
	char bShowLaunchMenus : 1; // 0xa4
	FLinearColor LogBackgroundColor; // 0xa8
	FLinearColor LogSelectionBackgroundColor; // 0xb8
	FLinearColor LogNormalColor; // 0xc8
	FLinearColor LogCommandColor; // 0xd8
	FLinearColor LogWarningColor; // 0xe8
	FLinearColor LogErrorColor; // 0xf8
	char bShowAllAdvancedDetails : 1; // 0x108
	int32_t LogFontSize; // 0x10c
	ELogTimes LogTimestampMode; // 0x110
	bool bPromoteOutputLogWarningsDuringPIE; // 0x111
	EAssetEditorOpenLocation AssetEditorOpenLocation; // 0x112
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0xc8
	FName TrackName; // 0xd8
};

struct ARigidBodyBase : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct USignTextInputBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct AConanCharacter : ACharacter {
	bool NPCWasSpawnedByAPlayer; // 0x818
	bool BlockIdleFidgets; // 0x820
	bool NPCAttacksBuildings; // 0x821
	FScriptMulticastDelegate OnCharacterNameChanged; // 0x910
	FScriptMulticastDelegate OnCharacterSpawnTableIDset; // 0x990
	UAttributeSystem* AttributeSystem; // 0x9a0
	bool PreferCurrentWeaponWhenSwapping; // 0x9a8
	bool bThrallAsyncLoadDone; // 0x9c8
	FScriptMulticastDelegate OnSecondTick; // 0x9d0
	AActor* m_InteractingActor; // 0x9e0
	bool WeaponChangeDisabled; // 0x9f0
	bool FreezeAllItems; // 0x9f1
	bool m_IsReparing; // 0x9f2
	bool HasTimeCatchedUp; // 0x9f3
	int32_t FeatVersion; // 0x9f4
	UObject* m_CurrentTarget; // 0x9f8
	int32_t m_CurrentSubTargetIndex; // 0xa00
	UUniqueID* CharacterUniqueID; // 0xa08
	UUniqueID* CharacterGuildID; // 0xa10
	UUniqueID* CharacterIDOverride; // 0xa18
	int64_t m_LastEnteredLandClaimOwnerId; // 0xa20
	FName SourceSpawnTable; // 0xa28
	TMap<WeaponArcheTypes, FComboPresetTableRow> ComboPresetsMap; // 0xa30
	bool isAlive; // 0xa80
	FDateTime lastTimeOnline; // 0xa88
	int32_t community; // 0xa90
	bool IsAggressive; // 0xa94
	bool IsThrall; // 0xa95
	bool IsPet; // 0xa96
	bool IsDialogNPC; // 0xa97
	float MinEmoteTime; // 0xa98
	float MaxEmoteTime; // 0xa9c
	float EmoteChance; // 0xaa0
	bool HasCombatTarget; // 0xaa4
	float WaypointAcceptanceRange; // 0xaa8
	FVector CombatTargetLocation; // 0xab8
	UEmoteController* EmoteController; // 0xac8
	UTargetDistributionComponent* TargetingComponent; // 0xad0
	UAvoidanceComponent* AvoidanceComponent; // 0xad8
	FDateTime LastFollowerRescueTimestamp; // 0xaf0
	int32_t WalkSpeed; // 0xaf8
	int32_t RunSpeed; // 0xafc
	FTimespan MaxKnockbackChainTime; // 0xb00
	FTimespan KnockbackImmunityPeriod; // 0xb08
	bool IsInStunBreakWindow; // 0xb10
	float CurrentRotationMultiplier; // 0xb14
	float SteeringRotationRate; // 0xb18
	float DefaultRotationRate; // 0xb1c
	float DoubleJumpTimeoutTime; // 0xb20
	bool isDoubleJumpTimoutTimerActive; // 0xb24
	bool HasDoubleJumped; // 0xb25
	EPhysicalSurface currentSurfaceType; // 0xb26
	FHitResult CachedHitResultForGroundSurface; // 0xb28
	bool bShouldUseDirectionalMovement; // 0xbb0
	FScriptMulticastDelegate OnActionStart; // 0xbb8
	FScriptMulticastDelegate OnActionEnd; // 0xbc8
	bool SprintNoCost; // 0xbf0
	bool SenseDetection; // 0xbf1
	bool PlayerInvisibility; // 0xbf2
	bool IsDemiGod; // 0xbf3
	FScriptMulticastDelegate OnCharacterStateChanged; // 0xbf8
	float AdditionalInteractionExtent; // 0xc80
	AConanCharacter* LastDamageCauserCharacter; // 0xc88
	float DisengagementDistance; // 0xc90
	float EngagementDistance; // 0xc94
	FScriptMulticastDelegate SignalClientOnDamageTaken; // 0xc98
	FScriptMulticastDelegate SignalOnKilled; // 0xca8
	TArray<AConanCharacter*> CarriedPeople; // 0xeb0
	float BeingCarriedWeight; // 0xec0
	bool EnableFloorTilt; // 0xec4
	bool EnableTiltRoll; // 0xecc
	float TiltAdjust; // 0xed0
	float MaxTiltPitch; // 0xed4
	float MaxTiltRoll; // 0xed8
	bool bRootMotionAutoFreeze; // 0xedc
	FScriptMulticastDelegate OnRootMotionAutoFrozen; // 0xee0
	int32_t ClimbingBlockingVolumeCount; // 0xef0
	FCharacterIKCollection CharacterIKCollection; // 0xf00
	bool ReplicatedHangingFromCeiling; // 0x1190
	bool ReplicatedIsInSlidingMode; // 0x1191
	bool NavMeshIgnoreComponentUpdate; // 0x1192
	bool NavMeshIgnoreChildComponentUpdate; // 0x1193
	FScriptMulticastDelegate OnCharacterPossessedOnClient; // 0x1198
	float LastCryForHelp; // 0x11a8
	bool AllowCryForHelp; // 0x11ac
	bool AllowTargetSpottedCry; // 0x11ad
	float CryForHelpRange; // 0x11b0
	float TargetSpottedCryRange; // 0x11b4
	float AdditionalFollowingDistance; // 0x11b8
	FScriptMulticastDelegate SignalCharacterIsBuilding; // 0x11c0
	FScriptMulticastDelegate SignalCharacterIsBuildingThrall; // 0x11d0
	FScriptMulticastDelegate SignalMountReplicated; // 0x11e0
	float SecondTickRate; // 0x11f0
	bool m_CreatedFromCharacterCreation; // 0x11f4
	bool WasKilledByItself; // 0x11f5
	bool HungerEnabled; // 0x11f6
	bool ThirstEnabled; // 0x11f7
	FScriptMulticastDelegate OnCharacterMoved; // 0x11f8
	FScriptMulticastDelegate OnMountStaggered; // 0x1208
	float HeightToSaddle; // 0x1218
	FRotator MountCameraOrientation; // 0x121c
	bool IsMount; // 0x1228
	int64_t MountedNPCID; // 0x1230
	bool IsSpeaking; // 0x1280
	FScriptMulticastDelegate OnCharacterOverridePvPChanged; // 0x1300
	UConanTetheringController* m_TetheringController; // 0x1310
	TSet<TWeakObjectPtr<AConanPlayerController>> ForcedNetRelevantObservers; // 0x1318
	EAIEngagementBehavior EngagementBehavior; // 0x1368
	EAIFollowerTacticType FollowerTactic; // 0x1369
	TSet<UObject*> m_PendingStreams; // 0x1378
	FText m_CharacterBio; // 0x13c8
	EBiographyAccess m_AllowedBioAccess; // 0x13e0
	EBiographySharing m_AllowedBioSharing; // 0x13e1
	bool CharacterLayoutSanitized; // 0x13e2
	ECharacterState m_CharacterState; // 0x1438
	FText m_KillerName; // 0x1450
	FUniqueNetIdRepl m_KillerId; // 0x1468
	UStatHolder* m_StatHolder; // 0x1480
	AConanGameState* m_GameState; // 0x1488
	UHungerSystem* m_HungerSystem; // 0x1490
	FEnduranceData m_EnduranceData; // 0x14b0
	UActorPersistenceComponent* m_ActorPersistence; // 0x14c0
	UEmoteInventory* m_EmoteInventory; // 0x14c8
	UBuildSystemComponent* m_BuildSystem; // 0x14d0
	FText m_CharacterName; // 0x14d8
	EGUIControlMode m_GUIControlMode; // 0x14f8
	char m_OverridePvP : 1; // 0x1510
	char m_BlockGuildInvites : 1; // 0x1510
	UMessageBoxWidget* m_BattleStandardDialog; // 0x1518
	float SprintStaminacost; // 0x1698
	float SwimStaminacost; // 0x169c
	float MaxLoadingInvulnerabilityTime; // 0x16c0
	float LoadingInvulnerabilityGraceTime; // 0x16c4
	bool IsLoadingInvulnerable; // 0x16c8
	bool IsCombatConcussiveRegenInterrupted; // 0x16c9
	float CombatConcussiveRegen; // 0x16cc
	float CombatConcussiveAccumulation; // 0x16d0
	float CombatStaminaRegenMod; // 0x16d4
	bool IsCombatPossessed; // 0x16d8
	UPerkSystemComponent* PerkSystemComponent; // 0x16e0
};

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraAnimPlaySpace PlaySpace; // 0x78
};

struct UW_FCComboBoxString_C : UFCComboBoxString {
	UComboBoxString* ComboBox; // 0x3d0
};

struct UWindowTitleBarArea : UContentWidget {
	bool bDoubleClickTogglesFullscreen; // 0x130
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x68
	char bFloor : 1; // 0x68
	char bApplyPSysScale : 1; // 0x68
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x88
};

struct UConanAITask_Move : UAITask_MoveTo {
	FScriptMulticastDelegate OnRequestFailed; // 0x70
	FScriptMulticastDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	FExpressionInput Alpha; // 0xd0
	float ConstA; // 0x108
	float ConstB; // 0x10c
	float ConstAlpha; // 0x110
};

struct UPaperFlipbookComponent : UMeshComponent {
	UPaperFlipbook* SourceFlipbook; // 0x7c8
	UMaterialInterface* Material; // 0x7d0
	float PlayRate; // 0x7d8
	char bLooping : 1; // 0x7dc
	char bReversePlayback : 1; // 0x7dc
	char bPlaying : 1; // 0x7dc
	float AccumulatedTime; // 0x7e0
	int32_t CachedFrameIndex; // 0x7e4
	FLinearColor SpriteColor; // 0x7e8
	UBodySetup* CachedBodySetup; // 0x7f8
	FScriptMulticastDelegate OnFinishedPlaying; // 0x800
};

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct USoundWaveVoiceChat : USoundWaveProcedural {
	int32_t CompressionQuality; // 0x90
	char bLooping : 1; // 0x94
	char bStreaming : 1; // 0x94
	int32_t StreamingPriority; // 0x98
	char bMature : 1; // 0x9c
	char bManualWordWrap : 1; // 0x9c
	char bSingleLine : 1; // 0x9c
	char bVirtualizeWhenSilent : 1; // 0x9c
	ESoundGroup SoundGroup; // 0xa0
	FString SpokenText; // 0xa8
	float SubtitlePriority; // 0xb8
	float Volume; // 0xbc
	float Pitch; // 0xc0
	int32_t NumChannels; // 0xc4
	int32_t SampleRate; // 0xc8
	int32_t RawPCMDataSize; // 0xcc
	TArray<FSubtitleCue> Subtitles; // 0xd0
	TArray<FLocalizedSubtitle> LocalizedSubtitles; // 0xe0
	UCurveTable* Curves; // 0xf0
	UCurveTable* InternalCurves; // 0xf8
};

struct UBlendSpaceBase : UAnimationAsset {
	bool bRotationBlendInMeshSpace; // 0x80
	float AnimLength; // 0x84
	TArray<FPerBoneInterpolation> PerBoneBlend; // 0x88
	FInterpolationParameter InterpolationParam[0x3]; // 0x98
	float TargetWeightInterpolationSpeedPerSec; // 0xb0
	ENotifyTriggerMode NotifyTriggerMode; // 0xb4
	int32_t SampleIndexWithMarkers; // 0xb8
	TArray<FBlendSample> SampleData; // 0xc0
	TArray<FEditorElement> GridSamples; // 0xd0
	FBlendParameter BlendParameters[0x3]; // 0xe0
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct USceneComponent : UActorComponent {
	USceneComponent* AttachParent; // 0xf8
	TArray<USceneComponent*> AttachChildren; // 0x100
	TSet<USceneComponent*> ClientAttachedChildren; // 0x110
	FName AttachSocketName; // 0x160
	char bWorldToComponentUpdated : 1; // 0x168
	char bAbsoluteLocation : 1; // 0x168
	char bAbsoluteRotation : 1; // 0x168
	char bAbsoluteScale : 1; // 0x168
	char bVisible : 1; // 0x168
	char bHiddenInGame : 1; // 0x168
	char bShouldUpdatePhysicsVolume : 1; // 0x168
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x168
	char bUseAttachParentBound : 1; // 0x168
	char bShouldDisregardChildComponentsForNavigationUpdates : 1; // 0x168
	char bShouldDisregardAttachedActorsForNavigationUpdates : 1; // 0x168
	EComponentMobility Mobility; // 0x16d
	EDetailMode DetailMode; // 0x16e
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0x170
	FVector RelativeLocation; // 0x1f0
	FRotator RelativeRotation; // 0x1fc
	FVector RelativeScale3D; // 0x230
	FVector ComponentVelocity; // 0x258
	FScriptMulticastDelegate PhysicsVolumeChangedDelegate; // 0x268
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	char Attached : 1; // 0x70
	FName SocketName; // 0x78
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct UControlPointMeshComponent : UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x7c8
	int32_t PreviousLODLevel; // 0x7cc
	UStaticMesh* StaticMesh; // 0x7d0
	int32_t MinLOD; // 0x7d8
	int32_t SubDivisionStepSize; // 0x7dc
	char bOverrideMinLOD : 1; // 0x7e0
	char bOverrideNavigationExport : 1; // 0x7e0
	char bForceNavigationObstacle : 1; // 0x7e0
	char bDisallowMeshPaintPerInstance : 1; // 0x7e0
	char bUseDefaultCollision : 1; // 0x7e0
	char bUseSubDivisions : 1; // 0x7e0
	char bIgnoreInstanceForTextureStreaming : 1; // 0x7e0
	char bOverrideLightMapRes : 1; // 0x7e0
	char bCastDistanceFieldIndirectShadow : 1; // 0x7e0
	int32_t OverriddenLightMapRes; // 0x7e4
	float DistanceFieldIndirectShadowMinVisibility; // 0x7e8
	float StreamingDistanceMultiplier; // 0x7ec
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x7f0
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x800
	FLightmassPrimitiveSettings LightmassSettings; // 0x810
};

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x40
	FWidgetNavigationData Left; // 0x58
	FWidgetNavigationData Right; // 0x70
	FWidgetNavigationData Next; // 0x88
	FWidgetNavigationData Previous; // 0xa0
};

struct UPlayFabDataAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xf0
	UPlayFabJsonObject* RequestJsonObj; // 0xf8
	UPlayFabJsonObject* ResponseJsonObj; // 0x100
};

struct UPieRenderWidget : UCustomRenderWidget {
	UTexture2D* Texture; // 0x128
	FLinearColor ColorAndOpacity; // 0x130
	float StartAngle; // 0x140
	float AngleSpan; // 0x144
	float InnerRadius; // 0x148
	float OuterRadius; // 0x14c
};

struct UW_FCMultiLineEditableTextBox_C : UFCEditableMultiLineText {
	UMultiLineEditableText* mMultiLineEditableText; // 0x680
};

struct UAdminPanelBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0x40
};

struct UUtilityMatrix : UObject {
	FBoxBounds Bounds; // 0x28
	float UnitsPerCell; // 0x40
};

struct USoundSubmix : UObject {
	TArray<USoundSubmix*> ChildSubmixes; // 0x28
	USoundSubmix* ParentSubmix; // 0x38
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x40
	float OutputWetLevel; // 0x50
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType notifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x60
	EMaterialExposedTextureProperty Property; // 0x98
};

struct UPlayFabExperimentationAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x110
	UPlayFabJsonObject* RequestJsonObj; // 0x118
	UPlayFabJsonObject* ResponseJsonObj; // 0x120
};

struct UMaterialExpressionTwoSidedSign : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UGameItem : UObject {
	FScriptMulticastDelegate SignalIntStatChanged; // 0x30
	FScriptMulticastDelegate SignalFloatStatChanged; // 0x40
	FScriptMulticastDelegate SignalEnableStateChanged; // 0x50
	FScriptMulticastDelegate SignalForceUnequip; // 0x60
	FScriptMulticastDelegate SignalIconChanged; // 0x70
	FScriptMulticastDelegate SignalIconLayersChanged; // 0x80
	FScriptMulticastDelegate SignalColorChanged; // 0x90
	FScriptMulticastDelegate SignalBorderChanged; // 0xa0
	FScriptMulticastDelegate SignalVisualMeshLoaded; // 0xb0
	FScriptMulticastDelegate SignalRepairCompleted; // 0xc0
	FScriptMulticastDelegate SignalVisualObjectClassLoaded; // 0xd0
	TArray<FGameItemStatModification> StatModifications; // 0xe0
	UDestructibleMesh* ActualDestructibleMesh; // 0x100
	AInventoryItemBase* VisualActor; // 0x108
	AActor* OwnerActor; // 0x110
	float RepairPercentPerTick; // 0x118
	int32_t m_MapMarkerIconID; // 0x11c
	int32_t templateID; // 0x120
	UTexture2D* m_ActualIcon; // 0x130
	TArray<UTexture2D*> m_ActualLayeredIcons; // 0x138
	UTexture2D* m_BorderIcon; // 0x148
	UObject* VisualObjectClass; // 0x200
	UItemInventory* m_OwnerInventory; // 0x208
	bool m_IsEnabled; // 0x244
	bool CanUseWhileClimbing; // 0x246
	EGameItemType TypeID; // 0x247
};

struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x28
	UPaperSprite* InteriorFill; // 0x38
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0x100
	char bIgnoreTimeDilation : 1; // 0x1e0
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct ACacheModule : AActor {
	TMap<UObject*, float> CachedItems; // 0x3d0
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x940
	TArray<FFractureEffect> FractureEffects; // 0x948
	bool bEnableHardSleeping; // 0x958
	float LargeChunkThreshold; // 0x95c
	FScriptMulticastDelegate OnComponentFracture; // 0x970
};

struct UNavArea_Doorway : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x120
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x128
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x138
};

struct UPlayFabClientAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xa80
	UPlayFabJsonObject* RequestJsonObj; // 0xa88
	UPlayFabJsonObject* ResponseJsonObj; // 0xa90
};

struct USkeleton : UObject {
	TArray<FBoneNode> BoneTree; // 0x28
	TArray<FTransform> RefLocalPoses; // 0x38
	FGuid VirtualBoneGuid; // 0x158
	TArray<FVirtualBone> VirtualBones; // 0x168
	TArray<FSkeletonToMeshLinkup> LinkupCache; // 0x178
	TArray<USkeletalMeshSocket*> Sockets; // 0x188
	FSmartNameContainer SmartNames; // 0x1e8
	TArray<UBlendProfile*> BlendProfiles; // 0x250
	TArray<FAnimSlotGroup> SlotGroups; // 0x260
};

struct UW_SessionInviteEntry_C : USessionInviteEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	UHorizontalBox* ActionsBox; // 0x498
	UW_ButtonCustom_C* B_AcceptSessionInvite; // 0x4a0
	UW_ButtonCustom_C* B_BlockFriend; // 0x4a8
	UW_ButtonCustom_C* B_DeclineSessionInvite; // 0x4b0
	UW_ButtonCustom_C* B_RevokeSessionInvite; // 0x4b8
	UBorder* Container; // 0x4c0
};

struct UMultiLineEditableTextBox : UTextLayoutWidget {
	FText Text; // 0x148
	FText HintText; // 0x160
	DelegateProperty HintTextDelegate; // 0x178
	FEditableTextBoxStyle WidgetStyle; // 0x188
	FTextBlockStyle TextStyle; // 0x9f8
	bool AllowContextMenu; // 0xc00
	USlateWidgetStyleAsset* Style; // 0xc08
	FSlateFontInfo Font; // 0xc10
	FLinearColor ForegroundColor; // 0xc78
	FLinearColor BackgroundColor; // 0xc88
	FLinearColor ReadOnlyForegroundColor; // 0xc98
	FScriptMulticastDelegate OnTextChanged; // 0xca8
	FScriptMulticastDelegate OnTextCommitted; // 0xcb8
	bool IsReadOnly; // 0xcc8
};

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct UMaterialExpressionCustomOutput : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput realTime; // 0x60
	FExpressionInput MaterialProxy; // 0x98
};

struct UConanIpConnection : UIpConnection {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMap; // 0x60
	TArray<UChannel*> OpenChannels; // 0x68
	TArray<AActor*> SentTemporaries; // 0x78
	AActor* ViewTarget; // 0x88
	AActor* OwningActor; // 0x90
	int32_t MaxPacket; // 0x98
	char InternalAck : 1; // 0x9c
	TArray<UObject*> AsyncLoadedObjects; // 0xa0
	FUniqueNetIdRepl PlayerId; // 0x170
	double LastReceiveTime; // 0x200
	TMap<AActor*, UActorChannel*> ActorChannels; // 0x334e0
	TArray<UChannel*> ChannelsToTick; // 0x33730
};

struct UW_ButtonLarge_C : UW_FCButton_C {
	UNamedSlot* ButtonOverlay; // 0xc28
	UNamedSlot* CheckboxOverlay; // 0xc30
	UW_HotkeyIcon_C* HotkeyIcon; // 0xc38
	UMenuAnchor* MenuAnchor; // 0xc40
};

struct UParticleModuleOrientationBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UTableViewBase : UWidget {
	bool bIsVariable; // 0x28
	bool bCreatedByConstructionScript; // 0x29
	UPanelSlot* Slot; // 0x30
	bool bIsEnabled; // 0x38
	DelegateProperty bIsEnabledDelegate; // 0x40
	FText ToolTipText; // 0x50
	DelegateProperty ToolTipTextDelegate; // 0x68
	UWidget* TooltipWidget; // 0x78
	DelegateProperty ToolTipWidgetDelegate; // 0x80
	ESlateVisibility Visiblity; // 0x90
	ESlateVisibility Visibility; // 0x91
	DelegateProperty VisibilityDelegate; // 0x98
	char bOverride_Cursor : 1; // 0xa8
	EMouseCursor Cursor; // 0xac
	bool bIsVolatile; // 0xad
	FWidgetTransform RenderTransform; // 0xb0
	FVector2D RenderTransformPivot; // 0xcc
	UWidgetNavigation* Navigation; // 0xd8
	TArray<UPropertyBinding*> NativeBindings; // 0x108
};

struct UPeerConnectionNetConnection : UIpConnection {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMap; // 0x60
	TArray<UChannel*> OpenChannels; // 0x68
	TArray<AActor*> SentTemporaries; // 0x78
	AActor* ViewTarget; // 0x88
	AActor* OwningActor; // 0x90
	int32_t MaxPacket; // 0x98
	char InternalAck : 1; // 0x9c
	TArray<UObject*> AsyncLoadedObjects; // 0xa0
	FUniqueNetIdRepl PlayerId; // 0x170
	double LastReceiveTime; // 0x200
	TMap<AActor*, UActorChannel*> ActorChannels; // 0x334e0
	TArray<UChannel*> ChannelsToTick; // 0x33730
};

struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct UPlayerSurveyDialog : UWindowRoot {
	FText SurveyTitle; // 0x398
	FText SurveyMessage; // 0x3b0
	FString SurveyBaseURL; // 0x3c8
	UMessageBoxWidget* MessageBox; // 0x3d8
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x6c0
};

struct UMaterialExpressionScreenPosition : UMaterialExpression {
	EMaterialExpressionScreenPositionMapping mapping; // 0x60
};

struct UW_DiscoveryFIFOMessageView_C : UFIFOMessageView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* FadeInOut; // 0x360
	UImage* ASSIGNED_IN_CODE__fifo_blood_3; // 0x368
	UImage* ASSIGNED_IN_CODE__fifo_blood_4; // 0x370
	UTextBlock* Header; // 0x378
	UMultiLineEditableTextBox* Text; // 0x380
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UFCButton : URootWidget {
	FText Label; // 0x318
	ETextJustify LabelJustification; // 0x330
	FName KeyShortcutName; // 0x338
	FName GamepadKeyShortcutName; // 0x340
	FKey GamepadIconKey; // 0x348
	bool ShowOnlyGamepadIcon; // 0x360
	FFCButtonStyle Style; // 0x368
	bool IsCheckable; // 0xa28
	bool ToggleWhenClicked; // 0xa29
	EFCButtonToggleAction ToggleAction; // 0xa2a
	bool IsChecked; // 0xa2b
	FSlateFontInfo LabelFont; // 0xa30
	FSlateColor HoveredFontColor; // 0xa98
	FSlateColor PressedFontColor; // 0xac0
	FSlateColor PressedHoveredFontColor; // 0xae8
	FSlateColor FontColor; // 0xb10
	FScriptMulticastDelegate SignalClicked; // 0xb50
	FScriptMulticastDelegate SignalPressed; // 0xb60
	FScriptMulticastDelegate SignalReleased; // 0xb70
	FScriptMulticastDelegate SignalToggled; // 0xb80
	FScriptMulticastDelegate SignalMouseEnter; // 0xb90
	FScriptMulticastDelegate SignalMouseLeave; // 0xba0
	UMenuAnchor* m_MenuAnchor; // 0xbe0
	TArray<UFCButton*> m_SubButtons; // 0xc00
};

struct UPhysicsHandleComponent : UActorComponent {
	UPrimitiveComponent* GrabbedComponent; // 0xf8
	char bSoftAngularConstraint : 1; // 0x10c
	char bSoftLinearConstraint : 1; // 0x10c
	char bInterpolateTarget : 1; // 0x10c
	float LinearDamping; // 0x110
	float LinearStiffness; // 0x114
	float AngularDamping; // 0x118
	float AngularStiffness; // 0x11c
	float InterpolationSpeed; // 0x180
};

struct USubtitleEntryView : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x88
};

struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x3d0
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x60
	float UTiling; // 0x64
	float VTiling; // 0x68
	char UnMirrorU : 1; // 0x6c
	char UnMirrorV : 1; // 0x6c
};

struct UParticleModuleSubUVBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
};

struct UMovieSceneAudioSection : UMovieSceneSection {
	USoundBase* Sound; // 0xc8
	float StartOffset; // 0xd0
	float AudioStartTime; // 0xd4
	float AudioDilationFactor; // 0xd8
	float AudioVolume; // 0xdc
	FRichCurve SoundVolume; // 0xe0
	FRichCurve PitchMultiplier; // 0x150
	bool bSuppressSubtitles; // 0x1c0
};

struct URconCommandObject : UObject {
	FName RconCommandName; // 0x28
	FString RconHelpString; // 0x30
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x6c0
	int32_t SectionBaseX; // 0x6d0
	int32_t SectionBaseY; // 0x6d4
	int32_t CollisionSizeQuads; // 0x6d8
	float CollisionScale; // 0x6dc
	int32_t SimpleCollisionSizeQuads; // 0x6e0
	TArray<char> CollisionQuadFlags; // 0x6e8
	FGuid HeightfieldGuid; // 0x6f8
	FBox CachedLocalBox; // 0x708
	ULandscapeComponent* RenderComponent; // 0x724
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x750
};

struct UDemoNetConnection : UNetConnection {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMap; // 0x60
	TArray<UChannel*> OpenChannels; // 0x68
	TArray<AActor*> SentTemporaries; // 0x78
	AActor* ViewTarget; // 0x88
	AActor* OwningActor; // 0x90
	int32_t MaxPacket; // 0x98
	char InternalAck : 1; // 0x9c
	TArray<UObject*> AsyncLoadedObjects; // 0xa0
	FUniqueNetIdRepl PlayerId; // 0x170
	double LastReceiveTime; // 0x200
	TMap<AActor*, UActorChannel*> ActorChannels; // 0x334e0
	TArray<UChannel*> ChannelsToTick; // 0x33730
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FRichCurve FloatCurve; // 0xd0
};

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct APlaneReflectionCapture : AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x3d0
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1c0
	bool bUpdatedToUseQuery; // 0x208
	EGameplayContainerMatchType TagsToMatch; // 0x209
	FGameplayTagContainer GameplayTags; // 0x210
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x60
};

struct UAnimNotifyState : UObject {
	bool bDefaultTriggerOnDedicatedServer; // 0x28
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x120
	float SpeedOfSoundSq; // 0x130
};

struct USceneCaptureComponentWater : USceneCaptureComponentImprints {
	UTextureRenderTarget2D* FluidNormalMap; // 0x460
	UTexture* FlowTexture; // 0x468
	float FlowTextureTiling; // 0x470
	float VorticityAmount; // 0x474
	float ColourDecay; // 0x478
	float DensityDecay; // 0x47c
	float VelocityDecay; // 0x480
	char Wrapping : 1; // 0x484
	char OutputNormals : 1; // 0x484
	char UseUniqueTextureSet : 1; // 0x484
	FVector2D WindA; // 0x488
	FVector2D WindB; // 0x490
	FColor InjectionColourA; // 0x498
	float ColourScaleA; // 0x49c
	FColor InjectionColourB; // 0x4a0
	float ColourScaleB; // 0x4a4
	float PressureScaleA; // 0x4a8
	float PressureScaleB; // 0x4ac
	float WindScale; // 0x4b0
	float WindGustFactorA; // 0x4b4
	float WindGustFactorB; // 0x4b8
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct UFuncTestRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct UListView : UTableViewBase {
	float ItemHeight; // 0x118
	TArray<UObject*> Items; // 0x120
	ESelectionMode SelectionMode; // 0x130
	DelegateProperty OnGenerateRowEvent; // 0x138
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FScriptMulticastDelegate OnCanvasRenderTargetUpdate; // 0xf8
	TWeakObjectPtr<UWorld> World; // 0x108
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x110
};

struct UNiagaraSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x2d8
};

struct UBuildingStressTesterProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate BuildingStressTestAborted; // 0x28
	bool DoneLoadingClasses; // 0xa0
	FVector SpawnLocation; // 0xa4
	FRotator spawnRotation; // 0xb0
	float spawnRadius; // 0xbc
	ESocketDistanceSortMethod sortMethod; // 0xc0
	int32_t NumFoundations; // 0xc4
	int32_t NumOtherPieces; // 0xc8
	bool DestroyAtSameTime; // 0xcc
	FString ListOfIDsToBuildWith; // 0xd0
	URandomBuildingGeneratorProxy* m_FoundationBuilder; // 0xe0
	URandomBuildingGeneratorProxy* m_RandomBuilder; // 0xe8
	bool m_HasAborted; // 0xf0
	bool m_IsBuilding; // 0xf1
};

struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x38
	char WarnIfTimeLimitExceeded : 1; // 0x38
	float TimeLimitExceededMultiplier; // 0x3c
	float TimeLimitExceededMinTime; // 0x40
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44
	float AsyncIOBandwidthLimit; // 0x48
	char UseBackgroundLevelStreaming : 1; // 0x4c
	char AsyncLoadingUseFullTimeLimit : 1; // 0x4c
	float AsyncLoadingTimeLimit; // 0x50
	float PriorityAsyncLoadingExtraTime; // 0x54
	float LevelStreamingActorsUpdateTimeLimit; // 0x58
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64
	char EventDrivenLoaderEnabled : 1; // 0x68
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x130
	EStretchDirection StretchDirection; // 0x131
	float UserSpecifiedScale; // 0x134
	bool IgnoreInheritedScale; // 0x138
	FScriptMulticastDelegate OnDesiredSizeChanged; // 0x140
};

struct URecastNavMeshDataChunk : UNavigationDataChunk {
	FName NavigationDataName; // 0x28
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0xd0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xe0
	UPawnAction* RecentActionCopy; // 0xe8
};

struct USkeletalMeshReductionSettings : UObject {
	TArray<FSkeletalMeshLODGroupSettings> Settings; // 0x28
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x38
	char bLooping : 1; // 0x58
};

struct UStatHolder : UPersistenceComponent {
	FScriptMulticastDelegate SignalIntStatChanged; // 0x168
	FScriptMulticastDelegate SignalFloatStatChanged; // 0x178
	FStatArrayInt32 m_IntStatArray; // 0x188
	FStatArrayFloat m_FloatStatArray; // 0x258
	TArray<UIntStatChangeSignalNode*> m_IntStatChangeNodeList; // 0x3b8
	TArray<UFloatStatChangeSignalNode*> m_FloatStatChangeNodeList; // 0x3c8
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x70
	FGuid ExpressionGUID; // 0x78
	FName Group; // 0x88
};

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x38
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x60
	ESceneTextureId SceneTextureId; // 0x98
	bool bClampUVs; // 0x99
	bool bFiltered; // 0x9a
};

struct UFeatWindow : UWindowRoot {
	UFeatResultRecipeInfoView* FeatResultRecipeInfoViewClass; // 0x398
	UFeatGroupView* FeatGroupViewClass; // 0x3a0
	USoundBase* UpgradeSound; // 0x3a8
	float ResultListItemSpacing; // 0x3c8
	float RecipeListPageScrollOffset; // 0x3cc
	FLinearColor BackgroundColorNotPurchaseable; // 0x3d0
	FLinearColor BackgroundColorPurchaseable; // 0x3e0
	FLinearColor BackgroundColorPurchased; // 0x3f0
	FLinearColor FrameColorIsBlocking; // 0x400
	FLinearColor FrameColorIsUnlocking; // 0x410
	UTexture2D* BorderOpen; // 0x420
	UTexture2D* BorderNotPurchaseable; // 0x428
	UTexture2D* BorderPurchaseable; // 0x430
	TArray<UFeatGroupView*> m_FeatGroupViews; // 0x4e8
	TArray<FFeatGroupNode> m_FeatGroups; // 0x4f8
	TArray<FFeatGroupNode> m_CornerStoneGroups; // 0x508
	TArray<UFeatResultRecipeInfoView*> m_RewardList; // 0x518
	UItemInventory* m_DependencyInventory; // 0x528
	UItemInventory* m_FeatsInventory; // 0x530
	UObjectPool* m_FeatsItemIconPool; // 0x538
	UObjectPool* m_FeatsItemSlotPool; // 0x540
	TArray<UFeatItem*> m_FeatList; // 0x548
};

struct UMaterialExpressionPixelDepth : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x60
	FExpressionInput Fraction; // 0x98
	FLinearColor LuminanceFactors; // 0xd0
};

struct UKeyBindingsKeyBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct USoundEffectLowPassFilterPreset : USoundEffectSourcePreset {
	FSoundEffectLowPassFilterSettings Settings; // 0x40
};

struct UChestInventoryGUI : UWindowRoot {
	UItemInventory* m_ChestInventory; // 0x3a8
};

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
};

struct UTextBlock : UTextLayoutWidget {
	FText Text; // 0x148
	DelegateProperty TextDelegate; // 0x160
	FSlateColor ColorAndOpacity; // 0x170
	DelegateProperty ColorAndOpacityDelegate; // 0x198
	FSlateFontInfo Font; // 0x1a8
	FVector2D ShadowOffset; // 0x210
	FLinearColor ShadowColorAndOpacity; // 0x218
	DelegateProperty ShadowColorAndOpacityDelegate; // 0x228
	float MinDesiredWidth; // 0x238
	bool bWrapWithInvalidationPanel; // 0x23c
};

struct AMountInput : AActor {
	AConanCharacter* Player; // 0x3d0
	float MaxForwardAngle; // 0x3d8
	float MaxLeanTurnAngle; // 0x3dc
	float MaxSteepTurnAngle; // 0x3e0
	float MinSteerBackAngle; // 0x3e4
	float MinStraightBackAngle; // 0x3e8
	float SteepTurnAccelRateFactor; // 0x3ec
	float TimeBeforeReleasingJoystickCounts; // 0x3f0
	bool IsDismounting; // 0x3f4
	bool IsInputDisabled; // 0x3f5
	bool EnableAutorun; // 0x3f6
	bool IsInSteepTurn; // 0x3f7
	EToggleInput CurrentToggleInput; // 0x3f8
	bool Debug_Break; // 0x3f9
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x410
	float Priority; // 0x8e0
	float BlendRadius; // 0x8e4
	float BlendWeight; // 0x8e8
	char bEnabled : 1; // 0x8ec
	char bUnbound : 1; // 0x8ec
};

struct UReflectionCaptureComponent : USceneComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x300
	EReflectionSourceType ReflectionSourceType; // 0x308
	UTextureCube* Cubemap; // 0x310
	float SourceCubemapAngle; // 0x318
	float Brightness; // 0x31c
	FVector CaptureOffset; // 0x320
	FGuid StateId; // 0x350
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x38
	FSoundAttenuationSettings AttenuationOverrides; // 0x40
	char bOverrideAttenuation : 1; // 0x158
};

struct USettingsServerBase : USubSettingsMaster {
	bool m_CoopTetheringLimitIsPlayerModifiable; // 0x328
	float MaxPasswordLength; // 0x32c
	UFCButton* m_LastSelectedCatButton; // 0x330
};

struct UStatIntArray : UObject {
	FName Key; // 0x28
	TArray<FStatIntEntry> Stats; // 0x30
};

struct USoundNodeMature : USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UInterpTrackSlomo : UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UPlayFabRuntimeSettings : UObject {
	FString ProductionEnvironmentURL; // 0x28
	FString TitleId; // 0x38
	FString DeveloperSecretKey; // 0x48
};

struct UW_TooltipOverlay_C : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UPlayFabAuthenticationContext : UObject {
	FString ClientSessionTicket; // 0x28
	FString EntityToken; // 0x38
	FString DeveloperSecretKey; // 0x48
	FString PlayFabId; // 0x58
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x3e0
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
	FString StreamingLevelsPrefix; // 0x98
	ULevel* CurrentLevelPendingVisibility; // 0xa8
	ULevel* CurrentLevelPendingInvisibility; // 0xb0
	UDemoNetDriver* DemoNetDriver; // 0xb8
	AParticleEventManager* MyParticleEventManager; // 0xc0
	APhysicsVolume* DefaultPhysicsVolume; // 0xc8
	UNavigationSystem* NavigationSystem; // 0xe8
	AGameModeBase* AuthorityGameMode; // 0xf0
	AGameStateBase* GameState; // 0xf8
	UAISystemBase* AISystem; // 0x100
	UAvoidanceManager* AvoidanceManager; // 0x108
	TArray<ULevel*> Levels; // 0x110
	TArray<FLevelCollection> LevelCollections; // 0x120
	ULevel* CurrentLevel; // 0x138
	UGameInstance* OwningGameInstance; // 0x140
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x148
	UCanvas* CanvasForRenderingToTarget; // 0x158
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x160
	UWorldComposition* WorldComposition; // 0x938
	char bAreConstraintsDirty : 1; // 0x988
};

struct UCharacterRecustomizationBase : UWindowRoot {
	bool CanRandomize; // 0x398
};

struct UW_Friends_FriendList_C : UFriendListGame {
	UW_NavigatableVerticalBox_C* FriendListEntryList; // 0x3c8
};

struct UUICharacterDisplay : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x300
	float Speed; // 0x304
	float MinGustAmount; // 0x308
	float MaxGustAmount; // 0x30c
	float Radius; // 0x310
	char bPointWind : 1; // 0x314
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct UFeatItem : UGameItem {
	bool ShowInFeatWindow; // 0x248
};

struct USplineComponent : UPrimitiveComponent {
	FSplineCurves SplineCurves; // 0x6c0
	FInterpCurveVector SplineInfo; // 0x720
	FInterpCurveQuat SplineRotInfo; // 0x738
	FInterpCurveVector SplineScaleInfo; // 0x750
	FInterpCurveFloat SplineReparamTable; // 0x768
	bool bAllowSplineEditingPerInstance; // 0x780
	int32_t ReparamStepsPerSegment; // 0x784
	float Duration; // 0x788
	bool bStationaryEndpoints; // 0x78c
	bool bSplineHasBeenEdited; // 0x78d
	bool bModifiedByConstructionScript; // 0x78e
	bool bInputSplinePointsToConstructionScript; // 0x78f
	bool bDrawDebug; // 0x790
	bool bClosedLoop; // 0x791
	bool bLoopPositionOverride; // 0x792
	float LoopPosition; // 0x794
	FVector DefaultUpVector; // 0x798
};

struct ABrush : AActor {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct UThrallRecipeItem : URecipeItem {
	UThrallItem* SourceThrallItem; // 0x2c0
	int32_t SourceThrallItemIndex; // 0x2c8
	EInventoryType SourceThrallInventoryType; // 0x2cc
	FText Name; // 0x2d0
	UTexture2D* Icon; // 0x2e8
};

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UNavArea_Default : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct ADWLevelScriptActor : ALevelScriptActor {
	char bInputEnabled : 1; // 0x3d0
};

struct ANavigationGraphNode : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
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

struct UGetUserUniqueIDCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMovieSceneMarginSection : UMovieSceneSection {
	FRichCurve TopCurve; // 0xd0
	FRichCurve LeftCurve; // 0x140
	FRichCurve RightCurve; // 0x1b0
	FRichCurve BottomCurve; // 0x220
};

struct UPlayFabMatchmakerAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xd0
	UPlayFabJsonObject* RequestJsonObj; // 0xd8
	UPlayFabJsonObject* ResponseJsonObj; // 0xe0
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x60
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xe0
};

struct UFollowersViewBase : UWindowRoot {
	UFollowersBoardBase* m_FollowersBoard; // 0x398
	UFCButton* m_RefreshWindow; // 0x3a0
	UFCButton* m_UntrackAll; // 0x3a8
	UWidget* m_BottomContainer; // 0x3b0
};

struct UQuickLootPanel : URootWidget {
	bool m_HasOwnership; // 0x318
	USoundBase* LootOneSound; // 0x320
	USoundBase* LootAllSound; // 0x340
	AActor* m_Actor; // 0x360
};

struct UServerRentalServerSetupBase : UWindowRoot {
	FScriptMulticastDelegate OnShowPopup; // 0x398
	FScriptMulticastDelegate OnRecievedAllData; // 0x3a8
	FScriptMulticastDelegate OnSetupClosing; // 0x3c0
	UServerRentalRequestConnection* m_ServerRentalRequestConnection; // 0x3d0
	EServerRentalSetupType m_SetupType; // 0x3d8
};

struct UFIFOWindow : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x60
	int32_t SizeY; // 0x64
	FString Text; // 0x68
	FLinearColor CommentColor; // 0x78
};

struct UItemTemperatureBar : URootWidget {
	int32_t NumBars; // 0x370
	UTexture2D* ColdIcon; // 0x378
	UTexture2D* ColdBar; // 0x398
	UTexture2D* HeatIcon; // 0x3b8
	UTexture2D* HeatBar; // 0x3d8
	UTexture2D* EmptyBar; // 0x3f8
	UGameItem* m_GameItem; // 0x420
};

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x3d0
	UBillboardComponent* SpriteComponent; // 0x3d8
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
};

struct UPaperSprite : UObject {
	FVector2D SourceUV; // 0x38
	FVector2D SourceDimension; // 0x40
	UTexture2D* SourceTexture; // 0x48
	TArray<UTexture*> AdditionalSourceTextures; // 0x50
	FVector2D BakedSourceUV; // 0x60
	FVector2D BakedSourceDimension; // 0x68
	UTexture2D* BakedSourceTexture; // 0x70
	UMaterialInterface* DefaultMaterial; // 0x78
	UMaterialInterface* AlternateMaterial; // 0x80
	TArray<FPaperSpriteSocket> Sockets; // 0x88
	ESpriteCollisionMode SpriteCollisionDomain; // 0x98
	float PixelsPerUnrealUnit; // 0x9c
	UBodySetup* BodySetup; // 0xa0
	int32_t AlternateMaterialSplitIndex; // 0xa8
	TArray<FVector4> BakedRenderData; // 0xb0
};

struct UGraniteTextureCube : UGraniteTexture {
	float StreamingBias; // 0x28
	UGraniteTileSet* TileSet; // 0x30
	FString StreamingTexture; // 0x38
	float LODBias; // 0x48
	FGraniteLightmapFlags lightMapFlags; // 0x4c
	FString GTSFileName; // 0xf0
	FGuid Guid; // 0x100
};

struct UImprintReceiverComponent : USceneComponent {
	int32_t QualityLevel; // 0x300
	TArray<UStaticMesh*> QualityLevelMeshes; // 0x308
	TArray<UMaterial*> QualityLevelMaterials; // 0x318
	FName MaskTextureParameterName; // 0x328
	FName MaskParamsParameterName; // 0x330
	UStaticMeshComponent* Meshes[0x9]; // 0x338
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

struct UPlayerMarkerDialog : UWindowRoot {
	TArray<UTexture2D*> Icons; // 0x398
};

struct USpinBox : UWidget {
	float Value; // 0x118
	DelegateProperty ValueDelegate; // 0x120
	FSpinBoxStyle WidgetStyle; // 0x130
	USlateWidgetStyleAsset* Style; // 0x440
	float Delta; // 0x448
	float SliderExponent; // 0x44c
	FSlateFontInfo Font; // 0x450
	float MinDesiredWidth; // 0x4b8
	bool ClearKeyboardFocusOnCommit; // 0x4bc
	bool SelectAllTextOnCommit; // 0x4bd
	FSlateColor ForegroundColor; // 0x4c0
	FScriptMulticastDelegate OnValueChanged; // 0x4e8
	FScriptMulticastDelegate OnValueCommitted; // 0x4f8
	FScriptMulticastDelegate OnBeginSliderMovement; // 0x508
	FScriptMulticastDelegate OnEndSliderMovement; // 0x518
	char bOverride_MinValue : 1; // 0x528
	char bOverride_MaxValue : 1; // 0x528
	char bOverride_MinSliderValue : 1; // 0x528
	char bOverride_MaxSliderValue : 1; // 0x528
	float MinValue; // 0x52c
	float MaxValue; // 0x530
	float MinSliderValue; // 0x534
	float MaxSliderValue; // 0x538
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x3d0
	bool bStaticMeshReplicateMovement; // 0x3d8
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x3d9
};

struct UParticleSystemComponent : UPrimitiveComponent {
	UParticleSystem* Template; // 0x6c0
	TArray<UMaterialInterface*> EmitterMaterials; // 0x6c8
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x6d8
	char bResetOnDetach : 1; // 0x6e8
	char bUpdateOnDedicatedServer : 1; // 0x6e8
	char bAllowRecycling : 1; // 0x6e8
	char bAutoManageAttachment : 1; // 0x6e8
	EParticleSignificanceLevel RequiredSignificance; // 0x6ec
	TArray<FParticleSysParam> InstanceParameters; // 0x6f8
	FScriptMulticastDelegate OnParticleSpawn; // 0x708
	FScriptMulticastDelegate OnParticleBurst; // 0x718
	FScriptMulticastDelegate OnParticleDeath; // 0x728
	FScriptMulticastDelegate OnParticleCollide; // 0x738
	FVector OldPosition; // 0x748
	FVector PartSysVelocity; // 0x754
	float WarmupTime; // 0x760
	float WarmupTickRate; // 0x764
	char bWarmingUp : 1; // 0x768
	float SecondsBeforeInactive; // 0x774
	float MaxTimeBeforeForceUpdateTransform; // 0x780
	char bOverrideLODMethod : 1; // 0x788
	ParticleSystemLODMethod LODMethod; // 0x78c
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x790
	TArray<UParticleSystemReplay*> ReplayClips; // 0x7b0
	float CustomTimeDilation; // 0x820
	FScriptMulticastDelegate OnSystemFinished; // 0x828
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x838
	FName AutoAttachSocketName; // 0x840
	EAttachLocation AutoAttachLocationType; // 0x848
	EAttachmentRule AutoAttachLocationRule; // 0x849
	EAttachmentRule AutoAttachRotationRule; // 0x84a
	EAttachmentRule AutoAttachScaleRule; // 0x84b
};

struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x3d0
};

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x828
	int32_t InstancingRandomSeed; // 0x838
	int32_t InstanceStartCullDistance; // 0x83c
	int32_t InstanceEndCullDistance; // 0x840
	TArray<int32_t> InstanceReorderTable; // 0x848
	TArray<int32_t> RemovedInstances; // 0x858
	UPhysicsSerializer* PhysicsSerializer; // 0x898
	int32_t NumPendingLightmaps; // 0x8b4
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x8b8
};

struct UFrameRateReporter : UFrameRateTracker {
	FString ScopeName; // 0x50
	bool Compact; // 0x60
	EDebugLevel DebugLevel; // 0x61
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
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
	UCameraAnim* anim; // 0xa0
	char bRandomAnimSegment : 1; // 0xa8
	APlayerCameraManager* CameraOwner; // 0xc0
	float ShakeScale; // 0x148
	float OscillatorTimeRemaining; // 0x14c
	UCameraAnimInst* AnimInst; // 0x150
};

struct UKeyBindingsCommandBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UHarvestFoliage : UInteractableFoliageBase {
	AHarvestFoliageSystem* HarvestSystem; // 0xb80
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString code; // 0x60
	ECustomMaterialOutputType OutputType; // 0x70
	FString Description; // 0x78
	TArray<FCustomInput> Inputs; // 0x88
};

struct UParticleModuleRotationBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UPS4GraniteSettings : UObject {
	TArray<FGraniteCpuCache> CPUCaches; // 0x30
	TArray<FGraniteGpuCache> GPUCaches; // 0x40
	int32_t MaximumTileDataUpload; // 0x50
	int32_t MaximumResolves; // 0x54
	int32_t GpuMemorySizeInMegabyte; // 0x58
	int32_t CpuMemorySizeInMegabyte; // 0x5c
	char bAdvanced : 1; // 0x60
	float ReservedRatio; // 0x64
};

struct UGamemodeHintsBase : UWindowRoot {
	UDataTable* LabelsTable; // 0x398
	TMap<EGamemode, FModeMappings> ActionMappings; // 0x3a0
	float CombatHintsResetTime; // 0x3f0
};

struct UEnvQueryManager : UObject {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0x98
	TArray<UEnvQueryContext*> LocalContexts; // 0xa8
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xb8
	double MaxAllowedTestingTime; // 0x120
	bool bTestQueriesUsingBreadth; // 0x128
	int32_t QueryCountWarningThreshold; // 0x12c
	double QueryCountWarningInterval; // 0x130
};

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x60
	TArray<FGuid> AttributeGetTypes; // 0xa0
};

struct UConanCharacterComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
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

struct UAISense_NewSight : UAISense {
	int32_t MaxTracesPerTick; // 0x248
	float HighImportanceQueryDistanceThreshold; // 0x24c
	float MaxQueryImportance; // 0x254
	float SightLimitQueryImportance; // 0x258
};

struct ABuildableBase : AActor {
	int32_t SourceItemTemplateID; // 0x3e8
	bool IsABrush; // 0x3ec
	bool CanBypassBuildingBlockerVolumes; // 0x3ed
	bool IsSnappedToSocket; // 0x3ee
	bool RequiresForcedGhostRefresh; // 0x3ef
	ABuildableBase* m_PlacementHelper; // 0x3f0
	UBuildingSocketComponent* BuildSockets; // 0x3f8
	TArray<EBuildingSocketType> TargetSocketTypes; // 0x400
	int32_t MaxHealth; // 0x410
	int32_t CurrentHealth; // 0x414
	int32_t AffectedByDamageTiers; // 0x418
	float ClaimRadiusBuilding; // 0x41c
	float ClaimRadiusFoliage; // 0x420
	bool EnforceLandclaim; // 0x424
	FVector ClaimLocation; // 0x428
	int32_t templateID; // 0x434
	AConanWorldSettings* ConanWorldSettings; // 0x438
	UUniqueID* OwnerUniqueID; // 0x440
	FScriptMulticastDelegate SignalBuildableNameChanged; // 0x448
	ABuildableBase* m_MasterBuildable; // 0x458
	int32_t BuildingPieceScore; // 0x470
	int32_t BuildingScore; // 0x474
	TArray<FSocketlessConnection> m_SocketlessConnections; // 0x478
	bool bIsStabilityLostDelayed; // 0x488
	bool m_IsStaticBuildable; // 0x489
	bool DecayDisabled; // 0x48c
	int32_t DecayState; // 0x490
	float DecayTimestamp; // 0x498
	FScriptMulticastDelegate SignalReceivedOwnerUniqueID; // 0x4a0
	TArray<FBuildableHealthEntry> m_HealthPool; // 0x4b0
	TArray<FHitResult> LastCanBePlacedOverlapResults; // 0x4c0
	TArray<ESocketConfiguration> ValidSocketRotations; // 0x4d0
	int32_t TargetSocketTypesMask; // 0x4e0
	FUniqueNetIdRepl m_OwnerId; // 0x4e8
	FText m_OwnerName; // 0x500
	FText m_BuildableName; // 0x518
	UAILODComponent* m_AILODComponent; // 0x530
};

struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x6e8
	char bIsFrozenRendering : 1; // 0x6e8
	UDrawFrustumComponent* DrawFrustum; // 0x6f0
	float SpeedScale; // 0x718
	float InitialMaxSpeed; // 0x71c
	float InitialAccel; // 0x720
	float InitialDecel; // 0x724
};

struct ALootContainer : AActor {
	UUniqueID* SpawnerID; // 0x3e0
	UUniqueID* ContainerOwnerID; // 0x3e8
	bool bDecayed; // 0x3f0
	UItemInventoryClientMonitor* m_InventoryMonitor; // 0x3f8
	UItemInventory* m_Inventory; // 0x400
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

struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
	FRichCurve FloatCurve; // 0xd0
};

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct UItemInfoPopup : UWindowRoot {
	float PressSpeed; // 0x398
	UItemStatView* ItemStatViewClass; // 0x3a0
	UMaterialInstance* TextureBlendMatInst; // 0x3a8
};

struct UThrallItem : UGameItem {
	FCharacterLayout ThrallCharLayout; // 0x248
	TArray<int32_t> EquipmentTemplateIDs; // 0x380
	TArray<int32_t> BackpackTemplateIDs; // 0x390
	FThrallInfo ThrallInfo; // 0x3a0
	FScriptMulticastDelegate SignalReceivedCharacterLayout; // 0x420
	UDataTable* m_ThrallTable; // 0x430
	bool m_bHasRequestedCharLayout; // 0x438
};

struct USoundMix : UObject {
	char bApplyEQ : 1; // 0x28
	float EQPriority; // 0x2c
	FAudioEQEffect EQSettings; // 0x30
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x68
	float InitialDelay; // 0x78
	float FadeInTime; // 0x7c
	float Duration; // 0x80
	float FadeOutTime; // 0x84
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x88
};

struct UStringEnumFixedListDataprovider : UStringEnumDataprovider {
	TArray<FName> m_Entries; // 0x30
};

struct UInterpGroupDirector : UInterpGroup {
	TArray<UInterpTrack*> InterpTracks; // 0x30
	FName GroupName; // 0x40
	FColor GroupColor; // 0x48
	char bCollapsed : 1; // 0x4c
	char bVisible : 1; // 0x4c
	char bIsFolder : 1; // 0x4c
	char bIsParented : 1; // 0x4c
	char bIsSelected : 1; // 0x4c
};

struct UAISystemBase : UObject {
	FStringClassReference AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x38
	bool bInstantiateAISystemOnClient; // 0x40
};

struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x90
	char bLooping : 1; // 0x94
	char bStreaming : 1; // 0x94
	int32_t StreamingPriority; // 0x98
	char bMature : 1; // 0x9c
	char bManualWordWrap : 1; // 0x9c
	char bSingleLine : 1; // 0x9c
	char bVirtualizeWhenSilent : 1; // 0x9c
	ESoundGroup SoundGroup; // 0xa0
	FString SpokenText; // 0xa8
	float SubtitlePriority; // 0xb8
	float Volume; // 0xbc
	float Pitch; // 0xc0
	int32_t NumChannels; // 0xc4
	int32_t SampleRate; // 0xc8
	int32_t RawPCMDataSize; // 0xcc
	TArray<FSubtitleCue> Subtitles; // 0xd0
	TArray<FLocalizedSubtitle> LocalizedSubtitles; // 0xe0
	UCurveTable* Curves; // 0xf0
	UCurveTable* InternalCurves; // 0xf8
};

struct UDialogue : UDataAsset {
	bool DisplayIdleSplines; // 0x28
	FText Name; // 0x30
	TArray<FDialogueNode> Data; // 0x48
	int32_t NextNodeId; // 0x58
};

struct UPhysicsSettings : UDeveloperSettings {
	float DefaultGravityZ; // 0x38
	float DefaultTerminalVelocity; // 0x3c
	float DefaultFluidFriction; // 0x40
	int32_t SimulateScratchMemorySize; // 0x44
	int32_t RagdollAggregateThreshold; // 0x48
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c
	bool bEnableAsyncScene; // 0x50
	bool bEnableShapeSharing; // 0x51
	bool bEnablePCM; // 0x52
	bool bForceMultithread; // 0x53
	bool bWarnMissingLocks; // 0x54
	bool bEnable2DPhysics; // 0x55
	ESettingsLockedAxis LockedAxis; // 0x56
	ESettingsDOF DefaultDegreesOfFreedom; // 0x57
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
	bool bDefaultHasComplexCollision; // 0x76
	bool bSuppressFaceRemapTable; // 0x77
	bool bSupportUVFromHitResults; // 0x78
	bool bDisableActiveActors; // 0x79
	bool bDisableCCD; // 0x7a
	float MaxPhysicsDeltaTime; // 0x7c
	bool bSubstepping; // 0x80
	bool bSubsteppingAsync; // 0x81
	float MaxSubstepDeltaTime; // 0x84
	int32_t MaxSubsteps; // 0x88
	float SyncSceneSmoothingFactor; // 0x8c
	float AsyncSceneSmoothingFactor; // 0x90
	float InitialAverageFrameRate; // 0x94
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0x98
};

struct UEndUserSettings : UObject {
	bool bSendAnonymousUsageDataToEpic; // 0x30
	bool bSendMeanTimeBetweenFailureDataToEpic; // 0x31
	bool bAllowUserIdInUsageData; // 0x32
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x300
	float OrthoWidth; // 0x304
	float OrthoNearClipPlane; // 0x308
	float OrthoFarClipPlane; // 0x30c
	float AspectRatio; // 0x310
	char bConstrainAspectRatio : 1; // 0x314
	char bUseFieldOfViewForLOD : 1; // 0x314
	char bLockToHmd : 1; // 0x314
	char bUsePawnControlRotation : 1; // 0x314
	ECameraProjectionMode ProjectionMode; // 0x318
	float PostProcessBlendWeight; // 0x31c
	FPostProcessSettings PostProcessSettings; // 0x320
	char bUseControllerViewRotation : 1; // 0x848
};

struct UW_InputBox_C : UInputBoxWidget {
	UW_ButtonLarge_C* B_Cancel; // 0x3e0
	UW_ButtonLarge_C* B_OK; // 0x3e8
	UW_FCEditableTextBlock_C* ETXT_Input; // 0x3f0
	UImage* Image_1; // 0x3f8
	UTextBlock* TXT_Description; // 0x400
};

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x60
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x98
	EMaterialVectorCoordTransform TransformType; // 0x99
};

struct UMaterialExpressionGraniteStreamTextures : UMaterialExpressionGraniteBakeBase {
	FExpressionInput Originals[0x4]; // 0x1b0
	FExpressionInput SizeInput; // 0x290
	char bUseBaked : 1; // 0x2c8
	char bIsBakeDirty : 1; // 0x2c8
	uint64_t ShaderGraphHash[0x4]; // 0x2d0
	uint64_t UniformExpressionHash[0x4]; // 0x2f0
	uint64_t BakedShaderGraphHash[0x4]; // 0x310
	uint64_t BakedUniformExpressionHash[0x4]; // 0x330
	char bAlwaysUseMaxSize : 1; // 0x350
	FIntPoint Size; // 0x354
	EGraniteBakerTilingMethod Tiling; // 0x35c
	FGraniteBakerLayerLayout LayerPreset; // 0x360
	int32_t IndexList[0x4]; // 0x3d8
	TArray<UMaterialExpressionMaterialFunctionCall*> BakeCallStack; // 0x3e8
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x28
	TArray<FNode> Nodes; // 0x38
};

struct UAnimMontage : UAnimCompositeBase {
	FAlphaBlend BlendIn; // 0xa0
	float BlendInTime; // 0xd8
	FAlphaBlend BlendOut; // 0xe0
	float BlendOutTime; // 0x118
	float BlendOutTriggerTime; // 0x11c
	FName SyncGroup; // 0x120
	int32_t SyncSlotIndex; // 0x128
	FMarkerSyncData MarkerData; // 0x130
	TArray<FCompositeSection> CompositeSections; // 0x150
	TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x160
	TArray<FBranchingPoint> BranchingPoints; // 0x170
	bool bEnableRootMotionTranslation; // 0x180
	bool bEnableRootMotionRotation; // 0x181
	ERootMotionRootLock RootMotionRootLock; // 0x182
	TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x188
	TArray<int32_t> BranchingPointStateNotifyIndices; // 0x198
};

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x408
};

struct ASoundStage : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	FSlateChildSize Size; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UChatroom : UObject {
	FString CurrentChatRoomId; // 0x28
	int32_t MaxChatRoomRetries; // 0x38
	int32_t NumChatRoomRetries; // 0x3c
};

struct UFCComboBoxString : URootWidget {
	FScriptMulticastDelegate OnSelectionChanged; // 0x318
	USoundBase* PressedSound; // 0x328
	USoundBase* HoveredSound; // 0x348
	UComboBoxString* m_ComboBox; // 0x368
};

struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28
	FFractureMaterial FractureMaterialDesc; // 0x2c
	int32_t RandomSeed; // 0x50
	TArray<FVector> VoronoiSites; // 0x58
	int32_t OriginalSubmeshCount; // 0x68
	TArray<UMaterialInterface*> Materials; // 0x70
	TArray<FDestructibleChunkParameters> ChunkParameters; // 0x80
};

struct UParticleModuleLightBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct USign3DText : URootWidget {
	FScriptMulticastDelegate SignalSignNeedsRedraw; // 0x318
};

struct UPoseableMeshComponent : USkinnedMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x7c8
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x7d0
	char bUseBoundsFromMasterPoseComponent : 1; // 0x82c
	UPhysicsAsset* PhysicsAssetOverride; // 0x850
	int32_t ForcedLodModel; // 0x858
	int32_t MinLodModel; // 0x85c
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x870
	float StreamingDistanceMultiplier; // 0x880
	FColor WireframeColor; // 0x884
	char bForceWireframe : 1; // 0x888
	char bDisplayBones : 1; // 0x888
	char bDisableMorphTarget : 1; // 0x888
	char bHideSkin : 1; // 0x888
	char bPerBoneMotionBlur : 1; // 0x8a0
	char bComponentUseFixedSkelBounds : 1; // 0x8a0
	char bConsiderAllBodiesForBounds : 1; // 0x8a0
	EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0x8a4
	char bForceMeshObjectUpdate : 1; // 0x8a8
	char bCanHighlightSelectedSections : 1; // 0x8a8
	char bRecentlyRendered : 1; // 0x8a8
	char CustomSortAlternateIndexMode; // 0x8ac
	char bCastCapsuleDirectShadow : 1; // 0x8b0
	char bCastCapsuleIndirectShadow : 1; // 0x8b0
	float CapsuleIndirectShadowMinVisibility; // 0x8b4
	char bCPUSkinning : 1; // 0x8b8
	FBoxSphereBounds CachedLocalBounds; // 0x8cc
	bool bCachedLocalBoundsUpToDate; // 0x8e8
	bool bEnableUpdateRateOptimizations; // 0x8e9
	bool bDisplayDebugUpdateRateOptimizations; // 0x8ea
};

struct UGuildMembersBase : UCharacterListBase {
	UListMenu* m_GuildContextMenu; // 0x360
};

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
};

struct URecipeLookup : UTableAccessor {
	UDataTable* table; // 0x28
};

struct UAITask_LockLogic : UAITask {
	AAIController* OwnerController; // 0x68
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; // 0x300
	char bSupportsDepth : 1; // 0x300
	char bNoAlphaChannel : 1; // 0x300
	UTexture* Texture; // 0x308
	UTexture* LeftTexture; // 0x310
	char bQuadPreserveTextureRatio : 1; // 0x318
	FVector2D QuadSize; // 0x31c
	FBox2D UVRect; // 0x324
	float CylinderRadius; // 0x338
	float CylinderOverlayArc; // 0x33c
	int32_t CylinderHeight; // 0x340
	EStereoLayerType StereoLayerType; // 0x344
	EStereoLayerShape StereoLayerShape; // 0x345
	int32_t Priority; // 0x348
};

struct UEmoteInventory : UItemInventory {
	FScriptMulticastDelegate SignalEmoteLearned; // 0x348
};

struct UAvfMediaSettings : UObject {
	bool NativeAudioOut; // 0x28
};

struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct AGameNetworkManager : AInfo {
	int32_t AdjustedNetSpeed; // 0x3d0
	float LastNetSpeedUpdateTime; // 0x3d4
	int32_t TotalNetBandwidth; // 0x3d8
	int32_t MinDynamicBandwidth; // 0x3dc
	int32_t MaxDynamicBandwidth; // 0x3e0
	char bIsStandbyCheckingEnabled : 1; // 0x3e4
	char bHasStandbyCheatTriggered : 1; // 0x3e4
	float StandbyRxCheatTime; // 0x3e8
	float StandbyTxCheatTime; // 0x3ec
	int32_t BadPingThreshold; // 0x3f0
	float PercentMissingForRxStandby; // 0x3f4
	float PercentMissingForTxStandby; // 0x3f8
	float PercentForBadPing; // 0x3fc
	float JoinInProgressStandbyWaitTime; // 0x400
	float MoveRepSize; // 0x404
	float MAXPOSITIONERRORSQUARED; // 0x408
	float MAXLENIENTPOSITIONERRORSQUARED; // 0x40c
	float MAXNEARZEROVELOCITYSQUARED; // 0x410
	float CLIENTADJUSTUPDATECOST; // 0x414
	float MAXCLIENTUPDATEINTERVAL; // 0x418
	float MaxMoveDeltaTime; // 0x41c
	bool ClientAuthorativePosition; // 0x420
	float ClientErrorUpdateRateLimit; // 0x424
	bool bMovementTimeDiscrepancyDetection; // 0x428
	bool bMovementTimeDiscrepancyResolution; // 0x429
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x42c
	float MovementTimeDiscrepancyMinTimeMargin; // 0x430
	float MovementTimeDiscrepancyResolutionRate; // 0x434
	float MovementTimeDiscrepancyDriftAllowance; // 0x438
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x43c
	bool bUseDistanceBasedRelevancy; // 0x43d
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x40
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x60
	char R : 1; // 0x98
	char G : 1; // 0x98
	char B : 1; // 0x98
	char A : 1; // 0x98
};

struct UShortcutBarBase : UWindowRoot {
	UShortcutBarInventory* m_ShortcutInventory; // 0x398
	UItemInventory* m_BackpackInventory; // 0x3a0
	UCraftingQueue* m_CharacterCratfingQ; // 0x3a8
	TArray<FVisualData> VisualDataPreload; // 0x400
};

struct UMovieScene : UMovieSceneSignedObject {
	TArray<FMovieSceneSpawnable> Spawnables; // 0xb0
	TArray<FMovieScenePossessable> Possessables; // 0xc0
	TArray<FMovieSceneBinding> ObjectBindings; // 0xd0
	TArray<UMovieSceneTrack*> MasterTracks; // 0xe0
	UMovieSceneTrack* CameraCutTrack; // 0xf0
	FFloatRange SelectionRange; // 0xf8
	FFloatRange PlaybackRange; // 0x108
	bool bForceFixedFrameIntervalPlayback; // 0x118
	float FixedFrameInterval; // 0x11c
	float InTime; // 0x120
	float OutTime; // 0x124
	float StartTime; // 0x128
	float EndTime; // 0x12c
};

struct UAINavigationComponent : UActorComponent {
	float TileGenerationRadius; // 0xf8
	float TileRemovalRadius; // 0xfc
	FName NavDataConfigName; // 0x100
	float npcLOD0NavmeshTileGenerationRadius; // 0x108
	float npcLOD0NavmeshTileRemovalRadius; // 0x10c
	float npcLOD1NavmeshTileGenerationRadius; // 0x110
	float npcLOD1NavmeshTileRemovalRadius; // 0x114
	float npcLOD2NavmeshTileGenerationRadius; // 0x118
	float npcLOD2NavmeshTileRemovalRadius; // 0x11c
	float npcLOD3NavmeshTileGenerationRadius; // 0x120
	float npcLOD3NavmeshTileRemovalRadius; // 0x124
};

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x60
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UGUIModuleController : UObject {
	FScriptMulticastDelegate SignalMouseEnabled; // 0x28
	FScriptMulticastDelegate SignalGUIControlModeChanged; // 0x38
	FScriptMulticastDelegate SignalGamepadKeyDown; // 0x48
	FScriptMulticastDelegate SignalKeyBindingsChanged; // 0x58
	FScriptMulticastDelegate SignalUserInactive; // 0x68
	FScriptMulticastDelegate SignalResetGamepadOverlay; // 0x78
	TArray<UWindowRoot*> m_WindowList; // 0x90
	UWindowRoot* m_MouseBlockWindow; // 0xa0
	UWindowRoot* m_HotkeyHelpOverlay; // 0xa8
	TArray<UGUIModule*> m_Modules; // 0xb0
	TArray<UEscapeStackNode*> m_EscapeStack; // 0xc0
	UDataTable* m_GUIModuleTable; // 0xd0
	URootWidget* m_KeyNavSelectedWidget; // 0xe0
	TArray<UMessageBoxWidget*> m_LoadingScreenMessageBoxes; // 0x170
	AConanPlayerController* m_PlayerController; // 0x1a8
	UInputComponent* m_InputComponent; // 0x1b0
};

struct AConanHeightmapLevelScriptActor : AConanLevelScriptActor {
	char bInputEnabled : 1; // 0x3d0
};

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xe0
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UW_BlitzButton_C : UFCBloodBlitzButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0xcd0
	UWidgetAnimation* Anim_Blood; // 0xcd8
	UWidgetAnimation* Anim_Fade; // 0xce0
	UImage* ASSIGNED_IN_CODE__Icon; // 0xce8
	UImage* Button; // 0xcf0
	UTextBlock* CommunityLabel; // 0xcf8
	FText Description; // 0xd00
	FScriptMulticastDelegate SignalDescription; // 0xd18
};

struct UW_PatchNotesEntryView_C : UPatchNotesEntryView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	UWidgetAnimation* Deselect; // 0x380
	UWidgetAnimation* Select; // 0x388
	UBorder* Border_1; // 0x390
	FSlateBrush Temp_OldHighlight; // 0x398
};

struct UStaticMesh : UObject {
	int32_t MinLOD; // 0x40
	bool bUseConsoleMinLODOverride; // 0x44
	int32_t ConsoleMinLODOverride; // 0x48
	TArray<UMaterialInterface*> Materials; // 0x50
	TArray<FStaticMaterial> StaticMaterials; // 0x60
	float LightmapUVDensity; // 0x70
	int32_t LightMapResolution; // 0x74
	int32_t LightMapCoordinateIndex; // 0x78
	char bGenerateMeshDistanceField : 1; // 0x7c
	UBodySetup* BodySetup; // 0x80
	int32_t LODForCollision; // 0x88
	char bStripComplexCollisionForConsole : 1; // 0x8c
	char bHasNavigationData : 1; // 0x8c
	char bLODsShareStaticLighting : 1; // 0x8c
	float LpvBiasMultiplier; // 0x90
	bool bAllowCPUAccess; // 0x94
	TArray<UStaticMeshSocket*> Sockets; // 0xc8
	FVector PositiveBoundsExtension; // 0xe8
	FVector NegativeBoundsExtension; // 0xf4
	FBoxSphereBounds ExtendedBounds; // 0x100
	int32_t ElementToIgnoreForTexFactor; // 0x11c
	TArray<UAssetUserData*> AssetUserData; // 0x120
	UNavCollision* NavCollision; // 0x130
};

struct UMaterialExpressionSpeedTree : UMaterialExpression {
	ESpeedTreeGeometryType GeometryType; // 0x60
	ESpeedTreeWindType WindType; // 0x61
	ESpeedTreeLODType LODType; // 0x62
	float BillboardThreshold; // 0x64
	bool bAccurateWindVelocities; // 0x68
};

struct ALobbyBeaconPlayerState : AInfo {
	FText DisplayName; // 0x3d0
	FUniqueNetIdRepl UniqueID; // 0x3e8
	FUniqueNetIdRepl PartyOwnerUniqueId; // 0x400
	bool bInLobby; // 0x418
	AOnlineBeaconClient* ClientActor; // 0x420
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x3d8
};

struct UConanCharacterPersistenceComponent : UCharacterPersistenceComponent {
	bool SaveOnSpawn; // 0xf8
	float SaveFrequency; // 0xfc
	bool SkipSaving; // 0x100
	UUniqueID* UID; // 0x108
	FScriptMulticastDelegate OnSignalDataLoaded; // 0x110
	FScriptMulticastDelegate OnSignalPreSave; // 0x120
	bool m_bWasLoadedFromDB; // 0x130
};

struct AFunctionalAITest : AFunctionalTest {
	TArray<FAITestSpawnSet> SpawnSets; // 0x500
	float SpawnLocationRandomizationRange; // 0x510
	TArray<APawn*> SpawnedPawns; // 0x518
	TArray<FPendingDelayedSpawn> PendingDelayedSpawns; // 0x528
	FScriptMulticastDelegate OnAISpawned; // 0x550
	FScriptMulticastDelegate OnAllAISPawned; // 0x560
	char bWaitForNavMesh : 1; // 0x570
};

struct UPerkSystemComponent : UActorComponent {
	float CombatStaminaRegenModifier; // 0xf8
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	FGuid CameraGuid; // 0xc8
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0xb8
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	UDestructibleMesh* DestructibleMesh; // 0x9e0
	FScriptMulticastDelegate OnInstanceTakePointDamage; // 0xa00
	FScriptMulticastDelegate OnInstanceTakeRadialDamage; // 0xa10
	UDestructibleMesh* DestructibleMeshPtr; // 0xa20
};

struct UMapMarkerItem : UGameItem {
	UTexture2D* Icon; // 0x248
};

struct ULightPropagationVolumeBlendable : UObject {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x68
};

struct UPlayFabServerAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x8c0
	UPlayFabJsonObject* RequestJsonObj; // 0x8c8
	UPlayFabJsonObject* ResponseJsonObj; // 0x8d0
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x3e0
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x3f0
	UNavLinkCustomComponent* SmartLinkComp; // 0x400
	bool bSmartLinkIsRelevant; // 0x408
	FScriptMulticastDelegate OnSmartLinkReached; // 0x410
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0x128
	FVector FailsafeExtent; // 0x130
};

struct ASpatialHashSystem : AInfo {
	float UpdateInterval; // 0x3d0
	TMap<uint32_t, FSpatialObjectSet> Components; // 0x3e0
	TMap<USceneComponent*, float> ComponentMaxRadius; // 0x430
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UAsyncLineTraceByChannelProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnCompletion; // 0x28
};

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0x11c
	UObject* CachedNavParent; // 0x120
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

struct UChestInventoryView : UExternalInventoryView {
	bool CanItemBeDropedOn; // 0x318
	FScriptMulticastDelegate SignalCouldNotDrop; // 0x320
	DelegateProperty DelegateGetTargetInventory; // 0x330
	AActor* m_Actor; // 0x370
	UItemInventory* m_Inventory; // 0x378
	UItemInventory* m_TargetInventory; // 0x380
};

struct UCurveLinearColor : UCurveBase {
	FRichCurve FloatCurves[0x4]; // 0x30
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
	char bStopOnOverlap : 1; // 0xac
};

struct ALandClaim : AActor {
	int32_t CellSize; // 0x3d0
	TMap<uint32_t, FLandClaimCellData> Cells; // 0x3d8
	ClaimChannel Channel; // 0x428
	float RadiusCoefficient; // 0x42c
	int32_t ScaledCellSize; // 0x430
	bool NoOwnership; // 0x434
};

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
};

struct UConanOnlineEventsLibrary : UObject {
	UDataTable* m_richPresenceTextTable; // 0xf8
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FRichCurve Translation[0x3]; // 0xd0
	FRichCurve Rotation[0x3]; // 0x220
	FRichCurve Scale[0x3]; // 0x370
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	char bUseParametrizedRadius : 1; // 0xc8
	char bUseNavAgentGoalLocation : 1; // 0xc8
};

struct UFCEditableTextBox : UFCEditableTextBase {
	FText Text; // 0x338
	bool RequiresCommunicationPrivileges; // 0x350
	DelegateProperty TextDelegate; // 0x358
	FText KeyboardTitle; // 0x368
	FText KeyboardDescription; // 0x380
	EVirtualKeyboardLayout KeyboardLayout; // 0x398
	FEditableTextBoxStyle WidgetStyle; // 0x3a0
	FText HintText; // 0xc10
	DelegateProperty HintTextDelegate; // 0xc28
	bool IsReadOnly; // 0xc38
	bool IsPassword; // 0xc39
	float MinimumDesiredWidth; // 0xc3c
	int32_t TextMaxLength; // 0xc40
	float TextMaxSize; // 0xc44
	bool IsCaretMovedWhenGainFocus; // 0xc48
	bool SelectAllTextWhenFocused; // 0xc49
	bool RevertTextOnEscape; // 0xc4a
	bool ClearKeyboardFocusOnCommit; // 0xc4b
	bool SelectAllTextOnCommit; // 0xc4c
	bool AllowContextMenu; // 0xc4d
	FShapedTextOptions ShapedTextOptions; // 0xc50
	USoundBase* PressedSound; // 0xc58
	USoundBase* HoveredSound; // 0xc78
	FScriptMulticastDelegate OnTextChanged; // 0xc98
	FScriptMulticastDelegate OnTextCommitted; // 0xca8
	FScriptMulticastDelegate OnMaxLengthExceeded; // 0xcb8
	FScriptMulticastDelegate SignalActivated; // 0xcc8
};

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0x220
	ANavigationData* MyNavData; // 0x230
};

struct UFeedingTrayPanel : URootWidget {
	UFeedingTrayEntryView* EntryViewClass; // 0x318
	AActor* m_TrayActor; // 0x348
};

struct ABasePlayerState_C : AConanPlayerState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x560
	USceneComponent* DefaultSceneRoot; // 0x568
	FScriptMulticastDelegate CharacterCreationLoaded; // 0x570
	UW_MainMenu_MainMenu_C* MainMenu; // 0x580
	UW_ServerList_C* ServerList; // 0x588
	int32_t PlayerIndex; // 0x590
	float ServerSettingDurabilityModifier; // 0x594
	FText PreparingWorld; // 0x598
	AActor* CharacterCreationActor; // 0x5b0
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
};

struct URadialMenu : URootWidget {
	float AnimTime; // 0x318
	float AnimFullRadiusThreshold; // 0x31c
	float StartAngle; // 0x320
	bool CenterAroundStart; // 0x324
	float InnerRadius; // 0x328
	float OuterRadius; // 0x32c
	float IconCenterRadius; // 0x330
	FVector2D StartCapOffset; // 0x334
	FVector2D EndCapOffset; // 0x33c
	FVector2D StartCapScale; // 0x344
	FVector2D EndCapScale; // 0x34c
	float SegmentSpacing; // 0x354
	float SelectedScale; // 0x358
	float HoverScale; // 0x35c
	URadialMenuSegment* SegmentViewClass; // 0x360
	UTexture2D* SegmentTextureUnselected; // 0x368
	UTexture2D* SegmentTextureSelected; // 0x370
	UTexture2D* SegmentTextureHovered; // 0x378
	UTexture2D* StartCapTextureUnselected; // 0x380
	UTexture2D* StartCapTextureSelected; // 0x388
	UTexture2D* StartCapTextureHovered; // 0x390
	UTexture2D* EndCapTextureUnselected; // 0x398
	UTexture2D* EndCapTextureSelected; // 0x3a0
	UTexture2D* EndCapTextureHovered; // 0x3a8
	float InputAxisDeadZone; // 0x3b0
	FSlateSound PressedSlateSound; // 0x3b8
	FSlateSound HoveredSlateSound; // 0x3d0
	FScriptMulticastDelegate SignalEntryClicked; // 0x3e8
	FScriptMulticastDelegate SignalEntryHighlighted; // 0x3f8
	FScriptMulticastDelegate SignalFadingDone; // 0x408
	bool EnableLeftGamepadStick; // 0x418
	bool bShouldActivateOnEscape; // 0x419
	UInputComponent* m_InputComponent; // 0x420
	URadialMenuEntry* m_CurrentSubMenu; // 0x4c0
	TArray<URadialMenuEntry*> m_RootEntries; // 0x4c8
	UInputComponent* m_ShortcutsInputComponent; // 0x4e0
};

struct UBTDecorator_ForceSuccess : UBTDecorator {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x38
	float LoopEnd; // 0x3c
	float DurationAfterLoop; // 0x40
	int32_t LoopCount; // 0x44
	char bLoopIndefinitely : 1; // 0x48
	char bLoop : 1; // 0x48
	UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x50
	UDistributionFloatConstantCurve* PitchInterpCurve; // 0x58
	FRuntimeFloatCurve VolumeCurve; // 0x60
	FRuntimeFloatCurve PitchCurve; // 0xd8
	float PitchMin; // 0x150
	float PitchMax; // 0x154
	float VolumeMin; // 0x158
	float VolumeMax; // 0x15c
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct AEnergyReceiverRegistry : AActor {
	TArray<UEnergyReceiverComponent*> EnergyListeners; // 0x3d0
};

struct UCharacterUploadBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UBookMark2D : UObject {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct USkippableMovieBase : UWindowRoot {
	FScriptMulticastDelegate SignalMovieFinished; // 0x398
	UConanAudioComponent* m_MediaSound; // 0x3a8
	UMediaPlayer* m_MediaPlayer; // 0x3c8
};

struct UBuildingBoundsComponent : USceneComponent {
	USceneComponent* AttachParent; // 0xf8
	TArray<USceneComponent*> AttachChildren; // 0x100
	TSet<USceneComponent*> ClientAttachedChildren; // 0x110
	FName AttachSocketName; // 0x160
	char bWorldToComponentUpdated : 1; // 0x168
	char bAbsoluteLocation : 1; // 0x168
	char bAbsoluteRotation : 1; // 0x168
	char bAbsoluteScale : 1; // 0x168
	char bVisible : 1; // 0x168
	char bHiddenInGame : 1; // 0x168
	char bShouldUpdatePhysicsVolume : 1; // 0x168
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x168
	char bUseAttachParentBound : 1; // 0x168
	char bShouldDisregardChildComponentsForNavigationUpdates : 1; // 0x168
	char bShouldDisregardAttachedActorsForNavigationUpdates : 1; // 0x168
	EComponentMobility Mobility; // 0x16d
	EDetailMode DetailMode; // 0x16e
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0x170
	FVector RelativeLocation; // 0x1f0
	FRotator RelativeRotation; // 0x1fc
	FVector RelativeScale3D; // 0x230
	FVector ComponentVelocity; // 0x258
	FScriptMulticastDelegate PhysicsVolumeChangedDelegate; // 0x268
};

struct UBTComposite_Sequence : UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
};

struct UHoudiniInstancedActorComponent : USceneComponent {
	UObject* InstancedAsset; // 0x300
	TArray<AActor*> Instances; // 0x308
};

struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x2d8
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x2e0
};

struct UW_KeyBindings_Commands_C : UKeyBindingsCommandBase {
	UTextBlock* Category; // 0x3d0
	UW_Keybindings_Command_C* Five; // 0x3d8
	UW_Keybindings_Command_C* Four; // 0x3e0
	UW_Keybindings_Command_C* One; // 0x3e8
	UW_Keybindings_Command_C* Three; // 0x3f0
	UW_Keybindings_Command_C* Two; // 0x3f8
};

struct UW_ServerInfo_C : UServerInfoBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x528
	UWidgetAnimation* Anim_FavoriteAdded; // 0x530
	UButton* B_SelectThis; // 0x538
	UBorder* Border_2; // 0x540
	UBorder* Brd_ActiveIndicator; // 0x548
	UImage* I_Battleye; // 0x550
	UImage* I_Favorite; // 0x558
	UImage* I_Password; // 0x560
	UImage* I_Upload; // 0x568
	UTextBlock* T_Age; // 0x570
	UTextBlock* T_CombatMode; // 0x578
	UTextBlock* T_Level; // 0x580
	UTextBlock* T_Map; // 0x588
	UTextBlock* T_Name; // 0x590
	UTextBlock* T_Ping; // 0x598
	UTextBlock* T_Players; // 0x5a0
	UTextBlock* T_Region; // 0x5a8
	UTextBlock* TextBlock_1; // 0x5b0
	FButtonStyle ValidStyle; // 0x5b8
	FButtonStyle InvalidStyle; // 0x860
};

struct UTextBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UEmoteController : UActorComponent {
	ECharacterEmotes CurrentEmote; // 0xf8
	UAnimMontage* CurrentEmoteAnimMontage; // 0x100
	int32_t CurrentEmoteFlags; // 0x108
	FScriptMulticastDelegate SignalEmoteStarted; // 0x110
	int32_t m_ReplicatedEmote; // 0x120
};

struct UImageCaptureSettings : UFrameGrabberProtocolSettings {
	int32_t CompressionQuality; // 0x30
};

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x130
	float MinDesiredSlotWidth; // 0x140
	float MinDesiredSlotHeight; // 0x144
};

struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x7c8
	UMaterialInterface* MaterialOverride; // 0x7d0
	FLinearColor SpriteColor; // 0x7d8
};

struct UW_RadialShortcutBar_C : URadialShortcutBar {
	UImage* Image_1; // 0x408
	UInventoryGridSlotView_C* InventoryGridSlotView; // 0x410
	UW_RadialSBItemInfoPanel_C* ItemInfoPanel; // 0x418
	UInventoryIconView_C* ItemToMoveIconView; // 0x420
	UW_RadialMenu_C* menu; // 0x428
};

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct AWorldSettings : AInfo {
	char bEnableWorldBoundsChecks : 1; // 0x3d8
	char bEnableNavigationSystem : 1; // 0x3d8
	char bEnableAISystem : 1; // 0x3d8
	char bEnableWorldComposition : 1; // 0x3d8
	char bUseClientSideLevelStreamingVolumes : 1; // 0x3d8
	char bEnableWorldOriginRebasing : 1; // 0x3d8
	char bWorldGravitySet : 1; // 0x3d8
	char bGlobalGravitySet : 1; // 0x3d8
	float KillZ; // 0x3dc
	UDamageType* KillZDamageType; // 0x3e0
	float WorldGravityZ; // 0x3e8
	float GlobalGravityZ; // 0x3ec
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x3f0
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x3f8
	AGameModeBase* DefaultGameMode; // 0x400
	AGameNetworkManager* GameNetworkManagerClass; // 0x408
	UWorldComposition* WorldCompositionClass; // 0x410
	int32_t PackedLightAndShadowMapTextureSize; // 0x418
	char bMinimizeBSPSections : 1; // 0x41c
	FVector DefaultColorScale; // 0x420
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x42c
	float GlobalDistanceFieldViewDistance; // 0x430
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x434
	char bPrecomputeVisibility : 1; // 0x438
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x438
	int32_t VisibilityCellSize; // 0x43c
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x440
	char bForceNoPrecomputedLighting : 1; // 0x444
	FLightmassWorldInfoSettings LightmassSettings; // 0x448
	FReverbSettings DefaultReverbSettings; // 0x490
	FInteriorSettings DefaultAmbientZoneSettings; // 0x4a8
	USoundMix* DefaultBaseSoundMix; // 0x4d0
	float WorldToMeters; // 0x4d8
	float MonoCullingDistance; // 0x4dc
	UBookMark* BookMarks[0xa]; // 0x4e0
	float TimeDilation; // 0x530
	float MatineeTimeDilation; // 0x534
	float DemoPlayTimeDilation; // 0x538
	float MinGlobalTimeDilation; // 0x53c
	float MaxGlobalTimeDilation; // 0x540
	float MinUndilatedFrameTime; // 0x544
	float MaxUndilatedFrameTime; // 0x548
	APlayerState* Pauser; // 0x550
	char bHighPriorityLoading : 1; // 0x558
	char bHighPriorityLoadingLocal : 1; // 0x558
	TArray<FNetViewer> ReplicationViewers; // 0x560
	TArray<UAssetUserData*> AssetUserData; // 0x570
};

struct UImage : UWidget {
	USlateBrushAsset* Image; // 0x118
	FSlateBrush Brush; // 0x120
	DelegateProperty BrushDelegate; // 0x1b0
	FLinearColor ColorAndOpacity; // 0x1c0
	DelegateProperty ColorAndOpacityDelegate; // 0x1d0
	DelegateProperty OnMouseButtonDownEvent; // 0x1e0
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UCircularProgressbar : URootWidget {
	float progress; // 0x318
	float SegmentSpacing; // 0x31c
	float StartAngle; // 0x320
	float AngleSpan; // 0x324
	float InnerRadius; // 0x328
	float OuterRadius; // 0x32c
	FSlateBrush IconBrush; // 0x330
	FLinearColor IconColorAndOpacity; // 0x3c0
	UTexture2D* TextureEmpty; // 0x3d0
	FLinearColor ColorAndOpacityEmpty; // 0x3d8
	TArray<FCircularProgressbarSegment> Segments; // 0x3e8
};

struct UFCBloodBlitzButton : UFCButton {
	UTexture2D* StonePlateTexture; // 0xc20
	UTexture2D* StonePlateHoverTexture; // 0xc28
	UTexture2D* TextureIcon; // 0xc30
	UTexture2D* TextureBlood1; // 0xc50
	UTexture2D* TextureBlood2; // 0xc70
	UTexture2D* TextureBlood3; // 0xc90
	UTexture2D* TextureBlood4; // 0xcb0
};

struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x3d0
	TArray<AActor*> SubActors; // 0x3d8
	float LODDrawDistance; // 0x3e8
	int32_t LodLevel; // 0x3ec
	TArray<UObject*> SubObjects; // 0x3f0
};

struct UW_KeyBindings_Entry_C : UKeyBindingsEntryBase {
	UTextBlock* ActionMapping; // 0x460
	UW_ButtonNormal_C* B_ClearFirst; // 0x468
	UW_ButtonNormal_C* B_ClearSecond; // 0x470
	UW_ButtonNormal_C* B_ResetFirst; // 0x478
	UW_ButtonNormal_C* B_ResetSecond; // 0x480
	UW_KeyBindings_Button_C* FirstButton; // 0x488
	UW_KeyBindings_Button_C* SecondButton; // 0x490
};

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct UW_MessageBox_C : UMessageBoxWidget {
	UW_ButtonLarge_C* B_Cancel; // 0x458
	UW_ButtonLarge_C* B_No; // 0x460
	UW_ButtonLarge_C* B_OK; // 0x468
	UW_ButtonLarge_C* B_Yes; // 0x470
	UHorizontalBox* ButtonContainer; // 0x478
	UImage* Image_1; // 0x480
	UW_TooltipOverlay_C* KeyNavAnchor; // 0x488
	UW_FCMultiLineEditableTextBox_C* T_Message; // 0x490
	UThrobber* Throbber_Waiting; // 0x498
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x3]; // 0x28
};

struct UDragDropOperation : UObject {
	FString Tag; // 0x28
	UObject* Payload; // 0x38
	UWidget* DefaultDragVisual; // 0x40
	EDragPivot Pivot; // 0x48
	FVector2D Offset; // 0x4c
	FScriptMulticastDelegate OnDrop; // 0x58
	FScriptMulticastDelegate OnDragCancelled; // 0x68
	FScriptMulticastDelegate OnDragged; // 0x78
};

struct USettingsEventDispatchers : UObject {
	FScriptMulticastDelegate OnNudityChanged; // 0x28
	FScriptMulticastDelegate OnSignVisibilityChanged; // 0x38
	FScriptMulticastDelegate OnEnableClanMarkesChanged; // 0x48
	FScriptMulticastDelegate OnOwnVoiceIndicatorChanged; // 0x58
	FScriptMulticastDelegate OnOtherVoiceIndicatorChanged; // 0x68
	FScriptMulticastDelegate OnShowHUDBuffsChanged; // 0x78
	FScriptMulticastDelegate OnHUDBuffScaleChanged; // 0x88
	FScriptMulticastDelegate OnHUDShowBarValuesChanged; // 0x98
	FScriptMulticastDelegate OnShowHealthValueThrallsChanged; // 0xa8
	FScriptMulticastDelegate OnShowHealthValueNPCsChanged; // 0xb8
	FScriptMulticastDelegate OnAlwaysShowHealthBarsChanged; // 0xc8
	FScriptMulticastDelegate OnDifferentBarColorClanMembersChanged; // 0xd8
};

struct UFriendListEntry : URootWidget {
	float m_GrayOutTextValue; // 0x46c
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x88
};

struct UDLCEntryViewBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x390
	UBoxComponent* PreviewInfluenceBox; // 0x398
	UBoxComponent* PreviewCaptureBox; // 0x3a0
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x38
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UFeatGroupView : URootWidget {
	UItemInventory* m_GroupInventory; // 0x338
};

struct UW_SubtitleEntryView_C : USubtitleEntryView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UTextBlock* textView; // 0x330
};

struct UPaperTerrainComponent : UPrimitiveComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x6c0
	bool bClosedSpline; // 0x6c8
	bool bFilledSpline; // 0x6c9
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x6d0
	int32_t RandomSeed; // 0x6d8
	float SegmentOverlapAmount; // 0x6dc
	FLinearColor TerrainColor; // 0x6e0
	int32_t ReparamStepsPerSegment; // 0x6f0
	ESpriteCollisionMode SpriteCollisionDomain; // 0x6f4
	float CollisionThickness; // 0x6f8
	UBodySetup* CachedBodySetup; // 0x700
};

struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x6c0
	char bIsScreenSizeScaled : 1; // 0x6c8
	float ScreenSize; // 0x6cc
	float U; // 0x6d0
	float UL; // 0x6d4
	float V; // 0x6d8
	float VL; // 0x6dc
};

struct UColorBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct USoundBase : UObject {
	USoundClass* SoundClassObject; // 0x28
	USoundSubmix* SoundSubmixObject; // 0x30
	char bDebug : 1; // 0x38
	char bOverrideConcurrency : 1; // 0x38
	char bIgnoreFocus : 1; // 0x38
	USoundConcurrency* SoundConcurrencySettings; // 0x40
	FSoundConcurrencySettings ConcurrencyOverrides; // 0x48
	EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x58
	int32_t MaxConcurrentPlayCount; // 0x5c
	float Duration; // 0x60
	USoundAttenuation* AttenuationSettings; // 0x68
	float Priority; // 0x70
	TArray<USoundEffectSourcePreset*> SourceEffectChain; // 0x78
	float DefaultMasterReverbSendAmount; // 0x88
};

struct AConanCritterAIController : AConanBasicAIController {
	float FleeRange; // 0x568
	float MaxRoamingRange; // 0x56c
	bool CanRoam; // 0x570
	bool PurgeShouldReturnHome; // 0x571
	UObject* BehaviorParameters; // 0x578
	float CheckIfOffNavmeshInterval; // 0x580
	float TotalTimeToCheckIfOffNavmesh; // 0x584
	bool bIsPatroling; // 0x588
	AConanCharacter* FleeActor; // 0x5b8
	bool bIsSuiciding; // 0x600
	UNavigationQueryFilter* DefaultNavQueryFilterObject; // 0x618
};

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x60
	EMaterialSamplerType SamplerType; // 0x68
	char IsDefaultMeshpaintTexture : 1; // 0x6c
};

struct UShortcutIconBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct ULevelStreamingPersistent : ULevelStreaming {
	FName PackageName; // 0x28
	UWorld* WorldAsset; // 0x30
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	char bShouldBeVisibleInEditor : 1; // 0xb0
	char bLocked : 1; // 0xb0
	char bShouldBeLoaded : 1; // 0xb0
	char bShouldBeVisible : 1; // 0xb0
	char bIsStatic : 1; // 0xb0
	char bShouldBlockOnLoad : 1; // 0xb0
	int32_t LevelLODIndex; // 0xb4
	char bDisableDistanceStreaming : 1; // 0xb8
	char bDrawOnLevelStatusMap : 1; // 0xb8
	FColor DrawColor; // 0xbc
	FLinearColor LevelColor; // 0xc0
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	TArray<FString> Keywords; // 0xe8
	FScriptMulticastDelegate OnLevelLoaded; // 0xf8
	FScriptMulticastDelegate OnLevelUnloaded; // 0x108
	FScriptMulticastDelegate OnLevelShown; // 0x118
	FScriptMulticastDelegate OnLevelHidden; // 0x128
	ULevel* LoadedLevel; // 0x138
	ULevel* PendingUnloadLevel; // 0x140
};

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x310
	float Priority; // 0x7e0
	float BlendRadius; // 0x7e4
	float BlendWeight; // 0x7e8
	char bEnabled : 1; // 0x7ec
	char bUnbound : 1; // 0x7ec
};

struct UMaterialExpressionNoise : UMaterialExpression {
	FExpressionInput Position; // 0x60
	FExpressionInput FilterWidth; // 0x98
	float Scale; // 0xd0
	int32_t quality; // 0xd4
	ENoiseFunction NoiseFunction; // 0xd8
	char bTurbulence : 1; // 0xdc
	int32_t Levels; // 0xe0
	float OutputMin; // 0xe4
	float OutputMax; // 0xe8
	float LevelScale; // 0xec
	char bTiling : 1; // 0xf0
	uint32_t RepeatSize; // 0xf4
};

struct UConanCharacterMovementComponent : UCharacterMovementComponent {
	float DoubleJumpZVelocity; // 0x7a8
	FFindFloorResult CurrentWall; // 0x7b0
	float ClimbDirection; // 0x848
	UDamageType* ClimbingDamageClass; // 0x850
	float ClimbingDamageCooldown; // 0x858
	float SlidingPassiveFriction; // 0x85c
	float SlidingActiveFriction; // 0x860
	bool IsInSlidingMode; // 0x864
	bool HangingFromCeiling; // 0x865
	float MaxReachUpHeight; // 0x868
	bool HoldToClimb; // 0x86c
	float HoldingClimbButtonTime; // 0x870
	bool DirectionalFromBP; // 0x875
	FScriptMulticastDelegate SignalClimbingFromCeilingChanged; // 0x878
	FScriptMulticastDelegate SignalEdgeTransitionTriggered; // 0x888
	FScriptMulticastDelegate SignalKnockbackRagdollingStart; // 0x898
	float ServerKnockbackFloorTraceDist; // 0x8a8
	float ClientKnockbackFloorTraceDist; // 0x8ac
	float KnockbackAnimationMaxDuration; // 0x8b0
	float KnockdownSlideSqrVelocityThreshold; // 0x8b4
	float KnockdownSlideFrictionFactor; // 0x8b8
	FScriptMulticastDelegate SignalCanGetUpFromKnockback; // 0x8c0
	bool CanGetUpFromKnockback; // 0x8d0
	float KnockbackEndMinDelay; // 0x8d4
	float KnockbackDuration; // 0x8d8
	bool FallOnKnockbackEnd; // 0x8dc
	bool KnockbackAllowRagdolling; // 0x8dd
	bool UseSteering; // 0x8de
	EKnockbackStage m_KnockbackStage; // 0x8df
	float MovementDetectionThreshold; // 0x8e0
};

struct UEdGraphPin_Deprecated : UObject {
	FString PinName; // 0x28
	FString PinToolTip; // 0x38
	EEdGraphPinDirection Direction; // 0x48
	FEdGraphPinType PinType; // 0x50
	FString DefaultValue; // 0xd0
	FString AutogeneratedDefaultValue; // 0xe0
	UObject* DefaultObject; // 0xf0
	FText DefaultTextValue; // 0xf8
	TArray<UEdGraphPin_Deprecated*> LinkedTo; // 0x110
	TArray<UEdGraphPin_Deprecated*> SubPins; // 0x120
	UEdGraphPin_Deprecated* ParentPin; // 0x130
	UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x138
};

struct UGUIModule : UObject {
	FName ModuleName; // 0x28
	FName ToggleActionName; // 0x30
	FSlateSound ToggleActionSound; // 0x38
	bool bForceHideShortcutBar; // 0x50
	bool CloseOnShortcutRelease; // 0x51
	bool CloseOnESC; // 0x52
	bool CloseOnEndPlay; // 0x53
	bool PreloadOnStartup; // 0x54
	bool NonBlockingLoad; // 0x55
	bool IsPersistent; // 0x56
	bool m_ShowWhenDead; // 0x57
	bool MustBeBasePlayerChar; // 0x58
	EGUIModuleCategory Category; // 0x59
	UClass* WidgetClass; // 0x60
	UWindowRoot* RootWidget; // 0x80
	bool IsFullscreen; // 0x88
	bool DisableShortcutWhenPlayerInputBlocked; // 0x89
	bool TieToBasePlayerCharInput; // 0x8a
	FScriptMulticastDelegate SignalActivated; // 0x90
	FScriptMulticastDelegate OnActivate; // 0xa0
	FScriptMulticastDelegate OnBeginLoad; // 0xb0
	UGUIModuleController* m_ModuleController; // 0xc0
};

struct UMapMarkerView : URootWidget {
	UImage* MapMarkerImage; // 0x328
	int32_t mapMarkerId; // 0x330
	FVector WorldLocation; // 0x334
	FVector2D Location2D; // 0x340
};

struct UPasswordDialogBase : UWindowRoot {
	FScriptMulticastDelegate SignalBack; // 0x398
	FScriptMulticastDelegate SignalOk; // 0x3a8
	FBlueprintSessionResult m_Session; // 0x430
};

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UPaperdollPanel : URootWidget {
	UEquipmentInventory* m_EquipmentInventory; // 0x318
	UItemInventoryClientMonitor* m_InventoryMonitor; // 0x320
	AConanCharacter* m_CharacterToInspect; // 0x328
};

struct UPatchNotesEntryView : URootWidget {
	FLinearColor TextColorDate; // 0x318
	FLinearColor TextColorTitle; // 0x328
	FLinearColor TextColorNote; // 0x338
	UWidgetAnimation* AnimationSelected; // 0x348
	UWidgetAnimation* AnimationDeselected; // 0x350
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FRichCurve Translation[0x2]; // 0xd0
	FRichCurve Rotation; // 0x1b0
	FRichCurve Scale[0x2]; // 0x220
	FRichCurve Shear[0x2]; // 0x300
};

struct UInterpFilter : UObject {
	FString Caption; // 0x28
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
	int32_t GatherMaterialTypeID; // 0x54
	int32_t SoundEmitterType; // 0x58
	bool CanBeClimbed; // 0x5c
	float ClimbingStaminaCostMultiplier; // 0x60
	float DamageToClimbingPlayer; // 0x64
	float DamageToTouchingCharacter; // 0x68
	float TireFrictionScale; // 0x6c
	TArray<FTireFrictionScalePair> TireFrictionScales; // 0x70
};

struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x3d0
};

struct UPurgeConfigData : UDataAsset {
	TArray<FName> CommunityDataTable; // 0x28
	int32_t SpawnCap; // 0x38
	int32_t SpawnLocationCap; // 0x3c
	float PurgeSpawnDistance; // 0x40
	float PurgeDuration; // 0x44
};

struct UServerStartupReport : UServerReport {
	FString MacAddress; // 0x50
	int32_t RevisionNumber; // 0x60
	int32_t SnapshotID; // 0x64
	int32_t QPort; // 0x68
	int32_t PlayerSlotCount; // 0x6c
	int32_t serverRegion; // 0x70
	int32_t serverType; // 0x74
	int32_t StartupTime; // 0x78
	FString ServerName; // 0x80
	FString ServerMapName; // 0x90
	FString Platform; // 0xa0
	int32_t IsOfficial; // 0xb0
};

struct USkyLightComponent : ULightComponentBase {
	ESkyLightSourceType SourceType; // 0x328
	UTextureCube* Cubemap; // 0x330
	float SourceCubemapAngle; // 0x338
	int32_t CubemapResolution; // 0x33c
	float SkyDistanceThreshold; // 0x340
	bool bLowerHemisphereIsBlack; // 0x344
	FLinearColor LowerHemisphereColor; // 0x348
	float OcclusionMaxDistance; // 0x358
	float Contrast; // 0x35c
	float MinOcclusion; // 0x360
	FColor OcclusionTint; // 0x364
	UTextureCube* BlendDestinationCubemap; // 0x418
};

struct UCraftingStationInventoryView : UExternalInventoryView {
	APlaceableBase* m_CraftingStation; // 0x388
	UCraftingQueue* m_CraftingQueue; // 0x390
	UItemInventory* m_DismantlerInventory; // 0x398
	UItemInventory* m_ArtisanThrallInventory; // 0x3a0
};

struct UServerRentalBase : UWindowRoot {
	UServerRentalServerDetails* m_CurrentExpandedServerDetails; // 0x398
	UServerRentalServerDetails* ServerRentalDetailClass; // 0x3a0
	UServerRentalRequestConnection* m_ServerRentalRequestConnection; // 0x3a8
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
	USCS_Node* RootNode; // 0x50
	TArray<USCS_Node*> ActorComponentNodes; // 0x58
};

struct UPickupFoliage : UInteractableFoliageBase {
	UDestructibleMesh* DestructibleMesh; // 0x9e0
	FScriptMulticastDelegate OnInstanceTakePointDamage; // 0xa00
	FScriptMulticastDelegate OnInstanceTakeRadialDamage; // 0xa10
	UDestructibleMesh* DestructibleMeshPtr; // 0xa20
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UListEntryBase : UCharacterListEntryBase {
	UTexture2D* m_RankIconRecruit; // 0x390
	UTexture2D* m_RankIconMember; // 0x398
	UTexture2D* m_RankIconGuildMaster; // 0x3a0
	UTexture2D* m_RankIconOfficer; // 0x3a8
	UTexture2D* m_OnlineStatusIconOnline; // 0x3b0
	UTexture2D* m_OnlineStatusIconOffline; // 0x3b8
	UTextBlock* m_CharacterName; // 0x3c0
	UTextBlock* m_PlayerNickname; // 0x3c8
	UTextBlock* m_OnlineStatus; // 0x3d0
	UTextBlock* m_Level; // 0x3d8
	UTextBlock* m_Date; // 0x3e0
	UTextBlock* m_Event; // 0x3e8
	UImage* m_OnlineStatusIcon; // 0x3f0
	UImage* m_Rank; // 0x3f8
	FSlateColor m_OfflineColor; // 0x400
	FUniqueNetIdRepl m_PlayerNetId; // 0x430
	UUniqueID* m_GuildId; // 0x448
};

struct UFeedingTrayEntryView : URootWidget {
	AConanCharacter* m_Pet; // 0x328
	UThrallHungerSystemComponent* m_HungerSystem; // 0x330
};

struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x830
	FVector SplineUpDir; // 0x888
	char bAllowSplineEditingPerInstance : 1; // 0x894
	char bSmoothInterpRollScale : 1; // 0x894
	ESplineMeshAxis ForwardAxis; // 0x898
	float SplineBoundaryMin; // 0x89c
	float SplineBoundaryMax; // 0x8a0
	UBodySetup* BodySetup; // 0x8a8
	FGuid CachedMeshBodySetupGuid; // 0x8b0
	char bMeshDirty : 1; // 0x8c0
};

struct UActorPersistenceComponent : UPersistenceComponent {
	bool SaveOnSpawn; // 0xf8
	float SaveFrequency; // 0xfc
	bool SkipSaving; // 0x100
	UUniqueID* UID; // 0x108
	FScriptMulticastDelegate OnSignalDataLoaded; // 0x110
	FScriptMulticastDelegate OnSignalPreSave; // 0x120
	bool m_bWasLoadedFromDB; // 0x130
};

struct UWebSocketConnection : UNetConnection {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMap; // 0x60
	TArray<UChannel*> OpenChannels; // 0x68
	TArray<AActor*> SentTemporaries; // 0x78
	AActor* ViewTarget; // 0x88
	AActor* OwningActor; // 0x90
	int32_t MaxPacket; // 0x98
	char InternalAck : 1; // 0x9c
	TArray<UObject*> AsyncLoadedObjects; // 0xa0
	FUniqueNetIdRepl PlayerId; // 0x170
	double LastReceiveTime; // 0x200
	TMap<AActor*, UActorChannel*> ActorChannels; // 0x334e0
	TArray<UChannel*> ChannelsToTick; // 0x33730
};

struct UFloatStatChangeSignalNode : UObject {
	FScriptMulticastDelegate SignalStatChanged; // 0x28
};

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x60
};

struct UHoudiniRuntimeSettings : UObject {
	EHoudiniRuntimeSettingsSessionType SessionType; // 0x28
	FString ServerHost; // 0x30
	int32_t ServerPort; // 0x40
	FString ServerPipeName; // 0x48
	bool bStartAutomaticServer; // 0x58
	float AutomaticServerTimeout; // 0x5c
	bool bShowMultiAssetDialog; // 0x60
	bool bEnableCooking; // 0x61
	bool bUploadTransformsToHoudiniEngine; // 0x62
	bool bTransformChangeTriggersCooks; // 0x63
	bool bDisplaySlateCookingNotifications; // 0x64
	bool bCookCurvesOnMouseRelease; // 0x65
	FText TemporaryCookFolder; // 0x68
	bool bTreatRampParametersAsMultiparms; // 0x80
	FString CollisionGroupNamePrefix; // 0x88
	FString RenderedCollisionGroupNamePrefix; // 0x98
	FString UCXCollisionGroupNamePrefix; // 0xa8
	FString UCXRenderedCollisionGroupNamePrefix; // 0xb8
	FString SimpleCollisionGroupNamePrefix; // 0xc8
	FString SimpleRenderedCollisionGroupNamePrefix; // 0xd8
	FString MarshallingAttributeMaterial; // 0xe8
	FString MarshallingAttributeMaterialHole; // 0xf8
	FString MarshallingAttributeInstanceOverride; // 0x108
	FString MarshallingAttributeFaceSmoothingMask; // 0x118
	FString MarshallingAttributeLightmapResolution; // 0x128
	FString MarshallingAttributeGeneratedMeshName; // 0x138
	FString MarshallingAttributeInputMeshName; // 0x148
	float MarshallingSplineResolution; // 0x158
	bool MarshallingLandscapesUseFullResolution; // 0x15c
	float GeneratedGeometryScaleFactor; // 0x160
	float TransformScaleFactor; // 0x164
	EHoudiniRuntimeSettingsAxisImport ImportAxis; // 0x168
	char bDoubleSidedGeometry : 1; // 0x16c
	UPhysicalMaterial* PhysMaterial; // 0x170
	ECollisionTraceFlag CollisionTraceFlag; // 0x178
	int32_t LightMapResolution; // 0x17c
	float LpvBiasMultiplier; // 0x180
	float GeneratedDistanceFieldResolutionScale; // 0x184
	FWalkableSlopeOverride WalkableSlopeOverride; // 0x188
	int32_t LightMapCoordinateIndex; // 0x198
	char bUseMaximumStreamingTexelRatio : 1; // 0x19c
	float StreamingDistanceMultiplier; // 0x1a0
	UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x1a8
	TArray<UAssetUserData*> AssetUserData; // 0x1b0
	bool bUseFullPrecisionUVs; // 0x1c0
	int32_t SrcLightmapIndex; // 0x1c4
	int32_t DstLightmapIndex; // 0x1c8
	int32_t MinLightmapResolution; // 0x1cc
	bool bRemoveDegenerates; // 0x1d0
	EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x1d1
	EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x1d2
	EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x1d3
	bool bUseMikkTSpace; // 0x1d4
	bool bUseCustomHoudiniLocation; // 0x1d5
	FDirectoryPath CustomHoudiniLocation; // 0x1d8
};

struct ADomeBase : AActor {
	float SavedRadius; // 0x3d8
};

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
	FGuid ObjectGuid; // 0xc8
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	bool bLegacyGeneratedClassIsAuthoritative; // 0x39
	FGuid BlueprintGuid; // 0x3c
};

struct UFCProgressbar : URootWidget {
	float progress; // 0x318
	TArray<FFCProgressbarSegment> Segments; // 0x320
	TArray<UProgressBar*> m_ProgressBars; // 0x338
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0x40
};

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x3d8
	UBillboardComponent* GoodSprite; // 0x3e0
	UBillboardComponent* BadSprite; // 0x3e8
	char bIsPIEPlayerStart : 1; // 0x3f0
};

struct UW_LevelUpFIFOMessageView_C : UFIFOMessageView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* FadeOut; // 0x360
	UWidgetAnimation* FadeIn; // 0x368
	UTextBlock* textView; // 0x370
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FIntegralCurve ParticleKeys; // 0xc8
};

struct ABuildableSpawner : AActor {
	FScriptMulticastDelegate SignalOnBuildingSpawned; // 0x3d0
	UClass* InstanceClass; // 0x3e0
	UUniqueID* BuildingID; // 0x408
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x2b8
	bool bHandlingDisconnect; // 0x2b9
};

struct UParticleModuleTypeDataBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UMaterialExpressionParticleSize : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UDyeWindow : UWindowRoot {
	TWeakObjectPtr<UGameItem> DisplayedItem; // 0x398
	TArray<int32_t> DyeIndices; // 0x3a0
	TArray<int32_t> SavedDyeIndices; // 0x3b0
	int32_t SelectedTintChannel; // 0x3c0
};

struct UCharacterEncumbranceBar : URootWidget {
	AConanCharacter* Character; // 0x318
};

struct USlateSettings : UObject {
	bool bVirtualKeyboardSendsTextChanged; // 0x28
	bool bVirtualKeyboardDisplayOnFocus; // 0x29
	bool bExplicitCanvasChildZOrder; // 0x2a
};

struct UGraniteTileSet : UObject {
	FString GTSFileName; // 0x28
	float LODBias; // 0x38
	EGraniteTranscoderQuality TranscoderQuality; // 0x3c
	int32_t NumberOfMipsToPrefetch; // 0x40
	int32_t NumberOfMipsToPin; // 0x44
	uint32_t NumLayers; // 0x48
	uint32_t NumTextures; // 0x4c
	EGraniteGPUCacheGroup gpuCacheGroup; // 0x50
};

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UInterpFilter_Classes : UInterpFilter {
	FString Caption; // 0x28
};

struct ACharacter : APawn {
	USkeletalMeshComponent* Mesh; // 0x430
	UCharacterMovementComponent* CharacterMovement; // 0x438
	UCapsuleComponent* CapsuleComponent; // 0x440
	FBasedMovementInfo BasedMovement; // 0x448
	FBasedMovementInfo ReplicatedBasedMovement; // 0x478
	float AnimRootMotionTranslationScale; // 0x4a8
	FVector BaseTranslationOffset; // 0x4ac
	FQuat BaseRotationOffset; // 0x4c0
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x4d0
	char ReplicatedMovementMode; // 0x4d4
	bool bInBaseReplication; // 0x4d5
	float CrouchedEyeHeight; // 0x4d8
	char bIsCrouched : 1; // 0x4dc
	char bIsClimbing : 1; // 0x4dc
	char bPressedJump : 1; // 0x4dc
	char bClientUpdating : 1; // 0x4dc
	char bClientWasFalling : 1; // 0x4dc
	char bClientResimulateRootMotion : 1; // 0x4dc
	char bClientResimulateRootMotionSources : 1; // 0x4dc
	char bSimGravityDisabled : 1; // 0x4dc
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x4dc
	char bServerMoveIgnoreRootMotion : 1; // 0x4dc
	float JumpKeyHoldTime; // 0x4e0
	float JumpMaxHoldTime; // 0x4e4
	int32_t JumpMaxCount; // 0x4e8
	int32_t JumpCurrentCount; // 0x4ec
	char bWasJumping : 1; // 0x4f0
	FScriptMulticastDelegate OnReachedJumpApex; // 0x4f8
	FScriptMulticastDelegate MovementModeChangedDelegate; // 0x518
	FScriptMulticastDelegate OnCharacterMovementUpdated; // 0x528
	FRootMotionSourceGroup SavedRootMotion; // 0x538
	FRootMotionMovementParams ClientRootMotionParams; // 0x640
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x680
	FRepRootMotionMontage RepRootMotion; // 0x690
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x60
	float Period; // 0x98
};

struct AConanAmbientSound : AActor {
	UConanAudioComponent* AudioComponent; // 0x3d0
};

struct UVaultActorComponent : UActorComponent {
	FScriptMulticastDelegate OnVaultInitialized; // 0xf8
	FScriptMulticastDelegate OnExhaustedValueChanged; // 0x108
	FName vaultName; // 0x118
	bool bIsExhausted; // 0x120
	AVaultManager* vaultManagerPtr; // 0x128
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	FLinearColor FadeColor; // 0x140
	char bFadeAudio : 1; // 0x150
};

struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; // 0x28
	uint32_t UnsignedInt32Variable; // 0x2c
	uint64_t UnsignedInt64Variable; // 0x30
	uint8_t SignedInt8Variable; // 0x38
	int16_t SignedInt16Variable; // 0x3a
	int64_t SignedInt64Variable; // 0x40
	char UnsignedInt8Variable; // 0x48
	int32_t SignedInt32Variable; // 0x4c
};

struct USettingsBase : UWindowRoot {
	USoundBase* SettingsButtonSound; // 0x398
	USoundBase* ApplySettingsSound; // 0x3b8
	USoundBase* SettingsBackSound; // 0x3d8
	USoundBase* RestoreDefaultsSound; // 0x3f8
	UMessageBoxWidget* m_AccessWarning; // 0x470
	UMessageBoxWidget* m_WaitingForServer; // 0x478
	UInputComponent* m_DialogInputComponent; // 0x4b8
	FText m_RestoreDefaultText; // 0x4c0
	FText m_ClearKeyBinidngText; // 0x4d8
	FText m_ScrollText; // 0x4f0
	FText m_ApplyText; // 0x508
};

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x3f8
};

struct UItemStatView : URootWidget {
	int32_t fontSize; // 0x318
};

struct UAISenseConfig_Sight : UAISenseConfig {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UMaterialExpressionPreSkinnedPosition : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	ALandscape* LandscapeActor; // 0x800
};

struct UUserInterfaceSettings : UDeveloperSettings {
	ERenderFocusRule RenderFocusRule; // 0x38
	FStringClassReference DefaultCursor; // 0x40
	FStringClassReference TextEditBeamCursor; // 0x50
	FStringClassReference CrosshairsCursor; // 0x60
	FStringClassReference HandCursor; // 0x70
	FStringClassReference GrabHandCursor; // 0x80
	FStringClassReference GrabHandClosedCursor; // 0x90
	FStringClassReference SlashedCircleCursor; // 0xa0
	float ApplicationScale; // 0xb0
	EUIScalingRule UIScaleRule; // 0xb4
	FStringClassReference CustomScalingRuleClass; // 0xb8
	FRuntimeFloatCurve UIScaleCurve; // 0xc8
	bool bLoadWidgetsOnDedicatedServer; // 0x140
	TArray<UObject*> CursorClasses; // 0x148
	UObject* CustomScalingRuleClassInstance; // 0x158
	UDPICustomScalingRule* CustomScalingRule; // 0x160
};

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
};

struct UMapWithMarkerWidget : URootWidget {
	int32_t MinimumZoom; // 0x318
	int32_t ZoomSteps; // 0x31c
	float ZoomFactor; // 0x320
	UMapMarkerView* MapMarkerView; // 0x328
	UTexture2D* MapTexture; // 0x330
	UTexture2D* MapMaskBitmap; // 0x338
	UTexture2D* ThrallIcon; // 0x340
	FLinearColor IllegalPosTintColor; // 0x348
	FScriptMulticastDelegate SignalMarkerIsHovered; // 0x358
	FVector2D GamepadCursorOffset; // 0x38c
	FMapCoordinatesAndSpans m_MapCoordinateValues; // 0x394
	float FrictionMultiplier; // 0x3c4
	UScrollBox* m_HScrollBox; // 0x3c8
	UScrollBox* m_VScrollBox; // 0x3d0
	UOverlay* m_Overlay; // 0x3d8
	UOverlay* m_MasterOverlay; // 0x3e0
	USizeBox* m_MapSizeBox; // 0x3e8
	UImage* m_MapImage; // 0x3f0
	UImage* m_GamepadCursor; // 0x3f8
	TMap<int64_t, UMapMarkerView*> m_Markers; // 0x400
	TMap<int64_t, UMapMarkerView*> m_ThrallMarkers; // 0x450
	UPlayerMarkerDialog* m_PlayerMarkerDialog; // 0x4a0
	USizeBox* m_DebugEnergyMapSizeBox; // 0x4a8
	UImage* m_DebugEnergyMapImage; // 0x4b0
	FVector2D m_DebugImageTopLeft; // 0x4b8
	FVector2D m_DebugImageBottomRight; // 0x4c0
	DelegateProperty m_UpdatedDelegate; // 0x5b0
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xd98
	float ServerFlushLogInterval; // 0xd9c
	UGameInstance* GameInstance; // 0xda0
};

struct UNiagaraEffectRendererProperties : UObject {
	FName Dummy; // 0x28
};

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x38
	float PitchMax; // 0x3c
	float VolumeMin; // 0x40
	float VolumeMax; // 0x44
};

struct AGameState : AGameStateBase {
	FName MatchState; // 0x410
	FName PreviousMatchState; // 0x418
	int32_t ElapsedTime; // 0x420
};

struct UTwitchAuthBase : UWindowRoot {
	UCanvasPanel* MainCanvasPanel; // 0x398
	USizeBox* InGameAuthBox; // 0x3a0
	UVerticalBox* BarBox; // 0x3a8
	UVerticalBox* TokenAuthBox; // 0x3b0
	USizeBox* DisconnectBox; // 0x3b8
	UFCButton* B_CopyWebpage; // 0x3c0
	UFCButton* B_CopyDisconnectWebpage; // 0x3c8
	UFCButton* B_AuthAuto; // 0x3d0
	UFCButton* B_AuthToken; // 0x3d8
	UFCButton* B_Disconnect; // 0x3e0
	UFCButton* B_Cancel; // 0x3e8
	UFCRichTextBlock* T_LinkingWebpageText; // 0x3f0
	UFCEditableTextBox* T_Token; // 0x3f8
	UFCRichTextBlock* T_DisconnectWebpageText; // 0x400
	UTextBlock* T_UpperText; // 0x408
	UTextBlock* T_LowerText; // 0x410
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct AInfo : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UW_Settings_Control_C : USettingsControlBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x388
	UTextBlock* Category; // 0x390
	UW_ButtonNormal_C* CB_MouseInvertY; // 0x398
	UW_ButtonNormal_C* CB_RightAxisInvertY; // 0x3a0
	UTextBlock* ControllerCategory; // 0x3a8
	UGridPanel* MouseSettings; // 0x3b0
	UW_EditableLabeledSlider_C* S_AimSensitivity; // 0x3b8
	UW_EditableLabeledSlider_C* S_LeftAxisDeadzone; // 0x3c0
	UW_EditableLabeledSlider_C* S_RightAxisAimSensitivity; // 0x3c8
	UW_EditableLabeledSlider_C* S_RightAxisDeadzone; // 0x3d0
	UW_EditableLabeledSlider_C* S_RightAxisSensitivity; // 0x3d8
	UW_EditableLabeledSlider_C* S_Sensitivity; // 0x3e0
};

struct UNpcDebugWindow : URootWidget {
	UTextBlock* SpawnNameValue; // 0x318
	UTextBlock* AiLodValue; // 0x320
	UTextBlock* BtInfoValue; // 0x328
	UTextBlock* BehaviourVal; // 0x330
	UTextBlock* TacticVal; // 0x338
	UTextBlock* TargetVal; // 0x340
	UTextBlock* DistanceVal; // 0x348
	UTextBlock* MoveTypeVal; // 0x350
	UTextBlock* BlackboardVal; // 0x358
	UBorder* SpawnNameBox; // 0x360
	UBorder* AiLodBox; // 0x368
	UBorder* BtInfoBox; // 0x370
	UBorder* BehaviourBox; // 0x378
	UBorder* TacticBox; // 0x380
	UBorder* TargetBox; // 0x388
	UBorder* DistanceBox; // 0x390
	UBorder* MoveTypeBox; // 0x398
	UBorder* BlackboardBox; // 0x3a0
};

struct UInputComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UMaterialFunction : UObject {
	FGuid StateId; // 0x28
	FString Description; // 0x38
	char bExposeToLibrary : 1; // 0x48
	TArray<UMaterialExpression*> FunctionExpressions; // 0x50
	char bReentrantFlag : 1; // 0x60
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
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

struct UAnimCompress_Automatic : UAnimCompress {
	float MaxEndEffectorError; // 0x40
	char bTryFixedBitwiseCompression : 1; // 0x44
	char bTryPerTrackBitwiseCompression : 1; // 0x44
	char bTryLinearKeyRemovalCompression : 1; // 0x44
	char bTryIntervalKeyRemoval : 1; // 0x44
	char bRunCurrentDefaultCompressor : 1; // 0x44
	char bAutoReplaceIfExistingErrorTooGreat : 1; // 0x44
	char bRaiseMaxErrorToExisting : 1; // 0x44
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x70
};

struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; // 0x38
	char bModulatePitch : 1; // 0x38
	float AmplitudeMin; // 0x3c
	float AmplitudeMax; // 0x40
	float FrequencyMin; // 0x44
	float FrequencyMax; // 0x48
	float OffsetMin; // 0x4c
	float OffsetMax; // 0x50
	float CenterMin; // 0x54
	float CenterMax; // 0x58
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0x58
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x68
	USoundClass* ParentClass; // 0x78
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UParticleModuleLifetimeBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UW_FriendListEntry_C : UFriendListEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UHorizontalBox* ActionsBox; // 0x478
	UW_ButtonCustom_C* B_BlockFriend; // 0x480
	UW_ButtonCustom_C* B_InviteToSession; // 0x488
	UW_ButtonCustom_C* B_RemoveFriend; // 0x490
	UBorder* Container; // 0x498
};

struct URateServerBase : UWindowRoot {
	URatingServerRequestConnection* m_ServerConnection; // 0x400
	UMessageBoxWidget* m_ErrorDialog; // 0x408
};

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString UnicastEndpoint; // 0x30
	FString MulticastEndpoint; // 0x40
	char MulticastTimeToLive; // 0x50
	TArray<FString> StaticEndpoints; // 0x58
	bool EnableTunnel; // 0x68
	FString TunnelUnicastEndpoint; // 0x70
	FString TunnelMulticastEndpoint; // 0x80
	TArray<FString> RemoteTunnelEndpoints; // 0x90
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct USkinnedMeshComponent : UMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x7c8
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x7d0
	char bUseBoundsFromMasterPoseComponent : 1; // 0x82c
	UPhysicsAsset* PhysicsAssetOverride; // 0x850
	int32_t ForcedLodModel; // 0x858
	int32_t MinLodModel; // 0x85c
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x870
	float StreamingDistanceMultiplier; // 0x880
	FColor WireframeColor; // 0x884
	char bForceWireframe : 1; // 0x888
	char bDisplayBones : 1; // 0x888
	char bDisableMorphTarget : 1; // 0x888
	char bHideSkin : 1; // 0x888
	char bPerBoneMotionBlur : 1; // 0x8a0
	char bComponentUseFixedSkelBounds : 1; // 0x8a0
	char bConsiderAllBodiesForBounds : 1; // 0x8a0
	EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0x8a4
	char bForceMeshObjectUpdate : 1; // 0x8a8
	char bCanHighlightSelectedSections : 1; // 0x8a8
	char bRecentlyRendered : 1; // 0x8a8
	char CustomSortAlternateIndexMode; // 0x8ac
	char bCastCapsuleDirectShadow : 1; // 0x8b0
	char bCastCapsuleIndirectShadow : 1; // 0x8b0
	float CapsuleIndirectShadowMinVisibility; // 0x8b4
	char bCPUSkinning : 1; // 0x8b8
	FBoxSphereBounds CachedLocalBounds; // 0x8cc
	bool bCachedLocalBoundsUpToDate; // 0x8e8
	bool bEnableUpdateRateOptimizations; // 0x8e9
	bool bDisplayDebugUpdateRateOptimizations; // 0x8ea
};

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UW_ActionTutorial_C : UActionTutorial {
	UW_HotkeyIcon_C* Icon; // 0x3f0
	UTextBlock* PostText; // 0x3f8
	UTextBlock* PreText; // 0x400
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x130
};

struct ACharacterLodSystem : AInfo {
	int32_t SimultaneousIK; // 0x3d0
	float IKLodUpdateInterval; // 0x3d4
	float IKRange; // 0x3d8
	int32_t SimultaneousHighQualityHair; // 0x3dc
	float HairLodUpdateInterval; // 0x3e0
	TArray<AActor*> IKActors; // 0x3f0
	TArray<UCharacterCustomizationComponent*> HighQualityHairComponents; // 0x408
	TMap<AActor*, FEmpty> m_EnabledClothSimActors; // 0x430
	TMap<AActor*, FEmpty> m_AllClothSimActors; // 0x480
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x3f0
	TArray<AOnlineBeaconClient*> ClientActors; // 0x3f8
};

struct UBaseVoiceTransmissionIndicator : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xe0
};

struct UMaterialExpressionGraniteTextureObject : UMaterialExpressionGraniteTextureBase {
	UGraniteTexture* Texture; // 0x60
	int32_t PreviewLayer; // 0x68
};

struct UTemplateIdTableAccessor : UTableAccessor {
	UDataTable* table; // 0x28
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct UW_Friends_FriendRequests_C : UFriendRequestGame {
	UW_NavigatableVerticalBox_C* FriendRequestEntryList; // 0x3c8
};

struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x3d0
};

struct UW_NavigatableGridPanel_C : UNavigatableGridPanel {
	int32_t RowLength; // 0x3a8
	TArray<float> ColumnFill; // 0x3b0
	TArray<float> RowFill; // 0x3c0
};

struct UVerticalBox : UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct UExpandableArea : UWidget {
	FExpandableAreaStyle Style; // 0x120
	FSlateBrush BorderBrush; // 0x250
	FSlateColor BorderColor; // 0x2e0
	bool bIsExpanded; // 0x308
	float MaxHeight; // 0x30c
	FMargin HeaderPadding; // 0x310
	FMargin AreaPadding; // 0x320
	FScriptMulticastDelegate OnExpansionChanged; // 0x330
	UWidget* HeaderContent; // 0x340
	UWidget* BodyContent; // 0x348
};

struct UParticleSystem : UObject {
	EParticleSystemUpdateMode SystemUpdateMode; // 0x28
	float UpdateTime_FPS; // 0x2c
	float UpdateTime_Delta; // 0x30
	float WarmupTime; // 0x34
	float WarmupTickRate; // 0x38
	TArray<UParticleEmitter*> Emitters; // 0x40
	UParticleSystemComponent* PreviewComponent; // 0x50
	UInterpCurveEdSetup* CurveEdSetup; // 0x58
	char bOrientZAxisTowardCamera : 1; // 0x60
	float LODDistanceCheckTime; // 0x64
	ParticleSystemLODMethod LODMethod; // 0x68
	TArray<float> LODDistances; // 0x70
	char bRegenerateLODDuplicate : 1; // 0x80
	TArray<FParticleSystemLOD> LODSettings; // 0x88
	char bUseFixedRelativeBoundingBox : 1; // 0x98
	FBox FixedRelativeBoundingBox; // 0x9c
	float SecondsBeforeInactive; // 0xb8
	char bShouldResetPeakCounts : 1; // 0xbc
	char bHasPhysics : 1; // 0xbc
	char bUseRealtimeThumbnail : 1; // 0xbc
	char ThumbnailImageOutOfDate : 1; // 0xbc
	float Delay; // 0xc0
	float DelayLow; // 0xc4
	char bUseDelayRange : 1; // 0xc8
	bool bAutoDeactivate; // 0xcc
	uint32_t MinTimeBetweenTicks; // 0xd0
	EParticleSystemInsignificanceReaction InsignificantReaction; // 0xd4
	float InsignificanceDelay; // 0xd8
	EParticleSignificanceLevel MaxSignificanceLevel; // 0xdc
	FVector MacroUVPosition; // 0xe0
	float MacroUVRadius; // 0xec
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xf0
	FBox CustomOcclusionBounds; // 0xf4
	TArray<FLODSoloTrack> SoloTracking; // 0x110
	TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0x120
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xf8
	UAISense* DominantSense; // 0x108
	AAIController* AIOwner; // 0x120
	FScriptMulticastDelegate OnPerceptionUpdated; // 0x1a8
	FScriptMulticastDelegate OnTargetPerceptionUpdated; // 0x1b8
};

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UMaterialExpressionIf : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	FExpressionInput AGreaterThanB; // 0xd0
	FExpressionInput AEqualsB; // 0x108
	FExpressionInput ALessThanB; // 0x140
	float EqualsThreshold; // 0x178
	float ConstB; // 0x17c
	float ConstAEqualsB; // 0x180
};

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x3d8
	UDrawFrustumComponent* DrawFrustum; // 0x3e0
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xc0
	FRawDistributionFloat StartRadius; // 0xc8
	FRawDistributionFloat StartHeight; // 0x100
	CylinderHeightAxis HeightAxis; // 0x138
};

struct ALandscapeGizmoActor : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x60
};

struct UConsoleUserSettingsSave : USaveGame {
	int32_t MotionBlur; // 0x28
	int32_t VolumetricFog; // 0x2c
	float FilmGrain; // 0x30
	float GammaValue; // 0x34
	float FOV; // 0x38
	FVector2D SafeZonePadding; // 0x3c
	int32_t ConsoleGraphicsPreset; // 0x44
	float SoundVolumeMaster; // 0x48
	float SoundVolumeMusic; // 0x4c
	float SoundVolumeVoice; // 0x50
	float SoundVolumeVoiceChat; // 0x54
	float SoundVolumeSFX; // 0x58
	bool SubtitlesEnabled; // 0x5c
	bool PushToTalk; // 0x5d
	bool ShowOwnVoiceIndicator; // 0x5e
	bool ShowOtherVoiceIndicator; // 0x5f
	bool AreFloatingNamesEnabled; // 0x60
	FString Language; // 0x68
	ENudity nudity; // 0x78
	bool ShowHUDDot; // 0x79
	bool EnableCameraShake; // 0x7a
	bool showBuildingHelp; // 0x7b
	bool DisableAutomaticWield; // 0x7c
	bool ShowJourneySteps; // 0x7d
	bool ShowWeaponTrails; // 0x7e
	bool AllowFirstPersonCameraInCombat; // 0x7f
	bool EnableAutoFacingOnAttack; // 0x80
	bool SendNewItemsToShorcutsWheel; // 0x81
	bool AutoFocusRecipeSearchBar; // 0x82
	ESignVisibility SignVisibility; // 0x83
	EGamepadStyleMovement UseGamepadStyleMovement; // 0x84
	bool RotatableStationaryCamera; // 0x85
	bool EnableStreamerMode; // 0x86
	bool ToggleAssignmentRadial; // 0x87
	bool showContextualControls; // 0x88
	bool ShowLandClaimNotification; // 0x89
	EBattleStandardJoinSetting BattleStandardJoinSetting; // 0x8a
	bool ShowHUDBuffs; // 0x8b
	float HUDBuffScale; // 0x8c
	bool HUDShowBarValues; // 0x90
	bool ShowHealthValueThralls; // 0x91
	bool ShowHealthValueNPCs; // 0x92
	bool AlwaysShowHealthBars; // 0x93
	float HealthBarMaxDisplayRange; // 0x94
	bool DifferentBarColorClanMembers; // 0x98
	bool InvertY; // 0x99
	float RightAxisSensitivity; // 0x9c
	float RightAxisAimSensitivity; // 0xa0
	float LeftAxisDeadzone; // 0xa4
	float RightAxisDeadzone; // 0xa8
	float LeftTriggerDeadzone; // 0xac
	float RightTriggerDeadzone; // 0xb0
	bool RightAxisInvertY; // 0xb4
	FName GamepadPreset; // 0xb8
	FString ShowUIGamma; // 0xc0
	bool SavePasswords; // 0xd0
	bool HideCommunityPicker; // 0xd1
	TMap<FString, int32_t> CharacterLevels; // 0xd8
	TMap<FString, FString> SavedServers; // 0x128
	FString LastConnected; // 0x178
	FString LastDLC; // 0x188
	TArray<FFavoriteServer> FavoriteServers; // 0x198
	TArray<FHistoricServer> HistoricServers; // 0x1a8
	TMap<FString, FString> ServerSettings_3; // 0x1b8
	TArray<FInputActionKeyMapping> ActionMappings; // 0x208
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x218
	TSet<FString> MuteVoiceEncryptedIds; // 0x228
	TSet<FString> MuteChatEncryptedIds; // 0x278
};

struct ULineBatchComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x390
	float CaptureDistanceScale; // 0x394
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x398
};

struct ASpecialPropertiesVolume : AActor {
	bool AllowUndermeshing; // 0x3d0
	bool AllowBuildingUnderHeightmap; // 0x3d1
	TArray<UClass*> Whitelist; // 0x3d8
};

struct UW_PatchNotesView_C : UPatchNotesView {
	UW_ButtonCustom_C* MoreButton; // 0x378
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
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

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x6c0
	UBodySetup* BrushBodySetup; // 0x6c8
	FVector PrePivot; // 0x6d0
};

struct UTooltipWidget : UUserWidget {
	FLinearColor ColorAndOpacity; // 0x120
	DelegateProperty ColorAndOpacityDelegate; // 0x130
	FSlateColor ForegroundColor; // 0x140
	DelegateProperty ForegroundColorDelegate; // 0x168
	FMargin Padding; // 0x178
	bool bSupportsKeyboardFocus; // 0x188
	bool bIsFocusable; // 0x189
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x190
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1a0
	bool bStopAction; // 0x1b0
	int32_t Priority; // 0x1b4
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1b8
	FMargin SafeZonePadding; // 0x1c8
	UWidgetTree* WidgetTree; // 0x1d8
	char bCanEverTick : 1; // 0x1e0
	char bCanEverPaint : 1; // 0x1e0
	char bCookedWidgetTree : 1; // 0x1e0
	UInputComponent* InputComponent; // 0x1e8
};

struct UMessageBoxWidget : UWindowRoot {
	FScriptMulticastDelegate SignalUserActionPerformed; // 0x398
	UGamepadHelpEntryBase* GamepadHelpEntryClass; // 0x3a8
	UFCButton* CustomButtonClass; // 0x3b0
	TArray<UMessageBoxHotkeyHandler*> m_HotkeyHandlers; // 0x438
	TArray<FGamepadHotkeyHelp> m_MessageboxHotkeys; // 0x448
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x38
	char bLoopIndefinitely : 1; // 0x3c
};

struct UMovieSceneSection : UMovieSceneSignedObject {
	FMovieSceneSectionEvalOptions EvalOptions; // 0xb0
	float StartTime; // 0xb4
	float EndTime; // 0xb8
	int32_t RowIndex; // 0xbc
	int32_t OverlapPriority; // 0xc0
	char bIsActive : 1; // 0xc4
	char bIsLocked : 1; // 0xc4
	char bIsInfinite : 1; // 0xc4
};

struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38
	char FlushStreamingOnGC : 1; // 0x3c
	char AllowParallelGC : 1; // 0x3c
	char CreateGCClusters : 1; // 0x3c
	char MergeGCClusters : 1; // 0x3c
	char ActorClusteringEnabled : 1; // 0x3c
	char BlueprintClusteringEnabled : 1; // 0x3c
	int32_t MinGCClusterSize; // 0x40
	int32_t NumRetriesBeforeForcingGC; // 0x44
	int32_t MaxObjectsNotConsideredByGC; // 0x48
	int32_t SizeOfPermanentObjectPool; // 0x4c
	int32_t MaxObjectsInGame; // 0x50
	int32_t MaxObjectsInEditor; // 0x54
};

struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionFunctionInput : UMaterialExpression {
	FExpressionInput Preview; // 0x60
	FString InputName; // 0x98
	FString Description; // 0xa8
	FGuid ID; // 0xb8
	EFunctionInputType InputType; // 0xc8
	FVector4 PreviewValue; // 0xd0
	char bUsePreviewValueAsDefault : 1; // 0xe0
	int32_t SortPriority; // 0xe4
	char bCompilingFunctionPreview : 1; // 0xe8
};

struct USafeZoneSettingBase : UWindowRoot {
	float PressSpeed; // 0x398
	float RepeatSpeed; // 0x39c
};

struct USetUserLoginStatusCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate AlreadyOnline; // 0x38
	FScriptMulticastDelegate onFailure; // 0x48
};

struct UOnlineHotfixManager : UObject {
	FString OSSName; // 0x380
	FString HotfixManagerClassName; // 0x390
	FString DebugPrefix; // 0x3a0
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb0
	FAIDataProviderFloatValue AngleStep; // 0xe0
	FAIDataProviderFloatValue range; // 0x110
	UEnvQueryContext* CenterActor; // 0x140
	char bIncludeContextLocation : 1; // 0x148
};

struct UDecalComponent : USceneComponent {
	UMaterialInterface* DecalMaterial; // 0x300
	int32_t SortOrder; // 0x308
	float FadeScreenSize; // 0x30c
	float FadeStartDelay; // 0x310
	float FadeDuration; // 0x314
	char bDestroyOwnerAfterFade : 1; // 0x318
	FVector DecalSize; // 0x31c
};

struct UConanProjectileRegistry : UObject {
	TSet<UConanProjectileMovementComponent*> RegisteredComponents; // 0x28
};

struct ULootLogBase : UUserWidget {
	UUserWidget* LogEntryClassTemplate; // 0x240
	UVerticalBox* LogVerticalBox; // 0x248
	TArray<UWidget*> LogEntryPool; // 0x250
};

struct UW_FIFOWindow_C : UFIFOWindow {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UVerticalBox* MessageListView; // 0x3a0
	UVerticalBox* MessageListViewBottom; // 0x3a8
	TArray<FWidgetFIFOData> PendingMessages; // 0x3b0
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x60
};

struct UModDetailsRequest : UObject {
	FScriptMulticastDelegate OnModDetailsRecieved; // 0x28
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x6c0
	float FrustumAngle; // 0x6c4
	float FrustumAspectRatio; // 0x6c8
	float FrustumStartDist; // 0x6cc
	float FrustumEndDist; // 0x6d0
	UTexture* Texture; // 0x6d8
};

struct UConanAIPerceptionComponent : UAIPerceptionComponent {
	float HearingUpdateInterval; // 0x1d0
	float HearingRadius; // 0x1d4
};

struct UMaterialExpressionPrecomputedAOMask : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0xb8
};

struct AResourceActorBase : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct ALightmassImportanceVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UParticleModuleEventBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UCharacterCustomizationComponent : UActorComponent {
	FCharacterLayout Layout; // 0xf8
	int32_t LayoutHash; // 0x230
	FCharacterResolvedMeshes Meshes; // 0x238
	FCharacterMaterialParams MaterialParams; // 0x288
	USkeletalMeshComponent* Master; // 0x3a0
	bool UseBoundsFromMaster; // 0x3a8
	TArray<USkeletalMeshComponent*> SkeletalMeshes; // 0x3b0
	bool Enabled; // 0x3c0
};

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x60
	FExpressionInput LayerNotUsed; // 0x98
	FName ParameterName; // 0xd0
	char PreviewUsed : 1; // 0xd8
	FGuid ExpressionGUID; // 0xdc
};

struct UPlayFabEconomyAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x5a0
	UPlayFabJsonObject* RequestJsonObj; // 0x5a8
	UPlayFabJsonObject* ResponseJsonObj; // 0x5b0
};

struct UInstancedBuildingComponent : UInstancedStaticMeshComponent {
	UDestructibleMesh* DestructibleMesh; // 0x8d8
	int32_t MaxHealth; // 0x8e0
	bool IsPurgeTarget; // 0x8e4
	ABuildingBase* m_SourceClass; // 0x8e8
	FBuildingReplicationData m_ReplicationData; // 0x970
	bool m_HasReceivedSourceClass; // 0xb60
	bool m_HasAttachedToParent; // 0xb61
	FScriptMulticastDelegate OnBuildingSectionDestroyed; // 0xb68
};

struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMaterialExpressionGraniteTexture : UMaterialExpressionGraniteTextureBase {
	FExpressionInput Coordinates; // 0x70
	FExpressionInput TextureObject; // 0xa8
	FExpressionInput MipValue; // 0xe0
	FExpressionInput CoordinatesDX; // 0x118
	FExpressionInput CoordinatesDY; // 0x150
	ETextureMipValueMode MipValueMode; // 0x188
	EGraniteAnisotropyRatio AnisotropyRatio; // 0x189
	EGraniteSampleQuality SampleQuality; // 0x18a
};

struct UMaterialExpressionCameraVectorWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UFloatBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UHotkeyIcon : URootWidget {
	FKey GamepadKey; // 0x318
	FText BindingLabel; // 0x330
	FText BindingLabelFormat; // 0x348
	FName InputActionName; // 0x360
	bool ShowOnlyGamepadIcon; // 0x368
	float IconSize; // 0x36c
	FSlateFontInfo Font; // 0x370
};

struct UPaperdollGUIBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct URadialMenuEntry : UObject {
	FText Label; // 0x28
	FText subtitle; // 0x40
	UTexture2D* IconTexture; // 0x58
	URootWidget* IconWidget; // 0x60
	int32_t UserCategory; // 0x68
	int32_t UserValue; // 0x6c
	UDataTable* SubmenuTable; // 0x70
	UObject* UserObject; // 0x78
	FName KeyShortcutName; // 0x80
	FName UserTag; // 0x88
	FScriptMulticastDelegate SignalClicked; // 0x90
	TArray<URadialMenuEntry*> m_ChildEntries; // 0xa8
	URadialMenuEntry* m_Parent; // 0xb8
};

struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct AController : AActor {
	APawn* Pawn; // 0x3d8
	ACharacter* Character; // 0x3e8
	APlayerState* PlayerState; // 0x3f0
	USceneComponent* TransformComponent; // 0x3f8
	FRotator ControlRotation; // 0x400
	char bAttachToPawn : 1; // 0x40c
	char bIsPlayerController : 1; // 0x40c
	FName StateName; // 0x420
	FScriptMulticastDelegate OnInstigatedAnyDamage; // 0x428
};

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xf8
	float TileRemovalRadius; // 0xfc
	FName NavDataConfigName; // 0x100
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x1b8
};

struct UMaterialExpressionPerInstanceRandom : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
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

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x33780
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UW_Keybindings_Command_C : UKeyBindingsCommandEntryBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c0
	UW_KeyBindings_Button_C* ActionMapping; // 0x3c8
	UTextBlock* ActionName; // 0x3d0
	UW_ButtonNormal_C* B_Reset; // 0x3d8
	UW_FCEditableTextBlock_C* TextField; // 0x3e0
	FText Name; // 0x3e8
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct ULoadInventoryCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	float ConstA; // 0xd0
	float ConstB; // 0xd4
};

struct UStreamInstallBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x30
};

struct UAutomationTestSettings : UObject {
	FStringAssetReference AutomationTestmap; // 0x28
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x38
	FBuildPromotionTestSettings BuildPromotionTest; // 0x48
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x238
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x268
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x278
	TArray<FString> EngineTestModules; // 0x2a8
	TArray<FString> EditorTestModules; // 0x2b8
	TArray<FString> TestLevelFolders; // 0x2c8
	TArray<FOpenTestAsset> TestAssetsToOpen; // 0x2d8
	TArray<FExternalToolDefinition> ExternalTools; // 0x2e8
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x2f8
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x308
	FIntPoint DefaultScreenshotResolution; // 0x318
};

struct UConanAnimMetaData : UAnimMetaData {
	EMontageType MontageType; // 0x28
	bool BlockOtherSimilarMontages; // 0x29
	bool BlockMountMovement; // 0x2a
};

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
};

struct UNamedSlot : UContentWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x3d0
};

struct UGamepadHelpEntryBase : URootWidget {
	UActionTutorial* ActionTutorialClass; // 0x318
	FSlateFontInfo TextFont; // 0x320
	float IconSize; // 0x388
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput realTime; // 0x60
	FExpressionInput Lightmass; // 0x98
};

struct ATestBeaconHost : AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x3d0
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x3e0
	TArray<AOnlineBeaconClient*> ClientActors; // 0x3e8
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct APurgeVolume : AActor {
	UDataTable* PurgeEventConfigTable; // 0x3e0
	TArray<AConanCharacter*> PurgeActors; // 0x3e8
	AConanCharacter* PurgeBoss; // 0x3f8
	TArray<UNavCollision*> PurgeCollision; // 0x400
	UNavigationQueryFilter* NavigationQueryType; // 0x410
	UNavigationQueryFilter* SpawnQueryType; // 0x418
	TArray<ABuildingBase*> CandidateList; // 0x570
	ABuildingBase* SelectedBase; // 0x580
};

struct UW_BlockedEntry_C : UBlockedPlayerEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
	UHorizontalBox* ActionsBox; // 0x3d8
	UW_ButtonCustom_C* B_UnblockPlayer; // 0x3e0
	UBorder* Container; // 0x3e8
};

struct UWeaponCollisionAnimNotifyState : UAnimNotifyState {
	bool bDefaultTriggerOnDedicatedServer; // 0x28
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UGameplayTasksComponent : UActorComponent {
	TArray<UGameplayTask*> SimulatedTasks; // 0x100
	TArray<UGameplayTask*> TaskPriorityQueue; // 0x110
	TArray<UGameplayTask*> TickingTasks; // 0x130
	FScriptMulticastDelegate OnClaimedResourcesChange; // 0x148
};

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xa0
};

struct UBlockedPlayerGame : UWindowRoot {
	UFriendsGame* FriendsWindowBase; // 0x398
	UBlockedPlayerEntry* EntryViewClass; // 0x3a0
	int32_t NumBlockedPlayers; // 0x3a8
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

struct UListMenu : UContextMenuBase {
	FScriptMulticastDelegate SignalLeaveGuild; // 0x478
	FSlateColor GuildMasterHovered; // 0x488
	FSlateColor GuildMasterColor; // 0x4b0
	FSlateColor GuildMasterPressedHovered; // 0x4d8
	FSlateColor GuildMasterPressed; // 0x500
};

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct ULandscapeGrassType : UObject {
	TArray<FGrassVariety> GrassVarieties; // 0x28
	UStaticMesh* GrassMesh; // 0x38
	float GrassDensity; // 0x40
	float PlacementJitter; // 0x44
	int32_t StartCullDistance; // 0x48
	int32_t EndCullDistance; // 0x4c
	bool RandomRotation; // 0x50
	bool AlignToSurface; // 0x51
};

struct AGameplayScheduler : AActor {
	UGameplayTickGroupScheduler* PrePhysics; // 0x3d0
	UGameplayTickGroupScheduler* DuringPhysics; // 0x3d8
	UGameplayTickGroupScheduler* PostPhysics; // 0x3e0
	UGameplayTickGroupScheduler* PostUpdateWork; // 0x3e8
	UGameplayTickGroupScheduler* LastDemotable; // 0x3f0
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x408
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x60
	float PreviewWeight; // 0x68
	FGuid ExpressionGUID; // 0x6c
};

struct UPurgeTargetComponent : UActorComponent {
	UNavigationQueryFilter* WallPathingFilterClass; // 0xf8
	UNavigationQueryFilter* DefaultPathingFilterClass; // 0x100
	int32_t PurgeCallRange; // 0x108
	float PathProbeRange; // 0x10c
	float NavGenerationRange; // 0x110
	TArray<int32_t> PurgeCommunity; // 0x118
	int32_t PurgeSlots; // 0x128
	float EventTime; // 0x12c
	TArray<UNavCollision*> PurgeCollision; // 0x180
	TArray<UTargetDistributionComponent*> CurrentAttackers; // 0x190
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x3d0
	char bEnabled : 1; // 0x3d8
};

struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x1b8
	int32_t AdditionalSlotIndex; // 0x1bc
	FText SlotDisplayName; // 0x1c0
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UGraniteSettings : UObject {
	TArray<FGraniteCpuCache> CPUCaches; // 0x30
	TArray<FGraniteGpuCache> GPUCaches; // 0x40
	int32_t MaximumTileDataUpload; // 0x50
	int32_t MaximumResolves; // 0x54
	int32_t GpuMemorySizeInMegabyte; // 0x58
	int32_t CpuMemorySizeInMegabyte; // 0x5c
	char bAdvanced : 1; // 0x60
	float ReservedRatio; // 0x64
	TArray<FDirectoryPath> TileSetDirectories; // 0x68
	char bGraniteStreamLightMaps : 1; // 0x78
	char bGraniteNoTrilinear : 1; // 0x78
	char bGraniteSourceControlEnabled : 1; // 0x78
	bool bCachesNeedRestart; // 0x7c
};

struct ULoadCharacterCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
	UUniqueID* UID; // 0x58
	bool IsNPC; // 0x88
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x300
};

struct USiegeWeaponInventoryView : URootWidget {
	UItemInventory* CounterWeightInventory; // 0x318
	UItemInventory* ProjectileInventory; // 0x320
};

struct AConanAIController : AConanBaseAIController {
	FPointOfInterestCollection PointOfInterestCollection; // 0x568
};

struct UFIFOMessageView : URootWidget {
	UTexture2D* TextureFifoBlood2; // 0x318
	UTexture2D* TextureFifoBlood3; // 0x338
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char bIsLayerThumbnail : 1; // 0x1e0
	char bDisableTessellation : 1; // 0x1e0
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UInterpGroupInstCamera : UInterpGroupInst {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x3f0
	UNetConnection* BeaconConnection; // 0x3f8
	EBeaconConnectionState ConnectionState; // 0x400
};

struct UConanBTDecorator_Base : UBTDecorator {
	float UpdateRate; // 0x68
};

struct UFCBloodCommunityButton : UFCButton {
	UTexture2D* TextureBlood1; // 0xc20
	UTexture2D* TextureBlood2; // 0xc40
	UTexture2D* TextureBlood3; // 0xc60
	UTexture2D* TextureBlood4; // 0xc80
};

struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x570
	char bDrawPolyEdges : 1; // 0x570
	char bDrawFilledPolys : 1; // 0x570
	char bDrawNavMeshEdges : 1; // 0x570
	char bDrawTileBounds : 1; // 0x570
	char bDrawPathCollidingGeometry : 1; // 0x570
	char bDrawTileLabels : 1; // 0x570
	char bDrawPolygonLabels : 1; // 0x570
	char bDrawDefaultPolygonCost : 1; // 0x570
	char bDrawLabelsOnPathNodes : 1; // 0x570
	char bDrawNavLinks : 1; // 0x570
	char bDrawFailedNavLinks : 1; // 0x570
	char bDrawClusters : 1; // 0x570
	char bDrawOctree : 1; // 0x570
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x570
	char bDrawNavMesh : 1; // 0x570
	float DrawOffset; // 0x574
	char bFixedTilePoolSize : 1; // 0x578
	int32_t TilePoolSize; // 0x57c
	float TileSizeUU; // 0x580
	float CellSize; // 0x584
	float CellHeight; // 0x588
	float AgentRadius; // 0x58c
	float AgentHeight; // 0x590
	float AgentMaxHeight; // 0x594
	float AgentMaxSlope; // 0x598
	float AgentMaxStepHeight; // 0x59c
	float MinRegionArea; // 0x5a0
	float MergeRegionSize; // 0x5a4
	float MaxSimplificationError; // 0x5a8
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x5ac
	int32_t TileNumberHardLimit; // 0x5b0
	int32_t PolyRefTileBits; // 0x5b4
	int32_t PolyRefNavPolyBits; // 0x5b8
	int32_t PolyRefSaltBits; // 0x5bc
	float DefaultDrawDistance; // 0x5c0
	float DefaultMaxSearchNodes; // 0x5c4
	float DefaultMaxHierarchicalSearchNodes; // 0x5c8
	ERecastPartitioning RegionPartitioning; // 0x5cc
	ERecastPartitioning LayerPartitioning; // 0x5cd
	int32_t RegionChunkSplits; // 0x5d0
	int32_t LayerChunkSplits; // 0x5d4
	char bSortNavigationAreasByCost : 1; // 0x5d8
	char bPerformVoxelFiltering : 1; // 0x5d8
	char bMarkLowHeightAreas : 1; // 0x5d8
	char bDoFullyAsyncNavDataGathering : 1; // 0x5d8
	char bUseBetterOffsetsFromCorners : 1; // 0x5d8
	char bStoreEmptyTileLayers : 1; // 0x5d8
	char bUseVirtualFilters : 1; // 0x5d8
	char bUseVoxelCache : 1; // 0x5d8
	float TileSetUpdateInterval; // 0x5dc
	float HeuristicScale; // 0x5e0
	float VerticalDeviationFromGroundCompensation; // 0x5e4
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
};

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
};

struct ASceneCaptureSand : ASceneCapture {
	USceneCaptureComponentSand* CaptureComponentSand; // 0x3d8
	UBoxComponent* DrawBox; // 0x3e0
	UImprintReceiverComponent* ImprintReceiver; // 0x3e8
};

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UVerticalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	FSlateChildSize Size; // 0x48
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UW_ShortcutBar_C : UShortcutBarBase {
	UImage* Image_10; // 0x420
	UW_ShortcutIcon_C* Slot0; // 0x428
	UW_ShortcutIcon_C* Slot1; // 0x430
	UW_ShortcutIcon_C* Slot2; // 0x438
	UW_ShortcutIcon_C* Slot3; // 0x440
	UW_ShortcutIcon_C* Slot4; // 0x448
	UW_ShortcutIcon_C* Slot5; // 0x450
	UW_ShortcutIcon_C* Slot6; // 0x458
	UW_ShortcutIcon_C* Slot7; // 0x460
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	float ConstA; // 0xd0
	float ConstB; // 0xd4
};

struct AScreenshotFunctionalTest : AFunctionalTest {
	UCameraComponent* ScreenshotCamera; // 0x500
	FAutomationScreenshotOptions ScreenshotOptions; // 0x508
};

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x78
	float SequenceLength; // 0x88
	float RateScale; // 0x8c
	FRawCurveTracks RawCurveData; // 0x90
};

struct UShortcutRefItem : UGameItem {
	UGameItem* m_TargetItem; // 0x260
};

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x6c0
};

struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0xb8
};

struct UPlayFabAdminAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x780
	UPlayFabJsonObject* RequestJsonObj; // 0x788
	UPlayFabJsonObject* ResponseJsonObj; // 0x790
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	float ConstA; // 0xd0
	float ConstB; // 0xd4
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
	UPaperTileSet* SelectedTileSet; // 0x48
	UMaterialInterface* Material; // 0x68
	TArray<UPaperTileLayer*> TileLayers; // 0x70
	float CollisionThickness; // 0x80
	ESpriteCollisionMode SpriteCollisionDomain; // 0x84
	ETileMapProjectionMode ProjectionMode; // 0x85
	int32_t HexSideLength; // 0x88
	UBodySetup* BodySetup; // 0x90
	int32_t LayerNameIndex; // 0x98
};

struct UW_ServerSettingsPresets_C : URootWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UW_ButtonNormal_C* CB_Barbaric; // 0x320
	UW_ButtonNormal_C* CB_Civilized; // 0x328
	UW_ButtonNormal_C* CB_Decadent; // 0x330
	FScriptMulticastDelegate SignalSetDifficultyCivilized; // 0x338
	bool CharacterCreation; // 0x348
	FVector2D ImageSize; // 0x34c
	UTexture2D* CheckedTexture; // 0x358
	UTexture2D* HoverTexture; // 0x360
	UTexture2D* UncheckedTexture; // 0x368
	FSlateColor FontColorUnchecked; // 0x370
	FSlateColor FontColorChecked; // 0x398
	FFCButtonStyle NudityButtonStyleCharacterCreation; // 0x3c0
	UFCButton* PreviouslyChecked; // 0xa80
	FScriptMulticastDelegate SignalSetDifficultyDecadent; // 0xa88
	FScriptMulticastDelegate SignalSetDifficultyBarbaric; // 0xa98
	FScriptMulticastDelegate ScrollIntoView; // 0xaa8
};

struct UNPCProgressionSystem : UConanCharacterComponent {
	int32_t m_ExperiencePoints; // 0x100
	int32_t m_RidingExperiencePerTick; // 0x104
	int32_t m_MinimumDistanceRidden; // 0x108
	FName m_XPCurveID; // 0x110
	FName m_GrowthID; // 0x118
	FName m_PerkType; // 0x120
	TSet<FName> m_OwnedPerks; // 0x128
	FVector m_lastRegisteredPosition; // 0x178
	FNPCGrowthContainer m_ProgressionInfo; // 0x188
};

struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x98
};

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UAnimClassData : UObject {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x30
	USkeleton* TargetSkeleton; // 0x40
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x48
	int32_t RootAnimNodeIndex; // 0x58
	TArray<int32_t> OrderedSavedPoseIndices; // 0x60
	UStructProperty* RootAnimNodeProperty; // 0x70
	TArray<UStructProperty*> AnimNodeProperties; // 0x78
	TArray<FName> SyncGroupNames; // 0x88
};

struct UAudioComponent : USceneComponent {
	USoundBase* Sound; // 0x300
	TArray<FAudioComponentParam> InstanceParameters; // 0x308
	USoundClass* SoundClassOverride; // 0x318
	char bAutoDestroy : 1; // 0x320
	char bStopWhenOwnerDestroyed : 1; // 0x320
	char bShouldRemainActiveIfDropped : 1; // 0x320
	char bAllowSpatialization : 1; // 0x320
	char bOverrideAttenuation : 1; // 0x320
	char bOverrideSubtitlePriority : 1; // 0x324
	char bIsUISound : 1; // 0x328
	char bEnableLowPassFilter : 1; // 0x328
	char bOverridePriority : 1; // 0x328
	char bSuppressSubtitles : 1; // 0x328
	float PitchModulationMin; // 0x330
	float PitchModulationMax; // 0x334
	float VolumeModulationMin; // 0x338
	float VolumeModulationMax; // 0x33c
	float VolumeMultiplier; // 0x340
	float Priority; // 0x344
	float SubtitlePriority; // 0x348
	float VolumeWeightedPriorityScale; // 0x34c
	float PitchMultiplier; // 0x350
	float HighFrequencyGainMultiplier; // 0x354
	float LowPassFilterFrequency; // 0x358
	USoundAttenuation* AttenuationSettings; // 0x360
	FSoundAttenuationSettings AttenuationOverrides; // 0x368
	USoundConcurrency* ConcurrencySettings; // 0x480
	FScriptMulticastDelegate OnAudioFinished; // 0x490
	FScriptMulticastDelegate OnAudioPlaybackPercent; // 0x510
	DelegateProperty OnQueueSubtitles; // 0x590
};

struct UPointLightComponent : ULightComponent {
	float Radius; // 0x430
	float AttenuationRadius; // 0x434
	char bUseInverseSquaredFalloff : 1; // 0x438
	float LightFalloffExponent; // 0x43c
	float SourceRadius; // 0x440
	float SourceLength; // 0x444
	FLightmassPointLightSettings LightmassSettings; // 0x448
};

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x60
};

struct ALevelBounds : AActor {
	bool bAutoUpdateBounds; // 0x3d0
};

struct ATowerOfSiptah_SurgeSpawnHolder : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x7c8
	int32_t MapHeight; // 0x7cc
	int32_t TileWidth; // 0x7d0
	int32_t TileHeight; // 0x7d4
	UPaperTileSet* DefaultLayerTileSet; // 0x7d8
	UMaterialInterface* Material; // 0x7e0
	TArray<UPaperTileLayer*> TileLayers; // 0x7e8
	FLinearColor TileMapColor; // 0x7f8
	int32_t UseSingleLayerIndex; // 0x808
	bool bUseSingleLayer; // 0x80c
	UPaperTileMap* TileMap; // 0x810
};

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x358
	DelegateProperty PostEvaluateAnimEvent; // 0x360
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct AHUD : AActor {
	APlayerController* PlayerOwner; // 0x3d0
	char bLostFocusPaused : 1; // 0x3d8
	char bShowHUD : 1; // 0x3d8
	char bShowDebugInfo : 1; // 0x3d8
	char bShowHitBoxDebugInfo : 1; // 0x3d8
	char bShowOverlays : 1; // 0x3d8
	char bEnableDebugTextShadow : 1; // 0x3d8
	TArray<AActor*> PostRenderedActors; // 0x3e0
	TArray<FName> DebugDisplay; // 0x3f8
	TArray<FName> ToggledDebugCategories; // 0x408
	UCanvas* Canvas; // 0x418
	UCanvas* DebugCanvas; // 0x420
	TArray<FDebugTextInfo> DebugTextList; // 0x428
	AActor* ShowDebugTargetDesiredClass; // 0x438
	AActor* ShowDebugTargetActor; // 0x440
};

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x3d0
	char bEnabled : 1; // 0x3d8
};

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x38
	FModulatorContinuousParams VolumeModulationParams; // 0x58
};

struct UKeyNavIndicator : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UPatchNotesView : URootWidget {
	FString PatchNotesXMLURL; // 0x318
	FString PatchNotesPageURL; // 0x328
	UPatchNotesEntryView* NoteViewClass; // 0x338
	UPatchNotesEntryView* B_LinkTwitchButton; // 0x340
	UVerticalBox* m_NotesContainerView; // 0x348
	UFCButton* m_MoreButton; // 0x350
	UGUIModule* m_SettingsGUIModule; // 0x368
};

struct UFollowersEntryBase : UCharacterListEntryBase {
	FScriptMulticastDelegate OnTrackToggled; // 0x390
	FText TrackToolTipText; // 0x3a8
	UTexture2D* m_OnlineStatusIconOnline; // 0x3c0
	UTexture2D* m_OnlineStatusIconOffline; // 0x3c8
	FSlateColor m_OfflineColor; // 0x3d0
	UTextBlock* m_FollowerName; // 0x3f8
	UTextBlock* m_FollowerClass; // 0x400
	UTextBlock* m_FollowerStatus; // 0x408
	UTextBlock* m_FollowerLevel; // 0x410
	UFCButton* m_TrackFollower; // 0x418
	UImage* m_RelevantStatusIcon; // 0x420
};

struct AStartup_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8
};

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x430
	float BaseLookUpRate; // 0x434
	UPawnMovementComponent* MovementComponent; // 0x438
	USphereComponent* CollisionComponent; // 0x440
	UStaticMeshComponent* MeshComponent; // 0x448
	char bAddDefaultMovementBindings : 1; // 0x450
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x3d0
	AActor* ConstraintActor1; // 0x3d8
	AActor* ConstraintActor2; // 0x3e0
	char bDisableCollision : 1; // 0x3e8
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct ULoreInteractorBase : UActorComponent {
	TArray<int32_t> PickedupLoreItems; // 0xf8
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x130
	bool PadRight; // 0x131
	bool PadTop; // 0x132
	bool PadBottom; // 0x133
};

struct UParty : UObject {
	int32_t DefaultMaxPartySize; // 0x88
	bool bLeavingPersistentParty; // 0x8c
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

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x60
	FLinearColor DefaultValue; // 0x70
};

struct UGetGuildMembersListCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UW_RadialMenu_C : URadialMenu {
	UImage* Image_1; // 0x4f0
	UImage* Image_2; // 0x4f8
};

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x6d8
};

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0xd0
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x2d8
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x2e0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x330
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> events; // 0x30
};

struct UAdminPanelNPCCheats : URootWidget {
	UDebugEntryNPC* DebugEntryClass; // 0x318
	UScrollBox* m_ScrollBox; // 0x320
	USizeBox* m_VirtualizationBox; // 0x328
	UCanvasPanel* m_VirtualizationCanvas; // 0x330
	UNavigatableVerticalBox* m_WidgetContainer; // 0x338
	TArray<UDebugEntryNPC*> m_WidgetList; // 0x388
};

struct UWritableNoteBase : UWindowRoot {
	FScriptMulticastDelegate SignalPlacableNoteTextChange; // 0x398
};

struct UCustomMeshComponent : UMeshComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x6c0
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x60
	int32_t FontTexturePage; // 0x68
};

struct ADebugCameraHUD : AHUD {
	APlayerController* PlayerOwner; // 0x3d0
	char bLostFocusPaused : 1; // 0x3d8
	char bShowHUD : 1; // 0x3d8
	char bShowDebugInfo : 1; // 0x3d8
	char bShowHitBoxDebugInfo : 1; // 0x3d8
	char bShowOverlays : 1; // 0x3d8
	char bEnableDebugTextShadow : 1; // 0x3d8
	TArray<AActor*> PostRenderedActors; // 0x3e0
	TArray<FName> DebugDisplay; // 0x3f8
	TArray<FName> ToggledDebugCategories; // 0x408
	UCanvas* Canvas; // 0x418
	UCanvas* DebugCanvas; // 0x420
	TArray<FDebugTextInfo> DebugTextList; // 0x428
	AActor* ShowDebugTargetDesiredClass; // 0x438
	AActor* ShowDebugTargetActor; // 0x440
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xf8
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x100
};

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct UVoiceChannel : UChannel {
	UNetConnection* Connection; // 0x28
};

struct UItemInventoryReplicateToAll : UItemInventory {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct UEdGraphNode : UObject {
	TArray<UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38
	int32_t NodePosX; // 0x48
	int32_t NodePosY; // 0x4c
	int32_t NodeWidth; // 0x50
	int32_t NodeHeight; // 0x54
	char bHasCompilerMessage : 1; // 0x58
	FString NodeComment; // 0x60
	bool bCommentBubblePinned; // 0x70
	bool bCommentBubbleVisible; // 0x71
	int32_t errorType; // 0x74
	FString ErrorMsg; // 0x78
	FGuid NodeGuid; // 0x88
	ENodeAdvancedPins AdvancedPinDisplay; // 0x98
	ENodeEnabledState EnabledState; // 0x99
	bool bUserSetEnabledState; // 0x9a
	bool bIsNodeEnabled; // 0x9b
};

struct UWeightedTableArray : UObject {
	FName Key; // 0x28
	float TotalWeight; // 0x30
	TArray<FWeightedTableEntry> Entries; // 0x38
};

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x6c0
	float ArrowSize; // 0x6c4
	bool bIsScreenSizeScaled; // 0x6c8
	float ScreenSize; // 0x6cc
	char bTreatAsASprite : 1; // 0x6d0
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x30
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x220
	FConstraintProfileProperties DefaultProfile; // 0x230
};

struct UMaterialExpressionGraniteBake : UMaterialExpressionGraniteBakeBase {
	FExpressionInput Originals[0x4]; // 0x1b0
	FExpressionInput SizeInput; // 0x290
	char bUseBaked : 1; // 0x2c8
	char bIsBakeDirty : 1; // 0x2c8
	uint64_t ShaderGraphHash[0x4]; // 0x2d0
	uint64_t UniformExpressionHash[0x4]; // 0x2f0
	uint64_t BakedShaderGraphHash[0x4]; // 0x310
	uint64_t BakedUniformExpressionHash[0x4]; // 0x330
	char bAlwaysUseMaxSize : 1; // 0x350
	FIntPoint Size; // 0x354
	EGraniteBakerTilingMethod Tiling; // 0x35c
	FGraniteBakerLayerLayout LayerPreset; // 0x360
	int32_t IndexList[0x4]; // 0x3d8
	TArray<UMaterialExpressionMaterialFunctionCall*> BakeCallStack; // 0x3e8
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xc0
};

struct AHoudiniAssetActor : AActor {
	UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3d0
};

struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UW_FCSlider_C : UFCSlider {
	float Value; // 0x318
	FSliderStyle WidgetStyle; // 0x320
	EOrientation Orientation; // 0x570
	FLinearColor SliderBarColor; // 0x574
	FLinearColor SliderHandleColor; // 0x584
	bool IndentHandle; // 0x594
	bool Locked; // 0x595
	float StepSize; // 0x598
	FScriptMulticastDelegate OnValueChanged; // 0x5a0
	USoundBase* HoveredSound; // 0x5b0
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UExilesJourneyComponent : UActorComponent {
	USoundBase* NewEventSound; // 0xf8
	FScriptMulticastDelegate SignalNewJourneyEvent; // 0x118
	FScriptMulticastDelegate SignalChapterComplete; // 0x128
	TArray<FExilesJourneyEvent> m_JourneyEvents; // 0x138
};

struct UNetDriver : UObject {
	FString NetConnectionClassName; // 0x30
	int32_t MaxDownloadSize; // 0x40
	char bClampListenServerTickRate : 1; // 0x44
	int32_t NetServerMaxTickRate; // 0x48
	int32_t MaxInternetClientRate; // 0x4c
	int32_t MaxClientRate; // 0x50
	float ServerTravelPause; // 0x54
	float SpawnPrioritySeconds; // 0x58
	float RelevantTimeout; // 0x5c
	float ExtendedRelevantTimeout; // 0x60
	float KeepAliveTime; // 0x64
	float InitialConnectTimeout; // 0x68
	float ConnectionTimeout; // 0x6c
	bool bNoTimeouts; // 0x70
	UNetConnection* ServerConnection; // 0x78
	TArray<UNetConnection*> ClientConnections; // 0x80
	UWorld* World; // 0xa8
	UObject* NetConnectionClass; // 0xd0
	UProperty* RoleProperty; // 0xd8
	UProperty* RemoteRoleProperty; // 0xe0
	FName NetDriverName; // 0xe8
	float Time; // 0xf8
};

struct UTwitchPatchNotesEntryView : UPatchNotesEntryView {
	FLinearColor TextColorDate; // 0x318
	FLinearColor TextColorTitle; // 0x328
	FLinearColor TextColorNote; // 0x338
	UWidgetAnimation* AnimationSelected; // 0x348
	UWidgetAnimation* AnimationDeselected; // 0x350
};

struct UNativeWidgetHost : UWidget {
	bool bIsVariable; // 0x28
	bool bCreatedByConstructionScript; // 0x29
	UPanelSlot* Slot; // 0x30
	bool bIsEnabled; // 0x38
	DelegateProperty bIsEnabledDelegate; // 0x40
	FText ToolTipText; // 0x50
	DelegateProperty ToolTipTextDelegate; // 0x68
	UWidget* TooltipWidget; // 0x78
	DelegateProperty ToolTipWidgetDelegate; // 0x80
	ESlateVisibility Visiblity; // 0x90
	ESlateVisibility Visibility; // 0x91
	DelegateProperty VisibilityDelegate; // 0x98
	char bOverride_Cursor : 1; // 0xa8
	EMouseCursor Cursor; // 0xac
	bool bIsVolatile; // 0xad
	FWidgetTransform RenderTransform; // 0xb0
	FVector2D RenderTransformPivot; // 0xcc
	UWidgetNavigation* Navigation; // 0xd8
	TArray<UPropertyBinding*> NativeBindings; // 0x108
};

struct UW_JourneyStepFIFOMessageView2_C : UFIFOMessageView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* FadeInOut; // 0x360
	UTextBlock* Header; // 0x368
	UImage* Image_1; // 0x370
	UImage* Image_8; // 0x378
	UImage* Image_9; // 0x380
	UImage* Image_10; // 0x388
	UImage* Image_11; // 0x390
	UImage* Image_12; // 0x398
	UImage* Image_13; // 0x3a0
	UMultiLineEditableTextBox* Text; // 0x3a8
};

struct UW_SettingsGamepadPreset_C : USettingsGamepadPresetBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
	UW_TabButton_C* B_Default; // 0x3d8
	UW_TabButton_C* B_PresetA; // 0x3e0
	UW_TabButton_C* B_PresetB; // 0x3e8
	UTextBlock* One_Gamepad_DPad_Down; // 0x3f0
	UTextBlock* One_Gamepad_DPad_Left; // 0x3f8
	UTextBlock* One_Gamepad_DPad_Right; // 0x400
	UTextBlock* One_Gamepad_DPad_Up; // 0x408
	UTextBlock* One_Gamepad_FaceButton_Bottom; // 0x410
	UTextBlock* One_Gamepad_FaceButton_Left; // 0x418
	UTextBlock* One_Gamepad_FaceButton_Right; // 0x420
	UTextBlock* One_Gamepad_FaceButton_Top; // 0x428
	UTextBlock* One_Gamepad_LeftShoulder; // 0x430
	UTextBlock* One_Gamepad_LeftThumbstick; // 0x438
	UTextBlock* One_Gamepad_LeftTrigger; // 0x440
	UTextBlock* One_Gamepad_RightShoulder; // 0x448
	UTextBlock* One_Gamepad_RightThumbstick; // 0x450
	UTextBlock* One_Gamepad_RightTrigger; // 0x458
	UTextBlock* One_Gamepad_Special_Left; // 0x460
	UTextBlock* One_Gamepad_Special_Right; // 0x468
	UTextBlock* PS_Gamepad_DPad_Down; // 0x470
	UTextBlock* PS_Gamepad_DPad_Left; // 0x478
	UTextBlock* PS_Gamepad_DPad_Right; // 0x480
	UTextBlock* PS_Gamepad_DPad_Up; // 0x488
	UTextBlock* PS_Gamepad_FaceButton_Bottom; // 0x490
	UTextBlock* PS_Gamepad_FaceButton_Left; // 0x498
	UTextBlock* PS_Gamepad_FaceButton_Right; // 0x4a0
	UTextBlock* PS_Gamepad_FaceButton_Top; // 0x4a8
	UTextBlock* PS_Gamepad_LeftShoulder; // 0x4b0
	UTextBlock* PS_Gamepad_LeftThumbstick; // 0x4b8
	UTextBlock* PS_Gamepad_LeftTrigger; // 0x4c0
	UTextBlock* PS_Gamepad_RightShoulder; // 0x4c8
	UTextBlock* PS_Gamepad_RightThumbstick; // 0x4d0
	UTextBlock* PS_Gamepad_RightTrigger; // 0x4d8
	UTextBlock* PS_Gamepad_Special_Left; // 0x4e0
	UTextBlock* PS_Gamepad_Special_Right; // 0x4e8
	UOverlay* PS_Overlay; // 0x4f0
	UOverlay* Xbox_Overlay; // 0x4f8
};

struct UW_CC_KeyNavIndicator_C : UKeyNavIndicator {
	UNamedSlot* Content; // 0x320
};

struct UW_Settings_Audio_C : USettingsAudioBase {
	UW_ButtonNormal_C* CB_PushToTalk; // 0x3b0
	UW_ButtonNormal_C* CB_ShowOtherVoiceIndicator; // 0x3b8
	UW_ButtonNormal_C* CB_ShowOwnVoiceIndicator; // 0x3c0
	UW_ButtonNormal_C* CB_SubtitlesEnabled; // 0x3c8
	UW_EditableLabeledSlider_C* S_MasterVolume; // 0x3d0
	UW_EditableLabeledSlider_C* S_MusicVolume; // 0x3d8
	UW_EditableLabeledSlider_C* S_SFXVolume; // 0x3e0
	UW_EditableLabeledSlider_C* S_VoiceChatVolume; // 0x3e8
	UW_EditableLabeledSlider_C* S_VoiceVolume; // 0x3f0
};

struct UEmotesMenu : UWindowRoot {
	TArray<FEmotesMenuCategoryNode> Categories; // 0x398
	UTexture2D* CancelIcon; // 0x3a8
	UTexture2D* BackIcon; // 0x3b0
	UItemInventory* m_Inventory; // 0x3b8
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct UWebSocketNetDriver : UNetDriver {
	int32_t WebSocketPort; // 0x4f8
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FStringClassReference BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x40
};

struct ANavigationTestingActor : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x3e0
	UNavigationInvokerComponent* InvokerComponent; // 0x3e8
	char bActAsNavigationInvoker : 1; // 0x3f0
	FNavAgentProperties NavAgentProps; // 0x3f8
	FVector QueryingExtent; // 0x418
	ANavigationData* MyNavData; // 0x428
	FVector ProjectedLocation; // 0x430
	char bProjectedLocationValid : 1; // 0x43c
	char bSearchStart : 1; // 0x43c
	char bUseHierarchicalPathfinding : 1; // 0x43c
	char bGatherDetailedInfo : 1; // 0x43c
	char bDrawDistanceToWall : 1; // 0x43c
	char bShowNodePool : 1; // 0x43c
	char bShowBestPath : 1; // 0x43c
	char bShowDiffWithPreviousStep : 1; // 0x43c
	char bShouldBeVisibleInGame : 1; // 0x43c
	ENavCostDisplay CostDisplayMode; // 0x440
	FVector2D TextCanvasOffset; // 0x444
	char bPathExist : 1; // 0x44c
	char bPathIsPartial : 1; // 0x44c
	char bPathSearchOutOfNodes : 1; // 0x44c
	float PathfindingTime; // 0x450
	float PathCost; // 0x454
	int32_t PathfindingSteps; // 0x458
	ANavigationTestingActor* OtherActor; // 0x460
	UNavigationQueryFilter* FilterClass; // 0x468
	int32_t ShowStepIndex; // 0x470
	float OffsetFromCornersDistance; // 0x474
};

struct UConanBTTask_ConanMoveTo : UBTTask_MoveTo {
	FVector2D MoveSpeedPercentageRange; // 0xb0
	bool bIntermediatePathsIfCantReachTarget; // 0xb8
};

struct USettingsAudioBase : USubSettingsMaster {
	USoundClass* MasterClass; // 0x328
	USoundClass* MusicClass; // 0x330
	USoundClass* VoiceClass; // 0x338
	USoundClass* VoiceChatClass; // 0x340
	USoundClass* SFXClass; // 0x348
	float maxVolume; // 0x350
};

struct UScrollBar : UWidget {
	FScrollBarStyle WidgetStyle; // 0x118
	USlateWidgetStyleAsset* Style; // 0x630
	bool bAlwaysShowScrollbar; // 0x638
	EOrientation Orientation; // 0x639
	FVector2D Thickness; // 0x63c
};

struct UServerStatusReport : UServerReport {
	int32_t PlayerCount; // 0x50
	FString FrameRate; // 0x58
	uint32_t Uptime; // 0x68
	FString MemoryUsage; // 0x70
	FString CpuTime; // 0x80
	FString NPCAILODs; // 0x90
	FString BuildingAILODs; // 0xa0
	FString PlaceablesAILODs; // 0xb0
};

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	uint8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UShortcutBarInventory : UItemInventory {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct USubDSurface : UObject {
	TArray<uint32_t> VertexCountPerFace; // 0x28
	TArray<uint32_t> IndicesPerFace; // 0x38
	TArray<UVertexAttributeStream*> VertexAttributeStreams; // 0x48
	TArray<UMaterialInterface*> Materials; // 0x68
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
};

struct UWidgetBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UMaterialExpressionParticleDirection : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UAISystem : UAISystemBase {
	FStringClassReference PerceptionSystemClassName; // 0x48
	FStringClassReference HotSpotManagerClassName; // 0x58
	float AcceptanceRadius; // 0x68
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x6c
	float PathfollowingNavLinkAcceptanceRadius; // 0x70
	bool bFinishMoveOnGoalOverlap; // 0x74
	bool bAcceptPartialPaths; // 0x75
	bool bAllowStrafing; // 0x76
	bool bEnableBTAITasks; // 0x77
	bool bAllowControllersAsEQSQuerier; // 0x78
	bool bEnableDebuggerPlugin; // 0x79
	ECollisionChannel DefaultSightCollisionChannel; // 0x7a
	UBehaviorTreeManager* BehaviorTreeManager; // 0x80
	UEnvQueryManager* EnvironmentQueryManager; // 0x88
	UAIPerceptionSystem* PerceptionSystem; // 0x90
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0x98
	UAIHotSpotManager* HotSpotManager; // 0xa8
	UNavLocalGridManager* NavLocalGrids; // 0xb0
};

struct URatingResultViewBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0xc8
};

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	float ConstA; // 0xd0
	float ConstB; // 0xd4
};

struct UCraftingQueue : UItemInventory {
	TArray<int32_t> AcceptedFuels; // 0x348
	float BurnTimeMultiplier; // 0x358
	float CraftTimeMultiplier; // 0x35c
	float CraftResultMultiplier; // 0x360
	float MaterialUseMultiplier; // 0x364
	bool AutoScheduleRecipes; // 0x368
	TArray<int32_t> MachineRecipes; // 0x370
	int32_t MaxAutoCraftQueueSize; // 0x380
	UTexture2D* MachineBannerTexture; // 0x388
	ESlateVisibility MachineLabelVisibility; // 0x3a8
	bool CanConvertThralls; // 0x3a9
	bool DismantleObjects; // 0x3aa
	bool DelveObjects; // 0x3ab
	bool ConvertInParallel; // 0x3ac
	bool RunByDefault; // 0x3ad
	TArray<int32_t> ThrallConversionRecipeIDs; // 0x3b0
	FText CraftingQueueHeaderText; // 0x3c0
	FText CraftingQueueText; // 0x3d8
	FScriptMulticastDelegate SignalFuelTypeChanged; // 0x3f0
	FScriptMulticastDelegate SignalFuelConsumed; // 0x400
	FScriptMulticastDelegate SignalRunningStateChanged; // 0x410
	FScriptMulticastDelegate SignalArtisanSlotChanged; // 0x420
	FScriptMulticastDelegate SignalRecipeCrafted; // 0x430
	FScriptMulticastDelegate SignalItemCrafted; // 0x440
	FScriptMulticastDelegate SignalPlaceableUpgraded; // 0x450
	DelegateProperty DelegateCanRecipeBeCrafted; // 0x460
	TArray<UItemInventory*> m_ResourceInventories; // 0x470
	TArray<UItemInventory*> m_TargetInventories; // 0x480
	UEquipmentInventory* m_EquipmentInventory; // 0x490
	UItemInventory* m_IngredientsInventory; // 0x498
	TArray<URecipeItem*> m_MachineRecipeList; // 0x4a0
	UItemInventory* m_ArtisanThrallInventory; // 0x4b0
	UItemInventory* m_ArtisanRecipeInventory; // 0x4b8
	UThrallItem* m_ArtisanItem; // 0x4c0
	UItemInventoryClientMonitor* m_ArtisanThrallInventoryMonitor; // 0x4c8
	UItemInventoryClientMonitor* m_IngredientsInventoryMonitor; // 0x4d0
	UActorPersistenceComponent* m_OwnerPersistence; // 0x4e0
	bool m_IsStarted; // 0x4e8
	bool m_IsDefaultRunStateInitialized; // 0x4e9
	int32_t m_FuelTemplateID; // 0x4ec
	float m_CurrentBurnTimePerFuelItem; // 0x4f0
	float m_RemainingBurnTime; // 0x4f4
	float m_CurrentBurnTimePerFuelItemBase; // 0x4f8
	TArray<int32_t> m_PendingUpgradeBuildingTemplateIDs; // 0x570
	TMap<int32_t, FDependentRecipes> RecipeDependencies; // 0x580
};

struct AGuild : AInfo {
	UUniqueID* m_GuildId; // 0x610
	int64_t m_NameLastChangedBy; // 0x618
	int64_t m_MOTDLastChangedBy; // 0x620
	FString m_GuildName; // 0x628
	FText m_MessageOfTheDay; // 0x638
	int64_t m_GuildMasterPlayerId; // 0x650
	TArray<FPlayerInfo> m_GuildMembers; // 0x658
	FDateTime m_LastFollowerRescueTimestamp; // 0x678
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UXbox1GraniteSettings : UObject {
	TArray<FGraniteCpuCache> CPUCaches; // 0x30
	TArray<FGraniteGpuCache> GPUCaches; // 0x40
	int32_t MaximumTileDataUpload; // 0x50
	int32_t MaximumResolves; // 0x54
	int32_t GpuMemorySizeInMegabyte; // 0x58
	int32_t CpuMemorySizeInMegabyte; // 0x5c
	char bAdvanced : 1; // 0x60
	float ReservedRatio; // 0x64
};

struct UNavTestRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct APurgeSystem : AActor {
	FScriptMulticastDelegate OnPurgeMeterUpdated; // 0x3d0
	FScriptMulticastDelegate OnPurgeStarted; // 0x3e0
	FScriptMulticastDelegate OnPurgeFailed; // 0x3f0
	FScriptMulticastDelegate OnPurgeEnded; // 0x400
	FScriptMulticastDelegate OnPurgeWindowUpdated; // 0x410
	APurgeVolume* PurgeVolume; // 0x428
	TArray<ABuildingBase*> PurgableBuildings; // 0x4b8
	TMap<int64_t, FClanData> ClanPurgeValues; // 0x4c8
	ABuildingBase* CurrentPurgeBuilding; // 0x520
};

struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x300
	float SpringDamping; // 0x304
	float SpringLengthAtRest; // 0x308
	float SpringRadius; // 0x30c
	ECollisionChannel SpringChannel; // 0x310
	bool bIgnoreSelf; // 0x311
	float SpringCompression; // 0x314
};

struct ATriggerBox : ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x3d0
	UBillboardComponent* SpriteComponent; // 0x3d8
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x3d0
};

struct USessionInviteEntry : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x60
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x120
};

struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	FExpressionInput A; // 0x88
	FExpressionInput B; // 0xc0
};

struct UNavArea_Walls : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UHighlightsConfigureAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
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
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FRichCurve TimingCurve; // 0xd8
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x148
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x149
	char bFollow : 1; // 0x14c
	char bReverse : 1; // 0x14c
	char bForceUpright : 1; // 0x14c
};

struct UEgocentricParticleSpawnerComponent : UActorComponent {
	float MinSpawnInterval; // 0xf8
	float MaxRadius; // 0xfc
	float TraceStartZ; // 0x100
	float TraceEndZ; // 0x104
	int32_t MaxSpawnCount; // 0x108
	TArray<AActor*> m_SpawnedParticles; // 0x110
};

struct UAnimInstanceHumanMale : UAnimInstance {
	FVector ActorLocation; // 0x358
	FVector HeadFOVAdjustments; // 0x364
	FVector PawnVelocity; // 0x370
	FRotator AimOffsetRotation; // 0x37c
	FRotator ActorRotation; // 0x388
	FRotator ControlRotation; // 0x394
	FRotator CurrentVelocityRotation; // 0x3a0
	FRotator LastVelocityRotation; // 0x3ac
	UBlendSpace* WeaponPrimaryUNSAFE; // 0x3b8
	UBlendSpace* WeaponSecondaryUNSAFE; // 0x3c0
	UAnimSequenceBase* WeaponPrimaryIdle3rdUNSAFE; // 0x3c8
	UAnimSequenceBase* WeaponSecondaryIdle3rdUNSAFE; // 0x3d0
	UAnimSequenceBase* WeaponPrimaryIdle1stUNSAFE; // 0x3d8
	UAnimSequenceBase* WeaponSecondaryIdle1stUNSAFE; // 0x3e0
	UBlendSpace* WeaponPrimaryCrouchUNSAFE; // 0x3e8
	UBlendSpace* WeaponSecondaryCrouchUNSAFE; // 0x3f0
	UBlendSpace* WeaponPrimary; // 0x3f8
	UBlendSpace* WeaponSecondary; // 0x400
	UAnimSequenceBase* WeaponPrimaryIdle3rd; // 0x408
	UAnimSequenceBase* WeaponSecondaryIdle3rd; // 0x410
	UAnimSequenceBase* WeaponPrimaryIdle1st; // 0x418
	UAnimSequenceBase* WeaponSecondaryIdle1st; // 0x420
	UBlendSpace* WeaponPrimaryCrouch; // 0x428
	UBlendSpace* WeaponSecondaryCrouch; // 0x430
	float Pitch; // 0x438
	float Yaw; // 0x43c
	float SpeedXY; // 0x440
	float Direction; // 0x444
	float DirectionXY; // 0x448
	float GroundPitch; // 0x44c
	float ClimbDirection; // 0x450
	float ClimbSpeed; // 0x454
	float MaxWalkSpeed; // 0x458
	float PenisRuntimeScale; // 0x45c
	int32_t CharacterLayoutHash; // 0x460
	float DeltaDirection; // 0x464
	float LeanDirection; // 0x468
	float LeanInterpSpeed; // 0x46c
	float IsWeaponPrimaryIdleAnimValidFloat; // 0x470
	float IsWeaponSecondaryIdleAnimValidFloat; // 0x474
	float IsWeaponPrimaryBlendSpaceValidFloat; // 0x478
	float IsWeaponSecondaryBlendSpaceValidFloat; // 0x47c
	char ShouldRunIK : 1; // 0x480
	char AnimHasBegunPlay : 1; // 0x480
	char isPassive : 1; // 0x480
	char IsAggressive : 1; // 0x480
	char isEquipping : 1; // 0x480
	char isDead : 1; // 0x480
	char IsUnconscious : 1; // 0x480
	char IsWalking : 1; // 0x480
	char IsSwimming : 1; // 0x481
	char IsFlying : 1; // 0x481
	char IsCrouching : 1; // 0x481
	char OldIsPassive : 1; // 0x481
	char isThirdPerson : 1; // 0x481
	char isClimbing : 1; // 0x481
	char isClimbSliding : 1; // 0x481
	char isNotSlidingAndNotClimbing : 1; // 0x481
	char isHangingFromCeiling : 1; // 0x482
	char isCurrentlySitting : 1; // 0x482
	char ResetIK : 1; // 0x482
	char IsWeaponPrimaryIdleAnimValid : 1; // 0x482
	char IsWeaponSecondaryIdleAnimValid : 1; // 0x482
	char IsWeaponPrimaryBlendSpaceValid : 1; // 0x482
	char IsWeaponSecondaryBlendSpaceValid : 1; // 0x482
	char IsWeaponPrimaryCrouchBlendSpaceValid : 1; // 0x482
	char IsPrimaryAndSecondaryIdle : 1; // 0x483
	char BlendWeaponIdleAnims : 1; // 0x483
	char IsRunning : 1; // 0x483
	char IsSprinting : 1; // 0x483
	char HasFullBodyLocomotion : 1; // 0x483
	char HasFullBodyCrouchLocomotion : 1; // 0x483
	char BlockIdleFidgets : 1; // 0x483
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x7a0
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x60
	FGuid ExpressionGUID; // 0x70
};

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x190
	float Acceleration; // 0x194
	float Deceleration; // 0x198
	float TurningBoost; // 0x19c
	char bPositionCorrected : 1; // 0x1a0
};

struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x418
	float DamagePerSec; // 0x41c
	UDamageType* DamageType; // 0x420
	float PainInterval; // 0x428
	char bEntryPain : 1; // 0x42c
	char BACKUP_bPainCausing : 1; // 0x42c
	AController* DamageInstigator; // 0x430
};

struct UFullscreenMap : UWindowRoot {
	UMapWithMarkerWidget* m_MapWithMarkersWidget; // 0x398
	UFCButton* m_ZoomIn; // 0x3a0
	UFCButton* m_ZoomOut; // 0x3a8
	UWidget* m_MouseControlBox; // 0x3b0
};

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0xa0
	FString Excerpt; // 0xb0
};

struct UBrushBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x60
};

struct UActorComponent : UObject {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UShowVirtualKeyboardCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnConfirm; // 0x28
	FScriptMulticastDelegate OnStringVertifiedFailed; // 0x38
	FScriptMulticastDelegate OnCanceled; // 0x48
};

struct APawn : AActor {
	char bUseControllerRotationPitch : 1; // 0x3d8
	char bUseControllerRotationYaw : 1; // 0x3d8
	char bUseControllerRotationRoll : 1; // 0x3d8
	char bCanAffectNavigationGeneration : 1; // 0x3d8
	float BaseEyeHeight; // 0x3dc
	EAutoReceiveInput AutoPossessPlayer; // 0x3e0
	EAutoPossessAI AutoPossessAI; // 0x3e1
	AController* AIControllerClass; // 0x3e8
	APlayerState* PlayerState; // 0x3f0
	char RemoteViewPitch; // 0x3f8
	AController* LastHitBy; // 0x400
	AController* Controller; // 0x408
	FVector ControlInputVector; // 0x418
	FVector LastControlInputVector; // 0x424
};

struct UUpdateManager : UObject {
	float HotfixCheckCompleteDelay; // 0x1f0
	float UpdateCheckCompleteDelay; // 0x1f4
	float HotfixAvailabilityCheckCompleteDelay; // 0x1f8
	float UpdateCheckAvailabilityCompleteDelay; // 0x1fc
	bool bPlatformEnvironmentDetected; // 0x200
	bool bInitialUpdateFinished; // 0x201
	bool bCheckHotfixAvailabilityOnly; // 0x202
	EUpdateState CurrentUpdateState; // 0x203
	int32_t WorstNumFilesPendingLoadViewed; // 0x204
	EPatchCheckResult LastPatchCheckResult; // 0x208
	EHotfixResult LastHotfixResult; // 0x209
	FDateTime LastUpdateCheck[0x2]; // 0x228
	EUpdateCompletionStatus LastCompletionResult[0x2]; // 0x238
	UEnum* UpdateStateEnum; // 0x248
	UEnum* UpdateCompletionEnum; // 0x250
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x60
	float Bias; // 0x98
	float Scale; // 0x9c
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x60
	TArray<FGuid> AttributeSetTypes; // 0x70
};

struct UDestructibleMesh : USkeletalMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x2c0
	TArray<FFractureEffect> FractureEffects; // 0x348
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x408
	char bEditorPreVisOnly : 1; // 0x418
	char bDisabled : 1; // 0x418
	EStreamingVolumeUsage StreamingUsage; // 0x41c
};

struct UMaterialExpressionParticleMacroUV : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct ALoreMeshActor : AStaticMeshActor {
	int32_t LoreId; // 0x3e8
};

struct UMouseCursorBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct USubDSurfaceComponent : UPrimitiveComponent {
	USubDSurface* Mesh; // 0x6c0
	int32_t DebugLevel; // 0x6c8
	UStaticMeshComponent* DisplayMeshComponent; // 0x6d0
};

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
};

struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x118
	DelegateProperty OnGenerateWidgetEvent; // 0x128
	bool bIsFocusable; // 0x138
};

struct ALobbyBeaconClient : AOnlineBeaconClient {
	ALobbyBeaconState* LobbyState; // 0x458
	ALobbyBeaconPlayerState* PlayerState; // 0x460
};

struct UIngameMenuBase : UWindowRoot {
	UTexture2D* TextureOldBackground; // 0x3b0
	UTexture2D* TextureSiptahBackground; // 0x3d0
};

struct UAdminPanelInventoryCheats : UWindowRoot {
	UTexture2D* TransparentTexture; // 0x398
	UDebugEntryItem* DebugEntryClass; // 0x3a0
	TArray<UDebugEntryItem*> m_Items; // 0x3a8
	UScrollBox* m_ScrollBox; // 0x3b8
	USizeBox* m_VirtualizationBox; // 0x3c0
	UCanvasPanel* m_VirtualizationCanvas; // 0x3c8
	UNavigatableVerticalBox* m_WidgetContainer; // 0x3d0
	TArray<FDebugEntryItemData> m_ItemGearList; // 0x400
	TArray<FDebugEntryItemData> m_ItemResourceList; // 0x410
	TArray<FDebugEntryItemData> m_ItemBuildingList; // 0x420
	TArray<FDebugEntryItemData> m_ItemOtherList; // 0x430
	TArray<FDebugEntryItemData> m_ItemFilteredList; // 0x440
};

struct UW_ItemTemperatureBar_C : UItemTemperatureBar {
	UImage* TemperatureBar1; // 0x428
	UImage* TemperatureBar10; // 0x430
	UImage* TemperatureBar2; // 0x438
	UImage* TemperatureBar3; // 0x440
	UImage* TemperatureBar4; // 0x448
	UImage* TemperatureBar5; // 0x450
	UImage* TemperatureBar6; // 0x458
	UImage* TemperatureBar7; // 0x460
	UImage* TemperatureBar8; // 0x468
	UImage* TemperatureBar9; // 0x470
	UImage* TemperatureIcon; // 0x478
};

struct UNavArea_Null : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct UW_PvPSelection_C : URootWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UTextBlock* Description; // 0x320
	UW_CommunityButton_C* PvEButton; // 0x328
	UW_CommunityButton_C* PvPButton; // 0x330
	UW_BlitzButton_C* PvPConflictButton; // 0x338
	FScriptMulticastDelegate CombatModeSelected; // 0x340
};

struct UBackgroundBlur : UContentWidget {
	FMargin Padding; // 0x130
	EHorizontalAlignment HorizontalAlignment; // 0x140
	EVerticalAlignment VerticalAlignment; // 0x141
	bool bApplyAlphaToBlur; // 0x142
	float BlurStrength; // 0x144
	bool bOverrideAutoRadiusCalculation; // 0x148
	int32_t BlurRadius; // 0x14c
	FSlateBrush LowQualityFallbackBrush; // 0x150
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x60
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UHoudiniAssetParameterRampCurveFloat : UCurveFloat {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xa0
};

struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x150
	float MaxSpeed; // 0x154
	char bRotationFollowsVelocity : 1; // 0x158
	char bShouldBounce : 1; // 0x158
	char bInitialVelocityInLocalSpace : 1; // 0x158
	char bForceSubStepping : 1; // 0x158
	char bIsHomingProjectile : 1; // 0x158
	char bBounceAngleAffectsFriction : 1; // 0x158
	char bIsSliding : 1; // 0x158
	float PreviousHitTime; // 0x15c
	FVector PreviousHitNormal; // 0x160
	float ProjectileGravityScale; // 0x16c
	float Buoyancy; // 0x170
	float Bounciness; // 0x174
	float Friction; // 0x178
	float BounceVelocityStopSimulatingThreshold; // 0x17c
	FScriptMulticastDelegate OnProjectileBounce; // 0x180
	FScriptMulticastDelegate OnProjectileStop; // 0x190
	float HomingAccelerationMagnitude; // 0x1a0
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x1a4
	float MaxSimulationTimeStep; // 0x1ac
	int32_t MaxSimulationIterations; // 0x1b0
};

struct UFuncomSkeletalMeshComponent : USkeletalMeshComponent {
	bool bHasCachedPose; // 0xf20
	FFuncomPoseSnapshot CachedPose; // 0xf28
	bool ShouldPlayAnimation; // 0xf38
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x28
	UBlackboardData* BlackboardAsset; // 0x30
	TArray<UBTDecorator*> RootDecorators; // 0x38
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x48
};

struct UDebugEntryNPC : UFCButton {
	FName NpcName; // 0xc20
};

struct UPlayFabProfilesAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x110
	UPlayFabJsonObject* RequestJsonObj; // 0x118
	UPlayFabJsonObject* ResponseJsonObj; // 0x120
};

struct UCharacterCreationBase : UWindowRoot {
	bool CanRandomize; // 0x398
};

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UConanLocalPlayer : ULocalPlayer {
	UGameViewportClient* ViewportClient; // 0x58
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x7c
	APlayerController* PendingLevelPlayerControllerClass; // 0x80
	char bSentSplitJoin : 1; // 0x88
};

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UGamepadHelpOverlayBase : UWindowRoot {
	UGamepadHelpEntryBase* GamepadHelpEntryClass; // 0x398
};

struct USkeletalMesh : UObject {
	USkeleton* Skeleton; // 0x48
	FBoxSphereBounds ImportedBounds; // 0x50
	FBoxSphereBounds ExtendedBounds; // 0x6c
	FVector PositiveBoundsExtension; // 0x88
	FVector NegativeBoundsExtension; // 0x94
	TArray<FSkeletalMaterial> Materials; // 0xa0
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xb0
	EAxis SkelMirrorAxis; // 0xc0
	EAxis SkelMirrorFlipAxis; // 0xc1
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0xc8
	char bUseFullPrecisionUVs : 1; // 0xd8
	char bHasBeenSimplified : 1; // 0xd8
	char bHasVertexColors : 1; // 0xd8
	char bEnablePerPolyCollision : 1; // 0xd8
	UBodySetup* BodySetup; // 0xe0
	UPhysicsAsset* PhysicsAsset; // 0xe8
	UPhysicsAsset* ShadowPhysicsAsset; // 0xf0
	TArray<UMorphTarget*> MorphTargets; // 0xf8
	TArray<FClothingAssetData> ClothingAssets; // 0x270
	UAnimInstance* PostProcessAnimBlueprint; // 0x280
	TArray<UAssetUserData*> AssetUserData; // 0x288
	TArray<USkeletalMeshSocket*> Sockets; // 0x2a0
};

struct UGraniteCookedModSettings : UObject {
	TArray<FName> DeletedTexturesInCookedBuild; // 0x28
};

struct AModController : AInfo {
	UActorPersistenceComponent* PersistenceComponent; // 0x3d0
	TArray<FAdditionalClassComponent> AdditionalClassComponents; // 0x3d8
};

struct UHealthBarBase : URootWidget {
	float AnimSpeed; // 0x318
	float BarSizeImpact; // 0x31c
	bool CatchUpOnRegen; // 0x320
	bool ClearOnZero; // 0x321
	FSlateBrush MainBarBrush; // 0x328
	FSlateBrush HitBarBrush; // 0x3b8
	FSlateBrush CorruptionBarBrush; // 0x448
	FSlateBrush BackgroundBrush; // 0x4d8
	FSlateBrush OverlayBrush; // 0x568
	FSlateBrush EdgeBrush; // 0x5f8
	bool bValueTextEnabled; // 0x688
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x80
	char EnableY : 1; // 0x80
	char EnableZ : 1; // 0x80
};

struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x6c0
	int32_t SectionBaseY; // 0x6c4
	int32_t ComponentSizeQuads; // 0x6c8
	int32_t SubsectionSizeQuads; // 0x6cc
	int32_t NumSubsections; // 0x6d0
	UMaterialInterface* OverrideMaterial; // 0x6d8
	UMaterialInterface* OverrideHoleMaterial; // 0x6e0
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x6e8
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x6f8
	TArray<UTexture2D*> WeightmapTextures; // 0x708
	UTexture2D* XYOffsetmapTexture; // 0x718
	FVector4 WeightmapScaleBias; // 0x720
	float WeightmapSubsectionOffset; // 0x730
	FVector4 HeightmapScaleBias; // 0x740
	UTexture2D* HeightmapTexture; // 0x750
	FBox CachedLocalBox; // 0x758
	ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0x774
	FGuid MapBuildDataId; // 0x790
	TArray<FGuid> IrrelevantLights; // 0x7a0
	int32_t CollisionMipLevel; // 0x7b0
	int32_t SimpleCollisionMipLevel; // 0x7b4
	float NegativeZBoundsExtension; // 0x7b8
	float PositiveZBoundsExtension; // 0x7bc
	float StaticLightingResolution; // 0x7c0
	int32_t ForcedLOD; // 0x7c4
	int32_t LODBias; // 0x7c8
	FGuid StateId; // 0x7cc
	FGuid BakedTextureMaterialGuid; // 0x7dc
	UTexture2D* GIBakedBaseColorTexture; // 0x7f0
	char MobileBlendableLayerMask; // 0x7f8
	UMaterialInterface* MobileMaterialInterface; // 0x800
	UTexture2D* MobileWeightNormalmapTexture; // 0x808
};

struct UW_HostLocal_C : UHostLocalBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x518
	UHorizontalBox* AcceptAndBack; // 0x520
	UImage* ASSIGNED_IN_CODE__Difficulty_Barbaric; // 0x528
	UImage* ASSIGNED_IN_CODE__Difficulty_Civilized; // 0x530
	UImage* ASSIGNED_IN_CODE__Difficulty_Decadent; // 0x538
	UImage* ASSIGNED_IN_CODE__Difficulty_Siptah_Barbaric; // 0x540
	UImage* ASSIGNED_IN_CODE__Difficulty_Siptah_Civilized; // 0x548
	UImage* ASSIGNED_IN_CODE__Difficulty_Siptah_Decadent; // 0x550
	UW_TabButton_C* B_Abandonment; // 0x558
	UW_ButtonLarge_C* B_Back; // 0x560
	UW_TabButton_C* B_Barbarian; // 0x568
	UW_TabButton_C* B_BarbarianSiptah; // 0x570
	UW_TabButton_C* B_Chat; // 0x578
	UW_TabButton_C* B_Combat; // 0x580
	UW_TabButton_C* B_Crafting; // 0x588
	UW_TabButton_C* B_Custom; // 0x590
	UW_TabButton_C* B_DayAndNight; // 0x598
	UW_TabButton_C* B_ExiledLands; // 0x5a0
	UW_TabButton_C* B_General; // 0x5a8
	UW_TabButton_C* B_Harvesting; // 0x5b0
	UW_ButtonLarge_C* B_Host; // 0x5b8
	UW_TabButton_C* B_Peasant; // 0x5c0
	UW_TabButton_C* B_PeasantSiptah; // 0x5c8
	UW_TabButton_C* B_PetAndHunger; // 0x5d0
	UW_TabButton_C* B_Progression; // 0x5d8
	UW_TabButton_C* B_Purge; // 0x5e0
	UW_TabButton_C* B_RegionalAccessControl; // 0x5e8
	UW_ButtonLarge_C* B_ResetDefault; // 0x5f0
	UW_TabButton_C* B_Siptah; // 0x5f8
	UW_TabButton_C* B_SIptahSettings; // 0x600
	UW_TabButton_C* B_Soldier; // 0x608
	UW_TabButton_C* B_SoldierSiptah; // 0x610
	UW_TabButton_C* B_Survival; // 0x618
	UBorder* Brd_GameWindow; // 0x620
	UVerticalBox* CustomMenu; // 0x628
	UWidgetSwitcher* DescriptionSwitcher; // 0x630
	UVerticalBox* DifficultyPresets; // 0x638
	UImage* I_Background; // 0x640
	UImage* Image_13; // 0x648
	UImage* Image_34; // 0x650
	UImage* Image_35; // 0x658
	UImage* Image_36; // 0x660
	UImage* Image_37; // 0x668
	UImage* Image_38; // 0x670
	UImage* Image_39; // 0x678
	UImage* Image_41; // 0x680
	UImage* Image_42; // 0x688
	UImage* Image_43; // 0x690
	UImage* Image_154; // 0x698
	UW_TooltipOverlay_C* KeyNavAnchor; // 0x6a0
	UW_Settings_Server_C* ServerSettings; // 0x6a8
	UVerticalBox* SiptahDifficultyPresets; // 0x6b0
	UVerticalBox* VerticalBox_Settings; // 0x6b8
	FName Map; // 0x6c0
	bool LocalDBFileExist; // 0x6c8
	FName DefaultMapName; // 0x6d0
	bool ContinueGame; // 0x6d8
	UFCButton* SelectedButton; // 0x6e0
	UFCButton* LastSelectedDifficultyOrCustomButton; // 0x6e8
	EConanOnlinePermissions BlockedPermission; // 0x6f0
	FName SiptahMapNape; // 0x6f8
	FString FriendlyMapName; // 0x700
	UFCButton* FocusedButtonBeforePrompt; // 0x710
};

struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	UClass* LobbyStateClass; // 0x400
	ALobbyBeaconState* LobbyState; // 0x420
};

struct UTireType : UDataAsset {
	float FrictionScale; // 0x28
};

struct AConanWorldSettings : AWorldSettings {
	int32_t BuildingGridSize; // 0x580
	int32_t FoliageGridSize; // 0x584
	float FoliagePhysicsRangeClient; // 0x588
	float FoliagePhysicsRangeServer; // 0x58c
	float AILODBoundary; // 0x590
	float AILODMaxRaycastDistance; // 0x594
	int32_t BuildingStabilityDecrease; // 0x598
	float NetCullDistanceScaling; // 0x59c
	UStaticNavigation* StaticNavigation; // 0x5a0
	TArray<float> SpawnDesertBounds; // 0x5a8
	ASpatialHashSystem* SpatialHashSystem[0x2]; // 0x5b8
	TArray<FSpawnProbabilityBand> SpawnProbabilityBands; // 0x5c8
	TArray<FSpawnProbabilityBand> SpawnProbabilityBandsListenServer; // 0x5d8
	ANPCRegistry* m_NPCRegistry; // 0x5e8
	APurgeSystem* m_PurgeSystem; // 0x5f0
	APlayerPawnRegistry* m_PlayerPawnRegistry; // 0x5f8
	TArray<ALandClaim*> LandClaim; // 0x600
	AEnergyReceiverRegistry* m_EnergyReceiverRegistry; // 0x610
	ASoundRegistry* SoundRegistry; // 0x618
	AGlobalMarkerRegistry* m_GlobalMarkerRegistry; // 0x620
	UDataTable* m_PurgeConfigTable; // 0x628
};

struct UConanBTTask_Chase : UConanBTTask_ConanMoveTo {
	FVector2D MoveSpeedPercentageRange; // 0xb0
	bool bIntermediatePathsIfCantReachTarget; // 0xb8
};

struct UWidgetInteractionComponent : USceneComponent {
	FScriptMulticastDelegate OnHoveredWidgetChanged; // 0x300
	int32_t VirtualUserIndex; // 0x320
	float PointerIndex; // 0x324
	ECollisionChannel TraceChannel; // 0x328
	float InteractionDistance; // 0x32c
	EWidgetInteractionSource InteractionSource; // 0x330
	bool bEnableHitTesting; // 0x331
	bool bShowDebug; // 0x332
	FLinearColor DebugColor; // 0x334
	FHitResult CustomHitResult; // 0x3c0
	FVector2D LocalHitLocation; // 0x448
	FVector2D LastLocalHitLocation; // 0x450
	UWidgetComponent* HoveredWidgetComponent; // 0x458
	FHitResult LastHitResult; // 0x460
	bool bIsHoveredWidgetInteractable; // 0x4e8
	bool bIsHoveredWidgetFocusable; // 0x4e9
	bool bIsHoveredWidgetHitTestVisible; // 0x4ea
};

struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x250
	TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x258
	TArray<UActorComponent*> ComponentTemplates; // 0x268
	TArray<UTimelineTemplate*> Timelines; // 0x278
	USimpleConstructionScript* SimpleConstructionScript; // 0x288
	UInheritableComponentHandler* InheritableComponentHandler; // 0x290
	UStructProperty* UberGraphFramePointerProperty; // 0x298
	UFunction* UberGraphFunction; // 0x2a0
	TArray<FEventGraphFastCallPair> FastCallPairs; // 0x2a8
	bool bHasInstrumentation; // 0x2b8
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2c0
	bool bHasNativizedParent; // 0x310
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UW_GamepadHelpEntry_C : UGamepadHelpEntryBase {
	UTextBlock* HotkeyDescription; // 0x3a0
	UHorizontalBox* IconsContainer; // 0x3a8
};

struct UPushOutCapsuleComponent : UCapsuleComponent {
	float PushingCapsuleScale; // 0x6f0
	UCapsuleComponent* PushingCapsule; // 0x6f8
	TArray<AConanCharacter*> CharactersToPushAway; // 0x700
};

struct UPlayFabLocalizationAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x90
	UPlayFabJsonObject* RequestJsonObj; // 0x98
	UPlayFabJsonObject* ResponseJsonObj; // 0xa0
};

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x78
	bool bAdditivePose; // 0x108
	int32_t BasePoseIndex; // 0x10c
	FName RetargetSource; // 0x110
};

struct UTextRenderComponent : UPrimitiveComponent {
	FText Text; // 0x6c0
	UMaterialInterface* TextMaterial; // 0x6d8
	UFont* Font; // 0x6e0
	EHorizTextAligment HorizontalAlignment; // 0x6e8
	EVerticalTextAligment VerticalAlignment; // 0x6e9
	FColor TextRenderColor; // 0x6ec
	float XScale; // 0x6f0
	float YScale; // 0x6f4
	float WorldSize; // 0x6f8
	float InvDefaultSize; // 0x6fc
	float HorizSpacingAdjust; // 0x700
	float VertSpacingAdjust; // 0x704
	char bAlwaysRenderAsText : 1; // 0x708
};

struct UInterpFilter_Custom : UInterpFilter {
	FString Caption; // 0x28
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct UHungerIndicatorIcon : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UHoudiniSplineComponent : USceneComponent {
	USceneComponent* AttachParent; // 0xf8
	TArray<USceneComponent*> AttachChildren; // 0x100
	TSet<USceneComponent*> ClientAttachedChildren; // 0x110
	FName AttachSocketName; // 0x160
	char bWorldToComponentUpdated : 1; // 0x168
	char bAbsoluteLocation : 1; // 0x168
	char bAbsoluteRotation : 1; // 0x168
	char bAbsoluteScale : 1; // 0x168
	char bVisible : 1; // 0x168
	char bHiddenInGame : 1; // 0x168
	char bShouldUpdatePhysicsVolume : 1; // 0x168
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x168
	char bUseAttachParentBound : 1; // 0x168
	char bShouldDisregardChildComponentsForNavigationUpdates : 1; // 0x168
	char bShouldDisregardAttachedActorsForNavigationUpdates : 1; // 0x168
	EComponentMobility Mobility; // 0x16d
	EDetailMode DetailMode; // 0x16e
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0x170
	FVector RelativeLocation; // 0x1f0
	FRotator RelativeRotation; // 0x1fc
	FVector RelativeScale3D; // 0x230
	FVector ComponentVelocity; // 0x258
	FScriptMulticastDelegate PhysicsVolumeChangedDelegate; // 0x268
};

struct ULootLogElementBase : UUserWidget {
	UTextBlock* T_Total; // 0x240
	UTextBlock* T_Quantity; // 0x248
	UTextBlock* T_Type; // 0x250
	UInventoryIconViewBase* I_Icon; // 0x258
	UBorder* Brd_Background; // 0x260
	UTexture2D* RemoveTexture; // 0x268
	UTexture2D* AddTexture; // 0x270
	int32_t DefaultFontSize; // 0x278
};

struct UW_TimeInputBox_C : UTimeInputBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350
	UOverlay* Overlay_14; // 0x358
	UW_FCEditableTextBlock_C* TXT_ColonSeparator; // 0x360
	UW_FCEditableTextBlock_C* TXT_Hours; // 0x368
	UW_FCEditableTextBlock_C* TXT_Minutes; // 0x370
	FScriptMulticastDelegate SignalTimeInputSelected; // 0x378
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct UNavMeshRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	bool bHasMatchingItemType; // 0x60
};

struct UAILODComponent : UActorComponent {
	TArray<FPausedComponent> pausedComponents; // 0x100
	FScriptMulticastDelegate EventAILOD; // 0x120
	float AILOD2DistanceOverride; // 0x140
	float AILOD1Distance; // 0x144
	float AILOD2Distance; // 0x148
	float AILOD3Distance; // 0x14c
	char AILOD; // 0x1b4
	char TargetAILODWithOutstandingConfirmation; // 0x1b5
	bool SuspendAtMaxAILOD; // 0x1bb
};

struct ASharedDebugInfo : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
};

struct UEnvQueryTest_Random : UEnvQueryTest {
	int32_t TestOrder; // 0x30
	EEnvTestPurpose TestPurpose; // 0x34
	FString TestComment; // 0x38
	EEnvTestFilterOperator MultipleContextFilterOp; // 0x48
	EEnvTestScoreOperator MultipleContextScoreOp; // 0x49
	EEnvTestFilterType FilterType; // 0x4a
	FAIDataProviderBoolValue BoolValue; // 0x50
	FAIDataProviderFloatValue FloatValueMin; // 0x80
	FAIDataProviderFloatValue FloatValueMax; // 0xb0
	EEnvTestScoreEquation ScoringEquation; // 0xe1
	EEnvQueryTestClamping ClampMinType; // 0xe2
	EEnvQueryTestClamping ClampMaxType; // 0xe3
	EEQSNormalizationType NormalizationType; // 0xe4
	FAIDataProviderFloatValue ScoreClampMin; // 0xe8
	FAIDataProviderFloatValue ScoreClampMax; // 0x118
	FAIDataProviderFloatValue ScoringFactor; // 0x148
	FAIDataProviderFloatValue ReferenceValue; // 0x178
	bool bDefineReferenceValue; // 0x1a8
	char bWorkOnFloatValues : 1; // 0x1b8
};

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
};

struct UServerRentalServerDetails : URootWidget {
	FScriptMulticastDelegate SignalSelected; // 0x318
	FScriptMulticastDelegate OnRequestServerStart; // 0x328
	FScriptMulticastDelegate OnRequestServerStop; // 0x338
	FScriptMulticastDelegate OnRequestServerRestart; // 0x348
	FScriptMulticastDelegate OnRequestServerExtend; // 0x358
	FScriptMulticastDelegate OnRequestServerEdit; // 0x368
	FScriptMulticastDelegate OnSetExpanded; // 0x378
	FServerRentalGameServer m_GameServer; // 0x388
	UServerRentalBase* m_ServerRentalBase; // 0x400
	UServerRentalRequestConnection* m_ServerRentalRequestConnection; // 0x408
	UFCButton* ButtonClass; // 0x410
};

struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UCarouselWindow : UWindowRoot {
	TArray<FName> CarouselWindowNames; // 0x398
	USoundBase* CarouselButtonSound; // 0x3a8
	USoundBase* CarouselHiddenSound; // 0x3c8
	UWindowRoot* m_ActivatedWindow; // 0x430
	UInputComponent* m_ActiveInputComponent; // 0x460
};

struct USoundNodeAssetReferencer : USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate OnFail; // 0x38
};

struct ULoginCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
	FString m_ErrorMessage; // 0x48
	UObject* m_WorldContextObject; // 0xa8
};

struct UW_SubtitleRenderer_C : USubtitleRenderer {
	USubtitleEntryView* EntryViewClass; // 0x398
	TArray<USubtitleEntryView*> m_PendingEntryList; // 0x3a0
	USubtitleEntryView* m_ActiveEntry; // 0x3b0
};

struct UW_UpsellButton_C : UUpSellButtonbase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* Anim_Shine; // 0x360
};

struct UHungerSystem : UConanCharacterComponent {
	FScriptMulticastDelegate SignalHungerChanged; // 0x100
	FScriptMulticastDelegate SignalThirstChanged; // 0x110
	bool IsFoodDepleted; // 0x120
	bool IsDrinkDepleted; // 0x121
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x80
};

struct UExilesJourneyItem : UGameItem {
	FName TemplateName; // 0x248
};

struct UServerListBase : UWindowRoot {
	float ScrollValue; // 0x398
	UTexture2D* CommunityBackground; // 0x3a0
	float DirectConnectTimeout; // 0x3c0
	TMap<EServerListHotkey, FGamepadHotkeyHelp> m_ServerListHotkeys; // 0x4d0
};

struct UCensoredContentHelper : UObject {
	FString DlcProductId; // 0x28
};

struct URatingWidgetBase : URootWidget {
	ERatingCategory RatingCategory; // 0x338
	bool CanBeChanged; // 0x339
};

struct UHUDCharacterStatIndicators : UWindowRoot {
	AConanCharacter* m_Owner; // 0x3e0
	AConanCharacter* m_Mount; // 0x3e8
};

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x390
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x398
	UBoxComponent* PreviewCaptureBox; // 0x3a0
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	FExpressionInput Radius; // 0xd0
	FExpressionInput Hardness; // 0x108
	float AttenuationRadius; // 0x140
	float HardnessPercent; // 0x144
};

struct UCineCameraComponent : UCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x850
	FCameraLensSettings LensSettings; // 0x85c
	FCameraFocusSettings FocusSettings; // 0x870
	float CurrentFocalLength; // 0x8a0
	float CurrentAperture; // 0x8a4
	float CurrentFocusDistance; // 0x8a8
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x8b8
	TArray<FNamedLensPreset> LensPresets; // 0x8c8
	FString DefaultFilmbackPresetName; // 0x8d8
	FString DefaultLensPresetName; // 0x8e8
	float DefaultLensFocalLength; // 0x8f8
	float DefaultLensFStop; // 0x8fc
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	UGameplayTask* ChildTask; // 0x60
};

struct UMaterialExpressionSceneTexelSize : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UConanBTDecorator_WeaponStatus : UConanBTDecorator_Base {
	float UpdateRate; // 0x68
};

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x60
	FName ParameterName; // 0x68
	FGuid ParameterId; // 0x70
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

struct UAISenseConfig_NewSight : UAISenseConfig {
	UAISense_NewSight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
};

struct UParticleModuleMaterialBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x3d0
};

struct UFCEditableMultiLineText : UFCEditableTextBase {
	FText Text; // 0x338
	FText KeyboardTitle; // 0x350
	FText KeyboardDescription; // 0x368
	EVirtualKeyboardLayout KeyboardLayout; // 0x380
	FTextBlockStyle WidgetStyle; // 0x388
	FText HintText; // 0x590
	DelegateProperty HintTextDelegate; // 0x5a8
	bool IsReadOnly; // 0x5b8
	bool IsPassword; // 0x5b9
	float MinimumDesiredWidth; // 0x5bc
	int32_t TextMaxLength; // 0x5c0
	bool IsCaretMovedWhenGainFocus; // 0x5c4
	bool SelectAllTextWhenFocused; // 0x5c5
	bool RevertTextOnEscape; // 0x5c6
	bool ClearKeyboardFocusOnCommit; // 0x5c7
	bool SelectAllTextOnCommit; // 0x5c8
	bool AllowContextMenu; // 0x5c9
	FShapedTextOptions ShapedTextOptions; // 0x5cc
	ETextJustify Justification; // 0x5d4
	bool AutoWrapText; // 0x5d5
	float WrapTextAt; // 0x5d8
	ETextWrappingPolicy WrappingPolicy; // 0x5dc
	FMargin Margin; // 0x5e0
	float LineHeightPercentage; // 0x5f0
	USoundBase* PressedSound; // 0x5f8
	USoundBase* HoveredSound; // 0x618
	FScriptMulticastDelegate OnTextChanged; // 0x638
	FScriptMulticastDelegate OnTextCommitted; // 0x648
	FScriptMulticastDelegate OnMaxLengthExceeded; // 0x658
	FScriptMulticastDelegate OnTextReceivedFocus; // 0x668
};

struct UNavArea_Obstacle : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UGameplayTagsDeveloperSettings : UObject {
	FString DeveloperConfigName; // 0x28
};

struct APlaceableBase : ABuildableBase {
	UTexture2D* MapMarkerIcon; // 0x548
	bool DestroyActorOnZeroHealth; // 0x56c
	bool DropInventoryContentOnDestroyed; // 0x56d
	TArray<int32_t> CraftingGroups; // 0x570
	UDestructibleMesh* DestructibleMesh; // 0x580
	ALootContainer* LootContainerClass; // 0x588
	TArray<APlaceableBase*> UpgradeTargets; // 0x590
	bool HasHitGround; // 0x5a0
	bool HasStability; // 0x5a1
	TArray<APlaceableBase*> CanProvideStabilityTo; // 0x5a8
	bool DoNotRespectOwnership; // 0x5b8
	bool CanTakeDamage; // 0x5b9
	bool IgnoreCanDamagePlayerOwnedStucture; // 0x5ba
	bool ReturnableToInventory; // 0x5bb
	bool WasPlacedAsUpgrade; // 0x5bc
	bool DisableDecayWhenOnGround; // 0x5bd
};

struct UConanAudioComponent : UAudioComponent {
	USoundBase* SoundAsset; // 0x5b0
	float CachedMaxAudibleDistance; // 0x5d0
	char bUseAttachParentMobility : 1; // 0x5d4
	char bUsesTimeOfDay : 1; // 0x5d4
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x6e0
};

struct UDialogueSoundWaveProxy : USoundBase {
	USoundClass* SoundClassObject; // 0x28
	USoundSubmix* SoundSubmixObject; // 0x30
	char bDebug : 1; // 0x38
	char bOverrideConcurrency : 1; // 0x38
	char bIgnoreFocus : 1; // 0x38
	USoundConcurrency* SoundConcurrencySettings; // 0x40
	FSoundConcurrencySettings ConcurrencyOverrides; // 0x48
	EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x58
	int32_t MaxConcurrentPlayCount; // 0x5c
	float Duration; // 0x60
	USoundAttenuation* AttenuationSettings; // 0x68
	float Priority; // 0x70
	TArray<USoundEffectSourcePreset*> SourceEffectChain; // 0x78
	float DefaultMasterReverbSendAmount; // 0x88
};

struct UIpConnection : UNetConnection {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMap; // 0x60
	TArray<UChannel*> OpenChannels; // 0x68
	TArray<AActor*> SentTemporaries; // 0x78
	AActor* ViewTarget; // 0x88
	AActor* OwningActor; // 0x90
	int32_t MaxPacket; // 0x98
	char InternalAck : 1; // 0x9c
	TArray<UObject*> AsyncLoadedObjects; // 0xa0
	FUniqueNetIdRepl PlayerId; // 0x170
	double LastReceiveTime; // 0x200
	TMap<AActor*, UActorChannel*> ActorChannels; // 0x334e0
	TArray<UChannel*> ChannelsToTick; // 0x33730
};

struct AAbstractNavData : ANavigationData {
	UPrimitiveComponent* RenderingComp; // 0x3d0
	FNavDataConfig NavDataConfig; // 0x3d8
	char bEnableDrawing : 1; // 0x428
	char bForceRebuildOnLoad : 1; // 0x428
	char bCanBeMainNavData : 1; // 0x428
	char bCanSpawnOnRebuild : 1; // 0x428
	char bRebuildAtRuntime : 1; // 0x428
	ERuntimeGenerationType RuntimeGeneration; // 0x42c
	float ObservedPathsTickInterval; // 0x430
	uint32_t DataVersion; // 0x434
	TArray<FSupportedAreaData> SupportedAreas; // 0x508
};

struct UEnergyReceiverComponent : UActorComponent {
	int32_t ListeningToTypes; // 0x180
	TArray<float> Energies; // 0x188
	TArray<float> CurrentHeatmapForce; // 0x198
	UDataTable* EnergyDataTable; // 0x1a8
	UDataTable* EnergyEventTable; // 0x1b0
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct ULevel : UObject {
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
	bool bIsLightingScenario; // 0x1d0
	FGuid LevelBuildDataId; // 0x1d4
	UMapBuildDataRegistry* MapBuildData; // 0x1e8
	FIntVector LightBuildLevelOffset; // 0x1f0
	char bTextureStreamingRotationChanged : 1; // 0x1fc
	char bIsVisible : 1; // 0x1fc
	char bLocked : 1; // 0x1fc
	AWorldSettings* WorldSettings; // 0x300
	TArray<UAssetUserData*> AssetUserData; // 0x310
	TArray<TWeakObjectPtr<AActor>> RouteActorInitialize_ActorsToBeginPlay; // 0x330
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x140
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x60
	char bOverride_Period : 1; // 0x60
	float Period; // 0x64
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct UW_RootContainer_C : URootWidget {
	UNamedSlot* Root; // 0x318
};

struct UForceFeedbackComponent : USceneComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x300
	char bAutoDestroy : 1; // 0x308
	char bStopWhenOwnerDestroyed : 1; // 0x308
	char bLooping : 1; // 0x308
	char bOverrideAttenuation : 1; // 0x308
	float IntensityMultiplier; // 0x30c
	UForceFeedbackAttenuation* AttenuationSettings; // 0x310
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x318
	FScriptMulticastDelegate OnForceFeedbackFinished; // 0x3c0
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x188
	TArray<FName> InvertedAxis; // 0x1c8
};

struct URetainerBox : UContentWidget {
	int32_t Phase; // 0x130
	int32_t PhaseCount; // 0x134
	UMaterialInterface* EffectMaterial; // 0x138
	FName TextureParameter; // 0x140
};

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x3d0
};

struct UPlayerListEntry : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct AConanStaticEmitter : AEmitter {
	UParticleSystemComponent* ParticleSystemComponent; // 0x3d0
	char bDestroyOnSystemFinish : 1; // 0x3d8
	char bPostUpdateTickGroup : 1; // 0x3d8
	char bCurrentlyActive : 1; // 0x3d8
	FScriptMulticastDelegate OnParticleSpawn; // 0x3e0
	FScriptMulticastDelegate OnParticleBurst; // 0x3f0
	FScriptMulticastDelegate OnParticleDeath; // 0x400
	FScriptMulticastDelegate OnParticleCollide; // 0x410
};

struct UAIResource_Movement : UGameplayTaskResource {
	int32_t ManualResourceID; // 0x28
	uint8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UConanWidgetComponent : UWidgetComponent {
	EWidgetSpace Space; // 0x7c8
	UUserWidget* WidgetClass; // 0x7d0
	FIntPoint DrawSize; // 0x7d8
	bool bManuallyRedraw; // 0x7e0
	bool bRedrawRequested; // 0x7e1
	float RedrawTime; // 0x7e4
	FIntPoint CurrentDrawSize; // 0x7f0
	bool bDrawAtDesiredSize; // 0x7f8
	FVector2D Pivot; // 0x7fc
	bool bReceiveHardwareInput; // 0x804
	bool bWindowFocusable; // 0x805
	ULocalPlayer* ownerPlayer; // 0x808
	FLinearColor BackgroundColor; // 0x810
	FLinearColor TintColorAndOpacity; // 0x820
	float OpacityFromTexture; // 0x830
	EWidgetBlendMode BlendMode; // 0x834
	bool bIsTwoSided; // 0x835
	bool TickWhenOffscreen; // 0x836
	UUserWidget* Widget; // 0x838
	UBodySetup* BodySetup; // 0x860
	UMaterialInterface* TranslucentMaterial; // 0x868
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x870
	UMaterialInterface* OpaqueMaterial; // 0x878
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x880
	UMaterialInterface* MaskedMaterial; // 0x888
	UMaterialInterface* MaskedMaterial_OneSided; // 0x890
	UTextureRenderTarget2D* RenderTarget; // 0x898
	UMaterialInstanceDynamic* MaterialInstance; // 0x8a0
	bool bAddedToScreen; // 0x8a8
	bool bEditTimeUsable; // 0x8a9
	FName SharedLayerName; // 0x8b0
	int32_t LayerZOrder; // 0x8b8
	EWidgetGeometryMode GeometryMode; // 0x8bc
	float CylinderArcAngle; // 0x8c0
};

struct UConanGameViewportClient : UGameViewportClient {
	UConsole* ViewportConsole; // 0x38
	TArray<FDebugDisplayProperty> DebugProperties; // 0x40
	UWorld* World; // 0x90
	UGameInstance* GameInstance; // 0x98
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

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x300
};

struct UFollowersContextMenu : UContextMenuBase {
	FScriptMulticastDelegate SignalMenuClosed; // 0x398
	UFCButton* m_ButtonClass; // 0x3a8
	TArray<UFCButton*> m_ButtonList; // 0x3b0
	FSlateColor NormalHovered; // 0x3c0
	FSlateColor NormalColor; // 0x3e8
	FSlateColor NormalPressedHovered; // 0x410
	FSlateColor NormalPressed; // 0x438
	UNavigatableVerticalBox* m_MenuList; // 0x460
};

struct UW_PurgeFIFOMessageView_C : UFIFOMessageView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* FadeInOut; // 0x360
	UTextBlock* Message; // 0x368
	USoundConcurrency* NewVar_1; // 0x370
};

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UMovieSceneCapture : UObject {
	FCaptureProtocolID CaptureType; // 0x38
	UMovieSceneCaptureProtocolSettings* ProtocolSettings; // 0x40
	FMovieSceneCaptureSettings Settings; // 0x48
	bool bUseSeparateProcess; // 0x98
	bool bCloseEditorWhenCaptureStarts; // 0x99
	FString AdditionalCommandLineArguments; // 0xa0
	FString InheritedCommandLineArguments; // 0xb0
};

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UAimOffsetBlendSpace1D : UBlendSpace1D {
	bool bScaleAnimation; // 0x140
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x38
};

struct UPawnAction_BlueprintBase : UPawnAction {
	UPawnAction* ChildAction; // 0x28
	UPawnAction* ParentAction; // 0x30
	UPawnActionsComponent* OwnerComponent; // 0x38
	UObject* Instigator; // 0x40
	UBrainComponent* BrainComp; // 0x48
	char bAllowNewSameClassInstance : 1; // 0xb8
	char bReplaceActiveSameClassInstance : 1; // 0xb8
	char bShouldPauseMovement : 1; // 0xb8
	char bAlwaysNotifyOnFinished : 1; // 0xb8
};

struct UAimOffsetBlendSpace : UBlendSpace {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x140
};

struct UConanNewPathFollowingComponent : UConanPathFollowingComponent {
	float PathWidth; // 0x3a8
	float BreakAngle; // 0x3ac
	float AccelerationFactor; // 0x3b0
	float AccelerationMinSpeed; // 0x3b4
	float NavMeshSearchExtent; // 0x3b8
	float AvoidanceMaxTimeHorizonSeconds; // 0x3bc
	float AvoidanceMinTimeHorizonSeconds; // 0x3c0
	float AvoidanceMinDistance; // 0x3c4
	float AvoidanceSearchRadius; // 0x3c8
	float InitialAvoidanceYawSearchRange; // 0x3cc
	float AvoidanceMinSpeed; // 0x3d0
	float SecondsUntilFullAvoidanceYawSearchRange; // 0x3d4
	char AvoidPlayerCharacters : 1; // 0x3d8
	TArray<FPredictedObstacle> PredictedObstacles; // 0x3e0
	FPolarUtilityVector YawAngleWeights; // 0x3f0
	TArray<AActor*> m_CandidateObstacles; // 0x4b0
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UW_IngameLoadingScreen_C : UConanIngameLoadingScreen {
	UTextBlock* TextTemplate; // 0x520
};

struct USCS_Node : UObject {
	UObject* ComponentClass; // 0x28
	UActorComponent* ComponentTemplate; // 0x30
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
	FName VariableName; // 0x88
	FName AttachToName; // 0x90
	FName ParentComponentOrVariableName; // 0x98
	FName ParentComponentOwnerClassName; // 0xa0
	bool bIsParentComponentNative; // 0xa8
	TArray<USCS_Node*> ChildNodes; // 0xb0
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xc0
	FGuid VariableGuid; // 0xd0
	bool bIsFalseRoot; // 0xe0
	bool bIsNative; // 0xe1
	FName NativeComponentName; // 0xe8
	bool bVariableNameAutoGenerated; // 0xf0
	FName InternalVariableName; // 0xf8
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UAttributesBase : UWindowRoot {
	UWidget* m_MouseControlBox; // 0x398
	UProgressionSystem* m_ProgressionSystem; // 0x3a0
	USoundBase* GetPerkSound; // 0x3a8
	USoundBase* ResetPointsSound; // 0x3c8
	ECharIntStatID m_AttributeSelected; // 0x3e8
	bool m_CanBuyPerks; // 0x3e9
};

struct UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x198
	FGuid ExpressionGUID; // 0x1a0
	FName Group; // 0x1b0
};

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x3d8
	UDrawFrustumComponent* DrawFrustum; // 0x3e0
};

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x1a8
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x60
};

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x80
};

struct UFCButtonSubMenu_C : UUserWidget {
	FLinearColor ColorAndOpacity; // 0x120
	DelegateProperty ColorAndOpacityDelegate; // 0x130
	FSlateColor ForegroundColor; // 0x140
	DelegateProperty ForegroundColorDelegate; // 0x168
	FMargin Padding; // 0x178
	bool bSupportsKeyboardFocus; // 0x188
	bool bIsFocusable; // 0x189
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x190
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1a0
	bool bStopAction; // 0x1b0
	int32_t Priority; // 0x1b4
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1b8
	FMargin SafeZonePadding; // 0x1c8
	UWidgetTree* WidgetTree; // 0x1d8
	char bCanEverTick : 1; // 0x1e0
	char bCanEverPaint : 1; // 0x1e0
	char bCookedWidgetTree : 1; // 0x1e0
	UInputComponent* InputComponent; // 0x1e8
};

struct AConanBaseAIController : AAIController {
	bool NavMeshIgnoreComponentUpdate; // 0x528
	bool NavMeshIgnoreChildComponentUpdate; // 0x529
	UBehaviorTree* DeferredBTAsset; // 0x530
};

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct UPlayFabLeaderboardsAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x120
	UPlayFabJsonObject* RequestJsonObj; // 0x128
	UPlayFabJsonObject* ResponseJsonObj; // 0x130
};

struct UW_HUD_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UWidgetAnimation* HitConfirm; // 0x248
	UImage* Crosshair; // 0x250
	UImage* HitConfrim; // 0x258
	UW_HUD_LootLog_C* LootLog; // 0x260
	UW_HUD_NotificationList_C* NotificationList; // 0x268
	float LootLogPositionX; // 0x270
	float LootLogPositionY; // 0x274
};

struct UTimelineTemplate : UObject {
	float TimelineLength; // 0x28
	ETimelineLengthMode LengthMode; // 0x2c
	char bAutoPlay : 1; // 0x30
	char bLoop : 1; // 0x30
	char bReplicated : 1; // 0x30
	char bValidatedAsWired : 1; // 0x30
	char bIgnoreTimeDilation : 1; // 0x30
	TArray<FTTEventTrack> EventTracks; // 0x38
	TArray<FTTFloatTrack> FloatTracks; // 0x48
	TArray<FTTVectorTrack> VectorTracks; // 0x58
	TArray<FTTLinearColorTrack> LinearColorTracks; // 0x68
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x78
	FGuid TimelineGuid; // 0x88
};

struct UHighlightsSetVideoAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UNiagaraScript : UObject {
	TArray<char> ByteCode; // 0x28
	FNiagaraScriptConstantData ConstantData; // 0x38
	TArray<FNiagaraVariableInfo> Attributes; // 0x98
	TArray<FNiagaraDataSetProperties> EventReceivers; // 0xa8
	TArray<FNiagaraDataSetProperties> EventGenerators; // 0xb8
	FNiagaraScriptUsageInfo Usage; // 0xc8
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1c0
	FEnvDirection LineB; // 0x1e0
	EEnvTestDot TestMode; // 0x200
	bool bAbsoluteValue; // 0x201
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x408
};

struct UExilesJourneyInfoPanel : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x408
	char bEnabled : 1; // 0x418
	char bUnbound : 1; // 0x418
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x80
	float SliderMin; // 0x84
	float SliderMax; // 0x88
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x430
	float OcclusionMaskDarkness; // 0x434
	float OcclusionDepthRange; // 0x438
	FVector LightShaftOverrideDirection; // 0x43c
	float WholeSceneDynamicShadowRadius; // 0x448
	float DynamicShadowDistanceMovableLight; // 0x44c
	float DynamicShadowDistanceStationaryLight; // 0x450
	int32_t DynamicShadowCascades; // 0x454
	float CascadeDistributionExponent; // 0x458
	float CascadeTransitionFraction; // 0x45c
	float ShadowDistanceFadeoutFraction; // 0x460
	char bUseInsetShadowsForMovableObjects : 1; // 0x464
	int32_t FarShadowCascadeCount; // 0x468
	float FarShadowDistance; // 0x46c
	float DistanceFieldShadowDistance; // 0x470
	float LightSourceAngle; // 0x474
	float traceDistance; // 0x478
	FLightmassDirectionalLightSettings LightmassSettings; // 0x47c
	char bCastModulatedShadows : 1; // 0x48c
	FColor ModulatedShadowColor; // 0x490
	char bUsedAsAtmosphereSunLight : 1; // 0x494
};

struct USoundNodeQualityLevel : USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UInputBoxWidget : UWindowRoot {
	FScriptMulticastDelegate SignalInputUserActionPerformed; // 0x398
};

struct UW_SkippableMovie_C : USkippableMovieBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
	UWidgetAnimation* Anim_Fade; // 0x3d8
};

struct APurgeSpawnProbe : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x38
	FRawDistributionFloat SpawnPerUnit; // 0x40
	char bIgnoreSpawnRateWhenMoving : 1; // 0x78
	float MovementTolerance; // 0x7c
	float MaxFrameDistance; // 0x80
	char bIgnoreMovementAlongX : 1; // 0x84
	char bIgnoreMovementAlongY : 1; // 0x84
	char bIgnoreMovementAlongZ : 1; // 0x84
};

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
};

struct UServerMOTDBase : UWindowRoot {
	FText OriginalText; // 0x398
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x3d0
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
	FCaptureProtocolID CaptureType; // 0x38
	UMovieSceneCaptureProtocolSettings* ProtocolSettings; // 0x40
	FMovieSceneCaptureSettings Settings; // 0x48
	bool bUseSeparateProcess; // 0x98
	bool bCloseEditorWhenCaptureStarts; // 0x99
	FString AdditionalCommandLineArguments; // 0xa0
	FString InheritedCommandLineArguments; // 0xb0
};

struct USceneCaptureComponent2D : USceneCaptureComponent {
	ECameraProjectionMode ProjectionType; // 0x3e0
	float FOVAngle; // 0x3e4
	float OrthoWidth; // 0x3e8
	UTextureRenderTarget2D* TextureTarget; // 0x3f0
	ESceneCaptureSource CaptureSource; // 0x3f8
	ESceneCaptureCompositeMode CompositeMode; // 0x3f9
	FPostProcessSettings PostProcessSettings; // 0x400
	float PostProcessBlendWeight; // 0x8d0
	bool bUseCustomProjectionMatrix; // 0x8d4
	FMatrix CustomProjectionMatrix; // 0x8e0
	bool bEnableClipPlane; // 0x920
	FVector ClipPlaneBase; // 0x924
	FVector ClipPlaneNormal; // 0x930
};

struct URadialForceComponent : USceneComponent {
	float Radius; // 0x300
	ERadialImpulseFalloff Falloff; // 0x304
	float ImpulseStrength; // 0x308
	char bImpulseVelChange : 1; // 0x30c
	char bIgnoreOwningActor : 1; // 0x30c
	float ForceStrength; // 0x310
	float DestructibleDamage; // 0x314
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x318
};

struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x300
	FLinearColor FogInscatteringColor; // 0x304
	UTextureCube* InscatteringColorCubemap; // 0x318
	float InscatteringColorCubemapAngle; // 0x320
	FLinearColor InscatteringTextureTint; // 0x324
	float FullyDirectionalInscatteringColorDistance; // 0x334
	float NonDirectionalInscatteringColorDistance; // 0x338
	float DirectionalInscatteringExponent; // 0x33c
	float DirectionalInscatteringStartDistance; // 0x340
	FLinearColor DirectionalInscatteringColor; // 0x344
	float FogHeightFalloff; // 0x354
	float FogMaxOpacity; // 0x358
	float StartDistance; // 0x35c
	float FogCutoffDistance; // 0x360
	bool bEnableVolumetricFog; // 0x364
	float VolumetricFogScatteringDistribution; // 0x368
	FColor VolumetricFogAlbedo; // 0x36c
	FLinearColor VolumetricFogEmissive; // 0x370
	float VolumetricFogExtinctionScale; // 0x380
	float VolumetricFogDistance; // 0x384
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x388
};

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x380
};

struct UNiagaraMeshRendererProperties : UNiagaraEffectRendererProperties {
	UStaticMesh* ParticleMesh; // 0x30
};

struct UWorldPersistenceComponent : UPersistenceComponent {
	FScriptMulticastDelegate SignalPossibleThrallOwnersFound; // 0x160
	float MinDirtySaveDelay; // 0x254
};

struct UW_HUD_LootLogElement_C : ULootLogElementBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UWidgetAnimation* Animation_Fade; // 0x288
	UTexture2D* AddTexture_1; // 0x290
	UTexture2D* RemoveTexture_1; // 0x298
	TArray<UTexture2D*> ImageLayers; // 0x2a0
};

struct UInputSettings : UObject {
	uint32_t Version; // 0x28
	TArray<FInputAxisConfigEntry> AxisConfig; // 0x30
	char bAltEnterTogglesFullscreen : 1; // 0x40
	char bF11TogglesFullscreen : 1; // 0x40
	char bUseMouseForTouch : 1; // 0x40
	char bEnableMouseSmoothing : 1; // 0x40
	char bEnableFOVScaling : 1; // 0x40
	float FOVScale; // 0x44
	float DoubleClickTime; // 0x48
	bool bCaptureMouseOnLaunch; // 0x4c
	EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x4d
	bool bDefaultViewportMouseLock; // 0x4e
	EMouseLockMode DefaultViewportMouseLockMode; // 0x4f
	TArray<FInputActionKeyMapping> ActionMappings; // 0x50
	TArray<FInputActionKeyMapping> ActionMappings_PS4_Japan; // 0x60
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x70
	bool bAlwaysShowTouchInterface; // 0x80
	bool bShowConsoleOnFourFingerTap; // 0x81
	FStringAssetReference DefaultTouchInterface; // 0x88
	FKey ConsoleKey; // 0x98
	TArray<FKey> ConsoleKeys; // 0xb0
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x68
	TArray<FAdaptiveSystemSettings> AdaptiveSystemSettings; // 0xc0
	TArray<FAdaptiveSystemCullDistanceSizePair> AdaptiveSystemCullDistanceSizePairs; // 0xd0
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3d0
	USceneComponent* TransformComponent; // 0x3d8
	USplineComponent* RailSplineComponent; // 0x3e0
	USceneComponent* RailCameraMount; // 0x3e8
	USplineMeshComponent* PreviewMesh_Rail; // 0x3f0
	TArray<USplineMeshComponent*> PreviewRailMeshSegments; // 0x3f8
	UStaticMesh* PreviewRailStaticMesh; // 0x408
	UStaticMeshComponent* PreviewMesh_Mount; // 0x410
};

struct UNavCollision : UObject {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x78
	TArray<FNavCollisionBox> BoxCollision; // 0x88
	UNavArea* AreaClass; // 0x98
	UNavArea* OverrrideBoxCollisionAreaClass; // 0xa0
	char bIsDynamicObstacle : 1; // 0xa8
	char bGatherConvexGeometry : 1; // 0xa8
};

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
};

struct UConanBTTask_Wander : UConanBTTask_ConanMoveTo {
	float MaxWanderPath; // 0xc0
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x80
	float DistributeThreshold; // 0x84
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct UNavigatableWidgetBase : URootWidget {
	FScriptMulticastDelegate SignalEntrySelected; // 0x318
	FScriptMulticastDelegate SignalSelected; // 0x328
	FScriptMulticastDelegate SignalNavigateVerticaly; // 0x338
	FScriptMulticastDelegate SignalDeselected; // 0x348
	USoundBase* HoveredSound; // 0x358
	bool DisableContainerNavigation; // 0x380
};

struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x240
	ALevelSequenceActor* LevelSequenceActor; // 0x290
};

struct AStartupGameMode_C : AGameMode {
	USceneComponent* DefaultSceneRoot; // 0x4a0
};

struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0xa0
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xa8
	EAdditiveAnimationType AdditiveAnimType; // 0x148
	EAdditiveBasePoseType RefPoseType; // 0x149
	UAnimSequence* RefPoseSeq; // 0x150
	int32_t RefFrameIndex; // 0x158
	int32_t EncodingPkgVersion; // 0x15c
	FName RetargetSource; // 0x160
	EAnimInterpolationType Interpolation; // 0x168
	bool bEnableRootMotion; // 0x169
	ERootMotionRootLock RootMotionRootLock; // 0x16a
	bool bForceRootLock; // 0x16b
	bool bRootMotionSettingsCopiedFromMontage; // 0x16c
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x170
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0xb8
};

struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x360
	USkeleton* TargetSkeleton; // 0x370
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x378
	int32_t RootAnimNodeIndex; // 0x388
	TArray<int32_t> OrderedSavedPoseIndices; // 0x390
	TArray<FName> SyncGroupNames; // 0x3b8
};

struct ALevelSequenceActor : AActor {
	bool bAutoPlay; // 0x3d8
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3e0
	ULevelSequencePlayer* SequencePlayer; // 0x408
	FStringAssetReference LevelSequence; // 0x410
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x420
	UMovieSceneBindingOverrides* BindingOverrides; // 0x428
	FScriptMulticastDelegate SignalSequencePlayerReady; // 0x430
	ULevelSequenceBurnIn* BurnInInstance; // 0x440
};

struct URootWidget : UUserWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x80
	char MultiplyY : 1; // 0x80
	char MultiplyZ : 1; // 0x80
};

struct UTabButtonBase : UFCButton {
	int32_t SwitcherIndex; // 0xc20
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UActionTutorial : URootWidget {
	FText TutorialText; // 0x318
	float IconSize; // 0x330
	float WrapPreTextAt; // 0x334
	float WrapPostTextAt; // 0x338
	FName ActionMapping; // 0x340
	FSlateFontInfo TextFont; // 0x348
	FSlateColor TextColor; // 0x3b0
};

struct AQosBeaconClient : AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x3f0
	UNetConnection* BeaconConnection; // 0x3f8
	EBeaconConnectionState ConnectionState; // 0x400
};

struct UMaterialExpressionGraniteTextureObjectParameter : UMaterialExpressionGraniteTextureParameter {
	FName ParameterName; // 0x190
	FGuid ExpressionGUID; // 0x198
	FName Group; // 0x1a8
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct ABrushShape : ABrush {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UStreamingProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnLoaded; // 0x28
	TArray<UObject*> Assets; // 0x40
	TArray<UClass*> Classes; // 0x50
};

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UW_Friends_SessionInvites_C : USessionInviteGame {
	UW_NavigatableVerticalBox_C* SessionInviteEntryList; // 0x3c8
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UGraniteTexture : UObject {
	float StreamingBias; // 0x28
	UGraniteTileSet* TileSet; // 0x30
	FString StreamingTexture; // 0x38
	float LODBias; // 0x48
	FGraniteLightmapFlags lightMapFlags; // 0x4c
	FString GTSFileName; // 0xf0
	FGuid Guid; // 0x100
};

struct UW_RadialSBItemInfoPanel_C : UInventoryItemInfoPanel {
	UProgressBar* DurabilityBar; // 0x3b0
	UHorizontalBox* DurabilityContainer; // 0x3b8
	UW_ItemStatView_C* Modifier1; // 0x3c0
	UW_ItemStatView_C* Modifier2; // 0x3c8
	UW_ItemStatView_C* Modifier3; // 0x3d0
	UW_ItemStatView_C* Modifier4; // 0x3d8
	UW_ItemTemperatureBar_C* TemperatureBar; // 0x3e0
};

struct UEnergySourceComponent : UActorComponent {
	float TickInterval; // 0xf8
	TArray<FBaseEnergy> RegisterAsSourceForEnergies; // 0x100
	FScriptMulticastDelegate EnergySourceRegisteredDelegate; // 0x110
};

struct UContextMenuBase : UWindowRoot {
	FScriptMulticastDelegate SignalMenuClosed; // 0x398
	UFCButton* m_ButtonClass; // 0x3a8
	TArray<UFCButton*> m_ButtonList; // 0x3b0
	FSlateColor NormalHovered; // 0x3c0
	FSlateColor NormalColor; // 0x3e8
	FSlateColor NormalPressedHovered; // 0x410
	FSlateColor NormalPressed; // 0x438
	UNavigatableVerticalBox* m_MenuList; // 0x460
};

struct AEmitter : AActor {
	UParticleSystemComponent* ParticleSystemComponent; // 0x3d0
	char bDestroyOnSystemFinish : 1; // 0x3d8
	char bPostUpdateTickGroup : 1; // 0x3d8
	char bCurrentlyActive : 1; // 0x3d8
	FScriptMulticastDelegate OnParticleSpawn; // 0x3e0
	FScriptMulticastDelegate OnParticleBurst; // 0x3f0
	FScriptMulticastDelegate OnParticleDeath; // 0x400
	FScriptMulticastDelegate OnParticleCollide; // 0x410
};

struct UComboBoxString : UWidget {
	TArray<FString> DefaultOptions; // 0x118
	FString SelectedOption; // 0x128
	FComboBoxStyle WidgetStyle; // 0x138
	FTableRowStyle ItemStyle; // 0x588
	FMargin ContentPadding; // 0xca0
	float MaxListHeight; // 0xcb0
	bool HasDownArrow; // 0xcb4
	bool EnableGamepadNavigationMode; // 0xcb5
	FSlateFontInfo Font; // 0xcb8
	FSlateColor ForegroundColor; // 0xd20
	bool bIsFocusable; // 0xd48
	DelegateProperty OnGenerateWidgetEvent; // 0xd50
	FScriptMulticastDelegate OnSelectionChanged; // 0xd60
	FScriptMulticastDelegate OnOpening; // 0xd70
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x238
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x60
	FExpressionInput Input; // 0x68
	FExpressionInput OffsetFraction; // 0xa0
	FVector2D ConstInput; // 0xd8
};

struct UWindowRoot : URootWidget {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x60
	EVectorNoiseFunction NoiseFunction; // 0x98
	int32_t quality; // 0x9c
	char bTiling : 1; // 0xa0
	uint32_t TileSize; // 0xa4
};

struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x40
	UAnimCompress* DefaultCompressionAlgorithm; // 0x50
	AnimationCompressionFormat RotationCompressionFormat; // 0x58
	AnimationCompressionFormat TranslationCompressionFormat; // 0x59
	float AlternativeCompressionThreshold; // 0x5c
	bool ForceRecompression; // 0x60
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x61
	bool bForceBelowThreshold; // 0x62
	bool bFirstRecompressUsingCurrentOrDefault; // 0x63
	bool bRaiseMaxErrorToExisting; // 0x64
	bool bTryFixedBitwiseCompression; // 0x65
	bool bTryPerTrackBitwiseCompression; // 0x66
	bool bTryLinearKeyRemovalCompression; // 0x67
	bool bTryIntervalKeyRemoval; // 0x68
	bool bEnablePerformanceLog; // 0x69
	bool bStripAnimationDataOnDedicatedServer; // 0x6a
};

struct UBuildSystemComponent : UActorComponent {
	bool isBuilding; // 0xf8
	bool developerMode; // 0xf9
	ABuildableBase* CurrentBuildBrushClass; // 0x100
	UBuildingItem* SourceBuildItem; // 0x108
	EBuildingMode buildingMode; // 0x110
	TArray<FPotentialBuildGhost> ValidSocketResults; // 0x118
	int32_t CurrentSocketResultIndex; // 0x138
	ABuildableBase* BuildingBrushBase; // 0x140
	float PlacementGhostRadius; // 0x148
	ECollisionChannel PlacementGhostObjectType; // 0x14c
	ECollisionChannel PlacementGhostLineTraceChannel; // 0x14d
	UMaterialInterface* PlacementGhostMaterial; // 0x150
	UMaterialInterface* PlacementUpgradeGhostMaterial; // 0x158
	UMaterialInterface* PlacementInvalidGhostMaterial; // 0x160
	bool ShowBuildingSockets; // 0x168
	UTexture2D* IconDismantle; // 0x170
	UTexture2D* IconReturnToInventory; // 0x178
	float m_BuildRange; // 0x180
	UWidgetComponent* BuildingTextWidgetComponentClass; // 0x188
	UInstancedStaticMeshComponent* m_GhostBuildingComponent; // 0x190
	UInstancedStaticMeshComponent* m_GhostBuildingUpgradeablesComponent; // 0x198
	UInstancedStaticMeshComponent* m_InvalidGhostBuildingComponent; // 0x1a0
	TArray<FPotentialBuildGhost> m_GhostSocketIndexedResults; // 0x1a8
	TArray<FPotentialBuildGhost> m_GhostUpgradeSocketIndexedResults; // 0x1b8
	TArray<FPotentialBuildGhost> m_GhostInvalidSocketIndexedResults; // 0x1c8
	TArray<FPotentialBuildGhost> m_DistanceSortedQueuedPotentialGhosts; // 0x1d8
	TMap<UBuildingSocketComponent*, FBuildingModulesArray> m_SocketComponentToModules; // 0x268
	FVector m_LastGhostOrigin; // 0x2bc
	bool m_bDirtyGhosts; // 0x2c8
	bool m_bStillDirtyGhosts; // 0x2e4
	UWidgetComponent* m_BuildingTextWidgetComponent; // 0x3c0
};

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x140
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x80
	char bClampAlpha : 1; // 0xb8
};

struct AConanHUD : AHUD {
	FText LoadingScreenText; // 0x4b8
	bool AreNotificationsMuted; // 0x4d0
};

struct ULoadGuildIdCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
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

struct ULeaderboardFlushCallbackProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x118
	bool bAnimateHorizontally; // 0x11c
	bool bAnimateVertically; // 0x11d
	bool bAnimateOpacity; // 0x11e
	USlateBrushAsset* PieceImage; // 0x120
	FSlateBrush Image; // 0x128
};

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xd0
	FIntegralCurve BoolCurve; // 0xd8
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0xb8
};

struct AConanPlayerCameraManager : APlayerCameraManager {
	APlayerController* PCOwner; // 0x3d0
	USceneComponent* TransformComponent; // 0x3d8
	float DefaultFOV; // 0x3e8
	float DefaultOrthoWidth; // 0x3f0
	float DefaultAspectRatio; // 0x3f8
	FCameraCacheEntry CameraCache; // 0x440
	FCameraCacheEntry LastFrameCameraCache; // 0x970
	FTViewTarget ViewTarget; // 0xea0
	FTViewTarget PendingViewTarget; // 0x13e0
	TArray<UCameraModifier*> ModifierList; // 0x1938
	TArray<UCameraModifier*> DefaultModifiers; // 0x1948
	float FreeCamDistance; // 0x1958
	FVector FreeCamOffset; // 0x195c
	FVector ViewTargetOffset; // 0x1968
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x1988
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x1998
	UCameraAnimInst* AnimInstPool[0x8]; // 0x19a0
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x19e0
	TArray<UCameraAnimInst*> ActiveAnims; // 0x1a00
	TArray<UCameraAnimInst*> FreeAnims; // 0x1a10
	ACameraActor* AnimCameraActor; // 0x1a20
	char bIsOrthographic : 1; // 0x1a28
	char bUseClientSideCameraUpdates : 1; // 0x1a28
	float ViewPitchMin; // 0x1a2c
	float ViewPitchMax; // 0x1a30
	float ViewYawMin; // 0x1a34
	float ViewYawMax; // 0x1a38
	float ViewRollMin; // 0x1a3c
	float ViewRollMax; // 0x1a40
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xc8
};

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa0
};

struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UDeleteCharacterCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMaterialExpressionEyeAdaptation : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionParticleColor : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UBuildingReplicationComponent : UActorComponent {
	FScriptMulticastDelegate SignalReceivedBuildingHealthState; // 0xf8
	TArray<ABuildingBase*> m_PendingRepBuildings; // 0x180
	TArray<ABuildingBase*> m_PendingRepBuildingsStability; // 0x190
	TArray<ABuildingBase*> m_PendingRepBuildingsHealthAdd; // 0x1a0
	TArray<ABuildingBase*> m_PendingRepBuildingsHealthRemove; // 0x1b0
	TSet<ABuildingBase*> m_CurrentlyWatchedBuildingHealths; // 0x1c0
	TArray<FOrderedServerBuildingEventManager> m_DelayedBuildEvents; // 0x210
};

struct AGridPathAIController : AAIController {
	char bStopAILogicOnUnposses : 1; // 0x470
	char bLOSflag : 1; // 0x470
	char bSkipExtraLOSChecks : 1; // 0x470
	char bAllowStrafe : 1; // 0x470
	char bWantsPlayerState : 1; // 0x470
	char bSetControlRotationFromPawnOrientation : 1; // 0x470
	UPathFollowingComponent* PathFollowingComponent; // 0x478
	UBrainComponent* BrainComponent; // 0x480
	UAIPerceptionComponent* PerceptionComponent; // 0x488
	UPawnActionsComponent* ActionsComp; // 0x490
	UBlackboardComponent* Blackboard; // 0x498
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x4a0
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x4a8
	FScriptMulticastDelegate ReceiveMoveCompleted; // 0x4b0
};

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct ABoxReflectionCapture : AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x3d0
};

struct UBP_ConanGameInstance_C : UConanGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0xdc0
	FScriptMulticastDelegate SignalStreamingFinished; // 0xdc8
	FTimerHandle LoadingProgress; // 0xdd8
	float Timeout; // 0xde0
	UMessageBoxWidget* Message_Disconnecting; // 0xde8
	FBlueprintSessionResult JoiningSession; // 0xdf0
	APlayerController* JoiningPlayerController; // 0xed0
	bool NoConnectionError; // 0xed8
};

struct UGuildBoardBase : URootWidget {
	UGuildMembersBase* m_GuildMembersList; // 0x318
	UGuildLogBase* m_GuildLog; // 0x320
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1c0
};

struct UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x198
	FGuid ExpressionGUID; // 0x1a0
	FName Group; // 0x1b0
};

struct UParticleModuleLocationWorldOffset : UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x80
	float DistributeThreshold; // 0x84
};

struct UAudioCurveSourceComponent : UAudioComponent {
	FName CurveSourceBindingName; // 0x5b8
};

struct UW_NavigatableVerticalBox_C : UNavigatableVerticalBox {
	UVerticalBox* VerticalNavBox; // 0x3a8
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x50
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunction* MaterialFunction; // 0x60
	TArray<FFunctionExpressionInput> FunctionInputs; // 0x68
	TArray<FFunctionExpressionOutput> FunctionOutputs; // 0x78
};

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x3d0
};

struct USoundWaveProcedural : USoundWave {
	int32_t CompressionQuality; // 0x90
	char bLooping : 1; // 0x94
	char bStreaming : 1; // 0x94
	int32_t StreamingPriority; // 0x98
	char bMature : 1; // 0x9c
	char bManualWordWrap : 1; // 0x9c
	char bSingleLine : 1; // 0x9c
	char bVirtualizeWhenSilent : 1; // 0x9c
	ESoundGroup SoundGroup; // 0xa0
	FString SpokenText; // 0xa8
	float SubtitlePriority; // 0xb8
	float Volume; // 0xbc
	float Pitch; // 0xc0
	int32_t NumChannels; // 0xc4
	int32_t SampleRate; // 0xc8
	int32_t RawPCMDataSize; // 0xcc
	TArray<FSubtitleCue> Subtitles; // 0xd0
	TArray<FLocalizedSubtitle> LocalizedSubtitles; // 0xe0
	UCurveTable* Curves; // 0xf0
	UCurveTable* InternalCurves; // 0xf8
};

struct UDistributionFloatParticleParameter : UDistributionFloatParameterBase {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UW_LinkTwitchButton_C : UTwitchPatchNotesEntryView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378
	UWidgetAnimation* Deselect; // 0x380
	UWidgetAnimation* Select; // 0x388
	UBorder* Border_1; // 0x390
	UImage* Image_35; // 0x398
	FSlateBrush Temp_OldHighlight; // 0x3a0
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x60
	FExpressionInput Min; // 0x98
	FExpressionInput Max; // 0xd0
	EClampMode ClampMode; // 0x108
	float MinDefault; // 0x10c
	float MaxDefault; // 0x110
};

struct UPlayerInventoryView : UChestInventoryView {
	UItemInventory* m_BackpackInventory; // 0x388
	UItemInventory* m_ShortcutbarInventory; // 0x390
};

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x450
	TArray<UMaterialInterface*> OverrideMaterials; // 0x458
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x468
};

struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
	bool bNeedsSimulation; // 0x50
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xc0
};

struct UW_Friends_C : UFriendsGame {
	FPointerToUberGraphFrame UberGraphFrame; // 0x920
	UW_ButtonLarge_C* B_AddFriend; // 0x928
	UW_ButtonNormal_C* B_AddFriendAdd; // 0x930
	UW_ButtonNormal_C* B_AddFriendCancel; // 0x938
	UW_ButtonNormal_C* B_BlockFriendBlock; // 0x940
	UW_ButtonNormal_C* B_BlockFriendCancel; // 0x948
	UW_ButtonNormal_C* B_BlockPlayerBlock; // 0x950
	UW_ButtonNormal_C* B_BlockPlayerCancel; // 0x958
	UW_ButtonNormal_C* B_BlockSessionInviteBlock; // 0x960
	UW_ButtonLarge_C* B_Close; // 0x968
	UW_ButtonLarge_C* B_CopyFuncomId; // 0x970
	UW_ButtonLarge_C* B_CopyFuncomIdold; // 0x978
	UW_ButtonNormal_C* B_Cross; // 0x980
	UW_ButtonNormal_C* B_PasswordDialogBack; // 0x988
	UW_ButtonNormal_C* B_PasswordDialogOk; // 0x990
	UW_ButtonLarge_C* B_RefreshLists; // 0x998
	UW_ButtonLarge_C* B_RefreshListsOld; // 0x9a0
	UW_ButtonNormal_C* B_RemoveFriendCancel; // 0x9a8
	UW_ButtonNormal_C* B_RemoveFriendRemove; // 0x9b0
	UW_FriendTabButton_C* B_Submenu_Blocked; // 0x9b8
	UW_TabButton_C* B_Submenu_Blocked_old; // 0x9c0
	UW_FriendTabButton_C* B_Submenu_FriendList; // 0x9c8
	UW_TabButton_C* B_Submenu_FriendList_old; // 0x9d0
	UW_FriendTabButton_C* B_Submenu_FriendRequests; // 0x9d8
	UW_TabButton_C* B_Submenu_FriendRequests_old; // 0x9e0
	UW_FriendTabButton_C* B_Submenu_SessionInvites; // 0x9e8
	UW_TabButton_C* B_Submenu_SessionInvites_old; // 0x9f0
	UImage* BaseBorderImage; // 0x9f8
	UImage* BaseBorderImage2; // 0xa00
	UBorder* BlockFriendPopUp; // 0xa08
	UFCRichTextBlock* BlockFriendText; // 0xa10
	UBorder* BlockPlayerPopUp; // 0xa18
	UFCRichTextBlock* BlockPlayerText; // 0xa20
	UTextBlock* FriendListTitle; // 0xa28
	UTextBlock* FriendName; // 0xa30
	UBorder* FriendsMenu; // 0xa38
	UHorizontalBox* HB_PlayerInfoContainer; // 0xa40
	UImage* Image_4; // 0xa48
	UImage* Image_5; // 0xa50
	UImage* Image_6; // 0xa58
	UImage* Image_7; // 0xa60
	UImage* Image_382; // 0xa68
	UImage* Image_383; // 0xa70
	UW_HotkeyIcon_C* LeftNavigationIcon; // 0xa78
	UWidgetSwitcher* MenuSwitcher; // 0xa80
	UTextBlock* Platform; // 0xa88
	UBorder* RemoveFriendPopUp; // 0xa90
	UFCRichTextBlock* RemoveFriendText; // 0xa98
	UW_HotkeyIcon_C* RightNavigationIcon; // 0xaa0
	UTextBlock* Status; // 0xaa8
	UW_FCEditableTextBlock_C* T_AddFriendFuncomId; // 0xab0
	UW_FCEditableTextBlock_C* T_PasswordDialogPassword; // 0xab8
	UFCRichTextBlock* T_PlayerFuncomId; // 0xac0
	UImage* TitleImage; // 0xac8
	UImage* TitleImage2; // 0xad0
	UImage* TopBorderImage; // 0xad8
	UImage* TopBorderImage2; // 0xae0
	UBorder* W_AddFriend; // 0xae8
	UW_Friends_BlockedPlayers_C* W_Friends_BlockedPlayers; // 0xaf0
	UW_Friends_FriendList_C* W_Friends_FriendList; // 0xaf8
	UW_Friends_FriendRequests_C* W_Friends_FriendRequests; // 0xb00
	UW_Friends_SessionInvites_C* W_Friends_SessionInvites; // 0xb08
	URootWidget* ActiveListWidget; // 0xb10
};

struct UGameMapsSettings : UObject {
	FStringAssetReference EditorStartupMap; // 0x28
	FString LocalMapOptions; // 0x38
	FStringAssetReference TransitionMap; // 0x48
	bool bUseSplitscreen; // 0x58
	ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x59
	EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x5a
	bool bOffsetPlayerGamepadIds; // 0x5b
	FStringClassReference GameInstanceClass; // 0x60
	FStringAssetReference GameDefaultMap; // 0x70
	FStringAssetReference ServerDefaultMap; // 0x80
	FStringClassReference GlobalDefaultGameMode; // 0x90
	FStringClassReference GlobalDefaultServerGameMode; // 0xa0
	TArray<FGameModeName> GameModeMapPrefixes; // 0xb0
	TArray<FGameModeName> GameModeClassAliases; // 0xc0
};

struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	BeamModifierType ModifierType; // 0x30
	FBeamModifierOptions PositionOptions; // 0x34
	FRawDistributionVector Position; // 0x38
	FBeamModifierOptions TangentOptions; // 0x88
	FRawDistributionVector Tangent; // 0x90
	char bAbsoluteTangent : 1; // 0xe0
	FBeamModifierOptions StrengthOptions; // 0xe4
	FRawDistributionFloat Strength; // 0xe8
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct UInventoryGridSlotViewBase : URootWidget {
	FSlateBrush BackgrundBrush; // 0x318
	FLinearColor BackgrundColor; // 0x3a8
	float IconSize; // 0x3b8
	FMargin IconPadding; // 0x3bc
	FMargin IconSlotPadding; // 0x3cc
	bool m_HideWhenEmpty; // 0x3dc
	UWidgetAnimation* AnimationSelect; // 0x3e0
	UWidgetAnimation* AnimationMouseOver; // 0x3e8
	UInventoryIconViewBase* IconView; // 0x3f0
	USoundCue* DropSound; // 0x3f8
	FSlateSound HoveredSlateSound; // 0x400
	UNamedSlot* m_IconSlot; // 0x418
	USizeBox* m_SizeBox; // 0x630
};

struct UW_DropDownText_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UTextBlock* Label; // 0x248
};

struct UInventoryItemActionBar : URootWidget {
	TArray<UFCButton*> m_ButtonListLeft; // 0x330
	TArray<UFCButton*> m_ButtonListRight; // 0x340
	TArray<EInventoryActionShortcuts> m_ButtonListShortcutsLeft; // 0x350
	TArray<EInventoryActionShortcuts> m_ButtonListShortcutsRight; // 0x360
	UFCButton* m_MoreButton; // 0x370
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FText DisplayName; // 0x130
};

struct ASceneCaptureWater : ASceneCapture {
	USceneCaptureComponentWater* CaptureComponentWater; // 0x3d8
	UBoxComponent* DrawBox; // 0x3e0
};

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x6c0
	float Intensity; // 0x6c8
	float Tightness; // 0x6cc
	char bPreviewVectorField : 1; // 0x6d0
};

struct USubmixEffectTestPreset : USoundEffectSubmixPreset {
	FSubmixEffectTestSettings Settings; // 0x40
};

struct AFunctionalTest : AActor {
	UBillboardComponent* SpriteComponent; // 0x3d0
	char bIsEnabled : 1; // 0x3d8
	char bWarningsAsErrors : 1; // 0x3d8
	FString Description; // 0x3e0
	AActor* ObservationPoint; // 0x3f0
	FRandomStream RandomNumbersStream; // 0x3f8
	EFunctionalTestResult Result; // 0x400
	float PreparationTimeLimit; // 0x404
	float TimeLimit; // 0x408
	FText TimesUpMessage; // 0x410
	EFunctionalTestResult TimesUpResult; // 0x428
	FScriptMulticastDelegate OnTestStart; // 0x430
	FScriptMulticastDelegate OnTestFinished; // 0x440
	TArray<AActor*> AutoDestroyActors; // 0x450
	bool bIsRunning; // 0x4d0
};

struct UW_MainMenu_MainMenu_C : UMainMenuBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570
	UW_ButtonNormal_C* B_ContinueMapSelectCancel; // 0x578
	UW_ButtonNormal_C* B_ContinueMapSelectConfirm; // 0x580
	UW_MainMenuButton_C* B_Credits; // 0x588
	UW_MainMenuButton_C* B_Exit; // 0x590
	UW_MainMenuButton_C* B_FriendList; // 0x598
	UW_MainMenuButton_C* B_GetFullGame; // 0x5a0
	UW_MainMenuButton_C* B_Help; // 0x5a8
	UW_MainMenuButton_C* B_HostLocal; // 0x5b0
	UW_MainMenuButton_C* B_Mods; // 0x5b8
	UW_MainMenuButton_C* B_Options; // 0x5c0
	UW_MainMenuButton_C* B_PCHelp; // 0x5c8
	UW_MainMenuButton_C* B_PlayOnline; // 0x5d0
	UW_MainMenuButton_C* B_ServerRental; // 0x5d8
	UW_MainMenuButton_C* B_StartTrial; // 0x5e0
	UW_MainMenuButton_C* B_Sub_Continue; // 0x5e8
	UW_MainMenuButton_C* B_Sub_NewGame; // 0x5f0
	UW_FCComboBoxString_C* CBS_ContinueMapSelect; // 0x5f8
	UBorder* ContinueMapSelectDialog; // 0x600
	UTextBlock* DWInfo; // 0x608
	UHorizontalBox* HB_PlayerInfoContainer; // 0x610
	UImage* Image_1; // 0x618
	UW_TooltipOverlay_C* KeyNavAnchor; // 0x620
	UW_PatchNotesView_C* PatchNotesView; // 0x628
	UVerticalBox* SiglePlayerMenu; // 0x630
	UCanvasPanel* SiptahBGContainer; // 0x638
	UTextBlock* T_OfflineMode; // 0x640
	UW_FCEditableTextBlock_C* T_PlayerNickname; // 0x648
	UCanvasPanel* Temp_OldBGContainer; // 0x650
	UW_UpsellButton_C* UpsellButton; // 0x658
	UImage* VideoPlayer; // 0x660
	FName DefaultMap; // 0x668
	UW_Settings_C* Settings; // 0x670
	FText userName; // 0x678
	bool CanContinue; // 0x690
	bool ViewingCredits; // 0x691
	UMediaPlayer* MediaPlayer; // 0x698
	TArray<FString> UnlocalizedMapNames; // 0x6a0
	FString ChosenStartMap; // 0x6b0
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct AConanLevelScriptActor : ADWLevelScriptActor {
	char bInputEnabled : 1; // 0x3d0
};

struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue CircleRadius; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb0
	FAIDataProviderIntValue NumberOfPoints; // 0xe0
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x110
	FEnvDirection ArcDirection; // 0x118
	FAIDataProviderFloatValue ArcAngle; // 0x138
	float AngleRadians; // 0x168
	UEnvQueryContext* CircleCenter; // 0x170
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x178
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x180
	FEnvTraceData TraceData; // 0x1b0
	char bDefineArc : 1; // 0x1e0
};

struct UGraniteCookedSettings : UObject {
	TArray<FName> DeletedTexturesInCookedBuild; // 0x28
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0xb8
	char bFireEventsWhenBackwards : 1; // 0xb8
	TArray<UMovieSceneSection*> Sections; // 0xc0
};

struct UCompositionGraphCaptureSettings : UMovieSceneCaptureProtocolSettings {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x28
	bool bCaptureFramesInHDR; // 0x38
	int32_t HDRCompressionQuality; // 0x3c
	EHDRCaptureGamut CaptureGamut; // 0x40
	FStringAssetReference PostProcessingMaterial; // 0x48
};

struct AQosBeaconHost : AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x3d0
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x3e0
	TArray<AOnlineBeaconClient*> ClientActors; // 0x3e8
};

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UFeatInventory : UItemInventory {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<DelegateProperty> ClickedBannerDelegates; // 0x40
	TArray<DelegateProperty> ClosedAdDelegates; // 0x50
};

struct UQuadtreeComponent : USceneComponent {
	FName TreeName; // 0x308
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FScriptMulticastDelegate OnFinish; // 0x68
};

struct UParticleSpriteEmitter : UParticleEmitter {
	FName EmitterName; // 0x28
	int32_t SubUVDataOffset; // 0x30
	EEmitterRenderMode EmitterRenderMode; // 0x34
	TArray<UParticleLODLevel*> LODLevels; // 0x38
	char ConvertedModules : 1; // 0x48
	int32_t PeakActiveParticles; // 0x4c
	int32_t InitialAllocationCount; // 0x50
	float MediumDetailSpawnRateScale; // 0x54
	float QualityLevelSpawnRateScale; // 0x58
	EDetailMode DetailMode; // 0x5c
	char bIsSoloing : 1; // 0x60
	char bCookedOut : 1; // 0x60
	char bDisabledLODsKeepEmitterAlive : 1; // 0x60
	char bDisableWhenInsignficant : 1; // 0x60
	EParticleSignificanceLevel SignificanceLevel; // 0x64
};

struct AConanPlayerController : ADWPlayerController {
	FScriptMulticastDelegate SignalCharacterTransferError; // 0x6f8
	FScriptMulticastDelegate SignalSelectionChanged; // 0x708
	FScriptMulticastDelegate SignalItemMarkedForMove; // 0x718
	FScriptMulticastDelegate SignalSelectionRequestMoveItem; // 0x728
	UDataTable* BlueprintCommandsDataTable; // 0x738
	FScriptMulticastDelegate SignalPetGrowthDataReceived; // 0x7c0
	UNpcDebugWindow* NpcDebugWidgetClass; // 0x850
	bool m_SpawnComplete; // 0x858
	FName CharacterRecustomizationModuleName; // 0x860
	bool m_ClientWorldLoaded; // 0x86a
	FScriptMulticastDelegate EventTeleportDone; // 0x870
	FScriptMulticastDelegate EventSpawnTeleportDone; // 0x880
	FScriptMulticastDelegate EventLevelStreamingFinished; // 0x890
	TArray<FVector> OverridenStreamingLocations; // 0x8a0
	int32_t CachedConnectionPing; // 0x8c0
	int32_t DebugHudBitMask; // 0x8c4
	FScriptMulticastDelegate DebugHudBitMaskUpdated; // 0x8c8
	FScriptMulticastDelegate EventClientReady; // 0x9a0
	FScriptMulticastDelegate SignalCharacterReady; // 0x9b0
	FScriptMulticastDelegate SignalCharacterReadyClient; // 0x9c0
	FScriptMulticastDelegate SignalInventoryReplicated; // 0x9d0
	FScriptMulticastDelegate SignalFloatingNamesChanged; // 0x9e0
	FScriptMulticastDelegate SignalClientReceivePurgeData; // 0x9f0
	TArray<UCameraComponent*> m_OwnedCameraComponents; // 0xa00
	AActor* InitialPlayerStart; // 0xa10
	bool CanBypassBuildingBlockerVolumes; // 0xa18
	FString UserIDFromURLOptions; // 0xa60
	FScriptMulticastDelegate SignalCheatStatus; // 0xa70
	bool bDebugIgnoreBuildingCosts; // 0xa80
	float NetConnectionLostTimeout; // 0xa84
	float NetConnectionLostForcedKickTimeout; // 0xa88
	FScriptMulticastDelegate SignalPlayerListDataReady; // 0xa90
	FScriptMulticastDelegate SignalBannedPlayerListReady; // 0xaa0
	FScriptMulticastDelegate SignalWhiteListChanged; // 0xab0
	UConanCheatManager* ConanCheatManager; // 0xac0
	bool AllowInteraction; // 0xac8
	ACorpseBase* CorpseToFreeze; // 0xad0
	UMessageBoxWidget* PullFollowerMessage; // 0xb70
	TArray<TWeakObjectPtr<AConanCharacter>> ForcedNetRelevantActors; // 0xb78
	TArray<AConanCharacter*> m_NearbyNPCs; // 0xd18
	TSet<FPendingStreamOperation> m_PendingNPCStreamOperations; // 0xd28
	TArray<FPendingInventoryUpdate> m_PendingInventoryRequests; // 0xd78
	TMap<int32_t, FPendingInventoryUnregistration> m_PendingInventoryUnregisterRequests; // 0xd88
	TMap<int32_t, UGameItem*> m_UniqueIDToInventoryItemMap; // 0xdf8
	bool m_bShowDebugText; // 0xea8
	bool m_IsAdmin; // 0xea9
	FPropertyDestructionHistory m_PropertyDestructionHistory; // 0xf50
	FString m_RandomDLCKey; // 0x10a0
	FString m_RandomRewardsKey; // 0x10b0
	bool m_HasRequestedDLCs; // 0x10c0
	bool m_HasRequestedRewards; // 0x10c1
	bool m_HasOngoingDLCRequest; // 0x10c2
	bool m_HasOngoingRewardsRequest; // 0x10c3
	TSet<FName> m_OwnedDLCs; // 0x10c8
	TSet<FName> m_OwnedRewards; // 0x1118
	URandomBuildingGeneratorProxy* m_RandomBuildingGenerator; // 0x1270
	UBuildingStressTesterProxy* m_BuildingStressTester; // 0x1278
	UBuildingRecordingRebuilderProxy* m_BuildingRecordingRebuilder; // 0x1280
	UTargetingSystemComponent* TargetingComponent; // 0x1290
	UBuildingReplicationComponent* m_BuildingReplicationComponent; // 0x1298
};

struct URadialShortcutBar : UWindowRoot {
	UShortcutIconBase* ItemIconSlotClass; // 0x398
	UTexture2D* CancelIcon; // 0x3a0
	UTexture2D* BackIcon; // 0x3a8
	UShortcutBarInventory* m_Inventory; // 0x3b0
};

struct UInitHighlights : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x3e0
};

struct UPartyGameState : UObject {
	UScriptStruct* PartyStateRefDef; // 0x28
	FUniqueNetIdRepl OwningUserId; // 0x38
	bool bDebugAcceptingMembers; // 0x168
	bool bStayWithPartyOnDisconnect; // 0x181
	UPartyMemberState* PartyMemberStateClass; // 0x188
	APartyBeaconClient* ReservationBeaconClientClass; // 0x2c0
	APartyBeaconClient* ReservationBeaconClient; // 0x2c8
};

struct UAudioSettings : UDeveloperSettings {
	FStringAssetReference DefaultSoundClassName; // 0x38
	FStringAssetReference DefaultSoundConcurrencyName; // 0x48
	FStringAssetReference DefaultBaseSoundMix; // 0x58
	FStringAssetReference VoiPSoundClass; // 0x68
	float LowPassFilterResonance; // 0x78
	int32_t MaximumConcurrentStreams; // 0x7c
	TArray<FAudioQualitySettings> QualityLevels; // 0x80
	char bAllowVirtualizedSounds : 1; // 0x90
	char bDisableMasterEQ : 1; // 0x90
	char bDisableMasterReverb : 1; // 0x90
	char bAllowCenterChannel3DPanning : 1; // 0x90
	FString DialogueFilenameFormat; // 0x98
};

struct UBuffList : UWindowRoot {
	FMargin ExpandedHealthbarOffset; // 0x398
	TWeakObjectPtr<AConanCharacter> m_Owner; // 0x3a8
};

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x60
	FExpressionInput PreviousFrame; // 0x98
};

struct UAsyncSpawnNPCProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate SpawnSucceeded; // 0x28
	FScriptMulticastDelegate SpawnFailed; // 0x38
	FName SpawnTableId; // 0x50
	FTransform SpawnTransform; // 0x60
	bool bOverrideDefaultLOD; // 0x90
	bool bForceLOD0; // 0x91
	bool IsWeightedTable; // 0x9c
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
};

struct UW_ItemStatView_C : UItemStatView {
	UTextBlock* Description; // 0x340
	UImage* Icon; // 0x348
	UTextBlock* Name; // 0x350
};

struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x40
};

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x3d0
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x3e0
	TArray<AOnlineBeaconClient*> ClientActors; // 0x3e8
};

struct ULandscapeInfo : UObject {
	ALandscape* LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TSet<ALandscapeStreamingProxy*> Proxies; // 0xc0
};

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct ABuildingBase : ABuildableBase {
	UInstancedBuildingComponent* InstancedBuildingMesh; // 0x568
	bool IsFoundation; // 0x570
	bool IsPillar; // 0x571
	bool IsPurgeTarget; // 0x572
	float ShelterTemperature; // 0x574
	int32_t Stability; // 0x578
	FGameplayTagContainer MyBuildingTags; // 0x580
	FGameplayTagContainer CanUpgradeFromTagList; // 0x5a0
	TArray<UInstancedBuildingComponent*> m_InstancedBuildingMeshes; // 0x5c0
	TMap<uint64_t, ABuildingBase*> m_Buildings; // 0x5d0
	bool m_IsLoading; // 0x620
	ABuildingBase* m_NextBuilding; // 0x630
	ABuildingBase* m_PrevBuilding; // 0x638
	uint64_t m_BuildingKey; // 0x640
	int32_t m_NumTotalPieces; // 0x658
	TMap<UNetConnection*, bool> m_InitialReplicationCompletedForConnection; // 0x660
	FOrderedServerBuildingEventManager m_BuildingEventManager; // 0x6c8
	TArray<AController*> m_MonitoringPlayers; // 0x890
	TSet<AController*> m_PlayersWhoNeedStability; // 0x8a0
	UUniqueID* BuildingUniqueID; // 0x8f8
};

struct USizeBox : UContentWidget {
	char bOverride_WidthOverride : 1; // 0x130
	char bOverride_HeightOverride : 1; // 0x130
	char bOverride_MinDesiredWidth : 1; // 0x130
	char bOverride_MinDesiredHeight : 1; // 0x130
	char bOverride_MaxDesiredWidth : 1; // 0x130
	char bOverride_MaxDesiredHeight : 1; // 0x130
	char bOverride_MaxAspectRatio : 1; // 0x130
	float WidthOverride; // 0x134
	float HeightOverride; // 0x138
	float MinDesiredWidth; // 0x13c
	float MinDesiredHeight; // 0x140
	float MaxDesiredWidth; // 0x144
	float MaxDesiredHeight; // 0x148
	float MaxAspectRatio; // 0x14c
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

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x60
	FExpressionInput StaticIndirect; // 0x98
	FExpressionInput DynamicIndirect; // 0xd0
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x80
	char bEmitterTime : 1; // 0xb8
};

struct UMaterialExpressionLightmapUVs : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UInventoryGridSlotView_C : UInventoryGridSlotViewBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x660
	UWidgetAnimation* AnimSelect; // 0x668
	UWidgetAnimation* AnimMouseOver; // 0x670
	UNamedSlot* IconSlot; // 0x678
	UImage* SlotImage; // 0x680
};

struct UBorder : UContentWidget {
	FLinearColor ContentColorAndOpacity; // 0x130
	DelegateProperty ContentColorAndOpacityDelegate; // 0x140
	FMargin Padding; // 0x150
	EHorizontalAlignment HorizontalAlignment; // 0x160
	EVerticalAlignment VerticalAlignment; // 0x161
	FSlateBrush Background; // 0x168
	DelegateProperty BackgroundDelegate; // 0x1f8
	FLinearColor BrushColor; // 0x208
	DelegateProperty BrushColorDelegate; // 0x218
	FVector2D DesiredSizeScale; // 0x228
	bool bShowEffectWhenDisabled; // 0x230
	DelegateProperty OnMouseButtonDownEvent; // 0x238
	DelegateProperty OnMouseButtonUpEvent; // 0x248
	DelegateProperty OnMouseMoveEvent; // 0x258
	DelegateProperty OnMouseDoubleClickEvent; // 0x268
	USlateBrushAsset* Brush; // 0x288
};

struct UProgressBar : UWidget {
	FProgressBarStyle WidgetStyle; // 0x118
	USlateWidgetStyleAsset* Style; // 0x2d0
	USlateBrushAsset* BackgroundImage; // 0x2d8
	USlateBrushAsset* FillImage; // 0x2e0
	USlateBrushAsset* MarqueeImage; // 0x2e8
	float Percent; // 0x2f0
	EProgressBarFillType BarFillType; // 0x2f4
	bool bIsMarquee; // 0x2f5
	DelegateProperty PercentDelegate; // 0x2f8
	FLinearColor FillColorAndOpacity; // 0x308
	DelegateProperty FillColorAndOpacityDelegate; // 0x318
};

struct UEQSRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct UPathPoints : UObject {
	TArray<FVector> PathPoints; // 0x28
};

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x60
	FExpressionInput Inputs[0x3]; // 0x98
	FExpressionInput XBoxOne; // 0x140
};

struct UMaterialInstanceDynamic : UMaterialInstance {
	UPhysicalMaterial* PhysMaterial; // 0x70
	UMaterialInterface* Parent; // 0x78
	char bHasStaticPermutationResource : 1; // 0x80
	char bOverrideSubsurfaceProfile : 1; // 0x80
	TArray<FFontParameterValue> FontParameterValues; // 0x88
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x98
	TArray<FTextureParameterValue> TextureParameterValues; // 0xa8
	TArray<FGraniteTextureParameterValue> GraniteTextureParameterValues; // 0xb8
	TArray<FString> GraniteErrors; // 0xc8
	TArray<FVectorParameterValue> VectorParameterValues; // 0xd8
	bool bOverrideBaseProperties; // 0xe8
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xec
};

struct ADefaultPhysicsVolume : APhysicsVolume {
	float TerminalVelocity; // 0x408
	int32_t Priority; // 0x40c
	float FluidFriction; // 0x410
	char bWaterVolume : 1; // 0x414
	char bPhysicsOnContact : 1; // 0x414
};

struct UAddMemberBase : UWindowRoot {
	UUserWidget* ListEntryClass; // 0x3e0
};

struct UExilesJourneyChapter : URootWidget {
	FText Header; // 0x318
	JourneyChapter chapter; // 0x330
};

struct UInventoryItemInfoPanel : URootWidget {
	UGameItem* m_GameItem; // 0x3a0
};

struct UExilesJourneyTrial : UWindowRoot {
	UUserWidget* m_JourneyStepClass; // 0x3a8
};

struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct UEditableLabeledSlider : URootWidget {
	float Value; // 0x318
	float MinValue; // 0x31c
	float MaxValue; // 0x320
	ESliderStepType SliderStepType; // 0x324
	float StepValue; // 0x328
	int32_t MinFractionalDigits; // 0x32c
	int32_t MaxFractionalDigits; // 0x330
	float DisplayValueScale; // 0x334
	FSliderStyle SliderWidgetStyle; // 0x338
	FEditableTextBoxStyle TextWidgetStyle; // 0x588
	USoundBase* HoveredSound; // 0xdf8
	FScriptMulticastDelegate SignalSliderRealValueChanged; // 0xe18
};

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x33760
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FScriptMulticastDelegate Success; // 0x68
	FScriptMulticastDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct AInteractiveFoliageActor : AStaticMeshActor {
	UCapsuleComponent* CapsuleComponent; // 0x3e0
	FVector TouchingActorEntryPosition; // 0x3e8
	FVector FoliageVelocity; // 0x3f4
	FVector FoliageForce; // 0x400
	FVector FoliagePosition; // 0x40c
	float FoliageDamageImpulseScale; // 0x418
	float FoliageTouchImpulseScale; // 0x41c
	float FoliageStiffness; // 0x420
	float FoliageStiffnessQuadratic; // 0x424
	float FoliageDamping; // 0x428
	float MaxDamageImpulse; // 0x42c
	float MaxTouchImpulse; // 0x430
	float MaxForce; // 0x434
	float Mass; // 0x438
};

struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xf8
	FVector LastRemoteNoisePosition; // 0xfc
	float NoiseLifetime; // 0x108
	float LastRemoteNoiseVolume; // 0x10c
	float LastRemoteNoiseTime; // 0x110
	float LastLocalNoiseVolume; // 0x114
	float LastLocalNoiseTime; // 0x118
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0xd0
	UPawnAction* RecentActionCopy; // 0xd8
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xe0
};

struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30
	bool bAffectsTranslucency; // 0x31
	bool bPreviewLightRadius; // 0x32
	float SpawnFraction; // 0x34
	FRawDistributionVector ColorScaleOverLife; // 0x38
	FRawDistributionFloat BrightnessOverLife; // 0x88
	FRawDistributionFloat RadiusScale; // 0xc0
	FRawDistributionFloat LightExponent; // 0xf8
	FLightingChannels LightingChannels; // 0x130
	float VolumetricScatteringIntensity; // 0x134
	bool bHighQualityLights; // 0x138
	bool bShadowCastingLights; // 0x139
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
	FName BranchParentName; // 0x58
	FRawDistributionFloat Distance; // 0x60
	EBeamTaperMethod TaperMethod; // 0x98
	FRawDistributionFloat TaperFactor; // 0xa0
	FRawDistributionFloat TaperScale; // 0xd8
	char RenderGeometry : 1; // 0x110
	char RenderDirectLine : 1; // 0x110
	char RenderLines : 1; // 0x110
	char RenderTessellation : 1; // 0x110
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

struct UNiagaraRibbonRendererProperties : UNiagaraEffectRendererProperties {
	FName Dummy; // 0x28
};

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
};

struct UCheckBox : UContentWidget {
	ECheckBoxState CheckedState; // 0x130
	DelegateProperty CheckedStateDelegate; // 0x138
	FCheckBoxStyle WidgetStyle; // 0x148
	USlateWidgetStyleAsset* Style; // 0x728
	USlateBrushAsset* UncheckedImage; // 0x730
	USlateBrushAsset* UncheckedHoveredImage; // 0x738
	USlateBrushAsset* UncheckedPressedImage; // 0x740
	USlateBrushAsset* CheckedImage; // 0x748
	USlateBrushAsset* CheckedHoveredImage; // 0x750
	USlateBrushAsset* CheckedPressedImage; // 0x758
	USlateBrushAsset* UndeterminedImage; // 0x760
	USlateBrushAsset* UndeterminedHoveredImage; // 0x768
	USlateBrushAsset* UndeterminedPressedImage; // 0x770
	EHorizontalAlignment HorizontalAlignment; // 0x778
	FMargin Padding; // 0x77c
	FSlateColor BorderBackgroundColor; // 0x790
	bool IsFocusable; // 0x7b8
	FScriptMulticastDelegate OnCheckStateChanged; // 0x7c0
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct USubtitleRenderer : UWindowRoot {
	USubtitleEntryView* EntryViewClass; // 0x398
	TArray<USubtitleEntryView*> m_PendingEntryList; // 0x3a0
	USubtitleEntryView* m_ActiveEntry; // 0x3b0
};

struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x308
	float LDMaxDrawDistance; // 0x30c
	float CachedMaxDrawDistance; // 0x310
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x314
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x315
	char bAlwaysCreatePhysicsState : 1; // 0x318
	char bGenerateOverlapEvents : 1; // 0x318
	char bForceGenerateOverlapEvents : 1; // 0x318
	char bMultiBodyOverlap : 1; // 0x318
	char bCheckAsyncSceneOnMove : 1; // 0x318
	char bTraceComplexOnMove : 1; // 0x318
	char bReturnMaterialOnMove : 1; // 0x318
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x318
	char bAllowCullDistanceVolume : 1; // 0x318
	char bHasMotionBlurVelocityMeshes : 1; // 0x318
	char bVisibleInReflectionCaptures : 1; // 0x318
	char bRenderInMainPass : 1; // 0x318
	char bRenderInMono : 1; // 0x318
	char bReceivesDecals : 1; // 0x318
	char bOwnerNoSee : 1; // 0x318
	char bOnlyOwnerSee : 1; // 0x318
	char bTreatAsBackgroundForOcclusion : 1; // 0x318
	char bHeightOutputReferenceSand : 1; // 0x318
	char bHeightOutputReferenceWater : 1; // 0x318
	char bHeightOutputIgnoreSand : 1; // 0x318
	char bHeightOutputIgnoreWater : 1; // 0x318
	char bCullFromDistantShadowCascades : 1; // 0x318
	char bUseAsOccluder : 1; // 0x318
	char bSelectable : 1; // 0x318
	char bForceMipStreaming : 1; // 0x318
	char bHasPerInstanceHitProxies : 1; // 0x318
	char CastShadow : 1; // 0x318
	char bAffectDynamicIndirectLighting : 1; // 0x318
	char bAffectDistanceFieldLighting : 1; // 0x318
	char bCastDynamicShadow : 1; // 0x318
	char bCastStaticShadow : 1; // 0x318
	char bCastVolumetricTranslucentShadow : 1; // 0x318
	char bSelfShadowOnly : 1; // 0x31c
	char bCastFarShadow : 1; // 0x31c
	char bCastInsetShadow : 1; // 0x31c
	char bCastCinematicShadow : 1; // 0x31c
	char bCastHiddenShadow : 1; // 0x31c
	char bCastShadowAsTwoSided : 1; // 0x31c
	char bLightAsIfStatic : 1; // 0x31c
	char bLightAttachmentsAsGroup : 1; // 0x31c
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x31c
	char bSingleSampleShadowFromStationaryLights : 1; // 0x31c
	char bIgnoreRadialImpulse : 1; // 0x31c
	char bIgnoreRadialForce : 1; // 0x31c
	char AlwaysLoadOnClient : 1; // 0x31c
	char AlwaysLoadOnServer : 1; // 0x31c
	char bUseEditorCompositing : 1; // 0x31c
	char bRenderCustomDepth : 1; // 0x31c
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x320
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x321
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x323
	FLightingChannels LightingChannels; // 0x324
	int32_t CustomDepthStencilValue; // 0x328
	int32_t TranslucencySortPriority; // 0x32c
	int32_t VisibilityId; // 0x330
	float LpvBiasMultiplier; // 0x338
	FBodyInstance BodyInstance; // 0x340
	float BoundsScale; // 0x574
	float LastSubmitTime; // 0x578
	float LastRenderTime; // 0x57c
	float LastRenderTimeOnScreen; // 0x580
	TArray<AActor*> MoveIgnoreActors; // 0x588
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x598
	FScriptMulticastDelegate OnComponentHit; // 0x5b8
	FScriptMulticastDelegate OnComponentBeginOverlap; // 0x5c8
	FScriptMulticastDelegate OnComponentEndOverlap; // 0x5d8
	FScriptMulticastDelegate OnComponentWake; // 0x5e8
	FScriptMulticastDelegate OnComponentSleep; // 0x5f8
	FScriptMulticastDelegate OnBeginCursorOver; // 0x608
	FScriptMulticastDelegate OnEndCursorOver; // 0x618
	FScriptMulticastDelegate OnClicked; // 0x628
	FScriptMulticastDelegate OnReleased; // 0x638
	UPrimitiveComponent* LODParentPrimitive; // 0x660
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x668
};

struct UKeyBindingsCommandEntryBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UParticleModuleRequired : UParticleModule {
	UMaterialInterface* Material; // 0x30
	FVector EmitterOrigin; // 0x38
	FRotator EmitterRotation; // 0x44
	EParticleScreenAlignment ScreenAlignment; // 0x50
	float MinFacingCameraBlendDistance; // 0x54
	float MaxFacingCameraBlendDistance; // 0x58
	char bUseLocalSpace : 1; // 0x5c
	char bKillOnDeactivate : 1; // 0x5c
	char bKillOnCompleted : 1; // 0x5c
	EParticleSortMode SortMode; // 0x60
	char bUseLegacyEmitterTime : 1; // 0x64
	char bRemoveHMDRoll : 1; // 0x64
	float EmitterDuration; // 0x68
	float EmitterDurationLow; // 0x6c
	char bEmitterDurationUseRange : 1; // 0x70
	char bDurationRecalcEachLoop : 1; // 0x70
	int32_t EmitterLoops; // 0x74
	FRawDistributionFloat SpawnRate; // 0x78
	EParticleBurstMethod ParticleBurstMethod; // 0xb0
	TArray<FParticleBurst> BurstList; // 0xb8
	float EmitterDelay; // 0xc8
	float EmitterDelayLow; // 0xcc
	char bEmitterDelayUseRange : 1; // 0xd0
	char bDelayFirstLoopOnly : 1; // 0xd0
	EParticleSubUVInterpMethod InterpolationMethod; // 0xd4
	int32_t SubImages_Horizontal; // 0xd8
	int32_t SubImages_Vertical; // 0xdc
	char bScaleUV : 1; // 0xe0
	float RandomImageTime; // 0xe4
	int32_t RandomImageChanges; // 0xe8
	char bOverrideSystemMacroUV : 1; // 0xec
	FVector MacroUVPosition; // 0xf0
	float MacroUVRadius; // 0xfc
	char bUseMaxDrawCount : 1; // 0x100
	int32_t MaxDrawCount; // 0x104
	EParticleUVFlipMode UVFlippingMode; // 0x108
	UTexture2D* CutoutTexture; // 0x110
	ESubUVBoundingVertexCount BoundingMode; // 0x118
	EOpacitySourceMode OpacitySourceMode; // 0x119
	float AlphaThreshold; // 0x11c
	EEmitterNormalsMode EmitterNormalsMode; // 0x120
	FVector NormalsSphereCenter; // 0x124
	FVector NormalsCylinderDirection; // 0x130
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0x13c
	TArray<FName> NamedMaterialOverrides; // 0x140
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FIntegralCurve EnumCurve; // 0xd0
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

struct UModMenuBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UMaterialExpressionDistanceCullFade : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x60
	FExpressionInput Layer; // 0x98
	FName ParameterName; // 0xd0
	float PreviewWeight; // 0xd8
	FVector ConstBase; // 0xdc
	FGuid ExpressionGUID; // 0xe8
};

struct USignWidgetComponent : UWidgetComponent {
	EWidgetSpace Space; // 0x7c8
	UUserWidget* WidgetClass; // 0x7d0
	FIntPoint DrawSize; // 0x7d8
	bool bManuallyRedraw; // 0x7e0
	bool bRedrawRequested; // 0x7e1
	float RedrawTime; // 0x7e4
	FIntPoint CurrentDrawSize; // 0x7f0
	bool bDrawAtDesiredSize; // 0x7f8
	FVector2D Pivot; // 0x7fc
	bool bReceiveHardwareInput; // 0x804
	bool bWindowFocusable; // 0x805
	ULocalPlayer* ownerPlayer; // 0x808
	FLinearColor BackgroundColor; // 0x810
	FLinearColor TintColorAndOpacity; // 0x820
	float OpacityFromTexture; // 0x830
	EWidgetBlendMode BlendMode; // 0x834
	bool bIsTwoSided; // 0x835
	bool TickWhenOffscreen; // 0x836
	UUserWidget* Widget; // 0x838
	UBodySetup* BodySetup; // 0x860
	UMaterialInterface* TranslucentMaterial; // 0x868
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x870
	UMaterialInterface* OpaqueMaterial; // 0x878
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x880
	UMaterialInterface* MaskedMaterial; // 0x888
	UMaterialInterface* MaskedMaterial_OneSided; // 0x890
	UTextureRenderTarget2D* RenderTarget; // 0x898
	UMaterialInstanceDynamic* MaterialInstance; // 0x8a0
	bool bAddedToScreen; // 0x8a8
	bool bEditTimeUsable; // 0x8a9
	FName SharedLayerName; // 0x8b0
	int32_t LayerZOrder; // 0x8b8
	EWidgetGeometryMode GeometryMode; // 0x8bc
	float CylinderArcAngle; // 0x8c0
};

struct UGammaBase : UWindowRoot {
	float maxGamma; // 0x3a8
	float minGamma; // 0x3ac
};

struct ANavigationGraph : ANavigationData {
	UPrimitiveComponent* RenderingComp; // 0x3d0
	FNavDataConfig NavDataConfig; // 0x3d8
	char bEnableDrawing : 1; // 0x428
	char bForceRebuildOnLoad : 1; // 0x428
	char bCanBeMainNavData : 1; // 0x428
	char bCanSpawnOnRebuild : 1; // 0x428
	char bRebuildAtRuntime : 1; // 0x428
	ERuntimeGenerationType RuntimeGeneration; // 0x42c
	float ObservedPathsTickInterval; // 0x430
	uint32_t DataVersion; // 0x434
	TArray<FSupportedAreaData> SupportedAreas; // 0x508
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xf8
	float TileOverlap; // 0x100
	AVolume* SpawningVolume; // 0x108
	FGuid ProceduralGuid; // 0x110
};

struct UAIAsyncTaskBlueprintProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate OnFail; // 0x38
};

struct UHighlightsSetScreenshotAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UMaterialExpressionReroute : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UW_FCEditableTextBlock_C : UFCEditableTextBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0xce8
	UEditableTextBox* mEditableTextBox; // 0xcf0
	FText LastEnteredValue; // 0xcf8
	bool OnlyNumeric; // 0xd10
	FText lastcommitted; // 0xd18
};

struct USpacer : UWidget {
	FVector2D Size; // 0x118
};

struct ADestructibleActor : AActor {
	UDestructibleComponent* DestructibleComponent; // 0x3d0
	char bAffectNavigation : 1; // 0x3d8
	FScriptMulticastDelegate OnActorFracture; // 0x3e0
};

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x60
	FExpressionInput Input; // 0x68
	FExpressionInput Coordinates; // 0xa0
	FVector2D ConstInput; // 0xd8
};

struct UMovieSceneSequencePlayer : UObject {
	FScriptMulticastDelegate OnPlay; // 0x380
	FScriptMulticastDelegate OnStop; // 0x390
	FScriptMulticastDelegate OnPause; // 0x3a0
	char bIsPlaying : 1; // 0x3b0
	char bReversePlayback : 1; // 0x3b0
	char bPendingFirstUpdate : 1; // 0x3b0
	UMovieSceneSequence* Sequence; // 0x3b8
	float TimeCursorPosition; // 0x3c0
	float StartTime; // 0x3c4
	float EndTime; // 0x3c8
	int32_t CurrentNumLoops; // 0x3cc
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3e0
};

struct UW_MouseBlockWindow_C : UMouseBlockWindowBase {
	USpacer* MouseBlocker; // 0x3b8
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68
};

struct UPlatformGameInstance : UGameInstance {
	FScriptMulticastDelegate ApplicationWillDeactivateDelegate; // 0xf8
	FScriptMulticastDelegate ApplicationHasReactivatedDelegate; // 0x108
	FScriptMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x118
	FScriptMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x128
	FScriptMulticastDelegate ApplicationWillTerminateDelegate; // 0x138
	FScriptMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x148
	FScriptMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x158
	FScriptMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x168
	FScriptMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x178
	FScriptMulticastDelegate ApplicationReceivedLocalNotificationDelegate; // 0x188
	FScriptMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x198
};

struct UMaterialExpressionObjectRadius : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x6c0
	EControllerHand Hand; // 0x6c4
	char bDisableLowLatencyUpdate : 1; // 0x6c8
	ETrackingStatus CurrentTrackingStatus; // 0x6cc
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x120
};

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
	UObject* WorldContextObject; // 0x178
};

struct AAudioVolume : AVolume {
	float Priority; // 0x408
	char bEnabled : 1; // 0x40c
	FReverbSettings Settings; // 0x410
	FInteriorSettings AmbientZoneSettings; // 0x428
};

struct UNavigatableVerticalBox : UNavigatableWidgetBase {
	FScriptMulticastDelegate SignalEntrySelected; // 0x318
	FScriptMulticastDelegate SignalSelected; // 0x328
	FScriptMulticastDelegate SignalNavigateVerticaly; // 0x338
	FScriptMulticastDelegate SignalDeselected; // 0x348
	USoundBase* HoveredSound; // 0x358
	bool DisableContainerNavigation; // 0x380
};

struct AInstancedFoliageActor : AActor {
	TArray<char> ReplicatedRespawnParamsEncoded; // 0x458
	TArray<UFoliageInstancedStaticMeshComponent*> FoliageComponents; // 0x468
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x198
	FGuid ExpressionGUID; // 0x1a0
	FName Group; // 0x1b0
};

struct ABaseGameState_C : AConanGameState {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1260
	USceneComponent* DefaultSceneRoot; // 0x1268
	float GlobalImpulseMultiplier; // 0x1270
	TArray<AAvatarCharacter*> SummonedAvatarTypes; // 0x1278
	TArray<AConanCharacter*> SummonedAvatarSummoners; // 0x1288
	bool AllowBuildingOutsideSplines; // 0x1298
};

struct UW_Friends_BlockedPlayers_C : UBlockedPlayerGame {
	UW_NavigatableVerticalBox_C* BlockedPlayerEntryList; // 0x3c8
};

struct ABaseHUD_C : AConanHUD {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4d8
	USceneComponent* DefaultSceneRoot; // 0x4e0
	UW_HUD_C* HudWidget; // 0x4e8
};

struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; // 0x130
	UNavArea* EnabledAreaClass; // 0x138
	UNavArea* DisabledAreaClass; // 0x140
	FVector LinkRelativeStart; // 0x148
	FVector LinkRelativeEnd; // 0x154
	ENavLinkDirection LinkDirection; // 0x160
	char bLinkEnabled : 1; // 0x164
	char bNotifyWhenEnabled : 1; // 0x164
	char bNotifyWhenDisabled : 1; // 0x164
	char bCreateBoxObstacle : 1; // 0x164
	FVector ObstacleOffset; // 0x168
	FVector ObstacleExtent; // 0x174
	UNavArea* ObstacleAreaClass; // 0x180
	float BroadcastRadius; // 0x188
	float BroadcastInterval; // 0x18c
	ECollisionChannel BroadcastChannel; // 0x190
};

struct UMaterialExpressionVertexColor : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UBodySetup2D : UBodySetup {
	FAggregateGeometry2D AggGeom2D; // 0x398
};

struct APlayerPawnRegistry : AActor {
	TArray<APawn*> m_ExtraPlayerPawns; // 0x3d0
	TArray<AActor*> m_ExtraActors; // 0x3e0
};

struct AServerBlacklist : AInfo {
	TArray<FBlacklistedUser> Blacklist; // 0x3d0
};

struct ADocumentationActor : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UMovementComponent : UActorComponent {
	USceneComponent* UpdatedComponent; // 0xf8
	UPrimitiveComponent* UpdatedPrimitive; // 0x100
	FVector Velocity; // 0x10c
	FVector AngularVelocity; // 0x118
	char bConstrainToPlane : 1; // 0x124
	char bSnapToPlaneAtStart : 1; // 0x124
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0x128
	FVector PlaneConstraintNormal; // 0x12c
	FVector PlaneConstraintOrigin; // 0x138
	char bUpdateOnlyIfRendered : 1; // 0x144
	char bAutoUpdateTickRegistration : 1; // 0x144
	char bTickBeforeOwner : 1; // 0x144
	char bAutoRegisterUpdatedComponent : 1; // 0x144
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct UW_HUD_NotificationList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UVerticalBox* Notifications; // 0x248
	TArray<UW_HUD_FriendsNotificationEntry_C*> SessionInvitesNotifications; // 0x250
	TArray<UW_HUD_FriendsNotificationEntry_C*> FriendRequestsNotifications; // 0x260
};

struct UCollisionSystemComponent : UActorComponent {
	FScriptMulticastDelegate OnHitActor; // 0xf8
	TArray<AActor*> DefendingActors; // 0x108
	TMap<AActor*, int32_t> SweepAttackGroupsHit; // 0x118
	bool HasDoneLineTrace; // 0x168
	FHitResult LineTraceHitResult; // 0x170
	TArray<FHitResult> SweepHitResults; // 0x1f8
	TArray<FHitResult> VisitedFeedbackResults; // 0x208
	TArray<FHitResult> FinishedFeedbackResults; // 0x218
	bool HasSweepHitAnything; // 0x228
	bool LineTraceWasAHit; // 0x229
};

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct ANote : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x130
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x60
	FExpressionInput Time; // 0x98
	float CenterX; // 0xd0
	float CenterY; // 0xd4
	float Speed; // 0xd8
	uint32_t ConstCoordinate; // 0xdc
};

struct UAnimalPenInventoryView : URootWidget {
	APlaceableBase* m_CraftingStation; // 0x318
	UCraftingQueue* m_CraftingQueue; // 0x320
	UItemInventory* m_ArtisanThrallInventory; // 0x328
	UItemInventory* m_Inventory; // 0x380
	UItemInventory* m_PetInventory; // 0x388
	UItemInventory* m_TargetInventory; // 0x390
};

struct UInventoryIconTooltipView : UTooltipWidget {
	UGameItem* m_GameItem; // 0x248
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x60
	float Period; // 0x98
};

struct ADynamicSkyBase : AActor {
	AConanTimeOfDayManager* TimeManager; // 0x3d0
	bool AnimateDayNight; // 0x3d8
	float TimeOfDay; // 0x3dc
};

struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x30
	TArray<UAnimMetaData*> MetaData; // 0x58
	TArray<UAssetUserData*> AssetUserData; // 0x68
};

struct UButton : UContentWidget {
	USlateWidgetStyleAsset* Style; // 0x130
	FButtonStyle WidgetStyle; // 0x138
	FLinearColor ColorAndOpacity; // 0x3e0
	FLinearColor BackgroundColor; // 0x3f0
	EButtonClickMethod ClickMethod; // 0x400
	EButtonTouchMethod TouchMethod; // 0x401
	bool IsFocusable; // 0x402
	FScriptMulticastDelegate OnClicked; // 0x408
	FScriptMulticastDelegate OnPressed; // 0x418
	FScriptMulticastDelegate OnReleased; // 0x428
	FScriptMulticastDelegate OnHovered; // 0x438
	FScriptMulticastDelegate OnUnhovered; // 0x448
};

struct UModMismatchDelegates : UObject {
	FServerModMismatchList ModMismatchList; // 0x28
	FScriptMulticastDelegate OnModNameChange; // 0x48
	FScriptMulticastDelegate OnModStateChange; // 0x58
};

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x3a8
};

struct UPlayFabAuthenticationAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xf0
	UPlayFabJsonObject* RequestJsonObj; // 0xf8
	UPlayFabJsonObject* ResponseJsonObj; // 0x100
};

struct USteamNetDriver : UIpNetDriver {
	char LogPortUnreach : 1; // 0x4f8
	char AllowPlayerPortUnreach : 1; // 0x4f8
	uint32_t MaxPortCountToTry; // 0x4fc
};

struct ADirectionalLight : ALight {
	ULightComponent* LightComponent; // 0x3d0
	char bEnabled : 1; // 0x3d8
};

struct UProgressionSystem : UConanCharacterComponent {
	FScriptMulticastDelegate SignalUndistributedPointsChanged; // 0x168
	FScriptMulticastDelegate SignalDistributedPointsChanged; // 0x178
	FScriptMulticastDelegate SignalTotalPointsChanged; // 0x188
};

struct UInterpGroupInstDirector : UInterpGroupInst {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x28
	TArray<FBlackboardEntry> Keys; // 0x30
	char bHasSynchronizedKeys : 1; // 0x40
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x38
	bool PrecacheFile; // 0x48
};

struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xc8
	UCameraAnim* CameraAnim; // 0xe8
	float PlayRate; // 0xf0
	float PlayScale; // 0xf4
	float BlendInTime; // 0xf8
	float BlendOutTime; // 0xfc
	bool bLooping; // 0x100
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct UW_FCButton_C : UFCButton {
	FName NameTag; // 0xc20
};

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x28
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x30
};

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x300
	float FogMultiplier; // 0x304
	float DensityMultiplier; // 0x308
	float DensityOffset; // 0x30c
	float DistanceScale; // 0x310
	float AltitudeScale; // 0x314
	float DistanceOffset; // 0x318
	float GroundOffset; // 0x31c
	float StartDistance; // 0x320
	float SunDiscScale; // 0x324
	float DefaultBrightness; // 0x328
	FColor DefaultLightColor; // 0x32c
	char bDisableSunDisk : 1; // 0x330
	char bDisableGroundScattering : 1; // 0x330
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x334
	UTexture2D* TransmittanceTexture; // 0x360
	UTexture2D* IrradianceTexture; // 0x368
};

struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	Beam2SourceTargetMethod TargetMethod; // 0x30
	FName TargetName; // 0x38
	FRawDistributionVector Target; // 0x40
	char bTargetAbsolute : 1; // 0x90
	char bLockTarget : 1; // 0x90
	Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x94
	FRawDistributionVector TargetTangent; // 0x98
	char bLockTargetTangent : 1; // 0xe8
	FRawDistributionFloat TargetStrength; // 0xf0
	char bLockTargetStength : 1; // 0x128
	float LockRadius; // 0x12c
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x60
	FExpressionInput A; // 0x68
	FExpressionInput B; // 0xa0
	FExpressionInput Value; // 0xd8
};

struct UPeerConnectionNetDriver : UIpNetDriver {
	char LogPortUnreach : 1; // 0x4f8
	char AllowPlayerPortUnreach : 1; // 0x4f8
	uint32_t MaxPortCountToTry; // 0x4fc
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x60
};

struct USettingsControlBase : USubSettingsMaster {
	bool ShowRestoreDefaults; // 0x318
	bool ShowClearKeyBinding; // 0x319
	bool ShowScroll; // 0x31a
	bool IsDirty; // 0x31b
};

struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	ETrail2SourceMethod SourceMethod; // 0x30
	FName SourceName; // 0x38
	FRawDistributionFloat SourceStrength; // 0x40
	char bLockSourceStength : 1; // 0x78
	int32_t SourceOffsetCount; // 0x7c
	TArray<FVector> SourceOffsetDefaults; // 0x80
	EParticleSourceSelectionMethod SelectionMethod; // 0x90
	char bInheritRotation : 1; // 0x94
};

struct ALandscape : ALandscapeProxy {
	ULandscapeSplinesComponent* SplineComponent; // 0x3d0
	FGuid LandscapeGuid; // 0x3d8
	FIntPoint LandscapeSectionOffset; // 0x3e8
	int32_t MaxLodLevel; // 0x3f0
	float LODDistanceFactor; // 0x3f4
	ELandscapeLODFalloff LODFalloff; // 0x3f8
	int32_t StaticLightingLOD; // 0x3fc
	UPhysicalMaterial* DefaultPhysMaterial; // 0x400
	float StreamingDistanceMultiplier; // 0x408
	UMaterialInterface* LandscapeMaterial; // 0x410
	UMaterialInterface* LandscapeHoleMaterial; // 0x418
	float NegativeZBoundsExtension; // 0x420
	float PositiveZBoundsExtension; // 0x424
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x428
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x438
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x448
	bool bHasLandscapeGrass; // 0x4b8
	float StaticLightingResolution; // 0x4bc
	char bCastStaticShadow : 1; // 0x4c0
	char bCastShadowAsTwoSided : 1; // 0x4c0
	char bCastFarShadow : 1; // 0x4c0
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x4c0
	FLightmassPrimitiveSettings LightmassSettings; // 0x4c4
	int32_t CollisionMipLevel; // 0x4dc
	int32_t SimpleCollisionMipLevel; // 0x4e0
	float CollisionThickness; // 0x4e4
	FBodyInstance BodyInstance; // 0x4f0
	char bGenerateOverlapEvents : 1; // 0x720
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x720
	int32_t ComponentSizeQuads; // 0x724
	int32_t SubsectionSizeQuads; // 0x728
	int32_t NumSubsections; // 0x72c
	char bUsedForNavigation : 1; // 0x730
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x734
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x735
};

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x3f8
	bool bLogoutOnSessionTimeout; // 0x540
	float SessionTimeoutSecs; // 0x544
	float TravelSessionTimeoutSecs; // 0x548
};

struct UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UPlayerListGameEntry : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UMultiLineEditableText : UTextLayoutWidget {
	FText Text; // 0x148
	FText HintText; // 0x160
	DelegateProperty HintTextDelegate; // 0x178
	FTextBlockStyle WidgetStyle; // 0x188
	FSlateFontInfo Font; // 0x390
	bool AllowContextMenu; // 0x3f8
	bool IsReadOnly; // 0x3f9
	FScriptMulticastDelegate OnTextChanged; // 0x400
	FScriptMulticastDelegate OnTextCommitted; // 0x410
	FScriptMulticastDelegate OnFocusReceived; // 0x420
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x3e0
};

struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x50
	UObject* ParentClass; // 0x58
	UObject* PRIVATE_InnermostPreviousCDO; // 0x60
	char bHasBeenRegenerated : 1; // 0x68
	char bIsRegeneratingOnLoad : 1; // 0x68
	USimpleConstructionScript* SimpleConstructionScript; // 0x70
	TArray<UActorComponent*> ComponentTemplates; // 0x78
	TArray<UTimelineTemplate*> Timelines; // 0x88
	UInheritableComponentHandler* InheritableComponentHandler; // 0x98
	EBlueprintType BlueprintType; // 0xa0
	int32_t BlueprintSystemVersion; // 0xa4
	bool bNativize; // 0x190
};

struct UStringEnumDataprovider : UObject {
	FName m_TargetEnum; // 0x28
};

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x930
	int32_t NumBuiltInstances; // 0x940
	FBox BuiltInstanceBounds; // 0x948
	FBox UnbuiltInstanceBounds; // 0x964
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x980
	char bEnableDensityScaling : 1; // 0x990
	int32_t OcclusionLayerNumNodes; // 0x9b8
	bool bDisableCollision; // 0x9bf
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0xb0
};

struct ALightmassCharacterIndirectDetailVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
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

struct UAnimSequencerInstance : UAnimInstance {
	float DeltaTime; // 0x28
	USkeleton* CurrentSkeleton; // 0x30
	ERootMotionMode RootMotionMode; // 0x38
	bool bRunUpdatesInWorkerThreads; // 0x39
	bool bCanUseParallelUpdateAnimation; // 0x3a
	bool bUseMultiThreadedAnimationUpdate; // 0x3b
	bool bWarnAboutBlueprintUsage; // 0x3c
	FScriptMulticastDelegate OnMontageBlendingOut; // 0x40
	FScriptMulticastDelegate OnMontageStarted; // 0x50
	FScriptMulticastDelegate OnMontageEnded; // 0x60
	FScriptMulticastDelegate OnAllMontageInstancesEnded; // 0x70
	bool bQueueMontageEvents; // 0xe0
	FAnimNotifyQueue NotifyQueue; // 0x110
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x180
};

struct UPetStatsWindow : UWindowRoot {
	AConanCharacter* InspectedCharacter; // 0x398
};

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct UCharacterStatsStatBar : URootWidget {
	FSlateBrush Icon; // 0x318
	TArray<FFCProgressbarSegment> BarSegments; // 0x3a8
};

struct UPawnAction : UObject {
	UPawnAction* ChildAction; // 0x28
	UPawnAction* ParentAction; // 0x30
	UPawnActionsComponent* OwnerComponent; // 0x38
	UObject* Instigator; // 0x40
	UBrainComponent* BrainComp; // 0x48
	char bAllowNewSameClassInstance : 1; // 0xb8
	char bReplaceActiveSameClassInstance : 1; // 0xb8
	char bShouldPauseMovement : 1; // 0xb8
	char bAlwaysNotifyOnFinished : 1; // 0xb8
};

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x3d0
};

struct UPetInventoryView : UExternalInventoryView {
	bool CanItemBeDropedOn; // 0x318
	FScriptMulticastDelegate SignalCouldNotDrop; // 0x320
	DelegateProperty DelegateGetTargetInventory; // 0x330
	AActor* m_Actor; // 0x370
	UItemInventory* m_Inventory; // 0x378
	UItemInventory* m_TargetInventory; // 0x380
};

struct UAttributeSystem : UConanCharacterComponent {
	float BonusDamageMeleePercentagePerAttribute; // 0x100
	float BonusArmorPerAttribute; // 0x104
	float BonusHealthPercentagePerAttribute; // 0x108
	float BonusDamageRangedPercentagePerAttribute; // 0x10c
	float BonusStaminaPerAttribute; // 0x110
	float BonusEncumbrancePerAttribute; // 0x114
};

struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue InnerRadius; // 0x80
	FAIDataProviderFloatValue OuterRadius; // 0xb0
	FAIDataProviderIntValue NumberOfRings; // 0xe0
	FAIDataProviderIntValue PointsPerRing; // 0x110
	FEnvDirection ArcDirection; // 0x140
	FAIDataProviderFloatValue ArcAngle; // 0x160
	bool bUseSpiralPattern; // 0x190
	UEnvQueryContext* Center; // 0x198
	char bDefineArc : 1; // 0x1a0
};

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x6c0
	TArray<ULandscapeSplineSegment*> Segments; // 0x6d0
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x6e0
};

struct UVideoCaptureSettings : UFrameGrabberProtocolSettings {
	bool bUseCompression; // 0x30
	float CompressionQuality; // 0x34
	FString VideoCodec; // 0x38
};

struct UEnergyHeatmapData : UObject {
	UTexture2D* SourceTexture; // 0x28
	TArray<char> HeatmapData; // 0x48
	int32_t Width; // 0x58
	int32_t Height; // 0x5c
	int32_t TileWidth; // 0x60
	int32_t TileHeight; // 0x64
	int32_t NeighborsPrefetchDepth; // 0x68
	int32_t SecondsBeforeUnloadingTile; // 0x6c
};

struct UMovieSceneSubSection : UMovieSceneSection {
	FMovieSceneSectionParameters Parameters; // 0xc8
	float StartOffset; // 0xd8
	float TimeScale; // 0xdc
	float PrerollTime; // 0xe0
	UMovieSceneSequence* SubSequence; // 0xe8
	AActor* ActorToRecord; // 0xf0
	FString TargetSequenceName; // 0x110
	FDirectoryPath TargetPathToRecordTo; // 0x120
};

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x3d8
	bool bShowPreviewPlane; // 0x3e0
};

struct UDebugEntryItem : UFCButton {
	int32_t templateID; // 0xca0
	FName ItemName; // 0xca8
	UImage* m_ItemIcon; // 0xcb0
	UMaterialInstanceDynamic* m_ItemDynamicMaterialInstance; // 0xcb8
	TArray<UTexture2D*> m_IconAssetPtrs; // 0xcc0
	UAdminPanelInventoryCheats* m_ParentList; // 0xcd0
};

struct AServerSettings : AInfo {
	int32_t BlueprintConfigVersion; // 0x3e8
	int32_t ConfigVersion; // 0x3ec
	EServerRegion serverRegion; // 0x3f0
	bool PVPEnabled; // 0x3f1
	bool RestrictPVPTime; // 0x3f2
	bool RestrictPVPBuildingDamageTime; // 0x3f3
	int32_t PVPTimeMondayStart; // 0x3f4
	int32_t PVPTimeTuesdayStart; // 0x3f8
	int32_t PVPTimeWednesdayStart; // 0x3fc
	int32_t PVPTimeThursdayStart; // 0x400
	int32_t PVPTimeFridayStart; // 0x404
	int32_t PVPTimeSaturdayStart; // 0x408
	int32_t PVPTimeSundayStart; // 0x40c
	int32_t PVPTimeMondayEnd; // 0x410
	int32_t PVPTimeTuesdayEnd; // 0x414
	int32_t PVPTimeWednesdayEnd; // 0x418
	int32_t PVPTimeThursdayEnd; // 0x41c
	int32_t PVPTimeFridayEnd; // 0x420
	int32_t PVPTimeSaturdayEnd; // 0x424
	int32_t PVPTimeSundayEnd; // 0x428
	bool PVPEnabledMonday; // 0x42c
	bool PVPEnabledTuesday; // 0x42d
	bool PVPEnabledWednesday; // 0x42e
	bool PVPEnabledThursday; // 0x42f
	bool PVPEnabledFriday; // 0x430
	bool PVPEnabledSaturday; // 0x431
	bool PVPEnabledSunday; // 0x432
	int32_t PVPBuildingDamageTimeMondayStart; // 0x434
	int32_t PVPBuildingDamageTimeTuesdayStart; // 0x438
	int32_t PVPBuildingDamageTimeWednesdayStart; // 0x43c
	int32_t PVPBuildingDamageTimeThursdayStart; // 0x440
	int32_t PVPBuildingDamageTimeFridayStart; // 0x444
	int32_t PVPBuildingDamageTimeSaturdayStart; // 0x448
	int32_t PVPBuildingDamageTimeSundayStart; // 0x44c
	int32_t PVPBuildingDamageTimeMondayEnd; // 0x450
	int32_t PVPBuildingDamageTimeTuesdayEnd; // 0x454
	int32_t PVPBuildingDamageTimeWednesdayEnd; // 0x458
	int32_t PVPBuildingDamageTimeThursdayEnd; // 0x45c
	int32_t PVPBuildingDamageTimeFridayEnd; // 0x460
	int32_t PVPBuildingDamageTimeSaturdayEnd; // 0x464
	int32_t PVPBuildingDamageTimeSundayEnd; // 0x468
	bool PVPBuildingDamageEnabledMonday; // 0x46c
	bool PVPBuildingDamageEnabledTuesday; // 0x46d
	bool PVPBuildingDamageEnabledWednesday; // 0x46e
	bool PVPBuildingDamageEnabledThursday; // 0x46f
	bool PVPBuildingDamageEnabledFriday; // 0x470
	bool PVPBuildingDamageEnabledSaturday; // 0x471
	bool PVPBuildingDamageEnabledSunday; // 0x472
	bool DisableBuildingDuringTimeRestrictedPVP; // 0x473
	int32_t VocalVisibilityDurationInMinutes; // 0x474
	ECombatModeModifier CombatModeModifier; // 0x478
	bool NoOwnership; // 0x479
	bool ContainersIgnoreOwnership; // 0x47a
	float LandClaimRadiusMultiplier; // 0x47c
	bool DisableLandclaimNotifications; // 0x480
	float BuildingPreloadRadius; // 0x484
	bool CanDamagePlayerOwnedStructures; // 0x488
	bool DynamicBuildingDamage; // 0x489
	int32_t DynamicBuildingDamagePeriod; // 0x48c
	FString ServerPassword; // 0x490
	FString AdminPassword; // 0x4a0
	FString ServerMessageOfTheDay; // 0x4b0
	bool LogoutCharactersRemainInTheWorld; // 0x4c0
	int32_t KickAFKPercentage; // 0x4c4
	int32_t KickAFKTime; // 0x4c8
	int32_t OfflinePlayersUnconsciousBodiesHours; // 0x4cc
	float DurabilityMultiplier; // 0x4d0
	bool DropEquipmentOnDeath; // 0x4d4
	bool EverybodyCanLootCorpse; // 0x4d5
	int32_t CorpsesPerPlayer; // 0x4d8
	float PlayerCorpseLifeTime; // 0x4dc
	float NPCCorpseLifeTime; // 0x4e0
	int32_t MaxPlayerCorpsesInArea; // 0x4e4
	float PlayerCorpsesAreaRadiusCheckedOnDeath; // 0x4e8
	float ItemConvertionMultiplier; // 0x4ec
	float ThrallConversionMultiplier; // 0x4f0
	float FuelBurnTimeMultiplier; // 0x4f4
	float CraftingCostMultiplier; // 0x4f8
	float TetheringMinLimit; // 0x4fc
	float TetheringMaxLimit; // 0x500
	float CoopTetheringLimit; // 0x504
	float TetheringRangeDelta; // 0x508
	float DayCycleSpeedScale; // 0x50c
	float DayTimeSpeedScale; // 0x510
	float NightTimeSpeedScale; // 0x514
	float DawnDuskSpeedScale; // 0x518
	float ClientCatchUpTime; // 0x51c
	bool UseClientCatchUpTime; // 0x520
	float PlayerHealthMultiplier; // 0x524
	float PlayerStaminaMultiplier; // 0x528
	float StaminaCostMultiplier; // 0x52c
	float StaminaRegenerationTime; // 0x530
	float StaminaExhaustionTime; // 0x534
	float StaminaStaticRegenRateMultiplier; // 0x538
	float StaminaMovingRegenRateMultiplier; // 0x53c
	float PlayerStaminaRegenSpeedScale; // 0x540
	float StaminaOnConsumeRegenPause; // 0x544
	float StaminaOnExhaustionRegenPause; // 0x548
	float ThrallScoutingTimeMinutes; // 0x54c
	float ThrallMinDistanceAwayFromHome; // 0x550
	float ThrallTeleportingCooldown; // 0x554
	int32_t MinionPopulationBaseValue; // 0x558
	int32_t MinionPopulationPerPlayer; // 0x55c
	int32_t MinionOverpopulationCleanup; // 0x560
	int32_t MinionOverpopulationAllowed; // 0x564
	bool UseMinionPopulationLimit; // 0x568
	bool EnableFollowerRescueOnLandClaimOnly; // 0x569
	bool EnableFollowerRescueInBuildExclusionZone; // 0x56a
	int32_t FollowerRescueCooldown; // 0x56c
	int32_t DamageCooldownBeforeRescue; // 0x570
	float ThrallCorruptionRemovalMultiplier; // 0x574
	float PlayerCorruptionGainMultiplier; // 0x578
	float AnimalPenCraftingTimeMultiplier; // 0x57c
	float FeedBoxRangeMultiplier; // 0x580
	float ItemSpoilRateScale; // 0x584
	float HarvestAmountMultiplier; // 0x588
	float ResourceRespawnSpeedMultiplier; // 0x58c
	float BuildingDamageMultiplier; // 0x590
	float PlayerBuildingDamageMultiplier; // 0x594
	ENPCMindReadingMode NPCMindReadingMode; // 0x598
	bool PathFollowingSendsAngularVelocity; // 0x599
	float UnconsciousTimeSeconds; // 0x59c
	float ConciousnessDamageMultiplier; // 0x5a0
	float ThrallDamageToPlayersMultiplier; // 0x5a4
	float ThrallDamageToNPCsMultiplier; // 0x5a8
	bool DisableBuildingAbandonment; // 0x5ac
	int32_t OverrideDecayMaxBuildingPieces; // 0x5b0
	int32_t OverrideDecayTime; // 0x5b4
	float MaxBuildingDecayTime; // 0x5b8
	float MaxDecayTimeToAutoDemolish; // 0x5bc
	float ThrallDecayTime; // 0x5c0
	bool DisableThrallDecay; // 0x5c4
	float BuildingDecayTimePerScore; // 0x5c8
	float BuildingDecayTimeMultiplier; // 0x5cc
	float DecayCleanupTimeMultiplier; // 0x5d0
	float DecayBonusTimeRate; // 0x5d4
	bool DecayShowBuildingScore; // 0x5d8
	bool EnableAutoFacingOnAttack; // 0x5d9
	bool EnableTargetLock; // 0x5da
	bool CachedPVPEnabled; // 0x5db
	bool CachedDisableBuildingAbandonment; // 0x5dc
	bool CachedNoOwnership; // 0x5dd
	float CachedLandClaimRadiusMultiplier; // 0x5e0
	bool ValidatePhysNavWalkWithRaycast; // 0x5e4
	float LocalNavMeshVisualizationFrequency; // 0x5e8
	float LocalLandClaimVisualizationFrequency; // 0x5ec
	int32_t LocalLandClaimVisualizationRadius; // 0x5f0
	ClaimChannel LocalLandClaimVisualizationChannel; // 0x5f4
	bool UseLocalQuadraticAngularVelocityPrediction; // 0x5f5
	float LQAVPUseTime; // 0x5f8
	float LQAVPFadeTime; // 0x5fc
	ELQAVPMethod LQAVPMethod; // 0x600
	float NetworkSimulatedSmoothRotationTimeWithLQAVP; // 0x604
	ENudity MaxNudity; // 0x608
	EServerCommunity ServerCommunity; // 0x609
	int32_t clanMaxSize; // 0x60c
	bool EnableClanMarkers; // 0x610
	bool IsLoadErrorsFatal; // 0x611
	bool ValidatePlayerStats; // 0x612
	float AllowedTimeUndermesh; // 0x614
	float AllowedDistanceUndermeshSquared; // 0x618
	bool CapCharacterLayoutScalarParams; // 0x61c
	TArray<FString> FeatsBlacklist; // 0x620
	TArray<int32_t> ServerBlacklistedFeatIDs; // 0x630
	TArray<FString> BuildingPVPWhitelist; // 0x640
	TArray<int32_t> ServerBuildingPVPWhitelistIDs; // 0x650
	bool ChatHasGlobal; // 0x660
	float ChatLocalRadius; // 0x664
	int32_t ChatMaxMessageLength; // 0x668
	int32_t ChatFloodControlAheadCounter; // 0x66c
	EGameEventCauserPrivacy EventLogCauserPrivacy; // 0x670
	EServerVoiceChat serverVoiceChat; // 0x671
	bool EnableSandStorm; // 0x672
	bool AvatarsDisabled; // 0x673
	bool RestrictAvatarSummoningTime; // 0x674
	int32_t AvatarSummoningTimeWeekdayStart; // 0x678
	int32_t AvatarSummoningTimeWeekdayEnd; // 0x67c
	int32_t AvatarSummoningTimeWeekendStart; // 0x680
	int32_t AvatarSummoningTimeWeekendEnd; // 0x684
	float AvatarLifetime; // 0x688
	float AvatarSummonTime; // 0x68c
	int32_t MaxDeathMapMarkers; // 0x690
	bool IsBattlEyeEnabled; // 0x694
	bool IsVACEnabled; // 0x695
	bool ServerTransferEnabled; // 0x696
	bool CanImportDirectlyFromSameServer; // 0x697
	TArray<FString> ServerTransferServersWhitelist; // 0x698
	int32_t MaxAllowedPing; // 0x6ac
	bool EnableWhitelist; // 0x6b0
	bool EnableBanCheck; // 0x6b1
	bool AllowFamilySharedAccount; // 0x6b2
	bool RegionAllowAfrica; // 0x6b3
	bool RegionAllowAsia; // 0x6b4
	bool RegionAllowCentralEurope; // 0x6b5
	bool RegionAllowEasternEurope; // 0x6b6
	bool RegionAllowWesternEurope; // 0x6b7
	bool RegionAllowNorthAmerica; // 0x6b8
	bool RegionAllowOceania; // 0x6b9
	bool RegionAllowSouthAmerica; // 0x6ba
	FString RegionBlockList; // 0x6c0
	FString ServerModList; // 0x6d0
	TArray<FString> IPBlackList; // 0x6e0
	int32_t PurgeLevel; // 0x7b0
	int32_t PurgeDelay; // 0x7b4
	bool RestrictPurgeTime; // 0x7b8
	int32_t PurgeRestrictionWeekdayStart; // 0x7bc
	int32_t PurgeRestrictionWeekdayEnd; // 0x7c0
	int32_t PurgeRestrictionWeekendStart; // 0x7c4
	int32_t PurgeRestrictionWeekendEnd; // 0x7c8
	float PurgePreparationTime; // 0x7cc
	float PurgeDuration; // 0x7d0
	int32_t MinPurgeOnlinePlayers; // 0x7d4
	bool AllowBuilding; // 0x7d8
	float ClanPurgeTrigger; // 0x7dc
	float InitialPurgeDelay; // 0x7e0
	float ClanScoreUpateFrequency; // 0x7e4
	bool EnablePurge; // 0x7e8
	TArray<float> PurgeNPCBuildingDamageMultiplier; // 0x7f0
	bool StormEnabled; // 0x800
	bool ElderThingsEnabled; // 0x801
	float ElderThingsIdleLifespan; // 0x804
	bool SiegeElderThingsEnabled; // 0x808
	float StormCooldown; // 0x80c
	float StormAccumulationTime; // 0x810
	float StormDuration; // 0x814
	float StormDissipationTime; // 0x818
	float StormEnduranceDrainMultiplier; // 0x81c
	float ElderThingSpawnRate; // 0x820
	int32_t StormTimeWeekdayStart; // 0x824
	int32_t StormTimeWeekdayEnd; // 0x828
	int32_t StormTimeWeekendStart; // 0x82c
	int32_t StormTimeWeekendEnd; // 0x830
	int32_t StormMinimumOnlinePlayers; // 0x834
	bool StormBuildingAllowed; // 0x838
	bool StormMapBlocker; // 0x839
	float ElderThingSiegeDamageMultiplier; // 0x83c
	int32_t MinimumBuildingSizeToBeSieged; // 0x840
	float AmbientElderThingRespawnRate; // 0x844
	float SiegeElderThingRespawnRate; // 0x848
	float StormBuildingDamageRateMultiplier; // 0x84c
	int32_t MaxAmbientElderThings; // 0x850
	int32_t MaxSiegeElderThings; // 0x854
	int32_t MaxAmbushElderThings; // 0x858
	float ElderThingSiegeBuildingSizeMultiplier; // 0x85c
	bool StormBuildingDamageEnabled; // 0x860
	bool SiegeElderThingMapMarkers; // 0x861
	int32_t MinimumStormDamageBuildingPieces; // 0x864
	float StormBuildingDamageMultiplier; // 0x868
	int32_t VaultRefreshTime; // 0x86c
	int32_t VaultRefreshDeviation; // 0x870
	float SurgeSacrificeRequirementMultiplier; // 0x874
	int32_t SurgeDespawnTimer; // 0x878
	float AltarModuleActiveTimeMultiplier; // 0x87c
	bool DecoupleSurgeFromStorm; // 0x880
	int32_t DecoupledSurgeCooldown; // 0x884
	bool EnableBuildingDestructionCapsules; // 0x888
	bool BuildingPickupEnabled; // 0x889
	bool PoiProtectionEnabled; // 0x88a
	bool EventSystemEnabled; // 0x88b
	int32_t ServerMergeOutgoingTime; // 0x88c
	FString ServerMergeDestination; // 0x890
	bool DisableChatFormatting; // 0x8a0
};

struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	FRawDistributionFloat Resilience; // 0x30
	FRawDistributionFloat ResilienceScaleOverLife; // 0x68
	float Friction; // 0xa0
	float RandomSpread; // 0xa4
	float RandomDistribution; // 0xa8
	float RadiusScale; // 0xac
	float RadiusBias; // 0xb0
	EParticleCollisionResponse Response; // 0xb4
	EParticleCollisionMode CollisionMode; // 0xb5
};

struct UAIPerceptionSystem : UObject {
	TArray<UAISense*> Senses; // 0x80
	float PerceptionAgingRate; // 0x90
};

struct UPluginCommandlet : UCommandlet {
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
};

struct UDrawSphereComponent : USphereComponent {
	float SphereRadius; // 0x6e0
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UW_LoadingProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UProgressBar* ProgressBar_1; // 0x248
	UConanGameInstance* GameInstance; // 0x250
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	UProperty* InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x30
};

struct UServerListView : URootWidget {
	FScriptMulticastDelegate SignalServerSearchDone; // 0x318
	FScriptMulticastDelegate SignalServerSelected; // 0x328
	FScriptMulticastDelegate SignalServerInvoked; // 0x338
	FScriptMulticastDelegate SignalServerListDeselected; // 0x348
	FScriptMulticastDelegate SignalServerListSelected; // 0x358
	FScriptMulticastDelegate SignalWidgetsUpdated; // 0x368
	EFindSessionServerSet m_CurrentSteamFilter; // 0x378
	EFindSessionOfficial m_CurrentOfficialFilter; // 0x379
	URootWidget* FirstWidget; // 0x380
	URootWidget* NavOutWidget; // 0x388
	UUserWidget* m_ServerInfoClass; // 0x420
	UTextBlock* m_ListUpdateProgressView; // 0x428
	TArray<UServerInfoBase*> m_UnusedListEntryWidgets; // 0x438
	TArray<FServerListViewEntry> m_ListViewEntries; // 0x448
};

struct UMainMenuBase : UWindowRoot {
	UMediaPlayer* m_MediaPlayer; // 0x398
	UMediaSource* m_MediaSource; // 0x3a0
	UMaterialInterface* m_MediaMaterial; // 0x3a8
	TArray<UWidget*> m_KeyNavWidgets; // 0x3b0
	TArray<ESlateVisibility> m_WidgetVisibilities; // 0x3c0
	UTexture2D* TextureOldBackground; // 0x3d0
	UTexture2D* TextureSiptahBackground; // 0x3f0
	UTexture2D* TextureOldBackgroundOverlay; // 0x410
	UTexture2D* TextureSiptahBackgroundOverlay; // 0x430
	UMessageBoxWidget* m_CheckingPermissionsMessageBox; // 0x458
	FString RequestedCoopMapPath; // 0x490
	FText m_WarningText; // 0x530
	UInputComponent* m_SignInInputComponent; // 0x548
	UGUIModuleController* m_GUIModuleController; // 0x550
	UMessageBoxWidget* m_InviteMessageBox; // 0x558
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct ACameraActor : AActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x3d0
	UCameraComponent* CameraComponent; // 0x3d8
	USceneComponent* SceneComponent; // 0x3e0
	char bConstrainAspectRatio : 1; // 0x3f0
	float AspectRatio; // 0x3f4
	float FOVAngle; // 0x3f8
	float PostProcessBlendWeight; // 0x3fc
	FPostProcessSettings PostProcessSettings; // 0x400
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	float ConstA; // 0xd0
	float ConstB; // 0xd4
};

struct AParticleEventManager : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x3d0
};

struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0xb8
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x60
	ELandscapeCustomizedCoordType CustomUVType; // 0x61
	float MappingScale; // 0x64
	float MappingRotation; // 0x68
	float MappingPanU; // 0x6c
	float MappingPanV; // 0x70
};

struct UAttributeEntry : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UParticleModuleTrailBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UParticleModuleKillBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28
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
	float FrameRateLimit; // 0xac
	int32_t DesiredScreenWidth; // 0xb4
	bool bUseDesiredScreenHeight; // 0xb8
	int32_t DesiredScreenHeight; // 0xbc
	float LastRecommendedScreenWidth; // 0xc0
	float LastRecommendedScreenHeight; // 0xc4
	float LastCPUBenchmarkResult; // 0xc8
	float LastGPUBenchmarkResult; // 0xcc
	TArray<float> LastCPUBenchmarkSteps; // 0xd0
	TArray<float> LastGPUBenchmarkSteps; // 0xe0
	float LastGPUBenchmarkMultiplier; // 0xf0
	bool bUseHDRDisplayOutput; // 0xf4
	int32_t HDRDisplayOutputNits; // 0xf8
	FScriptMulticastDelegate OnGameUserSettingsUINeedsUpdate; // 0x110
};

struct UAsyncGetBuildingsInAreaProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnFinished; // 0x28
	FVector m_Center; // 0x40
	float m_AreaRadius; // 0x4c
	int32_t m_MinNumBuildingPieces; // 0x50
};

struct UPlayFabGroupsAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x210
	UPlayFabJsonObject* RequestJsonObj; // 0x218
	UPlayFabJsonObject* ResponseJsonObj; // 0x220
};

struct UTargetingSystemComponent : UActorComponent {
	int32_t NumHealthBars; // 0xf8
	float HealthBarFadeout; // 0xfc
	UUserWidget* HealthbarWidgetClass; // 0x100
	UMaterialInterface* HealthbarMaterial; // 0x108
	UUserWidget* TargetLockWidgetClass; // 0x110
	UMaterialInterface* TargetLockMaterial; // 0x118
	TArray<FTargetingWidgetStatus> Healthbars; // 0x120
	FTargetingWidgetStatus TargetLock; // 0x130
};

struct UHoudiniAssetParameterRampCurveColor : UCurveLinearColor {
	FRichCurve FloatCurves[0x4]; // 0x30
};

struct UThrallSystemComponent : UActorComponent {
	bool IsPlacingThrall; // 0xf8
	EThrallPlacementMode ThrallPlacementMode; // 0xf9
	AActor* CurrentThrallBrushClass; // 0x100
	UThrallItem* CurrentThrallItem; // 0x108
	UThrallComponent* CurrentThrallComponent; // 0x110
	FScriptMulticastDelegate SignalOnBondBroken; // 0x118
	ALootContainer* LootContainerClass; // 0x1a0
	TArray<UUniqueID*> m_FollowingThralls; // 0x1a8
	UUniqueID* m_PacifistFollower; // 0x1b8
	bool m_bHasThallLimitBeenExceeded; // 0x238
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct UTableAccessor : UObject {
	UDataTable* table; // 0x28
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0xc8
};

struct UMediaSubtitles : UObject {
	TArray<FMediaSubtitle> Subtitles; // 0x28
};

struct UCraftingManagerGUI : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UMaterialExpressionGraniteTextureParameter : UMaterialExpressionGraniteTexture {
	FName ParameterName; // 0x190
	FGuid ExpressionGUID; // 0x198
	FName Group; // 0x1a8
};

struct AHarvestFoliageSystem : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UW_TooltipWidget_C : UTooltipWidget {
	UTextBlock* textView; // 0x248
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

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	FScriptMulticastDelegate OnDataTableModified; // 0x80
};

struct UCameraAnim : UObject {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x530
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xd0
	int32_t SizeY; // 0xd4
	FLinearColor ClearColor; // 0xd8
	TextureAddress AddressX; // 0xe8
	TextureAddress AddressY; // 0xe9
	char bForceLinearGamma : 1; // 0xec
	char bHDR : 1; // 0xec
	char bGPUSharedFlag : 1; // 0xec
	char bAutoGenerateMips : 1; // 0xec
	char bForceUAVSupport : 1; // 0xec
	EPixelFormat OverrideFormat; // 0xf0
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28
	bool NativeAudioOut; // 0x29
};

struct UNavAreaMeta : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UParticleModuleAttractorBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UKeyBindingsCategoryBase : URootWidget {
	UUserWidget* m_EntryClass; // 0x4b0
};

struct UUserDefinedStruct : UScriptStruct {
	FGuid Guid; // 0x98
};

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2f0
	float CameraMotionBlurAmount; // 0x450
	char bClearExistingParticlesOnInit : 1; // 0x454
};

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xc8
	TArray<FName> LevelNames; // 0xd0
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	FCachedMovieSceneEvaluationTemplate EvaluationTemplate; // 0xb0
	FMovieSceneTrackCompilationParams TemplateParameters; // 0x2d0
	bool bParentContextsAreSignificant; // 0x2d1
};

struct UThrallHungerSystemComponent : UHungerSystem {
	float StrongBuffThreshold; // 0x128
	char HasStrongBuffFood : 1; // 0x12c
	char HasWeakBuffFood : 1; // 0x12c
	char HasFood : 1; // 0x12c
};

struct URecipeItem : UGameItem {
	UObject* BuildingModuleClass; // 0x248
	UUniqueID* CraftingCharacterUID; // 0x250
	TArray<FIngredientEntry> Ingredients; // 0x258
	TArray<FIngredientEntry> Results; // 0x268
	FGameMetricsPlayerContext PlayerContext; // 0x278
};

struct UTextureCube : UTexture {
	FGuid LightingGuid; // 0x30
	int32_t LODBias; // 0x40
	int32_t NumCinematicMipLevels; // 0x44
	char SRGB : 1; // 0x48
	char NeverStream : 1; // 0x48
	char bNoTiling : 1; // 0x48
	char bUseCinematicMipLevels : 1; // 0x48
	TArray<UAssetUserData*> AssetUserData; // 0x50
	int32_t CachedCombinedLODBias; // 0x60
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x64
	TextureCompressionSettings CompressionSettings; // 0x68
	TextureFilter Filter; // 0x69
	TextureGroup LODGroup; // 0x6a
};

struct USettingsVideoBase : USubSettingsMaster {
	FScriptMulticastDelegate ShowConfirmDialog; // 0x328
	bool IsVideoModeDirty; // 0x338
};

struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
	bool DefaultValue; // 0xd0
	FIntegralCurve BoolCurve; // 0xd8
};

struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xf8
	UActorSequence* Sequence; // 0x120
	UActorSequencePlayer* SequencePlayer; // 0x128
	bool bAutoPlay; // 0x130
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
};

struct UAISenseBlueprintListener : UUserDefinedStruct {
	FGuid Guid; // 0x98
};

struct UMediaSoundWave : USoundWave {
	int32_t AudioTrackIndex; // 0x270
	UMediaPlayer* MediaPlayer; // 0x278
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
};

struct UCharacterPersistenceComponent : UPersistenceComponent {
	bool SaveOnSpawn; // 0xf8
	float SaveFrequency; // 0xfc
	bool SkipSaving; // 0x100
	UUniqueID* UID; // 0x108
	FScriptMulticastDelegate OnSignalDataLoaded; // 0x110
	FScriptMulticastDelegate OnSignalPreSave; // 0x120
	bool m_bWasLoadedFromDB; // 0x130
};

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x60
};

struct UMaterialExpressionPreSkinnedNormal : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UStackSplitValueDialog : UWindowRoot {
	UGamepadHelpEntryBase* GamepadHelpEntryClass; // 0x398
	UEditableTextBox* ValueView; // 0x3a0
	UFCSlider* ValueSlider; // 0x3a8
	UHorizontalBox* ButtonContainer; // 0x3b0
	UHorizontalBox* GamepadIconContainer; // 0x3b8
	UFCButton* OkButton; // 0x3c0
	UFCButton* CancelButton; // 0x3c8
	UFCButton* SubtractTenButton; // 0x3d0
	UFCButton* AddTenButton; // 0x3d8
	UFCButton* SubtractHundredButton; // 0x3e0
	UFCButton* AddHundredButton; // 0x3e8
	UItemInventory* m_SrcInventory; // 0x3f8
	UItemInventory* m_DstInventory; // 0x400
	UInputComponent* m_LocalInputComponent; // 0x408
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UInt32Binding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UAvatarItem : UGameItem {
	FStringAssetReference AvatarMapMarkerIcon; // 0x248
	AAvatarCharacter* m_AvatarType; // 0x258
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UPhysicsConstraintComponent : USceneComponent {
	AActor* ConstraintActor1; // 0x300
	FConstrainComponentPropName ComponentName1; // 0x308
	AActor* ConstraintActor2; // 0x310
	FConstrainComponentPropName ComponentName2; // 0x318
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x330
	FScriptMulticastDelegate OnConstraintBroken; // 0x338
	FConstraintInstance ConstraintInstance; // 0x350
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UNavigationPath : UObject {
	FScriptMulticastDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct UObjectPool : UObject {
	TArray<UObject*> m_ObjectPool; // 0x28
};

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x38
	TArray<FDebugDisplayProperty> DebugProperties; // 0x40
	UWorld* World; // 0x90
	UGameInstance* GameInstance; // 0x98
};

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct AInventoryItemBase : AActor {
	FName EquipSocketName; // 0x3e0
	bool CanUseInWater; // 0x3e8
	UGameItem* OwnerItem; // 0x3f0
	VisualMeshType MeshType; // 0x3f8
};

struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	FRotator RotationalAcceleration; // 0x7a8
	FRotator RotationalDeceleration; // 0x7b4
	FRotator MaxRotationalVelocity; // 0x7c0
	float MinPitch; // 0x7cc
	float MaxPitch; // 0x7d0
	float WalkingFriction; // 0x7d4
	float WalkingSpeed; // 0x7d8
	float WalkingAcceleration; // 0x7dc
};

struct UW_CommunityButton_C : UFCBloodCommunityButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0xca0
	UWidgetAnimation* Anim_Blood; // 0xca8
	UWidgetAnimation* Anim_Fade; // 0xcb0
	UImage* Button; // 0xcb8
	UTextBlock* CommunityLabel; // 0xcc0
	UImage* Icon; // 0xcc8
	UTexture2D* CommunityIcon; // 0xcd0
	FText Description; // 0xcd8
	FScriptMulticastDelegate SignalDescription; // 0xcf0
};

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UFollowerLimit : URootWidget {
	FLinearColor NormalTextColor; // 0x318
	FLinearColor AboveLimitTextColor; // 0x328
	FLinearColor NormalBarColor; // 0x338
	FLinearColor AboveLimitBarColor; // 0x348
	UTextBlock* m_CurrentFollowers; // 0x358
	UTextBlock* m_FollowersLimitText; // 0x360
	UHealthBarBase* m_FollowersLimitBar; // 0x368
};

struct UStaticNavigation : UObject {
	TArray<FSpawnerIndex> m_SpawnerIndices; // 0x28
	TArray<FVector> m_SampledSpawnPoints; // 0x38
	TArray<FRoamingPath> m_SampledRoamingPaths; // 0x48
};

struct UAITask_MoveTo : UAITask {
	FScriptMulticastDelegate OnRequestFailed; // 0x70
	FScriptMulticastDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	FMovieSceneSkeletalAnimationParams Params; // 0xc8
	UAnimSequence* AnimSequence; // 0x158
	UAnimSequenceBase* Animation; // 0x160
	float StartOffset; // 0x168
	float EndOffset; // 0x16c
	float PlayRate; // 0x170
	char bReverse : 1; // 0x174
	FName SlotName; // 0x178
};

struct UNPCProgressionData : UBlueprintFunctionLibrary {
	UDataTable* m_LevelCurveTable; // 0x28
	UDataTable* m_NPCGrowthRatesTable; // 0x48
	UDataTable* m_NPCPerksTable; // 0x68
};

struct AAIController : AController {
	char bStopAILogicOnUnposses : 1; // 0x470
	char bLOSflag : 1; // 0x470
	char bSkipExtraLOSChecks : 1; // 0x470
	char bAllowStrafe : 1; // 0x470
	char bWantsPlayerState : 1; // 0x470
	char bSetControlRotationFromPawnOrientation : 1; // 0x470
	UPathFollowingComponent* PathFollowingComponent; // 0x478
	UBrainComponent* BrainComponent; // 0x480
	UAIPerceptionComponent* PerceptionComponent; // 0x488
	UPawnActionsComponent* ActionsComp; // 0x490
	UBlackboardComponent* Blackboard; // 0x498
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x4a0
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x4a8
	FScriptMulticastDelegate ReceiveMoveCompleted; // 0x4b0
};

struct UW_KeyNavIndicator_C : UKeyNavIndicator {
	UNamedSlot* Content; // 0x320
};

struct UW_GamepadHelpOverlay_C : UGamepadHelpOverlayBase {
	UHorizontalBox* LeftHelp; // 0x3c0
	UHorizontalBox* RightHelp; // 0x3c8
};

struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x58
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x7c
	APlayerController* PendingLevelPlayerControllerClass; // 0x80
	char bSentSplitJoin : 1; // 0x88
};

struct UW_ServerSetting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UImage* Dot; // 0x248
	UTextBlock* setting; // 0x250
};

struct ASubDSurfaceActor : AActor {
	USubDSurfaceComponent* SubDSurface; // 0x3d0
	UStaticMeshComponent* DisplayMeshComponent; // 0x3d8
};

struct UW_HotkeyIcon_C : UHotkeyIcon {
	UImage* IconView; // 0x428
};

struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; // 0x3d8
	char bWakeOnLevelStart : 1; // 0x3d8
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x3e0
	USkeletalMesh* ReplicatedMesh; // 0x3e8
	UPhysicsAsset* ReplicatedPhysAsset; // 0x3f0
	UMaterialInterface* ReplicatedMaterial0; // 0x3f8
	UMaterialInterface* ReplicatedMaterial1; // 0x400
};

struct UServerReport : UObject {
	FString IPv4; // 0x28
	int32_t SPort; // 0x38
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0xd0
};

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UInputKeySelector : UWidget {
	FInputChord SelectedKey; // 0x118
	FSlateFontInfo Font; // 0x138
	FMargin Margin; // 0x1a0
	FLinearColor ColorAndOpacity; // 0x1b0
	FText KeySelectionText; // 0x1c0
	bool bAllowModifierKeys; // 0x1d8
	FScriptMulticastDelegate OnKeySelected; // 0x1e0
	FScriptMulticastDelegate OnIsSelectingKeyChanged; // 0x1f0
};

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0xb8
};

struct UW_ButtonNormal_C : UW_FCButton_C {
	UNamedSlot* ButtonOverlay; // 0xc28
	UNamedSlot* CheckboxOverlay; // 0xc30
	UW_HotkeyIcon_C* HotkeyIcon; // 0xc38
};

struct UNavArea_LowHeight : UNavArea {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UConanProjectileMovementComponent : UProjectileMovementComponent {
	float InitialSpeed; // 0x150
	float MaxSpeed; // 0x154
	char bRotationFollowsVelocity : 1; // 0x158
	char bShouldBounce : 1; // 0x158
	char bInitialVelocityInLocalSpace : 1; // 0x158
	char bForceSubStepping : 1; // 0x158
	char bIsHomingProjectile : 1; // 0x158
	char bBounceAngleAffectsFriction : 1; // 0x158
	char bIsSliding : 1; // 0x158
	float PreviousHitTime; // 0x15c
	FVector PreviousHitNormal; // 0x160
	float ProjectileGravityScale; // 0x16c
	float Buoyancy; // 0x170
	float Bounciness; // 0x174
	float Friction; // 0x178
	float BounceVelocityStopSimulatingThreshold; // 0x17c
	FScriptMulticastDelegate OnProjectileBounce; // 0x180
	FScriptMulticastDelegate OnProjectileStop; // 0x190
	float HomingAccelerationMagnitude; // 0x1a0
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x1a4
	float MaxSimulationTimeStep; // 0x1ac
	int32_t MaxSimulationIterations; // 0x1b0
};

struct UUpSellButtonbase : URootWidget {
	TArray<FDLCEntry> m_DLCs; // 0x318
	FTimerHandle m_SavegameLoadedTimer; // 0x328
	UGUIModule* m_SettingsGUIModule; // 0x340
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x60
	FExpressionInput Inputs[0x4]; // 0x98
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x60
	FExpressionInput X; // 0x98
};

struct UParticleModuleLocationBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x7f0
};

struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
	FString Description; // 0x28
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x760
};

struct UInventoryIconViewBase : URootWidget {
	bool AllowItemDrag; // 0x318
	USoundCue* DragSound; // 0x320
	USoundBase* RepairFinishedSound; // 0x328
	USoundBase* EquipAmmoSound; // 0x348
	USoundBase* RiddleOfSteelSound; // 0x368
	USoundBase* HoveredSound; // 0x388
	FLinearColor EnabledColor; // 0x3a8
	FLinearColor DisabledColor; // 0x3b8
	FLinearColor DimmedColor; // 0x3c8
	UWidgetAnimation* AnimationMarkedForMove; // 0x3d8
	UWidgetAnimation* AnimationFilterSelected; // 0x3e0
	UWidgetAnimation* AnimationInRepairState; // 0x3e8
	UWidgetAnimation* AnimationCannotMove; // 0x3f0
	UMaterialInstance* TextureBlendMatInst; // 0x400
	UGameItem* m_GameItem; // 0x408
	UBorder* IconBackground; // 0x418
	UBorder* IconFrameView; // 0x420
	UBorder* IconBorder; // 0x428
	UBorder* RiddleOfSteelIndicator; // 0x430
	UOverlay* IconOverlay; // 0x438
	UImage* BitmapView; // 0x440
	UImage* ActiveAmmo; // 0x448
	UWidget* RepairIcon; // 0x450
	UWidget* DragView; // 0x458
	UTextBlock* StackSizeTextView; // 0x460
	UProgressBar* ProgressBar; // 0x468
	UWidget* ProgressBarContainer; // 0x470
	UImage* DLCLockedIcon; // 0x478
};

struct UConanAISystem : UAISystem {
	FStringClassReference PerceptionSystemClassName; // 0x48
	FStringClassReference HotSpotManagerClassName; // 0x58
	float AcceptanceRadius; // 0x68
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x6c
	float PathfollowingNavLinkAcceptanceRadius; // 0x70
	bool bFinishMoveOnGoalOverlap; // 0x74
	bool bAcceptPartialPaths; // 0x75
	bool bAllowStrafing; // 0x76
	bool bEnableBTAITasks; // 0x77
	bool bAllowControllersAsEQSQuerier; // 0x78
	bool bEnableDebuggerPlugin; // 0x79
	ECollisionChannel DefaultSightCollisionChannel; // 0x7a
	UBehaviorTreeManager* BehaviorTreeManager; // 0x80
	UEnvQueryManager* EnvironmentQueryManager; // 0x88
	UAIPerceptionSystem* PerceptionSystem; // 0x90
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0x98
	UAIHotSpotManager* HotSpotManager; // 0xa8
	UNavLocalGridManager* NavLocalGrids; // 0xb0
};

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct AKillZVolume : APhysicsVolume {
	float TerminalVelocity; // 0x408
	int32_t Priority; // 0x40c
	float FluidFriction; // 0x410
	char bWaterVolume : 1; // 0x414
	char bPhysicsOnContact : 1; // 0x414
};

struct UParticleModuleCameraBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct AGameStateBase : AInfo {
	AGameModeBase* GameModeClass; // 0x3d0
	AGameModeBase* AuthorityGameMode; // 0x3d8
	ASpectatorPawn* SpectatorClass; // 0x3e0
	TArray<APlayerState*> PlayerArray; // 0x3e8
	bool bReplicatedHasBegunPlay; // 0x3f8
	float ReplicatedWorldTimeSeconds; // 0x3fc
	float ServerWorldTimeSecondsDelta; // 0x400
	float ServerWorldTimeSecondsUpdateFrequency; // 0x404
};

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x430
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x438
};

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x3d0
	int32_t MaxPlayers; // 0x3d4
	int32_t MaxPartySize; // 0x3d8
	char MaxSplitscreensPerConnection; // 0x3dc
	bool bRequiresPushToTalk; // 0x3dd
	FName SessionName; // 0x3e0
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x60
	FExpressionInput FadeDistance; // 0x98
	float OpacityDefault; // 0xd0
	float FadeDistanceDefault; // 0xd4
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x408
	TArray<AActor*> OverrideInvisibleActors; // 0x418
	TArray<FName> OverrideInvisibleLevels; // 0x428
};

struct UMaterialExpressionVertexNormalWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1c0
	UEnvQueryContext* Context; // 0x1c8
	FAIDataProviderBoolValue PathFromContext; // 0x1d0
	FAIDataProviderBoolValue SkipUnreachable; // 0x200
	UNavigationQueryFilter* FilterClass; // 0x230
};

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x50
	char bRecycleSpawnedSystems : 1; // 0x58
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UThrallComponent : UActorComponent {
	float ClaimRadiusBuilding; // 0x100
	float ClaimRadiusFoliage; // 0x104
	FVector ClaimLocation; // 0x110
	FThrallInfo ThrallInfo; // 0x120
	UUniqueID* OwnerUniqueID; // 0x1a0
	UUniqueID* ThrallUniqueID; // 0x1a8
	bool IsABrush; // 0x1b0
	float DecayStartingTime; // 0x1b4
	FScriptMulticastDelegate OnThrallAIStateChanged; // 0x1b8
	FScriptMulticastDelegate OnThrallStoppedFollowingPlayer; // 0x1c8
	FScriptMulticastDelegate SignalReceivedBreakBondResult; // 0x1d8
	EThrallAIState ThrallAIState; // 0x272
	AConanCharacter* InteractingPlayer; // 0x280
	AConanCharacter* OwnerCharacter; // 0x288
	FVector SavedHomeLocation; // 0x290
	FVector CurrentHomeLocation; // 0x29c
	UMessageBoxWidget* m_BreakBondMessageBox; // 0x2a8
};

struct UCanvasPanel : UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct UBTAuxiliaryNode : UBTNode {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct AEmitterCameraLensEffectBase : AEmitter {
	UParticleSystem* PS_CameraEffect; // 0x420
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x428
	APlayerCameraManager* BaseCamera; // 0x430
	FTransform RelativeTransform; // 0x440
	float BaseFOV; // 0x470
	char bAllowMultipleInstances : 1; // 0x474
	char bResetWhenRetriggered : 1; // 0x474
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x478
	float DistFromCamera; // 0x488
};

struct UCharacterStatsPanel : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0xb8
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x250
	FGuid PrerequisiteActorId; // 0x25c
};

struct UFollowersBoardBase : URootWidget {
	UFollowersListBase* m_FollowersList; // 0x318
	UFollowerLimit* m_FollowersLimit; // 0x320
	DelegateProperty m_UpdatedDelegate; // 0x328
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
	UWorld* World; // 0x38
};

struct UPaperTerrainSplineComponent : USplineComponent {
	FSplineCurves SplineCurves; // 0x6c0
	FInterpCurveVector SplineInfo; // 0x720
	FInterpCurveQuat SplineRotInfo; // 0x738
	FInterpCurveVector SplineScaleInfo; // 0x750
	FInterpCurveFloat SplineReparamTable; // 0x768
	bool bAllowSplineEditingPerInstance; // 0x780
	int32_t ReparamStepsPerSegment; // 0x784
	float Duration; // 0x788
	bool bStationaryEndpoints; // 0x78c
	bool bSplineHasBeenEdited; // 0x78d
	bool bModifiedByConstructionScript; // 0x78e
	bool bInputSplinePointsToConstructionScript; // 0x78f
	bool bDrawDebug; // 0x790
	bool bClosedLoop; // 0x791
	bool bLoopPositionOverride; // 0x792
	float LoopPosition; // 0x794
	FVector DefaultUpVector; // 0x798
};

struct UMaterialExpressionGraniteTextureBase : UMaterialExpression {
	UGraniteTexture* Texture; // 0x60
	int32_t PreviewLayer; // 0x68
};

struct UFloatingNameBase : URootWidget {
	uint32_t MaxPlayerNameLength; // 0x318
	FLinearColor DefaultColor; // 0x31c
	FLinearColor GuildColor; // 0x32c
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UTargetDistributionComponent : UActorComponent {
	FScriptMulticastDelegate OnTargetChanged; // 0xf8
	FScriptMulticastDelegate OnTargetAcquired; // 0x108
	FScriptMulticastDelegate OnTargetLost; // 0x118
	TArray<int32_t> IgnoreCommunities; // 0x128
	TArray<int32_t> AttackCommunities; // 0x138
	TArray<int32_t> FriendlyCommunities; // 0x148
	TMap<EHateType, FHateData> HateData; // 0x158
	TArray<FTargetData> HateList; // 0x1a8
	TArray<AConanCharacter*> IgnoreCharactersList; // 0x1b8
	AConanBasicAIController* OwnerController; // 0x1c8
	AConanAttackerAIController* OwnerAttackerController; // 0x1d0
	AConanCharacter* OwnerCharacter; // 0x1d8
	float InitialProxHateForBuildings; // 0x1e0
	float InitialOrderHate; // 0x1e4
	FTargetWrapper CachedTarget; // 0x1e8
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UNiagaraComponent : UPrimitiveComponent {
	UNiagaraEffect* Asset; // 0x6c0
};

struct UMaterialExpressionGraniteBakeBase : UMaterialExpressionGraniteTextureParameter {
	FExpressionInput Originals[0x4]; // 0x1b0
	FExpressionInput SizeInput; // 0x290
	char bUseBaked : 1; // 0x2c8
	char bIsBakeDirty : 1; // 0x2c8
	uint64_t ShaderGraphHash[0x4]; // 0x2d0
	uint64_t UniformExpressionHash[0x4]; // 0x2f0
	uint64_t BakedShaderGraphHash[0x4]; // 0x310
	uint64_t BakedUniformExpressionHash[0x4]; // 0x330
	char bAlwaysUseMaxSize : 1; // 0x350
	FIntPoint Size; // 0x354
	EGraniteBakerTilingMethod Tiling; // 0x35c
	FGraniteBakerLayerLayout LayerPreset; // 0x360
	int32_t IndexList[0x4]; // 0x3d8
	TArray<UMaterialExpressionMaterialFunctionCall*> BakeCallStack; // 0x3e8
};

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FScriptMulticastDelegate OnQueryFinishedEvent; // 0x68
};

struct UInGameJoinOrInvite : UObject {
	UMessageBoxWidget* m_MessageBox; // 0x128
};

struct UEditableText : UWidget {
	FText Text; // 0x118
	DelegateProperty TextDelegate; // 0x130
	FText HintText; // 0x140
	DelegateProperty HintTextDelegate; // 0x158
	FEditableTextStyle WidgetStyle; // 0x168
	USlateWidgetStyleAsset* Style; // 0x3b0
	USlateBrushAsset* BackgroundImageSelected; // 0x3b8
	USlateBrushAsset* BackgroundImageComposing; // 0x3c0
	USlateBrushAsset* CaretImage; // 0x3c8
	FSlateFontInfo Font; // 0x3d0
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
	FShapedTextOptions ShapedTextOptions; // 0x470
	FScriptMulticastDelegate OnTextChanged; // 0x478
	FScriptMulticastDelegate OnTextCommitted; // 0x488
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x60
	FExpressionInput Depth; // 0x68
};

struct UFCEditableTextBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x410
	char PriorityOverride; // 0x418
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x80
	char bClampAlpha : 1; // 0xb8
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x60
};

struct ATriggerCapsule : ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x3d0
	UBillboardComponent* SpriteComponent; // 0x3d8
};

struct URecipeManager : UItemInventory {
	FScriptMulticastDelegate SignalItemCrafted; // 0x348
	FScriptMulticastDelegate SignalRecipeExecuted; // 0x358
};

struct UGameItemSpawner : UBlueprintFunctionLibrary {
	TMap<FString, UObject*> m_PreLoadedItemClasses; // 0x28
	UDataTable* m_RewardsTable; // 0x118
	URecipeLookup* m_RecipeLookup; // 0x2b8
	UTemplateIdTableAccessor* m_ItemTableAccessor; // 0x2c0
	UTemplateIdTableAccessor* m_RecipeTableAccessor; // 0x2c8
	UTemplateIdTableAccessor* m_EmoteTableAccessor; // 0x2d0
	UTemplateIdTableAccessor* m_FeatTableAccessor; // 0x2d8
	UTemplateIdTableAccessor* m_CraftingStationTableAccessor; // 0x2e0
	UTemplateIdTableAccessor* m_DyeItemTableAccessor; // 0x2e8
	UTemplateIdTableAccessor* m_EquipmentVariationTableAccessor; // 0x2f0
	UTemplateIdTableAccessor* m_ItemStatModificationTableAccessor; // 0x2f8
	UTemplateIdTableAccessor* m_ArtisanItemStatModTableAccessor; // 0x300
	UTemplateIdTableAccessor* m_GameItemVersionDataTableAccessor; // 0x308
	UTemplateIdTableAccessor* m_ExilesJourneyTableAccessor; // 0x310
	UTemplateIdTableAccessor* m_SaddleTableAccessor; // 0x318
};

struct UBP_UIResourceSingleton_C : UUIResourceSingleton {
	UMessageBoxWidget* MessageBoxWidgetClass; // 0x28
	UWindowRoot* MouseBlockWindowClass; // 0x30
	UWidget* LoadingScreenWidget; // 0x38
	UInputBoxWidget* InputBoxWidgetClass; // 0x40
	UGamepadHelpOverlayBase* GamepadHelpOverlayClass; // 0x48
	FSlateSound StartupSound; // 0x50
	FSlateSound LoadingSound; // 0x68
	UTexture2D* RecipeBorderBitmapNormal; // 0x80
	UTexture2D* RecipeBorderBitmapThrall; // 0x88
	UDataTable* SpawnDataTable; // 0x90
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
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

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x80
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FScriptMulticastDelegate OnPlay; // 0x380
	FScriptMulticastDelegate OnStop; // 0x390
	FScriptMulticastDelegate OnPause; // 0x3a0
	char bIsPlaying : 1; // 0x3b0
	char bReversePlayback : 1; // 0x3b0
	char bPendingFirstUpdate : 1; // 0x3b0
	UMovieSceneSequence* Sequence; // 0x3b8
	float TimeCursorPosition; // 0x3c0
	float StartTime; // 0x3c4
	float EndTime; // 0x3c8
	int32_t CurrentNumLoops; // 0x3cc
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3e0
};

struct AFunctionalTestLevelScript : ALevelScriptActor {
	char bInputEnabled : 1; // 0x3d0
};

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct ATargetPoint : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UConanWorldComposition : UWorldComposition {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x88
	UEnvQueryContext* SearchCenter; // 0xb8
};

struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x7c8
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x7d8
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UQueryLiveStreamsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnQueriedLiveStreams; // 0x28
};

struct UEquipmentInventory : UItemInventoryReplicateToAll {
	FScriptMulticastDelegate SignalUnequipAllWeapons; // 0x348
	FScriptMulticastDelegate SignalUnequipWeaponInSlot; // 0x358
	FScriptMulticastDelegate SignalUnequipWeaponToSlot; // 0x368
	FScriptMulticastDelegate SignalEquipPreviouslyEquippedWeapons; // 0x378
	TArray<UGameItem*> m_SheathedWeapons; // 0x390
	TArray<uint32_t> m_SheathedWeaponsUniqueIDs; // 0x3a0
	UItemInventory* m_WeaponInventory; // 0x3b0
};

struct UPersistenceComponent : UActorComponent {
	bool SaveOnSpawn; // 0xf8
	float SaveFrequency; // 0xfc
	bool SkipSaving; // 0x100
	UUniqueID* UID; // 0x108
	FScriptMulticastDelegate OnSignalDataLoaded; // 0x110
	FScriptMulticastDelegate OnSignalPreSave; // 0x120
	bool m_bWasLoadedFromDB; // 0x130
};

struct ULicenseInfoBase : UWindowRoot {
	float PressSpeed; // 0x398
	float RepeatSpeed; // 0x39c
};

struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UInAppPurchaseCallbackProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
	TArray<UWidget*> AllWidgets; // 0x30
};

struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UHoudiniAsset : UObject {
	FString AssetFileName; // 0x28
	UThumbnailInfo* ThumbnailInfo; // 0x38
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x40
};

struct UMaterialExpressionGraniteNoise : UMaterialExpressionNoise {
	float VarZ; // 0xf8
	int32_t UScale; // 0xfc
	int32_t VScale; // 0x100
};

struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	EOrbitChainMode ChainMode; // 0x38
	FRawDistributionVector OffsetAmount; // 0x40
	FOrbitOptions OffsetOptions; // 0x90
	FRawDistributionVector RotationAmount; // 0x98
	FOrbitOptions RotationOptions; // 0xe8
	FRawDistributionVector RotationRateAmount; // 0xf0
	FOrbitOptions RotationRateOptions; // 0x140
};

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
};

struct UFollowersListBase : UCharacterListBase {
	UThrobber* m_IsBusyIndicator; // 0x350
	UFollowersContextMenu* m_FollowersContextMenu; // 0x368
};

struct UHoudiniAttributeDataComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UQosRegionManager : UObject {
	bool bUseOldQosServers; // 0x28
	int32_t NumTestsPerRegion; // 0x2c
	float PingTimeout; // 0x30
	TArray<FQosDatacenterInfo> Datacenters; // 0x38
	FDateTime LastCheckTimestamp; // 0x48
	UQosEvaluator* Evaluator; // 0x50
	EQosCompletionResult QosEvalResult; // 0x58
	TArray<FQosRegionInfo> RegionOptions; // 0x60
	FString ForceRegionId; // 0x70
	FString SelectedRegionId; // 0x80
};

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x140
};

struct UW_FriendRequestEntry_C : UFriendRequestEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UHorizontalBox* ActionsBox; // 0x478
	UW_ButtonCustom_C* B_AcceptFriendRequest; // 0x480
	UW_ButtonCustom_C* B_BlockPlayer; // 0x488
	UW_ButtonCustom_C* B_DeclineFriendRequest; // 0x490
	UW_ButtonCustom_C* B_RevokeFriendRequest; // 0x498
	UBorder* Container; // 0x4a0
};

struct UW_ButtonCustom_C : UW_FCButton_C {
	UNamedSlot* ButtonOverlay; // 0xc28
	UNamedSlot* CheckboxOverlay; // 0xc30
	UW_HotkeyIcon_C* HotkeyIcon; // 0xc38
};

struct UProperyDestructionHistoryBase : UWindowRoot {
	float MinProximity; // 0x398
	float DefaultProximity; // 0x39c
	float MaxProximity; // 0x3a0
	int32_t MinDaysPassed; // 0x3a4
	int32_t DefaultDaysPassed; // 0x3a8
	int32_t MaxDaysPassed; // 0x3ac
	int32_t MaxLogLength; // 0x3b0
	DelegateProperty m_UpdatedDelegate; // 0x448
};

struct UW_FIFOMessageView_C : UFIFOMessageView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358
	UWidgetAnimation* FadeOut; // 0x360
	UWidgetAnimation* FadeIn; // 0x368
	UTextBlock* textView; // 0x370
};

struct UCharacterInventoryView : UExternalInventoryView {
	bool CanItemBeDropedOn; // 0x318
	FScriptMulticastDelegate SignalCouldNotDrop; // 0x320
	DelegateProperty DelegateGetTargetInventory; // 0x330
	AActor* m_Actor; // 0x370
	UItemInventory* m_Inventory; // 0x378
	UItemInventory* m_TargetInventory; // 0x380
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xf8
	UBlackboardData* BlackboardAsset; // 0x100
	TArray<UBlackboardKeyType*> KeyInstances; // 0x128
};

struct UFriendListGame : UWindowRoot {
	UFriendsGame* FriendsWindowBase; // 0x398
	UFriendListEntry* EntryViewClass; // 0x3a0
	int32_t NumOnlineFriends; // 0x3a8
	int32_t NumOfflineFriends; // 0x3ac
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UParticleModuleRotationRateBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UCharacterListBase : URootWidget {
	UCharacterListEntryBase* ListEntryClass; // 0x318
	FName ContextMenuModule; // 0x320
	UNavigatableVerticalBox* m_EntryList; // 0x328
	UContextMenuBase* m_ContextMenu; // 0x330
	UScrollBox* m_ScrollBox; // 0x338
	URootWidget* m_KeyNavAnchor; // 0x340
	UCharacterListEntryBase* m_SelectedEntry; // 0x348
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
};

struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UConanIngameLoadingScreen : UWindowRoot {
	UUserWidget* m_HotkeyIconClass; // 0x398
	FSlateFontInfo m_HintSlateFontInfo; // 0x3a0
	FSlateColor m_HintSlateColor; // 0x408
	FLinearColor m_HintShadowColor; // 0x430
	FVector2D m_HintShadowffset; // 0x440
	FSlateFontInfo m_HintHotKeyTextSlateFontInfo; // 0x448
	FSlateColor m_HintHotKeyTextSlateColor; // 0x4b0
	float m_HintIconSize; // 0x4d8
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UNavigatableGridPanel : UNavigatableWidgetBase {
	int32_t RowLength; // 0x3a8
	TArray<float> ColumnFill; // 0x3b0
	TArray<float> RowFill; // 0x3c0
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x300
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x318
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x320
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
	FName PropertyName; // 0xb8
	FString PropertyPath; // 0xc0
	TArray<UMovieSceneSection*> Sections; // 0xd0
};

struct UMovieSceneStringSection : UMovieSceneSection {
	FStringCurve StringCurve; // 0xd0
};

struct UNavArea : UObject {
	float DefaultCost; // 0x28
	float FixedAreaEnteringCost; // 0x2c
	FColor DrawColor; // 0x30
	FNavAgentSelector SupportedAgents; // 0x34
	char bSupportsAgent0 : 1; // 0x38
	char bSupportsAgent1 : 1; // 0x38
	char bSupportsAgent2 : 1; // 0x38
	char bSupportsAgent3 : 1; // 0x38
	char bSupportsAgent4 : 1; // 0x38
	char bSupportsAgent5 : 1; // 0x38
	char bSupportsAgent6 : 1; // 0x38
	char bSupportsAgent7 : 1; // 0x38
	char bSupportsAgent8 : 1; // 0x38
	char bSupportsAgent9 : 1; // 0x38
	char bSupportsAgent10 : 1; // 0x38
	char bSupportsAgent11 : 1; // 0x38
	char bSupportsAgent12 : 1; // 0x38
	char bSupportsAgent13 : 1; // 0x38
	char bSupportsAgent14 : 1; // 0x38
	char bSupportsAgent15 : 1; // 0x38
};

struct UGuildViewBase : UWindowRoot {
	UFCButton* m_LeaveGuildButton; // 0x398
	UFCButton* m_ShowOffline; // 0x3a0
	UFCButton* m_ButtonEditName; // 0x3a8
	UWidget* m_ShowOfflineMembersContainer; // 0x3b0
	UActionTutorial* m_GamepadCreateText; // 0x3b8
	UTextBlock* m_MouseCreateText; // 0x3c0
	UFCEditableTextBox* m_TextGuildName; // 0x3c8
	UWidgetSwitcher* m_Switcher; // 0x3d0
	UGuildMembersBase* m_GuildMembersList; // 0x3d8
	UGuildLogBase* m_GuildLog; // 0x3e0
	UGuildBoardBase* m_GuildBoard; // 0x3e8
	UFCButton* BlockGuildInvitesButton; // 0x3f0
	UWidget* BlockGuildInvitesContainer; // 0x3f8
	AGuild* m_Guild; // 0x400
	UMessageBoxWidget* m_InviteMessageBox; // 0x420
	UTextBlock* m_OwnedBuildings; // 0x428
	UTextBlock* m_OwnedPlaceables; // 0x430
	UCircularThrobber* m_OwnedBuildingsThrobber; // 0x438
	UCircularThrobber* m_OwnedPlaceablesThrobber; // 0x440
};

struct UMaterialExpressionPixelNormalWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UGetUserCharacterListCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
	TArray<UUniqueID*> idList; // 0x70
	TArray<FCharacterListData> CharacterListData; // 0x80
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct UWidgetComponent : UMeshComponent {
	EWidgetSpace Space; // 0x7c8
	UUserWidget* WidgetClass; // 0x7d0
	FIntPoint DrawSize; // 0x7d8
	bool bManuallyRedraw; // 0x7e0
	bool bRedrawRequested; // 0x7e1
	float RedrawTime; // 0x7e4
	FIntPoint CurrentDrawSize; // 0x7f0
	bool bDrawAtDesiredSize; // 0x7f8
	FVector2D Pivot; // 0x7fc
	bool bReceiveHardwareInput; // 0x804
	bool bWindowFocusable; // 0x805
	ULocalPlayer* ownerPlayer; // 0x808
	FLinearColor BackgroundColor; // 0x810
	FLinearColor TintColorAndOpacity; // 0x820
	float OpacityFromTexture; // 0x830
	EWidgetBlendMode BlendMode; // 0x834
	bool bIsTwoSided; // 0x835
	bool TickWhenOffscreen; // 0x836
	UUserWidget* Widget; // 0x838
	UBodySetup* BodySetup; // 0x860
	UMaterialInterface* TranslucentMaterial; // 0x868
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x870
	UMaterialInterface* OpaqueMaterial; // 0x878
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x880
	UMaterialInterface* MaskedMaterial; // 0x888
	UMaterialInterface* MaskedMaterial_OneSided; // 0x890
	UTextureRenderTarget2D* RenderTarget; // 0x898
	UMaterialInstanceDynamic* MaterialInstance; // 0x8a0
	bool bAddedToScreen; // 0x8a8
	bool bEditTimeUsable; // 0x8a9
	FName SharedLayerName; // 0x8b0
	int32_t LayerZOrder; // 0x8b8
	EWidgetGeometryMode GeometryMode; // 0x8bc
	float CylinderArcAngle; // 0x8c0
};

struct AGlobalMarkerRegistry : AActor {
	TArray<UCharacterMapMarkerComponent*> m_PlayerMapMarkerComponents; // 0x3e0
	TArray<FMapMarker> m_GlobalMarkers; // 0x3f0
};

struct UW_ConanLogo_C : UConanLogoBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0
	UWidgetAnimation* FadeIn; // 0x3a8
};

struct UW_Settings_Gameplay_C : USettingsGameplayBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x650
	UW_ButtonNormal_C* CB_AllowFirstPersonCamera; // 0x658
	UW_ButtonNormal_C* CB_AlwaysShowHealthBars; // 0x660
	UW_ButtonNormal_C* CB_AutoFocusRecipeSearchBar; // 0x668
	UW_ButtonNormal_C* CB_DifferentBarColorClanMembers; // 0x670
	UW_ButtonNormal_C* CB_DisableAutomaticWield; // 0x678
	UW_ButtonNormal_C* CB_EnableAutoFacingOnAttack; // 0x680
	UW_ButtonNormal_C* CB_EnableCameraShake; // 0x688
	UW_ButtonNormal_C* CB_EnableStreamerMode; // 0x690
	UW_ButtonNormal_C* CB_FloatingNames; // 0x698
	UW_ButtonNormal_C* CB_HUDShowBarValues; // 0x6a0
	UW_ButtonNormal_C* CB_LandClaimNotification; // 0x6a8
	UW_ButtonNormal_C* CB_RotatableStationaryCamera; // 0x6b0
	UW_ButtonNormal_C* CB_SendNewItemsToShortcutsWheel; // 0x6b8
	UW_ButtonNormal_C* CB_ShowBuldingHelp; // 0x6c0
	UW_ButtonNormal_C* CB_ShowContextualControls; // 0x6c8
	UW_ButtonNormal_C* CB_ShowHealthBarValueNPCs; // 0x6d0
	UW_ButtonNormal_C* CB_ShowHealthBarValueThralls; // 0x6d8
	UW_ButtonNormal_C* CB_ShowHUDBuffs; // 0x6e0
	UW_ButtonNormal_C* CB_ShowJourneySteps; // 0x6e8
	UW_ButtonNormal_C* CB_ShowWeaponTrails; // 0x6f0
	UW_ButtonNormal_C* CB_ToggleAssignmentRadial; // 0x6f8
	UW_ButtonNormal_C* CB_ToggleDodge; // 0x700
	UW_ButtonNormal_C* CB_ToggleShowHUDDot; // 0x708
	UW_FCComboBoxString_C* CBS_BattleStandardJoinSetting; // 0x710
	UW_FCComboBoxString_C* CBS_BioAccess; // 0x718
	UW_FCComboBoxString_C* CBS_BioSharing; // 0x720
	UW_FCComboBoxString_C* CBS_ChatVisibility; // 0x728
	UW_FCComboBoxString_C* CBS_GamepadStyleMovement; // 0x730
	UW_FCComboBoxString_C* CBS_Language; // 0x738
	UW_FCComboBoxString_C* CBS_SignVisibility; // 0x740
	UW_FCComboBoxString_C* CBS_VisibleSheathedWeapons; // 0x748
	UTextBlock* ChatLabel; // 0x750
	UTextBlock* DoubleTapLabel; // 0x758
	UTextBlock* LanguageLabel; // 0x760
	UW_ButtonNormal_C* Mods_AutoConnect; // 0x768
	UW_ButtonNormal_C* Mods_SubscribeAndDownload; // 0x770
	UTextBlock* NudityLabel; // 0x778
	UW_NudityOption_C* NudityOption; // 0x780
	UW_EditableLabeledSlider_C* S_HealthBarMaxDisplayRange; // 0x788
	UW_EditableLabeledSlider_C* S_HUDBuffScale; // 0x790
	UTextBlock* T_AllowFirstPersonCamera; // 0x798
	UTextBlock* T_EnableAutoFacingOnAttack; // 0x7a0
	UTextBlock* T_Mods_AutoConnect; // 0x7a8
	UTextBlock* T_Mods_SubscribeAndDownload; // 0x7b0
	UTextBlock* T_ShowBuldingHelp; // 0x7b8
	UTextBlock* T_ShowContextualControls; // 0x7c0
	UTextBlock* T_ShowJourneySteps; // 0x7c8
	UTextBlock* T_ShowWeaponTrails; // 0x7d0
	UTextBlock* TextBlock_361; // 0x7d8
	UTextBlock* TextBlock_1216; // 0x7e0
	UW_RootContainer_C* ToolTip_RotatableCamera; // 0x7e8
	UTextBlock* TXT_DisableAutomaticWield; // 0x7f0
	UTextBlock* TXT_GamepadStyleMovement; // 0x7f8
	FSlateColor TextColor; // 0x800
};

struct UW_RatingResultView_C : URatingResultViewBase {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UBuffTracker : UActorComponent {
	FScriptMulticastDelegate OnBuffRegisteredOnServer; // 0xf8
	FScriptMulticastDelegate OnBuffUnregisteredOnServer; // 0x108
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3d0
	float CraneYaw; // 0x3d4
	float CraneArmLength; // 0x3d8
	bool bLockMountPitch; // 0x3dc
	bool bLockMountYaw; // 0x3dd
	USceneComponent* TransformComponent; // 0x3e0
	USceneComponent* CraneYawControl; // 0x3e8
	USceneComponent* CranePitchControl; // 0x3f0
	USceneComponent* CraneCameraMount; // 0x3f8
	UStaticMeshComponent* PreviewMesh_CraneArm; // 0x400
	UStaticMeshComponent* PreviewMesh_CraneBase; // 0x408
	UStaticMeshComponent* PreviewMesh_CraneMount; // 0x410
	UStaticMeshComponent* PreviewMesh_CraneCounterWeight; // 0x418
};

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0x100
	AAIController* AIOwner; // 0x108
};

struct UW_FriendTabButton_C : UTabButtonBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc28
	UNamedSlot* CheckboxOverlay; // 0xc30
	UTextBlock* Counter; // 0xc38
	UTextBlock* LabelView; // 0xc40
	USizeBox* Size; // 0xc48
	FVector2D SizeOverride; // 0xc50
};

struct UHighlightsGetNumberAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UIntStatChangeSignalNode : UObject {
	FScriptMulticastDelegate SignalStatChanged; // 0x28
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	UBoolProperty* BoolProperty; // 0x40
	bool ResetBool; // 0x48
};

struct UPurgeTimer : URootWidget {
	bool PurgeHappening; // 0x318
};

struct ADWGameMode : AGameMode {
	FString DatabaseHost; // 0x4a0
	int32_t DatabasePort; // 0x4b0
	bool DatabaseVerbose; // 0x4b4
	UWorldPersistenceComponent* WorldPersistence; // 0x4b8
};

struct ULightComponentBase : USceneComponent {
	FGuid LightGuid; // 0x300
	float Brightness; // 0x310
	float Intensity; // 0x314
	FColor LightColor; // 0x318
	char bAffectsWorld : 1; // 0x31c
	char CastShadows : 1; // 0x31c
	char CastStaticShadows : 1; // 0x31c
	char CastDynamicShadows : 1; // 0x31c
	char bAffectTranslucentLighting : 1; // 0x31c
	char bCastVolumetricShadow : 1; // 0x31c
	float IndirectLightingIntensity; // 0x320
	float VolumetricScatteringIntensity; // 0x324
};

struct UActorChannel : UChannel {
	AActor* Actor; // 0x68
};

struct AGameModeBase : AInfo {
	FString OptionsString; // 0x3d0
	AGameSession* GameSessionClass; // 0x3e0
	AGameStateBase* GameStateClass; // 0x3e8
	APlayerController* PlayerControllerClass; // 0x3f0
	APlayerState* PlayerStateClass; // 0x3f8
	AHUD* HUDClass; // 0x400
	APawn* DefaultPawnClass; // 0x408
	ASpectatorPawn* SpectatorClass; // 0x410
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x418
	AGameSession* GameSession; // 0x420
	AGameStateBase* GameState; // 0x428
	FText DefaultPlayerName; // 0x430
	char bUseSeamlessTravel : 1; // 0x448
	char bStartPlayersAsSpectators : 1; // 0x448
	char bPauseable : 1; // 0x448
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UControlChannel : UChannel {
	UNetConnection* Connection; // 0x28
};

struct UW_MainMenuButton_C : UW_FCButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc28
	UTextBlock* LabelView; // 0xc30
	FText Label_1; // 0xc38
	FSlateColor HoverColor; // 0xc50
	FSlateColor DefaultColor; // 0xc78
};

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct AConanGameState : ADWGameState {
	ACharacterLodSystem* CharacterLodSystem; // 0x4b0
	TArray<FServerFeatureToggleState> ServerFeatureToggles; // 0x4b8
	FScriptMulticastDelegate SignalGuildReplicated; // 0x510
	bool IsServerDedicated; // 0x520
	bool IsServerOfficial; // 0x521
	int32_t ServerTimezoneHours; // 0x524
	float PlayerHealthMultiplier; // 0x528
	float PlayerStaminaMultiplier; // 0x52c
	bool KickAFKPlayersEnabled; // 0x530
	char UseListenServerHostPlayerLocation : 1; // 0x531
	FVector ListenServerHostPlayerLocation; // 0x534
	USettingsEventDispatchers* UserSettingsEventDispatcher; // 0x540
	TArray<AConanCharacter*> CharactersSecondTick; // 0x548
	float FloatServerRuntime; // 0x5b0
	UChatCommandHelper* m_ChatCommandHelper; // 0x5b8
	TArray<AGuild*> GuildList; // 0x5c0
	TMap<int64_t, FTimerHandle> m_PendingMinionCleanups; // 0x5d0
	UDataTable* m_SpawnDataTable; // 0x638
	UDataTable* m_AIDataTable; // 0x640
	UDataTable* m_DungeonLocations; // 0x648
	UDataTable* m_MountMovementRates; // 0x650
	AServerSettings* ServerSettingsClass; // 0x658
	TArray<UUniqueID*> ReplicatedIds; // 0x660
	AServerSettings* ServerSettings; // 0x670
	AVaultManager* m_VaultManager; // 0x1010
	char ListenServerWorldIsLoaded : 1; // 0x1028
	TArray<AConanCharacter*> SecondTickingCharacters; // 0x11b8
};

struct UW_Settings_Video_C : USettingsVideoBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458
	UW_ButtonCustom_C* B_SafeZone; // 0x460
	UW_ButtonNormal_C* CB_FilmGrain; // 0x468
	UW_ButtonNormal_C* CB_LowEndLaptopMode; // 0x470
	UW_ButtonNormal_C* CB_MotionBlur; // 0x478
	UW_ButtonNormal_C* CB_VolumetricFog; // 0x480
	UW_ButtonNormal_C* CB_Vsync; // 0x488
	UW_FCComboBoxString_C* CBS_AntiAliasing; // 0x490
	UW_FCComboBoxString_C* CBS_ConsoleGraphicsPreset; // 0x498
	UW_FCComboBoxString_C* CBS_EffectsQuality; // 0x4a0
	UW_FCComboBoxString_C* CBS_FoliageQuality; // 0x4a8
	UW_FCComboBoxString_C* CBS_GeneralShadows; // 0x4b0
	UW_FCComboBoxString_C* CBS_GraphicsQuality; // 0x4b8
	UW_FCComboBoxString_C* CBS_MaxFPS; // 0x4c0
	UW_FCComboBoxString_C* CBS_PostProcessing; // 0x4c8
	UW_FCComboBoxString_C* CBS_Resolution; // 0x4d0
	UTextBlock* CBS_ResolutionLabel; // 0x4d8
	UW_FCComboBoxString_C* CBS_TerrainShadows; // 0x4e0
	UW_FCComboBoxString_C* CBS_TextureQuality; // 0x4e8
	UW_FCComboBoxString_C* CBS_ViewDistance; // 0x4f0
	UW_FCComboBoxString_C* CBS_WindowMode; // 0x4f8
	UGridPanel* GRID_CONSOLEPERFORMANCEMODE; // 0x500
	UGridPanel* GRID_FOV; // 0x508
	UGridPanel* GRID_FPS; // 0x510
	UGridPanel* GRID_Gamma; // 0x518
	UGridPanel* GRID_GRAPHICSQUALITY; // 0x520
	UGridPanel* GRID_MotionBlur; // 0x528
	UGridPanel* Grid_SafeZone; // 0x530
	UGridPanel* GRID_VolumetricFog; // 0x538
	UGridPanel* GRID_VSYNC; // 0x540
	UGridPanel* GRID_WinRes; // 0x548
	UOverlay* Overlay_4; // 0x550
	UW_EditableLabeledSlider_C* S_FOV; // 0x558
	UW_EditableLabeledSlider_C* S_Gamma; // 0x560
	UTextBlock* TextHFOVValue; // 0x568
};

struct UFriendsGame : UWindowRoot {
	bool m_bIsPromptOpen; // 0x3ac
	TMap<EFriendListHotkey, FGamepadHotkeyHelp> m_FriendListHotkeys; // 0x8d0
};

struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	FRawDistributionVector Position; // 0x30
	FRawDistributionFloat range; // 0x80
	FRawDistributionFloat Strength; // 0xb8
	char StrengthByDistance : 1; // 0xf0
	char bAffectBaseVelocity : 1; // 0xf0
	char bOverrideVelocity : 1; // 0xf0
	char bUseWorldSpacePosition : 1; // 0xf0
	char Positive_X : 1; // 0xf0
	char Positive_Y : 1; // 0xf0
	char Positive_Z : 1; // 0xf0
	char Negative_X : 1; // 0xf0
	char Negative_Y : 1; // 0xf0
	char Negative_Z : 1; // 0xf0
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMediaTexture : UTexture {
	TextureAddress AddressX; // 0xd0
	TextureAddress AddressY; // 0xd1
	FLinearColor ClearColor; // 0xd4
	UMediaPlayer* MediaPlayer; // 0xe8
	int32_t VideoTrackIndex; // 0xf0
};

struct UPartyMemberState : UObject {
	FUniqueNetIdRepl UniqueID; // 0x28
	FText DisplayName; // 0x40
	UScriptStruct* MemberStateRefDef; // 0x58
	bool bHasAnnouncedJoin; // 0x70
};

struct UW_ServerList_C : UServerListBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x520
	UImage* ASSIGNED_IN_CODE__I_CommunityBackground; // 0x528
	UW_ButtonNormal_C* B_Back; // 0x530
	UW_ButtonCustom_C* B_ClearPing; // 0x538
	UW_ButtonCustom_C* B_ClearServerSearch; // 0x540
	UW_ButtonNormal_C* B_DConnectBack; // 0x548
	UW_ButtonNormal_C* B_DConnectOk; // 0x550
	UW_ButtonNormal_C* B_DirectConnect; // 0x558
	UW_ButtonCustom_C* B_Level; // 0x560
	UW_ButtonNormal_C* B_MainBack; // 0x568
	UW_ButtonNormal_C* B_MainFavorite; // 0x570
	UW_ButtonNormal_C* B_MainGPortal; // 0x578
	UW_ButtonNormal_C* B_MainJoin; // 0x580
	UW_ButtonNormal_C* B_MainRefresh; // 0x588
	UW_ButtonNormal_C* B_MainUnfavorite; // 0x590
	UW_ButtonCustom_C* B_ServerRating; // 0x598
	UW_ButtonCustom_C* B_ServerSettings; // 0x5a0
	UW_ButtonNormal_C* B_SkipToList; // 0x5a8
	UW_ButtonCustom_C* B_SortOnAge; // 0x5b0
	UW_ButtonCustom_C* B_SortOnBattleye; // 0x5b8
	UW_ButtonCustom_C* B_SortOnMap; // 0x5c0
	UW_ButtonCustom_C* B_SortOnName; // 0x5c8
	UW_ButtonCustom_C* B_SortOnOfficial; // 0x5d0
	UW_ButtonCustom_C* B_SortOnPing; // 0x5d8
	UW_ButtonCustom_C* B_SortOnPlayers; // 0x5e0
	UW_ButtonCustom_C* B_SortOnRegion; // 0x5e8
	UW_ButtonCustom_C* B_SortOnType; // 0x5f0
	UBorder* Brd_SelectBackground; // 0x5f8
	UBorder* Brd_ServerList; // 0x600
	UW_ButtonNormal_C* CB_FullServersFilter; // 0x608
	UW_ButtonNormal_C* CB_ModsEnabledFilter; // 0x610
	UW_ButtonNormal_C* CB_ModsVacEnabledFilter; // 0x618
	UW_ButtonNormal_C* CB_NEVERAGAIN; // 0x620
	UW_ButtonNormal_C* CB_ShowInvalidServersFilter; // 0x628
	UW_ButtonNormal_C* CB_ShowPrivateServersFilter; // 0x630
	UW_FCComboBoxString_C* CBS_CombatTypeFilter; // 0x638
	UW_FCComboBoxString_C* CBS_CommunityFilter; // 0x640
	UW_FCComboBoxString_C* CBS_MapFilter; // 0x648
	UW_FCComboBoxString_C* CBS_Population; // 0x650
	UW_FCComboBoxString_C* CBS_RegionFilter; // 0x658
	UW_FCComboBoxString_C* CBS_SteamFilter; // 0x660
	UTextBlock* GPortalLabel; // 0x668
	UHorizontalBox* HB_MapFilter; // 0x670
	UImage* I_GPortalLogo; // 0x678
	UImage* I_SortArrowAge; // 0x680
	UImage* I_SortArrowBattleye; // 0x688
	UImage* I_SortArrowLevel; // 0x690
	UImage* I_SortArrowMap; // 0x698
	UImage* I_SortArrowMode; // 0x6a0
	UImage* I_SortArrowName; // 0x6a8
	UImage* I_SortArrowOfficial; // 0x6b0
	UImage* I_SortArrowPing; // 0x6b8
	UImage* I_SortArrowPlayers; // 0x6c0
	UImage* I_SortArrowRegion; // 0x6c8
	UImage* Image_1; // 0x6d0
	UImage* Image_382; // 0x6d8
	UImage* Image_383; // 0x6e0
	UW_FCEditableTextBlock_C* InputT_NameSearchFilter; // 0x6e8
	UW_FCEditableTextBlock_C* InputT_PingFilter; // 0x6f0
	UTextBlock* ListUpdateProgressView; // 0x6f8
	UW_ServerListView_C* ServerList; // 0x700
	UScrollBox* ServerListScrollBox; // 0x708
	UVerticalBox* ServerMods; // 0x710
	UThrobber* ServerModsTrobber; // 0x718
	UVerticalBox* ServerSettings; // 0x720
	UVerticalBox* SteamOptions; // 0x728
	UW_FCEditableTextBlock_C* T_DConnectIP; // 0x730
	UW_FCEditableTextBlock_C* T_DConnectPassword; // 0x738
	UTextBlock* T_NonSteamMods; // 0x740
	UTextBlock* T_SteamMods; // 0x748
	UThrobber* Throbber_SeacrhIndicator; // 0x750
	UVerticalBox* VB_Mods; // 0x758
	UW_PvPSelection_C* W_CombatModePicker; // 0x760
	UBorder* W_DirectConnect; // 0x768
	UBorder* W_MainWindow; // 0x770
	TArray<FString> ServerTypeOptions; // 0x778
	TArray<FString> CombatTypeOptions; // 0x788
	TArray<FString> CommunityOptions; // 0x798
	FTimerHandle ConnectTimeOutHandle; // 0x7a8
	bool FindOffical; // 0x7b0
	FLinearColor DeselectedColor; // 0x7b4
	FLinearColor SelectedColor; // 0x7c4
	FBlueprintSessionResult JoiningSession; // 0x7d8
	UModDetailsRequest* ModDetailsRequest; // 0x8b8
	bool ClientIsAmerican; // 0x8c0
	int32_t LastSelection; // 0x8c4
	bool ValidJoiningSession; // 0x8c8
	float ScrollOffset; // 0x8cc
	URootWidget* NextWidget; // 0x8d0
	FWidgetTransform GPortalTransformDefault; // 0x8d8
	FWidgetTransform GPortalTransformController; // 0x8f4
	TArray<EServerType> CombatTypeIndexes; // 0x910
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x60
	FExpressionInput RotationAngle; // 0x98
	FExpressionInput PivotPoint; // 0xd0
	FExpressionInput Position; // 0x108
	float Period; // 0x140
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UEscapeStackNode : UObject {
	DelegateProperty SignalActivated; // 0x28
	DelegateProperty SignalActivatedBP; // 0x38
	bool ShouldEatInput; // 0x48
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x3d0
};

struct AAILODSystem : AActor {
	TArray<UAILODComponent*> ActiveLODComponents; // 0x4b8
	TArray<UAILODComponent*> m_AILODComponents; // 0x4c8
	TSet<UAILODComponent*> MarkedForAdd; // 0x4d8
	TMap<UAILODComponent*, FSuspendCallbackComponentEntry> m_SuspendCallbacks; // 0x578
	TArray<int32_t> m_LODCounter; // 0x6a0
	TArray<FAILODInfo> m_DebugAILODs; // 0x6b0
	char m_ShowAILOD : 1; // 0x6c0
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x68
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x6c
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x68
};

struct UNavMovementComponent : UMovementComponent {
	FNavAgentProperties NavAgentProps; // 0x150
	float FixedPathBrakingDistance; // 0x170
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x174
	char bUseAccelerationForPaths : 1; // 0x174
	char bUseFixedBrakingDistanceForPaths : 1; // 0x174
	FMovementProperties MovementState; // 0x178
};

struct UKeyBindingsEntryBase : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UStringEnumDataTableDataprovider : UStringEnumDataprovider {
	UDataTable* m_TableRef; // 0x30
	UDataTable* m_Table; // 0x50
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28
};

struct AConanHumanAIController : AConanAttackerAIController {
	bool ShouldChangeRotationRateFromCode; // 0x678
	bool PickRandomWeaponAfterAttack; // 0x679
	bool PickBestWeapon; // 0x67a
	bool PickBestWeaponAfterAttack; // 0x67b
	float PickBestWeaponDelay; // 0x67c
	float MaxArcherRange; // 0x680
	UItemInventory* WeaponInventory; // 0x698
	UGameItem* CurrentWeapon; // 0x6a0
	UStaticTarget* CachedStopOrderTarget; // 0x6c0
	UTargetDistributionComponent* TargetingComponent; // 0x6d8
	float StatrSprintDistance; // 0x6e0
	float StopSprintDistance; // 0x6e4
	float OptimalShootingDistance; // 0x6e8
	float BlockActionMinDuration; // 0x6ec
	float BlockOnAttackedMinDuration; // 0x6f0
	float BlockMaxDuration; // 0x6f4
	float BlockChance; // 0x6f8
	float BlockChanceWhenAttacked; // 0x6fc
	float TimeAtBlockStart; // 0x700
	float CurrentBlockMinDuration; // 0x704
	float AttackAngleCone; // 0x708
	APurgeVolume* CurrentPurgeVolume; // 0x710
	int32_t HateListTargetsThresholdForBuildingDetection; // 0x724
	bool DidLastMovementSucceed; // 0x728
	bool DidLastAttackSucceed; // 0x729
	float EndLeashingDistanceFromHomeSqr; // 0x72c
	float DefaultRotationRate; // 0x730
	float PassiveRotationRate; // 0x734
};

struct UOverlay : UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x118
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x60
	char bNormalizeCustomWorldNormal : 1; // 0x98
};

struct UW_KeyBindings_Button_C : UKeyBindingsKeyBase {
	UW_HotkeyIcon_C* BoundKeyIcon; // 0x4e0
	UTextBlock* BoundKeyName; // 0x4e8
	UButton* MappingButton; // 0x4f0
};

struct UMaterialSwapComponent : UActorComponent {
	UMaterialInterface* highQualityMaterial; // 0x100
	UMaterialInterface* lowQualityMaterial; // 0x120
};

struct UWidget : UVisual {
	bool bIsVariable; // 0x28
	bool bCreatedByConstructionScript; // 0x29
	UPanelSlot* Slot; // 0x30
	bool bIsEnabled; // 0x38
	DelegateProperty bIsEnabledDelegate; // 0x40
	FText ToolTipText; // 0x50
	DelegateProperty ToolTipTextDelegate; // 0x68
	UWidget* TooltipWidget; // 0x78
	DelegateProperty ToolTipWidgetDelegate; // 0x80
	ESlateVisibility Visiblity; // 0x90
	ESlateVisibility Visibility; // 0x91
	DelegateProperty VisibilityDelegate; // 0x98
	char bOverride_Cursor : 1; // 0xa8
	EMouseCursor Cursor; // 0xac
	bool bIsVolatile; // 0xad
	FWidgetTransform RenderTransform; // 0xb0
	FVector2D RenderTransformPivot; // 0xcc
	UWidgetNavigation* Navigation; // 0xd8
	TArray<UPropertyBinding*> NativeBindings; // 0x108
};

struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x50
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x60
	float G; // 0x64
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x6e0
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x198
};

struct UAdjustableCameraComponent : UCameraComponent {
	float PerspectiveNearClipPlane; // 0x850
};

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UConanBuildingPersistenceComponent : UActorPersistenceComponent {
	TSet<ABuildingBase*> BuildingsWithSocketlessConnections; // 0x188
};

struct APoiProtection : AActor {
	FTimespan MinCheckRate; // 0x3d8
	float CheckRadius; // 0x3e0
	float CheckAngle; // 0x3e4
	float CheckHeight; // 0x3e8
	float DegreesBetweenTraces; // 0x3ec
	float HeightBetweenTraces; // 0x3f0
	float MaxPercentageThreshold; // 0x3f4
	bool ShowDebugTraces; // 0x3f8
	UAILODComponent* AiLodComp; // 0x400
	TSet<ABuildableBase*> AllBuildingsInArea; // 0x408
};

struct UAsyncGetPlaceablesInAreaProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnFinished; // 0x28
	FVector m_Center; // 0x40
	float m_AreaRadius; // 0x4c
	TArray<AActor*> m_Actors; // 0x50
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x80
	FRawDistributionFloat Angle; // 0xb8
	FRawDistributionFloat Thickness; // 0xf0
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xe0
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UTestPhaseComponent : USceneComponent {
	USceneComponent* AttachParent; // 0xf8
	TArray<USceneComponent*> AttachChildren; // 0x100
	TSet<USceneComponent*> ClientAttachedChildren; // 0x110
	FName AttachSocketName; // 0x160
	char bWorldToComponentUpdated : 1; // 0x168
	char bAbsoluteLocation : 1; // 0x168
	char bAbsoluteRotation : 1; // 0x168
	char bAbsoluteScale : 1; // 0x168
	char bVisible : 1; // 0x168
	char bHiddenInGame : 1; // 0x168
	char bShouldUpdatePhysicsVolume : 1; // 0x168
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x168
	char bUseAttachParentBound : 1; // 0x168
	char bShouldDisregardChildComponentsForNavigationUpdates : 1; // 0x168
	char bShouldDisregardAttachedActorsForNavigationUpdates : 1; // 0x168
	EComponentMobility Mobility; // 0x16d
	EDetailMode DetailMode; // 0x16e
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0x170
	FVector RelativeLocation; // 0x1f0
	FRotator RelativeRotation; // 0x1fc
	FVector RelativeScale3D; // 0x230
	FVector ComponentVelocity; // 0x258
	FScriptMulticastDelegate PhysicsVolumeChangedDelegate; // 0x268
};

struct UGetOwnerCallProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UW_Settings_C : USettingsBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x520
	UW_ButtonLarge_C* B_Apply; // 0x528
	UW_ButtonLarge_C* B_Back; // 0x530
	UW_ButtonLarge_C* B_ConfirmDialog_Accept; // 0x538
	UW_ButtonLarge_C* B_ConfirmDialog_Revert; // 0x540
	UW_ButtonNormal_C* B_Cross; // 0x548
	UW_ButtonLarge_C* B_RestoreDefaults; // 0x550
	UW_TabButton_C* B_Submenu_Audio; // 0x558
	UW_TabButton_C* B_Submenu_Control; // 0x560
	UW_TabButton_C* B_Submenu_GamepadPresets; // 0x568
	UW_TabButton_C* B_Submenu_Gameplay; // 0x570
	UW_TabButton_C* B_Submenu_KeyBindings; // 0x578
	UW_TabButton_C* B_Submenu_ServerSettings; // 0x580
	UW_TabButton_C* B_Submenu_Video; // 0x588
	UBorder* Brd_GameWindow; // 0x590
	UBorder* ConfirmSettings; // 0x598
	UW_HotkeyIcon_C* LeftNavigationIcon; // 0x5a0
	UWidgetSwitcher* MenuSwitcher; // 0x5a8
	UW_HotkeyIcon_C* RightNavigationIcon; // 0x5b0
	UTextBlock* T_RestoreDefaultLabel; // 0x5b8
	UTextBlock* Timer; // 0x5c0
	UW_Settings_Audio_C* W_Settings_Audio; // 0x5c8
	UW_Settings_Control_C* W_Settings_Control; // 0x5d0
	UW_Settings_Gameplay_C* W_Settings_Gameplay; // 0x5d8
	UW_Settings_KeyBindings_C* W_Settings_KeyBindings; // 0x5e0
	UW_Settings_Server_C* W_Settings_Server; // 0x5e8
	UW_Settings_Video_C* W_Settings_Video; // 0x5f0
	UW_SettingsGamepadPreset_C* W_SettingsGamepadPreset; // 0x5f8
	int32_t TimerValue; // 0x600
	FScriptMulticastDelegate OnClose; // 0x608
	FTimerHandle ConfirmVideoDialogTimerHandle; // 0x618
	FScriptMulticastDelegate SlotESCPressed; // 0x620
	UEscapeStackNode* VideoConfirmESCStackNode; // 0x630
};

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xc8
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0xd8
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0xe8
};

struct UParticleModuleCollision : UParticleModuleCollisionBase {
	FRawDistributionVector DampingFactor; // 0x30
	FRawDistributionVector DampingFactorRotation; // 0x80
	FRawDistributionFloat MaxCollisions; // 0xd0
	EParticleCollisionComplete CollisionCompletionOption; // 0x108
	TArray<EObjectTypeQuery> CollisionTypes; // 0x110
	char bApplyPhysics : 1; // 0x128
	char bIgnoreTriggerVolumes : 1; // 0x128
	FRawDistributionFloat ParticleMass; // 0x130
	float DirScalar; // 0x168
	char bPawnsDoNotDecrementCount : 1; // 0x16c
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x16c
	float VerticalFudgeFactor; // 0x170
	FRawDistributionFloat DelayAmount; // 0x178
	char bDropDetail : 1; // 0x1b0
	char bCollideOnlyIfVisible : 1; // 0x1b0
	char bIgnoreSourceActor : 1; // 0x1b0
	float MaxCollisionDistance; // 0x1b4
};

struct UPlanarReflectionComponent : USceneCaptureComponent {
	UBoxComponent* PreviewBox; // 0x3e0
	float NormalDistortionStrength; // 0x3e8
	float PrefilterRoughness; // 0x3ec
	float PrefilterRoughnessDistance; // 0x3f0
	int32_t ScreenPercentage; // 0x3f4
	float ExtraFOV; // 0x3f8
	float DistanceFromPlaneFadeStart; // 0x3fc
	float DistanceFromPlaneFadeEnd; // 0x400
	float DistanceFromPlaneFadeoutStart; // 0x404
	float DistanceFromPlaneFadeoutEnd; // 0x408
	float AngleFromPlaneFadeStart; // 0x40c
	float AngleFromPlaneFadeEnd; // 0x410
	bool bRenderSceneTwoSided; // 0x414
};

struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x4f8
	char AllowPlayerPortUnreach : 1; // 0x4f8
	uint32_t MaxPortCountToTry; // 0x4fc
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x80
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct ASiptahStormController : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UInventoryFilterSelector : URootWidget {
	bool ShowEncumbrance; // 0x318
	bool ShowDLCFilter; // 0x319
	int32_t AllowedSortModes; // 0x31c
	FScriptMulticastDelegate SignalFilterToggled; // 0x320
	FScriptMulticastDelegate SignalSearchStringChanged; // 0x330
	FScriptMulticastDelegate SignalSortTypeChanged; // 0x340
	FScriptMulticastDelegate SignalDLCFilterChanged; // 0x350
	FSlateSound SortButtonPressedSound; // 0x360
	FSlateSound FilterButtonPressedSound; // 0x378
	TArray<FDLCFilterEntry> DLCFilterList; // 0x390
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x68
};

struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	Beam2SourceTargetMethod SourceMethod; // 0x30
	FName SourceName; // 0x38
	char bSourceAbsolute : 1; // 0x40
	FRawDistributionVector Source; // 0x48
	char bLockSource : 1; // 0x98
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x9c
	FRawDistributionVector SourceTangent; // 0xa0
	char bLockSourceTangent : 1; // 0xf0
	FRawDistributionFloat SourceStrength; // 0xf8
	char bLockSourceStength : 1; // 0x130
};

struct USaveLevelCallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UPlayFabMultiplayerAPI : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate OnPlayFabResponse; // 0x28
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x400
	UPlayFabJsonObject* RequestJsonObj; // 0x408
	UPlayFabJsonObject* ResponseJsonObj; // 0x410
};

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0x150
	FVector PivotTranslation; // 0x15c
	char bRotationInLocalSpace : 1; // 0x168
};

struct UHighlightsSummaryAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xe8
	UNavigationQueryFilter* NavigationFilter; // 0x118
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x120
};

struct UInventoryIconView_C : UInventoryIconViewBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x480
	UWidgetAnimation* Anim_CannotMove; // 0x488
	UWidgetAnimation* Anim_Repair; // 0x490
	UWidgetAnimation* Anim_Filter; // 0x498
	UWidgetAnimation* Anim_Move; // 0x4a0
};

struct UFCRichTextBlock : URichTextBlock {
	FText Text; // 0x148
	DelegateProperty TextDelegate; // 0x160
	FSlateFontInfo Font; // 0x170
	FLinearColor Color; // 0x1d8
	TArray<URichTextBlockDecorator*> Decorators; // 0x1e8
};

struct AConanGameSession : AGameSession {
	UServerStatReporter* m_serverStatReporter; // 0x3e8
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct USmoketestFrameworkWorldDataObject : UObject {
	UWorld* m_World; // 0x28
};

struct UMaterialExpressionTextureObject : UMaterialExpressionTextureBase {
	UTexture* Texture; // 0x60
	EMaterialSamplerType SamplerType; // 0x68
	char IsDefaultMeshpaintTexture : 1; // 0x6c
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UPetInventory : UItemInventory {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UDLCListBase : UWindowRoot {
	UDLCEntryViewBase* DLCEntryClass; // 0x398
};

struct UDWGameInstance : UGameInstance {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x50
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0xb8
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xc0
};

struct UW_RadialShortcutbarIconSlot_C : UShortcutIconBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	UBorder* DurabilityContainer; // 0x498
	UInventoryGridSlotView_C* IconSlotView; // 0x4a0
	UInventoryIconView_C* IconView; // 0x4a8
	UImage* IsActiveView; // 0x4b0
	UProgressBar* PB_Durabilty; // 0x4b8
};

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x408
	int32_t Priority; // 0x40c
	float FluidFriction; // 0x410
	char bWaterVolume : 1; // 0x414
	char bPhysicsOnContact : 1; // 0x414
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x3d0
};

struct UW_ShortcutIcon_C : UShortcutIconBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	UTextBlock* ActionMappingDisplay; // 0x498
	UBorder* DurabilityContainer; // 0x4a0
	UW_HotkeyIcon_C* HotkeyIcon; // 0x4a8
	UInventoryGridSlotView_C* IconSlotView; // 0x4b0
	UInventoryIconView_C* IconView; // 0x4b8
	UImage* IsActiveView; // 0x4c0
	UProgressBar* PB_Durabilty; // 0x4c8
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x60
};

struct UTileView : UTableViewBase {
	float ItemWidth; // 0x118
	float ItemHeight; // 0x11c
	TArray<UObject*> Items; // 0x120
	ESelectionMode SelectionMode; // 0x130
	DelegateProperty OnGenerateTileEvent; // 0x138
};

struct UMaterialExpressionParticlePositionWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x3d8
	float BeaconConnectionTimeout; // 0x3dc
	UNetDriver* NetDriver; // 0x3e0
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UUniqueID : UObject {
	int64_t UID; // 0x30
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
};

struct ULandscapeSplineControlPoint : UObject {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	float Width; // 0x40
	float SideFalloff; // 0x44
	float EndFalloff; // 0x48
	TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x50
	TArray<FLandscapeSplineInterpPoint> Points; // 0x60
	FBox Bounds; // 0x70
	UControlPointMeshComponent* LocalMeshComponent; // 0x90
};

struct UHoudiniAssetComponent : UPrimitiveComponent {
	char bGeneratedDoubleSidedGeometry : 1; // 0x6c8
	UPhysicalMaterial* GeneratedPhysMaterial; // 0x6d0
	ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x6d8
	int32_t GeneratedLightMapResolution; // 0x6dc
	float GeneratedLpvBiasMultiplier; // 0x6e0
	float GeneratedDistanceFieldResolutionScale; // 0x6e4
	FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x6e8
	int32_t GeneratedLightMapCoordinateIndex; // 0x6f8
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x6fc
	float GeneratedStreamingDistanceMultiplier; // 0x700
	UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x708
	TArray<UAssetUserData*> GeneratedAssetUserData; // 0x710
	FText BakeFolder; // 0xb98
	FText TempCookFolder; // 0xbb0
};

struct UCharacterTransferBase : UWindowRoot {
	UFCComboBoxString* CBS_MapSelect; // 0x398
	TArray<FString> UnlocalizedMapNames; // 0x3a0
	UDbTransfer* DbTransfer; // 0x3b0
	FTimerHandle TimeoutTimer; // 0x3b8
};

struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x60
	FExpressionInput X; // 0x98
};

struct AConanBasicAIController : AConanBaseAIController {
	float FleeRange; // 0x568
	float MaxRoamingRange; // 0x56c
	bool CanRoam; // 0x570
	bool PurgeShouldReturnHome; // 0x571
	UObject* BehaviorParameters; // 0x578
	float CheckIfOffNavmeshInterval; // 0x580
	float TotalTimeToCheckIfOffNavmesh; // 0x584
	bool bIsPatroling; // 0x588
	AConanCharacter* FleeActor; // 0x5b8
	bool bIsSuiciding; // 0x600
	UNavigationQueryFilter* DefaultNavQueryFilterObject; // 0x618
};

struct UEncumbranceSystem : UConanCharacterComponent {
	TArray<float> EncumbranceTierThresholds; // 0x100
	EEncumbranceTiers CurrentEncumbranceTier; // 0x110
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FString OutputName; // 0x60
	FString Description; // 0x70
	int32_t SortPriority; // 0x80
	FExpressionInput A; // 0x88
	char bLastPreviewed : 1; // 0xc0
	FGuid ID; // 0xc4
};

struct AMeshMergeCullingVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x198
	FGuid ExpressionGUID; // 0x1a0
	FName Group; // 0x1b0
};

struct UGeometryCacheComponent : UMeshComponent {
	UGeometryCache* GeometryCache; // 0x7c8
	bool bRunning; // 0x7d0
	bool bLooping; // 0x7d1
	float StartTimeOffset; // 0x7d4
	float PlaybackSpeed; // 0x7d8
	int32_t NumTracks; // 0x7dc
	float ElapsedTime; // 0x7e0
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	FExpressionInput Input; // 0x80
	char DefaultR : 1; // 0xb8
	char DefaultG : 1; // 0xb8
	char DefaultB : 1; // 0xb8
	char DefaultA : 1; // 0xb8
};

struct UW_KeyBindings_Category_C : UKeyBindingsCategoryBase {
	UVerticalBox* Bindings; // 0x4c0
	UTextBlock* Category; // 0x4c8
};

struct UW_ServerListView_C : UServerListView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x620
	UW_NavigatableGridPanel_C* ServerList; // 0x628
	FScriptMulticastDelegate ScrollToMe; // 0x630
};

struct UItemDistributorComponent : UQuadtreeComponent {
	TArray<EObjectTypeQuery> ObjectTypesToTraceFor; // 0x310
	float TraceRadius; // 0x320
	TArray<AActor*> ItemRequesterActors; // 0x328
	int32_t QuantityToMovePerCycle; // 0x338
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UConanLogoBase : URootWidget {
	UTexture2D* OutcastLogo; // 0x318
	UTexture2D* ExilesLogo; // 0x338
	UTexture2D* ExilesLogo_Old; // 0x358
	UTexture2D* OutcastLogo_Old; // 0x378
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UNavLinkTrivial : UNavLinkDefinition {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0x90
	USoundNode* FirstNode; // 0x98
	float VolumeMultiplier; // 0xa0
	float PitchMultiplier; // 0xa4
	FSoundAttenuationSettings AttenuationOverrides; // 0xa8
};

struct ATriggerVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x1b8
	ETextureColorChannel Channel; // 0x1bc
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1c0
	UEnvQueryContext* DistanceTo; // 0x1c8
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x60
	float Exponent; // 0x98
	FExpressionInput BaseReflectFractionIn; // 0xa0
	float BaseReflectFraction; // 0xd8
	FExpressionInput Normal; // 0xe0
};

struct UShapeComponent : UPrimitiveComponent {
	FColor ShapeColor; // 0x6c0
	UBodySetup* ShapeBodySetup; // 0x6c8
	char bDrawOnlyIfSelected : 1; // 0x6d0
	char bShouldCollideWhenPlacing : 1; // 0x6d0
	char bDynamicObstacle : 1; // 0x6d0
	UNavArea* AreaClass; // 0x6d8
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

struct USettingsGameplayBase : USubSettingsMaster {
	FScriptMulticastDelegate SignalOnSettingsChanged; // 0x328
	ENudity m_LastNudity; // 0x338
	FText English; // 0x340
	FText German; // 0x358
	FText Italian; // 0x370
	FText Spanish; // 0x388
	FText French; // 0x3a0
	FText Russian; // 0x3b8
	FText Polish; // 0x3d0
	FText Brazilian; // 0x3e8
	FText Korean; // 0x400
	FText Japanese; // 0x418
	FText SimplifiedChinese; // 0x430
	FText TraditionalChinese; // 0x448
};

struct UNpcSpawnerComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UPetAttributeView : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UMaterialExpressionLightVector : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x38
};

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterial* PhysMaterial; // 0x70
	UMaterialInterface* Parent; // 0x78
	char bHasStaticPermutationResource : 1; // 0x80
	char bOverrideSubsurfaceProfile : 1; // 0x80
	TArray<FFontParameterValue> FontParameterValues; // 0x88
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x98
	TArray<FTextureParameterValue> TextureParameterValues; // 0xa8
	TArray<FGraniteTextureParameterValue> GraniteTextureParameterValues; // 0xb8
	TArray<FString> GraniteErrors; // 0xc8
	TArray<FVectorParameterValue> VectorParameterValues; // 0xd8
	bool bOverrideBaseProperties; // 0xe8
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xec
};

struct USoundNodeRandom : USoundNode {
	TArray<float> Weights; // 0x38
	int32_t PreselectAtLevelLoad; // 0x48
	char bRandomizeWithoutReplacement : 1; // 0x4c
	TArray<bool> HasBeenUsed; // 0x50
	int32_t NumRandomUsed; // 0x60
};

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UFriendRequestGame : UWindowRoot {
	UFriendsGame* FriendsWindowBase; // 0x398
	UFriendRequestEntry* EntryViewClass; // 0x3a0
	int32_t NumReceivedFriendRequests; // 0x3a8
	int32_t NumSentFriendRequests; // 0x3ac
};

struct UW_Settings_KeyBindings_C : USettingsKeyBindingsBase {
	UW_KeyBindings_Commands_C* Commands; // 0x3c8
	UScrollBox* MappingsScrollBox; // 0x3d0
	UVerticalBox* VB_KeyBindingsList; // 0x3d8
};

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FRichCurve Curves[0x4]; // 0xd0
	int32_t ChannelsUsed; // 0x290
};

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UUIResourceSingleton : UObject {
	UMessageBoxWidget* MessageBoxWidgetClass; // 0x28
	UWindowRoot* MouseBlockWindowClass; // 0x30
	UWidget* LoadingScreenWidget; // 0x38
	UInputBoxWidget* InputBoxWidgetClass; // 0x40
	UGamepadHelpOverlayBase* GamepadHelpOverlayClass; // 0x48
	FSlateSound StartupSound; // 0x50
	FSlateSound LoadingSound; // 0x68
	UTexture2D* RecipeBorderBitmapNormal; // 0x80
	UTexture2D* RecipeBorderBitmapThrall; // 0x88
	UDataTable* SpawnDataTable; // 0x90
};

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct AActor : UObject {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x78
	FRawDistributionFloat FrameRate; // 0x80
	int32_t StartingFrame; // 0xb8
};

struct UPlayerListGame : UWindowRoot {
	UPlayerListGameEntry* EntryViewClass; // 0x398
};

struct UBuildingRecordingRebuilderProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate BuildingCreated; // 0x28
	FScriptMulticastDelegate BuildingFailed; // 0x38
	FScriptMulticastDelegate BuildingProgressUpdate; // 0x48
	double m_RealTimeModifier; // 0xb8
	double m_FixedIntervalTime; // 0xc0
	bool m_StopAtSanityError; // 0xc8
	bool m_EnforceExpensiveSanityCheck; // 0xc9
	UUniqueID* m_OwnerUniqueID; // 0xd0
	UUniqueID* m_BuildingUniqueID; // 0xd8
	TArray<FBuildingRecordEntry> m_ReplayBuildingRecord; // 0xe0
	double m_ServerRuntimeStart; // 0xf0
	double m_ServerRuntimeLast; // 0xf8
	double m_ServerRuntimeNext; // 0x100
	int32_t m_ExecutedInstructions; // 0x108
	int32_t m_NumInstructionsToExecute; // 0x10c
};

struct UMediaPlayer : UObject {
	FScriptMulticastDelegate OnEndReached; // 0x40
	FScriptMulticastDelegate OnMediaClosed; // 0x50
	FScriptMulticastDelegate OnMediaOpened; // 0x60
	FScriptMulticastDelegate OnMediaOpenFailed; // 0x70
	FScriptMulticastDelegate OnPlaybackResumed; // 0x80
	FScriptMulticastDelegate OnPlaybackSuspended; // 0x90
	bool PlayOnOpen; // 0xa0
	char Shuffle : 1; // 0xa4
	char Loop : 1; // 0xa4
	UMediaOverlays* Overlays; // 0xa8
	UMediaPlaylist* Playlist; // 0xb0
	int32_t PlaylistIndex; // 0xb8
	UMediaSoundWave* SoundWave; // 0xc0
	UMediaTexture* VideoTexture; // 0xc8
};

struct UW_ItemIconTooltipView_C : UInventoryIconTooltipView {
	UTextBlock* NameView; // 0x258
};

struct AConanSoundStage : ASoundStage {
	TArray<FGroupDefinition> GroupDefinition; // 0x3d0
	TArray<UConanAudioComponent*> AudioComponents; // 0x3e0
	TArray<FSoundStageInfo> AudioInfo; // 0x3f0
};

struct UMaterialExpressionParticleRandom : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionObjectPositionWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UThrallViewBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x60
	float Period; // 0x98
};

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x130
	bool CacheRelativeTransforms; // 0x131
};

struct UCharacterStatsWindow : UWindowRoot {
	AConanCharacter* m_Character; // 0x398
};

struct URendererSettings : UDeveloperSettings {
	char bMobileHDR : 1; // 0x38
	char bMobileDisableVertexFog : 1; // 0x38
	int32_t MaxMobileCascades; // 0x3c
	EMobileMSAASampleCount MobileMSAASampleCount; // 0x40
	char bDiscardUnusedQualityLevels : 1; // 0x44
	char bOcclusionCulling : 1; // 0x44
	float MinScreenRadiusForLights; // 0x48
	float MinScreenRadiusForEarlyZPass; // 0x4c
	float MinScreenRadiusForCSMdepth; // 0x50
	char bPrecomputedVisibilityWarning : 1; // 0x54
	char bTextureStreaming : 1; // 0x54
	char bUseDXT5NormalMaps : 1; // 0x54
	char bClearCoatEnableSecondNormal : 1; // 0x54
	int32_t ReflectionCaptureResolution; // 0x58
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x5c
	char bForwardShading : 1; // 0x5c
	char bVertexFoggingForOpaque : 1; // 0x5c
	char bAllowStaticLighting : 1; // 0x5c
	char bUseNormalMapsForStaticLighting : 1; // 0x5c
	char bGenerateMeshDistanceFields : 1; // 0x5c
	char bGenerateLandscapeGIData : 1; // 0x5c
	float TessellationAdaptivePixelsPerTriangle; // 0x60
	char bSeparateTranslucency : 1; // 0x64
	ETranslucentSortPolicy TranslucentSortPolicy; // 0x68
	FVector TranslucentSortAxis; // 0x6c
	ECustomDepthStencil CustomDepthStencil; // 0x78
	char bCustomDepthTaaJitter : 1; // 0x7c
	char bDefaultFeatureBloom : 1; // 0x7c
	char bDefaultFeatureAmbientOcclusion : 1; // 0x7c
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x7c
	char bDefaultFeatureAutoExposure : 1; // 0x7c
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x80
	char bDefaultFeatureMotionBlur : 1; // 0x84
	char bDefaultFeatureLensFlare : 1; // 0x84
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0x88
	char bStencilForLODDither : 1; // 0x8c
	EEarlyZPass EarlyZPass; // 0x90
	char bEarlyZPassMovable : 1; // 0x94
	char bEarlyZPassOnlyMaterialMasking : 1; // 0x94
	char bDBuffer : 1; // 0x94
	EClearSceneOptions ClearSceneMethod; // 0x98
	char bBasePassOutputsVelocity : 1; // 0x9c
	char bSelectiveBasePassOutputs : 1; // 0x9c
	char bDefaultParticleCutouts : 1; // 0x9c
	char bGlobalClipPlane : 1; // 0x9c
	EGBufferFormat GBufferFormat; // 0xa0
	char bUseGPUMorphTargets : 1; // 0xa4
	char bInstancedStereo : 1; // 0xa4
	char bMultiView : 1; // 0xa4
	char bMobileMultiView : 1; // 0xa4
	char bMonoscopicFarField : 1; // 0xa4
	float WireframeCullThreshold; // 0xa8
	char bSupportStationarySkylight : 1; // 0xac
	char bSupportLowQualityLightmaps : 1; // 0xac
	char bSupportPointLightWholeSceneShadows : 1; // 0xac
	char bSupportAtmosphericFog : 1; // 0xac
	char bSupportSkinCacheShaders : 1; // 0xac
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xac
	char bMobileAllowDistanceFieldShadows : 1; // 0xac
	char bMobileAllowMovableDirectionalLights : 1; // 0xac
	uint32_t MobileNumDynamicPointLights; // 0xb0
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xb4
};

struct UFoliageType : UObject {
	FGuid UpdateGuid; // 0x28
	UDestructibleMesh* DestructibleMesh; // 0x38
	float Density; // 0x58
	float DensityAdjustmentFactor; // 0x5c
	float Radius; // 0x60
	EFoliageScaling Scaling; // 0x64
	FFloatInterval ScaleX; // 0x68
	FFloatInterval ScaleY; // 0x70
	FFloatInterval ScaleZ; // 0x78
	FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x80
	FoliageVertexColorMask VertexColorMask; // 0xb0
	float VertexColorMaskThreshold; // 0xb4
	char VertexColorMaskInvert : 1; // 0xb8
	FFloatInterval ZOffset; // 0xbc
	char AlignToNormal : 1; // 0xc4
	float AlignMaxAngle; // 0xc8
	char RandomYaw : 1; // 0xcc
	float RandomPitchAngle; // 0xd0
	FFloatInterval GroundSlopeAngle; // 0xd4
	FFloatInterval Height; // 0xdc
	TArray<FName> LandscapeLayers; // 0xe8
	FName LandscapeLayer; // 0xf8
	char CollisionWithWorld : 1; // 0x100
	FVector CollisionScale; // 0x104
	float MinimumLayerWeight; // 0x110
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
	char bOverrideLightMapRes : 1; // 0x148
	int32_t OverriddenLightMapRes; // 0x14c
	char bUseAsOccluder : 1; // 0x150
	FBodyInstance BodyInstance; // 0x160
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x390
	FLightingChannels LightingChannels; // 0x391
	float CollisionRadius; // 0x394
	float ShadeRadius; // 0x398
	int32_t NumSteps; // 0x39c
	float InitialSeedDensity; // 0x3a0
	float AverageSpreadDistance; // 0x3a4
	float SpreadVariance; // 0x3a8
	int32_t SeedsPerStep; // 0x3ac
	int32_t DistributionSeed; // 0x3b0
	float MaxInitialSeedOffset; // 0x3b4
	bool bCanGrowInShade; // 0x3b8
	bool bSpawnsInShade; // 0x3b9
	float MaxInitialAge; // 0x3bc
	float MaxAge; // 0x3c0
	float OverlapPriority; // 0x3c4
	FFloatInterval ProceduralScale; // 0x3c8
	FRuntimeFloatCurve ScaleCurve; // 0x3d0
	int32_t ChangeCount; // 0x448
	char ReapplyDensity : 1; // 0x44c
	char ReapplyRadius : 1; // 0x44c
	char ReapplyAlignToNormal : 1; // 0x44c
	char ReapplyRandomYaw : 1; // 0x44c
	char ReapplyScaling : 1; // 0x44c
	char ReapplyScaleX : 1; // 0x44c
	char ReapplyScaleY : 1; // 0x44c
	char ReapplyScaleZ : 1; // 0x44c
	char ReapplyRandomPitchAngle : 1; // 0x44c
	char ReapplyGroundSlope : 1; // 0x44c
	char ReapplyHeight : 1; // 0x44c
	char ReapplyLandscapeLayers : 1; // 0x44c
	char ReapplyZOffset : 1; // 0x44c
	char ReapplyCollisionWithWorld : 1; // 0x44c
	char ReapplyVertexColorMask : 1; // 0x44c
	char bEnableDensityScaling : 1; // 0x44c
};

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FIntegralCurve IntegerCurve; // 0xd0
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UCraftingPanel : URootWidget {
	float MinRecipeIconSize; // 0x360
	float MaxRecipeIconSize; // 0x364
	UMessageBoxWidget* m_ActiveMessageBoxWidget; // 0x448
	UMessageBoxWidget* m_CancelCraftingWarningDlg; // 0x450
	UItemInventory* m_StationInventory; // 0x458
	UItemInventory* m_ShortcutBar; // 0x460
	UItemInventory* m_RecipeIngredientsInventory; // 0x468
	APlaceableBase* m_CraftingStation; // 0x470
	UCraftingQueue* m_CraftingQueue; // 0x478
	UItemInventory* m_ArtisanThrallInventory; // 0x480
	UItemInventory* m_ArtisanRecipeInventory; // 0x488
	URecipeItem* m_CurrentlySelectedRecipe; // 0x490
	FVirtualIndex m_RecipeToConfirmIndex; // 0x498
	UObjectPool* m_CraftingItemIconPool; // 0x4a0
	UObjectPool* m_CraftingItemSlotPool; // 0x4a8
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FRichCurve RedCurve; // 0xd0
	FRichCurve GreenCurve; // 0x140
	FRichCurve BlueCurve; // 0x1b0
	FRichCurve AlphaCurve; // 0x220
};

struct UConanAITask_MoveDirectlyToward : UBTTask_MoveDirectlyToward {
	char ShouldProjectVectorGoalToNavigation : 1; // 0xb8
};

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x110
	float TextureMultiplier; // 0x114
};

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve events; // 0xc8
	FMovieSceneEventSectionData EventData; // 0x130
};

struct UAvoidanceComponent : UActorComponent {
	float NotifyApproachRange; // 0xf8
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x70
	FVector Direction; // 0xa8
};

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct ULevelStreamingKismet : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x158
	char bInitiallyVisible : 1; // 0x158
};

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x130
	float WrapWidth; // 0x138
	bool bExplicitWrapWidth; // 0x13c
};

struct UMaterialExpressionParticleRadius : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionActorPositionWS : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x3b0
	UCharacterMovementComponent* CharacterMovement; // 0x3c0
	FNavAvoidanceMask AvoidanceGroup; // 0x3c8
	FNavAvoidanceMask GroupsToAvoid; // 0x3cc
	FNavAvoidanceMask GroupsToIgnore; // 0x3d0
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
	float ConstA; // 0xd0
	float ConstB; // 0xd4
};

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UMainRadialMenu : UWindowRoot {
	FName ActionKeyName; // 0x398
	URadialMenu* m_Menu; // 0x3a0
};

struct ACorpseBase : AActor {
	FText DisplayName; // 0x3f0
	UUniqueID* DeadPlayerID; // 0x408
	UUniqueID* CorpseOwnerID; // 0x410
	FItemEquipSlotMap ItemEquipSlotMap; // 0x418
};

struct UBuildingSocketComponent : UInstancedStaticMeshComponent {
	TArray<FSocketStaticData> PerInstanceStaticSocketData; // 0x8c8
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UQosEvaluator : UObject {
	FQosSearchPass CurrentSearchPass; // 0x28
	int32_t ControllerId; // 0xd8
	bool bInProgress; // 0xdc
	bool bCancelOperation; // 0xdd
	TArray<FQosRegionInfo> Datacenters; // 0xe0
};

struct UBTTask_PawnActionBase : UBTTaskNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct USkeletalMeshComponent : USkinnedMeshComponent {
	EAnimationMode AnimationMode; // 0x948
	UAnimInstance* AnimClass; // 0x950
	UAnimInstance* AnimScriptInstance; // 0x958
	TArray<UAnimInstance*> SubInstances; // 0x960
	UAnimInstance* PostProcessAnimInstance; // 0x970
	FSingleAnimationPlayData AnimationData; // 0x978
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x9c0
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x9d0
	float GlobalAnimRateScale; // 0xa00
	char bHasValidBodies : 1; // 0xa04
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xa08
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0xa09
	char bBlendPhysics : 1; // 0xa0c
	char bEnablePhysicsOnDedicatedServer : 1; // 0xa0c
	char bUpdateJointsFromAnimation : 1; // 0xa0c
	char bDisableClothSimulation : 1; // 0xa0c
	char bCollideWithEnvironment : 1; // 0xa0c
	char bCollideWithAttachedChildren : 1; // 0xa0c
	char bLocalSpaceSimulation : 1; // 0xa0c
	char bClothMorphTarget : 1; // 0xa0c
	char bResetAfterTeleport : 1; // 0xa0c
	float TeleportDistanceThreshold; // 0xa10
	float TeleportRotationThreshold; // 0xa14
	float ClothBlendWeight; // 0xa18
	FVector RootBoneTranslation; // 0xa20
	char bNoSkeletonUpdate : 1; // 0xa2c
	char bPauseAnims : 1; // 0xa2c
	bool bUseRefPoseOnInitAnim; // 0xa30
	char bEnablePerPolyCollision : 1; // 0xa34
	UBodySetup* BodySetup; // 0xa38
	char bOnlyAllowAutonomousTickPose : 1; // 0xa40
	char bIsAutonomousTickPose : 1; // 0xa40
	char bForceRefpose : 1; // 0xa40
	char bOldForceRefPose : 1; // 0xa40
	char bShowPrePhysBones : 1; // 0xa40
	char bRequiredBonesUpToDate : 1; // 0xa40
	char bAnimTreeInitialised : 1; // 0xa40
	char bIncludeComponentLocationIntoBounds : 1; // 0xa40
	char bEnableLineCheckWithBounds : 1; // 0xa40
	uint16_t CachedAnimCurveUidVersion; // 0xa44
	FVector LineCheckBoundsScale; // 0xa48
	FScriptMulticastDelegate OnConstraintBroken; // 0xa58
	FScriptMulticastDelegate OnAnimInstanceClassChanged; // 0xa68
	TMap<int32_t, UPhysicalMaterial*> PhysMaterialOverrideForBodies; // 0xaa0
	UAnimSequence* SequenceToPlay; // 0xe80
	UAnimationAsset* AnimToPlay; // 0xe88
	char bDefaultLooping : 1; // 0xe90
	char bDefaultPlaying : 1; // 0xe90
	float DefaultPosition; // 0xe94
	float DefaultPlayRate; // 0xe98
	float LastPoseTickTime; // 0xe9c
	USkeletalMeshComponent* SynchronizedSkeletalComponent; // 0xf10
	char bIsBeingSynchronized : 1; // 0xf18
};

struct URandomWalkComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct UCraftingIngredientsInventory : UItemInventory {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct UFriendRequestEntry : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
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
	float MaxBrakeTorque; // 0x88
	float MaxHandBrakeTorque; // 0x8c
	UWheeledVehicleMovementComponent* VehicleSim; // 0x90
	int32_t WheelIndex; // 0x98
	float DebugLongSlip; // 0x9c
	float DebugLatSlip; // 0xa0
	float DebugNormalizedTireLoad; // 0xa4
	float DebugWheelTorque; // 0xac
	float DebugLongForce; // 0xb0
	float DebugLatForce; // 0xb4
	FVector Location; // 0xb8
	FVector OldLocation; // 0xc4
	FVector Velocity; // 0xd0
};

struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x198
	TArray<FWheelSetup> WheelSetups; // 0x1a0
	float Mass; // 0x1b0
	float DragCoefficient; // 0x1b4
	float ChassisWidth; // 0x1b8
	float ChassisHeight; // 0x1bc
	bool bReverseAsBrake; // 0x1c0
	float DragArea; // 0x1c4
	float EstimatedMaxEngineSpeed; // 0x1c8
	float MaxEngineRPM; // 0x1cc
	float DebugDragMagnitude; // 0x1d0
	FVector InertiaTensorScale; // 0x1d4
	float MinNormalizedTireLoad; // 0x1e0
	float MinNormalizedTireLoadFiltered; // 0x1e4
	float MaxNormalizedTireLoad; // 0x1e8
	float MaxNormalizedTireLoadFiltered; // 0x1ec
	float ThresholdLongitudinalSpeed; // 0x1f0
	int32_t LowForwardSpeedSubStepCount; // 0x1f4
	int32_t HighForwardSpeedSubStepCount; // 0x1f8
	TArray<UVehicleWheel*> Wheels; // 0x200
	char bUseRVOAvoidance : 1; // 0x228
	float RVOAvoidanceRadius; // 0x22c
	float RVOAvoidanceHeight; // 0x230
	float AvoidanceConsiderationRadius; // 0x234
	float RVOSteeringStep; // 0x238
	float RVOThrottleStep; // 0x23c
	int32_t AvoidanceUID; // 0x240
	FNavAvoidanceMask AvoidanceGroup; // 0x244
	FNavAvoidanceMask GroupsToAvoid; // 0x248
	FNavAvoidanceMask GroupsToIgnore; // 0x24c
	float AvoidanceWeight; // 0x250
	FVector PendingLaunchVelocity; // 0x254
	FReplicatedVehicleState ReplicatedState; // 0x260
	float RawSteeringInput; // 0x278
	float RawThrottleInput; // 0x27c
	float RawBrakeInput; // 0x280
	char bRawHandbrakeInput : 1; // 0x284
	char bRawGearUpInput : 1; // 0x284
	char bRawGearDownInput : 1; // 0x284
	float SteeringInput; // 0x288
	float ThrottleInput; // 0x28c
	float BrakeInput; // 0x290
	float HandbrakeInput; // 0x294
	float IdleBrakeInput; // 0x298
	float StopThreshold; // 0x29c
	float WrongDirectionThreshold; // 0x2a0
	FVehicleInputRate ThrottleInputRate; // 0x2a4
	FVehicleInputRate BrakeInputRate; // 0x2ac
	FVehicleInputRate HandbrakeInputRate; // 0x2b4
	FVehicleInputRate SteeringInputRate; // 0x2bc
	char bWasAvoidanceUpdated : 1; // 0x2c4
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x188
};

struct UHotkeyIconPlatforms : UObject {
	TArray<FHotkeyIconPlatform> Platforms; // 0x28
};

struct UTimeInputBox : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct ADWGameState : AGameState {
	FStringClassReference SoundStageClassName; // 0x430
	APlayerState* ListenServerHostPlayer; // 0x440
	ASoundStage* SoundStage; // 0x448
	TMap<UObject*, AActor*> m_ServiceActors; // 0x450
	ACacheModule* CacheModule; // 0x4a0
};

struct ATestActor : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct AConanAttackerAIController : AConanBasicAIController {
	bool ShouldChangeRotationRateFromCode; // 0x678
	bool PickRandomWeaponAfterAttack; // 0x679
	bool PickBestWeapon; // 0x67a
	bool PickBestWeaponAfterAttack; // 0x67b
	float PickBestWeaponDelay; // 0x67c
	float MaxArcherRange; // 0x680
	UItemInventory* WeaponInventory; // 0x698
	UGameItem* CurrentWeapon; // 0x6a0
	UStaticTarget* CachedStopOrderTarget; // 0x6c0
	UTargetDistributionComponent* TargetingComponent; // 0x6d8
	float StatrSprintDistance; // 0x6e0
	float StopSprintDistance; // 0x6e4
	float OptimalShootingDistance; // 0x6e8
	float BlockActionMinDuration; // 0x6ec
	float BlockOnAttackedMinDuration; // 0x6f0
	float BlockMaxDuration; // 0x6f4
	float BlockChance; // 0x6f8
	float BlockChanceWhenAttacked; // 0x6fc
	float TimeAtBlockStart; // 0x700
	float CurrentBlockMinDuration; // 0x704
	float AttackAngleCone; // 0x708
	APurgeVolume* CurrentPurgeVolume; // 0x710
	int32_t HateListTargetsThresholdForBuildingDetection; // 0x724
	bool DidLastMovementSucceed; // 0x728
	bool DidLastAttackSucceed; // 0x729
	float EndLeashingDistanceFromHomeSqr; // 0x72c
	float DefaultRotationRate; // 0x730
	float PassiveRotationRate; // 0x734
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString optionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UAsyncTaskShowStoreForCensoredDlc : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnReturned; // 0x28
};

struct UVRNotificationsComponent : UActorComponent {
	FScriptMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xf8
	FScriptMulticastDelegate HMDTrackingInitializedDelegate; // 0x108
	FScriptMulticastDelegate HMDRecenteredDelegate; // 0x118
	FScriptMulticastDelegate HMDLostDelegate; // 0x128
	FScriptMulticastDelegate HMDReconnectedDelegate; // 0x138
	FScriptMulticastDelegate HMDConnectCanceledDelegate; // 0x148
	FScriptMulticastDelegate HMDPutOnHeadDelegate; // 0x158
	FScriptMulticastDelegate HMDRemovedFromHeadDelegate; // 0x168
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x178
};

struct UW_HUD_LootLog_C : ULootLogBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UScrollBox* LogScrollBox; // 0x270
	UVerticalBox* LootLog; // 0x278
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
};

struct UFCSlider : URootWidget {
	float Value; // 0x318
	FSliderStyle WidgetStyle; // 0x320
	EOrientation Orientation; // 0x570
	FLinearColor SliderBarColor; // 0x574
	FLinearColor SliderHandleColor; // 0x584
	bool IndentHandle; // 0x594
	bool Locked; // 0x595
	float StepSize; // 0x598
	FScriptMulticastDelegate OnValueChanged; // 0x5a0
	USoundBase* HoveredSound; // 0x5b0
};

struct UGUIModule_Activate_CallProxy : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate OnActivate; // 0x28
	FScriptMulticastDelegate OnBeginLoad; // 0x38
	UGUIModule* GUIModule; // 0x48
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb0
	UEnvQueryContext* GenerateAround; // 0xe0
};

struct UTexture : UObject {
	FGuid LightingGuid; // 0x30
	int32_t LODBias; // 0x40
	int32_t NumCinematicMipLevels; // 0x44
	char SRGB : 1; // 0x48
	char NeverStream : 1; // 0x48
	char bNoTiling : 1; // 0x48
	char bUseCinematicMipLevels : 1; // 0x48
	TArray<UAssetUserData*> AssetUserData; // 0x50
	int32_t CachedCombinedLODBias; // 0x60
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x64
	TextureCompressionSettings CompressionSettings; // 0x68
	TextureFilter Filter; // 0x69
	TextureGroup LODGroup; // 0x6a
};

struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x7d0
	UBodySetup* ProcMeshBodySetup; // 0x7d8
	TArray<FProcMeshSection> ProcMeshSections; // 0x7e0
	TArray<FKConvexElem> CollisionConvexElems; // 0x7f0
	FBoxSphereBounds LocalBounds; // 0x800
};

struct UApplicationLifecycleComponent : UActorComponent {
	FScriptMulticastDelegate ApplicationWillDeactivateDelegate; // 0xf8
	FScriptMulticastDelegate ApplicationHasReactivatedDelegate; // 0x108
	FScriptMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x118
	FScriptMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x128
	FScriptMulticastDelegate ApplicationWillTerminateDelegate; // 0x138
};

struct UW_HUD_NotificationEntry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UWidgetAnimation* Anim_Fade; // 0x248
	UWidgetAnimation* Anim_SlideIn; // 0x250
	UTextBlock* Message; // 0x258
	UNamedSlot* OtherWidget; // 0x260
	float SlideProgress; // 0x268
	FText ID; // 0x270
};

struct UCheckedStateBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UConnectingDialogBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UInteractiveFoliageComponent : UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x7c8
	int32_t PreviousLODLevel; // 0x7cc
	UStaticMesh* StaticMesh; // 0x7d0
	int32_t MinLOD; // 0x7d8
	int32_t SubDivisionStepSize; // 0x7dc
	char bOverrideMinLOD : 1; // 0x7e0
	char bOverrideNavigationExport : 1; // 0x7e0
	char bForceNavigationObstacle : 1; // 0x7e0
	char bDisallowMeshPaintPerInstance : 1; // 0x7e0
	char bUseDefaultCollision : 1; // 0x7e0
	char bUseSubDivisions : 1; // 0x7e0
	char bIgnoreInstanceForTextureStreaming : 1; // 0x7e0
	char bOverrideLightMapRes : 1; // 0x7e0
	char bCastDistanceFieldIndirectShadow : 1; // 0x7e0
	int32_t OverriddenLightMapRes; // 0x7e4
	float DistanceFieldIndirectShadowMinVisibility; // 0x7e8
	float StreamingDistanceMultiplier; // 0x7ec
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x7f0
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x800
	FLightmassPrimitiveSettings LightmassSettings; // 0x810
};

struct UBlockedPlayerEntry : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UCharHealthStaminaThirstHungerViewer : URootWidget {
	bool EnableHungerAndThirst; // 0x318
	bool EnableExperience; // 0x319
	bool EnableHealth; // 0x31a
	bool EnableStamina; // 0x31b
	AConanCharacter* m_CharacterToInspect; // 0x320
};

struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	uint32_t AppId; // 0x2c
	FString AppName; // 0x30
	FString BuildVersion; // 0x40
	FString LaunchExe; // 0x50
	FString LaunchCommand; // 0x60
	FString PrereqName; // 0x70
	FString PrereqPath; // 0x80
	FString PrereqArgs; // 0x90
	TArray<FFileManifestData> FileManifestList; // 0xa0
	TArray<FChunkInfoData> ChunkList; // 0xb0
	TArray<FCustomFieldData> CustomFields; // 0xc0
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x2e8
	FVehicleDifferential4WData DifferentialSetup; // 0x378
	FVehicleTransmissionData TransmissionSetup; // 0x398
	FRuntimeFloatCurve SteeringCurve; // 0x3c8
	float AckermannAccuracy; // 0x440
};

struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x328
	float MaxDrawDistance; // 0x32c
	float MaxDistanceFadeRange; // 0x330
	char bUseTemperature : 1; // 0x334
	int32_t ShadowMapChannel; // 0x338
	float MinRoughness; // 0x340
	float ShadowResolutionScale; // 0x344
	float ShadowBias; // 0x348
	float ShadowSharpen; // 0x34c
	float ContactShadowLength; // 0x350
	char InverseSquaredFalloff : 1; // 0x354
	char CastTranslucentShadows : 1; // 0x354
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x354
	char bAffectDynamicIndirectLighting : 1; // 0x354
	FLightingChannels LightingChannels; // 0x358
	UMaterialInterface* LightFunctionMaterial; // 0x360
	FVector LightFunctionScale; // 0x368
	UTextureLightProfile* IESTexture; // 0x378
	char bUseIESBrightness : 1; // 0x380
	float IESBrightnessScale; // 0x384
	float LightFunctionFadeDistance; // 0x388
	float DisabledBrightness; // 0x38c
	char bEnableLightShaftBloom : 1; // 0x390
	float BloomScale; // 0x394
	float BloomThreshold; // 0x398
	FColor BloomTint; // 0x39c
	bool bUseRayTracedDistanceFieldShadows; // 0x3a0
	float RayStartOffsetDepthScale; // 0x3a4
};

struct UBodySetup : UObject {
	FKAggregateGeom AggGeom; // 0x28
	FName BoneName; // 0x70
	EPhysicsType PhysicsType; // 0x78
	char bAlwaysFullAnimWeight : 1; // 0x7c
	char bConsiderForBounds : 1; // 0x7c
	char bMeshCollideAll : 1; // 0x7c
	char bDoubleSidedGeometry : 1; // 0x7c
	char bIgnoredForUndermeshDetection : 1; // 0x7c
	char bGenerateNonMirroredCollision : 1; // 0x7c
	char bSharedCookedData : 1; // 0x7c
	char bGenerateMirroredCollision : 1; // 0x7c
	UPhysicalMaterial* PhysMaterial; // 0x80
	EBodyCollisionResponse CollisionReponse; // 0x88
	ECollisionTraceFlag CollisionTraceFlag; // 0x89
	bool BothComplexAndDefaultCollision; // 0x8a
	FBodyInstance DefaultInstance; // 0x90
	FWalkableSlopeOverride WalkableSlopeOverride; // 0x2c0
	float BuildScale; // 0x2d0
	FVector BuildScale3D; // 0x2d4
};

struct UVertexAttributeStream : UObject {
	FName Usage; // 0x28
	EVertexAttributeStreamType AttributeType; // 0x30
	TArray<char> Data; // 0x38
};

struct UFindSessionsInExternalDirectoryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct ABlockingVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct UNavigationSystem : UBlueprintFunctionLibrary {
	ANavigationData* MainNavData; // 0x28
	ANavigationData* AbstractNavData; // 0x30
	char bAutoCreateNavigationData : 1; // 0x38
	char bAllowClientSideNavigation : 1; // 0x38
	char bSupportRebuilding : 1; // 0x38
	char bInitialBuildingLocked : 1; // 0x38
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x38
	ENavDataGatheringModeConfig DataGatheringMode; // 0x3c
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x40
	float ActiveTilesUpdateInterval; // 0x44
	TArray<FNavDataConfig> SupportedAgents; // 0x48
	float DirtyAreasUpdateFreq; // 0x58
	TArray<ANavigationData*> NavDataSet; // 0x60
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0x70
	FScriptMulticastDelegate OnNavDataRegisteredEvent; // 0xe0
	FScriptMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0xf0
	FNavigationSystemRunMode OperationMode; // 0x224
};

struct AComboRulesLookup : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UNiagaraSpriteRendererProperties : UNiagaraEffectRendererProperties {
	FVector2D SubImageInfo; // 0x30
	bool bBVelocityAligned; // 0x38
};

struct ASoundRegistry : AInfo {
	TSet<UConanAudioComponent*> TimeOfDayComponents; // 0x3d8
};

struct UMaterialExpressionPanner : UMaterialExpression {
	FExpressionInput Coordinate; // 0x60
	FExpressionInput Time; // 0x98
	FExpressionInput Speed; // 0xd0
	float SpeedX; // 0x108
	float SpeedY; // 0x10c
	uint32_t ConstCoordinate; // 0x110
	bool bFractionalPart; // 0x114
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xc8
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x458
	float OuterConeAngle; // 0x45c
	float LightShaftConeAngle; // 0x460
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x60
	FExpressionInput B; // 0x98
};

struct UParticleModuleSizeBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UCharacterMapMarkerComponent : UActorComponent {
	FScriptMulticastDelegate OnAllMarkersDiscovered; // 0x180
	FScriptMulticastDelegate OnMarkerDiscovered; // 0x190
	FMapMarker m_PlayerLocationMarker; // 0x1a0
	FStringAssetReference DeathMarkerIcon; // 0x208
	FStringAssetReference DeathMarkerIconLooted; // 0x218
	int32_t m_NumDeathMarkerIDsAssigned; // 0x22c
	int32_t m_LastLootedDeathMarkerID; // 0x230
	TArray<int32_t> m_DiscoveredMarkers; // 0x238
	TMap<FString, FMapMarkerContainer> m_AllMapsDiscoveredMarkers; // 0x248
	TArray<FMapMarker> m_DynamicMarkers; // 0x298
	TArray<FMapMarker> m_PlayerMarkers; // 0x2a8
	TArray<FMapMarker> m_DeathMarkers; // 0x2b8
	TMap<ETransientMarkerType, FStringAssetReference> TransientIcons; // 0x2e0
	TMap<int32_t, AActor*> m_CorrespondingCorpses; // 0x330
	UDataTable* m_StaticMapMarkers; // 0x380
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

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x3d0
};

struct UGuildLogBase : URootWidget {
	UUserWidget* ListEntryClass; // 0x328
};

struct UExilesJourneyTrialStep : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x3d0
};

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xf8
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x38
};

struct UCharacterListEntryBase : URootWidget {
	FScriptMulticastDelegate OnSelected; // 0x318
	FScriptMulticastDelegate OnShowOptions; // 0x328
	FSlateColor m_HighlightedColor; // 0x338
	FSlateColor m_BaseColor; // 0x360
	UImage* m_Highlight; // 0x388
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x60
	FExpressionInput Exponent; // 0x98
	float ConstExponent; // 0xd0
};

struct APrecomputedVisibilityVolume : AVolume {
	EBrushType BrushType; // 0x3d0
	FColor BrushColor; // 0x3d4
	int32_t PolyFlags; // 0x3d8
	char bColored : 1; // 0x3dc
	char bSolidWhenSelected : 1; // 0x3dc
	char bPlaceableFromClassBrowser : 1; // 0x3dc
	char bNotForClientOrServer : 1; // 0x3dc
	UModel* Brush; // 0x3e0
	UBrushComponent* BrushComponent; // 0x3e8
	char bInManipulation : 1; // 0x3f0
	TArray<FGeomSelection> SavedSelections; // 0x3f8
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x3d0
	char bEnabled : 1; // 0x3d8
};

struct UExilesJourneyWindow : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct UPlayerlistBase : UWindowRoot {
	UPlayerListEntry* PlayerListEntryClass; // 0x398
	TArray<FBlacklistedUser> m_BannedUsers; // 0x3c0
	TArray<FBlacklistedUser> m_WhiteListedUsers; // 0x3d0
};

struct UPlatformEventsComponent : UActorComponent {
	FScriptMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0xf8
	FScriptMulticastDelegate PlatformChangedToTabletModeDelegate; // 0x108
};

struct ASplineBuildLimit : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UFunctionalTestingManager : UBlueprintFunctionLibrary {
	TArray<AFunctionalTest*> TestsLeft; // 0x28
	TArray<AFunctionalTest*> AllTests; // 0x38
	FScriptMulticastDelegate OnSetupTests; // 0x48
	FScriptMulticastDelegate OnTestsComplete; // 0x58
	FScriptMulticastDelegate OnTestsBegin; // 0x68
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x38
};

struct UGamemodeHintBase : URootWidget {
	FText Label; // 0x318
	FText keyboardLabel; // 0x330
	FName InputActionName; // 0x348
	FName keyboardActionName; // 0x350
	bool KeyboardShowHold; // 0x358
	bool GamepadShowHold; // 0x359
	bool MirrorWidget; // 0x35a
	bool KeyboardOnly; // 0x35b
	bool GamepadOnly; // 0x35c
};

struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
	FName PackageName; // 0x28
	UWorld* WorldAsset; // 0x30
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	char bShouldBeVisibleInEditor : 1; // 0xb0
	char bLocked : 1; // 0xb0
	char bShouldBeLoaded : 1; // 0xb0
	char bShouldBeVisible : 1; // 0xb0
	char bIsStatic : 1; // 0xb0
	char bShouldBlockOnLoad : 1; // 0xb0
	int32_t LevelLODIndex; // 0xb4
	char bDisableDistanceStreaming : 1; // 0xb8
	char bDrawOnLevelStatusMap : 1; // 0xb8
	FColor DrawColor; // 0xbc
	FLinearColor LevelColor; // 0xc0
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	TArray<FString> Keywords; // 0xe8
	FScriptMulticastDelegate OnLevelLoaded; // 0xf8
	FScriptMulticastDelegate OnLevelUnloaded; // 0x108
	FScriptMulticastDelegate OnLevelShown; // 0x118
	FScriptMulticastDelegate OnLevelHidden; // 0x128
	ULevel* LoadedLevel; // 0x138
	ULevel* PendingUnloadLevel; // 0x140
};

struct UServerRentalRequestConnection : UObject {
	FScriptMulticastDelegate OnRequestCreateServerComplete; // 0x98
};

struct UCreditsBase : UWindowRoot {
	bool CloseOnClick; // 0x318
	bool BlockPlayerInput; // 0x319
	FSlateSound OpeningSlateSound; // 0x320
	FSlateSound ClosingSlateSound; // 0x338
	FScriptMulticastDelegate SignalClosing; // 0x350
	FScriptMulticastDelegate SignalOpened; // 0x360
	TArray<FGamepadHotkeyHelp> m_WindowHotkeys; // 0x370
	UInputComponent* m_InputComponent; // 0x380
	UGUIModule* m_GUIModule; // 0x388
};

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x48
};

struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48
	bool WarnOnInvalidTags; // 0x49
	bool FastReplication; // 0x4a
	TArray<FStringAssetReference> GameplayTagTableList; // 0x50
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x60
	TArray<FName> CommonlyReplicatedTags; // 0x70
	int32_t NumBitsForContainerSize; // 0x80
	int32_t NetIndexFirstBitSegment; // 0x84
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
};

struct ADataActorCommand : AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	float CustomTimeDilation; // 0x80
	char bHidden : 1; // 0x84
	char bNetTemporary : 1; // 0x84
	char bNetStartup : 1; // 0x84
	char bOnlyRelevantToOwner : 1; // 0x84
	char bAlwaysRelevant : 1; // 0x84
	char bReplicateMovement : 1; // 0x84
	char bTearOff : 1; // 0x84
	char bExchangedRoles : 1; // 0x84
	char bPendingNetUpdate : 1; // 0x85
	char bNetLoadOnClient : 1; // 0x85
	char bNetUseOwnerRelevancy : 1; // 0x85
	char bBlockInput : 1; // 0x85
	char bAllowTickBeforeBeginPlay : 1; // 0x85
	char bActorEnableCollision : 1; // 0x86
	char bReplicates : 1; // 0x86
	char bLostRelevancy : 1; // 0x86
	FName NetDriverName; // 0x88
	char bCanBeInCluster : 1; // 0x90
	ENetRole RemoteRole; // 0x91
	AActor* Owner; // 0x98
	FRepMovement ReplicatedMovement; // 0xa0
	FRepAttachment AttachmentReplication; // 0xd8
	ENetRole Role; // 0x118
	EAutoReceiveInput AutoReceiveInput; // 0x11a
	int32_t InputPriority; // 0x11c
	UInputComponent* InputComponent; // 0x120
	EInputConsumeOptions InputConsumeOption; // 0x128
	float NetCullDistanceSquared; // 0x12c
	float ViewTargetNetCullDistanceSquared; // 0x130
	int32_t NetTag; // 0x134
	float NetUpdateTime; // 0x138
	float NetUpdateFrequency; // 0x13c
	float MinNetUpdateFrequency; // 0x140
	float NetPriority; // 0x144
	float LastNetUpdateTime; // 0x148
	char bAutoDestroyWhenFinished : 1; // 0x14c
	char bCanBeDamaged : 1; // 0x14c
	char bActorIsBeingDestroyed : 1; // 0x14c
	char bCollideWhenPlacing : 1; // 0x14c
	char bFindCameraComponentWhenViewTarget : 1; // 0x14c
	char bRelevantForNetworkReplays : 1; // 0x14c
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x14c
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14d
	APawn* Instigator; // 0x158
	TArray<AActor*> Children; // 0x160
	USceneComponent* RootComponent; // 0x170
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x178
	float InitialLifeSpan; // 0x188
	TArray<FName> Layers; // 0x198
	TWeakObjectPtr<AActor> ParentComponentActor; // 0x1a8
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x1b0
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x1b8
	char bUseExtendedRelevancyTimeout : 1; // 0x1b8
	char bActorSeamlessTraveled : 1; // 0x1b8
	char bIgnoresOriginShifting : 1; // 0x1b8
	char bEnableAutoLODGeneration : 1; // 0x1b8
	TArray<FName> Tags; // 0x1c0
	uint64_t HiddenEditorViews; // 0x1d0
	FScriptMulticastDelegate OnTakeAnyDamage; // 0x1d8
	FScriptMulticastDelegate OnTakePointDamage; // 0x1e8
	FScriptMulticastDelegate OnActorBeginOverlap; // 0x1f8
	FScriptMulticastDelegate OnActorEndOverlap; // 0x208
	FScriptMulticastDelegate OnBeginCursorOver; // 0x218
	FScriptMulticastDelegate OnEndCursorOver; // 0x228
	FScriptMulticastDelegate OnClicked; // 0x238
	FScriptMulticastDelegate OnReleased; // 0x248
	FScriptMulticastDelegate OnInputTouchBegin; // 0x258
	FScriptMulticastDelegate OnInputTouchEnd; // 0x268
	FScriptMulticastDelegate OnInputTouchEnter; // 0x278
	FScriptMulticastDelegate OnInputTouchLeave; // 0x288
	FScriptMulticastDelegate OnActorHit; // 0x298
	FScriptMulticastDelegate OnDestroyed; // 0x2a8
	FScriptMulticastDelegate OnEndPlay; // 0x2b8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x3a8
	TArray<UActorComponent*> InstanceComponents; // 0x3b8
};

struct UPlayerMarkerComponent : UActorComponent {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x88
	TArray<UAssetUserData*> AssetUserData; // 0x98
	char bReplicates : 1; // 0xa8
	char bIsClientOnly : 1; // 0xa8
	char bNetAddressable : 1; // 0xa8
	char bAllowAnyoneToDestroyMe : 1; // 0xa8
	char bCreatedByConstructionScript : 1; // 0xa8
	char bInstanceComponent : 1; // 0xa8
	char bAutoActivate : 1; // 0xa8
	char bIsActive : 1; // 0xa8
	char bEditableWhenInherited : 1; // 0xa8
	char bCanEverAffectNavigation : 1; // 0xa8
	char bIsEditorOnly : 1; // 0xa8
	EComponentCreationMethod CreationMethod; // 0xb1
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0xc0
	FScriptMulticastDelegate OnComponentActivated; // 0xd0
	FScriptMulticastDelegate OnComponentDeactivated; // 0xe0
};

struct AVaultManager : AActor {
	FScriptMulticastDelegate OnVaultRefreshTimerStartedDelegate; // 0x3d0
	FScriptMulticastDelegate OnVaultRefreshTimerEndedDelegate; // 0x3e0
	FScriptMulticastDelegate OnVaultEnteredDelegate; // 0x3f0
	FScriptMulticastDelegate OnVaultLockedDelegate; // 0x400
	FScriptMulticastDelegate OnVaultUnlockedDelegate; // 0x410
	TArray<FVaultData> VaultData; // 0x420
	TArray<FVaultData> vaultsRefreshing; // 0x430
	TArray<FVaultActorData> vaultActorsExhaustedStates; // 0x440
	UActorPersistenceComponent* m_actorPersistenceComponent; // 0x4f0
};

struct UMaterialExpressionParticleSpeed : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UMaterialExpressionObjectBounds : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UBoolBinding : UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x40
};

struct UInterpTrackAudioMaster : UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct APlayerCameraManager : AActor {
	APlayerController* PCOwner; // 0x3d0
	USceneComponent* TransformComponent; // 0x3d8
	float DefaultFOV; // 0x3e8
	float DefaultOrthoWidth; // 0x3f0
	float DefaultAspectRatio; // 0x3f8
	FCameraCacheEntry CameraCache; // 0x440
	FCameraCacheEntry LastFrameCameraCache; // 0x970
	FTViewTarget ViewTarget; // 0xea0
	FTViewTarget PendingViewTarget; // 0x13e0
	TArray<UCameraModifier*> ModifierList; // 0x1938
	TArray<UCameraModifier*> DefaultModifiers; // 0x1948
	float FreeCamDistance; // 0x1958
	FVector FreeCamOffset; // 0x195c
	FVector ViewTargetOffset; // 0x1968
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x1988
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x1998
	UCameraAnimInst* AnimInstPool[0x8]; // 0x19a0
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x19e0
	TArray<UCameraAnimInst*> ActiveAnims; // 0x1a00
	TArray<UCameraAnimInst*> FreeAnims; // 0x1a10
	ACameraActor* AnimCameraActor; // 0x1a20
	char bIsOrthographic : 1; // 0x1a28
	char bUseClientSideCameraUpdates : 1; // 0x1a28
	float ViewPitchMin; // 0x1a2c
	float ViewPitchMax; // 0x1a30
	float ViewYawMin; // 0x1a34
	float ViewYawMax; // 0x1a38
	float ViewRollMin; // 0x1a3c
	float ViewRollMax; // 0x1a40
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x38
};

struct UCrowdManager : UObject {
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
	char bResolveCollisions : 1; // 0x6c
};

struct UCustomRenderWidget : UWidget {
	bool bIsVariable; // 0x28
	bool bCreatedByConstructionScript; // 0x29
	UPanelSlot* Slot; // 0x30
	bool bIsEnabled; // 0x38
	DelegateProperty bIsEnabledDelegate; // 0x40
	FText ToolTipText; // 0x50
	DelegateProperty ToolTipTextDelegate; // 0x68
	UWidget* TooltipWidget; // 0x78
	DelegateProperty ToolTipWidgetDelegate; // 0x80
	ESlateVisibility Visiblity; // 0x90
	ESlateVisibility Visibility; // 0x91
	DelegateProperty VisibilityDelegate; // 0x98
	char bOverride_Cursor : 1; // 0xa8
	EMouseCursor Cursor; // 0xac
	bool bIsVolatile; // 0xad
	FWidgetTransform RenderTransform; // 0xb0
	FVector2D RenderTransformPivot; // 0xcc
	UWidgetNavigation* Navigation; // 0xd8
	TArray<UPropertyBinding*> NativeBindings; // 0x108
};

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1c0
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	UStaticMesh* Mesh; // 0x30
	char CastShadows : 1; // 0x38
	char DoCollisions : 1; // 0x38
	EMeshScreenAlignment MeshAlignment; // 0x3c
	char bOverrideMaterial : 1; // 0x40
	char bOverrideDefaultMotionBlurSettings : 1; // 0x40
	char bEnableMotionBlur : 1; // 0x40
	float Pitch; // 0x44
	float Roll; // 0x48
	float Yaw; // 0x4c
	FRawDistributionVector RollPitchYawRange; // 0x50
	EParticleAxisLock AxisLockOption; // 0xa8
	char bCameraFacing : 1; // 0xac
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0xb0
	EMeshCameraFacingOptions CameraFacingOption; // 0xb1
	char bApplyParticleRotationAsSpin : 1; // 0xb4
	char bFaceCameraDirectionRatherThanPosition : 1; // 0xb4
	char bCollisionsConsiderPartilceSize : 1; // 0xb4
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x828
	TArray<FIntPoint> ProxyComponentBases; // 0x838
	uint8_t ProxyLOD; // 0x848
};

struct USpawnTableComponent : UActorComponent {
	TArray<UStatIntArray*> m_StatIntTable; // 0xf8
	TArray<UStatIntArray*> m_StatIntModifierTable; // 0x108
	TArray<UStatFloatArray*> m_StatFloatTable; // 0x118
	TArray<UStatFloatArray*> m_StatFloatModifierTable; // 0x128
	TArray<UWeightedTableArray*> m_WeightedSpawnTable; // 0x138
	TMap<WeaponItemTypes, int32_t> m_FallbackComboPresets; // 0x148
	TMap<WeaponItemTypes, FComboPresetTableRow> m_LoadedComboPresets; // 0x198
	TArray<UObject*> m_ThrallTypes; // 0x1e8
	UDataTable* m_SpawnTable; // 0x1f8
	UDataTable* m_EquipmentTable; // 0x200
	UDataTable* m_ProfessionTable; // 0x208
	UDataTable* m_RaceTable; // 0x210
	UDataTable* m_ThrallTierTable; // 0x218
	UDataTable* m_ComboPresetsTable; // 0x220
	UDataTable* m_ThrallDataTable; // 0x228
};

struct UHUDCraftingBase : UWindowRoot {
	UCraftingQueue* m_CratfingQueue; // 0x398
};

struct UWidgetAnimation : UMovieSceneSequence {
	FScriptMulticastDelegate OnAnimationStarted; // 0x2d8
	FScriptMulticastDelegate OnAnimationFinished; // 0x2e8
	UMovieScene* MovieScene; // 0x2f8
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x300
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x80
	char bAbsolute : 1; // 0xd0
	char bKillInside : 1; // 0xd0
	char bAxisAlignedAndFixedSize : 1; // 0xd0
};

struct UW_TabButton_C : UTabButtonBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc28
	UNamedSlot* CheckboxOverlay; // 0xc30
	UTextBlock* LabelView; // 0xc38
	USizeBox* Size; // 0xc40
	FVector2D SizeOverride; // 0xc48
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

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x60
	FMaterialAttributesInput B; // 0xa0
	FExpressionInput Alpha; // 0xe0
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x118
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x119
};

struct UItemInventory : UPersistenceComponent {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1c0
	FAIDataProviderBoolValue TraceFromContext; // 0x1f0
	FAIDataProviderFloatValue ItemHeightOffset; // 0x220
	FAIDataProviderFloatValue ContextHeightOffset; // 0x250
	UEnvQueryContext* Context; // 0x280
};

struct UStatFloatArray : UObject {
	FName Key; // 0x28
	TArray<FStatFloatEntry> Stats; // 0x30
};

struct ANiagaraActor : AActor {
	UNiagaraComponent* NiagaraComponent; // 0x3d0
};

struct UThirstIndicatorIcon : URootWidget {
	FScriptMulticastDelegate KeyNavOnSelectedEvent; // 0x240
	TWeakObjectPtr<URootWidget> KeyNavLeft; // 0x250
	TWeakObjectPtr<URootWidget> KeyNavRight; // 0x258
	TWeakObjectPtr<URootWidget> KeyNavAbove; // 0x260
	TWeakObjectPtr<URootWidget> KeyNavBelow; // 0x268
	TWeakObjectPtr<URootWidget> KeyNavTab; // 0x270
	TWeakObjectPtr<URootWidget> KeyNavChildLeft; // 0x278
	TWeakObjectPtr<URootWidget> KeyNavChildRight; // 0x280
	TWeakObjectPtr<URootWidget> KeyNavChildAbove; // 0x288
	TWeakObjectPtr<URootWidget> KeyNavChildBelow; // 0x290
	TWeakObjectPtr<URootWidget> KeyNavChildTab; // 0x298
	TWeakObjectPtr<URootWidget> KeyNavChildren; // 0x2a0
	UTooltipWidget* TooltipWidgetClass; // 0x2a8
	UKeyNavIndicator* KeyNavIndicatorClass; // 0x2b0
	FLinearColor PositiveFeedbackColor; // 0x2b8
	FLinearColor NegativeFeedbackColor; // 0x2c8
	FLinearColor NeutralFeedbackColor; // 0x2d8
	bool KeyNavFocusOnClick; // 0x2e8
	bool KeyNavAutoSetBack; // 0x2e9
	UWindowRoot* m_Window; // 0x2f0
	TWeakObjectPtr<URootWidget> m_Parent; // 0x2f8
	UKeyNavIndicator* m_KeyNavIndicator; // 0x300
};

struct UDismantlerInventory : UItemInventory {
	FScriptMulticastDelegate SignalItemsRequestedFromClient; // 0x170
	FScriptMulticastDelegate SignalInventoryRecivedOnClient; // 0x180
	FScriptMulticastDelegate SignalItemAdded; // 0x190
	FScriptMulticastDelegate SignalItemRemoved; // 0x1a0
	FScriptMulticastDelegate SignalItemIntStatChanged; // 0x1b0
	FScriptMulticastDelegate SignalItemFloatStatChanged; // 0x1c0
	DelegateProperty DelegateCanBeDropped; // 0x1d0
	FScriptMulticastDelegate SignalCannotMoveItem; // 0x1e0
	TArray<UGameItem*> ItemList; // 0x1f0
	bool bReplicatesToEveryone; // 0x200
	EInventoryType inventoryType; // 0x201
	int32_t MaxItemCount; // 0x204
	float PerishModifier; // 0x208
	TMap<int32_t, float> ItemPerishModifiers; // 0x210
	bool UseWhiteList; // 0x260
	TArray<int32_t> BlackWhiteList; // 0x268
	ALootContainer* LootContainerClass; // 0x2c8
	FString m_ConfigCategoryName; // 0x2d0
};

struct ABuildingBlockerVolumeBase : ASpecialPropertiesVolume {
	bool AllowUndermeshing; // 0x3d0
	bool AllowBuildingUnderHeightmap; // 0x3d1
	TArray<UClass*> Whitelist; // 0x3d8
};

struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x3d0
	UPaperTerrainSplineComponent* SplineComponent; // 0x3d8
	UPaperTerrainComponent* RenderComponent; // 0x3e0
};

struct UParticleModuleVectorFieldBase : UParticleModule {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x28
	char LODDuplicate : 1; // 0x28
	char bSupportsRandomSeed : 1; // 0x28
	char bRequiresLoopingNotification : 1; // 0x28
	char LODValidity; // 0x2c
};

struct UExternalInventoryView : URootWidget {
	bool CanItemBeDropedOn; // 0x318
	FScriptMulticastDelegate SignalCouldNotDrop; // 0x320
	DelegateProperty DelegateGetTargetInventory; // 0x330
	AActor* m_Actor; // 0x370
	UItemInventory* m_Inventory; // 0x378
	UItemInventory* m_TargetInventory; // 0x380
};

struct APlayerStartPIE : APlayerStart {
	FName PlayerStartTag; // 0x3f8
};

struct AEQSTestingPawn : ACharacter {
	UEnvQuery* QueryTemplate; // 0x7f8
	TArray<FEnvNamedValue> QueryParams; // 0x800
	TArray<FAIDynamicParam> QueryConfig; // 0x810
	float TimeLimitPerStep; // 0x820
	int32_t StepToDebugDraw; // 0x824
	EEnvQueryHightlightMode HighlightMode; // 0x828
	char bDrawLabels : 1; // 0x82c
	char bDrawFailedItems : 1; // 0x82c
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x82c
	char bShouldBeVisibleInGame : 1; // 0x82c
	char bTickDuringGame : 1; // 0x82c
	EEnvQueryRunMode QueryingMode; // 0x830
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x70
	EParticleBurstMethod ParticleBurstMethod; // 0xa8
	TArray<FParticleBurst> BurstList; // 0xb0
	FRawDistributionFloat BurstScale; // 0xc0
	char bApplyGlobalSpawnRateScale : 1; // 0xf8
};

struct UAISenseConfig_Touch : UAISenseConfig {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct ADetourCrowdAIController : AAIController {
	char bStopAILogicOnUnposses : 1; // 0x470
	char bLOSflag : 1; // 0x470
	char bSkipExtraLOSChecks : 1; // 0x470
	char bAllowStrafe : 1; // 0x470
	char bWantsPlayerState : 1; // 0x470
	char bSetControlRotationFromPawnOrientation : 1; // 0x470
	UPathFollowingComponent* PathFollowingComponent; // 0x478
	UBrainComponent* BrainComponent; // 0x480
	UAIPerceptionComponent* PerceptionComponent; // 0x488
	UPawnActionsComponent* ActionsComp; // 0x490
	UBlackboardComponent* Blackboard; // 0x498
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x4a0
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x4a8
	FScriptMulticastDelegate ReceiveMoveCompleted; // 0x4b0
};

struct UMaterialExpressionObjectOrientation : UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	FString Desc; // 0x38
	FColor BorderColor; // 0x48
	char bRealtimePreview : 1; // 0x4c
	char bNeedToUpdatePreview : 1; // 0x4c
	char bIsParameterExpression : 1; // 0x4c
	char bCommentBubbleVisible : 1; // 0x4c
	char bShowOutputNameOnPin : 1; // 0x4c
	char bHidePreviewWindow : 1; // 0x4c
	char bCollapsed : 1; // 0x4c
	char bShaderInputData : 1; // 0x4c
	char bShowInputs : 1; // 0x4c
	char bShowOutputs : 1; // 0x4c
	TArray<FExpressionOutput> Outputs; // 0x50
};

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct USceneCaptureComponent : USceneComponent {
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x300
	TArray<AActor*> HiddenActors; // 0x310
	TArray<AActor*> HiddenClasses; // 0x320
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x330
	TArray<AActor*> ShowOnlyActors; // 0x340
	bool bCaptureEveryFrame; // 0x350
	bool bCaptureOnMovement; // 0x351
	float MaxViewDistanceOverride; // 0x354
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x358
	float OrthoNearClipPlane; // 0x37c
	float OrthoFarClipPlane; // 0x380
	float AspectRatio; // 0x384
	ECameraProjectionMode ProjectionMode; // 0x388
};

struct ATestBeaconClient : AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x3f0
	UNetConnection* BeaconConnection; // 0x3f8
	EBeaconConnectionState ConnectionState; // 0x400
};

struct UW_NudityOption_C : URootWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UW_FCComboBoxString_C* CBS_MaxNudity; // 0x320
	UTextBlock* MaximumNudityText; // 0x328
	FScriptMulticastDelegate SignalSelectionChanged; // 0x330
	FScriptMulticastDelegate SignalScrollToMe; // 0x340
	ENudity MaximumAlolwedNudity; // 0x350
};

struct UW_RadialMenuSegment_C : URadialMenuSegment {
	UImage* EndCapRenderer; // 0x368
	UImage* IconView; // 0x370
	UNamedSlot* IconWidgetContainer; // 0x378
	UPieRenderWidget* PieRenderer; // 0x380
	UImage* StartCapRenderer; // 0x388
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x60
};

struct ULightMapTexture2D : UTexture2D {
	UGraniteTexture* GraniteTexture; // 0x118
};

struct UScrollBox : UPanelWidget {
	FScrollBoxStyle WidgetStyle; // 0x130
	FScrollBarStyle WidgetBarStyle; // 0x378
	USlateWidgetStyleAsset* Style; // 0x890
	USlateWidgetStyleAsset* BarStyle; // 0x898
	EOrientation Orientation; // 0x8a0
	ESlateVisibility ScrollBarVisibility; // 0x8a1
	EConsumeMouseWheel ConsumeMouseWheel; // 0x8a2
	FVector2D ScrollbarThickness; // 0x8a4
	bool AlwaysShowScrollbar; // 0x8ac
};

struct AConanTimeOfDayManager : AActor {
	float DayLength; // 0x3d0
	float StartTimeOfDay; // 0x3d4
	bool TimeEnabled; // 0x3d8
	float TimeOfDay; // 0x3dc
};

struct URequestPermissionsAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x38
};

struct UHighlightsCloseGroupAsync : UBlueprintAsyncActionBase {
	FScriptMulticastDelegate onSuccess; // 0x28
	FScriptMulticastDelegate onFailure; // 0x38
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct ULevelStreaming : UObject {
	FName PackageName; // 0x28
	UWorld* WorldAsset; // 0x30
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	char bShouldBeVisibleInEditor : 1; // 0xb0
	char bLocked : 1; // 0xb0
	char bShouldBeLoaded : 1; // 0xb0
	char bShouldBeVisible : 1; // 0xb0
	char bIsStatic : 1; // 0xb0
	char bShouldBlockOnLoad : 1; // 0xb0
	int32_t LevelLODIndex; // 0xb4
	char bDisableDistanceStreaming : 1; // 0xb8
	char bDrawOnLevelStatusMap : 1; // 0xb8
	FColor DrawColor; // 0xbc
	FLinearColor LevelColor; // 0xc0
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	TArray<FString> Keywords; // 0xe8
	FScriptMulticastDelegate OnLevelLoaded; // 0xf8
	FScriptMulticastDelegate OnLevelUnloaded; // 0x108
	FScriptMulticastDelegate OnLevelShown; // 0x118
	FScriptMulticastDelegate OnLevelHidden; // 0x128
	ULevel* LoadedLevel; // 0x138
	ULevel* PendingUnloadLevel; // 0x140
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UW_EditableLabeledSlider_C : UEditableLabeledSlider {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe40
	UImage* Image_13; // 0xe48
	UW_FCSlider_C* S_Value; // 0xe50
	UW_FCEditableTextBlock_C* TXT_Value; // 0xe58
	USoundCue* Value Change Sound; // 0xe60
};

struct UParticleEmitter : UObject {
	FName EmitterName; // 0x28
	int32_t SubUVDataOffset; // 0x30
	EEmitterRenderMode EmitterRenderMode; // 0x34
	TArray<UParticleLODLevel*> LODLevels; // 0x38
	char ConvertedModules : 1; // 0x48
	int32_t PeakActiveParticles; // 0x4c
	int32_t InitialAllocationCount; // 0x50
	float MediumDetailSpawnRateScale; // 0x54
	float QualityLevelSpawnRateScale; // 0x58
	EDetailMode DetailMode; // 0x5c
	char bIsSoloing : 1; // 0x60
	char bCookedOut : 1; // 0x60
	char bDisabledLODsKeepEmitterAlive : 1; // 0x60
	char bDisableWhenInsignficant : 1; // 0x60
	EParticleSignificanceLevel SignificanceLevel; // 0x64
};

