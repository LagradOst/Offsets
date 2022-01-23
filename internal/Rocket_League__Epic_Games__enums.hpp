// Created by BlueFire1337
// Updated 2021-12-02
// Generated 2022-01-23

#pragma once

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
	PHYS_RigidBody = 9,
	PHYS_SoftBody = 10,
	PHYS_NavMeshWalking = 11,
	PHYS_Unused = 12,
	PHYS_Custom = 13,
	PHYS_MAX = 14,
};

enum class EChatPermissionLevel : uint8_t {
	CPL_Everybody = 0,
	CPL_FriendsAndTeam = 1,
	CPL_Friends = 2,
	CPL_Nobody = 3,
	CPL_MAX = 4,
};

enum class EChallengeSort : uint8_t {
	ECS_None = 0,
	ECS_TopBottom = 1,
	ECS_MAX = 2,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_AlphaBlend = 0,
	LB_HeightBlend = 1,
	LB_MAX = 2,
};

enum class FlashTextureRescale : uint8_t {
	FlashTextureScale_High = 0,
	FlashTextureScale_Low = 1,
	FlashTextureScale_NextLow = 2,
	FlashTextureScale_Mult4 = 3,
	FlashTextureScale_None = 4,
	FlashTextureScale_MAX = 5,
};

enum class BoneBreakOption : uint8_t {
	BONEBREAK_SoftPreferred = 0,
	BONEBREAK_AutoDetect = 1,
	BONEBREAK_RigidPreferred = 2,
	BONEBREAK_MAX = 3,
};

enum class EWebRequestState : uint8_t {
	WebRequestState_PendingSend = 0,
	WebRequestState_PendingResponse = 1,
	WebRequestState_Success = 2,
	WebRequestState_Error = 3,
	WebRequestState_MAX = 4,
};

enum class ETeam : uint8_t {
	Team_Blue = 0,
	Team_Orange = 1,
	Team_MAX = 2,
};

enum class ETourSeedType : uint8_t {
	TourSeedType_Skill = 0,
	TourSeedType_Random = 1,
	TourSeedType_MAX = 2,
};

enum class ECoverGroupFillAction : uint8_t {
	CGFA_Overwrite = 0,
	CGFA_Add = 1,
	CGFA_Remove = 2,
	CGFA_Clear = 3,
	CGFA_Cylinder = 4,
	CGFA_MAX = 5,
};

enum class EOnlineImageDownloadState : uint8_t {
	PIDS_NotStarted = 0,
	PIDS_Downloading = 1,
	PIDS_Succeeded = 2,
	PIDS_Failed = 3,
	PIDS_MAX = 4,
};

enum class EPartyBeaconHostState : uint8_t {
	PBHS_AllowReservations = 0,
	PBHS_DenyReservations = 1,
	PBHS_MAX = 2,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MidwayStep = 5,
	VTBlend_MAX = 6,
};

enum class TextureCompressionSettings : uint8_t {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Displacementmap = 2,
	TC_NormalmapAlpha = 3,
	TC_Grayscale = 4,
	TC_HighDynamicRange = 5,
	TC_OneBitAlpha = 6,
	TC_NormalmapUncompressed = 7,
	TC_NormalmapBC5 = 8,
	TC_NormalmapSwizzle = 9,
	TC_OneBitMonochrome = 10,
	TC_SimpleLightmapModification = 11,
	TC_VectorDisplacementmap = 12,
	TC_MAX = 13,
};

enum class FoliageCullOption : uint8_t {
	FOLIAGECULL_Cull = 0,
	FOLIAGECULL_ScaleZ = 1,
	FOLIAGECULL_ScaleXYZ = 2,
	FOLIAGECULL_TranslateZ = 3,
	FOLIAGECULL_MAX = 4,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class EMeshBeaconConnectionResult : uint8_t {
	MB_ConnectionResult_Succeeded = 0,
	MB_ConnectionResult_Duplicate = 1,
	MB_ConnectionResult_Timeout = 2,
	MB_ConnectionResult_Error = 3,
	MB_ConnectionResult_MAX = 4,
};

enum class ETitleFileFileOp : uint8_t {
	TitleFile_None = 0,
	TitleFile_Save = 1,
	TitleFile_Load = 2,
	TitleFile_MAX = 3,
};

enum class EBlendType : uint8_t {
	EBT_ParentBoneSpace = 0,
	EBT_MeshSpace = 1,
	EBT_MAX = 2,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class EAssetLoadState : uint8_t {
	AssetLoadState_New = 0,
	AssetLoadState_WaitingAsyncLoad = 1,
	AssetLoadState_AsyncLoad = 2,
	AssetLoadState_Loaded = 3,
	AssetLoadState_MAX = 4,
};

enum class EBallHitType : uint8_t {
	HitType_Item0 = 0,
	HitType_Item1 = 1,
	HitType_Item2 = 2,
	HitType_Car = 3,
	HitType_MAX = 4,
};

enum class SearchStatusOwner : uint8_t {
	StatusOwner_None = 0,
	StatusOwner_Matchmaking = 1,
	StatusOwner_PrivateMatch = 2,
	StatusOwner_Lan = 3,
	StatusOwner_Tournaments = 4,
	StatusOwner_MAX = 5,
};

enum class EProfilePCSaveVersion : uint8_t {
	ProfilePCSaveVersion_NewDefaultControls = 0,
	ProfilePCSaveVersion_MAX = 1,
};

enum class ELoadoutSaveVersion : uint8_t {
	ELoadoutSaveVersion_InstanceIDV2 = 0,
	ELoadoutSaveVersion_MAX = 1,
};

enum class EFocusType : uint8_t {
	FOCUS_Distance = 0,
	FOCUS_Position = 1,
	FOCUS_MAX = 2,
};

enum class ELinkMode : uint8_t {
	MODE_Text = 0,
	MODE_Line = 1,
	MODE_Binary = 2,
	MODE_MAX = 3,
};

enum class EReserveState : uint8_t {
	ReserveState_Unitialized = 0,
	ReserveState_Unreserved = 1,
	ReserveState_Reserved = 2,
	ReserveState_MAX = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EContentKeyIndex_ContinuousIntegration : uint8_t {
	ContinuousIntegration_A21E529632046B5DAA3373A6051D7164 = 0,
	ContinuousIntegration_8C0B2C5877659E4548B294EA142D4C7A = 1,
	ContinuousIntegration_BC2E369B178A16B81F7B990426A8D59F = 2,
	ContinuousIntegration_0834F4083483791F04893BE705044600 = 3,
	ContinuousIntegration_MAX = 4,
};

enum class EBeamEndPointMethod : uint8_t {
	PEBEPM_Calculated = 0,
	PEBEPM_Distribution = 1,
	PEBEPM_Distribution_Constant = 2,
	PEBEPM_MAX = 3,
};

enum class EFileTruncateType : uint8_t {
	FileTruncate_None = 0,
	FileTruncate_KeepStart = 1,
	FileTruncate_KeepEnd = 2,
	FileTruncate_MAX = 3,
};

enum class ETourEventStatus : uint8_t {
	TES_NonePending = 0,
	TES_Registered = 1,
	TES_CheckInOpen = 2,
	TES_CheckedIn = 3,
	TES_GeneratingBrackets = 4,
	TES_MatchPending = 5,
	TES_MatchReady = 6,
	TES_InMatch = 7,
	TES_MatchResultsPending = 8,
	TES_Paused = 9,
	TES_MatchEnding = 10,
	TES_MAX = 11,
};

enum class EActorMetricsType : uint8_t {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3,
};

enum class EOnlineEnumerationReadState : uint8_t {
	OERS_NotStarted = 0,
	OERS_InProgress = 1,
	OERS_Done = 2,
	OERS_Failed = 3,
	OERS_MAX = 4,
};

enum class ERotationAxis : uint8_t {
	ROTAXIS_Yaw = 0,
	ROTAXIS_Pitch = 1,
	ROTAXIS_Roll = 2,
	ROTAXIS_MAX = 3,
};

enum class EAkListenerSpacialization : uint8_t {
	AkLS_3D = 0,
	AkLS_Left = 1,
	AkLS_Right = 2,
	AkLS_MAX = 3,
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

enum class EOnlineGameSearchComparisonType : uint8_t {
	OGSCT_Equals = 0,
	OGSCT_NotEquals = 1,
	OGSCT_GreaterThan = 2,
	OGSCT_GreaterThanEquals = 3,
	OGSCT_LessThan = 4,
	OGSCT_LessThanEquals = 5,
	OGSCT_MAX = 6,
};

enum class EHUDMessageLevel : uint8_t {
	HUDMessageLevel_All = 0,
	HUDMessageLevel_GameUpdates = 1,
	HUDMessageLevel_Essential = 2,
	HUDMessageLevel_MAX = 3,
};

enum class EBTStatus : uint8_t {
	BTStatus_Fail = 0,
	BTStatus_Success = 1,
	BTStatus_Running = 2,
	BTStatus_MAX = 3,
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

enum class EInterpMoveAxis : uint8_t {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6,
};

enum class EMovieStreamSource : uint8_t {
	MovieStream_File = 0,
	MovieStream_Memory = 1,
	MovieStream_MAX = 2,
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

enum class EMcpGroupAccessLevel : uint8_t {
	MGAL_Owner = 0,
	MGAL_Member = 1,
	MGAL_Public = 2,
	MGAL_MAX = 3,
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
	PSPT_Mesh = 8,
	PSPT_MAX = 9,
};

enum class EReplayFXProperties : uint8_t {
	ReplayFX_Distance = 0,
	ReplayFX_Kernel = 1,
	ReplayFX_MaxFar = 2,
	ReplayFX_MaxNear = 3,
	ReplayFX_MAX = 4,
};

enum class EWordFilterCensorship : uint8_t {
	WordFilterCensorship_Uncensored = 0,
	WordFilterCensorship_Censored = 1,
	WordFilterCensorship_Evil = 2,
	WordFilterCensorship_MAX = 3,
};

enum class EVertSurfaceAttractorFalloffType : uint8_t {
	VSFOFF_Constant = 0,
	VSFOFF_Linear = 1,
	VSFOFF_Exponent = 2,
	VSFOFF_MAX = 3,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EAttachActorLocationUnlockFlags : uint8_t {
	EAALUF_None = 0,
	EAALUF_X = 1,
	EAALUF_Y = 2,
	EAALUF_Z = 3,
	EAALUF_MAX = 4,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class ETrainingTag : uint8_t {
	Tag_Aerials = 0,
	Tag_Bounces = 1,
	Tag_Shots = 2,
	Tag_Saves = 3,
	Tag_Clears = 4,
	Tag_Rebounds = 5,
	Tag_Redirects = 6,
	Tag_Freestyles = 7,
	Tag_Dribbles = 8,
	Tag_AirDribbles = 9,
	Tag_Kickoffs = 10,
	Tag_WallShots = 11,
	Tag_LongShots = 12,
	Tag_CloseShots = 13,
	Tag_AngleShots = 14,
	Tag_BackwardsShots = 15,
	Tag_Offense = 16,
	Tag_Defense = 17,
	Tag_PinchShots = 18,
	Tag_MAX = 19,
};

enum class SkeletalMeshOptimizationNormalMode : uint8_t {
	SMONM_Recalculate = 0,
	SMONM_RecalculateSoft = 1,
	SMONM_RecalculateHard = 2,
	SMONM_MAX = 3,
};

enum class ELockScope : uint8_t {
	LockScope_Local = 0,
	LockScope_Global = 1,
	LockScope_MAX = 2,
};

enum class EJoinMatchType : uint8_t {
	JMT_Public = 0,
	JMT_Private = 1,
	JMT_LanHost = 2,
	JMT_LanGuest = 3,
	JMT_MAX = 4,
};

enum class EReflectionSendType : uint8_t {
	ReflectionSendType_None = 0,
	ReflectionSendType_Slapback = 1,
	ReflectionSendType_ArenaReverb = 2,
	ReflectionSendType_MAX = 3,
};

enum class EPitchTekTargetSize : uint8_t {
	PTTS_1025 = 0,
	PTTS_2049 = 1,
	PTTS_4097 = 2,
	PTTS_MAX = 3,
};

enum class LevelGridCellShape : uint8_t {
	LGCS_Box = 0,
	LGCS_Hex = 1,
	LGCS_MAX = 2,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_None = 3,
	ERM_MAX = 4,
};

enum class CrumbRedefinitionType : uint8_t {
	CR_TrailData = 0,
	CR_Triggers = 1,
	CR_CompletionTriggers = 2,
	CR_Crumbs = 3,
	CR_MAX = 4,
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

enum class ETutorialOutput : uint8_t {
	TutorialOutput_Ended = 0,
	TutorialOutput_Completed = 1,
	TutorialOutput_Failed = 2,
	TutorialOutput_ScreenFadedIn = 3,
	TutorialOutput_ScreenFadedOut = 4,
	TutorialOutput_AllMessagesDisplayed = 5,
	TutorialOutput_Started = 6,
	TutorialOutput_Reset = 7,
	TutorialOutput_Skipped = 8,
	TutorialOutput_AnswerRight = 9,
	TutorialOutput_AnswerWrong = 10,
	TutorialOutput_MAX = 11,
};

enum class EPitchTekDecalType : uint8_t {
	PTDT_Ball = 0,
	PTDT_Car = 1,
	PTDT_MAX = 2,
};

enum class ESliderType : uint8_t {
	ST_1D = 0,
	ST_2D = 1,
	ST_MAX = 2,
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

enum class EMusicPlayerState : uint8_t {
	MusicPlayerState_None = 0,
	MusicPlayerState_Enabled = 1,
	MusicPlayerState_Muted = 2,
	MusicPlayerState_Disabled = 3,
	MusicPlayerState_MAX = 4,
};

enum class EAdHocDesiredState : uint8_t {
	AHDS_None = 0,
	AHDS_Initialized = 1,
	AHDS_CreateAccessPoint = 2,
	AHDS_CreateStation = 3,
	AHDS_ScanForAccessPoints = 4,
	AHDS_ConnectToChosenStation = 5,
	AHDS_DisconnectSpecifiedStation = 6,
	AHDS_DisconnectFromAccessPoint = 7,
	AHDS_AccessPointRejecting = 8,
	AHDS_Exit = 9,
	AHDS_Max = 10,
};

enum class ETcpConnectionState : uint8_t {
	TcpConnectionState_Invalid = 0,
	TcpConnectionState_Connecting = 1,
	TcpConnectionState_Connected = 2,
	TcpConnectionState_Disconnected = 3,
	TcpConnectionState_MAX = 4,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
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

enum class EProductTradeRestriction : uint8_t {
	ProductTradeRestriction_P2P = 0,
	ProductTradeRestriction_TradeIn = 1,
	ProductTradeRestriction_MAX = 2,
};

enum class EShowOnly : uint8_t {
	SHOW_Everything = 0,
	SHOW_Body = 1,
	SHOW_Wheels = 2,
	SHOW_Arena = 3,
	SHOW_MAX = 4,
};

enum class EProfileControllerSensitivityOptions : uint8_t {
	PCSO_Medium = 0,
	PCSO_Low = 1,
	PCSO_High = 2,
	PCSO_MAX = 3,
};

enum class ECountDownFocus : uint8_t {
	CDF_None = 0,
	CDF_Pan = 1,
	CDF_Rotate = 2,
	CDF_MAX = 3,
};

enum class EForcedTeamOverride : uint8_t {
	ForcedTeamOverride_None = 0,
	ForcedTeamOverride_Blue = 1,
	ForcedTeamOverride_Orange = 2,
	ForcedTeamOverride_MAX = 3,
};

enum class SaveSlotOperationEnum : uint8_t {
	SSO_SET = 0,
	SSO_GET = 1,
	SSO_DELETE = 2,
	SSO_MAX = 3,
};

enum class ERBCollisionChannel : uint8_t {
	RBCC_Default = 0,
	RBCC_Nothing = 1,
	RBCC_Pawn = 2,
	RBCC_Vehicle = 3,
	RBCC_Water = 4,
	RBCC_GameplayPhysics = 5,
	RBCC_EffectPhysics = 6,
	RBCC_Ball = 7,
	RBCC_VehicleBlocker = 8,
	RBCC_BallBlocker = 9,
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

enum class ASType : uint8_t {
	AS_Undefined = 0,
	AS_Null = 1,
	AS_Number = 2,
	AS_Int = 3,
	AS_String = 4,
	AS_Boolean = 5,
	AS_Texture = 6,
	AS_UInt = 7,
	AS_MAX = 8,
};

enum class EActivityFeedType : uint8_t {
	AF_UnlockedBody = 0,
	AF_DrivenDistance = 1,
	AF_ScoredGoal = 2,
	AF_BlockedShot = 3,
	AF_WonGame = 4,
	AF_MVPScore = 5,
	AF_DefeatedFriend = 6,
	AF_CompletedRegularSeason = 7,
	AF_WonChampionship = 8,
	AF_UnlockedItem = 9,
	AF_UnlockedSweetTooth = 10,
	AF_MAX = 11,
};

enum class ESleepFamily : uint8_t {
	SF_Normal = 0,
	SF_Sensitive = 1,
	SF_MAX = 2,
};

enum class ESpringState : uint8_t {
	SpringState_Traveling = 0,
	SpringState_PostHit = 1,
	SpringState_MAX = 2,
};

enum class EStatGraphLevel : uint8_t {
	StatGraphLevel_None = 0,
	StatGraphLevel_PerfSummary = 1,
	StatGraphLevel_PerfGraphShort = 2,
	StatGraphLevel_PerfGraphLong = 3,
	StatGraphLevel_NetSummary = 4,
	StatGraphLevel_NetGraphShort = 5,
	StatGraphLevel_NetGraphLong = 6,
	StatGraphLevel_MAX = 7,
};

enum class EAkEnvironmentTarget : uint8_t {
	AkEnvironmentTarget_LevelDefault = 0,
	AkEnvironmentTarget_Actor = 1,
	AkEnvironmentTarget_MAX = 2,
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

enum class ETonemapperType : uint8_t {
	Tonemapper_Off = 0,
	Tonemapper_Filmic = 1,
	Tonemapper_Customizable = 2,
	Tonemapper_MAX = 3,
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

enum class ERootBoneAxis : uint8_t {
	RBA_Default = 0,
	RBA_Discard = 1,
	RBA_Translate = 2,
	RBA_MAX = 3,
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

enum class AvatarSize : uint8_t {
	AvatarSize_Small = 0,
	AvatarSize_Medium = 1,
	AvatarSize_Large = 2,
	AvatarSize_MAX = 3,
};

enum class EPointSelection : uint8_t {
	PS_Normal = 0,
	PS_Random = 1,
	PS_Reverse = 2,
	PS_MAX = 3,
};

enum class EDynamicValueModType : uint8_t {
	ModType_Add = 0,
	ModType_Multiply = 1,
	ModType_MultiplyAdd = 2,
	ModType_Set = 3,
	ModType_MAX = 4,
};

enum class ELobbyDistance : uint8_t {
	LD_Best = 0,
	LD_Close = 1,
	LD_Far = 2,
	LD_Any = 3,
	LD_MAX = 4,
};

enum class ECatalogSortOrder : uint8_t {
	CSO_FreeAndPaidCountDaily = 0,
	CSO_PaidCountAllTime = 1,
	CSO_PaidCountDail = 2,
	CSO_DigitalReleaseDate = 3,
	CSO_ReleaseDate = 4,
	CSO_UserRatings = 5,
	CSO_MAX = 6,
};

enum class ESequenceStatus : uint8_t {
	SS_Idle = 0,
	SS_Entering = 1,
	SS_Leaving = 2,
	SS_Pending = 3,
	SS_MAX = 4,
};

enum class EOnlinePlayerStorageAsyncState : uint8_t {
	OPAS_NotStarted = 0,
	OPAS_Read = 1,
	OPAS_Write = 2,
	OPAS_Finished = 3,
	OPAS_MAX = 4,
};

enum class EMusicSyncType : uint8_t {
	MusicSyncType_EndOfEvent = 0,
	MusicSyncType_UserCue = 1,
	MusicSyncType_MAX = 2,
};

enum class GJKResult : uint8_t {
	GJK_Intersect = 0,
	GJK_NoIntersection = 1,
	GJK_Fail = 2,
	GJK_MAX = 3,
};

enum class EBaseBlendType : uint8_t {
	BBT_ByActorTag = 0,
	BBT_ByActorClass = 1,
	BBT_MAX = 2,
};

enum class EProfileMovementControlOptions : uint8_t {
	PMCO_L_Thumbstick = 0,
	PMCO_R_Thumbstick = 1,
	PMCO_MAX = 2,
};

enum class ETrailTaperMethod : uint8_t {
	PETTM_None = 0,
	PETTM_Full = 1,
	PETTM_Partial = 2,
	PETTM_MAX = 3,
};

enum class ECheckAxis : uint8_t {
	ECA_Pitch = 0,
	ECA_Yaw = 1,
	ECA_Roll = 2,
	ECA_MAX = 3,
};

enum class ECrossPlatformChatState : uint8_t {
	PCCS_Everybody = 0,
	PCCS_InGameFriends = 1,
	PCCS_Block = 2,
	PCCS_MAX = 3,
};

enum class ELobbyVisibility : uint8_t {
	LV_Public = 0,
	LV_Friends = 1,
	LV_Private = 2,
	LV_Invisible = 3,
	LV_MAX = 4,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class EMcpMessageCompressionType : uint8_t {
	MMCT_NONE = 0,
	MMCT_LZO = 1,
	MMCT_ZLIB = 2,
	MMCT_MAX = 3,
};

enum class EStatGraphLayer : uint8_t {
	StatGraphLayer_Background = 0,
	StatGraphLayer_Text = 1,
	StatGraphLayer_Graph = 2,
	StatGraphLayer_MAX = 3,
};

enum class ERadialForceType : uint8_t {
	RFT_Force = 0,
	RFT_Impulse = 1,
	RFT_MAX = 2,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class EParticleScreenAlignment : uint8_t {
	PSA_Square = 0,
	PSA_Rectangle = 1,
	PSA_Velocity = 2,
	PSA_TypeSpecific = 3,
	PSA_MAX = 4,
};

enum class EAchievementDLC7 : uint8_t {
	ADLC7_JoinTheClub = 0,
	ADLC7_TogetherIsBetter = 1,
	ADLC7_NewChallenger = 2,
	ADLC7_PeoplePerson = 3,
	ADLC7_SquadGoals = 4,
	ADLC7_BestOfTheBunch = 5,
	ADLC7_MAX = 6,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class EProfileOmniDirEvadeOptions : uint8_t {
	PODI_Off = 0,
	PODI_On = 1,
	PODI_MAX = 2,
};

enum class EGameObjectShaderParameterType : uint8_t {
	GOSPT_BallPositionAndSize = 0,
	GOSPT_BallVelocity = 1,
	GOSPT_BallSpeed = 2,
	GOSPT_BallMaxSpeed = 3,
	GOSPT_IsSuperSonic = 4,
	GOSPT_IsBoosting = 5,
	GOSPT_IsMakingContactWithBall = 6,
	GOSPT_IsCarOnGround = 7,
	GOSPT_ObjectDistanceToBall = 8,
	GOSPT_ObjectSpeed = 9,
	GOSPT_ObjectVelocity = 10,
	GOSPT_SuperSonicSpeed = 11,
	GOSPT_CarMaxSpeed = 12,
	GOSPT_MAX = 13,
};

enum class EEdition : uint8_t {
	Edition_Default = 0,
	Edition_China = 1,
	Edition_MAX = 2,
};

enum class EOnlineAccountTier : uint8_t {
	OAT_Unknown = 0,
	OAT_NewUser = 1,
	OAT_Silver = 2,
	OAT_Gold = 3,
	OAT_FamilyGold = 4,
	OAT_MAX = 5,
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

enum class ClothBoneType : uint8_t {
	CLOTHBONE_Fixed = 0,
	CLOTHBONE_BreakableAttachment = 1,
	CLOTHBONE_TearLine = 2,
	CLOTHBONE_MAX = 3,
};

enum class ECameraSettingsPreset : uint8_t {
	CameraSettingsPreset_Default = 0,
	CameraSettingsPreset_Balanced = 1,
	CameraSettingsPreset_Wide = 2,
	CameraSettingsPreset_Custom = 3,
	CameraSettingsPreset_Legacy = 4,
	CameraSettingsPreset_MAX = 5,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class EAxisSign : uint8_t {
	AxisSign_None = 0,
	AxisSign_Positive = 1,
	AxisSign_Negative = 2,
	AxisSign_MAX = 3,
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

enum class EEventUploadType : uint8_t {
	EUT_GenericStats = 0,
	EUT_ProfileData = 1,
	EUT_MatchmakingData = 2,
	EUT_PlaylistPopulation = 3,
	EUT_MAX = 4,
};

enum class EPlatformInterfaceDataType : uint8_t {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_QWord = 6,
	PIDT_MAX = 7,
};

enum class EMovieControlType : uint8_t {
	MCT_Play = 0,
	MCT_Stop = 1,
	MCT_Pause = 2,
	MCT_MAX = 3,
};

enum class EWheelPosition : uint8_t {
	WP_FrontLeft = 0,
	WP_FrontRight = 1,
	WP_BackLeft = 2,
	WP_BackRight = 3,
	WP_MAX = 4,
};

enum class EAchievementParticipationType : uint8_t {
	APT_Unknown = 0,
	APT_Individual = 1,
	APT_Group = 2,
	APT_MAX = 3,
};

enum class EDataCallbackType : uint8_t {
	DataCallbackType_All = 0,
	DataCallbackType_Table = 1,
	DataCallbackType_Row = 2,
	DataCallbackType_Value = 3,
	DataCallbackType_MAX = 4,
};

enum class EInputAPI : uint8_t {
	InputAPI_Default = 0,
	InputAPI_SteamInput = 1,
	InputAPI_MAX = 2,
};

enum class FWFileType : uint8_t {
	FWFT_Log = 0,
	FWFT_Stats = 1,
	FWFT_HTML = 2,
	FWFT_User = 3,
	FWFT_Debug = 4,
	FWFT_MAX = 5,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_RandomExhaustive = 2,
	BONESOCKETSEL_MAX = 3,
};

enum class EProfileGamepadSaveVersion : uint8_t {
	ProfileGamepadSaveVersion_NewDefaultControls = 0,
	ProfileGamepadSaveVersion_MAX = 1,
};

enum class ECustomMatchSettingsType : uint8_t {
	CustomMatchSettingsType_PrivateMatch = 0,
	CustomMatchSettingsType_LocalMatch = 1,
	CustomMatchSettingsType_TourCreate = 2,
	CustomMatchSettingsType_MAX = 3,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_UnrealEdBackground = 0,
	SDPG_World = 1,
	SDPG_Foreground = 2,
	SDPG_UnrealEdForeground = 3,
	SDPG_PostProcess = 4,
	SDPG_MAX = 5,
};

enum class EPhysEffectType : uint8_t {
	EPMET_Impact = 0,
	EPMET_Slide = 1,
	EPMET_MAX = 2,
};

enum class ESplitScreenType : uint8_t {
	eSST_NONE = 0,
	eSST_2P_HORIZONTAL = 1,
	eSST_2P_VERTICAL = 2,
	eSST_3P_FAVOR_TOP = 3,
	eSST_3P_FAVOR_BOTTOM = 4,
	eSST_3P_FAVOR_SIDELEFT = 5,
	eSST_3P_FAVOR_SIDERIGHT = 6,
	eSST_4P = 7,
	eSST_MAX = 8,
};

enum class ELightmapModificationFunction : uint8_t {
	MLMF_Modulate = 0,
	MLMF_ModulateAlpha = 1,
	MLMF_MAX = 2,
};

enum class EGameShaderParameterType : uint8_t {
	GSPT_Team0_ColorPrimary = 0,
	GSPT_Team0_ColorSecondary = 1,
	GSPT_Team1_ColorPrimary = 2,
	GSPT_Team1_ColorSecondary = 3,
	GSPT_Team0_ColorPrimaryFullBrightness = 4,
	GSPT_Team0_ColorSecondaryFullBrightness = 5,
	GSPT_Team1_ColorPrimaryFullBrightness = 6,
	GSPT_Team1_ColorSecondaryFullBrightness = 7,
	GSPT_MAX = 8,
};

enum class EHistoryType : uint8_t {
	HT_None = 0,
	HT_Undo = 1,
	HT_Redo = 2,
	HT_MAX = 3,
};

enum class ETernarySetting : uint8_t {
	TernarySetting_Default = 0,
	TernarySetting_Enabled = 1,
	TernarySetting_Disabled = 2,
	TernarySetting_MAX = 3,
};

enum class ECameraTrackFlyType : uint8_t {
	CameraTrackFly_Never = 0,
	CameraTrackFly_WhenMoving = 1,
	CameraTrackFly_WhenPaused = 2,
	CameraTrackFly_MAX = 3,
};

enum class ETrainingModeSearchTypes : uint8_t {
	TMST_AllPublic = 0,
	TMST_FeaturedOnly = 1,
	TMST_MAX = 2,
};

enum class EUserSettingType : uint8_t {
	UserSettingType_List = 0,
	UserSettingType_Boolean = 1,
	UserSettingType_Scalar = 2,
	UserSettingType_MAX = 3,
};

enum class ESaveDataVersion : uint8_t {
	SaveDataVersion_Initial = 0,
	SaveDataVersion_LightShafts = 1,
	SaveDataVersion_NewOnlineProductsRemoved = 2,
	SaveDataVersion_Invisitek = 3,
	SaveDataVersion_SoundSettings = 4,
	SaveDataVersion_UISavedValues = 5,
	SaveDataVersion_MapPrefs = 6,
	SaveDataVersion_GarageComplex = 7,
	SaveDataVersion_RankedReconnect = 8,
	SaveDataVersion_Network = 9,
	SaveDataVersion_Achievements = 10,
	SaveDataVersion_Tutorial = 11,
	SaveDataVersion_BlogTiles = 12,
	SaveDataVersion_Products = 13,
	SaveDataVersion_PlaylistSkillData = 14,
	SaveDataVersion_MatchmakingSettings = 15,
	SaveDataVersion_ClientXP = 16,
	SaveDataVersion_TournamentSettings = 17,
	SaveDataVersion_Seasons = 18,
	SaveDataVersion_VideoSettings = 19,
	SaveDataVersion_GameplaySettings = 20,
	SaveDataVersion_CustomMatchSettings = 21,
	SaveDataVersion_FreeplayMap = 22,
	SaveDataVersion_SaveSingleSeason = 23,
	SaveDataVersion_MatchesPlayed = 24,
	SaveDataVersion_ConsoleLensFlares = 25,
	SaveDataVersion_LevelThresholds = 26,
	SaveDataVersion_ResetNetworkSettings = 27,
	SaveDataVersion_NoSaveDLCOwnership_DEPRECATED = 28,
	SaveDataVersion_ProductsFavoriteSave = 29,
	SaveDataVersion_CrossplayFlip = 30,
	SaveDataVersion_KeyConversion = 31,
	SaveDataVersion_MAX = 32,
};

enum class EDemolishSpeed : uint8_t {
	DemolishSpeed_Supersonic = 0,
	DemolishSpeed_None = 1,
	DemolishSpeed_MAX = 2,
};

enum class EInAppMessageInterfaceDelegate : uint8_t {
	IAMD_InAppSMSUIComplete = 0,
	IAMD_InAppEmailComplete = 1,
	IAMD_MAX = 2,
};

enum class EParticleLevelInfluenceType : uint8_t {
	LIT_Never = 0,
	LIT_OutsidePhysicsVolumes = 1,
	LIT_Always = 2,
	LIT_MAX = 3,
};

enum class RegionPingResult : uint8_t {
	PingResult_NotUsable = 0,
	PingResult_UsingCache = 1,
	PingResult_UsingSuccessfulPing = 2,
	PingResult_MAX = 3,
};

enum class ParticleAttractorActionType : uint8_t {
	PAAT_None = 0,
	PAAT_Destroy = 1,
	PAAT_Freeze = 2,
	PAAT_Event = 3,
	PAAT_MAX = 4,
};

enum class ENameplateMode : uint8_t {
	NameplateMode_DistanceFade = 0,
	NameplateMode_AlwaysVisible = 1,
	NameplateMode_Simplified = 2,
	NameplateMode_MAX = 3,
};

enum class EWebSocketState : uint8_t {
	WebSocketState_NotRequired = 0,
	WebSocketState_NeedsHandshake = 1,
	WebSocketState_Connected = 2,
	WebSocketState_MAX = 3,
};

enum class EBasicLoadResult : uint8_t {
	BasicLoadResult_Pending = 0,
	BasicLoadResult_Success = 1,
	BasicLoadResult_FileNotFound = 2,
	BasicLoadResult_WrongVersion = 3,
	BasicLoadResult_FileCorrupt = 4,
	BasicLoadResult_MountCorrupt = 5,
	BasicLoadResult_UserNotSignedIn = 6,
	BasicLoadResult_Error = 7,
	BasicLoadResult_MAX = 8,
};

enum class EVoteSubject : uint8_t {
	VoteSubject_Rematch = 0,
	VoteSubject_Forfeit = 1,
	VoteSubject_MAX = 2,
};

enum class FTELegacyGroupType : uint8_t {
	LGT_All = 0,
	LGT_NewUser = 1,
	LGT_LegacyUser = 2,
	LGT_MAX = 3,
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

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class EWeatherVariant : uint8_t {
	WeatherVariant_None = 0,
	WeatherVariant_Dawn = 1,
	WeatherVariant_Day = 2,
	WeatherVariant_Dusk = 3,
	WeatherVariant_Lab = 4,
	WeatherVariant_Night = 5,
	WeatherVariant_Rain = 6,
	WeatherVariant_Snow = 7,
	WeatherVariant_MAX = 8,
};

enum class EVoiceFilter : uint8_t {
	VoiceFilter_All = 0,
	VoiceFilter_Preset = 1,
	VoiceFilter_TeamPreset = 2,
	VoiceFilter_TacticalPreset = 3,
	VoiceFilter_Team = 4,
	VoiceFilter_Friends = 5,
	VoiceFilter_None = 6,
	VoiceFilter_MAX = 7,
};

enum class EGameplayMusicSetting : uint8_t {
	GameplayMusic_Off = 0,
	GameplayMusic_TraningOnly = 1,
	GameplayMusic_MatchesOnly = 2,
	GameplayMusic_AlwaysOn = 3,
	GameplayMusic_MAX = 4,
};

enum class EDisconnect : uint8_t {
	EDisconnect_Timeout = 0,
	EDisconnect_Kick = 1,
	EDisconnect_GameFull = 2,
	EDisconnect_MAX = 3,
};

enum class EOnlineProfilePropertyOwner : uint8_t {
	OPPO_None = 0,
	OPPO_OnlineService = 1,
	OPPO_Game = 2,
	OPPO_MAX = 3,
};

enum class ESimulationMethod : uint8_t {
	ESM_SPH = 0,
	ESM_NO_PARTICLE_INTERACTION = 1,
	ESM_MIXED_MODE = 2,
	ESM_MAX = 3,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_MAX = 2,
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

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EOnlineCreateGameSessionFlag : uint8_t {
	OCGSF_New = 0,
	OCGSF_ReSubmit = 1,
	OCGSF_MAX = 2,
};

enum class EAchievementProgressState : uint8_t {
	APS_Unknown = 0,
	APS_Achieved = 1,
	APS_NotStarted = 2,
	APS_InProgress = 3,
	APS_MAX = 4,
};

enum class ESplitScreenPosition : uint8_t {
	SSP_Center = 0,
	SSP_Left = 1,
	SSP_Right = 2,
	SSP_Top = 3,
	SSP_Bottom = 4,
	SSP_TopLeft = 5,
	SSP_TopRight = 6,
	SSP_BottomLeft = 7,
	SSP_BottomRight = 8,
	SSP_MAX = 9,
};

enum class EAxleToForce : uint8_t {
	ForceFrontAxle = 0,
	ForceBackAxle = 1,
	EAxleToForce_MAX = 2,
};

enum class EMusicPlayerSave : uint8_t {
	MusicPlayerSaveVersion_NewGameplayMusicSettings = 0,
	MusicPlayerSaveVersion_MAX = 1,
};

enum class EInstanceWeightUsage : uint8_t {
	IWU_PartialSwap = 0,
	IWU_FullSwap = 1,
	IWU_MAX = 2,
};

enum class ERouteType : uint8_t {
	ERT_Linear = 0,
	ERT_Loop = 1,
	ERT_Circle = 2,
	ERT_MAX = 3,
};

enum class EAkDynamicRangeType : uint8_t {
	AkDRT_Low = 0,
	AkDRT_Medium = 1,
	AkDRT_High = 2,
	AkDRT_MAX = 3,
};

enum class EMTXCatalogCategory : uint8_t {
	MTX_None = 0,
	MTX_Keys = 1,
	MTX_EsportsTokens = 2,
	MTX_RocketBucks = 3,
	MTX_StarterPack = 4,
	MTX_StandardPack = 5,
	MTX_MAX = 6,
};

enum class ETourStatus : uint8_t {
	TourStatus_None = 0,
	TourStatus_Cancelled = 1,
	TourStatus_Full = 2,
	TourStatus_MAX = 3,
};

enum class EPasswordFailureReason : uint8_t {
	PFR_Empty = 0,
	PFR_Mismatch = 1,
	PFR_MAX = 2,
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

enum class ESpeedDistributionSpace : uint8_t {
	SDD_Forward = 0,
	SDD_Side = 1,
	SDD_Up = 2,
	SDD_World = 3,
	SDD_MAX = 4,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_MAX = 3,
};

enum class EHistory : uint8_t {
	H_None = 0,
	H_Add = 1,
	H_Remove = 2,
	H_MAX = 3,
};

enum class EApplyForceTo : uint8_t {
	EAF_None = 0,
	EAF_Any = 1,
	EAF_CarOnly = 2,
	EAF_BallOnly = 3,
	EAF_MAX = 4,
};

enum class EAnimNodeSeriesChild : uint8_t {
	AnimNodeSeries_Idle = 0,
	AnimNodeSeries_Intro = 1,
	AnimNodeSeries_Loop = 2,
	AnimNodeSeries_Outro = 3,
	AnimNodeSeries_MAX = 4,
};

enum class EUnlockMethod : uint8_t {
	UnlockMethod_Default = 0,
	UnlockMethod_Online = 1,
	UnlockMethod_DLC = 2,
	UnlockMethod_Never = 3,
	UnlockMethod_MAX = 4,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class EAchievementSaveVersion : uint8_t {
	AchievementSaveVersion_FreeToPlayLaunch = 0,
	AchievementSaveVersion_MAX = 1,
};

enum class EPathSearchType : uint8_t {
	PST_Default = 0,
	PST_Breadth = 1,
	PST_NewBestPathTo = 2,
	PST_Constraint = 3,
	PST_MAX = 4,
};

enum class ERouteFillAction : uint8_t {
	RFA_Overwrite = 0,
	RFA_Add = 1,
	RFA_Remove = 2,
	RFA_Clear = 3,
	RFA_MAX = 4,
};

enum class EOnlinePlayerRole : uint8_t {
	OPR_PrivateMatchAdmin = 0,
	OPR_SuperPrivateMatchAdmin = 1,
	OPR_MAX = 2,
};

enum class ELineMode : uint8_t {
	LMODE_auto = 0,
	LMODE_DOS = 1,
	LMODE_UNIX = 2,
	LMODE_MAC = 3,
	LMODE_MAX = 4,
};

enum class EImageFilterOptions : uint8_t {
	ImageFilter_NONE = 0,
	ImageFilter_SEPIA = 1,
	ImageFilter_GRAYSCALE = 2,
	ImageFilter_SCENE_DEPTH = 3,
	ImageFilter_GLOWY = 4,
	ImageFilter_SUBPAR = 5,
	ImageFilter_SOBEL = 6,
	ImageFilter_SOBEL_STRIKER = 7,
	ImageFilter_COMIC_BOOK = 8,
	ImageFilter_TOON = 9,
	ImageFilter_OUTLINES = 10,
	ImageFilter_CHROMATIC = 11,
	ImageFilter_NIGHT_VISION = 12,
	ImageFilter_MAX_FILTERS = 13,
	ImageFilter_MAX = 14,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class ETieBreakDecision : uint8_t {
	TBD_None = 0,
	TBD_Goals = 1,
	TBD_Shots = 2,
	TBD_CoinToss = 3,
	TBD_MAX = 4,
};

enum class ESplineControlRotMode : uint8_t {
	SCR_NoChange = 0,
	SCR_AlongSpline = 1,
	SCR_Interpolate = 2,
	SCR_MAX = 3,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class TriangleSortAxis : uint8_t {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_VelocityX = 1,
	EDPV_VelocityY = 2,
	EDPV_VelocityZ = 3,
	EDPV_VelocityMag = 4,
	EDPV_MAX = 5,
};

enum class EAchievementDLC0 : uint8_t {
	ADLC0_WinningIsWinning = 0,
	ADLC0_AnInchAnd62Miles = 1,
	ADLC0_RideOrDie = 2,
	ADLC0_DontLookBack = 3,
	ADLC0_FamilyNotFriends = 4,
	ADLC0_DriftKing = 5,
	ADLC0_MAX = 6,
};

enum class AlphaBlendType : uint8_t {
	ABT_Linear = 0,
	ABT_Cubic = 1,
	ABT_Sinusoidal = 2,
	ABT_EaseInOutExponent2 = 3,
	ABT_EaseInOutExponent3 = 4,
	ABT_EaseInOutExponent4 = 5,
	ABT_EaseInOutExponent5 = 6,
	ABT_MAX = 7,
};

enum class ECommunicationMethod : uint8_t {
	COMM_Text = 0,
	COMM_Voice = 1,
	COMM_MAX = 2,
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

enum class EReservationStatus : uint8_t {
	ReservationStatus_None = 0,
	ReservationStatus_Reserved = 1,
	ReservationStatus_Joining = 2,
	ReservationStatus_InGame = 3,
	ReservationStatus_MAX = 4,
};

enum class EOSGameClipsAvailability : uint8_t {
	EOS_GCA_Pending = 0,
	EOS_GCA_Available = 1,
	EOS_GCA_NotSupported = 2,
	EOS_GCA_NotConfigured = 3,
	EOS_GCA_NotAvailable = 4,
	EOS_GCA_DisabledByUser = 5,
	EOS_GCA_MAX = 6,
};

enum class EProductsFavoriteSaveVersion : uint8_t {
	EProductsFavoriteSaveVersion_ConvertHashIDsToInstanceIDs = 0,
	EProductsFavoriteSaveVersion_InstanceIDV2 = 1,
	EProductsFavoriteSaveVersion_MAX = 2,
};

enum class FTERedefinitionType : uint8_t {
	ER_Group = 0,
	ER_Checkpoint = 1,
	ER_Triggers = 2,
	ER_UserGroup = 3,
	ER_SaveGroup = 4,
	ER_SaveAll = 5,
	ER_MAX = 6,
};

enum class ESceneCapturePostMethod : uint8_t {
	SceneCapPost_None = 0,
	SceneCapPost_Desat = 1,
	SceneCapPost_MAX = 2,
};

enum class EForceDirection : uint8_t {
	EFD_VolumeRotation = 0,
	EFD_ActorVelocity = 1,
	EFD_Custom = 2,
	EFD_MAX = 3,
};

enum class EAchievementMediaAssetType : uint8_t {
	AMAT_Unknown = 0,
	AMAT_Icon = 1,
	AMAT_Art = 2,
	AMAT_MAX = 3,
};

enum class EPerConStatus : uint8_t {
	PerConStatus_Disabled = 0,
	PerConStatus_Enabled = 1,
	PerConStatus_MAX = 2,
};

enum class EMirrorFieldType : uint8_t {
	MFT_None = 0,
	MFT_X = 1,
	MFT_Y = 2,
	MFT_XY = 3,
	MFT_TeamIndex = 4,
	MFT_MAX = 5,
};

enum class EContentKeyIndex_PrimeUpdate35C : uint8_t {
	PrimeUpdate35C_05A3B69A5A7CB6AE3166DDD98B520A0A = 0,
	PrimeUpdate35C_MAX = 1,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
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

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class ERopeState : uint8_t {
	RopeState_Traveling = 0,
	RopeState_Attached = 1,
	RopeState_MAX = 2,
};

enum class EAuthTicketServiceRequester : uint8_t {
	AuthTicketServiceRequester_Psynet = 0,
	AuthTicketServiceRequester_EpicOnlineServices = 1,
	AuthTicketServiceRequester_MAX = 2,
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

enum class EBusEmitterType : uint8_t {
	BusEmitterType_Reflection = 0,
	BusEmitterType_Reverb = 1,
	BusEmitterType_None = 2,
	BusEmitterType_MAX = 3,
};

enum class EPaintFinishType : uint8_t {
	PaintFinishType_Standard = 0,
	PaintFinishType_Metallic = 1,
	PaintFinishType_MAX = 2,
};

enum class ENameDisplayRelationshipProxy : uint8_t {
	NameDisplayRelationshipProxy_NoChange = 0,
	NameDisplayRelationshipProxy_ForcePlatform = 1,
	NameDisplayRelationshipProxy_ForcePsyNet = 2,
	NameDisplayRelationshipProxy_ForceAll = 3,
	NameDisplayRelationshipProxy_MAX = 4,
};

enum class ELinkType : uint8_t {
	LinkType_None = 0,
	LinkType_RocketPass = 1,
	LinkType_Event = 2,
	LinkType_MAX = 3,
};

enum class EPersonaInfoOrigin : uint8_t {
	PersonaOrigin_Platform = 0,
	PersonaOrigin_PsyNet = 1,
	PersonaOrigin_Epic = 2,
	PersonaOrigin_MAX = 3,
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

enum class ELoginMethod : uint8_t {
	LoginMethod_RefreshToken = 0,
	LoginMethod_PlatformAuthTicket = 1,
	LoginMethod_MAX = 2,
};

enum class EAxis : uint8_t {
	AXIS_NONE = 0,
	AXIS_X = 1,
	AXIS_Y = 2,
	AXIS_BLANK = 3,
	AXIS_Z = 4,
	AXIS_MAX = 5,
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

enum class FTEVersioning : uint8_t {
	FTEV_InitialVersion = 0,
	FTEV_CustomizationRework = 1,
	FTEV_MAX = 2,
};

enum class EFeaturePrivilegeLevel : uint8_t {
	FPL_Disabled = 0,
	FPL_Premium = 1,
	FPL_EnabledFriendsOnly = 2,
	FPL_Enabled = 3,
	FPL_Offline = 4,
	FPL_MAX = 5,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class ELocationStaticVertSurfaceSource : uint8_t {
	VERTSTATICSURFACESOURCE_Vert = 0,
	VERTSTATICSURFACESOURCE_Surface = 1,
	VERTSTATICSURFACESOURCE_MAX = 2,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class EMatchTieBreaker : uint8_t {
	MatchTieBreaker_FirstScore = 0,
	MatchTieBreaker_Random = 1,
	MatchTieBreaker_MAX = 2,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EBlueprintType : uint8_t {
	BlueprintType_Unrevealed = 0,
	BlueprintType_Revealed = 1,
	BlueprintType_NotABlueprint = 2,
	BlueprintType_MAX = 3,
};

enum class EFireLinkID : uint8_t {
	FLI_FireLink = 0,
	FLI_RejectedFireLink = 1,
	FLI_MAX = 2,
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

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EReceiveMode : uint8_t {
	RMODE_Manual = 0,
	RMODE_Event = 1,
	RMODE_MAX = 2,
};

enum class ERegionRestriction : uint8_t {
	RegionRestriction_Unknown = 0,
	RegionRestriction_KeyCrate = 1,
	RegionRestriction_Trade = 2,
	RegionRestriction_KeyRocketPassTier = 3,
	RegionRestriction_MAX = 4,
};

enum class EProfileAutoCenterOptions : uint8_t {
	PACO_Off = 0,
	PACO_On = 1,
	PACO_MAX = 2,
};

enum class EOnlineDataAdvertisementType : uint8_t {
	ODAT_DontAdvertise = 0,
	ODAT_OnlineService = 1,
	ODAT_QoS = 2,
	ODAT_OnlineServiceAndQoS = 3,
	ODAT_MAX = 4,
};

enum class GFxScaleMode : uint8_t {
	SM_NoScale = 0,
	SM_ShowAll = 1,
	SM_ExactFit = 2,
	SM_NoBorder = 3,
	SM_MAX = 4,
};

enum class ERootMotionMode : uint8_t {
	RMM_Translate = 0,
	RMM_Velocity = 1,
	RMM_Ignore = 2,
	RMM_Accel = 3,
	RMM_Relative = 4,
	RMM_MAX = 5,
};

enum class SearchMessageType : uint8_t {
	MessageType_Status = 0,
	MessageType_Warning = 1,
	MessageType_MAX = 2,
};

enum class EOnlineFriendState : uint8_t {
	OFS_Offline = 0,
	OFS_Online = 1,
	OFS_Away = 2,
	OFS_Busy = 3,
	OFS_Unknown = 4,
	OFS_MAX = 5,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EMobileEmissiveColorSource : uint8_t {
	MECS_EmissiveTexture = 0,
	MECS_BaseTexture = 1,
	MECS_Constant = 2,
	MECS_MAX = 3,
};

enum class ESceneCaptureViewMode : uint8_t {
	SceneCapView_Lit = 0,
	SceneCapView_Unlit = 1,
	SceneCapView_LitNoShadows = 2,
	SceneCapView_Wire = 3,
	SceneCapView_MAX = 4,
};

enum class EProfileAutoAimOptions : uint8_t {
	PAAO_Off = 0,
	PAAO_On = 1,
	PAAO_MAX = 2,
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

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_SourceSideIsUp = 3,
	Trails_MAX = 4,
};

enum class EMainMenuBackground : uint8_t {
	MMBG_Default = 0,
	MMBG_UtopiaSnow = 1,
	MMBG_HauntedStation = 2,
	MMBG_Beach = 3,
	MMBG_Beach_Night = 4,
	MMBG_Halloween = 5,
	MMBG_China = 6,
	MMBG_ParkDay = 7,
	MMBG_Music = 8,
	MMBG_ThrowbackHockey = 9,
	MMBG_Circuit = 10,
	MMBG_Outlaw = 11,
	MMBG_Arc = 12,
	MMBG_ParkSnowy = 13,
	MMBG_MAX = 14,
};

enum class ELicenseGroup : uint8_t {
	LicenseGroup_Default = 0,
	LicenseGroup_Mario = 1,
	LicenseGroup_Berry = 2,
	LicenseGroup_Maple = 3,
	LicenseGroup_DC = 4,
	LicenseGroup_FastNFurious = 5,
	LicenseGroup_Dodge = 6,
	LicenseGroup_Nissan = 7,
	LicenseGroup_RickNMorty = 8,
	LicenseGroup_HotWheels = 9,
	LicenseGroup_WWE = 10,
	LicenseGroup_Jurassic = 11,
	LicenseGroup_Microsoft = 12,
	LicenseGroup_Nintendo = 13,
	LicenseGroup_Sony = 14,
	LicenseGroup_Back2Future = 15,
	LicenseGroup_Ghostbusters = 16,
	LicenseGroup_Stranger = 17,
	LicenseGroup_Fortnite = 18,
	LicenseGroup_McLaren = 19,
	LicenseGroup_KnightRider = 20,
	LicenseGroup_Pele = 21,
	LicenseGroup_MLB = 22,
	LicenseGroup_NFL = 23,
	LicenseGroup_NBA = 24,
	LicenseGroup_Community = 25,
	LicenseGroup_Esports = 26,
	LicenseGroup_ESPN = 27,
	LicenseGroup_Monstercat = 28,
	LicenseGroup_Kaskade = 29,
	LicenseGroup_Ford = 30,
	LicenseGroup_Misc = 31,
	LicenseGroup_Lambo = 32,
	LicenseGroup_Nascar = 33,
	LicenseGroup_F1 = 34,
	LicenseGroup_Bond = 35,
	LicenseGroup_BMW = 36,
	LicenseGroup_MAX = 37,
};

enum class EOrbitCenterLocation : uint8_t {
	OCB_BallHitLocation = 0,
	OCB_CenterOfGoal = 1,
	OCB_MAX = 2,
};

enum class EEnableSlotCustomization : uint8_t {
	EnableSlotCustomization_Enabled = 0,
	EnableSlotCustomization_Disabled = 1,
	EnableSlotCustomization_MAX = 2,
};

enum class EUserBugReportCategoryType : uint8_t {
	UBRCT_UserInput = 0,
	UBRCT_AutoReport = 1,
	UBRCT_CustomerSupport = 2,
	UBRCT_Parent = 3,
	UBRCT_MAX = 4,
};

enum class EGarageState : uint8_t {
	EGS_GarageComplex_TA = 0,
	EGS_CenterCarFocus = 1,
	EGS_CustomizeCenterCar = 2,
	EGS_CenterCarScreenshot = 3,
	EGS_CarSelect = 4,
	EGS_PresetSelect = 5,
	EGS_CarSwap = 6,
	EGS_EditingRowProduct = 7,
	EGS_LockedSlot = 8,
	EGS_SlotFocus = 9,
	EGS_CustomizeSlotFocus = 10,
	EGS_SlotScreenshot = 11,
	EGS_MAX = 12,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CAPS_CameraLocal = 0,
	CAPS_World = 1,
	CAPS_UserDefined = 2,
	CAPS_MAX = 3,
};

enum class EMcpGroupAcceptState : uint8_t {
	MGAS_Error = 0,
	MGAS_Pending = 1,
	MGAS_Accepted = 2,
	MGAS_MAX = 3,
};

enum class EStatePriority : uint8_t {
	SP_Default = 0,
	SP_OverrideAny = 1,
	SP_OverrideLower = 2,
	SP_InitialOnly = 3,
	SP_MAX = 4,
};

enum class EPreferredLightmapType : uint8_t {
	EPLT_Default = 0,
	EPLT_Directional = 1,
	EPLT_Simple = 2,
	EPLT_MAX = 3,
};

enum class FTERedefinitionAction : uint8_t {
	RT_Rename = 0,
	RT_Add = 1,
	RT_Remove = 2,
	RT_MAX = 3,
};

enum class ETrademarkGlyph : uint8_t {
	TrademarkGlyph_TradeMark = 0,
	TrademarkGlyph_Registered = 1,
	TrademarkGlyph_Copyright = 2,
	TrademarkGlyph_MAX = 3,
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
	MATUSAGE_MobileLandscape = 22,
	MATUSAGE_Silhouettes = 23,
	MATUSAGE_MAX = 24,
};

enum class EPS4DisplayMode : uint8_t {
	PS4DM_CATEGORY = 0,
	PS4DM_PRODUCT = 1,
	PS4DM_PRODUCT_CODE = 2,
	PS4DM_CHECKOUT = 3,
	PS4DM_DOWNLOADLIST = 4,
	PS4DM_PLUS = 5,
	PS4DM_MAX = 6,
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
	PF_A2R10G10B10 = 20,
	PF_A16B16G16R16 = 21,
	PF_D24 = 22,
	PF_R16F = 23,
	PF_R16F_FILTER = 24,
	PF_BC5 = 25,
	PF_V8U8 = 26,
	PF_A1 = 27,
	PF_FloatR11G11B10 = 28,
	PF_A4R4G4B4 = 29,
	PF_R5G6B5 = 30,
	PF_G8R8 = 31,
	PF_R32_UINT = 32,
	PF_ASTC_4x4 = 33,
	PF_ASTC_6x6 = 34,
	PF_ASTC_8x8 = 35,
	PF_ASTC_10x10 = 36,
	PF_ASTC_12x12 = 37,
	PF_COUNT = 38,
	PF_MAX = 39,
};

enum class EProcBuildingEdge : uint8_t {
	EPBE_Top = 0,
	EPBE_Bottom = 1,
	EPBE_Left = 2,
	EPBE_Right = 3,
	EPBE_MAX = 4,
};

enum class EControllerSoundMode : uint8_t {
	CSM_Multiplayer = 0,
	CSM_On = 1,
	CSM_Off = 2,
	CSM_MAX = 3,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class EProductsArchiveSaveVersion : uint8_t {
	ProductsArchiveSaveVersion_ConvertHashIDsToInstanceIDs = 0,
	ProductsArchiveSaveVersion_InstanceIDV2 = 1,
	ProductsArchiveSaveVersion_MAX = 2,
};

enum class EOSGameClipsRecording : uint8_t {
	EOS_GCR_NotRecording = 0,
	EOS_GCR_Recording = 1,
	EOS_GCR_Paused = 2,
	EOS_GCR_MAX = 3,
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

enum class EProductAttachmentSocket : uint8_t {
	PAS_Hat = 0,
	PAS_Front = 1,
	PAS_Antenna = 2,
	PAS_UnderGlow = 3,
	PAS_Root = 4,
	PAS_MAX = 5,
};

enum class EDropGroupDisplayOrder : uint8_t {
	DropGroupDisplayOrder_Default = 0,
	DropGroupDisplayOrder_Challenge = 1,
	DropGroupDisplayOrder_RewardDrop = 2,
	DropGroupDisplayOrder_GarageSlot = 3,
	DropGroupDisplayOrder_LevelUpReward = 4,
	DropGroupDisplayOrder_Currency = 5,
	DropGroupDisplayOrder_Container = 6,
	DropGroupDisplayOrder_MAX = 7,
};

enum class EForceFeedbackMode : uint8_t {
	ForceFeedbackMode_Disabled = 0,
	ForceFeedbackMode_Impact = 1,
	ForceFeedbackMode_All = 2,
	ForceFeedbackMode_MAX = 3,
};

enum class EBeamMethod : uint8_t {
	PEBM_Distance = 0,
	PEBM_EndPoints = 1,
	PEBM_EndPoints_Interpolated = 2,
	PEBM_UserSet_EndPoints = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX = 5,
};

enum class ENetworkValue : uint8_t {
	Net_Low = 0,
	Net_Medium = 1,
	Net_High = 2,
	Net_MAX = 3,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class EDamageParameterOverrideMode : uint8_t {
	DPOM_Absolute = 0,
	DPOM_Multiplier = 1,
	DPOM_MAX = 2,
};

enum class EUIMenuState : uint8_t {
	UIMS_StartMenu = 0,
	UIMS_MainMenu = 1,
	UIMS_MAX = 2,
};

enum class EProductsSaveVersion : uint8_t {
	EProductsSaveVersion_InstanceIDV2 = 0,
	EProductsSaveVersion_MAX = 1,
};

enum class SoundDistanceModel : uint8_t {
	ATTENUATION_Linear = 0,
	ATTENUATION_Logarithmic = 1,
	ATTENUATION_Inverse = 2,
	ATTENUATION_LogReverse = 3,
	ATTENUATION_NaturalSound = 4,
	ATTENUATION_MAX = 5,
};

enum class EPaintColorVariant : uint8_t {
	PaintColorVariant_Primary = 0,
	PaintColorVariant_LightAccent = 1,
	PaintColorVariant_DarkAccent = 2,
	PaintColorVariant_Emissive = 3,
	PaintColorVariant_DeEmissive = 4,
	PaintColorVariant_Complementary = 5,
	PaintColorVariant_Balanced = 6,
	PaintColorVariant_Tertiary = 7,
	PaintColorVariant_Additive = 8,
	PaintColorVariant_Unused3 = 9,
	PaintColorVariant_Unused4 = 10,
	PaintColorVariant_Unused5 = 11,
	PaintColorVariant_MAX = 12,
};

enum class EAchievementEXP0 : uint8_t {
	AEXP0_SkyHigh = 0,
	AEXP0_AllFours = 1,
	AEXP0_Gladiator = 2,
	AEXP0_MAX = 3,
};

enum class EAchievementDLC4 : uint8_t {
	ADLC4_GG = 0,
	ADLC4_Trifecta = 1,
	ADLC4_InfinitePower = 2,
	ADLC4_StoppedCold = 3,
	ADLC4_SeaTurtle = 4,
	ADLC4_GetUpMrBubbles = 5,
	ADLC4_RocketGenocider = 6,
	ADLC4_MAX = 7,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
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
	PostProcessAA_SMAA = 8,
	PostProcessAA_MAX = 9,
};

enum class ETutorialStatus : uint8_t {
	TutorialStatus_None = 0,
	TutorialStatus_Failed = 1,
	TutorialStatus_Completed = 2,
	TutorialStatus_MAX = 3,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_NoGlobalIllumination = 4,
	Quality_MAX = 5,
};

enum class ESceneTextureType : uint8_t {
	SceneTex_Lighting = 0,
	SceneTex_MAX = 1,
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

enum class FakeDataEnum : uint8_t {
	FakeData_2 = 0,
	FakeData_3 = 1,
	FakeData_4 = 2,
	FakeData_Count = 3,
	FakeData_MAX = 4,
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

enum class EMeshMirrorMode : uint8_t {
	MeshMirrorMode_Mirror = 0,
	MeshMirrorMode_Rotate = 1,
	MeshMirrorMode_MAX = 2,
};

enum class EClubColorChange : uint8_t {
	ClubColorChange_None = 0,
	ClubColorChange_SwapTeams = 1,
	ClubColorChange_SwapPrimaryAccent0 = 2,
	ClubColorChange_SwapPrimaryAccent1 = 3,
	ClubColorChange_SwapPrimaryAccent = 4,
	ClubColorChange_WhiteVsBlack = 5,
	ClubColorChange_Gray1 = 6,
	ClubColorChange_MAX = 7,
};

enum class EMediaItemType : uint8_t {
	MIT_Unknown = 0,
	MIT_Game = 1,
	MIT_Application = 2,
	MIT_GameContent = 3,
	MIT_GameConsumable = 4,
	MIT_Subscription = 5,
	MIT_MAX = 6,
};

enum class EAuthStatus : uint8_t {
	AUS_NotStarted = 0,
	AUS_Pending = 1,
	AUS_Authenticated = 2,
	AUS_Failed = 3,
	AUS_MAX = 4,
};

enum class ECoverDirection : uint8_t {
	CD_Default = 0,
	CD_Left = 1,
	CD_Right = 2,
	CD_Up = 3,
	CD_MAX = 4,
};

enum class EPawnType : uint8_t {
	PT_Player = 0,
	PT_Spectator = 1,
	PT_Editor = 2,
	PT_MAX = 3,
};

enum class EFXComponentTarget : uint8_t {
	FXComponentTarget_All = 0,
	FXComponentTarget_Local = 1,
	FXComponentTarget_NonLocal = 2,
	FXComponentTarget_MAX = 3,
};

enum class EImageType : uint8_t {
	EIT_Unknown = 0,
	EIT_JPEG = 1,
	EIT_PNG = 2,
	EIT_MAX = 3,
};

enum class EPropertyValueMappingType : uint8_t {
	PVMT_RawValue = 0,
	PVMT_PredefinedValues = 1,
	PVMT_Ranged = 2,
	PVMT_IdMapped = 3,
	PVMT_MAX = 4,
};

enum class ENetworkInputBuffer : uint8_t {
	NetworkInputBuffer_ServerConsume = 0,
	NetworkInputBuffer_STS = 1,
	NetworkInputBuffer_CSTS = 2,
	NetworkInputBuffer_MAX = 3,
};

enum class EMusicAnalysisShaderParameterType : uint8_t {
	MAPT_Music_Band_1 = 0,
	MAPT_Music_Band_2 = 1,
	MAPT_Music_Band_3 = 2,
	MAPT_Music_Band_4 = 3,
	MAPT_Music_Band_5 = 4,
	MAPT_Music_Band_6 = 5,
	MAPT_Music_Band_7 = 6,
	MAPT_Music_Band_8 = 7,
	MAPT_Music_Band_9 = 8,
	MAPT_Music_Band_10 = 9,
	MAPT_Music_LowFreq_Envelope = 10,
	MAPT_Music_HighFreq_Envelope = 11,
	MAPT_Music_Band_Smoothed_1 = 12,
	MAPT_Music_Band_Smoothed_2 = 13,
	MAPT_Music_Band_Smoothed_3 = 14,
	MAPT_Music_Band_Smoothed_4 = 15,
	MAPT_Music_Band_Smoothed_5 = 16,
	MAPT_Music_Band_Smoothed_6 = 17,
	MAPT_Music_Band_Smoothed_7 = 18,
	MAPT_Music_Band_Smoothed_8 = 19,
	MAPT_Music_Band_Smoothed_9 = 20,
	MAPT_Music_Band_Smoothed_10 = 21,
	MAPT_Music_LowFreq_Envelope_Smoothed = 22,
	MAPT_Music_HighFreq_Envelope_Smoothed = 23,
	MAPT_Music_MAX = 24,
};

enum class EEditingType : uint8_t {
	ET_FreeCam = 0,
	ET_Ball = 1,
	ET_Car = 2,
	ET_MAX = 3,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EDecalTransform : uint8_t {
	DecalTransform_OwnerAbsolute = 0,
	DecalTransform_OwnerRelative = 1,
	DecalTransform_SpawnRelative = 2,
	DecalTransform_MAX = 3,
};

enum class ESessionMemberStatus : uint8_t {
	DSMS_Reserved = 0,
	DSMS_Inactive = 1,
	DSMS_Ready = 2,
	DSMS_Active = 3,
	DSMS_MAX = 4,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class EDebugBreakType : uint8_t {
	DEBUGGER_NativeOnly = 0,
	DEBUGGER_ScriptOnly = 1,
	DEBUGGER_Both = 2,
	DEBUGGER_MAX = 3,
};

enum class EMaxDistanceScaleMode : uint8_t {
	MDSM_Multiply = 0,
	MDSM_Substract = 1,
	MDSM_MAX = 2,
};

enum class EAchievementRewardType : uint8_t {
	ART_Unknown = 0,
	ART_Gamerscore = 1,
	ART_InApp = 2,
	ART_Art = 3,
	ART_MAX = 4,
};

enum class ETerrainMappingType : uint8_t {
	TMT_Auto = 0,
	TMT_XY = 1,
	TMT_XZ = 2,
	TMT_YZ = 3,
	TMT_MAX = 4,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class EPBCornerType : uint8_t {
	EPBC_Default = 0,
	EPBC_Chamfer = 1,
	EPBC_Round = 2,
	EPBC_MAX = 3,
};

enum class ESeverityType : uint8_t {
	SeverityType_None = 0,
	SeverityType_Low = 1,
	SeverityType_Medium = 2,
	SeverityType_High = 3,
	SeverityType_MAX = 4,
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

enum class EFlushResult : uint8_t {
	FlushResult_Success = 0,
	FlushResult_InProgress = 1,
	FlushResult_TimedOut = 2,
	FlushResult_MAX = 3,
};

enum class EEdgeHandlingStatus : uint8_t {
	EHS_AddedBothDirs = 0,
	EHS_Added0to1 = 1,
	EHS_Added1to0 = 2,
	EHS_AddedNone = 3,
	EHS_MAX = 4,
};

enum class ELocationBoneSocketDestSelectionMethod : uint8_t {
	BONESOCKETDESTSEL_Sequential = 0,
	BONESOCKETDESTSEL_Random = 1,
	BONESOCKETDESTSEL_RandomExhaustive = 2,
	BONESOCKETDESTSEL_BlendAll = 3,
	BONESOCKETDESTSEL_MAX = 4,
};

enum class EWorldAttractorFalloffType : uint8_t {
	FOFF_Constant = 0,
	FOFF_Linear = 1,
	FOFF_Exponent = 2,
	FOFF_MAX = 3,
};

enum class EMaterialEffectStage : uint8_t {
	EFFECT_INACTIVE = 0,
	EFFECT_FADE_IN = 1,
	EFFECT_ACTIVE = 2,
	EFFECT_FADE_OUT = 3,
	EFFECT_MAX = 4,
};

enum class ESupportType : uint8_t {
	SupportType_Creator = 0,
	SupportType_Charity = 1,
	SupportType_MAX = 2,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
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
	TFBM_MAX = 9,
};

enum class EPlayerDriveType : uint8_t {
	PlayerDriveType_All = 0,
	PlayerDriveType_Player = 1,
	PlayerDriveType_Bot = 2,
	PlayerDriveType_MAX = 3,
};

enum class ClothMovementScaleGen : uint8_t {
	ECMDM_DistToFixedVert = 0,
	ECMDM_VertexBoneWeight = 1,
	ECMDM_Empty = 2,
	ECMDM_MAX = 3,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class EAchievementGame : uint8_t {
	AG_Virtuoso = 0,
	AG_Stocked = 1,
	AG_FarFarAway = 2,
	AG_SuperVictorious = 3,
	AG_Champion = 4,
	AG_TheStreak = 5,
	AG_HelensPride = 6,
	AG_BattleCarCollector = 7,
	AG_DropsintheBucket = 8,
	AG_Rocketeer = 9,
	AG_GreaseMonkey = 10,
	AG_PitchVeteran = 11,
	AG_RidersBlock = 12,
	AG_BreakShot = 13,
	AG_Turbocharger = 14,
	AG_DrillSergeant = 15,
	AG_MinutetoWinit = 16,
	AG_SpeedDemon = 17,
	AG_PickMeUp = 18,
	AG_WallCrawler = 19,
	AG_TeamPlayer = 20,
	AG_SARPBCForever = 21,
	AG_FeatherinYourRecap = 22,
	AG_Winner = 23,
	AG_CleanSheet = 24,
	AG_TripleThreat = 25,
	AG_DoubleUp = 26,
	AG_SinglesClub = 27,
	AG_PerfectStart = 28,
	AG_StillAShowOff = 29,
	AG_KnowTheDrill = 30,
	AG_Traveler = 31,
	AG_Tinkerer = 32,
	AG_FirstTimer = 33,
	AG_BarrasBravas = 34,
	AG_Friendly = 35,
	AG_MAX = 36,
};

enum class ETouchType : uint8_t {
	Touch_Began = 0,
	Touch_Moved = 1,
	Touch_Stationary = 2,
	Touch_Ended = 3,
	Touch_Cancelled = 4,
	Touch_MAX = 5,
};

enum class ESeasonSaveVersion : uint8_t {
	SeasonSaveVersion_AddIntroBotDifficulty = 0,
	SeasonSaveVersion_MAX = 1,
};

enum class EDemolishTarget : uint8_t {
	DemolishTarget_OtherTeam = 0,
	DemolishTarget_Everyone = 1,
	DemolishTarget_None = 2,
	DemolishTarget_MAX = 3,
};

enum class EUserBugReportSubmitStatus : uint8_t {
	UBRSS_None = 0,
	UBRSS_Generated = 1,
	UBRSS_Submitting = 2,
	UBRSS_Success = 3,
	UBRSS_Error = 4,
	UBRSS_MAX = 5,
};

enum class EMeshBeaconBandwidthTestType : uint8_t {
	MB_BandwidthTestType_Upstream = 0,
	MB_BandwidthTestType_Downstream = 1,
	MB_BandwidthTestType_RoundtripLatency = 2,
	MB_BandwidthTestType_MAX = 3,
};

enum class EPsyNetPartyStatus : uint8_t {
	PsyNetParty_Disabled = 0,
	PsyNetParty_Connecting = 1,
	PsyNetParty_Connected = 2,
	PsyNetParty_Disconnected = 3,
	PsyNetParty_MAX = 4,
};

enum class EPaintTeam : uint8_t {
	PaintTeam_Blue = 0,
	PaintTeam_Orange = 1,
	PaintTeam_None = 2,
	PaintTeam_MAX = 3,
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

enum class EMobileTextureBlendFactorSource : uint8_t {
	MTBFS_VertexColor = 0,
	MTBFS_MaskTexture = 1,
	MTBFS_MAX = 2,
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

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class EInterpTrackMoveFrame : uint8_t {
	IMF_World = 0,
	IMF_RelativeToInitial = 1,
	IMF_MAX = 2,
};

enum class EMaterialPositionTransform : uint8_t {
	TRANSFORMPOS_World = 0,
	TRANSFORMPOS_MAX = 1,
};

enum class FFG_ForceFieldCoordinates : uint8_t {
	FFG_CARTESIAN = 0,
	FFG_SPHERICAL = 1,
	FFG_CYLINDRICAL = 2,
	FFG_TOROIDAL = 3,
	FFG_MAX = 4,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EShakeReceiver : uint8_t {
	ShakeReceiver_All = 0,
	ShakeReceiver_Local = 1,
	ShakeReceiver_NonLocal = 2,
	ShakeReceiver_MAX = 3,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class EGraphSummaryType : uint8_t {
	GraphSummaryType_Latest = 0,
	GraphSummaryType_Avg = 1,
	GraphSummaryType_MinValue = 2,
	GraphSummaryType_MaxValue = 3,
	GraphSummaryType_Sum = 4,
	GraphSummaryType_MAX = 5,
};

enum class EProfileRaceAcceleratorControlOptions : uint8_t {
	PRACO_Trigger = 0,
	PRACO_Button = 1,
	PRACO_MAX = 2,
};

enum class GFxRenderTextureMode : uint8_t {
	RTM_Opaque = 0,
	RTM_Alpha = 1,
	RTM_AlphaComposite = 2,
	RTM_MAX = 3,
};

enum class EFilterProductAttribute : uint8_t {
	FPA_Indestructible = 0,
	FPA_MAX = 1,
};

enum class EV2TutorialType : uint8_t {
	V2T_Basic_2 = 0,
	V2T_Skills_2 = 1,
	V2T_Skills_3 = 2,
	V2T_Aerials = 3,
	V2T_BasicTeam = 4,
	V2T_AdvancedTeam = 5,
	V2T_MAX = 6,
};

enum class EAchievementDLC5 : uint8_t {
	ADLC5_RegisteredVoter = 0,
	ADLC5_Metaverse = 1,
	ADLC5_BraveTheElements = 2,
	ADLC5_DamageControl = 3,
	ADLC5_FullCourse = 4,
	ADLC5_BuckminsterX10 = 5,
	ADLC5_MAX = 6,
};

enum class ETickingGroup : uint8_t {
	TG_PreAsyncWork = 0,
	TG_DuringAsyncWork = 1,
	TG_PostAsyncWork = 2,
	TG_PostUpdateWork = 3,
	TG_EffectsUpdateWork = 4,
	TG_MAX = 5,
};

enum class EFeaturePrivilege : uint8_t {
	FP_OnlinePlay = 0,
	FP_CommunicationText = 1,
	FP_CommunicationVideo = 2,
	FP_CommunicationVoice = 3,
	FP_ShareUserCreatedContent = 4,
	FP_PurchaseContent = 5,
	FP_ViewPlayerProfile = 6,
	FP_ShowPresenceInformation = 7,
	FP_RecordDVRClips = 8,
	FP_CloudStorage = 9,
	FP_PremiumContent = 10,
	FP_PremiumVideoContent = 11,
	FP_BrowseInternet = 12,
	FP_SocialNetworkSharing = 13,
	FP_KinectSharing = 14,
	FP_FitnessUpload = 15,
	FP_Crossplay = 16,
	FP_MAX = 17,
};

enum class EFaceFXRegOp : uint8_t {
	FXRO_Add = 0,
	FXRO_Multiply = 1,
	FXRO_Replace = 2,
	FXRO_MAX = 3,
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

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_World = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_Tangent = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_MAX = 4,
};

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_PostProjection = 1,
	TRANSFORMPOSSOURCE_MAX = 2,
};

enum class EParticleEventOutputType : uint8_t {
	ePARTICLEOUT_Spawn = 0,
	ePARTICLEOUT_Death = 1,
	ePARTICLEOUT_Collision = 2,
	ePARTICLEOUT_AttractorCollision = 3,
	ePARTICLEOUT_Kismet = 4,
	ePARTICLEOUT_MAX = 5,
};

enum class EShopDeliverableType : uint8_t {
	Deliverable_Product = 0,
	Deliverable_MAX = 1,
};

enum class EStatEventDisplayLevels : uint8_t {
	SEDL_None = 0,
	SEDL_Primary = 1,
	SEDL_All = 2,
	SEDL_MAX = 3,
};

enum class EChallengeFilter : uint8_t {
	CF_Default = 0,
	CF_Progress = 1,
	CF_MAX = 2,
};

enum class ESkinType : uint8_t {
	EST_Default = 0,
	EST_Animated = 1,
	EST_AnimatedPrimaryOnly = 2,
	EST_NonAnimatedPrimaryOnly = 3,
	EST_MAX = 4,
};

enum class DLCOwnershipState : uint8_t {
	DLCOwnershipState_Unknown = 0,
	DLCOwnershipState_Owned = 1,
	DLCOwnershipState_NotOwned = 2,
	DLCOwnershipState_Error = 3,
	DLCOwnershipState_MAX = 4,
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

enum class ESoundClassName : uint8_t {
	Master = 0,
	ESoundClassName_MAX = 1,
};

enum class EProfileDifficultyOptions : uint8_t {
	PDO_Normal = 0,
	PDO_Easy = 1,
	PDO_Hard = 2,
	PDO_MAX = 3,
};

enum class EMeshType : uint8_t {
	MeshType_StaticMesh = 0,
	MeshType_SkeletalMesh = 1,
	MeshType_MAX = 2,
};

enum class EProductFilterType : uint8_t {
	ProductFilterType_TradeIn = 0,
	ProductFilterType_P2P = 1,
	ProductFilterType_Garage = 2,
	ProductFilterType_Destruction = 3,
	ProductFilterType_MAX = 4,
};

enum class EBoostType : uint8_t {
	BoostType_Unknown = 0,
	BoostType_Pill = 1,
	BoostType_Pad = 2,
	BoostType_MAX = 3,
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

enum class EBreakoutDamageState : uint8_t {
	DamageState_Start = 0,
	DamageState_Damaged = 1,
	DamageState_Broken = 2,
	DamageState_MAX = 3,
};

enum class OnlinePlatform : uint8_t {
	OnlinePlatform_Unknown = 0,
	OnlinePlatform_Steam = 1,
	OnlinePlatform_PS4 = 2,
	OnlinePlatform_PS3 = 3,
	OnlinePlatform_Dingo = 4,
	OnlinePlatform_QQ = 5,
	OnlinePlatform_OldNNX = 6,
	OnlinePlatform_NNX = 7,
	OnlinePlatform_PsyNet = 8,
	OnlinePlatform_Deleted = 9,
	OnlinePlatform_WeGame = 10,
	OnlinePlatform_Epic = 11,
	OnlinePlatform_MAX = 12,
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

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB25TM_SkelMeshActor = 5,
	Beam2SourceTargetMethod_MAX = 6,
};

enum class EPinnedAxisType : uint8_t {
	PinnedAxis_X = 0,
	PinnedAxis_Y = 1,
	PinnedAxis_Z = 2,
	PinnedAxis_None = 3,
	PinnedAxis_MAX = 4,
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

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class EmitterSocketBehavior : uint8_t {
	ESB_Default = 0,
	ESB_SingleEmitterAveragePosition = 1,
	ESB_MAX = 2,
};

enum class EBoneSocketAttractorFalloffType : uint8_t {
	BSFOFF_Constant = 0,
	BSFOFF_Linear = 1,
	BSFOFF_Exponent = 2,
	BSFOFF_MAX = 3,
};

enum class EAkCallbackType : uint8_t {
	AkCallbackType_Marker = 0,
	AkCallbackType_Duration = 1,
	AkCallbackType_MAX = 2,
};

enum class EBanType : uint8_t {
	BanType_None = 0,
	BanType_Auth = 1,
	BanType_Chat = 2,
	BanType_Voice = 3,
	BanType_Club = 4,
	BanType_Trade = 5,
	BanType_QuitPenalty = 6,
	BanType_MAX = 7,
};

enum class EOnlineContentType : uint8_t {
	OCT_Downloaded = 0,
	OCT_SaveGame = 1,
	OCT_MAX = 2,
};

enum class ECoverType : uint8_t {
	CT_None = 0,
	CT_Standing = 1,
	CT_MidLevel = 2,
	CT_MAX = 3,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class EPartyBeaconClientRequest : uint8_t {
	PBClientRequest_NewReservation = 0,
	PBClientRequest_UpdateReservation = 1,
	PBClientRequest_MAX = 2,
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

enum class EMobileAlphaValueSource : uint8_t {
	MAVS_DiffuseTextureAlpha = 0,
	MAVS_MaskTextureRed = 1,
	MAVS_MaskTextureGreen = 2,
	MAVS_MaskTextureBlue = 3,
	MAVS_MAX = 4,
};

enum class EBotSkill : uint8_t {
	BotSkill_Intro = 0,
	BotSkill_Easy = 1,
	BotSkill_Medium = 2,
	BotSkill_Hard = 3,
	BotSkill_Unfair = 4,
	BotSkill_MAX = 5,
};

enum class ESafeZoneType : uint8_t {
	eSZ_TOP = 0,
	eSZ_BOTTOM = 1,
	eSZ_LEFT = 2,
	eSZ_RIGHT = 3,
	eSZ_MAX = 4,
};

enum class EBankLoadStatus : uint8_t {
	BLS_Unloaded = 0,
	BLS_Pending = 1,
	BLS_Loaded = 2,
	BLS_TimedOut = 3,
	BLS_MAX = 4,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class EOrbitAxisBehavior : uint8_t {
	OAB_StaticRotationAxis = 0,
	OAB_RandomRotationAxis = 1,
	OAB_MAX = 2,
};

enum class ELegacyBoxStatus : uint8_t {
	LBS_ExistingBox = 0,
	LBS_NewBox = 1,
	LBS_New = 2,
	LBS_MAX = 3,
};

enum class ETransitionType : uint8_t {
	TT_None = 0,
	TT_Paused = 1,
	TT_Loading = 2,
	TT_Saving = 3,
	TT_Connecting = 4,
	TT_Precaching = 5,
	TT_MAX = 6,
};

enum class EProfileControllerVibrationToggleOptions : uint8_t {
	PCVTO_Off = 0,
	PCVTO_IgnoreThis = 1,
	PCVTO_IgnoreThis2 = 2,
	PCVTO_On = 3,
	PCVTO_MAX = 4,
};

enum class EDecompressionType : uint8_t {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Dingo = 7,
	DTYPE_MAX = 8,
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

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Linear = 1,
	TF_MAX = 2,
};

enum class EContentKeyIndex_PrimeUpdate32 : uint8_t {
	PrimeUpdate32_300CBBF87113F4C1E17912EAAEACCF62 = 0,
	PrimeUpdate32_AC64316796AD89170208EA1ADE72EB53 = 1,
	PrimeUpdate32_9F4361589D74380E0351FCF10A7F2032 = 2,
	PrimeUpdate32_950D6028A559ADDDA77671B90D707A89 = 3,
	PrimeUpdate32_BBCA9FD0992D35DE029D78D34001A3A8 = 4,
	PrimeUpdate32_1BAB656F9A701BF05B8483F5C3E95365 = 5,
	PrimeUpdate32_EB99CF7F2BD77FB03F91DB208B6E3E78 = 6,
	PrimeUpdate32_D1993DE64E44D83188D68A0052953321 = 7,
	PrimeUpdate32_43520ABD8E211AE3EFA707DE4736D7A6 = 8,
	PrimeUpdate32_595CDCCADBF7CF6359DCD9CACA14BF45 = 9,
	PrimeUpdate32_EFEB90A98D01EF42CACDF3C6166A4E6B = 10,
	PrimeUpdate32_B87BF5D0B9F7DE0B688739F591EEC514 = 11,
	PrimeUpdate32_7AB8B7644C5D85D344D09FF1468C412C = 12,
	PrimeUpdate32_45F3ADEBE4EB02ABAF7B13185A766207 = 13,
	PrimeUpdate32_1427133C46AA4BAD6F54BC030AC7F9A9 = 14,
	PrimeUpdate32_61C0088685FFBE4E0D6F438B118E5987 = 15,
	PrimeUpdate32_84190309583ABA308C0C2E6621E37B9E = 16,
	PrimeUpdate32_DE9085DF47CD080E0BC98052B543E1CA = 17,
	PrimeUpdate32_D71B3C1F2C6CCAE81795D360C9E51B87 = 18,
	PrimeUpdate32_FE659BEDDCA2DCBEBFD0D5A71CE5F55E = 19,
	PrimeUpdate32_C4CB8C293E93DB50EC6C29DE36C52B90 = 20,
	PrimeUpdate32_CE0E00A1192764DEF4798337C1ACE048 = 21,
	PrimeUpdate32_D5BAADF84D6B7ACAC93AC22539969043 = 22,
	PrimeUpdate32_70F2913F8A944F8E9F578CE3F8D789B2 = 23,
	PrimeUpdate32_374EBD593462DC7180BD4F2F8785F548 = 24,
	PrimeUpdate32_851BE21BC1A5E102E86B4239FF2C7645 = 25,
	PrimeUpdate32_E32780FE596DDD89FDA1CED46D30BA08 = 26,
	PrimeUpdate32_1C213CD84626E67147C1AAF044BCE949 = 27,
	PrimeUpdate32_AE65305403939F84C0F5DE5775770C7A = 28,
	PrimeUpdate32_0EE4F6E8266F4BAA55F56AA6CAED927E = 29,
	PrimeUpdate32_654A14F505D929128335F21A88B72936 = 30,
	PrimeUpdate32_B80CDD1F4B9BE4A5C31CF96645FDFAD6 = 31,
	PrimeUpdate32_CA43F5822A576ED8067999E2A43C82FC = 32,
	PrimeUpdate32_C5C0A837BAC4698316A50EA505F4345D = 33,
	PrimeUpdate32_F082F05E7D651EDE256CCCC9A0699E15 = 34,
	PrimeUpdate32_D845ECFEEB577D15E6204540A327CD8A = 35,
	PrimeUpdate32_9B27CA53E1CD25849873E3B0DEAA4265 = 36,
	PrimeUpdate32_66EE45220A851279ECFA9ACDBB520988 = 37,
	PrimeUpdate32_MAX = 38,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class ELobbyKickReason : uint8_t {
	LKR_Unknown = 0,
	LKR_Kicked = 1,
	LKR_Full = 2,
	LKR_InGame = 3,
	LKR_LeaveAction = 4,
	LKR_OwnerDisappeared = 5,
	LKR_ConnectionError = 6,
	LKR_SignedOut = 7,
	LKR_CrossplayDisabled = 8,
	LKR_LeaderPartyUp = 9,
	LKR_NotInTourParty = 10,
	LKR_TourCheckingIn = 11,
	LKR_MAX = 12,
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

enum class ERemappable : uint8_t {
	Remappable_All = 0,
	Remappable_Key = 1,
	Remappable_Axis = 2,
	Remappable_KeyTriggerAxis = 3,
	Remappable_None = 4,
	Remappable_MAX = 5,
};

enum class EDOFQuality : uint8_t {
	DOFQuality_Low = 0,
	DOFQuality_Medium = 1,
	DOFQuality_High = 2,
	DOFQuality_MAX = 3,
};

enum class EFXComponentState : uint8_t {
	FXComponentState_Detached = 0,
	FXComponentState_Attached = 1,
	FXComponentState_PendingDetach = 2,
	FXComponentState_MAX = 3,
};

enum class EVanityType : uint8_t {
	VT_None = 0,
	VT_Banner = 1,
	VT_Avatar = 2,
	VT_AvatarBorder = 3,
	VT_MAX = 4,
};

enum class EDynamicLightEnvironmentBoundsMethod : uint8_t {
	DLEB_OwnerComponents = 0,
	DLEB_ManualOverride = 1,
	DLEB_ActiveComponents = 2,
	DLEB_MAX = 3,
};

enum class EProfileRaceBrakeControlOptions : uint8_t {
	PRBCO_Trigger = 0,
	PRBCO_Button = 1,
	PRBCO_MAX = 2,
};

enum class EProfileRaceCameraLocationOptions : uint8_t {
	PRCLO_Behind = 0,
	PRCLO_Front = 1,
	PRCLO_Inside = 2,
	PRCLO_MAX = 3,
};

enum class EStatsFetchType : uint8_t {
	SFT_Player = 0,
	SFT_CenteredOnPlayer = 1,
	SFT_Friends = 2,
	SFT_TopRankings = 3,
	SFT_MAX = 4,
};

enum class EMobileTexCoordsSource : uint8_t {
	MTCS_TexCoords0 = 0,
	MTCS_TexCoords1 = 1,
	MTCS_TexCoords2 = 2,
	MTCS_TexCoords3 = 3,
	MTCS_MAX = 4,
};

enum class BallFreezeState : uint8_t {
	BallFreezeState_Freezing = 0,
	BallFreezeState_Frozen = 1,
	BallFreezeState_MAX = 2,
};

enum class EDetectionType : uint8_t {
	DT_Ball = 0,
	DT_Player = 1,
	DT_MAX = 2,
};

enum class EDatabaseEnvironment : uint8_t {
	DBE_DevLocal = 0,
	DBE_Dev = 1,
	DBE_Test = 2,
	DBE_Production = 3,
	DBE_MAX = 4,
};

enum class ELegacyStatusSetState : uint8_t {
	LSSS_NotSet = 0,
	LSSS_Updating = 1,
	LSSS_UnableToUpdate = 2,
	LSSS_Set = 3,
	LSSS_MAX = 4,
};

enum class EAchievementUnlockType : uint8_t {
	AUT_Unknown = 0,
	AUT_All = 1,
	AUT_Persistent = 2,
	AUT_Challenge = 3,
	AUT_MAX = 4,
};

enum class TriggerConditionNumericalType : uint8_t {
	TCNT_GreaterThan = 0,
	TCNT_LessThan = 1,
	TCNT_Equal = 2,
	TCNT_GreaterEqual = 3,
	TCNT_LessThanEqual = 4,
	TCNT_MAX = 5,
};

enum class ELocationBoneSocketDestination : uint8_t {
	BONESOCKETDEST_Bones = 0,
	BONESOCKETDEST_Sockets = 1,
	BONESOCKETDEST_MAX = 2,
};

enum class EShadowFilterQuality : uint8_t {
	SFQ_Low = 0,
	SFQ_Medium = 1,
	SFQ_High = 2,
	SFQ_MAX = 3,
};

enum class ELightAffectsClassification : uint8_t {
	LAC_USER_SELECTED = 0,
	LAC_DYNAMIC_AFFECTING = 1,
	LAC_STATIC_AFFECTING = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX = 4,
};

enum class ERequestType : uint8_t {
	Request_GET = 0,
	Request_POST = 1,
	Request_MAX = 2,
};

enum class EAttenuationType : uint8_t {
	AttenuationType_Default = 0,
	AttenuationType_None = 1,
	AttenuationType_MAX = 2,
};

enum class EOnlineGameSearchSortType : uint8_t {
	OGSSO_Ascending = 0,
	OGSSO_Descending = 1,
	OGSSO_MAX = 2,
};

enum class EThrowSetting : uint8_t {
	ETS_Forward = 0,
	ETS_Backward = 1,
	ETS_Side = 2,
	ETS_MAX = 3,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class EProfileYInversionOptions : uint8_t {
	PYIO_Off = 0,
	PYIO_On = 1,
	PYIO_MAX = 2,
};

enum class EWordFilterUsage : uint8_t {
	WordFilterUsage_PlayerName = 0,
	WordFilterUsage_TrainingName = 1,
	WordFilterUsage_LanServerName = 2,
	WordFilterUsage_CustomTeamName = 3,
	WordFilterUsage_TourName = 4,
	WordFilterUsage_TourTeamName = 5,
	WordFilterUsage_ClubName = 6,
	WordFilterUsage_ClubTag = 7,
	WordFilterUsage_ClubMotD = 8,
	WordFilterUsage_ClubTagPlayerName = 9,
	WordFilterUsage_MatchChat = 10,
	WordFilterUsage_PartyChat = 11,
	WordFilterUsage_MAX = 12,
};

enum class EProfileVoiceThruSpeakersOptions : uint8_t {
	PVTSO_Off = 0,
	PVTSO_On = 1,
	PVTSO_Both = 2,
	PVTSO_MAX = 3,
};

enum class EMusicStingersSetting : uint8_t {
	MusicStingers_Off = 0,
	MusicStingers_MatchesOnly = 1,
	MusicStingers_AlwaysOn = 2,
	MusicStingers_MAX = 3,
};

enum class EProfileXInversionOptions : uint8_t {
	PXIO_Off = 0,
	PXIO_On = 1,
	PXIO_MAX = 2,
};

enum class EXPTier : uint8_t {
	XPTier_Low = 0,
	XPTier_Medium = 1,
	XPTier_High = 2,
	XPTier_VeryHigh = 3,
	XPTier_MAX = 4,
};

enum class EPinGrantResult : uint8_t {
	PinGrantResult_Success = 0,
	PinGrantResult_Expired = 1,
	PinGrantResult_MAX = 2,
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

enum class EInputTypes : uint8_t {
	IT_XAxis = 0,
	IT_YAxis = 1,
	IT_MAX = 2,
};

enum class SaveDataVersionSupport : uint8_t {
	SaveDataVersionSupportLessThenEqual = 0,
	SaveDataVersionSupportEqual = 1,
	SaveDataVersionSupportAny = 2,
	SaveDataVersionSupport_MAX = 3,
};

enum class PartyProcessingStatus : uint8_t {
	PPS_None = 0,
	PPS_Create = 1,
	PPS_Join = 2,
	PPS_MAX = 3,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class EPresenceGroup : uint8_t {
	EPG_Offline = 0,
	EPG_Online = 1,
	EPG_InGame = 2,
	EPG_Friends = 3,
	EPG_MAX = 4,
};

enum class EVoteStatus : uint8_t {
	VOTE_Pending = 0,
	VOTE_Yes = 1,
	VOTE_No = 2,
	VOTE_MAX = 3,
};

enum class EQuickChatState : uint8_t {
	QCS_InGame = 0,
	QCS_PostGame = 1,
	QCS_PreGame = 2,
	QCS_MAX = 3,
};

enum class ELightShadowMode : uint8_t {
	LightShadow_Normal = 0,
	LightShadow_Modulate = 1,
	LightShadow_ModulateBetter = 2,
	LightShadow_MAX = 3,
};

enum class EPS4ErrorDialog : uint8_t {
	PS4_ERROR_SIGNED_OUT = 0,
	PS4_ERROR_SIGNED_MAX = 1,
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

enum class EHeadTrackingAction : uint8_t {
	EHTA_DisableHeadTracking = 0,
	EHTA_EnableHeadTracking = 1,
	EHTA_MAX = 2,
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

enum class EOnlinePlayerPermission : uint8_t {
	OPP_PrivateMatchAdmin = 0,
	OPP_SuperPrivateMatchAdmin = 1,
	OPP_MAX = 2,
};

enum class EInputPlatformType : uint8_t {
	IPT_PC = 0,
	IPT_361 = 1,
	IPT_PS3 = 2,
	IPT_PS4 = 3,
	IPT_XBOX_ONE = 4,
	IPT_NNX = 5,
	IPT_NNX_SINGLE = 6,
	IPT_MAX = 7,
};

enum class EOnlineNewsType : uint8_t {
	ONT_Unknown = 0,
	ONT_GameNews = 1,
	ONT_ContentAnnouncements = 2,
	ONT_Misc = 3,
	ONT_MAX = 4,
};

enum class EMobileEnvironmentBlendMode : uint8_t {
	MEBM_Add = 0,
	MEBM_Lerp = 1,
	MEBM_MAX = 2,
};

enum class FFB_ForceFieldCoordinates : uint8_t {
	FFB_CARTESIAN = 0,
	FFB_SPHERICAL = 1,
	FFB_CYLINDRICAL = 2,
	FFB_TOROIDAL = 3,
	FFB_MAX = 4,
};

enum class EContentKeyIndex_PrimeUpdate34 : uint8_t {
	PrimeUpdate34_92E48285E52D9C5376465AFA3C483D21 = 0,
	PrimeUpdate34_798E5021EB2EE0D9150525103009597E = 1,
	PrimeUpdate34_3E57F996CC259382D4F9D60DD3411999 = 2,
	PrimeUpdate34_980D75703713C7B361FA6663369415DD = 3,
	PrimeUpdate34_0BB7B0C3C62B7BC62A8CF5AE4224313F = 4,
	PrimeUpdate34_16684068F60C3BEF59FCA6681DEFC634 = 5,
	PrimeUpdate34_8638D056E206619C71F7358A3112AA75 = 6,
	PrimeUpdate34_119863391AC5E311B66BF5EB49A7E392 = 7,
	PrimeUpdate34_DCA6627ACE5BE1A3D82E699E38B383BA = 8,
	PrimeUpdate34_F44577CDD9D45CBF49CEDC32EE829FC1 = 9,
	PrimeUpdate34_4D75D62B40DE98B190090EB2851E7598 = 10,
	PrimeUpdate34_D0378645638D7FE611F959E71B989E88 = 11,
	PrimeUpdate34_F67C94735DF24D72CE6E0983445EFF94 = 12,
	PrimeUpdate34_677E188D9A579ADE3F2CD3747D225C24 = 13,
	PrimeUpdate34_F7E58DABA865EC58A2D4496DE3C4375F = 14,
	PrimeUpdate34_C2BD319DE1987E7D4DD851CCA2A06FCC = 15,
	PrimeUpdate34_B8CBE903CC7AE40A7F668F6427E57098 = 16,
	PrimeUpdate34_D0A8BEDB5EB633D376B288A6729F2958 = 17,
	PrimeUpdate34_6D8E086B4A152E4BD9059DC67E9A5330 = 18,
	PrimeUpdate34_D93828EBD836F1BEEF0BA345FF2D7D2B = 19,
	PrimeUpdate34_584D6260FEA4A45FBEC3729A47F32A2C = 20,
	PrimeUpdate34_525D1944EF49B6263813E9C33FE9A2E7 = 21,
	PrimeUpdate34_EB7F8E2F3CD896BECB59816B49A8225D = 22,
	PrimeUpdate34_F53E63F89C250939560481ACF2EB4F57 = 23,
	PrimeUpdate34_1EFD13089FD99C03404F686ABB842FC1 = 24,
	PrimeUpdate34_CE1C329C9C4A36B5347CDDFC34E6FE74 = 25,
	PrimeUpdate34_AA31999372C5419377BC328A124FA260 = 26,
	PrimeUpdate34_1FEC83F0FCACE770E7D580C38DBA0B7C = 27,
	PrimeUpdate34_380201BF1433CCFDC60B75AA5A1F27A0 = 28,
	PrimeUpdate34_0B5FB027AD52B9D07E7C6610F51D049B = 29,
	PrimeUpdate34_AAF86940AE1401B7904BB3F1B7F0BF84 = 30,
	PrimeUpdate34_A2EEFC632E25737A361937883AA2B9E3 = 31,
	PrimeUpdate34_25DFE6D61E4B7BB4B8F48EA4C2893C30 = 32,
	PrimeUpdate34_9A1D6F3529477B911753DA025ADE429F = 33,
	PrimeUpdate34_1CA56D0C508FF3D00C3347E82B5396F8 = 34,
	PrimeUpdate34_E648CD9F3659F31EF46715B3FB73EF16 = 35,
	PrimeUpdate34_36892DC2D16FE232BA96D6E8B9E5288E = 36,
	PrimeUpdate34_AED24E43D476A4470C99AABEE2C53673 = 37,
	PrimeUpdate34_32B30CAF516C298774B59FC806B3B6AA = 38,
	PrimeUpdate34_02A902A86328CF57E63A7D1AD763DE60 = 39,
	PrimeUpdate34_C4C41667DE1E754135DE7DB5710A24DD = 40,
	PrimeUpdate34_6AF47E33D558FC35C2FEB7A9D9ACAC59 = 41,
	PrimeUpdate34_9C6ABEFD5E0C4F2DE3A2F7D146FAF952 = 42,
	PrimeUpdate34_F3CA5A2918490945C363517319A0C2EC = 43,
	PrimeUpdate34_8592B9C622C8A3189DB3B4E2C2362142 = 44,
	PrimeUpdate34_AC0C2D53149AD444AEFA1F9F7F29D39E = 45,
	PrimeUpdate34_074B3338DD2160921DB2DF191227F03E = 46,
	PrimeUpdate34_BF336D6E7DAC9A696838C3A788CEA62E = 47,
	PrimeUpdate34_67FB8392992984DA262E637A376E2318 = 48,
	PrimeUpdate34_775260504F332F70DB926CD3CD7E63A7 = 49,
	PrimeUpdate34_258F7CD5F76794C5180F23D0AB71E40C = 50,
	PrimeUpdate34_6177123148139D8930D4DFEA95501359 = 51,
	PrimeUpdate34_A09893A74F7796FC0D23ADDF21E51A68 = 52,
	PrimeUpdate34_72481FA8D257BD5935DC6BFAAFFE37B2 = 53,
	PrimeUpdate34_A8A33573BBF97BC994426669BA945F97 = 54,
	PrimeUpdate34_43A538B20CFD5AE55EBE8327D70618AA = 55,
	PrimeUpdate34_C309EEE625F26444CB456A7C3738519D = 56,
	PrimeUpdate34_40370551AA833BA691B954D5F223D20E = 57,
	PrimeUpdate34_1D49DD289EEBB9EF24BD0DC1DC8790C7 = 58,
	PrimeUpdate34_AAE20A592337576246339356A56D13CC = 59,
	PrimeUpdate34_44C670308CD575930F330390E81F5DFD = 60,
	PrimeUpdate34_7EA963419DAF9F1F789AA0BCFA32504F = 61,
	PrimeUpdate34_418B733466B3543D3FF771D598D8E4F8 = 62,
	PrimeUpdate34_185C6E063F04824C1408EA9670595259 = 63,
	PrimeUpdate34_70F0016A0CCAAB0D71EDF0DA29C52171 = 64,
	PrimeUpdate34_3F24725E47D67DD20FE3AD9F35AEF209 = 65,
	PrimeUpdate34_MAX = 66,
};

enum class EPlayerVoiceTransitionState : uint8_t {
	PVTS_Idle = 0,
	PVTS_Joining = 1,
	PVTS_Leaving = 2,
	PVTS_MAX = 3,
};

enum class EProfileRaceTransmissionOptions : uint8_t {
	PRTO_Auto = 0,
	PRTO_Manual = 1,
	PRTO_MAX = 2,
};

enum class EContentKeyIndex_PrimeUpdate35 : uint8_t {
	PrimeUpdate35_904C03345B5306946918E821FFD0557D = 0,
	PrimeUpdate35_7D2BD3C4466DC9DCB376054A00FD8704 = 1,
	PrimeUpdate35_95D345AF6F80E57FF039F0AF309CF397 = 2,
	PrimeUpdate35_8895661B346552E41E98626288616FDB = 3,
	PrimeUpdate35_4936E2EC04B35A4C33132DB942EEFBF9 = 4,
	PrimeUpdate35_E4CE5BA9AE7B7CF44E87C642A1B2075F = 5,
	PrimeUpdate35_AB8CA32A6AC22D1BCD733B45AAF3E516 = 6,
	PrimeUpdate35_82504C8CB31FDBF83749FDB9D4647B22 = 7,
	PrimeUpdate35_0F79BF2A330B5F14F6F1B334BAD190B8 = 8,
	PrimeUpdate35_2FE48155423D40CAD4A7C1E13DFCA010 = 9,
	PrimeUpdate35_85B7C89F12D13A7FC7C1BF63F2223D07 = 10,
	PrimeUpdate35_8C08D9BB2ECFFE7FCB5E1C9ADA0C6915 = 11,
	PrimeUpdate35_30D1E752D5CC3D535314F48E0155BC8B = 12,
	PrimeUpdate35_9DB24424FFE117E4360FB889EC00EBC4 = 13,
	PrimeUpdate35_8B91A692CFC5CEF406CF0B7A5340F490 = 14,
	PrimeUpdate35_A71FDE17430E717C0EA90A81E08C7D09 = 15,
	PrimeUpdate35_F3CB1DE67976A82AF24C37EA7BF28116 = 16,
	PrimeUpdate35_B8FB465286F92DA86FCFFABCD943FC43 = 17,
	PrimeUpdate35_7BD907E5EE245062AD8C8911144583B3 = 18,
	PrimeUpdate35_2F59A5E90E71DA06C07E887054F77C0A = 19,
	PrimeUpdate35_1EAFB7B3369A59BFE2D6047EACED36EB = 20,
	PrimeUpdate35_E2BFF79629FF2D72D31C3B0BF09C3D32 = 21,
	PrimeUpdate35_MAX = 22,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_Disable = 2,
	PBO_MAX = 3,
};

enum class EFilterMode : uint8_t {
	FM_None = 0,
	FM_Ignore = 1,
	FM_Affect = 2,
	FM_MAX = 3,
};

enum class ETimeZone : uint8_t {
	TZ_UTC = 0,
	TZ_Local = 1,
	TZ_MAX = 2,
};

enum class ECurrency : uint8_t {
	Currency_Soft = 0,
	Currency_Hard = 1,
	Currency_MAX = 2,
};

enum class ETrinaryBool : uint8_t {
	TrinaryBool_Irrelevant = 0,
	TrinaryBool_False = 1,
	TrinaryBool_True = 2,
	TrinaryBool_MAX = 3,
};

enum class ECarImpactResult : uint8_t {
	CarImpactResult_None = 0,
	CarImpactResult_ZeroSpeed = 1,
	CarImpactResult_ZeroSpeedTowardsCar = 2,
	CarImpactResult_OtherCarFaster = 3,
	CarImpactResult_Success = 4,
	CarImpactResult_FailDemolishTargetNone = 5,
	CarImpactResult_FailNotSupersonic = 6,
	CarImpactResult_FailInsufficientForwardSpeed = 7,
	CarImpactResult_FailNotWithinForwardEllipticalCone = 8,
	CarImpactResult_FailSameTeam = 9,
	CarImpactResult_FailNotWithinVictimHitLocationAngle = 10,
	CarImpactResult_FailNotWithinForwardHitAngle = 11,
	CarImpactResult_FailNotWithinImpactNormalAngle = 12,
	CarImpactResult_Bump = 13,
	CarImpactResult_MAX = 14,
};

enum class EAchievementDLC3 : uint8_t {
	ADLC3_MadScientist = 0,
	ADLC3_IcingTheCake = 1,
	ADLC3_LeftWingRightWing = 2,
	ADLC3_FastBreak = 3,
	ADLC3_BuzzerBeater = 4,
	ADLC3_BuddingArtist = 5,
	ADLC3_OneBetter = 6,
	ADLC3_Certifiable = 7,
	ADLC3_MAX = 8,
};

enum class EReplayVersion : uint8_t {
	ReplayVersion_Base = 0,
	ReplayVersion_OnlineLoadout = 1,
	ReplayVersion_CameraSettings = 2,
	ReplayVersion_TeamLoadouts = 3,
	ReplayVersion_MatchType = 4,
	ReplayVersion_ActorName = 5,
	ReplayVersion_MutatorSeekFree = 6,
	ReplayVersion_ClubColors = 7,
	ReplayVersion_CameraTrack = 8,
	ReplayVersion_MAX = 9,
};

enum class EFiveHitType : uint8_t {
	FiveHit_None = 0,
	FiveHit_Low = 1,
	FiveHit_High = 2,
	FiveHit_MAX = 3,
};

enum class EAchievementType : uint8_t {
	AT_Game = 0,
	AT_EXP0 = 1,
	AT_DLC0 = 2,
	AT_DLC1 = 3,
	AT_DLC2 = 4,
	AT_XBO0 = 5,
	AT_DLC3 = 6,
	AT_DLC4 = 7,
	AT_DLC5 = 8,
	AT_DLC6 = 9,
	AT_DLC7 = 10,
	AT_Meta = 11,
	AT_MAX = 12,
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

enum class EMaterialLightingModel : uint8_t {
	MLM_Phong = 0,
	MLM_NonDirectional = 1,
	MLM_Unlit = 2,
	MLM_SHPRT = 3,
	MLM_Custom = 4,
	MLM_Anisotropic = 5,
	MLM_MAX = 6,
};

enum class EAITeam : uint8_t {
	AITeam_Self = 0,
	AITeam_Enemy = 1,
	AITeam_Any = 2,
	AITeam_MAX = 3,
};

enum class ETrainingType : uint8_t {
	Training_None = 0,
	Training_Aerial = 1,
	Training_Goalie = 2,
	Training_Striker = 3,
	Training_MAX = 4,
};

enum class EAchievementDLC1 : uint8_t {
	ADLC1_SurvivalOfTheFittest = 0,
	ADLC1_Heartbreaker = 1,
	ADLC1_NaturalProgression = 2,
	ADLC1_Throwback = 3,
	ADLC1_HotShotPartTwo = 4,
	ADLC1_MAX = 5,
};

enum class ERootRotationOption : uint8_t {
	RRO_Default = 0,
	RRO_Discard = 1,
	RRO_Extract = 2,
	RRO_MAX = 3,
};

enum class EOnlineGameSearchEntryType : uint8_t {
	OGSET_Property = 0,
	OGSET_LocalizedSetting = 1,
	OGSET_ObjectProperty = 2,
	OGSET_MAX = 3,
};

enum class EObjectEncoding : uint8_t {
	OPSE_UObject = 0,
	OPSE_Json = 1,
	OPSE_MAX = 2,
};

enum class EPartyMatchmakingRestriction : uint8_t {
	PMR_NotOriginalAppOwner = 0,
	PMR_PendingLicenseAgreement = 1,
	PMR_InMainMenu = 2,
	PMR_NotLoggedInPsyNet = 3,
	PMR_MAX = 4,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class ERotationType : uint8_t {
	Rot_Auto = 0,
	Rot_AutoAim = 1,
	Rot_AutoForward = 2,
	Rot_AutoArch = 3,
	Rot_World = 4,
	Rot_MapCenter = 5,
	Rot_MAX = 6,
};

enum class EMobileAmbientOcclusionSource : uint8_t {
	MAOS_Disabled = 0,
	MAOS_VertexColorRed = 1,
	MAOS_VertexColorGreen = 2,
	MAOS_VertexColorBlue = 3,
	MAOS_VertexColorAlpha = 4,
	MAOS_MAX = 5,
};

enum class EAkEnvironmentType : uint8_t {
	EnvironmentType_SpatializedAudio = 0,
	EnvironmentType_UnspatializedAudio = 1,
	EnvironmentType_Music = 2,
	EnvironmentType_None = 3,
	EnvironmentType_MAX = 4,
};

enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_World = 0,
	TRANSFORM_View = 1,
	TRANSFORM_Local = 2,
	TRANSFORM_Tangent = 3,
	TRANSFORM_MAX = 4,
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

enum class EProfileVersion : uint8_t {
	ProfileVersion_Initial = 0,
	ProfileVersion_LoadoutPlayerTitle = 1,
	ProfileVersion_SaveReplayInput = 2,
	ProfileVersion_SaveReplayInput2 = 3,
	ProfileVersion_ChatRebind = 4,
	ProfileVersion_SaveReplayInput3 = 5,
	ProfileVersion_DingoChatFix = 6,
	ProfileVersion_CustomMatchSettings = 7,
	ProfileVersion_ChatSettings = 8,
	ProfileVersion_TeamLoadouts = 9,
	ProfileVersion_CarColors = 10,
	ProfileVersion_ChatGamepadBindingConsoleOnly = 11,
	ProfileVersion_PaintFinishInLoadouts = 12,
	ProfileVersion_MusicPlaylistSelector = 13,
	ProfileVersion_ResetAccountSelectNNX = 14,
	ProfileVersion_GameplaySettings = 15,
	ProfileVersion_ResetAccountSelectNNXMain = 16,
	ProfileVersion_BannerSettings = 17,
	ProfileVersion_Stats = 18,
	ProfileVersion_ControlSettings = 19,
	ProfileVersion_PCBindings = 20,
	ProfileVersion_AimAssist = 21,
	ProfileVersion_CameraSettings = 22,
	ProfileVersion_QuickChatSettings = 23,
	ProfileVersion_LoadoutData = 24,
	ProfileVersion_GamepadSettings = 25,
	ProfileVersion_SparseBindingsArrays = 26,
	ProfileVersion_ClubColors2 = 27,
	ProfileVersion_CarColors2 = 28,
	ProfileVersion_MAX = 29,
};

enum class EWeightCheck : uint8_t {
	EWC_AnimNodeSlotNotPlaying = 0,
	EWC_MAX = 1,
};

enum class EInterpMethodType : uint8_t {
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval = 1,
	IMT_UseBrokenTangentEval = 2,
	IMT_MAX = 3,
};

enum class EFaceFXBlendMode : uint8_t {
	FXBM_Overwrite = 0,
	FXBM_Additive = 1,
	FXBM_MAX = 2,
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

enum class EPlaylistType : uint8_t {
	PlaylistType_Training = 0,
	PlaylistType_Match = 1,
	PlaylistType_MAX = 2,
};

enum class EPitchTekTextureType : uint8_t {
	PitchTek_ColorTexture = 0,
	PitchTek_DataTexture = 1,
	PitchTek_MAX = 2,
};

enum class EConnectionQualityState : uint8_t {
	CQS_Good = 0,
	CQS_Mediocre = 1,
	CQS_Bad = 2,
	CQS_MAX = 3,
};

enum class EForceMode : uint8_t {
	ForceMode_Force = 0,
	ForceMode_Impulse = 1,
	ForceMode_Velocity = 2,
	ForceMode_SmoothImpulse = 3,
	ForceMode_SmoothVelocity = 4,
	ForceMode_Acceleration = 5,
	ForceMode_MAX = 6,
};

enum class EAchievementXBO0 : uint8_t {
	AXBO0_NiceHat = 0,
	AXBO0_MarcusVMasterChief = 1,
	AXBO0_MAX = 2,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class EButtonPressType : uint8_t {
	BPT_Normal = 0,
	BPT_Tap = 1,
	BPT_Hold = 2,
	BPT_DoubleTap = 3,
	BPT_Toggle = 4,
	BPT_MAX = 5,
};

enum class ETrainingSaveType : uint8_t {
	ETS_MyTraining = 0,
	ETS_Favorited = 1,
	ETS_Downloaded = 2,
	ETS_MAX = 3,
};

enum class EItemDisplayType : uint8_t {
	DisplayDaily = 0,
	DisplayFull = 1,
	EItemDisplayType_MAX = 2,
};

enum class EContentKeyIndex_PrimeUpdate35B : uint8_t {
	PrimeUpdate35B_97490524374FF46E3131FDF063239CE4 = 0,
	PrimeUpdate35B_22960F06997C71815DAEE2A35FBF8BC0 = 1,
	PrimeUpdate35B_EF057E3FB173AB964D918CAF3AF2475C = 2,
	PrimeUpdate35B_86379A41A2C7B95FEB8FD72CB8131592 = 3,
	PrimeUpdate35B_E16F5C7C109AA985A927839F6F512ABF = 4,
	PrimeUpdate35B_8543F0D0AAD75DB7C983D461F39E56E3 = 5,
	PrimeUpdate35B_530D464DD5C6C12AB08E881BD8D38800 = 6,
	PrimeUpdate35B_45A9B88D52F97C76C05A176D2187E859 = 7,
	PrimeUpdate35B_4662C606CB2FA4A93DBF972502AD7DD4 = 8,
	PrimeUpdate35B_7697296F2773D7A7DD64E022BB837375 = 9,
	PrimeUpdate35B_MAX = 10,
};

enum class EMapPrefType : uint8_t {
	MapPrefType_None = 0,
	MapPrefType_Like = 1,
	MapPrefType_Dislike = 2,
	MapPrefType_MAX = 3,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
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

enum class EQuickChatVersion : uint8_t {
	QuickChatVersion_AddPreGameQuickChat = 0,
	QuickChatVersion_MAX = 1,
};

enum class EAmbientOcclusionQuality : uint8_t {
	AO_High = 0,
	AO_Medium = 1,
	AO_Low = 2,
	AO_MAX = 3,
};

enum class EContentKeyIndex_PrimeUpdate30 : uint8_t {
	PrimeUpdate30_1DB64BB9636815EFA9399659109DD68D = 0,
	PrimeUpdate30_9234CF28DDEC42BA6D348267FA446B0A = 1,
	PrimeUpdate30_503AD462D2DCE768AE47BB2329144CAE = 2,
	PrimeUpdate30_213CA336DDB319FD27DEA933E3501CB2 = 3,
	PrimeUpdate30_F7FD01F704F37BC24F42A1F9316D8A1D = 4,
	PrimeUpdate30_3087684ADB9F22472E3AFD9BE5BF94F5 = 5,
	PrimeUpdate30_810B945ECFD25E0822A159B328604ECA = 6,
	PrimeUpdate30_5465981D30DE3D6E327B176D436FEF9D = 7,
	PrimeUpdate30_9A9242C1EC822F5CABB949FFDF01D97A = 8,
	PrimeUpdate30_452F33B1387640B277D05CCF28B27094 = 9,
	PrimeUpdate30_33430E4B5498C30E9942BC67BB35E032 = 10,
	PrimeUpdate30_712FAB1F622E61A50F98B76312770661 = 11,
	PrimeUpdate30_2386DB5AA955DDFF74A6A7AF443249B5 = 12,
	PrimeUpdate30_C5BE8F988BD1FF6A53893EC1B454B272 = 13,
	PrimeUpdate30_ED667588F3F916C76D11EADB27036255 = 14,
	PrimeUpdate30_27C7319E6A9E8651E89204245770107E = 15,
	PrimeUpdate30_966DAC7787B441D0E6195D90634ADFD1 = 16,
	PrimeUpdate30_DF823FCBBF433C11264736998336CFB9 = 17,
	PrimeUpdate30_DC5ABAEFCD0A266C64BF8664FEE15309 = 18,
	PrimeUpdate30_22EC7532DB37341C045127F6263A15FF = 19,
	PrimeUpdate30_28B8BBA8CBF5B1B73BD72127D5ADCCB5 = 20,
	PrimeUpdate30_AA915328B1E7A7251488C75194A90384 = 21,
	PrimeUpdate30_D76E2A921047B235911605B9B008F606 = 22,
	PrimeUpdate30_55026AC8526C9B85A556C370FFCBE521 = 23,
	PrimeUpdate30_84C1F1262EF1E5DC120A7ED88DBFEF15 = 24,
	PrimeUpdate30_A99C4C15B5858BB823253B065BE66BB2 = 25,
	PrimeUpdate30_MAX = 26,
};

enum class ENATType : uint8_t {
	NAT_Unknown = 0,
	NAT_Open = 1,
	NAT_Moderate = 2,
	NAT_Strict = 3,
	NAT_MAX = 4,
};

enum class EOnlineFileType : uint8_t {
	OFT_Unknown = 0,
	OFT_Binary = 1,
	OFT_Json = 2,
	OFT_MAX = 3,
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

enum class EContentKeyIndex_PrimeUpdate29 : uint8_t {
	PrimeUpdate29_AE206DA0E0A3AAD8B6755870B27FA65E = 0,
	PrimeUpdate29_30CA52092D2CEDAA55E764986CC47D60 = 1,
	PrimeUpdate29_350E4C7D232183351C9A7CA19AF1D171 = 2,
	PrimeUpdate29_0F4D063A56589D60F7C667659284EF79 = 3,
	PrimeUpdate29_DF40E515A9C2BC9F9B6459DA06BA12B4 = 4,
	PrimeUpdate29_07DAE5D877865DA3A7B27525C6BCD772 = 5,
	PrimeUpdate29_398C669A96F0D8C7A7CB85C6B7F9D40D = 6,
	PrimeUpdate29_1A0A172C108D12F6B9E2582B8353515A = 7,
	PrimeUpdate29_DFA1AA4962EC1FAF6388A5D29978701F = 8,
	PrimeUpdate29_82BD9EB94679B73DA8574C6DB2C8737E = 9,
	PrimeUpdate29_6E59D0C3AAAF6C9D2E326F4293999A64 = 10,
	PrimeUpdate29_3F53F796EEBEDA376ACA7199F20CAA63 = 11,
	PrimeUpdate29_C29913CE0063B6A4499E4AFF4C5D56D1 = 12,
	PrimeUpdate29_88F2B75897AE1A5B80B4DCC82C376200 = 13,
	PrimeUpdate29_EF28529F54D54075C40BA9309352A504 = 14,
	PrimeUpdate29_4F3D2425A947760B6BD53B2E51290AE9 = 15,
	PrimeUpdate29_42DC275ACD6AF3B20C30E2A016AECC19 = 16,
	PrimeUpdate29_ADC297BC151083F6529E1A1559605351 = 17,
	PrimeUpdate29_755715CBB92570E53F72C1BEF66C2E93 = 18,
	PrimeUpdate29_907AF3C9F3A0262587FF66ADF42F4D3F = 19,
	PrimeUpdate29_C271DB65745C937C51A4591C915C5AF0 = 20,
	PrimeUpdate29_MAX = 21,
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
	PMT_Reconnect = 8,
	PMT_AntiCheatKick = 9,
	PMT_MAX = 10,
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

enum class EAttractorSkelVertSurfaceDestination : uint8_t {
	VERTSURFACEDEST_Vert = 0,
	VERTSURFACEDEST_Surface = 1,
	VERTSURFACEDEST_MAX = 2,
};

enum class ESoundStatePriority : uint8_t {
	SSP_None = 0,
	SSP_Scoreboard = 1,
	SSP_Replay = 2,
	SSP_MidGameMenu = 3,
	SSP_Pause = 4,
	SSP_BeginRound = 5,
	SSP_EndRound = 6,
	SSP_WinnerMenu = 7,
	SSP_MainMenu = 8,
	SSP_PremiumGarage = 9,
	SSP_Roulette = 10,
	SSP_AudioPreview = 11,
	SSP_MusicPreview = 12,
	SSP_ThirdPartyOverlay = 13,
	SSP_LoadingScreen = 14,
	SSP_MAX = 15,
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

enum class ELanBeaconState : uint8_t {
	LANB_NotUsingLanBeacon = 0,
	LANB_Hosting = 1,
	LANB_Searching = 2,
	LANB_MAX = 3,
};

enum class EInputMatchAction : uint8_t {
	IMA_GreaterThan = 0,
	IMA_LessThan = 1,
	IMA_MAX = 2,
};

enum class EAdHocCurrentState : uint8_t {
	AHCS_None = 0,
	AHCS_Initializing = 1,
	AHCS_Initialized = 2,
	AHCS_Station = 3,
	AHCS_StationScanning = 4,
	AHCS_StationConnecting = 5,
	AHCS_StationConnected = 6,
	AHCS_StationDisconnected = 7,
	AHCS_StationClosing = 8,
	AHCS_AccessPointCreating = 9,
	AHCS_AccessPointCreated = 10,
	AHCS_AccessPointScanning = 11,
	AHCS_AccessPointRejecting = 12,
	AHCS_AccessPointClosing = 13,
	AHCS_Finalizing = 14,
	AHCS_Error = 15,
	AHCS_MAX = 16,
};

enum class EForceFeedbackType : uint8_t {
	ForceFeedbackType_Disabled = 0,
	ForceFeedbackType_VeryLight = 1,
	ForceFeedbackType_Light = 2,
	ForceFeedbackType_Medium = 3,
	ForceFeedbackType_Heavy = 4,
	ForceFeedbackType_Legacy = 5,
	ForceFeedbackType_MAX = 6,
};

enum class ECopyAxis : uint8_t {
	CopyAxis_X = 0,
	CopyAxis_Y = 1,
	CopyAxis_Z = 2,
	CopyAxis_Pitch = 3,
	CopyAxis_Yaw = 4,
	CopyAxis_Roll = 5,
	CopyAxis_MAX = 6,
};

enum class EFreeplayCommand : uint8_t {
	FreeplayCommand_BallInFront = 0,
	FreeplayCommand_BallOnCar = 1,
	FreeplayCommand_RedirectPass = 2,
	FreeplayCommand_PopBallUp = 3,
	FreeplayCommand_DefendShot = 4,
	FreeplayCommand_MAX = 5,
};

enum class EAchievementDLC6 : uint8_t {
	ADLC6_StormTrooper = 0,
	ADLC6_GoodTimes = 1,
	ADLC6_SwapMeet = 2,
	ADLC6_TradeSecret = 3,
	ADLC6_RankUp = 4,
	ADLC6_ComingOnStrong = 5,
	ADLC6_MAX = 6,
};

enum class EEffectsIntensity : uint8_t {
	EI_Default = 0,
	EI_Low = 1,
	EI_MAX = 2,
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

enum class EInputBufferSaturationLevel : uint8_t {
	IBSL_ExtremelyStarved = 0,
	IBSL_Starved = 1,
	IBSL_Good = 2,
	IBSL_Saturated = 3,
	IBSL_ExtremelySaturated = 4,
	IBSL_MAX = 5,
};

enum class EContentKeyIndex_PrimeUpdate33 : uint8_t {
	PrimeUpdate33_9859F4962ED9225261C1735A9B0F6A7F = 0,
	PrimeUpdate33_C212DFEF60853EEB61ACA8181A89A15F = 1,
	PrimeUpdate33_C418C87964E1BB0C7DCB3E70779FB44B = 2,
	PrimeUpdate33_1FEB11B693427C63E457203E461639E3 = 3,
	PrimeUpdate33_4ED08FC09FB52F44407423877E04CACA = 4,
	PrimeUpdate33_DBFAF049AEB30397815B08553C60FB59 = 5,
	PrimeUpdate33_8A88FA4B1CFBE1E21536C648BBD4F23E = 6,
	PrimeUpdate33_F59B6D4EFACF226D4B590EB3B22A9C34 = 7,
	PrimeUpdate33_B435739A7F1C97EF5F1D7554AC117749 = 8,
	PrimeUpdate33_3920915610E4452D9178C330AC20EBFA = 9,
	PrimeUpdate33_BE72EF04B58AF461A7D85A77B48EE37A = 10,
	PrimeUpdate33_E7BE7D7122884CEEF63FBC297632C761 = 11,
	PrimeUpdate33_F23A298C56E7EBF4CF8C6875F03BFE72 = 12,
	PrimeUpdate33_ECB007102C74731082C7272DD98D502A = 13,
	PrimeUpdate33_618F822EFD2AA0D7B69A35C84C600564 = 14,
	PrimeUpdate33_E80A98F4841B3861D085BBE347233903 = 15,
	PrimeUpdate33_5EE9F2BC8C9CA242782C40CF779804CE = 16,
	PrimeUpdate33_3A7BDFD41C45E477C990F83772DDE5FF = 17,
	PrimeUpdate33_ED459D7A6FE5DBCECABA1F93BD49247B = 18,
	PrimeUpdate33_6C677BD35A184A2BB0EBAB421BC55E39 = 19,
	PrimeUpdate33_7ED0D8CF98C35C1549F175290231FC02 = 20,
	PrimeUpdate33_E48D95A331BB274C1F99297A1AEF0A9A = 21,
	PrimeUpdate33_78C0060D1C5191F62C68D4DED6FCE798 = 22,
	PrimeUpdate33_15ABD202609BD1609F930B708BCD7208 = 23,
	PrimeUpdate33_3F18B0F70069D6ADF8C0E2B783B36BC5 = 24,
	PrimeUpdate33_9AF0D8EDFCB91756D4F7048012E922D6 = 25,
	PrimeUpdate33_BE2A12592777B870F55FAD163C043192 = 26,
	PrimeUpdate33_EAA00740DF8EF37816AE479E8CCB20B6 = 27,
	PrimeUpdate33_7110D96C5620E2A3360E3887D254A2D6 = 28,
	PrimeUpdate33_0F7338535499E16C2BF19CB546C7C2A6 = 29,
	PrimeUpdate33_E168E8341CB79082D0D9AA4D1FEC97A8 = 30,
	PrimeUpdate33_5C1562652DB849A2BB8B1779333E573D = 31,
	PrimeUpdate33_2E512914EDDC939A207DE0F77DDA26CF = 32,
	PrimeUpdate33_CEE13EA70861968B6AAA07CFA66162DB = 33,
	PrimeUpdate33_MAX = 34,
};

enum class ELoginStatus : uint8_t {
	LS_NotLoggedIn = 0,
	LS_UsingLocalProfile = 1,
	LS_LoggedIn = 2,
	LS_MAX = 3,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EFacebookIntegrationDelegate : uint8_t {
	FID_AuthorizationComplete = 0,
	FID_FacebookRequestComplete = 1,
	FID_DialogComplete = 2,
	FID_FriendsListComplete = 3,
	FID_MAX = 4,
};

enum class ETrail2SpawnMethod : uint8_t {
	PET2SM_Emitter = 0,
	PET2SM_Velocity = 1,
	PET2SM_Distance = 2,
	PET2SM_MAX = 3,
};

enum class EInventoryItemState : uint8_t {
	IIS_Unknown = 0,
	IIS_All = 1,
	IIS_Enabled = 2,
	IIS_Suspended = 3,
	IIS_Expired = 4,
	IIS_Canceled = 5,
	IIS_MAX = 6,
};

enum class ECrowdValueType : uint8_t {
	CVT_Excitement = 0,
	CVT_Tension = 1,
	CVT_Anticipation = 2,
	CVT_Upset = 3,
	CVT_MAX = 4,
};

enum class ESpecialEventState : uint8_t {
	SES_Inactive = 0,
	SES_Active = 1,
	SES_Redemption = 2,
	SES_MAX = 3,
};

enum class EAchievementMeta : uint8_t {
	AMeta_PointCollector = 0,
	AMeta_MAX = 1,
};

enum class EStatTrackingUnitType : uint8_t {
	CountUnit = 0,
	SpeedUnit = 1,
	DistanceUnit = 2,
	EStatTrackingUnitType_MAX = 3,
};

enum class EAutomatedRunResult : uint8_t {
	ARR_Unknown = 0,
	ARR_OOM = 1,
	ARR_Passed = 2,
	ARR_MAX = 3,
};

enum class ETAStatType : uint8_t {
	StatType_Private = 0,
	StatType_Unranked = 1,
	StatType_Ranked = 2,
	StatType_MAX = 3,
};

enum class EOnlineXPModifierType : uint8_t {
	OnlineXPModifier_Additive = 0,
	OnlineXPModifier_Multiplicative = 1,
	OnlineXPModifier_MAX = 2,
};

enum class CrumbAction : uint8_t {
	CA_Add = 0,
	CA_Remove = 1,
	CA_Redo = 2,
	CA_MAX = 3,
};

enum class ESetMode : uint8_t {
	SetMode_Toggle = 0,
	SetMode_Enable = 1,
	SetMode_Disable = 2,
	SetMode_MAX = 3,
};

enum class EDOFType : uint8_t {
	DOFType_SimpleDOF = 0,
	DOFType_ReferenceDOF = 1,
	DOFType_BokehDOF = 2,
	DOFType_MAX = 3,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
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

enum class EFXLocality : uint8_t {
	FXLocality_Controller = 0,
	FXLocality_AlwaysLocal = 1,
	FXLocality_NeverLocal = 2,
	FXLocality_MAX = 3,
};

enum class EAnimRotationOnly : uint8_t {
	EARO_AnimSet = 0,
	EARO_ForceEnabled = 1,
	EARO_ForceDisabled = 2,
	EARO_MAX = 3,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EMatchmakingViewTab : uint8_t {
	MatchmakingViewTab_Unranked = 0,
	MatchmakingViewTab_Ranked = 1,
	MatchmakingViewTab_RankedSports = 2,
	MatchmakingViewTab_UnrankedSports = 3,
	MatchmakingViewTab_MicroEvent = 4,
	MatchmakingViewTab_DebugMicroEvent = 5,
	MatchmakingViewTab_Casual = 6,
	MatchmakingViewTab_MAX = 7,
};

enum class EContentKeyIndex_PrimeUpdate31 : uint8_t {
	PrimeUpdate31_8416552FC13C775C6325D95DAFD2467C = 0,
	PrimeUpdate31_4D7DD3DF13D1A7A874987ED3471E73C8 = 1,
	PrimeUpdate31_880C8C1A2B7E0D89E198FD070B76C948 = 2,
	PrimeUpdate31_85F5966A74411E8888F7228B41775B64 = 3,
	PrimeUpdate31_0F3CBA7F9849D469C134A6FF10453DB2 = 4,
	PrimeUpdate31_F9E087849D5F5873B1D9C2C2A76E8280 = 5,
	PrimeUpdate31_4F3016BFEEF5686ABF5BCC01EDAB34AB = 6,
	PrimeUpdate31_289E688E31D67B07097C3607B0E4B766 = 7,
	PrimeUpdate31_FDFE789EC592F2AE370CBDC6644331EA = 8,
	PrimeUpdate31_3B62BABAB19A41542A3F1A543BA902C7 = 9,
	PrimeUpdate31_2ED307705C547AAE42F52929ED345B54 = 10,
	PrimeUpdate31_88C241C0F02B450B51F0A9AF5DDC359D = 11,
	PrimeUpdate31_94713368AC068D293F842AD501456252 = 12,
	PrimeUpdate31_7EDA3FFCCA3D799DD992CB9E6E1641BA = 13,
	PrimeUpdate31_597E29169FCA2B5E0022CB3C17FD6276 = 14,
	PrimeUpdate31_B403B6BC53473983E71404459C5C329D = 15,
	PrimeUpdate31_DA7EA18B2A78CD2DC80B1647AC96CB4D = 16,
	PrimeUpdate31_3CE5ABD97423D57980D4CE4984D23723 = 17,
	PrimeUpdate31_MAX = 18,
};

enum class McpChallengeFileStatus : uint8_t {
	MCFS_NotStarted = 0,
	MCFS_Pending = 1,
	MCFS_Success = 2,
	MCFS_Failed = 3,
	MCFS_MAX = 4,
};

enum class ERPCPriority : uint8_t {
	RPC_Low = 0,
	RPC_Medium = 1,
	RPC_High = 2,
	RPC_MAX = 3,
};

enum class EEquippableProductSlot : uint8_t {
	EPS_Skin = 0,
	EPS_Wheels = 1,
	EPS_Boost = 2,
	EPS_Hat = 3,
	EPS_Antenna = 4,
	EPS_MAX = 5,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EScopeEdge : uint8_t {
	EPSA_Top = 0,
	EPSA_Bottom = 1,
	EPSA_Left = 2,
	EPSA_Right = 3,
	EPSA_None = 4,
	EPSA_MAX = 5,
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

enum class EAkPlaySoundReceiver : uint8_t {
	PlaySoundReceiver_All = 0,
	PlaySoundReceiver_Local = 1,
	PlaySoundReceiver_NonLocal = 2,
	PlaySoundReceiver_MAX = 3,
};

enum class EProductFilterSortType : uint8_t {
	ProductFilterSortType_Alphabetical = 0,
	ProductFilterSortType_UnlockDate = 1,
	ProductFilterSortType_Quality = 2,
	ProductFilterSortType_Quantity = 3,
	ProductFilterSortType_Series = 4,
	ProductFilterSortType_MAX = 5,
};

enum class EMcpFileCompressionType : uint8_t {
	MFCT_NONE = 0,
	MFCT_ZLIB = 1,
	MFCT_MAX = 2,
};

enum class EAchievementDLC2 : uint8_t {
	ADLC2_MyWorldIsFire = 0,
	ADLC2_Spectacular = 1,
	ADLC2_Savage = 2,
	ADLC2_Ruthless = 3,
	ADLC2_PsychoMasterExploder = 4,
	ADLC2_MAX = 5,
};

enum class EInfluenceType : uint8_t {
	Fluid_Flow = 0,
	Fluid_Raindrops = 1,
	Fluid_Wave = 2,
	Fluid_Sphere = 3,
	Fluid_MAX = 4,
};

enum class EMatchType : uint8_t {
	EmatchType_Online = 0,
	EMatchType_Private = 1,
	EMatchType_Offline = 2,
	EMatchType_MAX = 3,
};

enum class EReplayState : uint8_t {
	ReplayState_Idle = 0,
	ReplayState_Recording = 1,
	ReplayState_Playing = 2,
	ReplayState_MAX = 3,
};

enum class EProcBuildingAxis : uint8_t {
	EPBAxis_X = 0,
	EPBAxis_Z = 1,
	EPBAxis_MAX = 2,
};

enum class EContentKeyIndex_PrimeUpdate36 : uint8_t {
	PrimeUpdate36_BD02DFB4BA13F3A1C777309414664BD5 = 0,
	PrimeUpdate36_96D8832E6CBAC01E4D931B3548C8B6CD = 1,
	PrimeUpdate36_922639B6EED97FC33B940DA2D78BCE64 = 2,
	PrimeUpdate36_29FCC7E07D881E7A8BB63A1E8F4A1CD2 = 3,
	PrimeUpdate36_731AA8F8623617B16C1BD20F8C515560 = 4,
	PrimeUpdate36_D1AB99156B0AF5C86BD038FD5FA21211 = 5,
	PrimeUpdate36_52008718FF3F8E5A68EFF1BDDD4FA5EE = 6,
	PrimeUpdate36_41C3A8A12956D299753BD860AFB7A8FB = 7,
	PrimeUpdate36_6AE06FAE3499CEC119EAD89D83AB2499 = 8,
	PrimeUpdate36_5CAED8D31082564BDB859CA06D232CF6 = 9,
	PrimeUpdate36_CC85E70DA7E6B82DBDE7E0C497B4469D = 10,
	PrimeUpdate36_70C46454E80360E711D3B5D043B6855D = 11,
	PrimeUpdate36_0231148CE41EAFEA374620374BEC872A = 12,
	PrimeUpdate36_1C2F3E291DFBDF4BCD89F4BBDECFE4A5 = 13,
	PrimeUpdate36_CD94FF5FD517B8C2EBEE67C6A2F2861A = 14,
	PrimeUpdate36_DCCBCFB3508ACFA4A6FBA1CF9AB91B66 = 15,
	PrimeUpdate36_6CB0303A669EA329A382223B785B54DF = 16,
	PrimeUpdate36_DC154AE8320F56120BE27BFAED583980 = 17,
	PrimeUpdate36_14F6948364A30847CB208270921CBE75 = 18,
	PrimeUpdate36_0647B0F31D68BAE45AB0E36C8C00D269 = 19,
	PrimeUpdate36_820D6BDAA81D873F00D0EDEDC2761BA8 = 20,
	PrimeUpdate36_3518176919EA606BF7CBC730282A7BC7 = 21,
	PrimeUpdate36_065B320F11A9D3CC4B5E846E60893E3C = 22,
	PrimeUpdate36_E1369812C6C752435ABFAB3C4D67F15A = 23,
	PrimeUpdate36_9E47F9DB92B6D6C69E851F08DE0C89C3 = 24,
	PrimeUpdate36_8C693F7DD88448A5DB6756E31938F863 = 25,
	PrimeUpdate36_6E5D977724CA7C75A8B0C3BFFF28BB61 = 26,
	PrimeUpdate36_B1D1D39BC2C8015B49D24D198243890D = 27,
	PrimeUpdate36_9E23CAA14A00C20AC1E137377591F377 = 28,
	PrimeUpdate36_00043665A4DEC13AD694ABBD2609F1FC = 29,
	PrimeUpdate36_E9B6B7C5EDCE42EA137CB0DB7B45E914 = 30,
	PrimeUpdate36_5B7CD65C59019880CBBD705E239D0510 = 31,
	PrimeUpdate36_F67E4AFBB01FE7080BD18289E5EA1B77 = 32,
	PrimeUpdate36_A4F892BC8702F12078F181987E4E9308 = 33,
	PrimeUpdate36_MAX = 34,
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
	OSCS_InvalidResponse = 9,
	OSCS_TooYoung = 10,
	OSCS_EpicAccountRequired = 11,
	OSCS_EpicAccountLinkingFailed = 12,
	OSCS_MAX = 13,
};

enum class ERouteDirection : uint8_t {
	ERD_Forward = 0,
	ERD_Reverse = 1,
	ERD_MAX = 2,
};

enum class GFxTimingMode : uint8_t {
	TM_Game = 0,
	TM_Real = 1,
	TM_MAX = 2,
};

enum class EPlaylistPopulationBucket : uint8_t {
	PPB_Empty = 0,
	PPB_Average = 1,
	PPB_High = 2,
	PPB_Extreme = 3,
	PPB_MAX = 4,
};

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_MAX = 5,
};

enum class EMeshBeaconBandwidthTestResult : uint8_t {
	MB_BandwidthTestResult_Succeeded = 0,
	MB_BandwidthTestResult_Timeout = 1,
	MB_BandwidthTestResult_Error = 2,
	MB_BandwidthTestResult_MAX = 3,
};

enum class EProductThumbnailSize : uint8_t {
	PTS_Garage = 0,
	PTS_Drop = 1,
	PTS_Preview = 2,
	PTS_ShopItem = 3,
	PTS_MAX = 4,
};

enum class ERootMotionRotationMode : uint8_t {
	RMRM_Ignore = 0,
	RMRM_RotateActor = 1,
	RMRM_MAX = 2,
};

enum class EAkOutputType : uint8_t {
	AkOT_Speakers = 0,
	AKOT_Headphones = 1,
	EAkOutputType_MAX = 2,
};

enum class EProductQuality : uint8_t {
	EPQ_Common = 0,
	EPQ_Uncommon = 1,
	EPQ_Rare = 2,
	EPQ_VeryRare = 3,
	EPQ_Import = 4,
	EPQ_Exotic = 5,
	EPQ_BlackMarket = 6,
	EPQ_Premium = 7,
	EPQ_Limited = 8,
	EPQ_Legacy = 9,
	EPQ_MAX = 10,
};

enum class EArchiveProductFilter : uint8_t {
	ArchiveFilter_ExcludeArchivedProducts = 0,
	ArchiveFilter_IncludeArchivedProducts = 1,
	ArchiveFilter_OnlyShowArchivedProducts = 2,
	ArchiveFilter_MAX = 3,
};

enum class ESaveGameResult : uint8_t {
	SaveGameResult_Pending = 0,
	SaveGameResult_Success = 1,
	SaveGameResult_UserNotSignedIn = 2,
	SaveGameResult_Error = 3,
	SaveGameResult_NoSpace = 4,
	SaveGameResult_Corrupt = 5,
	SaveGameResult_MAX = 6,
};

enum class EConsoleQualityMode : uint8_t {
	ConsoleQualityMode_Performance = 0,
	ConsoleQualityMode_Quality = 1,
	ConsoleQualityMode_MAX = 2,
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
	CONSOLE_Mobile_Retina = 8,
	CONSOLE_PC = 9,
	CONSOLE_Kindle = 10,
	CONSOLE_PS4 = 11,
	CONSOLE_Dingo = 12,
	CONSOLE_NNX = 13,
	CONSOLE_Lockhart = 14,
	CONSOLE_Anaconda = 15,
	CONSOLE_Prospero = 16,
	CONSOLE_MAX = 17,
};

enum class EEquipAction : uint8_t {
	EquipAction_Both = 0,
	EquipAction_Team0 = 1,
	EquipAction_Team1 = 2,
	EquipAction_MAX = 3,
};

enum class EDifficulty : uint8_t {
	D_Easy = 0,
	D_Medium = 1,
	D_Hard = 2,
	D_MAX = 3,
};

enum class SoftBodyBoneType : uint8_t {
	SOFTBODYBONE_Fixed = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment = 2,
	SOFTBODYBONE_MAX = 3,
};

enum class EProductFilterLogLevel : uint8_t {
	ProductFilterLogLevel_Filtered = 0,
	ProductFilterLogLevel_UnFiltered = 1,
	ProductFilterLogLevel_MAX = 2,
};

enum class ENetMode : uint8_t {
	NM_Standalone = 0,
	NM_DedicatedServer = 1,
	NM_ListenServer = 2,
	NM_Client = 3,
	NM_MAX = 4,
};

enum class EPlayTestType : uint8_t {
	PlayTest_LoopRound = 0,
	PlayTest_IncrementRound = 1,
	PlayTest_IncrementRoundLoop = 2,
	PlayTest_MAX = 3,
};

enum class ECameraLoopType : uint8_t {
	CLT_StopAtEnd = 0,
	CLT_PingPong = 1,
	CLT_Loop = 2,
	CLT_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EAdHocState : uint8_t {
	AHS_Enabled = 0,
	AHS_Disabled = 1,
	AHS_MAX = 2,
};

enum class EChatChannel : uint8_t {
	EChatChannel_Match = 0,
	EChatChannel_Team = 1,
	EChatChannel_Party = 2,
	EChatChannel_Individual = 3,
	EChatChannel_MAX = 4,
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
	TEXTUREGROUP_MAX = 28,
};

