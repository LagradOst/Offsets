#pragma once

enum class EQStartButton : uint8_t {
	E_QS_BTN_CANCEL = 0,
	E_QS_BTN_SAVEANDCLOSE = 1,
	E_QS_BTN_SAVEANDSTART = 2,
	E_QS_BTN_MAX = 3,
};

enum class Tutorial_LO_Type : uint8_t {
	TLOT_Target = 0,
	TLOT_Waypoint = 1,
	TLOT_MAX = 2,
};

enum class ATTCK_SKILL_ACTOR : uint8_t {
	ASA_SentryGun = 0,
	ASA_Trophy = 1,
	ASA_MAX = 2,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EOnlineGameSearchEntryType : uint8_t {
	OGSET_Property = 0,
	OGSET_LocalizedSetting = 1,
	OGSET_ObjectProperty = 2,
	OGSET_MAX = 3,
};

enum class EMeshBeaconConnectionResult : uint8_t {
	MB_ConnectionResult_Succeeded = 0,
	MB_ConnectionResult_Duplicate = 1,
	MB_ConnectionResult_Timeout = 2,
	MB_ConnectionResult_Error = 3,
	MB_ConnectionResult_MAX = 4,
};

enum class EDigitalButtonActions : uint8_t {
	DBA_None = 0,
	DBA_MoveForward = 1,
	DBA_MoveBackward = 2,
	DBA_StrafeLeft = 3,
	DBA_StrafeRight = 4,
	DBA_TurnLeft = 5,
	DBA_TurnRight = 6,
	DBA_Jump = 7,
	DBA_Duck = 8,
	DBA_Sprint = 9,
	DBA_Fire = 10,
	DBA_AltFire = 11,
	DBA_Reload = 12,
	DBA_Use = 13,
	DBA_HostageTalk = 14,
	DBA_SwitchToBestWeapon = 15,
	DBA_PrevWeapon = 16,
	DBA_NextWeapon = 17,
	DBA_UseSkill0 = 18,
	DBA_UseSkill1 = 19,
	DBA_UseSkill2 = 20,
	DBA_UseSkill3 = 21,
	DBA_SwitchPreWeapon = 22,
	DBA_SetWalking = 23,
	DBA_ToggleSilencer = 24,
	DBA_ToggleLaserSite = 25,
	DBA_ToggleGrenadeLauncher = 26,
	DBA_ThrowWeapon = 27,
	DBA_PresetWeapon1 = 28,
	DBA_PresetWeapon2 = 29,
	DBA_PresetWeapon3 = 30,
	DBA_ShowMenu = 31,
	DBA_ShowScores = 32,
	DBA_ShowMap = 33,
	DBA_ToggleMinimap = 34,
	DBA_Jump_Gamepad = 35,
	DBA_StrafeLeft_Gamepad = 36,
	DBA_MoveForward_Gamepad = 37,
	DBA_TurnLeft_Gamepad = 38,
	DBA_SwitchToBestWeapon_Gamepad = 39,
	DBA_SensitiveDown = 40,
	DBA_SensitiveUp = 41,
	DBA_AutoAssist = 42,
	DBA_ToggleRadioChat1 = 43,
	DBA_ToggleRadioChat2 = 44,
	DBA_ShowHelpImage = 45,
	DBA_ShowWholeMap = 46,
	DBA_SwitchWeapon1 = 47,
	DBA_SwitchWeapon2 = 48,
	DBA_SwitchWeapon3 = 49,
	DBA_SwitchWeapon4 = 50,
	DBA_SwitchWeapon5 = 51,
	DBA_PrintScreen = 52,
	DBA_PickupWeapon = 53,
	DBA_Stare = 54,
	DBA_DashSwap = 55,
	DBA_ToggleHideHUD = 56,
	DBA_ToggleChaItemFX = 57,
	DBA_Respawn_Ground = 58,
	DBA_Respawn_Air = 59,
	DBA_ToggleAllChat = 60,
	DBA_ToggleTeamChat = 61,
	DBA_LookBack = 62,
	DBA_ToggleHideTeamIFF = 63,
	DBA_StartSecZoom = 64,
	DBA_UseSpray = 65,
	DBA_ToggleVivoxInput = 66,
	DBA_AddIngameMarker = 67,
	DBA_MAX = 68,
};

enum class Publisher : uint8_t {
	PublisherNSS = 0,
	PublisherSteam = 1,
	PublisherInnova = 2,
	PublisherValofe = 3,
	PublisherVFun = 4,
	PublisherLine = 5,
	PublisherMax = 6,
	PublisherPmang = 7,
	PublisherHangameJapan = 8,
	Publisher_MAX = 9,
};

enum class ESceneCaptureViewMode : uint8_t {
	SceneCapView_Lit = 0,
	SceneCapView_Unlit = 1,
	SceneCapView_LitNoShadows = 2,
	SceneCapView_Wire = 3,
	SceneCapView_Game = 4,
	SceneCapView_MAX = 5,
};

enum class EWeaponGroup : uint8_t {
	EWeaponGroup_None = 0,
	EWeaponGroup_Pri = 1,
	EWeaponGroup_Sub = 2,
	EWeaponGroup_Melee = 3,
	EWeaponGroup_Grenade = 4,
	EWeaponGroup_Fifth = 5,
	EWeaponGroup_Sixth = 6,
	EWeaponGroup_Seventh = 7,
	EWeaponGroup_Eighth = 8,
	EWeaponGroup_Ninth = 9,
	EWeaponGroup_Mission = 10,
	EWeaponGroup_Skill = 11,
	EWeaponGroup_MAX = 12,
};

enum class ESetMode : uint8_t {
	SetMode_Toggle = 0,
	SetMode_Enable = 1,
	SetMode_Disable = 2,
	SetMode_MAX = 3,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class VoteState : uint8_t {
	VT_NONE = 0,
	VT_READY = 1,
	VT_YES = 2,
	VT_NO = 3,
	VT_CANT = 4,
	VT_MAX = 5,
};

enum class E_Control_SUBTAB_Index : uint8_t {
	CSTI_MouseSens = 0,
	CSTI_KeyBinding = 1,
	CSTI_MAX = 2,
};

enum class EMeshType : uint8_t {
	MeshType_StaticMesh = 0,
	MeshType_SkeletalMesh = 1,
	MeshType_MAX = 2,
};

enum class EHitBodyType : uint8_t {
	E_Head = 0,
	E_Chest = 1,
	E_Arm = 2,
	E_Leg = 3,
	E_MetalPart = 4,
	E_PS_Normal = 5,
	E_HeadCenter = 6,
	E_Chestupper = 7,
	E_PS_Weak = 8,
	EHitBodyType_None = 9,
	EHitBodyType_MAX = 10,
};

enum class E_SERVICE_TYPE : uint8_t {
	EST_HIDE = 0,
	EST_DISPLAY = 1,
	EST_MAX = 2,
};

enum class EKillDeathPlayerType : uint8_t {
	Player_Friendly = 0,
	Player_Enemy = 1,
	Player_MySelf = 2,
	Player_MAX = 3,
};

enum class ELoginProcessType : uint8_t {
	ELPT_Wait = 0,
	ELPT_Load = 1,
	ELPT_Succeed = 2,
	ELPT_MAX = 3,
};

enum class ESpeedTreeMeshType : uint8_t {
	STMT_MinMinusOne = 0,
	STMT_Branches1 = 1,
	STMT_Branches2 = 2,
	STMT_Fronds = 3,
	STMT_LeafCards = 4,
	STMT_LeafMeshes = 5,
	STMT_Billboards = 6,
	STMT_Max = 7,
};

enum class GFxAlign : uint8_t {
	Align_Center = 0,
	Align_TopCenter = 1,
	Align_BottomCenter = 2,
	Align_CenterLeft = 3,
	Align_CenterRight = 4,
	Align_TopLeft = 5,
	Align_TopRight = 6,
	Align_BottomLeft = 7,
	Align_BottomRight = 8,
	Align_MAX = 9,
};

enum class EStatGameSetType : uint8_t {
	EStatGameSetType_None = 0,
	EStatGameSetType_Map = 1,
	EStatGameSetType_Mode = 2,
	EStatGameSetType_MAX = 3,
};

enum class E_MAIL_MONEY_TYPE : uint8_t {
	E_MAIL_MONEY_TYPE_GOLD = 0,
	E_MAIL_MONEY_TYPE_MEDAL = 1,
	E_MAIL_MONEY_TYPE_GCOIN = 2,
	E_MAIL_MONEY_TYPE_MCOIN = 3,
	E_MAIL_MONEY_TYPE_BSOIN = 4,
	E_MAIL_MONEY_TYPE_WINCOIN = 5,
	E_MAIL_MONEY_TYPE_MAX = 6,
};

enum class EParticleLevelInfluenceType : uint8_t {
	LIT_Never = 0,
	LIT_OutsidePhysicsVolumes = 1,
	LIT_Always = 2,
	LIT_MAX = 3,
};

enum class ParticleKillVolumeType : uint8_t {
	ParticleKillVolumeType_None = 0,
	ParticleKillVolumeType_Height = 1,
	ParticleKillVolumeType_AABB = 2,
	ParticleKillVolumeType_MAX = 3,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class ERouteType : uint8_t {
	ERT_Linear = 0,
	ERT_Loop = 1,
	ERT_Circle = 2,
	ERT_MAX = 3,
};

enum class ASType : uint8_t {
	AS_Undefined = 0,
	AS_Null = 1,
	AS_Number = 2,
	AS_Int = 3,
	AS_String = 4,
	AS_Boolean = 5,
	AS_MAX = 6,
};

enum class DXFuncType : uint8_t {
	DXFuncType_EndScene = 0,
	DXFuncType_DrawIndexedPrimitive = 1,
	DXFuncType_SetStreamSource = 2,
	DXFuncType_MAX = 3,
};

enum class EScopeEdge : uint8_t {
	EPSA_Top = 0,
	EPSA_Bottom = 1,
	EPSA_Left = 2,
	EPSA_Right = 3,
	EPSA_None = 4,
	EPSA_MAX = 5,
};

enum class EFocusType : uint8_t {
	FOCUS_Distance = 0,
	FOCUS_Position = 1,
	FOCUS_MAX = 2,
};

enum class ITEM_PROVIDE_TYPE : uint8_t {
	ITEM_PROVIDE_TYPE_SHOP = 0,
	ITEM_PROVIDE_TYPE_BASIC = 1,
	ITEM_PROVIDE_TYPE_MAX = 2,
};

enum class EStatsFetchType : uint8_t {
	SFT_Player = 0,
	SFT_CenteredOnPlayer = 1,
	SFT_Friends = 2,
	SFT_TopRankings = 3,
	SFT_MAX = 4,
};

enum class EDirectionalSeqMode : uint8_t {
	EDSM_2Way = 0,
	EDSM_4Way = 1,
	EDSM_8Way = 2,
	EDSM_MAX = 3,
};

enum class ELocationStaticVertSurfaceSource : uint8_t {
	VERTSTATICSURFACESOURCE_Vert = 0,
	VERTSTATICSURFACESOURCE_Surface = 1,
	VERTSTATICSURFACESOURCE_MAX = 2,
};

enum class eStatType_HitPart : uint8_t {
	eStatHitPart_Body = 0,
	eStatHitPart_Head = 1,
	eStatHitPart_Fatal = 2,
	eStatHitPart_MAX = 3,
};

enum class EProfileOmniDirEvadeOptions : uint8_t {
	PODI_Off = 0,
	PODI_On = 1,
	PODI_MAX = 2,
};

enum class EMatchStartErrorType : uint8_t {
	EMatchStartErr_None = 0,
	EMatchStartErr_LoadedPlayerNotEnough = 1,
	EMatchStartErr_ClanMatchPlayerNotEnough = 2,
	EMatchStartErr_MatchCancled = 3,
	EMatchStartErr_MAX = 4,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EPhysEffectType : uint8_t {
	EPMET_Impact = 0,
	EPMET_Slide = 1,
	EPMET_MAX = 2,
};

enum class CombatSkillType : uint8_t {
	CST_NONE = 0,
	CST_Active = 1,
	CST_Passive = 2,
	CST_MAX = 3,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class ECrosshairType : uint8_t {
	Crosshair_Empty = 0,
	Crosshair_Basic = 1,
	Crosshair_GL = 2,
	Crosshair_RL = 3,
	Crosshair_LaserSight = 4,
	Crosshair_MAX = 5,
};

enum class ECCSSelectTargetAlgorithm : uint8_t {
	ECCSSelectTarget_Closest = 0,
	ECCSSelectTarget_ClosestAndVisible = 1,
	ECCSSelectTarget_ScriptedRoute = 2,
	ECCSSelectTarget_Empty = 3,
	ECCSSelectTarget_ClosestMissionActor = 4,
	ECCSSelectTarget_ClosestPlayer = 5,
	ECCSSelectTarget_MAX = 6,
};

enum class ELanBeaconState : uint8_t {
	LANB_NotUsingLanBeacon = 0,
	LANB_Hosting = 1,
	LANB_Searching = 2,
	LANB_MAX = 3,
};

enum class ESoundClassName : uint8_t {
	Master = 0,
	ESoundClassName_MAX = 1,
};

enum class ESkillType : uint8_t {
	ESKT_None = 0,
	ESKT_WeaponUsed = 1,
	ESKT_Instant = 2,
	ESKT_Passive = 3,
	ESKT_MAX = 4,
};

enum class ClanFindErrorType : uint8_t {
	ENNET_ClanFind_NotSet = 0,
	ENNET_ClanFind_NoTARGE = 1,
	ENNET_ClanFind_Close = 2,
	ENNET_ClanFind_MAX = 3,
};

enum class PENALTY_TYPE : uint8_t {
	PENALTY_TYPE_MATCH_START_REJECT = 0,
	PENALTY_TYPE_CHANNEL_ENTER_REJECT = 1,
	PENALTY_TYPE_CHATTING_REJECT = 2,
	PENALTY_TYPE_MAX = 3,
};

enum class EClanChangePopupMode : uint8_t {
	EClanChagePopup_Name = 0,
	EClanChangePopup_Color = 1,
	EClanChangePopup_Emblem = 2,
	EClanChangePopup_MAX = 3,
	EClanChangePopupMode_MAX = 4,
};

enum class EChattingType : uint8_t {
	ECHAT_TALK = 0,
	ECHAT_WHISPER_TO = 1,
	ECHAT_WHISPER_FROM = 2,
	ECHAT_CLAN = 3,
	ECHAT_SYSTEM = 4,
	ECHAT_SYSTEM_ACCESS_FRIEND = 5,
	ECHAT_SYSTEM_ACCESS_CLAN = 6,
	ECHAT_SYSTEM_NORMAL = 7,
	ECHAT_SYSTEM_MODE = 8,
	ECHAT_SYSTEM_GM = 9,
	ECHAT_SYSTEM_CLAN_NOTICE = 10,
	ECHAT_SYSTEM_ENTRANCE = 11,
	ECHAT_SYSTEM_MTS = 12,
	ECHAT_SYSTEM_KICK = 13,
	ECHAT_TEAM_CHAT = 14,
	ECHAT_TEAM_DEAD = 15,
	ECHAT_ALL_CHAT = 16,
	ECHAT_ALL_DEAD = 17,
	ECHAT_RADIO_MESSAGE = 18,
	ECHAT_NOTICE = 19,
	ECHAT_EVENT = 20,
	ECHAT_TIP = 21,
	ECHAT_DEV = 22,
	ECHAT_CHAMPIONSHIP_OBSERVER = 23,
	ECHAT_MAX = 24,
};

enum class EProcBuildingEdge : uint8_t {
	EPBE_Top = 0,
	EPBE_Bottom = 1,
	EPBE_Left = 2,
	EPBE_Right = 3,
	EPBE_MAX = 4,
};

enum class EFaceFXRegOp : uint8_t {
	FXRO_Add = 0,
	FXRO_Multiply = 1,
	FXRO_Replace = 2,
	FXRO_MAX = 3,
};

enum class EMobileValueSource : uint8_t {
	MVS_Constant = 0,
	MVS_VertexColorRed = 1,
	MVS_VertexColorGreen = 2,
	MVS_VertexColorBlue = 3,
	MVS_VertexColorAlpha = 4,
	MVS_BaseTextureRed = 5,
	MVS_BaseTextureGreen = 6,
	MVS_BaseTextureBlue = 7,
	MVS_BaseTextureAlpha = 8,
	MVS_MaskTextureRed = 9,
	MVS_MaskTextureGreen = 10,
	MVS_MaskTextureBlue = 11,
	MVS_MaskTextureAlpha = 12,
	MVS_NormalTextureAlpha = 13,
	MVS_EmissiveTextureRed = 14,
	MVS_EmissiveTextureGreen = 15,
	MVS_EmissiveTextureBlue = 16,
	MVS_EmissiveTextureAlpha = 17,
	MVS_MAX = 18,
};

enum class ECCSMovementSpeed : uint8_t {
	CCSMovementSpeed_Walk = 0,
	CCSMovementSpeed_Run = 1,
	CCSMovementSpeed_MAX = 2,
};

enum class ClanPopupMode : uint8_t {
	CPM_InitPw = 0,
	CPM_ChangePw = 1,
	CPM_ShutdownPw = 2,
	CPM_Join = 3,
	CPM_Notice = 4,
	CPM_Introduce = 5,
	CPM_Max = 6,
};

enum class EQuestCountType : uint8_t {
	EQCT_None = 0,
	EQCT_Time = 1,
	EQCT_MAX = 2,
};

enum class EMarkerType : uint8_t {
	MARKER_TYPE_NONE = 0,
	MARKER_TYPE_AIM = 1,
	MARKER_TYPE_MAX = 2,
};

enum class EItemFXView : uint8_t {
	EItemFXView_1P = 0,
	EItemFXView_3P = 1,
	EItemFXView_MAX = 2,
};

enum class EKillTargetType : uint8_t {
	EKillType_Player = 0,
	EKillType_AIPawn = 1,
	EKillType_Suicide = 2,
	EKillType_MAX = 3,
};

enum class EIFFType : uint8_t {
	EIT_NONE = 0,
	EIT_Friendly_Normal = 1,
	EIT_Friendly_Targeted = 2,
	EIT_Friendly_Hide = 3,
	EIT_Friendly_Flash = 4,
	EIT_Friendly_ChampionShip_Obsever = 5,
	EIT_Enemy_Targeted = 6,
	EIT_Enemy_Flash = 7,
	EIT_Enemy_ChampionShip_Obsever = 8,
	EIT_AI_Enemy_Targeted = 9,
	EIT_MAX = 10,
};

enum class ETTSSpeaker : uint8_t {
	TTSSPEAKER_Paul = 0,
	TTSSPEAKER_Harry = 1,
	TTSSPEAKER_Frank = 2,
	TTSSPEAKER_Dennis = 3,
	TTSSPEAKER_Kit = 4,
	TTSSPEAKER_Betty = 5,
	TTSSPEAKER_Ursula = 6,
	TTSSPEAKER_Rita = 7,
	TTSSPEAKER_Wendy = 8,
	TTSSPEAKER_MAX = 9,
};

enum class GrenadeUIType : uint8_t {
	EGUIT_None = 0,
	EGUIT_HandGrenade = 1,
	EGUIT_Smoke = 2,
	EGUIT_MAX = 3,
};

enum class ERandomBoxShopCoinType : uint8_t {
	E_RNDSHOP_COIN_ALL = 0,
	E_RNDSHOP_COIN_CASH = 1,
	E_RNDSHOP_GOLD = 2,
	E_RNDSHOP_MEDAL = 3,
	E_RNDSHOP_COIN_BS = 4,
	E_RNDSHOP_COIN_M = 5,
	E_RNDSHOP_COIN_G = 6,
	E_RNDSHOP_MAX = 7,
};

enum class ITEM_STATE : uint8_t {
	ITEM_STATE_DEACTIVATED = 0,
	ITEM_STATE_ACTIVATED = 1,
	ITEM_STATE_EXPIRED = 2,
	ITEM_STATE_DISTROY = 3,
	ITEM_STATE_MAX = 4,
};

enum class EOnlineDataAdvertisementType : uint8_t {
	ODAT_DontAdvertise = 0,
	ODAT_OnlineService = 1,
	ODAT_QoS = 2,
	ODAT_OnlineServiceAndQoS = 3,
	ODAT_MAX = 4,
};

enum class EPreferredLightmapType : uint8_t {
	EPLT_Default = 0,
	EPLT_Directional = 1,
	EPLT_Simple = 2,
	EPLT_MAX = 3,
};

enum class E_UPDATE_MATCHROOM_TYPE : uint8_t {
	E_UPDATE_MATCHROOM_TYPE_ADD = 0,
	E_UPDATE_MATCHROOM_TYPE_DELETE = 1,
	E_UPDATE_MATCHROOM_TYPE_UPDATE = 2,
	E_UPDATE_MATCHROOM_TYPE_MAX = 3,
};

enum class EBlendFallTypes : uint8_t {
	FBT_Up = 0,
	FBT_Down = 1,
	FBT_PreLand = 2,
	FBT_Land = 3,
	FBT_None = 4,
	FBT_MAX = 5,
};

enum class RecoilPitchSkelControlType : uint8_t {
	Up = 0,
	DN = 1,
	RecoilPitchSkelControlType_MAX = 2,
};

enum class EBuildingStatsBrowserColumns : uint8_t {
	BSBC_Name = 0,
	BSBC_Ruleset = 1,
	BSBC_NumStaticMeshComps = 2,
	BSBC_NumInstancedStaticMeshComps = 3,
	BSBC_NumInstancedTris = 4,
	BSBC_LightmapMemBytes = 5,
	BSBC_ShadowmapMemBytes = 6,
	BSBC_LODDiffuseMemBytes = 7,
	BSBC_LODLightingMemBytes = 8,
	BSBC_MAX = 9,
};

enum class RadioKeyType : uint8_t {
	RKT_LeftKey = 0,
	RKT_RightKey = 1,
	RKT_MAX = 2,
};

enum class EMaxDistanceScaleMode : uint8_t {
	MDSM_Multiply = 0,
	MDSM_Substract = 1,
	MDSM_MAX = 2,
};

enum class ELineMode : uint8_t {
	LMODE_auto = 0,
	LMODE_DOS = 1,
	LMODE_UNIX = 2,
	LMODE_MAC = 3,
	LMODE_MAX = 4,
};

enum class ESendReportType : uint8_t {
	SRT_None = 0,
	SRT_QR = 1,
	SRT_User = 2,
	SRT_MAX = 3,
};

enum class GFxTimingMode : uint8_t {
	TM_Game = 0,
	TM_Real = 1,
	TM_MAX = 2,
};

enum class GRADE : uint8_t {
	ADMIN_GRADE = 0,
	LEAD_GM_GRADE = 1,
	GM_GRADE = 2,
	NORMAL_USER_GRADE = 3,
	DUMMY_CLIENT_GRADE = 4,
	CHAMPIONSHIP_OBSERVER_GRADE = 5,
	ONLINE_CHAMPIONSHIP_USER_GRADE = 6,
	OFFLINE_CHAMPIONSHIP_USER_GRADE = 7,
	GRADE_MAX = 8,
};

enum class ESleepFamily : uint8_t {
	SF_Normal = 0,
	SF_Sensitive = 1,
	SF_MAX = 2,
};

enum class RefTableType : uint8_t {
	ERTT_Map = 0,
	ERTT_Mode = 1,
	ERTT_ModeOption = 2,
	ERTT_Mission = 3,
	ERTT_ModeMap = 4,
	ERTT_ModeGroupBindMode = 5,
	ERTT_Exp = 6,
	ERTT_BasicChat = 7,
	ERTT_Preset = 8,
	ERTT_InitItem = 9,
	ERTT_SteamItem = 10,
	ERTT_Item = 11,
	ERTT_Scoring = 12,
	ERTT_Achievement = 13,
	ERTT_StatGroup = 14,
	ERTT_Pickup = 15,
	ERTT_Drop = 16,
	ERTT_MailForm = 17,
	ERTT_Skill = 18,
	ERTT_SkillLICENSE = 19,
	ERTT_RankUp = 20,
	ERTT_Rank = 21,
	ERTT_ItemDetailinfo = 22,
	ERTT_Shop = 23,
	ERTT_ShopTab = 24,
	ERTT_ShopCategory = 25,
	ERTT_ShopItem = 26,
	ERTT_ShopValue = 27,
	ERTT_Filter = 28,
	ERTT_CallingCard = 29,
	ERTT_Gear = 30,
	ERTT_Emblem = 31,
	ERTT_Quest = 32,
	ERTT_BoosterItem = 33,
	ERTT_HelpTab = 34,
	ERTT_HelpTabDetailInfo = 35,
	ERTT_ModeGroup = 36,
	ERTT_SystemImage = 37,
	ERTT_GameServer = 38,
	ERTT_GameChannel = 39,
	ERTT_GameChannelProperty = 40,
	ERTT_RoomName = 41,
	ERTT_Stat = 42,
	ERTT_Reward = 43,
	ERTT_ModeGuide = 44,
	ERTT_FrontEndMode = 45,
	ERTT_ModeTip = 46,
	ERTT_BGM = 47,
	ERTT_Attend = 48,
	ERTT_REGION = 49,
	ERTT_Define = 50,
	ERTT_ClanExp = 51,
	ERTT_RandomBox = 52,
	ERTT_CubeBox = 53,
	ERTT_RandomBoxCost = 54,
	ERTT_ImagePath = 55,
	ERTT_ResultReward = 56,
	ERTT_Crosshair = 57,
	ERTT_KillCombo = 58,
	ERTT_AIRewardRank = 59,
	ERTT_TypeDefine = 60,
	ERTT_ShopSellItem = 61,
	ERTT_ClanSection = 62,
	ERTT_PickUpDisplay = 63,
	ERTT_MoneyDisplay = 64,
	ERTT_MatchMaking = 65,
	ERTT_ExchangeCash = 66,
	ERTT_SystemTextColor = 67,
	ERTT_LimitSale = 68,
	ERTT_MailCategory = 69,
	ERTT_Tier = 70,
	ERTT_Penalty = 71,
	ERTT_PenaltyBind = 72,
	ERTT_Formula = 73,
	ERTT_TodayGame = 74,
	ERTT_TodayGameBindMode = 75,
	ERTT_ItemUnLockRecipe = 76,
	ERTT_TierSeason = 77,
	ERTT_CompetitivePenalty = 78,
	ERTT_CompetitiveBindMode = 79,
	ERTT_ServiceRegion = 80,
	ERTT_GameChannelBindRegion = 81,
	ERTT_CompetitiveSeason = 82,
	ERTT_Shortcut = 83,
	ERTT_PingGroup = 84,
	ERTT_PingGroupBindRegion = 85,
	ERTT_Nation = 86,
	ERTT_SupportUserGroup = 87,
	ERTT_RematchOption = 88,
	ERTT_PeriodAttend = 89,
	ERTT_PeriodAttendReward = 90,
	ERTT_MatchMakingByRating = 91,
	ERTT_MatchMakingOption = 92,
	ERTT_MarkerOption = 93,
	ERTT_ARaceLevelUp = 94,
	ERTT_ARaceEquip = 95,
	ERTT_QuestShortcut = 96,
	ERTT_ShopRotation = 97,
	ERTT_CompetitiveRewardPopup = 98,
	ERTT_EvolveLevelUp = 99,
	ERTT_EvolveEquip = 100,
	ERTT_EvolveModeOption = 101,
	ERTT_ExtendPeriodBind = 102,
	ERTT_PublisherWorld = 103,
	ERTT_SeasonPass = 104,
	ERTT_SeasonInfo = 105,
	ERTT_ClanSeasonReward = 106,
	ERTT_ClanAttendanceReward = 107,
	ERTT_ClanColor = 108,
	ERTT_ClanMark = 109,
	ERTT_Decomposition = 110,
	ERTT_ItemOption = 111,
	ERTT_ItemOptionBind = 112,
	ERTT_ClanTierEmblem = 113,
	ERTT_MAX = 114,
};

enum class EInputTypes : uint8_t {
	IT_XAxis = 0,
	IT_YAxis = 1,
	IT_MAX = 2,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CAPS_CameraLocal = 0,
	CAPS_World = 1,
	CAPS_UserDefined = 2,
	CAPS_MAX = 3,
};

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_MAX = 5,
};

enum class ESplineControlRotMode : uint8_t {
	SCR_NoChange = 0,
	SCR_AlongSpline = 1,
	SCR_Interpolate = 2,
	SCR_MAX = 3,
};

enum class EWorldObstacle : uint8_t {
	EWObstacle_None = 0,
	EWObstacle_Cliff = 1,
	EWObstacle_MAX = 2,
};

enum class ETacticalMapSymbolMovieClipType : uint8_t {
	E_SYMBOL_MC_FRIEND = 0,
	E_SYMBOL_MC_ENEMY = 1,
	E_SYMBOL_MC_FOR_MODE = 2,
	E_SYMBOL_MC_AREA = 3,
	E_SYMBOL_MC_SKILL = 4,
	E_SYMBOL_MC_TOP_DEPTH_OBJECT = 5,
	E_SYMBOL_MC_MAX = 6,
};

enum class ELevelIconType : uint8_t {
	ELEVEL_ICON_SMALL = 0,
	ELEVEL_ICON_BIG = 1,
	ELEVEL_ICON_MAX = 2,
};

enum class EChatHeadErrorType : uint8_t {
	EChatHeadError_Success = 0,
	EChatHeadError_Wrong_Type = 1,
	EChatHeadError_NoLabel = 2,
	EChatHeadError_NoTarget = 3,
	EChatHeadError_Wrong_TargetType = 4,
	EChatHeadError_MAX = 5,
};

enum class E_MATCH_HISTORY_TYPE : uint8_t {
	E_MATCH_HISTORY_TYPE_ALL = 0,
	E_MATCH_HISTORY_TYPE_CLASSIC = 1,
	E_MATCH_HISTORY_TYPE_COMPETITION_SOLO_DUO = 2,
	E_MATCH_HISTORY_TYPE_COMPETITION_SQUAD = 3,
	E_MATCH_HISTORY_TYPE_COMPETITION_INTEGRATE = 4,
	E_MATCH_HISTORY_TYPE_CLAN_ALL = 5,
	E_MATCH_HISTORY_TYPE_CLAN_RANK = 6,
	E_MATCH_HISTORY_TYPE_CLAN_A = 7,
	E_MATCH_HISTORY_TYPE_CLAN_B = 8,
	E_MATCH_HISTORY_TYPE_MAX = 9,
};

enum class ESessionState : uint8_t {
	StateNone = 0,
	StateOffLine = 1,
	StateChannel = 2,
	StateLobby = 3,
	StateMatchRoom = 4,
	StatePlayGame = 5,
	ESessionState_MAX = 6,
};

enum class EShopButtonState : uint8_t {
	E_STATE_DEFAULT = 0,
	E_STATE_SELECTED = 1,
	E_STATE_DISABLED = 2,
	E_STATE_MAX = 3,
};

enum class ERouteDirection : uint8_t {
	ERD_Forward = 0,
	ERD_Reverse = 1,
	ERD_MAX = 2,
};

enum class QUEST_STEP : uint8_t {
	QUEST_STEP_1 = 0,
	QUEST_STEP_2 = 1,
	QUEST_STEP_3 = 2,
	QUEST_STEP_4 = 3,
	QUEST_STEP_5 = 4,
	QUEST_STEP_6 = 5,
	QUEST_STEP_MAX = 6,
};

enum class ESteamAchievements : uint8_t {
	ESA_NewBeginning = 0,
	ESA_SeniorSoldier = 1,
	ESA_Officer = 2,
	ESA_SeniorOfficer = 3,
	ESA_HigherOfficer = 4,
	ESA_FieldOfficer = 5,
	ESA_ShiningStar = 6,
	ESA_BlackSquad = 7,
	ESA_BestSniper = 8,
	ESA_SeniorSniper = 9,
	ESA_SniperMaster = 10,
	ESA_WarVeteran = 11,
	ESA_MassDestruction = 12,
	ESA_OneManArmy = 13,
	ESA_Slaughterer = 14,
	ESA_Samurai = 15,
	ESA_GoodMelee = 16,
	ESA_PlayTime = 17,
	ESA_WinnerI = 18,
	ESA_WinnerII = 19,
	ESA_WinnerIII = 20,
	ESA_FirstBlood = 21,
	ESA_BombDefusal = 22,
	ESA_LastMan = 23,
	ESA_Terminator = 24,
	ESA_POTG = 25,
	ESA_SuicideSquad = 26,
	ESA_ClanMember = 27,
	ESA_FirstClanMatch = 28,
	ESA_ItemPurchase = 29,
	ESA_theBoss = 30,
	ESA_LuckyDay = 31,
	ESA_ItemDelivery = 32,
	ESA_GoodFriends = 33,
	ESA_PartyTime = 34,
	ESA_Destroyer = 35,
	ESA_MAX = 36,
};

enum class WeapFireAnimType : uint8_t {
	WeapFireAnimType_Anim = 0,
	WeapFireAnimType_IK = 1,
	WeapFireAnimType_Both = 2,
	WeapFireAnimType_MAX = 3,
};

enum class E_RECORD_TYPE : uint8_t {
	E_RECORD_TYPE_RANK = 0,
	E_RECORD_TYPE_TOTAL_PLAY_TIME = 1,
	E_RECORD_TYPE_EXP = 2,
	E_RECORD_TYPE_ALL_CAREER = 3,
	E_RECORD_TYPE_KAD = 4,
	E_RECORD_TYPE_KAD_RATIO = 5,
	E_RECORD_TYPE_HEAD_SHOT = 6,
	E_RECORD_TYPE_FATAL_SHOT = 7,
	E_RECORD_TYPE_RUNAWAY = 8,
	E_RECORD_TYPE_CLAN_CAREER = 9,
	E_RECORD_TYPE_CLAN_KAD = 10,
	E_RECORD_TYPE_CLAN_RUNAWAY = 11,
	E_RECORD_TYPE_RANKING_POINT = 12,
	E_RECORD_TYPE_MAX = 13,
};

enum class ESceneTextureType : uint8_t {
	SceneTex_Lighting = 0,
	SceneTex_MAX = 1,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class E_VOTE_TYPE : uint8_t {
	E_VOTE_NONE = 0,
	E_VOTE_SURREND = 1,
	E_VOTE_KICK = 2,
	E_VOTE_MAX = 3,
};

enum class ERClickPopupMenu : uint8_t {
	E_RCPM_USERINFO = 0,
	E_RCPM_WHISPER = 1,
	E_RCPM_ADDFRIEND = 2,
	E_RCPM_INVITE = 3,
	E_RCPM_INVITE_TO_MY_CLAN = 4,
	E_RCPM_BLOCK = 5,
	E_RCPM_CHANGEHOST = 6,
	E_RCPM_KICK = 7,
	E_RCPM_MAX = 8,
};

enum class EGenericEnableDisable : uint8_t {
	CBPID_USE_Disable = 0,
	CBPID_USE_Enable = 1,
	CBPID_USE_MAX = 2,
};

enum class EProfileXInversionOptions : uint8_t {
	PXIO_Off = 0,
	PXIO_On = 1,
	PXIO_MAX = 2,
};

enum class EAnimRotationOnly : uint8_t {
	EARO_AnimSet = 0,
	EARO_ForceEnabled = 1,
	EARO_ForceDisabled = 2,
	EARO_MAX = 3,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class MessengerMemberState : uint8_t {
	MemberInviteState = 0,
	MemberFriendState = 1,
	MemberBlockState = 2,
	MessengerMemberState_MAX = 3,
};

enum class EClanHomePopupSetType : uint8_t {
	E_TYPE_CLAN_NICK_NAME = 0,
	E_TYPE_CLAN_USERINFO = 1,
	E_TYPE_CLAN_ADD_FRIEND = 2,
	E_TYPE_CLAN_BREAK_AWAY = 3,
	E_TYPE_CLAN_KICK_AWAY = 4,
	E_TYPE_CLAN_GRADE_NAME = 5,
	E_TYPE_CLAN_MASTER = 6,
	E_TYPE_CLAN_MANAGER = 7,
	E_TYPE_CALN_NORMAL = 8,
	E_TYPE_CLAN_MAX = 9,
	E_TYPE_MAX = 10,
};

enum class EGender : uint8_t {
	EGender_Male = 0,
	EGender_FeMale = 1,
	EGender_MAX = 2,
};

enum class E_SYSTEM_IMAGE_TYPE : uint8_t {
	E_SYSTEM_IMAGE_TYPE_INVEN_LIST_B = 0,
	E_SYSTEM_IMAGE_TYPE_INVEN_LIST_F = 1,
	E_SYSTEM_IMAGE_TYPE_SHOP_LIST_B = 2,
	E_SYSTEM_IMAGE_TYPE_SHOP_LIST_F = 3,
	E_SYSTEM_IMAGE_TYPE_PRESET_B = 4,
	E_SYSTEM_IMAGE_TYPE_PRESET_F = 5,
	E_SYSTEM_IMAGE_TYPE_PRESET_GRENADE_B = 6,
	E_SYSTEM_IMAGE_TYPE_PRESET_GRENADE_F = 7,
	E_SYSTEM_IMAGE_TYPE_BACKGROUND = 8,
	E_SYSTEM_IMAGE_TYPE_MAX = 9,
};

enum class E_TIMER_STATE_TYPE : uint8_t {
	E_TIMER_STATE_TYPE_OFF = 0,
	E_TIMER_STATE_TYPE_ON = 1,
	E_TIMER_STATE_TYPE_WAIT = 2,
	E_TIMER_STATE_TYPE_MAX = 3,
};

enum class EMobileColorMultiplySource : uint8_t {
	MCMS_None = 0,
	MCMS_BaseTextureRed = 1,
	MCMS_BaseTextureGreen = 2,
	MCMS_BaseTextureBlue = 3,
	MCMS_BaseTextureAlpha = 4,
	MCMS_MaskTextureRed = 5,
	MCMS_MaskTextureGreen = 6,
	MCMS_MaskTextureBlue = 7,
	MCMS_MaskTextureAlpha = 8,
	MCMS_MAX = 9,
};

enum class ECanvasBlendMode : uint8_t {
	BLEND_CANVAS_Opaque = 0,
	BLEND_CANVAS_Masked = 1,
	BLEND_CANVAS_Translucent = 2,
	BLEND_CANVAS_Additive = 3,
	BLEND_CANVAS_Modulate = 4,
	BLEND_CANVAS_ModulateAndAdd = 5,
	BLEND_CANVAS_SoftMasked = 6,
	BLEND_CANVAS_AlphaComposite = 7,
	BLEND_CANVAS_DitheredTranslucent = 8,
	BLEND_CANVAS_AlphaOnly = 9,
	BLEND_CANVAS_MAX = 10,
};

enum class EMovieControlType : uint8_t {
	MCT_Play = 0,
	MCT_Stop = 1,
	MCT_Pause = 2,
	MCT_MAX = 3,
};

enum class ETickingGroup : uint8_t {
	TG_PreAsyncWork = 0,
	TG_DuringAsyncWork = 1,
	TG_PostAsyncWork = 2,
	TG_PostUpdateWork = 3,
	TG_EffectsUpdateWork = 4,
	TG_MAX = 5,
};

enum class EProgressMessageType : uint8_t {
	PMT_Clear = 0,
	PMT_Information = 1,
	PMT_AdminMessage = 2,
	PMT_DownloadProgress = 3,
	PMT_ConnectionFailure = 4,
	PMT_PeerConnectionFailure = 5,
	PMT_PeerHostMigrationFailure = 6,
	PMT_SocketFailure = 7,
	PMT_MAX = 8,
};

enum class REFERENCE_DATA_UPDATE_TYPE : uint8_t {
	REFERENCE_DATA_UPDATE_TYPE_NONE = 0,
	REFERENCE_DATA_UPDATE_TYPE_MODE = 1,
	REFERENCE_DATA_UPDATE_TYPE_MAP = 2,
	REFERENCE_DATA_UPDATE_TYPE_SHOP = 3,
	REFERENCE_DATA_UPDATE_TYPE_MISSION = 4,
	REFERENCE_DATA_UPDATE_TYPE_MODE_GROUP_BIND_MODE = 5,
	REFERENCE_DATA_UPDATE_TYPE_MODE_MAP = 6,
	REFERENCE_DATA_UPDATE_TYPE_MODE_GROUP = 7,
	REFERENCE_DATA_UPDATE_TYPE_MAX = 8,
};

enum class ELocationBoneSocketDestination : uint8_t {
	BONESOCKETDEST_Bones = 0,
	BONESOCKETDEST_Sockets = 1,
	BONESOCKETDEST_MAX = 2,
};

enum class CLAN_RECRUIT_CONDITION : uint8_t {
	CLAN_RECRUIT_STOP = 0,
	CLAN_RECRUIT_APPROVAL = 1,
	CLAN_RECRUIT_FREE = 2,
	CLAN_RECRUIT_MAX = 3,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class GFxRenderTextureMode : uint8_t {
	RTM_Opaque = 0,
	RTM_Alpha = 1,
	RTM_AlphaComposite = 2,
	RTM_MAX = 3,
};

enum class E_DASHBOARD_BUTTON_TYPE : uint8_t {
	E_DASHBOARD_BUTTON_TYPE_EVENT = 0,
	E_DASHBOARD_BUTTON_TYPE_MAIL = 1,
	E_DASHBOARD_BUTTON_TYPE_MESSENGER = 2,
	E_DASHBOARD_BUTTON_TYPE_BACK = 3,
	E_DASHBOARD_BUTTON_TYPE_NOTICE = 4,
	E_DASHBOARD_BUTTON_TYPE_INVEN = 5,
	E_DASHBOARD_BUTTON_TYPE_RECORD = 6,
	E_DASHBOARD_BUTTON_TYPE_CLAN_HOME = 7,
	E_DASHBOARD_BUTTON_TYPE_SHOP = 8,
	E_DASHBOARD_BUTTON_TYPE_MEDAL_SHOP = 9,
	E_DASHBOARD_BUTTON_TYPE_RANDOM_BOX_SHOP = 10,
	E_DASHBOARD_BUTTON_TYPE_OPTION = 11,
	E_DASHBOARD_BUTTON_TYPE_HELP = 12,
	E_DASHBOARD_BUTTON_TYPE_SUPPORT = 13,
	E_DASHBOARD_BUTTON_TYPE_MAX = 14,
};

enum class CHAT_TYPE : uint8_t {
	CHAT_TYPE_NORMAL = 0,
	CHAT_TYPE_WHISPER = 1,
	CHAT_TYPE_TEAM = 2,
	CHAT_TYPE_NOTICE = 3,
	CHAT_TYPE_RADIO = 4,
	CHAT_TYPE_RADIO_ALL = 5,
	CHAT_TYPE_CHANNEL = 6,
	CHAT_TYPE_INGAME = 7,
	CHAT_TYPE_INGAME_TEAM = 8,
	CHAT_TYPE_COMMUNITY = 9,
	CHAT_TYPE_MAX = 10,
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

enum class SkillOptionType : uint8_t {
	ESOP_lock = 0,
	ESOP_Unlock = 1,
	ESOP_Buy = 2,
	ESOP_MAX = 3,
};

enum class ENATType : uint8_t {
	NAT_Unknown = 0,
	NAT_Open = 1,
	NAT_Moderate = 2,
	NAT_Strict = 3,
	NAT_MAX = 4,
};

enum class EShopSortList : uint8_t {
	E_SHOPSORT_GAMEMONEY = 0,
	E_SHOPSORT_CASH = 1,
	E_SHOPSORT_MEDAL = 2,
	E_SHOPSORT_NAME = 3,
	E_SHOPSORT_GRADE = 4,
	E_SHOPSORT_MAX = 5,
};

enum class EWeaponFireType : uint8_t {
	EWFT_InstantHit = 0,
	EWFT_Projectile = 1,
	EWFT_Custom = 2,
	EWFT_Pickup = 3,
	EWFT_None = 4,
	EWFT_MAX = 5,
};

enum class MODE_GROUP_ENTRY_TYPE : uint8_t {
	MODE_GROUP_ENTRY_ALL = 0,
	MODE_GROUP_ENTRY_VC = 1,
	MODE_GROUP_ENTRY_PM = 2,
	MODE_GROUP_ENTRY_MAX = 3,
};

enum class E_REMATCH_DISPERSE_REASON : uint8_t {
	E_REMATCH_DISPERSE_REASON_LACK_MEMBER = 0,
	E_REMATCH_DISPERSE_REASON_TIMEOUT_LACK_MEMBER = 1,
	E_REMATCH_DISPERSE_REASON_GAME_START_FAILED = 2,
	E_REMATCH_DISPERSE_REASON_MAX = 3,
};

enum class EStanceState : uint8_t {
	E_SS_Stand_Idle = 0,
	E_SS_Stand_Walk = 1,
	E_SS_Stand_Run = 2,
	E_SS_Crouch_Idle = 3,
	E_SS_Crouch_Walk = 4,
	E_SS_Unstable = 5,
	E_SS_MAX = 6,
};

enum class CCSMoveCmd : uint8_t {
	MOVE_CMD_NONE = 0,
	MOVE_CMD_POS = 1,
	MOVE_CMD_MAX = 2,
};

enum class ECoverGroupFillAction : uint8_t {
	CGFA_Overwrite = 0,
	CGFA_Add = 1,
	CGFA_Remove = 2,
	CGFA_Clear = 3,
	CGFA_Cylinder = 4,
	CGFA_MAX = 5,
};

enum class EDummyClientInputCmd : uint8_t {
	DCIC_TOGGLEFIRE = 0,
	DCIC_TOGGLEDUCK = 1,
	DCIC_TURN_JUMP = 2,
	DCIC_THROWGRENADE = 3,
	DCIC_MOVE_FRONT = 4,
	DCIC_MOVE_BACK = 5,
	DCIC_STRAFE_LEFT = 6,
	DCIC_STRAFE_RIGHT = 7,
	DCIC_STOP = 8,
	DCIC_SUICIDE = 9,
	DCIC_MAX = 10,
};

enum class ELoginTextInputError : uint8_t {
	ELOGIN_ERROR_ID_NULL = 0,
	ELOGIN_ERROR_PW_NULL = 1,
	ELOGIN_ERROR_MAX = 2,
};

enum class LUT_STATE : uint8_t {
	LUT_NONE = 0,
	LUT_START = 1,
	LUT_FADEIN = 2,
	LUT_DURATION = 3,
	LUT_FADEOUT = 4,
	LUT_FINISH = 5,
	LUT_MAX = 6,
};

enum class EProfileRaceTransmissionOptions : uint8_t {
	PRTO_Auto = 0,
	PRTO_Manual = 1,
	PRTO_MAX = 2,
};

enum class ROTATION_TAB_TYPE : uint8_t {
	RTT_DISABLE = 0,
	RTT_BSCOIN = 1,
	RTT_MEDAL = 2,
	RTT_MAX = 3,
};

enum class HostageAnimType : uint8_t {
	EHAT_Captivity = 0,
	EHAT_Moving = 1,
	EHAT_Groggy = 2,
	EHAT_Waiting = 3,
	EHAT_MAX = 4,
};

enum class EAltFireBlockStatus : uint8_t {
	EAltFireBlock_WeaponEquipping = 0,
	EAltFireBlock_NotZoomToZoomLev1 = 1,
	EAltFireBlock_ZoomLev1ToZoomLev2 = 2,
	EAltFireBlock_ZoomLev1ToNotZoom = 3,
	EAltFireBlock_ZoomLev2ToNotZoom = 4,
	EAltFireBlock_MAX = 5,
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

enum class EProcBuildingAxis : uint8_t {
	EPBAxis_X = 0,
	EPBAxis_Z = 1,
	EPBAxis_MAX = 2,
};

enum class E_INVENTORY_SORT_LIST_TYPE : uint8_t {
	E_INVENTORY_SORT_LIST_TYPE_EQUIP = 0,
	E_INVENTORY_SORT_LIST_TYPE_NAME = 1,
	E_INVENTORY_SORT_LIST_TYPE_KILL = 2,
	E_INVENTORY_SORT_LIST_TYPE_GRADE = 3,
	E_INVENTORY_SORT_LIST_TYPE_TIME = 4,
	E_INVENTORY_SORT_LIST_TYPE_MAX = 5,
};

enum class EOnlineGameSearchComparisonType : uint8_t {
	OGSCT_Equals = 0,
	OGSCT_NotEquals = 1,
	OGSCT_GreaterThan = 2,
	OGSCT_GreaterThanEquals = 3,
	OGSCT_LessThan = 4,
	OGSCT_LessThanEquals = 5,
	OGSCT_MAX = 6,
};

enum class EAmbientOcclusionQuality : uint8_t {
	AO_High = 0,
	AO_Medium = 1,
	AO_Low = 2,
	AO_MAX = 3,
};

enum class EPixelFormat : uint8_t {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_A8R8G8B8 = 2,
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
	PF_FilteredShadowDepth = 13,
	PF_R32F = 14,
	PF_G16R16 = 15,
	PF_G16R16F = 16,
	PF_G16R16F_FILTER = 17,
	PF_G32R32F = 18,
	PF_A2B10G10R10 = 19,
	PF_A16B16G16R16 = 20,
	PF_D24 = 21,
	PF_R16F = 22,
	PF_R16F_FILTER = 23,
	PF_BC5 = 24,
	PF_V8U8 = 25,
	PF_A1 = 26,
	PF_FloatR11G11B10 = 27,
	PF_A4R4G4B4 = 28,
	PF_MAX = 29,
};

enum class EWeaponArcBrandishDir : uint8_t {
	EWABD_RightToLeft = 0,
	EWABD_LeftToRight = 1,
	EWABD_MAX = 2,
};

enum class EDecalTransform : uint8_t {
	DecalTransform_OwnerAbsolute = 0,
	DecalTransform_OwnerRelative = 1,
	DecalTransform_SpawnRelative = 2,
	DecalTransform_MAX = 3,
};

enum class ERISState : uint8_t {
	RISState_Attached = 0,
	RISState_Detached = 1,
	RISState_ZoomStateChanged = 2,
	RISState_ChangeVisibility = 3,
	RISState_InitFirstPersonMesh = 4,
	RISState_InitThirdPersonMesh = 5,
	RISState_NotifyTeamChanged = 6,
	RISState_ModifyWeaponProperties = 7,
	RISState_PreActivePart = 8,
	RISState_PostDeactivePart = 9,
	RISState_MAX = 10,
};

enum class EInterpMethodType : uint8_t {
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval = 1,
	IMT_UseBrokenTangentEval = 2,
	IMT_MAX = 3,
};

enum class EUIGameStatus : uint8_t {
	EUIGS_None = 0,
	EUIGS_WarmUp = 1,
	EUIGS_CountDown = 2,
	EUIGS_MatchInProgress = 3,
	EUIGS_RoundOver = 4,
	EUIGS_SuddenDeath = 5,
	EUIGS_FinalRoundOver = 6,
	EUIGS_MatchOver = 7,
	EUIGS_TeamChange = 8,
	EUIGS_TutorialCutScene = 9,
	EUIGS_MAX = 10,
};

enum class EBlendType : uint8_t {
	EBT_ParentBoneSpace = 0,
	EBT_MeshSpace = 1,
	EBT_MAX = 2,
};

enum class EWeightCheck : uint8_t {
	EWC_AnimNodeSlotNotPlaying = 0,
	EWC_MAX = 1,
};

enum class EHostMigrationProgress : uint8_t {
	HostMigration_None = 0,
	HostMigration_FindingNewHost = 1,
	HostMigration_MigratingAsHost = 2,
	HostMigration_MigratingAsClient = 3,
	HostMigration_ClientTravel = 4,
	HostMigration_HostReadyToTravel = 5,
	HostMigration_Failed = 6,
	HostMigration_MAX = 7,
};

enum class EMaterialPositionTransform : uint8_t {
	TRANSFORMPOS_World = 0,
	TRANSFORMPOS_MAX = 1,
};

enum class ESimulationMethod : uint8_t {
	ESM_SPH = 0,
	ESM_NO_PARTICLE_INTERACTION = 1,
	ESM_MIXED_MODE = 2,
	ESM_MAX = 3,
};

enum class EPathFindingError : uint8_t {
	PATHERROR_STARTPOLYNOTFOUND = 0,
	PATHERROR_GOALPOLYNOTFOUND = 1,
	PATHERROR_ANCHORPYLONNOTFOUND = 2,
	PATHERROR_NOPATHFOUND = 3,
	PATHERROR_COMPUTEVALIDFINALDEST_FAIL = 4,
	PATHERROR_GETNEXTMOVELOCATION_FAIL = 5,
	PATHERROR_MOVETIMEOUT = 6,
	PATHERROR_MAX = 7,
};

enum class SEASON_PASS_TYPE : uint8_t {
	SEASON_PASS_NONE = 0,
	SEASON_PASS_BATTLE = 1,
	SEASON_PASS_ATTEND = 2,
	SEASON_PASS_MAX = 3,
};

enum class CLAN_SEARCH_TYPE : uint8_t {
	CLAN_SEARCH_TYPE_CREATE_DATE = 0,
	CLAN_SEARCH_TYPE_MEMBER_REG_COUNT = 1,
	CLAN_SEARCH_TYPE_MATCH_POINT = 2,
	CLAN_SEARCH_TYPE_PLAY_MATCH_COUNT = 3,
	CLAN_SEARCH_TYPE_RANKING_POINT = 4,
	CLAN_SEARCH_TYPE_END = 5,
	CLAN_SEARCH_TYPE_MAX = 6,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class MilitaryClassType : uint8_t {
	EMCT_ASSAULT = 0,
	EMCT_SUPPORT = 1,
	EMCT_COMMAND = 2,
	EMCT_RECON = 3,
	EMCT_MAX = 4,
};

enum class EEdgeHandlingStatus : uint8_t {
	EHS_AddedBothDirs = 0,
	EHS_Added0to1 = 1,
	EHS_Added1to0 = 2,
	EHS_AddedNone = 3,
	EHS_MAX = 4,
};

enum class RISSlot : uint8_t {
	RISSlot_None = 0,
	RISSlot_Sight = 1,
	RISSlot_LaserSight = 2,
	RISSlot_Silence = 3,
	RISSlot_Launcher = 4,
	RISSlot_MAX = 5,
};

enum class RecoilYawSkelControlType : uint8_t {
	LT = 0,
	RT = 1,
	RecoilYawSkelControlType_MAX = 2,
};

enum class McpChallengeFileStatus : uint8_t {
	MCFS_NotStarted = 0,
	MCFS_Pending = 1,
	MCFS_Success = 2,
	MCFS_Failed = 3,
	MCFS_MAX = 4,
};

enum class EMeshBeaconClientState : uint8_t {
	MBCS_None = 0,
	MBCS_Connecting = 1,
	MBCS_Connected = 2,
	MBCS_ConnectionFailed = 3,
	MBCS_AwaitingResponse = 4,
	MBCS_Closed = 5,
	MBCS_MAX = 6,
};

enum class EFacebookIntegrationDelegate : uint8_t {
	FID_AuthorizationComplete = 0,
	FID_FacebookRequestComplete = 1,
	FID_DialogComplete = 2,
	FID_FriendsListComplete = 3,
	FID_MAX = 4,
};

enum class ETableServiceType : uint8_t {
	EService_InActive = 0,
	EService_Active = 1,
	EService_Prototype = 2,
	EService_MAX = 3,
};

enum class EAITargetSelectType : uint8_t {
	AITargetSelectType_ClearEnemy = 0,
	AITargetSelectType_ClosestEnemy = 1,
	AITargetSelectType_ClosestVisibleEnemy = 2,
	AITargetSelectType_ClosestPlayer = 3,
	AITargetSelectType_ClosestMissionActor = 4,
	AITargetSelectType_MAX = 5,
};

enum class EAssasinHUDIconType : uint8_t {
	EAssasinHUDIcon_NONE = 0,
	EAssasinHUDIcon_VIP = 1,
	EAssasinHUDIcon_EXIT = 2,
	EAssasinHUDIcon_MAX = 3,
};

enum class ETabType : uint8_t {
	E_TAB_TYPE_ALL = 0,
	E_TAB_TYPE_WHISPER = 1,
	E_TAB_TYPE_CLAN = 2,
	E_TAB_TYPE_MAX = 3,
};

enum class EPartyBeaconHostState : uint8_t {
	PBHS_AllowReservations = 0,
	PBHS_DenyReservations = 1,
	PBHS_MAX = 2,
};

enum class EMobileSpecularMask : uint8_t {
	MSM_Constant = 0,
	MSM_Luminance = 1,
	MSM_DiffuseRed = 2,
	MSM_DiffuseGreen = 3,
	MSM_DiffuseBlue = 4,
	MSM_DiffuseAlpha = 5,
	MSM_MaskTextureRGB = 6,
	MSM_MaskTextureRed = 7,
	MSM_MaskTextureGreen = 8,
	MSM_MaskTextureBlue = 9,
	MSM_MaskTextureAlpha = 10,
	MSM_MAX = 11,
};

enum class BoneBreakOption : uint8_t {
	BONEBREAK_SoftPreferred = 0,
	BONEBREAK_AutoDetect = 1,
	BONEBREAK_RigidPreferred = 2,
	BONEBREAK_MAX = 3,
};

enum class EMobileEmissiveColorSource : uint8_t {
	MECS_EmissiveTexture = 0,
	MECS_BaseTexture = 1,
	MECS_Constant = 2,
	MECS_MAX = 3,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_MAX = 2,
};

enum class RescueMode_AnnounceSoundType : uint8_t {
	ERAS_StartMove = 0,
	ERAS_Groggy = 1,
	ERAS_WaitingEscape = 2,
	ERAS_MAX = 3,
};

enum class EInAppMessageInterfaceDelegate : uint8_t {
	IAMD_InAppSMSUIComplete = 0,
	IAMD_InAppEmailComplete = 1,
	IAMD_MAX = 2,
};

enum class COMPLAINT_TYPE : uint8_t {
	COMPLAINT_TYPE_HACK_USER = 0,
	COMPLAINT_TYPE_SWEAR_WORD = 1,
	COMPLAINT_TYPE_ETC = 2,
	COMPLAINT_TYPE_MAX = 3,
};

enum class EGraphicQuality : uint8_t {
	CBGQ_Lowest = 0,
	CBGQ_Low = 1,
	CBGQ_Normal = 2,
	CBGQ_High = 3,
	CBGQ_Highest = 4,
	CBGQ_Custom = 5,
	CBGQ_MAX = 6,
};

enum class EProfileYInversionOptions : uint8_t {
	PYIO_Off = 0,
	PYIO_On = 1,
	PYIO_MAX = 2,
};

enum class ClanShutDownErrorType : uint8_t {
	ENNET_ClanShutDown_State = 0,
	ENNET_ClanShutDown_Permission = 1,
	ENNET_ClanShutDown_Operation = 2,
	ENNET_ClanShutDown_Password = 3,
	ENNET_ClanShutDown_MAX = 4,
};

enum class EGamePhase : uint8_t {
	E_BeforeVIPMove = 0,
	E_AfterVIPMove = 1,
	E_VIPDeath = 2,
	E_PlayerESCing = 3,
	E_MAX = 4,
};

enum class EMatchInfo : uint8_t {
	EMI_NormalMatch = 0,
	EMI_AutoMatch = 1,
	EMI_AiMatch = 2,
	EMI_MAX = 3,
};

enum class EMaterialUsage : uint8_t {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_FracturedMeshes = 1,
	MATUSAGE_ParticleSprites = 2,
	MATUSAGE_BeamTrails = 3,
	MATUSAGE_ParticleSubUV = 4,
	MATUSAGE_SpeedTree = 5,
	MATUSAGE_StaticLighting = 6,
	MATUSAGE_GammaCorrection = 7,
	MATUSAGE_LensFlare = 8,
	MATUSAGE_InstancedMeshParticles = 9,
	MATUSAGE_FluidSurface = 10,
	MATUSAGE_Decals = 11,
	MATUSAGE_MaterialEffect = 12,
	MATUSAGE_MorphTargets = 13,
	MATUSAGE_FogVolumes = 14,
	MATUSAGE_RadialBlur = 15,
	MATUSAGE_InstancedMeshes = 16,
	MATUSAGE_SplineMesh = 17,
	MATUSAGE_ScreenDoorFade = 18,
	MATUSAGE_APEXMesh = 19,
	MATUSAGE_Terrain = 20,
	MATUSAGE_Landscape = 21,
	MATUSAGE_MAX = 22,
};

enum class TEAM_UPDATE_TYPE : uint8_t {
	TEAM_UPDATE_TYPE_SWAP_BY_GM = 0,
	TEAM_UPDATE_TYPE_SWAP_BY_HOST = 1,
	TEAM_UPDATE_TYPE_SHUFFLE_BY_GM = 2,
	TEAM_UPDATE_TYPE_SHUFFLE_BY_HOST = 3,
	TEAM_UPDATE_TYPE_MAX = 4,
};

enum class EMeshGroup : uint8_t {
	MESHGROUP_NONE = 0,
	MESHGROUP_WEAPON_1STVIEW = 1,
	MESHGROUP_WEAPON_3RDVIEW = 2,
	MESHGROUP_MAX = 3,
};

enum class EShakeParam : uint8_t {
	ESP_OffsetRandom = 0,
	ESP_OffsetZero = 1,
	ESP_MAX = 2,
};

enum class EPartyBeaconClientRequest : uint8_t {
	PBClientRequest_NewReservation = 0,
	PBClientRequest_UpdateReservation = 1,
	PBClientRequest_MAX = 2,
};

enum class ECombatBindableKeys : uint8_t {
	CBBND_Unbound = 0,
	CBBND_MouseX = 1,
	CBBND_MouseY = 2,
	CBBND_MouseScrollUp = 3,
	CBBND_MouseScrollDown = 4,
	CBBND_LeftMouseButton = 5,
	CBBND_RightMouseButton = 6,
	CBBND_MiddleMouseButton = 7,
	CBBND_ThumbMouseButton = 8,
	CBBND_ThumbMouseButton2 = 9,
	CBBND_BackSpace = 10,
	CBBND_Tab = 11,
	CBBND_Enter = 12,
	CBBND_Pause = 13,
	CBBND_CapsLock = 14,
	CBBND_Escape = 15,
	CBBND_SpaceBar = 16,
	CBBND_PageUp = 17,
	CBBND_PageDown = 18,
	CBBND_End = 19,
	CBBND_Home = 20,
	CBBND_Left = 21,
	CBBND_Up = 22,
	CBBND_Right = 23,
	CBBND_Down = 24,
	CBBND_Insert = 25,
	CBBND_Delete = 26,
	CBBND_Zero = 27,
	CBBND_One = 28,
	CBBND_Two = 29,
	CBBND_Three = 30,
	CBBND_Four = 31,
	CBBND_Five = 32,
	CBBND_Six = 33,
	CBBND_Seven = 34,
	CBBND_Eight = 35,
	CBBND_Nine = 36,
	CBBND_A = 37,
	CBBND_B = 38,
	CBBND_C = 39,
	CBBND_D = 40,
	CBBND_E = 41,
	CBBND_F = 42,
	CBBND_G = 43,
	CBBND_H = 44,
	CBBND_I = 45,
	CBBND_J = 46,
	CBBND_K = 47,
	CBBND_L = 48,
	CBBND_M = 49,
	CBBND_N = 50,
	CBBND_O = 51,
	CBBND_P = 52,
	CBBND_Q = 53,
	CBBND_R = 54,
	CBBND_S = 55,
	CBBND_T = 56,
	CBBND_U = 57,
	CBBND_V = 58,
	CBBND_W = 59,
	CBBND_X = 60,
	CBBND_Y = 61,
	CBBND_Z = 62,
	CBBND_NumPadZero = 63,
	CBBND_NumPadOne = 64,
	CBBND_NumPadTwo = 65,
	CBBND_NumPadThree = 66,
	CBBND_NumPadFour = 67,
	CBBND_NumPadFive = 68,
	CBBND_NumPadSix = 69,
	CBBND_NumPadSeven = 70,
	CBBND_NumPadEight = 71,
	CBBND_NumPadNine = 72,
	CBBND_Multiply = 73,
	CBBND_Add = 74,
	CBBND_Subtract = 75,
	CBBND_Decimal = 76,
	CBBND_Divide = 77,
	CBBND_F1 = 78,
	CBBND_F2 = 79,
	CBBND_F3 = 80,
	CBBND_F4 = 81,
	CBBND_F5 = 82,
	CBBND_F6 = 83,
	CBBND_F7 = 84,
	CBBND_F8 = 85,
	CBBND_F9 = 86,
	CBBND_F10 = 87,
	CBBND_F11 = 88,
	CBBND_F12 = 89,
	CBBND_NumLock = 90,
	CBBND_ScrollLock = 91,
	CBBND_LeftShift = 92,
	CBBND_RightShift = 93,
	CBBND_LeftControl = 94,
	CBBND_RightControl = 95,
	CBBND_LeftAlt = 96,
	CBBND_RightAlt = 97,
	CBBND_Semicolon = 98,
	CBBND_Equals = 99,
	CBBND_Minus = 100,
	CBBND_Comma = 101,
	CBBND_Underscore = 102,
	CBBND_Period = 103,
	CBBND_Slash = 104,
	CBBND_Tilde = 105,
	CBBND_LeftBracket = 106,
	CBBND_Backslash = 107,
	CBBND_RightBracket = 108,
	CBBND_Quote = 109,
	CBBND_PrintScreen = 110,
	CBBND_Convert = 111,
	CBBND_NonConvert = 112,
	CBBND_OEM102 = 113,
	CBBND_MAX = 114,
};

enum class EMeshBeaconBandwidthTestType : uint8_t {
	MB_BandwidthTestType_Upstream = 0,
	MB_BandwidthTestType_Downstream = 1,
	MB_BandwidthTestType_RoundtripLatency = 2,
	MB_BandwidthTestType_MAX = 3,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_UnrealEdBackground = 0,
	SDPG_World = 1,
	SDPG_Foreground = 2,
	SDPG_PostForeground = 3,
	SDPG_UnrealEdForeground = 4,
	SDPG_PostProcess = 5,
	SDPG_MAX = 6,
};

enum class EScoreboardType : uint8_t {
	ESBT_Scoreboard = 0,
	ESBT_ScoreboardAndMap = 1,
	ESBT_MAX = 2,
};

enum class EFlashEffectIntensityType : uint8_t {
	EFEIT_Flash = 0,
	EFEIT_AfterImage = 1,
	EFEIT_MAX = 2,
};

enum class EBoneSocketAttractorFalloffType : uint8_t {
	BSFOFF_Constant = 0,
	BSFOFF_Linear = 1,
	BSFOFF_Exponent = 2,
	BSFOFF_MAX = 3,
};

enum class ScoreType : uint8_t {
	ScoreType_Team = 0,
	ScoreType_Player = 1,
	ScoreType_TeamAndPlayer = 2,
	ScoreType_MAX = 3,
};

enum class MATCHROOM_SLOT_STATE : uint8_t {
	MATCHROOM_SLOT_STATE_NONE = 0,
	MATCHROOM_SLOT_STATE_OPEN = 1,
	MATCHROOM_SLOT_STATE_WAIT = 2,
	MATCHROOM_SLOT_STATE_READY = 3,
	MATCHROOM_SLOT_STATE_SETTING = 4,
	MATCHROOM_SLOT_STATE_PLAYING = 5,
	MATCHROOM_SLOT_STATE_CLOSED = 6,
	MATCHROOM_SLOT_STATE_ROOMSETTING = 7,
	MATCHROOM_SLOT_STATE_MAX = 8,
};

enum class EAbilityType : uint8_t {
	E_ABILITY_TYPE_ACCURACY = 0,
	E_ABILITY_TYPE_DAMAGE = 1,
	E_ABILITY_TYPE_RANGE = 2,
	E_ABILITY_TYPE_RATE_OF_FIRE = 3,
	E_ABILITY_TYPE_RECOIL = 4,
	E_ABILITY_TYPE_MOBILITY = 5,
	E_ABILITY_TYPE_AMMO = 6,
	E_ABILITY_TYPE_MAX = 7,
};

enum class BALANCE_TYPE : uint8_t {
	BALANCE_TYPE_HANCOIN = 0,
	BALANCE_TYPE_GIFT = 1,
	BALANCE_TYPE_EVGIFT = 2,
	BALANCE_TYPE_TOTAL = 3,
	BALANCE_TYPE_MAX = 4,
};

enum class E_COMPETITIVE_MATCH_TYPE : uint8_t {
	E_CMT_NONE = 0,
	E_CMT_SOLO_DUO = 1,
	E_CMT_SQUAD = 2,
	E_CMT_INTEGRATE = 3,
	E_CMT_MAX = 4,
};

enum class EAxis : uint8_t {
	AXIS_NONE = 0,
	AXIS_X = 1,
	AXIS_Y = 2,
	AXIS_BLANK = 3,
	AXIS_Z = 4,
	AXIS_MAX = 5,
};

enum class EDecalTraceDir : uint8_t {
	DECALTRACE_PosX = 0,
	DECALTRACE_NegX = 1,
	DECALTRACE_PosY = 2,
	DECALTRACE_NegY = 3,
	DECALTRACE_PosZ = 4,
	DECALTRACE_NegZ = 5,
	DECALTRACE_MAX = 6,
};

enum class EWheelSide : uint8_t {
	SIDE_None = 0,
	SIDE_Left = 1,
	SIDE_Right = 2,
	SIDE_MAX = 3,
};

enum class EMouseSensMode : uint8_t {
	MOUSESENSMODE_Master = 0,
	MOUSESENSMODE_WeaponPreset = 1,
	MOUSESENSMODE_MAX = 2,
};

enum class E_VIDEO_OPTION_ITEM_Index : uint8_t {
	VOIID_GraphicQuality = 0,
	VOIID_AspectRatio = 1,
	VOIID_ScreenMode = 2,
	VOIID_ScreenColors = 3,
	VOIID_Gamma = 4,
	VOIID_AntiAliasing = 5,
	VOIID_Resolution = 6,
	VOIID_ScanRate = 7,
	VOIID_VSync = 8,
	VOIID_Character = 9,
	VOIID_BackGround = 10,
	VOIID_Light = 11,
	VOIID_LightReflect = 12,
	VOIID_Shadow = 13,
	VOIID_Effect = 14,
	VOIID_Physical = 15,
	VOIID_AmbOcclusion = 16,
	VOIID_GoreTeenLevel = 17,
	VOIID_GoreAdultLevel = 18,
	VOIID_BackgroundShadow = 19,
	VOIID_GunTrail = 20,
	VOIID_SceneTone = 21,
	VOIID_FPSLimit = 22,
	VOIID_SystemCounter = 23,
	VOIID_OneFrameThreadLag = 24,
	VOIID_MAX = 25,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class PME_SOUND : uint8_t {
	PME_SOUND_NONE = 0,
	PME_SOUND_READY = 1,
	PME_SOUND_PLAY = 2,
	PME_SOUND_MAX = 3,
};

enum class E_GAMEPLAY_OPTION_ITEM_Index : uint8_t {
	GOIID_AllChat = 0,
	GOIID_TeamChat = 1,
	GOIID_DeadChat = 2,
	GOIID_FOV = 3,
	GOIID_FLIPMESH = 4,
	GOIID_TeamIFFView = 5,
	GOIID_ForegroundFOV = 6,
	GOIID_FriendRequestBlock = 7,
	GOIID_TeamOutline = 8,
	GOIID_MarkerTrans2D = 9,
	GOIID_SpotMarkerToggle = 10,
	GOIID_MapMarkerToggle = 11,
	GOIID_GameInviteBlock = 12,
	GOIID_MAX = 13,
};

enum class DAY_OF_WEEK : uint8_t {
	DAY_OF_WEEK_SUNDAY = 0,
	DAY_OF_WEEK_MONDAY = 1,
	DAY_OF_WEEK_TUESDAY = 2,
	DAY_OF_WEEK_WEDNESDAY = 3,
	DAY_OF_WEEK_THURSDAY = 4,
	DAY_OF_WEEK_FRIDAY = 5,
	DAY_OF_WEEK_SATURDAY = 6,
	DAY_OF_WEEK_MAX = 7,
};

enum class EMoveTargetType : uint8_t {
	EMTT_Target = 0,
	EMTT_Actor = 1,
	EMTT_MAX = 2,
};

enum class E_SOUND_OPTION_ITEM_Index : uint8_t {
	SOIID_Master = 0,
	SOIID_Effect = 1,
	SOIID_EffectMute = 2,
	SOIID_Bgm = 3,
	SOIID_BgmMute = 4,
	SOIID_InGameBgm = 5,
	SOIID_InGameBgmMute = 6,
	SOIID_Voice = 7,
	SOIID_VoiceMute = 8,
	SOIID_Hit = 9,
	SOIID_HitMute = 10,
	SOIID_VoiceChatAutoLogin = 11,
	SOIID_VoiceChatInputMode = 12,
	SOIID_VoiceChatInputDevice = 13,
	SOIID_VoiceChatInputVolume = 14,
	SOIID_VoiceChatInputMute = 15,
	SOIID_VoiceChatOutputVolume = 16,
	SOIID_VoiceChatOutputMute = 17,
	SOIID_MAX = 18,
};

enum class ERootMotionRotationMode : uint8_t {
	RMRM_Ignore = 0,
	RMRM_RotateActor = 1,
	RMRM_MAX = 2,
};

enum class ClanNameErrorType : uint8_t {
	ENNET_ClanName_NotSet = 0,
	ENNET_ClanName_InvalidLength = 1,
	ENNET_ClanName_HaveForbiddenWord = 2,
	ENNET_ClanName_UnableWord = 3,
	ENNET_ClanName_Duplicate = 4,
	ENNET_ClanName_ServerForbidden = 5,
	ENNET_ClanName_ConsecutivelyWord = 6,
	ENNET_ClanName_BadPassword = 7,
	ENNET_ClanName_OnPenalty = 8,
	ENNET_ClanName_RankNotQualified = 9,
	ENNET_ClanName_NotRequiredMoney = 10,
	ENNET_ClanName_ClanClosed = 11,
	ENNET_ClanName_MAX = 12,
};

enum class PropernounPopupMode : uint8_t {
	PPM_Callsign = 0,
	PPM_MAX = 1,
};

enum class ParachuteState : uint8_t {
	ParachuteState_FreeFall = 0,
	ParachuteState_Open = 1,
	ParachuteState_Landed = 2,
	ParachuteState_Max = 3,
};

enum class E_CLAN_LIST_WAY_BUTTON_TYPE : uint8_t {
	E_CLAN_LIST_WAY_BUTTON_TYPE_PREV = 0,
	E_CLAN_LIST_WAY_BUTTON_TYPE_NEXT = 1,
	E_CLAN_LIST_WAY_BUTTON_TYPE_MAX = 2,
};

enum class ETeamIndex : uint8_t {
	ETI_VcVsPm = 0,
	ETI_PmVsVc = 1,
	ETI_MAX = 2,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EShopDetailScene : uint8_t {
	E_SCENE_SHOPLIST = 0,
	E_SCENE_POPUP = 1,
	E_SCENE_MAX = 2,
};

enum class EOccupyState : uint8_t {
	EOS_Unoccupied = 0,
	EOS_Battling = 1,
	EOS_Occupying = 2,
	EOS_Occupied = 3,
	EOS_MAX = 4,
};

enum class EVelocityState : uint8_t {
	VelocityState_None = 0,
	VelocityState_Accel = 1,
	VelocityState_Deceleration = 2,
	VelocityState_MAX = 3,
};

enum class EProfileMovementControlOptions : uint8_t {
	PMCO_L_Thumbstick = 0,
	PMCO_R_Thumbstick = 1,
	PMCO_MAX = 2,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class SceneType : uint8_t {
	eSCENE_Waiting = 0,
	eSCENE_Moving = 1,
	eSCENE_LastScene = 2,
	eSCENE_MAX = 3,
};

enum class ATTEND_STATE : uint8_t {
	ATTEND_STATE_EXPIRED_SERVICE = 0,
	ATTEND_STATE_SERVICE = 1,
	ATTEND_STATE_SERVICE_WAIT = 2,
	ATTEND_STATE_MAX = 3,
};

enum class EMeshBeaconPacketType : uint8_t {
	MB_Packet_UnknownType = 0,
	MB_Packet_ClientNewConnectionRequest = 1,
	MB_Packet_ClientBeginBandwidthTest = 2,
	MB_Packet_ClientCreateNewSessionResponse = 3,
	MB_Packet_HostNewConnectionResponse = 4,
	MB_Packet_HostBandwidthTestRequest = 5,
	MB_Packet_HostCompletedBandwidthTest = 6,
	MB_Packet_HostTravelRequest = 7,
	MB_Packet_HostCreateNewSessionRequest = 8,
	MB_Packet_DummyData = 9,
	MB_Packet_Heartbeat = 10,
	MB_Packet_MAX = 11,
};

enum class ScriptCoverState : uint8_t {
	EnterCover = 0,
	GetOutCover = 1,
	ShootFromCover = 2,
	ExitCover = 3,
	ScriptCoverState_MAX = 4,
};

enum class E_MINIMAP_SIZE : uint8_t {
	E_MINIMAP_SIZE_SMALL = 0,
	E_MINIMAP_SIZE_MEDIUM = 1,
	E_MINIMAP_SIZE_LARGE = 2,
	E_MINIMAP_SIZE_MAX = 3,
};

enum class EDamageParameterOverrideMode : uint8_t {
	DPOM_Absolute = 0,
	DPOM_Multiplier = 1,
	DPOM_MAX = 2,
};

enum class EMatchEndReason : uint8_t {
	EMatchEndReason_NONE = 0,
	EMatchEndReason_FORFEITURE = 1,
	EMatchEndReason_SURRENDER = 2,
	EMatchEndReason_MAX = 3,
};

enum class E_VIDEO_OPTION_ITEM_Type : uint8_t {
	VOIT_GENERAL = 0,
	VOIT_ADVANCED = 1,
	VOIT_MAX = 2,
};

enum class EScreenColor : uint8_t {
	CBEC_ORIGINAL = 0,
	CBEC_COOL = 1,
	CBEC_WARM = 2,
	CBEC_FILM = 3,
	CBEC_VINTAGE = 4,
	CBEC_VIVID = 5,
	CBEC_GRACEFUL = 6,
	CBEC_DISABLE = 7,
	CBEC_MAX = 8,
};

enum class EActivateType : uint8_t {
	EAT_Ignore = 0,
	EAT_Show = 1,
	EAT_Hide = 2,
	EAT_Custom = 3,
	EAT_MAX = 4,
};

enum class ESliderType : uint8_t {
	ST_1D = 0,
	ST_2D = 1,
	ST_MAX = 2,
};

enum class EChattingColorType : uint8_t {
	ECHAT_COLOR_DEFAULT = 0,
	ECHAT_COLOR_SELF = 1,
	ECHAT_COLOR_MAX = 2,
};

enum class ELinkMode : uint8_t {
	MODE_Text = 0,
	MODE_Line = 1,
	MODE_Binary = 2,
	MODE_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class REMATCH_DISPERSE_REASON : uint8_t {
	REMATCH_DISPERSE_REASON_LACK_MEMBER = 0,
	REMATCH_DISPERSE_REASON_TIMEOUT_LACK_MEMBER = 1,
	REMATCH_DISPERSE_REASON_GAME_START_FAILED = 2,
	REMATCH_DISPERSE_REASON_MAX = 3,
};

enum class BOOSTER : uint8_t {
	BOOSTER_PC_BANG = 0,
	BOOSTER_ITEM = 1,
	BOOSTER_PERIOD = 2,
	BOOSTER_CHANNEL = 3,
	BOOSTER_MATCH = 4,
	BOOSTER_NOMANNER = 5,
	BOOSTER_CLAN = 6,
	BOOSTER_MAX = 7,
};

enum class MATCHROOM_MODE_OPTION_TOGGLE_TYPE : uint8_t {
	MATCHROOM_MODE_OPTION_TOGGLE_TYPE_OFF = 0,
	MATCHROOM_MODE_OPTION_TOGGLE_TYPE_ON = 1,
	MATCHROOM_MODE_OPTION_TOGGLE_TYPE_MAX = 2,
};

enum class EMessengerListType : uint8_t {
	MLIST_SUGGESTION = 0,
	MLIST_FRIEND_ONLINE = 1,
	MLIST_FRIEND_OFFLINE = 2,
	MLIST_BLOCK = 3,
	MLIST_CLAN_ONLINE = 4,
	MLIST_CLAN_OFFLINE = 5,
	MLIST_MAX = 6,
};

enum class SHOP_VALUE_TYPE : uint8_t {
	SHOP_VALUE_TYPE_TIME = 0,
	SHOP_VALUE_TYPE_COUNT = 1,
	SHOP_VALUE_TYPE_MAX = 2,
};

enum class ETouchType : uint8_t {
	Touch_Began = 0,
	Touch_Moved = 1,
	Touch_Stationary = 2,
	Touch_Ended = 3,
	Touch_Cancelled = 4,
	Touch_MAX = 5,
};

enum class E_INVEN_ITEM_BUTTON_TYPE : uint8_t {
	E_INVEN_ITEM_BUTTON_TYPE_PRESET_2 = 0,
	E_INVEN_ITEM_BUTTON_TYPE_PRESET_3 = 1,
	E_INVEN_ITEM_BUTTON_TYPE_PRESET_4 = 2,
	E_INVEN_ITEM_BUTTON_TYPE_CHECK = 3,
	E_INVEN_ITEM_BUTTON_TYPE_REPAIR = 4,
	E_INVEN_ITEM_BUTTON_TYPE_SELL = 5,
	E_INVEN_ITEM_BUTTON_TYPE_USE = 6,
	E_INVEN_ITEM_BUTTON_TYPE_MAX = 7,
};

enum class EMovieStreamSource : uint8_t {
	MovieStream_File = 0,
	MovieStream_Memory = 1,
	MovieStream_MAX = 2,
};

enum class EAutoMatchState : uint8_t {
	EMS_Compose = 0,
	EMS_StartPossible = 1,
	EMS_TeamSearch = 2,
	EMS_MAX = 3,
};

enum class PCBANG_BENEFIT : uint8_t {
	PCBANG_BENEFIT_DEACTIVATE = 0,
	PCBANG_BENEFIT_ACTIVATE = 1,
	PCBANG_BENEFIT_MAX = 2,
};

enum class EUIChatType : uint8_t {
	EUICHAT_TEAM = 0,
	EUICHAT_ALL = 1,
	EUICHAT_CLAN = 2,
	EUICHAT_OTHER = 3,
	EUICHAT_MAX = 4,
};

enum class EParticleEventOutputType : uint8_t {
	ePARTICLEOUT_Spawn = 0,
	ePARTICLEOUT_Death = 1,
	ePARTICLEOUT_Collision = 2,
	ePARTICLEOUT_AttractorCollision = 3,
	ePARTICLEOUT_Kismet = 4,
	ePARTICLEOUT_MAX = 5,
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

enum class ERoundConditionSoundType : uint8_t {
	ERoundST_None = 0,
	ERoundST_Score30Percent = 1,
	ERoundST_Score60Percent = 2,
	ERoundST_Score90Percent = 3,
	ERoundST_RemainTime1Min = 4,
	ERoundST_RemainTime10Sec = 5,
	ERoundST_RemainTime30Sec = 6,
	ERoundST_MAX = 7,
};

enum class ITEM_SELL_PERIOD_CONDITION_TYPE : uint8_t {
	ITEM_SELL_PERIOD_CONDITION_TYPE_NONE = 0,
	ITEM_SELL_PERIOD_CONDITION_TYPE_INFINITE = 1,
	ITEM_SELL_PERIOD_CONDITION_TYPE_TIME = 2,
	ITEM_SELL_PERIOD_CONDITION_TYPE_ALL = 3,
	ITEM_SELL_PERIOD_CONDITION_TYPE_MAX = 4,
};

enum class MagazineState : uint8_t {
	EMS_Normal = 0,
	EMS_Reload = 1,
	EMS_LackOfAmmo = 2,
	EMS_NoAmmo = 3,
	EMS_MAX = 4,
};

enum class EWaveformFunction : uint8_t {
	WF_Constant = 0,
	WF_LinearIncreasing = 1,
	WF_LinearDecreasing = 2,
	WF_Sin0to90 = 3,
	WF_Sin90to180 = 4,
	WF_Sin0to180 = 5,
	WF_Noise = 6,
	WF_MAX = 7,
};

enum class SoundDistanceModel : uint8_t {
	ATTENUATION_Linear = 0,
	ATTENUATION_Logarithmic = 1,
	ATTENUATION_Inverse = 2,
	ATTENUATION_LogReverse = 3,
	ATTENUATION_NaturalSound = 4,
	ATTENUATION_MAX = 5,
};

enum class ECrowdBehaviorEvent : uint8_t {
	CBE_None = 0,
	CBE_Spawn = 1,
	CBE_Random = 2,
	CBE_SeePlayer = 3,
	CBE_EncounterAgent = 4,
	CBE_TakeDamage = 5,
	CBE_GroupWaiting = 6,
	CBE_Uneasy = 7,
	CBE_Alert = 8,
	CBE_Panic = 9,
	CBE_MAX = 10,
};

enum class ESplitScreenType : uint8_t {
	eSST_NONE = 0,
	eSST_2P_HORIZONTAL = 1,
	eSST_2P_VERTICAL = 2,
	eSST_3P_FAVOR_TOP = 3,
	eSST_3P_FAVOR_BOTTOM = 4,
	eSST_4P = 5,
	eSST_MAX = 6,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_RandomExhaustive = 2,
	BONESOCKETSEL_MAX = 3,
};

enum class EOnlineContentType : uint8_t {
	OCT_Downloaded = 0,
	OCT_SaveGame = 1,
	OCT_MAX = 2,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class ClanSearchSortType : uint8_t {
	ClanSearchSortTypeAsc = 0,
	ClanSearchSortTypeDesc = 1,
	ClanSearchSortTypeEnd = 2,
	ClanSearchSortType_MAX = 3,
};

enum class MATCHROOM_MODE_OPTION_TYPE : uint8_t {
	MATCHROOM_MODE_OPTION_TYPE_MAX_USER = 0,
	MATCHROOM_MODE_OPTION_TYPE_GOAL = 1,
	MATCHROOM_MODE_OPTION_TYPE_MISSION = 2,
	MATCHROOM_MODE_OPTION_TYPE_MATCH_END_SCORE = 3,
	MATCHROOM_MODE_OPTION_TYPE_PLAY_TIME = 4,
	MATCHROOM_MODE_OPTION_TYPE_THIRD_CAMERA_VIEW = 5,
	MATCHROOM_MODE_OPTION_TYPE_FREE_CAMERA_VIEW = 6,
	MATCHROOM_MODE_OPTION_TYPE_DEATH_CHAT = 7,
	MATCHROOM_MODE_OPTION_TYPE_RUSH = 8,
	MATCHROOM_MODE_OPTION_TYPE_AUTO_TEAM_BALANCE = 9,
	MATCHROOM_MODE_OPTION_TYPE_LIMIT_LEVEL = 10,
	MATCHROOM_MODE_OPTION_TYPE_OBSERVER = 11,
	MATCHROOM_MODE_OPTION_TYPE_DIFFICULTY = 12,
	MATCHROOM_MODE_OPTION_TYPE_HALF_CHANGE = 13,
	MATCHROOM_MODE_OPTION_TYPE_AUTO_TEAM_CHANGE = 14,
	MATCHROOM_MODE_OPTION_TYPE_APPLY_CLAN_RECORD = 15,
	MATCHROOM_MODE_OPTION_TYPE_REQUIRED_CLAN_MEMBER = 16,
	MATCHROOM_MODE_OPTION_TYPE_ALL_CHAT = 17,
	MATCHROOM_MODE_OPTION_TYPE_MAX = 18,
};

enum class EChannelEnterErrorType : uint8_t {
	EChannelEnterErr_Full = 0,
	EChannelEnterErr_Not_Enough_Level = 1,
	EChannelEnterErr_Not_Service = 2,
	EChannelEnterErr_Clan_Only = 3,
	EChannelEnterErr_Unselected_Channel = 4,
	EChannelEnterErr_NormalRequestedChampionship = 5,
	EChannelEnterErr_ChampionshipRequestedNormal = 6,
	EChannelEnterErr_KAD_Ratio_Failure = 7,
	EChannelEnterErr_MAX = 8,
};

enum class EOnlineGameSearchSortType : uint8_t {
	OGSSO_Ascending = 0,
	OGSSO_Descending = 1,
	OGSSO_MAX = 2,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class TriangleSortAxis : uint8_t {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3,
};

enum class EItemDetailViewType : uint8_t {
	E_VIEWTYPE_TEXT = 0,
	E_VIEWTYPE_SINGLE = 1,
	E_VIEWTYPE_COMPARE = 2,
	E_VIEWTYPE_MAX = 3,
};

enum class EFireMode : uint8_t {
	FireMode_1 = 0,
	FireMode_2 = 1,
	FireMode_3 = 2,
	FireMode_MAX = 3,
};

enum class MODE_GROUP_SELECT_TYPE : uint8_t {
	MODE_GROUP_SELECT_BASIC = 0,
	MODE_GROUP_SELECT_RANDOM = 1,
	MODE_GROUP_SELECT_AUTO_MATCHING = 2,
	MODE_GROUP_SELECT_QUICK_MATCHING = 3,
	MODE_GROUP_SELECT_COMPETITIVE_MATCHING = 4,
	MODE_GROUP_SELECT_MAX = 5,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class BTMenuType : uint8_t {
	MT_BEHAVIOR = 0,
	MT_CONDITION = 1,
	MT_CONTROL = 2,
	MT_TEST = 3,
	MT_ROOT = 4,
	MT_HIDDEN = 5,
	MT_NUMOF = 6,
	MT_COMMENT = 7,
	MT_MAX = 8,
};

enum class EPawnBuffState : uint8_t {
	EPBS_NONEBUFF = 0,
	EPBS_APPLY_CHARBUFF = 1,
	EPBS_APPLY_CHARBUFF_AND_SKILLBUFF = 2,
	EPBS_MAX = 3,
};

enum class EGenericYesNo : uint8_t {
	CBPID_VALUE_No = 0,
	CBPID_VALUE_Yes = 1,
	CBPID_VALUE_MAX = 2,
};

enum class E_INVEN_ITEM_SORT_TYPE : uint8_t {
	E_INVEN_ITEM_SORT_TYPE_BASIC = 0,
	E_INVEN_ITEM_SORT_TYPE_EQUIP = 1,
	E_INVEN_ITEM_SORT_TYPE_NAME = 2,
	E_INVEN_ITEM_SORT_TYPE_KILL_COUNT = 3,
	E_INVEN_ITEM_SORT_TYPE_ITEM_GRADE = 4,
	E_INVEN_ITEM_SORT_TYPE_REMAIN_TIME = 5,
	E_INVEN_ITEM_SORT_TYPE_MAX = 6,
};

enum class EClthesChipToolTip : uint8_t {
	ECCT_RAPID_RELOAD = 0,
	ECCT_QUICK_CHANGE = 1,
	ECCT_ADD_MAIN_AMMO = 2,
	ECCT_ADD_SUB_AMMO = 3,
	ECCT_MAX_HEALTH = 4,
	ECCT_MAX_HEALTH_CURE_RATE = 5,
	ECCT_MAX_AUTO_CURE_HEALTH = 6,
	ECCT_GROUND_TPS_SPEED_RATE = 7,
	ECCT_GROUND_FPS_SPEED_RATE = 8,
	ECCT_GROUND_CROUCH_SPEED_RATE = 9,
	ECCT_GROUND_ACCELATION_SPEED_RATE = 10,
	ECCT_SPRINT_SPEED_RAGE = 11,
	ECCT_GUN_DAMAGE_RATE = 12,
	ECCT_GUN_GUARD_RATE = 13,
	ECCT_MELEE_DAMAGE_RATE = 14,
	ECCT_MELLE_GUARD_RATE = 15,
	ECCT_EXPLOSIVE_ATTACK_DAMAGE_RATE = 16,
	ECCT_EXPLOSIVE_ATTACK_GUARD_RATE = 17,
	ECCT_RADER_DETAIL_DISTANCE = 18,
	ECCT_RAGER_RANGE = 19,
	ECCT_MAX = 20,
};

enum class MenuImageDrawStyle : uint8_t {
	IDS_Normal = 0,
	IDS_Stretched = 1,
	IDS_Tile = 2,
	IDS_MAX = 3,
};

enum class CHAT_CHANNEL : uint8_t {
	BASIC_CHAT_CHANNEL = 0,
	CUSTOM_CHAT_CHANNEL = 1,
	MATCH_ROOM_CHAT_CHANNEL = 2,
	CHAT_CHANNEL_MAX = 3,
};

enum class E_MAIN_LOBBY_ROOM_BUTTON_TYPE : uint8_t {
	E_MAIN_LOBBY_ROOM_BUTTON_TYPE_MAKE = 0,
	E_MAIN_LOBBY_ROOM_BUTTON_TYPE_PRACTICE = 1,
	E_MAIN_LOBBY_ROOM_BUTTON_TYPE_JOIN = 2,
	E_MAIN_LOBBY_ROOM_BUTTON_TYPE_ENROLLMENT = 3,
	E_MAIN_LOBBY_ROOM_BUTTON_TYPE_QUICK_MATCH = 4,
	E_MAIN_LOBBY_ROOM_BUTTON_TYPE_MAX = 5,
};

enum class ECoverAction : uint8_t {
	CA_Default = 0,
	CA_BlindLeft = 1,
	CA_BlindRight = 2,
	CA_LeanLeft = 3,
	CA_LeanRight = 4,
	CA_PopUp = 5,
	CA_BlindUp = 6,
	CA_PeekLeft = 7,
	CA_PeekRight = 8,
	CA_PeekUp = 9,
	CA_MAX = 10,
};

enum class EMeshBeaconBandwidthTestResult : uint8_t {
	MB_BandwidthTestResult_Succeeded = 0,
	MB_BandwidthTestResult_Timeout = 1,
	MB_BandwidthTestResult_Error = 2,
	MB_BandwidthTestResult_MAX = 3,
};

enum class ETeamWinnerCondition : uint8_t {
	ETWC_None = 0,
	ETWC_MemberScore = 1,
	ETWC_MissionScore = 2,
	ETWC_Kill = 3,
	ETWC_ASSIST = 4,
	ETWC_DEATH = 5,
	ETWC_AliveMember = 6,
	ETWC_FirstOccupation = 7,
	ETWC_MissionCount = 8,
	ETWC_OccupationScoreInNotOccupationZone = 9,
	ETWC_MAX = 10,
};

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_VelocityX = 1,
	EDPV_VelocityY = 2,
	EDPV_VelocityZ = 3,
	EDPV_VelocityMag = 4,
	EDPV_MAX = 5,
};

enum class EIvenPresetTabIndex : uint8_t {
	E_PRESET_FIRST = 0,
	E_PRESET_SECOND = 1,
	E_PRESET_THIRD = 2,
	E_PRESET_MAX = 3,
};

enum class ATTEND_TYPE : uint8_t {
	ATTEND_TYPE_REGULAR = 0,
	ATTEND_TYPE_PERIOD = 1,
	ATTEND_TYPE_MAX = 2,
};

enum class EShadowFilterQuality : uint8_t {
	SFQ_Low = 0,
	SFQ_Medium = 1,
	SFQ_High = 2,
	SFQ_MAX = 3,
};

enum class ECCSDetermineCanShootConfig : uint8_t {
	CCSDetermineCanShoot_SingleLine = 0,
	CCSDetermineCanShoot_MultiLine = 1,
	CCSDetermineCanShoot_MAX = 2,
};

enum class FailedBuyReasonType : uint8_t {
	EFBRT_OverRange = 0,
	EFBRT_Locking = 1,
	EFBRT_NoMoney = 2,
	EFBRT_AlreadyHave = 3,
	EFBRT_NoData = 4,
	EFBRT_CoolTime = 5,
	EFBRT_GlobalCoolTime = 6,
	EFBRT_AlreadyUse = 7,
	EFBRT_NoLicense = 8,
	EFBRT_MAX = 9,
};

enum class EFeaturePrivilegeLevel : uint8_t {
	FPL_Disabled = 0,
	FPL_EnabledFriendsOnly = 1,
	FPL_Enabled = 2,
	FPL_MAX = 3,
};

enum class EPropertyValueMappingType : uint8_t {
	PVMT_RawValue = 0,
	PVMT_PredefinedValues = 1,
	PVMT_Ranged = 2,
	PVMT_IdMapped = 3,
	PVMT_MAX = 4,
};

enum class ETextureFilterEdgeType : uint8_t {
	TFET_None = 0,
	TFET_PullLinear = 1,
	TFET_PullHermite = 2,
	TFET_AverageLinear = 3,
	TFET_AverageHermite = 4,
	TFET_MAX = 5,
};

enum class EDoubleClickDir : uint8_t {
	DCLICK_None = 0,
	DCLICK_Left = 1,
	DCLICK_Right = 2,
	DCLICK_Forward = 3,
	DCLICK_Back = 4,
	DCLICK_Active = 5,
	DCLICK_Done = 6,
	DCLICK_MAX = 7,
};

enum class EVoiceSound : uint8_t {
	E_VS_NONE = 0,
	E_VS_MOVE = 1,
	E_VS_ENEMY_CONTACT = 2,
	E_VS_YES = 3,
	E_VS_NO = 4,
	E_VS_COVER_THIS_AREA = 5,
	E_VS_ELIMINATEENERMY = 6,
	E_VS_MAX = 7,
};

enum class EUpperBodyActionType : uint8_t {
	EUBAT_Shoot = 0,
	EUBAT_MAX = 1,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class E_CONTROL_OPTION_ITEM_Index : uint8_t {
	COIID_MouseSensMode = 0,
	COIID_MasterMouseSensitivity = 1,
	COIID_Preset1MouseSensitivity = 2,
	COIID_Preset1MouseSensitivity_1stZoom = 3,
	COIID_Preset1MouseSensitivity_2ndZoom = 4,
	COIID_Preset2MouseSensitivity = 5,
	COIID_Preset2MouseSensitivity_1stZoom = 6,
	COIID_Preset2MouseSensitivity_2ndZoom = 7,
	COIID_Preset3MouseSensitivity = 8,
	COIID_Preset3MouseSensitivity_1stZoom = 9,
	COIID_Preset3MouseSensitivity_2ndZoom = 10,
	COIID_MouseInvert = 11,
	COIID_AimAssist = 12,
	COIID_Preset1MouseSensitivity_UseAll = 13,
	COIID_Preset2MouseSensitivity_UseAll = 14,
	COIID_Preset3MouseSensitivity_UseAll = 15,
	COIID_Preset1MouseSensitivity_AutoScale = 16,
	COIID_Preset2MouseSensitivity_AutoScale = 17,
	COIID_Preset3MouseSensitivity_AutoScale = 18,
	COIID_HoldtoAim = 19,
	COIID_MAX = 20,
};

enum class EMessengerStateType : uint8_t {
	MESSENGER_STATE_FRIEND = 0,
	MESSENGER_STATE_CLAN = 1,
	MESSENGER_STATE_MAX = 2,
};

enum class MATCHROOM_TITLE_TYPE : uint8_t {
	MATCHROOM_TITLE_TYPE_MACRO = 0,
	MATCHROOM_TITLE_TYPE_CUSTOM = 1,
	MATCHROOM_TITLE_TYPE_MAX = 2,
};

enum class COMPETITIVE_POINT_STATE : uint8_t {
	COMPETITIVE_POINT_STATE_NORMAL = 0,
	COMPETITIVE_POINT_STATE_PENALTY_TIME = 1,
	COMPETITIVE_POINT_STATE_PENALTY_INTERVAL = 2,
	COMPETITIVE_POINT_STATE_MAX = 3,
};

enum class EStatRecordType : uint8_t {
	EStatRecordType_Sum = 0,
	EStatRecordType_Max = 1,
};

enum class EOnlineServerConnectionStatus : uint8_t {
	OSCS_NotConnected = 0,
	OSCS_Connected = 1,
	OSCS_ConnectionDropped = 2,
	OSCS_NoNetworkConnection = 3,
	OSCS_ServiceUnavailable = 4,
	OSCS_UpdateRequired = 5,
	OSCS_ServersTooBusy = 6,
	OSCS_DuplicateLoginDetected = 7,
	OSCS_InvalidUser = 8,
	OSCS_MAX = 9,
};

enum class ESkillMessageType : uint8_t {
	ESMT_UnLock = 0,
	ESMT_Buy = 1,
	ESMT_FailedBuy = 2,
	ESMT_ActivatedAlert = 3,
	ESMT_MAX = 4,
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

enum class EConsoleType : uint8_t {
	CONSOLE_Any = 0,
	CONSOLE_Xbox360 = 1,
	CONSOLE_PS3 = 2,
	CONSOLE_Mobile = 3,
	CONSOLE_IPhone = 4,
	CONSOLE_Android = 5,
	CONSOLE_WiiU = 6,
	CONSOLE_Flash = 7,
	CONSOLE_MAX = 8,
};

enum class ETonemapperType : uint8_t {
	Tonemapper_Off = 0,
	Tonemapper_Filmic = 1,
	Tonemapper_Customizable = 2,
	Tonemapper_MAX = 3,
};

enum class EvolveSuplyState : uint8_t {
	ESS_Inactive = 0,
	ESS_WaitActive = 1,
	ESS_Active = 2,
	ESS_MAX = 3,
};

enum class EScalePivotType : uint8_t {
	ScalePivotType_Center = 0,
	ScalePivotType_Bottom = 1,
	ScalePivotType_Top = 2,
	ScalePivotType_Left = 3,
	ScalePivotType_Right = 4,
	ScalePivotType_MAX = 5,
};

enum class EMobileAmbientOcclusionSource : uint8_t {
	MAOS_Disabled = 0,
	MAOS_VertexColorRed = 1,
	MAOS_VertexColorGreen = 2,
	MAOS_VertexColorBlue = 3,
	MAOS_VertexColorAlpha = 4,
	MAOS_MAX = 5,
};

enum class EQUIP_SLOTS : uint8_t {
	EQUIP_PRIMARY_WEAPON = 0,
	EQUIP_SUB_WEAPON = 1,
	EQUIP_MELEE_WEAPON = 2,
	EQUIP_GRENADE_A = 3,
	EQUIP_GRENADE_B = 4,
	EQUIP_GRENADE_C = 5,
	EQUIP_CHIP_A = 6,
	EQUIP_CHIP_B = 7,
	EQUIP_CHIP_C = 8,
	EQUIP_MAX = 9,
};

enum class EClanHomeUserOffLineType : uint8_t {
	E_TYPE_ONLINE = 0,
	E_TYPE_OFFLine = 1,
	E_TYPE_MAX = 2,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class ACHIEVEMENT_TYPE : uint8_t {
	ACHIEVEMENT_NONE = 0,
	ACHIEVEMENT_BADGE = 1,
	ACHIEVEMENT_RIBBON = 2,
	ACHIEVEMENT_MEDAL = 3,
	ACHIEVEMENT_RIBBON_POST = 4,
	ACHIEVEMENT_MAX = 5,
};

enum class SkeletalMeshOptimizationNormalMode : uint8_t {
	SMONM_Recalculate = 0,
	SMONM_RecalculateSoft = 1,
	SMONM_RecalculateHard = 2,
	SMONM_MAX = 3,
};

enum class FWFileType : uint8_t {
	FWFT_Log = 0,
	FWFT_Stats = 1,
	FWFT_HTML = 2,
	FWFT_User = 3,
	FWFT_Debug = 4,
	FWFT_MAX = 5,
};

enum class EMatchroomButton : uint8_t {
	EMB_TeamSwap = 0,
	EMB_Change = 1,
	EMB_KickUser = 2,
	EMB_Watch = 3,
	EMB_Invitation = 4,
	EMB_Master = 5,
	EMB_Ready = 6,
	EMB_MODEMAP = 7,
	EMB_PRACTICE = 8,
	EMB_MAX = 9,
};

enum class EIFFDisplayType : uint8_t {
	E_IFFDisplay_Off = 0,
	E_IFFDisplay_FriendlyHidable = 1,
	E_IFFDisplay_Show = 2,
	E_IFFDisplay_MAX = 3,
};

enum class ERotationStep : uint8_t {
	RotationStep_1 = 0,
	RotationStep_2 = 1,
	RotationStep_3 = 2,
	RotationStep_4 = 3,
	RotationStep_5 = 4,
	RotationStep_6 = 5,
	RotationStep_7 = 6,
	RotationStep_8 = 7,
	RotationStep_9 = 8,
	RotationStep_10 = 9,
	RotationStep_11 = 10,
	RotationStep_12 = 11,
	RotationStep_13 = 12,
	RotationStep_14 = 13,
	RotationStep_15 = 14,
	RotationStep_16 = 15,
	RotationStep_17 = 16,
	RotationStep_18 = 17,
	RotationStep_19 = 18,
	RotationStep_20 = 19,
	RotationStep_21 = 20,
	RotationStep_22 = 21,
	RotationStep_23 = 22,
	RotationStep_24 = 23,
	RotationStep_25 = 24,
	RotationStep_26 = 25,
	RotationStep_27 = 26,
	RotationStep_28 = 27,
	RotationStep_29 = 28,
	RotationStep_30 = 29,
	RotationStep_31 = 30,
	RotationStep_32 = 31,
	RotationStep_MAX = 32,
};

enum class EBoneGimmickType : uint8_t {
	E_BG_None = 0,
	E_BG_BulletBelt = 1,
	E_BG_Reverse_BulletBelt = 2,
	E_BG_Revolver = 3,
	E_BG_MAX = 4,
};

enum class EPostProcessAAType : uint8_t {
	PostProcessAA_Off = 0,
	PostProcessAA_FXAA0 = 1,
	PostProcessAA_FXAA1 = 2,
	PostProcessAA_FXAA2 = 3,
	PostProcessAA_FXAA3 = 4,
	PostProcessAA_FXAA4 = 5,
	PostProcessAA_FXAA5 = 6,
	PostProcessAA_MLAA = 7,
	PostProcessAA_SMAA1 = 8,
	PostProcessAA_SMAA2 = 9,
	PostProcessAA_SMAA3 = 10,
	PostProcessAA_MAX = 11,
};

enum class EClanHomeButtonType : uint8_t {
	E_TYPE_CLAN_NOTICE = 0,
	E_TYPE_CALN_INTRODUCE = 1,
	E_TYPE_MAX = 2,
};

enum class HACK_TYPE : uint8_t {
	HACK_Weapon_Ammo = 0,
	HACK_Weapon_Range = 1,
	HACK_Weapon_FireLocation = 2,
	HACK_Weapon_HitPawnLocation = 3,
	HACK_Weapon_PenetrationFire = 4,
	HACK_Weapon_InvalidRecoil = 5,
	HACK_ETC_InvalidUDP = 6,
	HACK_ETC_WallHack = 7,
	HACK_ETC_MovementProperties = 8,
	HACK_Weapon_Projectile = 9,
	HACK_MAX = 10,
};

enum class EInterpTrackMoveFrame : uint8_t {
	IMF_World = 0,
	IMF_RelativeToInitial = 1,
	IMF_MAX = 2,
};

enum class EProfileControllerVibrationToggleOptions : uint8_t {
	PCVTO_Off = 0,
	PCVTO_IgnoreThis = 1,
	PCVTO_IgnoreThis2 = 2,
	PCVTO_On = 3,
	PCVTO_MAX = 4,
};

enum class EModuleType : uint8_t {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_MAX = 7,
};

enum class TextureFlipBookMethod : uint8_t {
	TFBM_UL_ROW = 0,
	TFBM_UL_COL = 1,
	TFBM_UR_ROW = 2,
	TFBM_UR_COL = 3,
	TFBM_LL_ROW = 4,
	TFBM_LL_COL = 5,
	TFBM_LR_ROW = 6,
	TFBM_LR_COL = 7,
	TFBM_RANDOM = 8,
	TFBM_BLOOD = 9,
	TFBM_MAX = 10,
};

enum class MATCH_HISTORY_TYPE : uint8_t {
	MATCH_HISTORY_TYPE_LOSE = 0,
	MATCH_HISTORY_TYPE_WIN = 1,
	MATCH_HISTORY_TYPE_RUNAWAY = 2,
	MATCH_HISTORY_TYPE_RUNAWAY_LOSE = 3,
	MATCH_HISTORY_TYPE_RUNAWAY_WIN = 4,
	MATCH_HISTORY_TYPE_MAX = 5,
};

enum class QUEST_TYPE : uint8_t {
	QUEST_TYPE_NONE = 0,
	QUEST_TYPE_DAILY = 1,
	QUEST_TYPE_MEDAL = 2,
	QUEST_TYPE_DAILY_3 = 3,
	QUEST_TYPE_DAILY_4 = 4,
	QUEST_TYPE_WEEKLY_2 = 5,
	QUEST_TYPE_WEEKLY_3 = 6,
	QUEST_TYPE_MONTHLY_2 = 7,
	QUEST_TYPE_MONTHLY_3 = 8,
	QUEST_TYPE_PCBANG_TS = 9,
	QUEST_TYPE_REPEATEDLY_AND_MATCH_REWARD_ONLY_2 = 10,
	QUEST_TYPE_REPEATEDLY_AND_MATCH_REWARD_ONLY_3 = 11,
	QUEST_TYPE_SPECIAL = 12,
	QUEST_TYPE_AI_NORMAL_S = 13,
	QUEST_TYPE_AI_NORMAL_SS = 14,
	QUEST_TYPE_AI_HARD_D = 15,
	QUEST_TYPE_REPEATEDLY_CLAN_FREE_MATCH_REWARD_ONLY_2 = 16,
	QUEST_TYPE_REPEATEDLY_CLAN_FREE_MATCH_REWARD_ONLY_3 = 17,
	QUEST_TYPE_FREE_AUTO_MATCH = 18,
	QUEST_TYPE_FREE_CHANNEL_PLAY = 19,
	QUEST_TYPE_AI_TDM = 20,
	QUEST_TYPE_REPEATEDLY_CLAN_RANKING_MATCH_REWARD_ONLY_2 = 21,
	QUEST_TYPE_REPEATEDLY_CLAN_RANKING_MATCH_REWARD_ONLY_3 = 22,
	QUEST_TYPE_COMPETITION_MATCH = 23,
	QUEST_TYPE_COMPETITION_MATCH_SQUAD = 24,
	QUEST_TYPE_DAILY_5 = 25,
	QUEST_TYPE_ONE_TIME = 26,
	QUEST_TYPE_DEILY_6 = 27,
	QUEST_TYPE_DEILY_7 = 28,
	QUEST_TYPE_DEILY_8 = 29,
	QUEST_TYPE_DEILY_9 = 30,
	QUEST_TYPE_DEILY_10 = 31,
	QUEST_TYPE_DEILY_11 = 32,
	QUEST_TYPE_DEILY_12 = 33,
	QUEST_TYPE_DEILY_13 = 34,
	QUEST_TYPE_DEILY_14 = 35,
	QUEST_TYPE_DEILY_15 = 36,
	QUEST_TYPE_WEEKLY_AI_HARD = 37,
	QUEST_TYPE_RETURN_USER_180_FINISH_GAME_ONCE = 38,
	QUEST_TYPE_RETURN_USER_180_FINISH_GAME_DAILY = 39,
	QUEST_TYPE_RETURN_USER_180_FINISH_GAME_WEEKLY = 40,
	QUEST_TYPE_CLEAR_GROUP_2 = 41,
	QUEST_TYPE_CLEAR_GROUP_3 = 42,
	QUEST_TYPE_CLEAR_GROUP_4 = 43,
	QUEST_TYPE_MAX = 44,
};

enum class MATCH_END_REASON : uint8_t {
	MATCH_END_REASON_NONE = 0,
	MATCH_END_REASON_FORFEITURE = 1,
	MATCH_END_REASON_SURRENDER = 2,
	MATCH_END_REASON_MAX = 3,
};

enum class ERootRotationOption : uint8_t {
	RRO_Default = 0,
	RRO_Discard = 1,
	RRO_Extract = 2,
	RRO_MAX = 3,
};

enum class EStatConstValueType : uint8_t {
	EStatConstValueType_None = 0,
	EStatConstValueType_Gun = 1,
	EStatConstValueType_Melee = 2,
	EStatConstValueType_Flag = 3,
	EStatConstValueType_MAX = 4,
};

enum class EGenericQualityLevel4 : uint8_t {
	CBPID_QUALITY4_Lowest = 0,
	CBPID_QUALITY4_Low = 1,
	CBPID_QUALITY4_Normal = 2,
	CBPID_QUALITY4_High = 3,
	CBPID_QUALITY4_Highest = 4,
	CBPID_QUALITY4_MAX = 5,
};

enum class EAdultGoreLevel : uint8_t {
	CBAGL_BLOOD_Red = 0,
	CBAGL_BLOOD_White = 1,
	CBAGL_BLOOD_None = 2,
	CBAGL_BLOOD_MAX = 3,
};

enum class EAnnounceableSkillType : uint8_t {
	EAST_UAVPatrol = 0,
	EAST_AttackHelicopter = 1,
	EAST_AirStrike = 2,
	EAST_Howitzer = 3,
	EAST_Predator = 4,
	EAST_MAX = 5,
};

enum class EHUDPlayerState : uint8_t {
	ERPS_Default = 0,
	ERPS_Dead = 1,
	ERPS_Radio = 2,
	ERPS_Fire = 3,
	ERPS_Damaged = 4,
	ERPS_MAX = 5,
};

enum class ClanJoinCancelErrorType : uint8_t {
	ENNET_ClanJoinCancel_State = 0,
	ENNET_ClanJoinCancel_Invalid = 1,
	ENNET_ClanJoinCancel_MAX = 2,
};

enum class E_MATCH_RESULT_TYPE : uint8_t {
	E_MATCH_RESULT_TYPE_LOSE = 0,
	E_MATCH_RESULT_TYPE_WIN = 1,
	E_MATCH_RESULT_TYPE_RUNAWAY = 2,
	E_MATCH_RESULT_TYPE_RUNAWAY_LOSE = 3,
	E_MATCH_RESULT_TYPE_RUNAWAY_WIN = 4,
	E_MATCH_RESULT_TYPE_MAX = 5,
};

enum class EMeshCompositionType : uint8_t {
	MESHCOMPOSITIONTYPE_COMPONENT = 0,
	MESHCOMPOSITIONTYPE_MERGE = 1,
	MESHCOMPOSITIONTYPE_MAX = 2,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Linear = 1,
	TF_MAX = 2,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_AlphaBlend = 0,
	LB_HeightBlend = 1,
	LB_MAX = 2,
};

enum class ClothBoneType : uint8_t {
	CLOTHBONE_Fixed = 0,
	CLOTHBONE_BreakableAttachment = 1,
	CLOTHBONE_TearLine = 2,
	CLOTHBONE_MAX = 3,
};

enum class FE_ZoomState : uint8_t {
	FEZoom_In = 0,
	FEZoom_Out = 1,
	FEZoom_MAX = 2,
};

enum class E_INVEN_ITEM_SELL_STATE_TYPE : uint8_t {
	E_INVEN_ITEM_SELL_STATE_TYPE_DISABLED = 0,
	E_INVEN_ITEM_SELL_STATE_TYPE_ENABLED = 1,
	E_INVEN_ITEM_SELL_STATE_TYPE_EXPEND_ENABLED = 2,
	E_INVEN_ITEM_SELL_STATE_TYPE_MAX = 3,
};

enum class E_CHANNEL_BOOSTER_TYPE : uint8_t {
	E_CHANNEL_BOOSTER_TYPE_EXP = 0,
	E_CHANNEL_BOOSTER_TYPE_GOLD = 1,
	E_CHANNEL_BOOSTER_TYPE_MAX = 2,
};

enum class EClanPasswordErrorType : uint8_t {
	ECPET_Sucees = 0,
	ECPET_None_Pw = 1,
	ECPET_None_PwConfirm = 2,
	ECPET_Match_Pw = 3,
	ECPET_Bad_Pw = 4,
	ECPET_None_CurPw = 5,
	ECPET_None_NewPw = 6,
	ECPET_Match_NewPw = 7,
	ECPET_None_NewPwConfirm = 8,
	ECPET_Invalid_Pw = 9,
	ECPET_Change_OldPw = 10,
	ECPET_Invalid_Permission = 11,
	ECPET_MAX = 12,
};

enum class EDashBoardPopupType : uint8_t {
	DBPOPUP_PLAYERINFO = 0,
	DBPOPUP_CALLINGCARD = 1,
	DBPOPUP_MAX = 2,
};

enum class EClanListJoinType : uint8_t {
	E_TYPE_CLAN_HOLD = 0,
	E_TYPE_CLAN_JOIN = 1,
	E_TYPE_CLAN_CALCEL = 2,
	E_TYPE_CLAN_MAX = 3,
};

enum class EHand : uint8_t {
	EHand_Left = 0,
	EHand_Right = 1,
	EHand_MAX = 2,
};

enum class ERoundCountType : uint8_t {
	ERound_None = 0,
	ERound_Single = 1,
	ERound_Multi = 2,
	ERount_Etc = 3,
	ERoundCountType_MAX = 4,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EWeaponState : uint8_t {
	WeaponState_InActive = 0,
	WeaponState_PendingDestroy = 1,
	WeaponState_Dropped = 2,
	WeaponState_Passive = 3,
	WeaponState_PendingClientWeaponSet = 4,
	WeaponState_Active = 5,
	WeaponState_EquipUp = 6,
	WeaponState_PutDown = 7,
	WeaponState_PreReload = 8,
	WeaponState_FullPreReload = 9,
	WeaponState_Reload = 10,
	WeaponState_FullReload = 11,
	WeaponState_PostReload = 12,
	WeaponState_PreFire1 = 13,
	WeaponState_PreFire2 = 14,
	WeaponState_Holding1 = 15,
	WeaponState_Holding2 = 16,
	WeaponState_Fire = 17,
	WeaponState_ZoomFire = 18,
	WeaponState_ZoomFire_Sec = 19,
	WeaponState_AltFire = 20,
	WeaponState_RespawnAction = 21,
	WeaponState_SpinUp = 22,
	WeaponState_SpinDown = 23,
	WeaponState_Stare = 24,
	WeaponState_SilencerEquiping = 25,
	WeaponState_SilencerDetaching = 26,
	WeaponState_ETC = 27,
	WeaponState_ActivePart = 28,
	WeaponState_DeactivePart = 29,
	WeaponState_MAX = 30,
};

enum class EChattingOpenType : uint8_t {
	ECHAT_OPEN_DEFAULT = 0,
	ECHAT_OPEN_PAGEUP = 1,
	ECHAT_OPEN_PAGEDOWN = 2,
	ECHAT_OPEN_MAX = 3,
};

enum class EAnimAimDir : uint8_t {
	ANIMAIM_LEFTUP = 0,
	ANIMAIM_CENTERUP = 1,
	ANIMAIM_RIGHTUP = 2,
	ANIMAIM_LEFTCENTER = 3,
	ANIMAIM_CENTERCENTER = 4,
	ANIMAIM_RIGHTCENTER = 5,
	ANIMAIM_LEFTDOWN = 6,
	ANIMAIM_CENTERDOWN = 7,
	ANIMAIM_RIGHTDOWN = 8,
	ANIMAIM_MAX = 9,
};

enum class eEffectType : uint8_t {
	eEffectType_SmallGauge = 0,
	eEffectType_MiddleGauge = 1,
	eEffectType_LargeGauge = 2,
	eEffectType_AntiMGauge = 3,
	eEffectType_MeleeEffect = 4,
	eEffectType_LastEffect = 5,
	eEffectType_StrongMeleeEffect = 6,
	eEffectType_MeleeLastEffect = 7,
	eEffectType_MeleeSawEffect = 8,
	eEffectType_StrongMeleeSawEffect = 9,
	eEffectType_ExplosionEffect = 10,
	eEffectType_Max = 11,
};

enum class ETargetCheckMethods : uint8_t {
	ETargetCheckMethod_AND = 0,
	ETargetCheckMethod_OR = 1,
	ETargetCheckMethod_MAX = 2,
};

enum class EBaseBlendType : uint8_t {
	BBT_ByActorTag = 0,
	BBT_ByActorClass = 1,
	BBT_MAX = 2,
};

enum class EInputPlatformType : uint8_t {
	IPT_PC = 0,
	IPT_361 = 1,
	IPT_PS3 = 2,
	IPT_MAX = 3,
};

enum class E_SHOPITEM_SERVICE_TYPE : uint8_t {
	ESIST_NONE = 0,
	ESIST_NEW = 1,
	ESIST_HOT = 2,
	ESIST_EVENT = 3,
	ESIST_MAX = 4,
};

enum class MATCHROOM_MODE_OPTION_TOGGLE_SHOW_TYPE : uint8_t {
	MATCHROOM_MODE_OPTION_TOGGLE_SHOW_TYPE_HIDE = 0,
	MATCHROOM_MODE_OPTION_TOGGLE_SHOW_TYPE_SHOW = 1,
	MATCHROOM_MODE_OPTION_TOGGLE_SHOW_TYPE_MAX = 2,
};

enum class E_INVEN_ITEM_BUTTON_STATE_TYPE : uint8_t {
	E_INVEN_ITEM_BUTTON_STATE_TYPE_DEFAULT = 0,
	E_INVEN_ITEM_BUTTON_STATE_TYPE_SELECTED = 1,
	E_INVEN_ITEM_BUTTON_STATE_TYPE_DISABLED = 2,
	E_INVEN_ITEM_BUTTON_STATE_TYPE_MAX = 3,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EFilterMode : uint8_t {
	FM_None = 0,
	FM_Ignore = 1,
	FM_Affect = 2,
	FM_MAX = 3,
};

enum class EVoiceSoundType : uint8_t {
	EVST_None = 0,
	EVST_PM_Male = 1,
	EVST_PM_Female = 2,
	EVST_VC_Male = 3,
	EVST_VC_Female = 4,
	EVST_MAX = 5,
};

enum class EAwaitListShowType : uint8_t {
	E_AL_ST_LOBBY = 0,
	E_AL_ST_MATCHROOM = 1,
	E_AL_ST_MAX = 2,
};

enum class ECoverType : uint8_t {
	CT_None = 0,
	CT_Standing = 1,
	CT_MidLevel = 2,
	CT_MAX = 3,
};

enum class EPartyReservationResult : uint8_t {
	PRR_GeneralError = 0,
	PRR_PartyLimitReached = 1,
	PRR_IncorrectPlayerCount = 2,
	PRR_RequestTimedOut = 3,
	PRR_ReservationDuplicate = 4,
	PRR_ReservationNotFound = 5,
	PRR_ReservationAccepted = 6,
	PRR_ReservationDenied = 7,
	PRR_MAX = 8,
};

enum class ETitleFileFileOp : uint8_t {
	TitleFile_None = 0,
	TitleFile_Save = 1,
	TitleFile_Load = 2,
	TitleFile_MAX = 3,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EProfileControllerSensitivityOptions : uint8_t {
	PCSO_Medium = 0,
	PCSO_Low = 1,
	PCSO_High = 2,
	PCSO_MAX = 3,
};

enum class ETargetType : uint8_t {
	Target_All = 0,
	Target_Closest = 1,
	Target_ClosestVisible = 2,
	Target_Current = 3,
	Target_ClosestPlayer = 4,
	Target_ClosestMissionActor = 5,
	Target_MAX = 6,
};

enum class PriceType : uint8_t {
	PRICE_TYPE_GAME_MONEY = 0,
	PRICE_TYPE_CASH = 1,
	PRICE_TYPE_MEDAL = 2,
	PRICE_TYPE_GCOIN = 3,
	PRICE_TYPE_BSCOIN = 4,
	PRICE_TYPE_MCOIN = 5,
	PRICE_TYPE_WIN_COIN = 6,
	PRICE_TYPE_MAX = 7,
};

enum class EProfileAutoCenterOptions : uint8_t {
	PACO_Off = 0,
	PACO_On = 1,
	PACO_MAX = 2,
};

enum class EQStartDropDown : uint8_t {
	E_QS_DDN_MISSIONS = 0,
	E_QS_DDN_MODES = 1,
	E_QS_DDN_MAPS = 2,
	E_QS_DDN_STATUS = 3,
	E_QS_DDN_PLAYERS = 4,
	E_QS_DDN_MAX = 5,
};

enum class EItemMainTab : uint8_t {
	E_MAIN_TAB_ALL = 0,
	E_MAIN_TAB_WEAPON = 1,
	E_MAIN_TAB_CHARACTER = 2,
	E_MAIN_TAB_ITEM = 3,
	E_MAIN_TAB_MAX = 4,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class ClanJoinApproveErrorType : uint8_t {
	ENNET_ClanJoinApprove_State = 0,
	ENNET_ClanJoinApprove_Invalid = 1,
	ENNET_ClanJoinApprove_Exists = 2,
	ENNET_ClanJoinApprove_OverMaxCount = 3,
	ENNET_ClanJoinApprove_MAX = 4,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class ECCSMovementConfig : uint8_t {
	CCSMovementUnreal = 0,
	CCSMovementKynapse = 1,
	ECCSMovementConfig_MAX = 2,
};

enum class EModeUIType : uint8_t {
	EModeUIType_None = 0,
	EModeUIType_PVP = 1,
	EModeUIType_ClanMatch = 2,
	EModeUIType_AI_DFM = 3,
	EModeUIType_AI_TDM = 4,
	EModeUIType_COMPETITION = 5,
	EModeUIType_MAX = 6,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class PC_TYPE : uint8_t {
	PC_PLAYER = 0,
	PC_SPECTATOR = 1,
	PC_MAX = 2,
};

enum class ECallingCardButton : uint8_t {
	E_CC_BTN_APPLY = 0,
	E_CC_BTN_CLOSE = 1,
	E_CC_BTN_MAX = 2,
};

enum class EPathSearchType : uint8_t {
	PST_Default = 0,
	PST_Breadth = 1,
	PST_NewBestPathTo = 2,
	PST_Constraint = 3,
	PST_MAX = 4,
};

enum class COMPETITIVE_REWARD_POPUP_CELL_TYPE : uint8_t {
	CRPC_NONE = 0,
	CRPC_REWARD = 1,
	CRPC_TOKEN = 2,
	CRPC_MAX = 3,
};

enum class E_COMPETITION_TYPE : uint8_t {
	E_COMPETITION_TYPE_SOLO_DUO = 0,
	E_COMPETITION_TYPE_SQUAD = 1,
	E_COMPETITION_TYPE_INTEGRATE = 2,
	E_COMPETITION_TYPE_MAX = 3,
};

enum class EDistanceType : uint8_t {
	DistanceType_2D = 0,
	DistanceType_3D = 1,
	DistanceType_MAX = 2,
};

enum class MAIL_STATE : uint8_t {
	MAIL_STATE_NEW = 0,
	MAIL_STATE_READ = 1,
	MAIL_STATE_MAX = 2,
};

enum class CLAN_MEMBER_GRADE : uint8_t {
	CLAN_MEMBER_GRADE_MASTER = 0,
	CLAN_MEMBER_GRADE_MANAGER = 1,
	CLAN_MEMBER_GRADE_NORMAL = 2,
	CLAN_MEMBER_GRADE_END = 3,
	CLAN_MEMBER_GRADE_MAX = 4,
};

enum class ELightShadowMode : uint8_t {
	LightShadow_Normal = 0,
	LightShadow_Modulate = 1,
	LightShadow_ModulateBetter = 2,
	LightShadow_MAX = 3,
};

enum class EScoringDisplayType : uint8_t {
	ESDT_None = 0,
	ESDT_KillMark = 1,
	ESDT_Stat = 2,
	ESDT_MAX = 3,
};

enum class TIER_POINT_UPDATE_TYPE : uint8_t {
	TIER_POINT_UPDATE_TYPE_MATCH_END = 0,
	TIER_POINT_UPDATE_TYPE_RESET = 1,
	TIER_POINT_UPDATE_TYPE_LONG_TERM_NON_PLAY_PENALTY = 2,
	TIER_POINT_UPDATE_TYPE_SEASON_CHANGE = 3,
	TIER_POINT_UPDATE_TYPE_MAX = 4,
};

enum class EAITeamInfo : uint8_t {
	AITeamInfo_None = 0,
	AITeamInfo_VC = 1,
	AITeamInfo_PM = 2,
	AITeamInfo_MAX = 3,
};

enum class EPawnAnimset : uint8_t {
	EPawnAnimset_Base = 0,
	EPawnAnimset_WeaponMaster = 1,
	EPawnAnimset_WeaponSub = 2,
	EPawnAnimset_MAX = 3,
};

enum class EKillType : uint8_t {
	EKT_NORMAL = 0,
	EKT_KILL = 1,
	EKT_DEAD = 2,
	EKT_MAX = 3,
};

enum class EWinType : uint8_t {
	EWT_None = 0,
	EWT_Winner = 1,
	EWT_Loser = 2,
	EWT_MAX = 3,
};

enum class EMuteType : uint8_t {
	MUTE_None = 0,
	MUTE_AllButFriends = 1,
	MUTE_All = 2,
	MUTE_MAX = 3,
};

enum class EMessengerPopupType : uint8_t {
	MPOPUP_PLAYERINFO = 0,
	MPOPUP_WHISPER = 1,
	MPOPUP_FOLLOW = 2,
	MPOPUP_INIVTE_TO_MATCHROOM = 3,
	MPOPUP_INIVTE_TO_MY_CLAN = 4,
	MPOPUP_DELETE = 5,
	MPOPUP_BLOCK = 6,
	MPOPUP_UNBLOCK = 7,
	MPOPUP_FRIEND_REQUEST = 8,
	MPOPUP_MAX = 9,
};

enum class EShopType : uint8_t {
	E_SHOPTYPE_GAMEMONEY_OR_CASH = 0,
	E_SHOPTYPE_MEDAL = 1,
	E_SHOPTYPE_RANDOMBOX = 2,
	E_SHOPTYPE_MAX = 3,
};

enum class RANDOM_BOX_GIVE_TYPE : uint8_t {
	RANDOM_BOX_GIVE_TYPE_NONE = 0,
	RANDOM_BOX_GIVE_TYPE_ITEM = 1,
	RANDOM_BOX_GIVE_TYPE_GOLD = 2,
	RANDOM_BOX_GIVE_TYPE_MEDAL = 3,
	RANDOM_BOX_GIVE_TYPE_GCOIN = 4,
	RANDOM_BOX_GIVE_TYPE_BSCOIN = 5,
	RANDOM_BOX_GIVE_TYPE_MCOIN = 6,
	RANDOM_BOX_GIVE_TYPE_MAX = 7,
};

enum class ATTEND_USER_TYPE : uint8_t {
	ATTEND_USER_TYPE_NONE = 0,
	ATTEND_USER_TYPE_NORMAL = 1,
	ATTEND_USER_TYPE_COMEBACK = 2,
	ATTEND_USER_TYPE_MAX = 3,
};

enum class EItemSubTabAll : uint8_t {
	E_SUB_TAB_ALL_ALL = 0,
	E_SUB_TAB_ALL_MAX = 1,
};

enum class E_STORAGE_BUTTON_TYPE : uint8_t {
	E_STORAGE_BUTTON_TYPE_STORAGE = 0,
	E_STORAGE_BUTTON_TYPE_GIFT = 1,
	E_STORAGE_BUTTON_TYPE_PREV = 2,
	E_STORAGE_BUTTON_TYPE_NEXT = 3,
	E_STORAGE_BUTTON_TYPE_RECEIVE = 4,
	E_STORAGE_BUTTON_TYPE_DELMSG = 5,
	E_STORAGE_BUTTON_TYPE_ALLRECEIVE = 6,
	E_STORAGE_BUTTON_TYPE_SELECTEDRECEIVE = 7,
	E_STORAGE_BUTTON_TYPE_ALLCHECK = 8,
	E_STORAGE_BUTTON_TYPE_MAX = 9,
};

enum class EItemSubTabWeapon : uint8_t {
	E_SUB_TAB_WEAPON_ALL = 0,
	E_SUB_TAB_WEAPON_PRIMARY_WEAPON = 1,
	E_SUB_TAB_WEAPON_SUB_WEAPON = 2,
	E_SUB_TAB_WEAPON_MELEE_WEAPON = 3,
	E_SUB_TAB_WEAPON_THROW_WEAPON = 4,
	E_SUB_TAB_WEAPON_TR_WEAPON = 5,
	E_SUB_TAB_WEAPON_MAX = 6,
};

enum class ETuningTabList : uint8_t {
	ETuningTab_Costume = 0,
	ETuningTab_Weapon = 1,
	ETuningTab_MAX = 2,
};

enum class ERadialForceType : uint8_t {
	RFT_Force = 0,
	RFT_Impulse = 1,
	RFT_MAX = 2,
};

enum class REQUIRE_TARGET_TYPE : uint8_t {
	REQUIRE_TARGET_TYPE_NONE = 0,
	REQUIRE_TARGET_TYPE_CLAN_MASTER = 1,
	REQUIRE_TARGET_TYPE_MAX = 2,
};

enum class E_CHANNEL_BUTTON_TYPE : uint8_t {
	E_CHANNEL_BUTTON_TYPE_REFLESH = 0,
	E_CHANNEL_BUTTON_TYPE_TUTORIAL = 1,
	E_CHANNEL_BUTTON_TYPE_JOIN = 2,
	E_CHANNEL_BUTTON_TYPE_MAX = 3,
};

enum class EventPageTab : uint8_t {
	EEventPageTabe_AttendanceCheck = 0,
	EEventPageTabe_DailyMission = 1,
	EEventPageTabe_WeeklyMission = 2,
	EEventPageTabe_SpecialEvent = 3,
	EEventPageTabe_PCBangEvent = 4,
	EEventPageTabe_HiredSoldierEventTab = 5,
	EEventPageTabe_AiEvent = 6,
	EEventPageTabe_Achievement = 7,
	EEventPageTabe_BattlePass = 8,
	EEventPageTabe_ComebackReward = 9,
	EEventPageTabe_MAX = 10,
};

enum class EProfileVoiceThruSpeakersOptions : uint8_t {
	PVTSO_Off = 0,
	PVTSO_On = 1,
	PVTSO_Both = 2,
	PVTSO_MAX = 3,
};

enum class FFG_ForceFieldCoordinates : uint8_t {
	FFG_CARTESIAN = 0,
	FFG_SPHERICAL = 1,
	FFG_CYLINDRICAL = 2,
	FFG_TOROIDAL = 3,
	FFG_MAX = 4,
};

enum class EUIRoundPoint : uint8_t {
	EUIRoundPoint_Score = 0,
	EUIRoundPoint_Kills = 1,
	EUIRoundPoint_AliveMemberCount = 2,
	EUIRoundPoint_WinRoundCount = 3,
	EUIRoundPoint_SpecialPoint = 4,
	EUIRoundPoint_MAX = 5,
};

enum class MATCHROOM_STATES : uint8_t {
	MATCHROOM_STATE_CLOSED = 0,
	MATCHROOM_STATE_CLOSING = 1,
	MATCHROOM_STATE_WAITING = 2,
	MATCHROOM_STATE_COUNTDOWN = 3,
	MATCHROOM_STATE_ENTERING_MATCH = 4,
	MATCHROOM_STATE_PLAYING = 5,
	MATCHROOM_STATE_MATCH_FINISHED = 6,
	MATCHROOM_STATE_MAX = 7,
};

enum class ECallingCardTab : uint8_t {
	E_CC_TAB_ALL = 0,
	E_CC_TAB_TEMP = 1,
	E_CC_TAB_MAX = 2,
};

enum class AVATAR_TYPES : uint8_t {
	AVATAR_NONE = 0,
	AVATAR_PEACE_MAKER = 1,
	AVATAR_VIPER_CIRCLE = 2,
	AVATAR_MAX = 3,
};

enum class Team : uint8_t {
	TEAM_VIPER_CIRCLE = 0,
	TEAM_PEACE_MAKER = 1,
	TEAM_MAX = 2,
};

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_World = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_Tangent = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_MAX = 4,
};

enum class EExtendPeriodItemType : uint8_t {
	EEPIT_NORMAL = 0,
	EEPIT_EXTEND = 1,
	EEPIT_MAX = 2,
};

enum class CombatSkillCoolType : uint8_t {
	CSCT_NORMAL = 0,
	CSCT_GLOBAL = 1,
	CSCT_MAX = 2,
};

enum class EPriceIconType : uint8_t {
	E_PRICE_ICON_TYPE_MONEY = 0,
	E_PRICE_ICON_TYPE_CASH = 1,
	E_PRICE_ICON_TYPE_MEDAL = 2,
	E_PRICE_ICON_TYPE_HANCOIN = 3,
	E_PRICE_ICON_TYPE_BSCOIN = 4,
	E_PRICE_ICON_TYPE_BULLET = 5,
	E_PRICE_ICON_TYPE_MAX = 6,
};

enum class E_CHANNEL_STATE : uint8_t {
	E_CHANNEL_STATE_NORMAL_1 = 0,
	E_CHANNEL_STATE_NORMAL_2 = 1,
	E_CHANNEL_STATE_NORMAL_3 = 2,
	E_CHANNEL_STATE_NORMAL_4 = 3,
	E_CHANNEL_STATE_HOT = 4,
	E_CHANNEL_STATE_MAX = 5,
};

enum class ETargetSelectionConfig : uint8_t {
	CCSTarget_Player = 0,
	CCSTarget_MissionActor = 1,
	CCSTarget_Enemy = 2,
	CCSTarget_EnemyHelicopter = 3,
	CCSTarget_EnemySentryGun = 4,
	CCSTarget_MAX = 5,
};

enum class ClanBreakAwayErrorType : uint8_t {
	ENNET_ClanBreakAway_NotSet = 0,
	ENNET_ClanBreakAway_Invalid_State = 1,
	ENNET_ClanBreakAway_Invalid_REQ = 2,
	ENNET_ClanBreakAway_Invalid_Operation = 3,
	ENNET_ClanBreakAway_MAX = 4,
};

enum class ETrophyState : uint8_t {
	TrophyState_Idle = 0,
	TrophyState_Aimming = 1,
	TrophyState_AimmingComplete = 2,
	TrophyState_MAX = 3,
};

enum class ESettingsDataType : uint8_t {
	SDT_Empty = 0,
	SDT_Int32 = 1,
	SDT_Int64 = 2,
	SDT_Double = 3,
	SDT_String = 4,
	SDT_Float = 5,
	SDT_Blob = 6,
	SDT_DateTime = 7,
	SDT_MAX = 8,
};

enum class ETransitionType : uint8_t {
	TT_None = 0,
	TT_Paused = 1,
	TT_Loading = 2,
	TT_Saving = 3,
	TT_Connecting = 4,
	TT_Precaching = 5,
	TT_StartTravel = 6,
	TT_EndTravel = 7,
	TT_MAX = 8,
};

enum class FoliageCullOption : uint8_t {
	FOLIAGECULL_Cull = 0,
	FOLIAGECULL_ScaleZ = 1,
	FOLIAGECULL_ScaleXYZ = 2,
	FOLIAGECULL_TranslateZ = 3,
	FOLIAGECULL_MAX = 4,
};

enum class EInfluenceType : uint8_t {
	Fluid_Flow = 0,
	Fluid_Raindrops = 1,
	Fluid_Wave = 2,
	Fluid_Sphere = 3,
	Fluid_MAX = 4,
};

enum class ELocationBoneSocketDestSelectionMethod : uint8_t {
	BONESOCKETDESTSEL_Sequential = 0,
	BONESOCKETDESTSEL_Random = 1,
	BONESOCKETDESTSEL_RandomExhaustive = 2,
	BONESOCKETDESTSEL_BlendAll = 3,
	BONESOCKETDESTSEL_MAX = 4,
};

enum class ITEM_PERIOD_TYPE : uint8_t {
	ITEM_PERIOD_TYPE_TIME = 0,
	ITEM_PERIOD_TYPE_INFINITE = 1,
	ITEM_PERIOD_TYPE_MAX = 2,
};

enum class EPartType : uint8_t {
	PARTTYPE_CHAR_BODY = 0,
	PARTTYPE_1ST_ARM = 1,
	PARTTYPE_1ST_HAND = 2,
	PARTTYPE_1ST_WRIST = 3,
	PARTTYPE_WEAPON_1ST_BODY = 4,
	PARTTYPE_WEAPON_1ST_MAGAZINE = 5,
	PARTTYPE_WEAPON_1ST_LASER = 6,
	PARTTYPE_WEAPON_1ST_SILENCER = 7,
	PARTTYPE_WEAPON_1ST_SCOPE = 8,
	PARTTYPE_WEAPON_1ST_GLAUNCHER = 9,
	PARTTYPE_WEAPON_1ST_GRIP = 10,
	PARTTYPE_WEAPON_3RD_BODY = 11,
	PARTTYPE_WEAPON_3RD_MAGAZINE = 12,
	PARTTYPE_WEAPON_3RD_LASER = 13,
	PARTTYPE_WEAPON_3RD_SILENCER = 14,
	PARTTYPE_WEAPON_3RD_SCOPE = 15,
	PARTTYPE_WEAPON_3RD_GLAUNCHER = 16,
	PARTTYPE_WEAPON_3RD_GRIP = 17,
	PARTTYPE_MAX = 18,
};

enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_World = 0,
	TRANSFORM_View = 1,
	TRANSFORM_Local = 2,
	TRANSFORM_Tangent = 3,
	TRANSFORM_MAX = 4,
};

enum class EObjectGradeType : uint8_t {
	EOGT_Zero = 0,
	EOGT_First = 1,
	EOGT_Second = 2,
	EOGT_Best = 3,
	EOGT_MAX = 4,
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

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EOnlineProfilePropertyOwner : uint8_t {
	OPPO_None = 0,
	OPPO_OnlineService = 1,
	OPPO_Game = 2,
	OPPO_MAX = 3,
};

enum class EAwaitListPopupType : uint8_t {
	E_AL_PT_USERINFO = 0,
	E_AL_PT_ADD_FRIEND = 1,
	E_AL_PT_WHISPER = 2,
	E_AL_PT_INVITE_ROOM = 3,
	E_AL_PT_MAX = 4,
};

enum class E_PLAY_SOUND_TYPE : uint8_t {
	E_PLAY_SOUND_TYPE_ESC_POPUP = 0,
	E_PLAY_SOUND_TYPE_MAX = 1,
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

enum class E_MAIL_TAB_TYPE : uint8_t {
	E_MAIL_TAB_TYPE_NONE = 0,
	E_MAIL_TAB_TYPE_NORMAL = 1,
	E_MAIL_TAB_TYPE_CASH = 2,
	E_MAIL_TAB_TYPE_MAX = 3,
};

enum class ESplineSpeedType : uint8_t {
	ESplineSpeedType_Maximum = 0,
	ESplineSpeedType_Linear = 1,
	ESplineSpeedType_MAX = 2,
};

enum class EDialogType : uint8_t {
	EDialog_OK = 0,
	EDialog_Alert = 1,
	EDialog_InputOnlyNumber = 2,
	EDialog_CompAlert = 3,
	EDialog_CompOK = 4,
	EDialog_MAX = 5,
};

enum class EFaceFXBlendMode : uint8_t {
	FXBM_Overwrite = 0,
	FXBM_Additive = 1,
	FXBM_MAX = 2,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
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

enum class StatSaveConditionType : uint8_t {
	ESaveCondition_Default = 0,
	ESaveCondition_Desertion = 1,
	ESaveCondition_Ban = 2,
	ESaveCondition_Disconnection = 3,
	ESaveCondition_MAX = 4,
};

enum class BTNodeFamily : uint8_t {
	NT_BEHAVIOR = 0,
	NT_CONTROL = 1,
	NT_CONDITION = 2,
	NT_COMMENT = 3,
	NT_MAX = 4,
};

enum class EventLifetime : uint8_t {
	EVENTLIFETIME_TRANSIENT = 0,
	EVENTLIFETIME_CONSUMABLE = 1,
	EVENTLIFETIME_PERSISTENT = 2,
	EVENTLIFETIME_MAX = 3,
};

enum class EShadowProjectionTechnique : uint8_t {
	ShadowProjTech_Default = 0,
	ShadowProjTech_PCF = 1,
	ShadowProjTech_VSM = 2,
	ShadowProjTech_BPCF_Low = 3,
	ShadowProjTech_BPCF_Medium = 4,
	ShadowProjTech_BPCF_High = 5,
	ShadowProjTech_MAX = 6,
};

enum class EInstanceWeightUsage : uint8_t {
	IWU_PartialSwap = 0,
	IWU_FullSwap = 1,
	IWU_MAX = 2,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_NoGlobalIllumination = 4,
	Quality_MAX = 5,
};

enum class EProfileDifficultyOptions : uint8_t {
	PDO_Normal = 0,
	PDO_Easy = 1,
	PDO_Hard = 2,
	PDO_MAX = 3,
};

enum class EItemSubTabCharacter : uint8_t {
	E_SUB_TAB_CHAR_ALL = 0,
	E_SUB_TAB_CHAR_CHAR = 1,
	E_SUB_TAB_CHAR_MAX = 2,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EShopMoneyType : uint8_t {
	E_MONEYTYPE_GAMEMONEY = 0,
	E_MONEYTYPE_CASH = 1,
	E_MONEYTYPE_MEDAL = 2,
	E_MONEYTYPE_GCOIN = 3,
	E_MONEYTYPE_BSCOIN = 4,
	E_MONEYTYPE_MCOIN = 5,
	E_MONEYTYPE_WINCOIN = 6,
	E_MONEYTYPE_MAX = 7,
};

enum class E_TICKET_TYPE : uint8_t {
	E_TICKET_TYPE_NONE = 0,
	E_TICKET_TYPE_ONLINE_CHAMPIONSHIP = 1,
	E_TICKET_TYPE_OFFLINE_CHAMPIONSHIP = 2,
	E_TICKET_TYPE_CLAN = 3,
	E_TICKET_TYPE_TEST_CHANNEL = 4,
	E_TICKET_TYPE_MAX = 5,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EUIUpdateSkillListType : uint8_t {
	EUIST_GENERAL = 0,
	EUIST_CHANGECR = 1,
	EUIST_MAX = 2,
};

enum class MovingSkelControlType : uint8_t {
	FW = 0,
	BW = 1,
	TR_LT = 2,
	TR_RT = 3,
	MovingSkelControlType_MAX = 4,
};

enum class EMatchOnOffCheck : uint8_t {
	EM_OnOff_PlayerPage = 0,
	EM_OnOff_MyPage = 1,
	EM_OnOff_ClanPage = 2,
	EM_OnOff_Max = 3,
};

enum class CombatLuaSystemCallback : uint8_t {
	E_LUA_STAT_UPDATE = 0,
	E_LUA_ACHIEVEMENT_CHECK = 1,
	E_LUA_DISPLAY_AWARD = 2,
	E_LUA_PROGRESS_UPDATED = 3,
	E_LUA_POST_DISPLAY_AWARD = 4,
	E_LUA_REQUEST_PROGRESS = 5,
	E_LUA_MAX = 6,
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
	TEXTUREGROUP_ImageBasedReflection = 26,
	TEXTUREGROUP_Bokeh = 27,
	TEXTUREGROUP_WorldCubeMap = 28,
	TEXTUREGROUP_MAX = 29,
};

enum class ERootBoneAxis : uint8_t {
	RBA_Default = 0,
	RBA_Discard = 1,
	RBA_Translate = 2,
	RBA_MAX = 3,
};

enum class EScreenShotType : uint8_t {
	SST_None = 0,
	SST_Capture = 1,
	SST_JPGCapture = 2,
	SST_SilentJPGCaptureAndReport = 3,
	SST_MAX = 4,
};

enum class ESafeZoneType : uint8_t {
	eSZ_TOP = 0,
	eSZ_BOTTOM = 1,
	eSZ_LEFT = 2,
	eSZ_RIGHT = 3,
	eSZ_MAX = 4,
};

enum class EMakeRoomMode : uint8_t {
	EMODE_CREATE = 0,
	EMODE_CHANGE = 1,
	EMODE_PRACTICE = 2,
	EMODE_MAX = 3,
};

enum class EOnlineGameState : uint8_t {
	OGS_NoSession = 0,
	OGS_Pending = 1,
	OGS_Starting = 2,
	OGS_InProgress = 3,
	OGS_Ending = 4,
	OGS_Ended = 5,
	OGS_MAX = 6,
};

enum class ERBCollisionChannel : uint8_t {
	RBCC_Default = 0,
	RBCC_Nothing = 1,
	RBCC_Pawn = 2,
	RBCC_Vehicle = 3,
	RBCC_Water = 4,
	RBCC_GameplayPhysics = 5,
	RBCC_EffectPhysics = 6,
	RBCC_Untitled1 = 7,
	RBCC_Untitled2 = 8,
	RBCC_Untitled3 = 9,
	RBCC_Untitled4 = 10,
	RBCC_Cloth = 11,
	RBCC_FluidDrain = 12,
	RBCC_SoftBody = 13,
	RBCC_FracturedMeshPart = 14,
	RBCC_BlockingVolume = 15,
	RBCC_DeadPawn = 16,
	RBCC_Clothing = 17,
	RBCC_ClothingCollision = 18,
	RBCC_MAX = 19,
};

enum class ECombatDamageType : uint8_t {
	EDAMAGETYPE_NONE = 0,
	EDAMAGETYPE_MELEE = 1,
	EDAMAGETYPE_BULLET = 2,
	EDAMAGETYPE_EXPLOSION = 3,
	EDAMAGETYPE_FELL = 4,
	EDAMAGETYPE_MAX = 5,
};

enum class E_CLAN_ATTENDANCE_REWARD_TYPE : uint8_t {
	E_CLAN_ATTENDANCE_WEEKDAY = 0,
	E_CLAN_ATTENDANCE_WEEKEND = 1,
	E_CLAN_ATTENDANCE_MAX = 2,
};

enum class EPBCornerType : uint8_t {
	EPBC_Default = 0,
	EPBC_Chamfer = 1,
	EPBC_Round = 2,
	EPBC_MAX = 3,
};

enum class E_MAIN_LOBBY_LAY_OUT_TYPE : uint8_t {
	E_MAIN_LOBBY_LAY_OUT_TYPE_DEFAULT = 0,
	E_MAIN_LOBBY_LAY_OUT_TYPE_QUICK_MATCH = 1,
	E_MAIN_LOBBY_LAY_OUT_TYPE_COMPENTITION_MATCH = 2,
	E_MAIN_LOBBY_LAY_OUT_TYPE_CLAN = 3,
	E_MAIN_LOBBY_LAY_OUT_TYPE_MAX = 4,
};

enum class E_DASHBOARD_BUTTON_POSITION_TYPE : uint8_t {
	E_DASHBOARD_BUTTON_POSITION_TYPE_TOP = 0,
	E_DASHBOARD_BUTTON_POSITION_TYPE_BOTTOM = 1,
	E_DASHBOARD_BUTTON_POSITION_TYPE_MAX = 2,
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

enum class EOnlineEnumerationReadState : uint8_t {
	OERS_NotStarted = 0,
	OERS_InProgress = 1,
	OERS_Done = 2,
	OERS_Failed = 3,
	OERS_MAX = 4,
};

enum class ETextDrawMethod : uint8_t {
	DRAW_CenterText = 0,
	DRAW_WrapText = 1,
	DRAW_MAX = 2,
};

enum class EZoneType : uint8_t {
	ZoneType_Button = 0,
	ZoneType_Joystick = 1,
	ZoneType_Trackball = 2,
	ZoneType_Slider = 3,
	ZoneType_SubClassed = 4,
	ZoneType_MAX = 5,
};

enum class ELoginCertificationType : uint8_t {
	ELCT_UserID = 0,
	ELCT_EnterMatchServer = 1,
	ELCT_UserDataInfo = 2,
	ELCT_MAX = 3,
};

enum class MATCHROOM_MODE_OPTION_DIFFICULTY_TYPE : uint8_t {
	MATCHROOM_MODE_OPTION_DIFFICULTY_TYPE_NOT_USE = 0,
	MATCHROOM_MODE_OPTION_DIFFICULTY_TYPE_EASY = 1,
	MATCHROOM_MODE_OPTION_DIFFICULTY_TYPE_NORMAL = 2,
	MATCHROOM_MODE_OPTION_DIFFICULTY_TYPE_HARD = 3,
	MATCHROOM_MODE_OPTION_DIFFICULTY_TYPE_MAX = 4,
};

enum class INVITE_TYPE : uint8_t {
	INVITE_TYPE_MATCHROOM = 0,
	INVITE_TYPE_MESSENGER = 1,
	INVITE_TYPE_MAX = 2,
};

enum class EMenuOptionType : uint8_t {
	MENUOT_ComboReadOnly = 0,
	MENUOT_ComboNumeric = 1,
	MENUOT_CheckBox = 2,
	MENUOT_Slider = 3,
	MENUOT_Spinner = 4,
	MENUOT_EditBox = 5,
	MENUOT_CollectionCheckBox = 6,
	MENUOT_CollapsingList = 7,
	MENUOT_MAX = 8,
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
	TMGS_Disc = 20,
	TMGS_Cone = 21,
	TMGS_Cosine = 22,
	TMGS_AngularGaussian = 23,
	TMGS_CosinePower = 24,
	TMGS_MAX = 25,
};

enum class USER_INFO_SEARCH_TYPE : uint8_t {
	USER_INFO_SEARCH_TYPE_ID = 0,
	USER_INFO_SEARCH_TYPE_NICK = 1,
	USER_INFO_SEARCH_TYPE_MAX = 2,
};

enum class RandomBoxActionState : uint8_t {
	E_RndBoxAct_MakeCard = 0,
	E_RndBoxAct_CardFaceUp = 1,
	E_RndBoxAct_CardAutoFaceUp = 2,
	E_RndBoxAct_AllCardOpened = 3,
	E_RndBoxAct_Finished = 4,
	E_RndBoxAct_MAX = 5,
};

enum class QUEST_UPDATE_ABUSE_TYPE : uint8_t {
	QUEST_UPDATE_ABUSE_TYPE_NONE = 0,
	QUEST_UPDATE_ABUSE_TYPE_BLOCK = 1,
	QUEST_UPDATE_ABUSE_TYPE_MAX = 2,
};

enum class EMcpMessageCompressionType : uint8_t {
	MMCT_NONE = 0,
	MMCT_LZO = 1,
	MMCT_ZLIB = 2,
	MMCT_MAX = 3,
};

enum class ECoverDirection : uint8_t {
	CD_Default = 0,
	CD_Left = 1,
	CD_Right = 2,
	CD_Up = 3,
	CD_MAX = 4,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class ECCSMovementType : uint8_t {
	CCSMovementType_Idle = 0,
	CCSMovementType_Walk = 1,
	CCSMovementType_Run = 2,
	CCSMovementType_MAX = 3,
};

enum class GAME_OPTION_TYPE : uint8_t {
	GAME_OPTION_TYPE_INVITE_AUTO_REGIST = 0,
	GAME_OPTION_TYPE_FRIEND_INVITE_REFUSE = 1,
	GAME_OPTION_TYPE_MINIMAP_SIZE_STEP = 2,
	GAME_OPTION_TYPE_MAX = 3,
};

enum class BTExecutionResult : uint8_t {
	ER_SUCCESS = 0,
	ER_FAILURE = 1,
	ER_INPROGRESS = 2,
	ER_INTERRUPTING = 3,
	ER_SUCCESSFULLY_INTERRUPTED = 4,
	ER_READY = 5,
	ER_NOT_READY = 6,
	ER_MAX = 7,
};

enum class TriangleSortOption : uint8_t {
	TRISORT_None = 0,
	TRISORT_CenterRadialDistance = 1,
	TRISORT_Random = 2,
	TRISORT_MergeContiguous = 3,
	TRISORT_Custom = 4,
	TRISORT_CustomLeftRight = 5,
	TRISORT_MAX = 6,
};

enum class EWorldAttractorFalloffType : uint8_t {
	FOFF_Constant = 0,
	FOFF_Linear = 1,
	FOFF_Exponent = 2,
	FOFF_MAX = 3,
};

enum class RANDOM_BOX_CUBE_TYPE : uint8_t {
	RANDOM_BOX_CUBE_TYPE_NORMAL = 0,
	RANDOM_BOX_CUBE_TYPE_GUARANTEE = 1,
	RANDOM_BOX_CUBE_TYPE_BONUS = 2,
	RANDOM_BOX_CUBE_TYPE_MAX = 3,
};

enum class EMapScoreMode : uint8_t {
	ETMM_None = 0,
	ETMM_MiniMap = 1,
	ETMM_MiniMapMixed = 2,
	ETMM_WholeMap = 3,
	ETMM_WholeMapMixed = 4,
	ETMM_ScoreboardOnly = 5,
	ETMM_BroadCasting = 6,
	ETMM_MAX = 7,
};

enum class EObjectIconType : uint8_t {
	O_ICONTYPE_Empty = 0,
	O_ICONTYPE_Self = 1,
	O_ICONTYPE_Friendly = 2,
	O_ICONTYPE_Dead_Friendly = 3,
	O_ICONTYPE_Damaged_Friendly = 4,
	O_ICONTYPE_Fire_Friendly = 5,
	O_ICONTYPE_Radio_Friendly = 6,
	O_ICONTYPE_Enemy = 7,
	O_ICONTYPE_Dead_Enemy = 8,
	O_ICONTYPE_Damaged_Enemy = 9,
	O_ICONTYPE_Fire_Enemy = 10,
	O_ICONTYPE_Respawn_Area = 11,
	O_ICONTYPE_Area = 12,
	O_ICONTYPE_C4_Friendly = 13,
	O_ICONTYPE_Damaged_C4_Friendly = 14,
	O_ICONTYPE_Fire_C4_Friendly = 15,
	O_ICONTYPE_Radio_C4_Friendly = 16,
	O_ICONTYPE_Explosion_A = 17,
	O_ICONTYPE_Explosion_Planted_A = 18,
	O_ICONTYPE_Explosion_B = 19,
	O_ICONTYPE_Explosion_Planted_B = 20,
	O_ICONTYPE_C4 = 21,
	O_ICONTYPE_Bunker_Ally_A = 22,
	O_ICONTYPE_Bunker_Ally_B = 23,
	O_ICONTYPE_Bunker_Ally_C = 24,
	O_ICONTYPE_Bunker_Ally_D = 25,
	O_ICONTYPE_Bunker_Ally_E = 26,
	O_ICONTYPE_Bunker_Attack_Ally_A = 27,
	O_ICONTYPE_Bunker_Attack_Ally_B = 28,
	O_ICONTYPE_Bunker_Attack_Ally_C = 29,
	O_ICONTYPE_Bunker_Attack_Ally_D = 30,
	O_ICONTYPE_Bunker_Attack_Ally_E = 31,
	O_ICONTYPE_Bunker_Enemy_A = 32,
	O_ICONTYPE_Bunker_Enemy_B = 33,
	O_ICONTYPE_Bunker_Enemy_C = 34,
	O_ICONTYPE_Bunker_Enemy_D = 35,
	O_ICONTYPE_Bunker_Enemy_E = 36,
	O_ICONTYPE_Bunker_Attack_Enemy_A = 37,
	O_ICONTYPE_Bunker_Attack_Enemy_B = 38,
	O_ICONTYPE_Bunker_Attack_Enemy_C = 39,
	O_ICONTYPE_Bunker_Attack_Enemy_D = 40,
	O_ICONTYPE_Bunker_Attack_Enemy_E = 41,
	O_ICONTYPE_RedAlert = 42,
	O_ICONTYPE_Siren = 43,
	O_ICONTYPE_Exit = 44,
	O_ICONTYPE_VIP = 45,
	O_ICONTYPE_Damaged_VIP = 46,
	O_ICONTYPE_Fire_VIP = 47,
	O_ICONTYPE_Occupied_Area = 48,
	O_ICONTYPE_Chopper_Friendly = 49,
	O_ICONTYPE_Chopper_Enemy = 50,
	O_ICONTYPE_Claymore_Friendly = 51,
	O_ICONTYPE_Claymore_Enemy = 52,
	O_ICONTYPE_UAV_Friendly = 53,
	O_ICONTYPE_UAV_Enemy = 54,
	O_ICONTYPE_SentryGun_Friendly = 55,
	O_ICONTYPE_SentryGun_Enemy = 56,
	O_ICONTYPE_TrophyTurret_Friendly = 57,
	O_ICONTYPE_TrophyTurret_Enemy = 58,
	O_ICONTYPE_Pickup_SpearTac = 59,
	O_ICONTYPE_Pickup_Grenade = 60,
	O_ICONTYPE_Pickup_AmmoKit = 61,
	O_ICONTYPE_AIwave_DefendedObject = 62,
	O_ICONTYPE_Marker = 63,
	O_ICONTYPE_Flag_Friendly = 64,
	O_ICONTYPE_Flag_Enemy = 65,
	O_ICONTYPE_FlagPoint_On_Friendly = 66,
	O_ICONTYPE_FlagPoint_Off_Friendly = 67,
	O_ICONTYPE_FlagPoint_On_Enemy = 68,
	O_ICONTYPE_FlagPoint_Off_Enemy = 69,
	O_ICONTYPE_FlagSpawn_On_Friendly = 70,
	O_ICONTYPE_FlagSpawn_Off_Friendly = 71,
	O_ICONTYPE_FlagSpawn_On_Enemy = 72,
	O_ICONTYPE_FlagSpawn_Off_Enemy = 73,
	O_ICONTYPE_MAX = 74,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_Disable = 2,
	PBO_MAX = 3,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ActorSpace = 1,
	BCS_ComponentSpace = 2,
	BCS_ParentBoneSpace = 3,
	BCS_BoneSpace = 4,
	BCS_OtherBoneSpace = 5,
	BCS_BaseMeshSpace = 6,
	BCS_MAX = 7,
};

enum class MATCH_CHANNEL_LEAVE_REASON_TYPE : uint8_t {
	MATCH_CHANNEL_LEAVE_REASON_TYPE_NONE = 0,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_KICK_BY_CLAN_MASTER = 1,
	MATCH_CHANNEL_LEAVE_REASON_WRONG_ENTRY_CONDITION = 2,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_PING_TOO_HIGH = 3,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_KICK_SECURITY = 4,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_KICK_BY_SYSTEM = 5,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_BAN_SECURITY = 6,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_BAN_CAST_VOTE = 7,
	MATCH_CHANNEL_LEAVE_REASON_TYPE_MAX = 8,
	MATCH_CHANNEL_LEAVE_REASON_MAX = 9,
};

enum class EGenericQualityLevel5 : uint8_t {
	CBPID_QUALITY5_Disable = 0,
	CBPID_QUALITY5_Low = 1,
	CBPID_QUALITY5_Normal = 2,
	CBPID_QUALITY5_High = 3,
	CBPID_QUALITY5_Highest = 4,
	CBPID_QUALITY5_MAX = 5,
};

enum class EMobileTexCoordsSource : uint8_t {
	MTCS_TexCoords0 = 0,
	MTCS_TexCoords1 = 1,
	MTCS_TexCoords2 = 2,
	MTCS_TexCoords3 = 3,
	MTCS_MAX = 4,
};

enum class ECCSAlertnessState : uint8_t {
	CCSAlertnessState_Relax = 0,
	CCSAlertnessState_Alert = 1,
	CCSAlertnessState_MAX = 2,
};

enum class ClanAcceptErrorType : uint8_t {
	ENNET_ClanAccept_NotSet = 0,
	ENNET_ClanAccept_Invalid_REQ = 1,
	ENNET_ClanAccept_Invalid_Clan = 2,
	ENNET_ClanAccept_AlreadyInClan = 3,
	ENNET_ClanAccept_Member_Is_Full = 4,
	ENNET_ClanAccept_Duplicate = 5,
	ENNET_ClanAccept_MAX = 6,
};

enum class TotalDataInfo_WeaponStat : uint8_t {
	ETDI_WS_FireCount = 0,
	ETDI_WS_HitCount = 1,
	ETDI_WS_Damage = 2,
	ETDI_WS_KillCount = 3,
	ETDI_WS_HeadShotCount = 4,
	ETDI_WS_HeadShotKillCount = 5,
	ETDI_WS_DeathCount = 6,
	ETDI_WS_HeadShotDeathCount = 7,
	ETDI_WS_MAX = 8,
};

enum class EWeaponTooltip : uint8_t {
	EWT_ACCURACY = 0,
	EWT_DAMAGE = 1,
	EWT_RANGE = 2,
	EWT_FIREPOWER = 3,
	EWT_STABILITY = 4,
	EWT_AMMO = 5,
	EWT_MAX = 6,
};

enum class EEventUploadType : uint8_t {
	EUT_GenericStats = 0,
	EUT_ProfileData = 1,
	EUT_MatchmakingData = 2,
	EUT_PlaylistPopulation = 3,
	EUT_MAX = 4,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_Default = 3,
	AspectRatio_MAX = 4,
};

enum class ERequestSendChattingType : uint8_t {
	ERSCT_None = 0,
	ERSCT_Channel = 1,
	ERSCT_MatchRoom = 2,
	ERSCT_InGame = 3,
	ERSCT_InGameTeam = 4,
	ERSCT_Clan = 5,
	ERSCT_Whisper = 6,
	ERSCT_RadioMessage = 7,
	ERSCT_MarkerRadioMessage = 8,
	ERSCT_Max = 9,
};

enum class EOnlineNewsType : uint8_t {
	ONT_Unknown = 0,
	ONT_GameNews = 1,
	ONT_ContentAnnouncements = 2,
	ONT_Misc = 3,
	ONT_MAX = 4,
};

enum class EScoreType : uint8_t {
	EScoreType_None = 0,
	EScoreType_GameScore = 1,
	EScoreType_MissionScore = 2,
	EScoreType_MAX = 3,
};

enum class EMatchType : uint8_t {
	EMT_Normal = 0,
	EMT_Clan = 1,
	EMT_Competitive = 2,
	EMT_MAX = 3,
};

enum class eFrontEndScene : uint8_t {
	FES_None = 0,
	FES_Waiting = 1,
	FES_GameTitle = 2,
	FES_Login = 3,
	FES_CreateCharacter = 4,
	FES_Channel = 5,
	FES_MainLobby = 6,
	FES_MatchRoom = 7,
	FES_Achieve = 8,
	FES_GameResult = 9,
	FES_CharacterInfo = 10,
	FES_Inventory = 11,
	FES_Shop = 12,
	FES_MakeRoom = 13,
	FES_QuickStart = 14,
	FES_ClanCreate = 15,
	FES_ClanList = 16,
	FES_ClanHome = 17,
	FES_Storage = 18,
	FES_MedalShop = 19,
	FES_Event = 20,
	FES_RandomBox = 21,
	FES_RandomBoxShop = 22,
	FES_END = 23,
	FES_MAX = 24,
};

enum class EUIDirection : uint8_t {
	EUID_TOP = 0,
	EUID_RIGHT = 1,
	EUID_BOTTOM = 2,
	EUID_LEFT = 3,
	EUID_Center = 4,
	EUID_Point = 5,
	EUID_INIT = 6,
	EUID_MAX = 7,
};

enum class PRESET_EQUIPMENTS : uint8_t {
	PRESET_EQUIPMENTS_BASIC_2 = 0,
	PRESET_EQUIPMENTS_BASIC_3 = 1,
	PRESET_EQUIPMENTS_BASIC_4 = 2,
	PRESET_EQUIPMENTS_MAX = 3,
};

enum class EUIOrientation : uint8_t {
	UI_Unknown = 0,
	UI_Portait = 1,
	UI_PortaitUpsideDown = 2,
	UI_LandscapeRight = 3,
	UI_LandscapeLeft = 4,
	UI_MAX = 5,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_None = 3,
	ERM_MAX = 4,
};

enum class MATCHROOM_MAP_OPTION_SIZE : uint8_t {
	MATCHROOM_MAP_OPTION_SIZE_SMALL = 0,
	MATCHROOM_MAP_OPTION_SIZE_MEDIUM = 1,
	MATCHROOM_MAP_OPTION_SIZE_LARGE = 2,
	MATCHROOM_MAP_OPTION_SIZE_MAX = 3,
};

enum class ETacticalMapNameplateIconType : uint8_t {
	E_NAMEPLATE_VIEWTARGET = 0,
	E_NAMEPLATE_VC = 1,
	E_NAMEPLATE_PM = 2,
	E_NAMEPLATE_MAX = 3,
};

enum class EPopupType : uint8_t {
	E_POPUP_TYPE_PLAYERINFO = 0,
	E_POPUP_TYPE_WHISPER = 1,
	E_POPUP_TYPE_ADDFRIEND = 2,
	E_POPUP_TYPE_INIVTE_TO_MY_CLAN = 3,
	E_POPUP_TYPE_BLOCK = 4,
	E_POPUP_TYPE_MAX = 5,
};

enum class E_EQUIP_SOUND_TYPE : uint8_t {
	E_EQUIP_SOUND_TYPE_PRI = 0,
	E_EQUIP_SOUND_TYPE_SUB = 1,
	E_EQUIP_SOUND_TYPE_MELEE = 2,
	E_EQUIP_SOUND_TYPE_THROW = 3,
	E_EQUIP_SOUND_TYPE_CHAR = 4,
	E_EQUIP_SOUND_TYPE_ACTIVE = 5,
	E_EQUIP_SOUND_TYPE_ARMOR = 6,
	E_EQUIP_SOUND_TYPE_MAX = 7,
};

enum class EFunctionInputType : uint8_t {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_StaticBool = 6,
	FunctionInput_MAX = 7,
};

enum class GameSessionType : uint8_t {
	GT_SessionInvalid = 0,
	GT_SinglePlayer = 1,
	GT_Coop = 2,
	GT_Multiplayer = 3,
	GT_MAX = 4,
};

enum class ClanJoinRefuseErrorType : uint8_t {
	ENNET_ClanJoinRefuse_State = 0,
	ENNET_ClanJoinRefuse_Permission = 1,
	ENNET_ClanJoinRefuse_Invalid = 2,
	ENNET_ClanJoinRefuse_MAX = 3,
};

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_PostProjection = 1,
	TRANSFORMPOSSOURCE_MAX = 2,
};

enum class EScoringGradeType : uint8_t {
	E_SCORING_GRADE0 = 0,
	E_SCORING_GRADE1 = 1,
	E_SCORING_GRADE2 = 2,
	E_SCORING_MAX = 3,
};

enum class EItemSubTabItem : uint8_t {
	E_SUB_TAB_ITEM_ALL = 0,
	E_SUB_TAB_ITEM_ITEM = 1,
	E_SUB_TAB_ITEM_LICENSE = 2,
	E_SUB_TAB_ITEM_PACKAGE = 3,
	E_SUB_TAB_ITEM_SPRAY = 4,
	E_SUB_TAB_ITEM_MAX = 5,
};

enum class TotalDataInfo_GameStat : uint8_t {
	ETDI_GS_FireCount = 0,
	ETDI_GS_HitCount = 1,
	ETDI_GS_Damage = 2,
	ETDI_GS_KillCount = 3,
	ETDI_GS_DeathCount = 4,
	ETDI_GS_SuicideCount = 5,
	ETDI_GS_Respawncount = 6,
	ETDI_GS_PlayTime = 7,
	ETDI_GS_GameScore = 8,
	ETDI_GS_MAX = 9,
};

enum class EActorMetricsType : uint8_t {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3,
};

enum class EOnlineFriendState : uint8_t {
	OFS_Offline = 0,
	OFS_Online = 1,
	OFS_Away = 2,
	OFS_Busy = 3,
	OFS_MAX = 4,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EOnlinePlayerStorageAsyncState : uint8_t {
	OPAS_NotStarted = 0,
	OPAS_Read = 1,
	OPAS_Write = 2,
	OPAS_Finished = 3,
	OPAS_MAX = 4,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class EDecompressionType : uint8_t {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_MAX = 7,
};

enum class eCombatPostProcess : uint8_t {
	CBPP_NONE = 0,
	CBPP_EXPOSED = 1,
	CBPP_FLASHBANG = 2,
	CBPP_WARMUP = 3,
	CBPP_COUNTDOWN = 4,
	CBPP_ROUND_WIN = 5,
	CBPP_ROUND_OVER = 6,
	CBPP_ROUND_LOSE = 7,
	CBPP_MATCH_OVER_WIN = 8,
	CBPP_MATCH_OVER_LOSE = 9,
	CBPP_MAX = 10,
};

enum class EMcpGroupAccessLevel : uint8_t {
	MGAL_Owner = 0,
	MGAL_Member = 1,
	MGAL_Public = 2,
	MGAL_MAX = 3,
};

enum class E_SHOW_TYPE : uint8_t {
	E_SHOW_TYPE_NONE = 0,
	E_SHOW_TYPE_LEVEL_UP = 1,
	E_SHOW_TYPE_LEVEL_UP_REWARD = 2,
	E_SHOW_TYPE_TIER_UP = 3,
	E_SHOW_TYPE_MAX = 4,
};

enum class EReservationPacketType : uint8_t {
	RPT_UnknownPacketType = 0,
	RPT_ClientReservationRequest = 1,
	RPT_ClientReservationUpdateRequest = 2,
	RPT_ClientCancellationRequest = 3,
	RPT_HostReservationResponse = 4,
	RPT_HostReservationCountUpdate = 5,
	RPT_HostTravelRequest = 6,
	RPT_HostIsReady = 7,
	RPT_HostHasCancelled = 8,
	RPT_Heartbeat = 9,
	RPT_MAX = 10,
};

enum class ERequestType : uint8_t {
	Request_GET = 0,
	Request_POST = 1,
	Request_MAX = 2,
};

enum class EMaterialLightingModel : uint8_t {
	MLM_Phong = 0,
	MLM_NonDirectional = 1,
	MLM_Unlit = 2,
	MLM_SHPRT = 3,
	MLM_Custom = 4,
	MLM_Anisotropic = 5,
	MLM_Phong_HL = 6,
	MLM_Anisotropic_HL = 7,
	MLM_MAX = 8,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class LIMIT_BUY_TYPE : uint8_t {
	LIMIT_BUY_TYPE_NONE = 0,
	LIMIT_BUY_TYPE_ONLY_ONE = 1,
	LIMIT_BUY_TYPE_DAY = 2,
	LIMIT_BUY_TYPE_MAX = 3,
};

enum class ShopCategoryIndexType : uint8_t {
	E_SHOP_CATEGORY_TYPE_DEFAULT = 0,
	E_SHOP_CATEGORY_TYPE_PRICE = 1,
	E_SHOP_CATEGORY_TYPE_MAX = 2,
};

enum class ECrosshairTarget : uint8_t {
	ECT_None = 0,
	ECT_Friendly = 1,
	ECT_Enemy = 2,
	ECT_MAX = 3,
};

enum class EVIPIconType : uint8_t {
	EVIP_ALLY = 0,
	EVIP_ENEMY = 1,
	EVIP_MAX = 2,
};

enum class VOICE_CHAT_STATE : uint8_t {
	EVS_DISABLE = 0,
	EVS_ON = 1,
	EVS_TALK = 2,
	EVS_OFF = 3,
	EVS_MAX = 4,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class ETrail2SpawnMethod : uint8_t {
	PET2SM_Emitter = 0,
	PET2SM_Velocity = 1,
	PET2SM_Distance = 2,
	PET2SM_MAX = 3,
};

enum class EProfilePreferredColorOptions : uint8_t {
	PPCO_None = 0,
	PPCO_Black = 1,
	PPCO_White = 2,
	PPCO_Yellow = 3,
	PPCO_Orange = 4,
	PPCO_Pink = 5,
	PPCO_Red = 6,
	PPCO_Purple = 7,
	PPCO_Blue = 8,
	PPCO_Green = 9,
	PPCO_Brown = 10,
	PPCO_Silver = 11,
	PPCO_MAX = 12,
};

enum class EPartyBeaconClientState : uint8_t {
	PBCS_None = 0,
	PBCS_Connecting = 1,
	PBCS_Connected = 2,
	PBCS_ConnectionFailed = 3,
	PBCS_AwaitingResponse = 4,
	PBCS_Closed = 5,
	PBCS_MAX = 6,
};

enum class EChampionshipManagerError : uint8_t {
	EChampionshipError_Nothing = 0,
	EChampionshipError_InvalidArgument = 1,
	EChampionshipError_InvalidGrade = 2,
	EChampionshipError_FailedInitialize = 3,
	EChampionshipError_InvalidPluginData = 4,
	EChampionshipError_MAX = 5,
};

enum class ETuningOptionType : uint8_t {
	ETuningOptionType_EXP = 0,
	ETuningOptionType_GOLD = 1,
	ETuningOptionType_MEDAL = 2,
	ETuningOptionType_SLOT = 3,
	ETuningOptionType_MAX = 4,
};

enum class ELadderClimbType : uint8_t {
	ELadderClimbType_Default = 0,
	ELadderClimbType_IgnoreCameraPitch = 1,
	ELadderClimbType_MAX = 2,
};

enum class E_SYSTEM_COUNTER_POSITION_TYPE : uint8_t {
	E_SYSTEM_COUNTER_POSITION_TYPE_TOP_LEFT = 0,
	E_SYSTEM_COUNTER_POSITION_TYPE_TOP_RIGHT = 1,
	E_SYSTEM_COUNTER_POSITION_TYPE_BOTTOM_RIGHT = 2,
	E_SYSTEM_COUNTER_POSITION_TYPE_BOTTOM_LEFT = 3,
	E_SYSTEM_COUNTER_POSITION_TYPE_MAX = 4,
};

enum class ELightAffectsClassification : uint8_t {
	LAC_USER_SELECTED = 0,
	LAC_DYNAMIC_AFFECTING = 1,
	LAC_STATIC_AFFECTING = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX = 4,
};

enum class EFireLinkID : uint8_t {
	FLI_FireLink = 0,
	FLI_RejectedFireLink = 1,
	FLI_MAX = 2,
};

enum class EVertSurfaceAttractorFalloffType : uint8_t {
	VSFOFF_Constant = 0,
	VSFOFF_Linear = 1,
	VSFOFF_Exponent = 2,
	VSFOFF_MAX = 3,
};

enum class ClanKickMemberErrorType : uint8_t {
	ENNET_ClanKick_NotSet = 0,
	ENNET_ClanKick_Invalid_REQ = 1,
	ENNET_ClanKick_Invalid_Auth_Level = 2,
	ENNET_ClanKick_Invalid_User = 3,
	ENNET_ClanKick_MAX = 4,
};

enum class PLAY_COMPLETE_TYPE : uint8_t {
	PLAY_COMPLETE_TYPE_NORMAL = 0,
	PLAY_COMPLETE_TYPE_RUNAWAY = 1,
	PLAY_COMPLETE_TYPE_ENTER_FAILED = 2,
	PLAY_COMPLETE_TYPE_MAX = 3,
};

enum class WeaponCategoryType : uint8_t {
	EWCT_Gun = 0,
	EWCT_Grenade = 1,
	EWCT_Melee = 2,
	EWCT_MAX = 3,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
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

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class EPointSelection : uint8_t {
	PS_Normal = 0,
	PS_Random = 1,
	PS_Reverse = 2,
	PS_MAX = 3,
};

enum class EReadyButtonType : uint8_t {
	ERBT_Ready = 0,
	ERBT_UnReady = 1,
	ERBT_Intrude = 2,
	ERBT_Start = 3,
	ERBT_Abort = 4,
	ERBT_MAX = 5,
};

enum class EClanMatchTabType : uint8_t {
	E_TYPE_CLAN_RECENTYLY = 0,
	E_TYPE_CLAN_RANKMATCH = 1,
	E_TYPE_CLAN_AMATCH = 2,
	E_TYPE_CLAN_MAX = 3,
};

enum class EMcpFileCompressionType : uint8_t {
	MFCT_NONE = 0,
	MFCT_ZLIB = 1,
	MFCT_MAX = 2,
};

enum class EAIDebugCameraType : uint8_t {
	AIDebugCameraType_Free = 0,
	AIDebugCameraType_Attach = 1,
	AIDebugCameraType_Fixed = 2,
	AIDebugCameraType_MAX = 3,
};

enum class ERoundStartType : uint8_t {
	ERST_ATTCK_ROUND = 0,
	ERST_DEPENSE_ROUND = 1,
	ERST_ATTACK_ROUND_MATCHPOINT = 2,
	ERST_DEPENSE_ROUND_MATCHPOINT = 3,
	ERST_ATTACK_FINALROUND = 4,
	ERST_DEPENSE_FINALROUND = 5,
	ERST_ROUND = 6,
	ERST_ROUND_MATCHPOINT = 7,
	ERST_FINALROUND = 8,
	ERST_MESSAGE_ONLY = 9,
	ERST_ERROR = 10,
	ERST_MAX = 11,
};

enum class EBombIndicatorState : uint8_t {
	EBIS_Default = 0,
	EBIS_Planted = 1,
	EBIS_Explode = 2,
	EBIS_Defused = 3,
	EBIS_MAX = 4,
};

enum class EProfileRaceCameraLocationOptions : uint8_t {
	PRCLO_Behind = 0,
	PRCLO_Front = 1,
	PRCLO_Inside = 2,
	PRCLO_MAX = 3,
};

enum class USER_GAME_OPTION_TYPE : uint8_t {
	USER_GAME_OPTION_TYPE_OFF = 0,
	USER_GAME_OPTION_TYPE_ON = 1,
	USER_GAME_OPTION_TYPE_MAX = 2,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
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

enum class AUTO_BALANCE_TEAM : uint8_t {
	AUTO_BALANCE_TEAM_A_2 = 0,
	AUTO_BALANCE_TEAM_B_2 = 1,
	AUTO_BALANCE_TEAM_B_3 = 2,
	AUTO_BALANCE_TEAM_A_3 = 3,
	AUTO_BALANCE_TEAM_MAX = 4,
};

enum class E_SYSTEM_COUNT_TYPE : uint8_t {
	E_SYSTEM_COUNT_TYPE_FPS = 0,
	E_SYSTEM_COUNT_TYPE_PING = 1,
	E_SYSTEM_COUNT_TYPE_VRAM = 2,
	E_SYSTEM_COUNT_TYPE_RAM = 3,
	E_SYSTEM_COUNT_TYPE_MAX = 4,
};

enum class PLAYERSTART_TYPE : uint8_t {
	PLAYERSTART_TYPE_GROUND = 0,
	PLAYERSTART_TYPE_AIR = 1,
	PLAYERSTART_TYPE_MAX = 2,
};

enum class EMatchroomType : uint8_t {
	EMatchroom_Custom = 0,
	EMatchroom_Quick = 1,
	EMatchroom_Clan = 2,
	EMatchroom_ClanMatching = 3,
	EMatchroom_Competitive = 4,
	EMatchroom_AI = 5,
	EMatchroom_MAX = 6,
};

enum class EZoneSlideType : uint8_t {
	ZoneSlide_UpDown = 0,
	ZoneSlide_LeftRight = 1,
	ZoneSlide_MAX = 2,
};

enum class ENavMeshEdgeType : uint8_t {
	NAVEDGE_Normal = 0,
	NAVEDGE_Mantle = 1,
	NAVEDGE_Coverslip = 2,
	NAVEDGE_SwatTurn = 3,
	NAVEDGE_DropDown = 4,
	NAVEDGE_PathObject = 5,
	NAVEDGE_BackRefDummy = 6,
	NAVEDGE_Jump = 7,
	NAVEDGE_MAX = 8,
};

enum class EBLOCK_PLAY_GAME_TYPE : uint8_t {
	BPGT_UNBLOCK = 0,
	BPGT_BLOCK = 1,
	BPGT_MAX = 2,
};

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_ModulateAndAdd = 5,
	BLEND_SoftMasked = 6,
	BLEND_AlphaComposite = 7,
	BLEND_DitheredTranslucent = 8,
	BLEND_MAX = 9,
};

enum class GJKResult : uint8_t {
	GJK_Intersect = 0,
	GJK_NoIntersection = 1,
	GJK_Fail = 2,
	GJK_MAX = 3,
};

enum class QUEST_GROUP : uint8_t {
	QUEST_GROUP_NONE = 0,
	QUEST_GROUP_DAILY = 1,
	QUEST_GROUP_WEEKLY = 2,
	QUEST_GROUP_MONTHLY = 3,
	QUEST_GROUP_PCBANG = 4,
	QUEST_GROUP_REPEATEDLY_AND_MATCH_REWARD_ONLY = 5,
	QUEST_GROUP_SPECIAL = 6,
	QUEST_GROUP_AI = 7,
	QUEST_GROUP_FREE_AUTO_MATCH = 8,
	QUEST_GROUP_ONE_TIME = 9,
	QUEST_GROUP_RETURNUSER_ONCE = 10,
	QUEST_GROUP_RETURNUSER_DAILY = 11,
	QUEST_GROUP_RETURNUSER_WEEKLY = 12,
	QUEST_GROUP_MAX = 13,
};

enum class ECoverLocationDescription : uint8_t {
	CoverDesc_None = 0,
	CoverDesc_InWindow = 1,
	CoverDesc_InDoorway = 2,
	CoverDesc_BehindCar = 3,
	CoverDesc_BehindTruck = 4,
	CoverDesc_OnTruck = 5,
	CoverDesc_BehindBarrier = 6,
	CoverDesc_BehindColumn = 7,
	CoverDesc_BehindCrate = 8,
	CoverDesc_BehindWall = 9,
	CoverDesc_BehindStatue = 10,
	CoverDesc_BehindSandbags = 11,
	CoverDesc_MAX = 12,
};

enum class EStatDataSetType : uint8_t {
	EStatDataSetType_None = 0,
	EStatDataSetType_ConstValue = 1,
	EStatDataSetType_StatGroup = 2,
	EStatDataSetType_Item = 3,
	EStatDataSetType_Rank = 4,
	EStatDataSetType_Scoring = 5,
	EStatDataSetType_MAX = 6,
};

enum class ESplineActorType : uint8_t {
	ESplineActorType_Helicopter = 0,
	ESplineActorType_SentryGun = 1,
	ESplineActorType_MineTrain = 2,
	ESplineActorType_MAX = 3,
};

enum class EMeshBeaconBandwidthTestState : uint8_t {
	MB_BandwidthTestState_NotStarted = 0,
	MB_BandwidthTestState_RequestPending = 1,
	MB_BandwidthTestState_StartPending = 2,
	MB_BandwidthTestState_InProgress = 3,
	MB_BandwidthTestState_Completed = 4,
	MB_BandwidthTestState_Incomplete = 5,
	MB_BandwidthTestState_Timeout = 6,
	MB_BandwidthTestState_Error = 7,
	MB_BandwidthTestState_MAX = 8,
};

enum class ETerrainMappingType : uint8_t {
	TMT_Auto = 0,
	TMT_XY = 1,
	TMT_XZ = 2,
	TMT_YZ = 3,
	TMT_MAX = 4,
};

enum class ETeenGoreLevel : uint8_t {
	CBTGL_BLOOD_White = 0,
	CBTGL_BLOOD_None = 1,
	CBTGL_BLOOD_MAX = 2,
};

enum class EFrontEnd_TagType : uint8_t {
	TagType_None = 0,
	TagType_Event = 1,
	TagType_Extra = 2,
	TagType_Special = 3,
	TagType_MAX = 4,
};

enum class E_OPTION_TAB_Index : uint8_t {
	OTI_Graphic = 0,
	OTI_Control = 1,
	OTI_Sound = 2,
	OTI_GamePlay = 3,
	OTI_Rating = 4,
	OTI_MAX = 5,
};

enum class E_INVEN_ITEM_SET_TYPE : uint8_t {
	E_INVEN_ITEM_SET_TYPE_CHECK = 0,
	E_INVEN_ITEM_SET_TYPE_PRESET = 1,
	E_INVEN_ITEM_SET_TYPE_REAL = 2,
	E_INVEN_ITEM_SET_TYPE_CONSUME = 3,
	E_INVEN_ITEM_SET_TYPE_MAX = 4,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EOnlineAccountCreateStatus : uint8_t {
	OACS_CreateSuccessful = 0,
	OACS_UnknownError = 1,
	OACS_InvalidUserName = 2,
	OACS_InvalidPassword = 3,
	OACS_InvalidUniqueUserName = 4,
	OACS_UniqueUserNameInUse = 5,
	OACS_ServiceUnavailable = 6,
	OACS_MAX = 7,
};

enum class E_CROSSHAIR_OPTION_ITEM_Index : uint8_t {
	COID_Shape = 0,
	COID_Color = 1,
	COID_Scale = 2,
	COID_Alpha = 3,
	COID_Shadow = 4,
	COID_Spread = 5,
	COID_CustomColor = 6,
	COID_MAX = 7,
};

enum class E_BUTTON_SELECT_TYPE : uint8_t {
	E_BUTTON_SELECT_TYPE_ASCEND = 0,
	E_BUTTON_SELECT_TYPE_DESCEND = 1,
	E_BUTTON_SELECT_TYPE_MAX = 2,
};

enum class E_HUDMode : uint8_t {
	EHUD_NORMAL = 0,
	EHUD_COMPETITIVE = 1,
	EHUD_MAX = 2,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class EAimID : uint8_t {
	EAID_LeftUp = 0,
	EAID_LeftDown = 1,
	EAID_RightUp = 2,
	EAID_RightDown = 3,
	EAID_ZeroUp = 4,
	EAID_ZeroDown = 5,
	EAID_ZeroLeft = 6,
	EAID_ZeroRight = 7,
	EAID_CellLU = 8,
	EAID_CellCU = 9,
	EAID_CellRU = 10,
	EAID_CellLC = 11,
	EAID_CellCC = 12,
	EAID_CellRC = 13,
	EAID_CellLD = 14,
	EAID_CellCD = 15,
	EAID_CellRD = 16,
	EAID_MAX = 17,
};

enum class ETrailTaperMethod : uint8_t {
	PETTM_None = 0,
	PETTM_Full = 1,
	PETTM_Partial = 2,
	PETTM_MAX = 3,
};

enum class MATCH_OPEN_CHANNEL_TYPE : uint8_t {
	MATCH_OPEN_CHANNEL_TYPE_NORMAL = 0,
	MATCH_OPEN_CHANNEL_TYPE_CLAN = 1,
	MATCH_OPEN_CHANNEL_TYPE_AI = 2,
	MATCH_OPEN_CHANNEL_TYPE_QUICK = 3,
	MATCH_OPEN_CHANNEL_TYPE_RANK = 4,
	MATCH_OPEN_CHANNEL_TYPE_TEST = 5,
	MATCH_OPEN_CHANNEL_TYPE_MAX = 6,
};

enum class MATCHROOM_OPEN_TYPE : uint8_t {
	MATCHROOM_OPEN_TYPE_PUBLIC = 0,
	MATCHROOM_OPEN_TYPE_PRIVATE = 1,
	MATCHROOM_OPEN_TYPE_MAX = 2,
};

enum class EPacketSizeMultiplier : uint8_t {
	EPSM_5 = 0,
	EPSM_9 = 1,
	EPSM_17 = 2,
	EPSM_33 = 3,
	EPSM_65 = 4,
	EPSM_129 = 5,
	EPSM_MAX = 6,
};

enum class ESceneType : uint8_t {
	SCENE_None = 0,
	SCENE_Main = 1,
	SCENE_Sub = 2,
	SCENE_MAX = 3,
};

enum class ResourceType : uint8_t {
	ResourceType_ImpactPointLight = 0,
	ResourceType_ImpactDecal = 1,
	ResourceType_ImpactEmitter = 2,
	ResourceType_RadialBlur = 3,
	ResourceType_WeaponTracer = 4,
	ResourceType_MAX = 5,
};

enum class ERouteFillAction : uint8_t {
	RFA_Overwrite = 0,
	RFA_Add = 1,
	RFA_Remove = 2,
	RFA_Clear = 3,
	RFA_MAX = 4,
};

enum class EObjectCacheTypes : uint8_t {
	OCTYPE_None = 0,
	OCTYPE_GameDependence = 1,
	OCTYPE_LevelDependence = 2,
	OCTYPE_MAX = 3,
};

enum class GFxScaleMode : uint8_t {
	SM_NoScale = 0,
	SM_ShowAll = 1,
	SM_ExactFit = 2,
	SM_NoBorder = 3,
	SM_MAX = 4,
};

enum class EZoomState : uint8_t {
	ZST_NotZoomed = 0,
	ZST_Zoomed = 1,
	ZST_Zoomed_Sec = 2,
	ZST_Zoomed_Lnchr = 3,
	ZST_ZoomingOut = 4,
	ZST_ZoomingIn = 5,
	ZST_ZoomingOut_Sec = 6,
	ZST_ZoomingIn_Sec = 7,
	ZST_ZoomingOut_Lnchr = 8,
	ZST_ZoomingIn_Lnchr = 9,
	ZST_MAX = 10,
};

enum class BTEvaluationResult : uint8_t {
	EVR_READY = 0,
	EVR_NOT_READY = 1,
	EVR_OVER = 2,
	EVR_MAX = 3,
};

enum class CHATTING_STATE : uint8_t {
	CHATTING_STATE_ACTIVE = 0,
	CHATTING_STATE_TRAFFIC_PENALTY = 1,
	CHATTING_STATE_BLOCK = 2,
	CHATTING_STATE_MAX = 3,
};

enum class E_GAMEPLAY_SUBTAB_Index : uint8_t {
	GSTI_CrossHair = 0,
	GSTI_GameEnv = 1,
	GSTI_MAX = 2,
};

enum class EReceiveMode : uint8_t {
	RMODE_Manual = 0,
	RMODE_Event = 1,
	RMODE_MAX = 2,
};

enum class EProfileRaceBrakeControlOptions : uint8_t {
	PRBCO_Trigger = 0,
	PRBCO_Button = 1,
	PRBCO_MAX = 2,
};

enum class E_SHOP_CATEGORY_TYPE : uint8_t {
	ESCT_NORMAL = 0,
	ESCT_SPECIAL = 1,
	ESCT_REFUND = 2,
	ESCT_MAX = 3,
};

enum class EBeamEndPointMethod : uint8_t {
	PEBEPM_Calculated = 0,
	PEBEPM_Distribution = 1,
	PEBEPM_Distribution_Constant = 2,
	PEBEPM_MAX = 3,
};

enum class ETuningCostumeSlot : uint8_t {
	ETuningCosutme_Bracelet = 0,
	ETuningCosutme_Shoulder_Right = 1,
	ETuningCosutme_Shoulder_Left = 2,
	ETuningCostume_Necklace = 3,
	ETuningCostume_Backpack = 4,
	ETuningCostume_MAX = 5,
	ETuningCostumeSlot_MAX = 6,
};

enum class EProfileSettingID : uint8_t {
	PSI_Unknown = 0,
	PSI_ControllerVibration = 1,
	PSI_YInversion = 2,
	PSI_GamerCred = 3,
	PSI_GamerRep = 4,
	PSI_VoiceMuted = 5,
	PSI_VoiceThruSpeakers = 6,
	PSI_VoiceVolume = 7,
	PSI_GamerPictureKey = 8,
	PSI_GamerMotto = 9,
	PSI_GamerTitlesPlayed = 10,
	PSI_GamerAchievementsEarned = 11,
	PSI_GameDifficulty = 12,
	PSI_ControllerSensitivity = 13,
	PSI_PreferredColor1 = 14,
	PSI_PreferredColor2 = 15,
	PSI_AutoAim = 16,
	PSI_AutoCenter = 17,
	PSI_MovementControl = 18,
	PSI_RaceTransmission = 19,
	PSI_RaceCameraLocation = 20,
	PSI_RaceBrakeControl = 21,
	PSI_RaceAcceleratorControl = 22,
	PSI_GameCredEarned = 23,
	PSI_GameAchievementsEarned = 24,
	PSI_EndLiveIds = 25,
	PSI_ProfileVersionNum = 26,
	PSI_ProfileSaveCount = 27,
	PSI_MAX = 28,
};

enum class WeaponFireSoundType : uint8_t {
	WeaponFireSoundType_Fire = 0,
	WeaponFireSoundType_AltFire = 1,
	WeaponFireSoundType_Silencer = 2,
	WeaponFireSoundType_GrenadeLauncher = 3,
	WeaponFireSoundType_MAX = 4,
};

enum class ECameraViewportTypes : uint8_t {
	CVT_16to9_Full = 0,
	CVT_16to9_VertSplit = 1,
	CVT_16to9_HorizSplit = 2,
	CVT_4to3_Full = 3,
	CVT_4to3_HorizSplit = 4,
	CVT_4to3_VertSplit = 5,
	CVT_MAX = 6,
};

enum class WeaponUIType : uint8_t {
	EWUIT_Empty = 0,
	EWUIT_NumberOfUse = 1,
	EWUIT_AmmoWithChamber = 2,
	EWUIT_AmmoWithoutChamber = 3,
	EWUIT_Grenade = 4,
	EWUIT_MAX = 5,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class ClanGradeChangeErrorType : uint8_t {
	ENNET_ClanGradeChange_State = 0,
	ENNET_ClanGradeChange_FindTarget = 1,
	ENNET_ClanGradeChange_Permission = 2,
	ENNET_ClanGradeChange_Exists = 3,
	ENNET_ClanGradeChange_MAX = 4,
};

enum class BTConditionOperator : uint8_t {
	LESS_THAN = 0,
	LESS_THAN_OR_EQUAL_TO = 1,
	EQUAL_TO = 2,
	NOT_EQUAL_TO = 3,
	GREATER_THAN = 4,
	GREATER_THAN_OR_EQUAL_TO = 5,
	BTConditionOperator_MAX = 6,
};

enum class ECollisionType : uint8_t {
	COLLIDE_CustomDefault = 0,
	COLLIDE_NoCollision = 1,
	COLLIDE_BlockAll = 2,
	COLLIDE_BlockWeapons = 3,
	COLLIDE_TouchAll = 4,
	COLLIDE_TouchWeapons = 5,
	COLLIDE_BlockAllButWeapons = 6,
	COLLIDE_TouchAllButWeapons = 7,
	COLLIDE_BlockWeaponsKickable = 8,
	COLLIDE_MAX = 9,
};

enum class EAttractorSkelVertSurfaceDestination : uint8_t {
	VERTSURFACEDEST_Vert = 0,
	VERTSURFACEDEST_Surface = 1,
	VERTSURFACEDEST_MAX = 2,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class HOST_PREEMPTION_STATE : uint8_t {
	HOST_PREEMPTION_STATE_DENINE = 0,
	HOST_PREEMPTION_STATE_ALLOW = 1,
	HOST_PREEMPTION_STATE_MAX = 2,
};

enum class CONSUME_TYPE : uint8_t {
	CONSUME_TYPE_NORMAL = 0,
	CONSUME_TYPE_SELECT = 1,
	CONSUME_TYPE_ALL = 2,
	CONSUME_TYPE_MAX = 3,
};

enum class EDoorType : uint8_t {
	DOOR_Shoot = 0,
	DOOR_Touch = 1,
	DOOR_MAX = 2,
};

enum class EMobileTextureBlendFactorSource : uint8_t {
	MTBFS_VertexColor = 0,
	MTBFS_MaskTexture = 1,
	MTBFS_MAX = 2,
};

enum class GripAFActionStatus : uint8_t {
	AF_AS_DONE = 0,
	AF_AS_FAILURE = 1,
	AF_AS_INPROGRESS = 2,
	AF_AS_QUEUED = 3,
	AF_AS_MAX = 4,
};

enum class ERepairType : uint8_t {
	CHANGE_INPUT = 0,
	PLAYER_DEAD = 1,
	GAME_OVER = 2,
	PLAYER_OVERRANGE = 3,
	ERepairType_MAX = 4,
};

enum class ERoundResultReason : uint8_t {
	ERRR_None = 0,
	ERRR_TimeLimit = 1,
	ERRR_GameScoreLimit = 2,
	ERRR_SuddenDeathKill = 3,
	ERRR_NoRespawnGameAllDeath = 4,
	ERRR_MissionEnd = 5,
	ERRR_WinByDecision = 6,
	ERRR_MAX = 7,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class E_SHOPITEM_LIMIT_BUY_TYPE : uint8_t {
	ESILBT_NONE = 0,
	ESILBT_ONLY_ONE = 1,
	ESILBT_DAY = 2,
	ESILBT_MAX = 3,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class ClothMovementScaleGen : uint8_t {
	ECMDM_DistToFixedVert = 0,
	ECMDM_VertexBoneWeight = 1,
	ECMDM_Empty = 2,
	ECMDM_MAX = 3,
};

enum class SALE_TYPE : uint8_t {
	SALE_NONE = 0,
	SALE_INSTANCE = 1,
	SALE_ALLTIME = 2,
	SALE_MAX = 3,
};

enum class ClanMasterDelegateErrorType : uint8_t {
	ENNET_ClanMasterDelegate_State = 0,
	ENNET_ClanMasterDelegate_FindTarget = 1,
	ENNET_ClanMasterDelegate_Permission = 2,
	ENNET_ClanMasterDelegate_MAX = 3,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class EProfileRaceAcceleratorControlOptions : uint8_t {
	PRACO_Trigger = 0,
	PRACO_Button = 1,
	PRACO_MAX = 2,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EProfileAutoAimOptions : uint8_t {
	PAAO_Off = 0,
	PAAO_On = 1,
	PAAO_MAX = 2,
};

enum class HostageVoiceType : uint8_t {
	EHVT_None = 0,
	EHVT_Captivity = 1,
	EHVT_StartMove = 2,
	EHVT_Hit = 3,
	EHVT_Groggy = 4,
	EHVT_ArriveEscapePoint = 5,
	EHVT_MAX = 6,
};

enum class SEARCH_ROOM_STATE : uint8_t {
	SEARCH_ROOM_STATE_NONE = 0,
	SEARCH_ROOM_STATE_WAITING = 1,
	SEARCH_ROOM_STATE_PLAYING = 2,
	SEARCH_ROOM_STATE_MAX = 3,
};

enum class FFB_ForceFieldCoordinates : uint8_t {
	FFB_CARTESIAN = 0,
	FFB_SPHERICAL = 1,
	FFB_CYLINDRICAL = 2,
	FFB_TOROIDAL = 3,
	FFB_MAX = 4,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class EParticleEventType : uint8_t {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_WorldAttractorCollision = 4,
	EPET_Kismet = 5,
	EPET_MAX = 6,
};

enum class EDroppedSuppliesType : uint8_t {
	EDST_AmmoKit = 0,
	EDST_MediKit = 1,
	EDST_MAX = 2,
};

enum class E_MAIN_LOBBY_SORT_BUTTON_TYPE : uint8_t {
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_NO = 0,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_TITLE = 1,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_MODE = 2,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_MAP = 3,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_PERSONS = 4,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_STATE = 5,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_PING = 6,
	E_MAIN_LOBBY_SORT_BUTTON_TYPE_MAX = 7,
};

enum class CLAN_MATCH_TYPE : uint8_t {
	CLAN_MATCH_TYPE_NONE = 0,
	CLAN_MATCH_TYPE_A = 1,
	CLAN_MATCH_TYPE_B = 2,
	CLAN_MATCH_TYPE_RANKING = 3,
	CLAN_MATCH_TYPE_MAX = 4,
};

enum class EPassWord : uint8_t {
	E_PASSWORD_TRUE = 0,
	E_PASSWORD_FALSE = 1,
	E_PASSWORD_MAX = 2,
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

enum class EInputMatchAction : uint8_t {
	IMA_GreaterThan = 0,
	IMA_LessThan = 1,
	IMA_MAX = 2,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class EDashboardIconType : uint8_t {
	EDI_NONE = 0,
	EDI_RED_ALERT = 1,
	EDI_YELLOW_ALERT = 2,
	EDI_NOTICE_COMPETITIVE = 3,
	EDI_MAX = 4,
};

enum class EFirstRecoilDir : uint8_t {
	E_Recolil_Random = 0,
	E_Recolil_Left_Dir = 1,
	E_Recolil_Right_Dir = 2,
	E_Recolil_MAX = 3,
};

enum class EDebugBreakType : uint8_t {
	DEBUGGER_NativeOnly = 0,
	DEBUGGER_ScriptOnly = 1,
	DEBUGGER_Both = 2,
	DEBUGGER_MAX = 3,
};

enum class TextureCompressionSettings : uint8_t {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_NormalmapXY = 2,
	TC_Displacementmap = 3,
	TC_NormalmapAlpha = 4,
	TC_Grayscale = 5,
	TC_HighDynamicRange = 6,
	TC_OneBitAlpha = 7,
	TC_NormalmapUncompressed = 8,
	TC_NormalmapBC5 = 9,
	TC_OneBitMonochrome = 10,
	TC_SimpleLightmapModification = 11,
	TC_VectorDisplacementmap = 12,
	TC_MAX = 13,
};

enum class CharacterInfoTab : uint8_t {
	ECharTab_Profile = 0,
	ECharTab_Battle = 1,
	ECharTab_Weapon = 2,
	ECharTab_Competitive = 3,
	ECharTab_MAX = 4,
};

enum class E_MAIN_LOBBY_MATCH_ROOM_STATE_TYPE : uint8_t {
	E_MAIN_LOBBY_MATCH_ROOM_STATE_TYPE_WAITING = 0,
	E_MAIN_LOBBY_MATCH_ROOM_STATE_TYPE_PLAYING = 1,
	E_MAIN_LOBBY_MATCH_ROOM_STATE_TYPE_MAX = 2,
};

enum class FlashTextureRescale : uint8_t {
	FlashTextureScale_High = 0,
	FlashTextureScale_Low = 1,
	FlashTextureScale_NextLow = 2,
	FlashTextureScale_Mult4 = 3,
	FlashTextureScale_None = 4,
	FlashTextureScale_MAX = 5,
};

enum class ERootMotionMode : uint8_t {
	RMM_Translate = 0,
	RMM_Velocity = 1,
	RMM_Ignore = 2,
	RMM_Accel = 3,
	RMM_Relative = 4,
	RMM_MAX = 5,
};

enum class ELinkState : uint8_t {
	STATE_Initialized = 0,
	STATE_Ready = 1,
	STATE_Listening = 2,
	STATE_Connecting = 3,
	STATE_Connected = 4,
	STATE_ListenClosePending = 5,
	STATE_ConnectClosePending = 6,
	STATE_ListenClosing = 7,
	STATE_ConnectClosing = 8,
	STATE_MAX = 9,
};

enum class E_SINGLE_GAME_TYPE : uint8_t {
	E_SINGLE_GAME_TYPE_NONE = 0,
	E_SINGLE_GAME_TYPE_LEAVE = 1,
	E_SINGLE_GAME_TYPE_FINISH = 2,
	E_SINGLE_GAME_TYPE_MAX = 3,
};

enum class EExplosionEffectType : uint8_t {
	ExplosionEffectType_Default = 0,
	ExplosionEffectType_AirStrike = 1,
	ExplosionEffectType_Cherry = 2,
	ExplosionEffectType_Howitzer = 3,
	ExplosionEffectType_Predator = 4,
	ExplosionEffectType_JuggernautBomb = 5,
	ExplosionEffectType_Claymore = 6,
	ExplosionEffectType_Steyr = 7,
	ExplosionEffectType_TrophyTurret = 8,
	ExplosionEffectType_Ice = 9,
	ExplosionEffectType_Pumpkin = 10,
	ExplosionEffectType_PumpkinGhost = 11,
	ExplosionEffectType_Xmas = 12,
	ExplosionEffectType_Snow = 13,
	ExplosionEffectType_IceBlue = 14,
	ExplosionEffectType_FlashBang = 15,
	ExplosionEffectType_Party = 16,
	ExplosionEffectType_Sprout = 17,
	ExplosionEffectType_YellowPetal = 18,
	ExplosionEffectType_GoldSnow = 19,
	ExplosionEffectType_TulipPetal = 20,
	ExplosionEffectType_Max = 21,
};

enum class EAutomatedRunResult : uint8_t {
	ARR_Unknown = 0,
	ARR_OOM = 1,
	ARR_Passed = 2,
	ARR_MAX = 3,
};

enum class ENetMode : uint8_t {
	NM_Standalone = 0,
	NM_DedicatedServer = 1,
	NM_ListenServer = 2,
	NM_Client = 3,
	NM_MAX = 4,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EMobileAlphaValueSource : uint8_t {
	MAVS_DiffuseTextureAlpha = 0,
	MAVS_MaskTextureRed = 1,
	MAVS_MaskTextureGreen = 2,
	MAVS_MaskTextureBlue = 3,
	MAVS_MAX = 4,
};

enum class EScreenMode : uint8_t {
	CBSM_FullScreen = 0,
	CBSM_Window = 1,
	CBSM_FullWindow = 2,
	CBSM_MAX = 3,
};

enum class EDOFType : uint8_t {
	DOFType_SimpleDOF = 0,
	DOFType_ReferenceDOF = 1,
	DOFType_BokehDOF = 2,
	DOFType_MAX = 3,
};

enum class CLIENT_PROFILE_TYPE : uint8_t {
	CLIENT_PROFILE_PROTOCOL = 0,
	CLIENT_PROFILE_PROCESSOR = 1,
	CLIENT_PROFILE_MAX = 2,
};

enum class GameErrorMessageType : uint8_t {
	EGEMT_ErrorPlayerStartCount = 0,
	EGEMT_ErrorHitStat_Attacker = 1,
	EGEMT_MAX = 2,
};

enum class EShopPopupSetType : uint8_t {
	E_TYPE_PRESET = 0,
	E_TYPE_NONE = 1,
	E_TYPE_PACKAGE = 2,
	E_TYPE_MAX = 3,
};

enum class DamageEffectStep : uint8_t {
	DamageEffectStep_None = 0,
	DamageEffectStep_Damage = 1,
	DamageEffectStep_Explosion = 2,
	DamageEffectStep_MAX = 3,
};

enum class EEnvCubeType : uint8_t {
	EEnvCubeType_None = 0,
	EEnvCubeType_AABB = 1,
	EEnvCubeType_OBB = 2,
	EEnvCubeType_MAX = 3,
};

enum class SoftBodyBoneType : uint8_t {
	SOFTBODYBONE_Fixed = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment = 2,
	SOFTBODYBONE_MAX = 3,
};

enum class EBombTickState : uint8_t {
	EBTS_Tic = 0,
	EBTS_Tac = 1,
	EBTS_MAX = 2,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EOnlineImageDownloadState : uint8_t {
	PIDS_NotStarted = 0,
	PIDS_Downloading = 1,
	PIDS_Succeeded = 2,
	PIDS_Failed = 3,
	PIDS_MAX = 4,
};

enum class EMoveDir : uint8_t {
	MD_Stationary = 0,
	MD_Forward = 1,
	MD_Backward = 2,
	MD_Left = 3,
	MD_Right = 4,
	MD_Up = 5,
	MD_Down = 6,
	MD_MAX = 7,
};

enum class EWeaponMouseSensPreset : uint8_t {
	E_WMS_PRESET_FIRST = 0,
	E_WMS_PRESET_SECOND = 1,
	E_WMS_PRESET_THIRD = 2,
	E_WMS_PRESET_FOURTH = 3,
	E_WMS_PRESET_MAX = 4,
};

enum class ClanSuggestErrorType : uint8_t {
	ENNET_ClanSuggest_NotSet = 0,
	ENNET_ClanSuggest_Invalid_REQ = 1,
	ENNET_ClanSuggest_Duplicate = 2,
	ENNET_ClanSuggest_Invalid_User = 3,
	ENNET_ClanSuggest_AlreadyInClan = 4,
	ENNET_ClanSuggest_AuthLevel = 5,
	ENNET_ClanSuggest_OnPenalty = 6,
	ENNET_ClanSuggest_MAX = 7,
};

enum class E_COMPETITIVE_POINT_STATE : uint8_t {
	E_COMPETITIVE_POINT_STATE_NORMAL = 0,
	E_COMPETITIVE_POINT_STATE_PENALTY_TIME = 1,
	E_COMPETITIVE_POINT_STATE_PENALTY_INTERVAL = 2,
	E_COMPETITIVE_POINT_STATE_MAX = 3,
};

enum class EFlagPointType : uint8_t {
	EFlagPointType_TakePoint = 0,
	EFlagPointType_SpawnPoint = 1,
	EFlagPointType_MAX = 2,
};

enum class EMakeRoomButton : uint8_t {
	E_MR_BTN_CANCEL = 0,
	E_MR_BTN_CHANGE = 1,
	E_MR_BTN_COMPLETE = 2,
	E_MR_BTN_TOTAL = 3,
	E_MR_BTN_LARGE = 4,
	E_MR_BTN_MEDIUM = 5,
	E_MR_BTN_SMALL = 6,
	E_MR_BTN_MAX = 7,
};

enum class EMenuType : uint8_t {
	E_MENU_TYPE_BACK = 0,
	E_MENU_TYPE_VOICE_CHAT = 1,
	E_MENU_TYPE_OPTION = 2,
	E_MENU_TYPE_BLOCKANDREPORT = 3,
	E_MENU_TYPE_VOTE = 4,
	E_MENU_TYPE_RETURNTOMATCHROOM = 5,
	E_MENU_TYPE_MAX = 6,
};

enum class ECurAITarget : uint8_t {
	CurAITarget_Enemy = 0,
	CurAITarget_CurrentAIBeacon = 1,
	CurAITarget_MAX = 2,
};

enum class EHeadTrackingAction : uint8_t {
	EHTA_DisableHeadTracking = 0,
	EHTA_EnableHeadTracking = 1,
	EHTA_MAX = 2,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class EHotKeyType : uint8_t {
	EHKT_PickItem = 0,
	EHKT_Operation = 1,
	EHKT_DisablePickItem = 2,
	EHKT_MAX = 3,
};

enum class BTNodeExpandSymbol : uint8_t {
	NS_NO_SIGN = 0,
	NS_PLUS = 1,
	NS_MINUS = 2,
	NS_MAX = 3,
};

enum class ITEM_BUY_RECV_TYPE : uint8_t {
	ITEM_BUY_RECV_TYPE_INVENTORY = 0,
	ITEM_BUY_RECV_TYPE_MAIL_BOX = 1,
	ITEM_BUY_RECV_TYPE_MAX = 2,
};

enum class MAIL_TYPE : uint8_t {
	MAIL_TYPE_CASH = 0,
	MAIL_TYPE_GIFT_CASH = 1,
	MAIL_TYPE_GM = 2,
	MAIL_TYPE_EVENT = 3,
	MAIL_TYPE_SYSTEM = 4,
	MAIL_TYPE_IN_GAME_REWARD = 5,
	MAIL_TYPE_IN_GAME_ITEM_BUY_BY_GAME_MONEY = 6,
	MAIL_TYPE_IN_GAME_ITEM_BUY_BY_MEDAL = 7,
	MAIL_TYPE_IN_GAME_ITEM_BUY_BY_CASH = 8,
	MAIL_TYPE_IN_GAME_ITEM_RANDOM_BOX = 9,
	MAIL_TYPE_WEB_CASH = 10,
	MAIL_TYPE_MAX = 11,
};

enum class EMcpGroupAcceptState : uint8_t {
	MGAS_Error = 0,
	MGAS_Pending = 1,
	MGAS_Accepted = 2,
	MGAS_MAX = 3,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class WEAPON_TYPES : uint8_t {
	WEAPON_NONE = 0,
	WEAPON_PISTOL = 1,
	WEAPON_SHOTGUN = 2,
	WEAPON_SMG = 3,
	WEAPON_RIFLE = 4,
	WEAPON_DMR = 5,
	WEAPON_LMG = 6,
	WEAPON_BASR = 7,
	WEAPON_GL = 8,
	WEAPON_FSW_RL = 9,
	WEAPON_FSW_GL = 10,
	WEAPON_FSW_LMG = 11,
	WEAPON_FSW_AMSR = 12,
	WEAPON_MELEE = 13,
	WEAPON_MELEE_SAW = 14,
	WEAPON_FLAG = 15,
	WEAPON_GAMEWEAPON = 16,
	WEAPON_MACHINE_PISTOL = 17,
	WEAPON_MAX = 18,
};

enum class EAuthStatus : uint8_t {
	AUS_NotStarted = 0,
	AUS_Pending = 1,
	AUS_Authenticated = 2,
	AUS_Failed = 3,
	AUS_MAX = 4,
};

enum class E_VALUE_TYPE : uint8_t {
	E_VALUE_TYPE_NONE = 0,
	E_VALUE_TYPE_INT = 1,
	E_VALUE_TYPE_FLAOT = 2,
	E_VALUE_TYPE_STRING = 3,
	E_VALUE_TYPE_MAX = 4,
};

enum class EFalshEffectSettingType : uint8_t {
	EFEST_Normal = 0,
	EFEST_Obstacle = 1,
	EFEST_MAX = 2,
};

enum class ITEM_SELL_OVERLAP_CONDITION_TYPE : uint8_t {
	ITEM_SELL_OVERLAP_CONDITION_TYPE_NONE = 0,
	ITEM_SELL_OVERLAP_CONDITION_TYPE_ALL = 1,
	ITEM_SELL_OVERLAP_CONDITION_TYPE_TWO_OR_MORE = 2,
	ITEM_SELL_OVERLAP_CONDITION_TYPE_MAX = 3,
};

enum class EMessengerUserStateType : uint8_t {
	MUSER_STATE_NONE = 0,
	MUSER_STATE_OFFLINE = 1,
	MUSER_STATE_ONLINE = 2,
	MUSER_STATE_PLAYING = 3,
	MUSER_STATE_AWAY = 4,
	MUSER_STATE_MATCHROOM_WATING = 5,
	MUSER_STATE_MAX = 6,
};

enum class EMobileEnvironmentBlendMode : uint8_t {
	MEBM_Add = 0,
	MEBM_Lerp = 1,
	MEBM_MAX = 2,
};

enum class COMPETITION_MODE_NOTIY_TYPE : uint8_t {
	COMPETITION_MODE_NOTIY_TYPE_ACTIVE = 0,
	COMPETITION_MODE_NOTIY_TYPE_DEACTIVE = 1,
	COMPETITION_MODE_NOTIY_TYPE_MAX = 2,
};

enum class MissionActorUIState : uint8_t {
	MissionActorUIState_Default = 0,
	MissionActorUIState_Damaged = 1,
	MissionActorUIState_Exploded = 2,
	MissionActorUIState_Activating = 3,
	MissionActorUIState_MAX = 4,
};

enum class E_RATINGICON : uint8_t {
	RATINGICON_All = 0,
	RATINGICON_12Years = 1,
	RATINGICON_15Years = 2,
	RATINGICON_18Years = 3,
	RATINGICON_Test = 4,
	RATINGICON_Violence = 5,
	RATINGICON_Slang = 6,
	RATINGICON_Sexuality = 7,
	RATINGICON_Horror = 8,
	RATINGICON_Gambling = 9,
	RATINGICON_Drug = 10,
	RATINGICON_Crime = 11,
	RATINGICON_MAX = 12,
};

enum class EGameStatGroups : uint8_t {
	GSG_EngineStats = 0,
	GSG_Game = 1,
	GSG_Team = 2,
	GSG_Player = 3,
	GSG_Weapon = 4,
	GSG_Damage = 5,
	GSG_Projectile = 6,
	GSG_Pawn = 7,
	GSG_GameSpecific = 8,
	GSG_Aggregate = 9,
	GSG_MAX = 10,
};

enum class ELoginStatus : uint8_t {
	LS_NotLoggedIn = 0,
	LS_UsingLocalProfile = 1,
	LS_LoggedIn = 2,
	LS_MAX = 3,
};

enum class EDOFQuality : uint8_t {
	DOFQuality_Low = 0,
	DOFQuality_Medium = 1,
	DOFQuality_High = 2,
	DOFQuality_MAX = 3,
};

enum class ParticleAttractorActionType : uint8_t {
	PAAT_None = 0,
	PAAT_Destroy = 1,
	PAAT_Freeze = 2,
	PAAT_Event = 3,
	PAAT_MAX = 4,
};

enum class LevelGridCellShape : uint8_t {
	LGCS_Box = 0,
	LGCS_Hex = 1,
	LGCS_MAX = 2,
};

enum class EDynamicLightEnvironmentBoundsMethod : uint8_t {
	DLEB_OwnerComponents = 0,
	DLEB_ManualOverride = 1,
	DLEB_ActiveComponents = 2,
	DLEB_MAX = 3,
};

enum class AlphaBlendType : uint8_t {
	ABT_Linear = 0,
	ABT_Cubic = 1,
	ABT_Sinusoidal = 2,
	ABT_EaseInOutExponent2 = 3,
	ABT_EaseInOutExponent3 = 4,
	ABT_EaseInOutExponent4 = 5,
	ABT_EaseInOutExponent5 = 6,
	ABT_EaseInOutExponentThreeFourths = 7,
	ABT_EaseInOutExponentHalf = 8,
	ABT_EaseInOutExponentQuater = 9,
	ABT_MAX = 10,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EParticleScreenAlignment : uint8_t {
	PSA_Square = 0,
	PSA_Rectangle = 1,
	PSA_Velocity = 2,
	PSA_TypeSpecific = 3,
	PSA_MAX = 4,
};

enum class RANDOM_BOX_PROCESS_TYPE : uint8_t {
	RANDOM_BOX_PROCESS_TYPE_NONE = 0,
	RANDOM_BOX_PROCESS_TYPE_DICE = 1,
	RANDOM_BOX_PROCESS_TYPE_SEED = 2,
	RANDOM_BOX_PROCESS_TYPE_MAX = 3,
};

enum class EBeamMethod : uint8_t {
	PEBM_Distance = 0,
	PEBM_EndPoints = 1,
	PEBM_EndPoints_Interpolated = 2,
	PEBM_UserSet_EndPoints = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX = 5,
};

enum class EUIActivationType : uint8_t {
	EUIActivation_Show = 0,
	EUIActivation_Disable = 1,
	EUIActivation_Hide = 2,
	EUIActivation_MAX = 3,
};

enum class ENetworkNotificationPosition : uint8_t {
	NNP_TopLeft = 0,
	NNP_TopCenter = 1,
	NNP_TopRight = 2,
	NNP_CenterLeft = 3,
	NNP_Center = 4,
	NNP_CenterRight = 5,
	NNP_BottomLeft = 6,
	NNP_BottomCenter = 7,
	NNP_BottomRight = 8,
	NNP_MAX = 9,
};

enum class EAIRewardRank : uint8_t {
	EAIRewardRank_D = 0,
	EAIRewardRank_C = 1,
	EAIRewardRank_B = 2,
	EAIRewardRank_A = 3,
	EAIRewardRank_S = 4,
	EAIRewardRank_SS = 5,
	EAIRewardRank_MAX = 6,
};

enum class EShopItemGetType : uint8_t {
	E_ShopItemGetType_None = 0,
	E_ShopItemGetType_BuyEquip = 1,
	E_ShopItemGetType_BuyUsed = 2,
	E_ShopItemGetType_MAX = 3,
};

enum class EDebugState : uint8_t {
	DEBUGSTATE_None = 0,
	DEBUGSTATE_IsolateDryAudio = 1,
	DEBUGSTATE_IsolateReverb = 2,
	DEBUGSTATE_TestLPF = 3,
	DEBUGSTATE_TestStereoBleed = 4,
	DEBUGSTATE_TestLFEBleed = 5,
	DEBUGSTATE_DisableLPF = 6,
	DEBUGSTATE_DisableRadio = 7,
	DEBUGSTATE_MAX = 8,
};

enum class EItemDetaiInfoTab : uint8_t {
	E_ITEMINFO_GUAGE = 0,
	E_ITEMINFO_ADDON = 1,
	E_ITEMINFO_DESC = 2,
	E_ITEMINFO_MAX = 3,
};

enum class EUIPlayerState : uint8_t {
	EUIPS_None = 0,
	EUIPS_Death = 1,
	EUIPS_Spectator = 2,
	EUIPS_Operating = 3,
	EUIPS_LockedPresetScene = 4,
	EUIPS_UnLockedPresetScene = 5,
	EUIPS_Num = 6,
	EUIPS_MAX = 7,
};

enum class ECCSCoverPose : uint8_t {
	CCSCoverPose_Idle = 0,
	CCSCoverPose_ShootRight = 1,
	CCSCoverPose_ShootLeft = 2,
	CCSCoverPose_ShootOver = 3,
	CCSCoverPose_SideStepRight = 4,
	CCSCoverPose_SideStepLeft = 5,
	CCSCoverPose_BackSideStepRight = 6,
	CCSCoverPose_BackSideStepLeft = 7,
	CCSCoverPose_MAX = 8,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_MAX = 3,
};

enum class E_COMMAND_TYPE : uint8_t {
	E_COMMAND_TYPE_CONSOLE = 0,
	E_COMMAND_TYPE_TEAM_SHUFFLE = 1,
	E_COMMAND_TYPE_TEAM_SWAP = 2,
	E_COMMAND_TYPE_DEMO_REC = 3,
	E_COMMAND_TYPE_SPECTATOR_MODE = 4,
	E_COMMAND_TYPE_ALL_NOTICE = 5,
	E_COMMAND_TYPE_CHANNEL_NOTICE = 6,
	E_COMMAND_TYPE_BAN_USER = 7,
	E_COMMAND_TYPE_BLOCK_CHAT = 8,
	E_COMMAND_TYPE_SCR_NOTICE = 9,
	E_COMMAND_TYPE_SCR_NOTICE_TIME_OUT = 10,
	E_COMMAND_TYPE_SCR_NOTICE_DEL = 11,
	E_COMMAND_TYPE_ROUND_MONITORING = 12,
	E_COMMAND_TYPE_SET_MAXTICKRATE = 13,
	E_COMMAND_TYPE_MAX = 14,
};

enum class EHUDTick : uint8_t {
	EHUDTICK_LEVEL1 = 0,
	EHUDTICK_LEVEL2 = 1,
	EHUDTICK_LEVEL3 = 2,
	EHUDTICK_MAX = 3,
};

enum class E_FILTER_ITEM_TYPE : uint8_t {
	E_FILTER_ITEM_TYPE_2 = 0,
	E_FILTER_ITEM_TYPE_3 = 1,
	E_FILTER_ITEM_TYPE_4 = 2,
	E_FILTER_ITEM_TYPE_MAX = 3,
};

enum class EClanHomeUserDivisionType : uint8_t {
	E_TYPE_CLAN_MEMBER_ME = 0,
	E_TYPE_CLAN_MEMBER_OTHER = 1,
	E_TYPE_CLAN_MEMBER_MAX = 2,
};

enum class CLAN_SHUTDOWN_TYPE : uint8_t {
	CLAN_SHUTDOWN_NONE = 0,
	CLAN_SHUTDOWN_CLOSING = 1,
	CLAN_SHUTDOWN_DESTROYED = 2,
	CLAN_SHUTDOWN_MAX = 3,
};

enum class EKillDeathOption : uint8_t {
	EKDOption_None = 0,
	EKDOption_Penetrate = 1,
	EKDOption_BuzzKill = 2,
	EKDOption_HeadShot = 3,
	EKDOption_ForeheadShot = 4,
	EKDOption_Skill = 5,
	EKDOption_AttachGrenadeLauncher = 6,
	EKDOption_MAX = 7,
};

enum class EMakeRoomScene : uint8_t {
	ESCENE_SETUP_MODE = 0,
	ESCENE_SETUP_MAP = 1,
	ESCENE_SETUP_MAX = 2,
};

enum class E_STORAGE_CHECK_BOX_STATE : uint8_t {
	E_STORAGE_CHECK_BOX_STATE_UNCHECK = 0,
	E_STORAGE_CHECK_BOX_STATE_CHECK = 1,
	E_STORAGE_CHECK_BOX_STATE_DISABLED = 2,
	E_STORAGE_CHECK_BOX_STATE_MAX = 3,
};

enum class EBloodTexOnWeaponStatus : uint8_t {
	E_Blood_Tex_None = 0,
	E_Blood_Tex_Start = 1,
	E_Blood_Tex_First = 2,
	E_Blood_Tex_Next = 3,
	E_Blood_Tex_Random = 4,
	E_Blood_Tex_Duration = 5,
	E_Blood_Tex_FadeOut = 6,
	E_Blood_Tex_Finish = 7,
	E_Blood_Tex_MAX = 8,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class EConformType : uint8_t {
	CFM_NavMesh = 0,
	CFM_BSP = 1,
	CFM_World = 2,
	CFM_None = 3,
	CFM_MAX = 4,
};

enum class ERecoilStart : uint8_t {
	ERS_Zero = 0,
	ERS_Random = 1,
	ERS_MAX = 2,
};

enum class EGearCondition : uint8_t {
	E_GEAR_CON_MONEY = 0,
	E_GEAR_CON_GAME_MODE = 1,
	E_GEAR_CON_MAX = 2,
};

enum class ClanJoinApplyErrorType : uint8_t {
	ENNET_ClanJoinApply_State = 0,
	ENNET_ClanJoinApply_Exists = 1,
	ENNET_ClanJoinApply_OverMaxCount = 2,
	ENNET_ClanJoinApply_Denied = 3,
	ENNET_ClanJoinApply_OnPenalty = 4,
	ENNET_ClanJoinApply_MAX = 5,
};

enum class ELightmapModificationFunction : uint8_t {
	MLMF_Modulate = 0,
	MLMF_ModulateAlpha = 1,
	MLMF_MAX = 2,
};

enum class EPhysXMeshRotationMethod : uint8_t {
	PMRM_Disabled = 0,
	PMRM_Spherical = 1,
	PMRM_Box = 2,
	PMRM_LongBox = 3,
	PMRM_FlatBox = 4,
	PMRM_Velocity = 5,
	PMRM_MAX = 6,
};

enum class ePenetrationType : uint8_t {
	ePenetrationType_None = 0,
	ePenetrationType_Object = 1,
	ePenetrationType_Person = 2,
	ePenetrationType_MAX = 3,
};

enum class EClanRankColor : uint8_t {
	ERC_None = 0,
	ERC_Advantageous = 1,
	ERC_Equal = 2,
	ERC_MAX = 3,
};

enum class ETeamIdentifyState : uint8_t {
	EVIS_Normal = 0,
	EVIS_OurTeam = 1,
	EVIS_EnemyTeam = 2,
	EVIS_MAX = 3,
};

enum class EZoneState : uint8_t {
	ZoneState_Inactive = 0,
	ZoneState_Activating = 1,
	ZoneState_Active = 2,
	ZoneState_Deactivating = 3,
	ZoneState_MAX = 4,
};

enum class EPhysics : uint8_t {
	PHYS_None = 0,
	PHYS_Walking = 1,
	PHYS_Falling = 2,
	PHYS_Swimming = 3,
	PHYS_Flying = 4,
	PHYS_Rotating = 5,
	PHYS_Projectile = 6,
	PHYS_Interpolating = 7,
	PHYS_Spider = 8,
	PHYS_Ladder = 9,
	PHYS_RigidBody = 10,
	PHYS_SoftBody = 11,
	PHYS_NavMeshWalking = 12,
	PHYS_Unused = 13,
	PHYS_Custom = 14,
	PHYS_MAX = 15,
};

enum class eShopWeaponIndex : uint8_t {
	SHOPWEAPON_PRIMARY_WEAPON = 0,
	SHOPWEAPON_SUB_WEAPON = 1,
	SHOPWEAPON_MELEE_WEAPON = 2,
	SHOPWEAPON_THROW_WEAPON = 3,
	SHOPWEAPON_CHARACTER = 4,
	SHOPWEAPON_MAX = 5,
};

enum class RANDOM_BOX_OBTAIN_TYPE : uint8_t {
	RANDOM_BOX_OBTAIN_TYPE_NORMAL = 0,
	RANDOM_BOX_OBTAIN_TYPE_JACKPOT_NORAML = 1,
	RANDOM_BOX_OBTAIN_TYPE_JACKPOT_GUARANTEE = 2,
	RANDOM_BOX_OBTAIN_TYPE_JACKPOT_BONUS = 3,
	RANDOM_BOX_OBTAIN_TYPE_MAX = 4,
};

enum class E_OPTION_MODE_Index : uint8_t {
	OM_FrontEnd = 0,
	OM_InGame = 1,
	OM_MAX = 2,
};

