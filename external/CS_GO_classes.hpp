// Created by BlueFire1337
// Updated 2022-02-02
// Generated 2022-02-02

namespace off {
	constexpr auto client_state = 0x58bfc4;
	constexpr auto client_state_generic_precache_table = 0x52a4;
	constexpr auto client_state_signon_state = 0x108;
	constexpr auto entity_list = 0x4dceb7c;
	constexpr auto force_attack = 0x31ff054;
	constexpr auto force_attack2 = 0x31ff060;
	constexpr auto force_backward = 0x31ff0a8;
	constexpr auto force_forward = 0x31ff09c;
	constexpr auto force_jump = 0x52789f8;
	constexpr auto force_left = 0x31ff0b4;
	constexpr auto force_right = 0x31ff0c0;
	constexpr auto gamerules_proxy = 0x52eba5c;
	constexpr auto global_vars = 0x58bcc8;
	constexpr auto glow_object_manager = 0x5316e98;
	constexpr auto input = 0x5220150;
	constexpr auto local_player = 0xdb35ec;
	constexpr auto player_resource = 0x31fd3e0;
	constexpr auto radar_base = 0x52038f4;
	constexpr auto view_matrix = 0x4dc0494;
	constexpr auto send_packets = 0xd93d2;
	constexpr auto direct3d_device9 = 0xa5050;
	constexpr auto studio_hdr = 0x2950;
	constexpr auto dormant = 0xed;
	constexpr auto engine_build_number = 0x38d16d4;

	namespace n_CPlayerResource {
		constexpr auto m_szName = 0x9e0; // String (260)
		constexpr auto m_bConnected = 0xae4; // Bool
		constexpr auto m_iPing = 0xb28; // Unsigned Integer
		constexpr auto m_iKills = 0xc2c; // Unsigned Integer
		constexpr auto m_iAssists = 0xd30; // Unsigned Integer
		constexpr auto m_iDeaths = 0xe34; // Unsigned Integer
		constexpr auto m_iTeam = 0xf38; // Unsigned Integer
		constexpr auto m_iPendingTeam = 0x103c; // Unsigned Integer
		constexpr auto m_bAlive = 0x1140; // Bool
		constexpr auto m_iHealth = 0x1184; // Unsigned Integer
		constexpr auto m_iCoachingTeam = 0x1288; // Unsigned Integer
	}

	namespace n_CTeamplayRoundBasedRulesProxy {
		constexpr auto m_iRoundState = 0x28; // Integer
		constexpr auto m_bInOvertime = 0x2c; // Byte
		constexpr auto m_bInSetup = 0x2d; // Byte
		constexpr auto m_bSwitchedTeamsThisRound = 0x2e; // Byte
		constexpr auto m_iWinningTeam = 0x30; // Integer
		constexpr auto m_bInWaitingForPlayers = 0x38; // Byte
		constexpr auto m_bAwaitingReadyRestart = 0x39; // Byte
		constexpr auto m_flRestartRoundTime = 0x3c; // Float
		constexpr auto m_flMapResetTime = 0x40; // Float
		constexpr auto m_bStopWatch = 0xe4; // Byte
	}

	namespace n_CTEFootprintDecal {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecDirection = 0x1c; // Vector
		constexpr auto m_nEntity = 0x34; // Integer
		constexpr auto m_nIndex = 0x38; // Integer
		constexpr auto m_chMaterialType = 0x3c; // Byte
	}

	namespace n_CPointCamera {
		constexpr auto m_FOV = 0x9d8; // Float
		constexpr auto m_Resolution = 0x9dc; // Float
		constexpr auto m_bFogEnable = 0x9e0; // Byte
		constexpr auto m_FogColor = 0x9e1; // Integer
		constexpr auto m_flFogStart = 0x9e8; // Float
		constexpr auto m_flFogEnd = 0x9ec; // Float
		constexpr auto m_flFogMaxDensity = 0x9f0; // Float
		constexpr auto m_bActive = 0x9f4; // Byte
		constexpr auto m_bUseScreenAspectRatio = 0x9f5; // Byte
	}

	namespace n_CSpotlightEnd {
		constexpr auto m_flLightScale = 0x9d8; // Float
		constexpr auto m_Radius = 0x9dc; // Float
	}

	namespace n_CSmokeGrenadeProjectile {
		constexpr auto m_nSmokeEffectTickBegin = 0x2a20; // Integer
		constexpr auto m_bDidSmokeEffect = 0x2a24; // Byte
	}

	namespace n_CEnvProjectedTexture {
		constexpr auto m_hTargetEntity = 0x9dc; // Integer
		constexpr auto m_bState = 0x9e0; // Byte
		constexpr auto m_bAlwaysUpdate = 0x9e1; // Byte
		constexpr auto m_flLightFOV = 0x9e4; // Float
		constexpr auto m_bEnableShadows = 0x9e8; // Byte
		constexpr auto m_bSimpleProjection = 0x9e9; // Byte
		constexpr auto m_bLightOnlyTarget = 0x9ea; // Byte
		constexpr auto m_bLightWorld = 0x9eb; // Byte
		constexpr auto m_bCameraSpace = 0x9ec; // Byte
		constexpr auto m_flBrightnessScale = 0x9f0; // Float
		constexpr auto m_LightColor = 0x9f4; // Integer
		constexpr auto m_flColorTransitionTime = 0xa08; // Float
		constexpr auto m_flAmbient = 0xa0c; // Float
		constexpr auto m_flNearZ = 0xa10; // Float
		constexpr auto m_flFarZ = 0xa14; // Float
		constexpr auto m_SpotlightTextureName = 0xa18; // String (260)
		constexpr auto m_nSpotlightTextureFrame = 0xb24; // Integer
		constexpr auto m_nShadowQuality = 0xb28; // Integer
		constexpr auto m_iStyle = 0xb2c; // Integer
		constexpr auto m_flProjectionSize = 0xb38; // Float
		constexpr auto m_flRotation = 0xb3c; // Float
	}

	namespace n_CTEBubbleTrail {
		constexpr auto m_vecMins = 0x10; // Vector
		constexpr auto m_vecMaxs = 0x1c; // Vector
		constexpr auto m_flWaterZ = 0x28; // Float
		constexpr auto m_nModelIndex = 0x2c; // Integer
		constexpr auto m_nCount = 0x30; // Integer
		constexpr auto m_fSpeed = 0x34; // Float
	}

	namespace n_CSurvivalSpawnChopper {
		constexpr auto m_vecOrigin = 0x138; // Vector2D
		constexpr auto m_vecOrigin = 0x140; // Float [2]
	}

	namespace n_CInfoMapRegion {
		constexpr auto m_flRadius = 0x9d8; // Float
		constexpr auto m_szLocToken = 0x9dc; // String (128)
	}

	namespace n_CTELargeFunnel {
		constexpr auto m_nModelIndex = 0x1c; // Integer
		constexpr auto m_nReversed = 0x20; // Integer
	}

	namespace n_CFootstepControl {
		constexpr auto m_source = 0xa10; // String (16)
		constexpr auto m_destination = 0xa20; // String (16)
	}

	namespace n_CPropCounter {
		constexpr auto m_flDisplayValue = 0x2990; // Float
	}

	namespace n_CWorld {
		constexpr auto m_flWaveHeight = 0x9d8; // Float
		constexpr auto m_WorldMins = 0x9dc; // Vector
		constexpr auto m_WorldMaxs = 0x9e8; // Vector
		constexpr auto m_bStartDark = 0x9f4; // Byte
		constexpr auto m_flMaxOccludeeArea = 0x9f8; // Float
		constexpr auto m_flMinOccluderArea = 0x9fc; // Float
		constexpr auto m_flMinPropScreenSpaceWidth = 0xa00; // Float
		constexpr auto m_flMaxPropScreenSpaceWidth = 0xa04; // Float
		constexpr auto m_bColdWorld = 0xa08; // Byte
		constexpr auto m_iTimeOfDay = 0xa0c; // Integer
		constexpr auto m_iszDetailSpriteMaterial = 0xa10; // String (256)
	}

	namespace n_CSceneEntity {
		constexpr auto m_bIsPlayingBack = 0x9dc; // Byte
		constexpr auto m_bPaused = 0x9dd; // Byte
		constexpr auto m_bMultiplayer = 0x9de; // Byte
		constexpr auto m_flForceClientTime = 0x9e4; // Float
		constexpr auto m_nSceneStringIndex = 0x9e8; // Integer
	}

	namespace n_CCascadeLight {
		constexpr auto m_shadowDirection = 0x9d8; // Vector
		constexpr auto m_envLightShadowDirection = 0x9e4; // Vector
		constexpr auto m_bEnabled = 0x9f0; // Byte
		constexpr auto m_bUseLightEnvAngles = 0x9f1; // Byte
		constexpr auto m_LightColor = 0x9f2; // Integer
		constexpr auto m_LightColorScale = 0x9f8; // Integer
		constexpr auto m_flMaxShadowDist = 0x9fc; // Float
	}

	namespace n_CBaseButton {
		constexpr auto m_usable = 0xa08; // Byte
	}

	namespace n_CTEBloodStream {
		constexpr auto m_vecDirection = 0x1c; // Vector
		constexpr auto r = 0x28; // Integer
		constexpr auto g = 0x2c; // Integer
		constexpr auto b = 0x30; // Integer
		constexpr auto a = 0x34; // Integer
		constexpr auto m_nAmount = 0x38; // Integer
	}

	namespace n_CTEDecal {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecStart = 0x1c; // Vector
		constexpr auto m_nEntity = 0x28; // Integer
		constexpr auto m_nHitbox = 0x2c; // Integer
		constexpr auto m_nIndex = 0x30; // Integer
	}

	namespace n_CTEBeamRingPoint {
		constexpr auto m_vecCenter = 0x4c; // Vector
		constexpr auto m_flStartRadius = 0x58; // Float
		constexpr auto m_flEndRadius = 0x5c; // Float
	}

	namespace n_CRagdoll {
		constexpr auto m_ragAngles = 0x0; // Array
		constexpr auto m_ragPos = 0x2990; // Vector [0]
		constexpr auto m_ragAngles = 0x2ab0; // Vector [0]
		constexpr auto m_hUnragdoll = 0x2c8c; // Integer
		constexpr auto m_flBlendWeight = 0x2c90; // Float
		constexpr auto m_nOverlaySequence = 0x2c98; // Integer
	}

	namespace n_CWeaponSawedoff {
		constexpr auto m_reloadState = 0x33e4; // Unsigned Integer
	}

	namespace n_CPointWorldText {
		constexpr auto m_szText = 0xa08; // String (260)
		constexpr auto m_flTextSize = 0xb0c; // Float
		constexpr auto m_textColor = 0xb10; // Integer
	}

	namespace n_CTEKillPlayerAttachments {
		constexpr auto m_nPlayer = 0x10; // Integer
	}

	namespace n_CEntityFlame {
		constexpr auto m_hEntAttached = 0x9d8; // Integer
		constexpr auto m_bCheapEffect = 0x9ec; // Byte
	}

	namespace n_CFuncOccluder {
		constexpr auto m_nOccluderIndex = 0x9d8; // Integer
		constexpr auto m_bActive = 0x9dc; // Byte
	}

	namespace n_CTESmoke {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_nModelIndex = 0x1c; // Integer
		constexpr auto m_fScale = 0x20; // Float
		constexpr auto m_nFrameRate = 0x24; // Integer
	}

	namespace n_CMapVetoPickController {
		constexpr auto m_nDraftType = 0x9e8; // Integer
		constexpr auto m_nTeamWinningCoinToss = 0x9ec; // Integer
		constexpr auto m_nCurrentPhase = 0x130c; // Integer
		constexpr auto m_nPhaseStartTick = 0x1310; // Integer
		constexpr auto m_nPhaseDurationTicks = 0x1314; // Integer
	}

	namespace n_CEnvDOFController {
		constexpr auto m_bDOFEnabled = 0x9d8; // Byte
		constexpr auto m_flNearBlurDepth = 0x9dc; // Float
		constexpr auto m_flNearFocusDepth = 0x9e0; // Float
		constexpr auto m_flFarFocusDepth = 0x9e4; // Float
		constexpr auto m_flFarBlurDepth = 0x9e8; // Float
		constexpr auto m_flNearBlurRadius = 0x9ec; // Float
		constexpr auto m_flFarBlurRadius = 0x9f0; // Float
	}

	namespace n_CWeaponTaser {
		constexpr auto m_fFireTime = 0x3400; // Float
	}

	namespace n_CWeaponNOVA {
		constexpr auto m_reloadState = 0x33e4; // Unsigned Integer
	}

	namespace n_CTESprite {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_nModelIndex = 0x1c; // Integer
		constexpr auto m_fScale = 0x20; // Float
		constexpr auto m_nBrightness = 0x24; // Integer
	}

	namespace n_CDangerZone {
		constexpr auto m_vecDangerZoneOriginStartedAt = 0x9d8; // Vector
		constexpr auto m_flBombLaunchTime = 0x9e4; // Float
		constexpr auto m_flExtraRadius = 0x9e8; // Float
		constexpr auto m_flExtraRadiusStartTime = 0x9ec; // Float
		constexpr auto m_flExtraRadiusTotalLerpTime = 0x9f0; // Float
		constexpr auto m_nDropOrder = 0x9f4; // Integer
		constexpr auto m_iWave = 0x9f8; // Integer
	}

	namespace n_CTEBeamFollow {
		constexpr auto m_iEntIndex = 0x4c; // Integer
	}

	namespace n_CTEBubbles {
		constexpr auto m_vecMins = 0x10; // Vector
		constexpr auto m_vecMaxs = 0x1c; // Vector
		constexpr auto m_fHeight = 0x28; // Float
		constexpr auto m_nModelIndex = 0x2c; // Integer
		constexpr auto m_nCount = 0x30; // Integer
		constexpr auto m_fSpeed = 0x34; // Float
	}

	namespace n_CParticleSystem {
		constexpr auto m_fEffects = 0xf0; // Integer
		constexpr auto m_angRotation = 0x12c; // Vector
		constexpr auto m_vecOrigin = 0x138; // Vector
		constexpr auto moveparent = 0x148; // Integer
		constexpr auto m_hOwnerEntity = 0x14c; // Integer
		constexpr auto m_iParentAttachment = 0x2ec; // Byte
		constexpr auto m_iEffectIndex = 0x9d8; // Integer
		constexpr auto m_nStopType = 0x9dc; // Integer
		constexpr auto m_bActive = 0x9e0; // Byte
		constexpr auto m_flStartTime = 0x9e4; // Float
		constexpr auto m_szSnapshotFileName = 0x9e8; // String (260)
	}

	namespace n_CBaseCombatCharacter {
		constexpr auto m_flNextAttack = 0x2d80; // Float
		constexpr auto m_LastHitGroup = 0x2d84; // Integer
		constexpr auto m_iAmmo = 0x2d88; // Unsigned Integer
		constexpr auto m_hMyWeapons = 0x2e08; // Entity Handle
		constexpr auto m_hActiveWeapon = 0x2f08; // Entity Handle
		constexpr auto m_flTimeOfLastInjury = 0x2f0c; // Float
		constexpr auto m_nRelativeDirectionOfLastInjury = 0x2f10; // Integer
	}

	namespace n_CTEProjectedDecal {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_angRotation = 0x1c; // Vector
		constexpr auto m_flDistance = 0x28; // Float
		constexpr auto m_nIndex = 0x2c; // Integer
	}

	namespace n_CPhysicsProp {
		constexpr auto m_spawnflags = 0x2c8; // Integer
		constexpr auto m_bAwake = 0x29b0; // Byte
	}

	namespace n_CTERadioIcon {
		constexpr auto m_iAttachToClient = 0x10; // Integer
	}

	namespace n_CGrassBurn {
		constexpr auto m_flGrassBurnClearTime = 0x9d8; // Float
	}

	namespace n_CVGuiScreen {
		constexpr auto m_flWidth = 0x9e0; // Float
		constexpr auto m_flHeight = 0x9e4; // Float
		constexpr auto m_nPanelName = 0x9e8; // Integer
		constexpr auto m_nAttachmentIndex = 0xa04; // Integer
		constexpr auto m_nOverlayMaterial = 0xa08; // Integer
		constexpr auto m_fScreenFlags = 0xa0c; // Integer
		constexpr auto m_hPlayerOwner = 0xa68; // Integer
	}

	namespace n_CTesla {
		constexpr auto m_SoundName = 0xa00; // String (64)
		constexpr auto m_iszSpriteName = 0xa40; // String (256)
	}

	namespace n_CFuncLadder {
		constexpr auto m_vecLadderDir = 0x9d8; // Vector
		constexpr auto m_vecPlayerMountPositionTop = 0x9f8; // Vector
		constexpr auto m_vecPlayerMountPositionBottom = 0xa04; // Vector
		constexpr auto m_bFakeLadder = 0xa11; // Byte
	}

	namespace n_CTEBSPDecal {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_nEntity = 0x1c; // Integer
		constexpr auto m_nIndex = 0x20; // Integer
	}

	namespace n_CBaseTrigger {
		constexpr auto m_spawnflags = 0x2c8; // Integer
		constexpr auto m_bClientSidePredicted = 0xa08; // Byte
	}

	namespace n_CBaseBeam {
		constexpr auto m_nModelIndex = 0x10; // Integer
		constexpr auto m_nHaloIndex = 0x14; // Integer
		constexpr auto m_nStartFrame = 0x18; // Integer
		constexpr auto m_nFrameRate = 0x1c; // Integer
		constexpr auto m_fLife = 0x20; // Float
		constexpr auto m_fWidth = 0x24; // Float
		constexpr auto m_fEndWidth = 0x28; // Float
		constexpr auto m_nFadeLength = 0x2c; // Integer
		constexpr auto m_fAmplitude = 0x30; // Float
		constexpr auto r = 0x34; // Integer
		constexpr auto g = 0x38; // Integer
		constexpr auto b = 0x3c; // Integer
		constexpr auto a = 0x40; // Integer
		constexpr auto m_nSpeed = 0x44; // Integer
		constexpr auto m_nFlags = 0x48; // Integer
	}

	namespace n_CCSPlayer {
		constexpr auto m_vecOrigin = 0x138; // Vector2D
		constexpr auto m_vecOrigin = 0x138; // Vector2D
		constexpr auto m_vecOrigin = 0x140; // Float [2]
		constexpr auto m_vecOrigin = 0x140; // Float [2]
		constexpr auto m_flCycle = 0xa14; // Float
		constexpr auto m_bIsScoped = 0x9974; // Bool
		constexpr auto m_bIsWalking = 0x9975; // Bool
		constexpr auto m_bResumeZoom = 0x9976; // Bool
		constexpr auto m_iPlayerState = 0x9978; // Integer
		constexpr auto m_bIsDefusing = 0x997c; // Byte
		constexpr auto m_bIsGrabbingHostage = 0x997d; // Byte
		constexpr auto m_iBlockingUseActionInProgress = 0x9980; // Integer
		constexpr auto m_bIsRescuing = 0x9984; // Byte
		constexpr auto m_fImmuneToGunGameDamageTime = 0x9988; // Float
		constexpr auto m_bGunGameImmunity = 0x9990; // Byte
		constexpr auto m_bHasMovedSinceSpawn = 0x9991; // Byte
		constexpr auto m_bMadeFinalGunGameProgressiveKill = 0x9992; // Byte
		constexpr auto m_iGunGameProgressiveWeaponIndex = 0x9994; // Integer
		constexpr auto m_iNumGunGameTRKillPoints = 0x9998; // Integer
		constexpr auto m_iNumGunGameKillsWithCurrentWeapon = 0x999c; // Integer
		constexpr auto m_iNumRoundKills = 0x99a0; // Integer
		constexpr auto m_iNumRoundKillsHeadshots = 0x99a4; // Integer
		constexpr auto m_unTotalRoundDamageDealt = 0x99a8; // Integer
		constexpr auto m_fMolotovUseTime = 0x99ac; // Float
		constexpr auto m_fMolotovDamageTime = 0x99b0; // Float
		constexpr auto m_bInBombZone = 0x99b4; // Byte
		constexpr auto m_bInBuyZone = 0x99b5; // Byte
		constexpr auto m_bInNoDefuseArea = 0x99b6; // Byte
		constexpr auto m_iThrowGrenadeCounter = 0x99b8; // Integer
		constexpr auto m_bWaitForNoAttack = 0x99bc; // Byte
		constexpr auto m_bIsRespawningForDMBonus = 0x99bd; // Byte
		constexpr auto m_flGuardianTooFarDistFrac = 0x99c0; // Float
		constexpr auto m_flDetectedByEnemySensorTime = 0x99c4; // Float
		constexpr auto m_bKilledByTaser = 0x99cd; // Byte
		constexpr auto m_iMoveState = 0x99d0; // Integer
		constexpr auto m_bCanMoveDuringFreezePeriod = 0x99d4; // Byte
		constexpr auto m_isCurrentGunGameLeader = 0x99d5; // Byte
		constexpr auto m_isCurrentGunGameTeamLeader = 0x99d6; // Byte
		constexpr auto m_szArmsModel = 0x99d7; // String (256)
		constexpr auto m_flLowerBodyYawTarget = 0x9adc; // Float
		constexpr auto m_bStrafing = 0x9ae0; // Byte
		constexpr auto m_bIsPlayerGhost = 0x9ae1; // Byte
		constexpr auto m_nIsAutoMounting = 0x9ae4; // Unsigned Integer
		constexpr auto m_vecAutomoveTargetEnd = 0x9af4; // Vector
		constexpr auto m_flAutoMoveStartTime = 0x9b04; // Float
		constexpr auto m_flAutoMoveTargetTime = 0x9b08; // Float
		constexpr auto m_flLastExoJumpTime = 0x9b0c; // Float
		constexpr auto m_iAddonBits = 0x103c4; // Integer
		constexpr auto m_iPrimaryAddon = 0x103c8; // Integer
		constexpr auto m_iSecondaryAddon = 0x103cc; // Integer
		constexpr auto m_iProgressBarDuration = 0x103d0; // Integer
		constexpr auto m_flProgressBarStartTime = 0x103d4; // Float
		constexpr auto m_flStamina = 0x103d8; // Float
		constexpr auto m_iDirection = 0x103dc; // Unsigned Integer
		constexpr auto m_iShotsFired = 0x103e0; // Unsigned Integer
		constexpr auto m_nNumFastDucks = 0x103e4; // Unsigned Integer
		constexpr auto m_bDuckOverride = 0x103e8; // Bool
		constexpr auto m_bNightVisionOn = 0x103e9; // Integer
		constexpr auto m_bHasNightVision = 0x103ea; // Byte
		constexpr auto m_flVelocityModifier = 0x103ec; // Float
		constexpr auto m_flGroundAccelLinearFracLastTime = 0x103f0; // Float
		constexpr auto m_iStartAccount = 0x103f4; // Integer
		constexpr auto m_totalHitsOnServer = 0x103f8; // Integer
		constexpr auto m_bIsSpawnRappelling = 0x103fd; // Byte
		constexpr auto m_vecSpawnRappellingRopeOrigin = 0x10400; // Vector
		constexpr auto m_nSurvivalTeam = 0x10410; // Integer
		constexpr auto m_hSurvivalAssassinationTarget = 0x10414; // Integer
		constexpr auto m_flHealthShotBoostExpirationTime = 0x10418; // Float
		constexpr auto m_hRagdoll = 0x1043c; // Integer
		constexpr auto m_hPlayerPing = 0x10440; // Integer
		constexpr auto m_hCarriedHostage = 0x10448; // Integer
		constexpr auto m_hCarriedHostageProp = 0x1044c; // Integer
		constexpr auto m_flFlashMaxAlpha = 0x1046c; // Float
		constexpr auto m_flFlashDuration = 0x10470; // Float
		constexpr auto m_unActiveQuestId = 0x11778; // Short
		constexpr auto m_nQuestProgressReason = 0x1177c; // Integer
		constexpr auto m_unPlayerTvControlFlags = 0x11780; // Integer
		constexpr auto m_unCurrentEquipmentValue = 0x11784; // Short
		constexpr auto m_unRoundStartEquipmentValue = 0x11786; // Short
		constexpr auto m_unFreezetimeEndEquipmentValue = 0x11788; // Short
		constexpr auto m_bHasParachute = 0x117a4; // Byte
		constexpr auto m_unMusicID = 0x117a8; // Short
		constexpr auto m_iAccount = 0x117b8; // Integer
		constexpr auto m_bHasHelmet = 0x117c0; // Byte
		constexpr auto m_bHasHeavyArmor = 0x117c1; // Byte
		constexpr auto m_nHeavyAssaultSuitCooldownRemaining = 0x117c4; // Integer
		constexpr auto m_iClass = 0x117c8; // Integer
		constexpr auto m_ArmorValue = 0x117cc; // Integer
		constexpr auto m_angEyeAngles = 0x117d0; // Float [0]
		constexpr auto m_angEyeAngles = 0x117d4; // Float [1]
		constexpr auto m_bHasDefuser = 0x117dc; // Integer
		constexpr auto m_bInHostageRescueZone = 0x117dd; // Byte
		constexpr auto m_bHud_MiniScoreHidden = 0x117fe; // Byte
		constexpr auto m_bHud_RadarHidden = 0x117ff; // Byte
		constexpr auto m_nLastKillerIndex = 0x11800; // Integer
		constexpr auto m_nLastConcurrentKilled = 0x11804; // Integer
		constexpr auto m_nDeathCamMusic = 0x11808; // Integer
		constexpr auto m_cycleLatch = 0x118e0; // Integer
		constexpr auto m_bIsLookingAtWeapon = 0x11974; // Byte
		constexpr auto m_bIsHoldingLookAtWeapon = 0x11975; // Byte
		constexpr auto m_flThirdpersonRecoil = 0x119ec; // Float
		constexpr auto m_bHideTargetID = 0x119f0; // Byte
		constexpr auto m_bIsAssassinationTarget = 0x11a4c; // Byte
		constexpr auto m_bIsControllingBot = 0x11a4d; // Byte
		constexpr auto m_bCanControlObservedBot = 0x11a4e; // Byte
		constexpr auto m_iControlledBotEntIndex = 0x11a50; // Integer
		constexpr auto m_bHasControlledBotThisRound = 0x11a5c; // Byte
		constexpr auto m_iRetakesOffering = 0x11cf4; // Integer
		constexpr auto m_iRetakesOfferingCard = 0x11cf8; // Integer
		constexpr auto m_bRetakesHasDefuseKit = 0x11cfc; // Byte
		constexpr auto m_bRetakesMVPLastRound = 0x11cfd; // Byte
		constexpr auto m_iRetakesMVPBoostItem = 0x11d00; // Integer
		constexpr auto m_RetakesMVPBoostExtraUtility = 0x11d04; // Integer
	}

	namespace n_CTEImpact {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecNormal = 0x1c; // Vector
		constexpr auto m_iType = 0x28; // Integer
		constexpr auto m_ucFlags = 0x2c; // Byte
	}

	namespace n_CVoteController {
		constexpr auto m_iActiveIssueIndex = 0x9e4; // Integer
		constexpr auto m_iOnlyTeamToVote = 0x9e8; // Integer
		constexpr auto m_nPotentialVotes = 0xa04; // Integer
		constexpr auto m_bIsYesNoVote = 0xa0a; // Byte
	}

	namespace n_CTeam {
		constexpr auto player_array_element = 0x0; // Integer
		constexpr auto m_szTeamname = 0x9ec; // Byte
		constexpr auto m_szClanTeamname = 0xa0c; // Byte
		constexpr auto m_szTeamFlagImage = 0xa2c; // Byte
		constexpr auto m_szTeamLogoImage = 0xa34; // Byte
		constexpr auto m_szTeamMatchStat = 0xa3c; // Byte
		constexpr auto m_scoreTotal = 0xb40; // Unsigned Integer
		constexpr auto m_scoreFirstHalf = 0xb44; // Unsigned Integer
		constexpr auto m_scoreSecondHalf = 0xb48; // Unsigned Integer
		constexpr auto m_scoreOvertime = 0xb4c; // Unsigned Integer
		constexpr auto m_nGGLeaderEntIndex_CT = 0xb50; // Integer
		constexpr auto m_nGGLeaderEntIndex_T = 0xb54; // Integer
		constexpr auto m_iClanID = 0xb58; // Unsigned Integer
		constexpr auto m_iDeaths = 0xb5c; // Unsigned Integer
		constexpr auto m_iPing = 0xb60; // Unsigned Integer
		constexpr auto m_iPacketloss = 0xb64; // Unsigned Integer
		constexpr auto m_iTeamNum = 0xb68; // Unsigned Integer
		constexpr auto m_bSurrendered = 0xb6c; // Unsigned Integer
		constexpr auto m_numMapVictories = 0xb70; // Integer
	}

	namespace n_CParticlePerformanceMonitor {
		constexpr auto m_bDisplayPerf = 0x9d8; // Byte
		constexpr auto m_bMeasurePerf = 0x9d9; // Byte
	}

	namespace n_CCFish {
		constexpr auto m_nModelIndex = 0x258; // Short
		constexpr auto m_lifeState = 0x25f; // Byte
		constexpr auto m_x = 0x29d8; // Float
		constexpr auto m_y = 0x29dc; // Float
		constexpr auto m_z = 0x29e0; // Float
		constexpr auto m_angle = 0x29e8; // Float
		constexpr auto m_poolOrigin = 0x29f0; // Vector
		constexpr auto m_waterLevel = 0x29fc; // Float
	}

	namespace n_CCChicken {
		constexpr auto m_jumpedThisFrame = 0x29f8; // Integer
		constexpr auto m_leader = 0x29fc; // Integer
	}

	namespace n_CSprite {
		constexpr auto m_hAttachedToEntity = 0x9e8; // Entity Handle
		constexpr auto m_nAttachment = 0x9ec; // Unsigned Integer
		constexpr auto m_flSpriteFramerate = 0x9f0; // Float
		constexpr auto m_flFrame = 0x9f4; // Float
		constexpr auto m_flDieTime = 0x9f8; // Float
		constexpr auto m_nBrightness = 0x9fc; // Unsigned Integer
		constexpr auto m_flBrightnessTime = 0xa00; // Float
		constexpr auto m_flSpriteScale = 0xa04; // Float
		constexpr auto m_flScaleTime = 0xa08; // Float
		constexpr auto m_bWorldSpaceScale = 0xa0c; // Byte
		constexpr auto m_flGlowProxySize = 0xa10; // Float
		constexpr auto m_flHDRColorScale = 0xa14; // Float
		constexpr auto m_flLastTime = 0xa18; // Float
		constexpr auto m_flMaxFrame = 0xa1c; // Float
	}

	namespace n_CInfoOverlayAccessor {
		constexpr auto m_iTextureFrameIndex = 0x98c; // Byte
		constexpr auto m_iOverlayID = 0x9d8; // Integer
	}

	namespace n_CRagdoll_Attached {
		constexpr auto m_attachmentPointBoneSpace = 0x2ca0; // Vector
		constexpr auto m_attachmentPointRagdollSpace = 0x2cb8; // Vector
		constexpr auto m_ragdollAttachedObjectIndex = 0x2cc4; // Integer
		constexpr auto m_boneIndexAttached = 0x2cc8; // Integer
	}

	namespace n_CTEDynamicLight {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_fRadius = 0x1c; // Float
		constexpr auto r = 0x20; // Integer
		constexpr auto g = 0x24; // Integer
		constexpr auto b = 0x28; // Integer
		constexpr auto exponent = 0x2c; // Integer
		constexpr auto m_fTime = 0x30; // Float
		constexpr auto m_fDecay = 0x34; // Float
	}

	namespace n_CBeamSpotlight {
		constexpr auto m_nHaloIndex = 0x9d8; // Integer
		constexpr auto m_nRotationAxis = 0x9dc; // Integer
		constexpr auto m_flRotationSpeed = 0x9e0; // Float
		constexpr auto m_bSpotlightOn = 0x9e4; // Byte
		constexpr auto m_bHasDynamicLight = 0x9e5; // Byte
		constexpr auto m_flSpotlightMaxLength = 0x9e8; // Float
		constexpr auto m_flSpotlightGoalWidth = 0x9ec; // Float
		constexpr auto m_flHDRColorScale = 0x9f0; // Float
	}

	namespace n_CCSRagdoll {
		constexpr auto m_iTeamNum = 0xf4; // Integer
		constexpr auto m_vecOrigin = 0x138; // Vector
		constexpr auto m_nModelIndex = 0x258; // Short
		constexpr auto m_vecForce = 0x2680; // Vector
		constexpr auto m_nForceBone = 0x268c; // Integer
		constexpr auto m_bClientSideAnimation = 0x28a0; // Byte
		constexpr auto m_hPlayer = 0x2a00; // Integer
		constexpr auto m_vecRagdollVelocity = 0x2a10; // Vector
		constexpr auto m_vecRagdollOrigin = 0x2a1c; // Vector
		constexpr auto m_iDeathPose = 0x2a28; // Integer
		constexpr auto m_iDeathFrame = 0x2a2c; // Integer
		constexpr auto m_flDeathYaw = 0x2a30; // Float
		constexpr auto m_flAbsYaw = 0x2a34; // Float
		constexpr auto m_bDiedAirborne = 0x2a38; // Byte
	}

	namespace n_CLightGlow {
		constexpr auto HDRColorScale = 0x0; // Float
		constexpr auto m_clrRender = 0x70; // Integer
		constexpr auto m_angRotation = 0x12c; // Vector
		constexpr auto m_vecOrigin = 0x138; // Vector
		constexpr auto moveparent = 0x148; // Integer
		constexpr auto m_nHorizontalSize = 0x9d8; // Integer
		constexpr auto m_nVerticalSize = 0x9dc; // Integer
		constexpr auto m_nMinDist = 0x9e0; // Integer
		constexpr auto m_nMaxDist = 0x9e4; // Integer
		constexpr auto m_nOuterMaxDist = 0x9e8; // Integer
		constexpr auto m_spawnflags = 0x9ec; // Integer
		constexpr auto m_flGlowProxySize = 0xac4; // Float
	}

	namespace n_CQuadraticBeam {
		constexpr auto m_targetPosition = 0x9d8; // Vector
		constexpr auto m_controlPosition = 0x9e4; // Vector
		constexpr auto m_scrollRate = 0x9f0; // Float
		constexpr auto m_flWidth = 0x9f4; // Float
	}

	namespace n_CTEGaussExplosion {
		constexpr auto m_nType = 0x1c; // Integer
		constexpr auto m_vecDirection = 0x20; // Vector
	}

	namespace n_CInferno {
		constexpr auto m_fireCount = 0x13a8; // Integer
		constexpr auto m_nFireEffectTickBegin = 0x13b4; // Integer
	}

	namespace n_CBreakableSurface {
		constexpr auto m_nNumWide = 0x9dc; // Integer
		constexpr auto m_nNumHigh = 0x9e0; // Integer
		constexpr auto m_flPanelWidth = 0x9e4; // Float
		constexpr auto m_flPanelHeight = 0x9e8; // Float
		constexpr auto m_vNormal = 0x9ec; // Vector
		constexpr auto m_vCorner = 0x9f8; // Vector
		constexpr auto m_bIsBroken = 0xa04; // Byte
		constexpr auto m_nSurfaceType = 0xa08; // Integer
	}

	namespace n_CMovieDisplay {
		constexpr auto m_bEnabled = 0x9d8; // Byte
		constexpr auto m_bLooping = 0x9d9; // Byte
		constexpr auto m_szMovieFilename = 0x9da; // String (128)
		constexpr auto m_szGroupName = 0xa5a; // String (128)
		constexpr auto m_bStretchToFill = 0xada; // Byte
		constexpr auto m_bForcedSlave = 0xadb; // Byte
		constexpr auto m_bUseCustomUVs = 0xadc; // Byte
		constexpr auto m_flUMin = 0xae0; // Float
		constexpr auto m_flUMax = 0xae4; // Float
		constexpr auto m_flVMin = 0xae8; // Float
		constexpr auto m_flVMax = 0xaec; // Float
	}

	namespace n_CTEGlowSprite {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_nModelIndex = 0x1c; // Integer
		constexpr auto m_fScale = 0x20; // Float
		constexpr auto m_fLife = 0x24; // Float
		constexpr auto m_nBrightness = 0x28; // Integer
	}

	namespace n_CWeaponBaseItem {
		constexpr auto m_bRedraw = 0x33ec; // Bool
	}

	namespace n_CPostProcessController {
		constexpr auto m_bMaster = 0xa04; // Byte
	}

	namespace n_CPhysBox {
		constexpr auto m_mass = 0x9d8; // Float
	}

	namespace n_CPrecipitation {
		constexpr auto m_nPrecipType = 0xa00; // Integer
	}

	namespace n_CBaseCSGrenadeProjectile {
		constexpr auto m_vInitialVelocity = 0x29e0; // Vector
		constexpr auto m_nBounces = 0x29ec; // Integer
		constexpr auto m_nExplodeEffectIndex = 0x29f0; // Integer
		constexpr auto m_nExplodeEffectTickBegin = 0x29f4; // Integer
		constexpr auto m_vecExplodeEffectOrigin = 0x29f8; // Vector
	}

	namespace n_CFunc_LOD {
		constexpr auto m_nDisappearMinDist = 0x9d8; // Integer
		constexpr auto m_nDisappearMaxDist = 0x9dc; // Integer
	}

	namespace n_CParticleSmokeGrenade {
		constexpr auto m_CurrentStage = 0xac4; // Integer
		constexpr auto m_flSpawnTime = 0xad4; // Float
		constexpr auto m_FadeStartTime = 0xad8; // Float
		constexpr auto m_FadeEndTime = 0xadc; // Float
		constexpr auto m_MinColor = 0xae4; // Vector
		constexpr auto m_MaxColor = 0xaf0; // Vector
	}

	namespace n_CTEBeamLaser {
		constexpr auto m_nStartEntity = 0x4c; // Integer
		constexpr auto m_nEndEntity = 0x50; // Integer
	}

	namespace n_CBaseAttributableItem {
		constexpr auto m_iReapplyProvisionParity = 0x2da8; // Integer
		constexpr auto m_hOuter = 0x2dac; // Integer
		constexpr auto m_ProviderType = 0x2db4; // Integer
		constexpr auto m_iItemDefinitionIndex = 0x2fba; // Short
		constexpr auto m_iEntityQuality = 0x2fbc; // Integer
		constexpr auto m_iEntityLevel = 0x2fc0; // Integer
		constexpr auto m_iItemIDHigh = 0x2fd0; // Integer
		constexpr auto m_iItemIDLow = 0x2fd4; // Integer
		constexpr auto m_iAccountID = 0x2fd8; // Integer
		constexpr auto m_bInitialized = 0x2fe4; // Byte
		constexpr auto m_szCustomName = 0x304c; // String (161)
		constexpr auto m_OriginalOwnerXuidLow = 0x31d0; // Integer
		constexpr auto m_OriginalOwnerXuidHigh = 0x31d4; // Integer
		constexpr auto m_nFallbackPaintKit = 0x31d8; // Integer
		constexpr auto m_nFallbackSeed = 0x31dc; // Integer
		constexpr auto m_flFallbackWear = 0x31e0; // Float
		constexpr auto m_nFallbackStatTrak = 0x31e4; // Integer
	}

	namespace n_CWeaponCSBaseGun {
		constexpr auto m_zoomLevel = 0x33e0; // Unsigned Integer
		constexpr auto m_iBurstShotsRemaining = 0x33e4; // Unsigned Integer
		constexpr auto m_fNextBurstShot = 0x33e8; // Float
	}

	namespace n_CFireSmoke {
		constexpr auto m_flStartScale = 0x9d8; // Float
		constexpr auto m_flScale = 0x9dc; // Float
		constexpr auto m_flScaleTime = 0x9e0; // Float
		constexpr auto m_nFlags = 0x9e4; // Integer
		constexpr auto m_nFlameModelIndex = 0x9e8; // Integer
		constexpr auto m_nFlameFromAboveModelIndex = 0x9ec; // Integer
	}

	namespace n_CPropVehicleDriveable {
		constexpr auto m_hPlayer = 0x2994; // Integer
		constexpr auto m_nSpeed = 0x2998; // Integer
		constexpr auto m_nRPM = 0x299c; // Integer
		constexpr auto m_flThrottle = 0x29a0; // Float
		constexpr auto m_nBoostTimeLeft = 0x29a4; // Integer
		constexpr auto m_nHasBoost = 0x29a8; // Integer
		constexpr auto m_nScannerDisabledWeapons = 0x29ac; // Integer
		constexpr auto m_nScannerDisabledVehicle = 0x29b0; // Integer
		constexpr auto m_bEnterAnimOn = 0x29d0; // Byte
		constexpr auto m_bExitAnimOn = 0x29d1; // Byte
		constexpr auto m_vecGunCrosshair = 0x29d8; // Vector
		constexpr auto m_vecEyeExitEndpoint = 0x2a10; // Vector
		constexpr auto m_bHasGun = 0x2a1c; // Byte
		constexpr auto m_bUnableToFire = 0x2a1d; // Byte
	}

	namespace n_CRocketTrail {
		constexpr auto m_SpawnRate = 0xac4; // Float
		constexpr auto m_StartColor = 0xac8; // Vector
		constexpr auto m_EndColor = 0xad4; // Vector
		constexpr auto m_Opacity = 0xae0; // Float
		constexpr auto m_ParticleLifetime = 0xae4; // Float
		constexpr auto m_StopEmitTime = 0xae8; // Float
		constexpr auto m_MinSpeed = 0xaec; // Float
		constexpr auto m_MaxSpeed = 0xaf0; // Float
		constexpr auto m_StartSize = 0xaf4; // Float
		constexpr auto m_EndSize = 0xaf8; // Float
		constexpr auto m_SpawnRadius = 0xafc; // Float
		constexpr auto m_bEmit = 0xb0c; // Byte
		constexpr auto m_bDamaged = 0xb0d; // Byte
		constexpr auto m_nAttachment = 0xb10; // Integer
		constexpr auto m_flFlareScale = 0xb20; // Float
	}

	namespace n_CBaseCSGrenade {
		constexpr auto m_bRedraw = 0x33e0; // Bool
		constexpr auto m_bIsHeldByPlayer = 0x33e1; // Byte
		constexpr auto m_bPinPulled = 0x33e2; // Bool
		constexpr auto m_fThrowTime = 0x33e4; // Float
		constexpr auto m_bLoopingSoundPlaying = 0x33e8; // Byte
		constexpr auto m_flThrowStrength = 0x33ec; // Float
		constexpr auto m_fDropTime = 0x33f0; // Float
	}

	namespace n_CPlantedC4 {
		constexpr auto m_bBombTicking = 0x2990; // Byte
		constexpr auto m_nBombSite = 0x2994; // Integer
		constexpr auto m_flC4Blow = 0x29a0; // Float
		constexpr auto m_flTimerLength = 0x29a4; // Float
		constexpr auto m_flDefuseLength = 0x29b8; // Float
		constexpr auto m_flDefuseCountDown = 0x29bc; // Float
		constexpr auto m_bBombDefused = 0x29c0; // Byte
		constexpr auto m_hBombDefuser = 0x29c4; // Integer
	}

	namespace n_CTEBeamEntPoint {
		constexpr auto m_nStartEntity = 0x4c; // Integer
		constexpr auto m_nEndEntity = 0x50; // Integer
		constexpr auto m_vecStartPoint = 0x54; // Vector
		constexpr auto m_vecEndPoint = 0x60; // Vector
	}

	namespace n_CTEBreakModel {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_angRotation = 0x1c; // Float [0]
		constexpr auto m_angRotation = 0x20; // Float [1]
		constexpr auto m_angRotation = 0x24; // Float [2]
		constexpr auto m_vecSize = 0x28; // Vector
		constexpr auto m_vecVelocity = 0x34; // Vector
		constexpr auto m_nRandomization = 0x40; // Integer
		constexpr auto m_nModelIndex = 0x44; // Integer
		constexpr auto m_nCount = 0x48; // Integer
		constexpr auto m_fTime = 0x4c; // Float
		constexpr auto m_nFlags = 0x50; // Integer
	}

	namespace n_CTEEnergySplash {
		constexpr auto m_vecPos = 0x10; // Vector
		constexpr auto m_vecDir = 0x1c; // Vector
		constexpr auto m_bExplosive = 0x28; // Byte
	}

	namespace n_CBRC4Target {
		constexpr auto m_bBrokenOpen = 0x2994; // Byte
		constexpr auto m_flRadius = 0x2998; // Float
	}

	namespace n_CBeam {
		constexpr auto m_clrRender = 0x70; // Unsigned Integer
		constexpr auto m_vecOrigin = 0xac; // Vector
		constexpr auto moveparent = 0x148; // Integer
		constexpr auto m_nModelIndex = 0x258; // Unsigned Integer
		constexpr auto m_nRenderFX = 0x25a; // Unsigned Integer
		constexpr auto m_nRenderMode = 0x25b; // Unsigned Integer
		constexpr auto m_flFrameRate = 0x9d8; // Float
		constexpr auto m_flHDRColorScale = 0x9dc; // Float
		constexpr auto m_nNumBeamEnts = 0x9e8; // Unsigned Integer
		constexpr auto m_nHaloIndex = 0x9f0; // Unsigned Integer
		constexpr auto m_nBeamType = 0x9f4; // Unsigned Integer
		constexpr auto m_nBeamFlags = 0x9f8; // Integer
		constexpr auto m_hAttachEntity = 0x9fc; // Entity Handle
		constexpr auto m_nAttachIndex = 0xa24; // Unsigned Integer
		constexpr auto m_fWidth = 0xa4c; // Float
		constexpr auto m_fEndWidth = 0xa50; // Float
		constexpr auto m_fFadeLength = 0xa54; // Float
		constexpr auto m_fHaloScale = 0xa58; // Float
		constexpr auto m_fAmplitude = 0xa5c; // Float
		constexpr auto m_fStartFrame = 0xa60; // Float
		constexpr auto m_fSpeed = 0xa64; // Float
		constexpr auto m_flFrame = 0xa68; // Float
		constexpr auto m_nClipStyle = 0xa6c; // Integer
		constexpr auto m_vecEndPos = 0xa70; // Vector
	}

	namespace n_CBumpMineProjectile {
		constexpr auto m_nParentBoneIndex = 0x29e4; // Integer
		constexpr auto m_vecParentBonePos = 0x29e8; // Vector
		constexpr auto m_bArmed = 0x29f4; // Byte
	}

	namespace n_CSmokeStack {
		constexpr auto m_SpreadSpeed = 0xb14; // Float
		constexpr auto m_Speed = 0xb18; // Float
		constexpr auto m_StartSize = 0xb1c; // Float
		constexpr auto m_EndSize = 0xb20; // Float
		constexpr auto m_Rate = 0xb24; // Float
		constexpr auto m_JetLength = 0xb28; // Float
		constexpr auto m_bEmit = 0xb2c; // Integer
		constexpr auto m_flBaseSpread = 0xb30; // Float
		constexpr auto m_AmbientLight.m_vPos = 0xb34; // Vector
		constexpr auto m_AmbientLight.m_vColor = 0xb40; // Vector
		constexpr auto m_AmbientLight.m_flIntensity = 0xb4c; // Float
		constexpr auto m_DirLight.m_vPos = 0xb50; // Vector
		constexpr auto m_DirLight.m_vColor = 0xb5c; // Vector
		constexpr auto m_DirLight.m_flIntensity = 0xb68; // Float
		constexpr auto m_vWind = 0xb78; // Vector
		constexpr auto m_flTwist = 0xb84; // Float
		constexpr auto m_iMaterialModel = 0xb88; // Integer
		constexpr auto m_flRollSpeed = 0xbc0; // Float
	}

	namespace n_CBaseTeamObjectiveResource {
		constexpr auto m_vCPPositions = 0x0; // Array
		constexpr auto m_iTimerToShowInHUD = 0x9d8; // Integer
		constexpr auto m_iStopWatchTimer = 0x9dc; // Integer
		constexpr auto m_iNumControlPoints = 0x9e0; // Integer
		constexpr auto m_bPlayingMiniRounds = 0x9e8; // Byte
		constexpr auto m_bControlPointsReset = 0x9e9; // Byte
		constexpr auto m_iUpdateCapHudParity = 0x9ec; // Integer
		constexpr auto m_vCPPositions = 0x9f4; // Vector [0]
		constexpr auto m_iszWarnSound = 0x1304; // String (255) [0]
		constexpr auto m_pszCapLayoutInHUD = 0x1cec; // String (32)
	}

	namespace n_CWeaponXM1014 {
		constexpr auto m_reloadState = 0x33e4; // Unsigned Integer
	}

	namespace n_CDrone {
		constexpr auto m_vecTagPositions = 0x0; // Array
		constexpr auto m_hMoveToThisEntity = 0x29e8; // Integer
		constexpr auto m_hDeliveryCargo = 0x29ec; // Integer
		constexpr auto m_bPilotTakeoverAllowed = 0x29f0; // Byte
		constexpr auto m_hPotentialCargo = 0x29f4; // Integer
		constexpr auto m_hCurrentPilot = 0x29f8; // Integer
		constexpr auto m_vecTagPositions = 0x29fc; // Vector [0]
		constexpr auto m_vecTagIncrements = 0x2b1c; // Integer [0]
	}

	namespace n_CColorCorrection {
		constexpr auto m_vecOrigin = 0x9d8; // Vector
		constexpr auto m_minFalloff = 0x9e4; // Float
		constexpr auto m_maxFalloff = 0x9e8; // Float
		constexpr auto m_flFadeInDuration = 0x9ec; // Float
		constexpr auto m_flFadeOutDuration = 0x9f0; // Float
		constexpr auto m_flMaxWeight = 0x9f4; // Float
		constexpr auto m_flCurWeight = 0x9f8; // Float
		constexpr auto m_netLookupFilename = 0x9fc; // String (260)
		constexpr auto m_bEnabled = 0xb00; // Byte
		constexpr auto m_bMaster = 0xb01; // Byte
		constexpr auto m_bClientSide = 0xb02; // Byte
		constexpr auto m_bExclusive = 0xb03; // Byte
	}

	namespace n_CFuncSmokeVolume {
		constexpr auto m_vecMins = 0x8; // Vector
		constexpr auto m_vecMaxs = 0x14; // Vector
		constexpr auto m_usSolidFlags = 0x20; // Short
		constexpr auto m_nSolidType = 0x22; // Byte
		constexpr auto m_triggerBloat = 0x23; // Byte
		constexpr auto m_nSurroundType = 0x34a; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x34c; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x358; // Vector
		constexpr auto m_Color1 = 0xac4; // Integer
		constexpr auto m_Color2 = 0xac8; // Integer
		constexpr auto m_MaterialName = 0xacc; // String (255)
		constexpr auto m_ParticleDrawWidth = 0xbcc; // Float
		constexpr auto m_ParticleSpacingDistance = 0xbd0; // Float
		constexpr auto m_DensityRampSpeed = 0xbd4; // Float
		constexpr auto m_RotationSpeed = 0xbd8; // Float
		constexpr auto m_MovementSpeed = 0xbdc; // Float
		constexpr auto m_Density = 0xbe0; // Float
		constexpr auto m_maxDrawDistance = 0xbe4; // Float
		constexpr auto m_spawnflags = 0xbe8; // Integer
	}

	namespace n_CBaseEntity {
		constexpr auto movetype = 0x0; // Integer
		constexpr auto m_vecMins = 0x8; // Vector
		constexpr auto m_vecMaxs = 0x14; // Vector
		constexpr auto m_flLastMadeNoiseTime = 0x20; // Float
		constexpr auto m_nSolidType = 0x22; // Byte
		constexpr auto m_triggerBloat = 0x23; // Byte
		constexpr auto m_bIsAutoaimTarget = 0x60; // Byte
		constexpr auto m_clrRender = 0x70; // Integer
		constexpr auto m_cellbits = 0x74; // Integer
		constexpr auto m_cellX = 0x7c; // Integer
		constexpr auto m_cellY = 0x80; // Integer
		constexpr auto m_cellZ = 0x84; // Integer
		constexpr auto m_vecAbsVelocity = 0x94; // Vector
		constexpr auto m_vecAbsOrigin = 0xa0; // Vector
		constexpr auto m_vecOrigin = 0xac; // Vector
		constexpr auto m_vecAngVelocity = 0xb8; // Vector
		constexpr auto m_angAbsRotation = 0xc4; // Vector
		constexpr auto m_angRotation = 0xd0; // Vector
		constexpr auto m_flMaxFallVelocity = 0xdc; // Float
		constexpr auto m_flGravity = 0xe0; // Float
		constexpr auto m_flProxyRandomValue = 0xe4; // Float
		constexpr auto m_iEFlags = 0xe8; // Unsigned Integer
		constexpr auto m_nWaterType = 0xec; // Byte
		constexpr auto m_fEffects = 0xf0; // Unsigned Integer
		constexpr auto m_iTeamNum = 0xf4; // Unsigned Integer
		constexpr auto m_iPendingTeamNum = 0xf8; // Unsigned Integer
		constexpr auto m_iHealth = 0x100; // Unsigned Integer
		constexpr auto m_fFlags = 0x104; // Unsigned Integer
		constexpr auto m_vecViewOffset = 0x108; // Vector
		constexpr auto m_vecVelocity = 0x114; // Vector
		constexpr auto m_vecBaseVelocity = 0x120; // Vector
		constexpr auto m_angNetworkAngles = 0x12c; // Vector
		constexpr auto m_vecNetworkOrigin = 0x138; // Vector
		constexpr auto m_flFriction = 0x144; // Float
		constexpr auto m_hNetworkMoveParent = 0x148; // Entity Handle
		constexpr auto m_hOwnerEntity = 0x14c; // Entity Handle
		constexpr auto m_hGroundEntity = 0x150; // Entity Handle
		constexpr auto m_iName = 0x154; // String (260)
		constexpr auto m_nModelIndex = 0x258; // Short
		constexpr auto m_nRenderFX = 0x25a; // Byte
		constexpr auto m_nRenderMode = 0x25b; // Byte
		constexpr auto m_MoveType = 0x25c; // Byte
		constexpr auto m_MoveCollide = 0x25d; // Byte
		constexpr auto m_nWaterLevel = 0x25e; // Byte
		constexpr auto m_flAnimTime = 0x260; // Integer
		constexpr auto m_flSimulationTime = 0x268; // Integer
		constexpr auto m_flUseLookAtAngle = 0x2cc; // Float
		constexpr auto m_iParentAttachment = 0x2ec; // Byte
		constexpr auto m_fadeMinDist = 0x2f4; // Float
		constexpr auto m_fadeMaxDist = 0x2f8; // Float
		constexpr auto m_flFadeScale = 0x2fc; // Float
		constexpr auto m_flElasticity = 0x300; // Float
		constexpr auto m_usSolidFlags = 0x340; // Integer
		constexpr auto m_nSurroundType = 0x34a; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x34c; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x358; // Vector
		constexpr auto m_flShadowCastDistance = 0x3a0; // Float
		constexpr auto m_CollisionGroup = 0x474; // Integer
		constexpr auto m_bEverHadPredictionErrorsForThisCommand = 0x938; // Bool
		constexpr auto m_bSimulatedEveryTick = 0x93a; // Integer
		constexpr auto m_bAnimatedEveryTick = 0x93b; // Integer
		constexpr auto m_bAlternateSorting = 0x93c; // Byte
		constexpr auto m_bSpotted = 0x93d; // Integer
		constexpr auto m_nMinCPULevel = 0x988; // Byte
		constexpr auto m_nMaxCPULevel = 0x989; // Byte
		constexpr auto m_nMinGPULevel = 0x98a; // Byte
		constexpr auto m_nMaxGPULevel = 0x98b; // Byte
		constexpr auto m_iTextureFrameIndex = 0x98c; // Byte
		constexpr auto m_hEffectEntity = 0x998; // Integer
		constexpr auto m_bEligibleForScreenHighlight = 0x9b9; // Byte
	}

	namespace n_CTriggerSoundOperator {
		constexpr auto m_nSoundOperator = 0xa10; // Integer
	}

	namespace n_CPhysPropLootCrate {
		constexpr auto m_iHealth = 0x100; // Integer
		constexpr auto m_bRenderInPSPM = 0x2a04; // Byte
		constexpr auto m_bRenderInTablet = 0x2a05; // Byte
		constexpr auto m_iMaxHealth = 0x2a08; // Integer
	}

	namespace n_CBaseAnimatingOverlay {
	}

	namespace n_CTEPhysicsProp {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_angRotation = 0x1c; // Float [0]
		constexpr auto m_angRotation = 0x20; // Float [1]
		constexpr auto m_angRotation = 0x24; // Float [2]
		constexpr auto m_vecVelocity = 0x28; // Vector
		constexpr auto m_nModelIndex = 0x34; // Integer
		constexpr auto m_nSkin = 0x38; // Integer
		constexpr auto m_nFlags = 0x3c; // Integer
		constexpr auto m_nEffects = 0x40; // Integer
		constexpr auto m_clrRender = 0x44; // Integer
	}

	namespace n_CTEFireBullets {
		constexpr auto m_iPlayer = 0x10; // Integer
		constexpr auto m_nItemDefIndex = 0x14; // Short
		constexpr auto m_vecOrigin = 0x18; // Vector
		constexpr auto m_vecAngles = 0x24; // Float [0]
		constexpr auto m_vecAngles = 0x28; // Float [1]
		constexpr auto m_weapon = 0x30; // Integer
		constexpr auto m_iWeaponID = 0x34; // Integer
		constexpr auto m_iMode = 0x38; // Integer
		constexpr auto m_iSeed = 0x3c; // Integer
		constexpr auto m_fInaccuracy = 0x40; // Float
		constexpr auto m_flRecoilIndex = 0x44; // Float
		constexpr auto m_fSpread = 0x48; // Float
		constexpr auto m_iSoundType = 0x4c; // Integer
	}

	namespace n_CFuncRotating {
		constexpr auto m_angRotation = 0x12c; // Float [0]
		constexpr auto m_angRotation = 0x130; // Float [1]
		constexpr auto m_angRotation = 0x134; // Float [2]
		constexpr auto m_vecOrigin = 0x138; // Vector
		constexpr auto m_flSimulationTime = 0x268; // Integer
	}

	namespace n_CWeaponMelee {
		constexpr auto m_flThrowAt = 0x33e0; // Float
	}

	namespace n_CMaterialModifyControl {
		constexpr auto m_szMaterialName = 0x9d8; // String (255)
		constexpr auto m_szMaterialVar = 0xad7; // String (255)
		constexpr auto m_szMaterialVarValue = 0xbd6; // String (255)
		constexpr auto m_iFrameStart = 0xce0; // Integer
		constexpr auto m_iFrameEnd = 0xce4; // Integer
		constexpr auto m_bWrap = 0xce8; // Byte
		constexpr auto m_flFramerate = 0xcec; // Float
		constexpr auto m_bNewAnimCommandsSemaphore = 0xcf0; // Byte
		constexpr auto m_flFloatLerpStartValue = 0xcf4; // Float
		constexpr auto m_flFloatLerpEndValue = 0xcf8; // Float
		constexpr auto m_flFloatLerpTransitionTime = 0xcfc; // Float
		constexpr auto m_bFloatLerpWrap = 0xd00; // Byte
		constexpr auto m_nModifyMode = 0xd08; // Integer
	}

	namespace n_CWeaponC4 {
		constexpr auto m_bStartedArming = 0x3400; // Byte
		constexpr auto m_fArmedTime = 0x3404; // Float
		constexpr auto m_bBombPlacedAnimation = 0x3408; // Byte
		constexpr auto m_bShowC4LED = 0x3409; // Byte
		constexpr auto m_bIsPlantingViaUse = 0x340a; // Byte
	}

	namespace n_CTEMetalSparks {
		constexpr auto m_vecPos = 0x10; // Vector
		constexpr auto m_vecDir = 0x1c; // Vector
	}

	namespace n_CTEPlantBomb {
		constexpr auto m_iPlayer = 0x10; // Integer
		constexpr auto m_vecOrigin = 0x14; // Vector
		constexpr auto m_option = 0x20; // Integer
	}

	namespace n_CWeaponTablet {
		constexpr auto m_flUpgradeExpirationTime = 0x0; // Array
		constexpr auto m_flUpgradeExpirationTime = 0x33e8; // Float [0]
		constexpr auto m_vecLocalHexFlags = 0x33f8; // Integer [0]
		constexpr auto m_nContractKillGridIndex = 0x34a0; // Integer
		constexpr auto m_nContractKillGridHighResIndex = 0x34a4; // Integer
		constexpr auto m_bTabletReceptionIsBlocked = 0x34a8; // Byte
		constexpr auto m_flScanProgress = 0x34ac; // Float
		constexpr auto m_flBootTime = 0x34b0; // Float
		constexpr auto m_flShowMapTime = 0x34b4; // Float
		constexpr auto m_vecNearestMetalCratePos = 0x34b8; // Vector
		constexpr auto m_vecNotificationIds = 0x34c4; // Integer [0]
		constexpr auto m_vecNotificationTimestamps = 0x34e4; // Float [0]
		constexpr auto m_nLastPurchaseIndex = 0x3504; // Integer
		constexpr auto m_vecPlayerPositionHistory = 0x3508; // Vector [0]
	}

	namespace n_CTEFoundryHelpers {
		constexpr auto m_iEntity = 0x10; // Integer
	}

	namespace n_CTEBeamEnts {
		constexpr auto m_nStartEntity = 0x4c; // Integer
		constexpr auto m_nEndEntity = 0x50; // Integer
	}

	namespace n_CTestTraceline {
		constexpr auto m_clrRender = 0x70; // Integer
		constexpr auto m_angRotation = 0x12c; // Float [0]
		constexpr auto m_angRotation = 0x130; // Float [1]
		constexpr auto m_angRotation = 0x134; // Float [2]
		constexpr auto m_vecOrigin = 0x138; // Vector
		constexpr auto moveparent = 0x148; // Integer
	}

	namespace n_CEnvTonemapController {
		constexpr auto m_bUseCustomAutoExposureMin = 0x9d8; // Byte
		constexpr auto m_bUseCustomAutoExposureMax = 0x9d9; // Byte
		constexpr auto m_bUseCustomBloomScale = 0x9da; // Byte
		constexpr auto m_flCustomAutoExposureMin = 0x9dc; // Float
		constexpr auto m_flCustomAutoExposureMax = 0x9e0; // Float
		constexpr auto m_flCustomBloomScale = 0x9e4; // Float
		constexpr auto m_flCustomBloomScaleMinimum = 0x9e8; // Float
		constexpr auto m_flBloomExponent = 0x9ec; // Float
		constexpr auto m_flBloomSaturation = 0x9f0; // Float
		constexpr auto m_flTonemapPercentTarget = 0x9f4; // Float
		constexpr auto m_flTonemapPercentBrightPixels = 0x9f8; // Float
		constexpr auto m_flTonemapMinAvgLum = 0x9fc; // Float
		constexpr auto m_flTonemapRate = 0xa00; // Float
	}

	namespace n_CParadropChopper {
		constexpr auto m_vecOrigin = 0x138; // Vector2D
		constexpr auto m_vecOrigin = 0x140; // Float [2]
		constexpr auto m_hCallingPlayer = 0x29a0; // Integer
	}

	namespace n_CTEBeamPoints {
		constexpr auto m_vecStartPoint = 0x4c; // Vector
		constexpr auto m_vecEndPoint = 0x58; // Vector
	}

	namespace n_CDynamicProp {
		constexpr auto m_bUseHitboxesForRenderBox = 0x29b4; // Byte
		constexpr auto m_flGlowMaxDist = 0x29d4; // Float
		constexpr auto m_bShouldGlow = 0x29d8; // Byte
		constexpr auto m_clrGlow = 0x29d9; // Integer
		constexpr auto m_nGlowStyle = 0x29e0; // Integer
	}

	namespace n_CPhysBoxMultiplayer {
		constexpr auto m_iPhysicsMode = 0x9e4; // Integer
		constexpr auto m_fMass = 0x9e8; // Float
	}

	namespace n_CTEShatterSurface {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecAngles = 0x1c; // Vector
		constexpr auto m_vecForce = 0x28; // Vector
		constexpr auto m_vecForcePos = 0x34; // Vector
		constexpr auto m_flWidth = 0x40; // Float
		constexpr auto m_flHeight = 0x44; // Float
		constexpr auto m_flShardSize = 0x48; // Float
		constexpr auto m_nSurfaceType = 0x50; // Integer
		constexpr auto m_uchFrontColor = 0x54; // Byte [0]
		constexpr auto m_uchFrontColor = 0x55; // Byte [1]
		constexpr auto m_uchFrontColor = 0x56; // Byte [2]
		constexpr auto m_uchBackColor = 0x57; // Byte [0]
		constexpr auto m_uchBackColor = 0x58; // Byte [1]
		constexpr auto m_uchBackColor = 0x59; // Byte [2]
	}

	namespace n_CCSGameRulesProxy {
		constexpr auto m_bFreezePeriod = 0x20; // Byte
		constexpr auto m_bWarmupPeriod = 0x21; // Byte
		constexpr auto m_fWarmupPeriodEnd = 0x24; // Float
		constexpr auto m_fWarmupPeriodStart = 0x28; // Float
		constexpr auto m_bTerroristTimeOutActive = 0x2c; // Byte
		constexpr auto m_bCTTimeOutActive = 0x2d; // Byte
		constexpr auto m_flTerroristTimeOutRemaining = 0x30; // Float
		constexpr auto m_flCTTimeOutRemaining = 0x34; // Float
		constexpr auto m_nTerroristTimeOuts = 0x38; // Integer
		constexpr auto m_nCTTimeOuts = 0x3c; // Integer
		constexpr auto m_bTechnicalTimeOut = 0x40; // Byte
		constexpr auto m_bMatchWaitingForResume = 0x41; // Byte
		constexpr auto m_iRoundTime = 0x44; // Integer
		constexpr auto m_fMatchStartTime = 0x48; // Float
		constexpr auto m_fRoundStartTime = 0x4c; // Float
		constexpr auto m_flRestartRoundTime = 0x50; // Float
		constexpr auto m_bGameRestart = 0x54; // Byte
		constexpr auto m_flGameStartTime = 0x58; // Float
		constexpr auto m_timeUntilNextPhaseStarts = 0x5c; // Float
		constexpr auto m_gamePhase = 0x60; // Integer
		constexpr auto m_totalRoundsPlayed = 0x64; // Integer
		constexpr auto m_nOvertimePlaying = 0x68; // Integer
		constexpr auto m_iHostagesRemaining = 0x6c; // Integer
		constexpr auto m_bAnyHostageReached = 0x70; // Byte
		constexpr auto m_bMapHasBombTarget = 0x71; // Byte
		constexpr auto m_bMapHasRescueZone = 0x72; // Byte
		constexpr auto m_bMapHasBuyZone = 0x73; // Byte
		constexpr auto m_bIsQueuedMatchmaking = 0x74; // Byte
		constexpr auto m_nQueuedMatchmakingMode = 0x78; // Integer
		constexpr auto m_bIsValveDS = 0x7c; // Byte
		constexpr auto m_bLogoMap = 0x7d; // Byte
		constexpr auto m_bPlayAllStepSoundsOnServer = 0x7e; // Byte
		constexpr auto m_iNumGunGameProgressiveWeaponsCT = 0x80; // Integer
		constexpr auto m_iNumGunGameProgressiveWeaponsT = 0x84; // Integer
		constexpr auto m_iSpectatorSlotCount = 0x88; // Integer
		constexpr auto m_MatchDevice = 0x44c; // Integer
		constexpr auto m_bHasMatchStarted = 0x450; // Byte
		constexpr auto m_flDMBonusStartTime = 0x454; // Float
		constexpr auto m_flDMBonusTimeLength = 0x458; // Float
		constexpr auto m_unDMBonusWeaponLoadoutSlot = 0x45c; // Short
		constexpr auto m_bDMBonusActive = 0x45e; // Byte
		constexpr auto m_nNextMapInMapgroup = 0x460; // Integer
		constexpr auto m_szTournamentEventName = 0x464; // String (260)
		constexpr auto m_szTournamentEventStage = 0x568; // String (260)
		constexpr auto m_szMatchStatTxt = 0x66c; // String (260)
		constexpr auto m_szTournamentPredictionsTxt = 0x770; // String (260)
		constexpr auto m_nTournamentPredictionsPct = 0x874; // Integer
		constexpr auto m_flCMMItemDropRevealStartTime = 0x878; // Float
		constexpr auto m_flCMMItemDropRevealEndTime = 0x87c; // Float
		constexpr auto m_bIsDroppingItems = 0x880; // Byte
		constexpr auto m_bIsQuestEligible = 0x881; // Byte
		constexpr auto m_nGuardianModeWaveNumber = 0x884; // Integer
		constexpr auto m_nGuardianModeSpecialKillsRemaining = 0x888; // Integer
		constexpr auto m_nGuardianModeSpecialWeaponNeeded = 0x88c; // Integer
		constexpr auto m_numGlobalGiftsGiven = 0x898; // Integer
		constexpr auto m_numGlobalGifters = 0x89c; // Integer
		constexpr auto m_numGlobalGiftsPeriodSeconds = 0x8a0; // Integer
		constexpr auto m_numBestOfMaps = 0x99c; // Integer
		constexpr auto m_nHalloweenMaskListSeed = 0x9a0; // Integer
		constexpr auto m_bBombDropped = 0x9a4; // Byte
		constexpr auto m_bBombPlanted = 0x9a5; // Byte
		constexpr auto m_iRoundWinStatus = 0x9a8; // Integer
		constexpr auto m_eRoundWinReason = 0x9ac; // Integer
		constexpr auto m_bTCantBuy = 0x9b0; // Byte
		constexpr auto m_bCTCantBuy = 0x9b1; // Byte
		constexpr auto m_flGuardianBuyUntilTime = 0x9b4; // Float
		constexpr auto m_iActiveAssassinationTargetMissionID = 0xc20; // Integer
		constexpr auto m_nEndMatchMapVoteWinner = 0xc78; // Integer
		constexpr auto m_iNumConsecutiveCTLoses = 0xc7c; // Integer
		constexpr auto m_iNumConsecutiveTerroristLoses = 0xc80; // Integer
		constexpr auto m_vecPlayAreaMins = 0xd00; // Vector
		constexpr auto m_vecPlayAreaMaxs = 0xd0c; // Vector
		constexpr auto m_flSpawnSelectionTimeStart = 0xef8; // Float
		constexpr auto m_flSpawnSelectionTimeEnd = 0xefc; // Float
		constexpr auto m_flSpawnSelectionTimeLoadout = 0xf00; // Float
		constexpr auto m_spawnStage = 0xf04; // Integer
		constexpr auto m_flTabletHexOriginX = 0xf08; // Float
		constexpr auto m_flTabletHexOriginY = 0xf0c; // Float
		constexpr auto m_flTabletHexSize = 0xf10; // Float
		constexpr auto m_flSurvivalStartTime = 0x13a8; // Float
		constexpr auto m_nMatchSeed = 0x14b8; // Integer
		constexpr auto m_bBlockersPresent = 0x14bc; // Byte
		constexpr auto m_bRoundInProgress = 0x14bd; // Byte
		constexpr auto m_iFirstSecondHalfRound = 0x14c0; // Integer
		constexpr auto m_iBombSite = 0x14c4; // Integer
	}

	namespace n_CWaterLODControl {
		constexpr auto m_flCheapWaterStartDistance = 0x9d8; // Float
		constexpr auto m_flCheapWaterEndDistance = 0x9dc; // Float
	}

	namespace n_CDustTrail {
		constexpr auto m_SpawnRate = 0xac4; // Float
		constexpr auto m_Color = 0xac8; // Vector
		constexpr auto m_Opacity = 0xad4; // Float
		constexpr auto m_ParticleLifetime = 0xad8; // Float
		constexpr auto m_StopEmitTime = 0xae0; // Float
		constexpr auto m_MinSpeed = 0xae4; // Float
		constexpr auto m_MaxSpeed = 0xae8; // Float
		constexpr auto m_MinDirectedSpeed = 0xaec; // Float
		constexpr auto m_MaxDirectedSpeed = 0xaf0; // Float
		constexpr auto m_StartSize = 0xaf4; // Float
		constexpr auto m_EndSize = 0xaf8; // Float
		constexpr auto m_SpawnRadius = 0xafc; // Float
		constexpr auto m_bEmit = 0xb0c; // Byte
	}

	namespace n_CItem {
		constexpr auto m_bShouldGlow = 0x3240; // Byte
	}

	namespace n_CFunc_Dust {
		constexpr auto m_vecMins = 0x8; // Vector
		constexpr auto m_vecMaxs = 0x14; // Vector
		constexpr auto m_usSolidFlags = 0x20; // Short
		constexpr auto m_nSolidType = 0x22; // Byte
		constexpr auto m_triggerBloat = 0x23; // Byte
		constexpr auto m_nModelIndex = 0x258; // Short
		constexpr auto m_nSurroundType = 0x34a; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x34c; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x358; // Vector
		constexpr auto m_Color = 0x9d8; // Integer
		constexpr auto m_SpawnRate = 0x9dc; // Integer
		constexpr auto m_flSizeMin = 0x9e0; // Float
		constexpr auto m_flSizeMax = 0x9e4; // Float
		constexpr auto m_SpeedMax = 0x9e8; // Integer
		constexpr auto m_LifetimeMin = 0x9ec; // Integer
		constexpr auto m_LifetimeMax = 0x9f0; // Integer
		constexpr auto m_DistMax = 0x9f4; // Integer
		constexpr auto m_FallSpeed = 0x9f8; // Float
		constexpr auto m_bAffectedByWind = 0x9fc; // Byte
		constexpr auto m_DustFlags = 0xa00; // Integer
	}

	namespace n_CWeaponCSBase {
		constexpr auto m_flNextPrimaryAttack = 0x3248; // Float
		constexpr auto m_flNextSecondaryAttack = 0x324c; // Float
		constexpr auto m_flTimeWeaponIdle = 0x3284; // Float
		constexpr auto m_weaponMode = 0x3328; // Unsigned Integer
		constexpr auto m_fAccuracyPenalty = 0x3340; // Float
		constexpr auto m_iRecoilIndex = 0x3350; // Unsigned Integer
		constexpr auto m_flRecoilIndex = 0x3354; // Float
		constexpr auto m_bBurstMode = 0x3358; // Byte
		constexpr auto m_flPostponeFireReadyTime = 0x335c; // Float
		constexpr auto m_bReloadVisuallyComplete = 0x3360; // Bool
		constexpr auto m_bSilencerOn = 0x3361; // Byte
		constexpr auto m_flDoneSwitchingSilencer = 0x3364; // Float
		constexpr auto m_iOriginalTeamNumber = 0x336c; // Integer
		constexpr auto m_hPrevOwner = 0x3394; // Integer
		constexpr auto m_fLastShotTime = 0x33b8; // Float
		constexpr auto m_iIronSightMode = 0x33d4; // Unsigned Integer
	}

	namespace n_CSteamJet {
		constexpr auto m_SpreadSpeed = 0xac4; // Float
		constexpr auto m_Speed = 0xac8; // Float
		constexpr auto m_StartSize = 0xacc; // Float
		constexpr auto m_EndSize = 0xad0; // Float
		constexpr auto m_Rate = 0xad4; // Float
		constexpr auto m_JetLength = 0xad8; // Float
		constexpr auto m_bEmit = 0xadc; // Integer
		constexpr auto m_nType = 0xae0; // Integer
		constexpr auto m_bFaceLeft = 0xae4; // Byte
		constexpr auto m_spawnflags = 0xae8; // Integer
		constexpr auto m_flRollSpeed = 0xaec; // Float
	}

	namespace n_CProxyToggle {
		constexpr auto m_WithProxy = 0x9d8; // Integer
	}

	namespace n_CPhysicsPropMultiplayer {
		constexpr auto m_iPhysicsMode = 0x29d4; // Integer
		constexpr auto m_fMass = 0x29d8; // Float
		constexpr auto m_collisionMins = 0x29dc; // Vector
		constexpr auto m_collisionMaxs = 0x29e8; // Vector
	}

	namespace n_CEnvScreenEffect {
		constexpr auto m_flDuration = 0x9d8; // Float
		constexpr auto m_nType = 0x9dc; // Integer
	}

	namespace n_CEnvParticleScript {
		constexpr auto m_flSequenceScale = 0x2a74; // Float
	}

	namespace n_CPropJeep {
		constexpr auto m_bHeadlightIsOn = 0x2adc; // Byte
	}

	namespace n_CTESpriteSpray {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecDirection = 0x1c; // Vector
		constexpr auto m_nModelIndex = 0x28; // Integer
		constexpr auto m_nSpeed = 0x2c; // Integer
		constexpr auto m_fNoise = 0x30; // Float
		constexpr auto m_nCount = 0x34; // Integer
	}

	namespace n_CTEShowLine {
		constexpr auto m_vecEnd = 0x1c; // Vector
	}

	namespace n_CTEBeamSpline {
		constexpr auto m_vecPoints = 0x0; // Array
		constexpr auto m_vecPoints = 0x10; // Vector [0]
		constexpr auto m_nPoints = 0xd0; // Integer
	}

	namespace n_CTEEffectDispatch {
		constexpr auto m_vOrigin.x = 0x10; // Float
		constexpr auto m_vOrigin.y = 0x14; // Float
		constexpr auto m_vOrigin.z = 0x18; // Float
		constexpr auto m_vStart.x = 0x1c; // Float
		constexpr auto m_vStart.y = 0x20; // Float
		constexpr auto m_vStart.z = 0x24; // Float
		constexpr auto m_vNormal = 0x28; // Vector
		constexpr auto m_vAngles = 0x34; // Vector
		constexpr auto m_fFlags = 0x40; // Integer
		constexpr auto m_flScale = 0x4c; // Float
		constexpr auto m_flMagnitude = 0x50; // Float
		constexpr auto m_flRadius = 0x54; // Float
		constexpr auto m_nAttachmentIndex = 0x58; // Integer
		constexpr auto m_nSurfaceProp = 0x5c; // Integer
		constexpr auto m_nMaterial = 0x60; // Integer
		constexpr auto m_nDamageType = 0x64; // Integer
		constexpr auto m_nHitBox = 0x68; // Integer
		constexpr auto m_nOtherEntIndex = 0x6c; // Integer
		constexpr auto m_nColor = 0x70; // Byte
		constexpr auto m_bPositionsAreRelativeToEntity = 0x71; // Byte
		constexpr auto m_iEffectName = 0x74; // Integer
	}

	namespace n_CTEClientProjectile {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecVelocity = 0x1c; // Vector
		constexpr auto m_nModelIndex = 0x28; // Integer
		constexpr auto m_nLifeTime = 0x2c; // Integer
		constexpr auto m_hOwner = 0x30; // Integer
	}

	namespace n_CEntityDissolve {
		constexpr auto m_flStartTime = 0x9dc; // Float
		constexpr auto m_flFadeOutStart = 0x9e0; // Float
		constexpr auto m_flFadeOutLength = 0x9e4; // Float
		constexpr auto m_flFadeOutModelStart = 0x9e8; // Float
		constexpr auto m_flFadeOutModelLength = 0x9ec; // Float
		constexpr auto m_flFadeInStart = 0x9f0; // Float
		constexpr auto m_flFadeInLength = 0x9f4; // Float
		constexpr auto m_nDissolveType = 0x9f8; // Integer
		constexpr auto m_vDissolverOrigin = 0xa00; // Vector
		constexpr auto m_nMagnitude = 0xa0c; // Integer
	}

	namespace n_CBaseToggle {
		constexpr auto m_vecFinalDest = 0x9ec; // Vector
		constexpr auto m_movementType = 0x9f8; // Integer
		constexpr auto m_flMoveTargetTime = 0x9fc; // Float
	}

	namespace n_CEnvAmbientLight {
		constexpr auto m_vecColor = 0xb00; // Vector
	}

	namespace n_CWorldVguiText {
		constexpr auto m_bEnabled = 0x9d8; // Byte
		constexpr auto m_szDisplayText = 0x9d9; // String (512)
		constexpr auto m_szDisplayTextOption = 0xbd9; // String (256)
		constexpr auto m_szFont = 0xcd9; // String (64)
		constexpr auto m_clrText = 0xd19; // Integer
		constexpr auto m_iTextPanelWidth = 0xd20; // Integer
	}

	namespace n_CMolotovProjectile {
		constexpr auto m_bIsIncGrenade = 0x2a20; // Byte
	}

	namespace n_CBaseAnimating {
		constexpr auto m_bClientSideRagdoll = 0x279; // Byte
		constexpr auto m_nHitboxSet = 0x9fc; // Integer
		constexpr auto m_flCycle = 0xa14; // Float
		constexpr auto m_flPlaybackRate = 0xa18; // Float
		constexpr auto m_nSkin = 0xa1c; // Unsigned Integer
		constexpr auto m_nBody = 0xa20; // Unsigned Integer
		constexpr auto m_nHighlightColorR = 0xa38; // Integer
		constexpr auto m_nHighlightColorG = 0xa3c; // Integer
		constexpr auto m_nHighlightColorB = 0xa40; // Integer
		constexpr auto m_nNewSequenceParity = 0xa44; // Unsigned Integer
		constexpr auto m_nResetEventsParity = 0xa48; // Unsigned Integer
		constexpr auto m_flEncodedController = 0xa54; // Float
		constexpr auto m_nMuzzleFlashParity = 0xa64; // Byte
		constexpr auto m_vecForce = 0x2680; // Vector
		constexpr auto m_nForceBone = 0x268c; // Integer
		constexpr auto m_bClientSideFrameReset = 0x26c4; // Byte
		constexpr auto m_flFrozen = 0x26fc; // Float
		constexpr auto m_flModelScale = 0x274c; // Float
		constexpr auto m_ScaleType = 0x2750; // Integer
		constexpr auto m_bClientSideAnimation = 0x28a0; // Byte
		constexpr auto m_nSequence = 0x28c0; // Integer
		constexpr auto m_hLightingOrigin = 0x2948; // Integer
		constexpr auto m_bSuppressAnimSounds = 0x294e; // Byte
	}

	namespace n_CTEPlayerDecal {
		constexpr auto m_nPlayer = 0x10; // Integer
		constexpr auto m_vecOrigin = 0x14; // Vector
		constexpr auto m_vecStart = 0x20; // Vector
		constexpr auto m_vecRight = 0x2c; // Vector
		constexpr auto m_nEntity = 0x38; // Integer
		constexpr auto m_nHitbox = 0x3c; // Integer
	}

	namespace n_CBaseViewModel {
		constexpr auto m_fEffects = 0xf0; // Unsigned Integer
		constexpr auto m_nModelIndex = 0x258; // Short
		constexpr auto m_flAnimTime = 0x260; // Float
		constexpr auto m_flCycle = 0xa14; // Float
		constexpr auto m_flPlaybackRate = 0xa18; // Float
		constexpr auto m_nSkin = 0xa1c; // Unsigned Integer
		constexpr auto m_nBody = 0xa20; // Unsigned Integer
		constexpr auto m_nNewSequenceParity = 0xa44; // Integer
		constexpr auto m_nResetEventsParity = 0xa48; // Integer
		constexpr auto m_nMuzzleFlashParity = 0xa64; // Byte
		constexpr auto m_nSequence = 0x28c0; // Unsigned Integer
		constexpr auto m_bShouldIgnoreOffsetAndAccuracy = 0x29a0; // Byte
		constexpr auto m_nViewModelIndex = 0x29d0; // Unsigned Integer
		constexpr auto m_nAnimationParity = 0x29d4; // Unsigned Integer
		constexpr auto m_hWeapon = 0x29d8; // Entity Handle
		constexpr auto m_hOwner = 0x29dc; // Entity Handle
		constexpr auto m_flTimeWeaponIdle = 0x29e0; // Float
		constexpr auto m_Activity = 0x29e4; // Unsigned Integer
	}

	namespace n_CPoseController {
		constexpr auto m_bPoseValueParity = 0x9ec; // Byte
		constexpr auto m_fPoseValue = 0x9f0; // Float
		constexpr auto m_fInterpolationTime = 0x9f4; // Float
		constexpr auto m_bInterpolationWrap = 0x9f8; // Byte
		constexpr auto m_fCycleFrequency = 0x9fc; // Float
		constexpr auto m_nFModType = 0xa00; // Integer
		constexpr auto m_fFModTimeOffset = 0xa04; // Float
		constexpr auto m_fFModRate = 0xa08; // Float
		constexpr auto m_fFModAmplitude = 0xa0c; // Float
	}

	namespace n_CStatueProp {
		constexpr auto m_hInitBaseAnimating = 0x29d0; // Integer
		constexpr auto m_bShatter = 0x29d4; // Byte
		constexpr auto m_nShatterFlags = 0x29d8; // Integer
		constexpr auto m_vShatterPosition = 0x29dc; // Vector
		constexpr auto m_vShatterForce = 0x29e8; // Vector
	}

	namespace n_CBaseGrenade {
		constexpr auto m_fFlags = 0x104; // Integer
		constexpr auto m_vecVelocity = 0x114; // Vector
		constexpr auto m_bIsLive = 0x2991; // Bool
		constexpr auto m_DmgRadius = 0x2994; // Bool
		constexpr auto m_flNextAttack = 0x2998; // Float
		constexpr auto m_flDamage = 0x29a8; // Float
		constexpr auto m_hThrower = 0x29b0; // Entity Handle
	}

	namespace n_CAI_BaseNPC {
		constexpr auto m_lifeState = 0x25f; // Byte
		constexpr auto m_flTimePingEffect = 0x2f20; // Float
		constexpr auto m_iDeathPose = 0x2f24; // Integer
		constexpr auto m_iDeathFrame = 0x2f28; // Integer
		constexpr auto m_iSpeedModRadius = 0x2f2c; // Integer
		constexpr auto m_iSpeedModSpeed = 0x2f30; // Integer
		constexpr auto m_bPerformAvoidance = 0x2f34; // Byte
		constexpr auto m_bIsMoving = 0x2f35; // Byte
		constexpr auto m_bFadeCorpse = 0x2f36; // Byte
		constexpr auto m_bSpeedModActive = 0x2f37; // Byte
		constexpr auto m_bImportanRagdoll = 0x2f38; // Byte
	}

	namespace n_CWeaponFists {
		constexpr auto m_bPlayingUninterruptableAct = 0x33e0; // Byte
	}

	namespace n_CColorCorrectionVolume {
		constexpr auto m_bEnabled = 0xa20; // Byte
		constexpr auto m_MaxWeight = 0xa24; // Float
		constexpr auto m_FadeDuration = 0xa28; // Float
		constexpr auto m_Weight = 0xa2c; // Float
		constexpr auto m_lookupFilename = 0xa30; // String (260)
	}

	namespace n_CTEMuzzleFlash {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecAngles = 0x1c; // Vector
		constexpr auto m_flScale = 0x28; // Float
		constexpr auto m_nType = 0x2c; // Integer
	}

	namespace n_CTEExplosion {
		constexpr auto m_nModelIndex = 0x1c; // Integer
		constexpr auto m_fScale = 0x20; // Float
		constexpr auto m_nFrameRate = 0x24; // Integer
		constexpr auto m_nFlags = 0x28; // Integer
		constexpr auto m_vecNormal = 0x2c; // Vector
		constexpr auto m_chMaterialType = 0x38; // Byte
		constexpr auto m_nRadius = 0x3c; // Integer
		constexpr auto m_nMagnitude = 0x40; // Integer
	}

	namespace n_CTEBloodSprite {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_vecDirection = 0x1c; // Vector
		constexpr auto r = 0x28; // Integer
		constexpr auto g = 0x2c; // Integer
		constexpr auto b = 0x30; // Integer
		constexpr auto a = 0x34; // Integer
		constexpr auto m_nDropModel = 0x38; // Integer
		constexpr auto m_nSprayModel = 0x3c; // Integer
		constexpr auto m_nSize = 0x40; // Integer
	}

	namespace n_CSpatialEntity {
		constexpr auto m_vecOrigin = 0x9d8; // Vector
		constexpr auto m_minFalloff = 0x9e4; // Float
		constexpr auto m_maxFalloff = 0x9e8; // Float
		constexpr auto m_flCurWeight = 0x9ec; // Float
		constexpr auto m_bEnabled = 0xaf4; // Byte
	}

	namespace n_CItemAssaultSuitUseable {
		constexpr auto m_nArmorValue = 0x3450; // Integer
		constexpr auto m_bIsHeavyAssaultSuit = 0x3454; // Byte
	}

	namespace n_CTEFizz {
		constexpr auto m_nEntity = 0x10; // Integer
		constexpr auto m_nModelIndex = 0x14; // Integer
		constexpr auto m_nDensity = 0x18; // Integer
		constexpr auto m_nCurrent = 0x1c; // Integer
	}

	namespace n_CTEDust {
		constexpr auto m_flSize = 0x1c; // Float
		constexpr auto m_flSpeed = 0x20; // Float
		constexpr auto m_vecDirection = 0x24; // Vector
	}

	namespace n_CSun {
		constexpr auto HDRColorScale = 0x0; // Float
		constexpr auto m_clrRender = 0x70; // Integer
		constexpr auto m_clrOverlay = 0xb38; // Integer
		constexpr auto m_nSize = 0xb3c; // Integer
		constexpr auto m_nOverlaySize = 0xb40; // Integer
		constexpr auto m_vDirection = 0xb44; // Vector
		constexpr auto m_bOn = 0xb50; // Byte
		constexpr auto m_nMaterial = 0xb54; // Integer
		constexpr auto m_nOverlayMaterial = 0xb58; // Integer
	}

	namespace n_CDynamicLight {
		constexpr auto m_Flags = 0x9d8; // Byte
		constexpr auto m_LightStyle = 0x9d9; // Byte
		constexpr auto m_Radius = 0x9dc; // Float
		constexpr auto m_Exponent = 0x9e0; // Integer
		constexpr auto m_InnerAngle = 0x9e4; // Float
		constexpr auto m_OuterAngle = 0x9e8; // Float
		constexpr auto m_SpotRadius = 0x9ec; // Float
	}

	namespace n_CBaseDoor {
		constexpr auto m_flWaveHeight = 0xa08; // Float
	}

	namespace n_CBreachChargeProjectile {
		constexpr auto m_bShouldExplode = 0x29e0; // Byte
		constexpr auto m_weaponThatThrewMe = 0x29e4; // Integer
		constexpr auto m_nParentBoneIndex = 0x29e8; // Integer
		constexpr auto m_vecParentBonePos = 0x29ec; // Vector
	}

	namespace n_CFuncConveyor {
		constexpr auto m_flConveyorSpeed = 0x9d8; // Float
	}

	namespace n_CDangerZoneController {
		constexpr auto m_bDangerZoneControllerEnabled = 0x9d8; // Byte
		constexpr auto m_bMissionControlledExplosions = 0x9d9; // Byte
		constexpr auto m_vecEndGameCircleStart = 0x9dc; // Vector
		constexpr auto m_vecEndGameCircleEnd = 0x9e8; // Vector
		constexpr auto m_flStartTime = 0x9f4; // Float
		constexpr auto m_flFinalExpansionTime = 0x9f8; // Float
		constexpr auto m_hTheFinalZone = 0xab8; // Integer
	}

	namespace n_CTEPlayerAnimEvent {
		constexpr auto m_hPlayer = 0x10; // Integer
		constexpr auto m_iEvent = 0x14; // Integer
		constexpr auto m_nData = 0x18; // Integer
	}

	namespace n_CDetailController {
		constexpr auto m_flFadeStartDist = 0x9d8; // Float
		constexpr auto m_flFadeEndDist = 0x9dc; // Float
	}

	namespace n_CEnvWind {
		constexpr auto m_flStartTime = 0x9dc; // Float
		constexpr auto m_iWindSeed = 0x9e0; // Integer
		constexpr auto m_iMinWind = 0x9e4; // Integer
		constexpr auto m_iMaxWind = 0x9e8; // Integer
		constexpr auto m_iMinGust = 0x9f0; // Integer
		constexpr auto m_iMaxGust = 0x9f4; // Integer
		constexpr auto m_flMinGustDelay = 0x9f8; // Float
		constexpr auto m_flMaxGustDelay = 0x9fc; // Float
		constexpr auto m_flGustDuration = 0xa00; // Float
		constexpr auto m_iGustDirChange = 0xa04; // Integer
		constexpr auto m_iInitialWindDir = 0xa44; // Integer
		constexpr auto m_flInitialWindSpeed = 0xa48; // Float
	}

	namespace n_CSporeTrail {
		constexpr auto m_vecEndColor = 0xac0; // Vector
		constexpr auto m_flSpawnRate = 0xacc; // Float
		constexpr auto m_flParticleLifetime = 0xad0; // Float
		constexpr auto m_flStartSize = 0xad4; // Float
		constexpr auto m_flEndSize = 0xad8; // Float
		constexpr auto m_flSpawnRadius = 0xadc; // Float
		constexpr auto m_bEmit = 0xaec; // Byte
	}

	namespace n_CCHostage {
		constexpr auto m_iHealth = 0x100; // Integer
		constexpr auto m_fFlags = 0x104; // Integer
		constexpr auto m_lifeState = 0x25f; // Byte
		constexpr auto m_iMaxHealth = 0x2f28; // Integer
		constexpr auto m_leader = 0x2f30; // Integer
		constexpr auto m_vel = 0x2f34; // Vector
		constexpr auto m_isRescued = 0x2f40; // Integer
		constexpr auto m_jumpedThisFrame = 0x2f41; // Integer
		constexpr auto m_nHostageState = 0x2f44; // Integer
		constexpr auto m_flRescueStartTime = 0x2f48; // Float
		constexpr auto m_flGrabSuccessTime = 0x2f4c; // Float
		constexpr auto m_flDropStartTime = 0x2f50; // Float
	}

	namespace n_CPointCommentaryNode {
		constexpr auto m_bActive = 0x2990; // Byte
		constexpr auto m_flStartTime = 0x2994; // Float
		constexpr auto m_iszCommentaryFile = 0x2998; // String (260)
		constexpr auto m_iszCommentaryFileNoHDR = 0x2a9c; // String (260)
		constexpr auto m_iszSpeakers = 0x2ba0; // String (256)
		constexpr auto m_iNodeNumber = 0x2ca0; // Integer
		constexpr auto m_iNodeNumberMax = 0x2ca4; // Integer
		constexpr auto m_hViewPosition = 0x2cac; // Integer
	}

	namespace n_CPlasma {
		constexpr auto m_flStartScale = 0x9d8; // Float
		constexpr auto m_flScale = 0x9dc; // Float
		constexpr auto m_flScaleTime = 0x9e0; // Float
		constexpr auto m_nFlags = 0x9e4; // Integer
		constexpr auto m_nPlasmaModelIndex = 0x9e8; // Integer
		constexpr auto m_nPlasmaModelIndex2 = 0x9ec; // Integer
		constexpr auto m_nGlowModelIndex = 0x9f0; // Integer
	}

	namespace n_CTEBeamRing {
		constexpr auto m_nStartEntity = 0x4c; // Integer
		constexpr auto m_nEndEntity = 0x50; // Integer
	}

	namespace n_CEconEntity {
		constexpr auto m_iReapplyProvisionParity = 0x2da8; // Integer
		constexpr auto m_hOuter = 0x2dac; // Integer
		constexpr auto m_ProviderType = 0x2db4; // Integer
		constexpr auto m_iItemDefinitionIndex = 0x2fba; // Short
		constexpr auto m_iEntityQuality = 0x2fbc; // Integer
		constexpr auto m_iEntityLevel = 0x2fc0; // Integer
		constexpr auto m_iItemIDHigh = 0x2fd0; // Integer
		constexpr auto m_iItemIDLow = 0x2fd4; // Integer
		constexpr auto m_iAccountID = 0x2fd8; // Integer
		constexpr auto m_bInitialized = 0x2fe4; // Byte
		constexpr auto m_szCustomName = 0x304c; // String (161)
		constexpr auto m_OriginalOwnerXuidLow = 0x31d0; // Integer
		constexpr auto m_OriginalOwnerXuidHigh = 0x31d4; // Integer
		constexpr auto m_nFallbackPaintKit = 0x31d8; // Integer
		constexpr auto m_nFallbackSeed = 0x31dc; // Integer
		constexpr auto m_flFallbackWear = 0x31e0; // Float
		constexpr auto m_nFallbackStatTrak = 0x31e4; // Integer
	}

	namespace n_CWeaponShield {
		constexpr auto m_flDisplayHealth = 0x3400; // Float
	}

	namespace n_CBasePlayer {
		constexpr auto deadflag = 0x4; // Bool
		constexpr auto m_nNextThinkTick = 0xfc; // Unsigned Integer
		constexpr auto m_iHealth = 0x100; // Unsigned Integer
		constexpr auto m_fFlags = 0x104; // Integer
		constexpr auto m_vecViewOffset = 0x108; // Float [0]
		constexpr auto m_vecViewOffset = 0x10c; // Float [1]
		constexpr auto m_vecViewOffset = 0x110; // Float [2]
		constexpr auto m_vecVelocity = 0x114; // Float [0]
		constexpr auto m_vecVelocity = 0x118; // Float [1]
		constexpr auto m_vecVelocity = 0x11c; // Float [2]
		constexpr auto m_vecBaseVelocity = 0x120; // Vector
		constexpr auto m_flFriction = 0x144; // Float
		constexpr auto m_hGroundEntity = 0x150; // Entity Handle
		constexpr auto m_nWaterLevel = 0x25e; // Byte
		constexpr auto m_lifeState = 0x25f; // Byte
		constexpr auto m_iCoachingTeam = 0x2f60; // Integer
		constexpr auto m_flDuckAmount = 0x2fbc; // Float
		constexpr auto m_flDuckSpeed = 0x2fc0; // Float
		constexpr auto m_flFOVRate = 0x3010; // Float
		constexpr auto m_iHideHUD = 0x3014; // Integer
		constexpr auto m_nDuckTimeMsecs = 0x3018; // Integer
		constexpr auto m_nDuckJumpTimeMsecs = 0x301c; // Integer
		constexpr auto m_nJumpTimeMsecs = 0x3020; // Integer
		constexpr auto m_flFallVelocity = 0x3024; // Float
		constexpr auto m_flStepSize = 0x302c; // Float
		constexpr auto m_viewPunchAngle = 0x3030; // Vector
		constexpr auto m_aimPunchAngle = 0x303c; // Vector
		constexpr auto m_aimPunchAngleVel = 0x3048; // Vector
		constexpr auto m_bDucked = 0x3054; // Byte
		constexpr auto m_bDucking = 0x3055; // Byte
		constexpr auto m_flLastDuckTime = 0x3058; // Float
		constexpr auto m_bInDuckJump = 0x305c; // Byte
		constexpr auto m_bDrawViewmodel = 0x305d; // Byte
		constexpr auto m_bWearingSuit = 0x305e; // Byte
		constexpr auto m_bPoisoned = 0x305f; // Byte
		constexpr auto m_bAllowAutoMovement = 0x3060; // Byte
		constexpr auto m_skybox3d.scale = 0x3100; // Integer
		constexpr auto m_skybox3d.origin = 0x3104; // Vector
		constexpr auto m_skybox3d.area = 0x3110; // Integer
		constexpr auto m_skybox3d.fog.dirPrimary = 0x3118; // Vector
		constexpr auto m_skybox3d.fog.colorPrimary = 0x3124; // Integer
		constexpr auto m_skybox3d.fog.colorSecondary = 0x3128; // Integer
		constexpr auto m_skybox3d.fog.start = 0x3134; // Float
		constexpr auto m_skybox3d.fog.end = 0x3138; // Float
		constexpr auto m_skybox3d.fog.maxdensity = 0x3140; // Float
		constexpr auto m_skybox3d.fog.enable = 0x3158; // Byte
		constexpr auto m_skybox3d.fog.blend = 0x3159; // Byte
		constexpr auto m_skybox3d.fog.HDRColorScale = 0x3160; // Float
		constexpr auto m_audio.localSound = 0x3168; // Vector [0]
		constexpr auto m_audio.localSound = 0x3174; // Vector [1]
		constexpr auto m_audio.localSound = 0x3180; // Vector [2]
		constexpr auto m_audio.localSound = 0x318c; // Vector [3]
		constexpr auto m_audio.localSound = 0x3198; // Vector [4]
		constexpr auto m_audio.localSound = 0x31a4; // Vector [5]
		constexpr auto m_audio.localSound = 0x31b0; // Vector [6]
		constexpr auto m_audio.localSound = 0x31bc; // Vector [7]
		constexpr auto m_audio.soundscapeIndex = 0x31c8; // Integer
		constexpr auto m_audio.localBits = 0x31cc; // Integer
		constexpr auto m_audio.entIndex = 0x31d0; // Integer
		constexpr auto m_hTonemapController = 0x31dc; // Integer
		constexpr auto m_iFOV = 0x31f4; // Unsigned Integer
		constexpr auto m_iFOVStart = 0x31f8; // Unsigned Integer
		constexpr auto m_afButtonLast = 0x31fc; // Unsigned Integer
		constexpr auto m_afButtonPressed = 0x3200; // Unsigned Integer
		constexpr auto m_afButtonReleased = 0x3204; // Unsigned Integer
		constexpr auto m_nButtons = 0x3208; // Unsigned Integer
		constexpr auto m_nImpulse = 0x320c; // Unsigned Integer
		constexpr auto m_ladderSurfaceProps = 0x3210; // Unsigned Integer
		constexpr auto m_flPhysics = 0x3214; // Unsigned Integer
		constexpr auto m_flFOVTime = 0x3218; // Float
		constexpr auto m_flWaterJumpTime = 0x321c; // Float
		constexpr auto m_flSwimSoundTime = 0x3220; // Float
		constexpr auto m_ignoreLadderJumpTime = 0x3224; // Float
		constexpr auto m_bHasWalkMovedSinceLastJump = 0x3228; // Bool
		constexpr auto m_flStepSoundTime = 0x322c; // Float
		constexpr auto m_surfaceFriction = 0x323c; // Float
		constexpr auto m_vecLadderNormal = 0x3240; // Vector
		constexpr auto m_iBonusProgress = 0x3250; // Unsigned Integer
		constexpr auto m_iBonusChallenge = 0x3254; // Unsigned Integer
		constexpr auto m_flMaxspeed = 0x3258; // Float
		constexpr auto m_hZoomOwner = 0x325c; // Entity Handle
		constexpr auto m_vphysicsCollisionState = 0x326c; // Unsigned Integer
		constexpr auto m_oldOrigin = 0x3270; // Vector
		constexpr auto m_bTouchedPhysObject = 0x327c; // Bool
		constexpr auto m_bPhysicsWasFrozen = 0x327d; // Bool
		constexpr auto m_vNewVPhysicsPosition = 0x3280; // Vector
		constexpr auto m_vNewVPhysicsVelocity = 0x328c; // Vector
		constexpr auto m_afPhysicsFlags = 0x32fc; // Unsigned Integer
		constexpr auto m_hVehicle = 0x3300; // Entity Handle
		constexpr auto m_hLastWeapon = 0x3304; // Entity Handle
		constexpr auto m_hViewModel = 0x3308; // Entity Handle
		constexpr auto m_fOnTarget = 0x3334; // Bool
		constexpr auto m_hUseEntity = 0x3338; // Integer
		constexpr auto m_iDefaultFOV = 0x333c; // Integer
		constexpr auto m_hViewEntity = 0x334c; // Integer
		constexpr auto m_bShouldDrawPlayerWhileUsingViewEntity = 0x3350; // Byte
		constexpr auto m_hConstraintEntity = 0x3354; // Integer
		constexpr auto m_vecConstraintCenter = 0x3358; // Vector
		constexpr auto m_flConstraintRadius = 0x3364; // Float
		constexpr auto m_flConstraintWidth = 0x3368; // Float
		constexpr auto m_flConstraintSpeedFactor = 0x336c; // Float
		constexpr auto m_bConstraintPastRadius = 0x3370; // Byte
		constexpr auto m_iDeathPostEffect = 0x3384; // Integer
		constexpr auto m_iObserverMode = 0x3388; // Integer
		constexpr auto m_bActiveCameraMan = 0x338c; // Byte
		constexpr auto m_bCameraManXRay = 0x338d; // Byte
		constexpr auto m_bCameraManOverview = 0x338e; // Byte
		constexpr auto m_bCameraManScoreBoard = 0x338f; // Byte
		constexpr auto m_uCameraManGraphs = 0x3390; // Byte
		constexpr auto m_hObserverTarget = 0x339c; // Integer
		constexpr auto m_flDeathTime = 0x33d4; // Float
		constexpr auto m_flNextDecalTime = 0x33d8; // Float
		constexpr auto m_fForceTeam = 0x33dc; // Float
		constexpr auto m_nTickBase = 0x3440; // Unsigned Integer
		constexpr auto m_flLaggedMovementValue = 0x35a4; // Float
		constexpr auto m_vecPreviouslyPredictedOrigin = 0x35b8; // Vector
		constexpr auto m_szLastPlaceName = 0x35c4; // String (18)
		constexpr auto m_ubEFNoInterpParity = 0x35e8; // Byte
		constexpr auto m_hPostProcessCtrl = 0x37b8; // Integer
		constexpr auto m_hColorCorrectionCtrl = 0x37bc; // Integer
		constexpr auto m_PlayerFog.m_hCtrl = 0x37c4; // Integer
	}

	namespace n_CBaseFlex {
		constexpr auto m_viewtarget = 0x2a00; // Vector
		constexpr auto m_blinktoggle = 0x2be4; // Integer
	}

	namespace n_CSunlightShadowControl {
		constexpr auto m_shadowDirection = 0x9d8; // Vector
		constexpr auto m_bEnabled = 0x9e4; // Byte
		constexpr auto m_TextureName = 0x9e5; // String (260)
		constexpr auto m_LightColor = 0xaf0; // Integer
		constexpr auto m_flColorTransitionTime = 0xb04; // Float
		constexpr auto m_flSunDistance = 0xb08; // Float
		constexpr auto m_flFOV = 0xb0c; // Float
		constexpr auto m_flNearZ = 0xb10; // Float
		constexpr auto m_flNorthOffset = 0xb14; // Float
		constexpr auto m_bEnableShadows = 0xb18; // Byte
	}

	namespace n_CShadowControl {
		constexpr auto m_shadowDirection = 0x9d8; // Vector
		constexpr auto m_shadowColor = 0x9e4; // Integer
		constexpr auto m_flShadowMaxDist = 0x9e8; // Float
		constexpr auto m_bDisableShadows = 0x9ec; // Byte
		constexpr auto m_bEnableLocalLightShadows = 0x9ed; // Byte
	}

	namespace n_CBaseCombatWeapon {
		constexpr auto m_nNextThinkTick = 0xfc; // Unsigned Integer
		constexpr auto m_hOwner = 0x3240; // Entity Handle
		constexpr auto m_nViewModelIndex = 0x3244; // Unsigned Integer
		constexpr auto m_flNextPrimaryAttack = 0x3248; // Float
		constexpr auto m_flNextSecondaryAttack = 0x324c; // Float
		constexpr auto m_iViewModelIndex = 0x3250; // Unsigned Integer
		constexpr auto m_iWorldModelIndex = 0x3254; // Unsigned Integer
		constexpr auto m_iWorldDroppedModelIndex = 0x3258; // Unsigned Integer
		constexpr auto m_iWeaponModule = 0x325c; // Unsigned Integer
		constexpr auto m_iNumEmptyAttacks = 0x3260; // Unsigned Integer
		constexpr auto m_hWeaponWorldModel = 0x3264; // Integer
		constexpr auto m_iState = 0x3268; // Unsigned Integer
		constexpr auto m_iPrimaryAmmoType = 0x326c; // Unsigned Integer
		constexpr auto m_iSecondaryAmmoType = 0x3270; // Unsigned Integer
		constexpr auto m_iClip1 = 0x3274; // Unsigned Integer
		constexpr auto m_iClip2 = 0x3278; // Unsigned Integer
		constexpr auto m_iPrimaryReserveAmmoCount = 0x327c; // Unsigned Integer
		constexpr auto m_iSecondaryReserveAmmoCount = 0x3280; // Unsigned Integer
		constexpr auto m_flTimeWeaponIdle = 0x3284; // Float
		constexpr auto m_flNextEmptySoundTime = 0x3288; // Float
		constexpr auto m_fMinRange1 = 0x328c; // Float
		constexpr auto m_fMinRange2 = 0x3290; // Float
		constexpr auto m_fMaxRange1 = 0x3294; // Float
		constexpr auto m_fMaxRange2 = 0x3298; // Float
		constexpr auto m_fFireDuration = 0x329c; // Float
		constexpr auto m_Activity = 0x32a4; // Unsigned Integer
		constexpr auto m_iPrimaryAmmoCount = 0x32a8; // Unsigned Integer
		constexpr auto m_iSecondaryAmmoCount = 0x32ac; // Unsigned Integer
		constexpr auto m_iszName = 0x32b0; // Unsigned Integer
		constexpr auto m_bRemoveable = 0x32b4; // Bool
		constexpr auto m_bInReload = 0x32b5; // Bool
		constexpr auto m_bFireOnEmpty = 0x32b6; // Bool
		constexpr auto m_bFiresUnderwater = 0x32b7; // Bool
		constexpr auto m_bAltFiresUnderwater = 0x32b8; // Bool
		constexpr auto m_bReloadsSingly = 0x32b9; // Bool
		constexpr auto m_bFlipViewModel = 0x32d4; // Byte
		constexpr auto m_iWeaponOrigin = 0x32d8; // Integer
	}

	namespace n_CPropVehicleChoreoGeneric {
		constexpr auto m_hPlayer = 0x2a04; // Integer
		constexpr auto m_bEnterAnimOn = 0x2a0c; // Byte
		constexpr auto m_bExitAnimOn = 0x2a0d; // Byte
		constexpr auto m_vecEyeExitEndpoint = 0x2a10; // Vector
		constexpr auto m_bForceEyesToAttachment = 0x2a1c; // Byte
		constexpr auto m_vehicleView.bClampEyeAngles = 0x2aa0; // Byte
		constexpr auto m_vehicleView.flPitchCurveZero = 0x2aa4; // Float
		constexpr auto m_vehicleView.flPitchCurveLinear = 0x2aa8; // Float
		constexpr auto m_vehicleView.flRollCurveZero = 0x2aac; // Float
		constexpr auto m_vehicleView.flRollCurveLinear = 0x2ab0; // Float
		constexpr auto m_vehicleView.flFOV = 0x2ab4; // Float
		constexpr auto m_vehicleView.flYawMin = 0x2ab8; // Float
		constexpr auto m_vehicleView.flYawMax = 0x2abc; // Float
		constexpr auto m_vehicleView.flPitchMin = 0x2ac0; // Float
		constexpr auto m_vehicleView.flPitchMax = 0x2ac4; // Float
	}

	namespace n_CSporeExplosion {
		constexpr auto m_flSpawnRate = 0xac4; // Float
		constexpr auto m_flParticleLifetime = 0xac8; // Float
		constexpr auto m_flStartSize = 0xacc; // Float
		constexpr auto m_flEndSize = 0xad0; // Float
		constexpr auto m_flSpawnRadius = 0xad4; // Float
		constexpr auto m_bEmit = 0xadc; // Byte
		constexpr auto m_bDontRemove = 0xadd; // Byte
	}

	namespace n_CFEPlayerDecal {
		constexpr auto m_nUniqueID = 0x9d8; // Integer
		constexpr auto m_unAccountID = 0x9dc; // Integer
		constexpr auto m_unTraceID = 0x9e0; // Integer
		constexpr auto m_rtGcTime = 0x9e4; // Integer
		constexpr auto m_vecEndPos = 0x9e8; // Vector
		constexpr auto m_vecStart = 0x9f4; // Vector
		constexpr auto m_vecRight = 0xa00; // Vector
		constexpr auto m_vecNormal = 0xa0c; // Vector
		constexpr auto m_nPlayer = 0xa18; // Integer
		constexpr auto m_nEntity = 0xa1c; // Integer
		constexpr auto m_nHitbox = 0xa20; // Integer
		constexpr auto m_nTintID = 0xa24; // Integer
		constexpr auto m_flCreationTime = 0xa28; // Float
		constexpr auto m_nVersion = 0xa2c; // Byte
	}

	namespace n_CRopeKeyframe {
		constexpr auto m_vecOrigin = 0x138; // Vector
		constexpr auto moveparent = 0x148; // Integer
		constexpr auto m_iParentAttachment = 0x2ec; // Byte
		constexpr auto m_nMinCPULevel = 0x988; // Byte
		constexpr auto m_nMaxCPULevel = 0x989; // Byte
		constexpr auto m_nMinGPULevel = 0x98a; // Byte
		constexpr auto m_nMaxGPULevel = 0x98b; // Byte
		constexpr auto m_flScrollSpeed = 0xa0c; // Float
		constexpr auto m_RopeFlags = 0xa10; // Integer
		constexpr auto m_iRopeMaterialModelIndex = 0xa14; // Integer
		constexpr auto m_iDefaultRopeMaterialModelIndex = 0xa18; // Integer
		constexpr auto m_nSegments = 0xca8; // Integer
		constexpr auto m_hStartPoint = 0xcac; // Integer
		constexpr auto m_hEndPoint = 0xcb0; // Integer
		constexpr auto m_iStartAttachment = 0xcb4; // Short
		constexpr auto m_iEndAttachment = 0xcb6; // Short
		constexpr auto m_Subdiv = 0xcb8; // Integer
		constexpr auto m_RopeLength = 0xcbc; // Integer
		constexpr auto m_Slack = 0xcc0; // Integer
		constexpr auto m_TextureScale = 0xcc4; // Float
		constexpr auto m_fLockedPoints = 0xcc8; // Integer
		constexpr auto m_nChangeCount = 0xccc; // Integer
		constexpr auto m_Width = 0xcd0; // Float
		constexpr auto m_bConstrainBetweenEndpoints = 0xd50; // Byte
	}

	namespace n_CDronegun {
		constexpr auto m_iHealth = 0x100; // Integer
		constexpr auto m_vecAttentionTarget = 0x2990; // Vector
		constexpr auto m_vecTargetOffset = 0x299c; // Vector
		constexpr auto m_bHasTarget = 0x29a8; // Byte
	}

	namespace n_CPlayerPing {
		constexpr auto m_hPlayer = 0x9e4; // Integer
		constexpr auto m_hPingedEntity = 0x9e8; // Integer
		constexpr auto m_iType = 0x9ec; // Integer
		constexpr auto m_bUrgent = 0x9f4; // Byte
		constexpr auto m_szPlaceName = 0x9f5; // String (18)
	}

	namespace n_CBaseWeaponWorldModel {
		constexpr auto m_fEffects = 0xf0; // Unsigned Integer
		constexpr auto moveparent = 0x148; // Integer
		constexpr auto m_nModelIndex = 0x258; // Short
		constexpr auto m_nBody = 0xa20; // Unsigned Integer
		constexpr auto m_hCombatWeaponParent = 0x2a00; // Entity Handle
	}

	namespace n_CTEWorldDecal {
		constexpr auto m_vecOrigin = 0x10; // Vector
		constexpr auto m_nIndex = 0x1c; // Integer
	}

	namespace n_CSmokeTrail {
		constexpr auto m_SpawnRate = 0xac4; // Float
		constexpr auto m_StartColor = 0xac8; // Vector
		constexpr auto m_EndColor = 0xad4; // Vector
		constexpr auto m_Opacity = 0xae0; // Float
		constexpr auto m_ParticleLifetime = 0xae4; // Float
		constexpr auto m_StopEmitTime = 0xae8; // Float
		constexpr auto m_MinSpeed = 0xaec; // Float
		constexpr auto m_MaxSpeed = 0xaf0; // Float
		constexpr auto m_MinDirectedSpeed = 0xaf4; // Float
		constexpr auto m_MaxDirectedSpeed = 0xaf8; // Float
		constexpr auto m_StartSize = 0xafc; // Float
		constexpr auto m_EndSize = 0xb00; // Float
		constexpr auto m_SpawnRadius = 0xb04; // Float
		constexpr auto m_bEmit = 0xb14; // Byte
		constexpr auto m_nAttachment = 0xb18; // Integer
	}

	namespace n_CTEParticleSystem {
		constexpr auto m_vecOrigin = 0x10; // Float [0]
		constexpr auto m_vecOrigin = 0x14; // Float [1]
		constexpr auto m_vecOrigin = 0x18; // Float [2]
	}

	namespace n_CFireTrail {
		constexpr auto m_nAttachment = 0xac4; // Integer
		constexpr auto m_flLifetime = 0xac8; // Float
	}

	namespace n_CParticleFire {
		constexpr auto m_vOrigin = 0xacc; // Vector
		constexpr auto m_vDirection = 0xad8; // Vector
	}

	namespace n_CEmbers {
		constexpr auto m_nDensity = 0x9d8; // Integer
		constexpr auto m_nLifetime = 0x9dc; // Integer
		constexpr auto m_nSpeed = 0x9e0; // Integer
		constexpr auto m_bEmit = 0x9e4; // Byte
	}

	namespace n_CItemDogtags {
		constexpr auto m_OwningPlayer = 0x3450; // Integer
		constexpr auto m_KillingPlayer = 0x3454; // Integer
	}

	namespace n_CSlideshowDisplay {
		constexpr auto m_bEnabled = 0x9d8; // Byte
		constexpr auto m_szDisplayText = 0x9d9; // String (128)
		constexpr auto m_szSlideshowDirectory = 0xa59; // String (128)
		constexpr auto m_fMinSlideTime = 0xb08; // Float
		constexpr auto m_fMaxSlideTime = 0xb0c; // Float
		constexpr auto m_iCycleType = 0xb14; // Integer
		constexpr auto m_bNoListRepeats = 0xb18; // Byte
	}

	namespace n_CRagdollManager {
		constexpr auto m_iCurrentMaxRagdollCount = 0x9d8; // Integer
	}

	namespace n_CFuncMoveLinear {
		constexpr auto m_fFlags = 0x104; // Integer
		constexpr auto m_vecVelocity = 0x114; // Vector
	}

	namespace n_CFuncAreaPortalWindow {
		constexpr auto m_flFadeStartDist = 0x9d8; // Float
		constexpr auto m_flFadeDist = 0x9dc; // Float
		constexpr auto m_flTranslucencyLimit = 0x9e0; // Float
		constexpr auto m_iBackgroundModelIndex = 0x9e4; // Integer
	}

	namespace n_CEnvScreenOverlay {
		constexpr auto m_iszOverlayNames = 0x0; // Array
		constexpr auto m_iszOverlayNames = 0x9d8; // String (255) [0]
		constexpr auto m_flOverlayTimes = 0x13d0; // Float [0]
		constexpr auto m_flStartTime = 0x13f8; // Float
		constexpr auto m_iDesiredOverlay = 0x13fc; // Integer
		constexpr auto m_bIsActive = 0x1400; // Byte
	}

	namespace n_CProp_Hallucination {
		constexpr auto m_bEnabled = 0x29a9; // Byte
		constexpr auto m_fVisibleTime = 0x29ac; // Float
		constexpr auto m_fRechargeTime = 0x29b0; // Float
	}

	namespace n_CFogController {
		constexpr auto m_fog.dirPrimary = 0x9dc; // Vector
		constexpr auto m_fog.colorPrimary = 0x9e8; // Integer
		constexpr auto m_fog.colorSecondary = 0x9ec; // Integer
		constexpr auto m_fog.colorPrimaryLerpTo = 0x9f0; // Integer
		constexpr auto m_fog.colorSecondaryLerpTo = 0x9f4; // Integer
		constexpr auto m_fog.start = 0x9f8; // Float
		constexpr auto m_fog.end = 0x9fc; // Float
		constexpr auto m_fog.farz = 0xa00; // Float
		constexpr auto m_fog.maxdensity = 0xa04; // Float
		constexpr auto m_fog.startLerpTo = 0xa08; // Float
		constexpr auto m_fog.endLerpTo = 0xa0c; // Float
		constexpr auto m_fog.maxdensityLerpTo = 0xa10; // Float
		constexpr auto m_fog.lerptime = 0xa14; // Float
		constexpr auto m_fog.duration = 0xa18; // Float
		constexpr auto m_fog.enable = 0xa1c; // Byte
		constexpr auto m_fog.blend = 0xa1d; // Byte
		constexpr auto m_fog.ZoomFogScale = 0xa20; // Float
		constexpr auto m_fog.HDRColorScale = 0xa24; // Float
	}

	namespace n_CEntityParticleTrail {
		constexpr auto m_iMaterialName = 0xac0; // Integer
		constexpr auto m_flLifetime = 0xacc; // Float
		constexpr auto m_flStartSize = 0xad0; // Float
		constexpr auto m_flEndSize = 0xad4; // Float
		constexpr auto m_hConstraintEntity = 0xad8; // Integer
	}

	namespace n_CEntityFreezing {
		constexpr auto m_vFreezingOrigin = 0x9d8; // Vector
		constexpr auto m_flFrozen = 0xaac; // Float
		constexpr auto m_bFinishFreezing = 0xab0; // Byte
	}

	namespace n_CEnvGasCanister {
		constexpr auto m_vecOrigin = 0x138; // Vector2D
		constexpr auto m_vecOrigin = 0x140; // Float [2]
		constexpr auto m_bLanded = 0x2990; // Byte
		constexpr auto m_hSkyboxCopy = 0x29b8; // Integer
		constexpr auto m_vecImpactPosition = 0x29c4; // Vector
		constexpr auto m_vecStartPosition = 0x29d0; // Vector
		constexpr auto m_vecEnterWorldPosition = 0x29dc; // Vector
		constexpr auto m_vecDirection = 0x29e8; // Vector
		constexpr auto m_vecStartAngles = 0x29f4; // Vector
		constexpr auto m_flFlightTime = 0x2a00; // Float
		constexpr auto m_flFlightSpeed = 0x2a04; // Float
		constexpr auto m_flLaunchTime = 0x2a08; // Float
		constexpr auto m_flInitialZSpeed = 0x2a0c; // Float
		constexpr auto m_flZAcceleration = 0x2a10; // Float
		constexpr auto m_flHorizSpeed = 0x2a14; // Float
		constexpr auto m_bLaunchedFromWithinWorld = 0x2a18; // Byte
		constexpr auto m_vecParabolaDirection = 0x2a1c; // Vector
		constexpr auto m_flWorldEnterTime = 0x2a28; // Float
		constexpr auto m_vecSkyboxOrigin = 0x2a2c; // Vector
		constexpr auto m_flSkyboxScale = 0x2a38; // Float
		constexpr auto m_bInSkybox = 0x2a3c; // Byte
		constexpr auto m_bDoImpactEffects = 0x2a3d; // Byte
		constexpr auto m_nMyZoneIndex = 0x2a40; // Integer
	}

	namespace n_CSpriteTrail {
		constexpr auto m_flLifeTime = 0x1074; // Float
		constexpr auto m_flStartWidth = 0x1078; // Float
		constexpr auto m_flEndWidth = 0x107c; // Float
		constexpr auto m_flStartWidthVariance = 0x1080; // Float
		constexpr auto m_flTextureRes = 0x1084; // Float
		constexpr auto m_flMinFadeLength = 0x1088; // Float
		constexpr auto m_vecSkyboxOrigin = 0x108c; // Vector
		constexpr auto m_flSkyboxScale = 0x1098; // Float
	}

	namespace n_CBreakableProp {
		constexpr auto m_qPreferredPlayerCarryAngles = 0x2994; // Vector
		constexpr auto m_bClientPhysics = 0x29a0; // Byte
	}

	namespace n_CHandleTest {
		constexpr auto m_Handle = 0x9d8; // Integer
		constexpr auto m_bSendHandle = 0x9dc; // Byte
	}

	namespace n_CTESparks {
		constexpr auto m_nMagnitude = 0x1c; // Integer
		constexpr auto m_nTrailLength = 0x20; // Integer
		constexpr auto m_vecDir = 0x24; // Vector
	}

	namespace n_CCSPlayerResource {
		constexpr auto m_iPlayerC4 = 0x165c; // Integer
		constexpr auto m_iPlayerVIP = 0x1660; // Integer
		constexpr auto m_bombsiteCenterA = 0x1664; // Vector
		constexpr auto m_bombsiteCenterB = 0x1670; // Vector
		constexpr auto m_bEndMatchNextMapAllVoted = 0x6b8c; // Byte
	}

	namespace n_CBoneFollower {
		constexpr auto m_modelIndex = 0x9d8; // Integer
		constexpr auto m_solidIndex = 0x9dc; // Integer
	}

	namespace n_CWeaponM3 {
		constexpr auto m_reloadState = 0x33e4; // Unsigned Integer
	}

}