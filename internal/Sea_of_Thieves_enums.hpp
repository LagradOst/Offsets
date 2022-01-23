// Created by BlueFire1337
// Updated 2022-01-20
// Generated 2022-01-23

#pragma once

enum class ESoundDistanceModel : uint8_t {
	ATTENUATION_Linear = 0,
	ATTENUATION_Logarithmic = 1,
	ATTENUATION_Inverse = 2,
	ATTENUATION_LogReverse = 3,
	ATTENUATION_NaturalSound = 4,
	ATTENUATION_Custom = 5,
	ATTENUATION_MAX = 6,
};

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
};

enum class EAthenaAnimationWheelState : uint8_t {
	Neutral = 0,
	Positive = 1,
	Negative = 2,
	EAthenaAnimationWheelState_MAX = 3,
};

enum class EEmisaryCompanyActionType : uint8_t {
	CompleteRiddleStep = 0,
	CompleteRiddleQuest = 1,
	CompleteXMarksTheSpotQuest = 2,
	DefeatNamedSkeleton = 3,
	CompleteBountyQuest = 4,
	CompleteCargoRunStep = 5,
	CompleteCargoRunQuest = 6,
	CompleteMerchantStep = 7,
	CompleteMerchantQuest = 8,
	CompleteGhostShipQuest = 9,
	MapPieceFound = 10,
	CompleteWayfinderVoyage = 11,
	DiscoveredLostShipmentsClue = 12,
	CompleteLostShipmentsVoyage = 13,
	EEmisaryCompanyActionType_MAX = 14,
};

enum class ERareNetworkEventType : uint8_t {
	FrameBegin = 0,
	SendRPC = 1,
	QueuedRPC = 2,
	ActorReplicated = 3,
	PropertyMadeDirty = 4,
	PropertyReplicated = 5,
	WritePropertyHeader = 6,
	Misc = 7,
	SocketSendTo = 8,
	SendBunch = 9,
	SendAck = 10,
	MustBeMappedGuids = 11,
	ExportBunch = 12,
	BeginContentBlock = 13,
	EndContentBlock = 14,
	WritePropertyHandle = 15,
	PushBunch = 16,
	PopBunch = 17,
	StartActorScope = 18,
	StopActorScope = 19,
	DelayedSend = 20,
	Max = 21,
	ERareNetworkEventType_MAX = 22,
};

enum class EDamnedFortAudioState : uint8_t {
	Inactive = 0,
	BattleMusic = 1,
	BattleMusicWithCaptain = 2,
	Finished = 3,
	MAX = 4,
	EDamnedFortAudioState_MAX = 5,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class ECollectionAuditType : uint8_t {
	NoneSet = 0,
	UseParentType = 1,
	Totals = 2,
	MeshLimits = 3,
	AnimSequenceLimits = 4,
	PhysicsAudits = 5,
	ExceptionList = 6,
	WIP = 7,
	ECollectionAuditType_MAX = 8,
};

enum class ECreationMode : uint8_t {
	Invalid = 0,
	Create = 1,
	Join = 2,
	ECreationMode_MAX = 3,
};

enum class EPromptPriority : uint8_t {
	Low = 0,
	High = 1,
	EPromptPriority_MAX = 2,
};

enum class EMaterialDecalResponse : uint8_t {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8,
};

enum class EControllerHand : uint8_t {
	Left = 0,
	Right = 1,
	EControllerHand_MAX = 2,
};

enum class EWalletBalanceStatus : uint8_t {
	Unknown = 0,
	Valid = 1,
	EWalletBalanceStatus_MAX = 2,
};

enum class EProjectileWeaponFireType : uint8_t {
	Aiming = 0,
	HipFire = 1,
	MAX = 2,
	EProjectileWeaponFireType_MAX = 3,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class EOarIdentifier : uint8_t {
	Left = 0,
	Right = 1,
	EOarIdentifier_MAX = 2,
};

enum class EPlayerActivityType : uint8_t {
	None = 0,
	Bailing = 1,
	Cannon = 2,
	Cannon_END = 3,
	Capstan = 4,
	Capstan_END = 5,
	CarryingBooty = 6,
	CarryingBooty_END = 7,
	Dead = 8,
	Dead_END = 9,
	Digging = 10,
	Dousing = 11,
	EmptyingBucket = 12,
	Harpoon = 13,
	Harpoon_END = 14,
	LoseHealth = 15,
	Repairing = 16,
	Sails = 17,
	Sails_END = 18,
	UndoingRepair = 19,
	Wheel = 20,
	Wheel_END = 21,
	MAX = 22,
	EPlayerActivityType_MAX = 23,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class ECreativeLobbyState : uint8_t {
	Open = 0,
	ReadyToSetSail = 1,
	Count = 2,
	ECreativeLobbyState_MAX = 3,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class EInputConsumeOptions : uint8_t {
	ICO_ConsumeAll = 0,
	ICO_ConsumeBoundKeys = 1,
	ICO_ConsumeNone = 2,
	ICO_MAX = 3,
};

enum class EDirtinessType : uint8_t {
	Soot = 0,
	Dust = 1,
	MAX = 2,
	EDirtinessType_MAX = 3,
};

enum class EWieldableItemComplexOneShotAnimType : uint8_t {
	MeleeComboAttack = 0,
	MeleeHeavyAttack = 1,
	EWieldableItemComplexOneShotAnimType_MAX = 2,
};

enum class ELeakState : uint8_t {
	Open = 0,
	Plugged = 1,
	ELeakState_MAX = 2,
};

enum class EPromptEvaluatedType : uint8_t {
	ShowPrompt = 0,
	ShowNoPrompt = 1,
	CompleteCoordinator = 2,
	EPromptEvaluatedType_MAX = 3,
};

enum class EFishingRodServerState : uint8_t {
	NotBeingUsed = 0,
	PreparingToCast = 1,
	VerifyingCastLocation = 2,
	Casting = 3,
	DelayBeforeSpawningFish = 4,
	RequestFishSpawnWhenPossible = 5,
	WaitingForAsyncLoadToFinish = 6,
	WaitingForFishToBite = 7,
	FishMovingInToBite = 8,
	FishOnRodAndWaitingForPlayerInput = 9,
	FishMovingToMinimumDistanceFromPlayer = 10,
	FishingMiniGameUnderway = 11,
	FishCaught = 12,
	ReelingInAComedyItem = 13,
	ComedyItemCaught = 14,
	EFishingRodServerState_MAX = 15,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EFFTWaterKillPointGroupName : uint8_t {
	FFTWaterKillPointGroupB = 0,
	FFTWaterKillPointGroupC = 1,
	FFTWaterKillPointGroupD = 2,
	FFTWaterKillPointGroupE = 3,
	FFTWaterKillPointGroupReplacement = 4,
	FFTWaterKillPointGroup_MAX = 5,
	EFFTWaterKillPointGroupName_MAX = 6,
};

enum class ESkeletonShipCaptainDockedAnimationState : uint8_t {
	None = 0,
	Taunt = 1,
	Ram = 2,
	RamImpact = 3,
	ESkeletonShipCaptainDockedAnimationState_MAX = 4,
};

enum class ETreasuryWaveType : uint8_t {
	Regular = 0,
	FinalWave = 1,
	ETreasuryWaveType_MAX = 2,
};

enum class EBootflowError : uint8_t {
	None = 0,
	Unknown = 1,
	AthenaGameInstanceFailedToConnectToServer = 2,
	AthenaGameInstanceActiveConnectionToServerLost = 3,
	AthenaGameInstanceActiveConnectionToServerTimedOut = 4,
	AthenaGameInstanceInitialConnectionToServerTimedOut = 5,
	AthenaGameInstancePendingConnectionToServerTimedOut = 6,
	AthenaGameInstancePendingConnectionToServerLost = 7,
	AthenaGameInstanceGameVersionMismatch = 8,
	AthenaGameInstanceGenericDisconnectMessage = 9,
	AthenaGameInstanceNetDriverFailure = 10,
	AthenaGameInstanceInvalidFeatureConfig = 11,
	AthenaGameInstanceRPCSpamDetected = 12,
	AthenaGameInstancePlayerDeemedInactive = 13,
	AthenaGameInstanceInvalidServerURL = 14,
	AthenaGameInstanceGameAssetMismatch = 15,
	AthenaGameInstanceGenericTravelError = 16,
	AthenaGameInstanceCrewMigrationRequested = 17,
	AthenaGameInstanceCrewSessionLost = 18,
	AthenaGameInstanceServerShuttingDown = 19,
	ClientBootflowPrimaryPlayerSignedOut = 20,
	ClientBootflowPlayerSuspendedGame = 21,
	ClientBootflowLostConnectionToXboxLive = 22,
	ClientBootflowEthernetConnectionUnplugged = 23,
	ClientEvicted = 24,
	ClientInGameStateWasIdleForTooLong = 25,
	ClientInGameStateUnableToFindLocalUserId = 26,
	ClientInGameStateUnableToObtainLocalPlayerInterface = 27,
	ClientInGameStateStopMatchmakingFailed = 28,
	ClientJoinServerStateFailed = 29,
	CrewMatchmakingStateLocalUserHasInvalidId = 30,
	CrewMatchmakingStateUnableToObtainLocalUserId = 31,
	CrewMatchmakingStateUnableToObtainLocalPlayerInterface = 32,
	CrewMatchmakingStateMatchmakingFailed = 33,
	CrewSessionStateUnableToObtainLocalUserId = 34,
	CrewSessionStateUnableToObtainLocalPlayerInterface = 35,
	CrewSessionStateFailedToCreateCrewSession = 36,
	CrewSessionOnSessionLost = 37,
	DiscoveryServiceStateRequestFailedNotAuthorized = 38,
	DiscoveryServiceStateRequestFailed = 39,
	EmblemDefinitionRetrievalFailed = 40,
	EngageStateInviteHadInvalidControllerId = 41,
	EngageStateNoLocalPlayerFound = 42,
	EntryLevelStateFailedToLoadDefaultMap = 43,
	EntryLevelStateFailed = 44,
	LoadLevelStateTimeout = 45,
	LoadLevelStateFailed = 46,
	LoadUserSettingsStateFailed = 47,
	LoginTokenExchangePlayerFailedFlightingCheck = 48,
	LoginTokenExchangePlayerFailedOtherTitleCheck = 49,
	LoginTokenExchangeFailed = 50,
	LoginTokenExchangeFailedPlayerBannedPerm = 51,
	LoginTokenExchangeFailedPlayerBannedTemp = 52,
	LoginTokenExchangeFailedSteamError = 53,
	LoginTokenExchangeFailedSteamIncorrectAppToken = 54,
	LoginTokenExchangeFailedSteamTokenInvalid = 55,
	LoginTokenExchangeFailedSteamUnlicensed = 56,
	LoginTokenExchangeFailedTitleVersionInvalid = 57,
	SelectUserStateFailedToShowSignInUI = 58,
	SelectUserStateFailedToObtainValidControllerId = 59,
	SelectUserStateFailedToObtainValidLocalPlayer = 60,
	SelectUserStateNotConnectedToLive = 61,
	SelectUserStateNotSignedInWhileUnattended = 62,
	SelectUserStateUserDoesNotHaveUniqueNetId = 63,
	SelectUserStateUserDidNotSignIn = 64,
	SelectUserStateUserIsGuest = 65,
	SelectUserStateInsufficientPrivilegesToPlay = 66,
	SelectUserStateInvalidIdentityInterface = 67,
	ServerMatchmakingStateSandboxDisabled = 68,
	ServerMatchmakingStateUnableToObtainCrewId = 69,
	ServerMatchmakingStateUnableToObtainLocalPlayerInterface = 70,
	ServerMatchmakingStateInvalidPirateIdentity = 71,
	ServerMatchmakingStateNoServersAvailable = 72,
	ServerMatchmakingStateInvalidMatchmakingResponse = 73,
	ServerMatchmakingStateInvalidResponse = 74,
	ServerMatchmakingStateMatchmakingTimedOut = 75,
	ServerMatchmakingStateUnexpectedResult = 76,
	ServerMatchmakingStateJoinRefused = 77,
	ServerMatchmakingStateUnsupportedVersion = 78,
	ServerAtMatchmakingCapacity = 79,
	ServerShuttingDownWhilstMigrationIsOngoing = 80,
	SetupConfigurationServiceStateConfigServiceRequestFailed = 81,
	SetupCrewSessionStateFailedToJoinCrewSession = 82,
	SetupCrewSessionStateFailedToCreateCrewSession = 83,
	SetupServiceBridgeStateFailed = 84,
	SetupTelemetryDispatcherStateFailed = 85,
	CrewSessionHandlerJoinFailedAsCrewIsFull = 86,
	CrewSessionHandlerJoinFailedAsCrewDoesntExist = 87,
	CrewSessionHandlerJoinFailedAsCouldNotRetrieveAddress = 88,
	CrewSessionHandlerJoinFailedAsUnknownErrorOccurred = 89,
	PirateSelectionStateUnableToObtainLocalPlayerInterface = 90,
	PirateSelectionStateUnableToRetrievePirates = 91,
	PirateSelectionStateUnableToCreatePirate = 92,
	PirateSelectionStateUnableToReRollPirate = 93,
	SessionSelectInvalidSessionTypeSpecified = 94,
	InvitePrivilegesCheckFailed = 95,
	InviteUnableToRetrieveSession = 96,
	InviteSessionXboxPadOnly = 97,
	InviteSessionNoBannedData = 98,
	InviteSessionFull = 99,
	InviteSessionUnknownFailure = 100,
	InviteSessionNoTransferHandle = 101,
	InviteSessionUnableToFindTargetSession = 102,
	InviteSessionIsNotJoinable = 103,
	FailedToEnumerateEntitlements = 104,
	WhatsNewArticleRetrievalStateInvalidIdentityInterface = 105,
	FailedToFetchExistingSessions = 106,
	FailedToDisconnectFromServiceBridge = 107,
	LobbySesssionHandlerFailedToCreateLobbySession = 108,
	LobbySesssionHandlerFailedToJoinLobbySession = 109,
	LobbySessionHandlerJoinFailedAsUnknownErrorOccurred = 110,
	LobbySessionHandlerJoinFailedAsCouldNotRetrieveAddress = 111,
	LobbySessionHandlerJoinFailedAsSessionIsFull = 112,
	LobbySessionHandlerJoinFailedAsSessionDoesntExist = 113,
	LobbySessionInviteIsNotJoinable = 114,
	CreatorModeSessionStateFailedToCreateLobbySession = 115,
	CreatorModeSessionStateFailedToJoinLobbySession = 116,
	CreatorModeSessionStateFailedToAdoptCrewSession = 117,
	CreatorModeSessionStateFailedToLeaveLobbySession = 118,
	CreatorModeSessionStateFailedToRegisterCrewsOnService = 119,
	CreatorModeSessionStateFailedToReplicateCrewsFromService = 120,
	LobbySessionCrewlessPlayer = 121,
	StampSwapDiscoveryRequestFailed = 122,
	StampSwapDiscoveryRequestFailedNotAuthorized = 123,
	StampSwapLoginTokenExchangeFailed = 124,
	StampSwapLoginTokenExchangeFailedPlayerBannedPerm = 125,
	StampSwapLoginTokenExchangeFailedPlayerBannedTemp = 126,
	StampSwapLoginTokenExchangeFailedSteamError = 127,
	StampSwapLoginTokenExchangeFailedSteamIncorrectAppToken = 128,
	StampSwapLoginTokenExchangeFailedSteamTokenInvalid = 129,
	StampSwapLoginTokenExchangeFailedSteamUnlicensed = 130,
	StampSwapLoginTokenExchangeFailedTitleVersionInvalid = 131,
	StampSwapLoginTokenExchangePlayerFailedFlightingCheck = 132,
	StampSwapLoginTokenExchangePlayerFailedOtherTitleCheck = 133,
	StampSwapSetupServiceBridgeFailed = 134,
	StampSwapFailedToDisconnectFromServiceBridge = 135,
	TestFailed = 136,
	TestNetworkError = 137,
	Max = 138,
	EBootflowError_MAX = 139,
};

enum class EDropItemReturnCode : uint8_t {
	NothingToDrop = 0,
	Success = 1,
	DroppingProhibited = 2,
	EDropItemReturnCode_MAX = 3,
};

enum class EAthenaAnimationSocketGroupCharacterSize : uint8_t {
	Default = 0,
	Large = 1,
	Thin = 2,
	EAthenaAnimationSocketGroupCharacterSize_MAX = 3,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6,
};

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_VelocityX = 1,
	EDPV_VelocityY = 2,
	EDPV_VelocityZ = 3,
	EDPV_VelocityMag = 4,
	EDPV_MAX = 5,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

enum class EEmergentVoyageSource : uint8_t {
	Unknown = 0,
	MessageInABottle = 1,
	SkeletonOrder = 2,
	Emissary = 3,
	CoralMessageInABottle = 4,
	EEmergentVoyageSource_MAX = 5,
};

enum class EEnvQueryStatus : uint8_t {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6,
};

enum class ECameraLookatAnimationType : uint8_t {
	Default = 0,
	Wheel = 1,
	Capstan = 2,
	Sail = 3,
	Tentacle = 4,
	Ladder = 5,
	Sitting = 6,
	ECameraLookatAnimationType_MAX = 7,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

enum class EPremiumCatalogOfferType : uint8_t {
	Undefined = 0,
	Tab = 1,
	BundleSet = 2,
	ItemSet = 3,
	Cards = 4,
	Item = 5,
	Offer = 6,
	EPremiumCatalogOfferType_MAX = 7,
};

enum class EFishSpawnTimeOfDay : uint8_t {
	AnyTime = 0,
	OnlyDay = 1,
	OnlyNight = 2,
	EFishSpawnTimeOfDay_MAX = 3,
};

enum class EVoyageLocationType : uint8_t {
	Fixed = 0,
	Random = 1,
	Closest = 2,
	EVoyageLocationType_MAX = 3,
};

enum class ESirenTridentProjectileState : uint8_t {
	None = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	MAX = 4,
	ESirenTridentProjectileState_MAX = 5,
};

enum class ECrewOwnershipState : uint8_t {
	Neutral = 0,
	Assigned = 1,
	ECrewOwnershipState_MAX = 2,
};

enum class ELadderTransitionMode : uint8_t {
	OnTop = 0,
	OffTop = 1,
	OnBottom = 2,
	OffBottom = 3,
	Max = 4,
	ELadderTransitionMode_MAX = 5,
};

enum class EPerformanceCaptureType : uint8_t {
	None = 0,
	FrameTime = 1,
	StreamingMemory = 2,
	StreamingPositional = 3,
	EPerformanceCaptureType_MAX = 4,
};

enum class EWwiseLanguageOrder : uint8_t {
	English = 0,
	French = 1,
	Italian = 2,
	German = 3,
	Spanish = 4,
	Mexican = 5,
	Brazil = 6,
	Russian = 7,
	Japanese = 8,
	EWwiseLanguageOrder_MAX = 9,
};

enum class ETrackedActorType : uint8_t {
	Unknown = 0,
	AI_Fauna = 1,
	AI_GhostShip_Captain = 2,
	AI_GhostShip_MiniBoss = 3,
	AI_GhostShip_Grunt = 4,
	AI_Kraken = 5,
	AI_Megalodon = 6,
	AI_OceanCrawler_Crab = 7,
	AI_OceanCrawler_Eel = 8,
	AI_OceanCrawler_Hermit = 9,
	AI_Pets = 10,
	AI_Pets_Wielded = 11,
	AI_Siren = 12,
	AI_Shark = 13,
	AI_Ship_Aggressive_Large = 14,
	AI_Ship_Aggressive_Small = 15,
	AI_Ship_Battle_Large = 16,
	AI_Ship_Battle_Small = 17,
	AI_Ship_Passive_Large = 18,
	AI_Ship_Passive_Small = 19,
	AI_Skeleton = 20,
	AI_SwimmingCreature = 21,
	AshenLordCloud = 22,
	BarrelsOfPlenty = 23,
	Booty = 24,
	Booty_AshenWindsSkull = 25,
	Booty_ReapersChest = 26,
	BuoyantActor = 27,
	Consumable = 28,
	Earthquake = 29,
	FireworkExplosion = 30,
	FireworkProjectile = 31,
	FishingFish = 32,
	FogBank = 33,
	Geyser = 34,
	Ghostship_Flameheart_Cloud = 35,
	Mermaid = 36,
	MessageInABottle = 37,
	NPC = 38,
	Player = 39,
	Pouch_Ammo = 40,
	Pouch_Doubloons = 41,
	Pouch_Gold = 42,
	Rowboat = 43,
	Rowboat_Cannon = 44,
	Rowboat_Harpoon = 45,
	Ship_Large = 46,
	Ship_Medium = 47,
	Ship_Small = 48,
	ShipCloud = 49,
	Shipwreck = 50,
	ShortRangeMarker = 51,
	SkeletonThrone = 52,
	SkullCloud = 53,
	StatueThreat = 54,
	StorageContainer = 55,
	StorageContainerBuoyant = 56,
	Storm = 57,
	SuperHeatedWater = 58,
	Volcano = 59,
	WreckDebris_Land = 60,
	WreckDebris_Sea = 61,
	MAX = 62,
	ETrackedActorType_MAX = 63,
};

enum class EBlackboardValueCompositeType : uint8_t {
	And = 0,
	Or = 1,
	EBlackboardValueCompositeType_MAX = 2,
};

enum class EMemoryUsageVisualiserInstanceType : uint8_t {
	Server = 0,
	Client = 1,
	EMemoryUsageVisualiserInstanceType_MAX = 2,
};

enum class EKrakenState : uint8_t {
	Spawning = 0,
	Active = 1,
	Despawning = 2,
	EKrakenState_MAX = 3,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class ETaskReaction : uint8_t {
	Ignore = 0,
	SucceedTask = 1,
	FailTask = 2,
	ETaskReaction_MAX = 3,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class EAITargetWeaponFiringArcResult : uint8_t {
	LeftOfArc = 0,
	RightOfArc = 1,
	WithinArc = 2,
	EAITargetWeaponFiringArcResult_MAX = 3,
};

enum class EOarState : uint8_t {
	Idle = 0,
	InStroke = 1,
	ApexOfStroke = 2,
	RecoveringFromStroke = 3,
	Braking = 4,
	EOarState_MAX = 5,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class EIslandTextureSourceType : uint8_t {
	TreasureMap = 0,
	WorldMap = 1,
	EIslandTextureSourceType_MAX = 2,
};

enum class EImportanceLevel : uint8_t {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7,
};

enum class EHIKEffector : uint8_t {
	HIKEffector_Hips = 0,
	HIKEffector_LeftAnkle = 1,
	HIKEffector_RightAnkle = 2,
	HIKEffector_LeftWrist = 3,
	HIKEffector_RightWrist = 4,
	HIKEffector_LeftKnee = 5,
	HIKEffector_RightKnee = 6,
	HIKEffector_LeftElbow = 7,
	HIKEffector_RightElbow = 8,
	HIKEffector_ChestOrigin = 9,
	HIKEffector_ChestEnd = 10,
	HIKEffector_LeftFoot = 11,
	HIKEffector_RightFoot = 12,
	HIKEffector_LeftShoulder = 13,
	HIKEffector_RightShoulder = 14,
	HIKEffector_Head = 15,
	HIKEffector_LeftHip = 16,
	HIKEffector_RightHip = 17,
	HIKEffector_LeftHand = 18,
	HIKEffector_RightHand = 19,
	HIKEffector_LeftHandThumb = 20,
	HIKEffector_LeftHandIndex = 21,
	HIKEffector_LeftHandMiddle = 22,
	HIKEffector_LeftHandRing = 23,
	HIKEffector_LeftHandPinky = 24,
	HIKEffector_LeftHandExtraFinger = 25,
	HIKEffector_RightHandThumb = 26,
	HIKEffector_RightHandIndex = 27,
	HIKEffector_RightHandMiddle = 28,
	HIKEffector_RightHandRing = 29,
	HIKEffector_RightHandPinky = 30,
	HIKEffector_RightHandExtraFinger = 31,
	HIKEffector_LeftFootThumb = 32,
	HIKEffector_LeftFootIndex = 33,
	HIKEffector_LeftFootMiddle = 34,
	HIKEffector_LeftFootRing = 35,
	HIKEffector_LeftFootPinky = 36,
	HIKEffector_LeftFootExtraFinger = 37,
	HIKEffector_RightFootThumb = 38,
	HIKEffector_RightFootIndex = 39,
	HIKEffector_RightFootMiddle = 40,
	HIKEffector_RightFootRing = 41,
	HIKEffector_RightFootPinky = 42,
	HIKEffector_RightFootExtraFinger = 43,
	HIKEffector_Last = 44,
	HIKEffector_MAX = 45,
};

enum class EPlayMode : uint8_t {
	Adventure = 0,
	Contest = 1,
	Tutorial = 2,
	NotSelectedYet = 3,
	MAX = 4,
	Invalid = 5,
	EPlayMode_MAX = 6,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class EParticleScreenAlignment : uint8_t {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_VelocityScreen = 6,
	PSA_InitialVelocityScreen = 7,
	PSA_InitialVelocity = 8,
	PSA_VelocityOnly = 9,
	PSA_MAX = 10,
};

enum class ESimplygonCasterType : uint8_t {
	None = 0,
	Color = 1,
	Normals = 2,
	Opacity = 3,
	ESimplygonCasterType_MAX = 4,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EScoreReason : uint8_t {
	None = 0,
	SoldChest = 1,
	SoldStolenChest = 2,
	CrewShipSunk = 3,
	DownedOpponent = 4,
	KilledOpponent = 5,
	ChestDugUp = 6,
	MastHit = 7,
	CapstanHit = 8,
	WheelHit = 9,
	HullHit = 10,
	EScoreReason_MAX = 11,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class EProjectileLauncherMechanismMode : uint8_t {
	OneShot = 0,
	Continuous = 1,
	EProjectileLauncherMechanismMode_MAX = 2,
};

enum class EPhysicsSceneType : uint8_t {
	PST_Sync = 0,
	PST_Cloth = 1,
	PST_Async = 2,
	PST_MAX = 3,
};

enum class EGameplayEventSignalType : uint8_t {
	SkellyFort = 0,
	SkellyShip = 1,
	AshenLord = 2,
	FlameheartGhostShips = 3,
	MAX = 4,
	EGameplayEventSignalType_MAX = 5,
};

enum class ELiquidType : uint8_t {
	Water = 0,
	Vomit = 1,
	BoilingWater = 2,
	ELiquidType_MAX = 3,
};

enum class EAICharacterMaxSpeedModificationReason : uint8_t {
	SkeletonFormsConstant = 0,
	SkeletonFormsEffects = 1,
	SkeletonLimpCurse = 2,
	EAICharacterMaxSpeedModificationReason_MAX = 3,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_NoBlend = 2,
	PSUVIM_Linear_Blend = 3,
	PSUVIM_Random = 4,
	PSUVIM_Random_Blend = 5,
	PSUVIM_MAX = 6,
};

enum class InventoryAction : uint8_t {
	Take = 0,
	Stow = 1,
	InventoryAction_MAX = 2,
};

enum class ECrewDestroyedReason : uint8_t {
	AllCrewMembersRemoved = 0,
	ServerMigrated = 1,
	ECrewDestroyedReason_MAX = 2,
};

enum class ENetworkRegion : uint8_t {
	MainWorld = 0,
	DeepSea = 1,
	Max = 2,
	ENetworkRegion_MAX = 3,
};

enum class EAnimatedMechanismTickCost : uint8_t {
	Low = 0,
	High = 1,
	EAnimatedMechanismTickCost_MAX = 2,
};

enum class EBootflowErrorPriority : uint8_t {
	High = 0,
	AboveNormal = 1,
	Normal = 2,
	BelowNormal = 3,
	Low = 4,
	EBootflowErrorPriority_MAX = 5,
};

enum class EItemQualityQueryReason : uint8_t {
	DontCare = 0,
	ChangeOwnership = 1,
	DropOnShip = 2,
	HandIn = 3,
	EItemQualityQueryReason_MAX = 4,
};

enum class ELastIgnitionState : uint8_t {
	None = 0,
	Success = 1,
	Failure = 2,
	ELastIgnitionState_MAX = 3,
};

enum class EAudioGameState : uint8_t {
	None = 0,
	InGame = 1,
	InFrontendWrapper = 2,
	InFrontendMatineeSequence = 3,
	EAudioGameState_MAX = 4,
};

enum class EActionQueueEntryStatus : uint8_t {
	Unset = 0,
	Set = 1,
	Playing = 2,
	Completed = 3,
	EActionQueueEntryStatus_MAX = 4,
};

enum class EKrakenBehaviourType : uint8_t {
	Idle = 0,
	ShipHitting = 1,
	ShipWrapping = 2,
	PlayerGrabbing = 3,
	EKrakenBehaviourType_MAX = 4,
};

enum class EGlitterbeardVFXState : uint8_t {
	Active = 0,
	Inactive = 1,
	EGlitterbeardVFXState_MAX = 2,
};

enum class ESwimmingGoalCheckMode : uint8_t {
	Goal2D = 0,
	Goal3D = 1,
	ESwimmingGoalCheckMode_MAX = 2,
};

enum class EShroudBreakerActivationStateEnum : uint8_t {
	DEACTIVE = 0,
	STAGE_2 = 1,
	STAGE_3 = 2,
	STAGE_4 = 3,
	STAGE_5 = 4,
	EShroudBreakerActivationStateEnum_MAX = 5,
};

enum class EEmitterRelationship : uint8_t {
	Audio_Remote = 0,
	Audio_Local = 1,
	Audio_Default = 2,
	Audio_MAX = 3,
};

enum class EConsoleType : uint8_t {
	CONSOLE_Any = 0,
	CONSOLE_Mobile = 1,
	CONSOLE_MAX = 2,
};

enum class EClueSiteLootType : uint8_t {
	Loot = 0,
	Debris = 1,
	None = 2,
	EClueSiteLootType_MAX = 3,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EDrunkennessType : uint8_t {
	FromDrinkingAlcohol = 0,
	FromDrunkenChest = 1,
	NumTypes = 2,
	EDrunkennessType_MAX = 3,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	ELogTimes_MAX = 3,
};

enum class ECutsceneActivatonState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	Active = 2,
	FinishedPlaying = 3,
	Decommissioned = 4,
	ECutsceneActivatonState_MAX = 5,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_Basis = 3,
	RTS_BasisGrid = 4,
	RTS_MAX = 5,
};

enum class EItemType : uint8_t {
	Weapon = 0,
	Item = 1,
	Quest = 2,
	Invalid = 3,
	EItemType_MAX = 4,
};

enum class ESeasonStyleModifiers : uint8_t {
	Owned = 0,
	SeasonMark = 1,
	PirateLegend = 2,
	ESeasonStyleModifiers_MAX = 3,
};

enum class EScreenAlignmentGroupNames : uint8_t {
	ScreenAlignmentGroupB = 0,
	ScreenAlignmentGroupC = 1,
	ScreenAlignmentGroupD = 2,
	ScreenAlignmentGroupE = 3,
	ScreenAlignmentGroupReplacement = 4,
	ScreenAlignmentGroup_MAX = 5,
	EScreenAlignmentGroupNames_MAX = 6,
};

enum class EGameplayTargetingConfirmation : uint8_t {
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4,
};

enum class ETutorialDialogOption : uint8_t {
	None = 0,
	ReturnToStrangerCompanyVoyageDialogOption = 1,
	ReturnToStrangerTallTaleDialogOption = 2,
	ReturnToStrangerGoItAloneDialogOption = 3,
	ETutorialDialogOption_MAX = 4,
};

enum class EAthenaAnimationPetHeldReactionState : uint8_t {
	None = 0,
	Chew = 1,
	PositiveReact = 2,
	NegativeReact = 3,
	RefuseReact = 4,
	EAthenaAnimationPetHeldReactionState_MAX = 5,
};

enum class EShipHullDamageType : uint8_t {
	Landscape = 0,
	RammingSpur = 1,
	EShipHullDamageType_MAX = 2,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class EKillPlaneKillPointLocation : uint8_t {
	KillPlaneKillPointLocation_LowerBound = 0,
	KillPlaneKillPointLocation_Center = 1,
	KillPlaneKillPointLocation_UpperBound = 2,
	KillPlaneKillPointLocation_MAX = 3,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class EFFTWaterKillPointLocation : uint8_t {
	FFTWaterKillPointLocation_LowerBound = 0,
	FFTWaterKillPointLocation_Center = 1,
	FFTWaterKillPointLocation_UpperBound = 2,
	FFTWaterKillPointLocation_MAX = 3,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_MAX = 3,
};

enum class ETinySharkTypes : uint8_t {
	None = 0,
	TheHuneringOne = 1,
	TheCrestedQueen = 2,
	TheShadowmaw = 3,
	TheAncientTerror = 4,
	TheShroudedGhost = 5,
	ETinySharkTypes_MAX = 6,
};

enum class ETestTelemetryJsonSchemaWriterUEnum : uint8_t {
	None = 0,
	FirstValue = 1,
	SecondValue = 2,
	ETestTelemetryJsonSchemaWriterUEnum_MAX = 3,
};

enum class EWalletBalanceRequestFailureReason : uint8_t {
	ServiceUnavailable = 0,
	RequestTimeout = 1,
	PendingRequest = 2,
	RequestCancelled = 3,
	EWalletBalanceRequestFailureReason_MAX = 4,
};

enum class ESwimmingCreatureDeathCustomEventEnum : uint8_t {
	None = 0,
	StartSinking = 1,
	StartSinkingAnim = 2,
	ESwimmingCreatureDeathCustomEventEnum_MAX = 3,
};

enum class EDesignPreviewSizeMode : uint8_t {
	FillScreen = 0,
	Custom = 1,
	CustomOnScreen = 2,
	Desired = 3,
	DesiredOnScreen = 4,
	EDesignPreviewSizeMode_MAX = 5,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MaintainYFOV_UnitIsXFovIn16By9 = 3,
	AspectRatio_MAX = 4,
};

enum class EAthenaAnimationPetHeldState : uint8_t {
	Idle = 0,
	Underwater = 1,
	UnEquip = 2,
	Equip = 3,
	Inactive = 4,
	Drop = 5,
	Stroke = 6,
	Give = 7,
	EAthenaAnimationPetHeldState_MAX = 8,
};

enum class EInputHandlerResult : uint8_t {
	Handled = 0,
	Unhandled = 1,
	EInputHandlerResult_MAX = 2,
};

enum class EInAppPurchaseState : uint8_t {
	Success = 0,
	Failed = 1,
	Cancelled = 2,
	Invalid = 3,
	NotAllowed = 4,
	Restored = 5,
	Unknown = 6,
	EInAppPurchaseState_MAX = 7,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class EBowSplashTickReturnType : uint8_t {
	NoEffectsPlayed = 0,
	SFXOnly = 1,
	SFXAndVFX = 2,
	EBowSplashTickReturnType_MAX = 3,
};

enum class EHealthIndex : uint8_t {
	DontCare = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4,
	Level5 = 5,
	Level6 = 6,
	Level7 = 7,
	MAX = 8,
	EHealthIndex_MAX = 9,
};

enum class EEntitlementConsumptionState : uint8_t {
	Failed = 0,
	Succeeded = 1,
	TimedOut = 2,
	EEntitlementConsumptionState_MAX = 3,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class ETriangleSortAxis : uint8_t {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3,
};

enum class EStartGameNarrativeMediaSize : uint8_t {
	Undefined = 0,
	Default = 1,
	LargeWide = 2,
	EStartGameNarrativeMediaSize_MAX = 3,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

enum class ECompanyStatus : uint8_t {
	Invalid = 0,
	Pending = 1,
	Valid = 2,
	ECompanyStatus_MAX = 3,
};

enum class ELowResTranslucencyCascade : uint8_t {
	LRTC_QuarterRes = 0,
	LRTC_HalfRes = 1,
	LRTC_FullRes = 2,
	LRTC_MAX = 3,
};

enum class EPlayerStatsOperator : uint8_t {
	Sum = 0,
	Replace = 1,
	Minimum = 2,
	Maximum = 3,
	EPlayerStatsOperator_MAX = 4,
};

enum class EMaxMoveSpeedScalarReason : uint8_t {
	Digging = 0,
	Limping = 1,
	UsingItem = 2,
	Stunned = 3,
	MeleeBlocking = 4,
	Testing = 5,
	Environment = 6,
	NumReasons = 7,
	EMaxMoveSpeedScalarReason_MAX = 8,
};

enum class ESafeZoneState : uint8_t {
	Initial = 0,
	Activated = 1,
	Deactivated = 2,
	ESafeZoneState_MAX = 3,
};

enum class ENonVerbalRadialCategory : uint8_t {
	QuickAccess = 0,
	Strategy = 1,
	WieldedItem = 2,
	ControlledObject = 3,
	Invalid = 4,
	ENonVerbalRadialCategory_MAX = 5,
};

enum class EPetSize : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	EPetSize_MAX = 3,
};

enum class EPreLoginDeniedReason : uint8_t {
	None = 0,
	PirateRetreival = 1,
	EntitlementsRetrieval = 2,
	MPSDValidation = 3,
	CrewNoLongerOnServer = 4,
	CrewAssignmentFailed = 5,
	AuthTokenValidation = 6,
	UWPJoinAttemptRefusal = 7,
	EPreLoginDeniedReason_MAX = 8,
};

enum class ETeleportActionStateFadeType : uint8_t {
	Fade = 0,
	NoFade = 1,
	ETeleportActionStateFadeType_MAX = 2,
};

enum class EIslandActiveEventType : uint8_t {
	None = 0,
	Haunted = 1,
	EIslandActiveEventType_MAX = 2,
};

enum class EActionStateMachineTrackId : uint8_t {
	Locomotion = 0,
	Overlay = 1,
	ItemUse = 2,
	ForcedMovement = 3,
	Migration = 4,
	Count = 5,
	Invalid = 6,
	EActionStateMachineTrackId_MAX = 7,
};

enum class EIPGEthnicity : uint8_t {
	UNSPECIFIED = 0,
	ASIAN = 1,
	BLACK = 2,
	WHITE = 3,
	EIPGEthnicity_MAX = 4,
};

enum class EBountyTargetGender : uint8_t {
	Male = 0,
	Female = 1,
	EBountyTargetGender_MAX = 2,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	EEnvTestScoreOperator_MAX = 3,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class ETimeOfDay : uint8_t {
	Day = 0,
	Night = 1,
	ETimeOfDay_MAX = 2,
};

enum class EKnockbackType : uint8_t {
	AwayFromCentre = 0,
	TowardsActor = 1,
	EKnockbackType_MAX = 2,
};

enum class EEncounterType : uint8_t {
	None = 0,
	Storm = 1,
	BarrelsOfPlenty = 2,
	ShipSighting = 3,
	ShipEncounter = 4,
	ShipwreckEventSighting = 5,
	ShipwreckEventEncounter = 6,
	ShipwreckAmbientSighting = 7,
	ShipwreckAmbientEncounter = 8,
	SkellyFortSighting = 9,
	SkellyFortEncounter = 10,
	SkellyFortLegendaryFortSighting = 11,
	SkellyFortLegendaryFortEncounter = 12,
	KrakenSighting = 13,
	KrakenEncounter = 14,
	TinySharkSighting = 15,
	TinySharkEncounter = 16,
	AIShipSighting = 17,
	AIShipEncounter = 18,
	FogBank = 19,
	BoxOfSecrets = 20,
	ReapersChest = 21,
	EmergentCaptain = 22,
	AncientSkelly = 23,
	AshenLordSighting = 24,
	AshenLordEncounter = 25,
	AggressiveGhostShipsAmbientSighting = 26,
	AggressiveGhostShipsAmbientEncounter = 27,
	AggressiveGhostShipsEventSighting = 28,
	AggressiveGhostShipsEventEncounter = 29,
	SunkenKingdomTreasurySighting = 30,
	SunkenKingdomTreasuryEncounter = 31,
	Count = 32,
	EEncounterType_MAX = 33,
};

enum class ETestArea : uint8_t {
	None = 0,
	Rendering = 1,
	UserInterface = 2,
	UserInterfaceInitialization = 3,
	Art = 4,
	Audio = 5,
	ETestArea_MAX = 6,
};

enum class ERateGroupNames : uint8_t {
	RateB = 0,
	RateC = 1,
	RateD = 2,
	RateE = 3,
	RateReplacement = 4,
	Rate_MAX = 5,
	ERateGroupNames_MAX = 6,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class ETreasureRoomState : uint8_t {
	Inactive = 0,
	Waiting = 1,
	Combat = 2,
	CombatOver = 3,
	Aftermath = 4,
	ETreasureRoomState_MAX = 5,
};

enum class EEncounterDimensions : uint8_t {
	ThreeDimensions = 0,
	TwoDimensions = 1,
	EEncounterDimensions_MAX = 2,
};

enum class EFeedableType : uint8_t {
	None = 0,
	Meat = 1,
	Fruit = 2,
	Bait = 3,
	EFeedableType_MAX = 4,
};

enum class EProjectileCollisionResponse : uint8_t {
	Ignore = 0,
	Block = 1,
	EProjectileCollisionResponse_MAX = 2,
};

enum class ETestCategory : uint8_t {
	Unit = 0,
	Integration = 1,
	Acceptance = 2,
	Stress = 3,
	Soak = 4,
	Performance = 5,
	ETestCategory_MAX = 6,
};

enum class ECanAddItemQueryResult : uint8_t {
	Success = 0,
	SlotFull = 1,
	Invalid = 2,
	ECanAddItemQueryResult_MAX = 3,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class EPromptStartStop : uint8_t {
	Start = 0,
	Stop = 1,
	EPromptStartStop_MAX = 2,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	EBoneTranslationRetargetingMode_MAX = 4,
};

enum class EInteractableIdentifier : uint8_t {
	None = 0,
	Capstan = 1,
	Cannon = 2,
	Harpoon = 3,
	Sail = 4,
	Wheel = 5,
	MAX = 6,
	EInteractableIdentifier_MAX = 7,
};

enum class EMastType : uint8_t {
	Front = 0,
	Main = 1,
	Rear = 2,
	EMastType_MAX = 3,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class EBT_ShipOwnership : uint8_t {
	Any = 0,
	Crew = 1,
	Alliance = 2,
	AI = 3,
	EBT_MAX = 4,
};

enum class ELoadPersistance : uint8_t {
	Permanent = 0,
	FrontEndOnly = 1,
	CallbackOnly = 2,
	ELoadPersistance_MAX = 3,
};

enum class EHDRCaptureGamut : uint8_t {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_MAX = 5,
};

enum class EGameSettingType : uint8_t {
	Bool = 0,
	Float = 1,
	Int = 2,
	INVALID = 3,
	EGameSettingType_MAX = 4,
};

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t {
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class ETraceTypeQuery : uint8_t {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33,
};

enum class EStunnedActionStateItemWielding : uint8_t {
	Allowed = 0,
	Disallowed = 1,
	EStunnedActionStateItemWielding_MAX = 2,
};

enum class ECollisionShapeType : uint8_t {
	Sphere = 0,
	Box = 1,
	ECollisionShapeType_MAX = 2,
};

enum class ETreasuryState : uint8_t {
	Inactive = 0,
	Waiting = 1,
	Active = 2,
	Completed = 3,
	Failed = 4,
	Aftermath = 5,
	ETreasuryState_MAX = 6,
};

enum class ETestEnum : uint8_t {
	Alpha = 0,
	Beta = 1,
	ETestEnum_MAX = 2,
};

enum class EBurstGroup : uint8_t {
	GroupA = 0,
	GroupB = 1,
	GroupC = 2,
	GroupD = 3,
	GroupE = 4,
	GroupReplacement = 5,
	Group_MAX = 6,
	EBurstGroup_MAX = 7,
};

enum class ESimplygonTextureStrech : uint8_t {
	None = 0,
	VerySmall = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	ESimplygonTextureStrech_MAX = 6,
};

enum class ECharacterSwimmingMode : uint8_t {
	Surface = 0,
	Submerged = 1,
	Total = 2,
	ECharacterSwimmingMode_MAX = 3,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class EShowVoyageBannersState : uint8_t {
	Show = 0,
	DontShow = 1,
	EShowVoyageBannersState_MAX = 2,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class EPoseableAnimMode : uint8_t {
	Poseable = 0,
	Animated = 1,
	EPoseableAnimMode_MAX = 2,
};

enum class EAthenaAnimationLadderState : uint8_t {
	None = 0,
	ClimbOn = 1,
	ClimbOff = 2,
	Climbing = 3,
	EAthenaAnimationLadderState_MAX = 4,
};

enum class EActionPredictionType : uint8_t {
	Predicted = 0,
	NotPredicted = 1,
	EActionPredictionType_MAX = 2,
};

enum class EClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	ChangeWorldRequest = 4,
	Reconnect = 5,
	EClientRequestType_MAX = 6,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class EIPGPirateType : uint8_t {
	PLAYER = 0,
	NPC = 1,
	EIPGPirateType_MAX = 2,
};

enum class FVsyncOptions : uint8_t {
	Off = 0,
	On = 1,
	COUNT = 2,
	FVsyncOptions_MAX = 3,
};

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class EWheelDirection : uint8_t {
	Any = 0,
	Anticlockwise = 1,
	Clockwise = 2,
	EWheelDirection_MAX = 3,
};

enum class EFishingFloatState : uint8_t {
	NotSet = 0,
	AttachedToRod = 1,
	Casting = 2,
	CastingFailed = 3,
	FloatingOnWater = 4,
	BringingInCatch = 5,
	Retracting = 6,
	ViolentlyRetracting = 7,
	EFishingFloatState_MAX = 8,
};

enum class EShipRegion : uint8_t {
	None = 0,
	TopDeck_Bow = 1,
	TopDeck_MainStairs = 2,
	TopDeck_Hatch = 3,
	TopDeck_CaptainsCabin = 4,
	TopDeck_WheelDeck = 5,
	MapDeck_Front = 6,
	MapDeck_MainStairs = 7,
	MapDeck_Table = 8,
	MapDeck_RearStairs = 9,
	BrigDeck_Stairs = 10,
	BrigDeck_OutsideBrig = 11,
	BrigDeck_InsideBrig = 12,
	EShipRegion_MAX = 13,
};

enum class EBlueprintType : uint8_t {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6,
};

enum class FPersistentUserGameSettingsDetail : uint8_t {
	Min = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Ultra = 4,
	Recommended = 5,
	COUNT = 6,
	FPersistentUserGameSettingsDetail_MAX = 7,
};

enum class ERequestState : uint8_t {
	Invalid = 0,
	Waiting = 1,
	Complete = 2,
	Timeout = 3,
	Cancelled = 4,
	ERequestState_MAX = 5,
};

enum class EFaunaAnimationSnakeAttackDirection : uint8_t {
	Forwards = 0,
	Backwards = 1,
	EFaunaAnimationSnakeAttackDirection_MAX = 2,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class EVoyageLeaveStatus : uint8_t {
	Other = 0,
	Completed = 1,
	Cancelled = 2,
	QuitInProgress = 3,
	Migrated = 4,
	EVoyageLeaveStatus_MAX = 5,
};

enum class EAxisOption : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	EAxisOption_MAX = 6,
};

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class ESwimmingSyncMode : uint8_t {
	Synchronous = 0,
	Asynchronous = 1,
	ESwimmingSyncMode_MAX = 2,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class EGTInputWidgetRaycastQuality : uint8_t {
	RaycastQuality_Fast = 0,
	RaycastQuality_Balanced = 1,
	RaycastQuality_Accurate = 2,
	RaycastQuality_MAX = 3,
};

enum class EPlayModeVariant : uint8_t {
	Normal = 0,
	Creator = 1,
	Invalid = 2,
	MAX = 3,
	EPlayModeVariant_MAX = 4,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	HardwareClearAndQuadAtMaxZ = 3,
	EClearSceneOptions_MAX = 4,
};

enum class EAbilityTaskNetSyncType : uint8_t {
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3,
};

enum class EDebugPetStateDescriptor : uint8_t {
	NoState = 0,
	Hangout_Attached = 1,
	Hangout_MoveToLocation = 2,
	Reacting = 3,
	Pursuit = 4,
	Idle = 5,
	Follow = 6,
	Eating = 7,
	Scared = 8,
	ForcedIdle = 9,
	EDebugPetStateDescriptor_MAX = 10,
};

enum class EEncounterMobility : uint8_t {
	Static = 0,
	Mobile = 1,
	EEncounterMobility_MAX = 2,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
};

enum class EFloatValueComparisonType : uint8_t {
	NearlyEqual = 0,
	NotNearlyEqual = 1,
	GreaterThan = 2,
	LessThan = 3,
	GreaterThanEquals = 4,
	LessThanEquals = 5,
	EFloatValueComparisonType_MAX = 6,
};

enum class EAIShipEncounterType : uint8_t {
	Battle = 0,
	Passive = 1,
	Aggressive = 2,
	MAX = 3,
	EAIShipEncounterType_MAX = 4,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class EVolcanoTargetHitType : uint8_t {
	OnTarget = 0,
	NearMiss = 1,
	Random = 2,
	EVolcanoTargetHitType_MAX = 3,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class EMeleeSpecialState : uint8_t {
	None = 0,
	Lunge = 1,
	Knockback = 2,
	Stunned = 3,
	Dodge = 4,
	MAX = 5,
	EMeleeSpecialState_MAX = 6,
};

enum class EShipLeakerUpdateType : uint8_t {
	Iterative = 0,
	ForceAll = 1,
	EShipLeakerUpdateType_MAX = 2,
};

enum class EGameplayModOp : uint8_t {
	Additive = 0,
	Multiplicitive = 1,
	Division = 2,
	Override = 3,
	Max = 4,
	EGameplayModOp_MAX = 5,
};

enum class EAggressiveGhostShipSpawnDirectionType : uint8_t {
	Random = 0,
	AlwaysClockwise = 1,
	AlwaysAntiClockwise = 2,
	MatchNearbyEncounter = 3,
	OppositeToNearbyEncounter = 4,
	EAggressiveGhostShipSpawnDirectionType_MAX = 5,
};

enum class EStartLocationGPUGroupNames : uint8_t {
	StartLocationGPUGroupB = 0,
	StartLocationGPUGroupC = 1,
	StartLocationGPUGroupD = 2,
	StartLocationGPUGroupE = 3,
	StartLocationGPUGroupReplacement = 4,
	StartLocationGPUGroup_MAX = 5,
	EStartLocationGPUGroupNames_MAX = 6,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EPlatformInterfaceDataType : uint8_t {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6,
};

enum class ESimpleLightFunctionType : uint8_t {
	NoFunction = 0,
	Pulse = 1,
	Flicker = 2,
	ESimpleLightFunctionType_MAX = 3,
};

enum class ETargetUpdateReason : uint8_t {
	Update = 0,
	Replace = 1,
	ETargetUpdateReason_MAX = 2,
};

enum class ESpaceType : uint8_t {
	WorldSpace = 0,
	LocalSpace = 1,
	ESpaceType_MAX = 2,
};

enum class ERegenerationState : uint8_t {
	Regenerating = 0,
	Stopped = 1,
	Paused = 2,
	ERegenerationState_MAX = 3,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EQuestDistributionMethod : uint8_t {
	AllAtOnce = 0,
	PerChapter = 1,
	FixedChapters = 2,
	EQuestDistributionMethod_MAX = 3,
};

enum class EGameplayCueEvent : uint8_t {
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class EAthenaNPCObjectSlot : uint8_t {
	Slot_2 = 0,
	Slot_3 = 1,
	Slot_4 = 2,
	Slot_5 = 3,
	Slot_6 = 4,
	Slot_7 = 5,
	Slot_8 = 6,
	Slot_9 = 7,
	Slot_10 = 8,
	Slot_11 = 9,
	Slot_MAX = 10,
};

enum class EItemUseStoppedReason : uint8_t {
	Stopped = 0,
	Interrupted = 1,
	EItemUseStoppedReason_MAX = 2,
};

enum class ESwimmingArcMode : uint8_t {
	ArcToTarget = 0,
	SwimDirectlyToTarget = 1,
	SwimDirectlyDown = 2,
	ESwimmingArcMode_MAX = 3,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class MapInventoryItemState : uint8_t {
	Default = 0,
	Locked = 1,
	MapInventoryItemState_MAX = 2,
};

enum class EInstancedRopeParameterType : uint8_t {
	RPT_Start = 0,
	RPT_End = 1,
	RPT_Roughness = 2,
	RPT_Thickness = 3,
	RPT_UVScale = 4,
	RPT_UVOffset = 5,
	RPT_Length = 6,
	RPT_SwingTime = 7,
	RPT_WindAmount = 8,
	RPT_CatenaryScale = 9,
	RPT_CatenaryX0 = 10,
	RPT_CatenaryY0 = 11,
	RPT_CatenaryXYDistance = 12,
	RPT_IsCatenary = 13,
	RPT_MAX = 14,
};

enum class EOverrideState : uint8_t {
	Free = 0,
	StartingOverride = 1,
	EndingOverride = 2,
	Overridden = 3,
	EOverrideState_MAX = 4,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EScuttleState : uint8_t {
	Scuttled = 0,
	NotScuttled = 1,
	Disabled_TunnelOfTheDamned = 2,
	EScuttleState_MAX = 3,
};

enum class EMeshFeatureImportance : uint8_t {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

enum class EBountyTargetRank : uint8_t {
	Captain = 0,
	Crew = 1,
	EBountyTargetRank_MAX = 2,
};

enum class ELocalGameChatStatus : uint8_t {
	Undefined = 0,
	NoMicrophone = 1,
	MicrophoneMuted = 2,
	InPartyChat = 3,
	Ready = 4,
	ELocalGameChatStatus_MAX = 5,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class EVoiceChatAudioDevice : uint8_t {
	None = 0,
	Headset = 1,
	Kinect = 2,
	EVoiceChatAudioDevice_MAX = 3,
};

enum class EShipPartCustomizationErrorCode : uint8_t {
	AlreadyInProgress = 0,
	FailedToCustomize = 1,
	InvalidParameters = 2,
	EShipPartCustomizationErrorCode_MAX = 3,
};

enum class EComplexOneShotAttackType : uint8_t {
	CombatLocomotion = 0,
	CombatStatic = 1,
	CombatSwimming = 2,
	CombatHeavy = 3,
	CombatHeavySwimming = 4,
	EComplexOneShotAttackType_MAX = 5,
};

enum class EAddLinkResult : uint8_t {
	Success_Set = 0,
	Success_Pending = 1,
	Failed_SourceEndpointIdInvalid = 2,
	Failed_TargetEndpointIdInvalid = 3,
	Failed_CoincidentEndpointIds = 4,
	Failed_Duplicate = 5,
	EAddLinkResult_MAX = 6,
};

enum class EFishingMiniGamePlayerInputBattlingDirection : uint8_t {
	BattlingAgainstLeft = 0,
	BattlingAgainstRight = 1,
	BattlingAgainstAway = 2,
	EFishingMiniGamePlayerInputBattlingDirection_MAX = 3,
};

enum class EPetDangerHearingResponseType : uint8_t {
	RunAway = 0,
	RunToHangoutSpot = 1,
	TurnToward = 2,
	RunToOwner = 3,
	MAX = 4,
	EPetDangerHearingResponseType_MAX = 5,
};

enum class EKrakenEQSLockReason : uint8_t {
	Spawning = 0,
	EKrakenEQSLockReason_MAX = 1,
};

enum class ECoordinatedKrakenActionType : uint8_t {
	Normal = 0,
	Appear = 1,
	Disappear = 2,
	ECoordinatedKrakenActionType_MAX = 3,
};

enum class EStartRadiusGroupNames : uint8_t {
	StartRadiusGroupB = 0,
	StartRadiusGroupC = 1,
	StartRadiusGroupD = 2,
	StartRadiusGroupE = 3,
	StartRadiusGroup_MAX = 4,
	EStartRadiusGroupNames_MAX = 5,
};

enum class EWaterQueryResult : uint8_t {
	Success = 0,
	Failed = 1,
	NoWater = 2,
	Count = 3,
	EWaterQueryResult_MAX = 4,
};

enum class ELandmarkVagueness : uint8_t {
	Vague = 0,
	NonVague = 1,
	ELandmarkVagueness_MAX = 2,
};

enum class ETreasuryWaveResult : uint8_t {
	Continue = 0,
	ChangeType = 1,
	ETreasuryWaveResult_MAX = 2,
};

enum class EOceanCrawlerAIType : uint8_t {
	OceanCrawler = 0,
	Crab = 1,
	Eel = 2,
	Hermit = 3,
	EOceanCrawlerAIType_MAX = 4,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class EIPGPartType : uint8_t {
	DEFAULT = 0,
	INVERSE = 1,
	EIPGPartType_MAX = 2,
};

enum class EMusicalInstrumentType : uint8_t {
	Banjo = 0,
	Bass = 1,
	Concertina = 2,
	Drums = 3,
	HurdyGurdy = 4,
	OneManBand = 5,
	Sousaphone = 6,
	Ukulele = 7,
	VoiceBox = 8,
	Total = 9,
	EMusicalInstrumentType_MAX = 10,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class EStairAnimations : uint8_t {
	UpLeft = 0,
	UpRight = 1,
	DownLeft = 2,
	DownRight = 3,
	EStairAnimations_MAX = 4,
};

enum class ESkellyFortType : uint8_t {
	Default = 0,
	Damned = 1,
	Max = 2,
	ESkellyFortType_MAX = 3,
};

enum class ENetworkFailure : uint8_t {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	InvalidFeatureConfig = 9,
	RPCSpamDetected = 10,
	FailedPreLogin = 11,
	InitialConnectionTimeout = 12,
	PendingConnectionTimeout = 13,
	PlayerDeemedInactive = 14,
	CrewMigrationRequested = 15,
	ServerAtMatchmakingCapacity = 16,
	ServerShuttingDownWhilstMigrationOngoing = 17,
	ServerShuttingDown = 18,
	CrewSessionLost = 19,
	ENetworkFailure_MAX = 20,
};

enum class ERomeBeaconAttachType : uint8_t {
	Ship = 0,
	Player = 1,
	MAX = 2,
	ERomeBeaconAttachType_MAX = 3,
};

enum class EShovelDigType : uint8_t {
	Success = 0,
	PatDownSuccess = 1,
	DeflectOffHardGround = 2,
	Invalid = 3,
	None = 4,
	EShovelDigType_MAX = 5,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EDoubleActionItemPriority : uint8_t {
	None = 0,
	Primary = 1,
	Secondary = 2,
	EDoubleActionItemPriority_MAX = 3,
};

enum class EContestEventStages : uint8_t {
	Staging = 0,
	Contest = 1,
	PostContest = 2,
	Reward = 3,
	EContestEventStages_MAX = 4,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EMockShipConnectionPartType : uint8_t {
	HoistToMast = 0,
	AngleToMast = 1,
	Total = 2,
	EMockShipConnectionPartType_MAX = 3,
};

enum class EVFXMechanismAnimationEventMode : uint8_t {
	FixedRelativeOffset = 0,
	FixedMechanismVFXComponentLocation = 1,
	AttachedToSceneComponent = 2,
	EVFXMechanismAnimationEventMode_MAX = 3,
};

enum class EMovementMode : uint8_t {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7,
};

enum class ETickingGroup : uint8_t {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_NewlySpawned = 6,
	TG_MAX = 7,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class EAttitudeTowardActor : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	Alliance = 3,
	EAttitudeTowardActor_MAX = 4,
};

enum class EIslandType : uint8_t {
	Resource = 0,
	Outpost = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Fort = 5,
	FortOfTheDamned = 6,
	Reef = 7,
	SeaPost = 8,
	Tutorial = 9,
	ReapersHideout = 10,
	Sunken = 11,
	SunkenKingdomNonStarlight = 12,
	None = 13,
	Max = 14,
	EIslandType_MAX = 15,
};

enum class EIPGBlendType : uint8_t {
	NIX = 0,
	NIL = 1,
	RND = 2,
	ONOFF = 3,
	POSNEG = 4,
	MAP = 5,
	ON = 6,
	ONOFF_NEAREST = 7,
	ONOFF_BIAS = 8,
	ONOFF_BIAS_NEAREST = 9,
	EIPGBlendType_MAX = 10,
};

enum class EAddEndpointResult : uint8_t {
	Success = 0,
	Failed_InvalidInstance = 1,
	Failed_InvalidId = 2,
	Failed_DuplicateId = 3,
	Failed_DoesntImplementEndpointInterface = 4,
	EAddEndpointResult_MAX = 5,
};

enum class EGameplayTagEventType : uint8_t {
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class ETranslucencyPass : uint8_t {
	Default = 0,
	BeforeTranslucency = 1,
	BeforeVolumeFog = 2,
	WriteDepth = 3,
	ETranslucencyPass_MAX = 4,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class ERewardRequestFailureReason : uint8_t {
	FailedToProcess = 0,
	TimedOut = 1,
	Unknown = 2,
	ERewardRequestFailureReason_MAX = 3,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EVelocityScaleGroupNames : uint8_t {
	VelocityScaleGroupB = 0,
	VelocityScaleGroupC = 1,
	VelocityScaleGroupD = 2,
	VelocityScaleGroupE = 3,
	VelocityScaleGroup_MAX = 4,
	EVelocityScaleGroupNames_MAX = 5,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class EGameEventSchedulerEventType : uint8_t {
	Unknown = 0,
	AI_Kraken = 1,
	AI_Megalodon = 2,
	AI_Ship_Aggressive = 3,
	AI_Ship_Passive = 4,
	ShipCloud = 5,
	SkullCloud = 6,
	Ghostship_Flameheart_Cloud = 7,
	AshenLordCloud = 8,
	LegendarySkullCloud = 9,
	EGameEventSchedulerEventType_MAX = 10,
};

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class EAIDebugColour : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	White = 3,
	Yellow = 4,
	Black = 5,
	EAIDebugColour_MAX = 6,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EMemoryGatheringMode : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	EMemoryGatheringMode_MAX = 2,
};

enum class EStartRotationGroupNames : uint8_t {
	StartRotationGroupB = 0,
	StartRotationGroupC = 1,
	StartRotationGroupD = 2,
	StartRotationGroupE = 3,
	StartRotationGroupReplacement = 4,
	StartRotationGroup_MAX = 5,
	EStartRotationGroupNames_MAX = 6,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class EServerMatchmakingFailureReason : uint8_t {
	NoServersAvailable = 0,
	CrewServerRequestBeingProcessed = 1,
	CrewBeingMigrated = 2,
	SandboxDisabled = 3,
	EServerMatchmakingFailureReason_MAX = 4,
};

enum class ETeleportTransformSpace : uint8_t {
	World = 0,
	RelativeToBase = 1,
	ETeleportTransformSpace_MAX = 2,
};

enum class ESleepingActionStateDockingMode : uint8_t {
	FindFloor = 0,
	AttachDirectlyToSeat = 1,
	ESleepingActionStateDockingMode_MAX = 2,
};

enum class EFlameColourType : uint8_t {
	Light = 0,
	FX = 1,
	Glow = 2,
	Flame = 3,
	EFlameColourType_MAX = 4,
};

enum class EProjectileWeaponType : uint8_t {
	Pistol = 0,
	Blunderbuss = 1,
	EyeOfReach = 2,
	MAX = 3,
	EProjectileWeaponType_MAX = 4,
};

enum class ECoherentUIGTInputPropagationBehaviour : uint8_t {
	None = 0,
	Keyboard = 1,
	Joystick = 2,
	KeyboardAndJoystick = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4,
};

enum class EConsumeEntitlementFailureReason : uint8_t {
	ServiceUnavailable = 0,
	ItemNotFound = 1,
	RequestTimeout = 2,
	PreconditionFailed = 3,
	Unknown = 4,
	EConsumeEntitlementFailureReason_MAX = 5,
};

enum class EGameplayAbilityTargetingLocationType : uint8_t {
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EServerTeleportAckReason : uint8_t {
	Invalid = 0,
	Complete = 1,
	Timeout = 2,
	EServerTeleportAckReason_MAX = 3,
};

enum class EAmbientLightClusteringPolicy : uint8_t {
	OnlyLight = 0,
	ClosePriorityLight = 1,
	BlendableInCouple = 2,
	NoGrouping = 3,
	EAmbientLightClusteringPolicy_MAX = 4,
};

enum class EVfxRegion : uint8_t {
	None = 0,
	ShipExterior = 1,
	ShipInterior = 2,
	EVfxRegion_MAX = 3,
};

enum class EStartHeightGroupNames : uint8_t {
	StartHeightGroupB = 0,
	StartHeightGroupC = 1,
	StartHeightGroupD = 2,
	StartHeightGroupE = 3,
	StartHeightGroup_MAX = 4,
	EStartHeightGroupNames_MAX = 5,
};

enum class EBucketProjectileDestination : uint8_t {
	Ahead = 0,
	AtWielder = 1,
	Max = 2,
	EBucketProjectileDestination_MAX = 3,
};

enum class ECannonInteractionState : uint8_t {
	AllInteractions = 0,
	AimingEnabledLoadingDisabled = 1,
	LoadingEnabledAimingDisabled = 2,
	NoInteractions = 3,
	ECannonInteractionState_MAX = 4,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class EStoreRemoteServiceFutureStatus : uint8_t {
	Unknown = 0,
	NotStarted = 1,
	Failed = 2,
	Succeeded = 3,
	Cancelled = 4,
	TimedOut = 5,
	EStoreRemoteServiceFutureStatus_MAX = 6,
};

enum class ESimplygonTextureResolution : uint8_t {
	TextureResolution_65 = 0,
	TextureResolution_129 = 1,
	TextureResolution_257 = 2,
	TextureResolution_513 = 3,
	TextureResolution_1025 = 4,
	TextureResolution_2049 = 5,
	TextureResolution_4097 = 6,
	TextureResolution_8193 = 7,
	TextureResolution_MAX = 8,
};

enum class ERoundingMode : uint8_t {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class ETestAutomationPlayModeOverride : uint8_t {
	Adventure = 0,
	Contest = 1,
	Tutorial = 2,
	NotSelectedYet = 3,
	ETestAutomationPlayModeOverride_MAX = 4,
};

enum class EEmissaryQualityLevel : uint8_t {
	Invalid = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4,
	Level5 = 5,
	Level6 = 6,
	Level7 = 7,
	Level8 = 8,
	MAX = 9,
	EEmissaryQualityLevel_MAX = 10,
};

enum class ETextureAuditorMipSetting : uint8_t {
	MipGenRequired = 0,
	NoMipGenRequired = 1,
	MipGenOptional = 2,
	ETextureAuditorMipSetting_MAX = 3,
};

enum class EPlaneLineIntersectionType : uint8_t {
	IntersectionWithinLineSegment = 0,
	IntersectionOutsideOfLineSegment = 1,
	PlaneAndLineParallel = 2,
	EPlaneLineIntersectionType_MAX = 3,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8_t {
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class EAthenaAITeam : uint8_t {
	Players = 0,
	Skeletons = 1,
	Fauna_Chickens = 2,
	Fauna_Pigs = 3,
	Fauna_Snakes = 4,
	NeutralSwimmingCreature = 5,
	Sharks = 6,
	TinyShark = 7,
	Kraken = 8,
	KrakenTentacle = 9,
	NeutralCreatureCharacters = 10,
	Pets = 11,
	Fire = 12,
	AggressiveGhostShip = 13,
	Sirens = 14,
	LordPinch = 15,
	OceanCrawlers = 16,
	Phantoms = 17,
	PlayerAllied = 18,
	Max = 19,
	EAthenaAITeam_MAX = 20,
};

enum class EPlatformId : uint8_t {
	Unknown = 0,
	XboxLive = 1,
	Steam = 2,
	EPlatformId_MAX = 3,
};

enum class EGlitterBeardPlayerPuzzleOutcome : uint8_t {
	WrongTime = 0,
	WrongInstrument = 1,
	WrongShanty = 2,
	ConditionsMetForThisPosition = 3,
	EGlitterBeardPlayerPuzzleOutcome_MAX = 4,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class EAggressiveGhostShipType : uint8_t {
	Grunt = 0,
	FormationGrunt = 1,
	FormationLeader = 2,
	CaptainFormationGrunt = 3,
	Captain = 4,
	EAggressiveGhostShipType_MAX = 5,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
};

enum class EWorldRegion : uint8_t {
	BlueSeaOfPlenty = 0,
	TheWilds = 1,
	WideSeaOfPlunder = 2,
	DevilsRoar = 3,
	ShoresOfGold = 4,
	EWorldRegion_MAX = 5,
};

enum class EStormEffectLockReasons : uint8_t {
	InsideExclusionVolume = 0,
	AccessibilityToggledOff = 1,
	EStormEffectLockReasons_MAX = 2,
};

enum class ETargetDataFilterSelf : uint8_t {
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3,
};

enum class EOverlapType : uint8_t {
	PhysX = 0,
	SimpleOverlaps = 1,
	Ticking = 2,
	EOverlapType_MAX = 3,
};

enum class EStartLocationGroupNames : uint8_t {
	StartLocationGroupB = 0,
	StartLocationGroupC = 1,
	StartLocationGroupD = 2,
	StartLocationGroupE = 3,
	StartLocationGroup_MAX = 4,
	EStartLocationGroupNames_MAX = 5,
};

enum class ERepairableState : uint8_t {
	NeverDamaged = 0,
	Repairable = 1,
	Repairing = 2,
	Repaired = 3,
	UndoingRepair = 4,
	ERepairableState_MAX = 5,
};

enum class EBuoyancySampleType : uint8_t {
	Spherical = 0,
	Cuboidal = 1,
	ProbeCurve = 2,
	EBuoyancySampleType_MAX = 3,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class EVaultAudioSettings : uint8_t {
	Default = 0,
	NoWater = 1,
	NoMusic = 2,
	TreasureVault = 3,
	EVaultAudioSettings_MAX = 4,
};

enum class ESwimmingCreatureType : uint8_t {
	SwimmingCreature = 0,
	Shark = 1,
	TinyShark = 2,
	Siren = 3,
	ESwimmingCreatureType_MAX = 4,
};

enum class ECharacterType : uint8_t {
	Ghost = 0,
	Character = 1,
	ECharacterType_MAX = 2,
};

enum class ENPCChatType : uint8_t {
	Chat = 0,
	Subtitles = 1,
	ENPCChatType_MAX = 2,
};

enum class EDemoPlayFailure : uint8_t {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	EDemoPlayFailure_MAX = 4,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
};

enum class EGameplayTagQueryExprType : uint8_t {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7,
};

enum class ELifetimeGroupsName : uint8_t {
	LifetimeB = 0,
	LifetimeC = 1,
	LifetimeD = 2,
	LifetimeE = 3,
	LifetimeReplacement = 4,
	Lifetime_MAX = 5,
	ELifetimeGroupsName_MAX = 6,
};

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_BlendedOIT = 5,
	BLEND_LowResTranslucent = 6,
	BLEND_AlphaBlend = 7,
	BLEND_TranslucentUI = 8,
	BLEND_PremultipliedAlpha = 9,
	BLEND_MAX = 10,
};

enum class ENPCDisplayNameType : uint8_t {
	NPCAndIsland = 0,
	NPCOnly = 1,
	IslandOnly = 2,
	ENPCDisplayNameType_MAX = 3,
};

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class EMechanismTriggerState : uint8_t {
	Active = 0,
	Inactive = 1,
	Disabled = 2,
	EMechanismTriggerState_MAX = 3,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
	EAILockSource_MAX = 5,
};

enum class EConstantMaterial : uint8_t {
	CONSTMAT_None = 0,
	CONSTMAT_GroundCover = 1,
	CONSTMAT_TreeFoliage = 2,
	CONSTMAT_MAX = 3,
};

enum class EVoyageChapterProgressionType : uint8_t {
	DrivenByAnyQuestCompletion = 0,
	DrivenBySpecificQuestCompletion = 1,
	EVoyageChapterProgressionType_MAX = 2,
};

enum class EParticleAlphaThresholdLevel : uint8_t {
	NoCulling = 0,
	Permissive = 1,
	Mild = 2,
	MildAggressive = 3,
	Aggressive = 4,
	EParticleAlphaThresholdLevel_MAX = 5,
};

enum class EPlayerHeroStatsSuccess : uint8_t {
	Success = 0,
	Success_Zero = 1,
	NotAutonomousProxy = 2,
	NoLocalUser = 3,
	PlayerIdInvalid = 4,
	NoClientData = 5,
	StartOfSessionValueNotSet = 6,
	NoServerData = 7,
	NoHeroStatData = 8,
	OnlineStatsPtrNull = 9,
	OnlineStats_UnknownError = 10,
	OnlineStats_InvalidStatId = 11,
	OnlineStats_InvalidArgument = 12,
	OnlineStats_InvalidUser = 13,
	EPlayerHeroStatsSuccess_MAX = 14,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class EProgressStyle : uint8_t {
	Circle = 0,
	Square = 1,
	Hexagon = 2,
	Diamond = 3,
	SeaDogs = 4,
	HuntersCall = 5,
	ReapersBones = 6,
	EProgressStyle_MAX = 7,
};

enum class EBrigReleaseReason : uint8_t {
	VoteToRelease = 0,
	AutoRelease = 1,
	QuitGameRelease = 2,
	EBrigReleaseReason_MAX = 3,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class EToggleOrHoldMode : uint8_t {
	Off = 0,
	Hold = 1,
	Toggle = 2,
	EToggleOrHoldMode_MAX = 3,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class ENPCOnSurfaceFloodedLevel : uint8_t {
	Empty = 0,
	LowerDeckFlooded = 1,
	MidDeckFlooded = 2,
	Sunk = 3,
	ENPCOnSurfaceFloodedLevel_MAX = 4,
};

enum class EShipLocation : uint8_t {
	TOP_DECK = 0,
	MID_DECK = 1,
	BOTTOM_DECK = 2,
	HATCH_BACK_LEFT = 3,
	HATCH_BACK_RIGHT = 4,
	HATCH_FRONT_LEFT = 5,
	HATCH_FRONT_RIGHT = 6,
	CABIN_FRONT_DOOR = 7,
	CABIN_SIDE_DOOR = 8,
	TOP_DECK_BOW_PLANE = 9,
	TOP_DECK_HATCH_PLANE = 10,
	TOP_DECK_WHEEL_PLANE = 11,
	MAP_DECK_FRONT_PLANE = 12,
	MAP_DECK_TABLE_PLANE = 13,
	MAP_DECK_REARSTAIRS_PLANE = 14,
	BRIG_DECK_BRIG_PLANE = 15,
	BRIG_DECK_STAIRS_PLANE = 16,
	AITARGET_OFFSET_TO_EXTENTS = 17,
	AITARGET_EXTENTS = 18,
	AITARGET_ABOVE_DECK_OFFSET = 19,
	AITARGET_ABOVE_DECK_EXTENTS = 20,
	AITARGET_MID_DECK_OFFSET = 21,
	AITARGET_MID_DECK_EXTENTS = 22,
	AITARGET_LOWER_DECK_OFFSET = 23,
	AITARGET_LOWER_DECK_EXTENTS = 24,
	AI_KRAKEN_TENTACLE = 25,
	CAPTAINS_TABLE_SPAWN_LOCATION = 26,
	EShipLocation_MAX = 27,
};

enum class AISpawnLocationSearchResult : uint8_t {
	Incomplete = 0,
	Success = 1,
	FailedNoQuery = 2,
	FailedNoValidPos = 3,
	Cancelled = 4,
	AISpawnLocationSearchResult_MAX = 5,
};

enum class EShovelState : uint8_t {
	Idle = 0,
	Exhuming = 1,
	Burying = 2,
	EShovelState_MAX = 3,
};

enum class ETeleportNotificationSource : uint8_t {
	TeleportState = 0,
	WaitingToSpawnState = 1,
	ETeleportNotificationSource_MAX = 2,
};

enum class EStepsTriggerState : uint8_t {
	Closed = 0,
	Opening = 1,
	Open = 2,
	EStepsTriggerState_MAX = 3,
};

enum class EAthenaNPCSpawnHand : uint8_t {
	Left = 0,
	Right = 1,
	EAthenaNPCSpawnHand_MAX = 2,
};

enum class ETradeRouteMapTextIdentifier : uint8_t {
	Misc = 0,
	Vessel = 1,
	Origin = 2,
	Destination = 3,
	ETradeRouteMapTextIdentifier_MAX = 4,
};

enum class EWieldableItemAnimVariant : uint8_t {
	Default = 0,
	Variant1 = 1,
	Variant2 = 2,
	Variant3 = 3,
	Variant4 = 4,
	MAX = 5,
	EWieldableItemAnimVariant_MAX = 6,
};

enum class EGameplayAbilityActivationMode : uint8_t {
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	EGameplayAbilityActivationMode_MAX = 4,
};

enum class EDepthSort : uint8_t {
	Default = 0,
	ForcedOff = 1,
	ForcedOn = 2,
	EDepthSort_MAX = 3,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class EGameplayAbilityInputBinds : uint8_t {
	Ability1 = 0,
	Ability2 = 1,
	Ability3 = 2,
	Ability4 = 3,
	Ability5 = 4,
	Ability6 = 5,
	Ability7 = 6,
	Ability8 = 7,
	Ability9 = 8,
	EGameplayAbilityInputBinds_MAX = 9,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EWieldableItemComplexOneShotLookUpType : uint8_t {
	Combo = 0,
	Heavy = 1,
	Special = 2,
	EWieldableItemComplexOneShotLookUpType_MAX = 3,
};

enum class EWieldAnimationLocation : uint8_t {
	Left = 0,
	Right = 1,
	Floating = 2,
	LF_CAMERA_IK_HAND__Skeleton = 3,
	RT_CAMERA_IK_HAND__Skeleton = 4,
	LF_IK_HAND__Skeleton = 5,
	RT_IK_HAND__Skeleton = 6,
	Total = 7,
	EWieldAnimationLocation_MAX = 8,
};

enum class EVfxCustomLocalSpaceMode : uint8_t {
	Default = 0,
	ShipSpaceAutoLocal = 1,
	ShipSpaceAutoPlayer = 2,
	ShipSpaceAutoWorld = 3,
	EVfxCustomLocalSpaceMode_MAX = 4,
};

enum class EMatchmakingVisibilityState : uint8_t {
	Public = 0,
	Private = 1,
	EMatchmakingVisibilityState_MAX = 2,
};

enum class EKrakenShipWrappingTentacleState : uint8_t {
	Dormant = 0,
	Wrapping = 1,
	AmbientWobble = 2,
	EnteringShakeAttack = 3,
	ShakeAttack = 4,
	ExitingShakeAttack = 5,
	HeavyAttack = 6,
	Unwrapping = 7,
	EKrakenShipWrappingTentacleState_MAX = 8,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class EStartColorGroupsName : uint8_t {
	StartColorB = 0,
	StartColorC = 1,
	StartColorD = 2,
	StartColorE = 3,
	StartColorReplacement = 4,
	StartColor_MAX = 5,
	EStartColorGroupsName_MAX = 6,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class EInputControllerTypeRemote : uint8_t {
	GamePad = 0,
	Keyboard = 1,
	EInputControllerTypeRemote_MAX = 2,
};

enum class EMeleeAwarenessCollisionHitResult : uint8_t {
	None = 0,
	Static = 1,
	Character = 2,
	ToggleableCollider = 3,
	EMeleeAwarenessCollisionHitResult_MAX = 4,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class EStartGameNarrativePositionY : uint8_t {
	Undefined = 0,
	Top = 1,
	Middle = 2,
	Bottom = 3,
	EStartGameNarrativePositionY_MAX = 4,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction_MAX = 3,
};

enum class EAIShipDestructionReason : uint8_t {
	Defeated = 0,
	Despawn = 1,
	EAIShipDestructionReason_MAX = 2,
};

enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_MAX = 4,
};

enum class ELightningHitTarget : uint8_t {
	RandomLocation = 0,
	Player = 1,
	NearPlayer = 2,
	Ship = 3,
	ShipNearMiss = 4,
	HighPriorityPlayer = 5,
	EnemyGhostShip = 6,
	EnemyGhostShipNearMiss = 7,
	Total = 8,
	ELightningHitTarget_MAX = 9,
};

enum class EVelocityConeGroupNames : uint8_t {
	VelocityConeGroupB = 0,
	VelocityConeGroupC = 1,
	VelocityConeGroupD = 2,
	VelocityConeGroupE = 3,
	VelocityConeGroupReplacemnent = 4,
	VelocityConeGroup_MAX = 5,
	EVelocityConeGroupNames_MAX = 6,
};

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5,
};

enum class EMaterialUsage : uint8_t {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_Landscape = 7,
	MATUSAGE_InstancedStaticMeshes = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_Deformables = 10,
	MATUSAGE_FFTWaterMask = 11,
	MATUSAGE_DynamicObjectFading = 12,
	MATUSAGE_Clouds = 13,
	MATUSAGE_InstancedRopes = 14,
	MATUSAGE_WaterBoundary = 15,
	MATUSAGE_PlanarReflection = 16,
	MATUSAGE_CPUParticleSprites = 17,
	MATUSAGE_Coverage = 18,
	MATUSAGE_GPUInstanceCulling = 19,
	MATUSAGE_PointLightShadow = 20,
	MATUSAGE_MAX = 21,
};

enum class ELPVAdaptationType : uint8_t {
	Full = 0,
	CutTranslation = 1,
	None = 2,
	ELPVAdaptationType_MAX = 3,
};

enum class EObjectPitchTargetingStates : uint8_t {
	None = 0,
	StandardPassive = 1,
	StandardWater = 2,
	Action_2 = 3,
	Action_1_Water = 4,
	Action_3 = 5,
	Action_2_Water = 6,
	EObjectPitchTargetingStates_MAX = 7,
};

enum class ELandmarkUniqueness : uint8_t {
	Unique = 0,
	NonUnique = 1,
	ELandmarkUniqueness_MAX = 2,
};

enum class EContestStagePivot : uint8_t {
	Beginning = 0,
	Quater = 1,
	HalfTime = 2,
	ThirdQuater = 3,
	End = 4,
	EContestStagePivot_MAX = 5,
};

enum class ELimbIKSpace : uint8_t {
	Local = 0,
	World = 1,
	Character = 2,
	ELimbIKSpace_MAX = 3,
};

enum class EUINavigation : uint8_t {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

enum class EAlphaBlendOption : uint8_t {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Source = 14,
	Target = 15,
	Custom = 16,
	EAlphaBlendOption_MAX = 17,
};

enum class ELoadoutPersistence : uint8_t {
	Temporary = 0,
	Persistent = 1,
	ELoadoutPersistence_MAX = 2,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAsComplex = 1,
	CTF_UseComplexAsSimple = 2,
	CTF_MAX = 3,
};

enum class EEmoteFlourishType : uint8_t {
	Invalid = 0,
	PrimaryWeaponSlotFlourish = 1,
	SecondaryWeaponSlotFlourish = 2,
	EEmoteFlourishType_MAX = 3,
};

enum class ETravelFailure : uint8_t {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class ECharacterSocketCollisionResultType : uint8_t {
	CollisionsOnly = 0,
	NonCollisionsOnly = 1,
	CollisionsAndNonCollisions = 2,
	ECharacterSocketCollisionResultType_MAX = 3,
};

enum class EObjectPitchTargetingLimbs : uint8_t {
	None = 0,
	RightArm = 1,
	LeftArm = 2,
	BothArms = 3,
	EObjectPitchTargetingLimbs_MAX = 4,
};

enum class EStoreAsyncResult : uint8_t {
	Unknown = 0,
	GetAccessTokenInvalidHttpRequest = 1,
	GetAccessTokenTimeout = 2,
	GetAccessTokenCancelled = 3,
	GetAccessTokenFailure = 4,
	GetPurchaseRedemptionTokenInterfaceInvalid = 5,
	GetPurchaseRedemptionTokenOnlineStoreFailure = 6,
	GetPurchaseRedemptionTokenFailure = 7,
	PostPurchaseRedemptionTokenInvalidHttpRequest = 8,
	PostPurchaseRedemptionTokenCancelled = 9,
	PostPurchaseRedemptionTokenTimeout = 10,
	PostPurchaseRedemptionTokenFailure = 11,
	Success = 12,
	EStoreAsyncResult_MAX = 13,
};

enum class EDoorState : uint8_t {
	Closed = 0,
	Triggered = 1,
	Opening = 2,
	Open = 3,
	EDoorState_MAX = 4,
};

enum class EMaterialLODType : uint8_t {
	Off = 0,
	BakeTexture = 1,
	BakeVertexColor = 2,
	Replace = 3,
	EMaterialLODType_MAX = 4,
};

enum class ERageState : uint8_t {
	Disabled = 0,
	Dormant = 1,
	RageBuilding = 2,
	Steaming = 3,
	OnFire = 4,
	ERageState_MAX = 5,
};

enum class ETeleportActionStateReason : uint8_t {
	Uninitialised = 0,
	Test = 1,
	Cheat = 2,
	LeaveConcealingObject = 3,
	TeleportPlayerToSafety = 4,
	SinkingShip = 5,
	Mermaid = 6,
	RespawnStatue = 7,
	ReturnToShip = 8,
	PanicTeleport_FoundAssociatedLocation = 9,
	PanicTeleport_NotFoundAssociatedLocation = 10,
	PanicTeleport_NoAssociatedLocationsProvided = 11,
	TeleportTriggerObject = 12,
	SentToBrig = 13,
	HideOutEntered = 14,
	HideOutLeftToSpecificExitPoint = 15,
	HideOutLeftWithNoExitPoint = 16,
	ContestTeleportPlayerToShipOnRestart = 17,
	DebugTeleportCrewStep = 18,
	EnterTunnelOfTheDamned = 19,
	ExitTunnelOfTheDamned = 20,
	SpawnPlayer = 21,
	SpawnGhost = 22,
	TeleportPlayerFromSafeZone = 23,
	TaleProgressStatue = 24,
	ETeleportActionStateReason_MAX = 25,
};

enum class EWieldItemReturnCode : uint8_t {
	Success = 0,
	NoAuthority = 1,
	UnableToDisplace = 2,
	InvalidItem = 3,
	WaitingForUnstash = 4,
	EWieldItemReturnCode_MAX = 5,
};

enum class EHarpoonLauncherRetractReason : uint8_t {
	Default = 0,
	PlayerInstigated = 1,
	TetherLengthExeeded = 2,
	EHarpoonLauncherRetractReason_MAX = 3,
};

enum class EShipState : uint8_t {
	PlainSailing = 0,
	GrindingToHalt = 1,
	Lowering = 2,
	ReduceWaterOcclusionZone = 3,
	KeelingOver = 4,
	KeeledOver = 5,
	FinalSinking = 6,
	Dead = 7,
	EShipState_MAX = 8,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
};

enum class EMoreButtonSource : uint8_t {
	Popup = 0,
	TextNotification = 1,
	EMoreButtonSource_MAX = 2,
};

enum class EAllianceJoinStatus : uint8_t {
	CannotJoinAlliance = 0,
	CanJoinAlliance = 1,
	IsInAlliance = 2,
	EAllianceJoinStatus_MAX = 3,
};

enum class EObjectTypeQuery : uint8_t {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33,
};

enum class ESpawnedItemSource : uint8_t {
	None = 0,
	Quest = 1,
	Shipwreck = 2,
	FloatingAtSea = 3,
	Island = 4,
	SkellyFort = 5,
	AIShip = 6,
	Megalodon = 7,
	KrakenTentacle = 8,
	SunkenCurseArtefact = 9,
	EmergentCaptain = 10,
	PlayerShip = 11,
	AggressiveGhostShip = 12,
	Siren = 13,
	SunkenKingdom = 14,
	BuriedByPlayer = 15,
	OceanCrawlers = 16,
	ESpawnedItemSource_MAX = 17,
};

enum class EWorldCompositionSetting : uint8_t {
	NoWorldComposition = 0,
	WorldComposition = 1,
	NestedWorldComposition = 2,
	EWorldCompositionSetting_MAX = 3,
};

enum class MovieScene3DPathSection_Axis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6,
};

enum class EAmmoEffectState : uint8_t {
	Idle = 0,
	Processing = 1,
	Stopped = 2,
	EAmmoEffectState_MAX = 3,
};

enum class ESkeletonActiveAnimSystem : uint8_t {
	Sensing = 0,
	EmoteAction = 1,
	ESkeletonActiveAnimSystem_MAX = 2,
};

enum class EEntitlementStatus : uint8_t {
	Unknown = 0,
	Invalid = 1,
	UsableButUnverified = 2,
	UsableAndVerfied = 3,
	EEntitlementStatus_MAX = 4,
};

enum class EItemSpawnType : uint8_t {
	None = 0,
	Scaffolding = 1,
	Reward = 2,
	PressurePlate = 3,
	EItemSpawnType_MAX = 4,
};

enum class ELocomotionType : uint8_t {
	Standard = 0,
	Limp = 1,
	Drunk = 2,
	PegLeg = 3,
	Combat = 4,
	HotCoals = 5,
	MAX = 6,
	ELocomotionType_MAX = 7,
};

enum class ECoherentUIGTMSAA : uint8_t {
	MSAA_1x = 0,
	MSAA_2x = 1,
	MSAA_4x = 2,
	MSAA_MAX = 3,
};

enum class EDelayLoadPhase : uint8_t {
	Boot = 0,
	FrontEnd = 1,
	EngageState = 2,
	PreloadGame = 3,
	InGame = 4,
	Count = 5,
	EDelayLoadPhase_MAX = 6,
};

enum class ESimplygonMaterialChannel : uint8_t {
	SG_MATERIAL_CHANNEL_AMBIENT = 0,
	SG_MATERIAL_CHANNEL_DIFFUSE = 1,
	SG_MATERIAL_CHANNEL_SPECULAR = 2,
	SG_MATERIAL_CHANNEL_OPACITY = 3,
	SG_MATERIAL_CHANNEL_EMISSIVE = 4,
	SG_MATERIAL_CHANNEL_NORMALS = 5,
	SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	SG_MATERIAL_CHANNEL_BASECOLOR = 7,
	SG_MATERIAL_CHANNEL_ROUGHNESS = 8,
	SG_MATERIAL_CHANNEL_METALLIC = 9,
	SG_MATERIAL_CHANNEL_AO = 10,
	SG_MATERIAL_CHANNEL_MAX = 11,
};

enum class EEventRoomState : uint8_t {
	Inactive = 0,
	Waiting = 1,
	Active = 2,
	Completed = 3,
	Aftermath = 4,
	EEventRoomState_MAX = 5,
};

enum class ECrewSessionType : uint8_t {
	Invalid = 0,
	SmallShip = 1,
	MediumShip = 2,
	LargeShip = 3,
	ServerLarge = 4,
	SloopSolo = 5,
	Lobby = 6,
	ECrewSessionType_MAX = 7,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class ECoralShieldVFXState : uint8_t {
	Off = 0,
	Starting = 1,
	On = 2,
	Ending = 3,
	ECoralShieldVFXState_MAX = 4,
};

enum class EParticleSysParamType : uint8_t {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_EmitterPoints = 8,
	PSPT_MAX = 9,
};

enum class EAIAbilityDamageIntervalCounterMode : uint8_t {
	DontBlock = 0,
	BlockWhenExecutingThisAbility = 1,
	BlockWhenExecutingAnyAbility = 2,
	EAIAbilityDamageIntervalCounterMode_MAX = 3,
};

enum class EVoiceChatState : uint8_t {
	Silent = 0,
	Talking = 1,
	Muted = 2,
	Deafened = 3,
	EVoiceChatState_MAX = 4,
};

enum class EGameplayEffectDurationType : uint8_t {
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class EReviveState : uint8_t {
	Revivable = 0,
	NotRevivable = 1,
	BeingRevived = 2,
	Revived = 3,
	EReviveState_MAX = 4,
};

enum class ENoiseFunction : uint8_t {
	NOISEFUNCTION_Simplex = 0,
	NOISEFUNCTION_Perlin = 1,
	NOISEFUNCTION_Gradient = 2,
	NOISEFUNCTION_FastGradient = 3,
	NOISEFUNCTION_MAX = 4,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class ERowboatActionTelemetry : uint8_t {
	None = 0,
	Mount = 1,
	Unmount = 2,
	ERowboatActionTelemetry_MAX = 3,
};

enum class ERichCurveExtrapolation : uint8_t {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6,
};

enum class EWaitForLoadingScreenSubState : uint8_t {
	Invalid = 0,
	CacheLoadingScreenDataAssetParams = 1,
	CacheLoadingScreenLoadingScreenParams = 2,
	CacheLoadingScreenContent = 3,
	Complete = 4,
	EWaitForLoadingScreenSubState_MAX = 5,
};

enum class EIKFootPlantingState : uint8_t {
	On = 0,
	Off = 1,
	EIKFootPlantingState_MAX = 2,
};

enum class EPetFeedingReactionType : uint8_t {
	None = 0,
	Sick = 1,
	Happy = 2,
	EPetFeedingReactionType_MAX = 3,
};

enum class EStartVelocityGroupsName : uint8_t {
	StartVelocityB = 0,
	StartVelocityC = 1,
	StartVelocityD = 2,
	StartVelocityE = 3,
	StartVelocityReplacemnent = 4,
	StartVelocity_MAX = 5,
	EStartVelocityGroupsName_MAX = 6,
};

enum class ETelemetryPlatformId : uint8_t {
	Undefined = 0,
	Aoelus = 1,
	Xbox = 2,
	Windows = 3,
	DevPC = 4,
	ETelemetryPlatformId_MAX = 5,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EFishAnimationState : uint8_t {
	SwimmingLoop = 0,
	Fighting = 1,
	Tired = 2,
	Escaped = 3,
	Caught = 4,
	EFishAnimationState_MAX = 5,
};

enum class EAshenLordWorldEndCloudState : uint8_t {
	Inactive = 0,
	Active = 1,
	EAshenLordWorldEndCloudState_MAX = 2,
};

enum class EAIShipType : uint8_t {
	Normal = 0,
	Hard = 1,
	EAIShipType_MAX = 2,
};

enum class EInteractableState : uint8_t {
	Interactable = 0,
	DisableDescribe = 1,
	DisabledDontDescribe = 2,
	EInteractableState_MAX = 3,
};

enum class EWorldMapShipType : uint8_t {
	None = 0,
	IsInAlliance = 1,
	IsOwnedShip = 2,
	IsContestShip = 3,
	IsReapersTrackedShip = 4,
	IsInTunnel = 5,
	EWorldMapShipType_MAX = 6,
};

enum class ESelectionPolicy : uint8_t {
	Random = 0,
	Closest = 1,
	ESelectionPolicy_MAX = 2,
};

enum class ETinySharkDespawnReason : uint8_t {
	Invalid = 0,
	Defeated = 1,
	TimedOut = 2,
	ETinySharkDespawnReason_MAX = 3,
};

enum class EServerCameraFadeAckReason : uint8_t {
	Invalid = 0,
	Complete = 1,
	Timeout = 2,
	EServerCameraFadeAckReason_MAX = 3,
};

enum class EGameplayCuePayloadType : uint8_t {
	EffectContext = 0,
	CueParameters = 1,
	FromSpec = 2,
	EGameplayCuePayloadType_MAX = 3,
};

enum class ENPCOnSurfaceDespawnReason : uint8_t {
	PlayersLeftShip = 0,
	ShipSinking = 1,
	ChangingLocation = 2,
	CurrentLocationUnderWater = 3,
	ChangingState = 4,
	Hiding = 5,
	ManningCannon = 6,
	CurrentLocationOnFire = 7,
	BeingPermanentlyDestroyed = 8,
	ENPCOnSurfaceDespawnReason_MAX = 9,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class EVirtualKeyboardTextUsage : uint8_t {
	TextChat = 0,
	PetName = 1,
	GenericText = 2,
	EVirtualKeyboardTextUsage_MAX = 3,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
};

enum class ERevealState : uint8_t {
	Hidden = 0,
	FarRevealed = 1,
	CloseRevealed = 2,
	ERevealState_MAX = 3,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class ECharacterFootImpactType : uint8_t {
	None = 0,
	Walk = 1,
	Jump = 2,
	Pace = 3,
	ECharacterFootImpactType_MAX = 4,
};

enum class EMaxConcurrentResolutionRule : uint8_t {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule_MAX = 4,
};

enum class EStashReason : uint8_t {
	Locomotion = 0,
	Jumping = 1,
	Docking = 2,
	Sprinting = 3,
	Using = 4,
	Dead = 5,
	SpawnOrDespawn = 6,
	AIPartsChange = 7,
	Emote = 8,
	EStashReason_MAX = 9,
};

enum class ESessionStyle : uint8_t {
	Invalid = 0,
	Standard = 1,
	BeachNPCSpawn = 2,
	Max = 3,
	ESessionStyle_MAX = 4,
};

enum class EIKState : uint8_t {
	On = 0,
	Off = 1,
	EIKState_MAX = 2,
};

enum class EVolcanoTargetType : uint8_t {
	Player = 0,
	Ship = 1,
	Watercraft = 2,
	EVolcanoTargetType_MAX = 3,
};

enum class EStyleModifiers : uint8_t {
	Hide = 0,
	Emblem = 1,
	Brig = 2,
	Accessible = 3,
	EStyleModifiers_MAX = 4,
};

enum class EPhysicalSurface : uint8_t {
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64,
};

enum class EAISpawnerMusicZoneState : uint8_t {
	Passive = 0,
	InCombat = 1,
	BattleWon = 2,
	EAISpawnerMusicZoneState_MAX = 3,
};

enum class EStartAlphaGroupsName : uint8_t {
	StartAlphaB = 0,
	StartAlphaC = 1,
	StartAlphaD = 2,
	StartAlphaE = 3,
	StartAlphaReplacement = 4,
	StartAlpha_MAX = 5,
	EStartAlphaGroupsName_MAX = 6,
};

enum class EItemOwnershipType : uint8_t {
	NotOwned = 0,
	Owned = 1,
	FirstOwner = 2,
	FirstOwnerFromCrew = 3,
	OriginalOwner = 4,
	Stolen = 5,
	FirstStolenByCrew = 6,
	EItemOwnershipType_MAX = 7,
};

enum class EBaitType : uint8_t {
	NoBait = 0,
	EarthWorms = 1,
	Grubs = 2,
	Leeches = 3,
	EBaitType_MAX = 4,
};

enum class EFireCellState : uint8_t {
	Deactivated = 0,
	Flooded = 1,
	Wet = 2,
	Kindled = 3,
	Smouldering = 4,
	Steaming = 5,
	Burning = 6,
	MAX = 7,
	EFireCellState_MAX = 8,
};

enum class ETargetAbilitySelfSelection : uint8_t {
	TASS_Permit = 0,
	TASS_Forbid = 1,
	TASS_Require = 2,
	TASS_MAX = 3,
};

enum class ENavigationDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Up = 3,
	Down = 4,
	ENavigationDirection_MAX = 5,
};

enum class EContinuousUseOverride : uint8_t {
	None = 0,
	ForcePrimary = 1,
	ForceSecondary = 2,
	EContinuousUseOverride_MAX = 3,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
};

enum class EContestType : uint8_t {
	Race = 0,
	PVP = 1,
	PVQ = 2,
	MAX = 3,
	EContestType_MAX = 4,
};

enum class EMechanismActionActivationMode : uint8_t {
	Any = 0,
	All = 1,
	EMechanismActionActivationMode_MAX = 2,
};

enum class ELookAtRotationType : uint8_t {
	Rate = 0,
	Raw = 1,
	ELookAtRotationType_MAX = 2,
};

enum class EKrakenDynamicsStateEvent : uint8_t {
	Damage = 0,
	Knockback = 1,
	EKrakenDynamicsStateEvent_MAX = 2,
};

enum class EMPMatchOutcome : uint8_t {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class EPixelFormat : uint8_t {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_A16B16G16R16F_FILTER = 57,
	PF_BC6H_SF16 = 58,
	PF_BC6H_UF16 = 59,
	PF_R32G32_SINT = 60,
	PF_Stencil = 61,
	PF_Depth = 62,
	PF_MAX = 63,
};

enum class EDitherFadeSetting : uint8_t {
	FadeIn = 0,
	FadeOut = 1,
	EDitherFadeSetting_MAX = 2,
};

enum class ESlidingDoorDirection : uint8_t {
	Up = 0,
	Down = 1,
	Forward = 2,
	Back = 3,
	ESlidingDoorDirection_MAX = 4,
};

enum class ECoordinatedKrakenSpecialEventTypes : uint8_t {
	None = 0,
	OverrideTargetActor = 1,
	ReleaseTargetActor = 2,
	BiteAttackImpact = 3,
	BreathingIn = 4,
	RoarVisuals = 5,
	RoarAttack = 6,
	EnableHeadDamage = 7,
	ECoordinatedKrakenSpecialEventTypes_MAX = 8,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class EServerAsyncLoadingAckReason : uint8_t {
	Invalid = 0,
	Complete = 1,
	Timeout = 2,
	EServerAsyncLoadingAckReason_MAX = 3,
};

enum class ETaleQuestStepState : uint8_t {
	Inactive = 0,
	Active = 1,
	PendingCompletion = 2,
	Completed = 3,
	ETaleQuestStepState_MAX = 4,
};

enum class EOceanCrawlerAbilityAudioKey : uint8_t {
	NONE = 0,
	Hermit_Start_BurrowingLoop = 1,
	Hermit_Stop_BurrowingLoop = 2,
	Hermit_Play_BurrowDown_OneShot = 3,
	Hermit_Play_BurrowEmerge_OneShot = 4,
	Hermit_Play_BurrowHealTarget_OneShot = 5,
	Hermit_Play_SporeBreath_OneShot = 6,
	Hermit_Play_BullRushChargeUp_OneShot = 7,
	Hermit_Play_BullRushChargeGo_OneShot = 8,
	Hermit_Play_BullRushStaticImpact_OneShot = 9,
	Hermit_Play_BullRushCharacterImpact_OneShot = 10,
	Crab_Play_PummelWindBack_OneShot = 11,
	Crab_Play_PummelImpact_OneShot = 12,
	Crab_Play_CoralShieldStart_OneShot = 13,
	Crab_Play_CoralShieldEnd_OneShot = 14,
	Crab_Play_CoralShieldInterrupted_OneShot = 15,
	Crab_Play_CoralShieldApplied_OneShot = 16,
	Crab_Play_CoralShieldStopApplying_OneShot = 17,
	Eel_Play_EelelectricShieldStartCharge_OneShot = 18,
	Eel_Play_EelelectricShieldCast_OneShot = 19,
	Eel_Play_EelelectricShieldInterrupted_OneShot = 20,
	Eel_Play_EelelectricShieldAppliedToTarget_OneShot = 21,
	Eel_Play_EelelectricShieldHitToChain_OneShot = 22,
	Eel_Play_EelelectricShieldFinishedOnTarget_OneShot = 23,
	Eel_Play_EelElectricEelThrowCharge_OneShot = 24,
	EOceanCrawlerAbilityAudioKey_MAX = 25,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EModuleType : uint8_t {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_MAX = 8,
};

enum class EMeleeAttackInterruptReason : uint8_t {
	Stopping = 0,
	Comboing = 1,
	EMeleeAttackInterruptReason_MAX = 2,
};

enum class EFriendStatus : uint8_t {
	None = 0,
	Online = 1,
	Offline = 2,
	Away = 3,
	EFriendStatus_MAX = 4,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class EDigDirection : uint8_t {
	None = 0,
	Exhuming = 1,
	Burying = 2,
	EDigDirection_MAX = 3,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class EWheelFractureLabel : uint8_t {
	West = 0,
	East = 1,
	South = 2,
	EWheelFractureLabel_MAX = 3,
};

enum class ECurveBlendOption : uint8_t {
	MaxWeight = 0,
	NormalizeByWeight = 1,
	BlendByWeight = 2,
	ECurveBlendOption_MAX = 3,
};

enum class EMurkWaterModifierZoneState : uint8_t {
	Active = 0,
	Inactive = 1,
	Activating = 2,
	Deactivating = 3,
	EMurkWaterModifierZoneState_MAX = 4,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	RejectGeometry = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class EAIKnockbackStrengthType : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EAIKnockbackStrengthType_MAX = 3,
};

enum class EReapersMarkTrackedBootyItemType : uint8_t {
	None = 0,
	GenericBooty = 1,
	FOTDKey = 2,
	ReapersBounty = 3,
	DoubloonReapersChest = 4,
	LegendaryFortKey = 5,
	EReapersMarkTrackedBootyItemType_MAX = 6,
};

enum class EStowMethod : uint8_t {
	Unequip = 0,
	Stash = 1,
	EStowMethod_MAX = 2,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EContinuousUseID : uint8_t {
	In = 0,
	Out = 1,
	EContinuousUseID_MAX = 2,
};

enum class EUIInputFocusType : uint8_t {
	None = 0,
	MouseCaptureOnly = 1,
	FullCapture = 2,
	EUIInputFocusType_MAX = 3,
};

enum class EServerEnvironmentShutdownStatus : uint8_t {
	NotSet = 0,
	Starting = 1,
	StandingBy = 2,
	Active = 3,
	EServerEnvironmentShutdownStatus_MAX = 4,
};

enum class EOarInputState : uint8_t {
	Inactive = 0,
	Active = 1,
	Braking = 2,
	EOarInputState_MAX = 3,
};

enum class EAnimNotify_WwiseSound_PerspectiveRestriction : uint8_t {
	NoRestriction = 0,
	FirstPersonOnly = 1,
	ThirdPersonOnly = 2,
	EAnimNotify_WwiseSound_MAX = 3,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EFinaleState : uint8_t {
	Inactive = 0,
	Active = 1,
	ServerComplete = 2,
	EFinaleState_MAX = 3,
};

enum class EPlayerAbandoned : uint8_t {
	Yes = 0,
	No = 1,
	DontKnow = 2,
	EPlayerAbandoned_MAX = 3,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
};

enum class EEarthquakeState : uint8_t {
	Dormant = 0,
	WarmingUp = 1,
	Active = 2,
	CoolingDown = 3,
	EEarthquakeState_MAX = 4,
};

enum class EContestScoreId : uint8_t {
	Undefined = 0,
	Silver = 1,
	EContestScoreId_MAX = 2,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class ESeasonGoalType : uint8_t {
	Goal = 0,
	Challenge = 1,
	Individual = 2,
	ESeasonGoalType_MAX = 3,
};

enum class EIPGGender : uint8_t {
	UNSPECIFIED = 0,
	MALE = 1,
	FEMALE = 2,
	EIPGGender_MAX = 3,
};

enum class ESolidState : uint8_t {
	Disabled = 0,
	Knockback = 1,
	Solid = 2,
	ESolidState_MAX = 3,
};

enum class EDragOnLocalVelocityGroupName : uint8_t {
	DragOnLocalVelocityGroupB = 0,
	DragOnLocalVelocityGroupC = 1,
	DragOnLocalVelocityGroupD = 2,
	DragOnLocalVelocityGroupE = 3,
	DragOnLocalVelocityGroupReplacement = 4,
	DragOnLocalVelocityGroup_MAX = 5,
	EDragOnLocalVelocityGroupName_MAX = 6,
};

enum class ESimplygonColorChannels : uint8_t {
	RGBA = 0,
	RGB = 1,
	L = 2,
	ESimplygonColorChannels_MAX = 3,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	EThreePlayerSplitScreenType_MAX = 2,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class ETraceDirection : uint8_t {
	ItemToContext = 0,
	ContextToItem = 1,
	ETraceDirection_MAX = 2,
};

enum class EAIDebugDrawDataView : uint8_t {
	Empty = 0,
	OverHead = 1,
	Basic = 2,
	BehaviorTree = 3,
	EQS = 4,
	Perception = 5,
	GameView1 = 6,
	GameView2 = 7,
	GameView3 = 8,
	GameView4 = 9,
	GameView5 = 10,
	NavMesh = 11,
	MAX = 12,
	EAIDebugDrawDataView_MAX = 13,
};

enum class ESimpleAnimatedMechanismActionMode : uint8_t {
	OneShot = 0,
	OneShotRetriggerable = 1,
	Continuous = 2,
	ESimpleAnimatedMechanismActionMode_MAX = 3,
};

enum class EComponentType : uint8_t {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11,
};

enum class ESkeletonEmoteActionState : uint8_t {
	None = 0,
	Taunt = 1,
	Cheer = 2,
	ESkeletonEmoteActionState_MAX = 3,
};

enum class ETooltipHighlightType : uint8_t {
	Active = 0,
	GreyedOut = 1,
	None = 2,
	ETooltipHighlightType_MAX = 3,
};

enum class EPerspectiveTypes : uint8_t {
	FirstPerson = 0,
	ThirdPerson = 1,
	EPerspectiveTypes_MAX = 2,
};

enum class SkeletalMeshOptimizationImportance : uint8_t {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class EAntiAliasingMethodUI : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MAX = 3,
};

enum class EShow3DTrajectory : uint8_t {
	EST_OnlyWhenSelected = 0,
	EST_Always = 1,
	EST_Never = 2,
	EST_MAX = 3,
};

enum class FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType : uint8_t {
	None = 0,
	Formation = 1,
	FinalWaveCaptain = 2,
	FinalWaveFlameheart = 3,
	EncounterComplete = 4,
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType_MAX = 5,
};

enum class ECatalogOfferAvailability : uint8_t {
	Available = 0,
	AlreadyOwned = 1,
	Locked = 2,
	Info = 3,
	Hide = 4,
	Unaffordable = 5,
	ECatalogOfferAvailability_MAX = 6,
};

enum class ECloudStorageDelegate : uint8_t {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class ESwimmingLineOfSightTest : uint8_t {
	None = 0,
	Lazy = 1,
	Immediate = 2,
	ESwimmingLineOfSightTest_MAX = 3,
};

enum class EVoyageJoinStatus : uint8_t {
	Other = 0,
	Start = 1,
	JoinInProgress = 2,
	EVoyageJoinStatus_MAX = 3,
};

enum class ECollectorsChestMaterial : uint8_t {
	Wood = 0,
	Stone = 1,
	ECollectorsChestMaterial_MAX = 2,
};

enum class EBlueprintStatus : uint8_t {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_MAX = 2,
};

enum class ERefreshEntitlementBehaviour : uint8_t {
	TryUsingCachedServicesEntitlements = 0,
	FullRefresh = 1,
	ERefreshEntitlementBehaviour_MAX = 2,
};

enum class ETrackedOwnerType : uint8_t {
	Unknown = 0,
	Consumable = 1,
	Booty = 2,
	Booty_ReapersChest = 3,
	Booty_AshenWindsSkull = 4,
	BarrelsOfPlenty = 5,
	WreckDebris_Land = 6,
	WreckDebris_Sea = 7,
	ETrackedOwnerType_MAX = 8,
};

enum class EItemActionState : uint8_t {
	Idle = 0,
	Starting = 1,
	Performing = 2,
	Stopping = 3,
	Cooldown = 4,
	Resetting = 5,
	EItemActionState_MAX = 6,
};

enum class EMaterialDomain : uint8_t {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_PostProcess = 3,
	MD_UI = 4,
	MD_MAX = 5,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
};

enum class EVoyageDifficultyScope : uint8_t {
	Tale = 0,
	Standard = 1,
	Emergent = 2,
	EVoyageDifficultyScope_MAX = 3,
};

enum class EGeyserManagerState : uint8_t {
	Dormant = 0,
	Active = 1,
	EGeyserManagerState_MAX = 2,
};

enum class ESimplygonLODType : uint8_t {
	Reduction = 0,
	Remeshing = 1,
	ESimplygonLODType_MAX = 2,
};

enum class EHIKLookAtInterpolation : uint8_t {
	EHIKLookAtInterpolation_Constant = 0,
	EHIKLookAtInterpolation_EaseOut = 1,
	EHIKLookAtInterpolation_MAX = 2,
};

enum class AnimationCompressionFormat : uint8_t {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7,
};

enum class EGeyserState : uint8_t {
	Dormant = 0,
	Active = 1,
	Disabled = 2,
	EGeyserState_MAX = 3,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	RARE_CutsceneWorld = 3,
	RARE_RelativeToWorldLocation = 4,
	ECameraAnimPlaySpace_MAX = 5,
};

enum class ClassLoadState : uint8_t {
	Incomplete = 0,
	Success = 1,
	NoLoad = 2,
	Failed = 3,
	ClassLoadState_MAX = 4,
};

enum class EMaterialSamplerType : uint8_t {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_MAX = 8,
};

enum class ESpawnEventGroupNames : uint8_t {
	SpawnEventGroupB = 0,
	SpawnEventGroupC = 1,
	SpawnEventGroupD = 2,
	SpawnEventGroupE = 3,
	SpawnEventGroupReplacemnent = 4,
	SpawnEventGroup_MAX = 5,
	ESpawnEventGroupNames_MAX = 6,
};

enum class EGameplayEffectStackingPeriodPolicy : uint8_t {
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class EFishingMiniGamePlayerInputDirection : uint8_t {
	None = 0,
	Left = 1,
	Away = 2,
	Right = 3,
	Towards = 4,
	EFishingMiniGamePlayerInputDirection_MAX = 5,
};

enum class ECoherentUIGTKeys : uint8_t {
	LeftMouseButton = 0,
	RightMouseButton = 1,
	MiddleMouseButton = 2,
	ThumbMouseButton = 3,
	ThumbMouseButton2 = 4,
	BackSpace = 5,
	Tab = 6,
	Enter = 7,
	Pause = 8,
	CapsLock = 9,
	Escape = 10,
	SpaceBar = 11,
	PageUp = 12,
	PageDown = 13,
	End = 14,
	Home = 15,
	Left = 16,
	Up = 17,
	Right = 18,
	Down = 19,
	Insert = 20,
	Delete = 21,
	Zero = 22,
	One = 23,
	Two = 24,
	Three = 25,
	Four = 26,
	Five = 27,
	Six = 28,
	Seven = 29,
	Eight = 30,
	Nine = 31,
	A = 32,
	B = 33,
	C = 34,
	D = 35,
	E = 36,
	F = 37,
	G = 38,
	H = 39,
	I = 40,
	J = 41,
	K = 42,
	L = 43,
	M = 44,
	N = 45,
	O = 46,
	P = 47,
	Q = 48,
	R = 49,
	S = 50,
	T = 51,
	U = 52,
	V = 53,
	W = 54,
	X = 55,
	Y = 56,
	Z = 57,
	NumPadZero = 58,
	NumPadOne = 59,
	NumPadTwo = 60,
	NumPadThree = 61,
	NumPadFour = 62,
	NumPadFive = 63,
	NumPadSix = 64,
	NumPadSeven = 65,
	NumPadEight = 66,
	NumPadNine = 67,
	Multiply = 68,
	Add = 69,
	Subtract = 70,
	Decimal = 71,
	Divide = 72,
	F1 = 73,
	F2 = 74,
	F3 = 75,
	F4 = 76,
	F5 = 77,
	F6 = 78,
	F7 = 79,
	F8 = 80,
	F9 = 81,
	F10 = 82,
	F11 = 83,
	F12 = 84,
	Gamepad_Special_Left = 85,
	Gamepad_Special_Right = 86,
	MouseScrollUp = 87,
	MouseScrollDown = 88,
	Gamepad_RightStick_Left = 89,
	Gamepad_RightStick_Up = 90,
	Gamepad_RightStick_Right = 91,
	Gamepad_RightStick_Down = 92,
	NumLock = 93,
	ScrollLock = 94,
	LeftShift = 95,
	RightShift = 96,
	LeftControl = 97,
	RightControl = 98,
	LeftAlt = 99,
	RightAlt = 100,
	LeftCommand = 101,
	RightCommand = 102,
	Semicolon = 103,
	Equals = 104,
	Comma = 105,
	Underscore = 106,
	Period = 107,
	Slash = 108,
	Tilde = 109,
	LeftBracket = 110,
	Backslash = 111,
	RightBracket = 112,
	Quote = 113,
	Unknown = 114,
	ECoherentUIGTKeys_MAX = 115,
};

enum class EAthenaAnimationCapstanState : uint8_t {
	Neutral = 0,
	Positive = 1,
	Negative = 2,
	EAthenaAnimationCapstanState_MAX = 3,
};

enum class ETreasuryVaultDoorState : uint8_t {
	Opening = 0,
	Open = 1,
	Closing = 2,
	Closed = 3,
	ETreasuryVaultDoorState_MAX = 4,
};

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

enum class EBindingSet : uint8_t {
	ActionBindings = 0,
	AxisBindings = 1,
	EBindingSet_MAX = 2,
};

enum class EProjectileSpawnedState : uint8_t {
	NotSpawned = 0,
	Spawned = 1,
	EProjectileSpawnedState_MAX = 2,
};

enum class EBootyRewardType : uint8_t {
	OwnershipChanged = 0,
	ItemDroppedOnItem = 1,
	PlayerKilled = 2,
	GameEventsFinished = 3,
	Handin = 4,
	MAX = 5,
	EBootyRewardType_MAX = 6,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class ERadialMenuInputModality : uint8_t {
	None = 0,
	Keyboard = 1,
	Gamepad = 2,
	ERadialMenuInputModality_MAX = 3,
};

enum class ETransitionType : uint8_t {
	TT_None = 0,
	TT_Paused = 1,
	TT_Loading = 2,
	TT_Saving = 3,
	TT_Connecting = 4,
	TT_Precaching = 5,
	TT_WaitingToConnect = 6,
	TT_MAX = 7,
};

enum class EChestEntitlementActionType : uint8_t {
	Equip = 0,
	Unequip = 1,
	Clear = 2,
	Randomise = 3,
	RadialEquip = 4,
	EChestEntitlementActionType_MAX = 5,
};

enum class EWieldedItemAnimationState : uint8_t {
	Equipping = 0,
	Unequipping = 1,
	Idle = 2,
	Unequipped = 3,
	ContinuousUse = 4,
	OutOfContinuousUse = 5,
	OneShot = 6,
	ComplexOneShot = 7,
	Blocking = 8,
	EWieldedItemAnimationState_MAX = 9,
};

enum class EFaunaAnimationStartledLevel : uint8_t {
	None = 0,
	Low = 1,
	High = 2,
	EFaunaAnimationStartledLevel_MAX = 3,
};

enum class EFogBankType : uint8_t {
	Default = 0,
	Haunted = 1,
	EFogBankType_MAX = 2,
};

enum class EParticleAxisLock : uint8_t {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10,
};

enum class ETouchType : uint8_t {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	Ended = 3,
	NumTypes = 4,
	ETouchType_MAX = 5,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class EExecutionTarget : uint8_t {
	OldServer = 0,
	NewServer = 1,
	Client = 2,
	EExecutionTarget_MAX = 3,
};

enum class ECharacterDeathType : uint8_t {
	Invalid = 0,
	Killed = 1,
	Despawn = 2,
	OwnershipRemoved = 3,
	NoGameStatePresentDuringPostInitializeComponents = 4,
	ECharacterDeathType_MAX = 5,
};

enum class ETimedDoorCheckpointState : uint8_t {
	Lowering = 0,
	Jammed = 1,
	ETimedDoorCheckpointState_MAX = 2,
};

enum class EFishingFishState : uint8_t {
	NotSet = 0,
	RisingFromTheDepths = 1,
	AttachedToFloat_MovingToFloat = 2,
	AttachedToFloat_Battling = 3,
	AttachedToFloat_Tired = 4,
	AttachedToFloat_Caught = 5,
	AttachedToFloat_Caught_Instant = 6,
	Escaping = 7,
	EFishingFishState_MAX = 8,
};

enum class EExplosionReceiverCurveType : uint8_t {
	None = 0,
	Other = 1,
	Player = 2,
	EExplosionReceiverCurveType_MAX = 3,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class ECoherentUIGTSettingsSeverity : uint8_t {
	Trace = 0,
	Debug = 1,
	Info = 2,
	Warning = 3,
	AssertFailure = 4,
	Error = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EAccelerationGroupNames : uint8_t {
	AccelerationGroupB = 0,
	AccelerationGroupC = 1,
	AccelerationGroupD = 2,
	AccelerationGroupE = 3,
	AccelerationGroupReplacement = 4,
	AccelerationGroup_MAX = 5,
	EAccelerationGroupNames_MAX = 6,
};

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	Max = 2,
	EControlConstraint_MAX = 3,
};

enum class EGameplayAbilityReplicationPolicy : uint8_t {
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2,
};

enum class ESkellyFortDestructionReason : uint8_t {
	Defeated = 0,
	Despawn = 1,
	ESkellyFortDestructionReason_MAX = 2,
};

enum class EItemActionType : uint8_t {
	OneShot = 0,
	WindUp = 1,
	Continuous = 2,
	EItemActionType_MAX = 3,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class EGameplayEffectAttributeCaptureSource : uint8_t {
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class EHullDamageDeck : uint8_t {
	Bottom = 0,
	Mid = 1,
	EHullDamageDeck_MAX = 2,
};

enum class FPerformanceCounterOptions : uint8_t {
	None = 0,
	FPS = 1,
	Ping = 2,
	FPSAndPing = 3,
	FPerformanceCounterOptions_MAX = 4,
};

enum class ETreasureMapVerticalAlignment : uint8_t {
	Top = 0,
	Centre = 1,
	ETreasureMapVerticalAlignment_MAX = 2,
};

enum class ETreasuryEncounterType : uint8_t {
	Sirens = 0,
	OceanCrawlers = 1,
	ETreasuryEncounterType_MAX = 2,
};

enum class EGameplayAbilityInstancingPolicy : uint8_t {
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3,
};

enum class ESwimRotationMode : uint8_t {
	FaceMovement = 0,
	UprightStrafe = 1,
	LongwaysStrafe = 2,
	ESwimRotationMode_MAX = 3,
};

enum class ECollisionChannel : uint8_t {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33,
};

enum class EArcFollowingMode : uint8_t {
	SharkArc = 0,
	Simple3DArc = 1,
	EArcFollowingMode_MAX = 2,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EShipDynamicsAnchoredState : uint8_t {
	Unknown = 0,
	Raised = 1,
	Lowered = 2,
	EShipDynamicsAnchoredState_MAX = 3,
};

enum class ESkellyFormIconType : uint8_t {
	Normal = 0,
	Metal = 1,
	Plant = 2,
	Shadow = 3,
	None = 4,
	Max = 5,
	ESkellyFormIconType_MAX = 6,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

enum class EItemLoadoutDestroyBehaviour : uint8_t {
	DoNotDestroy = 0,
	Destroy = 1,
	EItemLoadoutDestroyBehaviour_MAX = 2,
};

enum class EWeepingState : uint8_t {
	Weeping = 0,
	Calm = 1,
	EWeepingState_MAX = 2,
};

enum class ESessionVisibility : uint8_t {
	Invalid = 0,
	Open = 1,
	Closed = 2,
	ESessionVisibility_MAX = 3,
};

enum class AISpawnRequestResult : uint8_t {
	Incomplete = 0,
	Success = 1,
	FailedSpawnDenied = 2,
	FailedNoQuery = 3,
	FailedNoValidPos = 4,
	FailedLoadingPawnClass = 5,
	FailedLoadingItemDropComponentClass = 6,
	Cancelled = 7,
	AISpawnRequestResult_MAX = 8,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class EVoyageChangeReason : uint8_t {
	Unknown = 0,
	PreviousWasCompleted = 1,
	PreviousWasCancelled = 2,
	EVoyageChangeReason_MAX = 3,
};

enum class ELostShipmentsIslandTypes : uint8_t {
	Feature = 0,
	Resource = 1,
	Seapost = 2,
	Outpost = 3,
	Fort = 4,
	ELostShipmentsIslandTypes_MAX = 5,
};

enum class EWwise7Point1Order : uint8_t {
	Front_Left = 0,
	Front_Right = 1,
	Center = 2,
	Left_Surround = 3,
	Right_Surround = 4,
	Left_Side = 5,
	Right_Side = 6,
	LFE = 7,
	Null_Channel = 8,
	EWwise7Point1Order_MAX = 9,
};

enum class ESlidingDoorState : uint8_t {
	Closing = 0,
	Closed = 1,
	Opening = 2,
	Open = 3,
	ESlidingDoorState_MAX = 4,
};

enum class ETransientActorDiscardType : uint8_t {
	MarkForDestruction = 0,
	Unregister = 1,
	Count = 2,
	ETransientActorDiscardType_MAX = 3,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class ECoralShieldVFXRole : uint8_t {
	None = 0,
	Caster = 1,
	Receiver = 2,
	ECoralShieldVFXRole_MAX = 3,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class EBurrowEruptState : uint8_t {
	Dormant = 0,
	Erupt = 1,
	EBurrowEruptState_MAX = 2,
};

enum class EMatchmakingServerType : uint8_t {
	Adventure = 0,
	Contest = 1,
	EMatchmakingServerType_MAX = 2,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

enum class EStickinessType : uint8_t {
	DontStick = 0,
	StickTemporarily = 1,
	StickForever = 2,
	EStickinessType_MAX = 3,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class EDirectionOfMovement : uint8_t {
	None = 0,
	Rising = 1,
	Lowering = 2,
	EDirectionOfMovement_MAX = 3,
};

enum class EProjectileWeaponState : uint8_t {
	Equipping = 0,
	Idle = 1,
	Aiming = 2,
	Recoil = 3,
	Reloading = 4,
	InterruptedReload = 5,
	EProjectileWeaponState_MAX = 6,
};

enum class ETranslucencyLightingMode : uint8_t {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_DirectionalInnerCascade = 6,
	TLM_NonDirectionalInnerCascade = 7,
	TLM_MAX = 8,
};

enum class EAthenaSafeZoneEnum : uint8_t {
	NONE = 0,
	MAINWORLD_SAFEZONE = 1,
	TRIBUTEPEAK_SAFEZONE = 2,
	EAthenaSafeZoneEnum_MAX = 3,
};

enum class EStreamingPlatform : uint8_t {
	Twitch = 0,
	Mixer = 1,
	YouTube = 2,
	EStreamingPlatform_MAX = 3,
};

enum class EShipAlignmentType : uint8_t {
	None = 0,
	AlignedToShip = 1,
	AlignedToShipXYOnly = 2,
	EShipAlignmentType_MAX = 3,
};

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
};

enum class EMermaidState : uint8_t {
	Rising = 0,
	Idle = 1,
	Disappearing = 2,
	EMermaidState_MAX = 3,
};

enum class EActionDisplayPriority : uint8_t {
	Primary = 0,
	Secondary = 1,
	Tertiary = 2,
	Total = 3,
	EActionDisplayPriority_MAX = 4,
};

enum class EAIThreatLevel : uint8_t {
	NoDanger = 0,
	Nervous = 1,
	Threatened = 2,
	Calm = 3,
	EAIThreatLevel_MAX = 4,
};

enum class EQuestLocationSelectionMethod : uint8_t {
	NoRepetitionWithinVoyage = 0,
	NoRepetitionWithinAdjacentChapters = 1,
	AllIslandsAvailable = 2,
	EQuestLocationSelectionMethod_MAX = 3,
};

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_MAX = 4,
};

enum class EFunctionInputType : uint8_t {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_StaticBool = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX = 8,
};

enum class EWaterPuzzleAlterationEndingState : uint8_t {
	Invalid = 0,
	Normal = 1,
	MaxToMax = 2,
	EWaterPuzzleAlterationEndingState_MAX = 3,
};

enum class EQuestType : uint8_t {
	Unknown = 0,
	XMarksTheSpot = 1,
	Riddle = 2,
	Bounty = 3,
	Merchant = 4,
	CargoRun = 5,
	Tale = 6,
	Matchmake = 7,
	EmergantVoyage = 8,
	Reward = 9,
	Staging = 10,
	EQuestType_MAX = 11,
};

enum class EWreckSpawnBlockType : uint8_t {
	AlwaysBlock = 0,
	NeverBlock = 1,
	PotentialBlockage = 2,
	EWreckSpawnBlockType_MAX = 3,
};

enum class ECompassDirections : uint8_t {
	North = 0,
	NorthByNorthEast = 1,
	NorthEast = 2,
	EastByNorthEast = 3,
	East = 4,
	EastBySouthEast = 5,
	SouthEast = 6,
	SouthBySouthEast = 7,
	South = 8,
	SouthBySouthWest = 9,
	SouthWest = 10,
	WestBySouthWest = 11,
	West = 12,
	WestByNorthWest = 13,
	NorthWest = 14,
	NorthByNorthWest = 15,
	NumDirections = 16,
	ECompassDirections_MAX = 17,
};

enum class EConditionalStatType : uint8_t {
	PlayerOnly = 0,
	WholeCrew = 1,
	WholeCrewButLegendsOnly = 2,
	CrewAndAlliance = 3,
	AllianceOnly = 4,
	EConditionalStatType_MAX = 5,
};

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAsceding = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EShantyEnsembleOption : uint8_t {
	TryToJoinExistingNearbyEnsemble = 0,
	ForceNewEnsemble = 1,
	EShantyEnsembleOption_MAX = 2,
};

enum class TextureMipGenSettings : uint8_t {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_MAX = 20,
};

enum class ESwimmingMode : uint8_t {
	SwimmingMode_None = 0,
	SwimmingMode_Swimming = 1,
	SwimmingMode_Sinking = 2,
	SwimmingMode_MAX = 3,
};

enum class EShipDeck : uint8_t {
	BottomDeck = 0,
	MidDeck = 1,
	TopDeck = 2,
	EShipDeck_MAX = 3,
};

enum class EComponentNetDormancy : uint8_t {
	NotSupported = 0,
	Awake = 1,
	FollowOwner = 2,
	Dormant = 3,
	Count = 4,
	EComponentNetDormancy_MAX = 5,
};

enum class EStartSizeGroupNames : uint8_t {
	StartSizeB = 0,
	StartSizeC = 1,
	StartSizeD = 2,
	StartSizeE = 3,
	StartSizeReplacement = 4,
	StartSize_MAX = 5,
	EStartSizeGroupNames_MAX = 6,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EWreckSpawnCheckFlag : uint8_t {
	None = 0,
	Players = 1,
	Ships = 2,
	AmbientWrecks = 3,
	CustomWrecks = 4,
	Islands = 5,
	AmbientWrecksWithNearPlayers = 6,
	AmbientWrecksWithoutNearPlayers = 7,
	SeaRocks = 8,
	EWreckSpawnCheckFlag_MAX = 9,
};

enum class EWaterSplashProbeType : uint8_t {
	ThresholdedRateOfChange = 0,
	StateChangeWaterToAir = 1,
	StateChangeAirToWater = 2,
	StateChangeAny = 3,
	Continuous = 4,
	EWaterSplashProbeType_MAX = 5,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
	ENavigationOptionFlag_MAX = 4,
};

enum class EBountySpawnerType : uint8_t {
	Default = 0,
	BountyQuest = 1,
	BountyFort = 2,
	EBountySpawnerType_MAX = 3,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class EOpenableItemState : uint8_t {
	Open = 0,
	Closed = 1,
	EOpenableItemState_MAX = 2,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class EPresortedBillboardsMode : uint8_t {
	PBM_Disabled = 0,
	PBM_FrontToBack2D = 1,
	PBM_BackToFront2D = 2,
	PBM_MAX = 3,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EInterpCurveMode : uint8_t {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6,
};

enum class EMaterialGeometryMode : uint8_t {
	MGM_Normal = 0,
	MGM_VerticesAsBillboards = 1,
	MGM_TriangleDensityView = 2,
	MGM_TriangleDensityViewWorldSpace = 3,
	MGM_MAX = 4,
};

enum class ReliabilityType : uint8_t {
	Reliable = 0,
	Unreliable = 1,
	Count = 2,
	ReliabilityType_MAX = 3,
};

enum class EAthenaAnimationSocketGroup : uint8_t {
	Male = 0,
	Female = 1,
	EAthenaAnimationSocketGroup_MAX = 2,
};

enum class EUnit : uint8_t {
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 40,
	Seconds = 41,
	Minutes = 42,
	Hours = 43,
	Days = 44,
	Months = 45,
	Years = 46,
	Unspecified = 47,
	EUnit_MAX = 48,
};

enum class ECanvasRenderTargetMips : uint8_t {
	Disabled = 0,
	Enabled = 1,
	ECanvasRenderTargetMips_MAX = 2,
};

enum class EMeleeWeaponAttackType : uint8_t {
	Combo = 0,
	Heavy = 1,
	Special = 2,
	EMeleeWeaponAttackType_MAX = 3,
};

enum class ESittingActionStateDockingMode : uint8_t {
	FindFloor = 0,
	AttachDirectlyToSeat = 1,
	ESittingActionStateDockingMode_MAX = 2,
};

enum class EAthenaAnimationLadderTransitionState : uint8_t {
	None = 0,
	Bottom = 1,
	Top = 2,
	EAthenaAnimationLadderTransitionState_MAX = 3,
};

enum class EFileAccessAsyncResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	EFileAccessAsyncResult_MAX = 2,
};

enum class ESpatialOffsetMethod : uint8_t {
	ThreeDimensional = 0,
	Horizontal = 1,
	Vertical = 2,
	ESpatialOffsetMethod_MAX = 3,
};

enum class ECrewSessionQoSServerResolveResult : uint8_t {
	Success = 0,
	InvalidLocation = 1,
	TimedOut = 2,
	Failed = 3,
	ECrewSessionQoSServerResolveResult_MAX = 4,
};

enum class EPetMontageAnimationType : uint8_t {
	None = 0,
	OneShot = 1,
	LoopingOneShot = 2,
	LoopingStaged = 3,
	EPetMontageAnimationType_MAX = 4,
};

enum class AISpawnRequestState : uint8_t {
	PreloadClasses = 0,
	AwaitingBegin = 1,
	DelayUntilNextCanSpawnCheck = 2,
	WaitForClassLoadsAndLocationResult = 3,
	DelayUntilNextLocationCheck = 4,
	Complete = 5,
	AISpawnRequestState_MAX = 6,
};

enum class EHealthChangedReason : uint8_t {
	NoChange = 0,
	Test = 1,
	Reset = 2,
	CannonProjectile = 3,
	CannonBallSplashDamage = 4,
	FallDamage = 5,
	HealedFromFood = 6,
	Drowning = 7,
	DamagedBySwimmingCreature = 8,
	StruckByLightning = 9,
	Blunderbuss_Default = 10,
	Pistol_Default = 11,
	EyeOfReach_Default = 12,
	Cutlass = 13,
	GunpowderBarrelExplosion = 14,
	IngestedByKrakenTentacle = 15,
	PowerSlammedByKrakenTentacle = 16,
	StarvedToDeath = 17,
	SkeletonFormsHeal = 18,
	Venom = 19,
	Fire = 20,
	Emote = 21,
	TinySharkBite = 22,
	SunkenCurseSelfHeal = 23,
	SunkenCurseDamage = 24,
	TinySharkRespawn = 25,
	Lava = 26,
	Boiling = 27,
	StateTransfer = 28,
	Fragile = 29,
	Rainfall = 30,
	Submerged = 31,
	LiquidProjectile = 32,
	Dry = 33,
	StrainDamage = 34,
	VolcanoInstantKill = 35,
	VolcanicRock = 36,
	DevilsShroud = 37,
	Regeneration = 38,
	HarpoonProjectile = 39,
	Mechanism = 40,
	KnockbackAIAbility = 41,
	SpikePit = 42,
	ChestOfRage = 43,
	Scalded = 44,
	Geyser = 45,
	Flamethrower = 46,
	AshenLordFireBreath = 47,
	AshenWindsSkull = 48,
	AshenWindsSkullCharge = 49,
	Revive = 50,
	HealedByAbility = 51,
	Shocked = 52,
	Siren = 53,
	KrakenBite = 54,
	Firework = 55,
	Sleeping = 56,
	MAX = 57,
	EHealthChangedReason_MAX = 58,
};

enum class EOverlapShapeType : uint8_t {
	Mesh = 0,
	Box = 1,
	EOverlapShapeType_MAX = 2,
};

enum class EHIKEffectorSpace : uint8_t {
	HIKEffectorSpace_World = 0,
	HIKEffectorSpace_Character = 1,
	HIKEffectorSpace_MAX = 2,
};

enum class EUINavigationRule : uint8_t {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	Invalid = 5,
	EUINavigationRule_MAX = 6,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EBucketState : uint8_t {
	Idle = 0,
	Scooping = 1,
	Throwing = 2,
	DrenchingWielder = 3,
	Max = 4,
	Pad = 5,
	EBucketState_MAX = 6,
};

enum class EWieldableItemSize : uint8_t {
	Small = 0,
	Large = 1,
	EWieldableItemSize_MAX = 2,
};

enum class EKnockbackAnimDirection : uint8_t {
	Forwards = 0,
	Backwards = 1,
	EKnockbackAnimDirection_MAX = 2,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EHasBeenWieldedState : uint8_t {
	InitialState = 0,
	HasNotBeenWielded = 1,
	HasBeenWielded = 2,
	EHasBeenWieldedState_MAX = 3,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EColorVisionDeficiency : uint8_t {
	CVD_NormalVision = 0,
	CVD_Deuteranomly = 1,
	CVD_Deuteranopia = 2,
	CVD_Protanomly = 3,
	CVD_Protanopia = 4,
	CVD_Tritanomaly = 5,
	CVD_Tritanopia = 6,
	CVD_Achromatopsia = 7,
	CVD_MAX = 8,
};

enum class EAbilityGenericReplicatedEvent : uint8_t {
	GenericConfirm = 0,
	GenericCancel = 1,
	InputPressed = 2,
	InputReleased = 3,
	GenericSignalFromClient = 4,
	GenericSignalFromServer = 5,
	GameCustom1 = 6,
	GameCustom2 = 7,
	GameCustom3 = 8,
	GameCustom4 = 9,
	GameCustom5 = 10,
	MAX = 11,
	EAbilityGenericReplicatedEvent_MAX = 12,
};

enum class EShipSurfacingState : uint8_t {
	Sailing = 0,
	Surfacing = 1,
	Diving = 2,
	EShipSurfacingState_MAX = 3,
};

enum class EKrakenDespawnReason : uint8_t {
	Invalid = 0,
	Defeated = 1,
	TimedOutWithNoTargets = 2,
	TimedOutWithTarget = 3,
	Dismissed = 4,
	EKrakenDespawnReason_MAX = 5,
};

enum class EParticleCollisionComplete : uint8_t {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class EAggressiveGhostShipCannonFacingDirection : uint8_t {
	Left = 0,
	Right = 1,
	EAggressiveGhostShipCannonFacingDirection_MAX = 2,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class EMaterialExposedViewProperty : uint8_t {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceCameraPosition = 4,
	MEVP_MAX = 5,
};

enum class ECharacterHitReactionAnimType : uint8_t {
	Full = 0,
	Flinch = 1,
	None = 2,
	Override = 3,
	ECharacterHitReactionAnimType_MAX = 4,
};

enum class EPreventDamageTypeLockReasons : uint8_t {
	IsFiredOutOfACannon = 0,
	AIStrategy = 1,
	Form = 2,
	IsHiddenInObject = 3,
	ExternalController = 4,
	EPreventDamageTypeLockReasons_MAX = 5,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	EConsumeMouseWheel_MAX = 2,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_Disable = 2,
	PBO_MAX = 3,
};

enum class EGameplayEffectStackingType : uint8_t {
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
};

enum class ReverbPreset : uint8_t {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23,
};

enum class ERadialInventoryType : uint8_t {
	None = 0,
	Item = 1,
	Map = 2,
	Phrases = 3,
	Emotes = 4,
	ERadialInventoryType_MAX = 5,
};

enum class EAngleRangeGroupNames : uint8_t {
	AngleRangeGroupB = 0,
	AngleRangeGroupC = 1,
	AngleRangeGroupD = 2,
	AngleRangeGroupE = 3,
	AngleRangeGroup_MAX = 4,
	EAngleRangeGroupNames_MAX = 5,
};

enum class EFaunaAnimationLocation : uint8_t {
	Land = 0,
	Sea = 1,
	Underwater = 2,
	EFaunaAnimationLocation_MAX = 3,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class EPriorityGroups : uint8_t {
	PriorityZero = 0,
	PriorityOne = 1,
	PriorityTwo = 2,
	PriorityThree = 3,
	PriorityFour = 4,
	PriorityFive = 5,
	Priority_MAX = 6,
	EPriorityGroups_MAX = 7,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class ESceneTextureId : uint8_t {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModel = 22,
	PPI_AmbientOcclusion = 23,
	PPI_CustomStencil = 24,
	PPI_PlanarReflections = 25,
	PPI_Mask = 26,
	PPI_PreviousMask = 27,
	PPI_MAX = 28,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class ELocationGeneratorSampleType : uint8_t {
	None = 0,
	Usable = 1,
	Unusable_NoContact = 2,
	Unusable_SurfaceType = 3,
	Unusable_Proximity = 4,
	Unusable_Slope = 5,
	Unusable_BelowWater = 6,
	ELocationGeneratorSampleType_MAX = 7,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class EShipParticleParam : uint8_t {
	None = 0,
	DeckWater = 1,
	FloodLevel = 2,
	Total = 3,
	EShipParticleParam_MAX = 4,
};

enum class ETouchIndex : uint8_t {
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	ETouchIndex_MAX = 10,
};

enum class ELightTemplateType : uint8_t {
	PointLight = 0,
	SpotLight = 1,
	ELightTemplateType_MAX = 2,
};

enum class EVolcanoState : uint8_t {
	Dormant = 0,
	WarmingUp = 1,
	Erupting = 2,
	EVolcanoState_MAX = 3,
};

enum class EFireworkAmbientLightFadeState : uint8_t {
	None = 0,
	FadeIn = 1,
	Lifetime = 2,
	FadeOut = 3,
	EFireworkAmbientLightFadeState_MAX = 4,
};

enum class ETutorialDialogStep : uint8_t {
	None = 0,
	StartedTalkedToMysteriousStranger = 1,
	FinishedTalkingToMysteriousStranger = 2,
	ETutorialDialogStep_MAX = 3,
};

enum class ETradeRouteMapOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	ETradeRouteMapOrientation_MAX = 2,
};

enum class TextureCompressionSettings : uint8_t {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_SignedHDR = 12,
	TC_UnsignedHDR = 13,
	TC_HighQuality = 14,
	TC_TwoChannelFloat = 15,
	TC_MAX = 16,
};

enum class EBlendedFadeState : uint8_t {
	FadingIn = 0,
	FadingOut = 1,
	Active = 2,
	Idle = 3,
	EBlendedFadeState_MAX = 4,
};

enum class EInteractableOverlayActionType : uint8_t {
	None = 0,
	Activate = 1,
	EInteractableOverlayActionType_MAX = 2,
};

enum class EInputControllerType : uint8_t {
	GamePad = 0,
	Keyboard = 1,
	EInputControllerType_MAX = 2,
};

enum class EParticleUVFlipMode : uint8_t {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

enum class ETriangleSortOption : uint8_t {
	TRISORT_None = 0,
	TRISORT_CenterRadialDistance = 1,
	TRISORT_Random = 2,
	TRISORT_MergeContiguous = 3,
	TRISORT_Custom = 4,
	TRISORT_CustomLeftRight = 5,
	TRISORT_MAX = 6,
};

enum class EAggressiveGhostShipTarget : uint8_t {
	None = 0,
	Player = 1,
	NearPlayer = 2,
	Ship = 3,
	NearShip = 4,
	MermaidStatue = 5,
	NearMermaidStatue = 6,
	EnemyGhostShip = 7,
	NearEnemyGhostShip = 8,
	CannonRowboat = 9,
	NearCannonRowboat = 10,
	Anywhere = 11,
	EAggressiveGhostShipTarget_MAX = 12,
};

enum class ETeleportActionStateConditions : uint8_t {
	AllConditions = 0,
	NoConditions = 1,
	ETeleportActionStateConditions_MAX = 2,
};

enum class EExcludeFromCascades : uint8_t {
	LastCascade = 0,
	LastTwoCascades = 1,
	LastThreeCascades = 2,
	EExcludeFromCascades_MAX = 3,
};

enum class EAmbientLightConeShape : uint8_t {
	Sphere = 0,
	Hemisphere = 1,
	VeryWideCone = 2,
	WideCone = 3,
	NarrowishCone = 4,
	EAmbientLightConeShape_MAX = 5,
};

enum class EGlintCondition : uint8_t {
	OnShip = 0,
	Floating = 1,
	SpawnedAsSunkenSalvage = 2,
	SpawnedAsTallTaleQuestItem = 3,
	SpawnedAsTreasureVaultReward = 4,
	EGlintCondition_MAX = 5,
};

enum class EAllianceNotificationType : uint8_t {
	Joined = 0,
	Formed = 1,
	Left = 2,
	Disbanded = 3,
	OtherCrewJoined = 4,
	OtherCrewLeft = 5,
	EAllianceNotificationType_MAX = 6,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EInterpMoveAxis : uint8_t {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6,
};

enum class EEmitterOriginGroupNames : uint8_t {
	EmitterOriginGroupB = 0,
	EmitterOriginGroupC = 1,
	EmitterOriginGroupD = 2,
	EmitterOriginGroupE = 3,
	EmitterOriginGroupReplacement = 4,
	EmitterOriginGroup_MAX = 5,
	EEmitterOriginGroupNames_MAX = 6,
};

enum class EStartRotationRateGroupNames : uint8_t {
	StartRotationRateGroupB = 0,
	StartRotationRateGroupC = 1,
	StartRotationRateGroupD = 2,
	StartRotationRateGroupE = 3,
	StartRotationRateGroupReplacement = 4,
	StartRotationRateGroup_MAX = 5,
	EStartRotationRateGroupNames_MAX = 6,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EPetMontageAnimationState : uint8_t {
	None = 0,
	OneShot = 1,
	ContinuousIn = 2,
	ContinuousLoop = 3,
	ContinuousOut = 4,
	ExitContinuousLoop = 5,
	EPetMontageAnimationState_MAX = 6,
};

enum class EStatConditionTarget : uint8_t {
	PlayerPawn = 0,
	ObjectOfInterest = 1,
	ObjectOfInterest2 = 2,
	EStatConditionTarget_MAX = 3,
};

enum class EConeWeightingMethod : uint8_t {
	Weighted = 0,
	Absolute = 1,
	EConeWeightingMethod_MAX = 2,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class ELeakEffectState : uint8_t {
	Off = 0,
	LeakingWater = 1,
	LeakingWaterPlugged = 2,
	LeakingBubbles = 3,
	LeakingBubblesPlugged = 4,
	ELeakEffectState_MAX = 5,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_ActualBeforeTranslucency = 4,
	BL_BeforeLighting = 5,
	BL_MAX = 6,
};

enum class EAllocationStrategy : uint8_t {
	Normal = 0,
	LowPriority = 1,
	NonAllocated = 2,
	EAllocationStrategy_MAX = 3,
};

enum class EStretch : uint8_t {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	UserSpecified = 6,
	EStretch_MAX = 7,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class EStartGameNarrativePositionX : uint8_t {
	Undefined = 0,
	Left = 1,
	Middle = 2,
	Right = 3,
	EStartGameNarrativePositionX_MAX = 4,
};

enum class EMechanismActionType : uint8_t {
	OneShot = 0,
	Continuous = 1,
	EMechanismActionType_MAX = 2,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class EAimSensitivitySettingCategory : uint8_t {
	Invalid = 0,
	Blunderbuss = 1,
	Flintlock = 2,
	EyeOfReach = 3,
	Spyglass = 4,
	TridentOfDarkTides = 5,
	EAimSensitivitySettingCategory_MAX = 6,
};

enum class ELoadableState : uint8_t {
	Unloaded = 0,
	Unloading = 1,
	Loading = 2,
	Loaded = 3,
	ELoadableState_MAX = 4,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EMechanismTriggerType : uint8_t {
	OneShot = 0,
	Continuous = 1,
	EMechanismTriggerType_MAX = 2,
};

enum class EEasingFunc : uint8_t {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class EReapersMarkTrackedVoyageType : uint8_t {
	None = 0,
	NonAllianceVoyage = 1,
	AllianceVoyage = 2,
	EReapersMarkTrackedVoyageType_MAX = 3,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class EHoleState : uint8_t {
	Alive = 0,
	Dead = 1,
	EHoleState_MAX = 2,
};

enum class EFishingRodRetractLineVisuals : uint8_t {
	None = 0,
	Normal = 1,
	Violent = 2,
	EFishingRodRetractLineVisuals_MAX = 3,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class ECookingState : uint8_t {
	Raw = 0,
	Undercooked = 1,
	Cooked = 2,
	Burned = 3,
	Fresh = 4,
	ECookingState_MAX = 5,
};

enum class EItemPassiveState : uint8_t {
	Idle = 0,
	Locomotion = 1,
	Jumping = 2,
	Turning = 3,
	Swimming = 4,
	EItemPassiveState_MAX = 5,
};

enum class EParticleEventType : uint8_t {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_KillByKillPlane = 6,
	EPET_MAX = 7,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	EAnimGroupRole_MAX = 3,
};

enum class EFocusCause : uint8_t {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class ESpecialEvents : uint8_t {
	None = 0,
	StartBlinds = 1,
	Leaderboard = 2,
	TavernCeremony = 3,
	ESpecialEvents_MAX = 4,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class EHangoutRotationMode : uint8_t {
	Match = 0,
	Randomise = 1,
	EHangoutRotationMode_MAX = 2,
};

enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR = 0,
	SCS_FinalColorLDR = 1,
	SCS_MAX = 2,
};

enum class EPLSectionType : uint8_t {
	Module = 0,
	Link = 1,
	Count = 2,
	EPLSectionType_MAX = 3,
};

enum class EControllableObjectType : uint8_t {
	None = 0,
	Wheel = 1,
	CapstanArm = 2,
	Pulley = 3,
	SailHoist = 4,
	SailAngle = 5,
	Cannon = 6,
	MapTable = 7,
	KeyedInstrument = 8,
	Tentacle = 9,
	Ladder = 10,
	SkeletonShipWheel = 11,
	Oars = 12,
	RowboatSeat = 13,
	Seat = 14,
	Bed = 15,
	HarpoonLauncher = 16,
	WaterPump = 17,
	WaterSlide = 18,
	EControllableObjectType_MAX = 19,
};

enum class ERequestEntitlementBehaviour : uint8_t {
	Default = 0,
	ForceRefresh = 1,
	ERequestEntitlementBehaviour_MAX = 2,
};

enum class ERewardType : uint8_t {
	XP = 0,
	Gold = 1,
	Entitlement = 2,
	WaywardTokens = 3,
	Level = 4,
	Emblem = 5,
	Achievement = 6,
	PremiumCurrency = 7,
	SeasonXP = 8,
	Null = 9,
	ERewardType_MAX = 10,
};

enum class EUseSingleStick : uint8_t {
	Off = 0,
	LeftStick = 1,
	RightStick = 2,
	EUseSingleStick_MAX = 3,
};

enum class EBlackboardIntValueComparisonType : uint8_t {
	Equal = 0,
	NotEqual = 1,
	GreaterThan = 2,
	LessThan = 3,
	GreaterThanEquals = 4,
	LessThanEquals = 5,
	EBlackboardIntValueComparisonType_MAX = 6,
};

enum class ESimplygonTextureSamplingQuality : uint8_t {
	Poor = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ESimplygonTextureSamplingQuality_MAX = 4,
};

enum class EAILifeTimePolicy : uint8_t {
	SpawnWhenVoyageParticipantsEnterDespawnWhenAllLeave = 0,
	SpawnWhenVoyageParticipantsEnterDespawnWhenAllVoyageParticipantsLeave = 1,
	SpawnWhenAnyEnterDespawnWhenAllLeave = 2,
	EAILifeTimePolicy_MAX = 3,
};

enum class EFontLanguage : uint8_t {
	German = 0,
	English = 1,
	Spanish = 2,
	Mexican = 3,
	French = 4,
	Italian = 5,
	Korean = 6,
	Polish = 7,
	Portugese = 8,
	Russian = 9,
	SimplifiedChinese = 10,
	TraditionalChinese = 11,
	Japanese = 12,
	Thai = 13,
	Turkish = 14,
	COUNT = 15,
	EFontLanguage_MAX = 16,
};

enum class EGTInputWidgetLineTraceMode : uint8_t {
	GTInputLineTrace_Single = 0,
	GTInputLineTrace_Multi = 1,
	GTInputLineTrace_MAX = 2,
};

enum class EViewModeIndex : uint8_t {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 7,
	VMI_LightmapDensity = 8,
	VMI_LitLightmapDensity = 9,
	VMI_ReflectionOverride = 10,
	VMI_VisualizeBuffer = 11,
	VMI_StationaryLightOverlap = 12,
	VMI_CollisionPawn = 13,
	VMI_CollisionVisibility = 14,
	VMI_CollisionWireframe = 15,
	VMI_LODColoration = 16,
	VMI_TriangleDensityScreenSpace = 17,
	VMI_TriangleDensityWorldSpace = 18,
	VMI_Max = 19,
	VMI_Unknown = 20,
};

enum class EAnimationWaterPumpState : uint8_t {
	None = 0,
	PumpForwards = 1,
	PumpBackwards = 2,
	ExitPumping = 3,
	EAnimationWaterPumpState_MAX = 4,
};

enum class EPetDangerHearingTarget : uint8_t {
	None = 0,
	Owner = 1,
	Crew = 2,
	Alliance = 3,
	EPetDangerHearingTarget_MAX = 4,
};

enum class EFacialPriority : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	MustPlay = 3,
	EFacialPriority_MAX = 4,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

enum class EArmOverlayFlags : uint8_t {
	RightArmOnly = 0,
	FullBody = 1,
	UpperBody = 2,
	UpperBodyLeft = 3,
	UpperBodyRight = 4,
	TwoHanded = 5,
	EArmOverlayFlags_MAX = 6,
};

enum class EDiceType : uint8_t {
	Dice4 = 0,
	Dice6 = 1,
	Dice8 = 2,
	Dice10 = 3,
	Dice12 = 4,
	Dice20 = 5,
	EDiceType_MAX = 6,
};

enum class ENavigationAction : uint8_t {
	ShowDeed = 0,
	ShowTrial = 1,
	ShowReward = 2,
	ShowProgress = 3,
	None = 4,
	ENavigationAction_MAX = 5,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class EBuoyancyDragSampleType : uint8_t {
	Spherical = 0,
	Planar = 1,
	EBuoyancyDragSampleType_MAX = 2,
};

enum class EQuestGenAssetSuffix : uint8_t {
	Default = 0,
	Underground = 1,
	AISpawn = 2,
	EQuestGenAssetSuffix_MAX = 3,
};

enum class ESwitchMechanismTriggerRandomSelectionMode : uint8_t {
	Any = 0,
	InactiveOnly = 1,
	ESwitchMechanismTriggerRandomSelectionMode_MAX = 2,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class ENavPathEvent : uint8_t {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	Custom = 6,
	ENavPathEvent_MAX = 7,
};

enum class EHIKHandsContactType : uint8_t {
	HIKHandsContactType_Normal = 0,
	HIKHandsContactType_Wrist = 1,
	HIKHandsContactType_FingerBase = 2,
	HIKHandsContactType_Hoof = 3,
	HIKHandsContactType_MAX = 4,
};

enum class ESeatStatTimeOfDay : uint8_t {
	Sunrise = 0,
	Morning = 1,
	MidDay = 2,
	Afternoon = 3,
	Sunset = 4,
	Night = 5,
	Unknown = 6,
	ESeatStatTimeOfDay_MAX = 7,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class EGameplayAbilityTriggerSource : uint8_t {
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3,
};

enum class EWheelAnimationType : uint8_t {
	SmallTurn = 0,
	LeftTurnMid = 1,
	LeftTurnFast = 2,
	RightTurnMid = 3,
	RightTurnFast = 4,
	EWheelAnimationType_MAX = 5,
};

enum class EActionRelevancy : uint8_t {
	Primary = 0,
	PrimaryAlt = 1,
	Secondary = 2,
	SecondaryAlt = 3,
	EActionRelevancy_MAX = 4,
};

enum class EEncounterListenerType : uint8_t {
	None = 0,
	Ship = 1,
	Player = 2,
	Count = 3,
	EEncounterListenerType_MAX = 4,
};

enum class EAggressiveGhostShipAllegiance : uint8_t {
	HostileToPlayers = 0,
	FriendlyToPlayers = 1,
	EAggressiveGhostShipAllegiance_MAX = 2,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	EEnvTestDistance_MAX = 3,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class EVfxUnderwaterUsage : uint8_t {
	AboveWater = 0,
	UnderWater = 1,
	Both = 2,
	EVfxUnderwaterUsage_MAX = 3,
};

enum class EHttpRequestTelemetryResult : uint8_t {
	None = 0,
	Completed = 1,
	Failed = 2,
	Cancelled = 3,
	Aborted = 4,
	EHttpRequestTelemetryResult_MAX = 5,
};

enum class EWaitAttributeChangeComparison : uint8_t {
	None = 0,
	GreaterThan = 1,
	LessThan = 2,
	GreaterThanOrEqualTo = 3,
	LessThanOrEqualTo = 4,
	NotEqualTo = 5,
	ExactlyEqualTo = 6,
	MAX = 7,
	EWaitAttributeChangeComparison_MAX = 8,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
	EFrictionCombineMode_MAX = 4,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class EShadowAIFormState : uint8_t {
	Invalid = 0,
	Light = 1,
	Dark = 2,
	EShadowAIFormState_MAX = 3,
};

enum class EWwiseAsyncIOPriorityDisplay : uint8_t {
	Low = 0,
	BelowNormal = 1,
	Normal = 2,
	High = 3,
	EWwiseAsyncIOPriorityDisplay_MAX = 4,
};

enum class EDockableSocketOverlapUpdates : uint8_t {
	AllowUpdate = 0,
	BlockUpdate = 1,
	EDockableSocketOverlapUpdates_MAX = 2,
};

enum class ECustomAnimationMontageType : uint8_t {
	OneShot = 0,
	LoopingOneShot = 1,
	LoopingStaged = 2,
	ECustomAnimationMontageType_MAX = 3,
};

enum class ESubmergedState : uint8_t {
	Surfaced = 0,
	PartiallySubmerged = 1,
	FullySubmerged = 2,
	ESubmergedState_MAX = 3,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class ESkeletonSensingState : uint8_t {
	None = 0,
	InitialReaction = 1,
	Searching = 2,
	AlertingOthers = 3,
	Pursuit = 4,
	ESkeletonSensingState_MAX = 5,
};

enum class EBuoyancyBlend : uint8_t {
	PrimaryToSecondary = 0,
	SecondaryToTertiary = 1,
	EBuoyancyBlend_MAX = 2,
};

enum class InventoryItemState : uint8_t {
	Default = 0,
	Locked = 1,
	InventoryItemState_MAX = 2,
};

enum class EDamageTargetType : uint8_t {
	Player = 0,
	Ship = 1,
	EDamageTargetType_MAX = 2,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Custom = 1,
	TLT_MAX = 2,
};

enum class ENamedPointGroupSearchTag : uint8_t {
	None = 0,
	ItemSpawnLocation = 1,
	ItemBuryLocation = 2,
	Exclude = 3,
	ENamedPointGroupSearchTag_MAX = 4,
};

enum class EHarpoonProjectileState : uint8_t {
	Docked = 0,
	InFlight = 1,
	Attached = 2,
	EHarpoonProjectileState_MAX = 3,
};

enum class ETaleQuestStepBeginMode : uint8_t {
	Cold = 0,
	Warm = 1,
	ETaleQuestStepBeginMode_MAX = 2,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class ESoundGroup : uint8_t {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class EFaunaAnimationState : uint8_t {
	Idle = 0,
	Locomotion = 1,
	Impact = 2,
	DyingLoop = 3,
	Death = 4,
	Special = 5,
	EFaunaAnimationState_MAX = 6,
};

enum class EReactionSequenceState : uint8_t {
	None = 0,
	BeginSuccessfulSequence = 1,
	BeginUnsuccessfulSequence = 2,
	EndSuccessfulSequence = 3,
	EndUnsuccessfulSequence = 4,
	Reset = 5,
	Cancelled = 6,
	MAX = 7,
	EReactionSequenceState_MAX = 8,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	Alliance = 3,
	ETeamAttitude_MAX = 4,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

enum class ECannonballIconType : uint8_t {
	Normal = 0,
	Anchor = 1,
	Ballast = 2,
	Barrel = 3,
	Boogie = 4,
	Grog = 5,
	Limp = 6,
	Passive = 7,
	Rigging = 8,
	Rudder = 9,
	Silence = 10,
	Snake = 11,
	Snooze = 12,
	None = 13,
	Max = 14,
	ECannonballIconType_MAX = 15,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class EFishingMiniGameEscapeDirection : uint8_t {
	None = 0,
	Left = 1,
	Away = 2,
	Right = 3,
	EFishingMiniGameEscapeDirection_MAX = 4,
};

enum class EVirtualKeyboardInputScope : uint8_t {
	Alphanumeric = 0,
	Default = 1,
	Email = 2,
	Number = 3,
	Password = 4,
	Search = 5,
	TelephoneNumber = 6,
	Url = 7,
	EVirtualKeyboardInputScope_MAX = 8,
};

enum class EGPUParticleCollisionEventLimit : uint8_t {
	OnlyOnFirstCollision = 0,
	OnlyOnFirstTwoCollisions = 1,
	Unlimited = 2,
	EGPUParticleCollisionEventLimit_MAX = 3,
};

enum class EMeshCameraFacingOptions : uint8_t {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13,
};

enum class EPawnActionEventType : uint8_t {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6,
};

enum class ECarouselPirateBodyshapeDirection : uint8_t {
	None = 0,
	N = 1,
	NW = 2,
	W = 3,
	SW = 4,
	S = 5,
	SE = 6,
	E = 7,
	NE = 8,
	ECarouselPirateBodyshapeDirection_MAX = 9,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class ERowBraking : uint8_t {
	None = 0,
	BrakeLeft = 1,
	BrakeRight = 2,
	BrakeBoth = 3,
	ERowBraking_MAX = 4,
};

enum class EWatercraftDespawnReason : uint8_t {
	Unknown = 0,
	Destroyed = 1,
	ExternalRequest = 2,
	Migration = 3,
	WorldEnding = 4,
	EWatercraftDespawnReason_MAX = 5,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EStaggerReason : uint8_t {
	Drunk = 0,
	Earthquake = 1,
	NumReasons = 2,
	EStaggerReason_MAX = 3,
};

enum class EHIKProperty : uint8_t {
	HIKProp_HIKForceActorSpaceId = 0,
	HIKProp_ScaleCompensationId = 1,
	HIKProp_MassCenterCompensationId = 2,
	HIKProp_AnkleHeightCompensationId = 3,
	HIKProp_AnkleProximityCompensationId = 4,
	HIKProp_HipsHeightCompensationId = 5,
	HIKProp_ReachActorLeftAnkleId = 6,
	HIKProp_ReachActorRightAnkleId = 7,
	HIKProp_ReachActorChestId = 8,
	HIKProp_ReachActorLeftWristId = 9,
	HIKProp_ReachActorRightWristId = 10,
	HIKProp_ReachActorLeftKneeId = 11,
	HIKProp_ReachActorRightKneeId = 12,
	HIKProp_ReachActorHeadId = 13,
	HIKProp_ReachActorLeftElbowId = 14,
	HIKProp_ReachActorRightElbowId = 15,
	HIKProp_ReachActorLeftAnkleRotationId = 16,
	HIKProp_ReachActorRightAnkleRotationId = 17,
	HIKProp_ReachActorHeadRotationId = 18,
	HIKProp_ReachActorLeftWristRotationId = 19,
	HIKProp_ReachActorRightWristRotationId = 20,
	HIKProp_ReachActorLeftFingerBaseId = 21,
	HIKProp_ReachActorRightFingerBaseId = 22,
	HIKProp_ReachActorLeftToesBaseId = 23,
	HIKProp_ReachActorRightToesBaseId = 24,
	HIKProp_ReachActorLeftFingerBaseRotationId = 25,
	HIKProp_ReachActorRightFingerBaseRotationId = 26,
	HIKProp_ReachActorLeftToesBaseRotationId = 27,
	HIKProp_ReachActorRightToesBaseRotationId = 28,
	HIKProp_ReachActorChestRotationId = 29,
	HIKProp_ReachActorLowerChestRotationId = 30,
	HIKProp_ReachActorLeftHandThumbId = 31,
	HIKProp_ReachActorLeftHandIndexId = 32,
	HIKProp_ReachActorLeftHandMiddleId = 33,
	HIKProp_ReachActorLeftHandRingId = 34,
	HIKProp_ReachActorLeftHandPinkyId = 35,
	HIKProp_ReachActorLeftHandExtraFingerId = 36,
	HIKProp_ReachActorRightHandThumbId = 37,
	HIKProp_ReachActorRightHandIndexId = 38,
	HIKProp_ReachActorRightHandMiddleId = 39,
	HIKProp_ReachActorRightHandRingId = 40,
	HIKProp_ReachActorRightHandPinkyId = 41,
	HIKProp_ReachActorRightHandExtraFingerId = 42,
	HIKProp_ReachActorLeftFootThumbId = 43,
	HIKProp_ReachActorLeftFootIndexId = 44,
	HIKProp_ReachActorLeftFootMiddleId = 45,
	HIKProp_ReachActorLeftFootRingId = 46,
	HIKProp_ReachActorLeftFootPinkyId = 47,
	HIKProp_ReachActorLeftFootExtraFingerId = 48,
	HIKProp_ReachActorRightFootThumbId = 49,
	HIKProp_ReachActorRightFootIndexId = 50,
	HIKProp_ReachActorRightFootMiddleId = 51,
	HIKProp_ReachActorRightFootRingId = 52,
	HIKProp_ReachActorRightFootPinkyId = 53,
	HIKProp_ReachActorRightFootExtraFingerId = 54,
	HIKProp_FootFloorContactId = 55,
	HIKProp_FootBottomToAnkleId = 56,
	HIKProp_FootBackToAnkleId = 57,
	HIKProp_FootMiddleToAnkleId = 58,
	HIKProp_FootFrontToMiddleId = 59,
	HIKProp_FootInToAnkleId = 60,
	HIKProp_FootOutToAnkleId = 61,
	HIKProp_HandFloorContactId = 62,
	HIKProp_HandBottomToWristId = 63,
	HIKProp_HandBackToWristId = 64,
	HIKProp_HandMiddleToWristId = 65,
	HIKProp_HandFrontToMiddleId = 66,
	HIKProp_HandInToWristId = 67,
	HIKProp_HandOutToWristId = 68,
	HIKProp_HandContactTypeId = 69,
	HIKProp_HandFingerContactId = 70,
	HIKProp_HandFingerContactModeId = 71,
	HIKProp_FootContactTypeId = 72,
	HIKProp_FootFingerContactId = 73,
	HIKProp_FootFingerContactModeId = 74,
	HIKProp_LeftUpLegRollId = 75,
	HIKProp_LeftLegRollId = 76,
	HIKProp_RightUpLegRollId = 77,
	HIKProp_RightLegRollId = 78,
	HIKProp_LeftArmRollId = 79,
	HIKProp_LeftForeArmRollId = 80,
	HIKProp_RightArmRollId = 81,
	HIKProp_RightForeArmRollId = 82,
	HIKProp_MirrorId = 83,
	HIKProp_LeftKneeKillPitchId = 84,
	HIKProp_RightKneeKillPitchId = 85,
	HIKProp_LeftElbowKillPitchId = 86,
	HIKProp_RightElbowKillPitchId = 87,
	HIKProp_CtrlPullLeftFootId = 88,
	HIKProp_CtrlPullRightFootId = 89,
	HIKProp_CtrlPullLeftHandId = 90,
	HIKProp_CtrlPullRightHandId = 91,
	HIKProp_CtrlPullHeadId = 92,
	HIKProp_CtrlPullLeftToeBaseId = 93,
	HIKProp_CtrlPullLeftKneeId = 94,
	HIKProp_CtrlPullRightToeBaseId = 95,
	HIKProp_CtrlPullRightKneeId = 96,
	HIKProp_CtrlPullLeftFingerBaseId = 97,
	HIKProp_CtrlPullLeftElbowId = 98,
	HIKProp_CtrlPullRightFingerBaseId = 99,
	HIKProp_CtrlPullRightElbowId = 100,
	HIKProp_CtrlChestPullLeftHandId = 101,
	HIKProp_CtrlChestPullRightHandId = 102,
	HIKProp_CtrlResistHipsPositionId = 103,
	HIKProp_CtrlEnforceGravityId = 104,
	HIKProp_CtrlResistHipsOrientationId = 105,
	HIKProp_CtrlResistChestPositionId = 106,
	HIKProp_CtrlResistChestOrientationId = 107,
	HIKProp_CtrlResistLeftCollarId = 108,
	HIKProp_CtrlResistRightCollarId = 109,
	HIKProp_CtrlResistLeftKneeId = 110,
	HIKProp_CtrlResistRightKneeId = 111,
	HIKProp_CtrlResistLeftElbowId = 112,
	HIKProp_CtrlResistRightElbowId = 113,
	HIKProp_CtrlSpineStiffnessId = 114,
	HIKProp_HipsTOffsetXId = 115,
	HIKProp_HipsTOffsetYId = 116,
	HIKProp_HipsTOffsetZId = 117,
	HIKProp_ChestTOffsetXId = 118,
	HIKProp_ChestTOffsetYId = 119,
	HIKProp_ChestTOffsetZId = 120,
	HIKProp_FootAutomaticToesId = 121,
	HIKProp_FootFloorPivotId = 122,
	HIKProp_PostureId = 123,
	HIKProp_HandAutomaticFingersId = 124,
	HIKProp_HandFloorPivotId = 125,
	HIKProp_CtrlNeckStiffnessId = 126,
	HIKProp_HipsTranslationModeId = 127,
	HIKProp_FingerSolvingId = 128,
	HIKProp_FootContactStiffnessId = 129,
	HIKProp_CtrlResistMaximumExtensionLeftKnee = 130,
	HIKProp_CtrlResistMaximumExtensionRightKnee = 131,
	HIKProp_CtrlResistMaximumExtensionLeftElbow = 132,
	HIKProp_CtrlResistMaximumExtensionRightElbow = 133,
	HIKProp_CtrlResistCompressionFactorLeftKnee = 134,
	HIKProp_CtrlResistCompressionFactorRightKnee = 135,
	HIKProp_CtrlResistCompressionFactorLeftElbow = 136,
	HIKProp_CtrlResistCompressionFactorRightElbow = 137,
	HIKProp_HandFingerContactRollStiffness = 138,
	HIKProp_FootFingerContactRollStiffness = 139,
	HIKProp_HandContactStiffness = 140,
	HIKProp_RollExtractionMode = 141,
	HIKProp_PullIterationCount = 142,
	HIKProp_LeftHandThumbTip = 143,
	HIKProp_LeftHandIndexTip = 144,
	HIKProp_LeftHandMiddleTip = 145,
	HIKProp_LeftHandRingTip = 146,
	HIKProp_LeftHandPinkyTip = 147,
	HIKProp_LeftHandExtraFingerTip = 148,
	HIKProp_RightHandThumbTip = 149,
	HIKProp_RightHandIndexTip = 150,
	HIKProp_RightHandMiddleTip = 151,
	HIKProp_RightHandRingTip = 152,
	HIKProp_RightHandPinkyTip = 153,
	HIKProp_RightHandExtraFingerTip = 154,
	HIKProp_LeftFootThumbTip = 155,
	HIKProp_LeftFootIndexTip = 156,
	HIKProp_LeftFootMiddleTip = 157,
	HIKProp_LeftFootRingTip = 158,
	HIKProp_LeftFootPinkyTip = 159,
	HIKProp_LeftFootExtraFingerTip = 160,
	HIKProp_RightFootThumbTip = 161,
	HIKProp_RightFootIndexTip = 162,
	HIKProp_RightFootMiddleTip = 163,
	HIKProp_RightFootRingTip = 164,
	HIKProp_RightFootPinkyTip = 165,
	HIKProp_RightFootExtraFingerTip = 166,
	HIKProp_RealisticShoulder = 167,
	HIKProp_LeftLegMaxExtensionAngle = 168,
	HIKProp_RightLegMaxExtensionAngle = 169,
	HIKProp_LeftArmMaxExtensionAngle = 170,
	HIKProp_RightArmMaxExtensionAngle = 171,
	HIKProp_ExtraCollarRatioId = 172,
	HIKProp_CollarStiffnessX = 173,
	HIKProp_CollarStiffnessY = 174,
	HIKProp_CollarStiffnessZ = 175,
	HIKProp_ReachActorLeftShoulderId = 176,
	HIKProp_ReachActorRightShoulderId = 177,
	HIKProp_FingerPropagationId = 178,
	HIKProp_RealisticLeftKneeSolvingId = 179,
	HIKProp_RealisticRightKneeSolvingId = 180,
	HIKProp_StretchStartArmsAndLegs = 181,
	HIKProp_StretchStopArmsAndLegs = 182,
	HIKProp_SnSScaleArmsAndLegs = 183,
	HIKProp_SnSReachLeftWrist = 184,
	HIKProp_SnSReachRightWrist = 185,
	HIKProp_SnSReachLeftAnkle = 186,
	HIKProp_SnSReachRightAnkle = 187,
	HIKProp_SnSScaleSpine = 188,
	HIKProp_SnSScaleSpineChildren = 189,
	HIKProp_SnSReachChestEnd = 190,
	HIKProp_SnSScaleNeck = 191,
	HIKProp_SnSReachHead = 192,
	HIKProp_LeftUpLegRollExId = 193,
	HIKProp_LeftLegRollExId = 194,
	HIKProp_RightUpLegRollExId = 195,
	HIKProp_RightLegRollExId = 196,
	HIKProp_LeftArmRollExId = 197,
	HIKProp_LeftForeArmRollExId = 198,
	HIKProp_RightArmRollExId = 199,
	HIKProp_RightForeArmRollExId = 200,
	HIKProp_TopSpineCorrectionId = 201,
	HIKProp_LowerSpineCorrectionId = 202,
	HIKProp_SnSSmoothReach = 203,
	HIKProp_LockXId = 204,
	HIKProp_LockYId = 205,
	HIKProp_LockZId = 206,
	HIKProp_RealisticArmSolvingId = 207,
	HIKProp_LastPropertyId = 208,
	HIKProp_MAX = 209,
};

enum class EFishingState : uint8_t {
	None = 0,
	Casting = 1,
	CastForwards = 2,
	CastSuccess = 3,
	CastFailed = 4,
	Fishing = 5,
	IntoFighting = 6,
	Fighting = 7,
	Success = 8,
	Failure = 9,
	EFishingState_MAX = 10,
};

enum class EGameplayEffectStackingDurationPolicy : uint8_t {
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EArcToTargetDirection : uint8_t {
	VelocityOrRotation = 0,
	VelocityOrRotation2D = 1,
	InversedVelocityOrRotation = 2,
	InversedVelocityOrRotation2D = 3,
	Up = 4,
	Down = 5,
	GoalDirection2D = 6,
	EArcToTargetDirection_MAX = 7,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	EWidgetDesignFlags_MAX = 3,
};

enum class EInteractionObject : uint8_t {
	None = 0,
	Shop = 1,
	Chest = 2,
	Barrel = 3,
	EInteractionObject_MAX = 4,
};

enum class EEncounterActorRemovedReason : uint8_t {
	Defeated = 0,
	Despawned = 1,
	Deleted = 2,
	EEncounterActorRemovedReason_MAX = 3,
};

enum class EQuestBookPageRenderingMode : uint8_t {
	NoPagesRendered = 0,
	DrawLeftPageAsCurrentOnly = 1,
	DrawLeftPageAsPreviousAndRightPageAsCurrent = 2,
	DrawLeftPageAsCurrentAndRightPageAsNext = 3,
	EQuestBookPageRenderingMode_MAX = 4,
};

enum class EPiratePreviewRTTState : uint8_t {
	Uninitialized = 0,
	Busy = 1,
	ReadyToCapture = 2,
	CompletedCapture = 3,
	EPiratePreviewRTTState_MAX = 4,
};

enum class ETreasureMapHorizontalAlignment : uint8_t {
	Left = 0,
	Centre = 1,
	Right = 2,
	ETreasureMapHorizontalAlignment_MAX = 3,
};

enum class EInventoryManipulatorAutoEquipPolicy : uint8_t {
	LastIn = 0,
	MatchingItemDescIfPossible = 1,
	RawMeatLast = 2,
	EInventoryManipulatorAutoEquipPolicy_MAX = 3,
};

enum class EAllianceStatus : uint8_t {
	IsInAlliance = 0,
	IsNotInAlliance = 1,
	EAllianceStatus_MAX = 2,
};

enum class EAthenaAnimationPetSpawnState : uint8_t {
	Null = 0,
	BeingHeld = 1,
	Roaming = 2,
	EAthenaAnimationPetSpawnState_MAX = 3,
};

enum class EWaterHeightType : uint8_t {
	Dynamic = 0,
	Static = 1,
	EWaterHeightType_MAX = 2,
};

enum class EPointSelectionMethod : uint8_t {
	GetRandom = 0,
	GetFirst = 1,
	EPointSelectionMethod_MAX = 2,
};

enum class EVoyageDisplayState : uint8_t {
	Default = 0,
	Proposed = 1,
	EVoyageDisplayState_MAX = 2,
};

enum class EIPGTestEnum : uint8_t {
	RANDOM = 0,
	RANDOM_OR_NONE = 1,
	EIPGTestEnum_MAX = 2,
};

enum class EAnimNotifyUnderwaterMode : uint8_t {
	AutoDetect = 0,
	AlwaysUnder = 1,
	AlwaysAbove = 2,
	EAnimNotifyUnderwaterMode_MAX = 3,
};

enum class EMeleeWeaponMovementSpeed : uint8_t {
	Default = 0,
	SlightlySlowed = 1,
	Slowed = 2,
	EMeleeWeaponMovementSpeed_MAX = 3,
};

enum class EWalletCurrencyId : uint8_t {
	Undefined = 0,
	Gold = 1,
	WaywardTokens = 2,
	Premium = 3,
	EWalletCurrencyId_MAX = 4,
};

enum class EPossessionsChestType : uint8_t {
	Unknown = 0,
	EquipmentChest = 1,
	ClothingChest = 2,
	VanityChest = 3,
	ArmoryChest = 4,
	ShipCustomizationChest = 5,
	ShipFlagCustomizationChest = 6,
	PetChest = 7,
	EPossessionsChestType_MAX = 8,
};

enum class EPlayerAbandonedReason : uint8_t {
	None = 0,
	NoCrewShip = 1,
	FarFromShipAndOnLand = 2,
	FarFromShipInWater = 3,
	OnShip = 4,
	CloseEnoughToCrewShip = 5,
	OnWatercraft = 6,
	CloseEnoughToWatercraft = 7,
	InTheDeepSea = 8,
	EPlayerAbandonedReason_MAX = 9,
};

enum class EDOFMode : uint8_t {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	None = 5,
	EDOFMode_MAX = 6,
};

enum class EItemBlockingSubState : uint8_t {
	None = 0,
	Main = 1,
	Feedback = 2,
	InFeedback = 3,
	EItemBlockingSubState_MAX = 4,
};

enum class EShipPartCustomizationState : uint8_t {
	Idle = 0,
	SearchingForPart = 1,
	CustomizingPart = 2,
	RegisteringPart = 3,
	EShipPartCustomizationState_MAX = 4,
};

enum class EDebugComponentMessage : uint8_t {
	EnableExtendedView = 0,
	DisableExtendedView = 1,
	ActivateReplication = 2,
	DeactivateReplilcation = 3,
	ActivateDataView = 4,
	DeactivateDataView = 5,
	SetMultipleDataViews = 6,
	EDebugComponentMessage_MAX = 7,
};

enum class EKrakenTentacleBehaviourDamageActions : uint8_t {
	StayActive = 0,
	MoveActive = 1,
	FleeInactive = 2,
	EKrakenTentacleBehaviourDamageActions_MAX = 3,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class ETooltipSpinnerType : uint8_t {
	None = 0,
	Progress = 1,
	ETooltipSpinnerType_MAX = 2,
};

enum class EAshCloudState : uint8_t {
	Spawning = 0,
	Active = 1,
	Dissipating = 2,
	EAshCloudState_MAX = 3,
};

enum class EMouseCursor : uint8_t {
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14,
};

enum class EHIKLookAtLimits : uint8_t {
	EHIKLookAtLimits_None = 0,
	EHIKLookAtLimits_Clamp = 1,
	EHIKLookAtLimits_Disable = 2,
	EHIKLookAtLimits_MAX = 3,
};

enum class EShipCurseTag : uint8_t {
	None = 0,
	Ballast = 1,
	Barrel = 2,
	Capstan = 3,
	Helm = 4,
	Rigging = 5,
	Peace = 6,
	EShipCurseTag_MAX = 7,
};

enum class EIngestionState : uint8_t {
	Idle = 0,
	InToIngestion = 1,
	OutOfIngestion = 2,
	EIngestionState_MAX = 3,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EStunnedActionStateDurationType : uint8_t {
	Definite = 0,
	Indefinite = 1,
	EStunnedActionStateDurationType_MAX = 2,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class ECurseTag : uint8_t {
	None = 0,
	ToggleInteractionsForCapstan = 1,
	ToggleInteractionsForShipStorageContainers = 2,
	ToggleInteractionsForRigging = 3,
	ToggleInteractionsForShipCannons = 4,
	ToggleLockOnWheel = 5,
	ECurseTag_MAX = 6,
};

enum class EShelterUpdateOption : uint8_t {
	Never = 0,
	OnStartUp = 1,
	WithinRainZones = 2,
	Always = 3,
	EShelterUpdateOption_MAX = 4,
};

enum class ERespawnPointOrientation : uint8_t {
	None = 0,
	North = 1,
	South = 2,
	West = 3,
	East = 4,
	Outward = 5,
	Inward = 6,
	Random = 7,
	ERespawnPointOrientation_MAX = 8,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
	EAIRequestPriority_MAX = 6,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EPlayerCurseTag : uint8_t {
	None = 0,
	Limping = 1,
	Poisoned = 2,
	Drunk = 3,
	Silenced = 4,
	Dancing = 5,
	Sleeping = 6,
	Vomit = 7,
	EPlayerCurseTag_MAX = 8,
};

enum class EWieldableItemVisibilityReason : uint8_t {
	Animation = 0,
	Interpolation = 1,
	BlocksView = 2,
	EWieldableItemVisibilityReason_MAX = 3,
};

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class ECookingSmokeFeedbackLevel : uint8_t {
	NotCooking = 0,
	Raw = 1,
	CookedWarning = 2,
	Cooked = 3,
	BurnedWarning = 4,
	Burned = 5,
	ECookingSmokeFeedbackLevel_MAX = 6,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	RandomFromAllMatching = 4,
	EEnvQueryRunMode_MAX = 5,
};

enum class EThrowableLiquidType : uint8_t {
	Empty = 0,
	Water = 1,
	Vomit = 2,
	BoilingWater = 3,
	Total = 4,
	EThrowableLiquidType_MAX = 5,
};

enum class EAthenaAISpawnType : uint8_t {
	SpawnOnLand = 0,
	SpawnOnShip = 1,
	SpawnSummoned = 2,
	SpawnBoarding = 3,
	Num = 4,
	EAthenaAISpawnType_MAX = 5,
};

enum class EEmoteSequenceType : uint8_t {
	Continuous = 0,
	OneShot = 1,
	EEmoteSequenceType_MAX = 2,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	EMovieSceneCompletionMode_MAX = 2,
};

enum class ENotificationType : uint8_t {
	Chat = 0,
	Server = 1,
	FormattedChat = 2,
	STTChat = 3,
	EmoteDescription = 4,
	ENotificationType_MAX = 5,
};

enum class EActorMetricsType : uint8_t {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3,
};

enum class ENPCIdleVariantType : uint8_t {
	Standard = 0,
	Inactive = 1,
	Interact = 2,
	ENPCIdleVariantType_MAX = 3,
};

enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6,
};

enum class EDecalBlendMode : uint8_t {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_Wet = 12,
	DBM_MAX = 13,
};

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class EFaunaCratedState : uint8_t {
	NotInCrate = 0,
	InProxyCrate = 1,
	InWieldedCrate = 2,
	EFaunaCratedState_MAX = 3,
};

enum class ECharacterSocketCollisionTraceType : uint8_t {
	WorldUp = 0,
	WorldDown = 1,
	WorldLeft = 2,
	WorldRight = 3,
	TravelForwards = 4,
	TravelBackwards = 5,
	ECharacterSocketCollisionTraceType_MAX = 6,
};

enum class EFadeInOnStart : uint8_t {
	FadeIn = 0,
	FadeOut = 1,
	None = 2,
	EFadeInOnStart_MAX = 3,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class EDisableShadowMapMethod : uint8_t {
	DSM_None = 0,
	DSM_DisableLast = 1,
	DSM_DisableThirdSecond = 2,
	DSM_DisableAll = 3,
	DSM_MAX = 4,
};

enum class EItemLifetimeManagement : uint8_t {
	Automatic = 0,
	Manual = 1,
	EItemLifetimeManagement_MAX = 2,
};

enum class ESimulationQuery : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	AnyOverlap = 2,
	ESimulationQuery_MAX = 3,
};

enum class EProjectileFiredFrom : uint8_t {
	Cannon = 0,
	Character = 1,
	DeepSeaCannon = 2,
	DeepSeaCharacter = 3,
	RowboatCannon = 4,
	EProjectileFiredFrom_MAX = 5,
};

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
	EPawnActionAbortState_MAX = 6,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class EJsonTestEnum : uint8_t {
	Value0 = 0,
	Value1 = 1,
	EJsonTestEnum_MAX = 2,
};

enum class EWieldAnimationGraph : uint8_t {
	ThirdPerson = 0,
	FirstPerson = 1,
	EWieldAnimationGraph_MAX = 2,
};

enum class EStatusComparisonMode : uint8_t {
	Ordered = 0,
	Unordered = 1,
	Partial = 2,
	Any = 3,
	EStatusComparisonMode_MAX = 4,
};

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class EFlameOfFateType : uint8_t {
	Default = 0,
	Cursed = 1,
	DiedByShark = 2,
	DiedByVolcano = 3,
	DiedBySkeleton = 4,
	DiedByLightning = 5,
	DiedByVenom = 6,
	DiedByPlayer = 7,
	MAX = 8,
	EFlameOfFateType_MAX = 9,
};

enum class EStatusType : uint8_t {
	DontCare = 0,
	Yes = 1,
	No = 2,
	EStatusType_MAX = 3,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
};

enum class EMaterialShadingModel : uint8_t {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_MAX = 7,
};

enum class EInteractionWithKillPlane : uint8_t {
	None = 0,
	KillOnFrontOfPlanes = 1,
	KillOnBackOfPlanes = 2,
	CollideWithFront = 3,
	KillOnIntersectionPlanes = 4,
	EInteractionWithKillPlane_MAX = 5,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class EPremiumStoreLandingPageItemType : uint8_t {
	Bundle = 0,
	Set = 1,
	Cards = 2,
	Item = 3,
	EPremiumStoreLandingPageItemType_MAX = 4,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EAIDialogueState : uint8_t {
	Inactive = 0,
	Passive = 1,
	Alerted = 2,
	Dead = 3,
	EAIDialogueState_MAX = 4,
};

enum class EQuestPoolSelectionMethod : uint8_t {
	Sequential = 0,
	Random = 1,
	EQuestPoolSelectionMethod_MAX = 2,
};

enum class EPirateBakeFlags : uint8_t {
	None = 0,
	FirstPerson = 1,
	NoObjectFading = 2,
	NoLODs = 3,
	StripTopLOD = 4,
	KeepCPUData = 5,
	DiscardImmediately = 6,
	HighPriority = 7,
	EPirateBakeFlags_MAX = 8,
};

enum class EActorSpawnRestrictions : uint8_t {
	ServerOnly = 0,
	ClientOnly = 1,
	ServerAndClient = 2,
	SpawnRestrictionMax = 3,
	EActorSpawnRestrictions_MAX = 4,
};

enum class ETinySharkState : uint8_t {
	Inactive = 0,
	Spawning = 1,
	Active = 2,
	Defeated = 3,
	Despawning = 4,
	ETinySharkState_MAX = 5,
};

enum class ESwimAttackableType : uint8_t {
	TakesDamage = 0,
	SmallItem = 1,
	LargeItem = 2,
	ESwimAttackableType_MAX = 3,
};

enum class ECrewSpawnState : uint8_t {
	Invalid = 0,
	Onboarding = 1,
	AtDock = 2,
	OnShip = 3,
	AtSinkLocation = 4,
	AtMermaid = 5,
	InBrig = 6,
	InHideout = 7,
	InContestTavern = 8,
	AtProgressionLocation = 9,
	ECrewSpawnState_MAX = 10,
};

enum class EDragPivot : uint8_t {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10,
};

enum class EGameplayEffectMagnitudeCalculation : uint8_t {
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EContestState : uint8_t {
	Idle = 0,
	Staging = 1,
	Contest = 2,
	PostContest = 3,
	Reward = 4,
	EContestState_MAX = 5,
};

enum class EDominanceGroup : uint8_t {
	DominanceGroup_1 = 0,
	DominanceGroup_2 = 1,
	DominanceGroup_3 = 2,
	DominanceGroup_4 = 3,
	DominanceGroup_5 = 4,
	DominanceGroup_6 = 5,
	DominanceGroup_7 = 6,
	DominanceGroup_8 = 7,
	DominanceGroup_9 = 8,
	DominanceGroup_10 = 9,
	DominanceGroup_11 = 10,
	DominanceGroup_12 = 11,
	DominanceGroup_13 = 12,
	DominanceGroup_14 = 13,
	DominanceGroup_15 = 14,
	DominanceGroup_16 = 15,
	DominanceGroup_17 = 16,
	DominanceGroup_18 = 17,
	DominanceGroup_19 = 18,
	DominanceGroup_20 = 19,
	DominanceGroup_21 = 20,
	DominanceGroup_22 = 21,
	DominanceGroup_23 = 22,
	DominanceGroup_24 = 23,
	DominanceGroup_25 = 24,
	DominanceGroup_26 = 25,
	DominanceGroup_27 = 26,
	DominanceGroup_28 = 27,
	DominanceGroup_29 = 28,
	DominanceGroup_30 = 29,
	DominanceGroup_31 = 30,
	DominanceGroup_32 = 31,
	DominanceGroup_Max = 32,
};

enum class ECharacterIKLimb : uint8_t {
	None = 0,
	LeftHand = 1,
	RightHand = 2,
	LeftFoot = 3,
	RightFoot = 4,
	ECharacterIKLimb_MAX = 5,
};

enum class EInteractableGrammaticalGender : uint8_t {
	Default = 0,
	Masculine = 1,
	Feminine = 2,
	EInteractableGrammaticalGender_MAX = 3,
};

enum class EItemUseSpeed : uint8_t {
	Default = 0,
	Custom_2 = 1,
	Custom_3 = 2,
	EItemUseSpeed_MAX = 3,
};

enum class EAttributeBasedFloatCalculationType : uint8_t {
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType_MAX = 3,
};

enum class EDragCoefficientGroupName : uint8_t {
	DragCoefficientGroupB = 0,
	DragCoefficientGroupC = 1,
	DragCoefficientGroupD = 2,
	DragCoefficientGroupE = 3,
	DragCoefficientGroupReplacement = 4,
	DragCoefficientGroup_MAX = 5,
	EDragCoefficientGroupName_MAX = 6,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	Constant = 3,
	EEnvTestScoreEquation_MAX = 4,
};

enum class EAthenaAnimationJumpingState : uint8_t {
	None = 0,
	Jumping = 1,
	Falling = 2,
	Impact = 3,
	JumpFinished = 4,
	PreImpact = 5,
	EAthenaAnimationJumpingState_MAX = 6,
};

enum class EBlackboardValueComparisonType : uint8_t {
	NearlyEqual = 0,
	NotNearlyEqual = 1,
	GreaterThan = 2,
	LessThan = 3,
	GreaterThanEquals = 4,
	LessThanEquals = 5,
	EBlackboardValueComparisonType_MAX = 6,
};

enum class ELeftStickScalarReason : uint8_t {
	Limping = 0,
	Pacing = 1,
	NumReasons = 2,
	ELeftStickScalarReason_MAX = 3,
};

enum class EComplexOneShotSubState : uint8_t {
	WarmUp = 0,
	WarmUpFromBlock = 1,
	Action = 2,
	Recover = 3,
	HeavyAttackStun = 4,
	EComplexOneShotSubState_MAX = 5,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class EShipBuilderState : uint8_t {
	Idle = 0,
	LoadingTemplate = 1,
	CustomizingParts = 2,
	EShipBuilderState_MAX = 3,
};

enum class EItemRepresentation : uint8_t {
	None = 0,
	Wielded = 1,
	WorldProxy = 2,
	EItemRepresentation_MAX = 3,
};

enum class ETransientCampfireStateChange : uint8_t {
	Extinguished = 0,
	WoodAdded = 1,
	Ignited = 2,
	Stoked = 3,
	BurnedDown = 4,
	ETransientCampfireStateChange_MAX = 5,
};

enum class ENamedPointCollectionSearchTag : uint8_t {
	None = 0,
	PirateLegendsVoyage = 1,
	PirateLegends_HauntedFort = 2,
	PirateLegends_HauntedIsland = 3,
	PirateLegends_LyingMap = 4,
	PirateLegends_PictureMap = 5,
	PirateLegends_ShipwreckGraveyard = 6,
	PirateLegends_ZoomMap = 7,
	ENamedPointCollectionSearchTag_MAX = 8,
};

enum class EEnvTestWeight : uint8_t {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class EShipBuilderErrorCode : uint8_t {
	AlreadyInProgress = 0,
	AssetLoadingFailure = 1,
	FailedToSpawnActor = 2,
	FailedToBuildParts = 3,
	InvalidParameter = 4,
	InvalidShipDesc = 5,
	Cancelled = 6,
	SpawnedActorWasNotAShip = 7,
	EShipBuilderErrorCode_MAX = 8,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

enum class EOcclusionTypes : uint8_t {
	Visible = 0,
	Occluded = 1,
	Unknown = 2,
	MAX = 3,
	EOcclusionTypes_MAX = 4,
};

enum class EFogState : uint8_t {
	NotSetUpYet = 0,
	SetUp = 1,
	FadingIn = 2,
	Active = 3,
	FadingOut = 4,
	EFogState_MAX = 5,
};

enum class EGamepadBehaviourOnFocusLost : uint8_t {
	ResetState = 0,
	UseCurrentState = 1,
	UseStateBeforeReset = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3,
};

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EAIShipPlayerTrackerType : uint8_t {
	DefaultRadiusTracker = 0,
	CannonRadiusTracker = 1,
	OnShipTracker = 2,
	BelowDeckOfShipTracker = 3,
	EAIShipPlayerTrackerType_MAX = 4,
};

enum class EMeshComponentUpdateFlag : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickPoseWhenRendered = 2,
	OnlyIfLODChanged = 3,
	EMeshComponentUpdateFlag_MAX = 4,
};

enum class ESirenEncounterState : uint8_t {
	Active = 0,
	Inactive = 1,
	ESirenEncounterState_MAX = 2,
};

enum class EIKSolverType : uint8_t {
	NormalSolver = 0,
	LODSolver = 1,
	EIKSolverType_MAX = 2,
};

enum class ESwingDoorState : uint8_t {
	Closing = 0,
	Closed = 1,
	Opening = 2,
	Open = 3,
	ESwingDoorState_MAX = 4,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EWieldableItemBlockingAnimState : uint8_t {
	Main = 0,
	Feedback = 1,
	EWieldableItemBlockingAnimState_MAX = 2,
};

enum class EBootyStorageMaterialState : uint8_t {
	Empty = 0,
	Partial = 1,
	Full = 2,
	EBootyStorageMaterialState_MAX = 3,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class ELockAnimationState : uint8_t {
	None = 0,
	InterpolatingIn = 1,
	Unlocking = 2,
	ELockAnimationState_MAX = 3,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

enum class EFishingMiniGameState : uint8_t {
	Battling = 0,
	Recovering = 1,
	EFishingMiniGameState_MAX = 2,
};

enum class EServiceHttpMetricsLevel : uint8_t {
	None = 0,
	Failed = 1,
	FailedOrAborted = 2,
	FailedOrAbortedOrNonSuccess = 3,
	All = 4,
	EServiceHttpMetricsLevel_MAX = 5,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_ResidentMipsUnpadded = 3,
	TMC_MAX = 4,
};

enum class EActionStatePriority : uint8_t {
	Overrides = 0,
	Overriden = 1,
	EActionStatePriority_MAX = 2,
};

enum class EEmitterQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEmitterQuality_MAX = 3,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EMechanismActionState : uint8_t {
	Active = 0,
	Inactive = 1,
	EMechanismActionState_MAX = 2,
};

enum class EInterpolationBlend : uint8_t {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7,
	EInterpolationBlend_MAX = 8,
};

enum class EIfExpressionCondition : uint8_t {
	Equal = 0,
	Greater = 1,
	GreaterOrEqual = 2,
	Less = 3,
	LessOrEqual = 4,
	EIfExpressionCondition_MAX = 5,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

enum class EShopOfferAvailability : uint8_t {
	Available = 0,
	AlreadyOwned = 1,
	Locked = 2,
	Info = 3,
	Hide = 4,
	EShopOfferAvailability_MAX = 5,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class ESessionGrouping : uint8_t {
	Invalid = 0,
	Default = 1,
	MediumLargeShip = 2,
	Max = 3,
	ESessionGrouping_MAX = 4,
};

enum class ERiddleActions : uint8_t {
	RaiseLanternAnyone = 0,
	PlayAnyInstrumentAnyone = 1,
	Dig = 2,
	LookAtMap = 3,
	NumActions = 4,
	ERiddleActions_MAX = 5,
};

enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5,
};

enum class ETimedDoorState : uint8_t {
	Lowering = 0,
	Closed = 1,
	Opening = 2,
	Jammed = 3,
	ETimedDoorState_MAX = 4,
};

enum class EMechanismAnimationEventType : uint8_t {
	OneShot = 0,
	Continuous = 1,
	EMechanismAnimationEventType_MAX = 2,
};

enum class ECommodityDemand : uint8_t {
	None = 0,
	Low = 1,
	Normal = 2,
	High = 3,
	ECommodityDemand_MAX = 4,
};

enum class EMuteState : uint8_t {
	NotMuted = 0,
	VoiceMuted = 1,
	ChatMuted = 2,
	VoiceAndChatMuted = 3,
	NonVerbalMuted = 4,
	VoiceAndNonVerbalMuted = 5,
	ChatAndNonVerbalMuted = 6,
	AllMuted = 7,
	EMuteState_MAX = 8,
};

enum class EPlayerStatsType : uint8_t {
	Int = 0,
	Double = 1,
	EPlayerStatsType_MAX = 2,
};

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_MAX = 4,
};

enum class EFaunaInWaterState : uint8_t {
	NotInWater = 0,
	FloatingOnSurface = 1,
	Underwater = 2,
	EFaunaInWaterState_MAX = 3,
};

enum class EQuestMapIcon : uint8_t {
	Unknown = 0,
	XMarksTheSpot = 1,
	Riddle = 2,
	Bounty = 3,
	Merchant = 4,
	MessageInABottle = 5,
	CargoRun = 6,
	SkeletonOrder = 7,
	Emissary = 8,
	Wayfinder = 9,
	MerchantClue = 10,
	Fishing = 11,
	TreasureBuriedByYou = 12,
	TreasureBuriedByOther = 13,
	EQuestMapIcon_MAX = 14,
};

enum class EBuoyantObjectState : uint8_t {
	Rising = 0,
	Floating = 1,
	Sinking = 2,
	Disappearing = 3,
	EBuoyantObjectState_MAX = 4,
};

enum class EPartyReservationResult : uint8_t {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_Banned = 10,
	ReservationRequestCanceled = 11,
	ReservationInvalid = 12,
	BadSessionId = 13,
	EPartyReservationResult_MAX = 14,
};

enum class ESpeedTreeWindType : uint8_t {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7,
};

enum class EGroupScales : uint8_t {
	GroupAScale = 0,
	GroupBScale = 1,
	GroupCScale = 2,
	GroupDScale = 3,
	GroupEScale = 4,
	GroupReplacementScale = 5,
	GroupScale_MAX = 6,
	EGroupScales_MAX = 7,
};

enum class EOnlineStatsSuccess : uint8_t {
	Success = 0,
	UnknownError = 1,
	InvalidStatId = 2,
	InvalidArgument = 3,
	InvalidUser = 4,
	EOnlineStatsSuccess_MAX = 5,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	PreciseTap = 1,
	EButtonTouchMethod_MAX = 2,
};

enum class EGameEventStatus : uint8_t {
	Failed = 0,
	Triggered = 1,
	Complete = 2,
	EGameEventStatus_MAX = 3,
};

enum class EMastDamageState : uint8_t {
	Intact = 0,
	Secured = 1,
	Upright = 2,
	FreeToMove = 3,
	EMastDamageState_MAX = 4,
};

enum class EFishSize : uint8_t {
	Medium = 0,
	Large = 1,
	EFishSize_MAX = 2,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EPurchaseOfferFailureReason : uint8_t {
	ServiceUnavailable = 0,
	OfferUnavailable = 1,
	InsufficientFunds = 2,
	EPurchaseOfferFailureReason_MAX = 3,
};

enum class ERewardDestinationType : uint8_t {
	Player = 0,
	Crew = 1,
	Alliance = 2,
	ERewardDestinationType_MAX = 3,
};

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class EContainerType : uint8_t {
	None = 0,
	Bucket = 1,
	Stomach = 2,
	Kraken = 3,
	Total = 4,
	EContainerType_MAX = 5,
};

enum class ENPCCustomAnimationState : uint8_t {
	None = 0,
	InOneShot = 1,
	InContinuousIn = 2,
	InContinuousLoopA = 3,
	InContinuousLoopB = 4,
	InContinuousOut = 5,
	ENPCCustomAnimationState_MAX = 6,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class EArithmeticKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6,
};

enum class EHarpoonLauncherReelingState : uint8_t {
	NotReeling = 0,
	ReelingIn = 1,
	ReelingLocked = 2,
	EHarpoonLauncherReelingState_MAX = 3,
};

enum class EStunAnimationType : uint8_t {
	None = 0,
	Normal = 1,
	ShadowSkeletonLightExposure = 2,
	SkeletonDrunk = 3,
	SkeletonDance = 4,
	SkeletonSleep = 5,
	EStunAnimationType_MAX = 6,
};

enum class EQuestResultFromDig : uint8_t {
	None = 0,
	Chest = 1,
	QuestItem = 2,
	EQuestResultFromDig_MAX = 3,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EWwiseEventDurationType : uint8_t {
	OneShot = 0,
	Mixed = 1,
	Infinite = 2,
	Unknown = 3,
	EWwiseEventDurationType_MAX = 4,
};

enum class DrowningState : uint8_t {
	NotDrowning = 0,
	Drowning = 1,
	Gulping = 2,
	ResetDrowning = 3,
	DrowningState_MAX = 4,
};

enum class TextureGroup : uint8_t {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_RareLoDTest = 29,
	TEXTUREGROUP_Unassigned = 30,
	TEXTUREGROUP_Animation = 31,
	TEXTUREGROUP_Coherent = 32,
	TEXTUREGROUP_MippedUI = 33,
	TEXTUREGROUP_LoadingScreen = 34,
	TEXTUREGROUP_MAX = 35,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class ETinySharkActiveState : uint8_t {
	TrackingTarget = 0,
	WaitingForTarget = 1,
	RepositionToTarget = 2,
	WaitingForRespawn = 3,
	ETinySharkActiveState_MAX = 4,
};

enum class EIPGSlotType : uint8_t {
	DEFAULT = 0,
	DYNAMIC = 1,
	EIPGSlotType_MAX = 2,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EDecompressionType : uint8_t {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class EArmOverlayState : uint8_t {
	Idle = 0,
	Locomotion = 1,
	Swimming = 2,
	Turning = 3,
	JumpingStart = 4,
	JumpingCycle = 5,
	JumpingPreImpact = 6,
	JumpingLandLight = 7,
	Equipping = 8,
	UnEquipping = 9,
	OneShotAction = 10,
	ContinuousActionIn = 11,
	ContinuousActionCycle = 12,
	ContinuousActionOut = 13,
	ContinuousActionLocomotion = 14,
	ContinuousActionJumpStart = 15,
	ContinuousActionJumpCycle = 16,
	ContinuousActionJumpPreImpact = 17,
	ContinuousActionJumpLandLight = 18,
	ContinuousActionSwimming = 19,
	ComplexOneShotWarmUp = 20,
	ComplexOneShotAction = 21,
	ComplexOneShotRecover = 22,
	BlockingInto = 23,
	BlockingLocomotion = 24,
	BlockingFeedbackA = 25,
	BlockingFeedbackB = 26,
	BlockingOutOf = 27,
	Force_FullBody = 28,
	Force_UpperBody = 29,
	Force_2H = 30,
	EArmOverlayState_MAX = 31,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EBountySpawnerAudioState : uint8_t {
	None = 0,
	Action = 1,
	Anticipation = 2,
	EBountySpawnerAudioState_MAX = 3,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class EInteractionBlockReason : uint8_t {
	None = 0,
	Radial = 1,
	Other = 2,
	EInteractionBlockReason_MAX = 3,
};

enum class ESprintLockReason : uint8_t {
	WieldedItem = 0,
	WieldedItemAction = 1,
	Environment = 2,
	ESprintLockReason_MAX = 3,
};

enum class ERotationAboutArbitraryAxisGroupName : uint8_t {
	RotationAboutArbitraryAxisGroupB = 0,
	RotationAboutArbitraryAxisGroupC = 1,
	RotationAboutArbitraryAxisGroupD = 2,
	RotationAboutArbitraryAxisGroupE = 3,
	RotationAboutArbitraryAxisGroupReplacement = 4,
	RotationAboutArbitraryAxisGroup_MAX = 5,
	ERotationAboutArbitraryAxisGroupName_MAX = 6,
};

enum class EAISpawnerShutdownPolicy : uint8_t {
	SpawnerShutsDownWhenPlayersNoLongerTracked = 0,
	SpawnerShutsDownWhenStepEnd = 1,
	EAISpawnerShutdownPolicy_MAX = 2,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MAX = 3,
};

enum class EBootyTypes : uint8_t {
	Invalid = 0,
	TreasureChest = 1,
	BountySkull = 2,
	MerchantCrate = 3,
	GunpowderBarrel = 4,
	TreasureArtifact = 5,
	AncientChest = 6,
	PirateLordBooty = 7,
	BoxOfSecrets = 8,
	CargoRunCrate = 9,
	MermaidGem = 10,
	CollectorsChest = 11,
	DroppedPouch = 12,
	FishedItem = 13,
	Food = 14,
	TaleArtifact = 15,
	CampaignBooty = 16,
	ReapersBooty = 17,
	ReapersBounty = 18,
	RitualSkull = 19,
	AshenBooty = 20,
	AshenGift = 21,
	EmissaryFlotsam = 22,
	GoldMound = 23,
	MerchantManifest = 24,
	BreathOfTheSea = 25,
	NonSellable = 26,
	EBootyTypes_MAX = 27,
};

enum class EDiggingState : uint8_t {
	Initial = 0,
	BeingDug = 1,
	WaitingForPickup = 2,
	EDiggingState_MAX = 3,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class ERiddleActionLocationOffsets : uint8_t {
	PerformActionAtLocation = 0,
	PerformActionAtCompassDirectionOffsetFromLocation = 1,
	ERiddleActionLocationOffsets_MAX = 2,
};

enum class EWieldablePetDropRequestReason : uint8_t {
	None = 0,
	Submerged = 1,
	Escaped = 2,
	EWieldablePetDropRequestReason_MAX = 3,
};

enum class EPurchaseRequestFailureReason : uint8_t {
	ServiceUnavailable = 0,
	OfferUnavailable = 1,
	InsufficientFunds = 2,
	RequestTimeout = 3,
	PurchaseAlreadyPending = 4,
	EPurchaseRequestFailureReason_MAX = 5,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
	EAIOptionFlag_MAX = 4,
};

enum class EMeleeAttackMoveCorrectionReason : uint8_t {
	NotSpecified = 0,
	SpedUpTooSoon = 1,
	EMeleeAttackMoveCorrectionReason_MAX = 2,
};

enum class ETeleportActionStateStage : uint8_t {
	Uninitialised = 0,
	Started = 1,
	CharacterFadeCompleteCondition = 2,
	PreTeleport = 3,
	CrewShipSpawnedIfPlayerIsInBrigCondition = 4,
	TeleportCompleteCondition = 5,
	AsyncLoadCompleteCondition = 6,
	ActorsRelevantSpawnCondition = 7,
	PlayerCreatedOnClientSpawnCondition = 8,
	PlayerLoadoutReceivedSpawnCondition = 9,
	PlayerEntitlementReceivedSpawnCondition = 10,
	ClientConditionsCompleteCondition = 11,
	CharacterReadyForContestRespawnCondition = 12,
	PostTeleport = 13,
	Ended = 14,
	ETeleportActionStateStage_MAX = 15,
};

enum class EEventRunLocation : uint8_t {
	Client = 0,
	Server = 1,
	ClientAndServer = 2,
	EEventRunLocation_MAX = 3,
};

enum class ETextureSourceFormat : uint8_t {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_RGBA32F = 8,
	TSF_MAX = 9,
};

enum class EIfExpressionAttribute : uint8_t {
	Default = 0,
	Branch = 1,
	Flatten = 2,
	EIfExpressionAttribute_MAX = 3,
};

enum class EPlayerMusicState : uint8_t {
	InCave = 0,
	InPuzzleVault = 1,
	InsideShip = 2,
	Fishing = 3,
	KrakenEncounter = 4,
	MusicZone_PriorityHigh = 5,
	MusicZone_PriorityMed = 6,
	MusicZone_PriorityLow = 7,
	NoMusicState = 8,
	OnBountyQuestPreAction = 9,
	OnBountyQuestAction = 10,
	OnBountyFortAnticipation = 11,
	OnBountyFortPreAction = 12,
	OnBountyFortAction = 13,
	OnIsland = 14,
	OnIslandNearCompany = 15,
	OutAtSea = 16,
	ServerMigration = 17,
	Shipwreck = 18,
	SkellyShipEncounter = 19,
	SkellyShipEmergentEncounter = 20,
	TinySharkEncounter = 21,
	UnderWater = 22,
	InDeepSeaRegion = 23,
	EPlayerMusicState_MAX = 24,
};

enum class EHIKFeetContactType : uint8_t {
	HIKFeetContactType_Normal = 0,
	HIKFeetContactType_Ankle = 1,
	HIKFeetContactType_ToeBase = 2,
	HIKFeetContactType_Hoof = 3,
	HIKFeetContactType_MAX = 4,
};

enum class EFishingRodBattlingState : uint8_t {
	NotBattling = 0,
	Battling_Tiring = 1,
	Battling_NotTiring = 2,
	Battling_Tired = 3,
	EFishingRodBattlingState_MAX = 4,
};

enum class ERiddleLocations : uint8_t {
	NotOnIsland = 0,
	UniqueNonVagueLandmark = 1,
	UniqueVagueLandmark = 2,
	NonUniqueNonVagueLandmark = 3,
	Island = 4,
	ERiddleLocations_MAX = 5,
};

enum class EPuzzleStatueActivatedMechanismType : uint8_t {
	Generic = 0,
	WaterLevelUp = 1,
	WaterLevelDown = 2,
	EPuzzleStatueActivatedMechanismType_MAX = 3,
};

enum class EEmissaryDeactivateReason : uint8_t {
	DissociateFromShip = 0,
	Cancelled = 1,
	EEmissaryDeactivateReason_MAX = 2,
};

enum class ERefChangeFadPhase : uint8_t {
	NoFading = 0,
	FadeOut = 1,
	FadeIn = 2,
	ERefChangeFadPhase_MAX = 3,
};

enum class EBrigState : uint8_t {
	Unbriggable = 0,
	Free = 1,
	InBrig_Releasable = 2,
	InBrig_Unreleasable = 3,
	EBrigState_MAX = 4,
};

enum class ETetherConstrainMode : uint8_t {
	ShrinkLength = 0,
	ConstantLength = 1,
	GrowLength = 2,
	ETetherConstrainMode_MAX = 3,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class EMenuPlacement : uint8_t {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_ComboBox = 2,
	MenuPlacement_ComboBoxRight = 3,
	MenuPlacement_MenuRight = 4,
	MenuPlacement_AboveAnchor = 5,
	MenuPlacement_CenteredAboveAnchor = 6,
	MenuPlacement_MenuLeft = 7,
	MenuPlacement_MAX = 8,
};

enum class EQuestStatus : uint8_t {
	Pending = 0,
	Starting = 1,
	InProgress = 2,
	Complete = 3,
	EQuestStatus_MAX = 4,
};

enum class ENetSpatialClusteringOptions : uint8_t {
	OptIn = 0,
	OptOut = 1,
	NeverRelevant = 2,
	ENetSpatialClusteringOptions_MAX = 3,
};

enum class EAthenaAnimationPetRoamingState : uint8_t {
	Idle = 0,
	Locomotion = 1,
	LocomtionScared = 2,
	Unique = 3,
	React = 4,
	Call = 5,
	Concealed = 6,
	FlyCannon = 7,
	Cheer = 8,
	Interested = 9,
	Talking = 10,
	Happy = 11,
	Caged = 12,
	Grumpy = 13,
	Angry = 14,
	Dance = 15,
	Cleaning = 16,
	Exit = 17,
	Arrive = 18,
	Startled = 19,
	Inactive = 20,
	TakingOff = 21,
	Landing = 22,
	Flying = 23,
	Yawn = 24,
	Scared = 25,
	Protective = 26,
	Vomit = 27,
	Chew = 28,
	Sneeze = 29,
	Sleep = 30,
	Hangout_A = 31,
	Hangout_B = 32,
	Hangout_C = 33,
	LookAround = 34,
	Meme = 35,
	EAthenaAnimationPetRoamingState_MAX = 36,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class ECanCreateConnectionResponse : uint8_t {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6,
};

enum class EAutoReceiveInput : uint8_t {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9,
};

enum class EComparisonMethod : uint8_t {
	Equal_To = 0,
	Not_Equal_To = 1,
	Greater_Than_Or_Equal_To = 2,
	Less_Than_Or_Equal_To = 3,
	Greater_Than = 4,
	Less_Than = 5,
	EComparisonMethod_MAX = 6,
};

enum class ETrackedObjectiveType : uint8_t {
	ProgressUpdate = 0,
	Completion = 1,
	ETrackedObjectiveType_MAX = 2,
};

enum class EIPGSetMode : uint8_t {
	RANDOM = 0,
	RANDOM_OR_NONE = 1,
	BLEND2_FIRST_ORDER = 2,
	BLEND2_RANDOM = 3,
	NONE = 4,
	BLEND2_LAST_UNDERSCORE = 5,
	EIPGSetMode_MAX = 6,
};

enum class ELadderType : uint8_t {
	Generic = 0,
	BoatSide = 1,
	BoatCrowsnest = 2,
	ClamberSpot = 3,
	ELadderType_MAX = 4,
};

