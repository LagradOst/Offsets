namespace off {
	constexpr auto GNames = 0x2cec03c;
	constexpr auto GObjects = 0x2cec0ac;
}
struct UCameraAnimInst {
	ObjectProperty CamAnim; // 0x60
	ObjectProperty InterpGroupInst; // 0x68
	float CurTime; // 0x70
	char bLooping : 1; // 0x74
	char bFinished : 1; // 0x74
	char bAutoReleaseWhenFinished : 1; // 0x74
	char bBlendingIn : 1; // 0x74
	char bBlendingOut : 1; // 0x74
	float BlendInTime; // 0x78
	float BlendOutTime; // 0x7c
	float CurBlendInTime; // 0x80
	float CurBlendOutTime; // 0x84
	float PlayRate; // 0x88
	float BasePlayScale; // 0x8c
	float TransientScaleModifier; // 0x90
	float CurrentBlendWeight; // 0x94
	float RemainingTime; // 0x98
	ObjectProperty MoveTrack; // 0x9c
	ObjectProperty MoveInst; // 0xa4
	ObjectProperty SourceAnimNode; // 0xac
	ECameraAnimPlaySpace PlaySpace; // 0xb4
	FMatrix UserPlaySpaceMatrix; // 0xc0
	FPostProcessSettings LastPPSettings; // 0x100
	float LastPPSettingsAlpha; // 0x280
	FVector LastCameraLoc; // 0x284
};

struct UUIData_Quest {
	int32_t m_nQuestId; // 0x60
	Fdword m_dwActivityId; // 0x64
	Fdword m_dwPrevActivityId; // 0x68
	Fdword m_dwGroupingNumber; // 0x6c
	Fdword m_eStatus; // 0x70
	FQWord m_dtReceivedDatetime; // 0x74
	char m_bIsDirty : 1; // 0x7c
	char m_bHasSeen : 1; // 0x7c
	char m_bIsNew : 1; // 0x7c
	char m_bCanAbandon : 1; // 0x7c
	char m_bCompletionAck : 1; // 0x7c
	char m_bGoalsInitialized : 1; // 0x7c
	QuestType m_eQuestType; // 0x80
	TArray<ObjectProperty> m_Goals; // 0x84
};

struct UUIComponent_AcquisitionCarousel {
	ObjectProperty m_mcLeftArrow; // 0x140
	ObjectProperty m_mcRightArrow; // 0x148
	ObjectProperty m_mcLeftButtonPrompt; // 0x150
	ObjectProperty m_mcRightButtonPrompt; // 0x158
	TArray<FUIAcquiredItem> m_CarouselItems; // 0x160
	TArray<ObjectProperty> m_mcNavDots; // 0x170
	int32_t m_nIndex; // 0x180
	float m_fNavDotCenter; // 0x184
	TArray<int32_t> m_ItemIdList; // 0x188
	TArray<int32_t> m_ItemQuantityList; // 0x198
	float m_fDotPlacementX; // 0x1a8
	float m_fDotWidth; // 0x1ac
	float m_fDotPadding; // 0x1b0
};

struct UTgInventoryObject_Listen_ActiveWhileDeployableInactive {
	int32_t m_nActiveDeployableCount; // 0xcc
};

struct UUIDataProvider_OnlineFriendMessages {
	TArray<FOnlineFriendMessage> Messages; // 0x74
	FString SendingPlayerNameCol; // 0x84
	FString bIsFriendInviteCol; // 0x94
	FString bWasAcceptedCol; // 0xa4
	FString bWasDeniedCol; // 0xb4
	FString MessageCol; // 0xc4
	FString LastInviteFrom; // 0xd4
};

struct AGameCrowdAgent {
	FPointer VfTable_IInterface_RVO; // 0x288
	ObjectProperty MyGroup; // 0x290
	FVector PreferredVelocity; // 0x298
	FVector PendingVelocity; // 0x2a4
	ObjectProperty CurrentDestination; // 0x2b0
	ObjectProperty BehaviorDestination; // 0x2b8
	ObjectProperty PreviousDestination; // 0x2c0
	float InterpZTranslation; // 0x2c8
	int32_t Health; // 0x2cc
	float DeadBodyDuration; // 0x2d0
	ComponentProperty LightEnvironment; // 0x2d4
	int32_t ConformTraceFrameCount; // 0x2dc
	TArray<FNearbyDynamicItem> NearbyDynamics; // 0x2e0
	char bUniformScale : 1; // 0x2f0
	char bCheckForObstacles : 1; // 0x2f0
	char bUseNavMeshPathing : 1; // 0x2f0
	char bWantsSeePlayerNotification : 1; // 0x2f0
	char bAllowPitching : 1; // 0x2f0
	char bHitObstacle : 1; // 0x2f0
	char bBadHitNormal : 1; // 0x2f0
	char bSimulateThisTick : 1; // 0x2f0
	char bPotentialEncounter : 0; // 0x2f0
	char bIsPanicked : 0; // 0x2f0
	char bWantsGroupIdle : 0; // 0x2f0
	char bPreferVisibleDestination : 0; // 0x2f0
	char bPreferVisibleDestinationOnSpawn : 0; // 0x2f0
	char bHasNotifiedSpawner : 0; // 0x2f0
	char bIsInSpawnPool : 0; // 0x2f0
	char bPaused : 0; // 0x2f0
	EConformType ConformType; // 0x2f4
	float ConformTraceDist; // 0x2f8
	int32_t ConformTraceInterval; // 0x2fc
	int32_t CurrentConformTraceInterval; // 0x300
	float LastGroundZ; // 0x304
	float AwareRadius; // 0x308
	float AvoidOtherRadius; // 0x30c
	TArray<FAvoidOtherSampleItem> AvoidOtherSampleList; // 0x310
	float PENALTY_COEFF_ANGLETOGOAL; // 0x320
	float PENALTY_COEFF_ANGLETOVEL; // 0x324
	float PENALTY_COEFF_MAG; // 0x328
	float MIN_PENALTY_THRESHOLD; // 0x32c
	float LastProgressTime; // 0x330
	float LastFallbackActiveTime; // 0x334
	float MaxPathLaneValue; // 0x338
	float CurrentPathLaneValue; // 0x33c
	int32_t ExtraPathCost; // 0x340
	float RotateToTargetSpeed; // 0x344
	float MaxYawRate; // 0x348
	FVector MeshMinScale3D; // 0x34c
	FVector MeshMaxScale3D; // 0x358
	float EyeZOffset; // 0x364
	float ProximityLODDist; // 0x368
	float VisibleProximityLODDist; // 0x36c
	FVector LastKnownGoodPosition; // 0x370
	float GroundOffset; // 0x37c
	FVector IntermediatePoint; // 0x380
	FVector SearchExtent; // 0x38c
	UNavigationHandle* NavigationHandleClass; // 0x398
	ObjectProperty NavigationHandle; // 0x3a0
	int32_t ObstacleCheckCount; // 0x3a8
	float WalkableFloorZ; // 0x3ac
	float LastPathingAttempt; // 0x3b0
	float LastUpdateTime; // 0x3b4
	float NotVisibleLifeSpan; // 0x3b8
	ObjectProperty MyArchetype; // 0x3bc
	float MaxWalkingSpeed; // 0x3c4
	float MaxRunningSpeed; // 0x3c8
	float MaxSpeed; // 0x3cc
	TArray<FRecentInteraction> RecentInteractions; // 0x3d0
	float BeaconMaxDist; // 0x3e0
	FVector BeaconOffset; // 0x3e4
	ObjectProperty BeaconTexture; // 0x3f0
	FLinearColor BeaconColor; // 0x3f8
	ObjectProperty AmbientSoundCue; // 0x408
	ComponentProperty AmbientSoundComponent; // 0x410
	ObjectProperty CurrentBehavior; // 0x418
	float CurrentBehaviorActivationTime; // 0x420
	TArray<FBehaviorEntry> EncounterAgentBehaviors; // 0x424
	TArray<FBehaviorEntry> SeePlayerBehaviors; // 0x434
	float MaxSeePlayerDistSq; // 0x444
	float SeePlayerInterval; // 0x448
	TArray<FBehaviorEntry> SpawnBehaviors; // 0x44c
	TArray<FBehaviorEntry> UneasyBehaviors; // 0x45c
	TArray<FBehaviorEntry> AlertBehaviors; // 0x46c
	TArray<FBehaviorEntry> PanicBehaviors; // 0x47c
	TArray<FBehaviorEntry> RandomBehaviors; // 0x48c
	TArray<FBehaviorEntry> TakeDamageBehaviors; // 0x49c
	float RandomBehaviorInterval; // 0x4ac
	float ForceUpdateTime; // 0x4b0
	float ReachThreshold; // 0x4b4
	TArray<FBehaviorEntry> GroupWaitingBehaviors; // 0x4b8
	float DesiredGroupRadius; // 0x4c8
	float DesiredGroupRadiusSq; // 0x4cc
	float MaxLOSLifeDistanceSq; // 0x4d0
	TScriptInterface<Class> MySpawner; // 0x4d4
	FVector SpawnOffset; // 0x4e4
	float InitialLastRenderTime; // 0x4f0
	FColor DebugAgentColor; // 0x4f4
	ObjectProperty DebugSpawnDest; // 0x4f8
};

struct UUIData_Queue {
	TArray<Fdword> dwQueues; // 0x60
	int32_t nForcedBotId; // 0x70
	EUIDQCallToAction eCTA; // 0x74
	char bSelected : 1; // 0x78
};

struct UPComPositionHistoryServerComponent {
	int32_t CurrentIndex; // 0x88
	float ServerTimeStamps[0x1e]; // 0x8c
	float ClientTimeStamps[0x1e]; // 0x104
	FVector Positions[0x1e]; // 0x17c
	FVector Velocities[0x1e]; // 0x2e4
	FRotator Rotations[0x1e]; // 0x44c
	char bJustTeleported[0x1e]; // 0x5b4
	char bCollideActors[0x1e]; // 0x5d2
	char bBlockActors[0x1e]; // 0x5f0
	EPhysics Physics[0x1e]; // 0x60e
};

struct UTgAnimNodeEmoteSequence {
	EEmote ActiveEmote; // 0x1bc
	float BlendSpeed; // 0x1c0
	char InterpWeights : 1; // 0x1c4
};

struct ATgStartPoint {
	int32_t m_nMapObjectId; // 0x388
	int32_t m_nStartGroup; // 0x38c
	int32_t m_nReturnMapType; // 0x390
	float m_fStartRating; // 0x394
	float m_fCurrentRating; // 0x398
	float m_fResetRating; // 0x39c
	float m_fDecreaseRate; // 0x3a0
	TArray<ATgTeleporter*> m_ArrayOfFloats; // 0x3a4
	ObjectProperty m_TgTeleporter; // 0x3b4
};

struct UNavMeshGoal_WithinDistanceEnvelope {
	float MaxDistance; // 0x7c
	float MinDistance; // 0x80
	float MinTraversalDist; // 0x84
	FVector EnvelopeTestPoint; // 0x88
};

struct UMorphNodeMultiPose {
	TArray<ObjectProperty> Targets; // 0x74
	TArray<FName> MorphNames; // 0x84
	TArray<float> Weights; // 0x94
};

struct UTgAIBehaviorAction_UseAltFire {
	TG_EQUIP_POINT DeviceToUse; // 0x94
	char Start : 1; // 0x98
};

struct USVehicleSimCar {
	float ChassisTorqueScale; // 0xc0
	FInterpCurveFloat MaxSteerAngleCurve; // 0xc4
	float SteerSpeed; // 0xd8
	float ReverseThrottle; // 0xdc
	float EngineBrakeFactor; // 0xe0
	float MaxBrakeTorque; // 0xe4
	float StopThreshold; // 0xe8
	char bIsDriving : 1; // 0xec
	float ActualSteering; // 0xf0
	float TimeSinceThrottle; // 0xf4
};

struct UAnalyticEventsBase {
	char bSessionInProgress : 1; // 0x80
	char bAutoStartSession : 1; // 0x80
	int32_t SessionPauseThresholdSec; // 0x84
	FString UserId; // 0x88
};

struct ATgLobbyHUD {
	char m_bCurrentlyQueuedForInitialTutorial : 1; // 0x62c
	char m_bJoiningTraining : 1; // 0x62c
	char m_bShouldResetCamera : 1; // 0x62c
	int32_t m_nQueue; // 0x630
	int32_t m_nQueueState; // 0x634
	int32_t m_nLobbyState; // 0x638
	int32_t m_nPlayerState; // 0x63c
	int32_t m_nModelPose; // 0x640
	int32_t m_nModelSkin; // 0x644
	int32_t m_nModelHead; // 0x648
	int32_t m_nModelClass; // 0x64c
	int32_t m_nModelDevice; // 0x650
	int32_t m_nModelDeviceSkin; // 0x654
	int32_t m_nModelContrailSkin; // 0x658
	ObjectProperty c_CurrentCamera; // 0x65c
	TArray<FString> m_sAdditionalNeededScenes; // 0x664
	TArray<int32_t> m_CTAItemIds; // 0x674
	FString m_PlayerCTAName; // 0x684
	FString m_SavedLoginVersion; // 0x694
	FString m_LastLoginVersion; // 0x6a4
	ObjectProperty m_FrontLinePedestalMeshActor; // 0x6b4
	ObjectProperty m_FlankPedestalMeshActor; // 0x6bc
	ObjectProperty m_SupportPedestalMeshActor; // 0x6c4
	ObjectProperty m_DamagerPedestalMeshActor; // 0x6cc
	float m_fOriginalCollisionHeight; // 0x6d4
	float m_fOriginalCollisionRadius; // 0x6d8
};

struct UTgAIBehaviorCondition_DistanceFromSelectedTarget {
	char bMustBeEnemy : 1; // 0x9c
	char bIgnoreTaskforce : 1; // 0x9c
	ETargetSelector TargetSelector; // 0xa0
	ECombatTargetType TargetType; // 0xa1
	int32_t DeployableId; // 0xa4
};

struct UUIComponent_CustomPlayer {
	ObjectProperty m_pCrossplayIcon; // 0x120
	ObjectProperty m_pPlayerAvatar; // 0x128
	ObjectProperty m_mcName; // 0x130
	ObjectProperty m_mcTitle; // 0x138
	ObjectProperty m_mcTaskforce; // 0x140
};

struct UTgAnimNodeBlendByKnockdown {
	char m_bAdjustPlayRateByVelocity : 1; // 0x168
	float m_fVelocityMultiplier; // 0x16c
	float m_PreviewVelocity; // 0x170
	ObjectProperty m_TgPawn; // 0x174
	FName m_FaceDownAnimName; // 0x17c
	FName m_FaceUpAnimName; // 0x184
	FName m_FaceDownRecoverAnimName; // 0x18c
	FName m_FaceUpRecoverAnimName; // 0x194
};

struct UTgAimAssistKeyframe {
	FName KeyframeName; // 0x60
	FRawDistributionFloat AimAssistCurve; // 0x68
	char bMirrored : 1; // 0x8c
};

struct UTgGameDC_Effect {
	int32_t m_nGroup; // 0x16c
	int32_t m_nIcon; // 0x170
	int32_t m_bBuff; // 0x174
	int32_t m_bActive; // 0x178
	int32_t m_nStacks; // 0x17c
	float m_fTimer; // 0x180
	FString m_sIcon; // 0x184
	FString m_sName; // 0x194
	FString m_sDescription; // 0x1a4
	ObjectProperty m_lifeTimer; // 0x1b4
};

struct URB_ConstraintSetup {
	FName JointName; // 0x60
	FName ConstraintBone1; // 0x68
	FName ConstraintBone2; // 0x70
	FVector Pos1; // 0x78
	FVector PriAxis1; // 0x84
	FVector SecAxis1; // 0x90
	FVector Pos2; // 0x9c
	FVector PriAxis2; // 0xa8
	FVector SecAxis2; // 0xb4
	FVector PulleyPivot1; // 0xc0
	FVector PulleyPivot2; // 0xcc
	char bEnableProjection : 1; // 0xd8
	char m_bBreakOnOwnersDeath : 1; // 0xd8
	char m_bDoBreak : 1; // 0xd8
	char bLinearLimitSoft : 1; // 0xd8
	char bLinearBreakable : 1; // 0xd8
	char bSwingLimited : 1; // 0xd8
	char bTwistLimited : 1; // 0xd8
	char bSwingLimitSoft : 1; // 0xd8
	char bTwistLimitSoft : 0; // 0xd8
	char bAngularBreakable : 0; // 0xd8
	char bIsPulley : 0; // 0xd8
	char bMaintainMinDistance : 0; // 0xd8
	FLinearDOFSetup LinearXSetup; // 0xdc
	FLinearDOFSetup LinearYSetup; // 0xe4
	FLinearDOFSetup LinearZSetup; // 0xec
	float LinearLimitStiffness; // 0xf4
	float LinearLimitDamping; // 0xf8
	float LinearBreakThreshold; // 0xfc
	float Swing1LimitAngle; // 0x100
	float Swing2LimitAngle; // 0x104
	float TwistLimitAngle; // 0x108
	float SwingLimitStiffness; // 0x10c
	float SwingLimitDamping; // 0x110
	float TwistLimitStiffness; // 0x114
	float TwistLimitDamping; // 0x118
	float AngularBreakThreshold; // 0x11c
	float PulleyRatio; // 0x120
};

struct USoundNodeEnveloper {
	float LoopStart; // 0x74
	float LoopEnd; // 0x78
	float DurationAfterLoop; // 0x7c
	int32_t LoopCount; // 0x80
	char bLoopIndefinitely : 1; // 0x84
	char bLoop : 1; // 0x84
	ComponentProperty VolumeInterpCurve; // 0x88
	ComponentProperty PitchInterpCurve; // 0x90
};

struct UUIScene_UIPopupPartyManager {
	ObjectProperty m_pCloseButton; // 0x154
	ObjectProperty m_pBlocker; // 0x15c
	ObjectProperty m_pList; // 0x164
	TArray<ObjectProperty> m_mcTitle; // 0x16c
	ObjectProperty m_pSelectAllAction; // 0x17c
	ObjectProperty m_pPromptInviteByNameKeyboardAction; // 0x184
	ObjectProperty m_pPromptInviteByNameGamePadAction; // 0x18c
	ObjectProperty m_pPromptAddByNameKeyboardAction; // 0x194
	ObjectProperty m_pPromptAddByNameGamePadAction; // 0x19c
};

struct UTgSeqAct_ForceClientTutorialAction {
	eForcedClientTutorialAction ForcedAction; // 0x108
	eTutorialForceableElements GameUIElement; // 0x109
};

struct UUIComponent_Item_Card {
	ObjectProperty m_mcCooldown; // 0x18c
	ObjectProperty m_mcChampion; // 0x194
	ObjectProperty m_mcChampionIcon; // 0x19c
	ObjectProperty m_mcRank; // 0x1a4
	ObjectProperty m_mcRarity; // 0x1ac
	ObjectProperty m_mcProgressBack; // 0x1b4
	ObjectProperty m_pProgress; // 0x1bc
	char m_bShowChampion : 1; // 0x1c4
	int32_t m_nQuantityOverride; // 0x1c8
	float m_fAnimationProgress; // 0x1cc
	int32_t m_nLastCachedLevel; // 0x1d0
};

struct ATgProj_DemonTeleport {
	char m_bStopped : 1; // 0x51c
	char m_bTriggerExplosion : 1; // 0x51c
};

struct UUIComponent_DailyRewardDay {
	ObjectProperty m_mcIcon; // 0x120
	ObjectProperty m_mcDayTF; // 0x128
	ObjectProperty m_mcCheckmark; // 0x130
};

struct UTgInventoryObject_Listen_UseWhileCCed {
	char m_bIsActive : 1; // 0xd0
};

struct UTgAnimBlendByTeleportBeacon {
	char m_bDeployed : 1; // 0x168
};

struct UTgAIBehaviorNode {
	ObjectProperty Parent; // 0x64
	float InvTickFrequency; // 0x6c
	FString TitleName; // 0x70
	FString FriendlyName; // 0x80
	char bShownInMenu : 1; // 0x90
};

struct ATgGame {
	UObject* m_ContentPackageReference; // 0x4dc
	GAME_WIN_STATE m_GameWinState; // 0x4e4
	TG_GAME_TYPE m_GameType; // 0x4e5
	float m_fSpawnProtectionTime; // 0x4e8
	float m_fMaxRepawnTime; // 0x4ec
	float m_fUnpauseCountdownRemaining; // 0x4f0
	int32_t s_nBotPlayerCount; // 0x4f4
	char s_bSpawnOfflinePawns : 1; // 0x4f8
	char s_bGameInitialized : 1; // 0x4f8
	char s_bGameEndMissionProcessed : 1; // 0x4f8
	char s_bMissionSealed : 1; // 0x4f8
	char m_bForceUsePRISpawnPoint : 1; // 0x4f8
	char m_bRewardCalculated : 1; // 0x4f8
	char m_bStatsCanTie : 1; // 0x4f8
	char m_bStatsIsSymmetric : 1; // 0x4f8
	char m_bIsTutorialGametype : 0; // 0x4f8
	char m_bIsPracticeGametype : 0; // 0x4f8
	char m_bEnableHeadShots : 0; // 0x4f8
	char m_bAlliances : 0; // 0x4f8
	char m_bPlayOfTheGameLocked : 0; // 0x4f8
	char m_bSpawnDisconnectedPlayersStunned : 0; // 0x4f8
	char m_bPlayersCanOnlyDieOnce : 0; // 0x4f8
	char m_bUseKillEmotes : 0; // 0x4f8
	char m_bNotifyKillCombos : 0; // 0x4f8
	char m_bFirstBloodAwarded : 0; // 0x4f8
	int32_t s_nNextActorInstanceId; // 0x4fc
	int32_t s_nNextProjectileInstanceId; // 0x500
	TArray<ObjectProperty> s_AIVolumes; // 0x504
	TArray<int32_t> s_Taskforce1AIVolumesIndices; // 0x514
	TArray<int32_t> s_Taskforce2AIVolumesIndices; // 0x524
	TArray<ObjectProperty> s_FortressVolumes; // 0x534
	TMap<None, None> s_AIAnnotations; // 0x544
	TArray<ObjectProperty> s_DeviceVolumes; // 0x58c
	TArray<ObjectProperty> s_ActorFactories; // 0x59c
	float s_fXPModifier; // 0x5ac
	float m_fGlobalCooldownTime; // 0x5b0
	TArray<int32_t> m_ClientLogins; // 0x5b4
	float m_fOcclusionCalcPeriod; // 0x5c4
	float m_fOcclusionMaxDeviation; // 0x5c8
	float m_fReadyPercent; // 0x5cc
	FPlayOfTheGameInfo m_PlayOfTheGame; // 0x5d0
	float m_fPlayOfTheGameLength; // 0x5dc
	float m_fPlayOfTheGameIntroBufferLength; // 0x5e0
	float m_fPlayOfTheGameOuttroBufferLength; // 0x5e4
	TArray<FPlayOfTheGameEventConfig> m_PlayOfTheGameEventConfigs; // 0x5e8
	TArray<ObjectProperty> m_PlayerSpawnExits; // 0x5f8
	TArray<ObjectProperty> m_ReadyPlayers; // 0x608
	TArray<FCachedTalentTree> s_TalentTrees; // 0x618
};

struct UPhysicsAsset {
	TArray<ObjectProperty> BodySetup; // 0x60
	FMap_Mirror BodySetupIndexMap; // 0x70
	TArray<int32_t> BoundsBodies; // 0xb8
	TArray<ObjectProperty> ConstraintSetup; // 0xc8
	ObjectProperty DefaultInstance; // 0xd8
};

struct UAnimSet {
	char bAnimRotationOnly : 1; // 0x60
	char m_bUsesHandIK : 1; // 0x60
	char m_bCompressOutFacialBones : 1; // 0x60
	char m_bHasStrippedBones : 1; // 0x60
	TArray<FName> TrackBoneNames; // 0x64
	TArray<ObjectProperty> Sequences; // 0x74
	TMap<None, None> SequenceCache; // 0x84
	TArray<FAnimSetMeshLinkup> LinkupCache; // 0xcc
	TArray<char> BoneUseAnimTranslation; // 0xdc
	TArray<char> ForceUseMeshTranslation; // 0xec
	TArray<FName> UseTranslationBoneNames; // 0xfc
	TArray<FName> ForceMeshTranslationBoneNames; // 0x10c
	FName PreviewSkelMeshName; // 0x11c
	FName BestRatioSkelMeshName; // 0x124
	TArray<FName> m_FacialFilteredBones; // 0x12c
};

struct UTgAnimMetaData_MICScalarParameterExtended {
	char bSearchSelf : 1; // 0x8c
	char bSearchSiblings : 1; // 0x8c
	char bSearchChildren : 1; // 0x8c
	char bIncludeSearchParticles : 1; // 0x8c
	char bIncludeSearchMeshes : 1; // 0x8c
	char bForceAllMaterials : 1; // 0x8c
	char bFindAllMatchingMaterials : 1; // 0x8c
	char bHasSetMICs : 1; // 0x8c
	ObjectProperty MaterialToFind; // 0x90
	ObjectProperty MaterialToReplace; // 0x98
	TArray<FAlternateMaterialOverride> AlternateMaterialList; // 0xa0
	TArray<FName> TexturesToHarvest; // 0xb0
	TArray<FSwappedMeshResetInfo> MaterialsToReset; // 0xc0
	TArray<ObjectProperty> CurrentModifiedMICs; // 0xd0
};

struct UTgAnimBlendBy1P3P {
	ObjectProperty m_TgPawn; // 0x168
};

struct ATgSkeletalMeshActor_Posture {
	TG_POSTURE r_CurrentPosture; // 0x2e8
	TArray<ObjectProperty> m_PostureBlendNodes; // 0x2ec
};

struct ATgDevice_HexaFire {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaf4
	FVector m_vProjectileSpawnOffset2; // 0xafc
	char m_bFireLeftWeapon : 1; // 0xb08
};

struct UFracturedBaseComponent {
	FPointer ComponentBaseResources; // 0x310
	FRenderCommandFence_Mirror ReleaseResourcesFence; // 0x318
	TArray<char> VisibleFragments; // 0x31c
	char bVisibilityHasChanged : 1; // 0x32c
	char bVisibilityReset : 1; // 0x32c
	char bInitialVisibilityValue : 1; // 0x32c
	char bUseDynamicIndexBuffer : 1; // 0x32c
	char bUseDynamicIBWithHiddenFragments : 1; // 0x32c
	int32_t NumResourceIndices; // 0x330
	int32_t bResetStaticMesh; // 0x334
};

struct UTgControlModule {
	ObjectProperty Controller; // 0x60
	char m_bIsActive : 1; // 0x68
};

struct UUIData_PopupInput {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	FString sTitle[0x2]; // 0x68
	FString sButtonName[0x2]; // 0x88
	FPointer pButtonValidate[0x2]; // 0xa8
	ObjectProperty m_CallbackContainer; // 0xb8
};

struct UUIScene {
	TArray<FUIAnimData> m_AnimObjects; // 0x120
	TArray<ObjectProperty> m_Interactables; // 0x130
	TArray<ObjectProperty> m_FocusedGroupStack; // 0x140
	char m_bAllowDuplicateData : 1; // 0x150
	char m_bUninitializing : 1; // 0x150
};

struct UTgDeviceForm_Vine {
	char m_bBeamActive : 1; // 0x2bc
	char m_bVineInterrupted : 1; // 0x2bc
	ObjectProperty m_BeamTarget; // 0x2c0
	FVector m_vBeamTargetLocation; // 0x2c8
	TArray<ObjectProperty> m_VineBlendList1P; // 0x2d4
	TArray<ObjectProperty> m_VineBlendList3P; // 0x2e4
};

struct UMorphNodeWeightByBoneAngle {
	float Angle; // 0x84
	float NodeWeight; // 0x88
	FName BaseBoneName; // 0x8c
	EAxis BaseBoneAxis; // 0x94
	EAxis AngleBoneAxis; // 0x95
	char bInvertBaseBoneAxis : 1; // 0x98
	char bInvertAngleBoneAxis : 1; // 0x98
	char bControlMaterialParameter : 1; // 0x98
	FName AngleBoneName; // 0x9c
	int32_t MaterialSlotId; // 0xa4
	FName ScalarParameterName; // 0xa8
	ObjectProperty MaterialInstanceConstant; // 0xb0
	TArray<FBoneAngleMorph> WeightArray; // 0xb8
};

struct UPBRuleNodeWindowWall {
	float CellMaxSizeX; // 0x70
	float CellMaxSizeZ; // 0x74
	float WindowSizeX; // 0x78
	float WindowSizeZ; // 0x7c
	float WindowPosX; // 0x80
	float WindowPosZ; // 0x84
	char bScaleWindowWithCell : 1; // 0x88
	float YOffset; // 0x8c
	ObjectProperty Material; // 0x90
};

struct UUIComponent_PlayerContextMenu {
	ObjectProperty m_mcFrame; // 0x120
	ObjectProperty m_pOptionsList; // 0x128
	ObjectProperty m_pBlocker; // 0x130
};

struct UUIComponent_PlayPanel {
	ObjectProperty m_mcFade; // 0x120
	ObjectProperty m_mcIcon; // 0x128
	ObjectProperty m_mcTitle; // 0x130
	ObjectProperty m_mcSubtitle; // 0x138
	ObjectProperty m_mcDelayText; // 0x140
	ObjectProperty m_mcModeCTA; // 0x148
	ObjectProperty m_mcFWOTDIcon; // 0x150
	ObjectProperty m_mcQuestCTA; // 0x158
	ObjectProperty m_mcCheckbox; // 0x160
	ObjectProperty m_mcModeTypeTF; // 0x168
	ObjectProperty m_mcFWOTDText; // 0x170
	ObjectProperty m_mcAchievements; // 0x178
	ObjectProperty m_mcLock; // 0x180
	ObjectProperty m_mcLockNew; // 0x188
	ObjectProperty m_mcLockInfo; // 0x190
	ObjectProperty m_mcLockInfoTF; // 0x198
	ObjectProperty m_mcProgressMask; // 0x1a0
	ObjectProperty m_mcInfoButtonIcon; // 0x1a8
	ObjectProperty m_mcRankedProgress; // 0x1b0
	ObjectProperty m_mcRankedProgressRankTF; // 0x1b8
	ObjectProperty m_mcRankedProgressRankIcon; // 0x1c0
	ObjectProperty m_mcRankedProgressProgressTF; // 0x1c8
	ObjectProperty m_pPanelButton; // 0x1d0
	ObjectProperty m_pInfoButton; // 0x1d8
	ObjectProperty m_pGamepadKey; // 0x1e0
	ObjectProperty m_pQueueOpensCountdown; // 0x1e8
	ObjectProperty m_pRating; // 0x1f0
	ObjectProperty m_pRatingTooltip; // 0x1f8
};

struct UTgInventoryObject_Listen_GiftGiver {
	char m_bHasActivated : 1; // 0xd0
};

struct UTgAudioConversations {
	TArray<FVoxConversation> m_Conversations; // 0x60
	char m_bInitialized : 1; // 0x70
	char m_bTF1Conversed : 1; // 0x70
	char m_bTF2Conversed : 1; // 0x70
	ObjectProperty m_GRI; // 0x74
	int32_t m_nConversationAttemptsRemaining; // 0x7c
};

struct ATgDevice_DreadSerpent {
	char s_bQueueVoodooDeploy : 1; // 0xaec
};

struct UTgDeviceFire {
	ObjectProperty m_Owner; // 0x60
	EWeaponFireType m_nFireType; // 0x68
	DeviceTargetMode m_eTargetingMode; // 0x69
	DeviceTargeterType m_eTargeterType; // 0x6a
	TargetSelectionType m_eTargetSelectionTypeOverride; // 0x6b
	char m_bIsAOE : 1; // 0x6c
	char m_bIsCone : 1; // 0x6c
	char m_bIsLinear : 1; // 0x6c
	char m_bContinuousFire : 1; // 0x6c
	char m_bRequireLOS : 1; // 0x6c
	char m_bVerifyTargetPlacement : 1; // 0x6c
	char m_bAllowMultiplePets : 1; // 0x6c
	char m_bUseAccurateEncroachment : 1; // 0x6c
	char m_bUseTargetingEncroachmentActor : 0; // 0x6c
	char m_bScaleEncroachmentWithRangeMod : 0; // 0x6c
	char m_bPassThroughShield : 0; // 0x6c
	char m_bPassThroughDeployWalls : 0; // 0x6c
	char m_bIgnoreDeployablesForBlocking : 0; // 0x6c
	char m_bAdjustDeployHeightToExtent : 0; // 0x6c
	char m_bDeployOnOwnerLocation : 0; // 0x6c
	char m_bAdjustToGround : 0; // 0x6c
	char m_bSpawnPetOnOwnerLocation : 0; // 0x6c
	char m_bCanTriggerCounter : 0; // 0x6c
	char m_bEnchroachmentFireLOSCheck : 0; // 0x6c
	char m_bEnchroachmentIgnorePitch : 0; // 0x6c
	char m_bEncroachmentDebug : 0; // 0x6c
	char m_bTreatAmmoAsCharges : 0; // 0x6c
	char m_bMaintainBurstTarget : 0; // 0x6c
	char m_bCanTargetStealthedTargets : 0; // 0x6c
	TArray<ObjectProperty> m_EffectGroupList; // 0x70
	TArray<FTgPropertyInstance> m_Properties; // 0x80
	FPointer m_pAmSetup; // 0x90
	FPointer m_pFireModeSetup; // 0x98
	int32_t m_nId; // 0xa0
	int32_t m_nAttackType; // 0xa4
	int32_t m_nMovementType; // 0xa8
	FName m_nmOffhandAnimationType; // 0xac
	int32_t m_nTargetAffectsType; // 0xb4
	int32_t m_nAllowUseWhileFlags; // 0xb8
	int32_t m_nDamageType; // 0xbc
	int32_t m_nArcingJumps; // 0xc0
	FMap_Mirror m_PropertyIndexMap; // 0xc4
	float m_fHealthCost; // 0x10c
	float m_fManaCost; // 0x110
	float m_fEnergyCost; // 0x114
	float m_fFireTime; // 0x118
	float m_fBuildupTime; // 0x11c
	float m_fFirePreHitDelay; // 0x120
	float m_fFirePostHitDelay; // 0x124
	int32_t m_nShotsPerFire; // 0x128
	FName m_nmDamageTypeClass; // 0x12c
	UTgDamageType* m_DamageTypeClass; // 0x134
	int32_t m_nMaxTargetCount; // 0x13c
	float m_fFireLockTime; // 0x140
	float m_fZoomTime; // 0x144
	float m_fZoomFOV; // 0x148
	int32_t m_nAmmoCarriedSize; // 0x14c
	int32_t m_nAmmoClipSize; // 0x150
	float m_fAmmoClipPreReloadTime; // 0x154
	float m_fAmmoClipPostReloadTime; // 0x158
	int32_t m_nAmmoCostPerShot; // 0x15c
	int32_t m_nAmmoEfficiency; // 0x160
	float m_fEncroachmentRayCastVerticalOffset; // 0x164
	int32_t m_nTargetingEncroachmentActorOverride; // 0x168
	ObjectProperty m_TargetingEncroachmentActor; // 0x16c
	FVector m_vActorEncroachmentBaseScale; // 0x174
	FName m_nmWhileFiringCameraAnim; // 0x180
	FRotator m_AdjustToGroundRotationOffset; // 0x188
	TArray<ObjectProperty> m_CachedRechargeBonusFlatAdditive; // 0x194
	TArray<ObjectProperty> m_CachedRechargeBonusFlatSubtractive; // 0x1a4
	TArray<ObjectProperty> m_CachedRechargeBonusPercentAdditive; // 0x1b4
	TArray<ObjectProperty> m_CachedRechargeBonusPercentSubtractive; // 0x1c4
	TArray<ObjectProperty> m_ModifiedEffects; // 0x1d4
	TArray<float> m_BaseValues; // 0x1e4
	TArray<ObjectProperty> m_ModifiedEGLifetimes; // 0x1f4
	TArray<float> m_BaseLifetimes; // 0x204
	TArray<ObjectProperty> m_ModifiedEGAppValues; // 0x214
	TArray<float> m_BaseAppValues; // 0x224
	TArray<ObjectProperty> m_ModifiedEGMaxStacks; // 0x234
	TArray<float> m_BaseMaxStacks; // 0x244
	TArray<ObjectProperty> m_CachedTargetList; // 0x254
	float m_fSelectTargetsExtent; // 0x264
	ObjectProperty m_GameplayCurves; // 0x268
};

struct UUIData_Actor {
	ObjectProperty m_pActor; // 0x60
};

struct UTgGameDC_DeviceList {
	ObjectProperty m_DeviceList[0x19]; // 0x16c
};

struct AStaticMeshCollectionActor {
	TArray<ComponentProperty> StaticMeshComponents; // 0x280
	int32_t MaxStaticMeshComponents; // 0x290
	TArray<ObjectProperty> GCExternalReferences; // 0x294
};

struct UUIComponent_CountdownText {
	int32_t m_nTickHandle; // 0x120
};

struct UTgInventoryObject_Listen_CooldownDelayer {
	float m_fDelayTime; // 0xd0
	TG_FIRE_FX_DUMMY_ON m_FireFxDummyOn; // 0xd4
};

struct AKeypoint {
	ComponentProperty SpriteComp; // 0x280
};

struct UUIDataStore_StringAliasMap {
	TArray<FUIMenuInputMap> MenuInputMapArray; // 0x98
	FMap_Mirror MenuInputSets; // 0xa8
	int32_t PlayerIndex; // 0xf0
};

struct UDistributionFloatConstant {
	float Constant; // 0x7c
};

struct UMaterialExpressionStaticComponentMaskParameter {
	FExpressionInput Input; // 0xd0
	char DefaultR : 1; // 0x104
	char DefaultG : 1; // 0x104
	char DefaultB : 1; // 0x104
	char DefaultA : 1; // 0x104
	FPointer InstanceOverride; // 0x108
};

struct UParticleModuleTypeDataMeshPhysX {
	ObjectProperty PhysXParSys; // 0x84
	EPhysXMeshRotationMethod PhysXRotationMethod; // 0x8c
	float FluidRotationCoefficient; // 0x90
	FPhysXEmitterVerticalLodProperties VerticalLod; // 0x94
	float ZOffset; // 0xa4
};

struct UWindowsClient {
	UAudioDevice* AudioDeviceClass; // 0x224
	int32_t AllowJoystickInput; // 0x264
};

struct ATgDevice_ToggleModeWithLockout {
	ObjectProperty m_CachedInhand; // 0xaf4
};

struct UActorFactoryStaticMesh {
	ObjectProperty StaticMesh; // 0x9c
	FVector DrawScale3D; // 0xa4
};

struct UTgDeviceForm_SpinnerWhileFiring {
	FName m_SpinnerName; // 0x2bc
	char m_bShouldSpinOnFire : 1; // 0x2c4
	TArray<ObjectProperty> m_SpinnerSkelControls1p; // 0x2c8
	TArray<ObjectProperty> m_SpinnerSkelControls3p; // 0x2d8
};

struct UTgDeviceForm_Smash {
	TArray<ObjectProperty> m_SmashBlendList1P; // 0x2bc
	TArray<ObjectProperty> m_SmashBlendList3P; // 0x2cc
};

struct ATgBotFactory_Minions {
	MinionFactoryType m_eFactoryType; // 0x384
	char m_OverrideShouldSpawnSuperMinions : 1; // 0x388
	int32_t m_nWaveNumber; // 0x38c
	int32_t m_nLastBonusWave; // 0x390
	int32_t m_nLanePushersInQueue; // 0x394
	float m_fLastBonusActivationTime; // 0x398
	float m_fSuperMinionEndTime; // 0x39c
};

struct UTgAIBehaviorCondition_NumberDevicesFiring {
	TG_EQUIP_POINT DeviceSlot; // 0x98
	char bMustBeEnemy : 1; // 0x9c
	char bIsFiring : 1; // 0x9c
	int32_t GodThreshold; // 0xa0
	float DistanceThreshold; // 0xa4
};

struct UTgSeqAct_GiveCredits {
	int32_t CreditsToGive; // 0x108
};

struct AStaticMeshActor {
	ComponentProperty StaticMeshComponent; // 0x280
	char bRenderElementsViaProxy : 1; // 0x288
	char bDisableAutoBaseOnProcBuilding : 1; // 0x288
	char bProxy : 1; // 0x288
	char bHiddenByProxy : 1; // 0x288
	char OldCastShadow : 1; // 0x288
	char OldAcceptsLights : 1; // 0x288
	char bCuttingMesh : 1; // 0x288
	ComponentProperty Silhouette; // 0x28c
	TArray<FVertexColorPhysicalMaterialMapping> VertexColorPhysicalMaterialMappings; // 0x294
};

struct UPhysicsAssetInstance {
	ObjectProperty Owner; // 0x60
	int32_t RootBodyIndex; // 0x68
	TArray<ObjectProperty> Bodies; // 0x6c
	TArray<ObjectProperty> Constraints; // 0x7c
	FMap_Mirror CollisionDisableTable; // 0x8c
	float LinearSpringScale; // 0xd4
	float LinearDampingScale; // 0xd8
	float LinearForceLimitScale; // 0xdc
	float AngularSpringScale; // 0xe0
	float AngularDampingScale; // 0xe4
	float AngularForceLimitScale; // 0xe8
	char bInitBodies : 1; // 0xec
	char m_bPreviewBreakingConstraintsOnDeath : 1; // 0xec
};

struct UFogVolumeSphericalDensityComponent {
	float MaxDensity; // 0xe0
	FVector SphereCenter; // 0xe4
	float SphereRadius; // 0xf0
	ComponentProperty PreviewSphereRadius; // 0xf4
};

struct UTgInventoryObject_Listen_Combo_Ruckus {
	int32_t m_nDamageReductionStacks; // 0xd0
	int32_t m_nBonusDamageStacks; // 0xd4
	float m_fDamageReductionStackTime; // 0xd8
	float m_fBonusDamageStackTime; // 0xdc
	char m_bEmitterActive : 1; // 0xe0
	char m_bComboEffectsOn : 1; // 0xe0
	float m_fComboBonusTime; // 0xe4
};

struct UMaterialExpression {
	int32_t EditorX; // 0x60
	int32_t EditorY; // 0x64
	char bRealtimePreview : 1; // 0x68
	char bNeedToUpdatePreview : 1; // 0x68
	char bIsParameterExpression : 1; // 0x68
	char bShowOutputNameOnPin : 1; // 0x68
	char bHidePreviewWindow : 1; // 0x68
	char bShowInputs : 1; // 0x68
	char bShowOutputs : 1; // 0x68
	char bUsedByStaticParameterSet : 1; // 0x68
	ObjectProperty Material; // 0x6c
	ObjectProperty Function; // 0x74
	FString Desc; // 0x7c
	FColor BorderColor; // 0x8c
	TArray<FName> MenuCategories; // 0x90
	TArray<FExpressionOutput> Outputs; // 0xa0
};

struct ATgPointOfInterest {
	int32_t m_nNameMsgId; // 0x380
	FString m_sDebugName; // 0x384
};

struct UMaterialExpressionDotProduct {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct ALiftExit {
	ObjectProperty MyLiftCenter; // 0x378
	char bExitOnly : 1; // 0x380
};

struct ALiftCenter {
	ObjectProperty MyLift; // 0x378
	float MaxDist2D; // 0x380
	FVector LiftOffset; // 0x384
	char bJumpLift : 1; // 0x390
	float CollisionHeight; // 0x394
	ObjectProperty LiftTrigger; // 0x398
};

struct UTgAnimBlendByDirection {
	ObjectProperty m_TgPawn; // 0x168
	EBlendByDirectionSpeedType m_SpeedType; // 0x170
	EBlendDirTypes LastDirection; // 0x171
	char bAdjustRateByVelocity : 1; // 0x174
	char bNoDirectionIsEnabled : 1; // 0x174
	char bResetLooping : 1; // 0x174
	char m_bDelayBlendOutToPlayAnim : 1; // 0x174
	char m_bIsAllowedToBlendOut : 1; // 0x174
	char m_bMirrorDirectionsWhenPawnMirrored : 1; // 0x174
	char m_bStopChildrenOnCeaseRelevant : 1; // 0x174
};

struct UTgAnimBlendByPosture {
	ObjectProperty m_TgPawn; // 0x168
	ObjectProperty m_TgPostureMesh; // 0x170
	TG_POSTURE m_LastPosture; // 0x178
	TG_POSTURE m_CurrentPosture; // 0x179
	TG_POSTURE m_TransitionFromPosture; // 0x17a
	char m_bEnableTransitionAnims : 1; // 0x17c
	char m_bCheckLowerPriorityPostures : 1; // 0x17c
	int32_t m_CurrentPostureChildIndex; // 0x180
	TArray<Fm_PostureProfile> m_PostureProfiles; // 0x184
	ObjectProperty m_TransitionAnimNodeSeq; // 0x194
};

struct ATgDevice_Blink {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
	FVector m_vTeleportLocation; // 0xaf4
};

struct ATgWeaponMeshActor_TyraInhand {
	float m_fWeaponZoomFOV; // 0x504
	float m_fWeaponFOVDefault; // 0x508
	float m_fDoFMultiplier; // 0x50c
};

struct UTgMiniMap {
	int32_t m_nMiniMapMode; // 0x60
	char m_bShouldDisplayMiniMap : 1; // 0x64
	char m_bHasMiniMapTexture : 1; // 0x64
	char m_bRequiresLOS : 1; // 0x64
	char m_bUseFlashSizing : 1; // 0x64
	char m_bSpectating : 1; // 0x64
	float m_fLastUpdateTime; // 0x68
	ObjectProperty m_MiniMapBaseMIC; // 0x6c
	ObjectProperty m_MiniMapMIC; // 0x74
	ObjectProperty m_DynamicMask; // 0x7c
	int32_t m_nMaskSize; // 0x84
	float m_fIconScale; // 0x88
	FVector2D m_vMapLocation; // 0x8c
	int32_t m_nMapSize; // 0x94
	FPointer m_MiniMapRender; // 0x98
	ObjectProperty m_OwnerPC; // 0xa0
	int32_t m_nWorldMapSize; // 0xa8
	ObjectProperty m_MICPinging; // 0xac
	ObjectProperty m_MICPingingEnemy; // 0xb4
	ObjectProperty m_MICRetreat; // 0xbc
	ObjectProperty m_MICRetreatEnemy; // 0xc4
	ObjectProperty m_MICAlert; // 0xcc
	ObjectProperty m_MICAlertEnemy; // 0xd4
	ObjectProperty m_MICAlertSilent; // 0xdc
	ObjectProperty m_MICLocalPlayer; // 0xe4
	ObjectProperty m_MICLocalSpectator; // 0xec
	TArray<ObjectProperty> m_TextureRefs; // 0xf4
	ObjectProperty m_MICPlayer[0x6]; // 0x104
	ObjectProperty m_MICMinion[0x6]; // 0x134
	ObjectProperty m_MICTower[0x6]; // 0x164
	ObjectProperty m_MICTitan[0x6]; // 0x194
	ObjectProperty m_MICPhoenix[0x6]; // 0x1c4
	ObjectProperty m_MICCapturePoint[0x6]; // 0x1f4
	ObjectProperty m_MICLanePusher[0x6]; // 0x224
	ObjectProperty m_MICTowerOlympus[0x3]; // 0x254
	ObjectProperty m_MICTitanOlympus[0x6]; // 0x26c
	ObjectProperty m_MICPhoenixOlympus[0x3]; // 0x29c
	ObjectProperty m_MICMonster; // 0x2b4
	FLinearColor m_PortalLinkColor[0x6]; // 0x2bc
	FBuffMonsterMIC m_MICBuffMonster[0xe]; // 0x31c
	ObjectProperty m_MICTowerDestroyed; // 0x46c
	ObjectProperty m_PlayerBackground[0x6]; // 0x474
	ObjectProperty m_TowerAttackBackground[0x6]; // 0x4a4
	TMap<None, None> m_IconMap; // 0x4d4
	FBitArray_Mirror m_MaskPoints; // 0x51c
	TgMapOrientation m_Orientation; // 0x53c
	TgMapTeam m_LocalTeam; // 0x53d
	char bUpdateCapturePoint[0x5]; // 0x53e
	TMap<None, None> m_EntityMap; // 0x544
	TArray<FLayerIndex> m_PortalLayeringIdx; // 0x58c
	TArray<FLayerIndex> m_LayeringIdx; // 0x59c
	TArray<FMiniMapPingInfo> m_IndependentPings; // 0x5ac
};

struct UUIScene_UIBattlePass {
	ObjectProperty m_pBack; // 0x154
	ObjectProperty m_pTabs; // 0x15c
	ObjectProperty m_pHome; // 0x164
	ObjectProperty m_pChallenges; // 0x16c
	ObjectProperty m_pPicks; // 0x174
};

struct ATgCollisionProxy_Vortex {
	float m_fGroundSpeedStrafePct; // 0x2b4
	float m_fGroundSpeedToVortex; // 0x2b8
	float m_fGroundSpeedPctRetained; // 0x2bc
	float m_fInnerRadius; // 0x2c0
	char m_bEnabled : 1; // 0x2c4
	char m_bOnlyAffectCurrentTarget : 1; // 0x2c4
	ObjectProperty m_LastInstigator; // 0x2c8
};

struct USoundNodeDelay {
	float DelayMin; // 0x74
	float DelayMax; // 0x78
	FRawDistributionFloat DelayDuration; // 0x7c
};

struct UTranslatorTag {
	FName Tag; // 0x60
};

struct ASkeletalMeshActorMAT {
	TArray<ObjectProperty> SlotNodes; // 0x2e8
};

struct UInteractiveFoliageComponent {
	FPointer FoliageSceneProxy; // 0x310
};

struct UTgDevMenuMoviePlayer {
	ObjectProperty m_DevMenu; // 0x2a0
};

struct UMaterialExpressionStaticSwitch {
	char DefaultValue : 1; // 0xb0
	char ExtendedCaptionDisplay : 1; // 0xb0
	FExpressionInput A; // 0xb4
	FExpressionInput B; // 0xe8
	FExpressionInput Value; // 0x11c
};

struct UPBRuleNodeSplit {
	EProcBuildingAxis SplitAxis; // 0x70
	TArray<FRBSplitInfo> SplitSetup; // 0x74
};

struct UTgAnimNodeFitToDuration {
	float Duration; // 0x114
	float OverrideDuration; // 0x118
	char bAllowIncreasedPlayRate : 1; // 0x11c
	char bAllowDecreasedPlayRate : 1; // 0x11c
	char bClampDuration : 1; // 0x11c
	char m_bScaleByReload : 1; // 0x11c
	float ClampedMinDuration; // 0x120
	float ClampedMaxDuration; // 0x124
	TG_EQUIP_POINT m_EquipPoint; // 0x128
	float m_fDurationMultiplier; // 0x12c
};

struct AMutator {
	ObjectProperty NextMutator; // 0x280
	TArray<FString> GroupNames; // 0x288
	char bUserAdded : 1; // 0x298
};

struct UMobileMenuObjectProxy {
	DelegateProperty __OnTouchEvent__Delegate; // 0xdc
	DelegateProperty __OnRenderObject__Delegate; // 0xec
};

struct UTgAnimNodePlayTgCameraAnim {
	ObjectProperty m_CameraShake; // 0x114
	ObjectProperty m_TgPawn; // 0x11c
};

struct UUIData_CustomQueue {
	Fdword m_dwQueueId; // 0x60
	FString m_sDesc; // 0x64
	FString m_sShortDesc; // 0x74
	int32_t m_nTaskforceSize; // 0x84
	int32_t m_nSortOrder; // 0x88
};

struct UUIScene_UIPartyLobby {
	int32_t m_nOnTickCallbackHandle; // 0x154
	ObjectProperty m_mcSearching; // 0x158
	ObjectProperty m_mcSearchingTitle; // 0x160
	ObjectProperty m_mcSearchingSubtitle; // 0x168
	ObjectProperty m_pPlayerList; // 0x170
	ObjectProperty m_pInfoPanel; // 0x178
	ObjectProperty m_pPlayerMenu; // 0x180
	ObjectProperty m_pHoveredPlayer; // 0x188
	ObjectProperty m_pHoveredCustomPlayer; // 0x190
	ObjectProperty m_grInput; // 0x198
	ObjectProperty m_akPlayerReady; // 0x1a0
	ObjectProperty m_akPlayerUnready; // 0x1a8
	ObjectProperty m_akLeave; // 0x1b0
	ObjectProperty m_akMatch; // 0x1b8
};

struct UTgInvListener_CrackShot {
	TArray<FCrackShotBonusDamageTarget> m_Targets; // 0xc8
};

struct UTgSkelCon_Recoil {
	TArray<FRecoilProfile> m_Profiles; // 0x168
	int32_t m_nActiveProfileIndex; // 0x178
};

struct UStaticMeshComponent {
	int32_t ForcedLodModel; // 0x294
	int32_t PreviousLODLevel; // 0x298
	ObjectProperty StaticMesh; // 0x29c
	FColor WireframeColor; // 0x2a4
	char bIgnoreInstanceForTextureStreaming : 1; // 0x2a8
	char bOverrideLightMapResolution : 1; // 0x2a8
	char bOverrideLightMapRes : 1; // 0x2a8
	int32_t OverriddenLightMapResolution; // 0x2ac
	int32_t OverriddenLightMapRes; // 0x2b0
	float OverriddenLODMaxRange; // 0x2b4
	float StreamingDistanceMultiplier; // 0x2b8
	int32_t SubDivisionStepSize; // 0x2bc
	char bUseSubDivisions : 1; // 0x2c0
	char bForceStaticDecals : 1; // 0x2c0
	char bCanHighlightSelectedSections : 1; // 0x2c0
	char bUseSimpleLightmapModifications : 1; // 0x2c0
	ELightmapModificationFunction SimpleLightmapModificationFunction; // 0x2c4
	char bNeverBecomeDynamic : 1; // 0x2c8
	char bForceRenderAsDynamic : 1; // 0x2c8
	TArray<FGuid> IrrelevantLights; // 0x2cc
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x2dc
	int32_t VertexPositionVersionNumber; // 0x2ec
	int32_t ForcedElementIndex; // 0x2f0
	FLightmassPrimitiveSettings LightmassSettings; // 0x2f4
};

struct UTgSkelCon_OscillateRotation {
	float OscillationAmplitude; // 0x100
	float OscillationFrequency; // 0x104
	FVector OscillationAxis; // 0x108
	EBoneControlSpace OscillationAxisSpace; // 0x114
	FName OscillationAxisSpaceBoneName; // 0x118
	float Theta; // 0x120
};

struct UParticleModuleOrbitBase {
	char bUseEmitterTime : 1; // 0x68
};

struct UInterpTrackInstLinearColorProp {
	FPointer ColorProp; // 0x70
	FLinearColor ResetColor; // 0x78
};

struct USequenceOp {
	char bIsActivated : 1; // 0x98
	char bIsCurrentDebuggerOp : 1; // 0x98
	char bActive : 1; // 0x98
	char bLatentExecution : 1; // 0x98
	char bAutoActivateOutputLinks : 1; // 0x98
	char bHaveMovingVarConnector : 1; // 0x98
	char bHaveMovingInputConnector : 1; // 0x98
	char bHaveMovingOutputConnector : 1; // 0x98
	char bPendingVarConnectorRecalc : 0; // 0x98
	char bPendingInputConnectorRecalc : 0; // 0x98
	char bPendingOutputConnectorRecalc : 0; // 0x98
	char bIsBreakpointSet : 0; // 0x98
	char bIsHiddenBreakpointSet : 0; // 0x98
	TArray<FSeqOpInputLink> InputLinks; // 0x9c
	TArray<FSeqOpOutputLink> OutputLinks; // 0xac
	TArray<FSeqVarLink> VariableLinks; // 0xbc
	TArray<FSeqEventLink> EventLinks; // 0xcc
	int32_t PlayerIndex; // 0xdc
	char GamepadID; // 0xe0
	int32_t ActivateCount; // 0xe4
	int32_t SearchTag; // 0xe8
};

struct UTgAchievement_SurgeonGeneral {
	int32_t m_nHealing; // 0x90
};

struct UDistributionVectorUniform {
	FVector Max; // 0x7c
	FVector Min; // 0x88
	char bLockAxes : 1; // 0x94
	char bUseExtremes : 1; // 0x94
	EDistributionVectorLockFlags LockedAxes; // 0x98
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x99
};

struct ATgProj_Loogie {
	char m_bWasExplodedByRocket : 1; // 0x51c
	char m_bIgnoreRocketOwner : 1; // 0x51c
};

struct UMaterialInstanceConstant {
	TArray<FFontParameterValue> FontParameterValues; // 0x2f4
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x304
	TArray<FTextureParameterValue> TextureParameterValues; // 0x314
	TArray<FVectorParameterValue> VectorParameterValues; // 0x324
	TArray<FMICStateParams> StateParameters; // 0x334
};

struct UInterpTrackInstSlomo {
	float OldTimeDilation; // 0x60
};

struct UGameViewportClient {
	FPointer VfTable_FExec; // 0x68
	FPointer Viewport; // 0x70
	FPointer ViewportFrame; // 0x78
	TArray<ObjectProperty> GlobalInteractions; // 0x80
	UUIInteraction* UIControllerClass; // 0x90
	ObjectProperty UIController; // 0x98
	ObjectProperty ViewportConsole; // 0xa0
	FExportShowFlags_Mirror ShowFlags; // 0xa8
	FString LoadingMessage; // 0xb8
	FString SavingMessage; // 0xc8
	FString ConnectingMessage; // 0xd8
	FString PausedMessage; // 0xe8
	FString PrecachingMessage; // 0xf8
	char bShowTitleSafeZone : 1; // 0x108
	char bDisplayHardwareMouseCursor : 1; // 0x108
	char bOverrideDiffuseAndSpecular : 1; // 0x108
	char bIsPlayInEditorViewport : 1; // 0x108
	char bShowSystemMouseCursor : 1; // 0x108
	char bDisableWorldRendering : 1; // 0x108
	char bCapturedWorldRendering : 1; // 0x108
	char bDebugNoGFxUI : 1; // 0x108
	FTitleSafeZoneArea TitleSafeZone; // 0x10c
	TArray<FSplitscreenData> SplitscreenInfo; // 0x11c
	ESplitScreenType DesiredSplitscreenType; // 0x12c
	ESplitScreenType ActiveSplitscreenType; // 0x12d
	ESplitScreenType Default2PSplitType; // 0x12e
	ESplitScreenType Default3PSplitType; // 0x12f
	FString ProgressMessage[0x2]; // 0x130
	float ProgressTimeOut; // 0x150
	float ProgressFadeTime; // 0x154
	TArray<FDebugDisplayProperty> DebugProperties; // 0x158
	FPointer ScaleformInteraction; // 0x168
	FPointer PreviousFrameViewFamily; // 0x170
	DelegateProperty __HandleInputKey__Delegate; // 0x178
	DelegateProperty __HandleInputAxis__Delegate; // 0x188
	DelegateProperty __HandleInputChar__Delegate; // 0x198
};

struct UTgAIBehaviorCondition_IsInMinotaurRadius {
	char bMustBeEnemy : 1; // 0x98
};

struct UUIHudMinimap {
	int32_t m_nDepth; // 0x244
	int32_t m_nTeamsRemain; // 0x248
	int32_t m_nDeathFogTime; // 0x24c
	int32_t m_nPreConvergeTime; // 0x250
	int32_t m_nAlertTimePrevious; // 0x254
	int32_t m_nRemain[0x2]; // 0x258
	int32_t m_nLeaderboard[0x3]; // 0x260
	char m_bInit : 1; // 0x26c
	char m_bSnap : 1; // 0x26c
	char m_bDirection : 1; // 0x26c
	char m_bShowAlert : 1; // 0x26c
	char m_bShowHealth : 1; // 0x26c
	char m_bAnimateAlert : 1; // 0x26c
	char m_bFirstConverge : 1; // 0x26c
	char m_bDeathFogSpawned : 1; // 0x26c
	char m_bFirstPreConverge : 0; // 0x26c
	char m_bMinimapShouldShow : 0; // 0x26c
	char m_bDisableTextScaling : 0; // 0x26c
	char m_bResurrecting : 0; // 0x26c
	float m_fSize; // 0x270
	float m_fRadius; // 0x274
	float m_fOffsetX; // 0x278
	float m_fOffsetY; // 0x27c
	float m_fGameTime; // 0x280
	float m_fAlertTimer; // 0x284
	float m_fDirectionTimer; // 0x288
	float m_fChestPulseIn; // 0x28c
	float m_fChestPulseIOut; // 0x290
	float m_fConvergeRadius; // 0x294
	float m_fConvergeTarget; // 0x298
	float m_fConvergeTargetX; // 0x29c
	float m_fConvergeTargetY; // 0x2a0
	float m_fConvergeStartSize; // 0x2a4
	float m_fResurrectionTimer; // 0x2a8
	float m_fTotalResurrectionTime; // 0x2ac
	float m_fLootGoblinSpawnedTimer; // 0x2b0
	float m_fTotalLootGoblinSpawnedTime; // 0x2b4
	float m_fHealth[0x2]; // 0x2b8
	FString m_sForgeName; // 0x2c0
	FString m_sNamedAreaName; // 0x2d0
	FString m_sAlertTitle; // 0x2e0
	FVector m_vBoundsCenter; // 0x2f0
	FVector m_vBoundsExtents; // 0x2fc
	TArray<FUIPING_DATA> m_Chests; // 0x308
	TArray<FUIPING_DATA> m_Forges; // 0x318
	TArray<FUIPING_DATA> m_Catapults; // 0x328
	TArray<FUIPING_DATA> m_NamedAreas; // 0x338
	ObjectProperty m_mcMap; // 0x348
	ObjectProperty m_mcMapBackground; // 0x350
	ObjectProperty m_mcMapFog; // 0x358
	ObjectProperty m_mcMapMask; // 0x360
	ObjectProperty m_mcMapRect; // 0x368
	ObjectProperty m_mcMapMaskRect; // 0x370
	ObjectProperty m_mcMapFrame; // 0x378
	ObjectProperty m_mcMapInner; // 0x380
	ObjectProperty m_mcMapOuter; // 0x388
	ObjectProperty m_mcMapChests; // 0x390
	ObjectProperty m_mcMapDirection; // 0x398
	ObjectProperty m_mcMapDirectionWaypoint; // 0x3a0
	ObjectProperty m_mcMapDirectionDistance; // 0x3a8
	ObjectProperty m_mcMapDirectionDistanceTF[0x2]; // 0x3b0
	ObjectProperty m_mcMapDirectionAnim; // 0x3c0
	ObjectProperty m_mcMapDirectionLine; // 0x3c8
	ObjectProperty m_mcMapZeppelinA; // 0x3d0
	ObjectProperty m_mcMapNamedAreas; // 0x3d8
	ObjectProperty m_mcMapScrimmageDirection; // 0x3e0
	ObjectProperty m_mcMapScrimmageDirectionAnim; // 0x3e8
	ObjectProperty m_mcMapScrimmageDirectionLine; // 0x3f0
	ObjectProperty m_mcMapImage[0x3]; // 0x3f8
	ObjectProperty m_mcLocalPlayer; // 0x410
	ObjectProperty m_mcTeam[0x6]; // 0x418
	ObjectProperty m_mcAlliance[0x28]; // 0x448
	ObjectProperty m_mcWaypoint[0x6]; // 0x588
	ObjectProperty m_mcLeaderboard[0x3]; // 0x5b8
	ObjectProperty m_mcTime; // 0x5d0
	ObjectProperty m_mcTeamsRemain; // 0x5d8
	ObjectProperty m_mcRemain[0x2]; // 0x5e0
	ObjectProperty m_mcHealth[0x2]; // 0x5f0
	ObjectProperty m_mcHealthBar[0x2]; // 0x600
	ObjectProperty m_mcAlert; // 0x610
	ObjectProperty m_mcAlertIcon; // 0x618
	ObjectProperty m_mcAlertMini; // 0x620
	ObjectProperty m_mcAlertMiniBar; // 0x628
	ObjectProperty m_mcAlertMiniBarTip; // 0x630
	ObjectProperty m_mcAlertMiniFlash; // 0x638
	ObjectProperty m_mcAlertMiniFog; // 0x640
	ObjectProperty m_mcAlertMiniIcon; // 0x648
	ObjectProperty m_mcDailyQuests; // 0x650
	ObjectProperty m_mcQuestEntry[0x3]; // 0x658
	ObjectProperty m_mcQuestMask[0x3]; // 0x670
	ObjectProperty m_mcQuestTip[0x3]; // 0x688
	ObjectProperty m_mcQuestComplete[0x3]; // 0x6a0
	ObjectProperty m_mcQuestFillBar[0x3]; // 0x6b8
	ObjectProperty m_mcQuestEntryBG[0x3]; // 0x6d0
	ObjectProperty m_mcQuestRewardText; // 0x6e8
	ObjectProperty m_mcQuestReward1; // 0x6f0
	ObjectProperty m_mcQuestCompleteNotify; // 0x6f8
	ObjectProperty m_mcResurrectionNotify; // 0x700
	ObjectProperty m_mcResurrectionMini; // 0x708
	ObjectProperty m_mcResurrectionMiniBar; // 0x710
	ObjectProperty m_mcPOIMessage; // 0x718
	ObjectProperty m_mcPOIText0; // 0x720
	ObjectProperty m_mcPOIText1; // 0x728
	FString m_sCurrentPOIName; // 0x730
	FString m_sNextPOIName; // 0x740
	float m_fPOITimer; // 0x750
	float m_fPOIPreTime; // 0x754
	float m_fPOIShowTime; // 0x758
	float m_fPOIPostTime; // 0x75c
	POIMessageState m_ePOIMessageState; // 0x760
	ObjectiveClearState m_eObjectiveClearState; // 0x761
	ObjectProperty m_mcCurrentObjective; // 0x764
	ObjectProperty m_mcObjectives[0x5]; // 0x76c
	ObjectProperty m_mcObjectiveCheck[0x5]; // 0x794
	ObjectProperty m_mcObjectiveText[0x5]; // 0x7bc
	int32_t m_nCurrentObjMessageId; // 0x7e4
	int32_t m_nCurrentObjIndex; // 0x7e8
	float m_fClearObjectivesTimer; // 0x7ec
	ObjectProperty m_akEnterPOI; // 0x7f0
};

struct AMobileTouchInputVolume {
	char bEnabled : 1; // 0x2bc
};

struct UGameExplosionContent {
	char bAutoControllerVibration : 1; // 0x60
	char bOrientCameraShakeTowardsEpicenter : 1; // 0x60
	ObjectProperty ExplosionSound; // 0x64
	ObjectProperty CamShake; // 0x6c
	ObjectProperty CamShake_Left; // 0x74
	ObjectProperty CamShake_Right; // 0x7c
	ObjectProperty CamShake_Rear; // 0x84
	float CamShakeInnerRadius; // 0x8c
	float CamShakeOuterRadius; // 0x90
	float CamShakeFalloff; // 0x94
	AEmitterCameraLensEffectBase* CameraLensEffect; // 0x98
	float CameraLensEffectRadius; // 0xa0
	ComponentProperty ExploLight; // 0xa4
	float ExploLightFadeOutTime; // 0xac
	ComponentProperty ExploRadialBlur; // 0xb0
	float ExploRadialBlurFadeOutTime; // 0xb8
	float ExploRadialBlurMaxBlur; // 0xbc
	ObjectProperty ParticleEmitterTemplate; // 0xc0
	ObjectProperty FogVolumeArchetype; // 0xc8
};

struct USpeedTreeComponent {
	ObjectProperty SpeedTree; // 0x24c
	char bUseLeafCards : 1; // 0x254
	char bUseLeafMeshes : 1; // 0x254
	char bUseBranches : 1; // 0x254
	char bUseFronds : 1; // 0x254
	char bUseBillboards : 1; // 0x254
	float Lod3DStart; // 0x258
	float Lod3DEnd; // 0x25c
	float LodBillboardStart; // 0x260
	float LodBillboardEnd; // 0x264
	float LodLevelOverride; // 0x268
	ObjectProperty Branch1Material; // 0x26c
	ObjectProperty Branch2Material; // 0x274
	ObjectProperty FrondMaterial; // 0x27c
	ObjectProperty LeafCardMaterial; // 0x284
	ObjectProperty LeafMeshMaterial; // 0x28c
	ObjectProperty BillboardMaterial; // 0x294
	ObjectProperty Branch1MaterialNoScreenDoor; // 0x29c
	ObjectProperty Branch2MaterialNoScreenDoor; // 0x2a4
	ObjectProperty FrondMaterialNoScreenDoor; // 0x2ac
	ObjectProperty LeafCardMaterialNoScreenDoor; // 0x2b4
	ObjectProperty LeafMeshMaterialNoScreenDoor; // 0x2bc
	ObjectProperty BillboardMaterialNoScreenDoor; // 0x2c4
	TArray<FSpeedTreeStaticLight> StaticLights; // 0x2cc
	FLightMapRef BranchLightMap; // 0x2dc
	FLightMapRef FrondLightMap; // 0x2e4
	FLightMapRef LeafMeshLightMap; // 0x2ec
	FLightMapRef LeafCardLightMap; // 0x2f4
	FLightMapRef BillboardLightMap; // 0x2fc
	FMatrix RotationOnlyMatrix; // 0x310
	FLightmassPrimitiveSettings LightmassSettings; // 0x350
};

struct UUIComponent_CenteredHeaderTab {
	ObjectProperty m_mcSelectedTF; // 0x120
	ObjectProperty m_mcSelectedFrame; // 0x128
	ObjectProperty m_mcHighlightTF; // 0x130
	ObjectProperty m_mcShadowTF; // 0x138
	ObjectProperty m_mcFrame; // 0x140
	ObjectProperty m_pCTA; // 0x148
};

struct USeqCond_CompareBool {
	char bResult : 1; // 0xec
};

struct UUIDataProvider_OnlinePlayerDataBase {
	int32_t PlayerControllerId; // 0x70
};

struct UTgGameplayCurvesSet_AimAssistBounds {
	FRawDistributionFloat BoundsScaleHorizByDistance; // 0x64
	FRawDistributionFloat BoundsScaleVertByDistance; // 0x88
	char bUseHorizCurveForVert : 1; // 0xac
	float fBaseHorizMultiplier; // 0xb0
	float fBaseVertMultiplier; // 0xb4
};

struct UTgInventoryObject_Listen_HealthByPercent {
	int32_t m_iAppliedStacks; // 0xc8
};

struct UTgCameraModule_SpectatorOverview {
	FRotator WorldViewRotation; // 0x9c
	float FOV; // 0xa8
	float TargetZoomedFOV; // 0xac
	float ZoomIncrement; // 0xb0
	float MinZoom; // 0xb4
	float MaxZoom; // 0xb8
	float ZoomInterpTime; // 0xbc
	FVector CurrentSpringLocation; // 0xc0
	float PawnTargetSpringDamping; // 0xcc
	float FreeCamSpringDamping; // 0xd0
	float IgnoreSpringDistance; // 0xd4
	TArray<FCameraPitchInfo> CameraPitchData; // 0xd8
	char bFlippedSides : 1; // 0xe8
	char bJustBecameActive : 1; // 0xe8
	char bAutoZoomEnabled : 1; // 0xe8
	float OverviewCameraInfluenceDist; // 0xec
	TArray<ObjectProperty> OverviewCameras; // 0xf0
	FVector ObstacleTransparentExtent; // 0x100
	float fMinAutoZoomFOVAngle; // 0x10c
	float fMaxAutoZoomFOVAngle; // 0x110
	float fMinAutoZoomDistance; // 0x114
	float fMaxAutoZoomDistance; // 0x118
	float fAutoZoomDetectionRadius; // 0x11c
	float fAutoZoomInSpeed; // 0x120
	float fAutoZoomOutSpeed; // 0x124
	float fAutoZoomInLockOutTime; // 0x128
	float fAutoZoomOutLockOutTime; // 0x12c
	float m_RemainingAutoZoomInLockOutTime; // 0x130
	float m_RemainingAutoZoomOutLockOutTime; // 0x134
};

struct UParticleModuleTypeDataAnimTrail {
	FName ControlEdgeName; // 0x68
	int32_t SheetsPerTrail; // 0x70
	char bDeadTrailsOnDeactivate : 1; // 0x74
	char bClipSourceSegement : 1; // 0x74
	char bEnablePreviousTangentRecalculation : 1; // 0x74
	char bTangentRecalculationEveryFrame : 1; // 0x74
	char bRenderGeometry : 1; // 0x74
	char bRenderSpawnPoints : 1; // 0x74
	char bRenderTangents : 1; // 0x74
	char bRenderTessellation : 1; // 0x74
	float TilingDistance; // 0x78
	float DistanceTessellationStepSize; // 0x7c
	float TangentTessellationScalar; // 0x80
};

struct UMorphNodeWeightByBoneRotation {
	float Angle; // 0x84
	float NodeWeight; // 0x88
	FName BoneName; // 0x8c
	EAxis BoneAxis; // 0x94
	char bInvertBoneAxis : 1; // 0x98
	char bControlMaterialParameter : 1; // 0x98
	TArray<FBoneAngleMorph> WeightArray; // 0x9c
	int32_t MaterialSlotId; // 0xac
	FName ScalarParameterName; // 0xb0
	ObjectProperty MaterialInstanceConstant; // 0xb8
};

struct UTgControlModule_TopDown {
	float DefaultStartHeight; // 0x78
};

struct UUIComponent_BattlePassRewardLevel {
	ObjectProperty m_pItemIcon; // 0x120
	ObjectProperty m_pButton; // 0x128
	ObjectProperty m_mcLock; // 0x130
	ObjectProperty m_mcCheck; // 0x138
};

struct UDistributionVectorParameterBase {
	FName ParameterName; // 0x90
	FVector MinInput; // 0x98
	FVector MaxInput; // 0xa4
	FVector MinOutput; // 0xb0
	FVector MaxOutput; // 0xbc
	DistributionParamMode ParamModes[0x3]; // 0xc8
};

struct UUIComponent_ChampionSimple {
	ObjectProperty m_mcText; // 0x120
	ObjectProperty m_mcChampionIconWrapper; // 0x128
	ObjectProperty m_mcIconImage; // 0x130
};

struct UOnlineSubsystem {
	FPointer VfTable_FTickableObject; // 0x60
	TScriptInterface<Class> AccountInterface; // 0x68
	TScriptInterface<Class> PlayerInterface; // 0x78
	TScriptInterface<Class> PlayerInterfaceEx; // 0x88
	TScriptInterface<Class> MarketplaceInterface; // 0x98
	TScriptInterface<Class> SystemInterface; // 0xa8
	TScriptInterface<Class> GameInterface; // 0xb8
	TScriptInterface<Class> ContentInterface; // 0xc8
	TScriptInterface<Class> VoiceInterface; // 0xd8
	TScriptInterface<Class> StatsInterface; // 0xe8
	TScriptInterface<Class> NewsInterface; // 0xf8
	TScriptInterface<Class> PartyChatInterface; // 0x108
	TScriptInterface<Class> TitleFileInterface; // 0x118
	TScriptInterface<Class> TitleFileCacheInterface; // 0x128
	TScriptInterface<Class> UserCloudInterface; // 0x138
	TScriptInterface<Class> SharedCloudInterface; // 0x148
	TScriptInterface<Class> SocialInterface; // 0x158
	TScriptInterface<Class> ChatInterface; // 0x168
	TScriptInterface<Class> AuthInterface; // 0x178
	TScriptInterface<Class> GameDVRInterface; // 0x188
	TScriptInterface<Class> CommunityContentInterface; // 0x198
	TArray<DelegateProperty> OnLeaveStorefrontDelegates; // 0x1a8
	FUniqueNetId LoggedInPlayerNetId; // 0x1b8
	TArray<FNamedInterface> NamedInterfaces; // 0x1c0
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x1d0
	TArray<FNamedSession> Sessions; // 0x1e0
	TArray<FSessionMemberInfo> PartyMemberList; // 0x1f0
	TArray<FSessionMemberInfo> GameMemberList; // 0x200
	char bCameFromAutoLogin : 1; // 0x210
	char bUseBuildIdOverride : 1; // 0x210
	int32_t BuildIdOverride; // 0x214
	FString IniLocPatcherClassName; // 0x218
	ObjectProperty Patcher; // 0x228
	float AsyncMinCompletionTime; // 0x230
	FString DefaultSessionTemplateName; // 0x234
	FString PartySessionTemplateName; // 0x244
	DelegateProperty __OnLeaveStorefront__Delegate; // 0x254
};

struct UTgAnimNotify_PlayPetAnim {
	FName m_ChildSeqName; // 0x68
};

struct UMorphTargetSet {
	TArray<ObjectProperty> Targets; // 0x60
	ObjectProperty BaseSkelMesh; // 0x70
	FArray_Mirror RawWedgePointIndices; // 0x78
};

struct UPBRuleNodeQuad {
	ObjectProperty Material; // 0x70
	float RepeatMaxSizeX; // 0x78
	float RepeatMaxSizeZ; // 0x7c
	int32_t QuadLightmapRes; // 0x80
	float YOffset; // 0x84
	char bDisableMaterialRepeat : 1; // 0x88
};

struct UUIComponent_Interactable {
	ObjectProperty m_mcInteractable; // 0x118
	TArray<ObjectProperty> m_mcRolloverObjects; // 0x120
	ObjectProperty m_mcSelected; // 0x130
	char m_bSelected : 1; // 0x138
	UIDISPLAYTYPE m_eInteractionType; // 0x13c
};

struct UTgAchievement_Unstoppable {
	char m_bReachedKillstreak : 1; // 0x90
};

struct UMaterialExpressionTextureSample {
	ObjectProperty Texture; // 0xb0
	FExpressionInput Coordinates; // 0xb8
	FExpressionInput TextureObject; // 0xec
};

struct ATgSpectatorTempCam {
	char bIsViewTarget : 1; // 0x420
	char bIsBookmark : 1; // 0x420
};

struct UFracturedStaticMesh {
	float CoreMeshScale; // 0x1e4
	char bSliceUsingCoreCollision : 1; // 0x218
	ObjectProperty FragmentDestroyEffect; // 0x21c
	TArray<ObjectProperty> FragmentDestroyEffects; // 0x224
	float FragmentDestroyEffectScale; // 0x234
	float FragmentHealthScale; // 0x238
	float FragmentMinHealth; // 0x23c
	float FragmentMaxHealth; // 0x240
	char bUniformFragmentHealth : 1; // 0x244
	float ChunkLinVel; // 0x248
	float ChunkAngVel; // 0x24c
	float ChunkLinHorizontalScale; // 0x250
	float ExplosionVelScale; // 0x254
	char bCompositeChunksExplodeOnImpact : 1; // 0x258
	char bFixIsolatedChunks : 1; // 0x25c
	char bAlwaysBreakOffIsolatedIslands : 1; // 0x260
	char bSpawnPhysicsChunks : 1; // 0x264
	float ChanceOfPhysicsChunk; // 0x268
	float ExplosionChanceOfPhysicsChunk; // 0x26c
	float NormalPhysicsChunkScaleMin; // 0x270
	float NormalPhysicsChunkScaleMax; // 0x274
	float ExplosionPhysicsChunkScaleMin; // 0x278
	float ExplosionPhysicsChunkScaleMax; // 0x27c
	float MinConnectionSupportArea; // 0x280
	ObjectProperty DynamicOutsideMaterial; // 0x284
	ObjectProperty LoseChunkOutsideMaterial; // 0x28c
	int32_t OutsideMaterialIndex; // 0x294
};

struct UShadowMapTexture2D {
	int32_t ShadowmapFlags; // 0x208
};

struct UFogVolumeConeDensityComponent {
	float MaxDensity; // 0xe0
	FVector ConeVertex; // 0xe4
	float ConeRadius; // 0xf0
	FVector ConeAxis; // 0xf4
	float ConeMaxAngle; // 0x100
	ComponentProperty PreviewCone; // 0x104
};

struct UUIDataLeaguePlayer {
	ObjectProperty pPlayer; // 0x60
	ObjectProperty pLeague; // 0x68
	ObjectProperty pTier; // 0x70
	ObjectProperty pHighestTier; // 0x78
	int32_t nPointsEarned; // 0x80
	int32_t nPointsTrend; // 0x84
	Fdword dwRank; // 0x88
	Fdword dwRankPrev; // 0x8c
	Fdword dwWins; // 0x90
	Fdword dwLosses; // 0x94
	Fdword dwDodges; // 0x98
	Fdword dwMatchesPlayedInTier; // 0x9c
	Fdword dwRegion; // 0xa0
	Fdword dwRecommendedTierId; // 0xa4
	Fdword dwTitleId; // 0xa8
	FDateTimeWrapper dtLastPlayed; // 0xac
};

struct UFont {
	TArray<FFontCharacter> Characters; // 0x60
	TArray<ObjectProperty> Textures; // 0x70
	TMap<None, None> CharRemap; // 0x80
	int32_t IsRemapped; // 0xc8
	float EmScale; // 0xcc
	float Ascent; // 0xd0
	float Descent; // 0xd4
	float Leading; // 0xd8
	int32_t Kerning; // 0xdc
	FFontImportOptionsData ImportOptions; // 0xe0
	int32_t NumCharacters; // 0x188
	TArray<int32_t> MaxCharHeight; // 0x18c
	float ScalingFactor; // 0x19c
};

struct UUIComponent_BattlePassPurchasePanel {
	ObjectProperty m_mcLevel; // 0x120
	ObjectProperty m_mcDiamond; // 0x128
	ObjectProperty m_mcName; // 0x130
	ObjectProperty m_mcRarity; // 0x138
	ObjectProperty m_mcDesc; // 0x140
	ObjectProperty m_mcOwned; // 0x148
	ObjectProperty m_mcOwnedTF; // 0x150
	ObjectProperty m_mcUnlockCheck; // 0x158
	ObjectProperty m_mcTeaser; // 0x160
	ObjectProperty m_pButton; // 0x168
	ObjectProperty m_mcButtonDiamond; // 0x170
	ObjectProperty m_pPrompt; // 0x178
	Fdword m_dwRequiredLevel; // 0x180
	char m_bPremium : 1; // 0x184
	ObjectProperty m_InputPurchase; // 0x188
};

struct UUIPopupPurchase {
	int32_t m_nOffset; // 0x244
	int32_t m_nLootId; // 0x248
	int32_t m_nVendor; // 0x24c
	int32_t m_nHoverItem; // 0x250
	float m_fWaitTimeout; // 0x254
	float m_fPurchaseFlash; // 0x258
	float m_fConfirmationTime; // 0x25c
	float m_fConfirmationTimer; // 0x260
	char m_bControllerButtonHeld : 1; // 0x264
	TArray<int32_t> m_nItems; // 0x268
	ObjectProperty m_mcBlocker; // 0x278
	ObjectProperty m_mcPanel; // 0x280
	ObjectProperty m_mcPanelBack; // 0x288
	ObjectProperty m_mcPanelName; // 0x290
	ObjectProperty m_mcPanelDesc; // 0x298
	ObjectProperty m_mcPanelType; // 0x2a0
	ObjectProperty m_mcPanelIcon; // 0x2a8
	ObjectProperty m_mcPanelWait; // 0x2b0
	ObjectProperty m_mcPanelTotal; // 0x2b8
	ObjectProperty m_mcPanelTotalCrowns; // 0x2c0
	ObjectProperty m_mcPanelTotalTrophies; // 0x2c8
	ObjectProperty m_mcPanelHoverName; // 0x2d0
	ObjectProperty m_mcPanelHoverDesc; // 0x2d8
	ObjectProperty m_mcPanelCrowns; // 0x2e0
	ObjectProperty m_mcPanelCrownsPurchase; // 0x2e8
	ObjectProperty m_mcPanelCrownsPurchaseFlash; // 0x2f0
	ObjectProperty m_mcPanelCrownsPurchasePrice; // 0x2f8
	ObjectProperty m_mcPanelCrownsPurchasePriceDiscount; // 0x300
	ObjectProperty m_mcPanelPurchaseHold; // 0x308
	ObjectProperty m_mcPanelPurchaseMask; // 0x310
	ObjectProperty m_mcPanelPurchaseKey; // 0x318
	ObjectProperty m_mcPanelPurchaseKeyHoldBack; // 0x320
	ObjectProperty m_mcPanelTrophies; // 0x328
	ObjectProperty m_mcPanelTrophiesPurchase; // 0x330
	ObjectProperty m_mcPanelTrophiesPurchaseFlash; // 0x338
	ObjectProperty m_mcPanelTrophiesPurchasePrice; // 0x340
	ObjectProperty m_mcPanelTrophiesPurchasePriceDiscount; // 0x348
	ObjectProperty m_mcPanelArrow[0x2]; // 0x350
	ObjectProperty m_mcItem[0x5]; // 0x360
	ObjectProperty m_mcItemIcon[0x5]; // 0x388
	ObjectProperty m_mcItemFrame[0x5]; // 0x3b0
	ObjectProperty m_mcItemActive[0x5]; // 0x3d8
	ObjectProperty m_mcItemRarity[0x5]; // 0x400
	ObjectProperty m_mcItemTexture[0x5]; // 0x428
	ObjectProperty m_mcItemIconFrame[0x5]; // 0x450
	ObjectProperty m_pInputGroup; // 0x478
	ObjectProperty m_pPurchaseGroup; // 0x480
	ObjectProperty m_akPurchase; // 0x488
};

struct UMaterialExpressionFmod {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UPBRuleNodeRandom {
	int32_t NumOutputs; // 0x70
	int32_t MinNumExecuted; // 0x74
	int32_t MaxNumExecuted; // 0x78
};

struct ATgAITaskforceBlockingVolume {
	int32_t BlockTaskforce; // 0x2bc
	char m_bHasRegisteredObstacle : 1; // 0x2c0
};

struct AFogVolumeDensityInfo {
	ComponentProperty DensityComponent; // 0x280
	ComponentProperty AutomaticMeshComponent; // 0x288
	char bEnabled : 1; // 0x290
};

struct UTgAIUtilityFilter_LoSToTargetLastKnownLocation {
	char bInverse : 1; // 0xc0
};

struct UMaterialExpressionFrac {
	FExpressionInput Input; // 0xb0
};

struct UTgEffectDamage_AstroDOT {
	TArray<float> m_EffectTimeStamps; // 0xc8
	TArray<float> m_EffectDamageValues; // 0xd8
	FPointer m_EffectInfo; // 0xe8
};

struct UDrawQuadComponent {
	ObjectProperty Texture; // 0x24c
	float Width; // 0x254
	float Height; // 0x258
};

struct UUIData_StringWithCount {
	int32_t m_nValue; // 0x70
};

struct UUIScene_UICustomGameList {
	ObjectProperty m_pList; // 0x154
	ObjectProperty m_pSelectedComp; // 0x15c
	ObjectProperty m_pSelectedGame; // 0x164
	ObjectProperty m_pCreateButton; // 0x16c
	ObjectProperty m_pJoinButton; // 0x174
	ObjectProperty m_mcRegionTF; // 0x17c
	ObjectProperty m_pCreateAction; // 0x184
	ObjectProperty m_pJoinAction; // 0x18c
	ObjectProperty m_pRefreshKeyboardAction; // 0x194
	ObjectProperty m_pRefreshGamePadAction; // 0x19c
	float m_fRefreshDisableTimer; // 0x1a4
};

struct APlayerCollectorGame {
	int32_t NumberOfClientsToWaitFor; // 0x4cc
	FString URLToLoad; // 0x4d0
};

struct ATgSilhouetteManager {
	ObjectProperty m_Owner; // 0x280
	char m_bSilhouettesEnabled : 1; // 0x288
	char m_bForceSilhouetteVisible : 1; // 0x288
	TArray<FTgSilhouetteInfo> m_SilhouetteInfos; // 0x28c
	UTgSilhouetteComponent* m_SilhouetteClass; // 0x29c
};

struct UUIData_Deck {
	ObjectProperty m_pDeckItems[0x5]; // 0x60
	int32_t m_nId; // 0x88
	char m_bIsTemplate : 1; // 0x8c
	FString m_sName; // 0x90
	FString m_sDisplayName; // 0xa0
	FString m_sDescription; // 0xb0
};

struct ATgPawn_Character {
	char c_bUpdatePlayerStatUI : 1; // 0x2fb4
	char m_bInHandFiring : 1; // 0x2fb4
	char r_bNearCapturePoint : 1; // 0x2fb4
	char r_bNearPayload : 1; // 0x2fb4
	char r_bNearSiegeMonster : 1; // 0x2fb4
	char r_bVisibleToEnemies : 1; // 0x2fb4
	char s_bAmmoReloadCheat : 1; // 0x2fb4
	char s_bAutomountProtection : 1; // 0x2fb4
	char m_bAttemptingAirJump : 0; // 0x2fb4
	char m_bDelayingStopSpecialJumpFx : 0; // 0x2fb4
	char m_bPendingBounce : 0; // 0x2fb4
	char s_bInitiatingJoin : 0; // 0x2fb4
	char s_bReplicateInhandAmmo : 0; // 0x2fb4
	char c_bShouldTickThisFrame : 0; // 0x2fb4
	char c_bShadowsVisible : 0; // 0x2fb4
	char c_bNeedsShadowLOSCheck : 0; // 0x2fb4
	float m_fLastCapturePointReclaimedTime; // 0x2fb8
	float m_fMinReclaimPointTime; // 0x2fbc
	float c_fUpdateAltitudeRTPCDelay; // 0x2fc0
	float m_fInHandStartFireTime; // 0x2fc4
	float m_fInHandStopFireTime; // 0x2fc8
	float m_fWallDamagePercent; // 0x2fcc
	float m_fSiegeDamagePercent; // 0x2fd0
	float r_fZoomAmt; // 0x2fd4
	char r_nCriticalHit; // 0x2fd8
	float m_fMountZoomOverride; // 0x2fdc
	ObjectProperty r_StuckBombs[0x6]; // 0x2fe0
	int32_t m_nCharacterRole; // 0x3010
	ComponentProperty m_CustomCharacterComponent; // 0x3014
	ComponentProperty m_MountedCollisionComponent; // 0x301c
	ComponentProperty m_MeshEncompassingCollisionComponent; // 0x3024
	TArray<TScriptInterface<Class>> m_CachedMoveSpeedModDevices; // 0x302c
	TArray<TScriptInterface<Class>> m_CachedAccelModDevices; // 0x303c
	TArray<TScriptInterface<Class>> m_CachedDeployModDevices; // 0x304c
	float m_fCachedGroundProximity; // 0x305c
	float m_fCachedGroundProximityTimestamp; // 0x3060
	int32_t m_nAirJumps; // 0x3064
	float m_fAirJumpZSpeed; // 0x3068
	FVector m_vBounceVelocity; // 0x306c
	ObjectProperty m_JoinTargetLocal; // 0x3078
	ObjectProperty m_JoinSourceLocal; // 0x3080
	ObjectProperty r_JoinTarget; // 0x3088
	FVector r_vJoinSourceLocation; // 0x3090
	FVector r_vJoinTargetLocation; // 0x309c
	float r_fJoinTweenDuration; // 0x30a8
	ObjectProperty r_JoinSource; // 0x30ac
	TArray<FForceFaceTargetActor> m_ForceFaceActors; // 0x30b4
	int32_t r_nInHandCurrentAmmo; // 0x30c4
	int32_t r_nInHandMaxAmmo; // 0x30c8
	int32_t s_nOppressorMineStackCount; // 0x30cc
	float c_fTickCatchup; // 0x30d0
	FWeaponDOF m_CurrentDOFSettings; // 0x30d4
	ObjectProperty s_pCaptureProxy; // 0x30fc
	float c_fShadowsVisibleChangeTimer; // 0x3104
	float c_fShadowsVisibleChangeDelay; // 0x3108
};

struct ATgTournamentObjective {
	ObjectProperty m_pDropPointA; // 0x280
	ObjectProperty m_pDropPointB; // 0x288
	float m_fFogRadius; // 0x290
	float m_fZeppelinDropHeight; // 0x294
	EObjectiveSize m_ObjectiveSize; // 0x298
	ObjectProperty m_pBotFactory; // 0x29c
	ComponentProperty BadSprite; // 0x2a4
};

struct USimpleSplineNonLoopAudioComponent {
	float DelayMin; // 0x31c
	float DelayMax; // 0x320
	float PitchMin; // 0x324
	float PitchMax; // 0x328
	float VolumeMin; // 0x32c
	float VolumeMax; // 0x330
	int32_t CurrentSlotIndex; // 0x334
	float UsedVolumeModulation; // 0x338
	float UsedPitchModulation; // 0x33c
	float NextSoundTime; // 0x340
};

struct UInterpTrack {
	FPointer VfTable_FInterpEdInputInterface; // 0x60
	FPointer CurveEdVTable; // 0x68
	TArray<ObjectProperty> SubTracks; // 0x70
	UInterpTrackInst* TrackInstClass; // 0x80
	ETrackActiveCondition ActiveCondition; // 0x88
	FString TrackTitle; // 0x8c
	char bOnePerGroup : 1; // 0x9c
	char bDirGroupOnly : 1; // 0x9c
	char bDisableTrack : 1; // 0x9c
	char bIsAnimControlTrack : 1; // 0x9c
	char bSubTrackOnly : 1; // 0x9c
	char bVisible : 1; // 0x9c
	char bIsSelected : 1; // 0x9c
	char bIsRecording : 1; // 0x9c
	char bIsCollapsed : 0; // 0x9c
};

struct USeqEvent_Input {
	char bTrapInput : 1; // 0x128
	int32_t AllowedPlayerIndex; // 0x12c
	TArray<FName> InputNames; // 0x130
};

struct UTgAIBehaviorAction_SelectLaneCombatTarget {
	char bMustBeEnemy : 1; // 0x94
	char bMustBeSameLane : 1; // 0x94
	char bMustHaveLineOfSight : 1; // 0x94
	char bMustHaveDamagedGod : 1; // 0x94
	char bMustNotBeImmune : 1; // 0x94
	char bMustBeInForwardCone : 1; // 0x94
	char bEffectGroupCategoryCheckInstigator : 1; // 0x94
	char bMustBeHittable : 1; // 0x94
	char bMustNotBeNearShield : 0; // 0x94
	ETargetSelector TargetSelector; // 0x98
	ECombatTargetType TargetType; // 0x99
	ECombatTargetType IgnoreTargetType; // 0x9a
	int32_t EffectCategoryId; // 0x9c
	float DistanceThreshold; // 0xa0
	float ForwardConeAngle; // 0xa4
};

struct UNavigationHandle {
	ObjectProperty AnchorPylon; // 0x60
	FPointer AnchorPoly; // 0x68
	FPathStore PathCache; // 0x70
	FPointer BestUnfinishedPathPoint; // 0x80
	FPointer CurrentEdge; // 0x88
	FPointer SubGoal_DestPoly; // 0x90
	FBasedPosition FinalDestination; // 0x98
	ObjectProperty FinalDestinationActor; // 0xd0
	char bSkipRouteCacheUpdates : 1; // 0xd8
	char bUseORforEvaluateGoal : 1; // 0xd8
	char bDebugConstraintsAndGoalEvals : 1; // 0xd8
	char bUltraVerbosePathDebugging : 1; // 0xd8
	char bVisualPathDebugging : 1; // 0xd8
	char bDebug_Breadcrumbs : 1; // 0xd8
	ObjectProperty PathConstraintList; // 0xdc
	ObjectProperty PathGoalList; // 0xe4
	FNavMeshPathParams CachedPathParams; // 0xec
	EPathFindingError LastPathError; // 0x124
	float LastPathFailTime; // 0x128
	FVector Breadcrumbs[0xa]; // 0x12c
	int32_t BreadCrumbMostRecentIdx; // 0x1a4
	float BreadCrumbDistanceInterval; // 0x1a8
	float m_fLastPathLength; // 0x1ac
};

struct ATgRepInfo_Player {
	int32_t r_nPlayerId; // 0x480
	int32_t r_nPawnId; // 0x484
	int32_t r_nPlayerGameID; // 0x488
	int32_t m_nUIDisplayIndex; // 0x48c
	float c_fLastUpdateTime; // 0x490
	int32_t r_nSupportWins; // 0x494
	int32_t r_nDamageWins; // 0x498
	int32_t r_nFlankWins; // 0x49c
	int32_t r_nFrontlineWins; // 0x4a0
	int32_t r_nEquippedTitleId; // 0x4a4
	int32_t r_nHealthCurrent; // 0x4a8
	int32_t r_nHealthMaximum; // 0x4ac
	int32_t r_nPowerCurrent; // 0x4b0
	int32_t r_nPowerMaximum; // 0x4b4
	int32_t r_nPacingType; // 0x4b8
	int32_t r_nShieldCurrent; // 0x4bc
	int32_t r_nShieldMaximum; // 0x4c0
	ObjectProperty r_MasterPrep; // 0x4c4
	ObjectProperty r_TaskForce; // 0x4cc
	int32_t r_nPartyId; // 0x4d4
	ObjectProperty r_SpawnPoint; // 0x4d8
	float r_fReviveSecs; // 0x4e0
	float r_fReviveSecsTotal; // 0x4e4
	char r_bMapHasLoaded : 1; // 0x4e8
	char r_bHasBeenSeenByEnemyTeam : 1; // 0x4e8
	char r_bSilhouettesBlocked : 1; // 0x4e8
	char r_bExtendedSilhouetteRange : 1; // 0x4e8
	char r_bSpeakingEmote : 1; // 0x4e8
	char r_bPlayingAnnouncer : 1; // 0x4e8
	char c_bSpeaking : 1; // 0x4e8
	char r_bDropped : 1; // 0x4e8
	char s_bFirstDrop : 0; // 0x4e8
	char r_bForceNotBot : 0; // 0x4e8
	char r_bDisconnected : 0; // 0x4e8
	char c_bIsDying : 0; // 0x4e8
	char r_IsRevealed : 0; // 0x4e8
	char r_bIsStealthed : 0; // 0x4e8
	char r_bIsVolumeStealthed : 0; // 0x4e8
	char r_bUltimateIsReady : 0; // 0x4e8
	char r_bCanUpgradeLegendary : 0; // 0x4e8
	char s_bAutoSelectCards : 0; // 0x4e8
	char c_bTrackedProjectileIdsJustChanged : 0; // 0x4e8
	char r_bBigHeadModeActive : 0; // 0x4e8
	char r_nSurrenderVote; // 0x4ec
	char r_bVisibleOnMap[0x3]; // 0x4ed
	char r_nVisibilityMask; // 0x4f0
	char r_nFlashUpdateAmmo; // 0x4f1
	DeployableOverlayIcon r_eDeployableOverlayIcon; // 0x4f2
	DeployableOverlayState r_eDeployableOverlayState; // 0x4f3
	DeployableOverlayIcon c_eDeployableOverlayIconOverride; // 0x4f4
	DeployableOverlayState c_eDeployableOverlayStateOverride; // 0x4f5
	GAME_MODE_INSTRUCTION r_eCurrentGameModeInstruction; // 0x4f6
	EPlayerDeployState r_PlayerDeployState; // 0x4f7
	TArray<ObjectProperty> m_PRIArray; // 0x4f8
	TArray<ObjectProperty> m_DRIArray; // 0x508
	ObjectProperty c_PriorMasterPrep; // 0x518
	ObjectProperty c_PriorTaskForce; // 0x520
	int32_t c_fLastHealth; // 0x528
	float c_fLastDamageTime; // 0x52c
	float r_fVisionRange; // 0x530
	FString r_ClanTag; // 0x534
	FString c_PlayerNameWithTag; // 0x544
	float c_fBarragePercent; // 0x554
	float m_fSyncAnnouncerFailsafe; // 0x558
	int32_t r_nRemainingLives; // 0x55c
	int32_t m_DeployPostureId; // 0x560
	float m_fMaxPingTime; // 0x564
	FSimulatedProjectileOverrides r_SimProjOverrides[0x8]; // 0x568
	int32_t r_PlayerItems[0x9]; // 0x628
	int32_t r_Scores[0x16]; // 0x64c
	FDeviceTeamInfo r_PlayerDevices[0x14]; // 0x6a4
	FAmmoCount r_PlayerDeviceAmmo[0x14]; // 0x9c4
	FAppliedStatEffect r_AppliedStatEffects[0x6]; // 0xa14
	float r_fStatEffectsDisableTimeStamp[0x6]; // 0xa5c
	float r_fStatEffectsDisableDuration[0x6]; // 0xa74
	int32_t r_nNextOpenStatEffect; // 0xa8c
	int32_t r_nLastEquippedStatEffect; // 0xa90
	FMarkedTargetInfo r_MarkedTargets[0x5]; // 0xa94
	float c_fLastSpeakingTime; // 0xabc
	int32_t r_nCredits; // 0xac0
	int32_t r_nEarnedCredits; // 0xac4
	int32_t r_nXp; // 0xac8
	int32_t r_nLevel; // 0xacc
	int32_t r_nPlayerScore; // 0xad0
	int32_t r_nCardHealth; // 0xad4
	int32_t r_nCardDamage; // 0xad8
	int32_t r_nPowerLevel; // 0xadc
	int32_t r_nPowerLevelCount; // 0xae0
	int32_t r_nProfileId; // 0xae4
	int32_t r_nSkinId; // 0xae8
	int32_t r_nVoicePackId; // 0xaec
	int32_t r_nKillstreak; // 0xaf0
	int32_t r_nHeadSkinId; // 0xaf4
	int32_t r_nWeaponSkinId; // 0xaf8
	int32_t r_nMountSkinId; // 0xafc
	int32_t r_nMarkerSkinId; // 0xb00
	int32_t r_nAssistScore; // 0xb04
	ObjectProperty r_PawnOwner; // 0xb08
	int32_t r_nLaneId; // 0xb10
	int32_t s_KillOrDeathStreakModifier; // 0xb14
	FsPingInfo r_PingInfo[0x4]; // 0xb18
	FVector c_DeathLocation; // 0xb98
	FVector s_vDeathLocation; // 0xba4
	FTG_HUD_INFO c_HudInfo; // 0xbb0
	float r_fUltReadyInSecs; // 0xbb4
	int32_t r_nUltimateCharge; // 0xbb8
	int32_t r_nRequiredUltimateCharge; // 0xbbc
	int32_t r_nPassiveMode; // 0xbc0
	int32_t r_nShards; // 0xbc4
	int32_t r_nNuggets; // 0xbc8
	int32_t r_nPendingShards; // 0xbcc
	int32_t r_nColorIndex; // 0xbd0
	int32_t r_nPerkCountKit; // 0xbd4
	int32_t r_nPerkCountArmor; // 0xbd8
	int32_t r_nPerkCountWeapon; // 0xbdc
	int32_t r_nPerkCountGeneral; // 0xbe0
	int32_t r_nCardsToDraw; // 0xbe4
	int32_t r_nDrawnCards[0x5]; // 0xbe8
	int32_t r_nDrawnPlayer[0x5]; // 0xbfc
	float s_fScoreTakenPool; // 0xc10
	float s_fScoreDamagePool; // 0xc14
	float s_fScoreCapturePool; // 0xc18
	float s_fScoreHealingPool; // 0xc1c
	float s_fScoreMitigatedPool; // 0xc20
	float s_fScoreTakenThreshold; // 0xc24
	float s_fScoreDamageThreshold; // 0xc28
	float s_fScoreCaptureThreshold; // 0xc2c
	float s_fScoreHealingThreshold; // 0xc30
	float s_fScoreMitigatedThreshold; // 0xc34
	TArray<FDeckCardData> s_CardDeckTier1; // 0xc38
	TArray<FDeckCardData> s_CardDeckTier2; // 0xc48
	TArray<FDeckCardData> s_CardDeckTier3; // 0xc58
	TArray<FDeckCardData> s_CardDeckTier4; // 0xc68
	TArray<FDeckCardData> s_CardDeckTier5; // 0xc78
	FTgAbilityInfo r_GeneralAbilityInfo; // 0xc88
	FTgAbilityInfo r_ArmorAbilityInfo; // 0xccc
	ObjectProperty s_LastKillerPRI; // 0xd10
	TArray<FPlayOfTheGameEventData> s_PlayOfTheGameEventList; // 0xd18
	TArray<FPlayOfTheGameEventCounter> s_PlayOfTheGameEventCounters; // 0xd28
	int32_t r_nDeployableOverlayDisplayMask; // 0xd38
	float r_fDeployableOverlayEnemyViewDist; // 0xd3c
	int32_t c_nDeployableOverlayDisplayMaskOverride; // 0xd40
	float c_fDeployableOverlayEnemyViewDistOverride; // 0xd44
	int32_t r_TrackedProjectileIds[0xf]; // 0xd48
	FTrackedProjectileInitData r_TrackedProjectilesInitData[0xf]; // 0xd84
	FTrackedProjectileUpdateData r_TrackedProjectilesUpdateData[0xf]; // 0x1054
	int32_t r_nRank; // 0x11f8
	FVector r_vDeploy; // 0x11fc
	FVector r_vWaypoint; // 0x1208
	FVector r_vPingLocation; // 0x1214
	FRotator r_rPingRotation; // 0x1220
	ObjectProperty m_WaypointEmitter; // 0x122c
	ObjectProperty m_PingEmitter; // 0x1234
	FVector r_vLocation; // 0x123c
	FRotator r_rRotation; // 0x1248
	int32_t r_nNumViewingPlayers; // 0x1254
};

struct UInteraction {
	DelegateProperty __OnReceivedNativeInputKey__Delegate; // 0x70
	DelegateProperty __OnReceivedNativeInputAxis__Delegate; // 0x80
	DelegateProperty __OnReceivedNativeInputChar__Delegate; // 0x90
	DelegateProperty __OnInitialize__Delegate; // 0xa0
};

struct UUIComponent_DisplayDevice {
	Fdword m_dwDeviceId; // 0x120
	ObjectProperty m_mcName; // 0x124
	ObjectProperty m_mcDesc; // 0x12c
	ObjectProperty m_mcType; // 0x134
	ObjectProperty m_mcIcon; // 0x13c
	ObjectProperty m_mcFrame; // 0x144
	ObjectProperty m_mcHighlight; // 0x14c
	ObjectProperty m_mcHighlightIcon; // 0x154
};

struct UTgSkelControlSingleBone {
	char SnapStrengthFromAnimNodes : 1; // 0x100
	char m_bIsWidescreen : 1; // 0x100
	float SnapStrengthThreshold; // 0x104
	TArray<EEmote> StrengthEmoteList; // 0x108
	TArray<ObjectProperty> CachedEmoteSequences; // 0x118
	FVector m_WidescreenBoneTranslationOffset; // 0x128
	FRotator m_WidescreenBoneRotationOffset; // 0x134
	float m_WidescreenBoneScaleOffset; // 0x140
};

struct UTgAIBehaviorAction_Wiggle {
	float WiggleIntensity; // 0x94
};

struct UMaterialExpressionTextureCoordinate {
	int32_t CoordinateIndex; // 0xb0
	float UTiling; // 0xb4
	float VTiling; // 0xb8
	char UnMirrorU : 1; // 0xbc
	char UnMirrorV : 1; // 0xbc
};

struct UVivoxClosure {
	ObjectProperty m_Connector; // 0x60
	ObjectProperty m_OnlineSub; // 0x68
};

struct UTgAnimNotify_AkEventMusic {
	ObjectProperty AkEventStop; // 0x7c
};

struct UTgAnimNodeChannelFire {
	TG_EQUIP_POINT m_EquipPoint; // 0x168
	char m_bResetOnRelevant : 1; // 0x16c
	char m_bCheckAnimSeqForAnim : 1; // 0x16c
	char m_bUseCooldownForEndChannel : 1; // 0x16c
	char m_bOnlyCallAnimEndWhenRelevant : 1; // 0x16c
	char m_bDoneChanneling : 1; // 0x16c
	float m_fMaxLoopTime; // 0x170
	float m_fPreCooldownEndTimeTrigger; // 0x174
	float m_fCooldownEndTime; // 0x178
	float m_fEndLoopTime; // 0x17c
};

struct UMaterialExpressionScalarParameter {
	float DefaultValue; // 0xd0
};

struct ATgSurvivalFogVolumeDensityInfo {
	char m_bFogOn : 1; // 0x294
	float m_fTargetStartDistance; // 0x298
	float m_fPreviousStartDistance; // 0x29c
	float m_fFogUpdateTimestamp; // 0x2a0
	float m_fFogUpdateInterval; // 0x2a4
	float m_fConvergenceRate; // 0x2a8
	float m_fFadeInRate; // 0x2ac
	float m_fFadeOutRate; // 0x2b0
	ComponentProperty SphericalDensityComponent; // 0x2b4
};

struct UMaterialExpressionDynamicParameter {
	TArray<FString> ParamNames; // 0xb0
};

struct UMaterialExpressionConstant4Vector {
	float R; // 0xb0
	float G; // 0xb4
	float B; // 0xb8
	float A; // 0xbc
};

struct UInterpTrackVisibility {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0xa0
	char bFireEventsWhenForwards : 1; // 0xb0
	char bFireEventsWhenBackwards : 1; // 0xb0
	char bFireEventsWhenJumpingForwards : 1; // 0xb0
};

struct UApexStaticDestructibleComponent {
	float SleepEnergyThreshold; // 0x2b0
	float SleepDamping; // 0x2b4
	FPointer ApexDestructibleActor; // 0x2b8
	FPointer ApexDestructiblePreview; // 0x2c0
	char bIsThumbnailComponent : 1; // 0x2c8
};

struct UUIComponent_CustomGame {
	ObjectProperty m_mcHighlight; // 0x120
	ObjectProperty m_mcFrame; // 0x128
	ObjectProperty m_mcLock; // 0x130
	ObjectProperty m_mcName; // 0x138
	ObjectProperty m_mcOwner; // 0x140
	ObjectProperty m_mcOwnerTF; // 0x148
	ObjectProperty m_mcQueueType; // 0x150
	ObjectProperty m_mcQueueTypeTF; // 0x158
	ObjectProperty m_mcPlayerCount; // 0x160
	ObjectProperty m_mcPlayerCountTF; // 0x168
	ObjectProperty m_mcErrorTF; // 0x170
};

struct UParticleModuleBeamTarget {
	Beam2SourceTargetMethod TargetMethod; // 0x68
	Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x69
	FName TargetName; // 0x6c
	FName TargetSocketName; // 0x74
	FRawDistributionVector Target; // 0x7c
	char bTargetAbsolute : 1; // 0xa0
	char bLockTarget : 1; // 0xa0
	char bLockTargetTangent : 1; // 0xa0
	char bLockTargetStength : 1; // 0xa0
	FRawDistributionVector TargetTangent; // 0xa4
	FRawDistributionFloat TargetStrength; // 0xc8
	float LockRadius; // 0xec
};

struct UParticleModuleParameterDynamic {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x68
	int32_t UpdateFlags; // 0x78
	char bUsesVelocity : 1; // 0x7c
};

struct UWebRequest {
	FString RemoteAddr; // 0x60
	FString URI; // 0x70
	FString UserName; // 0x80
	FString Password; // 0x90
	int32_t ContentLength; // 0xa0
	FString ContentType; // 0xa4
	ERequestType RequestType; // 0xb4
	FMap_Mirror HeaderMap; // 0xb8
	FMap_Mirror VariableMap; // 0x100
};

struct UTgAnimBlendByPercent {
	float m_fCurrentPercent; // 0x168
	TArray<FBlendByPercentValues> m_ChildParams; // 0x16c
};

struct USeqEvent_AnalogInput {
	char bTrapInput : 1; // 0x128
	int32_t AllowedPlayerIndex; // 0x12c
	TArray<FName> InputNames; // 0x130
};

struct UTgEffectModifyProperty {
	ObjectProperty m_TargetDeviceFire; // 0xa0
	int32_t m_eEquipPointTarget; // 0xa8
	TArray<float> m_fStaticValueOffsets; // 0xac
};

struct UTgAIBehaviorCondition_TeamDeathCount {
	char bMustBeEnemy : 1; // 0x98
	int32_t DeathThreshold; // 0x9c
};

struct UUIData_Index {
	Fdword m_dwValue; // 0x60
};

struct UUIComponent_CollectToUnlock {
	ObjectProperty m_mcContainter; // 0x120
	ObjectProperty m_mcTF0; // 0x128
	ObjectProperty m_mcIcon; // 0x130
	ObjectProperty m_mcTF1; // 0x138
};

struct UTgAchievement {
	ObjectProperty Controller; // 0x60
	char m_bCustomValue3IsBotId : 1; // 0x68
	char m_bAwardsAllowTriggering : 1; // 0x68
	int32_t m_nBotId; // 0x6c
	int32_t m_nActivityId; // 0x70
	int32_t m_nCustomValue1; // 0x74
	int32_t m_nCustomValue2; // 0x78
	int32_t m_nCustomValue3; // 0x7c
	int32_t m_nCustomValue4; // 0x80
	int32_t m_nCustomValue5; // 0x84
	int32_t m_nCurrentProgress; // 0x88
	int32_t m_nCurrentTarget; // 0x8c
};

struct UTgAIBehaviorCondition_CombatTargetPhysicsState {
	EPhysics PhysicsState; // 0x98
};

struct ANxGenericForceFieldBrush {
	int32_t ExcludeChannel; // 0x2bc
	FRBCollisionChannelContainer CollideWithChannels; // 0x2c0
	ERBCollisionChannel RBChannel; // 0x2c4
	FFB_ForceFieldCoordinates Coordinates; // 0x2c5
	FVector Constant; // 0x2c8
	FVector PositionMultiplierX; // 0x2d4
	FVector PositionMultiplierY; // 0x2e0
	FVector PositionMultiplierZ; // 0x2ec
	FVector PositionTarget; // 0x2f8
	FVector VelocityMultiplierX; // 0x304
	FVector VelocityMultiplierY; // 0x310
	FVector VelocityMultiplierZ; // 0x31c
	FVector VelocityTarget; // 0x328
	FVector Noise; // 0x334
	FVector FalloffLinear; // 0x340
	FVector FalloffQuadratic; // 0x34c
	float TorusRadius; // 0x358
	FPointer ForceField; // 0x35c
	TArray<FPointer> ConvexMeshes; // 0x364
	TArray<FPointer> ExclusionShapes; // 0x374
	TArray<FPointer> ExclusionShapePoses; // 0x384
	FPointer LinearKernel; // 0x394
};

struct USeqAct_CameraShake {
	ObjectProperty Shake; // 0x108
	float ShakeScale; // 0x110
	char bDoControllerVibration : 1; // 0x114
	char bRadialShake : 1; // 0x114
	char bOrientTowardRadialEpicenter : 1; // 0x114
	float RadialShake_InnerRadius; // 0x118
	float RadialShake_OuterRadius; // 0x11c
	float RadialShake_Falloff; // 0x120
	ECameraAnimPlaySpace PlaySpace; // 0x124
	ObjectProperty LocationActor; // 0x128
};

struct ATgProj_DrogozRocket {
	char m_bWasFromSalvo : 1; // 0x51c
};

struct USeqAct_ModifyHealth {
	UDamageType* DamageType; // 0x108
	float Momentum; // 0x110
	float Amount; // 0x114
	float Radius; // 0x118
	char bHeal : 1; // 0x11c
	char bRadial : 1; // 0x11c
	char bFalloff : 1; // 0x11c
	ObjectProperty Instigator; // 0x120
};

struct ATgPawn_Structure {
	float s_fLastDamageTime; // 0x2e78
	float s_fDamageNotificationDelay; // 0x2e7c
};

struct UMaterialExpressionFloor {
	FExpressionInput Input; // 0xb0
};

struct UUIData_String_Localized {
	FString m_sSection; // 0x60
	FString m_sKey; // 0x70
	char m_bCaps : 1; // 0x80
};

struct UTgAIBehaviorCondition_PetPhase {
	EPetPhase Phase; // 0x98
};

struct UGameplayEvents {
	FPointer Archive; // 0x60
	FString StatsFileName; // 0x68
	FGameplayEventsHeader Header; // 0x78
	FGameSessionInformation CurrentSessionInfo; // 0xa8
	TArray<FPlayerInformation> PlayerList; // 0x130
	TArray<FTeamInformation> TeamList; // 0x140
	TArray<FGameplayEventMetaData> SupportedEvents; // 0x150
	TArray<FWeaponClassEventData> WeaponClassArray; // 0x160
	TArray<FDamageClassEventData> DamageClassArray; // 0x170
	TArray<FProjectileClassEventData> ProjectileClassArray; // 0x180
	TArray<FPawnClassEventData> PawnClassArray; // 0x190
	TArray<FString> ActorArray; // 0x1a0
	TArray<FString> SoundCueArray; // 0x1b0
};

struct USeqAct_MITV_Activate {
	float DurationOfMITV; // 0x108
};

struct UMcpServiceConfig {
	FString Protocol; // 0x60
	FString Domain; // 0x70
	FString TitleId; // 0x80
	FString AppKey; // 0x90
	FString AppSecret; // 0xa0
};

struct UMcpIdMappingBase {
	FString McpIdMappingClassName; // 0x78
	DelegateProperty __OnAddMappingComplete__Delegate; // 0x88
	DelegateProperty __OnQueryMappingsComplete__Delegate; // 0x98
};

struct UParticleModuleCameraOffset {
	FRawDistributionFloat CameraOffset; // 0x68
	char bSpawnTimeOnly : 1; // 0x8c
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x90
};

struct UMobileInputZone {
	EZoneType Type; // 0x60
	char TouchpadIndex; // 0x61
	EZoneState State; // 0x62
	EZoneSlideType SlideType; // 0x63
	FString Caption; // 0x64
	FName InputKey; // 0x74
	FName HorizontalInputKey; // 0x7c
	FName TapInputKey; // 0x84
	FName DoubleTapInputKey; // 0x8c
	float VertMultiplier; // 0x94
	float HorizMultiplier; // 0x98
	float Acceleration; // 0x9c
	float Smoothing; // 0xa0
	float EscapeVelocityStrength; // 0xa4
	char bScalePawnMovement : 1; // 0xa8
	char bRelativeX : 1; // 0xa8
	char bRelativeY : 1; // 0xa8
	char bRelativeSizeX : 1; // 0xa8
	char bRelativeSizeY : 1; // 0xa8
	char bActiveSizeYFromX : 1; // 0xa8
	char bSizeYFromSizeX : 1; // 0xa8
	char bApplyGlobalScaleToActiveSizes : 1; // 0xa8
	char bCenterX : 0; // 0xa8
	char bCenterY : 0; // 0xa8
	char bIsInvisible : 0; // 0xa8
	char bQuickDoubleTap : 0; // 0xa8
	char bCenterOnEvent : 0; // 0xa8
	char bSliderHasTrack : 0; // 0xa8
	char bFloatingTiltZone : 0; // 0xa8
	char bUseGentleTransitions : 0; // 0xa8
	char bAllowFirstDeltaForTrackballZone : 0; // 0xa8
	char bRenderGuides : 0; // 0xa8
	char bIsDoubleTapAndHold : 0; // 0xa8
	float X; // 0xac
	float Y; // 0xb0
	float SizeX; // 0xb4
	float SizeY; // 0xb8
	float ActiveSizeX; // 0xbc
	float ActiveSizeY; // 0xc0
	float InitialX; // 0xc4
	float InitialY; // 0xc8
	float InitialSizeX; // 0xcc
	float InitialSizeY; // 0xd0
	float InitialActiveSizeX; // 0xd4
	float InitialActiveSizeY; // 0xd8
	float AuthoredGlobalScale; // 0xdc
	float Border; // 0xe0
	float ResetCenterAfterInactivityTime; // 0xe4
	float TapDistanceConstraint; // 0xe8
	float ActivateTime; // 0xec
	float DeactivateTime; // 0xf0
	FColor RenderColor; // 0xf4
	float InactiveAlpha; // 0xf8
	float CaptionXAdjustment; // 0xfc
	float CaptionYAdjustment; // 0x100
	ObjectProperty OverrideTexture1; // 0x104
	FString OverrideTexture1Name; // 0x10c
	FTextureUVs OverrideUVs1; // 0x11c
	ObjectProperty OverrideTexture2; // 0x12c
	FString OverrideTexture2Name; // 0x134
	FTextureUVs OverrideUVs2; // 0x144
	FVector2D InitialLocation; // 0x154
	FVector2D CurrentLocation; // 0x15c
	FVector2D CurrentCenter; // 0x164
	FVector2D InitialCenter; // 0x16c
	FVector2D PreviousLocations[0x6]; // 0x174
	float PreviousMoveDeltaTimes[0x6]; // 0x1a4
	int32_t PreviousLocationCount; // 0x1bc
	float LastTouchTime; // 0x1c0
	float TimeSinceLastTapRepeat; // 0x1c4
	float AnimatingFadeOpacity; // 0x1c8
	ObjectProperty InputOwner; // 0x1cc
	float TransitionTime; // 0x1d4
	FVector2D EscapeVelocity; // 0x1d8
	TArray<ObjectProperty> MobileSeqEventHandlers; // 0x1e0
	FVector2D LastAxisValues; // 0x1f0
	float TotalActiveTime; // 0x1f8
	float LastWentActiveTime; // 0x1fc
	DelegateProperty __OnProcessInputDelegate__Delegate; // 0x200
	DelegateProperty __OnTapDelegate__Delegate; // 0x210
	DelegateProperty __OnDoubleTapDelegate__Delegate; // 0x220
	DelegateProperty __OnProcessSlide__Delegate; // 0x230
	DelegateProperty __OnPreDrawZone__Delegate; // 0x240
	DelegateProperty __OnPostDrawZone__Delegate; // 0x250
};

struct ANxForceFieldSpawnable {
	ComponentProperty ForceFieldComponent; // 0x280
};

struct UMaterialExpressionMaterialFunctionCall {
	ObjectProperty MaterialFunction; // 0xb0
	TArray<FFunctionExpressionInput> FunctionInputs; // 0xb8
	TArray<FFunctionExpressionOutput> FunctionOutputs; // 0xc8
};

struct ATgDevice_Longbow {
	float s_fLastFireHoldPct; // 0xaec
	float m_fFireReleasePercent; // 0xaf0
	float m_fReticleReleaseAnimationDuration; // 0xaf4
};

struct AMobileHUD {
	char bShowGameHud : 1; // 0x5a0
	char bShowMobileHud : 1; // 0x5a0
	char bForceMobileHUD : 1; // 0x5a0
	char bShowMobileTilt : 1; // 0x5a0
	char bDebugTouches : 1; // 0x5a0
	char bDebugZones : 1; // 0x5a0
	char bDebugZonePresses : 1; // 0x5a0
	char bShowMotionDebug : 1; // 0x5a0
	ObjectProperty JoystickBackground; // 0x5a4
	FTextureUVs JoystickBackgroundUVs; // 0x5ac
	ObjectProperty JoystickHat; // 0x5bc
	FTextureUVs JoystickHatUVs; // 0x5c4
	ObjectProperty ButtonImages[0x2]; // 0x5d4
	FTextureUVs ButtonUVs[0x2]; // 0x5e4
	ObjectProperty ButtonFont; // 0x604
	FColor ButtonCaptionColor; // 0x60c
	ObjectProperty TrackballBackground; // 0x610
	FTextureUVs TrackballBackgroundUVs; // 0x618
	ObjectProperty TrackballTouchIndicator; // 0x628
	FTextureUVs TrackballTouchIndicatorUVs; // 0x630
	ObjectProperty SliderImages[0x4]; // 0x640
	FTextureUVs SliderUVs[0x4]; // 0x660
	float MobileTiltX; // 0x6a0
	float MobileTiltY; // 0x6a4
	float MobileTiltSize; // 0x6a8
	TArray<ObjectProperty> KismetRenderEvents; // 0x6ac
};

struct AKAsset {
	ComponentProperty SkeletalMeshComponent; // 0x280
	char bDamageAppliesImpulse : 1; // 0x288
	char bWakeOnLevelStart : 1; // 0x288
	char bBlockPawns : 1; // 0x288
	ObjectProperty ReplicatedMesh; // 0x28c
	ObjectProperty ReplicatedPhysAsset; // 0x294
};

struct ATgDevice_AuraPerTarget {
	int32_t m_nAppliedStacks; // 0xb34
};

struct UTgInventoryObject_Listen_Combo_Barik {
	TArray<FComboInfo> m_ComboInfoList; // 0xd0
	TArray<FUIMarkInfo> m_UIMarkInfoList; // 0xe0
	TArray<FBurningMarkInfo> m_BurningMarks; // 0xf0
};

struct UTgTutorialAnnouncer {
	TArray<ObjectProperty> TutorialSounds; // 0x60
	TArray<ObjectProperty> QueuedSounds; // 0x70
	ComponentProperty CurrentSoundAC; // 0x80
	ObjectProperty OwnerPC; // 0x88
};

struct USkelControl_Multiply {
	float Multiplier; // 0xd0
};

struct UNavMeshGoal_Filter {
	char bShowDebug : 1; // 0x60
	int32_t NumNodesThrownOut; // 0x64
	int32_t NumNodesProcessed; // 0x68
};

struct UKMeshProps {
	FVector COMNudge; // 0x60
	FKAggregateGeom AggGeom; // 0x6c
};

struct ATgProjectile {
	FPointer VfTable_ITgSkinnableInterface; // 0x2dc
	FPointer VfTable_ITgObserver_ViewTargetChanged; // 0x2e4
	ObjectProperty s_LastDefaultMode; // 0x2ec
	int32_t r_nProjectileId; // 0x2f4
	int32_t m_nFiringInstance; // 0x2f8
	float r_fDuration; // 0x2fc
	float m_fPostLandDuration; // 0x300
	float m_fLandZThreshold; // 0x304
	float m_fPersistTime; // 0x308
	float m_fPersistHitPulse; // 0x30c
	int32_t m_nTargetPhysicalType; // 0x310
	ComponentProperty c_Mesh; // 0x314
	ObjectProperty c_ExplosionFx; // 0x31c
	ObjectProperty c_ImpactFx; // 0x324
	char c_bRotationFollowsVelocity : 1; // 0x32c
	char m_bExplodeAtMaxRange : 1; // 0x32c
	char m_bDeployOnCharacter : 1; // 0x32c
	char m_bDeployOnTarget : 1; // 0x32c
	char m_bDeployOnGround : 1; // 0x32c
	char m_bAlwaysDeployUpwards : 1; // 0x32c
	char m_bStickToWalls : 1; // 0x32c
	char c_bIsAOE : 1; // 0x32c
	char m_bCountDirectHitForAOE : 0; // 0x32c
	char m_bUseAOEDirectHit : 0; // 0x32c
	char m_bHasExploded : 0; // 0x32c
	char m_bHitValidTarget : 0; // 0x32c
	char m_bIngoreBehindProjCollisions : 0; // 0x32c
	char m_bIsInitialized : 0; // 0x32c
	char m_bIsShutDown : 0; // 0x32c
	char m_bPIEInitialized : 0; // 0x32c
	char m_bHasPlayedFizzleFX : 0; // 0x32c
	char m_bHasPlayedHitWallFX : 0; // 0x32c
	char m_bHasPlayedHitTargetFX : 0; // 0x32c
	char m_bSuppressDeployableSpawn : 0; // 0x32c
	char m_bAltFireHit : 0; // 0x32c
	char m_bInvertTeam : 0; // 0x32c
	char m_bFirstShotAfterMovementAbility : 0; // 0x32c
	char m_bCanSpawnOnClientFirst : 0; // 0x32c
	char s_bIsClientTouch : 0; // 0x32c
	char m_bTrackToWorldLocation : 0; // 0x32c
	float r_fAccelRate; // 0x330
	float m_fTossZ; // 0x334
	float m_fFireAngle; // 0x338
	ObjectProperty r_Owner; // 0x33c
	int32_t r_nOwnerFireModeId; // 0x344
	ObjectProperty m_OwnerFireMode; // 0x348
	TArray<ObjectProperty> m_ExtraFireModes; // 0x350
	float r_fRange; // 0x360
	float m_fProximityDistance; // 0x364
	ObjectProperty m_CollisionProxy; // 0x368
	int32_t s_nSpawnBotId; // 0x370
	int32_t s_nSpawnDeployableId; // 0x374
	SpawnDeployableOrientation m_DeployableSpawnOrientation; // 0x378
	TG_EQUIP_POINT r_eEquippedAt; // 0x379
	float m_fDamageRadius; // 0x37c
	FVector r_vSpawnLocation; // 0x380
	FVector m_vSpawnRotation; // 0x38c
	FVector m_vLocationLastTick; // 0x398
	float m_fMinTravelRange; // 0x3a4
	float s_fSpawnTime; // 0x3a8
	int32_t m_nPostRenderIcon; // 0x3ac
	int32_t m_nUniqueId; // 0x3b0
	float m_fBaseDamageMultiplier; // 0x3b4
	FVector c_vHitWallVelocity; // 0x3b8
	ComponentProperty LightEnvironment; // 0x3c4
	FVector m_vSpawnPosition; // 0x3cc
	ComponentProperty m_DebugProximityDistancePSC; // 0x3d8
	float m_fStandingStillPercent; // 0x3e0
	int32_t m_nTargetsHitCount; // 0x3e4
	FCollisionSettingsProjectile m_CollisionSettings; // 0x3e8
	TArray<ObjectProperty> m_PassThroughTargets; // 0x3ec
	FTrackingSettings m_TrackingSettings; // 0x3fc
	float m_fDelayTrackSeconds; // 0x414
	float m_fExplosionOffsetDistance; // 0x418
	FTraceHitInfo m_BodyTraceResult; // 0x41c
	float s_fAoeRewindTime; // 0x444
	ObjectProperty m_AkActorUnoccluded; // 0x448
};

struct UTgGameDC_Player {
	int32_t m_nStatCount; // 0x170
	ObjectProperty m_ReviveTimer; // 0x174
	ObjectProperty m_UltimateTimer; // 0x17c
	float m_PrevUltTimer; // 0x184
	ObjectProperty m_StatsArray; // 0x188
	ObjectProperty m_ItemStoreArray; // 0x190
	ObjectProperty m_ActiveItemArray; // 0x198
	ObjectProperty m_ConsumableArray; // 0x1a0
	DelegateProperty __USC_ForceStatsUpdate_Delegate__Delegate; // 0x1a8
};

struct UUIData_EsportsDisplayGroup {
	FString m_sName; // 0x60
	TArray<int32_t> m_nGroupIds; // 0x70
};

struct UTgAIBehaviorAction_SelectThreatCombatTarget {
	char bMustBeHighestThreat : 1; // 0x94
	char bMustBeInLeash : 1; // 0x94
	char bMustBeInSightRadius : 1; // 0x94
	char bEffectGroupCategoryCheckInstigator : 1; // 0x94
	char bMustBeHittable : 1; // 0x94
	ECombatTargetType TargetType; // 0x98
	int32_t EffectCategoryId; // 0x9c
};

struct UUIData_String {
	FString m_sValue; // 0x60
};

struct UUIInteractable_Button_Purchase {
	char m_bHolding : 1; // 0x140
	char m_bPrimed : 1; // 0x140
	float m_fHoldTimer; // 0x144
	float m_fHoldDuration; // 0x148
	ObjectProperty m_mcTF; // 0x14c
	ObjectProperty m_mcRadialMask; // 0x154
	ObjectProperty m_mcKeyContainer; // 0x15c
	ObjectProperty m_pKey; // 0x164
	ObjectProperty m_pCurrency; // 0x16c
	ObjectProperty m_pRealMoneyPrice; // 0x174
	ObjectProperty m_PressAction; // 0x17c
	ObjectProperty m_ReleaseAction; // 0x184
};

struct ANxGenericForceField {
	FFG_ForceFieldCoordinates Coordinates; // 0x2d4
	FVector Constant; // 0x2d8
	FVector PositionMultiplierX; // 0x2e4
	FVector PositionMultiplierY; // 0x2f0
	FVector PositionMultiplierZ; // 0x2fc
	FVector PositionTarget; // 0x308
	FVector VelocityMultiplierX; // 0x314
	FVector VelocityMultiplierY; // 0x320
	FVector VelocityMultiplierZ; // 0x32c
	FVector VelocityTarget; // 0x338
	FVector Noise; // 0x344
	FVector FalloffLinear; // 0x350
	FVector FalloffQuadratic; // 0x35c
	float TorusRadius; // 0x368
	FPointer LinearKernel; // 0x36c
};

struct UTgExplosionLight {
	char bCheckFrameRate : 1; // 0x240
	char bInitialized : 1; // 0x240
	char bIsEnemy : 1; // 0x240
	char bIsLocal : 1; // 0x240
	char bIsLooping : 1; // 0x240
	float HighDetailFrameTime; // 0x244
	float Lifetime; // 0x248
	int32_t TimeShiftIndex; // 0x24c
	TArray<FLightValues> TimeShift; // 0x250
	int32_t LoopIndex; // 0x260
	DelegateProperty __OnLightFinished__Delegate; // 0x264
};

struct ATgPawn_Pet {
	float m_fOwnerPhysPowerItemPercent; // 0x2e78
	float m_fOwnerMagicalPowerItemPercent; // 0x2e7c
	float m_fOwnerUltilityPowerItemPercent; // 0x2e80
	EPetPhase s_PetPhase; // 0x2e84
	EPetPosition s_PetPosition; // 0x2e85
	FRotator s_LastPositionAdjustmentRotation; // 0x2e88
	FVector s_InterpolatedPetPosition; // 0x2e94
	FVector s_InterpolatedPetOwnerPosition; // 0x2ea0
	float s_fPetPositionDistanceMultiplier; // 0x2eac
	float s_fOwnerVelocityTime; // 0x2eb0
	float s_fSmoothedMaxSpeed; // 0x2eb4
	ObjectProperty c_BeamFX; // 0x2eb8
	FRotator r_InitialOrientation; // 0x2ec0
	ComponentProperty c_AimVisibilityMesh; // 0x2ecc
};

struct UMCPBase {
	FPointer VfTable_FTickableObject; // 0x78
};

struct UDOFAndBloomEffect {
	float BloomScale; // 0xb4
	float BloomThreshold; // 0xb8
	FColor BloomTint; // 0xbc
	float BloomScreenBlendThreshold; // 0xc0
	float SceneMultiplier; // 0xc4
	float BlurBloomKernelSize; // 0xc8
	char bEnableReferenceDOF : 1; // 0xcc
	EDOFType DepthOfFieldType; // 0xd0
	EDOFQuality DepthOfFieldQuality; // 0xd1
	ObjectProperty BokehTexture; // 0xd4
};

struct AGameExplosionActor {
	char bHasExploded : 1; // 0x280
	char bExplodeMoreThanOnce : 1; // 0x280
	char bTrackExplosionParticleSystemLifespan : 1; // 0x280
	char bDrawDebug : 1; // 0x280
	ComponentProperty ExplosionLight; // 0x284
	ComponentProperty ExplosionRadialBlur; // 0x28c
	float LightFadeTime; // 0x294
	float LightFadeTimeRemaining; // 0x298
	float LightInitialBrightness; // 0x29c
	float RadialBlurFadeTime; // 0x2a0
	float RadialBlurFadeTimeRemaining; // 0x2a4
	float RadialBlurMaxBlurAmount; // 0x2a8
	ObjectProperty ExplosionTemplate; // 0x2ac
	ComponentProperty RadialImpulseComponent; // 0x2b4
	ObjectProperty InstigatorController; // 0x2bc
	ObjectProperty HitActorFromPhysMaterialTrace; // 0x2c4
	FVector HitLocationFromPhysMaterialTrace; // 0x2cc
	ObjectProperty Attachee; // 0x2d8
	ObjectProperty AttacheeController; // 0x2e0
	float DirectionalExplosionMinDot; // 0x2e8
	FVector ExplosionDirection; // 0x2ec
};

struct UTgAnimMetaData_SkelControl_BoneScale {
	TArray<FName> SkelControlNameList; // 0x60
	float BoneScale; // 0x70
	char bFullControlOverController : 1; // 0x74
	FName SkelControlName; // 0x78
};

struct ATgRepInfo_Factory {
	ReplicatedFactoryState s_FactoryState; // 0x280
	ReplicatedFactoryState r_FactoryState[0x3]; // 0x281
	char r_bVisibleOnMap[0x3]; // 0x284
	char r_bRespawnVisible[0x3]; // 0x287
	MinimapFactoryType r_MinimapType; // 0x28a
	ObjectProperty r_FactoryOwner; // 0x28c
	ObjectProperty r_TaskforceInfo; // 0x294
	int32_t r_nFactoryId; // 0x29c
	ObjectProperty r_LastSpawnedRepInfo; // 0x2a0
	float r_fRespawnDelay; // 0x2a8
	float r_fRespawnTimer; // 0x2ac
};

struct ATgDevice_DragonSlam {
	char m_bHasHitTarget : 1; // 0xaec
	ObjectProperty m_CollisionProxy; // 0xaf0
	ObjectProperty m_DrogozLeg1; // 0xaf8
};

struct UTgSeqOp_MathCalc {
	float m_fResult; // 0xec
};

struct UTgAnimBlendByFire {
	char m_bSetToIdleOnCeaseRelevant : 1; // 0x168
	char m_bShouldReplayIfAlreadyActive : 1; // 0x168
	FDeviceParameters m_InHandDeviceParameters; // 0x16c
	FDeviceParameters m_OffHand1DeviceParameters; // 0x180
	FDeviceParameters m_OffHand2DeviceParameters; // 0x194
	FDeviceParameters m_OffHand3DeviceParameters; // 0x1a8
	FDeviceParameters m_OffHand4DeviceParameters; // 0x1bc
	FDeviceParameters m_RecallDeviceParameters; // 0x1d0
	ObjectProperty m_OwningPawn; // 0x1e4
};

struct UTgAnimNodeSequence_SyncToCooldown {
	TG_EQUIP_POINT m_EqpPoint; // 0x1bc
	float m_fMaxPlayRate; // 0x1c0
	float m_fPlayRateWaitForCooldown; // 0x1c4
	float m_fPctStartWaitForCooldown; // 0x1c8
	float fCooldownEndTime; // 0x1cc
	char bWaitForCooldown : 1; // 0x1d0
};

struct UTgAIUtilityFunction {
	float MinInput; // 0xbc
	float MaxInput; // 0xc0
	EGraphType FunctionType; // 0xc4
	float DesiredValue; // 0xc8
	float UtilityScale; // 0xcc
	char bInvert : 1; // 0xd0
};

struct UTgInventoryObject_Listen_Weaken {
	int32_t m_nAppliedCategoryCodeToCheck; // 0xd4
};

struct ATgInterpolatingCameraActor {
	TArray<FInterpolatingCameraInfo> m_CameraArray; // 0x420
	int32_t m_nCurrentCameraIndex; // 0x430
	float m_fCurrentInterpValue; // 0x434
	float m_fTargetInterpValue; // 0x438
};

struct UTgSeqAct_RespawnAllPlayers {
	char bResetLivingPlayers : 1; // 0x108
	char bResetDeadPlayers : 1; // 0x108
	char bResetHealth : 1; // 0x108
};

struct ATgPlayerStartRoyale {
	ERoyaleRegion m_Region; // 0x388
};

struct UInterpTrackLinearColorProp {
	FName PropertyName; // 0xb8
};

struct ATgDevice_Turret {
	int32_t m_FlameTurretID; // 0xaec
	int32_t m_MegaTurretID; // 0xaf0
	int32_t m_LockdownTurretID; // 0xaf4
	FVector m_SpawnLocationOverride; // 0xaf8
	char m_bLockdownIsOn : 1; // 0xb04
	char m_bHasFlamethrowerTurret : 1; // 0xb04
	char m_bHasMegaTurret : 1; // 0xb04
};

struct UTgSynchronizedTimer {
	char m_bPausedByGame : 1; // 0x118
	char m_bSuppressCallback : 1; // 0x118
	char m_bRunning : 1; // 0x118
	char m_bPaused : 1; // 0x118
	ObjectProperty m_MP; // 0x11c
	ObjectProperty m_TimerManager; // 0x124
};

struct UAnimNodeSlot {
	char bIsPlayingCustomAnim : 1; // 0x114
	char bEarlyAnimEndNotify : 1; // 0x114
	char bSkipBlendWhenNotRendered : 1; // 0x114
	char bAdditiveAnimationsOverrideSource : 1; // 0x114
	char bIsBeingUsedByInterpGroup : 1; // 0x114
	char bDontAddToAlwaysTickArray : 1; // 0x114
	float PendingBlendOutTime; // 0x118
	int32_t CustomChildIndex; // 0x11c
	int32_t TargetChildIndex; // 0x120
	TArray<float> TargetWeight; // 0x124
	float BlendTimeToGo; // 0x134
};

struct AReverbVolume {
	float Priority; // 0x2bc
	char bEnabled : 1; // 0x2c0
	char m_bUseAudioAltitude : 1; // 0x2c0
	FReverbSettings Settings; // 0x2c4
	FInteriorSettings AmbientZoneSettings; // 0x2d4
	ObjectProperty NextLowerPriorityVolume; // 0x304
	FName AuxBusName; // 0x30c
	float SendLevel; // 0x314
	float m_fAudioAltitudeCeiling; // 0x318
	float m_fAudioAltitudeFloor; // 0x31c
};

struct UUIDataStore_GameResource {
	TArray<FGameResourceDataProvider> ElementProviderTypes; // 0x98
	FMultiMap_Mirror ListElementProviders; // 0xa8
};

struct UParticleModuleSizeScale {
	FRawDistributionVector SizeScale; // 0x68
	char EnableX : 1; // 0x8c
	char EnableY : 1; // 0x8c
	char EnableZ : 1; // 0x8c
};

struct ULevelStreamingDistance {
	FVector Origin; // 0x100
	float MaxDistance; // 0x10c
};

struct USeqAct_GetVelocity {
	float VelocityMag; // 0x108
	FVector VelocityVect; // 0x10c
};

struct UTgBattleCheatManager {
	ObjectProperty m_DebugCameraController; // 0xa0
	TArray<ObjectProperty> m_DebugPlayerStarts; // 0xa8
	ObjectProperty m_LastGotoPRI; // 0xb8
};

struct UMaterialExpressionParameter {
	FName ParameterName; // 0xb0
	FGuid ExpressionGUID; // 0xb8
	FName Group; // 0xc8
};

struct UMcpClashMobManager {
	FString ChallengeListUrl; // 0xe8
	FString ChallengeStatusUrl; // 0xf8
	FString ChallengeMultiStatusUrl; // 0x108
	FString AcceptChallengeUrl; // 0x118
	FString UpdateChallengeProgressUrl; // 0x128
	FString UpdateRewardProgressUrl; // 0x138
	ObjectProperty HTTPRequestChallengeList; // 0x148
	TArray<FMcpChallengeUserRequest> ChallengeUserRequests; // 0x150
	TArray<FMcpClashMobChallengeEvent> ChallengeEvents; // 0x160
	TArray<FMcpClashMobChallengeUserStatus> ChallengeUserStatus; // 0x170
	FMcpClashMobChallengeUserStatus TempChallengeUserStatus; // 0x180
	TArray<FMcpClashMobChallengeUserStatus> TempChallengeUserStatusArray; // 0x200
	TScriptInterface<Class> FileCache; // 0x210
	ObjectProperty FileDownloader; // 0x220
};

struct UTgAIBehaviorCondition_CombatTargetHealthPercentAfterAttack {
	TG_EQUIP_POINT DeviceSlot; // 0x98
	float HealthPct; // 0x9c
};

struct UUIData_ItemQuest {
	Fdword m_dwPurchasePortion; // 0xb8
};

struct UTgInventoryObject_Listen_ForgeDevice {
	char bFirstItem : 1; // 0xc8
};

struct ATgRepInfo_Game {
	TArray<FGraphData> m_GraphData; // 0x2e8
	FGraphData r_LastDataPoint; // 0x2f8
	float m_GraphUpdateWaitTime; // 0x304
	TG_GAME_TYPE r_GameType; // 0x308
	EHUDType r_eHUDType; // 0x309
	INITIALIZEABLE_BOOL r_eTalentsEnabled; // 0x30a
	MissionTimerState r_nMissionTimerState; // 0x30b
	GameTimerState r_eGameTimerState; // 0x30c
	MissionTimerState r_nRoundLimitTimerState; // 0x30d
	MissionTimerState r_nSecondaryTimerState; // 0x30e
	char r_nLastRoundAttacker; // 0x30f
	char r_nLastRoundWinner; // 0x310
	EFlagState r_FlagState[0x2]; // 0x311
	EGameEnvironmentRule r_GameEnvironmentRule; // 0x313
	EGameRespawnRule r_GameRespawnRule; // 0x314
	EGameMode r_GameMode; // 0x315
	char r_bIsMission : 1; // 0x318
	char r_bGameHasSetup : 1; // 0x318
	char r_bGameAllowsAchievements : 1; // 0x318
	char r_bAllowSpawnGuardDuringDeviceFire : 1; // 0x318
	char r_bBlockCreditGain : 1; // 0x318
	char r_bBlockEnergyGain : 1; // 0x318
	char r_bDisablePlayerMovement : 1; // 0x318
	char r_bOvertime : 1; // 0x318
	char r_bCapturePointOvertime : 0; // 0x318
	char r_bLimitBurnCardsToOnePerCategory : 0; // 0x318
	char r_bRoundEnding : 0; // 0x318
	char r_bFadeOutAtRoundEnd : 0; // 0x318
	char r_bIntroPlayed : 0; // 0x318
	char r_bUsePointsMode : 0; // 0x318
	char r_bUltimatesLocked : 0; // 0x318
	char r_bSuddenDeath : 0; // 0x318
	char r_bEnableDistanceFOW : 0; // 0x318
	char r_bSpawnGatesOpen : 0; // 0x318
	char r_bAttackersSpawnGatesOpen : 0; // 0x318
	char r_bDefendersSpawnGatesOpen : 0; // 0x318
	char r_bForwardProgress : 0; // 0x318
	char r_bServerFlagSprint : 0; // 0x318
	char r_bServerFlagMinimapTeamVisibility : 0; // 0x318
	char r_bForce3P : 0; // 0x318
	char r_bForce1P : 0; // 0x318
	char r_bForceOutOfCombatSprint : 0; // 0x318
	char r_bAutoMelee : 0; // 0x318
	char r_bShowProjectileProximityDistance : 0; // 0x318
	char r_bDisableProjectileProximityDistance : 0; // 0x318
	char r_bShowHeadMesh : 0; // 0x318
	char r_bUseInstantFireMeshTrace : 0; // 0x318
	char r_bAllowWeaponLagPrediction : 0; // 0x318
	char r_bSiegeEngineRequiresAlliesToMove : 1; // 0x31c
	char r_bSiegeEngineMovementPaused : 1; // 0x31c
	char r_bSiegeEngineMovementPausedAfterDamagingGate : 1; // 0x31c
	char r_bFogConverging : 1; // 0x31c
	char r_bFogEnded : 1; // 0x31c
	char r_bCheckpoint1Reached : 1; // 0x31c
	char r_bCheckpoint2Reached : 1; // 0x31c
	char r_bEnableHeadshots : 1; // 0x31c
	char r_bAllowPlayerMounting : 0; // 0x31c
	char r_bKillCamEnabled : 0; // 0x31c
	char r_bAttackersKillCamEnabled : 0; // 0x31c
	char r_bDefendersKillCamEnabled : 0; // 0x31c
	char r_bBlockKillCam : 0; // 0x31c
	char r_bIsFirstRound : 0; // 0x31c
	char r_bSpawnGatesOpenedAtLeastOnce : 0; // 0x31c
	char r_bDeploying : 0; // 0x31c
	char r_bUseRespawns : 0; // 0x31c
	char m_bNameplatesRequireLOS : 0; // 0x31c
	char m_bTeamVGS : 0; // 0x31c
	char r_bAlliances : 0; // 0x31c
	float r_fMissionRemainingTime; // 0x320
	int32_t r_nMissionTimerStateChange; // 0x324
	float r_fMissionTime; // 0x328
	float c_fMissionTime; // 0x32c
	float c_fMissionTimeSeconds; // 0x330
	float c_fAIBotDelaySeconds; // 0x334
	float r_fRoundLimitElapsed; // 0x338
	float r_fRoundLimitDuration; // 0x33c
	float r_fSecondaryRemainingTime; // 0x340
	int32_t r_nSecondaryTimerStateChange; // 0x344
	float r_fSecondaryTime; // 0x348
	float c_fSecondaryMissionTime; // 0x34c
	float c_fSecondaryMissionTimeSeconds; // 0x350
	float r_fCapturePointOvertimeStartDuration; // 0x354
	int32_t r_nCapturePointOvertimeStateChange; // 0x358
	float r_fPayloadOvertimeStartDuration; // 0x35c
	int32_t r_nPayloadOvertimeStateChange; // 0x360
	float r_fTF1PayloadPushDistance; // 0x364
	int32_t r_nPurchaseTime; // 0x368
	float m_fPurchaseTimer; // 0x36c
	int32_t r_nGlobalItemPurchaseOverride; // 0x370
	int32_t r_nGlobalLoadoutChangeOverride; // 0x374
	ObjectProperty r_AttackingTaskForce; // 0x378
	ObjectProperty r_CapturingTaskForce; // 0x380
	int32_t r_nChaosRemainingAttackDefendTime; // 0x388
	ObjectProperty r_Winner; // 0x38c
	float r_fPhysicsThreshold; // 0x394
	FString r_sQueueName; // 0x398
	int32_t r_nPlayOfTheGamePawnId; // 0x3a8
	int32_t r_nPlayOfTheGameMapLane; // 0x3ac
	float r_fPlayOfTheGameTimeStamp; // 0x3b0
	ObjectProperty c_PlayOfTheGameCamera; // 0x3b4
	TArray<ObjectProperty> m_Deployables; // 0x3bc
	TArray<ObjectProperty> m_Projectiles; // 0x3cc
	TArray<ObjectProperty> m_Destructibles; // 0x3dc
	TArray<ObjectProperty> m_DRIArray; // 0x3ec
	TArray<ObjectProperty> m_CPRIArray; // 0x3fc
	TArray<ObjectProperty> m_CapturePoints; // 0x40c
	TArray<ObjectProperty> m_MovableProjBlockers; // 0x41c
	int32_t r_nCurrentCheckpoint[0x2]; // 0x42c
	int32_t c_nNextClientOnlyProjectileInstanceId; // 0x434
	ObjectProperty r_SquadTarget1; // 0x438
	ObjectProperty r_SquadTarget2; // 0x440
	float r_fLastSquadTargetUpdate1; // 0x448
	float r_fLastSquadTargetUpdate2; // 0x44c
	float r_fSpeedScale; // 0x450
	float r_fPayloadProgressPercent; // 0x454
	float r_fCheckpoint1Percent; // 0x458
	float r_fCheckpoint2Percent; // 0x45c
	float r_fServerFlagDamageMultiplier; // 0x460
	float r_fServerFlagGroundSpeedModifier; // 0x464
	float r_fServerFlagAutoHealingMultiplier; // 0x468
	float r_fFogDensity; // 0x46c
	float r_fFogStartDistance; // 0x470
	float r_fFogObscureDistance; // 0x474
	ObjectProperty c_Fog; // 0x478
	int32_t r_nPersistentTextID; // 0x480
	int32_t r_nRemainingObjectiveTime; // 0x484
	int32_t r_nTotalObjectiveTime; // 0x488
	float r_fPlayerViewDistance; // 0x48c
	float r_fVisibilityVolumeViewDistance; // 0x490
	float r_fPushTimer; // 0x494
	float r_fWeaponMaxLagCompensation; // 0x498
	float m_fVaultImmuneToSiegeEngineHealth; // 0x49c
	float r_fConvergeDistance; // 0x4a0
	float r_fConvergeStartDistance; // 0x4a4
	float r_fFogConvergeInterval; // 0x4a8
	float r_fFinalFogDirection; // 0x4ac
	int32_t r_nTaskForcePushSuccessful; // 0x4b0
	int32_t r_nTaskForceDefenseSuccessful; // 0x4b4
	int32_t r_nMapLane; // 0x4b8
	float r_fGlobalFrictionFalling; // 0x4bc
	float r_fGlobalFrictionFlying; // 0x4c0
	TArray<ObjectProperty> c_pForges; // 0x4c4
	TArray<ObjectProperty> c_pCatapults; // 0x4d4
	FBotDifficultyDebugData r_DifficultyDebugData; // 0x4e4
	int32_t r_nStartTime; // 0x548
	int32_t r_nDeployTime; // 0x54c
	int32_t r_nPrepareTime; // 0x550
	int32_t r_nDeathFogTime; // 0x554
	int32_t r_nRemainingTime; // 0x558
	int32_t r_nPreConvergeTime; // 0x55c
	int32_t r_nConvergeTime; // 0x560
	int32_t r_nTeamsTotal; // 0x564
	int32_t r_nTeamsAlive; // 0x568
	int32_t r_nPlayersAlive; // 0x56c
	int32_t r_nPlayersTotal; // 0x570
	float r_fReviveTotalTime; // 0x574
	ObjectProperty r_pFog; // 0x578
	float r_ScrimmageX; // 0x580
	float r_ScrimmageY; // 0x584
	float m_fMaxSilhouetteRange; // 0x588
	FInitialFogInfo r_InitialFogInfo; // 0x58c
	FLeaderboardTeam m_LeaderboardTeams[0x3]; // 0x59c
	int32_t r_nDisenchantValues[0x4]; // 0x674
	int32_t r_nPlayers[0x2]; // 0x684
	ObjectProperty r_pTeamZeppelins[0x2]; // 0x68c
	FVector r_vTeamZeppelinSpawnLoc; // 0x69c
	FRotator r_rTeamZeppelinSpawnRot; // 0x6a8
	TMap<None, None> m_TeamWaypoints; // 0x6b4
	TMap<None, None> m_TeamPings; // 0x6fc
};

struct AMobileDebugCameraHUD {
	char bDrawDebugText : 1; // 0x6bc
};

struct USequenceFrame {
	int32_t SizeX; // 0x98
	int32_t SizeY; // 0x9c
	int32_t BorderWidth; // 0xa0
	char bDrawBox : 1; // 0xa4
	char bFilled : 1; // 0xa4
	char bTileFill : 1; // 0xa4
	FColor BorderColor; // 0xa8
	FColor FillColor; // 0xac
};

struct UUIComponent {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	UICOMPONENTTYPE m_ComponentType; // 0x68
	ObjectProperty m_Owner; // 0x6c
	ObjectProperty m_mcRoot; // 0x74
	FString m_sLoadName; // 0x7c
	int32_t m_nLoadIndex; // 0x8c
	FString m_sConstructName; // 0x90
	char m_bConstructed : 1; // 0xa0
	char m_bCenteredHorizontally : 1; // 0xa0
	char m_bCenteredVertically : 1; // 0xa0
	char m_bShouldCreateInput : 1; // 0xa0
	char m_bBlockInputFallThrough : 1; // 0xa0
	char m_bPushInputOnVisible : 1; // 0xa0
	int32_t m_nDeferredUpdateCallbackHandle; // 0xa4
	TArray<ObjectProperty> m_Components; // 0xa8
	FMultiMap_Mirror m_ComponentMap; // 0xb8
	ObjectProperty m_CallbackContainer; // 0x100
	int32_t m_nXBeforeCenter; // 0x108
	int32_t m_nYBeforeCenter; // 0x10c
	ObjectProperty m_InputContext; // 0x110
};

struct UForceFieldShapeSphere {
	ComponentProperty Shape; // 0x60
};

struct UAnimNodeMirror {
	char bEnableMirroring : 1; // 0x114
};

struct USeqVar_Named {
	USequenceVariable* ExpectedType; // 0xa0
	FName FindVarName; // 0xa8
	char bStatusIsOk : 1; // 0xb0
};

struct UTgAnimNodeBlendByAbilitySimple {
	char m_bBlendToActiveOnStartFire : 1; // 0x168
	char m_bBlendToActiveOnFire : 1; // 0x168
	char m_bDelayBlendToActiveUntilAnimEnd : 1; // 0x168
	char m_bDelayBlendToActiveUntilReplay : 1; // 0x168
	char m_bDelayBlendToIdleUntilAnimEnd : 1; // 0x168
	char m_bDelayBlendToIdleUntilReplay : 1; // 0x168
	char m_bBlendToIdleImmediatelyOnInterrupt : 1; // 0x168
	char m_bIsAbilityFiring : 1; // 0x168
	TG_EQUIP_POINT m_EqpPoint; // 0x16c
};

struct AHeightFog {
	ComponentProperty Component; // 0x280
	char bEnabled : 1; // 0x288
};

struct UTgGfxTeamInvite {
	int32_t m_nQueue; // 0x244
	float m_fTimerWidth; // 0x248
	float m_fTimeoutTime; // 0x24c
	float m_fTimeoutTimer; // 0x250
	ObjectProperty m_mcTimer; // 0x254
	ObjectProperty m_mcSubtitle; // 0x25c
	ObjectProperty m_mcButton[0x2]; // 0x264
	TMap<None, None> m_fInviteTimestamps; // 0x274
	ObjectProperty m_AkTeamInvite; // 0x2bc
};

struct UCloudStorageBase {
	TArray<FString> LocalCloudFiles; // 0x80
	char bSuppressDelegateCalls : 1; // 0x90
};

struct UMcpUserInventoryBase {
	FString McpUserInventoryClassName; // 0x78
	DelegateProperty __OnCreateSaveSlotComplete__Delegate; // 0x88
	DelegateProperty __OnDeleteSaveSlotComplete__Delegate; // 0x98
	DelegateProperty __OnQuerySaveSlotListComplete__Delegate; // 0xa8
	DelegateProperty __OnQueryInventoryItemsComplete__Delegate; // 0xb8
	DelegateProperty __OnPurchaseItemComplete__Delegate; // 0xc8
	DelegateProperty __OnSellItemComplete__Delegate; // 0xd8
	DelegateProperty __OnEarnItemComplete__Delegate; // 0xe8
	DelegateProperty __OnConsumeItemComplete__Delegate; // 0xf8
	DelegateProperty __OnDeleteItemComplete__Delegate; // 0x108
	DelegateProperty __OnRecordIapComplete__Delegate; // 0x118
};

struct UTgAIBehaviorCondition_InteractTargetOfType {
	int32_t ByteAlignment; // 0x98
	EInteractTargetType InteractTargetType; // 0x9c
};

struct UParticleModuleUberLTISIVCL {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartVelocity; // 0xc0
	FRawDistributionFloat StartVelocityRadial; // 0xe4
	FRawDistributionVector ColorOverLife; // 0x108
	FRawDistributionFloat AlphaOverLife; // 0x12c
};

struct UNavMeshPath_SameCoverLink {
	ObjectProperty TestLink; // 0x78
};

struct UTgAnimNodeBlendByIntroduction {
	char m_bIsRelevant : 1; // 0x168
};

struct UTgAIInfluenceMap {
	FPointer VfTable_FTickableObject; // 0x60
	TArray<int32_t> Influences; // 0x68
	FPointer FalloffTable; // 0x78
	ObjectProperty InfluenceGrid; // 0x80
	float TickFrequency; // 0x88
	float InvTickFrequency; // 0x8c
	float Decay; // 0x90
	float Momentum; // 0x94
};

struct UMaterialInstanceTimeVarying {
	char bAutoActivateAll : 1; // 0x2f4
	float Duration; // 0x2f8
	TArray<FFontParameterValueOverTime> FontParameterValues; // 0x2fc
	TArray<FScalarParameterValueOverTime> ScalarParameterValues; // 0x30c
	TArray<FTextureParameterValueOverTime> TextureParameterValues; // 0x31c
	TArray<FVectorParameterValueOverTime> VectorParameterValues; // 0x32c
	TArray<FLinearColorParameterValueOverTime> LinearColorParameterValues; // 0x33c
};

struct ATargetPoint {
	int32_t SpawnRefCount; // 0x288
};

struct UTgSeqAct_SetDisenchantEnabled {
	char bEnabled : 1; // 0x108
};

struct ATcpLink {
	ELinkState LinkState; // 0x2a4
	FIpAddr RemoteAddr; // 0x2a8
	ATcpLink* AcceptClass; // 0x2bc
	TArray<char> SendFIFO; // 0x2c4
	FString RecvBuf; // 0x2d4
};

struct UTgDataHandler {
	ObjectProperty m_MP; // 0x118
	TArray<ObjectProperty> m_DataChunkList; // 0x120
};

struct UWaveFormBase {
	ObjectProperty TheWaveForm; // 0x60
};

struct USeqVar_RandomInt {
	int32_t Min; // 0xa4
	int32_t Max; // 0xa8
};

struct UTgAIBehaviorAction_PlayVGS {
	int32_t VoicePackId; // 0x94
	int32_t VgsId; // 0x98
};

struct UForceFeedbackManager {
	char bAllowsForceFeedback : 1; // 0x60
	char bIsPaused : 1; // 0x60
	float ScaleAllWaveformsBy; // 0x64
	TArray<FForceFeedbackPlayingInfo> PlayingWaveforms; // 0x68
};

struct UTgAnimNotify_ToggleInvisibleWall {
	char TurnWallOn : 1; // 0x68
	char TurnOffOnCeaseRelevant : 1; // 0x68
	int32_t WallIndex; // 0x6c
	FVector WallPosition; // 0x70
	FVector WallNormal; // 0x7c
	FName WallEnableBaseName; // 0x88
	FName WallPositionBaseName; // 0x90
	FName WallNormalBaseName; // 0x98
};

struct ATgDevice_DivineWrath {
	FVector m_vLocalAimOffset; // 0xaec
};

struct UExponentialHeightFogComponent {
	char bEnabled : 1; // 0x88
	char bUseActorDirectionForLightDirection : 1; // 0x88
	float FogHeight; // 0x8c
	float FogDensity; // 0x90
	float FogHeightFalloff; // 0x94
	float FogMaxOpacity; // 0x98
	float StartDistance; // 0x9c
	float LightTerminatorAngle; // 0xa0
	float OppositeLightBrightness; // 0xa4
	FColor OppositeLightColor; // 0xa8
	float LightInscatteringBrightness; // 0xac
	FColor LightInscatteringColor; // 0xb0
	FVector DominantDirectionalLightDirection; // 0xb4
};

struct UTgAIBehaviorCondition_NumGodsInCapturePointRadius {
	char bGodsMustBeEnemy : 1; // 0x9c
	int32_t GodThreshold; // 0xa0
};

struct UWindPointSourceComponent {
	ComponentProperty PreviewRadiusComponent; // 0xa0
	float Radius; // 0xa8
};

struct ATgRepInfo_TaskForce {
	int32_t r_nTeamId; // 0x2a0
	int32_t r_nAlliance; // 0x2a4
	char r_bSpectator : 1; // 0x2a8
	FResurrectionInfo r_ResurrectionInfo; // 0x2ac
	ObjectProperty r_TeamZeppelin; // 0x2b4
	int32_t s_nColorIndex; // 0x2bc
	int32_t s_nGodVisionMask; // 0x2c0
	ObjectProperty s_NavTeamDeploy; // 0x2c4
	int32_t r_nScore; // 0x2cc
	int32_t r_nScorePercent; // 0x2d0
	char r_nTaskForce; // 0x2d4
	float r_fSecondaryScore; // 0x2d8
	FFoundLootGoblinInfo r_FoundLootGoblinInfo; // 0x2dc
	TArray<ObjectProperty> m_Factories; // 0x2e8
	TArray<ObjectProperty> m_TeamBots; // 0x2f8
	TArray<ObjectProperty> m_TeamPlayers; // 0x308
};

struct UMaterialExpressionCosine {
	FExpressionInput Input; // 0xb0
	float Period; // 0xe4
};

struct UMaterialExpressionSceneDepth {
	FExpressionInput Coordinates; // 0xb0
	char bNormalize : 1; // 0xe4
};

struct ATgDeploy_ShieldBarik {
	char r_bHasCapsule : 1; // 0x44c
	char r_bHasAcceleratorField : 1; // 0x44c
	char r_bHasImpede : 1; // 0x44c
	char r_bHasBunker : 1; // 0x44c
	char r_bHasFortify : 1; // 0x44c
	TArray<ObjectProperty> m_AcceleratedActors; // 0x450
	ObjectProperty m_CachedPawnOwner; // 0x460
};

struct UMobilePlayerInput {
	FTouchData Touches[0x5]; // 0x2d4
	ObjectProperty InteractiveObject; // 0x464
	FDouble InteractiveObjectLastTime; // 0x46c
	TArray<FMobileInputGroup> MobileInputGroups; // 0x474
	int32_t CurrentMobileGroup; // 0x484
	TArray<ObjectProperty> MobileInputZones; // 0x488
	TArray<FMobileInputZoneClassMap> MobileInputZoneClasses; // 0x498
	float MobilePitch; // 0x4a8
	float MobilePitchCenter; // 0x4ac
	float MobilePitchMultiplier; // 0x4b0
	float MobileYaw; // 0x4b4
	float MobileYawCenter; // 0x4b8
	float MobileYawMultiplier; // 0x4bc
	float MobilePitchDeadzoneSize; // 0x4c0
	float MobileYawDeadzoneSize; // 0x4c4
	float MobileDoubleTapTime; // 0x4c8
	float MobileMinHoldForTap; // 0x4cc
	float MobileTapRepeatTime; // 0x4d0
	char bAllowTouchesInCinematic : 1; // 0x4d4
	char bDisableTouchInput : 1; // 0x4d4
	char bAbsoluteTouchLocations : 1; // 0x4d4
	char bCollapseTouchInput : 1; // 0x4d4
	char bFakeMobileTouches : 1; // 0x4d4
	char bDisableSceneRender : 1; // 0x4d4
	float ZoneTimeout; // 0x4d8
	TArray<ObjectProperty> MobileMenuStack; // 0x4dc
	FString NativeDebugString; // 0x4ec
	float MobileInactiveTime; // 0x4fc
	TArray<ObjectProperty> MobileSeqEventHandlers; // 0x500
	TArray<ObjectProperty> MobileRawInputSeqEventHandlers; // 0x510
	FVector2D MobileViewportOffset; // 0x520
	FVector2D MobileViewportSize; // 0x528
	DelegateProperty __OnTouchNotHandledInMenu__Delegate; // 0x530
	DelegateProperty __OnPreviewTouch__Delegate; // 0x540
	DelegateProperty __OnInputTouch__Delegate; // 0x550
};

struct ASceneCaptureCubeMapActor {
	ComponentProperty StaticMesh; // 0x288
	ObjectProperty CubeMaterialInst; // 0x290
};

struct UPath_AvoidInEscapableNodes {
	int32_t Radius; // 0x6c
	int32_t Height; // 0x70
	int32_t MaxFallSpeed; // 0x74
	int32_t MoveFlags; // 0x78
};

struct UMaterialExpressionConstant2Vector {
	float R; // 0xb0
	float G; // 0xb4
};

struct UPComOpenBroadcaster {
	FPointer VfTable_FCallbackEventDevice; // 0x60
	FString FacebookAppId; // 0x68
	FString FacebookApprovedDomain; // 0x78
	FString FacebookLiveUrl; // 0x88
	EPComOpenBroadcasterState CurrentState; // 0x98
	FPComOpenBroadcasterSettings CurrentSettings; // 0x9c
	FPointer StreamerProcessHandle; // 0xa0
	DelegateProperty __PreloadWebBrowser__Delegate; // 0xa8
	DelegateProperty __IsWebBrowserLoaded__Delegate; // 0xb8
	DelegateProperty __OpenWebBrowser__Delegate; // 0xc8
	DelegateProperty __CloseWebBrowser__Delegate; // 0xd8
};

struct UTgAIBehaviorAction_LookAtFortress {
	char bMustBeEnemy : 1; // 0x94
};

struct USeqCond_SwitchClass {
	TArray<FSwitchClassInfo> ClassArray; // 0xec
};

struct UTgSavedMove {
	char m_byMoveSpeed; // 0x118
	char m_bJumpHeld : 1; // 0x11c
	char m_bUltHeld : 1; // 0x11c
	char m_bMounted : 1; // 0x11c
	char m_bInADS : 1; // 0x11c
	float m_fSimulatedModifiedMovementSpeed; // 0x120
	int32_t m_nBigTeleportCount; // 0x124
};

struct ATgAssaultPoint {
	EAssaultType AssaultPointType; // 0x394
	ELocationType LocationType; // 0x395
};

struct UUIComponent_Item {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_mcType; // 0x128
	ObjectProperty m_mcDescription; // 0x130
	ObjectProperty m_mcArtIcon; // 0x138
	ObjectProperty m_mcFrame; // 0x140
	ObjectProperty m_Item; // 0x148
	char m_bCacheDirty : 1; // 0x150
	char m_bDataDirty : 1; // 0x150
	char m_bUseBaseName : 1; // 0x150
	FString m_sDescription; // 0x154
	FString m_sType; // 0x164
	FString m_sName; // 0x174
	float m_fDescriptionCenterOffset; // 0x184
	int32_t m_nTickCallback; // 0x188
};

struct USkelControlBase {
	FName ControlName; // 0x68
	float ControlStrength; // 0x70
	float BlendInTime; // 0x74
	float BlendOutTime; // 0x78
	AlphaBlendType BlendType; // 0x7c
	char bPostPhysicsController : 1; // 0x80
	char bSetStrengthFromAnimNode : 1; // 0x80
	char bInvertStrengthFromAnimNode : 1; // 0x80
	char bInitializedCachedNodeList : 1; // 0x80
	char bControlledByAnimMetada : 1; // 0x80
	char bInvertMetadataWeight : 1; // 0x80
	char bPropagateSetActive : 1; // 0x80
	char bIgnoreWhenNotRendered : 1; // 0x80
	char bShouldTickInScript : 0; // 0x80
	char bShouldTickOwner : 0; // 0x80
	char bEnableEaseInOut : 0; // 0x80
	float StrengthTarget; // 0x84
	float BlendTimeToGo; // 0x88
	TArray<FName> StrengthAnimNodeNameList; // 0x8c
	TArray<ObjectProperty> CachedNodeList; // 0x9c
	float AnimMetadataWeight; // 0xac
	int32_t AnimMetaDataUpdateTag; // 0xb0
	float BoneScale; // 0xb4
	int32_t ControlTickTag; // 0xb8
	int32_t IgnoreAtOrAboveLOD; // 0xbc
	ObjectProperty NextControl; // 0xc0
	int32_t ControlPosX; // 0xc8
	int32_t ControlPosY; // 0xcc
};

struct UTgAIBehaviorCondition_CombatTargetHealthPercent {
	float HealthPct; // 0x98
};

struct UTgSeqEvent_BurnCardPurchased {
	int32_t nFilledSlots; // 0x128
	char bAllBurnSlotsFull : 1; // 0x12c
};

struct ATgPickupFactory {
	char bRotatingPickup : 1; // 0x3a4
	float YawRotationRate; // 0x3a8
	ObjectProperty TeamOwner[0x4]; // 0x3ac
	ComponentProperty BaseMesh; // 0x3cc
};

struct ATgDevice_QuadWield {
	FVector m_vProjectileSpawnOffset3; // 0xafc
	FVector m_vProjectileSpawnOffset4; // 0xb08
	int32_t m_nWeaponFireNumber; // 0xb14
};

struct ACrowdAgentBase {
	FPointer VfTable_IInterface_NavigationHandle; // 0x280
};

struct UUIDataPlayer {
	FString sName; // 0x60
	FString sLFPMessage; // 0x70
	int32_t nLevel; // 0x80
	int32_t nMasteryLevel; // 0x84
	Fdword dwVIPTier; // 0x88
	Fdword dwPlayerId; // 0x8c
	FQWord qwUserId; // 0x90
	Fdword dwPortalId; // 0x98
	Fdword dwAvatarId; // 0x9c
	Fdword dwTitleId; // 0xa0
	char bIsSelf : 1; // 0xa4
	char bIsPortalReservedPartySlot : 1; // 0xa4
	char bIsVIP : 1; // 0xa4
	Fdword dwReferralPlayMinutes; // 0xa8
	Fdword dwReferralId; // 0xac
	TArray<ObjectProperty> pLeaguePlayers; // 0xb0
};

struct USeqAct_Timer {
	float ActivationTime; // 0x108
	float Time; // 0x10c
};

struct ATgDevice_HealthPack {
	int32_t m_nQueuedShots; // 0xaec
	float m_fQueueGracePeriod; // 0xaf0
	float m_fLastFire; // 0xaf4
};

struct UDownloadableContentManager {
	FPointer VfTable_FTickableObject; // 0x60
	TArray<FPointer> DLCConfigCacheChanges; // 0x68
	TArray<FString> InstalledDLC; // 0x78
	FMap_Mirror NonPackageFilePathMap; // 0x88
	TArray<UObject*> ClassesToReload; // 0xd0
	TArray<ObjectProperty> ObjectsToReload; // 0xe0
	TArray<FString> QueuedFullyLoadPackageInis; // 0xf0
	ObjectProperty GameEngine; // 0x100
	char bWantsToRefreshDLC : 1; // 0x108
	char bGameDidAuthorizedDLCRefresh : 1; // 0x108
	DelegateProperty __OnRefreshComplete__Delegate; // 0x10c
};

struct AWindPointSource {
	ComponentProperty Component; // 0x280
};

struct UParticleModuleTrailTaper {
	ETrailTaperMethod TaperMethod; // 0x68
	FRawDistributionFloat TaperFactor; // 0x6c
};

struct UMaterialExpressionOneMinus {
	FExpressionInput Input; // 0xb0
};

struct USeqAct_LevelStreaming {
	ObjectProperty Level; // 0x124
	FName LevelName; // 0x12c
	char bStatusIsOk : 1; // 0x134
};

struct UTgDeviceForm_GrapplingHook {
	char m_bBeamActive : 1; // 0x2bc
	char m_bHookInterrupted : 1; // 0x2bc
	ObjectProperty m_BeamTarget; // 0x2c0
	FVector m_vBeamTargetLocation; // 0x2c8
	TArray<ObjectProperty> m_HookBlendList1P; // 0x2d4
	TArray<ObjectProperty> m_HookBlendList3P; // 0x2e4
};

struct ATgAIController_BehaviorMapNpc {
	TArray<FThreatEntry> ThreatList; // 0x90c
	char bThreatListDecays : 1; // 0x91c
	char bOutsideLeash : 1; // 0x91c
	char bHadCombatTarget : 1; // 0x91c
	float LeashDistance; // 0x920
	ObjectProperty LeashVolume; // 0x924
	TArray<ObjectProperty> LeashActors; // 0x92c
};

struct UTgGameplayCurvesSet_Simple {
	FRawDistributionFloat PrimaryCurve; // 0x64
	FName PrimaryCurveTabName; // 0x88
	FName PrimaryCurveName; // 0x90
};

struct UUIData_LTIAggregate {
	TArray<ObjectProperty> m_Items; // 0x60
};

struct USeqAct_WaitForLevelsVisible {
	TArray<FName> LevelNames; // 0x120
	char bShouldBlockOnLoad : 1; // 0x130
};

struct UTgGameplayCurvesSet {
	ECurveSetTypes CurveSetType; // 0x60
};

struct UTgAIBehaviorCondition_CombatTargetPolymorphState {
	EPolymorphType PolymorphState; // 0x98
};

struct UInterpTrackMove {
	FInterpCurveVector PosTrack; // 0xa0
	FInterpCurveVector EulerTrack; // 0xb4
	FInterpLookupTrack LookupTrack; // 0xc8
	FName LookAtGroupName; // 0xd8
	float LinCurveTension; // 0xe0
	float AngCurveTension; // 0xe4
	char bUseQuatInterpolation : 1; // 0xe8
	char bShowArrowAtKeys : 1; // 0xe8
	char bDisableMovement : 1; // 0xe8
	char bShowTranslationOnCurveEd : 1; // 0xe8
	char bShowRotationOnCurveEd : 1; // 0xe8
	char bHide3DTrack : 1; // 0xe8
	char bUseRawActorTMforRelativeToInitial : 1; // 0xe8
	EInterpTrackMoveFrame MoveFrame; // 0xec
	EInterpTrackMoveRotMode RotMode; // 0xed
};

struct UTgAkAudioManagement {
	FAkMeterCallbackState m_MeterCallbackSlots[0x10]; // 0x60
	TArray<Fdword> dwAllBusses; // 0x160
	char m_bInitialized : 1; // 0x170
};

struct ULandscapeInfo {
	FGuid LandscapeGuid; // 0x60
	TMap<None, None> LayerInfoMap; // 0x70
	FPointer DataInterface; // 0xb8
	TMap<None, None> XYtoComponentMap; // 0xc0
	TMap<None, None> XYtoCollisionComponentMap; // 0x108
	ObjectProperty LandscapeProxy; // 0x150
	TMap<None, None> XYtoAddCollisionMap; // 0x158
	FSet_Mirror Proxies; // 0x1a0
	FSet_Mirror SelectedComponents; // 0x1e8
	FSet_Mirror SelectedCollisionComponents; // 0x230
	FSet_Mirror SelectedRegionComponents; // 0x278
	TMap<None, None> SelectedRegion; // 0x2c0
	char bIsValid : 1; // 0x308
};

struct USeqAct_SetFloat {
	float Target; // 0x108
	TArray<float> Value; // 0x10c
};

struct USeqEvent_MobileButton {
	char bWasActiveLastFrame : 1; // 0x138
	char bSendPressedOnlyOnTouchDown : 1; // 0x138
	char bSendPressedOnlyOnTouchUp : 1; // 0x138
};

struct UActorFactoryAkAmbientSound {
	ObjectProperty AmbientEvent; // 0x9c
};

struct UTgAnimNodeSimpleTransitioner {
	int32_t m_nDeviceId; // 0x144
	char m_bConfigureBasedOnDevice : 1; // 0x148
	char m_bIgnoreFireMode : 1; // 0x148
	int32_t m_nNumberOfStances; // 0x14c
	FName m_StanceBaseName; // 0x150
	FName m_TransitionBaseName; // 0x158
	float m_BlendTransitionDuration; // 0x160
};

struct ATgDeploy_EffectAura {
	float r_fRadiusScale; // 0x448
	TArray<ObjectProperty> m_TouchingActors; // 0x44c
	TArray<ObjectProperty> m_AffectedActors; // 0x45c
	float m_fLastBlockedByBlockersTime; // 0x46c
	float m_fMinBlockedByBlockersTime; // 0x470
	TArray<ObjectProperty> m_BlockedActors; // 0x474
	ObjectProperty m_CollisionProxy; // 0x484
};

struct ATgBotFactory {
	eBotSelection LocationSelection; // 0x2c0
	TArray<ObjectProperty> LocationList; // 0x2c4
	int32_t s_nCurLocationIndex; // 0x2d4
	ObjectProperty SafetyLocation; // 0x2d8
	char ShouldTraceSpawnLocationToFloor : 1; // 0x2e0
	char bUseSmiteStaggerSpawning : 1; // 0x2e0
	char bSpawnAsSquad : 1; // 0x2e0
	char bAutoSpawn : 1; // 0x2e0
	char m_bFirstSpawn : 1; // 0x2e0
	char bBulkSpawn : 1; // 0x2e0
	char bRespawn : 1; // 0x2e0
	char bStartBotsInIntroState : 1; // 0x2e0
	char bHasDifferentInitialIntro : 0; // 0x2e0
	char m_bFirstSpawnWave : 0; // 0x2e0
	char m_bIgnoreCollisionOnSpawn : 0; // 0x2e0
	char m_bUseCollisionHeightForSpawnPlacement : 0; // 0x2e0
	int32_t nBotCount; // 0x2e4
	int32_t nCurrentCount; // 0x2e8
	int32_t nActiveCount; // 0x2ec
	int32_t nTotalSpawns; // 0x2f0
	TArray<FBotSpawnCounter> CurrentBotSpawnCount; // 0x2f4
	int32_t nLane; // 0x304
	int32_t nNavPointsToSkipForPathing; // 0x308
	float fStaggerSpawnDelay; // 0x30c
	ObjectProperty s_CurrentSquad; // 0x310
	UTgAISquad* m_SquadClass; // 0x318
	int32_t m_nLocationId; // 0x320
	int32_t nSpawnTableId; // 0x324
	int32_t nDefaultSpawnTableId; // 0x328
	float fSpawnDelay; // 0x32c
	TArray<FSpawnQueueEntry> m_SpawnQueue; // 0x330
	ObjectProperty m_SpawnVolume; // 0x340
	int32_t m_nLastGroup; // 0x348
	float fSpawnHealthPercent; // 0x34c
	float m_fEncounterDespawnTime; // 0x350
	float fIntroductionDuration; // 0x354
	float fInitialIntroductionDuration; // 0x358
	ObjectProperty m_StartingSpline; // 0x35c
	ComponentProperty m_RespawnIndicator; // 0x364
	ObjectProperty m_RespawnIndicatorMIC; // 0x36c
	ObjectProperty m_TextureNormal; // 0x374
	float fLastKillTime; // 0x37c
	float fRespawnDelay; // 0x380
};

struct ATgAIController_BehaviorLaneNpc {
	ObjectProperty GoalTarget; // 0x90c
	char bDespawnOnLoseCombatTarget : 1; // 0x914
	char bIsBehindSquad : 1; // 0x914
	char bTooFarFromLane : 1; // 0x914
};

struct ATgPlayOfTheGameCamera {
	ObjectProperty m_ViewTarget; // 0x420
	char m_bActive : 1; // 0x428
	float m_fRemainingTweenTime; // 0x42c
	float m_fTotalTweenTime; // 0x430
	FTPOV m_TweenSourcePOV; // 0x434
	FVector m_vRelativeLocation; // 0x458
	FVector m_vRelativeRotation; // 0x464
	FVector m_vRelativeLocationOffset; // 0x470
	FVector m_vRelativeRotationOffset; // 0x47c
};

struct UUIScene_UIJoinCustomPopup {
	char m_bHaveInput : 1; // 0x154
	ObjectProperty m_mcInputMatchName; // 0x158
	ObjectProperty m_mcInputPass; // 0x160
	ObjectProperty m_mcInputJoin; // 0x168
	ObjectProperty m_mcError; // 0x170
};

struct UTgAnimNodeTargeting {
	TG_EQUIP_POINT m_EquipPoint; // 0x168
	char m_bResetOnRelevant : 1; // 0x16c
	char m_bDoneTargeting : 1; // 0x16c
};

struct ATgDeploy_TurretLinked {
	ObjectProperty m_ParentTurret; // 0x448
};

struct UUIComponent_Avatar {
	ObjectProperty m_mcTexture; // 0x120
	ObjectProperty m_mcLoadingSpinner; // 0x128
};

struct USeqAct_AkLoadBank {
	char Async : 1; // 0x120
	char bWaitingCallback : 1; // 0x120
	ObjectProperty Bank; // 0x124
	int32_t Signal; // 0x12c
};

struct UTgAnimNodeBlendByPhysics {
	ObjectProperty m_TgPawn; // 0x144
	EPhysics m_LastPhysics; // 0x14c
	EPhysics m_CurrentPhysics; // 0x14d
	int32_t m_CurrentPhysicsChildIndex; // 0x150
	TArray<EPhysics> m_PhysicsChildren; // 0x154
	char m_bDirectUnspecifiedPhysicsThroughChild0 : 1; // 0x164
	float DefaultBlendTime; // 0x168
	TArray<FChildrenBlendInfo> m_ChildrenBlendInfo; // 0x16c
};

struct ATgDeploy_ChurchillTurret {
	FVector m_vDroneSocketOffset; // 0x448
	char r_bLeftDrone : 1; // 0x454
	FVector m_vCurrentAccumulatedVelocity; // 0x458
};

struct UTgRealmArmor {
	ObjectProperty ArmorArmArch; // 0x60
	ObjectProperty ArmorChestArch; // 0x68
	ObjectProperty ArmorHeadArch; // 0x70
	ObjectProperty ArmorLegArch; // 0x78
	float fHeadTransitionTime; // 0x80
	float fChestTransitionTime; // 0x84
	float fArmTransitionTime; // 0x88
	float fLegTransitionTime; // 0x8c
	TArray<FArmorTransitionInfo> m_TransitionInfo; // 0x90
	ObjectProperty m_pBaseMIC; // 0xa0
	ObjectProperty m_pArmorMIC; // 0xa8
};

struct ATgDevice_DualFire {
	DelegateProperty __InterruptFiringDelegate__Delegate; // 0xaf4
};

struct ATgVisibilityVolume {
	ObjectProperty m_PlayerCameraParticleSystem; // 0x2bc
	ObjectProperty m_PlayerCameraInvisibleParticleSystem; // 0x2c4
};

struct UMaterialExpressionParticleMacroUV {
	char bUseViewSpace : 1; // 0xb0
};

struct UActorFactoryDynamicSM {
	ObjectProperty StaticMesh; // 0x9c
	FVector DrawScale3D; // 0xa4
	char bNoEncroachCheck : 1; // 0xb0
	char bNotifyRigidBodyCollision : 1; // 0xb0
	char bBlockRigidBody : 1; // 0xb0
	char bUseCompartment : 1; // 0xb0
	char bCastDynamicShadow : 1; // 0xb0
	ECollisionType CollisionType; // 0xb4
};

struct UUIComponent_BoosterItemInfo {
	int32_t m_nDisplayedItemId; // 0x120
	char m_bUseRentalOffset : 1; // 0x124
	ObjectProperty m_mcTitle; // 0x128
	ObjectProperty m_mcTitleIcon; // 0x130
	ObjectProperty m_mcDesc; // 0x138
	ObjectProperty m_mcRentalText; // 0x140
	ObjectProperty m_mcRentalDuration; // 0x148
	ObjectProperty m_pBenefits; // 0x150
};

struct UUIComponent_ItemGeneric {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_mcOwned; // 0x128
	ObjectProperty m_mcSale; // 0x130
	ObjectProperty m_mcTexture; // 0x138
	ObjectProperty m_mcRarity; // 0x140
	ObjectProperty m_mcFrame; // 0x148
	ObjectProperty m_mcValueBanner; // 0x150
	ObjectProperty m_pPrices; // 0x158
	ObjectProperty m_pRealMoneyPrice; // 0x160
};

struct UUIComponent_ReferralReward {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcIcon; // 0x128
	ObjectProperty m_mcAddition; // 0x130
	ObjectProperty m_mcCurrency; // 0x138
	ObjectProperty m_mcAmount; // 0x140
	ObjectProperty m_mcFrame; // 0x148
};

struct UTgAIObstacleAvoidance {
	FPointer ObstacleGrid; // 0x60
	FObstacleQueryCache CachedAvoidance; // 0x68
	TArray<ObjectProperty> CachedBlockers; // 0x94
	TArray<ObjectProperty> CachedLandscapes; // 0xa4
	ObjectProperty OuterController; // 0xb4
	char bRenderingIsDirty : 1; // 0xbc
};

struct USeqEvent_ParticleEvent {
	EParticleEventOutputType EventType; // 0x128
	FVector EventPosition; // 0x12c
	float EventEmitterTime; // 0x138
	FVector EventVelocity; // 0x13c
	float EventParticleTime; // 0x148
	FVector EventNormal; // 0x14c
	char UseRelfectedImpactVector : 1; // 0x158
};

struct ATgDevice_LongbowInhand {
	float s_fLastFireHoldPct; // 0xaec
	float m_fFireReleasePercent; // 0xaf0
	float m_fImpalerReticleAnimationTimer; // 0xaf4
	float m_fReticleReleaseAnimationDuration; // 0xaf8
	float m_fImpalerReticleFadeInDuration; // 0xafc
	float m_fImpalerReticleFadeOutDuration; // 0xb00
	float m_fImpalerReticleGrowth; // 0xb04
	FVector m_vProjectileSpawnOffsetPlanted; // 0xb08
};

struct UNavMeshPath_WithinDistanceEnvelope {
	float MaxDistance; // 0x78
	float MinDistance; // 0x7c
	char bSoft : 1; // 0x80
	char bOnlyThrowOutNodesThatLeaveEnvelope : 1; // 0x80
	float SoftStartPenalty; // 0x84
	FVector EnvelopeTestPoint; // 0x88
};

struct UPBRuleNodeExtractTopBottom {
	float ExtractTopZ; // 0x70
	float ExtractNotTopZ; // 0x74
	float ExtractBottomZ; // 0x78
	float ExtractNotBottomZ; // 0x7c
};

struct UUIComponent_EsportsMatchupEntry {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcTeam[0x2]; // 0x128
	ObjectProperty m_mcTeamName[0x2]; // 0x138
	ObjectProperty m_mcTeamCheck[0x2]; // 0x148
	ObjectProperty m_mcTeamScore[0x2]; // 0x158
	ObjectProperty m_mcAvailable; // 0x168
	ObjectProperty m_pWinnings; // 0x170
	char m_bShowSpoilers : 1; // 0x178
};

struct UTgAIBehaviorAction_UseConsumable {
	EConsumableType ConsumableType; // 0x94
};

struct UUIDataAcquisitionQueue {
	TArray<ObjectProperty> m_Acquisitions; // 0x60
};

struct UTgInventoryObject_Listen_ActiveDuringAbility_WhileOutOfCombat {
	char m_bPawnInCombat : 1; // 0xd8
};

struct UTgAnimTurnInPlace_Rotator {
	TArray<ObjectProperty> c_TurnInPlaceNodes; // 0x114
	ObjectProperty m_TgPawn; // 0x124
};

struct ASplineLoftActor {
	float ScaleX; // 0x2e8
	float ScaleY; // 0x2ec
	TArray<ComponentProperty> SplineMeshComps; // 0x2f0
	ObjectProperty DeformMesh; // 0x300
	TArray<ObjectProperty> DeformMeshMaterials; // 0x308
	float Roll; // 0x318
	FVector WorldXDir; // 0x31c
	FVector2D Offset; // 0x328
	char bSmoothInterpRollAndScale : 1; // 0x330
	char bAcceptsLights : 1; // 0x330
	ComponentProperty MeshLightEnvironment; // 0x334
	float MeshMaxDrawDistance; // 0x33c
};

struct UParticleModuleVelocityInheritParent {
	FRawDistributionVector Scale; // 0x6c
};

struct ATgPlayerCountVolume {
	int32_t PlayerCountTarget; // 0x2bc
	int32_t TaskForceNumber; // 0x2c0
	int32_t MessageId; // 0x2c4
	TArray<ObjectProperty> Players; // 0x2c8
	char Enabled : 1; // 0x2d8
};

struct UDecalComponent {
	ObjectProperty DecalMaterial; // 0x24c
	float Width; // 0x254
	float Height; // 0x258
	float TileX; // 0x25c
	float TileY; // 0x260
	float OffsetX; // 0x264
	float OffsetY; // 0x268
	float DecalRotation; // 0x26c
	float FieldOfView; // 0x270
	float NearPlane; // 0x274
	float FarPlane; // 0x278
	FVector Location; // 0x27c
	FRotator Orientation; // 0x288
	FVector HitLocation; // 0x294
	FVector HitNormal; // 0x2a0
	FVector HitTangent; // 0x2ac
	FVector HitBinormal; // 0x2b8
	char bNoClip : 1; // 0x2c4
	char bFadeOutAtFarPlane : 1; // 0x2c4
	char bStaticDecal : 1; // 0x2c4
	char m_bIsGameplayDecal : 1; // 0x2c4
	char bProjectOnBackfaces : 1; // 0x2c4
	char bProjectOnHidden : 1; // 0x2c4
	char bProjectOnBSP : 1; // 0x2c4
	char bProjectOnStaticMeshes : 1; // 0x2c4
	char bProjectOnSkeletalMeshes : 0; // 0x2c4
	char bProjectOnTerrain : 0; // 0x2c4
	char bFlipBackfaceDirection : 0; // 0x2c4
	char bMovableDecal : 0; // 0x2c4
	char bHasBeenAttached : 0; // 0x2c4
	char bDecalMaterialSetAtRunTime : 0; // 0x2c4
	ComponentProperty HitComponent; // 0x2c8
	FName HitBone; // 0x2d0
	int32_t HitNodeIndex; // 0x2d8
	int32_t HitLevelIndex; // 0x2dc
	int32_t FracturedStaticMeshComponentIndex; // 0x2e0
	TArray<int32_t> HitNodeIndices; // 0x2e4
	TArray<FDecalReceiver> DecalReceivers; // 0x2f4
	TArray<FPointer> StaticReceivers; // 0x304
	FPointer ReleaseResourcesFence; // 0x314
	TArray<FPlane> Planes; // 0x31c
	float DepthBias; // 0x32c
	float SlopeScaleDepthBias; // 0x330
	float OrbisDepthBias; // 0x334
	float OrbisSlopeScaleDepthBias; // 0x338
	int32_t SortOrder; // 0x33c
	float BackfaceAngle; // 0x340
	FVector2D BlendRange; // 0x344
	float StreamingDistanceMultiplier; // 0x34c
	EDecalTransform DecalTransform; // 0x350
	EFilterMode FilterMode; // 0x351
	TArray<ObjectProperty> Filter; // 0x354
	TArray<ComponentProperty> ReceiverImages; // 0x364
	FVector ParentRelativeLocation; // 0x374
	FRotator ParentRelativeOrientation; // 0x380
	FMatrix ParentRelLocRotMatrix; // 0x390
};

struct UTexture2DComposite {
	TArray<FSourceTexture2DRegion> SourceRegions; // 0x100
	int32_t MaxTextureSize; // 0x110
	int32_t DestSizeX; // 0x114
	int32_t DestSizeY; // 0x118
};

struct APComPerformanceCaptureGame {
	ObjectProperty BasePerformanceCapture; // 0x4cc
	EPComPerformanceCaptureState CurrentCaptureState; // 0x4d4
	TArray<ObjectProperty> NodesToCapture; // 0x4d8
	TArray<FPComPerformanceCaptureStatsPerNode> StatsPerNode; // 0x4e8
};

struct UUIComponent_Quest {
	ObjectProperty m_pQuestPanelButton; // 0x120
	ObjectProperty m_pQuestDiscardButton; // 0x128
	ObjectProperty m_mcProgressFrame; // 0x130
	ObjectProperty m_mcQuestReward; // 0x138
	ObjectProperty m_mcQuestProgressBar; // 0x140
	ObjectProperty m_mcQuestProgressMask; // 0x148
	ObjectProperty m_mcQuestTitle; // 0x150
	ObjectProperty m_mcQuestType; // 0x158
	ObjectProperty m_mcQuestIconRendered; // 0x160
	ObjectProperty m_mcQuestIcon; // 0x168
	ObjectProperty m_mcFWOTDIcon; // 0x170
	ObjectProperty m_mcGlow; // 0x178
	ObjectProperty m_mcNew; // 0x180
	ObjectProperty m_mcGoalSequences[0x7]; // 0x188
	ObjectProperty m_GoalSequenceBar; // 0x1c0
	ObjectProperty m_mcQuestChestIcon; // 0x1c8
	ObjectProperty m_mcRewardItem; // 0x1d0
	ObjectProperty m_mcRewardItemRarity; // 0x1d8
	ObjectProperty m_mcRewardItemIcon; // 0x1e0
	ObjectProperty m_mcRewardItemImageStack; // 0x1e8
	ObjectProperty m_mcRewardItemTexture; // 0x1f0
	ObjectProperty m_mcRewardItemName; // 0x1f8
	ObjectProperty m_mcRewardSubtitle; // 0x200
	ObjectProperty m_mcQuestProgressText; // 0x208
	ObjectProperty m_mcQuestDescription; // 0x210
	ObjectProperty m_mcQuestRewardAmount; // 0x218
	ObjectProperty m_mcQuestRewardCurrency1; // 0x220
	ObjectProperty m_mcQuestRewardAmount1; // 0x228
	float m_fSequenceOrigX; // 0x230
	float m_fSequenceOrigY; // 0x234
	float m_fSequenceOrigWidth; // 0x238
};

struct UTgAIBehaviorAction_FollowCombatTarget {
	TG_EQUIP_POINT DeviceSlot; // 0x9c
};

struct UTgSeqAct_SetSkelPosture {
	TG_POSTURE m_Posture; // 0x108
};

struct UUIComponent_ShopListSectionHeader {
	FString m_sTimeLeft; // 0x120
	ObjectProperty m_mcTF; // 0x130
	ObjectProperty m_mcTimeLeft; // 0x138
	ObjectProperty m_mcFrame; // 0x140
	ObjectProperty m_pCTA; // 0x148
};

struct ASceneCaptureReflectActor {
	ComponentProperty StaticMesh; // 0x288
	ObjectProperty ReflectMaterialInst; // 0x290
};

struct USeqAct_CastToFloat {
	int32_t Value; // 0x108
	float FloatResult; // 0x10c
};

struct UParticleModuleTypeDataBeam {
	EBeamMethod BeamMethod; // 0x68
	EBeamEndPointMethod EndPointMethod; // 0x69
	FRawDistributionFloat Distance; // 0x6c
	FRawDistributionVector EndPoint; // 0x90
	int32_t TessellationFactor; // 0xb4
	FRawDistributionFloat EmitterStrength; // 0xb8
	FRawDistributionFloat TargetStrength; // 0xdc
	FRawDistributionVector EndPointDirection; // 0x100
	int32_t TextureTile; // 0x124
	char RenderGeometry : 1; // 0x128
	char RenderDirectLine : 1; // 0x128
	char RenderLines : 1; // 0x128
	char RenderTessellation : 1; // 0x128
};

struct ATgDevice_WYRMJets {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
	ObjectProperty m_CachedBoosterDevice; // 0xaf4
};

struct UTgAIBehaviorAction_StopDevice {
	TG_EQUIP_POINT DeviceToUse; // 0x94
};

struct ATgGameLaunch {
	FString LoginName; // 0x4cc
	FString LoginPwd; // 0x4dc
	char SaveLoginName : 1; // 0x4ec
};

struct UTgAIBehaviorAction_LookAtCombatTarget {
	char bAllowAimNose : 1; // 0x94
	char bHeadShot : 1; // 0x94
};

struct ATgProj_GrumpyBomb {
	ComponentProperty m_Silhouette; // 0x56c
	char m_bSilhouetteInitialized : 1; // 0x574
	char m_bSilhouetteAllowed : 1; // 0x574
	float m_fPostLandDurationAccelerant; // 0x578
};

struct USeqAct_MobileRemoveInputZone {
	FString ZoneName; // 0x108
};

struct UGFxEngine {
	TArray<FGCReference> GCReferences; // 0x60
	int32_t RefCount; // 0x70
	TArray<FName> ForceGarbageCollectUponReleaseTextures; // 0x74
};

struct USeqAct_SetSkelControlTarget {
	FName SkelControlName; // 0x108
	TArray<ObjectProperty> TargetActors; // 0x110
};

struct UTgImpactFx {
	float c_fMaxFxDistance; // 0x60
	char c_bAlignToSurfaceNormal : 1; // 0x64
	FIMPACT_FX c_EmptyImpact; // 0x68
	TArray<FIMPACT_FX> c_Impacts; // 0x9c
};

struct ATgDevice_ChainLightning {
	ObjectProperty m_CachedInhand; // 0xb04
};

struct UTgEffectGroup {
	int32_t m_nType; // 0x60
	ObjectProperty m_Target; // 0x64
	ObjectProperty m_Instigator; // 0x6c
	int32_t m_nEffectGroupId; // 0x74
	float m_fLifeTime; // 0x78
	float m_fModLifeTime; // 0x7c
	float m_fLifeTimeIncreaseFromInstigator; // 0x80
	float m_fApplyInterval; // 0x84
	TArray<ObjectProperty> m_Effects; // 0x88
	int32_t m_nDamageType; // 0x98
	AttackType m_eAttackType; // 0x9c
	EStunType m_StunType; // 0x9d
	char m_bIsManaged : 1; // 0xa0
	char m_bHasStealthEffect : 1; // 0xa0
	char m_bDoesDamage : 1; // 0xa0
	char m_bDoesDamageOverTime : 1; // 0xa0
	char m_bContagious : 1; // 0xa0
	char s_bActiveFlag : 1; // 0xa0
	char s_bCriticalHitFlag : 1; // 0xa0
	char m_bDeviceSpecificFlag : 1; // 0xa0
	char m_bHasVisual : 0; // 0xa0
	char m_bSupportsEffectSimulation : 0; // 0xa0
	float m_fPercAbsorbedDamage; // 0xa4
	int32_t m_nApplicationType; // 0xa8
	float m_fApplicationValue; // 0xac
	float m_fApplicationChance; // 0xb0
	int32_t m_nApplicationCategoryCode; // 0xb4
	int32_t m_nBehaviorCategoryCode; // 0xb8
	int32_t m_nReqDeviceInstanceId; // 0xbc
	float m_fBuffValue; // 0xc0
	float m_fPhysicalPowerScaling; // 0xc4
	float m_fMagicalPowerScaling; // 0xc8
	float m_fLifetimeScaling; // 0xcc
	float m_fLifetimeMax; // 0xd0
	int32_t m_nScalingType; // 0xd4
	int32_t m_nTargetType; // 0xd8
	int32_t m_nTargetAffectsType; // 0xdc
	int32_t m_nHitSpecialSituationalType; // 0xe0
	int32_t m_nNumStacks; // 0xe4
	int32_t m_nNumMaxStacks; // 0xe8
	ObjectProperty s_NonContagiousEffectGroup; // 0xec
	FImpactInfo m_Impact; // 0xf4
	int32_t m_nPosture; // 0x174
	int32_t m_nFxAppliedId; // 0x178
	FName m_nmDisplayGroup; // 0x17c
	int32_t s_ManagedEffectListIndex; // 0x184
	ObjectProperty s_OwnerEffectManager; // 0x188
	FName m_nmDamageTypeClass; // 0x190
	int32_t m_nSourceDeviceInstId; // 0x198
	int32_t m_nSourceItemId; // 0x19c
	float s_fEGArmorHealth; // 0x1a0
	float s_fEGArmorHealthMax; // 0x1a4
	float s_fEGShieldHealth; // 0x1a8
	float s_fEGShieldHealthMax; // 0x1ac
	ObjectProperty m_Waveform; // 0x1b0
	FPointer m_pEffectGroupSetup; // 0x1b8
	FLifeTimeCalcInfo m_LastLifeTimeCalcInfo; // 0x1c0
};

struct UTgSeqAct_SetUITextBox {
	int32_t TextBox_MessageID; // 0x108
	char TextBox_TargetSecondary : 1; // 0x10c
	char TextBox_UseDuration : 1; // 0x10c
	char TextBox_AllowEscape : 1; // 0x10c
	AlertType TextBox_MessageType; // 0x110
};

struct ATgDeploy_WardersField {
	float r_fRadiusForFX; // 0x47c
	float r_fRadiusScaleForDecal; // 0x480
	char r_bEarthenGuardActive : 1; // 0x484
};

struct AGameCrowdInteractionPoint {
	char bIsEnabled : 1; // 0x280
	ComponentProperty CylinderComponent; // 0x284
};

struct UTgSeqAct_HackBot {
	ObjectProperty m_ControlPawn; // 0x108
};

struct UParticleModuleMeshRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct USoundCue {
	FName SoundClass; // 0x60
	ESoundClassName SoundClassName; // 0x68
	char bDebug : 1; // 0x6c
	char m_bFadeOutWhenStopped : 1; // 0x6c
	ObjectProperty FirstNode; // 0x70
	TMap<None, None> EditorData; // 0x78
	float MaxAudibleDistance; // 0xc0
	float VolumeMultiplier; // 0xc4
	float PitchMultiplier; // 0xc8
	float Duration; // 0xcc
	ObjectProperty FaceFXAnimSetRef; // 0xd0
	FString FaceFXGroupName; // 0xd8
	FString FaceFXAnimName; // 0xe8
	int32_t MaxConcurrentPlayCount; // 0xf8
	int32_t CurrentPlayCount; // 0xfc
	FName SoundGroup; // 0x100
	float m_fFadeOutTime; // 0x108
	float m_fFadeToPct; // 0x10c
	float m_fFadePitchToPct; // 0x110
	ObjectProperty m_StereoSoundCue; // 0x114
};

struct UTgInventoryObject_Listen_NearObjective {
	char m_bIsActive : 1; // 0xc8
	ObjectProperty m_CachedCharacterPawn; // 0xcc
};

struct UParticleModuleTypeDataRibbon {
	int32_t MaxTessellationBetweenParticles; // 0x68
	int32_t SheetsPerTrail; // 0x6c
	int32_t MaxTrailCount; // 0x70
	int32_t MaxParticleInTrailCount; // 0x74
	char bDeadTrailsOnDeactivate : 1; // 0x78
	char bDeadTrailsOnSourceLoss : 1; // 0x78
	char bClipSourceSegement : 1; // 0x78
	char bEnablePreviousTangentRecalculation : 1; // 0x78
	char bTangentRecalculationEveryFrame : 1; // 0x78
	char bSpawnInitialParticle : 1; // 0x78
	char bRenderGeometry : 1; // 0x78
	char bRenderSpawnPoints : 1; // 0x78
	char bRenderTangents : 0; // 0x78
	char bRenderTessellation : 0; // 0x78
	char bEnableTangentDiffInterpScale : 0; // 0x78
	ETrailsRenderAxisOption RenderAxis; // 0x7c
	float TangentSpawningScalar; // 0x80
	float TilingDistance; // 0x84
	float DistanceTessellationStepSize; // 0x88
	float TangentTessellationScalar; // 0x8c
};

struct UTgAnimNotify_ToggleSocketSpecialFX {
	FName m_DisplayGroupName; // 0x68
	int32_t m_EquipSlot; // 0x70
	char m_bActivateFxGroup : 1; // 0x74
};

struct UDistributionVectorUniformRange {
	FVector MaxHigh; // 0x7c
	FVector MaxLow; // 0x88
	FVector MinHigh; // 0x94
	FVector MinLow; // 0xa0
};

struct UMaterialInterface {
	FRenderCommandFence_Mirror ParentRefFence; // 0x60
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x64
	char bHasQualitySwitch : 1; // 0x80
	char bRunTrimmingTool : 1; // 0x80
	char bUseCachedCircleVerts : 1; // 0x80
	char bScanRedChannel : 1; // 0x80
	char bScanGreenChannel : 1; // 0x80
	char bScanBlueChannel : 1; // 0x80
	char bScanAlphaChannel : 1; // 0x80
	char bClearData : 1; // 0x80
	char bAutoFlattenMobile : 0; // 0x80
	char bAutoFlattenMobileNormalTexture : 0; // 0x80
	char bMobileAllowFog : 0; // 0x80
	char bGenerateSubUV : 0; // 0x80
	char bUseMobileSpecular : 0; // 0x80
	char bUseMobileVertexSpecular : 0; // 0x80
	char bUseMobilePixelSpecular : 0; // 0x80
	char bUseMobileBumpOffset : 0; // 0x80
	char bLockColorBlending : 0; // 0x80
	char bUseMobileUniformColorMultiply : 0; // 0x80
	char bUseMobileVertexColorMultiply : 0; // 0x80
	char bUseMobileDetailNormal : 0; // 0x80
	char bBaseTextureTransformed : 0; // 0x80
	char bEmissiveTextureTransformed : 0; // 0x80
	char bNormalTextureTransformed : 0; // 0x80
	char bMaskTextureTransformed : 0; // 0x80
	char bDetailTextureTransformed : 0; // 0x80
	char bUseMobileWaveVertexMovement : 0; // 0x80
	char bMobileEnableBounceLight : 0; // 0x80
	char bUseMobileLandscapeMonochromeLayerBlending : 0; // 0x80
	TArray<FVector2D> TrimmedVertices; // 0x84
	FColor FlattenBackgroundColor; // 0x94
	ObjectProperty MobileBaseTexture; // 0x98
	ObjectProperty FlattenedTexture; // 0xa0
	EMobileTexCoordsSource MobileBaseTextureTexCoordsSource; // 0xa8
	EMobileAmbientOcclusionSource MobileAmbientOcclusionSource; // 0xa9
	EMobileSpecularMask MobileSpecularMask; // 0xaa
	EMobileEmissiveColorSource MobileEmissiveColorSource; // 0xab
	EMobileValueSource MobileEmissiveMaskSource; // 0xac
	EMobileValueSource MobileEnvironmentMaskSource; // 0xad
	EMobileEnvironmentBlendMode MobileEnvironmentBlendMode; // 0xae
	EMobileValueSource MobileRimLightingMaskSource; // 0xaf
	EMobileTexCoordsSource MobileMaskTextureTexCoordsSource; // 0xb0
	EMobileAlphaValueSource MobileAlphaValueSource; // 0xb1
	EMobileTexCoordsSource MobileDetailTextureTexCoordsSource; // 0xb2
	EMobileTextureBlendFactorSource MobileTextureBlendFactorSource; // 0xb3
	EMobileColorMultiplySource MobileColorMultiplySource; // 0xb4
	ObjectProperty MobileNormalTexture; // 0xb8
	float SubUVFrameRate; // 0xc0
	int32_t SubUVFrameCountAlongAxes; // 0xc4
	float SubUVFrameSize; // 0xc8
	FLinearColor MobileSpecularColor; // 0xcc
	float MobileSpecularPower; // 0xdc
	ObjectProperty MobileEmissiveTexture; // 0xe0
	FLinearColor MobileEmissiveColor; // 0xe8
	ObjectProperty MobileEnvironmentTexture; // 0xf8
	float MobileEnvironmentAmount; // 0x100
	FLinearColor MobileEnvironmentColor; // 0x104
	float MobileEnvironmentFresnelAmount; // 0x114
	float MobileEnvironmentFresnelExponent; // 0x118
	float MobileRimLightingStrength; // 0x11c
	float MobileRimLightingExponent; // 0x120
	FLinearColor MobileRimLightingColor; // 0x124
	float MobileBumpOffsetReferencePlane; // 0x134
	float MobileBumpOffsetHeightRatio; // 0x138
	ObjectProperty MobileMaskTexture; // 0x13c
	float MobileOpacityMultiplier; // 0x144
	ObjectProperty MobileDetailTexture; // 0x148
	ObjectProperty MobileDetailTexture2; // 0x150
	ObjectProperty MobileDetailTexture3; // 0x158
	FLinearColor DefaultUniformColor; // 0x160
	FLinearColor MobileDefaultUniformColor; // 0x170
	float TransformCenterX; // 0x180
	float MobileTransformCenterX; // 0x184
	float TransformCenterY; // 0x188
	float MobileTransformCenterY; // 0x18c
	float PannerSpeedX; // 0x190
	float MobilePannerSpeedX; // 0x194
	float PannerSpeedY; // 0x198
	float MobilePannerSpeedY; // 0x19c
	float RotateSpeed; // 0x1a0
	float MobileRotateSpeed; // 0x1a4
	float FixedScaleX; // 0x1a8
	float MobileFixedScaleX; // 0x1ac
	float FixedScaleY; // 0x1b0
	float MobileFixedScaleY; // 0x1b4
	float SineScaleX; // 0x1b8
	float MobileSineScaleX; // 0x1bc
	float SineScaleY; // 0x1c0
	float MobileSineScaleY; // 0x1c4
	float SineScaleFrequencyMultipler; // 0x1c8
	float MobileSineScaleFrequencyMultipler; // 0x1cc
	float FixedOffsetX; // 0x1d0
	float MobileFixedOffsetX; // 0x1d4
	float FixedOffsetY; // 0x1d8
	float MobileFixedOffsetY; // 0x1dc
	float MobileTangentVertexFrequencyMultiplier; // 0x1e0
	float MobileVerticalFrequencyMultiplier; // 0x1e4
	float MobileMaxVertexMovementAmplitude; // 0x1e8
	float MobileSwayFrequencyMultiplier; // 0x1ec
	float MobileSwayMaxAngle; // 0x1f0
	FVector MobileDirectionalLightDirection; // 0x1f4
	float MobileDirectionalLightBrightness; // 0x200
	FColor MobileDirectionalLightColor; // 0x204
	FVector MobileBounceLightDirection; // 0x208
	float MobileBounceLightBrightness; // 0x214
	FColor MobileBounceLightColor; // 0x218
	float MobileSkyLightBrightness; // 0x21c
	FColor MobileSkyLightColor; // 0x220
	FName MobileLandscapeLayerNames[0x4]; // 0x224
	FColor MobileLandscapeMonochomeLayerColors[0x4]; // 0x244
};

struct USeqAct_ModifyCover {
	TArray<int32_t> Slots; // 0x108
	ECoverType ManualCoverType; // 0x118
	char bManualAdjustPlayersOnly : 1; // 0x11c
};

struct ATgRepInfo_Deployable {
	int32_t r_nHealthCurrent; // 0x280
	int32_t r_nHealthMaximum; // 0x284
	float r_fDeployMaxHealthPCT; // 0x288
	int32_t r_nDeployableId; // 0x28c
	int32_t r_nUniqueDeployableId; // 0x290
	float r_fLifespanInitial; // 0x294
	float r_fLifespanSync; // 0x298
	ObjectProperty r_DeployableOwner; // 0x29c
	ObjectProperty r_InstigatorInfo; // 0x2a4
	ObjectProperty r_TaskforceInfo; // 0x2ac
	char r_bOwnedByTaskforce : 1; // 0x2b4
	char c_bReceivedOwner : 1; // 0x2b4
	char r_bMinimapOnlyOwnerSee : 1; // 0x2b4
	char r_bInDestroyedState : 1; // 0x2b4
	char c_bShowHUDLifespanTimer : 1; // 0x2b4
	FVector r_ApproxLocation; // 0x2b8
	FTG_HUD_INFO c_HudInfo; // 0x2c4
	char r_bVisibleOnMap[0x3]; // 0x2c8
	DeployableOverlayIcon r_eDeployableOverlayIcon; // 0x2cb
	DeployableOverlayState r_eDeployableOverlayState; // 0x2cc
	float r_fVisionRange; // 0x2d0
	int32_t r_nDeployableOverlayDisplayMask; // 0x2d4
	float r_fDeployableOverlayEnemyViewDist; // 0x2d8
	float c_fBarragePercent; // 0x2dc
};

struct ATgDevice_Failsafe {
	ObjectProperty m_RocketBootsDevice; // 0xaec
};

struct UTgDeviceForm_Stasis {
	char m_bNeedsLoopActivation : 1; // 0x2bc
	float m_fFireStartTime; // 0x2c0
	float m_fLoopDelay; // 0x2c4
};

struct ATgDeploy_OppressorMine {
	ObjectProperty m_CachedPawnOwner; // 0x448
	ObjectProperty m_CachedEnemyTaskForce; // 0x450
	ObjectProperty r_CurrentTargets[0x5]; // 0x458
	int32_t m_nBeamFXID; // 0x480
	ObjectProperty m_BeamFXs[0x5]; // 0x484
	char m_bNeedsNetDirtyUpdate : 1; // 0x4ac
	FRotator r_StuckRotation; // 0x4b0
	FVector r_CartOffset; // 0x4bc
	float m_fAmplitudeRadiusScale; // 0x4c8
};

struct UTgAIBehaviorCondition_DistanceFromDamagingDeployable {
	char bMustBeEnemy : 1; // 0x9c
};

struct UUIData_List {
	TArray<ObjectProperty> pData; // 0x60
};

struct UFracturedStaticMeshComponent {
	TArray<char> FragmentNeighborsVisible; // 0x338
	FBox VisibleBox; // 0x348
	char bUseSkinnedRendering : 1; // 0x364
	char bUseVisibleVertsForBounds : 1; // 0x364
	char bTopFragmentsRootNonDestroyable : 1; // 0x364
	char bBottomFragmentsRootNonDestroyable : 1; // 0x364
	float TopBottomFragmentDistThreshold; // 0x368
	ObjectProperty LoseChunkOutsideMaterialOverride; // 0x36c
	float FragmentBoundsMaxZ; // 0x374
	float FragmentBoundsMinZ; // 0x378
	ComponentProperty SkinnedComponent; // 0x37c
};

struct USeqAct_Trace {
	char bTraceActors : 1; // 0x108
	char bTraceWorld : 1; // 0x108
	FVector TraceExtent; // 0x10c
	FVector StartOffset; // 0x118
	FVector EndOffset; // 0x124
	ObjectProperty HitObject; // 0x130
	float Distance; // 0x138
	FVector HitLocation; // 0x13c
};

struct UTgAIBehaviorSensor_Fog {
	float UnsafeRatio; // 0x94
	float SafePercent; // 0x98
};

struct UUIBattlePassLevelUp {
	int32_t m_nOffset; // 0x244
	int32_t m_nHoverItem; // 0x248
	int32_t m_nBundleLevels; // 0x24c
	int32_t m_nPurchaseLevels; // 0x250
	float m_fWaitTime; // 0x254
	float m_fWaitTimer; // 0x258
	float m_fPurchaseFlash; // 0x25c
	float m_fConfirmationTime; // 0x260
	float m_fConfirmationTimer; // 0x264
	char m_bControllerButtonHeld : 1; // 0x268
	char m_bIsShopLevelsBundle : 1; // 0x268
	TArray<int32_t> m_nItems; // 0x26c
	ObjectProperty m_mcBlocker; // 0x27c
	ObjectProperty m_mcPanel; // 0x284
	ObjectProperty m_mcPanelBack; // 0x28c
	ObjectProperty m_mcPanelName; // 0x294
	ObjectProperty m_mcPanelDesc; // 0x29c
	ObjectProperty m_mcPanelType; // 0x2a4
	ObjectProperty m_mcPanelIcon; // 0x2ac
	ObjectProperty m_mcPanelFrame; // 0x2b4
	ObjectProperty m_mcPanelImage; // 0x2bc
	ObjectProperty m_mcPanelLevel; // 0x2c4
	ObjectProperty m_mcPanelTotal; // 0x2cc
	ObjectProperty m_mcPanelTotalCrowns; // 0x2d4
	ObjectProperty m_mcPanelHoverName; // 0x2dc
	ObjectProperty m_mcPanelHoverDesc; // 0x2e4
	ObjectProperty m_mcPanelIconLevelA; // 0x2ec
	ObjectProperty m_mcPanelIconLevelB; // 0x2f4
	ObjectProperty m_mcPanelIconLevelC; // 0x2fc
	ObjectProperty m_mcPanelPurchase; // 0x304
	ObjectProperty m_mcPanelPurchaseFlash; // 0x30c
	ObjectProperty m_mcPanelPurchasePrice; // 0x314
	ObjectProperty m_mcPanelPurchasePriceDiscount; // 0x31c
	ObjectProperty m_mcPanelPurchaseHold; // 0x324
	ObjectProperty m_mcPanelPurchaseMask; // 0x32c
	ObjectProperty m_mcPanelPurchaseKey; // 0x334
	ObjectProperty m_mcPanelPurchaseKeyHoldBack; // 0x33c
	ObjectProperty m_mcPanelArrow[0x2]; // 0x344
	ObjectProperty m_mcItem[0x5]; // 0x354
	ObjectProperty m_mcItemIcon[0x5]; // 0x37c
	ObjectProperty m_mcItemFrame[0x5]; // 0x3a4
	ObjectProperty m_mcItemActive[0x5]; // 0x3cc
	ObjectProperty m_mcItemRarity[0x5]; // 0x3f4
	ObjectProperty m_mcItemTexture[0x5]; // 0x41c
	ObjectProperty m_mcItemIconFrame[0x5]; // 0x444
	ObjectProperty m_pInputGroup; // 0x46c
	ObjectProperty m_pPurchaseGroup; // 0x474
};

struct UParticleModuleRotationRate {
	FRawDistributionFloat StartRotationRate; // 0x68
};

struct UTgAIBehaviorAction_SelectLaneMoveTarget {
	char bMustBeEnemy : 1; // 0x94
	char bMustBePhoenix : 1; // 0x94
	char bMustBeSameLane : 1; // 0x94
};

struct UPComMusicTheme {
	FMusicTrackStruct DefaultTrack; // 0x60
	TArray<FMusicEvent> MusicEvents; // 0x8c
};

struct UUIComponent_ItemStatsEntry {
	FString m_sItemStatsLabels[0x7]; // 0x120
	ObjectProperty m_mcIcon; // 0x190
	ObjectProperty m_mcTF; // 0x198
};

struct ALandscapeProxy {
	FGuid LandscapeGuid; // 0x280
	int32_t MaxLODLevel; // 0x290
	ObjectProperty DefaultPhysMaterial; // 0x294
	float StreamingDistanceMultiplier; // 0x29c
	ObjectProperty LandscapeMaterial; // 0x2a0
	float LODDistanceFactor; // 0x2a8
	TArray<ComponentProperty> LandscapeComponents; // 0x2ac
	TArray<ComponentProperty> CollisionComponents; // 0x2bc
	TMap<None, None> MaterialInstanceConstantMap; // 0x2cc
	TMap<None, None> WeightmapUsageMap; // 0x314
	float StaticLightingResolution; // 0x35c
	ObjectProperty LandscapeActor; // 0x360
	char bIncludeInManualZPrepass : 1; // 0x368
	char bIsProxy : 1; // 0x368
	char bIsSetup : 1; // 0x368
	char bResetup : 1; // 0x368
	char bIsMovingToLevel : 1; // 0x368
	TArray<FName> ActorLayerNames; // 0x36c
	FLightmassPrimitiveSettings LightmassSettings; // 0x37c
	int32_t CollisionMipLevel; // 0x398
	int32_t MobileLODBias; // 0x39c
	TArray<FLandscapeLayerStruct> LayerInfoObjs; // 0x3a0
	int32_t ComponentSizeQuads; // 0x3b0
	int32_t SubsectionSizeQuads; // 0x3b4
	int32_t NumSubsections; // 0x3b8
};

struct UTgSkelCon_CCD_IK_FootPlacement {
	int32_t NumBones; // 0xd0
	int32_t MaxPerBoneIterations; // 0xd4
	int32_t IterationsCount; // 0xd8
	float Precision; // 0xdc
	char bStartFromTail : 1; // 0xe0
	char bNoTurnOptimization : 1; // 0xe0
	char bAllowStretching : 1; // 0xe0
	char bInvertFootUpAxis : 1; // 0xe0
	char bOrientFootToGround : 1; // 0xe0
	char bOnlyEnableForUpAdjustment : 1; // 0xe0
	char m_bUseCachedFootOffset : 1; // 0xe0
	TArray<FJointConstraintInformation> JointConstraints; // 0xe4
	float MaxAngleSteps; // 0xf4
	float MaxStretchSteps; // 0xf8
	float FootOffset; // 0xfc
	EAxis FootUpAxis; // 0x100
	FRotator FootRotOffset; // 0x104
	float MaxUpAdjustment; // 0x110
	float MaxDownAdjustment; // 0x114
	float MaxFootOrientAdjust; // 0x118
	FVector EffectorLocation; // 0x11c
	FVector m_vCachedFootOffset; // 0x128
};

struct UTgAchievement_FromTheGrave {
	int32_t KillerPawnId; // 0x90
};

struct UInterpTrackInstSound {
	float LastUpdatePosition; // 0x60
	ComponentProperty PlayAudioComp; // 0x64
};

struct UGFxAction_GetVariable {
	ObjectProperty Movie; // 0x108
	FString Variable; // 0x110
};

struct UTgDeviceForm_CombatSlide {
	float m_fTransitionTime; // 0x2bc
};

struct UGFxObject {
	FPointer VfTable_FCallbackEventDevice; // 0x60
	int32_t Value[0xc]; // 0x68
	int32_t m_nIndex; // 0x98
	int32_t m_nFunction; // 0x9c
	char m_bMuteSound : 1; // 0xa0
	char m_bOrigVisible : 1; // 0xa0
	char m_bUseCachedDisplayInfo : 1; // 0xa0
	char m_bHasCallbacksBound : 1; // 0xa0
	float m_fAnimSize; // 0xa4
	float m_fOrigX; // 0xa8
	float m_fOrigY; // 0xac
	float m_fOrigWidth; // 0xb0
	float m_fOrigHeight; // 0xb4
	float m_fOrigScaleX; // 0xb8
	float m_fOrigScaleY; // 0xbc
	float m_fOrigAlpha; // 0xc0
	FName m_DebugName; // 0xc4
	FASDisplayInfo m_CachedDisplayInfo; // 0xcc
	TArray<FGFxWidgetBinding> SubWidgetBindings; // 0xf8
	TArray<FGFxObjectPoolEntry> m_GFxObjectPool; // 0x108
};

struct UCloudStorageBaseCloudSaveSystemKVS {
	ObjectProperty CloudStorage; // 0x60
};

struct UApexDestructibleDamageParameters {
	TArray<FDamagePair> DamageMap; // 0x60
};

struct ATgWeaponMeshActor {
	ObjectProperty m_OwningPawn; // 0x280
	UTgSkeletalMeshComponent_Weapon* m_WeaponMesh1PClass; // 0x288
	ComponentProperty m_WeaponMesh1P; // 0x290
	UTgSkeletalMeshComponent_Weapon* m_WeaponMesh3PClass; // 0x298
	ComponentProperty m_WeaponMesh3P; // 0x2a0
	TArray<ObjectProperty> m_SimpleTransitionerNodes1P; // 0x2a8
	TArray<ObjectProperty> m_DeviceModeBlendNodes; // 0x2b8
	TArray<ObjectProperty> m_FitToDurationNodes; // 0x2c8
	TArray<ObjectProperty> m_RealmCharacterNodes; // 0x2d8
	TArray<ObjectProperty> m_TriggerCameraAnimNodes; // 0x2e8
	ObjectProperty PoseTransitioner; // 0x2f8
	ObjectProperty m_PrimaryWeaponBlendNode; // 0x300
	TArray<ObjectProperty> m_PawnMeshRecoilBlendNode; // 0x308
	TArray<ObjectProperty> m_PawnMeshSimpleTransitionerNodes; // 0x318
	TArray<ObjectProperty> m_PawnMeshFitToDurationNodes; // 0x328
	TArray<ObjectProperty> m_PawnMeshRealmCharacterNodes; // 0x338
	TArray<ObjectProperty> m_PawnMeshTriggerCameraAnimNodes; // 0x348
	TArray<ObjectProperty> m_PawnDeviceModeBlendNodes; // 0x358
	TArray<ObjectProperty> m_PawnMeshBlendByFireTypeNodes; // 0x368
	TArray<ObjectProperty> m_PawnMeshAimOffsets; // 0x378
	TArray<ObjectProperty> m_PawnMovementAbilityNodes; // 0x388
	TArray<ObjectProperty> m_PawnWeaponSwapNodes; // 0x398
	TArray<ObjectProperty> m_WeaponRealmCharacterNodes; // 0x3a8
	int32_t m_nEquipSlot; // 0x3b8
	int32_t m_nDeviceId; // 0x3bc
	int32_t m_MeshAsmId1P; // 0x3c0
	int32_t m_MeshAsmId3P; // 0x3c4
	ATgDevice* m_WeaponClass; // 0x3c8
	TG_PLAY_FIRE_EFFECT_ON m_PlayFireEffectsOn[0x14]; // 0x3d0
	TG_EQUIP_POINT m_ActiveEquipPoint; // 0x3e4
	EFirstPersonWeaponAttachState Current1pAttachState; // 0x3e5
	char m_bShouldLoopingMuzzleTrace : 1; // 0x3e8
	char m_bUseSocketForCameraAttach : 1; // 0x3e8
	char m_bProceduralBob : 1; // 0x3e8
	char m_bIsFOVZoomed : 1; // 0x3e8
	char m_bFlourishBlocked : 1; // 0x3e8
	char m_bIsHoldingBeacon : 1; // 0x3e8
	char m_bWasViewTargetLastTick : 1; // 0x3e8
	char m_bUseCameraAnims : 1; // 0x3e8
	char c_bEnemyMatLoaded : 0; // 0x3e8
	char m_bFullScreenScope : 0; // 0x3e8
	float m_fBobMult1; // 0x3ec
	float m_fBobMult2; // 0x3f0
	ComponentProperty m_HandsMesh; // 0x3f4
	ComponentProperty m_HeadMesh1P; // 0x3fc
	FVector2D m_v2WeaponLagAimOffset; // 0x404
	FVector2D m_nMaxWeaponLag; // 0x40c
	FVector2D m_v2WeaponLagInterpSpeed; // 0x414
	FVector2D m_v2WeaponLagSmoothingFactor; // 0x41c
	FRotator m_rLastRotation; // 0x424
	FVector2D m_fSmoothedAimOffset; // 0x430
	float m_fSmoothAimFactor; // 0x438
	ObjectProperty m_FireCameraShake; // 0x43c
	int32_t m_nTracerCounter; // 0x444
	int32_t m_nTracerFrequency; // 0x448
	FName m_TracerName; // 0x44c
	float m_fTracerLifetime; // 0x454
	FName m_HitTargetName; // 0x458
	FName m_HitWallName; // 0x460
	FName m_WhizbyName; // 0x468
	float m_BeamEmitterEndPointOffset; // 0x470
	int32_t m_nBeaconMeshId; // 0x474
	TArray<ObjectProperty> m_HitReactionSkelControls; // 0x478
	TArray<FQueuedImpactEffect> m_QueuedImpactEffects; // 0x488
	ObjectProperty m_LandSkelControl; // 0x498
	ObjectProperty m_GameplayCurves; // 0x4a0
	ObjectProperty m_FlyingSkelControl; // 0x4a8
	ObjectProperty m_WeaponDownSkelControl; // 0x4b0
	ObjectProperty m_JumpSkelControl; // 0x4b8
	ObjectProperty m_DoubleJumpSkelControl; // 0x4c0
	float m_fDesiredZoomMeshFOV; // 0x4c8
	float m_fDesiredZoomViewFOV; // 0x4cc
	float m_fADSZoomInTime; // 0x4d0
	float m_fADSZoomOutTime; // 0x4d4
	FVector m_vZoomMeshOffset; // 0x4d8
	ComponentProperty m_MuzzleFlashLight; // 0x4e4
	TArray<ObjectProperty> m_RecoilSkelControls; // 0x4ec
	FName m_nAnimSetPackageName; // 0x4fc
};

struct ATgDevice_MarkAndRecall {
	FVector m_markedLocation; // 0xaec
	FRotator m_markedRotation; // 0xaf8
	char m_bMarked : 1; // 0xb04
};

struct UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x68
	float DistributeOverNPoints; // 0x8c
	float DistributeThreshold; // 0x90
};

struct ATgPhysAnimTestActor {
	TArray<FName> LowerBoneNames; // 0x280
	TArray<FName> LinearBoneSpringNames; // 0x290
	TArray<FName> AngularBoneSpringNames; // 0x2a0
	ComponentProperty SkeletalMeshComponent; // 0x2b0
	EPATAState CurrentState; // 0x2b8
	char bBlendToGetUp : 1; // 0x2bc
	char bBlendingBack : 1; // 0x2bc
	char bRampingDownMotors : 1; // 0x2bc
	char bNextPokeKnocksDown : 1; // 0x2bc
	float GetUpBlendStartTime; // 0x2c0
	float GetUpBlendTime; // 0x2c4
	float GetUpToIdleTime; // 0x2c8
	float ActorOriginHeight; // 0x2cc
	float PokePauseTime; // 0x2d0
	float PokeBlendTime; // 0x2d4
	float BlendBackStartTime; // 0x2d8
	float MotorDownStartTime; // 0x2dc
	float MotorDownTime; // 0x2e0
	float MotorDownAnimTime; // 0x2e4
	float BlendStaggerAnimTime; // 0x2e8
	float StaggerSpeedAdj; // 0x2ec
	float StaggerVel; // 0x2f0
	FVector MoveDir; // 0x2f4
	float AngularHipDriveScale; // 0x300
	float StaggerMuscleScale; // 0x304
	ObjectProperty blendNode; // 0x308
	ObjectProperty GetUpNode; // 0x310
	ObjectProperty RunNode; // 0x318
	ObjectProperty HipBody; // 0x320
};

struct UTexture {
	char SRGB : 1; // 0x60
	char RGBE : 1; // 0x60
	char bIsSourceArtUncompressed : 1; // 0x60
	char CompressionNoAlpha : 1; // 0x60
	char CompressionNone : 1; // 0x60
	char CompressionNoMipmaps : 1; // 0x60
	char CompressionFullDynamicRange : 1; // 0x60
	char DeferCompression : 1; // 0x60
	char NeverStream : 0; // 0x60
	char bDitherMipMapAlpha : 0; // 0x60
	char bPreserveBorderR : 0; // 0x60
	char bPreserveBorderG : 0; // 0x60
	char bPreserveBorderB : 0; // 0x60
	char bPreserveBorderA : 0; // 0x60
	char bNoTiling : 0; // 0x60
	char bForcePVRTC4 : 0; // 0x60
	char bAsyncResourceReleaseHasBeenStarted : 0; // 0x60
	char bUseCinematicMipLevels : 0; // 0x60
	float UnpackMin[0x4]; // 0x64
	float UnpackMax[0x4]; // 0x74
	FUntypedBulkData_Mirror SourceArt; // 0x84
	TextureCompressionSettings CompressionSettings; // 0xc4
	TextureFilter Filter; // 0xc5
	TextureGroup LODGroup; // 0xc6
	TextureGroup CachedLODGroup; // 0xc7
	TextureMipGenSettings MipGenSettings; // 0xc8
	int32_t LODBias; // 0xcc
	int32_t CachedCombinedLODBias; // 0xd0
	int32_t NumCinematicMipLevels; // 0xd4
	FPointer Resource; // 0xd8
	float AdjustBrightness; // 0xe0
	float AdjustBrightnessCurve; // 0xe4
	float AdjustVibrance; // 0xe8
	float AdjustSaturation; // 0xec
	float AdjustRGBCurve; // 0xf0
	float AdjustHue; // 0xf4
	int32_t InternalFormatLODBias; // 0xf8
	int32_t RequiredCreationFlags; // 0xfc
};

struct UTgDropShadowDecalComponent {
	float LastCachedZ; // 0x310
	FVector LastOwnerPos; // 0x314
};

struct UTgInventoryObject_Listen_Conduit {
	int32_t m_nDeviceIdShockPulseMain; // 0xc8
	int32_t m_nDeviceIdShockPulseSupport; // 0xcc
	TArray<ObjectProperty> m_EnemiesHitThisPulse; // 0xd0
};

struct UUIData_CustomGame {
	Fdword m_dwOriginalQueueId; // 0x60
	Fdword m_dwMatchId; // 0x64
	FString m_sQueueName; // 0x68
	Fdword m_dwOwnerPlayerId; // 0x78
	FString m_sOwnerName; // 0x7c
	char m_bHasPassword : 1; // 0x8c
	Fdword m_dwSiteId; // 0x90
	int32_t m_nMinPlayers; // 0x94
	int32_t m_nMaxPlayers; // 0x98
	int32_t m_nNumPlayers; // 0x9c
};

struct UPBRuleNodeMesh {
	TArray<FBuildingMeshInfo> BuildingMeshes; // 0x70
	FBuildingMeshInfo PartialOccludedBuildingMesh; // 0x80
	char bDoOcclusionTest : 1; // 0xcc
	char bBlockAll : 1; // 0xcc
};

struct UUIComponent_ProgressBarHorizontal {
	char m_bHideFillWhenEmpty : 1; // 0x120
	char m_bHideTipWhenEmpty : 1; // 0x120
	ObjectProperty m_mcBackground; // 0x124
	ObjectProperty m_mcFill; // 0x12c
	ObjectProperty m_mcTip; // 0x134
};

struct ATgPawn_LootGoblin {
	EGoblinState r_eCurrentState; // 0x310c
	float m_fGoblinStateTimer; // 0x3110
	float m_fEscapeTimer; // 0x3114
	float m_fTotalDamage; // 0x3118
	TArray<ObjectProperty> m_RoyaleObjectivesVisited; // 0x311c
	float m_fSpawnTime; // 0x312c
	float m_fMovementTime; // 0x3130
	float m_fStopTime; // 0x3134
	float m_fStartEscapeTime; // 0x3138
	float m_fEscapeTime; // 0x313c
	float m_fDamageTime; // 0x3140
	float m_fMaxDamage; // 0x3144
	TArray<FGoblinLootInfo> m_GoblinLootInfo; // 0x3148
	TArray<FGoblinLootInfo> m_GoblinFlinchLootInfo; // 0x3158
	ObjectProperty m_pNormalizerEffectGroup; // 0x3168
	ObjectProperty m_pMIC; // 0x3170
	FName m_nWallEnableName; // 0x3178
	FName m_nWallPositionName; // 0x3180
	char m_bTickMaskingPlane : 1; // 0x3188
	char m_bHasDespawned : 1; // 0x3188
};

struct ATgDevice_RocketLauncher {
	FVector m_vProjectileSpawnOffset2; // 0xaec
	int32_t m_nFireCount; // 0xaf8
};

struct UTcpNetDriver {
	char AllowPlayerPortUnreach : 1; // 0x208
	char LogPortUnreach : 1; // 0x20c
};

struct UHeightFogComponent {
	char bEnabled : 1; // 0x88
	float Height; // 0x8c
	float Density; // 0x90
	float LightBrightness; // 0x94
	FColor LightColor; // 0x98
	float ExtinctionDistance; // 0x9c
	float StartDistance; // 0xa0
};

struct UActorFactoryApexClothing {
	TArray<ObjectProperty> ClothingAssets; // 0xb4
	ERBCollisionChannel ClothingRBChannel; // 0xc4
	FRBCollisionChannelContainer ClothingRBCollideWithChannels; // 0xc8
};

struct UPath_TowardPoint {
	FVector GoalPoint; // 0x6c
};

struct UUIComponent_IconTF {
	ObjectProperty m_mcIcon; // 0x120
};

struct UActorFactoryArchetype {
	ObjectProperty ArchetypeActor; // 0x9c
};

struct UCodecMovieFallback {
	float CurrentTime; // 0x64
};

struct UAnimNodeScaleRateBySpeed {
	float BaseSpeed; // 0x118
	float MinScaleValue; // 0x11c
};

struct UInterpTrackVectorMaterialParam {
	TArray<FMaterialReferenceList> Materials; // 0xb8
	ObjectProperty Material; // 0xc8
	FName ParamName; // 0xd0
	char bNeedsMaterialRefsUpdate : 1; // 0xd8
};

struct USeqAct_PlaySound {
	ObjectProperty PlaySound; // 0x120
	float ExtraDelay; // 0x128
	char bDelayReached : 1; // 0x12c
	char bSuppressSubtitles : 1; // 0x12c
	char bStopped : 1; // 0x12c
	float SoundDuration; // 0x130
	float FadeInTime; // 0x134
	float FadeOutTime; // 0x138
	float VolumeMultiplier; // 0x13c
	float PitchMultiplier; // 0x140
	float BeforeEndTime; // 0x144
};

struct UTgSkelCon_RotateToVelocity {
	float m_fRotationSpeed; // 0x100
	char m_bUseConstantSpeed : 1; // 0x104
	char m_bVelocity2DOnly : 1; // 0x104
	float m_fMinVelocity; // 0x108
	FRotator m_rTargetRotation; // 0x10c
};

struct UUIComponent_ShopList {
	int32_t m_nCurrentSection; // 0x120
	float m_fScrollX; // 0x124
	float m_fTargetScrollX; // 0x128
	int32_t m_nSymbolInstanceIndex; // 0x12c
	FString m_sContainerSymbolName; // 0x130
	FString m_sHeaderSymbolName; // 0x140
	FString m_sItemFeaturedSymbolName; // 0x150
	FString m_sItemMajorSymbolName; // 0x160
	FString m_sItemMinorSymbolName; // 0x170
	FString m_sItemDailySymbolName; // 0x180
	float m_fItemFeaturedWidth; // 0x190
	float m_fItemFeaturedHeight; // 0x194
	float m_fItemMajorWidth; // 0x198
	float m_fItemMajorHeight; // 0x19c
	float m_fItemMinorWidth; // 0x1a0
	float m_fItemMinorHeight; // 0x1a4
	float m_fItemDailyWidth; // 0x1a8
	float m_fItemDailyHeight; // 0x1ac
	int32_t m_nSelectedSectionIndex; // 0x1b0
	int32_t m_nSelectedItemIndex; // 0x1b4
	TArray<FUICShopListSection> m_ListSections; // 0x1b8
	ObjectProperty m_pScrollbar; // 0x1c8
	ObjectProperty m_grList; // 0x1d0
};

struct UNavMeshGoalFilter_OutOfViewFrom {
	FPointer GoalPoly; // 0x6c
	FVector OutOfViewLocation; // 0x74
};

struct UParticleModuleSize {
	FRawDistributionVector StartSize; // 0x68
};

struct ALandscapeGizmoActiveActor {
	TMap<None, None> SelectedData; // 0x280
};

struct UUIProfileMini {
	int32_t m_nTitle; // 0x244
	int32_t m_nCrowns; // 0x248
	int32_t m_nTrophies; // 0x24c
	char m_bSearching : 1; // 0x250
	char m_bShowMinimize : 1; // 0x250
	ObjectProperty m_mcExit; // 0x254
	ObjectProperty m_mcPlayer; // 0x25c
	ObjectProperty m_mcPlayerTitle; // 0x264
	ObjectProperty m_mcMinimize; // 0x26c
	ObjectProperty m_mcCrowns; // 0x274
	ObjectProperty m_mcCrownsText; // 0x27c
	ObjectProperty m_mcCrownsButton; // 0x284
	ObjectProperty m_mcTrophies; // 0x28c
	ObjectProperty m_mcTrophiesText; // 0x294
	ObjectProperty m_mcSearching; // 0x29c
	ObjectProperty m_mcSearchingTitle; // 0x2a4
	ObjectProperty m_mcSearchingSubtitle; // 0x2ac
	ObjectProperty m_mcMember[0x4]; // 0x2b4
	ObjectProperty m_mcMemberIcon[0x4]; // 0x2d4
	ObjectProperty m_mcMemberLogo[0x4]; // 0x2f4
	ObjectProperty m_mcMemberFrame[0x4]; // 0x314
};

struct UMobileMenuButton {
	ObjectProperty Images[0x2]; // 0xdc
	FUVCoords ImagesUVs[0x2]; // 0xec
	FLinearColor ImageColor; // 0x114
	FString Caption; // 0x124
	FLinearColor CaptionColor; // 0x134
};

struct UUIDataEsportsManager {
	TArray<ObjectProperty> m_EventArray; // 0x70
	TMap<None, None> m_Events; // 0x80
	TMap<None, None> m_Teams; // 0xc8
	Fdword m_dwRewardMultiplier; // 0x110
};

struct ATgAIController {
	ObjectProperty m_pOwner; // 0x4e0
	FVector m_vSpawnLocation; // 0x4e8
	FRotator m_rSpawnDirection; // 0x4f4
	ObjectProperty m_pFactory; // 0x500
	int32_t m_nFactorySpawnGroup; // 0x508
	FPointer m_pBot; // 0x50c
	FPointer m_pSettings; // 0x514
	FPointer m_pSkin; // 0x51c
	int32_t m_iAssignedLane; // 0x524
	TMap<None, None> m_SeePawnCache; // 0x528
	float LastSeePawnCacheTime; // 0x570
	float SeePawnClearTime; // 0x574
	ObjectProperty m_pLastAttacker; // 0x578
	ObjectProperty m_Squad; // 0x580
	float LastDamageTakenTime; // 0x588
	FVector LastDamageTakenPosition; // 0x58c
	TMap<None, None> m_LoSCache; // 0x598
	float LastLoSCacheTime; // 0x5e0
	EHavokNavigationMeshType m_eNavmeshType; // 0x5e4
	EPhysics WalkingPhysics; // 0x5e5
	float m_fAILevelUpSecs; // 0x5e8
	float VisionDistance; // 0x5ec
	float VisionDistanceBonus; // 0x5f0
	char bUsesObstacleAvoidance : 1; // 0x5f4
	char bIsPaused : 1; // 0x5f4
	char bIsAIFrozen : 1; // 0x5f4
	ObjectProperty ObstacleAvoidance; // 0x5f8
	float ObstacleAvoidanceGridPointSize; // 0x600
	float ObstacleAvoidanceGridExtents; // 0x604
	FVector SpreadLocation; // 0x608
	ObjectProperty CachedPRI; // 0x614
	TMap<None, None> DeviceTargetingCache; // 0x61c
	float LastCheckStuckTime; // 0x664
	float CheckStuckTime; // 0x668
	FVector LastCachedStuckPosition; // 0x66c
	float LastCheckFlungTime; // 0x678
	float CheckFlungTime; // 0x67c
	FVector LastCachedFlungPosition; // 0x680
};

struct USeqEvent_LOS {
	float ScreenCenterDistance; // 0x128
	float TriggerDistance; // 0x12c
	char bCheckForObstructions : 1; // 0x130
};

struct ATgDevice_Soar {
	float m_fPrevCollisionHeight; // 0xaec
};

struct UOnlinePlaylistProvider {
	int32_t PlaylistId; // 0x94
	TArray<FName> PlaylistGameTypeNames; // 0x98
	FString DisplayName; // 0xa8
	int32_t Priority; // 0xb8
};

struct UTgDataManager {
	ObjectProperty m_EOMData; // 0x60
	ObjectProperty m_CardData; // 0x68
	ObjectProperty m_NotificationData; // 0x70
	TArray<ObjectProperty> m_DataSets; // 0x78
	TArray<ObjectProperty> m_Callbacks; // 0x88
};

struct UTgSeqAct_PingMinimap {
	ObjectProperty m_PingTarget; // 0x108
};

struct UParticleModuleRequired {
	ObjectProperty Material; // 0x68
	EParticleScreenAlignment ScreenAlignment; // 0x70
	EParticleSortMode SortMode; // 0x71
	EParticleBurstMethod ParticleBurstMethod; // 0x72
	EParticleSubUVInterpMethod InterpolationMethod; // 0x73
	EEmitterNormalsMode EmitterNormalsMode; // 0x74
	char bAllowImageFlipping : 1; // 0x78
	char bSquareImageFlipping : 1; // 0x78
	char bUseLocalSpace : 1; // 0x78
	char bKillOnDeactivate : 1; // 0x78
	char bKillOnCompleted : 1; // 0x78
	char bRequiresSorting : 1; // 0x78
	char bUseLegacyEmitterTime : 1; // 0x78
	char bEnableNearParticleCulling : 1; // 0x78
	char bEnableFarParticleCulling : 0; // 0x78
	char bEnableParticleTrimming : 0; // 0x78
	char bEmitterDurationUseRange : 0; // 0x78
	char bDurationRecalcEachLoop : 0; // 0x78
	char bEmitterDelayUseRange : 0; // 0x78
	char bDelayFirstLoopOnly : 0; // 0x78
	char bScaleUV : 0; // 0x78
	char bDirectUV : 0; // 0x78
	char bOverrideSystemMacroUV : 0; // 0x78
	char bUseMaxDrawCount : 0; // 0x78
	char bOrbitModuleAffectsVelocityAlignment : 0; // 0x78
	float NearCullDistance; // 0x7c
	float NearFadeDistance; // 0x80
	float FarFadeDistance; // 0x84
	float FarCullDistance; // 0x88
	TArray<FVector2D> TrimmedVertices; // 0x8c
	float EmitterDuration; // 0x9c
	float EmitterDurationLow; // 0xa0
	int32_t EmitterLoops; // 0xa4
	FRawDistributionFloat SpawnRate; // 0xa8
	TArray<FParticleBurst> BurstList; // 0xcc
	float EmitterDelay; // 0xdc
	float EmitterDelayLow; // 0xe0
	int32_t SubImages_Horizontal; // 0xe4
	int32_t SubImages_Vertical; // 0xe8
	float RandomImageTime; // 0xec
	int32_t RandomImageChanges; // 0xf0
	FVector MacroUVPosition; // 0xf4
	float MacroUVRadius; // 0x100
	int32_t MaxDrawCount; // 0x104
	float DownsampleThresholdScreenFraction; // 0x108
	FVector NormalsSphereCenter; // 0x10c
	FVector NormalsCylinderDirection; // 0x118
};

struct UTgSeqEvent_TaskForceScoreUpdated {
	int32_t DefenderTaskForce; // 0x128
	int32_t CurrentScore; // 0x12c
};

struct UUIComponent_MatchPlayerEntry {
	ObjectProperty m_mcEndCap; // 0x120
	ObjectProperty m_mcIcon; // 0x128
	ObjectProperty m_mcName; // 0x130
	ObjectProperty m_pPlayerName; // 0x138
	ObjectProperty m_mcTitle; // 0x140
	ObjectProperty m_mcBuild; // 0x148
	ObjectProperty m_mcBuild_Stat[0x2]; // 0x150
	ObjectProperty m_mcBuild_Talent; // 0x160
	ObjectProperty m_mcBuild_TalentIcon; // 0x168
	ObjectProperty m_mcBooster0; // 0x170
	ObjectProperty m_mcBooster0Tex; // 0x178
	ObjectProperty m_mcBooster1; // 0x180
	ObjectProperty m_mcBooster1Tex; // 0x188
	ObjectProperty m_Cards[0x5]; // 0x190
	ObjectProperty m_CardButtons[0x5]; // 0x1b8
	ObjectProperty m_Items[0x4]; // 0x1e0
	ObjectProperty m_ItemButtons[0x4]; // 0x200
	ObjectProperty m_mcStatsDetails; // 0x220
	ObjectProperty m_mcStatsDetails_Stat[0x7]; // 0x228
	ObjectProperty m_TalentButton; // 0x260
	ObjectProperty m_FrameButton; // 0x268
	ObjectProperty m_ReportButton; // 0x270
	ObjectProperty m_ImportButton; // 0x278
	ObjectProperty m_AddButton; // 0x280
	ObjectProperty m_pTooltip; // 0x288
	char m_bCanReport : 1; // 0x290
};

struct UUIComponent_Card {
	ObjectProperty m_mcCTA; // 0x120
	ObjectProperty m_mcChampion; // 0x128
	ObjectProperty m_mcChampionIcon; // 0x130
	ObjectProperty m_mcCooldown; // 0x138
	ObjectProperty m_mcCost; // 0x140
	ObjectProperty m_mcName; // 0x148
	ObjectProperty m_mcSkill; // 0x150
	ObjectProperty m_mcDesc; // 0x158
	ObjectProperty m_mcRarity; // 0x160
	ObjectProperty m_mcFrame; // 0x168
	ObjectProperty m_mcCooldownTimer; // 0x170
	ObjectProperty m_mcProgressBack; // 0x178
	ObjectProperty m_mcProgressCover; // 0x180
	ObjectProperty m_mcIcon; // 0x188
	ObjectProperty m_mcRarityGlow; // 0x190
	ObjectProperty m_pProgress; // 0x198
	float m_fOwnedOverride; // 0x1a0
	char m_bShowChampion : 1; // 0x1a4
	char m_bShowRarityGlow : 1; // 0x1a4
};

struct UActorFactoryLensFlare {
	ObjectProperty LensFlareObject; // 0x9c
};

struct USkeletalMesh {
	FBoxSphereBounds Bounds; // 0x60
	FVector LodCheckSphereOrigin; // 0x7c
	float LodCheckSphereRadius; // 0x88
	TArray<ObjectProperty> Materials; // 0x8c
	TArray<ObjectProperty> ClothingAssets; // 0x9c
	TArray<FApexClothingAssetInfo> ClothingLodMap; // 0xac
	FVector Origin; // 0xbc
	FRotator RotOrigin; // 0xc8
	TArray<int32_t> RefSkeleton; // 0xd4
	int32_t SkeletalDepth; // 0xe4
	TMap<None, None> NameIndexMap; // 0xe8
	FIndirectArray_Mirror LODModels; // 0x130
	FPointer SourceData; // 0x140
	TArray<FBoneAtom> RefBasesInvMatrix; // 0x148
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0x158
	EAxis SkelMirrorAxis; // 0x168
	EAxis SkelMirrorFlipAxis; // 0x169
	TArray<ObjectProperty> Sockets; // 0x16c
	TArray<FString> BoneBreakNames; // 0x17c
	TArray<BoneBreakOption> BoneBreakOptions; // 0x18c
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0x19c
	TArray<FSkeletalMeshOptimizationSettings> OptimizationSettings; // 0x1ac
	TArray<FName> PerPolyCollisionBones; // 0x1bc
	TArray<FName> AddToParentPerPolyCollisionBone; // 0x1cc
	TArray<int32_t> PerPolyBoneKDOPs; // 0x1dc
	char bStripkDOP : 1; // 0x1ec
	char bPerPolyUseSoftWeighting : 1; // 0x1ec
	char bUseSimpleLineCollision : 1; // 0x1ec
	char bUseSimpleBoxCollision : 1; // 0x1ec
	char bForceCPUSkinning : 1; // 0x1ec
	char bUseFullPrecisionUVs : 1; // 0x1ec
	char bHasBeenSimplified : 1; // 0x1ec
	ObjectProperty FaceFXAsset; // 0x1f0
	int32_t LODBiasPC; // 0x1f8
	int32_t LODBiasPS3; // 0x1fc
	int32_t LODBiasXbox360; // 0x200
	int32_t LODBiasOrbis; // 0x204
	TArray<FPointer> ClothMesh; // 0x208
	TArray<float> ClothMeshScale; // 0x218
	TArray<int32_t> ClothToGraphicsVertMap; // 0x228
	TArray<float> ClothMovementScale; // 0x238
	ClothMovementScaleGen ClothMovementScaleGenMode; // 0x248
	float ClothToAnimMeshMaxDist; // 0x24c
	char bLimitClothToAnimMesh : 1; // 0x250
	TArray<int32_t> ClothWeldingMap; // 0x254
	int32_t ClothWeldingDomain; // 0x264
	TArray<int32_t> ClothWeldedIndices; // 0x268
	char bForceNoWelding : 1; // 0x278
	int32_t NumFreeClothVerts; // 0x27c
	TArray<int32_t> ClothIndexBuffer; // 0x280
	TArray<FName> ClothBones; // 0x290
	int32_t ClothHierarchyLevels; // 0x2a0
	char bEnableClothBendConstraints : 1; // 0x2a4
	char bEnableClothDamping : 1; // 0x2a4
	char bUseClothCOMDamping : 1; // 0x2a4
	float ClothStretchStiffness; // 0x2a8
	float ClothBendStiffness; // 0x2ac
	float ClothDensity; // 0x2b0
	float ClothThickness; // 0x2b4
	float ClothDamping; // 0x2b8
	int32_t ClothIterations; // 0x2bc
	int32_t ClothHierarchicalIterations; // 0x2c0
	float ClothFriction; // 0x2c4
	float ClothRelativeGridSpacing; // 0x2c8
	float ClothPressure; // 0x2cc
	float ClothCollisionResponseCoefficient; // 0x2d0
	float ClothAttachmentResponseCoefficient; // 0x2d4
	float ClothAttachmentTearFactor; // 0x2d8
	float ClothSleepLinearVelocity; // 0x2dc
	float HardStretchLimitFactor; // 0x2e0
	char bHardStretchLimit : 1; // 0x2e4
	char bEnableClothOrthoBendConstraints : 1; // 0x2e4
	char bEnableClothSelfCollision : 1; // 0x2e4
	char bEnableClothPressure : 1; // 0x2e4
	char bEnableClothTwoWayCollision : 1; // 0x2e4
	TArray<FClothSpecialBoneInfo> ClothSpecialBones; // 0x2e8
	char bEnableClothLineChecks : 1; // 0x2f8
	char bClothMetal : 1; // 0x2f8
	float ClothMetalImpulseThreshold; // 0x2fc
	float ClothMetalPenetrationDepth; // 0x300
	float ClothMetalMaxDeformationDistance; // 0x304
	char bEnableClothTearing : 1; // 0x308
	float ClothTearFactor; // 0x30c
	int32_t ClothTearReserve; // 0x310
	char bEnableValidBounds : 1; // 0x314
	FVector ValidBoundsMin; // 0x318
	FVector ValidBoundsMax; // 0x324
	FMap_Mirror ClothTornTriMap; // 0x330
	TArray<int32_t> SoftBodySurfaceToGraphicsVertMap; // 0x378
	TArray<int32_t> SoftBodySurfaceIndices; // 0x388
	TArray<FVector> SoftBodyTetraVertsUnscaled; // 0x398
	TArray<int32_t> SoftBodyTetraIndices; // 0x3a8
	TArray<FSoftBodyTetraLink> SoftBodyTetraLinks; // 0x3b8
	TArray<FPointer> CachedSoftBodyMeshes; // 0x3c8
	TArray<float> CachedSoftBodyMeshScales; // 0x3d8
	TArray<FName> SoftBodyBones; // 0x3e8
	TArray<FSoftBodySpecialBoneInfo> SoftBodySpecialBones; // 0x3f8
	float SoftBodyVolumeStiffness; // 0x408
	float SoftBodyStretchingStiffness; // 0x40c
	float SoftBodyDensity; // 0x410
	float SoftBodyParticleRadius; // 0x414
	float SoftBodyDamping; // 0x418
	int32_t SoftBodySolverIterations; // 0x41c
	float SoftBodyFriction; // 0x420
	float SoftBodyRelativeGridSpacing; // 0x424
	float SoftBodySleepLinearVelocity; // 0x428
	char bEnableSoftBodySelfCollision : 1; // 0x42c
	float SoftBodyAttachmentResponse; // 0x430
	float SoftBodyCollisionResponse; // 0x434
	float SoftBodyDetailLevel; // 0x438
	int32_t SoftBodySubdivisionLevel; // 0x43c
	char bSoftBodyIsoSurface : 1; // 0x440
	char bEnableSoftBodyDamping : 1; // 0x440
	char bUseSoftBodyCOMDamping : 1; // 0x440
	float SoftBodyAttachmentThreshold; // 0x444
	char bEnableSoftBodyTwoWayCollision : 1; // 0x448
	float SoftBodyAttachmentTearFactor; // 0x44c
	char bEnableSoftBodyLineChecks : 1; // 0x450
	char bHasVertexColors : 1; // 0x450
	TArray<char> GraphicsIndexIsCloth; // 0x454
	TArray<float> CachedStreamingTextureFactors; // 0x464
	float StreamingDistanceMultiplier; // 0x474
	int32_t ReleaseResourcesFence; // 0x478
	FQWord SkelMeshRUID; // 0x47c
	char bUseClothingAssetMaterial : 1; // 0x484
};

struct UTgAchievement_HardCarry {
	int32_t nKills; // 0x90
};

struct UUIChatScene {
	int32_t m_nContextChangedCallbackHandle; // 0x244
	ObjectProperty m_KeyCapture; // 0x248
	int32_t m_nChannel; // 0x250
	int32_t m_nScroll; // 0x254
	int32_t m_nLineNumber; // 0x258
	int32_t m_nPrevIndex; // 0x25c
	float m_fBuffer; // 0x260
	float m_fOutputWidth; // 0x264
	FString m_sRecipient; // 0x268
	FString m_sRemaining; // 0x278
	FString m_sLastInput; // 0x288
	int32_t m_nCommand; // 0x298
	ObjectProperty m_pChatData; // 0x29c
	ObjectProperty m_mcInput; // 0x2a4
	TArray<FChatMessage> m_Messages; // 0x2ac
	TArray<FString> m_PrevChats; // 0x2bc
};

struct UTgSeqAct_ShowGameTip {
	int32_t GameTipId; // 0x108
	ObjectProperty TargetPlayer; // 0x10c
};

struct UTgAnimNotify_SetMICParam {
	FName m_nmParamName; // 0x68
	float m_fTargetValue; // 0x70
};

struct UTgSkelControlSingleBone_Ammo {
	ObjectProperty m_PawnOwner; // 0x144
	char m_bInvertStrengthFromAmmo : 1; // 0x14c
	float m_fFlatInterpolationRateDecrease; // 0x150
	float m_fInterpolationRateDecrease; // 0x154
	float m_fFlatInterpolationRateIncrease; // 0x158
	float m_fInterpolationRateIncrease; // 0x15c
	int32_t m_nMaxAmmoFallback; // 0x160
};

struct UGameThirdPersonCamera {
	float WorstLocBlockedPct; // 0x6c
	float WorstLocPenetrationExtentScale; // 0x70
	float PenetrationBlendOutTime; // 0x74
	float PenetrationBlendInTime; // 0x78
	float PenetrationBlockedPct; // 0x7c
	float PenetrationExtentScale; // 0x80
	FVector LastActualOriginOffset; // 0x84
	FVector LastActualCameraOrigin; // 0x90
	FRotator LastActualCameraOriginRot; // 0x9c
	float OriginOffsetInterpSpeed; // 0xa8
	FVector LastViewOffset; // 0xac
	float LastCamFOV; // 0xb8
	FVector LastIdealCameraOrigin; // 0xbc
	FRotator LastIdealCameraOriginRot; // 0xc8
	ObjectProperty ThirdPersonCamDefault; // 0xd4
	UGameThirdPersonCameraMode* ThirdPersonCamDefaultClass; // 0xdc
	ObjectProperty CurrentCamMode; // 0xe4
	float LastHeightAdjustment; // 0xec
	float LastPitchAdjustment; // 0xf0
	float LastYawAdjustment; // 0xf4
	float LeftoverPitchAdjustment; // 0xf8
	float Focus_BackOffStrength; // 0xfc
	float Focus_StepHeightAdjustment; // 0x100
	int32_t Focus_MaxTries; // 0x104
	float Focus_FastAdjustKickInTime; // 0x108
	float LastFocusChangeTime; // 0x10c
	FVector ActualFocusPointWorldLoc; // 0x110
	FVector LastFocusPointLoc; // 0x11c
	FCamFocusPointParams FocusPoint; // 0x128
	char bFocusPointSet : 1; // 0x160
	char bFocusPointSuccessful : 1; // 0x160
	char bDoingACameraTurn : 1; // 0x160
	char bTurnAlignTargetWhenFinished : 1; // 0x160
	char bDrawDebug : 1; // 0x160
	char bDoingDirectLook : 1; // 0x160
	char bDebugChangedCameraMode : 1; // 0x160
	char bDoSeamlessPivotTransition : 1; // 0x160
	float TurnCurTime; // 0x164
	int32_t TurnStartAngle; // 0x168
	int32_t TurnEndAngle; // 0x16c
	float TurnTotalTime; // 0x170
	float TurnDelay; // 0x174
	int32_t LastPostCamTurnYaw; // 0x178
	int32_t DirectLookYaw; // 0x17c
	float DirectLookInterpSpeed; // 0x180
	float WorstLocInterpSpeed; // 0x184
	FVector LastWorstLocationLocal; // 0x188
	FVector LastWorstLocation; // 0x194
	FVector LastPreModifierCameraLoc; // 0x1a0
	FRotator LastPreModifierCameraRot; // 0x1ac
	TArray<FPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers; // 0x1b8
	FVector LastOffsetAdjustment; // 0x1c8
};

struct UUIData_TreasureRoll_Item {
	ObjectProperty m_pRolledItem; // 0x60
	Fdword m_dwRolledItemQuantity; // 0x68
	ObjectProperty m_pReplacementItem; // 0x6c
	Fdword m_dwReplacementItemQuantity; // 0x74
	char m_bIsUnreceivedBoostedItem : 1; // 0x78
	TArray<ObjectProperty> m_pRolledSubItems; // 0x7c
	ObjectProperty m_pSubItemReplacementAggregate; // 0x8c
};

struct UCameraShake {
	char bSingleInstance : 1; // 0x60
	char bRandomAnimSegment : 1; // 0x60
	char bDoHUDShake : 1; // 0x60
	float OscillationDuration; // 0x64
	float OscillationBlendInTime; // 0x68
	float OscillationBlendOutTime; // 0x6c
	FROscillator RotOscillation; // 0x70
	FVOscillator LocOscillation; // 0x94
	FFOscillator FOVOscillation; // 0xb8
	ObjectProperty Anim; // 0xc4
	float AnimPlayRate; // 0xcc
	float AnimScale; // 0xd0
	float AnimBlendInTime; // 0xd4
	float AnimBlendOutTime; // 0xd8
	float RandomAnimSegmentDuration; // 0xdc
	FV2DOscillator HUDOscillation; // 0xe0
};

struct UActorFactoryAmbientSound {
	ObjectProperty AmbientSoundCue; // 0x9c
};

struct UDynamicSpriteComponent {
	FInterpCurveFloat AnimatedScale; // 0x26c
	FInterpCurveLinearColor AnimatedColor; // 0x280
	FInterpCurveVector2D AnimatedPosition; // 0x294
	FVector LocationOffset; // 0x2a8
	int32_t LoopCount; // 0x2b4
};

struct UTgAIBehaviorCondition_NearestTowerHealthPercent {
	char bMustBeEnemy : 1; // 0x98
	float HealthPct; // 0x9c
};

struct UUIData_MatchBoosterActivated {
	Fdword dwSourcePlayerId; // 0x60
	Fdword dwTaskForce; // 0x64
	Fdword eItemBoosterSubtype; // 0x68
	float fMultiplier; // 0x6c
	ObjectProperty pBoosterItem; // 0x70
};

struct ATgTrigger_Instance {
	int32_t m_nMapId; // 0x290
	char m_nPreload : 1; // 0x294
	char m_nTaskForce : 1; // 0x294
	FString m_SpawnPointName; // 0x298
};

struct ATgLobbyCamera {
	ObjectProperty m_ViewTarget; // 0x420
	TArray<ObjectProperty> m_FriendlyTargets; // 0x428
	TArray<ObjectProperty> m_EnemyTargets; // 0x438
	FVector m_RenderCenterPointOffset; // 0x448
	char m_bActive : 1; // 0x454
	char m_bAdjustCameraToTarget : 1; // 0x454
	char m_bFirstCameraEyeCheck : 1; // 0x454
	int32_t m_nPosition; // 0x458
	float m_fRemainingTweenTime; // 0x45c
	float m_fTotalTweenTime; // 0x460
	FTPOV m_TweenSourcePOV; // 0x464
	float m_fLateralOffsetMultiplier; // 0x488
	float m_fHorizontalOffsetMultiplier; // 0x48c
	float m_fViewLateralOffsetMultiplier; // 0x490
	float m_fViewHorizontalOffsetMultiplier; // 0x494
	float m_fMaxAdjustSpeedTranslation; // 0x498
	float m_fMaxAdjustSpeedRotation; // 0x49c
	FVector m_vViewOffset; // 0x4a0
	float m_fFirstCameraEyeCheckTimestamp; // 0x4ac
	ELobbyCameraTag m_CameraTag; // 0x4b0
};

struct UUIComponent_ItemRadialMenuBase {
	int32_t m_nSlot; // 0x120
	ObjectProperty m_mcSubEntry; // 0x124
	ObjectProperty m_mcTF; // 0x12c
	ObjectProperty m_mcItem; // 0x134
	ObjectProperty m_mcItemIcon; // 0x13c
	ObjectProperty m_mcHighlight; // 0x144
	ObjectProperty m_mcDisabledBG; // 0x14c
	ObjectProperty m_pFrameButton; // 0x154
	ObjectProperty m_akSliceSelect; // 0x15c
};

struct AKActor {
	char bDamageAppliesImpulse : 1; // 0x2d0
	char bWakeOnLevelStart : 1; // 0x2d0
	char bCurrentSlide : 1; // 0x2d0
	char bSlideActive : 1; // 0x2d0
	char bEnableStayUprightSpring : 1; // 0x2d0
	char bLimitMaxPhysicsVelocity : 1; // 0x2d0
	char bNeedsRBStateReplication : 1; // 0x2d0
	char bDisableClientSidePawnInteractions : 1; // 0x2d0
	char TgApplyHitImpulse : 0; // 0x2d0
	char TgApplyTouchImpulse : 0; // 0x2d0
	ComponentProperty ImpactEffectComponent; // 0x2d4
	ComponentProperty ImpactSoundComponent; // 0x2dc
	ComponentProperty ImpactSoundComponent2; // 0x2e4
	float LastImpactTime; // 0x2ec
	FPhysEffectInfo ImpactEffectInfo; // 0x2f0
	ComponentProperty SlideEffectComponent; // 0x308
	ComponentProperty SlideSoundComponent; // 0x310
	float LastSlideTime; // 0x318
	FPhysEffectInfo SlideEffectInfo; // 0x31c
	float StayUprightTorqueFactor; // 0x334
	float StayUprightMaxTorque; // 0x338
	float MaxPhysicsVelocity; // 0x33c
	FRigidBodyState RBState; // 0x340
	float AngErrorAccumulator; // 0x380
	FVector ReplicatedDrawScale3D; // 0x384
	FVector InitialLocation; // 0x390
	FRotator InitialRotation; // 0x39c
	float TgTouchMagnitude; // 0x3a8
	ObjectProperty TgTouchSound; // 0x3ac
};

struct UPhysicalMaterial {
	int32_t MaterialIndex; // 0x60
	float Friction; // 0x64
	float Restitution; // 0x68
	char bForceConeFriction : 1; // 0x6c
	char bEnableAnisotropicFriction : 1; // 0x6c
	FVector AnisoFrictionDir; // 0x70
	float FrictionV; // 0x7c
	float Density; // 0x80
	float AngularDamping; // 0x84
	float LinearDamping; // 0x88
	float MagneticResponse; // 0x8c
	float WindResponse; // 0x90
	float ImpactThreshold; // 0x94
	float ImpactReFireDelay; // 0x98
	ObjectProperty ImpactEffect; // 0x9c
	ObjectProperty ImpactSound; // 0xa4
	ObjectProperty DeviceImpactSound; // 0xac
	float SlideThreshold; // 0xb4
	float SlideReFireDelay; // 0xb8
	ObjectProperty SlideEffect; // 0xbc
	ObjectProperty SlideSound; // 0xc4
	ObjectProperty FractureSoundExplosion; // 0xcc
	ObjectProperty FractureSoundSingle; // 0xd4
	FName MaterialTypeName; // 0xdc
	ObjectProperty FootstepParticleSystem; // 0xe4
	ObjectProperty Parent; // 0xec
	ObjectProperty PhysicalMaterialProperty; // 0xf4
};

struct ATgDeploy_Transporter {
	FVector m_StartLocation; // 0x448
	FVector m_ProjectileEndLocation; // 0x454
	float m_fProjectileHeight; // 0x460
	ObjectProperty m_DeploymentFX; // 0x464
	FVector r_TeleportLocation; // 0x46c
};

struct UUIInteractable_Button_Price {
	ObjectProperty m_mcPrices[0x3]; // 0x140
	FString m_sPriceLoadNames[0x3]; // 0x158
	int32_t m_nPriceIndex; // 0x188
};

struct ATgDeploy_HealthNugget {
	char m_bRenderAsActive : 1; // 0x448
	char m_bIsActiveRendered : 1; // 0x448
	char m_bCountTowardsHealingStats : 1; // 0x448
	ObjectProperty c_HelpTipActor; // 0x44c
	float m_fHealOverride; // 0x454
	float m_fHoTOverride; // 0x458
	TArray<ObjectProperty> m_PendingTouches; // 0x45c
};

struct UParticleModuleAttractorPoint {
	FRawDistributionVector Position; // 0x68
	FRawDistributionFloat Range; // 0x8c
	FRawDistributionFloat Strength; // 0xb0
	char StrengthByDistance : 1; // 0xd4
	char bAffectBaseVelocity : 1; // 0xd4
	char bOverrideVelocity : 1; // 0xd4
	char bUseWorldSpacePosition : 1; // 0xd4
};

struct UMaterialExpressionClamp {
	FExpressionInput Input; // 0xb0
	FExpressionInput Min; // 0xe4
	FExpressionInput Max; // 0x118
};

struct ULevelStreamingAlwaysLoaded {
	char bIsProceduralBuildingLODLevel : 1; // 0x100
};

struct UTgSeqAct_DisplayTooltip {
	int32_t m_nMessageId; // 0x108
	char m_bLeftPlacement : 1; // 0x10c
};

struct UUIDataChatManager {
	char m_bSentReplyHelp : 1; // 0x70
	char m_bLoadedEOMLobby : 1; // 0x70
	TArray<FChannelChatData> m_AllChatData; // 0x74
	TArray<FString> m_ReplyTargets; // 0x84
};

struct UMaterialExpressionConstantBiasScale {
	FExpressionInput Input; // 0xb0
	float Bias; // 0xe4
	float Scale; // 0xe8
};

struct UUIComponent_PartyLobbyPlayer {
	int32_t m_nDisplaySlot; // 0x120
	int32_t m_nTickCallbackHandle; // 0x124
	float m_fDeclinedInviteTimer; // 0x128
	char m_bPlayerReady : 1; // 0x12c
	char m_bPromptsShown : 1; // 0x12c
	char m_bPreviewingEmoteWheel : 1; // 0x12c
	char m_bOldPlayerMutedState : 1; // 0x12c
	char m_bShouldRefreshPreview : 1; // 0x12c
	UIPARTYLOBBY_PLAYER_STATE m_eState; // 0x130
	ObjectProperty m_pPreviewItem; // 0x134
	ObjectProperty m_pOverrideSkin; // 0x13c
	ObjectProperty m_mcPlayer; // 0x144
	ObjectProperty m_mcPlayerName; // 0x14c
	ObjectProperty m_mcPlayerTitle; // 0x154
	ObjectProperty m_mcPlayerStatus; // 0x15c
	ObjectProperty m_mcPlayerPrompt[0x2]; // 0x164
	ObjectProperty m_mcPlayerPromptKey[0x2]; // 0x174
	ObjectProperty m_mcPlayerPromptButton[0x2]; // 0x184
	ObjectProperty m_mcPlayerPromptText[0x2]; // 0x194
	ObjectProperty m_mcPlayerClassIcon; // 0x1a4
	ObjectProperty m_mcPlayerStateIcon; // 0x1ac
	ObjectProperty m_mcPlayerBackground; // 0x1b4
	ObjectProperty m_mcPlayerTooltip; // 0x1bc
	ObjectProperty m_mcPlayerTooltipText; // 0x1c4
	ObjectProperty m_mcPlayerTooltipPrompt; // 0x1cc
	ObjectProperty m_mcPlayerSpeakIcon; // 0x1d4
	ObjectProperty m_pPlayerAvatar; // 0x1dc
	ObjectProperty m_pAddButton; // 0x1e4
	ObjectProperty m_pFrameButton; // 0x1ec
	ObjectProperty m_pCrossplayIcon; // 0x1f4
};

struct UTgAnimBlendByPhysics {
	int32_t PhysicsMap[0xe]; // 0x168
	int32_t LastPhysics; // 0x1a0
};

struct ATgDeploy_PoppyBomb {
	char r_bDetonated : 1; // 0x448
	ObjectProperty m_CachedPlayer; // 0x44c
	FVector r_HitNormal; // 0x454
	float m_fCachedCollisionRadius; // 0x460
	float m_fCachedCollisionHeight; // 0x464
	FRotator r_StuckRotation; // 0x468
	FVector r_CartOffset; // 0x474
};

struct ATgDevice_BurstRifle {
	float m_fQueueFireTime; // 0xaec
	float m_fQueueFireTimeThreshold; // 0xaf0
};

struct UTgAIBehaviorCondition_ManaPercent {
	float ManaPct; // 0x98
};

struct USceneCapture2DHitMaskComponent {
	ObjectProperty TextureTarget; // 0xd0
	ComponentProperty SkeletalMeshComp; // 0xd8
	int32_t MaterialIndex; // 0xe0
	int32_t ForceLOD; // 0xe4
	int32_t HitMaskCullDistance; // 0xe8
	float FadingStartTimeSinceHit; // 0xec
	float FadingPercentage; // 0xf0
	float FadingDurationTime; // 0xf4
	float FadingIntervalTime; // 0xf8
};

struct UTgInventoryObject_Listen_AuraMod {
	TArray<ObjectProperty> m_AffectedActors; // 0xc8
	char m_bAuraIsActive : 1; // 0xd8
	ObjectProperty m_CachedAuraDevice; // 0xdc
};

struct UTgAIBehaviorAction_MoveToRallyPoint {
	ESelectionArbitrator ArbitratorOnMultipleValid; // 0x9c
	char bMustBeSameLane : 1; // 0xa0
};

struct UUIComponent_RatingInteractable {
	ObjectProperty m_mcRatingIcon; // 0x140
};

struct USeqAct_SetVectorComponents {
	FVector OutVector; // 0x108
	float X; // 0x114
	float Y; // 0x118
	float Z; // 0x11c
};

struct ATgDeploy_Rune {
	int32_t r_nRunes[0x3]; // 0x4e0
};

struct UDynamicLightEnvironmentComponent {
	FPointer State; // 0xa8
	float InvisibleUpdateTime; // 0xb0
	float MinTimeBetweenFullUpdates; // 0xb4
	float VelocityUpdateTimeScale; // 0xb8
	float ShadowInterpolationSpeed; // 0xbc
	int32_t NumVolumeVisibilitySamples; // 0xc0
	float LightingBoundsScale; // 0xc4
	FLinearColor AmbientShadowColor; // 0xc8
	FVector AmbientShadowSourceDirection; // 0xd8
	FLinearColor AmbientGlow; // 0xe4
	float LightDistance; // 0xf4
	float ShadowDistance; // 0xf8
	char bCastShadows : 1; // 0xfc
	char bCompositeShadowsFromDynamicLights : 1; // 0xfc
	char bForceCompositeAllLights : 1; // 0xfc
	char bAffectedBySmallDynamicLights : 1; // 0xfc
	char bUseBooleanEnvironmentShadowing : 1; // 0xfc
	char bShadowFromEnvironment : 1; // 0xfc
	char bDynamic : 1; // 0xfc
	char bSynthesizeDirectionalLight : 1; // 0xfc
	char bSynthesizeSHLight : 0; // 0xfc
	char bRequiresNonLatentUpdates : 0; // 0xfc
	char bTraceFromClosestBoundsPoint : 0; // 0xfc
	char bIsCharacterLightEnvironment : 0; // 0xfc
	char bOverrideOwnerLightingChannels : 0; // 0xfc
	char bAlwaysInfluencedByDominantDirectionalLight : 0; // 0xfc
	float ModShadowFadeoutTime; // 0x100
	float ModShadowFadeoutExponent; // 0x104
	FLinearColor MaxModulatedShadowColor; // 0x108
	float DominantShadowTransitionStartDistance; // 0x118
	float DominantShadowTransitionEndDistance; // 0x11c
	float MinShadowAngle; // 0x120
	EDynamicLightEnvironmentBoundsMethod BoundsMethod; // 0x124
	FBoxSphereBounds OverriddenBounds; // 0x128
	FLightingChannelContainer OverriddenLightingChannels; // 0x144
	TArray<ComponentProperty> OverriddenLightComponents; // 0x148
};

struct UTgInventoryObject_Listen_HitWithPetDevice {
	char m_bSkipActiveCheck : 1; // 0xd0
	char m_bSkipStartCooldown : 1; // 0xd0
};

struct UMaterialExpressionConstant3Vector {
	float R; // 0xb0
	float G; // 0xb4
	float B; // 0xb8
};

struct UInterpTrackFaceFX {
	TArray<ObjectProperty> FaceFXAnimSets; // 0xa0
	TArray<FFaceFXTrackKey> FaceFXSeqs; // 0xb0
	ObjectProperty CachedActorFXAsset; // 0xc0
	TArray<FFaceFXSoundCueKey> FaceFXSoundCueKeys; // 0xc8
};

struct UUIComponent_PartyLobbyCustomPanel {
	TArray<ObjectProperty> m_CustomPlayersArray; // 0x120
	TMap<None, None> m_CustomPlayers; // 0x130
	ObjectProperty m_pCustomGame; // 0x178
	ObjectProperty m_pList; // 0x180
	ObjectProperty m_mcName; // 0x188
	ObjectProperty m_mcPlayerCount; // 0x190
	float m_fSpectatorUpdateTimer; // 0x198
	float m_fSpectatorUpdateRate; // 0x19c
};

struct UUIComponent_RankedProgress {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_mcRank; // 0x128
	ObjectProperty m_mcWins; // 0x130
	ObjectProperty m_mcLosses; // 0x138
	ObjectProperty m_mcTier; // 0x140
	ObjectProperty m_mcTPLabel; // 0x148
	ObjectProperty m_mcTP; // 0x150
	ObjectProperty m_pProgress; // 0x158
};

struct UTgDataGroup_Game {
	ObjectProperty m_PlayerData; // 0x16c
	ObjectProperty m_TargetData; // 0x174
	ObjectProperty m_PlayerVitals; // 0x17c
	ObjectProperty m_GameData; // 0x184
	ObjectProperty m_DevicesData; // 0x18c
	ObjectProperty m_EffectData; // 0x194
};

struct UParticleModuleTypeDataPhysX {
	ObjectProperty PhysXParSys; // 0x68
	FPhysXEmitterVerticalLodProperties VerticalLod; // 0x70
};

struct ATgDoorMarker {
	DoorStatus r_eStatus; // 0x29c
	DoorStatus m_eInitStatus; // 0x29d
	ObjectProperty s_CollisionProxy; // 0x2a0
	float m_fProximity; // 0x2a8
	int32_t m_nTeamThatControlsDoor; // 0x2ac
	int32_t m_nMeshAssemblyId; // 0x2b0
	ComponentProperty m_DoorSMC; // 0x2b4
};

struct USeqAct_SetMaterial {
	ObjectProperty NewMaterial; // 0x108
	int32_t MaterialIndex; // 0x110
};

struct APlayerController {
	ObjectProperty Player; // 0x470
	ObjectProperty PlayerCamera; // 0x478
	ACamera* CameraClass; // 0x480
	char bFrozen : 1; // 0x488
	char bPressedJump : 1; // 0x488
	char bDoubleJump : 1; // 0x488
	char bUpdatePosition : 1; // 0x488
	char bUpdating : 1; // 0x488
	char bNeverSwitchOnPickup : 1; // 0x488
	char bCheatFlying : 1; // 0x488
	char bCameraPositionLocked : 1; // 0x488
	char bShortConnectTimeOut : 0; // 0x488
	char bPendingDestroy : 0; // 0x488
	char bWasSpeedHack : 0; // 0x488
	char bWasSaturated : 0; // 0x488
	char bAimingHelp : 0; // 0x488
	char bCameraCut : 0; // 0x488
	char bClientSimulatingViewTarget : 0; // 0x488
	char bHasVoiceHandshakeCompleted : 0; // 0x488
	char bCanPlayOnline : 0; // 0x488
	char bCanShareUserCreatedContent : 0; // 0x488
	char bCanCommunicateVoice : 0; // 0x488
	char bPrivilegesInitialized : 0; // 0x488
	char bCinematicMode : 0; // 0x488
	char bInteractiveMode : 0; // 0x488
	char bCinemaDisableInputMove : 0; // 0x488
	char bCinemaDisableInputLook : 0; // 0x488
	char bRenderHUDFullScreen : 0; // 0x488
	char bIgnoreNetworkMessages : 0; // 0x488
	char bShowKismetDrawText : 0; // 0x488
	char bAcceptSendCorrections : 0; // 0x488
	char bReplicateAllPawns : 0; // 0x488
	char bIsUsingStreamingVolumes : 0; // 0x488
	char bIsExternalUIOpen : 0; // 0x488
	char bIsControllerConnected : 0; // 0x488
	char bCheckSoundOcclusion : 1; // 0x48c
	char bDebugCameraAnims : 1; // 0x48c
	char bBlockCameraAnimsFromOverridingPostProcess : 1; // 0x48c
	char bLogHearSoundOverflow : 1; // 0x48c
	char bShowMoveErrors : 1; // 0x48c
	char bCheckRelevancyThroughPortals : 1; // 0x48c
	char bDebugClientAdjustPosition : 1; // 0x48c
	char bIsInTimelapse : 1; // 0x48c
	char bIsTimelapsePlayOfTheGame : 0; // 0x48c
	float MaxResponseTime; // 0x490
	float WaitDelay; // 0x494
	ObjectProperty AcknowledgedPawn; // 0x498
	EDoubleClickDir DoubleClickDir; // 0x4a0
	char bIgnoreMoveInput; // 0x4a1
	char bIgnoreLookInput; // 0x4a2
	char bRun; // 0x4a3
	char bDuck; // 0x4a4
	char NetPlayerIndex; // 0x4a5
	ObjectProperty ViewTarget; // 0x4a8
	ObjectProperty RealViewTarget; // 0x4b0
	ObjectProperty ControllingDirTrackInst; // 0x4b8
	float FOVAngle; // 0x4c0
	float DesiredFOV; // 0x4c4
	float DefaultFOV; // 0x4c8
	float LODDistanceFactor; // 0x4cc
	FRotator TargetViewRotation; // 0x4d0
	float TargetEyeHeight; // 0x4dc
	FRotator BlendedTargetViewRotation; // 0x4e0
	ObjectProperty myHUD; // 0x4ec
	ObjectProperty mySecondaryHUD; // 0x4f4
	USavedMove* SavedMoveClass; // 0x4fc
	ObjectProperty SavedMoves; // 0x504
	ObjectProperty FreeMoves; // 0x50c
	ObjectProperty PendingMove; // 0x514
	FVector LastAckedAccel; // 0x51c
	float CurrentTimeStamp; // 0x528
	float LastUpdateTime; // 0x52c
	float ServerTimeStamp; // 0x530
	float TimeMargin; // 0x534
	float ClientUpdateTime; // 0x538
	float MaxTimeMargin; // 0x53c
	float LastActiveTime; // 0x540
	int32_t ClientCap; // 0x544
	float DynamicPingThreshold; // 0x548
	float LastPingUpdate; // 0x54c
	float LastSpeedHackLog; // 0x550
	FClientAdjustment PendingAdjustment; // 0x554
	int32_t GroundPitch; // 0x58c
	ObjectProperty CheatManager; // 0x590
	UCheatManager* CheatClass; // 0x598
	ObjectProperty PlayerInput; // 0x5a0
	UPlayerInput* InputClass; // 0x5a8
	FVector FailedPathStart; // 0x5b0
	ComponentProperty CylinderComponent; // 0x5bc
	FString ForceFeedbackManagerClassName; // 0x5c4
	ObjectProperty ForceFeedbackManager; // 0x5d4
	TArray<ObjectProperty> Interactions; // 0x5dc
	TArray<FUniqueNetId> VoiceMuteList; // 0x5ec
	TArray<FUniqueNetId> GameplayVoiceMuteList; // 0x5fc
	TArray<FUniqueNetId> VoicePacketFilter; // 0x60c
	TArray<FConnectedPeerInfo> ConnectedPeers; // 0x61c
	TArray<FUniqueNetId> BestNextHostPeers; // 0x62c
	ObjectProperty MigratedSearchToJoin; // 0x63c
	ObjectProperty OnlineSub; // 0x644
	TScriptInterface<Class> VoiceInterface; // 0x64c
	ObjectProperty OnlinePlayerData; // 0x65c
	float InteractDistance; // 0x664
	FName DelayedJoinSessionName; // 0x668
	TArray<FInputMatchRequest> InputRequests; // 0x670
	float LastBroadcastTime; // 0x680
	FString LastBroadcastString[0x4]; // 0x684
	TArray<FName> PendingMapChangeLevelNames; // 0x6c4
	ObjectProperty MyCoverReplicator; // 0x6d4
	TArray<FDebugTextInfo> DebugTextList; // 0x6dc
	float SpectatorCameraSpeed; // 0x6ec
	ObjectProperty PendingSwapConnection; // 0x6f0
	float MinRespawnDelay; // 0x6f8
	int32_t MaxConcurrentHearSounds; // 0x6fc
	TArray<ComponentProperty> HearSoundActiveComponents; // 0x700
	TArray<ComponentProperty> HearSoundPoolComponents; // 0x710
	TArray<ObjectProperty> HiddenActors; // 0x720
	float m_RigidBodyMaxPositionErrorThreshold; // 0x730
	float LastSpectatorStateSynchTime; // 0x734
	FColor CurrentUpdateDebugColor; // 0x738
	DelegateProperty __OnMissingPeersUnregistered__Delegate; // 0x73c
	DelegateProperty __CanUnpause__Delegate; // 0x74c
	DelegateProperty __InputMatchDelegate__Delegate; // 0x75c
};

struct ADynamicPylon {
	char bMoving : 1; // 0x490
};

struct UPath_WithinDistanceEnvelope {
	float MaxDistance; // 0x6c
	float MinDistance; // 0x70
	char bSoft : 1; // 0x74
	char bOnlyThrowOutNodesThatLeaveEnvelope : 1; // 0x74
	float SoftStartPenalty; // 0x78
	FVector EnvelopeTestPoint; // 0x7c
};

struct UAnimNotify_ForceField {
	ComponentProperty ForceFieldComponent; // 0x68
	char bAttach : 1; // 0x70
	FName SocketName; // 0x74
	FName BoneName; // 0x7c
};

struct USkelControlSpline {
	int32_t SplineLength; // 0xd0
	EAxis SplineBoneAxis; // 0xd4
	ESplineControlRotMode BoneRotMode; // 0xd5
	char bInvertSplineBoneAxis : 1; // 0xd8
	float EndSplineTension; // 0xdc
	float StartSplineTension; // 0xe0
};

struct ADynamicTriggerVolume {
	char bEnabled : 1; // 0x2bc
};

struct UMcpGroupsBase {
	FString McpGroupsManagerClassName; // 0x78
	TArray<FMcpGroupList> GroupLists; // 0x88
	DelegateProperty __OnCreateGroupComplete__Delegate; // 0x98
	DelegateProperty __OnDeleteGroupComplete__Delegate; // 0xa8
	DelegateProperty __OnQueryGroupsComplete__Delegate; // 0xb8
	DelegateProperty __OnQueryGroupMembersComplete__Delegate; // 0xc8
	DelegateProperty __OnAddGroupMembersComplete__Delegate; // 0xd8
	DelegateProperty __OnRemoveGroupMembersComplete__Delegate; // 0xe8
	DelegateProperty __OnDeleteAllGroupsComplete__Delegate; // 0xf8
	DelegateProperty __OnQueryGroupInvitesComplete__Delegate; // 0x108
	DelegateProperty __OnAcceptGroupInviteComplete__Delegate; // 0x118
};

struct UPComImageDownloader {
	TArray<FPComImageDownload> DownloadImages; // 0x60
	DelegateProperty __OnPComImageDownloaded__Delegate; // 0x70
};

struct ATgDeployableFactory_DeviceChest {
	TArray<int32_t> m_nDeviceIds; // 0x2dc
};

struct UPath_MinDistBetweenSpecsOfType {
	float MinDistBetweenSpecTypes; // 0x6c
	FVector InitLocation; // 0x70
	UReachSpec* ReachSpecClass; // 0x7c
};

struct UTgAnimTurnInPlace {
	char bInitialized : 1; // 0x124
	char bRootRotInitialized : 1; // 0x124
	char m_bDisableRotation : 1; // 0x124
	char bDelayBlendOutToPlayAnim : 1; // 0x124
	char bPlayingTurnTransition : 1; // 0x124
	char m_bCanChooseNewTransition : 1; // 0x124
	char m_bOverrideInterpolationTime : 1; // 0x124
	char m_bMirrorOffsetWhenPawnMirrored : 1; // 0x124
	char m_bAlwaysUpdateYawOffset : 0; // 0x124
	char m_bIgnoreTransitionAnimations : 0; // 0x124
	char m_bOnlyUpdateRotationWhenMoving : 0; // 0x124
	char m_bTurnTowardsVelocity : 0; // 0x124
	char m_bUsePawnRotationAtZeroVelocity : 0; // 0x124
	char m_bUse180ShortestRoute : 0; // 0x124
	char m_bConstrictIdleYawOffset : 0; // 0x124
	char m_bDisableAllTurning : 0; // 0x124
	char m_bJustBecameRelevant : 0; // 0x124
	int32_t LastPawnYaw; // 0x128
	int32_t LastPawnPitch; // 0x12c
	float PawnRotationRate; // 0x130
	int32_t LastRootBoneYaw; // 0x134
	int32_t YawOffset; // 0x138
	int32_t PitchOffset; // 0x13c
	float RelativeOffset; // 0x140
	ObjectProperty m_TgPawn; // 0x144
	TArray<ObjectProperty> OffsetNodes2; // 0x14c
	TArray<FRotTransitionInfo> RotTransitions; // 0x15c
	float TransitionBlendTime; // 0x16c
	int32_t CurrentTransitionIndex; // 0x170
	float TransitionThresholdAngle; // 0x174
	ForcedTransitionAngle m_ForcedTransitionAngle; // 0x178
	float m_fChooseNewTransitionPercent; // 0x17c
	float m_fInterpolationTime; // 0x180
	float m_RemainingInterpolationTime; // 0x184
	TArray<ObjectProperty> PlayerNodes; // 0x188
	float m_fIgnoredTransitionTime; // 0x198
	float m_fTurnInterpTime; // 0x19c
	FRotator m_InterpRotation; // 0x1a0
};

struct UTgData_Notifications {
	TArray<FNotification> m_Notifications; // 0xbc
};

struct UTgAIBehaviorCondition_CombatTargetHasEffectCategory {
	char bEffectGroupCategoryCheckInstigator : 1; // 0x98
	int32_t EffectCategoryId; // 0x9c
	int32_t EffectGroupId; // 0xa0
};

struct UUIComponent_PopupManager {
	TArray<FSceneData> m_PopupStack; // 0x118
	int32_t m_nCloseCurrentPopupHandle; // 0x128
	char m_bAllowPopups : 1; // 0x12c
};

struct UInterpTrackInstFloatMaterialParam {
	TArray<FFloatMaterialParamMICData> MICInfos; // 0x60
	ObjectProperty InstancedTrack; // 0x70
};

struct USequenceAction {
	FName HandlerName; // 0xec
	char bCallHandler : 1; // 0xf4
	TArray<ObjectProperty> Targets; // 0xf8
};

struct UUILandingPanelManager {
	FPointer VfTable_ITgCallbackInterface; // 0x84
	ObjectProperty m_pMovie; // 0x8c
	TMap<None, None> m_JsonDiscountData; // 0x94
	ObjectProperty m_CallbackContainer; // 0xdc
};

struct UUIComponent_LeagueTierEntry {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcSubtitle; // 0x128
	ObjectProperty m_mcIcon; // 0x130
	TArray<ObjectProperty> m_mcLegendIcons; // 0x138
};

struct UConsole {
	ObjectProperty ConsoleTargetPlayer; // 0xb0
	ObjectProperty DefaultTexture_Black; // 0xb8
	ObjectProperty DefaultTexture_White; // 0xc0
	FName ConsoleKey; // 0xc8
	FName TypeKey; // 0xd0
	int32_t MaxScrollbackSize; // 0xd8
	TArray<FString> Scrollback; // 0xdc
	int32_t SBHead; // 0xec
	int32_t SBPos; // 0xf0
	int32_t HistoryTop; // 0xf4
	int32_t HistoryBot; // 0xf8
	int32_t HistoryCur; // 0xfc
	FString History[0x10]; // 0x100
	char bNavigatingHistory : 1; // 0x200
	char bCaptureKeyInput : 1; // 0x200
	char bCtrl : 1; // 0x200
	char bEnableUI : 1; // 0x200
	char bAutoCompleteLocked : 1; // 0x200
	char bRequireCtrlToNavigateAutoComplete : 1; // 0x200
	char bIsRuntimeAutoCompleteUpToDate : 1; // 0x200
	FString TypedStr; // 0x204
	int32_t TypedStrPos; // 0x214
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x218
	TArray<FAutoCompleteCommand> AutoCompleteList; // 0x228
	int32_t AutoCompleteIndex; // 0x238
	FAutoCompleteNode AutoCompleteTree; // 0x23c
	TArray<int32_t> AutoCompleteIndices; // 0x260
};

struct UTgAIBehaviorCondition_ArmorPercent {
	float ArmorPct; // 0x98
};

struct USlotToSlotReachSpec {
	char SpecDirection; // 0xc8
};

struct UTgInventoryObject_Listen_LoogieExplodedHit {
	char m_bNeedToApplyCooldown : 1; // 0xd0
};

struct UTgHeadShotComponent {
	ComponentProperty m_SkelComp; // 0x25c
	FName m_HeadBone; // 0x264
	FVector m_vHeadOffset; // 0x26c
};

struct UTgAIBehaviorObject {
	int32_t NodeToken; // 0x60
};

struct UUIComponent_DeviceDetailsStat {
	ObjectProperty m_mcTF; // 0x120
	ObjectProperty m_mcBar; // 0x128
};

struct UNavMeshGoalFilter_NotNearOtherAI {
	float DistanceToCheck; // 0x6c
};

struct UTgAnimNodeTriggerCameraAnim {
	ObjectProperty CameraAnim; // 0x114
	float fBlendInTime; // 0x11c
	float fBlendOutTime; // 0x120
	char bLoopAnimation : 1; // 0x124
	char bBlendInOnBecomeRelevant : 1; // 0x124
	char bBlendInOnReplayAnim : 1; // 0x124
	char bBlendOutOnStopFire : 1; // 0x124
	char bPlayAnimInLocalSpace : 1; // 0x124
	TG_EQUIP_POINT m_StopFireEquipSlotTarget; // 0x128
	ObjectProperty CameraAnimInst; // 0x12c
};

struct USeqVar_Player {
	TArray<ObjectProperty> Players; // 0xc4
	char bAllPlayers : 1; // 0xd4
	int32_t PlayerIdx; // 0xd8
};

struct ATgDeployableFactory {
	int32_t nCurrentCount; // 0x2c0
	float s_fLastSpawnTime; // 0x2c4
	char s_bSpawnOnce : 1; // 0x2c8
	char bForcePreventDisenchant : 1; // 0x2c8
	int32_t s_nDeployableId; // 0x2cc
	int32_t s_SpawnGroupNum; // 0x2d0
	int32_t nShardCost; // 0x2d4
	float s_fDeployableLifeSpan; // 0x2d8
};

struct UUIDataLeagueManager {
	TArray<ObjectProperty> m_LeagueArray; // 0x70
	TMap<None, None> m_Leagues; // 0x80
	ObjectProperty m_EOM; // 0xc8
	ObjectProperty m_TierChange; // 0xd0
};

struct USeqAct_PlayCameraAnim {
	ObjectProperty CameraAnim; // 0x108
	char bLoop : 1; // 0x110
	char bRandomStartTime : 1; // 0x110
	float BlendInTime; // 0x114
	float BlendOutTime; // 0x118
	float Rate; // 0x11c
	float IntensityScale; // 0x120
	ECameraAnimPlaySpace PlaySpace; // 0x124
	ObjectProperty UserDefinedSpaceActor; // 0x128
};

struct UTgTargetAimTrackingCurves {
	FName SettingsName; // 0x60
	FRawDistributionFloat StrengthByAccuracyX; // 0x68
	FRawDistributionFloat StrengthByDesiredAngleX; // 0x8c
	FRawDistributionFloat StrengthByAccuracyY; // 0xb0
	FRawDistributionFloat StrengthByDesiredAngleY; // 0xd4
};

struct ATgDevice_AndroxusInhand {
	int32_t m_nAndroLeg2StackCount; // 0xaec
	float m_fQueueFireTime; // 0xaf0
	float m_fQueueFireTimeThreshold; // 0xaf4
};

struct UInterpTrackInstFaceFX {
	char bFirstUpdate : 1; // 0x60
	float LastUpdatePosition; // 0x64
};

struct UUIDataProvider_OnlinePlayerStorageArray {
	ObjectProperty PlayerStorage; // 0x70
	int32_t PlayerStorageId; // 0x78
	FString ColumnHeaderText; // 0x7c
	TArray<FName> Values; // 0x8c
};

struct UTgAIBehaviorAction_MoveToAvoidableProjectile {
	char bMustBeEnemy : 1; // 0x9c
	char bIgnoreInsideCollision : 1; // 0x9c
	char bMoveAway : 1; // 0x9c
};

struct UUIComponent_OwnershipProgress {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcOwnedAmt; // 0x128
	ObjectProperty m_mcTotalAmt; // 0x130
	ObjectProperty m_mcProgress; // 0x138
};

struct UMcpClashMobBase {
	FString McpClashMobClassName; // 0x78
	DelegateProperty __OnQueryChallengeListComplete__Delegate; // 0x88
	DelegateProperty __OnDownloadChallengeFileComplete__Delegate; // 0x98
	DelegateProperty __OnAcceptChallengeComplete__Delegate; // 0xa8
	DelegateProperty __OnQueryChallengeUserStatusComplete__Delegate; // 0xb8
	DelegateProperty __OnUpdateChallengeUserProgressComplete__Delegate; // 0xc8
	DelegateProperty __OnUpdateChallengeUserRewardComplete__Delegate; // 0xd8
};

struct UTgAnimNodeFidget {
	float m_SelectedIdleTimeBeforeFidgeting; // 0x144
	float m_CurrentIdleTime; // 0x148
	float BlendToFidgetDuration; // 0x14c
	float BlendFromFidgetDuration; // 0x150
	EFidgetType FidgetType; // 0x154
	float MinimumIdleTimeBeforeFidgeting; // 0x158
	float MaximumIdleTimeBeforeFidgeting; // 0x15c
	char AllowIdleAnimToComplete : 1; // 0x160
	float ChanceToFidgetWhenIdleCompletes; // 0x164
};

struct UUIData_TreasureRoll {
	ObjectProperty m_pChestItem; // 0x60
	Fdword m_dwRollDelay; // 0x68
	TArray<ObjectProperty> m_pRolledItems; // 0x6c
};

struct UTgSeqAct_SetPlayerLevel {
	int32_t m_nLevel; // 0x108
};

struct UTgAnimNodeBlendByMeleeIdle {
	ObjectProperty m_TgPawn; // 0x168
};

struct ATgSpawnTeleporterExit {
	int32_t nTaskForce; // 0x280
	int32_t nLane; // 0x284
	int32_t nGamePhase; // 0x288
	int32_t nPriority; // 0x28c
	char bEnabled : 1; // 0x290
};

struct UTgAIBehaviorComposite_SubTree {
	ObjectProperty ChildTree; // 0xb8
};

struct UOnlineTitleFileDownloadMcp {
	TArray<FTitleFileMcp> TitleFiles; // 0x104
	int32_t DownloadCount; // 0x114
};

struct UTgAIBehaviorCondition_NearbyAllyAttacked {
	float TimeThreshold; // 0x98
	float AllyDistanceThreshold; // 0x9c
	float AttackerDistanceThreshold; // 0xa0
};

struct USeqAct_ConvertToString {
	char bIncludeVarComment : 1; // 0x108
	FString VarSeparator; // 0x10c
	int32_t NumberOfInputs; // 0x11c
};

struct UTgGameplayCurvesSet_Recoil {
	TArray<ObjectProperty> HorizRecoil; // 0x64
	TArray<ObjectProperty> VertRecoil; // 0x74
	EPaladinsRecoilType RecoilType; // 0x84
};

struct UTgAIUtilityFilter_DistanceFromPawn {
	float DistanceCutoff; // 0xc0
	char bInverse : 1; // 0xc4
};

struct UUIDataProvider_MenuItem {
	EMenuOptionType OptionType; // 0x94
	TArray<FName> OptionSet; // 0x98
	FString DataStoreMarkup; // 0xa8
	FString DescriptionMarkup; // 0xb8
	FName RequiredGameMode; // 0xc8
	FString FriendlyName; // 0xd0
	FString CustomFriendlyName; // 0xe0
	FString Description; // 0xf0
	char bEditableCombo : 1; // 0x100
	char bNumericCombo : 1; // 0x100
	char bKeyboardOrMouseOption : 1; // 0x100
	char bOnlineOnly : 1; // 0x100
	char bOfflineOnly : 1; // 0x100
	char bSearchAllInis : 1; // 0x100
	char bRemoveOn360 : 1; // 0x100
	char bRemoveOnPC : 1; // 0x100
	char bRemoveOnPS3 : 0; // 0x100
	char bRemoveOnDingo : 0; // 0x100
	int32_t EditBoxMaxLength; // 0x104
	FUIRangeData RangeData; // 0x108
	TArray<FName> SchemaCellFields; // 0x11c
	FString IniName; // 0x12c
};

struct UNavMeshGoalFilter_MinPathDistance {
	int32_t MinDistancePathShouldBe; // 0x6c
};

struct AWebServer {
	FString ServerName; // 0x2e4
	FString Applications[0xa]; // 0x2f4
	FString ApplicationPaths[0xa]; // 0x394
	char bEnabled : 1; // 0x434
	int32_t ListenPort; // 0x438
	int32_t MaxConnections; // 0x43c
	int32_t DefaultApplication; // 0x440
	int32_t ExpirationSeconds; // 0x444
	FString ServerURL; // 0x448
	ObjectProperty ApplicationObjects[0xa]; // 0x458
	int32_t ConnectionCount; // 0x4a8
	int32_t ConnID; // 0x4ac
};

struct ATgDevice_ChurchillInhand {
	float m_fADSRecoilMultiplier; // 0xaec
	float m_fAmmoRefundChanceADS; // 0xaf0
	float m_fAmmoRefundPercOnHit; // 0xaf4
	ObjectProperty m_CachedPawnOwner; // 0xaf8
};

struct ATgDeviceVolume {
	char bPainCausing : 1; // 0x2bc
	char BACKUP_bPainCausing : 1; // 0x2bc
	char s_bDeviceActive : 1; // 0x2bc
	ObjectProperty PainTimer; // 0x2c0
	ObjectProperty DamageInstigator; // 0x2c8
	int32_t m_nMapObjectId; // 0x2d0
	int32_t s_nDeviceId; // 0x2d4
	ObjectProperty s_DeviceFireMode; // 0x2d8
	char s_nTaskForce; // 0x2e0
};

struct UForceFeedbackWaveform {
	char bIsLooping : 1; // 0x60
	TArray<FWaveformSample> Samples; // 0x64
	float WaveformFalloffStartDistance; // 0x74
	float MaxWaveformDistance; // 0x78
};

struct USoundNodeWaveParam {
	FName WaveParameterName; // 0x74
};

struct UMaterialExpressionFontSampleParameter {
	FName ParameterName; // 0xbc
	FGuid ExpressionGUID; // 0xc4
	FName Group; // 0xd4
};

struct UUIComponent_GoalReward {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcItemName; // 0x128
	ObjectProperty m_mcGoal; // 0x130
	ObjectProperty m_mcOwned; // 0x138
	ObjectProperty m_mcLock; // 0x140
	ObjectProperty m_mcIconRarity; // 0x148
	ObjectProperty m_mcIconIcon; // 0x150
	ObjectProperty m_mcIconChestIcon; // 0x158
	ObjectProperty m_Progress; // 0x160
};

struct UUIComponent_BattlePassPicks {
	ObjectProperty m_grGroup; // 0x120
	ObjectProperty m_mcPicksHeader; // 0x128
	ObjectProperty m_mcBPActiveThrough; // 0x130
	ObjectProperty m_mcBonusLabel; // 0x138
	ObjectProperty m_mcBonusAmount; // 0x140
	ObjectProperty m_pSpoilerToggle; // 0x148
	ObjectProperty m_pPickWeeks; // 0x150
	ObjectProperty m_pBecomeBP; // 0x158
};

struct UMaterialExpressionLandscapeLayerBlend {
	TArray<FLayerBlendInput> Layers; // 0xb0
	FGuid ExpressionGUID; // 0xc0
};

struct ATgDevice_Telepunch {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
	ObjectProperty m_HitCharacter; // 0xaf4
	char m_bLiftApplied : 1; // 0xafc
	char m_bStealthApplied : 1; // 0xafc
	float m_fLerpTime; // 0xb00
	FVector m_vHitCharacterInitialLocation; // 0xb04
	float m_fHorizontalHitMaxDist; // 0xb10
	float m_fVerticalHitMaxDist; // 0xb14
	float m_fTeleportPreferedDistance; // 0xb18
	float m_fTargetLockTime; // 0xb1c
};

struct USeqAct_SetString {
	FString Target; // 0x108
	FString Value; // 0x118
};

struct UMaterialExpressionFluidNormal {
	FExpressionInput Coordinates; // 0xb0
};

struct ATgDevice_VanguardShield {
	DelegateProperty __InterruptFiringDelegate__Delegate; // 0xaec
};

struct ATgDevice_FragGrenade {
	char m_bThrownGrenade : 1; // 0xaec
};

struct UUIInteractable_NavPanel_Play {
	float m_fFlareScaleTime[0x4]; // 0x168
	float m_fFlareAlphaTime[0x5]; // 0x178
	float m_fFlareScaleTimer[0x4]; // 0x18c
	float m_fFlareAlphaTimer[0x5]; // 0x19c
	ObjectProperty m_mcFlare; // 0x1b0
	ObjectProperty m_mcQueueTF0; // 0x1b8
	ObjectProperty m_mcQueueTF1; // 0x1c0
	ObjectProperty m_mcPrompt; // 0x1c8
	ObjectProperty m_mcCTATF; // 0x1d0
};

struct UCameraModifier_CameraShake {
	TArray<FCameraShakeInstance> ActiveShakes; // 0x80
	float SplitScreenShakeScale; // 0x90
};

struct UTgSeqAct_ToggleStaticMeshSilhouette {
	ObjectProperty SMA; // 0x108
	char bIsEnabled : 1; // 0x110
};

struct UTgSeqEvent_PlayerMoved {
	int32_t ResultEnergy; // 0x128
};

struct ATgAIController_Behavior {
	TArray<FDeferredNode> DeferredNodes; // 0x68c
	int32_t BlackboardType; // 0x69c
	FName BehaviorTreeAsName; // 0x6a0
	FPointer SensorTree; // 0x6a8
	FPointer SensorDynamicMemory; // 0x6b0
	FPointer SensorStaticMemory; // 0x6b8
	FPointer WorkerTree; // 0x6c0
	FPointer WorkerTreeCachedStatus; // 0x6c8
	FPointer WorkerDynamicMemory; // 0x6d0
	FPointer WorkerStaticMemory; // 0x6d8
	int32_t SensorNodeCount; // 0x6e0
	int32_t WorkerNodeCount; // 0x6e4
	float LastUpdateTime; // 0x6e8
	TArray<FBehaviorStateData> CachedNodeData; // 0x6ec
	float m_fCooldownModifier; // 0x6fc
	float m_fLeadAccuracy; // 0x700
	float m_fDegreeMissedMagnitude; // 0x704
	float m_fMissLikelihood; // 0x708
	ObjectProperty LocalRepulsorSolver; // 0x70c
	UTgAILocalPositionSolver* LocalRepulsorSolverClass; // 0x714
	TArray<int32_t> m_IgnoredDeployableIds; // 0x71c
	FNavigationQueueEntry CurrentNavigation; // 0x72c
	float NavigationSearchModifier; // 0x758
	float NavigationSearchModifier_Max; // 0x75c
	float NavigationSearchModifier_Min; // 0x760
	float TimeStuck; // 0x764
	FFollowLaneState FollowLaneForwardState; // 0x768
	FFollowLaneState FollowLaneReverseState; // 0x770
	char bIsAlive : 1; // 0x778
	char m_bPaused : 1; // 0x778
	char bIsRotationLocked : 1; // 0x778
	char bIsStunned : 1; // 0x778
	char bInHostileAbility : 1; // 0x778
	char bIsSafeToRecall : 1; // 0x778
	char bInEnemyTowerRadius : 1; // 0x778
	char bInFriendlyTowerRadius : 1; // 0x778
	char bInEnemyMinotaurRadius : 0; // 0x778
	char bInFriendlyMinotaurRadius : 0; // 0x778
	char bIsTargetOfEnemyTowerOrMinotaur : 0; // 0x778
	char bCombatTargetInEnemyTowerRadius : 0; // 0x778
	char bCombatTargetInFriendlyTowerRadius : 0; // 0x778
	char bCombatTargetInEnemyMinotaurRadius : 0; // 0x778
	char bCombatTargetInFriendlyMinotaurRadius : 0; // 0x778
	char bCombatTargetIsTargetOfFriendlyTowerOrMinotaur : 0; // 0x778
	char bIsAtFortress : 0; // 0x778
	char bIsAtEnemyFortress : 0; // 0x778
	char bIsAtCachedRallyPoint : 0; // 0x778
	char bBtDebugSpawnPaused : 0; // 0x778
	char bBtDebugPaused : 0; // 0x778
	char bBtDebugStep : 0; // 0x778
	char bBtDebugClientOverlay : 0; // 0x778
	FVector NextFearDirection; // 0x77c
	float PawnCollisionHeight; // 0x788
	float PawnCollisionRadius; // 0x78c
	float DeviceRanges[0x14]; // 0x790
	ObjectProperty CombatTarget; // 0x7e0
	ObjectProperty CombatTargetAsPawn; // 0x7e8
	int32_t EnemyMinionsInEnemyTowerRadius; // 0x7f0
	int32_t FriendlyMinionsInEnemyTowerRadius; // 0x7f4
	int32_t EnemyMinionsInFriendlyTowerRadius; // 0x7f8
	int32_t FriendlyMinionsInFriendlyTowerRadius; // 0x7fc
	int32_t EnemyGodsInEnemyTowerRadius; // 0x800
	int32_t FriendlyGodsInEnemyTowerRadius; // 0x804
	int32_t EnemyGodsInFriendlyTowerRadius; // 0x808
	int32_t FriendlyGodsInFriendlyTowerRadius; // 0x80c
	float HealthOfNearestEnemyTower; // 0x810
	float HealthOfNearestFriendlyTower; // 0x814
	ObjectProperty LaneMoveTarget; // 0x818
	TArray<ObjectProperty> VisibleActorsToAvoid; // 0x820
	TArray<ObjectProperty> CachedTowers; // 0x830
	TArray<ObjectProperty> CachedGods; // 0x840
	TArray<ObjectProperty> EnemyControllersInSightRadius; // 0x850
	TArray<ObjectProperty> FriendlyControllersInSightRadius; // 0x860
	EBotDifficultyLevel Difficulty; // 0x870
	EUseDeviceAimType LastUseDeviceAimType; // 0x871
	FVector TargetLastKnownLocation; // 0x874
	ObjectProperty CurrentAssaultPoint; // 0x880
	float m_fUnstuckJumpFrequency; // 0x888
	float m_fLastUnstuckJumpTime; // 0x88c
	TArray<FIncomingDamageEntry> IncomingDamage; // 0x890
	ObjectProperty CachedRallyVolume; // 0x8a0
	int32_t RandomRallyPointIndex; // 0x8a8
	FVector AlliedFortressLookDir; // 0x8ac
	FVector EnemyFortressLookDir; // 0x8b8
	ObjectProperty AlliedFortress; // 0x8c4
	ObjectProperty EnemyFortress; // 0x8cc
	FVector StrafeDir; // 0x8d4
	float LastStrafeDirUpdate; // 0x8e0
	float StrafeDirUpdateTime; // 0x8e4
	UTgAIUtilityHandle* UtilityHandleClass; // 0x8e8
	ObjectProperty UtilityHandle; // 0x8f0
	ObjectProperty EscortActor; // 0x8f8
	float EscortMinDistance; // 0x900
	float EscortMaxDistance; // 0x904
	int32_t m_nDevicesLockingInput; // 0x908
};

struct UCloudSaveSystem {
	TScriptInterface<Class> KeyValueStore; // 0x60
	TScriptInterface<Class> DataBlobStore; // 0x70
	TArray<FGetSaveDataCallbackStruct> OnGetSaveDataCallbacks; // 0x80
	TArray<FSetSaveDataCallbackStruct> OnSetSaveDataCallbacks; // 0x90
	DelegateProperty DeleteSaveDataCallback; // 0xa0
	int32_t ActiveSlotForDelete; // 0xb0
	TArray<FSaveSlotOperation> ActiveSaveSlotOperations; // 0xb4
	DelegateProperty __OnGetSaveDataCallback__Delegate; // 0xc4
	DelegateProperty __SaveSystemCallback__Delegate; // 0xd4
};

struct UClient {
	float MinDesiredFrameRate; // 0x68
	float DisplayGamma; // 0x6c
	float InitialButtonRepeatDelay; // 0x70
	float ButtonRepeatDelay; // 0x74
};

struct USeqAct_GetLocationAndRotation {
	FVector Location; // 0x108
	FVector RotationVector; // 0x114
	FVector Rotation; // 0x120
	FName SocketOrBoneName; // 0x12c
};

struct UGameCheatManager {
	ObjectProperty DebugCameraControllerRef; // 0x80
	ADebugCameraController* DebugCameraControllerClass; // 0x88
	FString DebugCameraControllerClassName; // 0x90
};

struct UUIComponent_ShopItems {
	char m_bRealMoneyDataReady : 1; // 0x120
	ObjectProperty m_mcLoadingTF; // 0x124
	ObjectProperty m_pPrevArrow; // 0x12c
	ObjectProperty m_pNextArrow; // 0x134
	ObjectProperty m_pItemList; // 0x13c
	ObjectProperty m_grInput; // 0x144
	ObjectProperty m_akOwnedItemClicked; // 0x14c
};

struct UParticleModuleUberRainSplashB {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector ColorOverLife; // 0xc0
	FRawDistributionFloat AlphaOverLife; // 0xe4
	FRawDistributionVector LifeMultiplier; // 0x108
	char MultiplyX : 1; // 0x12c
	char MultiplyY : 1; // 0x12c
	char MultiplyZ : 1; // 0x12c
	FRawDistributionFloat StartRotationRate; // 0x130
};

struct UPBRuleNodeBase {
	TArray<FPBRuleLink> NextRules; // 0x60
};

struct UTgSkelCon_WheelSpinner {
	float m_fWheelRadius; // 0x100
	FVector m_vAxis; // 0x104
	float m_fVelocity; // 0x110
};

struct UTgDeviceForm_HexaFire {
	ObjectProperty m_LeftRocket1p; // 0x2bc
	ObjectProperty m_LeftRocket3p; // 0x2c4
	ObjectProperty m_RightRocket1p; // 0x2cc
	ObjectProperty m_RightRocket3p; // 0x2d4
	char m_bFiringRightRocket : 1; // 0x2dc
};

struct ATgDeploy_Molotov {
	TArray<FMolotovPointInfo> m_PointInfos; // 0x1a64
	FMolotovCenterInfo m_CenterInfo; // 0x1a74
	TArray<FMolotovTriangleInfo> m_TriInfos; // 0x1abc
	TArray<FMolotovStrandInfo> m_StrandInfos; // 0x1acc
	FMolotovGrowthInfo m_GrowthInfo; // 0x1adc
	FMolotovGeneralSettings m_Settings; // 0x1af8
};

struct UUIScene_UIClassSelect {
	Fdword m_dwHoveredClass; // 0x154
	ObjectProperty m_pClassList; // 0x158
	ObjectProperty m_pInfoPanel; // 0x160
	ObjectProperty m_grInput; // 0x168
};

struct USeqEvent_MobileLook {
	float Yaw; // 0x138
	float StickStrength; // 0x13c
	FVector RotationVector; // 0x140
};

struct USeqAct_CastToInt {
	char bTruncate : 1; // 0x108
	float Value; // 0x10c
	int32_t IntResult; // 0x110
};

struct UInterpTrackLinearColorBase {
	FInterpCurveLinearColor LinearColorTrack; // 0xa0
	float CurveTension; // 0xb4
};

struct UInterpGroup {
	FPointer VfTable_FInterpEdInputInterface; // 0x60
	TArray<ObjectProperty> InterpTracks; // 0x68
	FName GroupName; // 0x78
	FColor GroupColor; // 0x80
	TArray<ObjectProperty> GroupAnimSets; // 0x84
	char bCollapsed : 1; // 0x94
	char bVisible : 1; // 0x94
	char bIsFolder : 1; // 0x94
	char bIsParented : 1; // 0x94
	char bIsSelected : 1; // 0x94
};

struct UParticleModulePhysicsVolumes {
	FRawDistributionFloat GlobalInfluence; // 0x68
	EParticleLevelInfluenceType LevelInfluenceType; // 0x8c
};

struct USeqAct_MultiLevelStreaming {
	TArray<FLevelStreamingNameCombo> Levels; // 0x124
	char bUnloadAllOtherLevels : 1; // 0x134
	char bStatusIsOk : 1; // 0x134
};

struct UParticleModuleUberLTISIVCLILIRSSBLIRR {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartVelocity; // 0xc0
	FRawDistributionFloat StartVelocityRadial; // 0xe4
	FRawDistributionVector ColorOverLife; // 0x108
	FRawDistributionFloat AlphaOverLife; // 0x12c
	FRawDistributionVector StartLocation; // 0x150
	FRawDistributionFloat StartRotation; // 0x174
	FRawDistributionVector SizeLifeMultiplier; // 0x198
	char SizeMultiplyX : 1; // 0x1bc
	char SizeMultiplyY : 1; // 0x1bc
	char SizeMultiplyZ : 1; // 0x1bc
	FRawDistributionFloat StartRotationRate; // 0x1c0
};

struct UUISceneClient {
	FPointer VfTable_FExec; // 0x70
	FPointer RenderViewport; // 0x78
	FIntPoint MousePosition; // 0x80
	ObjectProperty DataStoreManager; // 0x88
	FMatrix CanvasToScreen; // 0x90
	FMatrix InvCanvasToScreen; // 0xd0
	ObjectProperty UIScenePostProcess; // 0x110
	char bEnablePostProcess : 1; // 0x118
};

struct USpeedTreeComponentFactory {
	ComponentProperty SpeedTreeComponent; // 0x64
};

struct UOnlineStatsRead {
	FString LeaderboardName; // 0x84
};

struct USeqEvent_Console {
	FName ConsoleEventName; // 0x128
	FString EventDesc; // 0x130
};

struct UMaterialExpressionSubtract {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UTextureRenderTarget {
	char bUpdateImmediate : 1; // 0x100
	char bNeedsTwoCopies : 1; // 0x100
	char bRenderOnce : 1; // 0x100
	float TargetGamma; // 0x104
};

struct UPBRuleNodeLODQuad {
	float MassiveLODDistanceScale; // 0x70
};

struct UOnlineAuthInterfaceImpl {
	FPointer VfTable_IOnlineAuthInterface; // 0x60
	ObjectProperty OwningSubsystem; // 0x68
	char bAuthReady : 1; // 0x70
	FSparseArray_Mirror ClientAuthSessions; // 0x74
	FSparseArray_Mirror ServerAuthSessions; // 0xac
	FSparseArray_Mirror PeerAuthSessions; // 0xe4
	FSparseArray_Mirror LocalClientAuthSessions; // 0x11c
	FSparseArray_Mirror LocalServerAuthSessions; // 0x154
	FSparseArray_Mirror LocalPeerAuthSessions; // 0x18c
	TArray<DelegateProperty> AuthReadyDelegates; // 0x1c4
	TArray<DelegateProperty> ClientAuthRequestDelegates; // 0x1d4
	TArray<DelegateProperty> ServerAuthRequestDelegates; // 0x1e4
	TArray<DelegateProperty> ClientAuthResponseDelegates; // 0x1f4
	TArray<DelegateProperty> ServerAuthResponseDelegates; // 0x204
	TArray<DelegateProperty> ClientAuthCompleteDelegates; // 0x214
	TArray<DelegateProperty> ServerAuthCompleteDelegates; // 0x224
	TArray<DelegateProperty> ClientAuthEndSessionRequestDelegates; // 0x234
	TArray<DelegateProperty> ServerAuthRetryRequestDelegates; // 0x244
	TArray<DelegateProperty> ClientConnectionCloseDelegates; // 0x254
	TArray<DelegateProperty> ServerConnectionCloseDelegates; // 0x264
	DelegateProperty __OnAuthReady__Delegate; // 0x274
	DelegateProperty __OnClientAuthRequest__Delegate; // 0x284
	DelegateProperty __OnServerAuthRequest__Delegate; // 0x294
	DelegateProperty __OnClientAuthResponse__Delegate; // 0x2a4
	DelegateProperty __OnServerAuthResponse__Delegate; // 0x2b4
	DelegateProperty __OnClientAuthComplete__Delegate; // 0x2c4
	DelegateProperty __OnServerAuthComplete__Delegate; // 0x2d4
	DelegateProperty __OnClientAuthEndSessionRequest__Delegate; // 0x2e4
	DelegateProperty __OnServerAuthRetryRequest__Delegate; // 0x2f4
	DelegateProperty __OnClientConnectionClose__Delegate; // 0x304
	DelegateProperty __OnServerConnectionClose__Delegate; // 0x314
};

struct UTgInventoryObject_Listen_Combo_Viktor {
	TArray<FTimedMarkedTarget> m_MarkedTargets; // 0xd0
};

struct UTgCached_LootItem {
	int32_t m_nId; // 0x60
	float m_fDropChance; // 0x64
	int32_t m_nQuantity; // 0x68
};

struct ATgDeploy_LootCrateBasic {
	char r_bIsChestOpened : 1; // 0x4b4
};

struct UTgAnimNotify_AkEvent {
	TArray<FPSE_SkinAk> m_SkinOverrideList; // 0x7c
};

struct ATgDevice_ArcingBeam {
	TArray<FArcingInfo> m_ArcingList; // 0xaec
	int32_t m_nMaxNumArcsPerTarget; // 0xafc
	char m_bCanTargetShields : 1; // 0xb00
	char m_bIsArcing : 1; // 0xb00
};

struct UTgInventoryObject_Listen_ArcingBeam {
	int32_t m_nDeviceId; // 0xc8
	TArray<ObjectProperty> m_MarkedTargets; // 0xcc
};

struct UTgIconGroup {
	ObjectProperty m_Manager; // 0x60
	ObjectProperty m_DataItem; // 0x68
	char m_bLoadByItemType : 1; // 0x70
	ObjectProperty m_ManifestGroup; // 0x74
	FMap_Mirror m_TextureObjects; // 0x7c
};

struct UFactory {
	UObject* SupportedClass; // 0x60
	UObject* ContextClass; // 0x68
	FString Description; // 0x70
	TArray<FString> Formats; // 0x80
	char bCreateNew : 1; // 0x90
	char bEditAfterNew : 1; // 0x90
	char bEditorImport : 1; // 0x90
	char bText : 1; // 0x90
	int32_t AutoPriority; // 0x94
	TArray<FString> ValidGameNames; // 0x98
};

struct ATerrain {
	TArray<FTerrainHeight> Heights; // 0x280
	TArray<FTerrainInfoData> InfoData; // 0x290
	TArray<FTerrainLayer> Layers; // 0x2a0
	int32_t NormalMapLayer; // 0x2b0
	TArray<FTerrainDecoLayer> DecoLayers; // 0x2b4
	TArray<FAlphaMap> AlphaMaps; // 0x2c4
	TArray<ComponentProperty> TerrainComponents; // 0x2d4
	int32_t NumSectionsX; // 0x2e4
	int32_t NumSectionsY; // 0x2e8
	TArray<FTerrainWeightedMaterial> WeightedMaterials; // 0x2ec
	TArray<ObjectProperty> WeightedTextureMaps; // 0x2fc
	int32_t MaxTesselationLevel; // 0x30c
	int32_t MinTessellationLevel; // 0x310
	float TesselationDistanceScale; // 0x314
	float TessellationCheckDistance; // 0x318
	int32_t CollisionTesselationLevel; // 0x31c
	FCachedTerrainMaterialArray CachedTerrainMaterials[0x2]; // 0x320
	int32_t NumVerticesX; // 0x340
	int32_t NumVerticesY; // 0x344
	int32_t NumPatchesX; // 0x348
	int32_t NumPatchesY; // 0x34c
	int32_t MaxComponentSize; // 0x350
	int32_t StaticLightingResolution; // 0x354
	char bIsOverridingLightResolution : 1; // 0x358
	char bBilinearFilterLightmapGeneration : 1; // 0x358
	char bCastShadow : 1; // 0x358
	char bForceDirectLightMap : 1; // 0x358
	char bCastDynamicShadow : 1; // 0x358
	char bEnableSpecular : 1; // 0x358
	char bBlockRigidBody : 1; // 0x358
	char bAllowRigidBodyUnderneath : 1; // 0x358
	char bAcceptsDynamicLights : 0; // 0x358
	char bMorphingEnabled : 0; // 0x358
	char bMorphingGradientsEnabled : 0; // 0x358
	char bLocked : 0; // 0x358
	char bHeightmapLocked : 0; // 0x358
	char bShowingCollision : 0; // 0x358
	char bUseWorldOriginTextureUVs : 0; // 0x358
	char bShowWireframe : 0; // 0x358
	ObjectProperty TerrainPhysMaterialOverride; // 0x35c
	FLightingChannelContainer LightingChannels; // 0x364
	FLightmassPrimitiveSettings LightmassSettings; // 0x368
	FPointer ReleaseResourcesFence; // 0x384
	int32_t EditorTessellationLevel; // 0x38c
	TArray<FSelectedTerrainVertex> SelectedVertices; // 0x390
	FColor WireframeColor; // 0x3a0
};

struct UTgAnimNotifySkinData {
	FString OwningNotify; // 0x60
	ObjectProperty SoundCueTemplate; // 0x70
	ObjectProperty ParticleSystemTemplate; // 0x78
	int32_t nSkinId; // 0x80
	int32_t nSkinLevel; // 0x84
};

struct UUIData_Challenge {
	Fdword m_dwActivityId; // 0x60
	Fdword m_eStatus; // 0x64
	char m_bIsDirty : 1; // 0x68
	char m_bCompletionAck : 1; // 0x68
	char m_bGoalsInitialized : 1; // 0x68
	TArray<ObjectProperty> m_pPrimaryGoals; // 0x6c
	TArray<ObjectProperty> m_pGatingGoals; // 0x7c
	TArray<ObjectProperty> m_pAllDoneGoals; // 0x8c
	TArray<ObjectProperty> m_pAuxiliaryGoals; // 0x9c
};

struct USeqVar_Object {
	ObjectProperty ObjValue; // 0xa0
	FVector ActorLocation; // 0xa8
	TArray<UObject*> SupportedClasses; // 0xb4
};

struct UTgSkeletalMeshComponent_Weapon {
	FName m_nmFire; // 0x86c
	FName m_nmFireLoop; // 0x874
	FName m_nmFireLoopTailSound; // 0x87c
	char m_bDoNotPlayFireParticlesIfHidden : 1; // 0x884
	char m_bKillFiringLoopParticlesOnHidden : 1; // 0x884
	char m_bCanPlayFireParticles : 1; // 0x884
	char m_bCanPlayFireLoopParticles : 1; // 0x884
	char m_bCanPlayFireSounds : 1; // 0x884
	char m_bCanPlayFireLoopSounds : 1; // 0x884
	int32_t m_nFireLoopActiveBitMask; // 0x888
};

struct USoundNodeAttenuationAndGain {
	char bAttenuate : 1; // 0x74
	char bSpatialize : 1; // 0x74
	char bAttenuateWithLPF : 1; // 0x74
	float dBAttenuationAtMax; // 0x78
	float OmniRadius; // 0x7c
	SoundDistanceModel GainDistanceAlgorithm; // 0x80
	SoundDistanceModel AttenuateDistanceAlgorithm; // 0x81
	ESoundDistanceCalc DistanceType; // 0x82
	float MinimalVolume; // 0x84
	float RadiusMin; // 0x88
	float RadiusPeak; // 0x8c
	float RadiusMax; // 0x90
	float LPFMinimal; // 0x94
	float LPFRadiusMin; // 0x98
	float LPFRadiusPeak; // 0x9c
	float LPFRadiusMax; // 0xa0
};

struct USeqAct_GameCrowdPopulationManagerToggle {
	float WarmupPopulationPct; // 0x108
	ObjectProperty CrowdAgentList; // 0x10c
	char bClearOldArchetypes : 1; // 0x114
	char bEnableCrowdLightEnvironment : 1; // 0x114
	char bCastShadows : 1; // 0x114
	char bFillPotentialSpawnPoints : 1; // 0x114
	char bForceObstacleChecking : 1; // 0x114
	char bForceNavMeshPathing : 1; // 0x114
	char bIndividualSpawner : 1; // 0x114
	int32_t MaxAgents; // 0x118
	float SpawnRate; // 0x11c
	FLightingChannelContainer AgentLightingChannel; // 0x120
	float MaxSpawnDist; // 0x124
	float MinBehindSpawnDist; // 0x128
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x12c
	float AgentWarmupTime; // 0x13c
	int32_t NumAgentsToTickPerFrame; // 0x140
	TArray<ObjectProperty> LastSpawnedList; // 0x144
};

struct ATgDevice_HitPulse {
	char s_ShouldPayCostPerPulse : 1; // 0xaec
	char s_bCostPaid : 1; // 0xaec
	char m_bConsumeAmmoOnEachPulse : 1; // 0xaec
	int32_t m_CurrentPulseIndex; // 0xaf0
};

struct ATgRoyaleZeppelin {
	ComponentProperty m_SkeletalMeshComponent; // 0x280
	ComponentProperty m_LootCrateSkeletalMeshComponent; // 0x288
	ComponentProperty m_LightEnvironment; // 0x290
	ObjectProperty m_ZeppelinAnimNodeBlendList; // 0x298
	FVector m_vLootSpawnOffset; // 0x2a0
	FVector m_vLootSpawnLocation; // 0x2ac
	float m_fAirSpeed; // 0x2b8
	float m_fDeployTime; // 0x2bc
	FVector r_vRouteDir; // 0x2c0
	char r_bSpawnedEpicLootCrate : 1; // 0x2cc
	int32_t m_nZeppelinMeshAsmId; // 0x2d0
	int32_t m_nLootCrateMeshAsmId; // 0x2d4
};

struct ATgDevice_WeaponZoom {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaf4
	ObjectProperty m_CachedInhand; // 0xafc
	char m_bDelayMoveSpeedPenalty : 1; // 0xb04
	char m_bIsZoomed : 1; // 0xb04
};

struct UTgEffectForm {
	int32_t c_nEffectGroupId; // 0x60
	int32_t c_nInstigatorID; // 0x64
	int32_t c_nType; // 0x68
	ObjectProperty c_Owner; // 0x6c
	FPointer c_pwzEffectName; // 0x74
	FPointer c_pwzDescription; // 0x7c
	int32_t c_nEffectIconId; // 0x84
	TArray<ObjectProperty> c_AppliedFxArray; // 0x88
	char c_bHiddenDueToStealth : 1; // 0x98
	char c_bHiddenDueToFirstPerson : 1; // 0x98
	char c_bMICApplied : 1; // 0x98
	char m_bSpawnAtHitLocation : 1; // 0x98
	char c_bIsDebuff : 1; // 0x98
	char c_bIsCrit : 1; // 0x98
	char c_bLocal : 1; // 0x98
	TG_POSTURE c_Posture; // 0x9c
	int32_t c_PostureID; // 0xa0
	ObjectProperty m_MaterialInstanceConstant; // 0xa4
	ObjectProperty m_OwnerPawn; // 0xac
	FVector m_HitLocation; // 0xb4
	FVector m_HitNormal; // 0xc0
	int32_t c_nSkinId; // 0xcc
	int32_t c_nWeaponSkinId; // 0xd0
	ObjectProperty c_CameraEffect; // 0xd4
	int32_t c_nStackCount; // 0xdc
	int32_t c_nBodyMeshMaterialHandle; // 0xe0
	int32_t c_nMountMeshMaterialHandle; // 0xe4
	int32_t c_nHeadMeshMaterialHandle; // 0xe8
	int32_t c_nWeaponMesh1PMaterialHandle; // 0xec
	int32_t c_nHandsMeshMaterialHandle; // 0xf0
	int32_t c_nHeadMesh1PMaterialHandle; // 0xf4
	int32_t c_nWeaponMesh3PMaterialHandle; // 0xf8
};

struct UTgAnimMetaData_MICScalarParameter {
	FName MICParameterName; // 0x80
	int32_t MaterialIndex; // 0x88
};

struct UParticleModuleLocationWorldOffset_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x94
};

struct USphericalHarmonicLightComponent {
	FSHVectorRGB WorldSpaceIncidentLighting; // 0x1b0
	char bRenderBeforeModShadows : 1; // 0x240
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x104
};

struct UUIComponent_RolledSubItem {
	ObjectProperty m_mcDuplicate; // 0x120
	ObjectProperty m_pReplacementCurrency; // 0x128
	ObjectProperty m_pItem; // 0x130
};

struct URB_Spring {
	ComponentProperty Component1; // 0x88
	FName BoneName1; // 0x90
	ComponentProperty Component2; // 0x98
	FName BoneName2; // 0xa0
	int32_t SceneIndex; // 0xa8
	char bInHardware : 1; // 0xac
	char bEnableForceMassRatio : 1; // 0xac
	FPointer SpringData; // 0xb0
	float TimeSinceActivation; // 0xb8
	float MinBodyMass; // 0xbc
	float SpringSaturateDist; // 0xc0
	float SpringMaxForce; // 0xc4
	float MaxForceMassRatio; // 0xc8
	FInterpCurveFloat SpringMaxForceTimeScale; // 0xcc
	float DampSaturateVel; // 0xe0
	float DampMaxForce; // 0xe4
};

struct UTgSeqAct_SetPlayerMeshVisible {
	char bIs1PMeshVisible : 1; // 0x108
	char bIs3PMeshVisible : 1; // 0x108
};

struct UTgAIBehaviorCondition_HasActive {
	EActiveType ActiveType; // 0x98
};

struct UParticleModuleTypeDataMesh {
	ObjectProperty Mesh; // 0x68
	char CastShadows : 1; // 0x70
	char DoCollisions : 1; // 0x70
	char bAllowMotionBlur : 1; // 0x70
	char bOverrideMaterial : 1; // 0x70
	char bCameraFacing : 1; // 0x70
	char bApplyParticleRotationAsSpin : 1; // 0x70
	EMeshScreenAlignment MeshAlignment; // 0x74
	EParticleAxisLock AxisLockOption; // 0x75
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x76
	EMeshCameraFacingOptions CameraFacingOption; // 0x77
	float Pitch; // 0x78
	float Roll; // 0x7c
	float Yaw; // 0x80
};

struct UTgDeviceForm_LongbowInhand {
	char m_bImpalerArrowFXIsActive : 1; // 0x2bc
	char m_bBowDrawing : 1; // 0x2bc
	float m_fBowDrawPercentage; // 0x2c0
	float m_fBowDrawStartPercentage; // 0x2c4
	float m_fBowDrawTime; // 0x2c8
	float m_fBowDrawTotalDuration; // 0x2cc
	TArray<ObjectProperty> m_BlendByPct1P; // 0x2d0
	TArray<ObjectProperty> m_BlendByPct3P; // 0x2e0
	ObjectProperty m_ArrowSkelControl1P; // 0x2f0
	ObjectProperty m_ImpalerSkelControl1P; // 0x2f8
};

struct UParticleModuleSpawnBase {
	char bProcessSpawnRate : 1; // 0x68
	char bProcessBurstList : 1; // 0x68
};

struct UUIComponent_ScrollBar {
	int32_t m_nPageHeight; // 0x140
	int32_t m_nPageWidth; // 0x144
	int32_t m_nNumElements; // 0x148
	float m_fScrollPos; // 0x14c
	int32_t m_nNavScrollCBHandle1; // 0x150
	int32_t m_nNavScrollCBHandle2; // 0x154
	ObjectProperty m_grScroll; // 0x158
	char m_bScrollVertical : 1; // 0x160
};

struct UUIHudOverlay {
	char ShowAllTeamAsParty : 1; // 0x244
	char m_bBringToFrontProcessed : 1; // 0x244
	char m_bCanVault : 1; // 0x244
	char m_bInteractingCatapult : 1; // 0x244
	char m_bEnteredCatapult : 1; // 0x244
	char m_bShowPrompt : 1; // 0x244
	char m_bTooltipVisible : 1; // 0x244
	char m_bSpectatorShowPlayerIcons : 1; // 0x244
	int32_t m_nDepth; // 0x248
	int32_t m_nCritCount; // 0x24c
	int32_t m_nLastTargetId; // 0x250
	char m_ePickupSlot; // 0x254
	char m_eLastTargetType; // 0x255
	EDamageNumbersType m_eDamageNumbersType; // 0x256
	float m_fDelta; // 0x258
	float m_fRange; // 0x25c
	float m_fScreenLocInterp; // 0x260
	float m_fWorldLocInterp; // 0x264
	float m_fCritSpeed; // 0x268
	float m_fCritBloom; // 0x26c
	float m_fCritTimer; // 0x270
	float m_fDamageSpeed; // 0x274
	float m_fDamageBloom; // 0x278
	float m_fDamageTimer; // 0x27c
	float m_fDamageFadeOutDuration; // 0x280
	float m_fStatusTimer; // 0x284
	float m_fStatusSpeed; // 0x288
	float m_fStatusBloom; // 0x28c
	float m_fHealingSpeed; // 0x290
	float m_fHealingBloom; // 0x294
	float m_fHealingTimer; // 0x298
	float m_fResolutionModX; // 0x29c
	float m_fResolutionModY; // 0x2a0
	float m_fRarityFadeTimer; // 0x2a4
	float m_fSearchStartX; // 0x2a8
	float m_fSearchStartY; // 0x2ac
	float m_fSearchAlignOffset; // 0x2b0
	float m_fPromptAlignOffset; // 0x2b4
	float m_fPromptOffsetY; // 0x2b8
	float m_fPointerOffsetX; // 0x2bc
	float m_fPointerOffsetY; // 0x2c0
	float m_fOverlayDefaultPadding; // 0x2c4
	float m_fOverlayYOffset; // 0x2c8
	float m_fOverlayRenderDist; // 0x2cc
	float m_fOverlayXMin; // 0x2d0
	float m_fOverlayXMax; // 0x2d4
	float m_fOverlayYMin; // 0x2d8
	float m_fOverlayYMax; // 0x2dc
	float m_fReviveYOffset; // 0x2e0
	float m_fReviveAlphaMin; // 0x2e4
	float m_fReviveAlphaMax; // 0x2e8
	float m_fReviveAlphaMinDist; // 0x2ec
	float m_fReviveAlphaMaxDist; // 0x2f0
	int32_t m_nCachedMaxShards; // 0x2f4
	int32_t m_nLootDevice; // 0x2f8
	ObjectProperty m_mcLoot; // 0x2fc
	ObjectProperty m_mcLootName; // 0x304
	ObjectProperty m_mcLootDesc; // 0x30c
	ObjectProperty m_mcLootType; // 0x314
	ObjectProperty m_mcLootClass; // 0x31c
	ObjectProperty m_mcLootFrame; // 0x324
	ObjectProperty m_mcLootIconA; // 0x32c
	ObjectProperty m_mcLootIconB; // 0x334
	ObjectProperty m_mcLootIconFrameA; // 0x33c
	ObjectProperty m_mcLootIconFrameB; // 0x344
	ObjectProperty m_mcLootIconTextureA; // 0x34c
	ObjectProperty m_mcLootIconTextureB; // 0x354
	ObjectProperty m_mcLootElement; // 0x35c
	ObjectProperty m_mcLootPromptA; // 0x364
	ObjectProperty m_mcLootPromptB; // 0x36c
	ObjectProperty m_mcLootDamage; // 0x374
	ObjectProperty m_mcLootDamageName; // 0x37c
	ObjectProperty m_mcLootDamageDesc; // 0x384
	ObjectProperty m_mcLootDamageArrow; // 0x38c
	ObjectProperty m_mcPickup; // 0x394
	ObjectProperty m_mcScopes; // 0x39c
	ObjectProperty m_mcScopeSniper; // 0x3a4
	ObjectProperty m_mcScopeSniperFrame; // 0x3ac
	ObjectProperty m_mcScopeSniperCrosshair; // 0x3b4
	ObjectProperty m_mcSearch; // 0x3bc
	ObjectProperty m_mcSearchKey; // 0x3c4
	ObjectProperty m_mcSearchName; // 0x3cc
	ObjectProperty m_mcIconVault; // 0x3d4
	ObjectProperty m_mcPrompt; // 0x3dc
	ObjectProperty m_mcBigHeadMode; // 0x3e4
	ObjectProperty m_mcBigHeadModePrompt; // 0x3ec
	TArray<FOverlayData> m_CritData; // 0x3f4
	TArray<FOverlayData> m_LockData; // 0x404
	TArray<FOverlayData> m_ForgeData; // 0x414
	TArray<FDamageOverlayData> m_DamageData; // 0x424
	TArray<FOverlayData> m_StatusData; // 0x434
	TArray<FOverlayData> m_HealingData; // 0x444
	TArray<FOverlayData> m_RevivingData; // 0x454
	TArray<FOverlayData> m_LootGoblinData; // 0x464
	int32_t m_nCurrentPromptMessageId; // 0x474
	ObjectProperty m_mcTutorialPrompt; // 0x478
	ObjectProperty m_mcTutorialPromptFrame; // 0x480
	int32_t m_nCurrentTooltipMessageId; // 0x488
	ObjectProperty m_mcTooltip; // 0x48c
	ObjectProperty m_mcTooltipText; // 0x494
	ObjectProperty m_mcTooltipBackground; // 0x49c
	float m_fMaxPingTime; // 0x4a4
	TArray<FUIPingOverlay> m_PingOverlays; // 0x4a8
	TArray<FUIPlayerOverlay> m_TeamOverlays; // 0x4b8
	TArray<FUIPlayerOverlay> m_EnemyOverlays; // 0x4c8
	ObjectProperty m_scPickup; // 0x4d8
	ObjectProperty m_akForgeComplete; // 0x4e0
	float m_fDamageNumberCombineDuration; // 0x4e8
};

struct UInterpTrackBoolProp {
	TArray<FBoolTrackKey> BoolTrack; // 0xa0
	FName PropertyName; // 0xb0
};

struct USaveGameSummary {
	FName BaseLevel; // 0x60
	FString Description; // 0x68
};

struct UParticleModuleTypeDataTrail {
	char RenderGeometry : 1; // 0x68
	char RenderLines : 1; // 0x68
	char RenderTessellation : 1; // 0x68
	char Tapered : 1; // 0x68
	char SpawnByDistance : 1; // 0x68
	int32_t TessellationFactor; // 0x6c
	FRawDistributionFloat Tension; // 0x70
	FVector SpawnDistance; // 0x94
};

struct UDOFBloomMotionBlurEffect {
	float MaxVelocity; // 0xdc
	float MotionBlurAmount; // 0xe0
	char FullMotionBlur : 1; // 0xe4
	float CameraRotationThreshold; // 0xe8
	float CameraTranslationThreshold; // 0xec
};

struct UPath_TowardGoal {
	ObjectProperty GoalActor; // 0x6c
};

struct AFluidInfluenceActor {
	ComponentProperty FlowDirection; // 0x280
	ComponentProperty Sprite; // 0x288
	ComponentProperty InfluenceComponent; // 0x290
	char bActive : 1; // 0x298
	char bToggled : 1; // 0x298
};

struct ULocalMessage {
	char bIsSpecial : 1; // 0x60
	char bIsUnique : 1; // 0x60
	char bIsPartiallyUnique : 1; // 0x60
	char bIsConsoleMessage : 1; // 0x60
	char bBeep : 1; // 0x60
	char bCountInstances : 1; // 0x60
	float Lifetime; // 0x64
	FColor DrawColor; // 0x68
	float PosY; // 0x6c
	int32_t FontSize; // 0x70
};

struct UTgAIUtilityFilter_StayInTargetFOV {
	char bInverse : 1; // 0xc0
};

struct UNavMeshGoal_Null {
	FPointer PartialGoal; // 0x7c
};

struct USeqVar_Group {
	FName GroupName; // 0xc4
	char bCachedList : 1; // 0xcc
	TArray<ObjectProperty> Actors; // 0xd0
};

struct UTgSeqEvent_SpawnLanePusher {
	int32_t Taskforce; // 0x128
};

struct ATgSiegePushActor {
	ObjectProperty s_CollisionProxy; // 0x280
	float m_fCollisionProxyRadius; // 0x288
	float m_fCollisionProxyHeight; // 0x28c
	ComponentProperty m_SkelMesh; // 0x290
	ComponentProperty m_RadiusMesh; // 0x298
	int32_t m_nTF1Count; // 0x2a0
	int32_t m_nTF2Count; // 0x2a4
	int32_t m_nDefenderTaskForce; // 0x2a8
	EPushState m_CurrentPushState; // 0x2ac
	float m_fPendingReverseTime; // 0x2b0
};

struct UInterpTrackInstFloatProp {
	FPointer FloatProp; // 0x70
	float ResetFloat; // 0x78
	FPointer DistributionProp; // 0x7c
};

struct USeqAct_ControlMovieTexture {
	ObjectProperty MovieTexture; // 0x108
};

struct UGameCrowdGroup {
	TArray<ObjectProperty> Members; // 0x60
};

struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations {
	FVector Location; // 0x78
	FVector Rotation; // 0x84
	float DistanceToCheck; // 0x90
	TArray<FVector> LocationsToCheck; // 0x94
};

struct ATgEmitter_TeamColor {
	int32_t nTaskForce; // 0x294
	FParticleChannelContainer DefaultParticleChannels; // 0x298
};

struct UTgInventoryObject_Listen_HealthPCT_In_Range {
	char m_bApplied : 1; // 0xc8
};

struct UTgSeqAct_BeginWaitForLookAt {
	FVector LocationToLookAt; // 0x108
	float MinOffsetDistance; // 0x114
};

struct ATgNavRouteIndicator {
	FPointer VfTable_IInterface_NavigationHandle; // 0x32c
	TArray<FVector> WayPoints; // 0x334
	int32_t Position; // 0x344
	float m_fPositionStartTime; // 0x348
	float m_fPositionMaxSeekTime; // 0x34c
	float m_fSpinUpTime; // 0x350
	float m_fSpinDownTime; // 0x354
	ObjectProperty m_SpinUpFx; // 0x358
	ObjectProperty m_PathingFx; // 0x360
	ObjectProperty m_SpinDownFx; // 0x368
	ObjectProperty NavigationHandle; // 0x370
};

struct UUIData_DailyRewardDay {
	int32_t m_nDayIndex; // 0x60
	int32_t m_nCurrentDay; // 0x64
	char m_bClaimed : 1; // 0x68
};

struct ABlockingVolume {
	char bBlockCamera : 1; // 0x2bc
};

struct UTgSkelControlSingleBone_DisplayGroup {
	TArray<FDisplayGroupInfo> DisplayGroupInfos; // 0x144
	char m_bPawnOwner : 1; // 0x154
};

struct UTgDeviceForm {
	FPointer VfTable_FCallbackEventDevice; // 0x60
	ObjectProperty PawnOwner; // 0x68
	FEquipDeviceInfo c_EquipDeviceInfo; // 0x70
	int32_t m_nDeviceType; // 0x84
	int32_t m_nDeviceSubtype; // 0x88
	DeviceTargetMode m_eTargetingMode; // 0x8c
	DeviceSubtype c_eDeviceSubtype; // 0x8d
	eMovementType c_eMovementType; // 0x8e
	ETargetingModeStatus c_eTargetingModeStatus; // 0x8f
	SCOPETYPE c_eScopeType; // 0x90
	char c_bDeployed : 1; // 0x94
	char c_bHandDevice : 1; // 0x94
	char c_bDisableDefaultTimelapseRecovery : 1; // 0x94
	char c_bIsTransitioningToNewMode : 1; // 0x94
	char c_bTargetingModeEnabled : 1; // 0x94
	char c_bTargeterInitializedThisTick : 1; // 0x94
	char c_bTargeterIsInWorldDPG : 1; // 0x94
	char c_bUseInstigatorMesh : 1; // 0x94
	char c_bIsInHand : 0; // 0x94
	char m_bInitializingAssets : 0; // 0x94
	char m_bLoopWhileFiringCameraAnim : 0; // 0x94
	char m_bUseImpactFXOverride : 0; // 0x94
	char m_bRecoilTimerActive : 0; // 0x94
	char m_bForceBlendOutOnAnimEnd : 0; // 0x94
	TArray<ObjectProperty> c_PawnAnimSetOverrideList; // 0x98
	TArray<FModeData> ModeDatas; // 0xa8
	FPointer m_pAmSetup; // 0xb8
	ComponentProperty c_Mesh; // 0xc0
	ComponentProperty c_AttachedMesh; // 0xc8
	ComponentProperty c_ThirdPersonMesh; // 0xd0
	ComponentProperty c_FirstPersonMesh; // 0xd8
	FName c_nmMountPoint; // 0xe0
	FName FormState; // 0xe8
	int32_t c_nFireMode; // 0xf0
	int32_t c_nEquipSlot; // 0xf4
	float c_fLastReceivedRefireTime; // 0xf8
	int32_t c_nLastFxMode; // 0xfc
	ObjectProperty c_TargetingModeMeshIndicator; // 0x100
	ObjectProperty c_TargetingModeFx; // 0x108
	FAimData c_TargetingAim; // 0x110
	int32_t c_nTargetingModeFxId; // 0x144
	float c_fRemainingTransitionTime; // 0x148
	float c_fTotalTransitionTime; // 0x14c
	ObjectProperty m_LockedTarget; // 0x150
	float m_fCachedZoomedFOV; // 0x158
	ObjectProperty m_AssetReference; // 0x15c
	ObjectProperty m_OwnerActor; // 0x164
	TArray<ObjectProperty> m_AbilityBlendList1P; // 0x16c
	TArray<ObjectProperty> m_AbilityBlendList3P; // 0x17c
	TArray<ObjectProperty> m_ChannelFireBlendList1P; // 0x18c
	TArray<ObjectProperty> m_ChannelFireBlendList3P; // 0x19c
	TArray<ObjectProperty> m_TargetingBlendList1P; // 0x1ac
	TArray<ObjectProperty> m_TargetingBlendList3P; // 0x1bc
	TArray<ObjectProperty> m_ToggleTransitionNodes1P; // 0x1cc
	TArray<ObjectProperty> m_ToggleTransitionNodes3P; // 0x1dc
	TArray<ObjectProperty> m_AmmoBlendList1P; // 0x1ec
	TArray<ObjectProperty> m_AmmoBlendList3P; // 0x1fc
	TArray<ObjectProperty> m_CooldownSyncNode1P; // 0x20c
	TArray<ObjectProperty> m_CooldownSyncNode3P; // 0x21c
	TArray<ObjectProperty> m_DeviceEquippedNode1P; // 0x22c
	TArray<ObjectProperty> m_DeviceEquippedNode3P; // 0x23c
	TArray<ObjectProperty> m_BlendByRecoilTimeNodes; // 0x24c
	ObjectProperty m_WhileFiringCameraAnimInst; // 0x25c
	float m_fWhileFiringCameraAnimBlendInTime; // 0x264
	float m_fWhileFiringCameraAnimBlendOutTime; // 0x268
	FPointer m_RandomShotSpreadStream; // 0x26c
	int32_t m_nLastSetShotSpreadSeed; // 0x274
	ObjectProperty m_GameplayCurves; // 0x278
	float m_fRecoilTimer; // 0x280
	float m_fTransitionAmount; // 0x284
	float m_fTransitionPerSec; // 0x288
	float m_fLastSetWorldFOVInterp; // 0x28c
	ObjectProperty m_pWeaponAnimSet; // 0x290
	ObjectProperty m_pPutAwayAnimSet; // 0x298
	ObjectProperty m_pBucketAnimSet; // 0x2a0
	FVector m_vZoomCameraOffset; // 0x2a8
	float m_fSimulatedDeviceCooldown; // 0x2b4
	int32_t m_nLastAmmoAmount; // 0x2b8
};

struct UTgInventoryObject_Listen_ApplyEffectOnDeviceBase {
	TArray<ObjectProperty> m_pEffectGroups; // 0xc8
	TArray<ObjectProperty> m_pAffectedPawns; // 0xd8
};

struct ATgHoldSpot {
	ObjectProperty HoldVehicle; // 0x3a4
};

struct UUIDataLeagueTier {
	ObjectProperty pLeague; // 0x60
	Fdword dwTierId; // 0x68
};

struct UMaterial {
	ObjectProperty PhysMaterial; // 0x254
	UPhysicalMaterial* PhysicalMaterial; // 0x25c
	ObjectProperty PhysMaterialMask; // 0x264
	int32_t PhysMaterialMaskUVChannel; // 0x26c
	ObjectProperty BlackPhysicalMaterial; // 0x270
	ObjectProperty WhitePhysicalMaterial; // 0x278
	FColorMaterialInput DiffuseColor; // 0x280
	FScalarMaterialInput DiffusePower; // 0x2bc
	FColorMaterialInput SpecularColor; // 0x2f8
	FScalarMaterialInput SpecularPower; // 0x334
	FVectorMaterialInput Normal; // 0x370
	FColorMaterialInput EmissiveColor; // 0x3b4
	FScalarMaterialInput Opacity; // 0x3f0
	FScalarMaterialInput OpacityMask; // 0x42c
	float OpacityMaskClipValue; // 0x468
	float ShadowDepthBias; // 0x46c
	FVector2MaterialInput Distortion; // 0x470
	EBlendMode BlendMode; // 0x4b0
	EMaterialLightingModel LightingModel; // 0x4b1
	EMaterialDepthModifier DepthModificationMode; // 0x4b2
	EMaterialTessellationMode D3D11TessellationMode; // 0x4b3
	FColorMaterialInput CustomLighting; // 0x4b4
	FColorMaterialInput CustomSkylightDiffuse; // 0x4f0
	FVectorMaterialInput AnisotropicDirection; // 0x52c
	FScalarMaterialInput TwoSidedLightingMask; // 0x570
	FColorMaterialInput TwoSidedLightingColor; // 0x5ac
	FVectorMaterialInput WorldPositionOffset; // 0x5e8
	FVectorMaterialInput WorldDisplacement; // 0x62c
	FScalarMaterialInput TessellationMultiplier; // 0x670
	FColorMaterialInput SubsurfaceInscatteringColor; // 0x6ac
	FColorMaterialInput SubsurfaceAbsorptionColor; // 0x6e8
	FScalarMaterialInput SubsurfaceScatteringRadius; // 0x724
	FVectorMaterialInput CustomPixelShaderVector; // 0x760
	FScalarMaterialInput PixelDepthModifier; // 0x7a4
	char EnableSubsurfaceScattering : 1; // 0x7e0
	char EnableSeparateTranslucency : 1; // 0x7e0
	char bEnableMaskedAntialiasing : 1; // 0x7e0
	char TwoSided : 1; // 0x7e0
	char TwoSidedFlipsNormals : 1; // 0x7e0
	char TwoSidedSeparatePass : 1; // 0x7e0
	char bDisableDepthTest : 1; // 0x7e0
	char bSceneTextureRenderBehindTranslucency : 1; // 0x7e0
	char bAllowFog : 0; // 0x7e0
	char bTranslucencyReceiveDominantShadowsFromStatic : 0; // 0x7e0
	char bTranslucencyInheritDominantShadowsFromOpaque : 0; // 0x7e0
	char bAllowTranslucencyDoF : 0; // 0x7e0
	char bUseOneLayerDistortion : 0; // 0x7e0
	char bUseLitTranslucencyDepthPass : 0; // 0x7e0
	char bUseLitTranslucencyPostRenderDepthPass : 0; // 0x7e0
	char bCastLitTranslucencyShadowAsMasked : 0; // 0x7e0
	char bUsedAsLightFunction : 0; // 0x7e0
	char bUsedWithFogVolumes : 0; // 0x7e0
	char bUsedAsSpecialEngineMaterial : 0; // 0x7e0
	char bUsedWithSkeletalMesh : 0; // 0x7e0
	char bUsedWithTerrain : 0; // 0x7e0
	char bUsedWithLandscape : 0; // 0x7e0
	char bUsedWithMobileLandscape : 0; // 0x7e0
	char bUsedWithFracturedMeshes : 0; // 0x7e0
	char bUsedWithParticleSystem : 0; // 0x7e0
	char bUsedWithParticleSprites : 0; // 0x7e0
	char bUsedWithBeamTrails : 0; // 0x7e0
	char bUsedWithParticleSubUV : 0; // 0x7e0
	char bUsedWithSpeedTree : 0; // 0x7e0
	char bUsedWithStaticLighting : 0; // 0x7e0
	char bUsedWithLensFlare : 0; // 0x7e0
	char bUsedWithGammaCorrection : 0; // 0x7e0
	char bUsedWithInstancedMeshParticles : 1; // 0x7e4
	char bUsedWithFluidSurfaces : 1; // 0x7e4
	char bUsedWithDecals : 1; // 0x7e4
	char bUsedWithMaterialEffect : 1; // 0x7e4
	char bUsedWithMorphTargets : 1; // 0x7e4
	char bUsedWithRadialBlur : 1; // 0x7e4
	char bUsedWithInstancedMeshes : 1; // 0x7e4
	char bUsedWithSplineMeshes : 1; // 0x7e4
	char bUsedWithAPEXMeshes : 0; // 0x7e4
	char bUsedWithScreenDoorFade : 0; // 0x7e4
	char bEnableCrackFreeDisplacement : 0; // 0x7e4
	char bTessellationFrustumCulling : 0; // 0x7e4
	char bTessellationBackfaceCulling : 0; // 0x7e4
	char bUseImageBasedReflections : 0; // 0x7e4
	char bForceMaskedPrepass : 0; // 0x7e4
	char bPreferMaskedPrepass : 0; // 0x7e4
	char Wireframe : 0; // 0x7e4
	char bPerPixelCameraVector : 0; // 0x7e4
	char bAllowLightmapSpecular : 0; // 0x7e4
	char bOverrideLowQualitySpecular : 0; // 0x7e4
	char bCleanupUnusedTextures : 0; // 0x7e4
	char bIsFallbackMaterial : 0; // 0x7e4
	char bUsesDistortion : 0; // 0x7e4
	char bIsMasked : 0; // 0x7e4
	char bIsPreviewMaterial : 0; // 0x7e4
	float ImageReflectionNormalDampening; // 0x7e8
	ObjectProperty CookedShaderCache; // 0x7ec
	FPointer MaterialResources[0x3]; // 0x7f4
	FPointer DefaultMaterialInstances[0x3]; // 0x80c
	int32_t EditorX; // 0x824
	int32_t EditorY; // 0x828
	int32_t EditorPitch; // 0x82c
	int32_t EditorYaw; // 0x830
	TArray<ObjectProperty> Expressions; // 0x834
	TArray<FMaterialFunctionInfo> MaterialFunctionInfos; // 0x844
	TMap<None, None> EditorParameters; // 0x854
	TArray<ObjectProperty> ReferencedTextures; // 0x89c
};

struct UTgGameplayCurvesSet_DamageFalloff {
	FRawDistributionFloat DamageFalloff; // 0x64
	char bIsRangeNormalized : 1; // 0x88
	char bExcludeEffectiveRange : 1; // 0x88
};

struct ATgClientHUD {
	int32_t m_nMapId; // 0x5a0
	char m_eState; // 0x5a4
	char m_ePromptType; // 0x5a5
	char m_eCaptureState; // 0x5a6
	char m_bCommitMap : 1; // 0x5a8
	char m_bShowCursor : 1; // 0x5a8
	char m_bCaptureKeys : 1; // 0x5a8
	float m_fFadeTime; // 0x5ac
	float m_fFadeTimer; // 0x5b0
	float m_fReturnTime; // 0x5b4
	float m_fReturnTimer; // 0x5b8
	float m_fControllerTime; // 0x5bc
	float m_fControllerTimer; // 0x5c0
	ObjectProperty m_pMovie; // 0x5c4
	TArray<FString> m_sNeededScenes; // 0x5cc
	TArray<FSceneInfo> m_ScenePreloads; // 0x5dc
	TArray<ObjectProperty> m_SceneStack; // 0x5ec
	TArray<ObjectProperty> m_PopupStack; // 0x5fc
	TArray<ObjectProperty> m_MoviePlayers; // 0x60c
	ObjectProperty m_GAPeach; // 0x61c
	ObjectProperty m_DevMenu; // 0x624
};

struct UUIScene_UIPopupRealMoneyPurchase {
	float m_fDisplayHeight; // 0x154
	int32_t m_nScrollOffset; // 0x158
	int32_t m_nMaxScrollOffset; // 0x15c
	ObjectProperty m_mcTitle; // 0x160
	ObjectProperty m_mcSubtitle; // 0x168
	ObjectProperty m_mcScrollingTF; // 0x170
	ObjectProperty m_mcScrollUpArrow; // 0x178
	ObjectProperty m_mcScrollDownArrow; // 0x180
	ObjectProperty m_DLCPackDisplay; // 0x188
};

struct USwatTurnReachSpec {
	char SpecDirection; // 0xc8
};

struct UMaterialInstance {
	ObjectProperty PhysMaterial; // 0x254
	ObjectProperty Parent; // 0x25c
	ObjectProperty PhysMaterialMask; // 0x264
	int32_t PhysMaterialMaskUVChannel; // 0x26c
	ObjectProperty BlackPhysicalMaterial; // 0x270
	ObjectProperty WhitePhysicalMaterial; // 0x278
	char bHasStaticPermutationResource : 1; // 0x280
	char bStaticPermutationDirty : 1; // 0x280
	char ReentrantFlag : 1; // 0x280
	char bNeedsMaterialFlattening : 1; // 0x280
	char bCleanupUnusedTextures : 1; // 0x280
	ObjectProperty CookedShaderCache; // 0x284
	FPointer StaticParameters[0x3]; // 0x28c
	FPointer StaticPermutationResources[0x3]; // 0x2a4
	FPointer Resources[0x3]; // 0x2bc
	TArray<ObjectProperty> ReferencedTextures; // 0x2d4
	FGuid ParentLightingGuid; // 0x2e4
};

struct ATgDestructibleFactory {
	ComponentProperty LightEnvironment; // 0x2c0
};

struct USeqEvent_AnimNotify {
	FName NotifyName; // 0x128
};

struct UParticleModuleUberRainImpacts {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartRotation; // 0xc0
	char bInheritParent : 1; // 0xe4
	char MultiplyX : 1; // 0xe4
	char MultiplyY : 1; // 0xe4
	char MultiplyZ : 1; // 0xe4
	char bIsUsingCylinder : 1; // 0xe4
	char bPositive_X : 1; // 0xe4
	char bPositive_Y : 1; // 0xe4
	char bPositive_Z : 1; // 0xe4
	char bNegative_X : 0; // 0xe4
	char bNegative_Y : 0; // 0xe4
	char bNegative_Z : 0; // 0xe4
	char bSurfaceOnly : 0; // 0xe4
	char bVelocity : 0; // 0xe4
	char bRadialVelocity : 0; // 0xe4
	FRawDistributionVector LifeMultiplier; // 0xe8
	FRawDistributionFloat PC_VelocityScale; // 0x10c
	FRawDistributionVector PC_StartLocation; // 0x130
	FRawDistributionFloat PC_StartRadius; // 0x154
	FRawDistributionFloat PC_StartHeight; // 0x178
	CylinderHeightAxis PC_HeightAxis; // 0x19c
	FRawDistributionVector ColorOverLife; // 0x1a0
	FRawDistributionFloat AlphaOverLife; // 0x1c4
};

struct UUIArmoryTalent {
	int32_t m_nBotId; // 0x244
	int32_t m_nTalent; // 0x248
	int32_t m_nEquippedDeviceId; // 0x24c
	ObjectProperty m_pTalentGroup; // 0x250
	ObjectProperty m_mcHeader; // 0x258
	ObjectProperty m_mcTalent[0x4]; // 0x260
	ObjectProperty m_mcTalentDesc[0x4]; // 0x280
	ObjectProperty m_mcTalentName[0x4]; // 0x2a0
	ObjectProperty m_mcTalentType[0x4]; // 0x2c0
	ObjectProperty m_mcTalentIcon[0x4]; // 0x2e0
	ObjectProperty m_mcTalentLock[0x4]; // 0x300
	ObjectProperty m_mcTalentTexture[0x4]; // 0x320
};

struct USeqAct_PlayMusicTrack {
	FMusicTrackStruct MusicTrack; // 0x108
};

struct UTgAIBehaviorCondition_AtJumpLocation {
	float Tolerance; // 0x98
};

struct ATgDevice_VanguardCharge {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xb60
	DelegateProperty __InterruptFiringDelegate__Delegate; // 0xb68
};

struct UDistributionFloatConstantCurve {
	FInterpCurveFloat ConstantCurve; // 0x7c
};

struct USoundNodeModulator {
	float PitchMin; // 0x74
	float PitchMax; // 0x78
	float VolumeMin; // 0x7c
	float VolumeMax; // 0x80
	FRawDistributionFloat PitchModulation; // 0x84
	FRawDistributionFloat VolumeModulation; // 0xa8
};

struct USpeedTreeActorFactory {
	ObjectProperty SpeedTree; // 0x9c
};

struct ATgDeploy_Geometry {
	TArray<ObjectProperty> m_OverlappingActors; // 0x448
	TArray<FVector> m_DesiredPushDirection; // 0x458
	char m_bPushOverlappingActors : 1; // 0x468
	char m_bAllyPassthrough : 1; // 0x468
	char m_bEnemyPassthrough : 1; // 0x468
	float m_fPushFactor; // 0x46c
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x68
};

struct UTgTimerManager {
	FPointer VfTable_FTickableObject; // 0x60
	TMap<None, None> m_TimerMap; // 0x68
	char m_bActive : 1; // 0xb0
	char m_bGameWasPaused : 1; // 0xb0
};

struct UPComJsonHandler {
	ObjectProperty m_pImageDownloader; // 0x60
	FPointer m_pCallbackObject; // 0x68
	FString m_strUrl; // 0x70
	FString m_strDownloadDir; // 0x80
	FString m_strLocalDir; // 0x90
	FString m_strJson; // 0xa0
	FString m_strName; // 0xb0
	FPointer m_pHttp; // 0xc0
};

struct UTgAnimBlendBySpeed {
	ObjectProperty m_TgPawn; // 0x178
	ESpeedType m_SpeedType; // 0x180
	TArray<FResetSynchGroup> ResetSynchGroups; // 0x184
	char m_bIgnoreRootMotion : 1; // 0x194
	char m_bIgnoreZVelocity : 1; // 0x194
	char m_bNotifyOwnerOnChildChange : 1; // 0x194
	char m_bEnableClassOverrides : 1; // 0x194
	TArray<int32_t> m_WalkChildren; // 0x198
	TArray<int32_t> m_SprintChildren; // 0x1a8
	TArray<float> m_BaseSpeed; // 0x1b8
	TArray<EPhysics> m_IgnoredPhysics; // 0x1c8
	int32_t m_nIndexToOverride; // 0x1d8
	float m_fBaseSpeedRecon; // 0x1dc
	float m_fBaseSpeedRobotics; // 0x1e0
	float m_fBaseSpeedAssault; // 0x1e4
	float m_fBaseSpeedMedic; // 0x1e8
	float m_fBaseSpeedReconFemale; // 0x1ec
	float m_fBaseSpeedRoboticsFemale; // 0x1f0
	float m_fBaseSpeedAssaultFemale; // 0x1f4
	float m_fBaseSpeedMedicFemale; // 0x1f8
	float m_fBaseSpeedReconCity; // 0x1fc
	float m_fBaseSpeedRoboticsCity; // 0x200
	float m_fBaseSpeedAssaultCity; // 0x204
	float m_fBaseSpeedMedicCity; // 0x208
	float m_fBaseSpeedReconFemaleCity; // 0x20c
	float m_fBaseSpeedRoboticsFemaleCity; // 0x210
	float m_fBaseSpeedAssaultFemaleCity; // 0x214
	float m_fBaseSpeedMedicFemaleCity; // 0x218
};

struct USeqVar_Character {
	APawn* PawnClass; // 0xc4
};

struct USoundNodeModulatorContinuous {
	FRawDistributionFloat PitchModulation; // 0x74
	FRawDistributionFloat VolumeModulation; // 0x98
};

struct APortalTeleporter {
	ObjectProperty SisterPortal; // 0x298
	int32_t TextureResolutionX; // 0x2a0
	int32_t TextureResolutionY; // 0x2a4
	ObjectProperty MyMarker; // 0x2a8
	char bMovablePortal : 1; // 0x2b0
	char bAlwaysTeleportNonPawns : 1; // 0x2b0
	char bCanTeleportVehicles : 1; // 0x2b0
};

struct USeqAct_SetVelocity {
	FVector VelocityDir; // 0x108
	float VelocityMag; // 0x114
	char bVelocityRelativeToActorRotation : 1; // 0x118
};

struct UUIData_PlayerMatchRecord {
	int32_t nBotId; // 0x60
	int32_t nPlayerId; // 0x64
	Fdword dwCharacterId; // 0x68
	int32_t nLevel; // 0x6c
	int32_t nKills; // 0x70
	int32_t nDeaths; // 0x74
	int32_t nAssists; // 0x78
	int32_t nEarnedCredits; // 0x7c
	int32_t nHealingPlayer; // 0x80
	int32_t nHealingBot; // 0x84
	int32_t nHealingTotal; // 0x88
	int32_t nSelfHealing; // 0x8c
	int32_t nDmgTaken; // 0x90
	int32_t nDmgPlayer; // 0x94
	int32_t nDmgBot; // 0x98
	int32_t nDmgTotal; // 0x9c
	int32_t nSoloKills; // 0xa0
	int32_t nFlankKills; // 0xa4
	int32_t nMultikill; // 0xa8
	int32_t nKillstreak; // 0xac
	int32_t nDmgStructure; // 0xb0
	int32_t nDmgMitigated; // 0xb4
	int32_t nObjectiveTime; // 0xb8
	int32_t nCards[0x5]; // 0xbc
	int32_t nCardLevels[0x5]; // 0xd0
	int32_t nLegendary; // 0xe4
	int32_t nLegendaryLevel; // 0xe8
	int32_t nPurchasedItems[0x4]; // 0xec
	int32_t nPurchasedItemLevels[0x4]; // 0xfc
	int32_t nMountItemId; // 0x10c
	int32_t nEmoteItemId; // 0x110
	int32_t nMVPPoseItemId; // 0x114
	int32_t nSprayItemId; // 0x118
	int32_t nTitleItemId; // 0x11c
	int32_t nTaskForce; // 0x120
	char bAlly : 1; // 0x124
	char bLocal : 1; // 0x124
	char bReported : 1; // 0x124
	FString sPlayer; // 0x128
	FUniqueNetId ConsoleUniqueId; // 0x138
	Fdword dwPortalId; // 0x140
};

struct ATgTutorialVolume {
	char m_bHasLocalPawn : 1; // 0x2bc
	char m_bHasSeenLocalPawnBefore : 1; // 0x2bc
};

struct ADebugCameraController {
	FName PrimaryKey; // 0x77c
	FName SecondaryKey; // 0x784
	FName UnselectKey; // 0x78c
	char bShowSelectedInfo : 1; // 0x794
	char bDrawDebugText : 1; // 0x794
	char bIsFrozenRendering : 1; // 0x794
	AHUD* HUDClass; // 0x798
	ObjectProperty OriginalControllerRef; // 0x7a0
	ObjectProperty OriginalPlayer; // 0x7a8
	ComponentProperty DrawFrustum; // 0x7b0
	ObjectProperty SelectedActor; // 0x7b8
	ComponentProperty SelectedComponent; // 0x7c0
};

struct UTgGameDataHandler {
	ObjectProperty m_Game; // 0x130
};

struct UGFxMoviePlayer {
	FPointer pMovie; // 0x60
	FPointer pCaptureKeys; // 0x68
	FPointer pFocusIgnoreKeys; // 0x70
	TMap<None, None> ASUClasses; // 0x78
	TMap<None, None> ASUObjects; // 0xc0
	int32_t NextASUObject; // 0x108
	ObjectProperty MovieInfo; // 0x10c
	char bMovieIsOpen : 1; // 0x114
	char bDisplayWithHudOff : 1; // 0x114
	char bEnableGammaCorrection : 1; // 0x114
	char bWidgetsInitializedThisFrame : 1; // 0x114
	char bLogUnhandedWidgetInitializations : 1; // 0x114
	char bAllowInput : 1; // 0x114
	char bAllowFocus : 1; // 0x114
	char bAutoPlay : 1; // 0x114
	char bPauseGameWhileActive : 0; // 0x114
	char bDisableWorldRendering : 0; // 0x114
	char bCaptureWorldRendering : 0; // 0x114
	char bCloseOnLevelChange : 0; // 0x114
	char bOnlyOwnerFocusable : 0; // 0x114
	char bForceFullViewport : 0; // 0x114
	char bDiscardNonOwnerInput : 0; // 0x114
	char bCaptureInput : 0; // 0x114
	char bCaptureMouseInput : 0; // 0x114
	char bIgnoreMouseInput : 0; // 0x114
	char bAllowArrowKeyNav : 0; // 0x114
	char bIsSplitscreenLayoutModified : 0; // 0x114
	char bShowHardwareMouseCursor : 0; // 0x114
	char bBlurLesserMovies : 0; // 0x114
	char bHideLesserMovies : 0; // 0x114
	char bIsPriorityBlurred : 0; // 0x114
	char bIsPriorityHidden : 0; // 0x114
	char bIgnoreVisibilityEffect : 0; // 0x114
	char bIgnoreBlurEffect : 0; // 0x114
	ObjectProperty RenderTexture; // 0x118
	int32_t LocalPlayerOwnerIndex; // 0x120
	ObjectProperty ExternalInterface; // 0x124
	TArray<FName> CaptureKeys; // 0x12c
	TArray<FName> FocusIgnoreKeys; // 0x13c
	TArray<FExternalTexture> ExternalTextures; // 0x14c
	TArray<FSoundThemeBinding> SoundThemes; // 0x15c
	GFxTimingMode TimingMode; // 0x16c
	GFxRenderTextureMode RenderTextureMode; // 0x16d
	char Priority; // 0x16e
	TArray<FGFxWidgetBinding> WidgetBindings; // 0x170
	TMap<None, None> WidgetPathBindings; // 0x180
	ObjectProperty SplitscreenLayoutObject; // 0x1c8
	int32_t SplitscreenLayoutYAdjust; // 0x1d0
	FGFxStoredViewportParams m_StoredViewportParams; // 0x1d4
	DelegateProperty __OnPostAdvance__Delegate; // 0x1e8
};

struct UGameCrowdBehavior_RunFromPanic {
	ObjectProperty PanicFocus; // 0x9c
};

struct USkelControlLimb {
	FVector EffectorLocation; // 0xd0
	EBoneControlSpace EffectorLocationSpace; // 0xdc
	EBoneControlSpace JointTargetLocationSpace; // 0xdd
	EBoneControlSpace JointOffsetSpace; // 0xde
	EAxis BoneAxis; // 0xdf
	EAxis JointAxis; // 0xe0
	FName EffectorSpaceBoneName; // 0xe4
	FVector JointTargetLocation; // 0xec
	FName JointTargetSpaceBoneName; // 0xf8
	FVector JointOffset; // 0x100
	FName JointOffsetBoneName; // 0x10c
	char bInvertBoneAxis : 1; // 0x114
	char bInvertJointAxis : 1; // 0x114
	char bRotateJoint : 1; // 0x114
	char bMaintainEffectorRelRot : 1; // 0x114
	char bTakeRotationFromEffectorSpace : 1; // 0x114
	char bAllowStretching : 1; // 0x114
	char m_bSnapEffectorToBoneLocation : 1; // 0x114
	char bMaxLength : 1; // 0x114
	FVector2D StretchLimits; // 0x118
	FName StretchRollBoneName; // 0x120
	float MaxLengthPct; // 0x128
};

struct UTgAnimNodeAdditiveBlending {
	char m_bSetStrengthFromAnimNode : 1; // 0x128
	char m_bInvertStrengthFromAnimNode : 1; // 0x128
	char m_bInitializedCachedNodeList : 1; // 0x128
	TArray<FName> m_StrengthAnimNodeNameList; // 0x12c
	TArray<EEmote> m_StrengthEmoteList; // 0x13c
	TArray<ObjectProperty> m_CachedNodeList; // 0x14c
	TArray<ObjectProperty> m_CachedEmoteSequences; // 0x15c
};

struct UTgAchievement_Headshot {
	int32_t m_nHeadshotsWithoutMissing; // 0x90
};

struct UUIDataGoals {
	ObjectProperty m_GoldLimit; // 0x70
	ObjectProperty m_GoldLimitBoosted; // 0x78
	ObjectProperty m_VIPLimit; // 0x80
	ObjectProperty m_VIPLimitBoosted; // 0x88
	TArray<ObjectProperty> m_Ranked; // 0x90
	TMap<None, None> m_CurrencyStats; // 0xa0
	TMap<None, None> m_WOTDByBotId; // 0xe8
	ObjectProperty m_PlayedRankedTracker; // 0x130
	TMap<None, None> m_Goals; // 0x138
	TArray<ObjectProperty> m_ChallengeList; // 0x180
	TArray<ObjectProperty> m_QuestList; // 0x190
	ObjectProperty m_ChampionQuest; // 0x1a0
	ObjectProperty m_DailyLoginsQuest; // 0x1a8
	ObjectProperty m_LoreQuest; // 0x1b0
	TArray<ObjectProperty> m_QuestsCompleted; // 0x1b8
	char m_bQuestsSeenToday : 1; // 0x1c8
	char m_bPlayerLoggedIn : 1; // 0x1c8
	char m_bRewardClaimedToday : 1; // 0x1c8
	char m_bDayHasRolledOver : 1; // 0x1c8
	char m_bHasQuestProgress : 1; // 0x1c8
	char m_bHasQuestActivities : 1; // 0x1c8
	char m_bHasQuestRewards : 1; // 0x1c8
	char m_bFirstSpecialEventUpdate : 1; // 0x1c8
	char m_bFirstItemQuestUpdate : 0; // 0x1c8
	int32_t m_nConsecutiveRewardDays; // 0x1cc
	int32_t m_nLengthOfDay; // 0x1d0
	float m_fTimeTillNextDay; // 0x1d4
	float m_fTimeTillNextMonth; // 0x1d8
	FDateTimeWrapper m_dtLoginBonusReceived; // 0x1dc
	Fdword m_dwLastLoreQuestGoal; // 0x1e4
	int32_t m_nPlayerLevel; // 0x1e8
};

struct UNavMeshPath_AlongLine {
	FVector Direction; // 0x78
};

struct UUIComponent_AbilityPointsPool {
	char m_bDirty : 1; // 0x120
	int32_t m_nTickCallbackHandle; // 0x124
	ObjectProperty m_mcAbilityPointsPool; // 0x128
	ObjectProperty m_mcAbilityIcon[0x4]; // 0x130
	ObjectProperty m_mcPointsFill[0x4]; // 0x150
	ObjectProperty m_mcPointsText[0x4]; // 0x170
	ObjectProperty m_mcTalentFocusFrame[0x4]; // 0x190
	float m_fFillWidth; // 0x1b0
	int32_t m_nPoints[0x4]; // 0x1b4
	AbilityModifiedByDevice m_eFocusedAbility; // 0x1c4
};

struct UTgAIBehaviorAction_UseDevice {
	TG_EQUIP_POINT DeviceToUse; // 0x94
	EUseDeviceAimType aimType; // 0x95
	char bContinuousFire : 1; // 0x98
	char bPayNoEnergy : 1; // 0x98
};

struct UOnlineGameSearch {
	int32_t MaxSearchResults; // 0xa0
	FLocalizedStringSetting Query; // 0xa4
	char bIsLanQuery : 1; // 0xb0
	char bUsesArbitration : 1; // 0xb0
	char bIsSearchInProgress : 1; // 0xb0
	UOnlineGameSettings* GameSettingsClass; // 0xb4
	TArray<FOnlineGameSearchResult> Results; // 0xbc
	FOverrideSkill ManualSkillOverride; // 0xcc
	TArray<FNamedObjectProperty> NamedProperties; // 0x100
	FOnlineGameSearchQuery FilterQuery; // 0x110
	FString AdditionalSearchCriteria; // 0x130
	int32_t PingBucketSize; // 0x140
	int32_t NumPingProbes; // 0x144
	int32_t MaxPingBytes; // 0x148
	FString SessionTemplateName; // 0x14c
};

struct UUIScene_UIShop {
	UISHOP_STATE m_eState; // 0x154
	ObjectProperty m_pTabs; // 0x158
	ObjectProperty m_pBuyCrowns; // 0x160
	ObjectProperty m_pItems; // 0x168
	ObjectProperty m_pCrowns; // 0x170
	ObjectProperty m_pRotator; // 0x178
};

struct UInterpTrackFade {
	char bPersistFade : 1; // 0xb8
};

struct UTgAnimBlendByFlying {
	char bAdjustRateByVelocity : 1; // 0x168
	char m_bAdjustRateByAcceleration : 1; // 0x168
	char m_bPreviewJetpackPerBoneBlend : 1; // 0x168
	char m_bIsUsingHandsFreeJetpack : 1; // 0x168
	float m_fUpLoopStartTime; // 0x16c
	EFlyDirTypes LastDirection; // 0x170
	FName m_nmHandsFreeJetpackPerBoneBlendNodeName; // 0x174
	ObjectProperty m_HandsFreeJetpackPerBoneBlendNode; // 0x17c
	float m_fHandsFreeJetpackBlendBias; // 0x184
	FName m_nmHandsFreeJetpackBiasBlendNodeName; // 0x188
	ObjectProperty m_HandsFreeJetpackBiasBlendNode; // 0x190
	ObjectProperty m_TgPawn; // 0x198
};

struct USeqAct_ForceFeedback {
	ObjectProperty FFWaveform; // 0x108
	UWaveFormBase* PredefinedWaveForm; // 0x110
};

struct UTgAnimMetaData_InvisibleWallFailSafe {
	FName WallEnableBaseName; // 0x60
};

struct USeqEvent_MobileZoneBase {
	FString TargetZoneName; // 0x128
};

struct UTgAnimNodeBlendByCombat {
	ObjectProperty m_TgP; // 0x168
};

struct UTgSkelCon_Spinner {
	float m_fDegreesPerSecond; // 0x100
	FVector m_vAxis; // 0x104
	char m_PreviewStartStop : 1; // 0x110
	char m_bSpinDownToZero : 1; // 0x110
	char m_bIsSpinning : 1; // 0x110
	char m_bSpinningUp : 1; // 0x110
	char m_bSpinningDown : 1; // 0x110
	char m_bRotateToTargetRotation : 1; // 0x110
	float m_fSpinUpTime; // 0x114
	float m_fSpinDownTime; // 0x118
	float m_fCurrentDegreesPerSecond; // 0x11c
	float m_fLerpTime; // 0x120
	FRotator m_TargetRotation; // 0x124
	float m_TimeToInterpToTargetRotation; // 0x130
	int32_t m_nRotationSpeedState; // 0x134
	TArray<float> m_fRotationSpeedStateMultipliers; // 0x138
	TArray<DelegateProperty> m_OnSpinUpFinishedCallbacks; // 0x148
	TArray<DelegateProperty> m_OnSpinDownFinishedCallbacks; // 0x158
	DelegateProperty __OnSpinUpFinishedEvent__Delegate; // 0x168
	DelegateProperty __OnSpinDownFinishedEvent__Delegate; // 0x178
};

struct UTgAISquad {
	FPointer VfTable_FTickableObject; // 0x60
	char s_bOpen : 1; // 0x68
	char s_bShouldSpread : 1; // 0x68
	TArray<ObjectProperty> s_MemberList; // 0x6c
	ObjectProperty s_Factory; // 0x7c
	ObjectProperty s_CurrentTarget; // 0x84
	TArray<ObjectProperty> s_TargetList; // 0x8c
	ObjectProperty s_LastKiller; // 0x9c
	float s_fNextSpreadTime; // 0xa4
};

struct UDamageType {
	char bArmorStops : 1; // 0x60
	char bCausedByWorld : 1; // 0x60
	char bExtraMomentumZ : 1; // 0x60
	char bCausesFracture : 1; // 0x60
	char bRadialDamageVelChange : 1; // 0x60
	float KDamageImpulse; // 0x64
	float KDeathVel; // 0x68
	float KDeathUpKick; // 0x6c
	float RadialDamageImpulse; // 0x70
	float VehicleDamageScaling; // 0x74
	float VehicleMomentumScaling; // 0x78
	ObjectProperty DamagedFFWaveform; // 0x7c
	ObjectProperty KilledFFWaveform; // 0x84
	float FracturedMeshDamage; // 0x8c
};

struct UApexDynamicComponent {
	FPointer ComponentDynamicResources; // 0x2b0
};

struct UOnlinePlaylistManager {
	FPointer VfTable_FTickableObject; // 0x60
	TArray<FPlaylist> Playlists; // 0x68
	TArray<FString> PlaylistFileNames; // 0x78
	TArray<FName> DatastoresToRefresh; // 0x88
	int32_t DownloadCount; // 0x98
	int32_t SuccessfulCount; // 0x9c
	int32_t VersionNumber; // 0xa0
	TArray<FPlaylistPopulation> PopulationData; // 0xa4
	int32_t WorldwideTotalPlayers; // 0xb4
	int32_t RegionTotalPlayers; // 0xb8
	TScriptInterface<Class> TitleFileInterface; // 0xbc
	FString PopulationFileName; // 0xcc
	float NextPlaylistPopulationUpdateTime; // 0xdc
	float PlaylistPopulationUpdateInterval; // 0xe0
	int32_t MinPlaylistIdToReport; // 0xe4
	int32_t CurrentPlaylistId; // 0xe8
	FName EventsInterfaceName; // 0xec
	int32_t DataCenterId; // 0xf4
	FString DataCenterFileName; // 0xf8
	float LastPlaylistDownloadTime; // 0x108
	float PlaylistRefreshInterval; // 0x10c
	DelegateProperty __OnReadPlaylistComplete__Delegate; // 0x110
	DelegateProperty __OnPlaylistPopulationDataUpdated__Delegate; // 0x120
};

struct USeqCond_CompareInt {
	int32_t ValueA; // 0xec
	int32_t ValueB; // 0xf0
};

struct USeqVar_ObjectVolume {
	float LastUpdateTime; // 0xc4
	TArray<ObjectProperty> ContainedObjects; // 0xc8
	TArray<UObject*> ExcludeClassList; // 0xd8
	char bCollidingOnly : 1; // 0xe8
};

struct UActorFactoryPhysicsAsset {
	ObjectProperty PhysicsAsset; // 0x9c
	ObjectProperty SkeletalMesh; // 0xa4
	char bStartAwake : 1; // 0xac
	char bDamageAppliesImpulse : 1; // 0xac
	char bNotifyRigidBodyCollision : 1; // 0xac
	char bUseCompartment : 1; // 0xac
	char bCastDynamicShadow : 1; // 0xac
	FVector InitialVelocity; // 0xb0
	FVector DrawScale3D; // 0xbc
};

struct UScriptedTexture {
	char bNeedsUpdate : 1; // 0x128
	char bSkipNextClear : 1; // 0x128
	DelegateProperty __Render__Delegate; // 0x12c
};

struct UParticleModuleTrailSpawn {
	ComponentProperty SpawnDistanceMap; // 0x68
	float MinSpawnVelocity; // 0x70
};

struct UParticleModuleLifetime {
	FRawDistributionFloat Lifetime; // 0x68
};

struct USeqAct_ApplySoundNode {
	ObjectProperty PlaySound; // 0x108
	ObjectProperty ApplyNode; // 0x110
};

struct USeqAct_ChangeCollision {
	char bCollideActors : 1; // 0x108
	char bBlockActors : 1; // 0x108
	char bIgnoreEncroachers : 1; // 0x108
	ECollisionType CollisionType; // 0x10c
};

struct UUIDataStore_OnlinePlaylists {
	FString ProviderClassName; // 0x98
	UUIResourceDataProvider* ProviderClass; // 0xa8
	TArray<ObjectProperty> RankedDataProviders; // 0xb0
	TArray<ObjectProperty> UnrankedDataProviders; // 0xc0
	TArray<ObjectProperty> RecModeDataProviders; // 0xd0
	TArray<ObjectProperty> PrivateDataProviders; // 0xe0
	ObjectProperty PlaylistMan; // 0xf0
};

struct UTgSpecialFxLightManager {
	char c_FxLightsEnabled : 1; // 0x60
	char c_FxLightsUnconstrained : 1; // 0x60
	int32_t c_FxLightsMaxActive; // 0x64
	int32_t c_FxLightsMaxDying; // 0x68
	TArray<FPointer> m_ActiveEmitters; // 0x6c
	TArray<FPointer> m_DyingEmitters; // 0x7c
	ObjectProperty c_LocalPawn; // 0x8c
};

struct UTgSeqAct_SetUIClock {
	char ShowAlarmTexture : 1; // 0x108
	char UseProgressBar : 1; // 0x108
	char IsCountingDown : 1; // 0x108
};

struct UNavMeshGoal_At {
	FVector Goal; // 0x7c
	float GoalDist; // 0x88
	char bKeepPartial : 1; // 0x8c
	char bWeightPartialByDist : 1; // 0x8c
	char bGoalInSamePolyAsAnchor : 1; // 0x8c
	float PartialDistSq; // 0x90
	FPointer GoalPoly; // 0x94
	FPointer PartialGoal; // 0x9c
};

struct ATgCapturePoint {
	ObjectProperty s_CollisionProxy; // 0x280
	ObjectProperty r_RepInfo; // 0x288
	float m_fCollisionProxyRadius; // 0x290
	float m_fCollisionProxyHeight; // 0x294
	float m_fBaseTransitionSpeed; // 0x298
	float m_fTransitionSpeedBuff; // 0x29c
	float m_fCurrentTransitionSpeed; // 0x2a0
	ObjectProperty c_OwnershipChangedKismetNode; // 0x2a4
	ObjectProperty s_BotSpawners[0x2]; // 0x2ac
	ObjectProperty m_CurrentBotSpawners[0x2]; // 0x2bc
	ObjectProperty s_NeutralBotSpawner; // 0x2cc
	int32_t m_CapturePointIndex; // 0x2d4
	float s_fReplenishBotTime; // 0x2d8
	float s_fRemainingReplenishBotTime; // 0x2dc
	float s_fFriendlyReplenishBuffPct; // 0x2e0
	float m_fRegenUpdateTimer; // 0x2e4
	float m_fOwnedManaRegen; // 0x2e8
	float m_fOwnedHealthRegen; // 0x2ec
	ObjectProperty s_GameInfo; // 0x2f0
	int32_t m_nTF1Count; // 0x2f8
	int32_t m_nTF2Count; // 0x2fc
	float m_fLastEnemyKillVoxTimestamp; // 0x300
	int32_t m_nLaneNumber; // 0x304
	ComponentProperty m_WorldIconSprite; // 0x308
};

struct ATgDevice_OverGrowth {
	ObjectProperty m_VineDevice; // 0xaec
};

struct UTgAIBehaviorCondition_GameType {
	TG_GAME_TYPE GameType; // 0x98
};

struct UTgAIBehaviorCondition_NearbyTargetTypeDelta {
	int32_t TargetTypeThreshold; // 0x9c
	ECombatTargetType TargetType; // 0xa0
	char bMustBeInForwardCone : 1; // 0xa4
	float ForwardConeAngle; // 0xa8
};

struct UTgAnimNotify_PlayParticleEffect_Skinned {
	TArray<FPPE_Skin> m_SkinOverrideList; // 0x98
	char m_bApplyTeamColor : 1; // 0xa8
};

struct ATgStaticMeshActorGrass {
	float m_fTargetScale; // 0x2a4
	FVector m_TargetScale3D; // 0x2a8
	float m_fScaleTransitionTime; // 0x2b4
};

struct USeqAct_SubtractFloat {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UPBRuleNodeAlternate {
	EProcBuildingAxis RepeatAxis; // 0x70
	float ASize; // 0x74
	float BMaxSize; // 0x78
	char bInvertPatternOrder : 1; // 0x7c
	char bEqualSizeAB : 1; // 0x7c
};

struct AAutoTestManager {
	char bAutomatedPerfTesting : 1; // 0x280
	char bAutoContinueToNextRound : 1; // 0x280
	char bUsingAutomatedTestingMapList : 1; // 0x280
	char bAutomatedTestingWithOpen : 1; // 0x280
	char bExitOnCyclesComplete : 1; // 0x280
	char bCheckingForFragmentation : 1; // 0x280
	char bCheckingForMemLeaks : 1; // 0x280
	char bIsDoingASimplePerfRun : 1; // 0x280
	char bDoingASentinelRun : 0; // 0x280
	char bSentinelRunInProgress : 0; // 0x280
	char bSentinelStreamingLevelStillLoading : 0; // 0x280
	int32_t AutomatedPerfRemainingTime; // 0x284
	int32_t AutomatedTestingMapIndex; // 0x288
	TArray<FString> AutomatedMapTestingList; // 0x28c
	int32_t NumAutomatedMapTestingCycles; // 0x29c
	int32_t NumberOfMatchesPlayed; // 0x2a0
	int32_t NumMapListCyclesDone; // 0x2a4
	FString AutomatedTestingExecCommandToRunAtStartMatch; // 0x2a8
	FString AutomatedTestingExecCommandToRunAtStartMatchOnPC; // 0x2b8
	FString AutomatedMapTestingTransitionMap; // 0x2c8
	FString SentinelTaskDescription; // 0x2d8
	FString SentinelTaskParameter; // 0x2e8
	FString SentinelTagDesc; // 0x2f8
	ObjectProperty SentinelPC; // 0x308
	TArray<FVector> SentinelTravelArray; // 0x310
	int32_t SentinelNavigationIdx; // 0x320
	int32_t SentinelIdx; // 0x324
	int32_t NumRotationsIncrement; // 0x328
	int32_t TravelPointsIncrement; // 0x32c
	int32_t NumMinutesPerMap; // 0x330
	int32_t TotalNumMinutesToRun; // 0x334
	float ProfilingInterval; // 0x338
	TArray<FString> CommandsToRunAtEachTravelTheWorldNode; // 0x33c
	FString CommandStringToExec; // 0x34c
};

struct UTgAnimTreeComment {
	char m_bDrawBox : 1; // 0x68
};

struct UParticleModuleMeshRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x90
};

struct ULensFlareComponent {
	ObjectProperty Template; // 0x24c
	ComponentProperty PreviewInnerCone; // 0x254
	ComponentProperty PreviewOuterCone; // 0x25c
	ComponentProperty PreviewRadius; // 0x264
	char bAutoActivate : 1; // 0x26c
	char bIsActive : 1; // 0x26c
	char bHasTranslucency : 1; // 0x26c
	char bHasUnlitTranslucency : 1; // 0x26c
	char bHasUnlitDistortion : 1; // 0x26c
	char bUsesSceneColor : 1; // 0x26c
	char bHasSeparateTranslucency : 1; // 0x26c
	char bUseTrueConeCalculation : 1; // 0x26c
	char bVisibleForMobile : 0; // 0x26c
	float OuterCone; // 0x270
	float InnerCone; // 0x274
	float ConeFudgeFactor; // 0x278
	float Radius; // 0x27c
	float MinStrength; // 0x280
	FLinearColor SourceColor; // 0x284
	TArray<FLensFlareElementMaterials> Materials; // 0x294
	FPointer ReleaseResourcesFence; // 0x2a4
	float NextTraceTime; // 0x2ac
};

struct UTgSeqAct_TutorialTips {
	int32_t nMsgId; // 0x108
};

struct UUIData_LeagueEOM {
	ObjectProperty m_pLeague; // 0x60
	ObjectProperty m_pTier; // 0x68
	int32_t m_nPointChange; // 0x70
	int32_t m_nCurrentPoints; // 0x74
	int32_t m_nWins; // 0x78
	int32_t m_nLosses; // 0x7c
	int32_t m_nMatchesPlayed; // 0x80
	ObjectProperty m_TierChange; // 0x84
};

struct AInventoryManager {
	ObjectProperty InventoryChain; // 0x280
	ObjectProperty PendingWeapon; // 0x288
	ObjectProperty LastAttemptedSwitchToWeapon; // 0x290
	char bMustHoldWeapon : 1; // 0x298
	TArray<int32_t> PendingFire; // 0x29c
};

struct UUIComponent_ChampionOverview {
	ObjectProperty m_mcDetailsTitle; // 0x120
	ObjectProperty m_mcDetailsSubtitle; // 0x128
	ObjectProperty m_mcDetailsClassIcon; // 0x130
	ObjectProperty m_mcDetailsChampionIcon; // 0x138
	ObjectProperty m_mcBioLock; // 0x140
	ObjectProperty m_mcBioText; // 0x148
	ObjectProperty m_mcBioLockText; // 0x150
	ObjectProperty m_pCollectionOverview; // 0x158
	ObjectProperty m_mcRentalText; // 0x160
	ObjectProperty m_mcRentalTextLabel; // 0x168
	ObjectProperty m_mcRentalTextDuration; // 0x170
	ObjectProperty m_mcUnlockPanel; // 0x178
	ObjectProperty m_mcUnlockPanelPurchase; // 0x180
	ObjectProperty m_mcUnlockPanelPurchasePrice0; // 0x188
	ObjectProperty m_mcUnlockPanelPurchasePrice0Currency; // 0x190
	ObjectProperty m_mcUnlockPanelPurchasePrice1; // 0x198
	ObjectProperty m_mcUnlockPanelPurchasePrice1Currency; // 0x1a0
	ObjectProperty m_mcUnlockPanelRent; // 0x1a8
	ObjectProperty m_mcUnlockPanelRentPrice0; // 0x1b0
	ObjectProperty m_mcUnlockPanelRentPrice0Currency; // 0x1b8
	ObjectProperty m_mcUnlockPanelFreeRotation; // 0x1c0
	ObjectProperty m_mcUnlockPanelInputPrompt; // 0x1c8
	ObjectProperty m_pUnlockChampionButton; // 0x1d0
	ObjectProperty m_pLeaderboardButton; // 0x1d8
};

struct USkelControl_CCD_IK {
	FVector EffectorLocation; // 0xd0
	EBoneControlSpace EffectorLocationSpace; // 0xdc
	FName EffectorSpaceBoneName; // 0xe0
	FVector EffectorTranslationFromBone; // 0xe8
	int32_t NumBones; // 0xf4
	int32_t MaxPerBoneIterations; // 0xf8
	int32_t IterationsCount; // 0xfc
	float Precision; // 0x100
	char bStartFromTail : 1; // 0x104
	char bNoTurnOptimization : 1; // 0x104
	TArray<float> AngleConstraint; // 0x108
	float MaxAngleSteps; // 0x118
};

struct ASplineActor {
	TArray<FSplineConnection> Connections; // 0x280
	FVector SplineActorTangent; // 0x290
	FColor SplineColor; // 0x29c
	char bDisableDestination : 1; // 0x2a0
	char bAlreadyVisited : 1; // 0x2a0
	TArray<ObjectProperty> LinksFrom; // 0x2a4
	ObjectProperty nextOrdered; // 0x2b4
	ObjectProperty prevOrdered; // 0x2bc
	ObjectProperty previousPath; // 0x2c4
	int32_t bestPathWeight; // 0x2cc
	int32_t visitedWeight; // 0x2d0
	FInterpCurveFloat SplineVelocityOverTime; // 0x2d4
};

struct UMcpMessageBase {
	FString McpMessageManagerClassName; // 0x78
	EMcpMessageCompressionType CompressionType; // 0x88
	TArray<FMcpMessageContents> MessageContentsList; // 0x8c
	TArray<FMcpMessageList> MessageLists; // 0x9c
	DelegateProperty __OnCreateMessageComplete__Delegate; // 0xac
	DelegateProperty __OnDeleteMessageComplete__Delegate; // 0xbc
	DelegateProperty __OnQueryMessagesComplete__Delegate; // 0xcc
	DelegateProperty __OnQueryMessageContentsComplete__Delegate; // 0xdc
};

struct UIpNetDriverSteamworks {
	char bSteamSocketsOnly : 1; // 0x228
};

struct USeqAct_GetVectorComponents {
	FVector InVector; // 0x108
	float X; // 0x114
	float Y; // 0x118
	float Z; // 0x11c
};

struct UTgCombinedPostProcessEffect {
	FColor HitEffectColor; // 0x88
	FVector SceneShadows; // 0x8c
	FVector SceneHighLights; // 0x98
	FVector SceneMidTones; // 0xa4
	float SceneDesaturation; // 0xb0
	FVector SceneColorize; // 0xb4
};

struct ATgDevice_Emote {
	ObjectProperty m_CachedPawnOwner; // 0xaec
	char m_bAccelerationInterruptsDevice : 1; // 0xaf4
	char m_bJumpingInterruptsDevice : 1; // 0xaf4
	UTgCameraModule* m_DefaultCameraModuleClass; // 0xaf8
	UTgCameraModule_ThirdPersonVariableHeight* m_FiringCameraModuleClass; // 0xb00
	ObjectProperty m_FiringCameraModule; // 0xb08
	float m_fCameraTweenInTime; // 0xb10
	float m_fCameraTweenOutTime; // 0xb14
	FVector m_vFiringCameraOffset; // 0xb18
};

struct UTgInventoryObject_Listen_MultipleHitBonus {
	TArray<ObjectProperty> pHitActors; // 0xc8
	char bAdjustDamage : 1; // 0xd8
};

struct UMaterialExpressionFresnel {
	float Exponent; // 0xb0
	FExpressionInput Normal; // 0xb4
};

struct UTgSeqEvent_Escort_Despawn_Success {
	int32_t DefendersTaskForce; // 0x128
};

struct USeqAct_PrepareMapChange {
	FName MainLevelName; // 0x120
	TArray<FName> InitiallyLoadedSecondaryLevelNames; // 0x128
	char bIsHighPriority : 1; // 0x138
	char bStatusIsOk : 1; // 0x138
};

struct ATgAIAnnotation {
	FPointer VfTable_IInterface_AIAnnotation; // 0x380
	EAIAnnotationType AnnotationType; // 0x388
	ObjectProperty m_pClaimedBy; // 0x38c
};

struct UTgNavMeshPath_AlongLane {
	int32_t m_nLane; // 0x78
};

struct UTgAnimNodeLockableChannelFire {
	char m_bPlayStartOnLock : 1; // 0x180
	char m_bPlayStartOnUnlock : 1; // 0x180
	char m_bPlayStartAfterLockLost : 1; // 0x180
	char m_bLocked : 1; // 0x180
};

struct UTgSeqAct_MarkSpawnReturn {
	ObjectProperty m_Teleporter; // 0x108
};

struct UUIDataEsportsEventMatchup {
	ObjectProperty pEvent; // 0x60
	ObjectProperty pTeam1; // 0x68
	ObjectProperty pTeam2; // 0x70
	ObjectProperty pSelectedTeam; // 0x78
	Fdword dwGroupId; // 0x80
	Fdword dwTeam1Wins; // 0x84
	Fdword dwTeam2Wins; // 0x88
	Fdword dwMatchCount; // 0x8c
	char bFeatured : 1; // 0x90
	FString sURL; // 0x94
	Fdword dwRoundTypeId; // 0xa4
	FDateTimeWrapper dtStartTime; // 0xa8
	Fdword dwRewardQuantity; // 0xb0
	ObjectProperty pReward; // 0xb4
};

struct UUIComponent_TitleTooltip {
	ObjectProperty m_mcIcon; // 0x120
	ObjectProperty m_mcDescription; // 0x128
	int32_t m_nLastSetItemID; // 0x130
	float m_fTooltipShowDelay; // 0x134
};

struct UTgAnimNodeSelfDestruct {
	int32_t NumberOfLoopsBeforeDestruct; // 0x1bc
	int32_t LoopsCompleted; // 0x1c0
	TArray<FName> ScaleOutSkelControlNames; // 0x1c4
	float TimeRemaingForScaleOut; // 0x1d4
	TArray<ObjectProperty> ScaleOutSkelControls; // 0x1d8
	TArray<float> ScaleOutStartScales; // 0x1e8
	float ScaleOutStartTime; // 0x1f8
};

struct UTgInventoryObject_Listen_ReduceInhandSelfDamage {
	float m_fCachedBaseDamage; // 0xcc
	float m_fCachedBaseKnockback; // 0xd0
};

struct UTgAnimNodeSequence {
	char bAutoPlay : 1; // 0x1ac
	char bResetOnActivate : 1; // 0x1ac
	char HasDynamicLength : 1; // 0x1ac
	char EnableFootControlsOnCease : 1; // 0x1ac
	char SynchronizeGroupOnReplay : 1; // 0x1ac
	char bRandomStartPosition : 1; // 0x1ac
	float ChainedSequenceDuration; // 0x1b0
	FName m_nmDisplayGroup; // 0x1b4
};

struct UUIComponent_StringTitle {
	ObjectProperty m_mcText; // 0x120
};

struct UUIPopupMatchFound {
	char m_bAnim : 1; // 0x244
	float m_fTime; // 0x248
	float m_fTimer; // 0x24c
	ObjectProperty m_mcDesc; // 0x250
	ObjectProperty m_mcName; // 0x258
	ObjectProperty m_mcFrame; // 0x260
	ObjectProperty m_mcTimer; // 0x268
	ObjectProperty m_mcPrompt[0x2]; // 0x270
	ObjectProperty m_mcButton[0x2]; // 0x280
	ObjectProperty m_mcBlocker; // 0x290
	ObjectProperty m_pInputGroup; // 0x298
};

struct UParticleModuleSizeScaleByTime {
	FRawDistributionVector SizeScaleByTime; // 0x68
	char bEnableX : 1; // 0x8c
	char bEnableY : 1; // 0x8c
	char bEnableZ : 1; // 0x8c
};

struct AProjectile {
	float Speed; // 0x280
	float MaxSpeed; // 0x284
	char bSwitchToZeroCollision : 1; // 0x288
	char bBlockedByInstigator : 1; // 0x288
	char bBegunPlay : 1; // 0x288
	char bRotationFollowsVelocity : 1; // 0x288
	char bIgnoreFoliageTouch : 1; // 0x288
	ObjectProperty ZeroCollider; // 0x28c
	ComponentProperty ZeroColliderComponent; // 0x294
	float Damage; // 0x29c
	float DamageRadius; // 0x2a0
	float MomentumTransfer; // 0x2a4
	UDamageType* MyDamageType; // 0x2a8
	ObjectProperty SpawnSound; // 0x2b0
	ObjectProperty ImpactSound; // 0x2b8
	ObjectProperty InstigatorController; // 0x2c0
	ObjectProperty ImpactedActor; // 0x2c8
	float NetCullDistanceSquared; // 0x2d0
	ComponentProperty CylinderComponent; // 0x2d4
};

struct UMaterialExpressionLightmassReplace {
	FExpressionInput Realtime; // 0xb0
	FExpressionInput Lightmass; // 0xe4
};

struct UTgDeviceForm_Minigun {
	char m_bIsADS : 1; // 0x2e8
	int32_t m_nDisplayGroupState; // 0x2ec
	ComponentProperty m_WeaponMesh; // 0x2f0
};

struct ATgGameTipManager {
	TArray<FTipSavedState> m_TipSavedState; // 0x280
	TArray<FGameTipInfo> m_GameTipQueue; // 0x290
	TArray<FGameTipInfo> m_GameTipWorldQueue; // 0x2a0
	TArray<FGameTipInfo> m_GameTipSpecialQueue; // 0x2b0
	char m_bIsActive : 1; // 0x2c0
	ComponentProperty m_AudioComponent; // 0x2c4
	int32_t m_nActiveTip; // 0x2cc
	int32_t m_nPlaySoundTip; // 0x2d0
};

struct UUIComponent_LobbyEquipSlotItem {
	ObjectProperty m_mcTypeIcon; // 0x120
	ObjectProperty m_mcRarity; // 0x128
	ObjectProperty m_mcAudio; // 0x130
	ObjectProperty m_mcIcon; // 0x138
	char m_bHovered : 1; // 0x140
	char m_bSelected : 1; // 0x140
};

struct ATgRoyaleConvergeActor_Plane {
	int32_t r_nConvergeSide; // 0x2d4
};

struct UInterpCurveEdSetup {
	TArray<FCurveEdTab> Tabs; // 0x60
	int32_t ActiveTab; // 0x70
};

struct UTgAIBehaviorAction_SetGoblinState {
	EGoblinState GoblinState; // 0x94
};

struct UMaterialEffect {
	ObjectProperty Material; // 0x88
};

struct UPostProcessChain {
	TArray<ObjectProperty> Effects; // 0x60
};

struct UTgInventoryObject_Listen_TagForLifesteal {
	TArray<ObjectProperty> m_TagActors; // 0xd0
	TArray<float> m_TagTimes; // 0xe0
	ObjectProperty m_CachedFiremode; // 0xf0
};

struct ATgTeleporter {
	int32_t m_nMapObjectId; // 0x3a4
	int32_t m_nMapId; // 0x3a8
	char m_nPreload : 1; // 0x3ac
	char m_bSetTaskForce : 1; // 0x3ac
	char m_bBalanceTaskForce : 1; // 0x3ac
	char m_bIgnoreNonMembers : 1; // 0x3ac
	char m_bUsePlayerStart : 1; // 0x3ac
	char m_bRequestMission : 1; // 0x3ac
	char m_nStartGroup; // 0x3b0
	char m_nTaskForce; // 0x3b1
};

struct UParticleModuleRotation {
	FRawDistributionFloat StartRotation; // 0x68
};

struct UTgAIBehaviorCondition_DistanceFromShield {
	char bMustBeEnemy : 1; // 0x9c
};

struct UTgSeasonTicketManager {
	ObjectProperty m_pMovie; // 0x84
	TArray<ObjectProperty> m_DisplayGroups; // 0x8c
	TMap<None, None> m_MatchupDescriptions; // 0x9c
	TMap<None, None> m_TeamImages; // 0xe4
};

struct USeqAct_SetDamageInstigator {
	ObjectProperty DamageInstigator; // 0x108
};

struct UGameEngine {
	ObjectProperty GPendingLevel; // 0x8a0
	FString PendingLevelPlayerControllerClassName; // 0x8a8
	FURL LastURL; // 0x8b8
	FURL LastRemoteURL; // 0x920
	TArray<FString> ServerActors; // 0x988
	FString TravelURL; // 0x998
	char TravelType; // 0x9a8
	char bWorldWasLoadedThisTick : 1; // 0x9ac
	char bWorldWasLoadedLastTick : 1; // 0x9ac
	char bCheckForMovieCapture : 1; // 0x9ac
	char bTriggerPostLoadMap : 1; // 0x9ac
	char bStartedLoadMapMovie : 1; // 0x9ac
	char bShouldCommitPendingMapChange : 1; // 0x9ac
	char bClearAnimSetLinkupCachesOnLoadMap : 1; // 0x9ac
	char bEnableSecondaryDisplay : 1; // 0x9ac
	char bEnableSecondaryViewport : 0; // 0x9ac
	ObjectProperty OnlineSubsystem; // 0x9b0
	ObjectProperty GamePadLightbarSubsystem; // 0x9b8
	ObjectProperty DLCEnumerator; // 0x9c0
	FString DownloadableContentEnumeratorClassName; // 0x9c8
	ObjectProperty DLCManager; // 0x9d8
	FString DownloadableContentManagerClassName; // 0x9e0
	TArray<FName> LevelsToLoadForPendingMapChange; // 0x9f0
	TArray<ObjectProperty> LoadedLevelsForPendingMapChange; // 0xa00
	FString PendingMapChangeFailureDescription; // 0xa10
	float MaxDeltaTime; // 0xa20
	FString SecondaryViewportClientClassName; // 0xa24
	TArray<ObjectProperty> SecondaryViewportClients; // 0xa34
	TArray<FPointer> SecondaryViewportFrames; // 0xa44
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0xa54
	TArray<ObjectProperty> ObjectReferencers; // 0xa64
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0xa74
	TArray<FNamedNetDriver> NamedNetDrivers; // 0xa84
	TArray<FAnimTag> AnimTags; // 0xa94
};

struct UPath_AlongLine {
	FVector Direction; // 0x6c
};

struct UParticleModuleAcceleration {
	FRawDistributionVector Acceleration; // 0x6c
	char bApplyOwnerScale : 1; // 0x90
};

struct ATgProj_ExtraColliders {
	ObjectProperty m_SecondaryCollisionProxies[0x2]; // 0x51c
	ComponentProperty m_SecondaryDebugProximityDistancePSC[0x2]; // 0x52c
	TArray<FTrackedCollision> m_TrackedCollisions; // 0x53c
};

struct ATgBotFactory_Realm {
	float m_fRefillInterval; // 0x384
	float m_fSpawnMinDist; // 0x388
	float m_fSpawnMaxViewAlignment; // 0x38c
};

struct UTgSeqAct_DisplayObjective {
	int32_t m_nMessageId; // 0x108
};

struct UTgAIBehaviorCondition_IsCombatTargetOfType {
	ECombatTargetType TargetType; // 0x98
};

struct ATgDevice_HealingPotion {
	char s_bQueueDetonation : 1; // 0xaec
	char m_bAttemptingToDetonate : 1; // 0xaec
};

struct UUIDataChampions {
	ObjectProperty m_pActiveChampion; // 0x70
	TArray<ObjectProperty> m_Champions; // 0x78
	TArray<ObjectProperty> m_PvEChampions; // 0x88
	TArray<ObjectProperty> m_Collections; // 0x98
	TMap<None, None> m_PerChampionCollections; // 0xa8
	TMap<None, None> m_ChampionIdToData; // 0xf0
	Fdword m_dwStoreVendorsRequestId; // 0x138
	Fdword m_dwRotationVendorRequestId; // 0x13c
};

struct UTgAnimNotify_AudioGroup {
	ObjectProperty c_PreviewSound; // 0x68
	FName c_SoundCueName; // 0x70
	TG_MESH_SOURCE c_eMeshSource; // 0x78
};

struct ARB_RadialImpulseActor {
	ComponentProperty RenderComponent; // 0x280
	ComponentProperty ImpulseComponent; // 0x288
	char ImpulseCount; // 0x290
};

struct AAccessControl {
	TArray<FString> IPPolicies; // 0x280
	TArray<FUniqueNetId> BannedIDs; // 0x290
	FString IPBanned; // 0x2a0
	FString WrongPassword; // 0x2b0
	FString NeedPassword; // 0x2c0
	FString SessionBanned; // 0x2d0
	FString KickedMsg; // 0x2e0
	FString DefaultKickReason; // 0x2f0
	FString IdleKickReason; // 0x300
	AAdmin* AdminClass; // 0x310
	FString AdminPassword; // 0x318
	FString GamePassword; // 0x328
	FString ACDisplayText[0x3]; // 0x338
	FString ACDescText[0x3]; // 0x368
	char bDontAddDefaultAdmin : 1; // 0x398
	char bAuthenticateClients : 1; // 0x398
	char bAuthenticateServer : 1; // 0x398
	char bAuthenticateListenHost : 1; // 0x398
	char bAuthDelegatesRegistered : 1; // 0x398
	char bPendingListenAuth : 1; // 0x398
	int32_t MaxAuthRetryCount; // 0x39c
	int32_t AuthRetryDelay; // 0x3a0
	ObjectProperty OnlineSub; // 0x3a4
	TScriptInterface<Class> CachedAuthInt; // 0x3ac
	TArray<FPendingClientAuth> ClientsPendingAuth; // 0x3bc
	TArray<FServerAuthRetry> ServerAuthRetries; // 0x3cc
	int32_t ListenAuthTicketUID; // 0x3dc
	int32_t ListenAuthRetryCount; // 0x3e0
};

struct UTgSkelControlSingleBone_PistonBarrel {
	float m_nDepressDistance; // 0x144
	float m_nReturnSpeed; // 0x148
};

struct ATgDevice {
	FPointer VfTable_ITgGameplayCurveOwner; // 0x2fc
	int32_t r_nDeviceId; // 0x304
	int32_t r_nDeviceInstanceId; // 0x308
	int32_t r_nInstanceCount; // 0x30c
	TG_EQUIP_POINT r_eEquippedAt; // 0x310
	char CurrentFireMode; // 0x311
	char m_PendingFireMode; // 0x312
	ETargetingModeStatus c_eTargetingModeStatus; // 0x313
	char m_nDesiredFireMode; // 0x314
	EDeviceFailType m_eCachedDeviceFailType; // 0x315
	ECastMode m_eCastModeOverride; // 0x316
	EReticuleType m_ReticuleType; // 0x317
	EReticuleType m_ZoomedReticuleType; // 0x318
	DeviceEmoteAt m_DeviceEmoteAt; // 0x319
	DeviceTimerBarType m_DeviceTimerBarType; // 0x31a
	TG_EQUIP_POINT m_AmmoEquipPoint; // 0x31b
	EZoomState m_ZoomState; // 0x31c
	SCOPETYPE m_eScopeType; // 0x31d
	DeviceSubtype m_eDeviceSubtype; // 0x31e
	eMovementType m_eMovementType; // 0x31f
	EDeviceAltFireType m_eAltFireType; // 0x320
	int32_t r_nPointsAllocated; // 0x324
	char m_bSocketMaxCalculated : 1; // 0x328
	char r_bParentDeviceOwnedByOffhand : 1; // 0x328
	char bPendingFire : 1; // 0x328
	char m_IsPendingSetFireMode : 1; // 0x328
	char m_bEquipEffectsApplied : 1; // 0x328
	char m_CachedMissedInstantFire : 1; // 0x328
	char c_bUsesTargetingReticle : 1; // 0x328
	char r_OverrideUsesTargetingModeAsFalse : 1; // 0x328
	char s_bIgnoreReceivedAim : 0; // 0x328
	char m_bHandDevice : 0; // 0x328
	char m_bProcAsIfHandDevice : 0; // 0x328
	char m_bLockInputDuringFire : 0; // 0x328
	char m_bLockCameraDuringFire : 0; // 0x328
	char m_bShouldCacheAim : 0; // 0x328
	char r_bConsumedOnUse : 0; // 0x328
	char r_bConsumedOnDeath : 0; // 0x328
	char m_bCachedDeviceCanFire : 0; // 0x328
	char m_bCarryPreFireToPostFire : 0; // 0x328
	char m_bIsSecondaryFire : 0; // 0x328
	char m_bIgnoreSecondaryFireLogic : 0; // 0x328
	char m_bConsumePowerPoolOnStartFire : 0; // 0x328
	char m_bAlwaysStartCooldown : 0; // 0x328
	char m_bInTargetingMode : 0; // 0x328
	char m_IsBeingInterrupted : 0; // 0x328
	char c_bServerFireFailed : 0; // 0x328
	char HasAlreadyFiredOnce : 0; // 0x328
	char m_bAllowADSWhileFiring : 0; // 0x328
	char m_bAllowADSToBeInterrupted : 0; // 0x328
	char m_bAllowWeaponSwappingWhileFiring : 0; // 0x328
	char m_bBuildupShouldInterruptStealth : 0; // 0x328
	char m_bPreFireShouldInterruptStealth : 0; // 0x328
	char m_bFireShouldInterruptStealth : 0; // 0x328
	char m_bPostFireShouldInterruptStealth : 1; // 0x32c
	char m_bReloadingShouldInterruptStealth : 1; // 0x32c
	char m_bCancelingShouldInterruptStealth : 1; // 0x32c
	char m_bStartFireShouldEnterCombat : 1; // 0x32c
	char m_bFireShouldEnterCombat : 1; // 0x32c
	char m_bShouldUseInstigatorsTimeDilation : 1; // 0x32c
	char m_bIsADS : 1; // 0x32c
	char m_bDamages : 1; // 0x32c
	char m_bStuns : 0; // 0x32c
	char m_bProjectileFollowOwnerYaw : 0; // 0x32c
	char m_bAimThroughReticule : 0; // 0x32c
	char m_bNoReticleBloom : 0; // 0x32c
	char m_bUseCustomCastMode : 0; // 0x32c
	char m_bIgnoredByBots : 0; // 0x32c
	char m_bUsesBurstFire : 0; // 0x32c
	char m_bIsFirstBurstShot : 0; // 0x32c
	char m_bOnlyFirstBurstCostsAmmo : 0; // 0x32c
	char m_bBurstCanBeInterrupted : 0; // 0x32c
	char m_bCanEndBurstEarly : 0; // 0x32c
	char c_bBurstPendingStopFire : 0; // 0x32c
	char s_bInBurstRecovery : 0; // 0x32c
	char s_bIsStartingBurstFire : 0; // 0x32c
	char m_bCanRegenAmmoWhileFiring : 0; // 0x32c
	char m_bUsesSimulatedAmmo : 0; // 0x32c
	char m_bCanReloadEarly : 0; // 0x32c
	char m_bForce1pViewWhileFiring : 0; // 0x32c
	char m_bForce3PViewWhileFiring : 0; // 0x32c
	char m_bUseDefaultOffsetWhileIn3p : 0; // 0x32c
	char m_bCanCancelWithJump : 0; // 0x32c
	char m_bEnterCombatOnFire : 0; // 0x32c
	char m_bDeployAtFeetOnFailure : 0; // 0x32c
	char m_bMustBeOnGroundToFire : 0; // 0x32c
	char m_bHideTargeterWhenInvalid : 1; // 0x330
	char m_bParentAnimComponentHands : 1; // 0x330
	char m_bParentAnimComponent1PHead : 1; // 0x330
	char m_bAmmoWasGiven : 1; // 0x330
	char m_bFirstAmmoWasGiven : 1; // 0x330
	char m_bCooldownWasModified : 1; // 0x330
	char m_bDisableLagCompensation : 1; // 0x330
	char m_bUseSeparateVerticalFrictionKeyframes : 1; // 0x330
	char m_bUseRangeFalloffCurve : 0; // 0x330
	char m_bUseDeviceMeshWhenTargeting : 0; // 0x330
	char m_bPlayPutAway : 0; // 0x330
	char m_bCanToggleTargeting : 0; // 0x330
	char m_bDoNotAllowHeadShots : 0; // 0x330
	char m_bConsolidateMultipleShots : 0; // 0x330
	char m_bAllowFiringDuring3pTo1pTransition : 0; // 0x330
	char s_bLockFiringForRoundEnd : 0; // 0x330
	char m_bPreventInterrupt : 0; // 0x330
	char m_bPreventCancel : 0; // 0x330
	char m_bLogServerFireFailures : 0; // 0x330
	char m_bUsesOutroLockout : 0; // 0x330
	char m_bIsFireHoldDevice : 0; // 0x330
	char m_bForceReleaseFireHoldWhenCharged : 0; // 0x330
	char m_bFireHoldFull : 0; // 0x330
	char m_bMustFullyHoldToFire : 0; // 0x330
	char m_DeviceTimerBarCountsUp : 0; // 0x330
	char m_bCooldownAfterDeployDeath : 0; // 0x330
	char m_bPostSprintFire : 0; // 0x330
	char m_bCanZoom : 0; // 0x330
	char m_bPendingZoom : 0; // 0x330
	char m_bFullScreenScope : 0; // 0x330
	char m_bUsesLoopingAnim : 0; // 0x330
	char m_bCanPlayFireAnim : 0; // 0x330
	char m_bRightHandThrow : 1; // 0x334
	char m_bDisableTgSkelConLimbs : 1; // 0x334
	char m_bSkipGenerateNewSeed : 1; // 0x334
	char m_bAllowCrouchDuringFire : 1; // 0x334
	char m_bUncrouchBeforeFiring : 1; // 0x334
	char m_bSlowWhileInADS : 1; // 0x334
	int32_t m_nSocketIndex; // 0x338
	int32_t m_nSocketMax; // 0x33c
	ObjectProperty s_ParentDevice; // 0x340
	TArray<ObjectProperty> m_FireMode; // 0x348
	int32_t r_nMeleeComboSeed; // 0x358
	ObjectProperty c_DeviceForm; // 0x35c
	ObjectProperty m_CooldownTimers; // 0x364
	TArray<FImpactInfo> PendingImpactList; // 0x36c
	FAimData c_TargetingAim; // 0x37c
	FAimData m_CachedAim; // 0x3b0
	float m_fCachedFirePostHitDelay; // 0x3e4
	int32_t m_CachedFireRequestId; // 0x3e8
	float m_fCachedAttackSpeedPercChange; // 0x3ec
	FAimData s_ReceivedAim; // 0x3f0
	FPointer m_pwzDeviceName; // 0x424
	int32_t m_nDeviceType; // 0x42c
	float EquipTime; // 0x430
	ObjectProperty s_InventoryObject; // 0x434
	int32_t m_nSkillId; // 0x43c
	int32_t r_nInventoryId; // 0x440
	int32_t m_nDeviceSubtype; // 0x444
	float m_fLastDeviceCanFireTimeStamp; // 0x448
	float m_EndOfLastFireTimeStamp; // 0x44c
	float m_fFiringTimer; // 0x450
	float m_fTimeAccountedFor; // 0x454
	float m_fTimeStampAccountedFor; // 0x458
	float m_IndividualOffhandCooldownTime; // 0x45c
	float m_fTotalReloadTime; // 0x460
	float r_fCooldownDelay; // 0x464
	float c_fCachedManaAtStartFire; // 0x468
	ObjectProperty m_WhileFiringDeviceMode; // 0x46c
	float m_fCurrentTransitionPct; // 0x474
	float m_fUnequipTime; // 0x478
	FVector m_vMeshViewOffset; // 0x47c
	float m_fWeaponBob; // 0x488
	float m_fMeshFOV; // 0x48c
	FVector m_vProjectileSpawnOffset; // 0x490
	FVector m_vADSProjectileSpawnOffset; // 0x49c
	FVector m_vCrouchProjectileSpawnOffset; // 0x4a8
	FVector m_vADSCrouchProjectileSpawnOffset; // 0x4b4
	int32_t m_nBurstTotalShots; // 0x4c0
	int32_t m_nBurstShotsRemaining; // 0x4c4
	int32_t m_nFireLoopInstanceId; // 0x4c8
	FAmmoCount r_nAmmoCount; // 0x4cc
	int32_t r_nCarriedAmmoCount; // 0x4d0
	FAmmoCount c_nSimLocalAmmoCount; // 0x4d4
	int32_t r_nMaxAmmoClipCount; // 0x4d8
	int32_t r_nMaxAmmoCarriedCount; // 0x4dc
	int32_t r_nAmmoEfficiency; // 0x4e0
	TArray<FAmmoTransaction> m_AmmoTransactions; // 0x4e4
	TArray<FAmmoTransaction> m_DelayedAmmoTransactions; // 0x4f4
	TArray<FAmmoTransaction> s_RecievedUnverifiedDelayedAmmoTransactions; // 0x504
	TArray<FAmmoTransaction> m_DelayedAmmoTransactionRegen; // 0x514
	int32_t m_nPendingRegenAmmoTransactionID; // 0x524
	int32_t m_nPendingReloadAmmoTransactionID; // 0x528
	FTrackedFiringAmmoConsumption c_EligableRefundFiringIDs[0x1e]; // 0x52c
	int32_t c_nEligableRefundFiringIDsIndexLast; // 0x61c
	int32_t c_nEligableRefundFiringIDsIndexFirst; // 0x620
	int32_t m_nLastFiringIDToConsumeAmmo; // 0x624
	int32_t m_UniqueAmmoValidationId; // 0x628
	float m_fAmmoRegenPerSec; // 0x62c
	float m_fAmmoRegenCounter; // 0x630
	TArray<ObjectProperty> m_FiredProjectiles; // 0x634
	float m_fForce3PPersistDuration; // 0x644
	float m_fForce3PPersistTimer; // 0x648
	float m_fEnterCombatDuration; // 0x64c
	ObjectProperty r_Deployable; // 0x650
	int32_t r_nProjectiles; // 0x658
	float m_fDeployZForgiveness; // 0x65c
	float m_fBottomlessPitCheck; // 0x660
	float m_fDeployZOffset; // 0x664
	TArray<int32_t> m_Abilities; // 0x668
	int32_t m_DisplayIcon; // 0x678
	FString m_DisplayName; // 0x67c
	float m_fOnGroundAltitudeThreshold; // 0x68c
	ObjectProperty m_PrimaryWeaponParent; // 0x690
	ATgWeaponMeshActor* m_WeaponMeshActorClass; // 0x698
	ObjectProperty m_LastKnownHitActor; // 0x6a0
	TArray<DelegateProperty> m_OnFiredDelegates; // 0x6a8
	TArray<DelegateProperty> m_OnReloadDelegates; // 0x6b8
	TArray<DelegateProperty> m_OnStartFireDelegates; // 0x6c8
	TArray<DelegateProperty> m_OnStopFireDelegates; // 0x6d8
	TArray<DelegateProperty> m_Generic1Delegates; // 0x6e8
	TArray<DelegateProperty> m_Generic2Delegates; // 0x6f8
	TArray<DelegateProperty> m_Generic3Delegates; // 0x708
	TArray<int32_t> m_nLinkedDeviceIDs; // 0x718
	TArray<int32_t> m_nLinkedDeviceTypes; // 0x728
	TArray<FTgQueuedSimulatedProjectileSpawn> c_QueuedSimulatedProjectileSpawns; // 0x738
	TArray<FTgQueuedSimulatedProjectileSpawn> s_QueuedProjectileSpawnsFromServer; // 0x748
	TArray<FTgQueuedSimulatedProjectileSpawn> s_QueuedProjectileSpawnsFromClient; // 0x758
	TArray<FTgQueuedProjectileExplosion> s_QueuedProjectileExplosions; // 0x768
	int32_t s_nNumServerRefires; // 0x778
	int32_t s_nNumClientRefires; // 0x77c
	TArray<FTgQueuedRefire> s_QueuedRefireRequests; // 0x780
	TArray<FTgQueuedInstantFireShot> s_QueuedInstantFireShotsFromServer; // 0x790
	TArray<FTgQueuedInstantFireShot> s_QueuedInstantFireShotsFromClient; // 0x7a0
	FPointer m_RandomShotSpreadStream; // 0x7b0
	int32_t m_nLastSetShotSpreadSeed; // 0x7b8
	FVector2D m_AimAssistMagnetScale; // 0x7bc
	FVector2D m_AimAssistFrictionScale; // 0x7c4
	FVector2D m_AimAssistTrackingScale; // 0x7cc
	FVector2D m_AimAssistLockScale; // 0x7d4
	float m_fBulletMagnetismStrengthMultiplier; // 0x7dc
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesMagnetVert; // 0x7e0
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesMagnetHoriz; // 0x7f0
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesFriction; // 0x800
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesTrackingAccHoriz; // 0x810
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesTrackingAngleHoriz; // 0x820
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesTrackingAccVert; // 0x830
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesTrackingAngleVert; // 0x840
	TArray<FAimAssistKeyframeData> m_AimAssistKeyframesFrictionVert; // 0x850
	TArray<ObjectProperty> m_GameplayCurveOverrideDevices; // 0x860
	int32_t m_nServerControlledShotSpreadSeed; // 0x870
	float m_fOutroLockoutTime; // 0x874
	float m_fMinTimeBetweenAmmoCharges; // 0x878
	TArray<ObjectProperty> m_ForceFeedbackStartHold; // 0x87c
	TArray<ObjectProperty> m_ForceFeedbackFullHold; // 0x88c
	TArray<ObjectProperty> m_ForceFeedbackStopHold; // 0x89c
	TArray<ObjectProperty> m_ForceFeedbackStartFire; // 0x8ac
	TArray<ObjectProperty> m_ForceFeedbackStartFireLoop; // 0x8bc
	TArray<ObjectProperty> m_ForceFeedbackStopFire; // 0x8cc
	TArray<ObjectProperty> m_ForceFeedbackStartBuildup; // 0x8dc
	TArray<ObjectProperty> m_ForceFeedbackStopBuildup; // 0x8ec
	TArray<ObjectProperty> m_ForceFeedbackPostFire; // 0x8fc
	TArray<ObjectProperty> m_ForceFeedbackStartReload; // 0x90c
	TArray<ObjectProperty> m_ForceFeedbackStopReload; // 0x91c
	TArray<ObjectProperty> m_ForceFeedbackStartCooldown; // 0x92c
	float s_fForceReleaseFirHoldFUBARTime; // 0x93c
	int32_t s_nLastRequestedFireHoldReleaseID; // 0x940
	FAccuracySettings m_AccuracySettings[0x5]; // 0x944
	float m_fCurrentAdvancedAccuracy; // 0x9d0
	float m_fLastShotTimestamp; // 0x9d4
	int32_t m_nFreeShotsLeft; // 0x9d8
	float m_fLastMinAccuracy; // 0x9dc
	float m_fReticleBloomScale; // 0x9e0
	FRecoilSettings m_RecoilSettings[0x5]; // 0x9e4
	float m_fStartFiringTimestamp; // 0xa34
	float m_fAccumulatedFiringTime; // 0xa38
	int32_t m_nRandRecoilNum; // 0xa3c
	int32_t r_nRecoilSeed; // 0xa40
	int32_t m_nAimAssistPriorityWhileFiring; // 0xa44
	int32_t r_nAllowUseWhileFlags; // 0xa48
	float m_fSprintRecoverTime; // 0xa4c
	float r_fAttackSpeedPercChange; // 0xa50
	float m_fSimulatedAttackSpeedPercChange; // 0xa54
	float s_fAttackSpeedPercChangeLeniency; // 0xa58
	TArray<FAttackSpeedModifier> m_AttackSpeedModifiers; // 0xa5c
	ObjectProperty m_AmmoDevice; // 0xa6c
	int32_t r_nDeviceLevel; // 0xa74
	float m_fZoomTime; // 0xa78
	float m_fZoomOutTime; // 0xa7c
	float m_fDesiredZoomFOV; // 0xa80
	float m_fDesiredZoomMeshFOV; // 0xa84
	ObjectProperty m_ZoomOverlayMaterial; // 0xa88
	FVector m_vZoomMeshOffset; // 0xa90
	FVector m_vZoomMeshOffsetWidescreen; // 0xa9c
	float m_fZoomWeaponBob; // 0xaa8
	int32_t m_AltFireMode; // 0xaac
	float m_fToggleMeshFOV; // 0xab0
	float m_fToggleScopeFOV; // 0xab4
	FName m_sAimOffsetProfile; // 0xab8
	FName m_sRecoilProfile; // 0xac0
	float m_fZCrouchProjectileOffset; // 0xac8
	FName m_sSocketName; // 0xacc
	UTgMuzzleFlash* m_MuzzleFlashLightClass; // 0xad4
	DelegateProperty __DeviceEvent__Delegate; // 0xadc
};

struct UTgSpecialFx {
	int32_t c_nFxId; // 0x60
	ComponentProperty c_OwnerMesh; // 0x64
	ObjectProperty c_Owner; // 0x6c
	char c_bAttached : 1; // 0x74
	char c_bAppliesToAllModes : 1; // 0x74
	char c_bSelfManage : 1; // 0x74
	char c_bFromEffectForm : 1; // 0x74
	char c_bVisualComplete : 1; // 0x74
	char c_bAudioComplete : 1; // 0x74
	char c_bMuteSound : 1; // 0x74
	char c_bIsDebuff : 1; // 0x74
	char c_bHasTeamMaterials : 0; // 0x74
	char c_bActive : 0; // 0x74
	char c_bIsSpawnFx : 0; // 0x74
	char c_bUseBeam : 0; // 0x74
	char c_bLifetimeManagedExternally : 0; // 0x74
	char c_bLocalPawnIsOwner : 0; // 0x74
	char m_bMatLoaded : 0; // 0x74
	char m_bMatLoadedFriendly : 0; // 0x74
	char m_bMatLoadedLocal : 0; // 0x74
	char m_bDecalMatLoaded : 0; // 0x74
	char m_bDecalMatLoadedFriendly : 0; // 0x74
	char m_bDecalMatLoadedLocal : 0; // 0x74
	int32_t c_nPriorityType; // 0x78
	int32_t c_nPrioritySort; // 0x7c
	FName c_nmSocket; // 0x80
	FName c_nmDisplayGroup; // 0x88
	int32_t c_nDisplayMode; // 0x90
	int32_t c_nIndex; // 0x94
	int32_t c_nEquipSlot; // 0x98
	ObjectProperty c_MaterialInstance; // 0x9c
	float c_fTransition; // 0xa4
	int32_t c_nHitEffectBase; // 0xa8
	float c_fMaxEffectDistance; // 0xac
	FParticleChannelContainer c_ParticleChannelOverride; // 0xb0
	int32_t c_nSortPriorityOverride; // 0xb4
	int32_t c_bSortPriorityOverridden; // 0xb8
	ELightFxState c_LightComponentState; // 0xbc
	ComponentProperty c_LightComponent; // 0xc0
	FPointer c_ManagedLightEmitter; // 0xc8
	TArray<FFx_Sound> c_SoundList; // 0xd0
	TArray<FFx_PSC> c_PSCList; // 0xe0
	TArray<FFx_Material> c_MaterialList; // 0xf0
	TArray<FFx_Decal> c_DecalList; // 0x100
	ObjectProperty c_CameraShake; // 0x110
	ObjectProperty c_ActiveTimer; // 0x118
	TArray<FAppliedMaterialHandle> m_AppliedMaterials; // 0x120
};

struct UOnlineImageDownloaderWeb {
	TArray<FOnlineImageDownload> DownloadImages; // 0x60
	int32_t MaxSimultaneousDownloads; // 0x70
	DelegateProperty __OnOnlineImageDownloaded__Delegate; // 0x74
};

struct ACoverGroup {
	TArray<FActorReference> CoverLinkRefs; // 0x280
	float AutoSelectRadius; // 0x290
	float AutoSelectHeight; // 0x294
};

struct UPBRuleNodeEdgeAngle {
	EProcBuildingEdge Edge; // 0x70
	TArray<FRBEdgeAngleInfo> Angles; // 0x74
};

struct UTgAnimNodeMountSync {
	ObjectProperty m_TgP; // 0x114
	TArray<FName> m_nmSyncGroupNames; // 0x11c
};

struct UUIData_PortalAccount {
	Fdword m_dwPortalId; // 0x70
	char m_bLinked : 1; // 0x74
	char m_bLinkSilentCheck : 1; // 0x74
};

struct UAnimNodeFrame {
	int32_t SizeX; // 0x68
	int32_t SizeY; // 0x6c
	int32_t BorderWidth; // 0x70
	char bDrawBox : 1; // 0x74
	char bFilled : 1; // 0x74
	char bTileFill : 1; // 0x74
	FColor BorderColor; // 0x78
	FColor FillColor; // 0x7c
};

struct AZoneInfo {
	float KillZ; // 0x280
	float SoftKill; // 0x284
	UKillZDamageType* KillZDamageType; // 0x288
	char bSoftKillZ : 1; // 0x290
};

struct UTgDeviceForm_ChurchillADS {
	float m_fDesiredScopeWorld1pFOV; // 0x2bc
	float m_fDesiredScopeWorld3pFOV; // 0x2c0
};

struct UUIComponent_EntryToggle {
	char m_bActive : 1; // 0x120
	char m_bAllIsWell : 1; // 0x120
	ObjectProperty m_mcText; // 0x124
	ObjectProperty m_mcToggle; // 0x12c
	ObjectProperty m_Button; // 0x134
};

struct UUIData_SpecialEvent {
	Fdword m_dwCount; // 0x94
	Fdword m_dwCompleteCount; // 0x98
	Fdword m_dwLootTableItemId; // 0x9c
	Fdword m_dwEndSeconds; // 0xa0
	Fdword m_dwNameMsgId; // 0xa4
	Fdword m_dwDescMsgId; // 0xa8
	Fdword m_dwIconId; // 0xac
	Fdword m_dwGoalId; // 0xb0
	Fdword m_dwGoalActivityType; // 0xb4
};

struct UTgSeqAct_ParentAnimComponent {
	char bDetach : 1; // 0x108
};

struct UCurveEdPresetCurve {
	FString CurveName; // 0x60
	TArray<FPresetGeneratedPoint> Points; // 0x70
};

struct USkeletalMeshComponent {
	ObjectProperty SkeletalMesh; // 0x294
	ComponentProperty AttachedToSkelComponent; // 0x29c
	ObjectProperty AnimTreeTemplate; // 0x2a4
	ObjectProperty Animations; // 0x2ac
	TArray<ObjectProperty> AnimTickArray; // 0x2b4
	TArray<ObjectProperty> AnimAlwaysTickArray; // 0x2c4
	TArray<int32_t> AnimTickRelevancyArray; // 0x2d4
	TArray<float> AnimTickWeightsArray; // 0x2e4
	TArray<ObjectProperty> SkelControlTickArray; // 0x2f4
	ObjectProperty PhysicsAsset; // 0x304
	ObjectProperty PhysicsAssetInstance; // 0x30c
	FPointer ApexClothing; // 0x314
	float PhysicsWeight; // 0x31c
	float GlobalAnimRateScale; // 0x320
	float StreamingDistanceMultiplier; // 0x324
	FPointer MeshObject; // 0x328
	FColor WireframeColor; // 0x330
	TArray<FBoneAtom> SpaceBases; // 0x334
	TArray<FMatrix> m_AnimBases; // 0x344
	TArray<FBoneAtom> LocalAtoms; // 0x354
	TArray<FBoneAtom> CachedLocalAtoms; // 0x364
	TArray<FBoneAtom> CachedSpaceBases; // 0x374
	int32_t LowUpdateFrameRate; // 0x384
	TArray<char> RequiredBones; // 0x388
	TArray<char> ComposeOrderedRequiredBones; // 0x398
	ComponentProperty ParentAnimComponent; // 0x3a8
	TArray<int32_t> ParentBoneMap; // 0x3b0
	TArray<ObjectProperty> AnimSets; // 0x3c0
	TArray<ObjectProperty> TemporarySavedAnimSets; // 0x3d0
	TArray<ObjectProperty> MorphSets; // 0x3e0
	TArray<FActiveMorph> ActiveMorphs; // 0x3f0
	TArray<FActiveMorph> ActiveCurveMorphs; // 0x400
	TMap<None, None> MorphTargetIndexMap; // 0x410
	TArray<FAttachment> Attachments; // 0x458
	TArray<char> SkelControlIndex; // 0x468
	TArray<char> PostPhysSkelControlIndex; // 0x478
	int32_t ForcedLodModel; // 0x488
	int32_t MinLodModel; // 0x48c
	int32_t PredictedLODLevel; // 0x490
	int32_t OldPredictedLODLevel; // 0x494
	float AnimationLODDistanceFactor; // 0x498
	int32_t AnimationLODFrameRate; // 0x49c
	float MaxDistanceFactor; // 0x4a0
	int32_t bForceWireframe; // 0x4a4
	int32_t bForceRefpose; // 0x4a8
	int32_t bOldForceRefPose; // 0x4ac
	char bNoSkeletonUpdate : 1; // 0x4b0
	int32_t bDisplayBones; // 0x4b4
	int32_t bShowPrePhysBones; // 0x4b8
	int32_t bHideSkin; // 0x4bc
	int32_t bForceRawOffset; // 0x4c0
	int32_t bIgnoreControllers; // 0x4c4
	int32_t bTransformFromAnimParent; // 0x4c8
	int32_t TickTag; // 0x4cc
	int32_t InitTag; // 0x4d0
	int32_t CachedAtomsTag; // 0x4d4
	int32_t bUseSingleBodyPhysics; // 0x4d8
	int32_t bRequiredBonesUpToDate; // 0x4dc
	float MinDistFactorForKinematicUpdate; // 0x4e0
	int32_t FramesPhysicsAsleep; // 0x4e4
	int32_t SkipRateForTickAnimNodesAndGetBoneAtoms; // 0x4e8
	char bSkipTickAnimNodes : 1; // 0x4ec
	char bSkipGetBoneAtoms : 1; // 0x4ec
	char bInterpolateBoneAtoms : 1; // 0x4ec
	char bHasValidBodies : 1; // 0x4ec
	char bSkipAllUpdateWhenPhysicsAsleep : 1; // 0x4ec
	char bComponentUseFixedSkelBounds : 1; // 0x4ec
	char bUseBoundsFromParentAnimComponent : 1; // 0x4ec
	char bConsiderAllBodiesForBounds : 1; // 0x4ec
	char bUpdateSkelWhenNotRendered : 0; // 0x4ec
	char bIgnoreControllersWhenNotRendered : 0; // 0x4ec
	char bTickAnimNodesWhenNotRendered : 0; // 0x4ec
	char bNotUpdatingKinematicDueToDistance : 0; // 0x4ec
	char bForceDiscardRootMotion : 0; // 0x4ec
	char bNotifyRootMotionProcessed : 0; // 0x4ec
	char bRootMotionModeChangeNotify : 0; // 0x4ec
	char bRootMotionExtractedNotify : 0; // 0x4ec
	char bProcessingRootMotion : 0; // 0x4ec
	char bDisableFaceFXMaterialInstanceCreation : 0; // 0x4ec
	char bDisableFaceFX : 0; // 0x4ec
	char bAnimTreeInitialised : 0; // 0x4ec
	char bForceMeshObjectUpdate : 0; // 0x4ec
	char bHasPhysicsAssetInstance : 0; // 0x4ec
	char bUpdateKinematicBonesFromAnimation : 0; // 0x4ec
	char bUpdateJointsFromAnimation : 0; // 0x4ec
	char bSkelCompFixed : 0; // 0x4ec
	char bHasHadPhysicsBlendedIn : 0; // 0x4ec
	char bForceUpdateAttachmentsInTick : 0; // 0x4ec
	char bEnableFullAnimWeightBodies : 0; // 0x4ec
	char bPerBoneVolumeEffects : 0; // 0x4ec
	char bPerBoneMotionBlur : 0; // 0x4ec
	char bSyncActorLocationToRootRigidBody : 0; // 0x4ec
	char bUseRawData : 0; // 0x4ec
	char bDisableWarningWhenAnimNotFound : 1; // 0x4f0
	char bOverrideAttachmentOwnerVisibility : 1; // 0x4f0
	char bOverrideAttachmentDepthPriorityGroup : 1; // 0x4f0
	char bNeedsToDeleteHitMask : 1; // 0x4f0
	char bPauseAnims : 1; // 0x4f0
	char bPauseSkelControls : 1; // 0x4f0
	char bChartDistanceFactor : 1; // 0x4f0
	char bEnableLineCheckWithBounds : 1; // 0x4f0
	char bCanHighlightSelectedSections : 0; // 0x4f0
	char bUpdateMorphWhenParentAnimComponentExists : 0; // 0x4f0
	FVector LineCheckBoundsScale; // 0x4f4
	char bEnableClothSimulation : 1; // 0x500
	char bDisableClothCollision : 1; // 0x500
	char bClothFrozen : 1; // 0x500
	char bAutoFreezeClothWhenNotRendered : 1; // 0x500
	char bClothAwakeOnStartup : 1; // 0x500
	char bClothBaseVelClamp : 1; // 0x500
	char bClothBaseVelInterp : 1; // 0x500
	char bAttachClothVertsToBaseBody : 1; // 0x500
	char bIsClothOnStaticObject : 0; // 0x500
	char bUpdatedFixedClothVerts : 0; // 0x500
	char bClothPositionalDampening : 0; // 0x500
	char bClothWindRelativeToOwner : 0; // 0x500
	char bRecentlyRendered : 0; // 0x500
	char bCacheAnimSequenceNodes : 0; // 0x500
	char bNeedsInstanceWeightUpdate : 0; // 0x500
	char bAlwaysUseInstanceWeights : 0; // 0x500
	char bUpdateComposeSkeletonPasses : 0; // 0x500
	char bValidTemporarySavedAnimSets : 0; // 0x500
	int32_t bHasDeferredPoseUpdate; // 0x504
	int32_t c_nOverrideSkinId; // 0x508
	int32_t c_nOverrideSkinLevel; // 0x50c
	TArray<FBonePair> InstanceVertexWeightBones; // 0x510
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x520
	FVector FrozenLocalToWorldPos; // 0x530
	FRotator FrozenLocalToWorldRot; // 0x53c
	FVector ClothExternalForce; // 0x548
	FVector ClothWind; // 0x554
	FVector ClothBaseVelClampRange; // 0x560
	float ClothBlendWeight; // 0x56c
	float ClothDynamicBlendWeight; // 0x570
	float ClothBlendMinDistanceFactor; // 0x574
	float ClothBlendMaxDistanceFactor; // 0x578
	FVector MinPosDampRange; // 0x57c
	FVector MaxPosDampRange; // 0x588
	FVector MinPosDampScale; // 0x594
	FVector MaxPosDampScale; // 0x5a0
	FPointer ClothSim; // 0x5ac
	int32_t SceneIndex; // 0x5b4
	TArray<FVector> ClothMeshPosData; // 0x5b8
	TArray<FVector> ClothMeshNormalData; // 0x5c8
	TArray<int32_t> ClothMeshIndexData; // 0x5d8
	int32_t NumClothMeshVerts; // 0x5e8
	int32_t NumClothMeshIndices; // 0x5ec
	TArray<int32_t> ClothMeshParentData; // 0x5f0
	int32_t NumClothMeshParentIndices; // 0x600
	TArray<FVector> ClothMeshWeldedPosData; // 0x604
	TArray<FVector> ClothMeshWeldedNormalData; // 0x614
	TArray<int32_t> ClothMeshWeldedIndexData; // 0x624
	int32_t ClothDirtyBufferFlag; // 0x634
	ERBCollisionChannel ClothRBChannel; // 0x638
	FRBCollisionChannelContainer ClothRBCollideWithChannels; // 0x63c
	float ClothForceScale; // 0x640
	float ClothImpulseScale; // 0x644
	float ClothAttachmentTearFactor; // 0x648
	char bClothUseCompartment : 1; // 0x64c
	float MinDistanceForClothReset; // 0x650
	FVector LastClothLocation; // 0x654
	ERBCollisionChannel ApexClothingRBChannel; // 0x660
	FRBCollisionChannelContainer ApexClothingRBCollideWithChannels; // 0x664
	ERBCollisionChannel ApexClothingCollisionRBChannel; // 0x668
	char bAutoFreezeApexClothingWhenNotRendered : 1; // 0x66c
	char bLocalSpaceWind : 1; // 0x66c
	FVector WindVelocity; // 0x670
	float WindVelocityBlendTime; // 0x67c
	char bSkipInitClothing : 1; // 0x680
	FPointer SoftBodySim; // 0x684
	int32_t SoftBodySceneIndex; // 0x68c
	char bEnableSoftBodySimulation : 1; // 0x690
	TArray<FVector> SoftBodyTetraPosData; // 0x694
	TArray<int32_t> SoftBodyTetraIndexData; // 0x6a4
	int32_t NumSoftBodyTetraVerts; // 0x6b4
	int32_t NumSoftBodyTetraIndices; // 0x6b8
	float SoftBodyImpulseScale; // 0x6bc
	char bSoftBodyFrozen : 1; // 0x6c0
	char bAutoFreezeSoftBodyWhenNotRendered : 1; // 0x6c0
	char bSoftBodyAwakeOnStartup : 1; // 0x6c0
	char bSoftBodyUseCompartment : 1; // 0x6c0
	ERBCollisionChannel SoftBodyRBChannel; // 0x6c4
	FRBCollisionChannelContainer SoftBodyRBCollideWithChannels; // 0x6c8
	FPointer SoftBodyASVPlane; // 0x6cc
	ObjectProperty LimitMaterial; // 0x6d4
	FBoneAtom RootMotionDelta; // 0x6e0
	FVector RootMotionVelocity; // 0x700
	FVector RootBoneTranslation; // 0x70c
	FVector RootMotionAccelScale; // 0x718
	ERootMotionMode RootMotionMode; // 0x724
	ERootMotionMode PreviousRMM; // 0x725
	ERootMotionMode PendingRMM; // 0x726
	ERootMotionMode OldPendingRMM; // 0x727
	int32_t bRMMOneFrameDelay; // 0x728
	ERootMotionRotationMode RootMotionRotationMode; // 0x72c
	EAnimRotationOnly AnimRotationOnly; // 0x72d
	EFaceFXBlendMode FaceFXBlendMode; // 0x72e
	FPointer FaceFXActorInstance; // 0x730
	ComponentProperty CachedFaceFXAudioComp; // 0x738
	TArray<char> BoneVisibilityStates; // 0x740
	ObjectProperty CachedFaceFxAkEvent; // 0x750
	FBoneAtom LocalToWorldBoneAtom; // 0x760
	float ProgressiveDrawingFraction; // 0x780
	char CustomSortAlternateIndexMode; // 0x784
	TArray<FName> MorphTargetsQueried; // 0x788
	char bUseTickOptimization : 1; // 0x798
	int32_t TickCount; // 0x79c
	int32_t LastDropRate; // 0x7a0
	float LastDropRateChange; // 0x7a4
	float AccumulatedDroppedDeltaTime; // 0x7a8
	float ComponentDroppedDeltaTime; // 0x7ac
	float FOV; // 0x7b0
};

struct UTgAnimMetaData_Keyframed {
	TArray<FMetaDataKeyFrame> KeyFrames; // 0x60
	char bForceFirstKeyFrameOnBecomeRelevant : 1; // 0x70
	char bForceLastKeyFrameOnCeaseRelevant : 1; // 0x70
	EOnRelevanceBehavior OnBecomeRelevantBehavior; // 0x74
	EOnRelevanceBehavior OnCeaseRelevantBehavior; // 0x75
	float OnBecomeRelevantStrength; // 0x78
	float OnCeaseRelevantStrength; // 0x7c
};

struct UFractureMaterial {
	ObjectProperty FractureEffect; // 0x60
	ObjectProperty FractureSound; // 0x68
};

struct ATgLobbyCaptureActor {
	ObjectProperty m_ViewTarget; // 0x290
};

struct UMaterialExpressionStaticSwitchParameter {
	FExpressionInput A; // 0xdc
	FExpressionInput B; // 0x110
};

struct UDistributionFloatUniformCurve {
	FInterpCurveVector2D ConstantCurve; // 0x7c
};

struct UMeshBeacon {
	FPointer VfTable_FTickableObject; // 0x60
	int32_t MeshBeaconPort; // 0x68
	FPointer Socket; // 0x6c
	char bIsInTick : 1; // 0x74
	char bWantsDeferredDestroy : 1; // 0x74
	char bShouldTick : 1; // 0x74
	float HeartbeatTimeout; // 0x78
	float ElapsedHeartbeatTime; // 0x7c
	FName BeaconName; // 0x80
	int32_t SocketSendBufferSize; // 0x88
	int32_t SocketReceiveBufferSize; // 0x8c
	int32_t MaxBandwidthTestBufferSize; // 0x90
	int32_t MinBandwidthTestBufferSize; // 0x94
	float MaxBandwidthTestSendTime; // 0x98
	float MaxBandwidthTestReceiveTime; // 0x9c
	int32_t MaxBandwidthHistoryEntries; // 0xa0
};

struct ATgProj_Simulated {
	char m_bHasFlashedShutdown : 1; // 0x450
	char m_bHasFlashExploded : 1; // 0x450
	char m_bIgnoreClientHits : 1; // 0x450
	char m_bShouldQueueServerHits : 1; // 0x450
	char m_bHasQueuedServerHit : 1; // 0x450
	char m_bNeedsFrictionOverride : 1; // 0x450
	char m_bFlashSpecialExplosion : 1; // 0x450
	char m_bTrackProjectileForTimelapse : 1; // 0x450
	char s_bTrackingInitialized : 0; // 0x450
	char m_bRequireAccurateTicksForPrediction : 0; // 0x450
	int32_t m_nProjectileInstanceId; // 0x454
	int32_t m_nClientFireRequestId; // 0x458
	int32_t m_nFireLoopInstanceId; // 0x45c
	FVector m_LerpFromClientOffset; // 0x460
	float m_LerpTimeRemaining; // 0x46c
	ObjectProperty m_QueuedExplodeTarget; // 0x470
	FVector m_QueuedExplodeLocation; // 0x478
	FVector m_QueuedExplodeNormal; // 0x484
	FVector m_vSpawnVelocity; // 0x490
	FVector m_vSpawnAcceleration; // 0x49c
	FRotator m_rSpawnRotator; // 0x4a8
	float m_fAllowedClientMovementTime; // 0x4b4
	float m_fSpawnTimeStamp; // 0x4b8
	float m_fGravityScale; // 0x4bc
	float m_fFrictionOverride; // 0x4c0
	TArray<ObjectProperty> s_InterestedPlayers; // 0x4c4
	int32_t m_nShadowFXID; // 0x4d4
	ObjectProperty m_ShadowFX; // 0x4d8
	ComponentProperty m_ShadowDecal; // 0x4e0
	float m_fShadowBaseWidth; // 0x4e8
	float m_fMaxDecalHeight; // 0x4ec
	FRotator m_CachedRotation; // 0x4f0
	float m_fTrackingUpdateRate; // 0x4fc
	float s_fTrackingUpdateTimer; // 0x500
	ObjectProperty m_GameplayCurves; // 0x504
	int32_t m_nDeployableOverlayDisplayMask; // 0x50c
	DeployableOverlayIcon m_eDeployableOverlayIcon; // 0x510
	DeployableOverlayState m_eDeployableOverlayState; // 0x511
	float m_fDeployableOverlayEnemyViewDist; // 0x514
	float m_fDeployableActiveLifeTime; // 0x518
};

struct UAnimNodeBlendDirectional {
	float DirDegreesPerSecond; // 0x114
	float DirAngle; // 0x118
	int32_t SingleAnimAtOrAboveLOD; // 0x11c
	FRotator RotationOffset; // 0x120
	char bUseAcceleration : 1; // 0x12c
};

struct UParticleModuleSubUVSelect {
	FRawDistributionVector SubImageSelect; // 0x68
};

struct UTgMiniMap_Targeting {
	ObjectProperty m_MICWardTarget[0x6]; // 0x5bc
};

struct UUIGameMenu {
	char m_bInGame : 1; // 0x244
	char m_bGuides : 1; // 0x244
	char m_bOption : 1; // 0x244
	char m_bTutorial : 1; // 0x244
	float m_fPulseTimer; // 0x248
	ObjectProperty m_mcLogo; // 0x24c
	ObjectProperty m_mcLine; // 0x254
	ObjectProperty m_mcName; // 0x25c
	ObjectProperty m_mcNote; // 0x264
	ObjectProperty m_mcDesc; // 0x26c
	ObjectProperty m_mcTitle; // 0x274
	ObjectProperty m_mcBlocker; // 0x27c
	ObjectProperty m_mcButton[0x6]; // 0x284
	ObjectProperty m_mcOption[0x2]; // 0x2b4
	ObjectProperty m_pMenuButtonsGroup; // 0x2c4
	ObjectProperty m_pMenuOptionsGroup; // 0x2cc
};

struct ATgDeploy_LootCrateMagic {
	int32_t r_nChestInstigatorId; // 0x4b4
	char r_bIsChestOpened : 1; // 0x4b8
	TArray<int32_t> m_nOpenedPawnIds; // 0x4bc
};

struct UGameSkelCtrl_Recoil {
	char bBoneSpaceRecoil : 1; // 0xd0
	char bPlayRecoil : 1; // 0xd0
	char bOldPlayRecoil : 1; // 0xd0
	char bApplyControl : 1; // 0xd0
	char m_bBlendIn : 1; // 0xd0
	FRecoilDef Recoil; // 0xd4
	FVector2D Aim; // 0x144
	float m_bBlendInRemainingTime; // 0x14c
	FVector m_BlendLoc; // 0x150
	FRotator m_BlendRot; // 0x15c
};

struct UTgInventoryObject_Listen_AffectedByDeviceActiveWhile {
	char m_bIsCardActive : 1; // 0xc8
};

struct UTgGameDC_Device {
	int32_t m_nDeviceId; // 0x16c
	int32_t m_nDeviceInstanceId; // 0x170
	int32_t m_nPointsAllocated; // 0x174
	ObjectProperty m_CooldownTimer; // 0x178
	DelegateProperty __usc_get_mode_tooltip_delegate__Delegate; // 0x180
	DelegateProperty __usc_set_cast_mode_delegate__Delegate; // 0x190
};

struct UTgInventoryObject_Listen_BowlingBall {
	float m_fRocketBootsEndTime; // 0xd8
	float m_fPostRocketBootsTime; // 0xdc
};

struct AInteractiveFoliageActor {
	ComponentProperty CylinderComponent; // 0x2a4
	FVector TouchingActorEntryPosition; // 0x2ac
	FVector FoliageVelocity; // 0x2b8
	FVector FoliageForce; // 0x2c4
	FVector FoliagePosition; // 0x2d0
	float FoliageDamageImpulseScale; // 0x2dc
	float FoliageTouchImpulseScale; // 0x2e0
	float FoliageStiffness; // 0x2e4
	float FoliageStiffnessQuadratic; // 0x2e8
	float FoliageDamping; // 0x2ec
	float MaxDamageImpulse; // 0x2f0
	float MaxTouchImpulse; // 0x2f4
	float MaxForce; // 0x2f8
	float Mass; // 0x2fc
};

struct ATgSpectatorHUD {
	TArray<FWidgetClassReplacementPair> m_WidgetReplacements; // 0x68c
};

struct UTgControlModule_StunTaunted {
	float m_fInitialYaw; // 0xcc
	float m_fInterpTime; // 0xd0
	float m_fRemainingInterpTime; // 0xd4
};

struct UTgSeqEvent_MICParameterEvent {
	eMICEventType MICEventType; // 0x128
	TArray<ObjectProperty> AttachedMICs; // 0x12c
};

struct UFaceFXAnimSet {
	FPointer InternalFaceFXAnimSet; // 0x60
	TArray<char> RawFaceFXAnimSetBytes; // 0x68
	TArray<char> RawFaceFXMiniSessionBytes; // 0x78
	int32_t NumLoadErrors; // 0x88
};

struct UInterpGroupInstAI {
	ObjectProperty AIGroup; // 0x88
	EPhysics SavedPhysics; // 0x90
	char bSavedNoEncroachCheck : 1; // 0x94
	char bSavedCollideActors : 1; // 0x94
	char bSavedBlockActors : 1; // 0x94
	ObjectProperty StageMarkActor; // 0x98
};

struct UTgAIBehaviorCondition_NearbyGodCount {
	char bMustBeEnemy : 1; // 0x9c
	char bMustBeInForwardCone : 1; // 0x9c
	int32_t GodThreshold; // 0xa0
	float ForwardConeAngle; // 0xa4
};

struct UTgSeqAct_SetMountingEnabled {
	char bEnabled : 1; // 0x108
};

struct ATgVolumePathNode {
	char m_bIsAboveGround : 1; // 0x380
	FVector m_vGroundHitLocation; // 0x384
	float m_fGroundTraceDistance; // 0x390
	ComponentProperty m_GroundSprite; // 0x394
};

struct UUIHome {
	Fdword m_dwVendorRequestId; // 0x244
	char m_bQueued : 1; // 0x248
	char m_bMatchFound : 1; // 0x248
	char m_bAnimateMenu : 1; // 0x248
	char m_bPassEnabled : 1; // 0x248
	char m_bGameBitNoStore : 1; // 0x248
	ObjectProperty m_mcPass; // 0x24c
	ObjectProperty m_mcPassIcon; // 0x254
	ObjectProperty m_mcPassIconLevelA; // 0x25c
	ObjectProperty m_mcPassIconLevelB; // 0x264
	ObjectProperty m_mcPassIconLevelC; // 0x26c
	ObjectProperty m_mcPassDetails; // 0x274
	ObjectProperty m_mcPassDetailsDesc; // 0x27c
	ObjectProperty m_mcPassDetailsType; // 0x284
	ObjectProperty m_mcPassDetailBar; // 0x28c
	ObjectProperty m_mcPassDetailBarTip; // 0x294
	ObjectProperty m_mcPassDetailBarFill; // 0x29c
	ObjectProperty m_mcLogo; // 0x2a4
	ObjectProperty m_mcButton[0x9]; // 0x2ac
	ObjectProperty m_mcButtonCTA[0x9]; // 0x2f4
	ObjectProperty m_mcButtonDailyCTA[0x9]; // 0x33c
	ObjectProperty m_mcButtonSale[0x9]; // 0x384
	ObjectProperty m_mcButtonText[0x9]; // 0x3cc
	ObjectProperty m_mcButtonBounds[0x9]; // 0x414
	ObjectProperty m_mcButtonHighlight; // 0x45c
	ObjectProperty m_mcQuestList; // 0x464
	ObjectProperty m_mcQuestListClose; // 0x46c
	ObjectProperty m_mcQuestListBlocker; // 0x474
	ObjectProperty m_mcQuestEntry[0x3]; // 0x47c
	ObjectProperty m_mcQuestButton[0x3]; // 0x494
	ObjectProperty m_mcQuestDiscard[0x3]; // 0x4ac
	ObjectProperty m_mcQuestComplete[0x3]; // 0x4c4
	ObjectProperty m_mcQuestTitle[0x3]; // 0x4dc
	ObjectProperty m_mcQuestEntryCTA[0x3]; // 0x4f4
	ObjectProperty m_mcQuestMask[0x3]; // 0x50c
	ObjectProperty m_mcQuestTip[0x3]; // 0x524
	ObjectProperty m_mcQuestFillBar[0x3]; // 0x53c
	ObjectProperty m_mcQuestEntryBG[0x3]; // 0x554
	ObjectProperty m_mcQuestRewardText; // 0x56c
	ObjectProperty m_mcQuestReward1; // 0x574
	ObjectProperty m_mcCalloutGroup; // 0x57c
	ObjectProperty m_mcCalloutDecro; // 0x584
	ObjectProperty m_mcCalloutButton; // 0x58c
	ObjectProperty m_mcCalloutButtonKey; // 0x594
	ObjectProperty m_CarouselPanel; // 0x59c
	TArray<FJsonFeatureData> m_FeatureData; // 0x5a4
	TMap<None, None> m_FeatureMap; // 0x5b4
	ObjectProperty m_pButtonGroup; // 0x5fc
	ObjectProperty m_pQuestGroup; // 0x604
	ObjectProperty m_pRerollAction; // 0x60c
	ObjectProperty m_pDequeueAction; // 0x614
	ObjectProperty m_pCalloutAction; // 0x61c
	ObjectProperty m_akPlay; // 0x624
	ObjectProperty m_akLeave; // 0x62c
	ObjectProperty m_akMatch; // 0x634
	ObjectProperty m_akQuestOpen; // 0x63c
	ObjectProperty m_akQuestClose; // 0x644
	ObjectProperty m_akQuestReroll; // 0x64c
	ObjectProperty m_akQuestConfirm; // 0x654
};

struct ATgSpectatorController {
	SpectatorCameraMode m_CameraMode; // 0x1614
	SpectatorCameraCycle m_CurrentCycle; // 0x1615
	SpectatorCameraCycle m_PendingCycle; // 0x1616
	SpecFlightMode m_eHelicopterFlight; // 0x1617
	ESpectatorMode m_CurrentSpectatorMode; // 0x1618
	ESpecZoomState m_CurrentZoomState; // 0x1619
	ObjectProperty m_BookmarkCamera; // 0x161c
	FSpectatorBookmark m_Bookmarks[0xa]; // 0x1624
	float m_fDefaultTweenTime; // 0x1804
	char m_bOutlineCharacters : 1; // 0x1808
	char m_bIsMapSquashed : 1; // 0x1808
	char m_bIgnoreCullDistanceVolumes : 1; // 0x1808
	float m_fNameplateFadeMinDist; // 0x180c
	float m_fNameplateFadeMaxDist; // 0x1810
	float m_fNameplateFadeMaxAmount; // 0x1814
	float m_fNameplateScaleMinDist; // 0x1818
	float m_fNameplateScaleMaxDist; // 0x181c
	float m_fNameplateScaleMaxAmount; // 0x1820
	float m_fInterpolateCameraDistance; // 0x1824
	float m_TimeLastTaskforceChange; // 0x1828
	int32_t m_TaskForceID; // 0x182c
	int32_t m_NewTaskForceID; // 0x1830
	int32_t m_TaskforceChangeCount; // 0x1834
	FBroadcastChannel m_BroadcastChannels[0x4]; // 0x1838
	FVector c_vMouseClickDeprojectionExtent; // 0x1858
	float m_fOverviewCenterpointOffset; // 0x1864
	float m_fMouseCursorVisibleTime; // 0x1868
	float m_fRemainingCursorVisibleTime; // 0x186c
};

struct UUIData_ChestExtended {
	int32_t nItemId; // 0x60
	int32_t nBotRefId; // 0x64
	int32_t nVendorId; // 0x68
	int32_t nSortOrder; // 0x6c
	int32_t nRarity; // 0x70
	int32_t nBundleVendorId; // 0x74
	int32_t nBundleCount; // 0x78
	int32_t nBundleLootIds[0x4]; // 0x7c
	int32_t nBundleItemCounts[0x4]; // 0x8c
};

struct UTgSeqAct_GetMaterialInst {
	ObjectProperty MatInst; // 0x108
	FString MatInstName; // 0x110
	int32_t MaterialIndex; // 0x120
};

struct ADecalManager {
	ComponentProperty DecalTemplate; // 0x280
	TArray<ComponentProperty> PoolDecals; // 0x288
	float DecalLifeSpan; // 0x298
	float DecalDepthBias; // 0x29c
	float OrbisDecalDepthBias; // 0x2a0
	FVector2D DecalBlendRange; // 0x2a4
	TArray<FActiveDecalInfo> ActiveDecals; // 0x2ac
};

struct UOnlineEventsInterfaceMcp {
	TArray<FEventUploadConfig> EventUploadConfigs; // 0x80
	TArray<FPointer> MCPEventPostObjects; // 0x90
	TArray<EEventUploadType> DisabledUploadTypes; // 0xa0
	char bBinaryStats : 1; // 0xb0
};

struct UTgSkelCon_AstroSpinner {
	ObjectProperty m_PawnOwner; // 0x188
};

struct ATgBotEncounterVolume {
	TArray<ObjectProperty> m_Factories; // 0x2bc
	int32_t m_nPlayers; // 0x2cc
};

struct ATgDeployable {
	FPointer VfTable_ITgSkinnableInterface; // 0x280
	FPointer VfTable_ITgCombatActor; // 0x288
	FPointer VfTable_ITgObserver_ViewTargetChanged; // 0x290
	FPointer VfTable_ITgInteractiveAudio; // 0x298
	FPointer VfTable_ITgGameplayCurveOwner; // 0x2a0
	int32_t r_nDeployableId; // 0x2a8
	int32_t r_nUniqueDeployableId; // 0x2ac
	int32_t r_nSkinId; // 0x2b0
	int32_t r_nWeaponSkinId; // 0x2b4
	char c_bInitialized : 1; // 0x2b8
	char m_bConsumedOnFire : 1; // 0x2b8
	char m_bFireOnDeploy : 1; // 0x2b8
	char m_bHasAlreadyFiredOnce : 1; // 0x2b8
	char m_bInstantFire : 1; // 0x2b8
	char m_bRequiresEffectManager : 1; // 0x2b8
	char c_bMinimapOnlyOwnerSee : 1; // 0x2b8
	char r_bTakeDamage : 1; // 0x2b8
	char m_bInDestroyedState : 0; // 0x2b8
	char s_bDestroyedThisTick : 0; // 0x2b8
	char m_bIsDeployed : 0; // 0x2b8
	char c_bEnemyMatLoaded : 0; // 0x2b8
	char s_bAlwaysRelevantExceptRoyale : 0; // 0x2b8
	char m_bProtectedFromGameModeDestroy : 0; // 0x2b8
	char m_bProtectedFromOwnerDisconnectDestroy : 0; // 0x2b8
	char m_bDestroyOnOwnerDeathFlag : 0; // 0x2b8
	char m_bAdjustMeshToGround : 0; // 0x2b8
	char m_bIsVisionBlocker : 0; // 0x2b8
	char m_bIsAIVisionBlocker : 0; // 0x2b8
	char m_bMovableProjBlocker : 0; // 0x2b8
	char m_bShouldRagdoll : 0; // 0x2b8
	char m_bDeviceUsedIsHandDevice : 0; // 0x2b8
	char m_bUseSilhouettesOverride : 0; // 0x2b8
	char m_bOverrideTargetComponentHeight : 0; // 0x2b8
	char r_bInitialIsEnemy : 0; // 0x2b8
	char c_bIsSpectateToggleActive : 0; // 0x2b8
	char m_bUseRangeFalloffCurve : 0; // 0x2b8
	char m_bAllowDisenchant : 0; // 0x2b8
	int32_t m_nDeployableType; // 0x2bc
	int32_t r_nPhysicalType; // 0x2c0
	int32_t r_nHealth; // 0x2c4
	ObjectProperty r_EffectManager; // 0x2c8
	TArray<ObjectProperty> m_EquipEffects; // 0x2d0
	TArray<FTgPropertyInstance> s_Properties; // 0x2e0
	ObjectProperty c_Form; // 0x2f0
	ObjectProperty c_FireFx; // 0x2f8
	ComponentProperty c_Mesh; // 0x300
	FVector r_vFlashLocation; // 0x308
	char r_nFlashCount; // 0x314
	char r_nFlashFireCount; // 0x315
	char c_nPreviousFlashFireCount; // 0x316
	DeployableOverlayIcon m_InitHUDOverlayIcon; // 0x317
	DeployableOverlayState m_InitHUDOverlayState; // 0x318
	ObjectProperty m_FireMode; // 0x31c
	float m_fStateTime; // 0x324
	ObjectProperty s_DeployFactory; // 0x328
	int32_t m_TimeCreated; // 0x330
	ComponentProperty m_DestroyedMesh; // 0x334
	float m_fLifeAfterDeathSecs; // 0x33c
	int32_t r_nReplicateDestroyIt; // 0x340
	TScriptInterface<Class> m_AsInteractiveAudio; // 0x344
	float s_fPersistTime; // 0x354
	ComponentProperty LightEnvironment; // 0x358
	float r_fTimeToDeploySecs; // 0x360
	float r_fInitDeployTime; // 0x364
	float m_fCurrentDeployPercentage; // 0x368
	float r_fCurrentDeployTime; // 0x36c
	float m_fDamagedDuringDeploy; // 0x370
	ObjectProperty s_SpawnerDeviceMode; // 0x374
	ObjectProperty r_Owner; // 0x37c
	int32_t r_nOwnerFireMode; // 0x384
	float AlwaysRelevantDistanceSquared; // 0x388
	float s_fMaxRelevancyDistanceSquared; // 0x38c
	float m_fMaxAimAssistStacks; // 0x390
	TArray<ObjectProperty> m_DeployableAnimNodes; // 0x394
	FVector r_vRagdollDir; // 0x3a4
	int32_t m_nShardCost; // 0x3b0
	FCollisionSettingsDeployable m_CollisionSettings; // 0x3b4
	TArray<ObjectProperty> m_PawnsBasedOnMe; // 0x3c4
	ObjectProperty m_SilhouetteManager; // 0x3d4
	int32_t m_nInitHUDOverlayDisplayMask; // 0x3dc
	float m_InitHUDOverlayEnemyViewDist; // 0x3e0
	float m_fHUDOverlayZOffset; // 0x3e4
	FPointer m_pAmSkin; // 0x3e8
	FPointer m_pAmWeaponSkin; // 0x3f0
	ComponentProperty m_TargetComponent; // 0x3f8
	float m_TargetCollisionTraceDistance; // 0x400
	float m_fOverriddenTargetComponentHeight; // 0x404
	ObjectProperty m_LastDamager; // 0x408
	int32_t m_LastDamagerTimeStamp; // 0x410
	ObjectProperty r_DRI; // 0x414
	ObjectProperty c_LocalPC; // 0x41c
	AActor* m_DRIClass; // 0x424
	float m_fDisableSpectatorFxTime; // 0x42c
	float m_fDisableSpectatorFxTimeRemaining; // 0x430
	ObjectProperty m_AkActorUnoccluded; // 0x434
	float m_fHazardDistance; // 0x43c
	float m_fHazardRating; // 0x440
	float m_fInteractMaxDistance; // 0x444
};

struct UUIData_CustomPlayer {
	int32_t m_nTaskForce; // 0x60
	Fdword m_dwPlayerId; // 0x64
};

struct UTgAIBehaviorCondition_TimeSinceLastTookDamage {
	float TimeThreshold; // 0x98
	char bMustBeCombatTarget : 1; // 0x9c
};

struct UParticleModuleColorScaleOverLife {
	FRawDistributionVector ColorScaleOverLife; // 0x68
	FRawDistributionFloat AlphaScaleOverLife; // 0x8c
	char bEmitterTime : 1; // 0xb0
};

struct UParticleModuleRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct UActorFactoryAmbientSoundSimple {
	ObjectProperty SoundNodeWave; // 0x9c
};

struct AGameCrowdDestination {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x28c
	char bKillWhenReached : 1; // 0x294
	char bAllowAsPreviousDestination : 1; // 0x294
	char bAvoidWhenPanicked : 1; // 0x294
	char bSkipBehaviorIfPanicked : 1; // 0x294
	char bFleeDestination : 1; // 0x294
	char bMustReachExactly : 1; // 0x294
	char bHasRestrictions : 1; // 0x294
	char bAllowsSpawning : 1; // 0x294
	char bAllowCloudSpawning : 0; // 0x294
	char bAllowVisibleSpawning : 0; // 0x294
	char bLineSpawner : 0; // 0x294
	char bSpawnAtEdge : 0; // 0x294
	char bSoftPerimeter : 0; // 0x294
	char bIsVisible : 0; // 0x294
	char bWillBeVisible : 0; // 0x294
	char bCanSpawnHereNow : 0; // 0x294
	char bIsBeyondSpawnDistance : 0; // 0x294
	char bAdjacentToVisibleNode : 0; // 0x294
	char bHasNavigationMesh : 0; // 0x294
	TArray<ObjectProperty> NextDestinations; // 0x298
	ObjectProperty QueueHead; // 0x2a8
	int32_t Capacity; // 0x2b0
	float Frequency; // 0x2b4
	int32_t CustomerCount; // 0x2b8
	TArray<AGameCrowdAgent*> SupportedAgentClasses; // 0x2bc
	TArray<ObjectProperty> SupportedArchetypes; // 0x2cc
	TArray<AGameCrowdAgent*> RestrictedAgentClasses; // 0x2dc
	TArray<ObjectProperty> RestrictedArchetypes; // 0x2ec
	float ExactReachTolerance; // 0x2fc
	FName InteractionTag; // 0x300
	float InteractionDelay; // 0x308
	TArray<FBehaviorEntry> ReachedBehaviors; // 0x30c
	ObjectProperty AgentEnRoute; // 0x31c
	float Priority; // 0x324
	float LastSpawnTime; // 0x328
	ObjectProperty MyPopMgr; // 0x32c
};

struct UUserCloudFileCloudSaveSystemDataBlobStore {
	TScriptInterface<Class> UserCloudFile; // 0x60
	DelegateProperty GetDataBlobCallback; // 0x70
	DelegateProperty SetDataBlobCallback; // 0x80
	DelegateProperty DeleteDataBlobCallback; // 0x90
	DelegateProperty __GetDataBlobCallbackDelegate__Delegate; // 0xa0
	DelegateProperty __SetDataBlobCallbackDelegate__Delegate; // 0xb0
	DelegateProperty __DeleteDataBlobCallbackDelegate__Delegate; // 0xc0
};

struct UParticleModuleOrbit {
	EOrbitChainMode ChainMode; // 0x6c
	FRawDistributionVector OffsetAmount; // 0x70
	FOrbitOptions OffsetOptions; // 0x94
	FRawDistributionVector RotationAmount; // 0x98
	FOrbitOptions RotationOptions; // 0xbc
	FRawDistributionVector RotationRateAmount; // 0xc0
	FOrbitOptions RotationRateOptions; // 0xe4
};

struct UUIComponent_StringWithCount {
	ObjectProperty m_mcCountTf; // 0x120
};

struct UMaterialExpressionDepthOfFieldFunction {
	EDepthOfFieldFunctionValue FunctionValue; // 0xb0
	FExpressionInput Depth; // 0xb4
};

struct UParticleModuleLocationStaticVertSurface {
	ELocationStaticVertSurfaceSource SourceType; // 0x68
	FVector UniversalOffset; // 0x6c
	char bUpdatePositionEachFrame : 1; // 0x78
	char bOrientMeshEmitters : 1; // 0x78
	char bEnforceNormalCheck : 1; // 0x78
	FName StaticMeshActorParamName; // 0x7c
	FVector NormalToCompare; // 0x84
	float NormalCheckToleranceDegrees; // 0x90
	float NormalCheckTolerance; // 0x94
	TArray<int32_t> ValidMaterialIndices; // 0x98
};

struct AGamePlayerCamera {
	ObjectProperty ThirdPersonCam; // 0x604
	UGameCameraBase* ThirdPersonCameraClass; // 0x60c
	ObjectProperty FixedCam; // 0x614
	UGameCameraBase* FixedCameraClass; // 0x61c
	ObjectProperty CurrentCamera; // 0x624
	char bUseForcedCamFOV : 1; // 0x62c
	char bInterpolateCamChanges : 1; // 0x62c
	char bResetInterp : 1; // 0x62c
	float ForcedCamFOV; // 0x630
	ObjectProperty LastViewTarget; // 0x634
	float SplitScreenShakeScale; // 0x63c
	ObjectProperty LastTargetBase; // 0x640
	FMatrix LastTargetBaseTM; // 0x650
};

struct UMorphNodeWeight {
	float NodeWeight; // 0x84
};

struct USeqAct_IsInObjectList {
	char bCheckForAllObjects : 1; // 0x108
	char bObjectFound : 1; // 0x108
};

struct UInput {
	TArray<FKeyBind> Bindings; // 0xb0
	TArray<FKeyBind> PressedKeys; // 0xc0
	int32_t CurrentControllerId; // 0xd0
	EInputEvent CurrentEvent; // 0xd4
	float CurrentDelta; // 0xd8
	float CurrentDeltaTime; // 0xdc
	TMap<None, None> NameToPtr; // 0xe0
	TArray<FPointer> AxisArray; // 0x128
	TArray<ObjectProperty> CachedInputEvents; // 0x138
	TArray<ObjectProperty> CachedAnalogInputEvents; // 0x148
	TArray<ObjectProperty> CachedTouchInputEvents; // 0x158
	TArray<FTouchTracker> CurrentTouches; // 0x168
};

struct UCheatManager {
	FString ViewingFrom; // 0x60
	FString OwnCamera; // 0x70
};

struct UOnlineGameInterfaceSteamworks {
	TArray<DelegateProperty> GameInviteAcceptedDelegates; // 0x348
	TArray<DelegateProperty> RegisterPlayerCompleteDelegates; // 0x358
	TArray<DelegateProperty> UnregisterPlayerCompleteDelegates; // 0x368
	DelegateProperty __OnGameInviteAccepted__Delegate; // 0x378
	DelegateProperty __OnRegisterPlayerComplete__Delegate; // 0x388
	DelegateProperty __OnUnregisterPlayerComplete__Delegate; // 0x398
};

struct ANxForceFieldRadial {
	ObjectProperty Shape; // 0x2d4
	ComponentProperty DrawComponent; // 0x2dc
	float ForceStrength; // 0x2e4
	float ForceRadius; // 0x2e8
	float SelfRotationStrength; // 0x2ec
	ERadialImpulseFalloff ForceFalloff; // 0x2f0
	FPointer Kernel; // 0x2f4
};

struct ATgMeshAssembly {
	int32_t m_nMeshAsmId; // 0x280
	int32_t m_nTeam; // 0x284
	ComponentProperty m_Mesh; // 0x288
	ComponentProperty m_LightEnvironment; // 0x290
};

struct UUIComponent_MatchDisplay {
	ObjectProperty m_mcBuildHeader; // 0x120
	ObjectProperty m_mcStatsHeader; // 0x128
	ObjectProperty m_pList; // 0x130
	EUICMatchDisplayTabType m_eDisplayMode; // 0x138
};

struct APComVideoPlayer {
	FString VideoURL; // 0x280
	int32_t Width; // 0x290
	int32_t Height; // 0x294
	float Volume; // 0x298
	char bAutoResize : 1; // 0x29c
	char bConstrainAspectRatio : 1; // 0x29c
	char bDebugRender : 1; // 0x29c
	char bVideoFinished : 1; // 0x29c
	char bOnVideoFinishedIssued : 1; // 0x29c
	char bHasMinorStreamingProblem : 1; // 0x29c
	float ConstrainedAspectRatio; // 0x2a0
	FPointer Resource; // 0x2a4
	ObjectProperty RenderTargetToUse; // 0x2ac
	ObjectProperty TextureCopyForStreamingProblem; // 0x2b4
	float TimeSinceMinorStreamingProblem; // 0x2bc
	ObjectProperty StreamingProblemMaterial; // 0x2c0
	EPComVideoPlayerError CurrentErrorState; // 0x2c8
	EPComVideoPlayerError RenderThreadErrorState; // 0x2c9
	ObjectProperty BlackTexture; // 0x2cc
	DelegateProperty __OnVideoFinished__Delegate; // 0x2d4
	DelegateProperty __OnVideoError__Delegate; // 0x2e4
};

struct UTgSkelCon_HitReaction {
	RecoilHitDir m_CurrentRecoilDir; // 0x168
	HitReactionMoveType m_MoveType; // 0x169
	FRecoilInfo m_RecoilFromFront; // 0x16c
	FRecoilInfo m_RecoilFromBack; // 0x24c
	FRecoilInfo m_RecoilFromLeft; // 0x32c
	FRecoilInfo m_RecoilFromRight; // 0x40c
	TArray<FName> m_SlaveSkelControlNames; // 0x4ec
	TArray<ObjectProperty> m_SlaveSkelControls; // 0x4fc
	char m_bInitialized : 1; // 0x50c
};

struct UUIComponent_Dropdown {
	ObjectProperty m_pGamepadKey; // 0x120
	ObjectProperty m_pList; // 0x128
	ObjectProperty m_pBlocker; // 0x130
	FUICListEntry m_Button; // 0x138
	ObjectProperty m_pToggleListVisible; // 0x160
	ObjectProperty m_pBack; // 0x168
	ObjectProperty m_pAny; // 0x170
};

struct USeqAct_ConcatenateStrings {
	FString StrA; // 0x108
	FString StrB; // 0x118
	char ConcatenateWithSpace : 1; // 0x128
	FString StrResult; // 0x12c
};

struct UParticleModuleSpawn {
	FRawDistributionFloat Rate; // 0x6c
	FRawDistributionFloat RateScale; // 0x90
	EParticleBurstMethod ParticleBurstMethod; // 0xb4
	TArray<FParticleBurst> BurstList; // 0xb8
};

struct UInterpTrackInstColorProp {
	FPointer ColorProp; // 0x70
	FColor ResetColor; // 0x78
};

struct UTgAIBehaviorCondition_VisibilityBase {
	char bRestrictFoV : 1; // 0x98
};

struct UTgSeqAct_TemporaryRemoveDevice {
	int32_t m_nEquipPoint; // 0x108
};

struct USeqEvent_MobileInput {
	float XAxisValue; // 0x138
	float YAxisValue; // 0x13c
	float CenterX; // 0x140
	float CenterY; // 0x144
	float CurrentX; // 0x148
	float CurrentY; // 0x14c
};

struct UTgAnimBlendByWeaponSwapType {
	TArray<FWeaponSwapTypeData> m_WeaponSwaps; // 0x168
};

struct UMaterialExpressionRotator {
	FExpressionInput Coordinate; // 0xb0
	FExpressionInput Time; // 0xe4
	float CenterX; // 0x118
	float CenterY; // 0x11c
	float Speed; // 0x120
};

struct UMcpIdMappingManager {
	TArray<FMcpIdMapping> AccountMappings; // 0xa8
	FString AddMappingUrl; // 0xb8
	FString QueryMappingUrl; // 0xc8
	TArray<FAddMappingRequest> AddMappingRequests; // 0xd8
	TArray<FQueryMappingRequest> QueryMappingRequests; // 0xe8
};

struct ATgActionPoint {
	eActionPointType ActionType; // 0x380
	char nObjectiveNum; // 0x381
	char nTaskForce; // 0x382
	char bUseRotation : 1; // 0x384
};

struct AEmitter {
	ComponentProperty ParticleSystemComponent; // 0x280
	ComponentProperty LightEnvironment; // 0x288
	char bDestroyOnSystemFinish : 1; // 0x290
	char bPostUpdateTickGroup : 1; // 0x290
	char bCurrentlyActive : 1; // 0x290
};

struct USeqAct_Latent {
	TArray<ObjectProperty> LatentActors; // 0x108
	char bAborted : 1; // 0x118
	float LatentActivationTime; // 0x11c
};

struct ATgDeploy_EffectTrail {
	ObjectProperty r_TrailPawn; // 0x448
	int32_t m_TrailEffectID; // 0x450
	ObjectProperty m_TrailEffects; // 0x454
	char m_bHasInitialPoint : 1; // 0x45c
	char r_bInDeployMode : 1; // 0x45c
	float m_fPointDistance; // 0x460
	float m_fPointLifetime; // 0x464
	int32_t m_nNextPointIndex; // 0x468
	int32_t m_nTailPointIndex; // 0x46c
	FVector m_TrailPoints[0x14]; // 0x470
	FVector m_ParticleSystemOffsets[0x14]; // 0x560
	float m_TrailTimes[0x14]; // 0x650
	ObjectProperty m_CollisionProxies[0x14]; // 0x6a0
	ComponentProperty m_Decals[0x14]; // 0x740
};

struct USeqAct_RangeSwitch {
	TArray<FSwitchRange> Ranges; // 0x108
};

struct ATgDevice_HunterRoll {
	char m_bRolledBackward : 1; // 0xb60
};

struct UInterpTrackMoveAxis {
	EInterpMoveAxis MoveAxis; // 0xb8
	FInterpLookupTrack LookupTrack; // 0xbc
};

struct UUIScene_UIRadialMenuLobby {
	char m_bPreviewingChicken : 1; // 0x1e0
	int32_t m_nOnTickCallbackHandle; // 0x1e4
	float m_fTransformationTimer; // 0x1e8
};

struct ATgDeploy_HealthNugget_TeamOnly {
	int32_t r_nTaskForceAlignment; // 0x46c
	float m_fNuggetSpawnTime; // 0x470
	float m_fNuggetGracePeriod; // 0x474
};

struct APortal {
	ObjectProperty Destination; // 0x2bc
	FRotator SourceEdgeRotation; // 0x2c4
	FVector SourceEdgeTranslation; // 0x2d0
	float fEdgeWidth; // 0x2dc
	char bForceParallelEdges : 1; // 0x2e0
};

struct UTgAIBehaviorCondition_WhatIsLastAttackerTargeting {
	ECombatTargetType TargetType; // 0x98
};

struct UInterpTrackInstDirector {
	ObjectProperty OldViewTarget; // 0x60
	FRenderingPerformanceOverrides OldRenderingOverrides; // 0x68
};

struct UUIComponent_Popup {
	ObjectProperty m_pItem; // 0x140
	ObjectProperty m_grScene; // 0x148
	int32_t m_nCallbackOnBackHandle; // 0x150
	char m_bCanHidePopup : 1; // 0x154
	char m_bFadeWithShowHide : 1; // 0x154
};

struct UUIInteractable_NavPanel {
	ObjectProperty m_mcHighlight; // 0x140
	ObjectProperty m_mcTitle; // 0x148
	ObjectProperty m_mcIcon; // 0x150
	ObjectProperty m_mcPrimeQuestCTA; // 0x158
	ObjectProperty m_pCTA; // 0x160
};

struct UTgAnimNodeAimOffset {
	ObjectProperty Owner; // 0x170
	TArray<ObjectProperty> m_CachedNodeList; // 0x178
	char m_bInitializedCachedNodeList : 1; // 0x188
	char m_bDisableVerticalAiming : 1; // 0x188
	char bInterpolating : 1; // 0x188
	char m_bBakeProfileForAllAnimOffsets : 1; // 0x188
	char m_bRandomAimPointsEnabled : 1; // 0x188
	char m_bOverrideAim : 1; // 0x188
	char m_bAimAtTarget : 1; // 0x188
	char m_bDisableWeaponLeading : 1; // 0x188
	EPitchControlType m_PitchControlType; // 0x18c
	FInterpCurveFloat m_PitchControlUserCurve; // 0x190
	float TurnInPlaceOffset; // 0x1a4
	float LastAimX; // 0x1a8
	float InterpSpeed; // 0x1ac
	int32_t m_nBakeProfileIndex; // 0x1b0
	FVector2D m_AimOffsetPct; // 0x1b4
	FVector2D m_RandomAimPointsRangeX; // 0x1bc
	FVector2D m_RandomAimPointsRangeY; // 0x1c4
	float m_fRandomAimPointsInterpRate; // 0x1cc
	float m_fRandomAimPointsIntervalMin; // 0x1d0
	float m_fRandomAimPointsIntervalMax; // 0x1d4
	float m_fCurrentRandomAimPointsInterval; // 0x1d8
	FVector2D m_TargetRandomAimLocation; // 0x1dc
	float m_fDeltaTime; // 0x1e4
	FVector2D m_OverriddenAim; // 0x1e8
	ObjectProperty m_WeaponMeshActor; // 0x1f0
};

struct UParticleModuleAttractorSkelVertSurface {
	EVertSurfaceAttractorFalloffType FalloffType; // 0x68
	EAttractorSkelVertSurfaceDestination DestinationType; // 0x69
	char bParticleLifeRelative : 1; // 0x6c
	char bEnforceNormalCheck : 1; // 0x6c
	FRawDistributionFloat FalloffExponent; // 0x70
	FRawDistributionFloat Range; // 0x94
	FRawDistributionFloat Strength; // 0xb8
	FRawDistributionFloat CollisionRadius; // 0xdc
	FRawDistributionFloat DragCoefficient; // 0x100
	FRawDistributionFloat DragRadius; // 0x124
	FVector UniversalOffset; // 0x148
	FName SkelMeshActorParamName; // 0x154
	TArray<FName> ValidAssociatedBones; // 0x15c
	FVector NormalToCompare; // 0x16c
	float NormalCheckToleranceDegrees; // 0x178
	float NormalCheckTolerance; // 0x17c
	TArray<int32_t> ValidMaterialIndices; // 0x180
};

struct UAnimNotify_Trails {
	ObjectProperty PSTemplate; // 0x68
	char bIsExtremeContent : 1; // 0x70
	char bPreview : 1; // 0x70
	char bPreviewForceExplicit : 1; // 0x70
	char bSkipIfOwnerIsHidden : 1; // 0x70
	char bResampleRequired : 1; // 0x70
	FName FirstEdgeSocketName; // 0x74
	FName ControlPointSocketName; // 0x7c
	FName SecondEdgeSocketName; // 0x84
	float LastStartTime; // 0x8c
	float EndTime; // 0x90
	float SampleTimeStep; // 0x94
	TArray<FTrailSamplePoint> TrailSampleData; // 0x98
	float SamplesPerSecond; // 0xa8
	TArray<FTrailSample> TrailSampledData; // 0xac
	float CurrentTime; // 0xbc
	float TimeStep; // 0xc0
	ObjectProperty AnimNodeSeq; // 0xc4
};

struct AWorldAttractor {
	char bEnabled : 1; // 0x280
	float LoopDuration; // 0x284
	float CurrentTime; // 0x288
	EWorldAttractorFalloffType FalloffType; // 0x28c
	FMatineeRawDistributionFloat FalloffExponent; // 0x290
	FMatineeRawDistributionFloat Range; // 0x2bc
	FMatineeRawDistributionFloat Strength; // 0x2e8
	float CollisionRadius; // 0x314
	FMatineeRawDistributionFloat DragCoefficient; // 0x318
	FMatineeRawDistributionFloat DragRadius; // 0x344
};

struct UMobileMenuBarItem {
	int32_t Width; // 0x60
	int32_t Height; // 0x64
	FVector2D VpPos; // 0x68
};

struct UUIShopCrowns {
	float m_fPurchaseFlash; // 0x244
	ObjectProperty m_mcBack; // 0x248
	ObjectProperty m_mcName; // 0x250
	ObjectProperty m_mcFrame; // 0x258
	ObjectProperty m_mcTotal; // 0x260
	ObjectProperty m_mcBlocker; // 0x268
	ObjectProperty m_mcTotalCrowns; // 0x270
	ObjectProperty m_mcItem[0x5]; // 0x278
	ObjectProperty m_mcItemIcon[0x5]; // 0x2a0
	ObjectProperty m_mcItemName[0x5]; // 0x2c8
	ObjectProperty m_mcItemDesc[0x5]; // 0x2f0
	ObjectProperty m_mcItemCrowns[0x5]; // 0x318
	ObjectProperty m_mcItemButton[0x5]; // 0x340
	ObjectProperty m_mcItemButtonName[0x5]; // 0x368
	ObjectProperty m_mcItemButtonDesc[0x5]; // 0x390
	ObjectProperty m_mcItemButtonType[0x5]; // 0x3b8
	ObjectProperty m_mcItemButtonFlash[0x5]; // 0x3e0
	ObjectProperty m_pCrownBundleInputGroup; // 0x408
	ObjectProperty m_akCrownsTier1; // 0x410
	ObjectProperty m_akCrownsTier2; // 0x418
	ObjectProperty m_akCrownsTier3; // 0x420
	ObjectProperty m_akCrownsTier4; // 0x428
	ObjectProperty m_akCrownsTier5; // 0x430
};

struct UTgEffectDamage_PresenceDoT {
	TArray<float> m_EffectTimeStamps; // 0xc8
	TArray<float> m_EffectDamageValues; // 0xd8
	FPointer m_DamageInstances; // 0xe8
};

struct UTgAIBehaviorCondition_CombatTargetIsInTowerRadius {
	char bMustBeEnemy : 1; // 0x98
};

struct UUIData_SprayRental {
	ObjectProperty pChestData; // 0x60
	int32_t nSprayItemId; // 0x68
	int32_t nSprayVendorId; // 0x6c
	int32_t nChestItemId; // 0x70
	int32_t nLootId; // 0x74
	int32_t nBundleVendorId; // 0x78
	int32_t nBundleCount; // 0x7c
	int32_t nBundleLootIds[0x4]; // 0x80
	int32_t nBundleItemCounts[0x4]; // 0x90
};

struct USeqAct_Destroy {
	char bDestroyBasedActors : 1; // 0x108
	TArray<AActor*> IgnoreBasedClasses; // 0x10c
};

struct UAnimNodeBlendByProperty {
	FName PropertyName; // 0x144
	char bUseOwnersBase : 1; // 0x14c
	char bForceUpdate : 1; // 0x14c
	char bUseSpecificBlendTimes : 1; // 0x14c
	char bSynchronizeNodesInEditor : 1; // 0x14c
	FName CachedPropertyName; // 0x150
	FPointer CachedFloatProperty; // 0x158
	FPointer CachedBoolProperty; // 0x160
	FPointer CachedByteProperty; // 0x168
	ObjectProperty CachedOwner; // 0x170
	float BlendTime; // 0x178
	float FloatPropMin; // 0x17c
	float FloatPropMax; // 0x180
	float BlendToChild1Time; // 0x184
	float BlendToChild2Time; // 0x188
};

struct ATgProj_IceStorm {
	char m_bStopped : 1; // 0x51c
	char m_bCheckLOSForHit : 1; // 0x51c
};

struct ATgHelpAlertVolume {
	int32_t TaskForceNumber; // 0x2bc
	TArray<int32_t> GameTipIdList; // 0x2c0
};

struct UTgSeqAct_UIAlert {
	int32_t nMsgId; // 0x108
	TArray<int32_t> Taskforces; // 0x10c
	TArray<char> Broadcast; // 0x11c
};

struct UInterpTrackInstParticleReplay {
	float LastUpdatePosition; // 0x60
};

struct UUIDataShop {
	TMap<None, None> m_LootTableItems; // 0x60
	TMap<None, None> m_Vendors; // 0xa8
	TMap<None, None> m_RealMoneyItems; // 0xf0
	TMap<None, None> m_Items; // 0x138
	TMap<None, None> m_SKUtoLootId; // 0x180
	TArray<FMarketplaceProductDetails> m_MarketplaceProducts; // 0x1c8
	FMultiMap_Mirror m_RequiredItemReverseLookup; // 0x1d8
	TArray<Fdword> m_dwContinuousRequestVendors; // 0x220
	float m_fContinuousRequestTimer; // 0x230
	TArray<Fdword> m_dwInfoVendors; // 0x234
	TArray<Fdword> m_dwStoreVendors; // 0x244
	TArray<Fdword> m_dwRealMoneyVendors; // 0x254
	char m_bAllStoreVendorsLoaded : 1; // 0x264
	char m_bFinishedStoringRealMoneyItemData : 1; // 0x264
	Fdword m_dwVendorRequestId; // 0x268
	Fdword m_dwContinuousVendorsRequestId; // 0x26c
	Fdword m_dwRealMoneyVendorsRequestId; // 0x270
};

struct UTgAIBehaviorCondition_NumGodsInTowerRadius {
	char bGodsMustBeEnemy : 1; // 0x98
	char bTowerMustBeEnemy : 1; // 0x98
	int32_t GodThreshold; // 0x9c
};

struct UUIHudBot {
	int32_t m_nMana; // 0x244
	int32_t m_nLives; // 0x248
	int32_t m_nHealth; // 0x24c
	int32_t m_nShards; // 0x250
	int32_t m_nNuggets; // 0x254
	int32_t m_nManaMax; // 0x258
	int32_t m_nHealthMax; // 0x25c
	int32_t m_nAmmoClip; // 0x260
	int32_t m_nAmmoType; // 0x264
	int32_t m_nAmmoCarry; // 0x268
	int32_t m_nLootDevice; // 0x26c
	int32_t m_nPickupDeviceId; // 0x270
	char m_bMount : 1; // 0x274
	char m_bPrompt : 1; // 0x274
	char m_bShowAmmo : 1; // 0x274
	char m_bCursorMode : 1; // 0x274
	char m_bShouldShow : 1; // 0x274
	char m_bCosmeticWheel : 1; // 0x274
	char m_bPlayerChickened : 1; // 0x274
	char m_eActive; // 0x278
	char m_eCastType; // 0x279
	char m_ePickupSlot; // 0x27a
	char m_ePromptType; // 0x27b
	char m_eCursorType; // 0x27c
	char m_eStatus[0x5]; // 0x27d
	float m_fCastTime; // 0x284
	float m_fCastTimer; // 0x288
	float m_fActiveTime; // 0x28c
	float m_fArrowTime; // 0x290
	float m_fArrowTimerIn; // 0x294
	float m_fArrowTimerOut; // 0x298
	float m_fArmor; // 0x29c
	float m_fArmorMax; // 0x2a0
	float m_fKeyTimer; // 0x2a4
	float m_fErrorTimer; // 0x2a8
	float m_fLootAnimTimer; // 0x2ac
	FString m_sCombatEntry; // 0x2b0
	int32_t m_nCachedMaxShards; // 0x2c0
	int32_t m_nAmmo[0x2]; // 0x2c4
	int32_t m_nRune[0x6]; // 0x2cc
	int32_t m_nEquip[0x2]; // 0x2e4
	int32_t m_nArmor[0x4]; // 0x2ec
	int32_t m_nSkill[0x5]; // 0x2fc
	int32_t m_nSkillAmmo[0x5]; // 0x310
	float m_fTimers[0x5]; // 0x324
	float m_fActive[0x5]; // 0x338
	float m_fArrowTimerA[0x4]; // 0x34c
	float m_fArrowTimerB[0x4]; // 0x35c
	FHudBuffEffect m_ActiveEffects[0x7]; // 0x36c
	TArray<ObjectProperty> m_SortedEffects; // 0x430
	TArray<FUICOMBATENTRY> m_CombatEntries; // 0x440
	ObjectProperty m_mcLives; // 0x450
	ObjectProperty m_mcShards; // 0x458
	ObjectProperty m_mcNuggets; // 0x460
	ObjectProperty m_mcLivesText; // 0x468
	ObjectProperty m_mcShardsText; // 0x470
	ObjectProperty m_mcNuggetsText; // 0x478
	ObjectProperty m_mcError; // 0x480
	ObjectProperty m_mcCombat; // 0x488
	ObjectProperty m_mcCast; // 0x490
	ObjectProperty m_mcCastMask; // 0x498
	ObjectProperty m_mcCastTime; // 0x4a0
	ObjectProperty m_mcCastShards; // 0x4a8
	ObjectProperty m_mcCastShardsText; // 0x4b0
	ObjectProperty m_mcPrompt; // 0x4b8
	ObjectProperty m_mcPromptKey; // 0x4c0
	ObjectProperty m_mcPromptText; // 0x4c8
	ObjectProperty m_mcHealth; // 0x4d0
	ObjectProperty m_mcHealthBar; // 0x4d8
	ObjectProperty m_mcHealthBarChange; // 0x4e0
	ObjectProperty m_mcHealthBarFlash; // 0x4e8
	ObjectProperty m_mcHealthBarTip; // 0x4f0
	ObjectProperty m_mcHealthTextCurrent; // 0x4f8
	ObjectProperty m_mcHealthTextMax; // 0x500
	ObjectProperty m_mcHealthFrameFlash; // 0x508
	ObjectProperty m_mcMana; // 0x510
	ObjectProperty m_mcManaBar; // 0x518
	ObjectProperty m_mcArmor; // 0x520
	ObjectProperty m_mcArmorBar; // 0x528
	ObjectProperty m_mcArmorBarChange; // 0x530
	ObjectProperty m_mcArmorBarFlash; // 0x538
	ObjectProperty m_mcArmorBarTip; // 0x540
	ObjectProperty m_mcArmorTextCurrent; // 0x548
	ObjectProperty m_mcArmorTextMax; // 0x550
	ObjectProperty m_mcArmorFrameFlash; // 0x558
	ObjectProperty m_mcSpectating; // 0x560
	ObjectProperty m_mcRune[0x6]; // 0x568
	ObjectProperty m_mcRuneIcon[0x6]; // 0x598
	ObjectProperty m_mcArmorPiece[0x4]; // 0x5c8
	ObjectProperty m_mcSlot; // 0x5e8
	ObjectProperty m_mcSlotEquip; // 0x5f0
	ObjectProperty m_mcSlotEquipIcon; // 0x5f8
	ObjectProperty m_mcSlotEquipFrame; // 0x600
	ObjectProperty m_mcSlotSkill; // 0x608
	ObjectProperty m_mcSlotSkillIcon; // 0x610
	ObjectProperty m_mcSlotSkillFrame; // 0x618
	ObjectProperty m_mcSlotArrow[0x4]; // 0x620
	ObjectProperty m_mcEquip[0x2]; // 0x640
	ObjectProperty m_mcEquipAmmo[0x2]; // 0x650
	ObjectProperty m_mcEquipAmmoIcon[0x2]; // 0x660
	ObjectProperty m_mcEquipAmmoInfinity[0x2]; // 0x670
	ObjectProperty m_mcEquipIcon[0x2]; // 0x680
	ObjectProperty m_mcEquipFrame[0x2]; // 0x690
	ObjectProperty m_mcEquipRarity[0x2]; // 0x6a0
	ObjectProperty m_mcEquipElement[0x2]; // 0x6b0
	ObjectProperty m_mcEquipDagger1; // 0x6c0
	ObjectProperty m_mcEquipDagger2; // 0x6c8
	ObjectProperty m_mcSkill[0x5]; // 0x6d0
	ObjectProperty m_mcSkillKey[0x5]; // 0x6f8
	ObjectProperty m_mcSkillIcon[0x5]; // 0x720
	ObjectProperty m_mcSkillTime[0x5]; // 0x748
	ObjectProperty m_mcSkillFrame[0x5]; // 0x770
	ObjectProperty m_mcSkillActive[0x5]; // 0x798
	ObjectProperty m_mcKey[0x5]; // 0x7c0
	ObjectProperty m_mcKeyPulse[0x5]; // 0x7e8
	ObjectProperty m_mcBuffBar; // 0x810
	ObjectProperty m_mcBuff[0x7]; // 0x818
	ObjectProperty m_mcBuffIcon[0x7]; // 0x850
	ObjectProperty m_mcBuffTimer[0x7]; // 0x888
	TMap<None, None> m_EffectGroupIconMap; // 0x8c0
	TMap<None, None> m_EffectGroupNameMap; // 0x908
	ObjectProperty m_AkArmorBreak; // 0x950
};

struct UGamePadLightbarSubsystem {
	LightBarState CurrentLightBarState; // 0x60
	FLinearColor CurrentColor; // 0x64
	FLinearColor OriginalColor; // 0x74
	FLinearColor TargetColor; // 0x84
	float LerpTimeRemaining; // 0x94
	float TotalLerpTime; // 0x98
	FColor DefaultColor; // 0x9c
	TArray<FColorDefinition> ColorDefinitions; // 0xa0
	TArray<FLerpToInstruction> LerpToInstructions; // 0xb0
	TArray<FSetAndLerpInstruction> SetAndLerpInstructions; // 0xc0
	TArray<FPulseInstruction> PulseInstructions; // 0xd0
};

struct UUIData_MultiQueue {
	int32_t nIcon; // 0x60
	FString sName; // 0x64
	FString sDesc; // 0x74
	TArray<ObjectProperty> pQueues; // 0x84
};

struct UTgSeqEvent_ControlPointOwnershipChange {
	int32_t PointIndex; // 0x128
};

struct UMaterialExpressionDestDepth {
	char bNormalize : 1; // 0xb0
};

struct UMaterialExpressionPanner {
	FExpressionInput Coordinate; // 0xb0
	FExpressionInput Time; // 0xe4
	float SpeedX; // 0x118
	float SpeedY; // 0x11c
};

struct UPath_WithinTraversalDist {
	float MaxTraversalDist; // 0x6c
	char bSoft : 1; // 0x70
	float SoftStartPenalty; // 0x74
};

struct USeqAct_SetActiveAnimChild {
	FName NodeName; // 0x108
	int32_t ChildIndex; // 0x110
	float BlendTime; // 0x114
};

struct UTgAnimBlendByAmmo {
	int32_t m_nDefaultChild; // 0x168
	int32_t m_nDeviceType; // 0x16c
	char m_bDelayUpdateUntilReplay : 1; // 0x170
	char m_bCheckAmmoPerTick : 1; // 0x170
	TArray<FAmmoBlendParams> m_ChildAmmoParams; // 0x174
	int32_t m_nPendingChildIndex; // 0x184
	int32_t m_nAmmoUpdateTickTag; // 0x188
};

struct UTgInvListener_OpportunityInChaos {
	float m_fStartFireTime; // 0xc8
};

struct UDistributionFloatUniformRange {
	float MaxHigh; // 0x7c
	float MaxLow; // 0x80
	float MinHigh; // 0x84
	float MinLow; // 0x88
	char bMirrorMaxMin : 1; // 0x8c
};

struct ATgDeploy_Pickup {
	int32_t r_nDeviceId; // 0x448
	int32_t r_nAmmoCount; // 0x44c
	char r_bAmmoOverridden : 1; // 0x450
	char m_bDestroyOnPickup : 1; // 0x450
	char m_bPickedUp : 1; // 0x450
	char m_bCanAutoPickup : 1; // 0x450
	char c_bPendingDisenchant : 1; // 0x450
	char r_bIsDisenchanted : 1; // 0x450
	float m_fAliveTime; // 0x454
	int32_t m_nNumBounces; // 0x458
	FRotator m_rTargetRotation; // 0x45c
	float m_fTargetRotationInterpSpeed; // 0x468
	int32_t r_nLockTime; // 0x46c
	int32_t r_nLockPlayer; // 0x470
	int32_t r_nLockTaskForce; // 0x474
	float s_fLockTime; // 0x478
	FString r_sLockName; // 0x47c
	float m_fAutoPickupSquareDistance; // 0x48c
	FName m_nmPlayerPickupDisplayGroupName; // 0x490
	int32_t c_LootPickupResponseCounter; // 0x498
	ObjectProperty m_PendingTargetPickupPawn; // 0x49c
	float m_fTimeToAutoPickup; // 0x4a4
	float m_fRemainingTimeTillAutoPickup; // 0x4a8
	ObjectProperty r_TargetPickupPawn; // 0x4ac
	float m_fAccelRate; // 0x4b4
	float m_fFlyToPlayerDeltaTime; // 0x4b8
	float m_fFlyToPlayerCutoffTime; // 0x4bc
	ComponentProperty m_Silhouette; // 0x4c0
	int32_t m_nUpgradeFXId; // 0x4c8
	int32_t m_nDisableFXId; // 0x4cc
	ObjectProperty m_UpgradeFX; // 0x4d0
	ObjectProperty m_DisableFX; // 0x4d8
};

struct ULandscapeMaterialInstanceConstant {
	char bIsLayerThumbnail : 1; // 0x344
	int32_t DataWeightmapIndex; // 0x348
	int32_t DataWeightmapSize; // 0x34c
};

struct ABrush {
	ECsgOper CsgOper; // 0x280
	FColor BrushColor; // 0x284
	int32_t PolyFlags; // 0x288
	char bColored : 1; // 0x28c
	char bCuttingBrush : 1; // 0x28c
	char bSolidWhenSelected : 1; // 0x28c
	char bPlaceableFromClassBrowser : 1; // 0x28c
	ObjectProperty Brush; // 0x290
	ComponentProperty BrushComponent; // 0x298
	TArray<FGeomSelection> SavedSelections; // 0x2a0
};

struct UCameraModifier {
	char bDisabled : 1; // 0x60
	char bPendingDisable : 1; // 0x60
	char bExclusive : 1; // 0x60
	char bDebug : 1; // 0x60
	ObjectProperty CameraOwner; // 0x64
	char Priority; // 0x6c
	float AlphaInTime; // 0x70
	float AlphaOutTime; // 0x74
	float Alpha; // 0x78
	float TargetAlpha; // 0x7c
};

struct ATgPostProcessVolume {
	ObjectProperty m_Material; // 0x44c
	ESceneDepthPriorityGroup m_SceneDPG; // 0x454
	ObjectProperty m_MaterialMIC; // 0x458
	float m_FadeInTime; // 0x460
	float m_FadeOutTime; // 0x464
	FName m_FadeScalarParameterName; // 0x468
};

struct UTexture2DDynamic {
	int32_t SizeX; // 0x100
	int32_t SizeY; // 0x104
	EPixelFormat Format; // 0x108
	int32_t NumMips; // 0x10c
	char bIsResolveTarget : 1; // 0x110
};

struct UMorphTarget {
	TArray<int32_t> MorphLODModels; // 0x60
	int32_t MaterialSlotId; // 0x70
	FName ScalarParameterName; // 0x74
};

struct ATgDevice_OwlStealth {
	char c_bAlreadyConsumedStealthJuice : 1; // 0xaec
};

struct AInstancedFoliageActor {
	FMap_Mirror FoliageMeshes; // 0x280
	ObjectProperty SelectedMesh; // 0x2c8
	TArray<ComponentProperty> InstancedStaticMeshComponents; // 0x2d0
	TArray<ObjectProperty> GCExternalReferences; // 0x2e0
	int32_t StreamingSerializationVersion; // 0x2f0
	FString StreamingFilename; // 0x2f4
	FArray_Mirror StreamGroups; // 0x304
};

struct USkelControlHandlebars {
	EAxis WheelRollAxis; // 0x100
	EAxis HandlebarRotateAxis; // 0x101
	FName WheelBoneName; // 0x104
	char bInvertRotation : 1; // 0x10c
	int32_t SteerWheelBoneIndex; // 0x110
};

struct ATgDeploy_ShieldFernando {
	int32_t m_nLargeShieldMeshID; // 0x44c
	ComponentProperty m_SmallMesh; // 0x450
	ComponentProperty m_LargeMesh; // 0x458
	int32_t r_nToweringBarrierHealth; // 0x460
	int32_t r_nAegisBonusHealth; // 0x464
	char m_bHasHeatTransfer : 1; // 0x468
	char m_bHasRattle : 1; // 0x468
};

struct UTgAIBehaviorCondition_HasConsumable {
	EConsumableType ConsumableType; // 0x98
};

struct UTgAIBehaviorCondition_LanepusherHealthPercent {
	float HealthPct; // 0x98
};

struct ADoorMarker {
	ObjectProperty MyDoor; // 0x378
	EDoorType DoorType; // 0x380
	ObjectProperty DoorTrigger; // 0x384
	char bWaitUntilCompletelyOpened : 1; // 0x38c
	char bInitiallyClosed : 1; // 0x38c
	char bBlockedWhenClosed : 1; // 0x38c
	char bDoorOpen : 1; // 0x38c
	char bTempDisabledCollision : 1; // 0x38c
};

struct USimpleSplineAudioComponent {
	char bAttenuateWithLPF : 1; // 0x2e4
	float LPFRadiusMin; // 0x2e8
	float LPFRadiusMax; // 0x2ec
	float dBAttenuationAtMax; // 0x2f0
	float FlattenAttenuationRadius; // 0x2f4
	SoundDistanceModel DistanceAlgorithm; // 0x2f8
	float RadiusMin; // 0x2fc
	float RadiusMax; // 0x300
	TArray<FSplineSoundSlot> SoundSlots; // 0x304
	ObjectProperty NotifyBufferFinishedHook; // 0x314
};

struct UUIData_Goal {
	Fdword m_dwActivityId; // 0x60
	Fdword m_dwGoalGroupId; // 0x64
	Fdword m_dwGoalId; // 0x68
};

struct UApexComponentBase {
	FPointer ComponentBaseResources; // 0x294
	FRenderCommandFence_Mirror ReleaseResourcesFence; // 0x29c
	ObjectProperty Asset; // 0x2a0
	FColor WireframeColor; // 0x2a8
	char bAssetChanged : 1; // 0x2ac
};

struct UTgSkelCon_SkinGate {
	FSkelControlSkinGateChild DefaultChild; // 0xd0
	TArray<FSkelControlSkinGateChild> ChildControls; // 0xe4
};

struct UShadowMap2D {
	ObjectProperty Texture; // 0x60
	FVector2D CoordinateScale; // 0x68
	FVector2D CoordinateBias; // 0x70
	FGuid LightGuid; // 0x78
	char bIsShadowFactorTexture : 1; // 0x88
	ComponentProperty Component; // 0x8c
	int32_t InstanceIndex; // 0x94
};

struct UTgAnimBlendByRealmCharacter {
	ObjectProperty m_WeaponMeshActor; // 0x168
	DeviceSubtype m_SubNodeDeviceSubtype; // 0x170
	FChildAnimParameters m_ChildParams[0x27]; // 0x174
	TArray<char> m_nChildAnimStack; // 0x9fc
	int32_t m_nCustomRetrieveIndex; // 0xa0c
	char m_bBlendToIdleOnInterruptInspect : 1; // 0xa10
};

struct ATgMissionListVolume {
	int32_t m_nMapObjectId; // 0x2bc
	int32_t s_nQueueTableId; // 0x2c0
	int32_t s_nQueueTableMsgId; // 0x2c4
	ObjectProperty m_Teleporter; // 0x2c8
};

struct UModelComponent {
	ObjectProperty Model; // 0x24c
	int32_t ZoneIndex; // 0x254
	int32_t ComponentIndex; // 0x258
	TArray<FPointer> Nodes; // 0x25c
	TArray<FPointer> Elements; // 0x26c
};

struct UUIInteraction {
	FPointer VfTable_FExec; // 0xb0
	FPointer VfTable_FGlobalDataStoreClientManager; // 0xb8
	FPointer VfTable_FCallbackEventDevice; // 0xc0
	ObjectProperty UIManager; // 0xc8
	UUIManager* UIManagerClass; // 0xd0
	UGameUISceneClient* SceneClientClass; // 0xd8
	ObjectProperty SceneClient; // 0xe0
	TArray<FName> SupportedDoubleClickKeys; // 0xe8
	ObjectProperty DataStoreManager; // 0xf8
	char bProcessInput : 1; // 0x100
	float UIJoystickDeadZone; // 0x104
	float UIAxisMultiplier; // 0x108
	float AxisRepeatDelay; // 0x10c
	float MouseButtonRepeatDelay; // 0x110
	float DoubleClickTriggerSeconds; // 0x114
	int32_t DoubleClickPixelTolerance; // 0x118
	FUIKeyRepeatData MouseButtonRepeatInfo; // 0x11c
	TArray<FUIAxisEmulationDefinition> ConfiguredAxisEmulationDefinitions; // 0x12c
	TMap<None, None> AxisEmulationDefinitions; // 0x13c
	FUIAxisEmulationData AxisInputEmulation[0x18]; // 0x184
};

struct USeqAct_ActorFactory {
	char bEnabled : 1; // 0x120
	char bIsSpawning : 1; // 0x120
	char bCheckSpawnCollision : 1; // 0x120
	ObjectProperty Factory; // 0x124
	EPointSelection PointSelection; // 0x12c
	TArray<ObjectProperty> SpawnPoints; // 0x130
	TArray<FVector> SpawnLocations; // 0x140
	TArray<FVector> SpawnOrientations; // 0x150
	int32_t SpawnCount; // 0x160
	float SpawnDelay; // 0x164
	int32_t LastSpawnIdx; // 0x168
	int32_t CurrentSpawnIdx; // 0x16c
	int32_t SpawnedCount; // 0x170
	float RemainingDelay; // 0x174
};

struct USeqAct_SetApexClothingParam {
	char bEnableApexClothingSimulation : 1; // 0x108
};

struct APhysicsVolume {
	FVector ZoneVelocity; // 0x2bc
	char bVelocityAffectsWalking : 1; // 0x2c8
	char bPainCausing : 1; // 0x2c8
	char bAIShouldIgnorePain : 1; // 0x2c8
	char bEntryPain : 1; // 0x2c8
	char BACKUP_bPainCausing : 1; // 0x2c8
	char bDestructive : 1; // 0x2c8
	char bNoInventory : 1; // 0x2c8
	char bMoveProjectiles : 1; // 0x2c8
	char bBounceVelocity : 0; // 0x2c8
	char bNeutralZone : 0; // 0x2c8
	char bCrowdAgentsPlayDeathAnim : 0; // 0x2c8
	char bPhysicsOnContact : 0; // 0x2c8
	char bWaterVolume : 0; // 0x2c8
	char m_bIsElevating : 0; // 0x2c8
	char m_bClampPawnVelocity : 0; // 0x2c8
	float GroundFriction; // 0x2cc
	float TerminalVelocity; // 0x2d0
	float DamagePerSec; // 0x2d4
	UDamageType* DamageType; // 0x2d8
	int32_t Priority; // 0x2e0
	float FluidFriction; // 0x2e4
	float PainInterval; // 0x2e8
	float RigidBodyDamping; // 0x2ec
	float MaxDampingForce; // 0x2f0
	ObjectProperty PainTimer; // 0x2f4
	ObjectProperty DamageInstigator; // 0x2fc
	ObjectProperty NextPhysicsVolume; // 0x304
	FVector2D m_fClampedPawnVelocity; // 0x30c
};

struct UTgDeviceForm_WeaponSwap {
	TArray<ObjectProperty> m_PistolScale1p; // 0x2bc
	TArray<ObjectProperty> m_PistolScale3p; // 0x2cc
	TArray<ObjectProperty> m_RifleScale1p; // 0x2dc
	TArray<ObjectProperty> m_RifleScale3p; // 0x2ec
};

struct UTgSeqAct_PlayCameraAnim {
	ObjectProperty AnimToPlay; // 0x108
	float BlendInTime; // 0x110
	float BlendOutTime; // 0x114
	float Rate; // 0x118
	float IntensityScale; // 0x11c
};

struct UAnimNotify_Kismet {
	FName NotifyName; // 0x68
};

struct UMaterialExpressionTextureSampleParameterNormal {
	FPointer InstanceOverride; // 0x140
};

struct UTgAnimBlendByHeadSkin {
	TArray<FHeadSkinChildInfo> m_SkinMap; // 0x168
};

struct UTgInventoryObject_Listen_OutOfCombat {
	char m_bEffectIsApplied : 1; // 0xc8
};

struct APComRepInfo_Game {
	ObjectProperty m_MusicThemePlayer; // 0x2e8
	UPComMusicThemePlayer* m_MusicThemePlayerClass; // 0x2f0
	FString m_MusicThemePlayerClassName; // 0x2f8
};

struct UUIDataChampion {
	int32_t m_nBotId; // 0x70
	int32_t m_nLevel; // 0x74
	int32_t m_nArchetype; // 0x78
	FString m_sName; // 0x7c
	FString m_sDesc; // 0x8c
	FString m_sLore; // 0x9c
	FString m_sDamage; // 0xac
	FString m_sSpecial; // 0xbc
	int32_t m_nItemsTotal; // 0xcc
	int32_t m_nItemsOwned; // 0xd0
	float m_fItemsPercent; // 0xd4
	int32_t m_nXPProgress; // 0xd8
	int32_t m_nXPRequired; // 0xdc
	float m_fXPPercent; // 0xe0
	int32_t m_nActiveSet; // 0xe4
	int32_t m_nActiveTalent; // 0xe8
	int32_t m_nActiveDeck; // 0xec
	int32_t m_nActiveSkin; // 0xf0
	int32_t m_nActiveHead; // 0xf4
	int32_t m_nActiveEmote; // 0xf8
	int32_t m_nActiveVoice; // 0xfc
	int32_t m_nActiveWeapon; // 0x100
	int32_t m_nActiveSpray; // 0x104
	int32_t m_nActiveMVPPose; // 0x108
	ObjectProperty m_ClassItem; // 0x10c
	ObjectProperty m_CharacterRotationLTI; // 0x114
	TArray<ObjectProperty> m_Sets; // 0x11c
	TArray<ObjectProperty> m_Cards; // 0x12c
	TArray<ObjectProperty> m_Heads; // 0x13c
	TArray<ObjectProperty> m_Skins; // 0x14c
	TArray<ObjectProperty> m_Skills; // 0x15c
	TArray<ObjectProperty> m_Weapons; // 0x16c
	TArray<ObjectProperty> m_Emotes; // 0x17c
	TArray<ObjectProperty> m_Sprays; // 0x18c
	TArray<ObjectProperty> m_MVPPoses; // 0x19c
	TArray<ObjectProperty> m_Voices; // 0x1ac
	TArray<FUIDataDeck> m_Decks; // 0x1bc
};

struct ALensFlareSource {
	ComponentProperty LensFlareComp; // 0x280
	char bCurrentlyActive : 1; // 0x288
};

struct UUIComponent_Skill {
	ObjectProperty m_mcKey; // 0x120
	ObjectProperty m_mcBase; // 0x128
	ObjectProperty m_mcIcon; // 0x130
	ObjectProperty m_mcTitle; // 0x138
	ObjectProperty m_mcDamage; // 0x140
	ObjectProperty m_mcSubtitle; // 0x148
	ObjectProperty m_mcCooldown; // 0x150
	ObjectProperty m_mcCooldownTF; // 0x158
};

struct UUIHudMap {
	int32_t m_nDepth; // 0x244
	char m_bScroll : 1; // 0x248
	char m_bSnapFog : 1; // 0x248
	char m_bInitMap : 1; // 0x248
	char m_bHovering : 1; // 0x248
	char m_bDirection : 1; // 0x248
	char m_bWantsToPlaceWaypoint : 1; // 0x248
	char m_bWantsToRemoveWaypoint : 1; // 0x248
	float m_fSize; // 0x24c
	float m_fRadius; // 0x250
	float m_fCursorX; // 0x254
	float m_fCursorY; // 0x258
	float m_fOffsetX; // 0x25c
	float m_fOffsetY; // 0x260
	float m_fPulseTimer; // 0x264
	float m_fCursorRate; // 0x268
	float m_fChestPulseIn; // 0x26c
	float m_fChestPulseIOut; // 0x270
	float m_fDirectionTimer; // 0x274
	float m_fCursorSafeBound; // 0x278
	float m_fCursorPanBound; // 0x27c
	float m_fGamepadCursorX; // 0x280
	float m_fGamepadCursorY; // 0x284
	float m_fConvergeRadius; // 0x288
	float m_fConvergeTarget; // 0x28c
	float m_fConvergeTargetX; // 0x290
	float m_fConvergeTargetY; // 0x294
	FVector m_vBoundsCenter; // 0x298
	FVector m_vBoundsExtents; // 0x2a4
	ObjectProperty m_pRightStickYAxis; // 0x2b0
	ObjectProperty m_pRightStickXAxis; // 0x2b8
	TArray<FUIPING_DATA> m_Forges; // 0x2c0
	TArray<FUIPING_DATA> m_Chests; // 0x2d0
	TArray<FUIPING_DATA> m_Catapults; // 0x2e0
	TArray<FUIPING_DATA> m_NamedAreas; // 0x2f0
	ObjectProperty m_mcMap; // 0x300
	ObjectProperty m_mcMapFog; // 0x308
	ObjectProperty m_mcMapMask; // 0x310
	ObjectProperty m_mcMapRect; // 0x318
	ObjectProperty m_mcMapMaskRect; // 0x320
	ObjectProperty m_mcMapZoom; // 0x328
	ObjectProperty m_mcMapGroup; // 0x330
	ObjectProperty m_mcMapScroll; // 0x338
	ObjectProperty m_mcMapImage[0x3]; // 0x340
	ObjectProperty m_mcMapRegion[0x5]; // 0x358
	ObjectProperty m_mcMapInner; // 0x380
	ObjectProperty m_mcMapOuter; // 0x388
	ObjectProperty m_mcMapCursor; // 0x390
	ObjectProperty m_mcMapForges; // 0x398
	ObjectProperty m_mcMapZeppelinLine; // 0x3a0
	ObjectProperty m_mcMapZeppelinA; // 0x3a8
	ObjectProperty m_mcMapZeppelinB; // 0x3b0
	ObjectProperty m_mcMapNamedAreas; // 0x3b8
	ObjectProperty m_mcMapScrimmageDirection; // 0x3c0
	ObjectProperty m_mcMapScrimmageDirectionAnim; // 0x3c8
	ObjectProperty m_mcMapScrimmageDirectionLine; // 0x3d0
	ObjectProperty m_mcMapCursorLineX; // 0x3d8
	ObjectProperty m_mcMapCursorLineY; // 0x3e0
	ObjectProperty m_mcMapDirection; // 0x3e8
	ObjectProperty m_mcMapDirectionAnim; // 0x3f0
	ObjectProperty m_mcMapDirectionLine; // 0x3f8
	ObjectProperty m_mcLegend; // 0x400
	ObjectProperty m_mcLocalPulse; // 0x408
	ObjectProperty m_mcLocalPlayer; // 0x410
	ObjectProperty m_mcCoordinates; // 0x418
	ObjectProperty m_mcWaypoint[0x6]; // 0x420
	ObjectProperty m_mcCoordXA[0x8]; // 0x450
	ObjectProperty m_mcCoordXB[0x8]; // 0x490
	ObjectProperty m_mcCoordYA[0x8]; // 0x4d0
	ObjectProperty m_mcCoordYB[0x8]; // 0x510
	ObjectProperty m_mcDailyQuests; // 0x550
	ObjectProperty m_mcQuestEntry[0x3]; // 0x558
	ObjectProperty m_mcQuestMask[0x3]; // 0x570
	ObjectProperty m_mcQuestTip[0x3]; // 0x588
	ObjectProperty m_mcQuestComplete[0x3]; // 0x5a0
	ObjectProperty m_mcQuestFillBar[0x3]; // 0x5b8
	ObjectProperty m_mcQuestEntryBG[0x3]; // 0x5d0
	ObjectProperty m_mcQuestRewardText; // 0x5e8
	ObjectProperty m_mcQuestReward1; // 0x5f0
	ObjectProperty m_mcTeam[0x6]; // 0x5f8
	ObjectProperty m_mcAlliance[0x28]; // 0x628
	ObjectProperty m_mcPlayer[0x6]; // 0x768
	ObjectProperty m_mcPlayerMute[0x6]; // 0x798
	ObjectProperty m_mcPlayerVoice[0x6]; // 0x7c8
};

struct USeqVar_RandomFloat {
	float Min; // 0xa4
	float Max; // 0xa8
};

struct ULightmappedSurfaceCollection {
	ObjectProperty SourceModel; // 0x60
	TArray<int32_t> Surfaces; // 0x68
};

struct UParticleModuleBeamModifier {
	BeamModifierType ModifierType; // 0x68
	FBeamModifierOptions PositionOptions; // 0x6c
	FRawDistributionVector Position; // 0x70
	FBeamModifierOptions TangentOptions; // 0x94
	FRawDistributionVector Tangent; // 0x98
	char bAbsoluteTangent : 1; // 0xbc
	FBeamModifierOptions StrengthOptions; // 0xc0
	FRawDistributionFloat Strength; // 0xc4
};

struct ATgInventoryManager {
	int32_t r_ItemCount; // 0x2ac
	int32_t m_nPreviousDeviceInstanceId; // 0x2b0
	char m_bNeedsInvUpdate : 1; // 0x2b4
	ObjectProperty m_PreviousWeapon; // 0x2b8
	TMap<None, None> m_InventoryMap; // 0x2c0
	TMap<None, None> s_ReplicateMap; // 0x308
	TMap<None, None> s_DeletionMap; // 0x350
	ObjectProperty m_PostAutoFireDevice; // 0x398
	TArray<ObjectProperty> m_pPendingDeletedDevices; // 0x3a0
};

struct UAppNotificationsBase {
	FLaunchNotificationInfo AppLaunchNotification; // 0x80
	DelegateProperty __OnReceivedLocalNotification__Delegate; // 0xac
	DelegateProperty __OnReceivedRemoteNotification__Delegate; // 0xbc
};

struct ALevelStreamingVolume {
	TArray<ObjectProperty> StreamingLevels; // 0x2bc
	char bEditorPreVisOnly : 1; // 0x2cc
	char bDisabled : 1; // 0x2cc
	char bTestDistanceToVolume : 1; // 0x2cc
	EStreamingVolumeUsage StreamingUsage; // 0x2d0
	EStreamingVolumeUsage Usage; // 0x2d1
	float TestVolumeDistance; // 0x2d4
};

struct UImageReflectionComponent {
	ObjectProperty ReflectionTexture; // 0x88
};

struct UTgAIBehaviorCondition_IsActiveReady {
	EActiveType ActiveType; // 0x98
};

struct UAnimNotify_Script {
	FName NotifyName; // 0x68
	FName NotifyTickName; // 0x70
	FName NotifyEndName; // 0x78
};

struct UUIData_StreamSettings {
	char m_bIsStreaming : 1; // 0x60
	FPComOpenBroadcasterSettings m_Settings; // 0x64
};

struct UUIComponent_DailyQuest {
	ObjectProperty m_mcTF; // 0x13c
	ObjectProperty m_mcComplete; // 0x144
};

struct UMaterialExpressionMultiply {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UUIDataProvider_PlayerAchievements {
	TArray<FAchievementDetails> Achievements; // 0x74
};

struct USeqAct_ControlGameMovie {
	FString MovieName; // 0x120
	int32_t StartOfRenderingMovieFrame; // 0x130
	int32_t EndOfRenderingMovieFrame; // 0x134
};

struct UGameCrowd_ListOfAgents {
	TArray<FAgentArchetypeInfo> ListOfAgents; // 0x60
};

struct UUIPatchNotes {
	ObjectProperty m_mcHeader; // 0x244
	ObjectProperty m_mcHeaderTitle; // 0x24c
	ObjectProperty m_mcPatchNotes; // 0x254
	ObjectProperty m_mcPatchNotesVersion; // 0x25c
	ObjectProperty m_mcPatchNotesButton; // 0x264
	ObjectProperty m_mcPatchNotesButtonTF; // 0x26c
	ObjectProperty m_mcPatchNotesButtonKey; // 0x274
	ObjectProperty m_mcPatchNotesButtonHighlight; // 0x27c
	ObjectProperty m_mcBanner; // 0x284
	ObjectProperty m_mcBannerColumn[0x3]; // 0x28c
	ObjectProperty m_mcBannerColumnTitle[0x3]; // 0x2a4
	ObjectProperty m_mcBannerColumnDesc[0x3]; // 0x2bc
	ObjectProperty m_mcIcon; // 0x2d4
	ObjectProperty m_mcIconTexture; // 0x2dc
	ObjectProperty m_mcBlocker; // 0x2e4
	ObjectProperty m_pOpenPatchNotesGroup; // 0x2ec
	char m_bShow : 1; // 0x2f4
	FString m_sExternalURL; // 0x2f8
};

struct ATgDevice_Charge {
	EChargeState m_eChargeState; // 0xaf8
	ChargeStopOnHitType m_bStopOnHitType; // 0xaf9
	ChargeFiringType m_ChargeTimingType; // 0xafa
	char m_bUsePhysFlying : 1; // 0xafc
	char m_bUseDamageRadiusForHitProxy : 1; // 0xafc
	char m_bIgnoreHumanoids : 1; // 0xafc
	char m_bHitOnce : 1; // 0xafc
	char m_bApplyHitOnTouch : 1; // 0xafc
	char m_bApplyHitSpecialOnTouch : 1; // 0xafc
	char m_bIgnoreRange : 1; // 0xafc
	char m_bCharging : 1; // 0xafc
	char m_bStopOnAttachedForcefield : 0; // 0xafc
	char m_bInterruptDeviceIfChargeEnds : 0; // 0xafc
	char m_bUseDirectHitSpecial : 0; // 0xafc
	char m_bChargeBackward : 0; // 0xafc
	char m_bCanLeftClickCancel : 0; // 0xafc
	char m_bIgnoreMovementCorrection : 0; // 0xafc
	ObjectProperty m_HitProxy; // 0xb00
	FVector m_vHitProxyRelativeLocation; // 0xb08
	FVector m_vHitProxySizeOffset; // 0xb14
	float s_fServerValidationSizeMultiplier; // 0xb20
	FRotator m_rLastChargeDirection; // 0xb24
	TArray<ObjectProperty> s_AppliedList; // 0xb30
	TArray<ObjectProperty> s_HitActors; // 0xb40
	TArray<FChargeTouchData> s_TouchData; // 0xb50
};

struct APawn {
	FPointer VfTable_IInterface_Speaker; // 0x280
	float MaxStepHeight; // 0x288
	float MaxJumpHeight; // 0x28c
	float WalkableFloorZ; // 0x290
	float LedgeCheckThreshold; // 0x294
	FVector PartialLedgeMoveDir; // 0x298
	ObjectProperty Controller; // 0x2a4
	ObjectProperty NextPawn; // 0x2ac
	float NetRelevancyTime; // 0x2b4
	ObjectProperty LastRealViewer; // 0x2b8
	ObjectProperty LastViewer; // 0x2c0
	char bScriptTickSpecial : 1; // 0x2c8
	char bUpAndOut : 1; // 0x2c8
	char bIsWalking : 1; // 0x2c8
	char bWantsToCrouch : 1; // 0x2c8
	char bIsCrouched : 1; // 0x2c8
	char bTryToUncrouch : 1; // 0x2c8
	char bCanCrouch : 1; // 0x2c8
	char bCrawler : 1; // 0x2c8
	char bReducedSpeed : 0; // 0x2c8
	char bJumpCapable : 0; // 0x2c8
	char bCanJump : 0; // 0x2c8
	char bCanWalk : 0; // 0x2c8
	char bCanSwim : 0; // 0x2c8
	char bCanFly : 0; // 0x2c8
	char bCanClimbLadders : 0; // 0x2c8
	char bCanStrafe : 0; // 0x2c8
	char bAvoidLedges : 0; // 0x2c8
	char bStopAtLedges : 0; // 0x2c8
	char bAllowLedgeOverhang : 0; // 0x2c8
	char bPartiallyOverLedge : 0; // 0x2c8
	char bSimulateGravity : 0; // 0x2c8
	char bIgnoreForces : 0; // 0x2c8
	char bCanWalkOffLedges : 0; // 0x2c8
	char bCanBeBaseForPawns : 0; // 0x2c8
	char bSimGravityDisabled : 0; // 0x2c8
	char bDirectHitWall : 0; // 0x2c8
	char bPushesRigidBodies : 0; // 0x2c8
	char bForceFloorCheck : 0; // 0x2c8
	char bForceKeepAnchor : 0; // 0x2c8
	char bCanMantle : 0; // 0x2c8
	char bCanClimbUp : 0; // 0x2c8
	char bCanClimbCeilings : 0; // 0x2c8
	char bCanSwatTurn : 1; // 0x2cc
	char bCanLeap : 1; // 0x2cc
	char bCanCoverSlip : 1; // 0x2cc
	char bDisplayPathErrors : 1; // 0x2cc
	char bCanPickupInventory : 1; // 0x2cc
	char bAmbientCreature : 1; // 0x2cc
	char bLOSHearing : 1; // 0x2cc
	char bMuffledHearing : 1; // 0x2cc
	char bDontPossess : 0; // 0x2cc
	char bRollToDesired : 0; // 0x2cc
	char bStationary : 0; // 0x2cc
	char bCachedRelevant : 0; // 0x2cc
	char bNoWeaponFiring : 0; // 0x2cc
	char bModifyReachSpecCost : 0; // 0x2cc
	char bModifyNavPointDest : 0; // 0x2cc
	char bPathfindsAsVehicle : 0; // 0x2cc
	char bPrevBypassSimulatedClientPhysics : 0; // 0x2cc
	char bRunPhysicsWithNoController : 0; // 0x2cc
	char bForceMaxAccel : 0; // 0x2cc
	char bLimitFallAccel : 0; // 0x2cc
	char bReplicateHealthToAll : 0; // 0x2cc
	char bForceRMVelocity : 0; // 0x2cc
	char bForceRegularVelocity : 0; // 0x2cc
	char bPlayedDeath : 0; // 0x2cc
	char bDesiredRotationSet : 0; // 0x2cc
	char bLockDesiredRotation : 0; // 0x2cc
	char bUnlockWhenReached : 0; // 0x2cc
	char m_bPhysVolumesOnlyAffectDownwardVelocities : 0; // 0x2cc
	char m_bIsOnNonBaseableSurface : 0; // 0x2cc
	char bNeedsBaseTickedFirst : 0; // 0x2cc
	char bUsedByMatinee : 0; // 0x2cc
	char bRootMotionFromInterpCurve : 0; // 0x2cc
	char bDebugShowCameraLocation : 1; // 0x2d0
	char bFastAttachedMove : 1; // 0x2d0
	EPhysics WalkingPhysics; // 0x2d4
	EPathSearchType PathSearchType; // 0x2d5
	char RemoteViewPitch; // 0x2d6
	char FlashCount; // 0x2d7
	char FiringMode; // 0x2d8
	EPhysics c_LastReceivedPhysics; // 0x2d9
	int32_t WalkingPhysicsMoveFlags; // 0x2dc
	float UncrouchTime; // 0x2e0
	float CrouchHeight; // 0x2e4
	float CrouchRadius; // 0x2e8
	int32_t FullHeight; // 0x2ec
	float NonPreferredVehiclePathMultiplier; // 0x2f0
	ObjectProperty PathConstraintList; // 0x2f4
	ObjectProperty PathGoalList; // 0x2fc
	float DesiredSpeed; // 0x304
	float MaxDesiredSpeed; // 0x308
	float HearingThreshold; // 0x30c
	float Alertness; // 0x310
	float SightRadius; // 0x314
	float PeripheralVision; // 0x318
	float AvgPhysicsTime; // 0x31c
	float Mass; // 0x320
	float Buoyancy; // 0x324
	float MeleeRange; // 0x328
	ObjectProperty Anchor; // 0x32c
	int32_t AnchorItem; // 0x334
	ObjectProperty LastAnchor; // 0x338
	float FindAnchorFailedTime; // 0x340
	float LastValidAnchorTime; // 0x344
	float DestinationOffset; // 0x348
	float NextPathRadius; // 0x34c
	FVector SerpentineDir; // 0x350
	float SerpentineDist; // 0x35c
	float SerpentineTime; // 0x360
	float SpawnTime; // 0x364
	int32_t MaxPitchLimit; // 0x368
	float GroundSpeed; // 0x36c
	float WaterSpeed; // 0x370
	float AirSpeed; // 0x374
	float LadderSpeed; // 0x378
	float AccelRate; // 0x37c
	float JumpZ; // 0x380
	float OutofWaterZ; // 0x384
	float MaxOutOfWaterStepHeight; // 0x388
	float AirControl; // 0x38c
	float WalkingPct; // 0x390
	float MovementSpeedModifier; // 0x394
	float CrouchedPct; // 0x398
	float MaxFallSpeed; // 0x39c
	float AIMaxFallSpeedFactor; // 0x3a0
	float BaseEyeHeight; // 0x3a4
	float EyeHeight; // 0x3a8
	FVector Floor; // 0x3ac
	float SplashTime; // 0x3b8
	ObjectProperty HeadVolume; // 0x3bc
	int32_t Health; // 0x3c4
	int32_t HealthMax; // 0x3c8
	float BreathTime; // 0x3cc
	float UnderWaterTime; // 0x3d0
	float LastPainTime; // 0x3d4
	float KismetDeathDelayTime; // 0x3d8
	FVector RMVelocity; // 0x3dc
	FVector noise1spot; // 0x3e8
	float noise1time; // 0x3f4
	ObjectProperty noise1other; // 0x3f8
	float noise1loudness; // 0x400
	FVector noise2spot; // 0x404
	float noise2time; // 0x410
	ObjectProperty noise2other; // 0x414
	float noise2loudness; // 0x41c
	float SoundDampening; // 0x420
	float DamageScaling; // 0x424
	FString MenuName; // 0x428
	AAIController* ControllerClass; // 0x438
	ObjectProperty PlayerReplicationInfo; // 0x440
	ObjectProperty OnLadder; // 0x448
	FName LandMovementState; // 0x450
	FName WaterMovementState; // 0x458
	ObjectProperty LastStartSpot; // 0x460
	float LastStartTime; // 0x468
	FVector TakeHitLocation; // 0x46c
	UDamageType* HitDamageType; // 0x478
	FVector TearOffMomentum; // 0x480
	ComponentProperty Mesh; // 0x48c
	ComponentProperty CylinderComponent; // 0x494
	float RBPushRadius; // 0x49c
	float RBPushStrength; // 0x4a0
	ObjectProperty DrivenVehicle; // 0x4a4
	float AlwaysRelevantDistanceSquared; // 0x4ac
	float VehicleCheckRadius; // 0x4b0
	ObjectProperty LastHitBy; // 0x4b4
	float ViewPitchMin; // 0x4bc
	float ViewPitchMax; // 0x4c0
	int32_t AllowedYawError; // 0x4c4
	FRotator DesiredRotation; // 0x4c8
	AInventoryManager* InventoryManagerClass; // 0x4d4
	ObjectProperty InvManager; // 0x4dc
	ObjectProperty Weapon; // 0x4e4
	FVector FlashLocation; // 0x4ec
	FVector LastFiringFlashLocation; // 0x4f8
	int32_t ShotCount; // 0x504
	ComponentProperty PreRagdollCollisionComponent; // 0x508
	ObjectProperty PhysicsPushBody; // 0x510
	int32_t FailedLandingCount; // 0x518
	TArray<ObjectProperty> SlotNodes; // 0x51c
	TArray<ObjectProperty> InterpGroupList; // 0x52c
	ComponentProperty FacialAudioComp; // 0x53c
	ObjectProperty MIC_PawnMat; // 0x544
	ObjectProperty MIC_PawnHair; // 0x54c
	TArray<FScalarParameterInterpStruct> ScalarParameterInterpArray; // 0x554
	FRootMotionCurve RootMotionInterpCurve; // 0x564
	float RootMotionInterpRate; // 0x584
	float RootMotionInterpCurrentTime; // 0x588
	FVector RootMotionInterpCurveLastValue; // 0x58c
	float m_TerrainWalkableFloorZ; // 0x598
	FVector c_vLastReceivedVelocity; // 0x59c
};

struct ATgRepInfo_Portal {
	ObjectProperty r_TwinDRI; // 0x2e0
	char c_bMasterEntity : 1; // 0x2e8
};

struct UInterpTrackSkelControlStrength {
	FName SkelControlName; // 0xb8
};

struct UTextureCube {
	int32_t SizeX; // 0x100
	int32_t SizeY; // 0x104
	EPixelFormat Format; // 0x108
	int32_t NumMips; // 0x10c
	char bIsCubemapValid : 1; // 0x110
	ObjectProperty FacePosX; // 0x114
	ObjectProperty FaceNegX; // 0x11c
	ObjectProperty FacePosY; // 0x124
	ObjectProperty FaceNegY; // 0x12c
	ObjectProperty FacePosZ; // 0x134
	ObjectProperty FaceNegZ; // 0x13c
};

struct UAutoNavMeshPathObstacleUnregister {
	TScriptInterface<Class> PathObstacleRef; // 0x60
};

struct UTgMenuContentData {
	TArray<FMeshData> m_MeshData; // 0x60
	ObjectProperty m_LoginMusic; // 0x70
	ObjectProperty m_GodSelectionMusic; // 0x78
	ObjectProperty m_BattleReadyMusic; // 0x80
};

struct UTgSeqAct_PushMatinee {
	float m_fCheckpoint1Time; // 0x21c
	float m_fCheckpoint2Time; // 0x220
	int32_t m_nDefenderTaskForce; // 0x224
};

struct ATgSkeletalMeshActor {
	FMeshAssets c_MeshAssets; // 0x2e8
	char c_bLoadMeshAssetts : 1; // 0x328
};

struct UTgInventoryObject_Listen_AffectedByDeviceTarget {
	char m_bIsCardActive : 1; // 0xc8
	TArray<ObjectProperty> m_HitActors; // 0xcc
};

struct ATgRepInfo_Game_TeamDeathMatch {
	int32_t c_nLeadingTeam; // 0x744
	int32_t c_nLeadingTeamScoreAmount; // 0x748
};

struct ATgDevice_OwlInhand {
	ObjectProperty m_CachedSwapDevice; // 0xaec
	ObjectProperty m_CachedScopeDevice; // 0xaf4
	char bUsePerfectAccuracy : 1; // 0xafc
};

struct UParticleModuleCollisionActor {
	TArray<FName> ActorsToCollideWith; // 0x140
	char bCheckPawnCollisions : 1; // 0x150
};

struct UUIComponent_Tooltip {
	UIALIGNINGTYPE m_eAlignHorz; // 0x120
	UIALIGNINGTYPE m_eAlignVert; // 0x121
	ObjectProperty m_pDisplay; // 0x124
	float m_fAnimInOutTime; // 0x12c
	float m_fAnimInDelay; // 0x130
};

struct USeqEvent_ProjectileLanded {
	float MaxDistance; // 0x128
};

struct UPointLightComponent {
	float ShadowRadiusMultiplier; // 0x1a4
	float Radius; // 0x1a8
	float FalloffExponent; // 0x1ac
	float ShadowFalloffExponent; // 0x1b0
	float MinShadowFalloffRadius; // 0x1b4
	FMatrix CachedParentToWorld; // 0x1c0
	FVector Translation; // 0x200
	FPlane ShadowPlane; // 0x210
	ComponentProperty PreviewLightRadius; // 0x220
	FLightmassPointLightSettings LightmassSettings; // 0x228
	ComponentProperty PreviewLightSourceRadius; // 0x238
};

struct UParticleModuleSubUV {
	FRawDistributionFloat SubImageIndex; // 0x68
	char bUseRealTime : 1; // 0x8c
};

struct UTgAIBehaviorCondition_DistanceFromFogCenter {
	float Percent; // 0x98
};

struct USceneCaptureCubeMapComponent {
	ObjectProperty TextureTarget; // 0xd0
	float NearPlane; // 0xd8
	float FarPlane; // 0xdc
	FVector WorldLocation; // 0xe0
};

struct ATgDefensePoint {
	ObjectProperty CurrentUser; // 0x380
	ObjectProperty NextDefensePoint; // 0x388
	char bFirstScript : 1; // 0x390
	char bSniping : 1; // 0x390
	char bDontChangePosition : 1; // 0x390
	char bAvoid : 1; // 0x390
	char bDisabled : 1; // 0x390
	char bNotInVehicle : 1; // 0x390
	char Priority; // 0x394
	AWeapon* WeaponPreference; // 0x398
	float NumChecked; // 0x3a0
};

struct UParticleModuleLocationPrimitiveBase {
	char Positive_X : 1; // 0x68
	char Positive_Y : 1; // 0x68
	char Positive_Z : 1; // 0x68
	char Negative_X : 1; // 0x68
	char Negative_Y : 1; // 0x68
	char Negative_Z : 1; // 0x68
	char SurfaceOnly : 1; // 0x68
	char Velocity : 1; // 0x68
	FRawDistributionFloat VelocityScale; // 0x6c
	FRawDistributionVector StartLocation; // 0x90
};

struct UTgInventoryObject_Listen_Combo_Skye {
	float m_fLastStealthTime; // 0xd0
	char m_bComboActive : 1; // 0xd4
	char m_bCanTriggerCombo : 1; // 0xd4
	int32_t m_nHitStacks; // 0xd8
};

struct ATgSkeletalMeshActor_LobbyBase {
	char m_bPlayTransitionOutro : 1; // 0x4d4
	FString m_TransitionActorClassName; // 0x4d8
	int32_t m_nCharacterMastery; // 0x4e8
	ObjectProperty m_TransitionActor; // 0x4ec
};

struct ATgDevice_SideArm {
	float m_fQueueFireTime; // 0xaec
	float m_fQueueFireTimeThreshold; // 0xaf0
};

struct UGameStateObject {
	FArray_Mirror TeamStates; // 0x88
	FArray_Mirror PlayerStates; // 0x98
	GameSessionType SessionType; // 0xa8
	char bIsMatchStarted : 1; // 0xac
	char bIsRoundStarted : 1; // 0xac
	int32_t RoundNumber; // 0xb0
	int32_t MaxRoundNumber; // 0xb4
};

struct UInterpTrackInstVectorProp {
	FPointer VectorProp; // 0x70
	FVector ResetVector; // 0x78
};

struct ATgAIController_BehaviorGod {
	FPointer VfTable_ITgPaladinsController; // 0x90c
	float WaitForSpawnSecs; // 0x914
	int32_t PlayerID; // 0x918
	char bCanPurchaseItems : 1; // 0x91c
	char bCanPurchaseSkills : 1; // 0x91c
	char bRespawnAtOriginalLocation : 1; // 0x91c
	float CurrentGoldRemainder; // 0x920
	int32_t CurrentGold; // 0x924
	float CurrentXPRemainder; // 0x928
	int32_t CurrentXP; // 0x92c
	FVector GeometricMean; // 0x930
};

struct UTgCallbackContainer {
	FMultiMap_Mirror m_RegisteredCallbacks; // 0x60
	FMap_Mirror m_RegisteredCallbacksByHandle; // 0xa8
	FMap_Mirror m_CallbackHandles; // 0xf0
};

struct UTgIconDetails {
	ObjectProperty m_OwningGroup; // 0x60
	ObjectProperty m_mcIconObject; // 0x68
	ObjectProperty m_mcTexture; // 0x70
	ObjectProperty m_mcLoadingSpinner; // 0x78
	FString m_sTextureString; // 0x80
	FString m_sTag; // 0x90
	char m_bIsTextureSet : 1; // 0xa0
};

struct UTgAIBehaviorComposite_Random {
	TArray<float> ChildWeights; // 0xb8
	float ChildFreezeTime; // 0xc8
	char bRandomizeOnComplete : 1; // 0xcc
};

struct UParticleModuleLifetime_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct USeqAct_AIMoveToActor {
	char bInterruptable : 1; // 0x120
	char bPickClosest : 1; // 0x120
	TArray<ObjectProperty> Destination; // 0x124
	float MovementSpeedModifier; // 0x134
	ObjectProperty LookAt; // 0x138
	int32_t LastDestinationChoice; // 0x140
};

struct UTgGameplayCurvesSet_PositionFromPitch {
	FRawDistributionFloat ForwardTranslation; // 0x64
	FRawDistributionFloat UpTranslation; // 0x88
};

struct UTgAIBehaviorSensor_NearbyChests {
	float MaxRadius; // 0x94
};

struct UGameThirdPersonCameraMode_Default {
	float WorstLocAimingZOffset; // 0x258
	char bTemporaryOriginRotInterp : 1; // 0x25c
	float TemporaryOriginRotInterpSpeed; // 0x260
};

struct UNavMeshPath_Toward {
	char bBiasAgainstHighLevelPath : 1; // 0x78
	float OutOfHighLevelPathBias; // 0x7c
	ObjectProperty GoalActor; // 0x80
	FVector GoalPoint; // 0x88
};

struct UAnimNodeSequenceBlendByAim {
	FVector2D Aim; // 0x1bc
	FVector2D PreviousAim; // 0x1c4
	FVector2D HorizontalRange; // 0x1cc
	FVector2D VerticalRange; // 0x1d4
	FVector2D AngleOffset; // 0x1dc
	FName AnimName_LU; // 0x1e4
	FName AnimName_LC; // 0x1ec
	FName AnimName_LD; // 0x1f4
	FName AnimName_CU; // 0x1fc
	FName AnimName_CC; // 0x204
	FName AnimName_CD; // 0x20c
	FName AnimName_RU; // 0x214
	FName AnimName_RC; // 0x21c
	FName AnimName_RD; // 0x224
};

struct UUIComponent_HeaderTabs {
	ObjectProperty m_pBumpers[0x2]; // 0x1d8
	ObjectProperty m_NavLeft; // 0x1e8
	ObjectProperty m_NavRight; // 0x1f0
	float m_fButtonSpace; // 0x1f8
	float m_fBumperSpaceLeft; // 0x1fc
	float m_fBumperSpaceRight; // 0x200
};

struct UTgInventoryObject_Listen_LastStand {
	char m_bHealthInActiveRange : 1; // 0xd8
};

struct UTgInventoryObject_Listen_FirstShotDuringOrAfterMovementAbility {
	char m_bMovementAbilityActive : 1; // 0xd8
};

struct UTgAIBehaviorAction_MoveToLaneVolume {
	char bMustBeSameLane : 1; // 0x9c
};

struct ATgDevice_PoisonPistol {
	float m_fQueueFireTime; // 0xaec
	float m_fQueueFireTimeThreshold; // 0xaf0
};

struct UTgClientSettings {
	char m_bMute : 1; // 0x60
	char MuteOnLoseFocus : 1; // 0x60
	char EnableGyroInput : 1; // 0x60
	float fGamma; // 0x64
	float SFXVolume; // 0x68
	float MusicVolume; // 0x6c
	float VoiceVolume; // 0x70
	float MasterVolume; // 0x74
	int32_t MaxSlotsPlayerSkins; // 0x78
	int32_t MaxSlotsChickenSkins; // 0x7c
	int32_t MaxSlotsMountSkins; // 0x80
	int32_t MaxSlotsContrails; // 0x84
	EAspectRatio DesiredAspectRatio; // 0x88
	EControlIconStyle ControlIconStyle; // 0x89
	TArray<FLOCALPROPERTY> LocalProperties; // 0x8c
};

struct UTgAIUtilityFilter_Payload {
	float DistanceCutoff; // 0xc0
};

struct ATgDevice_Aura {
	float r_fRadiusScale; // 0xaec
	TArray<ObjectProperty> m_TouchingActors; // 0xaf0
	TArray<ObjectProperty> m_AffectedActors; // 0xb00
	char m_bIsAuraActive : 1; // 0xb10
	float m_fLastBlockedByBlockersTime; // 0xb14
	float m_fMinBlockedByBlockersTime; // 0xb18
	TArray<ObjectProperty> m_BlockedActors; // 0xb1c
	ObjectProperty m_CollisionProxy; // 0xb2c
};

struct UMaterialExpressionConstantClamp {
	FExpressionInput Input; // 0xb0
	float Min; // 0xe4
	float Max; // 0xe8
};

struct UMobileMenuBar {
	char bIsVertical : 1; // 0xdc
	char bDirty : 1; // 0xdc
	int32_t SelectedIndex; // 0xe0
	int32_t FirstItem; // 0xe4
	TArray<ObjectProperty> Items; // 0xe8
};

struct ATgDevice_DeployMod {
	FPointer VfTable_ITgDeviceInterface_DeployMod; // 0xaec
};

struct UOnlineSubsystemCommonImpl {
	FPointer VoiceEngine; // 0x264
	int32_t MaxLocalTalkers; // 0x26c
	int32_t MaxRemoteTalkers; // 0x270
	char bIsUsingSpeechRecognition : 1; // 0x274
	ObjectProperty GameInterfaceImpl; // 0x278
	ObjectProperty AuthInterfaceImpl; // 0x280
};

struct UTgAIBehaviorAction_SelectLaneCombatTarget_Jungle {
	char bMustBeWeakest : 1; // 0x94
	EJungleTargetType TargetType; // 0x98
};

struct UApexClothingAsset {
	TArray<FClothingLodInfo> LodMaterialInfo; // 0x80
	FPointer MApexAsset; // 0x90
	TArray<ObjectProperty> Materials; // 0x98
	ObjectProperty ApexClothingLibrary; // 0xa8
	char bUseHardwareCloth : 1; // 0xb0
	char bFallbackSkinning : 1; // 0xb0
	char bSlowStart : 1; // 0xb0
	char bRecomputeNormals : 1; // 0xb0
	char bAllowAdaptiveTargetFrequency : 1; // 0xb0
	char bResetAfterTeleport : 1; // 0xb0
	char bUseLocalSpaceSimulation : 1; // 0xb0
	char bHasUniqueAssetMaterialNames : 1; // 0xb0
	char IgnoreInitialTrigger : 0; // 0xb0
	int32_t UVChannelForTangentUpdate; // 0xb4
	float MaxDistanceBlendTime; // 0xb8
	float ContinuousRotationThreshold; // 0xbc
	float ContinuousDistanceThreshold; // 0xc0
	float LodWeightsMaxDistance; // 0xc4
	float LodWeightsDistanceWeight; // 0xc8
	float LodWeightsBias; // 0xcc
	float LodWeightsBenefitsBias; // 0xd0
	float LODDecayTime; // 0xd4
	ObjectProperty SoundOnMove; // 0xd8
	ObjectProperty SoundOnRest; // 0xe0
	ObjectProperty SoundWhileMoving; // 0xe8
	float SpeedThresholdOnMove; // 0xf0
	float SpeedThresholdOnRest; // 0xf4
};

struct ATgFortressVolume {
	int32_t TaskforceIndex; // 0x2bc
};

struct UTgInventoryObject_Listen_MountShield {
	float m_fNextMountShieldTime; // 0xd8
	float m_fMinMountShieldTime; // 0xdc
};

struct UTgSeqEvent_ChestStartEncounter {
	ObjectProperty m_ChestDeployable; // 0x128
};

struct UTgDeviceFire_MirrorDamageToHealBlock {
	float m_fHealBlockAmount; // 0x270
};

struct ADecalActorBase {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x280
	ComponentProperty Decal; // 0x288
};

struct USeqAct_AkPostTrigger {
	FString Trigger; // 0x108
};

struct UTgAIBehaviorAction_Juke {
	float JukeDist; // 0x94
	float JukeProbability; // 0x98
};

struct ATgDevice_Emitter {
	TArray<ObjectProperty> m_PawnsInRange; // 0xaec
	ObjectProperty m_CollisionProxy; // 0xafc
	char m_bHasProjector : 1; // 0xb04
	char m_bIsOnOwner : 1; // 0xb04
	float m_fProjectorPercent; // 0xb08
	ObjectProperty m_CachedPawnOwner; // 0xb0c
};

struct UGameplayEventsWriterBase {
	ObjectProperty Game; // 0x1c0
};

struct UTgAIBehaviorCondition_CurrentLevel {
	int32_t LevelThreshold; // 0x98
};

struct USoundNodeAmbientNonLoop {
	float DelayMin; // 0xb0
	float DelayMax; // 0xb4
	FRawDistributionFloat DelayTime; // 0xb8
};

struct ANxRadialForceField {
	ComponentProperty RenderComponent; // 0x2d4
	float ForceStrength; // 0x2dc
	float ForceRadius; // 0x2e0
	ERadialImpulseFalloff ForceFalloff; // 0x2e4
	FPointer LinearKernel; // 0x2e8
};

struct UGameAICmd_Hover_MoveToGoal_Mesh {
	ObjectProperty Find; // 0x84
	float Radius; // 0x8c
	char bWasFiring : 1; // 0x90
	char bFinalApproach : 1; // 0x90
	char bFallbackMoveToMesh : 1; // 0x90
	float DesiredHoverHeight; // 0x94
	float CurrentHoverHeight; // 0x98
	float SubGoalReachDist; // 0x9c
	float GoalDistance; // 0xa0
	FVector IntermediatePoint; // 0xa4
	FVector LastMovePoint; // 0xb0
	int32_t NumMovePointFails; // 0xbc
	int32_t MaxMovePointFails; // 0xc0
	FVector FallbackDest; // 0xc4
	ObjectProperty MoveToActor; // 0xd0
	FBasedPosition LastMoveTargetPathLocation; // 0xd8
	FVector InitialFinalDestination; // 0x110
};

struct UTgAIBehaviorCondition_NumDeaths {
	int32_t DeathThreshold; // 0x98
};

struct ATgMenuTransitionActor {
	ComponentProperty m_IntroPSC; // 0x280
	ComponentProperty m_LoopPSC; // 0x288
	ComponentProperty m_OutroPSC; // 0x290
};

struct UUIComponent_ChestPanelBase {
	ObjectProperty m_mcIcon; // 0x120
	ObjectProperty m_mcName; // 0x128
	ObjectProperty m_mcType; // 0x130
	ObjectProperty m_mcDesc; // 0x138
	ObjectProperty m_mcCount; // 0x140
	ObjectProperty m_pCTA; // 0x148
	ObjectProperty m_pOpenChestButton; // 0x150
	ObjectProperty m_grChests; // 0x158
	int32_t m_nOwnedChests; // 0x160
	int32_t m_nOwnedItemCount; // 0x164
	int32_t m_nTotalItemCount; // 0x168
	TArray<ObjectProperty> m_pExclusiveItems; // 0x16c
	FString m_sOpenChestLoadName; // 0x17c
	char m_bLockedForDelay : 1; // 0x18c
	FString m_sSavedButtonText; // 0x190
	FPointer m_pVendorItem; // 0x1a0
};

struct UTgGameplayCurvesSet_AimAssistKeyframes {
	FAimAssistKeyframeDebugVals DebugVals; // 0x64
	char bSaveDebugVals : 1; // 0x168
	TArray<ObjectProperty> HorizMagnetKeyframes; // 0x16c
	TArray<ObjectProperty> VertMagnetKeyframes; // 0x17c
	TArray<ObjectProperty> FrictionKeyframes; // 0x18c
	TArray<ObjectProperty> TrackingByAccuracyKeyframes; // 0x19c
	TArray<ObjectProperty> TrackingByAngleKeyframes; // 0x1ac
};

struct ATgDevice_ThrownProjectile {
	char m_bEndCook : 1; // 0xaec
	char m_bThrownGrenade : 1; // 0xaec
	char s_bFullCook : 1; // 0xaec
	float m_fExplodeTime; // 0xaf0
};

struct ATgDevice_Toggle {
	char m_bIsToggle : 1; // 0xaec
};

struct ATestSplittingVolume {
	FPointer VfTable_IInterface_NavMeshPathObject; // 0x2bc
};

struct UDistributionVectorConstant {
	FVector Constant; // 0x7c
	char bLockAxes : 1; // 0x88
	EDistributionVectorLockFlags LockedAxes; // 0x8c
};

struct ATgDevice_WarpStep {
	char m_bRolledBackward : 1; // 0xaec
};

struct UTgAnimNotify_CameraCut {
	float m_fTweenSpeed; // 0x68
	FVector m_vTweenDir; // 0x6c
	FVector m_vLocationOffset; // 0x78
	FRotator m_rRotationOffset; // 0x84
	FRotator m_rRotationTarget; // 0x90
	float m_fRotationDuration; // 0x9c
	float m_fRotationDelay; // 0xa0
};

struct UTgAIBehaviorCondition_DeltaGodsInCapturePoint {
	int32_t GodThreshold; // 0x98
};

struct ATgEmitter {
	FName BoneName; // 0x294
};

struct UUIScene_UIRadialMenu {
	ObjectProperty m_mcPing; // 0x1e0
	ObjectProperty m_mcPingPrompt; // 0x1e8
	ObjectProperty m_pLeftPrompt; // 0x1f0
	ObjectProperty m_pRightPrompt; // 0x1f8
};

struct ATgDevice_ToggleWithLockout {
	ObjectProperty m_CachedTgP; // 0xaec
};

struct UUIPropertyDataProvider {
	TArray<UProperty*> ComplexPropertyTypes; // 0x70
	DelegateProperty __CanSupportComplexPropertyType__Delegate; // 0x80
};

struct ATgDeploy_Wall {
	FVector m_vSegmentExtent; // 0x470
	FVector m_vOpenSpotExtent; // 0x47c
	float m_fWallOpenSpotTolerance; // 0x488
	float m_fWallTraceDownDistance; // 0x48c
	FWallSpawnInfo m_WallPlacementInfos[0x7]; // 0x490
	ObjectProperty m_pImpasseForm; // 0x500
	ComponentProperty m_CenterMesh; // 0x508
	ComponentProperty m_LeftMeshes[0x3]; // 0x510
	ComponentProperty m_RightMeshes[0x3]; // 0x528
	int32_t m_WallMeshIDCenter; // 0x540
	int32_t m_WallMeshIDEndCap; // 0x544
	char r_bGrowthModeActivationSignal : 1; // 0x548
	char m_bInGrowthMode : 1; // 0x548
	char m_bDidInitialHit : 1; // 0x548
	char r_bEarthenGuardActive : 1; // 0x548
	char r_bHasAlpine : 1; // 0x548
	float m_fGrowStartTime; // 0x54c
	float m_fInitialWallScaleZ; // 0x550
};

struct UPBRuleNodeTransform {
	ComponentProperty Translation; // 0x70
	ComponentProperty Rotation; // 0x78
	ComponentProperty Scale; // 0x80
};

struct ATgTutorialInfo {
	float fButtonHoldTime; // 0x280
	float fVolumeStandTime; // 0x284
	float fBotRespawnTime; // 0x288
	float fBotTargetsKilledWaitTime; // 0x28c
	float fPlayerTeamCaptureMultiplier; // 0x290
	float fRepeatInstructionTime; // 0x294
	float fExtendedRepeatInstructionTime; // 0x298
	float fIntroExtensionTime; // 0x29c
	float fBotDelayTravelToMovementTime; // 0x2a0
	float fBotDelayTravelToUltRangeTime; // 0x2a4
	float fPayloadContestPercent; // 0x2a8
	float fLanePusherGroundSpeed; // 0x2ac
	float fEnergyChargeMultiplier; // 0x2b0
	ObjectProperty ApproachHelperArea; // 0x2b4
	ObjectProperty AutoShootingRangeStandingTargetArea; // 0x2bc
	ObjectProperty UltimateShootingRangeStandingTargetArea; // 0x2c4
	ObjectProperty JumpLowerArea; // 0x2cc
	ObjectProperty JumpUpperArea; // 0x2d4
	ObjectProperty HelperBotFactory; // 0x2dc
	ObjectProperty AutoBotFactory; // 0x2e4
	ObjectProperty MultipleAutoBotFactory; // 0x2ec
	ObjectProperty BattleAbilityBotFactory; // 0x2f4
	ObjectProperty AltAbilityBotFactory; // 0x2fc
	ObjectProperty UltimateChargeBotFactory; // 0x304
	ObjectProperty UltimateAbilityBotFactory; // 0x30c
	ObjectProperty ContestCapturePointBotFactory; // 0x314
	ObjectProperty ContestPayloadBotsFactory; // 0x31c
	ObjectProperty HelperMoveTargetAutoRange; // 0x324
	ObjectProperty HelperMoveTargetMovementAbility; // 0x32c
	ObjectProperty HelperMoveTargetUltRange; // 0x334
	ObjectProperty EndGameFocus; // 0x33c
	ObjectProperty HelperBotController; // 0x344
};

struct UStaticMeshComponentFactory {
	ObjectProperty StaticMesh; // 0x74
};

struct UMaterialExpressionAbs {
	FExpressionInput Input; // 0xb0
};

struct AGameCrowdBehaviorPoint {
	float RadiusOfBehaviorEvent; // 0x28c
	float DurationOfBehaviorEvent; // 0x290
	ECrowdBehaviorEvent EventType; // 0x294
	char bRequireLOS : 1; // 0x298
	ObjectProperty Initiator; // 0x29c
};

struct UTgDeviceForm_Scout {
	ObjectProperty m_SKCBirdScale; // 0x2bc
};

struct USeqAct_AssignController {
	AController* ControllerClass; // 0x108
};

struct UUIDataAcquisition {
	Fdword dwLocalAcquisitionId; // 0x60
	QuestOrigin eQuestOrigin; // 0x64
};

struct UGameplayEventsReader {
	TArray<ObjectProperty> RegisteredHandlers; // 0x1c0
};

struct UAnimNode_MultiBlendPerBone {
	ObjectProperty PawnOwner; // 0x114
	TArray<FPerBoneMaskInfo> MaskList; // 0x11c
	EBlendType RotationBlendType; // 0x12c
};

struct UTgAnimBlendByFallTransition {
	float m_fPreDownVelocity; // 0x19c
};

struct UTgSeqVar_Player {
	TArray<ObjectProperty> HumanPlayers; // 0xdc
	TArray<ObjectProperty> BotPlayers; // 0xec
	TArray<ObjectProperty> PetPlayers; // 0xfc
	char bAllBots : 1; // 0x10c
	char bAllHumans : 1; // 0x10c
	char bAllHumansAndPets : 1; // 0x10c
	int32_t nTaskForceNumber; // 0x110
};

struct UTgInvListener_ExplosiveImpalerArrow {
	FAimData m_AimData; // 0xcc
};

struct UTgInventoryObject_Listen_Combo_Cassie {
	float m_fDodgeRollFireTime; // 0xd0
	float m_fDisengageHitTime; // 0xd4
	ObjectProperty m_DisengageHitPawn; // 0xd8
};

struct UTgDeviceForm_WeaponZoom {
	float m_fCameraFOVInterpolationTime; // 0x2bc
	float m_fMaxCameraFOVInteprolationTime; // 0x2c0
	float m_fCameraFOVInterpolationTarget; // 0x2c4
	float m_fActiveFOV; // 0x2c8
	char m_fHasStartedInterpolation : 1; // 0x2cc
	float m_fDesiredStartInterpolationTimestamp; // 0x2d0
};

struct UUIData_SocialAction {
	TArray<FString> m_sTitle; // 0x60
	SAACT_ACTION m_eAction; // 0x70
	SAL_LIST m_eSourceList; // 0x71
	FPointer m_pSelectorFunc; // 0x74
	char m_bCloseOnAction : 1; // 0x7c
	char m_bAllowSelectAll : 1; // 0x7c
};

struct UTgGameDC_EffectList {
	char m_bListUpdated : 1; // 0x16c
	ObjectProperty m_EffectList[0x10]; // 0x170
};

struct USeqEvent_AISeeEnemy {
	float MaxSightDistance; // 0x128
};

struct AWebConnection {
	ObjectProperty WebServer; // 0x2e4
	FString ReceivedData; // 0x2ec
	ObjectProperty Request; // 0x2fc
	ObjectProperty Response; // 0x304
	ObjectProperty Application; // 0x30c
	char bDelayCleanup : 1; // 0x314
	int32_t RawBytesExpecting; // 0x318
	int32_t MaxValueLength; // 0x31c
	int32_t MaxLineLength; // 0x320
	int32_t ConnID; // 0x324
};

struct UUIDataEsportsTeam {
	Fdword dwTeamId; // 0x60
	FString sName; // 0x64
	FString sAbbr; // 0x74
	FString sTextureName; // 0x84
};

struct UUIComponent_ItemMini {
	ObjectProperty m_mcIcon; // 0x120
	int32_t m_nLevelOverride; // 0x128
};

struct UTgAIBehaviorAction_AssignLane {
	int32_t LaneIndex; // 0x94
};

struct UDrawFrustumComponent {
	FColor FrustumColor; // 0x24c
	float FrustumAngle; // 0x250
	float FrustumAspectRatio; // 0x254
	float FrustumStartDist; // 0x258
	float FrustumEndDist; // 0x25c
	ObjectProperty Texture; // 0x260
};

struct UTgAIUtilityFilter_DistanceFromTarget {
	float DistanceCutoff; // 0xc0
	char bInverse : 1; // 0xc4
};

struct USeqAct_Delay {
	char bDelayActive : 1; // 0x120
	char bStartWillRestart : 1; // 0x120
	float DefaultDuration; // 0x124
	float Duration; // 0x128
	float LastUpdateTime; // 0x12c
	float RemainingTime; // 0x130
};

struct ULightmassLevelSettings {
	int32_t NumIndirectLightingBounces; // 0x60
	FColor EnvironmentColor; // 0x64
	float EnvironmentIntensity; // 0x68
	float EmissiveBoost; // 0x6c
	float DiffuseBoost; // 0x70
	float SpecularBoost; // 0x74
	char bUseAmbientOcclusion : 1; // 0x78
	char bVisualizeAmbientOcclusion : 1; // 0x78
	float DirectIlluminationOcclusionFraction; // 0x7c
	float IndirectIlluminationOcclusionFraction; // 0x80
	float OcclusionExponent; // 0x84
	float FullyOccludedSamplesFraction; // 0x88
	float MaxOcclusionDistance; // 0x8c
};

struct UUIComponent_PartyLobbyInfoPanel {
	int32_t m_nSelectedQueue; // 0x120
	char m_bSelfReady : 1; // 0x124
	char m_bInQueue : 1; // 0x124
	char m_bSoloLTEActive : 1; // 0x124
	char m_bDuoLTEActive : 1; // 0x124
	char m_bSquadLTEActive : 1; // 0x124
	char m_bLTEActive : 1; // 0x124
	char m_bInitLTEInfo : 1; // 0x124
	char m_bCanScroll : 1; // 0x124
	ObjectProperty m_pDailyQuests; // 0x128
	ObjectProperty m_mcBattlePass; // 0x130
	ObjectProperty m_mcBattlePassName; // 0x138
	ObjectProperty m_mcBattlePassLevel; // 0x140
	ObjectProperty m_mcBattlePassIcon; // 0x148
	ObjectProperty m_pBattlePassProgress; // 0x150
	ObjectProperty m_mcClass; // 0x158
	ObjectProperty m_mcClassName; // 0x160
	ObjectProperty m_mcClassLevel; // 0x168
	ObjectProperty m_mcClassIcon; // 0x170
	ObjectProperty m_pClassProgress; // 0x178
	ObjectProperty m_mcQueueRank; // 0x180
	ObjectProperty m_mcQueueRankIcon; // 0x188
	ObjectProperty m_mcQueueRankKills; // 0x190
	ObjectProperty m_mcQueueRankWins; // 0x198
	ObjectProperty m_mcQueueRankName; // 0x1a0
	ObjectProperty m_mcQueueButtonLabel; // 0x1a8
	ObjectProperty m_mcQueueButtonTimer; // 0x1b0
	ObjectProperty m_pQueueButton; // 0x1b8
	ObjectProperty m_pPlayButton; // 0x1c0
	ObjectProperty m_mcCrossplayTF; // 0x1c8
	ObjectProperty m_mcFillTeamTF; // 0x1d0
	ObjectProperty m_mcRegionTF; // 0x1d8
	ObjectProperty m_mcErrorTF; // 0x1e0
	ObjectProperty m_pSelectQueueAction; // 0x1e8
	ObjectProperty m_pPlayAction; // 0x1f0
	ObjectProperty m_pPlayCancelAction; // 0x1f8
	ObjectProperty m_pReadyAction; // 0x200
	ObjectProperty m_pUnreadyAction; // 0x208
	ObjectProperty m_pCustomStartAction; // 0x210
	ObjectProperty m_pCustomQuitAction; // 0x218
	ObjectProperty m_pCustomCloseAction; // 0x220
	ObjectProperty m_pCustomPanel; // 0x228
	int32_t m_nOutputCount; // 0x230
	int32_t m_nScroll; // 0x234
	int32_t m_nLineNumber; // 0x238
	float m_fOutputWidth; // 0x23c
	FString m_sRemaining; // 0x240
	TArray<FString> m_SoloLTEMessages; // 0x250
	TArray<FString> m_DuoLTEMessages; // 0x260
	TArray<FString> m_SquadLTEMessages; // 0x270
	FPointer m_LTEMessages; // 0x280
	ObjectProperty m_mcLTEBanner; // 0x288
	ObjectProperty m_mcLTEDescription; // 0x290
	ObjectProperty m_mcLTETitle; // 0x298
	ObjectProperty m_mcLTEFrame; // 0x2a0
	ObjectProperty m_mcLTEBuffer; // 0x2a8
	ObjectProperty m_mcLTEScrollbar; // 0x2b0
	ObjectProperty m_mcLTEOutput[0xa]; // 0x2b8
};

struct ANxForceField {
	int32_t ExcludeChannel; // 0x280
	char bForceActive : 1; // 0x284
	FRBCollisionChannelContainer CollideWithChannels; // 0x288
	ERBCollisionChannel RBChannel; // 0x28c
	FPointer ForceField; // 0x290
	TArray<FPointer> ConvexMeshes; // 0x298
	TArray<FPointer> ExclusionShapes; // 0x2a8
	TArray<FPointer> ExclusionShapePoses; // 0x2b8
	FPointer U2NRotation; // 0x2c8
	int32_t SceneIndex; // 0x2d0
};

struct ATgCollisionProxy_SpectatorActionListener {
	DelegateProperty __ProxyDeviceOnStartFire__Delegate; // 0x2bc
};

struct UGameCrowdAgentBehavior {
	ECrowdBehaviorEvent MyEventType; // 0x60
	ECrowdBehaviorEvent ViralBehaviorEvent; // 0x61
	float DurationOfBehavior; // 0x64
	float TimeUntilStopBehavior; // 0x68
	char bIdleBehavior : 1; // 0x6c
	char bFaceActionTargetFirst : 1; // 0x6c
	char bIsViralBehavior : 1; // 0x6c
	char bPassOnIsViralBehaviorFlag : 1; // 0x6c
	ObjectProperty ActionTarget; // 0x70
	float MaxPlayerDistance; // 0x78
	float ViralRadius; // 0x7c
	float DurationBeforeBecomesViral; // 0x80
	float TimeToBecomeViral; // 0x84
	float DurationOfViralBehaviorPropagation; // 0x88
	float TimeToStopPropagatingViralBehavior; // 0x8c
	ObjectProperty MyAgent; // 0x90
	FColor DebugBehaviorColor; // 0x98
};

struct USeqAct_AccessObjectList {
	ObjectProperty OutputObject; // 0x108
	int32_t ObjectIndex; // 0x110
};

struct USeqEvent_TakeDamage {
	float MinDamageAmount; // 0x128
	float DamageThreshold; // 0x12c
	TArray<UDamageType*> DamageTypes; // 0x130
	TArray<UDamageType*> IgnoreDamageTypes; // 0x140
	float CurrentDamage; // 0x150
	char bResetDamageOnToggle : 1; // 0x154
};

struct UTgFlagContentData {
	TArray<FFlagMeshData> m_MeshData; // 0x60
};

struct UTgSeqEvent_TutorialEvent {
	TUTORIAL_EVENT TutEvent; // 0x128
	int32_t EventData; // 0x12c
};

struct UTgInventoryObject_Listen_BuffNextAttack {
	char bIsFirstAttackAfterUse : 1; // 0xc8
	char bFirstOnly : 1; // 0xc8
	float fEndTime; // 0xcc
};

struct UTgAIBehaviorCondition_IsLookingAtInteractTarget {
	float VisibilityAngle; // 0x98
};

struct UTgControlModule_StunDisoriented {
	int32_t m_nInitialYaw; // 0xcc
	int32_t m_nTargetYaw; // 0xd0
	float m_fInterpTime; // 0xd4
	float m_fRemainingInterpTime; // 0xd8
};

struct UDistributionVectorUniformCurve {
	FInterpCurveTwoVectors ConstantCurve; // 0x7c
	char bLockAxes1 : 1; // 0x90
	char bLockAxes2 : 1; // 0x90
	char bUseExtremes : 1; // 0x90
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x94
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x96
};

struct UUIData_PopupGeneric {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	FString sTitle[0x2]; // 0x68
	int32_t nInitialIndex; // 0x88
	char bUserMustClose : 1; // 0x8c
	FString sButtonName[0x8]; // 0x90
	FPointer pOtherSceneStompFunction; // 0x110
	ObjectProperty m_CallbackContainer; // 0x118
};

struct ADynamicBlockingVolume {
	char bEnabled : 1; // 0x2c0
	char bHandleNavMeshRegistrationInGame : 1; // 0x2c0
	char bHasRegisteredObstacle : 1; // 0x2c0
};

struct USeqAct_SetLocation {
	char bSetLocation : 1; // 0x108
	char bSetRotation : 1; // 0x108
	FVector LocationValue; // 0x10c
	FRotator RotationValue; // 0x118
	ObjectProperty Target; // 0x124
};

struct UInGameAdManager {
	char bShouldPauseWhileAdOpen : 1; // 0x80
};

struct UParticleModuleMeshRotationRate {
	FRawDistributionVector StartRotationRate; // 0x68
};

struct USeqAct_ModifyProperty {
	TArray<FPropertyInfo> Properties; // 0x108
};

struct UDistributionFloatUniform {
	float Min; // 0x7c
	float Max; // 0x80
};

struct AWeapon {
	ObjectProperty AIController; // 0x2f4
};

struct USeqAct_AddFloat {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UOnlineRecentPlayersList {
	TArray<FUniqueNetId> RecentPlayers; // 0x60
	TArray<FRecentParty> RecentParties; // 0x70
	FRecentParty LastParty; // 0x80
	int32_t MaxRecentPlayers; // 0x98
	int32_t MaxRecentParties; // 0x9c
	int32_t RecentPlayersAddIndex; // 0xa0
	int32_t RecentPartiesAddIndex; // 0xa4
	TArray<FCurrentPlayerMet> CurrentPlayers; // 0xa8
};

struct UTgAnimNodePlayCustomAnim {
	char m_bOverrideBlendInTime : 1; // 0x12c
	char m_bOverrideBlendOutTime : 1; // 0x12c
	float m_fOverriddenBlendInTime; // 0x130
	float m_fOverriddenBlendOutTime; // 0x134
};

struct UTgSeqAct_SetMissionTime {
	float m_fMissionTimeSecs; // 0x108
	float m_fIncrementSecs; // 0x10c
	float m_fMissionTimeRemaining; // 0x110
};

struct ATgEmitterCrashlanding {
	ComponentProperty m_PrimaryMesh; // 0x294
	ComponentProperty m_SecondaryMesh; // 0x29c
	float ParticleDurationAfterImpact; // 0x2a4
	ComponentProperty m_LensFlare; // 0x2a8
	ComponentProperty m_AudioComponent; // 0x2b0
};

struct AExponentialHeightFog {
	ComponentProperty Component; // 0x280
	char bEnabled : 1; // 0x288
};

struct UUIScene_UIShopPurchaseConfirm {
	ObjectProperty m_mcName; // 0x154
	ObjectProperty m_mcOffer; // 0x15c
	ObjectProperty m_mcRarity; // 0x164
	ObjectProperty m_mcDesc; // 0x16c
	ObjectProperty m_mcSale; // 0x174
	ObjectProperty m_mcIncludesItems; // 0x17c
	ObjectProperty m_mcHoverName; // 0x184
	ObjectProperty m_mcHoverDesc; // 0x18c
	ObjectProperty m_mcCompletePurchase; // 0x194
	ObjectProperty m_mcOwnedCrownsContainer; // 0x19c
	ObjectProperty m_mcPurchased; // 0x1a4
	ObjectProperty m_pPurchaseItems; // 0x1ac
	ObjectProperty m_pPrevArrow; // 0x1b4
	ObjectProperty m_pNextArrow; // 0x1bc
	ObjectProperty m_pItemPreviewStack; // 0x1c4
	ObjectProperty m_pRotator; // 0x1cc
	ObjectProperty m_pPurchaseCrownsButton; // 0x1d4
	ObjectProperty m_pPurchaseCrownsButtonKey; // 0x1dc
	ObjectProperty m_pPurchaseItemButton; // 0x1e4
	ObjectProperty m_pOwnedCrowns; // 0x1ec
	ObjectProperty m_pItemPrice; // 0x1f4
	ObjectProperty m_grInput; // 0x1fc
	ObjectProperty m_pPurchaseItemAction; // 0x204
	ObjectProperty m_pPurchaseCrownsAction; // 0x20c
};

struct UAmbientOcclusionEffect {
	FLinearColor OcclusionColor; // 0x88
	float OcclusionPower; // 0x98
	float OcclusionScale; // 0x9c
	float OcclusionBias; // 0xa0
	float MinOcclusion; // 0xa4
	char SSAO2 : 1; // 0xa8
	char bAngleBasedSSAO : 1; // 0xa8
	float OcclusionRadius; // 0xac
	float OcclusionAttenuation; // 0xb0
	EAmbientOcclusionQuality OcclusionQuality; // 0xb4
	float OcclusionFadeoutMinDistance; // 0xb8
	float OcclusionFadeoutMaxDistance; // 0xbc
	float HaloDistanceThreshold; // 0xc0
	float HaloDistanceScale; // 0xc4
	float HaloOcclusion; // 0xc8
	float EdgeDistanceThreshold; // 0xcc
	float EdgeDistanceScale; // 0xd0
	float FilterDistanceScale; // 0xd4
	int32_t FilterSize; // 0xd8
	float HistoryConvergenceTime; // 0xdc
	float HistoryWeightConvergenceTime; // 0xe0
};

struct UAnimNodeBlendBySpeed {
	float Speed; // 0x144
	int32_t LastChannel; // 0x148
	float BlendUpTime; // 0x14c
	float BlendDownTime; // 0x150
	float BlendDownPerc; // 0x154
	TArray<float> Constraints; // 0x158
	char bUseAcceleration : 1; // 0x168
	float BlendUpDelay; // 0x16c
	float BlendDownDelay; // 0x170
	float BlendDelayRemaining; // 0x174
};

struct USeqAct_SetObject {
	ObjectProperty DefaultValue; // 0x108
	ObjectProperty Value; // 0x110
};

struct UGFxAction_SetVariable {
	ObjectProperty Movie; // 0x108
	FString Variable; // 0x110
};

struct UTgInventoryObject_Listen_Combo_Fernando {
	int32_t m_nNumContacts; // 0xd0
};

struct UTgAnimBlendByPaladinsCharacter {
	ObjectProperty m_WeaponMeshActor; // 0x168
	TG_EQUIP_POINT m_SubNodeEquipSlot; // 0x170
	FChildAnimParameters m_ChildParams[0x11]; // 0x174
	TArray<EPalCharParams> m_nChildAnimStack; // 0x52c
	int32_t m_nCustomRetrieveIndex; // 0x53c
	char m_bBlendToIdleOnInterruptInspect : 1; // 0x540
};

struct UParticleModuleMeshMaterial {
	TArray<ObjectProperty> MeshMaterials; // 0x68
};

struct ATgDeploy_BombKingStickyBomb {
	char r_bDetonated : 1; // 0x448
	char c_bSuppressExplosion : 1; // 0x448
	char r_bShouldDetach : 1; // 0x448
	ObjectProperty r_StuckPlayer; // 0x44c
	FName m_StuckSocket; // 0x454
	ObjectProperty m_CachedPlayer; // 0x45c
	FVector r_HitNormal; // 0x464
	float m_fCachedCollisionRadius; // 0x470
	float m_fCachedCollisionHeight; // 0x474
	ObjectProperty m_GetStuckFx; // 0x478
	ObjectProperty m_StickOtherFx; // 0x480
	FRotator r_StuckRotation; // 0x488
	FVector r_CartOffset; // 0x494
	ObjectProperty r_StuckGeometry; // 0x4a0
	int32_t r_nOriginalProjectileID; // 0x4a8
	float r_fFXDamageRadius; // 0x4ac
	float r_fFXEffectiveRadius; // 0x4b0
	ObjectProperty m_CollisionProxy; // 0x4b4
	TArray<ObjectProperty> m_PendingCollisions; // 0x4bc
};

struct UTgAnimBlendByCatapult {
	ObjectProperty m_TgPawn; // 0x168
};

struct ATgMinionGoal {
	int32_t m_nLaneNum; // 0x378
	int32_t m_nTaskForce; // 0x37c
	ObjectProperty m_EndPoint; // 0x380
	char m_bUseForFinalDestination : 1; // 0x388
};

struct UUIScene_UIFooterGamepad {
	FFooterOption m_Option[0x8]; // 0x154
	int32_t m_nInputRegisteredCallbackHandle; // 0x374
	int32_t m_nInputDisplayNamesChangedCallbackHandle; // 0x378
	char m_bFrozen : 1; // 0x37c
	TArray<int32_t> m_CachedInputGamepadKeys; // 0x380
	TArray<FString> m_CachedInputDisplay; // 0x390
};

struct UParticleModuleLocation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x94
};

struct ATgKismetTestActor {
	int32_t m_nTestCount; // 0x2d0
	int32_t r_nCurrentTest; // 0x2d4
	int32_t r_nPassCount; // 0x2d8
	int32_t r_nFailCount; // 0x2dc
	TArray<ObjectProperty> c_aTextures; // 0x2e0
	ObjectProperty c_PassSound; // 0x2f0
	ObjectProperty c_FailSound; // 0x2f8
	TArray<ObjectProperty> c_aResultActors; // 0x300
};

struct APostProcessVolume {
	float Priority; // 0x2bc
	char bOverrideWorldPostProcessChain : 1; // 0x2c0
	char bEnabled : 1; // 0x2c0
	FPostProcessSettings Settings; // 0x2c4
	ObjectProperty NextLowerPriorityVolume; // 0x444
};

struct UMaterialExpressionTerrainLayerWeight {
	FPointer InstanceOverride; // 0xb0
	FExpressionInput Base; // 0xb8
	FExpressionInput Layer; // 0xec
	FName ParameterName; // 0x120
	float PreviewWeight; // 0x128
	FGuid ExpressionGUID; // 0x12c
};

struct USeqEvent_MobileSwipe {
	float Tolerance; // 0x13c
	float MinDistance; // 0x140
	FVector2D InitialTouch; // 0x144
	TArray<ObjectProperty> TouchedActors; // 0x14c
	float TraceDistance; // 0x15c
};

struct UDrawConeComponent {
	FColor ConeColor; // 0x24c
	float ConeRadius; // 0x250
	float ConeAngle; // 0x254
	int32_t ConeSides; // 0x258
};

struct ATgDeploy_EffectSpots {
	FEffectSpotInfo r_EffectSpots[0x64]; // 0x448
	int32_t m_nNewSpotIndex; // 0x1578
	ObjectProperty m_CollisionProxy; // 0x157c
	float m_fFirstPassRadius; // 0x1584
	TArray<ObjectProperty> m_TouchingActors; // 0x1588
	TArray<FEffectSpotTarget> m_AffectedActors; // 0x1598
	char m_bUsesEffectRefresh : 1; // 0x15a8
	float m_fLastRefreshTime; // 0x15ac
	float m_fMinRefreshTime; // 0x15b0
	FEffectSpotFXInfo c_SpotFX[0x64]; // 0x15b4
};

struct UMaterialExpressionFunctionInput {
	FExpressionInput Preview; // 0xb0
	FString InputName; // 0xe4
	FString Description; // 0xf4
	FGuid Id; // 0x104
	EFunctionInputType InputType; // 0x114
	FVector4 PreviewValue; // 0x120
	char bUsePreviewValueAsDefault : 1; // 0x130
	char bCompilingFunctionPreview : 1; // 0x130
	int32_t SortPriority; // 0x134
};

struct ATgDevice_Scope {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaf4
	char m_bDelayMoveSpeedPenalty : 1; // 0xafc
	char m_bIsZoomed : 1; // 0xafc
};

struct UUIDataManager {
	ObjectProperty m_CommonData; // 0x70
	ObjectProperty m_ChampionData; // 0x78
	ObjectProperty m_Social; // 0x80
	ObjectProperty m_LeagueMgr; // 0x88
	ObjectProperty m_Goals; // 0x90
	ObjectProperty m_Queues; // 0x98
	ObjectProperty m_Esports; // 0xa0
	ObjectProperty m_Chat; // 0xa8
	ObjectProperty m_Match; // 0xb0
	ObjectProperty m_AcquisitionMgr; // 0xb8
	ObjectProperty m_DataDirector; // 0xc0
	TArray<ObjectProperty> m_Data; // 0xc8
	TArray<int32_t> m_RestrictedClasses; // 0xd8
};

struct UMaterialExpressionFontSample {
	ObjectProperty Font; // 0xb0
	int32_t FontTexturePage; // 0xb8
};

struct UNxForceFieldCylindricalComponent {
	float RadialStrength; // 0x2bc
	float RotationalStrength; // 0x2c0
	float LiftStrength; // 0x2c4
	float ForceRadius; // 0x2c8
	float ForceTopRadius; // 0x2cc
	float LiftFalloffHeight; // 0x2d0
	float EscapeVelocity; // 0x2d4
	float ForceHeight; // 0x2d8
	float HeightOffset; // 0x2dc
	char UseSpecialRadialForce : 1; // 0x2e0
	FPointer Kernel; // 0x2e4
};

struct ATgHelpTipActor {
	FString m_strTitle; // 0x280
	FString m_strTip; // 0x290
	int32_t m_nGameTipId; // 0x2a0
	float m_fAlpha; // 0x2a4
	float m_fAlphaNearDistanceSq; // 0x2a8
	float m_fAlphaFarDistanceSq; // 0x2ac
};

struct ATgModifyPawnPropertiesVolume {
	int32_t m_nMapObjectId; // 0x2bc
	char m_bDisableJump : 1; // 0x2c0
	char m_bDisableBlockActors : 1; // 0x2c0
	char m_bDisableHanging : 1; // 0x2c0
	char m_bDisableAllDevices : 1; // 0x2c0
	char m_bTriggerUseEvent : 1; // 0x2c0
	char m_bOneWayMovement : 1; // 0x2c0
	FRotator m_vOnewWay; // 0x2c4
	ComponentProperty m_DirArrow; // 0x2d0
	int32_t s_nLootTableId; // 0x2d8
};

struct USeqAct_SetSoundMode {
	ObjectProperty SoundMode; // 0x108
	char bTopPriority : 1; // 0x110
};

struct UMobileMenuScene {
	FString MenuName; // 0x60
	TArray<ObjectProperty> MenuObjects; // 0x70
	ObjectProperty SceneCaptionFont; // 0x80
	ObjectProperty InputOwner; // 0x88
	char bSceneDoesNotRequireInput : 1; // 0x90
	char bRelativeLeft : 1; // 0x90
	char bRelativeTop : 1; // 0x90
	char bRelativeWidth : 1; // 0x90
	char bRelativeHeight : 1; // 0x90
	char bApplyGlobalScaleLeft : 1; // 0x90
	char bApplyGlobalScaleTop : 1; // 0x90
	char bApplyGlobalScaleWidth : 1; // 0x90
	char bApplyGlobalScaleHeight : 0; // 0x90
	char TouchpadIndex; // 0x94
	float Left; // 0x98
	float Top; // 0x9c
	float Width; // 0xa0
	float Height; // 0xa4
	float InitialLeft; // 0xa8
	float InitialTop; // 0xac
	float InitialWidth; // 0xb0
	float InitialHeight; // 0xb4
	float AuthoredGlobalScale; // 0xb8
	float Opacity; // 0xbc
	ObjectProperty UITouchSound; // 0xc0
	ObjectProperty UIUnTouchSound; // 0xc8
};

struct UPBRuleNodeCycle {
	EProcBuildingAxis RepeatAxis; // 0x70
	float RepeatSize; // 0x74
	int32_t CycleSize; // 0x78
	char bFixRepeatSize : 1; // 0x7c
};

struct UNavMeshGoal_PolyEncompassesAI {
	FVector OverrideExtentToCheck; // 0x7c
};

struct ATgDevice_Mount {
	char m_bForceFireDueToRespawn : 1; // 0xaf0
	char m_bDismountProtection : 1; // 0xaf0
	float m_fZoomDurationOverride; // 0xaf4
	int32_t s_nMountHealthRemaining; // 0xaf8
	int32_t m_nAutoReloadTransactionID; // 0xafc
	ObjectProperty m_CachedInhand; // 0xb00
	float m_fAutoMountDismountProtectionDuration; // 0xb08
};

struct UUIData_RebindCommand {
	int32_t m_nCommandIndex; // 0x60
	int32_t m_nCaptureAlt; // 0x64
};

struct UPComBrowserInteraction {
	FPointer VfTable_FCallbackEventDevice; // 0xb0
};

struct UTgSeqEvent_InputReceived {
	char bAllowInputDisabling : 1; // 0x128
};

struct ATgTeamBlocker {
	char m_bBlockFlagCarrier : 1; // 0x298
	char m_bBlockFriendlyFire : 1; // 0x298
};

struct UMaterialFunction {
	FGuid StateId; // 0x60
	FString Description; // 0x70
	char bExposeToLibrary : 1; // 0x80
	char bReentrantFlag : 1; // 0x80
	TArray<FString> LibraryCategories; // 0x84
	TArray<ObjectProperty> FunctionExpressions; // 0x94
};

struct ATgTeleportPlayerVolume {
	TgTeleportVolumeType TeleportLocation; // 0x2bc
	int32_t nMessageId; // 0x2c0
	char bTeleportBots : 1; // 0x2c4
	char bTeleportPlayers : 1; // 0x2c4
};

struct UUIFooter {
	ObjectProperty m_mcKey[0x5]; // 0x244
	ObjectProperty m_mcPurchaseBlocker; // 0x26c
	float m_fPurhcaseBlockerTimeout; // 0x274
	int32_t m_nInputRegisteredCallbackHandle; // 0x278
	int32_t m_nInputDisplayNamesChangedCallbackHandle; // 0x27c
};

struct AGameCrowdReplicationActor {
	ObjectProperty Spawner; // 0x280
	char bSpawningActive : 1; // 0x288
	int32_t DestroyAllCount; // 0x28c
};

struct UTgEffect {
	ObjectProperty m_EffectGroup; // 0x60
	int32_t m_nEffectID; // 0x68
	int32_t m_nPropertyId; // 0x6c
	int32_t m_nCalcMethodCode; // 0x70
	char m_bUseOnInterval : 1; // 0x74
	char m_bRemovable : 1; // 0x74
	char m_bAllowStacking : 1; // 0x74
	char m_bApplyToProperty : 1; // 0x74
	int32_t m_nPropertyValueId; // 0x78
	float m_fCurrent; // 0x7c
	float m_fBase; // 0x80
	float m_fMinimum; // 0x84
	float m_fMaximum; // 0x88
	float m_fScalingFactor; // 0x8c
	float m_fStaticValueOffset; // 0x90
	float m_MaxKnockbackZ; // 0x94
	float m_MinKnockbackZ; // 0x98
	float m_KnockbackZMultiplier; // 0x9c
};

struct APlayerStart {
	char bEnabled : 1; // 0x378
	char bPrimaryStart : 1; // 0x378
	char bBestStart : 1; // 0x378
	int32_t TeamIndex; // 0x37c
	int32_t Score; // 0x380
	int32_t SelectionIndex; // 0x384
};

struct UTgMapInfo {
	ObjectProperty m_EndFocusActor_TF1; // 0x60
	ObjectProperty m_EndFocusActor_TF2; // 0x68
	ObjectProperty m_FatalityFactory_TF1_2; // 0x70
	ObjectProperty m_FatalityFactory_TF1_3; // 0x78
	ObjectProperty m_FatalityFactory_TF1_4; // 0x80
	ObjectProperty m_FatalityFactory_TF2_2; // 0x88
	ObjectProperty m_FatalityFactory_TF2_3; // 0x90
	ObjectProperty m_FatalityFactory_TF2_4; // 0x98
	ObjectProperty m_OverlayPathMesh; // 0xa0
	FVector2D m_vMapCenter; // 0xa8
	FVector2D m_vTaskForce1BaseLocation; // 0xb0
	FVector2D m_vTaskForce2BaseLocation; // 0xb8
	float m_fLockViewBufferZoneSize; // 0xc0
	char m_bSupportsGuardianThrone : 1; // 0xc4
	float m_LitParticleBrightness; // 0xc8
};

struct USoundNodeDoppler {
	float DopplerIntensity; // 0x74
};

struct UMaterialExpressionDepthBiasedBlend {
	char bNormalize : 1; // 0xb0
	float BiasScale; // 0xb4
	FExpressionInput RGB; // 0xb8
	FExpressionInput Alpha; // 0xec
	FExpressionInput Bias; // 0x120
};

struct UNavMeshPathGoalEvaluator {
	ObjectProperty NextEvaluator; // 0x60
	int32_t MaxPathVisits; // 0x68
	char bAlwaysCallEvaluateGoal : 1; // 0x6c
	char bDoPartialAStar : 1; // 0x6c
	int32_t NumNodesThrownOut; // 0x70
	int32_t NumNodesProcessed; // 0x74
	int32_t MaxOpenListSize; // 0x78
};

struct UTgAIBehaviorCondition_NumRallyPoints {
	int32_t nRallyPointsThreshold; // 0x98
	char bMustBeEnemy : 1; // 0x9c
	char bMustBeSameTaskForce : 1; // 0x9c
};

struct UTgSeqAct_TutorialInstruction {
	int32_t nMsgId; // 0x108
};

struct UUIComponent_MapTeamMarker {
	float m_fSize; // 0x120
	float m_fRadius; // 0x124
	float m_fOffsetX; // 0x128
	float m_fOffsetY; // 0x12c
	ObjectProperty m_mcFrame; // 0x130
	ObjectProperty m_mcPulse; // 0x138
};

struct UTgAIBehaviorAction_SelectLaneCombatTarget_LastAttacker {
	char bSkipPawnNotify : 1; // 0x94
	char bMustBeHittable : 1; // 0x94
	ECombatTargetType IgnoreTargetType; // 0x98
};

struct UUIHudVoiceChat {
	float m_fAlphaSpeaking; // 0x244
	float m_fAlphaNotSpeaking; // 0x248
	float m_fAlphaMuted; // 0x24c
	float m_fFadeTime; // 0x250
	ObjectProperty m_mcAllyPlayers[0x5]; // 0x254
	ObjectProperty m_mcAllyPlayerLabels[0x5]; // 0x27c
	ObjectProperty m_mcAllyPlayerSpeakIcons[0x5]; // 0x2a4
	ObjectProperty m_mcAllyPlayerIcons[0x5]; // 0x2cc
	ObjectProperty m_mcEnemyPlayers[0x5]; // 0x2f4
	ObjectProperty m_mcEnemyPlayerLabels[0x5]; // 0x31c
	ObjectProperty m_mcEnemyPlayerSpeakIcons[0x5]; // 0x344
	ObjectProperty m_mcEnemyPlayerIcons[0x5]; // 0x36c
	FName m_nmAllyPlayerIcons[0x5]; // 0x394
	FName m_nmEnemyPlayerIcons[0x5]; // 0x3bc
	FUniqueNetId m_LocalPlayerNetId; // 0x3e4
};

struct USequenceVariable {
	FName VarName; // 0x98
};

struct ATgDeploy_SmokeScreen {
	ObjectProperty m_CachedPawnOwner; // 0x48c
	char m_bHasAppliedOwnerStealth : 1; // 0x494
	float r_fRadiusForFX; // 0x498
};

struct UOnlinePlayerStorage {
	int32_t VersionNumber; // 0x60
	int32_t VersionSettingsId; // 0x64
	int32_t SaveCountSettingId; // 0x68
	TArray<FOnlineProfileSetting> ProfileSettings; // 0x6c
	TArray<FSettingsPropertyPropertyMetaData> ProfileMappings; // 0x7c
	EOnlinePlayerStorageAsyncState AsyncState; // 0x8c
	int32_t DeviceID; // 0x90
};

struct UTgAIBehaviorCondition_IsChestInRadius {
	float Radius; // 0x98
	char SeenAsOpen : 1; // 0x9c
	char CheckLOS : 1; // 0x9c
};

struct UTgSeqEvent_ReachShards {
	int32_t nShardCount; // 0x128
};

struct USeqAct_ConsoleCommand {
	FString Command; // 0x108
	TArray<FString> Commands; // 0x118
};

struct USoundNodeWave {
	int32_t CompressionQuality; // 0x74
	char bForceRealTimeDecompression : 1; // 0x78
	char bLoopingSound : 1; // 0x78
	char bDynamicResource : 1; // 0x78
	char bUseTTS : 1; // 0x78
	char bProcedural : 1; // 0x78
	char bMature : 1; // 0x78
	char bManualWordWrap : 1; // 0x78
	char bSingleLine : 1; // 0x78
	ETTSSpeaker TTSSpeaker; // 0x7c
	EDecompressionType DecompressionType; // 0x7d
	EDetailMode MobileDetailMode; // 0x7e
	FString SpokenText; // 0x80
	float Volume; // 0x90
	float Pitch; // 0x94
	float Duration; // 0x98
	int32_t NumChannels; // 0x9c
	int32_t SampleRate; // 0xa0
	FUntypedBulkData_Mirror RawData; // 0xa4
	FPointer VorbisDecompressor; // 0xe4
	FPointer RawPCMData; // 0xec
	int32_t RawPCMDataSize; // 0xf4
	FUntypedBulkData_Mirror CompressedPCData; // 0xf8
	FUntypedBulkData_Mirror CompressedXbox360Data; // 0x138
	FUntypedBulkData_Mirror CompressedDingoData; // 0x178
	FUntypedBulkData_Mirror CompressedPS3Data; // 0x1b8
	FUntypedBulkData_Mirror CompressedWiiUData; // 0x1f8
	FUntypedBulkData_Mirror CompressedIPhoneData; // 0x238
	FUntypedBulkData_Mirror CompressedFlashData; // 0x278
	FUntypedBulkData_Mirror CompressedOrbisData; // 0x2b8
	int32_t ResourceID; // 0x2f8
	int32_t ResourceSize; // 0x2fc
	FPointer ResourceData; // 0x300
	TArray<FSubtitleCue> Subtitles; // 0x308
	TArray<FLocalizedSubtitle> LocalizedSubtitles; // 0x318
};

struct UUIComponent_BattlePassRewardTier {
	ObjectProperty m_pLayoutNormal; // 0x120
	ObjectProperty m_pLayoutBonus; // 0x128
};

struct UTgSeqAct_SetMapLane {
	int32_t m_nMapLane; // 0x108
};

struct ATgProj_Flare {
	char m_bStartedPulse : 1; // 0x56c
	float m_fLifetimeForPhysicsSubstep; // 0x570
};

struct UUIHudResultBG {
	int32_t m_nRank; // 0x244
	int32_t m_nKills; // 0x248
	int32_t m_nPlayer; // 0x24c
	int32_t m_nTestRank; // 0x250
	char m_bEliminated : 1; // 0x254
	char m_bShownAlready : 1; // 0x254
	float m_fBlurTimer; // 0x258
	float m_fDisplayTimer; // 0x25c
	float m_fMinimizeTimer; // 0x260
	float m_fDisappearTimer; // 0x264
	float m_fMenuFocusTimer; // 0x268
	ObjectProperty m_mcPlayer; // 0x26c
	ObjectProperty m_mcPlayerName; // 0x274
	ObjectProperty m_mcPlayerRank; // 0x27c
	ObjectProperty m_mcPlayerFade; // 0x284
	ObjectProperty m_mcPlayerLineA; // 0x28c
	ObjectProperty m_mcPlayerLineB; // 0x294
	ObjectProperty m_mcPlayerElims; // 0x29c
	ObjectProperty m_mcPlayerKills; // 0x2a4
	ObjectProperty m_mcPlayerKiller; // 0x2ac
	ObjectProperty m_mcDefeat; // 0x2b4
	ObjectProperty m_mcDefeatTitle; // 0x2bc
	ObjectProperty m_mcDefeatFlags; // 0x2c4
	ObjectProperty m_mcDefeatFrame; // 0x2cc
	ObjectProperty m_mcButton[0x3]; // 0x2d4
	ObjectProperty m_mcVictory[0x3]; // 0x2ec
	ObjectProperty m_mcTutorialBanner; // 0x304
	ObjectProperty m_mcTutorialBackground; // 0x30c
	ObjectProperty m_pMenuGroup; // 0x314
};

struct UTgAnimNodeBlendByHealth {
	TArray<float> m_HealthChildren; // 0x168
	ObjectProperty m_TgPawn; // 0x178
};

struct UTgAIBehaviorCondition_NearbyTargetTypeCount {
	char bMustBeEnemy : 1; // 0x9c
	char bMustBeInForwardCone : 1; // 0x9c
	int32_t TargetTypeThreshold; // 0xa0
	ECombatTargetType TargetType; // 0xa4
	float ForwardConeAngle; // 0xa8
};

struct UTgAnimBlendByStartingPosture {
	ObjectProperty m_TgPawn; // 0x168
	TG_POSTURE m_StartingPosture; // 0x170
	char m_bExpired : 1; // 0x174
};

struct UParticleModuleOrientationAxisLock {
	EParticleAxisLock LockAxisFlags; // 0x68
};

struct UTerrainMaterial {
	FMatrix LocalToMapping; // 0x60
	ETerrainMappingType MappingType; // 0xa0
	float MappingScale; // 0xa4
	float MappingRotation; // 0xa8
	float MappingPanU; // 0xac
	float MappingPanV; // 0xb0
	ObjectProperty Material; // 0xb4
	ObjectProperty DisplacementMap; // 0xbc
	float DisplacementScale; // 0xc4
};

struct UTgAnimBlendBySkydive {
	ObjectProperty m_TgPawn; // 0x168
};

struct UTgInventoryObject_Listen_ActiveWhileDeployableActive {
	int32_t m_nActiveDeployableCount; // 0xcc
};

struct UTgDeviceForm_FragGrenade {
	TArray<ObjectProperty> m_FragGrenadeBlendList1P; // 0x2bc
	TArray<ObjectProperty> m_FragGrenadeBlendList3P; // 0x2cc
};

struct UUIComponent_LobbySlotItem {
	ObjectProperty m_mcText; // 0x120
	ObjectProperty m_mcLock; // 0x128
	ObjectProperty m_mcRarity; // 0x130
	ObjectProperty m_mcEquipped; // 0x138
	ObjectProperty m_mcExclusive; // 0x140
	ObjectProperty m_mcTypeIcon; // 0x148
	ObjectProperty m_mcIcon; // 0x150
	ObjectProperty m_mcAudio; // 0x158
	ObjectProperty m_mcRented; // 0x160
	ObjectProperty m_mcRentalDuration; // 0x168
	ObjectProperty m_mcRentalDurationText; // 0x170
	ObjectProperty m_mcPrice; // 0x178
	ObjectProperty m_mcPriceA; // 0x180
	ObjectProperty m_mcPriceB; // 0x188
	ObjectProperty m_mcPrevPrice; // 0x190
	ObjectProperty m_mcPrevPriceA; // 0x198
	ObjectProperty m_mcPrevPriceAStrike; // 0x1a0
	ObjectProperty m_mcPrevPriceB; // 0x1a8
	ObjectProperty m_mcPrevPriceBStrike; // 0x1b0
	char m_bHovered : 1; // 0x1b8
};

struct UTgDeviceFire_DeployOnLocation {
	FVector m_TargetLocation; // 0x270
};

struct UParticleLODLevel {
	int32_t Level; // 0x60
	char bEnabled : 1; // 0x64
	char ConvertedModules : 1; // 0x64
	ObjectProperty RequiredModule; // 0x68
	TArray<ObjectProperty> Modules; // 0x70
	ObjectProperty TypeDataModule; // 0x80
	ObjectProperty SpawnModule; // 0x88
	ObjectProperty EventGenerator; // 0x90
	TArray<ObjectProperty> SpawningModules; // 0x98
	TArray<ObjectProperty> SpawnModules; // 0xa8
	TArray<ObjectProperty> UpdateModules; // 0xb8
	TArray<ObjectProperty> OrbitModules; // 0xc8
	TArray<ObjectProperty> EventReceiverModules; // 0xd8
	int32_t PeakActiveParticles; // 0xe8
};

struct USpeedTree {
	char bLegacySpeedTree : 1; // 0x60
	FPointer SRH; // 0x64
	float LeafStaticShadowOpacity; // 0x6c
	ObjectProperty Branch1Material; // 0x70
	ObjectProperty Branch2Material; // 0x78
	ObjectProperty FrondMaterial; // 0x80
	ObjectProperty LeafCardMaterial; // 0x88
	ObjectProperty LeafMeshMaterial; // 0x90
	ObjectProperty BillboardMaterial; // 0x98
	ObjectProperty Branch1MaterialNoScreenDoor; // 0xa0
	ObjectProperty Branch2MaterialNoScreenDoor; // 0xa8
	ObjectProperty FrondMaterialNoScreenDoor; // 0xb0
	ObjectProperty LeafCardMaterialNoScreenDoor; // 0xb8
	ObjectProperty LeafMeshMaterialNoScreenDoor; // 0xc0
	ObjectProperty BillboardMaterialNoScreenDoor; // 0xc8
	float WindStrength; // 0xd0
	FVector WindDirection; // 0xd4
};

struct UTgInventoryObject_Listen_HitWithDeviceSpecial {
	char m_bSkipActiveCheck : 1; // 0xd0
	char m_bSkipStartCooldown : 1; // 0xd0
};

struct UTgInventoryObject_Listen_EnergyCharge {
	ObjectProperty m_CachedTgPawn; // 0xc8
	float m_fChargeMultiplierDamageDealt; // 0xd0
	float m_fChargeMultiplierDamageTaken; // 0xd4
	float m_fChargeMultiplierPetDamage; // 0xd8
};

struct URB_RadialImpulseComponent {
	ERadialImpulseFalloff ImpulseFalloff; // 0x24c
	float ImpulseStrength; // 0x250
	float ImpulseRadius; // 0x254
	char bVelChange : 1; // 0x258
	char bCauseFracture : 1; // 0x258
	ComponentProperty PreviewSphere; // 0x25c
};

struct UParticleLightEnvironmentComponent {
	int32_t ReferenceCount; // 0x158
	int32_t NumPooledReuses; // 0x15c
	ObjectProperty SharedInstigator; // 0x160
	ObjectProperty SharedParticleSystem; // 0x168
	char bAllowDLESharing : 1; // 0x170
};

struct UInterpTrackInstBoolProp {
	FPointer BoolProp; // 0x70
	int32_t BitMask; // 0x78
	char ResetBool : 1; // 0x7c
};

struct UTgInventoryObject_Listen_ReloadCard {
	int32_t m_nPendingHitCounter; // 0xd0
};

struct ACoverReplicator {
	TArray<FCoverReplicationInfo> CoverReplicationData; // 0x280
};

struct ATgGame_RoyaleTutorial {
	FVector c_vZeppelinSpawnLoc; // 0x798
	float c_fZeppelinSpawnRot; // 0x7a4
	float c_fAutoDeployTime; // 0x7a8
	char m_bDisenchantEnabled : 1; // 0x7ac
	char m_bMountEnabled : 1; // 0x7ac
	char m_bDisplayPrompt : 1; // 0x7ac
	char m_bClearObjGroup : 1; // 0x7ac
	char m_bShowTooltip : 1; // 0x7ac
	char m_bTooltipLeftPosition : 1; // 0x7ac
	char m_bTutorialCompleted : 1; // 0x7ac
	FString m_sPromptCommand; // 0x7b0
	int32_t m_nPromptMessageId; // 0x7c0
	int32_t m_nCurrentObjMessageId; // 0x7c4
	int32_t m_nTooltipMessageId; // 0x7c8
	TArray<ObjectProperty> m_pForgeObjectives; // 0x7cc
};

struct UMaterialExpressionStaticBool {
	char Value : 1; // 0xb0
};

struct UTgAIBehaviorAction_Strafe {
	float StrafeUpdateTime; // 0x9c
	float DistanceMultiplier; // 0xa0
};

struct ATgDevice_RepulsorField {
	float r_fAtTheReadyRadius; // 0xb34
};

struct UUIComponent_ClassSelectInfoPanel {
	ObjectProperty m_mcImage; // 0x120
	ObjectProperty m_mcTitleA; // 0x128
	ObjectProperty m_mcTitleB; // 0x130
	ObjectProperty m_mcInfoFrame; // 0x138
	ObjectProperty m_mcAbility; // 0x140
	ObjectProperty m_mcAbilityDesc; // 0x148
	ObjectProperty m_mcAbilityIcon; // 0x150
	ObjectProperty m_mcAbilityName; // 0x158
	ObjectProperty m_mcTalentGroup; // 0x160
	ObjectProperty m_mcTalent[0xa]; // 0x168
	ObjectProperty m_mcTalentIcon[0xa]; // 0x1b8
	ObjectProperty m_mcTalentTitle[0xa]; // 0x208
	ObjectProperty m_mcTalentDesc[0xa]; // 0x258
};

struct UUIComponent_PortraitBorder {
	ObjectProperty m_mcFrame; // 0x120
	ObjectProperty m_mcLock; // 0x128
	ObjectProperty m_mcEquippedCheckmark; // 0x130
};

struct UTgAnimNodeAimOffset_Base {
	char m_bBakeAllProfileOffsetsFromAnimations : 1; // 0x16c
	char m_bPopulateAnimNamesWithPrefixes : 1; // 0x16c
};

struct UTgInventoryObject_Listen_Combo_BombKing {
	TArray<FStickyHitInfo> m_HitActors; // 0xd0
};

struct USeqAct_AttachToEvent {
	char bPreferController : 1; // 0x108
};

struct ATgNamedAreaVolume {
	int32_t m_nMessageId; // 0x2bc
	FString m_PreviewText; // 0x2c0
	TArray<ObjectProperty> m_PlayerStarts; // 0x2d0
};

struct UNavMeshGoalFilter_PolyEncompassesAI {
	FVector OverrideExtentToCheck; // 0x6c
};

struct UTgSeqEvent_UpdateLanePusherCount {
	int32_t Taskforce; // 0x128
};

struct ATgDevice_DualWield {
	FVector m_vProjectileSpawnOffset2; // 0xaec
	char m_bFireLeftWeapon : 1; // 0xaf8
};

struct ANxCylindricalForceFieldCapsule {
	ComponentProperty RenderComponent; // 0x304
};

struct UParticleModuleRotationOverLifetime {
	FRawDistributionFloat RotationOverLife; // 0x68
	char Scale : 1; // 0x8c
};

struct UEdCoordSystem {
	FMatrix M; // 0x60
	FString Desc; // 0xa0
};

struct UParticleModuleLocationEmitterDirect {
	FName EmitterName; // 0x68
};

struct UTgSeqAct_JoinTeam {
	ObjectProperty TeamLeader; // 0x108
};

struct UTgDeviceForm_Tempest {
	ObjectProperty m_BeamTarget1; // 0x2bc
	ObjectProperty m_BeamTarget2; // 0x2c4
	char m_bBeamActive1 : 1; // 0x2cc
	char m_bBeamActive2 : 1; // 0x2cc
	char m_bBeamDirty1 : 1; // 0x2cc
	char m_bBeamDirty2 : 1; // 0x2cc
	float m_fBeamStartTime1; // 0x2d0
	float m_fBeamStartTime2; // 0x2d4
	float m_fBeamOnTime; // 0x2d8
};

struct URB_BodySetup {
	ESleepFamily SleepFamily; // 0xb8
	FName BoneName; // 0xbc
	char bFixed : 1; // 0xc4
	char bNoCollision : 1; // 0xc4
	char bBlockZeroExtent : 1; // 0xc4
	char bBlockNonZeroExtent : 1; // 0xc4
	char bNoBodyShotChecks : 1; // 0xc4
	char bEnableContinuousCollisionDetection : 1; // 0xc4
	char bAlwaysFullAnimWeight : 1; // 0xc4
	char bConsiderForBounds : 1; // 0xc4
	ObjectProperty PhysMaterial; // 0xc8
	float MassScale; // 0xd0
	TArray<FPointer> CollisionGeom; // 0xd4
	TArray<FVector> CollisionGeomScale3D; // 0xe4
	TArray<FVector> PreCachedPhysScale; // 0xf4
	TArray<FKCachedConvexData> PreCachedPhysData; // 0x104
	int32_t PreCachedPhysDataVersion; // 0x114
};

struct UGameThirdPersonCameraMode {
	ObjectProperty ThirdPersonCam; // 0x60
	float FOVAngle; // 0x68
	float BlendTime; // 0x6c
	char bLockedToViewTarget : 1; // 0x70
	char bDirectLook : 1; // 0x70
	char bFollowTarget : 1; // 0x70
	char bInterpLocation : 1; // 0x70
	char bUsePerAxisOriginLocInterp : 1; // 0x70
	char bInterpRotation : 1; // 0x70
	char bRotInterpSpeedConstant : 1; // 0x70
	char bDoPredictiveAvoidance : 1; // 0x70
	char bValidateWorstLoc : 0; // 0x70
	char bSkipCameraCollision : 0; // 0x70
	char bSmoothViewOffsetPitchChanges : 0; // 0x70
	char bApplyDeltaViewOffset : 0; // 0x70
	char bAdjustDOF : 0; // 0x70
	char bDOFUpdated : 0; // 0x70
	char bNoFOVPostProcess : 0; // 0x70
	char bInterpViewOffsetOnlyForCamTransition : 0; // 0x70
	float FollowingInterpSpeed_Pitch; // 0x74
	float FollowingInterpSpeed_Yaw; // 0x78
	float FollowingInterpSpeed_Roll; // 0x7c
	float FollowingCameraVelThreshold; // 0x80
	float OriginLocInterpSpeed; // 0x84
	FVector PerAxisOriginLocInterpSpeed; // 0x88
	float OriginRotInterpSpeed; // 0x94
	FVector StrafeLeftAdjustment; // 0x98
	FVector StrafeRightAdjustment; // 0xa4
	float StrafeOffsetScalingThreshold; // 0xb0
	float StrafeOffsetInterpSpeedIn; // 0xb4
	float StrafeOffsetInterpSpeedOut; // 0xb8
	FVector LastStrafeOffset; // 0xbc
	FVector RunFwdAdjustment; // 0xc8
	FVector RunBackAdjustment; // 0xd4
	float RunOffsetScalingThreshold; // 0xe0
	float RunOffsetInterpSpeedIn; // 0xe4
	float RunOffsetInterpSpeedOut; // 0xe8
	FVector LastRunOffset; // 0xec
	FVector WorstLocOffset; // 0xf8
	FVector TargetRelativeCameraOriginOffset; // 0x104
	FViewOffsetData ViewOffset; // 0x110
	FViewOffsetData ViewOffset_ViewportAdjustments[0x6]; // 0x134
	float DOF_FalloffExponent; // 0x20c
	float DOF_BlurKernelSize; // 0x210
	float DOF_FocusInnerRadius; // 0x214
	float DOF_MaxNearBlurAmount; // 0x218
	float DOF_MaxFarBlurAmount; // 0x21c
	float LastDOFRadius; // 0x220
	float LastDOFDistance; // 0x224
	float DOFDistanceInterpSpeed; // 0x228
	FVector DOFTraceExtent; // 0x22c
	float DOF_RadiusFalloff; // 0x238
	FVector2D DOF_RadiusRange; // 0x23c
	FVector2D DOF_RadiusDistRange; // 0x244
	float ViewOffsetInterp; // 0x24c
	float OffsetAdjustmentInterpSpeed; // 0x250
	ECameraViewportTypes CurrentViewportType; // 0x254
};

struct ATgDevice_ChargeFernando {
	float m_fCooldownReduction; // 0xb60
};

struct USeqAct_ProjectileFactory {
	ObjectProperty PSTemplate; // 0x178
	FName SocketName; // 0x180
	FName BoneName; // 0x188
};

struct ATgDevice_Minigun {
	float m_fFireReadiness; // 0xaec
	int32_t r_nFireReadinessPercent; // 0xaf0
	int32_t m_nOldFireReadinessPercent; // 0xaf4
	TArray<ObjectProperty> m_ForceFeedbackBarrelSpin; // 0xaf8
	TArray<ObjectProperty> m_ForceFeedbackBarrelFiring; // 0xb08
};

struct UTgInvListener_CooledMags {
	ObjectProperty m_CachedSidearm; // 0xc8
	ObjectProperty m_CachedInhand; // 0xd0
	float m_fAmmoFillTime; // 0xd8
};

struct ATgDeviceVolumeInfo {
	ObjectProperty V; // 0x280
};

struct AGameCrowdAgentSM {
	ComponentProperty Mesh; // 0x500
	ObjectProperty MeshColor; // 0x508
};

struct UParticleModuleLocationBoneSocket {
	ELocationBoneSocketSource SourceType; // 0x68
	ELocationBoneSocketSelectionMethod SelectionMethod; // 0x69
	FVector UniversalOffset; // 0x6c
	TArray<FLocationBoneSocketInfo> SourceLocations; // 0x78
	char bUpdatePositionEachFrame : 1; // 0x88
	char bOrientMeshEmitters : 1; // 0x88
	char bInheritVelocityAtSpawn : 1; // 0x88
	FName SkelMeshActorParamName; // 0x8c
	float LastUpdateTime; // 0x94
};

struct UTgAnimNodeToggleWithTransition_Disengage {
	int32_t m_nPendingChildIndex; // 0x170
	char m_bForceNewActiveChild : 1; // 0x174
};

struct UTgSkeletalMeshComponent {
	char c_bFxApplied : 1; // 0x7b4
	char c_bIsFemale : 1; // 0x7b4
	TArray<ObjectProperty> c_FxList; // 0x7b8
	TArray<ObjectProperty> c_DatabaseFxList; // 0x7c8
	TArray<FFx_AssemblyData> c_FxAssemblyData; // 0x7d8
	int32_t m_nAssemblyId; // 0x7e8
	TArray<ComponentProperty> m_ChildMeshes; // 0x7ec
	FVector FPCTranslation; // 0x7fc
	FRotator FPCRotation; // 0x808
	FVector FPCScale; // 0x814
	int32_t c_AudioGroupId; // 0x820
	int32_t c_nForceUpdateAttachmentsInTick; // 0x824
	TArray<ComponentProperty> c_HeadShotComponents; // 0x828
	TArray<FAnimNotifyParticleCacheEntry> AnimNotifyPlayParticleEffectEntries; // 0x838
	int32_t m_nMaterialStackId; // 0x848
	TArray<FMaterialStackInstance> m_MaterialStack; // 0x84c
	TArray<FMeshAccessoryStorage> m_MeshAccessoryStorage; // 0x85c
};

struct UUIData_HeaderTab {
	FString m_sTitle; // 0x60
	int32_t m_nCTACount; // 0x70
};

struct ANavMeshObstacle {
	FPointer VfTable_IInterface_NavMeshPathObstacle; // 0x280
	char bEnabled : 1; // 0x288
	char bPreserveInternalGeo : 1; // 0x288
};

struct UUIScene_UICustomGameCreate {
	ObjectProperty m_mcTitle; // 0x154
	ObjectProperty m_mcError; // 0x15c
	ObjectProperty m_mcWait; // 0x164
	ObjectProperty m_pNameInput; // 0x16c
	ObjectProperty m_pPasswordInput; // 0x174
	ObjectProperty m_pGameTypeInput; // 0x17c
	ObjectProperty m_pJoinAsSpectatorInput; // 0x184
	ObjectProperty m_pCreateButton; // 0x18c
	ObjectProperty m_pGroup; // 0x194
	float m_fUpdateTimer; // 0x19c
	float m_fCreateDisableTimer; // 0x1a0
};

struct UUIComponent_DeviceDetailsPerk {
	ObjectProperty m_mcTF; // 0x120
	ObjectProperty m_mcClassIcon; // 0x128
	ObjectProperty m_mcElementIcon; // 0x130
};

struct UTgEffect_Lift {
	char m_bApplyKnockup : 1; // 0xa0
	char m_bRemoveCripple : 1; // 0xa0
	char m_bRemoveRoot : 1; // 0xa0
	float m_fZHeight; // 0xa4
};

struct UUIChatTab {
	int32_t m_nIdentity; // 0x2cc
	int32_t m_nOutputCount; // 0x2d0
	char m_bOpen : 1; // 0x2d4
	char m_bCanChat : 1; // 0x2d4
	char m_bCanScroll : 1; // 0x2d4
	char m_bPrevInputState : 1; // 0x2d4
	char m_bPlayNotifySound : 1; // 0x2d4
	ObjectProperty m_mcClose; // 0x2d8
	ObjectProperty m_mcMinimize; // 0x2e0
	ObjectProperty m_mcOpen; // 0x2e8
	ObjectProperty m_mcOpenTF; // 0x2f0
	ObjectProperty m_mcOpenFrame; // 0x2f8
	ObjectProperty m_mcOpenButton; // 0x300
	ObjectProperty m_mcOpenButtonTF; // 0x308
	ObjectProperty m_mcOpenButtonEdge; // 0x310
	ObjectProperty m_mcOpenButtonMask; // 0x318
	ObjectProperty m_mcBuffer; // 0x320
	ObjectProperty m_mcButton; // 0x328
	ObjectProperty m_mcButtonTF; // 0x330
	ObjectProperty m_mcButtonEdge; // 0x338
	ObjectProperty m_mcButtonMask; // 0x340
	ObjectProperty m_mcButtonHighlight; // 0x348
	ObjectProperty m_mcNotify; // 0x350
	ObjectProperty m_mcScroll; // 0x358
	ObjectProperty m_mcInputBtn; // 0x360
	ObjectProperty m_mcOutput[0x4]; // 0x368
	ObjectProperty m_mcOutputIcon[0x4]; // 0x388
	ObjectProperty m_pCommandList; // 0x3a8
	ObjectProperty m_AkChatSound; // 0x3b0
	ObjectProperty m_AkNewTabSound; // 0x3b8
};

struct UUIFade {
	ObjectProperty m_mcBlocker; // 0x244
};

struct UUIHudInventory {
	int32_t m_nScrollIndex; // 0x244
	int32_t m_nRunes[0x6]; // 0x248
	int32_t m_nPotion[0x2]; // 0x260
	int32_t m_nWeapon[0x2]; // 0x268
	int32_t m_nAbility[0x2]; // 0x270
	char m_bPolymorphedWhenOpening : 1; // 0x278
	ObjectProperty m_akDropItem; // 0x27c
	ObjectProperty m_mcBack; // 0x284
	ObjectProperty m_mcLine; // 0x28c
	ObjectProperty m_mcHeader; // 0x294
	ObjectProperty m_mcBlocker; // 0x29c
	ObjectProperty m_mcScrollBar; // 0x2a4
	ObjectProperty m_mcSwap[0x2]; // 0x2ac
	ObjectProperty m_mcTitle[0x4]; // 0x2bc
	ObjectProperty m_pInventoryInputGroup; // 0x2dc
	ObjectProperty m_mcRune[0x6]; // 0x2e4
	ObjectProperty m_mcRuneIcon[0x6]; // 0x314
	ObjectProperty m_mcRuneName[0x6]; // 0x344
	ObjectProperty m_mcRuneDesc[0x6]; // 0x374
	ObjectProperty m_mcRuneFrame[0x6]; // 0x3a4
	ObjectProperty m_mcWeapon[0x2]; // 0x3d4
	ObjectProperty m_mcWeaponDrop[0x2]; // 0x3e4
	ObjectProperty m_mcWeaponIcon[0x2]; // 0x3f4
	ObjectProperty m_mcWeaponLine[0x2]; // 0x404
	ObjectProperty m_mcWeaponName[0x2]; // 0x414
	ObjectProperty m_mcWeaponType[0x2]; // 0x424
	ObjectProperty m_mcWeaponClass[0x2]; // 0x434
	ObjectProperty m_mcWeaponDescA[0x2]; // 0x444
	ObjectProperty m_mcWeaponDescB[0x2]; // 0x454
	ObjectProperty m_mcWeaponFrame[0x2]; // 0x464
	ObjectProperty m_mcWeaponImage[0x2]; // 0x474
	ObjectProperty m_mcWeaponRarity[0x2]; // 0x484
	ObjectProperty m_mcWeaponElement[0x2]; // 0x494
	ObjectProperty m_mcAbility[0x2]; // 0x4a4
	ObjectProperty m_mcAbilityDrop[0x2]; // 0x4b4
	ObjectProperty m_mcAbilityIcon[0x2]; // 0x4c4
	ObjectProperty m_mcAbilityLine[0x2]; // 0x4d4
	ObjectProperty m_mcAbilityName[0x2]; // 0x4e4
	ObjectProperty m_mcAbilityType[0x2]; // 0x4f4
	ObjectProperty m_mcAbilityDesc[0x2]; // 0x504
	ObjectProperty m_mcAbilityClass[0x2]; // 0x514
	ObjectProperty m_mcAbilityFrame[0x2]; // 0x524
	ObjectProperty m_mcAbilityImage[0x2]; // 0x534
	ObjectProperty m_mcPotion[0x2]; // 0x544
	ObjectProperty m_mcPotionIcon[0x2]; // 0x554
	ObjectProperty m_mcPotionLine[0x2]; // 0x564
	ObjectProperty m_mcPotionDrop[0x2]; // 0x574
	ObjectProperty m_mcPotionName[0x2]; // 0x584
	ObjectProperty m_mcPotionType[0x2]; // 0x594
	ObjectProperty m_mcPotionDesc[0x2]; // 0x5a4
	ObjectProperty m_mcPotionCount[0x2]; // 0x5b4
	ObjectProperty m_scOpen; // 0x5c4
};

struct UTgAIBehaviorCondition_HasEffectCategory {
	int32_t EffectCategoryId; // 0x98
	int32_t EffectGroupId; // 0x9c
};

struct UTgGameDC_Team {
	int32_t m_nTaskForce; // 0x16c
	ObjectProperty m_Members[0x5]; // 0x170
	int32_t m_nMaxMemberCount; // 0x198
	ObjectProperty m_Guardian; // 0x19c
	ObjectProperty m_Towers[0x9]; // 0x1a4
	ObjectProperty m_SurrenderTimer; // 0x1ec
};

struct UParticleModuleMaterialByParameter {
	TArray<FName> MaterialParameters; // 0x68
	TArray<ObjectProperty> DefaultMaterials; // 0x78
};

struct UNavMeshPathConstraint {
	ObjectProperty NextConstraint; // 0x60
	int32_t NumNodesProcessed; // 0x68
	int32_t NumThrownOutNodes; // 0x6c
	float AddedDirectCost; // 0x70
	float AddedHeuristicCost; // 0x74
};

struct USeqEvent_RemoteEvent {
	FName EventName; // 0x128
	char bStatusIsOk : 1; // 0x130
};

struct UTgIconManager {
	FMap_Mirror m_GFxReferenceToIconDetailsMap; // 0x60
	FMultiMap_Mirror m_ItemIdToIconGroupMap; // 0xa8
};

struct UInterpTrackAnimControl {
	TArray<ObjectProperty> AnimSets; // 0xb8
	FName SlotName; // 0xc8
	TArray<FAnimControlTrackKey> AnimSeqs; // 0xd0
	char bEnableRootMotion : 1; // 0xe0
	char bSkipAnimNotifiers : 1; // 0xe0
};

struct ATgRespawnBeaconBase {
	int32_t m_nMeshAssemblyId; // 0x308
	ComponentProperty m_ActualMeshComponent; // 0x30c
	TArray<ObjectProperty> m_BeaconNodes; // 0x314
	char c_bEnemyMatLoaded : 1; // 0x324
	char m_bShouldShowSilhouetteToFriends : 1; // 0x324
	float m_fDeployTime; // 0x328
};

struct UParticleModuleSpawnPerUnit {
	float UnitScalar; // 0x6c
	FRawDistributionFloat SpawnPerUnit; // 0x70
	char bIgnoreSpawnRateWhenMoving : 1; // 0x94
	char bIgnoreMovementAlongX : 1; // 0x94
	char bIgnoreMovementAlongY : 1; // 0x94
	char bIgnoreMovementAlongZ : 1; // 0x94
	float MovementTolerance; // 0x98
	float MaxFrameDistance; // 0x9c
	float MinFrameDistance; // 0xa0
};

struct UParticleModuleSourceMovement {
	FRawDistributionVector SourceMovementScale; // 0x68
};

struct UAnimNodeRandom {
	TArray<FRandomAnimInfo> RandomInfo; // 0x144
	ObjectProperty PlayingSeqNode; // 0x154
	int32_t PendingChildIndex; // 0x15c
	char bPickedPendingChildIndex : 1; // 0x160
};

struct UInterpFilter {
	FString Caption; // 0x60
};

struct ATgRepInfo_Game_RoyaleStorm {
	int32_t r_nTickets[0x2]; // 0x744
	FVector r_vCanyonOrigin; // 0x74c
	float r_fCanyonDirection; // 0x758
	float r_fCanyonWidth; // 0x75c
	float r_fConvergeWidth1; // 0x760
	float r_fConvergeWidth2; // 0x764
};

struct ATgDeploy_ChurchillShield {
	float m_fMinPitch; // 0x44c
};

struct UTgAIBehaviorAction_TargetNearestItem {
	char CheckLOS : 1; // 0x94
};

struct UTgSkelCon_ClockworkSpinner {
	float m_fInterpTime; // 0x100
	float m_fRemainingInterpTime; // 0x104
	float m_fPauseTime; // 0x108
	float m_fRemainingPauseTime; // 0x10c
	EAxis RotationAxis; // 0x110
	int32_t DeltaRotation; // 0x114
	float m_fInterpRotation; // 0x118
	char bLimitedRotation : 1; // 0x11c
	char bForward : 1; // 0x11c
	char m_bResetRotationOnZeroStrength : 1; // 0x11c
	float m_fRotationMin; // 0x120
	float m_fRotationMax; // 0x124
	float m_fResetInterpTime; // 0x128
	float m_fResetPauseTime; // 0x12c
	float m_fResetRotation; // 0x130
	float m_fRotatorMin; // 0x134
	float m_fRotatorMax; // 0x138
	float RotationsPerSecond; // 0x13c
	float ResetRotationsPerSecond; // 0x140
};

struct ARadialBlurActor {
	ComponentProperty RadialBlur; // 0x280
};

struct UTgAIBehaviorComposite {
	TArray<ObjectProperty> Children; // 0x94
	TArray<int32_t> ChildrenIndices; // 0xa4
	char bCompleteOnAll : 1; // 0xb4
	char bFailsOnAll : 1; // 0xb4
	char bRetryFailedChild : 1; // 0xb4
	char bFixedChildrenSize : 1; // 0xb4
};

struct UTgSettingsManager {
	TMap<None, None> m_Sets; // 0x60
	TArray<ObjectProperty> m_Settings; // 0xa8
	TArray<FTgKeyCommand> m_Commands; // 0xb8
};

struct UTgSeqAct_ProgressTo {
	ObjectProperty m_Instigator; // 0x134
};

struct UParticleModuleLocationPrimitiveCylinder {
	char RadialVelocity : 1; // 0xb4
	char bAdjustForWorldSpace : 1; // 0xb4
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xdc
	CylinderHeightAxis HeightAxis; // 0x100
};

struct UOnlineNewsInterfaceMcp {
	TArray<FNewsCacheEntry> NewsItems; // 0x80
	TArray<DelegateProperty> ReadNewsDelegates; // 0x90
	char bNeedsTicking : 1; // 0xa0
	DelegateProperty __OnReadNewsCompleted__Delegate; // 0xa4
};

struct UTgSeqAct_TriggerBots {
	char bUseDestination : 1; // 0x108
	ObjectProperty TargetActor; // 0x10c
	ObjectProperty destActor; // 0x114
};

struct UApexAsset {
	FString OriginalApexName; // 0x60
	TArray<ComponentProperty> ApexComponents; // 0x70
};

struct ATgNavigationPoint {
	int32_t m_nMapObjectId; // 0x378
	float m_fLastSpawnedTime; // 0x37c
};

struct AHavokNavMeshActor {
	char bNavMeshLoaded : 1; // 0x280
	char DrawTraversalAnalysis : 1; // 0x280
	char DrawNavMeshEdges : 1; // 0x280
	char DrawNavMeshUserEdges : 1; // 0x280
	char DrawNavMeshFaces : 1; // 0x280
	char DrawCluster : 1; // 0x280
	char DrawFaceToClusterLines : 1; // 0x280
	char FixupOverlappingTriangles : 1; // 0x280
	char IncludeUserEdgesInClusters : 0; // 0x280
	char ShrinkNavMeshByCharacterWidth : 0; // 0x280
	char MultithreadGeneration : 0; // 0x280
	char UseAdaptiveSplit : 0; // 0x280
	char UseSimplification : 0; // 0x280
	char PreserveVerticalBorderRegions : 0; // 0x280
	char BorderPreservationTolerance : 0; // 0x280
	char bAnalyzeDropDowns : 0; // 0x280
	char bAnalyzeJumps : 0; // 0x280
	ComponentProperty EditorSprite; // 0x284
	ComponentProperty RenderingComponent; // 0x28c
	FUntypedBulkData_Mirror NavMeshData; // 0x294
	FPointer HavokWorld; // 0x2d4
	ObjectProperty HavokGrid; // 0x2dc
	EHavokVersion Version; // 0x2e4
	FVector DrawClusterOffset; // 0x2e8
	FVector SingleCarverAABBMin; // 0x2f4
	FVector SingleCarverAABBMax; // 0x300
	int32_t MaxSplits; // 0x30c
	int32_t NumXSplits; // 0x310
	int32_t NumYSplits; // 0x314
	int32_t DesiredFacesPerCluster; // 0x318
	float MaxBorderDistanceError; // 0x31c
	float MaxPartitionHeightError; // 0x320
	float MinRegionArea; // 0x324
	float MinDistanceToSeed; // 0x328
	float MaxWalkableSlope; // 0x32c
	float MaxWalkableSlopeTerrain; // 0x330
	float EntityHalfHeight; // 0x334
	float StartingHeightOffset; // 0x338
	float MaxStepHeight; // 0x33c
	float MaxPolyHeight; // 0x340
	float HeightMergeThreshold; // 0x344
	float MinRadius; // 0x348
	float MaxRadius; // 0x34c
	float MaxDropHeight; // 0x350
	float MaxUnderhang; // 0x354
	float DropDownCost; // 0x358
	float MaxJumpHeight; // 0x35c
	float StandardJumpHeight; // 0x360
	float StandardJumpDistance; // 0x364
	float JumpCost; // 0x368
};

struct UInterpTrackInstFloatParticleParam {
	float ResetFloat; // 0x60
};

struct ANxForceFieldTornado {
	ObjectProperty Shape; // 0x2d4
	ComponentProperty DrawComponent; // 0x2dc
	float RadialStrength; // 0x2e4
	float RotationalStrength; // 0x2e8
	float LiftStrength; // 0x2ec
	float ForceRadius; // 0x2f0
	float ForceTopRadius; // 0x2f4
	float LiftFalloffHeight; // 0x2f8
	float EscapeVelocity; // 0x2fc
	float ForceHeight; // 0x300
	float HeightOffset; // 0x304
	char BSpecialRadialForceMode : 1; // 0x308
	float SelfRotationStrength; // 0x30c
	FPointer Kernel; // 0x310
};

struct AVolume {
	ObjectProperty AssociatedActor; // 0x2b0
	char bForcePawnWalk : 1; // 0x2b8
	char bProcessAllActors : 1; // 0x2b8
	char bExcludeNavmesh : 1; // 0x2b8
	char bPawnsOnly : 1; // 0x2b8
	char bLocalPawnsOnly : 1; // 0x2b8
};

struct UTgAIBehaviorCondition_InsideDeviceVolume {
	int32_t DeviceID; // 0x98
	char bMustBeEnemy : 1; // 0x9c
};

struct UMobileMenuLabel {
	FString Caption; // 0xdc
	ObjectProperty TextFont; // 0xec
	FColor TextColor; // 0xf4
	FColor TouchedColor; // 0xf8
	float TextXScale; // 0xfc
	float TextYScale; // 0x100
	char bAutoSize : 1; // 0x104
};

struct ATgDevice_Stealth {
	char m_bIsInCombat : 1; // 0xaec
	char m_bCanFireInCombat : 1; // 0xaec
};

struct UTgAIBehaviorAction_SetBotBehaviorState {
	EBotBehaviorState DesiredBehaviorState; // 0x94
};

struct UTgAIBehaviorCondition_IsLookingAtCombatTarget {
	float VisibilityAngle; // 0x98
};

struct UUIDataEsportsEventTeam {
	ObjectProperty pEvent; // 0x60
	ObjectProperty pTeam; // 0x68
	Fdword dwEventTeamId; // 0x70
	Fdword dwWins; // 0x74
	Fdword dwLosses; // 0x78
	int32_t nSeed; // 0x7c
};

struct UTgSkelCon_Limb {
	ObjectProperty m_PawnOwner; // 0x12c
};

struct UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0xa0
	float CurveTension; // 0xb4
};

struct UTgAIBehaviorCondition_Energy {
	float energy; // 0x98
};

struct UAnimNotify_CameraEffect {
	AEmitterCameraLensEffectBase* CameraLensEffect; // 0x68
};

struct USeqEvent_MobileObjectPicker {
	float TraceDistance; // 0x13c
	char bCheckonTouch : 1; // 0x140
	FVector FinalTouchLocation; // 0x144
	FVector FinalTouchNormal; // 0x150
	ObjectProperty FinalTouchObject; // 0x15c
	TArray<ObjectProperty> Targets; // 0x164
};

struct UParticleModuleRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct UTgAnimBlendByChurchillDrone {
	char m_bLeftDrone : 1; // 0x168
};

struct UUISafeFrame {
	ObjectProperty m_mcAdjust; // 0x244
	ObjectProperty m_mcAccept; // 0x24c
};

struct ADynamicPhysicsVolume {
	char bEnabled : 1; // 0x314
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xd8
};

struct AInternetLink {
	ELinkMode LinkMode; // 0x280
	ELineMode InLineMode; // 0x281
	ELineMode OutLineMode; // 0x282
	EReceiveMode ReceiveMode; // 0x283
	FPointer Socket; // 0x284
	int32_t Port; // 0x28c
	FPointer RemoteSocket; // 0x290
	FPointer PrivateResolveInfo; // 0x298
	int32_t DataPending; // 0x2a0
};

struct UTgSeqEvent_Named {
	TSE_NAME NamedEvent; // 0x128
};

struct UTgAIBehaviorCondition_DeviceReadyToUse {
	TG_EQUIP_POINT DeviceSlot; // 0x98
};

struct ATgIdol {
	int32_t r_nDefenderTaskForce; // 0x280
	ObjectProperty m_Holder; // 0x284
	ObjectProperty r_HolderPRI; // 0x28c
	ObjectProperty m_OldHolder; // 0x294
};

struct UUIComponent_TitlesViewEntry {
	int32_t m_nTitleId; // 0x140
	ObjectProperty m_mcRarityText; // 0x144
	ObjectProperty m_mcColorBlock; // 0x14c
	ObjectProperty m_mcFade; // 0x154
	ObjectProperty m_mcTitle; // 0x15c
	ObjectProperty m_mcLockIcon; // 0x164
	ObjectProperty m_mcEquipped; // 0x16c
	ObjectProperty m_scEquip; // 0x174
	ObjectProperty m_scUnequip; // 0x17c
	ObjectProperty m_scNotOwned; // 0x184
};

struct UNavMeshGoal_OutOfViewFrom {
	FPointer GoalPoly; // 0x7c
	FVector OutOfViewLocation; // 0x84
	char bShowDebug : 1; // 0x90
};

struct UTgSubtitledMessages {
	FQueuedSubtitle CurrentSubtitle; // 0x60
	TArray<FQueuedSubtitle> QueuedSubtitles; // 0x84
	ObjectProperty OwnerPC; // 0x94
	ComponentProperty PlayingSubtitleAC; // 0x9c
	char bFinishedSubtitle : 1; // 0xa4
	float SubtitleFailsafeTime; // 0xa8
};

struct ATgAIController_BehaviorGodDisconnected {
	char bInitialController : 1; // 0x93c
};

struct UNavMeshGoal_ClosestActorInList {
	TArray<FBiasedGoalActor> GoalList; // 0x7c
	FMultiMap_Mirror PolyToGoalActorMap; // 0x8c
	FPointer CachedAnchorPoly; // 0xd4
};

struct UTgInventoryObject_Listen_DeployOnDeployable {
	TArray<int32_t> m_ValidDeployableIds; // 0xc8
};

struct USkyLightComponent {
	float LowerBrightness; // 0x1a4
	FColor LowerColor; // 0x1a8
};

struct ATgSplineActor {
	ELanePusherActionPoint m_ActionPoint; // 0x2e8
	char m_bPreview : 1; // 0x2ec
};

struct UActorFactoryVehicle {
	AVehicle* VehicleClass; // 0x9c
};

struct USceneCapturePortalComponent {
	ObjectProperty TextureTarget; // 0xd0
	float ScaleFOV; // 0xd8
	ObjectProperty ViewDestination; // 0xdc
};

struct UParticleModuleColor {
	FRawDistributionVector StartColor; // 0x68
	FRawDistributionFloat StartAlpha; // 0x8c
	char bClampAlpha : 1; // 0xb0
};

struct ASVehicle {
	ComponentProperty SimObj; // 0x628
	TArray<ComponentProperty> Wheels; // 0x630
	FVector COMOffset; // 0x640
	FVector InertiaTensorMultiplier; // 0x64c
	char bStayUpright : 1; // 0x658
	char bUseSuspensionAxis : 1; // 0x658
	char bUpdateWheelShapes : 1; // 0x658
	char bVehicleOnGround : 1; // 0x658
	char bVehicleOnWater : 1; // 0x658
	char bIsInverted : 1; // 0x658
	char bChassisTouchingGround : 1; // 0x658
	char bWasChassisTouchingGroundLastTick : 1; // 0x658
	char bCanFlip : 0; // 0x658
	char bFlipRight : 0; // 0x658
	char bIsUprighting : 0; // 0x658
	char bOutputHandbrake : 0; // 0x658
	char bHoldingDownHandbrake : 0; // 0x658
	float StayUprightRollResistAngle; // 0x65c
	float StayUprightPitchResistAngle; // 0x660
	float StayUprightStiffness; // 0x664
	float StayUprightDamping; // 0x668
	ObjectProperty StayUprightConstraintSetup; // 0x66c
	ObjectProperty StayUprightConstraintInstance; // 0x674
	float HeavySuspensionShiftPercent; // 0x67c
	float MaxSpeed; // 0x680
	float MaxAngularVelocity; // 0x684
	float TimeOffGround; // 0x688
	float UprightLiftStrength; // 0x68c
	float UprightTorqueStrength; // 0x690
	float UprightTime; // 0x694
	float UprightStartTime; // 0x698
	ComponentProperty EngineSound; // 0x69c
	ComponentProperty SquealSound; // 0x6a4
	ObjectProperty CollisionSound; // 0x6ac
	ObjectProperty EnterVehicleSound; // 0x6b4
	ObjectProperty ExitVehicleSound; // 0x6bc
	float CollisionIntervalSecs; // 0x6c4
	float SquealThreshold; // 0x6c8
	float SquealLatThreshold; // 0x6cc
	float LatAngleVolumeMult; // 0x6d0
	float EngineStartOffsetSecs; // 0x6d4
	float EngineStopOffsetSecs; // 0x6d8
	float LastCollisionSoundTime; // 0x6dc
	float OutputBrake; // 0x6e0
	float OutputGas; // 0x6e4
	float OutputSteering; // 0x6e8
	float OutputRise; // 0x6ec
	float ForwardVel; // 0x6f0
	int32_t NumPoweredWheels; // 0x6f4
	FVector BaseOffset; // 0x6f8
	float CamDist; // 0x704
	int32_t DriverViewPitch; // 0x708
	int32_t DriverViewYaw; // 0x70c
	FVehicleState VState; // 0x710
	float AngErrorAccumulator; // 0x760
	float RadialImpulseScaling; // 0x764
};

struct ULightEnvironmentComponent {
	char bEnabled : 1; // 0x88
	char bForceNonCompositeDynamicLights : 1; // 0x88
	char bAllowDynamicShadowsOnTranslucency : 1; // 0x88
	char bAllowPreShadow : 1; // 0x88
	char bTranslucencyShadowed : 1; // 0x88
	float DominantShadowFactor; // 0x8c
	ComponentProperty AffectingDominantLight; // 0x90
	TArray<ComponentProperty> AffectedComponents; // 0x98
};

struct UMobileMenuInventory {
	TArray<ObjectProperty> Slots; // 0xdc
	TArray<ObjectProperty> Items; // 0xec
	float SideLeewayPercent; // 0xfc
	FRenderElementInfo CurrentElement; // 0x100
	FDragElementInfo Drag; // 0x108
	FVector2D ScaleSize; // 0x130
	char bRenderDragItem : 1; // 0x138
	DelegateProperty __OnUpdateItemInSlot__Delegate; // 0x13c
	DelegateProperty __DoCanPutItemInSlot__Delegate; // 0x14c
	DelegateProperty __OnUpdateDrag__Delegate; // 0x15c
};

struct UTgSeqAct_GetPlayerCount {
	int32_t m_nTaskForce; // 0x108
	float m_fPlayerCount; // 0x10c
	float m_fAssaultCount; // 0x110
	float m_fMedicCount; // 0x114
	float m_fReconCount; // 0x118
	float m_fRoboticsCount; // 0x11c
};

struct ATgSpawnGate {
	ESpawnGateType m_eSpawnGateType; // 0x2c4
	ObjectProperty m_StandardEmitter; // 0x2c8
	ObjectProperty m_TeamColoredEmitter; // 0x2d0
	char m_bStartActive : 1; // 0x2d8
	char m_bGateOpen : 1; // 0x2d8
	int32_t m_nCurrentTaskforce; // 0x2dc
};

struct UArrowComponent {
	FColor ArrowColor; // 0x24c
	float ArrowSize; // 0x250
	char bTreatAsASprite : 1; // 0x254
};

struct AFracturedStaticMeshActor {
	int32_t MaxPartsToSpawnAtOnce; // 0x280
	ComponentProperty FracturedStaticMeshComponent; // 0x284
	ComponentProperty SkinnedComponent; // 0x28c
	TArray<int32_t> ChunkHealth; // 0x294
	char bHasShownMissingSoundWarning : 1; // 0x2a4
	char bBreakChunksOnActorTouch : 1; // 0x2a4
	char bShouldSaveForCheckpoint : 1; // 0x2a4
	TArray<UDamageType*> FracturedByDamageType; // 0x2a8
	float ChunkHealthScale; // 0x2b8
	TArray<ObjectProperty> OverrideFragmentDestroyEffects; // 0x2bc
	float FractureCullMinDistance; // 0x2cc
	float FractureCullMaxDistance; // 0x2d0
	TArray<FDeferredPartToSpawn> DeferredPartsToSpawn; // 0x2d4
	FPhysEffectInfo PartImpactEffect; // 0x2e4
	ObjectProperty ExplosionFractureSound; // 0x2fc
	ObjectProperty SingleChunkFractureSound; // 0x304
	ObjectProperty MI_LoseChunkPreviousMaterial; // 0x30c
};

struct ATgDevice_OppressorMine {
	TArray<ObjectProperty> m_NewTargetSFXRecentTargets; // 0xaec
	TArray<float> m_NewTargetSFXTargetTime; // 0xafc
	float m_fMinNewTargetSFXDelay; // 0xb0c
};

struct UTgAIBehaviorAction_MoveToCapturePoint {
	ESelectionArbitrator Arbitrator; // 0x9c
	char bTeleport : 1; // 0xa0
};

struct UTgInvListener_RedirectDamageToDeployables {
	TArray<ObjectProperty> m_ActiveDeployables; // 0xc8
};

struct UTgInventoryObject_Listen_Combo_Pip {
	TArray<ObjectProperty> m_Projectiles; // 0xd0
	TArray<FVector> m_SpawnLocations; // 0xe0
	TArray<ObjectProperty> m_MarkedTargetsFlask; // 0xf0
	TArray<float> m_fMarkedTimesFlask; // 0x100
};

struct ATgDeploy_DreadSerpent {
	TArray<ObjectProperty> s_HitActors; // 0x47c
};

struct UUIHudTop {
	int32_t m_nDirection; // 0x244
	int32_t m_nPerkCount; // 0x248
	int32_t m_nStartTime; // 0x24c
	int32_t m_nDeployTime; // 0x250
	int32_t m_nDebuffCount; // 0x254
	int32_t m_nPrepareTime; // 0x258
	int32_t m_nPlayersAlive; // 0x25c
	char m_bShowAlert : 1; // 0x260
	float m_fRotMax; // 0x264
	float m_fTickMaxY; // 0x268
	float m_fTickMinY; // 0x26c
	float m_fTickMinX; // 0x270
	float m_fTickMaxX; // 0x274
	float m_fModifierX; // 0x278
	float m_fModifierY; // 0x27c
	float m_fPerkTimer; // 0x280
	float m_fAliveTimer; // 0x284
	int32_t m_nEffectGroup[0x10]; // 0x288
	int32_t m_nTickets[0x2]; // 0x2c8
	TArray<int32_t> m_nPerkQueue; // 0x2d0
	ObjectProperty m_mcAlert; // 0x2e0
	ObjectProperty m_mcAlertTitle; // 0x2e8
	ObjectProperty m_mcAlertSubtitle; // 0x2f0
	ObjectProperty m_mcRemaining; // 0x2f8
	ObjectProperty m_mcDeploy; // 0x300
	ObjectProperty m_mcDeployTime; // 0x308
	ObjectProperty m_mcDeployPrompt; // 0x310
	ObjectProperty m_mcCompass; // 0x318
	ObjectProperty m_mcCompassCurrentPos; // 0x320
	ObjectProperty m_mcCompassWaypointSafety; // 0x328
	ObjectProperty m_mcCompassText[0x18]; // 0x330
	ObjectProperty m_mcCompassTicks[0x18]; // 0x3f0
	ObjectProperty m_mcWaypoints[0x6]; // 0x4b0
	ObjectProperty m_mcRealmWars; // 0x4e0
	ObjectProperty m_mcRealmWarsTip[0x2]; // 0x4e8
	ObjectProperty m_mcRealmWarsBar[0x2]; // 0x4f8
	ObjectProperty m_mcRealmWarsScore[0x2]; // 0x508
	ObjectProperty m_mcRealmWarsChange[0x2]; // 0x518
	ObjectProperty m_mcRealmWarsRemain[0x2]; // 0x528
	ObjectProperty m_mcRealmWarsAlliance[0x2]; // 0x538
	FUITEAMMATE m_Teammate[0x6]; // 0x548
	ObjectProperty m_mcDebuff[0x3]; // 0xbf0
	ObjectProperty m_mcDebuffTF[0x3]; // 0xc08
	ObjectProperty m_mcDebuffIcon[0x3]; // 0xc20
	ObjectProperty m_mcDebuffTimer[0x3]; // 0xc38
	ObjectProperty m_mcDebuffTimerBar[0x3]; // 0xc50
	ObjectProperty m_mcPerk; // 0xc68
	ObjectProperty m_mcPerkIcon; // 0xc70
	ObjectProperty m_mcPerkName; // 0xc78
	ObjectProperty m_mcPerkDesc; // 0xc80
	ObjectProperty m_mcPerkFrame; // 0xc88
	FUniqueNetId m_LocalPlayerNetId; // 0xc90
};

struct UUISocial {
	int32_t m_nPage; // 0x244
	int32_t m_nPartySize; // 0x248
	char m_bAllowInvite : 1; // 0x24c
	char m_bSearching : 1; // 0x24c
	char m_eTabState; // 0x250
	char m_ePopupState; // 0x251
	float m_fFadeTime; // 0x254
	float m_fFadeTimer; // 0x258
	float m_fSearchTime; // 0x25c
	float m_fUpdateTime; // 0x260
	float m_fSearchTimer; // 0x264
	float m_fUpdateTimer; // 0x268
	ObjectProperty m_pPopupPlayer; // 0x26c
	ObjectProperty m_mcHeader; // 0x274
	ObjectProperty m_mcHeaderActive; // 0x27c
	ObjectProperty m_mcHeaderKey[0x2]; // 0x284
	ObjectProperty m_mcHeaderTab[0x2]; // 0x294
	ObjectProperty m_mcHeaderTabCTA[0x2]; // 0x2a4
	ObjectProperty m_mcHeaderTabLine[0x2]; // 0x2b4
	ObjectProperty m_mcHeaderTabBounds[0x2]; // 0x2c4
	ObjectProperty m_mcHeaderTabSelect[0x2]; // 0x2d4
	ObjectProperty m_mcHeaderTabShadow[0x2]; // 0x2e4
	ObjectProperty m_mcHeaderTabHighlight[0x2]; // 0x2f4
	ObjectProperty m_mcParty; // 0x304
	ObjectProperty m_mcPartyAdd; // 0x30c
	ObjectProperty m_mcPartyLeave; // 0x314
	ObjectProperty m_mcPartyPlayer[0x4]; // 0x31c
	ObjectProperty m_mcPartyPlayerDesc[0x4]; // 0x33c
	ObjectProperty m_mcPartyPlayerName[0x4]; // 0x35c
	ObjectProperty m_mcPartyPlayerType[0x4]; // 0x37c
	ObjectProperty m_mcPartyPlayerIcon[0x4]; // 0x39c
	ObjectProperty m_mcPartyPlayerLogo[0x4]; // 0x3bc
	ObjectProperty m_mcPartyPlayerFrame[0x4]; // 0x3dc
	ObjectProperty m_mcPartyPlayerTexture[0x4]; // 0x3fc
	ObjectProperty m_mcPartyPlayerHighlight[0x4]; // 0x41c
	ObjectProperty m_mcPlayers; // 0x43c
	ObjectProperty m_mcPlayerAdd; // 0x444
	ObjectProperty m_mcPlayerPage; // 0x44c
	ObjectProperty m_mcPlayerSearch; // 0x454
	ObjectProperty m_mcPlayerKeys[0x2]; // 0x45c
	ObjectProperty m_mcPlayerArrows[0x2]; // 0x46c
	ObjectProperty m_mcPlayerButton[0x12]; // 0x47c
	ObjectProperty m_mcPlayerButtonDesc[0x12]; // 0x50c
	ObjectProperty m_mcPlayerButtonIcon[0x12]; // 0x59c
	ObjectProperty m_mcPlayerButtonLogo[0x12]; // 0x62c
	ObjectProperty m_mcPlayerButtonName[0x12]; // 0x6bc
	ObjectProperty m_mcPlayerButtonFrame[0x12]; // 0x74c
	ObjectProperty m_mcPlayerButtonTexture[0x12]; // 0x7dc
	ObjectProperty m_mcPlayerButtonHighlight[0x12]; // 0x86c
	ObjectProperty m_mcPopupSearch; // 0x8fc
	ObjectProperty m_mcPopupSearchBack; // 0x904
	ObjectProperty m_mcPopupSearchName; // 0x90c
	ObjectProperty m_mcPopupSearchDesc; // 0x914
	ObjectProperty m_mcPopupSearchInput; // 0x91c
	ObjectProperty m_mcPopupSearchAccept; // 0x924
	ObjectProperty m_mcPopupPlayer; // 0x92c
	ObjectProperty m_mcPopupPlayerBack; // 0x934
	ObjectProperty m_mcPopupPlayerName; // 0x93c
	ObjectProperty m_mcPopupPlayerButton[0x4]; // 0x944
	ObjectProperty m_mcBlocker; // 0x964
	ObjectProperty m_pPartyGroup; // 0x96c
	ObjectProperty m_pSearchGroup; // 0x974
	ObjectProperty m_pPlayerGroup; // 0x97c
	ObjectProperty m_pPlayersGroup; // 0x984
	ObjectProperty m_pLeaveAction; // 0x98c
	ObjectProperty m_pInviteAction; // 0x994
	ObjectProperty m_pSearchAction; // 0x99c
};

struct UUIDataStore_OnlineGameSearch {
	FName SearchResultsName; // 0x98
	ObjectProperty OnlineSub; // 0xa0
	TScriptInterface<Class> GameInterface; // 0xa8
	TArray<FGameSearchCfg> GameSearchCfgList; // 0xb8
	int32_t SelectedIndex; // 0xc8
	int32_t ActiveSearchIndex; // 0xcc
};

struct ATgPawn_BarrierTank {
	FWallPlacementInfo m_WallPlacementInfos[0x5]; // 0x310c
	FVector m_vSegmentExtent; // 0x315c
	FVector m_vOpenSpotExtent; // 0x3168
	float m_fWallTraceDownDistance; // 0x3174
	float m_fWallOpenSpotTolerance; // 0x3178
	float m_fInitialWallScaleZ; // 0x317c
	char r_bInGaeBolg : 1; // 0x3180
	char m_bUseGaeBolgRetrieve : 1; // 0x3180
	float m_fGaeBolgJumpZModifier; // 0x3184
	int32_t r_nInhandAmmoRemaining; // 0x3188
};

struct ATgKAsset_ClientSideSim {
	float m_fDamageImpulse; // 0x29c
	ComponentProperty m_Arrow; // 0x2a0
	ComponentProperty m_ForceSprite; // 0x2a8
	char m_bEnableWind : 1; // 0x2b0
	char m_bEnableGusts : 1; // 0x2b0
	char bAnimates : 1; // 0x2b0
	float m_fWindForceMin; // 0x2b4
	float m_fWindForceMax; // 0x2b8
	float m_fWindForceStrength; // 0x2bc
	float m_fWindForceTargetStrength; // 0x2c0
	float m_fWindFrequency; // 0x2c4
	float m_fWindForceRemainingTime; // 0x2c8
	FVector m_vWindDirection; // 0x2cc
	float m_fForceDistance; // 0x2d8
	float m_fForceZOffsetMultiplier; // 0x2dc
	float m_fGustActiveTime; // 0x2e0
	FVector2D m_vTimeBetweenGusts; // 0x2e4
	float m_fGustActiveRemainingTime; // 0x2ec
	float m_fTimeTillNextGust; // 0x2f0
	FVector2D m_WindFrequencyMultiplier; // 0x2f4
	FVector2D m_WindForceMultiplier; // 0x2fc
};

struct AController {
	FPointer VfTable_IInterface_NavigationHandle; // 0x280
	ObjectProperty Pawn; // 0x288
	ObjectProperty PlayerReplicationInfo; // 0x290
	int32_t PlayerNum; // 0x298
	ObjectProperty NextController; // 0x29c
	char bIsPlayer : 1; // 0x2a4
	char bGodMode : 1; // 0x2a4
	char bSoaking : 1; // 0x2a4
	char bSlowerZAcquire : 1; // 0x2a4
	char bNotifyPostLanded : 1; // 0x2a4
	char bNotifyApex : 1; // 0x2a4
	char bOverrideSearchStart : 1; // 0x2a4
	char bAdvancedTactics : 1; // 0x2a4
	char bCanDoSpecial : 0; // 0x2a4
	char bAdjusting : 0; // 0x2a4
	char bPreparingMove : 0; // 0x2a4
	char bForceStrafe : 0; // 0x2a4
	char bLOSflag : 0; // 0x2a4
	char bSkipExtraLOSChecks : 0; // 0x2a4
	char bNotifyFallingHitWall : 0; // 0x2a4
	char bEarlyOutOfSighTestsForSameType : 0; // 0x2a4
	char bPreciseDestination : 0; // 0x2a4
	char bSeeFriendly : 0; // 0x2a4
	char bUsingPathLanes : 0; // 0x2a4
	char bFire; // 0x2a8
	char bAltFire; // 0x2a9
	EStunType m_eCurrentStunType; // 0x2aa
	float MinHitWall; // 0x2ac
	UNavigationHandle* NavigationHandleClass; // 0x2b0
	ObjectProperty NavigationHandle; // 0x2b8
	FVector OverrideSearchStart; // 0x2c0
	float MoveTimer; // 0x2cc
	ObjectProperty MoveTarget; // 0x2d0
	FBasedPosition DestinationPosition; // 0x2d8
	FBasedPosition FocalPosition; // 0x310
	ObjectProperty Focus; // 0x348
	ObjectProperty GoalList[0x4]; // 0x350
	FBasedPosition AdjustPosition; // 0x370
	ObjectProperty StartSpot; // 0x3a8
	TArray<ObjectProperty> RouteCache; // 0x3b0
	ObjectProperty CurrentPath; // 0x3c0
	ObjectProperty NextRoutePath; // 0x3c8
	FVector CurrentPathDir; // 0x3d0
	ObjectProperty RouteGoal; // 0x3dc
	float RouteDist; // 0x3e4
	float LastRouteFind; // 0x3e8
	ObjectProperty PendingMover; // 0x3ec
	ObjectProperty FailedMoveTarget; // 0x3f4
	int32_t MoveFailureCount; // 0x3fc
	float GroundPitchTime; // 0x400
	ObjectProperty ShotTarget; // 0x404
	ObjectProperty LastFailedReach; // 0x40c
	float FailedReachTime; // 0x414
	FVector FailedReachLocation; // 0x418
	float SightCounter; // 0x424
	float SightCounterInterval; // 0x428
	float InUseNodeCostMultiplier; // 0x42c
	int32_t HighJumpNodeCostModifier; // 0x430
	float MaxMoveTowardPawnTargetTime; // 0x434
	ObjectProperty Enemy; // 0x438
	TArray<FVisiblePortalInfo> VisiblePortals; // 0x440
	float LaneOffset; // 0x450
	FRotator OldBasedRotation; // 0x454
	FVector NavMeshPath_SearchExtent_Modifier; // 0x460
	float NavMeshPath_SearchHierachicalMinDistance; // 0x46c
};

struct UDrawCylinderComponent {
	FColor CylinderColor; // 0x24c
	ObjectProperty CylinderMaterial; // 0x250
	float CylinderRadius; // 0x258
	float CylinderTopRadius; // 0x25c
	float CylinderHeight; // 0x260
	float CylinderHeightOffset; // 0x264
	int32_t CylinderSides; // 0x268
	char bDrawWireCylinder : 1; // 0x26c
	char bDrawLitCylinder : 1; // 0x26c
	char bDrawOnlyIfSelected : 1; // 0x26c
};

struct UParticleModuleAttractorBoneSocket {
	EBoneSocketAttractorFalloffType FalloffType; // 0x68
	ELocationBoneSocketDestination DestinationType; // 0x69
	ELocationBoneSocketDestSelectionMethod SelectionMethod; // 0x6a
	char bParticleLifeRelative : 1; // 0x6c
	char bAttractAlongLengthOfBone : 1; // 0x6c
	FRawDistributionFloat FalloffExponent; // 0x70
	FRawDistributionFloat Range; // 0x94
	FRawDistributionFloat Strength; // 0xb8
	FRawDistributionFloat CollisionRadius; // 0xdc
	FRawDistributionFloat DragCoefficient; // 0x100
	FRawDistributionFloat DragRadius; // 0x124
	FVector UniversalOffset; // 0x148
	TArray<FAttractLocationBoneSocketInfo> SourceLocations; // 0x154
	FName SkelMeshActorParamName; // 0x164
};

struct ULevelStreaming {
	FName PackageName; // 0x60
	ObjectProperty LoadedLevel; // 0x68
	FVector Offset; // 0x70
	FMatrix LevelTransform; // 0x80
	FVector OldOffset; // 0xc0
	char bIsVisible : 1; // 0xcc
	char bHasLoadRequestPending : 1; // 0xcc
	char bHasUnloadRequestPending : 1; // 0xcc
	char bShouldBeVisibleInEditor : 1; // 0xcc
	char bBoundingBoxVisible : 1; // 0xcc
	char bLocked : 1; // 0xcc
	char bIsFullyStatic : 1; // 0xcc
	char bShouldBeLoaded : 1; // 0xcc
	char bShouldBeVisible : 0; // 0xcc
	char bShouldBlockOnLoad : 0; // 0xcc
	char bDrawOnLevelStatusMap : 0; // 0xcc
	char bIsRequestingUnloadAndRemoval : 0; // 0xcc
	char bClientSideLevel : 0; // 0xcc
	FColor DrawColor; // 0xd0
	TArray<ObjectProperty> EditorStreamingVolumes; // 0xd4
	float MinTimeBetweenVolumeUnloadRequests; // 0xe4
	float LastVolumeUnloadRequestTime; // 0xe8
	ObjectProperty EditorGridVolume; // 0xec
	int32_t GridPosition[0x3]; // 0xf4
};

struct UParticleModuleMeshRotationRateOverLife {
	FRawDistributionVector RotRate; // 0x68
	char bScaleRotRate : 1; // 0x8c
};

struct UTgSeqAct_PauseSetupTimer {
	char PauseImmediately : 1; // 0x108
	float PauseAtTimeRemaining; // 0x10c
};

struct ATgDevice_BarrierTankInhand {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
	ObjectProperty m_CachedBarrierTankPawn; // 0xaf4
	FVector m_vProjectileSpawnOffset2; // 0xafc
	FVector m_vProjectileSpawnOffset3; // 0xb08
	DelegateProperty __InterruptFiringDelegate__Delegate; // 0xb14
};

struct UUISubtitle {
	float m_fTimer; // 0x244
	float m_fSwitchTimer; // 0x248
	FString m_sNewSubtitle; // 0x24c
	ObjectProperty m_mcText; // 0x25c
	ObjectProperty m_mcFrame; // 0x264
};

struct UTgAIBehaviorTree {
	ObjectProperty ChildNode; // 0x94
	TArray<ObjectProperty> SensorNodes; // 0x9c
	TArray<ObjectProperty> UtilitySets; // 0xac
};

struct UTgInventoryObject {
	FInventoryData m_InventoryData; // 0x60
	int32_t m_nRefData; // 0x88
	ObjectProperty m_InvManager; // 0x8c
	char m_bTemporary : 1; // 0x94
	EReplicatedState s_ReplicatedState; // 0x98
	FPointer m_pAmItem; // 0x9c
	int32_t c_nNbrAcquired; // 0xa4
	float c_fTimeAcquired; // 0xa8
};

struct UTgAIBehaviorAction_SelectLaneMoveTargetAsCombatTarget {
	char bSkipPawnNotify : 1; // 0x94
};

struct UTranslationContext {
	TArray<ObjectProperty> TranslatorTags; // 0x60
};

struct UTgAnimNodeBlendList {
	float DefaultBlendTime; // 0x144
	TArray<float> ChildBlendTimes; // 0x148
	TArray<FChildBlendParam> SpecificChildBlendTimes; // 0x158
};

struct UUIComponent_HealFeedEntry {
	ObjectProperty m_mcText; // 0x120
	float m_fRawAmount; // 0x128
	float m_fChangeAmount; // 0x12c
	char m_bHealingReduced : 1; // 0x130
	HealDisplayType m_eHealDisplayType; // 0x134
};

struct USeqAct_Switch {
	int32_t LinkCount; // 0x108
	int32_t IncrementAmount; // 0x10c
	char bLooping : 1; // 0x110
	char bAutoDisableLinks : 1; // 0x110
	TArray<int32_t> Indices; // 0x114
};

struct UActorFactoryApexDestructible {
	char bStartAwake : 1; // 0x9c
	ERBCollisionChannel RBChannel; // 0xa0
	FRBCollisionChannelContainer CollideWithChannels; // 0xa4
	ObjectProperty DestructibleAsset; // 0xa8
};

struct UInterpTrackDirector {
	TArray<FDirectorTrackCut> CutTrack; // 0xa0
	char bSimulateCameraCutsOnClients : 1; // 0xb0
	float fIntroFadeTime; // 0xb4
	float fOutroFadeTime; // 0xb8
};

struct UObject {
	FPointer VfTableObject; // 0x0
	FPointer HashNext; // 0x8
	FQWord ObjectFlags; // 0x10
	FPointer HashOuterNext; // 0x18
	FPointer StateFrame; // 0x20
	ObjectProperty Linker; // 0x28
	FPointer LinkerIndex; // 0x30
	int32_t ObjectInternalInteger; // 0x38
	int32_t NetIndex; // 0x3c
	ObjectProperty Outer; // 0x40
	FName Name; // 0x48
	UObject* Class; // 0x50
	ObjectProperty ObjectArchetype; // 0x58
};

struct UFluidSurfaceComponent {
	ObjectProperty FluidMaterial; // 0x24c
	int32_t LightMapResolution; // 0x254
	FLightmassPrimitiveSettings LightmassSettings; // 0x258
	char EnableSimulation : 1; // 0x274
	char EnableDetail : 1; // 0x274
	char bTiling : 1; // 0x274
	char bPause : 1; // 0x274
	char bShowSimulationNormals : 1; // 0x274
	char bShowSimulationPosition : 1; // 0x274
	char bShowDetailNormals : 1; // 0x274
	char bShowDetailPosition : 1; // 0x274
	char bShowFluidSimulation : 0; // 0x274
	char bShowFluidDetail : 0; // 0x274
	char bTestRipple : 0; // 0x274
	char bTestRippleCenterOnDetail : 0; // 0x274
	int32_t SimulationQuadsX; // 0x278
	int32_t SimulationQuadsY; // 0x27c
	float GridSpacing; // 0x280
	float GridSpacingLowRes; // 0x284
	ObjectProperty TargetSimulation; // 0x288
	float GPUTessellationFactor; // 0x290
	float FluidDamping; // 0x294
	float FluidTravelSpeed; // 0x298
	float FluidHeightScale; // 0x29c
	float FluidUpdateRate; // 0x2a0
	float ForceImpact; // 0x2a4
	float ForceContinuous; // 0x2a8
	float LightingContrast; // 0x2ac
	ObjectProperty TargetDetail; // 0x2b0
	float DeactivationDistance; // 0x2b8
	int32_t DetailResolution; // 0x2bc
	float DetailSize; // 0x2c0
	float DetailDamping; // 0x2c4
	float DetailTravelSpeed; // 0x2c8
	float DetailTransfer; // 0x2cc
	float DetailHeightScale; // 0x2d0
	float DetailUpdateRate; // 0x2d4
	float NormalLength; // 0x2d8
	float TestRippleSpeed; // 0x2dc
	float TestRippleFrequency; // 0x2e0
	float TestRippleRadius; // 0x2e4
	float FluidWidth; // 0x2e8
	float FluidHeight; // 0x2ec
	float TestRippleTime; // 0x2f0
	float TestRippleAngle; // 0x2f4
	float DeactivationTimer; // 0x2f8
	float ViewDistance; // 0x2fc
	FVector SimulationPosition; // 0x300
	FVector DetailPosition; // 0x30c
	TArray<char> ClampMap; // 0x318
	TArray<ObjectProperty> ShadowMaps; // 0x328
	FLightMapRef LightMap; // 0x338
	FPointer FluidSimulation; // 0x340
};

struct ATgDevice_GeometryBarrierTank {
	float r_fTremorsCooldownReduction; // 0xaec
	float m_fCachedWallHealthPercent; // 0xaf0
};

struct UTgSkelCon_OscillateTranslation {
	float OscillationAmplitude; // 0x100
	float OscillationFrequency; // 0x104
	FVector OscillationAxis; // 0x108
	EBoneControlSpace OscillationAxisSpace; // 0x114
	FName OscillationAxisSpaceBoneName; // 0x118
	float Theta; // 0x120
};

struct UUIData_LeagueTierChange {
	ObjectProperty m_League; // 0x60
	ObjectProperty m_PrevTier; // 0x68
	ObjectProperty m_NextTier; // 0x70
	UIDLTC_PromotionType m_ePromotionType; // 0x78
};

struct UTextureFlipBook {
	FPointer VfTable_FTickableObject; // 0x208
	float TimeIntoMovie; // 0x210
	float TimeSinceLastFrame; // 0x214
	float HorizontalScale; // 0x218
	float VerticalScale; // 0x21c
	char bPaused : 1; // 0x220
	char bStopped : 1; // 0x220
	char bLooping : 1; // 0x220
	char bAutoPlay : 1; // 0x220
	int32_t HorizontalImages; // 0x224
	int32_t VerticalImages; // 0x228
	TextureFlipBookMethod FBMethod; // 0x22c
	float FrameRate; // 0x230
	float FrameTime; // 0x234
	int32_t CurrentRow; // 0x238
	int32_t CurrentColumn; // 0x23c
	float RenderOffsetU; // 0x240
	float RenderOffsetV; // 0x244
	FPointer ReleaseResourcesFence; // 0x248
};

struct AGamePlayerController {
	char bWarnCrowdMembers : 1; // 0x76c
	char bDebugCrowdAwareness : 1; // 0x76c
	char bIsWarmupPaused : 1; // 0x76c
	char bEnableMouseCursor : 1; // 0x76c
	float AgentAwareRadius; // 0x770
	FName CurrentSoundMode; // 0x774
};

struct UTgAnimNodeTiltTowardsVelocity {
	FVector2D m_MaximumVelocity; // 0x114
	int32_t m_PitchOffset; // 0x11c
	int32_t m_MaximumPitchOffset; // 0x120
	int32_t m_RollOffset; // 0x124
	int32_t m_MaximumRollOffset; // 0x128
	ObjectProperty m_Pawn; // 0x12c
};

struct UTgEffectDamage_Execute {
	char m_bApplied : 1; // 0xc8
	char m_bExecute : 1; // 0xc8
};

struct UTgSpectatorInput {
	float SpectatorSensitivity; // 0x510
};

struct AGamePawn {
	char bLastHitWasHeadShot : 1; // 0x5a8
	char bRespondToExplosions : 1; // 0x5a8
};

struct USeqEvent_HudRenderText {
	ObjectProperty DisplayFont; // 0x140
	FColor DisplayColor; // 0x148
	FVector DisplayLocation; // 0x14c
	FString DisplayText; // 0x158
	ETextDrawMethod TextDrawMethod; // 0x168
};

struct UGameWaveForms {
	ObjectProperty CameraShakeMediumShort; // 0x60
	ObjectProperty CameraShakeMediumLong; // 0x68
	ObjectProperty CameraShakeBigShort; // 0x70
	ObjectProperty CameraShakeBigLong; // 0x78
};

struct UTgEffectForm_WithMeshes {
	TArray<FEffectMeshInfo> m_EffectMeshInfos; // 0xfc
};

struct UTgParticleSystemComponent {
	ComponentProperty m_AttachedToSkelMesh; // 0x3c8
	char m_bReenableAfterTeleport : 1; // 0x3d0
};

struct USoundNodeLooping {
	char bLoopIndefinitely : 1; // 0x74
	float LoopCountMin; // 0x78
	float LoopCountMax; // 0x7c
	FRawDistributionFloat LoopCount; // 0x80
};

struct UOnlineProfileSettings {
	TArray<int32_t> ProfileSettingIds; // 0x94
	TArray<FOnlineProfileSetting> DefaultSettings; // 0xa4
	TArray<FIdToStringMapping> OwnerMappings; // 0xb4
};

struct ATgDevice_GroverInhand {
	int32_t m_nProjectilesRemaining; // 0xaec
	int32_t m_nProjectileCount; // 0xaf0
	float m_fMultiProjectileDelay; // 0xaf4
};

struct UTgAIBehaviorAction_TargetNearestChest {
	char SeenAsOpen : 1; // 0x94
	char CheckLOS : 1; // 0x94
};

struct UFogVolumeConstantDensityComponent {
	float Density; // 0xe0
};

struct UTgAIBehaviorCondition_AtDropLocation {
	float Tolerance; // 0x98
};

struct UTgAIBehaviorCondition_SiegeScore {
	int32_t ScoreThreshold; // 0x98
	char bMustBeEnemy : 1; // 0x9c
};

struct ATgWeaponMeshActor_Orb {
	float m_fFireGlowFadeTime; // 0x504
	float m_fRemainingGlowFadeTime; // 0x508
};

struct UUIComponent_RankedEOMProgress {
	ObjectProperty m_mcNetTP; // 0x120
	ObjectProperty m_mcCurrentTP; // 0x128
	ObjectProperty m_mcCurrentRank; // 0x130
	ObjectProperty m_mcRankIconPrev; // 0x138
	ObjectProperty m_mcRankIconNext; // 0x140
	ObjectProperty m_pProgress; // 0x148
};

struct UParticleModuleKillHeight {
	FRawDistributionFloat Height; // 0x68
	char bAbsolute : 1; // 0x8c
	char bFloor : 1; // 0x8c
	char bApplyPSysScale : 1; // 0x8c
};

struct UTitleFileDownloadCache {
	TArray<FTitleFileCacheEntry> TitleFiles; // 0x80
	TArray<DelegateProperty> LoadCompleteDelegates; // 0x90
	TArray<DelegateProperty> SaveCompleteDelegates; // 0xa0
	DelegateProperty __OnLoadTitleFileComplete__Delegate; // 0xb0
	DelegateProperty __OnSaveTitleFileComplete__Delegate; // 0xc0
};

struct UTgDeviceForm_Emote {
	TArray<ObjectProperty> m_BlendByEmoteTypeNodes; // 0x2bc
	char m_bIsLooping : 1; // 0x2cc
};

struct UTgAnimNodePlayFireAnim {
	FName FireAnimNodeName; // 0x168
	ObjectProperty FireAnimNodeSequence; // 0x170
};

struct UTgAIBehaviorCondition_IsChestLooted {
	char SeenAsOpen : 1; // 0x98
};

struct ATgInventoryManager_Player {
	TMap<None, None> s_DynamicCardsMap; // 0x3b0
};

struct UInterpTrackInstVisibility {
	EVisibilityTrackAction Action; // 0x60
	float LastUpdatePosition; // 0x64
};

struct USeqCond_SwitchObject {
	TArray<FSwitchObjectCase> SupportedValues; // 0xec
};

struct UUIDataProvider_OnlinePartyChatList {
	TArray<FOnlinePartyMember> PartyMembersList; // 0x74
	TArray<FString> NatTypes; // 0x84
	FString NickNameCol; // 0x94
	FString NatTypeCol; // 0xa4
	FString IsLocalCol; // 0xb4
	FString IsInPartyVoiceCol; // 0xc4
	FString IsTalkingCol; // 0xd4
	FString IsInGameSessionCol; // 0xe4
	FString IsPlayingThisGameCol; // 0xf4
};

struct UParticleModuleEventReceiverKillParticles {
	char bStopSpawning : 1; // 0x74
};

struct ATgTeamRoyaleZeppelin {
	ComponentProperty m_SkeletalMeshComponent; // 0x280
	ComponentProperty m_LightEnvironment; // 0x288
	TArray<ObjectProperty> m_PlayerList; // 0x290
	TArray<ObjectProperty> m_TaskForceList; // 0x2a0
	FVector m_DeployLocation; // 0x2b0
	FRotator m_DeployRotation; // 0x2bc
	float m_fDeployTime; // 0x2c8
	float m_fFlightDistance; // 0x2cc
	float m_fFlightTime; // 0x2d0
	float m_fFlightLerpAlpha; // 0x2d4
	float m_fDownFlightTime; // 0x2d8
	float r_fDownFlightDist; // 0x2dc
	float m_fDownFlightAlpha; // 0x2e0
	float r_fHealthPool; // 0x2e4
	FVector r_vInitialLoc; // 0x2e8
	FVector r_vTargetFlightLoc; // 0x2f4
	int32_t m_nZeppelinMeshAsmId; // 0x300
	char c_bLocalViewTarget : 1; // 0x304
	char m_bStopAtInitialDeployRange : 1; // 0x304
	char r_bDestroyAfterDeploy : 1; // 0x304
	char r_bReadyForDeploy : 1; // 0x304
	int32_t r_nTeam; // 0x308
	float m_fInitialDeployRemainingTime; // 0x30c
	float m_fAutoDeployRemainingTime; // 0x310
	float m_fAutoDeployTime; // 0x314
	ZepFlightStatus m_eFlightStatus; // 0x318
};

struct ATeamInfo {
	FString TeamName; // 0x280
	int32_t Size; // 0x290
	float Score; // 0x294
	int32_t TeamIndex; // 0x298
	FColor TeamColor; // 0x29c
};

struct UInterpTrackInstMove {
	FVector ResetLocation; // 0x60
	FRotator ResetRotation; // 0x6c
	FMatrix InitialTM; // 0x80
	FQuat InitialQuat; // 0xc0
};

struct AGravityVolume {
	float GravityZ; // 0x314
};

struct USeqVar_Bool {
	int32_t bValue; // 0xa0
};

struct UTerrainWeightMapTexture {
	ObjectProperty ParentTerrain; // 0x208
	TArray<FPointer> WeightedMaterials; // 0x210
};

struct UTgAnimMetaData_MeshAccessory {
	TArray<FMeshPlacement> m_Meshes; // 0x60
	char m_bSkinIndependent : 1; // 0x70
	char m_bSetKeysNoInterp : 1; // 0x70
	char m_bUseScaling : 1; // 0x70
	TArray<FTimeModifier> m_KeyFrames; // 0x74
	float m_fBecomeRelevantScale; // 0x84
	float m_fCeaseRelevantScale; // 0x88
};

struct UTgAnimNodeBlendByWeaponAnim {
	ObjectProperty m_TgPawn; // 0x168
	ObjectProperty m_Device; // 0x170
	FName m_nmBuildupFireSpinControlName; // 0x178
	ObjectProperty m_BuildupFireSpinControl; // 0x180
	TArray<FName> m_nmRecoilControlNames; // 0x188
	TArray<ObjectProperty> m_RecoilControls; // 0x198
	TArray<ObjectProperty> m_TinyWeaponsRecoilControls; // 0x1a8
	TArray<FName> m_nmMeleeControlNames; // 0x1b8
	TArray<ObjectProperty> m_MeleeControls; // 0x1c8
	char m_bPlayBuildUp : 1; // 0x1d8
	char m_bPlayFire : 1; // 0x1d8
	char m_bScaleFireByRefireTime : 1; // 0x1d8
	char m_bScalePutawayRetrieveAnims : 1; // 0x1d8
	char m_bSetIdleOnNonRelevant : 1; // 0x1d8
	char m_bPlayFireOnlyWhenRelevant : 1; // 0x1d8
	FName m_FireFinalRoundAnimName; // 0x1dc
	FName m_DryFireAnimName; // 0x1e4
	FName m_MovingFireAnimName; // 0x1ec
	FName m_StandardFireAnimName; // 0x1f4
	FName m_StandardPostFireAnimName; // 0x1fc
	FName m_ReloadPartialClipAnimName; // 0x204
	FName m_StandardReloadAnimName; // 0x20c
	TArray<FDeviceNodeCameraAnimation> m_CameraAnimations; // 0x214
	ObjectProperty m_FireCameraShake; // 0x224
	TG_EQUIP_POINT m_EquipPoint; // 0x22c
};

struct UParticleModuleBeamNoise {
	char bLowFreq_Enabled : 1; // 0x68
	char bNRScaleEmitterTime : 1; // 0x68
	char bSmooth : 1; // 0x68
	char bNoiseLock : 1; // 0x68
	char bOscillate : 1; // 0x68
	char bUseNoiseTangents : 1; // 0x68
	char bTargetNoise : 1; // 0x68
	char bApplyNoiseScale : 1; // 0x68
	int32_t Frequency; // 0x6c
	int32_t Frequency_LowRange; // 0x70
	FRawDistributionVector NoiseRange; // 0x74
	FRawDistributionFloat NoiseRangeScale; // 0x98
	FRawDistributionVector NoiseSpeed; // 0xbc
	float NoiseLockRadius; // 0xe0
	float NoiseLockTime; // 0xe4
	float NoiseTension; // 0xe8
	FRawDistributionFloat NoiseTangentStrength; // 0xec
	int32_t NoiseTessellation; // 0x110
	float FrequencyDistance; // 0x114
	FRawDistributionFloat NoiseScale; // 0x118
};

struct UTgAIBehaviorCondition_IsLastAttackerOfType {
	ECombatTargetType TargetType; // 0x98
};

struct UTgControlModule_Free {
	int32_t CameraYawOffset; // 0x6c
};

struct UMaterialExpressionConstant {
	float R; // 0xb0
};

struct USoundNode {
	int32_t NodeUpdateHint; // 0x60
	TArray<ObjectProperty> ChildNodes; // 0x64
};

struct ATgDevice_Transporter {
	float m_fDowntraceDistance; // 0xaec
	FVector c_vCurrentTargeting2Location; // 0xaf0
};

struct ATgFatalityFactory {
	ObjectProperty m_FatalityMeshActor; // 0x280
	FLightingChannelContainer m_LightingChannels; // 0x288
};

struct UTgDeviceForm_MountNoHorse {
	int32_t c_SparkleFXID; // 0x2dc
	ObjectProperty c_SparkleFX; // 0x2e0
};

struct USeqAct_DivideFloat {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct AHUD {
	FColor WhiteColor; // 0x280
	FColor GreenColor; // 0x284
	FColor RedColor; // 0x288
	ObjectProperty PlayerOwner; // 0x28c
	char bLostFocusPaused : 1; // 0x294
	char bShowHUD : 1; // 0x294
	char bShowScores : 1; // 0x294
	char bShowDebugInfo : 1; // 0x294
	char bShowBadConnectionAlert : 1; // 0x294
	char bShowDirectorInfoDebug : 1; // 0x294
	char bShowDirectorInfoHUD : 1; // 0x294
	char bMessageBeep : 1; // 0x294
	char bRenderFullScreen : 0; // 0x294
	char bScaleCanvasForCinematicMode : 0; // 0x294
	char bShowOverlays : 0; // 0x294
	float HudCanvasScale; // 0x298
	TArray<ObjectProperty> PostRenderedActors; // 0x29c
	TArray<FConsoleMessage> ConsoleMessages; // 0x2ac
	FColor ConsoleColor; // 0x2bc
	int32_t ConsoleMessageCount; // 0x2c0
	int32_t ConsoleFontSize; // 0x2c4
	int32_t MessageFontOffset; // 0x2c8
	int32_t MaxHUDAreaMessageCount; // 0x2cc
	FHudLocalizedMessage LocalMessages[0x8]; // 0x2d0
	float ConsoleMessagePosX; // 0x550
	float ConsoleMessagePosY; // 0x554
	ObjectProperty Canvas; // 0x558
	float LastHUDRenderTime; // 0x560
	float RenderDelta; // 0x564
	float SizeX; // 0x568
	float SizeY; // 0x56c
	float CenterX; // 0x570
	float CenterY; // 0x574
	float RatioX; // 0x578
	float RatioY; // 0x57c
	TArray<FName> DebugDisplay; // 0x580
	TArray<FKismetDrawTextInfo> KismetTextInfo; // 0x590
};

struct UTgInvListener_TargetOverHealed {
	TArray<FTOHInfo> s_stacks; // 0xd0
};

struct UTgAIBehaviorCondition_SelectedTargetHealthPercent {
	char bMustBeEnemy : 1; // 0x9c
	char bIgnoreTaskforce : 1; // 0x9c
	ETargetSelector TargetSelector; // 0xa0
	ECombatTargetType TargetType; // 0xa1
	int32_t TargetId; // 0xa4
	float HealthPct; // 0xa8
};

struct USeqCond_IsLoggedIn {
	int32_t NumNeededLoggedIn; // 0xec
};

struct UPComPerformanceCaptureBase {
	TArray<FName> StatsToCollect; // 0x60
	FArray_Mirror StatIds; // 0x70
	TArray<char> StatTypes; // 0x80
	float FOV; // 0x90
	TArray<FPComPerformanceCaptureProfile> Profiles; // 0x94
	FPComPerformanceCaptureProfile FallbackProfile; // 0xa4
	FPComPerformanceCaptureProfile ActiveProfile; // 0xc0
};

struct UUIGameInfoSummary {
	FString ClassName; // 0x94
	FString GameAcronym; // 0xa4
	FString MapPrefix; // 0xb4
	char bIsTeamGame : 1; // 0xc4
	char bIsDisabled : 1; // 0xc4
	FString GameSettingsClassName; // 0xc8
	FString GameName; // 0xd8
	FString Description; // 0xe8
};

struct UBlurEffect {
	int32_t BlurKernelSize; // 0x88
};

struct UUIComponent_ContextMenuEntry {
	ObjectProperty m_pFrameButton; // 0x120
};

struct UTgAIBehaviorAction_RunInRandomDirection {
	float TraceDistance; // 0x94
	float Acceleration; // 0x98
};

struct ARB_LineImpulseActor {
	float ImpulseStrength; // 0x280
	float ImpulseRange; // 0x284
	char bVelChange : 1; // 0x288
	char bStopAtFirstHit : 1; // 0x288
	char bCauseFracture : 1; // 0x288
	ComponentProperty Arrow; // 0x28c
	char ImpulseCount; // 0x294
};

struct UUIInteractable_JsonPanel {
	ObjectProperty m_mcHighlight; // 0x140
	ObjectProperty m_mcImage; // 0x148
	ObjectProperty m_mcTitle; // 0x150
	ObjectProperty m_mcSubtitle; // 0x158
	ObjectProperty m_mcLiveBanner; // 0x160
	ObjectProperty m_mcLiveBannerText[0x3]; // 0x168
	FJsonFeatureData m_JsonFeatureData; // 0x180
	char m_bInteractable : 1; // 0x214
};

struct AAIController {
	char bAdjustFromWalls : 1; // 0x470
	char bReverseScriptedRoute : 1; // 0x470
	float Skill; // 0x474
	ObjectProperty ScriptedMoveTarget; // 0x478
	ObjectProperty ScriptedRoute; // 0x480
	int32_t ScriptedRouteIndex; // 0x488
	ObjectProperty ScriptedFocus; // 0x48c
};

struct ADroppedPickup {
	ObjectProperty Inventory; // 0x280
	AInventory* InventoryClass; // 0x288
	ObjectProperty PickupCache; // 0x290
	char bFadeOut : 1; // 0x298
};

struct UAnimMetaData_SkelControlKeyFrame {
	TArray<FTimeModifier> KeyFrames; // 0x7c
	char bForceFirstKeyFrameOnBecomeRelevant : 1; // 0x8c
	char bForceLastKeyFrameOnCeaseRelevant : 1; // 0x8c
};

struct UTgDeviceForm_HexaFireGuns {
	ObjectProperty m_SpinnerSkelControl1P; // 0x2bc
	ObjectProperty m_SpinnerSkelControl3P; // 0x2c4
	int32_t m_nNextGunFired; // 0x2cc
	FName c_nmSocket1; // 0x2d0
	FName c_nmSocket2; // 0x2d8
	FName c_nmSocket3; // 0x2e0
	FName c_nmSocket4; // 0x2e8
	ObjectProperty m_LowerRightBarrel1P; // 0x2f0
	ObjectProperty m_UpperRightBarrel1P; // 0x2f8
	ObjectProperty m_LowerLeftBarrel1P; // 0x300
	ObjectProperty m_UpperLeftBarrel1P; // 0x308
	ObjectProperty m_LowerRightBarrel3P; // 0x310
	ObjectProperty m_UpperRightBarrel3P; // 0x318
	ObjectProperty m_LowerLeftBarrel3P; // 0x320
	ObjectProperty m_UpperLeftBarrel3P; // 0x328
};

struct UTgDeviceForm_DragonSlam {
	char m_bStartFireInAir : 1; // 0x2bc
	TArray<ObjectProperty> m_DragonSlamBlendList1P; // 0x2c0
	TArray<ObjectProperty> m_DragonSlamBlendList3P; // 0x2d0
};

struct ATgDevice_Weightless {
	float r_fSprintHorizontalSpeedMod; // 0xaec
	float r_fSprintJumpSpeedMod; // 0xaf0
};

struct UUIDataStore_DynamicResource {
	ObjectProperty ProfileProvider; // 0x98
	ObjectProperty GameResourceDataStore; // 0xa0
	TArray<FDynamicResourceProviderDefinition> ResourceProviderDefinitions; // 0xa8
	FMultiMap_Mirror ResourceProviders; // 0xb8
};

struct USeqAct_DivideInt {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct USeqAct_PlayAgentAnimation {
	TArray<FName> AnimationList; // 0x120
	float BlendInTime; // 0x130
	float BlendOutTime; // 0x134
	char bUseRootMotion : 1; // 0x138
	char bFaceActionTargetFirst : 1; // 0x138
	char bLooping : 1; // 0x138
	char bBlendBetweenAnims : 1; // 0x138
	int32_t LoopIndex; // 0x13c
	float LoopTime; // 0x140
	ObjectProperty ActionTarget; // 0x144
};

struct UTgAnimMetaData_ScaleWeaponMesh {
	char m_bSetKeysNoInterp : 1; // 0x80
};

struct USeqVar_ObjectList {
	TArray<ObjectProperty> ObjList; // 0xc4
};

struct UTgAnimNodeStanceDualFire {
	char m_bFireParityDirty : 1; // 0x188
	int32_t m_nDesiredStance; // 0x18c
};

struct ATgSkeletalMeshActor_FlagStand {
	FString m_FlagContentDataClassName; // 0x4d4
	ObjectProperty m_FlagContentData; // 0x4e4
	int32_t m_nGameTaskForce; // 0x4ec
	int32_t m_nTeamIndex; // 0x4f0
};

struct AAmbientSoundSimple {
	ObjectProperty AmbientProperties; // 0x294
	ObjectProperty SoundCueInstance; // 0x29c
	ObjectProperty SoundNodeInstance; // 0x2a4
};

struct UTgAIBehaviorCondition_DistanceFromAvoidableProjectile {
	char bMustBeEnemy : 1; // 0x9c
};

struct ATgDevice_PrincessF {
	ObjectProperty m_cachedSupportDevice; // 0xb60
	int32_t m_nEyeheightAdjustmentWhileSliding; // 0xb68
	float m_fEyeHeightSmoothFactor; // 0xb6c
};

struct ATgProj_Tracer {
	ComponentProperty PSC; // 0x450
};

struct AFluidSurfaceActor {
	ComponentProperty FluidComponent; // 0x280
	ObjectProperty ProjectileEntryEffect; // 0x288
};

struct UTgSeqAct_PlayRecoilSkelControl {
	FName SkelControlName; // 0x108
	FName ProfileName; // 0x110
};

struct UInterpTrackEvent {
	TArray<FEventTrackKey> EventTrack; // 0xa0
	char bFireEventsWhenForwards : 1; // 0xb0
	char bFireEventsWhenBackwards : 1; // 0xb0
	char bFireEventsWhenJumpingForwards : 1; // 0xb0
};

struct UParticleModuleWorldAttractor {
	char bParticleLifeRelative : 1; // 0x68
	FRawDistributionFloat AttractorInfluence; // 0x6c
};

struct ATgSpectatorCamera {
	FViewTargetTransitionParams m_DefaultBlendParams; // 0x89c
	FViewTargetTransitionParams m_SnapBlendParams; // 0x8ac
	ObjectProperty m_CinematicAnim; // 0x8bc
	ObjectProperty m_AnimInstance; // 0x8c4
};

struct UTgAnimNodeStanceTransitionerSynchronized {
	float StanceResetTime; // 0x168
	char CanResetStanceOnTick : 1; // 0x16c
	char m_bDelayingChildSwitch : 1; // 0x16c
	int32_t m_nCurrentStance; // 0x170
	float m_fTimestampToSwitchStance; // 0x174
	TArray<FStanceTransitionParam> StanceTransitionControl; // 0x178
};

struct UPhysicsLODVerticalEmitter {
	int32_t ParticlePercentage; // 0x60
};

struct UMobileMenuList {
	char bIsVerticalList : 1; // 0xdc
	char bDisableScrolling : 1; // 0xdc
	char bForceSelectedToLineup : 1; // 0xdc
	char bTapToScrollToItem : 1; // 0xdc
	char bLoops : 1; // 0xdc
	float SelectedOffset; // 0xe0
	TArray<ObjectProperty> Items; // 0xe4
	FSelectedMenuItem SelectedItem; // 0xf4
	FMenuListDragInfo Drag; // 0x100
	FMenuListMovementInfo Movement; // 0x154
	float Deacceleration; // 0x170
	float EaseOutExp; // 0x174
	FIntPoint ScreenSize; // 0x178
	int32_t FirstVisible; // 0x180
	int32_t LastVisible; // 0x184
	int32_t NumShowEndOfList; // 0x188
	float EndOfListSupression; // 0x18c
};

struct UTgDeviceForm_Turret {
	ObjectProperty m_SKCTurretScale; // 0x2bc
};

struct UTgInventoryObject_Listen_Combo_Makoa {
	TArray<FMarkedTargetHook> m_MarkedTargets; // 0xd0
};

struct AInterpActor {
	char bShouldSaveForCheckpoint : 1; // 0x2d0
	char bMonitorMover : 1; // 0x2d0
	char bMonitorZVelocity : 1; // 0x2d0
	char bDestroyProjectilesOnEncroach : 1; // 0x2d0
	char bContinueOnEncroachPhysicsObject : 1; // 0x2d0
	char bStopOnEncroach : 1; // 0x2d0
	char bContinueOnEncroachNonPawn : 1; // 0x2d0
	char bShouldShadowParentAllAttachedActors : 1; // 0x2d0
	char bIsLift : 0; // 0x2d0
	ObjectProperty MyMarker; // 0x2d4
	float MaxZVelocity; // 0x2dc
	float StayOpenTime; // 0x2e0
	ObjectProperty OpenSound; // 0x2e4
	ObjectProperty OpeningAmbientSound; // 0x2ec
	ObjectProperty OpenedSound; // 0x2f4
	ObjectProperty CloseSound; // 0x2fc
	ObjectProperty ClosingAmbientSound; // 0x304
	ObjectProperty ClosedSound; // 0x30c
	ComponentProperty AmbientSoundComponent; // 0x314
};

struct UTgDeviceForm_HeatHaze {
	char m_bShouldBeActive : 1; // 0x2bc
	float m_fUltActivationTime; // 0x2c0
	float m_fUltActivationPercent; // 0x2c4
};

struct UTgAIBehaviorCondition_IsItemInRadius {
	float Radius; // 0x98
	char CheckLOS : 1; // 0x9c
};

struct UUIData_MatchInvitePlayerState {
	MatchInvitePlayerState m_eState; // 0x60
};

struct UTgGameDC_Game {
	ObjectProperty m_GameTimer; // 0x16c
	ObjectProperty m_FriendTeamData; // 0x174
	ObjectProperty m_EnemyTeamData; // 0x17c
	ObjectProperty m_GoldFury; // 0x184
	GAME_MODE_TYPE currentGameType; // 0x18c
};

struct UUIComponent_Display {
	ObjectProperty m_pData; // 0x118
};

struct UTgAnimNodeStanceFireIntercept {
	int32_t m_nStanceToAllow; // 0x168
	int32_t m_nCurrentStance; // 0x16c
};

struct UUIComponent_BattlePassHome {
	ObjectProperty m_pPurchasePanel; // 0x120
	ObjectProperty m_pInfoPanel; // 0x128
	ObjectProperty m_pItemInfo; // 0x130
	ObjectProperty m_mcLoadingFrame; // 0x138
	ObjectProperty m_mcAvatarContainer; // 0x140
	ObjectProperty m_Avatar; // 0x148
	ObjectProperty m_pTiers; // 0x150
	ObjectProperty m_pNextReward; // 0x158
	ObjectProperty m_pPrevReward; // 0x160
	ObjectProperty m_mcTiersTF0; // 0x168
	ObjectProperty m_mcTiersTF1; // 0x170
	ObjectProperty m_mcBattlePassTrack; // 0x178
	ObjectProperty m_mcBattlePassTrackHeader; // 0x180
	ObjectProperty m_grGroup; // 0x188
	int32_t m_nAcknowledgedTier; // 0x190
	int32_t m_nAcknowledgedLevel; // 0x194
	Fdword m_dwAcknowledgedPoints; // 0x198
	char m_bAcknowledgedPaid : 1; // 0x19c
	char m_bFirstPresentation : 1; // 0x19c
	FVector m_vBaseCameraOffset; // 0x1a0
	FVector m_vMountCameraOffset; // 0x1ac
	FVector m_vDeathStampCameraOffset; // 0x1b8
	ObjectProperty m_InputScrollLeft; // 0x1c4
	ObjectProperty m_InputScrollRight; // 0x1cc
	int32_t m_nOnTickCallbackHandle; // 0x1d4
	ObjectProperty m_pPromptLeft; // 0x1d8
	ObjectProperty m_pPromptRight; // 0x1e0
	ObjectProperty m_pPreviewLTIRequested; // 0x1e8
};

struct ARoute {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x280
	ERouteType RouteType; // 0x288
	TArray<FActorReference> RouteList; // 0x28c
	float FudgeFactor; // 0x29c
	int32_t RouteIndexOffset; // 0x2a0
};

struct ANxForceFieldGeneric {
	ObjectProperty Shape; // 0x2d4
	ComponentProperty DrawComponent; // 0x2dc
	float RoughExtentX; // 0x2e4
	float RoughExtentY; // 0x2e8
	float RoughExtentZ; // 0x2ec
	FFG_ForceFieldCoordinates Coordinates; // 0x2f0
	FVector Constant; // 0x2f4
	FVector PositionMultiplierX; // 0x300
	FVector PositionMultiplierY; // 0x30c
	FVector PositionMultiplierZ; // 0x318
	FVector PositionTarget; // 0x324
	FVector VelocityMultiplierX; // 0x330
	FVector VelocityMultiplierY; // 0x33c
	FVector VelocityMultiplierZ; // 0x348
	FVector VelocityTarget; // 0x354
	FVector Noise; // 0x360
	FVector FalloffLinear; // 0x36c
	FVector FalloffQuadratic; // 0x378
	float TorusRadius; // 0x384
	FPointer LinearKernel; // 0x388
};

struct UJsonObject {
	FMap_Mirror ValueMap; // 0x60
	FMap_Mirror ObjectMap; // 0xa8
	TArray<FString> ValueArray; // 0xf0
	TArray<ObjectProperty> ObjectArray; // 0x100
};

struct UGFxAction_Invoke {
	ObjectProperty Movie; // 0x108
	FString MethodName; // 0x110
	TArray<FASValue> Arguments; // 0x120
};

struct UTgAIBehaviorAction_MoveToLanePusher {
	TG_EQUIP_POINT DeviceSlot; // 0x9c
};

struct UTgGameDC_MapEntity {
	int32_t m_nPawnId; // 0x16c
};

struct UUIComponent_PromptRadialMenu {
	ObjectProperty m_mcTF; // 0x120
	ObjectProperty m_mcMouseWheel; // 0x128
	ObjectProperty m_pKey; // 0x130
	ObjectProperty m_pFrameButton; // 0x138
};

struct UUIComponent_ChallengeGoal {
	ObjectProperty m_pProgress; // 0x120
	ObjectProperty m_mcTexture; // 0x128
	ObjectProperty m_mcTF0; // 0x130
	ObjectProperty m_mcTF1; // 0x138
};

struct UTgInvListener_ConsumeMarksForDamage {
	TArray<ObjectProperty> m_PendingMarkRemoval; // 0xcc
};

struct UTgDataObject {
	char m_bDirty : 1; // 0x60
	char m_bCallback : 1; // 0x60
	TArray<UIID> m_Laundry; // 0x64
	TMap<None, None> m_Data; // 0x74
};

struct ATgProj_TargetedBounceBase {
	ObjectProperty m_LastBounceTarget; // 0x56c
	ObjectProperty m_NextBounceTarget; // 0x574
	char m_bCanTargetShields : 1; // 0x57c
	float m_fMaxBounceRange; // 0x580
};

struct UTgInventoryObject_Listen_PetAbilityWhileDeployableActive {
	int32_t m_nActiveDeployableCount; // 0xc8
};

struct ATgSpawnTeleporterEntrance {
	char bEnabled : 1; // 0x2bc
};

struct UNetDriver {
	float ConnectionTimeout; // 0x9c
	float InitialConnectTimeout; // 0xa0
	float P2PConnectionTimeout; // 0xa4
	float InitialHandshakeTimeout; // 0xa8
	float KeepAliveTime; // 0xac
	float RelevantTimeout; // 0xb0
	float SpawnPrioritySeconds; // 0xb4
	float ServerTravelPause; // 0xb8
	int32_t MaxClientRate; // 0xc0
	int32_t MaxInternetClientRate; // 0xc4
	int32_t NetServerMaxTickRate; // 0xc8
	char bClampListenServerTickRate : 1; // 0xd0
	char AllowDownloads : 1; // 0xd4
	char AllowPeerConnections : 1; // 0xd8
	char AllowPeerVoice : 1; // 0xdc
	int32_t MaxDownloadSize; // 0x100
	TArray<FString> DownloadManagers; // 0x104
	FString NetConnectionClassName; // 0x1b0
	FString PeerNetConnectionClassName; // 0x1c8
};

struct UHttpRequestInterface {
	DelegateProperty __OnProcessRequestComplete__Delegate; // 0x60
};

struct UDistributionVector {
	FPointer VfTable_FCurveEdInterface; // 0x70
	char bCanBeBaked : 1; // 0x78
	char bIsDirty : 1; // 0x78
};

struct ATrigger {
	ComponentProperty CylinderComponent; // 0x280
	char bRecentlyTriggered : 1; // 0x288
	float AITriggerDelay; // 0x28c
};

struct UInterpTrackParticleReplay {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0xa0
	char bIsCapturingReplay : 1; // 0xb0
};

struct UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x120
	FGuid ExpressionGUID; // 0x128
	FName Group; // 0x138
};

struct UPBRuleNodeCorner {
	float CornerSize; // 0x70
	TArray<FRBCornerAngleInfo> Angles; // 0x74
	float FlatThreshold; // 0x84
	char bNoMeshForConcaveCorners : 1; // 0x88
	char bUseAdjacentRulesetForRightGap : 1; // 0x88
	EPBCornerType CornerType; // 0x8c
	float CornerShapeOffset; // 0x90
	int32_t RoundTesselation; // 0x94
	float RoundCurvature; // 0x98
};

struct UHttpFactory {
	FString HttpRequestClassName; // 0x60
};

struct UOnlineTitleFileDownloadWeb {
	TArray<FTitleFileWeb> TitleFiles; // 0x104
};

struct UMcpServerTimeBase {
	FString McpServerTimeClassName; // 0x78
	DelegateProperty __OnQueryServerTimeComplete__Delegate; // 0x88
};

struct UTgDeviceFire_DrogozLeg1 {
	float m_DamageAmount; // 0x270
};

struct UTgInventoryObject_Listen_ActiveWhileInGrass {
	char m_bCachedIsInGrass : 1; // 0xc8
	float s_fExitTimestamp; // 0xcc
};

struct ATgPathPreviewActor {
	FPointer VfTable_IInterface_NavigationHandle; // 0x280
	ObjectProperty m_Destination; // 0x288
	ObjectProperty m_Source; // 0x290
	ObjectProperty m_NavigationHandle; // 0x298
	FNavMeshPathParams m_NavMeshPathParams; // 0x2a0
};

struct UUIComponent_BattlePassRewardJoinedLevels {
	TArray<ObjectProperty> m_pLevels; // 0x120
	ObjectProperty m_mcHeader; // 0x130
	ObjectProperty m_mcTierLock; // 0x138
};

struct USplineComponent {
	FInterpCurveVector SplineInfo; // 0x24c
	float SplineCurviness; // 0x260
	FColor SplineColor; // 0x264
	float SplineDrawRes; // 0x268
	float SplineArrowSize; // 0x26c
	char bSplineDisabled : 1; // 0x270
	FInterpCurveFloat SplineReparamTable; // 0x274
};

struct UTgSeqAct_AITargetActor {
	ObjectProperty CombatTarget; // 0x108
};

struct UFailedConnect {
	FString FailMessage[0x4]; // 0x74
};

struct UUIComponent_Rotator {
	int32_t m_nTickHandle; // 0x120
	float m_fRotationDegreesPerSecond; // 0x124
};

struct UPostProcessEffect {
	char bShowInEditor : 1; // 0x60
	char bShowInGame : 1; // 0x60
	char bUseWorldSettings : 1; // 0x60
	char m_D3D11Only : 1; // 0x60
	char bAffectsLightingOnly : 1; // 0x60
	FName EffectName; // 0x64
	int32_t NodePosY; // 0x6c
	int32_t NodePosX; // 0x70
	int32_t DrawWidth; // 0x74
	int32_t DrawHeight; // 0x78
	int32_t OutDrawY; // 0x7c
	int32_t InDrawY; // 0x80
	ESceneDepthPriorityGroup SceneDPG; // 0x84
};

struct UWindDirectionalSourceComponent {
	FPointer SceneProxy; // 0x88
	float Strength; // 0x90
	float Phase; // 0x94
	float Frequency; // 0x98
	float Speed; // 0x9c
};

struct UParticleSystemComponent {
	ObjectProperty Template; // 0x24c
	UParticleLightEnvironmentComponent* LightEnvironmentClass; // 0x254
	ObjectProperty LightEnvironmentSharedInstigator; // 0x25c
	int32_t MaxLightEnvironmentPooledReuses; // 0x264
	TArray<FPointer> EmitterInstances; // 0x268
	TArray<ComponentProperty> SMComponents; // 0x278
	TArray<ObjectProperty> SMMaterialInterfaces; // 0x288
	TArray<ComponentProperty> SkelMeshComponents; // 0x298
	TArray<FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray; // 0x2a8
	char bAutoActivate : 1; // 0x2b8
	char bWasCompleted : 1; // 0x2b8
	char bHasDurationElapsed : 1; // 0x2b8
	char bSuppressSpawning : 1; // 0x2b8
	char bWasDeactivated : 1; // 0x2b8
	char bResetOnDetach : 1; // 0x2b8
	char bUpdateOnDedicatedServer : 1; // 0x2b8
	char bJustAttached : 1; // 0x2b8
	char bIsActive : 0; // 0x2b8
	char bHasBeenActivated : 0; // 0x2b8
	char bWasRecycledSinceLastTick : 0; // 0x2b8
	char bWasUpdateDeferred : 0; // 0x2b8
	char bWarmingUp : 0; // 0x2b8
	char bIsCachedInPool : 0; // 0x2b8
	char bOverrideLODMethod : 0; // 0x2b8
	char bSkipUpdateDynamicDataDuringTick : 0; // 0x2b8
	char bSkipBoundsUpdate : 0; // 0x2b8
	char bUpdateComponentInTick : 0; // 0x2b8
	char bDeferredBeamUpdate : 0; // 0x2b8
	char bForcedInActive : 0; // 0x2b8
	char bIsWarmingUp : 0; // 0x2b8
	char bIsViewRelevanceDirty : 0; // 0x2b8
	char bRecacheViewRelevance : 0; // 0x2b8
	char m_EmitBasedOnAnimNotify : 0; // 0x2b8
	char m_bHasRibbonModule : 0; // 0x2b8
	char bLODUpdatePending : 0; // 0x2b8
	char bSkipSpawnCountCheck : 0; // 0x2b8
	char m_bRealTimeTicking : 0; // 0x2b8
	char bHasSavedScale3D : 0; // 0x2b8
	TArray<FParticleSysParam> InstanceParameters; // 0x2bc
	FVector OldPosition; // 0x2cc
	FVector PartSysVelocity; // 0x2d8
	float WarmupTime; // 0x2e4
	float WarmupTickRate; // 0x2e8
	int32_t LODLevel; // 0x2ec
	float SecondsBeforeInactive; // 0x2f0
	float TimeSinceLastForceUpdateTransform; // 0x2f4
	float MaxTimeBeforeForceUpdateTransform; // 0x2f8
	float AccumTickTime; // 0x2fc
	ParticleSystemLODMethod LODMethod; // 0x300
	ParticleReplayState ReplayState; // 0x301
	TArray<FMaterialViewRelevance> CachedViewRelevanceFlags; // 0x304
	float m_ActiveRemainingTime; // 0x314
	FParticleChannelContainer m_ParticleChannels; // 0x318
	TArray<ObjectProperty> ReplayClips; // 0x31c
	int32_t ReplayClipIDNumber; // 0x32c
	int32_t ReplayFrameIndex; // 0x330
	float AccumLODDistanceCheckTime; // 0x334
	TArray<FParticleEventSpawnData> SpawnEvents; // 0x338
	TArray<FParticleEventDeathData> DeathEvents; // 0x348
	TArray<FParticleEventCollideData> CollisionEvents; // 0x358
	TArray<FParticleEventKismetData> KismetEvents; // 0x368
	TArray<FParticleEventAttractorCollideData> AttractorCollisionEvents; // 0x378
	FPointer ReleaseResourcesFence; // 0x388
	float CustomTimeDilation; // 0x390
	float EmitterDelay; // 0x394
	float FOV; // 0x398
	FVector SavedScale3D; // 0x39c
	DelegateProperty __OnSystemFinished__Delegate; // 0x3a8
	DelegateProperty __OnSystemDurationElapsed__Delegate; // 0x3b8
};

struct AStaticLightCollectionActor {
	TArray<ComponentProperty> LightComponents; // 0x28c
	int32_t MaxLightComponents; // 0x29c
};

struct UMaterialExpressionNormalize {
	FExpressionInput VectorInput; // 0xb0
};

struct ATgDeploy_Shield {
	char bBasedOnPawn : 1; // 0x448
};

struct AGameReplicationInfo {
	AGameInfo* GameClass; // 0x280
	char bStopCountDown : 1; // 0x288
	char bMatchHasBegun : 1; // 0x288
	char bMatchIsOver : 1; // 0x288
	int32_t RemainingTime; // 0x28c
	int32_t ElapsedTime; // 0x290
	int32_t RemainingMinute; // 0x294
	int32_t GoalScore; // 0x298
	int32_t TimeLimit; // 0x29c
	TArray<ObjectProperty> Teams; // 0x2a0
	FString ServerName; // 0x2b0
	ObjectProperty Winner; // 0x2c0
	TArray<ObjectProperty> PRIArray; // 0x2c8
	TArray<ObjectProperty> InactivePRIArray; // 0x2d8
};

struct ANxGenericForceFieldCapsule {
	ComponentProperty RenderComponent; // 0x374
	float CapsuleHeight; // 0x37c
	float CapsuleRadius; // 0x380
};

struct UMultiProviderAnalytics {
	TArray<FString> AnalyticsProviderClassNames; // 0x98
	TArray<ObjectProperty> AnalyticsProviders; // 0xa8
};

struct UParticleModuleTypeDataTrail2 {
	int32_t TessellationFactor; // 0x68
	float TessellationFactorDistance; // 0x6c
	float TessellationStrength; // 0x70
	int32_t TextureTile; // 0x74
	int32_t Sheets; // 0x78
	int32_t MaxTrailCount; // 0x7c
	int32_t MaxParticleInTrailCount; // 0x80
	char bClipSourceSegement : 1; // 0x84
	char bClearTangents : 1; // 0x84
	char RenderGeometry : 1; // 0x84
	char RenderDirectLine : 1; // 0x84
	char RenderLines : 1; // 0x84
	char RenderTessellation : 1; // 0x84
};

struct ANxTornadoForceField {
	float RadialStrength; // 0x2d4
	float RotationalStrength; // 0x2d8
	float LiftStrength; // 0x2dc
	float ForceRadius; // 0x2e0
	float ForceTopRadius; // 0x2e4
	float LiftFalloffHeight; // 0x2e8
	float EscapeVelocity; // 0x2ec
	float ForceHeight; // 0x2f0
	float HeightOffset; // 0x2f4
	char BSpecialRadialForceMode : 1; // 0x2f8
	FPointer Kernel; // 0x2fc
};

struct ATgDeploy_ChurchillWard {
	char r_bTargetVisible : 1; // 0x448
};

struct UTgAIBehaviorCondition_IsLanepusherLastAttackerOfType {
	ECombatTargetType TargetType; // 0x98
};

struct UDOFEffect {
	float FalloffExponent; // 0x88
	float BlurKernelSize; // 0x8c
	float MaxNearBlurAmount; // 0x90
	float MinBlurAmount; // 0x94
	float MaxFarBlurAmount; // 0x98
	EFocusType FocusType; // 0x9c
	float FocusInnerRadius; // 0xa0
	float FocusDistance; // 0xa4
	FVector FocusPosition; // 0xa8
};

struct ATgDevice_Scout {
	ObjectProperty m_CachedPawnOwner; // 0xaec
	TArray<ObjectProperty> m_AlliesScouted; // 0xaf4
	TArray<ObjectProperty> m_EnemiesScouted; // 0xb04
	float m_fScoutRefreshTime; // 0xb14
};

struct USoundNodeRandom {
	TArray<float> Weights; // 0x74
	int32_t PreselectAtLevelLoad; // 0x84
	char bRandomizeWithoutReplacement : 1; // 0x88
	TArray<char> HasBeenUsed; // 0x8c
	int32_t NumRandomUsed; // 0x9c
};

struct ATgDemoRecSpectator {
	TArray<FSpectatorCommand> PendingCommands; // 0x1870
	int32_t m_TimeIndex; // 0x1880
	TArray<FDilationData> m_TimeDilations; // 0x1884
	FPointer m_pTgCallbackDevice; // 0x1894
	int32_t m_1xTimeIndex; // 0x189c
	char m_bIsPaused : 1; // 0x18a0
	char m_bInStasis : 1; // 0x18a0
	char m_bSpectatorMaster : 1; // 0x18a0
	char m_bSyncWithMasterEnabled : 1; // 0x18a0
	char m_bIsSyncingWithMaster : 1; // 0x18a0
	char m_bAutoSlomo : 1; // 0x18a0
	char m_bReceiveCamSync : 1; // 0x18a0
	int32_t m_nLastReceivedMasterFrame; // 0x18a4
	float m_fLastReceivedMasterTimeDilation; // 0x18a8
	float m_fLastReceievedRealTimeStamp; // 0x18ac
	int32_t m_nSyncFrameThreshold; // 0x18b0
	int32_t m_nSyncFrameCheckThreshold; // 0x18b4
	int32_t m_nSyncAheadFrameThreshold; // 0x18b8
	int32_t m_nLastTimerValue; // 0x18bc
	ObjectProperty m_SpectatorDirector; // 0x18c0
	ObjectProperty m_ActionListener; // 0x18c8
	float m_fActionListenerRadius; // 0x18d0
	float m_fActionListenerHeight; // 0x18d4
	int32_t m_nCurrentActionListenerRating; // 0x18d8
	int32_t m_nActionListenerRatingThreshold; // 0x18dc
	float m_fRemainingAutoSlomoTime; // 0x18e0
	float m_fAutoSlomoExpirationTime; // 0x18e4
	int32_t m_nAutoSlomoSpeedIndex; // 0x18e8
	int32_t m_nAutoSlomoNearbyPlayersNum; // 0x18ec
	float m_fAutoSlomoFrequency; // 0x18f0
	float m_fRemainingAutoSlomoTimeoutTime; // 0x18f4
};

struct UParticleModuleEventReceiverSpawn {
	FRawDistributionFloat SpawnCount; // 0x74
	char bUseParticleTime : 1; // 0x98
	char bUsePSysLocation : 1; // 0x98
	char bInheritVelocity : 1; // 0x98
	FRawDistributionVector InheritVelocityScale; // 0x9c
};

struct UUIData_BattlePassTier {
	int32_t m_nTier; // 0x60
	Fdword m_dwPlayerBPXP; // 0x64
	TArray<ObjectProperty> m_pLevelRewards; // 0x68
	char m_bHasBonusRewards : 1; // 0x78
};

struct UPBRuleNodeVariation {
	char bVariationOfScopeOnLeft : 1; // 0x70
};

struct UTgAnimMetaData_DisplayGroupPSCParam {
	FName ParamName; // 0x80
	FName DisplayGroup; // 0x88
	TG_EQUIP_POINT EqpSlot; // 0x90
	char bActivateGroupOnRelevant : 1; // 0x94
	char bDeactivateGroupOnCeaseRelevant : 1; // 0x94
};

struct UInputContextManager {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	ObjectProperty m_CallbackContainer; // 0x68
	TArray<ObjectProperty> m_ContextStack; // 0x70
};

struct ATgWeaponMeshActor_LongbowInhand {
	char m_bPlayingPlantedFireSFX : 1; // 0x504
	char m_bPlayingUltimateFireSFX : 1; // 0x504
};

struct UUIComponent_HudMenuInventory {
	ObjectProperty m_mcShards; // 0x120
	ObjectProperty m_pItemList; // 0x128
	ObjectProperty m_pDetails; // 0x130
	ObjectProperty m_grInput; // 0x138
	ObjectProperty m_pSwapActon; // 0x140
	ObjectProperty m_akDropWeapon; // 0x148
	ObjectProperty m_akDropAbility; // 0x150
	ObjectProperty m_akDropConsumable; // 0x158
};

struct UNavMeshGoalFilter_OutSideOfDotProductWedge {
	FVector Location; // 0x6c
	FVector Rotation; // 0x78
	float Epsilon; // 0x84
};

struct UTgAnimNodeSlot {
	ObjectProperty m_TgPawn; // 0x138
	char m_bBlendOutIfVelocityIsGreaterThanZero : 1; // 0x140
	char m_bIsTransitionAnim : 1; // 0x140
	char m_bNotifyActorOnChildAnimEnd : 1; // 0x140
	FName m_nmHackingTransitionAnimName; // 0x144
	FName m_nmHackingLoopingAnimName; // 0x14c
	FName m_nmAFKTransitionAnimName; // 0x154
	FName m_nmAFKLoopingAnimName; // 0x15c
	FName m_nmQueuedAnim; // 0x164
};

struct UTgAIBehaviorAction_MoveToDamagingDeployable {
	char bMustBeEnemy : 1; // 0x9c
	char bIgnoreInsideCollision : 1; // 0x9c
	char bMoveAway : 1; // 0x9c
};

struct UUIHud {
	ObjectProperty m_mcSubscenes[0xb]; // 0x244
	ObjectProperty m_mcPaused; // 0x29c
};

struct UAnimNodeSequence {
	FName AnimSeqName; // 0xfc
	float Rate; // 0x104
	char bPlaying : 1; // 0x108
	char bLooping : 1; // 0x108
	char bCauseActorAnimEnd : 1; // 0x108
	char bCauseActorAnimPlay : 1; // 0x108
	char bZeroRootRotation : 1; // 0x108
	char bZeroRootTranslation : 1; // 0x108
	char bDisableWarningWhenAnimNotFound : 1; // 0x108
	char bNoNotifies : 1; // 0x108
	char bForceRefposeWhenNotPlaying : 0; // 0x108
	char bIsIssuingNotifies : 0; // 0x108
	char bForceAlwaysSlave : 0; // 0x108
	char bSynchronize : 0; // 0x108
	char bReverseSync : 0; // 0x108
	char bShowTimeLineSlider : 0; // 0x108
	char bLoopCameraAnim : 0; // 0x108
	char bRandomizeCameraAnimLoopStartTime : 0; // 0x108
	char m_bIgnoreFootSkelControls : 0; // 0x108
	char m_bIgnoreBlendBySpeedScaling : 0; // 0x108
	char bDoNotResetIfPlaying : 0; // 0x108
	char bOnlyResetSynchGroupOnReplayAnim : 0; // 0x108
	char bEditorOnlyAddRefPoseToAdditiveAnimation : 0; // 0x108
	char bCheckForFinishAnimEarly : 0; // 0x108
	char bBlendingOut : 0; // 0x108
	float CurrentTime; // 0x10c
	float PreviousTime; // 0x110
	float EndTime; // 0x114
	ObjectProperty AnimSeq; // 0x118
	int32_t AnimLinkupIndex; // 0x120
	float NotifyWeightThreshold; // 0x124
	FName SynchGroupName; // 0x128
	float SynchPosOffset; // 0x130
	ObjectProperty CameraAnim; // 0x134
	ObjectProperty ActiveCameraAnimInstance; // 0x13c
	float CameraAnimScale; // 0x144
	float CameraAnimPlayRate; // 0x148
	float CameraAnimBlendInTime; // 0x14c
	float CameraAnimBlendOutTime; // 0x150
	ERootBoneAxis RootBoneOption[0x3]; // 0x154
	ERootRotationOption RootRotationOption[0x3]; // 0x157
	ObjectProperty DebugTrack; // 0x15c
	ObjectProperty DebugCarat; // 0x164
	TArray<ObjectProperty> DeferredNotifies; // 0x16c
	TArray<FDeferredAnimNotifyTickInformation> DeferredNotifyTicks; // 0x17c
	TArray<FDeferredAnimNotifyEndInformation> DeferredNotifyEnds; // 0x18c
	TArray<ObjectProperty> MetaDataSkelControlList; // 0x19c
};

struct ULineBatchComponent {
	FPointer FPrimitiveDrawInterfaceVfTable; // 0x24c
	FPointer FPrimitiveDrawInterfaceView; // 0x254
	TArray<FPointer> BatchedLines; // 0x25c
	TArray<FPointer> BatchedPoints; // 0x26c
	float DefaultLifeTime; // 0x27c
};

struct USettings {
	TArray<FLocalizedStringSetting> LocalizedSettings; // 0x60
	TArray<FSettingsProperty> Properties; // 0x70
	TArray<FLocalizedStringSettingMetaData> LocalizedSettingsMappings; // 0x80
	TArray<FSettingsPropertyPropertyMetaData> PropertyMappings; // 0x90
};

struct USeqEvent_TouchInput {
	char bTrapInput : 1; // 0x128
	int32_t AllowedPlayerIndex; // 0x12c
	int32_t AllowedTouchIndex; // 0x130
	int32_t AllowedTouchpadIndex; // 0x134
};

struct UTgAnimNodeBlendByDrogozFlying {
	TArray<FBoosterFlightInfo> m_BoosterRecords; // 0x168
	char m_bInThrust : 1; // 0x178
	char m_bInBooster : 1; // 0x178
	char m_bTransitionsCanBeInterrupted : 1; // 0x178
	float m_fBoosterStartTime; // 0x17c
	float m_fBoosterRelevancyWindow; // 0x180
	float m_fBoosterTriggerPercent; // 0x184
	float m_fMaxFlightFallSpeed; // 0x188
};

struct ATgDeploy_BlackHole {
	float r_fRadiusScale; // 0x448
	float m_fMaxPullSpeed; // 0x44c
	float m_fMinPullSpeed; // 0x450
	float m_fDistanceWithMaxSpeed; // 0x454
	float m_fEventHorizonDistance; // 0x458
	float m_fInnerRadius; // 0x45c
	TArray<ObjectProperty> m_ActorsInRange; // 0x460
	ObjectProperty m_CachedPawnOwner; // 0x470
	ObjectProperty m_CachedEnemyTaskForce; // 0x478
	char r_bPullActive : 1; // 0x480
};

struct ATgWeaponMeshActor_ChurchillInhand {
	FPointer VfTable_ITgObserver_ViewTargetChanged; // 0x504
	char m_bPlayingADSFX : 1; // 0x50c
	float m_fShieldLagStrength; // 0x510
	float m_fShieldMinPitch; // 0x514
	float m_fShieldMinPitchMaxTranslate; // 0x518
	FLinearColor m_cDefaultColorizeRed1p; // 0x51c
	FLinearColor m_cDefaultColorizeRed3p; // 0x52c
	int32_t m_nColorizeRedChnageSource; // 0x53c
	FLinearColor DetectedColorWeapon; // 0x540
};

struct UBrushComponent {
	ObjectProperty Brush; // 0x24c
	FKAggregateGeom BrushAggGeom; // 0x254
	FPointer BrushPhysDesc; // 0x2a0
	FKCachedConvexData_Mirror CachedPhysBrushData; // 0x2a8
	int32_t CachedPhysBrushDataVersion; // 0x2b8
	char bBlockComplexCollisionTrace : 1; // 0x2bc
};

struct UUIDataProvider_OnlinePlayerStorage {
	ObjectProperty Profile; // 0x74
	FName ProviderName; // 0x7c
	char bWasErrorLastRead : 1; // 0x84
	char bIsExternalUIOpen : 1; // 0x84
	char bNeedsDeferredRefresh : 1; // 0x84
	TArray<FPlayerStorageArrayProvider> PlayerStorageArrayProviders; // 0x88
	int32_t DeviceStorageSizeNeeded; // 0x98
};

struct UTgAIBehaviorCondition_TimeSinceLanepusherTookDamage {
	float TimeThreshold; // 0x98
};

struct UTgSeqAct_NavIndicator {
	ObjectProperty m_NavTarget; // 0x108
};

struct UPComPictureInPictureScene {
	float SkyBrightness; // 0x60
	FColor SkyColor; // 0x64
	float LightBrightness; // 0x68
	char bAlwaysAllowAudioPlayback : 1; // 0x6c
	char bForceAllUsedMipsResident : 1; // 0x6c
	FPointer Scene; // 0x70
	TArray<ComponentProperty> Components; // 0x78
	ComponentProperty DirectionalLight; // 0x88
	ComponentProperty DirectionalBounceLight; // 0x90
	ComponentProperty SkyLight; // 0x98
	ComponentProperty LineBatcher; // 0xa0
};

struct AScout {
	TArray<FPathSizeInfo> PathSizes; // 0x5a8
	float TestJumpZ; // 0x5b8
	float TestGroundSpeed; // 0x5bc
	float TestMaxFallSpeed; // 0x5c0
	float TestFallSpeed; // 0x5c4
	float MaxLandingVelocity; // 0x5c8
	int32_t MinNumPlayerStarts; // 0x5cc
	UReachSpec* DefaultReachSpecClass; // 0x5d0
	TArray<FColor> EdgePathColors; // 0x5d8
	float NavMeshGen_StepSize; // 0x5e8
	float NavMeshGen_EntityHalfHeight; // 0x5ec
	float NavMeshGen_StartingHeightOffset; // 0x5f0
	float NavMeshGen_MaxDropHeight; // 0x5f4
	float NavMeshGen_MaxStepHeight; // 0x5f8
	float NavMeshGen_VertZDeltaSnapThresh; // 0x5fc
	float NavMeshGen_MinPolyArea; // 0x600
	float NavMeshGen_BorderBackfill_CheckDist; // 0x604
	float NavMeshGen_MinMergeDotAreaThreshold; // 0x608
	float NavMeshGen_MinMergeDotSmallArea; // 0x60c
	float NavMeshGen_MinMergeDotLargeArea; // 0x610
	float NavMeshGen_MaxPolyHeight; // 0x614
	float NavMeshGen_HeightMergeThreshold; // 0x618
	float NavMeshGen_EdgeMaxDelta; // 0x61c
	float NavMeshGen_MaxGroundCheckSize; // 0x620
	float NavMeshGen_MinEdgeLength; // 0x624
	float NavMeshGen_MinRadius; // 0x628
	float NavMeshGen_MaxRadius; // 0x62c
	float StandardJumpHeight; // 0x630
	float StandardJumpDistance; // 0x634
	float NavMeshGen_RecastCellSize; // 0x638
	float NavMeshGen_RecastCellHeight; // 0x63c
	float NavMeshGen_RecastErodeRadius; // 0x640
	char NavMeshGen_ExpansionDoObstacleMeshSimplification : 1; // 0x644
	char bHightlightOneWayReachSpecs : 1; // 0x644
	float MinMantleFallDist; // 0x648
	float MaxMantleFallDist; // 0x64c
	float MinMantleLateralDist; // 0x650
	float MaxMantleLateralDist; // 0x654
	float MaxMantleFallTime; // 0x658
};

struct UTgInventoryObject_Listen_InHand_HitMissStacker {
	float m_fLastStackTime; // 0xc8
	int32_t m_nAppliedStacks; // 0xcc
};

struct UMeshComponentFactory {
	TArray<ObjectProperty> Materials; // 0x64
};

struct UUIData_TitleQuantity {
	FString m_sTitle; // 0x60
	int32_t m_nQuantity; // 0x70
	int32_t m_nTotal; // 0x74
};

struct UTgAIBehaviorCondition_IsTargetTypeInLeash {
	ECombatTargetType TargetType; // 0x98
};

struct UParticleModuleUberRainDrops {
	float LifetimeMin; // 0x78
	float LifetimeMax; // 0x7c
	FVector StartSizeMin; // 0x80
	FVector StartSizeMax; // 0x8c
	FVector StartVelocityMin; // 0x98
	FVector StartVelocityMax; // 0xa4
	float StartVelocityRadialMin; // 0xb0
	float StartVelocityRadialMax; // 0xb4
	FVector ColorOverLife; // 0xb8
	float AlphaOverLife; // 0xc4
	char bIsUsingCylinder : 1; // 0xc8
	char bPositive_X : 1; // 0xc8
	char bPositive_Y : 1; // 0xc8
	char bPositive_Z : 1; // 0xc8
	char bNegative_X : 1; // 0xc8
	char bNegative_Y : 1; // 0xc8
	char bNegative_Z : 1; // 0xc8
	char bSurfaceOnly : 1; // 0xc8
	char bVelocity : 0; // 0xc8
	char bRadialVelocity : 0; // 0xc8
	float PC_VelocityScale; // 0xcc
	FVector PC_StartLocation; // 0xd0
	float PC_StartRadius; // 0xdc
	float PC_StartHeight; // 0xe0
	CylinderHeightAxis PC_HeightAxis; // 0xe4
	FVector StartLocationMin; // 0xe8
	FVector StartLocationMax; // 0xf4
};

struct ATgDeploy_DeployableLinkedEffectField {
	ObjectProperty m_ParentDeployable; // 0x47c
};

struct ATgDroppedItem {
	float m_fLifeSpan; // 0x280
	char m_bFadeOut : 1; // 0x284
	FName m_nmPickUpState; // 0x288
	int32_t r_nItemId; // 0x290
	ComponentProperty c_Mesh; // 0x294
	TArray<ObjectProperty> s_EffectGroupList; // 0x29c
};

struct UTgSeqAct_SendPlayerTrackingEvent {
	int32_t m_nEventId; // 0x108
	int32_t m_nSubEventID; // 0x10c
	FString m_ReferenceName; // 0x110
	int32_t m_nReferenceValue; // 0x120
};

struct UTgAIBehaviorAction_SelectLaneMoveTarget_Jungle {
	EJungleTargetType TargetType; // 0x94
};

struct USeqEvent_RigidBodyCollision {
	float MinCollisionVelocity; // 0x128
};

struct UTgAnimNodeBlendByBlink {
	ObjectProperty m_TgPawn; // 0x158
	ComponentProperty m_SkelMesh; // 0x160
	float m_fBlinkAnimRate; // 0x168
	FVector2D m_vTimeBetweenBlinks; // 0x16c
	float m_fTimeTillNextBlink; // 0x174
	TArray<FName> m_DisableBlinkingAnimNodeNameList; // 0x178
	TArray<ObjectProperty> m_CachedNodeList; // 0x188
	char m_bInitializedCachedNodeList : 1; // 0x198
};

struct USeqAct_ToggleHidden {
	char bToggleBasedActors : 1; // 0x108
	TArray<AActor*> IgnoreBasedClasses; // 0x10c
};

struct UInterpTrackInstAnimControl {
	float LastUpdatePosition; // 0x60
};

struct UUIComponent_RolledItem {
	ObjectProperty m_pCard; // 0x120
	ObjectProperty m_pLegendaryCard; // 0x128
	ObjectProperty m_pItem; // 0x130
	ObjectProperty m_mcItemDuplicateLabel; // 0x138
	ObjectProperty m_pReplacementItem; // 0x140
	ObjectProperty m_pFrameButton; // 0x148
	ObjectProperty m_SubItems; // 0x150
	ObjectProperty m_pEquipButton; // 0x158
	ObjectProperty m_pEquippedText; // 0x160
	char bRollover : 1; // 0x168
	ObjectProperty m_akItemAnimCard; // 0x16c
	ObjectProperty m_akItemAnimLegendaryCard; // 0x174
	ObjectProperty m_akItemAnimCurrency; // 0x17c
};

struct UAnimNodeBlendList {
	TArray<float> TargetWeight; // 0x114
	float BlendTimeToGo; // 0x124
	int32_t ActiveChildIndex; // 0x128
	char bPlayActiveChild : 1; // 0x12c
	char bForceChildFullWeightWhenBecomingRelevant : 1; // 0x12c
	char bSkipBlendWhenNotRendered : 1; // 0x12c
	TArray<int32_t> PlayActiveChildExceptionList; // 0x130
	float SliderPosition; // 0x140
};

struct UMaterialExpressionTerrainLayerSwitch {
	FPointer InstanceOverride; // 0xb0
	FExpressionInput LayerUsed; // 0xb8
	FExpressionInput LayerNotUsed; // 0xec
	FName ParameterName; // 0x120
	char PreviewUsed : 1; // 0x128
	FGuid ExpressionGUID; // 0x12c
};

struct UUIComponent_ArcadeRankedProgress {
	ObjectProperty m_mcQueueName; // 0x120
	ObjectProperty m_mcRatingChange; // 0x128
	ObjectProperty m_mcRatingImproved; // 0x130
	ObjectProperty m_pRating; // 0x138
};

struct UPBRuleNodeComment {
	int32_t SizeX; // 0x70
	int32_t SizeY; // 0x74
	int32_t BorderWidth; // 0x78
	FColor BorderColor; // 0x7c
	char bFilled : 1; // 0x80
	FColor FillColor; // 0x84
};

struct UStaticMesh {
	TArray<FStaticMeshLODInfo> LODInfo; // 0x70
	float LODDistanceRatio; // 0x80
	float LODMaxRange; // 0x84
	int32_t LightMapResolution; // 0x98
	int32_t LightMapCoordinateIndex; // 0x9c
	ObjectProperty BodySetup; // 0xf8
	char UseSimpleLineCollision : 1; // 0x13c
	char UseSimpleBoxCollision : 1; // 0x140
	char UseSimpleRigidBodyCollision : 1; // 0x144
	char UseFullPrecisionUVs : 1; // 0x148
	char bUsedForInstancing : 1; // 0x14c
	int32_t ConsolePreallocateInstanceCount; // 0x150
	char bUseMaximumStreamingTexelRatio : 1; // 0x154
	char bPartitionForEdgeGeometry : 1; // 0x158
	char bCanBecomeDynamic : 1; // 0x15c
	char bStripComplexCollisionForConsole : 1; // 0x164
	char bStripComplexCollision : 1; // 0x168
	char bShareLODLightmaps : 1; // 0x16c
	float StreamingDistanceMultiplier; // 0x170
	char CanStepUpOn : 1; // 0x1b0
	char CanBaseOn : 1; // 0x1b4
};

struct UPMESTG_LeaveADecalBase {
	UPhysicalMaterialPropertyBase* PhysicalMaterialPropertyClass; // 0x60
};

struct UTgAnimNodeBlendByProperty {
	float m_fBaseBlendTime; // 0x18c
	TArray<FChildBlendParam> SpecificChildBlendTimes; // 0x190
};

struct ATgGameHUD {
	int32_t m_nKillerPlayer; // 0x62c
	int32_t m_nKillerDevice; // 0x630
	int32_t m_nRank; // 0x634
	int32_t m_nWinner; // 0x638
	int32_t m_nPartyState; // 0x63c
	char m_bAlive : 1; // 0x640
	char m_bGameWon : 1; // 0x640
	char m_bGameOver : 1; // 0x640
	char m_bDeployed : 1; // 0x640
	char m_bSpectating : 1; // 0x640
	char m_bTutorialCompleted : 1; // 0x640
	char m_bClassMenuShownOnce : 1; // 0x640
	char m_bClassMenuRemovedOnce : 1; // 0x640
	FString m_sKillerName; // 0x644
	FUniqueNetId m_fKillerConsoleUniqueId; // 0x654
	TArray<int32_t> m_nReportIds; // 0x65c
	TArray<FUniqueNetId> m_fReportConsoleUniqueIds; // 0x66c
	TArray<FString> m_sReportNames; // 0x67c
};

struct UUIComponent_ShieldBar {
	ObjectProperty m_mcBarContainer; // 0x120
	ObjectProperty m_mcShieldMask; // 0x128
	ObjectProperty m_mcDamageMask; // 0x130
	ObjectProperty m_TargetPawn; // 0x138
	float m_fCurrentDamagePct; // 0x140
	float m_fCurrentShieldPct; // 0x144
	char m_bVisible : 1; // 0x148
	float m_fDamageInterpSpeed; // 0x14c
	float m_fMinDamageInterpSpeed; // 0x150
};

struct UUIData_PartyKick {
	int32_t m_nRequiredPartySize; // 0x60
	ObjectProperty m_pPostPartyKickResponse; // 0x64
};

struct UPlayerInput {
	char bUsingGamepad : 1; // 0x178
	char bInvertMouse : 1; // 0x178
	char bInvertTurn : 1; // 0x178
	char bWasForward : 1; // 0x178
	char bWasBack : 1; // 0x178
	char bWasLeft : 1; // 0x178
	char bWasRight : 1; // 0x178
	char bEdgeForward : 1; // 0x178
	char bEdgeBack : 0; // 0x178
	char bEdgeLeft : 0; // 0x178
	char bEdgeRight : 0; // 0x178
	char bEnableMouseSmoothing : 0; // 0x178
	char bEnableFOVScaling : 0; // 0x178
	char bLockTurnUntilRelease : 0; // 0x178
	FName LastAxisKeyName; // 0x17c
	float DoubleClickTimer; // 0x184
	float DoubleClickTime; // 0x188
	float MouseSensitivity; // 0x18c
	float m_fLookSensitivity; // 0x190
	float m_fLookSensitivityY; // 0x194
	float m_fLookAccelSpeed; // 0x198
	float m_fDeadZoneLeft; // 0x19c
	float m_fDeadZoneRight; // 0x1a0
	float aBaseX; // 0x1a4
	float aBaseY; // 0x1a8
	float aBaseZ; // 0x1ac
	float aMouseX; // 0x1b0
	float aMouseY; // 0x1b4
	float aForward; // 0x1b8
	float aTurn; // 0x1bc
	float aStrafe; // 0x1c0
	float aUp; // 0x1c4
	float aLookUp; // 0x1c8
	float aRightAnalogTrigger; // 0x1cc
	float aLeftAnalogTrigger; // 0x1d0
	float aPS3AccelX; // 0x1d4
	float aPS3AccelY; // 0x1d8
	float aPS3AccelZ; // 0x1dc
	float aPS3Gyro; // 0x1e0
	float aWiiUPointerX; // 0x1e4
	float aWiiUPointerY; // 0x1e8
	FVector aTilt; // 0x1ec
	FVector aRotationRate; // 0x1f8
	FVector aGravity; // 0x204
	FVector aAcceleration; // 0x210
	FVector aTouch[0x5]; // 0x21c
	FVector aBackTouch[0x5]; // 0x258
	float RawJoyUp; // 0x294
	float RawJoyRight; // 0x298
	float RawJoyLookRight; // 0x29c
	float RawJoyLookUp; // 0x2a0
	float MoveForwardSpeed; // 0x2a4
	float MoveStrafeSpeed; // 0x2a8
	float LookRightScale; // 0x2ac
	float LookUpScale; // 0x2b0
	char bStrafe; // 0x2b4
	char bXAxis; // 0x2b5
	char bYAxis; // 0x2b6
	float ZeroTime[0x2]; // 0x2b8
	float SmoothedMouse[0x2]; // 0x2c0
	int32_t MouseSamples; // 0x2c8
	float MouseSamplingTotal; // 0x2cc
	float AutoUnlockTurnTime; // 0x2d0
};

struct APylon {
	FPointer VfTable_IEditorLinkSelectionInterface; // 0x378
	FPointer VfTable_IInterface_NavigationHandle; // 0x380
	FPointer NavMeshPtr; // 0x388
	FPointer ObstacleMesh; // 0x390
	FPointer DynamicObstacleMesh; // 0x398
	FPointer WorkingSetPtr; // 0x3a0
	FPointer PathObjectsThatAffectThisPylon; // 0x3a8
	TArray<FVector> NextPassSeedList; // 0x3b0
	FOctreeElementId OctreeId; // 0x3c0
	FPointer OctreeIWasAddedTo; // 0x3cc
	ObjectProperty NextPylon; // 0x3d4
	TArray<ObjectProperty> ExpansionVolumes; // 0x3dc
	float ExpansionRadius; // 0x3ec
	float MaxExpansionRadius; // 0x3f0
	ComponentProperty PylonRadiusPreview; // 0x3f4
	char bImportedMesh : 1; // 0x3fc
	char bUseExpansionSphereOverride : 1; // 0x3fc
	char bNeedsCostCheck : 1; // 0x3fc
	char bPylonInHighLevelPath : 1; // 0x3fc
	char bUseRecast : 1; // 0x3fc
	char bAllowRecastGenerator : 1; // 0x3fc
	char bDrawEdgePolys : 1; // 0x3fc
	char bDrawPolyBounds : 1; // 0x3fc
	char bRenderInShowPaths : 0; // 0x3fc
	char bDrawWalkableSurface : 0; // 0x3fc
	char bDrawObstacleSurface : 0; // 0x3fc
	char bSolidObstaclesInGame : 0; // 0x3fc
	char bBuildThisPylon : 0; // 0x3fc
	char bDisabled : 0; // 0x3fc
	char bForceObstacleMeshCollision : 0; // 0x3fc
	FVector ExpansionSphereCenter; // 0x400
	ComponentProperty RenderingComp; // 0x40c
	ComponentProperty BrokenSprite; // 0x414
	TArray<ObjectProperty> ImposterPylons; // 0x41c
	TArray<ObjectProperty> OnBuild_DisableCollisionForThese; // 0x42c
	TArray<ObjectProperty> OnBuild_EnableCollisionForThese; // 0x43c
	float MaxPolyHeight_Optional; // 0x44c
	char NavMeshGenerator; // 0x450
	TArray<FKAggregateGeom> VoxelFilterBounds; // 0x454
	TArray<FMatrix> VoxelFilterTM; // 0x464
	int32_t DebugEdgeCount; // 0x474
	FVector DebugPathExtent; // 0x478
	FVector DebugPathStartLocation; // 0x484
};

struct UTgSeqAct_SetPlayerMesh {
	int32_t m_nMeshAsmId; // 0x108
};

struct ATgBotFactory_Leashed {
	FVector LeashLocation; // 0x384
	float LeashRange; // 0x390
	ObjectProperty LeashVolume; // 0x394
};

struct UTgSeqCond_CompareDeviceId {
	ObjectProperty Device; // 0xec
	int32_t DeviceID; // 0xf4
};

struct ATgDemoRecSpectator_Debug {
	ObjectProperty m_OriginalPlayer; // 0x18f8
	ObjectProperty m_OriginalPlayerController; // 0x1900
};

struct UTgAnimBlendByPaladinsCharacter_Drogoz {
	TArray<FName> m_AmmoSkelControlNames; // 0x544
	TArray<ObjectProperty> m_AmmoSkelControls; // 0x554
};

struct UTgSeqAct_SetCreditGainBlock {
	int32_t m_bBlockCreditGain; // 0x108
};

struct AFractureManager {
	int32_t FSMPartPoolSize; // 0x280
	char bEnableAntiVibration : 1; // 0x284
	char bEnableSpawnChunkEffectForRadialDamage : 1; // 0x284
	float DestroyVibrationLevel; // 0x288
	float DestroyMinAngVel; // 0x28c
	float ExplosionVelScale; // 0x290
	TArray<ObjectProperty> PartPool; // 0x294
	TArray<int32_t> FreeParts; // 0x2a4
	TArray<ObjectProperty> ActorsWithDeferredPartsToSpawn; // 0x2b4
};

struct UMaterialExpressionCrossProduct {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct USkeletalMeshSocket {
	FName SocketName; // 0x60
	FName BoneName; // 0x68
	FVector RelativeLocation; // 0x70
	FRotator RelativeRotation; // 0x7c
	FVector RelativeScale; // 0x88
	ComponentProperty PreviewSkelComp; // 0x94
};

struct UTgAnimNodeStance {
	int32_t m_Stance; // 0x144
};

struct USeqEvent_PlayerSpawned {
	ObjectProperty SpawnPoint; // 0x128
};

struct ATgAkActor {
	char m_bCanCheckOcclusion : 1; // 0x280
};

struct UAnimNodeSynch {
	TArray<FSynchGroup> Groups; // 0x114
};

struct UTgAIUtilityFilter_AssaultRangeType {
	ERangeType RangeType; // 0xc0
};

struct UAnimationCompressionAlgorithm {
	FString Description; // 0x60
	char bNeedsSkeleton : 1; // 0x70
	AnimationCompressionFormat TranslationCompressionFormat; // 0x74
	AnimationCompressionFormat RotationCompressionFormat; // 0x75
};

struct ATgDeploy_SiegeShield {
	FRotator m_InitRotation; // 0x448
	ComponentProperty m_VFXCollisionMesh; // 0x454
	ObjectProperty m_CollisionProxy; // 0x45c
	float r_GroundSpeed; // 0x464
	char m_bOnlyHitOnce : 1; // 0x468
};

struct UTgPhysicalMaterialProperty {
	FName MaterialType; // 0x60
};

struct UUIComponent_DisplayPlayer {
	ObjectProperty m_mcAvatarIcon; // 0x120
	ObjectProperty m_mcPlayerName; // 0x128
	ObjectProperty m_mcPlayerTitle; // 0x130
	ObjectProperty m_mcClassIcon; // 0x138
	ObjectProperty m_mcChickenIcon; // 0x140
	ObjectProperty m_mcDeathIcon; // 0x148
	ObjectProperty m_mcColorIcon; // 0x150
	ObjectProperty m_mcLives; // 0x158
	ObjectProperty m_mcKills; // 0x160
	ObjectProperty m_mcShards; // 0x168
	ObjectProperty m_pMuteButton; // 0x170
	ObjectProperty m_pArmorBar; // 0x178
	ObjectProperty m_pHealthBar; // 0x180
	ObjectProperty m_pItems; // 0x188
	ObjectProperty m_pFrameButton; // 0x190
};

struct UTgSkelCon_LookAt {
	ObjectProperty m_Owner; // 0x16c
	char m_bAimAtEnemyTarget : 1; // 0x174
	char m_AlwaysInterpolateTarget : 1; // 0x174
	char m_bHadTargetLastTick : 1; // 0x174
};

struct UTgSeqAct_GetTaskForceCount {
	int32_t Taskforce; // 0x108
	int32_t m_nPlayerCount; // 0x10c
	int32_t m_nBotCount; // 0x110
};

struct UTextureRenderTargetCube {
	int32_t SizeX; // 0x108
	EPixelFormat Format; // 0x10c
};

struct ATgRealmCapturePoint {
	int32_t r_nUniqueCapturePointId; // 0x2b0
	ObjectProperty m_CustomAnimNode; // 0x2b4
	int32_t c_MICStatus; // 0x2bc
	ObjectProperty m_HelpTip; // 0x2c0
	TArray<ObjectProperty> CapturePointMeshActors; // 0x2c8
	TArray<ObjectProperty> m_Volumes; // 0x2d8
	float m_fContestDuration; // 0x2e8
	float m_fContestTimer; // 0x2ec
	TArray<ObjectProperty> m_TouchingChampions; // 0x2f0
};

struct UUIComponent_CrownPack {
	int32_t m_nPackId; // 0x120
	ObjectProperty m_mcPurchaseAmount; // 0x124
	ObjectProperty m_mcBonusAmount; // 0x12c
	ObjectProperty m_pCrowns; // 0x134
	ObjectProperty m_pPrice; // 0x13c
	ObjectProperty m_pFrameButton; // 0x144
};

struct UTgLocalPlayer {
	float m_fViewScale; // 0x474
	FVector m_vViewPan; // 0x478
	char m_bEnableOutlineEffect : 1; // 0x484
	char m_bEnableColorBlindEffect : 1; // 0x484
	char m_bColorBlindSimulate : 1; // 0x484
	char m_bBlurForeground : 1; // 0x484
	float m_fHitOnlyAlpha; // 0x488
	float m_fHealthOnlyAlpha; // 0x48c
	float m_fHealthPPAlpha; // 0x490
	float m_fDeathDesatPPAlpha; // 0x494
	int32_t m_eColorBlindEffectType; // 0x498
	float m_fTargetBlurAmount; // 0x49c
	float m_fBlurAmount; // 0x4a0
	float m_fBlurInterpSpeed; // 0x4a4
	float m_fBlurKernelSize; // 0x4a8
	EDOFType m_eCurrentDOFType; // 0x4ac
};

struct USavedMove {
	ObjectProperty NextMove; // 0x60
	float TimeStamp; // 0x68
	float Delta; // 0x6c
	char bRun : 1; // 0x70
	char bDuck : 1; // 0x70
	char bPressedJump : 1; // 0x70
	char bDoubleJump : 1; // 0x70
	char bPreciseDestination : 1; // 0x70
	char bForceRMVelocity : 1; // 0x70
	char bForceMaxAccel : 1; // 0x70
	char bRootMotionFromInterpCurve : 1; // 0x70
	EDoubleClickDir DoubleClickMove; // 0x74
	EPhysics SavedPhysics; // 0x75
	ERootMotionMode RootMotionMode; // 0x76
	FVector StartLocation; // 0x78
	FVector StartRelativeLocation; // 0x84
	FVector StartVelocity; // 0x90
	FVector StartFloor; // 0x9c
	FVector SavedLocation; // 0xa8
	FVector SavedVelocity; // 0xb4
	FVector SavedRelativeLocation; // 0xc0
	FVector RMVelocity; // 0xcc
	FVector Acceleration; // 0xd8
	FRotator Rotation; // 0xe4
	ObjectProperty StartBase; // 0xf0
	ObjectProperty EndBase; // 0xf8
	float CustomTimeDilation; // 0x100
	float AccelDotThreshold; // 0x104
	float RootMotionInterpCurrentTime; // 0x108
	FVector RootMotionInterpCurveLastValue; // 0x10c
};

struct UAnimationCompressionAlgorithm_PerTrackCompression {
	float MaxZeroingThreshold; // 0x94
	float MaxPosDiffBitwise; // 0x98
	float MaxAngleDiffBitwise; // 0x9c
	TArray<AnimationCompressionFormat> AllowedRotationFormats; // 0xa0
	TArray<AnimationCompressionFormat> AllowedTranslationFormats; // 0xb0
	char bResampleAnimation : 1; // 0xc0
	char bUseAdaptiveError : 1; // 0xc0
	char bUseOverrideForEndEffectors : 1; // 0xc0
	char bUseAdaptiveError2 : 1; // 0xc0
	float ResampledFramerate; // 0xc4
	int32_t MinKeysForResampling; // 0xc8
	int32_t TrackHeightBias; // 0xcc
	float ParentingDivisor; // 0xd0
	float ParentingDivisorExponent; // 0xd4
	float RotationErrorSourceRatio; // 0xd8
	float TranslationErrorSourceRatio; // 0xdc
	float MaxErrorPerTrackRatio; // 0xe0
	float PerturbationProbeSize; // 0xe4
	FPointer PerReductionCachedData; // 0xe8
};

struct USeqAct_SetMotionBlurParams {
	float MotionBlurAmount; // 0x120
	float InterpolateSeconds; // 0x124
	float InterpolateElapsed; // 0x128
	float OldMotionBlurAmount; // 0x12c
};

struct UTgInvListener_Scapegoat {
	ObjectProperty m_CachedShield; // 0xc8
};

struct URB_ConstraintInstance {
	ObjectProperty Owner; // 0x60
	ComponentProperty OwnerComponent; // 0x68
	int32_t ConstraintIndex; // 0x70
	int32_t SceneIndex; // 0x74
	char bInHardware : 1; // 0x78
	char bLinearXPositionDrive : 1; // 0x78
	char bLinearXVelocityDrive : 1; // 0x78
	char bLinearYPositionDrive : 1; // 0x78
	char bLinearYVelocityDrive : 1; // 0x78
	char bLinearZPositionDrive : 1; // 0x78
	char bLinearZVelocityDrive : 1; // 0x78
	char bSwingPositionDrive : 1; // 0x78
	char bSwingVelocityDrive : 0; // 0x78
	char bTwistPositionDrive : 0; // 0x78
	char bTwistVelocityDrive : 0; // 0x78
	char bAngularSlerpDrive : 0; // 0x78
	char bTerminated : 0; // 0x78
	FPointer ConstraintData; // 0x7c
	FVector LinearPositionTarget; // 0x84
	FVector LinearVelocityTarget; // 0x90
	float LinearDriveSpring; // 0x9c
	float LinearDriveDamping; // 0xa0
	float LinearDriveForceLimit; // 0xa4
	FQuat AngularPositionTarget; // 0xb0
	FVector AngularVelocityTarget; // 0xc0
	float AngularDriveSpring; // 0xcc
	float AngularDriveDamping; // 0xd0
	float AngularDriveForceLimit; // 0xd4
	FPointer DummyKinActor; // 0xd8
};

struct ARB_RadialForceActor {
	ComponentProperty RenderComponent; // 0x280
	float ForceStrength; // 0x288
	float ForceRadius; // 0x28c
	float SwirlStrength; // 0x290
	float SpinTorque; // 0x294
	ERadialImpulseFalloff ForceFalloff; // 0x298
	ERadialForceType RadialForceMode; // 0x299
	char bForceActive : 1; // 0x29c
	char bForceApplyToCloth : 1; // 0x29c
	char bForceApplyToFluid : 1; // 0x29c
	char bForceApplyToRigidBodies : 1; // 0x29c
	char bForceApplyToProjectiles : 1; // 0x29c
	FRBCollisionChannelContainer CollideWithChannels; // 0x2a0
};

struct UMcpMessageManager {
	FPointer VfTable_FTickableObject; // 0xec
	FString CreateMessageUrl; // 0xf4
	FString DeleteMessageUrl; // 0x104
	FString QueryMessagesUrl; // 0x114
	FString QueryMessageContentsUrl; // 0x124
	FString DeleteAllMessagesUrl; // 0x134
	TArray<FMcpCompressMessageRequest> CompressMessageRequests; // 0x144
	TArray<FMcpUncompressMessageRequest> UncompressMessageRequests; // 0x154
};

struct UMcpUserInventoryManager {
	FString CreateSaveSlotUrl; // 0x128
	FString DeleteSaveSlotUrl; // 0x138
	FString ListSaveSlotUrl; // 0x148
	FString ListItemsUrl; // 0x158
	FString PurchaseItemUrl; // 0x168
	FString SellItemUrl; // 0x178
	FString EarnItemUrl; // 0x188
	FString ConsumeItemUrl; // 0x198
	FString DeleteItemUrl; // 0x1a8
	FString IapRecordUrl; // 0x1b8
	TArray<FMcpInventorySaveSlot> SaveSlots; // 0x1c8
	TArray<FSaveSlotRequestState> SaveSlotRequests; // 0x1d8
	TArray<FSaveSlotRequestState> ListSaveSlotRequests; // 0x1e8
	TArray<FSaveSlotRequestState> ListItemsRequests; // 0x1f8
	TArray<FInventoryItemRequestState> ItemRequests; // 0x208
};

struct UTgInventoryObject_Listen_Combo_Ying {
	float m_fCombo1MaxDuration; // 0xd0
	float m_fCombo1BonusDamagePercent; // 0xd4
	float m_fCombo2BonusDamage; // 0xd8
	TArray<ObjectProperty> m_MarkedTargets; // 0xdc
	TArray<float> m_fMarkTimes; // 0xec
	ObjectProperty m_InhandTarget; // 0xfc
	int32_t m_nInhandHits; // 0x104
	int32_t m_nCombo1DeviceId; // 0x108
};

struct ATgEffectManager {
	FDiminishedEffectInfo r_GroundSpeedMods; // 0x280
	FEffectListEntry r_ManagedEffectList[0x10]; // 0x290
	char c_byCounterList[0x10]; // 0x390
	char c_InstanceCounts[0x10]; // 0x3a0
	EStunType s_eCachedStunType; // 0x3b0
	float m_fTimeRemaining[0x10]; // 0x3b4
	ObjectProperty c_Forms[0x10]; // 0x3f4
	char c_ActiveTimers : 1; // 0x474
	char r_bRelevancyNotify : 1; // 0x474
	FEffectQueueEntry r_EventQueue[0x10]; // 0x478
	int32_t r_nNextQueueIndex; // 0x678
	int32_t r_nFirstValidQueueIndex; // 0x67c
	int32_t c_nLastQueueIndex; // 0x680
	TArray<ObjectProperty> s_AppliedEffectGroups; // 0x684
	TArray<ObjectProperty> s_AppliedPermanentEffects; // 0x694
	ObjectProperty r_Owner; // 0x6a4
	ObjectProperty m_ApplyDamageEffectGroup; // 0x6ac
	ObjectProperty m_ApplyDamageEffect; // 0x6b4
	ObjectProperty m_ApplyHealthEffectGroup; // 0x6bc
	ObjectProperty m_ApplyHealthEffect; // 0x6c4
	ObjectProperty m_ApplyManaEffectGroup; // 0x6cc
	ObjectProperty m_ApplyManaEffect; // 0x6d4
	ObjectProperty m_ApplyEnergyEffectGroup; // 0x6dc
	ObjectProperty m_ApplyEnergyEffect; // 0x6e4
	TArray<FStunStackEntry> s_StunStack; // 0x6ec
	TArray<FEnergyStunStackEntry> s_EnergyStunStack; // 0x6fc
	TArray<FReduceActiveCooldownEntry> s_ReduceActiveCooldownEffects; // 0x70c
	float m_fMaxReduceActiveCooldownDelay; // 0x71c
	int32_t s_nSilenceCount; // 0x720
	int32_t s_nDisarmCount; // 0x724
	int32_t s_nCrippleCount; // 0x728
	int32_t s_nStealthCount; // 0x72c
	int32_t s_nDazeCount; // 0x730
	int32_t s_nMarkedCount; // 0x734
	int32_t s_nSlowCount; // 0x738
	int32_t s_bStealthDisabledCount; // 0x73c
	int32_t s_nOnFireCount; // 0x740
	int32_t s_nCCImmuneCount; // 0x744
	int32_t s_nBleedingCount; // 0x748
	int32_t s_nKnockbackCount; // 0x74c
	int32_t s_nRootCount; // 0x750
	int32_t s_nPoisonedCount; // 0x754
	int32_t s_nBoostCount; // 0x758
	int32_t s_nStealthInCombatCount; // 0x75c
	int32_t s_nWallHackCount; // 0x760
	int32_t s_nForceOutOfCombatCount; // 0x764
	int32_t s_nPolymorphCount; // 0x768
	int32_t s_nRevealedCount; // 0x76c
	int32_t s_nFlashCount; // 0x770
	float s_fSpawnGuardTime; // 0x774
	TArray<ObjectProperty> s_InstigatorWallReveals; // 0x778
	TArray<int32_t> s_nInstigatorWallRevealCount; // 0x788
	TArray<ObjectProperty> s_InstigatorStealthReveals; // 0x798
	TArray<int32_t> s_nInstigatorStealthRevealCount; // 0x7a8
	TArray<ObjectProperty> s_SlowCaps; // 0x7b8
	TArray<ObjectProperty> s_MaxHPDamageCaps; // 0x7c8
	TArray<ObjectProperty> s_CurHPDamageCaps; // 0x7d8
	int32_t s_FreezeBehaviorCount; // 0x7e8
	TArray<FDiminishingReturnsStackInfo> s_DiminishingReturnsStacks; // 0x7ec
	int32_t m_nDiminishingReturnMaxStacks; // 0x7fc
	TArray<ObjectProperty> s_ActiveDamageDeviceIntercepts; // 0x800
	TArray<ObjectProperty> s_ActiveDamageMitigationIntercepts; // 0x810
	TArray<ObjectProperty> s_ActiveOnLandedIntercepts; // 0x820
	TArray<ObjectProperty> s_ActiveWallKnockbackHits; // 0x830
	TArray<ObjectProperty> s_ActivePlayerKnockbackHits; // 0x840
};

struct UAnimNotify_PlayParticleEffect {
	ObjectProperty PSTemplate; // 0x68
	char bIsExtremeContent : 1; // 0x70
	char bAttach : 1; // 0x70
	char bPreview : 1; // 0x70
	char bSkipIfOwnerIsHidden : 1; // 0x70
	char bIsFootstep : 1; // 0x70
	char ShouldDilateTimeByPlayRate : 1; // 0x70
	char m_bReuse : 1; // 0x70
	ObjectProperty PSNonExtremeContentTemplate; // 0x74
	FName SocketName; // 0x7c
	FName BoneName; // 0x84
	FName BoneSocketModuleActorName; // 0x8c
	float TimeDilationFactor; // 0x94
};

struct AStaticMeshActorBasedOnExtremeContent {
	ComponentProperty StaticMeshComponent; // 0x280
	TArray<FSMMaterialSetterDatum> ExtremeContent; // 0x288
	TArray<FSMMaterialSetterDatum> NonExtremeContent; // 0x298
};

struct UAnimNodeBlendByBase {
	EBaseBlendType Type; // 0x144
	FName ActorTag; // 0x148
	AActor* ActorClass; // 0x150
	float BlendTime; // 0x158
	ObjectProperty CachedBase; // 0x15c
};

struct USeqAct_AttachToActor {
	char bDetach : 1; // 0x108
	char bHardAttach : 1; // 0x108
	char bUseRelativeOffset : 1; // 0x108
	char bUseRelativeRotation : 1; // 0x108
	FName BoneName; // 0x10c
	FVector RelativeOffset; // 0x114
	FRotator RelativeRotation; // 0x120
};

struct UMaterialExpressionTransformPosition {
	FExpressionInput Input; // 0xb0
	EMaterialPositionTransformSource TransformSourceType; // 0xe4
	EMaterialPositionTransform TransformType; // 0xe5
};

struct UUIData_Vendor {
	Fdword m_dwVendorId; // 0x60
	TMap<None, None> m_LootTableItems; // 0x64
	TArray<ObjectProperty> m_AsArray; // 0xac
};

struct ATgDevice_Survival {
	ObjectProperty m_ThrustDevice; // 0xaec
};

struct UTgSeqEvent_MissionTimeRemaining {
	float SecsRemaining; // 0x128
};

struct USeqEvent_HudRender {
	TArray<ObjectProperty> Targets; // 0x128
	char bIsActive : 1; // 0x138
	float AuthoredGlobalScale; // 0x13c
};

struct UTgInventoryObject_Listen_DuringAbility {
	char m_bAbilityInActiveState : 1; // 0xd0
	char m_bIsActive : 1; // 0xd0
	EDuringAbilityType m_eDuringType; // 0xd4
};

struct UTgCameraModule_SpectatorThirdPerson {
	FTPOV OldViewpoint; // 0x1cc
	float RemainingBlendTime; // 0x1f0
	float TotalBlendTime; // 0x1f4
};

struct UUIComponent_GenericTitleButtons {
	ObjectProperty m_mcTitle[0x2]; // 0x120
	ObjectProperty m_Buttons[0x8]; // 0x130
	int32_t m_ButtonClickHandles[0x8]; // 0x170
	ObjectProperty m_grButtons; // 0x190
};

struct UUIData_CustomGameManager {
	FString sName; // 0x60
	FString sDesc; // 0x70
	int32_t nIcon; // 0x80
};

struct UTgSeqAct_ClientLoadDevices {
	TArray<int32_t> m_DeviceIdList; // 0x108
	char m_bClearExistingLoads : 1; // 0x118
};

struct UTgGameplayCurvesSet_HitReactions {
	FRawDistributionFloat ReactionStrengthOverTime; // 0x64
	FRawDistributionFloat ReactionStrengthOverTimeDelayed; // 0x88
	FRawDistributionFloat ReactionStrengthByDamage; // 0xac
};

struct UDrawBoxComponent {
	FColor BoxColor; // 0x24c
	ObjectProperty BoxMaterial; // 0x250
	FVector BoxExtent; // 0x258
	char bDrawWireBox : 1; // 0x264
	char bDrawLitBox : 1; // 0x264
	char bDrawOnlyIfSelected : 1; // 0x264
};

struct ASoundComponentPool {
	TArray<ComponentProperty> PoolSounds; // 0x280
	TArray<ComponentProperty> ActiveSounds; // 0x290
	int32_t StartingNumComponents; // 0x2a0
};

struct UMaterialExpressionDivide {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct USeqAct_ToggleConstraintDrive {
	char bEnableAngularPositionDrive : 1; // 0x108
	char bEnableAngularVelocityDrive : 1; // 0x108
	char bEnableLinearPositionDrive : 1; // 0x108
	char bEnableLinearvelocityDrive : 1; // 0x108
};

struct APComPlayerController {
	FUniqueNetId m_LastPendingPartyInviteId; // 0x77c
	char m_bPartySessionJoinInProgress : 1; // 0x784
	char m_bPartySessionCreateInProgress : 1; // 0x784
	char m_bPartyDestroyInProgress : 1; // 0x784
	char m_bQuittingToMainMenu : 1; // 0x784
	char m_bHasAcknowledgedPawn : 1; // 0x784
	char m_bKeepLoggedIn : 1; // 0x784
	Fdword m_dwPendingPartyId; // 0x788
	int32_t m_nMaxPartyPublicConnections; // 0x78c
	FOnlineGameSearchResult m_PendingInviteResult; // 0x790
	FName PartySessionName; // 0x7a0
	FName GameSessionName; // 0x7a8
	Fdword m_dwLastLoginPortalId; // 0x7b0
	Fdword m_dwLastLoginAccountId; // 0x7b4
	FString m_sLastLoginAccessToken; // 0x7b8
	FString m_sLastLoginAccessTokenExpiration; // 0x7c8
};

struct UNxForceFieldGenericComponent {
	float RoughExtentX; // 0x2bc
	float RoughExtentY; // 0x2c0
	float RoughExtentZ; // 0x2c4
	FFG_ForceFieldCoordinates Coordinates; // 0x2c8
	FVector Constant; // 0x2cc
	FVector PositionMultiplierX; // 0x2d8
	FVector PositionMultiplierY; // 0x2e4
	FVector PositionMultiplierZ; // 0x2f0
	FVector PositionTarget; // 0x2fc
	FVector VelocityMultiplierX; // 0x308
	FVector VelocityMultiplierY; // 0x314
	FVector VelocityMultiplierZ; // 0x320
	FVector VelocityTarget; // 0x32c
	FVector Noise; // 0x338
	FVector FalloffLinear; // 0x344
	FVector FalloffQuadratic; // 0x350
	float TorusRadius; // 0x35c
	FPointer Kernel; // 0x360
};

struct UTgSeqAct_LogTutorialAction {
	int32_t PlayerAction; // 0x108
	int32_t EventData; // 0x10c
};

struct UTgAnimNodeStanceTransition {
	int32_t m_SourceStance; // 0x144
	int32_t m_DestinationStance; // 0x148
};

struct UTgSkelCon_RotateToAim {
	float m_fRotationSpeed; // 0x100
	char m_bUseConstantSpeed : 1; // 0x104
	FRotator Aim; // 0x108
	FRotator m_rTargetRotation; // 0x114
};

struct UUIComponent_PlayerName {
	UIALIGNINGTYPE m_eAlignment; // 0x120
	ObjectProperty m_mcNameStandard; // 0x124
	ObjectProperty m_mcNameVIP; // 0x12c
	ObjectProperty m_mcVIPIcon; // 0x134
	TArray<ObjectProperty> m_mcNameVIPSparkles; // 0x13c
	TArray<ObjectProperty> m_mcNameVIPStrokes; // 0x14c
};

struct UParticleSystem {
	EParticleSystemUpdateMode SystemUpdateMode; // 0x60
	ParticleSystemLODMethod LODMethod; // 0x61
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0x62
	float UpdateTime_FPS; // 0x64
	float UpdateTime_Delta; // 0x68
	float WarmupTime; // 0x6c
	float WarmupTickRate; // 0x70
	int32_t TranslucencySortPriority; // 0x74
	TArray<ObjectProperty> Emitters; // 0x78
	ComponentProperty PreviewComponent; // 0x88
	char bLit : 1; // 0x90
	char bOrientZAxisTowardCamera : 1; // 0x90
	char bRegenerateLODDuplicate : 1; // 0x90
	char bUseFixedRelativeBoundingBox : 1; // 0x90
	char m_bDeactivateOnInactive : 1; // 0x90
	char m_bDeactivateOnInactiveIfEmitterPool : 1; // 0x90
	char m_bHasDisplayMasks : 1; // 0x90
	char bShouldResetPeakCounts : 1; // 0x90
	char bHasPhysics : 0; // 0x90
	char bUseRealtimeThumbnail : 0; // 0x90
	char ThumbnailImageOutOfDate : 0; // 0x90
	char bSkipSpawnCountCheck : 0; // 0x90
	char bUseDelayRange : 0; // 0x90
	ObjectProperty CurveEdSetup; // 0x94
	float LODDistanceCheckTime; // 0x9c
	TArray<float> LODDistances; // 0xa0
	TArray<FParticleSystemLOD> LODSettings; // 0xb0
	FBox FixedRelativeBoundingBox; // 0xc0
	float SecondsBeforeInactive; // 0xdc
	float Delay; // 0xe0
	float DelayLow; // 0xe4
	FVector MacroUVPosition; // 0xe8
	float MacroUVRadius; // 0xf4
	FBox CustomOcclusionBounds; // 0xf8
	TArray<FLODSoloTrack> SoloTracking; // 0x114
	TArray<ObjectProperty> GCExternalReferences; // 0x124
};

struct USceneCaptureReflectComponent {
	ObjectProperty TextureTarget; // 0xd0
	float ScaleFOV; // 0xd8
	TArray<ObjectProperty> ActorsToReflect; // 0xdc
};

struct USoundNodeConcatenator {
	TArray<float> InputVolume; // 0x74
};

struct ATgRespawnBeaconExit {
	char m_bChangesYaw : 1; // 0x32c
	char c_bHiddenToLocalPlayer : 1; // 0x32c
	float m_fPercHealthPerSec; // 0x330
	float m_fHealthRegenLockoutTime; // 0x334
	int32_t r_nRespawnTime; // 0x338
	float m_fTimeUntilHealTick; // 0x33c
	FRotator m_rInitialRot; // 0x340
	FVector m_vInitialPos; // 0x34c
	ObjectProperty r_CarrierRepInfo; // 0x358
	ObjectProperty m_SpawnPointOverride; // 0x360
	ObjectProperty r_CurrentVisibilityVolumes[0x2]; // 0x368
	ERespawnBeaconActiveState c_LocalActiveState; // 0x378
	ERespawnBeaconActiveState r_ActiveState; // 0x379
	char r_nPlayTakeHit; // 0x37a
	TArray<ObjectProperty> m_Entrances; // 0x37c
	TArray<DelegateProperty> m_CarriedDel; // 0x38c
	TArray<DelegateProperty> m_DestroyedDel; // 0x39c
	TArray<DelegateProperty> m_DeployingDel; // 0x3ac
	TArray<DelegateProperty> m_ActiveDel; // 0x3bc
	FVector r_nDeathLocation; // 0x3cc
	ObjectProperty m_LastDamager; // 0x3d8
	DelegateProperty __BeaconStateChanged__Delegate; // 0x3e0
};

struct UAnimObject {
	ComponentProperty SkelComponent; // 0x60
};

struct USeqAct_SubtractInt {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UTgAnimNodeBlendByCombatWariness {
	float CombatWarinessDuration; // 0x168
	char AllowIdleAnimToComplete : 1; // 0x16c
	char AllowWaryAnimToComplete : 1; // 0x16c
	char IsWary : 1; // 0x16c
	float WaryTime; // 0x170
};

struct USeqAct_Gate {
	char bOpen : 1; // 0x108
	int32_t AutoCloseCount; // 0x10c
	int32_t CurrentCloseCount; // 0x110
};

struct AKActorFromStatic {
	ObjectProperty MyStaticMeshActor; // 0x3b4
	float MaxImpulseSpeed; // 0x3bc
};

struct UTgInvListener_SteadyAim {
	int32_t m_nSteadyAimStackCount; // 0xc8
	float m_fFullyChargedHitTime; // 0xcc
};

struct USeqAct_SetWorldAttractorParam {
	TArray<ObjectProperty> Attractor; // 0x108
	char bEnabledField : 1; // 0x118
	char bFalloffTypeField : 1; // 0x118
	char bFalloffExponentField : 1; // 0x118
	char bRangeField : 1; // 0x118
	char bStrengthField : 1; // 0x118
	char bEnabled : 1; // 0x118
	EWorldAttractorFalloffType FalloffType; // 0x11c
	FRawDistributionFloat FalloffExponent; // 0x120
	FRawDistributionFloat Range; // 0x144
	FRawDistributionFloat Strength; // 0x168
};

struct UTgAIBehaviorAction_SpreadFromSquad {
	float SpreadDistance; // 0x9c
};

struct UParticleModuleColorByParameter {
	FName ColorParam; // 0x68
	FColor DefaultColor; // 0x70
};

struct UTgSkelControlTrail {
	FVector m_vMaxTranslation; // 0x150
	FVector m_vMinTranslation; // 0x15c
	char m_bLimitTranslation : 1; // 0x168
};

struct USeqVar_Float {
	float FloatValue; // 0xa0
};

struct UProcBuildingRuleset {
	ObjectProperty RootRule; // 0x60
	char bBeingEdited : 1; // 0x68
	char bEnableInteriorTexture : 1; // 0x68
	char bLODOnlyRoof : 1; // 0x68
	char bPickRandomSwatch : 1; // 0x68
	ObjectProperty DefaultRoofMaterial; // 0x6c
	ObjectProperty DefaultFloorMaterial; // 0x74
	ObjectProperty DefaultNonRectWallMaterial; // 0x7c
	float RoofZOffset; // 0x84
	float NotRoofZOffset; // 0x88
	float FloorZOffset; // 0x8c
	float NotFloorZOffset; // 0x90
	float RoofPolyInset; // 0x94
	float FloorPolyInset; // 0x98
	float BuildingLODSpecular; // 0x9c
	float RoofEdgeScopeRaise; // 0xa0
	ObjectProperty LODCubemap; // 0xa4
	ObjectProperty InteriorTexture; // 0xac
	TArray<FPBVariationInfo> Variations; // 0xb4
	TArray<FPBParamSwatch> ParamSwatches; // 0xc4
};

struct UTgInventoryObject_Listen_AdjustFiringInstances {
	TArray<FAdjustedFiringInstance> m_pFiringInstancesToAdjust; // 0xc8
	int32_t m_nItemDeviceTypeToTrack; // 0xd8
	int32_t m_nActivationItemDeviceType; // 0xdc
	int32_t m_nActivationDeviceType; // 0xe0
	char m_bJustActivated : 1; // 0xe4
	float m_fDuration; // 0xe8
	float m_fLastActivation; // 0xec
};

struct UTgDamageType {
	char m_bImpulseMesh : 1; // 0x90
	char m_bDisableRagdoll : 1; // 0x90
	char m_bEnableMotors : 1; // 0x90
	char m_bShouldRagdollAfterDeathAnim : 1; // 0x90
	char m_bCanPlayDeathSpecialFXOnDefaultDeath : 1; // 0x90
	char m_bHarvestMaterialParameters : 1; // 0x90
	char m_bFreezeAnimsOnDeath : 1; // 0x90
	char m_bIgnorePersonalShields : 1; // 0x90
	char m_bIsLatent : 0; // 0x90
	char m_bIsAOE : 0; // 0x90
	char m_bDismountVictim : 0; // 0x90
	char m_bPreventHitDirectionNotify : 0; // 0x90
	float m_bMinImpulse; // 0x94
	float m_bMaxImpulse; // 0x98
	float m_bMinUpKick; // 0x9c
	float m_bMaxUpKick; // 0xa0
	TArray<FName> m_nmDeathAnimNames; // 0xa4
	TArray<FName> m_nmDeathFlailAnimNames; // 0xb4
	float m_fMinAngularVelocity; // 0xc4
	float m_fMaxAngularVelocity; // 0xc8
	int32_t m_nDeathSpecialFXId; // 0xcc
	FName m_nmDeathSpecialFXSocket; // 0xd0
	ObjectProperty m_OverrideMaterial; // 0xd8
	float m_fLifeAfterDeathSeconds; // 0xe0
	float m_fHideAfterDeathSeconds; // 0xe4
	int32_t m_nFadeOutSpecialFXId; // 0xe8
	TArray<FName> ActivateSkelControlListOnDeath; // 0xec
	ObjectProperty m_TakeHitAkEvent; // 0xfc
	ObjectProperty m_TakeHeadShotAkEvent; // 0x104
	UTgDamageType* m_LatentDamageType; // 0x10c
	ObjectProperty m_LeftCameraShake; // 0x114
	ObjectProperty m_RightCameraShake; // 0x11c
	ObjectProperty m_ForwardCameraShake; // 0x124
	ObjectProperty m_BackwardCameraShake; // 0x12c
	ObjectProperty m_BackwardRightCameraShake; // 0x134
	ObjectProperty m_BackwardLeftCameraShake; // 0x13c
	ObjectProperty m_ForwardRightCameraShake; // 0x144
	ObjectProperty m_ForwardLeftCameraShake; // 0x14c
};

struct UGenericParamListStatEntry {
	FPointer StatEvent; // 0x60
	ObjectProperty Writer; // 0x68
};

struct AInventory {
	ObjectProperty Inventory; // 0x280
	ObjectProperty InvManager; // 0x288
	FString ItemName; // 0x290
	char bDropOnDeath : 1; // 0x2a0
	char bDelayedSpawn : 1; // 0x2a0
	char bPredictRespawns : 1; // 0x2a0
	float RespawnTime; // 0x2a4
	float MaxDesireability; // 0x2a8
	FString PickupMessage; // 0x2ac
	ObjectProperty PickupSound; // 0x2bc
	FString PickupForce; // 0x2c4
	ADroppedPickup* DroppedPickupClass; // 0x2d4
	ComponentProperty DroppedPickupMesh; // 0x2dc
	ComponentProperty PickupFactoryMesh; // 0x2e4
	ComponentProperty DroppedPickupParticles; // 0x2ec
};

struct UCylinderComponent {
	float CollisionHeight; // 0x24c
	float CollisionRadius; // 0x250
	FColor CylinderColor; // 0x254
	char bDrawBoundingBox : 1; // 0x258
	char bDrawNonColliding : 1; // 0x258
	char bAlwaysRenderIfSelected : 1; // 0x258
};

struct UGameCrowdBehavior_PlayAnimation {
	TArray<FName> AnimationList; // 0x9c
	float BlendInTime; // 0xac
	float BlendOutTime; // 0xb0
	char bUseRootMotion : 1; // 0xb4
	char bLookAtPlayer : 1; // 0xb4
	char bLooping : 1; // 0xb4
	char bBlendBetweenAnims : 1; // 0xb4
	ObjectProperty CustomActionTarget; // 0xb8
	int32_t LoopIndex; // 0xc0
	float LoopTime; // 0xc4
	ObjectProperty AnimSequence; // 0xc8
	int32_t AnimationIndex; // 0xd0
};

struct UTgSilhouetteComponent {
	char bEnabled : 1; // 0x24c
	char bUseFadeOutAlpha : 1; // 0x24c
	char bNegativeSilhouette : 1; // 0x24c
	char bUseThicknessMultiplier : 1; // 0x24c
	char bUseDepthSorting : 1; // 0x24c
	FLinearColor SilhouetteColor; // 0x250
	float NearThickness; // 0x260
	float FarThickness; // 0x264
	float NearDistance; // 0x268
	float FarDistance; // 0x26c
	ComponentProperty MeshComponent; // 0x270
	float NearDistanceSq; // 0x278
	float FarDistanceSq; // 0x27c
	float FadeOutTime; // 0x280
	float RemainingFadeOutTime; // 0x284
	int32_t PrimitiveSceneInfoId; // 0x288
	float ThicknessMultiplier; // 0x28c
	float DefaultThicknessMultiplier; // 0x290
	FPointer ReleaseResourcesFence; // 0x294
};

struct ATgGameInfo_TeamDeathMatch {
	char m_bSpawnInputLock : 1; // 0x280
	char m_bAllowSpawnGuardDuringDeviceFire : 1; // 0x280
};

struct UUIComponent_ItemStats {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_ItemStatEntries; // 0x128
};

struct UMantleReachSpec {
	char bClimbUp : 1; // 0xc8
};

struct ASceneCapture2DActor {
	ComponentProperty DrawFrustum; // 0x288
};

struct UTgGameplayCurvesSet_AimAssistLocking {
	FRawDistributionFloat RelativeLockStrengthHoriz; // 0x64
	FRawDistributionFloat RelativeLockStrengthVert; // 0x88
	FRawDistributionFloat RelativeLockStrengthByDist; // 0xac
	float fGlobalLockStrength; // 0xd0
};

struct UGameUISceneClient {
	float LatestDeltaTime; // 0x11c
	FDouble DoubleClickStartTime; // 0x120
	FIntPoint DoubleClickStartPosition; // 0x128
	FMap_Mirror InitialPressedKeys; // 0x130
	char bUpdateInputProcessingStatus : 1; // 0x178
	char bUpdateSceneViewportSizes : 1; // 0x178
	char bEnableDebugInput : 1; // 0x178
	char bRenderDebugInfo : 1; // 0x178
	char bCaptureUnprocessedInput : 1; // 0x178
	TArray<FName> NavAliases; // 0x17c
	TArray<FName> AxisInputKeys; // 0x18c
};

struct UVivoxOSSConnectors {
	ObjectProperty m_OnlineSub; // 0x60
	TArray<ObjectProperty> Closures; // 0x68
	FPointer m_VivoxInterface; // 0x78
};

struct UTgCameraModule_TopDown {
	FRotator WorldViewRotation; // 0x9c
};

struct UUIComponent_HudMenuClass {
	ObjectProperty m_pInfo; // 0x120
	ObjectProperty m_pTalentList; // 0x128
	ObjectProperty m_grInput; // 0x130
};

struct USeqAct_Possess {
	ObjectProperty PawnToPossess; // 0x108
	char bKillOldPawn : 1; // 0x110
	char bTryToLeaveVehicle : 1; // 0x110
};

struct UUIComponent_LootItem {
	ObjectProperty m_pItem; // 0x120
	ObjectProperty m_mcXName; // 0x128
	ObjectProperty m_mcRentalIcon; // 0x130
	ObjectProperty m_mcRentalText; // 0x138
};

struct ATgMapBoundsVolume {
	ObjectProperty MinimapImage; // 0x2bc
};

struct UUIData_StringList {
	TArray<FString> sValues; // 0x60
};

struct UTgAchievement_BulletSponge {
	int32_t m_nDamageShielded; // 0x90
};

struct UTgAIBehaviorAction_SelectLaneMoveTarget_Minotaur {
	char bMustBeEnemy : 1; // 0x94
};

struct UGFxClikWidget {
	DelegateProperty __EventListener__Delegate; // 0x118
};

struct UInterpTrackAkEvent {
	TArray<FAkEventTrackKey> AkEvents; // 0xa0
};

struct UFogVolumeLinearHalfspaceDensityComponent {
	float PlaneDistanceFactor; // 0xe0
	FPlane HalfspacePlane; // 0xf0
};

struct ULandscapeHeightfieldCollisionComponent {
	FUntypedBulkData_Mirror CollisionHeightData; // 0x24c
	TArray<FName> ComponentLayers; // 0x28c
	FUntypedBulkData_Mirror DominantLayerData; // 0x29c
	int32_t SectionBaseX; // 0x2dc
	int32_t SectionBaseY; // 0x2e0
	int32_t CollisionSizeQuads; // 0x2e4
	float CollisionScale; // 0x2e8
	TArray<char> CollisionQuadFlags; // 0x2ec
	TArray<ObjectProperty> PhysicalMaterials; // 0x2fc
	FPointer RBHeightfield; // 0x30c
	char bHasKDOPData : 1; // 0x314
	char bIncludeHoles : 1; // 0x314
	char bHeightFieldDataHasHole : 1; // 0x314
	FPointer kDOPTree; // 0x318
	TArray<FVector> kDOPCollisionVerts; // 0x320
	FBoxSphereBounds CachedBoxSphereBounds; // 0x330
};

struct UTgSkelCon_Gate {
	TArray<FSkelControlGateChild> ChildControls; // 0xd0
};

struct UTgAIBehaviorCondition_Taskforce {
	int32_t Taskforce; // 0x98
};

struct UTgSeqAct_BeaconExitSetRespawn {
	ObjectProperty m_RespawnPoint; // 0x108
	char m_bRespawnImmediately : 1; // 0x110
};

struct UUIComponent_MasteryRewardsEntry {
	ObjectProperty m_mcLockIcon; // 0x120
	ObjectProperty m_mcLevelText; // 0x128
	ObjectProperty m_mcRewardType; // 0x130
	ObjectProperty m_mcRewardName; // 0x138
	ObjectProperty m_mcRewardTitle; // 0x140
	ObjectProperty m_mcRewardChest; // 0x148
	ObjectProperty m_mcRewardCurrency; // 0x150
	ObjectProperty m_mcRewardCurrencyTF; // 0x158
	ObjectProperty m_mcCardIcon; // 0x160
	ObjectProperty m_mcItemIcon; // 0x168
	ObjectProperty m_mcTextureIcon; // 0x170
	ObjectProperty m_mcRarity; // 0x178
	ObjectProperty m_pFrameButton; // 0x180
	ObjectProperty m_pPriceButton; // 0x188
};

struct ATgDevice_HolyHammer {
	int32_t m_nChainCount; // 0xaec
	float m_fChainResetTimer; // 0xaf0
	float m_fChainResetDuration; // 0xaf4
};

struct UParticleModuleSizeMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x68
	char MultiplyX : 1; // 0x8c
	char MultiplyY : 1; // 0x8c
	char MultiplyZ : 1; // 0x8c
};

struct UTgAnimBlendPerBone {
	char m_bLoopSourceChild : 1; // 0x158
	char m_bLoopTargetChild : 1; // 0x158
	char m_bPlaySourceChild : 1; // 0x158
	char m_bPlayTargetChild : 1; // 0x158
	char m_bSetStrengthFromAnimNode : 1; // 0x158
	char m_bInvertStrengthFromAnimNode : 1; // 0x158
	char m_bInitializedCachedNodeList : 1; // 0x158
	TArray<FName> m_StrengthAnimNodeNameList; // 0x15c
	TArray<EEmote> m_StrengthEmoteList; // 0x16c
	TArray<ObjectProperty> m_CachedNodeList; // 0x17c
	TArray<ObjectProperty> m_CachedEmoteSequences; // 0x18c
};

struct UForceFieldShapeCapsule {
	ComponentProperty Shape; // 0x60
};

struct UTgCameraModifier_LobbyCameraTransition {
	ObjectProperty SourceCamera; // 0x80
	ObjectProperty DestinationCamera; // 0x88
	CameraTransType TransitionType; // 0x90
	float fSlideDistance; // 0x94
};

struct ACullDistanceVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x2bc
	char bEnabled : 1; // 0x2cc
};

struct UTgInventoryObject_Listen_MirrorDamageToHeal {
	ObjectProperty m_CachedFiremode; // 0xd0
};

struct USwfMovie {
	char bUsesFontlib : 1; // 0xa0
	char bSetSRGBOnImportedTextures : 1; // 0xa0
	char bPackTextures : 1; // 0xa0
	char bForceSquarePacking : 1; // 0xa0
	char bUseStreamableTextures : 1; // 0xa0
	int32_t PackTextureSize; // 0xa4
	FlashTextureRescale TextureRescale; // 0xa8
	FString TextureFormat; // 0xac
	int32_t RTTextures; // 0xbc
	int32_t RTVideoTextures; // 0xc0
};

struct UParticleModuleVelocityOverLifetime {
	FRawDistributionVector VelOverLife; // 0x6c
	char Absolute : 1; // 0x90
};

struct ATgPickupFactory_Item {
	ObjectProperty PickupSound; // 0x3d4
	FString PickupMessage; // 0x3dc
	float RespawnTime; // 0x3ec
};

struct UUIComponent_TitlesView {
	TArray<ObjectProperty> m_TitleEntries; // 0x120
	ObjectProperty m_grTitlesGroup; // 0x130
	ObjectProperty m_mcPlayerTitle; // 0x138
	ObjectProperty m_pPlayerName; // 0x140
	ObjectProperty m_pEquipButton; // 0x148
	ObjectProperty m_pTooltipLeft; // 0x150
	ObjectProperty m_pTooltipRight; // 0x158
	ObjectProperty m_pScrollbar; // 0x160
	int32_t m_nLastTooltipIndex; // 0x168
	int32_t m_nNumTitlesRows; // 0x16c
	int32_t m_nNumTitlesCols; // 0x170
};

struct UUIComponent_List {
	FSmoothScrollingAxis m_ScrollAxis[0x2]; // 0x120
	int32_t m_nSelectedDataIndex; // 0x160
	TArray<FUICListEntry> m_ListItems; // 0x164
	TArray<ObjectProperty> m_ListBufferItems; // 0x174
	TArray<ObjectProperty> m_ListData; // 0x184
	ObjectProperty m_grList; // 0x194
	ObjectProperty m_pScrollbarV; // 0x19c
	ObjectProperty m_pScrollbarH; // 0x1a4
	Fdword m_dwItemSize; // 0x1ac
	Fdword m_dwDataSize; // 0x1b0
	char m_bExtendVertically : 1; // 0x1b4
	char m_bAutoFillNavGroup : 1; // 0x1b4
	char m_bFocusSelectedItem : 1; // 0x1b4
	char m_bAutoSelectQueued : 1; // 0x1b4
	char m_bInvertXAxis : 1; // 0x1b4
	char m_bInvertYAxis : 1; // 0x1b4
	char m_bNavigatingByKeyboard : 1; // 0x1b4
	int32_t m_nScrollX; // 0x1b8
	int32_t m_nScrollY; // 0x1bc
	int32_t m_nItemOffsetX; // 0x1c0
	int32_t m_nItemOffsetY; // 0x1c4
	int32_t m_nMarginX; // 0x1c8
	int32_t m_nMarginY; // 0x1cc
	float m_fAutoSelectDelay; // 0x1d0
	float m_fAutoSelectTimer; // 0x1d4
};

struct UUIDataProvider_SettingsArray {
	ObjectProperty Settings; // 0x70
	int32_t SettingsId; // 0x78
	FName SettingsName; // 0x7c
	FString ColumnHeaderText; // 0x84
	TArray<FIdToStringMapping> Values; // 0x94
};

struct UUIComponent_BoosterItemBenefits {
	int32_t m_nRowsSet; // 0x120
	ObjectProperty m_mcBenefitsTF[0xb]; // 0x124
};

struct AGameInfo {
	char bRestartLevel : 1; // 0x280
	char bPauseable : 1; // 0x280
	char bTeamGame : 1; // 0x280
	char bGameEnded : 1; // 0x280
	char bOverTime : 1; // 0x280
	char bDelayedStart : 1; // 0x280
	char bWaitingToStartMatch : 1; // 0x280
	char bChangeLevels : 1; // 0x280
	char bAlreadyChanged : 0; // 0x280
	char bAdminCanPause : 0; // 0x280
	char bGameRestarted : 0; // 0x280
	char bLevelChange : 0; // 0x280
	char bKickLiveIdlers : 0; // 0x280
	char bUsingArbitration : 0; // 0x280
	char bHasArbitratedHandshakeBegun : 0; // 0x280
	char bNeedsEndGameHandshake : 0; // 0x280
	char bIsEndGameHandshakeComplete : 0; // 0x280
	char bHasEndGameHandshakeBegun : 0; // 0x280
	char bFixedPlayerStart : 0; // 0x280
	char bDoFearCostFallOff : 0; // 0x280
	char bUseSeamlessTravel : 0; // 0x280
	char bHasNetworkError : 0; // 0x280
	char bRequiresPushToTalk : 0; // 0x280
	char bIsStandbyCheckingEnabled : 0; // 0x280
	char bIsStandbyCheckingOn : 0; // 0x280
	char bHasStandbyCheatTriggered : 0; // 0x280
	FString CauseEventCommand; // 0x284
	FString BugLocString; // 0x294
	FString BugRotString; // 0x2a4
	TArray<ObjectProperty> PendingArbitrationPCs; // 0x2b4
	TArray<ObjectProperty> ArbitrationPCs; // 0x2c4
	float ArbitrationHandshakeTimeout; // 0x2d4
	float GameDifficulty; // 0x2d8
	int32_t GoreLevel; // 0x2dc
	float GameSpeed; // 0x2e0
	APawn* DefaultPawnClass; // 0x2e4
	AHUD* HUDType; // 0x2ec
	AHUD* SecondaryHUDType; // 0x2f4
	int32_t MaxSpectators; // 0x2fc
	int32_t MaxSpectatorsAllowed; // 0x300
	int32_t NumSpectators; // 0x304
	int32_t MaxPlayers; // 0x308
	int32_t MaxPlayersAllowed; // 0x30c
	int32_t NumPlayers; // 0x310
	int32_t NumBots; // 0x314
	int32_t NumTravellingPlayers; // 0x318
	int32_t CurrentID; // 0x31c
	FString DefaultPlayerName; // 0x320
	FString GameName; // 0x330
	float FearCostFallOff; // 0x340
	int32_t GoalScore; // 0x344
	int32_t MaxLives; // 0x348
	int32_t TimeLimit; // 0x34c
	ULocalMessage* DeathMessageClass; // 0x350
	UGameMessage* GameMessageClass; // 0x358
	ObjectProperty BaseMutator; // 0x360
	AAccessControl* AccessControlClass; // 0x368
	ObjectProperty AccessControl; // 0x370
	ABroadcastHandler* BroadcastHandlerClass; // 0x378
	ObjectProperty BroadcastHandler; // 0x380
	AAutoTestManager* AutoTestManagerClass; // 0x388
	ObjectProperty MyAutoTestManager; // 0x390
	APlayerController* PlayerControllerClass; // 0x398
	APlayerReplicationInfo* PlayerReplicationInfoClass; // 0x3a0
	AGameReplicationInfo* GameReplicationInfoClass; // 0x3a8
	ObjectProperty GameReplicationInfo; // 0x3b0
	ObjectProperty PopulationManager; // 0x3b8
	ACrowdPopulationManagerBase* PopulationManagerClass; // 0x3c0
	float MaxIdleTime; // 0x3c8
	float MaxTimeMargin; // 0x3cc
	float TimeMarginSlack; // 0x3d0
	float MinTimeMargin; // 0x3d4
	TArray<ObjectProperty> InactivePRIArray; // 0x3d8
	TArray<DelegateProperty> Pausers; // 0x3e8
	ObjectProperty OnlineSub; // 0x3f8
	TScriptInterface<Class> GameInterface; // 0x400
	UOnlineStatsWrite* OnlineStatsWriteClass; // 0x410
	int32_t LeaderboardId; // 0x418
	int32_t ArbitratedLeaderboardId; // 0x41c
	ObjectProperty CoverReplicatorBase; // 0x420
	UOnlineGameSettings* OnlineGameSettingsClass; // 0x428
	FString ServerOptions; // 0x430
	int32_t AdjustedNetSpeed; // 0x440
	float LastNetSpeedUpdateTime; // 0x444
	int32_t TotalNetBandwidth; // 0x448
	int32_t MinDynamicBandwidth; // 0x44c
	int32_t MaxDynamicBandwidth; // 0x450
	float StandbyRxCheatTime; // 0x454
	float StandbyTxCheatTime; // 0x458
	int32_t BadPingThreshold; // 0x45c
	float PercentMissingForRxStandby; // 0x460
	float PercentMissingForTxStandby; // 0x464
	float PercentForBadPing; // 0x468
	float JoinInProgressStandbyWaitTime; // 0x46c
	ObjectProperty StreamingPauseIcon; // 0x470
	TArray<FGameClassShortName> GameInfoClassAliases; // 0x478
	FString DefaultGameType; // 0x488
	TArray<FGameTypePrefix> DefaultMapPrefixes; // 0x498
	TArray<FGameTypePrefix> CustomMapPrefixes; // 0x4a8
	int32_t AnimTreePoolSize; // 0x4b8
	DelegateProperty __CanUnpause__Delegate; // 0x4bc
};

struct UNavMeshPath_WithinTraversalDist {
	float MaxTraversalDist; // 0x78
	char bSoft : 1; // 0x7c
	float SoftStartPenalty; // 0x80
};

struct ABroadcastHandler {
	int32_t SentText; // 0x280
	char bMuteSpectators : 1; // 0x284
};

struct UTgInventoryObject_Listen_AbilityProcBase {
	int32_t m_nAbilitySlotRestriction; // 0xc8
	int32_t m_nAbilityTypeRestriction; // 0xcc
};

struct UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x60
	DelegateProperty __PlatformInterfaceDelegate__Delegate; // 0x70
};

struct UTgSeqEvent_LoadoutChanged {
	int32_t DeckIndex; // 0x128
};

struct UTgAIBehaviorCondition_IsMetaGameState {
	EMetaGameState TestGameState; // 0x98
};

struct UInterpData {
	float InterpLength; // 0xa0
	float PathBuildTime; // 0xa4
	TArray<ObjectProperty> InterpGroups; // 0xa8
	ObjectProperty CurveEdSetup; // 0xb8
	float EdSectionStart; // 0xc0
	float EdSectionEnd; // 0xc4
	char bShouldBakeAndPrune : 1; // 0xc8
	TArray<FAnimSetBakeAndPruneStatus> BakeAndPruneStatus; // 0xcc
	ObjectProperty CachedDirectorGroup; // 0xdc
};

struct UTgInventoryObject_Listen_SpawnTeamHealthNugget {
	ObjectProperty m_NuggetSpawnFX; // 0xc8
	int32_t m_NuggetSpawnFXID; // 0xd0
	char m_bUseCV1ForSpawnChance : 1; // 0xd4
};

struct ULandscapeComponent {
	int32_t SectionBaseX; // 0x24c
	int32_t SectionBaseY; // 0x250
	int32_t ComponentSizeQuads; // 0x254
	int32_t SubsectionSizeQuads; // 0x258
	int32_t NumSubsections; // 0x25c
	ObjectProperty OverrideMaterial; // 0x260
	ObjectProperty MaterialInstance; // 0x268
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x270
	TArray<ObjectProperty> WeightmapTextures; // 0x280
	FIndirectArray_Mirror WeightmapData; // 0x290
	FVector4 WeightmapScaleBias; // 0x2a0
	float WeightmapSubsectionOffset; // 0x2b0
	FVector4 HeightmapScaleBias; // 0x2c0
	ObjectProperty HeightmapTexture; // 0x2d0
	FBoxSphereBounds CachedBoxSphereBounds; // 0x2d8
	FBox CachedLocalBox; // 0x2f4
	TArray<ObjectProperty> ShadowMaps; // 0x310
	TArray<FGuid> IrrelevantLights; // 0x320
	FLightMapRef LightMap; // 0x330
	FPointer EditToolRenderData; // 0x338
	int32_t CollisionMipLevel; // 0x340
	FPointer PlatformData; // 0x344
	int32_t PlatformDataSize; // 0x34c
	char bNeedPostUndo : 1; // 0x350
	int32_t ForcedLOD; // 0x354
	char NeighborLOD[0x8]; // 0x358
	char NeighborLODBias[0x8]; // 0x360
	int32_t LODBias; // 0x368
};

struct UPBRuleNodeSubRuleset {
	ObjectProperty SubRuleset; // 0x70
};

struct UUIComponent_Toggle {
	char m_bActive : 1; // 0x140
	ObjectProperty m_mcActive; // 0x144
};

struct UTerrainComponent {
	TArray<ObjectProperty> ShadowMaps; // 0x24c
	TArray<FGuid> IrrelevantLights; // 0x25c
	FPointer TerrainObject; // 0x26c
	int32_t SectionBaseX; // 0x274
	int32_t SectionBaseY; // 0x278
	int32_t SectionSizeX; // 0x27c
	int32_t SectionSizeY; // 0x280
	int32_t TrueSectionSizeX; // 0x284
	int32_t TrueSectionSizeY; // 0x288
	FLightMapRef LightMap; // 0x28c
	TArray<FTerrainPatchBounds> PatchBounds; // 0x294
	TArray<FTerrainMaterialMask> BatchMaterials; // 0x2a4
	int32_t FullBatch; // 0x2b4
	FTerrainBVTree BVTree; // 0x2b8
	TArray<FVector> CollisionVertices; // 0x2c8
	FPointer RBHeightfield; // 0x2d8
	char bDisplayCollisionLevel : 1; // 0x2e0
};

struct UGFxEvent_FSCommand {
	ObjectProperty Movie; // 0x128
	FString FSCommand; // 0x130
	ObjectProperty Handler; // 0x140
};

struct ATgDeploy_ShieldBarikDome {
	float m_fTurretSetupTime; // 0x44c
};

struct USeqAct_SetMatInstVectorParam {
	ObjectProperty MatInst; // 0x108
	FName ParamName; // 0x110
	FLinearColor VectorValue; // 0x118
};

struct UUIArmory {
	int32_t m_nHoverItem; // 0x244
	char m_eState; // 0x248
	char m_eItemType; // 0x249
	char m_bHovering : 1; // 0x24c
	char m_bRotating : 1; // 0x24c
	float m_fPreviousPosX; // 0x250
	ObjectProperty m_pItemsGroup; // 0x254
	ObjectProperty m_pClassGroup; // 0x25c
	ObjectProperty m_mcHeader; // 0x264
	ObjectProperty m_mcHeaderMenu; // 0x26c
	ObjectProperty m_mcHeaderCrowns; // 0x274
	ObjectProperty m_mcHeaderCrownsText; // 0x27c
	ObjectProperty m_mcHeaderTrophies; // 0x284
	ObjectProperty m_mcHeaderTrophiesText; // 0x28c
	ObjectProperty m_mcHeaderKey[0x2]; // 0x294
	ObjectProperty m_mcHeaderTab[0x2]; // 0x2a4
	ObjectProperty m_mcHeaderTabSelect[0x2]; // 0x2b4
	ObjectProperty m_mcHeaderTabShadow[0x2]; // 0x2c4
	ObjectProperty m_mcHeaderTabHighlight[0x2]; // 0x2d4
	ObjectProperty m_mcItems; // 0x2e4
	ObjectProperty m_mcEmoteItem[0x3]; // 0x2ec
	ObjectProperty m_mcEmoteItemFrame[0x3]; // 0x304
	ObjectProperty m_mcEmoteItemRarity[0x3]; // 0x31c
	ObjectProperty m_mcEmoteItemTexture[0x3]; // 0x334
	ObjectProperty m_mcSprayItem[0x3]; // 0x34c
	ObjectProperty m_mcSprayItemFrame[0x3]; // 0x364
	ObjectProperty m_mcSprayItemRarity[0x3]; // 0x37c
	ObjectProperty m_mcSprayItemTexture[0x3]; // 0x394
	ObjectProperty m_mcNormalItem[0x7]; // 0x3ac
	ObjectProperty m_mcNormalItemIcon[0x7]; // 0x3e4
	ObjectProperty m_mcNormalItemFrame[0x7]; // 0x41c
	ObjectProperty m_mcNormalItemRarity[0x7]; // 0x454
	ObjectProperty m_mcNormalItemTexture[0x7]; // 0x48c
	ObjectProperty m_mcNormalItemTypeTF[0x7]; // 0x4c4
	ObjectProperty m_mcNormalItemNameTF[0x7]; // 0x4fc
	ObjectProperty m_mcClasses; // 0x534
	ObjectProperty m_mcClass[0x4]; // 0x53c
	ObjectProperty m_mcClassName[0x4]; // 0x55c
	ObjectProperty m_mcClassIcon[0x4]; // 0x57c
	ObjectProperty m_mcClassLevel[0x4]; // 0x59c
	ObjectProperty m_mcClassPortrait[0x4]; // 0x5bc
	ObjectProperty m_mcClassProgress[0x4]; // 0x5dc
	ObjectProperty m_mcClassProgressTip[0x4]; // 0x5fc
	ObjectProperty m_mcClassProgressFill[0x4]; // 0x61c
	ObjectProperty m_mcDetails; // 0x63c
	ObjectProperty m_mcDetailDesc; // 0x644
	ObjectProperty m_mcDetailName; // 0x64c
	ObjectProperty m_mcDetailType; // 0x654
	ObjectProperty m_mcDetailFrame; // 0x65c
	ObjectProperty m_pItemPreviewStack; // 0x664
	ObjectProperty m_mcRotator; // 0x66c
};

struct USequence {
	FPointer LogFile; // 0xec
	TArray<ObjectProperty> SequenceObjects; // 0xf4
	TArray<ObjectProperty> ActiveSequenceOps; // 0x104
	TArray<ObjectProperty> NestedSequences; // 0x114
	TArray<ObjectProperty> UnregisteredEvents; // 0x124
	TArray<FActivateOp> DelayedActivatedOps; // 0x134
	TArray<ObjectProperty> DelayedLatentOps; // 0x144
	char bEnabled : 1; // 0x154
	TArray<FQueuedActivationInfo> QueuedActivations; // 0x158
	int32_t DefaultViewX; // 0x168
	int32_t DefaultViewY; // 0x16c
	float DefaultViewZoom; // 0x170
};

struct AMobileDebugCameraController {
	int32_t OldMobileGroup; // 0x7c8
	ObjectProperty MPI; // 0x7cc
};

struct UTgScreenCapturePostEffect {
	ObjectProperty ScreenCapture; // 0x90
	char bIsScreenCaptureReady : 1; // 0x98
};

struct UTgSeqAct_TutorialHighlighter {
	eTutorialHighlighterElement GameUIElement; // 0x108
};

struct UTgGameplayCurvesSet_DamageFalloffAOE {
	FRawDistributionFloat DamageFalloff; // 0x64
	char bIsRangeNormalized : 1; // 0x88
	char bExcludeEffectiveRange : 1; // 0x88
};

struct ATgGame_RoyaleBase {
	ObjectProperty m_pLootManager; // 0x744
	float m_fMapSize; // 0x74c
	float m_fZeppelinDist; // 0x750
	FVector m_vZeppelinMapOriginShift; // 0x754
	TArray<int32_t> m_nDisenchantValues; // 0x760
	int32_t m_nLootLifespan; // 0x770
	int32_t m_nItemDropLimit; // 0x774
	float m_fForgeTime; // 0x778
	float m_fZeppelinInitialSpawnHeight; // 0x77c
	char m_bDeployPlayers : 1; // 0x780
	char m_bZeppelinSpawn : 1; // 0x780
	char m_bDestroyZeppelinsAfterDeploy : 1; // 0x780
	float m_fZeppelinAirSpeed; // 0x784
	float m_fDeployRange; // 0x788
	float m_fZeppelinOriginSpawnOffset; // 0x78c
	float m_fZeppelinRangeSpawnOffset; // 0x790
	int32_t m_nMaxShards; // 0x794
};

struct UTgAnimBlendByFireMode {
	int32_t m_nDefaultFireMode; // 0x168
	TG_EQUIP_POINT m_EquipPoint; // 0x16c
};

struct UGameplayEventsHandler {
	TArray<int32_t> EventIDFilter; // 0x60
	TArray<FGameStatGroup> GroupFilter; // 0x70
	ObjectProperty Reader; // 0x80
};

struct UMorphNodeWeightBase {
	TArray<FMorphNodeConn> NodeConns; // 0x74
};

struct UMaterialExpressionDesaturation {
	FExpressionInput Input; // 0xb0
	FExpressionInput Percent; // 0xe4
	FLinearColor LuminanceFactors; // 0x118
};

struct APrefabInstance {
	ObjectProperty TemplatePrefab; // 0x280
	int32_t TemplateVersion; // 0x288
	TMap<None, None> ArchetypeToInstanceMap; // 0x28c
	ObjectProperty SequenceInstance; // 0x2d4
	int32_t PI_PackageVersion; // 0x2dc
	int32_t PI_LicenseePackageVersion; // 0x2e0
	TArray<char> PI_Bytes; // 0x2e4
	TArray<ObjectProperty> PI_CompleteObjects; // 0x2f4
	TArray<ObjectProperty> PI_ReferencedObjects; // 0x304
	TArray<FString> PI_SavedNames; // 0x314
	TMap<None, None> PI_ObjectMap; // 0x324
	char m_bIgnoreVersionUpdates : 1; // 0x36c
};

struct APComMusicThemeSyncActor {
	FName m_ReplicatedMusicEvent; // 0x280
};

struct UTgAIBehaviorAction_MoveToCover {
	char bAllowPopout : 1; // 0x9c
};

struct UUIComponent_GameMap {
	int32_t m_nDepth; // 0x120
	char m_bSnapFog : 1; // 0x124
	char m_bInitMap : 1; // 0x124
	char m_bDirection : 1; // 0x124
	char m_bMapHasFocus : 1; // 0x124
	float m_fSize; // 0x128
	float m_fRadius; // 0x12c
	float m_fCursorX; // 0x130
	float m_fCursorY; // 0x134
	float m_fOffsetX; // 0x138
	float m_fOffsetY; // 0x13c
	float m_fPulseTimer; // 0x140
	float m_fChestPulseInTimer; // 0x144
	float m_fChestPulseIOutTimer; // 0x148
	float m_fGamepadCursorX; // 0x14c
	float m_fGamepadCursorY; // 0x150
	float m_fCursorRate; // 0x154
	float m_fCursorSafeBound; // 0x158
	float m_fCursorPanBound; // 0x15c
	float m_fConvergeRadius; // 0x160
	float m_fConvergeTarget; // 0x164
	float m_fConvergeTargetX; // 0x168
	float m_fConvergeTargetY; // 0x16c
	FVector m_vBoundsCenter; // 0x170
	FVector m_vBoundsExtents; // 0x17c
	ObjectProperty m_mcMap; // 0x188
	ObjectProperty m_mcMapCursor; // 0x190
	ObjectProperty m_mcMapCursorLineX; // 0x198
	ObjectProperty m_mcMapCursorLineY; // 0x1a0
	ObjectProperty m_mcMapFog; // 0x1a8
	ObjectProperty m_mcMapMask; // 0x1b0
	ObjectProperty m_mcMapInner; // 0x1b8
	ObjectProperty m_mcMapOuter; // 0x1c0
	ObjectProperty m_mcMapForges; // 0x1c8
	ObjectProperty m_mcMapDirection; // 0x1d0
	ObjectProperty m_mcMapDirectionAnim; // 0x1d8
	ObjectProperty m_mcMapDirectionLine; // 0x1e0
	ObjectProperty m_mcMapNamedAreas; // 0x1e8
	ObjectProperty m_mcMapZeppelinLine; // 0x1f0
	ObjectProperty m_mcMapZeppelinA; // 0x1f8
	ObjectProperty m_mcMapZeppelinB; // 0x200
	ObjectProperty m_pMapTextures; // 0x208
	ObjectProperty m_pTeamMarkers; // 0x210
	ObjectProperty m_pChestMarkers; // 0x218
	ObjectProperty m_pForgeMarkers; // 0x220
	ObjectProperty m_pCatapultMarkers; // 0x228
	ObjectProperty m_pAllianceMarkers; // 0x230
	ObjectProperty m_pWaypoints; // 0x238
	ObjectProperty m_pNamedAreas; // 0x240
	ObjectProperty m_pLocalMarker; // 0x248
	ObjectProperty m_pMapInteractable; // 0x250
	ObjectProperty m_pPlaceWaypointAction; // 0x258
	ObjectProperty m_pRemoveWaypointAction; // 0x260
};

struct ATgAudioOcclusionActor {
	FPointer VfTable_IInterface_NavigationHandle; // 0x280
	UNavigationHandle* m_NavigationHandleClass; // 0x288
	ObjectProperty m_NavigationHandle; // 0x290
	FVector NavMeshPath_SearchExtent_Modifier; // 0x298
	float m_fCurrentMaxPathLength; // 0x2a4
};

struct ATgGame_Royale {
	int32_t m_nConvergeRoundNum; // 0x798
	char m_eFogState; // 0x79c
	char m_eGameState; // 0x79d
	EPlayerDisconnectMode m_eDisconnectPlayerMode; // 0x79e
	float m_fDeltaTime; // 0x7a0
	float m_fFogStateTimer; // 0x7a4
	float m_fRemainingGameTime; // 0x7a8
	char m_bFogStateTimerEnabled : 1; // 0x7ac
	char m_bFogRoamingEnabled : 1; // 0x7ac
	char m_bFogPreConvergedEnabled : 1; // 0x7ac
	char m_bLTEActive : 1; // 0x7ac
	char m_bMatchCompositionLoaded : 1; // 0x7ac
	char m_bAllVendorsLoaded : 1; // 0x7ac
	char m_bLootGoblinEnabled : 1; // 0x7ac
	char m_bUseFog : 1; // 0x7ac
	char m_bUseShiftingFog : 0; // 0x7ac
	char m_bUseStats : 0; // 0x7ac
	char m_bUseRespawns : 0; // 0x7ac
	char m_bInitialCircle : 0; // 0x7ac
	float m_fGameStateTimer; // 0x7b0
	ObjectProperty m_pFogDevice; // 0x7b4
	ObjectProperty m_pChickenLifeDrainDevice; // 0x7bc
	TArray<FRoyaleStart> m_pIslandStartsA; // 0x7c4
	TArray<FRoyaleStart> m_pIslandStartsB; // 0x7d4
	TArray<FRoyaleStart> m_pIslandStartsC; // 0x7e4
	TArray<FRoyaleStart> m_pIslandStartsD; // 0x7f4
	TArray<FRoyaleStart> m_pPlayerStarts; // 0x804
	TArray<FRoyaleStart> m_pTeamStarts; // 0x814
	TArray<ObjectProperty> m_pDropPoints; // 0x824
	TMap<None, None> m_pTournamentObjectives; // 0x834
	TArray<EObjectiveSize> m_pAvailableObjectiveSizes; // 0x87c
	TArray<FCloseChestData> m_pCloseChests; // 0x88c
	TArray<FTgDeployableFactoryGroupList> m_AllGroupDeployableFactories; // 0x89c
	TArray<ObjectProperty> m_AllNamedAreaVolumes; // 0x8ac
	TArray<ObjectProperty> m_AllInvalidObjectiveVolumes; // 0x8bc
	ObjectProperty m_pConvergeActor; // 0x8cc
	TArray<ObjectProperty> m_pForges; // 0x8d4
	TArray<ObjectProperty> m_AllConvergeObjectives; // 0x8e4
	TArray<ObjectProperty> m_InitialObjectives; // 0x8f4
	TArray<ObjectProperty> m_LegendaryChestDropObjectives; // 0x904
	TArray<FVector> m_EpicenterLocations; // 0x914
	float m_fGameWaitTime; // 0x924
	float m_fGameReadyTime; // 0x928
	float m_fGameDeployTime; // 0x92c
	float m_fGameCompleteTime; // 0x930
	float m_fZeppelinMinTime; // 0x934
	float m_fZeppelinMaxTime; // 0x938
	float m_fInitialFogSpawnTime; // 0x93c
	float m_fInitialConvergeRadius; // 0x940
	TArray<FRoyaleRoundInfo> m_RoyaleRounds; // 0x944
	TArray<FTgDeployableFactoryGroupSpawnData> m_LootSpawnData; // 0x954
	float m_fMaxConvergeDistFromOrigin; // 0x964
	float m_fAutoDeployWaitTime; // 0x968
	int32_t m_nChickenReward; // 0x96c
	float m_fDismountDamage; // 0x970
	float m_fChestCloseTime; // 0x974
	float m_fAllowedGameTime; // 0x978
	float m_fInitArmorPercent; // 0x97c
	float m_fForgeActivePercent; // 0x980
	float m_fDisconnectedPlayerKillTime; // 0x984
	float m_fLootZeppelinRunningTime; // 0x988
	float m_fShiftingFogSpeed; // 0x98c
	float m_fReviveTotalTime; // 0x990
	int32_t m_nPlayerLives; // 0x994
	int32_t m_fSpawnLootGoblinRunningTime; // 0x998
	int32_t m_nLootGoblinBotId; // 0x99c
	int32_t m_nLootGoblinTaskForce; // 0x9a0
	int32_t m_nLootGoblinSpawnTime; // 0x9a4
	TArray<ObjectProperty> m_pSpawnedLootGoblins; // 0x9a8
	float m_fPlayerStartManaPercent; // 0x9b8
	int32_t m_nFogChanceToEndOnForges; // 0x9bc
};

struct UUIComponent_ItemDisplay {
	ObjectProperty m_pRarityText; // 0x120
	ObjectProperty m_pTitle; // 0x128
	ObjectProperty m_pChest; // 0x130
	ObjectProperty m_pIcon; // 0x138
	ObjectProperty m_pRarityFrame; // 0x140
	ObjectProperty m_pCard; // 0x148
	ObjectProperty m_pItem; // 0x150
	ObjectProperty m_pChestQuantity; // 0x158
};

struct ATgDevice_ShieldFernando {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
};

struct UUIDataEsportsEvent {
	Fdword dwEventId; // 0x60
	Fdword dwMaxPicks; // 0x64
	Fdword dwTypeId; // 0x68
	FString sName; // 0x6c
	char bActive : 1; // 0x7c
	TArray<ObjectProperty> m_EventTeamArray; // 0x80
	TMap<None, None> m_EventTeamsById; // 0x90
	TMap<None, None> m_EventTeams; // 0xd8
	TArray<ObjectProperty> m_PickedTeams; // 0x120
	TArray<ObjectProperty> m_EventMatchupArray; // 0x130
	TMap<None, None> m_EventMatchups; // 0x140
	TArray<ObjectProperty> m_WeekData; // 0x188
};

struct ATgDeviceVolume_Pulse {
	ObjectProperty DamageInstigator; // 0x2bc
	int32_t m_nMapObjectId; // 0x2c4
	int32_t s_nDeviceId; // 0x2c8
	ObjectProperty m_FireMode; // 0x2cc
	int32_t s_nTeamNumber; // 0x2d4
	char s_nTaskForce; // 0x2d8
};

struct USVehicleWheel {
	float Steer; // 0x70
	float MotorTorque; // 0x74
	float BrakeTorque; // 0x78
	float ChassisTorque; // 0x7c
	char bPoweredWheel : 1; // 0x80
	char bHoverWheel : 1; // 0x80
	char bCollidesVehicles : 1; // 0x80
	char bCollidesPawns : 1; // 0x80
	char bIsSquealing : 1; // 0x80
	char bWheelOnGround : 1; // 0x80
	float SteerFactor; // 0x84
	FName SkelControlName; // 0x88
	ObjectProperty WheelControl; // 0x90
	FName BoneName; // 0x98
	FVector BoneOffset; // 0xa0
	float WheelRadius; // 0xac
	float SuspensionTravel; // 0xb0
	float SuspensionSpeed; // 0xb4
	ObjectProperty WheelParticleSystem; // 0xb8
	EWheelSide Side; // 0xc0
	float LongSlipFactor; // 0xc4
	float LatSlipFactor; // 0xc8
	float HandbrakeLongSlipFactor; // 0xcc
	float HandbrakeLatSlipFactor; // 0xd0
	float ParkedSlipFactor; // 0xd4
	FVector WheelPosition; // 0xd8
	float SpinVel; // 0xe4
	float LongSlipRatio; // 0xe8
	float LatSlipAngle; // 0xec
	FVector ContactNormal; // 0xf0
	FVector LongDirection; // 0xfc
	FVector LatDirection; // 0x108
	float ContactForce; // 0x114
	float LongImpulse; // 0x118
	float LatImpulse; // 0x11c
	float DesiredSuspensionPosition; // 0x120
	float SuspensionPosition; // 0x124
	float CurrentRotation; // 0x128
	FPointer WheelShape; // 0x12c
	int32_t WheelMaterialIndex; // 0x134
	UParticleSystemComponent* WheelPSCClass; // 0x138
	ComponentProperty WheelParticleComp; // 0x140
	FName SlipParticleParamName; // 0x148
};

struct AAmbientSound {
	char bAutoPlay : 1; // 0x288
	char bIsPlaying : 1; // 0x288
	ComponentProperty AudioComponent; // 0x28c
};

struct AGameCrowdInfoVolume {
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x2bc
};

struct UInterpGroupInst {
	ObjectProperty Group; // 0x60
	ObjectProperty GroupActor; // 0x68
	TArray<ObjectProperty> TrackInst; // 0x70
	FPointer CachedCamOverridePostProcess; // 0x80
};

struct UTgInventoryObject_Listen_BlastShotHitEffect {
	TArray<ObjectProperty> m_PreviouslyHitActors; // 0xc8
	int32_t m_nTargetType; // 0xd8
};

struct UTgArmorPiece {
	FString ParamNameDesaturateCubeMap; // 0x60
	FString ParamNameDissolveColor; // 0x70
	FString ParamNameFresnelAlpha; // 0x80
	FString ParamNameFresnelColor; // 0x90
	FString ParamNameReflectionColor; // 0xa0
	EArmorPiece ArmorPiece; // 0xb0
	float m_CommonDesaturateCubeMap; // 0xb4
	float m_RareDesaturateCubeMap; // 0xb8
	float m_EpicDesaturateCubeMap; // 0xbc
	float m_LegendaryDesaturateCubeMap; // 0xc0
	FLinearColor m_CommonDissolveColor; // 0xc4
	FLinearColor m_RareDissolveColor; // 0xd4
	FLinearColor m_EpicDissolveColor; // 0xe4
	FLinearColor m_LegendaryDissolveColor; // 0xf4
	float m_CommonFresnelAlpha; // 0x104
	float m_RareFresnelAlpha; // 0x108
	float m_EpicFresnelAlpha; // 0x10c
	float m_LegendaryFresnelAlpha; // 0x110
	FLinearColor m_CommonFresnelColor; // 0x114
	FLinearColor m_RareFresnelColor; // 0x124
	FLinearColor m_EpicFresnelColor; // 0x134
	FLinearColor m_LegendaryFresnelColor; // 0x144
	FLinearColor m_CommonReflectionColor; // 0x154
	FLinearColor m_RareReflectionColor; // 0x164
	FLinearColor m_EpicReflectionColor; // 0x174
	FLinearColor m_LegendaryReflectionColor; // 0x184
};

struct UTgDataChunk {
	ObjectProperty m_DataHandler; // 0x118
	ObjectProperty m_ParentChunk; // 0x120
	TArray<FDataField> m_DataList; // 0x128
	TArray<ObjectProperty> m_ChildChunks; // 0x138
	char m_bIsDirty : 1; // 0x148
	char m_bIsSubscribed : 1; // 0x148
	char m_bClearOnMapChange : 1; // 0x148
	DelegateProperty __usc_Subscribe_Delegate__Delegate; // 0x14c
	DelegateProperty __usc_Unsubscribe_Delegate__Delegate; // 0x15c
};

struct UTgSeqAct_AIFreeze {
	int32_t TaskForceNumber; // 0x108
};

struct UTgSeqEvent_DeviceUsed {
	int32_t m_nDeviceId; // 0x128
};

struct UUIData_RealMoneyItem {
	Fdword m_dwPrice; // 0x60
	char m_bIsOwned : 1; // 0x64
	FString m_sProductName; // 0x68
	FString m_sProductSKU; // 0x78
	FString m_sConsoleDescription; // 0x88
	FString m_sProductImage; // 0x98
	FString m_sIncludeTaxMessage; // 0xa8
	TArray<FString> m_sDisplayListPrice; // 0xb8
	TArray<FString> m_sDisplayPrice; // 0xc8
	TArray<FString> m_sCurrencyCode; // 0xd8
	TArray<FString> m_sSignedOffer; // 0xe8
	TArray<float> m_fListPrice; // 0xf8
	TArray<float> m_fPrice; // 0x108
	ObjectProperty m_pLootTableItem; // 0x118
};

struct AMobileMenuGame {
	UMobileMenuScene* InitialSceneToDisplayClass; // 0x4cc
};

struct UUIGAPeachStartup {
	float m_fHirezAnimTimer; // 0x2a0
	float m_fPeachAnimTimer; // 0x2a4
	float m_fSkipDelay; // 0x2a8
	float m_fSkipDelayTimer; // 0x2ac
};

struct UInterpGroupCamera {
	ObjectProperty CameraAnimInst; // 0x98
	float CompressTolerance; // 0xa0
};

struct ULocalPlayer {
	FPointer VfTable_FObserverInterface; // 0x8c
	int32_t ControllerId; // 0x94
	ObjectProperty ViewportClient; // 0x98
	FVector2D Origin; // 0xa0
	FVector2D Size; // 0xa8
	ObjectProperty PlayerPostProcess; // 0xb0
	TArray<ObjectProperty> PlayerPostProcessChains; // 0xb8
	char bForceDefaultPostProcessChain : 1; // 0xc8
	char bWantToResetToMapDefaultPP : 1; // 0xc8
	char bSentSplitJoin : 1; // 0xc8
	char bPendingServerAuth : 1; // 0xc8
	FPointer ViewState; // 0xcc
	FPointer ViewState2; // 0xd4
	FSynchronizedActorVisibilityHistory ActorVisibilityHistory; // 0xdc
	FVector LastViewLocation; // 0xec
	FCurrentPostProcessVolumeInfo CurrentPPInfo; // 0xf8
	FCurrentPostProcessVolumeInfo LevelPPInfo; // 0x288
	TArray<FPostProcessSettingsOverride> ActivePPOverrides; // 0x418
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x428
	FString LastMap; // 0x42c
	ObjectProperty TagContext; // 0x43c
	TScriptInterface<Class> CachedAuthInt; // 0x444
	float ServerAuthTimestamp; // 0x454
	int32_t ServerAuthTimeout; // 0x458
	int32_t ServerAuthRetryCount; // 0x45c
	int32_t MaxServerAuthRetryCount; // 0x460
	FUniqueNetId ServerAuthUID; // 0x464
	ObjectProperty ListenerAkComponent; // 0x46c
};

struct UTgAnimNodeStanceTransitioner {
	int32_t m_DefaultStance; // 0x144
	int32_t m_CurrentStance; // 0x148
	char m_bIsPlayingTransition : 1; // 0x14c
	float m_BlendTransitionDuration; // 0x150
	TArray<FCachedTgAnimNodeStanceInfo> m_StanceNodeInfos; // 0x154
	TArray<FCachedTgAnimNodeStanceTransitionInfo> m_TransitionNodeInfos; // 0x164
};

struct UPBRuleNodeSize {
	EProcBuildingAxis SizeAxis; // 0x70
	float DecisionSize; // 0x74
	char bUseTopLevelScopeSize : 1; // 0x78
};

struct APortalVolume {
	TArray<ObjectProperty> Portals; // 0x2bc
};

struct UUIComponent_ShopCrowns {
	Fdword m_dwVendorRequestId; // 0x120
	char m_bRealMoneyDataReady : 1; // 0x124
	ObjectProperty m_mcLoadingTF; // 0x128
	ObjectProperty m_pPurchaseOptions; // 0x130
	ObjectProperty m_grInput; // 0x138
	ObjectProperty m_akCrownsTier1; // 0x140
	ObjectProperty m_akCrownsTier2; // 0x148
	ObjectProperty m_akCrownsTier3; // 0x150
	ObjectProperty m_akCrownsTier4; // 0x158
	ObjectProperty m_akCrownsTier5; // 0x160
};

struct UParticleModuleSizeScaleOverDensity {
	FRawDistributionVector SizeScaleOverDensity; // 0x68
};

struct UUIDataStore_OnlineGameSettings {
	TArray<FGameSettingsCfg> GameSettingsCfgList; // 0x98
	UUIDataProvider_Settings* SettingsProviderClass; // 0xa8
	int32_t SelectedIndex; // 0xb0
};

struct UActorFactorySkeletalMesh {
	ObjectProperty SkeletalMesh; // 0x9c
	ObjectProperty AnimSet; // 0xa4
	FName AnimSequenceName; // 0xac
};

struct UUILogin {
	int32_t m_nLoginAttempts; // 0x244
	int32_t m_nScroll; // 0x248
	char m_eState; // 0x24c
	char m_bLoading : 1; // 0x250
	char m_bHaveInput : 1; // 0x250
	char m_bAgeConfirm : 1; // 0x250
	char m_bBypassButtonOne : 1; // 0x250
	char m_bBypassButtonTwo : 1; // 0x250
	float m_fDiscoveryTime; // 0x254
	float m_fDiscoveryTimer; // 0x258
	float m_fAnimationTimer; // 0x25c
	float m_fFailTimer; // 0x260
	float m_fFailDuration; // 0x264
	TArray<FString> m_sEULAText; // 0x268
	ObjectProperty m_mcFrame; // 0x278
	ObjectProperty m_mcVersion; // 0x280
	ObjectProperty m_mcEULA; // 0x288
	ObjectProperty m_mcEULABuffer; // 0x290
	ObjectProperty m_mcEULAScroll; // 0x298
	ObjectProperty m_mcEULAText[0x15]; // 0x2a0
	ObjectProperty m_mcEULAButton[0x2]; // 0x348
	ObjectProperty m_mcEULAPrompt[0x2]; // 0x358
	ObjectProperty m_mcQueue; // 0x368
	ObjectProperty m_mcQueueDesc; // 0x370
	ObjectProperty m_mcQueueName; // 0x378
	ObjectProperty m_mcQueueButton; // 0x380
	ObjectProperty m_mcLoading; // 0x388
	ObjectProperty m_mcLoadingTF; // 0x390
	ObjectProperty m_mcLoadingFrame; // 0x398
	ObjectProperty m_mcLoadingAnimA; // 0x3a0
	ObjectProperty m_mcLoadingAnimB; // 0x3a8
	ObjectProperty m_mcCreatePlayer; // 0x3b0
	ObjectProperty m_mcCreatePlayerError; // 0x3b8
	ObjectProperty m_mcCreatePlayerInput; // 0x3c0
	ObjectProperty m_mcCreatePlayerButton[0x2]; // 0x3c8
	ObjectProperty m_mcManualLogin; // 0x3d8
	ObjectProperty m_mcManualLoginError; // 0x3e0
	ObjectProperty m_mcManualLoginButton; // 0x3e8
	ObjectProperty m_mcManualLoginInput[0x2]; // 0x3f0
	ObjectProperty m_mcManualLoginTitle[0x2]; // 0x400
	ObjectProperty m_mcConsoleLogin; // 0x410
	ObjectProperty m_mcConsoleLoginPrompt; // 0x418
	ObjectProperty m_mcConsoleLoginChangeUser; // 0x420
	ObjectProperty m_mcLinkFactor; // 0x428
	ObjectProperty m_mcLinkFactorError; // 0x430
	ObjectProperty m_mcLinkFactorInput; // 0x438
	ObjectProperty m_mcLinkFactorButton[0x2]; // 0x440
	ObjectProperty m_mcLinkAccount; // 0x450
	ObjectProperty m_mcLinkAccountDesc; // 0x458
	ObjectProperty m_mcLinkAccountName; // 0x460
	ObjectProperty m_mcLinkAccountButton[0x3]; // 0x468
	ObjectProperty m_mcLinkWarning; // 0x480
	ObjectProperty m_mcLinkWarningDesc; // 0x488
	ObjectProperty m_mcLinkWarningName; // 0x490
	ObjectProperty m_mcLinkWarningButton[0x2]; // 0x498
	ObjectProperty m_mcLinkWarningPrompt[0x2]; // 0x4a8
	ObjectProperty m_mcHirezCreate; // 0x4b8
	ObjectProperty m_mcHirezCreateAge; // 0x4c0
	ObjectProperty m_mcHirezCreateCheck; // 0x4c8
	ObjectProperty m_mcHirezCreateError; // 0x4d0
	ObjectProperty m_mcHirezCreateInput[0x4]; // 0x4d8
	ObjectProperty m_mcHirezCreateTitle[0x4]; // 0x4f8
	ObjectProperty m_mcHirezCreateKeyboard[0x4]; // 0x518
	ObjectProperty m_mcHirezCreateButton; // 0x538
	ObjectProperty m_mcHirezLogin; // 0x540
	ObjectProperty m_mcHirezLoginError; // 0x548
	ObjectProperty m_mcHirezLoginInput[0x2]; // 0x550
	ObjectProperty m_mcHirezLoginTitle[0x2]; // 0x560
	ObjectProperty m_mcHirezLoginKeyboard[0x2]; // 0x570
	ObjectProperty m_mcHirezLoginButton; // 0x580
	ObjectProperty m_pInputEULA; // 0x588
	ObjectProperty m_pInputLink; // 0x590
	ObjectProperty m_pInputLogin; // 0x598
	ObjectProperty m_pInputCreate; // 0x5a0
	ObjectProperty m_pInputFactor; // 0x5a8
	ObjectProperty m_pInputWarning; // 0x5b0
	ObjectProperty m_pActionChangeUser; // 0x5b8
};

struct ATgDevice_GrumpyBomb {
	float m_fPostTargetingLockInDuration; // 0xaec
};

struct UTgAIBehaviorCondition_ReturnAlways {
	EBehaviorStatus AlwaysReturn; // 0x98
};

struct UInterpTrackInstHeadTracking {
	EHeadTrackingAction Action; // 0x60
	TMap<None, None> CurrentActorMap; // 0x64
	ComponentProperty Mesh; // 0xac
	TArray<ObjectProperty> TrackControls; // 0xb4
	float LastUpdatePosition; // 0xc4
};

struct UUIComponent_Currency {
	Fdword eCurrencyCode; // 0x120
	Fdword ePurchaseType; // 0x124
	char bShowIfOwnedOrRented : 1; // 0x128
	char bStrikeIfOwnedOrRented : 1; // 0x128
	char bDisplayIfZero : 1; // 0x128
	char bShowVIPDiscount : 1; // 0x128
	UICCurr_DisplayType eDisplayType; // 0x12c
	UIALIGNINGTYPE eAlignment; // 0x12d
};

struct UUIShopRedeem {
	char m_bCanRedeem : 1; // 0x244
	float m_fWaitTimeout; // 0x248
	ObjectProperty m_mcName; // 0x24c
	ObjectProperty m_mcDesc; // 0x254
	ObjectProperty m_mcWait; // 0x25c
	ObjectProperty m_mcError; // 0x264
	ObjectProperty m_mcInput; // 0x26c
	ObjectProperty m_mcBlocker; // 0x274
	ObjectProperty m_mcSuccess; // 0x27c
	ObjectProperty m_mcButton[0x2]; // 0x284
	ObjectProperty m_pRedeemGroup; // 0x294
	ObjectProperty m_pInputHandleSubmitRedeem; // 0x29c
};

struct UTgSeqAct_ChangeScale {
	float TargetScale; // 0x108
	FVector TargetScale3D; // 0x10c
	float TransitionTime; // 0x118
};

struct UMaterialExpressionCustomTexture {
	ObjectProperty Texture; // 0xb0
	FExpressionInput TextureObject; // 0xb8
};

struct UUIBattlePass {
	int32_t m_nXP; // 0x244
	int32_t m_nTab; // 0x248
	int32_t m_nLevel; // 0x24c
	int32_t m_nOffset; // 0x250
	int32_t m_nPreOffset; // 0x254
	int32_t m_nHoverItem; // 0x258
	int32_t m_nHoverType; // 0x25c
	int32_t m_nHoverLevel; // 0x260
	int32_t m_nSelectedLevel; // 0x264
	int32_t m_nCrowns; // 0x268
	char m_bHovering : 1; // 0x26c
	char m_bRotating : 1; // 0x26c
	float m_fPreviousPosX; // 0x270
	int32_t m_nItemsA[0x32]; // 0x274
	int32_t m_nItemsB[0x32]; // 0x33c
	ObjectProperty m_pItemsGroupL; // 0x404
	ObjectProperty m_pItemsGroupR; // 0x40c
	float m_fPurchaseFlash; // 0x414
	ObjectProperty m_mcHeader; // 0x418
	ObjectProperty m_mcHeaderTab[0x2]; // 0x420
	ObjectProperty m_mcHeaderTabShadow[0x2]; // 0x430
	ObjectProperty m_mcHeaderTabSelect[0x2]; // 0x440
	ObjectProperty m_mcHeaderTabHighlight[0x2]; // 0x450
	ObjectProperty m_mcHeaderCrowns; // 0x460
	ObjectProperty m_mcHeaderCrownsText; // 0x468
	ObjectProperty m_mcCrownsButton; // 0x470
	ObjectProperty m_mcRewardsTab; // 0x478
	ObjectProperty m_mcQuests; // 0x480
	ObjectProperty m_mcRotator; // 0x488
	ObjectProperty m_mcProgress; // 0x490
	ObjectProperty m_mcProgressXP; // 0x498
	ObjectProperty m_mcProgressBar; // 0x4a0
	ObjectProperty m_mcProgressIcon; // 0x4a8
	ObjectProperty m_mcProgressName; // 0x4b0
	ObjectProperty m_mcProgressTime; // 0x4b8
	ObjectProperty m_mcProgressBoost; // 0x4c0
	ObjectProperty m_mcProgressLevel; // 0x4c8
	ObjectProperty m_mcProgressBarTip; // 0x4d0
	ObjectProperty m_mcProgressBarFill; // 0x4d8
	ObjectProperty m_mcProgressIconLevelA; // 0x4e0
	ObjectProperty m_mcProgressIconLevelB; // 0x4e8
	ObjectProperty m_mcProgressIconLevelC; // 0x4f0
	ObjectProperty m_mcDetails; // 0x4f8
	ObjectProperty m_mcDetailDesc; // 0x500
	ObjectProperty m_mcDetailName; // 0x508
	ObjectProperty m_mcDetailType; // 0x510
	ObjectProperty m_mcDetailFrame; // 0x518
	ObjectProperty m_mcPurchase; // 0x520
	ObjectProperty m_mcPurchaseTF; // 0x528
	ObjectProperty m_mcPurchaseFlash; // 0x530
	ObjectProperty m_mcPurchaseFrame; // 0x538
	ObjectProperty m_mcPurchaseButton; // 0x540
	ObjectProperty m_mcPurchaseButtonTF; // 0x548
	ObjectProperty m_mcPurchaseButtonKey; // 0x550
	ObjectProperty m_mcLevelUp; // 0x558
	ObjectProperty m_mcLevelUpTF; // 0x560
	ObjectProperty m_mcLevelUpFlash; // 0x568
	ObjectProperty m_mcLevelUpFrame; // 0x570
	ObjectProperty m_mcLevelUpButton; // 0x578
	ObjectProperty m_mcLevelUpButtonTF; // 0x580
	ObjectProperty m_mcLevelUpButtonKey; // 0x588
	ObjectProperty m_pItemPreviewStack; // 0x590
	ObjectProperty m_mcRewards; // 0x598
	ObjectProperty m_mcRewardTrack; // 0x5a0
	ObjectProperty m_mcRewardPage[0x2]; // 0x5a8
	ObjectProperty m_mcRewardArrow[0x2]; // 0x5b8
	ObjectProperty m_mcRewardPrompt[0x2]; // 0x5c8
	ObjectProperty m_mcRewardLevel[0xa]; // 0x5d8
	ObjectProperty m_mcRewardLevelFrame[0xa]; // 0x628
	ObjectProperty m_mcRewardLevelItemA[0xa]; // 0x678
	ObjectProperty m_mcRewardLevelItemB[0xa]; // 0x6c8
	ObjectProperty m_mcRewardLevelItemAIcon[0xa]; // 0x718
	ObjectProperty m_mcRewardLevelItemBIcon[0xa]; // 0x768
	ObjectProperty m_mcRewardLevelItemAFrame[0xa]; // 0x7b8
	ObjectProperty m_mcRewardLevelItemBFrame[0xa]; // 0x808
	ObjectProperty m_mcRewardLevelItemAActive[0xa]; // 0x858
	ObjectProperty m_mcRewardLevelItemBActive[0xa]; // 0x8a8
	ObjectProperty m_mcRewardLevelItemARarity[0xa]; // 0x8f8
	ObjectProperty m_mcRewardLevelItemBRarity[0xa]; // 0x948
	ObjectProperty m_mcRewardLevelItemATexture[0xa]; // 0x998
	ObjectProperty m_mcRewardLevelItemBTexture[0xa]; // 0x9e8
	ObjectProperty m_mcRewardLevelItemAIconFrame[0xa]; // 0xa38
	ObjectProperty m_mcRewardLevelItemBIconFrame[0xa]; // 0xa88
};

struct ADebugCameraHUD {
	char bDrawDebugText : 1; // 0x5a0
};

struct UUIDataItem {
	FQWord m_qwInventoryId; // 0x60
	int32_t m_nId; // 0x68
	int32_t m_nIcon; // 0x6c
	int32_t m_nCooldown; // 0x70
	FString m_sName; // 0x74
	FString m_sDesc; // 0x84
	FString m_sIcon; // 0x94
	FName m_nmIcon; // 0xa4
	FName m_nmIconLocked; // 0xac
	FName m_nmCardIcon; // 0xb4
	int32_t nIndex; // 0xbc
	TArray<ObjectProperty> m_SubItems; // 0xc0
	TArray<ObjectProperty> m_StoreLTIs; // 0xd0
};

struct UTgInventoryObject_Listen_Thunderstruck {
	TArray<ObjectProperty> m_UniqueTargets; // 0xd0
	char m_bCachedIsArcing : 1; // 0xe0
};

struct UInterpTrackInstNotify {
	float LastUpdatePosition; // 0x60
};

struct URB_Handle {
	ComponentProperty GrabbedComponent; // 0x88
	FName GrabbedBoneName; // 0x90
	int32_t SceneIndex; // 0x98
	char bInHardware : 1; // 0x9c
	char bRotationConstrained : 1; // 0x9c
	char bInterpolating : 1; // 0x9c
	FPointer HandleData; // 0xa0
	FPointer KinActorData; // 0xa8
	float LinearDamping; // 0xb0
	float LinearStiffness; // 0xb4
	FVector LinearStiffnessScale3D; // 0xb8
	FVector LinearDampingScale3D; // 0xc4
	float AngularDamping; // 0xd0
	float AngularStiffness; // 0xd4
	FVector Destination; // 0xd8
	FVector StepSize; // 0xe4
	FVector Location; // 0xf0
};

struct UUIGameMoviePlayer {
	FPointer VfTable_ITgCallbackInterface; // 0x2a0
	FString m_sDevJsonURL; // 0x2a8
	FString m_sPTSJsonURL; // 0x2b8
	FString m_sLiveJsonURL; // 0x2c8
	int32_t m_nResizeTicks; // 0x2d8
	int32_t m_nChosenQueue; // 0x2dc
	int32_t m_nPreviousRank; // 0x2e0
	char m_bVisible : 1; // 0x2e4
	char m_bGamepad : 1; // 0x2e4
	char m_bTimedQueue : 1; // 0x2e4
	char m_bHasNoPlayer : 1; // 0x2e4
	char m_bSkipTutorial : 1; // 0x2e4
	char m_bInLoginQueue : 1; // 0x2e4
	char m_bDirectionalNav : 1; // 0x2e4
	char m_bReceivedRatings : 1; // 0x2e4
	char m_bSummaryPurchase : 0; // 0x2e4
	char m_bPlayAnnouncerSample : 0; // 0x2e4
	float m_fQueueTimer; // 0x2e8
	float m_fCameraFader; // 0x2ec
	float m_fLoginQueueTimer; // 0x2f0
	float m_fTransitionTimer; // 0x2f4
	float m_fTransitionFader; // 0x2f8
	float m_fVideoCompletedTimer; // 0x2fc
	FString m_sPass; // 0x300
	FString m_sUserName; // 0x310
	ObjectProperty m_mcMapFrame; // 0x320
	ObjectProperty m_mcMapFrameLarge; // 0x328
	ObjectProperty m_mcKeyboardFocus; // 0x330
	ObjectProperty m_KeyboardComponent; // 0x338
	ObjectProperty m_Chat; // 0x340
	ObjectProperty m_UIDataManager; // 0x348
	FPointer m_ConfigManager; // 0x350
	ObjectProperty m_LandingPanelManager; // 0x358
	ObjectProperty m_PatchNotesJsonManager; // 0x360
	ObjectProperty m_SeasonTicketManager; // 0x368
	ObjectProperty m_WebBrowser; // 0x370
	TMap<None, None> m_Scenes; // 0x378
	TMap<None, None> m_OnlineProfiles; // 0x3c0
	FString m_sPendingOnlineScene; // 0x408
	FString m_sDelayErrorTitle; // 0x418
	FString m_sDelayErrorDesc; // 0x428
	ObjectProperty m_RenderTarget; // 0x438
	ObjectProperty m_BrowserTexture[0x4]; // 0x440
	FString m_Team1Name; // 0x460
	FString m_Team2Name; // 0x470
	ObjectProperty m_akError; // 0x480
	ObjectProperty m_akJoinQueue; // 0x488
	ObjectProperty m_AnnouncerManifestGroup; // 0x490
	int32_t m_nAnnouncerItemId; // 0x498
	ObjectProperty m_akEquippedAnnouncerSound; // 0x49c
	ObjectProperty m_VoicePackManifestGroup; // 0x4a4
	int32_t m_nVoicePackItemId; // 0x4ac
	ObjectProperty m_pQuitPromptData; // 0x4b0
	ObjectProperty m_CallbackContainer; // 0x4b8
	TArray<FPropertyPair> m_Rankings; // 0x4c0
	TArray<FPropertyPair> m_Experience; // 0x4d0
};

struct UNxForceFieldTornadoComponent {
	float RadialStrength; // 0x2bc
	float RotationalStrength; // 0x2c0
	float LiftStrength; // 0x2c4
	float ForceRadius; // 0x2c8
	float ForceTopRadius; // 0x2cc
	float LiftFalloffHeight; // 0x2d0
	float EscapeVelocity; // 0x2d4
	float ForceHeight; // 0x2d8
	float HeightOffset; // 0x2dc
	char BSpecialRadialForceMode : 1; // 0x2e0
	float SelfRotationStrength; // 0x2e4
	FPointer Kernel; // 0x2e8
};

struct ATriggerStreamingLevel {
	TArray<FLevelStreamingData> Levels; // 0x290
};

struct UTgInventoryObject_Listen_Combo_Drogoz {
	float m_fLastThrustTime; // 0xd0
};

struct UOnlineGameInterfaceImpl {
	ObjectProperty OwningSubsystem; // 0x60
	ObjectProperty GameSettings; // 0x68
	ObjectProperty GameSearch; // 0x70
	TArray<DelegateProperty> CreateOnlineGameCompleteDelegates; // 0x78
	TArray<DelegateProperty> UpdateOnlineGameCompleteDelegates; // 0x88
	TArray<DelegateProperty> DestroyOnlineGameCompleteDelegates; // 0x98
	TArray<DelegateProperty> JoinOnlineGameCompleteDelegates; // 0xa8
	TArray<DelegateProperty> MigrateOnlineGameCompleteDelegates; // 0xb8
	TArray<DelegateProperty> JoinMigratedOnlineGameCompleteDelegates; // 0xc8
	TArray<DelegateProperty> RecalculateSkillRatingCompleteDelegates; // 0xd8
	TArray<DelegateProperty> StartOnlineGameCompleteDelegates; // 0xe8
	TArray<DelegateProperty> EndOnlineGameCompleteDelegates; // 0xf8
	TArray<DelegateProperty> FindOnlineGamesCompleteDelegates; // 0x108
	TArray<DelegateProperty> CancelFindOnlineGamesCompleteDelegates; // 0x118
	ELanBeaconState LanBeaconState; // 0x128
	char LanNonce[0x8]; // 0x129
	int32_t LanAnnouncePort; // 0x134
	int32_t LanGameUniqueId; // 0x138
	int32_t LanPacketPlatformMask; // 0x13c
	float LanQueryTimeLeft; // 0x140
	float LanQueryTimeout; // 0x144
	FPointer LanBeacon; // 0x148
	FPointer SessionInfo; // 0x150
	DelegateProperty __OnFindOnlineGamesComplete__Delegate; // 0x158
	DelegateProperty __OnCreateOnlineGameComplete__Delegate; // 0x168
	DelegateProperty __OnUpdateOnlineGameComplete__Delegate; // 0x178
	DelegateProperty __OnDestroyOnlineGameComplete__Delegate; // 0x188
	DelegateProperty __OnCancelFindOnlineGamesComplete__Delegate; // 0x198
	DelegateProperty __OnJoinOnlineGameComplete__Delegate; // 0x1a8
	DelegateProperty __OnCreateOnlineGameWithPartyComplete__Delegate; // 0x1b8
	DelegateProperty __OnMatchmakeOnlineGameWithPartyComplete__Delegate; // 0x1c8
	DelegateProperty __OnAddSessionMemberComplete__Delegate; // 0x1d8
	DelegateProperty __OnMultiplayerSessionChange__Delegate; // 0x1e8
	DelegateProperty __OnUpdateSessionPropertiesComplete__Delegate; // 0x1f8
	DelegateProperty __OnGameSessionReady__Delegate; // 0x208
	DelegateProperty __OnAcceptPendingGameSessionComplete__Delegate; // 0x218
	DelegateProperty __OnGamePlayersChanged__Delegate; // 0x228
	DelegateProperty __OnMatchStatusChanged__Delegate; // 0x238
	DelegateProperty __OnQuerySessionsForUserComplete__Delegate; // 0x248
	DelegateProperty __OnRegisterPlayerComplete__Delegate; // 0x258
	DelegateProperty __OnUnregisterPlayerComplete__Delegate; // 0x268
	DelegateProperty __OnRetrievedGameSettingsForIP__Delegate; // 0x278
	DelegateProperty __OnStartOnlineGameComplete__Delegate; // 0x288
	DelegateProperty __OnEndOnlineGameComplete__Delegate; // 0x298
	DelegateProperty __OnArbitrationRegistrationComplete__Delegate; // 0x2a8
	DelegateProperty __OnGameInviteAccepted__Delegate; // 0x2b8
	DelegateProperty __OnRecalculateSkillRatingComplete__Delegate; // 0x2c8
	DelegateProperty __OnMigrateOnlineGameComplete__Delegate; // 0x2d8
	DelegateProperty __OnJoinMigratedOnlineGameComplete__Delegate; // 0x2e8
	DelegateProperty __OnQosStatusChanged__Delegate; // 0x2f8
	DelegateProperty __OnGetNumberOfCurrentPlayersComplete__Delegate; // 0x308
	DelegateProperty __OnGetRoomIdFromTitleService__Delegate; // 0x318
	DelegateProperty __OnGetSessionMemberInfoComplete__Delegate; // 0x328
	DelegateProperty __OnGetUserConnectionInfoComplete__Delegate; // 0x338
};

struct UTgCameraModule_ThirdPerson {
	FVector vBasePivotLocation; // 0x68
	FVector vBaseCameraOffset; // 0x74
	FVector vDownCameraOffset; // 0x80
	FVector vDevADSCameraOffset; // 0x8c
	char bOverrideDevADSCameraOffset : 1; // 0x98
	char bForce3PView : 1; // 0x98
	FVector vForcedCameraOffset; // 0x9c
	FVector vCurrentCameraOffset; // 0xa8
	FVector vPreviousCameraOffset; // 0xb4
	float fCameraOffsetLerpDurationToForced; // 0xc0
	float fCameraOffsetLerpDurationToBase; // 0xc4
	float fCameraOffsetLerpTimer; // 0xc8
	float fZoomFactorInterp; // 0xcc
	float fZoomFactor; // 0xd0
	float fZoomStep; // 0xd4
	float fZoomMax; // 0xd8
	float fMountZoomMax; // 0xdc
	float fZoomMin; // 0xe0
	FVector2D fZoom3pPercentFromTo; // 0xe4
	float fZoomDuration; // 0xec
	float fZoomDurationOverride; // 0xf0
	float fZoomUsedTime; // 0xf4
	CameraPerspectiveType ePreviousPerspectiveType; // 0xf8
	CameraPerspectiveType ePerspectiveType; // 0xf9
	FVector vSkydiveCameraOffset; // 0xfc
	float fSkydiveCameraAlpha; // 0x108
	float fSkydiveCameraBlendSpeed; // 0x10c
	FVector vCatapultCameraOffset; // 0x110
	float fCatapultCameraAlpha; // 0x11c
	float fCatapultCameraBlendSpeed; // 0x120
	FVector vCatapultLocation; // 0x124
	FVector vCrouchCameraOffset; // 0x130
	float fCrouchCameraAlpha; // 0x13c
	float fCrouchCameraBlendSpeed; // 0x140
	FVector vChickenCameraOffset; // 0x144
	float fChickenCameraAlpha; // 0x150
	float fChickenCameraBlendSpeed; // 0x154
	FVector vMountCameraOffset; // 0x158
	float fMountCameraAlpha; // 0x164
	float fMountCameraBlendSpeed; // 0x168
	float fWallCollisionRecoverSpeed; // 0x16c
	float f_WallCollisionAlpha; // 0x170
	FVector vServerCorrectionDelta; // 0x174
	FVector vAvgServerCorrectionDelta; // 0x180
	FVector vLastDesiredLocation; // 0x18c
	FServerCorrectionSmoothingParams CorrectionSmoothing; // 0x198
	float m_fCollisionHeightInterpSpeed; // 0x1b8
	float m_fCollisionHeightZ; // 0x1bc
	FVector TeamRoyaleZeppelinViewOffset; // 0x1c0
};

struct UTgGameplayCurvesSet_AimAcceleration {
	TArray<ObjectProperty> AimAccelerationCurves; // 0x64
};

struct UUIComponent_PartyLobbyPlayerMenu {
	ObjectProperty m_mcFrame; // 0x120
	ObjectProperty m_pButtonList; // 0x128
	ObjectProperty m_pBlocker; // 0x130
};

struct UUIComponent_LevelProgress {
	ObjectProperty m_mcLevel; // 0x120
	ObjectProperty m_mcNextLevelXP; // 0x128
	ObjectProperty m_mcTimePlayed; // 0x130
	ObjectProperty m_mcWins; // 0x138
	ObjectProperty m_mcTotalXP; // 0x140
	ObjectProperty m_mcProgress; // 0x148
};

struct UWebApplication {
	ObjectProperty WorldInfo; // 0x60
	ObjectProperty WebServer; // 0x68
	FString Path; // 0x70
};

struct ATgDeploy_LootCrate {
	int32_t m_nAssemblyId; // 0x448
	float m_fLockTime; // 0x44c
	TArray<FLootCrateInfo> m_LootInfo; // 0x450
	TArray<FLootCrateInfo> m_OverrideLootInfo; // 0x460
	float s_fCloseTimer; // 0x470
	float m_SecondaryCylinderHeight; // 0x474
	float m_SecondaryCylinderRadius; // 0x478
	ObjectProperty m_TouchCollisionProxy; // 0x47c
	ATgCollisionProxy_Cylinder* m_CollisionProxyClass; // 0x484
	int32_t c_LootPickupResponseCounter; // 0x48c
	char c_bInitializing : 1; // 0x490
	float m_fLootSpawnAngleDegrees; // 0x494
	float m_fLootSpawnMinDist; // 0x498
	float m_fLootSpawnMaxDist; // 0x49c
	float m_fOpenAnimBlendTime; // 0x4a0
	TArray<ObjectProperty> BotsViewedBy; // 0x4a4
};

struct USpriteComponent {
	ObjectProperty Sprite; // 0x24c
	char bIsScreenSizeScaled : 1; // 0x254
	float ScreenSize; // 0x258
	float U; // 0x25c
	float UL; // 0x260
	float V; // 0x264
	float VL; // 0x268
};

struct UTgInventoryObject_Listen_FirstShotDuringOrAfterStealth {
	char m_bWasStealthed : 1; // 0xc8
	float m_fLastStealthTime; // 0xcc
};

struct UTgInventoryObject_Listen_FireInsteadOfDeath {
	float m_fImmuneTimer; // 0xc8
	char m_bPendingActivation : 1; // 0xcc
};

struct ATgDeploy_Gourd {
	char r_bHasRipenedGourd : 1; // 0x47c
};

struct ATgSkeletalMeshActor_Loader {
	FPointer VfTable_ITgSkinnableInterface; // 0x32c
	ObjectProperty m_PendingMeshInfo; // 0x334
	ObjectProperty m_CurrentMeshInfo; // 0x33c
	ObjectProperty c_AssetManifestGroup; // 0x344
	FPointer m_PendingBot; // 0x34c
	FPointer m_PendingSkin; // 0x354
	FPointer m_PendingHead; // 0x35c
	FPointer m_PendingDevice; // 0x364
	FPointer m_PendingDeviceSkin; // 0x36c
	FPointer m_PendingDeployable; // 0x374
	FPointer m_PendingMarker; // 0x37c
	LobbyAnimPose m_PendingPose; // 0x384
	LobbyAnimPose m_CurrentPose; // 0x385
	EModelHighlightType m_HighlightType; // 0x386
	FPointer m_PendingMVPDevice; // 0x388
	FPointer m_PendingContrailSkin; // 0x390
	FPointer m_CurrentBot; // 0x398
	FPointer m_CurrentSkin; // 0x3a0
	FPointer m_CurrentHead; // 0x3a8
	FPointer m_CurrentDevice; // 0x3b0
	FPointer m_CurrentDeviceSkin; // 0x3b8
	FPointer m_CurrentDeployable; // 0x3c0
	FPointer m_CurrentMarker; // 0x3c8
	FPointer m_CurrentMVPDevice; // 0x3d0
	FPointer m_CurrentContrailSkin; // 0x3d8
	FPointer m_SpawnedMarker; // 0x3e0
	char m_bWaitingForTextures : 1; // 0x3e8
	char m_bIsAsyncLoading : 1; // 0x3e8
	char m_bAllowOverlays : 1; // 0x3e8
	char m_bUsesPreviewMesh : 1; // 0x3e8
	char m_bOverrideLightingChannels : 1; // 0x3e8
	int32_t m_nAsyncLoadDelayTicksDefault; // 0x3ec
	int32_t m_nAsyncLoadDelayTicks; // 0x3f0
	ComponentProperty m_PointLight; // 0x3f4
	TArray<ComponentProperty> m_ChildMeshes; // 0x3fc
	TArray<ComponentProperty> m_SkinMeshes; // 0x40c
	TArray<ComponentProperty> m_HeadMeshes; // 0x41c
	TArray<ComponentProperty> m_WeaponMeshes; // 0x42c
	ComponentProperty m_AlternateLightEnvironmentTemplate; // 0x43c
	TArray<ComponentProperty> m_AlternateLightEnvironments; // 0x444
	ObjectProperty m_OverlayMaterial; // 0x454
	ComponentProperty m_CustomCharacterComponent; // 0x45c
	TArray<ObjectProperty> m_MeshReplacementMICs; // 0x464
	TArray<FLobbySMAMeterBus> m_MeterBusses; // 0x474
	FLightingChannelContainer m_LightingChannels; // 0x484
	TArray<ObjectProperty> m_EmoteBlendNodes; // 0x488
	TArray<ObjectProperty> m_EmoteSequenceNodes; // 0x498
	ObjectProperty NonHighlightMaterial; // 0x4a8
	ObjectProperty m_EmoteAnimSet; // 0x4b0
	ObjectProperty m_MVPAnimSet; // 0x4b8
	float m_fEmoteLoopDelay; // 0x4c0
	DelegateProperty __OnMeshUpdated__Delegate; // 0x4c4
};

struct UMeshComponent {
	TArray<ObjectProperty> Materials; // 0x24c
	int32_t MatResGrpId; // 0x25c
	TArray<ObjectProperty> SavedBodyMICs; // 0x260
	TArray<ObjectProperty> DefaultBodyMICs; // 0x270
	TArray<ObjectProperty> DyedBodyMICs; // 0x280
	char m_bForceHideComponent : 1; // 0x290
};

struct ATgDevice_Leap {
	char m_bLeapInLookDirection : 1; // 0xaec
	char m_bDidJustLeap : 1; // 0xaec
};

struct UPComGameEngine {
	FPointer pOutgoingMarshal; // 0xaa4
};

struct UUIComponent_DualButtonPanel {
	ObjectProperty m_pPanelRoot; // 0x118
	ObjectProperty m_pPanelButton; // 0x120
	ObjectProperty m_pButton; // 0x128
	ObjectProperty m_pButtonCurrency; // 0x130
};

struct UTgSeqAct_RequestMission {
	int32_t m_nMapGameId; // 0x108
};

struct UAnimNotify {
	char ShouldDeferIssue : 1; // 0x60
	EDetailMode DetailMode; // 0x64
};

struct UIniLocPatcher {
	TArray<FIniLocFileEntry> Files; // 0x60
	char bRequestEmsFileList : 1; // 0x70
	int32_t MaxCachedFileAge; // 0x74
	TScriptInterface<Class> TitleFileInterface; // 0x78
	TScriptInterface<Class> TitleFileCacheInterface; // 0x88
	TArray<DelegateProperty> ReadTitleFileCompleteDelegates; // 0x98
	DelegateProperty __OnReadTitleFileComplete__Delegate; // 0xa8
	DelegateProperty __OnAllTitleFilesCompleted__Delegate; // 0xb8
};

struct USeqAct_GiveInventory {
	TArray<AInventory*> InventoryList; // 0x108
	char bClearExisting : 1; // 0x118
	char bForceReplace : 1; // 0x118
};

struct AVehicle {
	ObjectProperty Driver; // 0x5a8
	char bDriving : 1; // 0x5b0
	char bDriverIsVisible : 1; // 0x5b0
	char bAttachDriver : 1; // 0x5b0
	char bTurnInPlace : 1; // 0x5b0
	char bSeparateTurretFocus : 1; // 0x5b0
	char bFollowLookDir : 1; // 0x5b0
	char bHasHandbrake : 1; // 0x5b0
	char bScriptedRise : 1; // 0x5b0
	char bDuckObstacles : 0; // 0x5b0
	char bAvoidReversing : 0; // 0x5b0
	char bRetryPathfindingWithDriver : 0; // 0x5b0
	char bIgnoreStallZ : 0; // 0x5b0
	char bDoExtraNetRelevancyTraces : 0; // 0x5b0
	TArray<FVector> ExitPositions; // 0x5b4
	float ExitRadius; // 0x5c4
	FVector ExitOffset; // 0x5c8
	float Steering; // 0x5d4
	float Throttle; // 0x5d8
	float Rise; // 0x5dc
	FVector TargetLocationAdjustment; // 0x5e0
	float DriverDamageMult; // 0x5ec
	float MomentumMult; // 0x5f0
	UDamageType* CrushedDamageType; // 0x5f4
	float MinCrushSpeed; // 0x5fc
	float ForceCrushPenetration; // 0x600
	char StuckCount; // 0x604
	float ThrottleTime; // 0x608
	float StuckTime; // 0x60c
	float OldSteering; // 0x610
	float OnlySteeringStartTime; // 0x614
	float OldThrottle; // 0x618
	float AIMoveCheckTime; // 0x61c
	float VehicleMovingTime; // 0x620
	float TurnTime; // 0x624
};

struct UTgManifestGroup {
	FPointer VfTable_FCallbackEventDevice; // 0x60
	TArray<FPointer> m_ManifestList; // 0x68
	TArray<ObjectProperty> m_pObjectReferencers; // 0x78
	ObjectProperty m_OwningObject; // 0x88
	char m_bIsInCallback : 1; // 0x90
	char m_bInitialized : 1; // 0x90
	char m_bResetOnMapLoad : 1; // 0x90
	EAsyncLoadPriority m_AsyncLoadPriority; // 0x94
	DelegateProperty __OnAllManifestsLoaded__Delegate; // 0x98
};

struct UUIScene_UIRadialMenuBase {
	RadialMenuPage m_CurrentPage; // 0x154
	RadialMenuDir m_CurrentSlice; // 0x155
	int32_t m_nCurrentSubSelectionN; // 0x158
	int32_t m_nCurrentSubSelectionS; // 0x15c
	char m_bShowingLargeButtonN : 1; // 0x160
	char m_bShowingLargeButtonS : 1; // 0x160
	char m_bAllowPageLooping : 1; // 0x160
	char m_bCenterMouseOnShow : 1; // 0x160
	int32_t m_nAxisUpdateCBHandle; // 0x164
	float m_fSelectionDelayGamepad; // 0x168
	float m_fSelectionDelayMouse; // 0x16c
	float m_fDeselectionDelayGamepad; // 0x170
	float m_fDeselectionDelayMouse; // 0x174
	float m_fMouseOffsetX; // 0x178
	float m_fMouseOffsetY; // 0x17c
	ObjectProperty m_mcWheel; // 0x180
	ObjectProperty m_pItemE; // 0x188
	ObjectProperty m_pItemW; // 0x190
	ObjectProperty m_pItemLargeN; // 0x198
	ObjectProperty m_pItemLargeS; // 0x1a0
	TArray<ObjectProperty> m_pSubSelectN; // 0x1a8
	TArray<ObjectProperty> m_pSubSelectS; // 0x1b8
	ObjectProperty m_akSliceHover; // 0x1c8
	ObjectProperty m_akWheelSelect; // 0x1d0
	UUIComponent_ItemRadialMenuBase* m_ItemClass; // 0x1d8
};

struct UOnlineStats {
	int32_t TotalRowsInView; // 0x60
	TArray<FOnlineStatsRow> Rows; // 0x64
	TArray<FColumnMetaData> ColumnData; // 0x74
};

struct USeqAct_Teleport {
	char bUpdateRotation : 1; // 0x108
	char bCheckOverlap : 1; // 0x108
	char bResetVelocity : 1; // 0x108
	float TeleportDistance; // 0x10c
	TArray<ObjectProperty> TeleportVolumes; // 0x110
};

struct UInterpTrackInstSkelControlStrength {
	char bSavedControlledByAnimMetaData : 1; // 0x60
};

struct UMaterialExpressionDepthBiasBlend {
	char bNormalize : 1; // 0x120
	float BiasScale; // 0x124
	FExpressionInput Bias; // 0x128
};

struct UTgAIBehaviorCondition_AmmoCount {
	TG_EQUIP_POINT DeviceSlot; // 0x98
	int32_t AmmoThreshold; // 0x9c
};

struct UParticleModuleVelocity {
	FRawDistributionVector StartVelocity; // 0x6c
	FRawDistributionFloat StartVelocityRadial; // 0x90
};

struct UTgAnimTurnInPlace_Player {
	TArray<FTIP_Transition> TIP_Transitions; // 0x1ac
};

struct UParticleModuleUberRainSplashA {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartRotation; // 0xc0
	char bInheritParent : 1; // 0xe4
	char MultiplyX : 1; // 0xe4
	char MultiplyY : 1; // 0xe4
	char MultiplyZ : 1; // 0xe4
	FRawDistributionVector LifeMultiplier; // 0xe8
	FRawDistributionVector ColorOverLife; // 0x10c
	FRawDistributionFloat AlphaOverLife; // 0x130
};

struct UTgAnimBlendByPhase {
	ObjectProperty m_TgPawn; // 0x168
	int32_t m_LastPhase; // 0x170
	int32_t m_CurrentPhase; // 0x174
	char m_bEnableTransitionAnims : 1; // 0x178
	TArray<Fm_PhaseProfile> m_PhaseProfiles; // 0x17c
};

struct UTgAIBehaviorComposite_Sequence {
	char bStopOnRunningChild : 1; // 0xb8
};

struct UParticleModuleLocationDirect {
	FRawDistributionVector Location; // 0x68
	FRawDistributionVector LocationOffset; // 0x8c
	FRawDistributionVector ScaleFactor; // 0xb0
	FRawDistributionVector Direction; // 0xd4
};

struct UInstancedFoliageSettings {
	float Density; // 0x60
	float Radius; // 0x64
	float ScaleMinX; // 0x68
	float ScaleMinY; // 0x6c
	float ScaleMinZ; // 0x70
	float ScaleMaxX; // 0x74
	float ScaleMaxY; // 0x78
	float ScaleMaxZ; // 0x7c
	char LockScaleX : 1; // 0x80
	char LockScaleY : 1; // 0x80
	char LockScaleZ : 1; // 0x80
	char AlignToNormal : 1; // 0x80
	char RandomYaw : 1; // 0x80
	char UniformScale : 1; // 0x80
	char ReapplyDensity : 1; // 0x80
	char ReapplyRadius : 1; // 0x80
	char ReapplyAlignToNormal : 0; // 0x80
	char ReapplyRandomYaw : 0; // 0x80
	char ReapplyScaleX : 0; // 0x80
	char ReapplyScaleY : 0; // 0x80
	char ReapplyScaleZ : 0; // 0x80
	char ReapplyRandomPitchAngle : 0; // 0x80
	char ReapplyGroundSlope : 0; // 0x80
	char ReapplyHeight : 0; // 0x80
	char ReapplyLandscapeLayer : 0; // 0x80
	char ReapplyZOffset : 0; // 0x80
	char CastShadow : 0; // 0x80
	char bCastDynamicShadow : 0; // 0x80
	char bCastStaticShadow : 0; // 0x80
	char bSelfShadowOnly : 0; // 0x80
	char bNoModSelfShadow : 0; // 0x80
	char bAcceptsDynamicDominantLightShadows : 0; // 0x80
	char bCastHiddenShadow : 0; // 0x80
	char bCastShadowAsTwoSided : 0; // 0x80
	char bAcceptsLights : 0; // 0x80
	char bAcceptsDynamicLights : 0; // 0x80
	char bUseOnePassLightingOnTranslucency : 0; // 0x80
	char bUsePrecomputedShadows : 0; // 0x80
	char bStreamInstanceBuffer : 0; // 0x80
	char bCollideActors : 0; // 0x80
	char bBlockActors : 1; // 0x84
	char bBlockNonZeroExtent : 1; // 0x84
	char bBlockZeroExtent : 1; // 0x84
	char IsSelected : 1; // 0x84
	char ShowNothing : 1; // 0x84
	char ShowPaintSettings : 1; // 0x84
	char ShowInstanceSettings : 1; // 0x84
	float AlignMaxAngle; // 0x88
	float RandomPitchAngle; // 0x8c
	float GroundSlope; // 0x90
	float HeightMin; // 0x94
	float HeightMax; // 0x98
	FName LandscapeLayer; // 0x9c
	float ZOffsetMin; // 0xa4
	float ZOffsetMax; // 0xa8
	int32_t MaxInstancesPerCluster; // 0xac
	float MaxClusterRadius; // 0xb0
	float ReapplyDensityAmount; // 0xb4
	int32_t StartCullDistance; // 0xb8
	int32_t EndCullDistance; // 0xbc
	FoliageCullOption CullOption; // 0xc0
	EDetailMode DetailMode; // 0xc1
	int32_t TranslucencySortPriority; // 0xc4
	int32_t DisplayOrder; // 0xc8
};

struct AHavokCustomTraversalAnnotation {
	ObjectProperty m_Target; // 0x280
	EHavokTraversalType TraversalType; // 0x288
	float EdgeCost; // 0x28c
	FRotator SourceEdgeRotation; // 0x290
	FVector SourceEdgeTranslation; // 0x29c
	float fEdgeWidth; // 0x2a8
	char bForceParallelEdges : 1; // 0x2ac
	ObjectProperty m_Source; // 0x2b0
};

struct ATgPawn_Alchemist {
	char r_bWeightless : 1; // 0x310c
	char m_bWeightlessDurationEnded : 1; // 0x310c
	float m_fWeightlessMaxSpeedModifier; // 0x3110
	float m_fWeightlessJumpZModifier; // 0x3114
};

struct UGameSpecialMove {
	ObjectProperty PawnOwner; // 0x60
	FName Handle; // 0x68
	float LastCanDoSpecialMoveTime; // 0x70
	char bLastCanDoSpecialMove : 1; // 0x74
	char bReachPreciseDestination : 1; // 0x74
	char bReachedPreciseDestination : 1; // 0x74
	char bReachPreciseRotation : 1; // 0x74
	char bReachedPreciseRotation : 1; // 0x74
	char bForcePrecisePosition : 1; // 0x74
	FVector PreciseDestination; // 0x78
	ObjectProperty PreciseDestBase; // 0x84
	FVector PreciseDestRelOffset; // 0x8c
	float PreciseRotationInterpolationTime; // 0x98
	FRotator PreciseRotation; // 0x9c
};

struct ULightmassPrimitiveSettingsObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x60
};

struct UActorFactoryFogVolumeConstantDensityInfo {
	ObjectProperty SelectedMaterial; // 0x9c
	char bNothingSelected : 1; // 0xa4
};

struct UMaterialExpressionComment {
	int32_t PosX; // 0xb0
	int32_t PosY; // 0xb4
	int32_t SizeX; // 0xb8
	int32_t SizeY; // 0xbc
	FString Text; // 0xc0
};

struct ATgCameraVolume {
	ObjectProperty AssociatedCamera; // 0x2bc
};

struct UTgAnimNodeSequenceByBoneRotation {
	FName BoneName; // 0x1ac
	EAxis BoneAxis; // 0x1b4
	TArray<FAnimByRotation> AnimList; // 0x1b8
};

struct UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0xa0
	float CurveTension; // 0xb4
};

struct UTgAIBehaviorSensor_SafeToRecall {
	float SafeRecallDist; // 0x94
};

struct ATgDevice_Spray {
	char m_bMissedSpray : 1; // 0xaec
};

struct ATgPawn {
	FPointer VfTable_ITgSkinnableInterface; // 0x5ac
	FPointer VfTable_ITgCombatActor; // 0x5b4
	FPointer VfTable_ITgObserver_ViewTargetChanged; // 0x5bc
	FPointer VfTable_ITgInteractiveAudio; // 0x5c4
	FVector r_vPhysTweenTarget; // 0x5cc
	ETweenState r_eTweenState; // 0x5d8
	ETweenState m_eLocalTweenState; // 0x5d9
	char s_BitPackedHitReaction; // 0x5da
	EGrabState r_eGrabState; // 0x5db
	EGrabState m_eLocalGrabState; // 0x5dc
	EChargeState r_eChargeState; // 0x5dd
	TG_DEATH_REASON r_eDeathReason; // 0x5de
	TgMeshVisibilityState c_PreviousMeshVisibilityState; // 0x5df
	TG_REP_DEVICE_STATE r_ReplicatedDeviceState[0x14]; // 0x5e0
	TG_EQUIP_POINT r_eDesiredInHand; // 0x5f4
	TG_EQUIP_POINT m_eCachedDesiredInHand; // 0x5f5
	TG_EQUIP_POINT m_eEquippedInHand; // 0x5f6
	char r_nPackedFireMultiRanges[0x14]; // 0x5f7
	TG_EQUIP_POINT r_eDesiredAIDevice; // 0x60b
	STEALTH_TYPE r_eIsStealthed; // 0x60c
	STEALTH_TYPE c_eIsStealthed; // 0x60d
	char r_nInCombatNonce; // 0x60e
	char c_nInCombatNonceAck; // 0x60f
	DeployableOverlayIcon m_InitHUDOverlayIcon; // 0x610
	DeployableOverlayState m_InitHUDOverlayState; // 0x611
	TG_POSTURE m_ePosture; // 0x612
	EStunType r_eCurrentStunType; // 0x613
	char c_nLocalRespawnBeaconHUDState; // 0x614
	OverlayMICType m_OverlayCurrentTypeBody; // 0x615
	OverlayMICType m_OverlayCurrentTypeWeapon; // 0x616
	ESceneDepthPriorityGroup m_eCharacterCustom1OverlayDepthGroup; // 0x617
	EForcedSilhouetteVisibility m_eForcedSilhouetteVisibility; // 0x618
	EHitReactionType m_HitReactionType; // 0x619
	EMountState r_eMountState; // 0x61a
	EUITargetingType c_UITargetingType; // 0x61b
	EMetaGameState m_eMetaGameState; // 0x61c
	EBotBehaviorState m_eBotBehaviorState; // 0x61d
	char m_nIsInIntroState; // 0x61e
	EPolymorphType c_PrevPolymorph; // 0x61f
	EPolymorphType c_LocalPolymorph; // 0x620
	EPolymorphType r_CurrentPolymorph; // 0x621
	EThreatLevel c_ThreatLevel; // 0x622
	EThreatLevel c_LastThreatLevel; // 0x623
	LocalViewerRangeState m_RangeStateFromLocalViewer; // 0x624
	EEmote c_eCurrentAudioEmotePlaying; // 0x625
	TgVaultTypes m_CurrentVaultType; // 0x626
	TgWindowVaultStates m_eWindowVaultState; // 0x627
	SkydivingState m_eSkydivingState; // 0x628
	SkydivingState m_ePrevSkydivingState; // 0x629
	SprintState m_eSprintState; // 0x62a
	float m_fPhysTweenDist; // 0x62c
	float r_fPhysTweenDuration; // 0x630
	int32_t m_nPhysTweenPostureId; // 0x634
	char r_bPhysTweenInterrupted : 1; // 0x638
	char s_bIsInGrass : 1; // 0x638
	char r_bIsInItemShop : 1; // 0x638
	char r_bHasLeftItemShop : 1; // 0x638
	char r_bGrabInterrupted : 1; // 0x638
	char m_PreGrabCollideActors : 1; // 0x638
	char m_PreGrabBlockActors : 1; // 0x638
	char r_bUsePhysFlyingForCharge : 1; // 0x638
	char r_bChargeIgnoreHumanoidBlocking : 0; // 0x638
	char m_bWantsCharge : 0; // 0x638
	char m_bCanJumpWhileCharging : 0; // 0x638
	char m_bCanChargeInAir : 0; // 0x638
	char m_bEndChargeInFalling : 0; // 0x638
	char m_bIgnoreFriendlyBlocking : 0; // 0x638
	char m_bIgnoreEnemyBlocking : 0; // 0x638
	char m_bHasDestroyedMesh : 0; // 0x638
	char m_bDefaultPropsInitialized : 0; // 0x638
	char m_bAffectedByVortices : 0; // 0x638
	char s_LoadMeshServerSide : 0; // 0x638
	char c_bDeviceHiddenDueToFullBodyAnim : 0; // 0x638
	char c_bMeshHiddenDueToDeath : 0; // 0x638
	char c_bHideMeshFromCameraPenetration : 0; // 0x638
	char c_bHideMeshFromKismet : 0; // 0x638
	char r_bInGlobalOffhandCooldown : 0; // 0x638
	char bInGlobalOffhandCooldownClient : 0; // 0x638
	char m_bInFireLock : 0; // 0x638
	char c_bHasAutoEquippedNonMeleeWeapon : 0; // 0x638
	char m_bCachedLocalPlayerHasLOS : 0; // 0x638
	char c_bIsStealthMaterialOn : 0; // 0x638
	char r_bIsVolumeStealthed : 0; // 0x638
	char r_bIsVolumeStealthFading : 0; // 0x638
	char m_bDisableVolumeStealth : 0; // 0x638
	char r_bDisableVolumeStealth : 1; // 0x63c
	char m_bCannotBeVolumeStealthed : 1; // 0x63c
	char m_bPlayingStealth : 1; // 0x63c
	char m_bPlayingDetected : 1; // 0x63c
	char c_bHiddenDueToStealth : 1; // 0x63c
	char c_bHiddenDueToObscuringDeployable : 1; // 0x63c
	char r_bCanStartStealthInCombat : 1; // 0x63c
	char m_bIsVisionBlocker : 1; // 0x63c
	char m_bIsAIVisionBlocker : 0; // 0x63c
	char m_bApplyDistanceFade : 0; // 0x63c
	char r_bIsBot : 0; // 0x63c
	char s_bInvisibleToPets : 0; // 0x63c
	char s_bCanSeePets : 0; // 0x63c
	char c_bIsFrametestZombie : 0; // 0x63c
	char r_bIsAnimInStrafeMode : 0; // 0x63c
	char m_ReachedTargetSoKillRootMotion : 0; // 0x63c
	char s_bCanApplyEffects : 0; // 0x63c
	char m_bInitialized : 0; // 0x63c
	char m_bUseInterrupted : 0; // 0x63c
	char c_bIgnoreInterruption : 0; // 0x63c
	char r_bNoEnergyCost : 0; // 0x63c
	char m_bCheatUseNoEnergy : 0; // 0x63c
	char m_bCheatNoRecharge : 0; // 0x63c
	char m_bIsInvisibleToAI : 0; // 0x63c
	char r_bInCombatFlag : 0; // 0x63c
	char s_bIsStill : 0; // 0x63c
	char m_bHitWallThisTick : 0; // 0x63c
	char r_bIsAFK : 0; // 0x63c
	char c_bHandIKEnabledFromAnimSet : 0; // 0x63c
	char c_bCanDoTurnInPlaceAnim : 0; // 0x63c
	char c_bIsPlayingTurnInPlaceAnim : 0; // 0x63c
	char m_bShouldApplyCCImmuneOverlay : 0; // 0x63c
	char m_bToggleZoom : 1; // 0x640
	char m_bCanBeKnockedBack : 1; // 0x640
	char m_bCausesPushblock : 1; // 0x640
	char m_bPushblockAffectsFriendlies : 1; // 0x640
	char m_bPushblockAffectsEnemies : 1; // 0x640
	char m_bIsCrowdControlImmuneKismet : 1; // 0x640
	char m_bUseSmoothNetReceiveRotation : 1; // 0x640
	char m_bForceSmoothCorrection : 1; // 0x640
	char r_bIsRotationLockedForSpectate : 0; // 0x640
	char m_bAlwaysUseAccurateRotation : 0; // 0x640
	char r_bHasAccurateRotation : 0; // 0x640
	char c_bUpdateSkelMeshWhenNotRendered : 0; // 0x640
	char c_bUpdateSkelMeshWhenNotRenderedServer : 0; // 0x640
	char r_bSilenced : 0; // 0x640
	char r_bDisarmed : 0; // 0x640
	char r_bCrippled : 0; // 0x640
	char r_bIsInStasis : 0; // 0x640
	char r_bCanBePulled : 0; // 0x640
	char s_bHasCrippleEffect : 0; // 0x640
	char c_bEnemyMatLoaded : 0; // 0x640
	char r_bIsFlashBang : 0; // 0x640
	char r_bIsJumping : 0; // 0x640
	char r_bIsShortJump : 0; // 0x640
	char m_bIsLanding : 0; // 0x640
	char m_bAllowHigherWallJumping : 0; // 0x640
	char m_bIgnorePhysCheckForJump : 0; // 0x640
	char m_bHasPlayedDeathAnimation : 0; // 0x640
	char m_bForceDeathAnim : 0; // 0x640
	char r_bHasRespawnBeacon : 0; // 0x640
	char m_bDestroyOnOwnerDeathFlag : 0; // 0x640
	char r_bNeedPlaySpawnFx : 0; // 0x640
	char c_bSpawnFxPlayed : 0; // 0x640
	char c_bTargeted : 1; // 0x644
	char c_bTargetedLightup : 1; // 0x644
	char c_bApplyDropShadow : 1; // 0x644
	char m_bShowNameplate : 1; // 0x644
	char r_bInitialIsEnemy : 1; // 0x644
	char c_bNeedsAssetLoad : 1; // 0x644
	char c_bNeedsAssetSwap : 1; // 0x644
	char c_bNeedsDeviceFormChange : 1; // 0x644
	char r_bPawnHasLanded : 0; // 0x644
	char r_bDebugShowAIDebug : 0; // 0x644
	char m_SwapToDestroyedMeshOnTick : 0; // 0x644
	char m_bBlockCamera : 0; // 0x644
	char m_bOverlaysEnabled : 0; // 0x644
	char m_b1POverlaysEnabled : 0; // 0x644
	char m_b1POverlaysActive : 0; // 0x644
	char m_bSilhouettesVisible : 0; // 0x644
	char m_bUseSilhouettes : 0; // 0x644
	char m_bSilhouettesVisibleForObserverSpectator : 0; // 0x644
	char m_bIgnoreTearOffMomentum : 0; // 0x644
	char m_bAcceptsHitReactions : 0; // 0x644
	char m_bIsFadingOut : 0; // 0x644
	char m_bUseDamageTypeForDeathAnim : 0; // 0x644
	char r_bDemoCanPurchaseItems : 0; // 0x644
	char s_bHasInteractedWithStore : 0; // 0x644
	char s_bAlwaysRelevantExceptRoyale : 0; // 0x644
	char m_bDoSmoothCorrectionThisTick : 0; // 0x644
	char m_bOnlyTakeHeadshotDamage : 0; // 0x644
	char r_bIsMounted : 0; // 0x644
	char m_bIsEnteringMount : 0; // 0x644
	char m_bCreateMountMeshDeferred : 0; // 0x644
	char m_bCanAlignMount : 0; // 0x644
	char m_bInADS : 0; // 0x644
	char m_bUpdateInhandDeferred : 1; // 0x648
	char m_bUpdateEyeHeight : 1; // 0x648
	char m_bJustLanded : 1; // 0x648
	char m_bLandRecovery : 1; // 0x648
	char r_bIsSprinting : 1; // 0x648
	char r_bJustJumped : 1; // 0x648
	char m_bStunEnergyRegen : 1; // 0x648
	char c_bHealAkEventPlaying : 1; // 0x648
	char m_bPainAkEventPlaying : 0; // 0x648
	char r_bIsDazed : 0; // 0x648
	char r_bIsMarked : 0; // 0x648
	char r_bIsBleeding : 0; // 0x648
	char r_bIsOnFire : 0; // 0x648
	char r_bIsRooted : 0; // 0x648
	char r_bIsKnockedBack : 0; // 0x648
	char r_bIsPoisoned : 0; // 0x648
	char r_bIsSlowed : 0; // 0x648
	char r_bIsFrozen : 0; // 0x648
	char r_bIsCCImmune : 0; // 0x648
	char r_bIsRevealed : 0; // 0x648
	char r_bIsWallHacking : 0; // 0x648
	char r_bIsInSelfKnockBack : 0; // 0x648
	char m_bUseOutlines : 0; // 0x648
	char m_bIsLeaping : 0; // 0x648
	char m_bCanSpawnHealthNuggetsOnDeath : 0; // 0x648
	char m_bCanAutoMountOnRespawn : 0; // 0x648
	char c_bShowingDisarm : 0; // 0x648
	char r_bFirstSpawnWave : 0; // 0x648
	char m_bWaitForIntroAnimToEnd : 0; // 0x648
	char m_bIntroAnimFinished : 0; // 0x648
	char m_bAllowIntroWhiteOut : 0; // 0x648
	char m_bIntroWhiteOutActive : 0; // 0x648
	char m_bAirAccuracyPenalty : 1; // 0x64c
	char c_bThreatInLineOfSightRecently : 1; // 0x64c
	char m_bCanBeHeadShot : 1; // 0x64c
	char c_bHide3PWeaponMeshWhileMounted : 1; // 0x64c
	char m_bShouldBeFirstPersonLastFrame : 1; // 0x64c
	char m_bFadeOutOnLifeAfterDeathTimerExpired : 1; // 0x64c
	char m_bUsesRecoil : 1; // 0x64c
	char m_bUsingSecondaryPhysicsAsset : 1; // 0x64c
	char m_bWasKilledByEnvironment : 0; // 0x64c
	char m_bShouldSmoothEyeHeight : 0; // 0x64c
	char m_bHasAstroBuff : 0; // 0x64c
	char r_bIsLifted : 0; // 0x64c
	char m_bCameraOverrideLocation : 0; // 0x64c
	char m_bShouldMantle : 0; // 0x64c
	char m_bWindowVaultDeviceLockout : 0; // 0x64c
	char r_bIsADS : 0; // 0x64c
	char m_bScopedIn : 0; // 0x64c
	char c_bSaveModMoveSpeed : 0; // 0x64c
	char m_bBehindView : 0; // 0x64c
	char r_bClientUsingForced3pOption : 0; // 0x64c
	char m_bWantsSkydivingTrail : 0; // 0x64c
	char m_bSkydivingTrailEnabled : 0; // 0x64c
	char m_bFogDamageDisabled : 0; // 0x64c
	char r_bArmorVisible : 0; // 0x64c
	char m_bUIInputLock : 0; // 0x64c
	char m_bQuietFootstepStateEnabled : 0; // 0x64c
	char m_bJustLaunchedFromCatapult : 0; // 0x64c
	char c_bIsPlayingCatapultPawnFX : 0; // 0x64c
	char m_bLockSkelControlRotation : 0; // 0x64c
	int32_t r_nPhysTweenFlags; // 0x650
	FString m_sGameplayPackage; // 0x654
	TScriptInterface<Class> m_AsInteractiveAudio; // 0x664
	ObjectProperty m_PawnDialogue; // 0x674
	float c_fLastAttackAudioCueTimestamp; // 0x67c
	float c_fLastAttackFromBehindAudioCueTimestamp; // 0x680
	float c_fLastAttackFromAboveAudioCueTimestamp; // 0x684
	float c_fLastAttackFromSniperAudioCueTimestamp; // 0x688
	float c_fRequestCooldownEmotePause; // 0x68c
	ObjectProperty r_GrabSource; // 0x690
	float r_fGrabDuration; // 0x698
	FName r_GrabAttachSocket; // 0x69c
	FVector r_vGrabLocationOffset; // 0x6a4
	FRotator r_rGrabRotationOffset; // 0x6b0
	FVector m_vGrabDestRelLocation; // 0x6bc
	FRotator m_rGrabDestRelRotation; // 0x6c8
	int32_t m_nPhysGrabPostureId; // 0x6d4
	TArray<ObjectProperty> s_GrabbedTargets; // 0x6d8
	int32_t r_nCannotBeGrabSource; // 0x6e8
	TArray<ObjectProperty> m_TeleportNotifyList; // 0x6ec
	float r_fChargeInitialYaw; // 0x6fc
	float r_fChargeInitialPitch; // 0x700
	FVector r_vChargeInitialLocation; // 0x704
	float r_fChargeSpeed; // 0x710
	float r_fChargeRange; // 0x714
	float r_fChargeTurnRate; // 0x718
	int32_t m_nCoreMeshAsmId; // 0x71c
	FPointer m_CoreMeshAssembly; // 0x720
	int32_t m_nBodyMeshAsmId; // 0x728
	FPointer m_BodyMeshAssembly; // 0x72c
	FPointer m_DestroyedMeshAssembly; // 0x734
	int32_t m_n1PHeadMeshId; // 0x73c
	int32_t r_nPawnId; // 0x740
	float c_fLastUpdateTime; // 0x744
	int32_t m_nArchetype; // 0x748
	ObjectProperty r_EffectManager; // 0x74c
	TArray<FTgPropertyInstance> m_Properties; // 0x754
	float r_CurrentPropValues[0x9e]; // 0x764
	float m_LocalPropValues[0x9e]; // 0x9dc
	float s_PropValuesRepResolution[0x9e]; // 0xc54
	float s_DefaultPropValues[0x9e]; // 0xecc
	float r_fCachedMaxHealth; // 0x1144
	TArray<FDebugPropertyMod> s_DebugPropertyMods; // 0x1148
	ObjectProperty m_AkActorUnoccluded; // 0x1158
	FEEmoteCategoryChance m_EmoteChances; // 0x1160
	FEEmoteAbilityChance m_EmoteChancesAbility; // 0x118c
	int32_t c_nEmoteCameraStackId; // 0x11a0
	float m_fLastEmoteTime; // 0x11a4
	float m_fEmoteGlobalCooldown; // 0x11a8
	TArray<float> m_fLastEmoteCatTimes; // 0x11ac
	TArray<float> m_fLastPlayerVGSEmoteTimes; // 0x11bc
	float m_fEmoteNonLocalCooldown; // 0x11cc
	float m_fLastNonLocalEmoteTime; // 0x11d0
	TArray<FECustomEmoteData> c_CustomEmoteData; // 0x11d4
	int32_t c_nLastCustomEmoteIndex; // 0x11e4
	float m_fSprayAccurateTraceLength; // 0x11e8
	float m_fSprayDecalWidth; // 0x11ec
	float m_fSprayDecalHeight; // 0x11f0
	float m_fSprayDecalDepth; // 0x11f4
	ComponentProperty c_SprayDecal; // 0x11f8
	TArray<FECustomSprayData> c_CustomSprayData; // 0x1200
	int32_t c_nLastCustomSprayIndex; // 0x1210
	float m_fSoftLandVelocityCutoff; // 0x1214
	float m_fHardLandVelocityCutoff; // 0x1218
	float s_nSpawnTime; // 0x121c
	int32_t r_nPhysicalType; // 0x1220
	float r_fReconnectTime; // 0x1224
	TArray<ObjectProperty> m_CurrentVortexList; // 0x1228
	TArray<ObjectProperty> m_CurrentBlackHoleList; // 0x1238
	UTgDamageType* m_DeathDamageType; // 0x1248
	FVector m_DeathHitLocation; // 0x1250
	int32_t m_nDeathFXMaterialHandle; // 0x125c
	FEquipDeviceInfo r_EquipDeviceInfo[0x14]; // 0x1260
	ObjectProperty m_EquippedDevices[0x14]; // 0x13f0
	int32_t m_CarriedAmmo[0x14]; // 0x1490
	ObjectProperty c_EquipForm[0x14]; // 0x14e0
	FName c_EquipFormState[0x14]; // 0x1580
	FName c_nmInHandSocket; // 0x1620
	FVector2D r_v2dInHandEquipInfo; // 0x1628
	ObjectProperty c_CurrentTargetingDevice; // 0x1630
	ObjectProperty c_CurrentStartActionDevice; // 0x1638
	float c_fShouldStartActionTimeStamp; // 0x1640
	ObjectProperty m_CurrentInHandDevice; // 0x1644
	int32_t c_nLockInHandToTargetingDevice; // 0x164c
	ObjectProperty c_WorldBracketFX; // 0x1650
	int32_t c_nLastProcessedFlashEventIdx; // 0x1658
	int32_t r_nFirstValidFlashEventIdx; // 0x165c
	int32_t r_nFlashQueIndex; // 0x1660
	int32_t r_nFlashEvent[0x20]; // 0x1664
	FVector r_vFlashLocation[0x20]; // 0x16e4
	FVector r_vFlashRayDir[0x20]; // 0x1864
	float r_vFlashRefireTime[0x20]; // 0x19e4
	ObjectProperty r_pFlashTarget[0x20]; // 0x1a64
	UDamageType* r_pFlashDamageType[0x20]; // 0x1b64
	int32_t r_nFlashFireInfo[0x20]; // 0x1c64
	float r_fFireMultiMaxRange; // 0x1ce4
	int32_t r_nFireMultiSeed; // 0x1ce8
	float r_fFireMultiSpreadAngle; // 0x1cec
	float s_fTauntAmount; // 0x1cf0
	float m_fLastPainSound; // 0x1cf4
	ComponentProperty LightEnvironment; // 0x1cf8
	FVector FireLocationOffsets[0x14]; // 0x1d00
	float BotTurnAcceleration; // 0x1df0
	float BotTurnSpeed; // 0x1df4
	float m_fMaxAimAssistStacks; // 0x1df8
	float m_fLOSReevaluationPeriod; // 0x1dfc
	float m_fLOSEvalTimer; // 0x1e00
	float r_fStealthFadeRate; // 0x1e04
	ObjectProperty r_CurrentVisibilityVolumes[0x2]; // 0x1e08
	ObjectProperty r_ObscuringDeployables[0xa]; // 0x1e18
	ObjectProperty r_BlindingDeployables[0xa]; // 0x1e68
	ObjectProperty r_VisibleThroughWallsInstigators[0xc]; // 0x1eb8
	ObjectProperty r_VisibleThroughStealthInstigators[0xc]; // 0x1f18
	float m_fVolumeStealthDisableTime; // 0x1f78
	float c_fVolumeFadeValue; // 0x1f7c
	float c_fDistanceFadeValue; // 0x1f80
	float c_fStealthFadeValue; // 0x1f84
	float c_fObscuringDeployableFadeValue; // 0x1f88
	float c_fBlindingDeployableFadeValue; // 0x1f8c
	float c_fCurrentFadeValue; // 0x1f90
	float c_fDistanceLastCollidingVisionRange; // 0x1f94
	float c_fLocalStealthFadeRate; // 0x1f98
	ObjectProperty c_TeleporterEnterFX; // 0x1f9c
	ObjectProperty c_TeleporterExitFX; // 0x1fa4
	ObjectProperty c_BlinkEnterFX; // 0x1fac
	ObjectProperty c_BlinkExitFX; // 0x1fb4
	ObjectProperty c_DetectedFx; // 0x1fbc
	ObjectProperty c_PetSuccessfulHitFx; // 0x1fc4
	float c_fFxScaleSize; // 0x1fcc
	float m_fLifeAfterDeathSecs; // 0x1fd0
	ObjectProperty r_aDebugTarget; // 0x1fd4
	ObjectProperty r_aDebugDestination; // 0x1fdc
	ObjectProperty r_aDebugNextNav; // 0x1fe4
	FVector r_vDebugNextNavMeshPoint; // 0x1fec
	FVector r_vDebugSpreadoutLocation; // 0x1ff8
	int32_t r_nDebugHearingRange; // 0x2004
	int32_t r_nDebugSightRange; // 0x2008
	int32_t r_nDebugFOV; // 0x200c
	FString r_sDebugAction; // 0x2010
	FString r_sDebugName; // 0x2020
	FString r_sDebugFactory; // 0x2030
	FVector s_vOneWayMovement; // 0x2040
	FVector r_vDown; // 0x204c
	float m_fMountFrictionMultiplier; // 0x2058
	float m_fBackpedalPct; // 0x205c
	float m_fMountBackpedalPct; // 0x2060
	ObjectProperty r_TargetActor; // 0x2064
	ObjectProperty r_LockedTarget; // 0x206c
	int32_t c_TargetMethod; // 0x2074
	ObjectProperty s_Pets[0x8]; // 0x2078
	ObjectProperty m_PetOwner; // 0x20b8
	int32_t c_ActivePets; // 0x20c0
	ObjectProperty s_LastAttacker; // 0x20c4
	ObjectProperty s_LastAttacked; // 0x20cc
	ObjectProperty s_LastChickened; // 0x20d4
	ObjectProperty m_CurrentMeleeTarget; // 0x20dc
	ObjectProperty r_Owner; // 0x20e4
	int32_t s_nSpawnerDeviceInstId; // 0x20ec
	int32_t s_nSpawnerDeviceModeId; // 0x20f0
	FDeathInfo r_DeathInfo; // 0x20f4
	int32_t r_nResetCharacter; // 0x2118
	int32_t r_nLiveRespawn; // 0x211c
	FName DyingStateName; // 0x2120
	int32_t m_nSpawnLocationId; // 0x2128
	int32_t m_nSpawnTableId; // 0x212c
	int32_t m_nSpawnTableDetailId; // 0x2130
	ObjectProperty m_LastPlayerStart; // 0x2134
	float m_fStandingHeight; // 0x213c
	float m_fStandingRadius; // 0x2140
	float m_fTargetCylinderHeight; // 0x2144
	float m_fTargetCylinderRadius; // 0x2148
	int32_t r_nPacingType; // 0x214c
	int32_t m_nKillShards; // 0x2150
	ObjectProperty m_CurrentUseActor; // 0x2154
	float m_fBaseTranslationOffset; // 0x215c
	float m_fCrouchTranslationOffset; // 0x2160
	float r_fInCombatTime; // 0x2164
	float m_fInCombatTime; // 0x2168
	float m_fBaseCombatTime; // 0x216c
	float m_fPhaseChangeTime; // 0x2170
	float m_fPhaseChangedTimeStamp; // 0x2174
	float m_PhaseChangeRemainingTime; // 0x2178
	int32_t r_nPhase; // 0x217c
	int32_t c_PreviousPhase; // 0x2180
	int32_t m_nInitHUDOverlayDisplayMask; // 0x2184
	float m_InitHUDOverlayEnemyViewDist; // 0x2188
	TArray<ObjectProperty> m_SimpleTransitionerNodes; // 0x218c
	TArray<ObjectProperty> m_FireBlendNodes; // 0x219c
	TArray<ObjectProperty> m_CombatWarinessBlendNodes; // 0x21ac
	TArray<ObjectProperty> m_PostureBlendNodes; // 0x21bc
	TArray<ObjectProperty> m_AnimNodeEmoteSwitches; // 0x21cc
	TArray<ObjectProperty> m_EmoteBlendNodes; // 0x21dc
	TArray<ObjectProperty> m_EmoteSequenceNodes; // 0x21ec
	TArray<ObjectProperty> m_EmoteTypeNodes; // 0x21fc
	TArray<ObjectProperty> m_AnimBlendByRealmCharacter; // 0x220c
	TArray<ObjectProperty> m_AnimNodeBlendByIntroductions; // 0x221c
	TArray<ObjectProperty> m_DeviceModeBlendNodes; // 0x222c
	TArray<ObjectProperty> m_SkelControlLocks; // 0x223c
	TArray<ObjectProperty> m_HitReactionAnimNode; // 0x224c
	TArray<ObjectProperty> m_AimOffsetAnimNodes; // 0x225c
	TArray<FName> m_SkelControlLockNames; // 0x226c
	ObjectProperty m_UpperBodyAnimNode; // 0x227c
	ObjectProperty m_UpperBodyAnimNodeSequence; // 0x2284
	ObjectProperty m_FullBodyAnimNode; // 0x228c
	int32_t m_nYawOffset; // 0x2294
	FPostureStack m_PostureStack; // 0x2298
	float m_fKnockbackMultiplier; // 0x22bc
	float m_fRBPushStrengthMultiplier; // 0x22c0
	FVector2D m_fRBPushStrengthRange; // 0x22c4
	FRotator m_PreviousNetReceiveRotation; // 0x22cc
	FRotator m_TargetNetReceiveRotation; // 0x22d8
	float m_RotationInterpRate; // 0x22e4
	int32_t m_nNetRotationCount; // 0x22e8
	int32_t m_nSmoothedRemoteViewPitch; // 0x22ec
	int32_t m_nPreviousReceivedRemoteViewPitch; // 0x22f0
	int32_t m_nTargetRemoteViewPitch; // 0x22f4
	float m_PitchInterpRate; // 0x22f8
	int32_t m_nNetViewPitchCount; // 0x22fc
	float m_fSmoothCorrectionRate; // 0x2300
	int32_t r_nViewYawWhenRotationLocked; // 0x2304
	int32_t m_UnpackedRemoteViewPitch; // 0x2308
	int32_t r_nPackedPitchYawForSpectate; // 0x230c
	FPointer m_pStatsTracker; // 0x2310
	ObjectProperty m_LastDamager; // 0x2318
	float m_LastDamagerTimeStamp; // 0x2320
	TArray<FPawnDamagerStruct> s_Damagers; // 0x2324
	ObjectProperty m_LastKnockbacker; // 0x2334
	float m_fJumpLandingTime; // 0x233c
	float m_fCeilingTraceDistForWallJumping; // 0x2340
	float m_fHorseJumpHeightIncrease; // 0x2344
	ObjectProperty r_StunTauntTarget; // 0x2348
	TArray<ObjectProperty> m_LocalTouchingRespawnBeacons; // 0x2350
	ObjectProperty c_LocalPC; // 0x2360
	ComponentProperty c_PlayerDropShadow; // 0x2368
	ObjectProperty c_PlayerDropShadowTemplate; // 0x2370
	ObjectProperty c_PlayerDropShadowMIC; // 0x2378
	float c_fPlayerDropShadowFade; // 0x2380
	FName c_PlayerDropShadowSocketName; // 0x2384
	UTgControlModule* DefaultControlModuleClass; // 0x238c
	float m_fFaceRotationInterpTime; // 0x2394
	float m_fRemainingFaceRotationInterpTime; // 0x2398
	int32_t r_nBigTeleportCount; // 0x239c
	int32_t c_nTickCheckingState; // 0x23a0
	ObjectProperty c_AssetManifestGroup; // 0x23a4
	ObjectProperty c_LevelUpFX; // 0x23ac
	int32_t c_nLevelUpFxId; // 0x23b4
	int32_t s_nKillCombo; // 0x23b8
	int32_t s_nKillStreak; // 0x23bc
	int32_t s_nLastDamageDeviceId; // 0x23c0
	int32_t r_nProfileId; // 0x23c4
	int32_t r_nSettingsOverrideId; // 0x23c8
	int32_t r_nSkinId; // 0x23cc
	int32_t r_nHeadSkinId; // 0x23d0
	int32_t r_nWeaponSkinId; // 0x23d4
	int32_t r_nMountSkinId; // 0x23d8
	int32_t r_nContrailSkinId; // 0x23dc
	int32_t r_nWardSkinId; // 0x23e0
	int32_t r_nCustomSprayIds[0x5]; // 0x23e4
	int32_t r_nCustomEmoteIds[0x5]; // 0x23f8
	int32_t s_nInitialPlayerId; // 0x240c
	int32_t r_nDeathStampId; // 0x2410
	int32_t r_nMapMarkerId; // 0x2414
	FPointer m_pAmBot; // 0x2418
	FPointer m_pAmSkin; // 0x2420
	FPointer m_pAmHead; // 0x2428
	FPointer m_pAmWeaponSkin; // 0x2430
	FPointer m_pAmMountSkin; // 0x2438
	FPointer m_pAmMarkerSkin; // 0x2440
	FPointer m_pAmContrailSkin; // 0x2448
	FPointer m_pAmVoicePack; // 0x2450
	TArray<FPointer> m_pAmCustomSprays; // 0x2458
	TArray<FPointer> m_pAmCustomEmotes; // 0x2468
	TArray<FPointer> m_pAmAllSkins; // 0x2478
	int32_t c_StunnedPostureID; // 0x2488
	int32_t c_FearedPostureID; // 0x248c
	int32_t c_DisarmedPostureID; // 0x2490
	TArray<ObjectProperty> s_Viewers; // 0x2494
	float m_fLastCTFVolumeTimestamp; // 0x24a4
	float m_fDamageTakenRTPC; // 0x24a8
	float m_fArmorDamageTakenPercentRTPC; // 0x24ac
	float m_fDamageTakenMax; // 0x24b0
	float m_fDamageTakenMaxSustainDuration; // 0x24b4
	float m_fDamageTakenRTPCSustainDuration; // 0x24b8
	TArray<FOverlayInfo> m_OverlayInfosBody; // 0x24bc
	TArray<FOverlayInfo> m_OverlayInfosWeapon; // 0x24cc
	ObjectProperty m_ExecuteOverlayMaterialFriend; // 0x24dc
	ObjectProperty m_ExecuteOverlayMaterialEnemy; // 0x24e4
	ObjectProperty m_ShieldOverlayMaterialFriend; // 0x24ec
	ObjectProperty m_ShieldOverlayMaterialEnemy; // 0x24f4
	ObjectProperty m_ImmortalOverlayMaterialFriend; // 0x24fc
	ObjectProperty m_ImmortalOverlayMaterialEnemy; // 0x2504
	ObjectProperty m_CharacterCustom1OverlayMaterial; // 0x250c
	ObjectProperty m_FreezeOverlayMaterial; // 0x2514
	TArray<FSilhouetteInfo> m_SilhouetteInfos; // 0x251c
	UTgSilhouetteComponent* m_SilhouetteClass; // 0x252c
	TArray<int32_t> m_IgnoredHitPulseIndicies; // 0x2534
	float m_fHitReactionAIPauseTime; // 0x2544
	float m_fHitReactionBlendOutTime; // 0x2548
	float m_fHitReactionTweenTime; // 0x254c
	float m_fFadeOutTime; // 0x2550
	float m_fFadeOutSpeed; // 0x2554
	ObjectProperty m_DeathAnimFX; // 0x2558
	TArray<ObjectProperty> m_HitReactionSkelControls; // 0x2560
	float m_fRemainingHitReactionPulseTime; // 0x2570
	float m_fHitReactionPulseTime; // 0x2574
	float m_fDisorientSpinRate; // 0x2578
	float s_fMaxRelevancyDistanceSquared; // 0x257c
	float m_fMaxSmoothNetUpdateDist; // 0x2580
	float m_fNoSmoothNetUpdateDist; // 0x2584
	float m_fSmoothNetUpdateTime; // 0x2588
	FVector m_vMeshTranslationOffset; // 0x258c
	float m_fInitialHealthPercent; // 0x2598
	float c_fHUDHealthPercent; // 0x259c
	float m_fDamageDealtPercentAI; // 0x25a0
	float m_fDamageTakenPercentAI; // 0x25a4
	TArray<FHealingInfo> s_RecentHealList; // 0x25a8
	float m_fRecentHealExpireTime; // 0x25b8
	int32_t m_nCloneExpirationAttacksCount; // 0x25bc
	float m_fCloneLeashRange; // 0x25c0
	float m_fCloneExpirationTime; // 0x25c4
	ObjectProperty r_CloneParentPRI; // 0x25c8
	int32_t r_nMountYaw; // 0x25d0
	FName m_MountFrontTraceSocketName; // 0x25d4
	FName m_MountBackTraceSocketName; // 0x25dc
	FName m_MountRootBoneName; // 0x25e4
	ObjectProperty m_pMountSkelControl; // 0x25ec
	ObjectProperty m_pMeshSkelControl; // 0x25f4
	float m_fMountPitchPrevious; // 0x25fc
	float m_fMountPitchTarget; // 0x2600
	float m_fMountPitchCurrent; // 0x2604
	float m_fMountVerticalOffsetPrevious; // 0x2608
	float m_fMountVerticalOffsetTarget; // 0x260c
	int32_t m_nMountPreviousRot; // 0x2610
	float m_nMountAlignInterp; // 0x2614
	ObjectProperty m_SprintBlendNode; // 0x2618
	ObjectProperty m_WeaponMesh; // 0x2620
	ComponentProperty m_BodyMesh; // 0x2628
	ComponentProperty m_HeadMesh; // 0x2630
	int32_t m_HeadSilhouetteIndex; // 0x2638
	int32_t m_HeadOverlayIndex; // 0x263c
	int32_t r_nBodyMeshOverride; // 0x2640
	int32_t r_nHeadMeshOverride; // 0x2644
	int32_t c_nCurrentHeadMeshID; // 0x2648
	float m_BobFootstepFactor; // 0x264c
	float Bob; // 0x2650
	float LandBob; // 0x2654
	float JumpBob; // 0x2658
	float AppliedBob; // 0x265c
	float BobTime; // 0x2660
	FVector WalkBob; // 0x2664
	float m_fOldZ; // 0x2670
	float m_fBobMult1; // 0x2674
	float m_fBobMult2; // 0x2678
	float m_fBobBlendAmount; // 0x267c
	float m_fBobBlendSpeed; // 0x2680
	FVector AimSpot; // 0x2684
	FVector AimNoise; // 0x2690
	float m_fAimSpotsetLastRefresh; // 0x269c
	float m_fAimNoiseLastRefresh; // 0x26a0
	float m_fAimPitch; // 0x26a4
	float m_fJetpackPowerPoolCost; // 0x26a8
	float m_fSprintPowerPoolCost; // 0x26ac
	float m_fSprintMinPowerPoolPct; // 0x26b0
	float m_fSprintPct; // 0x26b4
	ComponentProperty m_TakeHitAudioComponent; // 0x26b8
	ComponentProperty m_PainAudioComponent; // 0x26c0
	ObjectProperty m_TakeHitAkEvent; // 0x26c8
	ObjectProperty m_TakeHeadShotAkEvent; // 0x26d0
	ObjectProperty c_HealPlayAkEvent; // 0x26d8
	ObjectProperty c_HealStopAkEvent; // 0x26e0
	ObjectProperty m_PainAkEvent; // 0x26e8
	float m_fLastPainEvent; // 0x26f0
	float m_fPainEventCooldown; // 0x26f4
	ObjectProperty m_FireAnimNode; // 0x26f8
	ObjectProperty m_StealthPulseEffectGroup; // 0x2700
	float m_fStealthPulseTime; // 0x2708
	float r_fKnockedBackFrictionOverride; // 0x270c
	FVector r_vKnockedBackVelocityOverride; // 0x2710
	int32_t r_nIncomingImpactCount; // 0x271c
	float r_fReloadScale; // 0x2720
	float r_fEquipTimeScale; // 0x2724
	ObjectProperty r_HealTarget; // 0x2728
	ComponentProperty c_HealingBeamPSC; // 0x2730
	ComponentProperty m_OutlineMesh; // 0x2738
	ObjectProperty m_OutlineMaterial; // 0x2740
	ObjectProperty m_NearObjectiveVolume; // 0x2748
	float r_fLeapAirControl; // 0x2750
	float m_fBaseLeapAirControl; // 0x2754
	float m_fKnockAirControl; // 0x2758
	TArray<ObjectProperty> m_HomeguardVolumes; // 0x275c
	float m_LastHomeguardTime; // 0x276c
	ComponentProperty m_MountMesh; // 0x2770
	float s_fEndStealthDamage; // 0x2778
	float s_fDamageTakenDuringStealth; // 0x277c
	float m_fHUDOverlayZOffset; // 0x2780
	float m_fHUDOverlayMorphMountedZOffset; // 0x2784
	int32_t m_lastDamageSourceSlot; // 0x2788
	float m_fLastMoveTime; // 0x278c
	ObjectProperty s_AttachedProjBlocker; // 0x2790
	float m_fScaleMesh; // 0x2798
	float m_fScaleMeshChangePerSecond; // 0x279c
	float m_fScaleCollisionHeight; // 0x27a0
	float m_fScaleCollisionHeightChangePerSecond; // 0x27a4
	float m_fScaleCollisionRadius; // 0x27a8
	float m_fScaleCollisionRadiusChangePerSecond; // 0x27ac
	int32_t m_IntroPostureID; // 0x27b0
	float r_fIntroTime; // 0x27b4
	float r_fIntroOffset; // 0x27b8
	float s_fIntroStartTime; // 0x27bc
	float m_fIntroProgress; // 0x27c0
	FName r_ReplicatedState; // 0x27c4
	TArray<ObjectProperty> m_RespawnNodes; // 0x27cc
	TArray<ObjectProperty> m_BuffCampIntroNodes; // 0x27dc
	FName m_IntialIntroState; // 0x27ec
	FName m_nmIntroWhiteOutParamName; // 0x27f4
	float m_fIntroWhiteOutScale; // 0x27fc
	float m_fIntroWhiteOutUpTime; // 0x2800
	float m_fIntroWhiteOutDownTime; // 0x2804
	int32_t r_nInsideTaskForceBase; // 0x2808
	ObjectProperty m_HealFX3P; // 0x280c
	ObjectProperty m_ShieldFX3P; // 0x2814
	float c_fNextTakeHitDisplayGroupTimestamp; // 0x281c
	float c_fNextTakeHitDisplayDelay; // 0x2820
	ObjectProperty r_PolymorphInstigator; // 0x2824
	int32_t m_PrePolymorphHealth; // 0x282c
	int32_t m_PolymorphMaxHealth; // 0x2830
	TArray<FRigidBodyImpactInfo> m_RigidBodyImpacts; // 0x2834
	int32_t m_nWaterVolumeCount; // 0x2844
	float m_fMinShallowWaterDepth; // 0x2848
	FWaterFxData m_ShallowWaterFx; // 0x284c
	FWaterFxData m_DeepWaterFx; // 0x2870
	float c_fServerTimeStamp; // 0x2894
	float m_fZoomDistOverride; // 0x2898
	float m_fZoomDurationOverride; // 0x289c
	FDouble c_fLastUnoccludedWeaponSoundTimestamp; // 0x28a0
	float c_fThreatBehind; // 0x28a8
	float c_fThreatInEffectiveRange; // 0x28ac
	float c_fThreatDistanceSquared; // 0x28b0
	float c_fThreatDistance; // 0x28b4
	float c_fThreatFocused; // 0x28b8
	float c_fThreatFocusTarget; // 0x28bc
	float c_fThreatSeenBy; // 0x28c0
	float c_fThreatDamaged; // 0x28c4
	float c_fThreatOcclusion; // 0x28c8
	float c_fThreatBinnedOcclusion; // 0x28cc
	float c_fThreatShotAt; // 0x28d0
	float c_fThreatUlt; // 0x28d4
	float c_fThreatLevelValue; // 0x28d8
	float c_fThreatDecayResidual; // 0x28dc
	float c_fLastThreatLevelValue; // 0x28e0
	float c_fDBGThreatDistanceFeet; // 0x28e4
	ObjectProperty r_GameplayCurves; // 0x28e8
	ObjectProperty m_BaseCurves; // 0x28f0
	ObjectProperty m_DownedCurves; // 0x28f8
	int32_t m_nSuccessfulHitSpecialFXId; // 0x2900
	TArray<FName> LLegBoneNames; // 0x2904
	TArray<FName> RLegBoneNames; // 0x2914
	TArray<FName> LArmBoneNames; // 0x2924
	TArray<FName> RArmBoneNames; // 0x2934
	TArray<FName> HeadBoneNames; // 0x2944
	FName m_HeadShotComponentBoneName; // 0x2954
	ComponentProperty m_HeadShotComponent; // 0x295c
	float m_fMountScaleOverride; // 0x2964
	ObjectProperty m_LandCameraShake; // 0x2968
	ObjectProperty m_JumpCameraShake; // 0x2970
	ObjectProperty m_DoubleJumpCameraShake; // 0x2978
	ObjectProperty m_DisenchantCameraShake; // 0x2980
	ObjectProperty m_DisenchantFx; // 0x2988
	float m_f1PTransitionFireDelay; // 0x2990
	float m_f1PTransitionFireDelayRemaining; // 0x2994
	float m_fEnergyChargeMultiplier; // 0x2998
	float c_fRecreateTrackedProjectilesTimer; // 0x299c
	float m_fRecoilSmoothRate; // 0x29a0
	FRotator m_rCurrentRecoil; // 0x29a4
	FRotator m_rSmoothedRecoil; // 0x29b0
	FRotator m_rLastAppliedRecoil; // 0x29bc
	float m_fSettleDelay; // 0x29c8
	float m_fSettleSpeed; // 0x29cc
	float m_fRecoilSettleDeltaTimeOverflow; // 0x29d0
	float m_fRecoilSmoothDeltaTimeOverflow; // 0x29d4
	FRotator m_rVisualRecoil; // 0x29d8
	float m_fVisualRecoilApplicationTime; // 0x29e4
	float m_fVisualRecoilDuration; // 0x29e8
	ObjectProperty m_VisualRecoilApplied; // 0x29ec
	int32_t r_nVoicePackId; // 0x29f4
	TArray<FVector> m_vPendingWallKnockbackHitNormals; // 0x29f8
	TArray<int32_t> m_nPendingPlayerKnockbackHitPawnIds; // 0x2a08
	float m_fTimeOnNonBaseableSurface; // 0x2a18
	float m_fNonBaseableSurfaceAirControlDuration; // 0x2a1c
	float m_fNonBaseableSurfaceLerpTime; // 0x2a20
	float m_fNonBaseableSurfaceRampUpMult; // 0x2a24
	float m_fNonBaseableSurfaceMaxMoveAmount; // 0x2a28
	float m_fNonBaseableSurfaceGraceTime; // 0x2a2c
	float m_fNonBaseableSurfaceExitMaxVelocity; // 0x2a30
	float m_fNonBaseableSurfaceControlPercent; // 0x2a34
	TArray<ObjectProperty> m_OriginalMaterialsBody; // 0x2a38
	TArray<ObjectProperty> m_OriginalMaterialsHead; // 0x2a48
	TArray<ObjectProperty> m_OriginalMaterialsWeapon; // 0x2a58
	TArray<ObjectProperty> m_ReplacementMICsBody; // 0x2a68
	TArray<ObjectProperty> m_ReplacementMICsHead; // 0x2a78
	TArray<ObjectProperty> m_ReplacementMICsWeapon; // 0x2a88
	float m_fEyeHeightSmoothFactor; // 0x2a98
	ObjectProperty m_DeathFFWaveform; // 0x2a9c
	ObjectProperty m_BuffDevice; // 0x2aa4
	ObjectProperty m_PrincessPresenceDebuffDevice; // 0x2aac
	ObjectProperty m_PrincessPresenceBuffDevice; // 0x2ab4
	float m_fFlourishTimeout; // 0x2abc
	int32_t c_nCurrentVGSPlaying; // 0x2ac0
	TArray<DelegateProperty> m_SingleUseOn3pTransitionDelegates; // 0x2ac4
	FRotator m_PreMountMeshRotation; // 0x2ad4
	ObjectProperty m_MountCastFX3P; // 0x2ae0
	ObjectProperty m_MountSummonFX3P; // 0x2ae8
	ObjectProperty m_ReviveCastFX3P; // 0x2af0
	ObjectProperty m_OnRevivingFX3P; // 0x2af8
	float m_fInterpElapsed; // 0x2b00
	float m_fInterpDuration; // 0x2b04
	int32_t m_nInterpStart; // 0x2b08
	int32_t m_nInterpTarget; // 0x2b0c
	FVector c_vForced3pAdditionalOffset; // 0x2b10
	FVector c_v3pOffsetTest; // 0x2b1c
	FVector c_v3pOffsetTestMounted; // 0x2b28
	FVector c_vMountCameraOffset[0x2]; // 0x2b34
	FVector m_vCameraOverrideLocation; // 0x2b4c
	TArray<FVector> m_VaultPath; // 0x2b58
	FName m_nmWindowVaultAnimName; // 0x2b68
	float m_fFaceWallVaultingThreshold; // 0x2b70
	float m_fVaultZ; // 0x2b74
	float m_fLedgeGrabDist; // 0x2b78
	float m_fLedgeGrabbableWallZ; // 0x2b7c
	float m_fLedgeGrabbableZ; // 0x2b80
	float m_fMaxLedgeCheckHeight; // 0x2b84
	float m_fLedgeMantleDist; // 0x2b88
	float m_fLateralLedgeSpeedMult; // 0x2b8c
	FVector m_vLedgeGrabWallDir; // 0x2b90
	float m_fLedgeDist; // 0x2b9c
	float m_fWindowVaultNoInputTime; // 0x2ba0
	float m_fWindowVaultDeviceLockoutTime; // 0x2ba4
	float m_fWindowVaultCooldownTime; // 0x2ba8
	float m_fADSGroundspeedPct; // 0x2bac
	float m_fTotalADSZoomTime; // 0x2bb0
	float m_fRemainingADSZoomInTime; // 0x2bb4
	float m_fRemainingADSZoomOutTime; // 0x2bb8
	FString m_sBotCodeNameOverride; // 0x2bbc
	float m_fHazardDistance; // 0x2bcc
	float m_fHazardRating; // 0x2bd0
	TArray<ObjectProperty> m_nPickupDeployableList; // 0x2bd4
	float m_PickupMinDot; // 0x2be4
	float m_fPickupMaxDistance; // 0x2be8
	float m_fPickupMaxSquareRadius; // 0x2bec
	float c_fSimModMoveSpeedToSave; // 0x2bf0
	float c_fSavedSimModMoveSpeed; // 0x2bf4
	float r_fRevivingTimer; // 0x2bf8
	float m_fLastRoyaleTakeHitTime; // 0x2bfc
	int32_t m_nReviveBoostedCount; // 0x2c00
	float m_fSteepTerrainWalkableFloorZ; // 0x2c04
	float m_fSteepTerrainSlowMultiplierSmall; // 0x2c08
	float m_fSteepTerrainSlowMultiplierMid; // 0x2c0c
	float m_fSteepTerrainSlowMultiplierLarge; // 0x2c10
	float m_fSteepTerrainSlopeZMidBreakpoint; // 0x2c14
	ObjectProperty m_CameraInvisFX3P; // 0x2c18
	TArray<ObjectProperty> m_TouchingIndoorVolumes; // 0x2c20
	float m_fDoubleJumpThreshold; // 0x2c30
	int32_t m_nDoubleJumpRemaining; // 0x2c34
	float m_fUnderheadADSDistanceClampAngle; // 0x2c38
	float m_fUnderheadADSDistanceClampPushIn; // 0x2c3c
	float m_fUnderheadADSDistanceClampOvershoot; // 0x2c40
	float m_fOverheadADSDistanceClampAngle; // 0x2c44
	float m_fOverheadADSDistanceClampPushIn; // 0x2c48
	float m_fOverheadADSDistanceClampOvershoot; // 0x2c4c
	FVector c_vForced3pAdditionalOffsetADS; // 0x2c50
	float m_fSkydiveAirControl; // 0x2c5c
	float m_fSkydiveGravityMultiplier; // 0x2c60
	float m_fSkydiveFromCatapultAirControl; // 0x2c64
	float m_fSkydiveFromCatapultGravityMultiplier; // 0x2c68
	float m_fCatapultAirControl; // 0x2c6c
	float m_fSkydiveMaxStrafeSpeed; // 0x2c70
	float m_SkydiveAccelRate; // 0x2c74
	float m_SkydiveRootTime; // 0x2c78
	float m_SkydieChickenLandTime; // 0x2c7c
	float m_SkydiveChickenRootTime; // 0x2c80
	float m_SkydiveRootRemainingTime; // 0x2c84
	float m_SkydiveBrakePercent; // 0x2c88
	float m_fSkydivePrelandDistance; // 0x2c8c
	float m_fSkydivePSParamTime; // 0x2c90
	float m_fFallRootMinSpeed; // 0x2c94
	float m_fFallRootTime; // 0x2c98
	int32_t m_MountLogDebugTimes; // 0x2c9c
	ObjectProperty m_pPendingWeaponAnimSet; // 0x2ca0
	float m_fAllowableSprintAngle; // 0x2ca8
	int32_t m_nSprintPostureID; // 0x2cac
	float m_f3pSmoothSpeed1; // 0x2cb0
	float m_f3pSmoothSpeed2; // 0x2cb4
	ObjectProperty m_ArmorSkin; // 0x2cb8
	TArray<int32_t> m_nDownedTaskForceList; // 0x2cc0
	ObjectProperty m_pPrevEquipForm; // 0x2cd0
	TArray<FDeviceTimer> m_DeviceTimers; // 0x2cd8
	TArray<ObjectProperty> m_AnimNodeBlendCrouchNodes; // 0x2ce8
	TArray<ObjectProperty> m_LandRecoilSkelControls; // 0x2cf8
	FTalentInfo r_Talents[0xa]; // 0x2d08
	float m_fNonVerbalEmoteCooldown; // 0x2e20
	float m_fNonVerbalEmoteTime; // 0x2e24
	float m_fPolymorphGroundSpeed; // 0x2e28
	float m_fMountCastTime; // 0x2e2c
	float m_fSprintSpeed; // 0x2e30
	float m_fHitIndicatorVerticalDistance; // 0x2e34
	float m_fHitIndicatorHorizontalDistance; // 0x2e38
	ObjectProperty r_Catapult; // 0x2e3c
	FRotator m_rLockedSkelControlRotation; // 0x2e44
	ComponentProperty m_pShieldMesh; // 0x2e50
	ObjectProperty m_CurrentWeatherVolume; // 0x2e58
	ObjectProperty m_SkelControl_BigHead; // 0x2e60
	DelegateProperty __On3pTransitionEvent__Delegate; // 0x2e68
};

struct UUIComponent_BattlePassRewardsInfoPanel {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcTimeLeft; // 0x128
	ObjectProperty m_pProgress; // 0x130
	ObjectProperty m_mcProgressLevel; // 0x138
	ObjectProperty m_mcProgressXP; // 0x140
};

struct ARB_CylindricalForceActor {
	ComponentProperty RenderComponent; // 0x280
	float RadialStrength; // 0x288
	float RotationalStrength; // 0x28c
	float LiftStrength; // 0x290
	float LiftFalloffHeight; // 0x294
	float EscapeVelocity; // 0x298
	float ForceRadius; // 0x29c
	float ForceTopRadius; // 0x2a0
	float ForceHeight; // 0x2a4
	float HeightOffset; // 0x2a8
	char bForceActive : 1; // 0x2ac
	char bForceApplyToCloth : 1; // 0x2ac
	char bForceApplyToFluid : 1; // 0x2ac
	char bForceApplyToRigidBodies : 1; // 0x2ac
	char bForceApplyToProjectiles : 1; // 0x2ac
	FRBCollisionChannelContainer CollideWithChannels; // 0x2b0
};

struct UMcpUserManager {
	TArray<FMcpUserStatus> UserStatuses; // 0xb8
	FString RegisterUserMcpUrl; // 0xc8
	FString RegisterUserEmailUrl; // 0xd8
	FString RegisterUserFacebookUrl; // 0xe8
	FString QueryUserUrl; // 0xf8
	FString QueryUsersUrl; // 0x108
	FString DeleteUserUrl; // 0x118
	TArray<FRegisterUserRequest> RegisterUserRequests; // 0x128
	TArray<ObjectProperty> QueryUsersRequests; // 0x138
	TArray<ObjectProperty> DeleteUserRequests; // 0x148
};

struct USeqAct_Interp {
	TMap<None, None> SavedActorTransforms; // 0x120
	TMap<None, None> SavedActorVisibilities; // 0x168
	float PlayRate; // 0x1b0
	float Position; // 0x1b4
	float ForceStartPosition; // 0x1b8
	char bIsPlaying : 1; // 0x1bc
	char bPaused : 1; // 0x1bc
	char bIsBeingEdited : 1; // 0x1bc
	char bLooping : 1; // 0x1bc
	char bRewindOnPlay : 1; // 0x1bc
	char bNoResetOnRewind : 1; // 0x1bc
	char bRewindIfAlreadyPlaying : 1; // 0x1bc
	char bReversePlayback : 1; // 0x1bc
	char bInterpForPathBuilding : 0; // 0x1bc
	char bForceStartPos : 0; // 0x1bc
	char bDisableRadioFilter : 0; // 0x1bc
	char bClientSideOnly : 0; // 0x1bc
	char bSkipUpdateIfNotVisible : 0; // 0x1bc
	char bIsSkippable : 0; // 0x1bc
	char bShouldShowGore : 0; // 0x1bc
	TArray<ObjectProperty> LinkedCover; // 0x1c0
	ObjectProperty InterpData; // 0x1d0
	TArray<ObjectProperty> GroupInst; // 0x1d8
	AMatineeActor* ReplicatedActorClass; // 0x1e8
	ObjectProperty ReplicatedActor; // 0x1f0
	int32_t PreferredSplitScreenNum; // 0x1f8
	TArray<FCameraCutInfo> CameraCuts; // 0x1fc
	float TerminationTime; // 0x20c
	FRenderingPerformanceOverrides RenderingOverrides; // 0x210
	char ConstantCameraAnim; // 0x214
	float ConstantCameraAnimRate; // 0x218
};

struct AFrameworkGame {
	TArray<FRequiredMobileInputConfig> RequiredMobileInputConfigs; // 0x4cc
};

struct UTgSeqEvent_BotDied {
	int32_t m_nBotsKilled; // 0x128
	int32_t m_nBotsKilledCounter; // 0x12c
};

struct AGameCrowdPopulationManager {
	FPointer VfTable_IInterface_NavigationHandle; // 0x280
	FCrowdSpawnInfoItem CloudSpawnInfo; // 0x288
	TArray<FCrowdSpawnInfoItem> ScriptedSpawnInfo; // 0x318
	ObjectProperty ActiveCrowdInfoVolume; // 0x328
	TArray<ObjectProperty> GlobalPotentialSpawnPoints; // 0x330
	float SplitScreenNumReduction; // 0x340
	float PlayerPositionPredictionTime; // 0x344
	float HeadVisibilityOffset; // 0x348
	UNavigationHandle* NavigationHandleClass; // 0x34c
	ObjectProperty NavigationHandle; // 0x354
	ObjectProperty QueryingAgent; // 0x35c
	TArray<FCrowdSpawnerPlayerInfo> PlayerInfo; // 0x364
	float LastPlayerInfoUpdateTime; // 0x374
	char bDebugSpawns : 1; // 0x378
	char bPauseCrowd : 1; // 0x378
};

struct UInterpTrackInstEvent {
	float LastUpdatePosition; // 0x60
};

struct UPartyBeaconHost {
	TArray<FClientBeaconConnection> Clients; // 0x98
	int32_t NumTeams; // 0xa8
	int32_t NumPlayersPerTeam; // 0xac
	int32_t NumReservations; // 0xb0
	int32_t NumConsumedReservations; // 0xb4
	TArray<FPartyReservation> Reservations; // 0xb8
	FName OnlineSessionName; // 0xc8
	int32_t ConnectionBacklog; // 0xd0
	int32_t ForceTeamNum; // 0xd4
	int32_t ReservedHostTeamNum; // 0xd8
	char bBestFitTeamAssignment : 1; // 0xdc
	EPartyBeaconHostState BeaconState; // 0xe0
	DelegateProperty __OnReservationChange__Delegate; // 0xe4
	DelegateProperty __OnReservationsFull__Delegate; // 0xf4
	DelegateProperty __OnClientCancellationReceived__Delegate; // 0x104
};

struct UUIComponent_HoldPrompt {
	ObjectProperty m_pGamepadKey; // 0x120
	ObjectProperty m_mcRadialMask; // 0x128
	ObjectProperty m_mcTF; // 0x130
	float m_fHoldTimer; // 0x138
	float m_fHoldDuration; // 0x13c
	float m_fFadeOutDelay; // 0x140
	float m_fFadeOutDuration; // 0x144
	float m_fFadeOutTimer; // 0x148
	char m_bHolding : 1; // 0x14c
	char m_bPrimed : 1; // 0x14c
	ObjectProperty m_PressAction; // 0x150
	ObjectProperty m_ReleaseAction; // 0x158
};

struct UClientBeaconAddressResolver {
	int32_t BeaconPort; // 0x60
	FName BeaconName; // 0x64
};

struct UTgInventoryObject_Listen_MultiplyDamageDrawn {
	char m_bPassedThreshold : 1; // 0xc8
};

struct ARB_ConstraintActor {
	ObjectProperty ConstraintActor1; // 0x280
	ObjectProperty ConstraintActor2; // 0x288
	ObjectProperty ConstraintSetup; // 0x290
	ObjectProperty ConstraintInstance; // 0x298
	char bDisableCollision : 1; // 0x2a0
	char bUpdateActor1RefFrame : 1; // 0x2a0
	char bUpdateActor2RefFrame : 1; // 0x2a0
	ObjectProperty PulleyPivotActor1; // 0x2a4
	ObjectProperty PulleyPivotActor2; // 0x2ac
};

struct ATgInternalChestManagerVolume {
	int32_t m_nMinChests; // 0x2bc
};

struct ATgMidnightFogVolumeDensityInfo {
	char m_bFogOn : 1; // 0x294
	char m_bFogUpdateNeeded : 1; // 0x294
	char m_bIsFadingOut : 1; // 0x294
	float m_fCurrentStartDistance; // 0x298
	float m_fFadeOutDuration; // 0x29c
	float m_fFadeOutTimer; // 0x2a0
	float m_fTargetMaxDensity; // 0x2a4
	float m_fDestroyTimer; // 0x2a8
	ComponentProperty SphericalDensityComponent; // 0x2ac
};

struct UUIComponent_ItemTooltip {
	ObjectProperty m_mcTitle; // 0x120
	ObjectProperty m_mcSubtitle; // 0x128
	ObjectProperty m_mcDescription; // 0x130
	int32_t m_nLastSetItemID; // 0x138
};

struct UUIHudMap_Spectator {
	TArray<FUITASKFORCE_DATA> m_TaskforceData; // 0x7f8
	ObjectProperty m_mcPlayers[0x64]; // 0x808
	ObjectProperty m_mcTaskforceRefs[0x64]; // 0xb28
	int32_t m_nTaskforceDisplayCount; // 0xe48
	ObjectProperty m_mcSpectator; // 0xe4c
	ObjectProperty m_mcColumns[0x4]; // 0xe54
	int32_t m_nColumnCnt; // 0xe74
	int32_t m_nMaxTFPerColumn; // 0xe78
};

struct UGFxAction_OpenMovie {
	ObjectProperty Movie; // 0x108
	UGFxMoviePlayer* MoviePlayerClass; // 0x110
	ObjectProperty MoviePlayer; // 0x118
	char bTakeFocus : 1; // 0x120
	char bCaptureInput : 1; // 0x120
	char bStartPaused : 1; // 0x120
	char bEnableGammaCorrection : 1; // 0x120
	char bDisplayWithHudOff : 1; // 0x120
	GFxRenderTextureMode RenderTextureMode; // 0x124
	ObjectProperty RenderTexture; // 0x128
	TArray<FName> CaptureKeys; // 0x130
	TArray<FName> FocusIgnoreKeys; // 0x140
};

struct ASkeletalMeshActorBasedOnExtremeContent {
	TArray<FSkelMaterialSetterDatum> ExtremeContent; // 0x2e8
	TArray<FSkelMaterialSetterDatum> NonExtremeContent; // 0x2f8
};

struct UTextureRenderTarget2D {
	int32_t SizeX; // 0x108
	int32_t SizeY; // 0x10c
	EPixelFormat Format; // 0x110
	TextureAddress AddressX; // 0x111
	TextureAddress AddressY; // 0x112
	FLinearColor ClearColor; // 0x114
	char bForceLinearGamma : 1; // 0x124
};

struct USkelControlLookAt {
	FVector TargetLocation; // 0xd0
	EBoneControlSpace TargetLocationSpace; // 0xdc
	EAxis LookAtAxis; // 0xdd
	EAxis UpAxis; // 0xde
	EBoneControlSpace AllowRotationSpace; // 0xdf
	FName TargetSpaceBoneName; // 0xe0
	char bInvertLookAtAxis : 1; // 0xe8
	char bDefineUpAxis : 1; // 0xe8
	char bInvertUpAxis : 1; // 0xe8
	char bEnableLimit : 1; // 0xe8
	char bLimitBasedOnRefPose : 1; // 0xe8
	char bDisableBeyondLimit : 1; // 0xe8
	char bNotifyBeyondLimit : 1; // 0xe8
	char bShowLimit : 1; // 0xe8
	char bAllowRotationX : 0; // 0xe8
	char bAllowRotationY : 0; // 0xe8
	char bAllowRotationZ : 0; // 0xe8
	float TargetLocationInterpSpeed; // 0xec
	FVector DesiredTargetLocation; // 0xf0
	FVector ActorSpaceLookAtTarget; // 0xfc
	float MaxAngle; // 0x108
	float OuterMaxAngle; // 0x10c
	float DeadZoneAngle; // 0x110
	FVector2D RotationAngleRangeX; // 0x114
	FVector2D RotationAngleRangeY; // 0x11c
	FVector2D RotationAngleRangeZ; // 0x124
	FName AllowRotationOtherBoneName; // 0x12c
	float LookAtAlpha; // 0x134
	float LookAtAlphaTarget; // 0x138
	float LookAtAlphaBlendTimeToGo; // 0x13c
	FVector LimitLookDir; // 0x140
	FVector BaseLookDir; // 0x14c
	FVector BaseBonePos; // 0x158
	float LastCalcTime; // 0x164
	int32_t ControlBoneIndex; // 0x168
};

struct UTgInventoryObject_Listen_FullBurstHit {
	int32_t m_nCurrentFireLoopInstanceId; // 0xd0
	int32_t m_nCurrentHits; // 0xd4
	int32_t m_nTargetHits; // 0xd8
	char m_bBonusActive : 1; // 0xdc
	ObjectProperty m_pLastTargetHit; // 0xe0
};

struct UTgAnimBlendByPaladinsCharacter_BarrierTank {
	TArray<FName> m_AmmoSkelControlNames; // 0x544
	TArray<ObjectProperty> m_AmmoSkelControls; // 0x554
	ObjectProperty m_CachedBarrierTankPawn; // 0x564
};

struct UTgAIBehaviorCondition_IsWithinCombatDistance {
	char bSubtractTargetPawnRadius : 1; // 0x98
	float DistanceThresholdPercent; // 0x9c
	TG_EQUIP_POINT DeviceSlot; // 0xa0
};

struct AEnvironmentVolume {
	FPointer VfTable_IInterface_NavMeshPathObstacle; // 0x2bc
	FPointer VfTable_IInterface_NavMeshPathObject; // 0x2c4
	char bSplitNavMesh : 1; // 0x2cc
};

struct USplineMeshComponent {
	FSplineMeshParams SplineParams; // 0x310
	FVector SplineXDir; // 0x368
	char bSmoothInterpRollScale : 1; // 0x374
};

struct UForceFieldShapeBox {
	ComponentProperty Shape; // 0x60
};

struct UPrefabSequence {
	ObjectProperty OwnerPrefab; // 0x174
};

struct USeqVar_Int {
	int32_t IntValue; // 0xa0
};

struct ATgGame_Mission {
	char m_bSpawnInTaskForceArea : 1; // 0x628
	char s_bPreGuardianPhasePulsed : 1; // 0x628
	char s_bGuardianPhasePulsed : 1; // 0x628
	char s_bWasSurrendered : 1; // 0x628
	char m_bSurrenderAvailable : 1; // 0x628
	char m_bAllowAutoUpgrades : 1; // 0x628
	char m_bUsePlayerCharacterIntros : 1; // 0x628
	GameTimerState m_eTimerState; // 0x62c
	GameTimerState m_eTimerStatePaused; // 0x62d
	float m_fMissionTime; // 0x630
	float m_fSecondaryMissionTime; // 0x634
	float m_fWaitingForPlayersTime; // 0x638
	float m_fSetupTime; // 0x63c
	float m_fPausedAtTime; // 0x640
	float m_fGameMissionTime; // 0x644
	float s_MissionTimeAccumulator; // 0x648
	TArray<ObjectProperty> s_ReadyPlayers; // 0x64c
	int32_t s_nReadyMercs; // 0x65c
	float m_fTickCreditsFreq; // 0x660
	float m_fCreditsToGivePerTick; // 0x664
	int32_t m_nStartingCurrency; // 0x668
	int32_t m_nStartingLevel; // 0x66c
	int32_t m_nWinBonusXp; // 0x670
	int32_t m_nWinPlayerXp; // 0x674
	int32_t m_nLosePlayerXp; // 0x678
	float m_fGodXpCoefficient; // 0x67c
	float m_fGodXpCoefficientLoss; // 0x680
	float m_fGodXpWinBonus; // 0x684
	float m_fFreeVIPWinPoints; // 0x688
	float m_fFreeVIPLossPoints; // 0x68c
	float m_fFreeVIPPerMinute; // 0x690
	float m_fPaidVIPWinPoints; // 0x694
	float m_fPaidVIPLossPoints; // 0x698
	float m_fPaidVIPPerMinute; // 0x69c
	float m_fBaseTokens; // 0x6a0
	int32_t m_nKillTokens; // 0x6a4
	FSurrenderData s_SurrenderData[0x2]; // 0x6a8
	float m_fSurrenderTime; // 0x6f0
	int32_t m_XPRadius; // 0x6f4
	float m_MinionKillerBonus; // 0x6f8
	float m_BasePlayerGoldReward; // 0x6fc
	float m_fFirstBloodGoldReward; // 0x700
	float m_fBasePlayerAssistGoldRewardMultipler; // 0x704
	float m_fBasePlayerAssistXpRewardMultipler; // 0x708
	float m_fBaseNPCAssistGoldRewardMultipler; // 0x70c
	float m_fBaseNPCAssistXpRewardMultipler; // 0x710
	int32_t m_nPIESpawnTable; // 0x714
	int32_t m_nTargetPlayerCountForMercs; // 0x718
	TArray<FTgAIBotPlayersToSpawn> m_MercsToSpawn; // 0x71c
	TArray<ObjectProperty> m_MinionGoals; // 0x72c
	int32_t m_nDebugExtraCharXp; // 0x73c
	int32_t m_nDebugExtraBPXp; // 0x740
};

struct ATgGame_RoyaleStorm {
	int32_t m_nTickets; // 0x9c0
	float m_fCanyonOriginSpawnOffset; // 0x9c4
	float m_fCanyonHalfWidth; // 0x9c8
	float m_fZepplinSpawnRadius; // 0x9cc
	ObjectProperty m_pConvergeActor2; // 0x9d0
	ObjectProperty m_pCanyonEdge1; // 0x9d8
	ObjectProperty m_pCanyonEdge2; // 0x9e0
};

struct UMaterialExpressionStaticBoolParameter {
	char DefaultValue : 1; // 0xd0
	char ExtendedCaptionDisplay : 1; // 0xd0
	FPointer InstanceOverride; // 0xd4
};

struct ULightFunction {
	ObjectProperty SourceMaterial; // 0x60
	FVector Scale; // 0x68
	float DisabledBrightness; // 0x74
};

struct UTgAnimBlendByEmote {
	FName nmEmotePrefix; // 0x168
	FName mnEmoteMovingSuffix; // 0x170
	FName nmEmoteFullMovingSuffix; // 0x178
	char bForceTreatAsMovingEmoteNode : 1; // 0x180
	TArray<ObjectProperty> EmoteSequenceChildren; // 0x184
	TArray<ObjectProperty> PerBoneChildren; // 0x194
	TArray<ObjectProperty> FullMovingBlendLists; // 0x1a4
};

struct UTgAIBehaviorCondition_AmmoCostPerShot {
	TG_EQUIP_POINT DeviceSlot; // 0x98
	int32_t AmmoThreshold; // 0x9c
};

struct AVolumePathNode {
	float StartingRadius; // 0x378
	float StartingHeight; // 0x37c
};

struct UPartyBeaconClient {
	FOnlineGameSearchResult HostPendingRequest; // 0x98
	FPartyReservation PendingRequest; // 0xa8
	EPartyBeaconClientState ClientBeaconState; // 0xc4
	EPartyBeaconClientRequest ClientBeaconRequestType; // 0xc5
	float ReservationRequestTimeout; // 0xc8
	float ReservationRequestElapsedTime; // 0xcc
	FString ResolverClassName; // 0xd0
	UClientBeaconAddressResolver* ResolverClass; // 0xe0
	ObjectProperty Resolver; // 0xe8
	DelegateProperty __OnReservationRequestComplete__Delegate; // 0xf0
	DelegateProperty __OnReservationCountUpdated__Delegate; // 0x100
	DelegateProperty __OnTravelRequestReceived__Delegate; // 0x110
	DelegateProperty __OnHostIsReady__Delegate; // 0x120
	DelegateProperty __OnHostHasCancelled__Delegate; // 0x130
};

struct UTgCameraModule_SpectatorLockedView {
	FRotator WorldViewRotation; // 0x9c
	char bAutoRotate : 1; // 0xa8
	float FOV; // 0xac
	float ZoomIncrement; // 0xb0
	int32_t CurrentWorldViewTargetIndex; // 0xb4
};

struct UTgThreatModel {
	TArray<ObjectProperty> m_PawnsWithThreatLevels; // 0x60
	char m_bThreatSystemEnabled : 1; // 0x70
	char m_bOcclusionSystemEnabled : 1; // 0x70
	char m_bDebugThreatSystem : 1; // 0x70
	float m_fThreatCoefficientProximity; // 0x74
	float m_fThreatCoefficientOcclusion; // 0x78
	float m_fThreatCoefficientBinnedOcclusion; // 0x7c
	float m_fThreatCoefficientUlt; // 0x80
	float m_fThreatCoefficientShotAt; // 0x84
	float m_fThreatCoefficientSeenBy; // 0x88
	float m_fThreatCoefficientDamaged; // 0x8c
	float m_fThreatCoefficientFocused; // 0x90
	float m_fThreatCoefficientFocusTarget; // 0x94
	float m_fThreatDecayCoefficientShotAt; // 0x98
	float m_fThreatDecayCoefficientSeenBy; // 0x9c
	float m_fThreatDecayCoefficientUlt; // 0xa0
	FString m_DebugThreatSystemChannel; // 0xa4
};

struct UUIPlay {
	int32_t m_nPreferredRegion; // 0x244
	int32_t m_nQueues[0x5]; // 0x248
	int32_t m_nRank[0x5]; // 0x25c
	int32_t m_nWins[0x5]; // 0x270
	int32_t m_nKills[0x5]; // 0x284
	char m_bPopup : 1; // 0x298
	char m_bRegion : 1; // 0x298
	char m_bExclusiveTeam : 1; // 0x298
	char m_bFinishedTutorial : 1; // 0x298
	char m_bRatings : 1; // 0x298
	char m_bAnimatePanels : 1; // 0x298
	char m_bSoloLTEActive : 1; // 0x298
	char m_bDuoLTEActive : 1; // 0x298
	char m_bSquadLTEActive : 0; // 0x298
	char m_bInitLTEInfo : 0; // 0x298
	TArray<int32_t> m_nRegions; // 0x29c
	TArray<FString> m_sRegionNames; // 0x2ac
	FString m_sLTETitles[0x3]; // 0x2bc
	ObjectProperty m_mcBack; // 0x2ec
	ObjectProperty m_mcIcon; // 0x2f4
	ObjectProperty m_mcHeader; // 0x2fc
	ObjectProperty m_mcCrossplay; // 0x304
	ObjectProperty m_mcPanel[0x5]; // 0x30c
	ObjectProperty m_mcPanelName[0x5]; // 0x334
	ObjectProperty m_mcPanelDesc[0x5]; // 0x35c
	ObjectProperty m_mcPanelIcon[0x5]; // 0x384
	ObjectProperty m_mcPanelTime[0x5]; // 0x3ac
	ObjectProperty m_mcPanelTimeMask[0x5]; // 0x3d4
	ObjectProperty m_mcPanelTimeText[0x5]; // 0x3fc
	ObjectProperty m_mcPanelLTEBanner[0x5]; // 0x424
	ObjectProperty m_mcPanelRankDetails[0x5]; // 0x44c
	ObjectProperty m_mcPanelRankDetailsIcon[0x5]; // 0x474
	ObjectProperty m_mcPanelRankDetailsName[0x5]; // 0x49c
	ObjectProperty m_mcPanelRankDetailsWins[0x5]; // 0x4c4
	ObjectProperty m_mcPanelRankDetailsWinsTF[0x5]; // 0x4ec
	ObjectProperty m_mcPanelRankDetailsKills[0x5]; // 0x514
	ObjectProperty m_mcPanelRankDetailsKillsTF[0x5]; // 0x53c
	ObjectProperty m_pPlayPanelsGroup; // 0x564
	ObjectProperty m_mcOption[0x3]; // 0x56c
	ObjectProperty m_mcOptionName[0x3]; // 0x584
	ObjectProperty m_mcOptionDesc[0x3]; // 0x59c
	ObjectProperty m_pPlayOptionsGroup; // 0x5b4
	ObjectProperty m_mcPopup; // 0x5bc
	ObjectProperty m_mcPopupBack; // 0x5c4
	ObjectProperty m_mcPopupName; // 0x5cc
	ObjectProperty m_mcPopupDesc; // 0x5d4
	ObjectProperty m_mcPopupFrame; // 0x5dc
	ObjectProperty m_mcPopupBlocker; // 0x5e4
	ObjectProperty m_pPlayPopupGroup; // 0x5ec
	ObjectProperty m_mcRegion; // 0x5f4
	ObjectProperty m_mcRegionDesc; // 0x5fc
	ObjectProperty m_mcRegionName; // 0x604
	ObjectProperty m_mcRegionBlocker; // 0x60c
	ObjectProperty m_mcRegionCrossplay; // 0x614
	ObjectProperty m_mcRegionButton[0xc]; // 0x61c
	ObjectProperty m_mcRegionButtonIcon[0xc]; // 0x67c
	ObjectProperty m_pRegionButtonGroup; // 0x6dc
	ObjectProperty m_pInputHandleTeamFillX; // 0x6e4
	ObjectProperty m_pInputHandleRegionY; // 0x6ec
};

struct UMorphNodeBase {
	FName NodeName; // 0x68
	char bDrawSlider : 1; // 0x70
};

struct ULensFlare {
	FLensFlareElement SourceElement; // 0x60
	ObjectProperty SourceMesh; // 0x1f8
	ESceneDepthPriorityGroup SourceDPG; // 0x200
	ESceneDepthPriorityGroup ReflectionsDPG; // 0x201
	TArray<FLensFlareElement> Reflections; // 0x204
	float OuterCone; // 0x214
	float InnerCone; // 0x218
	float ConeFudgeFactor; // 0x21c
	float Radius; // 0x220
	char bUseTrueConeCalculation : 1; // 0x224
	char bUseFixedRelativeBoundingBox : 1; // 0x224
	char bRenderDebugLines : 1; // 0x224
	char ThumbnailImageOutOfDate : 1; // 0x224
	float MinStrength; // 0x228
	FRawDistributionFloat ScreenPercentageMap; // 0x22c
	FBox FixedRelativeBoundingBox; // 0x250
	ObjectProperty CurveEdSetup; // 0x26c
	int32_t ReflectionCount; // 0x274
	FRotator ThumbnailAngle; // 0x278
	float ThumbnailDistance; // 0x284
	ObjectProperty ThumbnailImage; // 0x288
};

struct UUIDataProvider_Settings {
	ObjectProperty Settings; // 0x90
	char bIsAListRow : 1; // 0x98
};

struct ATgFogOfWarBarrier {
	char m_bOneDirectional : 1; // 0x2a4
	float m_fBlockMinimumDistance; // 0x2a8
};

struct UUIComponent_ItemObtainabilityBanner {
	SimplifiedItemObtainabilityValue m_eObtainability; // 0x120
};

struct UTgDeviceForm_PeckAttack {
	ObjectProperty m_AimSkelControl3P; // 0x2bc
	ObjectProperty m_VelocitySkelControl3P; // 0x2c4
};

struct UTgAnimNodeBlendByZoomTransition {
	float m_fTransitionStartTime; // 0x168
};

struct UFaceFXAsset {
	FPointer FaceFXActor; // 0x60
	TArray<char> RawFaceFXActorBytes; // 0x68
	TArray<char> RawFaceFXSessionBytes; // 0x78
	TArray<ObjectProperty> MountedFaceFXAnimSets; // 0x88
	int32_t NumLoadErrors; // 0x98
};

struct UUIComponent_PlayerCurrency {
	TArray<ObjectProperty> m_mcCurrencyIcon; // 0x120
	TArray<ObjectProperty> m_mcCurrencyTF; // 0x130
};

struct UParticleModuleSubUVMovie {
	char bUseEmitterTime : 1; // 0x90
	FRawDistributionFloat FrameRate; // 0x94
	int32_t StartingFrame; // 0xb8
};

struct UUIComponent_ChestPanelTencent {
	ObjectProperty m_pSprayData; // 0x260
	ObjectProperty m_mcSprayIcon; // 0x268
	ObjectProperty m_mcSprayIconGfx; // 0x270
	ObjectProperty m_mcSprayIconCard; // 0x278
	ObjectProperty m_mcSprayIconRarity; // 0x280
	ObjectProperty m_mcRentalLabel; // 0x288
	ObjectProperty m_mcRentalTime; // 0x290
	FString m_sSprayName; // 0x298
	FString m_sChestName; // 0x2a8
	int32_t m_nSprayIconIndex; // 0x2b8
	int32_t m_nSprayRarityIndex; // 0x2bc
	int32_t m_nChestIconFrame; // 0x2c0
};

struct USeqAct_LevelVisibility {
	ObjectProperty Level; // 0x120
	FName LevelName; // 0x128
	char bStatusIsOk : 1; // 0x130
};

struct UMobileMenuListItem {
	float Width; // 0x74
	float Height; // 0x78
};

struct ATgDevice_WeaponSwap {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
};

struct UTgEffectHeal {
	float m_fMissingHealthInitial; // 0xa0
	int32_t m_nIntervalCount; // 0xa4
	int32_t m_nSimplifiedPropertyId; // 0xa8
};

struct UMaterialExpressionAdd {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UUIComponent_OptionEntryPaged {
	TArray<FPagedEntry> m_Entries; // 0x150
	int32_t m_nSelectedIndex; // 0x160
	ObjectProperty m_mcPagedInput; // 0x164
	ObjectProperty m_pLeftArrow; // 0x16c
	ObjectProperty m_pRightArrow; // 0x174
	ObjectProperty m_mcValueTF; // 0x17c
};

struct UTgAnimNodeBlendAnimsByDirection {
	float m_BlendSpeed; // 0x1bc
	char m_bUsePlayRateByDirection : 1; // 0x1c0
	char m_bIncludeStandingAnim : 1; // 0x1c0
	char m_bForceStanding : 1; // 0x1c0
	char m_bInterpolateWeights : 1; // 0x1c0
	char m_bMirrorDirectionsWhenPawnMirrored : 1; // 0x1c0
	char m_bForwardLeftCorrection : 1; // 0x1c0
	float m_PlayRateByDirection[0x8]; // 0x1c4
	float m_PlayRateStanding; // 0x1e4
	float m_fStillThreshold; // 0x1e8
	float m_DirAngle; // 0x1ec
	float m_LastRelevantTime; // 0x1f0
};

struct UUIComponent_ItemIcon {
	ObjectProperty m_mcRarityText; // 0x120
	ObjectProperty m_mcRarity; // 0x128
	ObjectProperty m_mcIcon; // 0x130
	ObjectProperty m_mcChestIcon; // 0x138
};

struct UTgAIBehaviorCondition_IsLookingAtCapturePoint {
	float VisibilityAngle; // 0x98
};

struct UTgSeqAct_GetBot {
	int32_t m_nBotNumber; // 0x108
};

struct ATgDeploy_Forge {
	char m_bBroadcast : 1; // 0x448
	char m_bDestroyOnDeath : 1; // 0x448
	float s_fDuration; // 0x44c
	int32_t s_nTeam; // 0x450
	float s_fLockTime; // 0x454
	FString s_sLockName; // 0x458
	int32_t r_nDeviceId; // 0x468
	int32_t r_nDuration; // 0x46c
	int32_t r_nLockPlayer; // 0x470
};

struct UTgAIBehaviorAction_PlayEmote {
	EEmote EmoteToPlay; // 0x94
};

struct ATgTimeDilationVolume {
	float m_fTimeMultiplier; // 0x314
	char m_bAffectInstigator : 1; // 0x318
	TArray<ObjectProperty> m_AffectedActors; // 0x31c
	TArray<ObjectProperty> m_AffectedPawns; // 0x32c
};

struct UUIData_ChampionChests {
	TArray<ObjectProperty> m_Chests; // 0x60
};

struct UAnimTree {
	ObjectProperty AnimTreeTemplate; // 0x114
	char bEnablePooling : 1; // 0x11c
	char bUseSavedPose : 1; // 0x11c
	char bBeingEdited : 1; // 0x11c
	char bParentNodeArrayBuilt : 1; // 0x11c
	char bRebuildAnimTickArray : 1; // 0x11c
	char m_bControlSpeed : 1; // 0x11c
	TArray<FAnimGroup> AnimGroups; // 0x120
	TArray<FName> PrioritizedSkelBranches; // 0x130
	TArray<FName> ComposePrePassBoneNames; // 0x140
	TArray<FName> ComposePostPassBoneNames; // 0x150
	TArray<ObjectProperty> RootMorphNodes; // 0x160
	TArray<ObjectProperty> m_AnimTreeComments; // 0x170
	TArray<FSkelControlListHead> SkelControlLists; // 0x180
	TArray<FBoneAtom> SavedPose; // 0x190
	TArray<ObjectProperty> AnimTickArray; // 0x1a0
	float m_fSpeed; // 0x1b0
	TArray<FName> m_MasterMorphWeightNodeNames; // 0x1b4
	TArray<FName> m_MasterMorphWeightGroups; // 0x1c4
	TArray<FHelmetMorphRestrictions> m_HelmetMorphRestrictions; // 0x1d4
};

struct UMaterialExpressionDepthBiasedAlpha {
	char bNormalize : 1; // 0xb0
	float BiasScale; // 0xb4
	FExpressionInput Alpha; // 0xb8
	FExpressionInput Bias; // 0xec
};

struct AWindDirectionalSource {
	ComponentProperty Component; // 0x280
};

struct UTgDeviceForm_DemonTeleport {
	TArray<ObjectProperty> m_DemonNodes3p; // 0x2bc
	TArray<ObjectProperty> m_DemonNodes1p; // 0x2cc
};

struct UUIInteractable_Button_GamepadPrompt {
	ObjectProperty m_pButton; // 0x118
	ObjectProperty m_mcPrompt; // 0x120
	int32_t m_nOptionCBHandle; // 0x128
};

struct UTgAIBehaviorCondition_IsBotBehaviorState {
	EBotBehaviorState TestBehaviorState; // 0x98
};

struct UTgGameDC_PlayerVitals {
	float m_fHealth; // 0x170
	float m_fHealthMax; // 0x174
	float m_fEnergy; // 0x178
	float m_fEnergyMax; // 0x17c
	float m_fBoost; // 0x180
	float m_fBoostMax; // 0x184
	float m_fMana; // 0x188
	float m_fManaMax; // 0x18c
	float m_fHealthPct; // 0x190
	float m_fEnergyPct; // 0x194
	float m_fBoostPct; // 0x198
	float m_fManaPct; // 0x19c
	float m_fXPPct; // 0x1a0
	int32_t m_nLevel; // 0x1a4
	ObjectProperty m_ReviveTimer; // 0x1a8
	ObjectProperty m_RefireTimer; // 0x1b0
	ObjectProperty m_RecallTimer; // 0x1b8
};

struct UTgAnimNodeBlendByVerticalAim {
	float m_Aim; // 0x114
	FVector2D m_Range; // 0x118
	float m_AngleOffset; // 0x120
	float m_PreviousAim; // 0x124
	char bInitialized : 1; // 0x128
	char m_bLoopChildrenOnRelevant : 1; // 0x128
	char m_bPlayChildrenOnRelevant : 1; // 0x128
	FName m_AnimName_Up; // 0x12c
	FName m_AnimName_Center; // 0x134
	FName m_AnimName_Down; // 0x13c
	ObjectProperty m_SeqNode1; // 0x144
	ObjectProperty m_SeqNode2; // 0x14c
};

struct UTgInventoryObject_Listen_PoisonBolts {
	TArray<FPoisonBoltInfo> m_PoisonBoltTargets; // 0xd0
	int32_t m_EffectGroupID; // 0xe0
};

struct UTgAIBehaviorCondition_NumGodsNearProjectile {
	char bMustBeEnemy : 1; // 0x9c
	int32_t ProjectileId; // 0xa0
	int32_t GodThreshold; // 0xa4
};

struct UPhysXParticleSystem {
	int32_t MaxParticles; // 0x60
	int32_t ParticleSpawnReserve; // 0x64
	ERBCollisionChannel RBChannel; // 0x68
	ESimulationMethod SimulationMethod; // 0x69
	EPacketSizeMultiplier PacketSizeMultiplier; // 0x6a
	FRBCollisionChannelContainer RBCollideWithChannels; // 0x6c
	float CollisionDistance; // 0x70
	float RestitutionWithStaticShapes; // 0x74
	float RestitutionWithDynamicShapes; // 0x78
	float FrictionWithStaticShapes; // 0x7c
	float FrictionWithDynamicShapes; // 0x80
	float StaticFrictionWithStaticShapes; // 0x84
	float StaticFrictionWithDynamicShapes; // 0x88
	char bDynamicCollision : 1; // 0x8c
	char bDisableGravity : 1; // 0x8c
	char bStaticCollision : 1; // 0x8c
	char bTwoWayCollision : 1; // 0x8c
	char bDestroy : 1; // 0x8c
	char bSyncFailed : 1; // 0x8c
	char bIsInGame : 1; // 0x8c
	float MaxMotionDistance; // 0x90
	float Damping; // 0x94
	FVector ExternalAcceleration; // 0x98
	float RestParticleDistance; // 0xa4
	float RestDensity; // 0xa8
	float KernelRadiusMultiplier; // 0xac
	float Stiffness; // 0xb0
	float Viscosity; // 0xb4
	float CollisionResponseCoefficient; // 0xb8
	FPointer CascadeScene; // 0xbc
	FPointer PSys; // 0xc4
};

struct AGameAIController {
	ObjectProperty CommandList; // 0x494
	char bHasRunawayCommandList : 1; // 0x49c
	char bAILogging : 1; // 0x49c
	char bAILogToWindow : 1; // 0x49c
	char bFlushAILogEachLine : 1; // 0x49c
	char bMapBasedLogName : 1; // 0x49c
	char bAIDrawDebug : 1; // 0x49c
	char bAIBroken : 1; // 0x49c
	ObjectProperty AILogFile; // 0x4a0
	float DebugTextMaxLen; // 0x4a8
	TArray<FAICmdHistoryItem> CommandHistory; // 0x4ac
	int32_t CommandHistoryNum; // 0x4bc
	TArray<FName> AILogFilter; // 0x4c0
	FString DemoActionString; // 0x4d0
};

struct UTgAnimNodeBlendByStrafe {
	ObjectProperty m_TgPawn; // 0x124
	float m_fBlendTime; // 0x12c
};

struct USoundMode {
	char bApplyEQ : 1; // 0x60
	FAudioEQEffect EQSettings; // 0x64
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x88
	float InitialDelay; // 0x98
	float FadeInTime; // 0x9c
	float Duration; // 0xa0
	float FadeOutTime; // 0xa4
};

struct UParticleModuleBeamSource {
	Beam2SourceTargetMethod SourceMethod; // 0x68
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x69
	FName SourceName; // 0x6c
	FName SourceSocketName; // 0x74
	char bSourceAbsolute : 1; // 0x7c
	char bLockSource : 1; // 0x7c
	char bLockSourceTangent : 1; // 0x7c
	char bLockSourceStength : 1; // 0x7c
	FRawDistributionVector Source; // 0x80
	FRawDistributionVector SourceTangent; // 0xa4
	FRawDistributionFloat SourceStrength; // 0xc8
};

struct UTgAIBehaviorAction_GroupUp {
	TG_EQUIP_POINT DeviceSlot; // 0x9c
	float MinDistance; // 0xa0
	float MaxDistance; // 0xa4
};

struct UUIHudReport {
	int32_t m_nPlayerIndex; // 0x244
	char m_bReasons : 1; // 0x248
	int32_t m_nReported[0x6]; // 0x24c
	int32_t m_nReportMessages[0x6]; // 0x264
	ObjectProperty m_mcBack; // 0x27c
	ObjectProperty m_mcIcon; // 0x284
	ObjectProperty m_mcHeader; // 0x28c
	ObjectProperty m_mcPlayers; // 0x294
	ObjectProperty m_mcPlayersKiller; // 0x29c
	ObjectProperty m_mcPlayersTeammates; // 0x2a4
	ObjectProperty m_mcPlayersReport[0x6]; // 0x2ac
	ObjectProperty m_mcPlayersButton[0x6]; // 0x2dc
	ObjectProperty m_mcReasons; // 0x30c
	ObjectProperty m_mcReasonsInput; // 0x314
	ObjectProperty m_mcReasonsButton[0x6]; // 0x31c
	ObjectProperty m_pPlayersInputGroup; // 0x34c
	ObjectProperty m_pReasonsInputGroup; // 0x354
	ObjectProperty m_pViewProfileAction; // 0x35c
	int32_t m_nReportablePlayers; // 0x364
};

struct ACamera {
	ObjectProperty PCOwner; // 0x280
	FName CameraStyle; // 0x288
	float DefaultFOV; // 0x290
	char bLockedFOV : 1; // 0x294
	char bConstrainAspectRatio : 1; // 0x294
	char bEnableFading : 1; // 0x294
	char bFadeAudio : 1; // 0x294
	char bForceDisableTemporalAA : 1; // 0x294
	char bEnableColorScaling : 1; // 0x294
	char bEnableColorScaleInterp : 1; // 0x294
	char bUseClientSideCameraUpdates : 1; // 0x294
	char bDebugClientSideCamera : 0; // 0x294
	char bShouldSendClientSideCameraUpdate : 0; // 0x294
	float LockedFOV; // 0x298
	float ConstrainedAspectRatio; // 0x29c
	float DefaultAspectRatio; // 0x2a0
	float OffAxisYawAngle; // 0x2a4
	float OffAxisPitchAngle; // 0x2a8
	FColor FadeColor; // 0x2ac
	float FadeAmount; // 0x2b0
	float CamOverridePostProcessAlpha; // 0x2b4
	FPostProcessSettings CamPostProcessSettings; // 0x2b8
	FRenderingPerformanceOverrides RenderingOverrides; // 0x438
	FVector ColorScale; // 0x43c
	FVector DesiredColorScale; // 0x448
	FVector OriginalColorScale; // 0x454
	float ColorScaleInterpDuration; // 0x460
	float ColorScaleInterpStartTime; // 0x464
	FTCameraCache CameraCache; // 0x468
	FTCameraCache LastFrameCameraCache; // 0x490
	FTViewTarget ViewTarget; // 0x4b8
	FTViewTarget PendingViewTarget; // 0x4f8
	float BlendTimeToGo; // 0x538
	FViewTargetTransitionParams BlendParams; // 0x53c
	TArray<ObjectProperty> ModifierList; // 0x54c
	float FreeCamDistance; // 0x55c
	FVector FreeCamOffset; // 0x560
	FVector2D FadeAlpha; // 0x56c
	float FadeTime; // 0x574
	float FadeTimeRemaining; // 0x578
	TArray<ObjectProperty> CameraLensEffects; // 0x57c
	ObjectProperty CameraShakeCamMod; // 0x58c
	UCameraModifier_CameraShake* CameraShakeCamModClass; // 0x594
	ObjectProperty AnimInstPool[0x8]; // 0x59c
	TArray<ObjectProperty> ActiveAnims; // 0x5dc
	TArray<ObjectProperty> FreeAnims; // 0x5ec
	ObjectProperty AnimCameraActor; // 0x5fc
};

struct ATgDevice_GourdMod {
	TArray<ObjectProperty> m_ImmuneTargets; // 0xaec
	TArray<float> m_ImmuneTimes; // 0xafc
};

struct UTgAIBehaviorAction_SelectAllyAttackerAsTarget {
	float TimeThreshold; // 0xa8
	float AllyDistanceThreshold; // 0xac
	float AttackerDistanceThreshold; // 0xb0
};

struct UDominantSpotLightComponent {
	FDominantShadowInfo DominantLightShadowInfo; // 0x270
	FArray_Mirror DominantLightShadowMap; // 0x320
};

struct UTgAIUtilityFilter_InsideActiveRallyPoint {
	char bAllowEnemyRally : 1; // 0xc0
};

struct ATgDevice_DrogozInhand {
	ObjectProperty m_DrogozLeg2; // 0xaec
	FVector m_vSalvoProjectileSpawnOffset; // 0xaf4
	char m_bStartedSalvo : 1; // 0xb00
	ObjectProperty m_SalvoDevice; // 0xb04
	int32_t m_nSalvoRockets; // 0xb0c
};

struct UTgSeqAct_SelectBestSpawnPoint {
	TArray<ObjectProperty> Points; // 0x108
	ObjectProperty PlayerReceived; // 0x118
};

struct UParticleModuleLocationPrimitiveSphere {
	FRawDistributionFloat StartRadius; // 0xb4
};

struct UTgSeqAct_BeaconEntranceSetActive {
	char m_bSetActive : 1; // 0x108
};

struct UUIAcquisition {
	FPointer VfTable_IAcquisitionHandler; // 0x244
	TArray<FAcquiredItem> m_Items; // 0x24c
	int32_t m_nOffset; // 0x25c
	char m_bShownItem : 1; // 0x260
	char m_bFoundNitroReceipt : 1; // 0x260
	char m_bHovering : 1; // 0x260
	char m_bRotating : 1; // 0x260
	float m_fItemTimeout; // 0x264
	float m_fPreviousPosX; // 0x268
	ObjectProperty m_mcBack; // 0x26c
	ObjectProperty m_mcName; // 0x274
	ObjectProperty m_mcDesc; // 0x27c
	ObjectProperty m_mcRotate; // 0x284
	ObjectProperty m_mcHoverName; // 0x28c
	ObjectProperty m_mcHoverDesc; // 0x294
	ObjectProperty m_mcHeader; // 0x29c
	ObjectProperty m_mcHeaderName; // 0x2a4
	ObjectProperty m_mcHeaderDesc; // 0x2ac
	ObjectProperty m_mcHeaderRank; // 0x2b4
	ObjectProperty m_mcHeaderRankLevel; // 0x2bc
	ObjectProperty m_mcHeaderRankLevelA; // 0x2c4
	ObjectProperty m_mcHeaderRankLevelB; // 0x2cc
	ObjectProperty m_mcHeaderRankLevelC; // 0x2d4
	ObjectProperty m_mcArrow[0x2]; // 0x2dc
	ObjectProperty m_mcItem[0x5]; // 0x2ec
	ObjectProperty m_mcItemIcon[0x5]; // 0x314
	ObjectProperty m_mcItemFrame[0x5]; // 0x33c
	ObjectProperty m_mcItemRarity[0x5]; // 0x364
	ObjectProperty m_mcItemTexture[0x5]; // 0x38c
	ObjectProperty m_mcItemIconFrame[0x5]; // 0x3b4
	ObjectProperty m_pItemPreviewStack; // 0x3dc
	ObjectProperty m_pAcquisitionItemsGroup; // 0x3e4
	ObjectProperty m_pInputHandleBumperLeft; // 0x3ec
	ObjectProperty m_pInputHandleBumperRight; // 0x3f4
};

struct ATgAIVolume {
	int32_t LaneIndex; // 0x2bc
	int32_t TaskforceIndex; // 0x2c0
	char bEnabled : 1; // 0x2c4
};

struct USeqAct_ToggleInput {
	char bToggleMovement : 1; // 0x108
	char bToggleTurning : 1; // 0x108
};

struct ATgDevice_CoveredCharge {
	char m_bHasHitTarget : 1; // 0xb60
	float m_fTimeToStop; // 0xb64
};

struct UWebResponse {
	TArray<FString> Headers; // 0x60
	FMap_Mirror ReplacementMap; // 0x70
	FString IncludePath; // 0xb8
	FString CharSet; // 0xc8
	ObjectProperty Connection; // 0xd8
	char bSentText : 1; // 0xe0
	char bSentResponse : 1; // 0xe0
};

struct UTgGameDC_Chat {
	FQueueMessage c_CurrentMessage; // 0x60
	TArray<FQueueMessage> c_QueuedMessages; // 0x90
	float c_fProcessTime; // 0xa0
	TArray<ObjectProperty> c_DeferredMessages; // 0xa4
	ObjectProperty m_scFirstBlood; // 0xb4
	TArray<FMessageToken> m_MessageTokens; // 0xbc
	float m_fLastEnemyKilledAllyMessageTime; // 0xcc
	float m_fMinEnemyKilledAllyMessageTime; // 0xd0
	float m_fLastAllyKilledEnemyMessageTime; // 0xd4
	float m_fMinAllyKilledEnemyMessageTime; // 0xd8
};

struct UUIComponent_PreviewRotator {
	char m_bHovering : 1; // 0x140
	char m_bRotating : 1; // 0x140
	float m_fPreviousPosX; // 0x144
	float m_fRotationFactor; // 0x148
	ObjectProperty m_LeftPressInputAction; // 0x14c
	ObjectProperty m_LeftReleaseInputAction; // 0x154
};

struct UUIBattlePassPurchase {
	float m_fPurchaseFlash; // 0x244
	ObjectProperty m_mcBack; // 0x248
	ObjectProperty m_mcName; // 0x250
	ObjectProperty m_mcDesc; // 0x258
	ObjectProperty m_mcIcon; // 0x260
	ObjectProperty m_mcTotal; // 0x268
	ObjectProperty m_mcTotalCrowns; // 0x270
	ObjectProperty m_mcShadow[0x3]; // 0x278
	ObjectProperty m_mcPanel[0x3]; // 0x290
	ObjectProperty m_mcPanelIcon[0x3]; // 0x2a8
	ObjectProperty m_mcPanelName[0x3]; // 0x2c0
	ObjectProperty m_mcPanelDesc[0x3]; // 0x2d8
	ObjectProperty m_mcPanelBanner[0x3]; // 0x2f0
	ObjectProperty m_mcPanelPurchase[0x3]; // 0x308
	ObjectProperty m_mcPanelPurchaseFlash[0x3]; // 0x320
	ObjectProperty m_mcPanelPurchasePrice[0x3]; // 0x338
	ObjectProperty m_mcPanelPurchasePriceDiscount[0x3]; // 0x350
	ObjectProperty m_pPurchaseGroup; // 0x368
};

struct UOnlineSubsystemSteamworks {
	FPointer VfTable_PComOnlinePlayerInterface; // 0x288
	char bStoringAchievement : 1; // 0x290
	char bClientStatsStorePending : 1; // 0x290
	char bGSStatsStoresSuccess : 1; // 0x290
	char bNeedsKeyboardTicking : 1; // 0x290
	char bLastHasConnection : 1; // 0x290
	char bIsStatsSessionOk : 1; // 0x290
	char bHasSteamworksAccount : 1; // 0x290
	char bShouldUseMcp : 1; // 0x290
	int32_t TotalGSStatsStoresPending; // 0x294
	EOnlineEnumerationReadState UserStatsReceivedState; // 0x298
	ELoginStatus LoggedInStatus; // 0x299
	char bWasKeyboardInputCanceled; // 0x29a
	ENetworkNotificationPosition CurrentNotificationPosition; // 0x29b
	ObjectProperty CachedGameInt; // 0x29c
	FString LocalProfileName; // 0x2a4
	FString LoggedInPlayerName; // 0x2b4
	FUniqueNetId LoggedInPlayerId; // 0x2c4
	int32_t LoggedInPlayerNum; // 0x2cc
	FString ProfileDataDirectory; // 0x2d0
	FString ProfileDataExtension; // 0x2e0
	TArray<DelegateProperty> WriteProfileSettingsDelegates; // 0x2f0
	ObjectProperty CachedProfile; // 0x300
	TArray<DelegateProperty> LocalPlayerStorageReadDelegates; // 0x308
	TArray<DelegateProperty> LocalPlayerStorageWriteDelegates; // 0x318
	TArray<DelegateProperty> RemotePlayerStorageReadDelegates; // 0x328
	TArray<DelegateProperty> SpeechRecognitionCompleteDelegates; // 0x338
	TArray<DelegateProperty> ReadFriendsDelegates; // 0x348
	TArray<DelegateProperty> FriendsChangeDelegates; // 0x358
	TArray<DelegateProperty> MutingChangeDelegates; // 0x368
	TArray<DelegateProperty> LoginChangeDelegates; // 0x378
	TArray<DelegateProperty> LoginFailedDelegates; // 0x388
	TArray<DelegateProperty> ContentPurchaseResponseDelegates; // 0x398
	TArray<DelegateProperty> LogoutCompletedDelegates; // 0x3a8
	TArray<DelegateProperty> AccountCreateDelegates; // 0x3b8
	TArray<DelegateProperty> TalkingDelegates; // 0x3c8
	TArray<DelegateProperty> ReadOnlineStatsCompleteDelegates; // 0x3d8
	TArray<DelegateProperty> FlushOnlineStatsDelegates; // 0x3e8
	TArray<DelegateProperty> ConnectionStatusChangeDelegates; // 0x3f8
	TArray<DelegateProperty> ControllerChangeDelegates; // 0x408
	TArray<DelegateProperty> LinkStatusDelegates; // 0x418
	TArray<DelegateProperty> ReadTitleFileCompleteDelegates; // 0x428
	TArray<DelegateProperty> AchievementDelegates; // 0x438
	TArray<DelegateProperty> AchievementReadDelegates; // 0x448
	TArray<DelegateProperty> EnumerateUserFilesCompleteDelegates; // 0x458
	TArray<DelegateProperty> ReadUserFileCompleteDelegates; // 0x468
	TArray<DelegateProperty> WriteUserFileCompleteDelegates; // 0x478
	TArray<DelegateProperty> DeleteUserFileCompleteDelegates; // 0x488
	TArray<DelegateProperty> SharedFileReadCompleteDelegates; // 0x498
	TArray<DelegateProperty> SharedFileWriteCompleteDelegates; // 0x4a8
	TArray<DelegateProperty> TokenAndSignatureRetrievedDelegates; // 0x4b8
	TArray<DelegateProperty> PrivilegeLevelCheckedDelegates; // 0x4c8
	TArray<DelegateProperty> PrivilegeCheckedForUsersDelegates; // 0x4d8
	TArray<DelegateProperty> PrivilegeCheckedForUsersByUniqueNetIdsDelegates; // 0x4e8
	TArray<DelegateProperty> FilterTextDelegates; // 0x4f8
	FLocalTalkerSteam CurrentLocalTalker; // 0x508
	TArray<FRemoteTalker> RemoteTalkers; // 0x514
	int32_t GameID; // 0x524
	ObjectProperty CurrentStatsRead; // 0x528
	TArray<FPendingPlayerStats> PendingStats; // 0x530
	FString KeyboardResultsString; // 0x540
	TArray<DelegateProperty> KeyboardInputDelegates; // 0x550
	TArray<DelegateProperty> FriendInviteReceivedDelegates; // 0x560
	TArray<DelegateProperty> FriendMessageReceivedDelegates; // 0x570
	TArray<DelegateProperty> AddFriendByNameCompleteDelegates; // 0x580
	FProfileSettingsCache ProfileCache; // 0x590
	ObjectProperty PlayerStorageCache; // 0x5c8
	FString CachedFriendMessage; // 0x5d0
	FDeviceIdCache DeviceCache; // 0x5e0
	TArray<FString> LocationUrlsForInvites; // 0x604
	FString LocationUrl; // 0x614
	TArray<DelegateProperty> ReceivedGameInviteDelegates; // 0x624
	TArray<DelegateProperty> JoinFriendGameCompleteDelegates; // 0x634
	TArray<DelegateProperty> GetNumberOfCurrentPlayersCompleteDelegates; // 0x644
	TArray<DelegateProperty> RegisterHostStatGuidCompleteDelegates; // 0x654
	TArray<FOnlineFriendMessage> CachedFriendMessages; // 0x664
	TArray<FOnlineStatusMapping> StatusMappings; // 0x674
	FString DefaultStatus; // 0x684
	FString GameInviteMessage; // 0x694
	FControllerConnectionState ControllerStates[0x4]; // 0x6a4
	float ConnectionPresenceTimeInterval; // 0x6c4
	float ConnectionPresenceElapsedTime; // 0x6c8
	FString EncryptedProductKey; // 0x6cc
	TArray<FUniqueNetId> MuteList; // 0x6dc
	TArray<FSteamUserCloud> UserCloudFiles; // 0x6ec
	TArray<FSteamUserCloudMetadata> UserCloudMetadata; // 0x6fc
	TArray<FTitleFile> SharedFileCache; // 0x70c
	TArray<FQueuedAvatarRequest> QueuedAvatarRequests; // 0x71c
	TArray<FAchievementMappingInfo> AchievementMappings; // 0x72c
	TArray<FAchievementProgressStat> PendingAchievementProgress; // 0x73c
	TArray<FLeaderboardTemplate> LeaderboardList; // 0x74c
	TArray<FDeferredLeaderboardRead> DeferredLeaderboardReads; // 0x75c
	TArray<FDeferredLeaderboardWrite> DeferredLeaderboardWrites; // 0x76c
	TArray<FDeferredLeaderboardWrite> PendingLeaderboardStats; // 0x77c
	TArray<FViewIdToLeaderboardName> LeaderboardNameMappings; // 0x78c
	TArray<int32_t> GameServerStatsMappings; // 0x79c
	ObjectProperty CachedAuthInt; // 0x7ac
	TArray<FIpAddr> PendingRedirects; // 0x7b4
	DelegateProperty __OnLoginChange__Delegate; // 0x7c4
	DelegateProperty __OnLoginCancelled__Delegate; // 0x7d4
	DelegateProperty __OnMutingChange__Delegate; // 0x7e4
	DelegateProperty __OnFriendsChange__Delegate; // 0x7f4
	DelegateProperty __OnLoginFailed__Delegate; // 0x804
	DelegateProperty __OnLogoutCompleted__Delegate; // 0x814
	DelegateProperty __OnLoginStatusChange__Delegate; // 0x824
	DelegateProperty __OnReadProfileSettingsComplete__Delegate; // 0x834
	DelegateProperty __OnWriteProfileSettingsComplete__Delegate; // 0x844
	DelegateProperty __OnReadPlayerStorageComplete__Delegate; // 0x854
	DelegateProperty __OnReadPlayerStorageForNetIdComplete__Delegate; // 0x864
	DelegateProperty __OnWritePlayerStorageComplete__Delegate; // 0x874
	DelegateProperty __OnReadFriendsComplete__Delegate; // 0x884
	DelegateProperty __OnPlayerTalkingStateChange__Delegate; // 0x894
	DelegateProperty __OnRecognitionComplete__Delegate; // 0x8a4
	DelegateProperty __OnReadOnlineStatsComplete__Delegate; // 0x8b4
	DelegateProperty __OnFlushOnlineStatsComplete__Delegate; // 0x8c4
	DelegateProperty __OnLinkStatusChange__Delegate; // 0x8d4
	DelegateProperty __OnExternalUIChange__Delegate; // 0x8e4
	DelegateProperty __OnControllerChange__Delegate; // 0x8f4
	DelegateProperty __OnConnectionStatusChange__Delegate; // 0x904
	DelegateProperty __OnStorageDeviceChange__Delegate; // 0x914
	DelegateProperty __OnReadTitleFileComplete__Delegate; // 0x924
	DelegateProperty __OnCreateOnlineAccountCompleted__Delegate; // 0x934
	DelegateProperty __OnKeyboardInputComplete__Delegate; // 0x944
	DelegateProperty __OnAddFriendByNameComplete__Delegate; // 0x954
	DelegateProperty __OnFriendInviteReceived__Delegate; // 0x964
	DelegateProperty __OnReceivedGameInvite__Delegate; // 0x974
	DelegateProperty __OnJoinFriendGameComplete__Delegate; // 0x984
	DelegateProperty __OnFriendMessageReceived__Delegate; // 0x994
	DelegateProperty __OnRegisterHostStatGuidComplete__Delegate; // 0x9a4
	DelegateProperty __OnContentPurchaseResponse__Delegate; // 0x9b4
	DelegateProperty __OnDeviceSelectionComplete__Delegate; // 0x9c4
	DelegateProperty __OnUnlockAchievementComplete__Delegate; // 0x9d4
	DelegateProperty __OnProfileDataChanged__Delegate; // 0x9e4
	DelegateProperty __OnReadAchievementsComplete__Delegate; // 0x9f4
	DelegateProperty __OnReadOnlineAvatarComplete__Delegate; // 0xa04
	DelegateProperty __OnGetNumberOfCurrentPlayersComplete__Delegate; // 0xa14
	DelegateProperty __OnReadCrossTitleProfileSettingsComplete__Delegate; // 0xa24
	DelegateProperty __OnEnumerateUserFilesComplete__Delegate; // 0xa34
	DelegateProperty __OnReadUserFileComplete__Delegate; // 0xa44
	DelegateProperty __OnWriteUserFileComplete__Delegate; // 0xa54
	DelegateProperty __OnDeleteUserFileComplete__Delegate; // 0xa64
	DelegateProperty __OnReadSharedFileComplete__Delegate; // 0xa74
	DelegateProperty __OnWriteSharedFileComplete__Delegate; // 0xa84
	DelegateProperty __OnTokenAndSignatureRetrieved__Delegate; // 0xa94
	DelegateProperty __OnPrivilegeLevelChecked__Delegate; // 0xaa4
	DelegateProperty __OnStatisticChanged__Delegate; // 0xab4
	DelegateProperty __OnCurrentUserChanged__Delegate; // 0xac4
	DelegateProperty __OnPrivilegeCheckedForUsers__Delegate; // 0xad4
	DelegateProperty __OnPrivilegeCheckedForUsersByUniqueNetIds__Delegate; // 0xae4
	DelegateProperty __OnFilterText__Delegate; // 0xaf4
	DelegateProperty __OnSystemUserControllerPairingChanged__Delegate; // 0xb04
	DelegateProperty __OnShowGamerCardComplete__Delegate; // 0xb14
	DelegateProperty __OnAccountPickerComplete__Delegate; // 0xb24
	DelegateProperty __OnUserAccountInfoRetrieved__Delegate; // 0xb34
	DelegateProperty __OnRemoteTalkerStatusChange__Delegate; // 0xb44
	DelegateProperty __OnShowComposeMessageUIComplete__Delegate; // 0xb54
	DelegateProperty __OnPeoplePickerComplete__Delegate; // 0xb64
	DelegateProperty __OnAcceptReceivedData__Delegate; // 0xb74
	DelegateProperty __OnShowHelpComplete__Delegate; // 0xb84
	DelegateProperty __OnReadOnlineProfilesComplete__Delegate; // 0xb94
	DelegateProperty __OnRegisterLocalTalkerComplete__Delegate; // 0xba4
	DelegateProperty __OnUnregisterLocalTalkerComplete__Delegate; // 0xbb4
	DelegateProperty __OnUnregisterRemoteTalkerComplete__Delegate; // 0xbc4
};

struct UAnimNotify_Rumble {
	UWaveFormBase* PredefinedWaveForm; // 0x68
	ObjectProperty WaveForm; // 0x70
	char bCheckForBasedPlayer : 1; // 0x78
	float EffectRadius; // 0x7c
};

struct UDrawCapsuleComponent {
	FColor CapsuleColor; // 0x24c
	ObjectProperty CapsuleMaterial; // 0x250
	float CapsuleHeight; // 0x258
	float CapsuleRadius; // 0x25c
	char bDrawWireCapsule : 1; // 0x260
	char bDrawLitCapsule : 1; // 0x260
	char bDrawOnlyIfSelected : 1; // 0x260
};

struct USoundNodeAmbient {
	char bAttenuate : 1; // 0x74
	char bSpatialize : 1; // 0x74
	char bAttenuateWithLPF : 1; // 0x74
	float dBAttenuationAtMax; // 0x78
	SoundDistanceModel DistanceModel; // 0x7c
	float RadiusMin; // 0x80
	float RadiusMax; // 0x84
	float LPFRadiusMin; // 0x88
	float LPFRadiusMax; // 0x8c
	float PitchMin; // 0x90
	float PitchMax; // 0x94
	float VolumeMin; // 0x98
	float VolumeMax; // 0x9c
	TArray<FAmbientSoundSlot> SoundSlots; // 0xa0
};

struct USkelControlWheel {
	float WheelDisplacement; // 0x100
	float WheelMaxRenderDisplacement; // 0x104
	float WheelRoll; // 0x108
	EAxis WheelRollAxis; // 0x10c
	EAxis WheelSteeringAxis; // 0x10d
	float WheelSteering; // 0x110
	char bInvertWheelRoll : 1; // 0x114
	char bInvertWheelSteering : 1; // 0x114
};

struct UImageReflectionShadowPlaneComponent {
	char bEnabled : 1; // 0x24c
	FPlane ReflectionPlane; // 0x250
};

struct UParticleModuleLocationEmitter {
	FName EmitterName; // 0x68
	ELocationEmitterSelectionMethod SelectionMethod; // 0x70
	char InheritSourceVelocity : 1; // 0x74
	char bInheritSourceRotation : 1; // 0x74
	float InheritSourceVelocityScale; // 0x78
	float InheritSourceRotationScale; // 0x7c
};

struct UUIResourceCombinationProvider {
	ObjectProperty StaticDataProvider; // 0x70
	ObjectProperty ProfileProvider; // 0x78
};

struct USeqEvent_HudRenderImage {
	FLinearColor DisplayColor; // 0x140
	FVector DisplayLocation; // 0x150
	ObjectProperty DisplayTexture; // 0x15c
	float XL; // 0x164
	float YL; // 0x168
	float U; // 0x16c
	float V; // 0x170
	float UL; // 0x174
	float VL; // 0x178
};

struct ATgDeploy_Shard {
	float m_fDelayedPickupTime; // 0x4e0
	ObjectProperty m_DelayedPickupPawn; // 0x4e4
};

struct ATgDeploy_HealingTotem {
	float r_fRadiusScale; // 0x448
	char r_bHasHealingRain : 1; // 0x44c
	char r_bHasWindTotem : 1; // 0x44c
	float r_fMonolithReduction; // 0x450
	float r_fPersistTime; // 0x454
	ObjectProperty m_CachedPawnOwner; // 0x458
};

struct UUIDataLeague {
	Fdword dwLeagueId; // 0x60
	TArray<ObjectProperty> m_TierArray; // 0x64
	TMap<None, None> m_Tiers; // 0x74
	TArray<ObjectProperty> m_PlayerArray; // 0xbc
	TMap<None, None> m_Players; // 0xcc
};

struct UTgSeqCond_HasCondition {
	ConditionType ConditionList; // 0xec
};

struct ALandscape {
	TArray<FName> LayerNames; // 0x3bc
	TArray<FLandscapeLayerInfo> LayerInfos; // 0x3cc
};

struct UHavokNavigationHandle {
	TArray<FCachedPathItem> PathPoints; // 0x1b0
	EHavokNavigationMeshType PathingNavMeshType; // 0x1c0
	EHavokEdgeType CurrEdgeType; // 0x1c1
	float LastClearPathTime; // 0x1c4
	float ClearPathTime; // 0x1c8
	int32_t OpenSetSizeMultiplier; // 0x1cc
	int32_t SearchStateSizeMultiplier; // 0x1d0
	int32_t HierarchicalOpenSetSizeMultiplier; // 0x1d4
	int32_t HierarchicalSearchStateSizeMultiplier; // 0x1d8
	int32_t MaxIterations; // 0x1dc
	int32_t HierarchicalMaxIterations; // 0x1e0
	char PreferHierarchicalSearch : 1; // 0x1e4
	char UseHierarchicalSearch : 1; // 0x1e4
};

struct ANavigationPoint {
	char bEndPoint : 1; // 0x280
	char bTransientEndPoint : 1; // 0x280
	char bHideEditorPaths : 1; // 0x280
	char bCanReach : 1; // 0x280
	char bBlocked : 1; // 0x280
	char bOneWayPath : 1; // 0x280
	char bNeverUseStrafing : 1; // 0x280
	char bAlwaysUseStrafing : 1; // 0x280
	char bForceNoStrafing : 0; // 0x280
	char bAutoBuilt : 0; // 0x280
	char bSpecialMove : 0; // 0x280
	char bNoAutoConnect : 0; // 0x280
	char bNotBased : 0; // 0x280
	char bPathsChanged : 0; // 0x280
	char bDestinationOnly : 0; // 0x280
	char bSourceOnly : 0; // 0x280
	char bSpecialForced : 0; // 0x280
	char bMustBeReachable : 0; // 0x280
	char bBlockable : 0; // 0x280
	char bFlyingPreferred : 0; // 0x280
	char bMayCausePain : 0; // 0x280
	char bAlreadyVisited : 0; // 0x280
	char bVehicleDestination : 0; // 0x280
	char bMakeSourceOnly : 0; // 0x280
	char bMustTouchToReach : 0; // 0x280
	char bCanWalkOnToReach : 0; // 0x280
	char bBuildLongPaths : 0; // 0x280
	char bBlockedForVehicles : 0; // 0x280
	char bPreferredVehiclePath : 0; // 0x280
	char bHasCrossLevelPaths : 0; // 0x280
	char bShouldSaveForCheckpoint : 0; // 0x280
	FNavigationOctreeObject NavOctreeObject; // 0x284
	TArray<ObjectProperty> PathList; // 0x2c0
	TArray<FActorReference> Volumes; // 0x2d0
	int32_t visitedWeight; // 0x2e0
	int32_t bestPathWeight; // 0x2e4
	ObjectProperty nextNavigationPoint; // 0x2e8
	ObjectProperty nextOrdered; // 0x2f0
	ObjectProperty prevOrdered; // 0x2f8
	ObjectProperty previousPath; // 0x300
	int32_t Cost; // 0x308
	int32_t ExtraCost; // 0x30c
	int32_t TransientCost; // 0x310
	int32_t FearCost; // 0x314
	TArray<FDebugNavCost> CostArray; // 0x318
	ObjectProperty InventoryCache; // 0x328
	float InventoryDist; // 0x330
	float LastDetourWeight; // 0x334
	ComponentProperty CylinderComponent; // 0x338
	FCylinder MaxPathSize; // 0x340
	FGuid NavGuid; // 0x348
	ComponentProperty GoodSprite; // 0x358
	ComponentProperty BadSprite; // 0x360
	int32_t NetworkID; // 0x368
	ObjectProperty AnchoredPawn; // 0x36c
	float LastAnchoredPawnTime; // 0x374
};

struct UParticleModuleKillBox {
	FRawDistributionVector LowerLeftCorner; // 0x68
	FRawDistributionVector UpperRightCorner; // 0x8c
	char bAbsolute : 1; // 0xb0
	char bKillInside : 1; // 0xb0
	char bAxisAlignedAndFixedSize : 1; // 0xb0
};

struct UTgLevelStreamingSpectator {
	SpectatorStreamingMethod m_LoadingMethod; // 0x100
};

struct UTgInventoryObject_Listen_DoubleTap {
	float m_fBaseWeaponDamage; // 0xc8
	float m_fDoubleTapDelay; // 0xcc
	TArray<ObjectProperty> m_PendingDoubleTapActors; // 0xd0
	TArray<float> m_PendingDoubleTapTimes; // 0xe0
};

struct ATgSkeletalMeshActor_Lobby {
	float m_fSpawnOffsetYaw; // 0x4f4
	float m_fMaxSpawnRotation; // 0x4f8
	float m_fMinSpawnRotation; // 0x4fc
	char m_bAdjustMeshToGround : 1; // 0x500
	char m_bCanBeRotated : 1; // 0x500
	char m_bEnablePostures : 1; // 0x500
	int32_t m_CardMICBotIdPending; // 0x504
	float m_CardMICTransitionDesiredAlpha; // 0x508
	float m_CardMICTransitionAlpha; // 0x50c
	ObjectProperty m_FlagStandActor; // 0x510
	ObjectProperty m_PedestalActor; // 0x518
	TArray<ObjectProperty> m_CardMICs; // 0x520
	TG_POSTURE r_CurrentPosture; // 0x530
	float m_fRotationAmount; // 0x534
	float m_fDesiredRotationAmount; // 0x538
	FRotator m_rOriginalRotation; // 0x53c
	float m_fSelectionGlowRemainingTime; // 0x548
	float m_fSelectionGlowTotalTime; // 0x54c
	TArray<ObjectProperty> m_PostureBlendNodes; // 0x550
	ComponentProperty m_HighlightPSC; // 0x560
};

struct UTgSeqAct_TgCameraShake {
	ObjectProperty m_CameraShake; // 0x108
	ObjectProperty m_LocationActor; // 0x110
};

struct UTgAIBehaviorCondition_TargetsDamageableByDevice {
	TG_EQUIP_POINT DeviceSlot; // 0x98
	ECombatTargetType TargetType; // 0x99
	int32_t TargetCount; // 0x9c
};

struct UMultiFont {
	TArray<float> ResolutionTestTable; // 0x1a0
};

struct APylonSeed {
	FPointer VfTable_IInterface_NavMeshPathObject; // 0x280
};

struct ANxRadialCustomForceField {
	float SelfRotationStrength; // 0x2f0
	FPointer Kernel; // 0x2f4
};

struct ATgProj_FreeGrenade {
	char m_bShieldTouched : 1; // 0x51c
	char m_bExplodeOnTouch : 1; // 0x51c
	char m_bExplodeOnGeometry : 1; // 0x51c
	char m_bExplodeOnFloor : 1; // 0x51c
	char m_bUseBilinearInterpolationForBounceDamping : 1; // 0x51c
	char m_bUseGravityZOverride : 1; // 0x51c
	ObjectProperty m_TouchedShield; // 0x520
	float m_fToleranceZ; // 0x528
	float m_fBounceDampingVertMin; // 0x52c
	float m_fBounceDampingVertMax; // 0x530
	float m_fBounceDampingHorizMin; // 0x534
	float m_fBounceDampingHorizMax; // 0x538
	float m_fBounceDamping; // 0x53c
	float m_fSpeedToActivateBounceFX; // 0x540
	float m_fGravityZOverride; // 0x544
	int32_t m_nBounceCount; // 0x548
	int32_t m_nBouncesToExplode; // 0x54c
	float m_fBounceDistinctionDuration; // 0x550
	float m_fLastBounceTime; // 0x554
	FVector m_vRecentHitNormal; // 0x558
	float m_fRecentHitTime; // 0x564
	float m_fBounceFlashThreshold; // 0x568
};

struct UAkBank {
	char AutoLoad : 1; // 0x60
	char GenerateDefinition : 1; // 0x60
	char bIsAsyncLoading : 1; // 0x60
	char bIsReadyForFinishDestroy : 1; // 0x60
};

struct USeqAct_FeatureTest {
	FString FreezeAtParameters; // 0x12c
	float ScreenShotDelay; // 0x13c
	FString ScreenShotName; // 0x140
	float RemainingScreenShotDelay; // 0x150
};

struct ATgDevice_ShieldBounce {
	int32_t m_nLastFiringInstance; // 0xaec
	int32_t m_nNumJumps; // 0xaf0
};

struct UActorFactoryDecal {
	ObjectProperty DecalMaterial; // 0x9c
};

struct ATgSkeletalMeshActor_Pedestal {
	FPointer m_DefaultBot; // 0x568
	TArray<ObjectProperty> m_DefaultPedestalActors; // 0x570
	char m_bUsingDefaultPedestal : 1; // 0x580
	EPedestalType m_PedestalType; // 0x584
};

struct UTgAudioPawnDialogue {
	TArray<FChatterEvent> m_ChatterEvents; // 0x60
	TArray<FDialogueEvent> m_DialogueEvents; // 0x70
	float m_fCategoryCooldownTimestamps[0x12]; // 0x80
	float m_fCategoryCooldownBase[0x12]; // 0xc8
	ObjectProperty m_pOwner; // 0x110
	float m_fLastEmoteTime; // 0x118
	char m_bSpeaking : 1; // 0x11c
	char m_bInitialized : 1; // 0x11c
	int32_t m_nInvokedWeapon; // 0x120
};

struct UTgAIUtilityFilter_LoSToTarget {
	char bInverse : 1; // 0xc0
};

struct UTgCameraModule_FrontFacingCamera {
	FRotator m_rWorldRotationOffset; // 0x1cc
	float m_fFOV; // 0x1d8
};

struct UPrimitiveComponentFactory {
	char CollideActors : 1; // 0x60
	char BlockActors : 1; // 0x60
	char BlockZeroExtent : 1; // 0x60
	char BlockNonZeroExtent : 1; // 0x60
	char BlockRigidBody : 1; // 0x60
	char HiddenGame : 1; // 0x60
	char HiddenEditor : 1; // 0x60
	char CastShadow : 1; // 0x60
};

struct UTgAnimNotify_Sound {
	TArray<FPSE_Skin> m_SkinOverrideList; // 0x88
};

struct UApexGenericAsset {
	FPointer MApexAsset; // 0x80
};

struct UTgInventoryObject_Listen_ActiveWhileOffCooldown {
	char m_bIsActive : 1; // 0xc8
};

struct UTgGameViewportClient {
	TArray<ObjectProperty> m_DeferredManifests; // 0x1c4
	char m_dragging : 1; // 0x1d4
	char m_wasMaximized : 1; // 0x1d4
	char bReadLeftStickAxis : 1; // 0x1d4
	char bReadRightStickAxis : 1; // 0x1d4
	float fRawLeftStickAxis; // 0x1d8
	float fRawRightStickAxis; // 0x1dc
	float fRawRightStickX; // 0x1e0
	float fRawRightStickY; // 0x1e4
};

struct UTgDeviceForm_Pursuit {
	FName m_LeftSlideSkelControlName1P; // 0x2bc
	FName m_RightSlideSkelControlName1P; // 0x2c4
	FName m_LeftSlideSkelControlName3P; // 0x2cc
	FName m_RightSlideSkelControlName3P; // 0x2d4
	ObjectProperty m_LeftSlideSkelControl1P; // 0x2dc
	ObjectProperty m_RightSlideSkelControl1P; // 0x2e4
	ObjectProperty m_LeftSlideSkelControl3P; // 0x2ec
	ObjectProperty m_RightSlideSkelControl3P; // 0x2f4
	float c_fPreviousLeftSlideStrength; // 0x2fc
	float c_fPreviousRightSlideStrength; // 0x300
	char m_bCachedDualFireParity : 1; // 0x304
};

struct ARB_ForceFieldExcludeVolume {
	int32_t ForceFieldChannel; // 0x2bc
	int32_t SceneIndex; // 0x2c0
};

struct UInterpTrackMorphWeight {
	FName MorphNodeName; // 0xb8
};

struct USeqAct_AkSetSwitch {
	FString SwitchGroup; // 0x108
	FString Switch; // 0x118
};

struct USeqAct_HeadTrackingControl {
	TArray<FName> TrackControllerName; // 0x108
	float LookAtActorRadius; // 0x118
	char bDisableBeyondLimit : 1; // 0x11c
	char bLookAtPawns : 1; // 0x11c
	float MaxLookAtTime; // 0x120
	float MinLookAtTime; // 0x124
	float MaxInterestTime; // 0x128
	TArray<AActor*> ActorClassesToLookAt; // 0x12c
	TArray<FName> TargetBoneNames; // 0x13c
	TArray<ObjectProperty> LookAtTargets; // 0x14c
	TMap<None, None> ActorToComponentMap; // 0x15c
};

struct USplineAudioComponent {
	float ListenerScopeRadius; // 0x2cc
	int32_t ClosestPointOnSplineIndex; // 0x2d0
	TArray<FInterpPointOnSpline> Points; // 0x2d4
};

struct UReachSpec {
	FPointer NavOctreeObject; // 0x60
	int32_t Distance; // 0x68
	FVector Direction; // 0x6c
	ObjectProperty Start; // 0x78
	FActorReference End; // 0x80
	int32_t CollisionRadius; // 0x98
	int32_t CollisionHeight; // 0x9c
	int32_t reachFlags; // 0xa0
	int32_t MaxLandingVelocity; // 0xa4
	char bPruned; // 0xa8
	char PathColorIndex; // 0xa9
	char bAddToNavigationOctree : 1; // 0xac
	char bCanCutCorners : 1; // 0xac
	char bCheckForObstructions : 1; // 0xac
	char bSkipPrune : 1; // 0xac
	char bDisabled : 1; // 0xac
	TArray<UReachSpec*> PruneSpecList; // 0xb0
	ObjectProperty BlockedBy; // 0xc0
};

struct ATgHeightFog {
	ComponentProperty FogComponent; // 0x280
};

struct UTgSeqEvent_ControlPointOwnershipChange_Server {
	int32_t PointIndex; // 0x128
};

struct UUIDataCommon {
	int32_t m_nLevel; // 0x70
	int32_t m_nItemsTotal; // 0x74
	int32_t m_nItemsOwned; // 0x78
	int32_t m_nXPProgress; // 0x7c
	int32_t m_nXPRequired; // 0x80
	int32_t m_nActiveMount; // 0x84
	float m_fXPPercent; // 0x88
	float m_fItemsPercent; // 0x8c
	TMap<None, None> m_PortalAccounts; // 0x90
	TArray<ObjectProperty> m_BurnA; // 0xd8
	TArray<ObjectProperty> m_BurnB; // 0xe8
	TArray<ObjectProperty> m_BurnC; // 0xf8
	TArray<ObjectProperty> m_BurnD; // 0x108
	TArray<ObjectProperty> m_BurnConquestA; // 0x118
	TArray<ObjectProperty> m_BurnConquestB; // 0x128
	TArray<ObjectProperty> m_BurnConquestC; // 0x138
	TArray<ObjectProperty> m_BurnConquestD; // 0x148
	TArray<ObjectProperty> m_Mounts; // 0x158
	TArray<ObjectProperty> m_EquipableTitles; // 0x168
	TArray<ObjectProperty> m_AnnouncerPacks; // 0x178
	TArray<ObjectProperty> m_Chests; // 0x188
	TArray<ObjectProperty> m_MatchBoosters; // 0x198
	TArray<ObjectProperty> m_AccountBoosters; // 0x1a8
	TArray<ObjectProperty> m_Subscriptions; // 0x1b8
	TArray<ObjectProperty> m_Currencies; // 0x1c8
	TArray<ObjectProperty> m_Bundles; // 0x1d8
	TArray<ObjectProperty> m_WebBundles; // 0x1e8
	TArray<ObjectProperty> m_Lore; // 0x1f8
	TArray<ObjectProperty> m_ActivatedMatchBoosters; // 0x208
	Fdword m_dwBattlePassPoints; // 0x218
	Fdword m_dwBattlePassLevel; // 0x21c
	Fdword m_dwBattlePassTier; // 0x220
	Fdword m_bBattlePassOwned; // 0x224
};

struct UTgAnimNodeAimOffset_Charge {
	char m_bInterpToCurrentTurnRate : 1; // 0x1f8
	float m_fInterpSpeed; // 0x1fc
	float m_fMaxYawRate; // 0x200
	float m_fAimYawOffset; // 0x204
	FRotator m_rCachedOwnerRotator; // 0x208
};

struct ATgEmitter_CameraEffect_DamageBase {
	EDamageEffectScreenLocation ScreenLocation; // 0x2b4
};

struct UTgSkelControlSingleBone_Skinned {
	float DefaultStrength; // 0x144
	TArray<FSkinStrengthOverride> SkinOverrides; // 0x148
	char bInitializedStrength : 1; // 0x158
	float fSkinStrength; // 0x15c
};

struct UTgAIBehaviorSensor_NearbyItems {
	float MaxRadius; // 0x94
};

struct USeqCond_IncrementFloat {
	float IncrementAmount; // 0xec
	float ValueA; // 0xf0
	float ValueB; // 0xf4
};

struct UMaterialExpressionVectorParameter {
	FLinearColor DefaultValue; // 0xd0
};

struct UTgInventoryObject_Device {
	ObjectProperty s_Device; // 0xac
	int32_t m_nDeviceInstanceId; // 0xb4
	int32_t c_nNumFindDeviceFails; // 0xb8
	int32_t m_nStackCount; // 0xbc
	FPointer m_pAmDevice; // 0xc0
};

struct AImageReflectionSceneCapture {
	float DepthRange; // 0x294
	float ColorRange; // 0x298
};

struct UAnimNodeSequenceBlendBase {
	TArray<FAnimBlendInfo> Anims; // 0x1ac
};

struct UHavokNavMeshGrid {
	FMatrix WorldToScreen; // 0x60
	FMatrix ScreenToWorld; // 0xa0
	float TexelDistance; // 0xe0
	int32_t GridSize; // 0xe4
	FUntypedBulkData_Mirror SerializedGridData; // 0xe8
	TArray<char> MemoryGridData; // 0x128
};

struct UTgSeqAct_AIStartFireAt {
	char ForcedFireMode; // 0x108
};

struct UTgAnimMetaData_MaskingPlane {
	int32_t WallIndex; // 0xe0
	FVector WallNormal; // 0xe4
	FVector WallPosition0; // 0xf0
	FVector WallPosition1; // 0xfc
	FName WallEnableBaseName; // 0x108
	FName WallPositionBaseName; // 0x110
	FName WallNormalBaseName; // 0x118
};

struct UAnimNodeBlendBase {
	TArray<FAnimBlendChild> Children; // 0xfc
	char bFixNumChildren : 1; // 0x10c
	char m_bForceChildToLoop : 1; // 0x10c
	AlphaBlendType BlendType; // 0x110
};

struct UUIComponent_ChampionRankRow {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_mcType; // 0x128
	ObjectProperty m_mcWins; // 0x130
	ObjectProperty m_mcLosses; // 0x138
	ObjectProperty m_mcRank; // 0x140
	ObjectProperty m_mcChampionIcon; // 0x148
	ObjectProperty m_mcMasteryTitle; // 0x150
	ObjectProperty m_MasteryProgress; // 0x158
	ObjectProperty m_pDetailsButton; // 0x160
};

struct UInterpTrackFloatParticleParam {
	FName ParamName; // 0xb8
};

struct UScriptViewportClient {
	FPointer VfTable_FViewportClient; // 0x60
};

struct USeqAct_CameraFade {
	FColor FadeColor; // 0x108
	FVector2D FadeAlpha; // 0x10c
	float FadeOpacity; // 0x114
	float FadeTime; // 0x118
	char bPersistFade : 1; // 0x11c
	char bFadeAudio : 1; // 0x11c
	float FadeTimeRemaining; // 0x120
	TArray<ObjectProperty> CachedPCs; // 0x124
};

struct UTgInventoryObject_Listen_NearOwnTurret {
	char m_bIsActive : 1; // 0xc8
};

struct UTgAIBehaviorCondition_TimeInPayloadMode {
	float TimeThreshold; // 0x98
};

struct ATgDevice_TyraInhand {
	char m_bUltIsActive : 1; // 0xaec
};

struct UTgAIBehaviorCondition_CombatTargetDamageableByDevice {
	TG_EQUIP_POINT DeviceSlot; // 0x98
};

struct UUIData_LobbySlotItem {
	UIChampionCustomizeState eState; // 0x60
	FPointer pItemInfo; // 0x64
	char bActive : 1; // 0x6c
};

struct UParticleModuleColorScaleOverDensity {
	FRawDistributionVector ColorScaleOverDensity; // 0x68
	FRawDistributionFloat AlphaScaleOverDensity; // 0x8c
};

struct UUIComponent_GenericTitleInputButtons {
	ObjectProperty m_mcTitle[0x2]; // 0x120
	ObjectProperty m_mcError; // 0x130
	ObjectProperty m_Buttons[0x2]; // 0x138
	int32_t m_ButtonClickHandles[0x2]; // 0x148
	ObjectProperty m_mcInputTF; // 0x150
	ObjectProperty m_mcInputFrame; // 0x158
	ObjectProperty m_mcInputFrameHighlight; // 0x160
	ObjectProperty m_grButtons; // 0x168
};

struct ATgDeploy_EffectField {
	float m_fEffectFieldHeight; // 0x448
	float r_fRadiusScale; // 0x44c
	TArray<ObjectProperty> m_TouchingPawns; // 0x450
	TArray<ObjectProperty> m_HitActors; // 0x460
	char m_bOnlyHitOnce : 1; // 0x470
	ObjectProperty m_CollisionProxy; // 0x474
};

struct UTgSeqAct_AddAnimSets {
	TArray<ObjectProperty> m_MaleAnimSets; // 0x108
	TArray<ObjectProperty> m_FemaleAnimSets; // 0x118
	char m_bAppendToExisting : 1; // 0x128
};

struct UUIComponent_FWOTDEntry {
	ObjectProperty m_mcTF0; // 0x120
	ObjectProperty m_mcTF1; // 0x128
	ObjectProperty m_mcFWOTDIcon; // 0x130
	ObjectProperty m_mcCheckmark; // 0x138
	ObjectProperty m_mcChestIcon; // 0x140
	ObjectProperty m_mcChestIconTF; // 0x148
	ObjectProperty m_mcCompleted; // 0x150
	ObjectProperty m_pButton; // 0x158
	Fdword m_dwBotId; // 0x160
	Fdword m_dwChestId; // 0x164
	char m_bHasUnopenedChest : 1; // 0x168
};

struct UUIDataQueues {
	ObjectProperty m_QueueData; // 0x70
	TArray<ObjectProperty> m_DevQueues; // 0x78
	TMap<None, None> m_Queues; // 0x88
	TMap<None, None> m_CustomQueues; // 0xd0
	TMap<None, None> m_CustomGames; // 0x118
	float m_fStatusTimer; // 0x160
};

struct UHeadTrackingComponent {
	TArray<FName> TrackControllerName; // 0x88
	float LookAtActorRadius; // 0x98
	char bDisableBeyondLimit : 1; // 0x9c
	float MaxLookAtTime; // 0xa0
	float MinLookAtTime; // 0xa4
	float MaxInterestTime; // 0xa8
	TArray<AActor*> ActorClassesToLookAt; // 0xac
	TArray<FName> TargetBoneNames; // 0xbc
	TMap<None, None> CurrentActorMap; // 0xcc
	ComponentProperty SkeletalMeshComp; // 0x114
	TArray<ObjectProperty> TrackControls; // 0x11c
	FVector RootMeshLocation; // 0x12c
	FRotator RootMeshRotation; // 0x138
};

struct UAnimationCompressionAlgorithm_RemoveEverySecondKey {
	int32_t MinKeys; // 0x78
	char bStartAtSecondKey : 1; // 0x7c
};

struct UTgInventoryObject_Listen_FirstShotAfterMovementAbility {
	float m_fLastMovementAbilityTime; // 0xc8
	char m_bJustFinishedMovementAbility : 1; // 0xcc
	int32_t m_nNumApplicationsRemaining; // 0xd0
	float m_fLastAppliedTime; // 0xd4
};

struct AEmitterCameraLensEffectBase {
	ObjectProperty PS_CameraEffect; // 0x294
	ObjectProperty PS_CameraEffectNonExtremeContent; // 0x29c
	float BaseFOV; // 0x2a4
	float DistFromCamera; // 0x2a8
	char bAllowMultipleInstances : 1; // 0x2ac
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2b0
	ObjectProperty BaseCamera; // 0x2c0
};

struct USeqAct_SetInt {
	int32_t Target; // 0x108
	TArray<int32_t> Value; // 0x10c
};

struct UOnlinePlaylistGameTypeProvider {
	FName PlaylistGameTypeName; // 0x94
	FString DisplayName; // 0x9c
	FString Description; // 0xac
	int32_t GameTypeId; // 0xbc
};

struct UTgAIBehaviorCondition_PhysicsState {
	EPhysics PhysicsState; // 0x98
};

struct UTgSeqAct_GiveShards {
	int32_t m_nShardAmount; // 0x108
};

struct UTgAchievement_QuestionsLater {
	char bTakenDamageYet : 1; // 0x90
	char bHasHitAllEnemies : 1; // 0x90
	TArray<int32_t> EnemyPawnsHit; // 0x94
};

struct UAnimSequence {
	FName SequenceName; // 0x60
	TArray<FAnimNotifyEvent> Notifies; // 0x68
	TArray<ObjectProperty> MetaData; // 0x78
	TArray<FSkelControlModifier> BoneControlModifiers; // 0x88
	float SequenceLength; // 0x98
	int32_t NumFrames; // 0x9c
	float RateScale; // 0xa0
	char bParticleEffectsAreFootsteps : 1; // 0xa4
	char bNoLoopingInterpolation : 1; // 0xa4
	char bIsAdditive : 1; // 0xa4
	char bAdditiveBuiltLooping : 1; // 0xa4
	char bDoNotOverrideCompression : 1; // 0xa4
	char bHasBeenUsed : 1; // 0xa4
	char bWasCompressedWithoutTranslations : 1; // 0xa4
	TArray<FRawAnimSequenceTrack> RawAnimData; // 0xa8
	TArray<FRawAnimSequenceTrack> RawAnimationData; // 0xb8
	TArray<FTranslationTrack> TranslationData; // 0xc8
	TArray<FRotationTrack> RotationData; // 0xd8
	TArray<FCurveTrack> CurveData; // 0xe8
	AnimationCompressionFormat TranslationCompressionFormat; // 0xf8
	AnimationCompressionFormat RotationCompressionFormat; // 0xf9
	AnimationKeyFormat KeyEncodingFormat; // 0xfa
	TArray<int32_t> CompressedTrackOffsets; // 0xfc
	TArray<char> CompressedByteStream; // 0x10c
	FPointer TranslationCodec; // 0x11c
	FPointer RotationCodec; // 0x124
	TArray<FBoneAtom> AdditiveRefPose; // 0x12c
	TArray<FRawAnimSequenceTrack> AdditiveBasePose; // 0x13c
	int32_t EncodingPkgVersion; // 0x14c
	float UseScore; // 0x150
};

struct UUIComponent_MatchInvitePlayerEntry {
	ObjectProperty m_mcAccepted; // 0x120
	ObjectProperty m_mcFailed; // 0x128
};

struct URB_BodyInstance {
	ComponentProperty OwnerComponent; // 0x60
	int32_t BodyIndex; // 0x68
	FVector Velocity; // 0x6c
	FVector PreviousVelocity; // 0x78
	int32_t SceneIndex; // 0x84
	FPointer BodyData; // 0x88
	FPointer BoneSpring; // 0x90
	FPointer BoneSpringKinActor; // 0x98
	char bEnableBoneSpringLinear : 1; // 0xa0
	char bEnableBoneSpringAngular : 1; // 0xa0
	char bDisableOnOverextension : 1; // 0xa0
	char bNotifyOwnerOnOverextension : 1; // 0xa0
	char bTeleportOnOverextension : 1; // 0xa0
	char bUseKinActorForBoneSpring : 1; // 0xa0
	char bMakeSpringToBaseCollisionComponent : 1; // 0xa0
	char bOnlyCollideWithPawns : 1; // 0xa0
	char bEnableCollisionResponse : 0; // 0xa0
	char bPushBody : 0; // 0xa0
	char bForceUnfixed : 0; // 0xa0
	char bInstanceAlwaysFullAnimWeight : 0; // 0xa0
	float BoneLinearSpring; // 0xa4
	float BoneLinearDamping; // 0xa8
	float BoneAngularSpring; // 0xac
	float BoneAngularDamping; // 0xb0
	float OverextensionThreshold; // 0xb4
	float CustomGravityFactor; // 0xb8
	float LastEffectPlayedTime; // 0xbc
	float ContactReportForceThreshold; // 0xc0
	float InstanceMassScale; // 0xc4
	float InstanceDampingScale; // 0xc8
	ObjectProperty PhysMaterialOverride; // 0xcc
};

struct UTgCameraModule {
	ObjectProperty PlayerCamera; // 0x60
};

struct UUIComponent_HeaderTab {
	ObjectProperty m_pCTA; // 0x120
	ObjectProperty m_mcTwitchCTA; // 0x128
};

struct UInterpTrackSound {
	TArray<FSoundTrackKey> Sounds; // 0xb8
	char bPlayOnReverse : 1; // 0xc8
	char bContinueSoundOnMatineeEnd : 1; // 0xc8
	char bSuppressSubtitles : 1; // 0xc8
	char bTreatAsDialogue : 1; // 0xc8
};

struct UNetConnection {
	TArray<ObjectProperty> Children; // 0xb0d4
};

struct UPrefab {
	int32_t PrefabVersion; // 0x60
	TArray<ObjectProperty> PrefabArchetypes; // 0x64
	TArray<ObjectProperty> RemovedArchetypes; // 0x74
	ObjectProperty PrefabSequence; // 0x84
};

struct UGameAICommand {
	ObjectProperty ChildCommand; // 0x60
	FName ChildStatus; // 0x68
	ObjectProperty GameAIOwner; // 0x70
	FName Status; // 0x78
	char bAllowNewSameClassInstance : 1; // 0x80
	char bReplaceActiveSameClassInstance : 1; // 0x80
	char bAborted : 1; // 0x80
	char bIgnoreNotifies : 1; // 0x80
	char bIgnoreStepAside : 1; // 0x80
	char bPendingPop : 1; // 0x80
};

struct AGameCrowdDestinationQueuePoint {
	ObjectProperty NextQueuePosition; // 0x28c
	ObjectProperty PreviousQueuePosition; // 0x294
	ObjectProperty QueuedAgent; // 0x29c
	ObjectProperty QueueDestination; // 0x2a4
	char bClearingQueue : 1; // 0x2ac
	char bPendingAdvance : 1; // 0x2ac
	float AverageReactionTime; // 0x2b0
	UGameCrowdBehavior_WaitInQueue* QueueBehaviorClass; // 0x2b4
};

struct UPComSeqAct_PlayMusicEvent {
	FName EventName; // 0x108
};

struct UTgControlModule_ThirdPerson {
	int32_t CameraYawOffset; // 0x6c
	float fRotInterpSpeed; // 0x70
	float fAimPitch; // 0x74
	FInterpCurveFloat PitchCurve; // 0x78
	FInterpCurveFloat AimCurve; // 0x8c
	char m_bWasInCatapultLastTick : 1; // 0xa0
	FRotator m_InitialRotationToCatapult; // 0xa4
	ObjectProperty m_StrafeCameraAnim; // 0xb0
	float fOrientationResetStartPitch; // 0xb8
	float fOrientationResetRemaining; // 0xbc
	float fOrientationResetDuration; // 0xc0
	float fOrientationResetCooldown; // 0xc4
	float fOrientationResetLastUsed; // 0xc8
};

struct ANxTornadoForceFieldCapsule {
	ComponentProperty RenderComponent; // 0x304
};

struct UUIHudClass {
	int32_t m_nTime; // 0x244
	int32_t m_nClass; // 0x248
	int32_t m_nPlayer[0x5]; // 0x24c
	int32_t m_nClassIndex; // 0x260
	char m_bSelection : 1; // 0x264
	char m_bShouldShow : 1; // 0x264
	ObjectProperty m_mcImage; // 0x268
	ObjectProperty m_mcTitleA; // 0x270
	ObjectProperty m_mcTitleB; // 0x278
	ObjectProperty m_mcBlocker; // 0x280
	ObjectProperty m_mcInfoFrame; // 0x288
	ObjectProperty m_mcPrompt; // 0x290
	ObjectProperty m_mcPromptKey; // 0x298
	ObjectProperty m_mcPromptClass; // 0x2a0
	ObjectProperty m_mcAbility; // 0x2a8
	ObjectProperty m_mcAbilityDesc; // 0x2b0
	ObjectProperty m_mcAbilityIcon; // 0x2b8
	ObjectProperty m_mcAbilityName; // 0x2c0
	ObjectProperty m_mcTalentGroup; // 0x2c8
	ObjectProperty m_mcTalent[0xa]; // 0x2d0
	ObjectProperty m_mcTalentIcon[0xa]; // 0x320
	ObjectProperty m_mcTalentTitle[0xa]; // 0x370
	ObjectProperty m_mcTalentDesc[0xa]; // 0x3c0
	ObjectProperty m_mcHeader; // 0x410
	ObjectProperty m_mcHeaderTime; // 0x418
	ObjectProperty m_mcHeaderPlayer[0x5]; // 0x420
	ObjectProperty m_mcHeaderPlayerIcon[0x5]; // 0x448
	ObjectProperty m_mcHeaderPlayerClass[0x5]; // 0x470
	ObjectProperty m_mcButton[0x4]; // 0x498
	ObjectProperty m_mcButtonIcon[0x4]; // 0x4b8
	ObjectProperty m_mcButtonLevel[0x4]; // 0x4d8
	ObjectProperty m_mcButtonHighlight[0x4]; // 0x4f8
	ObjectProperty m_mcButtonHighlightIcon[0x4]; // 0x518
	ObjectProperty m_mcButtonProgress[0x4]; // 0x538
	ObjectProperty m_mcButtonProgressTip[0x4]; // 0x558
	ObjectProperty m_mcButtonProgressFill[0x4]; // 0x578
	ObjectProperty m_pInputGroup; // 0x598
	ObjectProperty m_akSelect; // 0x5a0
};

struct UUISettings {
	ObjectProperty m_ChampionDropdown; // 0x244
	int32_t m_eType; // 0x24c
	int32_t m_nHighlightOption; // 0x250
	int32_t m_nOptionCount; // 0x254
	int32_t m_nScrollIndex; // 0x258
	char m_bOptionFocus : 1; // 0x25c
	char m_bKeybindFocus : 1; // 0x25c
	char m_bSettingsChanged : 1; // 0x25c
	char m_bIsInResetPrompt : 1; // 0x25c
	char m_bUseVSync : 1; // 0x25c
	char m_bUseD3D11 : 1; // 0x25c
	float m_fDelayTimer; // 0x260
	ObjectProperty m_Title; // 0x264
	ObjectProperty m_Frame; // 0x26c
	ObjectProperty m_Reset; // 0x274
	ObjectProperty m_mcBack; // 0x27c
	ObjectProperty m_Blocker; // 0x284
	ObjectProperty m_mcIcon; // 0x28c
	ObjectProperty m_mcHeader; // 0x294
	ObjectProperty m_mcHeaderGlow; // 0x29c
	ObjectProperty m_KeybindPopup; // 0x2a4
	ObjectProperty m_KeybindPopupTF; // 0x2ac
	ObjectProperty m_KeybindCancel; // 0x2b4
	FSettingOption m_Option[0xc]; // 0x2bc
	FKeybindOption m_Keybind[0xc]; // 0x6dc
	ObjectProperty m_ExitButton; // 0x9dc
	ObjectProperty m_AcceptButton; // 0x9e4
	ObjectProperty m_mcScrollBar; // 0x9ec
	ObjectProperty m_mcHeaderButton[0x5]; // 0x9f4
	ObjectProperty m_mcHeaderButtonLine[0x5]; // 0xa1c
	ObjectProperty m_mcHeaderButtonGlow[0x5]; // 0xa44
	ObjectProperty m_mcHeaderButtonBounds[0x5]; // 0xa6c
	ObjectProperty m_mcHeaderButtonShadow[0x5]; // 0xa94
	ObjectProperty m_mcHeaderButtonSelected[0x5]; // 0xabc
	ObjectProperty m_mcHeaderButtonHighlight[0x5]; // 0xae4
	ObjectProperty m_pHeaderButtonCTA[0x5]; // 0xb0c
	ObjectProperty m_grOptions; // 0xb34
	ObjectProperty m_grKeybinds; // 0xb3c
	ObjectProperty m_grTeams; // 0xb44
	ObjectProperty m_mcGamepad; // 0xb4c
	ObjectProperty m_mcGamepadButtons; // 0xb54
	ObjectProperty m_mcGamepadImage; // 0xb5c
	ObjectProperty m_mcSafeFrame; // 0xb64
	ObjectProperty m_ResetToDefaultAction; // 0xb6c
	TArray<int32_t> m_DelayedUpdates; // 0xb74
	TArray<int32_t> m_VideoTypes; // 0xb84
	TArray<int32_t> m_HudTypes; // 0xb94
	TArray<int32_t> m_AudioTypes; // 0xba4
	TArray<int32_t> m_ControlTypes; // 0xbb4
	int32_t m_nPressAndHoldSettingType; // 0xbc4
	float m_fPressAndHoldStartTimestamp; // 0xbc8
	float m_fPressAndHoldOldTimestamp; // 0xbcc
	float m_fPressAndHoldTimeoutTime; // 0xbd0
	float m_fPressAndHoldFastTime; // 0xbd4
	ObjectProperty m_akOption; // 0xbd8
	ObjectProperty m_akVolume; // 0xbe0
};

struct UTgSeqAct_SetTaskforce {
	int32_t TaskForceNumber; // 0x108
};

struct ATgLanePylon {
	int32_t m_nLane; // 0x490
};

struct UTgAIBehaviorAction_FollowLane {
	char bUseReverseDirection : 1; // 0x94
};

struct UBookMark2D {
	float Zoom2D; // 0x60
	FIntPoint Location; // 0x64
};

struct UMaterialExpressionDistance {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UInterpTrackInstVectorMaterialParam {
	TArray<FVectorMaterialParamMICData> MICInfos; // 0x60
	ObjectProperty InstancedTrack; // 0x70
};

struct UTgAnimBlendBySpeedWithExhaustion {
	char m_bEnableExhaustion : 1; // 0x21c
	float m_fExhaustionLevel; // 0x220
	TArray<int32_t> m_ExhaustedChildren; // 0x224
	TArray<int32_t> m_GainExhaustionChildren; // 0x234
	float m_fExhaustionGainSpeed; // 0x244
	float m_fExhaustionLossSpeed; // 0x248
	float m_fExhaustionLevelMax; // 0x24c
	float m_fExhaustionLevelMin; // 0x250
};

struct ATgDeploy_DeployableLinked {
	ObjectProperty m_ParentDeployable; // 0x448
};

struct AMaterialInstanceTimeVaryingActor {
	ObjectProperty MatInst; // 0x280
};

struct UTgAIBehaviorAction_MoveAroundLanePusher {
	TG_EQUIP_POINT DeviceSlot; // 0x9c
	char bMoveClockWise : 1; // 0xa0
};

struct UTgAILocalPositionSolver {
	FPointer VfTable_IInterface_ActorPathConstraints; // 0x60
	TArray<FDefaultRepulsorData> DefaultWeights; // 0x68
	ObjectProperty OuterController; // 0x78
	float LastQueryTime; // 0x80
	FVector LastQueryPoint; // 0x84
	FVector LastSolvePoint; // 0x90
	char bSolveDistanceThreshold : 1; // 0x9c
	char bSolveWeights : 1; // 0x9c
};

struct USeqAct_ParticleEventGenerator {
	char bEnabled : 1; // 0x108
	char bUseEmitterLocation : 1; // 0x108
	ObjectProperty Instigator; // 0x10c
	TArray<FString> EventNames; // 0x114
	float EventTime; // 0x124
	FVector EventLocation; // 0x128
	FVector EventDirection; // 0x134
	FVector EventVelocity; // 0x140
	FVector EventNormal; // 0x14c
};

struct UAnimNotify_ClothingMaxDistanceScale {
	float StartScale; // 0x68
	float EndScale; // 0x6c
	EMaxDistanceScaleMode ScaleMode; // 0x70
	float Duration; // 0x74
};

struct UDownloadableContentEnumerator {
	TArray<FOnlineContent> DLCBundles; // 0x60
	FString DLCRootDir; // 0x70
	TArray<DelegateProperty> FindDLCDelegates; // 0x80
	DelegateProperty __OnFindDLCComplete__Delegate; // 0x90
};

struct UParticleModuleTrailSource {
	ETrail2SourceMethod SourceMethod; // 0x68
	EParticleSourceSelectionMethod SelectionMethod; // 0x69
	FName SourceName; // 0x6c
	FRawDistributionFloat SourceStrength; // 0x74
	char bLockSourceStength : 1; // 0x98
	char bInheritRotation : 1; // 0x98
	int32_t SourceOffsetCount; // 0x9c
	TArray<FVector> SourceOffsetDefaults; // 0xa0
};

struct UTgMarkComponent {
	TArray<FTargetMark> s_MarkList; // 0x88
	TArray<ObjectProperty> s_MarkEffectGroup; // 0x98
	int32_t m_nHostItemId; // 0xa8
	char m_bStackEffects : 1; // 0xac
	char m_bRemoveMarksOnDeath : 1; // 0xac
	float m_fMarkDuration; // 0xb0
	int32_t m_nMaxMarks; // 0xb4
	int32_t m_nPhysicalType; // 0xb8
};

struct UTgCameraModule_ThirdPersonVariableHeight {
	float ZOffset; // 0x1cc
};

struct AColorScaleVolume {
	FVector ColorScale; // 0x2bc
	float InterpTime; // 0x2c8
};

struct UTgSeqAct_TriggerInterpActor {
	FString m_sStateName; // 0x108
};

struct UTgAIBehaviorAction_MoveToLanePusherFront {
	TG_EQUIP_POINT DeviceSlot; // 0x9c
};

struct ATgDevice_LongbowPlanted {
	ObjectProperty m_CachedInhand; // 0xaec
};

struct UTgAIBehaviorCondition_NumMinionsInTowerRadius {
	char bMinionsMustBeEnemy : 1; // 0x98
	char bTowerMustBeEnemy : 1; // 0x98
	int32_t MinionThreshold; // 0x9c
};

struct USeqAct_SetMatInstScalarParam {
	ObjectProperty MatInst; // 0x108
	FName ParamName; // 0x110
	float ScalarValue; // 0x118
};

struct UTexture2D {
	FIndirectArray_Mirror Mips; // 0x100
	FIndirectArray_Mirror CachedPVRTCMips; // 0x110
	FIndirectArray_Mirror CachedATITCMips; // 0x120
	FIndirectArray_Mirror CachedETCMips; // 0x130
	int32_t CachedFlashMipsMaxResolution; // 0x140
	FUntypedBulkData_Mirror CachedFlashMips; // 0x144
	int32_t SizeX; // 0x184
	int32_t SizeY; // 0x188
	int32_t OriginalSizeX; // 0x18c
	int32_t OriginalSizeY; // 0x190
	EPixelFormat Format; // 0x194
	TextureAddress AddressX; // 0x195
	TextureAddress AddressY; // 0x196
	char bIsEditorOnly : 1; // 0x198
	char bHasBeenCooked : 1; // 0x198
	char bIsStreamable : 1; // 0x198
	char bHasCancelationPending : 1; // 0x198
	char bHasBeenLoadedFromPersistentArchive : 1; // 0x198
	char bForceMiplevelsToBeResident : 1; // 0x198
	char bGlobalForceMipLevelsToBeResident : 1; // 0x198
	char bIsCompositingSource : 1; // 0x198
	char bHasBeenPaintedInEditor : 0; // 0x198
	float ForceMipLevelsToBeResidentTimestamp; // 0x19c
	FName TextureFileCacheName; // 0x1a0
	FGuid TextureFileCacheGuid; // 0x1a8
	int32_t RequestedMips; // 0x1b8
	int32_t ResidentMips; // 0x1bc
	int32_t MipsToRemoveOnCompress; // 0x1c0
	FThreadSafeCounter PendingMipChangeRequestStatus; // 0x1c4
	TArray<char> SystemMemoryData; // 0x1c8
	FTextureLinkedListMirror StreamableTexturesLink; // 0x1d8
	int32_t StreamingIndex; // 0x1f0
	int32_t MipTailBaseIdx; // 0x1f4
	FPointer ResourceMem; // 0x1f8
	int32_t FirstResourceMemMip; // 0x200
	float Timer; // 0x204
};

struct ATgRoyaleConvergeActor {
	float m_fTargetConvergeRadiusSize; // 0x280
	float m_fConvergeRadiusSize; // 0x284
	FConvergeInfo r_vConvergeRepInfo; // 0x288
	ObjectProperty m_FogActor; // 0x290
	float m_fConvergeRadiusSpeed; // 0x298
	float m_ConvergeLocationSpeed; // 0x29c
	FVector r_vConvergeLocation; // 0x2a0
	char m_bIsConverging : 1; // 0x2ac
	char m_bIsExpanding : 1; // 0x2ac
	char c_bFirstConvergence : 1; // 0x2ac
	char m_bIsShifting : 1; // 0x2ac
	char m_bUpdateTranslation : 1; // 0x2ac
	ComponentProperty m_StaticMeshComponent; // 0x2b0
	float m_fLastConvergeTimestamp; // 0x2b8
	float m_fConvergeUpdateRate; // 0x2bc
	ObjectProperty c_aSoundActor; // 0x2c0
	ObjectProperty c_akDeathField; // 0x2c8
	float m_fShiftingRemainingTime; // 0x2d0
};

struct UDataStoreClient {
	TArray<FString> GlobalDataStoreClasses; // 0x70
	TArray<ObjectProperty> GlobalDataStores; // 0x80
	TArray<FString> PlayerDataStoreClassNames; // 0x90
	TArray<UUIDataStore*> PlayerDataStoreClasses; // 0xa0
	TArray<FPlayerDataStoreGroup> PlayerDataStores; // 0xb0
};

struct UUIComponent_DLCPack {
	TArray<ObjectProperty> m_mcDetail; // 0x120
	ObjectProperty m_mcNew; // 0x130
	ObjectProperty m_mcTitle; // 0x138
	ObjectProperty m_mcSubtitle; // 0x140
	ObjectProperty m_mcPrice; // 0x148
	ObjectProperty m_mcConsolePrice; // 0x150
	ObjectProperty m_mcDollars; // 0x158
	ObjectProperty m_mcCents; // 0x160
	ObjectProperty m_mcCurrency; // 0x168
	ObjectProperty m_mcOneTimePurchase; // 0x170
	ObjectProperty m_mcBuyNowText; // 0x178
	ObjectProperty m_mcRefund; // 0x180
	ObjectProperty m_mcSaleBanner; // 0x188
	ObjectProperty m_mcDLCTexture; // 0x190
	ObjectProperty m_mcPurchaseButton; // 0x198
	ObjectProperty m_mcPanelButton; // 0x1a0
	ObjectProperty m_pPurchaseButton; // 0x1a8
	ObjectProperty m_pPrice; // 0x1b0
	ObjectProperty m_mcGamepadPrompt; // 0x1b8
	AdTextureSize m_eTextureSize; // 0x1c0
	char m_bIsPortrait : 1; // 0x1c4
	char m_bIsPanelButton : 1; // 0x1c4
	int32_t m_nPackId; // 0x1c8
	FString m_sPackPrefix; // 0x1cc
	FName m_sGamepadBuyKey; // 0x1dc
};

struct UTgAIBehaviorCondition {
	EBehaviorComparison ComparisonOperator; // 0x94
};

struct UTgAIUtility {
	EUtilityType UtilityType; // 0x94
	TArray<EBotBehaviorState> IgnoreBehaviorState; // 0x98
	TArray<EBotBehaviorState> RejctBehaviorState; // 0xa8
	int32_t ParentIndex; // 0xb8
};

struct UUIHudChatBox {
	char m_bLobby : 1; // 0x2cc
	char m_bFadeFrame : 1; // 0x2cc
	char m_bHighlight : 1; // 0x2cc
	char m_bHideInput : 1; // 0x2cc
	float m_fOffset; // 0x2d0
	float m_fInputPosY; // 0x2d4
	float m_fInputWidth; // 0x2d8
	float m_fOutputTimer[0x8]; // 0x2dc
	int32_t m_nMaxWidth; // 0x2fc
	FString m_sReplyName; // 0x300
	ObjectProperty m_Buffer; // 0x310
	ObjectProperty m_Highlight; // 0x318
	ObjectProperty m_Output; // 0x320
	ObjectProperty m_OutputText[0x8]; // 0x328
	ObjectProperty m_OutputIcon[0x8]; // 0x368
	ObjectProperty m_OutputVgsCallout[0x28]; // 0x3a8
	ObjectProperty m_OutputFrame; // 0x4e8
	ObjectProperty m_OutputScroll; // 0x4f0
	ObjectProperty m_mcCloseBtn; // 0x4f8
	ObjectProperty m_Input; // 0x500
	ObjectProperty m_InputBtn; // 0x508
	ObjectProperty m_InputHelp; // 0x510
	ObjectProperty m_InputChan; // 0x518
	ObjectProperty m_InputFrame; // 0x520
	TArray<char> m_bVGSText; // 0x528
};

struct ATgCatapultActor {
	FName m_SeatSocketName; // 0x2e8
	int32_t m_nUIMapIndex; // 0x2f0
	ObjectProperty r_DriverPawn; // 0x2f4
	float m_fLaunchTime; // 0x2fc
	FVector m_vLaunchVelocity; // 0x300
	float m_fRotationSpeed; // 0x30c
	float m_fTriggerRadius; // 0x310
	float m_fTriggerHeight; // 0x314
	ObjectProperty m_TriggerCylinder; // 0x318
	char r_nFlashFire; // 0x320
	char c_nCachedFlashFire; // 0x321
	char r_bIsFiring : 1; // 0x324
	char c_bIsRotating : 1; // 0x324
	char m_bIsPlayingFireAnim : 1; // 0x324
	ObjectProperty c_WheelControls[0x4]; // 0x328
	float c_WheelSpinSpeed; // 0x348
	float c_SimulatedRotationSpeed; // 0x34c
	FRotator c_SavedRotation; // 0x350
	FRotator c_TargetRotation; // 0x35c
	float m_fLaunchPowerLevel; // 0x368
	TArray<ObjectProperty> c_MovementFXList; // 0x36c
	TArray<FName> c_MovementFXSocketList; // 0x37c
	ObjectProperty c_SeatIndicatorFX; // 0x38c
	ObjectProperty c_AimIndicatorFX; // 0x394
	ObjectProperty c_TurnStartAudFX; // 0x39c
	ObjectProperty c_TurnStopAudFX; // 0x3a4
	ObjectProperty c_DriverEnterAudFX; // 0x3ac
	float m_fRotationLockoutTime; // 0x3b4
	float m_fRemainingRotationLockoutTime; // 0x3b8
	int32_t c_nYawFXDeadzone; // 0x3bc
	int32_t c_nYawOffset; // 0x3c0
	FVector m_vRelativeSeatLoc; // 0x3c4
};

struct UFontImportOptions {
	FFontImportOptionsData Data; // 0x60
};

struct UTgNewUserSettings {
	TArray<int32_t> WatchedVideoIds; // 0x60
};

struct USeqAct_FinishSequence {
	FString OutputLabel; // 0x108
};

struct UUIDataProvider_OnlineFriends {
	TArray<FOnlineFriend> FriendsList; // 0x74
	FString NickNameCol; // 0x84
	FString PresenceInfoCol; // 0x94
	FString FriendStateCol; // 0xa4
	FString bIsOnlineCol; // 0xb4
	FString bIsPlayingCol; // 0xc4
	FString bIsPlayingThisGameCol; // 0xd4
	FString bIsJoinableCol; // 0xe4
	FString bHasVoiceSupportCol; // 0xf4
	FString bHaveInvitedCol; // 0x104
	FString bHasInvitedYouCol; // 0x114
	FString OfflineText; // 0x124
	FString OnlineText; // 0x134
	FString AwayText; // 0x144
	FString BusyText; // 0x154
};

struct UMcpGroupsManager {
	FString CreateGroupUrl; // 0x128
	FString DeleteGroupUrl; // 0x138
	FString QueryGroupsUrl; // 0x148
	FString QueryGroupMembersUrl; // 0x158
	FString AddGroupMembersUrl; // 0x168
	FString RemoveGroupMembersUrl; // 0x178
	FString DeleteAllGroupsUrl; // 0x188
	FString AcceptGroupInviteUrl; // 0x198
	FString RejectGroupInviteUrl; // 0x1a8
	DelegateProperty __OnQueryGroupsRequestComplete__Delegate; // 0x1b8
	DelegateProperty __OnQueryGroupMembersRequestComplete__Delegate; // 0x1c8
	DelegateProperty __OnAddGroupMembersRequestComplete__Delegate; // 0x1d8
	DelegateProperty __OnAcceptGroupInviteRequestComplete__Delegate; // 0x1e8
};

struct UTgSeqAct_AIMoveToActor {
	ObjectProperty Destination; // 0x108
};

struct UInputAction {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	TArray<FInputKeyEvent> m_Keys; // 0x68
	ObjectProperty m_CallbackContainer; // 0x78
	char m_bAlwaysHandleInput : 1; // 0x80
};

struct USeqVar_External {
	USequenceVariable* ExpectedType; // 0xa0
	FString VariableLabel; // 0xa8
};

struct UTgLevelStreamingWorldDetail {
	int32_t MinimumWorldDetailLevel; // 0x100
	int32_t MaximumWorldDetailLevel; // 0x104
	char CachedDetailCheck; // 0x108
	int32_t LastUpdateTime; // 0x10c
};

struct ATgAIController_BehaviorPet {
	ObjectProperty OwnerCombatTarget; // 0x90c
};

struct AKActorSpawnable {
	char bRecycleScaleToZero : 1; // 0x3b4
	char bScalingToZero : 1; // 0x3b4
};

struct UTgInventoryObject_Listen_AffectedByDeviceLifesteal {
	ObjectProperty m_CachedFiremode; // 0xc8
};

struct ATgRespawnBeaconEntrance {
	ObjectProperty ExitBeacon; // 0x32c
	char r_bEntranceActive : 1; // 0x334
	char r_nPendingTeleport; // 0x338
	ERespawnBeaconChargingState c_LocalChargingState; // 0x339
	ERespawnBeaconChargingState r_ChargingState; // 0x33a
	ComponentProperty m_TeleportPSC; // 0x33c
	float m_fChargeDelay; // 0x344
	float m_fTeleportDelay; // 0x348
	float m_fPreTeleportFXTime; // 0x34c
	float s_fChargeStateTimeStamp; // 0x350
	TArray<FPendingTeleportInfo> s_PendingTeleports; // 0x354
};

struct UTgGameplayCurvesSet_BulletMagnetOverDist {
	FRawDistributionFloat BulletMagnetDegOverDist; // 0x64
	FRawDistributionFloat BulletMagnetMaxDegOverDist; // 0x88
	EPaladinsBulletMagnetType BulletMagnetActiveType; // 0xac
};

struct UTgObjectReferencer {
	FPointer m_Manifest; // 0x84
};

struct UInterpTrackSkelControlScale {
	FName SkelControlName; // 0xb8
};

struct UAnimNodeBlendPerBone {
	char bForceLocalSpaceBlend : 1; // 0x124
	TArray<FName> BranchStartBoneName; // 0x128
	TArray<float> Child2PerBoneWeight; // 0x138
	TArray<char> LocalToCompReqBones; // 0x148
};

struct UInterpTrackColorProp {
	FName PropertyName; // 0xb8
};

struct UMaterialExpressionFunctionOutput {
	FString OutputName; // 0xb0
	FString Description; // 0xc0
	int32_t SortPriority; // 0xd0
	FExpressionInput A; // 0xd4
	char bLastPreviewed : 1; // 0x108
	FGuid Id; // 0x10c
};

struct UUIDataStore_OnlinePlayerData {
	ObjectProperty FriendsProvider; // 0x98
	int32_t PlayerControllerId; // 0xa0
	FString PlayerNick; // 0xa4
	FString ProfileSettingsClassName; // 0xb4
	UOnlineProfileSettings* ProfileSettingsClass; // 0xc4
	ObjectProperty ProfileProvider; // 0xcc
	FString ProfileProviderClassName; // 0xd4
	UUIDataProvider_OnlineProfileSettings* ProfileProviderClass; // 0xe4
	FString PlayerStorageClassName; // 0xec
	UOnlinePlayerStorage* PlayerStorageClass; // 0xfc
	ObjectProperty StorageProvider; // 0x104
	FString StorageProviderClassName; // 0x10c
	UUIDataProvider_OnlinePlayerStorage* StorageProviderClass; // 0x11c
	ObjectProperty FriendMessagesProvider; // 0x124
	ObjectProperty AchievementsProvider; // 0x12c
	FString FriendsProviderClassName; // 0x134
	UUIDataProvider_OnlineFriends* FriendsProviderClass; // 0x144
	FString FriendMessagesProviderClassName; // 0x14c
	UUIDataProvider_OnlineFriendMessages* FriendMessagesProviderClass; // 0x15c
	FString AchievementsProviderClassName; // 0x164
	UUIDataProvider_PlayerAchievements* AchievementsProviderClass; // 0x174
	FString PartyChatProviderClassName; // 0x17c
	UUIDataProvider_OnlinePartyChatList* PartyChatProviderClass; // 0x18c
	ObjectProperty PartyChatProvider; // 0x194
};

struct UTgAnimNotify_Sound_ByBotId {
	TArray<FPSE_BotData> m_BotOverrideList; // 0x7c
};

struct ASpeedTreeActor {
	ComponentProperty SpeedTreeComponent; // 0x280
};

struct ATgRoyaleCatapult {
	ComponentProperty SMC; // 0x280
	int32_t m_nCatapultGroupID; // 0x288
};

struct UUIScene_UIHudMenu {
	ObjectProperty m_mcToggleMenuPrompt; // 0x154
	ObjectProperty m_pTabs; // 0x15c
	ObjectProperty m_pMap; // 0x164
	ObjectProperty m_pInventory; // 0x16c
	ObjectProperty m_pClass; // 0x174
	ObjectProperty m_pToggleMenuAction; // 0x17c
};

struct URB_ConstraintDrawComponent {
	ObjectProperty LimitMaterial; // 0x24c
};

struct UUIComponent_LeaderboardPlayer {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_mcTitle; // 0x128
	ObjectProperty m_mcPosition; // 0x130
	ObjectProperty m_mcWins; // 0x138
	ObjectProperty m_mcLosses; // 0x140
	ObjectProperty m_mcScore; // 0x148
	ObjectProperty m_mcRegion; // 0x150
	ObjectProperty m_mcChampion; // 0x158
	ObjectProperty m_mcChampionIcon; // 0x160
	ObjectProperty m_mcChampionFrame; // 0x168
	ObjectProperty m_FrameButton; // 0x170
};

struct USeqAct_MultiplyFloat {
	float ValueA; // 0x108
	float ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct ATgStaticMeshActor_TeamColor {
	int32_t nTaskForce; // 0x2a4
	FName TeamColoringParameterName; // 0x2a8
	char bInvertColoringParameter : 1; // 0x2b0
	char bInstancedAllMaterials : 1; // 0x2b0
	char bFriendlyWithLocalPlayer; // 0x2b4
	TArray<ObjectProperty> InitialMaterialList; // 0x2b8
};

struct USkelControlFootPlacement {
	float FootOffset; // 0x12c
	EAxis FootUpAxis; // 0x130
	FRotator FootRotOffset; // 0x134
	char bInvertFootUpAxis : 1; // 0x140
	char bOrientFootToGround : 1; // 0x140
	char bOnlyEnableForUpAdjustment : 1; // 0x140
	char m_bManuallyOverrideEffectorLocation : 1; // 0x140
	char m_bUseCachedFootOffset : 1; // 0x140
	float MaxUpAdjustment; // 0x144
	float MaxDownAdjustment; // 0x148
	float MaxFootOrientAdjust; // 0x14c
	FVector m_vCachedFootOffset; // 0x150
};

struct ATgLootManager {
	TArray<int32_t> m_SlotLoot; // 0x280
	TArray<char> m_SlotChosen; // 0x290
	TArray<ObjectProperty> m_CachedTables; // 0x2a0
	int32_t m_nChosenCount; // 0x2b0
	TArray<int32_t> m_LootTables; // 0x2b4
	TArray<int32_t> m_SlotTables; // 0x2c4
	TArray<char> m_SlotExceptions; // 0x2d4
	int32_t m_nShardDropCount; // 0x2e4
	float m_fLootSpawnMinVelocity; // 0x2e8
	float m_fLootSpawnMaxVelocity; // 0x2ec
	float m_fLootSpawnMinZVelocity; // 0x2f0
	float m_fLootSpawnMaxZVelocity; // 0x2f4
	float m_fLootSpawnAngle; // 0x2f8
	TArray<FPendingLoot> m_PendingLootList; // 0x2fc
	float m_fLastPendingLootSpawnTimestamp; // 0x30c
	float m_fPendingLootSpawnFrequency; // 0x310
	char m_bLTEDisableLootArmorPotions : 1; // 0x314
	char m_bLTEDisableLootHealingPotions : 1; // 0x314
	char m_bLTEDisableLootWeapons : 1; // 0x314
	char m_bLTEDisableLootSupportAbilities : 1; // 0x314
	char m_bLTEDisableLootOffensiveAbilities : 1; // 0x314
	char m_bLTEDisableLootMovementAbilities : 1; // 0x314
	char m_bLTEDisableLootRunes : 1; // 0x314
	char m_bLTESingleWeaponLimit : 1; // 0x314
	char m_bLTESingleSupportAbilityLimit : 0; // 0x314
	char m_bLTESingleOffensiveAbilityLimit : 0; // 0x314
	char m_bLTESingleMovementAbilityLimit : 0; // 0x314
	int32_t m_nLTESingleWeaponType; // 0x318
	int32_t m_nLTESingleSupportAbilityType; // 0x31c
	int32_t m_nLTESingleOffensiveAbilityType; // 0x320
	int32_t m_nLTESingleMovementAbilityType; // 0x324
	FMultiMap_Mirror m_CachedItemSubtypeLookup; // 0x328
};

struct ATgDevice_VanguardUlt {
	float m_fGrabUpdateTimer; // 0xb94
	float m_fGrabUpdateDuration; // 0xb98
	float m_fJoinDuration; // 0xb9c
};

struct USeqAct_ToggleCinematicMode {
	char bDisableMovement : 1; // 0x108
	char bDisableTurning : 1; // 0x108
	char bHidePlayer : 1; // 0x108
	char bDisableInput : 1; // 0x108
	char bHideHUD : 1; // 0x108
	char bDeadBodies : 1; // 0x108
	char bDroppedPickups : 1; // 0x108
};

struct UMobileMenuObject {
	char bHasBeenInitialized : 1; // 0x60
	char bRelativeLeft : 1; // 0x60
	char bRelativeTop : 1; // 0x60
	char bRelativeWidth : 1; // 0x60
	char bRelativeHeight : 1; // 0x60
	char bApplyGlobalScaleLeft : 1; // 0x60
	char bApplyGlobalScaleTop : 1; // 0x60
	char bApplyGlobalScaleWidth : 1; // 0x60
	char bApplyGlobalScaleHeight : 0; // 0x60
	char bHeightRelativeToWidth : 0; // 0x60
	char bXOffsetIsActual : 0; // 0x60
	char bYOffsetIsActual : 0; // 0x60
	char bIsActive : 0; // 0x60
	char bIsHidden : 0; // 0x60
	char bIsTouched : 0; // 0x60
	char bIsHighlighted : 0; // 0x60
	char bTellSceneBeforeRendering : 0; // 0x60
	float Left; // 0x64
	float Top; // 0x68
	float Width; // 0x6c
	float Height; // 0x70
	float InitialLeft; // 0x74
	float InitialTop; // 0x78
	float InitialWidth; // 0x7c
	float InitialHeight; // 0x80
	float AuthoredGlobalScale; // 0x84
	float TopLeeway; // 0x88
	float BottomLeeway; // 0x8c
	float LeftLeeway; // 0x90
	float RightLeeway; // 0x94
	float XOffset; // 0x98
	float YOffset; // 0x9c
	FString Tag; // 0xa0
	ObjectProperty InputOwner; // 0xb0
	float Opacity; // 0xb8
	ObjectProperty OwnerScene; // 0xbc
	FString RelativeToTag; // 0xc4
	ObjectProperty RelativeTo; // 0xd4
};

struct UTgInventoryObject_Listen_MirrorDamageToHealBlock {
	ObjectProperty m_CachedFiremode; // 0xc8
};

struct UTgAIBehaviorAction_MoveBase {
	char bSubtractPawnRadius : 1; // 0x94
	char bSubtractTargetPawnRadius : 1; // 0x94
	char bLookAtTarget : 1; // 0x94
	char bMustHaveLOS : 1; // 0x94
	float MoveTolerance; // 0x98
};

struct UUIComponent_OptionEntryText {
	ObjectProperty m_pTextInput; // 0x150
};

struct USeqAct_AkPostEvent {
	int32_t Signal; // 0x120
	ObjectProperty Event; // 0x124
};

struct UGFxRawData {
	TArray<char> RawData; // 0x60
	TArray<FString> ReferencedSwfs; // 0x70
	TArray<ObjectProperty> References; // 0x80
	TArray<ObjectProperty> UserReferences; // 0x90
};

struct UTgBrowserManager {
	FString URLGold; // 0x60
	FString URLAlert; // 0x70
	FString URLStore; // 0x80
	FString URLBooster; // 0x90
	FString URLSupport; // 0xa0
	FString URLProfile; // 0xb0
	FString URLRedirect; // 0xc0
	FString URLActivateKey; // 0xd0
	FString URLCreateAccount; // 0xe0
	FString URLRecoverPassword; // 0xf0
	FString URLRecoverUsername; // 0x100
	FString URLGodPack; // 0x110
	FString URLRanked; // 0x120
	FString URLFacebookPromo; // 0x130
	FString URLTwitterPromo; // 0x140
	FString URLRecruitPromo; // 0x150
	FString URLPlayerStats; // 0x160
	FString URLTwitchSignup; // 0x170
	FString URLTwitchHelp; // 0x180
	FString URLLaunchTournament; // 0x190
	FString URLLinkAccount; // 0x1a0
	ObjectProperty m_pContainer; // 0x1b0
};

struct UPComInputLightingEffect {
	char bAllowLogitechSdk : 1; // 0x60
	char bLogitechSdkInitialized : 1; // 0x60
	char bLatchedSystemSettingsSdkAllowed : 1; // 0x60
	TArray<FPComInputLightingPreset> Presets; // 0x64
	FMap_Mirror PresetsMap; // 0x74
	TArray<FPComActiveInputLightingPreset> ActivePresets; // 0xbc
	FLinearColor BlendFromColor; // 0xcc
	float BlendPercent; // 0xdc
};

struct UPComMusicThemePlayer {
	FPointer VfTable_FTickableObject; // 0x60
	FString MusicThemePath; // 0x68
	ObjectProperty MusicTheme; // 0x78
	ComponentProperty MusicComp; // 0x80
	ObjectProperty MusicSyncActor; // 0x88
	FName LastMusicEvent; // 0x90
	FMusicTrackStruct CurrentMusicTrack; // 0x98
	float CurrentMusicTrackStartTime; // 0xc4
	float CurrentMusicTrackDuration; // 0xc8
};

struct UTgAnimBlendByViewTarget {
	ObjectProperty m_TgPawn; // 0x168
	ObjectProperty m_LocalPlayerController; // 0x170
};

struct UHavokNavigationRenderingComponent {
	char bDrawEdges : 1; // 0x24c
};

struct UMcpUserManagerBase {
	FString McpUserManagerClassName; // 0x78
	DelegateProperty __OnRegisterUserComplete__Delegate; // 0x88
	DelegateProperty __OnQueryUsersComplete__Delegate; // 0x98
	DelegateProperty __OnDeleteUserComplete__Delegate; // 0xa8
};

struct UMaterialExpressionTransform {
	FExpressionInput Input; // 0xb0
	EMaterialVectorCoordTransformSource TransformSourceType; // 0xe4
	EMaterialVectorCoordTransform TransformType; // 0xe5
};

struct UTgMinimapManager {
	TgMapTeam m_LocalTeam; // 0x60
	TMap<None, None> m_EntityMap; // 0x64
	char m_bShouldDisableVisionRange : 1; // 0xac
	char m_bSkipWorldGeometryLOS : 1; // 0xac
	char m_bRequiresVisionUpdate : 1; // 0xac
	float m_fFogOfWarAreaRevealTime; // 0xb0
	float m_fUpdateTimer; // 0xb4
	float m_fLastEntityUpdateTime; // 0xb8
	TArray<ObjectProperty> m_ReferencedRepInfos; // 0xbc
};

struct UTgAIBehaviorAction_MoveToDeployable {
	int32_t DeployableId; // 0x9c
	char bMustBeEnemy : 1; // 0xa0
	char bIgnoreInsideCollision : 1; // 0xa0
	char bIgnoreTaskforce : 1; // 0xa0
};

struct UTgDeviceForm_DemonStim {
	float m_fTransitionTime; // 0x2bc
};

struct ATgDevice_ChainSequence {
	int32_t m_nChainCount; // 0xaec
	float m_fChainResetTimer; // 0xaf0
	float m_fChainResetDuration; // 0xaf4
};

struct UTgInvListener_ActiveWhileWeaponSwap {
	char m_bActivateWhileInhandActive : 1; // 0xc8
	char m_bIsActive : 1; // 0xc8
};

struct UTgAnimNotify_InterpolateMorphTargetWeight {
	FName MorphNodePoseName; // 0x68
	float MorphTargetWeight; // 0x70
	InterruptMorphTargetBehavior OnInterruptBehavior; // 0x74
	float InterruptMorphTargetWeight; // 0x78
	float InitialMorphTargetWeight; // 0x7c
};

struct UUIDataStore_Registry {
	TArray<FRegistryKeyValuePair> RegistryData; // 0x98
};

struct USeqAct_DrawText {
	float DisplayTimeSeconds; // 0x108
	char bDisplayOnObject : 1; // 0x10c
	FKismetDrawTextInfo DrawTextInfo; // 0x110
};

struct ATgDevice_Impasse {
	float r_fTremorsCooldownReduction; // 0xaec
	float m_fCachedWallHealthPercent; // 0xaf0
};

struct UTgAIBehaviorCondition_IsDecoyState {
	char DecoyState; // 0x98
};

struct UParticleModuleAccelerationBase {
	char bAlwaysInWorldSpace : 1; // 0x68
};

struct ARB_Thruster {
	char bThrustEnabled : 1; // 0x280
	float ThrustStrength; // 0x284
};

struct USeqAct_PlayFaceFXAnim {
	ObjectProperty FaceFXAnimSetRef; // 0x108
	FString FaceFXGroupName; // 0x110
	FString FaceFXAnimName; // 0x120
	ObjectProperty SoundCueToPlay; // 0x130
	ObjectProperty AkEventToPlay; // 0x138
};

struct UTgAchievement_Damage {
	float m_fDamageDealt; // 0x90
};

struct ATgCollisionProxy_Mesh {
	ComponentProperty m_MeshComponent; // 0x2b4
};

struct UTgAnimNodeBlendByAFK {
	ObjectProperty PawnOwner; // 0x168
};

struct UUIData_BattlePassLevel {
	int32_t m_nLevel; // 0x60
	ObjectProperty m_pLTI; // 0x64
	char m_bUnlocked : 1; // 0x6c
	char m_bPremium : 1; // 0x6c
};

struct USeqAct_CameraLookAt {
	char bAffectCamera : 1; // 0x108
	char bAlwaysFocus : 1; // 0x108
	char bAdjustCamera : 1; // 0x108
	char bTurnInPlace : 1; // 0x108
	char bIgnoreTrace : 1; // 0x108
	char bAffectHead : 1; // 0x108
	char bRotatePlayerWithCamera : 1; // 0x108
	char bToggleGodMode : 1; // 0x108
	char bLeaveCameraRotation : 0; // 0x108
	char bDisableInput : 0; // 0x108
	char bUsedTimer : 0; // 0x108
	char bCheckLineOfSight : 0; // 0x108
	FVector2D InterpSpeedRange; // 0x10c
	FVector2D InFocusFOV; // 0x114
	FName FocusBoneName; // 0x11c
	FString TextDisplay; // 0x124
	float TotalTime; // 0x134
	float CameraFOV; // 0x138
	float RemainingTime; // 0x13c
};

struct UTextureMovie {
	int32_t SizeX; // 0x100
	int32_t SizeY; // 0x104
	EPixelFormat Format; // 0x108
	TextureAddress AddressX; // 0x109
	TextureAddress AddressY; // 0x10a
	EMovieStreamSource MovieStreamSource; // 0x10b
	UCodecMovie* DecoderClass; // 0x10c
	ObjectProperty Decoder; // 0x114
	char Paused : 1; // 0x11c
	char Stopped : 1; // 0x11c
	char Looping : 1; // 0x11c
	char ResetOnLastFrame : 1; // 0x11c
	char AutoPlay : 1; // 0x11c
	FUntypedBulkData_Mirror Data; // 0x120
	FPointer ReleaseCodecFence; // 0x160
};

struct UTgInventoryObject_Listen_BigGame {
	float m_fDisengageHitTime; // 0xc8
	ObjectProperty m_DisengageHitTarget; // 0xcc
};

struct UUIHudCenter {
	int32_t m_nReticle; // 0x244
	int32_t m_nStuckCount; // 0x248
	int32_t m_nAmmoCurrent; // 0x24c
	int32_t m_nAmmoClipSize; // 0x250
	int32_t m_nReticleColor; // 0x254
	char m_bCharge : 1; // 0x258
	char m_bSprinting : 1; // 0x258
	char m_bShouldShow : 1; // 0x258
	char m_bChangeReticleOverEnemy : 1; // 0x258
	char m_bChargeAmmo : 1; // 0x258
	char m_bReticleBloom : 1; // 0x258
	char m_bReticleVisible : 1; // 0x258
	char m_bReticleAccessoryVisible : 1; // 0x258
	char m_bDisableCombatLog : 0; // 0x258
	char m_bRecharging : 0; // 0x258
	char m_bWasHiddenOnTick : 0; // 0x258
	char m_bWasReloading : 0; // 0x258
	char m_bResurrecting : 0; // 0x258
	char m_bResurrectionFailed : 0; // 0x258
	char m_bShowFuel : 0; // 0x258
	char m_bHitWarning3pVisible : 0; // 0x258
	char m_bEnteredCatapult : 0; // 0x258
	float m_fReloadTime; // 0x25c
	float m_fReloadTimer; // 0x260
	float m_fChargePercent; // 0x264
	float m_fResolutionModX; // 0x268
	float m_fResolutionModY; // 0x26c
	float m_fResurrectionTimer; // 0x270
	float m_fTotalResurrectionTime; // 0x274
	ObjectProperty m_mcCharge; // 0x278
	ObjectProperty m_mcChargeMask; // 0x280
	ObjectProperty m_mcReticle; // 0x288
	ObjectProperty m_mcCircleReticle; // 0x290
	ObjectProperty m_mcCicleReticleAccuracy[0x2]; // 0x298
	ObjectProperty m_mcCrossReticle; // 0x2a8
	ObjectProperty m_mcCrossReticleUp; // 0x2b0
	ObjectProperty m_mcCrossReticleLeft; // 0x2b8
	ObjectProperty m_mcCrossReticleRight; // 0x2c0
	ObjectProperty m_mcCrossReticleDown; // 0x2c8
	ObjectProperty m_mcDotReticle; // 0x2d0
	ObjectProperty m_mcWideReticle; // 0x2d8
	ObjectProperty m_mcShaLinReticle; // 0x2e0
	ObjectProperty m_mcShaLinReticleDraw; // 0x2e8
	ObjectProperty m_mcShaLinImpalerReticle; // 0x2f0
	ObjectProperty m_mcMaeveReticle; // 0x2f8
	ObjectProperty m_mcMaevePounceLIRecticle; // 0x300
	ObjectProperty m_mcMaevePounceLORecticle; // 0x308
	ObjectProperty m_mcMaevePounceRIRecticle; // 0x310
	ObjectProperty m_mcMaevePounceRORecticle; // 0x318
	ObjectProperty m_mcMinigunReticle; // 0x320
	ObjectProperty m_mcMinigunReticleAccuracy[0x2]; // 0x328
	ObjectProperty m_mcMinigunReticleFill; // 0x338
	ObjectProperty m_mcMinigunReticleMask; // 0x340
	ObjectProperty m_mcCatapultReticle; // 0x348
	ObjectProperty m_mcCatapultAim; // 0x350
	ObjectProperty m_mcHitWarning3p; // 0x358
	ObjectProperty m_mcTargeter; // 0x360
	ObjectProperty m_mcHitMarker; // 0x368
	ObjectProperty m_mcHitMarkerTicks[0x4]; // 0x370
	ObjectProperty m_mcAccuracy; // 0x390
	ObjectProperty m_mcRecharge; // 0x398
	ObjectProperty m_mcRechargeCD; // 0x3a0
	ObjectProperty m_mcStuck; // 0x3a8
	ObjectProperty m_mcAmmoNew; // 0x3b0
	ObjectProperty m_mcAmmoNewCharge; // 0x3b8
	ObjectProperty m_mcAmmoNewCurrent; // 0x3c0
	ObjectProperty m_mcAmmoNewClipSize; // 0x3c8
	ObjectProperty m_mcAmmoNewChargeMask; // 0x3d0
	ObjectProperty m_mcResurrecting; // 0x3d8
	ObjectProperty m_mcResurrectingText; // 0x3e0
	ObjectProperty m_mcResurrectingTimer; // 0x3e8
	int32_t m_eCombatInfoType; // 0x3f0
	float m_fGlobalChatTimer; // 0x3f4
	ObjectProperty m_Reward; // 0x3f8
	ObjectProperty m_RewardName; // 0x400
	ObjectProperty m_RewardAmount; // 0x408
	ObjectProperty m_mcGlobalChat; // 0x410
	ObjectProperty m_mcGlobalChatTF; // 0x418
	ObjectProperty m_mcKillingBlow; // 0x420
	ObjectProperty m_mcDamage; // 0x428
	ObjectProperty m_Projectiles; // 0x430
	FHudProjectile m_ProjectilePointers[0xa]; // 0x438
	TArray<FHudMarker> m_DamageMarkersLight; // 0x6b8
	TArray<int32_t> m_DamageMarkerFreelistLight; // 0x6c8
	TArray<FHudMarker> m_DamageMarkersMedium; // 0x6d8
	TArray<int32_t> m_DamageMarkerFreelistMedium; // 0x6e8
	TArray<FHudMarker> m_DamageMarkersHeavy; // 0x6f8
	TArray<int32_t> m_DamageMarkerFreelistHeavy; // 0x708
	TArray<FHudMarker> m_DamageMarkersAOEMedium; // 0x718
	TArray<int32_t> m_DamageMarkerFreelistAOEMedium; // 0x728
	TArray<FHudMarker> m_DamageMarkersAOEHeavy; // 0x738
	TArray<int32_t> m_DamageMarkerFreelistAOEHeavy; // 0x748
	ObjectProperty m_mcFuel; // 0x758
	ObjectProperty m_mcFuelBar; // 0x760
	ObjectProperty m_mcFuelMask; // 0x768
	ObjectProperty m_mcReload; // 0x770
	ObjectProperty m_mcReloadTF; // 0x778
	ObjectProperty m_mcReloadAnim; // 0x780
	ObjectProperty m_HealFeed; // 0x788
	TArray<FMessageClip> m_Messages; // 0x790
	float m_fClient3pReloadOffset; // 0x7a0
	float m_fHitWarning3pMoveSpeed; // 0x7a4
	float m_fHitWarning3pMoveCheckDistance; // 0x7a8
	float m_fHitWarning3pScale; // 0x7ac
	FColor m_cHitWarning3pColor; // 0x7b0
	FColor m_cHitWarning3pReticleColor; // 0x7b4
	float m_fHitWarning3pThreshold; // 0x7b8
	float m_fHitWarning3pThreshold2d; // 0x7bc
	FVector2D m_vHitWarning3pScalingSize; // 0x7c0
	FVector2D m_vHitWarning3pScalingRange; // 0x7c8
	float m_fHitWarning3pScalingSpeed; // 0x7d0
	FHitMarkerInfo m_HitMarker; // 0x7d4
	float m_fMaxDamageTimestamp; // 0x7fc
	float m_fDamageDealtRTPCSustainDuration; // 0x800
	float m_fChampionHitTimestamp; // 0x804
	float m_fChampionCountRTPCSustainDuration; // 0x808
	TArray<FDamageInstance> m_AccumulatedDamageInstances; // 0x80c
	float m_fDamageAccumulationWindow; // 0x81c
	ObjectProperty m_GameplayCurves; // 0x820
};

struct ATgSplineActor_Payload {
	char m_bReached : 1; // 0x2f0
	float m_fSecondsToAdd; // 0x2f4
};

struct UAnimNodeAimOffset {
	FVector2D Aim; // 0x114
	FVector2D AngleOffset; // 0x11c
	char bForceAimDir : 1; // 0x124
	char bBakeFromAnimations : 1; // 0x124
	char bPassThroughWhenNotRendered : 1; // 0x124
	char bSynchronizeNodesInEditor : 1; // 0x124
	int32_t PassThroughAtOrAboveLOD; // 0x128
	EAnimAimDir ForcedAimDir; // 0x12c
	TArray<char> RequiredBones; // 0x130
	TArray<char> AimCpntIndexLUT; // 0x140
	ObjectProperty TemplateNode; // 0x150
	TArray<FAimOffsetProfile> Profiles; // 0x158
	int32_t CurrentProfileIndex; // 0x168
};

struct UParticleEmitter {
	FName EmitterName; // 0x60
	int32_t m_nActivationMask; // 0x68
	FParticleChannelContainer m_ParticleChannels; // 0x6c
	int32_t SubUVDataOffset; // 0x70
	EEmitterRenderMode EmitterRenderMode; // 0x74
	TArray<ObjectProperty> LODLevels; // 0x78
	char ConvertedModules : 1; // 0x88
	char bCollapsed : 1; // 0x88
	char bIsSoloing : 1; // 0x88
	char bCookedOut : 1; // 0x88
	int32_t PeakActiveParticles; // 0x8c
	int32_t InitialAllocationCount; // 0x90
	float MediumDetailSpawnRateScale; // 0x94
};

struct UTgSeqAct_SpawnProjectile {
	AProjectile* ProjectileClass; // 0x108
};

struct UTgInvListener_ConsecutiveInhandHits {
	TArray<FCIHStack> s_stacks; // 0xc8
	ObjectProperty s_pLastTargetHit; // 0xd8
};

struct UTgAimAccelerationCurves {
	FName SettingsName; // 0x60
	float MaxAccelMultiplierX; // 0x68
	float MaxAccelMultiplierY; // 0x6c
	FRawDistributionFloat AimSpeedX; // 0x70
	FRawDistributionFloat AimAccelX; // 0x94
	FRawDistributionFloat AimSpeedY; // 0xb8
	FRawDistributionFloat AimAccelY; // 0xdc
};

struct UTgDeviceFire_DeployOnTarget {
	ObjectProperty m_TargetHit; // 0x270
	char m_bDeployAtFeet : 1; // 0x278
};

struct USoundNodeOscillator {
	char bModulateVolume : 1; // 0x74
	char bModulatePitch : 1; // 0x74
	float AmplitudeMin; // 0x78
	float AmplitudeMax; // 0x7c
	float FrequencyMin; // 0x80
	float FrequencyMax; // 0x84
	float OffsetMin; // 0x88
	float OffsetMax; // 0x8c
	float CenterMin; // 0x90
	float CenterMax; // 0x94
	FRawDistributionFloat Amplitude; // 0x98
	FRawDistributionFloat Frequency; // 0xbc
	FRawDistributionFloat Offset; // 0xe0
	FRawDistributionFloat Center; // 0x104
};

struct UTgAnimNodeToggleWithTransition {
	float m_fTransitionStartTime; // 0x168
	float m_fTransitionTimeRemaining; // 0x16c
};

struct UUIDataStore_OnlineStats {
	TArray<UOnlineStatsRead*> StatsReadClasses; // 0x98
	FName StatsReadName; // 0xa8
	FPlayerNickMetaData PlayerNickData; // 0xb0
	FRankMetaData RankNameMetaData; // 0xc8
	FName TotalRowsName; // 0xe0
	TArray<ObjectProperty> StatsReadObjects; // 0xe8
	ObjectProperty StatsRead; // 0xf8
	EStatsFetchType CurrentReadType; // 0x100
	TScriptInterface<Class> StatsInterface; // 0x104
	TScriptInterface<Class> PlayerInterface; // 0x114
};

struct UTgAIBehaviorAction_UseActive {
	EActiveType ActiveType; // 0x94
};

struct UOnlineGameSettings {
	int32_t NumPublicConnections; // 0xa0
	int32_t NumPrivateConnections; // 0xa4
	int32_t NumOpenPublicConnections; // 0xa8
	int32_t NumOpenPrivateConnections; // 0xac
	FQWord ServerNonce; // 0xb0
	FString ServiceConfigId; // 0xb8
	FString SessionTemplateName; // 0xc8
	FString MatchHopperName; // 0xd8
	FString SessionGuid; // 0xe8
	FString SessionHandle; // 0xf8
	TArray<FUniqueNetId> ReservedMembers; // 0x108
	char bShouldAdvertise : 1; // 0x118
	char bIsLanMatch : 1; // 0x118
	char bUsesStats : 1; // 0x118
	char bAllowJoinInProgress : 1; // 0x118
	char bPublic : 1; // 0x118
	char bAllowInvites : 1; // 0x118
	char bUsesPresence : 1; // 0x118
	char bAllowJoinViaPresence : 1; // 0x118
	char bAllowJoinViaPresenceFriendsOnly : 0; // 0x118
	char bUsesArbitration : 0; // 0x118
	char bAntiCheatProtected : 0; // 0x118
	char bWasFromInvite : 0; // 0x118
	char bIsDedicated : 0; // 0x118
	char bHasSkillUpdateInProgress : 0; // 0x118
	char bShouldShrinkArbitratedSessions : 0; // 0x118
	FString OwningPlayerName; // 0x11c
	FUniqueNetId OwningPlayerId; // 0x12c
	int32_t PingInMs; // 0x134
	float MatchQuality; // 0x138
	EOnlineGameState GameState; // 0x13c
	int32_t BuildUniqueId; // 0x140
};

struct USeqEvent_MobileRawInput {
	int32_t TouchIndex; // 0x128
	int32_t TouchpadIndex; // 0x12c
	float TouchLocationX; // 0x130
	float TouchLocationY; // 0x134
	float TimeStamp; // 0x138
};

struct UImageBasedReflectionComponent {
	char bEnabled : 1; // 0x310
	char bTwoSided : 1; // 0x310
	ObjectProperty ReflectionTexture; // 0x314
	FLinearColor ReflectionColor; // 0x31c
};

struct UTgAIBehaviorCondition_NumGodsInLanePusherRadius {
	char bGodsMustBeEnemy : 1; // 0x9c
	int32_t GodThreshold; // 0xa0
};

struct UTgSeqAct_PlayAnnouncement {
	char bPlayImmediately : 1; // 0x108
	char bFlushOthers : 1; // 0x108
	int32_t SoundIndex; // 0x10c
	ObjectProperty OptionalCue; // 0x110
};

struct UAnimNotify_PlayFaceFXAnim {
	ObjectProperty FaceFXAnimSetRef; // 0x68
	FString GroupName; // 0x70
	FString AnimName; // 0x80
	ObjectProperty SoundCueToPlay; // 0x90
	ObjectProperty AkEventToPlay; // 0x98
	char bOverridePlayingAnim : 1; // 0xa0
	float PlayFrequency; // 0xa4
};

struct UUISummary {
	int32_t m_nEntry; // 0x244
	int32_t m_nHover; // 0x248
	int32_t m_nOffset; // 0x24c
	int32_t m_nClassXP; // 0x250
	int32_t m_nBattleXP; // 0x254
	int32_t m_nQuestsComplete; // 0x258
	int32_t m_nBreakdownIndex; // 0x25c
	char m_eState; // 0x260
	char m_bTesting : 1; // 0x264
	char m_bTutorial : 1; // 0x264
	char m_bProgressShown : 1; // 0x264
	float m_fStateTimer; // 0x268
	float m_fDelayedTransitionTimer; // 0x26c
	float m_fBreakdownTimer; // 0x270
	TArray<int32_t> m_FreeList; // 0x274
	TArray<int32_t> m_ItemList; // 0x284
	ObjectProperty m_mcSummary; // 0x294
	ObjectProperty m_mcSummaryLine; // 0x29c
	ObjectProperty m_mcSummaryName; // 0x2a4
	ObjectProperty m_mcSummaryRank; // 0x2ac
	ObjectProperty m_mcSummaryRankIcon; // 0x2b4
	ObjectProperty m_mcSummaryScore; // 0x2bc
	ObjectProperty m_mcSummaryScoreName; // 0x2c4
	ObjectProperty m_mcSummaryScoreDesc; // 0x2cc
	ObjectProperty m_mcSummaryEntry[0x5]; // 0x2d4
	ObjectProperty m_mcSummaryEntryName[0x5]; // 0x2fc
	ObjectProperty m_mcSummaryEntryDesc[0x5]; // 0x324
	ObjectProperty m_mcSummaryCharacter; // 0x34c
	ObjectProperty m_mcSummaryClass; // 0x354
	ObjectProperty m_mcSummaryClassIcon; // 0x35c
	ObjectProperty m_mcSummaryClassName; // 0x364
	ObjectProperty m_mcSummaryClassDesc; // 0x36c
	ObjectProperty m_mcSummaryClassType; // 0x374
	ObjectProperty m_mcSummaryClassNext; // 0x37c
	ObjectProperty m_mcSummaryClassNextIcon; // 0x384
	ObjectProperty m_mcSummaryClassNextItem; // 0x38c
	ObjectProperty m_mcSummaryClassNextItemFrame; // 0x394
	ObjectProperty m_mcSummaryClassNextItemTexture; // 0x39c
	ObjectProperty m_mcSummaryClassProgress; // 0x3a4
	ObjectProperty m_mcSummaryClassProgressTip; // 0x3ac
	ObjectProperty m_mcSummaryClassProgressFill; // 0x3b4
	ObjectProperty m_mcSummaryClassProgressChange; // 0x3bc
	ObjectProperty m_mcSummaryBattle; // 0x3c4
	ObjectProperty m_mcSummaryBattleIcon; // 0x3cc
	ObjectProperty m_mcSummaryBattleIconLevelA; // 0x3d4
	ObjectProperty m_mcSummaryBattleIconLevelB; // 0x3dc
	ObjectProperty m_mcSummaryBattleIconLevelC; // 0x3e4
	ObjectProperty m_mcSummaryBattleName; // 0x3ec
	ObjectProperty m_mcSummaryBattleDesc; // 0x3f4
	ObjectProperty m_mcSummaryBattleFree; // 0x3fc
	ObjectProperty m_mcSummaryBattlePaid; // 0x404
	ObjectProperty m_mcSummaryBattleNext; // 0x40c
	ObjectProperty m_mcSummaryBattleNextFree; // 0x414
	ObjectProperty m_mcSummaryBattleNextPaid; // 0x41c
	ObjectProperty m_mcSummaryBattleProgress; // 0x424
	ObjectProperty m_mcSummaryBattleProgressTip; // 0x42c
	ObjectProperty m_mcSummaryBattleProgressFill; // 0x434
	ObjectProperty m_mcSummaryBattleProgressChange; // 0x43c
	ObjectProperty m_mcSummaryQuests; // 0x444
	ObjectProperty m_mcSummaryQuestsTF; // 0x44c
	ObjectProperty m_mcSummaryRewards; // 0x454
	ObjectProperty m_mcSummaryRewardsIcons[0x3]; // 0x45c
	ObjectProperty m_mcUnlock; // 0x474
	ObjectProperty m_mcUnlockName; // 0x47c
	ObjectProperty m_mcUnlockDesc; // 0x484
	ObjectProperty m_mcUnlockRotate; // 0x48c
	ObjectProperty m_mcUnlockHoverName; // 0x494
	ObjectProperty m_mcUnlockHoverDesc; // 0x49c
	ObjectProperty m_mcUnlockHeader; // 0x4a4
	ObjectProperty m_mcUnlockHeaderName; // 0x4ac
	ObjectProperty m_mcUnlockHeaderDesc; // 0x4b4
	ObjectProperty m_mcUnlockHeaderRank; // 0x4bc
	ObjectProperty m_mcUnlockHeaderRankLevel; // 0x4c4
	ObjectProperty m_mcUnlockHeaderRankLevelA; // 0x4cc
	ObjectProperty m_mcUnlockHeaderRankLevelB; // 0x4d4
	ObjectProperty m_mcUnlockHeaderRankLevelC; // 0x4dc
	ObjectProperty m_mcUnlockArrow[0x2]; // 0x4e4
	ObjectProperty m_mcUnlockPrompt[0x2]; // 0x4f4
	ObjectProperty m_mcUnlockFree[0x5]; // 0x504
	ObjectProperty m_mcUnlockFreeFrame[0x5]; // 0x52c
	ObjectProperty m_mcUnlockFreeRarity[0x5]; // 0x554
	ObjectProperty m_mcUnlockFreeTexture[0x5]; // 0x57c
	ObjectProperty m_mcUnlockItem[0x5]; // 0x5a4
	ObjectProperty m_mcUnlockItemFrame[0x5]; // 0x5cc
	ObjectProperty m_mcUnlockItemRarity[0x5]; // 0x5f4
	ObjectProperty m_mcUnlockItemTexture[0x5]; // 0x61c
	ObjectProperty m_pItemPreviewStack; // 0x644
	ObjectProperty m_pSummaryHomeButton; // 0x64c
	ObjectProperty m_pSummaryHomeButtonKey; // 0x654
	ObjectProperty m_pSummaryNextButton; // 0x65c
	ObjectProperty m_pSummaryNextButtonKey; // 0x664
	ObjectProperty m_pUnlockPurchaseButton; // 0x66c
	ObjectProperty m_pUnlockPurchaseButtonKey; // 0x674
	ObjectProperty m_pUnlockNextButton; // 0x67c
	ObjectProperty m_pUnlockNextButtonKey; // 0x684
	ObjectProperty m_pTalentNextButton; // 0x68c
	ObjectProperty m_pTalentNextButtonKey; // 0x694
	ObjectProperty m_pLevelNextButton; // 0x69c
	ObjectProperty m_pLevelNextButtonKey; // 0x6a4
	ObjectProperty m_mcLevel; // 0x6ac
	ObjectProperty m_mcLevelIcon; // 0x6b4
	ObjectProperty m_mcLevelLine; // 0x6bc
	ObjectProperty m_mcLevelName; // 0x6c4
	ObjectProperty m_mcLevelDesc; // 0x6cc
	ObjectProperty m_mcLevelQueue; // 0x6d4
	ObjectProperty m_mcLevelQueueName; // 0x6dc
	ObjectProperty m_mcLevelQueueDesc; // 0x6e4
	ObjectProperty m_mcLevelIconTexture; // 0x6ec
	ObjectProperty m_mcTalent; // 0x6f4
	ObjectProperty m_mcTalentLine; // 0x6fc
	ObjectProperty m_mcTalentName; // 0x704
	ObjectProperty m_mcTalentDesc; // 0x70c
	ObjectProperty m_mcTalentInfo; // 0x714
	ObjectProperty m_mcTalentInfoIcon; // 0x71c
	ObjectProperty m_mcTalentInfoName; // 0x724
	ObjectProperty m_mcTalentInfoDesc; // 0x72c
	ObjectProperty m_mcTalentInfoType; // 0x734
	ObjectProperty m_mcTalentTitle; // 0x73c
	ObjectProperty m_mcTalentTitleFrame; // 0x744
	ObjectProperty m_mcTalentTitleTexture; // 0x74c
	ObjectProperty m_mcTalentPath; // 0x754
	FUINODESET m_mcTalentNodes[0x4]; // 0x75c
	FUITITLESET m_mcTitleNodes; // 0xdbc
	ObjectProperty m_pLevelGroup; // 0xf44
	ObjectProperty m_pTalentGroup; // 0xf4c
	ObjectProperty m_pUnlockGroup; // 0xf54
	ObjectProperty m_pSummaryGroup; // 0xf5c
	ObjectProperty m_pUnlockBumperLeft; // 0xf64
	ObjectProperty m_pUnlockBumperRight; // 0xf6c
	ObjectProperty m_pSummaryHomeAction; // 0xf74
	ObjectProperty m_pSummaryNextAction; // 0xf7c
	ObjectProperty m_pUnlockPurchaseAction; // 0xf84
	ObjectProperty m_pUnlockNextAction; // 0xf8c
	ObjectProperty m_pTalentNextAction; // 0xf94
	ObjectProperty m_pLevelNextAction; // 0xf9c
	ObjectProperty m_scEntry; // 0xfa4
	ObjectProperty m_scFlyin; // 0xfac
	ObjectProperty m_scNugget; // 0xfb4
};

struct ATrigger_LOS {
	TArray<ObjectProperty> PCsWithLOS; // 0x290
};

struct UDistributionFloatParameterBase {
	FName ParameterName; // 0x80
	float MinInput; // 0x88
	float MaxInput; // 0x8c
	float MinOutput; // 0x90
	float MaxOutput; // 0x94
	DistributionParamMode ParamMode; // 0x98
};

struct USeqAct_ActivateRemoteEvent {
	ObjectProperty Instigator; // 0x108
	FName EventName; // 0x110
	char bStatusIsOk : 1; // 0x118
};

struct ATgRepInfo_Game_RoyaleTournament {
	int32_t r_nFogCount; // 0x744
	char r_bInForgeStage : 1; // 0x748
	ObjectProperty r_pAllFogs[0x4]; // 0x74c
};

struct UParticleModule {
	char bSpawnModule : 1; // 0x60
	char bUpdateModule : 1; // 0x60
	char bFinalUpdateModule : 1; // 0x60
	char bCurvesAsColor : 1; // 0x60
	char b3DDrawMode : 1; // 0x60
	char bSupported3DDrawMode : 1; // 0x60
	char bEnabled : 1; // 0x60
	char bEditable : 1; // 0x60
	char LODDuplicate : 0; // 0x60
	char bSupportsRandomSeed : 0; // 0x60
	char bRequiresLoopingNotification : 0; // 0x60
	char LODValidity; // 0x64
};

struct UUIScene_UIBattlePassPurchase {
	ObjectProperty m_mcTitle; // 0x154
	ObjectProperty m_mcTimeRemaining; // 0x15c
	ObjectProperty m_pDLCList; // 0x164
	ObjectProperty m_pCloseButton; // 0x16c
	ObjectProperty m_grMain; // 0x174
};

struct ATgDevice_RespawnBeacon {
	ObjectProperty s_BeaconExit; // 0xaec
	char r_bHasBeacon : 1; // 0xaf4
};

struct UUIScene_UIBattlePassLevelUp {
	FPointer VfTable_IAcquisitionHandler; // 0x154
	int32_t m_nBPItemsShown; // 0x15c
	TArray<ObjectProperty> m_UnlockedItems; // 0x160
	ObjectProperty m_grGroup; // 0x170
	ObjectProperty m_mcIcon; // 0x178
	ObjectProperty m_mcTF0; // 0x180
	ObjectProperty m_mcTF1; // 0x188
	ObjectProperty m_mcRewardTF; // 0x190
	ObjectProperty m_pFreePassReward; // 0x198
	ObjectProperty m_mcPurchasePrompt; // 0x1a0
	ObjectProperty m_List; // 0x1a8
	ObjectProperty m_pCloseButton; // 0x1b0
	ObjectProperty m_pUpgradeButton; // 0x1b8
	ObjectProperty m_pEquipAllButton; // 0x1c0
	ObjectProperty m_mcCheckmark; // 0x1c8
};

struct ATgTrigger_Use {
	FString m_sDisplayText; // 0x290
	FString m_sInactiveText; // 0x2a0
	int32_t m_nInteractDistance; // 0x2b0
	char m_bAimToInteract : 1; // 0x2b4
	int32_t m_nDisplayMsgId; // 0x2b8
	int32_t m_nInactiveMsgId; // 0x2bc
};

struct ACoverLink {
	char GLOBAL_bUseSlotMarkers : 1; // 0x378
	char bDisabled : 1; // 0x378
	char bClaimAllSlots : 1; // 0x378
	char bAutoSort : 1; // 0x378
	char bAutoAdjust : 1; // 0x378
	char bCircular : 1; // 0x378
	char bLooped : 1; // 0x378
	char bPlayerOnly : 1; // 0x378
	char bDynamicCover : 0; // 0x378
	char bFractureOnTouch : 0; // 0x378
	char bDebug_FireLinks : 0; // 0x378
	char bDebug_ExposedLinks : 0; // 0x378
	char bDebug_CoverGen : 0; // 0x378
	char bDoAutoSlotDensityFixup : 0; // 0x378
	float LeanTraceDist; // 0x37c
	TArray<FCoverSlot> Slots; // 0x380
	TArray<FDynamicLinkInfo> DynamicLinkInfos; // 0x390
	TArray<ObjectProperty> Claims; // 0x3a0
	float InvalidateDistance; // 0x3b0
	float MaxFireLinkDist; // 0x3b4
	FVector CircularOrigin; // 0x3b8
	float CircularRadius; // 0x3c4
	float AlignDist; // 0x3c8
	float AutoCoverSlotInterval; // 0x3cc
	float StandHeight; // 0x3d0
	float MidHeight; // 0x3d4
	FVector StandingLeanOffset; // 0x3d8
	FVector CrouchLeanOffset; // 0x3e4
	FVector PopupOffset; // 0x3f0
	float SlipDist; // 0x3fc
	float TurnDist; // 0x400
	float DangerScale; // 0x404
	ObjectProperty NextCoverLink; // 0x408
	ECoverLocationDescription LocationDescription; // 0x410
};

struct UMeshBeaconHost {
	TArray<FClientMeshBeaconConnection> ClientConnections; // 0xa4
	TArray<FUniqueNetId> PendingPlayerConnections; // 0xb4
	FUniqueNetId OwningPlayerId; // 0xc4
	char bAllowBandwidthTesting : 1; // 0xcc
	int32_t ConnectionBacklog; // 0xd0
	DelegateProperty __OnReceivedClientConnectionRequest__Delegate; // 0xd4
	DelegateProperty __OnStartedBandwidthTest__Delegate; // 0xe4
	DelegateProperty __OnFinishedBandwidthTest__Delegate; // 0xf4
	DelegateProperty __OnAllPendingPlayersConnected__Delegate; // 0x104
	DelegateProperty __OnReceivedClientCreateNewSessionResult__Delegate; // 0x114
};

struct UParticleModuleVelocity_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb4
};

struct UActorFactoryActor {
	AActor* ActorClass; // 0x9c
};

struct UTgControlModule_Spectator {
	float RotationLimit; // 0x6c
	float SpectatorStallZ; // 0x70
	float SpectatorMinStallZ; // 0x74
};

struct AVolumeTimer {
	ObjectProperty V; // 0x280
};

struct UParticleModuleColorOverLife {
	FRawDistributionVector ColorOverLife; // 0x68
	FRawDistributionFloat AlphaOverLife; // 0x8c
	char bClampAlpha : 1; // 0xb0
};

struct ATgItemShopVolume {
	int32_t TaskforceIndex; // 0x2bc
};

struct AFracturedStaticMeshPart {
	float DestroyPartRadiusFactor; // 0x314
	ObjectProperty BaseFracturedMeshActor; // 0x318
	char bHasBeenRecycled : 1; // 0x320
	char bChangeRBChannelWhenAsleep : 1; // 0x320
	char bCompositeThatExplodesOnImpact : 1; // 0x320
	float LastSpawnTime; // 0x324
	int32_t PartPoolIndex; // 0x328
	float FracPartGravScale; // 0x32c
	ERBCollisionChannel AsleepRBChannel; // 0x330
	FVector OldVelocity; // 0x334
	float CurrentVibrationLevel; // 0x340
	float LastImpactSoundTime; // 0x344
};

struct UTgDeviceForm_RiderMovement {
	FVector m_vActiveCameraOffset; // 0x2bc
};

struct UParticleModuleSubUVDirect {
	FRawDistributionVector SubUVPosition; // 0x68
	FRawDistributionVector SubUVSize; // 0x8c
};

struct USeqAct_SetCameraTarget {
	ObjectProperty CameraTarget; // 0x108
	FViewTargetTransitionParams TransitionParams; // 0x110
};

struct ATgDeploy_BoobyTrap {
	ObjectProperty m_CollisionProxy; // 0x448
	TArray<ObjectProperty> m_TouchingActors; // 0x450
};

struct ATgDeploy_LootCrateDevice {
	TArray<int32_t> m_nDeviceIds; // 0x4b8
};

struct UTgAIBehaviorAction_MoveToShield {
	char bMustBeEnemy : 1; // 0x9c
	char bIgnoreInsideCollision : 1; // 0x9c
};

struct UMaterialExpressionAppendVector {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
};

struct UAnimationCompressionAlgorithm_Automatic {
	float MaxEndEffectorError; // 0x78
	char bTryFixedBitwiseCompression : 1; // 0x7c
	char bTryPerTrackBitwiseCompression : 1; // 0x7c
	char bTryLinearKeyRemovalCompression : 1; // 0x7c
	char bTryIntervalKeyRemoval : 1; // 0x7c
	char bRunCurrentDefaultCompressor : 1; // 0x7c
	char bAutoReplaceIfExistingErrorTooGreat : 1; // 0x7c
	char bRaiseMaxErrorToExisting : 1; // 0x7c
};

struct UTgAnimNodeBlendNPC {
	float m_NoCustomerPresentBlendInTime; // 0x168
	float m_CustomerPresentBlendInTime; // 0x16c
	float m_GreetingBlendInTime; // 0x170
	float m_NoSaleBlendInTime; // 0x174
	float m_CallOutBlendInTime; // 0x178
	float m_SaleBlendInTime; // 0x17c
	float m_TransCustomerPresentToNotPresentBlendInTime; // 0x180
	TArray<FName> m_UninterruptibleAnims; // 0x184
	NPCAnimationStates m_QueuedChild; // 0x194
	float m_QueuedBlendTime; // 0x198
	FName m_CurrentAnimPlaying; // 0x19c
};

struct UParticleModuleTypeDataBeam2 {
	EBeam2Method BeamMethod; // 0x68
	EBeamTaperMethod TaperMethod; // 0x69
	int32_t TextureTile; // 0x6c
	float TextureTileDistance; // 0x70
	int32_t Sheets; // 0x74
	int32_t MaxBeamCount; // 0x78
	float Speed; // 0x7c
	int32_t InterpolationPoints; // 0x80
	char bAlwaysOn : 1; // 0x84
	char RenderGeometry : 1; // 0x84
	char RenderDirectLine : 1; // 0x84
	char RenderLines : 1; // 0x84
	char RenderTessellation : 1; // 0x84
	int32_t UpVectorStepSize; // 0x88
	FName BranchParentName; // 0x8c
	FRawDistributionFloat Distance; // 0x94
	FRawDistributionFloat TaperFactor; // 0xb8
	FRawDistributionFloat TaperScale; // 0xdc
};

struct UUIComponent_OptionEntryBase {
	ObjectProperty m_mcLabel; // 0x140
	ObjectProperty m_pGroup; // 0x148
};

struct UAnimNode {
	char bRelevant : 1; // 0x68
	char bJustBecameRelevant : 1; // 0x68
	char bTickDuringPausedAnims : 1; // 0x68
	char bEditorOnly : 1; // 0x68
	char bDisableCaching : 1; // 0x68
	char bCallScriptEventOnInit : 1; // 0x68
	char bCallScriptEventOnBecomeRelevant : 1; // 0x68
	char bCallScriptEventOnCeaseRelevant : 1; // 0x68
	int32_t NodeTickTag; // 0x6c
	int32_t PostBoneUpdateNodeTickTag; // 0x70
	int32_t NodeInitTag; // 0x74
	int32_t NodeEndEventTick; // 0x78
	int32_t TickArrayIndex; // 0x7c
	int32_t NodeCachedAtomsTag; // 0x80
	float NodeTotalWeight; // 0x84
	TArray<ObjectProperty> ParentNodes; // 0x88
	FName NodeName; // 0x98
	TArray<FBoneAtom> CachedBoneAtoms; // 0xa0
	char CachedNumDesiredBones; // 0xb0
	FBoneAtom CachedRootMotionDelta; // 0xc0
	int32_t bCachedHasRootMotion; // 0xe0
	TArray<FCurveKey> CachedCurveKeys; // 0xe4
	int32_t SearchTag; // 0xf4
	FColor m_LabelColor; // 0xf8
};

struct ATgStealthGrassActor {
	FVector c_vBaseOffset; // 0x280
	FVector c_vGrassOffset; // 0x28c
	float c_fGrassOffsetInterpSpeed; // 0x298
	char c_bLowerGrass : 1; // 0x29c
	char m_bHasLoot : 1; // 0x29c
	char r_bCanHealNow : 1; // 0x29c
	float c_fLowerGrassAlpha; // 0x2a0
	ComponentProperty c_GrassMesh; // 0x2a4
	ComponentProperty c_GroundMesh; // 0x2ac
	ComponentProperty m_ParticleSystemComponent; // 0x2b4
	ObjectProperty m_LootParticleSystem; // 0x2bc
	ObjectProperty m_NoLootParticleSystem; // 0x2c4
	ObjectProperty m_SpawnedDeployable; // 0x2cc
	float m_fDeployableSpawnTimer; // 0x2d4
	float m_fDeployableSpawnChanceOnInit; // 0x2d8
	float m_fDeployableSpawnChanceOnTimer; // 0x2dc
	int32_t m_nLootDeployableId; // 0x2e0
	ObjectProperty m_HealingDevice; // 0x2e4
	int32_t m_HealingDeviceId; // 0x2ec
	float m_fDisableHealingTime; // 0x2f0
	float m_fEnableHealingTime; // 0x2f4
	float AlwaysRelevantDistanceSquared; // 0x2f8
	float MaxRelevantDistanceSquared; // 0x2fc
};

struct UTgControlModule_SpectatorLockedView {
	float DirectorModeSpectatorStallZ; // 0x78
	float DirectorModeSpectatorMinStallZ; // 0x7c
};

struct ATgNamedPOIActor {
	int32_t m_nMessageId; // 0x280
	FString m_PreviewText; // 0x284
	char m_bIsRegion : 1; // 0x294
};

struct UTgAIBehaviorCondition_WhatIsCombatTargetTargeting {
	ECombatTargetType TargetType; // 0x98
};

struct AMaterialInstanceActor {
	ObjectProperty MatInst; // 0x280
};

struct UTgAIBehaviorCondition_IsDesiredAimDevice {
	TG_EQUIP_POINT DeviceSlot; // 0x98
};

struct UCoverSlipReachSpec {
	char SpecDirection; // 0xc8
};

struct UParticleModuleRotationRateMultiplyLife {
	FRawDistributionFloat LifeMultiplier; // 0x68
};

struct UUIDataStore_InputAlias {
	TArray<FUIDataStoreInputAlias> InputAliases; // 0x98
	TMap<None, None> InputAliasLookupMap; // 0xa8
};

struct UMaterialExpressionPower {
	FExpressionInput Base; // 0xb0
	FExpressionInput Exponent; // 0xe4
};

struct UPartyBeacon {
	FPointer VfTable_FTickableObject; // 0x60
	int32_t PartyBeaconPort; // 0x68
	FPointer Socket; // 0x6c
	char bIsInTick : 1; // 0x74
	char bWantsDeferredDestroy : 1; // 0x74
	char bShouldTick : 1; // 0x74
	float HeartbeatTimeout; // 0x78
	float ElapsedHeartbeatTime; // 0x7c
	FName BeaconName; // 0x80
	DelegateProperty __OnDestroyComplete__Delegate; // 0x88
};

struct UTgSeqEvent_PlayerInitialized {
	char bLocalPlayerOnly : 1; // 0x128
};

struct UParticleModuleLocationSkelVertSurface {
	ELocationSkelVertSurfaceSource SourceType; // 0x68
	FVector UniversalOffset; // 0x6c
	char bUpdatePositionEachFrame : 1; // 0x78
	char bOrientMeshEmitters : 1; // 0x78
	char bEnforceNormalCheck : 1; // 0x78
	FName SkelMeshActorParamName; // 0x7c
	TArray<FName> ValidAssociatedBones; // 0x84
	FVector NormalToCompare; // 0x94
	float NormalCheckToleranceDegrees; // 0xa0
	float NormalCheckTolerance; // 0xa4
	TArray<int32_t> ValidMaterialIndices; // 0xa8
};

struct UMicroTransactionBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x80
	FString LastError; // 0x90
	FString LastErrorSolution; // 0xa0
};

struct UTgDeviceForm_Inhand {
	int32_t m_nAmmoCount; // 0x2bc
	int32_t m_nMaxAmmoCount; // 0x2c0
	float m_fPreviousAmmoPerc; // 0x2c4
	float m_fCurrentAmmoPerc; // 0x2c8
};

struct ATgProj_ColumnBeam {
	float m_fFloorCheckHeight; // 0x51c
	char m_bUseFloorAdjustment : 1; // 0x520
};

struct UTgInvListener_ActiveDeployableEffect {
	TArray<int32_t> m_AppliedTargetIds; // 0xc8
};

struct UCommandlet {
	FString HelpDescription; // 0x60
	FString HelpUsage; // 0x70
	FString HelpWebLink; // 0x80
	TArray<FString> HelpParamNames; // 0x90
	TArray<FString> HelpParamDescriptions; // 0xa0
	char IsServer : 1; // 0xb0
	char IsClient : 1; // 0xb0
	char IsEditor : 1; // 0xb0
	char LogToConsole : 1; // 0xb0
	char ShowErrorCount : 1; // 0xb0
};

struct UAnimationCompressionAlgorithm_RemoveLinearKeys {
	float MaxPosDiff; // 0x78
	float MaxAngleDiff; // 0x7c
	float MaxEffectorDiff; // 0x80
	float MinEffectorDiff; // 0x84
	float EffectorDiffSocket; // 0x88
	float ParentKeyScale; // 0x8c
	char bRetarget : 1; // 0x90
	char bActuallyFilterLinearKeys : 1; // 0x90
};

struct UTgSeqEvent_UI_Event {
	int32_t mDeckNum; // 0x128
	int32_t mEmptyItemSlots; // 0x12c
};

struct UTgAIInfluenceMapRenderingComponent {
	ObjectProperty InfluenceMap; // 0x250
	ObjectProperty InfluenceMapTexture; // 0x258
};

struct ATgOverviewCameraActor {
	char m_bFlipped : 1; // 0x420
};

struct USeqAct_GetProperty {
	FName PropertyName; // 0x108
};

struct UTgAIBehaviorCondition_AmmoAfterShot {
	TG_EQUIP_POINT DeviceSlot; // 0x98
	int32_t AmmoThreshold; // 0x9c
};

struct USceneCapture2DComponent {
	ObjectProperty TextureTarget; // 0xd0
	float FieldOfView; // 0xd8
	float NearPlane; // 0xdc
	float FarPlane; // 0xe0
	char bUpdateMatrices : 1; // 0xe4
	FMatrix ViewMatrix; // 0xf0
	FMatrix ProjMatrix; // 0x130
	FMatrix ViewMatrix_RT; // 0x170
	FMatrix ProjMatrix_RT; // 0x1b0
};

struct USequenceObject {
	int32_t ObjInstanceVersion; // 0x60
	ObjectProperty ParentSequence; // 0x64
	FString ObjName; // 0x6c
	FString ObjComment; // 0x7c
	char bDeletable : 1; // 0x8c
	char bDrawFirst : 1; // 0x8c
	char bDrawLast : 1; // 0x8c
	char bOutputObjCommentToScreen : 1; // 0x8c
	char bSuppressAutoComment : 1; // 0x8c
	int32_t DrawWidth; // 0x90
	int32_t DrawHeight; // 0x94
};

struct UGameMessage {
	FString SwitchLevelMessage; // 0x74
	FString LeftMessage; // 0x84
	FString FailedTeamMessage; // 0x94
	FString FailedPlaceMessage; // 0xa4
	FString FailedSpawnMessage; // 0xb4
	FString EnteredMessage; // 0xc4
	FString MaxedOutMessage; // 0xd4
	FString ArbitrationMessage; // 0xe4
	FString OvertimeMessage; // 0xf4
	FString GlobalNameChange; // 0x104
	FString NewTeamMessage; // 0x114
	FString NewTeamMessageTrailer; // 0x124
	FString NoNameChange; // 0x134
	FString VoteStarted; // 0x144
	FString VotePassed; // 0x154
	FString MustHaveStats; // 0x164
	FString CantBeSpectator; // 0x174
	FString CantBePlayer; // 0x184
	FString BecameSpectator; // 0x194
	FString NewPlayerMessage; // 0x1a4
	FString KickWarning; // 0x1b4
	FString NewSpecMessage; // 0x1c4
	FString SpecEnteredMessage; // 0x1d4
};

struct UMobileMenuImage {
	ObjectProperty Image; // 0xdc
	MenuImageDrawStyle ImageDrawStyle; // 0xe4
	FUVCoords ImageUVs; // 0xe8
	FLinearColor ImageColor; // 0xfc
};

struct UTgAIUtilitySet {
	EAIAnnotationType AnnotationType; // 0x94
	TArray<ObjectProperty> Functions; // 0x98
	TArray<ObjectProperty> Filters; // 0xa8
};

struct UMaterialExpressionSine {
	FExpressionInput Input; // 0xb0
	float Period; // 0xe4
};

struct UTgAIBehaviorCondition_IsInFortress {
	char bMustBeEnemy : 1; // 0x98
};

struct UTgSeqAct_ShowSubtitle {
	int32_t m_nMessageId; // 0x108
	float m_fShowTime; // 0x10c
};

struct UInterpTrackVectorProp {
	FName PropertyName; // 0xb8
};

struct UTgDistributionFloatSoundAttenuation {
	SoundAttenuationType AttenuationType; // 0x7c
	float Attenuation_Sm_foley; // 0x80
	float Attenuation_Lg_foley; // 0x84
	float Attenuation_Melee_hit; // 0x88
	float Attenuation_Sm_gun; // 0x8c
	float Attenuation_Med_gun; // 0x90
	float Attenuation_Lg_gun; // 0x94
	float Attenuation_Sm_exp; // 0x98
	float Attenuation_Med_exp; // 0x9c
	float Attenuation_Lg_exp; // 0xa0
	FName GroupName; // 0xa4
	TArray<FAttenuationGroup> AttenuationGroups; // 0xac
};

struct UTgChatData {
	int32_t m_nId; // 0x60
	int32_t m_nSoundId; // 0x64
	int32_t m_nChannel; // 0x68
	char m_bFeedback : 1; // 0x6c
	char m_bSenderIsVIP : 1; // 0x6c
	char m_bIsVGS : 1; // 0x6c
	FString m_sSender; // 0x70
	Fdword m_dwSenderVIPTier; // 0x80
	FString m_sMessage; // 0x84
	FString m_sSenderColor; // 0x94
	FString m_sSenderClass; // 0xa4
	FString m_sMessageColor; // 0xb4
};

struct AImageReflectionShadowPlane {
	char bEnabled : 1; // 0x280
	ComponentProperty ReflectionShadowComponent; // 0x284
};

struct UUILobbyChat {
	int32_t m_nDepth; // 0x244
	int32_t m_nPosition; // 0x248
	int32_t m_nOpenIdentity; // 0x24c
	FString m_sLocalTabName; // 0x250
	ObjectProperty m_mcArrow[0x2]; // 0x260
	ObjectProperty m_mcArrowNotify[0x2]; // 0x270
	TArray<ObjectProperty> m_mcTabs; // 0x280
	ObjectProperty m_AkNewTabSound; // 0x290
};

struct ATgRepInfo_CapturePoint {
	ObjectProperty r_OwningCapturePoint; // 0x280
	int32_t r_nUniqueCapturePointId; // 0x288
	int32_t r_nControlledByTaskForce; // 0x28c
	float r_fOwnershipPct; // 0x290
	char r_nTransitionDirection; // 0x294
	char r_bIsLocked : 1; // 0x298
	ObjectProperty c_OwnershipPercentKismetNode; // 0x29c
};

struct UGameCameraBase {
	ObjectProperty PlayerCamera; // 0x60
	char bResetCameraInterpolation : 1; // 0x68
};

struct ACameraActor {
	char bConstrainAspectRatio : 1; // 0x280
	char bCamOverridePostProcess : 1; // 0x280
	float AspectRatio; // 0x284
	float FOVAngle; // 0x288
	float CamOverridePostProcessAlpha; // 0x28c
	FPostProcessSettings CamOverridePostProcess; // 0x290
	ComponentProperty DrawFrustum; // 0x410
	ComponentProperty MeshComp; // 0x418
};

struct UPComGameViewportClient {
	ObjectProperty OpenBroadcaster; // 0x1a8
	ObjectProperty InputLightingEffect; // 0x1b0
	char bUseDynamicResolutionScaler : 1; // 0x1b8
	FPointer DynamicResolutionScaler; // 0x1bc
};

struct UTgAnimNodeBlendByAndroxusDrift {
	TArray<FDriftInfo> m_DriftRecords; // 0x168
	char m_bInDrift : 1; // 0x178
	char m_bTransitionsCanBeInterrupted : 1; // 0x178
	float m_fDriftStartTime; // 0x17c
	float m_fDriftRelevancyWindow; // 0x180
	float m_fDriftTriggerPercent; // 0x184
	float m_fMaxFallSpeed; // 0x188
};

struct USpotLightComponent {
	float InnerConeAngle; // 0x240
	float OuterConeAngle; // 0x244
	float LightShaftConeAngle; // 0x248
	ComponentProperty PreviewInnerCone; // 0x24c
	ComponentProperty PreviewOuterCone; // 0x254
	FRotator Rotation; // 0x25c
};

struct UMcpManagedValueManagerBase {
	FString McpManagedValueManagerClassName; // 0x78
	DelegateProperty __OnCreateSaveSlotComplete__Delegate; // 0x88
	DelegateProperty __OnReadSaveSlotComplete__Delegate; // 0x98
	DelegateProperty __OnUpdateValueComplete__Delegate; // 0xa8
	DelegateProperty __OnDeleteValueComplete__Delegate; // 0xb8
};

struct UMaterialExpressionTerrainLayerCoords {
	ETerrainCoordMappingType MappingType; // 0xb0
	float MappingScale; // 0xb4
	float MappingRotation; // 0xb8
	float MappingPanU; // 0xbc
	float MappingPanV; // 0xc0
};

struct UTgDeviceForm_Barrage {
	ObjectProperty m_CachedActiveOverlayController; // 0x2bc
};

struct UParticleModuleMeshRotation {
	FRawDistributionVector StartRotation; // 0x68
	char bInheritParent : 1; // 0x8c
};

struct UTgData_EOM {
	int32_t m_nKills; // 0xbc
	int32_t m_nPlace; // 0xc0
	int32_t m_nGameId; // 0xc4
	int32_t m_nProfile; // 0xc8
	int32_t m_nQueueId; // 0xcc
	int32_t m_nGameTime; // 0xd0
	int32_t m_nLocalTF; // 0xd4
	int32_t m_nWinningTF; // 0xd8
	int32_t m_nClassXPTotal; // 0xdc
	int32_t m_nClassXPTimeAlive; // 0xe0
	int32_t m_nClassXPPlacement; // 0xe4
	int32_t m_nClassXPElims; // 0xe8
	float m_fClassXPMultiplier; // 0xec
	int32_t m_nBattlepassXPTotal; // 0xf0
	int32_t m_nBattlepassXPTimeAlive; // 0xf4
	int32_t m_nBattlepassXPPlacement; // 0xf8
	int32_t m_nBattlepassXPElims; // 0xfc
	float m_fBattlepassXPMultiplier; // 0x100
	int32_t m_nQuestsCompletedThisSession; // 0x104
	int32_t m_nXPBonus; // 0x108
	int32_t m_nXPEarned; // 0x10c
	int32_t m_nCharacterXPEarned; // 0x110
	int32_t m_nCharacterXPBonus; // 0x114
	int32_t m_nTokens; // 0x118
	int32_t m_nTokensFound; // 0x11c
	int32_t m_nTokensKills; // 0x120
	int32_t m_nTokensBonus; // 0x124
	int32_t m_nTokensQuests; // 0x128
	int32_t m_nTokensVictory; // 0x12c
	TArray<ObjectProperty> m_Players; // 0x130
	TArray<ObjectProperty> m_AlreadyCompletedQuests; // 0x140
	TArray<FCurrencyEntry> m_vCurrencyEntries; // 0x150
	FCurrencyEntry m_NullCurrency; // 0x160
};

struct UTgAIUtilityFilter_CapturePoint {
	float DistanceCutoff; // 0xc0
};

struct UParticleModuleAttractorParticle {
	FName EmitterName; // 0x68
	FRawDistributionFloat Range; // 0x70
	char bStrengthByDistance : 1; // 0x94
	char bAffectBaseVelocity : 1; // 0x94
	char bRenewSource : 1; // 0x94
	char bInheritSourceVel : 1; // 0x94
	FRawDistributionFloat Strength; // 0x98
	EAttractorParticleSelectionMethod SelectionMethod; // 0xbc
	int32_t LastSelIndex; // 0xc0
};

struct USVehicleSimTank {
	float LeftTrackVel; // 0xf8
	float RightTrackVel; // 0xfc
	float LeftTrackTorque; // 0x100
	float RightTrackTorque; // 0x104
	float MaxEngineTorque; // 0x108
	float EngineDamping; // 0x10c
	float InsideTrackTorqueFactor; // 0x110
	float SteeringLatStiffnessFactor; // 0x114
	float TurnInPlaceThrottle; // 0x118
	float TurnMaxGripReduction; // 0x11c
	float TurnGripScaleRate; // 0x120
	char bTurnInPlaceOnSteer : 1; // 0x124
};

struct UTgInventoryObject_Listen_PipConsequential {
	int32_t s_nHitCounter; // 0xc8
};

struct UAnimNotify_Footstep {
	int32_t FootDown; // 0x68
	ObjectProperty m_PreviewSound; // 0x6c
	EFootstepTypes m_FootstepType; // 0x74
};

struct UGFxAction_SetCaptureKeys {
	ObjectProperty Movie; // 0x108
	TArray<FName> CaptureKeys; // 0x110
};

struct ATgAIDirector {
	char m_bActive : 1; // 0x280
	char m_bCanAdjustNow : 1; // 0x280
	char m_bDisparityDetected : 1; // 0x280
	char m_bProlongedDisparityDetected : 1; // 0x280
	char m_bHasLoweredDifficultyAtTie : 1; // 0x280
	char m_bFreezeAIDifficulty : 1; // 0x280
	float m_fTimeSinceLastUpdate; // 0x284
	float m_fLastSkillDisparity; // 0x288
	int32_t m_iIncreaseTF1Difficulty; // 0x28c
	int32_t m_iIncreaseTF2Difficulty; // 0x290
	int32_t m_iDisparityDetectionTime; // 0x294
	int32_t m_iTriggerTime; // 0x298
	int32_t m_iTaskForce1PlayerCount; // 0x29c
	int32_t m_iTaskForce2PlayerCount; // 0x2a0
	float LockoutTime; // 0x2a4
	float SkillDisparityTrigger; // 0x2a8
	float UpdateRate; // 0x2ac
	float m_fLastPayloadPercent; // 0x2b0
	float m_fBaseUpperKillRatio; // 0x2b4
	float m_fBaseLowerKillRatio; // 0x2b8
	float m_fBaseUpperPayloadRate; // 0x2bc
	float m_fBaseLowerPayloadRate; // 0x2c0
	float NumDeaths_Weight; // 0x2c4
	float Damage_Weight; // 0x2c8
	float Kills_Weight; // 0x2cc
	float SoloKills_Weight; // 0x2d0
	float Assists_Weight; // 0x2d4
	float ObjectiveTime_Weight; // 0x2d8
	float Healing_Weight; // 0x2dc
	float Shielding_Weight; // 0x2e0
	float Credits_Weight; // 0x2e4
	float Accuracy_Weight; // 0x2e8
	float Killstreak_Multiplier; // 0x2ec
	float numDeathsBase0; // 0x2f0
	float numDeathsBase1; // 0x2f4
	FSkillLevelRawData PlayerSkillData[0x2]; // 0x2f8
	FSkillLevelRawData TeamSkillData[0x2]; // 0x348
	FSkillLevelRawData OldPlayerSkillData[0x2]; // 0x398
	FSkillLevelRawData OldTeamSkillData[0x2]; // 0x3e8
	FSkillLevelPercentageData SkillPercentages[0x4]; // 0x438
};

struct UTgRecoilKeyframe {
	float firingTime; // 0x60
	FRawDistributionFloat RecoilPerShot; // 0x64
};

struct UGameExplosion {
	char bDirectionalExplosion : 1; // 0x60
	char bIgnoreInstigator : 1; // 0x60
	char bAllowTeammateCringes : 1; // 0x60
	char bFullDamageToAttachee : 1; // 0x60
	char bAttachExplosionEmitterToAttachee : 1; // 0x60
	char bPerformRadialBlurRelevanceCheck : 1; // 0x60
	char bCausesFracture : 1; // 0x60
	char bAllowPerMaterialFX : 1; // 0x60
	char bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 0; // 0x60
	char bSkipDefaultPhysMatParticleSystem : 0; // 0x60
	char bUseMapSpecificValues : 0; // 0x60
	char bUseOverlapCheck : 0; // 0x60
	char bOrientCameraShakeTowardsEpicenter : 0; // 0x60
	char bAutoControllerVibration : 0; // 0x60
	float DirectionalExplosionAngleDeg; // 0x64
	float DamageDelay; // 0x68
	float Damage; // 0x6c
	float DamageRadius; // 0x70
	float DamageFalloffExponent; // 0x74
	ObjectProperty ActorToIgnoreForDamage; // 0x78
	AActor* ActorClassToIgnoreForDamage; // 0x80
	AActor* ActorClassToIgnoreForKnockdownsAndCringes; // 0x88
	UDamageType* MyDamageType; // 0x90
	float KnockDownRadius; // 0x98
	float KnockDownStrength; // 0x9c
	float CringeRadius; // 0xa0
	FVector2D CringeDuration; // 0xa4
	float MomentumTransferScale; // 0xac
	ObjectProperty ParticleEmitterTemplate; // 0xb0
	float ExplosionEmitterScale; // 0xb8
	ObjectProperty HitActor; // 0xbc
	FVector HitLocation; // 0xc4
	FVector HitNormal; // 0xd0
	ObjectProperty ExplosionSound; // 0xdc
	ObjectProperty ExplosionSoundHurtSomeone; // 0xe4
	ComponentProperty ExploLight; // 0xec
	float ExploLightFadeOutTime; // 0xf4
	ComponentProperty ExploRadialBlur; // 0xf8
	float ExploRadialBlurFadeOutTime; // 0x100
	float ExploRadialBlurMaxBlur; // 0x104
	float FractureMeshRadius; // 0x108
	float FracturePartVel; // 0x10c
	ObjectProperty CamShake; // 0x110
	ObjectProperty CamShake_Left; // 0x118
	ObjectProperty CamShake_Right; // 0x120
	ObjectProperty CamShake_Rear; // 0x128
	float CamShakeInnerRadius; // 0x130
	float CamShakeOuterRadius; // 0x134
	float CamShakeFalloff; // 0x138
	AEmitterCameraLensEffectBase* CameraLensEffect; // 0x13c
	float CameraLensEffectRadius; // 0x144
};

struct UUIDataObject {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	ObjectProperty m_CallbackContainer; // 0x68
};

struct UInterpTrackInstProperty {
	ObjectProperty PropertyUpdateCallback; // 0x60
	ObjectProperty PropertyOuterObjectInst; // 0x68
};

struct ATgDeploy_XP {
	char m_bPreAwardXP : 1; // 0x4e0
	float m_fDelayedPickupTime; // 0x4e4
	ObjectProperty m_DelayedPickupPawn; // 0x4e8
};

struct UAnimNodeScalePlayRate {
	float ScaleByValue; // 0x114
};

struct AProcBuilding {
	TArray<FPBMeshCompInfo> BuildingMeshCompInfos; // 0x2bc
	TArray<FPBFracMeshCompInfo> BuildingFracMeshCompInfos; // 0x2cc
	ComponentProperty SimpleMeshComp; // 0x2dc
	char bGenerateRoofMesh : 1; // 0x2e4
	char bGenerateFloorMesh : 1; // 0x2e4
	char bApplyRulesToRoof : 1; // 0x2e4
	char bApplyRulesToFloor : 1; // 0x2e4
	char bSplitWallsAtRoofLevels : 1; // 0x2e4
	char bSplitWallsAtWallEdges : 1; // 0x2e4
	char bQuickEdited : 1; // 0x2e4
	char bBuildingBrushCollision : 1; // 0x2e4
	char bDebugDrawEdgeInfo : 0; // 0x2e4
	char bDebugDrawScopes : 0; // 0x2e4
	TArray<ComponentProperty> LODMeshComps; // 0x2e8
	int32_t NumMeshedTopLevelScopes; // 0x2f8
	float MaxFacadeZ; // 0x2fc
	float MinFacadeZ; // 0x300
	TArray<ObjectProperty> OverlappingBuildings; // 0x304
	float SimpleMeshMassiveLODDistance; // 0x314
	float RenderToTexturePullBackAmount; // 0x318
	int32_t RoofLightmapRes; // 0x31c
	int32_t NonRectWallLightmapRes; // 0x320
	FName ParamSwatchName; // 0x324
	TArray<FPBMaterialParam> BuildingMaterialParams; // 0x32c
	ObjectProperty LowLODPersistentActor; // 0x33c
	ComponentProperty CurrentSimpleMeshComp; // 0x344
	ObjectProperty CurrentSimpleMeshActor; // 0x34c
	int32_t BuildingInstanceVersion; // 0x354
};

struct AEmitterSpawnable {
	ObjectProperty ParticleTemplate; // 0x294
};

struct UTgInventoryObject_Listen_DeployOnAbility {
	EDeployOnAbilityType m_eDeployType; // 0xd0
};

struct UPathGoalEvaluator {
	ObjectProperty NextEvaluator; // 0x60
	ObjectProperty GeneratedGoal; // 0x68
	int32_t MaxPathVisits; // 0x70
	int32_t CacheIdx; // 0x74
};

struct ANxTornadoAngularForceFieldCapsule {
	ComponentProperty RenderComponent; // 0x308
};

struct UAnimationCompressionAlgorithm_RemoveTrivialKeys {
	float MaxPosDiff; // 0x78
	float MaxAngleDiff; // 0x7c
};

struct USeqEvent_Touch {
	TArray<AActor*> ClassProximityTypes; // 0x128
	TArray<AActor*> IgnoredClassProximityTypes; // 0x138
	char bForceOverlapping : 1; // 0x148
	char bUseInstigator : 1; // 0x148
	char bAllowDeadPawns : 1; // 0x148
	TArray<ObjectProperty> TouchedList; // 0x14c
};

struct APortalMarker {
	ObjectProperty MyPortal; // 0x378
};

struct UTgSeqAct_SetEnergyGainBlock {
	int32_t m_bBlockEnergyGain; // 0x108
};

struct AFileWriter {
	FPointer ArchivePtr; // 0x280
	FString Filename; // 0x288
	FWFileType FileType; // 0x298
	char bFlushEachWrite : 1; // 0x29c
	char bWantsAsyncWrites : 1; // 0x29c
};

struct UTgAIBehaviorCondition_CombatTargetIsInMinotaurRadius {
	char bMustBeEnemy : 1; // 0x98
};

struct ATgPortal {
	char bUpdateRotation : 1; // 0x2e4
	char bCheckOverlap : 1; // 0x2e4
	char bResetVelocity : 1; // 0x2e4
	char bCheckTaskForce : 1; // 0x2e4
	int32_t nTaskForce; // 0x2e8
	ObjectProperty TeleportSoundCue; // 0x2ec
	float FadeInTime; // 0x2f4
	float VolumeMultiplier; // 0x2f8
	float PitchMultiplier; // 0x2fc
};

struct ATgWeaponMeshActor_BarrierTankInhand {
	char m_bHasFinishedBurst : 1; // 0x504
};

struct UUIComponent_ClassSelectEntry {
	ObjectProperty m_mcIcon; // 0x120
	ObjectProperty m_mcName; // 0x128
	ObjectProperty m_mcLevel; // 0x130
	ObjectProperty m_pProgress; // 0x138
};

struct AAkAmbientSound {
	char bAutoPlay : 1; // 0x288
	char StopWhenOwnerIsDestroyed : 1; // 0x288
	char bIsPlaying : 1; // 0x288
	ObjectProperty PlayEvent; // 0x28c
};

struct UTgCustomCharacterComponent {
	TArray<ObjectProperty> m_SourceMeshList; // 0x88
	TArray<FCompositeTextureType> m_CompositeTextures; // 0x98
	int32_t m_nCompositeTextureSizeX; // 0xa8
	int32_t m_nCompositeTextureSizeY; // 0xac
	TArray<FCompositePartInfo> m_CompositeParts; // 0xb0
	TArray<ObjectProperty> m_CompositeFxList; // 0xc0
};

struct ATgDestructible {
	ObjectProperty r_EffectManager; // 0x2e8
	int32_t r_nMaxHealth; // 0x2f0
	char m_bDisplayHealth : 1; // 0x2f4
	char m_bDestroyed : 1; // 0x2f4
	char m_bInitialized : 1; // 0x2f4
	char m_bFogOfWarBlocker : 1; // 0x2f4
	char m_bOneDirectional : 1; // 0x2f4
	int32_t m_nPhysicalType; // 0x2f8
	char m_nTaskForce; // 0x2fc
	int32_t r_nHealth; // 0x300
	int32_t r_nActorInstanceId; // 0x304
};

struct UTgAIBehaviorAction_SetAimDevice {
	TG_EQUIP_POINT DeviceToUse; // 0x94
};

struct USeqAct_SetParticleSysParam {
	TArray<FParticleSysParam> InstanceParameters; // 0x108
	char bOverrideScalar : 1; // 0x118
	float ScalarValue; // 0x11c
};

struct ATgProj_Vine {
	ObjectProperty m_VineForm; // 0x51c
};

struct UTgSeqAct_PlayFullBodyAnim {
	FName c_AnimName; // 0x108
	float c_fRate; // 0x110
	float c_fBlendInTime; // 0x114
	float c_fBlendOutTime; // 0x118
	char c_bLooping : 1; // 0x11c
	char c_bOverride : 1; // 0x11c
};

struct UUIDataStore_GameState {
	DelegateProperty __OnRefreshDataFieldValue__Delegate; // 0x98
};

struct UActorFactoryRigidBody {
	char bStartAwake : 1; // 0xb8
	char bDamageAppliesImpulse : 1; // 0xb8
	char bLocalSpaceInitialVelocity : 1; // 0xb8
	char bEnableStayUprightSpring : 1; // 0xb8
	FVector InitialVelocity; // 0xbc
	ComponentProperty AdditionalVelocity; // 0xc8
	ComponentProperty InitialAngularVelocity; // 0xd0
	ERBCollisionChannel RBChannel; // 0xd8
	float StayUprightTorqueFactor; // 0xdc
	float StayUprightMaxTorque; // 0xe0
};

struct ALadderVolume {
	FRotator WallDir; // 0x314
	char m_bBotOnly : 1; // 0x320
	char bNoPhysicalLadder : 1; // 0x320
	char bAutoPath : 1; // 0x320
	char bAllowLadderStrafing : 1; // 0x320
	FVector LookDir; // 0x324
	FVector ClimbDir; // 0x330
	ObjectProperty LadderList; // 0x33c
	ObjectProperty PendingClimber; // 0x344
	ComponentProperty WallDirArrow; // 0x34c
	ComponentProperty m_WallDirArrow; // 0x354
};

struct USeqEvent_Mover {
	float StayOpenTime; // 0x128
};

struct UTgInventoryObject_Listen_Combo_Grohk {
	float m_fFirstHitThisTickTimestamp; // 0xd0
	int32_t m_nHitsThisChain; // 0xd4
	char m_bBonusActive : 1; // 0xd8
};

struct ATgDeploy_GeometryBarrierTank {
	ObjectProperty m_CachedInaraPawn; // 0x470
	ComponentProperty m_CenterMesh; // 0x478
	ComponentProperty m_LeftMeshes[0x2]; // 0x480
	ComponentProperty m_RightMeshes[0x2]; // 0x490
	int32_t m_WallMeshIDCenter; // 0x4a0
	int32_t m_WallMeshIDEndCap; // 0x4a4
	char r_bGrowthModeActivationSignal : 1; // 0x4a8
	char m_bInGrowthMode : 1; // 0x4a8
	char m_bDidInitialHit : 1; // 0x4a8
	char r_bEarthenGuardActive : 1; // 0x4a8
	char r_bHasAlpine : 1; // 0x4a8
	float m_fGrowStartTime; // 0x4ac
};

struct USoundNodeAttenuation {
	char bAttenuate : 1; // 0x74
	char bSpatialize : 1; // 0x74
	char bAttenuateWithLPF : 1; // 0x74
	float dBAttenuationAtMax; // 0x78
	float OmniRadius; // 0x7c
	SoundDistanceModel DistanceAlgorithm; // 0x80
	ESoundDistanceCalc DistanceType; // 0x81
	float RadiusMin; // 0x84
	float RadiusMax; // 0x88
	float LPFRadiusMin; // 0x8c
	float LPFRadiusMax; // 0x90
};

struct UGFxInteraction {
	FPointer VfTable_FCallbackEventDevice; // 0xb0
	char bFakeMobileTouches : 1; // 0xb8
};

struct UMorphNodePose {
	ObjectProperty Target; // 0x74
	FName MorphName; // 0x7c
	float Weight; // 0x84
};

struct UTgAnimBlendByMountSkin {
	TArray<FMountSkinChildInfo> m_SkinMap; // 0x168
};

struct ATgCollisionProxy_Cylinder {
	ComponentProperty m_CollisionCylinder; // 0x2b4
};

struct ATgForgeObjective {
	TArray<FForgeUse> m_Used; // 0x2b0
	TArray<FForgeUse> m_Upgraded; // 0x2c0
	FForgeItem r_Items[0x8]; // 0x2d0
	FForgeItem r_Upgrades[0x8]; // 0x330
	int32_t r_nUpgrades; // 0x390
	int32_t r_nOwningTeam; // 0x394
	int32_t s_nPlayerCountA; // 0x398
	int32_t s_nPlayerCountB; // 0x39c
	char s_bAllowCapture : 1; // 0x3a0
};

struct UTgAIBehaviorCondition_IsInTowerRadius {
	char bMustBeEnemy : 1; // 0x98
};

struct ASkeletalMeshActor {
	char bDamageAppliesImpulse : 1; // 0x280
	char bShouldDoAnimNotifies : 1; // 0x280
	char bForceSaveInCheckpoint : 1; // 0x280
	char bCollideActors_OldValue : 1; // 0x280
	char bShouldShadowParentAllAttachedActors : 1; // 0x280
	ComponentProperty SkeletalMeshComponent; // 0x284
	ComponentProperty LightEnvironment; // 0x28c
	ComponentProperty Silhouette; // 0x294
	ComponentProperty FacialAudioComp; // 0x29c
	ObjectProperty ReplicatedMesh; // 0x2a4
	ObjectProperty ReplicatedMaterial0; // 0x2ac
	ObjectProperty ReplicatedMaterial1; // 0x2b4
	TArray<FSkelMeshActorControlTarget> ControlTargets; // 0x2bc
	TArray<ObjectProperty> InterpGroupList; // 0x2cc
	FName SavedAnimSeqName; // 0x2dc
	float SavedCurrentTime; // 0x2e4
};

struct UTgAnimNodeHitReactionOffset {
	ObjectProperty Owner; // 0x170
	FVector2D m_vCurrentAngle; // 0x178
	char m_bSecondaryReaction : 1; // 0x180
	float m_fMaxReactionTime; // 0x184
	float m_fMinTimeBetweenReactions; // 0x188
	TArray<FHitReactionInfo> m_ActiveReactions; // 0x18c
};

struct ULandscapeLayerInfoObject {
	FName LayerName; // 0x60
	ObjectProperty PhysMaterial; // 0x68
	float Hardness; // 0x70
	char bNoWeightBlend : 1; // 0x74
};

struct UTgSeqAct_SetInputEnabled {
	char bEnableMoveForward : 1; // 0x108
	char bEnableMoveBackward : 1; // 0x108
	char bEnableMoveLeft : 1; // 0x108
	char bEnableMoveRight : 1; // 0x108
	char bEnableLookUp : 1; // 0x108
	char bEnableLookDown : 1; // 0x108
	char bEnableLookLeft : 1; // 0x108
	char bEnableLookRight : 1; // 0x108
	char bEnableJumping : 0; // 0x108
	char bEnableMounting : 0; // 0x108
	char bEnableAuto : 0; // 0x108
	char bEnableAlt : 0; // 0x108
	char bEnableBattleAbility : 0; // 0x108
	char bEnableMovementAbility : 0; // 0x108
	char bEnableUltimate : 0; // 0x108
	char bEnableEmote : 0; // 0x108
};

struct UTgChampionTickManager {
	int32_t m_nCurrentFrame; // 0x60
	int32_t m_nNextID; // 0x64
	ObjectProperty m_CachedPlayerController; // 0x68
	char m_bTickThrottlingEnabled : 1; // 0x70
	float m_fGuaranteedTickDistance; // 0x74
	int32_t m_nTickGroupCount; // 0x78
	TMap<None, None> c_ChampionEntries; // 0x7c
};

struct ATgDevice_VanguardGrab {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xb60
	char m_bWaitingForServerHit : 1; // 0xb68
	char m_bHasStartedGrab : 1; // 0xb68
	char m_bHasHitTarget : 1; // 0xb68
	char m_bLegendaryActive : 1; // 0xb68
	char m_bLegendaryEnabled : 1; // 0xb68
	ObjectProperty m_HitCharacter; // 0xb6c
	ObjectProperty m_DesiredTarget; // 0xb74
	float m_fJoinViewLerpTime; // 0xb7c
	float m_fHorizontalGrabTargetOffset; // 0xb80
	DelegateProperty __InterruptFiringDelegate__Delegate; // 0xb84
};

struct UPComPlayerInput {
	char c_bDirty : 1; // 0x2d4
	char c_bUseServerBindings : 1; // 0x2d4
	char c_bJumpEnabled : 1; // 0x2d4
	FString c_sCurrentProfile; // 0x2d8
	int32_t m_nKeybindConfigSet; // 0x2e8
	float m_nMinLookSensitivity; // 0x2ec
	float m_nMaxLookSensitivity; // 0x2f0
	int32_t m_RecCastMode; // 0x2f4
};

struct UTgSilhouetteComponentPaladins {
	FSilhouetteColorSettings m_ColorSettings; // 0x29c
	FSilhouetteFadeSettings m_FadeSettings; // 0x2bc
	FSilhouettePulseSettings m_PulseSettings; // 0x2d0
};

struct UMcpUserCloudFileDownload {
	FString EnumerateCloudFilesUrl; // 0x78
	FString ReadCloudFileUrl; // 0x88
	FString WriteCloudFileUrl; // 0x98
	FString DeleteCloudFileUrl; // 0xa8
	TArray<FMcpUserCloudFilesEntry> UserCloudFileRequests; // 0xb8
	TArray<DelegateProperty> EnumerateUserFilesCompleteDelegates; // 0xc8
	TArray<DelegateProperty> ReadUserFileCompleteDelegates; // 0xd8
	TArray<DelegateProperty> WriteUserFileCompleteDelegates; // 0xe8
	TArray<DelegateProperty> DeleteUserFileCompleteDelegates; // 0xf8
	DelegateProperty __OnEnumerateUserFilesComplete__Delegate; // 0x108
	DelegateProperty __OnReadUserFileComplete__Delegate; // 0x118
	DelegateProperty __OnWriteUserFileComplete__Delegate; // 0x128
	DelegateProperty __OnDeleteUserFileComplete__Delegate; // 0x138
};

struct UActorFactoryEmitter {
	ObjectProperty ParticleSystem; // 0x9c
};

struct UTgAIBehaviorCondition_GoblinState {
	EGoblinState GoblinState; // 0x98
};

struct USkelControlTrail {
	int32_t ChainLength; // 0xd0
	EAxis ChainBoneAxis; // 0xd4
	char bInvertChainBoneAxis : 1; // 0xd8
	char bLimitStretch : 1; // 0xd8
	char bActorSpaceFakeVel : 1; // 0xd8
	char bHadValidStrength : 1; // 0xd8
	float TrailRelaxation; // 0xdc
	float StretchLimit; // 0xe0
	FVector FakeVelocity; // 0xe4
	float ThisTimstep; // 0xf0
	TArray<FVector> TrailBoneLocations; // 0xf4
	FMatrix OldLocalToWorld; // 0x110
};

struct UTgAnimBlendInterpBySpeed {
	ObjectProperty m_TgPawn; // 0x124
	float m_fBlendTime; // 0x12c
	float m_fFullRunSpeed; // 0x130
	float m_fFullIdleSpeed; // 0x134
};

struct UTgAIBehaviorCondition_NumGodsNearDeployable {
	char bMustBeEnemy : 1; // 0x9c
	int32_t DeployableId; // 0xa0
	int32_t GodThreshold; // 0xa4
};

struct UUIData_Match {
	Fdword dwMatchId; // 0x70
	TMap<None, None> MatchMembersMap; // 0x74
	TArray<ObjectProperty> MatchMembers; // 0xbc
};

struct UTgCameraModule_Free {
	float CamAltitude; // 0x68
	float DesiredCamAltitude; // 0x6c
	float MaxCamAltitude; // 0x70
	float MinCamAltitude; // 0x74
	float CamZoomIncrement; // 0x78
};

struct UTgInventoryObject_Listen_MirrorPetDamageToHeal {
	ObjectProperty m_CachedFiremode; // 0xd0
};

struct UAnimNodeBlendMultiBone {
	TArray<FChildBoneBlendInfo> BlendTargetList; // 0x114
	TArray<char> SourceRequiredBones; // 0x124
};

struct UTgAIBehaviorCondition_PlayerDeployState {
	EPlayerDeployState DeployState; // 0x98
};

struct UTgSetting {
	float m_fDefault; // 0x60
	float m_fConfigDefault; // 0x64
	float m_fOriginal; // 0x68
	float m_fMax; // 0x6c
	float m_fMin; // 0x70
	float m_fTemp; // 0x74
	float m_fValue; // 0x78
	float m_fPrecision; // 0x7c
	SETTING_TYPE m_eType; // 0x80
	TArray<FOptionData> m_Options; // 0x84
	char m_bCanPressAndHold : 1; // 0x94
	float m_fPressAndHoldModifierAmount; // 0x98
};

struct UUIComponent_BattlePassChallenge {
	ObjectProperty m_mcLockChallenge; // 0x120
	ObjectProperty m_mcLockReward; // 0x128
	ObjectProperty m_mcTitleTF0; // 0x130
	ObjectProperty m_mcTitleTF1; // 0x138
	ObjectProperty m_mcLockedTF; // 0x140
	ObjectProperty m_mcRewardTF0; // 0x148
	ObjectProperty m_mcRewardTF1; // 0x150
	ObjectProperty m_pGoalList; // 0x158
};

struct UTgSeqAct_DefenseWaveSpawner {
	int32_t m_nRoundNumber; // 0x108
	float m_fSpawnFrequency; // 0x10c
	float m_fNextSpawnTime; // 0x110
};

struct UUIPatchNotesJsonManager {
	ObjectProperty m_pMovie; // 0x84
	FPatchNotesData m_PatchData; // 0x8c
	TArray<ObjectProperty> m_PatchImages; // 0xf4
};

struct USkelControl_TwistBone {
	FName SourceBoneName; // 0xd0
	float TwistAngleScale; // 0xd8
};

struct ALadder {
	ObjectProperty MyLadder; // 0x378
	ObjectProperty LadderList; // 0x380
};

struct UGoal_AtActor {
	ObjectProperty GoalActor; // 0x78
	float GoalDist; // 0x80
	char bKeepPartial : 1; // 0x84
};

struct UAnimNotify_PawnMaterialParam {
	TArray<FScalarParameterInterpStruct> ScalarParameterInterpArray; // 0x68
};

struct UMaterialExpressionCeil {
	FExpressionInput Input; // 0xb0
};

struct UTgAnimMetaData_SkelControl_BoneScale_KeyFrame {
	TArray<FName> SkelControlNameList; // 0x60
	TArray<FTimeModifier> KeyFrames; // 0x70
	char bAllowScaleUp : 1; // 0x80
	char bAllowScaleDown : 1; // 0x80
	char bAdjustControllerStrength : 1; // 0x80
	char bFullControlOverController : 1; // 0x80
	char bSetKeysNoInterp : 1; // 0x80
	char bForceFirstKeyFrameOnBecomeRelevant : 1; // 0x80
	char bForceLastKeyFrameOnCeaseRelevant : 1; // 0x80
	FName SkelControlName; // 0x84
	EOnRelevanceChange OnBecomeRelevantBehavior; // 0x8c
	EOnRelevanceChange OnCeaseRelevantBehavior; // 0x8d
	float OnBecomeRelevantStrength; // 0x90
	float OnCeaseRelevantStrength; // 0x94
};

struct UTgDeviceForm_Spray {
	ObjectProperty m_SprayMIC; // 0x2bc
	int32_t m_nRandAlphaMaskMax; // 0x2c4
	int32_t m_nPrevAlphaMask; // 0x2c8
	ComponentProperty c_SpawnedDecal; // 0x2cc
	float m_fAccurateTraceLength; // 0x2d4
	float m_fWidth; // 0x2d8
	float m_fHeight; // 0x2dc
	float m_fDepth; // 0x2e0
	SprayDisplayBehavior m_SprayBehavior; // 0x2e4
	char m_bInitializedSprayParams : 1; // 0x2e8
	int32_t m_nSprayHitFXId; // 0x2ec
	int32_t m_nSprayMissedFXId; // 0x2f0
	ObjectProperty c_SprayHitFX; // 0x2f4
	ObjectProperty c_SprayMissedFX; // 0x2fc
};

struct UPComPictureInPicture {
	FPointer VfTable_FCallbackEventDevice; // 0x60
	ObjectProperty Scene; // 0x68
	ObjectProperty RenderTargetToUse; // 0x70
	TArray<FPComPipViewDesc> ViewDescs; // 0x78
	char bEnableDebugRendering : 1; // 0x88
	FVector2D CurrentOffset; // 0x8c
	FVector2D CurrentScaling; // 0x94
};

struct ATgDeploy_GeometryBuck {
	char m_bInteriorEffectApplied : 1; // 0x470
};

struct UParticleModuleSize_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x8c
};

struct ATgFatalityMeshActor {
	int32_t m_nTaskForceId; // 0x280
	ComponentProperty m_Mesh; // 0x284
};

struct ATgDevice_DoubleCharge {
	int32_t m_nTotalNumShots; // 0xb60
	int32_t m_nShotsFired; // 0xb64
	char m_bSetAsTargetingDeviceForMultiFire : 1; // 0xb68
};

struct USpeechRecognition {
	FString Language; // 0x60
	float ConfidenceThreshhold; // 0x70
	TArray<FRecogVocabulary> Vocabularies; // 0x74
	TArray<char> VoiceData; // 0x84
	TArray<char> WorkingVoiceData; // 0x94
	TArray<char> UserData; // 0xa4
	FRecogUserData InstanceData[0x4]; // 0xb4
	char bDirty : 1; // 0x104
	char bInitialised : 1; // 0x104
	FPointer FnxVoiceData; // 0x108
};

struct UPComPlayerProfile {
	int32_t Rank; // 0x94
	int32_t Kills; // 0x98
	int32_t Deaths; // 0x9c
	int32_t Assists; // 0xa0
	int32_t XpLevel; // 0xa4
	int32_t HZPoints; // 0xa8
	int32_t XPPoints; // 0xac
	int32_t AssistPoints; // 0xb0
	int32_t AverageScore; // 0xb4
	int32_t BoostHoursRemaining; // 0xb8
	int32_t InfoMask; // 0xbc
	int32_t TimePlayed; // 0xc0
	int32_t TotalAccolades; // 0xc4
	int32_t FastestSki; // 0xc8
	int32_t FlagGrabs; // 0xcc
	int32_t FlagCaps; // 0xd0
	int32_t GensDestroyed; // 0xd4
	int32_t ObjsDestroyed; // 0xd8
	char bVIP : 1; // 0xdc
	char bBoost : 1; // 0xdc
	int32_t PlayerID; // 0xe0
	FString PlayerName; // 0xe4
	TArray<FBadgeStruct> Badges; // 0xf4
	TArray<FBadgeStruct> TopBadges; // 0x104
	TArray<FPropertyPair> ClassTimePlayed; // 0x114
	TArray<FAccoladeStruct> Accolades; // 0x124
};

struct UTgAchievement_Wanderer {
	FVector m_vLastPlayerLocation; // 0x90
	char m_bLastLocationValid : 1; // 0x9c
	float m_fDistanceAccumulator; // 0xa0
};

struct UTgAIBehaviorComposite_SequenceScripted {
	char bFreezeOnLast : 1; // 0xb8
	char bIsLooping : 1; // 0xb8
	char bFirstChildIsResetTest : 1; // 0xb8
	char bResetSequenceOnFailure : 1; // 0xb8
};

struct UNxForceFieldRadialComponent {
	float ForceStrength; // 0x2bc
	float ForceRadius; // 0x2c0
	float SelfRotationStrength; // 0x2c4
	ERadialImpulseFalloff ForceFalloff; // 0x2c8
	FPointer Kernel; // 0x2cc
};

struct USeqEvent_Used {
	char bAimToInteract : 1; // 0x128
	float InteractDistance; // 0x12c
	FString InteractText; // 0x130
	ObjectProperty InteractIcon; // 0x140
	TArray<AActor*> ClassProximityTypes; // 0x148
	TArray<AActor*> IgnoredClassProximityTypes; // 0x158
};

struct UUIComponent_HealFeed {
	TArray<ObjectProperty> m_InactiveEntries; // 0x120
	FHealSource m_HealSources[0x5]; // 0x130
	ObjectProperty m_pViewTarget; // 0x234
	char m_bIsVisible : 1; // 0x23c
	float m_fSourceHideDelay; // 0x240
	float m_fUpdateDisplayTimer; // 0x244
	float m_fUpdateDisplayRate; // 0x248
	TMap<None, None> m_HealAmountMap; // 0x24c
};

struct ATgDeploy_TurretEffectField {
	TArray<ObjectProperty> m_DeployTimePendingTargets; // 0x47c
	ObjectProperty m_ParentTurret; // 0x48c
};

struct UTgAnimBlendByFall {
	EFallSource m_FallSource; // 0x168
	EBlendFallTypes FallState; // 0x169
	EPhysics m_PreviousTickPhysics; // 0x16a
	float LastFallingVelocity; // 0x16c
	ObjectProperty pOwner; // 0x170
	float m_fPrelandDistance; // 0x178
	char m_bDebugMeasureJumpUp : 1; // 0x17c
	char m_bDebugMeasureJumpDownToLand : 1; // 0x17c
	char m_bMeasuring : 1; // 0x17c
	char m_bUsesPreDown : 1; // 0x17c
	char m_bJumpOnly : 1; // 0x17c
	FVector m_StartMeasureJump; // 0x180
	float m_fMeasureTime; // 0x18c
	float m_fLandingMovementPlayRate; // 0x190
	FName m_nmNameLandingSynchGroup; // 0x194
};

struct ATriggeredPath {
	char bOpen : 1; // 0x378
	ObjectProperty MyTrigger; // 0x37c
};

struct UTgInventoryObject_Listen_Combo_Evie {
	TArray<ObjectProperty> m_MarkedTargets; // 0xd0
	float m_fBlinkTimestamp; // 0xe0
	float m_fIceBlockTimestamp; // 0xe4
};

struct UMcpManagedValueManager {
	FString CreateSaveSlotUrl; // 0xc8
	FString ReadSaveSlotUrl; // 0xd8
	FString UpdateValueUrl; // 0xe8
	FString DeleteValueUrl; // 0xf8
	TArray<FManagedValueSaveSlot> SaveSlots; // 0x108
	TArray<FSaveSlotRequestState> CreateSaveSlotRequests; // 0x118
	TArray<FSaveSlotRequestState> ReadSaveSlotRequests; // 0x128
	TArray<FValueRequestState> UpdateValueRequests; // 0x138
	TArray<FValueRequestState> DeleteValueRequests; // 0x148
};

struct UInterpTrackHeadTracking {
	TArray<FHeadTrackingKey> HeadTrackingTrack; // 0xa0
	TArray<FName> TrackControllerName; // 0xb0
	float LookAtActorRadius; // 0xc0
	char bDisableBeyondLimit : 1; // 0xc4
	char bLookAtPawns : 1; // 0xc4
	float MaxLookAtTime; // 0xc8
	float MinLookAtTime; // 0xcc
	float MaxInterestTime; // 0xd0
	TArray<AActor*> ActorClassesToLookAt; // 0xd4
	TArray<FName> TargetBoneNames; // 0xe4
};

struct UDrawSphereComponent {
	FColor SphereColor; // 0x24c
	ObjectProperty SphereMaterial; // 0x250
	float SphereRadius; // 0x258
	int32_t SphereSides; // 0x25c
	char bDrawWireSphere : 1; // 0x260
	char bDrawLitSphere : 1; // 0x260
	char bDrawOnlyIfSelected : 1; // 0x260
};

struct USoundClass {
	FSoundClassProperties Properties; // 0x60
	TArray<FName> ChildClassNames; // 0x90
	char bIsChild : 1; // 0xa0
	TMap<None, None> EditorData; // 0xa4
};

struct UGameAICmd_Hover_MoveToGoal {
	ObjectProperty Path; // 0x84
	ObjectProperty Find; // 0x8c
	ObjectProperty Goal; // 0x94
	float Radius; // 0x9c
	char bWasFiring : 1; // 0xa0
	float DesiredHoverHeight; // 0xa4
	float CurrentHoverHeight; // 0xa8
	float SubGoalReachDist; // 0xac
	float GoalDistance; // 0xb0
	FVector MoveVectDest; // 0xb4
	ObjectProperty CurrentSpec; // 0xc0
};

struct UKismetBookMark {
	FString BookMarkSequencePathName; // 0x6c
};

struct UUIDataSocial {
	char m_bPrefersMic : 1; // 0x70
	int32_t m_nOnlineFriendCount; // 0x74
	int32_t m_nConnectedFriendCount; // 0x78
	int32_t m_nPendingFriendInvites; // 0x7c
	Fdword m_dwLastUpdatePartyActiveCount; // 0x80
	int32_t m_nReferralPeriodSeconds; // 0x84
	Fdword m_dwReferredHighestLevel; // 0x88
	Fdword m_dwReferredLongestPlayedMinutes; // 0x8c
	Fdword m_dwReferredReachedTier2; // 0x90
	Fdword m_dwLFGMinimumLevel; // 0x94
	Fdword m_dwLFGMaximumLevel; // 0x98
	Fdword m_dwCurrentTeamId; // 0x9c
	FString m_sLFGMessage; // 0xa0
	TArray<ObjectProperty> m_AllFriends; // 0xb0
	TArray<ObjectProperty> m_CrossPlatformFriends; // 0xc0
	TArray<ObjectProperty> m_PortalFriends; // 0xd0
	TArray<ObjectProperty> m_Party; // 0xe0
	TArray<ObjectProperty> m_Search; // 0xf0
	TArray<ObjectProperty> m_ReferredPlayers; // 0x100
	TArray<ObjectProperty> m_Referrers; // 0x110
	TArray<ObjectProperty> m_LFGPlayers; // 0x120
	TArray<Fdword> m_LFGFilters; // 0x130
	TArray<Fdword> m_LFGSelfFilters; // 0x140
	TMap<None, None> m_Players; // 0x150
	TMap<None, None> m_PlayerByUserId; // 0x198
};

struct UParticleModuleUberBase {
	TArray<FName> RequiredModules; // 0x68
};

struct UAnimMetaData_SkelControl {
	TArray<FName> SkelControlNameList; // 0x60
	char bFullControlOverController : 1; // 0x70
	FName SkelControlName; // 0x74
};

struct USeqAct_AkSetState {
	FString StateGroup; // 0x108
	FString State; // 0x118
};

struct ALevelGridVolume {
	FString LevelGridVolumeName; // 0x2bc
	LevelGridCellShape CellShape; // 0x2cc
	int32_t Subdivisions[0x3]; // 0x2d0
	float LoadingDistance; // 0x2dc
	float KeepLoadedRange; // 0x2e0
	FKConvexElem CellConvexElem; // 0x2e4
};

struct UUIComponent_BuyCrownsButton {
	ObjectProperty m_mcTF; // 0x120
	ObjectProperty m_pButton; // 0x128
};

struct UInterpTrackInstToggle {
	ETrackToggleAction Action; // 0x60
	float LastUpdatePosition; // 0x64
	char bSavedActiveState : 1; // 0x68
};

struct ATgCoverPoint {
	char m_bLeanLeft : 1; // 0x394
	char m_bLeanRight : 1; // 0x394
	char m_bAllowPopup : 1; // 0x394
	char m_bAllowMantle : 1; // 0x394
	FVector m_vLeanLeft; // 0x398
	FVector m_vLeanRight; // 0x3a4
	FVector m_vPopUp; // 0x3b0
};

struct UUIComponent_DailyRewardPanel {
	char m_eState; // 0x120
	FString m_sTimeLeft; // 0x124
	ObjectProperty m_pRewardLTI; // 0x134
	ObjectProperty m_mcIcon; // 0x13c
	ObjectProperty m_mcRewardTF; // 0x144
	ObjectProperty m_mcPriceTF; // 0x14c
	ObjectProperty m_mcFlash; // 0x154
	ObjectProperty m_mcRewardClaimed; // 0x15c
	ObjectProperty m_pRewardDays; // 0x164
	ObjectProperty m_akRewardClaimSuccess; // 0x16c
	ObjectProperty m_akRewardClaimFail; // 0x174
};

struct UUIJoinCustomPopup {
	char m_bHaveInput : 1; // 0x244
	ObjectProperty m_mcTitle; // 0x248
	ObjectProperty m_mcError; // 0x250
	ObjectProperty m_mcMatchNameTF; // 0x258
	ObjectProperty m_mcInputMatchName; // 0x260
	ObjectProperty m_mcPasswordTF; // 0x268
	ObjectProperty m_mcInputPass; // 0x270
	ObjectProperty m_mcInputJoin; // 0x278
	ObjectProperty m_mcDummyButtonMatch; // 0x280
	ObjectProperty m_mcDummyButtonPassword; // 0x288
	ObjectProperty m_pJoinCustomMatchInputGroup; // 0x290
	ObjectProperty m_pGameToJoin; // 0x298
};

struct USeqEvent_MobileMotion {
	float Roll; // 0x128
	float Pitch; // 0x12c
	float Yaw; // 0x130
	float DeltaRoll; // 0x134
	float DeltaPitch; // 0x138
	float DeltaYaw; // 0x13c
};

struct UTgSeqAct_SetUltimateEnergy {
	float fChargePercent; // 0x108
};

struct UUIData_List_TitleIcon {
	int32_t nIcon; // 0x70
	TArray<FString> sTitles; // 0x74
};

struct UMobileMenuElement {
	FVector2D VpPos; // 0x60
	FVector2D VpSize; // 0x68
	char bIsVisible : 1; // 0x70
	char bIsActive : 1; // 0x70
};

struct UTgInvListener_DeathAfterHit {
	float m_fResetTimer; // 0xd0
	TArray<ObjectProperty> m_pLastTargetsHit; // 0xd4
};

struct UUIHudVGS {
	ObjectProperty m_Label[0xe]; // 0x244
	ObjectProperty m_Keybind[0xe]; // 0x2b4
	ObjectProperty m_ListItem[0xe]; // 0x324
	ObjectProperty m_GamepadItem[0x6]; // 0x394
	ObjectProperty m_FramePC; // 0x3c4
	ObjectProperty m_FrameConsole; // 0x3cc
	ObjectProperty m_pRootPC; // 0x3d4
	ObjectProperty m_pRootConsole; // 0x3dc
	ObjectProperty m_pCurrent; // 0x3e4
	char m_bIsGamepadSequence : 1; // 0x3ec
	TArray<FName> m_ActiveKeys; // 0x3f0
};

struct UCanvas {
	ObjectProperty Font; // 0x60
	float OrgX; // 0x68
	float OrgY; // 0x6c
	float ClipX; // 0x70
	float ClipY; // 0x74
	float CurX; // 0x78
	float CurY; // 0x7c
	float CurZ; // 0x80
	float CurYL; // 0x84
	FColor DrawColor; // 0x88
	char bCenter : 1; // 0x8c
	char bNoSmooth : 1; // 0x8c
	int32_t SizeX; // 0x90
	int32_t SizeY; // 0x94
	FPointer Canvas; // 0x98
	FPointer SceneView; // 0xa0
	FPlane ColorModulate; // 0xb0
	ObjectProperty DefaultTexture; // 0xc0
};

struct USeqAct_AddInt {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct USeqAct_ModifyObjectList {
	int32_t ListEntriesCount; // 0x108
};

struct APlayerReplicationInfo {
	float Score; // 0x280
	int32_t Deaths; // 0x284
	char Ping; // 0x288
	ETTSSpeaker TTSSpeaker; // 0x289
	char RemoteUserDataUpdated; // 0x28a
	int32_t NumLives; // 0x28c
	FString PlayerName; // 0x290
	FString OldName; // 0x2a0
	int32_t PlayerID; // 0x2b0
	ObjectProperty Team; // 0x2b4
	char bAdmin : 1; // 0x2bc
	char bIsSpectator : 1; // 0x2bc
	char bOnlySpectator : 1; // 0x2bc
	char bWaitingPlayer : 1; // 0x2bc
	char bReadyToPlay : 1; // 0x2bc
	char bOutOfLives : 1; // 0x2bc
	char bBot : 1; // 0x2bc
	char bHasBeenWelcomed : 1; // 0x2bc
	char bIsInactive : 0; // 0x2bc
	char bFromPreviousLevel : 0; // 0x2bc
	char bIsTargeted : 0; // 0x2bc
	char RemoteUserIsGuest : 0; // 0x2bc
	int32_t StartTime; // 0x2c0
	FString StringSpectating; // 0x2c4
	FString StringUnknown; // 0x2d4
	int32_t Kills; // 0x2e4
	UGameMessage* GameMessageClass; // 0x2e8
	float ExactPing; // 0x2f0
	FString SavedNetworkAddress; // 0x2f4
	FUniqueNetId UniqueId; // 0x304
	FUniqueNetId ConsoleUniqueId; // 0x30c
	FName SessionName; // 0x314
	FAutomatedTestingDatum AutomatedTestingData; // 0x31c
	int32_t StatConnectionCounts; // 0x324
	int32_t StatPingTotals; // 0x328
	int32_t StatPingMin; // 0x32c
	int32_t StatPingMax; // 0x330
	int32_t StatPKLTotal; // 0x334
	int32_t StatPKLMin; // 0x338
	int32_t StatPKLMax; // 0x33c
	int32_t StatMaxInBPS; // 0x340
	int32_t StatAvgInBPS; // 0x344
	int32_t StatMaxOutBPS; // 0x348
	int32_t StatAvgOutBPS; // 0x34c
	ObjectProperty Avatar; // 0x350
	FPRIAudioDeviceInfo RemoteUserAudioDevices[0xa]; // 0x358
	FString RemoteUserId; // 0x470
};

struct UUIData_LootTableItem {
	Fdword m_dwLootId; // 0x60
	ObjectProperty m_pParentVendor; // 0x64
	TArray<ObjectProperty> m_Prices; // 0x6c
	Fdword m_dwPrevRequiredItemId; // 0x7c
	char m_bIsDynamicStoreBundle : 1; // 0x80
};

struct UClipPadEntry {
	FString Title; // 0x60
	FString Text; // 0x70
};

struct USeqAct_DelaySwitch {
	int32_t LinkCount; // 0x120
	int32_t CurrentIdx; // 0x124
	float SwitchDelay; // 0x128
	float NextLinkTime; // 0x12c
};

struct UAnimNotify_Sound {
	ObjectProperty SoundCue; // 0x68
	char bFollowActor : 1; // 0x70
	char bIgnoreIfMeshHidden : 1; // 0x70
	char bIgnoreIfActorHidden : 1; // 0x70
	FName BoneName; // 0x74
	float PercentToPlay; // 0x7c
	float VolumeMultiplier; // 0x80
	float PitchMultiplier; // 0x84
};

struct UTgInventoryObject_Listen_StandingStillSelfEffect {
	float m_fRestTime; // 0xc8
	char m_bIsApplied : 1; // 0xcc
	ObjectProperty m_CachedPawnOwner; // 0xd0
};

struct UUIHudVGSData {
	int32_t m_nId; // 0x60
	int32_t m_nParentId; // 0x64
	int32_t m_nScopeVal; // 0x68
	FString m_sLabel; // 0x6c
	FString m_sOutput; // 0x7c
	FString m_sKeybind; // 0x8c
	TArray<ObjectProperty> m_Children; // 0x9c
};

struct AAISwitchablePylon {
	char bOpen : 1; // 0x490
};

struct UUIComponent_ItemIconInventory {
	ObjectProperty m_mcIcon; // 0x120
	ObjectProperty m_mcQuantity; // 0x128
};

struct UUIInteractable_Item {
	ObjectProperty m_mcPrice; // 0x140
	ObjectProperty m_mcGlow; // 0x148
	ObjectProperty m_mcRarityGlow; // 0x150
	ObjectProperty m_mcEquipped; // 0x158
	ObjectProperty m_pCTA; // 0x160
	ObjectProperty m_mcSprayUnlocked; // 0x168
	ObjectProperty m_mcUpgradeText; // 0x170
	ObjectProperty m_mcStarburstA; // 0x178
	ObjectProperty m_mcStarburstB; // 0x180
	ObjectProperty m_mcGlowA; // 0x188
	ObjectProperty m_mcGlowB; // 0x190
	ObjectProperty m_mcGlowC; // 0x198
	ObjectProperty m_mcGlowD; // 0x1a0
	ObjectProperty m_mcGlowE; // 0x1a8
	char m_bEquipped : 1; // 0x1b0
	char m_bShowChampion : 1; // 0x1b0
	int32_t m_nUpgradeTickHandle; // 0x1b4
	float m_fUpgradeAnimDuration; // 0x1b8
	float m_fUpgradeTimer; // 0x1bc
	ObjectProperty m_akCardUpgrade; // 0x1c0
	ObjectProperty m_akCardLevelUp; // 0x1c8
};

struct UUIComponent_EsportsTeam {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_mcRecord; // 0x128
	ObjectProperty m_mcTexture; // 0x130
};

struct UTgGfxScene {
	FPointer VfTable_ITgCallbackInterface; // 0x118
	UObject* m_UISceneClass; // 0x120
	ObjectProperty m_UIScene; // 0x128
	TArray<GFXOPTION> m_OptionList; // 0x130
	TArray<FUIDisplayData> m_DisplayData; // 0x140
	TArray<ObjectProperty> m_Blockers; // 0x150
	TArray<FUIKeyCommand> m_KeyCommands; // 0x160
	TArray<ObjectProperty> m_Prompts; // 0x170
	UIALIGNINGTYPE m_ePromptAlignment; // 0x180
	UISCALINGTYPE m_eScalingType; // 0x181
	UISNAPPINGTYPE m_eSnappingType; // 0x182
	UIALIGNINGTYPE m_eAligningType; // 0x183
	float m_fPromptOffsetX; // 0x184
	int32_t m_nHighlight; // 0x188
	int32_t m_nSelectCount; // 0x18c
	int32_t m_nBackground; // 0x190
	char m_bBlur : 1; // 0x194
	char m_bBlurForeground : 1; // 0x194
	char m_bReshow : 1; // 0x194
	char m_bHidden : 1; // 0x194
	char m_bDisable : 1; // 0x194
	char m_bInitData : 1; // 0x194
	char m_bShowFade : 1; // 0x194
	char m_bVisibleOnLoad : 1; // 0x194
	char m_bPushContextOnLoad : 0; // 0x194
	char m_bResetFocusOnShow : 0; // 0x194
	char m_bResetHeaderFocusOnShow : 0; // 0x194
	char m_bResize : 0; // 0x194
	char m_bIsPopup : 0; // 0x194
	char m_bDead : 0; // 0x194
	char m_bAlwaysTick : 0; // 0x194
	char m_bAllowSpectatorClickThru : 0; // 0x194
	char m_bShowCursor : 0; // 0x194
	char m_bCaptureKeys : 0; // 0x194
	char m_bConsumeMotion : 0; // 0x194
	char m_bAcceptsInput : 0; // 0x194
	char m_bRegisterBack : 0; // 0x194
	char m_bIsOnline : 0; // 0x194
	char m_bCanShake : 0; // 0x194
	char m_bShouldShake : 0; // 0x194
	char m_bAlwaysKeepOpen : 0; // 0x194
	char m_bAllowMultipleOnStack : 0; // 0x194
	char m_bHasBeenUninitialized : 0; // 0x194
	float m_fScaling; // 0x198
	float m_fScale; // 0x19c
	float m_fDeltaTime; // 0x1a0
	FVector2D m_CachedPosition; // 0x1a4
	ObjectProperty m_akOver; // 0x1ac
	ObjectProperty m_akShow; // 0x1b4
	ObjectProperty m_akHide; // 0x1bc
	ObjectProperty m_akTabs; // 0x1c4
	ObjectProperty m_akScroll; // 0x1cc
	int32_t m_nEventFunc; // 0x1d4
	int32_t m_nEventType; // 0x1d8
	int32_t m_nEventIndex; // 0x1dc
	ObjectProperty m_pFocus; // 0x1e0
	ObjectProperty m_pData; // 0x1e8
	ObjectProperty m_pMovie; // 0x1f0
	ObjectProperty m_pUIData; // 0x1f8
	ObjectProperty m_mcHeaderBumper[0x2]; // 0x200
	ObjectProperty m_grHeader; // 0x210
	int32_t m_nFocusedGroup; // 0x218
	TArray<ObjectProperty> m_pInputGroups; // 0x21c
	ObjectProperty m_CallbackContainer; // 0x22c
	DelegateProperty __DelegateEvent__Delegate; // 0x234
};

struct ASceneCaptureActor {
	ComponentProperty SceneCapture; // 0x280
};

struct UUIData_MapMarker {
	char m_bActive : 1; // 0x60
	float m_fTimer; // 0x64
	FVector m_vLocation; // 0x68
};

struct UMcpServiceBase {
	FString McpConfigClassName; // 0x60
	ObjectProperty McpConfig; // 0x70
};

struct UTgEffectDamage {
	int32_t m_nSimplifiedPropertyId; // 0xa0
	UTgDamageType* m_DamageTypeClass; // 0xa4
	UTgDamageType* m_DefaultDamageTypeClass; // 0xac
	UTgDamageType* m_ArmorHitDamageTypeClass; // 0xb4
	float m_fDamageInitial; // 0xbc
	float m_fBonusDamageToShields; // 0xc0
	char m_bAllowLifeSteal : 1; // 0xc4
	char m_bCanBeBuffed : 1; // 0xc4
};

struct UTgEffectForm_BuffBelt {
	FPointer VfTable_FTickableObject; // 0xfc
	float m_OrbitAngleYawOffset; // 0x104
	float m_OrbitHeightOffset; // 0x108
	char m_bFirstUpdate : 1; // 0x10c
	float m_OrbitRotationSpeed; // 0x110
};

struct ATgWeatherVolume {
	ObjectProperty m_Template; // 0x2bc
};

struct UMcpServerTimeManager {
	FString TimeStampUrl; // 0x98
	FString LastTimeStamp; // 0xa8
	ObjectProperty HTTPRequestServerTime; // 0xb8
};

struct UDominantDirectionalLightComponent {
	FDominantShadowInfo DominantLightShadowInfo; // 0x1d0
	FArray_Mirror DominantLightShadowMap; // 0x280
};

struct UUIInteractable_ButtonWithKey {
	ObjectProperty m_pKey; // 0x140
};

struct USeqAct_RandomSwitch {
	TArray<int32_t> AutoDisabledIndices; // 0x124
};

struct USeqAct_MobileAddInputZones {
	FName ZoneName; // 0x108
	ObjectProperty NewZone; // 0x110
};

struct UTgAIBehaviorCondition_PolymorphState {
	EPolymorphType PolymorphState; // 0x98
};

struct USubsystem {
	FPointer VfTable_FExec; // 0x60
};

struct UInterpTrackFloatMaterialParam {
	TArray<FMaterialReferenceList> Materials; // 0xb8
	ObjectProperty Material; // 0xc8
	FName ParamName; // 0xd0
	char bNeedsMaterialRefsUpdate : 1; // 0xd8
};

struct ATgDeploy_LootCrateEncounter {
	char r_bIsLocked : 1; // 0x4b8
	char r_bEncounterActive : 1; // 0x4b8
};

struct UTgGameplayCurves {
	TArray<ObjectProperty> CurveSets; // 0x60
	TArray<ObjectProperty> InheritedCurves; // 0x70
	char bShowInheritedCurves : 1; // 0x80
	char bInheritedCurvesShareEditorTab : 1; // 0x80
	ObjectProperty CurveEdSetup; // 0x84
};

struct ATgDevice_KingBomb {
	float m_fEndFireZoomDurationOverride; // 0xb60
};

struct USeqAct_SetBool {
	char DefaultValue : 1; // 0x108
};

struct ATgDevice_Withdraw {
	char bInStealth : 1; // 0xb60
};

struct ATgDevice_DemonTeleport {
	FPointer VfTable_ITgDeviceInterface_MoveSpeedMultiplier; // 0xaec
	char m_bShouldDestroyDeployable : 1; // 0xaf4
	char m_bCancelled : 1; // 0xaf4
	char m_bPhaseApplied : 1; // 0xaf4
	char m_bAllowTeleport : 1; // 0xaf4
	float m_fTeleportDelayTimer; // 0xaf8
	FVector m_vTeleportToLocation; // 0xafc
	ObjectProperty pTeleportFx; // 0xb08
};

struct ATgProj_ImpalerArrow {
	float m_fCollisionScale; // 0x51c
};

struct UPComSupportCommands {
	ObjectProperty PC; // 0x60
	ObjectProperty WorldInfo; // 0x68
};

struct UTgAIBehaviorAction_SelectLeashCombatTarget {
	char bMustBeEnemy : 1; // 0x94
	char bMustBeWeakest : 1; // 0x94
	char bMustHaveLineOfSight : 1; // 0x94
	char bMustHaveDamagedGod : 1; // 0x94
	char bMustNotBeImmune : 1; // 0x94
	char bEffectGroupCategoryCheckInstigator : 1; // 0x94
	char bMustBeHittable : 1; // 0x94
	ECombatTargetType TargetType; // 0x98
	int32_t EffectCategoryId; // 0x9c
};

struct UTgAIBehaviorCondition_DeviceIsFiring {
	TG_EQUIP_POINT DeviceSlot; // 0x98
};

struct UInputGroup {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	int32_t m_nMinX; // 0x68
	int32_t m_nMinY; // 0x6c
	int32_t m_nSizeX; // 0x70
	int32_t m_nSizeY; // 0x74
	int32_t m_nFocusX; // 0x78
	int32_t m_nFocusY; // 0x7c
	int32_t m_nPrevFocusX; // 0x80
	int32_t m_nPrevFocusY; // 0x84
	char m_bLoopX : 1; // 0x88
	char m_bLoopY : 1; // 0x88
	char m_bCursorUpdateX : 1; // 0x88
	char m_bCursorUpdateY : 1; // 0x88
	char m_bCursorUpdateWidth : 1; // 0x88
	char m_bCursorUpdateHeight : 1; // 0x88
	char m_bAllowSelect : 1; // 0x88
	char m_bAllowNavigation : 1; // 0x88
	char m_bCallbacksRegistered : 0; // 0x88
	int32_t m_nDefaultXFocus; // 0x8c
	int32_t m_nDefaultYFocus; // 0x90
	ObjectProperty m_NavUp; // 0x94
	ObjectProperty m_NavDown; // 0x9c
	ObjectProperty m_NavLeft; // 0xa4
	ObjectProperty m_NavRight; // 0xac
	ObjectProperty m_Select; // 0xb4
	ObjectProperty m_InputContext; // 0xbc
	TArray<FUIGroupObject> m_Objects; // 0xc4
	ObjectProperty m_mcCursor; // 0xd4
	ObjectProperty m_pScene; // 0xdc
	ObjectProperty m_CallbackContainer; // 0xe4
};

struct UMaterialExpressionScreenPosition {
	char ScreenAlign : 1; // 0xb0
};

struct UUIInteractable_JsonPanel_Carousel {
	ObjectProperty m_mcNavControlsRoot; // 0x218
	ObjectProperty m_LeftArrow; // 0x220
	ObjectProperty m_RightArrow; // 0x228
	ObjectProperty m_mcLeftButtonPrompt; // 0x230
	ObjectProperty m_mcRightButtonPrompt; // 0x238
	ObjectProperty m_mcImage2; // 0x240
	char m_bOnImage2 : 1; // 0x248
	char m_bPauseAutoRotation : 1; // 0x248
	char m_bDisableAutoRotation : 1; // 0x248
	char m_bDisableNavigation : 1; // 0x248
	int32_t m_nIndex; // 0x24c
	ObjectProperty m_mcActivate; // 0x250
	TArray<ObjectProperty> m_NavDots; // 0x258
	float m_fNavDotCenter; // 0x268
	TArray<FJsonFeatureData> m_CarouselJsonFeatureData; // 0x26c
	float m_fDotPlacementX; // 0x27c
	float m_fDotWidth; // 0x280
	float m_fDotPadding; // 0x284
	float m_fAutoRotationTime; // 0x288
	float m_fAutoRotationDelay; // 0x28c
	FName m_GamepadLeftKey; // 0x290
	FName m_GamepadRightKey; // 0x298
};

struct ATgStaticMeshActor_CapturePoint {
	FLinearColor UncontestedCaptureColor; // 0x2a4
	FLinearColor FriendlyCaptureColor; // 0x2b4
	FLinearColor EnemyCaptureColor; // 0x2c4
	FName EmissiveColorParameterName; // 0x2d4
	FName CapturePercentParameterName; // 0x2dc
	TArray<ObjectProperty> InitialMaterialList; // 0x2e4
	char bInstancedAllMaterials : 1; // 0x2f4
	int32_t CurrentCaptureStatus; // 0x2f8
	float CurrentCapturePercent; // 0x2fc
};

struct UInputContext {
	FPointer VfTable_ITgCallbackInterface; // 0x60
	TArray<ObjectProperty> m_InputActions; // 0x68
	ObjectProperty m_CallbackContainer; // 0x78
	char m_bPassInputToNextContext : 1; // 0x80
};

struct UParticleModuleVelocityBase {
	char bInWorldSpace : 1; // 0x68
	char bApplyOwnerScale : 1; // 0x68
};

struct UTgDeviceForm_Transporter {
	ObjectProperty c_TargetingModeMeshIndicator2; // 0x2bc
	ObjectProperty c_TargetingModeFx2; // 0x2c4
	FVector c_TargetingModeFx2Location; // 0x2cc
	int32_t c_nTargetingModeFx2Id; // 0x2d8
};

struct ATgSkeletalMeshActor_DestructibleTowerChunk {
	ComponentProperty TgSkeletalMeshComp; // 0x32c
};

struct UInterpTrackInstAkEvent {
	float LastUpdatePosition; // 0x60
};

struct UUIRoot {
	TArray<FString> BadCapsLocContexts; // 0x60
};

struct USeqAct_MultiplyInt {
	int32_t ValueA; // 0x108
	int32_t ValueB; // 0x10c
	float FloatResult; // 0x110
	int32_t IntResult; // 0x114
};

struct UUICharacterSummary {
	FString ClassPathName; // 0x94
	FString CharacterName; // 0xa4
	FString CharacterBio; // 0xb4
	char bIsDisabled : 1; // 0xc4
};

struct UTgAIBehaviorAction_SelectCombatTargetsTarget {
	char bGodsOnly : 1; // 0x94
};

struct ATgStaticMeshActor_PantheonMIC {
	ObjectProperty MICOverrides[0x8]; // 0x2a4
	int32_t m_nGameTaskForce; // 0x2e4
	int32_t m_nTeamIndex; // 0x2e8
};

struct UUIItemLarge {
	ObjectProperty m_ItemLarge; // 0x60
	ObjectProperty m_mcItemOwnedText; // 0x68
	ObjectProperty m_mcItemRentedText; // 0x70
	ObjectProperty m_mcItemRentedTextLabel; // 0x78
	ObjectProperty m_mcItemRentedTextTime; // 0x80
};

struct ATgWeaponMeshActor_GroverInhandAxe {
	ObjectProperty StanceNode; // 0x504
};

struct APComPerformanceCaptureNode {
	FString ExecCommand; // 0x280
	float DelayBeforeCapture; // 0x290
};

struct UBookMark {
	FVector Location; // 0x60
	FRotator Rotation; // 0x6c
	TArray<FString> HiddenLevels; // 0x78
};

struct UNxForceFieldComponent {
	ObjectProperty Shape; // 0x24c
	ComponentProperty DrawComponent; // 0x254
	int32_t ExcludeChannel; // 0x25c
	char bForceActive : 1; // 0x260
	char bDestroyWhenInactive : 1; // 0x260
	FRBCollisionChannelContainer CollideWithChannels; // 0x264
	float Duration; // 0x268
	FPointer ForceField; // 0x26c
	TArray<FPointer> ConvexMeshes; // 0x274
	TArray<FPointer> ExclusionShapes; // 0x284
	TArray<FPointer> ExclusionShapePoses; // 0x294
	int32_t SceneIndex; // 0x2a4
	float ElapsedTime; // 0x2a8
	ComponentProperty RenderComponent; // 0x2ac
	FPointer RBPhysScene; // 0x2b4
};

struct ATgDevice_PoppyBomb {
	char r_bHasActiveProjectile : 1; // 0xaec
};

struct ATgDeploy_IllusionLongbow {
	int32_t c_nDefaultBodyMeshId; // 0x448
	int32_t c_nDefaultHeadMeshId; // 0x44c
	int32_t c_nDefaultWeaponMeshId; // 0x450
	ComponentProperty m_BodyMesh; // 0x454
	ComponentProperty m_HeadMesh; // 0x45c
	ComponentProperty m_WeaponMesh; // 0x464
	TArray<ObjectProperty> m_bodyReplacementMICs; // 0x46c
	TArray<ObjectProperty> m_headReplacementMICs; // 0x47c
	TArray<ObjectProperty> m_weaponReplacementMICs; // 0x48c
	char m_bFadingAway : 1; // 0x49c
	float m_fLifeAfterDeathOverride; // 0x4a0
	ObjectProperty m_FxCollisionProxy; // 0x4a4
	float m_fCollisionRadius; // 0x4ac
};

struct UUIData_Float {
	float m_fValue; // 0x60
};

struct UTimeLapseRecordingDriver {
	FString DemoSpectatorClass; // 0x208
	float DefaultRewindTime; // 0x218
};

struct ADynamicAnchor {
	ObjectProperty CurrentUser; // 0x378
};

struct UTgSkelCon_FootPlacement {
	char bShouldUseWorldDown : 1; // 0x15c
};

struct UMaterialExpressionDeriveNormalZ {
	FExpressionInput InXY; // 0xb0
};

struct UParticleModuleAccelerationOverLifetime {
	FRawDistributionVector AccelOverLife; // 0x6c
};

struct USeqAct_AndGate {
	char bOpen : 1; // 0x108
	TArray<char> LinkedOutputFiredStatus; // 0x10c
	TArray<FPointer> LinkedOutputs; // 0x11c
};

struct ATgSkeletalMeshActor_Leash {
	ComponentProperty m_StartMesh; // 0x32c
	FName m_StartBoneName; // 0x334
	ComponentProperty m_EndMesh; // 0x33c
	FName m_EndBoneName; // 0x344
	ObjectProperty m_StartControl; // 0x34c
	ObjectProperty m_EndControl; // 0x354
};

struct UTgAIBehaviorCondition_IsWithinDistance {
	char bIsXYOnly : 1; // 0x98
	float DistanceCheck; // 0x9c
};

struct UTgAnimNodeBlendByGameState {
	ObjectProperty PawnOwner; // 0x168
};

struct UInterpTrackFloatProp {
	FName PropertyName; // 0xb8
};

struct APrecomputedVisibilityOverrideVolume {
	TArray<ObjectProperty> OverrideVisibleActors; // 0x2bc
	TArray<ObjectProperty> OverrideInvisibleActors; // 0x2cc
};

struct UHTTPDownload {
	FString RedirectToURL; // 0x74
	char UseCompression : 1; // 0x84
	FString ProxyServerHost; // 0xaa4
	int32_t ProxyServerPort; // 0xab4
	char MaxRedirection : 1; // 0xab8
	float ConnectionTimeout; // 0xabc
};

struct UFogVolumeDensityComponent {
	ObjectProperty FogMaterial; // 0x88
	ObjectProperty DefaultFogVolumeMaterial; // 0x90
	char bEnabled : 1; // 0x98
	char bAffectsTranslucency : 1; // 0x98
	char bOnlyAffectsTranslucency : 1; // 0x98
	char bUseViewOriginOverride : 1; // 0x98
	FLinearColor SimpleLightColor; // 0x9c
	FLinearColor ApproxFogLightColor; // 0xac
	float StartDistance; // 0xbc
	float MaxDistance; // 0xc0
	TArray<ObjectProperty> FogVolumeActors; // 0xc4
	FVector ViewOriginOverride; // 0xd4
};

struct UAnimNodeCrossfader {
	FName DefaultAnimSeqName; // 0x124
	char bDontBlendOutOneShot : 1; // 0x12c
	float PendingBlendOutTimeOneShot; // 0x130
};

struct UDirectionalLightComponent {
	float TraceDistance; // 0x1a4
	char bWholeSceneOnlyDynamicShadowCasters : 1; // 0x1a8
	float WholeSceneDynamicShadowRadius; // 0x1ac
	int32_t NumWholeSceneDynamicShadowCascades; // 0x1b0
	float CascadeDistributionExponent; // 0x1b4
	FLightmassDirectionalLightSettings LightmassSettings; // 0x1b8
};

struct AMatineeActor {
	ObjectProperty InterpAction; // 0x280
	char bIsPlaying : 1; // 0x288
	char bReversePlayback : 1; // 0x288
	char bPaused : 1; // 0x288
	char AllAIGroupsInitialized : 1; // 0x288
	float PlayRate; // 0x28c
	float Position; // 0x290
	FName AIGroupNames[0xa]; // 0x294
	ObjectProperty AIGroupPawns[0xa]; // 0x2e4
	int32_t AIGroupInitStage[0xa]; // 0x334
	float ClientSidePositionErrorTolerance; // 0x35c
};

struct UCameraAnim {
	ObjectProperty CameraInterpGroup; // 0x60
	float AnimLength; // 0x68
	FBox BoundingBox; // 0x6c
	FPostProcessSettings BasePPSettings; // 0x88
	float BasePPSettingsAlpha; // 0x208
	float BaseFOV; // 0x20c
};

struct UGameStatsAggregator {
	ObjectProperty GameState; // 0x88
	TArray<FAggregateEventMapping> AggregatesList; // 0x90
	FMap_Mirror AggregateEventsMapping; // 0xa0
	TArray<FGameplayEventMetaData> AggregateEvents; // 0xe8
	TArray<int32_t> AggregatesFound; // 0xf8
	FGameEvents AllGameEvents; // 0x108
	TArray<FTeamEvents> AllTeamEvents; // 0x150
	TArray<FPlayerEvents> AllPlayerEvents; // 0x160
	FWeaponEvents AllWeaponEvents; // 0x170
	FProjectileEvents AllProjectileEvents; // 0x1c8
	FPawnEvents AllPawnEvents; // 0x220
	FDamageEvents AllDamageEvents; // 0x278
};

struct UTgSkelCon_Spring {
	FVector m_vWorldSpaceGoal; // 0x16c
	FVector m_vInitialWorldSpaceGoalOffset; // 0x178
	FVector m_vVelocity; // 0x184
	float m_fSpringStiffness; // 0x190
	float m_fSpringDamping; // 0x194
};

struct UTgAnimBlendBySkin {
	TArray<FSkinChildInfo> m_SkinMap; // 0x168
};

struct USeqAct_Deproject {
	float ScreenX; // 0x108
	float ScreenY; // 0x10c
	float TraceDistance; // 0x110
	ObjectProperty HitObject; // 0x114
	FVector HitLocation; // 0x11c
	FVector HitNormal; // 0x128
};

struct USeqCond_CompareFloat {
	float ValueA; // 0xec
	float ValueB; // 0xf0
};

struct UUISoundTheme {
	TArray<FSoundEventMapping> SoundEventBindings; // 0x60
};

struct UGameFixedCamera {
	float DefaultFOV; // 0x6c
};

struct UTgSeqEvent_EnergyUpdated {
	int32_t ResultEnergy; // 0x128
};

struct UTgCameraShake {
	float m_fShakeScale; // 0xf8
	char m_bDoControllerVibration : 1; // 0xfc
	char m_bRadialShake : 1; // 0xfc
	char m_bOrientTowardRadialEpicenter : 1; // 0xfc
	float m_fRadialShake_InnerRadius; // 0x100
	float m_fRadialShake_OuterRadius; // 0x104
	float m_fRadialShake_Falloff; // 0x108
	ECameraAnimPlaySpace m_PlaySpace; // 0x10c
};

struct ATgPlayerController {
	FPointer VfTable_ITgPaladinsController; // 0x7d8
	FPointer VfTable_ITgCallbackInterface; // 0x7e0
	FSZombieInfo ZombieInfo; // 0x7e8
	int32_t m_nAnnouncerSeriesStep[0x6]; // 0x844
	int32_t s_nPlayerId; // 0x85c
	int32_t s_nPartyId; // 0x860
	FQWord s_qwNetAccessFlags; // 0x864
	int32_t r_nXp; // 0x86c
	int32_t r_nCurrency; // 0x870
	float s_fCurrencyRemainder; // 0x874
	float s_fXpRemainder; // 0x878
	char r_bCanPurchaseItems : 1; // 0x87c
	char r_bCanChangeLoadout : 1; // 0x87c
	char r_bAutoPurchase : 1; // 0x87c
	char r_bAutoSkillUp : 1; // 0x87c
	char r_bToggleZoom : 1; // 0x87c
	char m_bBlockVGS : 1; // 0x87c
	char c_bPreparingForge : 1; // 0x87c
	char c_bAttemptingPickupWep : 1; // 0x87c
	char c_bRequestingPickup : 0; // 0x87c
	char s_bSentAutoKickAlert : 0; // 0x87c
	char s_bAddDeadTimeStatsTracker : 0; // 0x87c
	char c_bWeaponSwap : 0; // 0x87c
	char c_bDeviceSwap : 0; // 0x87c
	char r_bLockYawRotation : 0; // 0x87c
	char bPressingLeftMouseButton : 0; // 0x87c
	char bPressingRightMouseButton : 0; // 0x87c
	char bPressingMovementButton : 0; // 0x87c
	char bPressingAltFireButton : 0; // 0x87c
	char bPressingReloadButton : 0; // 0x87c
	char bPressingHealButton : 0; // 0x87c
	char bPressingRepairButton : 0; // 0x87c
	char m_bPendingReload : 0; // 0x87c
	char r_bRove : 0; // 0x87c
	char m_bNoSmoothedMovementCorrection : 0; // 0x87c
	char c_bProcessedNoSmoothNotification : 0; // 0x87c
	char s_bNoSmoothedMovementCorrectionRequested : 0; // 0x87c
	char s_bIsNoSmoothMovementCorrectionManaged : 0; // 0x87c
	char m_bUsingDeadSpectatorControlModule : 0; // 0x87c
	char s_bClearAchievementIgnoreListsOnNextTick : 0; // 0x87c
	char bDebugProjectileLagCompensation : 0; // 0x87c
	char c_bAssistModeSublevelLoaded : 0; // 0x87c
	char c_bAllowSpecialMaterialEffects : 0; // 0x87c
	char m_bIgnoreSilhouettes : 1; // 0x880
	char m_bForceSilhouettesOnVisibleGods : 1; // 0x880
	char m_bDetailedViewEnabled : 1; // 0x880
	char m_bShowPlayerCircles : 1; // 0x880
	char m_bAllowUndrawnPurchase : 1; // 0x880
	char m_bCanHearStealthPawns : 1; // 0x880
	char c_bShowFootstepInfoDebug : 1; // 0x880
	char m_bDetailedDeviceLogging : 1; // 0x880
	char m_bOutlineEnemies : 0; // 0x880
	char m_bOutlineFriendlies : 0; // 0x880
	char c_bEnablePathfinderGuide : 0; // 0x880
	char m_fPathfinderEnabled : 0; // 0x880
	char c_bIsPlayingFallWindSound : 0; // 0x880
	char m_bJustDidJumpDoubleTap : 0; // 0x880
	char m_bThreatSystemEnabled : 0; // 0x880
	char m_bOcclusionSystemEnabled : 0; // 0x880
	char m_bDebugThreatSystem : 0; // 0x880
	char c_bMatchAlmostWonSwitchPrimed : 0; // 0x880
	char m_IsTimeDilationInterpolating : 0; // 0x880
	char m_IsDesaturationInterpolating : 0; // 0x880
	char m_bIsTrackingAimTowardTargetLocation : 0; // 0x880
	char bForcedTimelapseRequested : 0; // 0x880
	char bForcedPlayOfGameRequested : 0; // 0x880
	char m_bRewindMoversForReplaySavedMoves : 0; // 0x880
	char m_bShowDebugRewindMovers : 0; // 0x880
	char c_bCaptureProgressAkEventPlaying : 0; // 0x880
	char m_bShowChampionOverviewTip : 0; // 0x880
	char m_bEnableUltimateAkEventUnocclusion : 0; // 0x880
	char c_bIsPlayOfTheGame : 0; // 0x880
	char c_bRoyaleDeploySequence : 0; // 0x880
	char m_bHideReticle : 0; // 0x880
	char m_bHideReticleAcc : 0; // 0x880
	char m_bSupportsEffectSimulation : 1; // 0x884
	char m_bForced3pOption : 1; // 0x884
	char m_bFreeCamEnabled : 1; // 0x884
	char m_bFogPPFXInitialized : 1; // 0x884
	char bMount : 1; // 0x884
	char bInADS : 1; // 0x884
	char m_bSwitchingClasses : 1; // 0x884
	char m_bAbilityOneHeld : 1; // 0x884
	char m_bMovementHeld : 0; // 0x884
	char m_bAbilityTwoFired : 0; // 0x884
	char m_bCanVault : 0; // 0x884
	char s_bUseRespawnLocation : 0; // 0x884
	char m_bEnableAutoSprint : 0; // 0x884
	char r_bBigHeadModeEnabled : 0; // 0x884
	char r_bBigHeadModeStarting : 0; // 0x884
	float c_fLastGoldNagTime; // 0x888
	int32_t m_nReviveBuybackCost; // 0x88c
	int32_t r_nStatPoints; // 0x890
	FFLOOD s_VGSFlood; // 0x894
	FFLOOD s_PingFlood; // 0x89c
	ObjectProperty r_DesiredViewPRI; // 0x8a4
	TArray<int32_t> s_nViewingPlayerIds; // 0x8ac
	ObjectProperty c_aLastViewTarget; // 0x8bc
	ObjectProperty m_CachedPlayerInput; // 0x8c4
	ObjectProperty m_CachedSpectatorInput; // 0x8cc
	ObjectProperty m_aHoverActor; // 0x8d4
	FVector m_vHoverLocation; // 0x8dc
	float m_fHoverActorActiveTime; // 0x8e8
	FVector m_vWorldMapLocation; // 0x8ec
	TArray<ObjectProperty> m_WorldMapTargetRepInfos; // 0x8f8
	FVector m_vWorldMouseLocation; // 0x908
	FVector m_vWorldMouseDirection; // 0x914
	float c_fTimeTillAFK; // 0x920
	float s_bAutoKickStartTime; // 0x924
	FTG_LAST_PURCHASE r_LastPurchasedItems[0x1a]; // 0x928
	ObjectProperty s_LastPossessedPawn; // 0x9f8
	float m_fRecentLostHealth; // 0xa00
	float m_fLastLostHealthTime; // 0xa04
	TArray<ObjectProperty> m_TargetedPlayers; // 0xa08
	float s_fWaitForSpawnSecs; // 0xa18
	float c_fRespawnTime; // 0xa1c
	float m_fDeathTime; // 0xa20
	int32_t r_bInputEnabled[0x14]; // 0xa24
	ObjectProperty ControlModule; // 0xa74
	UTgControlModule* DefaultControlModuleClass; // 0xa7c
	int32_t c_nCameraYawOffset; // 0xa84
	int32_t m_nDevicesLockingInput; // 0xa88
	int32_t m_nDevicesLockingCamera; // 0xa8c
	int32_t m_nDevicesLockingRotation; // 0xa90
	float m_fPendingReloadTime; // 0xa94
	float m_fPendingReloadMaxTime; // 0xa98
	ObjectProperty m_EndGameFocus; // 0xa9c
	float m_fLastVGS; // 0xaa4
	FVector m_vLastServerCorrectOrigPos; // 0xaa8
	float s_fLastConfirmedSentSmoothedMovementTimestamp; // 0xab4
	float c_fLastRecievedNoSmoothTimestamp; // 0xab8
	char m_byDesiredMoveSpeedReduction; // 0xabc
	TG_CAMERAPOSTURE c_eCameraPosture; // 0xabd
	EWatchOtherPlayersMode r_WatchOtherPlayer; // 0xabe
	GAME_WIN_STATE c_GameWinState; // 0xabf
	char m_bOldbRun; // 0xac0
	EHUDOverlay c_eCurrentOverlay; // 0xac1
	TG_EQUIP_POINT m_eDetailedDeviceEqp; // 0xac2
	TG_EQUIP_POINT m_LastEquipPoint; // 0xac3
	char c_LastSentClientRoll; // 0xac4
	char m_UltHeld; // 0xac5
	char m_JumpHeld; // 0xac6
	char m_JumpHeldAlt; // 0xac7
	char m_PerCharacterAlt; // 0xac8
	char c_ePickupSlot; // 0xac9
	TArray<FCameraStackInfo> c_CameraStack; // 0xacc
	int32_t c_nNextCameraStackId; // 0xadc
	float m_fTimeToViewOthersCamAfterDeath; // 0xae0
	float m_fWatchOthersFadeToBlackCamTime; // 0xae4
	float m_fWatchOthersFadeFromBlackCamTime; // 0xae8
	TArray<ObjectProperty> s_Achievements; // 0xaec
	ObjectProperty c_TgAkAudio; // 0xafc
	int32_t r_nFlashProjectile[0x20]; // 0xb04
	FsSimProjectileFireInfo r_FlashProjectileEx[0x20]; // 0xb84
	int32_t r_nFirstValidProjIdx; // 0x1304
	int32_t r_nFlashSimProjIdx; // 0x1308
	int32_t c_nLastFlashSimProjIdx; // 0x130c
	int32_t r_nPerkPointsAvail; // 0x1310
	float m_fCatapultPowerLevel; // 0x1314
	float m_fCatapultPowerRate; // 0x1318
	float m_fCatapultMinPower; // 0x131c
	float m_fCatapultMaxPower; // 0x1320
	ObjectProperty c_GameTipManager; // 0x1324
	FPointer s_pCombatMessages; // 0x132c
	float s_fLastCombatMessageProcess; // 0x1334
	int32_t c_nCurrentLevel; // 0x1338
	ObjectProperty c_TutorialAnnouncer; // 0x133c
	int32_t r_TutorialBlockedClientActions; // 0x1344
	ObjectProperty c_SubtitledMessages; // 0x1348
	ObjectProperty CachedPRI; // 0x1350
	ObjectProperty m_OverlayPathMaterial; // 0x1358
	TArray<ObjectProperty> m_HiddenPawns; // 0x1360
	ComponentProperty c_AlertAudioComponent; // 0x1370
	ObjectProperty c_AlertAkEvent; // 0x1378
	TArray<ObjectProperty> c_KismetLoadedDevices; // 0x1380
	ObjectProperty m_PreviewCameraShake; // 0x1390
	float m_fPathfinderStreamTime; // 0x1398
	float m_fPathfinderPulseTime; // 0x139c
	float m_fPathfinderLifetime; // 0x13a0
	float m_fPathfinderSpeed; // 0x13a4
	float m_fPathfinderStartDist; // 0x13a8
	float c_LastSentMoveTimeStamp; // 0x13ac
	FVector c_LastSentMoveAcceleration; // 0x13b0
	int32_t c_LastSentMoveCompressedFlags; // 0x13bc
	FVector c_LastSentClientLoc; // 0x13c0
	int32_t c_LastSentView; // 0x13cc
	ObjectProperty c_FallWindSoundPlay; // 0x13d0
	ObjectProperty c_FallWindSoundStop; // 0x13d8
	ObjectProperty c_HitMarkerSounds[0x5]; // 0x13e0
	ObjectProperty c_ScoreKillSound; // 0x1408
	ObjectProperty c_ScoreDownSound; // 0x1410
	ObjectProperty c_ChickenShardSound; // 0x1418
	int32_t m_nKillCamTargetId; // 0x1420
	int32_t m_nKillCamTargetBackupId; // 0x1424
	float r_fServerTimeStamp; // 0x1428
	float m_fLastJumpTapTime; // 0x142c
	float m_fMaxJumpDoubleTapTime; // 0x1430
	int32_t m_nVoicePackId; // 0x1434
	TArray<ObjectProperty> m_PawnsWithThreatLevels; // 0x1438
	ObjectProperty m_Pathfinder; // 0x1448
	float m_fThreatCoefficientProximity; // 0x1450
	float m_fThreatCoefficientOcclusion; // 0x1454
	float m_fThreatCoefficientBinnedOcclusion; // 0x1458
	float m_fThreatCoefficientUlt; // 0x145c
	float m_fThreatCoefficientShotAt; // 0x1460
	float m_fThreatCoefficientSeenBy; // 0x1464
	float m_fThreatCoefficientDamaged; // 0x1468
	float m_fThreatCoefficientFocused; // 0x146c
	float m_fThreatCoefficientFocusTarget; // 0x1470
	float m_fThreatCoefficientBehind; // 0x1474
	float m_fThreatCoefficientInEffectiveRange; // 0x1478
	float m_fThreatDecayCoefficientShotAt; // 0x147c
	float m_fThreatDecayCoefficientSeenBy; // 0x1480
	float m_fThreatDecayCoefficientUlt; // 0x1484
	FString m_DebugThreatSystemChannel; // 0x1488
	FString m_CurrentMusicEventName; // 0x1498
	FName m_nameBuyBurnCardsTimer; // 0x14a8
	FVector2D m_TimeDilationFromTo; // 0x14b0
	float m_TimeDilationInterpolateSeconds; // 0x14b8
	float m_TimeDilationUsedSeconds; // 0x14bc
	FVector2D m_DesaturationFromTo; // 0x14c0
	float m_DesaturationInterpolateSeconds; // 0x14c8
	float m_DesaturationUsedSeconds; // 0x14cc
	int32_t m_EnergyLastFrame; // 0x14d0
	FVector m_TrackingTargetLocation; // 0x14d4
	float m_fTrackingTargetMaxAimDistDiff; // 0x14e0
	ObjectProperty m_RoundEndAlert; // 0x14e4
	ObjectProperty m_akQueuedAnnouncer; // 0x14ec
	float m_fTimeToPlayQueuedAnnouncer; // 0x14f4
	ObjectProperty m_CurrentDirectorMatinee; // 0x14f8
	ObjectProperty m_CaptureProgressPlayAkEvent; // 0x1500
	ObjectProperty m_CaptureProgressStopAkEvent; // 0x1508
	float m_fCachedCaptureProgress; // 0x1510
	ObjectProperty m_PointGettingCapturedPlayAkEvent; // 0x1514
	int32_t m_nPointGettingCapturedPlayCount; // 0x151c
	float m_fShowChampionOverviewTipDelay; // 0x1520
	int32_t s_nRoundsIdle; // 0x1524
	float s_fIdleTimeReduction; // 0x1528
	int32_t c_nLeadingTeam; // 0x152c
	int32_t c_nLeadingTeamTicketAmount; // 0x1530
	ObjectProperty m_CallbackContainer; // 0x1534
	int32_t m_nReticleColorOverride; // 0x153c
	FLinearColor m_cReticleColor; // 0x1540
	float m_fAchievementPollRate; // 0x1550
	float m_fAchievementPollElapsed; // 0x1554
	int32_t s_nTeamMateHealMeVisibilityTest; // 0x1558
	float c_fForced3pFOV; // 0x155c
	float m_fFreeCamYawOffset; // 0x1560
	float m_fFreeCamPitchOffset; // 0x1564
	float r_fSwapWeaponDelay; // 0x1568
	float m_fReviveTeammateDistance; // 0x156c
	ObjectProperty m_TeammateReviving; // 0x1570
	ObjectProperty r_BeingRevivedByPawn; // 0x1578
	ObjectProperty m_RoyaleFogCameraMIC; // 0x1580
	ObjectProperty m_RoyaleFogMaterialEffect; // 0x1588
	int32_t c_LootPickupResponseCounter; // 0x1590
	FVector m_vLastPOVLocation; // 0x1594
	FRotator m_rLastPOVRotation; // 0x15a0
	ObjectProperty c_ChampionTickManager; // 0x15ac
	ObjectProperty c_InteractDeployable; // 0x15b4
	ObjectProperty c_InteractForgeObjective; // 0x15bc
	ObjectProperty c_InteractCatapult; // 0x15c4
	ObjectProperty m_pHud; // 0x15cc
	ObjectProperty m_3DHitIndicators[0x6]; // 0x15d4
	int32_t m_n3DHitIndicatorPoolIndex; // 0x1604
	FVector s_vRespawnLocation; // 0x1608
};

struct UUIComponent_Loadout {
	ObjectProperty m_pGems[0x5]; // 0x120
	ObjectProperty m_pCardIcons[0x5]; // 0x148
	ObjectProperty m_pPowerLevel; // 0x170
	ObjectProperty m_pLock; // 0x178
	ObjectProperty m_pNewLoadoutText; // 0x180
	ObjectProperty m_pLoadoutTypeIcon; // 0x188
	ObjectProperty m_pTitle; // 0x190
	ObjectProperty m_pCancelButton; // 0x198
	ObjectProperty m_pSelectLoadoutButton; // 0x1a0
	char m_bShowDeleteButton : 1; // 0x1a8
	char m_bDisableEmptyDecks : 1; // 0x1a8
};

struct UUIComponent_Card_Upgradable {
	ObjectProperty m_mcUpgradeText; // 0x120
	ObjectProperty m_mcStarburstA; // 0x128
	ObjectProperty m_mcStarburstB; // 0x130
	ObjectProperty m_mcGlowA; // 0x138
	ObjectProperty m_mcGlowB; // 0x140
	ObjectProperty m_mcGlowC; // 0x148
	ObjectProperty m_mcGlowD; // 0x150
	ObjectProperty m_mcGlowE; // 0x158
	ObjectProperty m_pCard; // 0x160
	int32_t m_nUpgradeQuantity; // 0x168
	int32_t m_nUpgradeTickHandle; // 0x16c
	float m_fUpgradeTimer; // 0x170
	ObjectProperty m_akCardUpgrade; // 0x174
	ObjectProperty m_akCardLevelUp; // 0x17c
};

struct UUIArmoryDetail {
	int32_t m_nBotId; // 0x244
	int32_t m_nHoverItem; // 0x248
	int32_t m_nItemIndex; // 0x24c
	int32_t m_nTreeIndex; // 0x250
	int32_t m_nSlot; // 0x254
	char m_eState; // 0x258
	char m_eItemType; // 0x259
	char m_bHovering : 1; // 0x25c
	char m_bRotating : 1; // 0x25c
	float m_fPreviousPosX; // 0x260
	float m_fBackTimer; // 0x264
	TArray<int32_t> m_nItems; // 0x268
	ObjectProperty m_pItemGroup; // 0x278
	ObjectProperty m_pLoadGroup; // 0x280
	ObjectProperty m_pTreeGroup; // 0x288
	ObjectProperty m_mcHeader; // 0x290
	ObjectProperty m_mcHeaderIcon; // 0x298
	ObjectProperty m_mcHeaderText; // 0x2a0
	ObjectProperty m_mcHeaderKey[0x2]; // 0x2a8
	ObjectProperty m_mcHeaderTab[0x3]; // 0x2b8
	ObjectProperty m_mcHeaderTabSelect[0x3]; // 0x2d0
	ObjectProperty m_mcHeaderTabShadow[0x3]; // 0x2e8
	ObjectProperty m_mcHeaderTabHighlight[0x3]; // 0x300
	ObjectProperty m_mcItems; // 0x318
	ObjectProperty m_mcItemPage; // 0x320
	ObjectProperty m_mcItemKey[0x2]; // 0x328
	ObjectProperty m_mcItemArrow[0x2]; // 0x338
	ObjectProperty m_mcItem[0xc]; // 0x348
	ObjectProperty m_mcItemIcon[0xc]; // 0x3a8
	ObjectProperty m_mcItemFrame[0xc]; // 0x408
	ObjectProperty m_mcItemActive[0xc]; // 0x468
	ObjectProperty m_mcItemRarity[0xc]; // 0x4c8
	ObjectProperty m_mcItemTexture[0xc]; // 0x528
	ObjectProperty m_mcItemIconFrame[0xc]; // 0x588
	ObjectProperty m_mcLoadout; // 0x5e8
	ObjectProperty m_mcLoadoutInfo; // 0x5f0
	ObjectProperty m_mcLoadoutInfoDesc; // 0x5f8
	ObjectProperty m_mcLoadoutInfoName; // 0x600
	ObjectProperty m_mcLoadoutInfoType; // 0x608
	ObjectProperty m_mcLoadoutInfoTexture; // 0x610
	ObjectProperty m_mcLoadoutTalent[0xa]; // 0x618
	ObjectProperty m_mcLoadoutTalentName[0xa]; // 0x668
	ObjectProperty m_mcLoadoutTalentDesc[0xa]; // 0x6b8
	ObjectProperty m_mcLoadoutTalentTexture[0xa]; // 0x708
	ObjectProperty m_mcTree; // 0x758
	ObjectProperty m_mcTreePage; // 0x760
	ObjectProperty m_mcTreeInfo; // 0x768
	ObjectProperty m_mcTreeInfoDesc; // 0x770
	ObjectProperty m_mcTreeInfoName; // 0x778
	ObjectProperty m_mcTreeInfoType; // 0x780
	ObjectProperty m_mcTreeInfoTexture; // 0x788
	ObjectProperty m_mcTreeInfoItem; // 0x790
	ObjectProperty m_mcTreeInfoItemFrame; // 0x798
	ObjectProperty m_mcTreeInfoItemTexture; // 0x7a0
	ObjectProperty m_mcTreeProgress; // 0x7a8
	ObjectProperty m_mcTreeProgressDesc; // 0x7b0
	ObjectProperty m_mcTreeProgressName; // 0x7b8
	ObjectProperty m_mcTreeProgressType; // 0x7c0
	ObjectProperty m_mcTreeProgressIcon; // 0x7c8
	ObjectProperty m_mcTreeProgressBar; // 0x7d0
	ObjectProperty m_mcTreeProgressBarTip; // 0x7d8
	ObjectProperty m_mcTreeProgressBarFill; // 0x7e0
	ObjectProperty m_mcTreeProgressTexture; // 0x7e8
	ObjectProperty m_mcTreeProgressItem; // 0x7f0
	ObjectProperty m_mcTreeProgressItemFrame; // 0x7f8
	ObjectProperty m_mcTreeProgressItemTexutre; // 0x800
	ObjectProperty m_mcTreeKey[0x2]; // 0x808
	ObjectProperty m_mcTreeArrow[0x2]; // 0x818
	FUINODESET m_mcTreeNodes[0x4]; // 0x828
	FUITITLESET m_mcTitleNodes; // 0xe88
	ObjectProperty m_mcDetails; // 0x1010
	ObjectProperty m_mcDetailDesc; // 0x1018
	ObjectProperty m_mcDetailName; // 0x1020
	ObjectProperty m_mcDetailType; // 0x1028
	ObjectProperty m_mcDetailFrame; // 0x1030
	ObjectProperty m_pItemPreviewStack; // 0x1038
	ObjectProperty m_mcRotator; // 0x1040
	ObjectProperty m_pInputTriggerLeft; // 0x1048
	ObjectProperty m_pInputTriggerRight; // 0x1050
};

struct ATgProj_HolyHammer {
	char bReachedLimit : 1; // 0x51c
};

struct UTgInventoryObject_Listen_ReduceAlternateCooldown {
	char m_bAppliedReduction : 1; // 0xc8
};

struct UTgCameraModule_Spectator {
	int32_t WorldViewPitch; // 0x68
	FTPOV OldViewpoint; // 0x6c
	float RemainingBlendTime; // 0x90
	float TotalBlendTime; // 0x94
	char bCollideWorld : 1; // 0x98
};

struct UUIComponent_CTA {
	ObjectProperty m_mcTF; // 0x120
	char m_bAnimOnHide : 1; // 0x128
};

struct UMaterialExpressionLinearInterpolate {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
	FExpressionInput Alpha; // 0x118
};

struct ULevel {
	float LightmapTotalSize; // 0x1f8
	float ShadowmapTotalSize; // 0x1fc
};

struct USeqAct_LevelStreamingBase {
	char bMakeVisibleAfterLoad : 1; // 0x120
	char bShouldBlockOnLoad : 1; // 0x120
};

struct UTgAIBehaviorAction_MoveToFogCenter {
	float Percent; // 0x9c
};

struct UUIDataDirector {
	TArray<ObjectProperty> m_AcquisitionQueues; // 0x70
	TMap<None, None> m_AcquisitionQueueMap; // 0x80
};

struct UInterpTrackToggle {
	TArray<FToggleTrackKey> ToggleTrack; // 0xa0
	char bActivateSystemEachUpdate : 1; // 0xb0
	char bActivateWithJustAttachedFlag : 1; // 0xb0
	char bFireEventsWhenForwards : 1; // 0xb0
	char bFireEventsWhenBackwards : 1; // 0xb0
	char bFireEventsWhenJumpingForwards : 1; // 0xb0
};

struct UTgAnimNodeJumpLeanOffset {
	float JumpLeanStrength; // 0x16c
	float MaxLeanChangeSpeed; // 0x170
	char bMultiplyByZVelocity : 1; // 0x174
	ObjectProperty CachedAimNode; // 0x178
	FName OldAimProfileName; // 0x180
	FVector2D PreBlendAim; // 0x188
	float LeanWeight; // 0x190
	float LeanWeightTarget; // 0x194
	float BlendTimeToGo; // 0x198
};

struct ANxTornadoAngularForceField {
	float RadialStrength; // 0x2d4
	float RotationalStrength; // 0x2d8
	float LiftStrength; // 0x2dc
	float ForceRadius; // 0x2e0
	float ForceTopRadius; // 0x2e4
	float LiftFalloffHeight; // 0x2e8
	float EscapeVelocity; // 0x2ec
	float ForceHeight; // 0x2f0
	float HeightOffset; // 0x2f4
	char BSpecialRadialForceMode : 1; // 0x2f8
	float SelfRotationStrength; // 0x2fc
	FPointer Kernel; // 0x300
};

struct UTgDeviceForm_ArcingBeam {
	TArray<FArcingFXInfo> m_ArcingBeamList; // 0x2bc
	ObjectProperty m_BeamSourceActor; // 0x2cc
	float m_fBeamPersistTime; // 0x2d4
	char m_bRequireDeviceIsFiring : 1; // 0x2d8
	char m_bIsFXContinuous : 1; // 0x2d8
	int32_t m_nBeamEffectID; // 0x2dc
};

struct UTerrainLayerSetup {
	TArray<FTerrainFilteredMaterial> Materials; // 0x60
};

struct UTgSeqEvent_ControlPointOwnershipPercent {
	float OwnershipPercent; // 0x128
	int32_t PointIndex; // 0x12c
};

struct ATgPathfinderWalker {
	ObjectProperty m_Pathfinder; // 0x280
	ObjectProperty m_CurrentSpline; // 0x288
	float m_fCurrentSplineDist; // 0x290
	DelegateProperty __OnFinishedPathing__Delegate; // 0x294
};

struct UUIData_MasteryReward {
	Fdword m_dwLevel; // 0x60
	ObjectProperty m_pLTIGiven; // 0x64
	ObjectProperty m_pItem; // 0x6c
	ObjectProperty m_pChampion; // 0x74
};

struct UParticleModuleEventReceiverBase {
	EParticleEventType EventGeneratorType; // 0x68
	FName EventName; // 0x6c
};

struct UTgAIBehaviorCondition_TimeSinceOpenedChest {
	float TimeThreshold; // 0x98
};

struct UDemoRecDriver {
	FString DemoSpectatorClass; // 0x234
	int32_t MaxRewindPoints; // 0x2ec
	float RewindPointInterval; // 0x2f4
	int32_t NumRecentRewindPoints; // 0x2f8
	int32_t ProtectedRewindPointInterval; // 0x304
	int32_t MaxEventPoints; // 0x318
	float EventPointInterval; // 0x320
	float MinEventBuffer; // 0x324
};

struct ATgDevice_ToggleInhand {
	ObjectProperty m_CachedTgP; // 0xaec
	int32_t m_nProjectilesFired; // 0xaf4
	char m_bWaitForOutro : 1; // 0xaf8
};

struct UTgStaticMeshComponent {
	char c_bFxApplied : 1; // 0x310
	TArray<ObjectProperty> c_FxList; // 0x314
	TArray<ObjectProperty> c_DatabaseFxList; // 0x324
	TArray<FFx_AssemblyData> c_FxAssemblyData; // 0x334
	int32_t m_nAssemblyId; // 0x344
};

struct ATgRoyaleCatapultGroup {
	int32_t m_nCatapultGroupID; // 0x280
};

struct UMaterialExpressionIf {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
	FExpressionInput AGreaterThanB; // 0x118
	FExpressionInput AEqualsB; // 0x14c
	FExpressionInput ALessThanB; // 0x180
};

struct USystem {
	int32_t StaleCacheDays; // 0x68
	int32_t MaxStaleCacheSize; // 0x6c
	int32_t MaxOverallCacheSize; // 0x70
	int32_t PackageSizeSoftLimit; // 0x74
	float AsyncIOBandwidthLimit; // 0x78
	FString SavePath; // 0x7c
	FString CachePath; // 0x8c
	FString CacheExt; // 0x9c
	TArray<FString> Paths; // 0xac
	TArray<FString> SeekFreePCPaths; // 0xbc
	TArray<FString> ScriptPaths; // 0xcc
	TArray<FString> FRScriptPaths; // 0xdc
	TArray<FString> CutdownPaths; // 0xec
	TArray<FName> Suppress; // 0xfc
	TArray<FString> Extensions; // 0x10c
	TArray<FString> SeekFreePCExtensions; // 0x11c
	TArray<FString> LocalizationPaths; // 0x12c
	TArray<FString> ArchivePaths; // 0x13c
	FString TextureFileCacheExtension; // 0x14c
};

struct ATgDevice_Somersault {
	ObjectProperty m_DodgeRollDevice; // 0xaec
};

struct UTgAnimNotify_ApplyRigidBodyPhysics {
	char ShouldAttachToBone : 1; // 0x68
	FName BoneName; // 0x6c
	FVector ImpulseLocation; // 0x74
	float ImpulseRadius; // 0x80
	float ImpulseStrength; // 0x84
};

struct UNavMeshGoal_GenericFilterContainer {
	TArray<ObjectProperty> GoalFilters; // 0x7c
	FPointer SuccessfulGoal; // 0x8c
	ObjectProperty MyNavigationHandle; // 0x94
	TArray<FVector> SeedLocations; // 0x9c
};

struct USeqAct_Log {
	char bOutputToScreen : 1; // 0x108
	char bIncludeObjComment : 1; // 0x108
	float TargetDuration; // 0x10c
	FVector TargetOffset; // 0x110
	FString LogMessage; // 0x11c
};

struct USoundNodeWaveStreaming {
	TArray<char> QueuedAudio; // 0x328
	float InactiveDuration; // 0x338
};

struct USeqAct_SetVector {
	FVector DefaultValue; // 0x108
};

struct UTgAISquad_Minion {
	float s_fNextClusterTime; // 0xa8
	float s_fNextMergeTime; // 0xac
};

struct UTgAIBehaviorCondition_Timer {
	float TimerLength; // 0x98
	float MinTime; // 0x9c
	char RandomTime : 1; // 0xa0
};

struct UAkComponent {
	FName BoneName; // 0x88
	ObjectProperty AutoPlayEvent; // 0x90
	char bStopWhenOwnerDestroyed : 1; // 0x98
	char bRegisteredWithWwise : 1; // 0x98
	char bIsDefaultListener : 1; // 0x98
};

struct ATgSpectatorDirector {
	char m_bIsActive : 1; // 0x280
	char m_bIsPending : 1; // 0x280
	char m_bAutoSwitchCameraViews : 1; // 0x280
	char m_bForceThirdPersonView : 1; // 0x280
	float m_fRemainingAutoUpdateCheckTime; // 0x284
	float m_fTimeSinceViewSwitchedTeams; // 0x288
	float m_fTimeSinceViewSwitchedMode; // 0x28c
	float m_fRemainingAutoReturnCheckTime; // 0x290
	SpectatorCameraMode m_CurrentCameraMode; // 0x294
	FViewTargetInfo m_CurrentRatedViewTarget; // 0x298
	FViewTargetInfo m_DemoRewindViewTarget; // 0x2bc
	FVector2D m_v2dForcedDirectorLocation; // 0x2e0
	float m_fForcedDirectorLocationTimestamp; // 0x2e8
};

struct UAudioComponent {
	ObjectProperty SoundCue; // 0x88
	ObjectProperty CueFirstNode; // 0x90
	TArray<FAudioComponentParam> InstanceParameters; // 0x98
	char bUseOwnerLocation : 1; // 0xa8
	char bAutoPlay : 1; // 0xa8
	char bAutoDestroy : 1; // 0xa8
	char bStopWhenOwnerDestroyed : 1; // 0xa8
	char bShouldRemainActiveIfDropped : 1; // 0xa8
	char bWasOccluded : 1; // 0xa8
	char bNeedsOcclusionCheck : 1; // 0xa8
	char bSuppressSubtitles : 1; // 0xa8
	char bWasPlaying : 0; // 0xa8
	char bAllowSpatialization : 0; // 0xa8
	char bFinished : 0; // 0xa8
	char bApplyRadioFilter : 0; // 0xa8
	char bRadioFilterSelected : 0; // 0xa8
	char bPreviewComponent : 0; // 0xa8
	char bIgnoreForFlushing : 0; // 0xa8
	float StereoBleed; // 0xac
	float LFEBleed; // 0xb0
	char bEQFilterApplied : 1; // 0xb4
	char bAlwaysPlay : 1; // 0xb4
	char bIsUISound : 1; // 0xb4
	char bIsMusic : 1; // 0xb4
	char bReverb : 1; // 0xb4
	char bCenterChannelOnly : 1; // 0xb4
	float m_fAdditionalPriority; // 0xb8
	TArray<FPointer> WaveInstances; // 0xbc
	TArray<char> SoundNodeData; // 0xcc
	TMap<None, None> SoundNodeOffsetMap; // 0xdc
	FMultiMap_Mirror SoundNodeResetWaveMap; // 0x124
	FPointer Listener; // 0x16c
	float PlaybackTime; // 0x174
	ObjectProperty PortalVolume; // 0x178
	FVector Location; // 0x180
	FVector ComponentLocation; // 0x18c
	ObjectProperty LastOwner; // 0x198
	float SubtitlePriority; // 0x1a0
	float FadeInStartTime; // 0x1a4
	float FadeInStopTime; // 0x1a8
	float FadeInTargetVolume; // 0x1ac
	float FadeOutStartTime; // 0x1b0
	float FadeOutStopTime; // 0x1b4
	float FadeOutTargetVolume; // 0x1b8
	float m_fFadeOutTargetPitch; // 0x1bc
	float AdjustVolumeStartTime; // 0x1c0
	float AdjustVolumeStopTime; // 0x1c4
	float AdjustVolumeTargetVolume; // 0x1c8
	float CurrAdjustVolumeTargetVolume; // 0x1cc
	ObjectProperty CurrentNotifyBufferFinishedHook; // 0x1d0
	FVector CurrentLocation; // 0x1d8
	FVector CurrentVelocity; // 0x1e4
	float CurrentVolume; // 0x1f0
	float CurrentPitch; // 0x1f4
	float CurrentHighFrequencyGain; // 0x1f8
	int32_t CurrentUseSpatialization; // 0x1fc
	int32_t CurrentNotifyOnLoop; // 0x200
	float OmniRadius; // 0x204
	float CurrentVolumeMultiplier; // 0x208
	float CurrentPitchMultiplier; // 0x20c
	float CurrentHighFrequencyGainMultiplier; // 0x210
	float CurrentVoiceCenterChannelVolume; // 0x214
	float CurrentRadioFilterVolume; // 0x218
	float CurrentRadioFilterVolumeThreshold; // 0x21c
	FDouble LastUpdateTime; // 0x220
	float SourceInteriorVolume; // 0x228
	float SourceInteriorLPF; // 0x22c
	float CurrentInteriorVolume; // 0x230
	float CurrentInteriorLPF; // 0x234
	FDouble SoundModeStartTime; // 0x238
	FVector LastLocation; // 0x240
	FInteriorSettings LastInteriorSettings; // 0x24c
	int32_t LastReverbVolumeIndex; // 0x27c
	float VolumeMultiplier; // 0x280
	float PitchMultiplier; // 0x284
	float HighFrequencyGainMultiplier; // 0x288
	float OcclusionCheckInterval; // 0x28c
	float LastOcclusionCheckTime; // 0x290
	ComponentProperty PreviewSoundRadius; // 0x294
	DelegateProperty __OnAudioFinished__Delegate; // 0x29c
	DelegateProperty __OnAudioFinishedFX__Delegate; // 0x2ac
	DelegateProperty __OnQueueSubtitles__Delegate; // 0x2bc
};

struct UAnimNodePlayCustomAnim {
	char bIsPlayingCustomAnim : 1; // 0x124
	float CustomPendingBlendOutTime; // 0x128
};

struct UTgInvListener_SetInhandFiremodeAfterDeviceFired {
	int32_t m_nRemainingShots; // 0xd0
	float m_fRemainingTime; // 0xd4
};

struct UNavMeshGoal_Random {
	int32_t MinDist; // 0x7c
	float BestRating; // 0x80
	FPointer PartialGoal; // 0x84
};

struct ATgForgeObjective_Tournament {
	char m_bIsUsable : 1; // 0x3a4
};

struct USeqVar_Vector {
	FVector VectValue; // 0xa0
};

struct UTgPlayerInput {
	ObjectProperty c_TgPC; // 0x2f8
	char c_bASKeyCapture : 1; // 0x300
	char c_bASSpecKeyCapture : 1; // 0x300
	char c_bMiniMapPinging : 1; // 0x300
	char c_bAutoRun : 1; // 0x300
	char bEnableAimAssist : 1; // 0x300
	char bDebugAimAssist : 1; // 0x300
	char m_bOldLookValid : 1; // 0x300
	float GamepadSensitivityX; // 0x304
	float GamepadSensitivityY; // 0x308
	float GyroSensitivityX; // 0x30c
	float GyroSensitivityY; // 0x310
	float GyroTuningConstant; // 0x314
	float fScopeSensitivity; // 0x318
	float fADSSensitivity; // 0x31c
	float fGamepadADSSensitivyMult; // 0x320
	float fGamepadScopeSensitivyMult; // 0x324
	float m_fMinScopeSensitivityMult; // 0x328
	float m_fMaxScopeSensitivityMult; // 0x32c
	float m_fMinADSSensitivityMult; // 0x330
	float m_fMaxADSSensitivityMult; // 0x334
	int32_t nAimAccelerationSet; // 0x338
	int32_t nAimAccelerationBoost; // 0x33c
	float fTurnSpeedAccelAmt; // 0x340
	float fLookUpSpeedAccelAmt; // 0x344
	int32_t nAimAccelerationAlgorithm; // 0x348
	float fOldATurn; // 0x34c
	float fOldALookUp; // 0x350
	int32_t nAimAssistMagnetStrength; // 0x354
	int32_t nAimAssistFrictionStrength; // 0x358
	int32_t nInnerDeadZoneSize; // 0x35c
	int32_t nOuterDeadZoneSize; // 0x360
	ObjectProperty BestAimAssistTarget; // 0x364
	ObjectProperty m_AimAssistCurves; // 0x36c
	float aTurnFinalValue; // 0x374
	float aLookUpFinalValue; // 0x378
	TArray<FAimAssistTargetWeight> m_AimAssistTargets; // 0x37c
	FAimAssistTargetWeightVars TargetWeightVars; // 0x38c
	FDebugAimAssist DebugAimAssistVals; // 0x3a8
	FVector m_vOldLookTarget; // 0x4cc
	FVector2D m_vOldLockDelta; // 0x4d8
	DelegateProperty __OnRawInputKey__Delegate; // 0x4e0
	DelegateProperty __OnInputAxis__Delegate; // 0x4f0
	DelegateProperty __OnInputChar__Delegate; // 0x500
};

struct USoundNodeMixer {
	TArray<float> InputVolume; // 0x74
};

struct UUberPostProcessEffect {
	FVector SceneShadows; // 0xf0
	FVector SceneHighLights; // 0xfc
	FVector SceneMidTones; // 0x108
	float SceneDesaturation; // 0x114
	FVector SceneColorize; // 0x118
	ETonemapperType TonemapperType; // 0x124
	EPostProcessAAType PostProcessAAType; // 0x125
	float TonemapperRange; // 0x128
	float TonemapperToeFactor; // 0x12c
	float TonemapperScale; // 0x130
	float MotionBlurSoftEdgeKernelSize; // 0x134
	char bEnableImageGrain : 1; // 0x138
	char bScaleEffectsWithViewSize : 1; // 0x138
	char bEnableHDRTonemapper : 1; // 0x138
	float SceneImageGrainScale; // 0x13c
	float BloomWeightSmall; // 0x140
	float BloomWeightMedium; // 0x144
	float BloomWeightLarge; // 0x148
	float BloomSizeScaleSmall; // 0x14c
	float BloomSizeScaleMedium; // 0x150
	float BloomSizeScaleLarge; // 0x154
	float EdgeDetectionThreshold; // 0x158
	FLUTBlender PreviousLUTBlender; // 0x15c
	float SceneHDRTonemapperScale; // 0x180
};

struct UOnlineTitleFileDownloadBase {
	TArray<DelegateProperty> ReadTitleFileCompleteDelegates; // 0x80
	TArray<DelegateProperty> RequestTitleFileListCompleteDelegates; // 0x90
	FString BaseUrl; // 0xa0
	FString RequestFileListURL; // 0xb0
	FString RequestFileURL; // 0xc0
	float TimeOut; // 0xd0
	TArray<FFileNameToURLMapping> FilesToUrls; // 0xd4
	DelegateProperty __OnReadTitleFileComplete__Delegate; // 0xe4
	DelegateProperty __OnRequestTitleFileListComplete__Delegate; // 0xf4
};

struct USequenceEvent {
	TArray<ObjectProperty> DuplicateEvts; // 0xec
	ObjectProperty Originator; // 0xfc
	ObjectProperty Instigator; // 0x104
	float ActivationTime; // 0x10c
	int32_t TriggerCount; // 0x110
	int32_t MaxTriggerCount; // 0x114
	float ReTriggerDelay; // 0x118
	char bEnabled : 1; // 0x11c
	char bPlayerOnly : 1; // 0x11c
	char bRegistered : 1; // 0x11c
	char bClientSideOnly : 1; // 0x11c
	char bServerAndClientSide : 1; // 0x11c
	char bHumanOnly : 1; // 0x11c
	char Priority; // 0x120
	int32_t MaxWidth; // 0x124
};

struct UTgSeqEvent_DeviceEquipped {
	int32_t m_nDeviceId; // 0x128
};

struct ATgGame_RoyaleScrimmage {
	char m_bFoundSetup : 1; // 0x9c0
	TMap<None, None> m_TeamColorMap; // 0x9c4
};

struct USoundNodeDistanceCrossFade {
	TArray<FDistanceDatum> CrossFadeInput; // 0x74
};

struct UAnimNotify_AkEvent {
	ObjectProperty AkEvent; // 0x68
	char bFollowActor : 1; // 0x70
	char m_bIgnoreIfMeshHidden : 1; // 0x70
	char m_bIgnoreIfActorHidden : 1; // 0x70
	FName BoneName; // 0x74
};

struct UParticleModuleSizeMultiplyVelocity {
	FRawDistributionVector VelocityMultiplier; // 0x68
	char MultiplyX : 1; // 0x8c
	char MultiplyY : 1; // 0x8c
	char MultiplyZ : 1; // 0x8c
	FVector CapMaxSize; // 0x90
	FVector CapMinSize; // 0x9c
};

struct UMaterialExpressionCustom {
	FString Code; // 0xb0
	ECustomMaterialOutputType OutputType; // 0xc0
	FString Description; // 0xc4
	TArray<FCustomInput> Inputs; // 0xd4
};

struct UTgAnimNodeBlendByDeviceEquipped {
	int32_t m_DeviceId; // 0x168
};

struct ATgDevice_OwlSidearm {
	float m_fQueueFireTime; // 0xaec
	float m_fQueueFireTimeThreshold; // 0xaf0
};

struct USeqAct_GetDistance {
	float Distance; // 0x108
};

struct UTgAnimNodeEmoteCustomAnim {
	char c_bIsInHandDeviceMeshInvisible : 1; // 0x12c
	char c_bHasReachedFullWeight : 1; // 0x12c
};

struct UTgAIBehaviorCondition_DistanceBase {
	float DistanceThreshold; // 0x98
};

struct UTgInventoryObject_Listen_AddDamage {
	char m_bAutoProcOnInhand : 1; // 0xc8
	char m_bCheckIsValidTarget : 1; // 0xc8
};

struct UTgAnimNodeRandom {
	int32_t m_iDefaultChildIndex; // 0x168
	char m_bConsiderRelevancy : 1; // 0x16c
	char m_bMasterOtherNodes : 1; // 0x16c
	char m_bIsASlave : 1; // 0x16c
	char m_bEnableTimer : 1; // 0x16c
	char m_TimeAllChildren : 1; // 0x16c
	TArray<FName> m_SlaveNames; // 0x170
	TArray<ObjectProperty> m_Slaves; // 0x180
	int32_t m_nPrimaryChild; // 0x190
	FVector2D m_TimeRange; // 0x194
	float m_fRemainingTime; // 0x19c
	TArray<FTgRandomAnimInfo> RandomInfo; // 0x1a0
};

struct UUIDataPrice {
	int32_t m_nVendorId; // 0x60
	int32_t m_nLootId; // 0x64
	int32_t m_nItemId; // 0x68
	int32_t m_nPurchaseType; // 0x6c
	int32_t m_nCurrencyType; // 0x70
	int32_t m_nQuantity; // 0x74
	int32_t m_nPrice; // 0x78
	int32_t m_nDiscountPrice; // 0x7c
	int32_t m_nOriginalPrice; // 0x80
};

struct ATgDevice_AutoHealing2 {
	char m_bIsApplied : 1; // 0xaec
	char m_bForceRemoval : 1; // 0xaec
	ObjectProperty m_CachedPawnOwner; // 0xaf0
	float m_fLastLowHealthSoundTime; // 0xaf8
	float m_fPrevHealthPct; // 0xafc
};

struct UTgAIBehaviorCondition_DistanceFromInteractTarget {
	float Distance; // 0x98
};

struct ATgPawn_Biped {
	FName m_nmLeftFootBone; // 0x2e78
	FName m_nmRightFootBone; // 0x2e80
	FName m_nmLeftFootControlName; // 0x2e88
	FName m_nmRightFootControlName; // 0x2e90
	float m_fOldLocationZ; // 0x2e98
	char m_bEnableRightFootPlacement : 1; // 0x2e9c
	char m_bEnableLeftFootPlacement : 1; // 0x2e9c
	char m_bMayDisableFootIKFromAnimNodes : 1; // 0x2e9c
	char m_bInitializedFootIKCachedNodeList : 1; // 0x2e9c
	char m_bApplyLeftHandWeaponIK : 1; // 0x2e9c
	char m_bSetHandIKStrengthFromAnimNodes : 1; // 0x2e9c
	char m_bInitializedHandIKCachedNodeList : 1; // 0x2e9c
	char c_bPlayingRefire : 1; // 0x2e9c
	char c_bRefireIsUpperBody : 0; // 0x2e9c
	float m_fZSmoothingRate; // 0x2ea0
	float m_fMaxFootPlacementDistSquared; // 0x2ea4
	ObjectProperty m_LeftLegControl; // 0x2ea8
	ObjectProperty m_RightLegControl; // 0x2eb0
	TArray<FName> m_FootIKZeroStrengthAnimNodeNameList; // 0x2eb8
	TArray<ObjectProperty> m_FootIKZeroStrengthCachedNodeList; // 0x2ec8
	FVector m_vPreviousRightFootPosition; // 0x2ed8
	FVector m_vPreviousLeftFootPosition; // 0x2ee4
	float m_fCachedRightTracedFloor; // 0x2ef0
	float m_fCachedLeftTracedFloor; // 0x2ef4
	float m_fCachedRightFloorNormalZ; // 0x2ef8
	float m_fCachedLeftFloorNormalZ; // 0x2efc
	int32_t m_nCachedLeftFootBoneIndex; // 0x2f00
	int32_t m_nCachedRightFootBoneIndex; // 0x2f04
	FName m_SkelControl_LeftHandName; // 0x2f08
	ObjectProperty m_SkelControl_LeftHand; // 0x2f10
	ObjectProperty m_SkelControl_LeftHandRotate; // 0x2f18
	FName m_SkelControl_RightHandName; // 0x2f20
	ObjectProperty m_SkelControl_RightHand; // 0x2f28
	ObjectProperty m_SkelControl_RightHandRotate; // 0x2f30
	ObjectProperty m_SkelControl_RightToLeftPropSwitch; // 0x2f38
	TArray<FName> m_HandIKFullStrengthAnimNodeNameList; // 0x2f40
	TArray<FName> m_HandIKZeroStrengthAnimNodeNameList; // 0x2f50
	TArray<ObjectProperty> m_HandIKFullStengthCachedNodeList; // 0x2f60
	TArray<ObjectProperty> m_HandIKZeroStrengthCachedNodeList; // 0x2f70
	ObjectProperty m_FadeMaterialControllerBody; // 0x2f80
	FName c_RefireBeginBlendAnimationName; // 0x2f88
	FName c_RefireEndBlendAnimationName; // 0x2f90
	ObjectProperty c_RefireAnimSet; // 0x2f98
	float c_fRefireDuration; // 0x2fa0
	float c_fRefireEndDuration; // 0x2fa4
	FVector m_vAimAssistAnchorOffset; // 0x2fa8
};

struct UMaterialExpressionTime {
	char bIgnorePause : 1; // 0xb0
};

struct ANxGenericForceFieldBox {
	ComponentProperty RenderComponent; // 0x374
	FVector BoxExtent; // 0x37c
};

struct UTgAIBehaviorCondition_DifficultyLevel {
	EBotDifficultyLevel Difficulty; // 0x98
};

struct UUIDataStore_MenuItems {
	FName CurrentGameSettingsTag; // 0xf0
	FMultiMap_Mirror OptionProviders; // 0xf8
	TArray<ObjectProperty> DynamicProviders; // 0x140
};

struct UChildConnection {
	ObjectProperty Parent; // 0xb108
};

struct UUIResourceDataProvider {
	char bSkipDuringEnumeration : 1; // 0x90
};

struct ATgDeploy_Bomb {
	float r_fPersistTime; // 0x448
	ComponentProperty m_CountdownIndicator; // 0x44c
	ObjectProperty m_CountdownIndicatorMIC; // 0x454
	float r_fRadiusScale; // 0x45c
};

struct UParticleModuleUberLTISIVCLIL {
	FRawDistributionFloat Lifetime; // 0x78
	FRawDistributionVector StartSize; // 0x9c
	FRawDistributionVector StartVelocity; // 0xc0
	FRawDistributionFloat StartVelocityRadial; // 0xe4
	FRawDistributionVector ColorOverLife; // 0x108
	FRawDistributionFloat AlphaOverLife; // 0x12c
	FRawDistributionVector StartLocation; // 0x150
};

struct UPrimitiveComponent {
	int32_t Tag; // 0x88
	int32_t ThreadTag[0x5]; // 0x8c
	FBoxSphereBounds Bounds; // 0xa0
	FPointer SceneInfo; // 0xbc
	int32_t DetachFence; // 0xc4
	float LocalToWorldDeterminant; // 0xc8
	FMatrix LocalToWorld; // 0xd0
	int32_t MotionBlurInfoIndex; // 0x110
	TArray<FPointer> DecalList; // 0x114
	TArray<ComponentProperty> DecalsToReattach; // 0x124
	ComponentProperty ShadowParent; // 0x134
	ComponentProperty ReplacementPrimitive; // 0x13c
	ComponentProperty FogVolumeComponent; // 0x144
	ComponentProperty OverrideLightComponent; // 0x14c
	ComponentProperty LightEnvironment; // 0x154
	ComponentProperty PreviousLightEnvironment; // 0x15c
	float MinDrawDistance; // 0x164
	float MassiveLODDistance; // 0x168
	float MaxDrawDistance; // 0x16c
	float CachedMaxDrawDistance; // 0x170
	float MotionBlurInstanceScale; // 0x174
	float CullDistance; // 0x178
	float CachedCullDistance; // 0x17c
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x180
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x181
	EDetailMode DetailMode; // 0x182
	ERBCollisionChannel RBChannel; // 0x183
	char RBDominanceGroup; // 0x184
	char PreviewEnvironmentShadowing; // 0x185
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x188
	char bAllowCullDistanceVolume : 1; // 0x188
	char HiddenGame : 1; // 0x188
	char HiddenEditor : 1; // 0x188
	char bOwnerNoSee : 1; // 0x188
	char bOnlyOwnerSee : 1; // 0x188
	char bIgnoreOwnerHidden : 1; // 0x188
	char bIncludeInManualZPrepass : 1; // 0x188
	char bUseAsOccluder : 0; // 0x188
	char bAllowApproximateOcclusion : 0; // 0x188
	char bFirstFrameOcclusion : 0; // 0x188
	char bIgnoreNearPlaneIntersection : 0; // 0x188
	char bSelectable : 0; // 0x188
	char bForceMipStreaming : 0; // 0x188
	char bAcceptsDecals : 0; // 0x188
	char bAcceptsDecalsDuringGameplay : 0; // 0x188
	char bAcceptsStaticDecals : 0; // 0x188
	char bAcceptsDynamicDecals : 0; // 0x188
	char bIsRefreshingDecals : 0; // 0x188
	char bAllowDecalAutomaticReAttach : 0; // 0x188
	char bUsePerInstanceHitProxies : 0; // 0x188
	char CastShadow : 0; // 0x188
	char bForceDirectLightMap : 0; // 0x188
	char bCastDynamicShadow : 0; // 0x188
	char bCastStaticShadow : 0; // 0x188
	char bSelfShadowOnly : 0; // 0x188
	char bNoModSelfShadow : 0; // 0x188
	char bAcceptsDynamicDominantLightShadows : 0; // 0x188
	char bCastHiddenShadow : 0; // 0x188
	char bCastShadowAsTwoSided : 0; // 0x188
	char bAcceptsLights : 0; // 0x188
	char bAcceptsDynamicLights : 0; // 0x188
	char bUseOnePassLightingOnTranslucency : 1; // 0x18c
	char bUsePrecomputedShadows : 1; // 0x18c
	char bHasExplicitShadowParent : 1; // 0x18c
	char bAllowAmbientOcclusion : 1; // 0x18c
	char CollideActors : 1; // 0x18c
	char AlwaysCheckCollision : 1; // 0x18c
	char BlockActors : 1; // 0x18c
	char BlockZeroExtent : 1; // 0x18c
	char BlockNonZeroExtent : 0; // 0x18c
	char CanBlockCamera : 0; // 0x18c
	char BlockRigidBody : 0; // 0x18c
	char bBlockFootPlacement : 0; // 0x18c
	char bSeenByAI : 0; // 0x18c
	char bDisableAllRigidBody : 0; // 0x18c
	char bSkipRBGeomCreation : 0; // 0x18c
	char bNotifyRigidBodyCollision : 0; // 0x18c
	char bFluidDrain : 0; // 0x18c
	char bFluidTwoWay : 0; // 0x18c
	char bIgnoreRadialImpulse : 0; // 0x18c
	char bIgnoreRadialForce : 0; // 0x18c
	char bIgnoreForceField : 0; // 0x18c
	char bUseCompartment : 0; // 0x18c
	char AlwaysLoadOnClient : 0; // 0x18c
	char AlwaysLoadOnServer : 0; // 0x18c
	char bIgnoreHiddenActorsMembership : 0; // 0x18c
	char AbsoluteTranslation : 0; // 0x18c
	char AbsoluteRotation : 0; // 0x18c
	char AbsoluteScale : 0; // 0x18c
	char bAllowShadowFade : 0; // 0x18c
	char bSupportedOnMobile : 0; // 0x18c
	char bWasSNFiltered : 0; // 0x18c
	TArray<int32_t> OctreeNodes; // 0x190
	int32_t TranslucencySortPriority; // 0x1a0
	int32_t VisibilityId; // 0x1a4
	FLightingChannelContainer LightingChannels; // 0x1a8
	FRBCollisionChannelContainer RBCollideWithChannels; // 0x1ac
	ObjectProperty PhysMaterialOverride; // 0x1b0
	ObjectProperty BodyInstance; // 0x1b8
	FMatrix CachedParentToWorld; // 0x1c0
	FVector Translation; // 0x200
	FRotator Rotation; // 0x20c
	float Scale; // 0x218
	FVector Scale3D; // 0x21c
	float BoundsScale; // 0x228
	FVector OcclusionBoundsScale; // 0x22c
	float OcclusionSphereScale; // 0x238
	float OverrideDrawDistanceScale; // 0x23c
	float LastSubmitTime; // 0x240
	float LastRenderTime; // 0x244
	float ScriptRigidBodyCollisionThreshold; // 0x248
};

struct UTgParticleModuleTypeDataLight {
	ComponentProperty m_PointLightComponent; // 0x68
	ComponentProperty m_PLCDuplicate; // 0x70
};

struct AEmitterPool {
	ComponentProperty PSCTemplate; // 0x280
	TArray<ComponentProperty> PoolComponents; // 0x288
	TArray<ComponentProperty> ActiveComponents; // 0x298
	int32_t MaxActiveEffects; // 0x2a8
	int32_t InitialPooledComponentCount; // 0x2ac
	char bLogPoolOverflow : 1; // 0x2b0
	char bLogPoolOverflowList : 1; // 0x2b0
	TArray<FEmitterBaseInfo> RelativePSCs; // 0x2b4
	float SMC_MIC_ReductionTime; // 0x2c4
	float SMC_MIC_CurrentReductionTime; // 0x2c8
	int32_t IdealStaticMeshComponents; // 0x2cc
	int32_t IdealMaterialInstanceConstants; // 0x2d0
	TArray<ComponentProperty> FreeSMComponents; // 0x2d4
	TArray<ObjectProperty> FreeMatInstConsts; // 0x2e4
};

struct ANxCylindricalForceField {
	float RadialStrength; // 0x2d4
	float RotationalStrength; // 0x2d8
	float LiftStrength; // 0x2dc
	float ForceRadius; // 0x2e0
	float ForceTopRadius; // 0x2e4
	float LiftFalloffHeight; // 0x2e8
	float EscapeVelocity; // 0x2ec
	float ForceHeight; // 0x2f0
	float HeightOffset; // 0x2f4
	char UseSpecialRadialForce : 1; // 0x2f8
	FPointer Kernel; // 0x2fc
};

struct USeqAct_AkSetRTPCValue {
	FString Param; // 0x120
	float Value; // 0x130
	char Running : 1; // 0x134
};

struct UApexDestructibleAsset {
	FPointer MApexAsset; // 0x80
	TArray<ObjectProperty> Materials; // 0x88
	TArray<ObjectProperty> FractureMaterials; // 0x98
	char bPlaySingleFractureMaterialEffect : 1; // 0xa8
	char bHasUniqueAssetMaterialNames : 1; // 0xa8
	char bDynamic : 1; // 0xa8
	ObjectProperty DefaultPhysMaterial; // 0xac
	FPointer MDestructibleThumbnailComponent; // 0xb4
	FString CrumbleEmitterName; // 0xbc
	FString DustEmitterName; // 0xcc
	FNxDestructibleParameters DestructibleParameters; // 0xdc
};

struct UMaterialExpressionTextureObject {
	ObjectProperty Texture; // 0xb0
};

struct UTgControlModule_Feared {
	float c_fLastSwitchTime; // 0xcc
	float c_fNextSwitchTime; // 0xd0
	FVector c_vCurrentDirection; // 0xd4
};

struct AWorldInfo {
	FPostProcessSettings DefaultPostProcessSettings; // 0x294
	ObjectProperty WorldPostProcessChain; // 0x414
	char bPersistPostProcessToNextLevel : 1; // 0x41c
	char bFogEnabled : 1; // 0x41c
	char bBumpOffsetEnabled : 1; // 0x41c
	char bUseGammaCorrection : 1; // 0x41c
	char bMapNeedsLightingFullyRebuilt : 1; // 0x41c
	char bMapHasMultipleDominantLightsAffectingOnePrimitive : 1; // 0x41c
	char bMapHasPathingErrors : 1; // 0x41c
	char bRequestedBlockOnAsyncLoading : 1; // 0x41c
	char bBegunPlay : 0; // 0x41c
	char bPlayersOnly : 0; // 0x41c
	char bPlayersOnlyPending : 0; // 0x41c
	char bSuspendAI : 0; // 0x41c
	char bDropDetail : 0; // 0x41c
	char bAggressiveLOD : 0; // 0x41c
	char bStartup : 0; // 0x41c
	char bPathsRebuilt : 0; // 0x41c
	char bHasPathNodes : 0; // 0x41c
	char bIsMenuLevel : 0; // 0x41c
	char bDebugPauseExecution : 0; // 0x41c
	char bDebugStepExecution : 0; // 0x41c
	char bUseConsoleInput : 0; // 0x41c
	char bMinimizeBSPSections : 0; // 0x41c
	char bNoDefaultInventoryForPlayer : 0; // 0x41c
	char bNoPathWarnings : 0; // 0x41c
	char bNoMobileMapWarnings : 0; // 0x41c
	char bHighPriorityLoading : 0; // 0x41c
	char bHighPriorityLoadingLocal : 0; // 0x41c
	char bUseProcBuildingRulesetOverride : 0; // 0x41c
	char bInteractiveMode : 0; // 0x41c
	char bDisableAllStaticPhysXObjects : 0; // 0x41c
	char bSupportDoubleBufferedPhysics : 0; // 0x41c
	char bPhysicsIgnoreDeltaTime : 0; // 0x41c
	char bEnableChanceOfPhysicsChunkOverride : 1; // 0x420
	char bLimitExplosionChunkSize : 1; // 0x420
	char bLimitDamageChunkSize : 1; // 0x420
	char bPrecomputeVisibility : 1; // 0x420
	char bPlaceCellsOnSurfaces : 1; // 0x420
	char bAllowTemporalAA : 1; // 0x420
	char bUseGlobalIllumination : 1; // 0x420
	char bForceNoPrecomputedLighting : 1; // 0x420
	char bHaveActiveCrowd : 0; // 0x420
	char bAllowHostMigration : 0; // 0x420
	char bGameplayFramePause : 0; // 0x420
	float SquintModeKernelSize; // 0x424
	EZPrepassOverride ZPrepassOverride; // 0x428
	ENetMode NetMode; // 0x429
	ETravelType NextTravelType; // 0x42a
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x42b
	EPreferredLightmapType PreferredLightmapType; // 0x42c
	ELightingBuildQuality LevelLightingQuality; // 0x42d
	float ContributionCullOverrideHigh; // 0x430
	float ContributionCullOverrideMedium; // 0x434
	float ContributionCullOverrideLow; // 0x438
	ObjectProperty HighestPriorityPostProcessVolume; // 0x43c
	FReverbSettings DefaultReverbSettings; // 0x444
	FInteriorSettings DefaultAmbientZoneSettings; // 0x454
	float FogStart; // 0x484
	float FogEnd; // 0x488
	FColor FogColor; // 0x48c
	float BumpEnd; // 0x490
	ObjectProperty HighestPriorityReverbVolume; // 0x494
	TArray<ObjectProperty> MassiveLODOverrideVolumes; // 0x49c
	TArray<ObjectProperty> PortalVolumes; // 0x4ac
	TArray<ObjectProperty> EnvironmentVolumes; // 0x4bc
	TArray<ObjectProperty> StreamingLevels; // 0x4cc
	FDouble LastTimeUnbuiltLightingWasEncountered; // 0x4dc
	float TimeDilation; // 0x4e4
	float DemoPlayTimeDilation; // 0x4e8
	float TimeSeconds; // 0x4ec
	float RealTimeSeconds; // 0x4f0
	float AudioTimeSeconds; // 0x4f4
	float DeltaSeconds; // 0x4f8
	float PauseDelay; // 0x4fc
	float RealTimeToUnPause; // 0x500
	float m_fRealDeltaSeconds; // 0x504
	ObjectProperty Pauser; // 0x508
	ObjectProperty DefaultTexture; // 0x510
	ObjectProperty WireframeTexture; // 0x518
	ObjectProperty WhiteSquareTexture; // 0x520
	ObjectProperty LargeVertex; // 0x528
	ObjectProperty BSPVertex; // 0x530
	TArray<FString> DeferredExecs; // 0x538
	ObjectProperty GRI; // 0x548
	FString ComputerName; // 0x550
	FString EngineVersion; // 0x560
	FString MinNetVersion; // 0x570
	ObjectProperty Game; // 0x580
	float StallZ; // 0x588
	float WorldGravityZ; // 0x58c
	float DefaultGravityZ; // 0x590
	float GlobalGravityZ; // 0x594
	float RBPhysicsGravityScaling; // 0x598
	float m_fAudioAltitudeCeiling; // 0x59c
	float m_fAudioAltitudeFloor; // 0x5a0
	ObjectProperty NavigationPointList; // 0x5a4
	ObjectProperty ControllerList; // 0x5ac
	ObjectProperty PawnList; // 0x5b4
	ObjectProperty CoverList; // 0x5bc
	ObjectProperty PylonList; // 0x5c4
	float MoveRepSize; // 0x5cc
	TArray<FNetViewer> ReplicationViewers; // 0x5d0
	FString NextURL; // 0x5e0
	float NextSwitchCountdown; // 0x5f0
	int32_t PackedLightAndShadowMapTextureSize; // 0x5f4
	FVector DefaultColorScale; // 0x5f8
	AGameInfo* DefaultGameType; // 0x604
	TArray<AGameInfo*> GameTypesSupportedOnThisMap; // 0x60c
	TArray<ObjectProperty> ClientDestroyedActorContent; // 0x61c
	TArray<FName> PreparingLevelNames; // 0x62c
	FName CommittedPersistentLevelName; // 0x63c
	ObjectProperty PersistentMapForcedObjects; // 0x644
	ComponentProperty MusicComp; // 0x64c
	FMusicTrackStruct CurrentMusicTrack; // 0x654
	FMusicTrackStruct ReplicatedMusicTrack; // 0x680
	FString Title; // 0x6ac
	FString Author; // 0x6bc
	ObjectProperty MyMapInfo; // 0x6cc
	FString EmitterPoolClassPath; // 0x6d4
	ObjectProperty MyEmitterPool; // 0x6e4
	FString SecondaryEmitterPoolClassPath; // 0x6ec
	ObjectProperty MySecondaryEmitterPool; // 0x6fc
	FString DecalManagerClassPath; // 0x704
	ObjectProperty MyDecalManager; // 0x714
	FString FractureManagerClassPath; // 0x71c
	ObjectProperty MyFractureManager; // 0x72c
	FString ParticleEventManagerClassPath; // 0x734
	ObjectProperty MyParticleEventManager; // 0x744
	ObjectProperty MySoundComponentPool; // 0x74c
	ObjectProperty ProcBuildingRulesetOverride; // 0x754
	int32_t SkelMeshCompTickTagCount; // 0x75c
	float MaxPhysicsDeltaTime; // 0x760
	int32_t MaxPhysicsSubsteps; // 0x764
	FPhysXSceneProperties PhysicsProperties; // 0x768
	TArray<FCompartmentRunList> CompartmentRunFrames; // 0x7a4
	float DefaultSkinWidth; // 0x7b4
	float ApexLODResourceBudget; // 0x7b8
	float ApexDestructionLODResourceValue; // 0x7bc
	float ApexClothingLODResourceValue; // 0x7c0
	FApexModuleDestructibleSettings DestructibleSettings; // 0x7c4
	ObjectProperty EmitterVertical; // 0x7d8
	FPhysXVerticalProperties VerticalProperties; // 0x7e0
	TArray<FPointer> WorldAttractors; // 0x7f8
	float ChanceOfPhysicsChunkOverride; // 0x808
	float MaxExplosionChunkSize; // 0x80c
	float MaxDamageChunkSize; // 0x810
	float FractureExplosionVelScale; // 0x814
	int32_t MaxNumFacturedChunksToSpawnInAFrame; // 0x818
	int32_t NumFacturedChunksSpawnedThisFrame; // 0x81c
	float FracturedMeshWeaponDamage; // 0x820
	int32_t VisibilityCellSize; // 0x824
	float CharacterLitIndirectBrightness; // 0x828
	float CharacterLitIndirectContrastFactor; // 0x82c
	float CharacterShadowedIndirectBrightness; // 0x830
	float CharacterShadowedIndirectContrastFactor; // 0x834
	float CharacterLightingContrastFactor; // 0x838
	ObjectProperty ImageReflectionEnvironmentTexture; // 0x83c
	FLinearColor ImageReflectionEnvironmentColor; // 0x844
	float ImageReflectionEnvironmentRotation; // 0x854
	FMap_Mirror ScreenMessages; // 0x858
	TArray<FScreenMessageString> PriorityScreenMessages; // 0x8a0
	FLightmassWorldInfoSettings LightmassSettings; // 0x8b0
	TMap<None, None> NavMeshPathConstraintCache; // 0x908
	TMap<None, None> NavMeshPathGoalEvaluatorCache; // 0x950
	ObjectProperty PopulationManager; // 0x998
	FHostMigrationState PeerHostMigration; // 0x9a0
	float HostMigrationTimeout; // 0x9c0
	float m_fPerfParticleScale; // 0x9c4
	ObjectProperty m_MiniMapTexture; // 0x9c8
	float m_fMiniMapSizeValue; // 0x9d0
	float m_fMinimumPayloadTravelTime; // 0x9d4
	ObjectProperty FirstPhysicsVolume; // 0x9d8
};

struct ATgPawn_Turret {
	char r_bLockdownIsOn : 1; // 0x2ed4
	char r_bHasHealingStation : 1; // 0x2ed4
	char m_bFirstAidNuggetOverride : 1; // 0x2ed4
	int32_t m_nLockdownPostureID; // 0x2ed8
	ObjectProperty m_SpawningDevice; // 0x2edc
	ObjectProperty m_TargetingNotificationAkEvent; // 0x2ee4
	ObjectProperty m_PrevTargetActor; // 0x2eec
};

struct UUIComponent_ChestPanel {
	int32_t m_nChestBundleIndex; // 0x1a8
	int32_t m_nChestQuantity; // 0x1ac
	int32_t m_nCouponItemId; // 0x1b0
	Fdword m_dwCrystalCost; // 0x1b4
	Fdword m_dwGoldCost; // 0x1b8
	Fdword m_dwVIPPointCost; // 0x1bc
	Fdword m_dwOriginalCrystalCost; // 0x1c0
	ObjectProperty m_mcCursor; // 0x1c4
	ObjectProperty m_mcPriceContainer; // 0x1cc
	ObjectProperty m_mcDropdown; // 0x1d4
	ObjectProperty m_mcDropdownMask; // 0x1dc
	ObjectProperty m_mcDropdownFrame; // 0x1e4
	ObjectProperty m_mcQuantityDropdownPrompt; // 0x1ec
	ObjectProperty m_mcQuantityDropdownPrompt_Inner; // 0x1f4
	ObjectProperty m_grDropdown; // 0x1fc
	ObjectProperty m_grBundledChest; // 0x204
	ObjectProperty m_mcPurchase; // 0x20c
	ObjectProperty m_mcPurchaseQuantity; // 0x214
	ObjectProperty m_mcQuantityDropdownToggle; // 0x21c
	ObjectProperty m_mcQuantityDropdownToggle_Inner; // 0x224
	ObjectProperty m_mcDropdownOptions[0x5]; // 0x22c
	ObjectProperty m_ToggleDropdownInputAction; // 0x254
	char m_bDropdownOpen : 1; // 0x25c
	char m_bDetailsIsOpenChest : 1; // 0x25c
};

struct UTgMenuMeshInfo {
	FLobbyMeshInfo MeshInfo; // 0x60
	TArray<ObjectProperty> Children; // 0xc4
	FName ParentSocketName; // 0xd4
	TArray<FParticleSystemInfo> AttachedParticleSystems; // 0xdc
};

struct UPComUIManagerBase {
	char m_bDebugDraw : 1; // 0x60
	char m_bLocalLoad : 1; // 0x60
	TArray<FManagerImage> m_cachedImages; // 0x64
	FString m_strJson; // 0x74
};

struct USeqAct_SetDOFParams {
	float FalloffExponent; // 0x120
	float BlurKernelSize; // 0x124
	float MaxNearBlurAmount; // 0x128
	float MinBlurAmount; // 0x12c
	float MaxFarBlurAmount; // 0x130
	float FocusInnerRadius; // 0x134
	float FocusDistance; // 0x138
	FVector FocusPosition; // 0x13c
	float InterpolateSeconds; // 0x148
	float InterpolateElapsed; // 0x14c
	float OldFalloffExponent; // 0x150
	float OldBlurKernelSize; // 0x154
	float OldMaxNearBlurAmount; // 0x158
	float OldMinBlurAmount; // 0x15c
	float OldMaxFarBlurAmount; // 0x160
	float OldFocusInnerRadius; // 0x164
	float OldFocusDistance; // 0x168
	FVector OldFocusPosition; // 0x16c
};

struct UCoverMeshComponent {
	TArray<FCoverMeshes> Meshes; // 0x310
	FVector LocationOffset; // 0x320
	ObjectProperty AutoAdjustOn; // 0x32c
	ObjectProperty AutoAdjustOff; // 0x334
	ObjectProperty Disabled; // 0x33c
	char bShowWhenNotSelected : 1; // 0x344
};

struct UTgInventoryObject_Listen_HitWithDevice {
	char m_bIgnoreChildDevice : 1; // 0xd0
	char m_bAutoProcOnInhand : 1; // 0xd0
	char m_bAutoProcOnAsIfInhand : 1; // 0xd0
	char m_bSkipActiveCheck : 1; // 0xd0
	char m_bSkipStartCooldown : 1; // 0xd0
	char m_bUseAllyTargets : 1; // 0xd0
};

struct UParticleModuleVelocityCone {
	FRawDistributionFloat Angle; // 0x6c
	FRawDistributionFloat Velocity; // 0x90
	FVector Direction; // 0xb4
};

struct ATgAIController_BehaviorRoyale {
	FVector m_vDropLocation; // 0x93c
	ObjectProperty m_InteractTarget; // 0x948
	float m_fOpenedChestTime; // 0x950
	float m_fMoveToFogCenterTime; // 0x954
	float m_fFogCenterThrottleTime; // 0x958
	TArray<ObjectProperty> NearbyChests; // 0x95c
	TArray<ObjectProperty> NearbyItems; // 0x96c
	char m_bIsPathingStuck : 1; // 0x97c
	char m_bSafeFromFog : 1; // 0x97c
	float m_fUnstuckTime; // 0x980
	int32_t m_nLastRoundNotSafeFromFog; // 0x984
	float m_fTimeCombatTargetUntrackable; // 0x988
	float m_fUntrackableDuration; // 0x98c
	float m_fUntrackableMovementDelta; // 0x990
	FVector m_vLastCombatTargetLocation; // 0x994
	TArray<FDifficultyConfig> m_DifficultyConfigs; // 0x9a0
};

struct UActorComponent {
	FPointer Scene; // 0x70
	ObjectProperty Owner; // 0x78
	char bAttached : 1; // 0x80
	char bTickInEditor : 1; // 0x80
	char bNeedsReattach : 1; // 0x80
	char bNeedsUpdateTransform : 1; // 0x80
	ETickingGroup TickGroup; // 0x84
};

struct UParticleModuleParameterDynamic_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UDistributionVectorConstantCurve {
	FInterpCurveVector ConstantCurve; // 0x7c
	char bLockAxes : 1; // 0x90
	EDistributionVectorLockFlags LockedAxes; // 0x94
};

struct UMaterialExpressionAntialiasedTextureMask {
	float Threshold; // 0x140
	ETextureColorChannel Channel; // 0x144
};

struct UTgAIBehaviorCondition_NearbyGodDelta {
	int32_t GodThreshold; // 0x9c
	char bMustBeInForwardCone : 1; // 0xa0
	float ForwardConeAngle; // 0xa4
};

struct UInterpTrackNotify {
	ObjectProperty Node; // 0xa0
	FName ParentNodeName; // 0xa8
	ObjectProperty OuterSequence; // 0xb0
	ObjectProperty OuterSet; // 0xb8
	TArray<FNotifyTrackKey> NotifyTrack; // 0xc0
};

struct UMaterialExpressionBumpOffset {
	FExpressionInput Coordinate; // 0xb0
	FExpressionInput Height; // 0xe4
	FExpressionInput HeightRatioInput; // 0x118
	float HeightRatio; // 0x14c
	float ReferencePlane; // 0x150
};

struct UFluidInfluenceComponent {
	char bActive : 1; // 0x24c
	char RaindropFillEntireFluid : 1; // 0x24c
	char bIsToggleTriggered : 1; // 0x24c
	ObjectProperty FluidActor; // 0x250
	EInfluenceType InfluenceType; // 0x258
	float MaxDistance; // 0x25c
	float WaveStrength; // 0x260
	float WaveFrequency; // 0x264
	float WavePhase; // 0x268
	float WaveRadius; // 0x26c
	float RaindropAreaRadius; // 0x270
	float RaindropRadius; // 0x274
	float RaindropStrength; // 0x278
	float RaindropRate; // 0x27c
	float FlowSpeed; // 0x280
	int32_t FlowNumRipples; // 0x284
	float FlowSideMotionRadius; // 0x288
	float FlowWaveRadius; // 0x28c
	float FlowStrength; // 0x290
	float FlowFrequency; // 0x294
	float SphereOuterRadius; // 0x298
	float SphereInnerRadius; // 0x29c
	float SphereStrength; // 0x2a0
	float CurrentAngle; // 0x2a4
	float CurrentTimer; // 0x2a8
	ObjectProperty CurrentFluidActor; // 0x2ac
};

struct AGameCrowdAgentSkeletal {
	ComponentProperty SkeletalMeshComponent; // 0x500
	ObjectProperty SpeedBlendNode; // 0x508
	ObjectProperty FullBodySlot; // 0x510
	ObjectProperty ActionSeqNode; // 0x518
	ObjectProperty WalkSeqNode; // 0x520
	ObjectProperty RunSeqNode; // 0x528
	ObjectProperty AgentTree; // 0x530
	TArray<FName> WalkAnimNames; // 0x538
	TArray<FName> RunAnimNames; // 0x548
	TArray<FName> IdleAnimNames; // 0x558
	TArray<FName> DeathAnimNames; // 0x568
	float SpeedBlendStart; // 0x578
	float SpeedBlendEnd; // 0x57c
	float AnimVelRate; // 0x580
	float MaxSpeedBlendChangeSpeed; // 0x584
	FName MoveSyncGroupName; // 0x588
	TArray<FGameCrowdAttachmentList> Attachments; // 0x590
	float MaxTargetAcquireTime; // 0x5a0
	char bUseRootMotionVelocity : 1; // 0x5a4
	char bAllowSkeletonUpdateChangeBasedOnTickResult : 1; // 0x5a4
	char bTickWhenNotVisible : 1; // 0x5a4
	char bIsPlayingIdleAnimation : 1; // 0x5a4
	char bIsPlayingDeathAnimation : 1; // 0x5a4
	char bIsPlayingImportantAnimation : 1; // 0x5a4
	char bAnimateThisTick : 1; // 0x5a4
	float NotVisibleDisableTickTime; // 0x5a8
	float MaxAnimationDistance; // 0x5ac
	float MaxAnimationDistanceSq; // 0x5b0
};

struct UVivoxClosureOnPrivilegeLevelChecked {
	int32_t m_ChannelJoinCount; // 0x70
};

struct UPBRuleNodeEdgeMesh {
	float FlatThreshold; // 0x70
	float MainXPullIn; // 0x74
};

struct UEngine {
	ObjectProperty TinyFont; // 0x68
	FString TinyFontName; // 0x70
	ObjectProperty SmallFont; // 0x80
	FString SmallFontName; // 0x88
	ObjectProperty MediumFont; // 0x98
	FString MediumFontName; // 0xa0
	ObjectProperty LargeFont; // 0xb0
	FString LargeFontName; // 0xb8
	ObjectProperty SubtitleFont; // 0xc8
	FString SubtitleFontName; // 0xd0
	TArray<ObjectProperty> AdditionalFonts; // 0xe0
	TArray<FString> AdditionalFontNames; // 0xf0
	UConsole* ConsoleClass; // 0x100
	FString ConsoleClassName; // 0x108
	UGameViewportClient* GameViewportClientClass; // 0x118
	FString GameViewportClientClassName; // 0x120
	UDataStoreClient* DataStoreClientClass; // 0x130
	FString DataStoreClientClassName; // 0x138
	ULocalPlayer* LocalPlayerClass; // 0x148
	FString LocalPlayerClassName; // 0x150
	ObjectProperty DefaultMaterial; // 0x160
	FString DefaultMaterialName; // 0x168
	ObjectProperty DefaultDecalMaterial; // 0x178
	FString DefaultDecalMaterialName; // 0x180
	ObjectProperty DefaultTexture; // 0x190
	FString DefaultTextureName; // 0x198
	ObjectProperty WireframeMaterial; // 0x1a8
	FString WireframeMaterialName; // 0x1b0
	ObjectProperty EmissiveTexturedMaterial; // 0x1c0
	FString EmissiveTexturedMaterialName; // 0x1c8
	ObjectProperty GeomMaterial; // 0x1d8
	FString GeomMaterialName; // 0x1e0
	ObjectProperty DefaultFogVolumeMaterial; // 0x1f0
	FString DefaultFogVolumeMaterialName; // 0x1f8
	ObjectProperty TickMaterial; // 0x208
	FString TickMaterialName; // 0x210
	ObjectProperty CrossMaterial; // 0x220
	FString CrossMaterialName; // 0x228
	ObjectProperty LevelColorationLitMaterial; // 0x238
	FString LevelColorationLitMaterialName; // 0x240
	ObjectProperty LevelColorationUnlitMaterial; // 0x250
	FString LevelColorationUnlitMaterialName; // 0x258
	ObjectProperty LightingTexelDensityMaterial; // 0x268
	FString LightingTexelDensityName; // 0x270
	ObjectProperty ShadedLevelColorationLitMaterial; // 0x280
	FString ShadedLevelColorationLitMaterialName; // 0x288
	ObjectProperty ShadedLevelColorationUnlitMaterial; // 0x298
	FString ShadedLevelColorationUnlitMaterialName; // 0x2a0
	ObjectProperty RemoveSurfaceMaterial; // 0x2b0
	FString RemoveSurfaceMaterialName; // 0x2b8
	ObjectProperty VertexColorMaterial; // 0x2c8
	FString VertexColorMaterialName; // 0x2d0
	ObjectProperty VertexColorViewModeMaterial_ColorOnly; // 0x2e0
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x2e8
	ObjectProperty VertexColorViewModeMaterial_AlphaAsColor; // 0x2f8
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x300
	ObjectProperty VertexColorViewModeMaterial_RedOnly; // 0x310
	FString VertexColorViewModeMaterialName_RedOnly; // 0x318
	ObjectProperty VertexColorViewModeMaterial_GreenOnly; // 0x328
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x330
	ObjectProperty VertexColorViewModeMaterial_BlueOnly; // 0x340
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x348
	ObjectProperty HeatmapMaterial; // 0x358
	FString HeatmapMaterialName; // 0x360
	ObjectProperty BoneWeightMaterial; // 0x370
	FString BoneWeightMaterialName; // 0x378
	ObjectProperty TangentColorMaterial; // 0x388
	FString TangentColorMaterialName; // 0x390
	ObjectProperty MobileEmulationMasterMaterial; // 0x3a0
	FString MobileEmulationMasterMaterialName; // 0x3a8
	ObjectProperty ProcBuildingSimpleMaterial; // 0x3b8
	FString ProcBuildingSimpleMaterialName; // 0x3c0
	ObjectProperty BuildingQuadStaticMesh; // 0x3d0
	FString BuildingQuadStaticMeshName; // 0x3d8
	float ProcBuildingLODColorTexelsPerWorldUnit; // 0x3e8
	float ProcBuildingLODLightingTexelsPerWorldUnit; // 0x3ec
	int32_t MaxProcBuildingLODColorTextureSize; // 0x3f0
	int32_t MaxProcBuildingLODLightingTextureSize; // 0x3f4
	char UseProcBuildingLODTextureCropping : 1; // 0x3f8
	char ForcePowerOfTwoProcBuildingLODTextures : 1; // 0x3f8
	char bCombineSimilarMappings : 1; // 0x3f8
	char bRenderLightMapDensityGrayscale : 1; // 0x3f8
	char bScreenshotRequested : 1; // 0x3f8
	char bUseSound : 1; // 0x3f8
	char bUseBackgroundLevelStreaming : 1; // 0x3f8
	char bSubtitlesEnabled : 1; // 0x3f8
	char bSubtitlesForcedOff : 0; // 0x3f8
	char bSmoothFrameRate : 0; // 0x3f8
	char bCheckForMultiplePawnsSpawnedInAFrame : 0; // 0x3f8
	char bShouldGenerateSimpleLightmaps : 0; // 0x3f8
	char bForceStaticTerrain : 0; // 0x3f8
	char bForceCPUSkinning : 0; // 0x3f8
	char bUsePostProcessEffects : 0; // 0x3f8
	char bOnScreenKismetWarnings : 0; // 0x3f8
	char bEnableKismetLogging : 0; // 0x3f8
	char bAllowMatureLanguage : 0; // 0x3f8
	char bDisablePhysXHardwareSupport : 0; // 0x3f8
	char bPauseOnLossOfFocus : 0; // 0x3f8
	char bCheckParticleRenderSize : 0; // 0x3f8
	char bEnableColorClear : 0; // 0x3f8
	char bAreConstraintsDirty : 0; // 0x3f8
	char bHasPendingGlobalReattach : 0; // 0x3f8
	char bEnableOnScreenDebugMessages : 0; // 0x3f8
	char bEnableOnScreenDebugMessagesDisplay : 0; // 0x3f8
	char bSuppressMapWarnings : 0; // 0x3f8
	char bCookSeparateSharedMPGameContent : 0; // 0x3f8
	char bUseRecastNavMesh : 0; // 0x3f8
	char bDisableAILogging : 0; // 0x3f8
	char bUseNormalMapsForSimpleLightMaps : 0; // 0x3f8
	char bStartWithMatineeCapture : 0; // 0x3f8
	char bCompressMatineeCapture : 1; // 0x3fc
	char bLockReadOnlyLevels : 1; // 0x3fc
	float MaxRMSDForCombiningMappings; // 0x400
	int32_t ImageReflectionTextureSize; // 0x404
	FLinearColor LightingOnlyBrightness; // 0x408
	TArray<FColor> LightComplexityColors; // 0x418
	TArray<FLinearColor> ShaderComplexityColors; // 0x428
	float MaxPixelShaderAdditiveComplexityCount; // 0x438
	float MinTextureDensity; // 0x43c
	float IdealTextureDensity; // 0x440
	float MaxTextureDensity; // 0x444
	float MinLightMapDensity; // 0x448
	float IdealLightMapDensity; // 0x44c
	float MaxLightMapDensity; // 0x450
	float RenderLightMapDensityGrayscaleScale; // 0x454
	float RenderLightMapDensityColorScale; // 0x458
	FLinearColor LightMapDensityVertexMappedColor; // 0x45c
	FLinearColor LightMapDensitySelectedColor; // 0x46c
	TArray<FStatColorMapping> StatColorMappings; // 0x47c
	ObjectProperty EditorBrushMaterial; // 0x48c
	FString EditorBrushMaterialName; // 0x494
	ObjectProperty DefaultPhysMaterial; // 0x4a4
	FString DefaultPhysMaterialName; // 0x4ac
	ObjectProperty LandscapeHolePhysMaterial; // 0x4bc
	FString LandscapeHolePhysMaterialName; // 0x4c4
	ObjectProperty ApexDamageParams; // 0x4d4
	FString ApexDamageParamsName; // 0x4dc
	ObjectProperty TerrainErrorMaterial; // 0x4ec
	FString TerrainErrorMaterialName; // 0x4f4
	int32_t TerrainMaterialMaxTextureCount; // 0x504
	int32_t TerrainTessellationCheckCount; // 0x508
	float TerrainTessellationCheckDistance; // 0x50c
	UOnlineSubsystem* OnlineSubsystemClass; // 0x510
	FString DefaultOnlineSubsystemName; // 0x518
	ObjectProperty DefaultPostProcess; // 0x528
	FString DefaultPostProcessName; // 0x530
	ObjectProperty ThumbnailSkeletalMeshPostProcess; // 0x540
	FString ThumbnailSkeletalMeshPostProcessName; // 0x548
	ObjectProperty ThumbnailParticleSystemPostProcess; // 0x558
	FString ThumbnailParticleSystemPostProcessName; // 0x560
	ObjectProperty ThumbnailMaterialPostProcess; // 0x570
	FString ThumbnailMaterialPostProcessName; // 0x578
	ObjectProperty DefaultUIScenePostProcess; // 0x588
	FString DefaultUIScenePostProcessName; // 0x590
	ObjectProperty DefaultUICaretMaterial; // 0x5a0
	FString DefaultUICaretMaterialName; // 0x5a8
	ObjectProperty SceneCaptureReflectActorMaterial; // 0x5b8
	FString SceneCaptureReflectActorMaterialName; // 0x5c0
	ObjectProperty SceneCaptureCubeActorMaterial; // 0x5d0
	FString SceneCaptureCubeActorMaterialName; // 0x5d8
	ObjectProperty ScreenDoorNoiseTexture; // 0x5e8
	FString ScreenDoorNoiseTextureName; // 0x5f0
	ObjectProperty ImageGrainNoiseTexture; // 0x600
	FString ImageGrainNoiseTextureName; // 0x608
	ObjectProperty RandomAngleTexture; // 0x618
	FString RandomAngleTextureName; // 0x620
	ObjectProperty RandomNormalTexture; // 0x630
	FString RandomNormalTextureName; // 0x638
	ObjectProperty RandomMirrorDiscTexture; // 0x648
	FString RandomMirrorDiscTextureName; // 0x650
	ObjectProperty WeightMapPlaceholderTexture; // 0x660
	FString WeightMapPlaceholderTextureName; // 0x668
	ObjectProperty LightMapDensityTexture; // 0x678
	FString LightMapDensityTextureName; // 0x680
	ObjectProperty LightMapDensityNormal; // 0x690
	FString LightMapDensityNormalName; // 0x698
	ObjectProperty DefaultSound; // 0x6a8
	FString DefaultSoundName; // 0x6b0
	float TimeBetweenPurgingPendingKillObjects; // 0x6c0
	float MaxTimeBetweenPurgingPendingKillObjects; // 0x6c4
	int32_t GarbageCollectionDelayMinimumMemoryMB; // 0x6c8
	ObjectProperty Client; // 0x6cc
	TArray<ObjectProperty> GamePlayers; // 0x6d4
	ObjectProperty GameViewport; // 0x6e4
	TArray<FString> DeferredCommands; // 0x6ec
	int32_t TickCycles; // 0x6fc
	int32_t GameCycles; // 0x700
	int32_t ClientCycles; // 0x704
	float MaxSmoothedFrameRate; // 0x708
	float MinSmoothedFrameRate; // 0x70c
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x710
	FPointer RemoteControlExec; // 0x714
	FPointer MobileMaterialEmulator; // 0x71c
	FColor C_WorldBox; // 0x724
	FColor C_BrushWire; // 0x728
	FColor C_AddWire; // 0x72c
	FColor C_SubtractWire; // 0x730
	FColor C_SemiSolidWire; // 0x734
	FColor C_NonSolidWire; // 0x738
	FColor C_WireBackground; // 0x73c
	FColor C_ScaleBoxHi; // 0x740
	FColor C_VolumeCollision; // 0x744
	FColor C_BSPCollision; // 0x748
	FColor C_OrthoBackground; // 0x74c
	FColor C_Volume; // 0x750
	FColor C_BrushShape; // 0x754
	float StreamingDistanceFactor; // 0x758
	FString ScoutClassName; // 0x75c
	ETransitionType TransitionType; // 0x76c
	FString TransitionDescription; // 0x770
	FString TransitionGameType; // 0x780
	float MeshLODRange; // 0x790
	float CameraRotationThreshold; // 0x794
	float CameraTranslationThreshold; // 0x798
	float PrimitiveProbablyVisibleTime; // 0x79c
	float PercentUnoccludedRequeries; // 0x7a0
	float MaxOcclusionPixelsFraction; // 0x7a4
	int32_t MaxFluidNumVerts; // 0x7a8
	float FluidSimulationTimeLimit; // 0x7ac
	int32_t MaxParticleResize; // 0x7b0
	int32_t MaxParticleResizeWarn; // 0x7b4
	int32_t MaxParticleVertexMemory; // 0x7b8
	int32_t MaxParticleSpriteCount; // 0x7bc
	int32_t MaxParticleSubUVCount; // 0x7c0
	int32_t BeginUPTryCount; // 0x7c4
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x7c8
	FString DynamicCoverMeshComponentName; // 0x7d8
	float NetClientTicksPerSecond; // 0x7e8
	float MaxTrackedOcclusionIncrement; // 0x7ec
	float TrackedOcclusionStepSize; // 0x7f0
	FLinearColor DefaultSelectedMaterialColor; // 0x7f4
	FLinearColor DefaultHoveredMaterialColor; // 0x804
	FLinearColor SelectedMaterialColor; // 0x814
	FLinearColor UnselectedMaterialColor; // 0x824
	TArray<FName> IgnoreSimulatedFuncWarnings; // 0x834
	int32_t ScreenSaverInhibitorSemaphore; // 0x844
	FPointer ScreenSaverInhibitor; // 0x848
	ObjectProperty GlobalTranslationContext; // 0x850
	FDouble LoadingMovieStartTime; // 0x858
	FString MatineeCaptureName; // 0x860
	FString MatineePackageCaptureName; // 0x870
	FString VisibleLevelsForMatineeCapture; // 0x880
	int32_t MatineeCaptureFPS; // 0x890
	int32_t MatineeCaptureType; // 0x894
	ObjectProperty PeerNetDriver; // 0x898
};

struct UTgAIBehaviorCondition_IsTooFarFromLane {
	ECombatTargetType TargetType; // 0x98
};

struct USeqAct_SetMatInstTexParam {
	ObjectProperty MatInst; // 0x108
	ObjectProperty NewTexture; // 0x110
	FName ParamName; // 0x118
};

struct UTgAnimBlendByNodeName {
	TArray<FNodeNameToChildIndex> m_NodeNameToChildIndex; // 0x168
	TArray<FRelevantNodeNameNodes> m_CachedNodes; // 0x178
	ObjectProperty m_LastSuccessfulAnimNode; // 0x188
	char m_bHasCachedNodes : 1; // 0x190
};

struct ATgCharacterPerformance {
	ObjectProperty BasePerformanceCapture; // 0x628
	EPComPerformanceCaptureState CurrentCaptureState; // 0x630
	FString CharacterInput; // 0x634
	FString SetInput; // 0x644
	int32_t CurrentCharacterIndex; // 0x654
	int32_t CurrentSkinIndex; // 0x658
	TArray<ObjectProperty> CharacterPlacements; // 0x65c
	TArray<FString> CharactersToTest; // 0x66c
	TArray<int32_t> AllSkinIDs; // 0x67c
	TArray<FDeviceToCharacterID> DeviceToCharacterIDPairs; // 0x68c
	TArray<FPComPerformanceCaptureStatsPerSkin> StatsPerSkin; // 0x69c
	TArray<ObjectProperty> CharacterPawns; // 0x6ac
	ObjectProperty ManifestGroup; // 0x6bc
	FPointer CharacterPerformanceUtility; // 0x6c4
};

struct ATgPawn_Engineer {
	ComponentProperty m_pJetpackMesh; // 0x310c
	TArray<ObjectProperty> m_pJetpackSkelCons; // 0x3114
	TArray<FName> m_pJetpackSkelConNames; // 0x3124
	char m_bBoosterUseConstantSpeedReduction : 1; // 0x3134
	char m_bIsInBooster : 1; // 0x3134
	char m_bInBoosterLockout : 1; // 0x3134
	float m_fBoosterSpeedReductionRate; // 0x3138
	float m_fBoosterEndTime; // 0x313c
	float m_fBoosterLockoutTime; // 0x3140
	ObjectProperty m_CachedBoosterDevice; // 0x3144
};

struct UTgAIBehaviorCondition_SquadTargetHealthPercent {
	float HealthPct; // 0x98
};

struct UUIWebBrowser {
	char m_bAutoClose : 1; // 0x244
	char m_bDrawBorder : 1; // 0x244
	ObjectProperty m_mcFrame; // 0x248
	ObjectProperty m_mcBrowserShape; // 0x250
	ObjectProperty m_mcBackButton; // 0x258
	ObjectProperty m_mcForwardButton; // 0x260
	ObjectProperty m_mcCloseButton; // 0x268
};

struct UFracturedSkinnedMeshComponent {
	FPointer ComponentSkinResources; // 0x338
	TArray<FMatrix> FragmentTransforms; // 0x340
	TArray<ComponentProperty> DependentComponents; // 0x350
	char bBecameVisible : 1; // 0x360
	char bFragmentTransformsChanged : 1; // 0x360
};

struct ATgDeploy_EpicLootCrate {
	float m_fTimeoutTime; // 0x4b8
};

struct ATgPlayerCamera {
	ObjectProperty PlayerOwner; // 0x604
	ObjectProperty CurrentCameraMod; // 0x60c
	UTgCameraModule* DefaultCameraModuleClass; // 0x614
	TArray<ObjectProperty> CameraModuleList; // 0x61c
	FRotator CamAngle; // 0x62c
	char m_bIsLowHealth : 1; // 0x638
	char bTweening : 1; // 0x638
	char bInterpolatingFOV : 1; // 0x638
	char m_bPlayingHeal : 1; // 0x638
	FVector CameraLocationLocalToTarget; // 0x63c
	FQuat CameraRotationLocalToTarget; // 0x650
	float fTweenStart; // 0x660
	float fTweenDuration; // 0x664
	ObjectProperty LastCameraMod; // 0x668
	float fFOVInterpStartTimestamp; // 0x670
	float fFOVInterpStartValue; // 0x674
	float fFOVInterpEndTimestamp; // 0x678
	float fLastAppliedFOV; // 0x67c
	float m_fCollisionTraceExtent; // 0x680
	ObjectProperty m_LowHealthCameraEffect; // 0x684
	ObjectProperty m_BleedCameraEffect; // 0x68c
	ObjectProperty m_DazeCameraEffect; // 0x694
	ObjectProperty m_FireCameraEffect; // 0x69c
	ObjectProperty m_FreezeCameraEffect; // 0x6a4
	ObjectProperty m_HealCameraEffect; // 0x6ac
	ObjectProperty m_KnockbackCameraEffect; // 0x6b4
	ObjectProperty m_MarkCameraEffect; // 0x6bc
	ObjectProperty m_PoisonCameraEffect; // 0x6c4
	ObjectProperty m_VenomCameraEffect; // 0x6cc
	ObjectProperty m_RootCameraEffect; // 0x6d4
	ObjectProperty m_SlowCameraEffect; // 0x6dc
	ObjectProperty m_StunCameraEffect; // 0x6e4
	ObjectProperty m_HiddenCameraEffect; // 0x6ec
	ObjectProperty m_GrassCameraEffect; // 0x6f4
	ObjectProperty m_TeleportCameraEffect; // 0x6fc
	ObjectProperty m_PreTeleportCameraEffect; // 0x704
	ObjectProperty m_CCImmuneCameraEffect; // 0x70c
	ObjectProperty m_CrippleCameraEffect; // 0x714
	ObjectProperty m_RevealedCameraEffect; // 0x71c
	ObjectProperty m_WeatherCameraEffect; // 0x724
	ObjectProperty m_CurrentWeatherVolume; // 0x72c
	TArray<ObjectProperty> m_CameraEffects; // 0x734
	int32_t m_nCameraEffectIdCounter; // 0x744
	ATgEmitter_CameraEffect_DamageBase* m_HealthDamageCameraEffectClasses[0x8]; // 0x748
	ATgEmitter_CameraEffect_DamageBase* m_ShieldDamageCameraEffectClasses[0x8]; // 0x788
	FPropertyDecayState m_HealthDamageFXState[0x8]; // 0x7c8
	FPropertyDecayState m_HealingFXState; // 0x828
	FPropertyDecayParams m_HealthDamageFXParams; // 0x834
	FPropertyDecayParams m_HealingFXParams; // 0x848
	float m_fAccumulateHealing; // 0x85c
	float m_fSecondsSinceLastHealFXUpdate; // 0x860
	float m_fHealFXUpdatePeriod; // 0x864
	float m_fBloodHazeIntensity; // 0x868
	float m_fHealingFXHalflifeAccumulation; // 0x86c
	float m_fHealingFXHalflifeImpulse; // 0x870
	float m_fHealingFXReliefFactor; // 0x874
	float m_fHealingFXAccumulationMix; // 0x878
	float m_fHealingFXVisibleThreshold; // 0x87c
	float m_fHealingCritFXThreshold; // 0x880
	float m_fHealthDamageFXHalflifeAccumulation; // 0x884
	float m_fHealthDamageFXHalflifeImpulse; // 0x888
	float m_fHealthDamageFXPainFactor; // 0x88c
	float m_fHealthDamageFXAccumulationMix; // 0x890
	float m_fHealthDamageCritFXThreshold; // 0x894
	float m_fHealthDamageCritFXAccumulationMix; // 0x898
};

struct UUIHudForge {
	int32_t m_nShards; // 0x244
	int32_t m_nUpgrades; // 0x248
	ObjectProperty m_pEntryGroup; // 0x24c
	int32_t m_nMaxTeammateCount; // 0x254
	int32_t m_nEntryHighlighted; // 0x258
	int32_t m_nClassNameMessage; // 0x25c
	char m_eState; // 0x260
	FUIFORGETAB m_mcForgeTabs[0x3]; // 0x264
	FUIFORGEENTRYGFX m_mcEntry[0x8]; // 0x2c4
	FUIFORGEENTRYDATA m_mcClassData[0x8]; // 0x484
	FUIFORGEENTRYDATA m_mcNeutralData[0x8]; // 0x584
	FUIFORGEENTRYDATA m_mcUpgradeData[0x8]; // 0x684
	FPointer m_mcEntryData; // 0x784
	ObjectProperty m_mcPlayerShardsGroup; // 0x78c
	ObjectProperty m_mcPlayerShards; // 0x794
	ObjectProperty m_mcUpgradesLeftGroup; // 0x79c
	ObjectProperty m_mcUpgradesLeft; // 0x7a4
	ObjectProperty m_mcErrorMessage; // 0x7ac
	ObjectProperty m_mcTooltip; // 0x7b4
	ObjectProperty m_mcTooltipName; // 0x7bc
	ObjectProperty m_mcTooltipType; // 0x7c4
	ObjectProperty m_mcTooltipDesc; // 0x7cc
	ObjectProperty m_mcTooltipIcon; // 0x7d4
	ObjectProperty m_mcTooltipPanel; // 0x7dc
	ObjectProperty m_mcTooltipCost; // 0x7e4
	ObjectProperty m_mcTooltipError; // 0x7ec
	ObjectProperty m_mcTooltipTime; // 0x7f4
	ObjectProperty m_mcTooltipRarity; // 0x7fc
	ObjectProperty m_akSelect; // 0x804
	ObjectProperty m_akForgeEnter; // 0x80c
	char m_bLTEDisableForgeClass : 1; // 0x814
	char m_bLTEDisableForgeNeutral : 1; // 0x814
	char m_bLTEDisableForgeUpgrades : 1; // 0x814
	char m_bLTEDisableForgeArmorPotions : 1; // 0x814
	char m_bLTEDisableForgeHealingPotions : 1; // 0x814
	char m_bLTEDisableForgeWeapons : 1; // 0x814
	char m_bLTEDisableForgeSupportAbilities : 1; // 0x814
	char m_bLTEDisableForgeOffensiveAbilities : 1; // 0x814
	char m_bLTEDisableForgeMovementAbilities : 0; // 0x814
	char m_bLTEDisableForgeRunes : 0; // 0x814
	char m_bLTEDisableForgeResurrection : 0; // 0x814
	char m_bLTEDisableUpgradeWeapons : 0; // 0x814
	char m_bLTEDisableUpgradeSupportAbilities : 0; // 0x814
	char m_bLTEDisableUpgradeOffensiveAbilities : 0; // 0x814
	char m_bLTEDisableUpgradeMovementAbilities : 0; // 0x814
};

struct ULightComponent {
	FPointer SceneInfo; // 0x88
	FMatrix WorldToLight; // 0x90
	FMatrix LightToWorld; // 0xd0
	FGuid LightGuid; // 0x110
	FGuid LightmapGuid; // 0x120
	float Brightness; // 0x130
	FColor LightColor; // 0x134
	ObjectProperty Function; // 0x138
	char bEnabled : 1; // 0x140
	char CastShadows : 1; // 0x140
	char CastStaticShadows : 1; // 0x140
	char CastDynamicShadows : 1; // 0x140
	char bCastCompositeShadow : 1; // 0x140
	char bAffectCompositeShadowDirection : 1; // 0x140
	char bNonModulatedSelfShadowing : 1; // 0x140
	char bSelfShadowOnly : 1; // 0x140
	char bAllowPreShadow : 0; // 0x140
	char bForceDynamicLight : 0; // 0x140
	char UseDirectLightMap : 0; // 0x140
	char bHasLightEverBeenBuiltIntoLightMap : 0; // 0x140
	char bCanAffectDynamicPrimitivesOutsideDynamicChannel : 0; // 0x140
	char bRenderLightShafts : 0; // 0x140
	char bUseImageReflectionSpecular : 0; // 0x140
	char bPrecomputedLightingIsValid : 0; // 0x140
	char bExplicitlyAssignedLight : 0; // 0x140
	char bAllowCompositingIntoDLE : 0; // 0x140
	ComponentProperty LightEnvironment; // 0x144
	FLightingChannelContainer LightingChannels; // 0x14c
	ELightAffectsClassification LightAffectsClassification; // 0x150
	ELightShadowMode LightShadowMode; // 0x151
	FLinearColor ModShadowColor; // 0x154
	float ModShadowFadeoutTime; // 0x164
	float ModShadowFadeoutExponent; // 0x168
	int32_t LightListIndex; // 0x16c
	EShadowProjectionTechnique ShadowProjectionTechnique; // 0x170
	EShadowFilterQuality ShadowFilterQuality; // 0x171
	int32_t MinShadowResolution; // 0x174
	int32_t MaxShadowResolution; // 0x178
	int32_t ShadowFadeResolution; // 0x17c
	float OcclusionDepthRange; // 0x180
	float BloomScale; // 0x184
	float BloomThreshold; // 0x188
	float BloomScreenBlendThreshold; // 0x18c
	FColor BloomTint; // 0x190
	float RadialBlurPercent; // 0x194
	float OcclusionMaskDarkness; // 0x198
	float ReflectionSpecularBrightness; // 0x19c
	EDetailMode DetailMode; // 0x1a0
};

struct ATgEmitter_CameraEffect_LowHealth {
	float m_fFade; // 0x2b4
};

struct UUIMapSummary {
	FString MapName; // 0x94
	FString ScreenshotPathName; // 0xa4
	FString DisplayName; // 0xb4
	FString Description; // 0xc4
};

struct ATgActorFactory {
	int32_t m_nMapObjectId; // 0x280
	char s_bAutoSpawn : 1; // 0x284
	int32_t s_nTeamNumber; // 0x288
	char s_nTaskForce; // 0x28c
	MinimapFactoryType m_MinimapType; // 0x28d
	eSelectionMethod s_eSelectionMethod; // 0x28e
	int32_t s_nSelectionListId; // 0x290
	int32_t s_nSelectedObjectId; // 0x294
	int32_t m_nSelectionListPropId; // 0x298
	int32_t s_nNameId; // 0x29c
	int32_t s_nFactoryId; // 0x2a0
	ObjectProperty m_FRI; // 0x2a4
	ATgRepInfo_Factory* m_FRIClass; // 0x2ac
	int32_t s_nCurListIndex; // 0x2b4
	ComponentProperty m_WorldIconSprite; // 0x2b8
};

struct APickupFactory {
	char bOnlyReplicateHidden : 1; // 0x378
	char bPickupHidden : 1; // 0x378
	char bPredictRespawns : 1; // 0x378
	char bIsSuperItem : 1; // 0x378
	char bRespawnPaused : 1; // 0x378
	AInventory* InventoryType; // 0x37c
	float RespawnEffectTime; // 0x384
	float MaxDesireability; // 0x388
	ComponentProperty PickupMesh; // 0x38c
	ObjectProperty ReplacementFactory; // 0x394
	ObjectProperty OriginalFactory; // 0x39c
};

struct UTgSeqAct_TrainingAwards {
	float m_fGoldTime; // 0x108
	float m_fSilverTime; // 0x10c
	float m_fBronzeTime; // 0x110
	float m_fPassTime; // 0x114
};

struct UTgSkelCon_OscillateBoneScale {
	float OscillationAmplitude; // 0x100
	float OscillationFrequency; // 0x104
	float OscillationBaseScale; // 0x108
	float Theta; // 0x10c
};

struct UNavMeshPath_MinDistBetweenSpecsOfType {
	float MinDistBetweenEdgeTypes; // 0x78
	FVector InitLocation; // 0x7c
	ENavMeshEdgeType EdgeType; // 0x88
	float Penalty; // 0x8c
};

struct UTgGameplayCurvesSet_RecoilSimple {
	FRawDistributionFloat HorizRecoil1; // 0x64
	FRawDistributionFloat HorizRecoil2; // 0x88
	FRawDistributionFloat VertRecoil1; // 0xac
	FRawDistributionFloat VertRecoil2; // 0xd0
	float GamepadHorizRecoilMultiplier; // 0xf4
	float GamepadVertRecoilMultiplier; // 0xf8
	EPaladinsRecoilType RecoilType; // 0xfc
};

struct UTgDeviceForm_KingBomb {
	char m_bKingBombActive : 1; // 0x2bc
};

struct UTgDeviceForm_Mount {
	TArray<ObjectProperty> m_LoadedAnimSets; // 0x2bc
	TArray<ObjectProperty> m_pWheelSpinnerSkelCons; // 0x2cc
};

struct ATgBotFactory_PointCapture {
	ObjectProperty m_CapturePoint; // 0x39c
};

struct UTgInventoryObject_Listen_MendingSpiritsActive {
	TArray<ObjectProperty> m_PawnTargets; // 0xd0
	char m_bEffectsAreActive : 1; // 0xe0
};

struct UTgSoundGroup {
	TArray<ObjectProperty> c_SoundCues; // 0x60
	TArray<FFootstepSoundInfo> c_FootstepSounds; // 0x70
};

struct UTgSeqEvent_SpawnWise {
	int32_t Taskforce; // 0x128
};

struct UTgData_Cards {
	ObjectProperty m_pMovie; // 0x60
};

struct ADynamicSMActor {
	ComponentProperty StaticMeshComponent; // 0x280
	ComponentProperty LightEnvironment; // 0x288
	ObjectProperty ReplicatedMesh; // 0x290
	ObjectProperty ReplicatedMaterial0; // 0x298
	ObjectProperty ReplicatedMaterial1; // 0x2a0
	char bForceStaticDecals : 1; // 0x2a8
	char bPawnCanBaseOn : 1; // 0x2a8
	char bSafeBaseIfAsleep : 1; // 0x2a8
	char bHandleNavMeshRegistrationInGame : 1; // 0x2a8
	char bHasRegisteredObstacle : 1; // 0x2a8
	FVector ReplicatedMeshTranslation; // 0x2ac
	FRotator ReplicatedMeshRotation; // 0x2b8
	FVector ReplicatedMeshScale3D; // 0x2c4
};

struct UMaterialExpressionSphereMask {
	FExpressionInput A; // 0xb0
	FExpressionInput B; // 0xe4
	FExpressionInput Radius; // 0x118
	FExpressionInput Hardness; // 0x14c
	float AttenuationRadius; // 0x180
	float HardnessPercent; // 0x184
};

struct UTgAnimNotify_ViewShake {
	float m_fShakeRadius; // 0xbc
	float m_fDuration; // 0xc0
	float m_fAmplitude; // 0xc4
	char m_bUseLocationRadiusBasedShake : 1; // 0xc8
};

struct UMultiCueSplineAudioComponent {
	TArray<FMultiCueSplineSoundSlot> SoundSlots; // 0x2e4
	int32_t CurrentSlotIndex; // 0x2f4
};

struct UMaterialExpressionRotateAboutAxis {
	FExpressionInput NormalizedRotationAxisAndAngle; // 0xb0
	FExpressionInput PositionOnAxis; // 0xe4
	FExpressionInput Position; // 0x118
};

struct UTgAIUtilityFilter {
	char bSoftFilter : 1; // 0xbc
};

struct UUIWeaponSummary {
	FString ClassPathName; // 0x94
	FString FriendlyName; // 0xa4
	FString WeaponDescription; // 0xb4
	char bIsDisabled : 1; // 0xc4
};

struct UParticleModuleTypeDataApex {
	ObjectProperty ApexIOFX; // 0x68
	ObjectProperty ApexEmitter; // 0x70
};

struct UParticleModuleEventGenerator {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x68
};

struct ATgProj_MagicEye {
	char m_bStartedPulse : 1; // 0x51c
	float m_fLifetimeForPhysicsSubstep; // 0x520
};

struct UActorFactoryAI {
	AAIController* ControllerClass; // 0x9c
	APawn* PawnClass; // 0xa4
	FString PawnName; // 0xac
	char bGiveDefaultInventory : 1; // 0xbc
	TArray<AInventory*> InventoryList; // 0xc0
	int32_t TeamIndex; // 0xd0
};

struct UUIData_MatchMember {
	FString sName; // 0x60
	Fdword dwPlayerId; // 0x70
	FQWord qwUserId; // 0x74
	char bIsVIP : 1; // 0x7c
	char bIsLocalTF : 1; // 0x7c
	int32_t nTaskForce; // 0x80
	Fdword dwVIPTier; // 0x84
	ObjectProperty pPlayerData; // 0x88
};

struct UComponent {
	UObject* TemplateOwnerClass; // 0x60
	FName TemplateName; // 0x68
};

struct UMaterialExpressionSquareRoot {
	FExpressionInput Input; // 0xb0
};

struct AActor {
	TArray<ComponentProperty> Components; // 0x60
	TArray<ComponentProperty> AllComponents; // 0x70
	FVector Location; // 0x80
	FRotator Rotation; // 0x8c
	float DrawScale; // 0x98
	FVector DrawScale3D; // 0x9c
	FVector PrePivot; // 0xa8
	FRenderCommandFence DetachFence; // 0xb4
	float CustomTimeDilation; // 0xb8
	EPhysics Physics; // 0xbc
	ENetRole RemoteRole; // 0xbd
	ENetRole Role; // 0xbe
	ECollisionType CollisionType; // 0xbf
	ECollisionType ReplicatedCollisionType; // 0xc0
	ETickingGroup TickGroup; // 0xc1
	ObjectProperty Owner; // 0xc4
	ObjectProperty Base; // 0xcc
	TArray<FTimerData> Timers; // 0xd4
	char bStatic : 1; // 0xe4
	char bHidden : 1; // 0xe4
	char bNoDelete : 1; // 0xe4
	char bDeleteMe : 1; // 0xe4
	char bTicked : 1; // 0xe4
	char bOnlyOwnerSee : 1; // 0xe4
	char bTickIsDisabled : 1; // 0xe4
	char bServerTickIsDisabled : 1; // 0xe4
	char bWorldGeometry : 0; // 0xe4
	char bIgnoreRigidBodyPawns : 0; // 0xe4
	char bOrientOnSlope : 0; // 0xe4
	char bIgnoreEncroachers : 0; // 0xe4
	char bPushedByEncroachers : 0; // 0xe4
	char bDestroyedByInterpActor : 0; // 0xe4
	char bRouteBeginPlayEvenIfStatic : 0; // 0xe4
	char bIsMoving : 0; // 0xe4
	char bAlwaysEncroachCheck : 0; // 0xe4
	char bHasAlternateTargetLocation : 0; // 0xe4
	char bCanStepUpOn : 0; // 0xe4
	char bNetTemporary : 0; // 0xe4
	char bOnlyRelevantToOwner : 0; // 0xe4
	char bNetDirty : 0; // 0xe4
	char bAlwaysRelevant : 0; // 0xe4
	char bReplicateInstigator : 0; // 0xe4
	char bReplicateMovement : 0; // 0xe4
	char bSkipActorPropertyReplication : 0; // 0xe4
	char bUpdateSimulatedPosition : 0; // 0xe4
	char bTearOff : 0; // 0xe4
	char bOnlyDirtyReplication : 0; // 0xe4
	char bAlwaysInformOfTimelapse : 0; // 0xe4
	char bNetTimelapse : 0; // 0xe4
	char bNetTimelapseInit : 0; // 0xe4
	char bNetTimelapsePost : 1; // 0xe8
	char bAllowFluidSurfaceInteraction : 1; // 0xe8
	char bDemoRecording : 1; // 0xe8
	char bDemoOwner : 1; // 0xe8
	char bForceDemoRelevant : 1; // 0xe8
	char bNetInitialRotation : 1; // 0xe8
	char bReplicateRigidBodyLocation : 1; // 0xe8
	char bKillDuringLevelTransition : 1; // 0xe8
	char bExchangedRoles : 0; // 0xe8
	char bConsiderAllStaticMeshComponentsForStreaming : 0; // 0xe8
	char bDebug : 0; // 0xe8
	char bPostRenderIfNotVisible : 0; // 0xe8
	char s_bThrottleNetRelevancy : 0; // 0xe8
	char m_bHasThreadedWork : 0; // 0xe8
	char bForceNetUpdate : 0; // 0xe8
	char bPendingNetUpdate : 0; // 0xe8
	char bHardAttach : 0; // 0xe8
	char bIgnoreBaseRotation : 0; // 0xe8
	char bShadowParented : 0; // 0xe8
	char bSkipAttachedMoves : 0; // 0xe8
	char bCanBeAdheredTo : 0; // 0xe8
	char bCanBeFrictionedTo : 0; // 0xe8
	char bHurtEntry : 0; // 0xe8
	char bGameRelevant : 0; // 0xe8
	char bMovable : 0; // 0xe8
	char bDestroyInPainVolume : 0; // 0xe8
	char bCanBeDamaged : 0; // 0xe8
	char bShouldBaseAtStartup : 0; // 0xe8
	char bPendingDelete : 0; // 0xe8
	char bCanTeleport : 0; // 0xe8
	char bAlwaysTick : 0; // 0xe8
	char bBlocksNavigation : 0; // 0xe8
	char BlockRigidBody : 1; // 0xec
	char bCollideWhenPlacing : 1; // 0xec
	char bCollideActors : 1; // 0xec
	char bCollideWorld : 1; // 0xec
	char bCollideComplex : 1; // 0xec
	char bBlockActors : 1; // 0xec
	char bProjTarget : 1; // 0xec
	char bBlocksTeleport : 1; // 0xec
	char bMoveIgnoresDestruction : 0; // 0xec
	char bProjectileMoveSingleBlocking : 0; // 0xec
	char bNoEncroachCheck : 0; // 0xec
	char bCollideAsEncroacher : 0; // 0xec
	char bPhysRigidBodyOutOfWorldCheck : 0; // 0xec
	char bComponentOutsideWorld : 0; // 0xec
	char bForceOctreeSNFilter : 0; // 0xec
	char bForceOctreeMNFilter : 0; // 0xec
	char bForceOctreeMNFilterAuthorityOnly : 0; // 0xec
	char bRigidBodyWasAwake : 0; // 0xec
	char bCallRigidBodyWakeEvents : 0; // 0xec
	char bWhitelistCollisionWarning : 0; // 0xec
	char bBounce : 0; // 0xec
	char bJustTeleported : 0; // 0xec
	char bSupportNetIrrelevant : 0; // 0xec
	char bClientSideOnly : 0; // 0xec
	char bEnableMobileTouch : 0; // 0xec
	char bNetInitial : 0; // 0xec
	char bNetOwner : 0; // 0xec
	char bNetRelevant : 0; // 0xec
	char bNetAcked : 0; // 0xec
	char bHiddenEd : 0; // 0xec
	char bEditable : 0; // 0xec
	char bHiddenEdGroup : 0; // 0xec
	char bHiddenEdLayer : 1; // 0xf0
	char bHiddenEdCustom : 1; // 0xf0
	char bHiddenEdTemporary : 1; // 0xf0
	char bHiddenEdLevel : 1; // 0xf0
	char bHiddenEdScene : 1; // 0xf0
	char bEdShouldSnap : 1; // 0xf0
	char bTempEditor : 1; // 0xf0
	char bPathColliding : 1; // 0xf0
	char bPathTemp : 0; // 0xf0
	char bScriptInitialized : 0; // 0xf0
	char bLockLocation : 0; // 0xf0
	char bForceAllowKismetModification : 0; // 0xf0
	char bReplicateBotRankId : 0; // 0xf0
	char bNoTick : 0; // 0xf0
	char bDebugEffectIsRelevant : 0; // 0xf0
	char bUpdateHavokPos : 0; // 0xf0
	char bHavokPosOnlyUseCollisionComponent : 0; // 0xf0
	char c_bJustStartedTimelapsePlayback : 0; // 0xf0
	char c_bJustEndedTimelapsePlayback : 0; // 0xf0
	char m_bCanBaseOn : 0; // 0xf0
	char m_bSupportsRelativeLocationBase : 0; // 0xf0
	char m_bComplexOccluder : 0; // 0xf0
	char m_bCanPlayFirstPersonAkEvent : 0; // 0xf0
	int32_t SkelMeshCompTickTag; // 0xf4
	int32_t NetTag; // 0xf8
	int32_t IndexInTickList; // 0xfc
	float LastSlowRelevancyCheckTime; // 0x100
	float NetUpdateTime; // 0x104
	float NetUpdateFrequency; // 0x108
	float NetPriority; // 0x10c
	float LastNetUpdateTime; // 0x110
	float TimeSinceLastTick; // 0x114
	ObjectProperty Instigator; // 0x118
	ObjectProperty WorldInfo; // 0x120
	float LifeSpan; // 0x128
	float CreationTime; // 0x12c
	float LastRenderTime; // 0x130
	FName Tag; // 0x134
	FName InitialState; // 0x13c
	FName Layer; // 0x144
	FName Group; // 0x14c
	FQWord HiddenEditorViews; // 0x154
	TArray<ObjectProperty> Touching; // 0x15c
	TArray<ObjectProperty> Children; // 0x16c
	float LatentFloat; // 0x17c
	ObjectProperty LatentSeqNode; // 0x180
	ObjectProperty PhysicsVolume; // 0x188
	FVector Velocity; // 0x190
	FVector Acceleration; // 0x19c
	FVector AngularVelocity; // 0x1a8
	ComponentProperty BaseSkelComponent; // 0x1b4
	FName BaseBoneName; // 0x1bc
	TArray<ObjectProperty> Attached; // 0x1c4
	FVector RelativeLocation; // 0x1d4
	FRotator RelativeRotation; // 0x1e0
	ComponentProperty CollisionComponent; // 0x1ec
	int32_t OverlapTag; // 0x1f4
	FRotator RotationRate; // 0x1f8
	ObjectProperty PendingTouch; // 0x204
	FName DatabaseFieldName; // 0x20c
	ULocalMessage* MessageClass; // 0x214
	int32_t BotRankId; // 0x21c
	TArray<USequenceEvent*> SupportedEvents; // 0x220
	TArray<ObjectProperty> GeneratedEvents; // 0x230
	TArray<ObjectProperty> LatentActions; // 0x240
	int32_t LocationPackedKey; // 0x250
	FVector LocationPrev; // 0x254
	float m_fLastOcclusionCheckTime; // 0x260
	float m_fOcclusionCheckInterval; // 0x264
	float m_fOcclusionNormalization; // 0x268
	float m_fLastOcclusionCheckLocation; // 0x26c
	float m_fOcclusionCheckDist; // 0x270
	float m_fOcclusionAmount; // 0x274
	float m_fMaxDistForOcclusionPathfinding; // 0x278
	float m_fMaxDistForOcclusionCheck; // 0x27c
};

struct AImageReflection {
	char bEnabled : 1; // 0x280
	ComponentProperty ReflectionComponent; // 0x284
	ComponentProperty ImageReflectionComponent; // 0x28c
};

struct UTgInventoryObject_Listen_Exaction {
	ObjectProperty m_CachedFiremode; // 0xd8
};

struct ATgWindowVaultVolume {
	FRotator m_WallDir; // 0x2bc
	ComponentProperty WallDirArrow; // 0x2c8
};

struct UTgEffectForm_DisablePawn {
	char m_bPauseAnims : 1; // 0xfc
};

struct USeqAct_SetPhysics {
	EPhysics newPhysics; // 0x108
};

struct UTgDeviceFire_MirrorDamageToHeal {
	float m_fHealAmount; // 0x270
};

struct UObjectReferencer {
	TArray<ObjectProperty> FlattenedObjects; // 0x60
	TArray<ObjectProperty> ReferencedObjects; // 0x70
	char bShouldFlatten : 1; // 0x80
};

struct UTgSeqAct_DisplayPrompt {
	FString m_sCommand; // 0x108
	int32_t m_nMessageId; // 0x118
};

struct UDistributionFloat {
	FPointer VfTable_FCurveEdInterface; // 0x70
	char bCanBeBaked : 1; // 0x78
	char bIsDirty : 1; // 0x78
};

struct ATgGame_RoyaleTournament {
	TArray<FTournamentRound> m_pBracketRounds; // 0x9c0
	int32_t m_nTotalRounds; // 0x9d0
	int32_t m_nCurrentRound; // 0x9d4
	EObjectiveSize m_eCurrentRoundSize; // 0x9d8
	TArray<ObjectProperty> m_pRemainingTeams; // 0x9dc
	int32_t m_nBetweenRoundWait; // 0x9ec
};

struct UTgAIBehaviorAction_PurchaseBurnCards {
	int32_t BurnCardId; // 0x94
	int32_t DesiredRank; // 0x98
	char bDontPay : 1; // 0x9c
};

struct UPlayer {
	FPointer VfTable_FExec; // 0x60
	ObjectProperty Actor; // 0x68
	int32_t CurrentNetSpeed; // 0x70
	int32_t ConfiguredInternetSpeed; // 0x74
	int32_t ConfiguredLanSpeed; // 0x78
	float PP_DesaturationMultiplier; // 0x7c
	float PP_HighlightsMultiplier; // 0x80
	float PP_MidTonesMultiplier; // 0x84
	float PP_ShadowsMultiplier; // 0x88
};

struct UUIDataStore {
	FName Tag; // 0x70
	TArray<DelegateProperty> RefreshSubscriberNotifies; // 0x78
	DelegateProperty __OnDataStoreValueUpdated__Delegate; // 0x88
};

struct USeqAct_AddRemoveFaceFXAnimSet {
	TArray<ObjectProperty> FaceFXAnimSets; // 0x108
};

struct UTgEffectForm_Freeze {
	int32_t m_BurstingIceFXId; // 0x100
};

struct ATgPathfinder {
	FPointer VfTable_IInterface_NavigationHandle; // 0x280
	float m_fMaxSpeed; // 0x288
	TArray<FVector> m_vWaypoints; // 0x28c
	float m_fPathCheckRadius; // 0x29c
	ObjectProperty m_NavigationHandle; // 0x2a0
	ObjectProperty m_Spline; // 0x2a8
	ObjectProperty m_CurrentSpline; // 0x2b0
	float m_fCurrentSplineDist; // 0x2b8
	FNavMeshPathParams m_NavMeshPathParams; // 0x2bc
	TArray<ObjectProperty> m_ActiveWalkers; // 0x2f4
	float m_WalkerLifeSpan; // 0x304
	DelegateProperty __OnFinishedPathing__Delegate; // 0x308
};

struct UAnimNotify_ViewShake {
	float Duration; // 0x68
	FVector RotAmplitude; // 0x6c
	FVector RotFrequency; // 0x78
	FVector LocAmplitude; // 0x84
	FVector LocFrequency; // 0x90
	float FOVAmplitude; // 0x9c
	float FOVFrequency; // 0xa0
	char bDoControllerVibration : 1; // 0xa4
	char bUseBoneLocation : 1; // 0xa4
	float ShakeRadius; // 0xa8
	FName BoneName; // 0xac
	ObjectProperty ShakeParams; // 0xb4
};

struct USeqAct_StreamInTextures {
	char bLocationBased : 1; // 0x120
	char bStreamingActive : 1; // 0x120
	char bHasTriggeredAllLoaded : 1; // 0x120
	float Seconds; // 0x124
	float StreamingDistanceMultiplier; // 0x128
	int32_t NumWantingResourcesID; // 0x12c
	float StopTimestamp; // 0x130
	TArray<ObjectProperty> LocationActors; // 0x134
	TArray<ObjectProperty> ForceMaterials; // 0x144
	FTextureGroupContainer CinematicTextureGroups; // 0x154
};

struct ATgDevice_ToggleInhandFiremode {
	ObjectProperty m_CachedInhand; // 0xaec
};

struct UMaterialExpressionPixelDepth {
	char bNormalize : 1; // 0xb0
};

struct UTgSeqAct_UIElementVisibility {
	char ShowElement : 1; // 0x108
	FString UISceneName; // 0x10c
	FString UIElementName; // 0x11c
};

struct USeqCond_Increment {
	int32_t IncrementAmount; // 0xec
	int32_t ValueA; // 0xf0
	int32_t ValueB; // 0xf4
};

struct UActorFactory {
	AActor* GameplayActorClass; // 0x60
	FString MenuName; // 0x68
	int32_t MenuPriority; // 0x78
	int32_t AlternateMenuPriority; // 0x7c
	FString NewActorClassName; // 0x80
	AActor* NewActorClass; // 0x90
	char bPlaceable : 1; // 0x98
	char bShowInEditorQuickMenu : 1; // 0x98
};

struct UActorFactoryFracturedStaticMesh {
	ObjectProperty FracturedStaticMesh; // 0x9c
	FVector DrawScale3D; // 0xa4
};

struct USkelControlSingleBone {
	char bApplyTranslation : 1; // 0xd0
	char bApplyRotation : 1; // 0xd0
	char bAddTranslation : 1; // 0xd0
	char bAddRotation : 1; // 0xd0
	char bRemoveMeshRotation : 1; // 0xd0
	FVector BoneTranslation; // 0xd4
	EBoneControlSpace BoneTranslationSpace; // 0xe0
	EBoneControlSpace BoneRotationSpace; // 0xe1
	FName TranslationSpaceBoneName; // 0xe4
	FRotator BoneRotation; // 0xec
	FName RotationSpaceBoneName; // 0xf8
};

struct UInterpGroupAI {
	FName StageMarkGroup; // 0x98
	char SnapToRootBoneLocationWhenFinished : 1; // 0xa0
	char bNoEncroachmentCheck : 1; // 0xa0
	char bDisableWorldCollision : 1; // 0xa0
	char bIgnoreLegacyHeightAdjust : 1; // 0xa0
	char bRecreatePreviewPawn : 1; // 0xa0
	char bRefreshStageMarkGroup : 1; // 0xa0
};

struct UAudioDevice {
	int32_t MaxChannels; // 0x68
	int32_t CommonAudioPoolSize; // 0x6c
	float LowPassFilterResonance; // 0x70
	float MinCompressedDurationEditor; // 0x74
	float MinCompressedDurationGame; // 0x78
	FString ChirpInSoundNodeWaveName; // 0x7c
	ObjectProperty ChirpInSoundNodeWave; // 0x8c
	FString ChirpOutSoundNodeWaveName; // 0x94
	ObjectProperty ChirpOutSoundNodeWave; // 0xa4
	FPointer CommonAudioPool; // 0xac
	int32_t CommonAudioPoolFreeBytes; // 0xb4
	TArray<ComponentProperty> AudioComponents; // 0xb8
	TArray<ComponentProperty> AudioComponentsToStop; // 0xc8
	TArray<FPointer> Sources; // 0xd8
	TArray<FPointer> FreeSources; // 0xe8
	TMap<None, None> WaveInstanceSourceMap; // 0xf8
	char bGameWasTicking : 1; // 0x140
	char bSoundSpawningEnabled : 1; // 0x140
	TArray<FListener> Listeners; // 0x144
	FQWord CurrentTick; // 0x154
	TMap<None, None> SoundClasses; // 0x15c
	TMap<None, None> SourceSoundClasses; // 0x1a4
	TMap<None, None> CurrentSoundClasses; // 0x1ec
	TMap<None, None> DestinationSoundClasses; // 0x234
	TMap<None, None> SoundModes; // 0x27c
	FPointer Effects; // 0x2c4
	FName BaseSoundModeName; // 0x2cc
	ObjectProperty CurrentMode; // 0x2d4
	FDouble SoundModeStartTime; // 0x2dc
	FDouble SoundModeFadeInStartTime; // 0x2e4
	FDouble SoundModeFadeInEndTime; // 0x2ec
	FDouble SoundModeEndTime; // 0x2f4
	int32_t ListenerVolumeIndex; // 0x2fc
	FInteriorSettings ListenerInteriorSettings; // 0x300
	FDouble InteriorStartTime; // 0x330
	FDouble InteriorEndTime; // 0x338
	FDouble ExteriorEndTime; // 0x340
	FDouble InteriorLPFEndTime; // 0x348
	FDouble ExteriorLPFEndTime; // 0x350
	float InteriorVolumeInterp; // 0x358
	float InteriorLPFInterp; // 0x35c
	float ExteriorVolumeInterp; // 0x360
	float ExteriorLPFInterp; // 0x364
	ComponentProperty TestAudioComponent; // 0x368
	FPointer TextToSpeech; // 0x370
	EDebugState DebugState; // 0x378
	float TransientMasterVolume; // 0x37c
	float LastUpdateTime; // 0x380
	UAudioComponent* DefaultAudioComponentClass; // 0x384
	FString DefaultAudioComponentClassName; // 0x38c
	FString DefaultAudioDevice; // 0x39c
};

struct UGFxAction_CloseMovie {
	ObjectProperty Movie; // 0x108
	char bUnload : 1; // 0x110
};

struct UUIComponent_GamepadKey {
	GamepadKeys m_eGamepadKey; // 0x120
};

struct USceneCaptureComponent {
	char bEnabled : 1; // 0x88
	char bEnablePostProcess : 1; // 0x88
	char bEnableFog : 1; // 0x88
	char bUseMainScenePostProcessSettings : 1; // 0x88
	char bSkipUpdateIfTextureUsersOccluded : 1; // 0x88
	char bSkipUpdateIfOwnerOccluded : 1; // 0x88
	char bSkipRenderingDepthPrepass : 1; // 0x88
	FColor ClearColor; // 0x8c
	ESceneCaptureViewMode ViewMode; // 0x90
	int32_t SceneLOD; // 0x94
	float FrameRate; // 0x98
	ObjectProperty PostProcess; // 0x9c
	float MaxUpdateDist; // 0xa4
	float MaxViewDistanceOverride; // 0xa8
	float MaxStreamingUpdateDist; // 0xac
	FPointer CaptureInfo; // 0xb0
	FPointer ViewState; // 0xb8
	TArray<FPointer> PostProcessProxies; // 0xc0
};

struct UAnimNodeAdditiveBlending {
	char bPassThroughWhenNotRendered : 1; // 0x124
};

struct UPlatformInterfaceWebResponse {
	FString OriginalURL; // 0x60
	int32_t ResponseCode; // 0x70
	int32_t Tag; // 0x74
	FMap_Mirror Headers; // 0x78
	FString StringResponse; // 0xc0
	TArray<char> BinaryResponse; // 0xd0
};

struct UTgInventoryObject_Listen_Combo_Grover {
	FVector m_vAxeStartingLocation; // 0xd0
};

struct UUIComponent_ItemPreviewStack {
	char m_bHas3dPreview : 1; // 0x120
	ObjectProperty m_mcLoadingScreen; // 0x124
	ObjectProperty m_mcLoadingScreenTexture; // 0x12c
	ObjectProperty m_pItemGeneric; // 0x134
	ObjectProperty m_LoadingScreenManifestGroup; // 0x13c
};

struct UPathConstraint {
	int32_t CacheIdx; // 0x60
	ObjectProperty NextConstraint; // 0x64
};

struct ATgCollisionProxy {
	TArray<ObjectProperty> m_NearByPlayers; // 0x280
	char m_bIgnoreStealthPlayers : 1; // 0x290
	char m_bIgnoreNonPlayers : 1; // 0x290
	char m_bIgnoreInvulnerablePlayers : 1; // 0x290
	char m_bForwardOwnerOnly : 1; // 0x290
	DelegateProperty __ProxyTouch__Delegate; // 0x294
	DelegateProperty __ProxyUnTouch__Delegate; // 0x2a4
};

struct UMaterialExpressionSceneTexture {
	FExpressionInput Coordinates; // 0xb0
	ESceneTextureType SceneTextureType; // 0xe4
	char ScreenAlign : 1; // 0xe8
};

struct UTgAnimBlendByWeaponSkin {
	TArray<FWeaponSkinChildInfo> m_SkinMap; // 0x168
};

struct UTgCached_LootTable {
	float m_fTotalDropChance; // 0x6c
	TArray<ObjectProperty> m_Items; // 0x70
	TArray<ObjectProperty> m_Tables; // 0x80
};

struct UTgSeqAct_GetLocalPlayerController {
	ObjectProperty LocalPlayerController; // 0x108
};

struct UAnimNodeBlend {
	float Child2Weight; // 0x114
	float Child2WeightTarget; // 0x118
	float BlendTimeToGo; // 0x11c
	char bSkipBlendWhenNotRendered : 1; // 0x120
};

struct UTgAIObstacleAvoidanceRenderingComponent {
	ObjectProperty ObstacleAvoidance; // 0x24c
};

struct ATgDevice_Vine {
	ObjectProperty m_PullTarget; // 0xaec
	FVector m_vPullLocation; // 0xaf4
	float m_fPullSpeed; // 0xb00
	float m_fTruePostfireTime; // 0xb04
	float m_fPullEndOffset; // 0xb08
	char m_bCanBeCanceled : 1; // 0xb0c
	char m_bMissedPull : 1; // 0xb0c
	char m_bIsPulling : 1; // 0xb0c
	char m_bHasPulledOnce : 1; // 0xb0c
	char m_bTeleportedAfterFiring : 1; // 0xb0c
	float m_fMomentumAfterPull; // 0xb10
};

struct UTgGameplayCurvesSet_TargetAimTracking {
	TArray<ObjectProperty> TargetTrackingCurves; // 0x64
	FTargetAimTrackingDebugVals DebugVals; // 0x74
	char bSaveDebugVals : 1; // 0xb0
};

struct UExporter {
	TArray<FString> FormatExtension; // 0x68
	TArray<FString> FormatDescription; // 0x78
};

struct UGameCrowdBehavior_WaitInQueue {
	char bStoppingBehavior : 1; // 0x9c
	ObjectProperty QueuePosition; // 0xa0
};

struct ALight {
	ComponentProperty LightComponent; // 0x280
	char bEnabled : 1; // 0x288
};

struct UTgAIUtilityHandle {
	FUtilitySet UtilitySets[0x2]; // 0x60
	FUtilityPair FilteredAnnotationPoints[0x2]; // 0xf0
	EBotBehaviorState eBehaviorState; // 0x180
	ERangeType AssaultRangeType; // 0x181
};

struct UTgGameplayCurvesSet_RecoilVisual {
	FRawDistributionFloat AngleDistribution; // 0x64
	FRawDistributionFloat StrengthDegreesByAngleMin; // 0x88
	FRawDistributionFloat StrengthDegreesByAngleMax; // 0xac
	FRawDistributionFloat RecoilApplicationCurve; // 0xd0
};

struct AAmbientSoundSimpleToggleable {
	char bCurrentlyPlaying : 1; // 0x2ac
	char bFadeOnToggle : 1; // 0x2ac
	char bIgnoreAutoPlay : 1; // 0x2ac
	float FadeInDuration; // 0x2b0
	float FadeInVolumeLevel; // 0x2b4
	float FadeOutDuration; // 0x2b8
	float FadeOutVolumeLevel; // 0x2bc
};

struct UParticleModuleAttractorLine {
	FVector EndPoint0; // 0x68
	FVector EndPoint1; // 0x74
	FRawDistributionFloat Range; // 0x80
	FRawDistributionFloat Strength; // 0xa4
};

struct UTgAISquad_MonsterBehaviorTree {
	FName BehaviorTreeAsName; // 0xa8
	ObjectProperty Controller; // 0xb0
};

struct UTgAIBehaviorAction_Sprint {
	char Sprint : 1; // 0x94
};

struct UTgAnimBlendByRecoilTime {
	ObjectProperty m_pDeviceForm; // 0x124
	ObjectProperty m_pDevice; // 0x12c
	ObjectProperty m_TgPawn; // 0x134
	float m_PctBlend; // 0x13c
	float m_fFireHoldTimer; // 0x140
	float m_fMaxFireHoldTime; // 0x144
	float m_fBlendTime; // 0x148
	float m_fMaxRecoilTime; // 0x14c
};

struct UTgAnimBlendByBuffMonsterIntro {
	char m_bScalePlayRateOfSpawnAndIntro : 1; // 0x168
	char m_bEndIntroStateEarly : 1; // 0x168
	char m_bIntroHasBeenSetup : 1; // 0x168
	float m_fIntroTimeHittableAt; // 0x16c
	float m_fTimeToStartIntroAnim; // 0x170
	ObjectProperty m_CachedPawn; // 0x174
	float m_fSpawnIntroScaleRate; // 0x17c
};

struct UTgAIBehaviorAction_ReloadDevice {
	TG_EQUIP_POINT DeviceToUse; // 0x94
};

struct UUIComponent_BattlePassChallenges {
	ObjectProperty m_pChallengeList; // 0x120
	ObjectProperty m_pNextArrow; // 0x128
	ObjectProperty m_pPrevArrow; // 0x130
};

struct UMotionBlurEffect {
	float MaxVelocity; // 0x88
	float MotionBlurAmount; // 0x8c
	char FullMotionBlur : 1; // 0x90
	float CameraRotationThreshold; // 0x94
	float CameraTranslationThreshold; // 0x98
};

struct ATgTeamPlayerStart {
	char m_nTaskForce; // 0x3bc
	int32_t m_nPriority; // 0x3c0
	int32_t nPrevPriority; // 0x3c4
	float m_fMaxDistForEnemyCheckUU; // 0x3c8
	float m_fMaxDistForHazardCheckUU; // 0x3cc
	float m_fMaxWeightForEnemyDistanceCheck; // 0x3d0
	float m_fMaxDistForAllyCheckUU; // 0x3d4
	float m_fMinDistForAllyCheckUU; // 0x3d8
	float m_fMaxWeightForAllyDistanceCheck; // 0x3dc
	float m_fRandomRatingWeighting; // 0x3e0
	char m_bInitialSpawnOnly : 1; // 0x3e4
	char m_bDisallowEnemyLOS : 1; // 0x3e4
	char m_bRotateTowardNearestVisibleAlly : 1; // 0x3e4
	float m_fExtraHeightToTraceTo; // 0x3e8
	int32_t m_nMinLevel; // 0x3ec
	float m_fLastUsedTimeStamp; // 0x3f0
	TArray<ObjectProperty> s_AssignedPlayers; // 0x3f4
};

struct ATgChestManagerVolume {
	int32_t m_nPointOfInterestId; // 0x2bc
	EChestVolumeTypes m_eType; // 0x2c0
	float m_fSmallChestPercent; // 0x2c4
	TArray<FChestSpawnConfig> m_SmallPOIConfig; // 0x2c8
	float m_fMediumChestPercent; // 0x2d8
	TArray<FChestSpawnConfig> m_MediumPOIConfig; // 0x2dc
	float m_fLargeChestPercent; // 0x2ec
	TArray<FChestSpawnConfig> m_LargePOIConfig; // 0x2f0
	TArray<ObjectProperty> m_Factories; // 0x300
	TArray<FInternalChestInfo> m_InternalChestData; // 0x310
};

struct UTgSeqAct_SetHexState {
	char m_bChallengerWon : 1; // 0x108
};

struct UInstancedStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceData; // 0x310
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x320
	int32_t NumPendingLightmaps; // 0x330
	int32_t ComponentJoinKey; // 0x334
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x338
	int32_t InstancingRandomSeed; // 0x348
	int32_t InstanceStartCullDistance; // 0x34c
	int32_t InstanceEndCullDistance; // 0x350
	FBoxSphereBounds StreamingBounds; // 0x354
	FPointer InstanceBufferResource; // 0x370
	FPointer InstancedMeshStreamGroup; // 0x378
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x380
	char bStreamInstanceBuffer : 1; // 0x380
	char bDontResolveInstancedLightmaps : 1; // 0x380
};

struct UTgAnimNotify_ToggleRigidBodies {
	TArray<FName> BoneNames; // 0x68
	ERigidBodyFixationChange Effect; // 0x78
};

struct UTgAIBehaviorCondition_CombatTargetInDeviceVolume {
	int32_t DeviceID; // 0x98
	char bMustBeEnemy : 1; // 0x9c
};

struct UFacebookIntegration {
	FString AppID; // 0x80
	TArray<FString> Permissions; // 0x90
	FString UserName; // 0xa0
	FString UserId; // 0xb0
	FString AccessToken; // 0xc0
	TArray<FFacebookFriend> FriendsList; // 0xd0
};

struct UInterpTrackAkRTPC {
	FString Param; // 0xb8
};

struct UUIComponentPool {
	TArray<ObjectProperty> m_ActivePooledItems; // 0x118
	TArray<ObjectProperty> m_InactivePooledItems; // 0x128
};

struct USVehicleSimBase {
	float WheelSuspensionStiffness; // 0x88
	float WheelSuspensionDamping; // 0x8c
	float WheelSuspensionBias; // 0x90
	float WheelLongExtremumSlip; // 0x94
	float WheelLongExtremumValue; // 0x98
	float WheelLongAsymptoteSlip; // 0x9c
	float WheelLongAsymptoteValue; // 0xa0
	float WheelLatExtremumSlip; // 0xa4
	float WheelLatExtremumValue; // 0xa8
	float WheelLatAsymptoteSlip; // 0xac
	float WheelLatAsymptoteValue; // 0xb0
	float WheelInertia; // 0xb4
	char bWheelSpeedOverride : 1; // 0xb8
	char bClampedFrictionModel : 1; // 0xb8
	char bAutoDrive : 1; // 0xb8
	float AutoDriveSteer; // 0xbc
};

struct ATgObjective {
	int32_t r_nControllingTaskForceIndex; // 0x280
	int32_t r_nControllingTaskForceCount; // 0x284
	EObjectiveStatus r_eStatus; // 0x288
	ObjectProperty m_InWordIndicatorFX; // 0x28c
	ObjectProperty m_ForegroundIndicatorFX; // 0x294
	int32_t m_nActiveAlertId; // 0x29c
	int32_t m_nPendingActiveAlertId; // 0x2a0
	int32_t m_nInactiveAlertId; // 0x2a4
	int32_t m_nWaypointMessageOverride; // 0x2a8
	char m_bTriggerEventsOnClientAsWell : 1; // 0x2ac
};

struct UUIData_LeaderboardPlayer {
	FString sName; // 0x60
	FQWord qwPortalUserId; // 0x70
	float fRank; // 0x78
	int32_t nLevel; // 0x7c
	int32_t nWins; // 0x80
	int32_t nLosses; // 0x84
	int32_t nPerk; // 0x88
	int32_t nRegion; // 0x8c
	int32_t nTitle; // 0x90
	int32_t nPosition; // 0x94
	ObjectProperty pChampion; // 0x98
};

struct URadialBlurComponent {
	ObjectProperty Material; // 0x88
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x90
	float BlurScale; // 0x94
	float BlurFalloffExponent; // 0x98
	float BlurOpacity; // 0x9c
	float MaxCullDistance; // 0xa0
	float DistanceFalloffExponent; // 0xa4
	char bRenderAsVelocity : 1; // 0xa8
	char bEnabled : 1; // 0xa8
	FMatrix LocalToWorld; // 0xb0
};

struct UMaterialExpressionQualitySwitch {
	FExpressionInput High; // 0xb0
	FExpressionInput Medium; // 0xe4
	FExpressionInput Low; // 0x118
};

struct UUIComponent_DisplayDeviceDetails {
	Fdword m_dwDeviceId; // 0x120
	ObjectProperty m_mcName; // 0x124
	ObjectProperty m_mcDesc; // 0x12c
	ObjectProperty m_mcType; // 0x134
	ObjectProperty m_mcFrame; // 0x13c
	ObjectProperty m_mcRarity; // 0x144
	ObjectProperty m_mcIconA; // 0x14c
	ObjectProperty m_mcIconAFrame; // 0x154
	ObjectProperty m_mcIconATexture; // 0x15c
	ObjectProperty m_mcIconB; // 0x164
	ObjectProperty m_mcIconBFrame; // 0x16c
	ObjectProperty m_mcIconBTexture; // 0x174
	ObjectProperty m_pStatsList; // 0x17c
	ObjectProperty m_pPerksList; // 0x184
};

struct UUIData_Pair {
	ObjectProperty m_pFirst; // 0x60
	ObjectProperty m_pSecond; // 0x68
};

struct UUIComponent_CenteredHeaderTabs {
	ObjectProperty m_pBumpers[0x2]; // 0x1d8
	ObjectProperty m_NavLeft; // 0x1e8
	ObjectProperty m_NavRight; // 0x1f0
	float m_fButtonSpace; // 0x1f8
	float m_fBumperSpaceLeft; // 0x1fc
	float m_fBumperSpaceRight; // 0x200
};

struct ATgEmitter_CameraEffect {
	float m_fDistFromCamera; // 0x29c
	char m_bShowOnlyIn1P : 1; // 0x2a0
	char m_bShowOnlyIn3P : 1; // 0x2a0
	char m_bIsIn1P : 1; // 0x2a0
	char m_bIsCameraEffectActive : 1; // 0x2a0
	TArray<FFx_Sound> m_SoundList; // 0x2a4
};

struct USeqVar_String {
	FString StrValue; // 0xa0
};

struct UUIHudMinimap_Spectator {
	ObjectProperty m_mcPlayers[0x64]; // 0x7f8
};

struct UParticleModuleColor_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb4
};

struct UUIMoviePlayer {
	int32_t m_nLastTimerIndex; // 0x1f8
	char m_bInitialized : 1; // 0x1fc
	char m_bInTransition : 1; // 0x1fc
	char m_bResizeForSafeZones : 1; // 0x1fc
	ObjectProperty m_mcRoot; // 0x200
	ObjectProperty m_mcGlobal; // 0x208
	ObjectProperty m_DataHandler; // 0x210
	ObjectProperty m_TimerManager; // 0x218
	UTgDataHandler* m_DataHandlerClass; // 0x220
	FPointer m_pTgCallbackDevice; // 0x228
	FPointer m_pKeybindLookup; // 0x230
	ObjectProperty OnlineSub; // 0x238
	TScriptInterface<Class> GameInterface; // 0x240
	TScriptInterface<Class> VoiceInterface; // 0x250
	TScriptInterface<Class> PlayerInterface; // 0x260
	TScriptInterface<Class> ContentInterface; // 0x270
	TScriptInterface<Class> PlayerInterfaceEx; // 0x280
	TScriptInterface<Class> MarketplaceInterface; // 0x290
};

struct UUIComponent_MasteryRewards {
	ObjectProperty m_pRewards; // 0x120
	ObjectProperty m_PurchaseAction; // 0x128
};

struct UParticleSystemReplay {
	int32_t ClipIDNumber; // 0x60
	TArray<FParticleSystemReplayFrame> Frames; // 0x64
};

struct USeqAct_SetMesh {
	ObjectProperty NewSkeletalMesh; // 0x108
	ObjectProperty NewStaticMesh; // 0x110
	EMeshType MeshType; // 0x118
	char bIsAllowedToMove : 1; // 0x11c
	char bAllowDecalsToReattach : 1; // 0x11c
};

struct AWaterVolume {
	ObjectProperty EntrySound; // 0x314
	AActor* EntryActor; // 0x31c
	ObjectProperty ExitSound; // 0x324
	AActor* ExitActor; // 0x32c
};

struct UUIComponent_SocialPlayer {
	ObjectProperty m_mcName; // 0x120
	ObjectProperty m_pName; // 0x128
	ObjectProperty m_CrossplayIcon; // 0x130
	ObjectProperty m_mcIcon; // 0x138
	ObjectProperty m_mcStatus; // 0x140
	ObjectProperty m_mcLevel; // 0x148
	ObjectProperty m_mcLevelX; // 0x150
	ObjectProperty m_mcRankedIndicator; // 0x158
	ObjectProperty m_mcRankedIcon; // 0x160
	ObjectProperty m_mcFrame; // 0x168
	ObjectProperty m_mcTitle; // 0x170
	ObjectProperty m_mcAddIcon; // 0x178
	ObjectProperty m_mcAddFrame; // 0x180
	ObjectProperty m_mcAddFrameBG; // 0x188
};

struct UTgAudioComponent {
	char m_bCanBeHeardDuringStealth : 1; // 0x2cc
	float m_fStealthFadeInTime; // 0x2d0
	float m_fStealthFadeOutTime; // 0x2d4
	float m_fStealthVolumeMultiplier; // 0x2d8
};

struct UTgSeqAct_TemporaryAddDevice {
	int32_t m_nDeviceId; // 0x108
	int32_t m_nEquipPoint; // 0x10c
};

struct UUIMenuManager {
	ObjectProperty m_pPopupManager; // 0x244
};

struct UMaterialExpressionComponentMask {
	FExpressionInput Input; // 0xb0
	char R : 1; // 0xe4
	char G : 1; // 0xe4
	char B : 1; // 0xe4
	char A : 1; // 0xe4
};

struct UCodecMovie {
	float PlaybackDuration; // 0x60
};

struct AApexDestructibleActor {
	ComponentProperty LightEnvironment; // 0x280
	char bFractureMaterialOverride : 1; // 0x288
	char bPlaySingleFractureMaterialEffect : 1; // 0x288
	TArray<ObjectProperty> FractureMaterials; // 0x28c
	ComponentProperty StaticDestructibleComponent; // 0x29c
	int32_t LOD; // 0x2a4
	TArray<char> VisibilityFactors; // 0x2a8
	TArray<ObjectProperty> FractureSounds; // 0x2b8
	TArray<ObjectProperty> FractureParticleEffects; // 0x2c8
};

struct UTgInventoryObject_Listen_CombatRepair {
	ObjectProperty m_CachedPawnOwner; // 0xc8
};

struct UTgSeqVar_DamageType {
	UDamageType* DamageTypeValue; // 0xa0
};

struct UAkEvent {
	ObjectProperty RequiredBank; // 0x60
	ObjectProperty m_FirstPersonEvent; // 0x68
	ObjectProperty m_ShutdownEvent; // 0x70
	char m_bIgnoreOcclusion : 1; // 0x78
	char m_bForce1pAnd3p : 1; // 0x78
};

struct USeqEvent_SequenceActivated {
	FString InputLabel; // 0x128
};

struct UMeshBeaconClient {
	FOnlineGameSearchResult HostPendingRequest; // 0xa4
	FClientConnectionRequest ClientPendingRequest; // 0xb4
	FClientBandwidthTestData CurrentBandwidthTest; // 0xdc
	EMeshBeaconClientState ClientBeaconState; // 0xf0
	EMeshBeaconPacketType ClientBeaconRequestType; // 0xf1
	float ConnectionRequestTimeout; // 0xf4
	float ConnectionRequestElapsedTime; // 0xf8
	FString ResolverClassName; // 0xfc
	UClientBeaconAddressResolver* ResolverClass; // 0x10c
	ObjectProperty Resolver; // 0x114
	char bUsingRegisteredAddr : 1; // 0x11c
	DelegateProperty __OnConnectionRequestResult__Delegate; // 0x120
	DelegateProperty __OnReceivedBandwidthTestRequest__Delegate; // 0x130
	DelegateProperty __OnReceivedBandwidthTestResults__Delegate; // 0x140
	DelegateProperty __OnTravelRequestReceived__Delegate; // 0x150
	DelegateProperty __OnCreateNewSessionRequestReceived__Delegate; // 0x160
};

struct UTgAIBehaviorCondition_HealthPercent {
	float HealthPct; // 0x98
};

struct UTgControlModule_SpectatorOverview {
	float DirectorModeSpectatorStallZ; // 0x78
	float DirectorModeSpectatorMinStallZ; // 0x7c
};

struct UPBRuleNodeRepeat {
	EProcBuildingAxis RepeatAxis; // 0x70
	float RepeatMaxSize; // 0x74
};

struct ATeleporter {
	FString URL; // 0x378
	FName ProductRequired; // 0x388
	char bChangesVelocity : 1; // 0x390
	char bChangesYaw : 1; // 0x390
	char bReversesX : 1; // 0x390
	char bReversesY : 1; // 0x390
	char bReversesZ : 1; // 0x390
	char bEnabled : 1; // 0x390
	char bCanTeleportVehicles : 1; // 0x390
	FVector TargetVelocity; // 0x394
	float LastFired; // 0x3a0
};

struct UTgAnimSequenceChain {
	char m_bLoopChain : 1; // 0x168
	char m_bResetOnRelevant : 1; // 0x168
	char m_bDelayBlendOutToPlayAnim : 1; // 0x168
	char m_bAdvanceOnReplay : 1; // 0x168
	char m_bAdvanceOnAnimEnd : 1; // 0x168
	char m_bIsAllowedToBlendOut : 1; // 0x168
	char m_ReplayedThisFrame : 1; // 0x168
};

struct UParticleModuleCollision {
	FRawDistributionVector DampingFactor; // 0x68
	FRawDistributionVector DampingFactorRotation; // 0x8c
	FRawDistributionFloat MaxCollisions; // 0xb0
	EParticleCollisionComplete CollisionCompletionOption; // 0xd4
	char bApplyPhysics : 1; // 0xd8
	char bPawnsDoNotDecrementCount : 1; // 0xd8
	char bOnlyVerticalNormalsDecrementCount : 1; // 0xd8
	char bDropDetail : 1; // 0xd8
	char bCollideOnlyIfVisible : 1; // 0xd8
	char bCollideWithWorld : 1; // 0xd8
	char bCollideWithWorldAttractors : 1; // 0xd8
	FRawDistributionFloat ParticleMass; // 0xdc
	float DirScalar; // 0x100
	float VerticalFudgeFactor; // 0x104
	FRawDistributionFloat DelayAmount; // 0x108
	float MaxCollisionDistance; // 0x12c
	TArray<FParticleAttractorCollisionAction> ParticleAttractorCollisionActions; // 0x130
};

struct UUIComponent_HudMenuMap {
	char m_bMapFocused : 1; // 0x120
	ObjectProperty m_pPlayerList; // 0x124
	ObjectProperty m_pQuestList; // 0x12c
	ObjectProperty m_pMap; // 0x134
	ObjectProperty m_pContextMenu; // 0x13c
	ObjectProperty m_pSpectatorPlayers; // 0x144
	ObjectProperty m_grInput; // 0x14c
	ObjectProperty m_pToggleFocusAction; // 0x154
	int32_t m_nViewTargetPlayerId; // 0x15c
};

