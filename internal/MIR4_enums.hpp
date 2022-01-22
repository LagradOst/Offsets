#pragma once

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

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
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

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class EItemGetWayNPCStore : uint8_t {
	NPCStoreNormal = 0,
	NPCStoreSpecial = 1,
	EItemGetWayNPCStore_MAX = 2,
};

enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};

enum class ECostMainType : uint8_t {
	TYPE_NONE = 0,
	TYPE_MONEY = 1,
	TYPE_TIME_TICKET = 2,
	TYPE_DUNGEON_TICKET = 3,
	TYPE_MAX = 4,
};

enum class ChanegeInfoReason : uint8_t {
	Sync = 0,
	AutoRecovery = 1,
	Buff = 2,
	Skill = 3,
	ChanegeInfoReason_MAX = 4,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class EBuffSocketType : uint8_t {
	NONE = 0,
	Root = 1,
	Buff_Mid = 2,
	Buff_Top = 3,
	EBuffSocketType_MAX = 4,
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

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class EGameOptionDefaultSettingType : uint8_t {
	Table = 0,
	Device = 1,
	EGameOptionDefaultSettingType_MAX = 2,
};

enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
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

enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2,
};

enum class ESoundMode : uint8_t {
	NONE = 0,
	SCENE = 1,
	OUT_GAME_CONETENT = 2,
	MAX = 3,
};

enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2,
};

enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class EItemGetWayMonster : uint8_t {
	NONE = 0,
	MonsterGrade12 = 1,
	MonsterGrade34 = 2,
	EItemGetWayMonster_MAX = 3,
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

enum class EOccupationAuctionReaction : uint8_t {
	NONE = 0,
	UPDATE_SIMPLEINFO = 1,
	UPDATE_GUILDINFO = 2,
	UPDATE_MINIMAP = 3,
	UPDATE_AUCTION_STATE = 4,
	UPDATE_BUTTON_STATE = 5,
	UPDATE_REMAIN_TIME = 6,
	UPDATE_MINIMUM_BID_AMOUNT = 7,
	UPDATE_BID_HISTORY = 8,
	UPDATE_GUILD_COST = 9,
	REQUEST_AUCTION_INFO = 10,
	UPDATE_INVITE_LIST = 11,
	UPDATE_BID_POPUP_BUTTON_STATE = 12,
	UPDATE_ALL = 13,
	RECV_CHANGE_AUCTION_STATUS = 14,
	RECV_AUCTION_INFO = 15,
	RECV_AUCTION_BIDDING = 16,
	OPEN_CONTENTS = 17,
	CLOSE_CONTENTS = 18,
	EOccupationAuctionReaction_MAX = 19,
};

enum class EBattlePassRewardGroup : uint8_t {
	eGroup_Normal = 0,
	eGroup_Preminum1 = 1,
	eGroup_Preminum2 = 2,
	eGroup_All = 3,
	eGroup_MAX = 4,
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

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

enum class BatteryStatus : uint8_t {
	UnknownStatus = 0,
	Charging = 1,
	Discharging = 2,
	NotCharging = 3,
	Full = 4,
	BatteryStatus_MAX = 5,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

enum class ECullDistanceVolumePresetType : uint8_t {
	NONE = 0,
	Preset0 = 1,
	Preset1 = 2,
	Preset2 = 3,
	Preset3 = 4,
	Preset4 = 5,
	Preset5 = 6,
	Preset6 = 7,
	Preset7 = 8,
	Preset8 = 9,
	Preset9 = 10,
	ECullDistanceVolumePresetType_MAX = 11,
};

enum class EItemGetWayStageType : uint8_t {
	None = 0,
	Normal = 1,
	MagicSquare = 2,
	Gather = 3,
	Mine = 4,
	CombatPower = 5,
	NormalAndCombatPower = 6,
	MineAndCombatPower = 7,
	EItemGetWayStageType_MAX = 8,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class ETableType : uint8_t {
	WIDGET_MASTER = 0,
	ACHIEVEMENT = 1,
	AIRWALK = 2,
	AREANAME = 3,
	AUTOFLIGHT_PATH = 4,
	BUFF = 5,
	BUFF_OVERLAPCALL = 6,
	BOSS_WORLD = 7,
	CAMERA_PRESET = 8,
	CHARACTER_MASTERY = 9,
	CHARACTER_MASTERY_SLOT = 10,
	CHARACTER_MASTERY_LEVEL_LIMIT = 11,
	CHARACTER_FORCE = 12,
	CHARACTER_FORCE_BLOOD = 13,
	CHARACTER_FORCE_LEVEL = 14,
	CHARACTER_EMOTE = 15,
	CLASS = 16,
	CLASS_CREATE = 17,
	COMBATPOINT = 18,
	CINEMATIC_DIALOGUE = 19,
	CHARACTER_GROW = 20,
	CONTENTS_ALARM = 21,
	CONTENTS_ADMIN = 22,
	CHARACTER_PARTS_DEFINES = 23,
	CONTENTS_OPEN = 24,
	COLOR_INDEX = 25,
	COSTUME = 26,
	COSTUME_PRESET = 27,
	COSTUME_PALETTE = 28,
	CLIENT_ERROR_STRING = 29,
	CLIENT_PRELOAD = 30,
	COMBO = 31,
	CUSTOMIZING_CAMERA = 32,
	CUSTOMIZING_CATEGORY = 33,
	CUSTOMIZING_COMPONENT = 34,
	EFFECT = 35,
	EFFECT_WIDGET = 36,
	ELITEDUNGEON = 37,
	EVENT_CONTENTS = 38,
	GUILD_INFO = 39,
	GUIDE_EFFECT = 40,
	GUIDE_START = 41,
	GUILD_MARK = 42,
	GUILD_MEMBER_GRADE = 43,
	GUILD_LEVEL = 44,
	GUILD_DEV_UI = 45,
	GUILD_DEV_LEVEL = 46,
	GUILD_DEV_UNLOCK = 47,
	GUILD_FAME_CATEGORY = 48,
	GUILD_DAILY_MISSION = 49,
	GUILD_STATUS = 50,
	GUILD_EXPEDITION = 51,
	GUILD_DOMINION = 52,
	GUILD_DOMINION_BUFF = 53,
	GUILD_DOMINION_PRIZE = 54,
	GUILD_DOMINION_PBS = 55,
	GUILD_DOMINION_PK_GRADE = 56,
	GUILD_DOMINION_STORAGE_HISTORY = 57,
	GUILD_DOMINION_EXCHANGE = 58,
	GUILD_POSITION = 59,
	GUILD_WANTED = 60,
	GUILD_GIFT = 61,
	GUILD_GIFT_LEVEL = 62,
	GUILD_SHOP = 63,
	GUILD_HISTORY = 64,
	GUILD_MONEY_EXCHANGE = 65,
	GUILD_AUTHORITY = 66,
	ITEM = 67,
	ITEM_SET = 68,
	ITEM_EQUIPSLOT = 69,
	ITEM_SMELTING = 70,
	ITEM_SMELTING_ATTRIBUTE = 71,
	ITEM_MAKE = 72,
	ITEM_OPTION = 73,
	ITEM_OPTION_GRADE = 74,
	ITEM_OPTION_RANDOM = 75,
	ITEM_OPTION_PASSIVE = 76,
	ITEM_SMELTING_EFFECT = 77,
	ITEM_PACKAGE = 78,
	ITEM_RANDOM_GET = 79,
	ITEM_RANDOM_GET_INFO = 80,
	ITEM_RANDOM_EXCHANGE = 81,
	ITEM_RANDOM_EXCHANGE_EQUIP = 82,
	ITEM_INFO_SUMMARY = 83,
	ITEM_GETWAY = 84,
	ITEM_GETWAY_INFO = 85,
	ITEM_GETWAY_LIST = 86,
	ITEM_DURABILITY_REPAIRCOST = 87,
	ITEM_DURABILITY_BROKENLV = 88,
	INSTANCE_DUNGEON_INFO = 89,
	INSTANCE_DUNGEON_SETTING = 90,
	ICON = 91,
	INVENTORY = 92,
	INVENTORY_EXTEND = 93,
	INVENTORY_EXTEND_VALUE = 94,
	INVENTORY_EXTEND_ITEM = 95,
	ITEM_SUBCOOLTIME = 96,
	LOADING = 97,
	LEVEL = 98,
	MAGICSQUARE = 99,
	MAGICSQUARESTAGE = 100,
	MOVIEPLAY = 101,
	MAPUI_WORLD = 102,
	MAPUI_AREA = 103,
	MAPUI_MINI = 104,
	MONEY = 105,
	MONSTER = 106,
	MONSTER_PHASING = 107,
	MONSTER_RESOURCE = 108,
	MONSTER_RAREACTION = 109,
	MONSTER_COLOR_GROUP = 110,
	GUILD_WAR_MONSTER = 111,
	GUILD_WAR_OBJECT = 112,
	MONTAGE = 113,
	HIDDEN_PATH = 114,
	NPC = 115,
	NPCDIALOG = 116,
	NPCSPAWN = 117,
	NPCSHOWSCHEDULE = 118,
	NICKNAME = 119,
	NPC_ITEM_LIST = 120,
	OBJECT = 121,
	GUILD_WAR_STRONG_POINT = 122,
	GUILD_WAR_SANCTUM = 123,
	PLAYDATA = 124,
	PHASING = 125,
	PORTAL = 126,
	PK_GRADE = 127,
	QUEST_RELATION = 128,
	QUEST_RELATION_REWARD = 129,
	QUICK_SLOT_SETTING = 130,
	QUESTDAILY_HOMEWORK = 131,
	QUESTDAILY_HOMEWORK_PLUSREWARD = 132,
	QUEST_MISSION = 133,
	QUEST_COMBAT_DEVIATION = 134,
	QUEST_REQUEST = 135,
	REVIVAL = 136,
	GUILD_WAR_REVIVAL = 137,
	RESOURCE_MESH = 138,
	RESOURCE_ABP = 139,
	RESOURCE_ETC = 140,
	SOUND = 141,
	STATUS = 142,
	STRING_ERROR = 143,
	STATUS_LIMIT = 144,
	STATUS_CALCULATE = 145,
	STATUS_INFO = 146,
	SKILL = 147,
	SKILL_ATTACK = 148,
	SKILL_STATE = 149,
	SKILL_PASSIVE = 150,
	SKILL_COST = 151,
	STAGE = 152,
	STAGE_SECTOR = 153,
	STRING_BUILTIN = 154,
	STRING_TEMPLATE = 155,
	STRING_MESSAGE = 156,
	STRING_MAIL = 157,
	STRING_TOOLTIP = 158,
	STD = 159,
	STRING_NPC = 160,
	STRING_QUESTTEMPLATE = 161,
	SEQUENCEPLAY = 162,
	SMALLTALK_SETTING = 163,
	SMALLTALK_DIALOGUE = 164,
	SEQUENCE_DIALOGUE = 165,
	SLANG_NICKNAME = 166,
	SLANG_CHATTING = 167,
	SYSTEM_DATA = 168,
	SHOP_GOODS = 169,
	UI_SHOP_GOODS = 170,
	UI_SHOP_IAP_INFO = 171,
	GACHA_INFO = 172,
	GACHA_GROUP = 173,
	GACHA_LIST = 174,
	TOTEM = 175,
	TUTORIAL = 176,
	TOTAL_MENU = 177,
	TOTAL_MENU_FRAME = 178,
	TOTAL_MENU_CONTENTS = 179,
	ITEM_BLESS_INCREASERATE = 180,
	TIMETICKET = 181,
	TRIGGER_GROUPBASE = 182,
	UNDERWORLD = 183,
	VEHICLE_RIDE = 184,
	WARP_LOCATION = 185,
	SECRET_DUNGEON = 186,
	GAMEOPTION_SETTING = 187,
	GAMEOPTION_KEYSETTING = 188,
	NPC_ITEM_MAKE_LIST = 189,
	PK_MODE = 190,
	PK_SYSTEM = 191,
	LABYRINTH = 192,
	EVENT_TIMELINE = 193,
	ITEM_VIEWER = 194,
	FAME_QUEST = 195,
	FAME_CATEGORY = 196,
	FAME_LEVEL = 197,
	BUFF_ATTACK = 198,
	QUEUE_UI = 199,
	ITEM_UNSEALING = 200,
	ITEM_UNSEALING_ACCELERATION = 201,
	RANKING_CATEGORY = 202,
	RANKING_REWARD = 203,
	RANKING_SEASON_REWARD = 204,
	RANKING_SCHEDULER = 205,
	PET = 206,
	PET_DECK = 207,
	PET_SKILL = 208,
	PET_LEVEL = 209,
	GREAT_BUILDING = 210,
	GREAT_BUILDING_STEP = 211,
	ITEM_MATERIAL_COMPOSE = 212,
	ITEM_MATERIAL_COMPOSE_LIST = 213,
	ITEM_MATERIAL_COMPOSE_POINT = 214,
	TRADE_MENU = 215,
	USER_EVENT = 216,
	USER_EVENT_GOAL = 217,
	USEREVENT_BENEDICTION = 218,
	USER_EVENT_SIEGEEVE = 219,
	BATTLE_PASS_INFO = 220,
	BATTLE_PASS_GROUP = 221,
	BATTLE_PASS_MISSION = 222,
	BATTLE_PASS_REWARD = 223,
	CHANNEL = 224,
	ITEM_COLLECTION = 225,
	DUNGEON_TICKET = 226,
	DUNGEON_TICKET_CHARGE = 227,
	DUNGEON_SHOP = 228,
	SKILL_SPECIAL_ABILITY = 229,
	GUILD_WAR_SIEGE = 230,
	GUILD_WAR_SIEGE_REWARD = 231,
	GUILD_WAR_COSTUME = 232,
	CHARACTER_EXPBOOSTER = 233,
	CHARACTER_EXPBOOSTER_ITEM = 234,
	DEATHPENALTY_EXP = 235,
	COMMAND_MARK = 236,
	BUFF_GUILD_DEV = 237,
	GUIDE_LINK = 238,
	NPC_SHOP_LIST = 239,
	NPC_SHOP_GOODS = 240,
	BROADCAST = 241,
	GAME_DEFINE_OPTION = 242,
	SCHEDULERCYCLE = 243,
	BUFF_PARTY = 244,
	UI_SHOP_PERIOD = 245,
	SERVER_CHANGE_CONDITION = 246,
	SERVER_CHANGE_COST = 247,
	SERVER_CHANGE_UI = 248,
	ITEM_MAGICSTONE_TRANCE = 249,
	ITEM_TRANSCENDENCE_DEFINE = 250,
	ITEM_SP_TREASURE_TRANCE = 251,
	CLOSED_TRAINING = 252,
	CLOSED_TRAINING_STATUS = 253,
	CLOSED_TRAINING_LEVEL = 254,
	CLOSED_TRAINING_COLLECT = 255,
	CLASS_PHASE = 256,
	QUEST_DROP_ITEM = 257,
	MULTI_LANGUAGE = 258,
	ITEM_MAKE_AGENCY = 259,
	GLOBAL_FONT_RANGE = 260,
	GLOBAL_REGION = 261,
	ITEM_XDRACO_MAKE = 262,
	ITEM_XDRACO_SEALING = 263,
	ADS_INFO = 264,
	ITEM_EXTEND = 265,
	ITEM_MYSTICALPIECE_TRANCE = 266,
	MAX = 267,
};

enum class CameraFlashMode : uint8_t {
	FlashOff = 0,
	FlashAuto = 1,
	FlashOn = 2,
	CameraFlashMode_MAX = 3,
};

enum class EDragPosType : uint8_t {
	DELTA_TYPE = 0,
	POSITION_TYPE = 1,
	EDragPosType_MAX = 2,
};

enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
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

enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
};

enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class EMaterialFunctionUsage : uint8_t {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3,
};

enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class NotificationPriority : uint8_t {
	PriorityMinimum = 0,
	PriorityLow = 1,
	PriorityDefault = 2,
	PriorityHigh = 3,
	PriorityMaximum = 4,
	NotificationPriority_MAX = 5,
};

enum class ETutorialStepEndType : uint8_t {
	None = 0,
	TouchTarget = 1,
	TouchScreen = 2,
	TouchScreenOrTimeEnd = 3,
	Airwalk1stEnd = 4,
	AirwalkLand = 5,
	Airwalk2ndEnd = 6,
	AirwalkDashReady = 7,
	AirwalkDashJumpReady = 8,
	AirwalkDash2Ready = 9,
	SkillVirtualStickActive = 10,
	BlockTouchTimer = 11,
	SkillReleased = 12,
	WallJumpReady = 13,
	SpecialSkillReady = 14,
	ToggleAutoSkill = 15,
	VirtualStickMove = 16,
	Max = 17,
};

enum class EGalaxyStoreErrorCode : uint8_t {
	IAP_ERROR_NONE = 0,
	IAP_PAYMENT_IS_CANCELED = 1,
	IAP_ERROR_INITIALIZATION = 2,
	IAP_ERROR_NEED_APP_UPGRADE = 3,
	IAP_ERROR_COMMON = 4,
	IAP_ERROR_ALREADY_PURCHASED = 5,
	IAP_ERROR_WHILE_RUNNING = 6,
	IAP_ERROR_PRODUCT_DOES_NOT_EXIST = 7,
	IAP_ERROR_CONFIRM_INBOX = 8,
	IAP_ERROR_ITEM_GROUP_DOES_NOT_EXIST = 9,
	IAP_ERROR_NETWORK_NOT_AVAILABLE = 10,
	IAP_ERROR_IOEXCEPTION_ERROR = 11,
	IAP_ERROR_SOCKET_TIMEOUT = 12,
	IAP_ERROR_CONNECT_TIMEOUT = 13,
	IAP_ERROR_NOT_EXIST_LOCAL_PRICE = 14,
	IAP_ERROR_NOT_AVAILABLE_SHOP = 15,
	IAP_ERROR_NEED_SA_LOGIN = 16,
	IAP_MAX = 17,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class RecurrencyRuleType : uint8_t {
	Daily = 0,
	Weekly = 1,
	Monthly = 2,
	Yearly = 3,
	RecurrencyRuleType_MAX = 4,
};

enum class ETriggerType : uint8_t {
	NONE = 0,
	BEGINPLAY = 1,
	ENDPLAY = 2,
	MOVE = 3,
	MONSTER_GROUP = 4,
	MONSTER_KILL_CHECK = 5,
	WALL = 6,
	FIXEDCAMERA = 7,
	GUARD_NPC_SPAWNER = 8,
	GUARD_NPC_MOVE = 9,
	GUARD_NPC_ENTER_CHECK = 10,
	DIRECTING = 11,
	CREATEWIDGET = 12,
	QUESTCOMPLETE = 13,
	TIMER = 14,
	QUEST_STATUS_CHECK = 15,
	SCRIPT = 16,
	MONSTER_MOVE = 17,
	COUNT = 18,
	PLAYSOUND = 19,
	CONDITIONCHECK = 20,
	PHASEAREA = 21,
	MONSTER_KILL = 22,
	SCRIPT_MONSTER_KILL_CHECK = 23,
	OPOBJECT = 24,
	MISSION_FAIL = 25,
	NPCSHOW = 26,
	EFFECTSHOW = 27,
	PCWARP = 28,
	DO_ONCE = 29,
	INVINCIBILITY = 30,
	OTHER = 31,
	ETriggerType_MAX = 32,
};

enum class ATTACK_TYPE : uint8_t {
	None = 0,
	DefaultAttack = 1,
	DashAttack = 2,
	JumpAttack = 3,
	TeleportAttack = 4,
	ATTACK_MAX = 5,
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

enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5,
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

enum class ENavAreaFlag : uint8_t {
	Default = 0,
	NavLink = 1,
	ENavAreaFlag_MAX = 2,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
};

enum class EDirectingTriggerType : uint8_t {
	SMALL_TALK = 0,
	CINEMATIC_DIALOGUE = 1,
	LEVEL_SEQUENCE = 2,
	EDirectingTriggerType_MAX = 3,
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

enum class ESkillState : uint8_t {
	Normal = 0,
	EnableSkill = 1,
	EnableSmite = 2,
	ESkillState_MAX = 3,
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

enum class ESlateDebuggingNavigationMethod : uint8_t {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
};

enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

enum class EBitmapCSType : uint8_t {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
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

enum class ESourceBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2,
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

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class EMatrixColumns : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4,
};

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
};

enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class EMovieScenePlayerStatus : uint8_t {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7,
};

enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
};

enum class ERevivalOptionType : uint8_t {
	NONE = 0,
	SAFE_REVIVAL = 1,
	IMMEDIATE_REVIVAL = 2,
	HELP_REVIVAL = 3,
	ANOTHER_POSITION_REVIVAL = 4,
	MOVE_REVIVAL_ROOM = 5,
	NEED_HEART = 6,
	PK_PENALTY = 7,
	SITUATION_BOARD = 8,
	ERevivalOptionType_MAX = 9,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class ELightmapType : uint8_t {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3,
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

enum class ValueEventType : uint8_t {
	Changed = 0,
	Cancelled = 1,
	ValueEventType_MAX = 2,
};

enum class AUTO_STATE : uint8_t {
	None = 0,
	BATTLE_AUTO = 1,
	GATHER_AUTO = 2,
	BATTLE_GATHER_AUTO = 3,
	PLAY_AUTO = 4,
	MAPMOVE_AUTO = 5,
	QUEST_AUTO = 6,
	AUTO_COUNTER = 7,
	AUTO_MAX = 8,
};

enum class BULLET_TYPE : uint8_t {
	None = 0,
	SingleTarget = 1,
	EachTarget = 2,
	BULLET_MAX = 3,
};

enum class EDataValidationResult : uint8_t {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class ERuntimeVirtualTextureDebugType : uint8_t {
	None = 0,
	Debug = 1,
	ERuntimeVirtualTextureDebugType_MAX = 2,
};

enum class EMultiBlockType : uint8_t {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	MenuSeparator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	ToolBarSeparator = 8,
	Widget = 9,
	EMultiBlockType_MAX = 10,
};

enum class EVirtualizationMode : uint8_t {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class ESortListBtn_Location : uint8_t {
	LeftTop = 0,
	LeftBottom = 1,
	RightTop = 2,
	RightBottom = 3,
	ESortListBtn_MAX = 4,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
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

enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3,
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
	EARObjectClassification_MAX = 11,
};

enum class EMeetingJoinGrade : uint8_t {
	NONE = 0,
	GRADE2 = 1,
	GRADE3 = 2,
	GRADE4 = 3,
	GRADE5 = 4,
	ALL = 5,
	EMeetingJoinGrade_MAX = 6,
};

enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

enum class ETutorialUIGuideType : uint8_t {
	None = 0,
	NoGuidBox = 1,
	Circle = 2,
	Rectangle = 3,
	Max = 4,
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

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6,
};

enum class EGameOptionDataType : uint8_t {
	DEVICE = 0,
	CHARACTER = 1,
	DEFAULT = 2,
	EGameOptionDataType_MAX = 3,
};

enum class EProgressState : uint8_t {
	Same = 0,
	Increase = 1,
	Decrease = 2,
	EProgressState_MAX = 3,
};

enum class EFameType : uint8_t {
	FAME_INFO = 0,
	FAME_BOARD = 1,
	FAME_MAX = 2,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

enum class ECustomizingComponentType : uint8_t {
	LIST = 0,
	PALETTE = 1,
	SLIDER = 2,
	PICKER = 3,
	LIST_MESH = 4,
	LIST_COSTUME = 5,
	LIST_ANI = 6,
	COSTUME_DYE = 7,
	NONE = 8,
	ECustomizingComponentType_MAX = 9,
};

enum class E_FACTION_TYPE : uint8_t {
	Neutral = 0,
	Friendly = 1,
	Hostile = 2,
	E_FACTION_MAX = 3,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
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

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
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

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
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

enum class EXRTrackedDeviceType : uint8_t {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 4,
	Any = 5,
	EXRTrackedDeviceType_MAX = 6,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
};

enum class EChannelMaskParameterColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class NotificationType : uint8_t {
	Error = 0,
	Warning = 1,
	Success = 2,
	NotificationType_MAX = 3,
};

enum class ECheckSyncType : uint8_t {
	Tick_AutoMove = 0,
	Tick_ManualMove = 1,
	Tick_UnableMove = 2,
	Tick_NotNaviMove = 3,
	Tick_MAX = 4,
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

enum class EFFTSize : uint8_t {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class EOfficialType : uint8_t {
	Master = 0,
	Sub_Official_1 = 1,
	Sub_Official_2 = 2,
	Sub_Official_3 = 3,
	Sub_Official_4 = 4,
	Sub_Official_5 = 5,
	EOfficialType_MAX = 6,
};

enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
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

enum class EGachaBoxType : uint8_t {
	NONE = 0,
	PET = 1,
	SKILLBOOK = 2,
	ITEM = 3,
	EGachaBoxType_MAX = 4,
};

enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3,
};

enum class ERideState : uint8_t {
	None = 0,
	Pending = 1,
	Complete = 2,
	ERideState_MAX = 3,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class EAlignmentType : uint8_t {
	None = 0,
	Fill = 1,
	Center = 2,
	Left = 3,
	Right = 4,
	CenterTop = 5,
	LeftTop = 6,
	RightTop = 7,
	CenterBottom = 8,
	LeftBottom = 9,
	RightBottom = 10,
	EAlignmentType_MAX = 11,
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

enum class ACLCompressionLevel : uint8_t {
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_MAX = 5,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class QuestBattleType : uint8_t {
	NONE = 0,
	FIND_MONSTER = 1,
	START_AUTOBATTLE = 2,
	QuestBattleType_MAX = 3,
};

enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class ERuntimeVirtualTextureMaterialType : uint8_t {
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	WorldHeight = 4,
	Count = 5,
	ERuntimeVirtualTextureMaterialType_MAX = 6,
};

enum class EPositionType : uint8_t {
	FREE = 0,
	RELATIVE = 1,
	EPositionType_MAX = 2,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class EWidgetPopupType : uint8_t {
	NOT_POPUP = 0,
	DEFAULT_POPUP = 1,
	ONLY_ONE_POPUP = 2,
	NOT_MANAGED_POPUP = 3,
	EWidgetPopupType_MAX = 4,
};

enum class EUserEvent_Siege_Team : uint8_t {
	SiegeTeam_Home = 0,
	SiegeTeam_Away = 1,
	SiegeTeam_MAX = 2,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class BatteryState : uint8_t {
	Unknown = 0,
	Unplugged = 1,
	Charging = 2,
	Full = 3,
	BatteryState_MAX = 4,
};

enum class ImpactStrength : uint8_t {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	ImpactStrength_MAX = 3,
};

enum class EUIGuideType : uint8_t {
	COMMENT = 0,
	MINITALK = 1,
	EUIGuideType_MAX = 2,
};

enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

enum class EPSCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5,
};

enum class EGameOptionType : uint8_t {
	None = 0,
	G_AutoBattleFunction = 1,
	G_AutoBattleRange = 2,
	G_AutoSkill = 3,
	G_LeaderCenteredBattle = 4,
	G_AutoReturnOnDeath = 5,
	G_AutoLockOn = 6,
	G_AutoCounterAttack = 7,
	G_QuickSlotAutoPotion_1 = 8,
	G_QuickSlotAutoPotion_2 = 9,
	G_QuickSlotAutoPotion_3 = 10,
	G_AutoPotionHpPercent = 11,
	G_AutoPotionMpPercent = 12,
	G_QuickSlotAutoEquip = 13,
	G_GuildMarkOption = 14,
	G_UserMarkOption = 15,
	G_MyNameOption = 16,
	G_UserNameOption = 17,
	G_MonNameOption = 18,
	G_EffectVisual = 19,
	G_SleepModeStartTime = 20,
	G_UnSleepModeWhenAttacked = 21,
	G_PartyUIAutoVisible = 22,
	G_BuddyRequestAutoReject = 23,
	G_BuddyLoginNotice = 24,
	G_ComplateQuestSort = 25,
	G_WorldChatItemAsk = 26,
	G_Simple = 27,
	G_ScreenEffect = 28,
	G_Texture = 29,
	G_Resolution = 30,
	G_FrameSpeed = 31,
	G_Visual = 32,
	G_SkillEffect = 33,
	G_MasterVolume = 34,
	G_BGMVolume = 35,
	G_SFXVolume = 36,
	G_VoiceVolume = 37,
	G_AmbientVolume = 38,
	G_QuickSlotInvenSort = 39,
	G_QuickSlotInvenOrder = 40,
	G_ARejectParty = 41,
	G_ARejectSquad = 42,
	G_CameraShakeScale = 43,
	G_AutoPlayUseSkill = 44,
	G_StageSectorVisible = 45,
	G_ComboCounterViewable = 46,
	G_ItemFilterJunkItemFirst = 47,
	G_ItemFilterItemGrade01 = 48,
	G_ItemFilterItemGrade02 = 49,
	G_ItemFilterItemGrade03 = 50,
	G_HideGuildGiftName = 51,
	G_PartyBattleTargetShare = 52,
	G_BattleTargetType = 53,
	G_TargetBossMon = 54,
	G_TargetNormalMon = 55,
	G_TargetEnemyGuild = 56,
	G_TargetEnemyUser = 57,
	G_TargetmyGuild = 58,
	G_TargetmyParty = 59,
	G_TradeItemAsk = 60,
	G_MiniMap = 61,
	G_GatherPopUp = 62,
	G_CharacterAlarm = 63,
	G_QuestAlarm = 64,
	G_GreatBuildingAlarm = 65,
	G_ContentsOpenAlarm = 66,
	G_ChattingRenderOpacity = 67,
	G_PushAllAlarm = 68,
	G_PushNightAlarm = 69,
	G_Shadow = 70,
	G_HeadLineMessageType_3 = 71,
	G_Pet = 72,
	G_Battle_AutoCamera = 73,
	G_QuickSlotAutoPotion_4 = 74,
	G_QuickSlotAutoPotion_5 = 75,
	G_QuickSlotAutoPotion_6 = 76,
	G_QuickSlotAutoPotion_7 = 77,
	G_QuickSlotAutoPotion_8 = 78,
	G_QuickSlotAutoPotion_9 = 79,
	G_MyGuildMark = 80,
	G_MyAllianceGuildMark = 81,
	G_OtherGuildMark = 82,
	G_TargetEnemyGuildWar = 83,
	G_PKAlarm = 84,
	G_SkillDarkChange = 85,
	G_SkillCameraZoom = 86,
	G_CameraMode = 87,
	G_ItemSmelting_Break_Hero = 88,
	G_CharacterMaxLevelAlarm = 89,
	G_ExpBoosterMaxLevelAlarm = 90,
	G_CostumeTitleOption = 91,
	G_FastUnsealingStart = 92,
	G_HUDAutoResizing = 93,
	G_PingVisible = 94,
	G_PKAutoReverse = 95,
	G_TicketAutoCharge_UseGold = 96,
	EGameOptionType_MAX = 97,
};

enum class EGuildWarObjectOwnerShip : uint8_t {
	NEUTRAL = 0,
	DEFENSE = 1,
	OFFENSE = 2,
	EGuildWarObjectOwnerShip_MAX = 3,
};

enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
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

enum class ECameraFocusMethod : uint8_t {
	None = 0,
	Manual = 1,
	Tracking = 2,
	ECameraFocusMethod_MAX = 3,
};

enum class ECommandMarkType : uint8_t {
	POSITION = 0,
	TARGET = 1,
	ECommandMarkType_MAX = 2,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
};

enum class VoiceDownState : uint8_t {
	None = 0,
	NeedDownload = 1,
	Downloading = 2,
	VoiceDownState_MAX = 3,
};

enum class EVoiceSampleRate : uint8_t {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2,
};

enum class DAMAGE_ATTRIBUTE : uint8_t {
	None = 0,
	FireDmg = 1,
	FrozenDmg = 2,
	LightningDmg = 3,
	PoisonDmg = 4,
	HolyDmg = 5,
	DAMAGE_MAX = 6,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class MaskTarget_PhysMesh : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	MaskTarget_MAX = 5,
};

enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
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

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

enum class GUIDE_EFFECT_APPLY_TYPE : uint8_t {
	ForSelf = 0,
	ForEnemy = 1,
	ForAlly = 2,
	ForAll = 3,
	GUIDE_EFFECT_APPLY_MAX = 4,
};

enum class EAudioFaderCurve : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5,
};

enum class AnalyticsEvent : uint8_t {
	add_payment_info = 0,
	add_to_cart = 1,
	add_to_wishlist = 2,
	app_open = 3,
	begin_checkout = 4,
	campaign_details = 5,
	checkout_progress = 6,
	earn_virtual_currency = 7,
	ecommerce_purchase = 8,
	generate_lead = 9,
	join_group = 10,
	level_up = 11,
	login = 12,
	post_score = 13,
	present_offer = 14,
	purchase_refund = 15,
	remove_from_cart = 16,
	search = 17,
	select_content = 18,
	set_checkout_option = 19,
	share = 20,
	sign_up = 21,
	spend_virtual_currency = 22,
	tutorial_begin = 23,
	tutorial_complete = 24,
	unlock_achievement = 25,
	view_item = 26,
	view_item_list = 27,
	view_search_results = 28,
	level_start = 29,
	level_end = 30,
	AnalyticsEvent_MAX = 31,
};

enum class EOccupationBidHistoryType : uint8_t {
	NONE = 0,
	BIDDING = 1,
	OCCUPIED = 2,
	BATTLE_RESULT = 3,
	EOccupationBidHistoryType_MAX = 4,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class EPopupContentsState_CurDisplay : uint8_t {
	None = 0,
	Mastery = 1,
	HolyStuff = 2,
	Vehicle = 3,
	Force = 4,
	EPopupContentsState_MAX = 5,
};

enum class EOccupationBattleGuildType : uint8_t {
	NONE = 0,
	DEFENSE_MAIN = 1,
	OFFENSE_MAIN = 2,
	DEFENSE_ALLIANCE_2 = 3,
	DEFENSE_ALLIANCE_3 = 4,
	OFFENSE_ALLIANCE_2 = 5,
	OFFENSE_ALLIANCE_3 = 6,
	DEFENSE_GUILD = 7,
	OFFENSE_GUILD = 8,
	MAIN_GUILD = 9,
	ALLIANCE_GUILD = 10,
	ALLIANCE_TO_ALL = 11,
	EOccupationBattleGuildType_MAX = 12,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class ELeftTabMenuSlotType : uint8_t {
	OpenInfo = 0,
	OpenPartyList = 1,
	ELeftTabMenuSlotType_MAX = 2,
};

enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

enum class EWSPaymentStep : uint8_t {
	NONE = 0,
	STORE_PURCHASE_ERROR = 1,
	REQUEST_PAY_VERIFY = 2,
	RESPONSE_PAY_VERIFY = 3,
	UNKNOWN_RECEIPT = 4,
	EWSPaymentStep_MAX = 5,
};

enum class HIT_REACTION_TYPE : uint8_t {
	None = 0,
	Hit00 = 1,
	Hit01 = 2,
	Hit02 = 3,
	HIT_REACTION_MAX = 4,
};

enum class EGachaViewType : uint8_t {
	None = 0,
	Tombstone = 1,
	Full = 2,
	Interaction = 3,
	EGachaViewType_MAX = 4,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class EWarpMethodType : uint8_t {
	None = 0,
	Script = 1,
	Fail = 2,
	EWarpMethodType_MAX = 3,
};

enum class ProgressDialogStyle : uint8_t {
	Spinner = 0,
	ProgressBar = 1,
	ProgressDialogStyle_MAX = 2,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EPrerequisiteLoadState : uint8_t {
	START = 0,
	ALL_TABLE = 1,
	ASYNC_PRELOAD_TABLE = 2,
	PREREQUISITE_ASSET = 3,
	MAX = 4,
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

enum class NotificationVisibility : uint8_t {
	VisibilitySecret = 0,
	VisibilityPrivate = 1,
	VisibilityPublic = 2,
	NotificationVisibility_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class ECounterAttackState : uint8_t {
	Disable = 0,
	Enable_NoSkill = 1,
	Enable_Skill = 2,
	ECounterAttackState_MAX = 3,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class EMiniGameSoundType : uint8_t {
	Bgm_Wait = 0,
	Bgm_Battle = 1,
	Player_Atk1 = 2,
	Player_Atk2 = 3,
	Player_Atk3 = 4,
	Player_Avoid = 5,
	Player_Hit = 6,
	Monster_Atk1 = 7,
	Monster_Atk2 = 8,
	Monster_Hit = 9,
	System_NextWave = 10,
	EMiniGameSoundType_MAX = 11,
};

enum class EBattleStateReason : uint8_t {
	ExecuteSkill = 0,
	RollEnter = 1,
	RollExit = 2,
	Hit = 3,
	BuffHit = 4,
	TimeOut = 5,
	AppearUser = 6,
	RecvServer = 7,
	RecvAttack = 8,
	EBattleStateReason_MAX = 9,
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

enum class ELanguage : uint8_t {
	KOR = 0,
	CHT = 1,
	CHS = 2,
	JPN = 3,
	ENG = 4,
	THA = 5,
	IND = 6,
	VIE = 7,
	GER = 8,
	SPA = 9,
	POR = 10,
	RUS = 11,
	MAX = 12,
};

enum class EAutoMoveState : uint8_t {
	None = 0,
	AutoMove_Map = 1,
	AutoMove_Quest = 2,
	AutoMove_ReturnToCenter = 3,
	AutoMove_Gather = 4,
	AutoMove_ForceMove = 5,
	AutoMove_GroupMeditation = 6,
	AutoMove_Unknown = 7,
	AutoMove_Trace = 8,
	AutoMove_SelfComebackbyBattle = 9,
	AutoMove_SelfComebackbyCounter = 10,
	EAutoMoveState_MAX = 11,
};

enum class ACT_TYPE : uint8_t {
	None = 0,
	TargetAct = 1,
	ZoneAct = 2,
	ACT_MAX = 3,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
};

enum class ETutorialProgressType : uint8_t {
	PAGE = 0,
	SEQUENCEPLAY = 1,
	EFFECTWIDGET = 2,
	ETutorialProgressType_MAX = 3,
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

enum class EGameplayTagSourceType : uint8_t {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EItemGetWayMine : uint8_t {
	MineNormal = 0,
	MineSpecial = 1,
	Mine_BlockIron = 2,
	EItemGetWayMine_MAX = 3,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class EMMSoundType : uint8_t {
	NONE = 0,
	MASTER = 1,
	BGM = 2,
	AMBIENT = 3,
	SFX = 4,
	UI = 5,
	VOICE = 6,
	VOICE_DIALOGUE = 7,
	VOICE_MALE = 8,
	VOICE_FEMALE = 9,
	MAX = 10,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class EStageType : uint8_t {
	None = 0,
	Field = 1,
	SingleField = 2,
	Fight = 3,
	Custom = 4,
	EliteDungeon = 5,
	Labyrinth = 6,
	UnderWorld = 7,
	Bido = 8,
	StrongPoint = 9,
	Siege = 10,
	WorldBoss = 11,
	GuildExpedition = 12,
	GuildBossWave = 13,
	Boss_Indun = 14,
	Party_Indun = 15,
	Magic_Square = 16,
	SecretDungeon = 17,
	ArenaPvP = 18,
	Magic_square_StartMap = 19,
	Salon = 20,
	DungeonScript = 21,
	EStageType_MAX = 22,
};

enum class EBoneVectorType : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EBoneVectorType_MAX = 3,
};

enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
};

enum class ECurveTableMode : uint8_t {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class ETabType : uint8_t {
	CHARINFO = 0,
	TAB_MAX = 1,
	ETabType_MAX = 2,
};

enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
};

enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
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

enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

enum class EInertializationState : uint8_t {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3,
};

enum class BatteryPluggedState : uint8_t {
	OnBattery = 0,
	Ac = 1,
	Usb = 2,
	Wireless = 3,
	BatteryPluggedState_MAX = 4,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
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

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
};

enum class EAudioRecordingExportType : uint8_t {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2,
};

enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

enum class ITEM_SLOT_SHOW_WIDGET : uint8_t {
	NONE = 0,
	IMG_PLUS = 1,
	ITEM_SLOT_SHOW_MAX = 2,
};

enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

enum class EItemMakeAgency_FailType : uint8_t {
	NONE = 0,
	COST = 1,
	ITEM = 2,
	EItemMakeAgency_MAX = 3,
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

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class StatusBarStyle : uint8_t {
	BarStyleDefault = 0,
	BarStyleLightContent = 1,
	BarStyleDarkContent = 2,
	StatusBarStyle_MAX = 3,
};

enum class EGameOptionSliderType : uint8_t {
	Default = 0,
	Sound = 1,
	EGameOptionSliderType_MAX = 2,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5,
};

enum class ERecvOccupationAuction : uint8_t {
	RECV_OCCUPATION_INFO = 0,
	RECV_OCCUPATION_AUCTION_BIDDING = 1,
	RECV_OCCUPATION_BATTLE_STATUS = 2,
	RECV_OCCUPATION_ALLIANCE_INVITE_LIST = 3,
	RECV_OCCUPATION_ALLIANCE_INVITE = 4,
	RECV_OCCUPATION_MAX = 5,
};

enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
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

enum class QuestHelperType : uint8_t {
	NONE = 0,
	TALK_NPC = 1,
	POS_TO_TALK_NPC = 2,
	POS_TO_PHASE = 3,
	POS_TO_COMPLETE = 4,
	OPEN_CONTENT = 5,
	OPEN_QUEST_CONTENT = 6,
	OPEN_ITEM_MAKE_CONTENT = 7,
	OPEN_STAGE_QUEST_CONTENT = 8,
	OPEN_CONTENT_WITH_PLAYDATA = 9,
	OPEN_FORCE = 10,
	OPEN_FORCE_BY_PLAYDATA = 11,
	WARP = 12,
	TRACKER_CLICK = 13,
	ITEM_GET = 14,
	COST_DELIVERY = 15,
	ITEM_DELIVERY = 16,
	QUEST_END = 17,
	MONSTER_KILL = 18,
	GROUP_MONSTER_KILL = 19,
	STAGE_MONSTER_KILL = 20,
	NPC_GUARD = 21,
	GRADE_MONSTER_KILL = 22,
	OBJ_GET = 23,
	TYPE_OBJ_GET = 24,
	ALL_OBJ_GET = 25,
	CHAR_MOVE_VIACOORDINATE1 = 26,
	CHAR_MOVE_VIACOORDINATE2 = 27,
	CHAR_MOVE_NONE = 28,
	CHAR_MOVE_NONE_ALLSTAGE_ACTIVE = 29,
	CHAR_MOVE_ACCEPT_NPC = 30,
	SHOW_ITEM_DELIVERY_POPUP = 31,
	CHAR_MOVE_VIACOORDINATE5 = 32,
	CHAR_MOVE_AND_TRACKER_OFF = 33,
	AUTO_OBJ_GET = 34,
	ITEM_TYPE_MAKE = 35,
	ITEM_MAKE_SEARCH = 36,
	QuestHelperType_MAX = 37,
};

enum class SKILL_PRODUCTTYPE : uint8_t {
	None = 0,
	ChainMove = 1,
	RotationMove = 2,
	ChainAttack = 3,
	AutoTargetMove = 4,
	SKILL_MAX = 5,
};

enum class EMontageSubStepResult : uint8_t {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EAnimAlphaInputType : uint8_t {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
};

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
};

enum class NotificationCategory : uint8_t {
	CategoryAlarm = 0,
	CategoryCall = 1,
	CategoryEmail = 2,
	CategoryError = 3,
	CategoryEvent = 4,
	CategoryMessage = 5,
	CategoryNavigation = 6,
	CategoryProgress = 7,
	CategoryPromo = 8,
	CategoryRecommendation = 9,
	CategoryReminder = 10,
	CategoryService = 11,
	CategorySocial = 12,
	CategoryStatus = 13,
	CategorySystem = 14,
	CategoryTransport = 15,
	NotificationCategory_MAX = 16,
};

enum class EOscillatorWaveform : uint8_t {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4,
};

enum class ECountState : uint8_t {
	Count = 0,
	Start = 1,
	Name = 2,
	End = 3,
	ECountState_MAX = 4,
};

enum class EServerStatus : uint8_t {
	None = 0,
	Open = 1,
	Close = 2,
	EServerStatus_MAX = 3,
};

enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
};

enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	ERBFNormalizeMethod_MAX = 3,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
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

enum class EQuestDropItemType : uint8_t {
	MAIN = 0,
	MISSION_NORMAL = 1,
	MISSION_REPEAT = 2,
	DAILY_WORK = 3,
	RELATION = 4,
	REQUEST = 5,
	GUILD = 6,
	EQuestDropItemType_MAX = 7,
};

enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3,
};

enum class EUserEventRewardType : uint8_t {
	RewardType_Money = 0,
	RewardType_Item = 1,
	RewardType_MAX = 2,
};

enum class EChangeIdleReason : uint8_t {
	Unknown = 0,
	NotFindPath = 1,
	UseInput = 2,
	EmptyTarget = 3,
	DeadTarget = 4,
	EmptySkill = 5,
	EnableAttack = 6,
	Stalled = 7,
	EChangeIdleReason_MAX = 8,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

enum class EPinContainerType : uint8_t {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
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

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

enum class EConditionType : uint8_t {
	None = 0,
	Less_HP = 1,
	More_HP = 2,
	Less_MP = 3,
	More_MP = 4,
	Less_Distance = 5,
	More_Distance = 6,
	NoEnemyWithin = 7,
	Buff_Exists = 8,
	Buff_NotExists = 9,
	DeadPlayerInParty = 10,
	Less_HPInParty = 11,
	EConditionType_MAX = 12,
};

enum class EWidgetLayer : uint8_t {
	NONE = 0,
	INGAME_1 = 1,
	INGAME_2 = 2,
	INGAME_3 = 3,
	HUD_DOWN_4 = 4,
	HUD_DOWN_3 = 5,
	HUD_DOWN_2 = 6,
	HUD_MAIN = 7,
	HUD_1 = 8,
	HUD_POPUP_1 = 9,
	HUD_POPUP_2 = 10,
	HUD_POPUP_3 = 11,
	CONTENTS_BG = 12,
	CONTENTS = 13,
	CONTENTS_UPPER_1 = 14,
	CONTENTS_UPPER_2 = 15,
	CONTENTS_GOODS = 16,
	CONTENTS_POPUP_UNDER_1 = 17,
	CONTENTS_POPUP_1 = 18,
	CONTENTS_POPUP_2 = 19,
	CONTENTS_POPUP_3 = 20,
	CONTENTS_POPUP_4 = 21,
	CONTENTS_POPUP_5 = 22,
	CONTENTS_POPUP_MSG = 23,
	CONTENTS_POPUP_STRING_MSG = 24,
	LOGIN_1 = 25,
	LOGIN_2 = 26,
	LOGIN_3 = 27,
	LOGIN_4 = 28,
	LOGIN_OPTION = 29,
	TUTORIAL_1 = 30,
	TUTORIAL_2 = 31,
	NOTICE_CONTENTS_OPEN = 32,
	NOTICE_POPUP = 33,
	SCREEN_BLOCK = 34,
	SCREEN_LOADING = 35,
	SCREEN_FADE = 36,
	SCREEN_CAPTION = 37,
	SCREEN_SLEEPMODE = 38,
	ITEM_TOOLTIP_INFO = 39,
	ERROR_POPUP = 40,
	DEBUG_LOG = 41,
	MAX = 42,
};

enum class EDEBUG : uint8_t {
	NONE = 0,
	GAME_MODE = 1,
	WIDGET_VISIBLE = 2,
	TEMPITEM_CREATE = 3,
	CHAR_STAT = 4,
	NET_PC = 5,
	PC_STATE = 6,
	BATTLE = 7,
	ITEM_WIDGET_SORT = 8,
	EDEBUG_MAX = 9,
};

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class CHAT_AREA_FLAG : uint8_t {
	NONE = 0,
	WORLD = 1,
	GUILD = 2,
	PARTY = 3,
	SYSTEM = 4,
	WHISPER = 5,
	ALLIANCE = 6,
	DEFAULT_MENU = 7,
	MACRO_MENU = 8,
	VOICE_CHAT_MENU = 9,
	CHAT_AREA_MAX = 10,
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

enum class EFSM_TYPE : uint8_t {
	EFSM_NONE = 0,
	EFSM_INIT = 1,
	EFSM_IDLE = 2,
	EFSM_WALK = 3,
	EFSM_MOVE = 4,
	EFSM_ATTACK = 5,
	EFSM_DIE = 6,
	EFSM_TRACE = 7,
	EFSM_RUNAWAY = 8,
	EFSM_ROLL = 9,
	EFSM_RIDE = 10,
	EFSM_NORMAL_ATTACK = 11,
	EFSM_SKILL = 12,
	EFSM_AIRWALK = 13,
	EFSM_GATHER = 14,
	EFSM_HIT = 15,
	EFSM_STUN = 16,
	EFSM_TAUNT = 17,
	EFSM_LAPIDFICATION = 18,
	EFSM_PUSHPULL = 19,
	EFSM_CLIFFMOVE = 20,
	EFSM_TURN = 21,
	EFSM_SLEEP = 22,
	EFSM_AWAKE = 23,
	EFSM_WARP = 24,
	EFSM_EMOTION = 25,
	EFSM_COMEBACK = 26,
	EFSM_AUTOAIRWALK = 27,
	EFSM_CCSLEEP = 28,
	EFSM_AUTOMOVE = 29,
	EFSM_CHANGEPOS = 30,
	EFSM_EMOTE = 31,
	EFSM_MAX = 32,
};

enum class ESlotSmeltingLevelType : uint8_t {
	NONE = 0,
	LEFT = 1,
	RIGHT = 2,
	ESlotSmeltingLevelType_MAX = 3,
};

enum class EReflectionsType : uint8_t {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2,
};

enum class EObject_GetWayType : uint8_t {
	GATHER_NORMAL = 0,
	GATHER_SPECIAL = 1,
	GATHER_MAX = 2,
};

enum class EBitmapHeaderVersion : uint8_t {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

enum class EItemMakeAgencyType : uint8_t {
	NO_LIMIT = 0,
	SERVER_LIMIT = 1,
	CHARACTER_LIMIT = 2,
	EItemMakeAgencyType_MAX = 3,
};

enum class EMapMiniInfoMainType : uint8_t {
	None = 0,
	Default = 1,
	Waypoint = 2,
	SafetyArea = 3,
	Max = 4,
};

enum class CROWD_CONTROL_TYPE : uint8_t {
	None = 0,
	Hit = 1,
	Stun = 2,
	Taunt = 3,
	LapidifiCation = 4,
	KnockBack = 5,
	KnockDown = 6,
	KnockFront = 7,
	PushToPoint = 8,
	Sleep = 9,
	AttackBack = 10,
	CROWD_CONTROL_MAX = 11,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

enum class BULLET_MOVE_TYPE : uint8_t {
	None = 0,
	TargetMove = 1,
	GroundMove = 2,
	TargetCurve = 3,
	DirectMove = 4,
	BULLET_MOVE_MAX = 5,
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

enum class EAttGrade : uint8_t {
	NONE = 0,
	E = 1,
	D = 2,
	C = 3,
	B = 4,
	A = 5,
	S = 6,
	SS = 7,
	SSS = 8,
	EAttGrade_MAX = 9,
};

enum class EReverbSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3,
};

enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
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

enum class ETranslucencyType : uint8_t {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2,
};

enum class IMPACT_SPAWN_TYPE : uint8_t {
	None = 0,
	RandomPos = 1,
	CurrentPos = 2,
	AttackStartPos = 3,
	IMPACT_SPAWN_MAX = 4,
};

enum class EStyle_MirListView : uint8_t {
	CustomStyle = 0,
	EmptyStyle = 1,
	EStyle_MAX = 2,
};

enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3,
};

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class HeightState : uint8_t {
	None = 0,
	Airwalk = 1,
	CliffMove = 2,
	RideMonster = 3,
	HeightState_MAX = 4,
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

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
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

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
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

enum class EApplicationState : uint8_t {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4,
};

enum class ACTION_STATE : uint8_t {
	BP_DefaultNone = 0,
	None = 1,
	Ride = 2,
	Casting = 3,
	ACTION_MAX = 4,
};

enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
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

enum class EActionButtonState : uint8_t {
	NONE_ACTIONBTNSTATE = 0,
	DASH_ACTIONBTNSTATE = 1,
	EActionButtonState_MAX = 2,
};

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class EGateFactionType : uint8_t {
	None = 0,
	DefenseGate = 1,
	OffenseGate = 2,
	EGateFactionType_MAX = 3,
};

enum class EStyle_MirWrapScrollBox : uint8_t {
	CustomStyle = 0,
	EmptyStyle = 1,
	EStyle_MAX = 2,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

enum class EPrimaryAssetCookRule : uint8_t {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5,
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

enum class ETextureMipLoadOptions : uint8_t {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EIOSGoogleSignInStatusCode : uint8_t {
	SUCCESS = 0,
	ERROR_UNKNOWN = 1,
	ERROR_KEYCHAIN = 2,
	ERROR_HAS_NO_AUTH_IN_KEYCHAIN = 3,
	ERROR_CANCELED = 4,
	ERROR_EMM = 5,
	EIOSGoogleSignInStatusCode_MAX = 6,
};

enum class ESortState : uint8_t {
	NONE = 0,
	ASCENDING = 1,
	DESCENDING = 2,
	ESortState_MAX = 3,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

enum class EBGMType : uint8_t {
	NONE = 0,
	FIELD = 1,
	QUEST = 2,
	PHASING = 3,
	EVENT = 4,
	MAX = 5,
};

enum class EGuildWarMonsterKind : uint8_t {
	NONE = 0,
	CAPTURE = 1,
	BARRICADE = 2,
	CASTLEGATE = 3,
	LEVER = 4,
	SIEGETOWER = 5,
	CATAPULT = 6,
	SANCTUM = 7,
	EGuildWarMonsterKind_MAX = 8,
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

enum class ENPCShopGoodsLimitType : uint8_t {
	None = 0,
	Permanent = 1,
	EveryDay = 2,
	Weekend = 3,
	Month = 4,
	ENPCShopGoodsLimitType_MAX = 5,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class EParticleEffectElementType : uint8_t {
	ePEElement_NORMAL = 0,
	ePEElement_RED = 1,
	ePEElement_GREEN = 2,
	ePEElement_MAX = 3,
};

enum class EDesiredImageFormat : uint8_t {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4,
};

enum class EItemGetWayIdType : uint8_t {
	NONE = 0,
	ITEM = 1,
	COST = 2,
	EItemGetWayIdType_MAX = 3,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
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

enum class EDungeonCategory : uint8_t {
	NONE = 0,
	EXP = 1,
	GOLD = 2,
	MATERIAL = 3,
	EQUIPMENT = 4,
	VEHICLE = 5,
	GEM = 6,
	SKILLSTONE = 7,
	EDungeonCategory_MAX = 8,
};

enum class EGatherObjectType : uint8_t {
	NORMAL = 0,
	Drop_Object = 1,
	SIEGEREVIVALFLAG = 2,
	SPARRINGOBJ = 3,
	SANCTUMSHRINE = 4,
	EGatherObjectType_MAX = 5,
};

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class EWarpContentsType : uint8_t {
	None = 0,
	MapAuto = 1,
	MapClick = 2,
	MapNpc = 3,
	PartyAssemble = 4,
	GetPathHunting = 5,
	GetPathGather = 6,
	ChatSharedPos = 7,
	Quest = 8,
	QuestMainTracker = 9,
	QuestMission = 10,
	QuestRequestTracker = 11,
	MoveToRequestNpc = 12,
	QuestRelation = 13,
	FieldDungeon = 14,
	EliteDungeon = 15,
	Labyrinth = 16,
	UnderWorld = 17,
	Occupation_Enter = 18,
	Occupation_Exit = 19,
	InstanceDungeon = 20,
	MagicSquare_Enter = 21,
	MagicSquare_Change = 22,
	MagicSquare_Leave = 23,
	WorldBoss = 24,
	WorldBoss_Force = 25,
	SecretDungeon_Enter = 26,
	SecretDungeon_Leave = 27,
	GuildExpedition = 28,
	BossExpedition = 29,
	BossWaveExpedition = 30,
	EmergencyEscape = 31,
	returnVillage = 32,
	AutoBattleReturn = 33,
	ChangeChannel = 34,
	AutoMove_ReturnToCenter = 35,
	UseInvenWarpItem = 36,
	EWarpContentsType_MAX = 37,
};

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
};

enum class EStyle_MirTextBlock : uint8_t {
	CustomStyle = 0,
	DefaultStyle = 1,
	DefaultStyle_Shadow = 2,
	EStyle_MAX = 3,
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

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
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

enum class EVerticalItemGrade : uint8_t {
	None = 0,
	AutoMake = 1,
	AutoMake_No_Normal = 2,
	Only_Normal = 3,
	Only_Magic = 4,
	Only_Rare = 5,
	Only_Epic = 6,
	Only_Legend = 7,
	EVerticalItemGrade_MAX = 8,
};

enum class ATTACK_VIEW_TARGE : uint8_t {
	TargetView = 0,
	AttackStand = 1,
	Stand = 2,
	ATTACK_VIEW_MAX = 3,
};

enum class ECopyType : uint8_t {
	MemCopy = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	ECopyType_MAX = 4,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EAutoQuestNormalState : uint8_t {
	None = 0,
	Running = 1,
	Pause = 2,
	Complete = 3,
	Wait = 4,
	EAutoQuestNormalState_MAX = 5,
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

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
};

enum class ERevivalKillerType : uint8_t {
	UNKNOWN = 0,
	USER = 1,
	MONSTER = 2,
	FALL_DEATH = 3,
	SELF_DEATH = 4,
	ERevivalKillerType_MAX = 5,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 3,
	Unknown = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5,
};

enum class NotificationGroupAlert : uint8_t {
	GroupAlertAll = 0,
	GroupAlertSummary = 1,
	GroupAlertChildren = 2,
	NotificationGroupAlert_MAX = 3,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
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
	MSM_MMLit = 11,
	MSM_MMLitHL = 12,
	MSM_MMFoliage = 13,
	MSM_MMWater = 14,
	MSM_NUM = 15,
	MSM_FromMaterialExpression = 16,
	MSM_MAX = 17,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class ETriggerScriptType : uint8_t {
	BATTLESTART = 0,
	BATTLESTOP = 1,
	CAMERAFOCUS = 2,
	CAMERASET = 3,
	CAMERASHAKE = 4,
	DELAY = 5,
	FADE = 6,
	HUDHIDE = 7,
	HUDSHOW = 8,
	MONSTERANIM = 9,
	MONSTERBB = 10,
	MONSTERHIDE = 11,
	MONSTERRUN = 12,
	NPCANIM = 13,
	NPCBB = 14,
	NPCHIDE = 15,
	NPCJUMP = 16,
	NPCRUN = 17,
	NPCSEARCHRUN = 18,
	PCBB = 19,
	SMALLTALK = 20,
	STRINGMESSAGE = 21,
	ETriggerScriptType_MAX = 22,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class EClothingWindMethod : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class EDungeonKind : uint8_t {
	Normal = 0,
	Boss = 1,
	EDungeonKind_MAX = 2,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class EARSessionTrackingFeature : uint8_t {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature_MAX = 4,
};

enum class ECurveType : uint8_t {
	ParticleLifePercent = 0,
	ParticleLifeTime = 1,
	EmitLifeTime = 2,
	ECurveType_MAX = 3,
};

enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
};

enum class EIAPType : uint8_t {
	NONE = 0,
	DEFAULT = 1,
	PRE_REWARD = 2,
	PROMOTION = 3,
	EIAPType_MAX = 4,
};

enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
};

enum class ESubmixFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5,
};

enum class EWSIAPResponseCode : uint8_t {
	SUCCESS = 0,
	ERROR_PAY_START_PARAMETER = 1,
	ERROR_PAY_START_DB_ERROR = 2,
	ERROR_PAY_START_IS_REFUND_USER = 3,
	ERROR_PAY_VERIFY_PARAMETER = 4,
	ERROR_PAY_VERIFY_NO_IAP_DATA = 5,
	ERROR_PAY_VERIFY_RECEIPT_FAILED = 6,
	ERROR_PAY_VERIFY_RECEIPT_DUPLICATED = 7,
	ERROR_PAY_VERIFY_RECEIPT_ALREADY_CONSUMED = 8,
	ERROR_PAY_VERIFY_CANCELED_RECEIPT = 9,
	ERROR_PAY_VERIFY_DB_ERROR = 10,
	ERROR_PAY_VERIFY_COMPLATED = 11,
	ERROR_PAY_VERIFY_NOT_ALLOWED_REGION = 12,
	ERROR_PAY_END_PARAMETER = 13,
	ERROR_PAY_END_NO_IAP_DATA = 14,
	ERROR_PAY_END_DB_ERROR = 15,
	ERROR_REFUND_LIST_NOT_AOS = 16,
	ERROR_REFUND_LIST_NO_REFUND = 17,
	ERROR_REFUND_LIST_DB_ERROR = 18,
	ERROR_PAY_REFUND_PARAMETER = 19,
	ERROR_PAY_REFUND_NO_REFUND = 20,
	ERROR_PAY_REFUND_ALREADY_PAY = 21,
	ERROR_PAY_REFUND_RECEIPT_FAILED = 22,
	ERROR_PAY_REFUND_DB_ERROR = 23,
	ERROR_PAY_VERIFY_GAME_SERVER_TIMEOUT = 24,
	ERROR_PAY_VERIFY_GAME_SERVER_FAIL = 25,
	ERROR_PAY_VERIFY_GAME_SERVER_INVALID_ACCOUNT = 26,
	ERROR_PAY_VERIFY_GAME_SERVER_DB_ERROR = 27,
	ERROR_PAY_VERIFY_GAME_SERVER_NO_PRODUCT = 28,
	ERROR_PAY_VERIFY_GAME_SERVER_NO_PAY_ID = 29,
	ERROR_PAY_VERIFY_GAME_SERVER_PAY_AMOUNT_OVER = 30,
	EWSIAPResponseCode_MAX = 31,
};

enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3,
};

enum class EUIParticlePropertyType : uint8_t {
	Float = 0,
	FloatRange = 1,
	FloatCurve = 2,
	FloatCurveRange = 3,
	Vector2D = 4,
	Vector2DRange = 5,
	LinearColorCurve = 6,
	LinearColorCurveRange = 7,
	EUIParticlePropertyType_MAX = 8,
};

enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class ACLRotationFormat : uint8_t {
	ACLRF_Quat_129 = 0,
	ACLRF_QuatDropW_97 = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3,
};

enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

enum class MON_GRADE : uint8_t {
	None = 0,
	Normal = 1,
	Elite = 2,
	MidBoss = 3,
	StageBoss = 4,
	MON_MAX = 5,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

enum class ECharMaterialParameterType : uint8_t {
	eCharMaterialParamType_Vector = 0,
	eCharMaterialParamType_Scalar = 1,
	eCharMaterialParamType_MAX = 2,
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

enum class EObjectStateTypeEnum : uint8_t {
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 5,
	Chaos_Max = 6,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class EADAndroidError : uint8_t {
	INTERNAL_ERROR = 0,
	INVALID_REQUEST = 1,
	NETWORK_ERROR = 2,
	NO_FILL = 3,
	EADAndroidError_MAX = 4,
};

enum class EClearSkillReserveReason : uint8_t {
	ChangeTarget_Character = 0,
	ChangeTarget_Object = 1,
	ChangeAutoState = 2,
	NormalAttackEnd = 3,
	SkillAttackEnd = 4,
	ManualInput = 5,
	Unknown = 6,
	EClearSkillReserveReason_MAX = 7,
};

enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
};

enum class NotificationBadgeIconType : uint8_t {
	NoBadge = 0,
	SmallBadge = 1,
	LargeBadge = 2,
	NotificationBadgeIconType_MAX = 3,
};

enum class AudioAttributesUsage : uint8_t {
	NotSpecified = 0,
	Media = 1,
	VoiceCommunication = 2,
	VoiceCommunicationSignalling = 3,
	Alarm = 4,
	Notification = 5,
	NotificationRingtone = 6,
	NotificationCommunicationRequest = 7,
	NotificationCommunicationInstant = 8,
	NotificationCommunicationDelayed = 9,
	NotificationEvent = 10,
	AssistanceAccessibility = 11,
	AssistanceNavigationGuidance = 12,
	AssistanceSonification = 13,
	Game = 14,
	Assistant = 15,
	AudioAttributesUsage_MAX = 16,
};

enum class EGetItemWayType : uint8_t {
	None = 0,
	Store = 1,
	Monster = 2,
	NamedMonster = 3,
	Gather = 4,
	Dungeon_Hunt = 5,
	Dungeon_Gather = 6,
	ItemMake = 7,
	Achievement = 8,
	DictionaryMonster = 9,
	OpenBox = 10,
	NPCStore = 11,
	MagicSquare = 12,
	Boss_Monster = 13,
	Quest_Mission = 14,
	Quest_Relation = 15,
	Mine = 16,
	Box_Search = 17,
	EGetItemWayType_MAX = 18,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3,
};

enum class ESlotBackgroundType : uint8_t {
	NONE = 0,
	RECT = 1,
	CIRCLE = 2,
	ESlotBackgroundType_MAX = 3,
};

enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

enum class ERevivalHelpState : uint8_t {
	UNKNOWN = 0,
	NOT_TAOIST = 1,
	NOT_HAVE_REVIVALSKILL = 2,
	NOT_ENOUGH_SKILLLEVEL = 3,
	NOT_NOT_IN_SKILLDECK = 4,
	NOT_ENABLE_COOLTIME = 5,
	ENABLE = 6,
	ERevivalHelpState_MAX = 7,
};

enum class ERichCurveCompressionFormat : uint8_t {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_MAX = 5,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class EPlayerClassID : uint8_t {
	NONE = 0,
	PCW = 1,
	PCM = 2,
	PCT = 3,
	PCA = 4,
	PCZ = 5,
	EPlayerClassID_MAX = 6,
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

enum class ELightUnits : uint8_t {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3,
};

enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 3,
	Webcam = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class ERankInfo : uint8_t {
	RANK_LEVEL = 0,
	RANK_COMBAT = 1,
	RANK_COLLECTION = 2,
	RANK_GUILD = 3,
	RANK_MAX = 4,
};

enum class EPartyHeaderType : uint8_t {
	eHeaderType_None = 0,
	eHeaderType_Normal = 1,
	eHeaderType_Elite = 2,
	eHeaderType_Labyrinth = 3,
	eHeaderType_UnderWorld = 4,
	eHeaderType_MagicSquare = 5,
	eHeaderType_Secret = 6,
	eHeaderType_MAX = 7,
};

enum class FFadeState : uint8_t {
	StopFade = 0,
	StartFadeIn = 1,
	StartFadeOut = 2,
	FFadeState_MAX = 3,
};

enum class EBehaviorType : uint8_t {
	Default = 0,
	Counter = 1,
	AutoBattle = 2,
	AutoGather = 3,
	EBehaviorType_MAX = 4,
};

enum class ETimeTicketType : uint8_t {
	TYPE_NONE = 0,
	TYPE_ACTION_POINT = 1,
	TYPE_HEART = 2,
	GUILD_DONATE = 3,
	ETimeTicketType_MAX = 4,
};

enum class EContentsLightType : uint8_t {
	NONE = 0,
	CUSTOMIZING_CHARACTER = 1,
	UI_CHARACTER = 2,
	UI_FORCE = 3,
	VEHICLE = 4,
	PET_DARK = 5,
	PET_BRIGHT = 6,
	EContentsLightType_MAX = 7,
};

enum class ESearhCircleType : uint8_t {
	Self = 0,
	Target = 1,
	ESearhCircleType_MAX = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
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

enum class EAppleTextureType : uint8_t {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5,
};

enum class ACLVectorFormat : uint8_t {
	ACLVF_Vector3_97 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2,
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
	PPI_MAX = 29,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EBoneDataType : uint8_t {
	LOCATION = 0,
	ROTATION = 1,
	SCALE = 2,
	EBoneDataType_MAX = 3,
};

enum class EMapMiniInfoDefSubType : uint8_t {
	None = 0,
	Portal = 1,
	Area = 2,
	ShopNPC = 3,
	Max = 4,
};

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
};

enum class EARTrackingQualityReason : uint8_t {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	EARTrackingQualityReason_MAX = 5,
};

enum class EWebPageMode : uint8_t {
	DEFAULT = 0,
	MODAL = 1,
	EWebPageMode_MAX = 2,
};

enum class EMonoChannelUpmixMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class EAnimInterpolationType : uint8_t {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2,
};

enum class EWindowTitleBarMode : uint8_t {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2,
};

enum class EConditionTriggerTargetType : uint8_t {
	PC = 0,
	MONSTER = 1,
	EConditionTriggerTargetType_MAX = 2,
};

enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class EMapMiniInfoStringPosType : uint8_t {
	None = 0,
	Top = 1,
	Bottom = 2,
	Left = 3,
	Right = 4,
	EMapMiniInfoStringPosType_MAX = 5,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class EBloomMethod : uint8_t {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2,
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

enum class EStyle_MirButton : uint8_t {
	CustomStyle = 0,
	EmptyStyle = 1,
	EStyle_MAX = 2,
};

enum class ESELECTE_STATE : uint8_t {
	NONE = 0,
	SELECTTING = 1,
	SELECTED = 2,
	ESELECTE_MAX = 3,
};

enum class EDirectiveType : uint8_t {
	None = 0,
	Circle = 1,
	Square = 2,
	Triangle = 3,
	Diamond = 4,
	Star = 5,
	One = 6,
	Two = 7,
	Three = 8,
	EDirectiveType_MAX = 9,
};

enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4,
};

enum class ECurveBlendOption : uint8_t {
	MaxWeight = 0,
	NormalizeByWeight = 1,
	BlendByWeight = 2,
	ECurveBlendOption_MAX = 3,
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

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4,
};

enum class ESubmixChannelFormat : uint8_t {
	Device = 0,
	Stereo = 1,
	Quad = 2,
	FiveDotOne = 3,
	SevenDotOne = 4,
	Ambisonics = 5,
	Count = 6,
	ESubmixChannelFormat_MAX = 7,
};

enum class GallerySourceType : uint8_t {
	PhotoLibrary = 0,
	PhotoAlbum = 1,
	GallerySourceType_MAX = 2,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
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

enum class SKILLCOST_TYPE : uint8_t {
	None = 0,
	Rage = 1,
	Mana = 2,
	Psychic = 3,
	Vitality = 4,
	Madness = 5,
	SKILLCOST_MAX = 6,
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

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class EMobileMSAASampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4,
};

enum class ECheckOwnedProductCode : uint8_t {
	NONE = 0,
	EMPTY_RECEIPT = 1,
	EMPTY_PAY_ID = 2,
	REQUEST_PURCHASE_VERIFY = 3,
	REQUEST_PURCHASE_VERIFY_RECEIPT_DUPLICATED = 4,
	INVALID_PURCHASE = 5,
	ECheckOwnedProductCode_MAX = 6,
};

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
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

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class TARGET_TYPE : uint8_t {
	ALL = 0,
	Enemy = 1,
	Myself = 2,
	Friend = 3,
	FriendAll = 4,
	TARGET_MAX = 5,
};

enum class QuestMissionType : uint8_t {
	None = 0,
	ScriptPlay = 1,
	TalkNPCFind = 2,
	TalkNPCFindToPos = 3,
	PhaseQuestComplete = 4,
	MoveTo = 5,
	ArrivePosWithBuff = 6,
	ArrivePosWithLevel = 7,
	ArrivePosWithItem = 8,
	ArrivePosWithAchive = 9,
	ArrivePosWithMainQuest = 10,
	ArrivePosWithRelation = 11,
	ArrivePosWithMission = 12,
	ArrivePosWithRequest = 13,
	ArrivePosWithMoney = 14,
	NPCToPos = 15,
	Warp = 16,
	TrackerClick = 17,
	MonsterKill_Relation = 18,
	GroupMonsterKill_Relation = 19,
	TalkNPC_Chance = 20,
	TalkNPC_EquipCheck = 21,
	TalkNPC_BuffCheck = 22,
	TalkNPC_ItemCheck = 23,
	TalkNPC_AchievementCheck = 24,
	TalkNPC_StateCheck = 25,
	TalkNPC_RelationCheck = 26,
	TalkNPC_QuestCheck = 27,
	TalkCheck_WithLevel = 28,
	TalkCheck_WithMission = 29,
	TalkCheck_WithRequest = 30,
	Gathering_Chance = 31,
	Gathering_EquipCheck = 32,
	Gathering_BuffCheck = 33,
	Gathering_ItemCheck = 34,
	Gathering_AchievementCheck = 35,
	Gathering_WithLevel = 36,
	Gathering_WithMainQuest = 37,
	Gathering_WithRelation = 38,
	Phase_Relation = 39,
	ItemUsage = 40,
	ItemMake_SearchedTarget = 41,
	CheckPlayDataForceOpened = 42,
	CheckPlayDataForceBloodOpened = 43,
	CheckPlayDataForceUpgradedCount = 44,
	CheckPlayDataForceUpgradeNLevel = 45,
	CheckPlayDataSmeltingItemDefLev = 46,
	CheckPlayDataEnterStage = 47,
	CheckPlayDataCondition = 48,
	Level = 49,
	CombatPoint = 50,
	ItemGet = 51,
	MonsterKill = 52,
	MonsterKill_WithBuff = 53,
	KillMonsterLastAttack = 54,
	KillMonsterLastAttackAlone = 55,
	KillMonsterAloneOrFiveParty = 56,
	KillMonsterAloneOrFifteenParty = 57,
	MonsterFindKill = 58,
	MonsterGroupKill = 59,
	MonsterGroupKill_WithBuff = 60,
	KillGroupMonsterLastAttack = 61,
	KillGroupMonsterLastAttackAlone = 62,
	KillGroupMonsterAloneOrFiveParty = 63,
	KillGroupMonsterAloneOrFifteenParty = 64,
	StageMonsterKill = 65,
	MonsterGradeKill = 66,
	QuestItemGetFromMonster = 67,
	ObjectQuestItemGet = 68,
	ObjectQuestItemGetNoShare = 69,
	GatheringObjectType = 70,
	GatheringObjectTypeNoShare = 71,
	GatheringAllObject = 72,
	GatherObjectOnAllStage = 73,
	Learn = 74,
	ItemMake = 75,
	TryItemTypeMake = 76,
	DeliveryCost = 77,
	DeliveryItem = 78,
	TalkNPC_DeliveryCost = 79,
	TalkNPC_DeliveryItem = 80,
	ItemUpgrade = 81,
	ForceBloodOpened = 82,
	ForceBloodNLevel = 83,
	ForceBloodUpgradeCount = 84,
	MissionClearCheckInStage = 85,
	UpgradeEnchantCount = 86,
	QuestCount = 87,
	StageEnterCount = 88,
	StageTypeEnterCount = 89,
	CompleteQuestCount = 90,
	QuestEnd = 91,
	Max = 92,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class EToolTipLocation : uint8_t {
	Auto = 0,
	LeftTop = 1,
	LeftBottom = 2,
	RightTop = 3,
	RightBottom = 4,
	LeftCenter = 5,
	RightCenter = 6,
	CenterTop = 7,
	CenterBottom = 8,
	EToolTipLocation_MAX = 9,
};

enum class EGameOptionSliderTitleLocation : uint8_t {
	None = 0,
	Top = 1,
	Left = 2,
	EGameOptionSliderTitleLocation_MAX = 3,
};

enum class EUVOutput : uint8_t {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class PANEL_SIDE : uint8_t {
	NONE = 0,
	SIDE_LEFT = 1,
	SIDE_RIGHT = 2,
	PANEL_MAX = 3,
};

enum class EInertializationSpace : uint8_t {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3,
};

enum class EAndroidGoogleSignInStatusCode : uint8_t {
	SUCCESS = 0,
	ERROR_FAILED = 1,
	ERROR_CANCELED = 2,
	ERROR_CURRENTLY_IN_PROGRESS = 3,
	EAndroidGoogleSignInStatusCode_MAX = 4,
};

enum class EAutoBattleState : uint8_t {
	None = 0,
	AutoBattle_NoSkill = 1,
	AutoBattle_Skill = 2,
	AutoBattle_Gather = 3,
	EAutoBattleState_MAX = 4,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
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

enum class EStyle_MirTileView : uint8_t {
	CustomStyle = 0,
	EmptyStyle = 1,
	EStyle_MAX = 2,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class ESlateDebuggingInputEvent : uint8_t {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	MouseButtonDown = 3,
	MouseButtonUp = 4,
	MouseButtonDoubleClick = 5,
	MouseWheel = 6,
	TouchStart = 7,
	TouchEnd = 8,
	DragDetected = 9,
	DragEnter = 10,
	DragLeave = 11,
	DragOver = 12,
	DragDrop = 13,
	DropMessage = 14,
	KeyDown = 15,
	KeyUp = 16,
	KeyChar = 17,
	AnalogInput = 18,
	TouchGesture = 19,
	COUNT = 20,
	ESlateDebuggingInputEvent_MAX = 21,
};

enum class EDuel_CountState : uint8_t {
	None = 0,
	Start = 1,
	InSafeArea = 2,
	RingOut = 3,
	EDuel_MAX = 4,
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

enum class EGuildemberSlotBits : uint8_t {
	Slot1 = 0,
	Slot2 = 1,
	Master = 2,
	EGuildemberSlotBits_MAX = 3,
};

enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
};

enum class AnalyticsParameter : uint8_t {
	achievement_id = 0,
	aclid = 1,
	affiliation = 2,
	campaign = 3,
	character = 4,
	checkout_step = 5,
	checkout_option = 6,
	content = 7,
	content_type = 8,
	coupon = 9,
	cp1 = 10,
	creative_name = 11,
	creative_slot = 12,
	currency = 13,
	destination = 14,
	end_date = 15,
	flight_number = 16,
	group_id = 17,
	index = 18,
	item_brand = 19,
	item_category = 20,
	item_id = 21,
	item_location_id = 22,
	item_name = 23,
	item_list = 24,
	item_variant = 25,
	level = 26,
	location = 27,
	medium = 28,
	number_of_nights = 29,
	number_of_passengers = 30,
	number_of_rooms = 31,
	origin = 32,
	price = 33,
	quantity = 34,
	score = 35,
	search_term = 36,
	shipping = 37,
	sign_up_method = 38,
	method = 39,
	source = 40,
	start_date = 41,
	tax = 42,
	term = 43,
	transaction_id = 44,
	travel_class = 45,
	value = 46,
	virtual_currency_name = 47,
	level_name = 48,
	success = 49,
	extend_session = 50,
	AnalyticsParameter_MAX = 51,
};

enum class ECharacterType : uint8_t {
	None = 0,
	PC = 1,
	Monster = 2,
	NPC = 3,
	ECharacterType_MAX = 4,
};

enum class EClassType : uint8_t {
	NONE = 0,
	PCW = 1,
	PCM = 2,
	PCT = 3,
	PCA = 4,
	PCZ = 5,
	EClassType_MAX = 6,
};

enum class EPostureDeviceState : uint8_t {
	POSTURE_UNKNOWN = 0,
	POSTURE_CLOSED = 1,
	POSTURE_HALF_OPENED = 2,
	POSTURE_OPENED = 3,
	POSTURE_FLIPPED = 4,
	POSTURE_MAX = 5,
};

enum class ESlotClassOption : uint8_t {
	Slot_All = 0,
	Slot_Warror = 1,
	Slot_Magician = 2,
	Slot_Taoist = 3,
	Slot_Assassin = 4,
	Slot_Berserker = 5,
	Slot_Lock = 6,
	Slot_MAX = 7,
};

enum class WEMIX_METHOD : uint8_t {
	NONE = 0,
	exchangeToItem = 1,
	exchangeToToken = 2,
	seal = 3,
	unseal = 4,
	mint = 5,
	WEMIX_MAX = 6,
};

enum class EProgressGuageState : uint8_t {
	Same = 0,
	Increase = 1,
	Decrease = 2,
	EProgressGuageState_MAX = 3,
};

enum class EGoogleRequestMethod : uint8_t {
	GET = 0,
	POST = 1,
	EGoogleRequestMethod_MAX = 2,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
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

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class EItemGetWayLinkType : uint8_t {
	NONE = 0,
	MONSTER = 1,
	OBJECT = 2,
	SHOP_GOODS = 3,
	NPC_SHOP_GOODS = 4,
	ITEM_MAKE = 5,
	ACHIEVEMENT = 6,
	ITEM_RANDOM_GET = 7,
	ITEM_PACKAGE = 8,
	QUEST_RELATION = 9,
	QUEST_DAILY = 10,
	QUEST_MISSION = 11,
	QUEST_REQUEST = 12,
	JEWEL_UPGRADE = 13,
	INSTANCE_DUNGEON_INFO = 14,
	GREAT_BUILDING_STEP = 15,
	BOSS_WORLD = 16,
	GUILD_EXPEDITION = 17,
	ITEM = 18,
	QUEST_DAILY_PLUS_REWARD = 19,
	GACHA_INFO = 20,
	ITEM_MATERIAL_COMPOSE = 21,
	MAIN_QUEST = 22,
	USER_EVENT = 23,
	SHOP_GOODS_ITEM_PACKAGE = 24,
	GUILD_SHOP = 25,
	DUNGEON_SHOP = 26,
	QUEST_DROP_ITEM = 27,
	ITEM_TRANSCENDENCE_DEFINE = 28,
	EItemGetWayLinkType_MAX = 29,
};

enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4,
};

enum class KillLogCampType : uint8_t {
	None = 0,
	Defence = 1,
	Offence = 2,
	KillLogCampType_MAX = 3,
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

enum class EFirstTutorialType : uint8_t {
	NONE = 0,
	VirtualJoyStick = 1,
	QuestTracker = 2,
	NpcQuestMark = 3,
	HudHideQuest = 4,
	Battle = 5,
	EFirstTutorialType_MAX = 6,
};

enum class ETargetGaugeState : uint8_t {
	Same = 0,
	Increase = 1,
	Decrease = 2,
	ETargetGaugeState_MAX = 3,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EUserGaugeState : uint8_t {
	Same = 0,
	Increase = 1,
	Decrease = 2,
	EUserGaugeState_MAX = 3,
};

enum class EAutoFlightGroup : uint8_t {
	GROUP_A = 0,
	GROUP_B = 1,
	GROUP_C = 2,
	GROUP_MAX = 3,
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

enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

enum class EImportanceWeight : uint8_t {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
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

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4,
};

enum class EUIActionMessageWidgetType : uint8_t {
	None = 0,
	Headline = 1,
	HudBottom = 2,
	HudGetItem = 3,
	Top = 4,
	Screen = 5,
	ContentsGetItem = 6,
	QuickItemAction = 7,
	GM_Message = 8,
	Max = 9,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3,
};

enum class AIRWALKBAN : uint8_t {
	AIRWALK_NOLIMITE = 0,
	AIRWALK_FIRSTJUMP = 1,
	AIRWALK_SECONDJUMP = 2,
	AIRWALK_DISABLE = 3,
	AIRWALK_MAX = 4,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
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

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class EGuildWarObjectKind : uint8_t {
	NONE = 0,
	RevivalFlag = 1,
	EGuildWarObjectKind_MAX = 2,
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

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

enum class CHAT_CHANNEL_TYPE : uint8_t {
	NONE = 0,
	WORLD = 1,
	GUILD = 2,
	PARTY = 3,
	SYSTEM = 4,
	WHISPER = 5,
	ALLIANCE = 6,
	CHAT_CHANNEL_MAX = 7,
};

enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EMONSTER_FACTION : uint8_t {
	Neutral = 0,
	Friendly = 1,
	Hostile = 2,
	Hostile2 = 3,
	Hostile3 = 4,
	Hostile4 = 5,
	Hostile5 = 6,
	EMONSTER_MAX = 7,
};

enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	EMovieSceneBlendType_MAX = 4,
};

enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
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

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class EWidgetOpenAllowTable : uint8_t {
	DEFAULT = 0,
	ALL = 1,
	CINEMA = 2,
	HUD = 3,
	MESSAGE = 4,
	CHEAT = 5,
	REVIVAL = 6,
	QUEST_POPUP = 7,
	EWidgetOpenAllowTable_MAX = 8,
};

enum class ERevivalReaction : uint8_t {
	NONE = 0,
	EXCUTE_HELP_REVIVAL = 1,
	EXCUTE_SAFE_REVIVAL = 2,
	EXCUTE_IMMEDIATE_REVIVAL = 3,
	EXCUTE_REVIVAL_FREE = 4,
	OPEN_CONTENTS = 5,
	ERevivalReaction_MAX = 6,
};

enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

enum class EPhotoModeOptionType : uint8_t {
	NONE = 0,
	Actor_My = 1,
	Actor_Other = 2,
	Actor_NPC = 3,
	UI_My = 4,
	UI_Other = 5,
	UI_NPC = 6,
	GuildMark_My = 7,
	GuildMark_Other = 8,
	GuildName_My = 9,
	GuildName_Other = 10,
	MAX = 11,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
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

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class MapViewType : uint8_t {
	Standard = 0,
	Satellite = 1,
	Hybrid = 2,
	Transit = 3,
	MapViewType_MAX = 4,
};

enum class ECommonBtnDesignType : uint8_t {
	NONE = 0,
	MAIN = 1,
	SUB = 2,
	RECT = 3,
	CIRCLE = 4,
	ROUND = 5,
	ECommonBtnDesignType_MAX = 6,
};

enum class WEMIX_PARAM : uint8_t {
	contract = 0,
	amount = 1,
	tokenID = 2,
	itemURI = 3,
	user = 4,
	nonce = 5,
	method = 6,
	WEMIX_MAX = 7,
};

enum class UserInterfaceIdiom : uint8_t {
	Unspecified = 0,
	Phone = 1,
	Pad = 2,
	AppleTV = 3,
	CarPlay = 4,
	UserInterfaceIdiom_MAX = 5,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_ACLDefault = 3,
	AKF_ACLCustom = 4,
	AKF_ACLSafe = 5,
	AKF_MAX = 6,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class ESkillCoolState : uint8_t {
	None = 0,
	Global_Init = 1,
	Global_After = 2,
	Waiting = 3,
	Cool = 4,
	ESkillCoolState_MAX = 5,
};

enum class EFootStepSoundType : uint8_t {
	None = 0,
	Player = 1,
	Horse = 2,
	Tiger = 3,
	Pig = 4,
	WoodenFish = 5,
	EFootStepSoundType_MAX = 6,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
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

enum class EItemGetWayFilterType : uint8_t {
	NONE = 0,
	FILTER_COMBATPOINT = 1,
	FILTER_LEVEL = 2,
	EItemGetWayFilterType_MAX = 3,
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

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EControlButtonType : uint8_t {
	ControlBtn_Skill = 0,
	ControlBtn_Jump = 1,
	ControlBtn_Avoid = 2,
	ControlBtn_MAX = 3,
};

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
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

enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3,
};

enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
};

enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class ECastleContents : uint8_t {
	NONE = 0,
	DOMINION_TITLE = 1,
	DOMINION_ADMIN = 2,
	DOMINION_WANTED = 3,
	BUFF = 4,
	PRIZE_MAIN = 5,
	PRIZE_SUB = 6,
	TAX_RATE_CHANGE = 7,
	TAX_WITHDRAWAL = 8,
	DONATION = 9,
	STORAGE = 10,
	GuildMember = 11,
	ECastleContents_MAX = 12,
};

enum class E_NOTICE_TARGET : uint8_t {
	None = 0,
	AllUser = 1,
	TargetOnly = 2,
	Party = 3,
	E_NOTICE_MAX = 4,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
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

enum class ERefundState : uint8_t {
	REFUNDED = 0,
	REPAYMENT_COMPLETED = 1,
	ERefundState_MAX = 2,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class ESwitchBox : uint8_t {
	SWITCH_OFF = 0,
	SWITCH_ON = 1,
	SWITCH_MAX = 2,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class EItemGetWayGather : uint8_t {
	GatherNormal = 0,
	GatherSpecial = 1,
	EItemGetWayGather_MAX = 2,
};

enum class AudioAttributesContentType : uint8_t {
	Unknown = 0,
	Speech = 1,
	Music = 2,
	Movie = 3,
	Sonification = 4,
	AudioAttributesContentType_MAX = 5,
};

enum class EOccupationCommandSlotType : uint8_t {
	NONE = 0,
	CIRCLE = 1,
	SQUARE = 2,
	TRIANGLE = 3,
	DIAMOND = 4,
	STAR = 5,
	ONE = 6,
	TWO = 7,
	THREE = 8,
	EOccupationCommandSlotType_MAX = 9,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class ELOGTYPE : uint8_t {
	FIXED = 0,
	LIST = 1,
	ELOGTYPE_MAX = 2,
};

enum class BatteryHealth : uint8_t {
	UnknownHealth = 0,
	Good = 1,
	Overheat = 2,
	Dead = 3,
	OverVoltage = 4,
	UnspecifiedFailure = 5,
	Cold = 6,
	BatteryHealth_MAX = 7,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
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

enum class EFacebookRequestMethod : uint8_t {
	GET = 0,
	POST = 1,
	EFacebookRequestMethod_MAX = 2,
};

enum class EOccupationCategoryType : uint8_t {
	NONE = 0,
	State = 1,
	Auction = 2,
	GovernmentOffice = 3,
	PayrollManagement = 4,
	TaxInformation = 5,
	AreaManagement = 6,
	EOccupationCategoryType_MAX = 7,
};

enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

enum class EPetGuidePosType : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Top = 3,
	Bottom = 4,
	Max = 5,
};

enum class AIRWALK_TYPE : uint8_t {
	None = 0,
	First = 1,
	FirstEnd = 2,
	Second = 3,
	WallJump = 4,
	Dash = 5,
	DashJumpReady = 6,
	DashJump = 7,
	Land = 8,
	LandEnd = 9,
	Fall = 10,
	Max = 11,
};

enum class EARTextureType : uint8_t {
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2,
	EARTextureType_MAX = 3,
};

enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class SKILL_STATE_TYPE : uint8_t {
	Hit = 0,
	StateControl = 1,
	MoveControl = 2,
	SKILL_STATE_MAX = 3,
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

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class ESiegeCommandMacroType : uint8_t {
	ATTACK = 0,
	ASSEMBLE = 1,
	DEFECNCE = 2,
	RETREAT = 3,
	WAIT = 4,
	MAX = 5,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
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

enum class EItemMakeAgency_FailSlot : uint8_t {
	SLOT_1 = 0,
	SLOT_2 = 1,
	SLOT_3 = 2,
	SLOT_4 = 3,
	MAX = 4,
};

enum class EInitialEntrySequenceType : uint8_t {
	None = 0,
	Sequence = 1,
	Movie = 2,
	EInitialEntrySequenceType_MAX = 3,
};

enum class ETouchPositionType : uint8_t {
	VIEWPORT_POSITION = 0,
	VIEWPORT_PIXEL = 1,
	LOCAL = 2,
	TYPE_ABSOLUTE = 3,
	ETouchPositionType_MAX = 4,
};

enum class EMirUIActionType : uint8_t {
	Goods = 0,
	TotalMenu = 1,
	Login = 2,
	Message = 3,
	Forge = 4,
	Transfer = 5,
	Mastery = 6,
	MakeItem = 7,
	Jewel = 8,
	MagicStone = 9,
	Forge_LevelUp = 10,
	Forge_Smelting = 11,
	Forge_OptionChange = 12,
	Forge_Popup_OptionChange = 13,
	Unsealing = 14,
	HUD = 15,
	HUD_SkillSet = 16,
	HUD_Quest = 17,
	HUD_Chat = 18,
	HUD_QuickSlot = 19,
	HUD_Total_QuickSlot = 20,
	HUD_Total_QuickSlot_Potion = 21,
	HUD_Total_QuickSlot_Battle = 22,
	HUD_TargetList = 23,
	Skill = 24,
	NPCShop = 25,
	UIShop = 26,
	DailyWork = 27,
	Achievement = 28,
	CharInfo = 29,
	CharInfoDetail = 30,
	CharAbility = 31,
	EquipInfo = 32,
	Costume = 33,
	Vehicle = 34,
	Pet = 35,
	QuestObtain = 36,
	QuestAccept = 37,
	PopUpQuestDelivery = 38,
	QuestNormal = 39,
	ReQuest = 40,
	QuestRelation = 41,
	PopupPackage = 42,
	Force = 43,
	CollectionBook = 44,
	Dungeon = 45,
	DungeonShop = 46,
	Guild = 47,
	GuildDev = 48,
	GuildShop = 49,
	GuildExpedition = 50,
	EliteDungeon = 51,
	Labyrinth = 52,
	UnderWorld = 53,
	CharacterSelect = 54,
	ClassSelect = 55,
	Customizing = 56,
	Revival = 57,
	Occupation = 58,
	Occupation_Auction = 59,
	Occupation_Board = 60,
	Occupation_Observer = 61,
	StrongPoint = 62,
	Mail = 63,
	ItemInfo = 64,
	ItemInfo_Simple = 65,
	WorldBoss = 66,
	MagicSquare = 67,
	SecretDungeon = 68,
	WorldMap = 69,
	NPCMaking = 70,
	SleepMode = 71,
	Friend = 72,
	RecommendEquip = 73,
	Party = 74,
	ItemGetWay = 75,
	GameOption = 76,
	QuestNormalAuto = 77,
	Npc_Exchange = 78,
	PKRecord = 79,
	Wanted = 80,
	GreatBuilding = 81,
	Ranking = 82,
	PKPenalty = 83,
	Durability = 84,
	CollectionBookReward = 85,
	Auction = 86,
	Material_Change = 87,
	FT_Exchange = 88,
	Dominion = 89,
	DominionWanted = 90,
	DominionStorage = 91,
	Synthesis = 92,
	UserEvent = 93,
	UserEvent_BattlePass = 94,
	Teleport = 95,
	TermItem = 96,
	ItemCollection = 97,
	ItemTooltip = 98,
	ChannelWaiting = 99,
	GatherList = 100,
	ItemExchange = 101,
	KeySetting = 102,
	Guide = 103,
	IndividualStorage = 104,
	ServerChange = 105,
	ItemTranscend = 106,
	ServerVisit = 107,
	ClosedTraining = 108,
	ClassPhase = 109,
	NFTCharacterTrade = 110,
	NFT_Import = 111,
	XdracoStorage = 112,
	XdracoSealing = 113,
	MysticalPiece = 114,
	EMirUIActionType_MAX = 115,
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

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class EAirAbsorptionMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2,
};

enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class EOccupationAuctionButtonType : uint8_t {
	NONE = 0,
	AUCTION_BIDDING = 1,
	ALLIANCE_INVITE = 2,
	START_BATTLE = 3,
	EOccupationAuctionButtonType_MAX = 4,
};

enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
};

enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

enum class DateTimePickerType : uint8_t {
	DatePicker = 0,
	TimePicker = 1,
	DateTimePicker = 2,
	CountdownTimer = 3,
	DateTimePickerType_MAX = 4,
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

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3,
};

enum class EWeaponMaterialParameterType : uint8_t {
	eWeaponMaterialParamType_Vector = 0,
	eWeaponMaterialParamType_Scalar = 1,
	eWeaponMaterialParamType_MAX = 2,
};

enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

enum class ESubMenuType : uint8_t {
	None = 0,
	FieldBoss = 1,
	WorldBoss = 2,
	MAX_INDEX = 3,
	ESubMenuType_MAX = 4,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

enum class EMiniGameMonsterGrade : uint8_t {
	Normal = 0,
	Advenced = 1,
	Boss = 2,
	EMiniGameMonsterGrade_MAX = 3,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class EMarketUpdateStatus : uint8_t {
	NONE = 0,
	UPDATE_SELECT = 1,
	UPDATE_FORCE = 2,
	EMarketUpdateStatus_MAX = 3,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
};

enum class ESlotEmptyType : uint8_t {
	NONE = 0,
	DEFAULT_BG = 1,
	COLLAPSED = 2,
	DUMMY = 3,
	ESlotEmptyType_MAX = 4,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
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

enum class TextureGroup : uint8_t {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_WorldNoLOD = 3,
	TEXTUREGROUP_WorldNormalMapNOLOD = 4,
	TEXTUREGROUP_WorldSpecularNOLOD = 5,
	TEXTUREGROUP_Character = 6,
	TEXTUREGROUP_CharacterNormalMap = 7,
	TEXTUREGROUP_CharacterSpecular = 8,
	TEXTUREGROUP_CharacterNoLOD = 9,
	TEXTUREGROUP_CharacterNormalMapNoLOD = 10,
	TEXTUREGROUP_CharacterSpecularNoLOD = 11,
	TEXTUREGROUP_NPC = 12,
	TEXTUREGROUP_NPCNormalMap = 13,
	TEXTUREGROUP_NPCSpecular = 14,
	TEXTUREGROUP_NPCNoLOD = 15,
	TEXTUREGROUP_NPCNormalMapNoLOD = 16,
	TEXTUREGROUP_NPCSpecularNoLOD = 17,
	TEXTUREGROUP_Weapon = 18,
	TEXTUREGROUP_WeaponNormalMap = 19,
	TEXTUREGROUP_WeaponSpecular = 20,
	TEXTUREGROUP_Vehicle = 21,
	TEXTUREGROUP_VehicleNormalMap = 22,
	TEXTUREGROUP_VehicleSpecular = 23,
	TEXTUREGROUP_Cinematic = 24,
	TEXTUREGROUP_Effects = 25,
	TEXTUREGROUP_Effects_LOD = 26,
	TEXTUREGROUP_EffectsNotFiltered = 27,
	TEXTUREGROUP_Skybox = 28,
	TEXTUREGROUP_UI = 29,
	TEXTUREGROUP_Lightmap = 30,
	TEXTUREGROUP_RenderTarget = 31,
	TEXTUREGROUP_MobileFlattened = 32,
	TEXTUREGROUP_ProcBuilding_Face = 33,
	TEXTUREGROUP_ProcBuilding_LightMap = 34,
	TEXTUREGROUP_Shadowmap = 35,
	TEXTUREGROUP_ColorLookupTable = 36,
	TEXTUREGROUP_Terrain_Heightmap = 37,
	TEXTUREGROUP_Terrain_Weightmap = 38,
	TEXTUREGROUP_Bokeh = 39,
	TEXTUREGROUP_IESLightProfile = 40,
	TEXTUREGROUP_Pixels2D = 41,
	TEXTUREGROUP_HierarchicalLOD = 42,
	TEXTUREGROUP_Impostor = 43,
	TEXTUREGROUP_ImpostorNormalDepth = 44,
	TEXTUREGROUP_8BitData = 45,
	TEXTUREGROUP_16BitData = 46,
	TEXTUREGROUP_Project01 = 47,
	TEXTUREGROUP_Project02 = 48,
	TEXTUREGROUP_Project03 = 49,
	TEXTUREGROUP_Project04 = 50,
	TEXTUREGROUP_Project05 = 51,
	TEXTUREGROUP_Project06 = 52,
	TEXTUREGROUP_Project07 = 53,
	TEXTUREGROUP_Project08 = 54,
	TEXTUREGROUP_Project09 = 55,
	TEXTUREGROUP_Project10 = 56,
	TEXTUREGROUP_MAX = 57,
};

enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
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
	PF_MAX = 69,
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

enum class EWarpState : uint8_t {
	None = 0,
	Cast = 1,
	Start = 2,
	End = 3,
	EWarpState_MAX = 4,
};

enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class ETeleportType : uint8_t {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class EFacebookImageFormat : uint8_t {
	JPG = 0,
	PNG = 1,
	BMP = 2,
	ICO = 3,
	EXR = 4,
	ICNS = 5,
	EFacebookImageFormat_MAX = 6,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class E_CARDINALPOINTS : uint8_t {
	None = 0,
	RightSide = 1,
	LeftSide = 2,
	RearSide = 3,
	FrontSide = 4,
	E_MAX = 5,
};

enum class EACTION_RESULT : uint8_t {
	SUCCESS = 0,
	FAIL = 1,
	EACTION_MAX = 2,
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

enum class EBoneFilterActionOption : uint8_t {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3,
};

enum class EFrameType : uint8_t {
	Basic = 0,
	SkillExtend = 1,
	EFrameType_MAX = 2,
};

enum class ECameraModeType : uint8_t {
	FIELD_AUTO = 0,
	FIELD_QUATERVIEW = 1,
	MANUAL_CONTROL = 2,
	CAMERASET = 3,
	NPCDIALOGUE = 4,
	MONSTERSKILL = 5,
	LOCKON_TARGET = 6,
	ECameraModeType_MAX = 7,
};

enum class EBroadCastType : uint8_t {
	Normal = 0,
	Wide = 1,
	VeryWide = 2,
	NoLimit = 3,
	EBroadCastType_MAX = 4,
};

enum class ETotalMenuSetPosition : uint8_t {
	BP_DefaultNone = 0,
	Top = 1,
	Bottom = 2,
	ETotalMenuSetPosition_MAX = 3,
};

enum class ATTACK_USE_TYPE : uint8_t {
	TargetAtk = 0,
	InstantAtk = 1,
	ATTACK_USE_MAX = 2,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class E_TARGET_TYPE : uint8_t {
	AnyOne = 0,
	Monter = 1,
	User = 2,
	Npc = 3,
	E_TARGET_MAX = 4,
};

enum class EClothMassMode : uint8_t {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class EUpdateWeaponReason : uint8_t {
	ChangeItemParts = 0,
	UpdateCostume = 1,
	ChangeFeature = 2,
	SetMining = 3,
	ClearMining = 4,
	EnterIdle = 5,
	EUpdateWeaponReason_MAX = 6,
};

enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5,
};

enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4,
};

enum class ValueSource : uint8_t {
	kValueSourceStaticValue = 0,
	kValueSourceRemoteValue = 1,
	kValueSourceDefaultValue = 2,
	ValueSource_MAX = 3,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
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

enum class InterruptionFilter : uint8_t {
	FilterUnknown = 0,
	FIlterAll = 1,
	FilterPriority = 2,
	FilterNone = 3,
	FilterAlarms = 4,
	InterruptionFilter_MAX = 5,
};

enum class EAutoCameraType : uint8_t {
	NONE = 0,
	DEFAULT = 1,
	MANUAL_MOVING = 2,
	WALK_AUTO_MOVING = 3,
	RIDE_AUTO_MOVING = 4,
	AIR_WALK = 5,
	MANUAL_BATTLE = 6,
	AUTO_BATTLE = 7,
	SKILL_ING = 8,
	SKILL_END = 9,
	EAutoCameraType_MAX = 10,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class ECommonBtnStateType : uint8_t {
	Able = 0,
	Unable = 1,
	ECommonBtnStateType_MAX = 2,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

enum class EMakeType : uint8_t {
	NONE = 0,
	MAKE_UI = 1,
	MAKE_NPC = 2,
	MAKE_NPC_EXCHANGE = 3,
	MAKE_UI_SPECIAL = 4,
	MAKE_NPC_SPECIAL_EXT = 5,
	MAKE_UI_MATERIAL = 6,
	MAKE_UI_USE = 7,
	MAKE_UI_AGENCY = 8,
	MAKE_NPC_SPECIAL = 9,
	EMakeType_MAX = 10,
};

enum class EPhotoModeCameraMoveButton : uint8_t {
	NONE = 0,
	UP = 1,
	LEFT = 2,
	RIGHT = 3,
	DOWN = 4,
	EPhotoModeCameraMoveButton_MAX = 5,
};

enum class EWaypointSubType : uint8_t {
	NONE = 0,
	MINING_OBJECT = 1,
	GATHER_OBJECT = 2,
	BLACK_IRON = 3,
	JINKI = 4,
	EWaypointSubType_MAX = 5,
};

enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
};

enum class LOAD_RESULT : uint8_t {
	LOAD_SUCCESS = 0,
	LOAD_FAIL = 1,
	LOAD_MAX = 2,
};

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class EDominionID : uint8_t {
	MAIN_CASTLE_ID = 0,
	SUB_CASTLE_ID = 1,
	EDominionID_MAX = 2,
};

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
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

enum class EReflectionSourceType : uint8_t {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2,
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

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
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

enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

enum class EMonsterAttackType : uint8_t {
	None = 0,
	Melee = 1,
	Range = 2,
	EMonsterAttackType_MAX = 3,
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

enum class EMultiBoxType : uint8_t {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	Menu = 3,
	ButtonRow = 4,
	ToolMenuBar = 5,
	EMultiBoxType_MAX = 6,
};

enum class ECostType : uint8_t {
	TYPE_NONE = 0,
	TYPE_COIN = 1,
	TYPE_SILVER_COIN = 2,
	TYPE_GOLD_COIN = 3,
	TYPE_GOLD_COIN_FREE = 4,
	TYPE_SAPPHIRE = 5,
	TYPE_GOLD_COIN_EVENT = 6,
	TYPE_ENERGY_POINT = 7,
	TYPE_BLACK_IRON = 8,
	TYPE_GUILD_POINT = 9,
	TYPE_ACCELERATION_POINT = 10,
	TYPE_DRAGON_JADE = 11,
	TYPE_ANCIENT_COIN = 12,
	TYPE_GUILD_GOLD = 13,
	TYPE_GUILD_COIN = 14,
	TYPE_GUILD_BLACKIRON = 15,
	TYPE_GUILD_SPIRIT = 16,
	TYPE_MAX = 17,
};

enum class ChildEventType : uint8_t {
	Added = 0,
	Changed = 1,
	Moved = 2,
	Removed = 3,
	Cancelled = 4,
	ChildEventType_MAX = 5,
};

enum class ETextureRotationDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	ETextureRotationDirection_MAX = 4,
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

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
};

enum class ETutorialGuidStrPosType : uint8_t {
	None = 0,
	LeftTop = 1,
	LeftBottom = 2,
	RightTop = 3,
	RightBottom = 4,
	Left = 5,
	Right = 6,
	Top = 7,
	Bottom = 8,
	Max = 9,
};

enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

enum class EAuctionTabType : uint8_t {
	None = 0,
	Search = 1,
	Sale = 2,
	Calculate = 3,
	History = 4,
	Max = 5,
};

enum class EMiniGamePlayerState : uint8_t {
	Idle = 0,
	Run = 1,
	Atk1 = 2,
	Atk2 = 3,
	Atk3 = 4,
	Hit = 5,
	Avoid = 6,
	Stu = 7,
	EMiniGamePlayerState_MAX = 8,
};

enum class ETownNPCPositionType : uint8_t {
	NONE = 0,
	POTION = 1,
	GOODS = 2,
	MAX = 3,
};

enum class EBattlePassMenu : uint8_t {
	eMenu_Reward = 0,
	eMenu_Mission = 1,
	eMenu_Max = 2,
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
	MP_Normal = 9,
	MP_WorldPositionOffset = 10,
	MP_WorldDisplacement = 11,
	MP_TessellationMultiplier = 12,
	MP_SubsurfaceColor = 13,
	MP_CustomData0 = 14,
	MP_CustomData1 = 15,
	MP_AmbientOcclusion = 16,
	MP_Refraction = 17,
	MP_CustomizedUVs0 = 18,
	MP_CustomizedUVs1 = 19,
	MP_CustomizedUVs2 = 20,
	MP_CustomizedUVs3 = 21,
	MP_CustomizedUVs4 = 22,
	MP_CustomizedUVs5 = 23,
	MP_CustomizedUVs6 = 24,
	MP_CustomizedUVs7 = 25,
	MP_PixelDepthOffset = 26,
	MP_ShadingModel = 27,
	MP_MaterialAttributes = 28,
	MP_CustomOutput = 29,
	MP_MAX = 30,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class EMirSoundDataType : uint8_t {
	VEHICLE_OFF = 0,
	GET_ENERGY = 1,
	PC_REVIVAL = 2,
	BUTTON_CLICK_COMMON = 3,
	DROP_COIN = 4,
	EMirSoundDataType_MAX = 5,
};

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2,
};

enum class EMirSoundClass : uint8_t {
	MASTER = 0,
	BGM = 1,
	AMBIENT = 2,
	SFX = 3,
	UI = 4,
	VOICE = 5,
	VOICE_DIALOGUE = 6,
	VOICE_MALE = 7,
	VOICE_FEMALE = 8,
	MAX = 9,
};

enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class ATTACK_MOVE_TYPE : uint8_t {
	None = 0,
	TargetMov = 1,
	DirectMov = 2,
	ForwardMov = 3,
	ATTACK_MOVE_MAX = 4,
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

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class EMinimapFeatureAvailability : uint8_t {
	NONE = 0,
	VIEW_USER_INFO = 1,
	VIEW_COMMAND_INFO = 2,
	VIEW_OBJECT_INFO = 3,
	VIEW_CHARACTER_DIE = 4,
	VIEW_REVIVAL_LOCATION_INFO = 5,
	FUNC_TOUCH_POSITION = 6,
	DEFAULT_VIEW = 7,
	DEFAULT_FUNC = 8,
	DEFAULT = 9,
	REVIVAL_SELECT = 10,
	EMinimapFeatureAvailability_MAX = 11,
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

enum class EAuctionSortType : uint8_t {
	EACH_PRICE = 0,
	TOTAL_PRICE = 1,
	WEAPON_PRICE = 2,
	EAuctionSortType_MAX = 3,
};

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
};

enum class EReason_StopBehavior : uint8_t {
	Unknown = 0,
	AttackEnd = 1,
	UpdateCounterAttack = 2,
	AutoMoveFinished = 3,
	OnDie = 4,
	QuestTracker = 5,
	InputProcess = 6,
	TaskStopBehavior = 7,
	PhaseMode = 8,
	CommandScript = 9,
	Occupation = 10,
	ToggleUI = 11,
	Debug = 12,
	Sparring = 13,
	Operating = 14,
	Revival = 15,
	ClickMenu = 16,
	RecvServer = 17,
	Cinematic = 18,
	MissionHelper = 19,
	StoryQuest = 20,
	Warp = 21,
	Trigger = 22,
	LogOut = 23,
	DisConnect = 24,
	EReason_MAX = 25,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
};

enum class EClientRequestType : uint8_t {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	EClientRequestType_MAX = 7,
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

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class EOccupationAuctionProgress : uint8_t {
	NONE = 0,
	AUCTION_ENTRY = 1,
	AUCTION_EXTEND = 2,
	STANDBY_BATTLE = 3,
	START_BATTLE = 4,
	END = 5,
	MAX = 6,
};

enum class EOccupationRewardType : uint8_t {
	None = 0,
	Buff = 1,
	Item = 2,
	EOccupationRewardType_MAX = 3,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class EItemGetWayItemMake : uint8_t {
	ItemMakeUI = 0,
	ItemMakeNPC = 1,
	ItemMakeNPC_Exchange = 2,
	EItemGetWayItemMake_MAX = 3,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class EFastArraySerializerDeltaFlags : uint8_t {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4,
};

enum class TARGET_SUBTYPE : uint8_t {
	AliveOnly = 0,
	DeadOnly = 1,
	All = 2,
	TARGET_MAX = 3,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
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

enum class EGetWayType : uint8_t {
	NONE = 0,
	DISPLAY = 1,
	EGetWayType_MAX = 2,
};

enum class ERevivalExceptionType : uint8_t {
	NONE = 0,
	CINEMATIC = 1,
	DUNGEON_REWARD = 2,
	SLEEP_MODE = 3,
	SIEGE_SITUATION_BOARD = 4,
	SIEGE_BATTLERESULT = 5,
	ERevivalExceptionType_MAX = 6,
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

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags_MAX = 2,
};

enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class CAM_POSTPROCESS_TYPE : uint8_t {
	BLIND = 0,
	FASTRUN = 1,
	DASH_HIT = 2,
	CAM_POSTPROCESS_MAX = 3,
};

enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

enum class EPermissionsPrivacy : uint8_t {
	OnlyMe = 0,
	OnlyFriends = 1,
	Everyone = 2,
	EPermissionsPrivacy_MAX = 3,
};

enum class DialogTheme : uint8_t {
	LightTheme = 0,
	DarkTheme = 1,
	DefaultTheme = 2,
	DialogTheme_MAX = 3,
};

enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
};

enum class EQueryReceiptEntryCode : uint8_t {
	INITED = 0,
	LOAD_STREAM_LEVEL_END_PROCESS = 1,
	UNEXPECTED_PURCHASE_RECEIPT = 2,
	UPDATE_UNEXPECTED_PURCHASE_RECEIPT = 3,
	RECONNECTED_GAME_SERVER = 4,
	APP_RESUMED = 5,
	REFUNDING_USER = 6,
	EQueryReceiptEntryCode_MAX = 7,
};

enum class EParticleDetailMode : uint8_t {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3,
};

enum class EMoneyGetWayType : uint8_t {
	None = 0,
	Cash_Store = 1,
	Gather = 2,
	Daily_Work = 3,
	Meditation = 4,
	MagicSquare = 5,
	Quest_Mission = 6,
	Event = 7,
	TreasureGoblin = 8,
	Trade = 9,
	EMoneyGetWayType_MAX = 10,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

enum class EAIRWALK_STATE : uint8_t {
	AIR_NONE = 0,
	AIR_JUMP01 = 1,
	AIR_JUMP02 = 2,
	AIR_JUMP03 = 3,
	AIR_JUMP04 = 4,
	AIR_FALL01 = 5,
	AIR_FALL02 = 6,
	AIR_WALLJUMP = 7,
	AIR_DASH_READY1 = 8,
	AIR_DASH_READY2 = 9,
	AIR_FLY = 10,
	AIR_FLY2 = 11,
	AIR_LAND = 12,
	AIR_MAX = 13,
};

enum class CCSTANCE : uint8_t {
	None = 0,
	Hit01 = 1,
	Hit02 = 2,
	Hit03 = 3,
	Stu01 = 4,
	Down01 = 5,
	Down02 = 6,
	Down03 = 7,
	HOV01 = 8,
	Air01 = 9,
	StateEnd = 10,
	CCSTANCE_MAX = 11,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
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

enum class EChatIndicatorType : uint8_t {
	DEFAULT = 0,
	COUNT = 1,
	EChatIndicatorType_MAX = 2,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class EStageFunctionFlag : uint8_t {
	NONE = 0,
	GUILD_WAR = 1,
	COMBAT_UNIFORM = 2,
	NAMETAG_CLASS = 3,
	MISSION_QUEST_STAGE = 4,
	GUILD_SANCTUM = 5,
	FIELD = 6,
	SINGLE_FIELD = 7,
	CUSTOM = 8,
	ELITE_DUNGEON = 9,
	ELITE_STAGE = 10,
	UNDER_WORLD = 11,
	BIDO = 12,
	STRONGPOINT = 13,
	OCCUPATION = 14,
	SIEGE = 15,
	WORLD_BOSS = 16,
	SOLO_INSTANCE_DUNGEON = 17,
	PARTY_INSTANCE_DUNGEON = 18,
	MAGIC_SQUEAR = 19,
	SECRET_DUNGEON = 20,
	ARENA_PVP = 21,
	EStageFunctionFlag_MAX = 22,
};

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
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

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
};

enum class EWidgetOpenAllow : uint8_t {
	NONE = 0,
	CINEMATIC = 1,
	SLEEP_MODE = 2,
	OUTGAME = 3,
	INGAME = 4,
	DEFAULT = 5,
	ALL = 6,
	CINEMA = 7,
	HUD = 8,
	MESSAGE = 9,
	CHEAT = 10,
	REVIVAL = 11,
	QUEST_POPUP = 12,
	EWidgetOpenAllow_MAX = 13,
};

enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class BTNACTION_INDEX : uint8_t {
	BUTTON_DISABLE = 0,
	BUTTON_ENABLE = 1,
	MAX_INDEX = 2,
	BTNACTION_MAX = 3,
};

enum class EWidgetID : uint8_t {
	WIDGET_ID_NONE = 0,
	MM_TEMP_IMAGE = 1,
	MM_B_SKILL = 2,
	MM_B_SET_SKILL = 3,
	MM_SKILL_LIST_SLOT = 4,
	MM_SKILL_DETAIL_LIST = 5,
	MM_POPUP_SKILL_ITEM_EXCHANGE = 6,
	MM_SKILL_AWAKEN_SLOT = 7,
	MM_B_LOADING = 8,
	MM_B_SHOP_NPC = 9,
	MM_B_SHOP_NPC_MAKING = 10,
	MM_B_COMMON_POPUP_INFO = 11,
	MM_B_COMMON_POPUP_INGAME = 12,
	MM_B_COMMON_POPUP_OUTGAME = 13,
	MM_B_COMMON_POPUP_OUTGAME_ONESTOREPC = 14,
	MM_B_COMMON_POPUP_CHECK = 15,
	MM_B_COMMON_POPUP_EDITTEXT = 16,
	MM_B_COMMON_POPUP_ERROR = 17,
	MM_B_COMMON_POPUP_REWARD = 18,
	MM_B_COMMON_POPUP_ITEMINFO = 19,
	MM_B_COMMON_POPUP_COUNT = 20,
	MM_B_POPUP_GAMEOPTION = 21,
	MM_B_POPUP_GAMEOPTION_LOGIN = 22,
	MM_POPUP_COUPON = 23,
	MM_COMMON_HORIZONTAL_TAB_BTN = 24,
	MM_COMMON_VERTICAL_TAB_BTN = 25,
	MM_COMMON_VERTICAL_TAB_TREE_BTN = 26,
	MM_COMMON_VERTICAL_TAB_TREE_SUB_BTN = 27,
	MM_B_POPUP_ACQUIRED_ITEM = 28,
	MM_B_POPUP_ACQUIRED_ITEM_SLOT = 29,
	MM_COMMON_VERTICAL_TAB_SYMBOL_BTN = 30,
	MM_PANEL_COMMON_LOADING = 31,
	MM_POPUP_KEYPAD = 32,
	MM_POPUP_KEYPAD_BIG_INTEGER = 33,
	MM_POPUP_PARTY_PW_KEYPAD = 34,
	MM_POPUP_FILTER = 35,
	MM_POPUP_EXCHANGE_ITEM = 36,
	MM_COMMON_TOOLTIP = 37,
	MM_POPUP_DURABILITY = 38,
	MM_SORT_BTN = 39,
	MM_POPUP_ITEMTOLTIP = 40,
	MM_CHARINFO_SLIM = 41,
	MM_POPUP_DETAIL_INFO = 42,
	MM_POPUP_WEBBROWSER = 43,
	MM_POPUP_OPTION_SIMPLE = 44,
	MM_POPUP_GUIDE_WEBBROWSER = 45,
	MM_HEADLINE_MSG = 46,
	MM_HUD_BOTTOM_MSG = 47,
	MM_HUD_BOTTOM_MSG_SLOT = 48,
	MM_HUD_GET_ITEM_MSG = 49,
	MM_HUD_GET_ITEM_MSG_SLOT = 50,
	MM_TOP_MSG = 51,
	MM_TOP_MSG_SLOT = 52,
	MM_SCREEN_MSG = 53,
	MM_HUD_GET_SPECIAL_ITEM_MSG = 54,
	MM_CONTENTS_GET_ITEM_MSG = 55,
	MM_QUICK_ITEM_ACTION_MSG = 56,
	MM_GM_MSG = 57,
	MM_B_COMMON_BG = 58,
	MM_B_GOODS = 59,
	MM_TOTALMENU = 60,
	MM_POPUP_CONTENTS_STATE = 61,
	MM_POPUP_CONTENTS_ACTION_RESULT = 62,
	MM_SLOT_INVENTORY = 63,
	MM_SLOT_INVENTORY_BG = 64,
	MM_SLOT_INVENTORY_DUMMY = 65,
	MM_SLOT_INVENTORY_SCALE = 66,
	WIDGET_ID_LOGO_MEDIA = 67,
	WIDGET_ID_CONVENIENT_LOGIN = 68,
	MM_B_LOGIN = 69,
	MM_POPUP_TERMS_OF_SERVICE = 70,
	MM_POPUP_VERSION_SELECT = 71,
	MM_LOGIN_VERSION_SLOT = 72,
	MM_POPUP_NEW_ACCOUNT = 73,
	MM_POPUP_ACCOUNT_GUEST = 74,
	MM_POPUP_ACCOUNT_INFO = 75,
	MM_POPUP_ACCOUNT_SELECT = 76,
	MM_POPUP_SERVER_SELECT = 77,
	MM_SERVER_SLOT = 78,
	MM_FINDCHAR_SLOT = 79,
	MM_POPUP_SERVER_SELECT_GLOBAL = 80,
	MM_SERVER_SLOT_GLOBAL = 81,
	MM_FINDCHAR_SLOT_GLOBAL = 82,
	MM_REGION_SLOT_GLOBAL = 83,
	MM_SERVER_GROUP_GLOBAL = 84,
	MM_CONNECTING_LOGIN = 85,
	MM_CONNECTING_INGAME = 86,
	MM_POPUP_GUEST_CONTINUE = 87,
	MM_POPUP_GUEST_CONTINUESETTING = 88,
	MM_POPUP_LOGIN_QUEUE = 89,
	MM_POPUP_WEB_ONESTORE_IAP = 90,
	MM_POPUP_WEB_XSOLLA_IAP = 91,
	MM_POPUP_WEB_STEAM_IAP = 92,
	MM_POPUP_REFUND_SANCTIONS = 93,
	MM_SLOT_REFUND_SANCTIONS_LIST = 94,
	MM_POPUP_SELECT_REGION = 95,
	MM_B_MAGIC_STONE = 96,
	MM_MAGIC_STONE_ATTRIEBUTE_SLOT = 97,
	MM_JEWEL_POPUP_EQUIPED_JEWEL_INFO = 98,
	MM_JEWEL_POPUP_EQUIPED_JEWEL_INFO_SLOT = 99,
	MM_B_SMELT = 100,
	MM_B_OPTION_CHANGE = 101,
	MM_B_UNSEALING = 102,
	MM_B_COMMON_ITEM_RESULT = 103,
	MM_B_POPUP_OPTION_CHANGE = 104,
	MM_B_POPUP_RANDOM_OPTION_LIST = 105,
	MM_ITEM_OPTION_ABILITY_SLOT = 106,
	MM_B_ITEM_MAKE = 107,
	MM_ITEM_MAKE_SLOT = 108,
	MM_ITEMMAKE_SLOT_RECT = 109,
	MM_ITEM_MAKE_RESULT = 110,
	MM_ITEM_STATE = 111,
	MM_ITEM_OPTION_COMPARE = 112,
	MM_ITEM_PACKAGE = 113,
	MM_ITEM_PACKAGE_SLOT = 114,
	MM_ITEM_SIMPLE_INFO = 115,
	MM_B_POPUP_RECOMMENDEQUIP = 116,
	MM_NPC_ITEM_EXCHANGE = 117,
	MM_NPC_ITEM_EXCHANGE_SLOT = 118,
	MM_ITEM_OPTION_PASSIVE = 119,
	MM_POPUP_AUTO_OPTIONCHANGE = 120,
	MM_B_ITEM_COLLECTION = 121,
	MM_ITEM_COLLECT_LIST = 122,
	MM_SLOT_ITEM_COLLECT = 123,
	MM_SLOT_COLLECT_EFFECT = 124,
	MM_POPUP_INFO_ITEM_COLLECT = 125,
	MM_POPUP_REGISTER_COLLECT_ITEM = 126,
	MM_POPUP_COMPLETE_COLLECT_ITEM = 127,
	MM_ITEM_MATERIAL_SYNTHESIS = 128,
	MM_SYSTHESIS_RESULT = 129,
	MM_SYSTHESIS_RESULT_SLOT = 130,
	MM_CENSER_RESULT = 131,
	MM_ITEM_MAKE_SPECIAL_POPUP = 132,
	MM_POPUP_MATERIAL_CHANGE = 133,
	MM_POPUP_UNSEALING_ACCELERATION = 134,
	MM_UNSEALING_ACCELERATION_SLOT = 135,
	MM_UNSEALING_SLOT = 136,
	MM_POPUP_GET_ITEM = 137,
	MM_GET_ITEM_WAY_LIST_SLOT = 138,
	MM_GET_ITEM_TYPE_SLOT = 139,
	MM_GET_ITEM_CATEGORY_SLOT = 140,
	MM_B_CHARINFO = 141,
	MM_POPUP_OTHERUSERINFO = 142,
	MM_B_EQUIPMENT = 143,
	MM_DETAIL_STATUS_INFO = 144,
	MM_SALE_ITEM_BASKET = 145,
	MM_OPTION_ABILITY = 146,
	MM_POPUP_EQUIP_AUTO = 147,
	MM_GROWTH_PROGRESS = 148,
	MM_POPUP_CUSTOMTITLE = 149,
	MM_POPUP_CUSTOMTITLE_SWITCH = 150,
	MM_FAME_LIST = 151,
	MM_FAME_DETAILINFO_SLOT = 152,
	MM_FAME_LIST_MAIN_SLOT = 153,
	MM_FAME_LIST_SUB_SLOT = 154,
	MM_POPUP_PROFILE = 155,
	MM_POPUP_TREMITEM = 156,
	MM_SLOT_TREMITEM = 157,
	MM_POPUP_STATUS_INFO = 158,
	MM_STATUS_INFO = 159,
	MM_POPUP_STATUSCONTENTS = 160,
	MM_SLOT_STATUSCONTENTS = 161,
	MM_B_FORCE = 162,
	MM_FORCE_TAB = 163,
	MM_B_MASTERY = 164,
	MM_B_ACHIEVEMENT = 165,
	MM_ACHIEVEMENT_SLOT = 166,
	MM_B_DUNGEON = 167,
	MM_B_RAID_DUNGEON = 168,
	MM_DUNGEON_LIST = 169,
	MM_DUNGEON_LIST_SLOT = 170,
	MM_ELITE_STAGE = 171,
	MM_ELITE_STAGE_LIST = 172,
	MM_ELITE_STAGE_SLOT = 173,
	MM_B_ELITE_DUNGEON = 174,
	MM_B_UNDER_WORLD = 175,
	MM_DUNGEONSLOT_MATERIAL = 176,
	MM_B_DAILYQUEST = 177,
	MM_POPUP_QUEST_OBTAIN = 178,
	MM_POPUP_QUEST_DELIVERY = 179,
	MM_POPUP_QUEST_REPEAT = 180,
	MM_POPUP_QUEST_NORMAL_AUTO = 181,
	MM_QUEST_NORMAL_AUTO_SLOT = 182,
	MM_QUEST_NORMAL_AUTOSLOT = 183,
	MM_SLOT_QUEST = 184,
	MM_SLOT_REQUEST = 185,
	MM_B_QUESTNORMAL = 186,
	MM_B_REQUEST = 187,
	MM_POPUP_QUESTINFO = 188,
	MM_POPUP_QUEST_ACCEPT = 189,
	MM_B_QUESTRELATION = 190,
	MM_QUEST_RELATION_SLOT = 191,
	MM_QUEST_RELATION_DETAIL_SLOT = 192,
	MM_QUEST_RELATION_GROUP_SLOT = 193,
	MM_HUD_QUEST_MESSAGE = 194,
	MM_HUD_ADD_RELATION = 195,
	MM_HUD_COMPLETE_RELATION = 196,
	MM_POPUP_RELATION_REWARDINFO = 197,
	MM_RELATION_REWARDINFO_SLOT = 198,
	MM_B_VEHICLE = 199,
	MM_VEHICLE_SLOT = 200,
	MM_B_COSTUME = 201,
	MM_COSTUME_LIST_SLOT = 202,
	MM_COSTUME_LIST_SLOT_LONG = 203,
	MM_COSTUME_COLLECTIONLIST_SLOT = 204,
	MM_COSTUME_POPUP_ABILITY_PART_OPTION = 205,
	MM_COSTUME_PALETTE_SLOT = 206,
	MM_COSTUME_PALETTE_SLOT_SMALL = 207,
	MM_B_MAP = 208,
	MM_MAP_PLAYER = 209,
	MM_MAP_DEATH_ITEM = 210,
	MM_MAP_DEST = 211,
	MM_MAP_WAYPOINTDEST = 212,
	MM_MAP_PARTY = 213,
	MM_MAP_NAMETAG = 214,
	MM_MAP_AREABTN = 215,
	MM_MAP_WAYPOINT_LIST_SLOT = 216,
	MM_MAP_CHANNEL_SLOT = 217,
	MM_MAP_CHANNEL = 218,
	MM_POPUP_IMMEDIATE_CONFIRM = 219,
	MM_POPUP_MAP_GRADE_INFO = 220,
	MM_POPUP_OCCUPATION_INFO = 221,
	MM_B_HUD = 222,
	MM_B_PKMode = 223,
	MM_HUD_PARTY_USER = 224,
	MM_HUD_PARTY_USER_SUBMENU = 225,
	MM_LIMITTIME = 226,
	MM_SKILL_VIRTUALPAD = 227,
	MM_B_Growth = 228,
	MM_B_GrowthPopup = 229,
	MM_HUD_MINIMAP = 230,
	MM_HUD_ALARM_TOWN = 231,
	MM_HUD_PARTY_INVITE_POPUP = 232,
	MM_B_HUD_FOLD_MAIN = 233,
	MM_DAMAGE = 234,
	MM_COMBO = 235,
	MM_CROWDCONTROLTEXT = 236,
	MM_SUBTARGET = 237,
	MM_HUD_RIGHTMENU_DUNGEON = 238,
	MM_HUD_RIGHTMENU_MAGICSQUARE = 239,
	MM_HUD_RIGHTMENU_OCCUPATION = 240,
	MM_HUD_RIGHTMENU_STRONGPOINT = 241,
	MM_HUD_RIGHTMENU_SERVERVISIT = 242,
	MM_POPUP_SALE_ITEM = 243,
	MM_POPUP_ITEM_ORDER_OPTION = 244,
	MM_POPUP_INVENTORY_EXTEND = 245,
	MM_INVENTORY_SLOT = 246,
	MM_ITEMSLOT_MATERIAL = 247,
	MM_ITEMSLOT_SIMPLE_CNT = 248,
	MM_SLOT_MATERIAL_RECT = 249,
	MM_CONTENTS_OPEN_POPUP = 250,
	MM_B_PARTY_INVITE = 251,
	MM_B_PARTY_MANAGE = 252,
	MM_B_PARTY_SEARCH = 253,
	MM_B_PARTY_INFO = 254,
	MM_B_SQUAD_INFO = 255,
	MM_B_PARTY_ALARM = 256,
	MM_B_PARTY_CREATE = 257,
	MM_PARTY_LIST_SLOT = 258,
	MM_PARTY_MEMBER_SLOT = 259,
	MM_PARTY_INVITE_MEMBER_SLOT = 260,
	MM_POPUP_PARTY_INFO = 261,
	MM_POPUP_PARTY_INFO_SLOT = 262,
	MM_PARTY_DUNGEON_LIST_SLOT = 263,
	MM_PARTY_DUNGEON_MONSTER_SLOT_CREATE = 264,
	MM_PARTY_DUNGEON_MONSTER_SLOT_MANAGE = 265,
	MM_PARTY_DUNGEON_STAGE_LEVEL_SLOT = 266,
	MM_POPUP_PARTY_SLOT_OPTION = 267,
	MM_POPUP_PARTY_SLOT_OPTION_ITEM = 268,
	MM_POPUP_DUNGEON_SEARCH = 269,
	MM_POPUP_PARTY_MAKE = 270,
	MM_POPUP_PARTY_PUBLICIZE = 271,
	MM_DUNGEON_SEARCHLIST = 272,
	MM_PARTY_MEMBERLIST = 273,
	MM_PARTY_SEARCHLIST = 274,
	MM_PARTY_INVITE_MEMBERLIST = 275,
	MM_B_GUILD = 276,
	MM_B_GUILD_CREATION = 277,
	MM_B_GUILD_JOIN = 278,
	MM_POPUP_GUILD_JOIN_OR_CREATION = 279,
	MM_POPUP_GUILD_PERUSE = 280,
	MM_GUILD_PERUSE_LIST_SLOT = 281,
	MM_GUILD_JOIN_REQUEST_LIST_SLOT = 282,
	MM_GUILD_MEMBER_SLOT_BY_GROUP = 283,
	MM_GUILD_MEMBER_SLOT_LIST_01 = 284,
	MM_GUILD_MEMBER_SLOT_LIST_02 = 285,
	MM_GUILD_POPUP_MEMBERS = 286,
	MM_GUILD_POPUP_GUILD_MEMBER_GRADE_SLOT = 287,
	MM_GUILD_POPUP_GUILD_MEMBER_POSITION_SLOT = 288,
	MM_GUILD_SHORT_CUT = 289,
	MM_POPUP_GUILD_BOARD = 290,
	MM_GUILD_ICON_SLOT = 291,
	MM_GUILD_DIPLOMACY = 292,
	MM_GUILD_DIPLOMACY_LIST_SLOT = 293,
	MM_POPUP_GUILD_HOSTILITY = 294,
	MM_POPUP_GUILD_CREATION = 295,
	MM_POPUP_GUILD_SEARCH_EDIT = 296,
	MM_POPUP_GUILD_SEARCH = 297,
	MM_POPUP_GUILD_SEARCH_SLOT = 298,
	MM_POPUP_CHARACTER_SEARCH_EDIT = 299,
	MM_POPUP_CHARACTER_SEARCH = 300,
	MM_POPUP_CHARACTER_SEARCH_SLOT = 301,
	MM_POPUP_GUILD_INVITE = 302,
	MM_POPUP_GUILD_INVITE_SLOT = 303,
	MM_POPUP_EDIT = 304,
	MM_POPUP_GUILD_NAME_CHANGE_EDIT = 305,
	MM_GUILD_DEV = 306,
	MM_POPUP_GUILD_DEV_INFO = 307,
	MM_POPUP_GUILD_DEV_INFO_BENEFIT = 308,
	MM_GUILD_DEV_BENEFIT_SLOT = 309,
	MM_POPUP_GUILD_DEV_LEVELUP_RESULT = 310,
	MM_POPUP_GUILD_DEV_SHORTCUT = 311,
	MM_GUILD_SUPPORT = 312,
	MM_GUILD_SUPPORT_SLOT = 313,
	MM_GUILD_WANTED = 314,
	MM_GUILD_WANTED_SLOT = 315,
	MM_POPUP_GUILD_WANTED = 316,
	MM_GUILD_SUPPLY = 317,
	MM_GUILD_SUPPLY_SLOT = 318,
	MM_GUILD_REPORT_SLOT = 319,
	MM_GUILD_GIFT_SLOT = 320,
	MM_GUILD_GIFT_RESULT = 321,
	MM_GUILD_INVENTORY = 322,
	MM_GUILD_INVENTORY_LIST_SLOT = 323,
	MM_GUILD_HISTORY_SLOT = 324,
	MM_B_GUILD_MARK_CHANGE = 325,
	MM_POPUP_GUILD_REWARD_INFO = 326,
	MM_POPUP_GUILD_PERMISSION = 327,
	MM_GUILD_SHOP = 328,
	MM_GUILD_SHOP_LIST = 329,
	MM_POPUP_GUILD_SHOP_RECORD = 330,
	MM_GUILD_SHOP_RECORD_LIST_SLOT = 331,
	MM_GUILD_POPUP_PARTNER = 332,
	MM_GUILD_POPUP_PARTNER_SLOT = 333,
	MM_POPUP_GUILD_DONATION = 334,
	MM_POPUP_GUILD_DONATION_DETAILS = 335,
	MM_POPUP_GUILD_DONATION_DETAILS_SLOT = 336,
	MM_POPUP_GUILD_GIVE_PERSONAL = 337,
	MM_POPUP_GUILD_GIVE_MEMBER_SLOT = 338,
	MM_POPUP_GUILD_GIVE_OTHER_SLOT = 339,
	MM_POPUP_GUILD_GIVE_ALLIANCE = 340,
	MM_POPUP_GUILD_GIVE_ALLIANCE_SLOT = 341,
	MM_POPUP_GUILD_GIVE = 342,
	MM_POPUP_GUILD_COST_EXCHANGE = 343,
	MM_POPUP_GUILD_FRIENDSHIP_LIST = 344,
	MM_POPUP_GUILD_FRIENDSHIP_LIST_SLOT = 345,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_SELL = 346,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_STATE = 347,
	MM_POPUP_GUILD_AUTHORITY = 348,
	MM_POPUP_GUILD_AUTHORITY_SLOT = 349,
	MM_POPUP_GUILD_OTHER_MEMBERS = 350,
	MM_POPUP_GUILD_OTHER_MEMBERS_SLOT = 351,
	MM_B_GUILD_BLACK_IRON_INVENTORY = 352,
	MM_B_GUILD_BLACK_IRON_INVENTORY_LIST_SLOT = 353,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_MOVE = 354,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_GIVE = 355,
	MM_POPUP_GUILD_LIST = 356,
	MM_GUILD_LIST_SLOT = 357,
	MM_B_PKRECORD = 358,
	MM_PKRECORD_LIST_SLOT = 359,
	MM_POPUP_PKRECORDINFO = 360,
	MM_B_WANTED = 361,
	MM_POPUP_WANTED_REGIST = 362,
	MM_WANTED_SLOT = 363,
	MM_B_AUCTION = 364,
	MM_AUCTION_SLOT_BOOKMARK = 365,
	MM_AUCTION_SLOT_SELL = 366,
	MM_AUCTION_SLOT_NORMAL = 367,
	MM_AUCTION_SLOT_RESULT = 368,
	MM_AUCTION_SLOT_MATERIAL = 369,
	MM_POPUP_AUCTION_BUYINFO = 370,
	MM_POPUP_AUCTION_CBACK = 371,
	MM_POPUP_AUCTION_COUNT = 372,
	MM_POPUP_AUCTION_GUILD = 373,
	MM_POPUP_AUCTION_REGIST = 374,
	MM_POPUP_AUCTION_INFO_REGIST = 375,
	MM_AUCTION_COMBO_SLOT = 376,
	MM_AUCTION_ENCHANT_COMBO_SLOT = 377,
	MM_B_CHANCE = 378,
	MM_B_RANKING = 379,
	MM_RANKING_REWARD_LIST = 380,
	MM_RANKING_REWARD_POPUP = 381,
	MM_RANKING_SEASON_START = 382,
	MM_RANKING_LIST_SLOT = 383,
	MM_RANKING_REWARD_LIST_NEW = 384,
	MM_RANKING_REWARD_POPUP_NEW = 385,
	EDITOR_CHEATS = 386,
	EDITOR_MAP_PREVIEW_TOOL = 387,
	EDITOR_UI_PREVIEW_TOOL = 388,
	MM_HUD_CHAT_POPUP = 389,
	MM_POPUP_CHAT = 390,
	MM_POPUP_CHAT_SETTING = 391,
	MM_POPUP_CHAT_BLOCKLIST = 392,
	MM_POPUP_CHAT_MACROLIST = 393,
	MM_POPUP_CHAT_VOICEOPTION = 394,
	MM_HUD_CHAT_BROADCAST_MESSAGE = 395,
	MM_POPUP_COMMON_CHECKBOX = 396,
	MM_POPUP_CHAT_RENDER_OPACITY = 397,
	MM_HUD_CHAT_CHANNEL_TAB = 398,
	MM_HUD_CHAT_MESSAGE = 399,
	MM_HUD_CHAT_TALKMESSAGE_MINE = 400,
	MM_HUD_CHAT_TALKMESSAGE_OTHER = 401,
	MM_HUD_CHAT_STATUS_MESSAGE = 402,
	MM_HUD_CHAT_ITEMSHARE_MINE = 403,
	MM_HUD_CHAT_ITEMSHARE_OTHER = 404,
	MM_HUD_CHAT_ADVERTISE = 405,
	MM_HUD_CHAT_BLOCKLIST_SLOT = 406,
	MM_HUD_CHAT_WHISPER_SLOT = 407,
	MM_HUD_CHAT_USER_SLOT = 408,
	MM_HUD_CHAT_DOTTED_LINE = 409,
	MM_HUD_CHAT_BROADCAST_MSG = 410,
	MM_HUD_CHAT_PARTYINVITE_MINE = 411,
	MM_HUD_CHAT_PARTYINVITE_OTHER = 412,
	MM_ALARM_LIST_POPUP = 413,
	MM_ALARM_LIST_SLOT = 414,
	MM_B_OCCUPATION = 415,
	MM_OCCUPATION_STAGEPOPUP = 416,
	MM_WORSHIP_POPUP = 417,
	MM_OCCUPATION_BATTLESTART = 418,
	MM_OCCUPATION_BATTLERESULT = 419,
	MM_OCCUPATION_RANKLIST = 420,
	MM_OCCUPATION_AUCTION_POPUP = 421,
	MM_OCCUPATION_AUCTION_INVITE_POPUP = 422,
	MM_OCCUPATION_INVITE_SLOT = 423,
	MM_OCCUPATION_SITUATION_BOARD = 424,
	MM_OCCUPATION_MINIMAP_ICON = 425,
	MM_OCCUPATION_KILL_LOG_SLOT = 426,
	MM_POPUP_SIEGE_COMMAND_EDITTEXT = 427,
	MM_OCCUPATION_COMMANDMARK = 428,
	MM_OCCUPATION_KINGASCENSION = 429,
	MM_B_STRONGPOINT = 430,
	MM_STRONGPOINT_LIST_SLOT = 431,
	MM_STRONGPOINT_RESULT = 432,
	MM_POPUP_STRONGPOINT_WINTARGET = 433,
	MM_POPUP_STRONGPOINT_WINTARGET_PROCLAMATION = 434,
	WIDGET_ID_FADE = 435,
	MM_POPUP_REVIVAL = 436,
	MM_POPUP_DEATH_PENALTY = 437,
	MM_POPUP_RESTORE_EXP = 438,
	MM_POPUP_RESTORE_EXP_SLOT = 439,
	MM_POPUP_RESTORE_ITEM = 440,
	MM_POPUP_RESTORE_ITEM_SLOT = 441,
	MM_B_MAIL = 442,
	MM_MAIL_SLOT_MESSAGE = 443,
	MM_POPUP_MAILWRITE = 444,
	MM_POPUP_ADDRESSBOOK = 445,
	MM_POPUP_ADDRESSBOOK_SLOT = 446,
	MM_B_PET = 447,
	MM_PETSLOT = 448,
	MM_PET_STAT_SLOT = 449,
	MM_PET_ABILITY_SLOT = 450,
	MM_POPUP_UNLOCKED_PET_STAT_INFO = 451,
	MM_POPUP_EQUIPPED_PET_STAT_INFO = 452,
	MM_POPUP_REVIVAL_SELECT = 453,
	MM_POPUP_REVIVAL_SELECT_SLOT = 454,
	MM_POPUP_PET_GRADEUP = 455,
	MM_B_DOMINION = 456,
	MM_DOMINION_BASE_SLOT = 457,
	MM_DOMINION_TAX_LIST = 458,
	MM_DOMINION_TAX_GROUP = 459,
	MM_DOMINION_TAX_SLOT = 460,
	MM_DOMINION_HISTORY = 461,
	MM_DOMINION_HISTORY_SLOT = 462,
	MM_POPUP_DOMINION_TAX_DETAIL = 463,
	MM_POPUP_DOMINION_REWARD = 464,
	MM_POPUP_DOMINION_REWARD_SLOT = 465,
	MM_POPUP_DOMINION_REWARD_LIST = 466,
	MM_POPUP_DOMINION_REWARD_LIST_SLOT = 467,
	MM_POPUP_DOMINION_CLASS = 468,
	MM_POPUP_DOMINION_CLASS_RARE_GROUP = 469,
	MM_POPUP_DOMINION_CLASS_RARE_LIST = 470,
	MM_POPUP_DOMINION_CLASS_RARE_SLOT = 471,
	MM_POPUP_DOMINION_CLASS_NORMAL_GROUP = 472,
	MM_POPUP_DOMINION_CLASS_NORMAL_LIST = 473,
	MM_POPUP_DOMINION_CLASS_NORMAL_SLOT = 474,
	MM_POPUP_DOMINION_COMMAND = 475,
	MM_POPUP_DOMINION_COMMAND_SLOT = 476,
	MM_POPUP_DOMINION_WITHDRAWAL = 477,
	MM_POPUP_DOMINION_GUILD_MEMBER_LIST = 478,
	MM_POPUP_DOMINION_GUILD_MEMBER_LIST_SLOT = 479,
	MM_B_DOMINION_WANTED = 480,
	MM_DOMINION_WANTED_SLOT = 481,
	MM_POPUP_DOMINION_TOOLTIP = 482,
	MM_DOMINION_STORAGE_GOLD = 483,
	MM_DOMINION_STORAGE_BLACKIRON = 484,
	MM_POPUP_GATHER_LIST = 485,
	MM_POPUP_GATHER_LIST_SLOT = 486,
	MM_COMMON_COMBO_SLOT = 487,
	MM_B_ITEM_TRANSCEND = 488,
	MM_B_MYSTICALPIECE = 489,
	WIDGET_ID_CHARACTER_SELECT = 490,
	WIDGET_ID_CLASS_SELECT = 491,
	WIDGET_ID_CUSTOMIZING = 492,
	WIDGET_ID_CUSTOMIZING_LIST = 493,
	WIDGET_ID_CUSTOMIZING_LIST_SLOT = 494,
	WIDGET_ID_CUSTOMIZING_PALETTE = 495,
	WIDGET_ID_CUSTOMIZING_PALETTE_SLOT = 496,
	WIDGET_ID_CUSTOMIZING_SLIDER = 497,
	WIDGET_ID_CUSTOMIZING_PICKER = 498,
	WIDGET_ID_CUSTOMIZING_MY_COSTUME = 499,
	WIDGET_ID_CUSTOMIZING_COSTUME_DYE = 500,
	WIDGET_ID_CUSTOMIZING_SCREENSHOOT = 501,
	WIDGET_ID_CUSTOMIZING_STYLEBOOK = 502,
	WIDGET_ID_LOADING = 503,
	WIDGET_ID_DEBUGPANEL = 504,
	WIDGET_ID_PHASE_FAIL = 505,
	WIDGET_ID_PLAYER_LEVEL_UP = 506,
	WIDGET_ID_INGAME_BUFF_ICON = 507,
	WIDGET_ID_INGAME_GET_GOLD = 508,
	WIDGET_ID_CUTSCENE_DIALOGUE = 509,
	WIDGET_ID_SMALLTALK = 510,
	WIDGET_ID_ACHIEVEMENT = 511,
	WIDGET_ID_ACHIEVEMENTLIST = 512,
	WIDGET_ID_CHATTING = 513,
	WIDGET_ID_COMMONPOPUPLINE = 514,
	WIDGET_ID_BUFFINFOLIST = 515,
	WIDGET_ID_COMBATPOINTPOPUP = 516,
	WIDGET_ID_NAMETAG = 517,
	WIDGET_ID_TARGETINFO = 518,
	MM_POPUP_GUILD_COMMAND_MARK = 519,
	MM_PATCH_WIDGET = 520,
	MM_PATCHMOVIE_WIDGET = 521,
	MM_MINIGAME_WIDGET = 522,
	WIDGET_ID_REVIVAL = 523,
	WIDGET_ID_MOVIEPLAYER = 524,
	WIDGET_ID_BOSSAPPEAR = 525,
	WIDGET_ID_COUNT_DOWN = 526,
	WIDGET_ID_OPERATING_BUTTON = 527,
	WIDGET_ID_BLOCK_SCREEN = 528,
	WIDGET_ID_OBJECTNAMETAG = 529,
	WIDGET_ID_SCRIPT_SUBTITLE = 530,
	WIDGET_ID_SEQUENCE_SKIP = 531,
	WIDGET_ID_TUTORIAL_START = 532,
	WIDGET_ID_TUTORIAL_GUID = 533,
	WIDGET_ID_TUTORIAL_GUID_COMMENT = 534,
	WIDGET_ID_TUTORIAL_NPCDIALOG = 535,
	WIDGET_ID_TUTORIAL_PAGE = 536,
	WIDGET_ID_TUTORIAL_GUIDE_PET = 537,
	WIDGET_ID_MY_LOG = 538,
	MM_B_UISHOP = 539,
	MM_UISHOP_MAIN_TAB = 540,
	MM_UISHOP_SUB_TAB = 541,
	MM_UISHOP_GOODS_BIG_SLOT = 542,
	MM_UISHOP_GOODS_SLOT = 543,
	MM_UISHOP_GOODS_SCROLL_BOX = 544,
	MM_UISHOP_GOODS_DETAIL_SLOT = 545,
	MM_POPUP_GOODS_BUY = 546,
	MM_POPUP_NPC_SHOP_BUY_COUNT = 547,
	MM_NPC_SHOP_LIST_SLOT = 548,
	MM_DUNGEON_SHOP = 549,
	MM_DUNGEON_SHOP_LIST = 550,
	MM_B_BLACKIRONCHANGE = 551,
	MM_SLEEPMODE = 552,
	MM_POPUP_GET_HISTORY = 553,
	MM_SLOT_GET_HISTORY = 554,
	MM_B_WORLDBOSS_LIST = 555,
	MM_BOSS_APPEARANCE = 556,
	MM_BOSS_CONTRIBUTION = 557,
	MM_POPUP_WORLDBOSS_CHANNEL = 558,
	MM_SLOT_WORLDBOSS_CHANNEL = 559,
	MM_POPUP_BOSS_TIME = 560,
	MM_POPUP_BOSS_REWARD = 561,
	MM_B_SQUARE_LIST = 562,
	MM_POPUP_SQUARESTAGE_LIST = 563,
	MM_POPUP_SQUARESTAGE_LIST_SLOT = 564,
	MM_POPUP_QUICKSLOT_OPTION = 565,
	MM_SLOT_QUICKSLOT = 566,
	MM_SQUARE_DROP_LIST = 567,
	MM_TOTAL_QUICK = 568,
	MM_TOTAL_QUICK_SKILL_SLOT = 569,
	MM_POPUP_QUICKSLOT_TOWNNPC_POSITION = 570,
	MM_B_SECRET_DUNGEON = 571,
	MM_DUNGEON_QUEST_SLOT = 572,
	MM_POPUP_SECRET_INFO = 573,
	MM_B_FRIEND = 574,
	MM_FRIEND_LIST_SLOT = 575,
	MM_POPUP_FRIEND_SEARCH = 576,
	MM_POPUP_FRIEND_ORDER_OPTION = 577,
	MM_POPUP_RAID_REWARD = 578,
	MM_CHARACTER_REWARD_SLOT = 579,
	MM_CHARACTER_REWARD_SLOT2 = 580,
	MM_B_POPUP_DUNGEON_EVENT_TIME_SLOT = 581,
	MM_B_POPUP_DUNGEON_EVENT_ICON_SLOT = 582,
	MM_POPUP_EMOTE = 583,
	MM_PHOTOMODE = 584,
	MM_DUNGEON_COMMON_SLOT = 585,
	MM_GUILD_EXPEDITION_LIST = 586,
	MM_GUILD_BOSS_EXPEDITION_LIST = 587,
	MM_GUILD_BOSS_WAVE_EXPEDITION_LIST = 588,
	MM_GUILD_EVENT = 589,
	MM_B_GREAT_BUILDING = 590,
	MM_POPUP_BUILDING = 591,
	MM_POPUP_BUILDING_LIST = 592,
	MM_POPUP_BUILDING_CHART = 593,
	MM_POPUP_BUILDING_CHART_LIST = 594,
	MM_POPUP_BUILDING_ACCEL = 595,
	MM_WARNING_SCREEN = 596,
	MM_PK_WARNING_SCREEN = 597,
	MM_POPUP_PK_PENALTY = 598,
	MM_POPUP_GACHA_RESULT = 599,
	MM_POPUP_USER_EVENT = 600,
	MM_USER_EVENT_ATTENDANCE_MONTH = 601,
	MM_USER_EVENT_TAB_SLOT = 602,
	MM_USER_EVENT_ITEM_SLOT = 603,
	MM_USER_EVENT_BATTLEPASS_REWARD_SLOT = 604,
	MM_USER_EVENT_BATTLEPASS_MISSION_SLOT = 605,
	MM_USER_EVENT_BATTLEPASS_DAY_REWARD_SLOT = 606,
	MM_POPUP_BATTLEPASS_BUYINFO = 607,
	MM_USER_EVENT_GOAL_SLOT = 608,
	MM_POPUP_TELEPORT = 609,
	MM_TELEPORT_SLOT = 610,
	MM_DEUL_RESULT = 611,
	MM_NEW_OCCUPATION_BATTLERESULT = 612,
	MM_NEW_OCCUPATION_RANKING_LIST = 613,
	MM_POPUP_OCCUPATION_RANK_REWARD = 614,
	MM_OCCUPATION_RANK_REWARD_LIST = 615,
	MM_POPUP_OCCUPATION_RANK_BOARD = 616,
	MM_SLOT_OCCUPATION_RANKING = 617,
	MM_POPUP_OCCUPATION_SIEGESET = 618,
	MM_POPUP_OCCUPATION_SIEGETANK = 619,
	MM_OCCUPATION_OBSERVER = 620,
	MM_OCCUPATION_OBSERVER_KILLLOG_SLOT = 621,
	MM_COMMON_POPUP_CHANNELWAITING = 622,
	MM_POPUP_GUILD_WELCOME = 623,
	MM_POPUP_GACHA_PERCENT = 624,
	MM_POPUP_EXP_BOOSTER = 625,
	MM_POPUP_EXP_BOOSTER_SLOT = 626,
	MM_POPUP_EXP_BOOSTER_CHARGE = 627,
	MM_B_ITEM_EXCHANGE = 628,
	MM_GAMEOPTION_KEYSETTING_GROUP = 629,
	MM_GAMEOPTION_KEYSETTING_GROUP_SLOT = 630,
	MM_SHORT_CUT_KEY = 631,
	MM_UISHOP_CASH_BAG_SLOT = 632,
	MM_POPUP_UISHOP_GOODS_DETAIL = 633,
	MM_POPUP_UISHOP_GUILD_GIFT = 634,
	MM_POPUP_UISHOP_BANNER = 635,
	MM_POPUP_UISHOP_MESSAGE = 636,
	MM_COMMON_POPUP_STOP_WATCHING_TODAY = 637,
	MM_B_SKILL_AWAKEN_RESULT = 638,
	MM_POPUP_NAMECHANGE = 639,
	MM_UISHOP_GOODS_PREIOD_DETAIL_SLOT = 640,
	MM_B_INDIVIDUAL_STORAGE = 641,
	MM_POPUP_SERVERRELOCATION = 642,
	MM_POPUP_SERVERLIST = 643,
	MM_SERVERRELOCATION_SERVERLIST = 644,
	MM_SERVERRELOCATION_SETLIST = 645,
	MM_POPUP_SERVERLIST_GLOBAL = 646,
	MM_SERVERRELOCATIONGROUP_GLOBAL = 647,
	MM_SERVERRELOCATIONREGION_GLOBAL = 648,
	MM_SERVERRELOCATIONSLOT_GLOBAL = 649,
	MM_POPUP_FRONT_BANNER = 650,
	MM_POPUP_AUTO_SMELT = 651,
	MM_USER_EVENT_GACHA_RESULT = 652,
	MM_POPUP_SKILL_AWAKEN_LIST = 653,
	MM_POPUP_UISHOP_STEP_LIST = 654,
	MM_POPUP_SERVERVISIT_MEMBERS = 655,
	MM_POPUP_SERVERVISIT_MEMBERS_SLOT = 656,
	MM_POPUP_SERVERVISITLLIST = 657,
	MM_POPUP_SERVERVISITSELECT = 658,
	MM_POPUP_SERVERVISITRELOCATION = 659,
	MM_SERVERVISITRELOCATION_SERVERLIST = 660,
	MM_SERVERVISITRELOCATION_SETLIST = 661,
	MM_HUD_SERVERVISITMAP = 662,
	MM_SERVERVISIT_WAYPOINT_CATEGORY = 663,
	MM_SERVERVISIT_WAYPOINT_LIST_SLOT = 664,
	MM_POPUP_SERVERVISIT_GUILDALLY = 665,
	MM_POPUP_SERVERVISIT_GUILDALLY_SLOT = 666,
	MM_POPUP_SERVERVISITSELECT_SLOT = 667,
	MM_B_CLOSED_TRAINING = 668,
	MM_POPUP_CLOSED_TRAINING_COLLECT = 669,
	MM_POPUP_CLOSED_TRAINING_ABILITY = 670,
	MM_POPUP_CLOSED_TRAINING_COLLECT_RESULT = 671,
	MM_POPUP_CLOSED_TRAINING_DETAIL_STAT = 672,
	MM_CLOSED_TRAINING_COLLECT_LIST_SLOT = 673,
	MM_CLOSED_TRAINING_ABILITY_SLOT = 674,
	MM_CLOSED_TRAINING_COLLECT_RESULT_SLOT = 675,
	MM_CLOSED_TRAINING_DETAIL_STAT_SLOT = 676,
	MM_GAMEOPTION_LANGUAGE_SLOT = 677,
	MM_WEMIX_WEBBROWSER = 678,
	MM_B_CLASS_PHASE = 679,
	MM_CLASS_PHASE_CLASS_SLOT = 680,
	MM_CLASS_PHASE_INFO_SLOT = 681,
	MM_CLASS_PHASE_SKILL_INFO_SLOT = 682,
	MM_CLASS_PHASE_SKILL_SLOT = 683,
	MM_SIEGE_OBSERVER_SITUATION_BOARD = 684,
	MM_B_FT_EXCHANGE = 685,
	MM_POPUP_NFTRELOCATION = 686,
	MM_NFTRELOCATION_SETLIST = 687,
	MM_B_XDRACO_STORAGE = 688,
	MM_B_XDRACO_SEALING = 689,
	MM_ITEMSEALING_SLOT = 690,
	MM_ITEMSEALING_MATERIAL = 691,
	SLOT = 692,
	MM_POPUP_XDRACO_SEALING = 693,
	MM_B_UISHOP_ADS = 694,
	MM_B_POPUP_NFT_CHARACTER_LIST = 695,
	MM_B_POPUP_NFT_CHARACTER_LIST_SLOT = 696,
	MM_POPUP_AUTO_EXTENDTIME = 697,
	MAX = 698,
};

enum class EAlphaChannelMode : uint8_t {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3,
};

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
};

enum class EMobileCSMQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	EMobileCSMQuality_MAX = 3,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
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

enum class EMeetingViewGrade : uint8_t {
	NONE = 0,
	GRADE2 = 1,
	GRADE3 = 2,
	GRADE4 = 3,
	GRADE5 = 4,
	ALL = 5,
	EMeetingViewGrade_MAX = 6,
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

enum class EMemberKind : uint8_t {
	Member_6 = 0,
	Member_11 = 1,
	Member_16 = 2,
	Member_MAX = 3,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5,
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

enum class EConditionTarget : uint8_t {
	Me = 0,
	Target = 1,
	EConditionTarget_MAX = 2,
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

enum class EDungeonTicketType : uint8_t {
	TYPE_NONE = 0,
	TYPE_SECRET_TICKET = 1,
	TYPE_SQUARE_TICKET = 2,
	TYPE_INDUN_TICKET = 3,
	TYPE_BOSS_INDUN_TICKET = 4,
	TYPE_WORLD_BOSS_TICKET = 5,
	TYPE_MAX = 6,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class EStoreType : uint8_t {
	NONE = 0,
	GOOGLE_PLAY = 1,
	APPLE_STORE = 2,
	ONE_STORE = 3,
	GALAXY_STORE = 4,
	ONE_STORE_PC = 5,
	STEAM = 6,
	XSOLLA = 7,
	MYCARD = 8,
	EStoreType_MAX = 9,
};

enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5,
};

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4,
};

enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4,
};

enum class EMiniGamePlayerMoveDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	EMiniGamePlayerMoveDirection_MAX = 3,
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

enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class ECheckPhaseImpactReason : uint8_t {
	BasicEndAttackAnim = 0,
	BasicNextAttack = 1,
	ExtendEndAttackAnim = 2,
	PCUpdateNextSkill = 3,
	ECheckPhaseImpactReason_MAX = 4,
};

enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 3,
	Unknown = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5,
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

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EDialoguePostion : uint8_t {
	NONE = 0,
	BOTTOM = 1,
	MIDDLE = 2,
	BOTTOM_UP = 3,
	EDialoguePostion_MAX = 4,
};

enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels_MAX = 5,
};

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EProgressStep : uint8_t {
	STEP_1 = 0,
	STEP_2 = 1,
	STEP_3 = 2,
	STEP_4 = 3,
	STEP_5 = 4,
	STEP_MAX = 5,
	None = 6,
	EProgressStep_MAX = 7,
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

enum class EVirtualKeyboardType : uint8_t {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6,
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
	MEVP_MAX = 13,
};

enum class EWin64GoogleSignInStatusCode : uint8_t {
	SUCCESS = 0,
	ERROR_FAILED = 1,
	ERROR_CANCELED = 2,
	EWin64GoogleSignInStatusCode_MAX = 3,
};

enum class EStopAutoMissionMsgType : uint8_t {
	Normal = 0,
	Main = 1,
	AccountChange = 2,
	InputDirection = 3,
	Party = 4,
	PartyAssemble = 5,
	AutoSetting = 6,
	ChannelChange = 7,
	AutoBattle = 8,
	AutoGather = 9,
	AirWalk = 10,
	ChatPosition = 11,
	EStopAutoMissionMsgType_MAX = 12,
};

enum class ToastLength : uint8_t {
	Short = 0,
	Long = 1,
	ToastLength_MAX = 2,
};

enum class ETimeStretchCurveMapping : uint8_t {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3,
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

enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class EOccupationAuctionState : uint8_t {
	INIT = 0,
	NONE = 1,
	STANDBY_AUCTION = 2,
	PROCEEDING_AUCTION = 3,
	EXTEND_AUCTION = 4,
	FAILURE_AUCTION = 5,
	ALLIANCE_INVITE = 6,
	STANDBY_BATTLE = 7,
	START_BATTLE = 8,
	END_BATTLE = 9,
	CONTENTS_CLOSE = 10,
	EOccupationAuctionState_MAX = 11,
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

enum class EGachaSkipButtonType : uint8_t {
	None = 0,
	ShowAll = 1,
	ResultImmediately = 2,
	EGachaSkipButtonType_MAX = 3,
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
	SCS_MAX = 9,
};

enum class EItemDataFeatureAvailability : uint8_t {
	NONE = 0,
	EQUIPMENT_RECOMMEND = 1,
	DEFAULT = 2,
	EItemDataFeatureAvailability_MAX = 3,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
};

enum class EGachaResultType : uint8_t {
	NONE = 0,
	PET = 1,
	SKILLBOOK = 2,
	DRAGON_HEART = 3,
	DRAGON_SCALE = 4,
	DRAGON_CLAW = 5,
	DRAGON_MATERIAL = 6,
	FIXED_PET = 7,
	EGachaResultType_MAX = 8,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EStyle_MirScrollBox : uint8_t {
	CustomStyle = 0,
	EmptyStyle = 1,
	EStyle_MAX = 2,
};

enum class TransportType : uint8_t {
	Car = 0,
	Feet = 1,
	PublicTransport = 2,
	TransportType_MAX = 3,
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

enum class EPakSearchOrder : uint8_t {
	DlcPakFirst = 0,
	AppPakFirst = 1,
	EPakSearchOrder_MAX = 2,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
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

enum class ESteamRequestMethod : uint8_t {
	GET = 0,
	POST = 1,
	ESteamRequestMethod_MAX = 2,
};

enum class USE_CONTROL_TYPE : uint8_t {
	None = 0,
	ChargingControl = 1,
	DodgeControl = 2,
	DirectionControl = 3,
	USE_CONTROL_MAX = 4,
};

enum class EUpdateClockSource : uint8_t {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	Timecode = 3,
	EUpdateClockSource_MAX = 4,
};

enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
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

enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class ERegionCode : uint8_t {
	ASIA = 0,
	EU = 1,
	NA = 2,
	ASIA2 = 3,
	NA2 = 4,
	SA = 5,
	ASIA3 = 6,
	ERegionCode_MAX = 7,
};

enum class VariantType : uint8_t {
	Null = 0,
	Int64 = 1,
	Float = 2,
	Bool = 3,
	String = 4,
	Vector = 5,
	Map = 6,
	VariantType_MAX = 7,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
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

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
};

enum class EMiniGameMonsterState : uint8_t {
	Idle = 0,
	Run = 1,
	Atk1 = 2,
	Atk2 = 3,
	Atk3 = 4,
	Hit = 5,
	Die = 6,
	EMiniGameMonsterState_MAX = 7,
};

enum class EAutoMissionState : uint8_t {
	None = 0,
	Running = 1,
	EAutoMissionState_MAX = 2,
};

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
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

enum class EDominionTabType : uint8_t {
	STRONGPOINT = 0,
	CASTLE_MAIN = 1,
	CASTLE_SUB = 2,
	MAX = 3,
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

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class EOneStoreResponseCode : uint8_t {
	IAP_SUCCESS = 0,
	IAP_ERROR_USER_CANCELED = 1,
	IAP_ERROR_SERVICE_UNAVAILABLE = 2,
	IAP_ERROR_BILLING_UNAVAILABLE = 3,
	IAP_ERROR_ITEM_UNAVAILABLE = 4,
	IAP_ERROR_DEVELOPER_ERROR = 5,
	IAP_ERROR_ERROR = 6,
	IAP_ERROR_ITEM_ALREADY_OWNED = 7,
	IAP_ERROR_ITEM_NOT_OWNED = 8,
	IAP_ERROR_FAIL = 9,
	IAP_ERROR_NEED_LOGIN = 10,
	IAP_ERROR_NEED_UPDATE = 11,
	IAP_ERROR_SECURITY_ERROR = 12,
	IAP_ERROR_DATA_PARSING = 13,
	IAP_ERROR_SIGNATURE_VERIFICATION = 14,
	IAP_ERROR_ILLEGAL_ARGUMENT = 15,
	IAP_ERROR_UNDEFINED_CODE = 16,
	IAP_MAX = 17,
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

enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
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

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4,
};

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	MAX = 2,
};

enum class ESLIDEBAR_TYPE : uint8_t {
	NONE = 0,
	ESLIDEBAR_CH1 = 1,
	ESLIDEBAR_CH2 = 2,
	ESLIDEBAR_MAX = 3,
};

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class EPlayAniType : uint8_t {
	NONE = 0,
	MOVING = 1,
	FIRST = 2,
	SECOND = 3,
	IDLE = 4,
	EPlayAniType_MAX = 5,
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

enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	ESlateDebuggingFocusEvent_MAX = 3,
};

enum class ECompleteIAPEntryCode : uint8_t {
	CHECK_OWNED_PRODUCT = 0,
	USER_REQUEST_PURCHASE_PRODUCT = 1,
	CHASH_ITEM_START_FAIL = 2,
	REQUEST_PRODUCT_DETAILS = 3,
	REQUEST_PURCHASE_PRODUCT = 4,
	REQUEST_PURCHASE_PRODUCT_CHECKOUT = 5,
	REQUEST_CASH_ITEM_VERIFY = 6,
	RESPONSE_CASH_ITEM_VERIFY = 7,
	REQUEST_CASH_ITEM_PRE_VERIFY = 8,
	RESPONSE_CASH_ITEM_PRE_VERIFY = 9,
	REQUEST_CASH_ITEM_PROMO_VERIFY = 10,
	RESPONSE_CASH_ITEM_PROMO_VERIFY = 11,
	REQUEST_STORE_LOGIN = 12,
	REQUEST_STORE_UPDATE = 13,
	UNEXPECTED_PURCHASE_RECEIPT_FAIL = 14,
	UNEXPECTED_PURCHASE_RECEIPT_FAIL_TIMEOUT = 15,
	RESPONSE_PAY_REFUND = 16,
	ECompleteIAPEntryCode_MAX = 17,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
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

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
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
	MATUSAGE_MAX = 16,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4,
};

enum class DISTANCE_TYPE : uint8_t {
	None = 0,
	Aggro = 1,
	Near = 2,
	Far = 3,
	Random = 4,
	DISTANCE_MAX = 5,
};

enum class EReason_UpdateTarget : uint8_t {
	Unknown = 0,
	SharedTarget = 1,
	TargetHide = 2,
	Invalid = 3,
	Clear = 4,
	Search = 5,
	HasInput = 6,
	Renew = 7,
	CounterClear = 8,
	AttackMe = 9,
	UneanbleRender = 10,
	FindEnemy = 11,
	Quest = 12,
	Around = 13,
	SkipTrace = 14,
	Die = 15,
	UneablePK = 16,
	TargetList = 17,
	TargetLock = 18,
	SubMenuAttack = 19,
	InSafeArea = 20,
	SelfComeback = 21,
	AttackHeightLimit = 22,
	EReason_MAX = 23,
};

enum class EARSessionType : uint8_t {
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	EARSessionType_MAX = 7,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class ATTACK_ANI_TYPE : uint8_t {
	None = 0,
	NormalAttack = 1,
	SkillAttack = 2,
	EventAttack = 3,
	ATTACK_ANI_MAX = 4,
};

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class EMapMiniInfoWayPointType : uint8_t {
	None = 0,
	Default = 1,
	Monster = 2,
	MiningZone = 3,
	NPC = 4,
	FixedNPC = 5,
	SummonArea = 6,
	EventNPC = 7,
	Sanctum = 8,
	Max = 9,
};

enum class PIERCE_TYPE : uint8_t {
	None = 0,
	PierceAtk = 1,
	ChainAtk = 2,
	PIERCE_MAX = 3,
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

enum class EParticleDrawEffect : uint8_t {
	None = 0,
	NoBlending = 1,
	PreMultipliedAlpha = 2,
	NoGamma = 3,
	InvertAlpha = 4,
	NoPixelSnapping = 5,
	DisabledEffect = 6,
	IgnoreTextureAlpha = 7,
	ReverseGamma = 8,
	EParticleDrawEffect_MAX = 9,
};

enum class EInertializationBoneState : uint8_t {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
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

enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
};

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
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

enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class ECondtionTriggerType : uint8_t {
	HP = 0,
	ECondtionTriggerType_MAX = 1,
};

enum class E_ACTION_STATE : uint8_t {
	None = 0,
	Idle = 1,
	Chase = 2,
	Attack = 3,
	Run = 4,
	Move = 5,
	Stop = 6,
	Roam = 7,
	Heal = 8,
	Warp = 9,
	E_ACTION_MAX = 10,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class GUIDE_TYPE : uint8_t {
	None = 0,
	SectorForm = 1,
	Circle = 2,
	Direct = 3,
	Cross = 4,
	GUIDE_MAX = 5,
};

enum class EItemGetWayCategoryType : uint8_t {
	None = 0,
	Store = 1,
	Cash_Store = 2,
	Meditation = 3,
	Monster = 4,
	NamedMonster = 5,
	Gather = 6,
	Dungeon_Hunt = 7,
	Dungeon_Gather = 8,
	ItemMake = 9,
	Achievement = 10,
	ItemUpgrade = 11,
	DictionaryMonster = 12,
	OpenBox = 13,
	NPCStore = 14,
	MagicSquare = 15,
	Boss_Monster = 16,
	Quest_Mission = 17,
	Quest_Relation = 18,
	Mine = 19,
	Box_Search = 20,
	Quest_Request = 21,
	Daily_Work = 22,
	Great_Building = 23,
	Secret_Dungeon = 24,
	NPC_ItemMake = 25,
	Daily_HomeWork = 26,
	Gacha = 27,
	Material_Compse = 28,
	MainQuest = 29,
	NPC_Exchange = 30,
	Guild_SHOP = 31,
	Dungeon_Shop = 32,
	Quest_DropItem = 33,
	Transcendence = 34,
	MAX_ItemGetWayType = 35,
	EItemGetWayCategoryType_MAX = 36,
};

enum class EPKModeType : uint8_t {
	BP_DefaultNone = 0,
	Peace = 1,
	GoodEvil = 2,
	Enemy = 3,
	ALLKill = 4,
	Duel = 5,
	Siege = 6,
	War = 7,
	Peace_ServerVisit = 8,
	GoodEvil_ServerVisit = 9,
	Enemy_ServerVisit = 10,
	ALLKill_ServerVisit = 11,
	EPKModeType_MAX = 12,
};

enum class EMakeItemType : uint8_t {
	Normal = 0,
	Normal_Agency = 1,
	Special_UI_Item = 2,
	Special_NPC_Item = 3,
	EMakeItemType_MAX = 4,
};

enum class EADIOSError : uint8_t {
	INVALID_REQUEST = 0,
	NO_FILL = 1,
	NETWORK_ERROR = 2,
	SERVER_ERROR = 3,
	DEVICE_VERSION_LOW = 4,
	TIMEOUT = 5,
	INTERSTITIAL_ALREADY_USED = 6,
	INTERNAL_ERROR = 7,
	REWARDED_ALREADY_USED = 8,
	EADIOSError_MAX = 9,
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

enum class EIAPLogLevel : uint8_t {
	None = 0,
	Trace = 1,
	Information = 2,
	Debug = 3,
	ALL = 4,
	EIAPLogLevel_MAX = 5,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EQuestDialogueType : uint8_t {
	None = 0,
	MainQuest = 1,
	RelationQuest = 2,
	RequestQuest = 3,
	EQuestDialogueType_MAX = 4,
};

enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

enum class EWorld_Type : uint8_t {
	None = 0,
	Game = 1,
	Editor = 2,
	PIE = 3,
	EditorPreview = 4,
	GamePreview = 5,
	GameRPC = 6,
	Inactive = 7,
	EWorld_MAX = 8,
};

enum class EMiniGameMonsterMoveDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	EMiniGameMonsterMoveDirection_MAX = 3,
};

enum class EMail_AddressbookTab : uint8_t {
	eTab_None = 0,
	eTab_Friend = 1,
	eTab_Guild = 2,
	eTab_MAX = 3,
};

enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

enum class EEmitterType : uint8_t {
	Gravity = 0,
	Radial = 1,
	Curve = 2,
	EEmitterType_MAX = 3,
};

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
};

enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class COSTUME_PARTS : uint8_t {
	PARTS_NONE = 0,
	PARTS_WEAPON = 1,
	PARTS_HAIR = 2,
	PARTS_CLOTHES = 3,
	PARTS_SHOULDERS = 4,
	PARTS_BACK = 5,
	PARTS_WAIST = 6,
	PARTS_MAX = 7,
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

enum class EContentsGetItemMsgType : uint8_t {
	Single_Item = 0,
	Single_Cost = 1,
	Multiple = 2,
	Special = 3,
	MakeSuccess_Item = 4,
	MakeSuccessBonus_Item = 5,
	MakeFail_Item = 6,
	EContentsGetItemMsgType_MAX = 7,
};

enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
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

enum class EItemGetWayType : uint8_t {
	NONE = 0,
	SHOP = 1,
	HUNTING = 2,
	COLLECTING = 3,
	GUILD_GIFT = 4,
	NPC_MAKE = 5,
	UI_MAKE = 6,
	ACHIEVEMENT = 7,
	COLLECTION = 8,
	RANDOMBOX = 9,
	SHOP_NPC = 10,
	QUEST_MISSION = 11,
	RELATION = 12,
	QUEST_DAILY = 13,
	QUEST_REQUEST = 14,
	NPC_BARTER = 15,
	JEWEL_UPGRADE = 16,
	GREAT_BUILDING = 17,
	FIRST_CLEAR_REWARD = 18,
	TRADE = 19,
	GACHA = 20,
	ITEM_MATERIAL_COMPOSE = 21,
	MAIN_QUEST = 22,
	USER_EVENT = 23,
	GUILD_SHOP = 24,
	DUNGEON_SHOP = 25,
	QUEST_DROP = 26,
	TRANSCENDENCE = 27,
	GUILD_EXPEDITION_CHALLANGE = 28,
	GUILD_GIFT_CONTRIBUTE = 29,
	EItemGetWayType_MAX = 30,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class ECommonBtnType : uint8_t {
	None = 0,
	MAIN_PRACTICE_2 = 1,
	MAIN_PRACTICE_3 = 2,
	SUB_POSITIVE = 3,
	SUB_NEGATIVE = 4,
	SUB_PRACTICE_2 = 5,
	SUB_PRACTICE_3 = 6,
	SUB_UNSEAL = 7,
	OTHER_RECT_2 = 8,
	OTHER_RECT_3 = 9,
	OTHER_CIRCLE_2 = 10,
	OTHER_CIRCLE_3 = 11,
	OTHER_ROUND_2 = 12,
	PARTY_2 = 13,
	SUB_POSITIVE_GLOW = 14,
	SUB_POSITIVE_GOLD = 15,
	ECommonBtnType_MAX = 16,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EGachaType : uint8_t {
	NONE = 0,
	PET = 1,
	SKILLBOOK = 2,
	ITEM = 3,
	EGachaType_MAX = 4,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class ImageSize : uint8_t {
	Original = 0,
	Max256 = 1,
	Max512 = 2,
	Max1024 = 3,
	Max2048 = 4,
	ImageSize_MAX = 5,
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

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EAppleRequestMethod : uint8_t {
	GET = 0,
	POST = 1,
	EAppleRequestMethod_MAX = 2,
};

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	DefaultMethod = 3,
	ERBFDistanceMethod_MAX = 4,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

enum class DAMAGE_TYPE : uint8_t {
	None = 0,
	Physical = 1,
	Magic = 2,
	DAMAGE_MAX = 3,
};

enum class ESendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3,
};

enum class ECheatSuccessOrFail : uint8_t {
	SUCCESS = 0,
	FAIL = 1,
	ECheatSuccessOrFail_MAX = 2,
};

enum class EOccupationBidState : uint8_t {
	NONE = 0,
	DEFENSE = 1,
	OFFENSE = 2,
	EOccupationBidState_MAX = 3,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

enum class EPhotoModeType : uint8_t {
	None = 0,
	Pose = 1,
	Filter = 2,
	DepthOfField = 3,
	FieldOfView = 4,
	Brightness = 5,
	LogoImage = 6,
	LookAt = 7,
	Option = 8,
	Exit = 9,
	EPhotoModeType_MAX = 10,
};

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EStringTableType : uint8_t {
	NONE = 0,
	STRING_UI = 1,
	STRING_TEMPLATE = 2,
	STRING_BUILTIN = 3,
	EStringTableType_MAX = 4,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class EProgressTextType : uint8_t {
	Empty = 0,
	Slash = 1,
	Percent = 2,
	EProgressTextType_MAX = 3,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class IMPACT_TYPE : uint8_t {
	Target = 0,
	TargetCircle = 1,
	SelfCircle = 2,
	SelfDirect = 3,
	Cross = 4,
	IMPACT_MAX = 5,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class EStageType_PartyLeftTab : uint8_t {
	Party = 0,
	Boss_Dungeon = 1,
	Party_Dungeon = 2,
	Guild = 3,
	EStageType_MAX = 4,
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

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class EObjectActivateType : uint8_t {
	ALWAYS = 0,
	QUEST = 1,
	CHARLEVEL = 2,
	NEED_GUILD = 3,
	RELATION_QUEST = 4,
	MISSION = 5,
	REPLACE_MISSION = 6,
	REQUEST_MISSION = 7,
	NECESSARY_ITEM = 8,
	SANCTUM = 9,
	OBJECT_MON_GEN = 10,
	NOACTIVE = 11,
	EObjectActivateType_MAX = 12,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class EGenderType : uint8_t {
	NEUTRAL = 0,
	MALE = 1,
	FEMALE = 2,
	EGenderType_MAX = 3,
};

enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class EObject_GatherType : uint8_t {
	NONE = 0,
	PLANTS = 1,
	ORE = 2,
	BOX = 3,
	JINKI = 4,
	BLACKIRON = 5,
	EObject_MAX = 6,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class EWaypointType : uint8_t {
	NONE = 0,
	DEFAULT = 1,
	MONSTER = 2,
	COLLECT_ZONE = 3,
	NPC = 4,
	SUMMON_AREA = 5,
	SANCTUM = 6,
	EWaypointType_MAX = 7,
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

enum class ERankingRewardType : uint8_t {
	Daily = 0,
	Weekly = 1,
	Season = 2,
	ERankingRewardType_MAX = 3,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
};

enum class EIAPState : uint8_t {
	NONE = 0,
	PRODUCT_DETAILS = 1,
	PURCHASING = 2,
	PAY_START = 3,
	PAY_VERIFY = 4,
	CONSUME_PRODUCT = 5,
	EIAPState_MAX = 6,
};

enum class ChannelImportance : uint8_t {
	ImportanceNone = 0,
	ImportanceMin = 1,
	ImportanceLow = 2,
	ImportanceDefault = 3,
	ImportanceHigh = 4,
	ImportanceMax = 5,
	ImportanceUnspecified = 6,
	ChannelImportance_MAX = 7,
};

enum class EContentsSceneType : uint8_t {
	NONE = 0,
	Force = 1,
	Equip = 2,
	Mastery = 3,
	Vehicle = 4,
	Customizing = 5,
	Costume = 6,
	CharacterSelect = 7,
	ClassSelect = 8,
	Pet = 9,
	Costume_Uniform = 10,
	EContentsSceneType_MAX = 11,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EItemMakeAgency_PeriodType : uint8_t {
	NO_PERIOD = 0,
	PERIOD = 1,
	EItemMakeAgency_MAX = 2,
};

enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2,
};

enum class EADClientError : uint8_t {
	NONE = 0,
	MAKE_REWARDED_AD_FAILED = 1,
	LOADED_AD_OBJECT_NULL = 2,
	AD_VERIFY_RETRY_EMPTY_CLIENT_GUID = 3,
	EADClientError_MAX = 4,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EIAPPurchaseState : uint8_t {
	NONE = 0,
	START_PURCHASE_PRODUCT = 1,
	CHECK_OWNED_PRODUCT = 2,
	RETRY_PURCHASE_PRODUCT = 3,
	QUERY_RECEIPT = 4,
	REQUEST_PRODUCT_DETAILS = 5,
	RESPONSE_PRODUCT_DETAILS = 6,
	REQUEST_CASH_ITEM_START = 7,
	RESPONSE_CASH_ITEM_START = 8,
	REQUEST_PURCHASE_PRODUCT = 9,
	RESPONSE_PURCHASE_PRODUCT = 10,
	REQUEST_CASH_ITEM_VERIFY = 11,
	RESPONSE_CASH_ITEM_VERIFY = 12,
	REQUEST_CONSUME_PRODUCT = 13,
	RESPONSE_CONSUME_PRODUCT = 14,
	REQUEST_CASH_ITEM_PRE_VERIFY = 15,
	RESPONSE_CASH_ITEM_PRE_VERIFY = 16,
	REQUEST_CASH_ITEM_PROMO_VERIFY = 17,
	RESPONSE_CASH_ITEM_PROMO_VERIFY = 18,
	CONSUME_RECEIPT = 19,
	EIAPPurchaseState_MAX = 20,
};

