#pragma once

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class E_ChargeVariableNames : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	NewEnumerator5 = 5,
	NewEnumerator6 = 6,
	NewEnumerator7 = 7,
	NewEnumerator8 = 8,
	NewEnumerator10 = 9,
	NewEnumerator11 = 10,
	NewEnumerator12 = 11,
	NewEnumerator13 = 12,
	E_MAX = 13,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EPrimalStructureElevatorState : uint8_t {
	PSLS_Down = 0,
	PSLS_Up = 1,
	PSLS_MAX = 2,
};

enum class SubscriptionMode : uint8_t {
	Accept = 0,
	Block = 1,
	Defer = 2,
	SubscriptionMode_MAX = 3,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class EPhaseRequirementWidgetVisualState : uint8_t {
	Neutral = 0,
	Positive = 1,
	Negative = 2,
	Custom = 3,
	EPhaseRequirementWidgetVisualState_MAX = 4,
};

enum class E_ZiplineMotorState : uint8_t {
	NewEnumerator3 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator4 = 4,
	NewEnumerator5 = 5,
	E_MAX = 6,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class EMissionTimerMode : uint8_t {
	HideTimer = 0,
	ShowTimeRemaining = 1,
	ShowTimeElapsed = 2,
	UseBPGetMissionTimerText = 3,
	EMissionTimerMode_MAX = 4,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class EParticleKey : uint8_t {
	Toggle = 0,
	Trigger = 1,
	EParticleKey_MAX = 2,
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

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAsComplex = 1,
	CTF_UseComplexAsSimple = 2,
	CTF_MAX = 3,
};

enum class EEditorMessageLogLevel : uint8_t {
	Error = 0,
	Warning = 1,
	Info = 2,
	Success = 3,
	EEditorMessageLogLevel_MAX = 4,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class ParticipantSpeakingUpdateRate : uint8_t {
	StateChange = 0,
	Never = 1,
	Update1Hz = 2,
	Update5Hz = 3,
	Update10Hz = 4,
	ParticipantSpeakingUpdateRate_MAX = 5,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
};

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_VelocityX = 1,
	EDPV_VelocityY = 2,
	EDPV_VelocityZ = 3,
	EDPV_VelocityMag = 4,
	EDPV_MAX = 5,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class EPrimalItemMessage : uint8_t {
	Broken = 0,
	Repaired = 1,
	MAX = 2,
	EPrimalItemMessage_MAX = 3,
};

enum class EMissionAlertType : uint8_t {
	Positive = 0,
	Neutral = 1,
	Negative = 2,
	EMissionAlertType_MAX = 3,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESettingsLockedAxis_MAX = 4,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EWorldBuffPropertyLocation : uint8_t {
	GameMode = 0,
	GameState = 1,
	EWorldBuffPropertyLocation_MAX = 2,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
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

enum class TransmissionMode : uint8_t {
	None = 0,
	Single = 1,
	All = 2,
	TransmissionMode_MAX = 3,
};

enum class ERenderModuleType : uint8_t {
	Sprites = 0,
	Ribbon = 1,
	ERenderModuleType_MAX = 2,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_MAX = 3,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class EConstraintTransform : uint8_t {
	Absoluate = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EHUDElementType : uint8_t {
	Text = 0,
	ProgressBar = 1,
	Image = 2,
	EHUDElementType_MAX = 3,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
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

enum class EPrimalCharacterStatusValue : uint8_t {
	Health = 0,
	Stamina = 1,
	Torpidity = 2,
	Oxygen = 3,
	Food = 4,
	Water = 5,
	Temperature = 6,
	Weight = 7,
	MeleeDamageMultiplier = 8,
	SpeedMultiplier = 9,
	TemperatureFortitude = 10,
	CraftingSpeedMultiplier = 11,
	MAX = 12,
	EPrimalCharacterStatusValue_MAX = 13,
};

enum class EDropItemIconAction : uint8_t {
	DA_NoAction = 0,
	DA_Equip = 1,
	DA_UnEquip = 2,
	DA_AddToSlot = 3,
	DA_RemoveFromSlot = 4,
	DA_ToRemoteInv = 5,
	DA_FromRemoteInv = 6,
	DA_RemoteEquip = 7,
	DA_MergeItemStack = 8,
	DA_SplitItemStack = 9,
	DA_SwapItems = 10,
	DA_UseWithItem = 11,
	DA_UnEquipTransferToLocal = 12,
	DA_RemoveItemSkin = 13,
	DA_SplitItemStackOne = 14,
	DA_RemoveWeaponAmmo = 15,
	DA_FromRemoteInvToSlot = 16,
	DA_ToRemoteInvFromSlot = 17,
	DA_EquipLocalFromRemote = 18,
	DA_EquipRemoteFromLocal = 19,
	DA_UnequipRemote = 20,
	DA_UnequipTransferToRemote = 21,
	DA_ToArkInv = 22,
	DA_FromArkInv = 23,
	MAX = 24,
	EDropItemIconAction_MAX = 25,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class ConnectionState : uint8_t {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4,
};

enum class ShapeshifterIdleAnimEnum : uint8_t {
	NewEnumerator5 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator4 = 4,
	NewEnumerator3 = 5,
	NewEnumerator6 = 6,
	NewEnumerator7 = 7,
	NewEnumerator8 = 8,
	NewEnumerator9 = 9,
	NewEnumerator10 = 10,
	ShapeshifterIdleAnimEnum_MAX = 11,
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

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6,
};

enum class EHubSubMenu : uint8_t {
	Inventory = 0,
	Engrams = 1,
	TribeManager = 2,
	TameGroups = 3,
	TamingList = 4,
	SurvivalProfile = 5,
	MissionList = 6,
	MAX = 7,
	EHubSubMenu_MAX = 8,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
	EAILockSource_MAX = 5,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
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

enum class EBoneModifierType : uint8_t {
	HEAD = 0,
	NECK = 1,
	NECKLENGTH = 2,
	CHEST = 3,
	SHOULDERS = 4,
	ARMLENGTH = 5,
	UPPERARM = 6,
	LOWERARM = 7,
	HAND = 8,
	LEGLENGTH = 9,
	UPPERLEG = 10,
	LOWERLEG = 11,
	FOOT = 12,
	HIP = 13,
	TORSO = 14,
	UPPERFACESIZE = 15,
	LOWERFACESIZE = 16,
	TORSODEPTH = 17,
	HEADHEIGHT = 18,
	HEADWIDTH = 19,
	HEADDEPTH = 20,
	TORSOHEIGHT = 21,
	MAX = 22,
	EBoneModifierType_MAX = 23,
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

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class EStretch : uint8_t {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFill = 3,
	EStretch_MAX = 4,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class MissionMetaTags : uint8_t {
	NewEnumerator1 = 0,
	NewEnumerator0 = 1,
	NewEnumerator6 = 2,
	NewEnumerator2 = 3,
	NewEnumerator5 = 4,
	NewEnumerator3 = 5,
	NewEnumerator4 = 6,
	NewEnumerator7 = 7,
	NewEnumerator8 = 8,
	NewEnumerator9 = 9,
	NewEnumerator10 = 10,
	MissionMetaTags_MAX = 11,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class ELockedAxis : uint8_t {
	Default = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Custom = 4,
	None = 5,
	ELockedAxis_MAX = 6,
};

enum class LoginState : uint8_t {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4,
};

enum class EHUDElementHorizontalAlignment : uint8_t {
	Center = 0,
	Left = 1,
	Right = 2,
	EHUDElementHorizontalAlignment_MAX = 3,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EPrimalARKTributeDataType : uint8_t {
	Items = 0,
	TamedDinos = 1,
	CharacterData = 2,
	MAX = 3,
	EPrimalARKTributeDataType_MAX = 4,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
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
	PPI_MAX = 24,
};

enum class ESTOFNotificationType : uint8_t {
	Death = 0,
	TribeEliminated = 1,
	MatchVictory = 2,
	MatchDraw = 3,
	MAX = 4,
	ESTOFNotificationType_MAX = 5,
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

enum class EGlassTransparencyType : uint8_t {
	TwoWay = 0,
	OneWayA = 1,
	OneWayB = 2,
	Opaque = 3,
	EGlassTransparencyType_MAX = 4,
};

enum class EActorListsBP : uint8_t {
	AL_PLAYERS = 0,
	AL_PLAYERSTATES = 1,
	AL_FLOATINGHUD = 2,
	AL_UNSTASISEDACTORS = 3,
	AL_NPC = 4,
	AL_NPC_ACTIVE = 5,
	AL_FORCEDHUD = 6,
	AL_NPCZONEMANAGERS = 7,
	AL_PLAYERCONTROLLERS = 8,
	AL_BEDS = 9,
	AL_BIOMEZONEVOLUMES = 10,
	AL_NPC_DEAD = 11,
	AL_DAYCYCLEAMBIENTSOUNDS = 12,
	AL_STRUCTURESCLIENT = 13,
	AL_STRUCTUREPREVENTIONVOLUMES = 14,
	AL_TRANSPONDERS = 15,
	AL_CUSTOMACTORLISTS = 16,
	AL_BLOCKINGVOLUMES = 17,
	AL_AMBIENTSOUNDS = 18,
	AL_CONNECTEDSHOOTERCHARACTERS = 19,
	AL_EXPLORERNOTECHESTS = 20,
	AL_SUPPLYCRATEVOLUMES = 21,
	AL_TAMED_DINOS = 22,
	MAX = 23,
	EActorListsBP_MAX = 24,
};

enum class FolderWidgetType : uint8_t {
	FWT_Back = 0,
	FWT_Folder = 1,
	FWT_CustomFolder = 2,
	FWT_MAX = 3,
};

enum class ENativeMissionMetaTag : uint8_t {
	INVALID = 0,
	GENESIS_VR_BOSS_UNLOCK = 1,
	ARCTIC_MISSION = 2,
	BOG_MISSION = 3,
	LUNAR_MISSION = 4,
	OCEAN_MISSION = 5,
	VOLCANIC_MISSION = 6,
	NORMAL_DIFFICULTY = 7,
	ALPHA_DIFFICULTY = 8,
	BETA_DIFFICULTY = 9,
	GAMMA_DIFFICULTY = 10,
	MAX = 11,
	ENativeMissionMetaTag_MAX = 12,
};

enum class ECollisionChannel : uint8_t {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Visibility = 2,
	ECC_PhysicsBody = 3,
	ECC_Destructible = 4,
	ECC_GameTraceChannel1 = 5,
	ECC_GameTraceChannel2 = 6,
	ECC_GameTraceChannel3 = 7,
	ECC_GameTraceChannel4 = 8,
	ECC_GameTraceChannel5 = 9,
	ECC_GameTraceChannel6 = 10,
	ECC_GameTraceChannel7 = 11,
	ECC_GameTraceChannel8 = 12,
	ECC_GameTraceChannel9 = 13,
	ECC_GameTraceChannel10 = 14,
	ECC_GameTraceChannel11 = 15,
	ECC_GameTraceChannel12 = 16,
	ECC_GameTraceChannel13 = 17,
	ECC_GameTraceChannel14 = 18,
	ECC_GameTraceChannel15 = 19,
	ECC_GameTraceChannel16 = 20,
	ECC_GameTraceChannel17 = 21,
	ECC_GameTraceChannel18 = 22,
	ECC_GameTraceChannel19 = 23,
	ECC_GameTraceChannel20 = 24,
	ECC_GameTraceChannel21 = 25,
	ECC_GameTraceChannel22 = 26,
	ECC_GameTraceChannel23 = 27,
	ECC_GameTraceChannel24 = 28,
	ECC_GameTraceChannel25 = 29,
	ECC_GameTraceChannel26 = 30,
	ECC_GameTraceChannel27 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_OverlapAllDynamic_Deprecated = 33,
	ECC_OverlapAllStatic_Deprecated = 34,
	ECC_MAX = 35,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
	ENavigationOptionFlag_MAX = 4,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class RootMotionMovementMode : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	NewEnumerator5 = 5,
	NewEnumerator6 = 6,
	NewEnumerator7 = 7,
	NewEnumerator8 = 8,
	NewEnumerator9 = 9,
	RootMotionMovementMode_MAX = 10,
};

enum class EDataDisplay : uint8_t {
	MISSION_INFO = 0,
	LEADERBOARDS = 1,
	EDataDisplay_MAX = 2,
};

enum class E_DinoClimberState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator13 = 1,
	NewEnumerator22 = 2,
	NewEnumerator1 = 3,
	NewEnumerator2 = 4,
	NewEnumerator8 = 5,
	NewEnumerator18 = 6,
	NewEnumerator12 = 7,
	NewEnumerator14 = 8,
	NewEnumerator16 = 9,
	NewEnumerator15 = 10,
	E_MAX = 11,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class EBiomeZone : uint8_t {
	None = 0,
	Beach = 1,
	Canyon = 2,
	River = 3,
	Grassland = 4,
	Swamp = 5,
	Jungle = 6,
	RedwoodForest = 7,
	Mountain = 8,
	Snow = 9,
	Ocean = 10,
	Lava = 11,
	Surface = 12,
	FertileChamber = 13,
	BioluminescentChamber = 14,
	ElementChamber = 15,
	Wasteland = 16,
	EBiomeZone_MAX = 17,
};

enum class ETmZoneFlags : uint8_t {
	TMP_ZF_NONE = 0,
	UnusedSpacer_2 = 1,
	TMP_ZF_STALL = 2,
	UnusedSpacer_4 = 3,
	TMP_ZF_IDLE = 4,
	UnusedSpacer_6 = 5,
	UnusedSpacer_7 = 6,
	UnusedSpacer_8 = 7,
	TMP_ZF_CONTEXT_SWITCH = 8,
	UnusedSpacer_10 = 9,
	UnusedSpacer_11 = 10,
	UnusedSpacer_12 = 11,
	UnusedSpacer_13 = 12,
	UnusedSpacer_14 = 13,
	UnusedSpacer_15 = 14,
	UnusedSpacer_16 = 15,
	TMP_ZF_PLOT_TIME = 16,
	ETmZoneFlags_MAX = 17,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class EPlayerActionIndex : uint8_t {
	None = 0,
	WhistleFollow = 1,
	WhistleFollowOne = 2,
	WhistleStop = 3,
	WhistleStopOne = 4,
	WhistleAggressive = 5,
	WhistleNeutral = 6,
	WhistlePassive = 7,
	WhistlePassiveFlee = 8,
	WhistleAttackTarget = 9,
	WhistleLandFlyerOne = 10,
	ShowInventory = 11,
	ShowCraftables = 12,
	ShowTribeManager = 13,
	Poop = 14,
	UnHideCompanion = 15,
	ShowEmoteSelection = 16,
	Emote_HatSwitch = 17,
	Emote_Salute = 18,
	Emote_Sorry = 19,
	Emote_Thank = 20,
	Emote_Wave = 21,
	Emote_Laugh = 22,
	Emote_Yes = 23,
	Emote_No = 24,
	Emote_Taunt = 25,
	Emote_Cheer = 26,
	Emote_FriendlyLowerHands = 27,
	Emote_MAX = 28,
	EPlayerActionIndex_MAX = 29,
};

enum class EInputConsumeOptions : uint8_t {
	ICO_ConsumeAll = 0,
	ICO_ConsumeBoundKeys = 1,
	ICO_ConsumeNone = 2,
	ICO_MAX = 3,
};

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_World = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_Tangent = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_RefPose = 4,
	TRANSFORMSOURCE_MAX = 5,
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

enum class EAudioFadeModel : uint8_t {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	EAudioFadeModel_MAX = 3,
};

enum class ECommentBoxMode : uint8_t {
	GroupMovement = 0,
	NoGroupMovement = 1,
	ECommentBoxMode_MAX = 2,
};

enum class EVoronoiBlendType : uint8_t {
	Flat = 0,
	Closest = 1,
	SecondClosest = 2,
	Cellular = 3,
	Organic = 4,
	EVoronoiBlendType_MAX = 5,
};

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EBPMapCheckSeverity : uint8_t {
	Info = 0,
	Warning = 1,
	PerformanceWarning = 2,
	Error = 3,
	EBPMapCheckSeverity_MAX = 4,
};

enum class EMeshComponentUpdateFlag : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickPoseWhenRendered = 2,
	LocalControlTickPoseAndRefreshBones = 3,
	EMeshComponentUpdateFlag_MAX = 4,
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
	EComponentType_MAX = 8,
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

enum class EEnvTestWeight : uint8_t {
	None = 0,
	Square = 1,
	Inverse = 2,
	Absolute = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6,
};

enum class EJugbugType : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	EJugbugType_MAX = 2,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class EChatType : uint8_t {
	GlobalChat = 0,
	ProximityChat = 1,
	RadioChat = 2,
	GlobalTribeChat = 3,
	AllianceChat = 4,
	MAX = 5,
	EChatType_MAX = 6,
};

enum class ENetworkModeResult : uint8_t {
	Yes = 0,
	No = 1,
	ENetworkModeResult_MAX = 2,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class ELootItemType : uint8_t {
	None = 0,
	Element = 1,
	Hexagons = 2,
	ResourceCommon = 3,
	ResourceUncommon = 4,
	ResourceRare = 5,
	ArmorTier1 = 6,
	ArmorTier2 = 7,
	ArmorTier3 = 8,
	ArmorTek = 9,
	WeaponTier1 = 10,
	WeaponTier2 = 11,
	WeaponTier3 = 12,
	WeaponTek = 13,
	AmmoTier1 = 14,
	AmmoTier2 = 15,
	AmmoTier3 = 16,
	Saddle = 17,
	ELootItemType_MAX = 18,
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

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class EConsoleType : uint8_t {
	CONSOLE_Any = 0,
	CONSOLE_Mobile = 1,
	CONSOLE_XBOXONE = 2,
	CONSOLE_MAX = 3,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class UberpounceType : uint8_t {
	NewEnumerator2 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator4 = 3,
	UberpounceType_MAX = 4,
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

enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	AllMatching = 1,
	EEnvQueryRunMode_MAX = 2,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
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

enum class EFocusMoveDirection : uint8_t {
	Next = 0,
	Previous = 1,
	EFocusMoveDirection_MAX = 2,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	Max = 2,
	EControlConstraint_MAX = 3,
};

enum class EMassTeleportState : uint8_t {
	INITIATED = 0,
	TRIGGERED_SUCCESS = 1,
	TRIGGERED_FAILED = 2,
	COMPLETED = 3,
	CANCELLED = 4,
	EMassTeleportState_MAX = 5,
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

enum class EDinoTamedOrder : uint8_t {
	SetAggressionPassive = 0,
	SetAggressionNeutral = 1,
	SetAggressionAggressive = 2,
	SetAggressionAttackTarget = 3,
	ToggleFollowMe = 4,
	FollowMe = 5,
	StopFollowing = 6,
	CycleFollowDistance = 7,
	SetAggressionPassiveFlee = 8,
	LandingToMe = 9,
	MAX = 10,
	EDinoTamedOrder_MAX = 11,
};

enum class EEnvTestCondition : uint8_t {
	NoCondition = 0,
	AtLeast = 1,
	UpTo = 2,
	Match = 3,
	EEnvTestCondition_MAX = 4,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class ESPMessageType : uint8_t {
	Default = 0,
	Error = 1,
	Warning = 2,
	Helpful = 3,
	ESPMessageType_MAX = 4,
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

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
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

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_MAX = 3,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class ELeaderboardGroupByMode : uint8_t {
	None = 0,
	First = 1,
	Min = 2,
	Max = 3,
	Sum = 4,
	Count = 5,
	Average = 6,
	ELeaderboardGroupByMode_MAX = 7,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
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

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	Constant = 3,
	EEnvTestScoreEquation_MAX = 4,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
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

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class ETargetingTeamBehavior : uint8_t {
	ExactMatch = 0,
	FriendlyWith = 1,
	PrioritizeButIncludeAny = 2,
	ETargetingTeamBehavior_MAX = 3,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
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

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	EThreePlayerSplitScreenType_MAX = 2,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
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

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class EPrimalCharacterInputType : uint8_t {
	PrimaryFire = 0,
	Targeting = 1,
	AltFire = 2,
	SwitchWeapon = 3,
	Reload = 4,
	Crouch = 5,
	Prone = 6,
	CrouchProneToggle = 7,
	SwitchMap = 8,
	DinoAttack = 9,
	EPrimalCharacterInputType_MAX = 10,
};

enum class ETraceType : uint8_t {
	TT_LineTrace = 0,
	TT_ArcTrace = 1,
	TT_Max = 2,
};

enum class E_NocturnalStateLock : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	E_MAX = 3,
};

enum class E_PredatorClimbingState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator8 = 2,
	NewEnumerator2 = 3,
	NewEnumerator11 = 4,
	NewEnumerator5 = 5,
	NewEnumerator3 = 6,
	NewEnumerator7 = 7,
	NewEnumerator9 = 8,
	NewEnumerator10 = 9,
	NewEnumerator4 = 10,
	NewEnumerator6 = 11,
	E_MAX = 12,
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

enum class EEngramGroup : uint8_t {
	UnusedSpacer_1 = 0,
	UnusedSpacer_2 = 1,
	ARK_PRIME = 2,
	UnusedSpacer_4 = 3,
	ARK_SCORCHEDEARTH = 4,
	UnusedSpacer_6 = 5,
	UnusedSpacer_7 = 6,
	UnusedSpacer_8 = 7,
	ARK_TEK = 8,
	UnusedSpacer_10 = 9,
	UnusedSpacer_11 = 10,
	UnusedSpacer_12 = 11,
	UnusedSpacer_13 = 12,
	UnusedSpacer_14 = 13,
	UnusedSpacer_15 = 14,
	UnusedSpacer_16 = 15,
	ARK_UNLEARNED = 16,
	UnusedSpacer_18 = 17,
	UnusedSpacer_19 = 18,
	UnusedSpacer_20 = 19,
	UnusedSpacer_21 = 20,
	UnusedSpacer_22 = 21,
	UnusedSpacer_23 = 22,
	UnusedSpacer_24 = 23,
	UnusedSpacer_25 = 24,
	UnusedSpacer_26 = 25,
	UnusedSpacer_27 = 26,
	UnusedSpacer_28 = 27,
	UnusedSpacer_29 = 28,
	UnusedSpacer_30 = 29,
	UnusedSpacer_31 = 30,
	UnusedSpacer_32 = 31,
	ARK_ABERRATION = 32,
	UnusedSpacer_34 = 33,
	UnusedSpacer_35 = 34,
	UnusedSpacer_36 = 35,
	UnusedSpacer_37 = 36,
	UnusedSpacer_38 = 37,
	UnusedSpacer_39 = 38,
	UnusedSpacer_40 = 39,
	UnusedSpacer_41 = 40,
	UnusedSpacer_42 = 41,
	UnusedSpacer_43 = 42,
	UnusedSpacer_44 = 43,
	UnusedSpacer_45 = 44,
	UnusedSpacer_46 = 45,
	UnusedSpacer_47 = 46,
	UnusedSpacer_48 = 47,
	UnusedSpacer_49 = 48,
	UnusedSpacer_50 = 49,
	UnusedSpacer_51 = 50,
	UnusedSpacer_52 = 51,
	UnusedSpacer_53 = 52,
	UnusedSpacer_54 = 53,
	UnusedSpacer_55 = 54,
	UnusedSpacer_56 = 55,
	UnusedSpacer_57 = 56,
	UnusedSpacer_58 = 57,
	UnusedSpacer_59 = 58,
	UnusedSpacer_60 = 59,
	UnusedSpacer_61 = 60,
	UnusedSpacer_62 = 61,
	UnusedSpacer_63 = 62,
	UnusedSpacer_64 = 63,
	ARK_EXTINCTION = 64,
	UnusedSpacer_66 = 65,
	UnusedSpacer_67 = 66,
	UnusedSpacer_68 = 67,
	UnusedSpacer_69 = 68,
	UnusedSpacer_70 = 69,
	UnusedSpacer_71 = 70,
	UnusedSpacer_72 = 71,
	UnusedSpacer_73 = 72,
	UnusedSpacer_74 = 73,
	UnusedSpacer_75 = 74,
	UnusedSpacer_76 = 75,
	UnusedSpacer_77 = 76,
	UnusedSpacer_78 = 77,
	UnusedSpacer_79 = 78,
	UnusedSpacer_80 = 79,
	UnusedSpacer_81 = 80,
	UnusedSpacer_82 = 81,
	UnusedSpacer_83 = 82,
	UnusedSpacer_84 = 83,
	UnusedSpacer_85 = 84,
	UnusedSpacer_86 = 85,
	UnusedSpacer_87 = 86,
	UnusedSpacer_88 = 87,
	UnusedSpacer_89 = 88,
	UnusedSpacer_90 = 89,
	UnusedSpacer_91 = 90,
	UnusedSpacer_92 = 91,
	UnusedSpacer_93 = 92,
	UnusedSpacer_94 = 93,
	UnusedSpacer_95 = 94,
	UnusedSpacer_96 = 95,
	UnusedSpacer_97 = 96,
	UnusedSpacer_98 = 97,
	UnusedSpacer_99 = 98,
	UnusedSpacer_100 = 99,
	UnusedSpacer_101 = 100,
	UnusedSpacer_102 = 101,
	UnusedSpacer_103 = 102,
	UnusedSpacer_104 = 103,
	UnusedSpacer_105 = 104,
	UnusedSpacer_106 = 105,
	UnusedSpacer_107 = 106,
	UnusedSpacer_108 = 107,
	UnusedSpacer_109 = 108,
	UnusedSpacer_110 = 109,
	UnusedSpacer_111 = 110,
	UnusedSpacer_112 = 111,
	UnusedSpacer_113 = 112,
	UnusedSpacer_114 = 113,
	UnusedSpacer_115 = 114,
	UnusedSpacer_116 = 115,
	UnusedSpacer_117 = 116,
	UnusedSpacer_118 = 117,
	UnusedSpacer_119 = 118,
	UnusedSpacer_120 = 119,
	UnusedSpacer_121 = 120,
	UnusedSpacer_122 = 121,
	UnusedSpacer_123 = 122,
	UnusedSpacer_124 = 123,
	UnusedSpacer_125 = 124,
	UnusedSpacer_126 = 125,
	UnusedSpacer_127 = 126,
	UnusedSpacer_128 = 127,
	ARK_GENESIS = 128,
	ARK_GEN2 = 129,
	MAX = 130,
	EEngramGroup_MAX = 131,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
	EAIOptionFlag_MAX = 4,
};

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
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

enum class E_HoverSkiffBeamState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator3 = 1,
	NewEnumerator1 = 2,
	NewEnumerator11 = 3,
	NewEnumerator2 = 4,
	NewEnumerator12 = 5,
	NewEnumerator9 = 6,
	NewEnumerator10 = 7,
	NewEnumerator5 = 8,
	NewEnumerator7 = 9,
	E_MAX = 10,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_MAX = 3,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	EAttachLocation_MAX = 3,
};

enum class ChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3,
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

enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_World = 0,
	TRANSFORM_View = 1,
	TRANSFORM_Local = 2,
	TRANSFORM_Tangent = 3,
	TRANSFORM_MAX = 4,
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
	PF_MAX = 55,
};

enum class ECompanionState : uint8_t {
	IDLE = 0,
	FOCUSED = 1,
	EVENT = 2,
	MONOLOGUE = 3,
	ASLEEP = 4,
	CUSTOM = 5,
	ECompanionState_MAX = 6,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	EBoneTranslationRetargetingMode_MAX = 3,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class EEndPlayReason : uint8_t {
	ActorDestroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class EClimbingAnimationType : uint8_t {
	Up = 0,
	Down = 1,
	Right = 2,
	Left = 3,
	MeleeUp = 4,
	MeleeRight = 5,
	MeleeLeft = 6,
	FinishUp = 7,
	FinishDown = 8,
	HangingFwd = 9,
	HangingMelee = 10,
	HangingFinishUp = 11,
	HangingFinishDown = 12,
	JumpUp = 13,
	JumpUpRight = 14,
	JumpUpLeft = 15,
	SlideDown = 16,
	AttachUp = 17,
	AttachDown = 18,
	AttachHangingUp = 19,
	AttachHangingDown = 20,
	FlipLeft = 21,
	FlipRight = 22,
	FlipUp = 23,
	FlipDown = 24,
	TurnUp = 25,
	TurnDown = 26,
	TurnRight = 27,
	TurnLeft = 28,
	OpenInventory = 29,
	OpenInventoryHanging = 30,
	QuakeFall = 31,
	MAX = 32,
	EClimbingAnimationType_MAX = 33,
};

enum class E_HoverSkiffHoverState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator3 = 1,
	NewEnumerator1 = 2,
	NewEnumerator13 = 3,
	NewEnumerator14 = 4,
	E_MAX = 5,
};

enum class EMovementMode : uint8_t {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_Falling = 2,
	MOVE_Swimming = 3,
	MOVE_Flying = 4,
	MOVE_Custom = 5,
	MOVE_MAX = 6,
};

enum class EBabyCuddleType : uint8_t {
	PET = 0,
	FOOD = 1,
	WALK = 2,
	MAX = 3,
	EBabyCuddleType_MAX = 4,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class UContextMenuItemSwitchMode : uint8_t {
	None = 0,
	Radio = 1,
	Checkbox = 2,
	UContextMenuItemSwitchMode_MAX = 3,
};

enum class ETickingGroup : uint8_t {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PreCloth = 4,
	TG_StartCloth = 5,
	TG_EndCloth = 6,
	TG_PostPhysics = 7,
	TG_PostUpdateWork = 8,
	TG_NewlySpawned = 9,
	TG_MAX = 10,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	QueryAndPhysics = 2,
	ECollisionEnabled_MAX = 3,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class ESpeedTreeWindType : uint8_t {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_MAX = 6,
};

enum class ScoutTrackerStates : uint8_t {
	NewEnumerator3 = 0,
	NewEnumerator4 = 1,
	NewEnumerator1 = 2,
	NewEnumerator0 = 3,
	NewEnumerator2 = 4,
	NewEnumerator6 = 5,
	NewEnumerator5 = 6,
	ScoutTrackerStates_MAX = 7,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EWorldBuffDifficultyType : uint8_t {
	GAMMA = 0,
	BETA = 1,
	ALPHA = 2,
	OTHER = 3,
	EWorldBuffDifficultyType_MAX = 4,
};

enum class EMatineeCaptureType : uint8_t {
	AVI = 0,
	BMP = 1,
	PNG = 2,
	JPEG = 3,
	EMatineeCaptureType_MAX = 4,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	EAnimationMode_MAX = 2,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class Para_WarningMode : uint8_t {
	NewEnumerator1 = 0,
	NewEnumerator4 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	Para_MAX = 4,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_MAX = 2,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
	EFrictionCombineMode_MAX = 4,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class ECorePerceptionTypes : uint8_t {
	Sight = 0,
	Hearing = 1,
	Damage = 2,
	Touch = 3,
	Team = 4,
	Prediction = 5,
	MAX = 6,
	ECorePerceptionTypes_MAX = 7,
};

enum class EMissionRelatedPropertyUsage : uint8_t {
	Prefix = 0,
	Suffix = 1,
	Description = 2,
	EMissionRelatedPropertyUsage_MAX = 3,
};

enum class E_GliderStates : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator3 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	E_MAX = 4,
};

enum class TTSDestination : uint8_t {
	RemoteTransmission = 0,
	LocalPlayback = 1,
	RemoteTransmissionWithLocalPlayback = 2,
	QueuedRemoteTransmission = 3,
	QueuedLocalPlayback = 4,
	QueuedRemoteTransmissionWithLocalPlayback = 5,
	ScreenReader = 6,
	TTSDestination_MAX = 7,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class EShooterPhysMaterialType : uint8_t {
	Unknown = 0,
	Concrete = 1,
	Dirt = 2,
	Water = 3,
	Metal = 4,
	Wood = 5,
	Grass = 6,
	Glass = 7,
	Flesh = 8,
	Leaves = 9,
	Rock = 10,
	Sand = 11,
	Snow = 12,
	Corruption = 13,
	Lava = 14,
	Acid = 15,
	MAX = 16,
	EShooterPhysMaterialType_MAX = 17,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class EMissionRelatedPropertyType : uint8_t {
	Name_PropertyType = 0,
	String_PropertyType = 1,
	Boolean_PropertyType = 2,
	Integer_PropertyType = 3,
	Float_PropertyType = 4,
	Double_PropertyType = 5,
	EMissionRelatedPropertyType_MAX = 6,
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

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	EEnvTestDistance_MAX = 3,
};

enum class ENetModeBP : uint8_t {
	Standalone = 0,
	DedicatedServer = 1,
	ListenServer = 2,
	Client = 3,
	ENetModeBP_MAX = 4,
};

enum class EColorChannelTarget : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	All = 4,
	EColorChannelTarget_MAX = 5,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	EEnvQueryTrace_MAX = 3,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	PreciseTap = 1,
	EButtonTouchMethod_MAX = 2,
};

enum class EPhysicsSceneType : uint8_t {
	PST_Sync = 0,
	PST_Cloth = 1,
	PST_Async = 2,
	PST_MAX = 3,
};

enum class ESeedCropPhase : uint8_t {
	Seedling = 0,
	Midling = 1,
	Growthling = 2,
	Fruiting = 3,
	MAX = 4,
	ESeedCropPhase_MAX = 5,
};

enum class EInAppPurchaseState : uint8_t {
	Success = 0,
	Failed = 1,
	Cancelled = 2,
	Invalid = 3,
	NotAllowed = 4,
	Unknown = 5,
	EInAppPurchaseState_MAX = 6,
};

enum class E_DinoState_MilkGlider : uint8_t {
	NewEnumerator29 = 0,
	NewEnumerator30 = 1,
	NewEnumerator31 = 2,
	NewEnumerator32 = 3,
	E_DinoState_MAX = 4,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EAlignVerticalUI : uint8_t {
	Top = 0,
	Center = 1,
	Bottom = 2,
	EAlignVerticalUI_MAX = 3,
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

enum class ECustomDepth : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	ECustomDepth_MAX = 3,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class IceKaijuAttackList : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	IceKaijuAttackList_MAX = 2,
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

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class EListDisplay : uint8_t {
	MISSIONS = 0,
	EFFECTS = 1,
	EListDisplay_MAX = 2,
};

enum class UberpounceState : uint8_t {
	NewEnumerator3 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator4 = 4,
	NewEnumerator6 = 5,
	UberpounceState_MAX = 6,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class ETriangleSortAxis : uint8_t {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class SubscriptionReply : uint8_t {
	Allow = 0,
	Block = 1,
	SubscriptionReply_MAX = 2,
};

enum class EHUDElementAnchorMode : uint8_t {
	Specified = 0,
	QuickbarLeft = 1,
	QuickbarRight = 2,
	QuickbarTop = 3,
	EHUDElementAnchorMode_MAX = 4,
};

enum class ETouchType : uint8_t {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	Ended = 3,
	NumTypes = 4,
	ETouchType_MAX = 5,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class ECompositingSampleCount : uint8_t {
	UnusedSpacer_1 = 0,
	One = 1,
	Two = 2,
	UnusedSpacer_4 = 3,
	Four = 4,
	UnusedSpacer_6 = 5,
	UnusedSpacer_7 = 6,
	UnusedSpacer_8 = 7,
	Eight = 8,
	ECompositingSampleCount_MAX = 9,
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

enum class EPrimalEquipmentType : uint8_t {
	Hat = 0,
	Shirt = 1,
	Pants = 2,
	Boots = 3,
	Gloves = 4,
	DinoSaddle = 5,
	Trophy = 6,
	Costume = 7,
	Shield = 8,
	Weapon = 9,
	Snapshot = 10,
	MAX = 11,
	EPrimalEquipmentType_MAX = 12,
};

enum class E_HoverSkiffSide : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	E_MAX = 5,
};

enum class EMissionDispatcherTriggerMode : uint8_t {
	AutoStartMission = 0,
	Ignore = 1,
	ActivateViaMultiUse = 2,
	EMissionDispatcherTriggerMode_MAX = 3,
};

enum class ETrackInterpMode : uint8_t {
	FTI_Set = 0,
	FTI_Add = 1,
	FTI_Multiply = 2,
	FTI_MAX = 3,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class EStencilAlliance : uint8_t {
	None = 0,
	Friendly = 1,
	NPC = 2,
	NPCFleeing = 3,
	Hostile = 4,
	Ally = 5,
	Element = 6,
	EStencilAlliance_MAX = 7,
};

enum class EPrimalItemType : uint8_t {
	MiscConsumable = 0,
	Equipment = 1,
	Weapon = 2,
	Ammo = 3,
	Structure = 4,
	Resource = 5,
	Skin = 6,
	WeaponAttachment = 7,
	Artifact = 8,
	MAX = 9,
	EPrimalItemType_MAX = 10,
};

enum class E_DinoClimber_TraceType : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator13 = 1,
	NewEnumerator23 = 2,
	NewEnumerator1 = 3,
	E_DinoClimber_MAX = 4,
};

enum class EDistanceFieldTwoSidedOverride : uint8_t {
	DFTSO_NotOverriden = 0,
	DFTSO_OverrideTrue = 1,
	DFTSO_OverrideFalse = 2,
	DFTSO_Max = 3,
};

enum class ControlDirection : uint8_t {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	ControlDirection_MAX = 5,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
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

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class ETribeGroupPermission : uint8_t {
	STRUCTUREACTIVATE = 0,
	INVENTORYACCESS = 1,
	PET_ORDER = 2,
	PET_RIDE = 3,
	GENERAL_STRUCTUREDEMOLISH = 4,
	GENERAL_STRUCTUREATTACHMENT = 5,
	GENERAL_BUILDSTRUCTUREINRANGE = 6,
	INVITEMEMBER = 7,
	PROMOTEMEMBER = 8,
	DEMOTEMEMBER = 9,
	BANISHMEMBER = 10,
	PET_UNCLAIM = 11,
	TELEPORT_MEMBERS = 12,
	TELEPORT_DINOS = 13,
	ETribeGroupPermission_MAX = 14,
};

enum class ESlateCheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ESlateCheckBoxState_MAX = 3,
};

enum class Shapeshifter_Large_PounceState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator2 = 1,
	NewEnumerator3 = 2,
	NewEnumerator1 = 3,
	Shapeshifter_Large_MAX = 4,
};

enum class ForestKaijuMovementMode : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator8 = 4,
	NewEnumerator9 = 5,
	NewEnumerator4 = 6,
	NewEnumerator5 = 7,
	NewEnumerator6 = 8,
	NewEnumerator7 = 9,
	ForestKaijuMovementMode_MAX = 10,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class E_EnforcerClimbingState : uint8_t {
	NewEnumerator2 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	E_MAX = 3,
};

enum class EPrimalCharacterStatusState : uint8_t {
	Dead = 0,
	Winded = 1,
	Starvation = 2,
	Dehydration = 3,
	Suffocation = 4,
	Encumbered = 5,
	Hypothermia = 6,
	Hyperthermia = 7,
	Injured = 8,
	KnockedOut = 9,
	Sleeping = 10,
	Cold = 11,
	Hot = 12,
	Crafting = 13,
	MAX = 14,
	EPrimalCharacterStatusState_MAX = 15,
};

enum class ECameraStyle : uint8_t {
	Default = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	FreeCam = 3,
	Orbit = 4,
	Spectator = 5,
	ECameraStyle_MAX = 6,
};

enum class EPawnActionAbortState : uint8_t {
	NotBeingAborted = 0,
	MarkPendingAbort = 1,
	LatentAbortInProgress = 2,
	AbortDone = 3,
	MAX = 4,
	EPawnActionAbortState_MAX = 5,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
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

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAsceding = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class Cardinal_Directions_Enum : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	NewEnumerator5 = 5,
	NewEnumerator6 = 6,
	NewEnumerator7 = 7,
	Cardinal_Directions_MAX = 8,
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
	TEXTUREGROUP_SourceRez = 28,
	TEXTUREGROUP_MAX = 29,
};

enum class E_StegoBackplateMode : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	E_MAX = 3,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class EPrimalConsumableType : uint8_t {
	Food = 0,
	Water = 1,
	Medicine = 2,
	Other = 3,
	MAX = 4,
	EPrimalConsumableType_MAX = 5,
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

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class ETranslucencyLightingMode : uint8_t {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_Surface = 2,
	TLM_MAX = 3,
};

enum class EPrimalStatsValueTypes : uint8_t {
	TotalShots = 0,
	Misses = 1,
	HitsStructure = 2,
	HitsDinoBody = 3,
	HitsDinoCritical = 4,
	HitsPlayerBody = 5,
	HitsPlayerCritical = 6,
	MAX = 7,
	EPrimalStatsValueTypes_MAX = 8,
};

enum class ESpawnPattern : uint8_t {
	Circle = 0,
	Grid = 1,
	Random = 2,
	ESpawnPattern_MAX = 3,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
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
	MATUSAGE_UI = 10,
	MATUSAGE_GroundClutter = 11,
	MATUSAGE_MAX = 12,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class EGrappleState : uint8_t {
	GRAPPLE_Idle = 0,
	GRAPPLE_Pulling = 1,
	GRAPPLE_Releasing = 2,
	GRAPPLE_Custom = 3,
	GRAPPLE_Max = 4,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_MAX = 2,
};

enum class EXPType : uint8_t {
	XP_GENERIC = 0,
	XP_KILL = 1,
	XP_HARVEST = 2,
	XP_CRAFT = 3,
	XP_SPECIAL = 4,
	XP_ALPHAKILL = 5,
	MAX = 6,
	EXPType_MAX = 7,
};

enum class DeinonychusCameraState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	DeinonychusCameraState_MAX = 3,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EAntiDupeTransactionLog : uint8_t {
	Item_Upload = 0,
	Dino_Upload = 1,
	Player_Upload = 2,
	MAX_ENTRY = 3,
	EAntiDupeTransactionLog_MAX = 4,
};

enum class EHUDElementVerticalAlignment : uint8_t {
	Center = 0,
	Top = 1,
	Bottom = 2,
	EHUDElementVerticalAlignment_MAX = 3,
};

enum class E_ChargeManagerType : uint8_t {
	NewEnumerator12 = 0,
	NewEnumerator7 = 1,
	NewEnumerator0 = 2,
	NewEnumerator1 = 3,
	NewEnumerator2 = 4,
	NewEnumerator3 = 5,
	NewEnumerator4 = 6,
	NewEnumerator9 = 7,
	NewEnumerator5 = 8,
	NewEnumerator6 = 9,
	NewEnumerator8 = 10,
	NewEnumerator10 = 11,
	NewEnumerator11 = 12,
	NewEnumerator13 = 13,
	E_MAX = 14,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EPawnActionEventType : uint8_t {
	Invalid = 0,
	FailedToStart = 1,
	FinishedAborting = 2,
	FinishedExecution = 3,
	Push = 4,
	EPawnActionEventType_MAX = 5,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MAX = 3,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class DeviceType : uint8_t {
	NullDevice = 0,
	SpecificDevice = 1,
	DefaultSystemDevice = 2,
	DefaultCommunicationDevice = 3,
	DeviceType_MAX = 4,
};

enum class ETextureRenderTargetFormat : uint8_t {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_R16f = 3,
	RTF_RG16f = 4,
	RTF_RGBA16f = 5,
	RTF_R32f = 6,
	RTF_RG32f = 7,
	RTF_RGBA32f = 8,
	RTF_MAX = 9,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EBoolExecResult : uint8_t {
	Success = 0,
	Failed = 1,
	EBoolExecResult_MAX = 2,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class EAntiAliasingMethodUI : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MAX = 3,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_MAX = 3,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
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
	DBM_MAX = 11,
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

enum class EMaxConcurrentResolutionRule : uint8_t {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule_MAX = 4,
};

enum class EReflectionDFAOOption : uint8_t {
	Default = 0,
	UsedWithDFAO = 1,
	NotUsedWithDFAO = 2,
	EReflectionDFAOOption_MAX = 3,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Custom = 1,
	TLT_MAX = 2,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class IceJumperShortDashTypes_Enum : uint8_t {
	NewEnumerator5 = 0,
	NewEnumerator3 = 1,
	NewEnumerator0 = 2,
	NewEnumerator1 = 3,
	IceJumperShortDashTypes_MAX = 4,
};

enum class EPrimalStructurePlacerState : uint8_t {
	Default = 0,
	FadeAway = 1,
	PlacingStructure = 2,
	EPrimalStructurePlacerState_MAX = 3,
};

enum class ScoutRemoteReturnCode : uint8_t {
	NewEnumerator3 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator4 = 4,
	ScoutRemoteReturnCode_MAX = 5,
};

enum class ELevelExperienceRampType : uint8_t {
	Player = 0,
	DinoEasy = 1,
	DinoMedium = 2,
	DinoHard = 3,
	MAX = 4,
	ELevelExperienceRampType_MAX = 5,
};

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class ScoutStrafeState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator4 = 2,
	NewEnumerator5 = 3,
	ScoutStrafeState_MAX = 4,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	EButtonClickMethod_MAX = 3,
};

enum class TekAlarmTargetTypes : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	NewEnumerator5 = 5,
	TekAlarmTargetTypes_MAX = 6,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
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

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class ELocalizedLanguage : uint8_t {
	ca = 0,
	cs = 1,
	da = 2,
	de = 3,
	en = 4,
	es = 5,
	eu = 6,
	fi = 7,
	fr = 8,
	hu = 9,
	it = 10,
	ja = 11,
	ka = 12,
	ko = 13,
	nl = 14,
	pl = 15,
	pt_BR = 16,
	ru = 17,
	sv = 18,
	th = 19,
	tr = 20,
	uk = 21,
	zh = 22,
	zh__Hans__CN = 23,
	zh__TW = 24,
	Max = 25,
	ELocalizedLanguage_MAX = 26,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
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

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class EPostProcessVolumeType : uint8_t {
	Generic = 0,
	Cave = 1,
	Water = 2,
	EPostProcessVolumeType_MAX = 3,
};

enum class FishingStates : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator2 = 1,
	NewEnumerator3 = 2,
	NewEnumerator4 = 3,
	FishingStates_MAX = 4,
};

enum class LatchedJumpType : uint8_t {
	NewEnumerator3 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator4 = 4,
	LatchedJumpType_MAX = 5,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class E_SinoMovementState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	E_MAX = 4,
};

enum class E_DinoClimberState_RockDrake : uint8_t {
	NewEnumerator26 = 0,
	NewEnumerator23 = 1,
	NewEnumerator22 = 2,
	E_DinoClimberState_MAX = 3,
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

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_MAX = 2,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class ELeaderboardColumnName : uint8_t {
	MissionTag = 0,
	PlayerNetId = 1,
	TribeId = 2,
	TimestampUtc = 3,
	FloatValue = 4,
	IntValue = 5,
	NameValue = 6,
	StringValue = 7,
	ELeaderboardColumnName_MAX = 8,
};

enum class EParticleScreenAlignment : uint8_t {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_MAX = 6,
};

enum class EKeyboardFocusCause : uint8_t {
	Mouse = 0,
	Keyboard = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EKeyboardFocusCause_MAX = 6,
};

enum class E_TekRunningState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	E_MAX = 3,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
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
	TC_MAX = 10,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class ESoundDistanceModel : uint8_t {
	ATTENUATION_Linear = 0,
	ATTENUATION_Logarithmic = 1,
	ATTENUATION_Inverse = 2,
	ATTENUATION_LogReverse = 3,
	ATTENUATION_NaturalSound = 4,
	ATTENUATION_MAX = 5,
};

enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR = 0,
	SCS_FinalColorLDR = 1,
	SCS_MAX = 2,
};

enum class ESimpleCurve : uint8_t {
	Linear = 0,
	Pow0_6 = 1,
	Pow1_1 = 2,
	Pow1_6 = 3,
	Pow2_1 = 4,
	Pow2_6 = 5,
	Pow3_1 = 6,
	Pow3_6 = 7,
	PowCos0_6 = 8,
	PowCos1_1 = 9,
	PowCos1_6 = 10,
	PowCos2_1 = 11,
	PowCos2_6 = 12,
	PowCos3_1 = 13,
	PowCos3_6 = 14,
	PowSin0_6 = 15,
	PowSin1_1 = 16,
	PowSin1_6 = 17,
	PowSin2_1 = 18,
	PowSin2_6 = 19,
	PowSin3_1 = 20,
	PowSin3_6 = 21,
	PowMinCos0_6 = 22,
	PowMinCos1_1 = 23,
	PowMinCos1_6 = 24,
	PowMinCos2_1 = 25,
	PowMinCos2_6 = 26,
	PowMinCos3_1 = 27,
	PowMinCos3_6 = 28,
	PowMax0_6 = 29,
	PowMax1_1 = 30,
	PowMax1_6 = 31,
	PowMax2_1 = 32,
	PowMax2_6 = 33,
	PowMax3_1 = 34,
	PowMax3_6 = 35,
	ESimpleCurve_MAX = 36,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
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

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORN_MAX = 5,
	ENetDormancy_MAX = 6,
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

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	EAnimGroupRole_MAX = 3,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EChatSendMode : uint8_t {
	GlobalChat = 0,
	GlobalTribeChat = 1,
	LocalChat = 2,
	AllianceChat = 3,
	MAX = 4,
	EChatSendMode_MAX = 5,
};

enum class EServerOctreeGroup : uint8_t {
	STASISCOMPONENTS = 0,
	PLAYERPAWNS = 1,
	DINOPAWNS = 2,
	PAWNS = 3,
	STRUCTURES = 4,
	TARGETABLEACTORS = 5,
	PLAYERS_CONNECTED = 6,
	SPATIALNETWORKEDACTORS = 7,
	SPATIALNETWORKEDACTORS_DORMANT = 8,
	ALL_SPATIAL = 9,
	THERMALSTRUCTURES = 10,
	STRUCTURES_CORE = 11,
	DINOPAWNS_TAMED = 12,
	PLAYERS_AND_TAMED_DINOS = 13,
	PLAYERS_CONNECTED_AND_TAMED_DINOS = 14,
	DINOFOODCONTAINER = 15,
	GRENADES = 16,
	TREESAPTAPS = 17,
	LARGEUNSTASISRANGE = 18,
	TRAPS = 19,
	MAX = 20,
	EServerOctreeGroup_MAX = 21,
};

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
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

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class IceJumperAbilities_Enum : uint8_t {
	NewEnumerator3 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator4 = 4,
	IceJumperAbilities_MAX = 5,
};

enum class ENoiseFunction : uint8_t {
	NOISEFUNCTION_Simplex = 0,
	NOISEFUNCTION_Perlin = 1,
	NOISEFUNCTION_Gradient = 2,
	NOISEFUNCTION_FastGradient = 3,
	NOISEFUNCTION_MAX = 4,
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

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class ENetMoveType : uint8_t {
	ServerMove = 0,
	ServerMoveOld = 1,
	ServerMoveWithRotation = 2,
	ServerMoveOldWithRotation = 3,
	ServerMoveOnlyRotation = 4,
	ENetMoveType_MAX = 5,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class ESleepFamily : uint8_t {
	SF_Normal = 0,
	SF_Sensitive = 1,
	SF_MAX = 2,
};

enum class EMediaPlayerStreamModes : uint8_t {
	MASM_FromMemory = 0,
	MASM_FromUrl = 1,
	MASM_MAX = 2,
};

enum class EMenuPlacement : uint8_t {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_ComboBox = 1,
	MenuPlacement_ComboBoxRight = 2,
	MenuPlacement_MenuRight = 3,
	MenuPlacement_AboveAnchor = 4,
	MenuPlacement_MAX = 5,
};

enum class EPawnActionResult : uint8_t {
	InProgress = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	EPawnActionResult_MAX = 4,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class EChatMessageType : uint8_t {
	MyMessage = 0,
	SameTeamMessage = 1,
	DifferentTeamMessage = 2,
	SystemWideMessage = 3,
	SameAllianceMessage = 4,
	MAX = 5,
	EChatMessageType_MAX = 6,
};

enum class EMissionState : uint8_t {
	ServerSetup = 0,
	Activated = 1,
	Suspended = 2,
	Deactivated = 3,
	EMissionState_MAX = 4,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
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

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class EPrimalItemStat : uint8_t {
	GenericQuality = 0,
	Armor = 1,
	MaxDurability = 2,
	WeaponDamagePercent = 3,
	WeaponClipAmmo = 4,
	HypothermalInsulation = 5,
	Weight = 6,
	HyperthermalInsulation = 7,
	MAX = 8,
	EPrimalItemStat_MAX = 9,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class DesertKaiju_ControlNodes : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	DesertKaiju_MAX = 3,
};

enum class EActorMetricsType : uint8_t {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3,
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

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_MAX = 3,
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

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class EPartyReservationResult : uint8_t {
	RequestPending = 0,
	GeneralError = 1,
	PartyLimitReached = 2,
	IncorrectPlayerCount = 3,
	RequestTimedOut = 4,
	ReservationDuplicate = 5,
	ReservationNotFound = 6,
	ReservationAccepted = 7,
	ReservationDenied = 8,
	ReservationDenied_Banned = 9,
	ReservationRequestCanceled = 10,
	EPartyReservationResult_MAX = 11,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_Disable = 2,
	PBO_MAX = 3,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_MAX = 5,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class ELeaderboardOrdering : uint8_t {
	Ascending = 0,
	Descending = 1,
	ELeaderboardOrdering_MAX = 2,
};

enum class TTSMessageState : uint8_t {
	Playing = 0,
	Enqueued = 1,
	TTSMessageState_MAX = 2,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class ETmMessageFlags : uint8_t {
	UnusedSpacer_1 = 0,
	TMP_MF_SEVERITY_LOG = 1,
	TMP_MF_SEVERITY_WARNING = 2,
	UnusedSpacer_4 = 3,
	TMP_MF_SEVERITY_ERROR = 4,
	UnusedSpacer_6 = 5,
	UnusedSpacer_7 = 6,
	UnusedSpacer_8 = 7,
	TMP_MF_SEVERITY_RESERVED = 8,
	UnusedSpacer_10 = 9,
	UnusedSpacer_11 = 10,
	UnusedSpacer_12 = 11,
	UnusedSpacer_13 = 12,
	UnusedSpacer_14 = 13,
	UnusedSpacer_15 = 14,
	TMP_MF_SEVERITY_MASK = 15,
	TMP_MF_ZONE_LABEL = 16,
	UnusedSpacer_18 = 17,
	UnusedSpacer_19 = 18,
	UnusedSpacer_20 = 19,
	UnusedSpacer_21 = 20,
	UnusedSpacer_22 = 21,
	UnusedSpacer_23 = 22,
	UnusedSpacer_24 = 23,
	UnusedSpacer_25 = 24,
	UnusedSpacer_26 = 25,
	UnusedSpacer_27 = 26,
	UnusedSpacer_28 = 27,
	UnusedSpacer_29 = 28,
	UnusedSpacer_30 = 29,
	UnusedSpacer_31 = 30,
	UnusedSpacer_32 = 31,
	TMP_MF_ZONE_SUBLABEL = 32,
	UnusedSpacer_34 = 33,
	UnusedSpacer_35 = 34,
	UnusedSpacer_36 = 35,
	UnusedSpacer_37 = 36,
	UnusedSpacer_38 = 37,
	UnusedSpacer_39 = 38,
	UnusedSpacer_40 = 39,
	UnusedSpacer_41 = 40,
	UnusedSpacer_42 = 41,
	UnusedSpacer_43 = 42,
	UnusedSpacer_44 = 43,
	UnusedSpacer_45 = 44,
	UnusedSpacer_46 = 45,
	UnusedSpacer_47 = 46,
	UnusedSpacer_48 = 47,
	UnusedSpacer_49 = 48,
	UnusedSpacer_50 = 49,
	UnusedSpacer_51 = 50,
	UnusedSpacer_52 = 51,
	UnusedSpacer_53 = 52,
	UnusedSpacer_54 = 53,
	UnusedSpacer_55 = 54,
	UnusedSpacer_56 = 55,
	UnusedSpacer_57 = 56,
	UnusedSpacer_58 = 57,
	UnusedSpacer_59 = 58,
	UnusedSpacer_60 = 59,
	UnusedSpacer_61 = 60,
	UnusedSpacer_62 = 61,
	UnusedSpacer_63 = 62,
	UnusedSpacer_64 = 63,
	TMP_MF_ZONE_SHOW_IN_PARENTS = 64,
	UnusedSpacer_66 = 65,
	UnusedSpacer_67 = 66,
	UnusedSpacer_68 = 67,
	UnusedSpacer_69 = 68,
	UnusedSpacer_70 = 69,
	UnusedSpacer_71 = 70,
	UnusedSpacer_72 = 71,
	UnusedSpacer_73 = 72,
	UnusedSpacer_74 = 73,
	UnusedSpacer_75 = 74,
	UnusedSpacer_76 = 75,
	UnusedSpacer_77 = 76,
	UnusedSpacer_78 = 77,
	UnusedSpacer_79 = 78,
	UnusedSpacer_80 = 79,
	UnusedSpacer_81 = 80,
	UnusedSpacer_82 = 81,
	UnusedSpacer_83 = 82,
	UnusedSpacer_84 = 83,
	UnusedSpacer_85 = 84,
	UnusedSpacer_86 = 85,
	UnusedSpacer_87 = 86,
	UnusedSpacer_88 = 87,
	UnusedSpacer_89 = 88,
	UnusedSpacer_90 = 89,
	UnusedSpacer_91 = 90,
	UnusedSpacer_92 = 91,
	UnusedSpacer_93 = 92,
	UnusedSpacer_94 = 93,
	UnusedSpacer_95 = 94,
	UnusedSpacer_96 = 95,
	UnusedSpacer_97 = 96,
	UnusedSpacer_98 = 97,
	UnusedSpacer_99 = 98,
	UnusedSpacer_100 = 99,
	UnusedSpacer_101 = 100,
	UnusedSpacer_102 = 101,
	UnusedSpacer_103 = 102,
	UnusedSpacer_104 = 103,
	UnusedSpacer_105 = 104,
	UnusedSpacer_106 = 105,
	UnusedSpacer_107 = 106,
	UnusedSpacer_108 = 107,
	UnusedSpacer_109 = 108,
	UnusedSpacer_110 = 109,
	UnusedSpacer_111 = 110,
	UnusedSpacer_112 = 111,
	UnusedSpacer_113 = 112,
	UnusedSpacer_114 = 113,
	UnusedSpacer_115 = 114,
	UnusedSpacer_116 = 115,
	UnusedSpacer_117 = 116,
	UnusedSpacer_118 = 117,
	UnusedSpacer_119 = 118,
	UnusedSpacer_120 = 119,
	UnusedSpacer_121 = 120,
	UnusedSpacer_122 = 121,
	UnusedSpacer_123 = 122,
	UnusedSpacer_124 = 123,
	UnusedSpacer_125 = 124,
	UnusedSpacer_126 = 125,
	UnusedSpacer_127 = 126,
	UnusedSpacer_128 = 127,
	TMP_MF_ZONE_RESERVED01 = 128,
	UnusedSpacer_130 = 129,
	UnusedSpacer_131 = 130,
	UnusedSpacer_132 = 131,
	UnusedSpacer_133 = 132,
	UnusedSpacer_134 = 133,
	UnusedSpacer_135 = 134,
	UnusedSpacer_136 = 135,
	UnusedSpacer_137 = 136,
	UnusedSpacer_138 = 137,
	UnusedSpacer_139 = 138,
	UnusedSpacer_140 = 139,
	UnusedSpacer_141 = 140,
	UnusedSpacer_142 = 141,
	UnusedSpacer_143 = 142,
	UnusedSpacer_144 = 143,
	UnusedSpacer_145 = 144,
	UnusedSpacer_146 = 145,
	UnusedSpacer_147 = 146,
	UnusedSpacer_148 = 147,
	UnusedSpacer_149 = 148,
	UnusedSpacer_150 = 149,
	UnusedSpacer_151 = 150,
	UnusedSpacer_152 = 151,
	UnusedSpacer_153 = 152,
	UnusedSpacer_154 = 153,
	UnusedSpacer_155 = 154,
	UnusedSpacer_156 = 155,
	UnusedSpacer_157 = 156,
	UnusedSpacer_158 = 157,
	UnusedSpacer_159 = 158,
	UnusedSpacer_160 = 159,
	UnusedSpacer_161 = 160,
	UnusedSpacer_162 = 161,
	UnusedSpacer_163 = 162,
	UnusedSpacer_164 = 163,
	UnusedSpacer_165 = 164,
	UnusedSpacer_166 = 165,
	UnusedSpacer_167 = 166,
	UnusedSpacer_168 = 167,
	UnusedSpacer_169 = 168,
	UnusedSpacer_170 = 169,
	UnusedSpacer_171 = 170,
	UnusedSpacer_172 = 171,
	UnusedSpacer_173 = 172,
	UnusedSpacer_174 = 173,
	UnusedSpacer_175 = 174,
	UnusedSpacer_176 = 175,
	UnusedSpacer_177 = 176,
	UnusedSpacer_178 = 177,
	UnusedSpacer_179 = 178,
	UnusedSpacer_180 = 179,
	UnusedSpacer_181 = 180,
	UnusedSpacer_182 = 181,
	UnusedSpacer_183 = 182,
	UnusedSpacer_184 = 183,
	UnusedSpacer_185 = 184,
	UnusedSpacer_186 = 185,
	UnusedSpacer_187 = 186,
	UnusedSpacer_188 = 187,
	UnusedSpacer_189 = 188,
	UnusedSpacer_190 = 189,
	UnusedSpacer_191 = 190,
	UnusedSpacer_192 = 191,
	UnusedSpacer_193 = 192,
	UnusedSpacer_194 = 193,
	UnusedSpacer_195 = 194,
	UnusedSpacer_196 = 195,
	UnusedSpacer_197 = 196,
	UnusedSpacer_198 = 197,
	UnusedSpacer_199 = 198,
	UnusedSpacer_200 = 199,
	UnusedSpacer_201 = 200,
	UnusedSpacer_202 = 201,
	UnusedSpacer_203 = 202,
	UnusedSpacer_204 = 203,
	UnusedSpacer_205 = 204,
	UnusedSpacer_206 = 205,
	UnusedSpacer_207 = 206,
	UnusedSpacer_208 = 207,
	UnusedSpacer_209 = 208,
	UnusedSpacer_210 = 209,
	UnusedSpacer_211 = 210,
	UnusedSpacer_212 = 211,
	UnusedSpacer_213 = 212,
	UnusedSpacer_214 = 213,
	UnusedSpacer_215 = 214,
	UnusedSpacer_216 = 215,
	UnusedSpacer_217 = 216,
	UnusedSpacer_218 = 217,
	UnusedSpacer_219 = 218,
	UnusedSpacer_220 = 219,
	UnusedSpacer_221 = 220,
	UnusedSpacer_222 = 221,
	UnusedSpacer_223 = 222,
	UnusedSpacer_224 = 223,
	UnusedSpacer_225 = 224,
	UnusedSpacer_226 = 225,
	UnusedSpacer_227 = 226,
	UnusedSpacer_228 = 227,
	UnusedSpacer_229 = 228,
	UnusedSpacer_230 = 229,
	UnusedSpacer_231 = 230,
	UnusedSpacer_232 = 231,
	UnusedSpacer_233 = 232,
	UnusedSpacer_234 = 233,
	UnusedSpacer_235 = 234,
	UnusedSpacer_236 = 235,
	UnusedSpacer_237 = 236,
	UnusedSpacer_238 = 237,
	UnusedSpacer_239 = 238,
	UnusedSpacer_240 = 239,
	TMP_MF_ZONE_MASK = 240,
	ETmMessageFlags_MAX = 241,
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

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class HighlightStartingPoint : uint8_t {
	TopLeft = 0,
	Center = 1,
	HighlightStartingPoint_MAX = 2,
};

enum class EClimbingMode : uint8_t {
	None = 0,
	Attached = 1,
	Finalizing = 2,
	MAX = 3,
	EClimbingMode_MAX = 4,
};

enum class E_TekThrusterState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator4 = 3,
	E_MAX = 4,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class EViewModeIndex : uint8_t {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	UnusedSpacer_8 = 7,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	UnusedSpacer_14 = 13,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_Max = 17,
	UnusedSpacer_19 = 18,
	UnusedSpacer_20 = 19,
	UnusedSpacer_21 = 20,
	UnusedSpacer_22 = 21,
	UnusedSpacer_23 = 22,
	UnusedSpacer_24 = 23,
	UnusedSpacer_25 = 24,
	UnusedSpacer_26 = 25,
	UnusedSpacer_27 = 26,
	UnusedSpacer_28 = 27,
	UnusedSpacer_29 = 28,
	UnusedSpacer_30 = 29,
	UnusedSpacer_31 = 30,
	UnusedSpacer_32 = 31,
	UnusedSpacer_33 = 32,
	UnusedSpacer_34 = 33,
	UnusedSpacer_35 = 34,
	UnusedSpacer_36 = 35,
	UnusedSpacer_37 = 36,
	UnusedSpacer_38 = 37,
	UnusedSpacer_39 = 38,
	UnusedSpacer_40 = 39,
	UnusedSpacer_41 = 40,
	UnusedSpacer_42 = 41,
	UnusedSpacer_43 = 42,
	UnusedSpacer_44 = 43,
	UnusedSpacer_45 = 44,
	UnusedSpacer_46 = 45,
	UnusedSpacer_47 = 46,
	UnusedSpacer_48 = 47,
	UnusedSpacer_49 = 48,
	UnusedSpacer_50 = 49,
	UnusedSpacer_51 = 50,
	UnusedSpacer_52 = 51,
	UnusedSpacer_53 = 52,
	UnusedSpacer_54 = 53,
	UnusedSpacer_55 = 54,
	UnusedSpacer_56 = 55,
	UnusedSpacer_57 = 56,
	UnusedSpacer_58 = 57,
	UnusedSpacer_59 = 58,
	UnusedSpacer_60 = 59,
	UnusedSpacer_61 = 60,
	UnusedSpacer_62 = 61,
	UnusedSpacer_63 = 62,
	UnusedSpacer_64 = 63,
	UnusedSpacer_65 = 64,
	UnusedSpacer_66 = 65,
	UnusedSpacer_67 = 66,
	UnusedSpacer_68 = 67,
	UnusedSpacer_69 = 68,
	UnusedSpacer_70 = 69,
	UnusedSpacer_71 = 70,
	UnusedSpacer_72 = 71,
	UnusedSpacer_73 = 72,
	UnusedSpacer_74 = 73,
	UnusedSpacer_75 = 74,
	UnusedSpacer_76 = 75,
	UnusedSpacer_77 = 76,
	UnusedSpacer_78 = 77,
	UnusedSpacer_79 = 78,
	UnusedSpacer_80 = 79,
	UnusedSpacer_81 = 80,
	UnusedSpacer_82 = 81,
	UnusedSpacer_83 = 82,
	UnusedSpacer_84 = 83,
	UnusedSpacer_85 = 84,
	UnusedSpacer_86 = 85,
	UnusedSpacer_87 = 86,
	UnusedSpacer_88 = 87,
	UnusedSpacer_89 = 88,
	UnusedSpacer_90 = 89,
	UnusedSpacer_91 = 90,
	UnusedSpacer_92 = 91,
	UnusedSpacer_93 = 92,
	UnusedSpacer_94 = 93,
	UnusedSpacer_95 = 94,
	UnusedSpacer_96 = 95,
	UnusedSpacer_97 = 96,
	UnusedSpacer_98 = 97,
	UnusedSpacer_99 = 98,
	UnusedSpacer_100 = 99,
	UnusedSpacer_101 = 100,
	UnusedSpacer_102 = 101,
	UnusedSpacer_103 = 102,
	UnusedSpacer_104 = 103,
	UnusedSpacer_105 = 104,
	UnusedSpacer_106 = 105,
	UnusedSpacer_107 = 106,
	UnusedSpacer_108 = 107,
	UnusedSpacer_109 = 108,
	UnusedSpacer_110 = 109,
	UnusedSpacer_111 = 110,
	UnusedSpacer_112 = 111,
	UnusedSpacer_113 = 112,
	UnusedSpacer_114 = 113,
	UnusedSpacer_115 = 114,
	UnusedSpacer_116 = 115,
	UnusedSpacer_117 = 116,
	UnusedSpacer_118 = 117,
	UnusedSpacer_119 = 118,
	UnusedSpacer_120 = 119,
	UnusedSpacer_121 = 120,
	UnusedSpacer_122 = 121,
	UnusedSpacer_123 = 122,
	UnusedSpacer_124 = 123,
	UnusedSpacer_125 = 124,
	UnusedSpacer_126 = 125,
	UnusedSpacer_127 = 126,
	UnusedSpacer_128 = 127,
	UnusedSpacer_129 = 128,
	UnusedSpacer_130 = 129,
	UnusedSpacer_131 = 130,
	UnusedSpacer_132 = 131,
	UnusedSpacer_133 = 132,
	UnusedSpacer_134 = 133,
	UnusedSpacer_135 = 134,
	UnusedSpacer_136 = 135,
	UnusedSpacer_137 = 136,
	UnusedSpacer_138 = 137,
	UnusedSpacer_139 = 138,
	UnusedSpacer_140 = 139,
	UnusedSpacer_141 = 140,
	UnusedSpacer_142 = 141,
	UnusedSpacer_143 = 142,
	UnusedSpacer_144 = 143,
	UnusedSpacer_145 = 144,
	UnusedSpacer_146 = 145,
	UnusedSpacer_147 = 146,
	UnusedSpacer_148 = 147,
	UnusedSpacer_149 = 148,
	UnusedSpacer_150 = 149,
	UnusedSpacer_151 = 150,
	UnusedSpacer_152 = 151,
	UnusedSpacer_153 = 152,
	UnusedSpacer_154 = 153,
	UnusedSpacer_155 = 154,
	UnusedSpacer_156 = 155,
	UnusedSpacer_157 = 156,
	UnusedSpacer_158 = 157,
	UnusedSpacer_159 = 158,
	UnusedSpacer_160 = 159,
	UnusedSpacer_161 = 160,
	UnusedSpacer_162 = 161,
	UnusedSpacer_163 = 162,
	UnusedSpacer_164 = 163,
	UnusedSpacer_165 = 164,
	UnusedSpacer_166 = 165,
	UnusedSpacer_167 = 166,
	UnusedSpacer_168 = 167,
	UnusedSpacer_169 = 168,
	UnusedSpacer_170 = 169,
	UnusedSpacer_171 = 170,
	UnusedSpacer_172 = 171,
	UnusedSpacer_173 = 172,
	UnusedSpacer_174 = 173,
	UnusedSpacer_175 = 174,
	UnusedSpacer_176 = 175,
	UnusedSpacer_177 = 176,
	UnusedSpacer_178 = 177,
	UnusedSpacer_179 = 178,
	UnusedSpacer_180 = 179,
	UnusedSpacer_181 = 180,
	UnusedSpacer_182 = 181,
	UnusedSpacer_183 = 182,
	UnusedSpacer_184 = 183,
	UnusedSpacer_185 = 184,
	UnusedSpacer_186 = 185,
	UnusedSpacer_187 = 186,
	UnusedSpacer_188 = 187,
	UnusedSpacer_189 = 188,
	UnusedSpacer_190 = 189,
	UnusedSpacer_191 = 190,
	UnusedSpacer_192 = 191,
	UnusedSpacer_193 = 192,
	UnusedSpacer_194 = 193,
	UnusedSpacer_195 = 194,
	UnusedSpacer_196 = 195,
	UnusedSpacer_197 = 196,
	UnusedSpacer_198 = 197,
	UnusedSpacer_199 = 198,
	UnusedSpacer_200 = 199,
	UnusedSpacer_201 = 200,
	UnusedSpacer_202 = 201,
	UnusedSpacer_203 = 202,
	UnusedSpacer_204 = 203,
	UnusedSpacer_205 = 204,
	UnusedSpacer_206 = 205,
	UnusedSpacer_207 = 206,
	UnusedSpacer_208 = 207,
	UnusedSpacer_209 = 208,
	UnusedSpacer_210 = 209,
	UnusedSpacer_211 = 210,
	UnusedSpacer_212 = 211,
	UnusedSpacer_213 = 212,
	UnusedSpacer_214 = 213,
	UnusedSpacer_215 = 214,
	UnusedSpacer_216 = 215,
	UnusedSpacer_217 = 216,
	UnusedSpacer_218 = 217,
	UnusedSpacer_219 = 218,
	UnusedSpacer_220 = 219,
	UnusedSpacer_221 = 220,
	UnusedSpacer_222 = 221,
	UnusedSpacer_223 = 222,
	UnusedSpacer_224 = 223,
	UnusedSpacer_225 = 224,
	UnusedSpacer_226 = 225,
	UnusedSpacer_227 = 226,
	UnusedSpacer_228 = 227,
	UnusedSpacer_229 = 228,
	UnusedSpacer_230 = 229,
	UnusedSpacer_231 = 230,
	UnusedSpacer_232 = 231,
	UnusedSpacer_233 = 232,
	UnusedSpacer_234 = 233,
	UnusedSpacer_235 = 234,
	UnusedSpacer_236 = 235,
	UnusedSpacer_237 = 236,
	UnusedSpacer_238 = 237,
	UnusedSpacer_239 = 238,
	UnusedSpacer_240 = 239,
	UnusedSpacer_241 = 240,
	UnusedSpacer_242 = 241,
	UnusedSpacer_243 = 242,
	UnusedSpacer_244 = 243,
	UnusedSpacer_245 = 244,
	UnusedSpacer_246 = 245,
	UnusedSpacer_247 = 246,
	UnusedSpacer_248 = 247,
	UnusedSpacer_249 = 248,
	UnusedSpacer_250 = 249,
	UnusedSpacer_251 = 250,
	UnusedSpacer_252 = 251,
	UnusedSpacer_253 = 252,
	UnusedSpacer_254 = 253,
	UnusedSpacer_255 = 254,
	VMI_Unknown = 255,
	EViewModeIndex_MAX = 256,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
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

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	SmallestCurve = 4,
	EUIScalingRule_MAX = 5,
};

enum class EAlignHorizontalUI : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	EAlignHorizontalUI_MAX = 3,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EBoidType : uint8_t {
	Follower = 0,
	Leader = 1,
	FreeAgent = 2,
	EBoidType_MAX = 3,
};

enum class E_TekGlovePunchState : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator4 = 2,
	NewEnumerator5 = 3,
	NewEnumerator6 = 4,
	E_MAX = 5,
};

enum class EClimbingType : uint8_t {
	None = 0,
	ClimbLook = 1,
	ClimbInput = 2,
	Slide = 3,
	MAX = 4,
	EClimbingType_MAX = 5,
};

enum class EMissionDispatchMode : uint8_t {
	StartAnywhere = 0,
	RequireNearbyMissionDispatcher = 1,
	RequireInsideMissionDispatcher = 2,
	UseBPStaticCanStartMission = 3,
	RequireInsideDispatcherNoCheck = 4,
	EMissionDispatchMode_MAX = 5,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EMaterialDomain : uint8_t {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_PostProcess = 3,
	MD_MAX = 4,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction_MAX = 3,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

