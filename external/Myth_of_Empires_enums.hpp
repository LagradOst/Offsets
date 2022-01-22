#pragma once

enum class EBuffFormType : uint8_t {
	None = 0,
	Food = 1,
	Medicine = 2,
	Wine = 3,
	FoodBox = 4,
	StomachWound = 5,
	StriaeWound = 6,
	SkinWound = 7,
	EBuffFormType_MAX = 8,
};

enum class EInventoryQuickInstructions : uint8_t {
	ExchangeAll = 0,
	Drop = 1,
	CraftAll = 2,
	Use = 3,
	ToShortCut = 4,
	MAX = 5,
};

enum class EBattleGroupType : uint8_t {
	None = 0,
	Attack = 1,
	Defense = 2,
	NoTeam = 3,
	EBattleGroupType_MAX = 4,
};

enum class EBattleResultType : uint8_t {
	Playing = 0,
	Equal = 1,
	Failed = 2,
	Successed = 3,
	EBattleResultType_MAX = 4,
};

enum class EMsgType : uint8_t {
	Left = 0,
	Up = 1,
	Right = 2,
	Chat = 3,
	EMsgType_MAX = 4,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class EGameplayEffectScopedModifierAggregatorType : uint8_t {
	CapturedAttributeBacked = 0,
	Transient = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EItemQualityType : uint8_t {
	CraftQuality = 0,
	ForgePerk = 1,
	MAX = 2,
};

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
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

enum class ESetJunIdResponse : uint8_t {
	SETJUNID_RESPONSE_SUCCESS = 0,
	SETJUNID_RESPONSE_ASYNCWAITING = 1,
	SETJUNID_RESPONSE_NO_AUTHORITY = 2,
	SETJUNID_RESPONSE_FAILED = 3,
	SETJUNID_RESPONSE_MAX = 4,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class EFunctionSlot : uint8_t {
	Inventory = 0,
	Status = 1,
	Perk = 2,
	CraftPerk = 3,
	Guild = 4,
	Achievement = 5,
	NPCInfo = 6,
	MsgRecord = 7,
	Quest = 8,
	Merits = 9,
	MAX = 10,
};

enum class ENewsType : uint8_t {
	Base = 0,
	HorseHungry = 1,
	GeneralHungry = 2,
	StructureLowDurability = 3,
	HorseDead = 4,
	GeneralDead = 5,
	StructureSmash = 6,
	HasBattleEntry = 7,
	CanUpgradeJueWei = 8,
	NewGuildApply = 9,
	TerritoryFlagInvalidation = 10,
	AuctionShop = 11,
	GetXianLingJob = 12,
	GetRankReward_Activity = 13,
	OccupyProtectSetting = 14,
	GetXianLingHuKouAward = 15,
	GiveCapital = 16,
	Max = 17,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class EUIGeneralSkillType : uint8_t {
	Skill = 0,
	Angry = 1,
	Weak = 2,
	MAX = 3,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

enum class EVehicleType : uint8_t {
	Empty = 0,
	HorseMC = 1,
	Turret = 2,
	Elephant = 3,
	Rhinoceros = 4,
	MAX = 5,
};

enum class EQuestLoopType : uint8_t {
	None = 0,
	Daily = 1,
	Weekly = 2,
	Max = 3,
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

enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
};

enum class ESGSoundTimeState : uint8_t {
	Day = 0,
	Night = 1,
	Max = 2,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
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

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
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

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6,
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

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class EDatasmithCADRetessellationRule : uint8_t {
	All = 0,
	SkipDeletedSurfaces = 1,
	EDatasmithCADRetessellationRule_MAX = 2,
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

enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
};

enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class EWeatherActorClassType : uint8_t {
	EWACT_DirectionalLight = 0,
	EWACT_MoonLight = 1,
	EWACT_LightningLight = 2,
	EWACT_SkyLight = 3,
	EWACT_NatureController = 4,
	EWACT_NatureWeather = 5,
	EWACT_WindSource = 6,
	EWACT_VolumetricCloud = 7,
	EWACT_SkyAtmosphere = 8,
	EWACT_GlobalPostProcess = 9,
	EWACT_ExponentialHeightFog = 10,
	EWACT_Moon = 11,
	EWACT_Star = 12,
	EWACT_HighLevelCloud = 13,
	EWACT_WeatherVolumetricFog = 14,
	EWACT_WeatherSnow = 15,
	EWACT_SpecificActorsNum = 16,
	Max = 17,
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

enum class ENotifyTextColor : uint8_t {
	Green = 0,
	White = 1,
	Blue = 2,
	Red = 3,
	Yellow = 4,
	Cyan = 5,
	Max = 6,
};

enum class DBLogGuildAPChangeReason : uint8_t {
	FillUpgradeExp = 0,
	UpgradeSkill = 1,
	ActiveSkill = 2,
	LearnCraftPerk = 3,
	AddActivityPoint = 4,
	DeductActivityPoint = 5,
	DBLogGuildAPChangeReason_MAX = 6,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class EMsgRecord_DeadType : uint8_t {
	None = 0,
	GM = 1,
	GM_WithoutDrop = 2,
	Demolish = 3,
	Suicide = 4,
	Hunger = 5,
	InWater = 6,
	WillDeadBlood = 7,
	Fall = 8,
	Killed = 9,
	Smash = 10,
	VersionCheck = 11,
	Flee = 12,
	LeaveGuild = 13,
	Decay = 14,
	RemovePlatform = 15,
	DeleteRole = 16,
	TriggerBoxReturn = 17,
	FloorDead = 18,
	RelationDead = 19,
	LeaveGuildGuild = 20,
	LeaveGuildPersonal = 21,
	BannerFinish = 22,
	UseBed = 23,
	FrameDead = 24,
	TiroDead = 25,
	GuildStoreDead = 26,
	LongTimeSleep = 27,
	FireKilled = 28,
	BleedKilled = 29,
	WaterKilled = 30,
	EnvironmentColdKilled = 31,
	EnvironmentHotKilled = 32,
	EnvironmentPoisonKilled = 33,
	LobbyCrossServer = 34,
	Execution = 35,
	PlayerSetChunkDead = 36,
	PlayerDeleteChunk = 37,
	PerkStructureDead = 38,
	EMsgRecord_MAX = 39,
};

enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
};

enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
};

enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

enum class EUIInventoryRemoteType : uint8_t {
	None = 0,
	OnlyEquip = 1,
	NormalEquip = 2,
	TamingEquip = 3,
	StructureOccupy = 4,
	FunctionPanel = 5,
	AnimalVehicleInventory = 6,
	GuildStoreDetail = 7,
	StableInventory = 8,
	AnimalFarmInventory = 9,
	MAX = 10,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class EGeneralsShortCutType : uint8_t {
	TwoHandWeaponAndOneHandWepaon = 0,
	OneHandWeaponAndTwoHandWeapon = 1,
	OffHandWeapon = 2,
	Max = 3,
};

enum class EToolContextCoordinateSystem : uint8_t {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8_t {
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4,
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

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
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

enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

enum class EGuildSetMemberKPILogResponse : uint8_t {
	SETMEMBERKPILOG_RESPONSE_SUCCESS = 0,
	SETMEMBERKPILOG_RESPONSE_ASYNCWAITING = 1,
	SETMEMBERKPILOG_RESPONSE_NO_AUTHORITY = 2,
	SETMEMBERKPILOG_RESPONSE_EXCEED_LENGTH = 3,
	SETMEMBERKPILOG_RESPONSE_ILLEGAL = 4,
	SETMEMBERKPILOG_RESPONSE_NOTFOUND = 5,
	SETMEMBERKPILOG_RESPONSE_FAILED = 6,
	SETMEMBERKPILOG_RESPONSE_MAX = 7,
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

enum class EAutoChangeOwnerResponse : uint8_t {
	AUTOCHANGEOWNER_RESPONSE_SUCCESS = 0,
	AUTOCHANGEOWNER_RESPONSE_ASYNCWAITING = 1,
	AUTOCHANGEOWNER_RESPONSE_NOTMEMBER = 2,
	AUTOCHANGEOWNER_RESPONSE_SELF = 3,
	AUTOCHANGEOWNER_RESPONSE_NOTEXCEED_OFFLINE = 4,
	AUTOCHANGEOWNER_RESPONSE_FAILED = 5,
	AUTOCHANGEOWNER_RESPONSE_MAX = 6,
};

enum class EChangeGuildOwnerResponse : uint8_t {
	CHANGEGUILDOWNER_RESPONSE_SUCCESS = 0,
	CHANGEGUILDOWNER_RESPONSE_NO_AUTHORITY = 1,
	CHANGEGUILDOWNER_RESPONSE_NOTFOUND = 2,
	CHANGEGUILDOWNER_RESPONSE_ASYNCWAITING = 3,
	CHANGEGUILDOWNER_RESPONSE_FAILED = 4,
	CHANGEGUILDOWNER_RESPONSE_MAX = 5,
};

enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
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

enum class EAuctionShopGoodsType : uint8_t {
	None = 0,
	SellItem = 1,
	SellGeneral = 2,
	SellHorse = 3,
	OrderItem = 4,
	EAuctionShopGoodsType_MAX = 5,
};

enum class EBakeMapType : uint8_t {
	TangentSpaceNormalMap = 0,
	AmbientOcclusion = 1,
	Curvature = 2,
	Texture2DImage = 3,
	NormalImage = 4,
	FaceNormalImage = 5,
	PositionImage = 6,
	EBakeMapType_MAX = 7,
};

enum class EDLSSSettingOverride : uint8_t {
	Enabled = 0,
	Disabled = 1,
	UseProjectSettings = 2,
	EDLSSSettingOverride_MAX = 3,
};

enum class EPerkSlotState : uint8_t {
	LOCK = 0,
	UNLOCK = 1,
	LEARNED = 2,
	EPerkSlotState_MAX = 3,
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

enum class EAudioComponentPlayState : uint8_t {
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6,
};

enum class EMiniMapMarkFilterType : uint8_t {
	PersonalMark = 0,
	GuildMark = 1,
	TreasureMap = 2,
	EMiniMapMarkFilterType_MAX = 3,
};

enum class EMsgRecordNotifyType : uint8_t {
	MSGRECORD_GETPLAYER = 0,
	MSGRECORD_APPENDPALYER = 1,
	MSGRECORD_CLEARPLAYER = 2,
	MSGRECORD_GETGUILD = 3,
	MSGRECORD_APPENDGUILD = 4,
	MSGRECORD_CLEARGUILD = 5,
	MSGRECORD_MAX = 6,
};

enum class EEditMeshPolygonsToolActions : uint8_t {
	NoAction = 0,
	PlaneCut = 1,
	Extrude = 2,
	Offset = 3,
	Inset = 4,
	Outset = 5,
	Merge = 6,
	Delete = 7,
	CutFaces = 8,
	RecalculateNormals = 9,
	FlipNormals = 10,
	Retriangulate = 11,
	Decompose = 12,
	Disconnect = 13,
	CollapseEdge = 14,
	WeldEdges = 15,
	StraightenEdge = 16,
	FillHole = 17,
	PlanarProjectionUV = 18,
	PokeSingleFace = 19,
	SplitSingleEdge = 20,
	FlipSingleEdge = 21,
	CollapseSingleEdge = 22,
	EEditMeshPolygonsToolActions_MAX = 23,
};

enum class EItemOptionType : uint8_t {
	ITEM_ADD = 0,
	ITEM_DELETE = 1,
	ITEM_DROP = 2,
	MAX = 3,
};

enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
};

enum class ERemoveCapitalWayType : uint8_t {
	RemoveCapitalWayType_GM = 0,
	RemoveCapitalWayType_Init = 1,
	RemoveCapitalWayType_Shop = 2,
	RemoveCapitalWayType_CrossServer = 3,
	RemoveCapitalWayType_TransportBattleItem = 4,
	RemoveCapitalWayType_TransportBattleGeneral = 5,
	RemoveCapitalWayType_TransportBattleHorse = 6,
	RemoveCapitalWayType_TransportCrossServerItem = 7,
	RemoveCapitalWayType_TransportCrossServerGeneral = 8,
	RemoveCapitalWayType_TransportCrossServerHorse = 9,
	RemoveCapitalWayType_DonationToGuild = 10,
	RemoveCapitalWayType_Trainer = 11,
	RemoveCapitalWayType_UnLockSkill = 12,
	RemoveCapitalWayType_UnLockPerk = 13,
	RemoveCapitalWayType_OccupyStructure = 14,
	RemoveCapitalWayType_UnLockCraftPerk = 15,
	RemoveCapitalWayType_AuctionShop = 16,
	RemoveCapitalWayType_TrafficGoodsBuy = 17,
	RemoveCapitalWayType_ReduceSkillMastery = 18,
	RemoveCapitalWayType_UpgradeJueWei = 19,
	RemoveCapitalWayType_OccupyModifyConflict = 20,
	RemoveCapitalWayType_AddToWallet = 21,
	RemoveCapitalWayType_UpgradeGuildTech = 22,
	RemoveCapitalWayType_UpgradeGuildSkill = 23,
	RemoveCapitalWayType_DeleteRoleClear = 24,
	RemoveCapitalWayType_OccupyRansom = 25,
	RemoveCapitalWayType_GuildShop = 26,
	RemoveCapitalWayType_GeneralWages = 27,
	RemoveCapitalWayType_Worship = 28,
	RemoveCapitalWayType_UnlockPlayerShow = 29,
	RemoveCapitalWayType_XianChengJinXian = 30,
	RemoveCapitalWayType_UnlockAppearanceKit = 31,
	RemoveCapitalWayType_UnlockFashionKit = 32,
	RemoveCapitalWayType_MAX = 33,
};

enum class ESetOccupySellItemResponse : uint8_t {
	SETSELLITEM_RESPONSE_SUCCESS = 0,
	SETSELLITEM_RESPONSE_FAILED = 1,
	SETSELLITEM_RESPONSE_MAX = 2,
};

enum class EMakeMeshPolygroupMode : uint8_t {
	Single = 0,
	PerFace = 1,
	PerQuad = 2,
	EMakeMeshPolygroupMode_MAX = 3,
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

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class DBLogPlayerPointChangeReason : uint8_t {
	Invalid = 0,
	LevelUp = 1,
	GM = 2,
	ActivityReset = 3,
	SkillLevelUp = 4,
	LearnPerk = 5,
	StructureGivePerk = 6,
	QuestReward = 7,
	PickDropItem = 8,
	AchievementReward = 9,
	BattleReward = 10,
	CollectResource = 11,
	DBLogPlayerPointChangeReason_MAX = 12,
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

enum class ENiagaraBindingSource : uint8_t {
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6,
};

enum class EGeneralsStunStatusType : uint8_t {
	Stun = 0,
	CarryUp = 1,
	CarryOn = 2,
	BindToRack = 3,
	Max = 4,
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

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class EEdgeLoopInsertionMode : uint8_t {
	Retriangulate = 0,
	PlaneCut = 1,
	EEdgeLoopInsertionMode_MAX = 2,
};

enum class EChaosClothTetherMode : uint8_t {
	FastTetherFastLength = 0,
	AccurateTetherFastLength = 1,
	AccurateTetherAccurateLength = 2,
	MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode_MAX = 4,
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

enum class EEventGuildType : uint8_t {
	EVENT_GUILD_TYPE_ANIMAL = 0,
	EVENT_GUILD_TYPE_REFUGEE = 1,
	EVENT_GUILD_TYPE_THIEF = 2,
	EVENT_GUILD_TYPE_HAN = 3,
	EVENT_GUILD_TYPE_YELLOW = 4,
	EVENT_GUILD_TYPE_ROBBER = 5,
	EVENT_GUILD_TYPE_HUNTER = 6,
	EVENT_GUILD_TYPE_MAX = 7,
};

enum class EBuffDamageType : uint8_t {
	Fire = 0,
	Bleed = 1,
	Water = 2,
	EnvironmentCold = 3,
	EnvironmentHot = 4,
	EnvironmentPoison = 5,
	MAX = 6,
};

enum class ENotifyItemType : uint8_t {
	NOTIFY_NONE = 0,
	NOTIFY_ITEM_UPDATENETINFO = 1,
	NOTIFY_ITEM_ADD = 2,
	NOTIFY_ITEM_REMOVE = 3,
	NOTIFY_ITEM_EXCHANGE = 4,
	NOTIFY_ITEM_SETAMOUNT = 5,
	NOTIFY_ITEM_SETDURABLE = 6,
	NOTIFY_ITEM_SETMAXDURABLE = 7,
	NOTIFY_ITEM_REFRESHUSEAMMO = 8,
	NOTIFY_ITEM_REFRESHPOISON = 9,
	NOTIFY_ITEM_REFRESHLEFTPOISON = 10,
	NOTIFY_ITEM_ADDTOFOODBOX = 11,
	NOTIFY_ITEM_REFRESHSTRENGTH = 12,
	NOTIFY_ITEM_SETLOCKTIME = 13,
	NOTIFY_EQUIP_ADD = 14,
	NOTIFY_EQUIP_REMOVE = 15,
	NOTIFY_EQUIP_SETAMOUNT = 16,
	NOTIFY_EQUIP_SETDURABLE = 17,
	NOTIFY_EQUIP_SETMAXDURABLE = 18,
	NOTIFY_SLOT_ADD = 19,
	NOTIFY_SLOT_REMOVE = 20,
	NOTIFY_SLOT_EXCHANGE = 21,
	NOTIFY_SLOT_SETAMOUNT = 22,
	NOTIFY_SLOT_SETDURABLE = 23,
	NOTIFY_SLOT_SETMAXDURABLE = 24,
	NOTIFY_SLOT_REFRESHUSEAMMO = 25,
	NOTIFY_SLOT_REFRESHPOISON = 26,
	NOTIFY_SLOT_REFRESHLEFTPOISON = 27,
	NOTIFY_PERK_ADD = 28,
	NOTIFY_PERK_REMOVE = 29,
	NOTIFY_PERK_FINISHADD = 30,
	NOTIFY_PERK_FINISHRESET = 31,
	NOTIFY_PERK_SETPRIORITY = 32,
	NOTIFY_FUNCTION_ADD = 33,
	NOTIFY_FUNCTION_REMOVE = 34,
	NOTIFY_FUNCTION_SETDURABLE = 35,
	NOTIFY_FACELIFT_ADD = 36,
	NOTIFY_FACELIFT_REMOVE = 37,
	NOTIFY_FUEL_ADD = 38,
	NOTIFY_FUEL_REMOVE = 39,
	NOTIFY_FUEL_SETAMOUNT = 40,
	NOTIFY_FOOD_ADD = 41,
	NOTIFY_FOOD_REMOVE = 42,
	NOTIFY_FOOD_SETAMOUNT = 43,
	NOTIFY_FOOD_EXCHANGE = 44,
	NOTIFY_BATTLESTORE_ADD = 45,
	NOTIFY_BATTLESTORE_REMOVE = 46,
	NOTIFY_BATTLESTORE_SETAMOUNT = 47,
	NOTIFY_BATTLESTORE_EXCHANGE = 48,
	NOTIFY_BATTLESTORE_UPDATETIME = 49,
	NOTIFY_CROSSSERVERSTORE_ADD = 50,
	NOTIFY_CROSSSERVERSTORE_REMOVE = 51,
	NOTIFY_CROSSSERVERSTORE_SETAMOUNT = 52,
	NOTIFY_CROSSSERVERSTORE_EXCHANGE = 53,
	NOTIFY_CROSSSERVERSTORE_UPDATETIME = 54,
	NOTIFY_CRAFTQUEUE_MODIFT = 55,
	NOTIFY_FUNCTIONQUEUE_MODIFT = 56,
	NOTIFY_INVENTORY_REFRESHMAXAMOUNT = 57,
	NOTIFY_INVENTORY_ADDMAXAMOUNT = 58,
	NOTIFY_INVENTORY_REMOVEMAXAMOUNT = 59,
	NOTIFY_INVENTORY_CLEARALL = 60,
	NOTIFY_YUEDANPING_ADD = 61,
	NOTIFY_YUEDANPING_REMOVE = 62,
	NOTIFY_ADD_BATTLE_STORE_MAXAMOUNT = 63,
	NOTIFY_ITEM_CONSUME = 64,
	NOTIFY_AUTOCRAFTQUEUE_MODIFT = 65,
	NOTIFY_ITEM_FlagString = 66,
	NOTIFY_ITEM_SetSavedToPlayer = 67,
	NOTIFY_INVENTORY_CONSUMEITEMCD = 68,
};

enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2,
};

enum class EPSCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5,
};

enum class ERepAnimPositionMethod : uint8_t {
	Position = 0,
	CurrentSectionId = 1,
	ERepAnimPositionMethod_MAX = 2,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
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

enum class EHitReaction : uint8_t {
	HR_Ignore = 0,
	HR_Discharge = 1,
	HR_FadeOut = 2,
	HR_MAX = 3,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
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

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
};

enum class EValueConditionType : uint8_t {
	GreaterThan = 0,
	GreaterThanAndEquals = 1,
	Equals = 2,
	LessThanAndEquals = 3,
	LessThan = 4,
	EValueConditionType_MAX = 5,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EOcclusionTriangleSamplingUIMode : uint8_t {
	Vertices = 0,
	VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2,
};

enum class EAimDirection : uint8_t {
	U = 0,
	LU = 1,
	RU = 2,
	D = 3,
	LD = 4,
	RD = 5,
	C = 6,
	L = 7,
	R = 8,
	EAimDirection_MAX = 9,
};

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
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

enum class ESubmixSendStage : uint8_t {
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2,
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

enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class ECurveTableMode : uint8_t {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3,
};

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EInertializationBoneState : uint8_t {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
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

enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class EToolMessageLevel : uint8_t {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4,
};

enum class EMakeMeshPivotLocation : uint8_t {
	Base = 0,
	Centered = 1,
	Top = 2,
	EMakeMeshPivotLocation_MAX = 3,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
};

enum class ELocalFrameMode : uint8_t {
	FromObject = 0,
	FromGeometry = 1,
	ELocalFrameMode_MAX = 2,
};

enum class EMaterialBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EMaterialBoundaryConstraint_MAX = 4,
};

enum class EMagicLeapLightEstimationCamera : uint8_t {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};

enum class EDoPregnancyType : uint8_t {
	None = 0,
	WaitingLastToggleStanceType = 1,
	WaitingToggleStanceType = 2,
	Pregnancy = 3,
	Max = 4,
};

enum class EMeshMorpherBakeBranches : uint8_t {
	OnStart = 0,
	OnComplete = 1,
	EMeshMorpherBakeBranches_MAX = 2,
};

enum class EInputDirection : uint8_t {
	North = 0,
	East = 1,
	West = 2,
	South = 3,
	Max = 4,
};

enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class ERaSpatializationMethod : uint8_t {
	STEREO_PANNING = 0,
	HRTF = 1,
	ERaSpatializationMethod_MAX = 2,
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

enum class ELocationAccuracy : uint8_t {
	LA_ThreeKilometers = 0,
	LA_OneKilometer = 1,
	LA_HundredMeters = 2,
	LA_TenMeters = 3,
	LA_Best = 4,
	LA_Navigation = 5,
	LA_MAX = 6,
};

enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class ECustomSwimState : uint8_t {
	None = 0,
	SwimDown = 1,
	SwimUp = 2,
	MovingSwimDown = 3,
	MovingSwimUp = 4,
	ECustomSwimState_MAX = 5,
};

enum class EEditPivotSnapDragRotationMode : uint8_t {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	EEditPivotSnapDragRotationMode_MAX = 4,
};

enum class ENormalCalculationMethod : uint8_t {
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3,
};

enum class EInputCaptureRequestType : uint8_t {
	Begin = 0,
	Ignore = 1,
	EInputCaptureRequestType_MAX = 2,
};

enum class EBakeScaleMethod : uint8_t {
	BakeFullScale = 0,
	BakeNonuniformScale = 1,
	DoNotBakeScale = 2,
	EBakeScaleMethod_MAX = 3,
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

enum class ESetMeshMaterialMode : uint8_t {
	KeepOriginal = 0,
	Checkerboard = 1,
	Override = 2,
	ESetMeshMaterialMode_MAX = 3,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class ERenownSkillExpAddType : uint8_t {
	Achievement = 0,
	JoinXianChengBattle = 1,
	WinXianChengBattle = 2,
	LoseXianChengBattle = 3,
	PutYueDanPingItem = 4,
	BannerStructure = 5,
	RenownHangUp = 6,
	JoinTaiShouBattle = 7,
	WinTaiShouBattle = 8,
	LoseTaiShouBattle = 9,
	JoinGuanAiBattle = 10,
	WinGuanAiBattle = 11,
	LoseGuanAiBattle = 12,
	Max = 13,
};

enum class EGroupTopologyDeformationStrategy : uint8_t {
	Linear = 0,
	Laplacian = 1,
	EGroupTopologyDeformationStrategy_MAX = 2,
};

enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
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

enum class EPrimaryAssetCookRule : uint8_t {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5,
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

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EXianChengAttackSucessType : uint8_t {
	XianChengAttackSucessType_Unknown = 0,
	XianChengAttackSucessType_FlagOccupy = 1,
	XianChengAttackSucessType_BasementDestroyed = 2,
	XianChengAttackSucessType_MAX = 3,
};

enum class ENoviceBuffState : uint8_t {
	State_None = 0,
	State_Accepted = 1,
	State_Over = 2,
	State_GivenUp = 3,
	State_MAX = 4,
};

enum class EGroupBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EGroupBoundaryConstraint_MAX = 4,
};

enum class EGuildContainerItemType : uint8_t {
	Silver = 0,
	Item = 1,
	Horse = 2,
	GeneralNpc = 3,
	EGuildContainerItemType_MAX = 4,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

enum class EVectorVMBaseTypes : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4,
};

enum class ETattooParts : uint8_t {
	BODYPARTS_BODY = 0,
	BODYPARTS_LEFTARM = 1,
	BODYPARTS_RIGHTARM = 2,
	BODYPARTS_LEFTLEG = 3,
	BODYPARTS_RIGHTLEG = 4,
	BODYPARTS_MAX = 5,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class EParticleAllocationMode : uint8_t {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2,
};

enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3,
};

enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5,
};

enum class EGainParamMode : uint8_t {
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2,
};

enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
};

enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
};

enum class EVectorVMOperandLocation : uint8_t {
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3,
};

enum class EWoundType : uint8_t {
	WoundType1 = 0,
	WoundType2 = 1,
	WoundType3 = 2,
	WoundType4 = 3,
	EWoundType_MAX = 4,
};

enum class EMonoChannelUpmixMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3,
};

enum class EMagicLeapControllerHapticIntensity : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EMagicLeapControllerHapticIntensity_MAX = 3,
};

enum class EGuildSetZhanLiResponse : uint8_t {
	SETZHANLI_RESPONSE_SUCCESS = 0,
	SETZHANLI_RESPONSE_ASYNCWAITING = 1,
	SETZHANLI_RESPONSE_NO_AUTHORITY = 2,
	SETZHANLI_RESPONSE_NOT_FOUND = 3,
	SETZHANLI_RESPONSE_VALUE_NOTCHANGE = 4,
	SETZHANLI_RESPONSE_FAILED = 5,
	SETZHANLI_RESPONSE_MAX = 6,
};

enum class EBasePropertyQueryReason : uint8_t {
	InvalidReason = 0,
	OwnerQuery = 1,
	ViewGeneralQuery = 2,
	EBasePropertyQueryReason_MAX = 3,
};

enum class EDoMateType : uint8_t {
	None = 0,
	MoveTo = 1,
	WaitStopMove = 2,
	TurnTo = 3,
	Waiting = 4,
	WaitingMate = 5,
	WaitingToggleStanceType = 6,
	Mating = 7,
	Max = 8,
};

enum class EAttributeCorrectionType : uint8_t {
	Speed = 0,
	HP = 1,
	Weight = 2,
	SP = 3,
	Operate = 4,
	Max = 5,
};

enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

enum class EWheelSweepType : uint8_t {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3,
};

enum class ELoudnessNRTCurveTypeEnum : uint8_t {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	None = 4,
	ELoudnessNRTCurveTypeEnum_MAX = 5,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
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
	GameCustom6 = 11,
	MAX = 12,
};

enum class EUIControlEffectTarget : uint8_t {
	Bloom = 0,
	DepthOfField = 1,
	ChromaticAberration = 2,
	MotionBlur = 3,
	EUIControlEffectTarget_MAX = 4,
};

enum class EOscillatorWaveform : uint8_t {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class EModifyPropNameEnum : uint8_t {
	PropNone = 0,
	MaxHPAdd = 1,
	MaxHPMulAdd = 2,
	HPRecoverAdd = 3,
	HPRecoverMulAdd = 4,
	MaxSPAdd = 5,
	MaxSPMulAdd = 6,
	SPRecoverAdd = 7,
	SPRecoverMulAdd = 8,
	MaxHungerAdd = 9,
	MaxHungerMulAdd = 10,
	HungerRecoverAdd = 11,
	HungerConsumeMulAdd = 12,
	FoodAddHungerMulAdd = 13,
	MaxHealthAdd = 14,
	MaxHealthMulAdd = 15,
	HealthRecoverAdd = 16,
	HealthRecoverMulAdd = 17,
	MaxWeightMulAdd = 18,
	ExpMulAdd = 19,
	ExtraGravityZMulAdd = 20,
	ExtraJumpZVelocityMulAdd = 21,
	OverrideWalkableFloorAngle = 22,
	ExtraOverWeightRatioAdd = 23,
	ExtraSiegeDamageMulAdd = 24,
	ExtraProjectileDamageMulAdd = 25,
	BowHoldTimeAdd = 26,
	BowAimTimeMulAdd = 27,
	BowReloadTimeMulAdd = 28,
	BowMovingAngleMulAdd = 29,
	BowRotationScatteringAngleMulAdd = 30,
	RiderBowMovingAngleMulAdd = 31,
	BowAngleMulAdd = 32,
	BowArrowSpeedAdd = 33,
	CrossBowHoldTimeAdd = 34,
	CrossBowAimTimeMulAdd = 35,
	CrossBowReloadTimeMulAdd = 36,
	CrossBowMovingAngleMulAdd = 37,
	RiderCrossBowMovingAngleMulAdd = 38,
	CrossBowAngleMulAdd = 39,
	CrossBowArrowSpeedAdd = 40,
	ThrowingReloadTimeMulAdd = 41,
	ThrowingAngleMulAdd = 42,
	ThrowingArrowSpeedAdd = 43,
	OnehandCostSPMulAdd = 44,
	TowhandCostSPMulAdd = 45,
	PolearmsCostSPMulAdd = 46,
	ThrowingCostSPMulAdd = 47,
	ArcheryCostSPMulAdd = 48,
	CrossbowsCostSPMulAdd = 49,
	OnehandMaxComboAdd = 50,
	TowhandMaxComboAdd = 51,
	PolearmsMaxComboAdd = 52,
	OneHandAxeToShieldMulAdd = 53,
	TowHandAxeToShieldMulAdd = 54,
	PolearmsAxeToShieldMulAdd = 55,
	ThrowingAxeToShieldMulAdd = 56,
	BowAxeToShieldMulAdd = 57,
	CrossBowAxeToShieldMulAdd = 58,
	OneHandHammerToArmorMulAdd = 59,
	TowHandHammerToArmorMulAdd = 60,
	PolearmHammerToArmorMulAdd = 61,
	ThrowingHammerToArmorMulAdd = 62,
	BowHammerToArmorMulAdd = 63,
	CrossBowHammerToArmorMulAdd = 64,
	OneHandSwordToHPMulAdd = 65,
	TowHandSwordToHPMulAdd = 66,
	PolearmSwordToHPMulAdd = 67,
	ThrowingSwordToHPMulAdd = 68,
	BowSwordToHPMulAdd = 69,
	CrossBowSwordToHPMulAdd = 70,
	SiegeTurretToStructureMulAdd = 71,
	SiegeBallistaToStructureMulAdd = 72,
	SiegeFireThrowerToStructureMulAdd = 73,
	SiegeRamToStructureMulAdd = 74,
	ReductionRateSlashingAdd = 75,
	ReductionRatePiercingAdd = 76,
	ReductionRateCrushingAdd = 77,
	ReductionRateSiegeAdd = 78,
	ChargeResAdd = 79,
	BuffSpeedMulAdd = 80,
	LightArmorSpeedMulAdd = 81,
	HeavyArmorSpeedMulAdd = 82,
	LightArmorDurableResMulAdd = 83,
	HeavyArmorDurableResMulAdd = 84,
	ReductionRateFallAdd = 85,
	MaxWeightAdd = 86,
	MineResLv1MulAdd = 87,
	MineResLv2MulAdd = 88,
	MineResLv3MulAdd = 89,
	MineResLv4MulAdd = 90,
	LumberResLv1MulAdd = 91,
	LumberResLv2MulAdd = 92,
	LumberResLv3MulAdd = 93,
	LumberResLv4MulAdd = 94,
	HuntResLv1MulAdd = 95,
	HuntResLv2MulAdd = 96,
	HuntResLv3MulAdd = 97,
	HuntResLv4MulAdd = 98,
	PlantResLv1MulAdd = 99,
	PlantResLv2MulAdd = 100,
	PlantResLv3MulAdd = 101,
	PlantResLv4MulAdd = 102,
	PlantSeedLv1MulAdd = 103,
	PlantSeedLv2MulAdd = 104,
	PlantSeedLv3MulAdd = 105,
	PlantSeedLv4MulAdd = 106,
	CultivatedLandMulAdd = 107,
	FertilizerMulAdd = 108,
	WateringMulAdd = 109,
	PlantResLv1Luck = 110,
	PlantResLv1LuckProduceMulAdd = 111,
	PlantResLv2Luck = 112,
	PlantResLv2LuckProduceMulAdd = 113,
	PlantResLv3Luck = 114,
	PlantResLv3LuckProduceMulAdd = 115,
	PlantResLv4Luck = 116,
	PlantResLv4LuckProduceMulAdd = 117,
	PlantSeedLv1Luck = 118,
	PlantSeedLv1LuckProduceMulAdd = 119,
	PlantSeedLv2Luck = 120,
	PlantSeedLv2LuckProduceMulAdd = 121,
	PlantSeedLv3Luck = 122,
	PlantSeedLv3LuckProduceMulAdd = 123,
	PlantSeedLv4Luck = 124,
	PlantSeedLv4LuckProduceMulAdd = 125,
	HerbResLv1MulAdd = 126,
	HerbResLv2MulAdd = 127,
	HerbResLv3MulAdd = 128,
	HerbResLv4MulAdd = 129,
	HandMakingTimeMulAdd = 130,
	SiegeWorkMaxHPMulAdd = 131,
	ArmorForgeAdd = 132,
	SiegeWorkReloadTimeMulAdd = 133,
	SiegeWorkDrawTimeMulAdd = 134,
	BallistaBulletSpeedMulAdd = 135,
	BallistaEnable = 136,
	BallistaLineDisMulAdd = 137,
	SiegeProjectileFollowEnable = 138,
	FlamethrowerAmmoMulAdd = 139,
	SiegeWorkSpeedMulAdd = 140,
	SiegeWorkRotateSpeedMulAdd = 141,
	ClimbLadderSpeedMulAdd = 142,
	AnimalDamageReduceMulAdd = 143,
	AnimalWarnRangeMulAdd = 144,
	BuildingResMulAdd = 145,
	BuildingHPRecoverMulAdd = 146,
	BuildingFixTimeMulAdd = 147,
	PolearmsOnHorseDamageMulAdd = 148,
	RidingAccelerationMulAdd = 149,
	ExtraAccelerationAdd = 150,
	RidingRotationMulAdd = 151,
	ExtraRotationMultiplyAdd = 152,
	RidingRotationMulInterpSpeedAdd = 153,
	RidingCostSPMulAdd = 154,
	BuffDamageMulAdd = 155,
	ShieldsMoveSpeedBonusAdd = 156,
	RiderSprintAttackCoolingTimeAdd = 157,
	RiderSprintAttackLoopingTimeAdd = 158,
	TowHandWeaponBreakDefenseRatioAdd = 159,
	TamingExpMulAdd = 160,
	TamingHealRecMulAdd = 161,
	TamingHungerRecMulAdd = 162,
	TamedAnimalExpMulAdd = 163,
	MaxGeneralsAdd = 164,
	MaxGeneralsHPMulAdd = 165,
	MaxGeneralsSpeedMulAdd = 166,
	MaxGeneralsSPMulAdd = 167,
	GeneralsStunMulAdd = 168,
	MinRecruitAddLevel = 169,
	MaxRecruitAddLevel = 170,
	RecruitAddLife = 171,
	CropWater = 172,
	NFertilizerBuff = 173,
	PFertilizerBuff = 174,
	KFertilizerBuff = 175,
	ApplyFertilizerCount = 176,
	ForgeWeaponAbility = 177,
	ForgeArmorAbility = 178,
	ReduceEquipmentWeightMultiAdd = 179,
	CanRepaireStructureEquipment = 180,
	BackShieldBlockedDamageMultiAdd = 181,
	PushShieldBlockedArrowScaleMultiAdd = 182,
	UseSiegeDamageMulAdd = 183,
	ExtraSkillPointsAdd = 184,
	ExtraPerkPointsAdd = 185,
	DeathReduceLifeMulAdd = 186,
	Wound1ResistMulAdd = 187,
	Wound2ResistMulAdd = 188,
	Wound3ResistMulAdd = 189,
	Wound4ResistMulAdd = 190,
	Wound1AddOtherMulAdd = 191,
	Wound2AddOtherMulAdd = 192,
	Wound3AddOtherMulAdd = 193,
	Wound4AddOtherMulAdd = 194,
	OneHandedWeaponsAdd = 195,
	ShieldsAdd = 196,
	TowHandedWeaponsAdd = 197,
	PolearmsAdd = 198,
	HeavyArmorsAdd = 199,
	ThrowingAdd = 200,
	ArcheryAdd = 201,
	CrossbowsAdd = 202,
	RidingAdd = 203,
	LightArmorsAdd = 204,
	PhysiqueAdd = 205,
	MiningAdd = 206,
	LumberingAdd = 207,
	HuntingAdd = 208,
	PlantingAdd = 209,
	HandMakingAdd = 210,
	SiegeWorkingAdd = 211,
	BuildingAdd = 212,
	ArmorerAdd = 213,
	HerbAdd = 214,
	TamingAdd = 215,
	LeaderShipAdd = 216,
	RecruitAdd = 217,
	TrainingAdd = 218,
	RenownAdd = 219,
	BuffFireDamageMulAdd = 220,
	BuffBleedDamageMulAdd = 221,
	BuffFireResMulAdd = 222,
	BuffBleedResMulAdd = 223,
	ThrowingRangeMulAdd = 224,
	BowRangeMulAdd = 225,
	CorssBowRangeMulAdd = 226,
	CorssBowPiercenessAdd = 227,
	TumbleOnGroundResMulAdd = 228,
	TumbleOnVehicleResMulAdd = 229,
	OneHandHammerToWeaponMulAdd = 230,
	TowHandHammerToWeaponMulAdd = 231,
	PolearmHammerToWeaponMulAdd = 232,
	ThrowingHammerToWeaponMulAdd = 233,
	BowHammerToWeaponMulAdd = 234,
	CrossBowHammerToWeaponMulAdd = 235,
	CorssBowPiercenessRatio = 236,
	SlashingArmorMulAdd = 237,
	PiercingArmorMulAdd = 238,
	CrushingArmorMulAdd = 239,
	SiegeArmorMulAdd = 240,
	LightArmorMulAdd = 241,
	HeavyArmorMulAdd = 242,
	ShieldBlockArrowAddItemRate = 243,
	CanEatFood = 244,
	AISenseSightRadiusMulAdd = 245,
	AISenseHearRadiusMulAdd = 246,
	DeathAddSkillPointRate = 247,
	DeathAddSkillPoint = 248,
	DeathReduceKillerLifeCountRate = 249,
	DeathReduceKillerLifeCount = 250,
	OneHandHeadShootDmgMulAdd = 251,
	TowHandHeadShootDmgMulAdd = 252,
	PolearmHeadShootDmgMulAdd = 253,
	BowHeadShootDmgMulAdd = 254,
	EModifyPropNameEnum_MAX = 255,
};

enum class EMovingStopType : uint8_t {
	NoneStop = 0,
	Stop = 1,
	EMovingStopType_MAX = 2,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class EARCaptureType : uint8_t {
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	EARCaptureType_MAX = 4,
};

enum class EBrushBlendType : uint8_t {
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3,
};

enum class EAIRiderAttackType : uint8_t {
	AutoAttack = 0,
	OnlySprintDash = 1,
	NearAttack = 2,
	EAIRiderAttackType_MAX = 3,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class EVertexOffsetUsageType : uint8_t {
	None = 0,
	PreSkinningOffset = 1,
	PostSkinningOffset = 2,
	EVertexOffsetUsageType_MAX = 3,
};

enum class EPlayConsumeMontageType : uint8_t {
	Static = 0,
	Movable = 1,
	EPlayConsumeMontageType_MAX = 2,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

enum class EUpdateDevicePassWordResult : uint8_t {
	EUpdateDevicePassWordResult_Success = 0,
	EUpdateDevicePassWordResult_PasswordError = 1,
	EUpdateDevicePassWordResult_PasswordLenError = 2,
	EUpdateDevicePassWordResult_TryOverCount = 3,
	EUpdateDevicePassWordResult_SystemError = 4,
	EUpdateDevicePassWordResult_MAX = 5,
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

enum class ECharacterStatusState : uint8_t {
	HP = 0,
	SP = 1,
	HUNGER = 2,
	WEIGHT = 3,
	WILLDEAD = 4,
	BREATHE = 5,
	Max = 6,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class ESkinCacheDefaultBehavior : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class ESetMemberSceneResponse : uint8_t {
	SETMEMBERSCENE_RESPONSE_SUCCESS = 0,
	SETMEMBERSCENE_RESPONSE_FAILED = 1,
	SETMEMBERSCENE_RESPONSE_MAX = 2,
};

enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4,
};

enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
};

enum class EBaseCharacterDestroyTypes : uint8_t {
	EBaseCharacterDestroyTypes_None = 0,
	EBaseCharacterDestroyTypes_Dead = 1,
	EBaseCharacterDestroyTypes_CrossServer = 2,
	EBaseCharacterDestroyTypes_CheckVersion = 3,
	EBaseCharacterDestroyTypes_CreatePawn = 4,
	EBaseCharacterDestroyTypes_LogicInactive = 5,
	EBaseCharacterDestroyTypes_CheckVersionDead = 6,
	EBaseCharacterDestroyTypes_FellOut = 7,
	EBaseCharacterDestroyTypes_OutsideWorldBounds = 8,
	EBaseCharacterDestroyTypes_MAX = 9,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
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

enum class EMagicLeapControllerTrackingMode : uint8_t {
	InputService = 0,
	CoordinateFrameUID = 1,
	EMagicLeapControllerTrackingMode_MAX = 2,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4,
};

enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

enum class EAchievementNotifyType : uint8_t {
	NOTIFY_UPDATE = 0,
	NOTIFY_ADD = 1,
	NOTIFY_KNOW = 2,
	NOTIFY_MAX = 3,
};

enum class ENaturalResType : uint8_t {
	ENRT_Coper = 0,
	ENRT_Iron = 1,
	ENRT_WetMound = 2,
	ENRT_Coal = 3,
	ENRT_WaterFish = 4,
	ENRT_Salt = 5,
	ENRT_Road = 6,
	ENRT_Max = 7,
};

enum class ECostSPType : uint8_t {
	Attack = 0,
	MeshRebound = 1,
	BlockRebound = 2,
	StartBlock = 3,
	Jump = 4,
	Sprint = 5,
	BlockAttack = 6,
	MAX = 7,
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

enum class EGenericParamsType : uint8_t {
	ParamsType_NIL = 0,
	ParamsType_INT = 1,
	ParamsType_FLOAT = 2,
	ParamsType_BOOL = 3,
	ParamsType_STRING = 4,
	ParamsType_OBJECT = 5,
	ParamsType_MAX = 6,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class ELuminFrameTimingHint : uint8_t {
	Unspecified = 0,
	Maximum = 1,
	FPS_61 = 2,
	FPS_121 = 3,
	ELuminFrameTimingHint_MAX = 4,
};

enum class EMirrorCtrlClickBehavior : uint8_t {
	Reposition = 0,
	RepositionAndReorient = 1,
	EMirrorCtrlClickBehavior_MAX = 2,
};

enum class EGroomInterpolationQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4,
};

enum class ENiagaraRibbonUVEdgeMode : uint8_t {
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2,
};

enum class EHuangLiCheckType : uint8_t {
	OneDay = 0,
	Total = 1,
	EHuangLiCheckType_MAX = 2,
};

enum class EAttackSocketType : uint8_t {
	Weapon = 0,
	Hand_L = 1,
	Hand_R = 2,
	Lowerarm_L = 3,
	Lowerarm_R = 4,
	Foot_L = 5,
	Foot_R = 6,
	EAttackSocketType_MAX = 7,
};

enum class ENDISkeletalMesh_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3,
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

enum class EARAltitudeSource : uint8_t {
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4,
};

enum class EWaveShape : uint8_t {
	Sphere = 0,
	Box = 1,
	EWaveShape_MAX = 2,
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

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class EStandardToolContextMaterials : uint8_t {
	VertexColorMaterial = 0,
	EStandardToolContextMaterials_MAX = 1,
};

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class EStereoDelayFiltertype : uint8_t {
	Lowpass = 0,
	Highpass = 1,
	Bandpass = 2,
	Notch = 3,
	Count = 4,
	EStereoDelayFiltertype_MAX = 5,
};

enum class ENiagaraPreviewGridResetMode : uint8_t {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ERandomVelocityGenerationTypeEnum : uint8_t {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3,
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

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EPropertyAccessObjectType : uint8_t {
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class ESGStatisticsEventType : uint8_t {
	LevelUp = 0,
	Survive = 1,
	Collect = 2,
	Attack = 3,
	Tame = 4,
	AddSkill = 5,
	LearnPerk = 6,
	CreateStructure = 7,
	UnlockHuangLi = 8,
	Dead = 9,
	TakeDamage = 10,
	Block = 11,
	FinishCrafting = 12,
	OwnerGuild = 13,
	StopRiding = 14,
	KnockedDown = 15,
	StructureMapProduce = 16,
	WillDead = 17,
	CheckRidingDistance = 18,
	JoinBattle = 19,
	GiveUpNoviceBuff = 20,
	Max = 21,
};

enum class EQuestNotifyIndexType : uint8_t {
	MaxDailyQuestLimit = 0,
	WeeklyQuestFinishedAlready = 1,
	Max = 2,
};

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
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

enum class EKeyMappingButtonType : uint8_t {
	Keyboard = 0,
	Gamepad = 1,
	Max = 2,
};

enum class EModifyPropNameEnum1 : uint8_t {
	PropNone1 = 0,
	CorssBowHeadShootDmgMulAdd = 1,
	ThrowingHeadShootDmgMulAdd = 2,
	SiegeHeadShootDmgMulAdd = 3,
	bGeneralCanAutoPick = 4,
	JueWeiAchievementShieldDurableMulAdd = 5,
	SGCanBeDamaged = 6,
	bEnableFastMount = 7,
	bEnableFastDismount = 8,
	bEnableFastControlVehicle = 9,
	GeneralExploitDamageMulAdd = 10,
	PlayerCharAddExpMulAdd = 11,
	PlayerCharAddSkillExpMulAdd = 12,
	GenCharAddExpMulAdd = 13,
	GenCharAddSkillExpMulAdd = 14,
	HorseAddExpMulAdd = 15,
	bEnableHorseFastStop = 16,
	bEnableHorseFastTurn = 17,
	WeaponEffect = 18,
	ViewGeneral = 19,
	AnimalRecruitAddLife = 20,
	AnimalRebornTimeMultiAdd = 21,
	RideTameMaxRunawayAdd = 22,
	RideTameFeedTimeAdd = 23,
	MaxHorseTameNumAdd = 24,
	HorseExpMulAdd = 25,
	HorsePregnancyChanceAdd = 26,
	HorseHarmfulVariationChance = 27,
	CurrentRecruitMaxLevel = 28,
	MaxWarGeneralNumberAdd = 29,
	LoyaltyAddMultiAdd = 30,
	GeneralRebornTimeMultiAdd = 31,
	GeneralHungerReduceMultiAdd = 32,
	GeneralSTSkillMultiAdd = 33,
	GeneralAGSkillMultiAdd = 34,
	GeneralWISkillMultiAdd = 35,
	GeneralENSkillMultiAdd = 36,
	GeneralCHSkillMultiAdd = 37,
	AchievementHonorMulAdd = 38,
	BattleHonorMulAdd = 39,
	YueDanPingPointMulAdd = 40,
	BannerWeiWangMulAdd = 41,
	HonorDamageMulAdd = 42,
	SkilledMiner = 43,
	PracticeMiner = 44,
	BeInFullSwingMiner = 45,
	ExplorationCopper = 46,
	ExplorationIron = 47,
	ExplorationXuanhuaIron = 48,
	ExplorationMeteorite = 49,
	ExplorationClay = 50,
	ExplorationSalt = 51,
	ExplorationKaolinite = 52,
	ExplorationCoal = 53,
	ExplorationNitramite = 54,
	ExplorationSulfur = 55,
	ExplorationRealgar = 56,
	ExplorationJade = 57,
	AddBarkProduction = 58,
	SkilledLumber = 59,
	PracticeLumber = 60,
	BeInFullSwingLumber = 61,
	SharpEyesLevel2Tree = 62,
	SharpEyesLevel3Tree = 63,
	SharpEyesLevel4Tree = 64,
	BoneProduction = 65,
	SkilledHunter = 66,
	SensitiveSmell = 67,
	PracticeHunter = 68,
	WalkOnTiptoe = 69,
	SkillfulSwimmer = 70,
	ResistanceHotAdd = 71,
	ResistanceColdAdd = 72,
	ResistancePoisonAdd = 73,
	HPRecoverMaxHpMul = 74,
	FoodBuffModifyDataMulAdd = 75,
	WineBuffModifyDataMulAdd = 76,
	MedicineBuffModifyDataMulAdd = 77,
	AnimalCostSPMulAdd = 78,
	ExtraRotationMulInterpSpeedAdd = 79,
	HealthConsumeMulAdd = 80,
	MateCDReduceMulAdd = 81,
	WoundMaxHPMulAdd = 82,
	WoundMaxSPMulAdd = 83,
	WoundMaxWeightMulAdd = 84,
	ResistanceHotAddMultiAdd = 85,
	ResistanceColdAddMultiAdd = 86,
	ResistancePoisonAddMultiAdd = 87,
	ResistanceHotMultiAdd = 88,
	ResistanceColdMultiAdd = 89,
	ResistancePoisonMultiAdd = 90,
	FreeReduceSkillMasteryPointsAdd = 91,
	MasteryPointsAdd = 92,
	bCanClimbWall = 93,
	bCanLightArmorClimbWall = 94,
	bCanHeavyArmorClimbWall = 95,
	ClimbWallHeight = 96,
	LightArmorClimbWallHeight = 97,
	HeavyArmorClimbWallHeight = 98,
	MaxPersonalStructureAdd = 99,
	bEnableMovingMount = 100,
	OneHandedWeaponsAttackBlockDurableMultiAdd = 101,
	ShieldsAttackBlockDurableMultiAdd = 102,
	TowHandedWeaponsAttackBlockDurableMultiAdd = 103,
	PolearmsAttackBlockDurableMultiAdd = 104,
	ArcheryAttackDurableMultiAdd = 105,
	CrossbowsAttackDurableMultiAdd = 106,
	SiegeAttackDurableMultiAdd = 107,
	GeneralGetItemAddLoyaltyMultiAdd = 108,
	GeneralSkillAddOneHandedWeaponsMultiAdd = 109,
	GeneralSkillAddShieldsMultiAdd = 110,
	GeneralSkillAddTowHandedWeaponsMultiAdd = 111,
	GeneralSkillAddPolearmsMultiAdd = 112,
	GeneralSkillAddHeavyArmorsMultiAdd = 113,
	GeneralSkillAddThrowingMultiAdd = 114,
	GeneralSkillAddArcheryMultiAdd = 115,
	GeneralSkillAddCrossbowsMultiAdd = 116,
	GeneralSkillAddRidingMultiAdd = 117,
	GeneralSkillAddLightArmorsMultiAdd = 118,
	GeneralSkillAddPhysiqueMultiAdd = 119,
	GeneralSkillAddMiningMultiAdd = 120,
	GeneralSkillAddLumberingMultiAdd = 121,
	GeneralSkillAddHuntingMultiAdd = 122,
	GeneralSkillAddPlantingMultiAdd = 123,
	GeneralSkillAddHandMakingMultiAdd = 124,
	GeneralSkillAddSiegeWorkingMultiAdd = 125,
	GeneralSkillAddBuildingMultiAdd = 126,
	GeneralSkillAddArmorerMultiAdd = 127,
	GeneralSkillAddHerbMultiAdd = 128,
	GeneralSkillAddTamingMultiAdd = 129,
	GeneralSkillAddLeaderShipMultiAdd = 130,
	GeneralSkillAddRecruitMultiAdd = 131,
	GeneralSkillAddTrainingMultiAdd = 132,
	GeneralSkillAddRenownMultiAdd = 133,
	EmptyKickCharge = 134,
	ShieldCharge = 135,
	EModifyPropNameEnum1_MAX = 136,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class ESGSoundLevelVolumeState : uint8_t {
	Stop = 0,
	Playing = 1,
	FadeIn = 2,
	FadeOut = 3,
	ESGSoundLevelVolumeState_MAX = 4,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
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

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
};

enum class ECustomBoneAttributeLookup : uint8_t {
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3,
};

enum class EDBLogDeathType : uint8_t {
	AlmostDead = 0,
	Relive = 1,
	Dead = 2,
	LifeCountChange = 3,
	EDBLogDeathType_MAX = 4,
};

enum class EQuestObjectType : uint8_t {
	None = 0,
	Collect = 1,
	Craft = 2,
	Kill = 3,
	Use = 4,
	UseConsumeItem = 5,
	UnlockPerk = 6,
	UnlockCraftPerk = 7,
	Search = 8,
	Build = 9,
	TameAnimal = 10,
	TameNPC = 11,
	LevelUp = 12,
	ConsumeAmmo = 13,
	AddEquip = 14,
	BlockDirection = 15,
	AttackDirection = 16,
	GetItem = 17,
	BehaviourCondition = 18,
	KillEliteCharacter = 19,
	KillHumanCharacter = 20,
	AddShortCutItem = 21,
	TameRide = 22,
	ChangeSaddle = 23,
	Stun = 24,
	GeneralWork = 25,
	RackGeneral = 26,
	CreateCrop = 27,
	SkillLevel = 28,
	JoinGuild = 29,
	Ride = 30,
	ControlStructure = 31,
	OccupySell = 32,
	UnLockNextSkill = 33,
	UseAmmo = 34,
	GetSkillExpOnStructure = 35,
	CraftOverDurableItem = 36,
	GetExpOnStructure = 37,
	RepairItem = 38,
	ExploreMapQuestionMark = 39,
	MarkMap = 40,
	PickDeadDropItem = 41,
	GetLingWuPoint = 42,
	RaiseItemAnimal = 43,
	PutAnimalInCage = 44,
	RaiseAnimalAtFarm = 45,
	RideAnimalWithPlatformStructure = 46,
	OpenBaoZangBox = 47,
	EnterFuBen = 48,
	TameNpcWithSpecialType = 49,
	AWLevelUp = 50,
	RecoverrEVEffectByItem = 51,
	StrengthenItem = 52,
	JoinBattle = 53,
	UploadItemToTransportMachine = 54,
	UploadItemToGameMarket = 55,
	GetTaxGold = 56,
	CatchFishByFork = 57,
	CatchFishByRod = 58,
	BuyTrafficGoods = 59,
	SellTrafficGoods = 60,
	JueWeiLevelUp = 61,
	CatchBatterfly = 62,
	DailyQuestNums = 63,
	PutFuelInStructure = 64,
	ActiveStructure = 65,
	Max = 66,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class EOcclusionCalculationUIMode : uint8_t {
	GeneralizedWindingNumber = 0,
	RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode_MAX = 2,
};

enum class EAnimalAgeType : uint8_t {
	Baby = 0,
	Juvenile = 1,
	Young = 2,
	Adulthood = 3,
	Max = 4,
};

enum class EItemQuality : uint8_t {
	None = 0,
	ITEM_QUALITY_POOR = 1,
	ITEM_QUALITY_COMMON = 2,
	ITEM_QUALITY_UNCOMMON = 3,
	ITEM_QUALITY_RARE = 4,
	ITEM_QUALITY_EPIC = 5,
	ITEM_QUALITY_LEGENDRY = 6,
	MAX = 7,
};

enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t {
	NoFilter = 0,
	SimpleSmoothing = 1,
	PredictiveSmoothing = 2,
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3,
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

enum class EUIInputMode : uint8_t {
	UIONLY = 0,
	GAMEANDUI = 1,
	GAMEONLY = 2,
	EUIInputMode_MAX = 3,
};

enum class EMeshSelectionToolPrimaryMode : uint8_t {
	Brush = 0,
	VolumetricBrush = 1,
	AngleFiltered = 2,
	Visible = 3,
	AllConnected = 4,
	AllInGroup = 5,
	ByMaterial = 6,
	ByUVIsland = 7,
	AllWithinAngle = 8,
	EMeshSelectionToolPrimaryMode_MAX = 9,
};

enum class ERefreshPageType : uint8_t {
	MustUseCache = 0,
	MustUseRealData = 1,
	TryUseCache = 2,
	ERefreshPageType_MAX = 3,
};

enum class ERenameAllianceResponse : uint8_t {
	RENAMEALLIANCE_RESPONSE_SUCCESS = 0,
	RENAMEALLIANCE_RESPONSE_NAME_ILLEGAL = 1,
	RENAMEALLIANCE_RESPONSE_NAME_DUPLICATE = 2,
	RENAMEALLIANCE_RESPONSE_ASYNCWAITING = 3,
	RENAMEALLIANCE_RESPONSE_NOT_ALLIANCEOWNER = 4,
	RENAMEALLIANCE_RESPONSE_CD = 5,
	RENAMEALLIANCE_RESPONSE_FAILED = 6,
	RENAMEALLIANCE_RESPONSE_MAX = 7,
};

enum class EMagicLeapARPinType : uint8_t {
	SingleUserSingleSession = 0,
	SingleUserMultiSession = 1,
	MultiUserMultiSession = 2,
	EMagicLeapARPinType_MAX = 3,
};

enum class EUdpMessageFormat : uint8_t {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5,
};

enum class ENiagaraScalabilityUpdateFrequency : uint8_t {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class EConstantQNormalizationEnum : uint8_t {
	EqualEuclideanNorm = 0,
	EqualEnergy = 1,
	EqualAmplitude = 2,
	EConstantQNormalizationEnum_MAX = 3,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
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

enum class EIplAudioEngine : uint8_t {
	UNREAL = 0,
	EIplAudioEngine_MAX = 1,
};

enum class EInterpoLocation_Type : uint8_t {
	ENUM_DivisiveLoc_Interp = 0,
	ENUM_LegacyLoc_Interp = 1,
	ENUM_MAX = 2,
};

enum class EPlanarConstraint : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4,
};

enum class EAnimalsMovingGaitType : uint8_t {
	Backward = 0,
	Idle = 1,
	Sneak = 2,
	WalkSlow = 3,
	Walk = 4,
	Trot = 5,
	Run = 6,
	Sprint = 7,
	Max = 8,
};

enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

enum class EGuildApplyJoinResponse : uint8_t {
	GUILDAPPLYJOIN_RESPONSE_SUCCESS = 0,
	GUILDAPPLYJOIN_RESPONSE_ASYNCWAITING = 1,
	GUILDAPPLYJOIN_RESPONSE_INALLIANCE = 2,
	GUILDAPPLYJOIN_RESPONSE_NO_GUILDOWNER = 3,
	GUILDAPPLYJOIN_RESPONSE_COOLTIME = 4,
	GUILDAPPLYJOIN_RESPONSE_CANNOT_APPLY = 5,
	GUILDAPPLYJOIN_RESPONSE_IN_LIST = 6,
	GUILDAPPLYJOIN_RESPONSE_EXCEED_LIMIT = 7,
	GUILDAPPLYJOIN_RESPONSE_SERVERGROUP = 8,
	GUILDAPPLYJOIN_RESPONSE_FAILED = 9,
	GUILDAPPLYJOIN_RESPONSE_GUANAIBATTLE = 10,
	GUILDAPPLYJOIN_RESPONSE_MAX = 11,
};

enum class EQuestPropConditionType : uint8_t {
	None = 0,
	AddActivityPoint = 1,
	TotalGuildQuests = 2,
	AddMastery = 3,
	HasGuildOccupyStructure = 4,
	HasGuildSkill = 5,
	HasGuildCraftPerk = 6,
	HasTransportMachineBattle = 7,
	HasTransportMachineServer = 8,
	EQuestPropConditionType_MAX = 9,
};

enum class EMagicLeapMeshLOD : uint8_t {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3,
};

enum class EWindowTitleBarMode : uint8_t {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2,
};

enum class EMagicLeapMeshType : uint8_t {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2,
};

enum class EGlobalMapActorType : uint8_t {
	Jun = 0,
	City = 1,
	GuanAi = 2,
	Max = 3,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

enum class EChannelMaskParameterColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

enum class ETrailState : uint8_t {
	None = 0,
	Base = 1,
	Blood = 2,
	ETrailState_MAX = 3,
};

enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

enum class BATTLE_SIGNUP_INFO_STATE_TYPE : uint8_t {
	BATTLE_SIGNUP_INFO_STATE_TYPE_NONE = 0,
	BATTLE_SIGNUP_INFO_STATE_TYPE_SIGNUP = 1,
	BATTLE_SIGNUP_INFO_STATE_TYPE_REQUESTBATTLESERVER = 2,
	BATTLE_SIGNUP_INFO_STATE_TYPE_STARTINGBATTLE = 3,
	BATTLE_SIGNUP_INFO_STATE_TYPE_DOINGBATTLE = 4,
	BATTLE_SIGNUP_INFO_STATE_TYPE_ENDBATTLE = 5,
	BATTLE_SIGNUP_INFO_STATE_TYPE_MAX = 6,
};

enum class EPropertyAccessCopyBatch : uint8_t {
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5,
};

enum class ECraftPriority : uint8_t {
	ECraftPriority_None = 0,
	ECraftPriority_Low = 1,
	ECraftPriority_Middle = 2,
	ECraftPriority_High = 3,
	ECraftPriority_Max = 4,
};

enum class EGameplayAbilityReplicationPolicy : uint8_t {
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2,
};

enum class EInventoryOwnerType : uint8_t {
	None = 0,
	FunctionCraft = 1,
	StructureItemContainer = 2,
	MoveSeat = 3,
	Animal = 4,
	Horse = 5,
	General = 6,
	Player = 7,
	UnKnown = 8,
	EInventoryOwnerType_MAX = 9,
};

enum class EBattleGamePlayType : uint8_t {
	BattleGamePlayType_Type_HorseBattle = 0,
	BattleGamePlayType_Type_XianCheng = 1,
	BattleGamePlayType_Type_TaiShou = 2,
	BattleGamePlayType_Type_T2 = 3,
	BattleGamePlayType_Type_T3 = 4,
	BattleGamePlayType_Type_MAX = 5,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class EWaterBrushBlendType : uint8_t {
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class EAlignObjectsAlignToOptions : uint8_t {
	FirstSelected = 0,
	LastSelected = 1,
	Combined = 2,
	EAlignObjectsAlignToOptions_MAX = 3,
};

enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
};

enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
};

enum class EDeductActivityPointResponse : uint8_t {
	DEDUCTACTIVITYPOINT_RESPONSE_SUCCESS = 0,
	DEDUCTACTIVITYPOINT_RESPONSE_ASYNCWAITING = 1,
	DEDUCTACTIVITYPOINT_RESPONSE_NOT_ENOUGH = 2,
	DEDUCTACTIVITYPOINT_RESPONSE_FAILED = 3,
	DEDUCTACTIVITYPOINT_RESPONSE_MAX = 4,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2,
};

enum class EAddCapitalWayType : uint8_t {
	AddCapitalWayType_Init = 0,
	AddCapitalWayType_GM = 1,
	AddCapitalWayType_ReCharge = 2,
	AddCapitalWayType_UseItem = 3,
	AddCapitalWayType_ReturnFromGuild = 4,
	AddCapitalWayType_ExtractFromGuild = 5,
	AddCapitalWayType_OccupyStructure = 6,
	AddCapitalWayType_TrainHorse = 7,
	AddCapitalWayType_AuctionShopSell = 8,
	AddCapitalWayType_TrafficGoodsSell = 9,
	AddCapitalWayType_Quest = 10,
	AddCapitalWayType_OpenWallet = 11,
	AddCapitalWayType_MailAttach = 12,
	AddCapitalWayType_OpenCapitalBox = 13,
	AddCapitalWayType_Achievement = 14,
	AddCapitalWayType_MAX = 15,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class ETransportType : uint8_t {
	ETransportType_Battle = 0,
	ETransportType_CrossServer = 1,
	ETransportType_MAX = 2,
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

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class ESpaceCurveControlPointFalloffType : uint8_t {
	Linear = 0,
	Smooth = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2,
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

enum class EMeshEditingMaterialModes : uint8_t {
	ExistingMaterial = 0,
	Diffuse = 1,
	Grey = 2,
	Soft = 3,
	TangentNormal = 4,
	Custom = 5,
	EMeshEditingMaterialModes_MAX = 6,
};

enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3,
};

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
};

enum class ENiagaraModuleDependencyType : uint8_t {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class EWarType : uint8_t {
	Tame = 0,
	Rest = 1,
	EntityRest = 2,
	Work = 3,
	War = 4,
	Death = 5,
	Max = 6,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class ETimedDataInputEvaluationType : uint8_t {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

enum class EFlockFishStateType : uint8_t {
	Seek = 0,
	Flee = 1,
	ChaseHook = 2,
	Struggle = 3,
	Catching = 4,
	Catched = 5,
	EFlockFishStateType_MAX = 6,
};

enum class ETransformMeshesSnapDragRotationMode : uint8_t {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class EConditionRewardType : uint8_t {
	Achievement = 0,
	ShopUnlockTrigger = 1,
	Max = 2,
};

enum class EMapViewAngel : uint8_t {
	ControlRotate = 0,
	PawnRotate = 1,
	EMapViewAngel_MAX = 2,
};

enum class EIplSimulationType : uint8_t {
	REALTIME = 0,
	BAKED = 1,
	DISABLED = 2,
	EIplSimulationType_MAX = 3,
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

enum class EInventoryFunctions : uint8_t {
	Inventory = 0,
	Quenching = 1,
	Shop = 2,
	GuildStore = 3,
	Facelift = 4,
	EInventoryFunctions_MAX = 5,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
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

enum class EUVLayoutPreviewSide : uint8_t {
	Left = 0,
	Right = 1,
	EUVLayoutPreviewSide_MAX = 2,
};

enum class FNiagaraCompileEventSeverity : uint8_t {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};

enum class EUpgradeSkillResponse : uint8_t {
	UPGRADESKILL_RESPONSE_SUCCESS = 0,
	UPGRADESKILL_RESPONSE_ASYNCWAITING = 1,
	UPGRADESKILL_RESPONSE_NO_AUTHORITY = 2,
	UPGRADESKILL_RESPONSE_GUILDLEVEL = 3,
	UPGRADESKILL_RESPONSE_MAXLEVEL = 4,
	UPGRADESKILL_RESPONSE_EXP = 5,
	UPGRADESKILL_RESPONSE_CAPITAL = 6,
	UPGRADESKILL_RESPONSE_FAILED = 7,
	UPGRADESKILL_RESPONSE_MAX = 8,
};

enum class EFunctionSwitchType : uint8_t {
	FSWitch_MinInvalid = 0,
	FSwitch_Chat = 1,
	FSwitch_VoiceChat = 2,
	FSwitch_GetMailAttachment = 3,
	FSWitch_TransportCrossServer = 4,
	FSWitch_JoinBattle = 5,
	FSwitch_Market = 6,
	FSwitch_AntiCheat = 7,
	FSwitch_GlobalBan = 8,
	FSWitch_MaxInvalid = 9,
	EFunctionSwitchType_MAX = 10,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ERevolvePropertiesQuadSplit : uint8_t {
	Uniform = 0,
	ShortestDiagonal = 1,
	ERevolvePropertiesQuadSplit_MAX = 2,
};

enum class EGiveOfficialSealResponse : uint8_t {
	GIVEOFFICIALSEAL_RESPONSE_SUCCESS = 0,
	GIVEOFFICIALSEAL_RESPONSE_HAVE_NOT = 1,
	GIVEOFFICIALSEAL_RESPONSE_ASYNCWAITING = 2,
	GIVEOFFICIALSEAL_RESPONSE_NOT_SAME_ALLIANCE = 3,
	GIVEOFFICIALSEAL_RESPONSE_NO_AUTHORITY = 4,
	GIVEOFFICIALSEAL_RESPONSE_FAILED = 5,
	GIVEOFFICIALSEAL_RESPONSE_MAX = 6,
};

enum class EShopUIMainIndex : uint8_t {
	SHOP_HOT_SALE = 0,
	SHOP_ROLE_FASHION = 1,
	SHOP_GENERAL_FASHION = 2,
	SHOP_HORSE_FASHION = 3,
	SHOP_SEASON = 4,
	SHOP_PRIVILEGE = 5,
	SHOP_PAGE_INVALID = 6,
	SHOP_MAX = 7,
};

enum class ENiagaraSpriteAlignment : uint8_t {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3,
};

enum class EXingShenType : uint8_t {
	None = 0,
	QingLong = 1,
	MingTang = 2,
	TianXin = 3,
	ZhuQue = 4,
	JinGui = 5,
	TianDe = 6,
	BaiHu = 7,
	YuTang = 8,
	TianLao = 9,
	XuanWu = 10,
	SiMing = 11,
	GouChen = 12,
	Max = 13,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
};

enum class ECameraShakePlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3,
};

enum class ERemeshType : uint8_t {
	Standard = 0,
	FullPass = 1,
	NormalFlow = 2,
	ERemeshType_MAX = 3,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class ESendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
};

enum class EBodyBone : uint8_t {
	Head = 0,
	Neck = 1,
	Spine_01 = 2,
	Spine_02 = 3,
	Spine_03 = 4,
	Upperarm_L = 5,
	Lowerarm_L = 6,
	Upperarm_R = 7,
	Lowerarm_R = 8,
	Hand_L = 9,
	Hand_R = 10,
	Pelvis = 11,
	Thigh_L = 12,
	Calf_L = 13,
	Thigh_R = 14,
	Calf_R = 15,
	Foot_L = 16,
	Foot_R = 17,
	Ball_L = 18,
	Ball_R = 19,
	EBodyBone_MAX = 20,
};

enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EJueWeiConditionType : uint8_t {
	HonorPoint = 0,
	EquipItem = 1,
	YueDanPingPoint = 2,
	Decoration = 3,
	GuildOwnerOfficial = 4,
	Copper = 5,
	Max = 6,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class UDLSSMode : uint8_t {
	Off = 0,
	Auto = 1,
	UltraQuality = 2,
	Quality = 3,
	Balanced = 4,
	Performance = 5,
	UltraPerformance = 6,
	UDLSSMode_MAX = 7,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5,
};

enum class EAllianceApplyJoinResponse : uint8_t {
	ALLIANCEAPPLYJOIN_RESPONSE_SUCCESS = 0,
	ALLIANCEAPPLYJOIN_RESPONSE_ASYNCWAITING = 1,
	ALLIANCEAPPLYJOIN_RESPONSE_NO_ALLIANCE_PLAYEROWNER = 2,
	ALLIANCEAPPLYJOIN_RESPONSE_COOLTIME = 3,
	ALLIANCEAPPLYJOIN_RESPONSE_CANNOT_APPLY = 4,
	ALLIANCEAPPLYJOIN_RESPONSE_IN_LIST = 5,
	ALLIANCEAPPLYJOIN_RESPONSE_EXCEED_LIMIT = 6,
	ALLIANCEAPPLYJOIN_RESPONSE_SERVERGROUP = 7,
	ALLIANCEAPPLYJOIN_RESPONSE_FAILED = 8,
	ALLIANCEAPPLYJOIN_RESPONSE_GUANAIBATTLE = 9,
	ALLIANCEAPPLYJOIN_RESPONSE_MAX = 10,
};

enum class ERefuseJoinAllianceResponse : uint8_t {
	EFUSEJOINALLIANCE_RESPONSE_SUCCESS = 0,
	EFUSEJOINALLIANCE_RESPONSE_ASYNCWAITING = 1,
	EFUSEJOINALLIANCE_RESPONSE_NO_AUTHORITY = 2,
	EFUSEJOINALLIANCE_RESPONSE_FAILED = 3,
	EFUSEJOINALLIANCE_RESPONSE_MAX = 4,
};

enum class EFillUpgradeExpResponse : uint8_t {
	FILLUPGRADEEXP_RESPONSE_SUCCESS = 0,
	FILLUPGRADEEXP_RESPONSE_ASYNCWAITING = 1,
	FILLUPGRADEEXP_RESPONSE_MAXLEVEL = 2,
	FILLUPGRADEEXP_RESPONSE_NO_AUTHORITY = 3,
	FILLUPGRADEEXP_RESPONSE_EXP = 4,
	FILLUPGRADEEXP_RESPONSE_FAILED = 5,
	FILLUPGRADEEXP_RESPONSE_MAX = 6,
};

enum class EAudioSpectrumBandPresetType : uint8_t {
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4,
};

enum class EGameplayTagEventType : uint8_t {
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2,
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

enum class ESGSoundWindState : uint8_t {
	NoWind = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Max = 4,
};

enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels_MAX = 5,
};

enum class EUIInventoryType : uint8_t {
	Add = 0,
	Remove = 1,
	Refresh = 2,
	UpdateMax = 3,
	Max = 4,
};

enum class EMeshAttributePaintToolActions : uint8_t {
	NoAction = 0,
	EMeshAttributePaintToolActions_MAX = 1,
};

enum class ETextTransformPolicy : uint8_t {
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EFastArraySerializerDeltaFlags : uint8_t {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4,
};

enum class ELiveLinkCameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class EGeneralsSkillStatusType : uint8_t {
	OneHandedWeapons = 0,
	TowHandedWeapons = 1,
	Polearms = 2,
	Throwing = 3,
	Archery = 4,
	Crossbows = 5,
	Riding = 6,
	Physique = 7,
	HeavyArmors = 8,
	LightArmors = 9,
	Shields = 10,
	Mining = 11,
	Lumbering = 12,
	Hunting = 13,
	Planting = 14,
	HandMaking = 15,
	SiegeWorking = 16,
	Building = 17,
	Armorer = 18,
	Herb = 19,
	Taming = 20,
	LeaderShip = 21,
	Recruit = 22,
	Training = 23,
	Renown = 24,
	Max = 25,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5,
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

enum class ESetBillboardResponse : uint8_t {
	SETBILLBOARD_RESPONSE_SUCCESS = 0,
	SETBILLBOARD_RESPONSE_EXCEED_LENGTH = 1,
	SETBILLBOARD_RESPONSE_ASYNCWAITING = 2,
	SETBILLBOARD_RESPONSE_NO_AUTHORITY = 3,
	SETBILLBOARD_RESPONSE_CONTEXT_ILLEGAL = 4,
	SETBILLBOARD_RESPONSE_FAILED = 5,
	SETBILLBOARD_RESPONSE_MAX = 6,
};

enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
};

enum class EBlockDamageType : uint8_t {
	None = 0,
	BodyBlock = 1,
	WeaponBlock = 2,
	ShieldBlock = 3,
	ChargeHit = 4,
	ChargeFallLow = 5,
	ChargeFallHigh = 6,
	ChargeFallVeryHigh = 7,
	RiderSprintAttack = 8,
	MAX = 9,
};

enum class EItemExtraMenu : uint8_t {
	Place = 0,
	Equip = 1,
	Use = 2,
	UnEquip = 3,
	Split = 4,
	Repair = 5,
	Exchange = 6,
	CraftOne = 7,
	CraftMore = 8,
	Feed = 9,
	EquipWeapon = 10,
	UnEquipWeapon = 11,
	Give = 12,
	OpenPackage = 13,
	MapSign = 14,
	Gift = 15,
	ChangeItemName = 16,
	AddFood = 17,
	AddMoney = 18,
	EquipAppearance = 19,
	UnEquipAppearance = 20,
	UnlockAppearance = 21,
	Drop = 22,
	SetPriority = 23,
	MAX = 24,
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

enum class EMagicLeapControllerLEDEffect : uint8_t {
	RotateCW = 0,
	RotateCCW = 1,
	Pulse = 2,
	PaintCW = 3,
	PaintCCW = 4,
	Blink = 5,
	EMagicLeapControllerLEDEffect_MAX = 6,
};

enum class EReflectionsType : uint8_t {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2,
};

enum class EUVProjectionMethod : uint8_t {
	Cube = 0,
	Cylinder = 1,
	Plane = 2,
	EUVProjectionMethod_MAX = 3,
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

enum class EARServiceInstallRequestResult : uint8_t {
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4,
};

enum class ESystemTrainerType : uint8_t {
	Low = 0,
	Middle = 1,
	High = 2,
	Max = 3,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class EScriptExecutionMode : uint8_t {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3,
};

enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t {
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2,
};

enum class EChatSlotType : uint8_t {
	CHAT_SYSTEM = 0,
	CHAT_NEARBY = 1,
	CHAT_XIAN = 2,
	CHAT_JUN = 3,
	CHAT_WORLD = 4,
	CHAT_BATTLE = 5,
	CHAT_GUILD = 6,
	CHAT_ALLIANCE = 7,
	CHAT_PRIVATE = 8,
	CHAT_EXP = 9,
	CHAT_MAX = 10,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class EInputCaptureSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 4,
	EInputCaptureSide_MAX = 5,
};

enum class ItemCompressedFlags : uint8_t {
	FLAG_bIsPerk = 0,
	FLAG_bIsCrafting = 1,
	FLAG_bIsRepairing = 2,
	FLAG_bIsQuenching = 3,
	FLAG_R1 = 4,
	FLAG_R2 = 5,
	FLAG_MAX = 6,
};

enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
};

enum class EARGeoTrackingAccuracy : uint8_t {
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4,
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

enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

enum class EGameServerPVPType : uint8_t {
	GAME_SERVER_TYPE_PVP = 0,
	GAME_SERVER_TYPE_PVE = 1,
	GAME_SERVER_TYPE_MAX = 2,
};

enum class EExploitCompType : uint8_t {
	EExploitCompType_Lumber = 0,
	EExploitCompType_Mine = 1,
	EExploitCompType_Hunter = 2,
	ExploitCompType_Max = 3,
	EExploitCompType_MAX = 4,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
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

enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

enum class ECollectionScriptingShareType : uint8_t {
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3,
};

enum class EBuffAddType : uint8_t {
	ResetTime = 0,
	AddTime = 1,
	AddValueOnceNotSave = 2,
	MakeDamageOnce = 3,
	EBuffAddType_MAX = 4,
};

enum class ESplitUIType : uint8_t {
	SplitItem = 0,
	CraftItem = 1,
	SplitInventoryMoveToBattleStore = 2,
	SplitInventoryMoveToCrossServerStore = 3,
	SplitBattleStoreMoveToInventory = 4,
	SplitCrossServerStoreMoveToInventory = 5,
	MAX = 6,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8_t {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ESetAllianceApplyJoinResponse : uint8_t {
	SETALLIANCEAPPLYJOIN_RESPONSE_SUCCESS = 0,
	SETALLIANCEAPPLYJOIN_RESPONSE_ASYNCWAITING = 1,
	SETALLIANCEAPPLYJOIN_RESPONSE_NO_AUTHORITY = 2,
	SETALLIANCEAPPLYJOIN_RESPONSE_FAILED = 3,
	SETALLIANCEAPPLYJOIN_RESPONSE_MAX = 4,
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

enum class EEnvQueryStatus : uint8_t {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
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

enum class EMapPOIType : uint8_t {
	Self = 0,
	Corpse = 1,
	TamedGeneral = 2,
	TamedAnimal = 3,
	Bed = 4,
	XianChengPlayerStart = 5,
	TaiShouPlayerStart = 6,
	BigWorldPlayerStart = 7,
	OccupyStructure = 8,
	BattleFlag = 9,
	BattleBasement = 10,
	BattleHighKiller = 11,
	Static = 12,
	Mark = 13,
	MyGuildStructureBanner = 14,
	RegionRespawnPoint = 15,
	GuildEventRegion = 16,
	StructureGivePerkPoint = 17,
	Structure = 18,
	Max = 19,
};

enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2,
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

enum class EMultiTransformerMode : uint8_t {
	DefaultGizmo = 0,
	QuickAxisTranslation = 1,
	EMultiTransformerMode_MAX = 2,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class ERevolvePropertiesPolygroupMode : uint8_t {
	Single = 0,
	PerFace = 1,
	PerStep = 2,
	AccordingToProfileCurve = 3,
	ERevolvePropertiesPolygroupMode_MAX = 4,
};

enum class EAIStatusType : uint8_t {
	Relaxed = 0,
	MoveTo = 1,
	MoveToSpawnLocation = 2,
	MoveToSleepLocation = 3,
	Follow = 4,
	Attack = 5,
	Stun = 6,
	RunAway = 7,
	Random = 8,
	StrongHold = 9,
	KeepInPlace = 10,
	Sleep = 11,
	MoveToVirtual = 12,
	EAIStatusType_MAX = 13,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class ERevolvePropertiesCapFillMode : uint8_t {
	None = 0,
	Delaunay = 1,
	EarClipping = 2,
	CenterFan = 3,
	ERevolvePropertiesCapFillMode_MAX = 4,
};

enum class ENiagaraSortMode : uint8_t {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5,
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

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class TrafficGoodsResult : uint8_t {
	TrafficGoods_Success = 0,
	TrafficGoods_Error_PriceChanged = 1,
	TrafficGoods_Error_PlayerCapitalNotEnough = 2,
	TrafficGoods_Error_SellerCapitalNotEnough = 3,
	TrafficGoods_Error_WrongSellerIndex = 4,
	TrafficGoods_Error_WrongGoodsIndex = 5,
	TrafficGoods_Error_BuyGoodsAmount = 6,
	TrafficGoods_Error_SellGoodsAmount = 7,
	TrafficGoods_Error_InternalError = 8,
	TrafficGoods_MAX = 9,
};

enum class EVehiclePerkEventType : uint8_t {
	VEHICLEPERKEVENT_STUNTAME = 0,
	VEHICLEPERKEVENT_RIDETAME = 1,
	VEHICLEPERKEVENT_DIE = 2,
	VEHICLEPERKEVENT_HEALTHEMPTY = 3,
	VEHICLEPERKEVENT_HEALTHFULL = 4,
	VEHICLEPERKEVENT_ENDMATE = 5,
	VEHICLEPERKEVENT_PERGNANCYFAILURE = 6,
	VEHICLEPERKEVENT_PERGNANCYSUCCESS = 7,
	VEHICLEPERKEVENT_SPAWNBABY = 8,
	VEHICLEPERKEVENT_CLAIM = 9,
	VEHICLEPERKEVENT_BEG = 10,
	VEHICLEPERKEVENT_ADULTHOOD = 11,
	VEHICLEPERKEVENT_TRAINER = 12,
	VEHICLEPERKEVENT_LEVELUP = 13,
	VEHICLEPERKEVENT_CASTRATE = 14,
	VEHICLEPERKEVENT_MAX = 15,
};

enum class EGameplayEffectStackingPeriodPolicy : uint8_t {
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2,
};

enum class ENiagaraCollisionMode : uint8_t {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4,
};

enum class EMirrorSaveMode : uint8_t {
	UpdateAssets = 0,
	CreateNewAssets = 1,
	EMirrorSaveMode_MAX = 2,
};

enum class EApplicationState : uint8_t {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4,
};

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
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

enum class ESetAllianceBillboardResponse : uint8_t {
	SETALLIANCEBILLBOARD_RESPONSE_SUCCESS = 0,
	SETALLIANCEBILLBOARD_RESPONSE_EXCEED_LENGTH = 1,
	SETALLIANCEBILLBOARD_RESPONSE_ASYNCWAITING = 2,
	SETALLIANCEBILLBOARD_RESPONSE_NO_AUTHORITY = 3,
	SETALLIANCEBILLBOARD_RESPONSE_FAILED = 4,
	SETALLIANCEBILLBOARD_RESPONSE_MAX = 5,
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

enum class ERenameGuildResponse : uint8_t {
	RENAMEGUILD_RESPONSE_SUCCESS = 0,
	RENAMEGUILD_RESPONSE_NAME_ILLEGAL = 1,
	RENAMEGUILD_RESPONSE_NAME_DUPLICATE = 2,
	RENAMEGUILD_RESPONSE_GUILD_NOTFOUND = 3,
	RENAMEGUILD_RESPONSE_GUILD_ASYNCWAITING = 4,
	RENAMEGUILD_RESPONSE_CD = 5,
	RENAMEGUILD_RESPONSE_FAILED = 6,
	RENAMEGUILD_RESPONSE_MAX = 7,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5,
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

enum class EAnimalFurColorType : uint8_t {
	DarkBrown = 0,
	Maroon = 1,
	Gray = 2,
	White = 3,
	Black = 4,
	Red = 5,
	Max = 6,
};

enum class EFishingPodState : uint8_t {
	Reel = 0,
	Reeling = 1,
	Casting = 2,
	WaitingFish = 3,
	FishStruggle = 4,
	EFishingPodState_MAX = 5,
};

enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

enum class EWeatherParticleType : uint8_t {
	EWPT_VolumeFog = 0,
	EWPT_SandStorm = 1,
	EWPT_SandStormLeaf = 2,
	Max = 3,
};

enum class EDataSortTypeEnum : uint8_t {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4,
};

enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3,
};

enum class ESourceEffectFilterParam : uint8_t {
	FilterFrequency = 0,
	FilterResonance = 1,
	Count = 2,
	ESourceEffectFilterParam_MAX = 3,
};

enum class EAchievementState : uint8_t {
	Unaccomplished = 0,
	AccomplishedUnknow = 1,
	Accomplished = 2,
	EAchievementState_MAX = 3,
};

enum class EImageFilterState : uint8_t {
	UNCHECKED = 0,
	CHECKED = 1,
	MAX = 2,
};

enum class ENiagaraIterationSource : uint8_t {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3,
};

enum class ECreateChannelResponse : uint8_t {
	CREATECHANNEL_RESPONSE_SUCCESS = 0,
	CREATECHANNEL_RESPONSE_FAILED = 1,
	CREATECHANNEL_RESPONSE_MAX = 2,
};

enum class EBattleEventType : uint8_t {
	BattleEventType_OpenDoor = 0,
	BattleEventType_MAX = 1,
};

enum class EWaveSpectrumType : uint8_t {
	Phillips = 0,
	PiersonMoskowitz = 1,
	JONSWAP = 2,
	EWaveSpectrumType_MAX = 3,
};

enum class EActorType : uint8_t {
	EAT_Invalid = 0,
	EAT_Structure = 1,
	EAT_MovingStructure = 2,
	EAT_General = 3,
	EAT_Player = 4,
	EAT_Horse = 5,
	EAT_Rhinoceros = 6,
	EAT_Elephant = 7,
	EAT_Animal = 8,
	EAT_MAX = 9,
};

enum class ENiagaraScriptParameterUsage : uint8_t {
	Input = 0,
	Output = 1,
	Local = 2,
	InputOutput = 3,
	InitialValueInput = 4,
	None = 5,
	Num = 6,
	ENiagaraScriptParameterUsage_MAX = 7,
};

enum class ESGDayOfWeek : uint8_t {
	Monday = 0,
	Tuesday = 1,
	Wednesday = 2,
	Thursday = 3,
	Friday = 4,
	Saturday = 5,
	Sunday = 6,
	MAX = 7,
};

enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3,
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

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
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

enum class EPrimaryWeaponType : uint8_t {
	None = 0,
	MeleeWeapon = 1,
	ShooterWeapon = 2,
	EPrimaryWeaponType_MAX = 3,
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

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
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

enum class EBaseCreateFromSelectedTargetType : uint8_t {
	NewAsset = 0,
	FirstInputAsset = 1,
	LastInputAsset = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class EMagicLeapAutoPinType : uint8_t {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

enum class EAIFollowType : uint8_t {
	Close = 0,
	Middle = 1,
	Far = 2,
	Max = 3,
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

enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
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

enum class ECameraFocusMethod : uint8_t {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4,
};

enum class MediaTextureOutputFormat : uint8_t {
	MTOF_Default = 0,
	MTOF_SRGB_LINOUT = 1,
	MTOF_MAX = 2,
};

enum class EGameUIRemind : uint8_t {
	GameUIRemindHead = 0,
	GameUIRemindBody = 1,
	GameUIRemindLeg = 2,
	GameUIRemindMainHand = 3,
	GameUIRemindOffHand = 4,
	GameUIRemindMAX = 5,
	EGameUIRemind_MAX = 6,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class EWorshipType : uint8_t {
	None = 0,
	PlayerCharAddExpMulAdd = 1,
	PlayerCharAddSkillExpMulAdd = 2,
	GeneralExploitDamageMulAdd = 3,
	PlayerMaxWeight = 4,
	GenCharAddExpMulAdd = 5,
	GenCharAddSkillExpMulAdd = 6,
	HorseAddExpMulAdd = 7,
	Max = 8,
};

enum class EClothingWindMethodNv : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2,
};

enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
};

enum class EMagicLeapMeshVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4,
};

enum class ECrossServerErrorType : uint8_t {
	CrossServerErrorType_None = 0,
	CrossServerErrorType_DifferentCityGroup = 1,
	CrossServerErrorType_SystemError = 2,
	CrossServerErrorType_BattleUid_Invalid = 3,
	CrossServerErrorType_ServerId_Invalid = 4,
	CrossServerErrorType_AsyncWaiting = 5,
	CrossServerErrorType_PlayerDead = 6,
	CrossServerErrorType_PlayerLevelLimit = 7,
	CrossServerErrorType_GeneralWarNum = 8,
	CrossServerErrorType_HorseWarNum = 9,
	CrossServerErrorType_Cost = 10,
	CrossServerErrorType_CostNum = 11,
	CrossServerErrorType_CD = 12,
	CrossServerErrorType_NOGUILD = 13,
	CrossServerErrorType_NoBelligerents = 14,
	CrossServerErrorType_INQUEUE = 15,
	CrossServerErrorType_BAGINSAVECD = 16,
	CrossServerErrorType_GENERALINSAVECD = 17,
	CrossServerErrorType_HORSEINSAVECD = 18,
	CrossServerErrorType_CantCrossbetweenTwoCity = 19,
	CrossServerErrorType_PlayerOverWeight = 20,
	CrossServerErrorType_PlayerNoPassport = 21,
	CrossServerErrorType_CrossServerFunctionOff = 22,
	CrossServerErrorType_HasCanNotTransportItem = 23,
	CrossServerErrorType_MAX = 24,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
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

enum class ESGBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class EXianChengBattleStage : uint8_t {
	BattleStage_Show = 0,
	BattleStage_JinXian = 1,
	BattleStage_BeiZhan = 2,
	BattleStage_RequestBattle = 3,
	BattleStage_Battle = 4,
	BattleStage_MAX = 5,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
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

enum class EApplyJoinGuildResponse : uint8_t {
	APPLYJOINGUILD_RESPONSE_SUCCESS = 0,
	APPLYJOINGUILD_RESPONSE_GUILD_NOTFOUND = 1,
	APPLYJOINGUILD_RESPONSE_REPLICATE = 2,
	APPLYJOINGUILD_RESPONSE_FULLLIST = 3,
	APPLYJOINGUILD_RESPONSE_ASYNCWAITING = 4,
	APPLYJOINGUILD_RESPONSE_DISSATISFY_CONDITION = 5,
	APPLYJOINGUILD_RESPONSE_BASEPLAYERDATA = 6,
	APPLYJOINGUILD_RESPONSE_INBATTLE = 7,
	APPLYJOINGUILD_RESPONSE_APPLYGUILD_NOTFOUND = 8,
	APPLYJOINGUILD_RESPONSE_GUILDOWNER = 9,
	APPLYJOINGUILD_RESPONSE_NOGUILDMEMBER = 10,
	APPLYJOINGUILD_RESPONSE_NO_ALLIANCE = 11,
	APPLYJOINGUILD_RESPONSE_ALLIANCE_NOTSAME = 12,
	APPLYJOINGUILD_RESPONSE_SERVER_CANNOT_CROSS = 13,
	APPLYJOINGUILD_RESPONSE_GUILD_CANNOT_CROSS = 14,
	APPLYJOINGUILD_RESPONSE_LEAVECD = 15,
	APPLYJOINGUILD_RESPONSE_CONTEXT_ILLEGAL = 16,
	APPLYJOINGUILD_RESPONSE_FAILED = 17,
	APPLYJOINGUILD_RESPONSE_NPCSEAT_NUM = 18,
	APPLYJOINGUILD_RESPONSE_TRANSCD = 19,
	APPLYJOINGUILD_RESPONSE_MAX = 20,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class ENiagaraRendererSourceDataMode : uint8_t {
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class EWaterBrushFalloffMode : uint8_t {
	Angle = 0,
	Width = 1,
	EWaterBrushFalloffMode_MAX = 2,
};

enum class EGainHuKouItemWay : uint8_t {
	XianChengMaster = 0,
	ActivityRankReward = 1,
	Max = 2,
};

enum class ETipsFilterType : uint8_t {
	Normal = 0,
	Addition = 1,
	Require = 2,
	Punish = 3,
	ETipsFilterType_MAX = 4,
};

enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class EActivityNumber : uint8_t {
	Activity_None = 0,
	Activity_YuanDan = 1,
	Activity_KongmingLantern = 2,
	Activity_YaoQianShu = 3,
	Activity_KoiFish = 4,
	Activity_LimitedQuest = 5,
	Activity_LimitedGuildShop = 6,
	Activity_Max = 7,
};

enum class EInertializationSpace : uint8_t {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3,
};

enum class EMagicLeapControllerType : uint8_t {
	None = 0,
	Device = 1,
	MobileApp = 2,
	EMagicLeapControllerType_MAX = 3,
};

enum class EBaseChunkDataInfoType : uint8_t {
	ChunkDataStateType_General = 0,
	ChunkDataStateType_Animal = 1,
	ChunkDataStateType_MAX = 2,
};

enum class EWeatherTrackFormatType : uint8_t {
	EWTFT_Float = 0,
	EWTFT_Int32 = 1,
	EWTFT_Bool = 2,
	EWTFT_Vector = 3,
	EWTFT_Color = 4,
	EWTFT_LinearColor = 5,
	EWTFT_PureType = 6,
	EWTFT_Rotation = 7,
	EWTFT_Visibility = 8,
	Max = 9,
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

enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EGameplayModOp : uint8_t {
	Additive = 0,
	Multiplicitive = 1,
	Division = 2,
	Override = 3,
	Max = 4,
};

enum class ENiagaraStatDisplayMode : uint8_t {
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2,
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

enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class EPointType : uint8_t {
	Sleep = 0,
	Relaxed = 1,
	Max = 2,
};

enum class ENaturalSoundFalloffMode : uint8_t {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3,
};

enum class EToggleStanceType : uint8_t {
	None = 0,
	WaitingLastToggleStanceType = 1,
	WaitingToggleStanceType = 2,
	Max = 3,
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

enum class EUpdateClockSource : uint8_t {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6,
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

enum class EInputCaptureState : uint8_t {
	Begin = 0,
	Continue = 1,
	End = 2,
	Ignore = 3,
	EInputCaptureState_MAX = 4,
};

enum class EMakeMeshPlacementType : uint8_t {
	GroundPlane = 0,
	OnScene = 1,
	EMakeMeshPlacementType_MAX = 2,
};

enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
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

enum class ENiagaraScriptLibraryVisibility : uint8_t {
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4,
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

enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
};

enum class EInventoryItemFilterType : uint8_t {
	Consumable = 0,
	Equipment = 1,
	Weapon = 2,
	Ammo = 3,
	Structure = 4,
	Resource = 5,
	MAX = 6,
};

enum class EWeaponHoldType : uint8_t {
	MainHand = 0,
	TwoHand = 1,
	OffHand = 2,
	EWeaponHoldType_MAX = 3,
};

enum class EMaterialLayerLinkState : uint8_t {
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4,
};

enum class ECustomAttributeBlendType : uint8_t {
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2,
};

enum class ECharacterType : uint8_t {
	CHARACTER_TYPE_HUMAN = 0,
	CHARACTER_TYPE_SIEGE = 1,
	CHARACTER_TYPE_HORSE = 2,
	CHARACTER_TYPE_ELEPHANT = 3,
	CHARACTER_TYPE_RHINOCEROS = 4,
	CHARACTER_TYPE_MAX = 5,
};

enum class EDoFollowType : uint8_t {
	None = 0,
	MoveTo = 1,
	WaitStopMove = 2,
	TurnTo = 3,
	Arrived = 4,
	Max = 5,
};

enum class EItemCraftSkillType : uint8_t {
	ItemCraftSkillType_None = 0,
	ItemCraftSkillType_HandMaking = 1,
	ItemCraftSkillType_Siege = 2,
	ItemCraftSkillType_Building = 3,
	ItemCraftSkillType_Armorer = 4,
	ItemCraftSkillType_Herb = 5,
	ItemCraftSkillType_Food = 6,
	ItemCraftSkillType_MAX = 7,
};

enum class ECharacterSex : uint8_t {
	CHARACTERSEX_MALE = 0,
	CHARACTERSEX_FEMALE = 1,
	CHARACTERSEX_MAX = 2,
};

enum class EAllianceLeaveResponse : uint8_t {
	ALLIANCELEAVE_RESPONSE_SUCCESS = 0,
	ALLIANCELEAVE_RESPONSE_ASYNCWAITING = 1,
	ALLIANCELEAVE_RESPONSE_NOT_INALLIANCE = 2,
	ALLIANCELEAVE_RESPONSE_NO_GUILDOWNER = 3,
	ALLIANCELEAVE_RESPONSE_NO_SUBALLIANCEPLAYEROWNER = 4,
	ALLIANCELEAVE_RESPONSE_FAILED = 5,
	ALLIANCELEAVE_RESPONSE_MAX = 6,
};

enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 3,
	Unknown = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5,
};

enum class EXRDeviceConnectionResult : uint8_t {
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5,
};

enum class ECapitalType : uint8_t {
	CAPITAL_TYPE_INVALID = 0,
	CAPITAL_TYPE_GOLD = 1,
	CAPITAL_TYPE_SILVER = 2,
	CAPITAL_TYPE_COPPER = 3,
	CAPITAL_TYPE_SEASON = 4,
	CAPITAL_TYPE_MAX = 5,
};

enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
};

enum class ESkillAddExpAction : uint8_t {
	None = 0,
	OneHandWeaponAttack = 1,
	OneHandWeaponBlock = 2,
	OneHandWeaponHangUp = 3,
	TwoHandWeaponAttack = 4,
	TwoHandWeaponBlock = 5,
	TwoHandWeaponHangUp = 6,
	ShieldBlock = 7,
	ShieldBlockArrow = 8,
	ShieldAttack = 9,
	ShieldHandUp = 10,
	PolearmsAttack = 11,
	PolearmsBlock = 12,
	PolearmsHangUp = 13,
	HeavyArmorBePointAttack = 14,
	HeavyArmorBeAOEAttack = 15,
	HeavyArmorSpendSP = 16,
	HeavyArmorHangUp = 17,
	ThrowEmpty = 18,
	ThrowAttack = 19,
	ThrowAOEAttack = 20,
	ThrowHangUp = 21,
	ArcheryEmpty = 22,
	ArcheryAttack = 23,
	ArcheryAOEAttack = 24,
	ArcheryHangUp = 25,
	CrossbowsEmpty = 26,
	CrossbowsAttack = 27,
	CrossbowsAOEAttack = 28,
	CrossbowsHangUp = 29,
	RiderMove = 30,
	RiderHangUp = 31,
	LightArmorBePointAttack = 32,
	LightArmorBeAOEAttack = 33,
	LightArmorSpendSP = 34,
	LightArmorHangUp = 35,
	PhysiqueBeAttack = 36,
	PhysiqueBeAOEAttack = 37,
	PhysiqueSpendSP = 38,
	PhysiqueHangUp = 39,
	MiningEmpty = 40,
	MiningTool = 41,
	MiningHangUp = 42,
	LumberingEmpty = 43,
	LumberingTool = 44,
	LumberingHangUp = 45,
	HuntingEmpty = 46,
	HuntingTool = 47,
	HuntingHangUp = 48,
	PlantingSow = 49,
	PlantingFertilizer = 50,
	PlantingHoeing = 51,
	PlantingHarvest = 52,
	PlantingHangUp = 53,
	SiegeCraft = 54,
	SiegeFire = 55,
	SiegeHitSuccess = 56,
	SiegeHangUp = 57,
	BuildingCraft = 58,
	BuildingPlace = 59,
	BuildingFrameStepSkillExp = 60,
	BuildingRepair = 61,
	BuildingHangUp = 62,
	HandMakingCraftWeapon = 63,
	HandMakingRepair = 64,
	HandMakingForge = 65,
	HandMakingHangUp = 66,
	ArmorCraftArmor = 67,
	ArmorRepair = 68,
	ArmorForge = 69,
	ArmorHangUp = 70,
	HerbCraftHerb = 71,
	HerbCraftFood = 72,
	HerbUseHerb = 73,
	HerbUseFood = 74,
	HerbHangUp = 75,
	LeaderShipMakeDamage = 76,
	LeaderShipAddLevelExp = 77,
	LeaderHangUp = 78,
	TameToRecruitDefaultValue = 79,
	TameToRecruitRatio = 80,
	RecruitPeace = 81,
	RecruitHangUp = 82,
	GeneralAddExpToTraning = 83,
	TraningHangUp = 84,
	TameHorse = 85,
	TameHangUp = 86,
	RenownRunBusiness = 87,
	RenownAchievement = 88,
	RenownJoinXianChengBattle = 89,
	RenownWinXianChengBattle = 90,
	RenownLoseXianChengBattle = 91,
	RenownPutYueDanPingItem = 92,
	RenownBannerStructure = 93,
	RenownHangUp = 94,
	RenownJoinTaiShouBattle = 95,
	RenownWinTaiShouBattle = 96,
	RenownLoseTaiShouBattle = 97,
	RenownJoinGuanAiBattle = 98,
	RenownWinGuanAiBattle = 99,
	RenownLoseGuanAiBattle = 100,
	UsePublicExp = 101,
	GM = 102,
	UseSkillExpBook = 103,
	Training = 104,
	GameplayNeed = 105,
	HuntingFish = 106,
	SEHunting = 107,
	SkillAddExpActionMax = 108,
	ESkillAddExpAction_MAX = 109,
};

enum class EAlignObjectsAlignTypes : uint8_t {
	Pivots = 0,
	BoundingBoxes = 1,
	EAlignObjectsAlignTypes_MAX = 2,
};

enum class ESetJoinAllianceFlagResponse : uint8_t {
	SETJOINALLIANCEFLAG_RESPONSE_SUCCESS = 0,
	SETJOINALLIANCEFLAG_RESPONSE_ASYNCWAITING = 1,
	SETJOINALLIANCEFLAG_RESPONSE_NO_AUTHORITY = 2,
	SETJOINALLIANCEFLAG_RESPONSE_FAILED = 3,
	SETJOINALLIANCEFLAG_RESPONSE_MAX = 4,
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

enum class ETurretAIAttackRangeMode : uint8_t {
	AttackClose = 0,
	AttackMiddle = 1,
	AttackFar = 2,
	ETurretAIAttackRangeMode_MAX = 3,
};

enum class EMeshSculptFalloffType : uint8_t {
	Smooth = 0,
	Linear = 1,
	Inverse = 2,
	Round = 3,
	BoxSmooth = 4,
	BoxLinear = 5,
	BoxInverse = 6,
	BoxRound = 7,
	LastValue = 8,
	EMeshSculptFalloffType_MAX = 9,
};

enum class EShopUnlockType : uint8_t {
	SHOP_UNLOCK_BANNER = 0,
	SHOP_UNLOCK_PROPS = 1,
	Max = 2,
};

enum class ENiagaraCullReaction : uint8_t {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4,
};

enum class ESGLobbyType : uint8_t {
	RoleManager = 0,
	GlobalMap = 1,
	ESGLobbyType_MAX = 2,
};

enum class EStrandsTexturesMeshType : uint8_t {
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2,
};

enum class EGlobalMapFilterType : uint8_t {
	GuanAi = 0,
	City = 1,
	EGlobalMapFilterType_MAX = 2,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class EQRCodeComponentDebugMode : uint8_t {
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2,
};

enum class EQuarztQuantizationReference : uint8_t {
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4,
};

enum class EGlobalMapServerType : uint8_t {
	PVP = 0,
	PVE = 1,
	MAX = 2,
};

enum class EBattlePlayerState : uint8_t {
	SoliderTypeSelected = 0,
	BattleGroupSelected = 1,
	NoBattleGroup = 2,
	EBattlePlayerState_MAX = 3,
};

enum class ETransformMeshesSnapDragSource : uint8_t {
	ClickPoint = 0,
	Pivot = 1,
	LastValue = 2,
	ETransformMeshesSnapDragSource_MAX = 3,
};

enum class ESPType : uint8_t {
	ST = 0,
	AG = 1,
	EN = 2,
	WI = 3,
	CH = 4,
	MAX = 5,
};

enum class EDrawPolygonOutputMode : uint8_t {
	MeshedPolygon = 0,
	ExtrudedConstant = 1,
	ExtrudedInteractive = 2,
	EDrawPolygonOutputMode_MAX = 3,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
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

enum class ESwitchType : uint8_t {
	SwitchType_CartSwim = 0,
	SwitchType_MAX = 1,
};

enum class ERaDistanceRolloffModel : uint8_t {
	LOGARITHMIC = 0,
	LINEAR = 1,
	NONE = 2,
	ERaDistanceRolloffModel_MAX = 3,
};

enum class EClusterUnionMethod : uint8_t {
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None = 4,
	EClusterUnionMethod_MAX = 5,
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

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
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

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
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

enum class ECharacterAppearanceType : uint8_t {
	Invalid = 0,
	Common = 1,
	AppearanceKit = 2,
	FashionKit = 3,
	Max = 4,
};

enum class GoodsSellerType : uint8_t {
	GoodsSellerInValid = 0,
	HuangJinZei = 1,
	HanJun = 2,
	LiuMin = 3,
	ShuiZei = 4,
	Robber = 5,
	Hunter = 6,
	GoodsSellerType_MAX = 7,
};

enum class EWeatherType : uint8_t {
	Sunny = 0,
	Cloudy = 1,
	Fog = 2,
	DenseFog = 3,
	OvercastSky = 4,
	LightRain = 5,
	HeavyRain = 6,
	StormRain = 7,
	LightSnow = 8,
	HeavySnow = 9,
	StormSnow = 10,
	Miasm = 11,
	MiasmOutbreak = 12,
	HotWave = 13,
	SandStorm = 14,
	ThunderStorm = 15,
	Max = 16,
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

enum class Enum_RT_Quality_Preset : uint8_t {
	NewEnumerator4 = 0,
	NewEnumerator7 = 1,
	NewEnumerator6 = 2,
	NewEnumerator5 = 3,
	NewEnumerator0 = 4,
	NewEnumerator1 = 5,
	NewEnumerator2 = 6,
	NewEnumerator3 = 7,
	Enum_RT_Quality_MAX = 8,
};

enum class EAnimSyncGroupScope : uint8_t {
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class EOffsetMeshToolOffsetType : uint8_t {
	Iterative = 0,
	Implicit = 1,
	EOffsetMeshToolOffsetType_MAX = 2,
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

enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2,
};

enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class EAnimSkillVaulting : uint8_t {
	Climb = 0,
	Jump = 1,
	Slide = 2,
	Narrow = 3,
	EAnimSkillVaulting_MAX = 4,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
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

enum class ELocationZToSpawnEnum : uint8_t {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ENiagaraRibbonFacingMode : uint8_t {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3,
};

enum class EARSceneReconstruction : uint8_t {
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EAnimalAggressionType : uint8_t {
	Aggressive = 0,
	RunAway = 1,
	Max = 2,
};

enum class EGameServerState : uint8_t {
	SERVER_STATE_UNKONWN = 0,
	SERVER_STATE_IDLE = 1,
	SERVER_STATE_REQUESTING = 2,
	SERVER_STATE_LOADINGPUBDATA = 3,
	SERVER_STATE_CHECKPLAERVERSION = 4,
	SERVER_STATE_OPENED = 5,
	SERVER_STATE_DOING = 6,
	SERVER_STATE_CLOSING = 7,
	SERVER_STATE_SHUTDOWN = 8,
	SERVER_STATE_SERVERTRAVELING = 9,
	SERVER_STATE_MAX = 10,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
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

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
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

enum class ENiagaraVariantMode : uint8_t {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class EBattleType : uint8_t {
	BATTLE_TYPE_BIGWORLD = 0,
	BATTLE_TYPE_XIANCHENG = 1,
	BATTLE_TYPE_TAISHOU = 2,
	BATTLE_TYPE_GUANAI = 3,
	BATTLE_TYPE_HORSEBATTLE = 4,
	BATTLE_TYPE_MAX = 5,
};

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
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

enum class EBitmapHeaderVersion : uint8_t {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5,
};

enum class ENiagaraMeshLockedAxisSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

enum class EBattleGroundMusicState : uint8_t {
	Perpare = 0,
	Playing = 1,
	AttackWillSuccess = 2,
	DefenseWillSuccess = 3,
	AttackSuccess = 4,
	DefenseSuccess = 5,
	EBattleGroundMusicState_MAX = 6,
};

enum class EGuildEventModifyType : uint8_t {
	EVENT_MODIFY_TYPE_KILLPLAYER = 0,
	EVENT_MODIFY_TYPE_PLAYERKILL = 1,
	EVENT_MODIFY_TYPE_AUTO = 2,
	EVENT_MODIFY_TYPE_TAMESUCCESS = 3,
	EVENT_MODIFY_TYPE_WARN = 4,
	EVENT_MODIFY_TYPE_DECLAREWAR = 5,
	EVENT_MODIFY_TYPE_STARTEVENT = 6,
	EVENT_MODIFY_TYPE_ENDEVENTTARGETDEAD = 7,
	EVENT_MODIFY_TYPE_ENDEVENTBEKILLED = 8,
	EVENT_MODIFY_TYPE_ENDEVENTTIMEOUT = 9,
	EVENT_MODIFY_TYPE_ENDEVENTRANSOM = 10,
	EVENT_MODIFY_TYPE_ENDEVENTDAMAGE = 11,
	EVENT_MODIFY_TYPE_ENDEVENTDEMOLISH = 12,
	EVENT_MODIFY_TYPE_ENDEVENTERROR = 13,
	EVENT_MODIFY_TYPE_GM = 14,
	EVENT_MODIFY_TYPE_OCCUPY = 15,
	EVENT_MODIFY_TYPE_MAX = 16,
};

enum class EFlagOccupyType : uint8_t {
	OccupyType_PingPang = 0,
	OccupyType_Reset = 1,
	OccupyType_MAX = 2,
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

enum class EQuestRewardType : uint8_t {
	None = 0,
	Exp = 1,
	PerkPoint = 2,
	SkillPoint = 3,
	Item = 4,
	GongXun = 5,
	GuildActivityPoint = 6,
	SeasonExp = 7,
	SeasonCapital = 8,
	CapitalGold = 9,
	CapitalSilver = 10,
	CapitalCopper = 11,
	Max = 12,
};

enum class EClassRepNodeMapping : uint8_t {
	None = 0,
	NotRouted = 1,
	RelevantAllConnections = 2,
	Spatialize_Static = 3,
	Spatialize_Dynamic = 4,
	Spatialize_Dormancy = 5,
	AlwaysRelevant_Dormancy = 6,
	EClassRepNodeMapping_MAX = 7,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class EAlignObjectsBoxPoint : uint8_t {
	Center = 0,
	Bottom = 1,
	Top = 2,
	Left = 3,
	Right = 4,
	Front = 5,
	Back = 6,
	Min = 7,
	Max = 8,
};

enum class ERadarChartBlendMode : uint8_t {
	Opaque = 0,
	Translucent = 1,
	Additive = 2,
	ERadarChartBlendMode_MAX = 3,
};

enum class ESceneSnapQueryType : uint8_t {
	Position = 0,
	Rotation = 1,
	ESceneSnapQueryType_MAX = 2,
};

enum class EAnimalsBehaviorType : uint8_t {
	Default = 0,
	Eat = 1,
	Drink = 2,
	EAnimalsBehaviorType_MAX = 3,
};

enum class ENewsNotifyType : uint8_t {
	NONE = 0,
	NEWS_GETPLAYER = 1,
	NEWS_APPENDPLAYER = 2,
	NEWS_REMOVEPLAYER = 3,
	NEWS_CLEARPLAYER = 4,
	ENewsNotifyType_MAX = 5,
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

enum class ESceneSnapQueryTargetType : uint8_t {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 3,
	All = 4,
	ESceneSnapQueryTargetType_MAX = 5,
};

enum class EAnimAlphaInputType : uint8_t {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3,
};

enum class EGroomGeometryType : uint8_t {
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3,
};

enum class EInertializationState : uint8_t {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3,
};

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class EAISenseSightRadiusType : uint8_t {
	Close = 0,
	Middle = 1,
	Far = 2,
	Max = 3,
};

enum class EDebugTypeEnum : uint8_t {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3,
};

enum class EActiveSkillResponse : uint8_t {
	ACTIVESKILL_RESPONSE_SUCCESS = 0,
	ACTIVESKILL_RESPONSE_ASYNCWAITING = 1,
	ACTIVESKILL_RESPONSE_NO_AUTHORITY = 2,
	ACTIVESKILL_RESPONSE_HAVE_ACTIVE = 3,
	ACTIVESKILL_RESPONSE_EXP = 4,
	ACTIVESKILL_RESPONSE_CAPITAL = 5,
	ACTIVESKILL_RESPONSE_FAILED = 6,
	ACTIVESKILL_RESPONSE_MAX = 7,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EDoRoadPathType : uint8_t {
	None = 0,
	TurnTo = 1,
	MoveToNextLoc = 2,
	WaitStopMove = 3,
	Waiting = 4,
	Max = 5,
};

enum class EMontageSubStepResult : uint8_t {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class ESetCollisionGeometryInputMode : uint8_t {
	CombineAll = 0,
	PerInputObject = 1,
	PerMeshComponent = 2,
	PerMeshGroup = 3,
	ESetCollisionGeometryInputMode_MAX = 4,
};

enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4,
};

enum class EDisplaceMeshToolDisplaceType : uint8_t {
	Constant = 0,
	RandomNoise = 1,
	PerlinNoise = 2,
	DisplacementMap = 3,
	SineWave = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5,
};

enum class EGameplayAbilityActivationMode : uint8_t {
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	Rejected = 4,
	EGameplayAbilityActivationMode_MAX = 5,
};

enum class EGameplayCueEvent : uint8_t {
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4,
};

enum class ETaiShouRoundType : uint8_t {
	TAISHOU_ROUND_TYPE_INVALID = 0,
	TAISHOU_ROUND_TYPE_SIGNUP = 1,
	TAISHOU_ROUND_TYPE_ONE = 2,
	TAISHOU_ROUND_TYPE_TWO = 3,
	TAISHOU_ROUND_TYPE_THREE = 4,
	TAISHOU_ROUND_TYPE_FOUR = 5,
	TAISHOU_ROUND_TYPE_WAITFINISH = 6,
	TAISHOU_ROUND_TYPE_MAX = 7,
};

enum class EXRSystemFlags : uint8_t {
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 3,
	SupportsHandTracking = 4,
	EXRSystemFlags_MAX = 5,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EIplSpatializationMethod : uint8_t {
	PANNING = 0,
	HRTF = 1,
	EIplSpatializationMethod_MAX = 2,
};

enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
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

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
};

enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class EDynamicMeshTangentCalcType : uint8_t {
	NoTangents = 0,
	AutoCalculated = 1,
	ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType_MAX = 3,
};

enum class EBakedCurvatureClampMode : uint8_t {
	None = 0,
	Positive = 1,
	Negative = 2,
	EBakedCurvatureClampMode_MAX = 3,
};

enum class EChaosWeightMapTarget : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EChaosWeightMapTarget_MAX = 5,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class ELightUnits : uint8_t {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class ETranslucencyType : uint8_t {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2,
};

enum class ESmoothMeshToolSmoothType : uint8_t {
	Iterative = 0,
	Implicit = 1,
	Diffusion = 2,
	ESmoothMeshToolSmoothType_MAX = 3,
};

enum class ENiagaraScriptContextStaticSwitch : uint8_t {
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

enum class EMagicLeapImageTargetStatus : uint8_t {
	Tracked = 0,
	Unreliable = 1,
	NotTracked = 2,
	EMagicLeapImageTargetStatus_MAX = 3,
};

enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class ERefPosePluginEnum : uint8_t {
	VE_Animated = 0,
	VE_Rest = 1,
	VE_MAX = 2,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class GoodsSellerBusinessType : uint8_t {
	Recycle = 0,
	Sell = 1,
	Refuse = 2,
	GoodsSellerBusinessType_MAX = 3,
};

enum class EItemSubType : uint8_t {
	None = 0,
	FishBait = 1,
	FishPod = 2,
	HorseFood = 3,
	HorseReins = 4,
	Weapon_OneHanded_Axe = 5,
	Weapon_OneHanded_Sword = 6,
	Weapon_OneHanded_Hammer = 7,
	Weapon_TwoHanded_Axe = 8,
	Weapon_TwoHanded_Sword = 9,
	Weapon_TwoHanded_Hammer = 10,
	Weapon_Polearms_Axe = 11,
	Weapon_Polearms_Sword = 12,
	Weapon_Polearms_Hammer = 13,
	Weapon_Bow = 14,
	Weapon_Crossbow = 15,
	Weapon_Bullet = 16,
	Weapon_Throw = 17,
	Weapon_Shield_And_OffHand = 18,
	Weapon_Tool = 19,
	Equipment_Light_Armor = 20,
	Equipment_Light_Breastplate = 21,
	Equipment_Light_Leggings = 22,
	Equipment_Heavy_Armor = 23,
	Equipment_Heavy_Breastplate = 24,
	Equipment_Heavy_Leggings = 25,
	Equipment_Horse_Saddle = 26,
	Equipment_Horse_Armor = 27,
	Resource_Basis = 28,
	Resource_Composite = 29,
	Resource_Crop_And_Seed = 30,
	Resource_Blueprint = 31,
	Structure_Ground = 32,
	Structure_Wall = 33,
	Structure_Ceiling = 34,
	Structure_Door_And_Window = 35,
	Structure_Pillar = 36,
	Structure_Other = 37,
	SiegeMachine_Ammo = 38,
	SiegeMachine_Machine = 39,
	Consumable_Food = 40,
	Consumable_Drug = 41,
	Consumable_Wine = 42,
	Consumable_Feed = 43,
	Consumable_Other = 44,
	Resource_Stone = 45,
	Resource_Wood = 46,
	Resource_Bone = 47,
	Resource_Leather = 48,
	Consumable_SkillExpBook = 49,
	Consumable_PublicExpBook = 50,
	Weapon_Telescope = 51,
	Consumable_TreasureBox = 52,
	Consumable_Fireworks = 53,
	EItemSubType_MAX = 54,
};

enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};

enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EGameHelpTipsType : uint8_t {
	Empty = 0,
	Weapon = 1,
	ShooterWeapon = 2,
	SeatStructure = 3,
	Ride = 4,
	RideTaming = 5,
	WillDead = 6,
	CarryUp = 7,
	FishPod = 8,
	RideAnimalVehicle = 9,
	MAX = 10,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
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

enum class ENotifyDamageModify : uint8_t {
	TakeDamageBegin = 0,
	DamageBody = 1,
	AttackMulAdd = 2,
	BeDamageDivisionAdd = 3,
	OriginalDamage = 4,
	Rule = 5,
	Body = 6,
	Armor = 7,
	ReductionRate = 8,
	SkillReduction = 9,
	HPDeepened = 10,
	SpecialTarget = 11,
	AnimalReduceMulAdd = 12,
	HuntingMulAdd = 13,
	FriendMulti = 14,
	SiegeDamageMulAdd = 15,
	ProjectileDamageMulAdd = 16,
	HuangLiMulti = 17,
	ServerMulti = 18,
	SeniorHunter = 19,
	StructureDamageMulti = 20,
	PVEDamageMul = 21,
	TakeOneDamage = 22,
	FinalDamage = 23,
	ProjectileDistanceAttenuation = 24,
	Max = 25,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

enum class EGameServerDistrictId : uint8_t {
	SERVER_STATE_DISTRICTID_UNKNOWN = 0,
	SERVER_STATE_DISTRICTID_CHINA = 1,
	SERVER_STATE_DISTRICTID_ASIA = 2,
	SERVER_STATE_DISTRICTID_EURO = 3,
	SERVER_STATE_DISTRICTID_AMERICA = 4,
	SERVER_STATE_DISTRICTID_MAX = 5,
};

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EEdgeLoopPositioningMode : uint8_t {
	Even = 0,
	ProportionOffset = 1,
	DistanceOffset = 2,
	EEdgeLoopPositioningMode_MAX = 3,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class EGameplayEffectStackingDurationPolicy : uint8_t {
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	AdditiveFromBase = 4,
	EMovieSceneBlendType_MAX = 5,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
};

enum class EMagicLeapPlaneQueryType : uint8_t {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2,
};

enum class ENavFindPathResult : uint8_t {
	ENavFindPathResult_Failed = 0,
	ENavFindPathResult_Partial = 1,
	ENavFindPathResult_Success = 2,
	ENavFindPathResult_Already = 3,
	ENavFindPathResult_MAX = 4,
};

enum class EAmmoType : uint8_t {
	None = 0,
	BowAmmo = 1,
	CrossBowAmmo = 2,
	HeavyCrossBowAmmo = 3,
	BallistaAmmo = 4,
	BallistaStrongAmmo = 5,
	BallistaMultipleAmmo = 6,
	BallistaHugeAmmo = 7,
	TurretAmmo = 8,
	TurretBigAmmo = 9,
	TurretMulityAmmo = 10,
	FireOilJarAmmo = 11,
	WatchTowerAmmo = 12,
	MAX = 13,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EMsgRecordType : uint8_t {
	Base = 0,
	Dead = 1,
	GuildDead = 2,
	Kill = 3,
	GuildKill = 4,
	WillDead = 5,
	GuildWillDead = 6,
	TameSuccess = 7,
	StructureBannerCreate = 8,
	StructureBannerEffectOwner = 9,
	StructureBannerEffectOther = 10,
	CarriedUp = 11,
	Drop = 12,
	LeaveServer = 13,
	EnterServer = 14,
	GetXianChengOwner = 15,
	LoseXianChengOwner = 16,
	Max = 17,
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

enum class EQuartzCommandDelegateSubType : uint8_t {
	CommandOnFailedToQueue = 0,
	CommandOnQueued = 1,
	CommandOnCanceled = 2,
	CommandOnAboutToStart = 3,
	CommandOnStarted = 4,
	Count = 5,
	EQuartzCommandDelegateSubType_MAX = 6,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
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

enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

enum class ENShopPropsActivity : uint8_t {
	NShop_Props_NoActivity = 0,
	NShop_Props_Discount = 1,
	NShop_Props_HotSale = 2,
	NShop_Props_TimeLimit = 3,
	NShop_Props_MAX = 4,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class EResourceType : uint8_t {
	None = 0,
	MineResLv1 = 1,
	MineResLv2 = 2,
	MineResLv3 = 3,
	MineResLv4 = 4,
	LumberResLv1 = 5,
	LumberResLv2 = 6,
	LumberResLv3 = 7,
	LumberResLv4 = 8,
	HuntResLv1 = 9,
	HuntResLv2 = 10,
	HuntResLv3 = 11,
	HuntResLv4 = 12,
	PlantResLv1 = 13,
	PlantResLv2 = 14,
	PlantResLv3 = 15,
	PlantResLv4 = 16,
	PlantSeedLv1 = 17,
	PlantSeedLv2 = 18,
	PlantSeedLv3 = 19,
	PlantSeedLv4 = 20,
	HerbResLv1 = 21,
	HerbResLv2 = 22,
	HerbResLv3 = 23,
	HerbResLv4 = 24,
	Max = 25,
};

enum class EEquipmentType : uint8_t {
	EQUIPMENT_TYPE_DECORATE = 0,
	EQUIPMENT_TYPE_ARMOR = 1,
	EQUIPMENT_TYPE_MAX = 2,
};

enum class EWeatherTransitionPhase : uint8_t {
	StartPhase = 0,
	LoopPhase = 1,
	EndPhase = 2,
	Max = 3,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class EHorizonUIInputMode : uint8_t {
	Invalidated = 0,
	GameAndUI = 1,
	UIOnly = 2,
	GameOnly = 3,
	EHorizonUIInputMode_MAX = 4,
};

enum class EConcurrencyVolumeScaleMode : uint8_t {
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3,
};

enum class ENiagaraLegacyTrailWidthMode : uint8_t {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};

enum class ENiagaraPlatformSetState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4,
};

enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EDamageType : uint8_t {
	Slashing = 0,
	Piercing = 1,
	Crushing = 2,
	Siege = 3,
	MAX = 4,
};

enum class TrafficGoodsMode : uint8_t {
	TrafficGoods_Invalid = 0,
	TrafficGoods_Sell = 1,
	TrafficGoods_Recycle = 2,
	TrafficGoods_MAX = 3,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class EDataSourceTypeEnum : uint8_t {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3,
};

enum class EAudioVolumeLocationState : uint8_t {
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4,
};

enum class EMateErrorType : uint8_t {
	NoError = 0,
	Unknown_Error_Type = 1,
	Selected_Error_Type = 2,
	FemaleCantMate_Error_Type = 3,
	MaleCantMate_Error_Type = 4,
	FemaleWild_Error_Type = 5,
	MaleWild_Error_Type = 6,
	Sex_Error_Type = 7,
	FemaleAge_Error_Type = 8,
	MaleAge_Error_Type = 9,
	FemaleLifeCount_Error_Type = 10,
	MaleLifeCount_Error_Type = 11,
	Castrated_Error_Type = 12,
	FemaleDead_Error_Type = 13,
	MaleDead_Error_Type = 14,
	FemaleReborning_Error_Type = 15,
	MaleReborning_Error_Type = 16,
	FemaleStunned_Error_Type = 17,
	MaleStunned_Error_Type = 18,
	Pregnancy_Error_Type = 19,
	FemaleWander_Error_Type = 20,
	MaleWander_Error_Type = 21,
	FemaleTraining_Error_Type = 22,
	MaleTraining_Error_Type = 23,
	FemaleHasTrainReward_Error_Type = 24,
	MaleHasTrainReward_Error_Type = 25,
	FemaleFollow_Error_Type = 26,
	MaleFollow_Error_Type = 27,
	FemaleHasRider_Error_Type = 28,
	MaleHasRider_Error_Type = 29,
	FemaleFlee_Error_Type = 30,
	MaleFlee_Error_Type = 31,
	MaleCD_Error_Type = 32,
	FemaleMating_Error_Type = 33,
	MaleMating_Error_Type = 34,
	Owner_Error_Type = 35,
	Authority_Error_Type = 36,
	AnimalType_Error_Type = 37,
	SameSex_Error_Type = 38,
	SeatStructure_Error_Type = 39,
	Dist_Error_Type = 40,
	MaleNetData_Error_Type = 41,
	FemaleNetData_Error_Type = 42,
	Max_Error_Type = 43,
	EMateErrorType_MAX = 44,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class EWeightMapTargetCommon : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5,
};

enum class DBLogRoleType : uint8_t {
	DBLogRoleType_InValid = 0,
	DBLogRoleType_Player = 1,
	DBLogRoleType_Horse = 2,
	DBLogRoleType_General = 3,
	DBLogRoleType_Guild = 4,
	DBLogRoleType_Rhinoceros = 5,
	DBlogRoleType_Elephant = 6,
	DBLogRoleType_MAX = 7,
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

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EShooterWeaponType : uint8_t {
	None = 0,
	Bow = 1,
	CrossBow = 2,
	OneHandCrossBow = 3,
	Max = 4,
};

enum class ECPGType : uint8_t {
	CPGType_Normal = 0,
	CPGType_DLC = 1,
	CPGType_MAX = 2,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
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

enum class EWeaponEquipState : uint8_t {
	None = 0,
	Equip = 1,
	Holster = 2,
	EWeaponEquipState_MAX = 3,
};

enum class EMeshFacesColorMode : uint8_t {
	None = 0,
	ByGroup = 1,
	ByMaterialID = 2,
	ByUVIsland = 3,
	EMeshFacesColorMode_MAX = 4,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class ELuminComponentSubElementType : uint8_t {
	FileExtension = 0,
	MimeType = 1,
	Mode = 2,
	MusicAttribute = 3,
	Schema = 4,
	ELuminComponentSubElementType_MAX = 5,
};

enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class EMovingStartType : uint8_t {
	NoneStart = 0,
	Start = 1,
	EMovingStartType_MAX = 2,
};

enum class EMagicLeapEyeTrackingStatus : uint8_t {
	NotConnected = 0,
	Disabled = 1,
	UserNotPresent = 2,
	UserPresent = 3,
	UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5,
};

enum class EGeneralShortCutSlotType : uint8_t {
	Move = 0,
	Formation = 1,
	AttackMode = 2,
	ToggleMount = 3,
	AttackTarget = 4,
	Aggression = 5,
	SenseSight = 6,
	Rescue = 7,
	Move_Location = 8,
	Move_FollowMe = 9,
	Move_FreeAttack = 10,
	Move_KeepInPlace = 11,
	Formation_2 = 12,
	Formation_3 = 13,
	Formation_4 = 14,
	ShooterAttackMode = 15,
	MeleeAttackMode = 16,
	AutoAttackMode = 17,
	Mount = 18,
	DisMount = 19,
	AggressionAggressive = 20,
	AggressionNeutral = 21,
	AggressionPassive = 22,
	AggressionRunAway = 23,
	SenseSight_Close = 24,
	SenseSight_Middle = 25,
	SenseSight_Far = 26,
	Esc = 27,
	Max = 28,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EDrawPolyPathExtrudeDirection : uint8_t {
	SelectionNormal = 0,
	WorldX = 1,
	WorldY = 2,
	WorldZ = 3,
	LocalX = 4,
	LocalY = 5,
	LocalZ = 6,
	EDrawPolyPathExtrudeDirection_MAX = 7,
};

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
};

enum class EVehiclePerkQualityType : uint8_t {
	VEHICLEPERKQUALITY_None = 0,
	VEHICLEPERKQUALITY_GREEN = 1,
	VEHICLEPERKQUALITY_BLUE = 2,
	VEHICLEPERKQUALITY_Purple = 3,
	VEHICLEPERKQUALITY_ORANGE = 4,
	VEHICLEPERKQUALITY_RED = 5,
	VEHICLEPERKQUALITY_MAX = 6,
};

enum class EARFaceTransformMixing : uint8_t {
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4,
};

enum class EEditPivotToolActions : uint8_t {
	NoAction = 0,
	Center = 1,
	Bottom = 2,
	Top = 3,
	Left = 4,
	Right = 5,
	Front = 6,
	Back = 7,
	EEditPivotToolActions_MAX = 8,
};

enum class EStructureOccupyOperation : uint8_t {
	StructureOccupy_DecayEffect = 0,
	StructureOccupy_CantBeAttackEffect = 1,
	StructureOccupy_SetProtectTime = 2,
	StructureOccupy_MAX = 3,
};

enum class EAllianceKickOutResponse : uint8_t {
	ALLIANCEKICKOUT_RESPONSE_SUCCESS = 0,
	ALLIANCEKICKOUT_RESPONSE_NO_AUTHORITY = 1,
	ALLIANCEKICKOUT_RESPONSE_NOTFOUND = 2,
	ALLIANCEKICKOUT_RESPONSE_ASYNCWAITING = 3,
	ALLIANCEKICKOUT_RESPONSE_NO_HIDEALLIANCEOWNER = 4,
	ALLIANCEKICKOUT_RESPONSE_FAILED = 5,
	ALLIANCEKICKOUT_RESPONSE_MAX = 6,
};

enum class ESplitNormalMethod : uint8_t {
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	PerTriangle = 3,
	PerVertex = 4,
	ESplitNormalMethod_MAX = 5,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class ESpawnLocationType : uint8_t {
	Bed = 0,
	PlayerStart = 1,
	ESpawnLocationType_MAX = 2,
};

enum class EHoleFillOpFillType : uint8_t {
	TriangleFan = 0,
	PolygonEarClipping = 1,
	Planar = 2,
	Minimal = 3,
	Smooth = 4,
	EHoleFillOpFillType_MAX = 5,
};

enum class ENiagaraMeshFacingMode : uint8_t {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4,
};

enum class EAudioRecordingExportType : uint8_t {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2,
};

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
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

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4,
};

enum class EAnimalFarmRecordType : uint8_t {
	ANIMALFARMRECORD_TYPE_BIRTH = 0,
	ANIMALFARMRECORD_TYPE_DEATH = 1,
	ANIMALFARMRECORD_TYPE_GROW = 2,
	ANIMALFARMRECORD_TYPE_TOOMUCH = 3,
	ANIMALFARMRECORD_TYPE_ENVIRONMENTBAD = 4,
	ANIMALFARMRECORD_TYPE_FOODSTARVATION = 5,
	ANIMALFARMRECORD_TYPE_FOODEMPTY = 6,
	ANIMALFARMRECORD_TYPE_MAX = 7,
};

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4,
};

enum class ECollisionGeometryMode : uint8_t {
	Default = 0,
	SimpleAndComplex = 1,
	UseSimpleAsComplex = 2,
	UseComplexAsSimple = 3,
	ECollisionGeometryMode_MAX = 4,
};

enum class EDBSubLogTypeItem : uint8_t {
	DBSubLogItem_Create = 0,
	DBSubLogItem_Move = 1,
	DBSubLogItem_Consume = 2,
	DBSubLogItem_MAX = 3,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
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

enum class EGameplayAbilityTriggerSource : uint8_t {
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3,
};

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class ECollisionLimitType : uint8_t {
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Planar = 3,
	SkeletalMeshComponent = 4,
	ECollisionLimitType_MAX = 5,
};

enum class ESyncOption : uint8_t {
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3,
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

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
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

enum class EInventoryFunctionButtonType : uint8_t {
	Arrange = 0,
	DropAll = 1,
	Switch = 2,
	Drop = 3,
	SwitchOne = 4,
	ShowWeight = 5,
	StopShowWeight = 6,
	MAX = 7,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EDoSleepType : uint8_t {
	None = 0,
	WaitingMontageStop = 1,
	MoveToFar = 2,
	MoveToClose = 3,
	WaitStopMove = 4,
	TurnTo = 5,
	WaitingToggleStanceType = 6,
	Sleeping = 7,
	Max = 8,
};

enum class EHairCardsGenerationType : uint8_t {
	CardsCount = 0,
	UseGuides = 1,
	EHairCardsGenerationType_MAX = 2,
};

enum class EVehiclePerkSlotType : uint8_t {
	VEHICLEPERKSLOT_FORBIDPLACE = 0,
	VEHICLEPERKSLOT_ALLOWPLACE = 1,
	VEHICLEPERKSLOT_SPECIAL = 2,
	VEHICLEPERKSLOT_REALNAME = 3,
	VEHICLEPERKSLOT_RECESSIVE = 4,
	VEHICLEPERKSLOT_MAX = 5,
};

enum class EDBLogPropChangeType : uint8_t {
	Minus = 0,
	Add = 1,
	Undefined = 2,
	EDBLogPropChangeType_MAX = 3,
};

enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
};

enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t {
	None = 0,
	Bad = 1,
	Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
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

enum class ESkillType : uint8_t {
	OneHandedWeapons = 0,
	Shields = 1,
	TowHandedWeapons = 2,
	Polearms = 3,
	HeavyArmors = 4,
	Throwing = 5,
	Archery = 6,
	Crossbows = 7,
	Riding = 8,
	LightArmors = 9,
	Physique = 10,
	Mining = 11,
	Lumbering = 12,
	Hunting = 13,
	Planting = 14,
	HandMaking = 15,
	SiegeWorking = 16,
	Building = 17,
	Armorer = 18,
	Herb = 19,
	LeaderShip = 20,
	Training = 21,
	Recruit = 22,
	Taming = 23,
	Renown = 24,
	OccupyProtect = 25,
	OccupyLimitPrice = 26,
	GuildMining = 27,
	GuildLumbering = 28,
	GuildCollectSand = 29,
	GuildFood = 30,
	OccupyBuff = 31,
	GuildShopItem = 32,
	GuildStoreInventoryMaxAmount = 33,
	OccupyMaxLevel = 34,
	OccupyLimitNum = 35,
	RescueTime = 36,
	GuildStoreMaxAmount = 37,
	OccupyMaxAmount = 38,
	GuildMaxMember = 39,
	OneHandedWeaponsDurableMultiAdd = 40,
	TowHandedWeaponsDurableMultiAdd = 41,
	ShieldsDurableMultiAdd = 42,
	PolearmsDurableMultiAdd = 43,
	ArcheryDurableMultiAdd = 44,
	CrossbowsDurableMultiAdd = 45,
	SiegeDurableMultiAdd = 46,
	LightArmorDurableResMulAdd = 47,
	HeavyArmorDurableResMulAdd = 48,
	TransportCDAdd = 49,
	OccupyStructureNumAdd = 50,
	Max = 51,
};

enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class ECameraShakeUpdateResultFlags : uint8_t {
	ApplyAsAbsolute = 0,
	SkipAutoScale = 1,
	SkipAutoPlaySpace = 2,
	Default = 3,
	ECameraShakeUpdateResultFlags_MAX = 4,
};

enum class EDoIdleType : uint8_t {
	None = 0,
	WaitingLastToggleStanceType = 1,
	WaitingToggleStanceType = 2,
	Idling = 3,
	WaitingToggleStand = 4,
	Max = 5,
};

enum class EIplRayTracerType : uint8_t {
	PHONON = 0,
	EMBREE = 1,
	RADEONRAYS = 2,
	EIplRayTracerType_MAX = 3,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class EChunkDataStateType : uint8_t {
	ChunkDataStateType_Level = 0,
	ChunkDataStateType_DB = 1,
	ChunkDataStateType_GuildStore = 2,
	ChunkDataStateType_MAX = 3,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	IgnoreZAccumulate = 2,
	ERootMotionSourceSettingsFlags_MAX = 3,
};

enum class EGuildDeductZhanLiResponse : uint8_t {
	DEDUCTZHANLI_RESPONSE_SUCCESS = 0,
	DEDUCTZHANLI_RESPONSE_ASYNCWAITING = 1,
	DEDUCTZHANLI_RESPONSE_NOT_ENOUGH = 2,
	DEDUCTZHANLI_RESPONSE_FAILED = 3,
	DEDUCTZHANLI_RESPONSE_MAX = 4,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
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

enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8_t {
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4,
};

enum class ENotifySoundPlayMode : uint8_t {
	ALL = 0,
	SIMULATED_PROXY = 1,
	AUTONOMUS_PROXY = 2,
	ENotifySoundPlayMode_MAX = 3,
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

enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

enum class EAimTipsDirection : uint8_t {
	LU = 0,
	U = 1,
	RU = 2,
	L = 3,
	C = 4,
	R = 5,
	LD = 6,
	D = 7,
	RD = 8,
	MAX = 9,
};

enum class DBLogAnimalFarmEvent : uint8_t {
	Invalid = 0,
	OutputItem = 1,
	AnimalBorn = 2,
	AnimalDead = 3,
	PutAnimalIn = 4,
	DBLogAnimalFarmEvent_MAX = 5,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class EPolyEditCutPlaneOrientation : uint8_t {
	FaceNormals = 0,
	ViewDirection = 1,
	EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class EXingXiuType : uint8_t {
	None = 0,
	WeiYueYan = 1,
	ShiHuoZhu = 2,
	BiShuiYu = 3,
	KuiMuLang = 4,
	LouJinGou = 5,
	WeiTuZhi = 6,
	MaoRiJi = 7,
	BiYueWu = 8,
	ZiHuoHou = 9,
	CanShuiYuan = 10,
	JingMuHan = 11,
	GuiJinYang = 12,
	LiuTuZhang = 13,
	XingRiMa = 14,
	ZhangYueLu = 15,
	YiHuoShe = 16,
	ZhenShuiYin = 17,
	JiaoMuJiao = 18,
	KangJinLong = 19,
	DiTuMo = 20,
	FangRiTu = 21,
	XinYueHu = 22,
	WeiHuoHu = 23,
	JiShuiBao = 24,
	DouMuXie = 25,
	NiuJinNiu = 26,
	NvTuFu = 27,
	XuRiShu = 28,
	Max = 29,
};

enum class EAttachType : uint8_t {
	AT_Self = 0,
	AT_Location = 1,
	AT_Actor = 2,
	AT_MAX = 3,
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

enum class EIKTraceType : uint8_t {
	ENUM_LineTraceType = 0,
	ENUM_SphereTraceType = 1,
	ENUM_BoxTraceType = 2,
	ENUM_MAX = 3,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EDoFeedType : uint8_t {
	None = 0,
	MoveTo = 1,
	WaitStopMove = 2,
	TurnTo = 3,
	Feeding = 4,
	EndFeed = 5,
	Max = 6,
};

enum class EToolTipsItemType : uint8_t {
	Durable = 0,
	Weight = 1,
	Amount = 2,
	Quality = 3,
	SlashingDamage = 4,
	PiercingDamage = 5,
	CrushingDamage = 6,
	SiegeDamage = 7,
	AttackSpeed = 8,
	SprintDamageMulti = 9,
	SpeedEffectDamageMulti = 10,
	ArmorDamagePercent = 11,
	SheildDamagePercent = 12,
	HPDamagePercent = 13,
	WeaponDamagePercent = 14,
	OnMountDamageMulti = 15,
	AssistantDamagePunish = 16,
	SpeedPunish = 17,
	AdditionalEffect = 18,
	ForgeNum = 19,
	ForgeAddATKPercent = 20,
	SlashingArmor = 21,
	PiercingArmor = 22,
	CrushingArmor = 23,
	SiegeArmor = 24,
	ChargeRes = 25,
	Charge = 26,
	StructureHP = 27,
	Description = 28,
	Blueprint = 29,
	RequiredCraftPoints = 30,
	CraftPerkEntries = 31,
	PerkEntries = 32,
	RequiredGuildLevel = 33,
	SaveTime = 34,
	BaoZangPositionIndex = 35,
	Level = 36,
	BaoZangType = 37,
	SiegeCanMove = 38,
	SeatNum = 39,
	SiegeCanNPCAIControl = 40,
	ProjectileDamageType = 41,
	DamageDistance = 42,
	TrapDistance = 43,
	ProjectilePierceness = 44,
	CanUseAmmoType = 45,
	SiegeAttackHPConsume = 46,
	Scattering = 47,
	EffectiveRange = 48,
	YueDanPingPoint = 49,
	YueDanPingExpireRate = 50,
	SkillLevelPunish = 51,
	NeedSkillLevel = 52,
	RecommendationLevel = 53,
	Tenacity = 54,
	FishingPodCastDist = 55,
	FishingPodCatchRatio = 56,
	ShopPrice = 57,
	HorseFoodHorseQuality = 58,
	HorseFoodAddHunger = 59,
	HorseFoodAddStun = 60,
	HorseFoodAddHealth = 61,
	HorseFoodAddTame = 62,
	HorseFoodAddExp = 63,
	HorseReinsHorseQuality = 64,
	HorseSaddleAddInventoryAmount = 65,
	FoodBoxMaxAmount = 66,
	FoodBox = 67,
	GuildCheck = 68,
	StructureDamagePercent = 69,
	CraftStructure = 70,
	MoveSeatWeightMul = 71,
	ResistanceHot = 72,
	ResistanceCold = 73,
	ResistancePoison = 74,
	TrafficGoodsSeller = 75,
	TrafficGoodsRecycler = 76,
	Strengthen_Durable = 77,
	Strengthen_Count = 78,
	Strengthen_DurablePCT = 79,
	ExpireTime = 80,
	AppraisalDis = 81,
	DurationTime = 82,
	NeedSoilLoose = 83,
	WaterConsumed = 84,
	NFertilizerConsumed = 85,
	PFertilizerConsumed = 86,
	KFertilizerConsumed = 87,
	AuctionShopLockTime = 88,
	TrapAnimalLevel = 89,
	TrapAnimalSex = 90,
	SkillBookAddExpValue = 91,
	SkillBookLimit = 92,
	StructureTransformType = 93,
	AddCraftQuantityItem = 94,
	CollectionDamage = 95,
	Max = 96,
};

enum class EMontageCustomBindType : uint8_t {
	None = 0,
	Turn = 1,
	MovingTurn = 2,
	Hit = 3,
	BlockHit = 4,
	Equip = 5,
	UnEquip = 6,
	EquipAnother = 7,
	Block = 8,
	Attack = 9,
	ShooterAttack = 10,
	CancelAttack = 11,
	Interaction = 12,
	Sleep = 13,
	Stun = 14,
	Death = 15,
	Neigh = 16,
	Rider = 17,
	RiderAttack = 18,
	Mount = 19,
	Dismount = 20,
	ShooterBlock = 21,
	MainHandWeaponBlock = 22,
	OffHandWeaponBlock = 23,
	RiderSprintAttack = 24,
	Structure = 25,
	StructureGetWater = 26,
	CarryUp = 27,
	StopCarryUp = 28,
	VehicleEnableReinsL = 29,
	VehicleEnableReinsR = 30,
	VehicleDisableReinsL = 31,
	VehicleDisableReinsR = 32,
	VehicleEnableSaddleL = 33,
	VehicleEnableSaddleR = 34,
	VehicleDisableSaddleL = 35,
	VehicleDisableSaddleR = 36,
	GeneralRelaxed = 37,
	SpawnVirtualProp = 38,
	ClearVirtualProp = 39,
	RiderGaitDown = 40,
	RiderGaitUp = 41,
	VehicleIdleStop = 42,
	VehicleWalkStop = 43,
	VehicleTrotStop = 44,
	VehicleRunStop = 45,
	VehicleSprintStop = 46,
	ClearVelocity = 47,
	LockMovement = 48,
	LockRotation = 49,
	LockMovementAndRotation = 50,
	UnLockMovement = 51,
	UnLockRotation = 52,
	UnLockMovementAndRotation = 53,
	ClearAimState = 54,
	EnableFullyBodyLayer = 55,
	CloseFullyBodyLayer = 56,
	Injured = 57,
	Rescue = 58,
	AttackRebound = 59,
	EnableControlVehicle = 60,
	DisableControlVehicle = 61,
	HorseBabySpawn = 62,
	GeneralRelaxedEnd = 63,
	Vaulting = 64,
	ScopePostProcess = 65,
	ClearScopePostProcess = 66,
	AttackReboundAgainAttack = 67,
	LoopAttack = 68,
	Ladder = 69,
	LadderExit = 70,
	LadderMoveForward = 71,
	LadderMoveBackward = 72,
	PreviewHit = 73,
	EMontageCustomBindType_MAX = 74,
};

enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
};

enum class EAllianceApplyGuildJoinResponse : uint8_t {
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_SUCCESS = 0,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_SAMEALLIANCE = 1,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_ASYNCWAITING = 2,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_HAVE_ALLIANCE = 3,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_NO_AUTHORITY = 4,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_CANNOT_INVITED = 5,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_HAVE_INVITED = 6,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_COOLTIME = 7,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_MAXINVITED = 8,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_CONTEXT_ILLEGAL = 9,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_FAILED = 10,
	ALLIANCEAPPLYGUILDJOIN_RESPONSE_MAX = 11,
};

enum class EPlaneBrushSideMode : uint8_t {
	BothSides = 0,
	PushDown = 1,
	PullTowards = 2,
	EPlaneBrushSideMode_MAX = 3,
};

enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 3,
	Webcam = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
};

enum class ENiagaraTickBehavior : uint8_t {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4,
};

enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

enum class EKeySettingType : uint8_t {
	GroundedMovement = 0,
	OtherMovement = 1,
	Attack = 2,
	ShortCut = 3,
	Camera = 4,
	Voice = 5,
	UI = 6,
	General = 7,
	Verhicle = 8,
	Max = 9,
};

enum class EJianChuType : uint8_t {
	None = 0,
	Jian = 1,
	Chu = 2,
	Man = 3,
	Ping = 4,
	Ding = 5,
	Zhi = 6,
	Po = 7,
	Wei = 8,
	Cheng = 9,
	Shou = 10,
	Kai = 11,
	Bi = 12,
	Max = 13,
};

enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

enum class EKickOutGuildResponse : uint8_t {
	KICKOUTGUILD_RESPONSE_SUCCESS = 0,
	KICKOUTGUILD_RESPONSE_NO_AUTHORITY = 1,
	KICKOUTGUILD_RESPONSE_NOTFOUND = 2,
	KICKOUTGUILD_RESPONSE_ASYNCWAITING = 3,
	KICKOUTGUILD_RESPONSE_INBATTLE = 4,
	KICKOUTGUILD_RESPONSE_FAILED = 5,
	KICKOUTGUILD_RESPONSE_MAX = 6,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
};

enum class ENiagaraScriptGroup : uint8_t {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3,
};

enum class ESetImageResponse : uint8_t {
	SETIMAGE_RESPONSE_SUCCESS = 0,
	SETIMAGE_RESPONSE_ASYNCWAITING = 1,
	SETIMAGE_RESPONSE_NO_AUTHORITY = 2,
	SETIMAGE_RESPONSE_IMAGELENGTH = 3,
	SETIMAGE_RESPONSE_CD = 4,
	SETIMAGE_RESPONSE_FAILED = 5,
	SETIMAGE_RESPONSE_MAX = 6,
};

enum class ETumbleState : uint8_t {
	NoTumble = 0,
	Tumbling = 1,
	GetUp = 2,
	ETumbleState_MAX = 3,
};

enum class EHelpTipInstructions : uint8_t {
	Attack = 0,
	Alt = 1,
	ChangeOperation = 2,
	ChangeFireSeat = 3,
	ChangeHelpSeat = 4,
	StopUse = 5,
	Run = 6,
	Jump = 7,
	Crouch = 8,
	Walk = 9,
	Block = 10,
	PressedADS = 11,
	AutoMove = 12,
	ContinuousAttack = 13,
	PressInteractive = 14,
	ToggleVehicleInventory = 15,
	MoveForward = 16,
	MoveBackward = 17,
	MoveRight = 18,
	MoveLeft = 19,
	AutoPutPolearms = 20,
	SwimUp = 21,
	SwimDown = 22,
	CallVehicleMoveTo = 23,
	CancelAttack = 24,
	PlayerShow = 25,
	QuickExchangeAllItem = 26,
	ToggleShowHelpPanel = 27,
	OpenInventory = 28,
	Kick = 29,
	DropCarriedCharacter = 30,
	SuicideCancelRescue = 31,
	InstrumentHotKey = 32,
	DrumBeatL = 33,
	DrumBeatR = 34,
	MAX = 35,
};

enum class ESetLanguageResponse : uint8_t {
	SETLANGUAGE_RESPONSE_SUCCESS = 0,
	SETLANGUAGE_RESPONSE_ASYNCWAITING = 1,
	SETLANGUAGE_RESPONSE_NO_AUTHORITY = 2,
	SETLANGUAGE_RESPONSE_FAILED = 3,
	SETLANGUAGE_RESPONSE_MAX = 4,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
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

enum class EGuildSetBaseCampResponse : uint8_t {
	SETBASECAMP_RESPONSE_SUCCESS = 0,
	SETBASECAMP_RESPONSE_ASYNCWAITING = 1,
	SETBASECAMP_RESPONSE_NO_AUTHORITY = 2,
	SETBASECAMP_RESPONSE_SAME = 3,
	SETBASECAMP_RESPONSE_FAILED = 4,
	SETBASECAMP_RESPONSE_MAX = 5,
};

enum class EAlphaChannelMode : uint8_t {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3,
};

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4,
};

enum class EHorizonDialogueTextOverflowWarpMethod_DEPRECATED : uint8_t {
	Normal = 0,
	BreakAll = 1,
	Invalidated = 2,
	EHorizonDialogueTextOverflowWarpMethod_MAX = 3,
};

enum class EPhononProbePlacementStrategy : uint8_t {
	CENTROID = 0,
	UNIFORM_FLOOR = 1,
	EPhononProbePlacementStrategy_MAX = 2,
};

enum class EClothMassMode : uint8_t {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4,
};

enum class EDrawPolyPathHeightMode : uint8_t {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathHeightMode_MAX = 2,
};

enum class EGlobalMapActorOwnerType : uint8_t {
	Unknow = 0,
	GlobalMap = 1,
	Teleport = 2,
	EGlobalMapActorOwnerType_MAX = 3,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class EAttackerType : uint8_t {
	None = 0,
	Player = 1,
	EnvironmentVolume = 2,
	SGStructure = 3,
	FieldNPC = 4,
	TamedNPC = 5,
	Siege = 6,
	NatureController = 7,
	EAttackerType_MAX = 8,
};

enum class ECharacterRace : uint8_t {
	CHARACTER_RACE_HUMAN = 0,
	CHARACTER_RACE_HORSE = 1,
	CHARACTER_RACE_SIEGE = 2,
	CHARACTER_RACE_MAX = 3,
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

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class EStructureCraftType : uint8_t {
	Empty = 0,
	Opened = 1,
	Closed = 2,
	Max = 3,
};

enum class EAnimationNotifyType : uint8_t {
	LevelUp = 0,
	AccomplishAchievement = 1,
	GivePerk = 2,
	NewQuest = 3,
	Max = 4,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class ENiagaraExecutionStateSource : uint8_t {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ECharacterFemaleFeature : uint8_t {
	CHARACTERFEATURE_01 = 0,
	CHARACTERFEATURE_02 = 1,
	CHARACTERFEATURE_03 = 2,
	CHARACTERFEATURE_04 = 3,
	CHARACTERFEATURE_MAX = 4,
};

enum class EChargeAttackStateType : uint8_t {
	BeginCharge = 0,
	Charging = 1,
	EndCharge = 2,
	EChargeAttackStateType_MAX = 3,
};

enum class EHumanEquipmentSlotType : uint8_t {
	EQUIPMENT_SLOT_TYPE_HEAD = 0,
	EQUIPMENT_SLOT_TYPE_BREAST = 1,
	EQUIPMENT_SLOT_TYPE_FEET = 2,
	EQUIPMENT_SLOT_TYPE_BACK = 3,
	EQUIPMENT_SLOT_TYPE_MAX = 4,
};

enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
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

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6,
};

enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

enum class ENDIExport_GPUAllocationMode : uint8_t {
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2,
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

enum class EIplDirectOcclusionMode : uint8_t {
	NONE = 0,
	DIRECTOCCLUSION_NOTRANSMISSION = 1,
	DIRECTOCCLUSION_TRANSMISSIONBYVOLUME = 2,
	DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY = 3,
	EIplDirectOcclusionMode_MAX = 4,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class EMovieSceneSequenceFlags : uint8_t {
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 3,
	EMovieSceneSequenceFlags_MAX = 4,
};

enum class EIplHrtfInterpolationMethod : uint8_t {
	NEAREST = 0,
	BILINEAR = 1,
	EIplHrtfInterpolationMethod_MAX = 2,
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

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EPhononMaterial : uint8_t {
	GENERIC = 0,
	BRICK = 1,
	CONCRETE = 2,
	CERAMIC = 3,
	GRAVEL = 4,
	CARPET = 5,
	GLASS = 6,
	PLASTER = 7,
	WOOD = 8,
	METAL = 9,
	ROCK = 10,
	CUSTOM = 11,
	EPhononMaterial_MAX = 12,
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

enum class EBattleGroundState : uint8_t {
	WaitingPlayer = 0,
	Perpare = 1,
	Playing = 2,
	Finish = 3,
	FailedLeaveState = 4,
	SuccessLeaveState = 5,
	Clearning = 6,
	ServerTravel = 7,
	EBattleGroundState_MAX = 8,
};

enum class ESourceBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2,
};

enum class EDisBandAllianceResponse : uint8_t {
	DISBANDALLIANCE_RESPONSE_SUCCESS = 0,
	DISBANDALLIANCE_RESPONSE_NO_AUTHORITY = 1,
	DISBANDALLIANCE_RESPONSE_ASYNCWAITING = 2,
	DISBANDALLIANCE_RESPONSE_FAILED = 3,
	DISBANDALLIANCE_RESPONSE_MAX = 4,
};

enum class TrafficGoodsRefreshType : uint8_t {
	RefreshGoods = 0,
	RefreshCapital = 1,
	RefreshPriceRatio = 2,
	TrafficGoodsRefreshType_MAX = 3,
};

enum class EPlayerWoundType : uint8_t {
	Stomach = 0,
	Striae = 1,
	Skin = 2,
	MAX = 3,
};

enum class EBakeTextureResolution : uint8_t {
	Resolution16 = 0,
	Resolution32 = 1,
	Resolution64 = 2,
	Resolution128 = 3,
	Resolution256 = 4,
	Resolution512 = 5,
	Resolution1024 = 6,
	Resolution2048 = 7,
	Resolution4096 = 8,
	Resolution8192 = 9,
	EBakeTextureResolution_MAX = 10,
};

enum class ESGChannelType : uint8_t {
	GuildChannel = 0,
	AllianceChannel = 1,
	ESGChannelType_MAX = 2,
};

enum class EProjectileParticleHitType : uint8_t {
	None = 0,
	RotateFollowActor = 1,
	RotateFollowNormal = 2,
	Max = 3,
};

enum class ESpaceCurveControlPointTransformMode : uint8_t {
	Shared = 0,
	PerVertex = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
};

enum class ERoadPathType : uint8_t {
	None = 0,
	RandomPoints = 1,
	RoundTripRoute = 2,
	ClosedLoopRoute = 3,
	ERoadPathType_MAX = 4,
};

enum class EReportReasonType : uint8_t {
	None = 0,
	Advertising = 1,
	Insults = 2,
	IllegalActivities = 3,
	ObscenePornographic = 4,
	RidiculeUnfriendly = 5,
	EReportReasonType_MAX = 6,
};

enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
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

enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class EReverbSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3,
};

enum class EHorizonDialogueTextOverflowWrapMethod : uint8_t {
	Normal = 0,
	BreakAll = 1,
	EHorizonDialogueTextOverflowWrapMethod_MAX = 2,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class EGeneralsLearnSkillConditionType : uint8_t {
	None = 0,
	Level = 1,
	SkillLevel = 2,
	RequirePerk = 3,
	Max = 4,
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

enum class ENiagaraRibbonDrawDirection : uint8_t {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class EProjectedHullAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	SmallestBoxDimension = 3,
	SmallestVolume = 4,
	EProjectedHullAxis_MAX = 5,
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

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

enum class ESeasonRewardPosType : uint8_t {
	SEASON_PASSPORT_REWARD = 0,
	SEASON_PASSPORT_SEC_REWARD = 1,
	SEASON_REWARD = 2,
	SEASON_MAX = 3,
};

enum class EGeneralsStatusType : uint8_t {
	HP = 0,
	HUNGER = 1,
	WEIGHT = 2,
	STUN = 3,
	Tame = 4,
	LifeCount = 5,
	Max = 6,
};

enum class EResonanceRenderMode : uint8_t {
	StereoPanning = 0,
	BinauralLowQuality = 1,
	BinauralMediumQuality = 2,
	BinauralHighQuality = 3,
	RoomEffectsOnly = 4,
	EResonanceRenderMode_MAX = 5,
};

enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3,
};

enum class EAnimGeometryTrace : uint8_t {
	Box = 0,
	Line = 1,
	Sphere = 2,
	Capsule = 3,
	ContinuousLine = 4,
	EAnimGeometryTrace_MAX = 5,
};

enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class ENiagaraPlatformSelectionState : uint8_t {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class EInteractionMontageType : uint8_t {
	InteractionMontageType_None = 0,
	InteractionMontageType_Pick = 1,
	InteractionMontageType_Unlock = 2,
	InteractionMontageType_MAX = 3,
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

enum class EBillBoardFriendly : uint8_t {
	EBillBoardFriendly_None = 0,
	EBillBoardFriendly_Friendly = 1,
	EBillBoardFriendly_Enemy = 2,
	EBillBoardFriendly_MAX = 3,
};

enum class ESufficientType : uint8_t {
	SUFFICIENT = 0,
	INSUFFICIENT_SELF = 1,
	INSUFFICIENT_REQUIREDPERK = 2,
	NO_CHARACTER = 3,
	ESufficientType_MAX = 4,
};

enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class EPropertyAccessIndirectionType : uint8_t {
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5,
};

enum class EAttributeBasedFloatCalculationType : uint8_t {
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4,
};

enum class EPlaneComponentDebugMode : uint8_t {
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3,
};

enum class ESetOfficialJobResponse : uint8_t {
	SETOFFICIALJOB_RESPONSE_SUCCESS = 0,
	SETOFFICIALJOB_RESPONSE_ASYNCWAITING = 1,
	SETOFFICIALJOB_RESPONSE_NO_AUTHORITY = 2,
	SETOFFICIALJOB_RESPONSE_NOTFOUND = 3,
	SETOFFICIALJOB_RESPONSE_MAX_COUNT = 4,
	SETOFFICIALJOB_RESPONSE_NO_CHANGE = 5,
	SETOFFICIALJOB_RESPONSE_ILLEGAL = 6,
	SETOFFICIALJOB_RESPONSE_FAILED = 7,
	SETOFFICIALJOB_RESPONSE_MAX = 8,
};

enum class EEquipWeaponSlot : uint8_t {
	None = 0,
	PelvisLeft = 1,
	PelvisBack1 = 2,
	PelvisBack2 = 3,
	PelvisTrouch = 4,
	Back1 = 5,
	Back2 = 6,
	BackBow = 7,
	BackShield = 8,
	BackCrossBow = 9,
	Throw1 = 10,
	Max = 11,
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

enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class ETaxResponse : uint8_t {
	SetTaxRate_Success = 0,
	SetTaxRate_ErrorJob = 1,
	SetTaxRate_NoChange = 2,
	SetTaxRate_Failed = 3,
	SyncTax_Success = 4,
	SyncTax_Failed = 5,
	SetTax_Success = 6,
	SetTax_Failed = 7,
	ChangeTax_Success = 8,
	ChangeTax_Failed = 9,
	ChangeTax_NoOfficialSeal = 10,
	ChangeTax_TaxNotEnough = 11,
	ChangeTax_BagInsufficient = 12,
	ChangeTax_InsufficientAuthority = 13,
	TaxResponse_Max = 14,
	ETaxResponse_MAX = 15,
};

enum class ETimeStretchCurveMapping : uint8_t {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3,
};

enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
};

enum class EAudioFaderCurve : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class EGameplayEffectMagnitudeCalculation : uint8_t {
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EGameplayEffectStackingType : uint8_t {
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
};

enum class EVoiceSampleRate : uint8_t {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2,
};

enum class ETextureMipLoadOptions : uint8_t {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3,
};

enum class PurchaseType : uint8_t {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3,
};

enum class EPoseComponentDebugMode : uint8_t {
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2,
};

enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
};

enum class EMagicLeapGestureTransformSpace : uint8_t {
	World = 0,
	Hand = 1,
	Tracking = 2,
	EMagicLeapGestureTransformSpace_MAX = 3,
};

enum class EStatisticsSetParamReference : uint8_t {
	Target_CharacterStatisticsInfo = 0,
	Target_SGPlayerCharacter = 1,
	Target_SGPlayerController = 2,
	Target_MAX = 3,
};

enum class EOccupyPreConditionType : uint8_t {
	OccupyPreConditionType_Or = 0,
	OccupyPreConditionType_And = 1,
	OccupyPreConditionType_MAX = 2,
};

enum class EDamageBodyType : uint8_t {
	Head = 0,
	UpperBody = 1,
	LowerBody = 2,
	MAX = 3,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
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

enum class EKeyPressType : uint8_t {
	AXIS = 0,
	ACTION = 1,
	EKeyPressType_MAX = 2,
};

enum class ESpawnPointType : uint8_t {
	Random = 0,
	Static = 1,
	ESpawnPointType_MAX = 2,
};

enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
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

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class EGameplayEffectStackingExpirationPolicy : uint8_t {
	ClearEntireStack = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

enum class EGeneralsSpecialType : uint8_t {
	None = 0,
	Normal = 1,
	Elite = 2,
	Boss = 3,
	MAX = 4,
};

enum class EInteractiveMenus : uint8_t {
	Menu_None = 0,
	Menu_OpenDropInventoryComponent = 1,
	Menu_InventoryComponent = 2,
	Menu_ExploitComponent = 3,
	Menu_ItemPick = 4,
	Menu_StructureRepair = 5,
	Menu_StructureHoldMenu = 6,
	Menu_StructureDemolish = 7,
	Menu_StructureAltarOpen = 8,
	Menu_StructureBedRename = 9,
	Menu_StructureBedTravel = 10,
	Menu_StructureSetPassword = 11,
	Menu_StructureClearPassword = 12,
	Menu_StructureEnterPassword = 13,
	Menu_StructureDoorOpenClose = 14,
	Menu_StructureFrameConstructionAny = 15,
	Menu_StructureReleaseNpc = 16,
	Menu_StructureReleaseHorse = 17,
	Menu_StructureSelfWork = 18,
	Menu_StructureStartClimb = 19,
	Menu_StructureStopClimb = 20,
	Menu_StructureLadderBuild = 21,
	Menu_StructureLadderStopBuild = 22,
	Menu_StructureLadderPush = 23,
	Menu_StructureVerifyBaoZang = 24,
	Menu_StructureRename = 25,
	Menu_StructureActivate = 26,
	Menu_StructureRackBuild = 27,
	Menu_StructureRackRelease = 28,
	Menu_StructureAttachToCharacter = 29,
	Menu_StructureNoSeat = 30,
	Menu_StructureSeat = 31,
	Menu_StructureSeatGetWater = 32,
	Menu_StructureTransport = 33,
	Menu_StructureStartUseEnergy = 34,
	Menu_StructureStopUseEnergy = 35,
	Menu_StructureOpenGuildShop = 36,
	Menu_StructureOpenGuildStore = 37,
	Menu_StructureNpcControlSetting = 38,
	Menu_StructurePackageStation = 39,
	Menu_StructureOpenGuildAuctionHouse = 40,
	Menu_StructureOccupyArea = 41,
	Menu_StructureOccupyResetTime = 42,
	Menu_StructureLeaveFuben = 43,
	Menu_StructureItemLog = 44,
	Menu_StructureGivePerkPoints = 45,
	Menu_StructureResetPos = 46,
	Menu_StructureTrapToItem = 47,
	Menu_StructureOpenAltar = 48,
	Menu_StructureHelp = 49,
	Menu_MoveSeatingRepair = 50,
	Menu_CharacterYueDanPing = 51,
	Menu_CharacterHoldMenu = 52,
	Menu_CharacterChat = 53,
	Menu_CharacterJoinGuild = 54,
	Menu_CharacterAcceptJoinGuild = 55,
	Menu_CharacterGuildJoinAlliance = 56,
	Menu_CharacterAcceptGuildJoinAlliance = 57,
	Menu_CharacterAllianceJoinAlliance = 58,
	Menu_CharacterAcceptAllianceJoinAlliance = 59,
	Menu_CharacterRescue = 60,
	Menu_CharacterCancelRescue = 61,
	Menu_CharacterCarryUp = 62,
	Menu_AnimalsCharacterClaim = 63,
	Menu_AnimalsCharacterBeBeg = 64,
	Menu_AnimalsCharacterRide = 65,
	Menu_AnimalsCharacterFollow = 66,
	Menu_AnimalsCharacterBindStun = 67,
	Menu_AnimalsCharacterReleaseStun = 68,
	Menu_AnimalsCharacterWander = 69,
	Menu_AnimalsCharacterResetPos = 70,
	Menu_AnimalsCharacterToggleFur = 71,
	Menu_AnimalsCharacterChangeName = 72,
	Menu_CharacterMoveControl = 73,
	Menu_CharacterMoveNoSeat = 74,
	Menu_CharacterMoveSeat = 75,
	Menu_CharacterMoveDemolish = 76,
	Menu_CharacterMoveAutoMove = 77,
	Menu_CharacterMoveTowerUp = 78,
	Menu_CharacterMoveTowerDown = 79,
	Menu_GeneralCharacterHoldMenu = 80,
	Menu_GeneralCharacterTooManyGenerals = 81,
	Menu_GeneralCharacterUnlockSkill = 82,
	Menu_GeneralCharacterTransMachine = 83,
	Menu_GeneralCharacterTransPlayer = 84,
	Menu_GeneralCharacterGoodsRecycle = 85,
	Menu_GeneralCharacterGoodsSell = 86,
	Menu_GeneralCharacterCarryUp = 87,
	Menu_GeneralCharacterChangeName = 88,
	Menu_GeneralCharacterRelease = 89,
	Menu_GeneralCharacterResetPos = 90,
	Menu_GeneralCharacterDisablePick = 91,
	Menu_GeneralCharacterEnablePick = 92,
	Menu_GeneralCharacterFollow = 93,
	Menu_GeneralCharacterFinishRackTame = 94,
	Menu_GeneralCharacterCloseTalk = 95,
	Menu_GeneralCharacterTalk = 96,
	Menu_GeneralCharacterFollowRadius = 97,
	Menu_GeneralCharacterXianLingHuKouAward = 98,
	Menu_CartLink = 99,
	Menu_CartReleaseLink = 100,
	Menu_StructureCropLandCollect = 101,
	Menu_StructureCropLandDemolish = 102,
	Menu_StructureAnimalRestOpen = 103,
	Menu_SceneEffect_Exploit = 104,
	Menu_FlagImage = 105,
	Menu_CustomFlag = 106,
	Menu_LightFireworks = 107,
	Menu_YaoQianShu = 108,
	Menu_BainPao = 109,
	Max_MenuIndex = 110,
	EInteractiveMenus_MAX = 111,
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

enum class UDLSSSupport : uint8_t {
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	UDLSSSupport_MAX = 6,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

enum class ETurretFireMode : uint8_t {
	StoreMax = 0,
	StoreFree = 1,
	Stage = 2,
	Gun = 3,
	SelfCharge = 4,
	ControllerWeapon = 5,
	Max = 6,
};

enum class EPolyEditExtrudeDirection : uint8_t {
	SelectionNormal = 0,
	WorldX = 1,
	WorldY = 2,
	WorldZ = 3,
	LocalX = 4,
	LocalY = 5,
	LocalZ = 6,
	EPolyEditExtrudeDirection_MAX = 7,
};

enum class ELocationXToSpawnEnum : uint8_t {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
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

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EConvertToPolygonsMode : uint8_t {
	FaceNormalDeviation = 0,
	FromUVISlands = 1,
	EConvertToPolygonsMode_MAX = 2,
};

enum class EAirAbsorptionMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2,
};

enum class EQuickTransformerMode : uint8_t {
	AxisTranslation = 0,
	AxisRotation = 1,
	EQuickTransformerMode_MAX = 2,
};

enum class ESimulateSpace : uint8_t {
	Location = 0,
	Rotation = 1,
	Transform = 2,
	ExtractCurve = 3,
	ESimulateSpace_MAX = 4,
};

enum class EViewRemoteInventoryType : uint8_t {
	None = 0,
	ViewRemote = 1,
	VehiclePawn = 2,
	SeatCharacter = 3,
	MyGeneral = 4,
	MyHorse = 5,
	GuildStore = 6,
	MAX = 7,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

enum class EPlayerShowLockTargetType : uint8_t {
	Invalid = 0,
	PlayerShow = 1,
	AppearanceKit = 2,
	FashionKit = 3,
	EPlayerShowLockTargetType_MAX = 4,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
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

enum class DBLogGuildEvent : uint8_t {
	CreateGuild = 0,
	DismissGuild = 1,
	JoinGuild = 2,
	LeaveGuild = 3,
	KickOutGuild = 4,
	AllianceCreate = 5,
	AllianceDismiss = 6,
	GuildJoinAlliance = 7,
	GuildLeaveAlliance = 8,
	AllianceKickOutGuild = 9,
	AllianceJoinAlliance = 10,
	AllianceLeaveAlliance = 11,
	AllianceKickOutAlliance = 12,
	DBLogGuildEvent_MAX = 13,
};

enum class EAnimalBegType : uint8_t {
	NONE = 0,
	FOOD = 1,
	PET = 2,
	WALK = 3,
	MAX = 4,
};

enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

enum class EBakedCurvatureTypeMode : uint8_t {
	MeanAverage = 0,
	Max = 1,
	Min = 2,
	Gaussian = 3,
};

enum class EAuctionShopType : uint8_t {
	AuctionShop_None = 0,
	AuctionShop_Item = 1,
	AuctionShop_General = 2,
	AuctionShop_Horse = 3,
	AuctionShop_DealDone = 4,
	AuctionShop_MAX = 5,
};

enum class EGuildShopItemType : uint8_t {
	GongXun = 0,
	Copper = 1,
	Max = 2,
};

enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
};

enum class EWeightScheme : uint8_t {
	Uniform = 0,
	Umbrella = 1,
	Valence = 2,
	MeanValue = 3,
	Cotangent = 4,
	ClampedCotangent = 5,
	EWeightScheme_MAX = 6,
};

enum class EDoAttackType : uint8_t {
	None = 0,
	MoveTo = 1,
	TurnTo = 2,
	WaitAttackCD = 3,
	Attack = 4,
	Max = 5,
};

enum class ERankSettlementType : uint8_t {
	MONTH = 0,
	WEEK = 1,
	ERankSettlementType_MAX = 2,
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

enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

enum class EGeneralsCareer : uint8_t {
	Commander = 0,
	LongRange = 1,
	Vanguard = 2,
	Warrior = 3,
	MilitaryAdviser = 4,
	EGeneralsCareer_MAX = 5,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class EPlayerShowLockCompareType : uint8_t {
	BiggerThan = 0,
	MustEqual = 1,
	EPlayerShowLockCompareType_MAX = 2,
};

enum class EImportanceWeight : uint8_t {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
};

enum class ENiagaraGpuBufferFormat : uint8_t {
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3,
};

enum class ESpaceCurveControlPointOriginMode : uint8_t {
	Shared = 0,
	First = 1,
	Last = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3,
};

enum class EMIDCreationFlags : uint8_t {
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EMagicLeapHeadTrackingMapEvent : uint8_t {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class EQuartzDelegateType : uint8_t {
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3,
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

enum class EAbilityTaskWaitState : uint8_t {
	WaitingOnGame = 0,
	WaitingOnUser = 1,
	WaitingOnAvatar = 2,
	EAbilityTaskWaitState_MAX = 3,
};

enum class ELiveLinkSourceMode : uint8_t {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3,
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

enum class SkeletalMeshOptimizationImportance : uint8_t {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6,
};

enum class EBaoZangType : uint8_t {
	EBAOZANG_TYPE_BOX = 0,
	EBAOZANG_TYPE_NPC = 1,
	EBAOZANG_TYPE_FUBEN = 2,
	EBAOZANG_TYPE_LOCKEDBOX = 3,
	EBAOZANG_TYPE_MAX = 4,
};

enum class ENoiseType : uint8_t {
	STEPNOISE = 0,
	MELEEATTACKNOISE = 1,
	MELEEBLOCKNOISE = 2,
	SHOOTERATTACKNOISE = 3,
	NOISE_TYPE_MAX = 4,
	ENoiseType_MAX = 5,
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

enum class ECharacterMeshMaterialSlot : uint8_t {
	BODY = 0,
	ARM = 1,
	LEG = 2,
	MAX = 3,
};

enum class EVehiclePerkState : uint8_t {
	NO_CHARACTER = 0,
	INSUFFICIENT_QUALITYTYPE = 1,
	INSUFFICIENT_WILDLEVEL = 2,
	INSUFFICIENT_ATTRIBUTECORRECTION = 3,
	INSUFFICIENT_TAMELEVEL = 4,
	INSUFFICIENT_STRONGMORPH = 5,
	INSUFFICIENT_THINMORPH = 6,
	INSUFFICIENT_SKINCOLORTYPE = 7,
	INSUFFICIENT_SEX = 8,
	INSUFFICIENT_CASTRATED = 9,
	CAN_LEARN = 10,
	HAS_LEARNED = 11,
	HAS_EQUIPPED = 12,
	EVehiclePerkState_MAX = 13,
};

enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3,
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

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class EStructureCreateReturnValue : uint8_t {
	None = 0,
	AboveGroundDistance = 1,
	RequiresBindPoint = 2,
	RequiresCreateOnFloor = 3,
	ReceivedBlock = 4,
	RequiresNearByFoundation = 5,
	RequiresGroundOrBindPoint = 6,
	NotAGuild = 7,
	CloseToEnemyStrurcture = 8,
	CloseToOtherOccupyStructure = 9,
	InOtherOccupyStructure = 10,
	LooseRatio = 11,
	RequiresCreateInWater = 12,
	CannotCreateHere = 13,
	PlatformTooManyStructure = 14,
	CannotCreateOtherGuildPlatform = 15,
	TooHighInPlatform = 16,
	CannotCreateInPlatform = 17,
	OutOfAreaInPlatform = 18,
	RequiresGuild = 19,
	RequiresHighGuildLevel = 20,
	OverGuildMaxNum = 21,
	OverIntervalTime = 22,
	OverAllowCreateTimeRange = 23,
	OverMaxStructureNumInRadius = 24,
	CloseToEnemyPlayer = 25,
	CantPlantCrop = 26,
	OverPersonalMaxNum = 27,
	CannotCreateOnThisStructure = 28,
	CannotCreateInWater = 29,
	PreventCreate = 30,
	CantPlantSalt = 31,
	CloseToPlayer = 32,
	ResetPos_TooFar = 33,
	ResetPos_ObjectNull = 34,
	OtherRequiresCreateOnFloor = 35,
	CannotFindPerkStructure = 36,
	CloseToOtherTrioOccupyStructure = 37,
	CannotCreateOfficialRoad = 38,
	OnlyInMyTeamArea = 39,
	Max = 40,
};

enum class EItemType : uint8_t {
	None = 0,
	Consumable = 1,
	Equipment = 2,
	Weapon = 3,
	Ammo = 4,
	Structure = 5,
	Resource = 6,
	WeaponAttachment = 7,
	NPCSpawner = 8,
	PerkStructure = 9,
	BaoZangMap = 10,
	YueDanPing = 11,
	Capital = 12,
	Package = 13,
	HonnorPoint = 14,
	SiegeMachine = 15,
	Strengthen = 16,
	TrafficGoods = 17,
	Wallet = 18,
	Appearance = 19,
	MAX = 20,
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

enum class EOfficialJobConditionType : uint8_t {
	GuildOwner = 0,
	XianLing = 1,
	TaiShou = 2,
	CiShi = 3,
	ZhouMu = 4,
	Wang = 5,
	Di = 6,
	Max = 7,
};

enum class ENCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5,
};

enum class ELocomotionState : uint8_t {
	Empty = 0,
	NotMoving = 1,
	Moving = 2,
	Stopping = 3,
	ELocomotionState_MAX = 4,
};

enum class EAnimNodeQualityLevel : uint8_t {
	LowQuality = 0,
	MediumQuality = 1,
	HighQuality = 2,
	UltraQuality = 3,
	EpicQuality = 4,
	EAnimNodeQualityLevel_MAX = 5,
};

enum class EModulationRouting : uint8_t {
	Disable = 0,
	Inherit = 1,
	Override = 2,
	EModulationRouting_MAX = 3,
};

enum class CloudStatus : uint8_t {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8_t {
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class EMovieScenePositionType : uint8_t {
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3,
};

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

enum class ECheckDeviceIdResultType : uint8_t {
	ECheckDeviceIdResultType_Init = 0,
	ECheckDeviceIdResultType_Reset = 1,
	ECheckDeviceIdResultType_MAX = 2,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
};

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

enum class EMiniMapStructureVisibleType : uint8_t {
	ONLYSELF = 0,
	GUILDMEMBER = 1,
	EMiniMapStructureVisibleType_MAX = 2,
};

enum class EGuildImageFloatValue : uint8_t {
	UMove = 0,
	VMove = 1,
	Rotator = 2,
	USize = 3,
	VSize = 4,
	Max = 5,
};

enum class EFootStepType : uint8_t {
	Step = 0,
	Walk = 1,
	Jog = 2,
	Run = 3,
	Pivot = 4,
	Jump = 5,
	Land = 6,
	Slide = 7,
	Crouch = 8,
	Max = 9,
};

enum class EDataStoreType : uint8_t {
	DATA_STORE_TYPE_NONE = 0,
	DATA_STORE_TYPE_DATASTORE = 1,
	DATA_STORE_TYPE_LOCALFILE = 2,
	DATA_STORE_TYPE_ONLY_WORLD = 3,
	DATA_STORE_TYPE_STANDALONEFILE = 4,
	DATA_STORE_TYPE_MAX = 5,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class DBLogGuildCapitalChangeReason : uint8_t {
	UpgradeSkill = 0,
	ActiveSkill = 1,
	LearnCraftPerk = 2,
	AddSilver = 3,
	ExtractSilver = 4,
	DBLogGuildCapitalChangeReason_MAX = 5,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class EBoneFilterActionOption : uint8_t {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3,
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

enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
};

enum class EMagicLeapControllerLEDSpeed : uint8_t {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	EMagicLeapControllerLEDSpeed_MAX = 3,
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

enum class ENotifyExpModify : uint8_t {
	BeginAddExp = 0,
	LevelExpRatio = 1,
	SelfExpMulAdd = 2,
	HuangLiMul = 3,
	ServerLevelMul = 4,
	ServerExpMul = 5,
	PrivateServerCollectionExpMul = 6,
	PlayerCharAddExpMulAdd = 7,
	WorshipPlayerCharAddExpMulAdd = 8,
	GenCharAddExpMulAdd = 9,
	WorshipGenCharAddExpMulAdd = 10,
	HorseAddExpMulAdd = 11,
	WorshipHorseAddExpMulAdd = 12,
	FinalExp = 13,
	MAX = 14,
};

enum class EParticleDetailMode : uint8_t {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3,
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

enum class EMovingGaitType : uint8_t {
	Walk = 0,
	Jog = 1,
	Run = 2,
	EMovingGaitType_MAX = 3,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class EMsgSiftType : uint8_t {
	MSG_SIFT_ALL = 0,
	MSG_SIFT_SYSTEM = 1,
	MSG_SIFT_BATTLE = 2,
	MSG_SIFT_PRIVATE = 3,
	MSG_SIFT_EXP = 4,
	MSG_SIFT_MAX = 5,
};

enum class ETeleportType : uint8_t {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3,
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

enum class EPriorityAttenuationMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3,
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

enum class EIK_Type : uint8_t {
	ENUM_Two_Bone_Ik = 0,
	ENUM_Single_Bone_Ik = 1,
	ENUM_MAX = 2,
};

enum class ENavMeshMovementMode : uint8_t {
	None = 0,
	Advanced = 1,
	ServerOnly = 2,
	SimulatedProxyOnly = 3,
	ENavMeshMovementMode_MAX = 4,
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

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
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

enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

enum class EBehaviorPointType : uint8_t {
	Sleep = 0,
	Relaxed = 1,
	Sentry = 2,
	RandomInRange = 3,
	Structure = 4,
	Patrol = 5,
	Blueprint = 6,
	KeepInPlace = 7,
	Max = 8,
};

enum class EInventoryPanelBgType : uint8_t {
	Below = 0,
	Above = 1,
	Right = 2,
	EInventoryPanelBgType_MAX = 3,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class ESkyAtmosphereTransformMode : uint8_t {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3,
};

enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

enum class EDrawPolyPathOutputMode : uint8_t {
	Ribbon = 0,
	Extrusion = 1,
	Ramp = 2,
	EDrawPolyPathOutputMode_MAX = 3,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class EPanningMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2,
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
};

enum class ESetJoinConditionResponse : uint8_t {
	SETJOINCONDITION_RESPONSE_SUCCESS = 0,
	SETJOINCONDITION_RESPONSE_ASYNCWAITING = 1,
	SETJOINCONDITION_RESPONSE_NO_AUTHORITY = 2,
	SETJOINCONDITION_RESPONSE_FAILED = 3,
	SETJOINCONDITION_RESPONSE_MAX = 4,
};

enum class EScalabilityDetailType : uint8_t {
	ViewDistanceQuality = 0,
	AntiAliasingQuality = 1,
	ShadowQuality = 2,
	PostProcessQuality = 3,
	TextureQuality = 4,
	EffectsQuality = 5,
	FoliageQuality = 6,
	ShadingQuality = 7,
	EScalabilityDetailType_MAX = 8,
};

enum class EViewInteractionState : uint8_t {
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3,
};

enum class ELegendItemType : uint8_t {
	Equip = 0,
	Weapon = 1,
	MAX = 2,
};

enum class ETextValidRule : uint8_t {
	NotEmpty = 0,
	CannotContainNullChar = 1,
	CannotContainFilterWord = 2,
	CannotContainSpecialChar = 3,
	ETextValidRule_MAX = 4,
};

enum class ESiegeSeatFunction : uint8_t {
	None = 0,
	Fire = 1,
	HelpMove = 2,
	HelpRotate = 3,
	HelpMoveAndRotate = 4,
	ESiegeSeatFunction_MAX = 5,
};

enum class EVehiclePerkType : uint8_t {
	BattlePerk = 0,
	PackPerk = 1,
	PasturePerk = 2,
	Max = 3,
};

enum class EExploitInteractiveType : uint8_t {
	EExploitInteractiveType_Collect = 0,
	EExploitInteractiveType_PickUp = 1,
	EExploitInteractiveType_Max = 2,
};

enum class ESiegeType : uint8_t {
	Turret = 0,
	Ballista = 1,
	FireThrower = 2,
	Ram = 3,
	SiegeTower = 4,
	FlyBridge = 5,
	AnimalWatch = 6,
	BattlePlat = 7,
	Drum = 8,
	ChimeBell = 9,
	Max = 10,
};

enum class EGuildLanguageType : uint8_t {
	Language1 = 0,
	Language2 = 1,
	Language3 = 2,
	Language4 = 3,
	Max = 4,
};

enum class ESoundTriggerState : uint8_t {
	Normal = 0,
	Ready = 1,
	Fighting = 2,
	Tie = 3,
	WillLose = 4,
	Lose = 5,
	WillWin = 6,
	Win = 7,
	GuildEvent = 8,
	PersonalEvent = 9,
	Max = 10,
};

enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
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

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

enum class EAnimalIdleBehaviorType : uint8_t {
	Stand = 0,
	StandHind = 1,
	Sitting = 2,
	Lying = 3,
	Sleeping = 4,
	EAnimalIdleBehaviorType_MAX = 5,
};

enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

enum class EHairInterpolationWeight : uint8_t {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EHairInterpolationWeight_MAX = 4,
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

enum class ETurretFireStatus : uint8_t {
	Idle = 0,
	Reloading = 1,
	ReloadFinish = 2,
	Fire = 3,
	Max = 4,
};

enum class ESGPhysMaterialType : uint8_t {
	Default = 0,
	Flesh = 1,
	Fabric = 2,
	Wood = 3,
	Stone = 4,
	Metal = 5,
	Water = 6,
	GroundDefault = 7,
	GroundGrass = 8,
	GroundMuddy = 9,
	GroundSand = 10,
	GroundSnow = 11,
	Leather = 12,
	DrumHead = 13,
	DrumEdge = 14,
	ChimeBell = 15,
	MAX = 16,
};

enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class EHairCardsSourceType : uint8_t {
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2,
};

enum class EQuestTriggerType : uint8_t {
	None = 0,
	Level = 1,
	PreQuest = 2,
	GuildLevel = 3,
	Dead = 4,
	BeXianLing = 5,
	LimitedActivity = 6,
	Max = 7,
};

enum class TrafficGoodsType : uint8_t {
	TrafficGoodsInvalidType = 0,
	Medicine = 1,
	Equipment = 2,
	Resouce = 3,
	AquaticProduct = 4,
	Treasure = 5,
	WildLifeProduct = 6,
	TrafficGoodsType_MAX = 7,
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

enum class ERemeshSmoothingType : uint8_t {
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3,
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

enum class ERaQualityMode : uint8_t {
	STEREO_PANNING = 0,
	BINAURAL_LOW = 1,
	BINAURAL_MEDIUM = 2,
	BINAURAL_HIGH = 3,
	ERaQualityMode_MAX = 4,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
};

enum class ELightningType : uint8_t {
	LT_Root = 0,
	LT_Branch = 1,
	LT_MAX = 2,
};

enum class EPhononProbeMobility : uint8_t {
	STATIC = 0,
	DYNAMIC = 1,
	EPhononProbeMobility_MAX = 2,
};

enum class EMeshSelectionToolActions : uint8_t {
	NoAction = 0,
	SelectAll = 1,
	ClearSelection = 2,
	InvertSelection = 3,
	GrowSelection = 4,
	ShrinkSelection = 5,
	ExpandToConnected = 6,
	SelectLargestComponentByTriCount = 7,
	SelectLargestComponentByArea = 8,
	OptimizeSelection = 9,
	DeleteSelected = 10,
	DisconnectSelected = 11,
	SeparateSelected = 12,
	FlipSelected = 13,
	CreateGroup = 14,
	CycleSelectionMode = 15,
	CycleViewMode = 16,
	EMeshSelectionToolActions_MAX = 17,
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

enum class ENPCInfoType : uint8_t {
	General = 0,
	Horse = 1,
	Max = 2,
};

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
};

enum class EMobilePlanarReflectionMode : uint8_t {
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3,
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

enum class EMobileMSAASampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class ECreateAllianceResponse : uint8_t {
	CREATEALLIANCE_RESPONSE_SUCCESS = 0,
	CREATEALLIANCE_RESPONSE_NAME_ILLEGAL = 1,
	CREATEALLIANCE_RESPONSE_NAME_DUPLICATE = 2,
	CREATEALLIANCE_RESPONSE_GUID_DUPLICATE = 3,
	CREATEALLIANCE_RESPONSE_ASYNCWIATING = 4,
	CREATEALLIANCE_RESPONSE_NOTGUILDOWNER = 5,
	CREATEALLIANCE_RESPONSE_HAVE_ALLIANCE = 6,
	CREATEALLIANCE_RESPONSE_COOLTIME = 7,
	CREATEALLIANCE_RESPONSE_INBATTLE = 8,
	CREATEALLIANCE_RESPONSE_FAILED = 9,
	CREATEALLIANCE_RESPONSE_MAX = 10,
};

enum class EStatisticsGetParamReference : uint8_t {
	Target_CharacterStatisticsInfo = 0,
	Target_SGPlayerCharacter = 1,
	Target_SGPlayerController = 2,
	Target_Params = 3,
	Target_MAX = 4,
};

enum class EGameplayAbilityNetSecurityPolicy : uint8_t {
	ClientOrServer = 0,
	ServerOnlyExecution = 1,
	ServerOnlyTermination = 2,
	ServerOnly = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4,
};

enum class EBoneModificationType : uint8_t {
	BMT_Ignore = 0,
	BMT_Replace = 1,
	BMT_Additive = 2,
	BMT_MAX = 3,
};

enum class EHuangLiEffectType : uint8_t {
	None = 0,
	ShareExp = 1,
	CharacterExp = 2,
	HorseExp = 3,
	NpcExp = 4,
	MineRes = 5,
	LumberRes = 6,
	HuntRes = 7,
	PlantRes = 8,
	StructureMaxHP = 9,
	StructureInitHP = 10,
	WildGeneralDamage = 11,
	TamedHorseDamage = 12,
	TamedNpcDamage = 13,
	WildNpcDamage = 14,
	SiegeDamage = 15,
	Durable = 16,
	Repair = 17,
	Stun = 18,
	RespawnTime = 19,
	FriendDamage = 20,
	FoodBuffTime = 21,
	CropGrowth = 22,
	Tame = 23,
	OccupyRequire = 24,
	OneHandedWeapon = 25,
	Shields = 26,
	TowHandedWeapon = 27,
	Polearms = 28,
	HeavyArmors = 29,
	Throwing = 30,
	Archery = 31,
	Crossbows = 32,
	Riding = 33,
	LightArmors = 34,
	Physique = 35,
	Mining = 36,
	Lumbering = 37,
	Hunting = 38,
	Planting = 39,
	HandMaking = 40,
	SiegeWorking = 41,
	Building = 42,
	Armorer = 43,
	Herb = 44,
	LeaderShip = 45,
	Training = 46,
	Recruit = 47,
	Taming = 48,
	Renown = 49,
	Max = 50,
};

enum class ECraftPerkTimes : uint8_t {
	ECraftPerkTimes_1 = 0,
	ECraftPerkTimes_2 = 1,
	ECraftPerkTimes_3 = 2,
	ECraftPerkTimes_4 = 3,
	ECraftPerkTimes_5 = 4,
	ECraftPerkTimes_6 = 5,
	ECraftPerkTimes_7 = 6,
	ECraftPerkTimes_8 = 7,
	ECraftPerkTimes_MAX = 8,
};

enum class EBuffType : uint8_t {
	None = 0,
	Hunger = 1,
	FoodEffect = 2,
	MedicineEffect = 3,
	WineEffect = 4,
	MAX = 5,
};

enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
};

enum class ESkinCacheUsage : uint8_t {
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3,
};

enum class EDatasmithImportScene : uint8_t {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3,
};

enum class EDesiredImageFormat : uint8_t {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4,
};

enum class ECustomRoadPathType : uint8_t {
	Start = 0,
	Follow = 1,
	End = 2,
	ECustomRoadPathType_MAX = 3,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class EScalabilityDetailValueType : uint8_t {
	INT = 0,
	FLOAT = 1,
	MAX = 2,
};

enum class EWeaponType : uint8_t {
	Fist = 0,
	Sword = 1,
	Axe = 2,
	Hammer = 3,
	Bow = 4,
	LongBow = 5,
	Crossbows = 6,
	HeavyCrossbows = 7,
	Shields = 8,
	HeavyShilds = 9,
	Fork = 10,
	Torch = 11,
	Flag = 12,
	MAX = 13,
};

enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class EAppleTextureType : uint8_t {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5,
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

enum class EMiniMapMarkType : uint8_t {
	Manual = 0,
	TreasureMap = 1,
	Corpse = 2,
	EMiniMapMarkType_MAX = 3,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8_t {
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ESetAuthorityResponse : uint8_t {
	SETAUTHORITY_RESPONSE_SUCCESS = 0,
	SETAUTHORITY_RESPONSE_ASYNCWAITING = 1,
	SETAUTHORITY_RESPONSE_NO_AUTHORITY = 2,
	SETAUTHORITY_RESPONSE_FAILED = 3,
	SETAUTHORITY_RESPONSE_MANAGE_LIMIT = 4,
	SETAUTHORITY_RESPONSE_USE_LIMIT = 5,
	SETAUTHORITY_RESPONSE_WAIT_FOR_CD = 6,
	SETAUTHORITY_RESPONSE_MAX = 7,
};

enum class ECropState : uint8_t {
	None = 0,
	Growthing = 1,
	HasFruit = 2,
	GenerateFruit = 3,
	OnlyRoot = 4,
	ECropState_MAX = 5,
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

enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class ESelectedObjectsModificationType : uint8_t {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class ETargetDataFilterSelf : uint8_t {
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3,
};

enum class EDynamicMeshSculptBrushType : uint8_t {
	Move = 0,
	PullKelvin = 1,
	PullSharpKelvin = 2,
	Smooth = 3,
	Offset = 4,
	SculptView = 5,
	SculptMax = 6,
	Inflate = 7,
	ScaleKelvin = 8,
	Pinch = 9,
	TwistKelvin = 10,
	Flatten = 11,
	Plane = 12,
	PlaneViewAligned = 13,
	FixedPlane = 14,
	Resample = 15,
	LastValue = 16,
	EDynamicMeshSculptBrushType_MAX = 17,
};

enum class EDatasmithImportActorPolicy : uint8_t {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3,
};

enum class ENiagaraAgeUpdateMode : uint8_t {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class ETravelEntryType : uint8_t {
	JUN = 0,
	CITY = 1,
	SERVER = 2,
	ETravelEntryType_MAX = 3,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
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

enum class ELocationYToSpawnEnum : uint8_t {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class EHuangLiUnlockType : uint8_t {
	None = 0,
	ShareExp = 1,
	CharacterExp = 2,
	HorseExp = 3,
	NpcExp = 4,
	MineRes = 5,
	LumberRes = 6,
	HuntRes = 7,
	PlantRes = 8,
	PlaceStructureCount = 9,
	KillPlayerCount = 10,
	KillWildNpcCount = 11,
	KillTamedNpcCount = 12,
	KillWildGeneralCount = 13,
	KillTamedGeneralCount = 14,
	WildGeneralDamage = 15,
	TamedHorseDamage = 16,
	TamedNpcDamage = 17,
	WildNpcDamage = 18,
	SiegeDamage = 19,
	Durable = 20,
	RepairCount = 21,
	TakeStunCount = 22,
	RespawnCount = 23,
	FriendDamageCount = 24,
	TameAnimal = 25,
	OccupyRequireCount = 26,
	OneHandedWeaponCount = 27,
	ShieldsCount = 28,
	TowHandedWeaponCount = 29,
	PolearmsCount = 30,
	HeavyArmorsCount = 31,
	ThrowingCount = 32,
	ArcheryCount = 33,
	CrossbowsCount = 34,
	RidingCount = 35,
	LightArmorsCount = 36,
	PhysiqueCount = 37,
	MiningCount = 38,
	LumberingCount = 39,
	HuntingCount = 40,
	PlantingCount = 41,
	HandMakingCount = 42,
	SiegeWorkingCount = 43,
	BuildingCount = 44,
	ArmorerCount = 45,
	HerbCount = 46,
	LeaderShipCount = 47,
	TrainingCount = 48,
	RecruitCount = 49,
	TamingCount = 50,
	RenownCount = 51,
	Max = 52,
};

enum class EAnimalQualityType : uint8_t {
	None = 0,
	Bad = 1,
	Ordinary = 2,
	Good = 3,
	Excellence = 4,
	Max = 5,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2,
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

enum class ENotifyBgTex : uint8_t {
	None = 0,
	Damage = 1,
	SkillLevelUp = 2,
	Item = 3,
	Gain = 4,
	Max = 5,
};

enum class ERotationMode : uint8_t {
	VelocityRotationMode = 0,
	LookingRotationMode = 1,
	HorseRotationMode = 2,
	ERotationMode_MAX = 3,
};

enum class EConsumeItemType : uint8_t {
	None = 0,
	Food = 1,
	Wine = 2,
	Poison = 3,
	AddLifeCount = 4,
	ArtOfWar = 5,
	OfficialSeal = 6,
	AddLoyalty = 7,
	AddTame = 8,
	ModifyData = 9,
	Medicine = 10,
	FoodBox = 11,
	HuKou = 12,
	LegendItem = 13,
	Skin = 14,
	SkillExpBook = 15,
	PublicExpBook = 16,
	AnimalFood = 17,
	FullWallet = 18,
	CapitalBox = 19,
	EmptyWaterBucket = 20,
	ResetCraftPerk = 21,
	GuildImageColor = 22,
	GuildImageTexture = 23,
	TreasureBox = 24,
	Fireworks = 25,
	MAX = 26,
};

enum class EJunDetailState : uint8_t {
	OPENING = 0,
	CLOSING = 1,
	INITING = 2,
	EJunDetailState_MAX = 3,
};

enum class EMagicLeapHeadTrackingMode : uint8_t {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3,
};

enum class EItemDBLogLevel : uint8_t {
	ItemDBLogLevel_MinInvalid = 0,
	ItemDBLogLevel_POOR = 1,
	ItemDBLogLevel_COMMON = 2,
	ItemDBLogLevel_UNCOMMON = 3,
	ItemDBLogLevel_RARE = 4,
	ItemDBLogLevel_EPIC = 5,
	ItemDBLogLevel_LEGENDRY = 6,
	ItemDBLogLevel_MaxInvalid = 7,
	ItemDBLogLevel_MAX = 8,
};

enum class EAddActivityPointResponse : uint8_t {
	ADDACTIVITYPOINT_RESPONSE_SUCCESS = 0,
	ADDACTIVITYPOINT_RESPONSE_ASYNCWAITING = 1,
	ADDACTIVITYPOINT_RESPONSE_PERDAY_LIMIT = 2,
	ADDACTIVITYPOINT_RESPONSE_FAILED = 3,
	ADDACTIVITYPOINT_RESPONSE_MAX = 4,
};

enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

enum class EAIAttackFilter : uint8_t {
	StunTarget = 0,
	AnimalTarget = 1,
	GeneralTarget = 2,
	PlayerTarget = 3,
	StructureTarget = 4,
	Max = 5,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class EHitProxyPriority : uint8_t {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4,
};

enum class EShooterAttackMontageType : uint8_t {
	None = 0,
	StartAim = 1,
	StartPull = 2,
	PullHold = 3,
	PullShake = 4,
	EShooterAttackMontageType_MAX = 5,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

enum class EVehiclePerkSlotState : uint8_t {
	LOCK = 0,
	UNLOCK = 1,
	LEARNED = 2,
	EMPTY = 3,
	EQUIPPED = 4,
	EVehiclePerkSlotState_MAX = 5,
};

enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2,
};

enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_DepthOnlyOcclusion = 6,
	SCS_DepthOnlyWaterInteraction = 7,
	SCS_DepthOnlySceneAndCustomDepth = 8,
	SCS_Normal = 9,
	SCS_BaseColor = 10,
	SCS_FinalColorHDR = 11,
	SCS_FinalToneCurveHDR = 12,
	SCS_MAX = 13,
};

enum class ENiagaraRibbonUVDistributionMode : uint8_t {
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	ENiagaraRibbonUVDistributionMode_MAX = 3,
};

enum class EWeaponSkillType : uint8_t {
	OneHandedWeapons = 0,
	TowHandedWeapons = 1,
	Polearms = 2,
	Throwing = 3,
	Archery = 4,
	Crossbows = 5,
	Shields = 6,
	OffHands = 7,
	MAX = 8,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
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

enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
};

enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t {
	NeverReset = 0,
	ResetPeriod = 1,
	ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

enum class ESpatialInputGestureAxis : uint8_t {
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4,
};

enum class EGuildSetDKPResponse : uint8_t {
	SETDKP_RESPONSE_SUCCESS = 0,
	SETDKP_RESPONSE_ASYNCWAITING = 1,
	SETDKP_RESPONSE_NO_AUTHORITY = 2,
	SETDKP_RESPONSE_NOT_FOUND = 3,
	SETDKP_RESPONSE_VALUE_NOTCHANGE = 4,
	SETDKP_RESPONSE_FAILED = 5,
	SETDKP_RESPONSE_MAX = 6,
};

enum class EExtractSilverResponse : uint8_t {
	EXTRACTSILVER_RESPONSE_SUCCESS = 0,
	EXTRACTSILVER_RESPONSE_ASYNCWAITING = 1,
	EXTRACTSILVER_RESPONSE_NO_AUTHORITY = 2,
	EXTRACTSILVER_RESPONSE_NOENOUGH = 3,
	EXTRACTSILVER_RESPONSE_FAILED = 4,
	EXTRACTSILVER_RESPONSE_MAX = 5,
};

enum class EVehiclePerkModifyType : uint8_t {
	VEHICLEPERKMODIFY_ADD = 0,
	VEHICLEPERKMODIFY_DEL = 1,
	VEHICLEPERKMODIFY_MAX = 2,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3,
};

enum class ENiagaraSpriteFacingMode : uint8_t {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class EGuildImageLayer : uint8_t {
	BackGroud = 0,
	LayerS1 = 1,
	LayerS2 = 2,
	LayerS3 = 3,
	LayerS4 = 4,
	LayerS5 = 5,
	BorderFrame = 6,
	Max = 7,
};

enum class EDealApplyJoinGuildResponse : uint8_t {
	DEALAPPLYJOINGUILD_RESPONSE_SUCCESS = 0,
	DEALAPPLYJOINGUILD_RESPONSE_NO_AUTHORITY = 1,
	DEALAPPLYJOINGUILD_RESPONSE_APPLYER_NOTFOUND = 2,
	DEALAPPLYJOINGUILD_RESPONSE_APPLYER_EXIST = 3,
	DEALAPPLYJOINGUILD_RESPONSE_APPLYER_MAXCOUNT = 4,
	DEALAPPLYJOINGUILD_RESPONSE_APPLYER_ASYNCWAITING = 5,
	DEALAPPLYJOINGUILD_RESPONSE_APPLYER_INBATTLE = 6,
	DEALAPPLYJOINGUILD_RESPONSE_OFFLINE = 7,
	DEALAPPLYJOINGUILD_RESPONSE_APPLYGUILD_NOTFOUND = 8,
	DEALAPPLYJOINGUILD_RESPONSE_GUILDOWNER = 9,
	DEALAPPLYJOINGUILD_RESPONSE_NOGUILDMEMBER = 10,
	DEALAPPLYJOINGUILD_RESPONSE_NO_ALLIANCE = 11,
	DEALAPPLYJOINGUILD_RESPONSE_ALLIANCE_NOTSAME = 12,
	DEALAPPLYJOINGUILD_RESPONSE_GUILD_NOTSANME = 13,
	DEALAPPLYJOINGUILD_RESPONSE_LEAVECD = 14,
	DEALAPPLYJOINGUILD_RESPONSE_FAILED = 15,
	DEALAPPLYJOINGUILD_RESPONSE_NPCSEAT_NUM = 16,
	DEALAPPLYJOINGUILD_RESPONSE_MAX = 17,
};

enum class EInventoryItemChangeReason : uint8_t {
	InvalidReason = 0,
	CollectResource = 1,
	Craft = 2,
	Function = 3,
	Farm = 4,
	Shop = 5,
	Quest = 6,
	LoadAmmo = 7,
	BackAmmo = 8,
	BlockAmmo = 9,
	Demolish = 10,
	GuildAuctionHouseSell = 11,
	GuildAuctionHouseBuy = 12,
	GuildAuctionHouseRecall = 13,
	GM = 14,
	MailAttachment = 15,
	DropItem = 16,
	SplitItem = 17,
	MergeItem = 18,
	DeletaZeroItemAutoPutInShortCut = 19,
	DeletaZeroItemAutoPutInEquip = 20,
	AutoPutInShortCut = 21,
	AutoPutInEquip = 22,
	Use = 23,
	ClearAll = 24,
	BuildStructure = 25,
	ConsumeFood = 26,
	LearnPerk = 27,
	LeanCraftPerk = 28,
	HorseRequire = 29,
	Castrate = 30,
	AccReborn = 31,
	AddLifeCount = 32,
	AddStoreFood = 33,
	AddToFoodBox = 34,
	Expired = 35,
	SellTrafficGoods = 36,
	BuyTrafficGoods = 37,
	Exchange = 38,
	SelfExchange = 39,
	DeathDropAll = 40,
	CrossServerDropAll = 41,
	TameFailDropAll = 42,
	ReleaseDropAll = 43,
	BedTravelDropAll = 44,
	UseEmptyWallet = 45,
	TaxGetGoldItem = 46,
	AnimalFarm = 47,
	StructureTrapAnimal = 48,
	StructureAnimalWatch = 49,
	SceneEffect = 50,
	BattleAward = 51,
	XianLingAward = 52,
	GuildShop = 53,
	Test = 54,
	NpcInit = 55,
	ConsumeFuelSpawn = 56,
	LegendToken = 57,
	HorsePlatForm = 58,
	OccupySell = 59,
	FinishQuench = 60,
	AnimalFarmFood = 61,
	RankReward_Activity = 62,
	UnlockPlayerShow = 63,
	SGStructureNPCOutput = 64,
	FishRod = 65,
	StructureFish = 66,
	OccupyBuy = 67,
	UnlockAppearanceKit = 68,
	UnlockFashionKit = 69,
	StructureSeatSupport = 70,
	StructureYaoQianShu = 71,
	EInventoryItemChangeReason_MAX = 72,
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

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class EWaterBodyType : uint8_t {
	River = 0,
	Lake = 1,
	Ocean = 2,
	Transition = 3,
	Num = 4,
	EWaterBodyType_MAX = 5,
};

enum class EStructureNPCType : uint8_t {
	Type_None = 0,
	Type_Mining = 1,
	Type_Lumbering = 2,
	Type_Sand = 3,
	Type_Food = 4,
	Type_Max = 5,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};

enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class EBasePlayerGetExpReason : uint8_t {
	InvalidGetExpReason = 0,
	GM = 1,
	Quest = 2,
	AnimalTameFoodAddExp = 3,
	AnimalEatFood = 4,
	SpecialActivityAddTempExp = 5,
	TamedAnimalAutoAddExp = 6,
	FinishRepairItem = 7,
	AnimalBornFoodExp = 8,
	AnimalShareKillExpByRider = 9,
	KillExp = 10,
	GeneralShareFightExpFromPlayer = 11,
	PassengerHelpShareExp = 12,
	NearByShareExp = 13,
	CollectResource = 14,
	FinishCraft = 15,
	HangUpAddExp = 16,
	AnimalTrainAddExp = 17,
	UnlockStaticPoint = 18,
	CropLand = 19,
	Achievement = 20,
	EBasePlayerGetExpReason_MAX = 21,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class EPropertyAccessChangeNotifyMode : uint8_t {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class EGameplayModEvaluationChannel : uint8_t {
	Channel0 = 0,
	Channel1 = 1,
	Channel2 = 2,
	Channel3 = 3,
	Channel4 = 4,
	Channel5 = 5,
	Channel6 = 6,
	Channel7 = 7,
	Channel8 = 8,
	Channel9 = 9,
	Channel_MAX = 10,
	EGameplayModEvaluationChannel_MAX = 11,
};

enum class EFollicleMaskChannel : uint8_t {
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4,
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

enum class EGroupEdgeInsertionMode : uint8_t {
	Retriangulate = 0,
	PlaneCut = 1,
	EGroupEdgeInsertionMode_MAX = 2,
};

enum class EGroomStrandsSize : uint8_t {
	None = 0,
	Size2 = 1,
	Size4 = 2,
	Size8 = 3,
	Size16 = 4,
	Size32 = 5,
	EGroomStrandsSize_MAX = 6,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
};

enum class EGuildContainerType : uint8_t {
	GuildNormalBox = 0,
	GuildDepot = 1,
	GuildSupplyBox = 2,
	EGuildContainerType_MAX = 3,
};

enum class EGroomInterpolationType : uint8_t {
	None = 0,
	RigidTransform = 1,
	OffsetTransform = 2,
	SmoothTransform = 3,
	EGroomInterpolationType_MAX = 4,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4,
};

enum class EPrefabVariantRuleType : uint8_t {
	SkipProp = 0,
	EPrefabVariantRuleType_MAX = 1,
};

enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class ENiagaraParameterScope : uint8_t {
	Input = 0,
	User = 1,
	Engine = 2,
	Owner = 3,
	System = 4,
	Emitter = 5,
	Particles = 6,
	ScriptPersistent = 7,
	ScriptTransient = 8,
	Local = 9,
	Custom = 10,
	DISPLAY_ONLY_StaticSwitch = 11,
	Output = 12,
	None = 13,
	Num = 14,
	ENiagaraParameterScope_MAX = 15,
};

enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
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

enum class MediaTextureOrientation : uint8_t {
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4,
};

enum class EInviteAllianceJoinResponse : uint8_t {
	INVITEALLIANCEJOIN_RESPONSE_SUCCESS = 0,
	INVITEALLIANCEJOIN_RESPONSE_NO_AUTHORITY = 1,
	INVITEALLIANCEJOIN_RESPONSE_NO_ALLIANCEOWNER = 2,
	INVITEALLIANCEJOIN_RESPONSE_ASYNCWAITING = 3,
	INVITEALLIANCEJOIN_RESPONSE_SUBALLIANCE = 4,
	INVITEALLIANCEJOIN_RESPONSE_NO_ALLIANCE = 5,
	INVITEALLIANCEJOIN_RESPONSE_SERVERGROUP = 6,
	INVITEALLIANCEJOIN_RESPONSE_FAILED = 7,
	INVITEALLIANCEJOIN_RESPONSE_GUANAIBATTLE = 8,
	INVITEALLIANCEJOIN_RESPONSE_MAX = 9,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EGuildSetMemberKPITaskResponse : uint8_t {
	SETMEMBERKPITASK_RESPONSE_SUCCESS = 0,
	SETMEMBERKPITASK_RESPONSE_ASYNCWAITING = 1,
	SETMEMBERKPITASK_RESPONSE_NO_AUTHORITY = 2,
	SETMEMBERKPITASK_RESPONSE_MAXCOUNT = 3,
	SETMEMBERKPITASK_RESPONSE_FAILED = 4,
	SETMEMBERKPITASK_RESPONSE_MAX = 5,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EDBLogSwitchType : uint8_t {
	SSwitch_MinInvalid = 0,
	SSwitch_Exp = 1,
	SSwitch_SkillExp = 2,
	SSwitch_StructureDestroy = 3,
	SSwitch_CreateCrop = 4,
	SSwitch_Quest = 5,
	SSwitch_PlayerFubenState = 6,
	SSwitch_FubenState = 7,
	SSwitch_PlayerCapital = 8,
	SSwitch_NPCRespawn = 9,
	SSwitch_OfficialSeal = 10,
	SSwitchXianChengBattleRes = 11,
	SSwitchType_GuildActivityPoint = 12,
	SSwitch_StructureOccupy = 13,
	SSwitch_Achievement = 14,
	SSwitch_WearWeapon = 15,
	SSwitch_CrossServer = 16,
	SSwitch_ChunkDead = 17,
	SSwitch_PlayerDead = 18,
	SSwitch_NpcDead = 19,
	SSwitchType_ItemLog = 20,
	SSwitchType_SkillMastery = 21,
	SSwitchType_LearnPerk = 22,
	SSwitchType_LearnCraftPerk = 23,
	SSwitchType_GuildChange = 24,
	SSwitchType_UseGM = 25,
	SSwitchType_ChangeName = 26,
	SSWitchType_GuildSkillLevelUp = 27,
	SSWitchType_PlayerTame = 28,
	SSWitchType_AnimalFarm = 29,
	SSwitch_GuildCapital = 30,
	SSwitch_PlayerPoint = 31,
	SSwitchType_MaxInvalid = 32,
	EDBLogSwitchType_MAX = 33,
};

enum class EHuangLiEffectName : uint8_t {
	None = 0,
	XingShen = 1,
	JianChu = 2,
	XingXiu = 3,
	Activity = 4,
	Max = 5,
};

enum class EGameplayAbilityTargetingLocationType : uint8_t {
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3,
};

enum class EFootDirectionType : uint8_t {
	F_LeftFoot = 0,
	F_RightFoot = 1,
	B_LeftFoot = 2,
	B_RightFoot = 3,
	EFootDirectionType_MAX = 4,
};

enum class ECustomTeamAttitude : uint8_t {
	None = 0,
	Friendly = 1,
	Neutral = 2,
	Hostile = 3,
	ECustomTeamAttitude_MAX = 4,
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

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class EGameplayCuePayloadType : uint8_t {
	CueParameters = 0,
	FromSpec = 1,
	EGameplayCuePayloadType_MAX = 2,
};

enum class EUVOutput : uint8_t {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2,
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

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class EFSRUpscaleQuality : uint8_t {
	Performance = 0,
	Balanced = 1,
	Quality = 2,
	Ultra = 3,
	EFSRUpscaleQuality_MAX = 4,
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

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class EMobilePixelProjectedReflectionQuality : uint8_t {
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class EDatasmithImportHierarchy : uint8_t {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3,
};

enum class EMagicLeapHeadTrackingError : uint8_t {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
};

enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3,
};

enum class EMagicLeapImageTargetOrientation : uint8_t {
	ForwardAxisAsNormal = 0,
	UpAxisAsNormal = 1,
	EMagicLeapImageTargetOrientation_MAX = 2,
};

enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

enum class ESetPlayerTaskInfoStep : uint8_t {
	Start = 0,
	OneHandedWeapons = 1,
	Shields = 2,
	TowHandedWeapons = 3,
	Polearms = 4,
	HeavyArmors = 5,
	Throwing = 6,
	Archery = 7,
	Crossbows = 8,
	Riding = 9,
	LightArmors = 10,
	Physique = 11,
	Mining = 12,
	Lumbering = 13,
	Hunting = 14,
	Planting = 15,
	HandMaking = 16,
	SiegeWorking = 17,
	Building = 18,
	Armorer = 19,
	Herb = 20,
	LeaderShip = 21,
	Training = 22,
	Recruit = 23,
	Taming = 24,
	Renown = 25,
	Perks = 26,
	End = 27,
	ESetPlayerTaskInfoStep_MAX = 28,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EMirrorToolAction : uint8_t {
	NoAction = 0,
	ShiftToCenter = 1,
	Left = 2,
	Right = 3,
	Up = 4,
	Down = 5,
	Forward = 6,
	Backward = 7,
	EMirrorToolAction_MAX = 8,
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

enum class ERadarChartColorOverwrite : uint8_t {
	None = 0,
	Multiply = 1,
	Overwrite = 2,
	OverwriteAlphaOnly = 3,
	ERadarChartColorOverwrite_MAX = 4,
};

enum class EWorldRankType : uint8_t {
	WORLD_RANK_LEVEL = 0,
	WORLD_RANK_ACTIVITY = 1,
	WORLD_RANK_MAX = 2,
};

enum class ESGSoundType : uint8_t {
	Human = 0,
	Human_Voice = 1,
	Animal = 2,
	Machine = 3,
	Structure = 4,
	UI = 5,
	Projectile = 6,
	Equipment = 7,
	Weapon = 8,
	DamageType = 9,
	BGM = 10,
	FootStep = 11,
	Interactive = 12,
	Max = 13,
};

enum class EGeneralsQualityType : uint8_t {
	None = 0,
	Green = 1,
	Blue = 2,
	Purse = 3,
	Orange = 4,
	Red = 5,
	Max = 6,
};

enum class EAIAggressionType : uint8_t {
	AggressionAggressive = 0,
	AggressionNeutral = 1,
	AggressionPassive = 2,
	AggressionRunAway = 3,
	Max = 4,
};

enum class EMaterialFunctionUsage : uint8_t {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3,
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

enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class ECreateGuildResponse : uint8_t {
	CREATEGUILD_RESPONSE_SUCCESS = 0,
	CREATEGUILD_RESPONSE_NAME_ILLEGAL = 1,
	CREATEGUILD_RESPONSE_NAME_DUPLICATE = 2,
	CREATEGUILD_RESPONSE_GUID_DUPLICATE = 3,
	CREATEGUILD_RESPONSE_GUID_ASYNCWIATING = 4,
	CREATEGUILD_RESPONSE_INBATTLE = 5,
	CREATEGUILD_RESPONSE_LEAVECD = 6,
	CREATEGUILD_RESPONSE_IMAGELENGTH = 7,
	CREATEGUILD_RESPONSE_FAILED = 8,
	CREATEGUILD_RESPONSE_MAX = 9,
};

enum class EQuestType : uint8_t {
	Guide = 0,
	Guild = 1,
	Season = 2,
	SeasonWeek = 3,
	Max = 4,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class EStanceMode : uint8_t {
	Stand = 0,
	Crouch = 1,
	EStanceMode_MAX = 2,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
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

enum class ESetCustomGroupResponse : uint8_t {
	SETCUSTOMGROUP_RESPONSE_SUCCESS = 0,
	SETCUSTOMGROUP_RESPONSE_ASYNCWAITING = 1,
	SETCUSTOMGROUP_RESPONSE_NO_AUTHORITY = 2,
	SETCUSTOMGROUP_RESPONSE_MAX_COUNT = 3,
	SETCUSTOMGROUP_RESPONSE_NAME_ILLEGAL = 4,
	SETCUSTOMGROUP_RESPONSE_NAME_DUPLICATE = 5,
	SETCUSTOMGROUP_RESPONSE_FAILED = 6,
	SETCUSTOMGROUP_RESPONSE_MAX = 7,
};

enum class EHorseEquipmentSlotType : uint8_t {
	EQUIPMENT_SLOT_TYPE_HORSE_SADDLE = 0,
	EQUIPMENT_SLOT_TYPE_HORSE_ARMOR = 1,
	EQUIPMENT_SLOT_TYPE_HORSE_PLATFORM = 2,
	EQUIPMENT_SLOT_TYPE_HORSE_FLAG = 3,
	EQUIPMENT_SLOT_TYPE_HORSE_MAX = 4,
};

enum class EAnimalsStanceType : uint8_t {
	Stand = 0,
	StandHind = 1,
	Lying = 2,
	Sitting = 3,
	EAnimalsStanceType_MAX = 4,
};

enum class ECustomMovementMode : uint8_t {
	None = 0,
	Grounded = 1,
	Falling = 2,
	Ragdoll = 3,
	Swimming = 4,
	Climbing = 5,
	Flying = 6,
	RootMotion = 7,
	Teleport = 8,
	Rider = 9,
	Passenger = 10,
	Empty = 11,
	ECustomMovementMode_MAX = 12,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class EMatrixColumns : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class ERaMaterialName : uint8_t {
	TRANSPARENT = 0,
	ACOUSTIC_CEILING_TILES = 1,
	BRICK_BARE = 2,
	BRICK_PAINTED = 3,
	CONCRETE_BLOCK_COARSE = 4,
	CONCRETE_BLOCK_PAINTED = 5,
	CURTAIN_HEAVY = 6,
	FIBER_GLASS_INSULATION = 7,
	GLASS_THIN = 8,
	GLASS_THICK = 9,
	GRASS = 10,
	LINOLEUM_ON_CONCRETE = 11,
	MARBLE = 12,
	METAL = 13,
	PARQUET_ONCONCRETE = 14,
	PLASTER_ROUGH = 15,
	PLASTER_SMOOTH = 16,
	PLYWOOD_PANEL = 17,
	POLISHED_CONCRETE_OR_TILE = 18,
	SHEETROCK = 19,
	WATER_OR_ICE_SURFACE = 20,
	WOOD_CEILING = 21,
	WOOD_PANEL = 22,
	UNIFORM = 23,
	ERaMaterialName_MAX = 24,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
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

enum class EToolSide : uint8_t {
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3,
};

enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

enum class EGuildKickOutResponse : uint8_t {
	GUILDKICKOUT_RESPONSE_SUCCESS = 0,
	GUILDKICKOUT_RESPONSE_NO_AUTHORITY = 1,
	GUILDKICKOUT_RESPONSE_NOTFOUND = 2,
	GUILDKICKOUT_RESPONSE_ASYNCWAITING = 3,
	GUILDKICKOUT_RESPONSE_HIDEALLIANCEOWNER = 4,
	GUILDKICKOUT_RESPONSE_FAILED = 5,
	GUILDKICKOUT_RESPONSE_MAX = 6,
};

enum class EAddSilverResponse : uint8_t {
	ADDSILVER_RESPONSE_SUCCESS = 0,
	ADDSILVER_RESPONSE_ASYNCWAITING = 1,
	ADDSILVER_RESPONSE_FAILED = 2,
	ADDSILVER_RESPONSE_MAX = 3,
};

enum class EChangeGuildTitleResponse : uint8_t {
	CHANGEGUILDTITLE_RESPONSE_SUCCESS = 0,
	CHANGEGUILDTITLE_RESPONSE_NO_AUTHORITY = 1,
	CHANGEGUILDTITLE_RESPONSE_NOTFOUND = 2,
	CHANGEGUILDTITLE_RESPONSE_MAX_COUNT = 3,
	CHANGEGUILDTITLE_RESPONSE_ASYNCWAITING = 4,
	CHANGEGUILDTITLE_RESPONSE_FAILED = 5,
	CHANGEGUILDTITLE_RESPONSE_MAX = 6,
};

enum class EMailMsg : uint8_t {
	CTS_Delete = 0,
	CTS_SetRead = 1,
	CTS_GetAttachment = 2,
	STC_GetAttachmentReply = 3,
	CTS_List_Delete = 4,
	EMailMsg_Max = 5,
};

enum class EViewMode : uint8_t {
	FirstPerson = 0,
	ThirdPerson = 1,
	EViewMode_MAX = 2,
};

enum class ECreateAllianceChannelResponse : uint8_t {
	CREATE_ALLIANCE_CHANNEL_RESPONSE_SUCCESS = 0,
	CREATE_ALLIANCE_CHANNEL_RESPONSE_FAILED = 1,
	CREATE_ALLIANCE_CHANNEL_RESPONSE_MAX = 2,
};

enum class EMobileShadowQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileShadowQuality_MAX = 4,
};

enum class EClothingWindMethod_Legacy : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
};

enum class ESetDevicePassWordResult : uint8_t {
	ESetDevicePassWordResult_Success = 0,
	ESetDevicePassWordResult_PasswordLenError = 1,
	ESetDevicePassWordResult_UpdateDeviceSuccess = 2,
	ESetDevicePassWordResult_PasswordNotEqual = 3,
	ESetDevicePassWordResult_TryOverCount = 4,
	ESetDevicePassWordResult_InitError = 5,
	ESetDevicePassWordResult_UpdateError = 6,
	ESetDevicePassWordResult_MAX = 7,
};

enum class EAuctionShopAction : uint8_t {
	AuctionShop_BuyItem = 0,
	AuctionShop_BuyGeneral = 1,
	AuctionShop_BuyHorse = 2,
	AuctionShop_SellItem = 3,
	AuctionShop_SellGeneral = 4,
	AuctionShop_SellHorse = 5,
	AuctionShop_RecallItem = 6,
	AuctionShop_RecallGeneral = 7,
	AuctionShop_RecallHorse = 8,
	AuctionShop_TakeCash = 9,
	AuctionShop_CustodyFee = 10,
	AuctionShop_PendingGoods = 11,
	AuctionShop_RecallBuyGoods = 12,
	AuctionShop_GetBuyEarnings = 13,
	AuctionShop_DeleteGeneral = 14,
	AuctionShop_DeleteHorse = 15,
	AuctionShop_Max = 16,
};

enum class EUIFunctionSlotType : uint8_t {
	Inventory = 0,
	Perk = 1,
	Warcraft = 2,
	CraftPerk = 3,
	Horse = 4,
	JueWei = 5,
	YueDanPing = 6,
	Task = 7,
	Guild = 8,
	Activity = 9,
	Achievement = 10,
	Map = 11,
	Log = 12,
	Huangli = 13,
	Auction = 14,
	Mall = 15,
	GuildEvent = 16,
	WorldRank = 17,
	Mail = 18,
	MAX = 19,
};

enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class EMovementDirection : uint8_t {
	Forwards = 0,
	Backwards = 1,
	EMovementDirection_MAX = 2,
};

enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};

enum class EExploitSubType : uint8_t {
	ExploitType_None = 0,
	ExploitType_Copper = 1,
	ExploitType_Iron = 2,
	ExploitType_XuanhuaIron = 3,
	ExploitType_Meteorite = 4,
	ExploitType_Clay = 5,
	ExploitType_Salt = 6,
	ExploitType_Kaolinite = 7,
	ExploitType_Coal = 8,
	ExploitType_Nitramite = 9,
	ExploitType_Sulfur = 10,
	ExploitType_Realgar = 11,
	ExploitType_Jade = 12,
	ExploitType_Level2Tree = 13,
	ExploitType_Level3Tree = 14,
	ExploitType_Level4Tree = 15,
	ExploitType_MAX = 16,
};

enum class EPinContainerType : uint8_t {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
};

enum class EIplConvolutionType : uint8_t {
	PHONON = 0,
	TRUEAUDIONEXT = 1,
	EIplConvolutionType_MAX = 2,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EGameplayEffectDurationType : uint8_t {
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3,
};

enum class EPropDataType : uint8_t {
	PDT_unknown = 0,
	PDT_bool = 1,
	PDT_int8 = 2,
	PDT_int16 = 3,
	PDT_int32 = 4,
	PDT_int64 = 5,
	PDT_float = 6,
	PDT_double = 7,
	PDT_fstring = 8,
	PDT_MAX = 9,
};

enum class EMagicLeapRaycastResultState : uint8_t {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4,
};

enum class EGuildLeaveResponse : uint8_t {
	GUILDLEAVE_RESPONSE_SUCCESS = 0,
	GUILDLEAVE_RESPONSE_ASYNCWAITING = 1,
	GUILDLEAVE_RESPONSE_NOT_INALLIANCE = 2,
	GUILDLEAVE_RESPONSE_NO_GUILDOWNER = 3,
	GUILDLEAVE_RESPONSE_ALLIANCEPLAYEROWNER = 4,
	GUILDLEAVE_RESPONSE_HIDEALLIANCEOWNER = 5,
	GUILDLEAVE_RESPONSE_FAILED = 6,
	GUILDLEAVE_RESPONSE_MAX = 7,
};

enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4,
};

enum class EAllianceRefuseJoinResponse : uint8_t {
	ALLIANCEREFUSEJOIN_RESPONSE_SUCCESS = 0,
	ALLIANCEREFUSEJOIN_RESPONSE_ASYNCWAITING = 1,
	ALLIANCEREFUSEJOIN_RESPONSE_NO_AUTHORITY = 2,
	ALLIANCEREFUSEJOIN_RESPONSE_FAILED = 3,
	ALLIANCEREFUSEJOIN_RESPONSE_MAX = 4,
};

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

enum class EDrawPolyPathWidthMode : uint8_t {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathWidthMode_MAX = 2,
};

enum class EInterpoRotation_Type : uint8_t {
	ENUM_DivisiveRot_Interp = 0,
	ENUM_LegacyRot_Interp = 1,
	ENUM_MAX = 2,
};

enum class EAbilityTaskNetSyncType : uint8_t {
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3,
};

enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

enum class EAudioBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	EAudioBusChannels_MAX = 2,
};

enum class EHoleFillToolActions : uint8_t {
	NoAction = 0,
	SelectAll = 1,
	ClearSelection = 2,
	EHoleFillToolActions_MAX = 3,
};

enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EHairInterpolationQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4,
};

enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class EDoRelaxedType : uint8_t {
	None = 0,
	WaitingMontageStop = 1,
	MoveToFar = 2,
	MoveToClose = 3,
	WaitStopMove = 4,
	TurnTo = 5,
	Relaxed = 6,
	Max = 7,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class EOfficalJobTax : uint8_t {
	XianLing = 0,
	TaiShou = 1,
	CiShi = 2,
	Max = 3,
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

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
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

enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

enum class EPlayerWoundFrom : uint8_t {
	None = 0,
	Food = 1,
	Death = 2,
	TakeDamage = 3,
	Cheat = 4,
	MAX = 5,
};

enum class ENiagaraParameterPanelCategory : uint8_t {
	Input = 0,
	Attributes = 1,
	Output = 2,
	Local = 3,
	User = 4,
	Engine = 5,
	Owner = 6,
	System = 7,
	Emitter = 8,
	Particles = 9,
	ScriptTransient = 10,
	StaticSwitch = 11,
	None = 12,
	Num = 13,
	ENiagaraParameterPanelCategory_MAX = 14,
};

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class EGuildSignType : uint8_t {
	Available = 0,
	Expired = 1,
	Awarded = 2,
	Unlocked = 3,
	Max = 4,
};

enum class ECharacterMaleFeature : uint8_t {
	CHARACTERFEATURE_01 = 0,
	CHARACTERFEATURE_02 = 1,
	CHARACTERFEATURE_03 = 2,
	CHARACTERFEATURE_04 = 3,
	CHARACTERFEATURE_MAX = 4,
};

enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

enum class EAnimCurve : uint8_t {
	None = 0,
	Speed = 1,
	AnimPosition = 2,
	ForwardMovement = 3,
	ForwardMovementAlpha = 4,
	RightMovement = 5,
	RightMovementAlpha = 6,
	UpMovement = 7,
	UpMovementAlpha = 8,
	PitchRotation = 9,
	PitchRotationAlpha = 10,
	YawRotation = 11,
	YawRotationAlpha = 12,
	RollRotation = 13,
	RollRotationAlpha = 14,
	Max = 15,
};

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class ESetWeiWangResponse : uint8_t {
	SETWEIWANG_RESPONSE_SUCCESS = 0,
	SETWEIWANG_RESPONSE_FAILED = 1,
	SETWEIWANG_RESPONSE_MAX = 2,
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

enum class ECSGOperation : uint8_t {
	DifferenceAB = 0,
	DifferenceBA = 1,
	Intersect = 2,
	Union = 3,
	TrimA = 4,
	TrimB = 5,
	ECSGOperation_MAX = 6,
};

enum class EGooglePADStorageMethod : uint8_t {
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4,
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

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class ECollisionGeometryType : uint8_t {
	KeepExisting = 0,
	AlignedBoxes = 1,
	OrientedBoxes = 2,
	MinimalSpheres = 3,
	Capsules = 4,
	ConvexHulls = 5,
	SweptHulls = 6,
	MinVolume = 7,
	None = 8,
	ECollisionGeometryType_MAX = 9,
};

enum class EHorizonDialogueSegmentType : uint8_t {
	Invalidated = 0,
	Text = 1,
	NewLine = 2,
	NewPage = 3,
	Image = 4,
	PaperFlipbook = 5,
	Material = 6,
	HyperText = 7,
	Custom = 8,
	EHorizonDialogueSegmentType_MAX = 9,
};

enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t {
	NoFilter = 0,
	SlightRobustnessToFlicker = 1,
	MoreRobustnessToFlicker = 2,
	EMagicLeapHandTrackingGestureFilterLevel_MAX = 3,
};

enum class ETimedDataInputState : uint8_t {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3,
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

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
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

enum class ESetResolutionMethod : uint8_t {
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3,
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

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class ERaycastSweepType : uint8_t {
	Pawn = 0,
	Profile = 1,
	ERaycastSweepType_MAX = 2,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class ECameraShakeDurationType : uint8_t {
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3,
};

enum class EMultiChooseItemsType : uint8_t {
	AccReborn = 0,
	AddLifeCount = 1,
	AddStoreFood = 2,
	AddStoreFoodAndMood = 3,
	MAX = 4,
};

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
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

enum class ECombineTargetType : uint8_t {
	NewAsset = 0,
	FirstInputAsset = 1,
	LastInputAsset = 2,
	ECombineTargetType_MAX = 3,
};

enum class EAttributeType : uint8_t {
	HEALTH = 0,
	HUNGER = 1,
	STAMINE = 2,
	WEIGHT = 3,
	SPEED = 4,
	HOT = 5,
	COLD = 6,
	POISION = 7,
	LIFECOUNT = 8,
	LOYALTY = 9,
	MAX = 10,
};

enum class EGameServerType : uint8_t {
	UNKNOWN_SERVER_TYPE = 0,
	LOBBY_SERVER_TYPE = 1,
	LOGIC_SERVER_TYPE = 2,
	PUBLIC_SERVER_TYPE = 3,
	STORE_SERVER_TYPE = 4,
	BATTLE_SERVER_TYPE = 5,
	BATTLE_MANAGER_SERVER_TYPE = 6,
	PUBLIC_ROUTER_SERVER_TYPE = 7,
	STORE_CENTER_SERVER_TYPE = 8,
	EGameServerType_MAX = 9,
};

enum class EImageFilterParamType : uint8_t {
	FLOAT = 0,
	TEXTURE = 1,
	EImageFilterParamType_MAX = 2,
};

enum class EMeshVertexSculptBrushType : uint8_t {
	Move = 0,
	PullKelvin = 1,
	PullSharpKelvin = 2,
	Smooth = 3,
	SmoothFill = 4,
	Offset = 5,
	SculptView = 6,
	SculptMax = 7,
	Inflate = 8,
	ScaleKelvin = 9,
	Pinch = 10,
	TwistKelvin = 11,
	Flatten = 12,
	Plane = 13,
	PlaneViewAligned = 14,
	FixedPlane = 15,
	LastValue = 16,
	EMeshVertexSculptBrushType_MAX = 17,
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

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EMorphologyOperation : uint8_t {
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EMorphologyOperation_MAX = 4,
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

enum class EUserInterfaceActionType : uint8_t {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6,
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

enum class EStrandsTexturesTraceType : uint8_t {
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3,
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

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class ENiagaraStatEvaluationType : uint8_t {
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2,
};

enum class EInviteGuildJoinResponse : uint8_t {
	INVITEGUILDJOIN_RESPONSE_SUCCESS = 0,
	INVITEGUILDJOIN_RESPONSE_NO_AUTHORITY = 1,
	INVITEGUILDJOIN_RESPONSE_HAVEALLIANCE = 2,
	INVITEGUILDJOIN_RESPONSE_NO_GUILDOWNER = 3,
	INVITEGUILDJOIN_RESPONSE_ASYNCWAITING = 4,
	INVITEGUILDJOIN_RESPONSE_COOLTIME = 5,
	INVITEGUILDJOIN_RESPONSE_NO_GUILD = 6,
	INVITEGUILDJOIN_RESPONSE_SERVERGROUP = 7,
	INVITEGUILDJOIN_RESPONSE_FAILED = 8,
	INVITEGUILDJOIN_RESPONSE_GUANAIBATTLE = 9,
	INVITEGUILDJOIN_RESPONSE_MAX = 10,
};

enum class EGuildGetMemberKPILogResponse : uint8_t {
	GETMEMBERKPILOG_RESPONSE_SUCCESS = 0,
	GETMEMBERKPILOG_RESPONSE_ASYNCWAITING = 1,
	GETMEMBERKPILOG_RESPONSE_MAXCOUNT = 2,
	GETMEMBERKPILOG_RESPONSE_NOTFOUND = 3,
	GETMEMBERKPILOG_RESPONSE_FAILED = 4,
	GETMEMBERKPILOG_RESPONSE_MAX = 5,
};

enum class EBakedCurvatureColorMode : uint8_t {
	Grayscale = 0,
	RedBlue = 1,
	RedGreenBlue = 2,
	EBakedCurvatureColorMode_MAX = 3,
};

enum class EGmMsgType : uint8_t {
	None = 0,
	DestroyGuildStructureAndPlayersNoDrop = 1,
	CleanGuildGeneralsNoDrop = 2,
	CleanGuildHorsesNoDrop = 3,
	StartGuanAiBattle = 4,
	SetGuanAiParam = 5,
	CleanGuanAiParam = 6,
	SetTaiShouParam = 7,
	CleanTaiShouParam = 8,
	EGmMsgType_MAX = 9,
};

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
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

enum class EMagicLeapMeshState : uint8_t {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4,
};

enum class EXRVisualType : uint8_t {
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2,
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

enum class EBoneForwardAxis : uint8_t {
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	EBoneForwardAxis_MAX = 6,
};

enum class EUIWSWaterBodyType : uint8_t {
	River = 0,
	CustomWaterBody = 1,
	WaterBody = 2,
	EUIWSWaterBodyType_MAX = 3,
};

enum class EUIServerState : uint8_t {
	IDLE = 0,
	CONGESTION = 1,
	HOT = 2,
	MAX = 3,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

enum class EGroomNiagaraSolvers : uint8_t {
	None = 0,
	CosseratRods = 1,
	AngularSprings = 2,
	CustomSolver = 3,
	EGroomNiagaraSolvers_MAX = 4,
};

enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
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

enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class ELocationFilteringModeEnum : uint8_t {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2,
};

enum class EPlayerShowLockType : uint8_t {
	LockInvalidType = 0,
	CapitalCopper = 1,
	Level = 2,
	SkillLevel = 3,
	Achievement = 4,
	Item = 5,
	JueWei = 6,
	Quest = 7,
	OfficialJob = 8,
	GuildActivityPoint = 9,
	EPlayerShowLockType_MAX = 10,
};

enum class EBanner_State : uint8_t {
	BannerStop = 0,
	BannerUp = 1,
	BannerDown = 2,
	MAX = 3,
};

enum class EPerkState : uint8_t {
	CAN_LEARN = 0,
	HAS_LEARNED = 1,
	INSUFFICIENT_LEVEL = 2,
	INSUFFICIENT_POINT = 3,
	INSUFFICIENT_CAPITAL = 4,
	INSUFFICIENT_ITEM = 5,
	INSUFFICIENT_SKILLLEVEL = 6,
	INSUFFICIENT_PRESKILL = 7,
	NO_CHARACTER = 8,
	NO_CONTROLLER = 9,
	EPerkState_MAX = 10,
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

enum class DBLogPerkPointType : uint8_t {
	Invalid = 0,
	PerkPoint = 1,
	CraftPerkPoint = 2,
	HonorPoint = 3,
	DBLogPerkPointType_MAX = 4,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
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

enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4,
};

enum class EMobileReflectionCompression : uint8_t {
	Default = 0,
	On = 1,
	Off = 2,
	EMobileReflectionCompression_MAX = 3,
};

enum class EInventoryTypes : uint8_t {
	INVENTORY_TYPE_BAG = 0,
	INVENTORY_TYPE_EQUIPMENT = 1,
	INVENTORY_TYPE_SHORTCUT = 2,
	INVENTORY_TYPE_CRAFTPERK = 3,
	INVENTORY_TYPE_FUNCTION = 4,
	INVENTORY_TYPE_FACELIFT = 5,
	INVENTORY_TYPE_REMOTEBAG = 6,
	INVENTORY_TYPE_REMOTESHORTCUT = 7,
	INVENTORY_TYPE_REMOTECRAFTPERK = 8,
	INVENTORY_TYPE_REMOTEFUNCTION = 9,
	INVENTORY_TYPE_REMOTESHOP = 10,
	INVENTORY_TYPE_BATTLESTORE = 11,
	INVENTORY_TYPE_CROSSSERVERSTORE = 12,
	INVENTORY_TYPE_GUILDSHOP = 13,
	INVENTORY_TYPE_GUILDSIGN = 14,
	INVENTORY_TYPE_YUEDANPING = 15,
	INVENTORY_TYPE_FUEL = 16,
	INVENTORY_TYPE_FOOD = 17,
	INVENTORY_TYPE_APPEARANCE = 18,
	INVENTORY_TYPE_ALL = 19,
	INVENTORY_TYPE_MAX = 20,
};

enum class EMirrorOperationMode : uint8_t {
	MirrorAndAppend = 0,
	MirrorExisting = 1,
	EMirrorOperationMode_MAX = 2,
};

enum class ECustomTransitionType : uint8_t {
	Rlx = 0,
	Aim = 1,
	ECustomTransitionType_MAX = 2,
};

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class EResourceItemType : uint8_t {
	None = 0,
	WeaponEmbryo = 1,
	EquipmentEmbryo = 2,
	PlayerFacelift = 3,
	NPCFacelift = 4,
	MAX = 5,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

enum class EGameplayEffectReplicationMode : uint8_t {
	Minimal = 0,
	Mixed = 1,
	Full = 2,
	EGameplayEffectReplicationMode_MAX = 3,
};

enum class EActivityRankState : uint8_t {
	EActivityRankState_None = 0,
	EActivityRankState_Normal = 1,
	EActivityRankState_Settlement = 2,
	EActivityRankState_MAX = 3,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
};

enum class EEnvironmentVolumeType : uint8_t {
	EV_Normal = 0,
	EV_Hot = 1,
	EV_Cold = 2,
	EV_Poison = 3,
	EV_MAX = 4,
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

enum class ERootMotionMoveToActorTargetOffsetType : uint8_t {
	AlignFromTargetToSource = 0,
	AlignToTargetForward = 1,
	AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

enum class EMapStaticPOIType : uint8_t {
	None = 0,
	StrongHold = 1,
	Resource = 2,
	Hangup = 3,
	Monster = 4,
	Field = 5,
	Other = 6,
	EMapStaticPOIType_MAX = 7,
};

enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
};

enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class EMailAttachmentType : uint8_t {
	Normal = 0,
	Item = 1,
	Horse = 2,
	General = 3,
	AppearanceKit = 4,
	FashionKit = 5,
	Max = 6,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
};

enum class ENotifyMessageType : uint8_t {
	Empty = 0,
	Addition = 1,
	Remove = 2,
	Consume = 3,
	Spoil = 4,
	BuildStructure = 5,
	Guild = 6,
	Alliance = 7,
	TakeDamage = 8,
	VehicleTakeDamage = 9,
	MakeDamage = 10,
	Kill = 11,
	Exp = 12,
	TameSuccess = 13,
	OccupyFlag = 14,
	RequestJoinGuild = 15,
	RequestJoinAlliance = 16,
	Tips = 17,
	BuffBonusDamageMul = 18,
	BuffBonusDamageResMul = 19,
	Battle = 20,
	HighKillerSameTeam = 21,
	HighKiller = 22,
	BattleRelation = 23,
	ArtofWar = 24,
	XianChengOfficialSeal = 25,
	TaiShouOfficialSeal = 26,
	GuanAiOfficialSeal = 27,
	AddSkillLevel = 28,
	UnLockSkillLevel = 29,
	GuardRelationWithXianLing = 30,
	TransportData = 31,
	OpenBaoZangBox = 32,
	Quest = 33,
	OccupyResMulti = 34,
	TrafficGoods = 35,
	AddCapital = 36,
	RemoveCapital = 37,
	FallDamage = 38,
	TakeBuffDamage = 39,
	MakeBuffDamage = 40,
	ResetPoint = 41,
	MAX = 42,
};

enum class EGeoAnchorComponentDebugMode : uint8_t {
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2,
};

enum class EImageComponentDebugMode : uint8_t {
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EFaceComponentDebugMode : uint8_t {
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class ECameraShakeAttenuation : uint8_t {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class ENiagaraWeaponType : uint8_t {
	None = 0,
	Fish_Spear = 1,
	Sweep_Net = 2,
	ENiagaraWeaponType_MAX = 3,
};

enum class ENPCTalkFunction : uint8_t {
	None = 0,
	CloseTalk = 1,
	ReturnMainTalk = 2,
	OpenInventory = 3,
	NPCFollow = 4,
	NPCAggresion = 5,
	NPCSeneca = 6,
	NPCAttackFilter = 7,
	NPCCarray = 8,
	NPCSurrender = 9,
	CharacterRescue = 10,
	NPCAutoPick = 11,
	UnlockSkill = 12,
	NPCFollowRadius = 13,
	TransportPlayer = 14,
	GoodsSell = 15,
	GoodsRecycle = 16,
	TaxRevenue = 17,
	XianLingHuKouAward = 18,
	NPCResetPosition = 19,
	ENPCTalkFunction_MAX = 20,
};

enum class EHairLODSelectionType : uint8_t {
	Cpu = 0,
	Gpu = 1,
	EHairLODSelectionType_MAX = 2,
};

enum class EAuctionShopTime : uint8_t {
	AuctionShop_OneDay = 0,
	AuctionShop_ThreeDay = 1,
	AuctionShop_Max = 2,
};

enum class EItemTipsItemType : uint8_t {
	MeleeWeapon = 0,
	ShooterWeapon = 1,
	ThrowWeapon = 2,
	Armor = 3,
	Structure = 4,
	Resource = 5,
	Projectile = 6,
	BaoZang = 7,
	Perk = 8,
	YueDanPing = 9,
	FishingPod = 10,
	HorseFood = 11,
	HorseReins = 12,
	HorseSaddle = 13,
	FoodBox = 14,
	TrafficGoods = 15,
	Telescope = 16,
	CropSeed = 17,
	Max = 18,
};

enum class EGameplayEffectAttributeCaptureSource : uint8_t {
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class EShopPropState : uint8_t {
	SHOP_PROPS_HIDE = 0,
	SHOP_PROPS_SHOW = 1,
	Max = 2,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EQualitySettings : uint8_t {
	LOW = 0,
	MEDIUM = 1,
	HIGH = 2,
	CUSTOM = 3,
	EQualitySettings_MAX = 4,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	Unbounded = 3,
	EHMDTrackingOrigin_MAX = 4,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EARServicePermissionRequestResult : uint8_t {
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2,
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
	TC_ReflectionCapture = 13,
	TC_MAX = 14,
};

enum class ELeaveGuildResponse : uint8_t {
	LEAVEGUILD_RESPONSE_SUCCESS = 0,
	LEAVEGUILD_RESPONSE_ASYNCWAITING = 1,
	LEAVEGUILD_RESPONSE_INBATTLE = 2,
	LEAVEGUILD_RESPONSE_FAILED = 3,
	LEAVEGUILD_RESPONSE_MAX = 4,
};

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t {
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
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

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class EQuestVersionLimitType : uint8_t {
	None = 0,
	MainLandOnly = 1,
	NotMainLand = 2,
	Max = 3,
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

enum class EGooglePADCellularDataConfirmStatus : uint8_t {
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4,
};

enum class ELuminARTrackingState : uint8_t {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3,
};

enum class ESiegeEquipmentSlotType : uint8_t {
	EQUIPMENT_SLOT_TYPE_SIEGE_PLATFORM = 0,
	EQUIPMENT_SLOT_TYPE_SIEGE_FLAG = 1,
	EQUIPMENT_SLOT_TYPE_SIEGE_MAX = 2,
};

enum class EUIWSWaveSpectrumType : uint8_t {
	Phillips = 0,
	PiersonMoskowitz = 1,
	JONSWAP = 2,
	EUIWSWaveSpectrumType_MAX = 3,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
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

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class ENiagaraRibbonTessellationMode : uint8_t {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class EMoveSeatingCharSeatType : uint8_t {
	Normal = 0,
	Driver = 1,
	DrivePowerSeat = 2,
	NormalPowerSeat = 3,
	EMoveSeatingCharSeatType_MAX = 4,
};

enum class EHairCardsClusterType : uint8_t {
	Low = 0,
	High = 1,
	EHairCardsClusterType_MAX = 2,
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

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class ECustomAiMovingStateType : uint8_t {
	None = 0,
	Aborted = 1,
	AlwaysFollow = 2,
	ECustomAiMovingStateType_MAX = 3,
};

enum class EVirtualizationMode : uint8_t {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3,
};

enum class EDatasmithAreaLightActorType : uint8_t {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	MAX = 2,
};

enum class ESeasonRewardState : uint8_t {
	Season_Reward_Lock = 0,
	Season_Reward_Unlock = 1,
	Season_Reward_Complete = 2,
	Season_Reward_MAX = 3,
};

enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
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

enum class EGroomInterpolationWeight : uint8_t {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4,
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

enum class EPrefabVisualizerType : uint8_t {
	WireBox = 0,
	WireSphere = 1,
	EPrefabVisualizerType_MAX = 2,
};

enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
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

enum class ENavMeshLimitBoundaryMode : uint8_t {
	None = 0,
	Stop = 1,
	Slide = 2,
	ENavMeshLimitBoundaryMode_MAX = 3,
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

enum class ESetMontageType : uint8_t {
	None = 0,
	StartAim = 1,
	StartPull = 2,
	PullHold = 3,
	PullShake = 4,
	RlxReload = 5,
	AimReload = 6,
	ESetMontageType_MAX = 7,
};

enum class EGameServerOwner : uint8_t {
	OWNER_UNKNOWN = 0,
	OWNER_OFFICIAL = 1,
	OWNER_PRIVATE = 2,
	OWNER_TEST = 3,
	OWNER_MAX = 4,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class ECharacterMeshLODLevel : uint8_t {
	HIGH = 0,
	MEDIUM = 1,
	LOW = 2,
	MAX = 3,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class ENonlinearOperationType : uint8_t {
	Bend = 0,
	Flare = 1,
	Twist = 2,
	ENonlinearOperationType_MAX = 3,
};

enum class EBloomMethod : uint8_t {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class ENiagaraSimTarget : uint8_t {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2,
};

enum class EAIMoveOrderType : uint8_t {
	None = 0,
	MoveToLoc = 1,
	FollowMe = 2,
	FreeAttack = 3,
	KeepInPlace = 4,
	Rescue = 5,
	Injured = 6,
	EAIMoveOrderType_MAX = 7,
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

enum class ESubmixFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5,
};

enum class EViewGeneralSlotType : uint8_t {
	Angry = 0,
	Weak = 1,
	CertainSkill = 2,
	Skill = 3,
	MSkill = 4,
	HSkill = 5,
	MAX = 6,
};

enum class EARGeoTrackingState : uint8_t {
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4,
};

enum class ERobotState : uint8_t {
	ROBOT_STATE_START = 0,
	ROBOT_STATE_SESSION_LIST = 1,
	ROBOT_CREATE_ROLE = 2,
	ROBOT_SELECT_ROLE = 3,
	ROBOT_SELECT_MAP = 4,
	ROBOT_ENTER_MAP = 5,
	ROBOT_MAX = 6,
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

enum class ETickMode : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3,
};

enum class EGameplayAbilityInstancingPolicy : uint8_t {
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3,
};

enum class ELearnCraftPerkResponse : uint8_t {
	LEARNCRAFTPERK_RESPONSE_SUCCESS = 0,
	LEARNCRAFTPERK_RESPONSE_ASYNCWAITING = 1,
	LEARNCRAFTPERK_RESPONSE_NO_AUTHORITY = 2,
	LEARNCRAFTPERK_RESPONSE_CONDITION = 3,
	LEARNCRAFTPERK_RESPONSE_HAVE_LEARN = 4,
	LEARNCRAFTPERK_RESPONSE_EXP = 5,
	LEARNCRAFTPERK_RESPONSE_CAPITAL = 6,
	LEARNCRAFTPERK_RESPONSE_FAILED = 7,
	LEARNCRAFTPERK_RESPONSE_MAX = 8,
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

enum class EAnimalAIStatusType : uint8_t {
	Stun = 0,
	Idle = 1,
	Sleep = 2,
	Mate = 3,
	Pregnancy = 4,
	Wander = 5,
	Follow = 6,
	Feed = 7,
	Attack = 8,
	Flee = 9,
	Relaxed = 10,
	RoadPath = 11,
	MoveToDestLoc = 12,
	EAnimalAIStatusType_MAX = 13,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 3,
	Unknown = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5,
};

enum class ETaxEntryIndex : uint8_t {
	XianLingTaxRate = 0,
	TaiShouTaxRate = 1,
	CiShiTaxRate = 2,
	XianLingTaxRevenue = 3,
	TaiShouTaxRevenue = 4,
	CiShiTaxRevenue = 5,
	ETaxEntryIndex_MAX = 6,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
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

enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

enum class EBrushFalloffMode : uint8_t {
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2,
};

enum class ECraftPerkState : uint8_t {
	CAN_LEARN = 0,
	HAS_LEARNED = 1,
	LOCK = 2,
	CRAFTPERKSTATE_MAX = 3,
	ECraftPerkState_MAX = 4,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class EAttachVolumeType : uint8_t {
	AV_Point = 0,
	AV_Box = 1,
	AV_Cylinder = 2,
	AV_Sphere = 3,
	AV_MAX = 4,
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

enum class EPlayerCheatType : uint8_t {
	Invalid = 0,
	TooFarInteract = 1,
	ItemCheckError = 2,
	MeleeAttackError = 3,
	ShooterAttackError = 4,
	AbandonedFunctionError = 5,
	EPlayerCheatType_MAX = 6,
};

enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2,
};

enum class EBitmapCSType : uint8_t {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5,
};

enum class ENiagaraDefaultMode : uint8_t {
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3,
};

enum class ENDIStaticMesh_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EQuestState : uint8_t {
	None = 0,
	OnGoing = 1,
	Complete = 2,
	Finish = 3,
	Max = 4,
};

enum class ESetMemberLevelResponse : uint8_t {
	SETMEMBERLEVEL_RESPONSE_SUCCESS = 0,
	SETMEMBERLEVEL_RESPONSE_FAILED = 1,
	SETMEMBERLEVEL_RESPONSE_MAX = 2,
};

enum class EGuildImageBoolValue : uint8_t {
	Mirror = 0,
	Max = 1,
};

enum class EHandleSourcesMethod : uint8_t {
	DeleteSources = 0,
	HideSources = 1,
	KeepSources = 2,
	EHandleSourcesMethod_MAX = 3,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ECustomTeamAttitudeBehavior : uint8_t {
	None = 0,
	Attack = 1,
	RunssssAway = 2,
	ECustomTeamAttitudeBehavior_MAX = 3,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
};

enum class EFocusLostReason : uint8_t {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2,
};

enum class ELightmapType : uint8_t {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3,
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

enum class EIplDirectOcclusionMethod : uint8_t {
	RAYCAST = 0,
	VOLUMETRIC = 1,
	EIplDirectOcclusionMethod_MAX = 2,
};

enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4,
};

enum class ESubmixSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3,
};

enum class EGameplayTargetingConfirmation : uint8_t {
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4,
};

enum class EMeshBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	EMeshBoundaryConstraint_MAX = 3,
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
	EQuartzCommandQuantization_MAX = 19,
};

enum class ETransformMeshesTransformMode : uint8_t {
	SharedGizmo = 0,
	SharedGizmoLocal = 1,
	PerObjectGizmo = 2,
	LastValue = 3,
	ETransformMeshesTransformMode_MAX = 4,
};

enum class EOccupyStructure : uint8_t {
	PersonalFlag = 0,
	GuildBoundary = 1,
	EOccupyStructure_MAX = 2,
};

enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
};

enum class EDrawPolygonDrawMode : uint8_t {
	Freehand = 0,
	Circle = 1,
	Square = 2,
	Rectangle = 3,
	RoundedRectangle = 4,
	HoleyCircle = 5,
	EDrawPolygonDrawMode_MAX = 6,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class ETransportDataErrorType : uint8_t {
	NoError = 0,
	UNKNOWN_ERROR_TYPE = 1,
	CANTTRANSPORT_ERROR_TYPE = 2,
	SERVERID_ERROR_TYPE = 3,
	NOTWAR_ERROR_TYPE = 4,
	NOGENERAL_ERROR_TYPE = 5,
	NOHORSE_ERROR_TYPE = 6,
	NOBATTLE_ERROR_TYPE = 7,
	TRANSPORTTYPE_ERROR_TYPE = 8,
	BATTLEEND_ERROR_TYPE = 9,
	BATTLEHASEND_ERROR_TYPE = 10,
	NOGENERALSEAT_ERROR_TYPE = 11,
	NOHORSESEAT_ERROR_TYPE = 12,
	BEYONDDISTANCE = 13,
	TRANSPORTNOTEXISTENT = 14,
	HASVEHICLE_ERROR_TYPE = 15,
	WILLDEAD_ERROR_TYPE = 16,
	EnoughCapital_ERROR_TYPE = 17,
	COOLDOWN_ERROR_TYPE = 18,
	HORSEHASPLATFORM_ERROR_TYPE = 19,
	OVER_MAX_COUNT = 20,
	HAS_BATTLE_ERROR_TYPE = 21,
	ETransportDataErrorType_MAX = 22,
};

enum class EPTUITheme : uint8_t {
	Default = 0,
	Dark = 1,
	EPTUITheme_MAX = 2,
};

