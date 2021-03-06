// Created by BlueFire1337
// Updated 2022-01-13
// Generated 2022-02-02

#pragma once

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
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

enum class EBotInteractType : uint8_t {
	Usable = 0,
	ItemUseOn = 1,
	ItemUseOnDefib = 2,
	Count = 3,
	EBotInteractType_MAX = 4,
};

enum class EImpactNewQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	Cull = 5,
	EImpactNewQuality_MAX = 6,
};

enum class EARLineTraceChannels : uint8_t {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 3,
	PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels_MAX = 5,
};

enum class EGameplayContainerMatchType : uint8_t {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EItemFilter : uint8_t {
	All = 0,
	Equipped = 1,
	PrimaryWeapons = 2,
	SecondaryWeapons = 3,
	WeaponAttachments = 4,
	Consumables = 5,
	Perks = 6,
	EItemFilter_MAX = 7,
};

enum class Melee_Health_ENUM : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	Melee_Health_MAX = 2,
};

enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2,
};

enum class ESettingsDOF : uint8_t {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4,
};

enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

enum class EColorTableSource : uint8_t {
	DefaultColor = 0,
	ProtColor = 1,
	DeutColor = 2,
	TritColor = 3,
	EColorTableSource_MAX = 4,
};

enum class ENodeAdvancedPins : uint8_t {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3,
};

enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2,
};

enum class AudioSinkChannelConfigurations : uint8_t {
	Mono = 0,
	Stereo = 1,
	FivePointOneSMPTEOrder = 2,
	FivePointOneFilmOrder = 3,
	SevenPointOneSMPTEOrder = 4,
	SevenPointOneFilmOrder = 5,
	AudioSinkChannelConfigurations_MAX = 6,
};

enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3,
};

enum class EDamageTargetTracking : uint8_t {
	FriendlyHuman = 0,
	EnemyHuman = 1,
	CommonZombie = 2,
	SpecialZombie = 3,
	Other = 4,
	EDamageTargetTracking_MAX = 5,
};

enum class EObservationTick : uint8_t {
	Server = 0,
	Client = 1,
	Both = 2,
	EObservationTick_MAX = 3,
};

enum class EPostRoundPanel : uint8_t {
	Splash = 0,
	Holdout = 1,
	Lineup = 2,
	Stats = 3,
	PvPStats = 4,
	Challenge = 5,
	FinalScores = 6,
	Summary = 7,
	SwitchingSides = 8,
	EPostRoundPanel_MAX = 9,
};

enum class EBitmapHeaderVersion : uint8_t {
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5,
};

enum class ENiagaraSortMode : uint8_t {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5,
};

enum class EARCandidateImageOrientation : uint8_t {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EAkDiffractionFlags : uint8_t {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 2,
	EAkDiffractionFlags_MAX = 3,
};

enum class EItemTargetAffectsRange : uint8_t {
	Single = 0,
	AoE = 1,
	Count = 2,
	EItemTargetAffectsRange_MAX = 3,
};

enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
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

enum class EARFaceTrackingUpdate : uint8_t {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2,
};

enum class EGameCoachTargetType : uint8_t {
	LocalPlayer = 0,
	Teammate = 1,
	Enemy = 2,
	Other = 3,
	EGameCoachTargetType_MAX = 4,
};

enum class EHeroUseState : uint8_t {
	Idle = 0,
	Using = 1,
	EHeroUseState_MAX = 2,
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

enum class ERTPCValueType : uint8_t {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5,
};

enum class AkActionOnEventType : uint8_t {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5,
};

enum class ERewardPreviewMode : uint8_t {
	None = 0,
	Weapon = 1,
	Character = 2,
	ERewardPreviewMode_MAX = 3,
};

enum class EDMapDirectionMode : uint8_t {
	DirectionMode_InFront = 0,
	DirectionMode_Behind = 1,
	DirectionMode_BothDirections = 2,
	DirectionMode_NoDirection = 3,
	DirectionMode_MAX = 4,
};

enum class EWeaponDecayEnum : uint8_t {
	Exterior = 0,
	Interior = 1,
	InteriorSmall = 2,
	EWeaponDecayEnum_MAX = 3,
};

enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3,
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
	Invisible = 14,
	EMouseCursor_MAX = 15,
};

enum class EEmitterNodeState : uint8_t {
	Listening = 0,
	AnticipatingExplosion = 1,
	OnCoolDown = 2,
	EEmitterNodeState_MAX = 3,
};

enum class EConstraintFrame : uint8_t {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2,
};

enum class EARTextureType : uint8_t {
	CameraImage = 0,
	CameraDepth = 1,
	EnvironmentCapture = 2,
	EARTextureType_MAX = 3,
};

enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2,
};

enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
};

enum class ECutsceneControl : uint8_t {
	None = 0,
	Play = 1,
	Stop = 2,
	ECutsceneControl_MAX = 3,
};

enum class EGameplayTaskState : uint8_t {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5,
};

enum class ESelectedObjectsModificationType : uint8_t {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class ENiagaraCoordinateSpace : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	ENiagaraCoordinateSpace_MAX = 3,
};

enum class ECustomDataApplicationType : uint8_t {
	eOverride = 0,
	eScale = 1,
	Append = 2,
	eIgnore = 3,
	ECustomDataApplicationType_MAX = 4,
};

enum class EMatchmakingState : uint8_t {
	NotMatchmaking = 0,
	JoiningParty = 1,
	JoiningPool = 2,
	InPool = 3,
	LeavingPool = 4,
	JoiningGameSession = 5,
	AllocatingDedi = 6,
	WaitingForDediStartup = 7,
	EMatchmakingState_MAX = 8,
};

enum class ESaveLoadResult : uint8_t {
	Success = 0,
	Missing = 1,
	Failure = 2,
	NoSpace = 3,
	ESaveLoadResult_MAX = 4,
};

enum class ECrossplaySubsystem : uint8_t {
	Null = 0,
	Steam = 1,
	EOS = 2,
	PSN = 3,
	GDK = 4,
	SteamAndEOS = 5,
	ECrossplaySubsystem_MAX = 6,
};

enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	None = 4,
	EButtonClickMethod_MAX = 5,
};

enum class EGameplayEffectResetLifetimeScheme : uint8_t {
	UponReapplication = 0,
	UponReapplicationUnlessAtMaxStackCount = 1,
	Never = 2,
	EGameplayEffectResetLifetimeScheme_MAX = 3,
};

enum class EShadePipelineCacheMode : uint8_t {
	Background = 0,
	Fast = 1,
	Precompile = 2,
	Paused = 3,
	EShadePipelineCacheMode_MAX = 4,
};

enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
};

enum class EMeleeCollisionMode : uint8_t {
	OverlapVolumes = 0,
	SweptVolume = 1,
	OverlapImpactVolumes = 2,
	EMeleeCollisionMode_MAX = 3,
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

enum class EAdjustContinuesMode : uint8_t {
	Add = 0,
	Set = 1,
	EAdjustContinuesMode_MAX = 2,
};

enum class EMoveAdjustmentType : uint8_t {
	Stationary = 0,
	Moving = 1,
	MovementTickableOnly = 2,
	Count = 3,
	EMoveAdjustmentType_MAX = 4,
};

enum class EFTUETutorial : uint8_t {
	PreRound_CharacterSelect = 0,
	PreRound_DeckSelect = 1,
	PreRound_CharacterLockIn = 2,
	PreRound_CorruptionCards = 3,
	PreRound_CardDraw = 4,
	PreRound_ActiveCards = 5,
	Matchmaking_NewRun = 6,
	Matchmaking_ChangeSettings = 7,
	Matchmaking_MapUnlocks = 8,
	Matchmaking_ContinueRun = 9,
	Caravans_UnlockAnything = 10,
	DeckManager_CreateDeck = 11,
	DeckManager_AddSomeCards = 12,
	DeckManager_AddEnoughCards = 13,
	ZMS_SelectFamily = 14,
	ZMS_SelectVariant = 15,
	ZMS_Upgrade = 16,
	FortHope_EnterPracticeRange = 17,
	FortHope_CustomizeWeapon = 18,
	FortHope_CustomizeCharacter = 19,
	TutorialVideo_Runs = 20,
	TutorialVideo_CardSystem = 21,
	TutorialVideo_SupplyLines = 22,
	Caravans_Dynamic = 23,
	DeckManager_BurnCards = 24,
	Count = 25,
	EFTUETutorial_MAX = 26,
};

enum class EARDepthAccuracy : uint8_t {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3,
};

enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3,
};

enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3,
};

enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

enum class ETriangleTessellationMode : uint8_t {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2,
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

enum class EVoiceSampleRate : uint8_t {
	Low16000Hz = 0,
	Normal24000Hz = 1,
	EVoiceSampleRate_MAX = 2,
};

enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
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

enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2,
};

enum class EARDepthQuality : uint8_t {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3,
};

enum class ERichCurveCompressionFormat : uint8_t {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_MAX = 5,
};

enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};

enum class EInventoryContainer : uint8_t {
	PrimaryWeapon = 0,
	SecondaryWeapon = 1,
	Backpack = 2,
	Stash = 3,
	Count = 4,
	EInventoryContainer_MAX = 5,
};

enum class EAutoCrouch : uint8_t {
	Never = 0,
	InVolumes = 1,
	Always = 2,
	EAutoCrouch_MAX = 3,
};

enum class EFlashlightMode : uint8_t {
	FirstPersonEpic = 0,
	FirstPersonLow = 1,
	FirstPersonSplitScreen = 2,
	ThirdPersonEpic = 3,
	ThirdPersonLow = 4,
	ThirdPersonSplitScreen = 5,
	Count = 6,
	EFlashlightMode_MAX = 7,
};

enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

enum class ENetworkSmoothingMode : uint8_t {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	TRS = 4,
	ENetworkSmoothingMode_MAX = 5,
};

enum class EAIPauseResume : uint8_t {
	AI_Pause = 0,
	AI_Resume = 1,
	AI_MAX = 2,
};

enum class EIdealDistanceDirection : uint8_t {
	Both = 0,
	LessThan = 1,
	GreaterThan = 2,
	ScoreLessPassGreater = 3,
	ScoreGreaterPassLess = 4,
	EIdealDistanceDirection_MAX = 5,
};

enum class EPlayerAttributeType : uint8_t {
	Offense = 0,
	Defense = 1,
	Utility = 2,
	Mobility = 3,
	Economy = 4,
	Count = 5,
	EPlayerAttributeType_MAX = 6,
};

enum class EHydraServiceAction : uint8_t {
	SendFriendInvite = 0,
	BlockUser = 1,
	UnblockUser = 2,
	FollowUser = 3,
	UnfollowUser = 4,
	EHydraServiceAction_MAX = 5,
};

enum class EGamepadImage : uint8_t {
	Xbox360 = 0,
	XboxOne = 1,
	XboxSeries = 2,
	PS4 = 3,
	PS5 = 4,
	Steam = 5,
	Switch = 6,
	Other = 7,
	EGamepadImage_MAX = 8,
};

enum class EDecalPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Top = 4,
	EDecalPriority_MAX = 5,
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

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class EApplyOnItemAppliedTargeting : uint8_t {
	Self = 0,
	Other = 1,
	Both = 2,
	Target = 3,
	EApplyOnItemAppliedTargeting_MAX = 4,
};

enum class ESceneSnapQueryTargetType : uint8_t {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 3,
	All = 4,
	ESceneSnapQueryTargetType_MAX = 5,
};

enum class ENotificationShelfPriority : uint8_t {
	BurnCardsAvailable = 0,
	NewActiveCards = 1,
	NewCaravans = 2,
	RunAbandoned = 3,
	Achievement = 4,
	FriendRequest = 5,
	PartyInvite = 6,
	ENotificationShelfPriority_MAX = 7,
};

enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

enum class EPhysicsCasterPosition : uint8_t {
	Actor = 0,
	Random = 1,
	EPhysicsCasterPosition_MAX = 2,
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

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class ETextureSamplerFilter : uint8_t {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5,
};

enum class EAchievementRequirementOperator : uint8_t {
	GreaterThan = 0,
	LessThan = 1,
	EAchievementRequirementOperator_MAX = 2,
};

enum class ELadderMovementModeState : uint8_t {
	Idle = 0,
	Approaching = 1,
	Climbing = 2,
	FastDescending = 3,
	Dismounting = 4,
	Cooldown = 5,
	Count = 6,
	ELadderMovementModeState_MAX = 7,
};

enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

enum class EBTGameplayTagRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTGameplayTagRestart_MAX = 2,
};

enum class ETRSTraceType : uint8_t {
	Line = 0,
	Arc = 1,
	LineThenArc = 2,
	ETRSTraceType_MAX = 3,
};

enum class EMutilationCullType : uint8_t {
	Dismember = 0,
	ExplosionDismember = 1,
	ExplosionBreakoff = 2,
	EMutilationCullType_MAX = 3,
};

enum class EWebServiceErrorCode : uint8_t {
	Success = 0,
	CouldNotConnect = 1,
	AuthError = 2,
	AuthOutdated = 3,
	HydraAuthError = 4,
	GameSessionMissingPoolId = 5,
	InvalidSession = 6,
	InvalidParticipants = 7,
	InvalidPool = 8,
	InvalidTaskData = 9,
	InvalidRegion = 10,
	FailedToSend = 11,
	TaskTimeout = 12,
	SessionFull = 13,
	SessionCrossPlayRestricted = 14,
	EWebServiceErrorCode_MAX = 15,
};

enum class EAAMode : uint8_t {
	Off = 0,
	FXAA = 1,
	TAA = 2,
	DLSS_DEPRECATED = 3,
	EAAMode_MAX = 4,
};

enum class EProductType : uint8_t {
	Unlockable = 0,
	Consumable = 1,
	EProductType_MAX = 2,
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

enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
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

enum class AnimPhysAngularConstraintType : uint8_t {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EItemUseType : uint8_t {
	Aid = 0,
	Aid_Heal = 1,
	Buff = 2,
	CC = 3,
	Defensive = 4,
	Offensive = 5,
	Quest = 6,
	Resource = 7,
	Utility = 8,
	Count = 9,
	EItemUseType_MAX = 10,
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

enum class ECurveTableMode : uint8_t {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3,
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

enum class ECustomCollisionChannel : uint8_t {
	InvisibleWorldStatic = 0,
	Mantle = 1,
	Bullet = 2,
	Melee = 3,
	Count = 4,
	ECustomCollisionChannel_MAX = 5,
};

enum class EEnemyDaamgeTimeSpan : uint8_t {
	TimeSinceLastDamage = 0,
	TimeSinceLastAttack = 1,
	TimeFromLastAttackToLastDamage = 2,
	TimeFromLastDamageToLastAttack = 3,
	Num = 4,
	EEnemyDaamgeTimeSpan_MAX = 5,
};

enum class EPlatform : uint8_t {
	Unknown = 0,
	Null = 1,
	Steam = 2,
	EOS = 3,
	WinGDK = 4,
	XB1 = 5,
	XSX = 6,
	PS4 = 7,
	PS5 = 8,
	EPlatform_MAX = 9,
};

enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

enum class EItemType : uint8_t {
	Default = 0,
	Equipment = 1,
	Consumable = 2,
	WeaponAttachment = 3,
	Quest = 4,
	Ammo = 5,
	Perk = 6,
	Carried = 7,
	MountedWeapon = 8,
	Count = 9,
	EItemType_MAX = 10,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4,
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

enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
};

enum class EMissionDifficulty : uint8_t {
	Easy = 0,
	Normal = 1,
	Hard = 2,
	Legendary = 3,
	PvP = 4,
	MainMenu = 5,
	Count = 6,
	EMissionDifficulty_MAX = 7,
};

enum class EBurstAttackState : uint8_t {
	Idle = 0,
	BurstLoop = 1,
	BurstEnd = 2,
	Melee = 3,
	Squeeze = 4,
	Count = 5,
	EBurstAttackState_MAX = 6,
};

enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5,
};

enum class EFourPlayerSplitScreenType : uint8_t {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3,
};

enum class EBoneAxis : uint8_t {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3,
};

enum class EHighlightReceivers : uint8_t {
	All = 0,
	SurvivorsOnly = 1,
	InfectedOnly = 2,
	Custom = 3,
	EHighlightReceivers_MAX = 4,
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
};

enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2,
};

enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3,
};

enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3,
};

enum class EAnimCurveType : uint8_t {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4,
};

enum class EMatchmakingPool : uint8_t {
	Coop = 0,
	Coop8P = 1,
	Challenge = 2,
	VersusNoSwap = 3,
	VersusTeamSwap = 4,
	Tutorial = 5,
	Count = 6,
	EMatchmakingPool_MAX = 7,
};

enum class ERespawnStatBehavior : uint8_t {
	UseDefaults = 0,
	UsePlayerSnapshot = 1,
	UseSaferoomSnapshot = 2,
	ERespawnStatBehavior_MAX = 3,
};

enum class ETimedDataInputEvaluationType : uint8_t {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

enum class EAnimMoveSet : uint8_t {
	MoveSet1 = 0,
	MoveSet2 = 1,
	MoveSet3 = 2,
	EAnimMoveSet_MAX = 3,
};

enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

enum class EAttachmentTransactionType : uint8_t {
	Added = 0,
	Removed = 1,
	EAttachmentTransactionType_MAX = 2,
};

enum class ETextGender : uint8_t {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3,
};

enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3,
};

enum class ENavigationOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
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

enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
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

enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

enum class ESourceBusChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2,
};

enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

enum class EClingPropertyModType : uint8_t {
	Property = 0,
	CanAttach = 1,
	EClingPropertyModType_MAX = 2,
};

enum class EMastermindMessageType : uint8_t {
	TestResult = 0,
	StepResult = 1,
	ProgressUpdate = 2,
	EMastermindMessageType_MAX = 3,
};

enum class EExplodModType : uint8_t {
	SuicideExplosion = 0,
	PopExplosion = 1,
	EExplodModType_MAX = 2,
};

enum class EWeaponTraitType : uint8_t {
	BaseConfig = 0,
	AttachmentConfig = 1,
	EWeaponTraitType_MAX = 2,
};

enum class EObservationSimpleCollisionFlags : uint8_t {
	None = 0,
	BoxTest = 1,
	SphereTest = 2,
	EObservationSimpleCollisionFlags_MAX = 3,
};

enum class AnimPhysLinearConstraintType : uint8_t {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EJukeboxMusicState : uint8_t {
	Off = 0,
	Playing = 1,
	Broken = 2,
	EJukeboxMusicState_MAX = 3,
};

enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

enum class EUsableTraceLocation : uint8_t {
	CalculatedActorBoundsOrigin = 0,
	ActorOrigin = 1,
	UsableTriggerOrigin = 2,
	IntersectionPoint = 3,
	Custom = 4,
	EUsableTraceLocation_MAX = 5,
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

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class AnimPhysTwistAxis : uint8_t {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3,
};

enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2,
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

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EBirdFacing : uint8_t {
	Random = 0,
	PointNormal = 1,
	PointNormalTowardSystem = 2,
	PointNormalAwayFromSystem = 3,
	EBirdFacing_MAX = 4,
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

enum class ECharacterEmitterCharacterTypeFlags : uint8_t {
	AllHeroes = 0,
	AllAIZombies = 1,
	AllPlayerControlledZombies = 2,
	Count = 3,
	ECharacterEmitterCharacterTypeFlags_MAX = 4,
};

enum class EAbilityTimeModType : uint8_t {
	Cooldown = 0,
	Duration = 1,
	EAbilityTimeModType_MAX = 2,
};

enum class EGameplayEffectState : uint8_t {
	Initializing = 0,
	Active = 1,
	Finished = 2,
	EGameplayEffectState_MAX = 3,
};

enum class ERoundEndCondition : uint8_t {
	SuccessRoundEnd = 0,
	PVPRoundEnd = 1,
	RoundFailureReset = 2,
	RoundFailureAbandoned = 3,
	EarlyLeaver = 4,
	RoundFailureOutOfContinues = 5,
	ERoundEndCondition_MAX = 6,
};

enum class EQRCodeErrorCorrection : uint8_t {
	Low = 0,
	Medium = 1,
	Quartile = 2,
	High = 3,
	EQRCodeErrorCorrection_MAX = 4,
};

enum class ENiagaraRibbonTessellationMode : uint8_t {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class EInertializationSpace : uint8_t {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3,
};

enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class EEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

enum class EMediaPlayerOptionBooleanOverride : uint8_t {
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3,
};

enum class EStorageOperation : uint8_t {
	Update = 0,
	Fetch = 1,
	Count = 2,
	EStorageOperation_MAX = 3,
};

enum class EVectorVMBaseTypes : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4,
};

enum class EHighlightSwatch : uint8_t {
	Friendly = 0,
	Hostile = 1,
	HostileHealthy = 2,
	HostileInjured = 3,
	Alert = 4,
	Interaction = 5,
	Num_Colors = 6,
	EHighlightSwatch_MAX = 7,
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

enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4,
};

enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
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

enum class ETranslucencyType : uint8_t {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2,
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

enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
};

enum class EInteractiveCarWindowState : uint8_t {
	Intact = 0,
	Broken = 1,
	EInteractiveCarWindowState_MAX = 2,
};

enum class ERandomVelocityGenerationTypeEnum : uint8_t {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3,
};

enum class EMaterialParamType : uint8_t {
	LinearColor = 0,
	Color = 1,
	Scalar = 2,
	Texture = 3,
	LinearColorArray = 4,
	ColorArray = 5,
	ScalarArray = 6,
	TextureArray = 7,
	EMaterialParamType_MAX = 8,
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

enum class EIntensityMode : uint8_t {
	IM_Always = 0,
	IM_Distance_To_Hero = 1,
	IM_Never = 2,
	IM_MAX = 3,
};

enum class CopyBoneDeltaMode : uint8_t {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2,
};

enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5,
};

enum class EPriorityAttenuationMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3,
};

enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

enum class EOnlineModeSwitchDestination : uint8_t {
	None = 0,
	MatchmakingScreen = 1,
	Tutorial = 2,
	SystemInvite = 3,
	EOnlineModeSwitchDestination_MAX = 4,
};

enum class ENavLinkDirection : uint8_t {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3,
};

enum class EMatchmakingScreenMode : uint8_t {
	Campaign = 0,
	Quickplay = 1,
	PvP = 2,
	SinglePlayer = 3,
	Custom = 4,
	Challenge = 5,
	Count = 6,
	EMatchmakingScreenMode_MAX = 7,
};

enum class ESprayState : uint8_t {
	Idle = 0,
	SprayActive = 1,
	SprayEnding = 2,
	Count = 3,
	ESprayState_MAX = 4,
};

enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

enum class ELocationZToSpawnEnum : uint8_t {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ESplinePointType : uint8_t {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5,
};

enum class ETRSCubemapLayout : uint8_t {
	Standard = 0,
	StandardInverse = 1,
	Oculus = 2,
	OculusInverse = 3,
	ETRSCubemapLayout_MAX = 4,
};

enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
};

enum class EWeaponView : uint8_t {
	FirstPerson = 0,
	ThirdPerson = 1,
	EWeaponView_MAX = 2,
};

enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2,
};

enum class EItemCategory : uint8_t {
	Unknown = 0,
	ConsumablesStart = 1,
	Ammo = 2,
	Perk = 3,
	Offensive = 4,
	Defensive = 5,
	Utility = 6,
	ConsumablesEnd = 7,
	WeaponsStart = 8,
	Sidearm = 9,
	Melee = 10,
	AssaultRifle = 11,
	LMG = 12,
	SMG = 13,
	Shotgun = 14,
	SniperRifle = 15,
	WeaponsEnd = 16,
	AttachmentsStart = 17,
	Optic = 18,
	Barrel = 19,
	Magazine = 20,
	Stock = 21,
	AttachmentsEnd = 22,
	Currency = 23,
	Count = 24,
	EItemCategory_MAX = 25,
};

enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

enum class EARWorldMappingState : uint8_t {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4,
};

enum class EClothingWindMethod_Legacy : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2,
};

enum class ESpectatorCameraMode : uint8_t {
	FirstPerson = 0,
	ThirdPerson = 1,
	First = 2,
	Last = 3,
	ESpectatorCameraMode_MAX = 4,
};

enum class ECameraShakeAttenuation : uint8_t {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2,
};

enum class EApplyDamageEffectModType : uint8_t {
	ApplyOnDealDamage = 0,
	ApplyOnTakeDamage = 1,
	EApplyDamageEffectModType_MAX = 2,
};

enum class EInteractiveCarDoorState : uint8_t {
	Closing = 0,
	Closed = 1,
	PartiallyOpening = 2,
	PartiallyOpen = 3,
	Opening = 4,
	Open = 5,
	EInteractiveCarDoorState_MAX = 6,
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

enum class EProjectileImpactBehavior : uint8_t {
	Destroy = 0,
	DisableProjectileMovement = 1,
	HideMesh = 2,
	EProjectileImpactBehavior_MAX = 3,
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

enum class EFramerateCapMode : uint8_t {
	Off = 0,
	Display = 1,
	Custom = 2,
	EFramerateCapMode_MAX = 3,
};

enum class EWallGrabState : uint8_t {
	Idle = 0,
	Grabbing = 1,
	Count = 2,
	EWallGrabState_MAX = 3,
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

enum class EEvalScoringEquation : uint8_t {
	Linear = 0,
	Constant = 1,
	EEvalScoringEquation_MAX = 2,
};

enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

enum class EWindowMode : uint8_t {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3,
};

enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8_t {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EKeybindListInputType : uint8_t {
	KeybindListInputType_KeyboardMouse = 0,
	KeybindListInputType_Gamepad = 1,
	KeybindListInputType_MAX = 2,
};

enum class EAttenuationShape : uint8_t {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4,
};

enum class EChildDeckBehavior : uint8_t {
	AddAllDecks = 0,
	AddFirstValidDeck = 1,
	AddRandomFirstValidDeck = 2,
	EChildDeckBehavior_MAX = 3,
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

enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
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

enum class EMeshLODSelectionType : uint8_t {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4,
};

enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

enum class ESubLevelStripMode : uint8_t {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2,
};

enum class EMaterialFunctionUsage : uint8_t {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3,
};

enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EHeroMeleeState : uint8_t {
	Idle = 0,
	AttackBuildUp = 1,
	Attacking = 2,
	Impact = 3,
	Blocking = 4,
	Count = 5,
	EHeroMeleeState_MAX = 6,
};

enum class EGameplayEffectKnockbackDirection : uint8_t {
	ImpactDirection = 0,
	SourceActorFacing = 1,
	SourceComponentToTargetActor = 2,
	EGameplayEffectKnockbackDirection_MAX = 3,
};

enum class EMatchmakingTask : uint8_t {
	None = 0,
	SessionCreateSplitscreen = 1,
	SessionCreateGroup = 2,
	SessionJoinExistingGroup = 3,
	SessionRejoinExistingGame = 4,
	SessionRemoveParticipants = 5,
	SessionLeaveSplitscreen = 6,
	SessionLeaveGroup = 7,
	SessionLeaveGame = 8,
	SessionGet = 9,
	SessionSetUserData = 10,
	SessionSetSessionData = 11,
	SessionSetBeaconData = 12,
	SessionSetCrossPlayEnabled = 13,
	AuthTokenRefresh = 14,
	BeaconRefresh = 15,
	SignOut = 16,
	Count = 17,
	EMatchmakingTask_MAX = 18,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

enum class ENiagaraPlatformSelectionState : uint8_t {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
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

enum class EFacialExpression : uint8_t {
	Neutral = 0,
	Anger = 1,
	Caring = 2,
	Concerned = 3,
	Disgust = 4,
	Happy = 5,
	Fear = 6,
	Intrigued = 7,
	Pained = 8,
	Playful = 9,
	Sadness = 10,
	Sarcasm = 11,
	Surprise = 12,
	Count = 13,
	EFacialExpression_MAX = 14,
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

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	None = 3,
	EButtonPressMethod_MAX = 4,
};

enum class ESynthKnobSize : uint8_t {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3,
};

enum class ETestSuccess : uint8_t {
	Default = 0,
	Success = 1,
	Failure = 2,
	ETestSuccess_MAX = 3,
};

enum class EHydraAccountChatMessage : uint8_t {
	Invite = 0,
	Count = 1,
	EHydraAccountChatMessage_MAX = 2,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2,
};

enum class EHydraRelationshipLevel : uint8_t {
	Default = 0,
	Blocked = 1,
	Follower = 2,
	Mutual = 3,
	EHydraRelationshipLevel_MAX = 4,
};

enum class EChildBehaviorMode : uint8_t {
	CBM_Blend = 0,
	CBM_PrioritySelect = 1,
	CBM_MAX = 2,
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

enum class EPartySafeRoomState : uint8_t {
	NotInRoom = 0,
	InStartingRoom = 1,
	InCheckpointRoom = 2,
	InEndLevelRoom = 3,
	InRestArea = 4,
	EPartySafeRoomState_MAX = 5,
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

enum class EMusicHordeState : uint8_t {
	Inactive = 0,
	Active = 1,
	DyingDown = 2,
	Endless = 3,
	EMusicHordeState_MAX = 4,
};

enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2,
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

enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4,
};

enum class EItemPickupCreationContext : uint8_t {
	DroppedFromPlayer = 0,
	CreatedFromLoot = 1,
	DroppedFromKill = 2,
	EItemPickupCreationContext_MAX = 3,
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

enum class ESuicideState : uint8_t {
	Idle = 0,
	Cooking = 1,
	Count = 2,
	ESuicideState_MAX = 3,
};

enum class EARPlaneDetectionMode : uint8_t {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3,
};

enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

enum class EGamepadLayoutDisplayMode : uint8_t {
	Sticks = 0,
	Buttons = 1,
	EGamepadLayoutDisplayMode_MAX = 2,
};

enum class EBotFollowTarget : uint8_t {
	Nearest = 0,
	ClosestToObjective = 1,
	FurthestFromObjective = 2,
	Count = 3,
	EBotFollowTarget_MAX = 4,
};

enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2,
};

enum class EGameplayTagMatchType : uint8_t {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class ETitanStage2And3State : uint8_t {
	Dormant = 0,
	Plan = 1,
	Idle = 2,
	Stage2TentacleAttack = 3,
	Stage2Horde = 4,
	Stage2Retract = 5,
	Stage2End = 6,
	Retreat = 7,
	Dig = 8,
	Dying = 9,
	Dead = 10,
	Escape = 11,
	ETitanStage2And3State_MAX = 12,
};

enum class ACLRotationFormat : uint8_t {
	ACLRF_Quat_129 = 0,
	ACLRF_QuatDropW_97 = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3,
};

enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

enum class LoginState : uint8_t {
	LoggedOut = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	LoggingOut = 3,
	LoginState_MAX = 4,
};

enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

enum class EHoldoutResult : uint8_t {
	Forfeit = 0,
	RoundVictory = 1,
	MatchVictory = 2,
	Count = 3,
	EHoldoutResult_MAX = 4,
};

enum class ERotatorQuantization : uint8_t {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2,
};

enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
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

enum class EParticleSignificanceLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EItemQuality : uint8_t {
	Broken = 0,
	Improvised = 1,
	Uncommon = 2,
	Standard = 3,
	Superior = 4,
	Perfect = 5,
	Quest = 6,
	Count = 7,
	EItemQuality_MAX = 8,
};

enum class EAkAndroidAudioAPI : uint8_t {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2,
};

enum class EEvalComparison : uint8_t {
	GreaterThan = 0,
	LessThan = 1,
	GreaterThanOrEqualTo = 2,
	LessThanOrEqualTo = 3,
	NotEqualTo = 4,
	ExactlyEqualTo = 5,
	NearlyEqualTo = 6,
	Max = 7,
};

enum class EThreatLevel : uint8_t {
	Minimum = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	VeryHigh = 4,
	Count = 5,
	EThreatLevel_MAX = 6,
};

enum class EQuitPreference : uint8_t {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2,
};

enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

enum class EColorBlindEntryType : uint8_t {
	UIGlobalStyle = 0,
	MaterialColor = 1,
	OutlineColor = 2,
	Count = 3,
	EColorBlindEntryType_MAX = 4,
};

enum class EInstigatorRule : uint8_t {
	FirstHeroInTrigger = 0,
	LastHeroInTrigger = 1,
	RandomHeroInTrigger = 2,
	NoInstigator = 3,
	EInstigatorRule_MAX = 4,
};

enum class EAnalogStickResponseCurve : uint8_t {
	Linear = 0,
	Exponential = 1,
	EAnalogStickResponseCurve_MAX = 2,
};

enum class EPlantableItemState : uint8_t {
	Idle = 0,
	Planting = 1,
	Count = 2,
	EPlantableItemState_MAX = 3,
};

enum class EExplosionEffectSource : uint8_t {
	InitAsActor = 0,
	InitAsProjectile = 1,
	InitFromRecentDamage = 2,
	EExplosionEffectSource_MAX = 3,
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

enum class EItemPickupTooltipState : uint8_t {
	Invalid = 0,
	Minimized = 1,
	Details = 2,
	EItemPickupTooltipState_MAX = 3,
};

enum class ESourceEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class ENodeTitleType : uint8_t {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5,
};

enum class EImpactFlags : uint8_t {
	Default = 0,
	Audio = 1,
	Decals = 2,
	Particles = 3,
	GameplayEffects = 4,
	Actors = 5,
	Water = 6,
	AllTypes = 7,
	EImpactFlags_MAX = 8,
};

enum class ETextureSourceFormat : uint8_t {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA32F = 6,
	TSF_RGBA8 = 7,
	TSF_RGBE8 = 8,
	TSF_G16 = 9,
	TSF_MAX = 10,
};

enum class EUIScalingRule : uint8_t {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	DistanceZInverted = 4,
	EEnvTestDistance_MAX = 5,
};

enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 3,
	Webcam = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5,
};

enum class EPlayerSprintState : uint8_t {
	Idle = 0,
	SprintIn = 1,
	Sprinting = 2,
	SprintOut = 3,
	SprintStateCount = 4,
	EPlayerSprintState_MAX = 5,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class ETriggerEffectMode : uint8_t {
	Off = 0,
	Weapon = 1,
	Vibration = 2,
	Feedback = 3,
	ETriggerEffectMode_MAX = 4,
};

enum class EMoveComponentAction : uint8_t {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3,
};

enum class EUsablePriority : uint8_t {
	VeryLow = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	VeryHigh = 4,
	EUsablePriority_MAX = 5,
};

enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
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

enum class PreferenceRadius : uint8_t {
	Fray = 0,
	FrayCallout = 1,
	Close = 2,
	Far = 3,
	MaxRadii = 4,
	PreferenceRadius_MAX = 5,
};

enum class EDatasmithImportActorPolicy : uint8_t {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3,
};

enum class EDLSSMode : uint8_t {
	UltraPerformance = 0,
	Performance = 1,
	Balanced = 2,
	Quality = 3,
	EDLSSMode_MAX = 4,
};

enum class EMeshModificationType : uint8_t {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3,
};

enum class ASTCOverrideSizeValue : uint8_t {
	ASTC_12x12 = 0,
	ASTC_10x10 = 1,
	ASTC_8x8 = 2,
	ASTC_6x6 = 3,
	ASTC_4x4 = 4,
	ASTC_Size_MAX = 5,
	ASTC_MAX = 6,
};

enum class ELessonEndingState : uint8_t {
	Success = 0,
	Interrupted = 1,
	Failed = 2,
	ELessonEndingState_MAX = 3,
};

enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4,
};

enum class ECharacterCustomizationSlot : uint8_t {
	Head = 0,
	Torso = 1,
	Legs = 2,
	Outfit = 3,
	Count = 4,
	IndividualSlotCount = 5,
	ECharacterCustomizationSlot_MAX = 6,
};

enum class ETitanState : uint8_t {
	Hidden = 0,
	Arrive = 1,
	Plan = 2,
	Idle = 3,
	Turn = 4,
	TailSwipe = 5,
	SweepForward = 6,
	TongueGrab = 7,
	TentacleAttack = 8,
	Retreat = 9,
	Dying = 10,
	Dead = 11,
	ETitanState_MAX = 12,
};

enum class EEvalType : uint8_t {
	Score = 0,
	Filter = 1,
	FilterAndScore = 2,
	EEvalType_MAX = 3,
};

enum class EGobiMapDevEnvType : uint8_t {
	Shipping = 0,
	CommonDev = 1,
	Dev = 2,
	User = 3,
	EGobiMapDevEnvType_MAX = 4,
};

enum class ELifeStateTransitionCompare : uint8_t {
	Less = 0,
	LessEqual = 1,
	Greater = 2,
	GreaterEqual = 3,
	ELifeStateTransitionCompare_MAX = 4,
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

enum class EAkPanningRule : uint8_t {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2,
};

enum class EAITraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EAITraceShape_MAX = 4,
};

enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

enum class ENiagaraRibbonFacingMode : uint8_t {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3,
};

enum class ESkeletalMeshConfigModType : uint8_t {
	Addition = 0,
	Replacement = 1,
	ESkeletalMeshConfigModType_MAX = 2,
};

enum class EMouseLockMode : uint8_t {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4,
};

enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2,
};

enum class EComponentSocketType : uint8_t {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3,
};

enum class EBlackboardValueOperation : uint8_t {
	Clear = 0,
	Copy = 1,
	Move = 2,
	Set = 3,
	EBlackboardValueOperation_MAX = 4,
};

enum class EOnlinePlayerProfileDataSubset : uint8_t {
	None = 0,
	ResetNotify = 1,
	Caravans = 2,
	EquippedCharacterCustomizationSets = 3,
	AppliedWeaponSkins = 4,
	BadgeData = 5,
	Stats = 6,
	CampaignRunMetadata = 7,
	StartingLocations = 8,
	Decks = 9,
	SprayData = 10,
	SupplyPoints = 11,
	Consumables = 12,
	CampaignRunData = 13,
	ReconciliationTimestamps = 14,
	EOnlinePlayerProfileDataSubset_MAX = 15,
};

enum class ESqueezeState : uint8_t {
	Idle = 0,
	SqueezeActive = 1,
	SqueezeEnd = 2,
	Count = 3,
	ESqueezeState_MAX = 4,
};

enum class EFireModeMachineGunState : uint8_t {
	Idle = 0,
	WindingUp = 1,
	Active = 2,
	WindingDown = 3,
	Count = 4,
	EFireModeMachineGunState_MAX = 5,
};

enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

enum class ESplineActorOffsetMode : uint8_t {
	ESAOM_NoOffset = 0,
	ESAOM_SpecifiedOffset = 1,
	ESAOM_RandomOffset = 2,
	ESAOM_RandomTranslation = 3,
	ESAOM_RandomRotation = 4,
	ESAOM_MAX = 5,
};

enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

enum class EVisibleResult : uint8_t {
	Unknown = 0,
	Visible = 1,
	NeverTraversed = 2,
	InvalidIndex = 3,
	LVVCulled = 4,
	DistanceCulled = 5,
	FrustumCulled = 6,
	OccluderCulled = 7,
	ResourceCountCulled = 8,
	EVisibleResult_MAX = 9,
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

enum class ESignInTaskState : uint8_t {
	Pending = 0,
	Running = 1,
	Skipped = 2,
	Completed = 3,
	Failed = 4,
	Canceled = 5,
	ESignInTaskState_MAX = 6,
};

enum class EWaterHeightType : uint8_t {
	None = 0,
	Shallow = 1,
	Deep = 2,
	EWaterHeightType_MAX = 3,
};

enum class EMotionCorrectionContextUpdateMode : uint8_t {
	MCCM_Continuous = 0,
	MCCM_AtPlay = 1,
	MCCM_AtWindowBegin = 2,
	MCCM_ContinuousOrNoCorrection = 3,
	MCCM_AtWindowBeginOrNoCorrection = 4,
	MCCM_MAX = 5,
};

enum class EZombieMovementForce : uint8_t {
	Charge = 0,
	Count = 1,
	EZombieMovementForce_MAX = 2,
};

enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
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

enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2,
};

enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2,
};

enum class EVivoxChannelConnectionType : uint8_t {
	Channel = 0,
	Audio = 1,
	Text = 2,
	SpeechToText = 3,
	Count = 4,
	EVivoxChannelConnectionType_MAX = 5,
};

enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
};

enum class ESharedEnemyAnimSound : uint8_t {
	Idle = 0,
	Alerting = 1,
	Aggro = 2,
	Threaten = 3,
	Attack = 4,
	Hurt = 5,
	Hurt_Critical = 6,
	Death = 7,
	Breath_In = 8,
	Breath_Out = 9,
	FS_Walk = 10,
	FS_Run = 11,
	FS_Scuff = 12,
	FS_Jumpland = 13,
	Foley_Movement = 14,
	Idle_Sick = 15,
	Idle_Eat = 16,
	FS_Fight = 17,
	Detonate_Big = 18,
	Detonate_Small = 19,
	Alerted = 20,
	Taunt = 21,
	Expression = 22,
	Behind_Tell = 23,
	DEP_Gather_Mid = 24,
	DEP_Gather_Far = 25,
	Foley_Pop = 26,
	Bodyfall = 27,
	Charge_Tell = 28,
	Bump = 29,
	Flee = 30,
	Idle_Yell = 31,
	Melee_Whoosh = 32,
	FS_Crouch = 33,
	FS_Climb = 34,
	Push = 35,
	Grab_Enter = 36,
	Grab_Idle = 37,
	Grab_Exit = 38,
	Idle_Walk = 39,
	Climb_Enter = 40,
	Climb = 41,
	Climb_End = 42,
	Attack_Recovery = 43,
	Crouch = 44,
	Approach = 45,
	FS_Charge = 46,
	Hurt_Fire = 47,
	Frenzy_Run = 48,
	Angry = 49,
	Harpoon = 50,
	Attack_NonCombat = 51,
	Charge_Start = 52,
	Charge_Stop = 53,
	Charge_Loop = 54,
	Charge_Interrupt = 55,
	Leap_Land = 56,
	Leap_Charge_Interrupt = 57,
	Leap_Charge_Start = 58,
	Leap_Launch = 59,
	Pounce_Land = 60,
	Pounce_Charge_Interrupt = 61,
	Pounce_Charge_Start = 62,
	Pounce_Launch = 63,
	Leap_Start_Vox = 64,
	Leap_Launch_Vox = 65,
	Leap_Land_Vox = 66,
	Leap_Interrupt_Vox = 67,
	Hurt_Flashed = 68,
	Hurt_Dazed = 69,
	Hurt_Electrocuted = 70,
	Charge_Vox_Start = 71,
	Charge_Vox_Stop = 72,
	Wall_Cling_Tell = 73,
	ESharedEnemyAnimSound_MAX = 74,
};

enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck = 0,
	DisablePartialEndTick = 1,
	IgnoreZAccumulate = 2,
	ERootMotionSourceSettingsFlags_MAX = 3,
};

enum class ENetworkLagState : uint8_t {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class AkMeshType : uint8_t {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2,
};

enum class EHeroMovementForceInput : uint8_t {
	None = 0,
	Harpoon = 1,
	Knockback = 2,
	Melee = 3,
	Cancel = 4,
	Count = 5,
	EHeroMovementForceInput_MAX = 6,
};

enum class ESourceEffectFilterCircuit : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class EVectorQuantization : uint8_t {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3,
};

enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
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

enum class ESceneSnapQueryType : uint8_t {
	Position = 0,
	ESceneSnapQueryType_MAX = 1,
};

enum class EPartyScreenTab : uint8_t {
	OnlinePlayer = 0,
	GroupPlayer = 1,
	RecentPlayer = 2,
	BlockedPlayer = 3,
	WBP1Player = 4,
	Count = 5,
	EPartyScreenTab_MAX = 6,
};

enum class EChannelMaskParameterColor : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class ETetherTarget : uint8_t {
	OnlyHeroBots = 0,
	SkipHeroBots = 1,
	All = 2,
	Count = 3,
	ETetherTarget_MAX = 4,
};

enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class ECardActionType : uint8_t {
	Discarded = 0,
	Played = 1,
	Exhausted = 2,
	Completed = 3,
	Drawn = 4,
	SpawnedAI = 5,
	ECardActionType_MAX = 6,
};

enum class ENavLinkContextLocations : uint8_t {
	NLCL_ClimbStart = 0,
	NLCL_TopStart = 1,
	NLCL_TopEnd = 2,
	NLCL_ClimbEnd = 3,
	NLCL_MAX = 4,
};

enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5,
};

enum class EAirAbsorptionMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2,
};

enum class EVivoxChannelType : uint8_t {
	EchoAudio = 0,
	GlobalAudio = 1,
	TeamAudio = 2,
	GlobalText = 3,
	Count = 4,
	EVivoxChannelType_MAX = 5,
};

enum class ESourceEffectFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5,
};

enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class ENiagaraModuleDependencyType : uint8_t {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EDrenchDistanceMode : uint8_t {
	EmitFromTarget = 0,
	EmitFromSource = 1,
	EDrenchDistanceMode_MAX = 2,
};

enum class EReticleOptionType : uint8_t {
	Crosshair = 0,
	Dot = 1,
	EReticleOptionType_MAX = 2,
};

enum class EAkAudioSessionCategory : uint8_t {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3,
};

enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

enum class EPerkType : uint8_t {
	Permanent = 0,
	SelectedItem = 1,
	Temp = 2,
	Count = 3,
	EPerkType_MAX = 4,
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

enum class EMontageNotifyTickType : uint8_t {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2,
};

enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2,
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

enum class EMoviePlaybackType : uint8_t {
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3,
};

enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3,
};

enum class EAttachLocation : uint8_t {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4,
};

enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4,
};

enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
};

enum class EGameModeClassification : uint8_t {
	MainMenu = 0,
	SocialSpace = 1,
	PVPClassic = 2,
	PVPHoldout = 3,
	Coop = 4,
	Count = 5,
	EGameModeClassification_MAX = 6,
};

enum class EPerkCategory : uint8_t {
	Offensive = 0,
	Defensive = 1,
	Utility = 2,
	Count = 3,
	EPerkCategory_MAX = 4,
};

enum class EGameplayTagContext : uint8_t {
	Activation = 0,
	Deactivation = 1,
	EGameplayTagContext_MAX = 2,
};

enum class ETextureMipValueMode : uint8_t {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4,
};

enum class EProjectileThrowState : uint8_t {
	Idle = 0,
	Cooking = 1,
	Throwing = 2,
	Count = 3,
	EProjectileThrowState_MAX = 4,
};

enum class EBehindCamera : uint8_t {
	Default = 0,
	Never = 1,
	Behind = 2,
	FOV = 3,
	EBehindCamera_MAX = 4,
};

enum class ETweenGenericType : uint8_t {
	Any = 0,
	Move = 1,
	Scale = 2,
	Rotate = 3,
	RotateAroundPoint = 4,
	FollowSpline = 5,
	MaterialVector = 6,
	MaterialScalar = 7,
	WidgetAngle = 8,
	WidgetOpacity = 9,
	WidgetShear = 10,
	CustomVector = 11,
	CustomFloat = 12,
	CustomVector2D = 13,
	ETweenGenericType_MAX = 14,
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

enum class ERespawnReason : uint8_t {
	StandardDeath = 0,
	MissionReset = 1,
	SeamlessTravel = 2,
	DifficultyExposedCount = 3,
	RelocateZombie = 4,
	StartingSaferoom = 5,
	Unknown = 6,
	BotSwapToBot = 7,
	BotSwapToPlayer = 8,
	ERespawnReason_MAX = 9,
};

enum class EToolContextCoordinateSystem : uint8_t {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class EVendorAnimBehaviorState : uint8_t {
	Lonely = 0,
	Nag = 1,
	Interact = 2,
	EVendorAnimBehaviorState_MAX = 3,
};

enum class EVectorVMOperandLocation : uint8_t {
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3,
};

enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

enum class EObservableDebugDrawFlags : uint8_t {
	None = 0,
	MinDistance = 1,
	MaxDistance = 2,
	ViewAngle = 3,
	ObserveableToObserverViewAngle = 4,
	BoxTest = 5,
	SphereTest = 6,
	LineOfSightTest = 7,
	EObservableDebugDrawFlags_MAX = 8,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class ECooldownType : uint8_t {
	OnEnterPlay = 0,
	OnExitsPlay = 1,
	ECooldownType_MAX = 2,
};

enum class EOnlineSessionStatus : uint8_t {
	None = 0,
	Host = 1,
	Joiner = 2,
	EOnlineSessionStatus_MAX = 3,
};

enum class ELandscapeCullingPrecision : uint8_t {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2,
};

enum class ETweenLinearColorType : uint8_t {
	MaterialVectorFromTo = 0,
	MaterialVectorTo = 1,
	ETweenLinearColorType_MAX = 2,
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

enum class ECombineState : uint8_t {
	Ready = 0,
	OnUseAudioEventCombineStart = 1,
	AudioEventCombineStartLoop = 2,
	CalculateSpotLightIntensity = 3,
	StartCombineMovement = 4,
	Done = 5,
	ECombineState_MAX = 6,
};

enum class ENodeEnabledState : uint8_t {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3,
};

enum class ESleepFamily : uint8_t {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3,
};

enum class EPostRoundLineupStat : uint8_t {
	RiddenKilled = 0,
	RiddenMutationsKilled = 1,
	CleanersRevived = 2,
	CleanersRescued = 3,
	HealingApplied = 4,
	PVPIncapsAsRidden = 5,
	PVPKillsAsRidden = 6,
	EnemyDamageInflicted = 7,
	FriendlyDamageInflicted = 8,
	SpecialRiddenDamageInflicted = 9,
	CleanersRevivedOrRescued = 10,
	Count = 11,
	EPostRoundLineupStat_MAX = 12,
};

enum class ESignInSubStep : uint8_t {
	None = 0,
	SignInActive = 1,
	SponsorPresence = 2,
	InPool = 3,
	OnlineOfflinePopup = 4,
	EOSLogin = 5,
	UserLogin = 6,
	CanPlay = 7,
	OnlinePrivileges = 8,
	AllowListVerification = 9,
	AllowListPasswordPrompt = 10,
	AgoraToken = 11,
	WaitForProfileSettings = 12,
	AgoraMaintenanceMode = 13,
	AtuinToken = 14,
	WaitForFTUESettings = 15,
	License = 16,
	StartupOptions = 17,
	HydraName = 18,
	WaitForBeaconRefresh = 19,
	WaitForGroupSession = 20,
	WaitForProfile = 21,
	Count = 22,
	ESignInSubStep_MAX = 23,
};

enum class ENiagaraSpriteAlignment : uint8_t {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3,
};

enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
};

enum class EEquipmentSlot : uint8_t {
	PrimaryWeapon = 0,
	SecondaryWeapon = 1,
	DefensiveAbility = 2,
	Consumable1 = 3,
	Consumable2 = 4,
	Consumable3 = 5,
	Carried = 6,
	MountedWeapon = 7,
	CharacterAbility = 8,
	Count = 9,
	EEquipmentSlot_MAX = 10,
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

enum class ConnectionState : uint8_t {
	Disconnected = 0,
	Connecting = 1,
	Connected = 2,
	Disconnecting = 3,
	ConnectionState_MAX = 4,
};

enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
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

enum class EDynamicForceFeedbackAction : uint8_t {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class ECorrectionDimension : uint8_t {
	CD_3D = 0,
	CD_2D = 1,
	CD_Z = 2,
	CD_MAX = 3,
};

enum class EPerfScalingMethod : uint8_t {
	None = 0,
	Linear = 1,
	LinearAggressive = 2,
	LinearRelaxed = 3,
	EPerfScalingMethod_MAX = 4,
};

enum class EGameplayActionMatchingTagType : uint8_t {
	All = 0,
	Any = 1,
	AllExact = 2,
	AnyExact = 3,
	EGameplayActionMatchingTagType_MAX = 4,
};

enum class ACLVectorFormat : uint8_t {
	ACLVF_Vector3_97 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2,
};

enum class EWeightMapTargetCommon : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5,
};

enum class EMotionCorrectionAxis : uint8_t {
	CA_Yaw = 0,
	CA_Pitch = 1,
	CA_Roll = 2,
	CA_All = 3,
	CA_MAX = 4,
};

enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
};

enum class ESubmixSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3,
};

enum class EForcedPredictionError : uint8_t {
	MovementMode = 0,
	Montage = 1,
	Hitch = 2,
	EForcedPredictionError_MAX = 3,
};

enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

enum class ERootMotionMontageEvent : uint8_t {
	Invalid = 0,
	MotionCorrection = 1,
	PlayMontageNotifyWindow = 2,
	PlayMontageNotify = 3,
	EvalChainMontage = 4,
	ERootMotionMontageEvent_MAX = 5,
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

enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
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

enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class EMovementDirection : uint8_t {
	eForward = 0,
	eBackward = 1,
	eSideways = 2,
	EMovementDirection_MAX = 3,
};

enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3,
};

enum class EAudioFaderCurve : uint8_t {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5,
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

enum class ESessionPrivacy : uint8_t {
	Open = 0,
	Friends = 1,
	InviteOnly = 2,
	Closed = 3,
	ESessionPrivacy_MAX = 4,
};

enum class ESynth1PatchSource : uint8_t {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5,
};

enum class ESharedSurvivorAnimSound : uint8_t {
	Foley_Mvmt_Short = 0,
	Foley_Mvmt_Long = 1,
	Foley_Mvmt_Walk = 2,
	DEP_Foley_Mvmt_Loop = 3,
	Grab = 4,
	Mantle = 5,
	Jump = 6,
	JumpLand = 7,
	Swipe = 8,
	LedgeGrab = 9,
	LedgeClimb = 10,
	Bodyfall = 11,
	FS_Walk = 12,
	FS_Run = 13,
	FS_Scuff = 14,
	FS_Crouch = 15,
	FS_Ladder = 16,
	FS_Crawl = 17,
	Throw = 18,
	FS_Crouch_In = 19,
	FS_Crouch_Out = 20,
	ESharedSurvivorAnimSound_MAX = 21,
};

enum class EReflectionFilterBits : uint8_t {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2,
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

enum class EWebSocketSessionTask : uint8_t {
	None = 0,
	CreateSession = 1,
	JoinSession = 2,
	LeaveSession = 3,
	WaitForAck = 4,
	SetSessionData = 5,
	SetUserData = 6,
	SetRegionalPings = 7,
	SendInvite = 8,
	SetCrossPlayEnabled = 9,
	JoinMatchmaking = 10,
	LeaveMatchmaking = 11,
	DebugDisconnect = 12,
	JoinBackfillSession = 13,
	Ping = 14,
	EWebSocketSessionTask_MAX = 15,
};

enum class EVivoxEnvironment : uint8_t {
	GobiBetaProduction = 0,
	Count = 1,
	EVivoxEnvironment_MAX = 2,
};

enum class EHeroLedgeHangState : uint8_t {
	Idle = 0,
	MovingToLedge = 1,
	HangingFromLedge = 2,
	Recovering = 3,
	Count = 4,
	EHeroLedgeHangState_MAX = 5,
};

enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EApplicationState : uint8_t {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4,
};

enum class EBuffType : uint8_t {
	None = 0,
	Buff = 1,
	Debuff = 2,
	EBuffType_MAX = 3,
};

enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
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

enum class EFontCacheType : uint8_t {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2,
};

enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3,
};

enum class EMantleState : uint8_t {
	Idle = 0,
	ProceduralClimbing = 1,
	AnimatedClimbing = 2,
	Count = 3,
	EMantleState_MAX = 4,
};

enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

enum class ENavigationQueryResult : uint8_t {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4,
};

enum class EGameModeType : uint8_t {
	Unknown = 0,
	MainMenu = 1,
	Hub = 2,
	Mission = 3,
	Versus = 4,
	EGameModeType_MAX = 5,
};

enum class EToolChangeTrackingMode : uint8_t {
	NoChangeTracking = 0,
	UndoToExit = 1,
	FullUndoRedo = 2,
	EToolChangeTrackingMode_MAX = 3,
};

enum class SubscriptionMode : uint8_t {
	Accept = 0,
	Block = 1,
	Defer = 2,
	SubscriptionMode_MAX = 3,
};

enum class SharedEnemyAnimSound_Enum : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator11 = 2,
	NewEnumerator14 = 3,
	NewEnumerator2 = 4,
	NewEnumerator3 = 5,
	NewEnumerator13 = 6,
	NewEnumerator4 = 7,
	NewEnumerator5 = 8,
	NewEnumerator6 = 9,
	NewEnumerator7 = 10,
	NewEnumerator8 = 11,
	NewEnumerator9 = 12,
	NewEnumerator10 = 13,
	NewEnumerator12 = 14,
	NewEnumerator15 = 15,
	NewEnumerator16 = 16,
	NewEnumerator17 = 17,
	NewEnumerator18 = 18,
	NewEnumerator19 = 19,
	NewEnumerator20 = 20,
	NewEnumerator21 = 21,
	NewEnumerator22 = 22,
	NewEnumerator23 = 23,
	NewEnumerator24 = 24,
	NewEnumerator25 = 25,
	NewEnumerator26 = 26,
	NewEnumerator27 = 27,
	NewEnumerator28 = 28,
	NewEnumerator29 = 29,
	NewEnumerator30 = 30,
	NewEnumerator31 = 31,
	NewEnumerator32 = 32,
	NewEnumerator33 = 33,
	NewEnumerator34 = 34,
	NewEnumerator36 = 35,
	NewEnumerator37 = 36,
	NewEnumerator38 = 37,
	NewEnumerator39 = 38,
	NewEnumerator40 = 39,
	NewEnumerator41 = 40,
	NewEnumerator42 = 41,
	NewEnumerator43 = 42,
	NewEnumerator44 = 43,
	NewEnumerator45 = 44,
	NewEnumerator46 = 45,
	NewEnumerator47 = 46,
	NewEnumerator48 = 47,
	NewEnumerator49 = 48,
	NewEnumerator50 = 49,
	NewEnumerator51 = 50,
	NewEnumerator52 = 51,
	NewEnumerator53 = 52,
	NewEnumerator54 = 53,
	NewEnumerator56 = 54,
	NewEnumerator57 = 55,
	NewEnumerator58 = 56,
	NewEnumerator59 = 57,
	NewEnumerator60 = 58,
	NewEnumerator61 = 59,
	NewEnumerator62 = 60,
	NewEnumerator63 = 61,
	NewEnumerator64 = 62,
	NewEnumerator65 = 63,
	NewEnumerator66 = 64,
	SharedEnemyAnimSound_MAX = 65,
};

enum class EARJointTransformSpace : uint8_t {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2,
};

enum class EAudioFadeModel : uint8_t {
	InverseByDistance = 0,
	LinearByDistance = 1,
	ExponentialByDistance = 2,
	EAudioFadeModel_MAX = 3,
};

enum class EHydraRenameResult : uint8_t {
	Success = 0,
	ConnectionError = 1,
	EHydraRenameResult_MAX = 2,
};

enum class EMontageSubStepResult : uint8_t {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4,
};

enum class EVirtualizationMode : uint8_t {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3,
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

enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2,
};

enum class ENavDataGatheringMode : uint8_t {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3,
};

enum class EGameplayCardDeckType : uint8_t {
	PvE = 0,
	PvP = 1,
	Solo = 2,
	Count = 3,
	EGameplayCardDeckType_MAX = 4,
};

enum class ETitanStage1TentacleFlinchState : uint8_t {
	Idle = 0,
	Flinching1 = 1,
	Flinching2 = 2,
	ETitanStage1TentacleFlinchState_MAX = 3,
};

enum class EAimSensitivitySpace : uint8_t {
	Standard = 0,
	ADSZoomLevelOne = 1,
	ADSZoomLevelTwo = 2,
	ADSZoomLevelThree = 3,
	AimSensitivitySpaceCount = 4,
	None = 5,
	EAimSensitivitySpace_MAX = 6,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
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

enum class EOnlineFlowSignInState : uint8_t {
	NotSignedIn = 0,
	SigningIn = 1,
	SignedIn = 2,
	SigningOut = 3,
	EOnlineFlowSignInState_MAX = 4,
};

enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2,
};

enum class ECameraFocusMethod : uint8_t {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4,
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

enum class ESynthSlateSizeType : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4,
};

enum class ESegmentedReloadState : uint8_t {
	Idle = 0,
	Enter = 1,
	Loop = 2,
	Exit = 3,
	Count = 4,
	ESegmentedReloadState_MAX = 5,
};

enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
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

enum class ECollectionScriptingShareType : uint8_t {
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3,
};

enum class ERootMotionRootLock : uint8_t {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3,
};

enum class EHeroMannequinType : uint8_t {
	CharacterCustomization = 0,
	CharacterSelect = 1,
	PostRoundLineup = 2,
	EHeroMannequinType_MAX = 3,
};

enum class EMusicEventType : uint8_t {
	Generic = 0,
	Horde = 1,
	Scenario = 2,
	Brute = 3,
	Hag = 4,
	Breaker = 5,
	EMusicEventType_MAX = 6,
};

enum class EScenarioSpawningStatus : uint8_t {
	Spawning = 0,
	SpawningCompleted = 1,
	SpawningFailed = 2,
	EScenarioSpawningStatus_MAX = 3,
};

enum class EGameplayEffectApplicationScheme : uint8_t {
	Instant = 0,
	Duration = 1,
	RandomDuration = 2,
	Custom = 3,
	EGameplayEffectApplicationScheme_MAX = 4,
};

enum class EMapSpatialInfoDrawType : uint8_t {
	NearCamera = 0,
	VisibileFromNearestArea = 1,
	TestActiveAreaSet = 2,
	DistanceAlongGoldenPath = 3,
	DistanceFromGoldenPath = 4,
	AvgSpawner = 5,
	BigSpawner = 6,
	HugeSpawner = 7,
	Buckets = 8,
	EMapSpatialInfoDrawType_MAX = 9,
};

enum class EARTrackingQuality : uint8_t {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3,
};

enum class ECharacterBodySize : uint8_t {
	Small = 0,
	Medium = 1,
	Large = 2,
	ECharacterBodySize_MAX = 3,
};

enum class ENiagaraBooleanLogicOps : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator2 = 1,
	NewEnumerator4 = 2,
	NewEnumerator5 = 3,
	ENiagaraBooleanLogicOps_MAX = 4,
};

enum class EPlacementOffsetMode : uint8_t {
	EPOM_NoOffset = 0,
	EPOM_SpecifiedOffset = 1,
	EPOM_RandomOffset = 2,
	EPOM_RandomTranslation = 3,
	EPOM_RandomRotation = 4,
	EPOM_MAX = 5,
};

enum class EHitProxyPriority : uint8_t {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4,
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

enum class EMissionEndedBehavior : uint8_t {
	RestartMission = 0,
	PreviousCheckpoint = 1,
	GameOver = 2,
	EMissionEndedBehavior_MAX = 3,
};

enum class EMantleHeightMode : uint8_t {
	WallLocation = 0,
	GroundLocation = 1,
	ActorLocation = 2,
	EMantleHeightMode_MAX = 3,
};

enum class EMaterialParameterCollectionValueType : uint8_t {
	Scalar = 0,
	Vector = 1,
	EMaterialParameterCollectionValueType_MAX = 2,
};

enum class EMissionType : uint8_t {
	StoryMission = 0,
	SideMission = 1,
	Bounty = 2,
	Patrol = 3,
	Tutorial = 4,
	EMissionType_MAX = 5,
};

enum class ACLVisualFidelityChangeResult : uint8_t {
	Dispatched = 0,
	Completed = 1,
	Failed = 2,
	ACLVisualFidelityChangeResult_MAX = 3,
};

enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	ESlateDebuggingFocusEvent_MAX = 3,
};

enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3,
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

enum class ESynthLFOMode : uint8_t {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4,
};

enum class ESubmixFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5,
};

enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
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

enum class EARFaceTrackingDirection : uint8_t {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2,
};

enum class EReporterLineStyle : uint8_t {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2,
};

enum class EGraphDataStyle : uint8_t {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2,
};

enum class EPacketRelayClientPacket : uint8_t {
	ConnectRequest = 0,
	ConnectResponse = 1,
	Heartbeat = 2,
	HeartbeatReply = 3,
	VoicePackets = 4,
	GameData = 5,
	EPacketRelayClientPacket_MAX = 6,
};

enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class EHagLocomotionState : uint8_t {
	HS_Default = 0,
	HS_Alert = 1,
	HS_Aggro = 2,
	HS_Count = 3,
	HS_MAX = 4,
};

enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
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

enum class ECampaignRunState : uint8_t {
	InProgress = 0,
	Completed = 1,
	Failed = 2,
	ECampaignRunState_MAX = 3,
};

enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EScriptExecutionMode : uint8_t {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3,
};

enum class SharedSurvivorAnimSound_Enum : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator7 = 2,
	NewEnumerator8 = 3,
	NewEnumerator5 = 4,
	NewEnumerator10 = 5,
	NewEnumerator12 = 6,
	NewEnumerator13 = 7,
	NewEnumerator16 = 8,
	NewEnumerator15 = 9,
	NewEnumerator14 = 10,
	NewEnumerator11 = 11,
	NewEnumerator2 = 12,
	NewEnumerator3 = 13,
	NewEnumerator9 = 14,
	NewEnumerator4 = 15,
	NewEnumerator6 = 16,
	NewEnumerator17 = 17,
	NewEnumerator18 = 18,
	NewEnumerator19 = 19,
	NewEnumerator20 = 20,
	SharedSurvivorAnimSound_MAX = 21,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class ENDISkeletalMesh_SkinningMode : uint8_t {
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4,
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

enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3,
};

enum class EOnlineMode : uint8_t {
	Offline = 0,
	Online = 1,
	EOnlineMode_MAX = 2,
};

enum class EWaypointType : uint8_t {
	Waypoint = 0,
	PingActor = 1,
	PingLocation = 2,
	PingCommWheel = 3,
	EWaypointType_MAX = 4,
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

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EPreRoundStep : uint8_t {
	None = 0,
	CharacterSelect = 1,
	DeckSelect = 2,
	Lineup = 3,
	CardDraw = 4,
	Finished = 5,
	EPreRoundStep_MAX = 6,
};

enum class EVendorCategory : uint8_t {
	Weapons = 0,
	Accessories = 1,
	Attachments = 2,
	Replenishments = 3,
	Cards = 4,
	Count = 5,
	EVendorCategory_MAX = 6,
};

enum class EHasEnemy : uint8_t {
	HasEnemy = 0,
	NoEnemy = 1,
	EHasEnemy_MAX = 2,
};

enum class EComponentLookupMode : uint8_t {
	GameplayTag = 0,
	ComponentTag = 1,
	ComponentReference = 2,
	FirstFoundSkeletalMesh = 3,
	FirstFoundStaticMesh = 4,
	FirstFoundSceneComponent = 5,
	FirstFoundActorComponent = 6,
	EComponentLookupMode_MAX = 7,
};

enum class EParticleDetailMode : uint8_t {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3,
};

enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3,
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

enum class EItemPickupDialogue : uint8_t {
	None = 0,
	Regular = 1,
	Critical = 2,
	EItemPickupDialogue_MAX = 3,
};

enum class EStencilChannel : uint8_t {
	None = 0,
	FirstPerson = 1,
	HealthySurvivor = 2,
	InjuredSurvivor = 3,
	CriticalSurvivor = 4,
	ImpairedSurvivor = 5,
	Infected = 6,
	Objective = 7,
	Interaction = 8,
	Spotting = 9,
	Num_Channels = 10,
	EStencilChannel_MAX = 11,
};

enum class EGobiShadowChannel : uint8_t {
	CatchAll = 0,
	LightOccluders = 1,
	Characters = 2,
	HeroCharacters = 3,
	PhysProps = 4,
	HighQualityShadowCasters = 5,
	FPRig = 6,
	Num_Channels = 7,
	EGobiShadowChannel_MAX = 8,
};

enum class ECardFilter : uint8_t {
	All = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	Wild = 4,
	None = 5,
	ECardFilter_MAX = 6,
};

enum class ETimeStretchCurveMapping : uint8_t {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3,
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

enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5,
};

enum class EBloomMethod : uint8_t {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2,
};

enum class EZendeskReportingCategory : uint8_t {
	CHEATING = 0,
	EXPLOITING = 1,
	GRIEFING = 2,
	OFFENSIVE_CONTENT = 3,
	EZendeskReportingCategory_MAX = 4,
};

enum class EBoneSpaces : uint8_t {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2,
};

enum class EGamePropertyFloatModType : uint8_t {
	None = 0,
	ReplaceBase = 1,
	PrescaleBase = 2,
	AddToBase = 3,
	AddToBaseScale = 4,
	FinalScale = 5,
	ClampBaseMin = 6,
	ClampBaseMax = 7,
	EGamePropertyFloatModType_MAX = 8,
};

enum class EMusicEventBranchingMode : uint8_t {
	Instigator = 0,
	Target = 1,
	EMusicEventBranchingMode_MAX = 2,
};

enum class EPassageType : uint8_t {
	Empty = 0,
	Unlocked = 1,
	Locked = 2,
	Barred = 3,
	Count = 4,
	EPassageType_MAX = 5,
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

enum class ETweenTargetType : uint8_t {
	Actor = 0,
	SceneComponent = 1,
	UMG = 2,
	Material = 3,
	Custom = 4,
	ETweenTargetType_MAX = 5,
};

enum class ESplineMovementMode : uint8_t {
	FollowPlayer = 0,
	Autonomous = 1,
	ESplineMovementMode_MAX = 2,
};

enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
};

enum class EAlarmMode : uint8_t {
	Auto = 0,
	On = 1,
	Off = 2,
	EAlarmMode_MAX = 3,
};

enum class EAREnvironmentCaptureProbeType : uint8_t {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EGrappleState : uint8_t {
	Idle = 0,
	Grappled = 1,
	Breakout = 2,
	EGrappleState_MAX = 3,
};

enum class EBoneFilterActionOption : uint8_t {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3,
};

enum class EEffectApplicationItemState : uint8_t {
	Idle = 0,
	Using = 1,
	FinishUse = 2,
	Count = 3,
	EEffectApplicationItemState_MAX = 4,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
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

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EFireModeBaseState : uint8_t {
	Idle = 0,
	DelayBeforeFirstShot = 1,
	Firing = 2,
	Rechambering = 3,
	Count = 4,
	EFireModeBaseState_MAX = 5,
};

enum class EDrenchState : uint8_t {
	None = 0,
	Increasing = 1,
	Decaying = 2,
	Stable = 3,
	Replacing = 4,
	EDrenchState_MAX = 5,
};

enum class EAdditiveAnimationType : uint8_t {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3,
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

enum class EItemComparison : uint8_t {
	None = 0,
	Gain = 1,
	Loss = 2,
	EItemComparison_MAX = 3,
};

enum class EFriendRequestPanelMode : uint8_t {
	ViewRequestsSent = 0,
	ViewRequestReceived = 1,
	ViewSearchResults = 2,
	EFriendRequestPanelMode_MAX = 3,
};

enum class EPostGameStickTogetherVote : uint8_t {
	Undecided = 0,
	Accepted = 1,
	Declined = 2,
	Count = 3,
	EPostGameStickTogetherVote_MAX = 4,
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

enum class EWebSocketSessionRecvMessage : uint8_t {
	Unknown = 0,
	sessionDirty = 1,
	operationFailed = 2,
	operationUnsupported = 3,
	messageAck = 4,
	inviteReceived = 5,
	joinedMatchmaking = 6,
	leftMatchmaking = 7,
	failedMatchmaking = 8,
	finishedMatchmaking = 9,
	failedServerReservation = 10,
	dediFinishedMatchmaking = 11,
	migrationRequested = 12,
	matchmakingTelemetry = 13,
	EWebSocketSessionRecvMessage_MAX = 14,
};

enum class EEvaluateCurveTableResult : uint8_t {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2,
};

enum class EMapSpatialInfoVisibility : uint8_t {
	NotVisible = 0,
	PartiallyVisible = 1,
	CompletelyVisible = 2,
	Occupied = 3,
	EMapSpatialInfoVisibility_MAX = 4,
};

enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EAnimNotifyEventType : uint8_t {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2,
};

enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2,
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

enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
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

enum class ENiagaraExecutionState : uint8_t {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6,
};

enum class ECameraProjectionMode : uint8_t {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2,
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

enum class EMusicEventMood : uint8_t {
	Positive = 0,
	Negative = 1,
	EMusicEventMood_MAX = 2,
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

enum class ETimelineDirection : uint8_t {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2,
};

enum class EGlobalAssetPhase : uint8_t {
	None = 0,
	Early = 1,
	General = 2,
	Count = 3,
	EGlobalAssetPhase_MAX = 4,
};

enum class EMeshTopologyChange : uint8_t {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2,
};

enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
};

enum class EAlphaChannelMode : uint8_t {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3,
};

enum class EUpscalingMode : uint8_t {
	Off = 0,
	Spatial = 1,
	FSR = 2,
	DLSS = 3,
	EUpscalingMode_MAX = 4,
};

enum class EGameCoachLessonReplacementPolicy : uint8_t {
	None = 0,
	BestViewAngle = 1,
	EGameCoachLessonReplacementPolicy_MAX = 2,
};

enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

enum class EExpressionIntensity : uint8_t {
	VeryLow = 0,
	Low = 1,
	Moderate = 2,
	Intense = 3,
	VeryIntense = 4,
	Count = 5,
	EExpressionIntensity_MAX = 6,
};

enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared = 0,
	Finished = 1,
	MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags_MAX = 3,
};

enum class ETitanStage1State : uint8_t {
	Dormant = 0,
	Attacking = 1,
	PainRoar = 2,
	Retreating = 3,
	ETitanStage1State_MAX = 4,
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

enum class EGameplayTaskRunResult : uint8_t {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class ESendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3,
};

enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EUIPlayerCategory : uint8_t {
	Group = 0,
	Game = 1,
	GroupOrGame = 2,
	Teammates = 3,
	Enemies = 4,
	NonGroupTeammates = 5,
	NonGroupEnemies = 6,
	Friends = 7,
	FriendsOrGroup = 8,
	Count = 9,
	EUIPlayerCategory_MAX = 10,
};

enum class EHeroLedgeHangPose : uint8_t {
	Elbow = 0,
	TwoArm = 1,
	OneArm = 2,
	EHeroLedgeHangPose_MAX = 3,
};

enum class EBotClassRole : uint8_t {
	Combatant = 0,
	NonCombatant = 1,
	Count = 2,
	EBotClassRole_MAX = 3,
};

enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

enum class EEvaluatorMode : uint8_t {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

enum class EAnimInterpolationType : uint8_t {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2,
};

enum class ETeleportType : uint8_t {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3,
};

enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 2,
	Force16BitsPerChannel = 3,
	EGBufferFormat_MAX = 4,
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

enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class EAkWindowsAudioAPI : uint8_t {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3,
};

enum class EIconPlatform : uint8_t {
	None = 0,
	PC = 1,
	Steam = 2,
	Switch = 3,
	XboxOne = 4,
	Xbox360 = 5,
	XSX = 6,
	PS4 = 7,
	DPX = 8,
	EIconPlatform_MAX = 9,
};

enum class ESplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3,
};

enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
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

enum class EMotionBlurMode : uint8_t {
	Off = 0,
	NoCamera = 1,
	On = 2,
	EMotionBlurMode_MAX = 3,
};

enum class EMaterialLayerLinkState : uint8_t {
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class EHintTextType : uint8_t {
	Empty = 0,
	HealthLow = 1,
	Reload = 2,
	LowAmmo = 3,
	EHintTextType_MAX = 4,
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

enum class EDataSortTypeEnum : uint8_t {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4,
};

enum class EClothingWindMethodNv : uint8_t {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2,
};

enum class EClampMode : uint8_t {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3,
};

enum class ERescueOccupiedMatchType : uint8_t {
	CurrentlyOccupied = 0,
	HasEverBeenOccupied = 1,
	HasBeenRescuedFrom = 2,
	ERescueOccupiedMatchType_MAX = 3,
};

enum class ECollisionResponse : uint8_t {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3,
};

enum class ELightUnits : uint8_t {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3,
};

enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4,
};

enum class EMLP_TestMode : uint8_t {
	eNormalizeToMaxTime = 0,
	eInvertedNormalizeToMaxTime = 1,
	eFailWithinMaxTime = 2,
	EMLP_MAX = 3,
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

enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4,
};

enum class ECutscenePhase : uint8_t {
	None = 0,
	IntroFadeOut = 1,
	LevelStreaming = 2,
	Setup = 3,
	FadeIn = 4,
	PlaySequence = 5,
	OutroFadeOut = 6,
	Cleanup = 7,
	Done = 8,
	ECutscenePhase_MAX = 9,
};

enum class EDeactivationReason : uint8_t {
	Complete = 0,
	Failed = 1,
	Canceled = 2,
	EDeactivationReason_MAX = 3,
};

enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

enum class ERoomVolumeStatus : uint8_t {
	Treasure = 0,
	Blocked = 1,
	Count = 2,
	ERoomVolumeStatus_MAX = 3,
};

enum class EStaticMeshDetailMode : uint8_t {
	SMDM_Low = 0,
	SMDM_Medium = 1,
	SMDM_High = 2,
	SMDM_MAX = 3,
};

enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

enum class EScenarioState : uint8_t {
	Activating = 0,
	Activated = 1,
	Deactivating = 2,
	Deactivated = 3,
	Disabled = 4,
	EScenarioState_MAX = 5,
};

enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
};

enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4,
};

enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

enum class EEvaluationType : uint8_t {
	Disabled = 0,
	Score = 1,
	Filter = 2,
	Filter_And_Score = 3,
	EEvaluationType_MAX = 4,
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

enum class ERootMotionAccumulateMode : uint8_t {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2,
};

enum class EMeleeCollisionState : uint8_t {
	Disabled = 0,
	Overlap = 1,
	Sweep = 2,
	EMeleeCollisionState_MAX = 3,
};

enum class EDatasmithImportHierarchy : uint8_t {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3,
};

enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	None = 3,
	EButtonTouchMethod_MAX = 4,
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
	VMI_CollisionPreset = 26,
	VMI_Max = 27,
	VMI_Unknown = 28,
};

enum class EMatrixColumns : uint8_t {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4,
};

enum class EMeshBufferAccess : uint8_t {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2,
};

enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2,
};

enum class ELightingScenarioMapListBehavior : uint8_t {
	LSM_OnlyLightMapsInList = 0,
	LSM_OnlyLightMapsNotInList = 1,
	LSM_MAX = 2,
};

enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

enum class EPlayerProfileStat : uint8_t {
	RiddenKilled = 0,
	RiddenMutationsKilled = 1,
	RiddenBossesKilled = 2,
	RiddenKilledByType = 3,
	RiddenKilledByWeapon = 4,
	RiddenKilledWhileIncapped = 5,
	CleanersRevived = 6,
	CleanersRescued = 7,
	FriendlyCleanersKilled = 8,
	HealingApplied = 9,
	TimesDiedAsCleaner = 10,
	TimesIncappedAsCleaner = 11,
	TreasureDoorsOpened = 12,
	HordesTriggered = 13,
	CardsPlayed = 14,
	BarSongsHeard = 15,
	AmmoDropped = 16,
	CaravanItemsPurchased = 17,
	SnitchersSilenced = 18,
	PVPKillsAsCleaners = 19,
	PVPIncapsAsRidden = 20,
	PVPKillsAsRidden = 21,
	PVPGamesPlayed = 22,
	PVPGamesWon = 23,
	EnemyDamageInflicted = 24,
	FriendlyDamageInflicted = 25,
	CommonRiddenDamageInflicted = 26,
	SpecialRiddenDamageInflicted = 27,
	EnemyCleanerDamageInflicted = 28,
	OtherDamageInflicted = 29,
	WeakSpotDamageInflicted = 30,
	Bespoke_Secured = 31,
	Bespoke_Unsecured = 32,
	MissionsCompleted_Secured = 33,
	MissionsCompleted_Unsecured = 34,
	TeamAchievements_Unsecured = 35,
	Debug_Secured = 36,
	Debug_Unsecured = 37,
	Count = 38,
	EPlayerProfileStat_MAX = 39,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EComponentCreationMethod : uint8_t {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4,
};

enum class ENiagaraPreviewGridResetMode : uint8_t {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraRibbonDrawDirection : uint8_t {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class EMapPipState : uint8_t {
	Past = 0,
	Present = 1,
	Future = 2,
	EMapPipState_MAX = 3,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4,
};

enum class EAngularDriveMode : uint8_t {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2,
};

enum class ETitanTentacleState : uint8_t {
	Idle = 0,
	SmashTell = 1,
	SmashAttack = 2,
	SwipeTell = 3,
	SwipeAttack = 4,
	ETitanTentacleState_MAX = 5,
};

enum class ENiagaraLegacyTrailWidthMode : uint8_t {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENiagaraScalabilityUpdateFrequency : uint8_t {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
};

enum class EPhysicsCasterType : uint8_t {
	Ray = 0,
	RayMulti = 1,
	Sweep = 2,
	EPhysicsCasterType_MAX = 3,
};

enum class EGamePropertyIntModType : uint8_t {
	None = 0,
	ReplaceBase = 1,
	PrescaleBase = 2,
	AddToBase = 3,
	AddToBaseScale = 4,
	FinalScale = 5,
	ClampBaseMin = 6,
	ClampBaseMax = 7,
	EGamePropertyIntModType_MAX = 8,
};

enum class EMeshBoolApplicationType : uint8_t {
	On = 0,
	Off = 1,
	InheritParent = 2,
	NoAdjustment = 3,
	EMeshBoolApplicationType_MAX = 4,
};

enum class EUdpMessageFormat : uint8_t {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5,
};

enum class EBuildEnvironmentConfigurationState : uint8_t {
	Initial = 0,
	Fetching = 1,
	Skipped = 2,
	FetchFailed = 3,
	InvalidSignature = 4,
	JsonParseFailure = 5,
	FetchSucceeded = 6,
	EBuildEnvironmentConfigurationState_MAX = 7,
};

enum class EStereoDelaySourceEffect : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2,
};

enum class ETweenReferenceAxis : uint8_t {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ETweenReferenceAxis_MAX = 3,
};

enum class ECompositingSampleCount : uint8_t {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	ECompositingSampleCount_MAX = 4,
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

enum class ETextToSpeechVoice : uint8_t {
	Off = 0,
	Male = 1,
	Female = 2,
	Count = 3,
	ETextToSpeechVoice_MAX = 4,
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

enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

enum class EAttachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3,
};

enum class EMouseCaptureMode : uint8_t {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5,
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

enum class ELineType : uint8_t {
	Bark = 0,
	Conversation = 1,
	Prerender = 2,
	ELineType_MAX = 3,
};

enum class EMusicEventValidity : uint8_t {
	Invalid = 0,
	Valid = 1,
	ValidFirstPerson = 2,
	EMusicEventValidity_MAX = 3,
};

enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2,
};

enum class EBruteState : uint8_t {
	BS_Idle = 0,
	BS_Melee = 1,
	BS_TumorToss = 2,
	BS_ReachIn = 3,
	BS_Despawn = 4,
	BS_Count = 5,
	BS_MAX = 6,
};

enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

enum class EMonoChannelUpmixMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3,
};

enum class ENiagaraPlatformSetState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4,
};

enum class EGameplayEffectStackRemovalRules : uint8_t {
	RemoveIndividualStack = 0,
	RemoveAllStacks = 1,
	EGameplayEffectStackRemovalRules_MAX = 2,
};

enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2,
};

enum class EInputCaptureState : uint8_t {
	Begin = 0,
	Continue = 1,
	End = 2,
	Ignore = 3,
	EInputCaptureState_MAX = 4,
};

enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2,
};

enum class ESourceEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
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

enum class ECharacterFilter : uint8_t {
	Any = 0,
	LocalPlayer = 1,
	ECharacterFilter_MAX = 2,
};

enum class EPacingPhase : uint8_t {
	Invalid = 0,
	Calm = 1,
	Violent = 2,
	PeakSustain = 3,
	PeakFade = 4,
	Recover = 5,
	HordeCleanup = 6,
	EPacingPhase_MAX = 7,
};

enum class EInertializationState : uint8_t {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3,
};

enum class ELeapModeState : uint8_t {
	Idle = 0,
	Leaping = 1,
	Count = 2,
	ELeapModeState_MAX = 3,
};

enum class ESplineCoordinateSpace : uint8_t {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2,
};

enum class ECampaignRoundResult : uint8_t {
	None = 0,
	Succeeded = 1,
	Failed = 2,
	ECampaignRoundResult_MAX = 3,
};

enum class EARFrameSyncMode : uint8_t {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2,
};

enum class ELoadoutSource : uint8_t {
	Character = 0,
	GameplayMod = 1,
	ELoadoutSource_MAX = 2,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

enum class ETRSSplineMeshActorMeshType : uint8_t {
	StaticMesh = 0,
	InstancedStaticMesh = 1,
	SplineMeshes = 2,
	ETRSSplineMeshActorMeshType_MAX = 3,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

enum class InjectionType : uint8_t {
	VelocityPressure = 0,
	Color = 1,
	Blocker = 2,
	Dampener = 3,
	AbsoluteVelocityPressure = 4,
	Count = 5,
	InjectionType_MAX = 6,
};

enum class ETriggerHordeState : uint8_t {
	Idle = 0,
	Triggering = 1,
	Count = 2,
	ETriggerHordeState_MAX = 3,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3,
};

enum class EAnimationMode : uint8_t {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3,
};

enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5,
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

enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3,
};

enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

enum class ENiagaraMeshFacingMode : uint8_t {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4,
};

enum class ECustomDepthStencil : uint8_t {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4,
};

enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2,
};

enum class EBoolValue : uint8_t {
	BV_True = 0,
	BV_False = 1,
	BV_MAX = 2,
};

enum class EObjectiveState : uint8_t {
	Active = 0,
	Completed = 1,
	Failed = 2,
	Count = 3,
	EObjectiveState_MAX = 4,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4,
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

enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EAgoraHydraGetAllowListSecuritySetting : uint8_t {
	Deny = 0,
	Allow = 1,
	Validate = 2,
	EAgoraHydraGetAllowListSecuritySetting_MAX = 3,
};

enum class EGameCoachLessonState : uint8_t {
	Idle = 0,
	Teachable = 1,
	TeachingDelay = 2,
	Teaching = 3,
	Cooldown = 4,
	EGameCoachLessonState_MAX = 5,
};

enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
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

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4,
};

enum class ESharedSoundCollectionMode : uint8_t {
	Invalid = 0,
	Human = 1,
	Enemy = 2,
	ESharedSoundCollectionMode_MAX = 3,
};

enum class ESplineMeshMode : uint8_t {
	Tiling = 0,
	Repeating = 1,
	Stretching = 2,
	ESplineMeshMode_MAX = 3,
};

enum class EHorizTextAligment : uint8_t {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3,
};

enum class EMeleeState : uint8_t {
	Idle = 0,
	Cooking = 1,
	MeleeActive = 2,
	MeleeImpact = 3,
	PrepReattack = 4,
	Count = 5,
	EMeleeState_MAX = 6,
};

enum class EPounceState : uint8_t {
	Idle = 0,
	Cooking = 1,
	Leaping = 2,
	Landing = 3,
	Attacking = 4,
	KickingOff = 5,
	ReleasingDeadCharacter = 6,
	Count = 7,
	EPounceState_MAX = 8,
};

enum class ERoomVolumeType : uint8_t {
	Treasurable = 0,
	Blockable = 1,
	Count = 2,
	ERoomVolumeType_MAX = 3,
};

enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
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

enum class EQualitySettings : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Count = 4,
	EQualitySettings_MAX = 5,
};

enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

enum class EShadowMapFlags : uint8_t {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2,
};

enum class EPhysicsCasterTraceType : uint8_t {
	Channel = 0,
	Object = 1,
	Profile = 2,
	EPhysicsCasterTraceType_MAX = 3,
};

enum class ChannelType : uint8_t {
	NonPositional = 0,
	Positional = 1,
	Echo = 2,
	ChannelType_MAX = 3,
};

enum class EBitmapCSType : uint8_t {
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5,
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

enum class ENiagaraCullReaction : uint8_t {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4,
};

enum class EStumbleDirection : uint8_t {
	Forward = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	None = 4,
	EStumbleDirection_MAX = 5,
};

enum class ECanTriggerActionOptions : uint8_t {
	None = 0,
	Set = 1,
	Clear = 2,
	OnChangeOnly = 3,
	ECanTriggerActionOptions_MAX = 4,
};

enum class EObjectPropertyModType : uint8_t {
	Float = 0,
	Int = 1,
	EObjectPropertyModType_MAX = 2,
};

enum class EGobiPlayerCustomMove : uint8_t {
	Invalid = 0,
	None = 1,
	Mantle = 2,
	PostGobiPlayerCustomMove = 3,
	EGobiPlayerCustomMove_MAX = 4,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class EVendorSaleBehavior : uint8_t {
	MatchOne = 0,
	MatchAll = 1,
	MatchAllAndReroll = 2,
	EVendorSaleBehavior_MAX = 3,
};

enum class ECanSpawnResult : uint8_t {
	Success = 0,
	LineOfSight = 1,
	Distance = 2,
	SafeRoom = 3,
	PreMatchStart = 4,
	PreparationArea = 5,
	LockedInSafeRoom = 6,
	Climbing = 7,
	Damaged = 8,
	Unknown = 9,
	InSafeRoom = 10,
	Falling = 11,
	OnCooldown = 12,
	ECanSpawnResult_MAX = 13,
};

enum class EDataSourceTypeEnum : uint8_t {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3,
};

enum class EParticleCollisionResponse : uint8_t {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class EReflectionSourceType : uint8_t {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2,
};

enum class ENavLinkContextDistances : uint8_t {
	NLCD_ClimbUp = 0,
	NLCD_Top = 1,
	NLCD_ClimbDown = 2,
	NLCD_MAX = 3,
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

enum class ENetDormancy : uint8_t {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5,
};

enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3,
};

enum class EQualityLevel : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	Count = 5,
	EQualityLevel_MAX = 6,
};

enum class EPacketRelayServerPacket : uint8_t {
	TokenRequest = 0,
	TokenResponse = 1,
	Heartbeat = 2,
	ClientData = 3,
	EPacketRelayServerPacket_MAX = 4,
};

enum class ELayoutType : uint8_t {
	Invalid = 0,
	CharacterSelect = 1,
	PreRoundLockIn = 2,
	PostRound = 3,
	ELayoutType_MAX = 4,
};

enum class ELicensePopupMode : uint8_t {
	EULA = 0,
	Software = 1,
	ELicensePopupMode_MAX = 2,
};

enum class EPhysicsType : uint8_t {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3,
};

enum class EGroupInvitePrivacy : uint8_t {
	FromAnyone = 0,
	OnlyFromFriends = 1,
	None = 2,
	EGroupInvitePrivacy_MAX = 3,
};

enum class EPolygonEdgeHardness : uint8_t {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4,
};

enum class ParticipantSpeakingUpdateRate : uint8_t {
	StateChange = 0,
	Never = 1,
	Update1Hz = 2,
	Update5Hz = 3,
	Update10Hz = 4,
	ParticipantSpeakingUpdateRate_MAX = 5,
};

enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

enum class EGameplayTagOperation : uint8_t {
	AddOnActivate = 0,
	AddOnDeactivate = 1,
	RemoveOnActivate = 2,
	RemoveOnDeactivate = 3,
	ClearOnActivate = 4,
	ClearOnDeactivate = 5,
	AddAndRestore = 6,
	ClearAndRestore = 7,
	EGameplayTagOperation_MAX = 8,
};

enum class EPawnControllerType : uint8_t {
	AI = 0,
	Player = 1,
	Both = 2,
	EPawnControllerType_MAX = 3,
};

enum class ENiagaraIterationSource : uint8_t {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2,
};

enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class ENiagaraSimTarget : uint8_t {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2,
};

enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2,
};

enum class EAkChannelConfigType : uint8_t {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3,
};

enum class EAngleAxis : uint8_t {
	Yaw = 0,
	Pitch = 1,
	Roll = 2,
	Angle = 3,
	EAngleAxis_MAX = 4,
};

enum class EGraphType : uint8_t {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5,
};

enum class EClothMassMode : uint8_t {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4,
};

enum class EPinHidingMode : uint8_t {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4,
};

enum class PreferenceQuadrant : uint8_t {
	FrontRight = 0,
	FrontLeft = 1,
	BackLeft = 2,
	BackRight = 3,
	MaxQuadrants = 4,
	PreferenceQuadrant_MAX = 5,
};

enum class EPlayerProfileCommandType : uint8_t {
	Unknown = 0,
	CreateDeck = 1,
	UpdateDeck = 2,
	RemoveDeck = 3,
	TrackRecentCharacter = 4,
	AdjustSupplyPoints = 5,
	UnlockProduct = 6,
	AdjustStatValue = 7,
	UnlockStartingLocation = 8,
	UpsertCaravan = 9,
	RemoveCaravan = 10,
	RemoveAllCaravans = 11,
	PurchaseCaravanItem = 12,
	UpdateBadge = 13,
	UpdateSpray = 14,
	DeleteCampaignRun = 15,
	CompleteAchievement = 16,
	ApplyWeaponSkin = 17,
	EquipCharacterCustomizationSet = 18,
	AdjustConsumableQuantity = 19,
	EPlayerProfileCommandType_MAX = 20,
};

enum class ERescueSpawnPointType : uint8_t {
	Invalid = 0,
	SpawnCloset = 1,
	SleeperVictim = 2,
	NPCVictim = 3,
	ERescueSpawnPointType_MAX = 4,
};

enum class ECopyType : uint8_t {
	PlainProperty = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	NameProperty = 4,
	ECopyType_MAX = 5,
};

enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5,
};

enum class EProductClass : uint8_t {
	BurnCard = 0,
	Card = 1,
	Character = 2,
	CharacterSkin = 3,
	WeaponSkin = 4,
	Title = 5,
	Emblem = 6,
	Banner = 7,
	Spray = 8,
	Count = 9,
	EProductClass_MAX = 10,
};

enum class EPropertyAccessChangeNotifyMode : uint8_t {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
};

enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2,
};

enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5,
};

enum class EBirdState : uint8_t {
	Uninitialized = 0,
	ReadyForTakeOff = 1,
	TakeOffPause = 2,
	Flying = 3,
	Landing = 4,
	LandedTurning = 5,
	LandedInert = 6,
	Dead = 7,
	EBirdState_MAX = 8,
};

enum class ENiagaraOrientationAxis : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	ENiagaraOrientationAxis_MAX = 3,
};

enum class EActorSequenceObjectReferenceType : uint8_t {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};

enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

enum class ESleeperAnimBehaviorState : uint8_t {
	Idle = 0,
	Alert = 1,
	Launch = 2,
	Attack = 3,
	Death = 4,
	ESleeperAnimBehaviorState_MAX = 5,
};

enum class EComponentMobility : uint8_t {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3,
};

enum class EToolMessageLevel : uint8_t {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5,
};

enum class EChargeState : uint8_t {
	Idle = 0,
	Charging = 1,
	Deccelerating = 2,
	Stumbling = 3,
	Count = 4,
	EChargeState_MAX = 5,
};

enum class ENiagaraExpansionMode : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	ENiagaraExpansionMode_MAX = 3,
};

enum class EWaypointVisibility : uint8_t {
	All = 0,
	Hero = 1,
	Zombie = 2,
	OwnerTeam = 3,
	OwnerOnly = 4,
	EWaypointVisibility_MAX = 5,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5,
};

enum class EOnlineConfigurationState : uint8_t {
	Initial = 0,
	Fetching = 1,
	FetchSucceeded = 2,
	FetchFailed = 3,
	FetchDisabled = 4,
	EOnlineConfigurationState_MAX = 5,
};

enum class EDebugTypeEnum : uint8_t {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3,
};

enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3,
};

enum class ELightmapType : uint8_t {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3,
};

enum class ELanguageAudioTrack : uint8_t {
	English = 0,
	SpanishLatin = 1,
	PortugueseBrazilian = 2,
	French = 3,
	SpanishCastillian = 4,
	Italian = 5,
	German = 6,
	Default = 7,
	ELanguageAudioTrack_MAX = 8,
};

enum class EKillFeedState : uint8_t {
	Alive = 0,
	Incapped = 1,
	LedgeHang = 2,
	Dead = 3,
	NeedsRescue = 4,
	EKillFeedState_MAX = 5,
};

enum class EWindSourceType : uint8_t {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2,
};

enum class ESubmixFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4,
};

enum class ENiagaraScriptGroup : uint8_t {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3,
};

enum class EDesiredImageFormat : uint8_t {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4,
};

enum class EBrushType : uint8_t {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3,
};

enum class ELerpInterpolationMode : uint8_t {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3,
};

enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

enum class EDrenchSettings : uint8_t {
	None = 0,
	Incap = 1,
	Dead = 2,
	EDrenchSettings_MAX = 3,
};

enum class EZombieFacialExpression : uint8_t {
	NeutralFirst = 0,
	NeutralA = 1,
	NeutralLast = 2,
	AlertedFirst = 3,
	AlertedA = 4,
	AlertedLast = 5,
	ActiveFirst = 6,
	ActiveA = 7,
	ActiveLast = 8,
	PainFirst = 9,
	PainA = 10,
	PainLast = 11,
	DyingFirst = 12,
	DyingA = 13,
	DyingLast = 14,
	Count = 15,
	EZombieFacialExpression_MAX = 16,
};

enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
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

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EMatchmakingTeam : uint8_t {
	TeamA = 0,
	TeamB = 1,
	Unknown = 2,
	Count = 3,
	EMatchmakingTeam_MAX = 4,
};

enum class EHydraPurchaseProductResult : uint8_t {
	Success = 0,
	UnknownError = 1,
	HeadersInvalid = 2,
	ProductSlugInvalid = 3,
	ProductFetchFailed = 4,
	ExpectedPriceInvalid = 5,
	ChangelistInvalid = 6,
	ChangelistUnauthorized = 7,
	PriceSelectionFailed = 8,
	PriceMismatch = 9,
	PurchaseFailed = 10,
	ProfileGetFailed = 11,
	SlugMismatch = 12,
	ItemIndexInvalid = 13,
	CaravanIdInvalid = 14,
	Count = 15,
	EHydraPurchaseProductResult_MAX = 16,
};

enum class ELocoChooseMode : uint8_t {
	Random = 0,
	TagQuery = 1,
	Count = 2,
	ELocoChooseMode_MAX = 3,
};

enum class EMontagePlayReturnType : uint8_t {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2,
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

enum class EDistanceOperation : uint8_t {
	Equal_To = 0,
	Not_Equal_To = 1,
	Greater_Than_Or_Equal_To = 2,
	Less_Than_Or_Equal_To = 3,
	Greater_Than = 4,
	Less_Than = 5,
	EDistanceOperation_MAX = 6,
};

enum class EDrawDebugTrace : uint8_t {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4,
};

enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4,
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

enum class ESenseHearingMode : uint8_t {
	MinimumRadiusCheck = 0,
	OverlappingRadiusCheck = 1,
	ESenseHearingMode_MAX = 2,
};

enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3,
};

enum class ESynthStereoDelayMode : uint8_t {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4,
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

enum class EBTParallelExMode : uint8_t {
	ParallelPrimary = 0,
	ParallelSecondary = 1,
	EBTParallelExMode_MAX = 2,
};

enum class EAnimSpeed : uint8_t {
	NewEnumerator0 = 0,
	EAnimSpeed_MAX = 1,
};

enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2,
};

enum class AnimPhysSimSpaceType : uint8_t {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5,
};

enum class EHydraAuthType : uint8_t {
	Unknown = 0,
	Null = 1,
	PSN = 2,
	GDK = 3,
	Steam = 4,
	EOS = 5,
	EHydraAuthType_MAX = 6,
};

enum class ELocationYToSpawnEnum : uint8_t {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ESafeRoomEvalType : uint8_t {
	Any = 0,
	Start = 1,
	End = 2,
	ESafeRoomEvalType_MAX = 3,
};

enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 3,
	Unknown = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5,
};

enum class AkAcousticPortalState : uint8_t {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2,
};

enum class EInertializationBoneState : uint8_t {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3,
};

enum class ETumorAltAimModes : uint8_t {
	NoAimMode = 0,
	EnemyOnly = 1,
	AltNearestEnemy = 2,
	AltNearestBrute = 3,
	AltNearestDirect = 4,
	AverageAlts = 5,
	AverageAltsAndEnemy = 6,
	WeightedAverageEnemy = 7,
	WeightedAverageBrute = 8,
	WeightedAverageDirect = 9,
	MaxFlag = 10,
	ETumorAltAimModes_MAX = 11,
};

enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

enum class EMusicStateType : uint8_t {
	UI = 0,
	Progression = 1,
	Map = 2,
	Scenario = 3,
	Horde = 4,
	ExploreOverride = 5,
	EMusicStateType_MAX = 6,
};

enum class EDamageContext : uint8_t {
	FriendlyFire = 0,
	Armor = 1,
	DestroyedArmor = 2,
	CritSpot = 3,
	WeakSpot = 4,
	DestroyedWeakSpot = 5,
	KillingBlow = 6,
	WeakSpotForwardedDamage = 7,
	Count = 8,
	EDamageContext_MAX = 9,
};

enum class EScenarioManagerPhase : uint8_t {
	BeginPlay = 0,
	MatchStart = 1,
	EScenarioManagerPhase_MAX = 2,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3,
};

enum class EAnimNotifySpawnImpactTraceDirection : uint8_t {
	Down = 0,
	Forward = 1,
	Up = 2,
	EAnimNotifySpawnImpactTraceDirection_MAX = 3,
};

enum class ETitanStage3TentacleState : uint8_t {
	Idle = 0,
	AcidSprayAttackEnter = 1,
	AcidSprayAttackLoop = 2,
	AcidSprayAttackExit = 3,
	ETitanStage3TentacleState_MAX = 4,
};

enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2,
};

enum class EReflectionsType : uint8_t {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2,
};

enum class EPinContainerType : uint8_t {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4,
};

enum class EGranularSynthSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

enum class EColorBlindMode : uint8_t {
	Default = 0,
	Protanopia = 1,
	Deuteranopia = 2,
	Tritanopia = 3,
	Custom = 4,
	Count = 5,
	EColorBlindMode_MAX = 6,
};

enum class EAutoPossessAI : uint8_t {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4,
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

enum class EIncapState : uint8_t {
	None = 0,
	Incap = 1,
	Reviving = 2,
	EIncapState_MAX = 3,
};

enum class EDatasmithAreaLightActorType : uint8_t {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3,
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

enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3,
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

enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4,
};

enum class ESignOutError : uint8_t {
	None = 0,
	LostGroupSession = 1,
	AtuinEnvironmentChanged = 2,
	SignedOut = 3,
	SignedOutOnline = 4,
	HydraUnauthorized = 5,
	HydraBanned = 6,
	HydraKicked = 7,
	HydraMaintenanceMode = 8,
	HydraLostConnection = 9,
	ESignOutError_MAX = 10,
};

enum class EReverbSendMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3,
};

enum class EStereoChannelMode : uint8_t {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3,
};

enum class EVertexPaintAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3,
};

enum class EItemCycleState : uint8_t {
	RaisedIdle = 0,
	Lowering = 1,
	LoweredIdle = 2,
	Raising = 3,
	QuickRaise = 4,
	Count = 5,
	EItemCycleState_MAX = 6,
};

enum class ESynthSlateColorStyle : uint8_t {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ETitanStage1TentacleState : uint8_t {
	Dormant = 0,
	Emerge = 1,
	Idle = 2,
	SlapAttackWindUp = 3,
	SlapAttackWindUpStumble = 4,
	SlapAttack = 5,
	SlapAttackGroundLoop = 6,
	SlapAttackRecover = 7,
	WoundedIdle = 8,
	AcidSprayAttackWindUp = 9,
	AcidSprayAttackEnter = 10,
	AcidSprayAttackLoop = 11,
	AcidSprayAttackExit = 12,
	PainRoar = 13,
	AcidSpray = 14,
	Retract = 15,
	Count = 16,
	ETitanStage1TentacleState_MAX = 17,
};

enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

enum class EItemAttributeType : uint8_t {
	Damage = 0,
	Range = 1,
	Accuracy = 2,
	Mobility = 3,
	Radius = 4,
	Heal = 5,
	Stun = 6,
	Burn = 7,
	UseTime = 8,
	Duration = 9,
	TempHealth = 10,
	Replenish = 11,
	SlowTarget = 12,
	Vulnerable = 13,
	Supply = 14,
	ReviveHealth = 15,
	Reload = 16,
	Handling = 17,
	ClipSize = 18,
	FireRate = 19,
	TraumaHeal = 20,
	Count = 21,
	EItemAttributeType_MAX = 22,
};

enum class EEvalDimension : uint8_t {
	In_3D = 0,
	In_2D = 1,
	In_Z = 2,
	In_Z_Absolute = 3,
	In_Delta = 4,
	In_MAX = 5,
};

enum class EMusicEventIntensity : uint8_t {
	Major = 0,
	Minor = 1,
	EMusicEventIntensity_MAX = 2,
};

enum class ETeamCounts : uint8_t {
	OneTeam = 0,
	TwoTeams = 1,
	Count = 2,
	ETeamCounts_MAX = 3,
};

enum class ESpawnDeckState : uint8_t {
	DeckStatus_Idling = 0,
	DeckStatus_WaitingForDrawDelay = 1,
	DeckStatus_DrawingCard = 2,
	DeckStatus_CheckingForSpawners = 3,
	DeckStatus_CheckingForSpawnersWithoutOverride = 4,
	DeckStatus_SpawningForCard = 5,
	DeckStatus_Completed = 6,
	DeckStatus_MAX = 7,
};

enum class ERadiusOperation : uint8_t {
	eMultiply = 0,
	eOverride = 1,
	ERadiusOperation_MAX = 2,
};

enum class EZombieAttachLocationType : uint8_t {
	Wall = 0,
	Ceiling = 1,
	Pole = 2,
	Perchable = 3,
	Count = 4,
	Invalid = 5,
	EZombieAttachLocationType_MAX = 6,
};

enum class EAudioOutputTarget : uint8_t {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3,
};

enum class EAlarmState : uint8_t {
	None = 0,
	Armed = 1,
	Active = 2,
	Done = 3,
	EAlarmState_MAX = 4,
};

enum class EInvitation : uint8_t {
	None = 0,
	Start = 1,
	StoppingMatchmaking = 2,
	WaitingForStopMatchmaking = 3,
	JoiningGroupSession = 4,
	JoiningGameSession = 5,
	RejoiningGameSession = 6,
	WaitingForRelayData = 7,
	WaitingForInvitingUserToJoin = 8,
	FailureCleanup = 9,
	Count = 10,
	EInvitation_MAX = 11,
};

enum class EEventTriggerPolicy : uint8_t {
	ServerOnly = 0,
	ClientOnly = 1,
	ClientOrServer = 2,
	EEventTriggerPolicy_MAX = 3,
};

enum class EBeaconConnectionState : uint8_t {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4,
};

enum class EDeathGasSpawnState : uint8_t {
	Idle = 0,
	Spawning = 1,
	Count = 2,
	EDeathGasSpawnState_MAX = 3,
};

enum class ACLCompressionLevel : uint8_t {
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_MAX = 5,
};

enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
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

enum class ECharacterMusicMode : uint8_t {
	Engaged = 0,
	Passive = 1,
	Distant = 2,
	ECharacterMusicMode_MAX = 3,
};

enum class ENiagaraSpriteFacingMode : uint8_t {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5,
};

enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

enum class EFriendInviteStatus : uint8_t {
	Unknown = 0,
	Accepted = 1,
	PendingInbound = 2,
	PendingOutbound = 3,
	Blocked = 4,
	EFriendInviteStatus_MAX = 5,
};

enum class EInputCaptureRequestType : uint8_t {
	Begin = 0,
	Ignore = 1,
	EInputCaptureRequestType_MAX = 2,
};

enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3,
};

enum class EAASVisibility : uint8_t {
	Unknown = 0,
	NotVisible = 1,
	Visible = 2,
	EAASVisibility_MAX = 3,
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

enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

enum class EBotTraversalType : uint8_t {
	Teleport = 0,
	Mantle = 1,
	JumpAcross = 2,
	JumpDown = 3,
	CrouchWalk = 4,
	Count = 5,
	EBotTraversalType_MAX = 6,
};

enum class EPostCopyOperation : uint8_t {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2,
};

enum class WaterForceChannelType : uint8_t {
	GlobalForceChannel = 0,
	DetailForceChannel = 1,
	AllChannels = 2,
	WaterForceChannelType_MAX = 3,
};

enum class EEarlyZPass : uint8_t {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4,
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

enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
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

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
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

enum class EInstanceSplineMeshAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	EInstanceSplineMeshAxis_MAX = 3,
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

enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5,
};

enum class EThreatChange_Mode : uint8_t {
	Mode_Always = 0,
	Mode_OnlyDuringHorde = 1,
	Mode_OnlyDuringWander = 2,
	Mode_MAX = 3,
};

enum class EGameplayCardCategory : uint8_t {
	All = 0,
	Challenge = 1,
	Loadout = 2,
	Scavenger = 3,
	Backpack = 4,
	Saferoom = 5,
	Vendor = 6,
	Starter = 7,
	Hero = 8,
	Stat = 9,
	Talent = 10,
	Economy = 11,
	Loot = 12,
	Ability = 13,
	Zombie = 14,
	Event = 15,
	Scenario = 16,
	Objective = 17,
	Finale = 18,
	Offense = 19,
	Defense = 20,
	Utility = 21,
	Mobility = 22,
	ObjectiveSurvive = 23,
	ObjectiveTimed = 24,
	ObjectiveKill = 25,
	ObjectiveCollect = 26,
	ObjectiveNoAlarm = 27,
	EGameplayCardCategory_MAX = 28,
};

enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

enum class EMissionObjectiveConditionType : uint8_t {
	ObjectiveComplete = 0,
	ObjectiveCountFinished = 1,
	EMissionObjectiveConditionType_MAX = 2,
};

enum class EGrammaticalGender : uint8_t {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4,
};

enum class EMobileMSAASampleCount : uint8_t {
	Zero = 0,
	One = 1,
	Two = 2,
	Four = 3,
	Eight = 4,
	EMobileMSAASampleCount_MAX = 5,
};

enum class EPanningMethod : uint8_t {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2,
};

enum class EActiveCampaignRunType : uint8_t {
	None = 0,
	NewRun = 1,
	ResumedRun = 2,
	EActiveCampaignRunType_MAX = 3,
};

enum class EPingType : uint8_t {
	Default = 0,
	Door = 1,
	Enemy = 2,
	SpecialEnemy = 3,
	Item = 4,
	Interactable = 5,
	TraumaKit = 6,
	Pinned = 7,
	Birds = 8,
	Explosive = 9,
	TreasureDoor = 10,
	Car = 11,
	AlarmedCar = 12,
	Count = 13,
	EPingType_MAX = 14,
};

enum class EComputeNTBsOptions : uint8_t {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4,
};

enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2,
};

enum class ERingModulatorTypeSourceEffect : uint8_t {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
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

enum class EPSCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5,
};

enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4,
};

enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
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

enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5,
};

enum class EFortDediStatus : uint8_t {
	Launching = 0,
	Unassigned = 1,
	Pending = 2,
	InUse = 3,
	Resetting = 4,
	FinishingMatch = 5,
	Terminating = 6,
	EFortDediStatus_MAX = 7,
};

enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
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

enum class EZombieCustomMove : uint8_t {
	Invalid = 0,
	Charge = 1,
	EZombieCustomMove_MAX = 2,
};

enum class EGraphAxisStyle : uint8_t {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3,
};

enum class EProceduralBuildPhase : uint8_t {
	EPBP_PreNavBuild = 0,
	EPBP_PostNavBuild = 1,
	EPBP_MAX = 2,
};

enum class ETimedDataInputState : uint8_t {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3,
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

enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3,
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

enum class EOscillatorWaveform : uint8_t {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2,
};

enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 3,
	Unknown = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5,
};

enum class EStandardToolContextMaterials : uint8_t {
	VertexColorMaterial = 0,
	EStandardToolContextMaterials_MAX = 1,
};

enum class EBotType : uint8_t {
	PlayerBot = 0,
	AllBotTeam = 1,
	NPC = 2,
	Disabled = 3,
	Count = 4,
	EBotType_MAX = 5,
};

enum class EFrictionCombineMode : uint8_t {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3,
};

enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class EPlayerStatSource : uint8_t {
	ClientAuthoritativeData = 0,
	ServerAuthoritativeData = 1,
	EPlayerStatSource_MAX = 2,
};

enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
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

enum class EDeathGasState : uint8_t {
	WarmUp = 0,
	Shrinking = 1,
	Stable = 2,
	EDeathGasState_MAX = 3,
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

enum class EFerryState : uint8_t {
	Idle = 0,
	Moving = 1,
	Finished = 2,
	Destroyed = 3,
	EFerryState_MAX = 4,
};

enum class EItemTransferState : uint8_t {
	None = 0,
	Up = 1,
	Down = 2,
	Invalid = 3,
	EItemTransferState_MAX = 4,
};

enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

enum class EActorRole : uint8_t {
	eSelf = 0,
	eOwner = 1,
	EActorRole_MAX = 2,
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

enum class EBlendSpaceAxis : uint8_t {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3,
};

enum class EBlackboardValueContext : uint8_t {
	None = 0,
	Activation = 1,
	Deactivation = 2,
	OnChange = 3,
	EBlackboardValueContext_MAX = 4,
};

enum class AkMultiPositionType : uint8_t {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3,
};

enum class EWanderBucketDensityLevel : uint8_t {
	Empty = 0,
	Light = 1,
	Moderate = 2,
	Heavy = 3,
	EWanderBucketDensityLevel_MAX = 4,
};

enum class EARTrackingQualityReason : uint8_t {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	EARTrackingQualityReason_MAX = 5,
};

enum class EAudioRecordingExportType : uint8_t {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2,
};

enum class EPrimaryAssetCookRule : uint8_t {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5,
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

enum class EGenderTarget : uint8_t {
	NonBinary = 0,
	Female = 1,
	Male = 2,
	EGenderTarget_MAX = 3,
};

enum class EFOVConstraint : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	EFOVConstraint_MAX = 2,
};

enum class ELocationFilteringModeEnum : uint8_t {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2,
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

enum class EDismembermentTestMode : uint8_t {
	None = 0,
	All = 1,
	Any = 2,
	EDismembermentTestMode_MAX = 3,
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

enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class ETextureMipLoadOptions : uint8_t {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3,
};

enum class EBirdAfterInitialFlight : uint8_t {
	Normal = 0,
	Inert = 1,
	EBirdAfterInitialFlight_MAX = 2,
};

enum class ETweenFloatType : uint8_t {
	MaterialScalarFromTo = 0,
	MaterialScalarTo = 1,
	RotateAroundPoint = 2,
	FollowSpline = 3,
	WidgetAngleTo = 4,
	WidgetOpacityTo = 5,
	Custom = 6,
	ETweenFloatType_MAX = 7,
};

enum class ACLVisualFidelity : uint8_t {
	Highest = 0,
	Medium = 1,
	Lowest = 2,
	ACLVisualFidelity_MAX = 3,
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

enum class EARLightEstimationMode : uint8_t {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3,
};

enum class EDemoCameraMode : uint8_t {
	FreeLook = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	Count = 3,
	EDemoCameraMode_MAX = 4,
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

enum class EAnimLinkMethod : uint8_t {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3,
};

enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
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

enum class ESettingsLockedAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5,
};

enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4,
};

enum class ELeaverPenaltyState : uint8_t {
	None = 0,
	ReadyToEnforce = 1,
	AlreadyEnforced = 2,
	Disabled = 3,
	ELeaverPenaltyState_MAX = 4,
};

enum class CurveInterpolationType : uint8_t {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3,
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

enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

enum class EWwiseGameplayState : uint8_t {
	None = 0,
	Saferoom = 1,
	Explore = 2,
	Horde = 3,
	EWwiseGameplayState_MAX = 4,
};

enum class EThrowableState : uint8_t {
	Idle = 0,
	PullBack = 1,
	PullBackLoop = 2,
	Throwing = 3,
	Count = 4,
	EThrowableState_MAX = 5,
};

enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

enum class EPartyMenuCommand : uint8_t {
	Invite = 0,
	FirstPartyInvite = 1,
	Join = 2,
	Leave = 3,
	ViewProfile = 4,
	Mute = 5,
	Kick = 6,
	Report = 7,
	SendHydraFriendInvite = 8,
	CancelHydraFriendInvite = 9,
	ResendHydraFriendInvite = 10,
	AcceptHydraFriendInvite = 11,
	IgnoreHydraFriendInvite = 12,
	BlockHydraUser = 13,
	UnblockHydraUser = 14,
	UnfollowHydraUser = 15,
	SendFirstPartyFriendInvite = 16,
	EPartyMenuCommand_MAX = 17,
};

enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

enum class EBadgeEditMode : uint8_t {
	Emblem = 0,
	Title = 1,
	Banner = 2,
	EBadgeEditMode_MAX = 3,
};

enum class EHeroCustomMove : uint8_t {
	Invalid = 0,
	Harpoon = 1,
	Knockback = 2,
	MeleeForce = 3,
	LedgeHang = 4,
	EHeroCustomMove_MAX = 5,
};

enum class EWindowTitleBarMode : uint8_t {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2,
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

enum class PresenceStatus : uint8_t {
	Unavailable = 0,
	Available = 1,
	Chat = 2,
	DoNotDisturb = 3,
	Away = 4,
	ExtendedAway = 5,
	PresenceStatus_MAX = 6,
};

enum class EARTrackingState : uint8_t {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4,
};

enum class EHealthState : uint8_t {
	Healthy = 0,
	Injured = 1,
	Critical = 2,
	NotAlive = 3,
	Num = 4,
	EHealthState_MAX = 5,
};

enum class EVisibilityMode : uint8_t {
	EVM_IsUnseeable = 0,
	EVM_UseHalfspaceAndLOS = 1,
	EVM_UseHalfspaceOnly = 2,
	EVM_MAX = 3,
};

enum class EItemAttributeDisplayType : uint8_t {
	Flat = 0,
	Percentage = 1,
	TimeDuration = 2,
	TimeRate = 3,
	Distance = 4,
	Count = 5,
	EItemAttributeDisplayType_MAX = 6,
};

enum class EItemTargetRange : uint8_t {
	Close = 0,
	Ranged = 1,
	Count = 2,
	EItemTargetRange_MAX = 3,
};

enum class EMapSpatialInfoCardinalDirection : uint8_t {
	North = 0,
	East = 1,
	South = 2,
	West = 3,
	Count = 4,
	EMapSpatialInfoCardinalDirection_MAX = 5,
};

enum class EStaminaState : uint8_t {
	Exhausted = 0,
	Low = 1,
	High = 2,
	Full = 3,
	EStaminaState_MAX = 4,
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

enum class TransmissionMode : uint8_t {
	None = 0,
	Single = 1,
	All = 2,
	TransmissionMode_MAX = 3,
};

enum class EAngularConstraintMotion : uint8_t {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3,
};

enum class ETitanTentacleId : uint8_t {
	FrontLeft = 0,
	FrontRight = 1,
	BackLeft = 2,
	BackRight = 3,
	Count = 4,
	Invalid = 5,
	ETitanTentacleId_MAX = 6,
};

enum class EAnimAlphaInputType : uint8_t {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3,
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

enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

enum class EAbilityType : uint8_t {
	Unknown = 0,
	ZombiePrimary = 1,
	ZombieSpecial1 = 2,
	ZombieSpecial2 = 3,
	ZombieBasicAttack = 4,
	EAbilityType_MAX = 5,
};

enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

enum class ECompareOp : uint8_t {
	Equal_To = 0,
	Not_Equal_To = 1,
	Greater_Than_Or_Equal_To = 2,
	Less_Than_Or_Equal_To = 3,
	Greater_Than = 4,
	Less_Than = 5,
	Any = 6,
	All = 7,
	None = 8,
	ECompareOp_MAX = 9,
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

enum class EUIScreenPresence : uint8_t {
	None = 0,
	CharacterCustomization = 1,
	DeckCustomization = 2,
	WeaponCustomization = 3,
	EUIScreenPresence_MAX = 4,
};

enum class ECommWheelAction : uint8_t {
	None = 0,
	Page = 1,
	Approve = 2,
	Deny = 3,
	GoHere = 4,
	GroupUp = 5,
	Spray = 6,
	Warning = 7,
	Ready = 8,
	Wait = 9,
	Thank = 10,
	ECommWheelAction_MAX = 11,
};

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class ESkinCacheDefaultBehavior : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2,
};

enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

enum class EARPlaneOrientation : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3,
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

enum class EObjectStateTypeEnum : uint8_t {
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 5,
	Chaos_Max = 6,
};

enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
};

enum class EWaterRippleStartType : uint8_t {
	Wave = 0,
	Trough = 1,
	EWaterRippleStartType_MAX = 2,
};

enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

enum class ENotifyFilterType : uint8_t {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2,
};

enum class EDedicatedServerTask : uint8_t {
	None = 0,
	DSxConfirmStatus = 1,
	DSxUpdateStatus = 2,
	SessionJoin = 3,
	SessionLeave = 4,
	SessionGet = 5,
	SessionSetUserData = 6,
	PoolJoin = 7,
	PoolLeave = 8,
	LevelLoad = 9,
	LevelUnload = 10,
	AuthTokenRefresh = 11,
	OvercastHeartbeat = 12,
	Count = 13,
	EDedicatedServerTask_MAX = 14,
};

enum class EEnvQueryTestClampBehavior : uint8_t {
	Clamp = 0,
	ZeroIfOutsideOfRange = 1,
	EEnvQueryTestClampBehavior_MAX = 2,
};

enum class ECapablePlayerDistanceMode : uint8_t {
	FromDistanceMapSource = 0,
	AlongGoldenPath = 1,
	ECapablePlayerDistanceMode_MAX = 2,
};

enum class EPassageMode : uint8_t {
	TreasureActive = 0,
	TreasureInactive = 1,
	Normal = 2,
	EPassageMode_MAX = 3,
};

enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
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

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class ENiagaraExecutionStateSource : uint8_t {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3,
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

enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4,
};

enum class ETexturePowerOfTwoSetting : uint8_t {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3,
};

enum class EDoorState : uint8_t {
	Door_Closed = 0,
	Door_Closing = 1,
	Door_Open = 2,
	Door_Opening = 3,
	Door_OpenReversed = 4,
	Door_OpeningReversed = 5,
	Door_Destroyed = 6,
	Door_MAX = 7,
};

enum class ERelativeTransformSpace : uint8_t {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4,
};

enum class PanningRule : uint8_t {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2,
};

enum class EFSRMode : uint8_t {
	Performance = 0,
	Balanced = 1,
	Quality = 2,
	UltraQuality = 3,
	EFSRMode_MAX = 4,
};

enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2,
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

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6,
};

enum class EJostleMode : uint8_t {
	Shrub = 0,
	Bump = 1,
	Rattle = 2,
	EJostleMode_MAX = 3,
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

enum class EMotionCorrectionDimension : uint8_t {
	CD_3D = 0,
	CD_2D = 1,
	CD_Z = 2,
	CD_MAX = 3,
};

enum class EObservationRuleFlags : uint8_t {
	None = 0,
	LineOfSightTest = 1,
	EObservationRuleFlags_MAX = 2,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class FNiagaraCompileEventSeverity : uint8_t {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3,
};

enum class EDialogueAudioResult : uint8_t {
	Success = 0,
	NotAvailableFromLoadedBanks = 1,
	OwningCharacterInvalid = 2,
	AkComponentInvalid = 3,
	FailedInPostEvent = 4,
	EDialogueAudioResult_MAX = 5,
};

enum class EMissionEndReason : uint8_t {
	Complete = 0,
	Fail = 1,
	Abort = 2,
	EMissionEndReason_MAX = 3,
};

enum class EMapSpatialInfoAudibility : uint8_t {
	NotAudible = 0,
	SoonToBeAudible = 1,
	CompletelyAudible = 2,
	Occupied = 3,
	EMapSpatialInfoAudibility_MAX = 4,
};

enum class EARWorldAlignment : uint8_t {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EFactType : uint8_t {
	Bool = 0,
	Int = 1,
	Float = 2,
	SID = 3,
	Object = 4,
	EFactType_MAX = 5,
};

enum class EReactionCooldownType : uint8_t {
	Normal = 0,
	OncePerMap = 1,
	OncePerSession = 2,
	EReactionCooldownType_MAX = 3,
};

enum class ETweenVector2DType : uint8_t {
	MoveTo = 0,
	MoveBy = 1,
	ScaleTo = 2,
	ScaleBy = 3,
	ShearTo = 4,
	Custom = 5,
	ETweenVector2DType_MAX = 6,
};

enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EDimension : uint8_t {
	In_3D = 0,
	In_2D = 1,
	In_Z = 2,
	In_Z_Absolute = 3,
	In_Delta = 4,
	In_MAX = 5,
};

enum class EArrivalMode : uint8_t {
	AM_Distance = 0,
	AM_Distance2D = 1,
	AM_Planar = 2,
	AM_MAX = 3,
};

enum class EJostleShape : uint8_t {
	Sphere = 0,
	Box = 1,
	EJostleShape_MAX = 2,
};

enum class EDialogueChannel : uint8_t {
	Global = 0,
	Personal = 1,
	EDialogueChannel_MAX = 2,
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

enum class ENiagaraMeshLockedAxisSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
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

enum class ECollisionEnabled : uint8_t {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4,
};

enum class ENiagaraCollisionMode : uint8_t {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4,
};

enum class ECooldownContext : uint8_t {
	OnEnterPlay = 0,
	OnExitsPlay = 1,
	ECooldownContext_MAX = 2,
};

enum class ESamplePlayerSeekType : uint8_t {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4,
};

enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
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

enum class EAREye : uint8_t {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2,
};

enum class ECanBeCharacterBase : uint8_t {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3,
};

enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
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

enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2,
};

enum class EAnimNotifySpawnImpactDirectionOverride : uint8_t {
	None = 0,
	BoneForward = 1,
	ActorForward = 2,
	EAnimNotifySpawnImpactDirectionOverride_MAX = 3,
};

enum class EPostRoundFeedbackResult : uint8_t {
	Positive = 0,
	Neutral = 1,
	Negative = 2,
	NoAnswer = 3,
	Count = 4,
	EPostRoundFeedbackResult_MAX = 5,
};

enum class EARSessionTrackingFeature : uint8_t {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature_MAX = 4,
};

enum class ENotifyTriggerMode : uint8_t {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3,
};

enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class EZombieMutationTree : uint8_t {
	Common = 0,
	Bloater = 1,
	Spiker = 2,
	Tallboy = 3,
	Chaser = 4,
	EZombieMutationTree_MAX = 5,
};

enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3,
};

enum class EFilterInterpolationType : uint8_t {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
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

enum class ESharedWeaponAnimSound : uint8_t {
	BoltBack = 0,
	BoltForward = 1,
	BoltRelease = 2,
	MagIn = 3,
	MagOut = 4,
	Movement = 5,
	ESharedWeaponAnimSound_MAX = 6,
};

enum class EAkAudioSessionCategoryOptions : uint8_t {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
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

enum class EUVOutput : uint8_t {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2,
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

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class ENotificationType : uint8_t {
	Fortification = 0,
	ZombieDestroy = 1,
	ENotificationType_MAX = 2,
};

enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5,
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

enum class EBreakableState : uint8_t {
	Pristine = 0,
	Deforming = 1,
	Breaking = 2,
	Destroyed = 3,
	EBreakableState_MAX = 4,
};

enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3,
};

enum class ELevelStreamingCoordinatorState : uint8_t {
	PRESTART = 0,
	DETERMINEDLEVELS = 1,
	SF_VISIBLE_LEVEL_LOADING = 2,
	SF_VISIBLE_LEVEL_VISIBLE = 3,
	SF_BLOCKING_LEVEL_BLOCKING = 4,
	ELevelStreamingCoordinatorState_MAX = 5,
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

enum class EInterpToBehaviourType : uint8_t {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4,
};

enum class EScoringEquation : uint8_t {
	Linear = 0,
	Constant = 1,
	EScoringEquation_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
};

enum class EConsoleForGamepadLabels : uint8_t {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3,
};

enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

enum class EOptionsScreenTab : uint8_t {
	Gameplay = 0,
	MouseAndKeyboard = 1,
	Gamepad = 2,
	Graphics = 3,
	Audio = 4,
	Dev = 5,
	Count = 6,
	EOptionsScreenTab_MAX = 7,
};

enum class EPaperDollItemDragDropState : uint8_t {
	None = 0,
	DropItem = 1,
	SwapAttachment = 2,
	EPaperDollItemDragDropState_MAX = 3,
};

enum class EWebSocketSessionSendMessage : uint8_t {
	Invalid = 0,
	leaveSession = 1,
	setUserData = 2,
	setSessionData = 3,
	setRegionalPings = 4,
	sendInvite = 5,
	setCrossPlayEnabled = 6,
	mmJoin = 7,
	mmLeave = 8,
	mmBackfill = 9,
	ping = 10,
	EWebSocketSessionSendMessage_MAX = 11,
};

enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

enum class EAnimGroupRole : uint8_t {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5,
};

enum class EParticleCollisionMode : uint8_t {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2,
};

enum class EParticleSpawnCullingBounds : uint8_t {
	None = 0,
	Radius = 1,
	FixedBounds = 2,
	EParticleSpawnCullingBounds_MAX = 3,
};

enum class EEvalAngleAxis : uint8_t {
	Yaw = 0,
	Pitch = 1,
	Roll = 2,
	Angle = 3,
	EEvalAngleAxis_MAX = 4,
};

enum class EDrenchType : uint8_t {
	Blood = 0,
	Mud = 1,
	Vomit = 2,
	Count = 3,
	EDrenchType_MAX = 4,
};

enum class EInclusionMode : uint8_t {
	NeighborsOfVisibleCells = 0,
	SoonToBeVisibleCells = 1,
	AudibleCells = 2,
	SoonToBeAudibleCells = 3,
	EInclusionMode_MAX = 4,
};

enum class EClearSceneOptions : uint8_t {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3,
};

enum class EPlayerProfileStorageStrategy : uint8_t {
	HydraProfile = 0,
	HydraInventory = 1,
	HydraAccount = 2,
	Count = 3,
	EPlayerProfileStorageStrategy_MAX = 4,
};

enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	EMovieSceneBlendType_MAX = 4,
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

enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

enum class EFallingRockState : uint8_t {
	Dormant = 0,
	Triggered = 1,
	FallTell = 2,
	Falling = 3,
	Exploding = 4,
	EFallingRockState_MAX = 5,
};

enum class EDialogueCooldownType : uint8_t {
	None = 0,
	Individual = 1,
	Team = 2,
	Global = 3,
	Mission = 4,
	EDialogueCooldownType_MAX = 5,
};

enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_Deprecated = 5,
	SVB_MAX = 6,
};

enum class EDisconnectError : uint8_t {
	None = 0,
	Custom = 1,
	NetDriverAlreadyExists = 2,
	NetDriverCreateFailure = 3,
	NetDriverListenFailure = 4,
	ConnectionLost = 5,
	ConnectionTimeout = 6,
	FailureReceived = 7,
	OutdatedClient = 8,
	OutdatedServer = 9,
	PendingConnectionFailure = 10,
	NetGuidMismatch = 11,
	NetChecksumMismatch = 12,
	IdleTimeout = 13,
	KickedFromGroup = 14,
	SessionCrossPlayRestricted = 15,
	TravelFailure = 16,
	PvpMismatch = 17,
	PvpMismatchPreMatch = 18,
	ServerShutdown = 19,
	HostLeftGroup = 20,
	HostStartedSoloGame = 21,
	EDisconnectError_MAX = 22,
};

enum class ETweenVectorType : uint8_t {
	MoveTo = 0,
	MoveBy = 1,
	ScaleTo = 2,
	ScaleBy = 3,
	Custom = 4,
	ETweenVectorType_MAX = 5,
};

enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

enum class ESignInScreenState : uint8_t {
	NotSignedIn = 0,
	SigningIn = 1,
	MessagingOnlineConfiguration = 2,
	AcceptingInvite = 3,
	CreatingPartySession = 4,
	CreatingGroupSession = 5,
	FetchingProfile = 6,
	SignedIn = 7,
	ESignInScreenState_MAX = 8,
};

enum class EPickupCountType : uint8_t {
	eLimited = 0,
	eUnlimited = 1,
	EPickupCountType_MAX = 2,
};

enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3,
};

enum class EAssociativePlaneVersion : uint8_t {
	BeforeVersioning = 0,
	PlaneBrushBuilderReparented = 1,
	EAssociativePlaneVersion_MAX = 2,
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

enum class EProjectilePinState : uint8_t {
	Pinned = 0,
	Destroy = 1,
	EProjectilePinState_MAX = 2,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
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

enum class EToolSide : uint8_t {
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3,
};

enum class ModulationParamMode : uint8_t {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EModifyOp : uint8_t {
	Mod_Invalid = 0,
	Mod_Add = 1,
	Mod_Subtract = 2,
	Mod_Override = 3,
	Mod_MAX = 4,
};

enum class EPlayerHordeTriggerTypes : uint8_t {
	BirdSite = 0,
	Snitched = 1,
	ReekerExplosion = 2,
	CarAlarm = 3,
	DoorAlarm = 4,
	SleeperGrapple = 5,
	Count = 6,
	EPlayerHordeTriggerTypes_MAX = 7,
};

enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class ENavAreaFlag : uint8_t {
	Default = 0,
	Jump = 1,
	Door = 2,
	Ladder = 3,
	Ground = 4,
	Fire = 5,
	Climb = 6,
	ClimbUpAndOver = 7,
	Choke = 8,
	Crawl = 9,
	Destructible = 10,
	Crouch = 11,
	GobiDefault = 12,
	Objective = 13,
	Fall = 14,
	ENavAreaFlag_MAX = 15,
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

enum class ECommsMode : uint8_t {
	ProximityOrComms = 0,
	Proximity = 1,
	Comms = 2,
	ECommsMode_MAX = 3,
};

enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4,
};

enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
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

enum class ECaptionTeamRestriction : uint8_t {
	NoRestriction = 0,
	HumanOnly = 1,
	ZombieOnly = 2,
	ECaptionTeamRestriction_MAX = 3,
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

enum class EPickupSlot : uint8_t {
	DetermineBehaviorFromItem = 0,
	Currency = 1,
	EPickupSlot_MAX = 2,
};

enum class EInsetPolygonsMode : uint8_t {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class ENiagaraTickBehavior : uint8_t {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4,
};

enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2,
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

enum class EInteractiveCarType : uint8_t {
	Generic = 0,
	Taxi = 1,
	Police = 2,
	Count = 3,
	EInteractiveCarType_MAX = 4,
};

enum class EGobiMapGameModesType : uint8_t {
	Coop = 0,
	Versus = 1,
	Hub = 2,
	Tutorial = 3,
	Coop8P = 4,
	SinglePlayer = 5,
	EGobiMapGameModesType_MAX = 6,
};

enum class EPlayerStandInGender : uint8_t {
	Any = 0,
	Female = 1,
	Male = 2,
	EPlayerStandInGender_MAX = 3,
};

enum class DeviceType : uint8_t {
	NullDevice = 0,
	SpecificDevice = 1,
	DefaultSystemDevice = 2,
	DefaultCommunicationDevice = 3,
	DeviceType_MAX = 4,
};

enum class EGameplayCardAffinity : uint8_t {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Wild = 3,
	None = 4,
	EGameplayCardAffinity_MAX = 5,
};

enum class EDatasmithImportScene : uint8_t {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3,
};

enum class EDetachmentRule : uint8_t {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2,
};

enum class ECardMatchRule : uint8_t {
	Any_Cards_Match_Query = 0,
	All_Cards_Match_Query = 1,
	ECardMatchRule_MAX = 2,
};

enum class EGameDirectorState : uint8_t {
	GDS_WaitingForGameState = 0,
	GDS_WaitingForMatchStart = 1,
	GDS_InMatch = 2,
	GDS_MatchEnded = 3,
	GDS_MAX = 4,
};

enum class EAmmoInReserveCheck : uint8_t {
	NoAmmoInReserve = 0,
	OneClipOrLessInReserve = 1,
	MoreThanOneClipInReserve = 2,
	EAmmoInReserveCheck_MAX = 3,
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

enum class EMutilationType : uint8_t {
	Rupture = 0,
	BreakOff = 1,
	Invalid = 2,
	EMutilationType_MAX = 3,
};

enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

enum class ELipsyncViseme : uint8_t {
	None = 0,
	AA = 1,
	AH = 2,
	h = 3,
	AO = 4,
	AW = 5,
	OW = 6,
	OY = 7,
	UH = 8,
	UW = 9,
	EH = 10,
	AE = 11,
	IH = 12,
	AY = 13,
	y = 14,
	IY = 15,
	EY = 16,
	r = 17,
	ER = 18,
	l = 19,
	w = 20,
	CH = 21,
	j = 22,
	SH = 23,
	ZH = 24,
	n = 25,
	NG = 26,
	DH = 27,
	d = 28,
	g = 29,
	t = 30,
	z = 31,
	s = 32,
	k = 33,
	TH = 34,
	f = 35,
	v = 36,
	m = 37,
	b = 38,
	p = 39,
	Count = 40,
	ELipsyncViseme_MAX = 41,
};

enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};

enum class EParticleAllocationMode : uint8_t {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2,
};

enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5,
};

enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4,
};

enum class EHagState : uint8_t {
	HS_Hunt = 0,
	HS_Alert = 1,
	HS_PreBerserk = 2,
	HS_Berserk = 3,
	HS_Flee = 4,
	HS_Count = 5,
	HS_MAX = 6,
};

enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3,
};

enum class EImportanceWeight : uint8_t {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5,
};

enum class EAmmoType : uint8_t {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Secondary = 3,
	Offensive = 4,
	Defensive = 5,
	Utility = 6,
	Count = 7,
	EAmmoType_MAX = 8,
};

enum class ESafeRoomMusicState : uint8_t {
	Negative = 0,
	Neutral = 1,
	Positive = 2,
	ESafeRoomMusicState_MAX = 3,
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

enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2,
};

enum class ECorrectionAxis : uint8_t {
	CA_Yaw = 0,
	CA_Pitch = 1,
	CA_Roll = 2,
	CA_All = 3,
	CA_MAX = 4,
};

enum class ENaturalSoundFalloffMode : uint8_t {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3,
};

enum class ETitanStage3TailState : uint8_t {
	Idle = 0,
	Thrash = 1,
	ETitanStage3TailState_MAX = 2,
};

enum class EModPhase : uint8_t {
	FirstApplication = 0,
	PlayerSpawn = 1,
	ItemCreation = 2,
	AISpawn = 3,
	AISpawnDeckGen = 4,
	AISpawnDeckPreGen = 5,
	AIPossess = 6,
	ActiveAreaSetGen = 7,
	PostPlayerSpawn = 8,
	VendorSpawn = 9,
	Invalid = 10,
	EModPhase_MAX = 11,
};

enum class EEnvItemStatus : uint8_t {
	Passed = 0,
	Failed = 1,
	EEnvItemStatus_MAX = 2,
};

enum class ETweenEaseType : uint8_t {
	Linear = 0,
	EaseInQuad = 1,
	EaseOutQuad = 2,
	EaseInOutQuad = 3,
	EaseOutInQuad = 4,
	EaseInCubic = 5,
	EaseOutCubic = 6,
	EaseInOutCubic = 7,
	EaseOutInCubic = 8,
	EaseInQuart = 9,
	EaseOutQuart = 10,
	EaseInOutQuart = 11,
	EaseOutInQuart = 12,
	EaseInQuint = 13,
	EaseOutQuint = 14,
	EaseInOutQuint = 15,
	EaseOutInQuint = 16,
	EaseInSine = 17,
	EaseOutSine = 18,
	EaseInOutSine = 19,
	EaseOutInSine = 20,
	EaseInExpo = 21,
	EaseOutExpo = 22,
	EaseInOutExpo = 23,
	EaseOutInExpo = 24,
	EaseInCirc = 25,
	EaseOutCirc = 26,
	EaseInOutCirc = 27,
	EaseOutInCirc = 28,
	EaseInElastic = 29,
	EaseOutElastic = 30,
	EaseInOutElastic = 31,
	EaseOutInElastic = 32,
	EaseInBack = 33,
	EaseOutBack = 34,
	EaseInOutBack = 35,
	EaseOutInBack = 36,
	EaseInBounce = 37,
	EaseOutBounce = 38,
	EaseInOutBounce = 39,
	EaseOutInBounce = 40,
	ETweenEaseType_MAX = 41,
};

enum class SubscriptionReply : uint8_t {
	Allow = 0,
	Block = 1,
	SubscriptionReply_MAX = 2,
};

enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5,
};

enum class ESkinCacheUsage : uint8_t {
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3,
};

enum class EMutilationRegion : uint8_t {
	Head = 0,
	Torso = 1,
	Chest = 2,
	Stomach = 3,
	LeftUpperArm = 4,
	LeftLowerArm = 5,
	LeftHand = 6,
	RightUpperArm = 7,
	RightLowerArm = 8,
	RightHand = 9,
	LeftUpperLeg = 10,
	LeftLowerLeg = 11,
	RightUpperLeg = 12,
	RightLowerLeg = 13,
	Legs = 14,
	LeftFoot = 15,
	RightFoot = 16,
	Count = 17,
	EMutilationRegion_MAX = 18,
};

enum class EClampInputRotationType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	EClampInputRotationType_MAX = 2,
};

enum class EKeyLayout : uint8_t {
	QWERTY = 0,
	QWERTZ = 1,
	AZERTY = 2,
	EKeyLayout_MAX = 3,
};

enum class ELeapState : uint8_t {
	Idle = 0,
	Cooking = 1,
	Leaping = 2,
	Landing = 3,
	Count = 4,
	ELeapState_MAX = 5,
};

enum class ESynthFilterAlgorithm : uint8_t {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4,
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

enum class EBlueprintCompileMode : uint8_t {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3,
};

enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

enum class EProjectileThrowReticleType : uint8_t {
	NoTarget = 0,
	NonCharacter = 1,
	Character = 2,
	Invalid = 3,
	EProjectileThrowReticleType_MAX = 4,
};

enum class ETitanStage2MouthState : uint8_t {
	Idle = 0,
	BiteTell = 1,
	Bite = 2,
	Roar = 3,
	Flinch = 4,
	RoarExit = 5,
	ETitanStage2MouthState_MAX = 6,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class ELinearConstraintMotion : uint8_t {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3,
};

enum class ENiagaraAgeUpdateMode : uint8_t {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3,
};

enum class ECorrectionMode : uint8_t {
	CM_NoLimit = 0,
	CM_LimitCorrection = 1,
	CM_LimitCorrectionWithRootMotion = 2,
	CM_MAX = 3,
};

enum class EGameplayTagSelectionType : uint8_t {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4,
};

enum class EAchievementStatRequirementLifetime : uint8_t {
	Career = 0,
	Session = 1,
	Map = 2,
	EAchievementStatRequirementLifetime_MAX = 3,
};

enum class ETitanTongueState : uint8_t {
	Idle = 0,
	Grab = 1,
	Miss = 2,
	Pull = 3,
	Hold = 4,
	Bite = 5,
	Release = 6,
	Eat = 7,
	ETitanTongueState_MAX = 8,
};

enum class ETimeframe : uint8_t {
	Activation = 0,
	Deactivation = 1,
	ETimeframe_MAX = 2,
};

enum class ENiagaraVariantMode : uint8_t {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4,
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

enum class ESignedAxis : uint8_t {
	PosX = 0,
	PosY = 1,
	PosZ = 2,
	NegX = 3,
	NegY = 4,
	NegZ = 5,
	Num = 6,
	ESignedAxis_MAX = 7,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

enum class ETetherPriority : uint8_t {
	Forced = 0,
	Team = 1,
	Scripted = 2,
	Count = 3,
	ETetherPriority_MAX = 4,
};

enum class EActionState : uint8_t {
	Invalid = 0,
	InProgress = 1,
	Deactivating = 2,
	Activating = 3,
	EActionState_MAX = 4,
};

enum class EGameplayTagEventType : uint8_t {
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2,
};

enum class ETitanStage3TailThrashMode : uint8_t {
	Left = 0,
	Right = 1,
	Count = 2,
	ETitanStage3TailThrashMode_MAX = 3,
};

enum class ENiagaraDefaultMode : uint8_t {
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3,
};

enum class EFastArraySerializerDeltaFlags : uint8_t {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags_MAX = 4,
};

enum class ETweenRotatorType : uint8_t {
	RotateTo = 0,
	RotateBy = 1,
	ETweenRotatorType_MAX = 2,
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

enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3,
};

enum class ETriggerEffectTriggerFlag : uint8_t {
	LeftTrigger = 0,
	RightTrigger = 1,
	ETriggerEffectTriggerFlag_MAX = 2,
};

enum class EMotionCorrectionMode : uint8_t {
	MCM_NoLimit = 0,
	MCM_LimitCorrection = 1,
	MCM_LimitCorrectionWithRootMotion = 2,
	MCM_InstantCorrection = 3,
	MCM_MAX = 4,
};

enum class ETapLineMode : uint8_t {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3,
};

enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5,
};

enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

enum class TTSMessageState : uint8_t {
	Playing = 0,
	Enqueued = 1,
	TTSMessageState_MAX = 2,
};

enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class EMobileCSMQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileCSMQuality_MAX = 4,
};

enum class EGobiTeam : uint8_t {
	Hero = 0,
	Zombie = 1,
	Unknown = 2,
	Count = 3,
	EGobiTeam_MAX = 4,
};

enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

enum class ETransitionBlendMode : uint8_t {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2,
};

enum class EGameCoachRegistrationScope : uint8_t {
	Manual = 0,
	Always = 1,
	Count = 2,
	EGameCoachRegistrationScope_MAX = 3,
};

enum class ENiagaraRandomnessMode : uint8_t {
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	ENiagaraRandomnessMode_MAX = 3,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EPopupButton : uint8_t {
	Yes = 0,
	No = 1,
	Ok = 2,
	Cancel = 3,
	Custom = 4,
	EPopupButton_MAX = 5,
};

enum class EWeaponCustomizationType : uint8_t {
	Camouflage = 0,
	Count = 1,
	EWeaponCustomizationType_MAX = 2,
};

enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

enum class EWebServiceRemovedFromPoolReason : uint8_t {
	Other = 0,
	Manual = 1,
	DediFinished = 2,
	FailedToJoinPool = 3,
	FailedToJoinGameSession = 4,
	ServerAllocationFailed = 5,
	SessionCrossPlayRestricted = 6,
	PoolFull = 7,
	ConfabTimedOut = 8,
	ConfabMissing = 9,
	ConfabAlreadyExists = 10,
	ConfabOverflow = 11,
	TeamArrangementInvalid = 12,
	QuickplayInvalid = 13,
	QueueUnrecognized = 14,
	DesiredRegionInvalid = 15,
	PrivatePartyInvalid = 16,
	PrivateCrossplayInvalid = 17,
	EWebServiceRemovedFromPoolReason_MAX = 18,
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

enum class EAchievementTrackerState : uint8_t {
	WaitingForGameState = 0,
	WaitingForLevelStart = 1,
	LevelRunning = 2,
	EndOfLevel = 3,
	EAchievementTrackerState_MAX = 4,
};

enum class EInputCaptureSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 4,
	EInputCaptureSide_MAX = 5,
};

enum class EEndPlayReason : uint8_t {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5,
};

enum class EBlueprintNativizationFlag : uint8_t {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class EGameplayTagContainerMatchType : uint8_t {
	All = 0,
	Any = 1,
	AllExact = 2,
	AnyExact = 3,
	EGameplayTagContainerMatchType_MAX = 4,
};

enum class ETimelineSigType : uint8_t {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5,
};

enum class EHasCustomNavigableGeometry : uint8_t {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class EAntiAliasingMethod : uint8_t {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_DLSS = 4,
	AAM_MAX = 5,
};

enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2,
};

enum class EPopupButtonCombo : uint8_t {
	YesNo = 0,
	YesNoCancel = 1,
	Ok = 2,
	OkCancel = 3,
	EPopupButtonCombo_MAX = 4,
};

enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
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

enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class ELegendPosition : uint8_t {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2,
};

enum class EConstraintTransform : uint8_t {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class EAOEAttackState : uint8_t {
	Idle = 0,
	AttackLoop = 1,
	AttackEnd = 2,
	Count = 3,
	EAOEAttackState_MAX = 4,
};

enum class EWeaponFireBehavior : uint8_t {
	SingleShot = 0,
	Automatic = 1,
	SingleShotBurst = 2,
	AutomaticBurst = 3,
	EWeaponFireBehavior_MAX = 4,
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

enum class EInventoryConditionMode : uint8_t {
	AnyTrue = 0,
	AllTrue = 1,
	AnyFalse = 2,
	AllFalse = 3,
	EInventoryConditionMode_MAX = 4,
};

enum class EOffsetOperation : uint8_t {
	Add = 0,
	Subtract = 1,
	EOffsetOperation_MAX = 2,
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

enum class EItemTargetType : uint8_t {
	Actor_Self = 0,
	Actor_Teammate = 1,
	Actor_Any = 2,
	Actor_Enemy = 3,
	Environment = 4,
	Count = 5,
	EItemTargetType_MAX = 6,
};

enum class EPassageDebugDraw : uint8_t {
	Normal = 0,
	Treasure = 1,
	EPassageDebugDraw_MAX = 2,
};

enum class EPlayerSettingsType : uint8_t {
	FTUESettings = 0,
	PlayerSettings = 1,
	ProfileSettings = 2,
	GameCoachSettings = 3,
	OnlineSettings = 4,
	RelationshipSettings = 5,
	PlayerAnalyticsSettings = 6,
	Count = 7,
	EPlayerSettingsType_MAX = 8,
};

enum class EMaterialAttributeBlend : uint8_t {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3,
};

enum class EDataValidationResult : uint8_t {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class ERelativeDistanceMode : uint8_t {
	DistanceMode_Min = 0,
	DistanceMode_Max = 1,
};

enum class EPlayerViewMode : uint8_t {
	Invalid = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	ThirdPersonOrbit = 3,
	EPlayerViewMode_MAX = 4,
};

enum class EUIState : uint8_t {
	None = 0,
	LegalScreen = 1,
	SignInScreen = 2,
	Movie = 3,
	PreRound = 4,
	PostRound = 5,
	InGameCinematic = 6,
	Credits = 7,
	EUIState_MAX = 8,
};

enum class EAnimPredictType : uint8_t {
	None = 0,
	Moving = 1,
	Stop = 2,
	PrePivot = 3,
	PostPivot = 4,
	NumPredictTypes = 5,
	EAnimPredictType_MAX = 6,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class ESoundwaveSampleRateSettings : uint8_t {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5,
};

enum class EWaitingState : uint8_t {
	NotWaiting = 0,
	WaitingForLoadStart = 1,
	WaitingForLoadFinish = 2,
	WaitingForTimer = 3,
	EWaitingState_MAX = 4,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4,
};

enum class EGobiSessionType : uint8_t {
	Invalid = 0,
	Splitscreen = 1,
	Group = 2,
	Game = 3,
	Count = 4,
	EGobiSessionType_MAX = 5,
};

enum class EDefibrillatorItemState : uint8_t {
	Idle = 0,
	Using = 1,
	Count = 2,
	EDefibrillatorItemState_MAX = 3,
};

enum class EAimAssistSnapType : uint8_t {
	Off = 0,
	Linear = 1,
	Exponential = 2,
	EAimAssistSnapType_MAX = 3,
};

enum class ENCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5,
};

enum class EMatchmakingVoicePreference : uint8_t {
	DontCare = 0,
	Voice = 1,
	NoVoice = 2,
	EMatchmakingVoicePreference_MAX = 3,
};

enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3,
};

enum class EFootSyncDetectionMode : uint8_t {
	Midstance = 0,
	Midswing = 1,
	Both = 2,
	EFootSyncDetectionMode_MAX = 3,
};

enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3,
};

enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

enum class ELifeState : uint8_t {
	LS_Invalid = 0,
	LS_Alive = 1,
	LS_Incap = 2,
	LS_FakeDead = 3,
	LS_Dead = 4,
	LS_RescueFromRespawn = 5,
	LS_MAX = 6,
};

enum class ECaptioning : uint8_t {
	None = 0,
	Conversations = 1,
	Ambient = 2,
	FullCaptions = 3,
	ECaptioning_MAX = 4,
};

enum class ETweenLoopType : uint8_t {
	Yoyo = 0,
	Restart = 1,
	ETweenLoopType_MAX = 2,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3,
};

enum class ERenderFocusRule : uint8_t {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4,
};

enum class EFocusWatchType : uint8_t {
	Random = 0,
	Axis_Yaw = 1,
	Axis_Pitch = 2,
	Count = 3,
	EFocusWatchType_MAX = 4,
};

enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
};

enum class ELocationXToSpawnEnum : uint8_t {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EDestroyMode : uint8_t {
	Never = 0,
	WhenSuccessorDestroyed = 1,
	AfterDelay = 2,
	EDestroyMode_MAX = 3,
};

enum class ELoadoutModAdjustmentType : uint8_t {
	AdjustDefaultLoadout = 0,
	GrantLoadoutImmediate = 1,
	AdjustLoadoutAndGrantImmediate = 2,
	ELoadoutModAdjustmentType_MAX = 3,
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

enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
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

enum class EGrammaticalNumber : uint8_t {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2,
};

enum class EImpactAlignment : uint8_t {
	Normal = 0,
	Reflection = 1,
	Direction = 2,
	InvertedDirection = 3,
	DirectionNormal = 4,
	EImpactAlignment_MAX = 5,
};

enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EAchievementCategory : uint8_t {
	General = 0,
	Campaign = 1,
	Versus = 2,
	Cards = 3,
	Cleaners = 4,
	Ridden = 5,
	Secret = 6,
	NonPlatform = 7,
	Count = 8,
	EAchievementCategory_MAX = 9,
};

enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};

enum class EPlantableSurfaceType : uint8_t {
	Floor = 0,
	Count = 1,
	EPlantableSurfaceType_MAX = 2,
};

enum class AnimPhysCollisionType : uint8_t {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4,
};

enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
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

enum class ESynthFilterType : uint8_t {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5,
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

enum class EControlConstraint : uint8_t {
	Orientation = 0,
	Translation = 1,
	MAX = 2,
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

enum class EGoldenPathDistanceMode : uint8_t {
	DistanceFromGoldenPath = 0,
	DistanceAlongGoldenPath = 1,
	EGoldenPathDistanceMode_MAX = 2,
};

enum class EOnlineSessionAction : uint8_t {
	None = 0,
	CreateSession = 1,
	JoinSession = 2,
	TakeSession = 3,
	LeaveSession = 4,
	UpdateSession = 5,
	EOnlineSessionAction_MAX = 6,
};

enum class EChatMode : uint8_t {
	All = 0,
	Team = 1,
	Private = 2,
	EChatMode_MAX = 3,
};

enum class ETRSSplineMeshActorSplineMeshMode : uint8_t {
	Tiling = 0,
	Repeating = 1,
	Stretching = 2,
	ETRSSplineMeshActorSplineMeshMode_MAX = 3,
};

enum class EClingState : uint8_t {
	Idle = 0,
	LeapingToClingLocation = 1,
	Clinging = 2,
	LeapingToGround = 3,
	Count = 4,
	EClingState_MAX = 5,
};

enum class ESprayElement : uint8_t {
	Foreground = 0,
	Background = 1,
	ESprayElement_MAX = 2,
};

enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class EConversationType : uint8_t {
	Immediate = 0,
	Floating = 1,
	EConversationType_MAX = 2,
};

enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2,
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

enum class EBotPlaythroughState : uint8_t {
	None = 0,
	Initializing = 1,
	PlayingThroughLevel = 2,
	WaitingAtSaferoom = 3,
	MapComplete = 4,
	EBotPlaythroughState_MAX = 5,
};

enum class ETitanPhase2TentacleState : uint8_t {
	Dormant = 0,
	SmashTell = 1,
	SmashAttackBegin = 2,
	SmashAttackLoop = 3,
	SmashRetract = 4,
	ETitanPhase2TentacleState_MAX = 5,
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

enum class EHoldoutState : uint8_t {
	Idle = 0,
	Prep = 1,
	Horde = 2,
	Collapse = 3,
	Survival = 4,
	Ended = 5,
	Count = 6,
	EHoldoutState_MAX = 7,
};

enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3,
};

enum class ELeaderboardRegion : uint8_t {
	Global = 0,
	Local = 1,
	Friends = 2,
	Count = 3,
	ELeaderboardRegion_MAX = 4,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class ESkyAtmosphereTransformMode : uint8_t {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3,
};

enum class EMatchmakingScreenStep : uint8_t {
	None = 0,
	Start = 1,
	SaveSlot = 2,
	Settings = 3,
	Challenge = 4,
	EMatchmakingScreenStep_MAX = 5,
};

enum class EFFTSize : uint8_t {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5,
};

enum class EGobiCharacterCustomMove : uint8_t {
	None = 0,
	Leap = 1,
	AttachedToActor = 2,
	Ladder = 3,
	PostGobiCharacterCustomMove = 4,
	Traversal = 5,
	EGobiCharacterCustomMove_MAX = 6,
};

enum class ELootSpawnMode : uint8_t {
	SpawnOnBeginPlay = 0,
	SpawnOnSaferoomOpened = 1,
	SpawnManually = 2,
	Num = 3,
	ELootSpawnMode_MAX = 4,
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

enum class EAIPathAsyncRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	AsyncRequestSuccess = 2,
	EAIPathAsyncRequestResult_MAX = 3,
};

enum class EAudibilityMode : uint8_t {
	EAM_Uninitialized = 0,
	EAM_IsUnhearable = 1,
	EAM_UseDistance = 2,
	EAM_MAX = 3,
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

