// Created by BlueFire1337
// Updated 2021-12-18
// Generated 2022-01-23

#pragma once

enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
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
	VMI_MaterialCategoriesBHVR = 26,
	VMI_Max = 27,
	VMI_Unknown = 28,
	VMI_Max = 29,
};

enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	EMovieSceneBlendType_MAX = 4,
};

enum class EToolMessageLevel : uint8_t {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5,
};

enum class EGateType : uint8_t {
	VE_AndGate = 0,
	VE_TimerGate = 1,
	VE_MAX = 2,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class EInteractionAnimation : uint8_t {
	VE_None = 0,
	VE_Generator = 1,
	VE_PullDownLeft = 2,
	VE_PullDownRight = 3,
	VE_Hiding = 4,
	VE_SearchCloset = 5,
	VE_HealingOther = 6,
	VE_OpenEscape = 7,
	VE_StruggleFree = 8,
	VE_HealOther = 9,
	VE_HealSelf = 10,
	VE_PickedUp = 11,
	VE_Unused01 = 12,
	VE_Dropped = 13,
	VE_Unused02 = 14,
	VE_BeingHooked = 15,
	VE_Sabotage = 16,
	VE_ChargeBlink = 17,
	VE_ThrowFirecracker = 18,
	VE_WakeUpOther = 19,
	VE_RemoveReverseBearTrap = 20,
	VE_DeadHard = 21,
	VE_DestroyPortal = 22,
	VE_OniDash = 23,
	VE_PickUpAnniversaryCrown = 24,
	VE_InteractWithGlyph = 25,
	VE_OpenChest = 26,
	VE_MAX = 27,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3,
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

enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class ECamperDamageState : uint8_t {
	VE_Healthy = 0,
	VE_Injured = 1,
	VE_KO = 2,
	VE_Dead = 3,
	VE_MAX = 4,
};

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

enum class ESkinCacheDefaultBehavior : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2,
};

enum class EAkChannelConfigType : uint8_t {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3,
};

enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
};

enum class EEasingType : uint8_t {
	Linear = 0,
	SineIn = 1,
	SineOut = 2,
	SineInOut = 3,
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
	ElasticIn = 22,
	ElasticOut = 23,
	ElasticInOut = 24,
	BackIn = 25,
	BackOut = 26,
	BackInOut = 27,
	EEasingType_MAX = 28,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class ENiagaraCullReaction : uint8_t {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4,
};

enum class ELiveLinkSourceMode : uint8_t {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3,
};

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
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

enum class EEmblemQuality : uint8_t {
	None = 0,
	Bronze = 1,
	Silver = 2,
	Gold = 3,
	Iridescent = 4,
	Count = 5,
	EEmblemQuality_MAX = 6,
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

enum class EInteractionValidationState : uint8_t {
	None = 0,
	Predicted = 1,
	Authorized = 2,
	DeniedByRaceCondition = 3,
	DeniedByTimeout = 4,
	DeniedByError = 5,
	EInteractionValidationState_MAX = 6,
};

enum class EMaterialFunctionUsage : uint8_t {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3,
};

enum class EAnalogCursorDataType : uint8_t {
	MaxSpeedDefault = 0,
	MaxSpeedDefaultSlow = 1,
	MaxSpeedStickyDefault = 2,
	MaxSpeedStickySlow = 3,
	MaxSpeedStickyButtonMedium = 4,
	MaxSpeedStickyButtonLarge = 5,
	MaxSpeedDefaultBloodweb = 6,
	MaxSpeedStickyBloodweb = 7,
	CustomAcceleration = 8,
	DeadZone = 9,
	HandheldSpeedBoostFactor = 10,
	EAnalogCursorDataType_MAX = 11,
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

enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

enum class OutOfOrderEnum : uint8_t {
	Value1 = 0,
	Value2 = 1,
	Value3 = 2,
	OutOfOrderEnum_MAX = 3,
};

enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
};

enum class EParticleAllocationMode : uint8_t {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2,
};

enum class ECharmCategory : uint8_t {
	None = 0,
	Small = 1,
	Medium = 2,
	Big = 3,
	ECharmCategory_MAX = 4,
};

enum class EDirection : uint8_t {
	Up = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	UpLeft = 4,
	UpRight = 5,
	DownLeft = 6,
	DownRight = 7,
	EDirection_MAX = 8,
};

enum class ECharacterDifficulty : uint8_t {
	VE_Easy = 0,
	VE_Intermediate = 1,
	VE_Hard = 2,
	VE_MAX = 3,
};

enum class EReverseBearTrapUIState : uint8_t {
	Off = 0,
	Stage1 = 1,
	Stage2 = 2,
	EReverseBearTrapUIState_MAX = 3,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3,
};

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
	BSA_Max = 4,
};

enum class EBasementType : uint8_t {
	None = 0,
	Basic = 1,
	MainBuilding = 2,
	Shack = 3,
	Count = 4,
	EBasementType_MAX = 5,
};

enum class EInboxMessageTimeUnit : uint8_t {
	Days = 0,
	Hours = 1,
	Minutes = 2,
	EInboxMessageTimeUnit_MAX = 3,
};

enum class EPlayerGameplayEventType : uint8_t {
	VE_UnhookedOther = 0,
	VE_UntrappedOther = 1,
	VE_HealedOther = 2,
	VE_MAX = 3,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class EStoreBannerLocation : uint8_t {
	Primary = 0,
	Secondary = 1,
	EStoreBannerLocation_MAX = 2,
};

enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
	Chaos_Max = 6,
};

enum class EStoreTab : uint8_t {
	Featured = 0,
	Characters = 1,
	Currency = 2,
	ShrineOfSecrets = 3,
	TabCount = 4,
	EStoreTab_MAX = 5,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
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

enum class EMagicLeapPlaneQueryType : uint8_t {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2,
};

enum class EAIThrowProjectileModes : uint8_t {
	OneShot = 0,
	Continuous = 1,
	EAIThrowProjectileModes_MAX = 2,
};

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class ECDNPatchCompleteStatus : uint8_t {
	Success = 0,
	NotEnoughDiskSpace = 1,
	PatchInstallDownloadError = 2,
	PatchInstallFileConstructionFail = 3,
	PatchInstallMoveFileToInstallFail = 4,
	PatchInstallBuildVerifyFail = 5,
	PatchInstallApplicationClosing = 6,
	PatchInstallApplicationError = 7,
	PatchInstallUserCanceled = 8,
	PatchInstallPrerequisiteError = 9,
	PatchInstallInitializationError = 10,
	PatchInstallPathLengthExceeded = 11,
	PatchInstallOutOfDiskSpace = 12,
	PatchInstallUnknownError = 13,
	FailureToMountContent = 14,
	InstalledContentNotFound = 15,
	InvalidPendingContent = 16,
	CantFindContentToDownload = 17,
	NoPatchForCurrentPlatformAndVersion = 18,
	FailureToRetrieveContent = 19,
	CancelledByUser = 20,
	ECDNPatchCompleteStatus_MAX = 21,
};

enum class EContaminator : uint8_t {
	Zombie = 0,
	Killer = 1,
	Mori = 2,
	EContaminator_MAX = 3,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class ERewardItemType : uint8_t {
	None = 0,
	Currency = 1,
	Inventory = 2,
	ERewardItemType_MAX = 3,
};

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EAIGameState : uint8_t {
	VeryEarly = 0,
	Early = 1,
	Mid = 2,
	Late = 3,
	VeryLate = 4,
	Max = 5,
	EAIGameState_MAX = 6,
};

enum class EClaimableInboxMessageType : uint8_t {
	None = 0,
	Currency = 1,
	Inventory = 2,
	EClaimableInboxMessageType_MAX = 3,
};

enum class EOnboardingMenuState : uint8_t {
	Tutorial = 0,
	GameManual = 1,
	EOnboardingMenuState_MAX = 2,
};

enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
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

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};

enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
};

enum class EStoreUITag : uint8_t {
	None = 0,
	Sale = 1,
	New = 2,
	EStoreUITag_MAX = 3,
};

enum class ECamperGuidedAction : uint8_t {
	VE_None = 0,
	VE_PrepBeingKilled = 1,
	VE_BeingKilled = 2,
	VE_PrepGuidedAction = 3,
	VE_BeingHelpedOffHookFront = 4,
	VE_BeingHelpedOffHookBack = 5,
	VE_BeingPickedUp = 6,
	VE_BeingPutDown = 7,
	VE_BeingCarried = 8,
	VE_BeingPutOnHook = 9,
	VE_BeingHealed = 10,
	VE_BeingPulledFromCloset = 11,
	VE_BeingHelpedFromTrap = 12,
	VE_AttachReverseBearTrap = 13,
	VE_BeingMended = 14,
	VE_BeingInjectedWithSerum = 15,
	VE_MAX = 16,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
};

enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

enum class EOnboardingTutorialType : uint8_t {
	TutorialLevel = 0,
	BotMatchLevel = 1,
	FinalReward = 2,
	EOnboardingTutorialType_MAX = 3,
};

enum class ERewardType : uint8_t {
	None = 0,
	Character = 1,
	Currency = 2,
	Customization = 3,
	Progression = 4,
	ERewardType_MAX = 5,
};

enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
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

enum class EAppleTextureType : uint8_t {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5,
};

enum class ESubscriptionClaimType : uint8_t {
	None = 0,
	Daily = 1,
	Renewal = 2,
	ESubscriptionClaimType_MAX = 3,
};

enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

enum class EGhostStealthState : uint8_t {
	AWAITING_ACTIVATION = 0,
	ACTIVATED = 1,
	COOLDOWN = 2,
	EGhostStealthState_MAX = 3,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class EMediaCaptureState : uint8_t {
	Error = 0,
	Capturing = 1,
	Preparing = 2,
	StopRequested = 3,
	Stopped = 4,
	EMediaCaptureState_MAX = 5,
};

enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

enum class ECustomMovementMode : uint8_t {
	CUSTOM_MOVE_None = 0,
	CUSTOM_MOVE_Snapping = 1,
	CUSTOM_MOVE_MAX = 2,
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

enum class EEscapeType : uint8_t {
	Escape_ExitGate = 0,
	Escape_Hatch = 1,
	Escape_KillerDisconnect = 2,
	Escape_MAX = 3,
};

enum class ELightingDetailMode : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	ELightingDetailMode_MAX = 3,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class ECurrencyType : uint8_t {
	None = 0,
	BloodPoints = 1,
	FearTokens = 2,
	Cells = 3,
	HalloweenCoins = 4,
	LunarNewYearCoins = 5,
	HalloweenEventCurrency = 6,
	ECurrencyType_MAX = 7,
};

enum class EAIObjectiveState : uint8_t {
	Early = 0,
	Mid = 1,
	Last = 2,
	Completed = 3,
	EAIObjectiveState_MAX = 4,
};

enum class EK25TeleportLocationStatus : uint8_t {
	Invalid = 0,
	PassableLocation = 1,
	PerfectLocation = 2,
	EK25TeleportLocationStatus_MAX = 3,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EInertializationBoneState : uint8_t {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class EFastArraySerializerDeltaFlags : uint8_t {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
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

enum class EAnalogCursorStickiness : uint8_t {
	None = 0,
	ButtonSmall = 1,
	ButtonMedium = 2,
	ButtonLarge = 3,
	Bloodweb = 4,
	Slow = 5,
	EAnalogCursorStickiness_MAX = 6,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class ENiagaraRibbonFacingMode : uint8_t {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3,
};

enum class EscapeStrategyType : uint8_t {
	EscapeDoor = 0,
	EscapeHatch = 1,
	EscapeStrategyType_MAX = 2,
};

enum class ERefundSource : uint8_t {
	None = 0,
	BloodMarket = 1,
	DailyCalendar = 2,
	PromoPack = 3,
	Count = 4,
	ERefundSource_MAX = 5,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
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

enum class EWallGrabState : uint8_t {
	None = 0,
	Charging = 1,
	Charged = 2,
	NonLethalCharge = 3,
	Adjusting = 4,
	Holding = 5,
	LethalCharge = 6,
	Cooldown = 7,
	Sliding = 8,
	Attacking = 9,
	EWallGrabState_MAX = 10,
};

enum class ETallyListPageID : uint8_t {
	Scoreboard = 0,
	Bloodpoints = 1,
	Rank = 2,
	PlayerLevel = 3,
	CharacterLevel = 4,
	NumberOfPages = 5,
	ETallyListPageID_MAX = 6,
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
	EARObjectClassification_MAX = 12,
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

enum class EAlignObjectsAlignToOptions : uint8_t {
	FirstSelected = 0,
	LastSelected = 1,
	Combined = 2,
	EAlignObjectsAlignToOptions_MAX = 3,
};

enum class ESecondaryActionRequestTypes : uint8_t {
	None = 0,
	SecondaryActionRequested = 1,
	SecondaryActionRequestedFromCancel = 2,
	ESecondaryActionRequestTypes_MAX = 3,
};

enum class EThemeColorId : uint8_t {
	Invalid = 0,
	Blue = 1,
	Green = 2,
	Yellow = 3,
	EThemeColorId_MAX = 4,
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
	MATUSAGE_MAX = 17,
};

enum class ETeleportType : uint8_t {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3,
};

enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

enum class EImposeEffectTo : uint8_t {
	EventInstigator = 0,
	EventTarget = 1,
	AddonOwner = 2,
	AllSurvivors = 3,
	EImposeEffectTo_MAX = 4,
};

enum class EK25ChainCreationStrategy : uint8_t {
	Spline = 0,
	PassedPoints = 1,
	EK25ChainCreationStrategy_MAX = 2,
};

enum class EClaimType : uint8_t {
	Minute = 0,
	Hour = 1,
	Day = 2,
	Week = 3,
	Month = 4,
	Year = 5,
	EClaimType_MAX = 6,
};

enum class EQuadrant : uint8_t {
	BottomRight = 0,
	BottomLeft = 1,
	TopLeft = 2,
	TopRight = 3,
	Count = 4,
	EQuadrant_MAX = 5,
};

enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

enum class EEnergyTypeEnum : uint8_t {
	EInvalid = 0,
	EBattery = 1,
	EHealth = 2,
	EEnergyTypeEnum_MAX = 3,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
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

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

enum class EAIHideInLockerState : uint8_t {
	WalkToLocker = 0,
	GetIntoLocker = 1,
	HidingInLocker = 2,
	EAIHideInLockerState_MAX = 3,
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

enum class PurchaseType : uint8_t {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3,
};

enum class ELobbyWaitStopReason : uint8_t {
	StartMatchWait = 0,
	PlayerCancelled = 1,
	Unknown = 2,
	ELobbyWaitStopReason_MAX = 3,
};

enum class ENiagaraDefaultMode : uint8_t {
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EPartyPostMatchmakingRole : uint8_t {
	None = 0,
	Client = 1,
	Host = 2,
	EPartyPostMatchmakingRole_MAX = 3,
};

enum class ETextureMipLoadOptions : uint8_t {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3,
};

enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

enum class EMakeMeshShapeType : uint8_t {
	None = 0,
	All = 1,
	Box = 2,
	Cylinder = 3,
	Cone = 4,
	Arrow = 5,
	Rectangle = 6,
	RoundedRectangle = 7,
	Disc = 8,
	PuncturedDisc = 9,
	Torus = 10,
	SphericalBox = 11,
	Sphere = 12,
	EMakeMeshShapeType_MAX = 13,
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

enum class EEndGameReason : uint8_t {
	None = 0,
	Normal = 1,
	KillerLeft = 2,
	PlayerLeftDuringLoading = 3,
	KillerLeftEarly = 4,
	InvalidPlayerRoles = 5,
	LoadingTimeout = 6,
	EEndGameReason_MAX = 7,
};

enum class ELoadoutSlot : uint8_t {
	SKIN = 0,
	ITEM_POWER = 1,
	ADD_ON_2 = 2,
	ADD_ON_3 = 3,
	PERK_2 = 4,
	PERK_3 = 5,
	PERK_4 = 6,
	PERK_5 = 7,
	FAVOR = 8,
	ELoadoutSlot_MAX = 9,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
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

enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

enum class ETestBuildType : uint8_t {
	None = 0,
	PublicTestBuild = 1,
	PaxBuild = 2,
	ConsolePreAlphaBuild = 3,
	ETestBuildType_MAX = 4,
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

enum class EZombieGender : uint8_t {
	Male = 0,
	Female = 1,
	EZombieGender_MAX = 2,
};

enum class EInertializationSpace : uint8_t {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3,
};

enum class EQuitGameReason : uint8_t {
	None = 0,
	Logout = 1,
	Suspend = 2,
	Shutdown = 3,
	Count = 4,
	EQuitGameReason_MAX = 5,
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

enum class EVirtualKeyboardType : uint8_t {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6,
};

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class EReflectionsType : uint8_t {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2,
};

enum class EPriorityAttenuationMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class AkActionOnEventType : uint8_t {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5,
};

enum class EPerkInteractionObjectType : uint8_t {
	Item = 0,
	ChestClosed = 1,
	ChestOpen = 2,
	EPerkInteractionObjectType_MAX = 3,
};

enum class ECatalogStatus : uint8_t {
	NotReady = 0,
	Updating = 1,
	Fetched = 2,
	ECatalogStatus_MAX = 3,
};

enum class EOfferingCombinationResult : uint8_t {
	None = 0,
	Stacked = 1,
	CoConsummed = 2,
	Overruling = 3,
	Cancelled = 4,
	EOfferingCombinationResult_MAX = 5,
};

enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2,
};

enum class EFrenzyEndReason : uint8_t {
	OutOfTime = 0,
	Manual = 1,
	PickUpCamper = 2,
	Stunned = 3,
	Mori = 4,
	Blinded = 5,
	EFrenzyEndReason_MAX = 6,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class EMagicLeapMeshLOD : uint8_t {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class ELightUnits : uint8_t {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3,
};

enum class EArchiveStoryType : uint8_t {
	NotSet = 0,
	CurrentStory = 1,
	PastStory = 2,
	EventStory = 3,
	EArchiveStoryType_MAX = 4,
};

enum class ESharedAuthenticationTokenType : uint8_t {
	None = 0,
	AccessToken = 1,
	AuthorizationCode = 2,
	IdentityToken = 3,
	ESharedAuthenticationTokenType_MAX = 4,
};

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class EAllowedPlayerType : uint8_t {
	All = 0,
	KillerOnly = 1,
	SurvivorOnly = 2,
	EAllowedPlayerType_MAX = 3,
};

enum class ETheMettleOfManPhase : uint8_t {
	Uninitialized = 0,
	GainingTokens = 1,
	CancelNextAttack = 2,
	RevealWhenHealthy = 3,
	RevealedToKiller = 4,
	ETheMettleOfManPhase_MAX = 5,
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
	inputdata_32bit = 77,
	inputdata_noadvance_32bit = 78,
	outputdata_32bit = 79,
	acquireindex = 80,
	external_func_call = 81,
	exec_index = 82,
	noise2D = 83,
	noise3D = 84,
	enter_stat_scope = 85,
	exit_stat_scope = 86,
	update_id = 87,
	acquire_id = 88,
	NumOpcodes = 89,
	EVectorVMOp_MAX = 90,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

enum class EPartyPostMatchmakingState : uint8_t {
	None = 0,
	InProgress = 1,
	Completed = 2,
	Error = 3,
	EPartyPostMatchmakingState_MAX = 4,
};

enum class EZombieState : uint8_t {
	InPool = 0,
	Spawn = 1,
	Patrolling = 2,
	Searching = 3,
	Chase = 4,
	Attack = 5,
	Dying = 6,
	Dead = 7,
	ChaseSearching = 8,
	InPlaceIdle = 9,
	Stunned = 10,
	FallSmash = 11,
	AttackCooldown = 12,
	Stop = 13,
	EZombieState_MAX = 14,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
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

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

enum class ELoadProgress : uint8_t {
	NotStarted = 0,
	Init = 1,
	ArtificialDelay = 2,
	DisconnectingPresencePlugin = 3,
	ValidateOnlineSubsystem = 4,
	CheckingPlatformService = 5,
	PreMirrorsLogin = 6,
	ConnectingToMirrors = 7,
	StartEAC = 8,
	LoadingAuthInfo = 9,
	LoadingBackendConfigs = 10,
	SetupRichPresence = 11,
	LoadingBackendTunables = 12,
	ApplyingCDNPatch = 13,
	AquiringExternalAuthentication = 14,
	LoadingPlayerIndependentShopData = 15,
	LicenseCache = 16,
	LoadingEvents = 17,
	LoadingInventory = 18,
	SyncingOwnedCharacters = 19,
	LoadingProfile = 20,
	LoadingMirrorCurrencies = 21,
	LoadingWallet = 22,
	LoadingConsent = 23,
	LoadingGameConfigs = 24,
	LoadingCharacterXPTables = 25,
	CheckingPendingTransactions = 26,
	LoadingContentSchedule = 27,
	LoadingNews = 28,
	SendingAnalytics = 29,
	ValidateData = 30,
	ValidatingClientVersion = 31,
	CheckingNeedForCurrencyMigration = 32,
	MigratingCurrenciesToMirror = 33,
	SyncingFriendsList = 34,
	Complete = 35,
	Locating = 36,
	InitializingRTMConnection = 37,
	LoadingStreamVideoData = 38,
	CollectingFreeCatalogItems = 39,
	DownloadDynamicContent = 40,
	CheckingMobilePendingTransactions = 41,
	LoadMarketingBanners = 42,
	LoadingSubscriptionStatus = 43,
	RequestingTrackingAuthorization = 44,
	ELoadProgress_MAX = 45,
};

enum class EInteractionTargetInSightModes : uint8_t {
	None = 0,
	MustBeInSight = 1,
	MustBeInSight_NoObstruction = 2,
	ActivateIfOutOfSight = 3,
	EInteractionTargetInSightModes_MAX = 4,
};

enum class EVoiceSampleRate : uint8_t {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2,
};

enum class ECharacterStance : uint8_t {
	VE_Stand = 0,
	VE_Crouch = 1,
	VE_Crawl = 2,
	VE_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
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

enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
};

enum class EPlayerStatusBloodSplatterType : uint8_t {
	None = 0,
	Top = 1,
	Bottom = 2,
	EPlayerStatusBloodSplatterType_MAX = 3,
};

enum class EEventsType : uint8_t {
	Generic = 0,
	Calendar = 1,
	BonusACEvent = 2,
	FirstPremiumPurchase = 3,
	MonthlyPass = 4,
	Count = 5,
	EEventsType_MAX = 6,
};

enum class EGameFlowStep : uint8_t {
	None = 0,
	InGame = 1,
	OfflineLobby = 2,
	OfflineTally = 3,
	OnlineLobby = 4,
	SplashScreen = 5,
	PartyLobby = 6,
	Store = 7,
	RoleSelection = 8,
	EGameFlowStep_MAX = 9,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class EHookType : uint8_t {
	Hook = 0,
	DeathBed = 1,
	None = 2,
	EHookType_MAX = 3,
};

enum class EParticleDetailMode : uint8_t {
	PDM_Lowest = 0,
	PDM_Lower = 1,
	PDM_Low = 2,
	PDM_Medium = 3,
	PDM_High = 4,
	PDM_Higher = 5,
	PDM_MAX = 6,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class EAkDiffractionFlags : uint8_t {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 2,
	EAkDiffractionFlags_MAX = 3,
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

enum class EInputSwitcherDisplayRule : uint8_t {
	Undefined = 0,
	OnlyGamepad = 1,
	OnlyKeyboard = 2,
	Always = 3,
	EInputSwitcherDisplayRule_MAX = 4,
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

enum class EToolSide : uint8_t {
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3,
};

enum class EKillerSoundComparisonType : uint8_t {
	Equal = 0,
	IsGreaterThan = 1,
	IsLesserThan = 2,
	EKillerSoundComparisonType_MAX = 3,
};

enum class EPumpkinType : uint8_t {
	None = 0,
	Trick = 1,
	Treat = 2,
	Neutral = 3,
	EPumpkinType_MAX = 4,
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

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EAlphaChannelMode : uint8_t {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3,
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

enum class EAudioRecordingExportType : uint8_t {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2,
};

enum class ESelectedObjectsModificationType : uint8_t {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class ETransformMeshesSnapDragRotationMode : uint8_t {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4,
};

enum class ELeaveLobbyReason : uint8_t {
	eNone = 0,
	eNetworkDisconnect = 1,
	eProfileOffline = 2,
	eAppSuspended = 3,
	eInternetDisconnect = 4,
	eHostDisconnect = 5,
	eDLCInstalled = 6,
	eTrialExtensionExpired = 7,
	ePartyManagementError = 8,
	ELeaveLobbyReason_MAX = 9,
};

enum class EAtlantaSettingMenuType : uint8_t {
	TabButton = 0,
	AlwaysDisplay = 1,
	EAtlantaSettingMenuType_MAX = 2,
};

enum class EFPVTransitionStrategy : uint8_t {
	TurnInvisible = 0,
	SquishTorsoBackward = 1,
	EFPVTransitionStrategy_MAX = 2,
};

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

enum class EAINodeRelevancyOptions : uint8_t {
	OnEnter = 0,
	OnExit = 1,
	OnEnterAndExit = 2,
	OnTick = 3,
	EAINodeRelevancyOptions_MAX = 4,
};

enum class CloudStatus : uint8_t {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2,
};

enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
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

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
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

enum class EMeshFeatureImportance : uint8_t {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6,
};

enum class ENiagaraScriptGroup : uint8_t {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3,
	ENiagaraScriptGroup_MAX = 4,
};

enum class ECameraFocusMethod : uint8_t {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4,
};

enum class EDisplaceMeshToolDisplaceType : uint8_t {
	Constant = 0,
	RandomNoise = 1,
	PerlinNoise = 2,
	DisplacementMap = 3,
	SineWave = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class EInboxMessageUIType : uint8_t {
	None = 0,
	Social = 1,
	Rewards = 2,
	News = 3,
	EInboxMessageUIType_MAX = 4,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class EBlinkerState : uint8_t {
	VE_Ready = 0,
	VE_ChainBlink = 1,
	VE_AttackBlink = 2,
	VE_CooldownRequested = 3,
	VE_Cooldown = 4,
	VE_MAX = 5,
};

enum class SimpleEnum : uint8_t {
	Value1 = 0,
	Value2 = 1,
	Value3 = 2,
	SimpleEnum_MAX = 3,
};

enum class EUdpMessageFormat : uint8_t {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5,
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

enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4,
};

enum class EQuickTransformerMode : uint8_t {
	AxisTranslation = 0,
	AxisRotation = 1,
	EQuickTransformerMode_MAX = 2,
};

enum class ESightStatus : uint8_t {
	OutOfSight = 0,
	Discerned = 1,
	Sighted = 2,
	ESightStatus_MAX = 3,
};

enum class EKillerResult : uint8_t {
	DisgracefulDefeat = 0,
	EntityDispleased = 1,
	BrutalKiller = 2,
	RuthlessKiller = 3,
	MercilessKiller = 4,
	EKillerResult_MAX = 5,
};

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EActionButtonState : uint8_t {
	Normal = 0,
	Toggled = 1,
	Disabled = 2,
	Hidden = 3,
	EActionButtonState_MAX = 4,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class EStoryNodeState : uint8_t {
	None = 0,
	Unavailable = 1,
	AvailableDefault = 2,
	AvailableActive = 3,
	AvailablePaused = 4,
	Completed = 5,
	Claimed = 6,
	EStoryNodeState_MAX = 7,
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

enum class EReverbSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3,
};

enum class EReflectionFilterBits : uint8_t {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class EMobileCSMQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileCSMQuality_MAX = 4,
};

enum class EOwnershipBehaviour : uint8_t {
	Personal = 0,
	Shared = 1,
	EOwnershipBehaviour_MAX = 2,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
};

enum class EAttackType : uint8_t {
	VE_None = 0,
	VE_Slash = 1,
	VE_Pounce = 2,
	VE_Chainsaw = 3,
	VE_Blink = 4,
	VE_LFChainsaw = 5,
	VE_Ambush = 6,
	VE_Frenzy = 7,
	VE_GhostCrouch = 8,
	VE_QatarDash = 9,
	VE_OniBasicAttack = 10,
	VE_OniDemonBasicAttack = 11,
	VE_OniDemonPowerAttack = 12,
	VE_OniDemonDashAttack = 13,
	VE_ExecutionerTormentAttack = 14,
	VE_BlightDash = 15,
	VE_TwinJump = 16,
	VE_K24WhipAttack = 17,
	VE_MAX = 18,
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

enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

enum class EDBDScoreCategory : uint8_t {
	DBD_CamperScoreCat_Objectives = 0,
	DBD_CamperScoreCat_Survival = 1,
	DBD_CamperScoreCat_Altruism = 2,
	DBD_CamperScoreCat_Boldness = 3,
	DBD_SlasherScoreCat_Brutality = 4,
	DBD_SlasherScoreCat_Deviousness = 5,
	DBD_SlasherScoreCat_Hunter = 6,
	DBD_SlasherScoreCat_Sacrifice = 7,
	DBD_CamperScoreCat_Untracked = 8,
	DBD_CamperScoreCat_Streak = 9,
	DBD_ScoreCat_SpecialEvents = 10,
	Count = 11,
	EDBDScoreCategory_MAX = 12,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EAIFleeLoopStrategy : uint8_t {
	LoseKiller = 0,
	WasteTime = 1,
	EAIFleeLoopStrategy_MAX = 2,
};

enum class ESocialRelationship : uint8_t {
	Any = 0,
	FriendInviteReceived = 1,
	FriendInviteSent = 2,
	PartyInvite = 3,
	Friend = 4,
	BlockedPlayer = 5,
	SuggestedFriend = 6,
	RecentPlayer = 7,
	ESocialRelationship_MAX = 8,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
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

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class EAtlantaControlTypeSetting : uint8_t {
	CameraFullScreen = 0,
	SnapOnJoystick = 1,
	EAtlantaControlTypeSetting_MAX = 2,
};

enum class EDiceRollType : uint8_t {
	VE_EscapeHook = 0,
	VE_EscapeTrap = 1,
	VE_TrapInflictsDying = 2,
	VE_TriggerSkillCheck = 3,
	VE_TriggerFootNoise = 4,
	VE_TriggerCrowAlert = 5,
	VE_MAX = 6,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class ETimeStretchCurveMapping : uint8_t {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3,
};

enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

enum class EHotfixResult : uint8_t {
	Failed = 0,
	Success = 1,
	SuccessNoChange = 2,
	SuccessNeedsReload = 3,
	SuccessNeedsRelaunch = 4,
	EHotfixResult_MAX = 5,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
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

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
};

enum class ELoadoutItemType : uint8_t {
	None = 0,
	Medkit = 1,
	Toolbox = 2,
	Flashlight = 3,
	Key = 4,
	Map = 5,
	Firecracker = 6,
	Flashbang = 7,
	Count = 8,
	ELoadoutItemType_MAX = 9,
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

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

enum class EModifierCompoundStrategy : uint8_t {
	Add = 0,
	AddPlusOne = 1,
	Min = 2,
	Max = 3,
	Mult = 4,
	MultWithCompoundNegative = 5,
	MultWithCompoundNegativeMinusOne = 6,
	EModifierCompoundStrategy_MAX = 7,
};

enum class EAIDangerState : uint8_t {
	Safe = 0,
	Unsafe = 1,
	Dire = 2,
	EAIDangerState_MAX = 3,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
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

enum class EMagicLeapHeadTrackingMode : uint8_t {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3,
};

enum class EItemDomain : uint8_t {
	Store = 0,
	Local = 1,
	Any = 2,
	EItemDomain_MAX = 3,
};

enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class EInventoryGridFormat : uint8_t {
	DEFAULT = 0,
	DIAMOND = 1,
	HONEYCOMB = 2,
	EInventoryGridFormat_MAX = 3,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
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

enum class EIsCamperStateOnFilter : uint8_t {
	OnBlackboardKey = 0,
	OnOthersThanSelf = 1,
	EIsCamperStateOnFilter_MAX = 2,
};

enum class ELocationZToSpawnEnum : uint8_t {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
	ChaosNiagara_Max = 5,
};

enum class EEmblemProgressionType : uint8_t {
	SurvivorLightbringerStartingValue = 0,
	SurvivorLightbringerGeneratorRepair = 1,
	SurvivorLightbringerTotemCleanse = 2,
	SurvivorLightbringerKillerDiversion = 3,
	SurvivorLightbringerExitGameOpen = 4,
	SurvivorUnbrokenTimeAlive = 5,
	SurvivorBenevolentStartingValue = 6,
	SurvivorBenevolentHealing = 7,
	SurvivorBenevolentHooked = 8,
	SurvivorBenevolentUnhook = 9,
	SurvivorBenevolentPerformUnhook = 10,
	SurvivorBenevolentSaveFromKiller = 11,
	SurvivorBenevolentUnsafeUnhook = 12,
	SurvivorBenevolentHitWhileCarrying = 13,
	SurvivorEvaderStartingValue = 14,
	SurvivorEvaderSneaking = 15,
	SurvivorEvaderChaseWon = 16,
	SurvivorEvaderChaseLost = 17,
	SurvivorEvaderPalletStun = 18,
	KillerGatekeeperStartingValue = 19,
	KillerGatekeeperGeneratorDefense = 20,
	KillerGatekeeperGatesClosed = 21,
	KillerDevoutStartingValue = 22,
	KillerDevoutSacrifice = 23,
	KillerDevoutDisconnect = 24,
	KillerDevoutMoris = 25,
	KillerDevoutAllSurvivorsHooked = 26,
	KillerDevoutHooksBonus = 27,
	KillerMaliciousStartingValue = 28,
	KillerMaliciousInjuries = 29,
	KillerMaliciousHookStages = 30,
	KillerMaliciousInjuriesHealed = 31,
	KillerMaliciousEscapeGrasp = 32,
	KillerMaliciousDisconnect = 33,
	KillerChaserStartingValue = 34,
	KillerChaserSurvivorFound = 35,
	KillerChaserSurvivorLost = 36,
	KillerChaserHit = 37,
	KillerChaserChaseWon = 38,
	KillerChaserProximityToHookPenalty = 39,
	Invalid = 40,
	EEmblemProgressionType_MAX = 41,
};

enum class EAtlantaFriendUIStatus : uint8_t {
	Undefined = 0,
	FriendSuggestion = 1,
	FriendRequestSent = 2,
	FriendRequestReceived = 3,
	Available = 4,
	InAMatch = 5,
	Offline = 6,
	AddFriendToSeeStatus = 7,
	EAtlantaFriendUIStatus_MAX = 8,
};

enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3,
};

enum class ELevelLoadingSteps : uint8_t {
	Invalid = 0,
	WaitingForPlayersToBeSpawned = 1,
	WaitingForAIPawnToBeSpawned = 2,
	WaitingForAssetPreloader = 3,
	WaitingForLoadoutAndTheme = 4,
	WaitingForPIAToBeSpawnedAndInitialized = 5,
	WaitingForNavmeshComputationToStart = 6,
	WaitingForNavmeshComputationToFinish = 7,
	SetGameLoadedAndReadyToPlay = 8,
	WaitingForIntroToBeDone = 9,
	LoadingCompleted = 10,
	ELevelLoadingSteps_MAX = 11,
};

enum class EAIPressureZoneLevel : uint8_t {
	LMin = 0,
	L01 = 1,
	L02 = 2,
	LMax = 3,
	EAIPressureZoneLevel_MAX = 4,
};

enum class EVectorVMOperandLocation : uint8_t {
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3,
};

enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
};

enum class EBitmapCSType : uint8_t {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class ENiagaraRibbonDrawDirection : uint8_t {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class EAfflictionLevel : uint8_t {
	Off = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	EAfflictionLevel_MAX = 4,
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

enum class EClaimResponseCodes : uint8_t {
	Claimed = 0,
	CalendarNotFound = 1,
	RewardNotAvailable = 2,
	RewardNotSupported = 3,
	EClaimResponseCodes_MAX = 4,
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

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6,
};

enum class EGFxRenderTextureMode : uint8_t {
	Opaque = 0,
	Alpha = 1,
	AlphaComposite = 2,
	EGFxRenderTextureMode_MAX = 3,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EQuadrantSpawnType : uint8_t {
	L_Shape = 0,
	Square = 1,
	Rect_X = 2,
	Rect_Y = 3,
	Rect = 4,
	None = 5,
	EQuadrantSpawnType_MAX = 6,
};

enum class ENormalCalculationMethod : uint8_t {
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3,
};

enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class EComparisonOperation : uint8_t {
	EqualTo = 0,
	NotEqualTo = 1,
	GreaterThan = 2,
	GreaterThanOrEqualTo = 3,
	LesserThan = 4,
	LesserThanOrEqualTo = 5,
	EComparisonOperation_MAX = 6,
};

enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
	Chaos_Max = 3,
};

enum class ESpecialEventDependency : uint8_t {
	None = 0,
	Archives = 1,
	ESpecialEventDependency_MAX = 2,
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

enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4,
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

enum class EMatchmakingState : uint8_t {
	None = 0,
	Searching = 1,
	MatchFound = 2,
	Error = 3,
	EMatchmakingState_MAX = 4,
};

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
};

enum class ERandomVelocityGenerationTypeEnum : uint8_t {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3,
	ChaosNiagara_Max = 4,
};

enum class ENiagaraModuleDependencyType : uint8_t {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EShopLoadProgress : uint8_t {
	None = 0,
	LoadCatalog = 1,
	LoadCurrencyPacks = 2,
	PlatformStoreCatalog = 3,
	Inventory = 4,
	Wallet = 5,
	FeaturedPageContent = 6,
	EShopLoadProgress_MAX = 7,
};

enum class EPlayerRole : uint8_t {
	VE_None = 0,
	VE_Slasher = 1,
	VE_Camper = 2,
	VE_Observer = 3,
	Max = 4,
	EPlayerRole_MAX = 5,
};

enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
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

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class EBloodOrbVisibilityMode : uint8_t {
	VisibleWithinRange = 0,
	HideAll = 1,
	EBloodOrbVisibilityMode_MAX = 2,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 3,
	Unknown = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5,
};

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
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

enum class EInputCaptureState : uint8_t {
	Begin = 0,
	Continue = 1,
	End = 2,
	Ignore = 3,
	EInputCaptureState_MAX = 4,
};

enum class ELoadCompleteState : uint8_t {
	InProgress = 0,
	Success = 1,
	ReloginRequested = 2,
	FailedEAC = 3,
	FailedRecoverable = 4,
	FailedRecoverableProfileLoad = 5,
	FailedUnequipedDisableditems = 6,
	FailedBlocking = 7,
	FailedBlockingNoDBDServer = 8,
	FailedBlockingNotConnected = 9,
	FailedBlockedNoNetworkConnection = 10,
	FailedBlockingSharedAuthenticationFailed = 11,
	FailedBlockingPlatformNotAuthenticated = 12,
	FailedBlockingPlatformSubsystemNotInitialized = 13,
	FailedBlockingOnlinePresenceNotInitialized = 14,
	FailedBlockingPlatformNetUniqueIdInvalid = 15,
	FailedBlockingInvalidLocalPlayer = 16,
	FailedBlockingInvalidGameObjects = 17,
	FailedBlockingInvalidSDA = 18,
	FailedBlockingInvalidClientVersion = 19,
	FailedBlockingInvalidAtlantaClientVersion = 20,
	FailedBlockingWindowsStoreAccountNotLoggedIn = 21,
	FailedBlockingSSLCACert = 22,
	FailedBlockingUserCancelled = 23,
	FailedBlockingCDNFailure = 24,
	FailedBlockingCDNContentError = 25,
	FailedBlockingCDNCantFindContentToDownload = 26,
	FailedBlockingCDNNoPatchForCurrentPlatformAndVersion = 27,
	FailedBlockingCDNNotEnoughDiskSpace = 28,
	FailedBlockingCDNFailureToRetrieveContent = 29,
	FailedRecoverableCDNUserCancelled = 30,
	FailedBlockingVersionFileError = 31,
	FailedBlockingRTMConnection = 32,
	FailedBlockingMaxTrialsReached = 33,
	FailedBlockingMirrorsHealthCheckFailed = 34,
	FailedBlockingTutorialRewardsFetchFailed = 35,
	ELoadCompleteState_MAX = 36,
};

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
};

enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	ESlateDebuggingFocusEvent_MAX = 3,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class EMaterialBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EMaterialBoundaryConstraint_MAX = 4,
};

enum class ESubtitlesPosition : uint8_t {
	HUD = 0,
	Menus = 1,
	Cinematics = 2,
	ESubtitlesPosition_MAX = 3,
};

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
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

enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};

enum class AkMultiPositionType : uint8_t {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3,
};

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class EPingQuality : uint8_t {
	Good = 0,
	Bad = 1,
	Awful = 2,
	EPingQuality_MAX = 3,
};

enum class AkAcousticPortalState : uint8_t {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2,
};

enum class ESkinCacheUsage : uint8_t {
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3,
};

enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4,
};

enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
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

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

enum class ENavLinkPlayerStates : uint8_t {
	RequestStart = 0,
	MoveStart = 1,
	Using = 2,
	MoveEnd = 3,
	Release = 4,
	ENavLinkPlayerStates_MAX = 5,
};

enum class EMobileMSAASampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	EMobileMSAASampleCount_MAX = 4,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

enum class EInteractionStorerRole : uint8_t {
	None = 0,
	AuthorityAndAutonomousProxy = 1,
	ClientAndAutonomousProxy = 2,
	AuthorityAndSimulatedProxy = 3,
	ClientAndSimulatedProxy = 4,
	EInteractionStorerRole_MAX = 5,
};

enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

enum class EPossessionState : uint8_t {
	NotPossessed = 0,
	BeingPossessed = 1,
	Possessed = 2,
	EPossessionState_MAX = 3,
};

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
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

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class ENiagaraSpriteFacingMode : uint8_t {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5,
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

enum class EMultiTransformerMode : uint8_t {
	DefaultGizmo = 0,
	QuickAxisTranslation = 1,
	EMultiTransformerMode_MAX = 2,
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

enum class EWorldFlowEvent : uint8_t {
	None = 0,
	GameLevelLoaded = 1,
	LoadingGameLevel = 2,
	LoadingOfflineParadise = 3,
	LoadingOnlineLobbyLevel = 4,
	OfflineLobbyMapLoaded = 5,
	OfflineParadiseLoaded = 6,
	OnlineLobbyMapLoaded = 7,
	StartScreenMapLoaded = 8,
	LoadingSplashScreen = 9,
	EWorldFlowEvent_MAX = 10,
};

enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

enum class EDataSourceTypeEnum : uint8_t {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3,
	ChaosNiagara_Max = 4,
};

enum class EMapActorCategory : uint8_t {
	None = 0,
	Objective = 1,
	Chest = 2,
	BlackLock = 3,
	KillerObject = 4,
	ExitGate = 5,
	EMapActorCategory_MAX = 6,
};

enum class ERequestState : uint8_t {
	VE_None = 0,
	VE_Pending = 1,
	VE_Success = 2,
	VE_Fail = 3,
	VE_MAX = 4,
};

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
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

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EMeshBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	EMeshBoundaryConstraint_MAX = 3,
};

enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3,
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

enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
};

enum class EAdditiveBehaviour : uint8_t {
	AddValues = 0,
	MaxValue = 1,
	EAdditiveBehaviour_MAX = 2,
};

enum class EK25ProjectileDeactivateReason : uint8_t {
	None = 0,
	WorldCollisionHit = 1,
	CharacterHit = 2,
	OutOfBounds = 3,
	MaximumRangeReached = 4,
	ChainStrikeInteractionEnded = 5,
	EK25ProjectileDeactivateReason_MAX = 6,
};

enum class EFlowTransitionType : uint8_t {
	Tally = 0,
	OnlineLobby = 1,
	PartyLobby = 2,
	OfflineLobby = 3,
	Splash = 4,
	RoleSelection = 5,
	None = 6,
	EFlowTransitionType_MAX = 7,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
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

enum class ENonlinearOperationType : uint8_t {
	Bend = 0,
	Flare = 1,
	Twist = 2,
	ENonlinearOperationType_MAX = 3,
};

enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class EHudParentContainerType : uint8_t {
	Widget = 0,
	Outer = 1,
	Spectate = 2,
	EHudParentContainerType_MAX = 3,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EPartyInviteRestriction : uint8_t {
	AnyMember = 0,
	LeaderOnly = 1,
	NoInvites = 2,
	EPartyInviteRestriction_MAX = 3,
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

enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5,
};

enum class ESkyAtmosphereTransformMode : uint8_t {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EVirtualizationMode : uint8_t {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class ETooltipType : uint8_t {
	None = 0,
	Character = 1,
	CurrencyProgression = 2,
	Customization = 3,
	ETooltipType_MAX = 4,
};

enum class EAttackZoneSet : uint8_t {
	VE_OriginalZones = 0,
	VE_WedgeZones = 1,
	VE_MAX = 2,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class EDemonModeState : uint8_t {
	Invalid = 0,
	NotInPower = 1,
	Activation = 2,
	InPower = 3,
	Cooldown = 4,
	EDemonModeState_MAX = 5,
};

enum class FNiagaraCompileEventSeverity : uint8_t {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};

enum class EObsessionUIState : uint8_t {
	Off = 0,
	Target = 1,
	Chased = 2,
	Dead = 3,
	EObsessionUIState_MAX = 4,
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
	TEXTUREGROUP_SkyboxReflections = 34,
	TEXTUREGROUP_LightFunctions = 35,
	TEXTUREGROUP_Foliage = 36,
	TEXTUREGROUP_FoliageNormalMap = 37,
	TEXTUREGROUP_FoliageORM = 38,
	TEXTUREGROUP_Tileable = 39,
	TEXTUREGROUP_TileableNormalMap = 40,
	TEXTUREGROUP_TileableCombinedMap = 41,
	TEXTUREGROUP_AtlasTrimSheet = 42,
	TEXTUREGROUP_AtlasTrimSheetNormalMap = 43,
	TEXTUREGROUP_AtlasTrimSheetCombinedMap = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_MAX = 49,
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

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class EEmblemEvaluation : uint8_t {
	Authority = 0,
	Local = 1,
	EEmblemEvaluation_MAX = 2,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
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

enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
};

enum class EK25ChainDetachmentReason : uint8_t {
	CollisionOrMaxLengthReached = 0,
	KillerAttack = 1,
	RemovedByInteraction = 2,
	MaxNumberChainsReached = 3,
	ForcedRemoved = 4,
	SurvivorKO = 5,
	EndGameCollapseOver = 6,
	SurvivorLeftTheMatch = 7,
	EK25ChainDetachmentReason_MAX = 8,
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

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class EDemogorgonPortalState : uint8_t {
	Hidden = 0,
	InUse = 1,
	Exposed = 2,
	EDemogorgonPortalState_MAX = 3,
};

enum class EAuthoritativeMovementFlag : uint8_t {
	INTERACTION = 0,
	SLASHED = 1,
	CHEAT = 2,
	DROPPED = 3,
	NOPUSH = 4,
	INTERACTIONNOPUSH = 5,
	DREAMWORLD_NOSLASHERCOLLISION = 6,
	COUNT = 7,
	EAuthoritativeMovementFlag_MAX = 8,
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

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

enum class EDynamicMeshSculptBrushType : uint8_t {
	Move = 0,
	Smooth = 1,
	Offset = 2,
	SculptView = 3,
	SculptMax = 4,
	Inflate = 5,
	Pinch = 6,
	Flatten = 7,
	Plane = 8,
	PlaneViewAligned = 9,
	FixedPlane = 10,
	Resample = 11,
	LastValue = 12,
	EDynamicMeshSculptBrushType_MAX = 13,
};

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
};

enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EBloodMarketRefreshMethod : uint8_t {
	Automatic = 0,
	Manual = 1,
	EBloodMarketRefreshMethod_MAX = 2,
};

enum class EInputCaptureRequestType : uint8_t {
	Begin = 0,
	Ignore = 1,
	EInputCaptureRequestType_MAX = 2,
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

enum class EInterpMoveAxis : uint8_t {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
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

enum class EK25ChainState : uint8_t {
	InPool = 0,
	AttachedToProjectile = 1,
	AttachedToSurvivorAnchorPoint = 2,
	ReelingBack = 3,
	ReachingSurvivorAnchorPoint = 4,
	EK25ChainState_MAX = 5,
};

enum class EPartyJoinDenialReason : uint8_t {
	NoReason = 0,
	JoinAttemptAborted = 1,
	Busy = 2,
	OssUnavailable = 3,
	PartyFull = 4,
	GameFull = 5,
	NotPartyLeader = 6,
	PartyPrivate = 7,
	JoinerCrossplayRestricted = 8,
	MemberCrossplayRestricted = 9,
	GameModeRestricted = 10,
	Banned = 11,
	NotLoggedIn = 12,
	CheckingForRejoin = 13,
	TargetUserMissingPresence = 14,
	TargetUserUnjoinable = 15,
	TargetUserAway = 16,
	AlreadyLeaderInPlatformSession = 17,
	TargetUserPlayingDifferentGame = 18,
	TargetUserMissingPlatformSession = 19,
	PlatformSessionMissingJoinInfo = 20,
	FailedToStartFindConsoleSession = 21,
	MissingPartyClassForTypeId = 22,
	TargetUserBlocked = 23,
	CustomReason0 = 24,
	CustomReason1 = 25,
	CustomReason2 = 26,
	CustomReason3 = 27,
	CustomReason4 = 28,
	CustomReason5 = 29,
	CustomReason6 = 30,
	CustomReason7 = 31,
	CustomReason8 = 32,
	CustomReason9 = 33,
	CustomReason10 = 34,
	CustomReason11 = 35,
	CustomReason12 = 36,
	CustomReason13 = 37,
	CustomReason14 = 38,
	CustomReason15 = 39,
	CustomReason16 = 40,
	CustomReason17 = 41,
	CustomReason18 = 42,
	CustomReason19 = 43,
	CustomReason20 = 44,
	CustomReason21 = 45,
	CustomReason22 = 46,
	CustomReason23 = 47,
	CustomReason24 = 48,
	CustomReason25 = 49,
	CustomReason26 = 50,
	CustomReason27 = 51,
	CustomReason28 = 52,
	CustomReason29 = 53,
	CustomReason30 = 54,
	CustomReason31 = 55,
	CustomReason32 = 56,
	CustomReason33 = 57,
	CustomReason34 = 58,
	CustomReason35 = 59,
	CustomReason36 = 60,
	CustomReason37 = 61,
	CustomReason38 = 62,
	CustomReason39 = 63,
	MAX = 64,
};

enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3,
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

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class ESleepingUIState : uint8_t {
	Off = 0,
	FallingAsleep = 1,
	Asleep = 2,
	ESleepingUIState_MAX = 3,
};

enum class ELocationYToSpawnEnum : uint8_t {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
	ChaosNiagara_Max = 5,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class ELiveLinkCameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
};

enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2,
};

enum class EShowScrollDisplayPrompt : uint8_t {
	DontShow = 0,
	AlwaysShow = 1,
	ShowOnMouseOver = 2,
	EShowScrollDisplayPrompt_MAX = 3,
};

enum class EMovementCurveType : uint8_t {
	AdditiveSpeedCurve = 0,
	MultiplicativeSpeedCurve = 1,
	EMovementCurveType_MAX = 2,
};

enum class EMediaCaptureCroppingType : uint8_t {
	None = 0,
	Center = 1,
	TopLeft = 2,
	Custom = 3,
	EMediaCaptureCroppingType_MAX = 4,
};

enum class EBloodwebNodeState : uint8_t {
	Inactive = 0,
	Available = 1,
	Locked_Do_Not_Use_Deprecated = 2,
	Collected = 3,
	Consumed = 4,
	Count = 5,
	EBloodwebNodeState_MAX = 6,
};

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class EMagicLeapAutoPinType : uint8_t {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3,
};

enum class ELocationFilteringModeEnum : uint8_t {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2,
	ChaosNiagara_Max = 3,
};

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
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

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
};

enum class EGroupTopologyDeformationStrategy : uint8_t {
	Linear = 0,
	Laplacian = 1,
	EGroupTopologyDeformationStrategy_MAX = 2,
};

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class ESubscriptionRewardType : uint8_t {
	None = 0,
	Item = 1,
	AddOn = 2,
	Offering = 3,
	FreeTicket = 4,
	AuricCells = 5,
	BloodPoints = 6,
	IridescentShards = 7,
	Customization = 8,
	Character = 9,
	ESubscriptionRewardType_MAX = 10,
};

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

enum class EFileMediaOutputPixelFormat : uint8_t {
	B8G8R8A8 = 0,
	FloatRGBA = 1,
	EFileMediaOutputPixelFormat_MAX = 2,
};

enum class ETrailPointRefreshReason : uint8_t {
	FrontNeighbourAdded = 0,
	BackNeighbourAdded = 1,
	BackNeighbourRemoved = 2,
	FrontNeighbourRemoved = 3,
	None = 4,
	ETrailPointRefreshReason_MAX = 5,
};

enum class EBackgroundProgressBarState : uint8_t {
	Empty = 0,
	Quarter = 1,
	Half = 2,
	ThreeQuarters = 3,
	Full = 4,
	EBackgroundProgressBarState_MAX = 5,
};

enum class ESocialChannelType : uint8_t {
	General = 0,
	Founder = 1,
	Party = 2,
	Team = 3,
	System = 4,
	Private = 5,
	ESocialChannelType_MAX = 6,
};

enum class EHatchStatus : uint8_t {
	Hidden = 0,
	Visible = 1,
	Open = 2,
	Closed = 3,
	ClosedOrHidden = 4,
	EHatchStatus_MAX = 5,
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

enum class ETextureRotationDirection : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	ETextureRotationDirection_MAX = 4,
};

enum class EFeaturedStoreContentType : uint8_t {
	None = 0,
	Character = 1,
	Customization = 2,
	Outfit = 3,
	Count = 4,
	EFeaturedStoreContentType_MAX = 5,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5,
};

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class EContextSection : uint8_t {
	None = 0,
	Hud = 1,
	MainMenu = 2,
	Lobby = 3,
	Store = 4,
	Tally = 5,
	Archive = 6,
	Credits = 7,
	Onboarding = 8,
	EContextSection_MAX = 9,
};

enum class EStackingBehaviours : uint8_t {
	Stackable = 0,
	Override = 1,
	EStackingBehaviours_MAX = 2,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EMagicLeapControllerType : uint8_t {
	None = 0,
	Device = 1,
	MobileApp = 2,
	EMagicLeapControllerType_MAX = 3,
};

enum class EK25ChainAttachmentLimbType : uint8_t {
	Hand = 0,
	Shoulder = 1,
	Stomach = 2,
	Back = 3,
	EK25ChainAttachmentLimbType_MAX = 4,
};

enum class EFocusLostReason : uint8_t {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2,
};

enum class EMagicLeapRaycastResultState : uint8_t {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4,
};

enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4,
};

enum class EAudioCustomizationCategory : uint8_t {
	AudioCharacterName = 0,
	AudioCharacterSubName = 1,
	AudioCharacterHead = 2,
	AudioCharacterClothes = 3,
	AudioCharacterShoes = 4,
	AudioCharacterWeapon = 5,
	AudioCharacterAmbiance = 6,
	AudioCharacterState = 7,
	EAudioCustomizationCategory_MAX = 8,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EBloodwebDistributionType : uint8_t {
	PerWeb = 0,
	PerRing = 1,
	EBloodwebDistributionType_MAX = 2,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class EDrawPolyPathWidthMode : uint8_t {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathWidthMode_MAX = 2,
};

enum class ECameraOffsetState : uint8_t {
	None = 0,
	Default = 1,
	Crouching = 2,
	Crawling = 3,
	Carried = 4,
	ECameraOffsetState_MAX = 5,
};

enum class EInventoryButtonState : uint8_t {
	StateDisabled = 0,
	StateEmpty = 1,
	StateLocked = 2,
	StateWithItem = 3,
	StateWithItemDisabled = 4,
	StateWithItemLocked = 5,
	StatePrivate = 6,
	EInventoryButtonState_MAX = 7,
};

enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

enum class EAIDodgeType : uint8_t {
	FORWARD_SIDE_STEP = 0,
	SIDE_STEP = 1,
	BACKWARD_SIDE_STEP = 2,
	EAIDodgeType_MAX = 3,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class EAtlantaRitualRewardUIType : uint8_t {
	Item = 0,
	AddOn = 1,
	Offering = 2,
	BloodPoints = 3,
	IridescentShards = 4,
	AuricCells = 5,
	Customization = 6,
	CustoTicket = 7,
	MysteryBox = 8,
	EAtlantaRitualRewardUIType_MAX = 9,
};

enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2,
};

enum class FK26AttachedCrowRemovalReason : uint8_t {
	Invalid = 0,
	LockerEnter = 1,
	SurvivorDamagedByCrow = 2,
	SurvivorDowned = 3,
	SurvivorPickedUp = 4,
	CrowFlashlighted = 5,
	RemoveInteraction = 6,
	FK26AttachedCrowRemovalReason_MAX = 7,
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

enum class ELamentConfigurationDropReason : uint8_t {
	SurvivorSolved = 0,
	SurvivorIsNoLongerHostage = 1,
	SurvivorDowned = 2,
	KillerCollect = 3,
	Other = 4,
	ELamentConfigurationDropReason_MAX = 5,
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

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ENiagaraPreviewGridResetMode : uint8_t {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
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

enum class EReflectionSourceType : uint8_t {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2,
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

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class EFindInteractorExitOptions : uint8_t {
	All = 0,
	HatchOnly = 1,
	GateOnly = 2,
	EFindInteractorExitOptions_MAX = 3,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class EPathType : uint8_t {
	None = 0,
	Straight = 1,
	DeadEnd = 2,
	Corner = 3,
	Crossroads = 4,
	TJunction = 5,
	OrientationOnly = 6,
	Unspecified = 7,
	OrientedCrossroads = 8,
	EPathType_MAX = 9,
};

enum class ESoftBanReason : uint8_t {
	Invalid = 0,
	Harassment = 1,
	Griefing = 2,
	Exploits = 3,
	Unsportsmanlike = 4,
	Count = 5,
	ESoftBanReason_MAX = 6,
};

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
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

enum class ENCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5,
};

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
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

enum class ETaskInputPressModes : uint8_t {
	Once = 0,
	Loop = 1,
	Hold = 2,
	ETaskInputPressModes_MAX = 3,
};

enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
};

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EMagicLeapHeadTrackingError : uint8_t {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4,
};

enum class EDataValidationResult : uint8_t {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3,
};

enum class EToastInputType : uint8_t {
	Toast_Accept = 0,
	Toast_Reject = 1,
	Toast_Close = 2,
	Toast_MAX = 3,
};

enum class ENewContentType : uint8_t {
	COMING_SOON = 0,
	NEW_CONTENT = 1,
	PATCH_NOTES = 2,
	DEV_MESSAGES = 3,
	EVENTS = 4,
	ENewContentType_MAX = 5,
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

enum class ETranslucencyType : uint8_t {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2,
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

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4,
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

enum class ELinkedVomitState : uint8_t {
	Idle = 0,
	Charging = 1,
	Vomiting = 2,
	ELinkedVomitState_MAX = 3,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class EPlayerStateChangeType : uint8_t {
	None = 0,
	Negative = 1,
	Neutral = 2,
	Positive = 3,
	EPlayerStateChangeType_MAX = 4,
};

enum class ENiagaraIterationSource : uint8_t {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2,
};

enum class EExtMoveToStrafeFocusOptions : uint8_t {
	Never = 0,
	NearFocus = 1,
	NearGoal = 2,
	Always = 3,
	Intermittent = 4,
	EExtMoveToStrafeFocusOptions_MAX = 5,
};

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class EMirrorsRequestLogLevel : uint8_t {
	None = 0,
	NetworkError = 1,
	HttpError = 2,
	All = 3,
	EMirrorsRequestLogLevel_MAX = 4,
};

enum class EClothingWindMethodNv : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
};

enum class EBoneFilterActionOption : uint8_t {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3,
};

enum class ENiagaraLegacyTrailWidthMode : uint8_t {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class EPowerProgressBar : uint8_t {
	NoProgressBar = 0,
	ChargeBar = 1,
	EPowerProgressBar_MAX = 2,
};

enum class EOnboardingStepStatus : uint8_t {
	Unavailable = 0,
	Open = 1,
	Completed = 2,
	EOnboardingStepStatus_MAX = 3,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EOcclusionCalculationUIMode : uint8_t {
	GeneralizedWindingNumber = 0,
	RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode_MAX = 2,
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

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class EMonoChannelUpmixMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class EK25ChainAnchorPointDirection : uint8_t {
	Front = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	EK25ChainAnchorPointDirection_MAX = 4,
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

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class EMagicLeapMeshVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4,
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

enum class EAtlantaRewardType : uint8_t {
	Item = 0,
	AddOn = 1,
	Offering = 2,
	BloodPoints = 3,
	IridescentShards = 4,
	AuricCells = 5,
	Customization = 6,
	FreeTicket = 7,
	MysteryBox = 8,
	Character = 9,
	DuplicatesRefundKey = 10,
	Count = 11,
	EAtlantaRewardType_MAX = 12,
};

enum class EPlayerDataType : uint8_t {
	None = 0,
	PlayerState = 1,
	SocialPartyMember = 2,
	EPlayerDataType_MAX = 3,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
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

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
};

enum class ENavigationScreenButton : uint8_t {
	AddCurrency = 0,
	Back = 1,
	Bloodweb = 2,
	ChangeRole = 3,
	CharacterSelection = 4,
	Customization = 5,
	InviteFriend = 6,
	Loadout = 7,
	Start = 8,
	Subscriptions = 9,
	EditCustomGame = 10,
	CustomGameRequestRole = 11,
	ENavigationScreenButton_MAX = 12,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
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

enum class ENDISkeletalMesh_SkinningMode : uint8_t {
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4,
};

enum class EOnboardingTutorialButtonStyle : uint8_t {
	Default = 0,
	Survivor = 1,
	Killer = 2,
	Reward = 3,
	EOnboardingTutorialButtonStyle_MAX = 4,
};

enum class EBitmapHeaderVersion : uint8_t {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EAtlantaDisplayStandPosition : uint8_t {
	Forefront = 0,
	Background = 1,
	EAtlantaDisplayStandPosition_MAX = 2,
};

enum class EToolChangeTrackingMode : uint8_t {
	NoChangeTracking = 0,
	UndoToExit = 1,
	FullUndoRedo = 2,
	EToolChangeTrackingMode_MAX = 3,
};

enum class ESceneSnapQueryType : uint8_t {
	Position = 0,
	ESceneSnapQueryType_MAX = 1,
};

enum class EAkWindowsAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3,
};

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 3,
	Webcam = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5,
};

enum class ELanternState : uint8_t {
	Collectable = 0,
	Collected = 1,
	Destroyed = 2,
	Destroyable = 3,
	ELanternState_MAX = 4,
};

enum class EBloodwebDataSource : uint8_t {
	ByLevel = 0,
	ByRing = 1,
	EBloodwebDataSource_MAX = 2,
};

enum class EMediaIOTimecodeFormat : uint8_t {
	None = 0,
	LTC = 1,
	VITC = 2,
	EMediaIOTimecodeFormat_MAX = 3,
};

enum class EOfferingSequenceState : uint8_t {
	SmokeIn = 0,
	FadeOut = 1,
	FadeIn = 2,
	NotInitialized = 3,
	Idle = 4,
	Init = 5,
	InitDone = 6,
	Reveal = 7,
	RevealDone = 8,
	ShowInteraction = 9,
	Finalize = 10,
	Done = 11,
	EOfferingSequenceState_MAX = 12,
};

enum class EDPIScaleCurveRatio : uint8_t {
	Default = 0,
	SmallerEqual4_4 = 1,
	Mobile = 2,
	EDPIScaleCurveRatio_MAX = 3,
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

enum class EStreamVideoDataType : uint8_t {
	None = 0,
	LoreCinematic = 1,
	SurvivorTutorial = 2,
	KillerTutorial = 3,
	Count = 4,
	EStreamVideoDataType_MAX = 5,
};

enum class GapEnum : uint8_t {
	Value1 = 0,
	Value2 = 1,
	Value3 = 2,
	GapEnum_MAX = 3,
};

enum class ECustomizationCategory : uint8_t {
	None = 0,
	SurvivorHead = 1,
	SurvivorTorso = 2,
	SurvivorLegs = 3,
	KillerHead = 4,
	KillerBody = 5,
	KillerWeapon = 6,
	Outfits = 7,
	Charm = 8,
	ECustomizationCategory_MAX = 9,
};

enum class EKillerHeight : uint8_t {
	Short = 0,
	Average = 1,
	Tall = 2,
	EKillerHeight_MAX = 3,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EPolyEditCutPlaneOrientation : uint8_t {
	FaceNormals = 0,
	ViewDirection = 1,
	EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class ENiagaraMeshLockedAxisSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class EAIFleePathStrategy : uint8_t {
	None = 0,
	KeepGoal = 1,
	Away = 2,
	Loop = 3,
	AwayLOS = 4,
	EAIFleePathStrategy_MAX = 5,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class ERadialProgressBarType : uint8_t {
	Yellow = 0,
	Red = 1,
	ERadialProgressBarType_MAX = 2,
};

enum class ESubtitlesSize : uint8_t {
	Small = 0,
	Default = 1,
	Large = 2,
	Huge = 3,
	ESubtitlesSize_MAX = 4,
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

enum class ENotificationStyle : uint8_t {
	None = 0,
	Game = 1,
	Tutorial = 2,
	ENotificationStyle_MAX = 3,
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

enum class EFriendSuggestionType : uint8_t {
	None = 0,
	Facebook = 1,
	Google = 2,
	EFriendSuggestionType_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EScreenShotBatching : uint8_t {
	SelectedItemOrOutfit = 0,
	SelectedCharacter = 1,
	SelectedCharacterAndCategory = 2,
	ItemsMissingIcon = 3,
	AllItems = 4,
	SelectedCharacterOutfits = 5,
	AllOutfits = 6,
	AllCharms = 7,
	EScreenShotBatching_MAX = 8,
};

enum class ECollectableCategory : uint8_t {
	Common = 0,
	Rare = 1,
	ECollectableCategory_MAX = 2,
};

enum class ECameraShakeAttenuation : uint8_t {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2,
};

enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4,
};

enum class EK26AmmoState : uint8_t {
	Available = 0,
	Expiring = 1,
	Recharging = 2,
	EK26AmmoState_MAX = 3,
};

enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class EMagicLeapControllerTrackingMode : uint8_t {
	InputService = 0,
	CoordinateFrameUID = 1,
	EMagicLeapControllerTrackingMode_MAX = 2,
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
	ELuminPrivilege_MAX = 38,
};

enum class ESplitNormalMethod : uint8_t {
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	ESplitNormalMethod_MAX = 3,
};

enum class EOfferingAnimState : uint8_t {
	None = 0,
	Idle = 1,
	Init = 2,
	Reveal = 3,
	ShowInteraction = 4,
	Burned = 5,
	Returned = 6,
	Cancel = 7,
	Hidden = 8,
	EOfferingAnimState_MAX = 9,
};

enum class EDetailModeBitMask : uint8_t {
	DMBM_PC = 0,
	DMBM_Console = 1,
	DMBM_Atlanta = 2,
	DMBM_Switch = 3,
	DMBM_MAX = 4,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2,
};

enum class EBakeScaleMethod : uint8_t {
	BakeFullScale = 0,
	BakeNonuniformScale = 1,
	DoNotBakeScale = 2,
	EBakeScaleMethod_MAX = 3,
};

enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

enum class ETutorialObjectivePlayerActionMapping : uint8_t {
	None = 0,
	Action_Camper = 1,
	Interact_Camper = 2,
	Interact_Slasher = 3,
	Run_Camper = 4,
	Attack_Slasher = 5,
	SecondaryAction_Camper = 6,
	ItemUse_Camper = 7,
	Crouch = 8,
	ItemDrop_Camper = 9,
	ItemUse_Slasher = 10,
	ItemDrop_Slasher = 11,
	Mash_Camper = 12,
	FastInteract_Camper = 13,
	SecondaryAction_Slasher = 14,
	Action_Slasher = 15,
	Struggle = 16,
	MoveAxes = 17,
	LookAxes = 18,
	Count = 19,
	ETutorialObjectivePlayerActionMapping_MAX = 20,
};

enum class EDBDCameraSocketID : uint8_t {
	VE_None = 0,
	VE_Default = 1,
	VE_Killcam = 2,
	VE_Reaction = 3,
	VE_Struggle = 4,
	VE_Sacrifice = 5,
	VE_MAX = 6,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EArchiveNodeStatus : uint8_t {
	Closed = 0,
	Completed = 1,
	Open = 2,
	Paused = 3,
	Waiting = 4,
	Error = 5,
	EArchiveNodeStatus_MAX = 6,
};

enum class EGFxAlign : uint8_t {
	Center = 0,
	TopCenter = 1,
	BottomCenter = 2,
	CenterLeft = 3,
	CenterRight = 4,
	TopLeft = 5,
	TopRight = 6,
	BottomLeft = 7,
	BottomRight = 8,
	EGFxAlign_MAX = 9,
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

enum class EFindInteractableMeatHookStatus : uint8_t {
	HookedSurvivor = 0,
	Available = 1,
	EFindInteractableMeatHookStatus_MAX = 2,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4,
};

enum class EPerkCategory : uint8_t {
	None = 0,
	Navigation = 1,
	Perception = 2,
	Safeguard = 3,
	Concealment = 4,
	Strategy = 5,
	Support = 6,
	Adaptation = 7,
	Chasing = 8,
	Tracking = 9,
	Cruelty = 10,
	Trickery = 11,
	Obstruction = 12,
	Hinderance = 13,
	Enhancement = 14,
	EPerkCategory_MAX = 15,
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

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EAirAbsorptionMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2,
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

enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

enum class EK26AmmoCooldownReason : uint8_t {
	Expired = 0,
	Fired = 1,
	EK26AmmoCooldownReason_MAX = 2,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class ELocationXToSpawnEnum : uint8_t {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
	ChaosNiagara_Max = 5,
};

enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
};

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
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

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class EMediaIOInputType : uint8_t {
	Fill = 0,
	FillAndKey = 1,
	EMediaIOInputType_MAX = 2,
};

enum class EMeshFacesColorMode : uint8_t {
	None = 0,
	ByGroup = 1,
	ByMaterialID = 2,
	ByUVIsland = 3,
	EMeshFacesColorMode_MAX = 4,
};

enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
};

enum class ENiagaraTickBehavior : uint8_t {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4,
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

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
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

enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
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

enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};

enum class EMainMenuButton : uint8_t {
	News = 0,
	PlaySurvivor = 1,
	PlayKiller = 2,
	KillYourFriends = 3,
	DailyRituals = 4,
	Store = 5,
	Settings = 6,
	Onboarding = 7,
	Credits = 8,
	QuitGame = 9,
	Friends = 10,
	Archives = 11,
	CrowdChoice = 12,
	Support = 13,
	PlaySurvivorFromCrowdChoice = 14,
	PlayKillerFromCrowdChoice = 15,
	EMainMenuButton_MAX = 16,
};

enum class EFFTSize : uint8_t {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5,
	EFFTSize_MAX = 6,
};

enum class EEscapeDoorActivationMode : uint8_t {
	Standard = 0,
	Tutorial = 1,
	EEscapeDoorActivationMode_MAX = 2,
};

enum class EItemHandPosition : uint8_t {
	None = 0,
	HandleItem = 1,
	AimItem = 2,
	SmallItem = 3,
	FirecrackerItem = 4,
	VaccineItem = 5,
	EItemHandPosition_MAX = 6,
};

enum class EOniAttackType : uint8_t {
	VE_NotDemonMode = 0,
	VE_DemonBasicAttack = 1,
	VE_DemonPowerAttack = 2,
	VE_DemonDashAttack = 3,
	VE_MAX = 4,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class EHelpType : uint8_t {
	General = 0,
	Survivor = 1,
	Killer = 2,
	EHelpType_MAX = 3,
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

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

enum class ESharedAuthenticationProvider : uint8_t {
	None = 0,
	Facebook = 1,
	Google = 2,
	NetEase = 3,
	Kraken = 4,
	SignInWithApple = 5,
	ESharedAuthenticationProvider_MAX = 6,
};

enum class EBloodwebRing : uint8_t {
	CenterRing = 0,
	InnerRing = 1,
	MiddleRing = 2,
	OuterRing = 3,
	EntityRing = 4,
	RingCount = 5,
	Count = 6,
	EBloodwebRing_MAX = 7,
};

enum class ESendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3,
};

enum class EButtonType : uint8_t {
	None = 0,
	AttackButton = 1,
	PowerButton = 2,
	CancelButton = 3,
	SettingsButton = 4,
	SecondaryActionButton = 5,
	PowerAttackJoystick = 6,
	EButtonType_MAX = 7,
};

enum class EEventItemContentType : uint8_t {
	None = 0,
	Cells = 1,
	Character = 2,
	Customization = 3,
	NameChangeCard = 4,
	FreeTicket = 5,
	OtherCurrency = 6,
	Item = 7,
	Addon = 8,
	Offering = 9,
	Count = 10,
	EEventItemContentType_MAX = 11,
};

enum class EAkAudioSessionCategory : uint8_t {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3,
};

enum class EGooglePADCellularDataConfirmStatus : uint8_t {
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4,
};

enum class EGFxTimingMode : uint8_t {
	Game = 0,
	Real = 1,
	EGFxTimingMode_MAX = 2,
};

enum class ETimerState : uint8_t {
	Cleared = 0,
	Started = 1,
	Paused = 2,
	ETimerState_MAX = 3,
};

enum class EPanningMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2,
};

enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
	Chaos_Max = 3,
};

enum class EChainHuntState : uint8_t {
	Inactive = 0,
	Charging = 1,
	Active = 2,
	EChainHuntState_MAX = 3,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
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

enum class EShadowSystem : uint8_t {
	CascadedShadowMap = 0,
	CacheWholeSceneStaticShadowMap = 1,
	AdaptiveShadowMap = 2,
	EShadowSystem_MAX = 3,
};

enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
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

enum class ENavigationState : uint8_t {
	RoleSelection = 0,
	Customization = 1,
	CharacterSelection = 2,
	Lobby = 3,
	BloodStore = 4,
	None = 5,
	ENavigationState_MAX = 6,
};

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
	WalkableSlope_Max = 5,
};

enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
};

enum class EDoctorAbilityType : uint8_t {
	VE_ShockTherapy = 0,
	VE_StaticBlast = 1,
	VE_None = 2,
	VE_MAX = 3,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class EPawnInputPressTypes : uint8_t {
	None = 0,
	FastInteract = 1,
	Interact = 2,
	Wiggle = 3,
	Struggle = 4,
	Slash = 5,
	Attack = 6,
	Action = 7,
	SecondaryAction = 8,
	UseItem = 9,
	DropItem = 10,
	Gesture01 = 11,
	Gesture02 = 12,
	Gesture03 = 13,
	Gesture04 = 14,
	EPawnInputPressTypes_MAX = 15,
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

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
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

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class ELuminFrameTimingHint : uint8_t {
	Unspecified = 0,
	Maximum = 1,
	FPS_61 = 2,
	FPS_121 = 3,
	ELuminFrameTimingHint_MAX = 4,
};

enum class EHitProxyPriority : uint8_t {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4,
};

enum class EKillerTutorialEndGameType : uint8_t {
	DeathByHook = 0,
	DeathByEndGameCollapse = 1,
	EKillerTutorialEndGameType_MAX = 2,
};

enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

enum class EPartyError : uint8_t {
	None = 0,
	CreatePartyFail = 1,
	CreatePartyFail_PlayerAlreadyInParty = 2,
	ConnectionToPartyManagementLost = 3,
	AcceptInvitationFail = 4,
	AcceptInvitationFail_InvitationExpired = 5,
	AcceptInvitationFail_PartyIsFull = 6,
	AcceptInvitationFail_PartyDoesNotExists = 7,
	AcceptInvitationFail_VersionMismatch = 8,
	AcceptInvitationFail_StreamingInstallationIncomplete = 9,
	AcceptInvitationFail_PartyAlreadyInMatchmaking = 10,
	AcceptInvitationFail_AllPartyMembersAreInMatch = 11,
	RejectInvitationFail = 12,
	RejectInvitationFail_PartyDoesNotExists = 13,
	InvitationFail = 14,
	InvitationFail_PartyDoesNotExists = 15,
	InvitationFail_PlayerAlreadyInParty = 16,
	InvitationFail_NotFriendsWithUser = 17,
	JoinRequestFail = 18,
	JoinRequestFail_PartyDoesNotExists = 19,
	JoinRequestFail_PlayerAlreadyInPartyOrPartyFull = 20,
	JoinRequestFail_BannedFromParty = 21,
	JoinRequestFail_FriendNotInParty = 22,
	JoinRequestFail_PartyIsPrivate = 23,
	JoinRequestAcceptedFail = 24,
	JoinRequestAcceptedFail_PartyDoesNotExists = 25,
	AcceptJoinRequestFail = 26,
	AcceptJoinRequestFail_RequestNotFound = 27,
	AcceptJoinRequestFail_PartyDoesNotExists = 28,
	RejectJoinRequestFail = 29,
	RejectJoinRequestFail_RequestNotFound = 30,
	RejectJoinRequestFail_PartyDoesNotExists = 31,
	CancelJoinRequestFail = 32,
	CancelJoinRequestFail_RequestNotFound = 33,
	RealTimeMessagingDisconnected = 34,
	FriendBlocked_UnableToJoinParty = 35,
	FriendBlocked_UnableToRemainInParty = 36,
	CancelInvitationFail = 37,
	CancelInvitationFail_PartyDoesNotExists = 38,
	SendPartyChatMessageFail = 39,
	SendPartyChatMessageFail_PartyDoesNotExists = 40,
	SendPartyChatMessageFail_MessageNotAllowed = 41,
	InvitationValidationError = 42,
	InvitationValidationError_StandardInviteFlowButActiveCrowdPlay = 43,
	InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay = 44,
	InvitationValidationError_PartyIsFull = 45,
	InvitationValidationError_PartyDoesNotExists = 46,
	InvitationValidationError_VersionMismatch = 47,
	InvitationValidationError_StreamingInstallationIncomplete = 48,
	InvitationValidationError_FriendBlocked = 49,
	InvitationValidationError_InsufficientPrivileges = 50,
	InvitationValidationError_PlayerBanned = 51,
	InvitationValidationError_LocalCrossplayIncompatibility = 52,
	InvitationValidationError_RemoteCrossplayIncompatibility = 53,
	InvitationValidationError_ListenServerCrossplayIncompatibility = 54,
	RemovePlayerFromPartyFail = 55,
	JoinFail_PlayerAlreadyInParty = 56,
	UnknownError = 57,
	EPartyError_MAX = 58,
};

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class EFriendUIRichPresence : uint8_t {
	Undefined = 0,
	InMenus = 1,
	InLobby = 2,
	InMatch = 3,
	Connected = 4,
	Closing = 5,
	EFriendUIRichPresence_MAX = 6,
};

enum class EAnimAlphaInputType : uint8_t {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3,
};

enum class EPawnType : uint8_t {
	VE_None = 0,
	VE_Killer = 1,
	VE_Survivor = 2,
	VE_Sidekick = 3,
	VE_MAX = 4,
};

enum class EAudioFaderCurve : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
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

enum class EFriendTypeButton : uint8_t {
	InvitePlayerToParty = 0,
	RemovePlayerFromParty = 1,
	EFriendTypeButton_MAX = 2,
};

enum class EInteractionComparisonPriority : uint8_t {
	Lower = 0,
	Equal = 1,
	Higher = 2,
	EInteractionComparisonPriority_MAX = 3,
};

enum class ESnowmanState : uint8_t {
	Idle = 0,
	BeingEntered = 1,
	Controlled = 2,
	Destroyed = 3,
	ESnowmanState_MAX = 4,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
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

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EDatasmithImportActorPolicy : uint8_t {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3,
};

enum class EInboxScreenButton : uint8_t {
	Rewards = 0,
	Social = 1,
	News = 2,
	Back = 3,
	EInboxScreenButton_MAX = 4,
};

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
};

enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

enum class EDeepLinkUid : uint8_t {
	NONE = 0,
	StorefrontSpecialOffers = 1,
	StorefrontFeatured = 2,
	StorefrontPremium = 3,
	StorefrontSubscription = 4,
	Calendar = 5,
	RitualsStarter = 6,
	RitualsDaily = 7,
	RitualsWeekly = 8,
	MenuCharactersSurvivors = 9,
	MenuCharactersKillers = 10,
	MenuCustomizations = 11,
	MenuEvents = 12,
	MenuFriends = 13,
	Loadout = 14,
	BloodmarketSurvivors = 15,
	BloodmarketKillers = 16,
	External = 17,
	EDeepLinkUid_MAX = 18,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
};

enum class ENiagaraPlatformSetState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4,
};

enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

enum class FlickeringLightType : uint8_t {
	Point = 0,
	Rect = 1,
	Spot = 2,
	FlickeringLightType_MAX = 3,
};

enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

enum class SettingsId : uint8_t {
	None = 0,
	Language = 1,
	RevokeConsent = 2,
	BhvrAccount = 3,
	AllowCrossplayGeneric = 4,
	AllowCrossplayLive = 5,
	AutoDeclineFriendRequests = 6,
	PlayerId = 7,
	PartyPrivacy = 8,
	Quality = 9,
	AutoAdjust = 10,
	Resolution = 11,
	FullScreen = 12,
	MenuScaleFactor = 13,
	HudScaleFactor = 14,
	SkillCheckScaleFactor = 15,
	LargeText = 16,
	HUDPlayerNamesVisibility = 17,
	HUDKillerHookCountVisibility = 18,
	HUDScoreEventsVisibility = 19,
	MainVolume = 20,
	MenuMusicVolume = 21,
	Headphones = 22,
	MuteOnFocusLost = 23,
	InvertYAxis = 24,
	SurvivorMouseSensitivity = 25,
	SurvivorControllerSensitivity = 26,
	KillerMouseSensitivity = 27,
	KillerControllerSensitivity = 28,
	ColorBarPalette = 29,
	ColorBlindMode = 30,
	ColorBlindModeIntensity = 31,
	BeginnerMode = 32,
	Subtitles = 33,
	SubtitlesBackgroundOpacity = 34,
	SubtitlesSize = 35,
	SurvivorCameraSensitivity = 36,
	KillerCameraSensitivity = 37,
	MenuMusicVolumeOn = 38,
	MainVolumeOn = 39,
	AimAssist = 40,
	SurvivorQuickTurn = 41,
	KillerQuickTurn = 42,
	FPSLimit = 43,
	AutoQuality = 44,
	ControlType = 45,
	CustomizedControls = 46,
	DynamicResolution = 47,
	InvertYAxisSurvivor = 48,
	SettingsId_MAX = 49,
};

enum class SettingsSubCategory : uint8_t {
	None = 0,
	Language = 1,
	Tutorial = 2,
	Subtitles = 3,
	Privacy = 4,
	Online = 5,
	Graphics = 6,
	UIHud = 7,
	Audio = 8,
	CommonControls = 9,
	SurvivorControls = 10,
	KillerControls = 11,
	ColorBlindMode = 12,
	Atlanta = 13,
	SettingsSubCategory_MAX = 14,
};

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
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

enum class ERichPresenceUserType : uint8_t {
	Player = 0,
	Server = 1,
	ERichPresenceUserType_MAX = 2,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class EPlayerMovementDirection : uint8_t {
	Left = 0,
	Right = 1,
	Forward = 2,
	Backward = 3,
	EPlayerMovementDirection_MAX = 4,
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

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3,
};

enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class ESourceBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2,
};

enum class EItemAvailability : uint8_t {
	Available = 0,
	Disabled = 1,
	Retired = 2,
	EItemAvailability_MAX = 3,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
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

enum class EBPBonusType : uint8_t {
	None = 0,
	Event = 1,
	Offerings = 2,
	EBPBonusType_MAX = 3,
};

enum class EOscillatorWaveform : uint8_t {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2,
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

enum class ELightmapType : uint8_t {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3,
};

enum class EBloomMethod : uint8_t {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2,
};

enum class EK26ProjectileState : uint8_t {
	Invalid = 0,
	Summoning = 1,
	Idle = 2,
	FollowingPath = 3,
	OffPath = 4,
	Destroyed = 5,
	EK26ProjectileState_MAX = 6,
};

enum class EModifierOperationStrategy : uint8_t {
	Add = 0,
	Subs = 1,
	Mult = 2,
	Div = 3,
	EModifierOperationStrategy_MAX = 4,
};

enum class EObjectStateTypeEnum : uint8_t {
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 5,
	Chaos_Max = 6,
	Chaos_Max = 7,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class ELoginType : uint8_t {
	Reservation = 0,
	Join = 1,
	None = 2,
	ELoginType_MAX = 3,
};

enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class EGender : uint8_t {
	VE_Male = 0,
	VE_Female = 1,
	VE_Multiple = 2,
	VE_NotHuman = 3,
	VE_Undefined = 4,
	VE_MAX = 5,
};

enum class ETimedDataInputState : uint8_t {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3,
};

enum class ECharacterStatus : uint8_t {
	Crawling = 0,
	BeingPickedUp = 1,
	BeingCarried = 2,
	BeingHealed = 3,
	BeingMended = 4,
	BeingPutDown = 5,
	BeingPutOnHook = 6,
	BeingPulledFromCloset = 7,
	BeingKilled = 8,
	OnHook = 9,
	ECharacterStatus_MAX = 10,
};

enum class EFogScreenButton : uint8_t {
	AddCurrency = 0,
	Setting = 1,
	Chat = 2,
	EFogScreenButton_MAX = 3,
};

enum class ESoundIndicatorType : uint8_t {
	None = 0,
	CloseNoiseIndicator = 1,
	ExitOpenedIndicator = 2,
	GeneratorIndicator = 3,
	HatchIndicator = 4,
	HookedIndicator = 5,
	KillerCuesIndicator = 6,
	GlobalSoundIndicator = 7,
	DirectionalTerrorRadiusIndicator = 8,
	ESoundIndicatorType_MAX = 9,
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

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class EGFxScaleMode : uint8_t {
	NoScale = 0,
	ShowAll = 1,
	ExactFit = 2,
	NoBorder = 3,
	EGFxScaleMode_MAX = 4,
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

enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EGameplayModifierSource : uint8_t {
	VE_Perk = 0,
	VE_StatusEffect = 1,
	VE_Item = 2,
	VE_ItemAddon = 3,
	VE_All = 4,
	VE_PerkOrStatusEffect = 5,
	VE_PerkStatusOrAddon = 6,
	VE_MAX = 7,
};

enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3,
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

enum class EClusterConnectionTypeEnum : uint8_t {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6,
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

enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

enum class EStandardToolContextMaterials : uint8_t {
	VertexColorMaterial = 0,
	EStandardToolContextMaterials_MAX = 1,
};

enum class EPartyType : uint8_t {
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
	EPartyType_MAX = 3,
};

enum class ESmoothMeshToolSmoothType : uint8_t {
	Iterative = 0,
	BiHarmonic_Cotan = 1,
	ESmoothMeshToolSmoothType_MAX = 2,
};

enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

enum class ENiagaraSimTarget : uint8_t {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2,
};

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class EJoinSessionFailureType : uint8_t {
	None = 0,
	JoiningAlreadyStartedGame = 1,
	JoiningPrivateGame = 2,
	JoiningAlreadyFullGame = 3,
	JoiningInvitation = 4,
	JoiningFailedOnDisconnect = 5,
	JoiningHostUnreachable = 6,
	JoiningIncompatibleServer = 7,
	EJoinSessionFailureType_MAX = 8,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class ENiagaraSpriteAlignment : uint8_t {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3,
};

enum class EMagicLeapControllerHapticIntensity : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EMagicLeapControllerHapticIntensity_MAX = 3,
};

enum class ERoleSelectionScreenButton : uint8_t {
	DailyRitual = 0,
	Inbox = 1,
	InviteFriend = 2,
	Setting = 3,
	Marketing = 4,
	Events = 5,
	ERoleSelectionScreenButton_MAX = 6,
};

enum class ECamperState : uint8_t {
	VE_None = 0,
	VE_Navigate = 1,
	VE_Interact = 2,
	VE_MAX = 3,
};

enum class EUVOutput : uint8_t {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2,
};

enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

enum class EAkWinGDKAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWinGDKAudioAPI_MAX = 3,
};

enum class EArchiveNodeType : uint8_t {
	Narrative = 0,
	Task = 1,
	Challenge = 2,
	Contextual = 3,
	Reward = 4,
	None = 5,
	EArchiveNodeType_MAX = 6,
};

enum class EPalletStunZoneSideStrategy : uint8_t {
	OppositeSideToPlayerExecutingPulldown = 0,
	SameSideToPlayerExecutingPulldown = 1,
	EPalletStunZoneSideStrategy_MAX = 2,
};

enum class EDetectionZone : uint8_t {
	VE_None = 0,
	VE_Slash = 1,
	VE_Pounce = 2,
	VE_Chainsaw = 3,
	VE_Obstructed = 4,
	VE_Interruption = 5,
	VE_ChainsawLockExtended = 6,
	VE_Damage = 7,
	VE_ChainsawObstruction = 8,
	VE_Blink = 9,
	VE_ChainsawDamageExtended = 10,
	VE_Stalker = 11,
	VE_Lunge = 12,
	VE_PowerAttack = 13,
	VE_Max = 14,
	VE_Max = 15,
};

enum class EIsInteractionAvailableOnFilter : uint8_t {
	Self = 0,
	AnyFriend = 1,
	EIsInteractionAvailableOnFilter_MAX = 2,
};

enum class EFrameRateLimitButtonSetting : uint8_t {
	ThirtyFPS = 0,
	SixtyFPS = 1,
	EFrameRateLimitButtonSetting_MAX = 2,
};

enum class ETrailType : uint8_t {
	NormalTrail = 0,
	RestrictionTrail = 1,
	None = 2,
	ETrailType_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class EUMGDailyRewardWidgetState : uint8_t {
	Unknown = 0,
	Locked = 1,
	ReadyToCollect = 2,
	NewlyCollected = 3,
	Collected = 4,
	MysteryLocked = 5,
	MysteryReadyToDiscover = 6,
	MysteryNewlyDiscovered = 7,
	EUMGDailyRewardWidgetState_MAX = 8,
};

enum class EDecoratorIsObjFocusedFilter : uint8_t {
	Self = 0,
	SelfNearest = 1,
	EDecoratorIsObjFocusedFilter_MAX = 2,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
};

enum class ESnapBackPositionType : uint8_t {
	SnapBackToInitialPosition = 0,
	SnapBackToOffsetPositionFromSnap = 1,
	ESnapBackPositionType_MAX = 2,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class ELuminComponentSubElementType : uint8_t {
	FileExtension = 0,
	MimeType = 1,
	Mode = 2,
	MusicAttribute = 3,
	Schema = 4,
	ELuminComponentSubElementType_MAX = 5,
};

enum class EDataSortTypeEnum : uint8_t {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4,
	ChaosNiagara_Max = 5,
};

enum class EOcclusionTriangleSamplingUIMode : uint8_t {
	Vertices = 0,
	VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2,
};

enum class EFriendUIStatus : uint8_t {
	Offline = 0,
	Online = 1,
	PlayingDBD = 2,
	PendingSentRequest = 3,
	PendingReceivedRequest = 4,
	NotFriend = 5,
	Self = 6,
	EFriendUIStatus_MAX = 7,
};

enum class EButtonWidgetVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	EButtonWidgetVisibility_MAX = 3,
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
	EAlignObjectsBoxPoint_MAX = 9,
};

enum class EToolContextCoordinateSystem : uint8_t {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	IgnoreZAccumulate = 2,
	ERootMotionSourceSettingsFlags_MAX = 3,
};

enum class ETransformMeshesTransformMode : uint8_t {
	SharedGizmo = 0,
	SharedGizmoLocal = 1,
	PerObjectGizmo = 2,
	LastValue = 3,
	ETransformMeshesTransformMode_MAX = 4,
};

enum class EWindowTitleBarMode : uint8_t {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
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

enum class EScaleType : uint8_t {
	None = 0,
	Menu = 1,
	Hud = 2,
	SkillCheck = 3,
	EScaleType_MAX = 4,
};

enum class ERichPresenceStatus : uint8_t {
	Offline = 0,
	Connected = 1,
	InMenus = 2,
	InPartyLobby = 3,
	InOnlineLobby = 4,
	InMatch = 5,
	ERichPresenceStatus_MAX = 6,
};

enum class EDatasmithAreaLightActorType : uint8_t {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3,
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

enum class EAttachToSocketNameEnum : uint8_t {
	ManualAttachment = 0,
	HandItemSocket = 1,
	Weapon_SocketLT = 2,
	Weapon_SocketRT = 3,
	LanternCollectableSocket = 4,
	Tentacle_SocketLT = 5,
	EAttachToSocketNameEnum_MAX = 6,
};

enum class EContextualType : uint8_t {
	None = 0,
	RedGlyph = 1,
	BlueGlyph = 2,
	YellowGlyph = 3,
	PurpleGlyph = 4,
	GlyphUpperBound = 5,
	ToxinPlantHalloween2020 = 6,
	PumpkinHalloween2021 = 7,
	EContextualType_MAX = 8,
};

enum class EHudEditorDragAxisOption : uint8_t {
	PositiveSide = 0,
	NegativeSide = 1,
	BothSide = 2,
	EHudEditorDragAxisOption_MAX = 3,
};

enum class EGameType : uint8_t {
	Online = 0,
	KillYourFriends = 1,
	SurvivorGroup = 2,
	Tutorial = 3,
	TutorialBotMatch = 4,
	SecretBotMatch = 5,
	None = 6,
	EGameType_MAX = 7,
};

enum class ESpawnerStrategyType : uint8_t {
	None = 0,
	NoAccumulation = 1,
	LimitAccumulation = 2,
	ESpawnerStrategyType_MAX = 3,
};

enum class EFriendshipStatus : uint8_t {
	None = 0,
	RequestSent = 1,
	RequestReceived = 2,
	Friend = 3,
	EFriendshipStatus_MAX = 4,
};

enum class EBombType : uint8_t {
	Toxin = 0,
	Antidote = 1,
	EBombType_MAX = 2,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class EDisconnectErrors : uint8_t {
	None = 0,
	SteamAuthFailure = 1,
	SteamAuthFailureKickedFromServer = 2,
	EACServerValidationFailure = 3,
	EACValidationFailureKickedFromServer = 4,
	EACClientNotRunning = 5,
	EACClientIntegrityViolation = 6,
	PlayerRemovedOnSuspend = 7,
	LostConnectionToHost = 8,
	LostConnectionToProfileService = 9,
	MirrorsUnscheduledSessionDestruction = 10,
	SessionKilledByMirrors = 11,
	UnableToSaveProfileAfterRetries = 12,
	UnableToGetPlayerLevel = 13,
	UnableToEarnPlayerXp = 14,
	UnableToUpdatePips = 15,
	UnableToUpdateRatings = 16,
	ClientProviderAuthenticationFailed = 17,
	UnableToSyncCachedCurrency = 18,
	OwnershipValidationFailure = 19,
	EDisconnectErrors_MAX = 20,
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

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class EStunType : uint8_t {
	VE_None = 0,
	VE_Bookshelf = 1,
	VE_BearTrap = 2,
	VE_Flashlight = 3,
	VE_WiggleFree = 4,
	VE_EvilWithin = 5,
	VE_Kicked = 6,
	VE_Closet = 7,
	VE_HarpoonRifle = 8,
	VE_GeneratorTrap = 9,
	VE_MAX = 10,
};

enum class EDisplayStandActorType : uint8_t {
	None = 0,
	Character = 1,
	Hook = 2,
	Charm = 3,
	EDisplayStandActorType_MAX = 4,
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
	EMagicLeapPrivilege_MAX = 38,
};

enum class EAnimNotifyType : uint8_t {
	VE_None = 0,
	VE_Pickup = 1,
	VE_Release = 2,
	VE_MAX = 3,
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

enum class EPinContainerType : uint8_t {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4,
};

enum class EQosResponseType : uint8_t {
	NoResponse = 0,
	Success = 1,
	Failure = 2,
	EQosResponseType_MAX = 3,
};

enum class EBloodOrbState : uint8_t {
	Invalid = 0,
	BeingDropped = 1,
	Idle = 2,
	WaitingToMove = 3,
	Attracted = 4,
	Absorbed = 5,
	Destroyed = 6,
	EBloodOrbState_MAX = 7,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
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

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class EOfferingCategory : uint8_t {
	None = 0,
	Bloodpoints = 1,
	Mapmods = 2,
	Realms = 3,
	Shrouds = 4,
	Wards = 5,
	CharacterXP = 6,
	Luck = 7,
	Moris = 8,
	EOfferingCategory_MAX = 9,
};

enum class EAIThrowPredictionModes : uint8_t {
	FindBestThrowPowerRatio = 0,
	FullThrowPowerRatio = 1,
	EAIThrowPredictionModes_MAX = 2,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
};

enum class EGestureID : uint8_t {
	POINT = 0,
	COME = 1,
	EGestureID_MAX = 2,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class EPlatformFlag : uint8_t {
	None = 0,
	Android = 1,
	DMM = 2,
	IOS = 3,
	Switch = 4,
	PS4 = 5,
	Steam = 6,
	WinGDK = 7,
	Xbox = 8,
	Stadia = 9,
	PS5 = 10,
	XSX = 11,
	Epic = 12,
	EPlatformFlag_MAX = 13,
};

enum class ENaturalSoundFalloffMode : uint8_t {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3,
};

enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

enum class EGameManualMenuState : uint8_t {
	Categories = 0,
	Topics = 1,
	EGameManualMenuState_MAX = 2,
};

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

enum class EHintCategory : uint8_t {
	Lore = 0,
	Survivor = 1,
	Killer = 2,
	EHintCategory_MAX = 3,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
};

enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class EActionOnFriendType : uint8_t {
	None = 0,
	SendFriendRequest = 1,
	ConfirmFriendRequest = 2,
	DeclineFriendRequest = 3,
	RemoveFriend = 4,
	AddToFavorite = 5,
	RemoveToFavorite = 6,
	Mute = 7,
	Unmute = 8,
	InviteToParty = 9,
	CancelInviteToParty = 10,
	Select = 11,
	ConfirmAction = 12,
	DeclineAction = 13,
	RemovePlayerFromParty = 14,
	Count = 15,
	EActionOnFriendType_MAX = 16,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

enum class EScreenType : uint8_t {
	eScaleformScreen = 0,
	eUMGScreen = 1,
	eMixedScaleformUMG = 2,
	EScreenType_MAX = 3,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class ETotemState : uint8_t {
	Cleansed = 0,
	Dull = 1,
	Hex = 2,
	Boon = 3,
	ETotemState_MAX = 4,
};

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class EDrawPolygonOutputMode : uint8_t {
	MeshedPolygon = 0,
	ExtrudedConstant = 1,
	ExtrudedInteractive = 2,
	EDrawPolygonOutputMode_MAX = 3,
};

enum class ERewardLayoutBox : uint8_t {
	Top = 0,
	Bottom = 1,
	ERewardLayoutBox_MAX = 2,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class ENiagaraVariantMode : uint8_t {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4,
};

enum class ESkillCheckCustomType : uint8_t {
	VE_None = 0,
	VE_OnPickedUp = 1,
	VE_OnAttacked = 2,
	VE_DecisiveStrikeWhileWiggling = 3,
	VE_GeneratorOvercharge1 = 4,
	VE_GeneratorOvercharge2 = 5,
	VE_GeneratorOvercharge3 = 6,
	VE_BrandNewPart = 7,
	VE_Struggle = 8,
	VE_OppressionPerkGeneratorKicked = 9,
	VE_SoulChemical = 10,
	VE_Wiggle = 11,
	VE_YellowGlyph = 12,
	VE_MAX = 13,
};

enum class EExternalEffectSource : uint8_t {
	None = 0,
	Perk = 1,
	Addon = 2,
	Power = 3,
	EExternalEffectSource_MAX = 4,
};

enum class EActivationStrategy : uint8_t {
	ActivateIfAnyTagMatches = 0,
	ActivateIfAllTagMatches = 1,
	DeactivateIfAnyTagMatches = 2,
	DeactivateIfAllTagMatches = 3,
	DeactivateWhenDependenciesAreDeactivated = 4,
	EActivationStrategy_MAX = 5,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class EDensity : uint8_t {
	Unspecified = 0,
	Light = 1,
	Moderate = 2,
	Heavy = 3,
	Empty = 4,
	EDensity_MAX = 5,
};

enum class EProgressionType : uint8_t {
	None = 0,
	Stars = 1,
	EProgressionType_MAX = 2,
};

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class PanningRule : uint8_t {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2,
};

enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
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

enum class EGooglePADStorageMethod : uint8_t {
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4,
};

enum class ECollectionScriptingShareType : uint8_t {
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3,
};

enum class EInteractionPromptType : uint8_t {
	PressButton = 0,
	MashButton = 1,
	HoldButton = 2,
	AlternateTwoButtons = 3,
	WiggleThumbstick = 4,
	MovementAxes = 5,
	MovementKeys = 6,
	EInteractionPromptType_MAX = 7,
};

enum class EPurchasePopupState : uint8_t {
	Information = 0,
	TitleOnly = 1,
	EPurchasePopupState_MAX = 2,
};

enum class EBloodDisplayType : uint8_t {
	Hidden = 0,
	Bottom = 1,
	Top = 2,
	EBloodDisplayType_MAX = 3,
};

enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class EAITerrorLevel : uint8_t {
	None = 0,
	Low = 1,
	Min = 2,
	Medium = 3,
	High = 4,
	VeryHigh = 5,
	Max = 6,
	EAITerrorLevel_MAX = 7,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EAkPanningRule : uint8_t {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2,
};

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
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

enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class EUIActionType : uint8_t {
	Accept = 0,
	Cancel = 1,
	Previous = 2,
	Next = 3,
	EUIActionType_MAX = 4,
};

enum class ENiagaraPlatformSelectionState : uint8_t {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class EOwnership : uint8_t {
	Owned = 0,
	NotOwned = 1,
	Any = 2,
	EOwnership_MAX = 3,
};

enum class EGameIntroSteps : uint8_t {
	Idling = 0,
	PlayingIntro = 1,
	LoopingCamView = 2,
	EGameIntroSteps_MAX = 3,
};

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

enum class ESpecialEventStatus : uint8_t {
	Inactive = 0,
	ActiveMain = 1,
	ActivePost = 2,
	ESpecialEventStatus_MAX = 3,
};

enum class EFireHarpoonRifleInteractionState : uint8_t {
	None = 0,
	Aiming = 1,
	FirePhase = 2,
	MissPhase = 3,
	SuccessPhase = 4,
	EndResult = 5,
	CanceledAiming = 6,
	EFireHarpoonRifleInteractionState_MAX = 7,
};

enum class EMatrixColumns : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

enum class EPartyBusyReason : uint8_t {
	None = 0,
	CreatingParty = 1,
	LeavingParty = 2,
	SyncingParty = 3,
	DestroyingParty = 4,
	InvitingPlayer = 5,
	AcceptingPartyInvite = 6,
	RejectingPartyInvite = 7,
	CancelingPartyInvite = 8,
	RequestingJoinParty = 9,
	AcceptingRequestJoinParty = 10,
	RejectingRequestJoinParty = 11,
	CancelingRequestJoinParty = 12,
	AcceptingPlatformInvite = 13,
	KickingPlayerFromParty = 14,
	LeavingPartyFromKick = 15,
	CreatingPartyPlatformSession = 16,
	LeavingCrossplatformPlatformSession = 17,
	WaitingForPlatformSessionInfo = 18,
	ProcessingPlatformSession = 19,
	EPartyBusyReason_MAX = 20,
};

enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
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

enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
	Chaos_Max = 3,
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

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class EHudComponent : uint8_t {
	ACTION_PROMPT = 0,
	ACTION_PROGRESS_BAR = 1,
	GENERATOR_ICON = 2,
	HATCH_ICON = 3,
	EXIT_ICON = 4,
	LOCAL_PLAYER_STATUS = 5,
	OTHER_PLAYER_STATUSES = 6,
	SURVIVOR_HOOK_COUNT = 7,
	CROUCH_BUTTON = 8,
	CENTER_INTERACT_BUTTON = 9,
	DIRECTIONAL_STICK = 10,
	WIGGLE_BUTTONS = 11,
	STRUGGLE_BUTTONS = 12,
	POWER_BUTTON = 13,
	ATTACK_BUTTON = 14,
	OBJECTIVES = 15,
	LOUD_NOISE_INDICATOR = 16,
	SECOND_ABILITY_BUTTON = 17,
	ACTION_BUTTON = 18,
	CANCEL_BUTTON = 19,
	DROP_SURVIVOR_BUTTON = 20,
	LOOK_BACK_BUTTON = 21,
	CENTER_ITEM_CONTAINER = 22,
	MOVEMENT_LOCK = 23,
	EHudComponent_MAX = 24,
};

enum class EFriendSearchPanelOption : uint8_t {
	NotFoundPanel = 0,
	NonFriendPanel = 1,
	FriendRequestReceivedPanel = 2,
	FriendRequestSentPanel = 3,
	FriendPanel = 4,
	IsOwnerPanel = 5,
	EFriendSearchPanelOption_MAX = 6,
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

enum class EARTextureType : uint8_t {
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2,
	EARTextureType_MAX = 3,
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

enum class EOfflineLobbyState : uint8_t {
	None = 0,
	RoleSelection = 1,
	OfflineLobby = 2,
	Store = 3,
	PartyLobby = 4,
	Archives = 5,
	EOfflineLobbyState_MAX = 6,
};

enum class ESpecialEventGameMode : uint8_t {
	Progression = 0,
	Counter = 1,
	Collection = 2,
	ESpecialEventGameMode_MAX = 3,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class EMagicLeapLightEstimationCamera : uint8_t {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class EInventoryItemType : uint8_t {
	None = 0,
	Item = 1,
	ItemAddOn = 2,
	CamperPerk = 3,
	Power = 4,
	PowerAddOn = 5,
	SlasherPerk = 6,
	Favor = 7,
	Customization = 8,
	IridescentShardsPack = 9,
	AuricCellsPack = 10,
	BloodPointsPack = 11,
	FreeTicket = 12,
	Chest = 13,
	SuperChest = 14,
	EntityBox = 15,
	Count = 16,
	EInventoryItemType_MAX = 17,
};

enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
};

enum class EARSessionTrackingFeature : uint8_t {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature_MAX = 4,
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

enum class EAlignObjectsAlignTypes : uint8_t {
	Pivots = 0,
	BoundingBoxes = 1,
	EAlignObjectsAlignTypes_MAX = 2,
};

enum class EOfferingEffectType : uint8_t {
	SlasherPointsAll = 0,
	PointsBrutality = 1,
	PointsDeviouness = 2,
	PointsSacrice = 3,
	PointsHunting = 4,
	CamperPointsAll = 5,
	PointsObjective = 6,
	PointsSurvival = 7,
	PointsAltruism = 8,
	PointsBoldness = 9,
	SurvivorCharacterXP = 10,
	KillerCharacterXP = 11,
	CamperItemLostPrevention = 12,
	KillerItemLostPrevention = 13,
	Luck = 14,
	IndustrialThemeSelectionModifier = 15,
	JunkyardThemeSelectionModifier = 16,
	FarmThemeSelectionModifier = 17,
	SwampThemeSelectionModifier = 18,
	MapModifier = 19,
	ChestCountModifier = 20,
	PortableHookCountModifier = 21,
	LairCountModifier = 22,
	PlayerGrouping = 23,
	FarKiller = 24,
	KillAllowedModifier = 25,
	LightingModification = 26,
	FogModification = 27,
	LivingWorldObjectCountModifier = 28,
	LivingWorldObjectMultModifier = 29,
	KillLastSurvivor = 30,
	SuburbsThemeSelectionModifier = 31,
	AsylumThemeSelectionModifier = 32,
	KillerSelectionModifier = 33,
	HospitalThemeSelectionModifier = 34,
	KillAllowedAfterStrugglePhase = 35,
	BorealThemeSelectionModifier = 36,
	SpringwoodThemeSelectionModifier = 37,
	FinlandThemeSelectionModifier = 38,
	JapaneseCountrySideSelectionModifier = 39,
	KenyaThemeSelectionModifier = 40,
	QatarThemeSelectionModifier = 41,
	UkraineThemeSelectionModifier = 42,
	WalesThemeSelectionModifier = 43,
	CancelThemeSelectionModifier = 44,
	BasementMainBuildingModifier = 45,
	BasementShackModifier = 46,
	HatchMainBuildingModifier = 47,
	HatchShackModifier = 48,
	EclipseThemeSelectionModifier = 49,
	IonThemeSelectionModifier = 50,
	SpecialEvent = 51,
	ObjectSubsitution = 52,
	ObjectAddition = 53,
	EOfferingEffectType_MAX = 54,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
};

enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class EDBDScoreTypes : uint8_t {
	DBDCamperScore_SurviveHealthy = 0,
	DBDCamperScore_SurviveWounded = 1,
	DBDCamperScore_SurviveKO = 2,
	DBDCamperScore_UnlockHatch = 3,
	DBDCamperScore_EscapeThroughHatch = 4,
	DBDCamperScore_AllEscapeThroughHatch = 5,
	DBDCamperScore_EscapeCarry = 6,
	DBDCamperScore_SurviveStreakSmall = 7,
	DBDCamperScore_SurviveStreakBig = 8,
	DBDCamperScore_DamageStateChanged = 9,
	DBDCamperScore_NearFriendInNeed = 10,
	DBDCamperScore_NearFriendInNeed_PostExit = 11,
	DBDCamperScore_FoundCamper = 12,
	DBDCamperScore_CoopObjectives = 13,
	DBDCamperScore_OpenDoorPercent = 14,
	DBDCamperScore_OpenDoor = 15,
	DBDCamperScore_GeneratorPercent = 16,
	DBDCamperScore_GeneratorSkillCheckSuccess = 17,
	DBDCamperScore_GeneratorSkillCheckBonus = 18,
	DBDCamperScore_SearchablePercent = 19,
	DBDCamperScore_SearchCompleteFinalContributionPercent = 20,
	DBDCamperScore_AddItemToMap = 21,
	DBDCamperScore_FixGenerator = 22,
	DBDCamperScore_FixSpecialMapGenerator = 23,
	DBDCamperScore_LastSurvivorFixGenerator = 24,
	DBDCamperScore_RepairDamagedGenerator = 25,
	DBDCamperScore_PowerExitGates = 26,
	DBDCamperScore_CoopAltruism = 27,
	DBDCamperScore_HealPercent = 28,
	DBDCamperScore_HealPercent_PostExit = 29,
	DBDCamperScore_HealFromDying = 30,
	DBDCamperScore_HealFromDying_PostExit = 31,
	DBDCamperScore_HealFromInjured = 32,
	DBDCamperScore_HealFromInjured_PostExit = 33,
	DBDCamperScore_HealSkillCheckSuccess = 34,
	DBDCamperScore_HealSkillCheckBonus = 35,
	DBDCamperScore_HealSelfPercent = 36,
	DBDCamperScore_HealSelfSkillCheckSuccess = 37,
	DBDCamperScore_HealSelfSkillCheckBonus = 38,
	DBDCamperScore_HitAfterHookSave = 39,
	DBDCamperScore_HitNearFriendInNeed = 40,
	DBDCamperScore_HitNearUnhookedFriendInNeed = 41,
	DBDCamperScore_SabotageHook = 42,
	DBDCamperScore_SabotageHookSkillCheckSuccess = 43,
	DBDCamperScore_SabotageHookSkillCheckBonus = 44,
	DBDCamperScore_EscapeFromHook = 45,
	DBDCamperScore_HookStrugglePerSecond = 46,
	DBDCamperScore_SaveFromHook = 47,
	DBDCamperScore_SaveFromHook_PostExit = 48,
	DBDCamperScore_WasUnhooked = 49,
	DBDCamperScore_SabotageBearTrap = 50,
	DBDCamperScore_SabotageBearTrapSkillCheckSuccess = 51,
	DBDCamperScore_SabotageBearTrapSkillCheckBonus = 52,
	DBDCamperScore_DisableBearTrap = 53,
	DBDCamperScore_SaveFromBearTrap = 54,
	DBDCamperScore_SaveFromBearTrap_PostExit = 55,
	DBDCamperScore_EscapeBearTrap = 56,
	DBDCamperScore_BasementChillingPerSecond = 57,
	DBDCamperScore_CoopBoldness = 58,
	DBDCamperScore_SlasherStun = 59,
	DBDCamperScore_SlasherStunCarrying = 60,
	DBDCamperScore_SlasherBlind = 61,
	DBDCamperScore_SlasherBurnInvisibility = 62,
	DBDCamperScore_ChasePerSecond = 63,
	DBDCamperScore_ChaseEscape = 64,
	DBDCamperScore_ChaseSteal = 65,
	DBDCamperScore_ChaseBlind = 66,
	DBDCamperScore_VaultInChase = 67,
	DBDCamperScore_NoiseDistraction = 68,
	DBDCamperScore_SprintingNearSlasherPerSecond = 69,
	DBDCamperScore_UnhideNearSlasher = 70,
	DBDCamperScore_EscapeWhileChased = 71,
	DBDCamperScore_DestroyPhantomTrap = 72,
	DBDCamperScore_NewItem = 73,
	DBDCamperScore_StartMatchWithUltraRareItem = 74,
	DBDCamperScore_ItemFrom = 75,
	DBDCamperScore_ExposerAdded = 76,
	DBDSlasherScore_Destroy = 77,
	DBDSlasherScore_Kill = 78,
	DBDSlasherScore_BleedOut = 79,
	DBDSlasherScore_BleedOutPercent = 80,
	DBDSlasherScore_AttackSuccess = 81,
	DBDSlasherScore_AttackDeviousness = 82,
	DBDSlasherScore_InterruptGenerator = 83,
	DBDSlasherScore_InterruptWindow = 84,
	DBDSlasherScore_InterruptHide = 85,
	DBDSlasherScore_InterruptExit = 86,
	DBDSlasherScore_InterruptUnhook = 87,
	DBDSlasherScore_InterruptChest = 88,
	DBDSlasherScore_InterruptOpenHatch = 89,
	DBDSlasherScore_InterruptExitHatch = 90,
	DBDSlasherScore_FindHiding = 91,
	DBDSlasherScore_PlaceTrap = 92,
	DBDSlasherScore_Trap = 93,
	DBDSlasherScore_TrapPickup = 94,
	DBDSlasherScore_Hook = 95,
	DBDSlasherScore_SacrificePercent = 96,
	DBDSlasherScore_SacrificeSuccess = 97,
	DBDSlasherScore_SacrificedCount = 98,
	DBDSlasherScore_NoEscape = 99,
	DBDSlasherScore_ChaseStart = 100,
	DBDSlasherScore_ChasePerSecond = 101,
	DBDSlasherScore_CloakStalkPerSecond = 102,
	DBDSlasherScore_UncloakInView = 103,
	DBDSlasherScore_UncloakAttack = 104,
	DBDSlasherScore_EvadeInvisBurn = 105,
	DBDSlasherScore_EvadeBlind = 106,
	DBDSlasherScore_CamperDisconnect = 107,
	DBDSlasherScore_HitCamperWithChainsaw = 108,
	DBDSlasherScore_RunningWithChainsaw = 109,
	DBDSlasherScore_ChainBlinkAttack = 110,
	DBDSlasherScore_ChainBlinkInterrupt = 111,
	DBDSlasherScore_ChainBlinkInterruptAfter3 = 112,
	DBDSlasherScore_ChainBlinkStartChase = 113,
	DBDSlasherScore_StalkpointGained = 114,
	DBDSlasherScore_StalkerTierIncrement = 115,
	DBDSlasherScore_StalkerTierFirstTime = 116,
	DBDSlasherScore_StalkerKillAllCampers = 117,
	DBDSlasherScore_PhantomTrapSet = 118,
	DBDSlasherScore_PhantomTrapTrigger = 119,
	DBDSlasherScore_PhantomTrapTriggerAttack = 120,
	DBDSlasherScore_PhantomTrapTeleportAttack = 121,
	DBDSlasherScore_PhantomTrapTeleportAttackAllCampers = 122,
	DBDSlasherScore_ThrillOfTheHunt = 123,
	DBDPlayerScore_BloodwebLevelUp = 124,
	DBDPlayerScore_BloodwebPrestigeLevelUp = 125,
	DBDPlayerScore_BloodwebPrestige3LevelUp = 126,
	DBDPlayerScore_AwardPips = 127,
	DBDPlayerScore_AddBloodpoints = 128,
	DBDPlayerScore_BloodpointsOneCategory = 129,
	DBDPlayerScore_MaxBloodpointsAllCategories = 130,
	DBDPlayerScore_AddNewPerk = 131,
	DBDPlayerScore_PerkLevelUp = 132,
	DBDPlayerScore_BurnOfferingUltraRare = 133,
	DBDPlayerScore_StartGame = 134,
	DBDPlayerScore_UnlockRanking = 135,
	DBDPlayerScore_FinishWithPerks = 136,
	DBDCamperScore_CheatObjectives = 137,
	DBDCamperScore_CheatSurvival = 138,
	DBDCamperScore_CheatAltruism = 139,
	DBDCamperScore_CheatBoldness = 140,
	DBDSlasherScore_CheatSacrifice = 141,
	DBDSlasherScore_CheatBrutality = 142,
	DBDSlasherScore_CheatDeviousness = 143,
	DBDSlasherScore_CheatHunter = 144,
	DBDCamperScore_CleanseDullTotem = 145,
	DBDCamperScore_CleanseHexTotem = 146,
	DBDPlayerScore_BalancedLanding = 147,
	DBDPlayerScore_Lithe = 148,
	DBDSlasherScore_DamageGenerator = 149,
	DBDSlasherScore_Vault = 150,
	DBDCamperScore_StartInjuredBleedout = 151,
	DBDCamperScore_FullRecovery = 152,
	DBDCamperScore_FirstTimeDying = 153,
	DBDCamperScore_SecondTimeDying = 154,
	DBDCamperScore_FirecrackerDisturbance = 155,
	DBDCamperScore_GeneratorSkillCheckRuinBonus = 156,
	DBDCamperScore_SlasherBurnBlink = 157,
	DBDCamperScore_DieSacrificed = 158,
	DBDCamperScore_DieBleedOut = 159,
	DBDCamperScore_DieKill = 160,
	DBDPlayerScore_EndGame = 161,
	DBDPlayerScore_EnterParadise = 162,
	DBDSlasherScore_CamperHookedFirstTime = 163,
	DBDSlasherScore_CamperEnterHookStrugglePhase = 164,
	DBDSlasherScore_ElectroShockSurvivor = 165,
	DBDSlasherScore_BringAllSurvivorsToMadnessTier3 = 166,
	DBDSlasherScore_BringSurvivorUpOneMadnessTier = 167,
	DBDSlasherScore_HitSurvivorAfterElectroShock = 168,
	DBDSlasherScore_PickupCamper = 169,
	DBDSlasherScore_Blink = 170,
	DBDSlasherScore_TeleportToPhantomTrap = 171,
	DBDSlasherScore_HatchetThrow = 172,
	DBDSlasherScore_HatchetHit = 173,
	DBDSlasherScore_HatchetSkillShotHit = 174,
	DBDSlasherScore_HatchetFarHit = 175,
	DBDCamperScore_QuickVault = 176,
	DBDCamperScore_QuickCloset = 177,
	DBDCamperScore_StartGeneratorRepair = 178,
	DBDCamperScore_StartCleansingTotem = 179,
	DBDCamperScore_FirstRepairSkillCheck = 180,
	DBDSlasherScore_CamperDisconnectedBeforeMatchStart = 181,
	DBDSlasherScore_CamperDisconnectedDuringMatch = 182,
	DBDCamperScore_NearFriendInNeed_GeneratorsComplete = 183,
	DBDCamperScore_HealPercent_GeneratorsComplete = 184,
	DBDCamperScore_HealFromDying_GeneratorsComplete = 185,
	DBDCamperScore_SaveFromHook_GeneratorsComplete = 186,
	DBDCamperScore_SaveFromBearTrap_GeneratorsComplete = 187,
	DBDCamperScore_SnapOutOfIt = 188,
	DBDSlasherScore_HookInBasement = 189,
	DBDSlasherScore_LFChainsawHit = 190,
	DBDCamperScore_PalletDrop = 191,
	DBDCamperScore_Vault = 192,
	DBDSlasherScore_StartChaseWithChainsawAttack = 193,
	DBDSlasherScore_MissedAttackInChase = 194,
	DBDCamperScore_DodgeAndVault = 195,
	DBDCamperScore_BeginQuickVault = 196,
	DBDSlasherScore_StartChainsawAttack = 197,
	DBDCamperScore_WakeUpBySkillCheck = 198,
	DBDCamperScore_FallAsleep = 199,
	DBDCamperScore_WakeUpSelf = 200,
	DBDCamperScore_WakeUpOther = 201,
	DBDSlasherScore_RecentlyAsleepAttack = 202,
	DBDSlasherScore_SurvivorPartyOnBasementHooks = 203,
	DBDCamperScore_LootBasementChest = 204,
	DBDPlayerScore_OpenMysteryBox = 205,
	DBDGameEvent_SurvivorDowned = 206,
	DBDGameEvent_SurvivorDied = 207,
	DBDGameEvent_KillerCloak = 208,
	DBDSlasherScore_SetReverseBearTrap = 209,
	DBDSlasherScore_AbductionDash = 210,
	DBDSlasherScore_DashHitSuccess = 211,
	DBDSlasherScore_KillWithReverseBearTrap = 212,
	DBDCamperScore_SearchRBTKey = 213,
	DBDCamperScore_EscapeRBT = 214,
	DBDGameEvent_ReplacedGoodSkillCheckAsGreat = 215,
	DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess = 216,
	DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus = 217,
	DBDSlasherScore_DamageGeneratorWhileHooked = 218,
	DBDGameEvent_SurvivorDamaged = 219,
	DBDGameEvent_SurvivorHealed = 220,
	DBDGameEvent_Interruption = 221,
	DBDGameEvent_SurvivorFailedHealSkillcheck = 222,
	DBDGameEvent_HookedSurvivorSacrificeBegin = 223,
	DBDGameEvent_AcquireEventKillerCoin = 224,
	DBDGameEvent_AcquireEventSurvivorCoin = 225,
	DBDCamperScore_EventGeneratorFixed = 226,
	DBDSlasherScore_HookedOnEventHook = 227,
	DBDGameEvent_GeneratorProgress = 228,
	DBDSlasherScore_DownSmokedCamper = 229,
	DBDSlasherScore_HitSmokedCamper = 230,
	DBDSlasherScore_SurvivorEnterGasCloud = 231,
	DBDSlasherScore_BombDirectHit = 232,
	DBDSlasherScore_ThrowBomb = 233,
	DBDGameEvent_CoopAction = 234,
	DBDSlasherScore_StartActivePhaseWalk = 235,
	DBDScore_Count = 236,
	Count = 237,
	EDBDScoreTypes_MAX = 238,
};

enum class EChargeableInteractionBarType : uint8_t {
	VE_Normal = 0,
	VE_ProgressPips = 1,
	VE_MAX = 2,
};

enum class EASType : uint8_t {
	Undefined = 0,
	Null = 1,
	Boolean = 2,
	Int = 3,
	Number = 4,
	String = 5,
	StringW = 6,
	Object = 7,
	DisplayObject = 8,
	EASType_MAX = 9,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class ELobbyBeaconJoinState : uint8_t {
	None = 0,
	SentJoinRequest = 1,
	JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState_MAX = 3,
};

enum class EBatchingMode : uint8_t {
	None = 0,
	Instanced = 1,
	Hierarchical = 2,
	GPUCulling = 3,
	EBatchingMode_MAX = 4,
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

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

enum class EBloodwebDefinitionContentType : uint8_t {
	Empty = 0,
	Nodes = 1,
	Paths = 2,
	NodesAndPaths = 3,
	NodesNoPath = 4,
	EBloodwebDefinitionContentType_MAX = 5,
};

enum class ESocialSubsystem : uint8_t {
	Primary = 0,
	Platform = 1,
	MAX = 2,
};

enum class ETransformMeshesSnapDragSource : uint8_t {
	ClickPoint = 0,
	Pivot = 1,
	LastValue = 2,
	ETransformMeshesSnapDragSource_MAX = 3,
};

enum class ELegalTermsStatus : uint8_t {
	None = 0,
	Accepted = 1,
	Declined = 2,
	ELegalTermsStatus_MAX = 3,
};

enum class ESubtitlesBackgroundOpacity : uint8_t {
	None = 0,
	Default = 1,
	High = 2,
	Opaque = 3,
	ESubtitlesBackgroundOpacity_MAX = 4,
};

enum class EAtlantaItemProgressionBarEnum : uint8_t {
	PrimaryBar = 0,
	SecondaryBar = 1,
	EAtlantaItemProgressionBarEnum_MAX = 2,
};

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EPalletPushSideStrategy : uint8_t {
	PushToClosestPalletSide = 0,
	PushOppositeToPlayerExecutingPulldown = 1,
	EPalletPushSideStrategy_MAX = 2,
};

enum class EDoorStatus : uint8_t {
	Closed = 0,
	Powered = 1,
	Open = 2,
	EDoorStatus_MAX = 3,
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

enum class EPlatformInterfaceDataType : uint8_t {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6,
};

enum class EWheelSweepType : uint8_t {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

enum class ESettingScreenButtonData : uint8_t {
	PRIVACY = 0,
	EULA = 1,
	CREDITS = 2,
	SURVIVORTUTORIAL = 3,
	KILLERTUTORIAL = 4,
	SURVIVORCINEMATIC = 5,
	KILLERCINEMATIC = 6,
	LORECINEMATIC = 7,
	COMMUNITY = 8,
	PLAYERCLOUDID = 9,
	SUBSCRIBE = 10,
	TERMSOFUSE = 11,
	ESettingScreenButtonData_MAX = 12,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EDetailMode : uint8_t {
	DM_Lowest = 0,
	DM_Lower = 1,
	DM_Low = 2,
	DM_Medium = 3,
	DM_High = 4,
	DM_Higher = 5,
	DM_MAX = 6,
};

enum class EBloodwebSaveReason : uint8_t {
	PayToRefresh = 0,
	PrestigeUp = 1,
	ShouldRebuild = 2,
	Cheat = 3,
	EBloodwebSaveReason_MAX = 4,
};

enum class EMakeMeshPolygroupMode : uint8_t {
	Single = 0,
	PerFace = 1,
	PerQuad = 2,
	EMakeMeshPolygroupMode_MAX = 3,
};

enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class ESurvivorTutorialSections : uint8_t {
	Intro = 0,
	Skillchecks = 1,
	Killer = 2,
	Stealth = 3,
	Hook = 4,
	Health = 5,
	Rescue = 6,
	Escape = 7,
	ESurvivorTutorialSections_MAX = 8,
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

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class EAttackEventType : uint8_t {
	VE_None = 0,
	VE_BasicAttackAttempt = 1,
	VE_BasicAttackHit = 2,
	VE_SpecialAttackAttempt = 3,
	VE_SpecialAttackHit = 4,
	VE_MAX = 5,
};

enum class EPreLevelGenerationModifierType : uint8_t {
	None = 0,
	ModifyKillerObjectCount = 1,
	EPreLevelGenerationModifierType_MAX = 2,
};

enum class EToastWidgetType : uint8_t {
	Simple = 0,
	Interactable = 1,
	EToastWidgetType_MAX = 2,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class ETeachableStatus : uint8_t {
	Unknown = 0,
	Locked = 1,
	AvailableInBloodWeb = 2,
	AvailableInShrine = 3,
	Acquired = 4,
	ETeachableStatus_MAX = 5,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class EMagicLeapMeshType : uint8_t {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2,
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

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
};

enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class ERTPCValueType : uint8_t {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5,
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

enum class ETileSpawnPointType : uint8_t {
	Unspecified = 0,
	Survivor = 1,
	SurvivorItem = 2,
	Killer = 3,
	KillerItem = 4,
	InteractableObject = 5,
	Count = 6,
	ETileSpawnPointType_MAX = 7,
};

enum class EChainStrikeCameraViewTarget : uint8_t {
	Killer = 0,
	Gateway = 1,
	ControlledProjectile = 2,
	EChainStrikeCameraViewTarget_MAX = 3,
};

enum class EEventEffectTypes : uint8_t {
	Bloodpoints = 0,
	Experience = 1,
	RetentionRewards = 2,
	PromoPack = 3,
	EventItemsPack = 4,
	ProvingGroundCharacterRand = 5,
	ProvingGroundStore = 6,
	EEventEffectTypes_MAX = 7,
};

enum class ESubmixFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5,
};

enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

enum class EBloodStoreRowStyle : uint8_t {
	FiveItemRow = 0,
	ThreeItemRow = 1,
	EBloodStoreRowStyle_MAX = 2,
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

enum class ECharacterMovementTypes : uint8_t {
	Normal = 0,
	Run = 1,
	Crouch = 2,
	ECharacterMovementTypes_MAX = 3,
};

enum class EKnowledgeSharingType : uint8_t {
	Possessor = 0,
	Survivors = 1,
	Killers = 2,
	All = 3,
	EKnowledgeSharingType_MAX = 4,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class EMaterialShadingRate : uint8_t {
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_Count = 4,
	MSR_MAX = 5,
};

enum class ECustomMatchDifficulty : uint8_t {
	Easy = 0,
	Medium = 1,
	Hard = 2,
	Suggested = 3,
	Random = 4,
	None = 5,
	Max = 6,
	ECustomMatchDifficulty_MAX = 7,
};

enum class EAIDifficultyLevel : uint8_t {
	VeryEasy = 0,
	Easy = 1,
	Medium = 2,
	Hard = 3,
	Suggested = 4,
	Random = 5,
	None = 6,
	Max = 7,
	EAIDifficultyLevel_MAX = 8,
};

enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t {
	NoFilter = 0,
	SimpleSmoothing = 1,
	PredictiveSmoothing = 2,
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

enum class EStickerType : uint8_t {
	None = 0,
	Emoji = 1,
	Text = 2,
	EStickerType_MAX = 3,
};

enum class EMediaIOStandardType : uint8_t {
	Progressive = 0,
	Interlaced = 1,
	ProgressiveSegmentedFrame = 2,
	EMediaIOStandardType_MAX = 3,
};

enum class EDatasmithImportHierarchy : uint8_t {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3,
};

enum class ESingleHookState : uint8_t {
	EMPTY = 0,
	UNHOOKED = 1,
	HOOKED = 2,
	DISCONNECTED = 3,
	ESingleHookState_MAX = 4,
};

enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
	Field_Resolution_Max = 4,
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

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
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

enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

enum class EInertializationState : uint8_t {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3,
};

enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

enum class EPropertyAccessChangeNotifyMode : uint8_t {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
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

enum class ENiagaraExecutionStateSource : uint8_t {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class EAttackSubstate : uint8_t {
	VE_None = 0,
	VE_Open = 1,
	VE_Hitting = 2,
	VE_HitSucceed = 3,
	VE_HitMiss = 4,
	VE_HitObstructed = 5,
	VE_Done = 6,
	VE_MAX = 7,
};

enum class EArchivesTab : uint8_t {
	EventStory = 0,
	CurrentStory = 1,
	Rewards = 2,
	PastStories = 3,
	TabCount = 4,
	EArchivesTab_MAX = 5,
};

enum class EChatType : uint8_t {
	None = 0,
	PreGame = 1,
	PostGame = 2,
	Party = 3,
	EChatType_MAX = 4,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

enum class EHudStatusEffectAlertViewType : uint8_t {
	Unhandled = 0,
	Perk = 1,
	Item = 2,
	Addon = 3,
	EHudStatusEffectAlertViewType_MAX = 4,
};

enum class EBloodwebNodeGateTypes : uint8_t {
	RequiredRank = 0,
	RequiredItem = 1,
	Count = 2,
	EBloodwebNodeGateTypes_MAX = 3,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
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

enum class EImportanceWeight : uint8_t {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5,
};

enum class EMontageSubStepResult : uint8_t {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4,
};

enum class EPalletSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	EPalletSide_MAX = 3,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EApprovalAction : uint8_t {
	Approve = 0,
	Enqueue = 1,
	EnqueueAndStartBeacon = 2,
	Deny = 3,
	EApprovalAction_MAX = 4,
};

enum class EPromoPackContentType : uint8_t {
	None = 0,
	Item = 1,
	Addon = 2,
	Offering = 3,
	Character = 4,
	Customization = 5,
	Bonus = 6,
	BloodPoints = 7,
	IridescentShards = 8,
	FreeTicket = 9,
	Count = 10,
	EPromoPackContentType_MAX = 11,
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

enum class ECurveTableMode : uint8_t {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3,
};

enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

enum class EAltantaRitualUIType : uint8_t {
	Single = 0,
	Master = 1,
	Special = 2,
	EAltantaRitualUIType_MAX = 3,
};

enum class EChaosWeightMapTarget : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EChaosWeightMapTarget_MAX = 5,
};

enum class SettingsCategory : uint8_t {
	None = 0,
	General = 1,
	Graphics = 2,
	Audio = 3,
	Controls = 4,
	Atlanta = 5,
	SettingsCategory_MAX = 6,
};

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
};

enum class EMediaIOTransportType : uint8_t {
	SingleLink = 0,
	DualLink = 1,
	QuadLink = 2,
	HDMI = 3,
	EMediaIOTransportType_MAX = 4,
};

enum class EFindInteractableLockerStatusFilter : uint8_t {
	Empty = 0,
	Occupied = 1,
	Both = 2,
	EFindInteractableLockerStatusFilter_MAX = 3,
};

enum class EPathBuildResult : uint8_t {
	None = 0,
	Failed = 1,
	Succeeded = 2,
	Partial = 3,
	InProgress = 4,
	EPathBuildResult_MAX = 5,
};

enum class EAkHololensAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3,
};

enum class EApplicationState : uint8_t {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4,
};

enum class ELoadoutType : uint8_t {
	Item = 0,
	Perk = 1,
	Offering = 2,
	ELoadoutType_MAX = 3,
};

enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3,
};

enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
};

enum class ETunableComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	ETunableComparison_MAX = 6,
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

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	MAX = 2,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class EMediaIOReferenceType : uint8_t {
	FreeRun = 0,
	External = 1,
	Input = 2,
	EMediaIOReferenceType_MAX = 3,
};

enum class ERejoinStatus : uint8_t {
	NoMatchToRejoin = 0,
	RejoinAvailable = 1,
	UpdatingStatus = 2,
	NeedsRecheck = 3,
	NoMatchToRejoin_MatchEnded = 4,
	ERejoinStatus_MAX = 5,
};

enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5,
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

enum class EInputInteractionType : uint8_t {
	VE_None = 0,
	VE_Interact = 1,
	VE_AttackInteract = 2,
	VE_ItemInteract = 3,
	VE_Rush = 4,
	VE_Run = 5,
	VE_ItemUse = 6,
	VE_ItemDrop = 7,
	VE_InteractMash = 8,
	VE_LeftRightMash = 9,
	VE_ExternalRequestDrop = 10,
	VE_ExternalRequestFlashlightStunUncloak = 11,
	VE_ExternalRequestPalletStun = 12,
	VE_ExternalRequestStunUncloak = 13,
	VE_ExternalRequestPalletStunUncloak = 14,
	VE_ExternalRequestStun = 15,
	VE_ExternalRequestDropByStunning = 16,
	VE_ExternalRequestDropByStunningByPallet = 17,
	VE_ExternalRequestDropByWiggleFree = 18,
	VE_ExternalRequestDropBySkillCheck = 19,
	VE_ExternalRequestKillerCaughtInBearTrap = 20,
	VE_ExternalRequestDestroyWithPowerAttack = 21,
	VE_ExternalRequestHarpoonRifleStun = 22,
	VE_ExternalRequestGeneratorTrapStun = 23,
	VE_FastInteract = 24,
	VE_ExternalRequestSlashedOutOfTrap = 25,
	VE_ExternalRequestSacrifice = 26,
	VE_Gesture01 = 27,
	VE_Gesture02 = 28,
	VE_Gesture03 = 29,
	VE_Gesture04 = 30,
	VE_ExternalChainBlink = 31,
	VE_ExternalRequestStunEvilWithin = 32,
	VE_ExternalRequestKickStun = 33,
	VE_ExternalRequestEscape = 34,
	VE_Struggle = 35,
	VE_Action = 36,
	VE_ExternalRequestPutToSleepStun = 37,
	VE_Crouch = 38,
	VE_ExternalRequestRBTExecute = 39,
	VE_ActionKiller = 40,
	VE_ExternalRequestRBTExecuteAtExit = 41,
	VE_ExternalRequestStunBySkillCheck = 42,
	VE_AbilityUse = 43,
	VE_ExternalRequestClosetStun = 44,
	VE_ExternalRequestClosetExitFast = 45,
	VE_ActivatablePerk01 = 46,
	VE_ActivatablePerk02 = 47,
	VE_ActivatablePerk03 = 48,
	VE_ActivatablePerk04 = 49,
	VE_CancelCharge = 50,
	VE_WiggleLeft = 51,
	VE_WiggleRight = 52,
	VE_SecondaryAction = 53,
	VE_Count = 54,
	VE_MAX = 55,
};

enum class EPartyPlayerSlotWidgetState : uint8_t {
	None = 0,
	Empty = 1,
	NotReady = 2,
	Ready = 3,
	Hidden = 4,
	EPartyPlayerSlotWidgetState_MAX = 5,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
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

enum class EStorefrontState : uint8_t {
	None = 0,
	Character = 1,
	Currency = 2,
	Customization = 3,
	Featured = 4,
	PromoPacks = 5,
	ShrineOfSecrets = 6,
	Subscriptions = 7,
	LandingPage = 8,
	Count = 9,
	EStorefrontState_MAX = 10,
};

enum class EHealthStatus : uint8_t {
	Healthy = 0,
	Wounded = 1,
	DeepWounded = 2,
	Dying = 3,
	EHealthStatus_MAX = 4,
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

enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class EFindInteractableGeneratorStatusFilter : uint8_t {
	NeedRepair = 0,
	CanBeDamaged = 1,
	EFindInteractableGeneratorStatusFilter_MAX = 2,
};

enum class EProtagonist : uint8_t {
	Instigator = 0,
	Target = 1,
	EProtagonist_MAX = 2,
};

enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

enum class EQosDatacenterResult : uint8_t {
	Invalid = 0,
	Success = 1,
	Incomplete = 2,
	EQosDatacenterResult_MAX = 3,
};

enum class EClaimableInboxMessageState : uint8_t {
	NONE = 0,
	CLAIMED = 1,
	EClaimableInboxMessageState_MAX = 2,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
	VIS_Max = 4,
};

enum class ECustomMatchOptions : uint8_t {
	All = 0,
	None = 1,
	Owned = 2,
	Random = 3,
	Special = 4,
	Count = 5,
	ECustomMatchOptions_MAX = 6,
};

enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
};

enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
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

enum class EBloodwebNodeContentType : uint8_t {
	Empty = 0,
	Perks = 1,
	PerkBuffs_Do_Not_Use_Deprecated = 2,
	Offerings = 3,
	Items = 4,
	AddOn = 5,
	Chests = 6,
	PerksPacks = 7,
	IridiscentShards = 8,
	AuricCells = 9,
	SuperChests = 10,
	CosmeticItems = 11,
	Bloodpoints = 12,
	FreeTicket = 13,
	EntityBox = 14,
	Count = 15,
	EBloodwebNodeContentType_MAX = 16,
};

enum class EMagicLeapControllerLEDSpeed : uint8_t {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	EMagicLeapControllerLEDSpeed_MAX = 3,
};

enum class EClothingWindMethod_Legacy : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

enum class EGroupBoundaryConstraint : uint8_t {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EGroupBoundaryConstraint_MAX = 4,
};

enum class EAnimInterpolationType : uint8_t {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2,
};

enum class EBreakableState : uint8_t {
	Unbroken = 0,
	Broken = 1,
	EBreakableState_MAX = 2,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class EInventoryType : uint8_t {
	Main = 0,
	Backpack = 1,
	EInventoryType_MAX = 2,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class EQuadDirection : uint8_t {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	Empty = 5,
	EQuadDirection_MAX = 6,
};

enum class EFiniteStateMachineStatus : uint8_t {
	Stopped = 0,
	Running = 1,
	Paused = 2,
	EFiniteStateMachineStatus_MAX = 3,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

enum class ELocationStaticVertSurfaceSource : uint8_t {
	STATICVERTSURFACESOURCE_Vert = 0,
	STATICVERTSURFACESOURCE_Surface = 1,
	STATICsVERTSURFACESOURCE_MAX = 2,
	ELocationStaticVertSurfaceSource_MAX = 3,
};

enum class EMakeMeshPivotLocation : uint8_t {
	Base = 0,
	Centered = 1,
	Top = 2,
	EMakeMeshPivotLocation_MAX = 3,
};

enum class DBDScalabilityLevel : uint8_t {
	LOW = 0,
	MEDIUM = 1,
	HIGH = 2,
	EPIC = 3,
	ULTRA = 4,
	DBDScalabilityLevel_MAX = 5,
};

enum class EClothMassMode : uint8_t {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3,
};

enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
};

enum class ESetMeshMaterialMode : uint8_t {
	KeepOriginal = 0,
	Checkerboard = 1,
	Override = 2,
	ESetMeshMaterialMode_MAX = 3,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

enum class EGameplayElementType : uint8_t {
	Generic = 0,
	MeatLocker_Small = 1,
	TileLights = 2,
	MeatLocker_Big = 3,
	Searchable = 4,
	EdgeObjects = 5,
	LivingWorldObjects = 6,
	Hatch = 7,
	Bookshelves = 8,
	Totems = 9,
	QuadrantSpawn = 10,
	EdgeObjectsBlocker = 11,
	BreakableWalls = 12,
	Escape = 13,
	Count = 14,
	EGameplayElementType_MAX = 15,
};

enum class ESceneSnapQueryTargetType : uint8_t {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 3,
	All = 4,
	ESceneSnapQueryTargetType_MAX = 5,
};

enum class ELuminComponentType : uint8_t {
	Universe = 0,
	Fullscreen = 1,
	SearchProvider = 2,
	MusicService = 3,
	Screens = 4,
	ScreensImmersive = 5,
	Console = 6,
	SystemUI = 7,
	ELuminComponentType_MAX = 8,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EUIFlowEvent : uint8_t {
	None = 0,
	AtlantaRoleSelectionScreenReady = 1,
	AtlantaNavigationScreenReady = 2,
	InGameHudReady = 3,
	LoadingScreenReady = 4,
	OfflineLobbyScreenReady = 5,
	OnlineLobbyScreenReady = 6,
	RoleSelectionScreenReady = 7,
	SplashScreenReady = 8,
	TallyScreenReady = 9,
	PartyLobbyScreenReady = 10,
	StoreScreenReady = 11,
	EUIFlowEvent_MAX = 12,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

enum class ELightmapGenerationMode : uint8_t {
	Default = 0,
	SharedLOD0 = 1,
	UseSizeFromGeneratedUV = 2,
	DivideByTwoEveryLOD = 3,
	ELightmapGenerationMode_MAX = 4,
};

enum class EItemRarity : uint8_t {
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	VeryRare = 3,
	UltraRare = 4,
	Artifact = 5,
	Spectral = 6,
	Teachable = 7,
	SpecialEvent = 8,
	Legendary = 9,
	Epic = 10,
	SuperEpic = 11,
	UltraEpic = 12,
	Count = 13,
	None = 14,
	EItemRarity_MAX = 15,
};

enum class EPlayerStatus : uint8_t {
	Default = 0,
	Hook = 1,
	Trap = 2,
	Dead = 3,
	Escaped = 4,
	Injured = 5,
	Crawling = 6,
	Sacrificed = 7,
	Disconnected = 8,
	InDeathBed = 9,
	EPlayerStatus_MAX = 10,
};

enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class EArm : uint8_t {
	Left = 0,
	Right = 1,
	EArm_MAX = 2,
};

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
};

enum class ENiagaraSortMode : uint8_t {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

enum class EVectorVMBaseTypes : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t {
	NoFilter = 0,
	SlightRobustnessToFlicker = 1,
	MoreRobustnessToFlicker = 2,
	EMagicLeapHandTrackingGestureFilterLevel_MAX = 3,
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

enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
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
	Chaos_Max = 9,
};

enum class EQosCompletionResult : uint8_t {
	Invalid = 0,
	Success = 1,
	Failure = 2,
	Canceled = 3,
	EQosCompletionResult_MAX = 4,
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
	NotImplemented = 9,
	PinNotFound = 10,
	EMagicLeapPassableWorldError_MAX = 11,
};

enum class EInteractionSkillInputModes : uint8_t {
	Once = 0,
	Hold = 1,
	Toggle = 2,
	ToggleHold = 3,
	OneClickHold = 4,
	EInteractionSkillInputModes_MAX = 5,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
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

enum class EOverlayTabs : uint8_t {
	Settings = 0,
	Controls = 1,
	Help = 2,
	Survivors = 3,
	CoreTabCount = 4,
	About = 5,
	Language = 6,
	EOverlayTabs_MAX = 7,
};

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
};

enum class EPatchCheckResult : uint8_t {
	NoPatchRequired = 0,
	PatchRequired = 1,
	NoLoggedInUser = 2,
	PatchCheckFailure = 3,
	EPatchCheckResult_MAX = 4,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EMagicLeapMeshState : uint8_t {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EMobileLoginAuthContext : uint8_t {
	Splash = 0,
	OverlayMenu = 1,
	ResumeFromSuspend = 2,
	EMobileLoginAuthContext_MAX = 3,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class EInboxMessageUIState : uint8_t {
	New = 0,
	Read = 1,
	Archived = 2,
	EInboxMessageUIState_MAX = 3,
};

enum class ELocalFrameMode : uint8_t {
	FromObject = 0,
	FromGeometry = 1,
	ELocalFrameMode_MAX = 2,
};

enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 3,
	Unknown = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5,
};

enum class EChannelMaskParameterColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class EFindInteractorOpenConditions : uint8_t {
	AllGate_OpenedHatch = 0,
	All = 1,
	ClosedOnly = 2,
	OpenedOnly = 3,
	EFindInteractorOpenConditions_MAX = 4,
};

enum class EFindInteractablePalletIntentions : uint8_t {
	Fall = 0,
	Raise = 1,
	EFindInteractablePalletIntentions_MAX = 2,
};

enum class ELeanState : uint8_t {
	NotLeaning = 0,
	LeanLeft = 1,
	LeanRight = 2,
	ELeanState_MAX = 3,
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

enum class ETileVariation : uint8_t {
	None = 0,
	BlueTag = 1,
	PinkTag = 2,
	YellowTag = 3,
	GreenTag = 4,
	Empty = 5,
	ETileVariation_MAX = 6,
};

enum class ESlasherGuidedAction : uint8_t {
	VE_None = 0,
	VE_Hooking = 1,
	VE_PickingUp = 2,
	VE_PuttingDown = 3,
	VE_MAX = 4,
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

enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

enum class ETimedDataInputEvaluationType : uint8_t {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

enum class ECollectableState : uint8_t {
	OnGround = 0,
	Stored = 1,
	Equipped = 2,
	ToBeDropped = 3,
	InSearchable = 4,
	ECollectableState_MAX = 5,
};

enum class ELevelBuildingState : uint8_t {
	NotInitialized = 0,
	WaitingForInitialSync = 1,
	SyncSeeds = 2,
	GetAvailableItems = 3,
	PendingGettingItems = 4,
	GettingLevelsDone = 5,
	PendingPremadeMapStreaming = 6,
	GetThemedTiles = 7,
	PendingGettingTiles = 8,
	SpawnRequiredTiles = 9,
	SpawningLevelTiles = 10,
	SpawnInterTileElements = 11,
	PendingInterTileElementsSpawning = 12,
	SpawningActors = 13,
	SpawningMultiPassActors = 14,
	StallingForRemotes = 15,
	BuildingDone = 16,
	BuildingStateCount = 17,
	ELevelBuildingState_MAX = 18,
};

enum class ETutorialStep : uint8_t {
	Survivor_NotStarted = 0,
	Survivor_CompleteGenerator = 1,
	Survivor_EvadeKiller = 2,
	Survivor_OnHook = 3,
	Done = 4,
	Invalid = 5,
	ETutorialStep_MAX = 6,
};

enum class EBloodchestType : uint8_t {
	None = 0,
	Chest = 1,
	SuperChests = 2,
	EntityBox = 3,
	EBloodchestType_MAX = 4,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

enum class EDatasmithImportScene : uint8_t {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3,
};

enum class EWeightMapTargetCommon : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5,
};

enum class EEndGameScenarioTrigger : uint8_t {
	ClosedHatch = 0,
	OpenedGate = 1,
	CheatUsed = 2,
	NotActivated = 3,
	EEndGameScenarioTrigger_MAX = 4,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class EAkCommSystem : uint8_t {
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class ECamperImmobilizeState : uint8_t {
	VE_None = 0,
	VE_Hooked = 1,
	VE_Trapped = 2,
	VE_Hiding = 3,
	VE_Dead = 4,
	VE_InDeathBed = 5,
	VE_MAX = 6,
};

enum class EAkAndroidAudioAPI : uint8_t {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2,
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

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class ECopyType : uint8_t {
	PlainProperty = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	NameProperty = 4,
	ECopyType_MAX = 5,
};

enum class EFlurryOfKnivesInteractionState : uint8_t {
	Charging = 0,
	Aiming = 1,
	Throwing = 2,
	Finished = 3,
	EFlurryOfKnivesInteractionState_MAX = 4,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class EAtlantaTutorialRewardPopupState : uint8_t {
	Starting = 0,
	Skipped = 1,
	Done = 2,
	EAtlantaTutorialRewardPopupState_MAX = 3,
};

enum class EInteractionOwnership : uint8_t {
	AnyCanUse = 0,
	OnlyOwnerCanUse = 1,
	OwnerCannotUse = 2,
	EInteractionOwnership_MAX = 3,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class ETextBannerPosition : uint8_t {
	TopLeft = 0,
	MiddleLeft = 1,
	BottomLeft = 2,
	MiddleRight = 3,
	BottomRight = 4,
	TopCenter = 5,
	MiddleCenter = 6,
	BottomCenter = 7,
	ETextBannerPosition_MAX = 8,
};

enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
	Chaos_Max = 4,
};

enum class EControlMode : uint8_t {
	MOUSE_KB = 0,
	XBOX = 1,
	PS = 2,
	VITA = 3,
	SWITCH = 4,
	STADIA = 5,
	SWITCH_PRO = 6,
	ATLANTA = 7,
	UNDEFINED = 8,
	EControlMode_MAX = 9,
};

enum class ELamentConfigurationState : uint8_t {
	SurvivorEscapedWithLamentConfiguration = 0,
	WaitingToSpawn = 1,
	Spawned = 2,
	IsBeingPickedUp = 3,
	CarriedBySurvivor = 4,
	HoldingSurvivorHostage = 5,
	ELamentConfigurationState_MAX = 6,
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

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
	ESoundwaveSampleRateSettings_MAX = 6,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
};

enum class ERemeshSmoothingType : uint8_t {
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3,
};

enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
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

enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
};

enum class EDrawPolyPathHeightMode : uint8_t {
	Interactive = 0,
	Constant = 1,
	EDrawPolyPathHeightMode_MAX = 2,
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

enum class EProviderFlag : uint8_t {
	None = 0,
	Google = 1,
	DMM = 2,
	Facebook = 3,
	Nintendo = 4,
	PSN = 5,
	Steam = 6,
	WinGDK = 7,
	Xbox = 8,
	Apple = 9,
	Kraken = 10,
	Stadia = 11,
	GAS3 = 12,
	Epic = 13,
	EProviderFlag_MAX = 14,
};

enum class EDesiredImageFormat : uint8_t {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4,
};

enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels_MAX = 5,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class EFireHarpoonRifleAimingInteractionSubState : uint8_t {
	None = 0,
	Warmup = 1,
	ReadyToShoot = 2,
	Cooldown = 3,
	EFireHarpoonRifleAimingInteractionSubState_MAX = 4,
};

enum class ERichCurveCompressionFormat : uint8_t {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_MAX = 5,
};

enum class EDrawPolyPathOutputMode : uint8_t {
	Ribbon = 0,
	Extrusion = 1,
	Ramp = 2,
	EDrawPolyPathOutputMode_MAX = 3,
};

enum class ENiagaraRibbonTessellationMode : uint8_t {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class EVisibleMenuActorType : uint8_t {
	None = 0,
	Pawn = 1,
	Hook = 2,
	Charm = 3,
	EVisibleMenuActorType_MAX = 4,
};

enum class EAIRepairGeneratorState : uint8_t {
	FindAvailableGeneratorPosition = 0,
	WalkToGenerator = 1,
	RotateTowardsGenerator = 2,
	BeginGeneratorRepairs = 3,
	RepairingGenerator = 4,
	EAIRepairGeneratorState_MAX = 5,
};

enum class EARTrackingQualityReason : uint8_t {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	EARTrackingQualityReason_MAX = 5,
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

enum class EHatchState : uint8_t {
	Hidden = 0,
	DefaultClose = 1,
	Opened = 2,
	ForcedClose = 3,
	EHatchState_MAX = 4,
};

enum class ESaveGameErrorCategory : uint8_t {
	EvaluateDisconnectPenalty = 0,
	SaveGameSaveError = 1,
	SaveGameUnreadable = 2,
	SaveGameValidation = 3,
	SaveFailed = 4,
	ESaveGameErrorCategory_MAX = 5,
};

enum class EKillerMoodInfluence : uint8_t {
	VE_None = 0,
	VE_Chuckles = 1,
	VE_Banshee = 2,
	VE_Hillbilly = 3,
	VE_Nurse = 4,
	VE_Shape = 5,
	VE_MAX = 6,
};

enum class EBarColor : uint8_t {
	Default = 0,
	Yellow = 1,
	Red = 2,
	EBarColor_MAX = 3,
};

enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
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

enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class EGameplayMode : uint8_t {
	Ranked = 0,
	TrainingVersusBots = 1,
	CustomGame = 2,
	None = 3,
	EGameplayMode_MAX = 4,
};

enum class ETileType : uint8_t {
	None = 0,
	Blocker = 1,
	Any = 2,
	Forest = 3,
	Building = 4,
	Maze = 5,
	Landmark = 6,
	Signature = 7,
	ETileType_MAX = 8,
};

enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

enum class EDebugTypeEnum : uint8_t {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3,
	ChaosNiagara_Max = 4,
};

enum class ESubmixSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
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

enum class EMagicLeapEyeTrackingStatus : uint8_t {
	NotConnected = 0,
	Disabled = 1,
	UserNotPresent = 2,
	UserPresent = 3,
	UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5,
};

enum class EKillerAbilities : uint8_t {
	VE_None = 0,
	VE_SpawnTraps = 1,
	VE_Cloak = 2,
	VE_Chainsaw = 3,
	VE_Blink = 4,
	VE_PhantomTrap = 5,
	VE_Stalker = 6,
	VE_Killer07Ability = 7,
	VE_Killer08Ability = 8,
	VE_LFChainsaw = 9,
	VE_InduceDreams = 10,
	VE_ReverseBearTrap = 11,
	VE_GasBomb = 12,
	VE_PhaseWalk = 13,
	VE_Frenzy = 14,
	VE_Vomit = 15,
	VE_GhostStalker = 16,
	VE_GroundPortals = 17,
	VE_DemonMode = 18,
	VE_HarpoonRifle = 19,
	VE_TormentMode = 20,
	VE_K21Power = 21,
	VE_K22Power = 22,
	VE_ThrowingKnives = 23,
	VE_K24Power = 24,
	VE_Zombies = 25,
	VE_K25Power = 26,
	VE_K26Power = 27,
	VE_MAX = 28,
};

enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

enum class SettingsType : uint8_t {
	None = 0,
	Button = 1,
	PlayerId = 2,
	NumericStepper = 3,
	Dropdown = 4,
	ColorBar = 5,
	TextStepper = 6,
	BoolTextStepper = 7,
	Checkbox = 8,
	SettingsType_MAX = 9,
};

enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
	Chaos_Max = 2,
};

enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

enum class ENiagaraScalabilityUpdateFrequency : uint8_t {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class EPrimaryAssetCookRule : uint8_t {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5,
};

enum class EAkAudioSessionCategoryOptions : uint8_t {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
};

enum class ESurvivorGrouping : uint8_t {
	Invalid = 0,
	Separated = 1,
	Grouped2_3 = 2,
	Grouped3_2 = 3,
	Grouped4_1 = 4,
	ESurvivorGrouping_MAX = 5,
};

enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EPromptType : uint8_t {
	None = 0,
	ExitsPowered = 1,
	HatchSpawned = 2,
	HatchOpened = 3,
	EPromptType_MAX = 4,
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

enum class EPawnActionEventType : uint8_t {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6,
};

enum class EKillerTutorialSections : uint8_t {
	Intro = 0,
	Chase = 1,
	Escape = 2,
	EKillerTutorialSections_MAX = 3,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class EMagicLeapHeadTrackingMapEvent : uint8_t {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
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

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
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

enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
};

enum class EStoreState : uint8_t {
	None = 0,
	Featured = 1,
	CharacterSelection = 2,
	CharacterStory = 3,
	CharacterCatalog = 4,
	BuyCurrency = 5,
	ShrineOfSecrets = 6,
	EStoreState_MAX = 7,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3,
};

enum class EInteractionTargetRequirements : uint8_t {
	BestTargetMustBeValid = 0,
	AnyValidTarget = 1,
	AnyTarget = 2,
	NoTarget = 3,
	None = 4,
	EInteractionTargetRequirements_MAX = 5,
};

enum class EAIInvestigateSteps : uint8_t {
	None = 0,
	ToInvestigation = 1,
	Investigating = 2,
	EAIInvestigateSteps_MAX = 3,
};

enum class EChainStrikeEndReason : uint8_t {
	None = 0,
	AbortedGatewayPlacementState = 1,
	AbortedGatewayPlacementBecauseOfInvalidPlacementState = 2,
	AbortedGatewayPossession = 3,
	ControlledProjectileStopped = 4,
	EChainStrikeEndReason_MAX = 5,
};

enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4,
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

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
	EFrictionCombineMode_MAX = 4,
};

enum class EPalletState : uint8_t {
	Up = 0,
	Falling = 1,
	Fallen = 2,
	Destroyed = 3,
	Illusionary = 4,
	EPalletState_MAX = 5,
};

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
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

enum class EDBDInputMode : uint8_t {
	None = 0,
	Scaleform = 1,
	UMG = 2,
	Game = 3,
	EDBDInputMode_MAX = 4,
};

enum class ELobbyState : uint8_t {
	Searching = 0,
	Joined = 1,
	Offering = 2,
	Fog = 3,
	ELobbyState_MAX = 4,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class ESlasherMatchResultScore : uint8_t {
	DisgracefulDefeat = 0,
	EntityDispleased = 1,
	BrutalKiller = 2,
	RuthlessKiller = 3,
	MercilessKiller = 4,
	ESlasherMatchResultScore_MAX = 5,
};

enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
};

enum class EDynamicMeshTangentCalcType : uint8_t {
	NoTangents = 0,
	AutoCalculated = 1,
	ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType_MAX = 3,
};

enum class EMakeMeshPlacementType : uint8_t {
	GroundPlane = 0,
	OnScene = 1,
	EMakeMeshPlacementType_MAX = 2,
};

enum class ENiagaraAgeUpdateMode : uint8_t {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3,
};

enum class EMultiBoxType : uint8_t {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	ToolMenuBar = 6,
	EMultiBoxType_MAX = 7,
};

enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

enum class EMagicLeapGestureTransformSpace : uint8_t {
	World = 0,
	Hand = 1,
	Tracking = 2,
	EMagicLeapGestureTransformSpace_MAX = 3,
};

enum class FlashTextureRescale : uint8_t {
	FlashTextureScale_High = 0,
	FlashTextureScale_Low = 1,
	FlashTextureScale_NextLow = 2,
	FlashTextureScale_Mult4 = 3,
	FlashTextureScale_None = 4,
	FlashTextureScale_MAX = 5,
};

enum class EAttackSuccess : uint8_t {
	VE_None = 0,
	VE_Success = 1,
	VE_Failure = 2,
	VE_Obstructed = 3,
	VE_MAX = 4,
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

enum class EOverlayMode : uint8_t {
	Default = 0,
	TrialOrTally = 1,
	TutorialLevel = 2,
	TutorialBotMatch = 3,
	EOverlayMode_MAX = 4,
};

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ECrossplayPreference : uint8_t {
	NoSelection = 0,
	OptedIn = 1,
	OptedOut = 2,
	OptedOutRestricted = 3,
	ECrossplayPreference_MAX = 4,
};

enum class EConditionSubject : uint8_t {
	Instigator = 0,
	Target = 1,
	EConditionSubject_MAX = 2,
};

enum class ENiagaraMeshFacingMode : uint8_t {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4,
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

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class EProceduralDebugMode : uint8_t {
	None = 0,
	NoMap = 1,
	TilesSmall = 2,
	TilesBig = 3,
	Count = 4,
	EProceduralDebugMode_MAX = 5,
};

enum class EArmIkMode : uint8_t {
	None = 0,
	BothHand = 1,
	OnlyRight = 2,
	OnlyLeft = 3,
	OneHandAtTime = 4,
	BothAtSameTime = 5,
	EArmIkMode_MAX = 6,
};

enum class EMediaIOQuadLinkTransportType : uint8_t {
	SquareDivision = 0,
	TwoSampleInterleave = 1,
	EMediaIOQuadLinkTransportType_MAX = 2,
};

enum class EBloodwebFillingMethod : uint8_t {
	RestrictionsBasedOnData = 0,
	FillAll = 1,
	EBloodwebFillingMethod_MAX = 2,
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

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
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

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
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

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
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
	COND_Max = 16,
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

enum class EChaosCollisionSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6,
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

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
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

enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
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

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class EPlaneBrushSideMode : uint8_t {
	BothSides = 0,
	PushDown = 1,
	PullTowards = 2,
	EPlaneBrushSideMode_MAX = 3,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
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

enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3,
};

enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
};

enum class EManualZoomType : uint8_t {
	None = 0,
	TargetZoomValue = 1,
	CurveFloatProgression = 2,
	EManualZoomType_MAX = 3,
};

enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
};

enum class ESnapBackType : uint8_t {
	None = 0,
	Always = 1,
	OnInteractionCancelledOnly = 2,
	OnInteractionEndOnly = 3,
	OnSurvivorDownedOnly = 4,
	ESnapBackType_MAX = 5,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EScriptExecutionMode : uint8_t {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3,
};

enum class EHudScreenIndicatorType : uint8_t {
	None = 0,
	LoudNoise = 1,
	StealthBroken = 2,
	Objective = 3,
	EHudScreenIndicatorType_MAX = 4,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
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

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
};

enum class ECustomMatchTab : uint8_t {
	Perks = 0,
	ItemsAndAddons = 1,
	Offerings = 2,
	Maps = 3,
	BotDifficulty = 4,
	BotCharacter = 5,
	Count = 6,
	ECustomMatchTab_MAX = 7,
};

enum class EFindInteractableCamperFilter : uint8_t {
	Crawling = 0,
	Standing = 1,
	GiveHelp = 2,
	RequestHelp = 3,
	RescuableBeingCarried = 4,
	EFindInteractableCamperFilter_MAX = 5,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EHitValidatorConfigName : uint8_t {
	Default = 0,
	Hatchet = 1,
	Bomb = 2,
	Harpoon = 3,
	Oni = 4,
	Whip = 5,
	DefaultProjectile = 6,
	EHitValidatorConfigName_MAX = 7,
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

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class EDoctorAbilityPhase : uint8_t {
	VE_Charging = 0,
	VE_Firing = 1,
	VE_None = 2,
	VE_MAX = 3,
};

enum class GFxHitTestType : uint8_t {
	HitTest_Bounds = 0,
	HitTest_Shapes = 1,
	HitTest_ButtonEvents = 2,
	HitTest_ShapesNoInvisible = 3,
	HitTest_MAX = 4,
};

enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class EInteractionLayer : uint8_t {
	VE_Camper = 0,
	VE_Slasher = 1,
	VE_MAX = 2,
};

enum class EAIEvadeLoopSides : uint8_t {
	Left = 0,
	Right = 1,
	Count = 2,
	EAIEvadeLoopSides_MAX = 3,
};

enum class EFreeTicketButtonState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	InEffect = 2,
	None = 3,
	EFreeTicketButtonState_MAX = 4,
};

enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
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

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
};

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class EProgressModifier : uint8_t {
	Default = 0,
	Buff = 1,
	Debuff = 2,
	EProgressModifier_MAX = 3,
};

enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
};

enum class EInputCaptureSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 4,
	EInputCaptureSide_MAX = 5,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class ELuminARTrackingState : uint8_t {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3,
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

enum class EEditPivotSnapDragRotationMode : uint8_t {
	Ignore = 0,
	Align = 1,
	AlignFlipped = 2,
	LastValue = 3,
	EEditPivotSnapDragRotationMode_MAX = 4,
};

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
};

enum class EOfferingType : uint8_t {
	None = 0,
	Atmosphere = 1,
	Lighting = 2,
	Points = 3,
	Zone = 4,
	Position = 5,
	Chest = 6,
	Hook = 7,
	Protection = 8,
	Hatch = 9,
	Odds = 10,
	Killing = 11,
	World = 12,
	Luck = 13,
	Killer = 14,
	ProceduralGeneration = 15,
	CharacterXP = 16,
	Count = 17,
	EOfferingType_MAX = 18,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
};

enum class EGameState : uint8_t {
	VE_Active = 0,
	VE_Dead = 1,
	VE_Escaped = 2,
	VE_EscapedInjured = 3,
	VE_Sacrificed = 4,
	VE_None = 5,
	VE_Disconnected = 6,
	VE_ManuallyLeftMatch = 7,
	VE_MAX = 8,
};

enum class EPlayerTeam : uint8_t {
	VE_None = 0,
	VE_Killer = 1,
	VE_Survivor = 2,
	VE_MAX = 3,
};

enum class ESicknessLevel : uint8_t {
	Off = 0,
	InProgress = 1,
	Full = 2,
	ESicknessLevel_MAX = 3,
};

enum class EHarpoonPositionState : uint8_t {
	None = 0,
	LoadedInRifle = 1,
	FollowingProjectile = 2,
	ReelBackToRifle = 3,
	AttachedToPlayer = 4,
	Animated = 5,
	EHarpoonPositionState_MAX = 6,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
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

enum class ESnowmanDestructionType : uint8_t {
	None = 0,
	SurvivorRunExit = 1,
	KillerAttackWhileControlled = 2,
	KillerAttackWhileEmpty = 3,
	ESnowmanDestructionType_MAX = 4,
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

enum class AkMeshType : uint8_t {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2,
};

enum class EUIControllerType : uint8_t {
	KeyboardMouse = 0,
	GamePad = 1,
	EUIControllerType_MAX = 2,
};

enum class EDBDAnalyticsGameMode : uint8_t {
	AnalyticsServer = 0,
	AnalyticsClient = 1,
	AnalyticsLoading = 2,
	AnalyticsLobby = 3,
	AnalyticsMenu = 4,
	AnalyticsPostGame = 5,
	AnalyticsPerfTests = 6,
	AnalyticsSplashScreen = 7,
	EDBDAnalyticsGameMode_MAX = 8,
};

enum class EventCountComparisonOperator : uint8_t {
	EqualTo = 0,
	GreaterThan = 1,
	GreaterThanEqualTo = 2,
	LessThan = 3,
	LessThanEqualTo = 4,
	EventCountComparisonOperator_MAX = 5,
};

enum class EPSCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5,
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

enum class EInteractionCancelInputModes : uint8_t {
	PressCancelInput = 0,
	InvertWithStopInputFlow = 1,
	EInteractionCancelInputModes_MAX = 2,
};

enum class EOnlineMessageFlag : uint8_t {
	New = 0,
	Read = 1,
	Archived = 2,
	EOnlineMessageFlag_MAX = 3,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class EPlayerAnimState : uint8_t {
	VE_Default = 0,
	VE_Injured = 1,
	VE_InjuredCrouch = 2,
	VE_Crouch = 3,
	VE_MAX = 4,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
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

enum class ENiagaraRibbonAgeOffsetMode : uint8_t {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class EErrorCodes : uint8_t {
	None = 0,
	SavefileDeserializationFailure = 1,
	SavefileDecryptionFailure = 2,
	SavefileEmpty = 3,
	SavefileBadPlayerId = 4,
	SavefileEmptyPlayerUID = 5,
	SavefileInvalidUniqueNetID = 6,
	SavefileInvalidPlayerState = 7,
	SavefileBackendError = 8,
	KrakenRankError = 9,
	KrakenRatingsError = 10,
	SavefileKrakenPlayerForbidden = 11,
	SyncCachedCurrencyError = 12,
	CurrencyTransactionError = 13,
	StateDownloadFailed = 14,
	StatcacheDecryptionFailed = 15,
	SavefilePlayerLoadUIDMismatch = 16,
	SavefilePlayerStateUIDMismatch = 17,
	SavefileEncryptionFailure = 18,
	SaveFailedInvalidData = 19,
	SaveFailedInvalidJSON = 20,
	SaveFailedDecodeDataString = 21,
	SaveFailedCompressDataString = 22,
	SaveFailedEncryptString = 23,
	StatcacheEncryptionFailed = 24,
	SaveFailedCloudErrorTimeout = 25,
	JsonToPersistenDataFailed = 26,
	SaveFailedCloudErrorAfterRetries = 27,
	StateUploadFailed = 28,
	GetPlayerLevelRequestError = 29,
	EarnPlayerXpRequestError = 30,
	EarnPlayerXpParamError = 31,
	OnboardingFailGet = 32,
	OnboardingFailUpdate = 33,
	OnboardingFailRequest = 34,
	MatchCancelledPlayerLeftDuringLoading = 35,
	MatchCancelledInvalidPlayerRoles = 36,
	MatchCancelledLoadingTimeout = 37,
	EErrorCodes_MAX = 38,
};

enum class EUVProjectionMethod : uint8_t {
	Cube = 0,
	Cylinder = 1,
	Plane = 2,
	EUVProjectionMethod_MAX = 3,
};

enum class EFriendContainerType : uint8_t {
	Connected = 0,
	Disconnected = 1,
	PendingSentRequest = 2,
	RecentlyPlayed = 3,
	SocialSuggestions = 4,
	PendingReceivedRequest = 5,
	QueriedPlayer = 6,
	Unknown = 7,
	EFriendContainerType_MAX = 8,
};

enum class EEditorCollectionType : uint8_t {
	Animation = 0,
	BlendSpace = 1,
	Selector = 2,
	EEditorCollectionType_MAX = 3,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4,
};

enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t {
	None = 0,
	Bad = 1,
	Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2,
};

enum class EPromptPriority : uint8_t {
	Tutorial = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	EPromptPriority_MAX = 4,
};

enum class EPlatformIconDisplayRule : uint8_t {
	Always = 0,
	AlwaysIfDifferent = 1,
	AlwaysWhenInCrossplayParty = 2,
	AlwaysIfDifferentWhenInCrossplayParty = 3,
	Never = 4,
	EPlatformIconDisplayRule_MAX = 5,
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

enum class RealCaseGapEnum : uint8_t {
	None = 0,
	SavefileDeserializationFailure = 1,
	EarnPlayerXpParamError = 2,
	RealCaseGapEnum_MAX = 3,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
};

enum class EStatusEffectType : uint8_t {
	None = 0,
	Buff = 1,
	Debuff = 2,
	EStatusEffectType_MAX = 3,
};

enum class ESecondWindState : uint8_t {
	Loading = 0,
	Locked = 1,
	Available = 2,
	InUse = 3,
	ESecondWindState_MAX = 4,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class EOverlayButtonOptions : uint8_t {
	HIDDEN = 0,
	DISABLED = 1,
	ENABLED = 2,
	EOverlayButtonOptions_MAX = 3,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

enum class EJoinPartyMethod : uint8_t {
	None = 0,
	PlatformInvitation = 1,
	InGameInvitation = 2,
	JoinRequest = 3,
	EJoinPartyMethod_MAX = 4,
};

enum class EConvertToPolygonsMode : uint8_t {
	FaceNormalDeviation = 0,
	FromUVISlands = 1,
	EConvertToPolygonsMode_MAX = 2,
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

enum class ENiagaraCollisionMode : uint8_t {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4,
};

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

enum class EBlindType : uint8_t {
	VE_None = 0,
	VE_Flashlight = 1,
	VE_SacrificeSuspended = 2,
	VE_Firecracker = 3,
	VE_MAX = 4,
};

enum class EMediaIOOutputType : uint8_t {
	Fill = 0,
	FillAndKey = 1,
	EMediaIOOutputType_MAX = 2,
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
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8,
};

enum class EOnlineOperation : uint8_t {
	None = 0,
	HostGame = 1,
	EndingSession = 2,
	DestroyingSession = 3,
	PreparingJoinGame = 4,
	JoinGame = 5,
	JoinCancelled = 6,
	OnlineCheck = 7,
	CancellingMatchmaking = 8,
	EOnlineOperation_MAX = 9,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

