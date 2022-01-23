// Created by BlueFire1337
// Updated 2022-01-22
// Generated 2022-01-23

#pragma once

enum class ECrowVehicleType : uint8_t {
	None = 0,
	Car = 1,
	CombatCar = 2,
	Tank = 3,
	Heli = 4,
	Boat = 5,
	ECrowVehicleType_MAX = 6,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

enum class PurchaseType : uint8_t {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3,
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

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
};

enum class EDataSortTypeEnum : uint8_t {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ECrowWeaponAccType : uint8_t {
	None = 0,
	Skin = 1,
	Sticker = 2,
	EtcAcc = 3,
	ECrowWeaponAccType_MAX = 4,
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

enum class ECrowWorldSplineMode : uint8_t {
	Road = 0,
	Fence = 1,
	UtilityPole = 2,
	Havest = 3,
	ECrowWorldSplineMode_MAX = 4,
};

enum class ECrowStatusWidgetFlags : uint8_t {
	None = 0,
	Heal = 1,
	Gadget = 2,
	KeyGuide_T = 3,
	KeyGuide_F = 4,
	Default = 5,
	All = 6,
	ECrowStatusWidgetFlags_MAX = 7,
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

enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};

enum class EImageComponentDebugMode : uint8_t {
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2,
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

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class ECrowLobbyRecordScoreTab : uint8_t {
	None = 0,
	All = 1,
	Grade = 2,
	SeasonLevel = 3,
	Conquest = 4,
	SquadOperation = 5,
	ECrowLobbyRecordScoreTab_MAX = 6,
};

enum class EAkChannelConfigType : uint8_t {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3,
};

enum class ENaturalSoundFalloffMode : uint8_t {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class EGroupEdgeInsertionMode : uint8_t {
	Retriangulate = 0,
	PlaneCut = 1,
	EGroupEdgeInsertionMode_MAX = 2,
};

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class EPrimaryAssetCookRule : uint8_t {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5,
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

enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
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

enum class ECrowCharacterSwimBodyParts : uint8_t {
	Head = 0,
	Hand = 1,
	Hand_L = 2,
	Hand_R = 3,
	Waist = 4,
	Chest = 5,
	ECrowCharacterSwimBodyParts_MAX = 6,
};

enum class EMagicLeapPlaneQueryType : uint8_t {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2,
};

enum class ETransformMeshesSnapDragRotationMode : uint8_t {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4,
};

enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
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

enum class ECrowMeshPaintAction : uint8_t {
	Paint = 0,
	Erase = 1,
	ECrowMeshPaintAction_MAX = 2,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class EInputCaptureSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 4,
	EInputCaptureSide_MAX = 5,
};

enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
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

enum class ECrowSkydivingState : uint8_t {
	None = 0,
	FreeFall = 1,
	ParachuteSpread = 2,
	Parachute = 3,
	ReadyToLand = 4,
	Land = 5,
	Dying = 6,
	ECrowSkydivingState_MAX = 7,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3,
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

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
};

enum class ECrowVoiceChannel : uint8_t {
	VoiceChannel_None = 0,
	VoiceChannel_Party = 1,
	VoiceChannel_Team = 2,
	VoiceChannel_Squad = 3,
	VoiceChannel_MAX = 4,
};

enum class EQRCodeComponentDebugMode : uint8_t {
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2,
};

enum class ECrowWorldDestructionCause : uint8_t {
	ByDamage = 0,
	ByImpact = 1,
	ECrowWorldDestructionCause_MAX = 2,
};

enum class EAudioRecordingExportType : uint8_t {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2,
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

enum class EFastArraySerializerDeltaFlags : uint8_t {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
};

enum class ECrowAICharacterMoveMode : uint8_t {
	Walk = 0,
	Run = 1,
	Sprint = 2,
	ECrowAICharacterMoveMode_MAX = 3,
};

enum class ESprayType : uint8_t {
	Normal = 0,
	Foil = 1,
	Holo = 2,
	Max = 3,
};

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
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

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
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

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4,
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

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	Blend_MAX = 7,
	EBlendMode_MAX = 8,
};

enum class ECrowConquestLineType : uint8_t {
	None = 0,
	DotLine = 1,
	BothArrow = 2,
	ArrowMyTeam = 3,
	ArrowEnemy = 4,
	LineMyTeam = 5,
	LineEnemy = 6,
	Hidden = 7,
	ECrowConquestLineType_MAX = 8,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
};

enum class ECLSVaultType : uint8_t {
	VaultHigh = 0,
	VaultLow = 1,
	VaultVeryLow = 2,
	FallingCatch = 3,
	JumpOverVeryLow = 4,
	JumpOverLow = 5,
	JumpOverWindow = 6,
	ValutHighJumpOver = 7,
	JumpOverHigh = 8,
	JumpOverWindowUnder = 9,
	JumpOverHighUnder = 10,
	JumpOverLowUnder = 11,
	JumpOverLow_Damage = 12,
	JumpOverLow_Dying = 13,
	JumpOverLow_Dead = 14,
	JumpOverHigh_Damage = 15,
	JumpOverHigh_Dying = 16,
	JumpOverHigh_Dead = 17,
	ECLSVaultType_MAX = 18,
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

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
};

enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2,
};

enum class ECrowWorldLODStateDirtyFlag : uint8_t {
	LODLevel = 0,
	Trigger = 1,
	ECrowWorldLODStateDirtyFlag_MAX = 2,
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

enum class ECLSMovementDirection : uint8_t {
	Forward = 0,
	Right = 1,
	Left = 2,
	Backward = 3,
	ECLSMovementDirection_MAX = 4,
};

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class EQuarztQuantizationReference : uint8_t {
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4,
};

enum class ECrowBuildingPartsActionType : uint8_t {
	Static = 0,
	OpenClose = 1,
	ECrowBuildingPartsActionType_MAX = 2,
};

enum class EXRSystemFlags : uint8_t {
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 3,
	SupportsHandTracking = 4,
	EXRSystemFlags_MAX = 5,
};

enum class EBakedCurvatureColorMode : uint8_t {
	Grayscale = 0,
	RedBlue = 1,
	RedGreenBlue = 2,
	EBakedCurvatureColorMode_MAX = 3,
};

enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

enum class ECrowFoliageAffectorAnimState : uint8_t {
	Idle = 0,
	Ready = 1,
	Animating = 2,
	TooClose = 3,
	TimeOut = 4,
	Finished = 5,
	ECrowFoliageAffectorAnimState_MAX = 6,
};

enum class ECrowLobbyPartyUserScene : uint8_t {
	None = 0,
	Lobby = 1,
	Shop = 2,
	Loadout = 3,
	Outfit = 4,
	Apperance = 5,
	Vehicle = 6,
	Option = 7,
	Profile = 8,
	Game = 9,
	Spray = 10,
	Emotion = 11,
	VehicleSkin = 12,
	ECrowLobbyPartyUserScene_MAX = 13,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class ERemeshSmoothingType : uint8_t {
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3,
};

enum class ECrowMatchWidgetType : uint8_t {
	WaitUser = 0,
	TransportAirPlaneUser = 1,
	ECrowMatchWidgetType_MAX = 2,
};

enum class EMagicLeapImageTargetStatus : uint8_t {
	Tracked = 0,
	Unreliable = 1,
	NotTracked = 2,
	EMagicLeapImageTargetStatus_MAX = 3,
};

enum class EBone : uint8_t {
	Wrist_Root = 0,
	Hand_Start = 1,
	Forearm_Stub = 2,
	Thumb_1 = 3,
	Thumb_2 = 4,
	Thumb_3 = 5,
	Thumb_4 = 6,
	Index_2 = 7,
	Index_3 = 8,
	Index_4 = 9,
	Middle_2 = 10,
	Middle_3 = 11,
	Middle_4 = 12,
	Ring_2 = 13,
	Ring_3 = 14,
	Ring_4 = 15,
	Pinky_1 = 16,
	Pinky_2 = 17,
	Pinky_3 = 18,
	Pinky_4 = 19,
	Thumb_Tip = 20,
	Max_Skinnable = 21,
	Index_Tip = 22,
	Middle_Tip = 23,
	Ring_Tip = 24,
	Pinky_Tip = 25,
	Hand_End = 26,
	Bone_Max = 27,
	Invalid = 28,
	EBone_MAX = 29,
};

enum class ECrowProjectileDamageCheck : uint8_t {
	NoDamage = 0,
	CheckTrajectory = 1,
	AllowHitWithoutTrajectoryCheck = 2,
	ECrowProjectileDamageCheck_MAX = 3,
};

enum class ESettingKeySlotCategory : uint8_t {
	CommonBehaviour = 0,
	SpecificBehaviour = 1,
	Communication = 2,
	Combat = 3,
	VehicleCommon = 4,
	WheeledVehicle = 5,
	RotorVehicle = 6,
	WaterVehicle = 7,
	HeliVehicle = 8,
	InventoryBehaviour = 9,
	UIBehaviour = 10,
	SpectationBehaviour = 11,
	Max = 12,
	UnknownCategory = 13,
};

enum class ECrowVoiceAudioFadeModel : uint8_t {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	ECrowVoiceAudioFadeModel_MAX = 3,
};

enum class EAudioFaderCurve : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5,
};

enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EVehicleIdentity : uint8_t {
	None = 0,
	Tank = 1,
	Helicopter = 2,
	Car = 3,
	APC = 4,
	Boat = 5,
	EVehicleIdentity_MAX = 6,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
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

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
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

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class ESpaceCurveControlPointTransformMode : uint8_t {
	Shared = 0,
	PerVertex = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
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

enum class EMobilePixelProjectedReflectionQuality : uint8_t {
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4,
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

enum class EClanSlotViewType : uint8_t {
	None = 0,
	Join = 1,
	JoinAccept = 2,
	Reception = 3,
	Cancel = 4,
	Rank = 5,
	Max = 6,
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

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class EClanNotJoinMenuState : uint8_t {
	JoinClan = 0,
	CreateClan = 1,
	NotJoinClanRank = 2,
	Max = 3,
};

enum class EMeshBuildInstruction : uint8_t {
	DoNotBuild = 0,
	BuildIfModified = 1,
	AlwaysBuild = 2,
	EMeshBuildInstruction_MAX = 3,
};

enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
};

enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};

enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2,
};

enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

enum class ECrowGameMode : uint8_t {
	None = 0,
	Conquest = 1,
	TeamDeathMatch = 2,
	CaptureTheFlag = 3,
	SquadMatch = 4,
	DeathMatch = 5,
	Training = 6,
	TestFlight = 7,
	BombMission = 8,
	BattleRoyal = 9,
	QuickMatch = 10,
	CustomMatch = 11,
	ECrowGameMode_MAX = 12,
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

enum class EMagicLeapMeshLOD : uint8_t {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
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

enum class ENiagaraScriptContextStaticSwitch : uint8_t {
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class ECharacterCustomCameraType : uint8_t {
	Default = 0,
	Upper = 1,
	Lower = 2,
	ECharacterCustomCameraType_MAX = 3,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class ECrowContaminationAreaEventState : uint8_t {
	None = 0,
	Begine = 1,
	Wait = 2,
	Scaled = 3,
	End = 4,
	ECrowContaminationAreaEventState_MAX = 5,
};

enum class EMovieScenePositionType : uint8_t {
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3,
};

enum class EGroomNiagaraSolvers : uint8_t {
	None = 0,
	CosseratRods = 1,
	AngularSprings = 2,
	CustomSolver = 3,
	EGroomNiagaraSolvers_MAX = 4,
};

enum class ECrowRotationMode : uint8_t {
	VelocityDirection = 0,
	LookingDirection = 1,
	_Max = 2,
	ECrowRotationMode_MAX = 3,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class ECrowClothPartGlassesType : uint8_t {
	Glasses_Goggles = 0,
	Glasses_sunglasses = 1,
	Glasses_MAX = 2,
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

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class ECrowWeaponType : uint8_t {
	None = 0,
	Primary = 1,
	Secondary = 2,
	Melee = 3,
	Throw = 4,
	NoConsume = 5,
	ECrowWeaponType_MAX = 6,
};

enum class EMagicLeapRaycastResultState : uint8_t {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4,
};

enum class EMagicLeapControllerLEDSpeed : uint8_t {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	EMagicLeapControllerLEDSpeed_MAX = 3,
};

enum class ESplitNormalMethod : uint8_t {
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	PerTriangle = 3,
	PerVertex = 4,
	ESplitNormalMethod_MAX = 5,
};

enum class ECrowWeaponUIType : uint8_t {
	None = 0,
	AR = 1,
	SR = 2,
	SG = 3,
	HG = 4,
	MG = 5,
	SMG = 6,
	DMR = 7,
	RL = 8,
	MELEE = 9,
	THROW = 10,
	HEALKIT = 11,
	KIT = 12,
	ECrowWeaponUIType_MAX = 13,
};

enum class EDLSSSettingOverride : uint8_t {
	Enabled = 0,
	Disabled = 1,
	UseProjectSettings = 2,
	EDLSSSettingOverride_MAX = 3,
};

enum class EMagicLeapControllerHapticIntensity : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EMagicLeapControllerHapticIntensity_MAX = 3,
};

enum class EPinContainerType : uint8_t {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4,
};

enum class ECrowVehicleRotorType : uint8_t {
	Acceleration = 0,
	Torque = 1,
	ECrowVehicleRotorType_MAX = 2,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class ECrowStartCameraWorkState : uint8_t {
	None = 0,
	MoveCamera = 1,
	MoveFade = 2,
	DisplayUI = 3,
	End = 4,
	ECrowStartCameraWorkState_MAX = 5,
};

enum class ETweenInterpolate : uint8_t {
	Linear = 0,
	EaseIn = 1,
	EaseOut = 2,
	EaseInOut = 3,
	ETweenInterpolate_MAX = 4,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class ECrowCommunityPartyOption : uint8_t {
	None = 0,
	All = 1,
	Friend = 2,
	Refuse = 3,
	ECrowCommunityPartyOption_MAX = 4,
};

enum class ECLSPlayerState : uint8_t {
	Aliving = 0,
	Alive = 1,
	Dying = 2,
	Other = 3,
	ECLSPlayerState_MAX = 4,
};

enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class ESteamVRInputStringBits : uint8_t {
	VR_InputString_Hand = 0,
	VR_InputString_ControllerType = 1,
	VR_InputString_InputSource = 2,
	VR_InputString_All = 3,
	VR_InputString_MAX = 4,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

enum class ECrowBuildingPartsPropertyFlag : uint8_t {
	Destructible = 0,
	Interaction = 1,
	ShowOverMergedMesh = 2,
	LODBodyTarget = 3,
	LODExtraTarget = 4,
	AlwaysUseStaticMesh = 5,
	AlwaysUseISMC = 6,
	AlwaysHiddenInGame = 7,
	ECrowBuildingPartsPropertyFlag_MAX = 8,
};

enum class ECrowWorldEventState : uint8_t {
	None = 0,
	Wait = 1,
	Begin = 2,
	End = 3,
	ECrowWorldEventState_MAX = 4,
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

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class ECrowBuffType : uint8_t {
	None = 0,
	AccountExp = 1,
	WeaponExp = 2,
	WeaponTypeExp = 3,
	ECrowBuffType_MAX = 4,
};

enum class ECrowItemOwnType : uint8_t {
	OnlyInventory = 0,
	OnlyEquipment = 1,
	Both = 2,
	ECrowItemOwnType_MAX = 3,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EMagicLeapHeadTrackingError : uint8_t {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4,
};

enum class EGroupTopologyDeformationStrategy : uint8_t {
	Linear = 0,
	Laplacian = 1,
	EGroupTopologyDeformationStrategy_MAX = 2,
};

enum class ELuminARTrackingState : uint8_t {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3,
};

enum class EEdgeLoopPositioningMode : uint8_t {
	Even = 0,
	ProportionOffset = 1,
	DistanceOffset = 2,
	EEdgeLoopPositioningMode_MAX = 3,
};

enum class EGroomInterpolationType : uint8_t {
	None = 0,
	RigidTransform = 1,
	OffsetTransform = 2,
	SmoothTransform = 3,
	EGroomInterpolationType_MAX = 4,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class EWheelSweepType : uint8_t {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3,
};

enum class MediaTextureOrientation : uint8_t {
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4,
};

enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

enum class ECrowItemGrade : uint8_t {
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Custom1 = 5,
	Custom2 = 6,
	Custom3 = 7,
	Custom4 = 8,
	ECrowItemGrade_MAX = 9,
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

enum class EFriendSlotType : uint8_t {
	Friend = 0,
	FriendRequest = 1,
	FriendSend = 2,
	Recent = 3,
	Party = 4,
	Search = 5,
	Session = 6,
	EFriendSlotType_MAX = 7,
};

enum class ELobbyUIMode : uint8_t {
	None = 0,
	Main = 1,
	PlaySetting = 2,
	ModSelect = 3,
	LoadOut = 4,
	LoadOutWeaponChange = 5,
	LoadOutWeaponCustomize = 6,
	LoadOutWeaponSkinCustomize = 7,
	LoadOutWeaponStickerCustomize = 8,
	LoadOutWeaponAccCustomize = 9,
	LoadOutWeaponLegendary = 10,
	OutFitList = 11,
	OutFitCustomize = 12,
	AppearanceCustomize = 13,
	Shop = 14,
	Mission = 15,
	Record = 16,
	Spray = 17,
	Emotion = 18,
	VehicleSkin = 19,
	Social = 20,
	Clan = 21,
	RandomBoxOpen = 22,
	WeaponPreview = 23,
	CharacterPreview = 24,
	VehicleSkinPreview = 25,
	EmotionPreview = 26,
	ELobbyUIMode_MAX = 27,
};

enum class ECrowMedalType : uint8_t {
	Medal_Kill_Streak1 = 0,
	Medal_Kill_Streak2 = 1,
	Medal_Kill_Streak4 = 2,
	Medal_Kill_Streak5 = 3,
	Medal_Kill_Streak6 = 4,
	Medal_Kill_Streak8 = 5,
	Medal_Kill_Streak10 = 6,
	Medal_Kill_Streak12 = 7,
	Medal_Kill_Streak14 = 8,
	Medal_Kill_Streak15 = 9,
	Medal_Kill_Streak16 = 10,
	Medal_Kill_Streak18 = 11,
	Medal_Kill_Streak20 = 12,
	Medal_Kill_Streak22 = 13,
	Medal_Kill_Streak24 = 14,
	Medal_Kill_Streak25 = 15,
	Medal_Kill_Streak26 = 16,
	Medal_Kill_Streak28 = 17,
	Medal_Kill_Streak30 = 18,
	Medal_Kill_Streak32 = 19,
	Medal_Kill_CarBoom = 20,
	Medal_Kill_APCBoom = 21,
	Medal_kill_TankBoom = 22,
	Medal_Kill_HeliBoom = 23,
	Medal_Kill_BoatBoom = 24,
	Medal_Kill_HeadHunter = 25,
	Medal_Kill_LongShot50 = 26,
	Medal_Kill_LongShot100 = 27,
	Medal_Kill_LongShot150 = 28,
	Medal_Kill_LongShot200 = 29,
	Medal_Kill_LongShot250 = 30,
	Medal_Kill_LongShot300 = 31,
	Medal_Kill_LongShot350 = 32,
	Medal_Kill_LongShot400 = 33,
	Medal_Kill_LongShot450 = 34,
	Medal_Kill_LongShot500 = 35,
	Medal_Kill_LongShot550 = 36,
	Medal_Kill_LongShot600 = 37,
	Medal_Kill_LongShot650 = 38,
	Medal_Kill_LongShot700 = 39,
	Medal_Kill_LongShot750 = 40,
	Medal_Kill_LongShot800 = 41,
	Medal_Kill_Combat = 42,
	Medal_Kill_BomberGrenade = 43,
	Medal_Kill_BomberGL = 44,
	Medal_Kill_BomberC4 = 45,
	Medal_Kill_Skillful = 46,
	Medal_Kill_HitandRun = 47,
	Medal_Kill_Accident = 48,
	Medal_Kill_Demolisher = 49,
	Medal_Kill_StreakN = 50,
	Medal_BombMission_PlantComposition = 51,
	Medal_BombMission_DefuseComposition = 52,
	Medal_Kill_First = 53,
	Medal_Kill_Twice = 54,
	Medal_Kill_Revenge = 55,
	Medal_Kill_AceKiller = 56,
	Medal_Capture_Complete = 57,
	Medal_Capture_DefenseKill = 58,
	Medal_Capture_OffenseKill = 59,
	Medal_Medic_Ally = 60,
	Medal_ExtractorInstallation = 61,
	Medal_ExtractorQ_ON_Earn = 62,
	Medal_EnemyExtractorQ_ON_Earn = 63,
	Medal_EnemyQ_ON_Earn = 64,
	Medal_ZetaZombieKill = 65,
	__Max__ = 66,
	ECrowMedalType_MAX = 67,
};

enum class EPriorityAttenuationMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3,
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

enum class ESettingsCustomCrossHairColorType : uint8_t {
	Common = 0,
	GroundVehicle = 1,
	AirVehicle = 2,
	SeaVehicle = 3,
	ESettingsCustomCrossHairColorType_MAX = 4,
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

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

enum class EWindowTitleBarMode : uint8_t {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class ECrowSceneType : uint8_t {
	None = 0,
	Lobby = 1,
	Inventory = 2,
	Shop = 3,
	Game = 4,
	Login = 5,
	PIE_Entry = 6,
	ECrowSceneType_MAX = 7,
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

enum class EMultiTransformerMode : uint8_t {
	DefaultGizmo = 0,
	QuickAxisTranslation = 1,
	EMultiTransformerMode_MAX = 2,
};

enum class ECrowLobbyRecordTab : uint8_t {
	None = 0,
	Score = 1,
	Weapon = 2,
	Replay = 3,
	MainMedal = 4,
	ECrowLobbyRecordTab_MAX = 5,
};

enum class ENiagaraScriptLibraryVisibility : uint8_t {
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ECrowConditionFlags : uint8_t {
	None = 0,
	Burning = 1,
	Poisoning = 2,
	ECrowConditionFlags_MAX = 3,
};

enum class ECrowLobbyFriendState : uint8_t {
	None = 0,
	OnLine = 1,
	OffLine = 2,
	Party = 3,
	PartyFull = 4,
	GamePlay = 5,
	ECrowLobbyFriendState_MAX = 6,
};

enum class ELocationZToSpawnEnum : uint8_t {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
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

enum class EFaceComponentDebugMode : uint8_t {
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3,
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

enum class ECrowModPointIndex : uint8_t {
	ModPoint_None = 0,
	ModPoint_EnemyDyingPoint = 1,
	ModPoint_KillPoint = 2,
	ModPoint_KillPointWeapon = 3,
	ModPoint_MissionPoint = 4,
	ModPoint_MedalPoint = 5,
	ModPoint_VehicleDestroyPoint = 6,
	ModPoint_DyingPlayerPoint = 7,
	ModPoint_ReviveMySquadPoint = 8,
	ModPoint_UseSquadRespawn = 9,
	ModPoint_AssistCharacter = 10,
	ModPoint_AssistSquadCharacter = 11,
	ModPoint_AssistCar = 12,
	ModPoint_AssistSquadCar = 13,
	ModPoint_AssistTank = 14,
	ModPoint_AssistSquadTank = 15,
	ModPoint_AssistHeli = 16,
	ModPoint_AssistSquadHeli = 17,
	ModPoint_AssistBoat = 18,
	ModPoint_AssistSquadBoat = 19,
	ModPoint_ObtainQ_ON_5001 = 20,
	ModPoint_ObtainQ_ON_20001 = 21,
	ModPoint_ObtainQ_ON_40001 = 22,
	ModPoint_ObtainQ_ON_50001 = 23,
	ModPoint_ObtainQ_ON_80001 = 24,
	ModPoint_ObtainQ_ON_100001 = 25,
	ModPoint_CallHeli = 26,
	ModPoint_EscapeSuccess = 27,
	ModPoint_MAX = 28,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class ECrowVoiceChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ECrowVoiceChannelType_MAX = 3,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

enum class EGainParamMode : uint8_t {
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
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

enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3,
};

enum class EXRDeviceConnectionResult : uint8_t {
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5,
};

enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels_MAX = 5,
};

enum class EEdgeLoopInsertionMode : uint8_t {
	Retriangulate = 0,
	PlaneCut = 1,
	EEdgeLoopInsertionMode_MAX = 2,
};

enum class EMeshBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	EMeshBoundaryConstraint_MAX = 3,
};

enum class ECrowItemType : uint8_t {
	None = 0,
	Weapon = 1,
	VehicleWeapon = 2,
	WeaponPartsBarrel = 3,
	WeaponPartsMagazine = 4,
	WeaponPartsMuzzle = 5,
	WeaponPartsPistolGrip = 6,
	WeaponPartsPrimarySight = 7,
	WeaponPartsSideBarrel = 8,
	WeaponPartsStock = 9,
	WeaponPartsUnderBarrel = 10,
	Ammo = 11,
	Character = 12,
	ClothPartsHair = 13,
	ClothPartsHead = 14,
	ClothPartsGlasses = 15,
	ClothPartsMask = 16,
	ClothPartsTop = 17,
	ClothPartsGloves = 18,
	ClothPartsBottom = 19,
	ClothPartsShoes = 20,
	ClothPartsOuter = 21,
	ClothPartsBackPack = 22,
	ClothPartsCostume = 23,
	ClothPartsBeard = 24,
	Armor = 25,
	InvenBag = 26,
	BattleMoney = 27,
	WeaponPartsSecondarySight = 28,
	WeaponPartsAccCharm = 29,
	SquadMatchPoint = 30,
	ClothPartsPatch = 31,
	EtcItem = 32,
	Exp = 33,
	VehicleSkin = 34,
	WeaponSkin = 35,
	WeaponSticker = 36,
	RoyalCrowPoint = 37,
	Buff = 38,
	Tattoo = 39,
	CharacterEyeColor = 40,
	Emotion = 41,
	ResultMVP = 42,
	ClanMark = 43,
	ParachuteSkin = 44,
	Spray = 45,
	GPoint = 46,
	RandomBox = 47,
	ECrowItemType_MAX = 48,
};

enum class ECLSVehicleSeatType : uint8_t {
	None = 0,
	Driver = 1,
	VehicleWeapon = 2,
	ArmedPassenger = 3,
	ECLSVehicleSeatType_MAX = 4,
};

enum class ENiagaraRibbonUVDistributionMode : uint8_t {
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	ENiagaraRibbonUVDistributionMode_MAX = 3,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

enum class ECrowLobbySlotType : uint8_t {
	Loadout = 0,
	OutFit = 1,
	ECrowLobbySlotType_MAX = 2,
};

enum class EVehicleSeatType : uint8_t {
	None = 0,
	Driver = 1,
	AssistDriver = 2,
	Shooter = 3,
	ArmedPassenger = 4,
	ArmedPassengerLowReady = 5,
	Passenger = 6,
	EVehicleSeatType_MAX = 7,
};

enum class ENiagaraExecutionStateSource : uint8_t {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ESnapToGroundMode : uint8_t {
	UseHeightmap = 0,
	UseLineTrace = 1,
	ESnapToGroundMode_MAX = 2,
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

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6,
};

enum class ECrowBuffValueType : uint8_t {
	Absolute = 0,
	Percent = 1,
	ECrowBuffValueType_MAX = 2,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8_t {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class EStrandsTexturesTraceType : uint8_t {
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3,
};

enum class ECrowWorldEditorAsyncTask : uint8_t {
	None = 0,
	Working = 1,
	TaskResult_Success = 2,
	TaskResult_Fail = 3,
	COLLECT_LoadNextLevel = 4,
	COLLECT_CopyNextLevel = 5,
	COLLECT_CollectGeneratedLevels = 6,
	HLOD_LoadNextLevel = 7,
	HLOD_UnloadPrevLevel = 8,
	HLOD_WaitNextLevel = 9,
	HLOD_BuildLODActor = 10,
	ECrowWorldEditorAsyncTask_MAX = 11,
};

enum class ECrowWeaponAnimGatlingState : uint8_t {
	Idle = 0,
	PreHeating = 1,
	Fire = 2,
	OverHeating = 3,
	Cooling = 4,
	ECrowWeaponAnimGatlingState_MAX = 5,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2,
};

enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 3,
	Webcam = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5,
};

enum class EClanJoinType : uint8_t {
	FreeJoin = 0,
	ComfirmJoin = 1,
	Closed = 2,
	Max = 3,
};

enum class EARFaceTransformMixing : uint8_t {
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class ECrowArmorType : uint8_t {
	None = 0,
	Head = 1,
	Body = 2,
	ECrowArmorType_MAX = 3,
};

enum class EUserSlotState : uint8_t {
	UserList = 0,
	UserInvite = 1,
	UserCancel = 2,
	UserAccept = 3,
	Max = 4,
};

enum class EClothingWindMethodNv : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2,
};

enum class EColorSpace : uint8_t {
	Unknown = 0,
	Unmanaged = 1,
	Rec_2021 = 2,
	Rec_710 = 3,
	Rift_CV1 = 4,
	Rift_S = 5,
	Quest = 6,
	P3 = 7,
	Adobe_RGB = 8,
	EColorSpace_MAX = 9,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class ECrowCameraMode : uint8_t {
	FirstPerson = 0,
	ThirdPerson = 1,
	FirstPersonInVehicle = 2,
	FirstVehicle = 3,
	ThirdVehicle = 4,
	Death = 5,
	DisableCharacterCamera = 6,
	_Max = 7,
	ECrowCameraMode_MAX = 8,
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

enum class EAlignObjectsAlignToOptions : uint8_t {
	FirstSelected = 0,
	LastSelected = 1,
	Combined = 2,
	EAlignObjectsAlignToOptions_MAX = 3,
};

enum class EMIDCreationFlags : uint8_t {
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
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

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
};

enum class ECrowFoliageBendingInterpType : uint8_t {
	Lerp = 0,
	CircularIn = 1,
	CircularOut = 2,
	CircularInOut = 3,
	ExpoIn = 4,
	ExpoOut = 5,
	ExpoInOut = 6,
	Num = 7,
	ECrowFoliageBendingInterpType_MAX = 8,
};

enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

enum class EMotionRange : uint8_t {
	VR_WithoutController = 0,
	VR_WithController = 1,
	VR_MAX = 2,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8_t {
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4,
};

enum class EMagicLeapHeadTrackingMapEvent : uint8_t {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

enum class ECrowCrowAnimNotify : uint8_t {
	None = 0,
	WeaponFire1P = 1,
	WeaponFire3P = 2,
	WeaponShellEject1P = 3,
	WeaponShellEject3P = 4,
	WeaponReloadBegin1P = 5,
	WeaponReloadBegin3P = 6,
	WeaponReloadEnd1P = 7,
	WeaponReloadEnd3P = 8,
	WeaponReloadShortBegin1P = 9,
	WeaponReloadShortBegin3P = 10,
	WeaponReloadShortDetach1P = 11,
	WeaponReloadShortDetach3P = 12,
	WeaponReloadShortAttach1P = 13,
	WeaponReloadShortAttach3P = 14,
	WeaponReloadShortEnd1P = 15,
	WeaponReloadShortEnd3P = 16,
	WeaponDeselected1P = 17,
	WeaponDeselected3P = 18,
	WeaponAttachLeftHand1P = 19,
	WeaponAttachLeftHand3P = 20,
	WeaponAttachRightHand1P = 21,
	WeaponAttachRightHand3P = 22,
	WeaponThrowMagazine1P = 23,
	WeaponThrowMagazine3P = 24,
	WeaponDetachOldMagazine1P = 25,
	WeaponDetachOldMagazine3P = 26,
	WeaponAttachNewMagazine1P = 27,
	WeaponAttachNewMagazine3P = 28,
	WeaponAttachBag3P = 29,
	WeaponShow = 30,
	WeaponHide = 31,
	WeaponMeleeThrow1P = 32,
	WeaponMeleeThrow3P = 33,
	WeaponThrowPinOut1P = 34,
	WeaponThrowPinOut3P = 35,
	WeaponShowAllBullet = 36,
	ECrowCrowAnimNotify_MAX = 37,
};

enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EARGeoTrackingAccuracy : uint8_t {
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4,
};

enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2,
};

enum class EEditPivotSnapDragRotationMode : uint8_t {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	EEditPivotSnapDragRotationMode_MAX = 4,
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

enum class ECrowMainMedalUIType : uint8_t {
	Killstreak = 0,
	VehicleBoom = 1,
	Longshot = 2,
	Combat = 3,
	Bomber = 4,
	All = 5,
	ECrowMainMedalUIType_MAX = 6,
};

enum class ECrowChatType : uint8_t {
	Chat_Notice = 0,
	Chat_IngameAll = 1,
	Chat_Party = 2,
	Chat_Team = 3,
	Chat_Team_Ghost = 4,
	Chat_Squad = 5,
	Chat_Whisper = 6,
	Chat_Error = 7,
	Chat_MAX = 8,
};

enum class EZoomState : uint8_t {
	None = 0,
	ZoomIn = 1,
	ZoomOut = 2,
	EZoomState_MAX = 3,
};

enum class EScriptExecutionMode : uint8_t {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3,
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

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class EHazardGasState : uint8_t {
	OutState = 0,
	InState = 1,
	NearState = 2,
	UIViewState = 3,
	EHazardGasState_MAX = 4,
};

enum class EChannelMaskParameterColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class ELocationXToSpawnEnum : uint8_t {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ECrowTutorialInfoColor : uint8_t {
	Black = 0,
	Red = 1,
	ECrowTutorialInfoColor_MAX = 2,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class ETireState : uint8_t {
	eTireNormal = 0,
	eTireFlat = 1,
	eTireDestroyed = 2,
	ETireState_MAX = 3,
};

enum class ECrowScopeSightRate : uint8_t {
	ScopeSightRate_2 = 0,
	ScopeSightRate_3 = 1,
	ScopeSightRate_4 = 2,
	ScopeSightRate_5 = 3,
	ScopeSightRate_7 = 4,
	ScopeSightRate_9 = 5,
	ScopeSightRate_13 = 6,
	HighMagnification = 7,
	ECrowScopeSightRate_MAX = 8,
};

enum class ENiagaraPreviewGridResetMode : uint8_t {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
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

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class CloudStatus : uint8_t {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class EDrawPolyPathOutputMode : uint8_t {
	Ribbon = 0,
	Extrusion = 1,
	Ramp = 2,
	EDrawPolyPathOutputMode_MAX = 3,
};

enum class ECrowCharacterVehicleAnimType : uint8_t {
	None = 0,
	Abrams = 1,
	Mh6 = 2,
	Passat = 3,
	RoadRover = 4,
	Dagor = 5,
	ECrowCharacterVehicleAnimType_MAX = 6,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ECrowContaminationAreaType : uint8_t {
	Sphere = 0,
	Cylinder = 1,
	ECrowContaminationAreaType_MAX = 2,
};

enum class ETickMode : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class ESettingsVoiceChatWay : uint8_t {
	Radio = 0,
	Phone = 1,
	NotUsed = 2,
	ESettingsVoiceChatWay_MAX = 3,
};

enum class ECustomAttributeBlendType : uint8_t {
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
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

enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
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

enum class EMagicLeapEyeTrackingStatus : uint8_t {
	NotConnected = 0,
	Disabled = 1,
	UserNotPresent = 2,
	UserPresent = 3,
	UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5,
};

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
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

enum class ELocalizationCulture : uint8_t {
	EN = 0,
	KO = 1,
	ZH_CN = 2,
	ELocalizationCulture_MAX = 3,
};

enum class ERotationMode : uint8_t {
	None = 0,
	Vertical = 1,
	Horizontal = 2,
	ERotationMode_MAX = 3,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class EDisplaceMeshToolDisplaceType : uint8_t {
	Constant = 0,
	RandomNoise = 1,
	PerlinNoise = 2,
	DisplacementMap = 3,
	SineWave = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class EQuickTransformerMode : uint8_t {
	AxisTranslation = 0,
	AxisRotation = 1,
	EQuickTransformerMode_MAX = 2,
};

enum class ShopItemSlotType : uint8_t {
	None = 0,
	Icon = 1,
	Inventory = 2,
	ShopItemSlotType_MAX = 3,
};

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class ECrowClaymoreMineState : uint8_t {
	None = 0,
	Wait = 1,
	Active = 2,
	InstallPawnDie = 3,
	Collect = 4,
	SelfDestroy = 5,
	Detection = 6,
	Bomb = 7,
	ECrowClaymoreMineState_MAX = 8,
};

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
};

enum class EMakeMeshPlacementType : uint8_t {
	GroundPlane = 0,
	OnScene = 1,
	EMakeMeshPlacementType_MAX = 2,
};

enum class AkMultiPositionType : uint8_t {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3,
};

enum class ETextTransformPolicy : uint8_t {
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
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

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EClanJoinState : uint8_t {
	NotJoinClan = 0,
	JoinClan = 1,
	Max = 2,
};

enum class ETextureMipLoadOptions : uint8_t {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class EInputCaptureState : uint8_t {
	Begin = 0,
	Continue = 1,
	End = 2,
	Ignore = 3,
	EInputCaptureState_MAX = 4,
};

enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
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

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class ECLSAdditionalState : uint8_t {
	None = 0,
	Injured = 1,
	Skydiving = 2,
	ECLSAdditionalState_MAX = 3,
};

enum class EControllerFidelity : uint8_t {
	VR_ControllerFidelity_Estimated = 0,
	VR_ControllerFidelity_Full = 1,
	VR_ControllerFidelity_Partial = 2,
	VR_ControllerFidelity_MAX = 3,
};

enum class ECrowSquadRewardState : uint8_t {
	None = 0,
	RecvComplete = 1,
	ECrowSquadRewardState_MAX = 2,
};

enum class ELoadOutUIMode : uint8_t {
	None = 0,
	Hidden = 1,
	LoadOut = 2,
	LoadOutWeaponChange = 3,
	LoadOutWeaponCustomize = 4,
	LoadOutWeaponSkinCustomize = 5,
	LoadOutWeaponStickerCustomize = 6,
	LoadOutWeaponAccCustomize = 7,
	LoadOutSprayCustomize = 8,
	LoadOutWeaponLegendary = 9,
	ELoadOutUIMode_MAX = 10,
};

enum class ECrowRecordPawnType : uint8_t {
	None = 0,
	Character = 1,
	Tank = 2,
	Heli = 3,
	Car = 4,
	Boat = 5,
	CombatCar = 6,
	ECrowRecordPawnType_MAX = 7,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class ECrowVehicleBoatState : uint8_t {
	Idle = 0,
	Driving = 1,
	InAir = 2,
	ECrowVehicleBoatState_MAX = 3,
};

enum class EStandardToolContextMaterials : uint8_t {
	VertexColorMaterial = 0,
	EStandardToolContextMaterials_MAX = 1,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
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

enum class ECrowCharacterSwimAction : uint8_t {
	Idle = 0,
	Forward = 1,
	Back = 2,
	DivingForward = 3,
	ECrowCharacterSwimAction_MAX = 4,
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

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class ECrowSupplyEventState : uint8_t {
	None = 0,
	Falling = 1,
	Landed = 2,
	ECrowSupplyEventState_MAX = 3,
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

enum class ChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EFocusLostReason : uint8_t {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class ELocationFilteringModeEnum : uint8_t {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class ECrowPlayerState : uint8_t {
	None = 0,
	Spectator = 1,
	Aliving = 2,
	Alive = 3,
	Dying = 4,
	Dead = 5,
	GameMaster = 6,
	MatchMaster = 7,
	MatchObserver = 8,
	CustomModeObserver = 9,
	ECrowPlayerState_MAX = 10,
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

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class EMagicLeapGestureTransformSpace : uint8_t {
	World = 0,
	Hand = 1,
	Tracking = 2,
	EMagicLeapGestureTransformSpace_MAX = 3,
};

enum class EMagicLeapMeshType : uint8_t {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2,
};

enum class EAkPanningRule : uint8_t {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2,
};

enum class MediaTextureOutputFormat : uint8_t {
	MTOF_Default = 0,
	MTOF_SRGB_LINOUT = 1,
	MTOF_MAX = 2,
};

enum class ECrowMBType : uint8_t {
	None = 0,
	Ok = 1,
	YesNo = 2,
	OkCancel = 3,
	NoBGBlurNone = 4,
	OkError = 5,
	ECrowMBType_MAX = 6,
};

enum class ECameratBlendFunctionn : uint8_t {
	Blend_Linear = 0,
	Blend_Cubic = 1,
	Blend_EaseIn = 2,
	Blend_EaseOut = 3,
	Blend_EaseInOut = 4,
	Blend_MAX = 5,
};

enum class EVehicleDamageStatus : uint8_t {
	Damage_None = 0,
	Damage_Minor = 1,
	Damage_Major = 2,
	Damage_Critical = 3,
	Damage_MAX = 4,
};

enum class ECLSGait : uint8_t {
	NotMoving = 0,
	Walking = 1,
	Running = 2,
	Sprinting = 3,
	ECLSGait_MAX = 4,
};

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
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

enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

enum class ESetResolutionMethod : uint8_t {
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
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

enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class EFireStance : uint8_t {
	Idle = 0,
	Ready = 1,
	ReadyToAiming = 2,
	Aiming = 3,
	Firing = 4,
	_Max = 5,
	EFireStance_MAX = 6,
};

enum class ECurveTableMode : uint8_t {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3,
};

enum class ESpatialInputGestureAxis : uint8_t {
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4,
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

enum class EArithmeticKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6,
};

enum class ECrowCharacterAppearanceType : uint8_t {
	Gender = 0,
	Face = 1,
	FaceColor = 2,
	EyeColor = 3,
	Hair = 4,
	Tattoo = 5,
	Beard = 6,
	ECrowCharacterAppearanceType_MAX = 7,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class AkAcousticPortalState : uint8_t {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2,
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

enum class EAudioVolumeLocationState : uint8_t {
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2,
};

enum class ENiagaraVariantMode : uint8_t {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class ECrowShopItemStateType : uint8_t {
	None = 0,
	Hot = 1,
	New = 2,
	ECrowShopItemStateType_MAX = 3,
};

enum class ECrowItemSoundType : uint8_t {
	Inven_DragStart = 0,
	Inven_DropItem = 1,
	Inven_Equip = 2,
	Inven_AddInven = 3,
	Inven_MAX = 4,
};

enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
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

enum class EUserInterfaceActionType : uint8_t {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6,
};

enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class ECrowConquestHeavyBomberState : uint8_t {
	None = 0,
	StartDelay = 1,
	Attack = 2,
	End = 3,
	ECrowConquestHeavyBomberState_MAX = 4,
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

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
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

enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 3,
	Unknown = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5,
};

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
};

enum class EMarkType : uint8_t {
	ClanMark = 0,
	ClanMarkBG = 1,
	Max = 2,
};

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class ECrowEscapePointState : uint8_t {
	None = 0,
	Active = 1,
	Called = 2,
	Complete = 3,
	Return = 4,
	Deactive = 5,
	ECrowEscapePointState_MAX = 6,
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

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
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

enum class EMobileMSAASampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4,
};

enum class EDrawPolyPathWidthMode : uint8_t {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathWidthMode_MAX = 2,
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

enum class ECrowRankingRecordType : uint8_t {
	MercenaryLevel = 0,
	SeasonLevel = 1,
	Conquest = 2,
	SquadMatch = 3,
	ECrowRankingRecordType_MAX = 4,
};

enum class ENiagaraSortMode : uint8_t {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5,
};

enum class EWaveSpectrumType : uint8_t {
	Phillips = 0,
	PiersonMoskowitz = 1,
	JONSWAP = 2,
	EWaveSpectrumType_MAX = 3,
};

enum class ECameraFocusMethod : uint8_t {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
};

enum class EMatrixColumns : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4,
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

enum class ETriggerMessageParamType : uint8_t {
	BindKeyImage = 0,
	PressKeyHoldTime = 1,
	ETriggerMessageParamType_MAX = 2,
};

enum class EFriendTabType : uint8_t {
	Friend = 0,
	Recent = 1,
	Party = 2,
	EFriendTabType_MAX = 3,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
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

enum class EDataValidationResult : uint8_t {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3,
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

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class ECrowRespawnSelecteInfoWidgetState : uint8_t {
	None = 0,
	Waiting = 1,
	Ready = 2,
	PossibleRespawn = 3,
	ImpossibleRespawn = 4,
	ECrowRespawnSelecteInfoWidgetState_MAX = 5,
};

enum class ECrowWorldSyncPropFlags : uint8_t {
	None = 0,
	Destructible = 1,
	BigSize = 2,
	Simulation = 3,
	ECrowWorldSyncPropFlags_MAX = 4,
};

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
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

enum class EHitProxyPriority : uint8_t {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4,
};

enum class ECrowEquipmentSlot : uint8_t {
	Slot1 = 0,
	Slot2 = 1,
	Slot3 = 2,
	Slot4 = 3,
	Slot5 = 4,
	Slot6 = 5,
	Slot7 = 6,
	Slot8 = 7,
	Slot9 = 8,
	ECrowEquipmentSlot_MAX = 9,
};

enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
};

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class ESkyCreatorEditorWeatherType : uint8_t {
	EditorWeather_WeatherPreset = 0,
	EditorWeather_WeatherSettings = 1,
	EditorWeather_MAX = 2,
};

enum class ECustomBoneAttributeLookup : uint8_t {
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3,
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

enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
};

enum class EMagicLeapMeshVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4,
};

enum class ESmoothMeshToolSmoothType : uint8_t {
	Iterative = 0,
	Implicit = 1,
	Diffusion = 2,
	ESmoothMeshToolSmoothType_MAX = 3,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class EImportanceWeight : uint8_t {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5,
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

enum class ECrowImageLimitType : uint8_t {
	None = 0,
	LimitWidth = 1,
	LimitHeight = 2,
	ECrowImageLimitType_MAX = 3,
};

enum class ECrowOffSetType : uint8_t {
	Up = 0,
	Bottom = 1,
	ECrowOffSetType_MAX = 2,
};

enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

enum class EDatasmithImportActorPolicy : uint8_t {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3,
};

enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	AdditiveFromBase = 4,
	EMovieSceneBlendType_MAX = 5,
};

enum class ECLSCustomMovementMode : uint8_t {
	None = 0,
	Ragdoll = 1,
	Death = 2,
	OnVehicle = 3,
	Vault = 4,
	Drowning = 5,
	Ladder = 6,
	ECLSCustomMovementMode_MAX = 7,
};

enum class ECrowLandWheelsTireStatus : uint8_t {
	Normal = 0,
	Flat = 1,
	Destroyed = 2,
	ECrowLandWheelsTireStatus_MAX = 3,
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

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5,
};

enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3,
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

enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
};

enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3,
};

enum class EBitmapCSType : uint8_t {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5,
};

enum class ECrowIconType : uint8_t {
	None = 0,
	Player_Local = 1,
	Player_MySquad = 2,
	Player_MyTeam = 3,
	Player_Enemy = 4,
	Player_Death = 5,
	Vehicle_Air_Local = 6,
	Vehicle_Air_MySquad = 7,
	Vehicle_Air_MyTeam = 8,
	Vehicle_Air_Enemy = 9,
	Vehicle_Air_Empty = 10,
	Vehicle_Ground_Local = 11,
	Vehicle_Ground_MySquad = 12,
	Vehicle_Ground_MyTeam = 13,
	Vehicle_Ground_Enemy = 14,
	Vehicle_Ground_Empty = 15,
	Mission_Main = 16,
	Mission_Main_MyTeam = 17,
	Mission_Main_Enemy = 18,
	Mission_Sub = 19,
	Mission_Sub_MyTeam = 20,
	Mission_Sub_Enemy = 21,
	Area_Main = 22,
	Area_Supply = 23,
	Area_Bombing = 24,
	Area_Other = 25,
	Supply_Position = 26,
	Ping_Position = 27,
	Projectile_Throw = 28,
	TransportAirPlane = 29,
	TransportAirPlaneRoute = 30,
	Ranker_SendMineral = 31,
	Ranker_OwnedMineral = 32,
	Map_ZoneMarker = 33,
	SupplyWeaponBox = 34,
	CustomModeObserver = 35,
	ECrowIconType_MAX = 36,
};

enum class ENiagaraPlatformSelectionState : uint8_t {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class EMagicLeapImageTargetOrientation : uint8_t {
	ForwardAxisAsNormal = 0,
	UpAxisAsNormal = 1,
	EMagicLeapImageTargetOrientation_MAX = 2,
};

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EBakedCurvatureTypeMode : uint8_t {
	MeanAverage = 0,
	Max = 1,
	Min = 2,
	Gaussian = 3,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class ESetCollisionGeometryInputMode : uint8_t {
	CombineAll = 0,
	PerInputObject = 1,
	PerMeshComponent = 2,
	PerMeshGroup = 3,
	ESetCollisionGeometryInputMode_MAX = 4,
};

enum class ECrowVoiceState : uint8_t {
	VoiceOff = 0,
	VoiceOn = 1,
	VoiceMute = 2,
	ECrowVoiceState_MAX = 3,
};

enum class EAudioFadeModel : uint8_t {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	EAudioFadeModel_MAX = 3,
};

enum class EInertializationSpace : uint8_t {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3,
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

enum class EARCaptureType : uint8_t {
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	EARCaptureType_MAX = 4,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class EAlphaChannelMode : uint8_t {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3,
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

enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
};

enum class EDatasmithCADRetessellationRule : uint8_t {
	All = 0,
	SkipDeletedSurfaces = 1,
	EDatasmithCADRetessellationRule_MAX = 2,
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

enum class EOculusDeviceType : uint8_t {
	OculusMobile_Deprecated0 = 0,
	OculusQuest = 1,
	OculusQuest2 = 2,
	Rift = 3,
	Rift_S = 4,
	Quest_Link = 5,
	OculusUnknown = 6,
	EOculusDeviceType_MAX = 7,
};

enum class ECrowBackPackListItemType : uint8_t {
	Nomal = 0,
	LootSlot = 1,
	PickupInven = 2,
	ECrowBackPackListItemType_MAX = 3,
};

enum class EAnimInterpolationType : uint8_t {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2,
};

enum class ECrowCustomizeEmotionDescState : uint8_t {
	Emotion = 0,
	ResultMVP = 1,
	ECrowCustomizeEmotionDescState_MAX = 2,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
};

enum class ECrowDeathCameraState : uint8_t {
	None = 0,
	MoveMyBody = 1,
	MoveKiller = 2,
	TraceKiller = 3,
	Free = 4,
	TopDown = 5,
	ECrowDeathCameraState_MAX = 6,
};

enum class ECrowSampleCharacterCount : uint8_t {
	One = 0,
	Two = 1,
	Three = 2,
	Four = 3,
	ECrowSampleCharacterCount_MAX = 4,
};

enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

enum class ECameraShakeUpdateResultFlags : uint8_t {
	ApplyAsAbsolute = 0,
	SkipAutoScale = 1,
	SkipAutoPlaySpace = 2,
	Default = 3,
	ECameraShakeUpdateResultFlags_MAX = 4,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class EReflectionsType : uint8_t {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
};

enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class ECrowEvent : uint8_t {
	None = 0,
	Ok = 1,
	Cancel = 2,
	Yes = 3,
	No = 4,
	Ignore = 5,
	Close = 6,
	Min = 7,
	Max = 8,
	Add = 9,
	Remove = 10,
	Start = 11,
	End = 12,
	Click = 13,
	Select = 14,
	Deselect = 15,
	DragStart = 16,
	DragEnd = 17,
	DragCancel = 18,
	Equip = 19,
	Ping = 20,
	ItemCreated = 21,
	ItemDestroyed = 22,
	ItemOwnerChanged = 23,
	AuthorizeUser = 24,
	StartGame = 25,
	DisableIntrusion = 26,
	EndGame = 27,
	RemoveSquad = 28,
	ChangeMissionPoint = 29,
	Conquest_ChangeTeam = 30,
	Conquest_PlayerRespawn = 31,
	EnableFirstRespawn = 32,
	ChangeGameState = 33,
	SelectRespawn = 34,
	DeselectRespawn = 35,
	SelectVehicleSpawner = 36,
	DeselectVehicleSpawner = 37,
	ExecRespawn = 38,
	ExecDoubleClickRespawn = 39,
	ScanMineral = 40,
	InitWorldMapIcon = 41,
	ChangeIconDisplayInfo = 42,
	CallHelp = 43,
	BeginWorldEvent = 44,
	EndWorldEvent = 45,
	AddObjectiveActor = 46,
	RemoveObjectiveActor = 47,
	IconPingHovered = 48,
	IconPingTargeted = 49,
	VehicleSkin_ChangeType = 50,
	VehicleSkin_ChangeVehicle = 51,
	VehicleSkin_SelectItem = 52,
	VehicleSkin_HoverItem = 53,
	VehicleSkin_UnHoverItem = 54,
	LV_SelectItem = 55,
	LV_HoverItem = 56,
	LV_UnHoverItem = 57,
	Hit = 58,
	InitSquadIcon = 59,
	InitObserverIcon = 60,
};

enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EEnemyActionsExecutionType : uint8_t {
	RandomAction = 0,
	AllInTurn = 1,
	EEnemyActionsExecutionType_MAX = 2,
};

enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

enum class ELuminComponentSubElementType : uint8_t {
	FileExtension = 0,
	MimeType = 1,
	Mode = 2,
	MusicAttribute = 3,
	Schema = 4,
	ELuminComponentSubElementType_MAX = 5,
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

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
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

enum class EInertializationState : uint8_t {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3,
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

enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

enum class ECrowCharacterBehaviourType : uint8_t {
	MoveForward = 0,
	MoveBackward = 1,
	MoveLeft = 2,
	MoveRight = 3,
	Jump = 4,
	Walk = 5,
	Sprint = 6,
	ToggleCrouch = 7,
	ToggleProne = 8,
	LeanLeft = 9,
	LeanRight = 10,
	Fire = 11,
	Reload = 12,
	Targeting = 13,
	NextWeapon = 14,
	PrevWeapon = 15,
	ThirdPersonToggle = 16,
	Use = 17,
	Use02 = 18,
	ECrowCharacterBehaviourType_MAX = 19,
};

enum class ESelectedObjectsModificationType : uint8_t {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class ECrowCommunityFollowOption : uint8_t {
	Off = 0,
	On = 1,
	ECrowCommunityFollowOption_MAX = 2,
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

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5,
};

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

enum class ECrowCharacterHitParts : uint8_t {
	None = 0,
	Head = 1,
	Body = 2,
	LeftArm = 3,
	RightArm = 4,
	LeftLeg = 5,
	RightLeg = 6,
	ECrowCharacterHitParts_MAX = 7,
};

enum class ECrowTattooType : uint8_t {
	Face = 0,
	Arm = 1,
	ECrowTattooType_MAX = 2,
};

enum class ESettingPopupTitleType : uint8_t {
	Alert = 0,
	ESettingPopupTitleType_MAX = 1,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
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

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
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

enum class EBuldingDestructionFlag : uint8_t {
	ThrowingThrough = 0,
	PistolProjectile = 1,
	RifleProjectile = 2,
	SniperRifleProjectile = 3,
	CannonProjectile = 4,
	GranadeExplosion = 5,
	BombExplosion = 6,
	Parkour = 7,
	EBuldingDestructionFlag_MAX = 8,
};

enum class ECrowClothExpertSkill : uint8_t {
	None = 0,
	AddMagazine = 1,
	Parachute = 2,
	ECrowClothExpertSkill_MAX = 3,
};

enum class ECrowConquestUAVSupportState : uint8_t {
	None = 0,
	Start = 1,
	End = 2,
	ECrowConquestUAVSupportState_MAX = 3,
};

enum class ECrowWorldEventWidgetType : uint8_t {
	None = 0,
	Alarm = 1,
	Success = 2,
	Fail = 3,
	ECrowWorldEventWidgetType_MAX = 4,
};

enum class ENiagaraSpriteFacingMode : uint8_t {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5,
};

enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
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

enum class ECrowItemAssetRows : uint8_t {
	Face = 0,
	Hair = 1,
	Beard = 2,
	Head = 3,
	Glasses = 4,
	Mask = 5,
	Gloves = 6,
	Top = 7,
	Bottom = 8,
	Shoes = 9,
	Outer = 10,
	Backpack = 11,
	Costume = 12,
	ECrowItemAssetRows_MAX = 13,
};

enum class ECrowTimeKind : uint8_t {
	UTC = 0,
	Local = 1,
	ECrowTimeKind_MAX = 2,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class ECrowWorldTriggerActionType : uint8_t {
	Normal = 0,
	QuickAction = 1,
	ECrowWorldTriggerActionType_MAX = 2,
};

enum class ECrowConquestAreaVehicleSpawnerState : uint8_t {
	None = 0,
	Ready = 1,
	Spawned = 2,
	Cool = 3,
	ECrowConquestAreaVehicleSpawnerState_MAX = 4,
};

enum class ELoadOutMode : uint8_t {
	None = 0,
	Hidden = 1,
	WeaponLodOut = 2,
	WeaponCustom = 3,
	ELoadOutMode_MAX = 4,
};

enum class ECLSRotationMode : uint8_t {
	VelocityDirection = 0,
	LookingDirection = 1,
	CombatDirection = 2,
	ECLSRotationMode_MAX = 3,
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

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
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

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
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

enum class EMeshFacesColorMode : uint8_t {
	None = 0,
	ByGroup = 1,
	ByMaterialID = 2,
	ByUVIsland = 3,
	EMeshFacesColorMode_MAX = 4,
};

enum class ECrowScorePawnType : uint8_t {
	None = 0,
	Character = 1,
	Tank = 2,
	Heli = 3,
	Car = 4,
	Boat = 5,
	ECrowScorePawnType_MAX = 6,
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

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
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

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
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

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class EMagicLeapControllerType : uint8_t {
	None = 0,
	Device = 1,
	MobileApp = 2,
	EMagicLeapControllerType_MAX = 3,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class ECrowClothComponentType : uint8_t {
	ThirdPersonComponent = 0,
	FirstPersonBodyComponent = 1,
	FirstPersonArmComponent = 2,
	ECrowClothComponentType_MAX = 3,
};

enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
};

enum class ECLSAnimationGroup : uint8_t {
	Default = 0,
	Ground = 1,
	Layered = 2,
	MovementAction = 3,
	ECLSAnimationGroup_MAX = 4,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class ECrowWorldMapType : uint8_t {
	None = 0,
	HeavyBombard = 1,
	UAV = 2,
	ECrowWorldMapType_MAX = 3,
};

enum class ECrowCharacterAnimActionType : uint8_t {
	None = 0,
	Shooting = 1,
	Throwing = 2,
	Swing = 3,
	Using = 4,
	ECrowCharacterAnimActionType_MAX = 5,
};

enum class EPropertyAccessChangeNotifyMode : uint8_t {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
};

enum class EARAltitudeSource : uint8_t {
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4,
};

enum class EEventPageType : uint8_t {
	None = 0,
	EventPage = 1,
	ShopPackagePage = 2,
	EEventPageType_MAX = 3,
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

enum class ECrowLobbyVehicleEtcType : uint8_t {
	None = 0,
	ParachuteSkin = 1,
	ECrowLobbyVehicleEtcType_MAX = 2,
};

enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3,
};

enum class ESkyCreatorStarMapRotationType : uint8_t {
	StarMapRotationType_NoRotation = 0,
	StarMapRotationType_FollowSun = 1,
	StarMapRotationType_FollowMoon = 2,
	StarMapRotationType_MAX = 3,
};

enum class EGroomInterpolationQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4,
};

enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class EMobilePlanarReflectionMode : uint8_t {
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3,
};

enum class EParticleAllocationMode : uint8_t {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2,
};

enum class EDrawPolyPathHeightMode : uint8_t {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathHeightMode_MAX = 2,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
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

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class ETetherSimulationTimingMode : uint8_t {
	SimulateInSequence = 0,
	ProgressSimulation = 1,
	ETetherSimulationTimingMode_MAX = 2,
};

enum class ECrowMBButtonType : uint8_t {
	None = 0,
	Ok = 1,
	Yes = 2,
	No = 3,
	Cancel = 4,
	ECrowMBButtonType_MAX = 5,
};

enum class ECrowBuildingPartsLODType : uint8_t {
	LODBody = 0,
	LODExtra = 1,
	ShowOverLOD = 2,
	NoMerge = 3,
	ECrowBuildingPartsLODType_MAX = 4,
};

enum class EVehicleSeat : uint8_t {
	Driver = 0,
	Weapon = 1,
	Other = 2,
	EVehicleSeat_MAX = 3,
};

enum class EMonoChannelUpmixMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3,
};

enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

enum class ECrowLevelLayer : uint8_t {
	Unknown = 0,
	Persistent = 1,
	GameDesign = 2,
	Environment = 3,
	Terrain = 4,
	Tree = 5,
	SubLevel = 6,
	Effect = 7,
	UnderWater = 8,
	Num = 9,
	ECrowLevelLayer_MAX = 10,
};

enum class EMaterialLayerLinkState : uint8_t {
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4,
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

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

enum class EHandSkeleton : uint8_t {
	VR_SteamVRHandSkeleton = 0,
	VR_UE4HandSkeleton = 1,
	VR_MAX = 2,
};

enum class ECrowCustomFilterMaxUser : uint8_t {
	None = 0,
	User80_101 = 1,
	User60_80 = 2,
	User40_60 = 3,
	User20_40 = 4,
	User19 = 5,
	ECrowCustomFilterMaxUser_MAX = 6,
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

enum class ECrowEquipmentType : uint8_t {
	Rifle = 0,
	Pistol = 1,
	Knife = 2,
	Grenade = 3,
	Ammo = 4,
	Scope = 5,
	Mask = 6,
	HeadGear = 7,
	ECrowEquipmentType_MAX = 8,
};

enum class EPropertyAccessCopyBatch : uint8_t {
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8_t {
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4,
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

enum class EModulationRouting : uint8_t {
	Disable = 0,
	Inherit = 1,
	Override = 2,
	EModulationRouting_MAX = 3,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class ENiagaraRibbonTessellationMode : uint8_t {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ETrackedDeviceType : uint8_t {
	None = 0,
	HMD = 1,
	LTouch = 2,
	RTouch = 3,
	Touch = 4,
	DeviceObjectZero = 5,
	All = 6,
	ETrackedDeviceType_MAX = 7,
};

enum class ECrowBuildingEditorShowLOD : uint8_t {
	LOD0 = 0,
	LOD1 = 1,
	LOD2 = 2,
	LOD3 = 3,
	ECrowBuildingEditorShowLOD_MAX = 4,
};

enum class ECrowCustomMovementMode : uint8_t {
	Standard = 0,
	Ragdoll = 1,
	Death = 2,
	OnVehicle = 3,
	Vault = 4,
	ECrowCustomMovementMode_MAX = 5,
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

enum class ECrowVehicleFloodingWaterType : uint8_t {
	NotInWater = 0,
	WaterPlane = 1,
	WaterBodyOcean = 2,
	WaterBodyLake = 3,
	WaterBodyOther = 4,
	ECrowVehicleFloodingWaterType_MAX = 5,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
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

enum class ECrowCharacterBattleStance : uint8_t {
	None = 0,
	Peaceful = 1,
	Relaxed = 2,
	GunDown = 3,
	Directed = 4,
	Aimed = 5,
	_MAX = 6,
	ECrowCharacterBattleStance_MAX = 7,
};

enum class ECrowMatchingState : uint8_t {
	None = 0,
	Start = 1,
	Matching = 2,
	Cancel = 3,
	StartGame = 4,
	ECrowMatchingState_MAX = 5,
};

enum class ECrowMissionConditionType : uint8_t {
	None = 0,
	AllComboKill = 1,
	WeaponTypeKill = 2,
	WeaponKill = 3,
	WeaponTypeHeadShot = 4,
	WeaponHeadShot = 5,
	WeaponTypeComboKill = 6,
	WeaponComboKill = 7,
	MeterKill = 8,
	ModeWin = 9,
	ModeLose = 10,
	PlantCompositionBoomb = 11,
	DefuseCompositionBoomb = 12,
	InVehicleKill = 13,
	ConquestUse = 14,
	CharacterZ = 15,
	CharacterC = 16,
	CharacterShift = 17,
	CharacterSpaceBar = 18,
	WeaponGunZoomin = 19,
	Weapon2Key = 20,
	Weapon3Key = 21,
	Weapon4Key = 22,
	keyboardGKey = 23,
	keyboardTKey = 24,
	ResourceGet = 25,
	DroneSummon = 26,
	BandageUse = 27,
	SyringeUse = 28,
	TankVehicle = 29,
	CarVehicle = 30,
	ECrowMissionConditionType_MAX = 31,
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

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class EMainCameraType : uint8_t {
	Center = 0,
	Left = 1,
	Right = 2,
	EMainCameraType_MAX = 3,
};

enum class ECrowStickerType : uint8_t {
	Normal = 0,
	Slot = 1,
	ECrowStickerType_MAX = 2,
};

enum class ECrowVehicleParachuteState : uint8_t {
	None = 0,
	Down = 1,
	Up = 2,
	ECrowVehicleParachuteState_MAX = 3,
};

enum class ENiagaraCullReaction : uint8_t {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EPanningMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2,
};

enum class SubscriptionMode : uint8_t {
	Accept = 0,
	Block = 1,
	Defer = 2,
	SubscriptionMode_MAX = 3,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
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

enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
};

enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class ECrowItemSlotWSType : uint8_t {
	Weapon = 0,
	WeaponParts = 1,
	OutFit = 2,
	Appearance = 3,
	Color = 4,
	UnEquip = 5,
	ECrowItemSlotWSType_MAX = 6,
};

enum class EViewPortRenderOrder : uint8_t {
	Standalone = 0,
	Popup = 1,
	EViewPortRenderOrder_MAX = 2,
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

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
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

enum class LoginState : uint8_t {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4,
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

enum class ESceneSnapQueryTargetType : uint8_t {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 3,
	All = 4,
	ESceneSnapQueryTargetType_MAX = 5,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class EToolChangeTrackingMode : uint8_t {
	NoChangeTracking = 0,
	UndoToExit = 1,
	FullUndoRedo = 2,
	EToolChangeTrackingMode_MAX = 3,
};

enum class EMagicLeapControllerTrackingMode : uint8_t {
	InputService = 0,
	CoordinateFrameUID = 1,
	EMagicLeapControllerTrackingMode_MAX = 2,
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

enum class EClanMemberSort : uint8_t {
	All = 0,
	SubMaster = 1,
	IgnoreSubMaster = 2,
	IgnoreMaster = 3,
	Max = 4,
};

enum class ECrowPickupInventoryState : uint8_t {
	None = 0,
	Normal = 1,
	Normal_WorldSpawned = 2,
	Use = 3,
	Destroying = 4,
	Destroyed = 5,
	ECrowPickupInventoryState_MAX = 6,
};

enum class ECrowConquestSkillResult : uint8_t {
	Unknown = 0,
	Success = 1,
	Cool = 2,
	NotEnoughMoney = 3,
	NotEnoughItem = 4,
	ECrowConquestSkillResult_MAX = 5,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

enum class EClanSettingState : uint8_t {
	None = 0,
	ChangeHappyTime = 1,
	AddCommander = 2,
	CommanderSetDel = 3,
	ClanInvited = 4,
	KickClanUser = 5,
	ClanInvitedSet = 6,
	CaptainTransfer = 7,
	ClanDismantle = 8,
	ClanSecession = 9,
	Max = 10,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class AkActionOnEventType : uint8_t {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5,
};

enum class ECrowPingWidgetState : uint8_t {
	None = 0,
	Hovered = 1,
	Targeted = 2,
	ECrowPingWidgetState_MAX = 3,
};

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
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

enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
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

enum class EGroomStrandsSize : uint8_t {
	None = 0,
	Size2 = 1,
	Size4 = 2,
	Size8 = 3,
	Size16 = 4,
	Size32 = 5,
	EGroomStrandsSize_MAX = 6,
};

enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
};

enum class ECollectionScriptingShareType : uint8_t {
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
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

enum class ECrowCharacterHandIKType : uint8_t {
	None = 0,
	PrivateWeapon = 1,
	VehicleDriver = 2,
	VehicleWeapon = 3,
	ECrowCharacterHandIKType_MAX = 4,
};

enum class ECrowTeamID_Bitflags : uint8_t {
	Red = 0,
	Blue = 1,
	Yellow = 2,
	Purple = 3,
	ECrowTeamID_MAX = 4,
};

enum class ECrowSquadMatchReward : uint8_t {
	None = 0,
	ItemBox = 1,
	LoadoutBox = 2,
	Vehicle = 3,
	CallHeli = 4,
	ECrowSquadMatchReward_MAX = 5,
};

enum class ECrowChatMessaageType : uint8_t {
	Message_User = 0,
	Message_System = 1,
	Message_MAX = 2,
};

enum class EVehicleEvent : uint8_t {
	Event_Repose = 0,
	Event_EngineStart = 1,
	Event_ReadyToDrive = 2,
	Event_ShutDown = 3,
	Event_PressedHorn = 4,
	Event_ReleasedHorn = 5,
	Event_Immerge = 6,
	Event_MAX = 7,
};

enum class EMouseButtonType : uint8_t {
	None = 0,
	Left_click = 1,
	Right_click = 2,
	Center_click = 3,
	EMouseButtonType_MAX = 4,
};

enum class ECrowWorldHLODResult : uint8_t {
	Success = 0,
	Skip = 1,
	Failed = 2,
	ECrowWorldHLODResult_MAX = 3,
};

enum class ECrowWorldSplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	Num = 3,
	ECrowWorldSplineMeshAxis_MAX = 4,
};

enum class EAirAbsorptionMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
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

enum class EHandleSourcesMethod : uint8_t {
	DeleteSources = 0,
	HideSources = 1,
	KeepSources = 2,
	EHandleSourcesMethod_MAX = 3,
};

enum class EGroupBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EGroupBoundaryConstraint_MAX = 4,
};

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class ERevolvePropertiesQuadSplit : uint8_t {
	Uniform = 0,
	ShortestDiagonal = 1,
	ERevolvePropertiesQuadSplit_MAX = 2,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
};

enum class EOscillatorWaveform : uint8_t {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class EUVProjectionMethod : uint8_t {
	Cube = 0,
	Cylinder = 1,
	Plane = 2,
	EUVProjectionMethod_MAX = 3,
};

enum class EFixedFoveatedRenderingLevel : uint8_t {
	FFR_Off = 0,
	FFR_Low = 1,
	FFR_Medium = 2,
	FFR_High = 3,
	FFR_HighTop = 4,
	FFR_MAX = 5,
};

enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t {
	NoFilter = 0,
	SlightRobustnessToFlicker = 1,
	MoreRobustnessToFlicker = 2,
	EMagicLeapHandTrackingGestureFilterLevel_MAX = 3,
};

enum class ECrowBuildingPartsAnimType : uint8_t {
	Open = 0,
	Close = 1,
	Blocked = 2,
	ECrowBuildingPartsAnimType_MAX = 3,
};

enum class ECrowSquadRole : uint8_t {
	None = 0,
	Leader = 1,
	Assistant = 2,
	Member01 = 3,
	Member02 = 4,
	ECrowSquadRole_MAX = 5,
};

enum class ECrowHUDWidgetType : uint8_t {
	None = 0,
	Default = 1,
	Bottom = 2,
	Top = 3,
	Mode = 4,
	ECrowHUDWidgetType_MAX = 5,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class EHairInterpolationWeight : uint8_t {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EHairInterpolationWeight_MAX = 4,
};

enum class ETeleportType : uint8_t {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
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

enum class ENiagaraRibbonUVEdgeMode : uint8_t {
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2,
};

enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
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

enum class EHand : uint8_t {
	VR_LeftHand = 0,
	VR_RightHand = 1,
	VR_MAX = 2,
};

enum class ECrowAIFindCoverPointMode : uint8_t {
	BlackboardValue = 0,
	Near = 1,
	Far = 2,
	NearTarget = 3,
	FarTarget = 4,
	Random = 5,
	ECrowAIFindCoverPointMode_MAX = 6,
};

enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
};

enum class ECrowCharacterPeekState : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	ECrowCharacterPeekState_MAX = 3,
};

enum class EBakedCurvatureClampMode : uint8_t {
	None = 0,
	Positive = 1,
	Negative = 2,
	EBakedCurvatureClampMode_MAX = 3,
};

enum class ECrowWeaponPartsType : uint8_t {
	Barrel = 0,
	Magazine = 1,
	Muzzle = 2,
	PistolGrip = 3,
	PrimarySight = 4,
	SecondarySight = 5,
	SideBarrel = 6,
	Stock = 7,
	UnderBarrel = 8,
	MainBody = 9,
	Min = 10,
	Max = 11,
	None = 12,
};

enum class EChaosWeightMapTarget : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EChaosWeightMapTarget_MAX = 5,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class ENiagaraDefaultMode : uint8_t {
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3,
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

enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

enum class ECrowTabletScene : uint8_t {
	Scene_MainMenu = 0,
	Scene_Supply = 1,
	Scene_Bombard = 2,
	Scene_Drone = 3,
	Scene_MAX = 4,
};

enum class EInertializationBoneState : uint8_t {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3,
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

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class ECrowWorldGeomType : uint8_t {
	Body = 0,
	Trigger1 = 1,
	Trigger2 = 2,
	Checker1 = 3,
	Checker2 = 4,
	Trace = 5,
	ECrowWorldGeomType_MAX = 6,
};

enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
};

enum class ESaveAppearanceType : uint8_t {
	Face = 0,
	Hair = 1,
	HairColor = 2,
	Beard = 3,
	BeardColor = 4,
	EyeColor = 5,
	TattooArm = 6,
	TattooFace = 7,
	AppearanceType_Max = 8,
	ESaveAppearanceType_MAX = 9,
};

enum class ECrowCharacterAnimInAir : uint8_t {
	Ground = 0,
	Jump = 1,
	Fall = 2,
	ECrowCharacterAnimInAir_MAX = 3,
};

enum class ECrowRankingPeriodType : uint8_t {
	Year = 0,
	Season = 1,
	ECrowRankingPeriodType_MAX = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class EHoleFillToolActions : uint8_t {
	NoAction = 0,
	SelectAll = 1,
	ClearSelection = 2,
	EHoleFillToolActions_MAX = 3,
};

enum class EDatasmithAreaLightActorType : uint8_t {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3,
};

enum class EClanAuthority : uint8_t {
	None = 0,
	Crew = 1,
	SubMaster = 2,
	Master = 3,
	Max = 4,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
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

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
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

enum class EVirtualizationMode : uint8_t {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
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

enum class ECrowResultEventState : uint8_t {
	None = 0,
	UserLevel = 1,
	WeaponLevel = 2,
	Rank = 3,
	ECrowResultEventState_MAX = 4,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class ELocalFrameMode : uint8_t {
	FromObject = 0,
	FromGeometry = 1,
	ELocalFrameMode_MAX = 2,
};

enum class ECrowUIEventMethod : uint8_t {
	None = 0,
	EVENT_OK = 1,
	EVENT_CANCEL = 2,
	EVENT_SELECT = 3,
	EVENT_DESELECT = 4,
	EVENT_DRAG_START = 5,
	EVENT_DRAG_CANCEL = 6,
	ECrowUIEventMethod_MAX = 7,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class EBrushBlendType : uint8_t {
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3,
};

enum class ENiagaraGpuBufferFormat : uint8_t {
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3,
};

enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
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

enum class ECrowLogTakeExpType : uint8_t {
	None = 0,
	Kill = 1,
	VehicleDestoy = 2,
	DailyMission = 3,
	WeeklyMission = 4,
	Medal = 5,
	Mode = 6,
	UseSquadRespawn = 7,
	ReviveMySquad = 8,
	ConquestAreaGauge = 9,
	DyingPlayerPoint = 10,
	AssistUAV = 11,
	AssistCar = 12,
	AssistTank = 13,
	AssistHeli = 14,
	AssistBoat = 15,
	AssistSquadCar = 16,
	AssistSquadTank = 17,
	AssistSquadHeli = 18,
	AssistSquadBoat = 19,
	AssistSquadCharacter = 20,
	AssistCharacter = 21,
	ECrowLogTakeExpType_MAX = 22,
};

enum class EPolyEditCutPlaneOrientation : uint8_t {
	FaceNormals = 0,
	ViewDirection = 1,
	EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class ENiagaraPlatformSetState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4,
};

enum class ECrowVehicleTask : uint8_t {
	None = 0,
	Rotor_GroundFx = 1,
	ECrowVehicleTask_MAX = 2,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

enum class EAkAudioSessionCategoryOptions : uint8_t {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
};

enum class ECrowResultWidgetState : uint8_t {
	None = 0,
	Exp = 1,
	NotLevelUp = 2,
	LevelUp = 3,
	RankNotUp = 4,
	RankUp = 5,
	ECrowResultWidgetState_MAX = 6,
};

enum class EVehicleLockOnState : uint8_t {
	None = 0,
	Targeting = 1,
	LockOn = 2,
	EVehicleLockOnState_MAX = 3,
};

enum class ETimedDataInputState : uint8_t {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3,
};

enum class ECrowItemControllerType : uint8_t {
	None = 0,
	Rifle = 1,
	Grenade = 2,
	ECrowItemControllerType_MAX = 3,
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

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
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

enum class EOcclusionTriangleSamplingUIMode : uint8_t {
	Vertices = 0,
	VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2,
};

enum class EOculusMR_ClippingReference : uint8_t {
	CR_TrackingReference = 0,
	CR_Head = 1,
	CR_MAX = 2,
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

enum class ECrowBattlePassRewardProducingType : uint8_t {
	None = 0,
	ItemSlotScroll = 1,
	Effect = 2,
	ECrowBattlePassRewardProducingType_MAX = 3,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
};

enum class ECombineTargetType : uint8_t {
	NewAsset = 0,
	FirstInputAsset = 1,
	LastInputAsset = 2,
	ECombineTargetType_MAX = 3,
};

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
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

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
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

enum class ECrowWeaponSubType : uint8_t {
	AssultRifle = 0,
	MachineGun = 1,
	SubMachineGun = 2,
	ShotGun = 3,
	AutoSniper = 4,
	BoltActionSniper = 5,
	HandGun = 6,
	AutoHandGun = 7,
	Melee = 8,
	Throw = 9,
	Vehicle = 10,
	Kit = 11,
	HealKit = 12,
	GasCutter = 13,
	ECrowWeaponSubType_MAX = 14,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class ECrowWorldMapIconType : uint8_t {
	None = 0,
	Player = 1,
	Vehicle = 2,
	ConquestObject = 3,
	MainMission = 4,
	RespawnArea = 5,
	FirstRespawnArea = 6,
	SupplySpawnTarget = 7,
	SupplySpawnArea = 8,
	BombingTartget = 9,
	BombingActor = 10,
	Ping = 11,
	EnemyPlayer = 12,
	EnemyVehicle = 13,
	TransportAirPlane = 14,
	TransportAirPlaneRoute = 15,
	DropItem = 16,
	DeathPlayer = 17,
	UAVTarget = 18,
	KitBomber = 19,
	MapAreaName = 20,
	SkyRespawnPoint = 21,
	AreaMiniMap = 22,
	All = 23,
	ECrowWorldMapIconType_MAX = 24,
};

enum class EAudioBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	EAudioBusChannels_MAX = 2,
};

enum class ECLSHipsDirection : uint8_t {
	F = 0,
	B = 1,
	RF = 2,
	RB = 3,
	LF = 4,
	LB = 5,
	ECLSHipsDirection_MAX = 6,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
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

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class EPingWidgetType : uint8_t {
	FAR_MODE = 0,
	ROW_MODE = 1,
	DETAIL_PICKUPINVEN_MODE = 2,
	EPingWidgetType_MAX = 3,
};

enum class EPropertyAccessIndirectionType : uint8_t {
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5,
};

enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
};

enum class ECrowAnimSupplyTablet : uint8_t {
	None = 0,
	Equip = 1,
	Idle = 2,
	Control = 3,
	UnEquip = 4,
	ECrowAnimSupplyTablet_MAX = 5,
};

enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
};

enum class ECameraShakePlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3,
};

enum class ECrowRotorType : uint8_t {
	EMainRotor = 0,
	ESubRotor = 1,
	EMax = 2,
	ECrowRotorType_MAX = 3,
};

enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
};

enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3,
};

enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
};

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
};

enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

enum class DeviceType : uint8_t {
	NullDevice = 0,
	SpecificDevice = 1,
	DefaultSystemDevice = 2,
	DefaultCommunicationDevice = 3,
	DeviceType_MAX = 4,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class ECrowMissionType : uint8_t {
	None = 0,
	DailyMission = 1,
	WeeklyMission = 2,
	Achievements = 3,
	SessionMission = 4,
	FirstUserMission = 5,
	Tutorial = 6,
	_Max = 7,
	ECrowMissionType_MAX = 8,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
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

enum class ECrowProjectileMoveType : uint8_t {
	None = 0,
	MovementComponent = 1,
	TrajectoryComponent = 2,
	PhysicsSimulation = 3,
	ECrowProjectileMoveType_MAX = 4,
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

enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3,
};

enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

enum class PanningRule : uint8_t {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2,
};

enum class EDamageSourceType : uint8_t {
	None = 0,
	Point = 1,
	Melee = 2,
	Explosion = 3,
	Impulse = 4,
	Burning = 5,
	ContaminationArea = 6,
	Falling = 7,
	EDamageSourceType_MAX = 8,
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

enum class EDebugTypeEnum : uint8_t {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3,
};

enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EHairLODSelectionType : uint8_t {
	Cpu = 0,
	Gpu = 1,
	EHairLODSelectionType_MAX = 2,
};

enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
};

enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	IgnoreZAccumulate = 2,
	ERootMotionSourceSettingsFlags_MAX = 3,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class ECrowLedgeVaultType : uint8_t {
	ClimbOn = 0,
	ClimbOver = 1,
	ECrowLedgeVaultType_MAX = 2,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
};

enum class EAkHololensAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3,
};

enum class EBoundaryType : uint8_t {
	Boundary_Outer = 0,
	Boundary_PlayArea = 1,
	Boundary_MAX = 2,
};

enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

enum class ECrowCharacterSwimWaterType : uint8_t {
	NotInWater = 0,
	WaterPlane = 1,
	WaterBodyOcean = 2,
	WaterBodyLake = 3,
	WaterBodyOther = 4,
	ECrowCharacterSwimWaterType_MAX = 5,
};

enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class EStance : uint8_t {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	Sprinting = 3,
	Dying = 4,
	_Max = 5,
	EStance_MAX = 6,
};

enum class ECrowDamageCauser : uint8_t {
	None = 0,
	Weapon = 1,
	ServerWeapon = 2,
	Fall = 3,
	Drown = 4,
	Burn = 5,
	OutOfWorld = 6,
	BlastingVehicle = 7,
	Bombing = 8,
	Pressure = 9,
	BombMissionExplode = 10,
	CheatConsole = 11,
	Impact = 12,
	ZombieExplosion = 13,
	A10 = 14,
	Meteor = 15,
	HazardGas = 16,
	Environment = 17,
	ImpactCar = 18,
	ImpactAPC = 19,
	ImpactHeli = 20,
	ImpactTank = 21,
	ImpactBoat = 22,
	ECrowDamageCauser_MAX = 23,
};

enum class ESystemGestureBehavior : uint8_t {
	None = 0,
	SwapMaterial = 1,
	ESystemGestureBehavior_MAX = 2,
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

enum class ECrowMMeteorPieceState : uint8_t {
	None = 0,
	Wait = 1,
	Fire = 2,
	Explosion = 3,
	ECrowMMeteorPieceState_MAX = 4,
};

enum class EBuildingHISMCGeomType : uint8_t {
	Body = 0,
	Trigger1 = 1,
	Trigger2 = 2,
	Checker1 = 3,
	Checker2 = 4,
	Trace = 5,
	EBuildingHISMCGeomType_MAX = 6,
};

enum class ECLSMovementAction : uint8_t {
	None = 0,
	VaultLow = 1,
	VaultHigh = 2,
	GettingUp = 3,
	ChangingProne = 4,
	ECLSMovementAction_MAX = 5,
};

enum class ECrowFxType : uint8_t {
	SurfaceBullet = 0,
	TracerBullet = 1,
	Footstep = 2,
	CharacterParticle = 3,
	Muzzle = 4,
	Backblast = 5,
	Swimming = 6,
	VehicleImpact = 7,
	Explosion = 8,
	None = 9,
	ECrowFxType_MAX = 10,
};

enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class ECrowTrajectoryHitCheckResult : uint8_t {
	Success = 0,
	IgnoreHit = 1,
	YellowFlag = 2,
	RedFlag = 3,
	ECrowTrajectoryHitCheckResult_MAX = 4,
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

enum class EHairCardsClusterType : uint8_t {
	Low = 0,
	High = 1,
	EHairCardsClusterType_MAX = 2,
};

enum class ECrowCardinalDirection : uint8_t {
	North = 0,
	East = 1,
	West = 2,
	South = 3,
	_Max = 4,
	ECrowCardinalDirection_MAX = 5,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
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

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	MAX = 2,
};

enum class EClothingWindMethod_Legacy : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
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

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class ECrowWeaponPartsOption : uint8_t {
	AimSpreadDefault = 0,
	HipFireSpreadDefault = 1,
	Recoil = 2,
	RecoilHorizontal = 3,
	RecoilVertical = 4,
	FireSpeed = 5,
	RecoilDecrease = 6,
	AmmoVelocity = 7,
	AmmoDamage = 8,
	AmmoDamageMin = 9,
	AmmoDamageMax = 10,
	AmmoDamageDropDistance = 11,
	Reload = 12,
	AimShake = 13,
	AimTime = 14,
	CharacterMoveSpeed = 15,
	AttackRange = 16,
	MAX = 17,
};

enum class EAnimLobbyIdle : uint8_t {
	Idle_2 = 0,
	Idle_3 = 1,
	Idle_4 = 2,
	Idle_5 = 3,
	CharCustom_Idle = 4,
	EAnimLobbyIdle_MAX = 5,
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

enum class ECrowLobbyPartyUserState : uint8_t {
	None = 0,
	Online = 1,
	Offline = 2,
	Matching = 3,
	GamePlay = 4,
	ECrowLobbyPartyUserState_MAX = 5,
};

enum class ECrowCharacterAnimStance : uint8_t {
	None = 0,
	Stand = 1,
	Crouch = 2,
	Prone = 3,
	ECrowCharacterAnimStance_MAX = 4,
};

enum class EStartGameType : uint8_t {
	None = 0,
	StartGamePlay = 1,
	GamePlay = 2,
	QuickPlay = 3,
	JoinGame = 4,
	EStartGameType_MAX = 5,
};

enum class ECrowSkydivingParachuteState : uint8_t {
	None = 0,
	Spread = 1,
	Fall = 2,
	Land = 3,
	ECrowSkydivingParachuteState_MAX = 4,
};

enum class EOculusMR_PostProcessEffects : uint8_t {
	PPE_Off = 0,
	PPE_On = 1,
	PPE_MAX = 2,
};

enum class ECrowWorldActorLayoutItemDestroyReason : uint8_t {
	HiddenByVisibility = 0,
	DestroyedByImpact = 1,
	DestroyedByDamage = 2,
	ECrowWorldActorLayoutItemDestroyReason_MAX = 3,
};

enum class ECrowGameRoundState : uint8_t {
	None = 0,
	PlayCountdown = 1,
	Match = 2,
	Finish = 3,
	ECrowGameRoundState_MAX = 4,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class ECLSVehicleType : uint8_t {
	None = 0,
	Tank = 1,
	Helicopter = 2,
	Car = 3,
	APC = 4,
	Boat = 5,
	ECLSVehicleType_MAX = 6,
};

enum class ESettingsSlotIndexedValueFillType : uint8_t {
	Custom = 0,
	Resolution = 1,
	ESettingsSlotIndexedValueFillType_MAX = 2,
};

enum class ESocialTabType : uint8_t {
	FriendList = 0,
	FriendRequst = 1,
	Recent = 2,
	Search = 3,
	ESocialTabType_MAX = 4,
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

enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

enum class EMagicLeapMeshState : uint8_t {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4,
};

enum class FNiagaraCompileEventSeverity : uint8_t {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};

enum class ECrowSafeBoxEventState : uint8_t {
	None = 0,
	Begin = 1,
	Opening = 2,
	Opened = 3,
	Completed = 4,
	ECrowSafeBoxEventState_MAX = 5,
};

enum class EPropertyAccessObjectType : uint8_t {
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4,
};

enum class ECameraShakeAttenuation : uint8_t {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2,
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

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
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

enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t {
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
};

enum class ECrowClothPartHairType : uint8_t {
	Hair_Short = 0,
	Hair_Long = 1,
	Hair_MAX = 2,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
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

enum class EHittingAreaType : uint8_t {
	None = 0,
	HeadArmor = 1,
	BodyArmor = 2,
	HeadArmorBroken = 3,
	BodyArmorBroken = 4,
	Vehicle = 5,
	AliveToDeath = 6,
	TacticalKit = 7,
	Max = 8,
};

enum class ENDISkeletalMesh_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class EMorphologyOperation : uint8_t {
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EMorphologyOperation_MAX = 4,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4,
};

enum class EVectorVMOperandLocation : uint8_t {
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3,
};

enum class ECrowErrorCode : uint8_t {
	Success = 0,
	ServerQuerySericeError = 1,
	ServerConnectError = 2,
	ServerDisconnected = 3,
	DediServerDisconnected = 4,
	ServerArgEmpty = 5,
	ECrowErrorCode_MAX = 6,
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

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

enum class ECrowClothPartHeadType : uint8_t {
	Head_Helmet = 0,
	Head_Beanie = 1,
	Head_Cap = 2,
	Head_HeadSet = 3,
	Head_CapHeadSet = 4,
	Head_MAX = 5,
};

enum class ECrowBuildingFindCollision : uint8_t {
	Success = 0,
	NoCollision = 1,
	AlreadyContact = 2,
	ECrowBuildingFindCollision_MAX = 3,
};

enum class ECrowLockOnLauncherState : uint8_t {
	None = 0,
	Targeting = 1,
	LockOn = 2,
	OutOfRange = 3,
	ECrowLockOnLauncherState_MAX = 4,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class EBrushFalloffMode : uint8_t {
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2,
};

enum class EBitmapHeaderVersion : uint8_t {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class ESkinCacheDefaultBehavior : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2,
};

enum class EMontageSubStepResult : uint8_t {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4,
};

enum class ENiagaraScriptGroup : uint8_t {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3,
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

enum class EMirrorSaveMode : uint8_t {
	UpdateAssets = 0,
	CreateNewAssets = 1,
	EMirrorSaveMode_MAX = 2,
};

enum class EOculusMR_CompositionMethod : uint8_t {
	ExternalComposition = 0,
	DirectComposition = 1,
	EOculusMR_MAX = 2,
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

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
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

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class ECrowWeaponSubState : uint8_t {
	None = 0,
	Idle = 1,
	Entering = 2,
	Active = 3,
	Exiting = 4,
	ECrowWeaponSubState_MAX = 5,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
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

enum class ECrowSoundScriptConditionType : uint8_t {
	Reload = 0,
	GrenadeThrow = 1,
	SmokeThrow = 2,
	IncendiaryThrow = 3,
	FlashBangThrow = 4,
	KillEnemy = 5,
	Damaged = 6,
	ECrowSoundScriptConditionType_MAX = 7,
};

enum class ENiagaraSimTarget : uint8_t {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2,
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

enum class EGAProgressionStatus : uint8_t {
	undefined = 0,
	start = 1,
	complete = 2,
	fail = 3,
	EGAProgressionStatus_MAX = 4,
};

enum class ESteamVRTrackedDeviceType : uint8_t {
	Controller = 0,
	TrackingReference = 1,
	Other = 2,
	Invalid = 3,
	ESteamVRTrackedDeviceType_MAX = 4,
};

enum class ECrowTeam_RedBlue : uint8_t {
	RedTeam = 0,
	BlueTeam = 1,
	ObserverTeam = 2,
	AllTeam = 3,
	NoTeam = 4,
	TeamNone = 5,
	ECrowTeam_RedBlue_MAX = 6,
};

enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

enum class ETimedDataInputEvaluationType : uint8_t {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

enum class EChaosClothTetherMode : uint8_t {
	FastTetherFastLength = 0,
	AccurateTetherFastLength = 1,
	AccurateTetherAccurateLength = 2,
	MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode_MAX = 4,
};

enum class ESkyCreatorMoonOrbitType : uint8_t {
	MoonOrbitType_SimplifiedCycle = 0,
	MoonOrbitType_FixedElevation = 1,
	MoonOrbitType_MAX = 2,
};

enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5,
};

enum class ELoudnessNRTCurveTypeEnum : uint8_t {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	None = 4,
	ELoudnessNRTCurveTypeEnum_MAX = 5,
};

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class EAppleTextureType : uint8_t {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EOffsetMeshToolOffsetType : uint8_t {
	Iterative = 0,
	Implicit = 1,
	EOffsetMeshToolOffsetType_MAX = 2,
};

enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
};

enum class ELobbyMainSpawnSlot : uint8_t {
	SpawnSlot_2 = 0,
	SpawnSlot_3 = 1,
	SpawnSlot_4 = 2,
	SpawnSlot_5 = 3,
	SpawnSlot_Max = 4,
};

enum class EARServiceInstallRequestResult : uint8_t {
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4,
};

enum class ELoadingState : uint8_t {
	None = 0,
	Ready = 1,
	Start = 2,
	Idle = 3,
	End = 4,
	ELoadingState_MAX = 5,
};

enum class ECrowWorldTriggerType : uint8_t {
	Door = 0,
	LightSwitch = 1,
	ECrowWorldTriggerType_MAX = 2,
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

enum class EAnimSyncGroupScope : uint8_t {
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
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

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
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

enum class ECLSBasePoseType : uint8_t {
	None = 0,
	StandRelaxed = 1,
	StandRelaxedUpSlope = 2,
	StandRelaxedDownSlope = 3,
	StandRelaxedMoving = 4,
	StandReady = 5,
	StandReadyMoving = 6,
	StandBattle = 7,
	StandBattleUpSlope = 8,
	StandBattleDownSlope = 9,
	StandBattleMoving = 10,
	StandAim = 11,
	StandAimMoving = 12,
	StandSprint = 13,
	CrouchRelaxed = 14,
	CrouchRelaxedUpSlope = 15,
	CrouchRelaxedDownSlope = 16,
	CrouchRelaxedMoving = 17,
	CrouchReady = 18,
	CrouchReadyMoving = 19,
	CrouchBattle = 20,
	CrouchBattleUpSlope = 21,
	CrouchBattleDownSlope = 22,
	CrouchBattleMoving = 23,
	CrouchAim = 24,
	CrouchAimMoving = 25,
	ProneRelaxed = 26,
	ProneRelaxedMoving = 27,
	ProneReady = 28,
	ProneReadyMoving = 29,
	ProneBattle = 30,
	ProneBattleMoving = 31,
	ProneAim = 32,
	ProneAimMoving = 33,
	Falling = 34,
	LandPrediction = 35,
	FallingBattle = 36,
	LandPredictionBattle = 37,
	Action = 38,
	VaultLow = 39,
	VaultHigh = 40,
	GetUpDefault = 41,
	GetUpInjured = 42,
	VehicleBoarding = 43,
	OnVehicle = 44,
	OnVehicleBattle = 45,
	OnHellicopterBattle = 46,
	ECLSBasePoseType_MAX = 47,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class ETransformMeshesSnapDragSource : uint8_t {
	ClickPoint = 0,
	Pivot = 1,
	LastValue = 2,
	ETransformMeshesSnapDragSource_MAX = 3,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 3,
	Unknown = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5,
};

enum class ELightUnits : uint8_t {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3,
};

enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class ECrowTeamID : uint8_t {
	Red = 0,
	Blue = 1,
	Yellow = 2,
	Purple = 3,
	NoTeam = 4,
	TeamNone = 5,
	ECrowTeamID_MAX = 6,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
};

enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
};

enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
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

enum class EConfidenceBehavior : uint8_t {
	None = 0,
	HideActor = 1,
	EConfidenceBehavior_MAX = 2,
};

enum class ECrowSpecificPurchaseType : uint8_t {
	Normal = 0,
	BattlePass = 1,
	BattlePassFreePass = 2,
	ECrowSpecificPurchaseType_MAX = 3,
};

enum class ETriggerInputKeyType : uint8_t {
	None = 0,
	Key_2 = 1,
	Key_3 = 2,
	ETriggerInputKeyType_MAX = 3,
};

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

enum class ENiagaraAgeUpdateMode : uint8_t {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
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

enum class EAkWindowsAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3,
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

enum class ECLSPeekState : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	ECLSPeekState_MAX = 3,
};

enum class EAkAudioSessionCategory : uint8_t {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3,
};

enum class ECrowWeaponThrowableType : uint8_t {
	Frag = 0,
	Smoke = 1,
	FlashBang = 2,
	Incendiary = 3,
	ECrowWeaponThrowableType_MAX = 4,
};

enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
};

enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
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

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class EMakeMeshPolygroupMode : uint8_t {
	Single = 0,
	PerFace = 1,
	PerQuad = 2,
	EMakeMeshPolygroupMode_MAX = 3,
};

enum class ECrowItemSpawnType : uint8_t {
	None = 0,
	World = 1,
	PickupInventory = 2,
	ECrowItemSpawnType_MAX = 3,
};

enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

enum class EQuartzDelegateType : uint8_t {
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3,
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

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
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

enum class ESendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3,
};

enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3,
};

enum class EVehicleShieldingType : uint8_t {
	Open = 0,
	Shielding = 1,
	HalfShielding = 2,
	EVehicleShieldingType_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
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

enum class EHandTrackingSupport : uint8_t {
	ControllersOnly = 0,
	ControllersAndHands = 1,
	HandsOnly = 2,
	EHandTrackingSupport_MAX = 3,
};

enum class EMeshAttributePaintToolActions : uint8_t {
	NoAction = 0,
	EMeshAttributePaintToolActions_MAX = 1,
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

enum class ESpaceCurveControlPointFalloffType : uint8_t {
	Linear = 0,
	Smooth = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2,
};

enum class EEnemyActionFinishResult : uint8_t {
	Success = 0,
	Aborted = 1,
	ConditionFailed = 2,
	EEnemyActionFinishResult_MAX = 3,
};

enum class ELiveLinkSourceMode : uint8_t {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3,
};

enum class EOculusHandType : uint8_t {
	None = 0,
	HandLeft = 1,
	HandRight = 2,
	EOculusHandType_MAX = 3,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class ECrowSoundStateType : uint8_t {
	Outdoor = 0,
	ShieldingVehicle = 1,
	HalfShieldingVehicle = 2,
	OpenVehicle = 3,
	InWood = 4,
	InConcrete = 5,
	InHugeArea = 6,
	InContainer = 7,
	InWarehouse = 8,
	InTunnel = 9,
	InBasement = 10,
	OnWater = 11,
	UnderWater = 12,
	InHouse = 13,
	None = 14,
	ECrowSoundStateType_MAX = 15,
};

enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5,
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

enum class EWaterBodyType : uint8_t {
	River = 0,
	Lake = 1,
	Ocean = 2,
	Transition = 3,
	Num = 4,
	EWaterBodyType_MAX = 5,
};

enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class ELocationYToSpawnEnum : uint8_t {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ENiagaraStatEvaluationType : uint8_t {
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2,
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

enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
};

enum class ECrowPersonalResultItemState : uint8_t {
	None = 0,
	Update = 1,
	End = 2,
	ECrowPersonalResultItemState_MAX = 3,
};

enum class ECrowCustomMode : uint8_t {
	None = 0,
	WaitingRoom = 1,
	TeamGameRoom = 2,
	GameRoom = 3,
	ECrowCustomMode_MAX = 4,
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

enum class ENiagaraIterationSource : uint8_t {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2,
};

enum class ENiagaraStatDisplayMode : uint8_t {
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2,
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

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class ECLSOverlayState : uint8_t {
	Default = 0,
	Rifle = 1,
	HandGun1H = 2,
	HandGun2H = 3,
	Melee1H = 4,
	Melee2H = 5,
	Item1H = 6,
	Item2H = 7,
	VehicleWeapon = 8,
	NotLayering = 9,
	ECLSOverlayState_MAX = 10,
};

enum class ESceneSnapQueryType : uint8_t {
	Position = 0,
	Rotation = 1,
	ESceneSnapQueryType_MAX = 2,
};

enum class ECrowSkydivingAnimState : uint8_t {
	None = 0,
	FreeFall = 1,
	ParachuteSpread = 2,
	Parachute = 3,
	ReadyToLand = 4,
	Land = 5,
	WalkLand = 6,
	RollLand = 7,
	Falling = 8,
	FallingLand = 9,
	Swim = 10,
	ECrowSkydivingAnimState_MAX = 11,
};

enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t {
	None = 0,
	Bad = 1,
	Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

enum class EWebNoticeType : uint8_t {
	Maintenance = 0,
	Announcement = 1,
	EWebNoticeType_MAX = 2,
};

enum class ELobbySceneMode : uint8_t {
	None = 0,
	Main = 1,
	PlaySetting = 2,
	CharacterCustom = 3,
	CharacterCustomAppearance = 4,
	WeaponLodOut = 5,
	WeaponCustom = 6,
	WeaponCustomSticker = 7,
	Mission = 8,
	Shop = 9,
	Spray = 10,
	Emotion = 11,
	VehicleSkin = 12,
	Record = 13,
	Clan = 14,
	WeaponPreview = 15,
	CharacterPreview = 16,
	VehicleSkinPreview = 17,
	EmotionPreview = 18,
	ELobbySceneMode_MAX = 19,
};

enum class ECrowBleedingType : uint8_t {
	Bleeding_None = 0,
	Bleeding_Fast = 1,
	Bleeding_Slow = 2,
	Bleeding_MAX = 3,
};

enum class ECrowMedalShowType : uint8_t {
	Icon = 0,
	Text = 1,
	All = 2,
	_Max = 3,
	ECrowMedalShowType_MAX = 4,
};

enum class ECrowVehicleState : uint8_t {
	None = 0,
	Repose = 1,
	EngineStart = 2,
	Ready = 3,
	AutoHover = 4,
	ShutDown = 5,
	Crash = 6,
	Flooding = 7,
	ECrowVehicleState_MAX = 8,
};

enum class ECLSStance : uint8_t {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	ECLSStance_MAX = 3,
};

enum class ECrowClothPartMaskType : uint8_t {
	Mask_Gas = 0,
	Mask_Cotton = 1,
	Mask_Steel = 2,
	Mask_Half = 3,
	Mask_MAX = 4,
};

enum class EConstantQNormalizationEnum : uint8_t {
	EqualEuclideanNorm = 0,
	EqualEnergy = 1,
	EqualAmplitude = 2,
	EConstantQNormalizationEnum_MAX = 3,
};

enum class ECrowAmmoType : uint8_t {
	None = 0,
	Bullet_5_56mm = 1,
	Bullet_7_62mm = 2,
	Bullet_9mm = 3,
	Bullet_338_LMag = 4,
	Bullet_12_7mm = 5,
	Bullet_12_7mm_Ground = 6,
	Bullet_0_44Mag = 7,
	Bullet_00BuckShot = 8,
	Bullet_14_5mm = 9,
	Bullet_25mm = 10,
	Grenade_M26 = 11,
	Grenade_M18 = 12,
	Grenade_AN_M14 = 13,
	Grenade_M84 = 14,
	Grenade_40mm = 15,
	Cannon_120mmAP = 16,
	Cannon_120mmHE = 17,
	Smoke_66mm = 18,
	Rocket_66mm = 19,
	Rocket_70mm = 20,
	Rocket_85mm = 21,
	Missile_70mm = 22,
	Missile_127mm = 23,
	Melee_Knife = 24,
	Kit_Normal = 25,
	Kit_Heal = 26,
	C4 = 27,
	ClaymoreMine = 28,
	Heli_Flare = 29,
	GasMask_Filters = 30,
	Zombie_Punch = 31,
	ECrowAmmoType_MAX = 32,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
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

enum class EEnemyActionState : uint8_t {
	ReadyForActivation = 0,
	Active = 1,
	Aborting = 2,
	EEnemyActionState_MAX = 3,
};

enum class TTSMessageState : uint8_t {
	Playing = 0,
	Enqueued = 1,
	TTSMessageState_MAX = 2,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
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

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
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

enum class ECrowAirPlaneState : uint8_t {
	AirPlaneStateReady = 0,
	AirPlaneStateCanDrop = 1,
	AirPlaneStateForcedDrop = 2,
	ECrowAirPlaneState_MAX = 3,
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

enum class ESteamVRHand : uint8_t {
	VR_Left = 0,
	VR_Right = 1,
	VR_MAX = 2,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

enum class ECrowLobbyPartyState : uint8_t {
	None = 0,
	Wait = 1,
	MapChanging = 2,
	Matching = 3,
	GamePlay = 4,
	ECrowLobbyPartyState_MAX = 5,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class ECrowWorldSyncActorType : uint8_t {
	Unknown = 0,
	Building = 1,
	BuildingProp = 2,
	WorldProp = 3,
	ECrowWorldSyncActorType_MAX = 4,
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

enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class ECrowWeaponState : uint8_t {
	Idle = 0,
	Select = 1,
	Reload = 2,
	BoltAction = 3,
	ChangeFireMode = 4,
	Deselect = 5,
	DeselectComplete = 6,
	ECrowWeaponState_MAX = 7,
};

enum class EReflectionSourceType : uint8_t {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2,
};

enum class ECLSLadderState : uint8_t {
	None = 0,
	LadderBottomEnter = 1,
	LadderBottomExit = 2,
	LadderIdle = 3,
	LadderUp = 4,
	LadderDown = 5,
	LadderTopEnter = 6,
	LadderTopExit = 7,
	LadderMiddleExit = 8,
	ECLSLadderState_MAX = 9,
};

enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
};

enum class EParticleDetailMode : uint8_t {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3,
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
	EnableGetSourcePlayPosition = 13,
	EAkCallbackType_MAX = 14,
};

enum class ECrowShopProductType : uint8_t {
	None = 0,
	NormalStorePage = 1,
	PackageStorePage = 2,
	BattlePassStorePage = 3,
	ClothStorePage = 4,
	WeaponStorePage = 5,
	EmotionStorePage = 6,
	SprayStorePage = 7,
	LookChangeStorePage = 8,
	VehicleStoreNomalCarSkinPage = 9,
	VehicleStoreCombetCarSkinPage = 10,
	VehicleStoreTankSkinPage = 11,
	VehicleStoreHeliSkinPage = 12,
	VehicleStoreBoatSkinPage = 13,
	ClanMark = 14,
	ShopItemDeconstruct = 15,
	ShopInventoryPage = 16,
	WeaponLevelJump = 17,
	ClothSlotPass = 18,
	WeaponSlotPass = 19,
	VehicleStoreEtcSkinPage = 20,
	ECrowShopProductType_MAX = 21,
};

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
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

enum class EARSceneReconstruction : uint8_t {
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3,
};

enum class EFireType : uint8_t {
	Shooting = 0,
	OverhandThrow = 1,
	UnderhandThrow = 2,
	_Max = 3,
	EFireType_MAX = 4,
};

enum class ConnectionState : uint8_t {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
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

enum class ECrowAmmoFireType : uint8_t {
	None = 0,
	ServerHitScan = 1,
	ClientHitScan = 2,
	ServerProjectile = 3,
	ClientProjectile = 4,
	UseKit = 5,
	UseKitImmediate = 6,
	NoAmmoNeededClientHitScan = 7,
	ECrowAmmoFireType_MAX = 8,
};

enum class EBaseCreateFromSelectedTargetType : uint8_t {
	NewAsset = 0,
	FirstInputAsset = 1,
	LastInputAsset = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class ECrowSpawnerType : uint8_t {
	Match = 0,
	WaitUser = 1,
	None = 2,
	ECrowSpawnerType_MAX = 3,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class ELuminFrameTimingHint : uint8_t {
	Unspecified = 0,
	Maximum = 1,
	FPS_61 = 2,
	FPS_121 = 3,
	ELuminFrameTimingHint_MAX = 4,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class ECrowCharacterGaitMode : uint8_t {
	None = 0,
	Walking = 1,
	Running = 2,
	Sprinting = 3,
	ECrowCharacterGaitMode_MAX = 4,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
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

enum class ECrowGasMaskSoundState : uint8_t {
	None = 0,
	Idle = 1,
	Moving = 2,
	Sprinting = 3,
	MovingEnd = 4,
	ECrowGasMaskSoundState_MAX = 5,
};

enum class ECrowShopProductSubType : uint8_t {
	None = 0,
	KeySubStore = 1,
	BoxSubStore = 2,
	RCPSubStore = 3,
	ETCItemSubStore = 4,
	SkinSubStore = 5,
	StickerSubStore = 6,
	HeadSubStore = 7,
	GlassesSubStore = 8,
	FaceItemSubStore = 9,
	TopSubStore = 10,
	GlovesSubStore = 11,
	OuterSubStore = 12,
	PantsSubStore = 13,
	ShoesSubStore = 14,
	BagSubStore = 15,
	RaceSubStore = 16,
	HairSubStore = 17,
	BeardSubStore = 18,
	EyeColorSubStore = 19,
	TattooSubStore = 20,
	SpraySubStore = 21,
	WeaponChoiceTab = 22,
	AssistantWeaponChoiceTab = 23,
	PartChoiceTab = 24,
	BattlePassTab = 25,
	PackageSubStore = 26,
	EmotionTab = 27,
	WinMotionTab = 28,
	VehicleSkinPulsarTab = 29,
	VehicleSkinBuggyTab = 30,
	VehicleSkinBrawlerTab = 31,
	VehicleSkinGrizzlyTab = 32,
	VehicleSkinRoadRoverTab = 33,
	VehicleSkinRhinoTab = 34,
	VehicleSkinLeonidTab = 35,
	VehicleSkinSparrowRocketTab = 36,
	VehicleSkinSparrowGatilingTab = 37,
	VehicleSkinSeaHorseTab = 38,
	ClothTopPatchTab = 39,
	ClanEmblemMarkTab = 40,
	ClanEmblemBGTab = 41,
	VehicleSkinParachuteTab = 42,
	LegendaryWeapon = 43,
	ECrowShopProductSubType_MAX = 44,
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

enum class EAudioSpectrumBandPresetType : uint8_t {
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4,
};

enum class ESettingRepositoryType : uint8_t {
	Default = 0,
	User = 1,
	Modified = 2,
	ESettingRepositoryType_MAX = 3,
};

enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	Unbounded = 3,
	EHMDTrackingOrigin_MAX = 4,
};

enum class ECrowEquipmentSlotType : uint8_t {
	Primary01 = 0,
	Primary02 = 1,
	Melee = 2,
	Throw = 3,
	Kit = 4,
	HealKit = 5,
	HeadArmor = 6,
	BodyArmor = 7,
	InvenBag = 8,
	MissionKit = 9,
	GasCutter = 10,
	__Max__ = 11,
	WeaponParts = 12,
	WeaponSlotMax = 13,
	ArmorBegin = 14,
	ArmorEnd = 15,
	ECrowEquipmentSlotType_MAX = 16,
};

enum class EPlaneBrushSideMode : uint8_t {
	BothSides = 0,
	PushDown = 1,
	PullTowards = 2,
	EPlaneBrushSideMode_MAX = 3,
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

enum class ECrowCharacterFireTargetPart : uint8_t {
	Head = 0,
	UpperBody = 1,
	LowerBody = 2,
	CoveringFire = 3,
	ECrowCharacterFireTargetPart_MAX = 4,
};

enum class ECameraShakeDurationType : uint8_t {
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3,
};

enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

enum class ENiagaraModuleDependencyType : uint8_t {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class ELightmapType : uint8_t {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3,
};

enum class EPoseComponentDebugMode : uint8_t {
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2,
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

enum class ECableMeshGenerationType : uint8_t {
	Basic = 0,
	CustomMesh = 1,
	ECableMeshGenerationType_MAX = 2,
};

enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
};

enum class EOculusMR_CameraDeviceEnum : uint8_t {
	CD_None = 0,
	CD_WebCamera0 = 1,
	CD_WebCamera1 = 2,
	CD_MAX = 3,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
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

enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

enum class ECrowPingType : uint8_t {
	None = 0,
	Item = 1,
	Ally = 2,
	Enemy = 3,
	Neutral = 4,
	Ground = 5,
	ConquestAreaIcon = 6,
	MiningPoint = 7,
	MiningPoint_Mining_MySquad = 8,
	MiningPoint_Mining_Enemy = 9,
	MiningPoint_Complete_MySquad = 10,
	MiningPoint_Complete_Enemy = 11,
	EscapePoint_Active = 12,
	EscapePoint_Called = 13,
	EscapePoint_Complete = 14,
	EscapeHeli = 15,
	EnemyTrace = 16,
	Move = 17,
	LocateEnemy = 18,
	FoundItem = 19,
	Attack = 20,
	WatchOut = 21,
	HoldPosition = 22,
	Observe = 23,
	Max = 24,
};

enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
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

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

enum class ECrowControlType : uint8_t {
	None = 0,
	KeyBoard = 1,
	Pad = 2,
	Hacking = 3,
	ECrowControlType_MAX = 4,
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

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
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

enum class ECrowLobbyProfileRecordType : uint8_t {
	Total = 0,
	Conquest = 1,
	SquadMatch = 2,
	ECrowLobbyProfileRecordType_MAX = 3,
};

enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class ENiagaraTickBehavior : uint8_t {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4,
};

enum class EWaterBrushFalloffMode : uint8_t {
	Angle = 0,
	Width = 1,
	EWaterBrushFalloffMode_MAX = 2,
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

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EClassRepNodeMapping : uint8_t {
	NotRouted = 0,
	RelevantAllConnections = 1,
	Pawn = 2,
	Spatialize_Static = 3,
	Spatialize_Dynamic = 4,
	Spatialize_Dormancy = 5,
	EClassRepNodeMapping_MAX = 6,
};

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class ERankAlarmWidgetSwitcher : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	Fifth = 4,
	ETCRank = 5,
	FirstRecapture = 6,
	ERankAlarmWidgetSwitcher_MAX = 7,
};

enum class EGeoAnchorComponentDebugMode : uint8_t {
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2,
};

enum class SubscriptionReply : uint8_t {
	Allow = 0,
	Block = 1,
	SubscriptionReply_MAX = 2,
};

enum class EHoleFillOpFillType : uint8_t {
	TriangleFan = 0,
	PolygonEarClipping = 1,
	Planar = 2,
	Minimal = 3,
	Smooth = 4,
	EHoleFillOpFillType_MAX = 5,
};

enum class AkMeshType : uint8_t {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2,
};

enum class ETransformMeshesTransformMode : uint8_t {
	SharedGizmo = 0,
	SharedGizmoLocal = 1,
	PerObjectGizmo = 2,
	LastValue = 3,
	ETransformMeshesTransformMode_MAX = 4,
};

enum class EClusterUnionMethod : uint8_t {
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None = 4,
	EClusterUnionMethod_MAX = 5,
};

enum class ESortState : uint8_t {
	Normal = 0,
	Ascending = 1,
	Descending = 2,
	ESortState_MAX = 3,
};

enum class ECrowVehicleInputBlockMask : uint8_t {
	None = 0,
	MoveForward = 1,
	MoveRight = 2,
	Yaw = 3,
	Pitch = 4,
	Roll = 5,
	Collective = 6,
	All_FR = 7,
	All_YPRC = 8,
	All = 9,
	ECrowVehicleInputBlockMask_MAX = 10,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

enum class ECrowFallsDamageType : uint8_t {
	None = 0,
	NoDamage = 1,
	Damage = 2,
	BeforeDead = 3,
	Dead = 4,
	ECrowFallsDamageType_MAX = 5,
};

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
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

enum class EARSessionTrackingFeature : uint8_t {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	SceneDepth = 4,
	SmoothedSceneDepth = 5,
	EARSessionTrackingFeature_MAX = 6,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class ERevolvePropertiesCapFillMode : uint8_t {
	None = 0,
	Delaunay = 1,
	EarClipping = 2,
	CenterFan = 3,
	ERevolvePropertiesCapFillMode_MAX = 4,
};

enum class ECrowDecalType : uint8_t {
	Unknown = 0,
	Bullet = 1,
	Explosion = 2,
	FootPrint = 3,
	Blood = 4,
	WeaponSticker = 5,
	Max = 6,
};

enum class ESettingCategoryType : uint8_t {
	Display = 0,
	AdvancedDisplay = 1,
	Audio = 2,
	Input = 3,
	Gameplay = 4,
	Control = 5,
	Etc = 6,
	Max = 7,
	SubItem = 8,
};

enum class EMaterialBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EMaterialBoundaryConstraint_MAX = 4,
};

enum class ECrowMovementMode : uint8_t {
	None = 0,
	Grounded = 1,
	Falling = 2,
	Ragdoll = 3,
	Death = 4,
	OnVehicle = 5,
	Vault = 6,
	Swimming = 7,
	Ladder = 8,
	_Max = 9,
	ECrowMovementMode_MAX = 10,
};

enum class ENiagaraMeshFacingMode : uint8_t {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4,
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

enum class ECrowSupplyBoxType : uint8_t {
	None = 0,
	BulletBox = 1,
	MorphineBox = 2,
	WeaponBox = 3,
	ECrowSupplyBoxType_MAX = 4,
};

enum class EToolMessageLevel : uint8_t {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5,
};

enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
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

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
};

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ECrowVehicleFloodingState : uint8_t {
	NONE = 0,
	NoOverlap = 1,
	Overlap = 2,
	InWater = 3,
	Immerge = 4,
	ImmergeToFlooding = 5,
	Flooding = 6,
	ECrowVehicleFloodingState_MAX = 7,
};

enum class ENormalCalculationMethod : uint8_t {
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3,
};

enum class ECrowConquestIconState : uint8_t {
	None = 0,
	Neutrality_Normal = 1,
	MyTeam_Normal = 2,
	Enemy_Normal = 3,
	Neutrality_Change = 4,
	MyTeam_Change = 5,
	Enemy_Change = 6,
	ECrowConquestIconState_MAX = 7,
};

enum class ECrowWorldEditorTaskResult : uint8_t {
	Working = 0,
	ResultSuccess = 1,
	ResultFail = 2,
	ECrowWorldEditorTaskResult_MAX = 3,
};

enum class EInputCaptureRequestType : uint8_t {
	Begin = 0,
	Ignore = 1,
	EInputCaptureRequestType_MAX = 2,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class ESkyCreatorSunOrbitType : uint8_t {
	SunOrbitType_SimplifiedCycle = 0,
	SunOrbitType_Simulated = 1,
	SunOrbitType_MAX = 2,
};

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class ECrowCharacterDamageType : uint8_t {
	None = 0,
	Hit = 1,
	AliveToDying = 2,
	DyingToDeath = 3,
	Death = 4,
	ECrowCharacterDamageType_MAX = 5,
};

enum class EAlignObjectsAlignTypes : uint8_t {
	Pivots = 0,
	BoundingBoxes = 1,
	EAlignObjectsAlignTypes_MAX = 2,
};

enum class EPlaneComponentDebugMode : uint8_t {
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3,
};

enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

enum class ECrowWorldDamageType : uint8_t {
	Point = 0,
	Melee = 1,
	Explosion = 2,
	Impact = 3,
	Burning = 4,
	Radiation = 5,
	ECrowWorldDamageType_MAX = 6,
};

enum class EVertexOffsetUsageType : uint8_t {
	None = 0,
	PreSkinningOffset = 1,
	PostSkinningOffset = 2,
	EVertexOffsetUsageType_MAX = 3,
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

enum class ECrowTakeExpType : uint8_t {
	Misc = 0,
	KillPoint = 1,
	DyingPlayerPoint = 2,
	VehicleDestoyPoint = 3,
	MedalPoint = 4,
	DailyMission = 5,
	WeeklyMission = 6,
	SquadPoint = 7,
	AssistPoint = 8,
	ModePoint = 9,
	Max = 10,
	All = 11,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class ESubmixSendStage : uint8_t {
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2,
};

enum class EPSCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5,
};

enum class ENiagaraRibbonFacingMode : uint8_t {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3,
};

enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class EDesiredImageFormat : uint8_t {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4,
};

enum class ESprayWidgetState : uint8_t {
	Normal = 0,
	RegistListToSlot = 1,
	RegistAnimation = 2,
	ESprayWidgetState_MAX = 3,
};

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class ETranslucencyType : uint8_t {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2,
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

enum class EDatasmithImportHierarchy : uint8_t {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class EAkAndroidAudioAPI : uint8_t {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2,
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

enum class EConcurrencyVolumeScaleMode : uint8_t {
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3,
};

enum class ENCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5,
};

enum class EViewInteractionState : uint8_t {
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENDIStaticMesh_SourceMode : uint8_t {
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4,
};

enum class EUVLayoutPreviewSide : uint8_t {
	Left = 0,
	Right = 1,
	EUVLayoutPreviewSide_MAX = 2,
};

enum class ENiagaraMeshLockedAxisSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class EGroomGeometryType : uint8_t {
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
};

enum class ENonlinearOperationType : uint8_t {
	Bend = 0,
	Flare = 1,
	Twist = 2,
	ENonlinearOperationType_MAX = 3,
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

enum class EGAResourceFlowType : uint8_t {
	undefined = 0,
	source = 1,
	sink = 2,
	EGAResourceFlowType_MAX = 3,
};

enum class ECrowColorTarget : uint8_t {
	None = 0,
	Player = 1,
	Enemy = 2,
	UI = 3,
	All = 4,
	ECrowColorTarget_MAX = 5,
};

enum class ECrowCustomFilterReaminSlot : uint8_t {
	None = 0,
	NotExist = 1,
	Reamin1_6 = 2,
	Reamin6_11 = 3,
	Reamin11 = 4,
	ECrowCustomFilterReaminSlot_MAX = 5,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class ECrowClothPartsMesh : uint8_t {
	Hair = 0,
	Head = 1,
	Glasses = 2,
	Mask = 3,
	Top = 4,
	Gloves = 5,
	Bottoms = 6,
	Shoes = 7,
	Outer = 8,
	Backpack = 9,
	costume = 10,
	Beard = 11,
	Patch = 12,
	MAX = 13,
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

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

enum class ECrowMiningPointState : uint8_t {
	None = 0,
	Active = 1,
	Mining = 2,
	Complete = 3,
	Deactive = 4,
	ECrowMiningPointState_MAX = 5,
};

enum class ECrowBloodAnimType : uint8_t {
	AppearBlood = 0,
	AppearBloodScreen = 1,
	DisappearBlood = 2,
	DisappearBloodScreen = 3,
	ECrowBloodAnimType_MAX = 4,
};

enum class EApplicationState : uint8_t {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4,
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

enum class EMirrorOperationMode : uint8_t {
	MirrorAndAppend = 0,
	MirrorExisting = 1,
	EMirrorOperationMode_MAX = 2,
};

enum class ECrowBuildingHISMCDestruction : uint8_t {
	Indestructible = 0,
	SimplyDetach = 1,
	SimplyHide = 2,
	DefinedInTable = 3,
	ECrowBuildingHISMCDestruction_MAX = 4,
};

enum class ECrowBuffEventType : uint8_t {
	Normal = 0,
	Event = 1,
	ECrowBuffEventType_MAX = 2,
};

enum class ECrowBuildingEditorShowType : uint8_t {
	ShowAll = 0,
	NoneLODOnly = 1,
	LODAll = 2,
	LODBodyOnly = 3,
	LODExtraOnly = 4,
	ECrowBuildingEditorShowType_MAX = 5,
};

enum class EAnimAlphaInputType : uint8_t {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3,
};

enum class ESkinCacheUsage : uint8_t {
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3,
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

enum class ESkeletalSummaryDataType : uint8_t {
	VR_SummaryType_FromAnimation = 0,
	VR_SummaryType_FromDevice = 1,
	VR_SummaryType_MAX = 2,
};

enum class ECrowFallsStartType : uint8_t {
	None = 0,
	Nomal = 1,
	Vehicle = 2,
	ECrowFallsStartType_MAX = 3,
};

enum class ECrowExitWorldType : uint8_t {
	None = 0,
	Lobby = 1,
	Quit = 2,
	ECrowExitWorldType_MAX = 3,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
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

enum class ECrowConquestSkill : uint8_t {
	None = 0,
	MorphineBox = 1,
	UAVSupport = 2,
	SquadRespawn = 3,
	A10 = 4,
	HeavyBombard = 5,
	DirectRocketLauncher = 6,
	HomingRocketLaunhcer = 7,
	Shield = 8,
	ECrowConquestSkill_MAX = 9,
};

enum class ECrowShopSortType : uint8_t {
	None = 0,
	New = 1,
	Sale = 2,
	Recommend = 3,
	LowPrice = 4,
	HighPrice = 5,
	ECrowShopSortType_MAX = 6,
};

enum class ESubmixSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3,
};

enum class ERandomVelocityGenerationTypeEnum : uint8_t {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3,
};

enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
};

enum class ECrowWeaponAimMode : uint8_t {
	None = 0,
	Only_FP = 1,
	Only_TP = 2,
	Both = 3,
	ECrowWeaponAimMode_MAX = 4,
};

enum class EReflectionFilterBits : uint8_t {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3,
};

enum class ESetMeshMaterialMode : uint8_t {
	KeepOriginal = 0,
	Checkerboard = 1,
	Override = 2,
	ESetMeshMaterialMode_MAX = 3,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class ECLSBattleStance : uint8_t {
	Relaxed = 0,
	Ready = 1,
	Directed = 2,
	Aimming = 3,
	ECLSBattleStance_MAX = 4,
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

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
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

enum class ECrowGameStateSquadMatch : uint8_t {
	None = 0,
	ActiveEscapePoint = 1,
	CalledEscapeVehicle = 2,
	MoveCompleteEscapeVehicle = 3,
	EscapeComplete = 4,
	ECrowGameStateSquadMatch_MAX = 5,
};

enum class ECrowBuildingEditorLOD : uint8_t {
	LODAuto = 0,
	LOD0 = 1,
	LOD1 = 2,
	LOD2 = 3,
	LOD3 = 4,
	ECrowBuildingEditorLOD_MAX = 5,
};

enum class ECrowCustomizeEmotionRadialState : uint8_t {
	None = 0,
	Normal = 1,
	ReadyToEquip = 2,
	ECrowCustomizeEmotionRadialState_MAX = 3,
};

enum class EMatchingCancelReason : uint8_t {
	None = 0,
	ServerError = 1,
	ByUser = 2,
	Timeout = 3,
	DedicatedServerState = 4,
	DoesNotExistDedicatedServer = 5,
	EMatchingCancelReason_MAX = 6,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

enum class ELiveLinkCameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class EMobileShadowQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileShadowQuality_MAX = 4,
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

enum class EDrawPolygonOutputMode : uint8_t {
	MeshedPolygon = 0,
	ExtrudedConstant = 1,
	ExtrudedInteractive = 2,
	EDrawPolygonOutputMode_MAX = 3,
};

enum class EMagicLeapAutoPinType : uint8_t {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3,
};

enum class ECrowCharacterFootStepType : uint8_t {
	LeftFoot = 0,
	RightFoot = 1,
	Both = 2,
	ECrowCharacterFootStepType_MAX = 3,
};

enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
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

enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

enum class ECrowCustomizeCategoryType : uint8_t {
	OutFit = 0,
	Appearance = 1,
	ECrowCustomizeCategoryType_MAX = 2,
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

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class ECrowCharacterSlotAnimType : uint8_t {
	None = 0,
	FullBody = 1,
	UpperWithAimOffset = 2,
	UpperNonAimOffset = 3,
	TurnStandCrouch = 4,
	TurnProne = 5,
	TransitionStandCrouch = 6,
	TransitionProne = 7,
	ECrowCharacterSlotAnimType_MAX = 8,
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

enum class EMagicLeapHeadTrackingMode : uint8_t {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3,
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

enum class ECrowWeaponFireState : uint8_t {
	None = 0,
	WaitFire = 1,
	PreFire = 2,
	Fire = 3,
	PostFire = 4,
	ECrowWeaponFireState_MAX = 5,
};

enum class ECrowWorldEventActivationType : uint8_t {
	Random = 0,
	Sequence = 1,
	ECrowWorldEventActivationType_MAX = 2,
};

enum class ECrowCameraLimitMode : uint8_t {
	None = 0,
	FPOnly = 1,
	Both = 2,
	TPOnly = 3,
	ECrowCameraLimitMode_MAX = 4,
};

enum class ECrowCustomTeamType : uint8_t {
	Red = 0,
	Blue = 1,
	Misassign = 2,
	Watcher = 3,
	None = 4,
	ECrowCustomTeamType_MAX = 5,
};

enum class ECrowPlayerConstructionState : uint8_t {
	None = 0,
	FindBuildablePlace = 1,
	Build = 2,
	ECrowPlayerConstructionState_MAX = 3,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4,
};

enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
};

enum class ENiagaraSpriteAlignment : uint8_t {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3,
};

enum class ParticipantSpeakingUpdateRate : uint8_t {
	StateChange = 0,
	Never = 1,
	Update1Hz = 2,
	Update5Hz = 3,
	Update10Hz = 4,
	ParticipantSpeakingUpdateRate_MAX = 5,
};

enum class EDataSourceTypeEnum : uint8_t {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class EGroomInterpolationWeight : uint8_t {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class ENiagaraCollisionMode : uint8_t {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4,
};

enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
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

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class ECollisionGeometryMode : uint8_t {
	Default = 0,
	SimpleAndComplex = 1,
	UseSimpleAsComplex = 2,
	UseComplexAsSimple = 3,
	ECollisionGeometryMode_MAX = 4,
};

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
};

enum class EARGeoTrackingState : uint8_t {
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4,
};

enum class ECrowWorldLODGroup : uint8_t {
	Misc_LOD0 = 0,
	Misc_LOD1 = 1,
	Misc_LOD2 = 2,
	Misc_LOD3 = 3,
	Misc_SelfScreenSize = 4,
	Merge_Extra = 5,
	Merge_Crucial = 6,
	ECrowWorldLODGroup_MAX = 7,
};

enum class ECLSViewMode : uint8_t {
	None = 0,
	ThirdPerson = 1,
	FirstPerson = 2,
	ECLSViewMode_MAX = 3,
};

enum class ECrowCharacterHitDirection : uint8_t {
	None = 0,
	Forward = 1,
	Backward = 2,
	Left = 3,
	Right = 4,
	ECrowCharacterHitDirection_MAX = 5,
};

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class ECrowPostProcess : uint8_t {
	None = 0,
	ECrowPostProcess_MAX = 1,
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

enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};

enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

enum class ESourceBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

enum class EMagicLeapARPinType : uint8_t {
	SingleUserSingleSession = 0,
	SingleUserMultiSession = 1,
	MultiUserMultiSession = 2,
	EMagicLeapARPinType_MAX = 3,
};

enum class ECrowBuildingLODHideCondition : uint8_t {
	Instantly = 0,
	WaitForSyncHub = 1,
	ECrowBuildingLODHideCondition_MAX = 2,
};

enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

enum class EBakeScaleMethod : uint8_t {
	BakeFullScale = 0,
	BakeNonuniformScale = 1,
	DoNotBakeScale = 2,
	EBakeScaleMethod_MAX = 3,
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

enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class ESkyAtmosphereTransformMode : uint8_t {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3,
};

enum class ECrowCharacterGasMaskNotifyType : uint8_t {
	HoldInHand = 0,
	On = 1,
	Off = 2,
	PutInPocket = 3,
	ECrowCharacterGasMaskNotifyType_MAX = 4,
};

enum class ECrowEtcItemType : uint8_t {
	None = 0,
	ChangeNickName = 1,
	RandomBoxCard = 2,
	ClothSlotPass = 3,
	WeaponSlotPass = 4,
	WeaponLevelJumpItem = 5,
	ChangeClanName = 6,
	RoyalCrowPoint = 7,
	GPoint = 8,
	BattlePassItem = 9,
	BattlePassFreePassItem = 10,
	ECrowEtcItemType_MAX = 11,
};

enum class ECrowLoadoutBoxState : uint8_t {
	None = 0,
	Falling = 1,
	Landed = 2,
	ECrowLoadoutBoxState_MAX = 3,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
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

enum class EEnvQueryStatus : uint8_t {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
};

enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5,
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

enum class EWaterBrushBlendType : uint8_t {
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3,
};

enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
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

enum class ECrowLobbyNoticeType : uint8_t {
	None = 0,
	PartyInvitation = 1,
	CustomModeInvitation = 2,
	FriendRequest = 3,
	ECrowLobbyNoticeType_MAX = 4,
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

enum class ECrowCharacterAnimTurn : uint8_t {
	None = 0,
	InPlaceLeft = 1,
	InPlaceRight = 2,
	ECrowCharacterAnimTurn_MAX = 3,
};

enum class ECrowProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	ECrowProgressBarFillType_MAX = 2,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
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

enum class EMagicLeapLightEstimationCamera : uint8_t {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
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

enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t {
	NoFilter = 0,
	SimpleSmoothing = 1,
	PredictiveSmoothing = 2,
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3,
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

enum class ECrowWeaponFireMode : uint8_t {
	None = 0,
	Single = 1,
	Burst = 2,
	Normal = 3,
	ECrowWeaponFireMode_MAX = 4,
};

enum class ESyncOption : uint8_t {
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class ENiagaraLegacyTrailWidthMode : uint8_t {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ECLSWeaponAction : uint8_t {
	None = 0,
	Equip = 1,
	Unequip = 2,
	PreFire = 3,
	Fire = 4,
	PostFire = 5,
	Reload = 6,
	ReloadShort = 7,
	BoltAction = 8,
	ChangeFireMode = 9,
	ECLSWeaponAction_MAX = 10,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4,
};

enum class EBloomMethod : uint8_t {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2,
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

enum class EGooglePADCellularDataConfirmStatus : uint8_t {
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4,
};

enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

enum class ECrowMailPopupState : uint8_t {
	Personal = 0,
	Account = 1,
	ECrowMailPopupState_MAX = 2,
};

enum class ECrowMeteorEventState : uint8_t {
	None = 0,
	Wait = 1,
	FireWait = 2,
	Fire = 3,
	Landed = 4,
	MineralDestroyed = 5,
	ECrowMeteorEventState_MAX = 6,
};

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
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

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class ECLSMovementMode : uint8_t {
	None = 0,
	Grounded = 1,
	Falling = 2,
	Swimming = 3,
	Flying = 4,
	OnVehicle = 5,
	Death = 6,
	Ragdoll = 7,
	Vault = 8,
	Drowning = 9,
	Ladder = 10,
	ECLSMovementMode_MAX = 11,
};

enum class EConvertToPolygonsMode : uint8_t {
	FaceNormalDeviation = 0,
	FromUVISlands = 1,
	EConvertToPolygonsMode_MAX = 2,
};

enum class ERevolvePropertiesPolygroupMode : uint8_t {
	Single = 0,
	PerFace = 1,
	PerStep = 2,
	AccordingToProfileCurve = 3,
	ERevolvePropertiesPolygroupMode_MAX = 4,
};

enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
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

enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

enum class ECrowSpectatorType : uint8_t {
	Default = 0,
	CustomModeObserver = 1,
	ECrowSpectatorType_MAX = 2,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class EMaterialFunctionUsage : uint8_t {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class ENiagaraRibbonDrawDirection : uint8_t {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class EToolSide : uint8_t {
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3,
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

enum class EStereoDelayFiltertype : uint8_t {
	Lowpass = 0,
	Highpass = 1,
	Bandpass = 2,
	Notch = 3,
	Count = 4,
	EStereoDelayFiltertype_MAX = 5,
};

enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3,
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

enum class ECrowBuildingLODState : uint8_t {
	Normal = 0,
	RequestToHide = 1,
	ReadyToHide = 2,
	ECrowBuildingLODState_MAX = 3,
};

enum class EMapType : uint8_t {
	None = 0,
	WorldMap = 1,
	MiniMap = 2,
	RespawnMap = 3,
	EMapType_MAX = 4,
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

enum class EPatrolMovementType : uint8_t {
	Clockwise = 0,
	CounterClockwise = 1,
	EPatrolMovementType_MAX = 2,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
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

enum class SkeletalMeshTerminationCriterion : uint8_t {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6,
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

enum class EDynamicMeshTangentCalcType : uint8_t {
	NoTangents = 0,
	AutoCalculated = 1,
	ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType_MAX = 3,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class ECrowVoiceInputType : uint8_t {
	VoicInputType_None = 0,
	VoiceInputType_PressToSpeak = 1,
	VoiceInputType_Disable = 2,
	VoiceInputType_Alaways = 3,
	ECrowVoiceInputType_MAX = 4,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
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

enum class ETrackingConfidence : uint8_t {
	Low = 0,
	High = 1,
	ETrackingConfidence_MAX = 2,
};

enum class EVoiceSampleRate : uint8_t {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class EProjectedHullAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	SmallestBoxDimension = 3,
	SmallestVolume = 4,
	EProjectedHullAxis_MAX = 5,
};

enum class ECrowWorldEditorActorLOD : uint8_t {
	LOD0 = 0,
	LOD1 = 1,
	LOD2 = 2,
	LOD3 = 3,
	ECrowWorldEditorActorLOD_MAX = 4,
};

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4,
};

enum class ECrowLedgeTraceType : uint8_t {
	AllowAllSides = 0,
	AllowTwoSides = 1,
	AllowOneSides = 2,
	ECrowLedgeTraceType_MAX = 3,
};

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class ECrowMatchStartType : uint8_t {
	None = 0,
	PlayCameraWork = 1,
	Rejoin = 2,
	ECrowMatchStartType_MAX = 3,
};

enum class ECrowClothPartsFitType : uint8_t {
	Fit_Tight = 0,
	Fit_Loose = 1,
	Fit_Hide = 2,
	Fit_UnEquip = 3,
	Fit_MAX = 4,
};

enum class EAkCommSystem : uint8_t {
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2,
};

enum class EIndicatorType : uint8_t {
	E_Player = 0,
	E_Vehicle = 1,
	E_MAX = 2,
};

enum class ECrowItemSlotMiniWSType : uint8_t {
	Color = 0,
	ECrowItemSlotMiniWSType_MAX = 1,
};

enum class ECrowLevelSequenceResult : uint8_t {
	None = 0,
	Success = 1,
	Fail = 2,
	TimeOut = 3,
	ECrowLevelSequenceResult_MAX = 4,
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

enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4,
};

enum class ESpaceCurveControlPointOriginMode : uint8_t {
	Shared = 0,
	First = 1,
	Last = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3,
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

enum class ECrowFoliageAffectorAnimType : uint8_t {
	NoAnimation = 0,
	ByVelocity = 1,
	ByTime = 2,
	ECrowFoliageAffectorAnimType_MAX = 3,
};

enum class ECrowChatWidgetStatus : uint8_t {
	ChatTyping = 0,
	ChatMessageInfo = 1,
	ECrowChatWidgetStatus_MAX = 2,
};

enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

enum class EMoveState : uint8_t {
	None = 0,
	Move = 1,
	NotMove = 2,
	EMoveState_MAX = 3,
};

enum class EVehicleDamageParameterType : uint8_t {
	EnginePowerPercent = 0,
	InputFactor = 1,
	RotorYaw = 2,
	RotorPitch = 3,
	RotorRoll = 4,
	PrarameterTypeMax = 5,
	EVehicleDamageParameterType_MAX = 6,
};

enum class TransmissionMode : uint8_t {
	None = 0,
	Single = 1,
	All = 2,
	TransmissionMode_MAX = 3,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class EKeyInputType : uint8_t {
	None = 0,
	Ctrl_Button = 1,
	Esc_Button = 2,
	EKeyInputType_MAX = 3,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EStrandsTexturesMeshType : uint8_t {
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2,
};

enum class ESourceEffectFilterParam : uint8_t {
	FilterFrequency = 0,
	FilterResonance = 1,
	Count = 2,
	ESourceEffectFilterParam_MAX = 3,
};

enum class ECrowAIZoneState : uint8_t {
	Active = 0,
	Finished = 1,
	ECrowAIZoneState_MAX = 2,
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

enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
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

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EMirrorCtrlClickBehavior : uint8_t {
	Reposition = 0,
	RepositionAndReorient = 1,
	EMirrorCtrlClickBehavior_MAX = 2,
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

enum class EHairCardsSourceType : uint8_t {
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2,
};

enum class EClothMassMode : uint8_t {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4,
};

enum class EHairCardsGenerationType : uint8_t {
	CardsCount = 0,
	UseGuides = 1,
	EHairCardsGenerationType_MAX = 2,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3,
};

enum class EActorType : uint8_t {
	None = 0,
	Vehicle = 1,
	Water = 2,
	House = 3,
	EActorType_MAX = 4,
};

enum class ECrowCustomRoomState : uint8_t {
	None = 0,
	Ready = 1,
	Cancel = 2,
	Play = 3,
	ECrowCustomRoomState_MAX = 4,
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

enum class EBlueprintType : uint8_t {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6,
};

enum class ECrowWeaponKeyFlags : uint8_t {
	None = 0,
	Fire = 1,
	AimPrimary = 2,
	AimSecondary = 3,
	Light = 4,
	LaserSight = 5,
	AimThrowableMelee = 6,
	DefaultFlags = 7,
	SpecialFlags = 8,
	Aim = 9,
	ECrowWeaponKeyFlags_MAX = 10,
};

enum class EReverbSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3,
};

enum class ECrowAICharacterStance : uint8_t {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	ECrowAICharacterStance_MAX = 3,
};

enum class EToolContextCoordinateSystem : uint8_t {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class ECrowWinLose : uint8_t {
	Win = 0,
	Lose = 1,
	Draw = 2,
	Invalidity = 3,
	MAX = 4,
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

enum class ECrowGameState : uint8_t {
	None = 0,
	WaitUser = 1,
	PlayCountdown = 2,
	Match = 3,
	Finish = 4,
	Replay = 5,
	ECrowGameState_MAX = 6,
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

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
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

enum class EMobileReflectionCompression : uint8_t {
	Default = 0,
	On = 1,
	Off = 2,
	EMobileReflectionCompression_MAX = 3,
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

enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EVectorVMBaseTypes : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4,
};

enum class ESquadHUDState : uint8_t {
	Play = 0,
	WatchMyTeam = 1,
	Summary = 2,
	WatchEnemyTeam = 3,
	Max = 4,
};

enum class EMarkAcquireType : uint8_t {
	Entry = 0,
	Bundle = 1,
	Expantion = 2,
	Max = 3,
};

enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4,
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

enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class ECrowCharacterFallType : uint8_t {
	Default = 0,
	Flail = 1,
	Parachute = 2,
	ECrowCharacterFallType_MAX = 3,
};

enum class EWeightMapTargetCommon : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8_t {
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class EClanJoinMenuState : uint8_t {
	ClanInfo = 0,
	ClanMarkChange = 1,
	JoinClanRank = 2,
	Max = 3,
};

enum class ECrowWeaponEventType : uint8_t {
	None = 0,
	LevelUp = 1,
	WeaponUnLock = 2,
	WeaponParsUnLock = 3,
	ECrowWeaponEventType_MAX = 4,
};

enum class EMovieSceneSequenceFlags : uint8_t {
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 3,
	EMovieSceneSequenceFlags_MAX = 4,
};

enum class EXRVisualType : uint8_t {
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2,
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

enum class ENDIExport_GPUAllocationMode : uint8_t {
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2,
};

enum class EUdpMessageFormat : uint8_t {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5,
};

enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3,
};

enum class ECrowMovementFlags : uint8_t {
	None = 0,
	Stand = 1,
	Crouch = 2,
	Prone = 3,
	Jump = 4,
	Stop = 5,
	Walk = 6,
	Run = 7,
	Sprint = 8,
	All = 9,
	ECrowMovementFlags_MAX = 10,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class ECrowConquestBattleState : uint8_t {
	None = 0,
	RedOnly = 1,
	BlueOnly = 2,
	RedStronger = 3,
	BlueStronger = 4,
	Same = 5,
	ECrowConquestBattleState_MAX = 6,
};

enum class ERemeshType : uint8_t {
	Standard = 0,
	FullPass = 1,
	NormalFlow = 2,
	ERemeshType_MAX = 3,
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

enum class ESynth1OscType : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6,
};

enum class EOcclusionCalculationUIMode : uint8_t {
	GeneralizedWindingNumber = 0,
	RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode_MAX = 2,
};

enum class ECrowCharacterAnimWeapon : uint8_t {
	Idle = 0,
	Equip = 1,
	UnEquip = 2,
	Reload = 3,
	PreFire = 4,
	Fire = 5,
	PostFire = 6,
	ChangeFire = 7,
	Aim = 8,
	ReloadShort = 9,
	BoltAction = 10,
	ECrowCharacterAnimWeapon_MAX = 11,
};

enum class ESettingPopupMessageType : uint8_t {
	ConfirmMessage = 0,
	HasModifiedSettings = 1,
	SettingDefault = 2,
	ApplyMessage = 3,
	ESettingPopupMessageType_MAX = 4,
};

enum class ERTPCValueType : uint8_t {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5,
};

enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class EFollicleMaskChannel : uint8_t {
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class ECrowPrivateWeaponAnimType : uint8_t {
	None = 0,
	L129A1 = 1,
	AEK973 = 2,
	L115A3 = 3,
	ECrowPrivateWeaponAnimType_MAX = 4,
};

enum class EUVOutput : uint8_t {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2,
};

enum class EDatasmithImportScene : uint8_t {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3,
};

enum class ESettingsSlotType : uint8_t {
	KeyBinding = 0,
	OnOff = 1,
	Slider = 2,
	Selection = 3,
	Dropdown = 4,
	CrossHair = 5,
	Button = 6,
	Invalid = 7,
	ESettingsSlotType_MAX = 8,
};

enum class EMakeMeshPivotLocation : uint8_t {
	Base = 0,
	Centered = 1,
	Top = 2,
	EMakeMeshPivotLocation_MAX = 3,
};

enum class ETimeStretchCurveMapping : uint8_t {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3,
};

enum class ECrowConquestSoundState : uint8_t {
	None = 0,
	CapturingMyTeam = 1,
	CapturingEnemy = 2,
	CaptureCompleteMyTeam = 3,
	CaptureCompleteEnemy = 4,
	ECrowConquestSoundState_MAX = 5,
};

enum class EBoneFilterActionOption : uint8_t {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3,
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

enum class ESettingKeySlotType : uint8_t {
	FirstKeySlot = 0,
	SecondKeySlot = 1,
	GamepadSlot = 2,
	MaxSlot = 3,
	UnknownSlot = 4,
	ESettingKeySlotType_MAX = 5,
};

enum class ECrowVehicleWeaponAxis : uint8_t {
	Yaw = 0,
	Pitch = 1,
	Roll = 2,
	ECrowVehicleWeaponAxis_MAX = 3,
};

enum class ECrowCharacterInputMode : uint8_t {
	None = 0,
	Block = 1,
	Skydiving = 2,
	Default = 3,
	FindConstructionSite = 4,
	Construction = 5,
	GameAndUI = 6,
	WorldMapUI = 7,
	OnlyUI = 8,
	RadialMenu = 9,
	OnVehicle = 10,
	DyingCharacter = 11,
	OnlyRotation = 12,
	InRespawnAirPlane = 13,
	OnlyTrigger = 14,
	Spectator = 15,
	BombMissionPlayCountdown = 16,
	FindBombKitTarget = 17,
	SquadMatchRespawn = 18,
	Emotion = 19,
	Replay = 20,
	Movie = 21,
	AnyKey = 22,
	ECrowCharacterInputMode_MAX = 23,
};

enum class EFriendSlotBTNType : uint8_t {
	PartyInvite = 0,
	CancelInvite = 1,
	JoinParty = 2,
	PlayWith = 3,
	RecentUserPartyInvite = 4,
	RecentUserCancelInvite = 5,
	RecentRequestFriend = 6,
	Kick = 7,
	PromotedUser = 8,
	SearchInviteParty = 9,
	SearchCancelInvite = 10,
	SearchRequestFriend = 11,
	FriendRequestAccept = 12,
	FriendRequestReject = 13,
	FriendCancelRequest = 14,
	SessionInvite = 15,
	EFriendSlotBTNType_MAX = 16,
};

enum class EItemOwnerType : uint8_t {
	OwnUser = 0,
	OwnClan = 1,
	EItemOwnerType_MAX = 2,
};

enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

enum class ECrowSquadPointRewardType : uint8_t {
	None = 0,
	ItemBox = 1,
	LoadoutBox = 2,
	Vehicle = 3,
	ECrowSquadPointRewardType_MAX = 4,
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

enum class ECrowAnimEndType : uint8_t {
	Completed = 0,
	Interrupted = 1,
	ECrowAnimEndType_MAX = 2,
};

enum class ECLSCommonAction : uint8_t {
	None = 0,
	Hit = 1,
	Death = 2,
	Burn = 3,
	Injured = 4,
	ECLSCommonAction_MAX = 5,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EHairInterpolationQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class ECrowAISpawnerState : uint8_t {
	Active = 0,
	Finished = 1,
	ECrowAISpawnerState_MAX = 2,
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

enum class ECrowSceneCaptureType : uint8_t {
	Bending = 0,
	Wind = 1,
	ECrowSceneCaptureType_MAX = 2,
};

enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class EAkDiffractionFlags : uint8_t {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 2,
	EAkDiffractionFlags_MAX = 3,
};

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class EARServicePermissionRequestResult : uint8_t {
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2,
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

enum class EGooglePADStorageMethod : uint8_t {
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4,
};

enum class TTSDestination : uint8_t {
	Default = 0,
	RemoteTransmission = 1,
	LocalPlayback = 2,
	RemoteTransmissionWithLocalPlayback = 3,
	QueuedRemoteTransmission = 4,
	QueuedLocalPlayback = 5,
	QueuedRemoteTransmissionWithLocalPlayback = 6,
	ScreenReader = 7,
	TTSDestination_MAX = 8,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

