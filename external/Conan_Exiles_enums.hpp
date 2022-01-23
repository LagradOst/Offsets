// Created by BlueFire1337
// Updated 2021-12-08
// Generated 2022-01-23

#pragma once

enum class EAIEngagementBehavior : uint8_t {
	Passive = 0,
	GuardMe = 1,
	GuardArea = 2,
	Aggressive = 3,
	EAIEngagementBehavior_MAX = 4,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6,
};

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6,
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

enum class EDynamicItemFlags : uint8_t {
	IsArtisanRecipe = 0,
	EDynamicItemFlags_MAX = 1,
};

enum class EInviteResponse : uint8_t {
	Accepted = 0,
	Declined = 1,
	TimedOut = 2,
	EInviteResponse_MAX = 3,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class EGraniteTextureAddressing : uint8_t {
	GTA_Wrap = 0,
	GTA_Clamp = 1,
	GTA_UDIM = 2,
	GTA_MAX = 3,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
};

enum class EServerFavoriteState : uint8_t {
	Favorite = 0,
	UnFavorite = 1,
	Invalid = 2,
	EServerFavoriteState_MAX = 3,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class EAttenuationDistanceModel : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6,
};

enum class EContainerType : uint8_t {
	pfenum_None = 0,
	pfenum_Bundles = 1,
	pfenum_Stores = 2,
	pfenum_Subscriptions = 3,
	pfenum_Recipes = 4,
	pfenum_MAX = 5,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	EMeshLODSelectionType_MAX = 3,
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
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class EVectorVMOperandLocation : uint8_t {
	TemporaryRegister = 0,
	InputRegister = 1,
	OutputRegister = 2,
	Constant = 3,
	DataObjConstant = 4,
	SharedData = 5,
	Undefined = 6,
	Num = 7,
	EVectorVMOperandLocation_MAX = 8,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class ClaimChannel : uint8_t {
	Building = 0,
	Foliage = 1,
	ClaimChannel_MAX = 2,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
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

enum class SkeletalMeshOptimizationImportance : uint8_t {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class EGUIModuleActivationReason : uint8_t {
	External = 0,
	Shortcut = 1,
	EscapePressed = 2,
	OtherModuleActivated = 3,
	EndPlay = 4,
	EGUIModuleActivationReason_MAX = 5,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class ELogChannel : uint8_t {
	Discard = 0,
	Building = 1,
	Items = 2,
	AI = 3,
	Combat = 4,
	NPC = 5,
	Effects = 6,
	Network = 7,
	SmokeTesting = 8,
	Persistence = 9,
	Performance = 10,
	CharacterCreation = 11,
	ItemInventory = 12,
	Main = 13,
	Religion = 14,
	GUI = 15,
	Gathering = 16,
	Login = 17,
	FRAMERATE = 18,
	Collections = 19,
	Audio = 20,
	GameMetrics = 21,
	Thrall = 22,
	SpawnTable = 23,
	GlobalServerChannel = 24,
	CombatAction = 25,
	Modding = 26,
	UnitTest = 27,
	Streaming = 28,
	GameMetricsDebug = 29,
	ELogChannel_MAX = 30,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EParticleScreenAlignment : uint8_t {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7,
};

enum class EGraniteBakerLayerType : uint8_t {
	NOTUSED = 0,
	R8G8B8 = 1,
	R8G8B8A8 = 2,
	X8Y8Z0_TANGENT = 3,
	X8 = 4,
	EGraniteBakerLayerType_MAX = 5,
};

enum class EnergyTypes : uint8_t {
	EnergyType_Corruption = 0,
	EnergyType_Temperature = 1,
	EnergyType_MAX = 2,
};

enum class EEncumbranceTiers : uint8_t {
	Tier0 = 0,
	Tier1 = 1,
	Tier2 = 2,
	Tier3 = 3,
	Tier4 = 4,
	EEncumbranceTiers_MAX = 5,
};

enum class EVectorVMOp : uint8_t {
	done = 0,
	add = 1,
	sub = 2,
	mul = 3,
	mad = 4,
	lerp = 5,
	rcp = 6,
	rsq = 7,
	sqrt = 8,
	neg = 9,
	abs = 10,
	exp = 11,
	exp2 = 12,
	log = 13,
	log2 = 14,
	sin = 15,
	cos = 16,
	tan = 17,
	asin = 18,
	acos = 19,
	atan = 20,
	atan2 = 21,
	ceil = 22,
	floor = 23,
	fmod = 24,
	frac = 25,
	trunc = 26,
	clamp = 27,
	min = 28,
	max = 29,
	pow = 30,
	sign = 31,
	step = 32,
	dot = 33,
	cross = 34,
	normalize = 35,
	random = 36,
	length = 37,
	noise = 38,
	splatx = 39,
	splaty = 40,
	splatz = 41,
	splatw = 42,
	compose = 43,
	composex = 44,
	composey = 45,
	composez = 46,
	composew = 47,
	output = 48,
	lessthan = 49,
	select = 50,
	sample = 51,
	bufferwrite = 52,
	easein = 53,
	easeinout = 54,
	div = 55,
	aquireshareddataindex = 56,
	aquireshareddataindexwrap = 57,
	consumeshareddataindex = 58,
	consumeshareddataindexwrap = 59,
	shareddataread = 60,
	shareddatawrite = 61,
	shareddataindexvalid = 62,
	NumOpcodes = 63,
	EVectorVMOp_MAX = 64,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EItemIntStatID : uint8_t {
	MaxStackSize = 0,
	StackSize = 1,
	WeaponStaminaAttackSingleBasic = 2,
	WeaponStaminaAttackSingleSpecial = 3,
	WeaponStaminaAttackDualBasic = 4,
	WeaponStaminaAttackDualSpecial = 5,
	DamageHealthLight_OnHit = 6,
	DamageHealthHeavy_OnHit = 7,
	DamageStaminaLight_OnHit = 8,
	DamageStaminaHeavy_OnHit = 9,
	DamageHealthLight_OnBlock = 10,
	DamageHealthHeavy_OnBlock = 11,
	DamageStaminaLight_OnBlock = 12,
	DamageStaminaHeavy_OnBlock = 13,
	HarvestDamage = 14,
	KnockbackOffenseBasic = 15,
	KnockbackOffenseSpecial = 16,
	EquipLocation = 17,
	SoundPhysicalSurface = 18,
	WeaponStatusCurrent = 19,
	WeaponStatusDefault = 20,
	WeaponStatusDecrement = 21,
	CreationTime = 22,
	WeaponType = 23,
	ItemTier = 24,
	FoodAmount = 25,
	DrinkAmount = 26,
	RepairItem1 = 27,
	RepairItem1_Amount = 28,
	RepairItem2 = 29,
	RepairItem2_Amount = 30,
	RepairItem3 = 31,
	RepairItem3_Amount = 32,
	PerishTo = 33,
	DamageConcussiveLightOnHit = 34,
	DamageConcussiveHeavyOnHit = 35,
	DamageConcussiveLightOnBlock = 36,
	DamageConcussiveHeavyOnBlock = 37,
	KnockbackDefense = 38,
	ThrallIsConverted = 39,
	ActiveAmmunition = 40,
	WeaponUsage = 41,
	DyeIndex1 = 42,
	DyeIndex2 = 43,
	DyeIndex3 = 44,
	DyeIndex4 = 45,
	ThrallID = 46,
	ThrallTier = 47,
	DamageTier = 48,
	ItemContainerSize = 49,
	AppliedBuffItemId = 50,
	AppliedBuffStackMax = 51,
	AppliedBuffStackCurrent = 52,
	AppliedBuffPotency = 53,
	CraftingCharacterUniqueIDLow = 54,
	CraftingCharacterUniqueIDHigh = 55,
	DynamicItemFlags = 56,
	FeatLearnedFromNPC = 57,
	BuildingScore = 58,
	ArmorType = 59,
	KnockbackOffenseBasicOnBlock = 60,
	KnockbackOffenseSpecialOnBlock = 61,
	IsInRepairState = 62,
	CurrentEnchantID = 63,
	LeavesGhostItem = 64,
	SelectionWeight = 65,
	CrafterTier = 66,
	CrafterProfession = 67,
	ItemVersion = 68,
	EItemIntStatID_MAX = 69,
};

enum class ERatingCategory : uint8_t {
	Fun = 0,
	Reliability = 1,
	Admin = 2,
	MAX_Category = 3,
	ERatingCategory_MAX = 4,
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

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_MAX = 2,
};

enum class ETransientMarkerType : uint8_t {
	Purge = 0,
	BoundBed = 1,
	BoundBedroll = 2,
	ETransientMarkerType_MAX = 3,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class ESliderStepType : uint8_t {
	PercentageStep = 0,
	ValueStep = 1,
	ESliderStepType_MAX = 2,
};

enum class EEmoteCategories : uint8_t {
	None = 0,
	Greet = 1,
	Celebrate = 2,
	Taunt = 3,
	Sit = 4,
	Dance = 5,
	Religious = 6,
	Sleep = 7,
	Misc = 8,
	Conversation = 9,
	Flirt = 10,
	Worship = 11,
	Relax = 12,
	Expression = 13,
	Idle = 14,
	Relaxing = 15,
	EEmoteCategories_MAX = 16,
};

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class EStatTableType : uint8_t {
	Int = 0,
	Float = 1,
	EStatTableType_MAX = 2,
};

enum class EGraniteResolveOption : uint8_t {
	DownSample = 0,
	Direct = 1,
	EGraniteResolveOption_MAX = 2,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class NpcSpawnerType : uint8_t {
	HumanNPC = 0,
	WildlifeNPC = 1,
	ManualSpawner = 2,
	NpcSpawnerType_MAX = 3,
};

enum class EGfeSDKPermission : uint8_t {
	Granted = 0,
	Denied = 1,
	MustAsk = 2,
	Unknown = 3,
	MAX = 4,
	EGfeSDKPermission_MAX = 5,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EQosCompletionResult : uint8_t {
	Invalid = 0,
	Success = 1,
	Failure = 2,
	Canceled = 3,
	EQosCompletionResult_MAX = 4,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_MAX = 2,
};

enum class EPFJson : uint8_t {
	None = 0,
	Null = 1,
	String = 2,
	Number = 3,
	Boolean = 4,
	Array = 5,
	Object = 6,
	EPFJson_MAX = 7,
};

enum class EInventoryItemAction : uint8_t {
	MoreMenu = 0,
	ShowInfo = 1,
	Use = 2,
	Equip = 3,
	Give = 4,
	GiveAll = 5,
	Take = 6,
	TakeAll = 7,
	Drop = 8,
	DropAll = 9,
	Repair = 10,
	SplitStack = 11,
	Dye = 12,
	Craft = 13,
	CraftTen = 14,
	CraftAll = 15,
	ClearQueue = 16,
	UnEquip = 17,
	EInventoryItemAction_MAX = 18,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

enum class EAIFollowerTacticType : uint8_t {
	Chase = 0,
	Hold = 1,
	Withdraw = 2,
	PrioritizeBasedOnWeight = 3,
	EAIFollowerTacticType_MAX = 4,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
	ENavigationOptionFlag_MAX = 4,
};

enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4,
};

enum class EImprintChannel : uint8_t {
	None = 0,
	Sand = 1,
	Water = 2,
	EImprintChannel_MAX = 3,
};

enum class EStatModifierUpdateMode : uint8_t {
	Replace = 0,
	Merge = 1,
	EStatModifierUpdateMode_MAX = 2,
};

enum class EReflectionSourceType : uint8_t {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2,
};

enum class EConanOnlinePermissions : uint8_t {
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateOnline = 2,
	CanUseUserGeneratedContent = 3,
	CanShareContent = 4,
	CanUseVoiceChat = 5,
	EConanOnlinePermissions_MAX = 6,
};

enum class EFeatCategory : uint8_t {
	Construction = 0,
	Decoration = 1,
	Combat = 2,
	Survival = 3,
	Armor = 4,
	Religion = 5,
	IsAvailable = 6,
	CategoryCount = 7,
	EFeatCategory_MAX = 8,
};

enum class EModerationStatus : uint8_t {
	pfenum_Unknown = 0,
	pfenum_AwaitingModeration = 1,
	pfenum_Approved = 2,
	pfenum_Rejected = 3,
	pfenum_MAX = 4,
};

enum class EStatModifierOperator : uint8_t {
	Multiply = 0,
	Add = 1,
	EStatModifierOperator_MAX = 2,
};

enum class EClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	EClientRequestType_MAX = 6,
};

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
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
	DBM_MAX = 12,
};

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class EMessageBoxButtons : uint8_t {
	OK = 0,
	OKCancel = 1,
	YesNo = 2,
	Waiting = 3,
	WaitingCancel = 4,
	Custom = 5,
	EMessageBoxButtons_MAX = 6,
};

enum class EAzureVmFamily : uint8_t {
	pfenum_A = 0,
	pfenum_Av2 = 1,
	pfenum_Dv2 = 2,
	pfenum_F = 3,
	pfenum_Fsv2 = 4,
	pfenum_MAX = 5,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
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

enum class EMeshFeatureImportance : uint8_t {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class EInAppPurchaseState : uint8_t {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8,
};

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
	EFrictionCombineMode_MAX = 4,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class ECharFloatStatID : uint8_t {
	ThrallCraftingSpeed = 0,
	ThrallCraftingCost = 1,
	ThrallCraftingFuel = 2,
	ThrallEntertainerPotency = 3,
	DamageModifierMelee = 4,
	DamageModifierRanged = 5,
	NaturalArmor = 6,
	ThrallCorruptionCleansePotency = 7,
	ThrallCorruptionCleanseLimit = 8,
	Armor = 9,
	EncumbranceWeight = 10,
	KilledXPModifier = 11,
	CurrentEncumbrance = 12,
	TemperatureModification = 13,
	PenisScaleModifier = 14,
	KnockbackFragilityDR = 15,
	KnockbackThresholdDR = 16,
	BuildingDamageMultiplier = 17,
	CreatureDamageUI = 18,
	CreaturePenetrationUI = 19,
	EnduranceDamageResistance = 20,
	StaggerSpeedReduction = 21,
	HeatInsulation = 22,
	ColdInsulation = 23,
	ECharFloatStatID_MAX = 24,
};

enum class ESteamFilters : uint8_t {
	Internet = 0,
	Official = 1,
	Favorites = 2,
	History = 3,
	Friends = 4,
	Unofficial = 5,
	SteamFilters_MAX = 6,
	ESteamFilters_MAX = 7,
};

enum class ESkeletalMeshLODType : uint8_t {
	Reduction = 0,
	Proxy = 1,
	ESkeletalMeshLODType_MAX = 2,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
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
	PF_R8_UINT = 57,
	PF_MAX = 58,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EStarRating : uint8_t {
	Zero = 0,
	One = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Invalid = 6,
	EStarRating_MAX = 7,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
	EAILockSource_MAX = 5,
};

enum class EMatchmakeStatus : uint8_t {
	pfenum_Complete = 0,
	pfenum_Waiting = 1,
	pfenum_GameNotFound = 2,
	pfenum_NoAvailableSlots = 3,
	pfenum_SessionClosed = 4,
	pfenum_MAX = 5,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class EOptimizationMetric : uint8_t {
	TrianglePercentage = 0,
	OnScreenSize = 1,
	MaxDeviation = 2,
	EOptimizationMetric_MAX = 3,
};

enum class EGUINavDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Up = 3,
	Down = 4,
	Tab = 5,
	EGUINavDirection_MAX = 6,
};

enum class EAsyncGetPlaceablesMasterFilter : uint8_t {
	All = 0,
	OnlyWithMaster = 1,
	OnlyWithoutMaster = 2,
	EAsyncGetPlaceablesMasterFilter_MAX = 3,
};

enum class EGameMetricsItemLootType : uint8_t {
	Chest = 0,
	VaultChest = 1,
	Corpse = 2,
	EGameMetricsItemLootType_MAX = 3,
};

enum class EGameInstanceState : uint8_t {
	pfenum_Open = 0,
	pfenum_Closed = 1,
	pfenum_MAX = 2,
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
	PPI_StoredBaseColor = 25,
	PPI_StoredSpecular = 26,
	PPI_MAX = 27,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class EHoudiniVertexAttributeDataType : uint8_t {
	VADT_Float = 0,
	VADT_Int32 = 1,
	VADT_Bool = 2,
	VADT_MAX = 3,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class ETouchType : uint8_t {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	Ended = 3,
	NumTypes = 4,
	ETouchType_MAX = 5,
};

enum class EMaxConcurrentResolutionRule : uint8_t {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7,
};

enum class EGamemode : uint8_t {
	None = 0,
	Default = 1,
	Building = 2,
	Swimming = 3,
	Climbing = 4,
	Combat = 5,
	UnarmedCombat = 6,
	BuildingThrall = 7,
	Riding = 8,
	RidingCombat = 9,
	RidingSwimming = 10,
	MainRadialMenu = 11,
	CommandRadialMenu = 12,
	EmoteRadialMenu = 13,
	EGamemode_MAX = 14,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class EPfSourceType : uint8_t {
	pfenum_Admin = 0,
	pfenum_BackEnd = 1,
	pfenum_GameClient = 2,
	pfenum_GameServer = 3,
	pfenum_Partner = 4,
	pfenum_Custom = 5,
	pfenum_API = 6,
	pfenum_MAX = 7,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class EXboxUserStateError : uint8_t {
	NoUser = 0,
	WrongUser = 1,
	NoPairing = 2,
	UserSignedOut = 3,
	NetworkConnectionLost = 4,
	NetworkConnectionLostClient = 5,
	Other = 6,
	FailedToJoinGame = 7,
	AttemptingToJoin = 8,
	GameSessionDoesNotExist = 9,
	GameSessionFull = 10,
	ControllerDisconnected = 11,
	SessionDestroyedOnResumeFromSuspend = 12,
	NudityCensorshipChanged = 13,
	Disconnecting = 14,
	Default = 15,
	PlayTogNoConnection = 16,
	PlayTogChooseModeStartCoop = 17,
	PlayTogChooseModeContinueCoop = 18,
	PlayTogCantCoop = 19,
	PlayTogDedServerSelect = 20,
	PlayTogOffline = 21,
	PlayTogNewGame = 22,
	PlayTogPartyTooLarge = 23,
	FailedToRejoinSession = 24,
	FailedToLoadGameDb = 25,
	FlsLoggingIn = 26,
	FlsLoginFailed = 27,
	FlsLoginCriticallyFailed = 28,
	FlsAttemptingToJoin = 29,
	FlsDLCVerificationFailed = 30,
	FlsOfflineMode = 31,
	LastError = 32,
	EXboxUserStateError_MAX = 33,
};

enum class EManifestFileHeader : uint8_t {
	STORED_RAW = 0,
	STORED_COMPRESSED = 1,
	STORED_MAX = 2,
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

enum class EScheduledTaskType : uint8_t {
	pfenum_CloudScript = 0,
	pfenum_ActionsOnPlayerSegment = 1,
	pfenum_CloudScriptAzureFunctions = 2,
	pfenum_MAX = 3,
};

enum class ECancellationReason : uint8_t {
	pfenum_Requested = 0,
	pfenum_Internal = 1,
	pfenum_Timeout = 2,
	pfenum_MAX = 3,
};

enum class EMontageType : uint8_t {
	Attack = 0,
	Dodge = 1,
	Knockback = 2,
	Emote = 3,
	UseItem = 4,
	Bandage = 5,
	EMontageType_MAX = 6,
};

enum class EConditionals : uint8_t {
	pfenum_Any = 0,
	pfenum_True = 1,
	pfenum_False = 2,
	pfenum_MAX = 3,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class EPVEActionType : uint8_t {
	Unknown = 0,
	PlayerDamageNPC = 1,
	ThrallDamageNPC = 2,
	GatherResource = 3,
	CraftPlaceable = 4,
	EPVEActionType_MAX = 5,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	EEnvTestScoreOperator_MAX = 3,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	EMovieSceneCompletionMode_MAX = 2,
};

enum class EFIFOStyle : uint8_t {
	Default = 0,
	Discovery = 1,
	Journey = 2,
	Purge = 3,
	LevelUp = 4,
	EFIFOStyle_MAX = 5,
};

enum class EDesignPreviewSizeMode : uint8_t {
	FillScreen = 0,
	Custom = 1,
	CustomOnScreen = 2,
	Desired = 3,
	DesiredOnScreen = 4,
	EDesignPreviewSizeMode_MAX = 5,
};

enum class EVisibleSheathedWeapons : uint8_t {
	All = 0,
	OnlyMe = 1,
	None = 2,
	EVisibleSheathedWeapons_MAX = 3,
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

enum class CharacterRace : uint8_t {
	None = 0,
	Hyborian = 1,
	Cimmerian = 2,
	Stygian = 3,
	TribalHimelian = 4,
	HyrkanianTuranian = 5,
	Khitan = 6,
	Kushite = 7,
	Nordheimer = 8,
	Pict = 9,
	Shemite = 10,
	Darfari = 11,
	Vendhyan = 12,
	Zamorian = 13,
	Zingaran = 14,
	CharacterRace_MAX = 15,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class EThrallNameMaxLength : uint8_t {
	Value = 0,
	EThrallNameMaxLength_MAX = 1,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
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

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class EMaterialLODType : uint8_t {
	Off = 0,
	BakeTexture = 1,
	BakeVertexColor = 2,
	Replace = 3,
	EMaterialLODType_MAX = 4,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

enum class EHateType : uint8_t {
	InitialHate = 0,
	ProximityHate = 1,
	SenseHate = 2,
	PhysicalHate = 3,
	TauntHate = 4,
	GiveUpHate = 5,
	LeashingHate = 6,
	OrderHate = 7,
	EHateType_MAX = 8,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

enum class EAttackTypeSimple : uint8_t {
	Light = 0,
	Heavy = 1,
	Offhand = 2,
	EAttackTypeSimple_MAX = 3,
};

enum class EComparisonTolerance : uint8_t {
	Zero = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Custom = 4,
	EComparisonTolerance_MAX = 5,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class EMaterialExpressionScreenPositionMapping : uint8_t {
	MESP_SceneTextureUV = 0,
	MESP_ViewportUV = 1,
	MESP_Max = 2,
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
	Custom = 14,
	EAlphaBlendOption_MAX = 15,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EExperimentState : uint8_t {
	pfenum_New = 0,
	pfenum_Started = 1,
	pfenum_Stopped = 2,
	pfenum_Deleted = 3,
	pfenum_MAX = 4,
};

enum class ECharacterState : uint8_t {
	Aggressive = 0,
	Dead = 1,
	Knockbacked = 2,
	EquipItem = 3,
	Passive = 4,
	Unconscious = 5,
	Stunned = 6,
	Walk = 7,
	Dodge = 8,
	Channeling = 9,
	WeaponBreak = 10,
	WeaponInit = 11,
	Climbing = 12,
	Mounted = 13,
	ShouldBeDeadByCursedWall = 14,
	ECharacterState_MAX = 15,
};

enum class EUserOrigination : uint8_t {
	pfenum_Organic = 0,
	pfenum_Steam = 1,
	pfenum_Google = 2,
	pfenum_Amazon = 3,
	pfenum_Facebook = 4,
	pfenum_Kongregate = 5,
	pfenum_GamersFirst = 6,
	pfenum_Unknown = 7,
	pfenum_IOS = 8,
	pfenum_LoadTest = 9,
	pfenum_Android = 10,
	pfenum_PSN = 11,
	pfenum_GameCenter = 12,
	pfenum_CustomId = 13,
	pfenum_XboxLive = 14,
	pfenum_Parse = 15,
	pfenum_Twitch = 16,
	pfenum_WindowsHello = 17,
	pfenum_ServerCustomId = 18,
	pfenum_NintendoSwitchDeviceId = 19,
	pfenum_FacebookInstantGamesId = 20,
	pfenum_OpenIdConnect = 21,
	pfenum_MAX = 22,
};

enum class EVirtualKeyboardLayout : uint8_t {
	Alphanumeric = 0,
	Default = 1,
	EmailSmtpAddress = 2,
	Number = 3,
	Password = 4,
	Search = 5,
	TelephoneNumber = 6,
	Url = 7,
	EVirtualKeyboardLayout_MAX = 8,
};

enum class ESimplygonTextureSamplingQuality : uint8_t {
	Poor = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ESimplygonTextureSamplingQuality_MAX = 4,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class EServerRentalSetupType : uint8_t {
	Create = 0,
	Extend = 1,
	Edit = 2,
	None = 3,
	EServerRentalSetupType_MAX = 4,
};

enum class PresenceStatus : uint8_t {
	Unavailable = 0,
	Available = 1,
	Chat = 2,
	DoNotDisturb = 3,
	Away = 4,
	ExtendedAway = 5,
	PresenceStatus_MAX = 6,
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

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6,
};

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EGameItemFilterCategory : uint8_t {
	Weapon = 0,
	Armor = 1,
	Material = 2,
	Consumable = 3,
	BuildingItem = 4,
	All = 5,
	EGameItemFilterCategory_MAX = 6,
};

enum class ELQAVPMethod : uint8_t {
	None = 0,
	Absolute = 1,
	BrokenAbsolute = 2,
	Relative = 3,
	ELQAVPMethod_MAX = 4,
};

enum class EMasterPlaceablesErrors : uint8_t {
	OverlappingWithExclusive = 0,
	Overlapping = 1,
	RequiresSocket = 2,
	SurfaceNotVerticalEnough = 3,
	NotBuilding = 4,
	CornerFailWall = 5,
	CheckForGroundFail = 6,
	GroundTooSteep = 7,
	CannotBeStacked = 8,
	InsideCollision = 9,
	DisallowedSplineBuildLimit = 10,
	MustPlaceInWaterMessage = 11,
	OverlappingSpawnpoints = 12,
	CanNotPlaceInWaterMessage = 13,
	CanNotPlaceOnGround = 14,
	ElevatorOverlap = 15,
	EMasterPlaceablesErrors_MAX = 16,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class EPlayerConnectionState : uint8_t {
	pfenum_Unassigned = 0,
	pfenum_Connecting = 1,
	pfenum_Participating = 2,
	pfenum_Participated = 3,
	pfenum_MAX = 4,
};

enum class EProtocolType : uint8_t {
	pfenum_TCP = 0,
	pfenum_UDP = 1,
	pfenum_MAX = 2,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_Normal = 5,
	SCS_BaseColor = 6,
	SCS_MAX = 7,
};

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags_MAX = 2,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	EBoneTranslationRetargetingMode_MAX = 4,
};

enum class EWeaponUsages : uint8_t {
	PrimaryAttackTypeMaxBit = 0,
	IsItem = 1,
	IsRetreat = 2,
	HasRootMotion = 3,
	EWeaponUsages_MAX = 4,
};

enum class EDisplayPropertyType : uint8_t {
	pfenum_QueryDateTime = 0,
	pfenum_QueryDouble = 1,
	pfenum_QueryString = 2,
	pfenum_SearchString = 3,
	pfenum_MAX = 4,
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

enum class EAdditionalComponentRules : uint8_t {
	Server = 0,
	Client = 1,
	ServerAndClientCopies = 2,
	EAdditionalComponentRules_MAX = 3,
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

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

enum class ETriggerType : uint8_t {
	pfenum_HTTP = 0,
	pfenum_Queue = 1,
	pfenum_MAX = 2,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class ENiagaraDataType : uint8_t {
	Scalar = 0,
	Vector = 1,
	Matrix = 2,
	ENiagaraDataType_MAX = 3,
};

enum class ELeaderboardSortDirection : uint8_t {
	pfenum_Descending = 0,
	pfenum_Ascending = 1,
	pfenum_MAX = 2,
};

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
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
	TSF_MAX = 8,
};

enum class ENoiseFunction : uint8_t {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6,
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

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class EDeleteGameDBResult : uint8_t {
	Success = 0,
	Failure = 1,
	Cancel = 2,
	EDeleteGameDBResult_MAX = 3,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EThrallCanBePlacedResult : uint8_t {
	Success = 0,
	Fail = 1,
	Fail_Overlaps = 2,
	Fail_LandClaim = 3,
	Fail_LimitExceeded = 4,
	EThrallCanBePlacedResult_MAX = 5,
};

enum class EAzureVmSize : uint8_t {
	pfenum_Standard_D1_v2 = 0,
	pfenum_Standard_D2_v2 = 1,
	pfenum_Standard_D3_v2 = 2,
	pfenum_Standard_D4_v2 = 3,
	pfenum_Standard_D5_v2 = 4,
	pfenum_Standard_A1_v2 = 5,
	pfenum_Standard_A2_v2 = 6,
	pfenum_Standard_A4_v2 = 7,
	pfenum_Standard_A8_v2 = 8,
	pfenum_Standard_F1 = 9,
	pfenum_Standard_F2 = 10,
	pfenum_Standard_F4 = 11,
	pfenum_Standard_F8 = 12,
	pfenum_Standard_F16 = 13,
	pfenum_Standard_F2s_v2 = 14,
	pfenum_Standard_F4s_v2 = 15,
	pfenum_Standard_F8s_v2 = 16,
	pfenum_Standard_F16s_v2 = 17,
	pfenum_Standard_A1 = 18,
	pfenum_Standard_A2 = 19,
	pfenum_Standard_A3 = 20,
	pfenum_Standard_A4 = 21,
	pfenum_Standard_MAX = 22,
};

enum class EStatTypeID : uint8_t {
	Int = 0,
	Float = 1,
	EStatTypeID_MAX = 2,
};

enum class EConanBBKey : uint8_t {
	HomeLocation = 0,
	SelfActor = 1,
	AIState = 2,
	CurrentTarget = 3,
	TerritorySpawnVolume = 4,
	NextRoamingSpot = 5,
	TerritorySpawnVolumeRadius = 6,
	DistanceToCurrentTarget = 7,
	LocationAggroPoint = 8,
	IsLeashing = 9,
	DirectAttackPath = 10,
	TargetAttackStats = 11,
	RoamingPath = 12,
	CurrentAttackPoint = 13,
	IsUnconscious = 14,
	EConanBBKey_MAX = 15,
};

enum class EOwnerCategory : uint8_t {
	Character = 0,
	Guild = 1,
	PlayerId = 2,
	EOwnerCategory_MAX = 3,
};

enum class E_ComboInput : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	E_MAX = 3,
};

enum class EBuildingSocketType : uint8_t {
	Building = 0,
	Door = 1,
	Pillar = 2,
	WallTrim = 3,
	CastleWall = 4,
	Fence_Foundation = 5,
	Fence_Wall = 6,
	Siege_Foundation = 7,
	Gate = 8,
	Rampart_Defense = 9,
	Corner = 10,
	Hatch = 11,
	Strut = 12,
	Ladder = 13,
	Window = 14,
	Custom_Socket_00 = 15,
	Custom_Socket_01 = 16,
	Custom_Socket_02 = 17,
	Custom_Socket_03 = 18,
	Custom_Socket_04 = 19,
	Custom_Socket_05 = 20,
	Custom_Socket_06 = 21,
	Custom_Socket_07 = 22,
	Custom_Socket_08 = 23,
	Custom_Socket_09 = 24,
	EBuildingSocketType_MAX = 25,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class SpatialHashGridSize : uint8_t {
	GridSize60m = 0,
	GridSize100m = 1,
	SpatialHashGridSize_Max = 2,
};

enum class EBuildingBaseErrors : uint8_t {
	Overlapping_Text = 0,
	NotSnapped = 1,
	BelowGround = 2,
	InsideCollision = 3,
	DisallowedSplineBuildLimit = 4,
	OverlappingSpawnpoints = 5,
	CouldntFindLandscape = 6,
	EBuildingBaseErrors_MAX = 7,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
};

enum class EBuildingMode : uint8_t {
	Structures = 0,
	Placeables = 1,
	EBuildingMode_MAX = 2,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class ELoginStatus : uint8_t {
	NotLoggedIn = 0,
	UsingLocalProfile = 1,
	LoggedIn = 2,
	ELoginStatus_MAX = 3,
};

enum class EGameEventViewType : uint8_t {
	Server = 0,
	Building = 1,
	ThrallPet = 2,
	UnauthorizedInventoryAccess = 3,
	FriendlyInventoryAccess = 4,
	Tech = 5,
	Purge = 6,
	Lootbag = 7,
	Player = 8,
	EGameEventViewType_MAX = 9,
};

enum class EDamageTiers : uint8_t {
	Default = 0,
	Stone = 1,
	Iron = 2,
	Steel = 3,
	EDamageTiers_MAX = 4,
};

enum class ESimplygonCasterType : uint8_t {
	None = 0,
	Color = 1,
	Normals = 2,
	Opacity = 3,
	ESimplygonCasterType_MAX = 4,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
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

enum class EUINavigationRule : uint8_t {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	Invalid = 5,
	EUINavigationRule_MAX = 6,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EThrallPlacementMode : uint8_t {
	None = 0,
	PlaceNewThrall = 1,
	MoveExistingThrall = 2,
	EThrallPlacementMode_MAX = 3,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class CamSwitchModes : uint8_t {
	NewEnumerator6 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator5 = 4,
	NewEnumerator4 = 5,
	NewEnumerator7 = 6,
	NewEnumerator8 = 7,
	NewEnumerator9 = 8,
	NewEnumerator10 = 9,
	NewEnumerator11 = 10,
	NewEnumerator12 = 11,
	NewEnumerator13 = 12,
	NewEnumerator14 = 13,
	NewEnumerator15 = 14,
	NewEnumerator16 = 15,
	NewEnumerator17 = 16,
	NewEnumerator18 = 17,
	NewEnumerator19 = 18,
	NewEnumerator20 = 19,
	NewEnumerator21 = 20,
	NewEnumerator22 = 21,
	NewEnumerator23 = 22,
	NewEnumerator24 = 23,
	NewEnumerator25 = 24,
	CamSwitchModes_MAX = 25,
};

enum class EVertexAttributeStreamType : uint8_t {
	VAST_unknown = 0,
	VAST_float = 1,
	VAST_float2 = 2,
	VAST_float3 = 3,
	VAST_float4 = 4,
	VAST_MAX = 5,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class EKnockbackStage : uint8_t {
	None = 0,
	SlideOnGround = 1,
	InAir = 2,
	KnockoverAnim = 3,
	KnockbackEnd = 4,
	GettingUp = 5,
	EKnockbackStage_MAX = 6,
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
	PSPT_MAX = 8,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class EGraniteChannelTransform : uint8_t {
	UINT = 0,
	SINT = 1,
	UNORM = 2,
	SNORM = 3,
	SFLOAT = 4,
	UFLOAT = 5,
	SRGB = 6,
	MAX = 7,
	EGraniteChannelTransform_MAX = 8,
};

enum class EMaterialExposedViewProperty : uint8_t {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_MAX = 6,
};

enum class CharacterTextureSlots : uint8_t {
	Eyebrows = 0,
	Eyes = 1,
	Lips = 2,
	WarpaintFace = 3,
	WarpaintBody = 4,
	WarpaintHands = 5,
	Hairline = 6,
	FacialHairline = 7,
	CharacterTextureSlots_MAX = 8,
};

enum class EPatchCheckResult : uint8_t {
	NoPatchRequired = 0,
	PatchRequired = 1,
	NoLoggedInUser = 2,
	PatchCheckFailure = 3,
	EPatchCheckResult_MAX = 4,
};

enum class EUserDataPermission : uint8_t {
	pfenum_Private = 0,
	pfenum_Public = 1,
	pfenum_MAX = 2,
};

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
};

enum class ENavPathEvent : uint8_t {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class EAddBuildingPieceResult : uint8_t {
	Added = 0,
	NotAdded = 1,
	CannotAdd = 2,
	AddBuildingPieceResult_Max = 3,
	EAddBuildingPieceResult_MAX = 4,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class EItemSortType : uint8_t {
	ByName = 0,
	HeaviestFirst = 1,
	Custom = 2,
	SortTypeCount = 3,
	EItemSortType_MAX = 4,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class EOperationTypes : uint8_t {
	pfenum_Created = 0,
	pfenum_Updated = 1,
	pfenum_Deleted = 2,
	pfenum_None = 3,
	pfenum_MAX = 4,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class EInputConsumeOptions : uint8_t {
	ICO_ConsumeAll = 0,
	ICO_ConsumeBoundKeys = 1,
	ICO_ConsumeNone = 2,
	ICO_MAX = 3,
};

enum class EObjectDestructionObjectType : uint8_t {
	BuildingPiece = 0,
	Placeable = 1,
	Thrall = 2,
	EObjectDestructionObjectType_MAX = 3,
};

enum class EClientState : uint8_t {
	Startup = 0,
	MainMenu = 1,
	LoadingScreen = 2,
	Playing = 3,
	CharacterCreation = 4,
	Shutdown = 5,
	EClientState_MAX = 6,
};

enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class ETriangleSortAxis : uint8_t {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

enum class EHoudiniRuntimeSettingsAxisImport : uint8_t {
	HRSAI_Unreal = 0,
	HRSAI_Houdini = 1,
	HRSAI_MAX = 2,
};

enum class EGfeSDKHighlightSignificance : uint8_t {
	NONE = 0,
	ExtremelyBad = 1,
	VeryBad = 2,
	Bad = 3,
	Neutral = 4,
	Good = 5,
	VeryGood = 6,
	ExtremelyGood = 7,
	MAX = 8,
	EGfeSDKHighlightSignificance_MAX = 9,
};

enum class EFailureDetails : uint8_t {
	NoError = 0,
	ClientOutdated = 1,
	ConnectionFailed = 2,
	ConnectionTimeout = 3,
	ChecksumMismatch = 4,
	DriverFailure = 5,
	GenericConnectionFailed = 6,
	NetworkInit = 7,
	UniqueIDNotValid = 8,
	NetGuidMismatch = 9,
	AuthenticationFailed = 10,
	ServerPasswordNotValid = 11,
	UsedCheatCommands = 12,
	BeaconSpawnFailureError = 13,
	BeaconSpawnExistingActorError = 14,
	BeaconSpawnClientWorldPackageNameError = 15,
	HostClosedConnection = 16,
	ClientReliableBufferOverflow = 17,
	NetDisconnect = 18,
	GenericBeaconConnectionFailed = 19,
	BeaconSpawnUnexpectedError = 20,
	BeaconSpawnNetGUIDAckError1 = 21,
	BeaconSpawnNetGUIDAckError2 = 22,
	ServerFull = 23,
	MaximumSplitscreenPlayers = 24,
	InvalidRegion = 25,
	InvalidCountry = 26,
	InvalidIP = 27,
	UserBanned = 28,
	PingHigherThanMaxAllowedPing = 29,
	SpawnPlayActor = 30,
	ListenFailure = 31,
	ServerHasNoMods = 32,
	ModMismatch = 33,
	NotOnWhitelist = 34,
	FamilySharingNotAllowed = 35,
	UserBannedOfficialServer = 36,
	EFailureDetails_MAX = 37,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class ECameraFocusMethod : uint8_t {
	None = 0,
	Manual = 1,
	Tracking = 2,
	ECameraFocusMethod_MAX = 3,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_ScreenSize = 2,
	SMOT_MAX = 3,
};

enum class EGraniteStreamingTextureType : uint8_t {
	Unknown = 0,
	Texture2D = 1,
	TextureCube = 2,
	EGraniteStreamingTextureType_MAX = 3,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class EAsyncGetPlaceablesOwnerFilter : uint8_t {
	Both = 0,
	OnlyWithOwner = 1,
	OnlyWithoutOwner = 2,
	EAsyncGetPlaceablesOwnerFilter_MAX = 3,
};

enum class EBattleStandardJoinSetting : uint8_t {
	AlwaysAsk = 0,
	AlwaysAccept = 1,
	AlwaysDecline = 2,
	EBattleStandardJoinSetting_MAX = 3,
};

enum class ECharIntStatID : uint8_t {
	HealthMax = 0,
	HealthCurrent = 1,
	FeatPointsUsed = 2,
	FeatPointsTotal = 3,
	Level = 4,
	StaminaCurrent = 5,
	StaminaMax = 6,
	ConsciousnessCurrent = 7,
	ConsciousnessMax = 8,
	ThrallID = 9,
	ThrallTier = 10,
	Gender = 11,
	KnockbackDefense = 12,
	Faction = 13,
	AttributeHealth = 14,
	AttributeStamina = 15,
	AttributeEncumbrance = 16,
	AttributeMight = 17,
	AttributeAccuracy = 18,
	AttributeAthleticism = 19,
	AttributeMetabolism = 20,
	AttributeResilience = 21,
	ItemContainerSize = 22,
	HealthBarStyle = 23,
	EnduranceCurrent = 24,
	EnduranceMax = 25,
	StaggerResistance = 26,
	ECharIntStatID_MAX = 27,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class EGameEventCauserPrivacy : uint8_t {
	AllCanSee = 0,
	AdminsCanSee = 1,
	NoneCanSee = 2,
	Count = 3,
	EGameEventCauserPrivacy_MAX = 4,
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

enum class EServerListState : uint8_t {
	CombatModeSelection = 0,
	MainView = 1,
	SelectingServer = 2,
	DirectConnect = 3,
	Undefined = 4,
	EServerListState_MAX = 5,
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

enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
};

enum class EFindSessionOfficial : uint8_t {
	FSO_Unofficial = 0,
	FSO_Official = 1,
	FSO_All = 2,
	FSO_MAX = 3,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class ECurveBlendOption : uint8_t {
	MaxWeight = 0,
	NormalizeByWeight = 1,
	BlendByWeight = 2,
	ECurveBlendOption_MAX = 3,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class ETimeOfDay : uint8_t {
	Dusk = 0,
	Noon = 1,
	Dawn = 2,
	TimeOfDay_MAX = 3,
	ETimeOfDay_MAX = 4,
};

enum class EGraniteBakerTilingMethod : uint8_t {
	None = 0,
	Repeat = 1,
	Clamp = 2,
	EGraniteBakerTilingMethod_MAX = 3,
};

enum class EGraniteGPUCacheGroup : uint8_t {
	Standard = 0,
	Uncompressed = 1,
	EGraniteGPUCacheGroup_MAX = 2,
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

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EMountMovementState : uint8_t {
	Stand = 0,
	Walk = 1,
	Run = 2,
	Sprint = 3,
	Backpedaling = 4,
	EMountMovementState_MAX = 5,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class ETeleportState : uint8_t {
	Idle = 0,
	AckRequested = 1,
	IsTeleporting = 2,
	IsWaitingForAcks = 3,
	ETeleportState_MAX = 4,
};

enum class EAzureRegion : uint8_t {
	pfenum_AustraliaEast = 0,
	pfenum_AustraliaSoutheast = 1,
	pfenum_BrazilSouth = 2,
	pfenum_CentralUs = 3,
	pfenum_EastAsia = 4,
	pfenum_EastUs = 5,
	pfenum_EastUs2 = 6,
	pfenum_JapanEast = 7,
	pfenum_JapanWest = 8,
	pfenum_NorthCentralUs = 9,
	pfenum_NorthEurope = 10,
	pfenum_SouthCentralUs = 11,
	pfenum_SoutheastAsia = 12,
	pfenum_WestEurope = 13,
	pfenum_WestUs = 14,
	pfenum_ChinaEast2 = 15,
	pfenum_ChinaNorth2 = 16,
	pfenum_SouthAfricaNorth = 17,
	pfenum_MAX = 18,
};

enum class EMeshComponentUpdateFlag : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickPoseWhenRendered = 2,
	EMeshComponentUpdateFlag_MAX = 3,
};

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORN_MAX = 5,
	ENetDormancy_MAX = 6,
};

enum class ENudity : uint8_t {
	No = 0,
	Partial = 1,
	Full = 2,
	ENudity_MAX = 3,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class EAssetEditorOpenLocation : uint8_t {
	Default = 0,
	NewWindow = 1,
	MainWindow = 2,
	ContentBrowser = 3,
	LastDockedWindowOrNewWindow = 4,
	LastDockedWindowOrMainWindow = 5,
	LastDockedWindowOrContentBrowser = 6,
	EAssetEditorOpenLocation_MAX = 7,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EMaterialDomain : uint8_t {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_MAX = 6,
};

enum class EStatisticResetIntervalOption : uint8_t {
	pfenum_Never = 0,
	pfenum_Hour = 1,
	pfenum_Day = 2,
	pfenum_Week = 3,
	pfenum_Month = 4,
	pfenum_MAX = 5,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
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

enum class EContainerFlavor : uint8_t {
	pfenum_ManagedWindowsServerCore = 0,
	pfenum_CustomLinux = 1,
	pfenum_ManagedWindowsServerCorePreview = 2,
	pfenum_MAX = 3,
};

enum class SittingPoses : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	SittingPoses_MAX = 5,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	Max = 2,
	EControlConstraint_MAX = 3,
};

enum class EGraniteTextureFormat : uint8_t {
	R8G8B8A8 = 0,
	R16G16B16A16 = 1,
	R32G32B32A32 = 2,
	BC1 = 3,
	BC3 = 4,
	BC5 = 5,
	BC7 = 6,
	BC6 = 7,
	BC4 = 8,
	ASTC4X4 = 9,
	ASTC8X8 = 10,
	R32 = 11,
	R32G32 = 12,
	R32G32B32 = 13,
	MAX = 14,
	EGraniteTextureFormat_MAX = 15,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class EAudioFadeModel : uint8_t {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	EAudioFadeModel_MAX = 3,
};

enum class EClientSpawnState : uint8_t {
	SpawnComplete = 0,
	SpawnInProgress = 1,
	EClientSpawnState_MAX = 2,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class EPlatformID : uint8_t {
	PlatformWindows = 0,
	PlatformPS4 = 1,
	PlatformXBoxOne = 2,
	PlatformMAC = 3,
	PlatformIOS = 4,
	PlatformAndroid = 5,
	PlatformWINRT_ARM = 6,
	PlatformWINRT = 7,
	PlatformHTML5 = 8,
	PlatformLinux = 9,
	PlatformCount = 10,
	EPlatformID_MAX = 11,
};

enum class EVirtualKeyboardType : uint8_t {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
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

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
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

enum class ELifetimeCondition : uint8_t {
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Max = 14,
};

enum class EConanCharacterMovementDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	Left = 2,
	Right = 3,
	EConanCharacterMovementDirection_MAX = 4,
};

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
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
	FunctionInput_GraniteTexture = 8,
	FunctionInput_MAX = 9,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	ELogTimes_MAX = 3,
};

enum class EChartAggregationMode : uint8_t {
	TextureSize = 0,
	SurfaceArea = 1,
	PixelDensity = 2,
	UVSize = 3,
	EChartAggregationMode_MAX = 4,
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

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class EHDRCaptureGamut : uint8_t {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_MAX = 5,
};

enum class EGraniteSampleQuality : uint8_t {
	GSQ_Normal = 0,
	GSQ_HighQuality = 1,
	GSQ_MAX = 2,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
};

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	EMouseLockMode_MAX = 3,
};

enum class EStaticMeshLODType : uint8_t {
	Reduction = 0,
	Proxy = 1,
	EStaticMeshLODType_MAX = 2,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class EPlatformFlags : uint8_t {
	Pc = 0,
	Xbox = 1,
	Ps4 = 2,
	EPlatformFlags_MAX = 3,
};

enum class EHotfixResult : uint8_t {
	Failed = 0,
	Success = 1,
	SuccessNoChange = 2,
	SuccessNeedsReload = 3,
	SuccessNeedsRelaunch = 4,
	EHotfixResult_MAX = 5,
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

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class EEmoteFlags : uint8_t {
	None = 0,
	BlockMovement = 1,
	WillLoopUntilCanceled = 2,
	CantEquipItems = 3,
	NPCShouldHaveWeapons = 4,
	EEmoteFlags_MAX = 5,
};

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

enum class EUpdateState : uint8_t {
	UpdateIdle = 0,
	UpdatePending = 1,
	CheckingForPatch = 2,
	DetectingPlatformEnvironment = 3,
	CheckingForHotfix = 4,
	WaitingOnInitialLoad = 5,
	InitialLoadComplete = 6,
	UpdateComplete = 7,
	EUpdateState_MAX = 8,
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
	SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
	SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
	SG_MATERIAL_CHANNEL_MAX = 13,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class ETargetingPurpose : uint8_t {
	NotTargeted = 0,
	Attack = 1,
	Flee = 2,
	ETargetingPurpose_MAX = 3,
};

enum class EControllerHand : uint8_t {
	Left = 0,
	Right = 1,
	Pad = 2,
	ExternalCamera = 3,
	Gun = 4,
	Special_2 = 5,
	Special_3 = 6,
	Special_4 = 7,
	Special_5 = 8,
	Special_6 = 9,
	Special_7 = 10,
	Special_8 = 11,
	Special_9 = 12,
	Special_10 = 13,
	EControllerHand_MAX = 14,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class EServerModState : uint8_t {
	Unknown = 0,
	Ok = 1,
	Updating = 2,
	QueuedForUpdate = 3,
	NeedsUpdate = 4,
	NeedsInstall = 5,
	WrongVersion = 6,
	NeedsDownload = 7,
	NotFound = 8,
	EServerModState_MAX = 9,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class ESocketConfiguration : uint8_t {
	Normal = 0,
	Rotated180 = 1,
	Rotated90 = 2,
	Rotated270 = 3,
	Rotated120 = 4,
	Rotated240 = 5,
	SocketConfiguration_MAX = 6,
	ESocketConfiguration_MAX = 7,
};

enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
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

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
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
	SurfaceType64 = 63,
	SurfaceType65 = 64,
	SurfaceType66 = 65,
	SurfaceType67 = 66,
	SurfaceType68 = 67,
	SurfaceType69 = 68,
	SurfaceType70 = 69,
	SurfaceType71 = 70,
	SurfaceType72 = 71,
	SurfaceType73 = 72,
	SurfaceType74 = 73,
	SurfaceType75 = 74,
	SurfaceType76 = 75,
	SurfaceType77 = 76,
	SurfaceType78 = 77,
	SurfaceType79 = 78,
	SurfaceType80 = 79,
	SurfaceType81 = 80,
	SurfaceType82 = 81,
	SurfaceType83 = 82,
	SurfaceType84 = 83,
	SurfaceType85 = 84,
	SurfaceType86 = 85,
	SurfaceType87 = 86,
	SurfaceType88 = 87,
	SurfaceType89 = 88,
	SurfaceType90 = 89,
	SurfaceType91 = 90,
	SurfaceType92 = 91,
	SurfaceType93 = 92,
	SurfaceType94 = 93,
	SurfaceType95 = 94,
	SurfaceType96 = 95,
	SurfaceType97 = 96,
	SurfaceType98 = 97,
	SurfaceType99 = 98,
	SurfaceType100 = 99,
	SurfaceType101 = 100,
	SurfaceType102 = 101,
	SurfaceType103 = 102,
	SurfaceType104 = 103,
	SurfaceType105 = 104,
	SurfaceType106 = 105,
	SurfaceType107 = 106,
	SurfaceType108 = 107,
	SurfaceType109 = 108,
	SurfaceType110 = 109,
	SurfaceType111 = 110,
	SurfaceType112 = 111,
	SurfaceType113 = 112,
	SurfaceType114 = 113,
	SurfaceType115 = 114,
	SurfaceType116 = 115,
	SurfaceType117 = 116,
	SurfaceType118 = 117,
	SurfaceType119 = 118,
	SurfaceType120 = 119,
	SurfaceType121 = 120,
	SurfaceType122 = 121,
	SurfaceType123 = 122,
	SurfaceType124 = 123,
	SurfaceType125 = 124,
	SurfaceType126 = 125,
	SurfaceType127 = 126,
	SurfaceType128 = 127,
	SurfaceType129 = 128,
	SurfaceType130 = 129,
	SurfaceType131 = 130,
	SurfaceType132 = 131,
	SurfaceType133 = 132,
	SurfaceType134 = 133,
	SurfaceType135 = 134,
	SurfaceType136 = 135,
	SurfaceType137 = 136,
	SurfaceType138 = 137,
	SurfaceType139 = 138,
	SurfaceType140 = 139,
	SurfaceType141 = 140,
	SurfaceType142 = 141,
	SurfaceType143 = 142,
	SurfaceType144 = 143,
	SurfaceType145 = 144,
	SurfaceType146 = 145,
	SurfaceType147 = 146,
	SurfaceType148 = 147,
	SurfaceType149 = 148,
	SurfaceType150 = 149,
	SurfaceType151 = 150,
	SurfaceType152 = 151,
	SurfaceType153 = 152,
	SurfaceType154 = 153,
	SurfaceType155 = 154,
	SurfaceType156 = 155,
	SurfaceType157 = 156,
	SurfaceType158 = 157,
	SurfaceType159 = 158,
	SurfaceType160 = 159,
	SurfaceType161 = 160,
	SurfaceType162 = 161,
	SurfaceType163 = 162,
	SurfaceType164 = 163,
	SurfaceType165 = 164,
	SurfaceType166 = 165,
	SurfaceType167 = 166,
	SurfaceType168 = 167,
	SurfaceType169 = 168,
	SurfaceType170 = 169,
	SurfaceType171 = 170,
	SurfaceType172 = 171,
	SurfaceType173 = 172,
	SurfaceType174 = 173,
	SurfaceType175 = 174,
	SurfaceType176 = 175,
	SurfaceType177 = 176,
	SurfaceType178 = 177,
	SurfaceType179 = 178,
	SurfaceType180 = 179,
	SurfaceType181 = 180,
	SurfaceType182 = 181,
	SurfaceType183 = 182,
	SurfaceType184 = 183,
	SurfaceType185 = 184,
	SurfaceType186 = 185,
	SurfaceType187 = 186,
	SurfaceType188 = 187,
	SurfaceType189 = 188,
	SurfaceType190 = 189,
	SurfaceType191 = 190,
	SurfaceType192 = 191,
	SurfaceType193 = 192,
	SurfaceType194 = 193,
	SurfaceType195 = 194,
	SurfaceType196 = 195,
	SurfaceType197 = 196,
	SurfaceType198 = 197,
	SurfaceType199 = 198,
	SurfaceType200 = 199,
	SurfaceType201 = 200,
	SurfaceType202 = 201,
	SurfaceType203 = 202,
	SurfaceType204 = 203,
	SurfaceType205 = 204,
	SurfaceType206 = 205,
	SurfaceType207 = 206,
	SurfaceType208 = 207,
	SurfaceType209 = 208,
	SurfaceType210 = 209,
	SurfaceType211 = 210,
	SurfaceType212 = 211,
	SurfaceType213 = 212,
	SurfaceType214 = 213,
	SurfaceType215 = 214,
	SurfaceType216 = 215,
	SurfaceType217 = 216,
	SurfaceType218 = 217,
	SurfaceType219 = 218,
	SurfaceType220 = 219,
	SurfaceType221 = 220,
	SurfaceType222 = 221,
	SurfaceType223 = 222,
	SurfaceType224 = 223,
	SurfaceType225 = 224,
	SurfaceType226 = 225,
	SurfaceType227 = 226,
	SurfaceType228 = 227,
	SurfaceType229 = 228,
	SurfaceType230 = 229,
	SurfaceType231 = 230,
	SurfaceType232 = 231,
	SurfaceType233 = 232,
	SurfaceType234 = 233,
	SurfaceType235 = 234,
	SurfaceType236 = 235,
	SurfaceType237 = 236,
	SurfaceType238 = 237,
	SurfaceType239 = 238,
	SurfaceType240 = 239,
	SurfaceType241 = 240,
	SurfaceType242 = 241,
	SurfaceType243 = 242,
	SurfaceType244 = 243,
	SurfaceType245 = 244,
	SurfaceType246 = 245,
	SurfaceType247 = 246,
	SurfaceType248 = 247,
	SurfaceType249 = 248,
	SurfaceType250 = 249,
	SurfaceType251 = 250,
	SurfaceType252 = 251,
	SurfaceType253 = 252,
	SurfaceType_Max = 253,
	EPhysicalSurface_MAX = 254,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class EAdActivity : uint8_t {
	pfenum_Opened = 0,
	pfenum_Closed = 1,
	pfenum_Start = 2,
	pfenum_End = 3,
	pfenum_MAX = 4,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class CharacterCrime : uint8_t {
	DisobedienceOfAPriest = 0,
	DecapitationOfAPriest = 1,
	SullyingAVirgin = 2,
	LecherousBehavior = 3,
	DrunkenBrawling = 4,
	IncitingARiot = 5,
	ImpersonatingAPriestess = 6,
	KillingASacredSerpent = 7,
	StranglingAMoneyLender = 8,
	PunchingACamel = 9,
	Pickpocketing = 10,
	DefecatingOnAStatue = 11,
	MutilationOfAGuardsmen = 12,
	AssassinatingAMerchant = 13,
	ComboSkipping = 14,
	SpreadingMaliciousRumors = 15,
	Debauchery = 16,
	DefilingATemple = 17,
	CorruptingTheYouth = 18,
	ContaminatingAWell = 19,
	BribingAWatchman = 20,
	FornicatingWithLowBeasts = 21,
	PoorUseOfPunctuation = 22,
	FixingGladiatorialMatches = 23,
	CheatingAtDice = 24,
	SkullduggeryAndBuggery = 25,
	SwindlingABaron = 26,
	Blackmail = 27,
	VillainyAndRascality = 28,
	LewdBehaviorWithCorpses = 29,
	SingingBawdyBallads = 30,
	Banditry = 31,
	CrudeLanguage = 32,
	BreakingAnOath = 33,
	FreeingSlaves = 34,
	SlaveTakingWithoutAPermit = 35,
	DestructionOfProperty = 36,
	Piracy = 37,
	BreakingTheFourthWall = 38,
	CulturalAppropriation = 39,
	UnauthorizedDismemberment = 40,
	Slaying = 41,
	PeggingWithAPegLeg = 42,
	Mutiny = 43,
	ExpectingTheZingaranInquisition = 44,
	Regicide = 45,
	HighTreason = 46,
	UnlawfulWhoremongering = 47,
	BreakingAPinkyPromise = 48,
	MurderingAMagistrate = 49,
	ButcheringABailiff = 50,
	Nobbling = 51,
	PlankingTheWalk = 52,
	IncorrectHandlingOfCocks = 53,
	CharacterCrime_MAX = 54,
};

enum class EMaterialProxySmaplingQuality : uint8_t {
	Poor = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EMaterialProxySmaplingQuality_MAX = 4,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EFormatArgumentType : uint8_t {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EMessageBoxDialogResult : uint8_t {
	Undefined = 0,
	Yes = 1,
	No = 2,
	EMessageBoxDialogResult_MAX = 3,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class ESpawnerSchedule : uint8_t {
	AutoSpawn = 0,
	CampSpawn = 1,
	TriggerSpawn = 2,
	ESpawnerSchedule_MAX = 3,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class EFFlsSmFailureResultCodes : uint8_t {
	Unknown = 0,
	NoSessionFound = 1,
	SessionIsPrivate = 2,
	SessionIsFull = 3,
	IncompatibleGameVersion = 4,
	EFFlsSmFailureResultCodes_MAX = 5,
};

enum class ESpritePivotMode : uint8_t {
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10,
};

enum class ECopyType : uint8_t {
	MemCopy = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	ECopyType_MAX = 4,
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
	VMI_LODColoration = 15,
	VMI_QuadOverdraw = 16,
	VMI_PrimitiveDistanceAccuracy = 17,
	VMI_MeshUVDensityAccuracy = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration = 20,
	VMI_GroupLODColoration = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution = 23,
	VMI_Max = 24,
	VMI_Unknown = 25,
};

enum class EServerPopulation : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Population_COUNT = 3,
	EServerPopulation_MAX = 4,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class ESimulationQuery : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	AnyOverlap = 2,
	ESimulationQuery_MAX = 3,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class EMountTargetSpeed : uint8_t {
	Stationary = 0,
	WalkingSpeed = 1,
	RunningSpeed = 2,
	SprintingSpeed = 3,
	TargetSpeed_Count = 4,
	EMountTargetSpeed_MAX = 5,
};

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class EStatisticAggregationMethod : uint8_t {
	pfenum_Last = 0,
	pfenum_Min = 1,
	pfenum_Max = 2,
	pfenum_Sum = 3,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
};

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EStretch : uint8_t {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8,
};

enum class ECognitiveServicesType : uint8_t {
	pfenum_SpeechToText = 0,
	pfenum_SpeechToTextTranslation = 1,
	pfenum_TextToSpeech = 2,
	pfenum_TextToText = 3,
	pfenum_MAX = 4,
};

enum class EPurgeMeterEvent : uint8_t {
	LogOn = 0,
	TimerTick = 1,
	CraftItem = 2,
	ExploreLocation = 3,
	KillHuman = 4,
	KillNPC = 5,
	PlaceT1Building = 6,
	PlaceT2Building = 7,
	PlaceT3Building = 8,
	ConvertT1Thrall = 9,
	ConvertT2Thrall = 10,
	ConvertT3Thrall = 11,
	ConvertT4Thrall = 12,
	FillPurgeMeter = 13,
	DrainPurgeMeter = 14,
	EPurgeMeterEvent_MAX = 15,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class EIKCurrentIdleAnim : uint8_t {
	NonIdle = 0,
	Aggressive = 1,
	Passive = 2,
	Crouching = 3,
	EIKCurrentIdleAnim_MAX = 4,
};

enum class EMobileCSMQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	EMobileCSMQuality_MAX = 3,
};

enum class ETradeStatus : uint8_t {
	pfenum_Invalid = 0,
	pfenum_Opening = 1,
	pfenum_Open = 2,
	pfenum_Accepting = 3,
	pfenum_Accepted = 4,
	pfenum_Filled = 5,
	pfenum_Cancelled = 6,
	pfenum_MAX = 7,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	EWidgetDesignFlags_MAX = 3,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3,
};

enum class EThrallTier : uint8_t {
	None = 0,
	Amateur = 1,
	Novice = 2,
	Apprentice = 3,
	Skilled = 4,
	Adept = 5,
	Journeyman = 6,
	High = 7,
	Expert = 8,
	Veteran = 9,
	Master = 10,
	Arch = 11,
	Legendary = 12,
	Chosen = 13,
	ThrallTier_MAX = 14,
	EThrallTier_MAX = 15,
};

enum class ETickingGroup : uint8_t {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class ECharacterEmotes : uint8_t {
	None = 0,
	Wave = 1,
	Surrender = 2,
	Taunt = 3,
	Salute = 4,
	Cheer = 5,
	Kneel = 6,
	SitOnGround = 7,
	Dance = 8,
	ByCrom = 9,
	BySet = 10,
	ByYog = 11,
	ByDerketo = 12,
	ByJhebbalSag = 13,
	ByMitra = 14,
	ByBel = 15,
	PlayDrumds = 16,
	DerketoDance = 17,
	ChickenDance = 18,
	Pissing = 19,
	GuardSwordAndShield = 20,
	GuardBow = 21,
	Hide = 22,
	Tinkering = 23,
	TalkingMale1 = 24,
	TalkingMale2 = 25,
	TalkingFemale1 = 26,
	TalkingFemale2 = 27,
	WorkingAnvil = 28,
	HakkaDance = 29,
	Grovel = 30,
	Ponder = 31,
	ClapBig = 32,
	ClapSmall = 33,
	Point = 34,
	BearHug = 35,
	Shrug = 36,
	DanceAquilonian = 37,
	DanceCimmerian = 38,
	DanceKhitan = 39,
	DanceHaka = 40,
	DanceBelly = 41,
	DanceSexy = 42,
	LayingSeductive = 43,
	Squirming = 44,
	ComeHere = 45,
	Spank = 46,
	BlowKiss = 47,
	ShowOff = 48,
	CombHair = 49,
	Flirt1 = 50,
	Flirt2 = 51,
	Bow = 52,
	PraySitting = 53,
	PrayStanding = 54,
	SleepOnGround = 55,
	ArmsCrossed = 56,
	Submissive = 57,
	ShiftWeight = 58,
	Score = 59,
	LaughSmall = 60,
	LaughBig = 61,
	Sigh = 62,
	Yawn = 63,
	Wounded = 64,
	ShakeFist = 65,
	FistPunch = 66,
	Spit = 67,
	Chestpound = 68,
	Chicken = 69,
	SlitThroat = 70,
	Cheer1 = 71,
	Cheer2 = 72,
	PushUps = 73,
	Idle1 = 74,
	Idle2 = 75,
	Idle3 = 76,
	Relaxing1 = 77,
	Relaxing2 = 78,
	Relaxing3 = 79,
	Eating = 80,
	Hungry = 81,
	Drunk = 82,
	HandsOnHips = 83,
	Thoughtful = 84,
	Scared = 85,
	Scared2 = 86,
	AngryDrunk = 87,
	Angry = 88,
	LeanOnWall = 89,
	Nonchalant = 90,
	Juggling = 91,
	DrinkBeer = 92,
	ComeOverHere = 93,
	SleepOnBelly = 94,
	SleepOnLeftSide = 95,
	SleepOnRightSide = 96,
	GiveOrders1 = 97,
	GiveOrders2 = 98,
	GiveOrders3 = 99,
	Guard1 = 100,
	Guard2 = 101,
	Guard3 = 102,
	SiftThroughTrash1 = 103,
	SiftThroughTrash2 = 104,
	SiftThroughTrash3 = 105,
	TendEggs1 = 106,
	TendEggs2 = 107,
	TendEggs3 = 108,
	Idle4 = 109,
	ECharacterEmotes_MAX = 110,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

enum class ESocketDistanceSortMethod : uint8_t {
	NotSorted = 0,
	ByClosestDistance = 1,
	ByFartestDistance = 2,
	Random = 3,
	SocketDistanceSortMethod_Max = 4,
	ESocketDistanceSortMethod_MAX = 5,
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
	Multiplier = 47,
	Unspecified = 48,
	EUnit_MAX = 49,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
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

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class EVerifyStringResult : uint8_t {
	Offensive = 0,
	Success = 1,
	TooLong = 2,
	UnknownError = 3,
	EVerifyStringResult_MAX = 4,
};

enum class AudioState : uint8_t {
	Free = 0,
	Active = 1,
	FadeIn = 2,
	FadeOut = 3,
	DelayedFadeIn = 4,
	DelayedFadeOut = 5,
	AudioState_MAX = 6,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EInventoryActionShortcuts : uint8_t {
	TakeAllDropCraftAll = 0,
	UseEquipUnEquipCraftTen = 1,
	MoreClearQueue = 2,
	Craft = 3,
	GiveTake = 4,
	None = 5,
	EInventoryActionShortcuts_MAX = 6,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EShow3DTrajectory : uint8_t {
	EST_OnlyWhenSelected = 0,
	EST_Always = 1,
	EST_Never = 2,
	EST_MAX = 3,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EInputBoxDialogResult : uint8_t {
	Undefined = 0,
	OK = 1,
	Cancel = 2,
	EInputBoxDialogResult_MAX = 3,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class ESimplygonLODType : uint8_t {
	Reduction = 0,
	Remeshing = 1,
	ESimplygonLODType_MAX = 2,
};

enum class EHitlocation : uint8_t {
	None = 0,
	Head = 1,
	Torso = 2,
	LeftArmUpper = 3,
	LeftArmLower = 4,
	RightArmUpper = 5,
	RightArmLower = 6,
	LeftLegUpper = 7,
	LeftLegLower = 8,
	RightLegUpper = 9,
	RightLegLower = 10,
	Neck = 11,
	Tail = 12,
	Misc1 = 13,
	Misc2 = 14,
	Misc3 = 15,
	Misc4 = 16,
	Misc5 = 17,
	EHitlocation_MAX = 18,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
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

enum class EAIFollowerOrderType : uint8_t {
	None = 0,
	Attack = 1,
	Move = 2,
	Stop = 3,
	Return = 4,
	EAIFollowerOrderType_MAX = 5,
};

enum class CharacterBodySlots : uint8_t {
	Helmet = 0,
	Hair = 1,
	Head = 2,
	Forearms = 3,
	Hands = 4,
	Upperbody = 5,
	Lowerbody = 6,
	Legs = 7,
	Feet = 8,
	FacialHair = 9,
	CharacterBodySlots_MAX = 10,
};

enum class EFindSessionServerSet : uint8_t {
	FS_Internet = 0,
	FS_Favorites = 1,
	FS_History = 2,
	FS_Spectator = 3,
	FS_LAN = 4,
	FS_Friends = 5,
	FS_MAX = 6,
};

enum class EServerRentalActionType : uint8_t {
	None = 0,
	Start = 1,
	Stop = 2,
	Restart = 3,
	EServerRentalActionType_MAX = 4,
};

enum class EAvatarEvent : uint8_t {
	Unknown = 0,
	SummoningStarted = 1,
	SummoningSucceeded = 2,
	SummoningFailed = 3,
	BanishedNormally = 4,
	BanishedEarly = 5,
	EAvatarEvent_MAX = 6,
};

enum class EPartyType : uint8_t {
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
	EPartyType_MAX = 3,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class WeaponArcheTypes : uint8_t {
	OneHanded = 0,
	TwoHanded = 1,
	OneHanded_Ranged = 2,
	TwoHanded_Ranged = 3,
	Shield = 4,
	Ammunition = 5,
	Poison = 6,
	None = 7,
	ComboAttack = 8,
	WeaponArcheTypes_MAX = 9,
};

enum class ECloudScriptRevisionOption : uint8_t {
	pfenum_Live = 0,
	pfenum_Latest = 1,
	pfenum_Specific = 2,
	pfenum_MAX = 3,
};

enum class EGameItemType : uint8_t {
	GameItem = 0,
	Recipe = 1,
	Reference = 2,
	Feat = 3,
	Emote = 4,
	Thrall = 5,
	ThrallRecipe = 6,
	EGameItemType_MAX = 7,
};

enum class EFunctionalTestResult : uint8_t {
	Default = 0,
	Invalid = 1,
	Error = 2,
	Running = 3,
	Failed = 4,
	Succeeded = 5,
	EFunctionalTestResult_MAX = 6,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class EBanInfoReasons : uint8_t {
	BanCircumvention = 0,
	ClaimSpam = 1,
	ContentBlocking = 2,
	DDoS = 3,
	Exploit = 4,
	ChatHarassment = 5,
	BuildingHarassment = 6,
	OffensiveContent = 7,
	Undermesh = 8,
	Hacking = 9,
	EBanInfoReasons_MAX = 10,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EStatisticVersionArchivalStatus : uint8_t {
	pfenum_NotScheduled = 0,
	pfenum_Scheduled = 1,
	pfenum_Queued = 2,
	pfenum_InProgress = 3,
	pfenum_Complete = 4,
	pfenum_MAX = 5,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class EAsyncGetBuildingPiecesFilter : uint8_t {
	None = 0,
	ClosestToCenterOfArea = 1,
	ClosestToCenterOfBuilding = 2,
	LowestClosestToCenterOfBuilding = 3,
	EAsyncGetBuildingPiecesFilter_MAX = 4,
};

enum class ECharacterTransferState : uint8_t {
	Import = 0,
	Export = 1,
	Serialization = 2,
	Deserialization = 3,
	ECharacterTransferState_MAX = 4,
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

enum class EMediaPlayerTrack : uint8_t {
	Audio = 0,
	Binary = 1,
	Caption = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t {
	HRSRF_Always = 0,
	HRSRF_OnlyIfMissing = 1,
	HRSRF_Nothing = 2,
	HRSRF_MAX = 3,
};

enum class EStatModifierMode : uint8_t {
	Full = 0,
	Base = 1,
	EStatModifierMode_MAX = 2,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
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

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
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

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class ENPCMindReadingMode : uint8_t {
	None = 0,
	Combat = 1,
	Targeting = 2,
	Detail = 3,
	ENPCMindReadingMode_MAX = 4,
};

enum class EConanPlayerType : uint8_t {
	ListenServerHost = 0,
	ListenServerClient = 1,
	DedicatedServerClient = 2,
	PlayerTypeNone = 3,
	EConanPlayerType_MAX = 4,
};

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

enum class EFollowingMessageType : uint8_t {
	Following = 0,
	NotFollowing = 1,
	Dead = 2,
	EFollowingMessageType_MAX = 3,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
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
	TEXTUREGROUP_UISceneCapture = 17,
	TEXTUREGROUP_Lightmap = 18,
	TEXTUREGROUP_RenderTarget = 19,
	TEXTUREGROUP_MobileFlattened = 20,
	TEXTUREGROUP_ProcBuilding_Face = 21,
	TEXTUREGROUP_ProcBuilding_LightMap = 22,
	TEXTUREGROUP_Shadowmap = 23,
	TEXTUREGROUP_ColorLookupTable = 24,
	TEXTUREGROUP_Terrain_Heightmap = 25,
	TEXTUREGROUP_Terrain_Weightmap = 26,
	TEXTUREGROUP_Bokeh = 27,
	TEXTUREGROUP_IESLightProfile = 28,
	TEXTUREGROUP_Pixels2D = 29,
	TEXTUREGROUP_HierarchicalLOD = 30,
	TEXTUREGROUP_World_HighQ = 31,
	TEXTUREGROUP_WorldNormalMap_HighQ = 32,
	TEXTUREGROUP_MAX = 33,
};

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
};

enum class EServerType : uint8_t {
	All = 0,
	PVP = 1,
	PVE = 2,
	PVEConflict = 3,
	ServerType_MAX = 4,
	EServerType_MAX = 5,
};

enum class EGraniteLightMapQuality : uint8_t {
	LowCompression = 0,
	MediumCompression = 1,
	HighCompression = 2,
	UnrealEquivalent = 3,
	EGraniteLightMapQuality_MAX = 4,
};

enum class EConsoleType : uint8_t {
	CONSOLE_Any = 0,
	CONSOLE_Mobile = 1,
	CONSOLE_MAX = 2,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class EFIFOLocation : uint8_t {
	Default = 0,
	Low = 1,
	EFIFOLocation_MAX = 2,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EAIParamType_MAX = 3,
};

enum class EScreenOrientation : uint8_t {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7,
};

enum class EServerDifficulty : uint8_t {
	Default = 0,
	Civilized = 1,
	Decadent = 2,
	Barbaric = 3,
	EServerDifficulty_MAX = 4,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
	EAIOptionFlag_MAX = 4,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

enum class EHoudiniHandleType : uint8_t {
	Xform = 0,
	Bounder = 1,
	Unsupported = 2,
	EHoudiniHandleType_MAX = 3,
};

enum class EJoinPartyDenialReason : uint8_t {
	NoReason = 0,
	Busy = 1,
	PartyFull = 2,
	GameFull = 3,
	NotPartyLeader = 4,
	PartyPrivate = 5,
	NeedsTutorial = 6,
	EJoinPartyDenialReason_MAX = 7,
};

enum class EAnimInterpolationType : uint8_t {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2,
};

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class ETaskInstanceStatus : uint8_t {
	pfenum_Succeeded = 0,
	pfenum_Starting = 1,
	pfenum_InProgress = 2,
	pfenum_Failed = 3,
	pfenum_Aborted = 4,
	pfenum_Stalled = 5,
	pfenum_MAX = 6,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class ESubscriptionProviderStatus : uint8_t {
	pfenum_NoError = 0,
	pfenum_Cancelled = 1,
	pfenum_UnknownError = 2,
	pfenum_BillingError = 3,
	pfenum_ProductUnavailable = 4,
	pfenum_CustomerDidNotAcceptPriceChange = 5,
	pfenum_FreeTrial = 6,
	pfenum_PaymentPending = 7,
	pfenum_MAX = 8,
};

enum class ECountryCode : uint8_t {
	pfenum_AF = 0,
	pfenum_AX = 1,
	pfenum_AL = 2,
	pfenum_DZ = 3,
	pfenum_AS = 4,
	pfenum_AD = 5,
	pfenum_AO = 6,
	pfenum_AI = 7,
	pfenum_AQ = 8,
	pfenum_AG = 9,
	pfenum_AR = 10,
	pfenum_AM = 11,
	pfenum_AW = 12,
	pfenum_AU = 13,
	pfenum_AT = 14,
	pfenum_AZ = 15,
	pfenum_BS = 16,
	pfenum_BH = 17,
	pfenum_BD = 18,
	pfenum_BB = 19,
	pfenum_BY = 20,
	pfenum_BE = 21,
	pfenum_BZ = 22,
	pfenum_BJ = 23,
	pfenum_BM = 24,
	pfenum_BT = 25,
	pfenum_BO = 26,
	pfenum_BQ = 27,
	pfenum_BA = 28,
	pfenum_BW = 29,
	pfenum_BV = 30,
	pfenum_BR = 31,
	pfenum_IO = 32,
	pfenum_BN = 33,
	pfenum_BG = 34,
	pfenum_BF = 35,
	pfenum_BI = 36,
	pfenum_KH = 37,
	pfenum_CM = 38,
	pfenum_CA = 39,
	pfenum_CV = 40,
	pfenum_KY = 41,
	pfenum_CF = 42,
	pfenum_TD = 43,
	pfenum_CL = 44,
	pfenum_CN = 45,
	pfenum_CX = 46,
	pfenum_CC = 47,
	pfenum_CO = 48,
	pfenum_KM = 49,
	pfenum_CG = 50,
	pfenum_CD = 51,
	pfenum_CK = 52,
	pfenum_CR = 53,
	pfenum_CI = 54,
	pfenum_HR = 55,
	pfenum_CU = 56,
	pfenum_CW = 57,
	pfenum_CY = 58,
	pfenum_CZ = 59,
	pfenum_DK = 60,
	pfenum_DJ = 61,
	pfenum_DM = 62,
	pfenum_DO = 63,
	pfenum_EC = 64,
	pfenum_EG = 65,
	pfenum_SV = 66,
	pfenum_GQ = 67,
	pfenum_ER = 68,
	pfenum_EE = 69,
	pfenum_ET = 70,
	pfenum_FK = 71,
	pfenum_FO = 72,
	pfenum_FJ = 73,
	pfenum_FI = 74,
	pfenum_FR = 75,
	pfenum_GF = 76,
	pfenum_PF = 77,
	pfenum_TF = 78,
	pfenum_GA = 79,
	pfenum_GM = 80,
	pfenum_GE = 81,
	pfenum_DE = 82,
	pfenum_GH = 83,
	pfenum_GI = 84,
	pfenum_GR = 85,
	pfenum_GL = 86,
	pfenum_GD = 87,
	pfenum_GP = 88,
	pfenum_GU = 89,
	pfenum_GT = 90,
	pfenum_GG = 91,
	pfenum_GN = 92,
	pfenum_GW = 93,
	pfenum_GY = 94,
	pfenum_HT = 95,
	pfenum_HM = 96,
	pfenum_VA = 97,
	pfenum_HN = 98,
	pfenum_HK = 99,
	pfenum_HU = 100,
	pfenum_IS = 101,
	pfenum_IN = 102,
	pfenum_ID = 103,
	pfenum_IR = 104,
	pfenum_IQ = 105,
	pfenum_IE = 106,
	pfenum_IM = 107,
	pfenum_IL = 108,
	pfenum_IT = 109,
	pfenum_JM = 110,
	pfenum_JP = 111,
	pfenum_JE = 112,
	pfenum_JO = 113,
	pfenum_KZ = 114,
	pfenum_KE = 115,
	pfenum_KI = 116,
	pfenum_KP = 117,
	pfenum_KR = 118,
	pfenum_KW = 119,
	pfenum_KG = 120,
	pfenum_LA = 121,
	pfenum_LV = 122,
	pfenum_LB = 123,
	pfenum_LS = 124,
	pfenum_LR = 125,
	pfenum_LY = 126,
	pfenum_LI = 127,
	pfenum_LT = 128,
	pfenum_LU = 129,
	pfenum_MO = 130,
	pfenum_MK = 131,
	pfenum_MG = 132,
	pfenum_MW = 133,
	pfenum_MY = 134,
	pfenum_MV = 135,
	pfenum_ML = 136,
	pfenum_MT = 137,
	pfenum_MH = 138,
	pfenum_MQ = 139,
	pfenum_MR = 140,
	pfenum_MU = 141,
	pfenum_YT = 142,
	pfenum_MX = 143,
	pfenum_FM = 144,
	pfenum_MD = 145,
	pfenum_MC = 146,
	pfenum_MN = 147,
	pfenum_ME = 148,
	pfenum_MS = 149,
	pfenum_MA = 150,
	pfenum_MZ = 151,
	pfenum_MM = 152,
	pfenum_NA = 153,
	pfenum_NR = 154,
	pfenum_NP = 155,
	pfenum_NL = 156,
	pfenum_NC = 157,
	pfenum_NZ = 158,
	pfenum_NI = 159,
	pfenum_NE = 160,
	pfenum_NG = 161,
	pfenum_NU = 162,
	pfenum_NF = 163,
	pfenum_MP = 164,
	pfenum_NO = 165,
	pfenum_OM = 166,
	pfenum_PK = 167,
	pfenum_PW = 168,
	pfenum_PS = 169,
	pfenum_PA = 170,
	pfenum_PG = 171,
	pfenum_PY = 172,
	pfenum_PE = 173,
	pfenum_PH = 174,
	pfenum_PN = 175,
	pfenum_PL = 176,
	pfenum_PT = 177,
	pfenum_PR = 178,
	pfenum_QA = 179,
	pfenum_RE = 180,
	pfenum_RO = 181,
	pfenum_RU = 182,
	pfenum_RW = 183,
	pfenum_BL = 184,
	pfenum_SH = 185,
	pfenum_KN = 186,
	pfenum_LC = 187,
	pfenum_MF = 188,
	pfenum_PM = 189,
	pfenum_VC = 190,
	pfenum_WS = 191,
	pfenum_SM = 192,
	pfenum_ST = 193,
	pfenum_SA = 194,
	pfenum_SN = 195,
	pfenum_RS = 196,
	pfenum_SC = 197,
	pfenum_SL = 198,
	pfenum_SG = 199,
	pfenum_SX = 200,
	pfenum_SK = 201,
	pfenum_SI = 202,
	pfenum_SB = 203,
	pfenum_SO = 204,
	pfenum_ZA = 205,
	pfenum_GS = 206,
	pfenum_SS = 207,
	pfenum_ES = 208,
	pfenum_LK = 209,
	pfenum_SD = 210,
	pfenum_SR = 211,
	pfenum_SJ = 212,
	pfenum_SZ = 213,
	pfenum_SE = 214,
	pfenum_CH = 215,
	pfenum_SY = 216,
	pfenum_TW = 217,
	pfenum_TJ = 218,
	pfenum_TZ = 219,
	pfenum_TH = 220,
	pfenum_TL = 221,
	pfenum_TG = 222,
	pfenum_TK = 223,
	pfenum_TO = 224,
	pfenum_TT = 225,
	pfenum_TN = 226,
	pfenum_TR = 227,
	pfenum_TM = 228,
	pfenum_TC = 229,
	pfenum_TV = 230,
	pfenum_UG = 231,
	pfenum_UA = 232,
	pfenum_AE = 233,
	pfenum_GB = 234,
	pfenum_US = 235,
	pfenum_UM = 236,
	pfenum_UY = 237,
	pfenum_UZ = 238,
	pfenum_VU = 239,
	pfenum_VE = 240,
	pfenum_VN = 241,
	pfenum_VG = 242,
	pfenum_VI = 243,
	pfenum_WF = 244,
	pfenum_EH = 245,
	pfenum_YE = 246,
	pfenum_ZM = 247,
	pfenum_ZW = 248,
	pfenum_MAX = 249,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class ERank : uint8_t {
	Recruit = 0,
	Member = 1,
	Officer = 2,
	GuildMaster = 3,
	ERank_MAX = 4,
	InvalidRank = 5,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EPhysicsSceneType : uint8_t {
	PST_Sync = 0,
	PST_Cloth = 1,
	PST_Async = 2,
	PST_MAX = 3,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
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
	EPMT_SubUV = 8,
	EPMT_MAX = 9,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
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

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
};

enum class ESimplygonColorChannels : uint8_t {
	RGBA = 0,
	RGB = 1,
	L = 2,
	ESimplygonColorChannels_MAX = 3,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
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
	TC_MAX = 12,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
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

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class EAILODEventType : uint8_t {
	Changed = 0,
	Resumed = 1,
	Paused = 2,
	EAILODEventType_MAX = 3,
};

enum class EGUIModuleState : uint8_t {
	Inactive = 0,
	ActiveHidden = 1,
	ActiveVisible = 2,
	EGUIModuleState_MAX = 3,
};

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
};

enum class ETransformMask : uint8_t {
	Location = 0,
	Rotation = 1,
	Scale = 2,
	All = 3,
	ETransformMask_MAX = 4,
};

enum class ETitleMultiplayerServerEnabledStatus : uint8_t {
	pfenum_Initializing = 0,
	pfenum_Enabled = 1,
	pfenum_Disabled = 2,
	pfenum_MAX = 3,
};

enum class EGamepadStyleMovement : uint8_t {
	Off = 0,
	On = 1,
	Auto = 2,
	EGamepadStyleMovement_MAX = 3,
};

enum class EOnJoinSessionCompleteResultType : uint8_t {
	Success = 0,
	SessionIsFull = 1,
	SessionDoesNotExist = 2,
	CouldNotRetrieveAddress = 3,
	AlreadyInSession = 4,
	UnknownError = 5,
	EOnJoinSessionCompleteResultType_MAX = 6,
};

enum class EChatVisibilityCondition : uint8_t {
	Never = 0,
	Always = 1,
	OnNewMessage = 2,
	EChatVisibilityCondition_MAX = 3,
};

enum class EActorMetricsType : uint8_t {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
};

enum class EGfeSDKScope : uint8_t {
	Highlights = 0,
	HighlightsRecordVideo = 1,
	HighlightsRecordScreenshot = 2,
	MAX = 3,
	EGfeSDKScope_MAX = 4,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class ECurrentAIMode : uint8_t {
	Ordered = 0,
	Leashing = 1,
	HandlingTarget = 2,
	Passive = 3,
	ECurrentAIMode_MAX = 4,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class ELODCounterType : uint8_t {
	NPC = 0,
	Building = 1,
	Placeable = 2,
	MAX = 3,
	ELODCounterType_MAX = 4,
};

enum class EPushSetupPlatform : uint8_t {
	pfenum_GCM = 0,
	pfenum_APNS = 1,
	pfenum_APNS_SANDBOX = 2,
	pfenum_MAX = 3,
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

enum class EReInitializationReason : uint8_t {
	UnintelligbleData = 0,
	MissingLinchpin = 1,
	EReInitializationReason_MAX = 2,
};

enum class EGraniteTranscoderQuality : uint8_t {
	Fast = 0,
	Normal = 1,
	High = 2,
	Ultra = 3,
	EGraniteTranscoderQuality_MAX = 4,
};

enum class ETeleportLocation : uint8_t {
	DSouth = 0,
	DEast = 1,
	DNorth = 2,
	DWest = 3,
	DCenter = 4,
	Sandstorm = 5,
	Teleport_MAX = 6,
	ETeleportLocation_MAX = 7,
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

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
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

enum class EInterpCurveMode : uint8_t {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6,
};

enum class ECurrency : uint8_t {
	pfenum_AED = 0,
	pfenum_AFN = 1,
	pfenum_ALL = 2,
	pfenum_AMD = 3,
	pfenum_ANG = 4,
	pfenum_AOA = 5,
	pfenum_ARS = 6,
	pfenum_AUD = 7,
	pfenum_AWG = 8,
	pfenum_AZN = 9,
	pfenum_BAM = 10,
	pfenum_BBD = 11,
	pfenum_BDT = 12,
	pfenum_BGN = 13,
	pfenum_BHD = 14,
	pfenum_BIF = 15,
	pfenum_BMD = 16,
	pfenum_BND = 17,
	pfenum_BOB = 18,
	pfenum_BRL = 19,
	pfenum_BSD = 20,
	pfenum_BTN = 21,
	pfenum_BWP = 22,
	pfenum_BYR = 23,
	pfenum_BZD = 24,
	pfenum_CAD = 25,
	pfenum_CDF = 26,
	pfenum_CHF = 27,
	pfenum_CLP = 28,
	pfenum_CNY = 29,
	pfenum_COP = 30,
	pfenum_CRC = 31,
	pfenum_CUC = 32,
	pfenum_CUP = 33,
	pfenum_CVE = 34,
	pfenum_CZK = 35,
	pfenum_DJF = 36,
	pfenum_DKK = 37,
	pfenum_DOP = 38,
	pfenum_DZD = 39,
	pfenum_EGP = 40,
	pfenum_ERN = 41,
	pfenum_ETB = 42,
	pfenum_EUR = 43,
	pfenum_FJD = 44,
	pfenum_FKP = 45,
	pfenum_GBP = 46,
	pfenum_GEL = 47,
	pfenum_GGP = 48,
	pfenum_GHS = 49,
	pfenum_GIP = 50,
	pfenum_GMD = 51,
	pfenum_GNF = 52,
	pfenum_GTQ = 53,
	pfenum_GYD = 54,
	pfenum_HKD = 55,
	pfenum_HNL = 56,
	pfenum_HRK = 57,
	pfenum_HTG = 58,
	pfenum_HUF = 59,
	pfenum_IDR = 60,
	pfenum_ILS = 61,
	pfenum_IMP = 62,
	pfenum_INR = 63,
	pfenum_IQD = 64,
	pfenum_IRR = 65,
	pfenum_ISK = 66,
	pfenum_JEP = 67,
	pfenum_JMD = 68,
	pfenum_JOD = 69,
	pfenum_JPY = 70,
	pfenum_KES = 71,
	pfenum_KGS = 72,
	pfenum_KHR = 73,
	pfenum_KMF = 74,
	pfenum_KPW = 75,
	pfenum_KRW = 76,
	pfenum_KWD = 77,
	pfenum_KYD = 78,
	pfenum_KZT = 79,
	pfenum_LAK = 80,
	pfenum_LBP = 81,
	pfenum_LKR = 82,
	pfenum_LRD = 83,
	pfenum_LSL = 84,
	pfenum_LYD = 85,
	pfenum_MAD = 86,
	pfenum_MDL = 87,
	pfenum_MGA = 88,
	pfenum_MKD = 89,
	pfenum_MMK = 90,
	pfenum_MNT = 91,
	pfenum_MOP = 92,
	pfenum_MRO = 93,
	pfenum_MUR = 94,
	pfenum_MVR = 95,
	pfenum_MWK = 96,
	pfenum_MXN = 97,
	pfenum_MYR = 98,
	pfenum_MZN = 99,
	pfenum_NAD = 100,
	pfenum_NGN = 101,
	pfenum_NIO = 102,
	pfenum_NOK = 103,
	pfenum_NPR = 104,
	pfenum_NZD = 105,
	pfenum_OMR = 106,
	pfenum_PAB = 107,
	pfenum_PEN = 108,
	pfenum_PGK = 109,
	pfenum_PHP = 110,
	pfenum_PKR = 111,
	pfenum_PLN = 112,
	pfenum_PYG = 113,
	pfenum_QAR = 114,
	pfenum_RON = 115,
	pfenum_RSD = 116,
	pfenum_RUB = 117,
	pfenum_RWF = 118,
	pfenum_SAR = 119,
	pfenum_SBD = 120,
	pfenum_SCR = 121,
	pfenum_SDG = 122,
	pfenum_SEK = 123,
	pfenum_SGD = 124,
	pfenum_SHP = 125,
	pfenum_SLL = 126,
	pfenum_SOS = 127,
	pfenum_SPL = 128,
	pfenum_SRD = 129,
	pfenum_STD = 130,
	pfenum_SVC = 131,
	pfenum_SYP = 132,
	pfenum_SZL = 133,
	pfenum_THB = 134,
	pfenum_TJS = 135,
	pfenum_TMT = 136,
	pfenum_TND = 137,
	pfenum_TOP = 138,
	pfenum_TRY = 139,
	pfenum_TTD = 140,
	pfenum_TVD = 141,
	pfenum_TWD = 142,
	pfenum_TZS = 143,
	pfenum_UAH = 144,
	pfenum_UGX = 145,
	pfenum_USD = 146,
	pfenum_UYU = 147,
	pfenum_UZS = 148,
	pfenum_VEF = 149,
	pfenum_VND = 150,
	pfenum_VUV = 151,
	pfenum_WST = 152,
	pfenum_XAF = 153,
	pfenum_XCD = 154,
	pfenum_XDR = 155,
	pfenum_XOF = 156,
	pfenum_XPF = 157,
	pfenum_YER = 158,
	pfenum_ZAR = 159,
	pfenum_ZMW = 160,
	pfenum_ZWD = 161,
	pfenum_MAX = 162,
};

enum class EQosResponseType : uint8_t {
	NoResponse = 0,
	Success = 1,
	Failure = 2,
	EQosResponseType_MAX = 3,
};

enum class E_MountSlot : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	NewEnumerator6 = 5,
	E_MAX = 6,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
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

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	PreciseTap = 1,
	EButtonTouchMethod_MAX = 2,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class CharacterScalarSlots : uint8_t {
	Height = 0,
	Bust = 1,
	Dick = 2,
	EyeAngle = 3,
	EyeSize = 4,
	EyeDepth = 5,
	NoseWidth = 6,
	NoseSize = 7,
	NoseCurve = 8,
	JawWidth = 9,
	CheekHeight = 10,
	CheekWidth = 11,
	ChinWidth = 12,
	EarAngle = 13,
	EarSize = 14,
	LipSize = 15,
	Pitch = 16,
	PhysiqueMax = 17,
	PhysiqueMin = 18,
	CharacterScalarSlots_MAX = 19,
};

enum class EPVPActionType : uint8_t {
	Unknown = 0,
	PlayerDamagePlayer = 1,
	ThrallDamagePlayer = 2,
	PlayerDamageThrall = 3,
	ThrallDamageThrall = 4,
	LootPlayerCorpse = 5,
	LootThrallCorpse = 6,
	EPVPActionType_MAX = 7,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_MAX = 4,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class EServerListHotkey : uint8_t {
	Select = 0,
	Join = 1,
	Back = 2,
	Skip = 3,
	Favorite = 4,
	Unfavorite = 5,
	OpenDirectConnect = 6,
	Refresh = 7,
	PageUp = 8,
	PageDown = 9,
	GetOwnServer = 10,
	Connect = 11,
	Edit = 12,
	ToggleSettings = 13,
	ScrollSettings = 14,
	EServerListHotkey_MAX = 15,
};

enum class ECanBePlacedResult : uint8_t {
	Success = 0,
	Success_Update = 1,
	Fail = 2,
	Fail_Stability = 3,
	Fail_Stability_NoData = 4,
	Fail_Overlaps = 5,
	Fail_LandClaim = 6,
	Fail_LoadingBuildingData = 7,
	Fail_InsideCollision = 8,
	Fail_DisallowedBuildLimit = 9,
	Fail_NoSocketData = 10,
	Fail_IncorrectSocketType = 11,
	Fail_OverlapPlayer = 12,
	ECanBePlacedResult_MAX = 13,
};

enum class EMenuPlacement : uint8_t {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MAX = 12,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class JourneyChapter : uint8_t {
	ChapterI = 0,
	ChapterII = 1,
	ChapterIII = 2,
	ChapterIV = 3,
	ChapterV = 4,
	ChapterVI = 5,
	ChapterVII = 6,
	ChapterVIII = 7,
	ChapterIX = 8,
	ChapterX = 9,
	None = 10,
	JourneyChapter_MAX = 11,
};

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EGameMetricsType : uint8_t {
	ItemCrafted = 0,
	EGameMetricsType_MAX = 1,
};

enum class EPublishResult : uint8_t {
	pfenum_Unknown = 0,
	pfenum_Pending = 1,
	pfenum_Succeeded = 2,
	pfenum_Failed = 3,
	pfenum_Canceled = 4,
	pfenum_MAX = 5,
};

enum class ETransactionStatus : uint8_t {
	pfenum_CreateCart = 0,
	pfenum_Init = 1,
	pfenum_Approved = 2,
	pfenum_Succeeded = 3,
	pfenum_FailedByProvider = 4,
	pfenum_DisputePending = 5,
	pfenum_RefundPending = 6,
	pfenum_Refunded = 7,
	pfenum_RefundFailed = 8,
	pfenum_ChargedBack = 9,
	pfenum_FailedByUber = 10,
	pfenum_FailedByPlayFab = 11,
	pfenum_Revoked = 12,
	pfenum_TradePending = 13,
	pfenum_Traded = 14,
	pfenum_Upgraded = 15,
	pfenum_StackPending = 16,
	pfenum_Stacked = 17,
	pfenum_Other = 18,
	pfenum_Failed = 19,
	pfenum_MAX = 20,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class ConnectionState : uint8_t {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4,
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

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
};

enum class EFCButtonToggleAction : uint8_t {
	ENever = 0,
	EAlways = 1,
	EWhenChecked = 2,
	EWhenUnchecked = 3,
	EFCButtonToggleAction_MAX = 4,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8_t {
	HRSST_InProcess = 0,
	HRSST_Socket = 1,
	HRSST_NamedPipe = 2,
	HRSST_MAX = 3,
};

enum class EAuthTokenType : uint8_t {
	pfenum_Email = 0,
	pfenum_MAX = 1,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
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

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
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

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class ESaveGameState : uint8_t {
	Exists = 0,
	EmptySlot = 1,
	SlotCorrupt = 2,
	InternalError = 3,
	InvalidUser = 4,
	BackupInProgress = 5,
	ESaveGameState_MAX = 6,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EDebugLevel : uint8_t {
	INFOL_INFO0 = 0,
	INFOL_INFO1 = 1,
	INFOL_INFO2 = 2,
	INFOL_IMPORTANT = 3,
	INFOL_CODEWARNING = 4,
	INFOL_DATAWARNING = 5,
	INFOL_DATAERROR = 6,
	INFOL_CODEERROR = 7,
	INFOL_MAX = 8,
};

enum class CharacterTintSlots : uint8_t {
	Skin = 0,
	Hair = 1,
	FacialHair = 2,
	Eyes = 3,
	Eyebrows = 4,
	EyeMakeup = 5,
	LipMakeup = 6,
	Warpaint = 7,
	CharacterTintSlots_MAX = 8,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
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

enum class EFriendListState : uint8_t {
	MainView = 0,
	AddFriend = 1,
	BlockFriend = 2,
	BlockFriendSession = 3,
	BlockPlayer = 4,
	RemoveFriend = 5,
	PasswordDialog = 6,
	Undefined = 7,
	EFriendListState_MAX = 8,
};

enum class ECharacterSubState : uint8_t {
	None = 0,
	Stunned = 1,
	Knockbacked = 2,
	Swim = 3,
	Fly = 4,
	Drinking = 5,
	Emoting = 6,
	Sprinting = 7,
	Failing = 8,
	Crouching = 9,
	LeavingEmote = 10,
	Attacking = 11,
	Sitting = 12,
	Dodge = 13,
	Exhausted = 14,
	PowerCharge = 15,
	ChargeHold = 16,
	Mounting = 17,
	UsingItem = 18,
	KnockbackImmune = 19,
	ECharacterSubState_MAX = 20,
};

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
};

enum class EMobileMSAASampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4,
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

enum class EGameServerState : uint8_t {
	Maintance = 0,
	Starting = 1,
	Running = 2,
	Stopped = 3,
	Stopping = 4,
	Updating = 5,
	Installing = 6,
	Unknown = 7,
	EGameServerState_MAX = 8,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	EThreePlayerSplitScreenType_MAX = 2,
};

enum class EGameplayTagSourceType : uint8_t {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	DataTable = 3,
	Invalid = 4,
	EGameplayTagSourceType_MAX = 5,
};

enum class EEffectType : uint8_t {
	pfenum_Allow = 0,
	pfenum_Deny = 1,
	pfenum_MAX = 2,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

enum class ESortCategories : uint8_t {
	Official = 0,
	ServerName = 1,
	ServerType = 2,
	Region = 3,
	PlayerCount = 4,
	ServerAge = 5,
	BattlEye = 6,
	Ping = 7,
	Level = 8,
	ServerScore = 9,
	MapName = 10,
	ESortCategories_MAX = 11,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class ECombatModeModifier : uint8_t {
	None = 0,
	Fast = 1,
	Mayhem = 2,
	CombatModeModifier_MAX = 3,
	ECombatModeModifier_MAX = 4,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class EServerCommunity : uint8_t {
	All = 0,
	Purist = 1,
	Relaxed = 2,
	HardCore = 3,
	RolePlaying = 4,
	Experimental = 5,
	Community_MAX = 6,
	EServerCommunity_MAX = 7,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5,
};

enum class ESenseUpdateAction : uint8_t {
	NotSensed = 0,
	Sensed = 1,
	MomentarilySensed = 2,
	ESenseUpdateAction_MAX = 3,
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

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EquipmentSlots : uint8_t {
	None = 0,
	MainHand = 1,
	OffHand = 2,
	Head = 3,
	Torso = 4,
	Arms = 5,
	Legs = 6,
	Feet = 7,
	DualHand = 8,
	ResidentUnarmedLeft = 9,
	ResidentUnarmedRight = 10,
	WarPaint = 11,
	PetWeapon = 12,
	PetArmor = 13,
	PetSaddle = 14,
	SlotCount = 15,
	EquipmentSlots_MAX = 16,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class ERejoinStatus : uint8_t {
	NoMatchToRejoin = 0,
	RejoinAvailable = 1,
	UpdatingStatus = 2,
	NeedsRecheck = 3,
	NoMatchToRejoin_MatchEnded = 4,
	ERejoinStatus_MAX = 5,
};

enum class EGfeSDKHighlightType : uint8_t {
	NONE = 0,
	Milestone = 1,
	Achievement = 2,
	Incident = 3,
	StateChange = 4,
	MAX = 5,
	EGfeSDKHighlightType_MAX = 6,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	EAnimGroupRole_MAX = 4,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class ETargetType : uint8_t {
	Invalid = 0,
	Combat = 1,
	Inspect = 2,
	ETargetType_MAX = 3,
};

enum class ELoginIdentityProvider : uint8_t {
	pfenum_Unknown = 0,
	pfenum_PlayFab = 1,
	pfenum_Custom = 2,
	pfenum_GameCenter = 3,
	pfenum_GooglePlay = 4,
	pfenum_Steam = 5,
	pfenum_XBoxLive = 6,
	pfenum_PSN = 7,
	pfenum_Kongregate = 8,
	pfenum_Facebook = 9,
	pfenum_IOSDevice = 10,
	pfenum_AndroidDevice = 11,
	pfenum_Twitch = 12,
	pfenum_WindowsHello = 13,
	pfenum_GameServer = 14,
	pfenum_CustomServer = 15,
	pfenum_NintendoSwitch = 16,
	pfenum_FacebookInstantGames = 17,
	pfenum_OpenIdConnect = 18,
	pfenum_MAX = 19,
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

enum class EEmitterRenderModuleType : uint8_t {
	RMT_None = 0,
	RMT_Sprites = 1,
	RMT_Ribbon = 2,
	RMT_Trails = 3,
	RMT_Meshes = 4,
	RMT_MAX = 5,
};

enum class EServerVoiceChat : uint8_t {
	Disabled = 0,
	Enabled = 1,
	VoiceChat_MAX = 2,
	EServerVoiceChat_MAX = 3,
};

enum class EGranitePlatform : uint8_t {
	Windows = 0,
	PS4 = 1,
	Android = 2,
	XboxOne = 3,
	MAX = 4,
	EGranitePlatform_MAX = 5,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	EDrawDebugItemType_MAX = 4,
};

enum class VisualMeshType : uint8_t {
	None = 0,
	StaticMesh = 1,
	SkeletalMesh = 2,
	VisualMeshType_MAX = 3,
};

enum class ERecipeItemFlags : uint8_t {
	SaveRecipeItem = 0,
	GiveDLCRecipeOnSpawn = 1,
	ERecipeItemFlags_MAX = 2,
};

enum class EDirectionalInputType : uint8_t {
	Forwards = 0,
	LeanTurnLeft = 1,
	LeanTurnRight = 2,
	SteepTurnLeft = 3,
	SteepTurnRight = 4,
	Braking = 5,
	StraightBackwards = 6,
	SteeringBackwardsLeft = 7,
	SteeringBackwardsRight = 8,
	EDirectionalInputType_MAX = 9,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class EThrallProfession : uint8_t {
	Performer = 0,
	Archer = 1,
	Blacksmith = 2,
	Armorer = 3,
	Carpenter = 4,
	Smelter = 5,
	Tanner = 6,
	Cook = 7,
	Fighter = 8,
	Taskmaster = 9,
	Merchant = 10,
	Mason = 11,
	Lamplighter = 12,
	Priest = 13,
	Alchemist = 14,
	Bearer = 15,
	Barber = 16,
	Storekeeper = 17,
	Beastmaster = 18,
	Miner = 19,
	Lumberjack = 20,
	Sorcerer = 21,
	Musician = 22,
	Jeweler = 23,
	Scholar = 24,
	Keeper = 25,
	Brewer = 26,
	Chamberlain = 27,
	Artist = 28,
	Architect = 29,
	Bowyer = 30,
	Candlemaker = 31,
	Cartographer = 32,
	Diplomat = 33,
	Dyer = 34,
	Engineer = 35,
	Engraver = 36,
	Farmer = 37,
	Fisherman = 38,
	Forester = 39,
	Furrier = 40,
	Gardener = 41,
	Gravedigger = 42,
	Herald = 43,
	Herbalist = 44,
	Innkeeper = 45,
	Jester = 46,
	Messenger = 47,
	Minstrel = 48,
	Potter = 49,
	Sailor = 50,
	Scribe = 51,
	Servant = 52,
	Shipwright = 53,
	Stonecarver = 54,
	Weaver = 55,
	Blacksmith_Penetration_Focus = 56,
	Blacksmith_Damage_Focus = 57,
	Blacksmith_Durability_Focus = 58,
	Carpenter_Penetration_Focus = 59,
	Carpenter_Damage_Focus = 60,
	Carpenter_Durability_Focus = 61,
	Taskmaster_Concussion_Damage_Focus = 62,
	Taskmaster_Durability_Focus = 63,
	Priest_Damage_Focus = 64,
	Priest_Armor_Focus = 65,
	Priest_Durability_Focus = 66,
	Armorer_Armor_Focus = 67,
	Armorer_Weight_reduction_Focus = 68,
	Armorer_Durability_Focus = 69,
	ThrallProfession_MAX = 70,
	EThrallProfession_MAX = 71,
};

enum class CharacterIntSlots : uint8_t {
	Voice = 0,
	CharacterIntSlots_MAX = 1,
};

enum class EFontFallback : uint8_t {
	FF_NoFallback = 0,
	FF_LocalizedFallback = 1,
	FF_LastResortFallback = 2,
	FF_Max = 3,
};

enum class CharacterBoolSlots : uint8_t {
	IsFemale = 0,
	CharacterBoolSlots_MAX = 1,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class EFavoriteFlag : uint8_t {
	None = 0,
	Favorite = 1,
	History = 2,
	Unknown = 3,
	EFavoriteFlag_MAX = 4,
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

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class SubscriptionMode : uint8_t {
	Accept = 0,
	Defer = 1,
	SubscriptionMode_MAX = 2,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_Disable = 2,
	PBO_MAX = 3,
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

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class CharacterGod : uint8_t {
	None = 0,
	Crom = 1,
	Set = 2,
	Yog = 3,
	Mitra = 4,
	Derketo = 5,
	JhebbalSag = 6,
	Bel = 7,
	Ymir = 8,
	Zath = 9,
	CharacterGod_MAX = 10,
};

enum class EBiographySharing : uint8_t {
	Public = 0,
	Clan = 1,
	Private = 2,
	EBiographySharing_MAX = 3,
};

enum class WeaponItemTypes : uint8_t {
	None = 0,
	Sword = 1,
	Mace2H = 2,
	Hatchet = 3,
	Pickaxe = 4,
	Mace = 5,
	Spear = 6,
	Spear2H = 7,
	Axe = 8,
	Shield = 9,
	FistWeapon = 10,
	Throwing = 11,
	Bow = 12,
	Crossbow = 13,
	Dagger = 14,
	Multitool = 15,
	SetTool = 16,
	YogTool = 17,
	MitraTool = 18,
	YmirTool = 19,
	Sickle = 20,
	Cleaver = 21,
	JhebbalTool = 22,
	DerketoTool = 23,
	Skinningknife = 24,
	CustomTool00 = 25,
	CustomTool01 = 26,
	CustomTool02 = 27,
	CustomTool03 = 28,
	CustomTool04 = 29,
	CustomTool05 = 30,
	CustomTool06 = 31,
	CustomTool07 = 32,
	CustomTool08 = 33,
	CustomTool09 = 34,
	RepairTool = 35,
	Orb = 36,
	ZathTool = 37,
	WeaponItemTypes_MAX = 38,
};

enum class EGameBuildStatus : uint8_t {
	pfenum_Available = 0,
	pfenum_Validating = 1,
	pfenum_InvalidBuildPackage = 2,
	pfenum_Processing = 3,
	pfenum_FailedToProcess = 4,
	pfenum_MAX = 5,
};

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class EUpdateCompletionStatus : uint8_t {
	UpdateUnknown = 0,
	UpdateSuccess = 1,
	UpdateSuccess_NoChange = 2,
	UpdateSuccess_NeedsReload = 3,
	UpdateSuccess_NeedsRelaunch = 4,
	UpdateSuccess_NeedsPatch = 5,
	UpdateFailure_PatchCheck = 6,
	UpdateFailure_HotfixCheck = 7,
	UpdateFailure_NotLoggedIn = 8,
	EUpdateCompletionStatus_MAX = 9,
};

enum class CauseOfDeath : uint8_t {
	NewEnumerator8 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator3 = 4,
	NewEnumerator4 = 5,
	NewEnumerator5 = 6,
	NewEnumerator6 = 7,
	NewEnumerator7 = 8,
	NewEnumerator9 = 9,
	NewEnumerator10 = 10,
	NewEnumerator11 = 11,
	NewEnumerator12 = 12,
	CauseOfDeath_MAX = 13,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class TransmitPolicy : uint8_t {
	No = 0,
	Yes = 1,
	TransmitPolicy_MAX = 2,
};

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	EModifyCurveApplyMode_MAX = 3,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
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

enum class EMaterialShadingModel : uint8_t {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_MAX = 10,
};

enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class EBiographyAccess : uint8_t {
	Public = 0,
	Clan = 1,
	Private = 2,
	EBiographyAccess_MAX = 3,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class EToggleInput : uint8_t {
	None = 0,
	Walk = 1,
	Sprint = 2,
	EToggleInput_MAX = 3,
};

enum class ERegion : uint8_t {
	pfenum_USCentral = 0,
	pfenum_USEast = 1,
	pfenum_EUWest = 2,
	pfenum_Singapore = 3,
	pfenum_Japan = 4,
	pfenum_Brazil = 5,
	pfenum_Australia = 6,
	pfenum_MAX = 7,
};

enum class ETextureTargetOutput : uint8_t {
	None = 0,
	HeightReference = 1,
	Imprints = 2,
	FluidSimColour = 3,
	FluidSimNormal = 4,
	ETextureTargetOutput_MAX = 5,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class EVehicleDifferential4W : uint8_t {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6,
};

enum class EGraphicsQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Ultra = 3,
	Cinematic = 4,
	Custom = 5,
	Auto = 6,
	EGraphicsQuality_MAX = 7,
};

enum class ETranslucencyLightingMode : uint8_t {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6,
};

enum class EGUIModuleCategory : uint8_t {
	HUD = 0,
	Fullscreen = 1,
	Popup = 2,
	Subtitle = 3,
	EGUIModuleCategory_MAX = 4,
};

enum class EFullscreenGUIAction : uint8_t {
	None = 0,
	Hide = 1,
	Close = 2,
	CloseAndLock = 3,
	EFullscreenGUIAction_MAX = 4,
};

enum class ETeamMessageType : uint8_t {
	CryForHelp = 0,
	TargetSpotted = 1,
	EngagingInFight = 2,
	Lure = 3,
	ETeamMessageType_MAX = 4,
};

enum class EHealthBarStyle : uint8_t {
	Normal = 0,
	MiniBoss = 1,
	WorldBoss = 2,
	UniqueThrall = 3,
	EHealthBarStyle_MAX = 4,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class EInstanceSMDataFormat : uint8_t {
	Matrix4x4 = 0,
	Matrix3x4 = 1,
	EInstanceSMDataFormat_MAX = 2,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Custom = 1,
	TLT_MAX = 2,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class ENavigationPrimitiveQueryStatus : uint8_t {
	UnknownSpawner = 0,
	NoDataForSpawner = 1,
	AllDataBlacklistedForSpawner = 2,
	Success = 3,
	ENavigationPrimitiveQueryStatus_MAX = 4,
};

enum class EPushNotificationPlatform : uint8_t {
	pfenum_ApplePushNotificationService = 0,
	pfenum_GoogleCloudMessaging = 1,
	pfenum_MAX = 2,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class EServerRegion : uint8_t {
	EU = 0,
	America = 1,
	Asia = 2,
	Oceania = 3,
	SouthAmerica = 4,
	Japan = 5,
	All = 6,
	Region_MAX = 7,
	EServerRegion_MAX = 8,
};

enum class ESoundTable : uint8_t {
	Footstep = 0,
	VoiceSet = 1,
	WeaponBreak = 2,
	WalkFoley = 3,
	ESoundTable_MAX = 4,
};

enum class EThrallAIState : uint8_t {
	Guarding = 0,
	Following = 1,
	Scouting = 2,
	ReturningHome = 3,
	EThrallAIState_MAX = 4,
};

enum class EItemCategory : uint8_t {
	Gear = 0,
	Resource = 1,
	Building = 2,
	Other = 3,
	EItemCategory_MAX = 4,
};

enum class ERequestError : uint8_t {
	ClientRatingTimeout = 0,
	SubmitRatingTimeout = 1,
	ServerRatingTimeout = 2,
	InvalidClientId = 3,
	InvalidAuthToken = 4,
	InvalidServerId = 5,
	InvalidResponse = 6,
	InvalidWorld = 7,
	InvalidURL = 8,
	RequestInProgress = 9,
	RequestCouldNotBeStarted = 10,
	ParsingResponseFailed = 11,
	NoResponseFromServer = 12,
	Other = 13,
	ERequestError_MAX = 14,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class EDemoPlayFailure : uint8_t {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	EDemoPlayFailure_MAX = 4,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
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

enum class ESignVisibility : uint8_t {
	All = 0,
	OwnAndGuild = 1,
	None = 2,
	ESignVisibility_MAX = 3,
};

enum class EStatModifierID : uint8_t {
	Default = 0,
	Corruption = 1,
	PeopleCarried = 2,
	EquippedItems = 3,
	Weather = 4,
	TimeOfDay = 5,
	Shelter = 6,
	Buff = 7,
	Item = 8,
	Temperature = 9,
	Perk = 10,
	EStatModifierID_MAX = 11,
};

enum class ECharacterTransferError : uint8_t {
	None = 0,
	AntiFlood = 1,
	NoWorld = 2,
	InvalidOSS = 3,
	InvalidUserId = 4,
	InvalidFLS = 5,
	InvalidPlayerSession = 6,
	CantFindFunction = 7,
	InvalidPlayerController = 8,
	TokenFailed = 9,
	ExportFailed = 10,
	ImportFailed = 11,
	InvalidServerSettings = 12,
	CharacterAlreadyExported = 13,
	Cooldown = 14,
	IncorrectLevelOfEngagement = 15,
	FeatureDisabled = 16,
	CharacterTransferDisabledOnServer = 17,
	CannotImportDirectlyFromSameServer = 18,
	OriginServerNotOnWhitelist = 19,
	InvalidGameMode = 20,
	ECharacterTransferError_MAX = 21,
};

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EParticleEventType : uint8_t {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6,
};

enum class EItemFlags : uint8_t {
	CanBeLooted = 0,
	ThrallCaptureItem = 1,
	DevOnlyItem = 2,
	CreatureHead = 3,
	BossCreatureHead = 4,
	IsPotion = 5,
	CanBeDismantled = 6,
	LoseMaxDurabilityOnRepair = 7,
	EItemFlags_MAX = 8,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
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

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_MAX = 6,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class CharacterEnumSlots : uint8_t {
	God = 0,
	Race = 1,
	CrimeOne = 2,
	CrimeTwo = 3,
	CrimeThree = 4,
	CharacterEnumSlots_MAX = 5,
};

enum class EUpdateRateShiftBucket : uint8_t {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class ChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class EFriendListHotkey : uint8_t {
	Back = 0,
	CopyFuncomId = 1,
	AddFriend = 2,
	RefreshLists = 3,
	Add = 4,
	Remove = 5,
	Block = 6,
	Join = 7,
	Edit = 8,
	EFriendListHotkey_MAX = 9,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class EStatisticVersionStatus : uint8_t {
	pfenum_Active = 0,
	pfenum_SnapshotPending = 1,
	pfenum_Snapshot = 2,
	pfenum_ArchivalPending = 3,
	pfenum_Archived = 4,
	pfenum_MAX = 5,
};

enum class EEmailVerificationStatus : uint8_t {
	pfenum_Unverified = 0,
	pfenum_Pending = 1,
	pfenum_Confirmed = 2,
	pfenum_MAX = 3,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
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

enum class EResultTableNodeType : uint8_t {
	pfenum_ItemId = 0,
	pfenum_TableId = 1,
	pfenum_MAX = 2,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
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

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class EServerSettingsCategory : uint8_t {
	General = 0,
	Progression = 1,
	DayAndNight = 2,
	Survival = 3,
	Combat = 4,
	Harvesting = 5,
	Crafting = 6,
	Abandonment = 7,
	Chat = 8,
	RegionalAccess = 9,
	Purge = 10,
	Pets = 11,
	Siptah = 12,
	EServerSettingsCategory_MAX = 13,
};

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class EMovementMode : uint8_t {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_Climbing = 7,
	MOVE_MAX = 8,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class EGraniteAnisotropyRatio : uint8_t {
	GAR_AnisotropyRatio1 = 0,
	GAR_AnisotropyRatio2 = 1,
	GAR_AnisotropyRatio4 = 2,
	GAR_AnisotropyRatio8 = 3,
	GAR_MAX = 4,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class EInventoryType : uint8_t {
	Backpack = 0,
	Equipment = 1,
	ShortcutBar = 2,
	Recipes = 3,
	PlaceableInventory = 4,
	CraftingQueue = 5,
	Feats = 6,
	Emotes = 7,
	CraftingArtisanInventory = 8,
	CraftingArtisanRecipeInventory = 9,
	SiegeWeaponCounterWeightInventory = 10,
	WeaponInventory = 11,
	PetInventory = 12,
	CraftingIngredientsInventory = 13,
	DismantlerInventory = 14,
	Invalid = 15,
	EInventoryType_MAX = 16,
};

enum class EInventorySortTypes : uint8_t {
	ByName = 0,
	ByWeight = 1,
	ByAge = 2,
	Custom = 3,
	EInventorySortTypes_MAX = 4,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_MAX = 3,
};

enum class EGUIControlMode : uint8_t {
	e_Mouse = 0,
	e_Gamepad = 1,
	e_MAX = 2,
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

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
};

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
};

enum class EExilesMap : uint8_t {
	EXILESMAP_None = 0,
	EXILESMAP_ExiledLands = 1,
	EXILESMAP_Siptah = 2,
	EXILESMAP_MAX = 3,
};

enum class ECharacterCopyResults : uint8_t {
	Succeeded = 0,
	QueryError = 1,
	Timeout = 2,
	ECharacterCopyResults_MAX = 3,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
};

enum class EGameItemGUICategory : uint8_t {
	Weapon = 0,
	Armor = 1,
	Material = 2,
	Consumable = 3,
	BuildingItem = 4,
	PetItem = 5,
	Decoration = 6,
	Utility = 7,
	Tools = 8,
	Craftingstations = 9,
	Warpaints = 10,
	CategoryCount = 11,
	EGameItemGUICategory_MAX = 12,
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

enum class EPurgeEventType : uint8_t {
	None = 0,
	PurgePrep = 1,
	WaveBegin = 2,
	WaveEnded = 3,
	PurgeEnded = 4,
	EPurgeEventType_MAX = 5,
};

enum class ELocationAccuracy : uint8_t {
	LA_ThreeKilometers = 0,
	LA_OneKilometer = 1,
	LA_HundredMeters = 2,
	LA_TenMeters = 3,
	LA_Best = 4,
	LA_Navigation = 5,
	LA_MAX = 6,
};

enum class EConcernCategory : uint8_t {
	pfenum_None = 0,
	pfenum_OffensiveContent = 1,
	pfenum_ChildExploitation = 2,
	pfenum_MalwareOrVirus = 3,
	pfenum_PrivacyConcerns = 4,
	pfenum_MisleadingApp = 5,
	pfenum_PoorPerformance = 6,
	pfenum_ReviewResponse = 7,
	pfenum_SpamAdvertising = 8,
	pfenum_Profanity = 9,
	pfenum_MAX = 10,
};

enum class ETitleActivationStatus : uint8_t {
	pfenum_None = 0,
	pfenum_ActivatedTitleKey = 1,
	pfenum_PendingSteam = 2,
	pfenum_ActivatedSteam = 3,
	pfenum_RevokedSteam = 4,
	pfenum_MAX = 5,
};

enum class EContinentCode : uint8_t {
	pfenum_AF = 0,
	pfenum_AN = 1,
	pfenum_AS = 2,
	pfenum_EU = 3,
	pfenum_NA = 4,
	pfenum_OC = 5,
	pfenum_SA = 6,
	pfenum_MAX = 7,
};

enum class EUVStrech : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	VeryLarge = 3,
	EUVStrech_MAX = 4,
};

enum class EFCDamageType : uint8_t {
	Normal = 0,
	Blocked = 1,
	Critical = 2,
	Glanced = 3,
	EFCDamageType_MAX = 4,
};

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

enum class LoginState : uint8_t {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4,
};

enum class EGameEventType : uint8_t {
	ServerStarted = 0,
	ServerShutdown = 1,
	CHARACTER_BEGIN = 2,
	ThrallKilled = 3,
	BuildableDestroyedDamage = 4,
	BuildingComponentDestroyedDamage = 5,
	ThrallReturnedHome = 6,
	ThrallHungerStateChange_DEPRECATED = 7,
	UnauthorizedPlaceableInventoryAccess = 8,
	FriendlyPlaceableInventoryAccess = 9,
	UnauthorizedActorInventoryAccess = 10,
	FriendlyActorInventoryAccess = 11,
	AvatarSummoned = 12,
	DomeSummoned = 13,
	AltarTierThreeCraftingStarted = 14,
	AltarTierThreeCraftingEnded = 15,
	BuildingComponentDismantled = 16,
	BuildableDismantled = 17,
	BuildableDemolished = 18,
	ThrallStolen = 19,
	CharacterDeathDamage = 20,
	CharacterDeathHunger = 21,
	CharacterDeathTemperature = 22,
	ThrallDeleted = 23,
	CharacterDeathUndermesh = 24,
	UnfinishedThrallStolen = 25,
	SYSTEMS_BEGIN = 26,
	BuildableDecayStateChange = 27,
	BuildableDestroyedStabilityLost = 28,
	BuildableDestroyedDecay = 29,
	BuildingComponentDestroyedStabilityLost = 30,
	PurgeStarted = 31,
	PurgeEnded = 32,
	LootbagDecayed = 33,
	LootbagDestroyed = 34,
	ThrallDecayed = 35,
	BuildingComponentNotLoadedInsideSpline = 36,
	BuildingComponentNotLoadedInsideCollision = 37,
	BuildingDestroyedEmpty = 38,
	EGameEventType_MAX = 39,
};

enum class EExperimentType : uint8_t {
	pfenum_Active = 0,
	pfenum_Snapshot = 1,
	pfenum_MAX = 2,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class EClientTransitionState : uint8_t {
	None = 0,
	WaitForCharacterCreationToStream = 1,
	WaitForGameToStream = 2,
	WaitForServerToAcknowledgeWorldLoaded = 3,
	EClientTransitionState_MAX = 4,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
};

enum class EResolutionOutcome : uint8_t {
	pfenum_Revoke = 0,
	pfenum_Reinstate = 1,
	pfenum_Manual = 2,
	pfenum_MAX = 3,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
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
	MapDLCMissing = 12,
	ETravelFailure_MAX = 13,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EStaminaDegenerationSourceBitmask : uint8_t {
	Attack = 0,
	Sprint = 1,
	Swim = 2,
	Dodge = 3,
	Climbing = 4,
	ChargeHold = 5,
	EStaminaDegenerationSourceBitmask_MAX = 6,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class EDOFMode : uint8_t {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7,
};

enum class EAttackType : uint8_t {
	NA = 0,
	Melee = 1,
	Charge = 2,
	Taunt = 3,
	BallisticProjectile = 4,
	Shield = 5,
	EAttackType_MAX = 6,
};

enum class EItemFloatStatID : uint8_t {
	WeaponStaminaHeavyChargedRegenModifier = 0,
	WeaponSpeedHeavyChargedModifier = 1,
	ConeAngle = 2,
	ConeMaxDistance = 3,
	ArmourValue = 4,
	EncumbranceWeight = 5,
	StaminaCostMultiplier = 6,
	MaxDurability = 7,
	CurrentDurability = 8,
	TimeSpentCrafting = 9,
	BurnTime = 10,
	ArmorPen = 11,
	PerishRate = 12,
	ThrallCraftingSpeed = 13,
	ThrallCraftingCost = 14,
	ThrallCraftingFuel = 15,
	TimeToCraft = 16,
	DefaultTimeToCraft = 17,
	MaxAttackReach = 18,
	MinAttackDistance = 19,
	ThrallEntertainerPotency = 20,
	WeaponEffectWidth = 21,
	WeaponEffectHeight = 22,
	MinAttackReach = 23,
	StaminaClimbingCostMultiplier = 24,
	RepairXP = 25,
	CoolDownTime = 26,
	ReuseTime = 27,
	EItemFloatStatID_MAX = 28,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	EHMDTrackingOrigin_MAX = 2,
};

enum class EGfeSDKReturnCode : uint8_t {
	Success = 0,
	SuccessIpcOldSdk = 1,
	SuccessIpcOldGfe = 2,
	Error = 3,
	ErrorGfeVersion = 4,
	ErrorSdkVersion = 5,
	ErrorModuleNotLoaded = 6,
	ErrorWrongTimeRangeSet = 7,
	EGfeSDKReturnCode_MAX = 8,
};

enum class EDyeChannels : uint8_t {
	MaleChannel1 = 0,
	MaleChannel2 = 1,
	MaleChannel3 = 2,
	MaleChannel4 = 3,
	FemaleChannel1 = 4,
	FemaleChannel2 = 5,
	FemaleChannel3 = 6,
	FemaleChannel4 = 7,
	EDyeChannels_MAX = 8,
};

