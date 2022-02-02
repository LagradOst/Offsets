// Created by BlueFire1337
// Updated 2022-01-27
// Generated 2022-02-02

#pragma once

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class ELoudnessNRTCurveTypeEnum : uint8_t {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	None = 4,
	ELoudnessNRTCurveTypeEnum_MAX = 5,
};

enum class EIdleState : uint8_t {
	MainMenu = 0,
	Custo = 1,
	Lobby = 2,
	Overview = 3,
	UserProfile = 4,
	PlayerProfile = 5,
	EIdleState_MAX = 6,
};

enum class ESocialUserStatusTextType : uint8_t {
	None = 0,
	Status = 1,
	Explanation = 2,
	MAX = 3,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EFieldPhysicsDefaultFields : uint8_t {
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX = 6,
};

enum class ECTHatchingAnimationType : uint8_t {
	EggToBaby = 0,
	BabyGrow = 1,
	BabyToAdult = 2,
	ECTHatchingAnimationType_MAX = 3,
};

enum class EGAAdAction : uint8_t {
	undefined = 0,
	clicked = 1,
	show = 2,
	failedshow = 3,
	rewardreceived = 4,
	request = 5,
	loaded = 6,
	EGAAdAction_MAX = 7,
};

enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalToneCurveHDR = 9,
	SCS_MAX = 10,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
};

enum class EHitEnum : uint8_t {
	HIT_None = 0,
	HIT_Wall = 1,
	HIT_Flesh = 2,
	HIT_MAX = 3,
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

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
};

enum class ESocialUserButtonState : uint8_t {
	Normal = 0,
	Focused = 1,
	Pressed = 2,
	FocusedPressed = 3,
	ESocialUserButtonState_MAX = 4,
};

enum class ENDISkeletalMesh_SkinningMode : uint8_t {
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4,
};

enum class ECTSoundBankEnum : uint8_t {
	SB_DRG_BreathGrowl = 0,
	SB_DRG_FireBreath = 1,
	SB_DRG_HurtFire = 2,
	SB_DRG_Killer = 3,
	SB_DRG_LongGrowl = 4,
	SB_DRG_LowBreath = 5,
	SB_DRG_LowBreathLowProb = 6,
	SB_DRG_Refill = 7,
	SB_DRG_ShortGrowl = 8,
	SB_DRG_ShortGrowl_Vener = 9,
	SB_JUG_Effort = 10,
	SB_JUG_Hurt = 11,
	SB_JUG_ShortEffort = 12,
	SB_JUG_Slap = 13,
	SB_MAX = 14,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EActionName : uint8_t {
	Fire = 0,
	FireFlamme = 1,
	SwitchWeapon = 2,
	GadgetFire = 3,
	CharacClassPower = 4,
	Boost = 5,
	Start = 6,
	ForceLock = 7,
	Minimap = 8,
	ScoreBoard = 9,
	Menu = 10,
	DebugCamera = 11,
	FakeFrag = 12,
	FakeAssist = 13,
	Suicide = 14,
	InvertY = 15,
	Brake = 16,
	DebugImpact = 17,
	DebugResetPosition = 18,
	WeaponBow_InvertCamY = 19,
	DropFlag = 20,
	ThrowFlag = 21,
	Ping = 22,
	Last = 23,
	EActionName_MAX = 24,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class EARServiceAvailability : uint8_t {
	UnknownError = 0,
	UnknownChecking = 1,
	UnknownTimedOut = 2,
	UnsupportedDeviceNotCapable = 3,
	SupportedNotInstalled = 4,
	SupportedVersionTooOld = 5,
	SupportedInstalled = 6,
	EARServiceAvailability_MAX = 7,
};

enum class EBallistaStatus : uint8_t {
	None = 0,
	Search = 1,
	Repair = 2,
	EBallistaStatus_MAX = 3,
};

enum class EPWStickerMask : uint8_t {
	None = 0,
	MskBestValue = 1,
	MskSale = 2,
	MskBonus = 3,
	EPWStickerMask_MAX = 4,
};

enum class EBadMessageType : uint8_t {
	BADMESSAGE_None = 0,
	BADMESSAGE_OOB = 1,
	BADMESSAGE_GadgetAmmo = 2,
	BADMESSAGE_PowerAmmo = 3,
	BADMESSAGE_TunnelAction = 4,
	BADMESSAGE_FlagAction = 5,
	BADMESSAGE_ArtifactAction = 6,
	BADMESSAGE_BombAction = 7,
	BADMESSAGE_JewelAction = 8,
	BADMESSAGE_SpearAction = 9,
	BADMESSAGE_WallClose = 10,
	BADMESSAGE_CantMine = 11,
	BADMESSAGE_PoTargetEnemy = 12,
	BADMESSAGE_PoTargetAlly = 13,
	BADMESSAGE_AbTargetEnemy = 14,
	BADMESSAGE_PingAbuse = 15,
	BADMESSAGE_BankClosed = 16,
	BADMESSAGE_RavagerAim = 17,
	BADMESSAGE_MAX = 18,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class EResolutionOutcome : uint8_t {
	pfenum_Revoke = 0,
	pfenum_Reinstate = 1,
	pfenum_Manual = 2,
	pfenum_MAX = 3,
};

enum class EPfTriggerType : uint8_t {
	pfenum_HTTP = 0,
	pfenum_Queue = 1,
	pfenum_MAX = 2,
};

enum class ECameraShakePlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3,
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

enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4,
};

enum class ECT3DMarkerType : uint8_t {
	None = 0,
	Static = 1,
	Dynamic = 2,
	MAX = 3,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	IgnoreZAccumulate = 2,
	ERootMotionSourceSettingsFlags_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EARCaptureType : uint8_t {
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	HandMesh = 4,
	EARCaptureType_MAX = 5,
};

enum class EBerserkType : uint8_t {
	BRSRK_Basic = 0,
	BRSRK_WindGuard = 1,
	BRSRK_LAST_DONT_USE = 2,
	BRSRK_MAX = 3,
};

enum class ECTBreadcrumbType : uint8_t {
	Undefined = 0,
	Item = 1,
	Raw = 2,
	ShopSale = 3,
	Count = 4,
	ECTBreadcrumbType_MAX = 5,
};

enum class EInputAnalyticsDevice : uint8_t {
	EUndefined = 0,
	EMouse = 1,
	EKeyboard = 2,
	EGamepad = 3,
	EInputAnalyticsDevice_MAX = 4,
};

enum class ELeaderboardEntryTab : uint8_t {
	None = 0,
	HOME = 1,
	PLAY = 2,
	MAX = 3,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class EHoudiniLandscapeOutputBakeType : uint8_t {
	Detachment = 0,
	BakeToImage = 1,
	BakeToWorld = 2,
	InValid = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4,
};

enum class EARSessionStatus : uint8_t {
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7,
};

enum class EHoudiniMultiParmModificationType : uint8_t {
	None = 0,
	Inserted = 1,
	Removed = 2,
	Modified = 3,
	EHoudiniMultiParmModificationType_MAX = 4,
};

enum class EDynamicPanelMode : uint8_t {
	None = 0,
	Enableability = 1,
	Visibility = 2,
	EDynamicPanelMode_MAX = 3,
};

enum class EPopcornFXSplineTransforms : uint8_t {
	SplineComponentRelativeTr = 0,
	SplineComponentWorldTr = 1,
	AttrSamplerRelativeTr = 2,
	AttrSamplerWorldTr = 3,
	EPopcornFXSplineTransforms_MAX = 4,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
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

enum class ENoiseFunction : uint8_t {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6,
};

enum class EMultiBoxType : uint8_t {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	EMultiBoxType_MAX = 6,
};

enum class EDemoPlayFailure : uint8_t {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9,
};

enum class MediaTextureOrientation : uint8_t {
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4,
};

enum class ELightUnits : uint8_t {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3,
};

enum class EDamageableType : uint8_t {
	DT_Player = 0,
	DT_Mine = 1,
	DT_GenericNPC = 2,
	DT_TreasureNPC = 3,
	DT_Ballista = 4,
	DT_MAX = 5,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class ECTSnapObjectType : uint8_t {
	None = 0,
	DetectionWidget = 1,
	IndicatorName = 2,
	Max = 3,
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
};

enum class ETitleMultiplayerServerEnabledStatus : uint8_t {
	pfenum_Initializing = 0,
	pfenum_Enabled = 1,
	pfenum_Disabled = 2,
	pfenum_MAX = 3,
};

enum class EScrollingButtonStatus : uint8_t {
	Center = 0,
	Right = 1,
	Left = 2,
	EScrollingButtonStatus_MAX = 3,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
};

enum class EFlamethrowerMode : uint8_t {
	NoTarget = 0,
	ActorTarget = 1,
	SurfaceTarget = 2,
	EFlamethrowerMode_MAX = 3,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class EBoneFilterActionOption : uint8_t {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3,
};

enum class EChaosWeightMapTarget : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	AnimDriveDamping = 5,
	TetherStiffness = 6,
	EChaosWeightMapTarget_MAX = 7,
};

enum class EPrivacyStatus : uint8_t {
	None = 0,
	Public = 1,
	Private = 2,
	MAX = 3,
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

enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

enum class EConstantQFFTSizeEnum : uint8_t {
	Min = 0,
	XXSmall = 1,
	XSmall = 2,
	Small = 3,
	Medium = 4,
	Large = 5,
	XLarge = 6,
	XXLarge = 7,
	Max = 8,
};

enum class ECTConquestRole : uint8_t {
	Invalid = 0,
	Attacker = 1,
	Defender = 2,
	ECTConquestRole_MAX = 3,
};

enum class ECTMatchLockReason : uint8_t {
	Undefined = 0,
	SquadJoining = 1,
	LeaverInSquad = 2,
	EarlyLeaver = 3,
	CancelBuffer = 4,
	SquadBusy = 5,
	ECTMatchLockReason_MAX = 6,
};

enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

enum class EMapType : uint8_t {
	MAP_CityOfAkrar = 0,
	MAP_HunavatnLakeTDM = 1,
	MAP_HunavatnLakeLastTeamStanding = 2,
	MAP_HunavatnLakeCaptureTheFlag = 3,
	MAP_HunavatnLakeConquest = 4,
	MAP_HunavatnLakeFreeFlight = 5,
	MAP_HunavatnLakeBattle = 6,
	MAP_HunavatnLakeTreasure = 7,
	MAP_HunavatnLakeFreeForAll = 8,
	MAP_HunavatnLakeTDM3v3 = 9,
	MAP_JordanTDM = 10,
	MAP_JordanLastTeamStanding = 11,
	MAP_JordanCaptureTheFlag = 12,
	MAP_JordanConquest = 13,
	MAP_JordanTreasure = 14,
	MAP_JordanFreeForAll = 15,
	MAP_JihSnowTreasure = 16,
	MAP_JihSnowTDM = 17,
	MAP_JihSnowCaptureTheFlag = 18,
	MAP_BasinTDM = 19,
	MAP_BasinTDM_3v3 = 20,
	MAP_BasinRookie = 21,
	MAP_BasinSKM_3v3 = 22,
	MAP_BasinTutorial = 23,
	MAP_HarbourTreasure = 24,
	MAP_HarbourTDM = 25,
	MAP_HarbourCaptureTheFlag = 26,
	MAP_HarbourFreeForAll = 27,
	MAP_HarbourFreeForAllClassic = 28,
	MAP_HarbourMOBA = 29,
	MAP_AerialTreasure = 30,
	MAP_AerialTDM = 31,
	MAP_AerialCaptureTheFlag = 32,
	MAP_Tutorial = 33,
	MAP_Teaser = 34,
	MAP_TestGael = 35,
	MAP_RaceProto = 36,
	MAP_NewRookieLake = 37,
	MAP_MainMenu = 38,
	MAP_None = 39,
	LAST_DONT_USE = 40,
	EMapType_MAX = 41,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class EHoudiniOutputType : uint8_t {
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Landscape = 3,
	Curve = 4,
	Skeletal = 5,
	EHoudiniOutputType_MAX = 6,
};

enum class ECTLiveEventProgressPosition : uint8_t {
	Default = 0,
	First = 1,
	Last = 2,
	MAX = 3,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
};

enum class EGooglePADDownloadStatus : uint8_t {
	AssetPack_UNKNOWN = 0,
	AssetPack_DOWNLOAD_PENDING = 1,
	AssetPack_DOWNLOADING = 2,
	AssetPack_TRANSFERRING = 3,
	AssetPack_DOWNLOAD_COMPLETED = 4,
	AssetPack_DOWNLOAD_FAILED = 5,
	AssetPack_DOWNLOAD_CANCELED = 6,
	AssetPack_WAITING_FOR_WIFI = 7,
	AssetPack_NOT_INSTALLED = 8,
	AssetPack_INFO_PENDING = 9,
	AssetPack_INFO_FAILED = 10,
	AssetPack_REMOVAL_PENDING = 11,
	AssetPack_REMOVAL_FAILED = 12,
	AssetPack_MAX = 13,
};

enum class EMagicLeapAutoPinType : uint8_t {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3,
};

enum class ECTPingKind : uint8_t {
	EPK_GENERIC = 0,
	EPK_ZONE = 1,
	EPK_ENEMY_PAWN = 2,
	EPK_ALLY_PAWN = 3,
	EPK_HELP = 4,
	EPK_INVALID = 5,
	EPK_MAX = 6,
};

enum class ELevelConfiguration : uint8_t {
	ELC_Empty = 0,
	ELC_MainMap = 1,
	ELC_LobbyMap = 2,
	ELC_MAX = 3,
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

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
};

enum class ECTShopLoadingState : uint8_t {
	Undefined = 0,
	Hidden = 1,
	ShowAnimPlaying = 2,
	WaitAnimPlaying = 3,
	HideAnimPlaying = 4,
	ECTShopLoadingState_MAX = 5,
};

enum class ChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3,
};

enum class ENiagaraDebugHudHAlign : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ENiagaraDebugHudHAlign_MAX = 3,
};

enum class ECTGamepadCursorState : uint8_t {
	None = 0,
	Normal = 1,
	FocusedAndMoving = 2,
	FocusedAndStopped = 3,
	MAX = 4,
};

enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
};

enum class CTRiderAnimMode : uint8_t {
	CTRider_SmoothLocations = 0,
	CTRider_SmoothRotations = 1,
	CTRider_SmoothHeadLocation = 2,
	CTRider_MAX = 3,
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

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class EMobilePlanarReflectionMode : uint8_t {
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3,
};

enum class ENiagaraRibbonTessellationMode : uint8_t {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class ENiagaraModuleDependencyType : uint8_t {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EAkDiffractionFlags : uint8_t {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 2,
	EAkDiffractionFlags_MAX = 3,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8_t {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class DeviceType : uint8_t {
	NullDevice = 0,
	SpecificDevice = 1,
	DefaultSystemDevice = 2,
	DefaultCommunicationDevice = 3,
	DeviceType_MAX = 4,
};

enum class ECTNemesisMode : uint8_t {
	Exclusive = 0,
	MaximumDelta = 1,
	AbsoluteMaximum = 2,
	Count = 3,
	ECTNemesisMode_MAX = 4,
};

enum class EAppleTextureType : uint8_t {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5,
};

enum class EWidgetType : uint8_t {
	WDG_System_InGameMenu = 0,
	WDG_System_LoadingScreen = 1,
	WDG_Alert_GlobalHUD = 2,
	WDG_Alert_Transition = 3,
	WDG_GameScreen_ScoreBoard = 4,
	WDG_GameScreen_LobbyBoard = 5,
	WDG_GameScreen_LobbyWidget = 6,
	WDG_GameScreen_Podium = 7,
	WDG_GameScreen_GameResult = 8,
	WDG_GameScreen_GameEnd = 9,
	WDG_GameMode_GameModeHUD = 10,
	WDG_GameHUD_HUD = 11,
	WDG_GameHUD_ShieldStateHUD = 12,
	WDG_GameHUD_StartScreen = 13,
	WDG_GameHUD_WeaponSelector = 14,
	WDG_GameHUD_ScoreNumber = 15,
	WDG_Game3DWidget_PlayerIndicator = 16,
	WDG_Game3DWidget_OffscreenPlayerIndicator = 17,
	WDG_Game3DWidget_TargetLock = 18,
	WDG_Unknown = 19,
	LAST_DONT_USE = 20,
	EWidgetType_MAX = 21,
};

enum class ScrollingMode : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator4 = 3,
	NewEnumerator3 = 4,
	ScrollingMode_MAX = 5,
};

enum class EAttributeSamplerCurveDimension : uint8_t {
	Float1 = 0,
	Float2 = 1,
	Float3 = 2,
	Float4 = 3,
	EAttributeSamplerCurveDimension_MAX = 4,
};

enum class EShockwaveState : uint8_t {
	ShockState_Idle = 0,
	ShockState_WarmingUp = 1,
	ShockState_Shockwaving = 2,
	ShockState_Dead = 3,
	ShockState_MAX = 4,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class ENiagaraCoordinateSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraCoordinateSpace_MAX = 3,
};

enum class EMagicLeapPlaneQueryType : uint8_t {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2,
};

enum class EClothingWindMethod_Legacy : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

enum class EOperationTypes : uint8_t {
	pfenum_Created = 0,
	pfenum_Updated = 1,
	pfenum_Deleted = 2,
	pfenum_None = 3,
	pfenum_MAX = 4,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class ENiagaraGpuBufferFormat : uint8_t {
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3,
};

enum class EMeshElementAttributeType : uint8_t {
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class SubscriptionMode : uint8_t {
	Accept = 0,
	Block = 1,
	Defer = 2,
	SubscriptionMode_MAX = 3,
};

enum class EAkMidiCcValues : uint8_t {
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 48,
	AkMidiCcCtrl21Fine = 49,
	AkMidiCcCtrl22Fine = 50,
	AkMidiCcCtrl23Fine = 51,
	AkMidiCcCtrl24Fine = 52,
	AkMidiCcCtrl25Fine = 53,
	AkMidiCcCtrl26Fine = 54,
	AkMidiCcCtrl27Fine = 55,
	AkMidiCcCtrl28Fine = 56,
	AkMidiCcCtrl29Fine = 57,
	AkMidiCcCtrl30Fine = 58,
	AkMidiCcCtrl31Fine = 59,
	AkMidiCcHoldPedal = 60,
	AkMidiCcPortamentoOnOff = 61,
	AkMidiCcSustenutoPedal = 62,
	AkMidiCcSoftPedal = 63,
	AkMidiCcLegatoPedal = 64,
	AkMidiCcHoldPedal2 = 65,
	AkMidiCcSoundVariation = 66,
	AkMidiCcSoundTimbre = 67,
	AkMidiCcSoundReleaseTime = 68,
	AkMidiCcSoundAttackTime = 69,
	AkMidiCcSoundBrightness = 70,
	AkMidiCcSoundCtrl6 = 71,
	AkMidiCcSoundCtrl7 = 72,
	AkMidiCcSoundCtrl8 = 73,
	AkMidiCcSoundCtrl9 = 74,
	AkMidiCcSoundCtrl10 = 75,
	AkMidiCcGeneralButton1 = 76,
	AkMidiCcGeneralButton2 = 77,
	AkMidiCcGeneralButton3 = 78,
	AkMidiCcGeneralButton4 = 79,
	AkMidiCcReverbLevel = 80,
	AkMidiCcTremoloLevel = 81,
	AkMidiCcChorusLevel = 82,
	AkMidiCcCelesteLevel = 83,
	AkMidiCcPhaserLevel = 84,
	AkMidiCcDataButtonP1 = 85,
	AkMidiCcDataButtonM1 = 86,
	AkMidiCcNonRegisterCoarse = 87,
	AkMidiCcNonRegisterFine = 88,
	AkMidiCcAllSoundOff = 89,
	AkMidiCcAllControllersOff = 90,
	AkMidiCcLocalKeyboard = 91,
	AkMidiCcAllNotesOff = 92,
	AkMidiCcOmniModeOff = 93,
	AkMidiCcOmniModeOn = 94,
	AkMidiCcOmniMonophonicOn = 95,
	AkMidiCcOmniPolyphonicOn = 96,
	EAkMidiCcValues_MAX = 97,
};

enum class EMagicLeapControllerLEDColor : uint8_t {
	BrightMissionRed = 0,
	PastelMissionRed = 1,
	BrightFloridaOrange = 2,
	PastelFloridaOrange = 3,
	BrightLunaYellow = 4,
	PastelLunaYellow = 5,
	BrightNebulaPink = 6,
	PastelNebulaPink = 7,
	BrightCosmicPurple = 8,
	PastelCosmicPurple = 9,
	BrightMysticBlue = 10,
	PastelMysticBlue = 11,
	BrightCelestialBlue = 12,
	PastelCelestialBlue = 13,
	BrightShaggleGreen = 14,
	PastelShaggleGreen = 15,
	EMagicLeapControllerLEDColor_MAX = 16,
};

enum class EDashFailReason : uint8_t {
	DASHFAIL_Wall = 0,
	DASHFAIL_Time = 1,
	DASHFAIL_Dot = 2,
	DASHFAIL_Lost = 3,
	DASHFAIL_Collision = 4,
	DASHFAIL_PlayerDied = 5,
	DASHFAIL_OwnerDied = 6,
	DASHFAIL_PlayerInput = 7,
	DASHFAIL_Brake = 8,
	DASHFAIL_Misc = 9,
	DASHFAIL_MAX = 10,
};

enum class EPopcornFXMeshSamplingMode : uint8_t {
	Uniform = 0,
	Fast = 1,
	Weighted = 2,
	EPopcornFXMeshSamplingMode_MAX = 3,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4,
};

enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

enum class EPhysicsAssetSolverType : uint8_t {
	RBAN = 0,
	World = 1,
	EPhysicsAssetSolverType_MAX = 2,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class ECTMatchType : uint8_t {
	Undefined = 0,
	MT_TeamDeathmatch = 1,
	MT_CaptureTheFlag = 2,
	MT_LastTeamStanding = 3,
	MT_Rookie = 4,
	MT_Skirmish = 5,
	MT_Battle = 6,
	MT_Treasure = 7,
	MT_FreeForAll = 8,
	MT_TeamDeathMatch3v3 = 9,
	MT_FreeFlight = 10,
	MT_Tutorial = 11,
	ECTMatchType_MAX = 12,
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

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class EMaterialFunctionUsage : uint8_t {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3,
};

enum class EReflectionSourceType : uint8_t {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2,
};

enum class EGranularSynthEnvelopeType : uint8_t {
	Rectangular = 0,
	Triangle = 1,
	DownwardTriangle = 2,
	UpwardTriangle = 3,
	ExponentialDecay = 4,
	ExponentialIncrease = 5,
	Gaussian = 6,
	Hanning = 7,
	Lanczos = 8,
	Cosine = 9,
	CosineSquared = 10,
	Welch = 11,
	Blackman = 12,
	BlackmanHarris = 13,
	Count = 14,
	EGranularSynthEnvelopeType_MAX = 15,
};

enum class ENiagaraOrientationAxis : uint8_t {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ENiagaraOrientationAxis_MAX = 3,
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

enum class ELocationYToSpawnEnum : uint8_t {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};

enum class ESceneSnapQueryTargetType : uint8_t {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 3,
	All = 4,
	ESceneSnapQueryTargetType_MAX = 5,
};

enum class EQuestEndStatus : uint8_t {
	invalid = 0,
	win = 1,
	lost = 2,
	skip = 3,
	reroll = 4,
	EQuestEndStatus_MAX = 5,
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
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17,
};

enum class EDebugAttackerTeam : uint8_t {
	None = 0,
	DebugSetLocalTeamAsAttacker = 1,
	DebugSetRemoteTeamAsAttacker = 2,
	EDebugAttackerTeam_MAX = 3,
};

enum class ECTTutorialChapter : uint8_t {
	Undefined = 0,
	TutorialNavigationChapterBoostRefill = 1,
	TutorialNavigationChapterAirColumns = 2,
	TutorialNavigationChapterAcceleration = 3,
	TutorialNavigationChapterBoost = 4,
	TutorialNavigationChapterBrake = 5,
	TutorialFlightChapterAbility = 6,
	TutorialFlightChapterDodge = 7,
	TutorialFlightChapterFlameThrower = 8,
	TutorialFlightChapterGadget = 9,
	TutorialFlightChapterFireball = 10,
	TutorialGatesOfFireChapterBasics = 11,
	TutorialCarnageChapterBasicsBounty = 12,
	TutorialCarnageChapterBerserk = 13,
	TutorialCarnageChapterBountyEffect = 14,
	TutorialCarnageChapterSpear = 15,
	TutorialCollectiblesChapterShield = 16,
	TutorialCollectiblesChapterInfiniteBoost = 17,
	TutorialCollectiblesChapterHealth = 18,
	TutorialSkirmishChapterBasics = 19,
	TutorialTreasureChapterObjective = 20,
	TutorialTreasureChapterCarriers = 21,
	TutorialTreasureChapterBomb = 22,
	TutorialTreasureChapterJewel = 23,
	TutorialTreasureChapterKey = 24,
	LAST_DONT_USE = 25,
	Count = 26,
	ECTTutorialChapter_MAX = 27,
};

enum class ECTBreadcrumbWidgetState : uint8_t {
	None = 0,
	LastChunk = 1,
	InternalChunk = 2,
	ECTBreadcrumbWidgetState_MAX = 3,
};

enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
};

enum class EProviderSpawnState : uint8_t {
	ESS_IDLE = 0,
	ESS_TIMER = 1,
	ESS_SPAWNED = 2,
	ESS_CANTSPAWN = 3,
	ESS_MAX = 4,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2,
};

enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
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

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
};

enum class EPopcornFXImageDensitySource : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	RGBA_Average = 4,
	EPopcornFXImageDensitySource_MAX = 5,
};

enum class EPIDistanceScalePolicy : uint8_t {
	Scale_Whole = 0,
	Scale_Individual = 1,
	Scale_MAX = 2,
};

enum class EDartTrapState : uint8_t {
	Invalid = 0,
	Falling = 1,
	Failure = 2,
	Triggered = 3,
	Destroyed = 4,
	Attached = 5,
	Firing = 6,
	EDartTrapState_MAX = 7,
};

enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

enum class EChannelMaskParameterColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class EUdpMessageFormat : uint8_t {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5,
};

enum class ETreasureBarState : uint8_t {
	Filling_NotStarted = 0,
	Filling_ToCenter = 1,
	Filling_Waiting = 2,
	Filling_Towinner = 3,
	Filling_Over = 4,
	Filling_MAX = 5,
};

enum class ECTTabType : uint8_t {
	Tab_Home = 0,
	Tab_Play = 1,
	Tab_Classes_Custo = 2,
	Tab_Classes_Hatching = 3,
	Tab_Shop_Featured = 4,
	Tab_Shop_Classes = 5,
	Tab_Shop_Boosters = 6,
	Tab_Shop_Gems = 7,
	Tab_MAX = 8,
};

enum class ELifeFeedbackEnum : uint8_t {
	VE_None = 0,
	VE_HighLife = 1,
	VE_LowLife_Danger = 2,
	VE_LowLife_Stabilized = 3,
	VE_MAX = 4,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

enum class ESetResolutionMethod : uint8_t {
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3,
};

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class ESurfaceTag : uint8_t {
	SURFACETAG_NULL = 0,
	SURFACETAG_NoMine = 1,
	SURFACETAG_Water = 2,
	SURFACETAG_MAX = 3,
};

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class SkeletalMeshTerminationCriterion : uint8_t {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6,
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

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class EPWCollectionSource : uint8_t {
	Default = 0,
	Shop = 1,
	Level = 2,
	Quest = 3,
	Event = 4,
	Other = 5,
	None = 6,
	EPWCollectionSource_MAX = 7,
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

enum class EImageComponentDebugMode : uint8_t {
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2,
};

enum class EPopcornFXMaterialType : uint8_t {
	Billboard_Additive = 0,
	Billboard_AlphaBlend = 1,
	Billboard_AlphaBlend_Lit = 2,
	Billboard_AlphaBlendAdditive = 3,
	Billboard_AlphaBlendAdditive_Lit = 4,
	Billboard_Distortion = 5,
	Billboard_Solid = 6,
	Billboard_Solid_Lit = 7,
	Billboard_Masked = 8,
	Billboard_Masked_Lit = 9,
	Billboard_VolumetricFog = 10,
	Billboard_SixWayLightmap = 11,
	Mesh_Additive = 12,
	Mesh_Distortion = 13,
	Mesh_Solid = 14,
	Mesh_Solid_Lit = 15,
	Mesh_Masked = 16,
	Mesh_Masked_Lit = 17,
	Mesh_VAT_Opaque_Fluid = 18,
	Mesh_VAT_Opaque_Fluid_Lit = 19,
	Mesh_VAT_Masked_Fluid = 20,
	Mesh_VAT_Masked_Fluid_Lit = 21,
	Mesh_VAT_Opaque_Soft = 22,
	Mesh_VAT_Opaque_Soft_Lit = 23,
	Mesh_VAT_Masked_Soft = 24,
	Mesh_VAT_Masked_Soft_Lit = 25,
	Mesh_VAT_Opaque_Rigid = 26,
	Mesh_VAT_Opaque_Rigid_Lit = 27,
	Mesh_VAT_Masked_Rigid = 28,
	Mesh_VAT_Masked_Rigid_Lit = 29,
	Billboard_Additive_NoAlpha = 30,
	Mesh_Additive_NoAlpha = 31,
	__Max = 32,
	EPopcornFXMaterialType_MAX = 33,
};

enum class EAutoScrollStateEnum : uint8_t {
	WaitingBeforeScroll = 0,
	Scrolling = 1,
	WaitingAfterScroll = 2,
	EAutoScrollStateEnum_MAX = 3,
};

enum class AkCodecId : uint8_t {
	Bank = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	WiiADPCM = 5,
	PCMEX = 6,
	ExternalSource = 7,
	XWMA = 8,
	AAC = 9,
	FilePackage = 10,
	ATRAC9 = 11,
	VAG = 12,
	ProfilerCapture = 13,
	AnalysisFile = 14,
	MIDI = 15,
	OpusNX = 16,
	CAF = 17,
	AkOpus = 18,
	AkCodecId_MAX = 19,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
};

enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
};

enum class EAttributeType : uint8_t {
	Float = 0,
	Bool = 1,
	EAttributeType_MAX = 2,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3,
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

enum class ERBFFunctionType : uint8_t {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6,
};

enum class EMaterialShadingRate : uint8_t {
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8,
};

enum class MediaTextureOutputFormat : uint8_t {
	MTOF_Default = 0,
	MTOF_SRGB_LINOUT = 1,
	MTOF_MAX = 2,
};

enum class ECameraFocusMethod : uint8_t {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4,
};

enum class ETransformGizmoSubElements : uint8_t {
	None = 0,
	TranslateAxisX = 1,
	TranslateAxisY = 2,
	TranslateAxisZ = 3,
	TranslateAllAxes = 4,
	TranslatePlaneXY = 5,
	TranslatePlaneXZ = 6,
	TranslatePlaneYZ = 7,
	TranslateAllPlanes = 8,
	RotateAxisX = 9,
	RotateAxisY = 10,
	RotateAxisZ = 11,
	RotateAllAxes = 12,
	ScaleAxisX = 13,
	ScaleAxisY = 14,
	ScaleAxisZ = 15,
	ScaleAllAxes = 16,
	ScalePlaneYZ = 17,
	ScalePlaneXZ = 18,
	ScalePlaneXY = 19,
	ScaleAllPlanes = 20,
	ScaleUniform = 21,
	StandardTranslateRotate = 22,
	TranslateRotateUniformScale = 23,
	FullTranslateRotateScale = 24,
	ETransformGizmoSubElements_MAX = 25,
};

enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
};

enum class SubscriptionReply : uint8_t {
	Allow = 0,
	Block = 1,
	SubscriptionReply_MAX = 2,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
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

enum class EInvincibilityType : uint8_t {
	IT_None = 0,
	IT_Respawn = 1,
	IT_DeathMist = 2,
	IT_Battle = 3,
	IT_MAX = 4,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3,
};

enum class ENDILandscape_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDILandscape_MAX = 3,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class ESettingChangeKind : uint8_t {
	Undefined = 0,
	FullscreenModeChanged = 1,
	GraphicsChanged = 2,
	MatchTypesChanged = 3,
	ESettingChangeKind_MAX = 4,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
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
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_NUM = 12,
	MSM_FromMaterialExpression = 13,
	MSM_MAX = 14,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EPopcornFXDrawCallSortMethod : uint8_t {
	None = 0,
	PerDrawCalls = 1,
	PerSlicedDrawCalls = 2,
	PerPageDrawCalls = 3,
	EPopcornFXDrawCallSortMethod_MAX = 4,
};

enum class EAppReturnType : uint8_t {
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class EHeightmapRTType : uint8_t {
	HeightmapRT_CombinedAtlas = 0,
	HeightmapRT_CombinedNonAtlas = 1,
	HeightmapRT_Scratch1 = 2,
	HeightmapRT_Scratch2 = 3,
	HeightmapRT_Scratch3 = 4,
	HeightmapRT_Mip1 = 5,
	HeightmapRT_Mip2 = 6,
	HeightmapRT_Mip3 = 7,
	HeightmapRT_Mip4 = 8,
	HeightmapRT_Mip5 = 9,
	HeightmapRT_Mip6 = 10,
	HeightmapRT_Mip7 = 11,
	HeightmapRT_Count = 12,
	HeightmapRT_MAX = 13,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
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
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_1 = 64,
	PF_PLATFORM_HDR_2 = 65,
	PF_PLATFORM_HDR_3 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_MAX = 71,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 3,
	Webcam = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5,
};

enum class EMagicLeapMeshLOD : uint8_t {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

enum class EBodyPartTarget : uint8_t {
	BPT_Dragon = 0,
	BPT_DragonRider = 1,
	BPT_ShopDragon = 2,
	BPT_BabyDragon = 3,
	LAST_DONT_USE = 4,
	EBodyPartTarget_MAX = 5,
};

enum class EShadowSetup : uint8_t {
	SHADOW_MAIN_CHARACTER = 0,
	SHADOW_CLOSE_PROXY = 1,
	SHADOW_FAR_PROXY = 2,
	SHADOW_MAX = 3,
};

enum class EPWBackendError : uint8_t {
	Success = 0,
	NotImplemented = 1,
	RequestNotSent = 2,
	ParseError = 3,
	InvalidRequestResult = 4,
	MatchMakingMatchCanceled = 5,
	EPWBackendError_MAX = 6,
};

enum class ECameraInput : uint8_t {
	CAMINPUT_YawSpeedRatio = 0,
	CAMINPUT_TargetYawSpeedRatio = 1,
	CAMINPUT_PitchSpeedRatio = 2,
	CAMINPUT_ForwardSpeedRatio = 3,
	CAMINPUT_ForwardAccelerationRatio = 4,
	CAMINPUT_LSXInput = 5,
	CAMINPUT_LSYInput = 6,
	CAMINPUT_LSXInputSum = 7,
	CAMINPUT_LSYInputSum = 8,
	CAMINPUT_RSXInputSum = 9,
	CAMINPUT_RSYInputSum = 10,
	CAMINPUT_RSXInput = 11,
	CAMINPUT_RSYInput = 12,
	CAMINPUT_LSAngleInput = 13,
	CAMINPUT_RSAngleInput = 14,
	CAMINPUT_Count = 15,
	CAMINPUT_MAX = 16,
};

enum class ENiagaraLegacyTrailWidthMode : uint8_t {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
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

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6,
};

enum class EPSCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5,
};

enum class EAbilityType : uint8_t {
	ABILITYTYPE_Default = 0,
	ABILITYTYPE_ClassPower = 1,
	ABILITYTYPE_Passive = 2,
	ABILITYTYPE_Rage = 3,
	ABILITYTYPE_MAX = 4,
};

enum class EPackageKind : uint8_t {
	None = 0,
	Shop = 1,
	Default = 2,
	Quest = 3,
	Leveling = 4,
	GeneratedLevelChest = 5,
	GeneratedQuestChest = 6,
	Events = 7,
	Consumable = 8,
	Battlepass = 9,
	MAX = 10,
};

enum class EAudioFadeModel : uint8_t {
	Invalid = 0,
	InverseByDistance = 1,
	LinearByDistance = 2,
	ExponentialByDistance = 3,
	EAudioFadeModel_MAX = 4,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3,
};

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class EPWCloudResultCode : uint8_t {
	Success = 0,
	ErrorVCatalog = 1,
	ErrorVShop = 2,
	ErrorPackID = 3,
	ErrorPrice = 4,
	ErrorNotEnoughMoney = 5,
	ErrorTypeMoney = 6,
	ErrorAlreadyPurchase = 7,
	ErrorOutStore = 8,
	ErrorCredential = 9,
	ErrorBadItem = 10,
	ErrorPurchaseCancel = 11,
	ErrorCommand = 12,
	ErrorBackendBDD = 13,
	ErrorNoSession = 14,
	ErrorBadSession = 15,
	ErrorBadKey = 16,
	ErrorLockKey = 17,
	ErrorFriendId = 18,
	ErrorSquadId = 19,
	ErrorNotification = 20,
	ErrorSAlready = 21,
	ErrorSCancel = 22,
	ErrorSFull = 23,
	ErrorSteamFinalizeTransaction = 24,
	ErrorSteamPayForPurchaseNoPrices = 25,
	ErrorSteamPayForPurchaseNoFallbackPrice = 26,
	ErrorSteamPayForPurchaseFailed = 27,
	ErrorCurrencyPriceNotFound = 28,
	ErrorSFriend = 29,
	ErrorQuestMode = 30,
	ErrorPending = 31,
	ErrorNoPending = 32,
	ErrorPassword = 33,
	ErrorOutKey = 34,
	ErrorCenturyLock = 35,
	ErrorCenturyUpdate = 36,
	ErrorMatchMake = 37,
	ErrorLoginAlready = 38,
	ErrorPlatformDLC = 39,
	ErrorSteamDLCRequest = 40,
	ErrorSteamDLCOwner = 41,
	ErrorDLCNotOwned = 42,
	ErrorDLCId = 43,
	ErrorCheater = 44,
	ErrorCount = 45,
	ErrorTooManyCall = 46,
	ErrorTimeOut = 47,
	ErrorNotLinked = 48,
	ErrorAlreadyLinked = 49,
	ErrorAlreadyClaim = 50,
	ErrorAccountNotFound = 51,
	ErrorUnknown = 52,
	EPWCloudResultCode_MAX = 53,
};

enum class EDatasmithAreaLightActorType : uint8_t {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3,
};

enum class EAccountLinkingState : uint8_t {
	Activated = 0,
	Deactivated = 1,
	EAccountLinkingState_MAX = 2,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
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

enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2,
};

enum class EShopButtonStateEnum : uint8_t {
	Default = 0,
	Purchased = 1,
	EShopButtonStateEnum_MAX = 2,
};

enum class EPriorityAttenuationMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class ERandomProfile : uint8_t {
	BV2_VeryHigh = 0,
	BV2_High = 1,
	BV2_Medium = 2,
	BV2_Low = 3,
	BV2_VeryLow = 4,
	Count = 5,
	Undefined = 6,
	LAST_DONT_USE = 7,
	ERandomProfile_MAX = 8,
};

enum class ECTCurveReactivityType : uint8_t {
	Abscissa = 0,
	Ordinate = 1,
	Both = 2,
	ECTCurveReactivityType_MAX = 3,
};

enum class EInertializationSpace : uint8_t {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3,
};

enum class ECTKeyShapeType : uint8_t {
	RECTANGULAR = 0,
	SQUARE = 1,
	ECTKeyShapeType_MAX = 2,
};

enum class ESpectatorScreenMode : uint8_t {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8,
};

enum class EHoudiniParameterType : uint8_t {
	Invalid = 0,
	Button = 1,
	ButtonStrip = 2,
	Color = 3,
	ColorRamp = 4,
	File = 5,
	FileDir = 6,
	FileGeo = 7,
	FileImage = 8,
	Float = 9,
	FloatRamp = 10,
	Folder = 11,
	FolderList = 12,
	Input = 13,
	Int = 14,
	IntChoice = 15,
	Label = 16,
	MultiParm = 17,
	Separator = 18,
	String = 19,
	StringChoice = 20,
	StringAssetRef = 21,
	Toggle = 22,
	EHoudiniParameterType_MAX = 23,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EAbilityMalus : uint8_t {
	MALUS_BlastPush = 0,
	MALUS_HuntersMarkDuration = 1,
	MALUS_FrostBoltDuration = 2,
	MALUS_MAX = 3,
};

enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

enum class ENiagaraSpriteAlignment : uint8_t {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3,
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
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_MAX = 31,
};

enum class EGameStateUITransitionEventType : uint8_t {
	Start = 0,
	FadeInOver = 1,
	FadeOutStart = 2,
	End = 3,
	Abort = 4,
	Count = 5,
	Undefined = 6,
	EGameStateUITransitionEventType_MAX = 7,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EMovieSceneServerClientMask : uint8_t {
	None = 0,
	Server = 1,
	Client = 2,
	All = 3,
	EMovieSceneServerClientMask_MAX = 4,
};

enum class EFortressPhase : uint8_t {
	FP_Chaos = 0,
	FP_Destruction = 1,
	FP_MAX = 2,
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

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EFieldFilterType : uint8_t {
	Field_Filter_Dynamic = 0,
	Field_Filter_Kinematic = 1,
	Field_Filter_Static = 2,
	Field_Filter_All = 3,
	Field_Filter_Max = 4,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class ECTCrossedWidgetsLocation : uint8_t {
	None = 0,
	Collection = 1,
	MAX = 2,
};

enum class EFaceComponentDebugMode : uint8_t {
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3,
};

enum class ENiagaraPythonUpdateScriptReference : uint8_t {
	None = 0,
	ScriptAsset = 1,
	DirectTextEntry = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3,
};

enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class ECharacClassType : uint8_t {
	CHARCLASS_Striker = 0,
	CHARCLASS_Chieftain = 1,
	CHARCLASS_Rogue = 2,
	CHARCLASS_Ravager = 3,
	LAST_DONT_USE = 4,
	Undefined = 5,
	ECharacClassType_MAX = 6,
};

enum class EMaterialStencilCompare : uint8_t {
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9,
};

enum class ESegmentLoginIdentityProvider : uint8_t {
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
	pfenum_Apple = 19,
	pfenum_NintendoSwitchAccount = 20,
	pfenum_MAX = 21,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class EConcurrencyVolumeScaleMode : uint8_t {
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class EPoseComponentDebugMode : uint8_t {
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2,
};

enum class EMaterialUsage : uint8_t {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_MAX = 18,
};

enum class EGeoAnchorComponentDebugMode : uint8_t {
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2,
};

enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
};

enum class AkChannelConfiguration : uint8_t {
	Ak_Parent = 0,
	Ak_LFE = 1,
	Ak_1_1 = 2,
	Ak_2_1 = 3,
	Ak_2_2 = 4,
	Ak_3_1 = 5,
	Ak_3_2 = 6,
	Ak_4_1 = 7,
	Ak_4_2 = 8,
	Ak_5_1 = 9,
	Ak_5_2 = 10,
	Ak_7_2 = 11,
	Ak_5_1_3 = 12,
	Ak_7_1_3 = 13,
	Ak_7_1_5 = 14,
	Ak_Auro_9_2 = 15,
	Ak_Auro_10_2 = 16,
	Ak_Auro_11_2 = 17,
	Ak_Auro_13_2 = 18,
	Ak_Ambisonics_1st_order = 19,
	Ak_Ambisonics_2nd_order = 20,
	Ak_Ambisonics_3rd_order = 21,
	Ak_MAX = 22,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EQuartzCommandDelegateSubType : uint8_t {
	CommandOnFailedToQueue = 0,
	CommandOnQueued = 1,
	CommandOnCanceled = 2,
	CommandOnAboutToStart = 3,
	CommandOnStarted = 4,
	Count = 5,
	EQuartzCommandDelegateSubType_MAX = 6,
};

enum class EPWSectionType : uint8_t {
	Base_Featured = 0,
	Base_Daily = 1,
	Base_Event = 2,
	Resource_Gems = 3,
	Misc_Booster = 4,
	Base_Live0 = 5,
	Base_Live1 = 6,
	Resource_StarterPack = 7,
	Unknow = 8,
	EPWSectionType_MAX = 9,
};

enum class EPWQuestStatus : uint8_t {
	Idle = 0,
	Active = 1,
	Lost = 2,
	Won = 3,
	Stop = 4,
	EPWQuestStatus_MAX = 5,
};

enum class EPopcornFXVectorFieldBounds : uint8_t {
	Source = 0,
	Custom = 1,
	EPopcornFXVectorFieldBounds_MAX = 2,
};

enum class ECTExclusiveShopSection : uint8_t {
	Undefined = 0,
	Featured = 1,
	Daily = 2,
	Event = 3,
	Live0 = 4,
	Live1 = 5,
	Count = 6,
	ECTExclusiveShopSection_MAX = 7,
};

enum class ECustomAttributeBlendType : uint8_t {
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2,
};

enum class EMovieSceneBuiltInEasing : uint8_t {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22,
};

enum class EHoudiniStaticMeshMethod : uint8_t {
	RawMesh = 0,
	FMeshDescription = 1,
	UHoudiniStaticMesh = 2,
	EHoudiniStaticMeshMethod_MAX = 3,
};

enum class EGameInstanceState : uint8_t {
	pfenum_Open = 0,
	pfenum_Closed = 1,
	pfenum_MAX = 2,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
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
	TC_HalfFloat = 12,
	TC_EncodedReflectionCapture = 13,
	TC_MAX = 14,
};

enum class EAnalysisTaskState : uint8_t {
	pfenum_Waiting = 0,
	pfenum_ReadyForSubmission = 1,
	pfenum_SubmittingToPipeline = 2,
	pfenum_Running = 3,
	pfenum_Completed = 4,
	pfenum_Failed = 5,
	pfenum_Canceled = 6,
	pfenum_MAX = 7,
};

enum class AkAcousticPortalState : uint8_t {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2,
};

enum class ECollectionDragonStatus : uint8_t {
	None = 0,
	Upcoming = 1,
	NotDiscovered = 2,
	Discovered = 3,
	Owned = 4,
	MAX = 5,
};

enum class ECTMatchMakingBannerStatus : uint8_t {
	None = 0,
	Idle = 1,
	MatchMaking = 2,
	JoiningMatch = 3,
	Locked = 4,
	Hidden = 5,
	ECTMatchMakingBannerStatus_MAX = 6,
};

enum class AkSpeakerConfiguration : uint8_t {
	Ak_Speaker_Front_Left = 0,
	Ak_Speaker_Front_Right = 1,
	Ak_Speaker_Front_Center = 2,
	Ak_Speaker_Low_Frequency = 3,
	Ak_Speaker_Back_Left = 4,
	Ak_Speaker_Back_Right = 5,
	Ak_Speaker_Back_Center = 6,
	Ak_Speaker_Side_Left = 7,
	Ak_Speaker_Side_Right = 8,
	Ak_Speaker_Top = 9,
	Ak_Speaker_Height_Front_Left = 10,
	Ak_Speaker_Height_Front_Center = 11,
	Ak_Speaker_Height_Front_Right = 12,
	Ak_Speaker_Height_Back_Left = 13,
	Ak_Speaker_Height_Back_Center = 14,
	Ak_Speaker_Height_Back_Right = 15,
	Ak_Speaker_MAX = 16,
};

enum class ERedeemType : uint8_t {
	Discord = 0,
	Gift = 1,
	Event = 2,
	Massive = 3,
	Error = 4,
	ERedeemType_MAX = 5,
};

enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

enum class EMagicLeapHeadTrackingMapEvent : uint8_t {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

enum class EClusterConnectionTypeEnum : uint8_t {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6,
};

enum class EWarHornLevel : uint8_t {
	Default = 0,
	Enraged = 1,
	Count = 2,
	EWarHornLevel_MAX = 3,
};

enum class EOutOfBoundsFeedbackEnum : uint8_t {
	VE_None = 0,
	VE_Fade_In = 1,
	VE_Fade_Out = 2,
	VE_MAX = 3,
};

enum class ETextureCompressionQuality : uint8_t {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6,
};

enum class FCTTeamId : uint8_t {
	TID_Fire = 0,
	TID_Ice = 1,
	TID_Earth = 2,
	TID_MAX = 3,
};

enum class ECTButtonShape : uint8_t {
	Square = 0,
	Horizontal = 1,
	Vertical = 2,
	ECTButtonShape_MAX = 3,
};

enum class ECTUIButtonState : uint8_t {
	None = 0,
	Normal = 1,
	Hovered = 2,
	Pressed = 3,
	PressedAndHovered = 4,
	Disabled = 5,
	MAX = 6,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class EHoudiniLandscapeExportType : uint8_t {
	Heightfield = 0,
	Mesh = 1,
	Points = 2,
	EHoudiniLandscapeExportType_MAX = 3,
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
	pfenum_ServerCustomId = 17,
	pfenum_NintendoSwitchDeviceId = 18,
	pfenum_FacebookInstantGamesId = 19,
	pfenum_OpenIdConnect = 20,
	pfenum_Apple = 21,
	pfenum_NintendoSwitchAccount = 22,
	pfenum_MAX = 23,
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

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EMatchSummaryRowDataSource : uint8_t {
	NONE = 0,
	XP_TOTAL_SCORE = 1,
	XP_WON_MATCH = 2,
	XP_END_MATCH = 3,
	XP_BOOSTER_BONUS = 4,
	XP_BOOSTER_BONUS_TEAM = 5,
	XP_BOOSTER_BONUS_FULL_TEAM = 6,
	XP_PLAY_WITH_FRIENDS = 7,
	XP_MISSION = 8,
	REWARD_SCORE = 9,
	REWARD_WON_MATCH = 10,
	REWARD_MISSIONS = 11,
	EMatchSummaryRowDataSource_MAX = 12,
};

enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

enum class EMegaSpearState : uint8_t {
	Hold = 0,
	Falling = 1,
	Hunting = 2,
	Destroying = 3,
	EMegaSpearState_MAX = 4,
};

enum class ECameraOutput : uint8_t {
	CAMOUTPUT_XLocationOffset = 0,
	CAMOUTPUT_YLocationOffset = 1,
	CAMOUTPUT_ZLocationOffset = 2,
	CAMOUTPUT_XTargetOffset = 3,
	CAMOUTPUT_YTargetOffset = 4,
	CAMOUTPUT_ZTargetOffset = 5,
	CAMOUTPUT_FOVOffset = 6,
	CAMOUTPUT_RollOffset = 7,
	CAMOUTPUT_AddSpeedShake = 8,
	CAMOUTPUT_Count = 9,
	CAMOUTPUT_MAX = 10,
};

enum class ECTShopSection : uint8_t {
	Undefined = 0,
	Exclusive = 1,
	Hero = 2,
	Items = 3,
	Resource = 4,
	Dragon = 5,
	Count = 6,
	ECTShopSection_MAX = 7,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EAkChannelMask : uint8_t {
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 6,
	SideLeft = 7,
	SideRight = 8,
	Top = 9,
	HeightFrontLeft = 10,
	HeightFrontCenter = 11,
	HeightFrontRight = 12,
	HeightBackLeft = 13,
	HeightBackCenter = 14,
	HeightBackRight = 15,
	EAkChannelMask_MAX = 16,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class EAzureVmFamily : uint8_t {
	pfenum_A = 0,
	pfenum_Av2 = 1,
	pfenum_Dv2 = 2,
	pfenum_Dv3 = 3,
	pfenum_F = 4,
	pfenum_Fsv2 = 5,
	pfenum_Dasv4 = 6,
	pfenum_Dav4 = 7,
	pfenum_Eav4 = 8,
	pfenum_Easv4 = 9,
	pfenum_Ev4 = 10,
	pfenum_Esv4 = 11,
	pfenum_Dsv3 = 12,
	pfenum_Dsv2 = 13,
	pfenum_NCasT4_v3 = 14,
	pfenum_Ddv4 = 15,
	pfenum_Ddsv4 = 16,
	pfenum_MAX = 17,
};

enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2,
};

enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

enum class LoginState : uint8_t {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4,
};

enum class EFieldIntegerType : uint8_t {
	Integer_DynamicState = 0,
	Integer_ActivateDisabled = 1,
	Integer_CollisionGroup = 2,
	Integer_PositionAnimated = 3,
	Integer_PositionStatic = 4,
	Integer_TargetMax = 5,
	Integer_MAX = 6,
};

enum class ENiagaraStatDisplayMode : uint8_t {
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2,
};

enum class ECTRewardStatus : uint8_t {
	Undefined = 0,
	Pending = 1,
	Unlocked_New = 2,
	Unlocked = 3,
	Count = 4,
	ECTRewardStatus_MAX = 5,
};

enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};

enum class EAkAudioSessionMode : uint8_t {
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
	EAkAudioSessionMode_MAX = 7,
};

enum class ESnitchState : uint8_t {
	SS_None = 0,
	SS_Moving = 1,
	SS_Stopped = 2,
	SS_Transition = 3,
	SS_MAX = 4,
};

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
};

enum class EUserDataPermission : uint8_t {
	pfenum_Private = 0,
	pfenum_Public = 1,
	pfenum_MAX = 2,
};

enum class ETimeStretchCurveMapping : uint8_t {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class EPDGLinkState : uint8_t {
	Inactive = 0,
	Linking = 1,
	Linked = 2,
	Error_Not_Linked = 3,
	EPDGLinkState_MAX = 4,
};

enum class EImportanceWeight : uint8_t {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EAirAbsorptionMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class ENiagaraRibbonDrawDirection : uint8_t {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class EMagicLeapTouchpadGestureType : uint8_t {
	None = 0,
	Tap = 1,
	ForceTapDown = 2,
	ForceTapUp = 3,
	ForceDwell = 4,
	SecondForceDown = 5,
	LongHold = 6,
	RadialScroll = 7,
	Swipe = 8,
	Scroll = 9,
	Pinch = 10,
	EMagicLeapTouchpadGestureType_MAX = 11,
};

enum class EAnimAlphaInputType : uint8_t {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3,
};

enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

enum class ECTCarouselEvent : uint8_t {
	DataChange = 0,
	ECTCarouselEvent_MAX = 1,
};

enum class FCTActorTypeID : uint8_t {
	ID_Player = 0,
	ID_ReplicatedActor = 1,
	ID_SpawnActor = 2,
	ID_MAX = 3,
};

enum class ELuminComponentSubElementType : uint8_t {
	FileExtension = 0,
	MimeType = 1,
	Mode = 2,
	MusicAttribute = 3,
	Schema = 4,
	ELuminComponentSubElementType_MAX = 5,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
};

enum class EPropertyAccessIndirectionType : uint8_t {
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5,
};

enum class ECTLocalSaveError : uint8_t {
	Unknown = 0,
	None = 1,
	Load_NoDiskSaveFound = 2,
	Load_OlderDiskVersion = 3,
	Load_NewerDiskVersion = 4,
	Load_Pending = 5,
	Save_Pending = 6,
	ECTLocalSaveError_MAX = 7,
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

enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5,
};

enum class ECTTextureFormat : uint8_t {
	Undefined = 0,
	ShopMenuIcon = 1,
	ShopMenuHover = 2,
	PurchasePage = 3,
	ClassBiseauButton = 4,
	ClassHorizontalButton = 5,
	ClassStatsBar = 6,
	DetailIcon = 7,
	DetailHover = 8,
	BigEggImage = 9,
	EndMatchSummaryRewardIcon = 10,
	BoosterActivation = 11,
	LAST_DONT_USE = 12,
	ECTTextureFormat_MAX = 13,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class ECurveTableMode : uint8_t {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3,
};

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class EUpdateClockSource : uint8_t {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6,
};

enum class EOverTimeHealingReason : uint8_t {
	OHR_None = 0,
	OHR_Warhorn = 1,
	OHR_SecondWind = 2,
	OHR_MAX = 3,
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

enum class ECustomBoneAttributeLookup : uint8_t {
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3,
};

enum class ERiderSpearAnimMode : uint8_t {
	SpearAnim_Default = 0,
	SpearAnim_Grabing = 1,
	SpearAnim_Holding = 2,
	SpearAnim_Shooting = 3,
	SpearAnim_Storing = 4,
	SpearAnim_MAX = 5,
};

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

enum class ESynthModEnvPatch : uint8_t {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvPatch_MAX = 9,
};

enum class ECTFFAPlayerRespawnDebug : uint8_t {
	PlayerRespawn = 0,
	PermaDeath = 1,
	ECTFFAPlayerRespawnDebug_MAX = 2,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class EToolSide : uint8_t {
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class ENDIStaticMesh_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4,
};

enum class EStatisticVersionStatus : uint8_t {
	pfenum_Active = 0,
	pfenum_SnapshotPending = 1,
	pfenum_Snapshot = 2,
	pfenum_ArchivalPending = 3,
	pfenum_Archived = 4,
	pfenum_MAX = 5,
};

enum class ETranslucencyType : uint8_t {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2,
};

enum class EJsonType : uint8_t {
	None = 0,
	Null = 1,
	String = 2,
	Number = 3,
	Boolean = 4,
	Array = 5,
	Object = 6,
	EJsonType_MAX = 7,
};

enum class EDatasmithImportActorPolicy : uint8_t {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3,
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

enum class EMaterialExposedViewProperty : uint8_t {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_MAX = 14,
};

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class EMaterialDomain : uint8_t {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7,
};

enum class EGAProgressionStatus : uint8_t {
	undefined = 0,
	start = 1,
	complete = 2,
	fail = 3,
	EGAProgressionStatus_MAX = 4,
};

enum class EChaosCollisionSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6,
};

enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
};

enum class ECTItemType : uint8_t {
	Undefined = 0,
	CustoBase = 1,
	DragonCusto = 2,
	HeroCusto = 3,
	CharacClass = 4,
	XPBooster = 5,
	SteelBooster = 6,
	PlayerProfileWallPaper = 7,
	PlayerProfileIcon = 8,
	Title = 9,
	TagLine = 10,
	Resource = 11,
	Fanion = 12,
	RoleDiscord = 13,
	PackGiftKey = 14,
	PackItem = 15,
	Egg = 16,
	Dragon = 17,
	LockPurchase = 18,
	Count = 19,
	LAST_DONT_USE = 20,
	ECTItemType_MAX = 21,
};

enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

enum class EARGeoTrackingState : uint8_t {
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4,
};

enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

enum class EPWRarity : uint8_t {
	Undefined = 0,
	Common = 1,
	Rare = 2,
	Epic = 3,
	Legend = 4,
	Unique = 5,
	RewardChanceCount = 6,
	RewardChanceAny = 7,
	EPWRarity_MAX = 8,
};

enum class EExperimentState : uint8_t {
	pfenum_New = 0,
	pfenum_Started = 1,
	pfenum_Stopped = 2,
	pfenum_Deleted = 3,
	pfenum_MAX = 4,
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

enum class EHoudiniRampInterpolationType : uint8_t {
	InValid = 0,
	CONSTANT = 1,
	LINEAR = 2,
	CATMULL_ROM = 3,
	MONOTONE_CUBIC = 4,
	BEZIER = 5,
	BSPLINE = 6,
	HERMITE = 7,
	EHoudiniRampInterpolationType_MAX = 8,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class EVirtualizationMode : uint8_t {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3,
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

enum class ESynth1OscType : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6,
};

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
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
	Percentage = 48,
	Unspecified = 49,
	EUnit_MAX = 50,
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
	pfenum_SouthAfricaNorth = 15,
	pfenum_WestCentralUs = 16,
	pfenum_KoreaCentral = 17,
	pfenum_FranceCentral = 18,
	pfenum_WestUs2 = 19,
	pfenum_CentralIndia = 20,
	pfenum_UaeNorth = 21,
	pfenum_UkSouth = 22,
	pfenum_MAX = 23,
};

enum class EHoudiniCurveType : uint8_t {
	Invalid = 0,
	Polygon = 1,
	Nurbs = 2,
	Bezier = 3,
	Points = 4,
	EHoudiniCurveType_MAX = 5,
};

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
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

enum class EClothMassMode : uint8_t {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 3,
	Unknown = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5,
};

enum class ECTLanternContent : uint8_t {
	Jewel = 0,
	AntiBanking = 1,
	UnstableCharge = 2,
	Count = 3,
	None = 4,
	ECTLanternContent_MAX = 5,
};

enum class ENiagaraScriptLibraryVisibility : uint8_t {
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
};

enum class EAnimSyncGroupScope : uint8_t {
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2,
};

enum class ECTResourceType : uint8_t {
	Undefined = 0,
	Gold = 1,
	Gem = 2,
	Steel = 3,
	XP = 4,
	GemBonus = 5,
	Count = 6,
	ECTResourceType_MAX = 7,
};

enum class EGameStateUITrackStatus : uint8_t {
	Invalid = 0,
	Loading = 1,
	CharacClass = 2,
	CharacGadget = 3,
	Lobby = 4,
	Portrait = 5,
	WarmUp = 6,
	IntroRTC = 7,
	PreMatchScreen = 8,
	StartScreen = 9,
	Flying = 10,
	Spectator = 11,
	GameResult = 12,
	Podium = 13,
	ScoreBoard = 14,
	EndMatchSummaryRank = 15,
	EndMatchSummaryEgg = 16,
	EndMatchSummaryXPAndQuests = 17,
	EGameStateUITrackStatus_MAX = 18,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class ECTLeaveAreaBehaviorType : uint8_t {
	None = 0,
	ContinueMovingWithInertia = 1,
	StopMoving = 2,
	MAX = 3,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class EHoudiniRampPointConstructStatus : uint8_t {
	None = 0,
	INITIALIZED = 1,
	POSITION_INSERTED = 2,
	VALUE_INSERTED = 3,
	INTERPTYPE_INSERTED = 4,
	EHoudiniRampPointConstructStatus_MAX = 5,
};

enum class EInputCaptureState : uint8_t {
	Begin = 0,
	Continue = 1,
	End = 2,
	Ignore = 3,
	EInputCaptureState_MAX = 4,
};

enum class EMonoChannelUpmixMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class EAttribStorageType : uint8_t {
	Invalid = 0,
	INT = 1,
	INT64 = 2,
	FLOAT = 3,
	FLOAT64 = 4,
	STRING = 5,
	EAttribStorageType_MAX = 6,
};

enum class EPopcornFXVectorFieldWrapMode : uint8_t {
	Wrap = 0,
	Clamp = 1,
	EPopcornFXVectorFieldWrapMode_MAX = 2,
};

enum class ECTDisplaySetType : uint8_t {
	DragonRiderHome = 0,
	DragonRiderProfile = 1,
	DragonRiderUserProfile = 2,
	DragonRiderClassSelection = 3,
	DragonRiderPartSelection = 4,
	RiderBody = 5,
	RiderUpperBody = 6,
	RiderCape = 7,
	RiderHead = 8,
	RiderLowerBody = 9,
	RiderShield = 10,
	RiderWeapon = 11,
	DragonBody = 12,
	DragonTorso = 13,
	DragonTail = 14,
	DragonHarness = 15,
	DragonHelmet = 16,
	DragonEgg = 17,
	ClassCusto = 18,
	Fanion = 19,
	LAST_DONT_USE = 20,
	ECTDisplaySetType_MAX = 21,
};

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class ENiagaraBakerViewMode : uint8_t {
	Perspective = 0,
	OrthoFront = 1,
	OrthoBack = 2,
	OrthoLeft = 3,
	OrthoRight = 4,
	OrthoTop = 5,
	OrthoBottom = 6,
	Num = 7,
	ENiagaraBakerViewMode_MAX = 8,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class EFastArraySerializerDeltaFlags : uint8_t {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4,
};

enum class ECTRewardType : uint8_t {
	Undefined = 0,
	BPArmor = 1,
	ArmorItem = 2,
	Miscellanous = 3,
	ItemType = 4,
	Resource = 5,
	Specific = 6,
	PackageType = 7,
	Egg = 8,
	EggRare = 9,
	EggEpic = 10,
	LAST_DONT_USE = 11,
	ECTRewardType_MAX = 12,
};

enum class EDatasmithImportScene : uint8_t {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3,
};

enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
};

enum class EXRDeviceConnectionResult : uint8_t {
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5,
};

enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

enum class EKillMessageTypeEnum : uint8_t {
	KILLMESSAGE_Frag = 0,
	KILLMESSAGE_Assist = 1,
	KILLMESSAGE_Death = 2,
	Default = 3,
	EKillMessageTypeEnum_MAX = 4,
};

enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
};

enum class EAudioRecordingExportType : uint8_t {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2,
};

enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class EAnimAssetCurveFlags : uint8_t {
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 3,
	AACF_DriveMaterial_DEPRECATED = 4,
	AACF_Metadata = 5,
	AACF_DriveTrack = 6,
	AACF_Disabled = 7,
	AACF_MAX = 8,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class EGameStateUITransitionAbortionReason : uint8_t {
	GameResult = 0,
	Count = 1,
	Undefined = 2,
	EGameStateUITransitionAbortionReason_MAX = 3,
};

enum class EClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	AddOrUpdateReservation = 7,
	EClientRequestType_MAX = 8,
};

enum class EHoudiniHandleType : uint8_t {
	Xform = 0,
	Bounder = 1,
	Unsupported = 2,
	EHoudiniHandleType_MAX = 3,
};

enum class EAuthenticateErrors : uint8_t {
	Authenticate_None = 0,
	Authenticate_NoUserSelected = 1,
	Authenticate_LocalLoginFailled = 2,
	Authenticate_BadToken = 3,
	Authenticate_PrivilegeRefused = 4,
	Authenticate_BackendError = 5,
	Authenticate_BackendTimeout = 6,
	Authenticate_MAX = 7,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

enum class ELockedButtonReason : uint8_t {
	LockedLevel5ToUnlock = 0,
	LockedLevel10ToUnlock = 1,
	LockedPlayOneGameToUnlock = 2,
	LockedSquadForbidden = 3,
	LockedSquadLeaderOnly = 4,
	LockedSquadLevelTooHigh = 5,
	LockedSquadLevelTooLow = 6,
	LockedSquadTooManyPeople = 7,
	LockedMatchMakingInProgress = 8,
	LockedJoiningOrLocked = 9,
	LockedPendingInvit = 10,
	LockedTemporarlyDisabled = 11,
	LockedOther = 12,
	ELockedButtonReason_MAX = 13,
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
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX = 16,
};

enum class EAkAudioSessionCategory : uint8_t {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3,
};

enum class EQRCodeComponentDebugMode : uint8_t {
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2,
};

enum class ECTUIShadowQuality : uint8_t {
	None = 0,
	VeryLow = 1,
	Low = 2,
	Medium = 3,
	High = 4,
	MAX = 5,
};

enum class EVisualizationType : uint8_t {
	VE_Player = 0,
	VE_Cluster = 1,
	VE_Collisions = 2,
	VE_MAX = 3,
};

enum class ENiagaraDebugHudVAlign : uint8_t {
	Top = 0,
	Center = 1,
	Bottom = 2,
	ENiagaraDebugHudVAlign_MAX = 3,
};

enum class EApplicationState : uint8_t {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

enum class ENiagaraRibbonUVDistributionMode : uint8_t {
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EHoudiniCurveOutputType : uint8_t {
	UnrealSpline = 0,
	HoudiniSpline = 1,
	EHoudiniCurveOutputType_MAX = 2,
};

enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t {
	Precise = 0,
	Approximate = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class EMagicLeapPlaneQueryFlags : uint8_t {
	Vertical = 0,
	Horizontal = 1,
	Arbitrary = 2,
	OrientToGravity = 3,
	PreferInner = 4,
	Ceiling = 5,
	Floor = 6,
	Wall = 7,
	Polygons = 8,
	EMagicLeapPlaneQueryFlags_MAX = 9,
};

enum class ECTDragonCustoType : uint8_t {
	Undefined = 0,
	Body = 1,
	Cranium = 2,
	Dorsum = 3,
	Saddle = 4,
	Torso = 5,
	Count = 6,
	ECTDragonCustoType_MAX = 7,
};

enum class ECTHintAppearanceMode : uint8_t {
	Instant = 0,
	Smooth = 1,
	ECTHintAppearanceMode_MAX = 2,
};

enum class ECTRTCTag : uint8_t {
	Death = 0,
	ECTRTCTag_MAX = 1,
};

enum class ETitleActivationStatus : uint8_t {
	pfenum_None = 0,
	pfenum_ActivatedTitleKey = 1,
	pfenum_PendingSteam = 2,
	pfenum_ActivatedSteam = 3,
	pfenum_RevokedSteam = 4,
	pfenum_MAX = 5,
};

enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t {
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2,
};

enum class EEffectType : uint8_t {
	pfenum_Allow = 0,
	pfenum_Deny = 1,
	pfenum_MAX = 2,
};

enum class EPopcornFXPinDataType : uint8_t {
	Float = 0,
	Float2 = 1,
	Float3 = 2,
	Float4 = 3,
	Int = 4,
	Int2 = 5,
	Int3 = 6,
	Int4 = 7,
	Bool = 8,
	Bool2 = 9,
	Bool3 = 10,
	Bool4 = 11,
	Vector2D = 12,
	Vector = 13,
	LinearColor = 14,
	Rotator = 15,
	EPopcornFXPinDataType_MAX = 16,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8_t {
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ETooltipVisibilityMode : uint8_t {
	Custom = 0,
	Automatic = 1,
	ETooltipVisibilityMode_MAX = 2,
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

enum class EEndMatchSummaryRankState : uint8_t {
	None = 0,
	Begin = 1,
	Progress = 2,
	EEndMatchSummaryRankState_MAX = 3,
};

enum class EWeaponComponent : uint8_t {
	WCOMP_None = 0,
	WCOMP_Fireball = 1,
	WCOMP_Bow = 2,
	WCOMP_Flamethrower = 3,
	WCOMP_BurstFire = 4,
	WCOMP_MegaSpear = 5,
	WCOMP_SmokeBomb = 6,
	WCOMP_Blast = 7,
	WCOMP_DartTrap = 8,
	WCOMP_Lure = 9,
	WCOMP_Mine = 10,
	WCOMP_Shield = 11,
	WCOMP_FireballAuto = 12,
	WCOMP_BattleBerserkFireball = 13,
	WCOMP_Rocket = 14,
	WCOMP_MediKit = 15,
	WCOMP_BattleBerserk = 16,
	WCOMP_Shockwave = 17,
	WCOMP_COUNT = 18,
	WCOMP_MAX = 19,
};

enum class EControllerHand : uint8_t {
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	Special_2 = 6,
	Special_3 = 7,
	Special_4 = 8,
	Special_5 = 9,
	Special_6 = 10,
	Special_7 = 11,
	Special_8 = 12,
	Special_9 = 13,
	Special_10 = 14,
	Special_11 = 15,
	Special_12 = 16,
	ControllerHand_Count = 17,
	EControllerHand_MAX = 18,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
};

enum class EPodiumMode : uint8_t {
	Team = 0,
	Player = 1,
	EPodiumMode_MAX = 2,
};

enum class ESourceEffectFilterParam : uint8_t {
	FilterFrequency = 0,
	FilterResonance = 1,
	Count = 2,
	ESourceEffectFilterParam_MAX = 3,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};

enum class EWorkShopProgressState : uint8_t {
	InProgress = 0,
	Done = 1,
	EWorkShopProgressState_MAX = 2,
};

enum class EChaosClothTetherMode : uint8_t {
	FastTetherFastLength = 0,
	AccurateTetherFastLength = 1,
	AccurateTetherAccurateLength = 2,
	MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode_MAX = 4,
};

enum class ETextureRotationDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	LeftMirrored = 4,
	RightMirrored = 5,
	DownMirrored = 6,
	UpMirrored = 7,
	ETextureRotationDirection_MAX = 8,
};

enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4,
};

enum class ECTDistinctionType : uint8_t {
	Bounty = 0,
	Hunter = 1,
	Expert = 2,
	Master = 3,
	LAST_DONT_USE = 4,
	Count = 5,
	Undefined = 6,
	ECTDistinctionType_MAX = 7,
};

enum class EMagicLeapControllerLEDEffect : uint8_t {
	RotateCW = 0,
	RotateCCW = 1,
	Pulse = 2,
	PaintCW = 3,
	PaintCCW = 4,
	Blink = 5,
	EMagicLeapControllerLEDEffect_MAX = 6,
};

enum class ECTSocialNotificationType : uint8_t {
	FriendInvitation = 0,
	GroupInvitation = 1,
	FriendConfirmation = 2,
	GroupConfirmation = 3,
	FriendRemoved = 4,
	GroupMemberRemoved = 5,
	GroupMemberLeft = 6,
	FriendJoinedToGroup = 7,
	EggNotification = 8,
	ECTSocialNotificationType_MAX = 9,
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

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

enum class FCTTreasureGameModeEventType : uint8_t {
	SpawnExceptionalDragon = 0,
	SpawnAllExceptionalDragons = 1,
	SpawnAntiBankingPickup = 2,
	SpawnJewelPickup = 3,
	SpawnUnstableChargePickup = 4,
	FCTTreasureGameModeEventType_MAX = 5,
};

enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3,
};

enum class ETemperatureSeverityType : uint8_t {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class ESliderListenMode : uint8_t {
	Instant = 0,
	OnCaptureEnd = 1,
	Count = 2,
	ESliderListenMode_MAX = 3,
};

enum class EAuthenticateStates : uint8_t {
	Authenticate_Idle = 0,
	Authenticate_SelectUser = 1,
	Authenticate_LocalLogin = 2,
	Authenticate_CheckPrivileges = 3,
	Authenticate_Backendlogin = 4,
	Authenticate_BackendAccountFusion = 5,
	Authenticate_Success = 6,
	Authenticate_Failled = 7,
	Authenticate_MAX = 8,
};

enum class EPWSquadCommand : uint8_t {
	Invite = 0,
	Accept = 1,
	Exit = 2,
	Remove = 3,
	Join = 4,
	ReJoin = 5,
	Write = 6,
	StartSession = 7,
	JoinAuto = 8,
	EPWSquadCommand_MAX = 9,
};

enum class EMineState : uint8_t {
	Invalid = 0,
	Falling = 1,
	Failure = 2,
	Triggered = 3,
	Destroyed = 4,
	Attached = 5,
	Exploding = 6,
	EMineState_MAX = 7,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class ESpatialInputGestureAxis : uint8_t {
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4,
};

enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class EFieldScalarType : uint8_t {
	Scalar_ExternalClusterStrain = 0,
	Scalar_Kill = 1,
	Scalar_DisableThreshold = 2,
	Scalar_SleepingThreshold = 3,
	Scalar_InternalClusterStrain = 4,
	Scalar_DynamicConstraint = 5,
	Scalar_TargetMax = 6,
	Scalar_MAX = 7,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

enum class EInitialWaveOscillatorOffsetType : uint8_t {
	Random = 0,
	Zero = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2,
};

enum class EAudioVolumeLocationState : uint8_t {
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2,
};

enum class EMagicLeapTouchpadGestureDirection : uint8_t {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	In = 5,
	Out = 6,
	Clockwise = 7,
	CounterClockwise = 8,
	EMagicLeapTouchpadGestureDirection_MAX = 9,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class EQuartzDelegateType : uint8_t {
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3,
};

enum class EMagicLeapHandTrackingKeypoint : uint8_t {
	Thumb_Tip = 0,
	Thumb_IP = 1,
	Thumb_MCP = 2,
	Thumb_CMC = 3,
	Index_Tip = 4,
	Index_DIP = 5,
	Index_PIP = 6,
	Index_MCP = 7,
	Middle_Tip = 8,
	Middle_DIP = 9,
	Middle_PIP = 10,
	Middle_MCP = 11,
	Ring_Tip = 12,
	Ring_DIP = 13,
	Ring_PIP = 14,
	Ring_MCP = 15,
	Pinky_Tip = 16,
	Pinky_DIP = 17,
	Pinky_PIP = 18,
	Pinky_MCP = 19,
	Wrist_Center = 20,
	Wrist_Ulnar = 21,
	Wrist_Radial = 22,
	Hand_Center = 23,
	EMagicLeapHandTrackingKeypoint_MAX = 24,
};

enum class ECurrencyEnum : uint8_t {
	Soft = 0,
	Hard = 1,
	Real = 2,
	RedeemKey = 3,
	DLC = 4,
	LAST_DONT_USE = 5,
	ECurrencyEnum_MAX = 6,
};

enum class EMagicLeapGestureTransformSpace : uint8_t {
	World = 0,
	Hand = 1,
	Tracking = 2,
	EMagicLeapGestureTransformSpace_MAX = 3,
};

enum class EFlagGateState : uint8_t {
	FlagGateUndefined = 0,
	FlagGateCollectedOnThisTrial = 1,
	FlagGateValidated = 2,
	FlagGateHighlighted = 3,
	EFlagGateState_MAX = 4,
};

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
};

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
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

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
};

enum class EHoudiniXformType : uint8_t {
	None = 0,
	IntoThisObject = 1,
	Auto = 2,
	EHoudiniXformType_MAX = 3,
};

enum class ECTSpawnerType : uint8_t {
	SpawnerProjectile = 0,
	SpawnerBallistics = 1,
	SpawnerMine = 2,
	SpawnerSilenceOrb = 3,
	Spawner_MAX = 4,
	ECTSpawnerType_MAX = 5,
};

enum class EHitProxyPriority : uint8_t {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4,
};

enum class EWeaponMode : uint8_t {
	Full = 0,
	ConsumingFuel = 1,
	WaitingForRefillFuel = 2,
	RefillingFuel = 3,
	InfiniteFuel = 4,
	EWeaponMode_MAX = 5,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
};

enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

enum class EGeometryCollectionPhysicsTypeEnum : uint8_t {
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_Max = 8,
};

enum class EHoudiniInputType : uint8_t {
	Invalid = 0,
	Geometry = 1,
	Curve = 2,
	Asset = 3,
	Landscape = 4,
	World = 5,
	Skeletal = 6,
	EHoudiniInputType_MAX = 7,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
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

enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3,
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

enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3,
};

enum class ENiagaraExecutionStateSource : uint8_t {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class EMagicLeapPassableWorldError : uint8_t {
	None = 0,
	LowMapQuality = 1,
	UnableToLocalize = 2,
	Unavailable = 3,
	PrivilegeDenied = 4,
	InvalidParam = 5,
	UnspecifiedFailure = 6,
	PrivilegeRequestPending = 7,
	StartupPending = 8,
	SharedWorldNotEnabled = 9,
	NotImplemented = 10,
	PinNotFound = 11,
	EMagicLeapPassableWorldError_MAX = 12,
};

enum class EGameResultMode : uint8_t {
	None = 0,
	GoingToSuddenDeath = 1,
	CTFInterRound = 2,
	GameEnd = 3,
	EGameResultMode_MAX = 4,
};

enum class ELimitedCountSectionMode : uint8_t {
	Inherited = 0,
	ShowEmptyUsersIfNotFilled = 1,
	ELimitedCountSectionMode_MAX = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class EARGeoTrackingStateReason : uint8_t {
	None = 0,
	NotAvailableAtLocation = 1,
	NeedLocationPermissions = 2,
	DevicePointedTooLow = 3,
	WorldTrackingUnstable = 4,
	WaitingForLocation = 5,
	GeoDataNotLoaded = 6,
	VisualLocalizationFailed = 7,
	WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason_MAX = 9,
};

enum class EHUDMissileType : uint8_t {
	None = 0,
	Missile_Default = 1,
	Missile_Fireball = 2,
	Missile_Debuff = 3,
	Missile_StrikerActivator = 4,
	Missile_Spear = 5,
	Missile_RavagerMark = 6,
	EHUDMissileType_MAX = 7,
};

enum class EPlayerStateMode : uint8_t {
	Enter = 0,
	Run = 1,
	Exit = 2,
	EPlayerStateMode_MAX = 3,
};

enum class EWorkshopTransitionStep : uint8_t {
	None = 0,
	ShowDescription = 1,
	HighlightWidgets = 2,
	Max = 3,
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

enum class EAudioSpectrumBandPresetType : uint8_t {
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4,
};

enum class EPWEggStatus : uint8_t {
	Undefined = 0,
	Wait = 1,
	Active = 2,
	Open = 3,
	EPWEggStatus_MAX = 4,
};

enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EVectorVMOp : uint8_t {
	done = 0,
	add = 1,
	sub = 2,
	mul = 3,
	div = 4,
	mad = 5,
	lerp = 6,
	rcp = 7,
	rsq = 8,
	sqrt = 9,
	neg = 10,
	abs = 11,
	exp = 12,
	exp2 = 13,
	log = 14,
	log2 = 15,
	sin = 16,
	cos = 17,
	tan = 18,
	asin = 19,
	acos = 20,
	atan = 21,
	atan2 = 22,
	ceil = 23,
	floor = 24,
	fmod = 25,
	frac = 26,
	trunc = 27,
	clamp = 28,
	min = 29,
	max = 30,
	pow = 31,
	round = 32,
	sign = 33,
	step = 34,
	random = 35,
	noise = 36,
	cmplt = 37,
	cmple = 38,
	cmpgt = 39,
	cmpge = 40,
	cmpeq = 41,
	cmpneq = 42,
	select = 43,
	addi = 44,
	subi = 45,
	muli = 46,
	divi = 47,
	clampi = 48,
	mini = 49,
	maxi = 50,
	absi = 51,
	negi = 52,
	signi = 53,
	randomi = 54,
	cmplti = 55,
	cmplei = 56,
	cmpgti = 57,
	cmpgei = 58,
	cmpeqi = 59,
	cmpneqi = 60,
	bit_and = 61,
	bit_or = 62,
	bit_xor = 63,
	bit_not = 64,
	bit_lshift = 65,
	bit_rshift = 66,
	logic_and = 67,
	logic_or = 68,
	logic_xor = 69,
	logic_not = 70,
	f2i = 71,
	i2f = 72,
	f2b = 73,
	b2f = 74,
	i2b = 75,
	b2i = 76,
	inputdata_float = 77,
	inputdata_int32 = 78,
	inputdata_half = 79,
	inputdata_noadvance_float = 80,
	inputdata_noadvance_int32 = 81,
	inputdata_noadvance_half = 82,
	outputdata_float = 83,
	outputdata_int32 = 84,
	outputdata_half = 85,
	acquireindex = 86,
	external_func_call = 87,
	exec_index = 88,
	noise2D = 89,
	noise3D = 90,
	enter_stat_scope = 91,
	exit_stat_scope = 92,
	update_id = 93,
	acquire_id = 94,
	NumOpcodes = 95,
};

enum class ECameraBlend : uint8_t {
	CAMSTATE_Polar = 0,
	CAMSTATE_MAX = 1,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class EBigMessageBlazontype : uint8_t {
	BM_BLAZON_None = 0,
	BM_BLAZON_GameMode = 1,
	BM_BLAZON_Team = 2,
	BM_BLAZON_Team_Eliminated = 3,
	BM_CAT_SpecialPicture = 4,
	LAST_DONT_USE = 5,
	EBigMessageBlazontype_MAX = 6,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ECTButtonState : uint8_t {
	Neutral = 0,
	Hover = 1,
	Disabled = 2,
	ECTButtonState_MAX = 3,
};

enum class EQuartzTimeSignatureQuantization : uint8_t {
	HalfNote = 0,
	QuarterNote = 1,
	EighthNote = 2,
	SixteenthNote = 3,
	ThirtySecondNote = 4,
	Count = 5,
	EQuartzTimeSignatureQuantization_MAX = 6,
};

enum class EWaveFunctionType : uint8_t {
	Field_Wave_Cosine = 0,
	Field_Wave_Gaussian = 1,
	Field_Wave_Falloff = 2,
	Field_Wave_Decay = 3,
	Field_Wave_Max = 4,
};

enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
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

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class ELockableType : uint8_t {
	LT_Player = 0,
	LT_NPC = 1,
	LT_Weapon = 2,
	LT_NPC_Dragon = 3,
	LT_Count = 4,
	LT_MAX = 5,
};

enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
};

enum class ESlateGesture : uint8_t {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6,
};

enum class ESubmixFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5,
};

enum class ECTNestUpgradeMode : uint8_t {
	XPUpgrade = 0,
	MissionUpgrade = 1,
	Count = 2,
	Undefined = 3,
	ECTNestUpgradeMode_MAX = 4,
};

enum class EClusterUnionMethod : uint8_t {
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None = 4,
	EClusterUnionMethod_MAX = 5,
};

enum class ERoundNewControl : uint8_t {
	NEW_None = 0,
	NEW_Gadget = 1,
	NEW_Ability = 2,
	LAST_DONT_USE = 3,
	ERoundNewControl_MAX = 4,
};

enum class ECTUIToggleButtonState : uint8_t {
	None = 0,
	Selected = 1,
	Unselected = 2,
	MAX = 3,
};

enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class ENiagaraBindingSource : uint8_t {
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6,
};

enum class ENavigationInput : uint8_t {
	ENAVI_UNDEFINED = 0,
	ENAVI_Back = 1,
	ENAVI_NextPage_L0 = 2,
	ENAVI_NextPage_L1 = 3,
	ENAVI_PreviousPage_L0 = 4,
	ENAVI_PreviousPage_L1 = 5,
	ENAVI_Right = 6,
	ENAVI_Left = 7,
	ENAVI_MAX = 8,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
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

enum class EPassiveTriggerContext : uint8_t {
	Default = 0,
	Assist = 1,
	Frag = 2,
	FrostBolt = 3,
	Blast = 4,
	HunterMark = 5,
	Count = 6,
	Invalid = 7,
	EPassiveTriggerContext_MAX = 8,
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

enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class EPWChestType : uint8_t {
	Undefined = 0,
	Level = 1,
	Quest = 2,
	HideLevel = 3,
	EPWChestType_MAX = 4,
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

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
};

enum class EARFaceTransformMixing : uint8_t {
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class EWorkshopEducationType : uint8_t {
	None = 0,
	Fight = 1,
	Navigation = 2,
	MAX = 3,
};

enum class EFieldPhysicsType : uint8_t {
	Field_None = 0,
	Field_DynamicState = 1,
	Field_LinearForce = 2,
	Field_ExternalClusterStrain = 3,
	Field_Kill = 4,
	Field_LinearVelocity = 5,
	Field_AngularVelociy = 6,
	Field_AngularTorque = 7,
	Field_InternalClusterStrain = 8,
	Field_DisableThreshold = 9,
	Field_SleepingThreshold = 10,
	Field_PositionStatic = 11,
	Field_PositionAnimated = 12,
	Field_PositionTarget = 13,
	Field_DynamicConstraint = 14,
	Field_CollisionGroup = 15,
	Field_ActivateDisabled = 16,
	Field_PhysicsType_Max = 17,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class EAudioBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	EAudioBusChannels_MAX = 2,
};

enum class EReflectionsType : uint8_t {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2,
};

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4,
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

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3,
};

enum class EPWPresence : uint8_t {
	Offline = 0,
	InMenu = 1,
	InGame = 2,
	EPWPresence_MAX = 3,
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

enum class ENiagaraDebugHudFont : uint8_t {
	Small = 0,
	Normal = 1,
	ENiagaraDebugHudFont_MAX = 2,
};

enum class EGAErrorSeverity : uint8_t {
	undefined = 0,
	debug = 1,
	info = 2,
	warning = 3,
	error = 4,
	critical = 5,
	EGAErrorSeverity_MAX = 6,
};

enum class ETimedDataInputState : uint8_t {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3,
};

enum class EBigMessageType : uint8_t {
	BIGMESSAGE_None = 0,
	BIGMESSAGE_EndGame = 1,
	BIGMESSAGE_Overtime = 2,
	BIGMESSAGE_SuddenDeath_Begin = 3,
	BIGMESSAGE_SuddenDeath_Update_PlayerTeam = 4,
	BIGMESSAGE_SuddenDeath_Update_EnemyTeam = 5,
	BIGMESSAGE_Bounty_Begin = 6,
	BIGMESSAGE_Bounty_Update = 7,
	BIGMESSAGE_Bounty_Expired = 8,
	BIGMESSAGE_Bounty_Target = 9,
	BIGMESSAGE_MegaSpear_Available = 10,
	BIGMESSAGE_Berserk_Soon = 11,
	BIGMESSAGE_Berserk_Available = 12,
	BIGMESSAGE_Berserk_Player = 13,
	BIGMESSAGE_Berserk_PlayerTeam = 14,
	BIGMESSAGE_Berserk_EnemyTeam = 15,
	BIGMESSAGE_Berserk_Ended = 16,
	BIGMESSAGE_Berserk_Given = 17,
	BIGMESSAGE_Berserk_Auto = 18,
	BIGMESSAGE_LastTeamStanding_TeamMateInjured = 19,
	BIGMESSAGE_LastTeamStanding_TeamMateDied = 20,
	BIGMESSAGE_LastTeamStanding_TeamDied = 21,
	BIGMESSAGE_LastTeamStanding_TeamMateRescued = 22,
	BIGMESSAGE_LastTeamStanding_TeamMateRespawned = 23,
	BIGMESSAGE_LastTeamStanding_TeamRemainingPlayers = 24,
	BIGMESSAGE_LastTeamStanding_Overtime = 25,
	BIGMESSAGE_CaptureTheFlag_FlagAboutToSpawn = 26,
	BIGMESSAGE_CaptureTheFlag_FlagAvailable = 27,
	BIGMESSAGE_CaptureTheFlag_FlagCapturedByTeamMate = 28,
	BIGMESSAGE_CaptureTheFlag_FlagCapturedByMe = 29,
	BIGMESSAGE_CaptureTheFlag_FlagCapturedByEnemy = 30,
	BIGMESSAGE_CaptureTheFlag_FlagRespawned = 31,
	BIGMESSAGE_CaptureTheFlag_FlagDropped = 32,
	BIGMESSAGE_ItemProvider_SpawnSoonFragMult = 33,
	BIGMESSAGE_ItemProvider_SpawnSoonFragOne = 34,
	BIGMESSAGE_ItemProviderSpawned = 35,
	BIGMESSAGE_TimeIsRunningOut = 36,
	BIGMESSAGE_NewLeader_PlayerTeam = 37,
	BIGMESSAGE_NewLeader_EnemyTeam = 38,
	BIGMESSAGE_FreeForAll_PlayerLead = 39,
	BIGMESSAGE_FreeForAll_EnemyLead = 40,
	BIGMESSAGE_Treasure_BankOpen = 41,
	BIGMESSAGE_Treasure_FirstTreasure = 42,
	BIGMESSAGE_Treasure_TreasureHolderTarget = 43,
	BIGMESSAGE_Treasure_ArtifactSpawned = 44,
	BIGMESSAGE_Treasure_ArtifactTaken_TeamMate = 45,
	BIGMESSAGE_Treasure_ArtifactTaken_Enemy = 46,
	BIGMESSAGE_Treasure_ArtifactTaken_Player = 47,
	BIGMESSAGE_Treasure_ArtifactFallen = 48,
	BIGMESSAGE_Treasure_JewelSpawned = 49,
	BIGMESSAGE_Treasure_JewelTaken_Player = 50,
	BIGMESSAGE_Treasure_JewelTaken_Others = 51,
	BIGMESSAGE_Treasure_JewelFallen = 52,
	BIGMESSAGE_Treasure_UnstableCharge_Spawn = 53,
	BIGMESSAGE_Treasure_UnstableCharge_Collect = 54,
	BIGMESSAGE_Treasure_UnstableCharge_Drop = 55,
	BIGMESSAGE_Treasure_UnstableCharge_Explode = 56,
	BIGMESSAGE_Treasure_Exceptional_Dragon = 57,
	BIGMESSAGE_Treasure_All_Exceptional_Dragon = 58,
	LAST_DONT_USE = 59,
	EBigMessageType_MAX = 60,
};

enum class EARSessionTrackingFeature : uint8_t {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	SceneDepth = 4,
	SmoothedSceneDepth = 5,
	EARSessionTrackingFeature_MAX = 6,
};

enum class ENCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5,
};

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EXRTrackedDeviceType : uint8_t {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 4,
	Any = 5,
	EXRTrackedDeviceType_MAX = 6,
};

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class EParticleAllocationMode : uint8_t {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2,
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

enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

enum class EMaterialProperty : uint8_t {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement = 13,
	MP_TessellationMultiplier = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_MaterialAttributes = 30,
	MP_CustomOutput = 31,
	MP_MAX = 32,
};

enum class ENiagaraScriptTemplateSpecification : uint8_t {
	None = 0,
	Template = 1,
	Behavior = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3,
};

enum class EPreyFlags : uint8_t {
	None = 0,
	Hunted = 1,
	HunterEnraged = 2,
	EPreyFlags_MAX = 3,
};

enum class EMouseControlType : uint8_t {
	MCT_Movement = 0,
	MCT_Direction = 1,
	MCT_DirectionWithThreshold = 2,
	MCT_NUM = 3,
	MCT_MAX = 4,
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

enum class ETextureDownscaleOptions : uint8_t {
	Default = 0,
	Unfiltered = 1,
	SimpleAverage = 2,
	Sharpen0 = 3,
	Sharpen1 = 4,
	Sharpen2 = 5,
	Sharpen3 = 6,
	Sharpen4 = 7,
	Sharpen5 = 8,
	Sharpen6 = 9,
	Sharpen7 = 10,
	Sharpen8 = 11,
	Sharpen9 = 12,
	Sharpen10 = 13,
	ETextureDownscaleOptions_MAX = 14,
};

enum class ETemplateSectionPropertyScaleType : uint8_t {
	FloatProperty = 0,
	TransformPropertyLocationOnly = 1,
	TransformPropertyRotationOnly = 2,
	ETemplateSectionPropertyScaleType_MAX = 3,
};

enum class ELiveLinkAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	XNeg = 3,
	YNeg = 4,
	ZNeg = 5,
	ELiveLinkAxis_MAX = 6,
};

enum class ECTLocalSaveStatus : uint8_t {
	Outdated = 0,
	Saving = 1,
	Loading = 2,
	UpToDate = 3,
	ECTLocalSaveStatus_MAX = 4,
};

enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class UISoundEnum : uint8_t {
	Undefined = 0,
	BountyActivation = 1,
	ShieldExhausted = 2,
	OpponentDamageHealth = 3,
	OpponentDamageShield = 4,
	OpponentBrokenShield = 5,
	EndMatchDefeat = 6,
	EndMatchDraw = 7,
	EndMatchWin = 8,
	OpponentKilled = 9,
	OpponentKilledWithAssist = 10,
	BerserkFrag = 11,
	Frag = 12,
	AllyKilled = 13,
	TimerLastSeconds = 14,
	EndTimer = 15,
	SuddenDeath = 16,
	TimeToRespawn = 17,
	BigMessage = 18,
	Death = 19,
	FlameThrowerLock = 20,
	FireballLock = 21,
	OnScoreboard = 22,
	GotRevived = 23,
	GadgetReady = 24,
	TeamHornCastBuff = 25,
	TeamHornReceiveBuff = 26,
	MenuExit = 27,
	MenuHover = 28,
	MenuMove = 29,
	MenuValid = 30,
	ChieftainDashStart = 31,
	FailDash = 32,
	LowHP = 33,
	FlagPicked = 34,
	FlagDropped = 35,
	RavagerRushStart = 36,
	RavagerRushFail = 37,
	RavagerRushStopPrep = 38,
	RavagerReceive = 39,
	BerserkSpawned = 40,
	LureGainStamina = 41,
	MatchEndSoon = 42,
	LAST_DONT_USE = 43,
	UISoundEnum_MAX = 44,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class EPushNotificationPlatform : uint8_t {
	pfenum_ApplePushNotificationService = 0,
	pfenum_GoogleCloudMessaging = 1,
	pfenum_MAX = 2,
};

enum class ECloudScriptRevisionOption : uint8_t {
	pfenum_Live = 0,
	pfenum_Latest = 1,
	pfenum_Specific = 2,
	pfenum_MAX = 3,
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

enum class EPWPlayerReset : uint8_t {
	ResetNone = 0,
	ResetAll = 1,
	ResetQuest = 2,
	ResetInventory = 3,
	EPWPlayerReset_MAX = 4,
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

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

enum class EParticleDetailMode : uint8_t {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3,
};

enum class EHoudiniGeoType : uint8_t {
	Invalid = 0,
	Default = 1,
	Intermediate = 2,
	Input = 3,
	Curve = 4,
	EHoudiniGeoType_MAX = 5,
};

enum class EARSceneReconstruction : uint8_t {
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class ENiagaraRibbonFacingMode : uint8_t {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3,
};

enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

enum class EConstantQNormalizationEnum : uint8_t {
	EqualEuclideanNorm = 0,
	EqualEnergy = 1,
	EqualAmplitude = 2,
	EConstantQNormalizationEnum_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EVoiceSampleRate : uint8_t {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2,
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
	TSF_G16 = 8,
	TSF_MAX = 9,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3,
};

enum class EAbility : uint8_t {
	ABILITY_None = 0,
	ABILITY_Fireball = 1,
	ABILITY_Flamethrower = 2,
	ABILITY_Lure = 3,
	ABILITY_Mine = 4,
	ABILITY_WarHorn = 5,
	ABILITY_MegaBoost = 6,
	ABILITY_TeamPower = 7,
	ABILITY_BurstFire = 8,
	ABILITY_Blast = 9,
	ABILITY_Invisibility = 10,
	ABILITY_MegaSpear = 11,
	ABILITY_MultipleLock = 12,
	ABILITY_SmokeBomb = 13,
	ABILITY_Striker = 14,
	ABILITY_DartTrap = 15,
	ABILITY_ChieftainDash = 16,
	ABILITY_ChieftainFreeForAllDash = 17,
	ABILITY_RavagerRush = 18,
	ABILITY_StickyMine = 19,
	ABILITY_FieryShield = 20,
	ABILITY_AutoEquipSpear = 21,
	ABILITY_MediKit = 22,
	ABILITY_BattleBerserk = 23,
	ABILITY_GreenBall = 24,
	ABILITY_RedBall = 25,
	ABILITY_Rocket = 26,
	ABILITY_ElusiveTarget = 27,
	ABILITY_RelentlessPredator = 28,
	ABILITY_Robustness = 29,
	ABILITY_GuardShatterer = 30,
	ABILITY_SecondWind = 31,
	ABILITY_Dodge = 32,
	ABILITY_Shuffle = 33,
	ABILITY_InvisibilityAndMines = 34,
	ABILITY_StrikerRage = 35,
	ABILITY_ChieftainDashRage = 36,
	ABILITY_ChieftainFreeForAllDashRage = 37,
	ABILITY_DeathMist = 38,
	ABILITY_RavagerRage = 39,
	ABILITY_SilenceOrb = 40,
	ABILITY_ThunderMark = 41,
	LAST_DONT_USE = 42,
	EAbility_MAX = 43,
};

enum class EItemProviderBonus : uint8_t {
	BONUS_Berserk = 0,
	BONUS_Spear = 1,
	BONUS_Gold = 2,
	BONUS_MAX = 3,
};

enum class EContainerFlavor : uint8_t {
	pfenum_ManagedWindowsServerCore = 0,
	pfenum_CustomLinux = 1,
	pfenum_ManagedWindowsServerCorePreview = 2,
	pfenum_Invalid = 3,
	pfenum_MAX = 4,
};

enum class EHoudiniAssetStateResult : uint8_t {
	None = 0,
	Working = 1,
	Success = 2,
	FinishedWithError = 3,
	FinishedWithFatalError = 4,
	Aborted = 5,
	EHoudiniAssetStateResult_MAX = 6,
};

enum class EPopcornFXSceneBBMode : uint8_t {
	Dynamic = 0,
	DynamicPlusFixed = 1,
	Fixed = 2,
	EPopcornFXSceneBBMode_MAX = 3,
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

enum class ECTCellState : uint8_t {
	Dead = 0,
	Alive = 1,
	Injured = 2,
	Rescued = 3,
	Count = 4,
	Undefined = 5,
	ECTCellState_MAX = 6,
};

enum class EOptionsSection : uint8_t {
	General_Video = 0,
	General_AdvancedVideo = 1,
	General_Audio = 2,
	General_Social = 3,
	Controls_Axis = 4,
	Controls_Mouse = 5,
	Controls_Input = 6,
	Count = 7,
	EOptionsSection_MAX = 8,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

enum class EUINavigationRule : uint8_t {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7,
};

enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

enum class ConnectionState : uint8_t {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4,
};

enum class EPopcornFXShapeCollectionSamplingHeuristic : uint8_t {
	NoWeight = 0,
	WeightWithVolume = 1,
	WeightWithSurface = 2,
	EPopcornFXShapeCollectionSamplingHeuristic_MAX = 3,
};

enum class EReverbSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3,
};

enum class EEmailVerificationStatus : uint8_t {
	pfenum_Unverified = 0,
	pfenum_Pending = 1,
	pfenum_Confirmed = 2,
	pfenum_MAX = 3,
};

enum class EHoudiniExecutableType : uint8_t {
	HRSHE_Houdini = 0,
	HRSHE_HoudiniFX = 1,
	HRSHE_HoudiniCore = 2,
	HRSHE_HoudiniIndie = 3,
	HRSHE_MAX = 4,
};

enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
};

enum class ENiagaraScriptUsage : uint8_t {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13,
};

enum class ERandomPickup : uint8_t {
	RP_Berserk = 0,
	RP_Spear = 1,
	RP_MediKit = 2,
	RP_Greenball1x = 3,
	RP_Redball1x = 4,
	RP_Greenball3x = 5,
	RP_Redball3x = 6,
	RP_Rocket = 7,
	RP_Count = 8,
	RP_Invalid = 9,
	Undefined = 10,
	None = 11,
	LAST_DONT_USE = 12,
	ERandomPickup_MAX = 13,
};

enum class ERotationComponent : uint8_t {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6,
};

enum class ESynthLFOType : uint8_t {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	ESynthLFOType_MAX = 8,
};

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

enum class EPopupType : uint8_t {
	POP_Default = 0,
	POP_PurchaseConfirm = 1,
	POP_PurchaseCompleted = 2,
	POP_PurchaseCancelled = 3,
	POP_NotEnoughMoney = 4,
	POP_NotEnoughSoftMoney = 5,
	POP_ClassAlreadyOwned = 6,
	POP_ClassSoonAvailable = 7,
	POP_ShopBackendError = 8,
	POP_QuitMenuConfirm = 9,
	POP_QuitGameConfirm = 10,
	POP_ConflictingKeyMappings = 11,
	POP_ResetToDefault = 12,
	POP_OptionsControlsIsInEditMode = 13,
	POP_LogoutConfirm = 14,
	POP_SocialDeleteFriendWarning = 15,
	POP_SocialExitFromGroupWarning = 16,
	POP_SocialGroupTransitionWarning = 17,
	POP_SocialNoSuchCenturyId = 18,
	POP_SocialGroupDoesNotExist = 19,
	POP_EditProfile = 20,
	POP_EditPlayerTitle = 21,
	POP_EditPlayerMainClass = 22,
	POP_EditPlayerIcon = 23,
	POP_EditPlayerNickname = 24,
	POP_EditPlayerWallpaper = 25,
	POP_EditPlayerFanion = 26,
	POP_News = 27,
	POP_ModeFilter = 28,
	POP_NoSteam = 29,
	POP_Disconnected = 30,
	POP_InternalBackend = 31,
	POP_AlreadyPurchase = 32,
	POP_StoreObsolete = 33,
	POP_PriceChanged = 34,
	POP_ProfileNotSaved = 35,
	POP_LegendaryEquiped = 36,
	POP_ServerRequestFailed = 37,
	POP_UserProfileBackendError = 38,
	POP_FTUE_TermsOfUse = 39,
	POP_FTUE_FoundersThanks = 40,
	POP_FTUE_Welcome = 41,
	POP_FTUE_SkipTutorial = 42,
	POP_FTUE_PlaySimple = 43,
	POP_FTUE_EggOwned = 44,
	POP_FTUE_EggEquip = 45,
	POP_FTUE_EggFull = 46,
	POP_FTUE_BabyDragonOwned = 47,
	POP_FTUE_BabyDragonGrown = 48,
	POP_FTUE_CustoDragon = 49,
	POP_FTUE_CustoOwned = 50,
	POP_FTUE_DragonOwned = 51,
	POP_FTUE_HatchingVisit = 52,
	POP_FTUE_CollectionVisit = 53,
	POP_FTUE_CustoVisit = 54,
	POP_FTUE_SkipRookie = 55,
	POP_FTUE_StartRookie = 56,
	POP_FTUE_EndRookie = 57,
	POP_FTUE_EggReminder = 58,
	POP_FTUE_VeteranDiscount = 59,
	POP_FTUE_TDMRules = 60,
	POP_FTUE_CTFRules = 61,
	POP_FTUE_TreasureRules = 62,
	POP_FTUE_ROOKRules = 63,
	POP_DLC_Congratulations = 64,
	POP_AccountLinking_Welcome = 65,
	POP_AccountLinking_LinkAccount = 66,
	POP_AccountLinking_LinkAccountConfirmation = 67,
	POP_AccountLinking_EnterPassword = 68,
	POP_AccountLinking_Error_SomethingWentWrong = 69,
	POP_AccountLinking_Error_AlreadyLoggedIn = 70,
	POP_Hatching_ToBaby = 71,
	POP_Hatching_ToAdult = 72,
	POP_PendingOrder_Success = 73,
	POP_IDLE = 74,
	POP_Disconnect = 75,
	POP_FailInternetConnection = 76,
	POP_LeaverPenaltyWarning = 77,
	POP_LeaverPenalty = 78,
	POP_Error = 79,
	POP_BoosterAlreadyActivated = 80,
	POP_Gamepad_ConnectionLost = 81,
	POP_LAST_DONT_USE = 82,
	POP_MAX = 83,
};

enum class ECTChapterCheckBoxType : uint8_t {
	First = 0,
	Middle = 1,
	Last = 2,
	ECTChapterCheckBoxType_MAX = 3,
};

enum class ETaskRunnerReferenceMode : uint8_t {
	Drop = 0,
	Retain = 1,
	ETaskRunnerReferenceMode_MAX = 2,
};

enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
};

enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class AkMultiPositionType : uint8_t {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3,
};

enum class EAbilitySlotEnum : uint8_t {
	AS_Gadget = 0,
	AS_ClassPower = 1,
	AS_MainWeapon = 2,
	AS_SlotCount = 3,
	AS_MAX = 4,
};

enum class EMegaSpearHUDState : uint8_t {
	None = 0,
	Free = 1,
	Hold = 2,
	Hunting = 3,
	EMegaSpearHUDState_MAX = 4,
};

enum class EPWMatchQueryStatus : uint8_t {
	MQS_WaitingForPlayers = 0,
	MQS_WaitingForMatch = 1,
	MQS_WaitingForServer = 2,
	MQS_Canceled = 3,
	MQS_Matched = 4,
	MQS_MAX = 5,
};

enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t {
	Lerp = 0,
	Nearest = 1,
	Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3,
};

enum class EAzureVmSize : uint8_t {
	pfenum_Standard_A1 = 0,
	pfenum_Standard_A2 = 1,
	pfenum_Standard_A3 = 2,
	pfenum_Standard_A4 = 3,
	pfenum_Standard_A1_v2 = 4,
	pfenum_Standard_A2_v2 = 5,
	pfenum_Standard_A4_v2 = 6,
	pfenum_Standard_A8_v2 = 7,
	pfenum_Standard_D1_v2 = 8,
	pfenum_Standard_D2_v2 = 9,
	pfenum_Standard_D3_v2 = 10,
	pfenum_Standard_D4_v2 = 11,
	pfenum_Standard_D5_v2 = 12,
	pfenum_Standard_D2_v3 = 13,
	pfenum_Standard_D4_v3 = 14,
	pfenum_Standard_D8_v3 = 15,
	pfenum_Standard_D16_v3 = 16,
	pfenum_Standard_F1 = 17,
	pfenum_Standard_F2 = 18,
	pfenum_Standard_F4 = 19,
	pfenum_Standard_F8 = 20,
	pfenum_Standard_F16 = 21,
	pfenum_Standard_F2s_v2 = 22,
	pfenum_Standard_F4s_v2 = 23,
	pfenum_Standard_F8s_v2 = 24,
	pfenum_Standard_F16s_v2 = 25,
	pfenum_Standard_D2as_v4 = 26,
	pfenum_Standard_D4as_v4 = 27,
	pfenum_Standard_D8as_v4 = 28,
	pfenum_Standard_D16as_v4 = 29,
	pfenum_Standard_D2a_v4 = 30,
	pfenum_Standard_D4a_v4 = 31,
	pfenum_Standard_D8a_v4 = 32,
	pfenum_Standard_D16a_v4 = 33,
	pfenum_Standard_E2a_v4 = 34,
	pfenum_Standard_E4a_v4 = 35,
	pfenum_Standard_E8a_v4 = 36,
	pfenum_Standard_E16a_v4 = 37,
	pfenum_Standard_E2as_v4 = 38,
	pfenum_Standard_E4as_v4 = 39,
	pfenum_Standard_E8as_v4 = 40,
	pfenum_Standard_E16as_v4 = 41,
	pfenum_Standard_D2s_v3 = 42,
	pfenum_Standard_D4s_v3 = 43,
	pfenum_Standard_D8s_v3 = 44,
	pfenum_Standard_D16s_v3 = 45,
	pfenum_Standard_DS1_v2 = 46,
	pfenum_Standard_DS2_v2 = 47,
	pfenum_Standard_DS3_v2 = 48,
	pfenum_Standard_DS4_v2 = 49,
	pfenum_Standard_DS5_v2 = 50,
	pfenum_Standard_NC4as_T4_v3 = 51,
	pfenum_Standard_D2d_v4 = 52,
	pfenum_Standard_D4d_v4 = 53,
	pfenum_Standard_D8d_v4 = 54,
	pfenum_Standard_D16d_v4 = 55,
	pfenum_Standard_D2ds_v4 = 56,
	pfenum_Standard_D4ds_v4 = 57,
	pfenum_Standard_D8ds_v4 = 58,
	pfenum_Standard_D16ds_v4 = 59,
	pfenum_Standard_MAX = 60,
};

enum class EContextMenuType : uint8_t {
	None = 0,
	Standart = 1,
	MAX = 2,
};

enum class EMagicLeapIdentityKey : uint8_t {
	GivenName = 0,
	FamilyName = 1,
	Email = 2,
	Bio = 3,
	PhoneNumber = 4,
	Avatar2D = 5,
	Avatar3D = 6,
	Unknown = 7,
	EMagicLeapIdentityKey_MAX = 8,
};

enum class ESpectatorReservationResult : uint8_t {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16,
};

enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t {
	NoFilter = 0,
	SlightRobustnessToFlicker = 1,
	MoreRobustnessToFlicker = 2,
	EMagicLeapHandTrackingGestureFilterLevel_MAX = 3,
};

enum class ECTFTUEEventType : uint8_t {
	FTUE_TermsOfUse = 0,
	FTUE_FoundersThanks = 1,
	FTUE_Welcome = 2,
	FTUE_BetaPack = 3,
	FTUE_TutoDone = 4,
	FTUE_PlaySimple = 5,
	FTUE_EggOwned = 6,
	FTUE_EggEquip = 7,
	FTUE_EggFull = 8,
	FTUE_BabyDragonOwned = 9,
	FTUE_BabyDragonGrown = 10,
	FTUE_DragonOwned = 11,
	FTUE_CustoDragon = 12,
	FTUE_FirstHatchingVisit = 13,
	FTUE_CustoOwned = 14,
	FTUE_FirstCustoVisit = 15,
	FTUE_SkipRookie = 16,
	FTUE_StartRookie = 17,
	FTUE_EndRookie = 18,
	FTUE_EggReminder = 19,
	FTUE_Treasure = 20,
	FTUE_FirstCollectionVisit = 21,
	FTUE_CTF = 22,
	FTUE_TDM = 23,
	CRM_Veteran = 24,
	ECTFTUEEventType_MAX = 25,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};

enum class EBigMessageCategory : uint8_t {
	BM_CAT_Basic = 0,
	BM_CAT_Colored = 1,
	LAST_DONT_USE = 2,
	EBigMessageCategory_MAX = 3,
};

enum class EMIDCreationFlags : uint8_t {
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2,
};

enum class ENiagaraScriptCompileStatus : uint8_t {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7,
};

enum class EMagicLeapControllerHapticPattern : uint8_t {
	None = 0,
	Click = 1,
	Bump = 2,
	DoubleClick = 3,
	Buzz = 4,
	Tick = 5,
	ForceDown = 6,
	ForceUp = 7,
	ForceDwell = 8,
	SecondForceDown = 9,
	EMagicLeapControllerHapticPattern_MAX = 10,
};

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class EPopcornFXRenderCullMethod : uint8_t {
	None = 0,
	DrawRequestsAgainstFrustrum = 1,
	EPopcornFXRenderCullMethod_MAX = 2,
};

enum class EWeaponType : uint8_t {
	WEAPON_None = 0,
	WEAPON_Fireball = 1,
	WEAPON_FireballBig = 2,
	WEAPON_FireballCloaked = 3,
	WEAPON_FireballStrikerActivator = 4,
	WEAPON_FireballStrikerHunting = 5,
	WEAPON_FireballMultiLock = 6,
	WEAPON_FireballBurst = 7,
	WEAPON_FireballGreen = 8,
	WEAPON_FireballRed = 9,
	WEAPON_FireballBattleBerserk = 10,
	WEAPON_FireballBig_WGRage = 11,
	WEAPON_FireballRavagerRage = 12,
	WEAPON_FireballThunderMark = 13,
	WEAPON_FireballRavagerRushMark = 14,
	WEAPON_Mine = 15,
	WEAPON_Blast = 16,
	WEAPON_Rocket = 17,
	WEAPON_FlameThrower_Direct = 18,
	WEAPON_FlameThrowerBattle_Direct = 19,
	WEAPON_FlameThrowerBig_Direct = 20,
	WEAPON_FlameThrower = 21,
	WEAPON_FlameThrowerBig = 22,
	WEAPON_Pierce = 23,
	WEAPON_Wall = 24,
	WEAPON_MegaSpear = 25,
	WEAPON_BallistaArrow = 26,
	WEAPON_BallistaArrowExplode = 27,
	WEAPON_Canon = 28,
	WEAPON_FlagToCapture = 29,
	WEAPON_SmokeBomb = 30,
	WEAPON_DartTrap = 31,
	WEAPON_DartTrapArrow = 32,
	WEAPON_DartTrapArrowPoison = 33,
	WEAPON_RavagerRush = 34,
	WEAPON_RavagerRush_Rage = 35,
	WEAPON_StickyMine = 36,
	WEAPON_SmokeBombPoison = 37,
	WEAPON_CustomHeal = 38,
	WEAPON_LTSDead = 39,
	WEAPON_FieryShield = 40,
	WEAPON_BattleSpear = 41,
	WEAPON_Shockwave = 42,
	WEAPON_StickyMineFromRage = 43,
	WEAPON_SilenceOrb = 44,
	WEAPON_ThunderMarkBolt = 45,
	LAST_DONT_USE = 46,
	WEAPON_1stFlameThrower = 47,
	WEAPON_1stFlameThrower_Direct = 48,
	WEAPON_LastFlameThrower_Direct = 49,
	WEAPON_1stFlameThrower_Indirect = 50,
	WEAPON_LastFlameThrower_Indirect = 51,
	WEAPON_LastFlameThrower = 52,
	EWeaponType_MAX = 53,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
};

enum class EAutoScrollTypeEnum : uint8_t {
	Vertical = 0,
	Horizontal = 1,
	EAutoScrollTypeEnum_MAX = 2,
};

enum class EWallHitReason : uint8_t {
	WHR_Player = 0,
	WHR_Blast = 1,
	WHR_COUNT = 2,
	WHR_MAX = 3,
};

enum class EEndMatchSummaryState : uint8_t {
	EMS_Waiting = 0,
	EMS_WaitingForApplyMatchResult = 1,
	EMS_XPFilling = 2,
	EMS_XPBonusFilling = 3,
	EMS_NewLevelShowing = 4,
	EMS_EggHatchShowing = 5,
	EMS_IndicationShowing = 6,
	EMS_Waiting_For_RemainingTime = 7,
	EMS_BackToMenuPressed = 8,
	EMS_MAX = 9,
};

enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class ECTTabMainMenuLayers : uint8_t {
	Undefined = 0,
	Root = 1,
	Chest = 2,
	Quest = 3,
	Booster = 4,
	Purchase = 5,
	Detail = 6,
	Showroom = 7,
	Count = 8,
	ECTTabMainMenuLayers_MAX = 9,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class EMontageSubStepResult : uint8_t {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4,
};

enum class EStrikeHitEnum : uint8_t {
	WS_None = 0,
	SH_FrontLeft = 1,
	SH_FrontRight = 2,
	SH_BackLeft = 3,
	SH_BackRight = 4,
	SH_Below = 5,
	SH_Up = 6,
	EStrikeHitEnum_MAX = 7,
};

enum class ELocationXToSpawnEnum : uint8_t {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class EBigMessageColor : uint8_t {
	BM_CAT_White = 0,
	BM_CAT_Team = 1,
	BM_CAT_SpecialColor = 2,
	LAST_DONT_USE = 3,
	EBigMessageColor_MAX = 4,
};

enum class ESelectedObjectsModificationType : uint8_t {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class ERookieRoundResultType : uint8_t {
	ROOKIE_Win = 0,
	ROOKIE_Loose = 1,
	ROOKIE_Draw = 2,
	LAST_DONT_USE = 3,
	ERookieRoundResultType_MAX = 4,
};

enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

enum class EPrimaryAssetCookRule : uint8_t {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5,
};

enum class EMagicLeapControllerLEDSpeed : uint8_t {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	EMagicLeapControllerLEDSpeed_MAX = 3,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EPWServerPortProtocol : uint8_t {
	SPP_Tcp = 0,
	SPP_Udp = 1,
	SPP_MAX = 2,
};

enum class EOfflineExplanationMode : uint8_t {
	None = 0,
	Detailed = 1,
	Simplified = 2,
	EOfflineExplanationMode_MAX = 3,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class EOodleEnableMode : uint8_t {
	AlwaysEnabled = 0,
	WhenCompressedPacketReceived = 1,
	EOodleEnableMode_MAX = 2,
};

enum class EPlayerConnectionState : uint8_t {
	pfenum_Unassigned = 0,
	pfenum_Connecting = 1,
	pfenum_Participating = 2,
	pfenum_Participated = 3,
	pfenum_MAX = 4,
};

enum class EPhysicalMaterialMaskColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8,
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

enum class EGAAdType : uint8_t {
	undefined = 0,
	video = 1,
	rewardedvideo = 2,
	playable = 3,
	interstitial = 4,
	offerwall = 5,
	banner = 6,
	EGAAdType_MAX = 7,
};

enum class ENotificationBadgeType : uint8_t {
	None = 0,
	FriendsInvitations = 1,
	GroupInvitations = 2,
	MAX = 3,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class ENDISkelMesh_GpuMaxInfluences : uint8_t {
	AllowMax4 = 0,
	AllowMax8 = 1,
	Unlimited = 2,
	ENDISkelMesh_MAX = 3,
};

enum class EPlaneComponentDebugMode : uint8_t {
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3,
};

enum class EContextMenuMisclickMode : uint8_t {
	Flexible = 0,
	Blocking = 1,
	EContextMenuMisclickMode_MAX = 2,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class EPushSetupPlatform : uint8_t {
	pfenum_GCM = 0,
	pfenum_APNS = 1,
	pfenum_APNS_SANDBOX = 2,
	pfenum_MAX = 3,
};

enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3,
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

enum class EMapEnvironment : uint8_t {
	EME_None = 0,
	EME_Akrar = 1,
	EME_Lake = 2,
	EME_Jordan = 3,
	EME_Basin = 4,
	EME_Tutorial = 5,
	EME_Test = 6,
	EME_JIHSnow = 7,
	EME_Harbour = 8,
	EME_R_Proto = 9,
	EME_Aerial = 10,
	EME_Count = 11,
	EME_MAX = 12,
};

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
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

enum class EInvisibilityStatus : uint8_t {
	EIS_Visible = 0,
	EIS_Revealed = 1,
	EIS_Invisible = 2,
	EIS_MAX = 3,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class ECTHeroCustoType : uint8_t {
	Undefined = 0,
	Glove = 1,
	Helmet = 2,
	Shoulder = 3,
	Upper = 4,
	Lower = 5,
	Shield = 6,
	Weapon = 7,
	Head = 8,
	Cape = 9,
	Count = 10,
	ECTHeroCustoType_MAX = 11,
};

enum class EExperimentType : uint8_t {
	pfenum_Active = 0,
	pfenum_Snapshot = 1,
	pfenum_MAX = 2,
};

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
};

enum class EPanningMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2,
};

enum class ECTDLCSubsystemState : uint8_t {
	Idle = 0,
	Granting = 1,
	Count = 2,
	ECTDLCSubsystemState_MAX = 3,
};

enum class ECTPlayTabStatus : uint8_t {
	None = 0,
	Idle = 1,
	MatchMaking = 2,
	JoiningMatch = 3,
	Locked = 4,
	Count = 5,
	ECTPlayTabStatus_MAX = 6,
};

enum class EInertializationBoneState : uint8_t {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3,
};

enum class ESlateDebuggingInputEvent : uint8_t {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EShieldType : uint8_t {
	ST_None = 0,
	ST_Normal = 1,
	ST_Extra_Windguard = 2,
	ST_Extra_FieryShield = 3,
	ST_MAX = 4,
};

enum class EPDGWorkResultState : uint8_t {
	None = 0,
	ToLoad = 1,
	Loading = 2,
	Loaded = 3,
	ToDelete = 4,
	Deleting = 5,
	Deleted = 6,
	NotLoaded = 7,
	EPDGWorkResultState_MAX = 8,
};

enum class ENiagaraPreviewGridResetMode : uint8_t {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class EPopcornFXParticleFieldType : uint8_t {
	Float = 0,
	Float2 = 1,
	Float3 = 2,
	Float4 = 3,
	Int = 4,
	Int2 = 5,
	Int3 = 6,
	Int4 = 7,
	EPopcornFXParticleFieldType_MAX = 8,
};

enum class EWindowTitleBarMode : uint8_t {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class EAudioFaderCurve : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5,
};

enum class EModulationRouting : uint8_t {
	Disable = 0,
	Inherit = 1,
	Override = 2,
	EModulationRouting_MAX = 3,
};

enum class ESegmentFilterComparison : uint8_t {
	pfenum_GreaterThan = 0,
	pfenum_LessThan = 1,
	pfenum_EqualTo = 2,
	pfenum_NotEqualTo = 3,
	pfenum_GreaterThanOrEqual = 4,
	pfenum_LessThanOrEqual = 5,
	pfenum_Exists = 6,
	pfenum_Contains = 7,
	pfenum_NotContains = 8,
	pfenum_MAX = 9,
};

enum class EScoreType : uint8_t {
	SCORE_None = 0,
	SCORE_Assist = 1,
	SCORE_Bonus_Bounty = 2,
	SCORE_Hit = 3,
	SCORE_Bonus_Flamethrower = 4,
	SCORE_Bonus_Hunter = 5,
	SCORE_ShieldBreak = 6,
	SCORE_Frag = 7,
	SCORE_Dodge = 8,
	SCORE_Extinguish = 9,
	SCORE_Bounty = 10,
	SCORE_Lure = 11,
	SCORE_Bonus_Overheal = 12,
	SCORE_Bonus_NearDeath = 13,
	SCORE_Win = 14,
	SCORE_Bonus_Comeback = 15,
	SCORE_Bonus_Mine_Hit = 16,
	SCORE_Bonus_Mine_Kill = 17,
	SCORE_Bonus_Blast_Wall_Kill = 18,
	SCORE_LTS_Emergency = 19,
	SCORE_LTS_Mount = 20,
	SCORE_CTF_Flag = 21,
	SCORE_CTF_Gate = 22,
	SCORE_ChieftainDash = 23,
	SCORE_RavagerRush = 24,
	SCORE_Smoked = 25,
	SCORE_MineSet = 26,
	SCORE_KillStreak_2 = 27,
	SCORE_KillStreak_3 = 28,
	SCORE_KillStreak_4 = 29,
	SCORE_Track = 30,
	SCORE_Invisibility = 31,
	SCORE_Bonus_Blast_Kill = 32,
	SCORE_Bonus_Spear_Kill = 33,
	SCORE_Bonus_Invis_Kill = 34,
	SCORE_Bonus_Track_Kill = 35,
	SCORE_Bonus_Smoke_Kill = 36,
	SCORE_Bonus_LowHealth_Kill = 37,
	SCORE_Bonus_Dodge_Invis = 38,
	SCORE_Bonus_Dash_Save = 39,
	SCORE_Bonus_Blast_Hit = 40,
	SCORE_ShieldPickup = 41,
	SCORE_Bonus_Berserk_Kill = 42,
	SCORE_BerserkCollect = 43,
	SCORE_SpearCollect = 44,
	SCORE_DestroyedMine = 45,
	SCORE_TreasureBanked = 46,
	SCORE_GoldTaken = 47,
	SCORE_GoldTaken_Min = 48,
	SCORE_GoldTaken_Mid = 49,
	SCORE_GoldTaken_Max = 50,
	SCORE_JewelTaken = 51,
	SCORE_ArtifactTaken = 52,
	SCORE_ArtifactHeld = 53,
	SCORE_ChargeTaken = 54,
	SCORE_Heist = 55,
	SCORE_TreasureDragonKill = 56,
	SCORE_BossKill = 57,
	SCORE_Bonus_Decisive = 58,
	SCORE_Bonus_Wealthy = 59,
	SCORE_Bonus_Hunted = 60,
	SCORE_RageUsed = 61,
	SCORE_WindBlessing = 62,
	SCORE_HealthPack = 63,
	LAST_DONT_USE = 64,
	EScoreType_MAX = 65,
};

enum class EWeaponEvent : uint8_t {
	WE_None = 0,
	WE_ShieldImpact = 1,
	WE_PawnImpact = 2,
	WE_LockableImpact = 3,
	WE_WallImpact = 4,
	WE_Disabled = 5,
	WE_Triggered = 6,
	WE_TimeLimit = 7,
	LAST_DONT_USE = 8,
	EWeaponEvent_MAX = 9,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class EPopcornFXConfigPreferedBillboarding : uint8_t {
	MaxCPU = 0,
	Auto = 1,
	MaxGPU = 2,
	EPopcornFXConfigPreferedBillboarding_MAX = 3,
};

enum class EARServiceInstallRequestResult : uint8_t {
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4,
};

enum class EEndMatchSummaryRewardType : uint8_t {
	None = 0,
	XP = 1,
	Currency = 2,
	MAX = 3,
};

enum class EAkPanningRule : uint8_t {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2,
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

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
};

enum class EPlayerMode : uint8_t {
	MODE_Normal = 0,
	MODE_Berserk = 1,
	MODE_MAX = 2,
};

enum class EMatrixColumns : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4,
};

enum class EMockedNotificationType : uint8_t {
	Tutorials = 0,
	Shop = 1,
	Profile = 2,
	Friends = 3,
	Groups = 4,
	GroupsWithSmallButton = 5,
	EMockedNotificationType_MAX = 6,
};

enum class ESubmixSendStage : uint8_t {
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class ELuminFrameTimingHint : uint8_t {
	Unspecified = 0,
	Maximum = 1,
	FPS_61 = 2,
	FPS_121 = 3,
	ELuminFrameTimingHint_MAX = 4,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

enum class EGameStatus : uint8_t {
	None = 0,
	Lobby_Wait = 1,
	Lobby_Closing = 2,
	Lobby_Closed = 3,
	Launching_Game = 4,
	PreMatch = 5,
	WarmUp_LaunchRTC = 6,
	WaitForGameplayToStart = 7,
	Game_PawnsCreation = 8,
	Game_Play = 9,
	Game_Overtime = 10,
	Game_InterRoundPawnsCreation = 11,
	Game_SuddenDeath = 12,
	Game_MulticastGameResultScreen = 13,
	Game_DisplayingGameResultScreen = 14,
	Game_DisplayingGameResultScreen_ShowGameResult = 15,
	Game_DisplayingGameResultScreen_Podium = 16,
	Game_After_PlayersScoreBoard = 17,
	Game_After_EndMatchSummary = 18,
	Game_End = 19,
	EGameStatus_MAX = 20,
};

enum class ENiagaraDebugPlaybackMode : uint8_t {
	Play = 0,
	Loop = 1,
	Paused = 2,
	Step = 3,
	ENiagaraDebugPlaybackMode_MAX = 4,
};

enum class ERichCurveCompressionFormat : uint8_t {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_Weighted = 5,
	RCCF_MAX = 6,
};

enum class EPopcornFXAttributeSamplerComponentType : uint8_t {
	Shape = 0,
	SkinnedMesh = 1,
	Image = 2,
	Curve = 3,
	AnimTrack = 4,
	Turbulence = 5,
	Text = 6,
	EPopcornFXAttributeSamplerComponentType_MAX = 7,
};

enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class ECTChestRewardAnimEvent : uint8_t {
	Show = 0,
	Hide = 1,
	ECTChestRewardAnimEvent_MAX = 2,
};

enum class EGeometryComparisonType : uint8_t {
	None = 0,
	Size = 1,
	Position = 2,
	Scale = 3,
	All = 4,
	EGeometryComparisonType_MAX = 5,
};

enum class EPopcornFXEffectsProfilerSortMode : uint8_t {
	SimulationCost = 0,
	ParticleCount = 1,
	InstanceCount = 2,
	EPopcornFXEffectsProfilerSortMode_MAX = 3,
};

enum class EGameStateUIWidgetType : uint8_t {
	Root = 0,
	LoadingScreen = 1,
	Ready = 2,
	LobbyBoardHUD = 3,
	CharacClassSelection = 4,
	CharacGadgetSelection = 5,
	CharacTimerAndBoardSelection = 6,
	Portrait = 7,
	WarmUp = 8,
	IntroRTC = 9,
	StartScreen = 10,
	GameStateHUD = 11,
	FlyingHUD = 12,
	Allies = 13,
	IngameMenu = 14,
	ScoreBoardHUD = 15,
	SpectatorHUD = 16,
	PlayerCameraSpectator = 17,
	EndMatchSummaryRank = 18,
	EndMatchSummaryEgg = 19,
	EndMatchSummaryXPAndQuests = 20,
	GameEnd = 21,
	Transition = 22,
	GameResult = 23,
	ScoreHUD = 24,
	ScoreNumberHUD = 25,
	Podium = 26,
	SuddenDeathHUD = 27,
	SuddenDeathWait = 28,
	RescueWait = 29,
	LTSScoreHUD = 30,
	LTSPlayerHUD = 31,
	CaptureZone = 32,
	PreMatchScreen = 33,
	GameStateUIWidgetTypeCount = 34,
	EGameStateUIWidgetType_MAX = 35,
};

enum class EAdActivity : uint8_t {
	pfenum_Opened = 0,
	pfenum_Closed = 1,
	pfenum_Start = 2,
	pfenum_End = 3,
	pfenum_MAX = 4,
};

enum class ETemperatureMethod : uint8_t {
	TEMP_WhiteBalance = 0,
	TEMP_ColorTemperature = 1,
	TEMP_MAX = 2,
};

enum class ECTError : uint8_t {
	CTERROR_DEFAULT_UNKOWN = 0,
	CTERROR_CLOUD_UNKNOWN = 1,
	CTERROR_CLOUD_VCATALOG = 2,
	CTERROR_CLOUD_VSHOP = 3,
	CTERROR_CLOUD_PACKID = 4,
	CTERROR_CLOUD_PRICE = 5,
	CTERROR_CLOUD_NOTENOUGHMONEY = 6,
	CTERROR_CLOUD_TYPEMONEY = 7,
	CTERROR_CLOUD_ALREADYPURCHASE_ITEM = 8,
	CTERROR_CLOUD_OUTSTORE = 9,
	CTERROR_CLOUD_CREDENTIAL = 10,
	CTERROR_CLOUD_BADITEM = 11,
	CTERROR_CLOUD_PURCHASECANCEL = 12,
	CTERROR_CLOUD_COMMAND = 13,
	CTERROR_CLOUD_BACKENDBDD = 14,
	CTERROR_CLOUD_NOSESSION = 15,
	CTERROR_CLOUD_BADSESSION = 16,
	CTERROR_CLOUD_BADKEY = 17,
	CTERROR_CLOUD_LOCKKEY = 18,
	CTERROR_CLOUD_FRIENDID = 19,
	CTERROR_CLOUD_SQUADID = 20,
	CTERROR_CLOUD_NOTIFICATION = 21,
	CTERROR_CLOUD_SALREADY = 22,
	CTERROR_CLOUD_SCANCEL = 23,
	CTERROR_CLOUD_SFULL = 24,
	CTERROR_CLOUD_PRIOR_PENDING = 25,
	CTERROR_CLOUD_CENTURY_LOCK = 26,
	CTERROR_CLOUD_CENTURY_NEEDUPDATE = 27,
	CTERROR_CLOUD_LOCK_MATCHMAKE = 28,
	CTERROR_CLOUD_DLC_NOT_OWNED = 29,
	CTERROR_CLOUD_USERPROFILE = 30,
	CTERROR_CLOUD_SOCIAL_REQUEST_FAILED = 31,
	CTERROR_CLOUD_SOCIAL_SQUAD_DOES_NOT_EXIST = 32,
	CTERROR_CLOUD_SOCIAL_CENTURY_ID_NOT_FOUND = 33,
	CTERROR_CLOUD_GENERIC = 34,
	CTERROR_STORE_OBSOLETE = 35,
	CTERROR_STORE_PRICE_CHANGED = 36,
	CTERROR_STORE_PURCHASE_CANCELLED = 37,
	CTERROR_STORE_STEAMOVERLAY_INACTIVE = 38,
	CTERROR_STORE_PURCHASE_RESTRICTION = 39,
	CTERROR_STORE_ROLEDISCORDKEYERROR = 40,
	CTERROR_NETWORK_NOSTEAM = 41,
	CTERROR_NETWORK_DISCONNECTED = 42,
	CTERROR_XBOX_MULTIPLAYER_RESTRICTION = 43,
	CTERROR_PAK_CORRUPTED = 44,
	CTERROR_INVIT_FULLSQUAD = 45,
	CTERROR_INVIT_ALREADYINSQUAD = 46,
	CTERROR_INVIT_INVALIDREQUEST = 47,
	CTERROR_NETWORK_EOS = 48,
	CTERROR_MAX = 49,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8_t {
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class ENiagaraAgeUpdateMode : uint8_t {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3,
};

enum class EFireballCrosshairType : uint8_t {
	BE_Default = 0,
	BE_StrikerHunt = 1,
	BE_PhantomCloak = 2,
	BE_MAX = 3,
};

enum class ECTDailyContractState : uint8_t {
	Invalid = 0,
	NotStarted = 1,
	Completed = 2,
	InProgress = 3,
	Failed = 4,
	Count = 5,
	ECTDailyContractState_MAX = 6,
};

enum class ECTCollectionMapRegion : uint8_t {
	None = 0,
	Mountain = 1,
	Desert = 2,
	Coast_Temperate = 3,
	MAX = 4,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class EQuartzCommandQuantization : uint8_t {
	Bar = 0,
	Beat = 1,
	ThirtySecondNote = 2,
	SixteenthNote = 3,
	EighthNote = 4,
	QuarterNote = 5,
	HalfNote = 6,
	WholeNote = 7,
	DottedSixteenthNote = 8,
	DottedEighthNote = 9,
	DottedQuarterNote = 10,
	DottedHalfNote = 11,
	DottedWholeNote = 12,
	SixteenthNoteTriplet = 13,
	EighthNoteTriplet = 14,
	QuarterNoteTriplet = 15,
	HalfNoteTriplet = 16,
	Tick = 17,
	Count = 18,
	None = 19,
	EQuartzCommandQuantization_MAX = 20,
};

enum class EMusicalNoteName : uint8_t {
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	EMusicalNoteName_MAX = 12,
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

enum class ETextureMipLoadOptions : uint8_t {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3,
};

enum class ECustomizationType : uint8_t {
	None = 0,
	Title = 1,
	Class = 2,
	Texture = 3,
	ECustomizationType_MAX = 4,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class ESegmentCurrency : uint8_t {
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

enum class ENiagaraCullReaction : uint8_t {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4,
};

enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t {
	Full = 0,
	Half = 1,
	ENDISkelMesh_MAX = 2,
};

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
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

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class EPhaserLFOType : uint8_t {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	EPhaserLFOType_MAX = 8,
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

enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class EPropType : uint8_t {
	EPT_Sword = 0,
	EPT_Shield = 1,
	EPT_GreatSword = 2,
	EPT_Bow = 3,
	EPT_Spear = 4,
	EPT_Axe = 5,
	EPT_Shield_H01 = 6,
	EPT_Shield_H02 = 7,
	EPT_Shield_H03 = 8,
	EPT_Shield_H04 = 9,
	EPT_None = 10,
	EPT_MAX = 11,
};

enum class EOnlineSessionStatus : uint8_t {
	OSS_None = 0,
	OSS_Host_Cleaning = 1,
	OSS_Host_Create = 2,
	OSS_Host_Creating = 3,
	OSS_IsHost = 4,
	OSS_Client_Searching = 5,
	OSS_Client_Joining = 6,
	OSS_IsClient = 7,
	OSS_QP_Searching = 8,
	OSS_QP_Joining = 9,
	OSS_QP_AskForTravel = 10,
	OSS_QP_Creating = 11,
	OSS_QP_Create = 12,
	OSS_QP_SearchBetter = 13,
	OSS_QP_Reset = 14,
	OSS_Leave_KickClients = 15,
	OSS_Leaving = 16,
	OSS_LeaveDone = 17,
	OSS_MAX = 18,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

enum class EDashTargetType : uint8_t {
	TARGET_Ally = 0,
	TARGET_Enemy = 1,
	TARGET_MAX = 2,
};

enum class AkActionOnEventType : uint8_t {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5,
};

enum class ENiagaraTickBehavior : uint8_t {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
};

enum class ECTChestControllerLastPage : uint8_t {
	Undefined = 0,
	Home = 1,
	Detail = 2,
	ECTChestControllerLastPage_MAX = 3,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

enum class EBEDCollectibleType : uint8_t {
	BEDCT_undefine = 0,
	BEDCT_Shield = 1,
	BEDCT_PowerUp = 2,
	BEDCT_Spear = 3,
	BEDCT_TreasureJewel = 4,
	BEDCT_TreasureAntiBanking = 5,
	BEDCT_WindBless = 6,
	BEDCT_HealthPack = 7,
	DO_NOT_USE = 8,
	EBEDCollectibleType_MAX = 9,
};

enum class EGameStateUILayerType : uint8_t {
	GameSessionMenu = 0,
	InGameMenu = 1,
	GameStateUILayerTypeCount = 2,
	EGameStateUILayerType_MAX = 3,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EHDRCaptureGamut : uint8_t {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6,
};

enum class EBitmapHeaderVersion : uint8_t {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5,
};

enum class EAkCurveInterpolation : uint8_t {
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 9,
	Constant = 10,
	EAkCurveInterpolation_MAX = 11,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

enum class EAkMidiEventType : uint8_t {
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 1,
	AkMidiEventTypeNoteOn = 2,
	AkMidiEventTypeNoteAftertouch = 3,
	AkMidiEventTypeController = 4,
	AkMidiEventTypeProgramChange = 5,
	AkMidiEventTypeChannelAftertouch = 6,
	AkMidiEventTypePitchBend = 7,
	AkMidiEventTypeSysex = 8,
	AkMidiEventTypeEscape = 9,
	AkMidiEventTypeMeta = 10,
	EAkMidiEventType_MAX = 11,
};

enum class ECTQuestEventType : uint8_t {
	Start = 0,
	Load = 1,
	Upgrade = 2,
	Reset = 3,
	Won = 4,
	Lost = 5,
	Unload = 6,
	Remove = 7,
	Count = 8,
	ECTQuestEventType_MAX = 9,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
};

enum class ESegmentCountryCode : uint8_t {
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

enum class EGooglePADErrorCode : uint8_t {
	AssetPack_NO_ERROR = 0,
	AssetPack_APP_UNAVAILABLE = 1,
	AssetPack_UNAVAILABLE = 2,
	AssetPack_INVALID_REQUEST = 3,
	AssetPack_DOWNLOAD_NOT_FOUND = 4,
	AssetPack_API_NOT_AVAILABLE = 5,
	AssetPack_NETWORK_ERROR = 6,
	AssetPack_ACCESS_DENIED = 7,
	AssetPack_INSUFFICIENT_STORAGE = 8,
	AssetPack_PLAY_STORE_NOT_FOUND = 9,
	AssetPack_NETWORK_UNRESTRICTED = 10,
	AssetPack_INTERNAL_ERROR = 11,
	AssetPack_INITIALIZATION_NEEDED = 12,
	AssetPack_INITIALIZATION_FAILED = 13,
	AssetPack_MAX = 14,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class ETextureRenderTargetFormat : uint8_t {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11,
};

enum class EWallHitEnum : uint8_t {
	WH_None = 0,
	WH_Left = 1,
	WH_Right = 2,
	WH_Front = 3,
	WH_Below = 4,
	WH_Default = 5,
	WH_MAX = 6,
};

enum class EMaterialLayerLinkState : uint8_t {
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4,
};

enum class EMagicLeapLightEstimationCamera : uint8_t {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};

enum class EPWGameEventState : uint8_t {
	GES_NotInGame = 0,
	GES_Joined = 1,
	GES_Started = 2,
	GES_MAX = 3,
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

enum class ECancellationReason : uint8_t {
	pfenum_Requested = 0,
	pfenum_Internal = 1,
	pfenum_Timeout = 2,
	pfenum_MAX = 3,
};

enum class EPDGNodeState : uint8_t {
	None = 0,
	Dirtied = 1,
	Dirtying = 2,
	Cooking = 3,
	Cook_Complete = 4,
	Cook_Failed = 5,
	EPDGNodeState_MAX = 6,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

enum class ERoundType : uint8_t {
	ROUND_Full = 0,
	ROUND_WithoutGadget = 1,
	ROUND_WithoutAbility = 2,
	ROUND_Empty = 3,
	LAST_DONT_USE = 4,
	ERoundType_MAX = 5,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t {
	HRSRF_Always = 0,
	HRSRF_OnlyIfMissing = 1,
	HRSRF_Never = 2,
	HRSRF_MAX = 3,
};

enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t {
	NoFilter = 0,
	SimpleSmoothing = 1,
	PredictiveSmoothing = 2,
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 3,
	Unknown = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class EHoverAnimation : uint8_t {
	Zoom = 0,
	ZoomSmall = 1,
	EHoverAnimation_MAX = 2,
};

enum class ENiagaraInputNodeUsage : uint8_t {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6,
};

enum class EInputCaptureRequestType : uint8_t {
	Begin = 0,
	Ignore = 1,
	EInputCaptureRequestType_MAX = 2,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
};

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EMagicLeapHandTrackingGesture : uint8_t {
	Finger = 0,
	Fist = 1,
	Pinch = 2,
	Thumb = 3,
	L = 4,
	OpenHand = 5,
	OpenHandBack = 6,
	Ok = 7,
	C = 8,
	NoPose = 9,
	NoHand = 10,
	EMagicLeapHandTrackingGesture_MAX = 11,
};

enum class ELuminPrivilege : uint8_t {
	Invalid = 0,
	BatteryInfo = 1,
	CameraCapture = 2,
	ComputerVision = 3,
	WorldReconstruction = 4,
	InAppPurchase = 5,
	AudioCaptureMic = 6,
	DrmCertificates = 7,
	Occlusion = 8,
	LowLatencyLightwear = 9,
	Internet = 10,
	IdentityRead = 11,
	BackgroundDownload = 12,
	BackgroundUpload = 13,
	MediaDrm = 14,
	Media = 15,
	MediaMetadata = 16,
	PowerInfo = 17,
	LocalAreaNetwork = 18,
	VoiceInput = 19,
	Documents = 20,
	ConnectBackgroundMusicService = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead = 23,
	PwFoundObjRead = 24,
	NormalNotificationsUsage = 25,
	MusicService = 26,
	ControllerPose = 27,
	GesturesSubscribe = 28,
	GesturesConfig = 29,
	AddressBookRead = 30,
	AddressBookWrite = 31,
	AddressBookBasicAccess = 32,
	CoarseLocation = 33,
	FineLocation = 34,
	HandMesh = 35,
	WifiStatusRead = 36,
	SocialConnectionsInvitesAccess = 37,
	SocialConnectionsSelectAccess = 38,
	SecureBrowserWindow = 39,
	BluetoothAdapterExternalApp = 40,
	BluetoothAdapterUser = 41,
	BluetoothGattWrite = 42,
	ELuminPrivilege_MAX = 43,
};

enum class TransmitPolicy : uint8_t {
	No = 0,
	Yes = 1,
	TransmitPolicy_MAX = 2,
};

enum class EFFTSize : uint8_t {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	Max = 6,
};

enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class EDebugTypeEnum : uint8_t {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3,
};

enum class EARServicePermissionRequestResult : uint8_t {
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2,
};

enum class ENavigationController : uint8_t {
	ENAVC_KeyboardAndMouse = 0,
	ENAVC_GamePad = 1,
	ENAVC_MAX = 2,
};

enum class EMagicLeapARPinType : uint8_t {
	SingleUserSingleSession = 0,
	SingleUserMultiSession = 1,
	MultiUserMultiSession = 2,
	EMagicLeapARPinType_MAX = 3,
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

enum class EARFaceBlendShape : uint8_t {
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61,
};

enum class EPopcornFXAssetDependenciesAutoImport : uint8_t {
	Never = 0,
	Ask = 1,
	Always = 2,
	EPopcornFXAssetDependenciesAutoImport_MAX = 3,
};

enum class EMagicLeapMeshState : uint8_t {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4,
};

enum class EARAltitudeSource : uint8_t {
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4,
};

enum class EInAppPurchaseStatus : uint8_t {
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
};

enum class ECTWorkshopUpdatingType : uint8_t {
	Discrete = 0,
	Temporal = 1,
	ECTWorkshopUpdatingType_MAX = 2,
};

enum class EStatisticResetIntervalOption : uint8_t {
	pfenum_Never = 0,
	pfenum_Hour = 1,
	pfenum_Day = 2,
	pfenum_Week = 3,
	pfenum_Month = 4,
	pfenum_MAX = 5,
};

enum class EFanionType : uint8_t {
	None = 0,
	MyProfileFanion = 1,
	MyProfileFanion_Floor = 2,
	UserProfileFanion = 3,
	MAX = 4,
};

enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
};

enum class EMobileReflectionCompression : uint8_t {
	Default = 0,
	On = 1,
	Off = 2,
	EMobileReflectionCompression_MAX = 3,
};

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class EConditionals : uint8_t {
	pfenum_Any = 0,
	pfenum_True = 1,
	pfenum_False = 2,
	pfenum_MAX = 3,
};

enum class EDashOutcome : uint8_t {
	DASHOUT_None = 0,
	DASHOUT_Success = 1,
	DASHOUT_Success_Special = 2,
	DASHOUT_Fail_Collision = 3,
	DASHOUT_Fail_Time = 4,
	DASHOUT_Fail_Distance = 5,
	DASHOUT_Fail_External = 6,
	DASHOUT_Fail_Brake = 7,
	DASHOUT_Fail_TargetDot = 8,
	DASHOUT_Fail_TargetLost = 9,
	DASHOUT_Fail_ImminentCollision = 10,
	DASHOUT_MAX = 11,
};

enum class EWeightmapRTType : uint8_t {
	WeightmapRT_Scratch_RGBA = 0,
	WeightmapRT_Scratch1 = 1,
	WeightmapRT_Scratch2 = 2,
	WeightmapRT_Scratch3 = 3,
	WeightmapRT_Mip0 = 4,
	WeightmapRT_Mip1 = 5,
	WeightmapRT_Mip2 = 6,
	WeightmapRT_Mip3 = 7,
	WeightmapRT_Mip4 = 8,
	WeightmapRT_Mip5 = 9,
	WeightmapRT_Mip6 = 10,
	WeightmapRT_Mip7 = 11,
	WeightmapRT_Count = 12,
	WeightmapRT_MAX = 13,
};

enum class ECTTextureModifierTaskState : uint8_t {
	Idle = 0,
	Rendering = 1,
	Capture = 2,
	WaitCapture = 3,
	Compress = 4,
	WaitCompress = 5,
	Done = 6,
	Applied = 7,
	ECTTextureModifierTaskState_MAX = 8,
};

enum class EARTextureType : uint8_t {
	Unknown = 0,
	CameraImage = 1,
	CameraDepth = 2,
	EnvironmentCapture = 3,
	PersonSegmentationImage = 4,
	PersonSegmentationDepth = 5,
	SceneDepthMap = 6,
	SceneDepthConfidenceMap = 7,
	EARTextureType_MAX = 8,
};

enum class EAkHololensAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3,
};

enum class ECTBreadcrumbValidation : uint8_t {
	Undefined = 0,
	OnClick = 1,
	OnHover = 2,
	ECTBreadcrumbValidation_MAX = 3,
};

enum class ELeashHandConfiguration : uint8_t {
	LEASH_BOTH_HANDS = 0,
	LEASH_LEFT_HANDS = 1,
	LEASH_RIGHT_HANDS = 2,
	LEASH_DROPPED = 3,
	LEASH_MAX = 4,
};

enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3,
};

enum class ENiagaraSortMode : uint8_t {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5,
};

enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4,
};

enum class EHitImpactEnum : uint8_t {
	HITIMPACT_Invalid = 0,
	HITIMPACT_HorizontalSurface = 1,
	HITIMPACT_VerticalSurfaceOnLeft = 2,
	HITIMPACT_VerticalSurfaceOnRight = 3,
	HITIMPACT_MAX = 4,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
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

enum class SmoothType : uint8_t {
	SMOOTH_Exponential = 0,
	SMOOTH_Linear = 1,
	SMOOTH_MAX = 2,
};

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class ESendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3,
};

enum class EMagicLeapMeshVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4,
};

enum class EMagicLeapHeadTrackingError : uint8_t {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4,
};

enum class ERenownLevelType : uint8_t {
	RL_2 = 0,
	RL_3 = 1,
	RL_4 = 2,
	RL_5 = 3,
	RL_6 = 4,
	RL_7 = 5,
	RL_8 = 6,
	RL_9 = 7,
	RL_10 = 8,
	RL_11 = 9,
	LAST_DONT_USE = 10,
	ERenownLevelType_MAX = 11,
};

enum class EPopcornFXHeavyDebugMode : uint8_t {
	None = 0,
	ParticlePoints = 1,
	MediumsBBox = 2,
	PagesBBox = 3,
	EPopcornFXHeavyDebugMode_MAX = 4,
};

enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

enum class EGAResourceFlowType : uint8_t {
	undefined = 0,
	source = 1,
	sink = 2,
	EGAResourceFlowType_MAX = 3,
};

enum class EPWSocialNotif : uint8_t {
	Idle = 0,
	Active = 1,
	Lost = 2,
	Won = 3,
	Stop = 4,
	EPWSocialNotif_MAX = 5,
};

enum class ETickMode : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3,
};

enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
};

enum class EMobileMSAASampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4,
};

enum class EARObjectClassification : uint8_t {
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	HandMesh = 11,
	Door = 12,
	Window = 13,
	EARObjectClassification_MAX = 14,
};

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class EPopupButtonsStyle : uint8_t {
	POPBTN_YESNO = 0,
	POPBTN_CLOSE = 1,
	POPBTN_NONE = 2,
	POPBTN_MAX = 3,
};

enum class ECTFlagSpawnStatus : uint8_t {
	None = 0,
	AboutToSpawn = 1,
	OnSpawner = 2,
	Dropped = 3,
	ECTFlagSpawnStatus_MAX = 4,
};

enum class EQuestMode : uint8_t {
	QM_Daily = 0,
	QM_Weekly = 1,
	QM_Rookie = 2,
	QM_Event = 3,
	QM_EggToBaby = 4,
	QM_BabyToAdult = 5,
	QM_Count = 6,
	QM_Undefined = 7,
	QM_MAX = 8,
};

enum class ECTSavingType : uint8_t {
	Local = 0,
	SyncConfig = 1,
	Cloud = 2,
	ECTSavingType_MAX = 3,
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
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13,
};

enum class EDesiredImageFormat : uint8_t {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4,
};

enum class ECTCustoLogFlags : uint8_t {
	LogAsset = 0,
	LogModifier = 1,
	LogAll = 2,
	ECTCustoLogFlags_MAX = 3,
};

enum class ERedeemEventType : uint8_t {
	None = 0,
	SteamBeta = 1,
	SteamLaunch = 2,
	MSLaunch = 3,
	Contest = 4,
	ERedeemEventType_MAX = 5,
};

enum class ENiagaraPlatformSetState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4,
};

enum class EARGeoTrackingAccuracy : uint8_t {
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class ERecordingEditingState : uint8_t {
	RECORDING = 0,
	NOT_RECORDING = 1,
	FOCUSED = 2,
	CONFLICTING_FOCUSED = 3,
	CONFLICTING = 4,
	ERecordingEditingState_MAX = 5,
};

enum class ParticipantSpeakingUpdateRate : uint8_t {
	StateChange = 0,
	Never = 1,
	Update1Hz = 2,
	Update5Hz = 3,
	Update10Hz = 4,
	ParticipantSpeakingUpdateRate_MAX = 5,
};

enum class EHoudiniInputObjectType : uint8_t {
	Invalid = 0,
	Object = 1,
	StaticMesh = 2,
	SkeletalMesh = 3,
	SceneComponent = 4,
	StaticMeshComponent = 5,
	InstancedStaticMeshComponent = 6,
	SplineComponent = 7,
	HoudiniSplineComponent = 8,
	HoudiniAssetComponent = 9,
	Actor = 10,
	Landscape = 11,
	Brush = 12,
	CameraComponent = 13,
	DataTable = 14,
	HoudiniAssetActor = 15,
	FoliageType_InstancedStaticMesh = 16,
	EHoudiniInputObjectType_MAX = 17,
};

enum class ENiagaraRibbonUVEdgeMode : uint8_t {
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2,
};

enum class EForceBoolMode : uint8_t {
	NoForce = 0,
	ForceEnabled = 1,
	ForceDisabled = 2,
	EForceBoolMode_MAX = 3,
};

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
};

enum class EPWCloudPlatform : uint8_t {
	Unknown = 0,
	PC_Steam = 1,
	PC_MStore = 2,
	WinServer = 3,
	PS4 = 4,
	PS5 = 5,
	XOne = 6,
	XSX = 7,
	EpicGameStore = 8,
	IOS = 9,
	EPWCloudPlatform_MAX = 10,
};

enum class ENiagaraDebugHudVerbosity : uint8_t {
	None = 0,
	Basic = 1,
	Verbose = 2,
	ENiagaraDebugHudVerbosity_MAX = 3,
};

enum class ECameraStateBlendStatus : uint8_t {
	CSFADE_None = 0,
	CSFADE_IN = 1,
	CSFADE_OUT = 2,
	CSFADE_MAX = 3,
};

enum class EMagicLeapControllerTrackingMode : uint8_t {
	InputService = 0,
	CoordinateFrameUID = 1,
	EMagicLeapControllerTrackingMode_MAX = 2,
};

enum class ECTMainLayersPriority : uint8_t {
	None = 0,
	RootLayer = 1,
	MAX = 2,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EGameBuildStatus : uint8_t {
	pfenum_Available = 0,
	pfenum_Validating = 1,
	pfenum_InvalidBuildPackage = 2,
	pfenum_Processing = 3,
	pfenum_FailedToProcess = 4,
	pfenum_MAX = 5,
};

enum class ECameraShakeUpdateResultFlags : uint8_t {
	ApplyAsAbsolute = 0,
	SkipAutoScale = 1,
	SkipAutoPlaySpace = 2,
	Default = 3,
	ECameraShakeUpdateResultFlags_MAX = 4,
};

enum class EStatisticVersionArchivalStatus : uint8_t {
	pfenum_NotScheduled = 0,
	pfenum_Scheduled = 1,
	pfenum_Queued = 2,
	pfenum_InProgress = 3,
	pfenum_Complete = 4,
	pfenum_MAX = 5,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EMagicLeapControllerHapticIntensity : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EMagicLeapControllerHapticIntensity_MAX = 3,
};

enum class CloudStatus : uint8_t {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2,
};

enum class EMagicLeapEyeTrackingStatus : uint8_t {
	NotConnected = 0,
	Disabled = 1,
	UserNotPresent = 2,
	UserPresent = 3,
	UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5,
};

enum class EGameStateUITrackType : uint8_t {
	Flow = 0,
	EGameStateUITrackTypeCount = 1,
	EGameStateUITrackType_MAX = 2,
};

enum class ECTWorkshopEnemyType : uint8_t {
	Fireball = 0,
	Flamethrower = 1,
	Gadget = 2,
	Ability = 3,
	RageAbility = 4,
	FullKit = 5,
	LAST_DONT_USE = 6,
	ECTWorkshopEnemyType_MAX = 7,
};

enum class ECTTutorialVideo : uint8_t {
	Undefined = 0,
	TutorialNavigation = 1,
	TutorialFlight = 2,
	TutorialCollectibles = 3,
	TutorialGatesOfFire = 4,
	TutorialCarnage = 5,
	TutorialSkirmish = 6,
	TutorialTreasure = 7,
	LAST_DONT_USE = 8,
	Count = 9,
	ECTTutorialVideo_MAX = 10,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EQuestDifficulty : uint8_t {
	EQF_EASY = 0,
	EQF_MEDIUM = 1,
	EQF_HARD = 2,
	EQF_COUNT = 3,
	EQF_MAX = 4,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class EEndMatchSummaryRankWidgetState : uint8_t {
	None = 0,
	Progress = 1,
	EEndMatchSummaryRankWidgetState_MAX = 2,
};

enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class EEndMatchSummaryResult : uint8_t {
	None = 0,
	Loss = 1,
	Draw = 2,
	Win = 3,
	EEndMatchSummaryResult_MAX = 4,
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

enum class ECTNotificationDuration : uint8_t {
	ShortNotification = 0,
	RegularNotification = 1,
	LongNotification = 2,
	ECTNotificationDuration_MAX = 3,
};

enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

enum class FDataDrivenCVarType : uint8_t {
	CVarFloat = 0,
	CVarInt = 1,
	CVarBool = 2,
	FDataDrivenCVarType_MAX = 3,
};

enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
};

enum class EItemType : uint8_t {
	Booster = 0,
	Resource = 1,
	LAST_DONT_USE = 2,
	EItemType_MAX = 3,
};

enum class PurchaseType : uint8_t {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3,
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

enum class EBlueprintType : uint8_t {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6,
};

enum class EAkResult : uint8_t {
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 6,
	AudioFileHeaderTooLarge = 7,
	MaxReached = 8,
	InvalidID = 9,
	IDNotFound = 10,
	InvalidInstanceID = 11,
	NoMoreData = 12,
	InvalidStateGroup = 13,
	ChildAlreadyHasAParent = 14,
	InvalidLanguage = 15,
	CannotAddItseflAsAChild = 16,
	InvalidParameter = 17,
	ElementAlreadyInList = 18,
	PathNotFound = 19,
	PathNoVertices = 20,
	PathNotRunning = 21,
	PathNotPaused = 22,
	PathNodeAlreadyInList = 23,
	PathNodeNotInList = 24,
	DataNeeded = 25,
	NoDataNeeded = 26,
	DataReady = 27,
	NoDataReady = 28,
	InsufficientMemory = 29,
	Cancelled = 30,
	UnknownBankID = 31,
	BankReadError = 32,
	InvalidSwitchType = 33,
	FormatNotReady = 34,
	WrongBankVersion = 35,
	FileNotFound = 36,
	DeviceNotReady = 37,
	BankAlreadyLoaded = 38,
	RenderedFX = 39,
	ProcessNeeded = 40,
	ProcessDone = 41,
	MemManagerNotInitialized = 42,
	StreamMgrNotInitialized = 43,
	SSEInstructionsNotSupported = 44,
	Busy = 45,
	UnsupportedChannelConfig = 46,
	PluginMediaNotAvailable = 47,
	MustBeVirtualized = 48,
	CommandTooLarge = 49,
	RejectedByFilter = 50,
	InvalidCustomPlatformName = 51,
	DLLCannotLoad = 52,
	DLLPathNotFound = 53,
	NoJavaVM = 54,
	OpenSLError = 55,
	PluginNotRegistered = 56,
	DataAlignmentError = 57,
	EAkResult_MAX = 58,
};

enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

enum class EHoudiniCurveMethod : uint8_t {
	Invalid = 0,
	CVs = 1,
	Breakpoints = 2,
	Freehand = 3,
	EHoudiniCurveMethod_MAX = 4,
};

enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

enum class ECTTutorialInputAnimation : uint8_t {
	Click = 0,
	Hold = 1,
	DoubleTapThenHold = 2,
	ECTTutorialInputAnimation_MAX = 3,
};

enum class EPopcornFXBillboardingLocation : uint8_t {
	CPU = 0,
	GPU = 1,
	EPopcornFXBillboardingLocation_MAX = 2,
};

enum class EInputCaptureSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 4,
	EInputCaptureSide_MAX = 5,
};

enum class FNiagaraCompileEventSeverity : uint8_t {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};

enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

enum class EGatesOrderEnum : uint8_t {
	GO_None = 0,
	GO_Normal = 1,
	GO_Reverse = 2,
	GO_MAX = 3,
};

enum class EToolContextCoordinateSystem : uint8_t {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class ELuminARTrackingState : uint8_t {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
};

enum class ECTBevelGaugeType : uint8_t {
	Life = 0,
	Burn = 1,
	Shield = 2,
	ExtraShield = 3,
	Empty = 4,
	Last = 5,
	Count = 6,
	ECTBevelGaugeType_MAX = 7,
};

enum class EHoudiniInstancerType : uint8_t {
	Invalid = 0,
	ObjectInstancer = 1,
	PackedPrimitive = 2,
	AttributeInstancer = 3,
	OldSchoolAttributeInstancer = 4,
	EHoudiniInstancerType_MAX = 5,
};

enum class ENiagaraSimTarget : uint8_t {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2,
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

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class EAkChannelConfigType : uint8_t {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3,
};

enum class ESocialContextMenuType : uint8_t {
	None = 0,
	FriendsInviteIntoTheGroup = 1,
	FriendsRemoveFriend = 2,
	FriendsJoinTheGroup = 3,
	FriendsAcceptInvitation = 4,
	FriendsDeclineInvitation = 5,
	FriendsInviteInYourFriendsList = 6,
	GroupRemoveMember = 7,
	GroupAddFriend = 8,
	GroupRemoveFriend = 9,
	GroupExitFromGroup = 10,
	ESocialContextMenuType_MAX = 11,
};

enum class EFieldOutputType : uint8_t {
	Field_Output_Vector = 0,
	Field_Output_Scalar = 1,
	Field_Output_Integer = 2,
	Field_Output_Max = 3,
};

enum class EPropertyValueCategory : uint8_t {
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 3,
	RelativeScale3D = 4,
	Visibility = 5,
	Material = 6,
	Color = 7,
	Option = 8,
	EPropertyValueCategory_MAX = 9,
};

enum class EFlamethrowerLightStateEnum : uint8_t {
	FlamethrowerLightState_On = 0,
	FlamethrowerLightState_Off = 1,
	FlamethrowerLightState_FadingIn = 2,
	FlamethrowerLightState_FadingOut = 3,
	FlamethrowerLightState_MAX = 4,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	Unused = 2,
	EMovieSceneObjectBindingSpace_MAX = 3,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class ECollectionScriptingShareType : uint8_t {
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3,
};

enum class ECTDragonOverviewType : uint8_t {
	None = 0,
	Egg = 1,
	Baby = 2,
	Adult = 3,
	LAST_DONT_USE = 4,
	ECTDragonOverviewType_MAX = 5,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
};

enum class EHandKeypoint : uint8_t {
	Palm = 0,
	Wrist = 1,
	ThumbMetacarpal = 2,
	ThumbProximal = 3,
	ThumbDistal = 4,
	ThumbTip = 5,
	IndexMetacarpal = 6,
	IndexProximal = 7,
	IndexIntermediate = 8,
	IndexDistal = 9,
	IndexTip = 10,
	MiddleMetacarpal = 11,
	MiddleProximal = 12,
	MiddleIntermediate = 13,
	MiddleDistal = 14,
	MiddleTip = 15,
	RingMetacarpal = 16,
	RingProximal = 17,
	RingIntermediate = 18,
	RingDistal = 19,
	RingTip = 20,
	LittleMetacarpal = 21,
	LittleProximal = 22,
	LittleIntermediate = 23,
	LittleDistal = 24,
	LittleTip = 25,
	EHandKeypoint_MAX = 26,
};

enum class ECTDeathCountCondition : uint8_t {
	AnyDeathCount = 0,
	FirstSpawnOnly = 1,
	RescuedOnly = 2,
	RespawnOnly = 3,
	ECTDeathCountCondition_MAX = 4,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
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

enum class ECTLiveEventType : uint8_t {
	XPBoost = 0,
	PlayEarn = 1,
	Missions = 2,
	Community = 3,
	Count = 4,
	Invalid = 5,
	ECTLiveEventType_MAX = 6,
};

enum class EEndMatchSummaryRankCell : uint8_t {
	NoneActiveLeft = 0,
	Active = 1,
	NoneActiveRight = 2,
	EEndMatchSummaryRankCell_MAX = 3,
};

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5,
};

enum class ENiagaraVariantMode : uint8_t {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class EEndMatchSummaryRowAppearingState : uint8_t {
	NONE = 0,
	APPEARING = 1,
	UPDATING_REWARDS = 2,
	MAX = 3,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class EOnlineSessionCommand : uint8_t {
	OSC_None = 0,
	OSC_Host = 1,
	OSC_Join = 2,
	OSC_Leave = 3,
	OSC_QuickPlay = 4,
	OSC_MAX = 5,
};

enum class ESilenceOrbState : uint8_t {
	ORBSTATE_Flying = 0,
	ORBSTATE_Homing = 1,
	ORBSTATE_Dying = 2,
	ORBSTATE_MAX = 3,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EUserInterfaceActionType : uint8_t {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6,
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

enum class EFormatArgumentType : uint8_t {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6,
};

enum class EMovieScenePositionType : uint8_t {
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class EMapPointState : uint8_t {
	None = 0,
	Normal = 1,
	Selected = 2,
	MAX = 3,
};

enum class ECTBotType : uint8_t {
	Default = 0,
	LobbyLeaver_BUG7719 = 1,
	ECTBotType_MAX = 2,
};

enum class EGameOutcome : uint8_t {
	None = 0,
	Victory = 1,
	Defeat = 2,
	Draw = 3,
	EGameOutcome_MAX = 4,
};

enum class EAppMsgType : uint8_t {
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8,
};

enum class PanningRule : uint8_t {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2,
};

enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

enum class EDataSortTypeEnum : uint8_t {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4,
};

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
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

enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

enum class EPropertyAccessCopyType : uint8_t {
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteByteToInt32 = 12,
	PromoteByteToInt64 = 13,
	PromoteByteToFloat = 14,
	PromoteInt32ToInt64 = 15,
	PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType_MAX = 17,
};

enum class EWheelSweepType : uint8_t {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

enum class EToolChangeTrackingMode : uint8_t {
	NoChangeTracking = 0,
	UndoToExit = 1,
	FullUndoRedo = 2,
	EToolChangeTrackingMode_MAX = 3,
};

enum class EDataValidationResult : uint8_t {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
};

enum class ENiagaraCollisionMode : uint8_t {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4,
};

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class EStatisticAggregationMethod : uint8_t {
	pfenum_Last = 0,
	pfenum_Min = 1,
	pfenum_Max = 2,
	pfenum_Sum = 3,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
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
	pfenum_Apple = 19,
	pfenum_NintendoSwitchAccount = 20,
	pfenum_MAX = 21,
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

enum class ESynth1PatchDestination : uint8_t {
	Osc1Gain = 0,
	Osc1Frequency = 1,
	Osc1Pulsewidth = 2,
	Osc2Gain = 3,
	Osc2Frequency = 4,
	Osc2Pulsewidth = 5,
	FilterFrequency = 6,
	FilterQ = 7,
	Gain = 8,
	Pan = 9,
	LFO1Frequency = 10,
	LFO1Gain = 11,
	LFO2Frequency = 12,
	LFO2Gain = 13,
	Count = 14,
	ESynth1PatchDestination_MAX = 15,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EHoudiniAssetState : uint8_t {
	NeedInstantiation = 0,
	NewHDA = 1,
	PreInstantiation = 2,
	Instantiating = 3,
	PreCook = 4,
	Cooking = 5,
	PostCook = 6,
	PreProcess = 7,
	Processing = 8,
	None = 9,
	NeedRebuild = 10,
	NeedDelete = 11,
	Deleting = 12,
	ProcessTemplate = 13,
	EHoudiniAssetState_MAX = 14,
};

enum class ESliderValueType : uint8_t {
	NoValue = 0,
	Percent = 1,
	Percent_Multiplied_To_101 = 2,
	Integer = 3,
	Float_Precision_2 = 4,
	ESliderValueType_MAX = 5,
};

enum class EFocusMode : uint8_t {
	Activated = 0,
	Deactivated = 1,
	EFocusMode_MAX = 2,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class EPlayerWidgetAttachType : uint8_t {
	Attach_None = 0,
	Attach_PlayerIndicator = 1,
	Attach_PawnDetection = 2,
	Attach_Both = 3,
	Attach_MAX = 4,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class ECTCameraToolSpectateState : uint8_t {
	None = 0,
	FreeRoam = 1,
	FreeLook = 2,
	ECTCameraToolSpectateState_MAX = 3,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EViewInteractionState : uint8_t {
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3,
};

enum class ENiagaraMipMapGeneration : uint8_t {
	Disabled = 0,
	PostStage = 1,
	PostSimulate = 2,
	ENiagaraMipMapGeneration_MAX = 3,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
};

enum class EGainParamMode : uint8_t {
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2,
};

enum class ESubmixSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3,
};

enum class EPopcornFXPlayStateKey : uint8_t {
	Start = 0,
	Stop = 1,
	Toggle = 2,
	EPopcornFXPlayStateKey_MAX = 3,
};

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class ELiveLinkSourceMode : uint8_t {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3,
};

enum class EAkAndroidAudioAPI : uint8_t {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

enum class EGAAdError : uint8_t {
	undefined = 0,
	unknown = 1,
	offline = 2,
	nofill = 3,
	internalerror = 4,
	invalidrequest = 5,
	unabletoprecache = 6,
	EGAAdError_MAX = 7,
};

enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

enum class EPopcornFXImageSamplingMode : uint8_t {
	Regular = 0,
	Density = 1,
	Both = 2,
	EPopcornFXImageSamplingMode_MAX = 3,
};

enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class ENiagaraDefaultMode : uint8_t {
	Value = 0,
	Binding = 1,
	Custom = 2,
	FailIfPreviouslyNotSet = 3,
	ENiagaraDefaultMode_MAX = 4,
};

enum class EVertexOffsetUsageType : uint8_t {
	None = 0,
	PreSkinningOffset = 1,
	PostSkinningOffset = 2,
	EVertexOffsetUsageType_MAX = 3,
};

enum class EHoudiniFolderParameterType : uint8_t {
	Invalid = 0,
	Collapsible = 1,
	Simple = 2,
	Tabs = 3,
	Radio = 4,
	Other = 5,
	EHoudiniFolderParameterType_MAX = 6,
};

enum class ERarity : uint8_t {
	Undef = 0,
	Common = 1,
	Rare = 2,
	Legendary = 3,
	Mythic = 4,
	ERarity_MAX = 5,
};

enum class ECTSavingLineStatus : uint8_t {
	Hidden = 0,
	Showing = 1,
	Shown = 2,
	DelayedHidding = 3,
	Hidding = 4,
	ECTSavingLineStatus_MAX = 5,
};

enum class EGenericAICheck : uint8_t {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7,
};

enum class EGameEventLogType : uint8_t {
	GAMELOGTYPE_None = 0,
	GAMELOGTYPE_Disconnected = 1,
	GAMELOGTYPE_PingLocation = 2,
	GAMELOGTYPE_PingZone = 3,
	GAMELOGTYPE_PingSupportMate = 4,
	GAMELOGTYPE_PingAttackPlayer = 5,
	GAMELOGTYPE_PingHelp = 6,
	GAMELOGTYPE_Pickup = 7,
	GAMELOGTYPE_LooseTreasure = 8,
	GAMELOGTYPE_WinTreasure = 9,
	GAMELOGTYPE_BankTreasure = 10,
	GAMELOGTYPE_MAX = 11,
};

enum class EItemProviderTrigger : uint8_t {
	TRIGGER_Frags = 0,
	TRIGGER_Time = 1,
	TRIGGER_AutoRespawn = 2,
	TRIGGER_External = 3,
	TRIGGER_MAX = 4,
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
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21,
};

enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class EResultTableNodeType : uint8_t {
	pfenum_ItemId = 0,
	pfenum_TableId = 1,
	pfenum_MAX = 2,
};

enum class ELockStatus : uint8_t {
	LS_None = 0,
	LS_InProgress = 1,
	LS_Locked = 2,
	LS_MAX = 3,
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

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class ECTLeaveReason : uint8_t {
	Reset = 0,
	BrutalLeave = 1,
	Crash = 2,
	MenuExit = 3,
	UnexpectedExit = 4,
	ReturnToStart = 5,
	Unknown = 6,
	ECTLeaveReason_MAX = 7,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EGadgetList : uint8_t {
	GADGET_None = 0,
	GADGET_Lure = 1,
	GADGET_Mine = 2,
	GADGET_BurstFire = 3,
	GADGET_Blast = 4,
	GADGET_COUNT = 5,
	GADGET_MAX = 6,
};

enum class EStickyMineState : uint8_t {
	Invalid = 0,
	Falling = 1,
	Failure = 2,
	Triggered = 3,
	Destroyed = 4,
	Attached = 5,
	Exploding = 6,
	EStickyMineState_MAX = 7,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
};

enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
};

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

enum class ECameraShakeDurationType : uint8_t {
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3,
};

enum class CTRRDVState : uint8_t {
	Wait = 0,
	UnLock = 1,
	CTRRDVState_MAX = 2,
};

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	MAX = 2,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EHoudiniPartType : uint8_t {
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Curve = 3,
	Volume = 4,
	EHoudiniPartType_MAX = 5,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

enum class ELuminARLineTraceChannel : uint8_t {
	None = 0,
	FeaturePoint = 1,
	InfinitePlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	FeaturePointWithSurfaceNormal = 5,
	ELuminARLineTraceChannel_MAX = 6,
};

enum class EArmamentType : uint8_t {
	None = 0,
	Fireball = 1,
	Fireflame = 2,
	Gadget = 3,
	ClassPower = 4,
	Count = 5,
	EArmamentType_MAX = 6,
};

enum class ESynthLFOPatchType : uint8_t {
	PatchToNone = 0,
	PatchToGain = 1,
	PatchToOscFreq = 2,
	PatchToFilterFreq = 3,
	PatchToFilterQ = 4,
	PatchToOscPulseWidth = 5,
	PatchToOscPan = 6,
	PatchLFO1ToLFO2Frequency = 7,
	PatchLFO1ToLFO2Gain = 8,
	Count = 9,
	ESynthLFOPatchType_MAX = 10,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class EMagicLeapHeadTrackingMode : uint8_t {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3,
};

enum class ENiagaraMeshLockedAxisSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class EMultiBlockType : uint8_t {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	Separator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	Widget = 8,
	EMultiBlockType_MAX = 9,
};

enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4,
};

enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class ESubmixEffectDynamicsKeySource : uint8_t {
	Default = 0,
	AudioBus = 1,
	Submix = 2,
	Count = 3,
	ESubmixEffectDynamicsKeySource_MAX = 4,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EAkCallbackType : uint8_t {
	EndOfEvent = 0,
	Marker = 1,
	Duration = 2,
	Starvation = 3,
	MusicPlayStarted = 4,
	MusicSyncBeat = 5,
	MusicSyncBar = 6,
	MusicSyncEntry = 7,
	MusicSyncExit = 8,
	MusicSyncGrid = 9,
	MusicSyncUserCue = 10,
	MusicSyncPoint = 11,
	MIDIEvent = 12,
	EAkCallbackType_MAX = 13,
};

enum class ESegmentPushNotificationDevicePlatform : uint8_t {
	pfenum_ApplePushNotificationService = 0,
	pfenum_GoogleCloudMessaging = 1,
	pfenum_MAX = 2,
};

enum class EStruckImpactEnum : uint8_t {
	STRUCKIMPACT_Invalid = 0,
	STRUCKIMPACT_Front = 1,
	STRUCKIMPACT_Left = 2,
	STRUCKIMPACT_Right = 3,
	STRUCKIMPACT_Back = 4,
	STRUCKIMPACT_Up = 5,
	STRUCKIMPACT_Down = 6,
	STRUCKIMPACT_MAX = 7,
};

enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
};

enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3,
};

enum class EPWFriendCommand : uint8_t {
	Invite = 0,
	Accept = 1,
	Revoke = 2,
	CancelInvite = 3,
	EPWFriendCommand_MAX = 4,
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

enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EAkAudioSessionCategoryOptions : uint8_t {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
};

enum class EMediaPlayerTrack : uint8_t {
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7,
};

enum class ECTRewardReveal : uint8_t {
	Undefined = 0,
	SpecificBlueprint = 1,
	Specific = 2,
	Mystery = 3,
	RewardRevealCount = 4,
	ECTRewardReveal_MAX = 5,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

enum class ENiagaraIterationSource : uint8_t {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2,
};

enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

enum class EXRSystemFlags : uint8_t {
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 3,
	SupportsHandTracking = 4,
	EXRSystemFlags_MAX = 5,
};

enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
};

enum class EDashState : uint8_t {
	DASH_None = 0,
	DASH_WaitingForCondition = 1,
	DASH_Preparing = 2,
	DASH_Dashing = 3,
	DASH_After = 4,
	DASH_AfterNeedBrake = 5,
	DASH_MAX = 6,
};

enum class EEasingFuncType : uint8_t {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15,
};

enum class EDamageResult : uint8_t {
	DR_NoDamage = 0,
	DR_DidDamage = 1,
	DR_DidDamageShield = 2,
	DR_DidBreakShield = 3,
	DR_DidKill = 4,
	DR_MAX = 5,
};

enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
};

enum class ETimedDataInputEvaluationType : uint8_t {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

enum class ELocationFilteringModeEnum : uint8_t {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_MAX = 7,
};

enum class EMobilePixelProjectedReflectionQuality : uint8_t {
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4,
};

enum class EMagicLeapControllerLEDPattern : uint8_t {
	None = 0,
	Clock01 = 1,
	Clock02 = 2,
	Clock03 = 3,
	Clock04 = 4,
	Clock05 = 5,
	Clock06 = 6,
	Clock07 = 7,
	Clock08 = 8,
	Clock09 = 9,
	Clock10 = 10,
	Clock11 = 11,
	Clock12 = 12,
	Clock01_07 = 13,
	Clock02_08 = 14,
	Clock03_09 = 15,
	Clock04_11 = 16,
	Clock05_12 = 17,
	Clock06_13 = 18,
	EMagicLeapControllerLEDPattern_MAX = 19,
};

enum class EForceTreasureEvent : uint8_t {
	Bomb = 0,
	Jewel = 1,
	Anti = 2,
	ExceptionalDragon = 3,
	AllExceptionalDragons = 4,
	EForceTreasureEvent_MAX = 5,
};

enum class ENiagaraSystemInstanceState : uint8_t {
	None = 0,
	PendingSpawn = 1,
	PendingSpawnPaused = 2,
	Spawning = 3,
	Running = 4,
	Paused = 5,
	Num = 6,
	ENiagaraSystemInstanceState_MAX = 7,
};

enum class ECTTransitionConsumableEvent : uint8_t {
	Undefined = 0,
	MainMapLoaded = 1,
	LobbyLoaded = 2,
	Count = 3,
	ECTTransitionConsumableEvent_MAX = 4,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
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

enum class ESkinCacheDefaultBehavior : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2,
};

enum class ECTMiscellanousShopSection : uint8_t {
	Undefined = 0,
	XPBoosters = 1,
	SteelBoosters = 2,
	Count = 3,
	ECTMiscellanousShopSection_MAX = 4,
};

enum class EToolMessageLevel : uint8_t {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5,
};

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

enum class EAlphaChannelMode : uint8_t {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3,
};

enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class ENiagaraPlatformSelectionState : uint8_t {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
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

enum class EModeIconType : uint8_t {
	FixedBrushIcon = 0,
	MatchTypeIcon = 1,
	NoIcon = 2,
	EModeIconType_MAX = 3,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class ERenownType : uint8_t {
	RENOWN_T0 = 0,
	RENOWN_T1 = 1,
	RENOWN_T2 = 2,
	RENOWN_T3 = 3,
	RENOWN_T4 = 4,
	RENOWN_T5 = 5,
	RENOWN_T6 = 6,
	RENOWN_T7 = 7,
	RENOWN_T8 = 8,
	RENOWN_T9 = 9,
	RENOWN_T10 = 10,
	LAST_DONT_USE = 11,
	ERenownType_MAX = 12,
};

enum class EVectorVMOperandLocation : uint8_t {
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class EBitmapCSType : uint8_t {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5,
};

enum class ECTItemDataTableType : uint8_t {
	Undefined = 0,
	HeroCusto = 1,
	DragonCusto = 2,
	CharacClass = 3,
	Booster = 4,
	Resource = 5,
	PlayerTitle = 6,
	TagLine = 7,
	PlayerProfileWallPaper = 8,
	PlayerProfileIcon = 9,
	Fanion = 10,
	RoleDiscord = 11,
	PackGiftKey = 12,
	Egg = 13,
	LockPurchase = 14,
	LAST_DONT_USE = 15,
	ECTItemDataTableType_MAX = 16,
};

enum class EInputDevices : uint8_t {
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 3,
	OculusTouch = 4,
	HTCViveWands = 5,
	AnySpatialDevice = 6,
	TabletFingers = 7,
	EInputDevices_MAX = 8,
};

enum class ECTQuestGameMode : uint8_t {
	Undefined = 0,
	TDM = 1,
	LTS = 2,
	CTF = 3,
	Treasure = 4,
	Rookie = 5,
	Skirmish = 6,
	FFA = 7,
	Count = 8,
	ECTQuestGameMode_MAX = 9,
};

enum class EAkCommSystem : uint8_t {
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2,
};

enum class EEnergySphereState : uint8_t {
	ESS_None = 0,
	ESS_Moving = 1,
	ESS_SuccessDestroying = 2,
	ESS_Fail = 3,
	ESS_MAX = 4,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class ECurveDynamicInterpolator : uint8_t {
	Linear = 0,
	Spline = 1,
	ECurveDynamicInterpolator_MAX = 2,
};

enum class ECTNotificationType : uint8_t {
	Undefined = 0,
	EventItemReward = 1,
	MAX = 2,
};

enum class EFixedFoveationLevels : uint8_t {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EFixedFoveationLevels_MAX = 4,
};

enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
};

enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5,
};

enum class ECameraShakeAttenuation : uint8_t {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EPWMemberStatus : uint8_t {
	WaitInvit = 0,
	InSquad = 1,
	Unknwon = 2,
	EPWMemberStatus_MAX = 3,
};

enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	AdditiveFromBase = 4,
	EMovieSceneBlendType_MAX = 5,
};

enum class EPopcornFXLocalizedPagesMode : uint8_t {
	Disable = 0,
	EnableDefaultsToOff = 1,
	EnableDefaultsToOn = 2,
	EPopcornFXLocalizedPagesMode_MAX = 3,
};

enum class EBloomMethod : uint8_t {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2,
};

enum class EActionHUDState : uint8_t {
	HS_NoAmmo = 0,
	HS_Disabled = 1,
	HS_Enabled = 2,
	HS_Highlighted = 3,
	HS_Hidden = 4,
	HS_Locked = 5,
	HS_MAX = 6,
};

enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class EStereoDelayFiltertype : uint8_t {
	Lowpass = 0,
	Highpass = 1,
	Bandpass = 2,
	Notch = 3,
	Count = 4,
	EStereoDelayFiltertype_MAX = 5,
};

enum class ECTPlayerRespawnDebug : uint8_t {
	Unset = 0,
	PlayerRespawn = 1,
	PermaDeath = 2,
	ECTPlayerRespawnDebug_MAX = 3,
};

enum class EActionDeniedReason : uint8_t {
	ACTDENIED_None = 0,
	ACTDENIED_Tunnel = 1,
	ACTDENIED_Spear = 2,
	ACTDENIED_Flag = 3,
	ACTDENIED_Artifact = 4,
	ACTDENIED_Jewel = 5,
	ACTDENIED_Bomb = 6,
	ACTDENIED_WallClose = 7,
	ACTDENIED_RequireLock = 8,
	ACTDENIED_Silenced = 9,
	ACTDENIED_MAX = 10,
};

enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

enum class ELoadingFlag : uint8_t {
	Unloaded = 0,
	CharacLoaded = 1,
	BannerLoaded = 2,
	AllLoaded = 3,
	ELoadingFlag_MAX = 4,
};

enum class ECTFlagStatus : uint8_t {
	None = 0,
	AboutToSpawn = 1,
	OnSpawner = 2,
	Hold = 3,
	Dropped = 4,
	ECTFlagStatus_MAX = 5,
};

enum class EMarkerStateEnum : uint8_t {
	MarkerState_NotLocked = 0,
	MarkerState_Locked = 1,
	MarkerState_FlamethrowerLocked = 2,
	MarkerState_FlamethrowerOnly = 3,
	MarkerState_MAX = 4,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class EOsPlatform : uint8_t {
	pfenum_Windows = 0,
	pfenum_Linux = 1,
	pfenum_MAX = 2,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class EXRVisualType : uint8_t {
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

enum class ECTDisplaySetTarget : uint8_t {
	Undefined = 0,
	DragonTarget = 1,
	RiderTarget = 2,
	FanionTarget = 3,
	ECTDisplaySetTarget_MAX = 4,
};

enum class EPlayerDisplay : uint8_t {
	VE_Display = 0,
	VE_NoDisplay = 1,
	VE_DisplayOnly = 2,
	VE_MAX = 3,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

enum class EQuarztClockManagerType : uint8_t {
	AudioEngine = 0,
	QuartzSubsystem = 1,
	Count = 2,
	EQuarztClockManagerType_MAX = 3,
};

enum class ECTStateMachineMode : uint8_t {
	Enter = 0,
	Run = 1,
	Exit = 2,
	ECTStateMachineMode_MAX = 3,
};

enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
};

enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_PreBlended = 5,
	VTBlend_MAX = 6,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class EDamageType : uint8_t {
	DAMAGE_None = 0,
	DAMAGE_Instant = 1,
	DAMAGE_Tick = 2,
	DAMAGE_Radial = 3,
	DAMAGE_TickRadial = 4,
	DAMAGE_TickBurning = 5,
	DAMAGE_MAX = 6,
};

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class EARSessionType : uint8_t {
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	GeoTracking = 7,
	EARSessionType_MAX = 8,
};

enum class ELiveLinkCameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class ECTMultiswitchOptionType : uint8_t {
	OverallQualityLow = 0,
	OverallQualityMedium = 1,
	OverallQualityHigh = 2,
	OverallQualityUltra = 3,
	ECTMultiswitchOptionType_MAX = 4,
};

enum class EGameStateUITransitionType : uint8_t {
	Undefined = 0,
	LoadingScreenToCharacClass = 1,
	LobbyToWarmUp = 2,
	WarmUpToStartScreen = 3,
	IntroRTCToStartScreen = 4,
	LobbyToPortrait = 5,
	PortraitToWarmup = 6,
	InGameHUDToSpectatorView = 7,
	InGameHUDToStartScreen = 8,
	InGameHUDToCharacClass = 9,
	InjuredOrDeadToSpectatorView = 10,
	SpectatorViewToStartScreen = 11,
	StartScreenToGameResult = 12,
	StartScreenToInGameHUD = 13,
	GameResultToStartScreen = 14,
	GameResultToPreMatchScreen = 15,
	LobbyToPreMatchScreen = 16,
	WarmUpToPreMatchScreen = 17,
	WarmUpToIntroRTC = 18,
	GameResultToScoreBoard = 19,
	ScoreBoardToEndMatchSummary = 20,
	EndMatchSummaryToCharacClass = 21,
	GameResultToPodium = 22,
	PodiumToScoreBoard = 23,
	SpectatorToEndMatchSummary = 24,
	PodiumToWarmUp = 25,
	LAST_DONT_USE = 26,
	EGameStateUITransitionType_MAX = 27,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class EPlayerStatus : uint8_t {
	None = 0,
	Starting = 1,
	Loading = 2,
	Lobby_Wait = 3,
	Lobby_Ready = 4,
	Lobby_Exiting = 5,
	Portrait_Reveal = 6,
	ShowMainMap = 7,
	WarmUp_LaunchRTC = 8,
	WarmUp_EndRTC = 9,
	IntroRTC = 10,
	Gameplay_FlyingRTC = 11,
	PreMatch = 12,
	Gameplay_IdleStart = 13,
	Gameplay_Flying = 14,
	Gameplay_Ragdoll = 15,
	Gameplay_CreatingRemotePawns = 16,
	Gameplay_SpectatorView = 17,
	Gameplay_Injured = 18,
	Gameplay_Dead = 19,
	Gameplay_DisplayingGameResultScreen = 20,
	GameResult_ShowGameResult = 21,
	GameResult_WaitingForNewRound = 22,
	GameResult_Podium = 23,
	GameResult_Scoreboard = 24,
	GameResult_XP = 25,
	GameResult_Rewards = 26,
	GameResult_EarlyExit = 27,
	PlayerStatus_Count = 28,
	EarlyLeaver = 29,
	EPlayerStatus_MAX = 30,
};

enum class ENDISkeletalMesh_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3,
};

enum class ENavigationStatus : uint8_t {
	Default = 0,
	Selected = 1,
	Pressed = 2,
	Disabled = 3,
	ENavigationStatus_MAX = 4,
};

enum class SoundTypeEnum : uint8_t {
	MainVolume = 0,
	SoundFX = 1,
	Music = 2,
	InGameVoice = 3,
	ChatVoice = 4,
	ChatMicVoice = 5,
	UISound = 6,
	LAST_DONT_USE = 7,
	SoundTypeEnum_MAX = 8,
};

enum class ELockMode : uint8_t {
	LM_None = 0,
	LM_OneTarget = 1,
	LM_MultiTarget = 2,
	LM_MAX = 3,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class EARSessionConfigFlags : uint8_t {
	None = 0,
	GenerateMeshData = 1,
	RenderMeshDataInWireframe = 2,
	GenerateCollisionForMeshData = 3,
	GenerateNavMeshForMeshData = 4,
	UseMeshDataForOcclusion = 5,
	EARSessionConfigFlags_MAX = 6,
};

enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
};

enum class EInputMode : uint8_t {
	EINP_Mouse = 0,
	EINP_GamePad = 1,
	EINP_MAX = 2,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class EPopcornFXSkinnedTransforms : uint8_t {
	SkinnedComponentRelativeTr = 0,
	SkinnedComponentWorldTr = 1,
	AttrSamplerRelativeTr = 2,
	AttrSamplerWorldTr = 3,
	EPopcornFXSkinnedTransforms_MAX = 4,
};

enum class ETeleportType : uint8_t {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
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
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9,
};

enum class ESpectatorClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6,
};

enum class EPopcornFXAssetDepType : uint8_t {
	None = 0,
	Effect = 1,
	Texture = 2,
	TextureAtlas = 3,
	Font = 4,
	VectorField = 5,
	Mesh = 6,
	Video = 7,
	Sound = 8,
	SimCache = 9,
	File = 10,
	EPopcornFXAssetDepType_MAX = 11,
};

enum class EScriptExecutionMode : uint8_t {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3,
};

enum class ERTPCValueType : uint8_t {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5,
};

enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

enum class ECameraState : uint8_t {
	CAMSTATE_Invalid = 0,
	CAMSTATE_Default = 1,
	CAMSTATE_Brake = 2,
	CAMSTATE_Flamethrower = 3,
	CAMSTATE_Dive = 4,
	CAMSTATE_RightStick = 5,
	CAMSTATE_UpStruggleState = 6,
	CAMSTATE_HitCollision = 7,
	CAMSTATE_Spear = 8,
	CAMSTATE_ChieftainDashing = 9,
	CAMSTATE_Collision = 10,
	CAMSTATE_LookBehind = 11,
	CAMSTATE_RavagerRush = 12,
	CAMSTATE_MAX = 13,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class ECTExlusiveButtonSetup : uint8_t {
	Undefined = 0,
	Horizontal = 1,
	Vertical = 2,
	Square = 3,
	Count = 4,
	ECTExlusiveButtonSetup_MAX = 5,
};

enum class ECTPlayerEggState : uint8_t {
	Egg = 0,
	Baby = 1,
	Adult = 2,
	Count = 3,
	Undefined = 4,
	ECTPlayerEggState_MAX = 5,
};

enum class ECTRewardedAchievement : uint8_t {
	Undefined = 0,
	Quest = 1,
	Levelling = 2,
	ClosedBeta = 3,
	Event1 = 4,
	Event2 = 5,
	Count = 6,
	ECTRewardedAchievement_MAX = 7,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class EMunitionRefillState : uint8_t {
	Inherit = 0,
	TargetDiedSuddenly = 1,
	EMunitionRefillState_MAX = 2,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
};

enum class EMaxConcurrentResolutionRule : uint8_t {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8,
};

enum class EAuthTokenType : uint8_t {
	pfenum_Email = 0,
	pfenum_MAX = 1,
};

enum class EMovieSceneSequenceFlags : uint8_t {
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 3,
	EMovieSceneSequenceFlags_MAX = 4,
};

enum class EMagicLeapRaycastResultState : uint8_t {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4,
};

enum class EHealthGainType : uint8_t {
	HEALTHGAIN_Disabled = 0,
	HEALTHGAIN_Health = 1,
	HEALTHGAIN_Shield = 2,
	HEALTHGAIN_ChieftainShield = 3,
	HEALTHGAIN_BerserkShield = 4,
	HEALTHGAIN_MAX = 5,
};

enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
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
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11,
	ETouchIndex_MAX = 12,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class ESkyAtmosphereTransformMode : uint8_t {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3,
};

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

enum class EAxisOption : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class ENiagaraFunctionDebugState : uint8_t {
	NoDebug = 0,
	Basic = 1,
	ENiagaraFunctionDebugState_MAX = 2,
};

enum class EDragonDiscoverySource : uint8_t {
	EShop = 0,
	EDLC = 1,
	ECB2 = 2,
	EGameRTC = 3,
	EDragonDiscoverySource_MAX = 4,
};

enum class EBlastTrapState : uint8_t {
	BTS_Alive = 0,
	BTS_KilledByPlayer = 1,
	BTS_CollidedByPlayer = 2,
	BTS_MAX = 3,
};

enum class EScaleMode : uint8_t {
	ScaleNone = 0,
	TransformOffset = 1,
	ForceAndTorque = 2,
	EScaleMode_MAX = 3,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class EARTrackingQualityReason : uint8_t {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	InsufficientLight = 5,
	BadState = 6,
	EARTrackingQualityReason_MAX = 7,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class ERandomVelocityGenerationTypeEnum : uint8_t {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3,
};

enum class EOscillatorWaveform : uint8_t {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2,
};

enum class MineActionType : uint8_t {
	EndGame = 0,
	LifeEnd = 1,
	FailAnchor = 2,
	FailAnchorTime = 3,
	Trigger = 4,
	Explode = 5,
	MineActionType_MAX = 6,
};

enum class EWeightMapTargetCommon : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	AnimDriveDamping = 5,
	EWeightMapTargetCommon_MAX = 6,
};

enum class ENiagaraRibbonShapeMode : uint8_t {
	Plane = 0,
	MultiPlane = 1,
	Tube = 2,
	Custom = 3,
	ENiagaraRibbonShapeMode_MAX = 4,
};

enum class ENiagaraScriptGroup : uint8_t {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3,
};

enum class ETextTransformPolicy : uint8_t {
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3,
};

enum class EStandardToolContextMaterials : uint8_t {
	VertexColorMaterial = 0,
	EStandardToolContextMaterials_MAX = 1,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class EPropertyAccessChangeNotifyMode : uint8_t {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
};

enum class EBattleEventNetworkFlag : uint8_t {
	BE_Local = 0,
	BE_Server = 1,
	BE_Multicast = 2,
	BE_MAX = 3,
};

enum class ERuntimeVirtualTextureMaterialType : uint8_t {
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	BaseColor_Normal_Specular_Mask_YCoCg = 4,
	WorldHeight = 5,
	Count = 6,
	ERuntimeVirtualTextureMaterialType_MAX = 7,
};

enum class ECTShopPackageDataType : uint8_t {
	Undefined = 0,
	ExclusiveShopData = 1,
	CharacClassShopData = 2,
	MiscellanousShopData = 3,
	EggShopData = 4,
	DragonShopData = 5,
	ResourceShopData = 6,
	Count = 7,
	ECTShopPackageDataType_MAX = 8,
};

enum class EPopcornFXVectorFieldSamplingMode : uint8_t {
	Point = 0,
	Trilinear = 1,
	EPopcornFXVectorFieldSamplingMode_MAX = 2,
};

enum class EMovieScenePlayerStatus : uint8_t {
	Stopped = 0,
	Playing = 1,
	Scrubbing = 2,
	Jumping = 3,
	Stepping = 4,
	Paused = 5,
	MAX = 6,
};

enum class EPopcornFXColorChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EPopcornFXColorChannel_MAX = 4,
};

enum class EDataSourceTypeEnum : uint8_t {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3,
};

enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
};

enum class EGameStateMode : uint8_t {
	Enter = 0,
	Run = 1,
	Exit = 2,
	EGameStateMode_MAX = 3,
};

enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

enum class EMobileShadowQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileShadowQuality_MAX = 4,
};

enum class EMagicLeapPrivilege : uint8_t {
	Invalid = 0,
	BatteryInfo = 1,
	CameraCapture = 2,
	ComputerVision = 3,
	WorldReconstruction = 4,
	InAppPurchase = 5,
	AudioCaptureMic = 6,
	DrmCertificates = 7,
	Occlusion = 8,
	LowLatencyLightwear = 9,
	Internet = 10,
	IdentityRead = 11,
	BackgroundDownload = 12,
	BackgroundUpload = 13,
	MediaDrm = 14,
	Media = 15,
	MediaMetadata = 16,
	PowerInfo = 17,
	LocalAreaNetwork = 18,
	VoiceInput = 19,
	Documents = 20,
	ConnectBackgroundMusicService = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead = 23,
	PwFoundObjRead = 24,
	NormalNotificationsUsage = 25,
	MusicService = 26,
	ControllerPose = 27,
	GesturesSubscribe = 28,
	GesturesConfig = 29,
	AddressBookRead = 30,
	AddressBookWrite = 31,
	AddressBookBasicAccess = 32,
	CoarseLocation = 33,
	FineLocation = 34,
	HandMesh = 35,
	WifiStatusRead = 36,
	SocialConnectionsInvitesAccess = 37,
	SecureBrowserWindow = 38,
	EMagicLeapPrivilege_MAX = 39,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4,
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
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_MAX = 49,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

enum class ECurveBlendOption : uint8_t {
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7,
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

enum class TransmissionMode : uint8_t {
	None = 0,
	Single = 1,
	All = 2,
	TransmissionMode_MAX = 3,
};

enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
};

enum class ERendererStencilMask : uint8_t {
	ERSM_Default = 0,
	ERSM_256 = 1,
	ERSM_2 = 2,
	ERSM_3 = 3,
	ERSM_5 = 4,
	ERSM_9 = 5,
	ERSM_17 = 6,
	ERSM_33 = 7,
	ERSM_65 = 8,
	ERSM_129 = 9,
	ERSM_MAX = 10,
};

enum class ELightmapType : uint8_t {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3,
};

enum class ECTPlayMode : uint8_t {
	Undefined = 0,
	Simple = 1,
	Ranked = 2,
	Custom = 3,
	Rookie = 4,
	Arena = 5,
	Offline = 6,
	Event = 7,
	Count = 8,
	ECTPlayMode_MAX = 9,
};

enum class ECTPackageType : uint8_t {
	Undefined = 0,
	HeroItem = 1,
	HeroHelmet = 2,
	Helmet = 3,
	HeroShield = 4,
	Shield = 5,
	HeroCape = 6,
	Cape = 7,
	HeroWeapon = 8,
	Weapon = 9,
	HeroLower = 10,
	Lower = 11,
	HeroUpper = 12,
	Upper = 13,
	HeroArmor = 14,
	DragonClass = 15,
	DragonItem = 16,
	DragonCranium = 17,
	Cranium = 18,
	DragonTorso = 19,
	Torso = 20,
	DragonTail = 21,
	Tail = 22,
	DragonSaddle = 23,
	Saddle = 24,
	DragonArmor = 25,
	DragonEggs = 26,
	Eggs = 27,
	Egg = 28,
	EggRare = 29,
	EggEpic = 30,
	PlayerIcon = 31,
	Wallpaper = 32,
	Tagline = 33,
	PlayerTitle = 34,
	Flag = 35,
	XpBooster = 36,
	Resource = 37,
	ResourceSC = 38,
	ResourceHC = 39,
	XP = 40,
	Miscellanous = 41,
	MiscItem = 42,
	ArmorItem = 43,
	Count = 44,
	LAST_DONT_USE = 45,
	ECTPackageType_MAX = 46,
};

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class EAttribOwner : uint8_t {
	Invalid = 0,
	Vertex = 1,
	Point = 2,
	Prim = 3,
	Detail = 4,
	EAttribOwner_MAX = 5,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class ENiagaraExecutionState : uint8_t {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
};

enum class EFocusLostReason : uint8_t {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels_MAX = 5,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
};

enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t {
	Full = 0,
	Limited_24_9 = 1,
	Limited_23_10 = 2,
	ENDISkelMesh_MAX = 3,
};

enum class EMagicLeapControllerType : uint8_t {
	None = 0,
	Device = 1,
	MobileApp = 2,
	EMagicLeapControllerType_MAX = 3,
};

enum class EListItemAlignment : uint8_t {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7,
};

enum class ERTDrawingType : uint8_t {
	RTAtlas = 0,
	RTAtlasToNonAtlas = 1,
	RTNonAtlasToAtlas = 2,
	RTNonAtlas = 3,
	RTMips = 4,
	ERTDrawingType_MAX = 5,
};

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
};

enum class EMatchmakeStatus : uint8_t {
	pfenum_Complete = 0,
	pfenum_Waiting = 1,
	pfenum_GameNotFound = 2,
	pfenum_NoAvailableSlots = 3,
	pfenum_SessionClosed = 4,
	pfenum_MAX = 5,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class EPWNotifType : uint8_t {
	Message = 0,
	InvitSquad = 1,
	AcceptSquad = 2,
	ExitSquad = 3,
	JoinSquad = 4,
	InvitFriend = 5,
	AcceptFriend = 6,
	RevokedFriend = 7,
	LaunchSessionSquad = 8,
	JoinSquadAuto = 9,
	Cancel = 10,
	Unknow = 11,
	EPWNotifType_MAX = 12,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class ECTNotificationButtonAnimationType : uint8_t {
	None = 0,
	Appearing = 1,
	Disappearing = 2,
	MAX = 3,
};

enum class EPropertyAccessObjectType : uint8_t {
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4,
};

enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

enum class ESceneSnapQueryType : uint8_t {
	Position = 0,
	Rotation = 1,
	ESceneSnapQueryType_MAX = 2,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class ESlateDebuggingNavigationMethod : uint8_t {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
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

enum class EPWSquadAccess : uint8_t {
	Private = 0,
	Public = 1,
	EPWSquadAccess_MAX = 2,
};

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
};

enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EPWButtonShape : uint8_t {
	Vertical = 0,
	Square = 1,
	Horizontal = 2,
	EPWButtonShape_MAX = 3,
};

enum class EIdentifiedDeviceType : uint8_t {
	pfenum_Unknown = 0,
	pfenum_XboxOne = 1,
	pfenum_Scarlett = 2,
	pfenum_MAX = 3,
};

enum class ENDIExport_GPUAllocationMode : uint8_t {
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2,
};

enum class ECTDeepLinkingDestination : uint8_t {
	Invalid = 0,
	Friends = 1,
	Groups = 2,
	Hatching = 3,
	ECTDeepLinkingDestination_MAX = 4,
};

enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4,
};

enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

enum class EMagicLeapMeshType : uint8_t {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2,
};

enum class ECTDropDownOptionType : uint8_t {
	ColorBlindOptionsOff = 0,
	ColorBlindOptionsDeutenaropia = 1,
	ColorBlindOptionsProtanopia = 2,
	ColorBlindOptionsTritanopia = 3,
	DisplayModeWindowed = 4,
	DisplayModeWindowedFullscreen = 5,
	DisplayModeFullscreen = 6,
	AntialiasingLow = 7,
	AntialiasingMedium = 8,
	AntialiasingHigh = 9,
	AntialiasingEpic = 10,
	Tethered = 11,
	Raw = 12,
	AMDFSR_Off = 13,
	AMDFSR_Performance = 14,
	AMDFSR_Balanced = 15,
	AMDFSR_Quality = 16,
	AMDFSR_UltraQuality = 17,
	ECTDropDownOptionType_MAX = 18,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EFunctionInputType : uint8_t {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_MAX = 11,
};

enum class ENiagaraSpriteFacingMode : uint8_t {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class ENiagaraRendererMotionVectorSetting : uint8_t {
	AutoDetect = 0,
	Precise = 1,
	Approximate = 2,
	Disable = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4,
};

enum class EBigMessageFlag : uint8_t {
	BIGMESSAGE_Owner = 0,
	BIGMESSAGE_AllPlayers = 1,
	BIGMESSAGE_AllPlayers_SkipOwner = 2,
	BIGMESSAGE_OwnerTeam = 3,
	BIGMESSAGE_OwnerTeam_SkipOwner = 4,
	BIGMESSAGE_EnemyTeam = 5,
	BIGMESSAGE_MAX = 6,
};

enum class ECTCameraLayerType : uint8_t {
	CAMLAYER_World = 0,
	CAMLAYER_Player = 1,
	CAMLAYER_MAX = 2,
};

enum class ECTPortraitWidgetFrom : uint8_t {
	Undefined = 0,
	Portraits = 1,
	SpectatorCamera = 2,
	ECTPortraitWidgetFrom_MAX = 3,
};

enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
};

enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class ENaturalSoundFalloffMode : uint8_t {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class EARSpatialMeshUsageFlags : uint8_t {
	NotApplicable = 0,
	Visible = 1,
	Collision = 2,
	EARSpatialMeshUsageFlags_MAX = 3,
};

enum class EPlayerCountForGameMode : uint8_t {
	Team_3v3 = 0,
	Team_6v6 = 1,
	FreeForAll = 2,
	Hide = 3,
	EPlayerCountForGameMode_MAX = 4,
};

enum class ENiagaraStatEvaluationType : uint8_t {
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class ETouchType : uint8_t {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	ForceChanged = 3,
	FirstMove = 4,
	Ended = 5,
	NumTypes = 6,
	ETouchType_MAX = 7,
};

enum class FCTNewsStatus : uint8_t {
	ST_Loading = 0,
	ST_Complete = 1,
	ST_Error = 2,
	ST_Undefined = 3,
	ST_MAX = 4,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

enum class EMagicLeapIdentityError : uint8_t {
	Ok = 0,
	InvalidParam = 1,
	AllocFailed = 2,
	PrivilegeDenied = 3,
	FailedToConnectToLocalService = 4,
	FailedToConnectToCloudService = 5,
	CloudAuthentication = 6,
	InvalidInformationFromCloud = 7,
	NotLoggedIn = 8,
	ExpiredCredentials = 9,
	FailedToGetUserProfile = 10,
	Unauthorized = 11,
	CertificateError = 12,
	RejectedByCloud = 13,
	AlreadyLoggedIn = 14,
	ModifyIsNotSupported = 15,
	NetworkError = 16,
	UnspecifiedFailure = 17,
	EMagicLeapIdentityError_MAX = 18,
};

enum class ENavigationMode : uint8_t {
	ENAV_Mouse = 0,
	ENAV_GamePadOrKeyboard = 1,
	ENAV_MAX = 2,
};

enum class ECTLiveEventProgressSlotState : uint8_t {
	Default = 0,
	InProgress = 1,
	Completed = 2,
	MAX = 3,
};

enum class EPropertyAccessCopyBatch : uint8_t {
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
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

enum class ETextureLossyCompressionAmount : uint8_t {
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7,
};

enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

enum class ECTGemsShopSection : uint8_t {
	Undefined = 0,
	Default = 1,
	StarterPack = 2,
	Count = 3,
	ECTGemsShopSection_MAX = 4,
};

enum class ECTForceFeedbackId : uint8_t {
	Invalid = 0,
	DamagedEnemy = 1,
	Launch = 2,
	PowerBoost = 3,
	KilledSpear = 4,
	TookShield = 5,
	UseFlamethrower = 6,
	FlamethrowerHit = 7,
	ChieftainDashSuccess = 8,
	RavagerRushSuccess = 9,
	TakeGameModePickup = 10,
	PassGate = 11,
	TakeEmergency = 12,
	Revive = 13,
	HitHuntersMark = 14,
	BlastExplode = 15,
	FieryShieldExplode = 16,
	FieryShieldCharge = 17,
	RageTrigger = 18,
	RageUnlock = 19,
	Bank = 20,
	CollectGold = 21,
	ECTForceFeedbackId_MAX = 22,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EPinContainerType : uint8_t {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4,
};

enum class ESynthModEnvBiasPatch : uint8_t {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvBiasPatch_MAX = 9,
};

enum class ECTPriceType : uint8_t {
	Undefined = 0,
	OldEuro = 1,
	Euro = 2,
	OldGold = 3,
	Gold = 4,
	OldGem = 5,
	Gem = 6,
	Count = 7,
	ECTPriceType_MAX = 8,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
};

enum class EServerType : uint8_t {
	pfenum_Container = 0,
	pfenum_Process = 1,
	pfenum_MAX = 2,
};

enum class ELocationFilterValues : uint8_t {
	Shop = 0,
	Leveling = 1,
	Battlepass = 2,
	Events = 3,
	END = 4,
	ELocationFilterValues_MAX = 5,
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
	VMI_PathTracing = 24,
	VMI_RayTracingDebug = 25,
	VMI_Max = 26,
	VMI_Unknown = 27,
};

enum class ESourceBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2,
};

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4,
};

enum class EQuarztQuantizationReference : uint8_t {
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4,
};

enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

enum class ELuminComponentType : uint8_t {
	Universe = 0,
	Fullscreen = 1,
	SearchProvider = 2,
	MusicService = 3,
	Console = 4,
	SystemUI = 5,
	ELuminComponentType_MAX = 6,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class ETransitionType : uint8_t {
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7,
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

enum class EAkWinGDKAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWinGDKAudioAPI_MAX = 3,
};

enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class EXformParameter : uint8_t {
	TX = 0,
	TY = 1,
	TZ = 2,
	RX = 3,
	RY = 4,
	RZ = 5,
	SX = 6,
	SY = 7,
	SZ = 8,
	COUNT = 9,
	EXformParameter_MAX = 10,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	BottomOrRight = 3,
	EDescendantScrollDestination_MAX = 4,
};

enum class EReflectionFilterBits : uint8_t {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3,
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

enum class EReasonToPreventHide : uint8_t {
	Undefined = 0,
	Success = 1,
	Controls = 2,
	Graphics = 3,
	Sound = 4,
	Count = 5,
	EReasonToPreventHide_MAX = 6,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class EGameplayTagSourceType : uint8_t {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class EInertializationState : uint8_t {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3,
};

enum class EOptionAvailability : uint8_t {
	Everywhere = 0,
	ConsoleOnly = 1,
	ConsoleLowEndOnly = 2,
	ConsoleHighEndOnly = 3,
	MobileOnly = 4,
	DesktopOnly = 5,
	DesktopAndConsole = 6,
	MobileAndConsole = 7,
	DesktopAndMobile = 8,
	EOptionAvailability_MAX = 9,
};

enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t {
	None = 0,
	Bad = 1,
	Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EMagicLeapImageTargetOrientation : uint8_t {
	ForwardAxisAsNormal = 0,
	UpAxisAsNormal = 1,
	EMagicLeapImageTargetOrientation_MAX = 2,
};

enum class EOnFanionLoadResult : uint8_t {
	Success = 0,
	DBIsNotInitialized = 1,
	NoSuchFanionInDB = 2,
	StaticMeshForFanionIsNotFound = 3,
	MeshComponentOrModifierIsInvalid = 4,
	FanionIsNotPartOfFanionsManagerSubsystem = 5,
	ThereIsNoAnyFanionForThisType = 6,
	FanionActorIsNullptr = 7,
	EOnFanionLoadResult_MAX = 8,
};

enum class EPopupCategory : uint8_t {
	POP_System = 0,
	POP_Info = 1,
	POP_MAX = 2,
};

enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	InferFromWorldMode = 5,
	FNavigationSystemRunMode_MAX = 6,
};

enum class ECollectionDragonCellType : uint8_t {
	None = 0,
	Static = 1,
	Interactible = 2,
	MAX = 3,
};

enum class EAudioComponentPlayState : uint8_t {
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6,
};

enum class ESyncOption : uint8_t {
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EBattleEventEnum : uint8_t {
	BE_Empty = 0,
	BE_Frag = 1,
	BE_PostFrag = 2,
	BE_FragNPC = 3,
	BE_Connection = 4,
	BE_Disconnection = 5,
	BE_Hit = 6,
	BE_Damage = 7,
	BE_Dodge = 8,
	BE_Bounty = 9,
	BE_Lure = 10,
	BE_Extinguish = 11,
	BE_Win = 12,
	BE_DashEnd = 13,
	BE_RavagerRushHit = 14,
	BE_MineSet = 15,
	BE_KillStreak_2 = 16,
	BE_KillStreak_3 = 17,
	BE_KillStreak_4 = 18,
	BE_Track = 19,
	BE_Invisibility = 20,
	BE_BerserkCollect = 21,
	BE_WeaponUsed = 22,
	BE_BlastShockwave = 23,
	BE_Smoke = 24,
	BE_Smoked = 25,
	BE_SmokeEnemy = 26,
	BE_LockLostBySmoke = 27,
	BE_WarnHornShield = 28,
	BE_WarnHornHeal = 29,
	BE_BountyStep = 30,
	BE_UseRage = 31,
	BE_SourcePointCollect = 32,
	BE_AirColumnOverlaped = 33,
	BE_StartMegaBoost = 34,
	BE_StopMegaBoost = 35,
	BE_FullBoostRefill = 36,
	BE_FullBoostRefillRiver = 37,
	BE_StartToBeHunted = 38,
	BE_EndToBeHunted = 39,
	BE_RingBell = 40,
	BE_Whoosh = 41,
	BE_StartToHunt = 42,
	BE_StopToHunt = 43,
	BE_PickupItem = 44,
	BE_UseSpecialPower = 45,
	BE_UseGadget = 46,
	BE_IncreaseScore = 47,
	BE_ThunderMarkExplode = 48,
	BE_Nemesis = 49,
	BE_CTFGate = 50,
	BE_CTFFlag = 51,
	BE_TreasureLocalGoldChange = 52,
	BE_TreasureGoldBanked = 53,
	BE_TreasureAntiBankingPickup = 54,
	BE_TreasureAntiBankingHeld = 55,
	BE_TreasureChargePickup = 56,
	BE_TreasureLocalChargeExploded = 57,
	BE_TreasureJewelDropped = 58,
	BE_TreasureAntiBankingDropped = 59,
	BE_LocalAbilityPickupCollect = 60,
	BE_LTSEmergency = 61,
	BE_LTSMount = 62,
	BE_LTSDie = 63,
	LAST_DONT_USE = 64,
	EBattleEventEnum_MAX = 65,
};

enum class ENiagaraRendererSourceDataMode : uint8_t {
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class ENiagaraScalabilityUpdateFrequency : uint8_t {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ESaveGameStatus : uint8_t {
	Outdated = 0,
	Saving = 1,
	Loading = 2,
	UpToDate = 3,
	ESaveGameStatus_MAX = 4,
};

enum class EVectorVMBaseTypes : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4,
};

enum class EBodyPart : uint8_t {
	BP_Helmet = 0,
	BP_UpperBody = 1,
	BP_LowerBody = 2,
	BP_Hands = 3,
	BP_Accessory = 4,
	BP_Horns = 5,
	BP_Cape = 6,
	BP_Body = 7,
	BP_Head = 8,
	BP_Torso = 9,
	BP_Tail = 10,
	BP_Harness = 11,
	LAST_DONT_USE = 12,
	EBodyPart_MAX = 13,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class EAkWindowsAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3,
};

enum class EMouseConstantType : uint8_t {
	MCOT_NoConstant = 0,
	MCOT_LastInputConstant = 1,
	MCOT_ConstantRatio = 2,
	MCT_NUM = 3,
	EMouseConstantType_MAX = 4,
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

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class ENiagaraMeshFacingMode : uint8_t {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4,
};

enum class ELocationZToSpawnEnum : uint8_t {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class VerticalBoardBoxSpacer : uint8_t {
	UndefinedSpacer = 0,
	BottomSpacer = 1,
	TopSpacer = 2,
	VerticalBoardBoxSpacer_MAX = 3,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class EPopcornFXPayloadType : uint8_t {
	Bool = 0,
	Bool2 = 1,
	Bool3 = 2,
	Bool4 = 3,
	Float = 4,
	Float2 = 5,
	Float3 = 6,
	Float4 = 7,
	Int = 8,
	Int2 = 9,
	Int3 = 10,
	Int4 = 11,
	Quaternion = 12,
	Invalid = 13,
	EPopcornFXPayloadType_MAX = 14,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
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
	COND_Never = 14,
	COND_Max = 15,
};

enum class EDatasmithCADRetessellationRule : uint8_t {
	All = 0,
	SkipDeletedSurfaces = 1,
	EDatasmithCADRetessellationRule_MAX = 2,
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

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
};

enum class EAnimInterpolationType : uint8_t {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2,
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

enum class EPWCloudCurrency : uint8_t {
	USD = 0,
	EUR = 1,
	GBP = 2,
	ARS = 3,
	AUD = 4,
	BRL = 5,
	CAD = 6,
	CHF = 7,
	CNY = 8,
	HKD = 9,
	ILS = 10,
	IDR = 11,
	INR = 12,
	JPY = 13,
	KRW = 14,
	MXN = 15,
	MYR = 16,
	NOK = 17,
	NZD = 18,
	PHP = 19,
	PLN = 20,
	RUB = 21,
	SGD = 22,
	THB = 23,
	TWD = 24,
	EPWCloudCurrency_MAX = 25,
};

enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2,
};

enum class ESoundWaveLoadingBehavior : uint8_t {
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 5,
	ESoundWaveLoadingBehavior_MAX = 6,
};

enum class EProtocolType : uint8_t {
	pfenum_TCP = 0,
	pfenum_UDP = 1,
	pfenum_MAX = 2,
};

enum class EDatasmithImportLightmapMin : uint8_t {
	LIGHTMAP_17 = 0,
	LIGHTMAP_33 = 1,
	LIGHTMAP_65 = 2,
	LIGHTMAP_129 = 3,
	LIGHTMAP_257 = 4,
	LIGHTMAP_513 = 5,
	LIGHTMAP_MAX = 6,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class ECTLevelScrollCellState : uint8_t {
	Locked = 0,
	Unlocked = 1,
	Selected = 2,
	LAST_DONT_USE = 3,
	ECTLevelScrollCellState_MAX = 4,
};

enum class ECTSpectatorStat : uint8_t {
	Kill = 0,
	Assist = 1,
	Death = 2,
	Golds = 3,
	Flag = 4,
	ECTSpectatorStat_MAX = 5,
};

enum class EGooglePADCellularDataConfirmStatus : uint8_t {
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4,
};

enum class ETabMainMenuPCStatus : uint8_t {
	None = 0,
	MENUPCSTATUS_StartLoading = 1,
	MENUPCSTATUS_Login = 2,
	MENUPCSTATUS_Loading = 3,
	MENUPCSTATUS_PostLoading = 4,
	MENUPCSTATUS_Main = 5,
	MENUPCSTATUS_QuitRequested = 6,
	MENUPCSTATUS_ReturnToStart = 7,
	MENUPCSTATUS_Count = 8,
	ETabMainMenuPCStatus_MAX = 9,
};

enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class EDatasmithImportLightmapMax : uint8_t {
	LIGHTMAP_65 = 0,
	LIGHTMAP_129 = 1,
	LIGHTMAP_257 = 2,
	LIGHTMAP_513 = 3,
	LIGHTMAP_1025 = 4,
	LIGHTMAP_2049 = 5,
	LIGHTMAP_4097 = 6,
	LIGHTMAP_MAX = 7,
};

enum class ETrackerMessageType : uint8_t {
	TRACKER_None = 0,
	TRACKER_Hunter = 1,
	TRACKER_StrikerPredator = 2,
	TRACKER_ChieftainHealing = 3,
	TRACKER_RavagerRammed = 4,
	TRACKER_MAX = 5,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8_t {
	HRSST_InProcess = 0,
	HRSST_Socket = 1,
	HRSST_NamedPipe = 2,
	HRSST_None = 3,
	HRSST_MAX = 4,
};

enum class ECTBoosterItemType : uint8_t {
	Undefined = 0,
	XP = 1,
	Steel = 2,
	Count = 3,
	ECTBoosterItemType_MAX = 4,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
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
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17,
};

enum class EGooglePADStorageMethod : uint8_t {
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4,
};

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
};

enum class CTRSignalType : uint8_t {
	Undefined = 0,
	OneBeastSpawned = 1,
	ScoreUpdated = 2,
	Count = 3,
	CTRSignalType_MAX = 4,
};

enum class ECTTutorialHighlightType : uint8_t {
	None = 0,
	Default = 1,
	Abilities = 2,
	PlayerIndicator = 3,
	MAX = 4,
};

enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class ECaptureEnum : uint8_t {
	INVALID = 0,
	None = 1,
	Contested = 2,
	Capturing = 3,
	ECaptureEnum_MAX = 4,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
};

enum class EBattleTrapType : uint8_t {
	TT_None = 0,
	TT_Default = 1,
	TT_MAX = 2,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5,
};

enum class ECTCurveInterpolationType : uint8_t {
	Exponential = 0,
	ExponentialWithMaxSpeed = 1,
	Linear = 2,
	ECTCurveInterpolationType_MAX = 3,
};

enum class EMagicLeapImageTargetStatus : uint8_t {
	Tracked = 0,
	Unreliable = 1,
	NotTracked = 2,
	EMagicLeapImageTargetStatus_MAX = 3,
};

enum class ECTXPBoostSubType : uint8_t {
	Match = 0,
	Hatching = 1,
	Squad = 2,
	Invalid = 3,
	ECTXPBoostSubType_MAX = 4,
};

enum class ECTChestType : uint8_t {
	Quest = 0,
	Levelling = 1,
	HideLevel = 2,
	BetaPack = 3,
	Count = 4,
	Undefined = 5,
	ECTChestType_MAX = 6,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class ESkinCacheUsage : uint8_t {
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
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

enum class EScheduledTaskType : uint8_t {
	pfenum_CloudScript = 0,
	pfenum_ActionsOnPlayerSegment = 1,
	pfenum_CloudScriptAzureFunctions = 2,
	pfenum_InsightsScheduledScaling = 3,
	pfenum_MAX = 4,
};

enum class ENiagaraScriptContextStaticSwitch : uint8_t {
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class AkMeshType : uint8_t {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2,
};

enum class EPopcornFXAttributeSamplerType : uint8_t {
	None = 0,
	Shape = 1,
	Image = 2,
	Curve = 3,
	AnimTrack = 4,
	Turbulence = 5,
	Text = 6,
	EPopcornFXAttributeSamplerType_MAX = 7,
};

enum class EPopcornFXAttribSamplerShapeType : uint8_t {
	Box = 0,
	Sphere = 1,
	ComplexEllipsoid = 2,
	Cylinder = 3,
	Capsule = 4,
	Cone = 5,
	Mesh = 6,
	EPopcornFXAttribSamplerShapeType_MAX = 7,
};

enum class EParameterButtonState : uint8_t {
	None = 0,
	Pressed = 1,
	Focused = 2,
	Enabled = 3,
	Disabled = 4,
	MAX = 5,
};

enum class EClothingWindMethodNv : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2,
};

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EFieldVectorType : uint8_t {
	Vector_LinearForce = 0,
	Vector_LinearVelocity = 1,
	Vector_AngularVelocity = 2,
	Vector_AngularTorque = 3,
	Vector_PositionTarget = 4,
	Vector_TargetMax = 5,
	Vector_MAX = 6,
};

enum class EObjectStateTypeEnum : uint8_t {
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 5,
	Chaos_Max = 6,
};

enum class EUVOutput : uint8_t {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EQuatSwizzleAxisB : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	W = 3,
	MinusX = 4,
	MinusY = 5,
	MinusZ = 6,
	MinusW = 7,
	EQuatSwizzleAxisB_MAX = 8,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

