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
}

struct CPlayerResource {
	String (260) m_szName; // 0x9e0
	Bool m_bConnected; // 0xae4
	Unsigned Integer m_iPing; // 0xb28
	Unsigned Integer m_iKills; // 0xc2c
	Unsigned Integer m_iAssists; // 0xd30
	Unsigned Integer m_iDeaths; // 0xe34
	Unsigned Integer m_iTeam; // 0xf38
	Unsigned Integer m_iPendingTeam; // 0x103c
	Bool m_bAlive; // 0x1140
	Unsigned Integer m_iHealth; // 0x1184
	Unsigned Integer m_iCoachingTeam; // 0x1288
};

struct CTeamplayRoundBasedRulesProxy {
	Integer m_iRoundState; // 0x28
	Byte m_bInOvertime; // 0x2c
	Byte m_bInSetup; // 0x2d
	Byte m_bSwitchedTeamsThisRound; // 0x2e
	Integer m_iWinningTeam; // 0x30
	Byte m_bInWaitingForPlayers; // 0x38
	Byte m_bAwaitingReadyRestart; // 0x39
	Float m_flRestartRoundTime; // 0x3c
	Float m_flMapResetTime; // 0x40
	Byte m_bStopWatch; // 0xe4
};

struct CTEFootprintDecal {
	Vector m_vecOrigin; // 0x10
	Vector m_vecDirection; // 0x1c
	Integer m_nEntity; // 0x34
	Integer m_nIndex; // 0x38
	Byte m_chMaterialType; // 0x3c
};

struct CPointCamera {
	Float m_FOV; // 0x9d8
	Float m_Resolution; // 0x9dc
	Byte m_bFogEnable; // 0x9e0
	Integer m_FogColor; // 0x9e1
	Float m_flFogStart; // 0x9e8
	Float m_flFogEnd; // 0x9ec
	Float m_flFogMaxDensity; // 0x9f0
	Byte m_bActive; // 0x9f4
	Byte m_bUseScreenAspectRatio; // 0x9f5
};

struct CSpotlightEnd {
	Float m_flLightScale; // 0x9d8
	Float m_Radius; // 0x9dc
};

struct CSmokeGrenadeProjectile {
	Integer m_nSmokeEffectTickBegin; // 0x2a20
	Byte m_bDidSmokeEffect; // 0x2a24
};

struct CEnvProjectedTexture {
	Integer m_hTargetEntity; // 0x9dc
	Byte m_bState; // 0x9e0
	Byte m_bAlwaysUpdate; // 0x9e1
	Float m_flLightFOV; // 0x9e4
	Byte m_bEnableShadows; // 0x9e8
	Byte m_bSimpleProjection; // 0x9e9
	Byte m_bLightOnlyTarget; // 0x9ea
	Byte m_bLightWorld; // 0x9eb
	Byte m_bCameraSpace; // 0x9ec
	Float m_flBrightnessScale; // 0x9f0
	Integer m_LightColor; // 0x9f4
	Float m_flColorTransitionTime; // 0xa08
	Float m_flAmbient; // 0xa0c
	Float m_flNearZ; // 0xa10
	Float m_flFarZ; // 0xa14
	String (260) m_SpotlightTextureName; // 0xa18
	Integer m_nSpotlightTextureFrame; // 0xb24
	Integer m_nShadowQuality; // 0xb28
	Integer m_iStyle; // 0xb2c
	Float m_flProjectionSize; // 0xb38
	Float m_flRotation; // 0xb3c
};

struct CTEBubbleTrail {
	Vector m_vecMins; // 0x10
	Vector m_vecMaxs; // 0x1c
	Float m_flWaterZ; // 0x28
	Integer m_nModelIndex; // 0x2c
	Integer m_nCount; // 0x30
	Float m_fSpeed; // 0x34
};

struct CSurvivalSpawnChopper {
	Vector2D m_vecOrigin; // 0x138
	Float m_vecOrigin[2]; // 0x140
};

struct CInfoMapRegion {
	Float m_flRadius; // 0x9d8
	String (128) m_szLocToken; // 0x9dc
};

struct CTELargeFunnel {
	Integer m_nModelIndex; // 0x1c
	Integer m_nReversed; // 0x20
};

struct CFootstepControl {
	String (16) m_source; // 0xa10
	String (16) m_destination; // 0xa20
};

struct CPropCounter {
	Float m_flDisplayValue; // 0x2990
};

struct CWorld {
	Float m_flWaveHeight; // 0x9d8
	Vector m_WorldMins; // 0x9dc
	Vector m_WorldMaxs; // 0x9e8
	Byte m_bStartDark; // 0x9f4
	Float m_flMaxOccludeeArea; // 0x9f8
	Float m_flMinOccluderArea; // 0x9fc
	Float m_flMinPropScreenSpaceWidth; // 0xa00
	Float m_flMaxPropScreenSpaceWidth; // 0xa04
	Byte m_bColdWorld; // 0xa08
	Integer m_iTimeOfDay; // 0xa0c
	String (256) m_iszDetailSpriteMaterial; // 0xa10
};

struct CSceneEntity {
	Byte m_bIsPlayingBack; // 0x9dc
	Byte m_bPaused; // 0x9dd
	Byte m_bMultiplayer; // 0x9de
	Float m_flForceClientTime; // 0x9e4
	Integer m_nSceneStringIndex; // 0x9e8
};

struct CCascadeLight {
	Vector m_shadowDirection; // 0x9d8
	Vector m_envLightShadowDirection; // 0x9e4
	Byte m_bEnabled; // 0x9f0
	Byte m_bUseLightEnvAngles; // 0x9f1
	Integer m_LightColor; // 0x9f2
	Integer m_LightColorScale; // 0x9f8
	Float m_flMaxShadowDist; // 0x9fc
};

struct CBaseButton {
	Byte m_usable; // 0xa08
};

struct CTEBloodStream {
	Vector m_vecDirection; // 0x1c
	Integer r; // 0x28
	Integer g; // 0x2c
	Integer b; // 0x30
	Integer a; // 0x34
	Integer m_nAmount; // 0x38
};

struct CTEDecal {
	Vector m_vecOrigin; // 0x10
	Vector m_vecStart; // 0x1c
	Integer m_nEntity; // 0x28
	Integer m_nHitbox; // 0x2c
	Integer m_nIndex; // 0x30
};

struct CTEBeamRingPoint {
	Vector m_vecCenter; // 0x4c
	Float m_flStartRadius; // 0x58
	Float m_flEndRadius; // 0x5c
};

struct CRagdoll {
	Array m_ragAngles; // 0x0
	Vector m_ragPos[0]; // 0x2990
	Vector m_ragAngles[0]; // 0x2ab0
	Integer m_hUnragdoll; // 0x2c8c
	Float m_flBlendWeight; // 0x2c90
	Integer m_nOverlaySequence; // 0x2c98
};

struct CWeaponSawedoff {
	Unsigned Integer m_reloadState; // 0x33e4
};

struct CPointWorldText {
	String (260) m_szText; // 0xa08
	Float m_flTextSize; // 0xb0c
	Integer m_textColor; // 0xb10
};

struct CTEKillPlayerAttachments {
	Integer m_nPlayer; // 0x10
};

struct CEntityFlame {
	Integer m_hEntAttached; // 0x9d8
	Byte m_bCheapEffect; // 0x9ec
};

struct CFuncOccluder {
	Integer m_nOccluderIndex; // 0x9d8
	Byte m_bActive; // 0x9dc
};

struct CTESmoke {
	Vector m_vecOrigin; // 0x10
	Integer m_nModelIndex; // 0x1c
	Float m_fScale; // 0x20
	Integer m_nFrameRate; // 0x24
};

struct CMapVetoPickController {
	Integer m_nDraftType; // 0x9e8
	Integer m_nTeamWinningCoinToss; // 0x9ec
	Integer m_nCurrentPhase; // 0x130c
	Integer m_nPhaseStartTick; // 0x1310
	Integer m_nPhaseDurationTicks; // 0x1314
};

struct CEnvDOFController {
	Byte m_bDOFEnabled; // 0x9d8
	Float m_flNearBlurDepth; // 0x9dc
	Float m_flNearFocusDepth; // 0x9e0
	Float m_flFarFocusDepth; // 0x9e4
	Float m_flFarBlurDepth; // 0x9e8
	Float m_flNearBlurRadius; // 0x9ec
	Float m_flFarBlurRadius; // 0x9f0
};

struct CWeaponTaser {
	Float m_fFireTime; // 0x3400
};

struct CWeaponNOVA {
	Unsigned Integer m_reloadState; // 0x33e4
};

struct CTESprite {
	Vector m_vecOrigin; // 0x10
	Integer m_nModelIndex; // 0x1c
	Float m_fScale; // 0x20
	Integer m_nBrightness; // 0x24
};

struct CDangerZone {
	Vector m_vecDangerZoneOriginStartedAt; // 0x9d8
	Float m_flBombLaunchTime; // 0x9e4
	Float m_flExtraRadius; // 0x9e8
	Float m_flExtraRadiusStartTime; // 0x9ec
	Float m_flExtraRadiusTotalLerpTime; // 0x9f0
	Integer m_nDropOrder; // 0x9f4
	Integer m_iWave; // 0x9f8
};

struct CTEBeamFollow {
	Integer m_iEntIndex; // 0x4c
};

struct CTEBubbles {
	Vector m_vecMins; // 0x10
	Vector m_vecMaxs; // 0x1c
	Float m_fHeight; // 0x28
	Integer m_nModelIndex; // 0x2c
	Integer m_nCount; // 0x30
	Float m_fSpeed; // 0x34
};

struct CParticleSystem {
	Integer m_fEffects; // 0xf0
	Vector m_angRotation; // 0x12c
	Vector m_vecOrigin; // 0x138
	Integer moveparent; // 0x148
	Integer m_hOwnerEntity; // 0x14c
	Byte m_iParentAttachment; // 0x2ec
	Integer m_iEffectIndex; // 0x9d8
	Integer m_nStopType; // 0x9dc
	Byte m_bActive; // 0x9e0
	Float m_flStartTime; // 0x9e4
	String (260) m_szSnapshotFileName; // 0x9e8
};

struct CBaseCombatCharacter {
	Float m_flNextAttack; // 0x2d80
	Integer m_LastHitGroup; // 0x2d84
	Unsigned Integer m_iAmmo; // 0x2d88
	Entity Handle m_hMyWeapons; // 0x2e08
	Entity Handle m_hActiveWeapon; // 0x2f08
	Float m_flTimeOfLastInjury; // 0x2f0c
	Integer m_nRelativeDirectionOfLastInjury; // 0x2f10
};

struct CTEProjectedDecal {
	Vector m_vecOrigin; // 0x10
	Vector m_angRotation; // 0x1c
	Float m_flDistance; // 0x28
	Integer m_nIndex; // 0x2c
};

struct CPhysicsProp {
	Integer m_spawnflags; // 0x2c8
	Byte m_bAwake; // 0x29b0
};

struct CTERadioIcon {
	Integer m_iAttachToClient; // 0x10
};

struct CGrassBurn {
	Float m_flGrassBurnClearTime; // 0x9d8
};

struct CVGuiScreen {
	Float m_flWidth; // 0x9e0
	Float m_flHeight; // 0x9e4
	Integer m_nPanelName; // 0x9e8
	Integer m_nAttachmentIndex; // 0xa04
	Integer m_nOverlayMaterial; // 0xa08
	Integer m_fScreenFlags; // 0xa0c
	Integer m_hPlayerOwner; // 0xa68
};

struct CTesla {
	String (64) m_SoundName; // 0xa00
	String (256) m_iszSpriteName; // 0xa40
};

struct CFuncLadder {
	Vector m_vecLadderDir; // 0x9d8
	Vector m_vecPlayerMountPositionTop; // 0x9f8
	Vector m_vecPlayerMountPositionBottom; // 0xa04
	Byte m_bFakeLadder; // 0xa11
};

struct CTEBSPDecal {
	Vector m_vecOrigin; // 0x10
	Integer m_nEntity; // 0x1c
	Integer m_nIndex; // 0x20
};

struct CBaseTrigger {
	Integer m_spawnflags; // 0x2c8
	Byte m_bClientSidePredicted; // 0xa08
};

struct CBaseBeam {
	Integer m_nModelIndex; // 0x10
	Integer m_nHaloIndex; // 0x14
	Integer m_nStartFrame; // 0x18
	Integer m_nFrameRate; // 0x1c
	Float m_fLife; // 0x20
	Float m_fWidth; // 0x24
	Float m_fEndWidth; // 0x28
	Integer m_nFadeLength; // 0x2c
	Float m_fAmplitude; // 0x30
	Integer r; // 0x34
	Integer g; // 0x38
	Integer b; // 0x3c
	Integer a; // 0x40
	Integer m_nSpeed; // 0x44
	Integer m_nFlags; // 0x48
};

struct CCSPlayer {
	Vector2D m_vecOrigin; // 0x138
	Vector2D m_vecOrigin; // 0x138
	Float m_vecOrigin[2]; // 0x140
	Float m_vecOrigin[2]; // 0x140
	Float m_flCycle; // 0xa14
	Bool m_bIsScoped; // 0x9974
	Bool m_bIsWalking; // 0x9975
	Bool m_bResumeZoom; // 0x9976
	Integer m_iPlayerState; // 0x9978
	Byte m_bIsDefusing; // 0x997c
	Byte m_bIsGrabbingHostage; // 0x997d
	Integer m_iBlockingUseActionInProgress; // 0x9980
	Byte m_bIsRescuing; // 0x9984
	Float m_fImmuneToGunGameDamageTime; // 0x9988
	Byte m_bGunGameImmunity; // 0x9990
	Byte m_bHasMovedSinceSpawn; // 0x9991
	Byte m_bMadeFinalGunGameProgressiveKill; // 0x9992
	Integer m_iGunGameProgressiveWeaponIndex; // 0x9994
	Integer m_iNumGunGameTRKillPoints; // 0x9998
	Integer m_iNumGunGameKillsWithCurrentWeapon; // 0x999c
	Integer m_iNumRoundKills; // 0x99a0
	Integer m_iNumRoundKillsHeadshots; // 0x99a4
	Integer m_unTotalRoundDamageDealt; // 0x99a8
	Float m_fMolotovUseTime; // 0x99ac
	Float m_fMolotovDamageTime; // 0x99b0
	Byte m_bInBombZone; // 0x99b4
	Byte m_bInBuyZone; // 0x99b5
	Byte m_bInNoDefuseArea; // 0x99b6
	Integer m_iThrowGrenadeCounter; // 0x99b8
	Byte m_bWaitForNoAttack; // 0x99bc
	Byte m_bIsRespawningForDMBonus; // 0x99bd
	Float m_flGuardianTooFarDistFrac; // 0x99c0
	Float m_flDetectedByEnemySensorTime; // 0x99c4
	Byte m_bKilledByTaser; // 0x99cd
	Integer m_iMoveState; // 0x99d0
	Byte m_bCanMoveDuringFreezePeriod; // 0x99d4
	Byte m_isCurrentGunGameLeader; // 0x99d5
	Byte m_isCurrentGunGameTeamLeader; // 0x99d6
	String (256) m_szArmsModel; // 0x99d7
	Float m_flLowerBodyYawTarget; // 0x9adc
	Byte m_bStrafing; // 0x9ae0
	Byte m_bIsPlayerGhost; // 0x9ae1
	Unsigned Integer m_nIsAutoMounting; // 0x9ae4
	Vector m_vecAutomoveTargetEnd; // 0x9af4
	Float m_flAutoMoveStartTime; // 0x9b04
	Float m_flAutoMoveTargetTime; // 0x9b08
	Float m_flLastExoJumpTime; // 0x9b0c
	Integer m_iAddonBits; // 0x103c4
	Integer m_iPrimaryAddon; // 0x103c8
	Integer m_iSecondaryAddon; // 0x103cc
	Integer m_iProgressBarDuration; // 0x103d0
	Float m_flProgressBarStartTime; // 0x103d4
	Float m_flStamina; // 0x103d8
	Unsigned Integer m_iDirection; // 0x103dc
	Unsigned Integer m_iShotsFired; // 0x103e0
	Unsigned Integer m_nNumFastDucks; // 0x103e4
	Bool m_bDuckOverride; // 0x103e8
	Integer m_bNightVisionOn; // 0x103e9
	Byte m_bHasNightVision; // 0x103ea
	Float m_flVelocityModifier; // 0x103ec
	Float m_flGroundAccelLinearFracLastTime; // 0x103f0
	Integer m_iStartAccount; // 0x103f4
	Integer m_totalHitsOnServer; // 0x103f8
	Byte m_bIsSpawnRappelling; // 0x103fd
	Vector m_vecSpawnRappellingRopeOrigin; // 0x10400
	Integer m_nSurvivalTeam; // 0x10410
	Integer m_hSurvivalAssassinationTarget; // 0x10414
	Float m_flHealthShotBoostExpirationTime; // 0x10418
	Integer m_hRagdoll; // 0x1043c
	Integer m_hPlayerPing; // 0x10440
	Integer m_hCarriedHostage; // 0x10448
	Integer m_hCarriedHostageProp; // 0x1044c
	Float m_flFlashMaxAlpha; // 0x1046c
	Float m_flFlashDuration; // 0x10470
	Short m_unActiveQuestId; // 0x11778
	Integer m_nQuestProgressReason; // 0x1177c
	Integer m_unPlayerTvControlFlags; // 0x11780
	Short m_unCurrentEquipmentValue; // 0x11784
	Short m_unRoundStartEquipmentValue; // 0x11786
	Short m_unFreezetimeEndEquipmentValue; // 0x11788
	Byte m_bHasParachute; // 0x117a4
	Short m_unMusicID; // 0x117a8
	Integer m_iAccount; // 0x117b8
	Byte m_bHasHelmet; // 0x117c0
	Byte m_bHasHeavyArmor; // 0x117c1
	Integer m_nHeavyAssaultSuitCooldownRemaining; // 0x117c4
	Integer m_iClass; // 0x117c8
	Integer m_ArmorValue; // 0x117cc
	Float m_angEyeAngles[0]; // 0x117d0
	Float m_angEyeAngles[1]; // 0x117d4
	Integer m_bHasDefuser; // 0x117dc
	Byte m_bInHostageRescueZone; // 0x117dd
	Byte m_bHud_MiniScoreHidden; // 0x117fe
	Byte m_bHud_RadarHidden; // 0x117ff
	Integer m_nLastKillerIndex; // 0x11800
	Integer m_nLastConcurrentKilled; // 0x11804
	Integer m_nDeathCamMusic; // 0x11808
	Integer m_cycleLatch; // 0x118e0
	Byte m_bIsLookingAtWeapon; // 0x11974
	Byte m_bIsHoldingLookAtWeapon; // 0x11975
	Float m_flThirdpersonRecoil; // 0x119ec
	Byte m_bHideTargetID; // 0x119f0
	Byte m_bIsAssassinationTarget; // 0x11a4c
	Byte m_bIsControllingBot; // 0x11a4d
	Byte m_bCanControlObservedBot; // 0x11a4e
	Integer m_iControlledBotEntIndex; // 0x11a50
	Byte m_bHasControlledBotThisRound; // 0x11a5c
	Integer m_iRetakesOffering; // 0x11cf4
	Integer m_iRetakesOfferingCard; // 0x11cf8
	Byte m_bRetakesHasDefuseKit; // 0x11cfc
	Byte m_bRetakesMVPLastRound; // 0x11cfd
	Integer m_iRetakesMVPBoostItem; // 0x11d00
	Integer m_RetakesMVPBoostExtraUtility; // 0x11d04
};

struct CTEImpact {
	Vector m_vecOrigin; // 0x10
	Vector m_vecNormal; // 0x1c
	Integer m_iType; // 0x28
	Byte m_ucFlags; // 0x2c
};

struct CVoteController {
	Integer m_iActiveIssueIndex; // 0x9e4
	Integer m_iOnlyTeamToVote; // 0x9e8
	Integer m_nPotentialVotes; // 0xa04
	Byte m_bIsYesNoVote; // 0xa0a
};

struct CTeam {
	Integer player_array_element; // 0x0
	Byte m_szTeamname; // 0x9ec
	Byte m_szClanTeamname; // 0xa0c
	Byte m_szTeamFlagImage; // 0xa2c
	Byte m_szTeamLogoImage; // 0xa34
	Byte m_szTeamMatchStat; // 0xa3c
	Unsigned Integer m_scoreTotal; // 0xb40
	Unsigned Integer m_scoreFirstHalf; // 0xb44
	Unsigned Integer m_scoreSecondHalf; // 0xb48
	Unsigned Integer m_scoreOvertime; // 0xb4c
	Integer m_nGGLeaderEntIndex_CT; // 0xb50
	Integer m_nGGLeaderEntIndex_T; // 0xb54
	Unsigned Integer m_iClanID; // 0xb58
	Unsigned Integer m_iDeaths; // 0xb5c
	Unsigned Integer m_iPing; // 0xb60
	Unsigned Integer m_iPacketloss; // 0xb64
	Unsigned Integer m_iTeamNum; // 0xb68
	Unsigned Integer m_bSurrendered; // 0xb6c
	Integer m_numMapVictories; // 0xb70
};

struct CParticlePerformanceMonitor {
	Byte m_bDisplayPerf; // 0x9d8
	Byte m_bMeasurePerf; // 0x9d9
};

struct CCFish {
	Short m_nModelIndex; // 0x258
	Byte m_lifeState; // 0x25f
	Float m_x; // 0x29d8
	Float m_y; // 0x29dc
	Float m_z; // 0x29e0
	Float m_angle; // 0x29e8
	Vector m_poolOrigin; // 0x29f0
	Float m_waterLevel; // 0x29fc
};

struct CCChicken {
	Integer m_jumpedThisFrame; // 0x29f8
	Integer m_leader; // 0x29fc
};

struct CSprite {
	Entity Handle m_hAttachedToEntity; // 0x9e8
	Unsigned Integer m_nAttachment; // 0x9ec
	Float m_flSpriteFramerate; // 0x9f0
	Float m_flFrame; // 0x9f4
	Float m_flDieTime; // 0x9f8
	Unsigned Integer m_nBrightness; // 0x9fc
	Float m_flBrightnessTime; // 0xa00
	Float m_flSpriteScale; // 0xa04
	Float m_flScaleTime; // 0xa08
	Byte m_bWorldSpaceScale; // 0xa0c
	Float m_flGlowProxySize; // 0xa10
	Float m_flHDRColorScale; // 0xa14
	Float m_flLastTime; // 0xa18
	Float m_flMaxFrame; // 0xa1c
};

struct CInfoOverlayAccessor {
	Byte m_iTextureFrameIndex; // 0x98c
	Integer m_iOverlayID; // 0x9d8
};

struct CRagdoll_Attached {
	Vector m_attachmentPointBoneSpace; // 0x2ca0
	Vector m_attachmentPointRagdollSpace; // 0x2cb8
	Integer m_ragdollAttachedObjectIndex; // 0x2cc4
	Integer m_boneIndexAttached; // 0x2cc8
};

struct CTEDynamicLight {
	Vector m_vecOrigin; // 0x10
	Float m_fRadius; // 0x1c
	Integer r; // 0x20
	Integer g; // 0x24
	Integer b; // 0x28
	Integer exponent; // 0x2c
	Float m_fTime; // 0x30
	Float m_fDecay; // 0x34
};

struct CBeamSpotlight {
	Integer m_nHaloIndex; // 0x9d8
	Integer m_nRotationAxis; // 0x9dc
	Float m_flRotationSpeed; // 0x9e0
	Byte m_bSpotlightOn; // 0x9e4
	Byte m_bHasDynamicLight; // 0x9e5
	Float m_flSpotlightMaxLength; // 0x9e8
	Float m_flSpotlightGoalWidth; // 0x9ec
	Float m_flHDRColorScale; // 0x9f0
};

struct CCSRagdoll {
	Integer m_iTeamNum; // 0xf4
	Vector m_vecOrigin; // 0x138
	Short m_nModelIndex; // 0x258
	Vector m_vecForce; // 0x2680
	Integer m_nForceBone; // 0x268c
	Byte m_bClientSideAnimation; // 0x28a0
	Integer m_hPlayer; // 0x2a00
	Vector m_vecRagdollVelocity; // 0x2a10
	Vector m_vecRagdollOrigin; // 0x2a1c
	Integer m_iDeathPose; // 0x2a28
	Integer m_iDeathFrame; // 0x2a2c
	Float m_flDeathYaw; // 0x2a30
	Float m_flAbsYaw; // 0x2a34
	Byte m_bDiedAirborne; // 0x2a38
};

struct CLightGlow {
	Float HDRColorScale; // 0x0
	Integer m_clrRender; // 0x70
	Vector m_angRotation; // 0x12c
	Vector m_vecOrigin; // 0x138
	Integer moveparent; // 0x148
	Integer m_nHorizontalSize; // 0x9d8
	Integer m_nVerticalSize; // 0x9dc
	Integer m_nMinDist; // 0x9e0
	Integer m_nMaxDist; // 0x9e4
	Integer m_nOuterMaxDist; // 0x9e8
	Integer m_spawnflags; // 0x9ec
	Float m_flGlowProxySize; // 0xac4
};

struct CQuadraticBeam {
	Vector m_targetPosition; // 0x9d8
	Vector m_controlPosition; // 0x9e4
	Float m_scrollRate; // 0x9f0
	Float m_flWidth; // 0x9f4
};

struct CTEGaussExplosion {
	Integer m_nType; // 0x1c
	Vector m_vecDirection; // 0x20
};

struct CInferno {
	Integer m_fireCount; // 0x13a8
	Integer m_nFireEffectTickBegin; // 0x13b4
};

struct CBreakableSurface {
	Integer m_nNumWide; // 0x9dc
	Integer m_nNumHigh; // 0x9e0
	Float m_flPanelWidth; // 0x9e4
	Float m_flPanelHeight; // 0x9e8
	Vector m_vNormal; // 0x9ec
	Vector m_vCorner; // 0x9f8
	Byte m_bIsBroken; // 0xa04
	Integer m_nSurfaceType; // 0xa08
};

struct CMovieDisplay {
	Byte m_bEnabled; // 0x9d8
	Byte m_bLooping; // 0x9d9
	String (128) m_szMovieFilename; // 0x9da
	String (128) m_szGroupName; // 0xa5a
	Byte m_bStretchToFill; // 0xada
	Byte m_bForcedSlave; // 0xadb
	Byte m_bUseCustomUVs; // 0xadc
	Float m_flUMin; // 0xae0
	Float m_flUMax; // 0xae4
	Float m_flVMin; // 0xae8
	Float m_flVMax; // 0xaec
};

struct CTEGlowSprite {
	Vector m_vecOrigin; // 0x10
	Integer m_nModelIndex; // 0x1c
	Float m_fScale; // 0x20
	Float m_fLife; // 0x24
	Integer m_nBrightness; // 0x28
};

struct CWeaponBaseItem {
	Bool m_bRedraw; // 0x33ec
};

struct CPostProcessController {
	Byte m_bMaster; // 0xa04
};

struct CPhysBox {
	Float m_mass; // 0x9d8
};

struct CPrecipitation {
	Integer m_nPrecipType; // 0xa00
};

struct CBaseCSGrenadeProjectile {
	Vector m_vInitialVelocity; // 0x29e0
	Integer m_nBounces; // 0x29ec
	Integer m_nExplodeEffectIndex; // 0x29f0
	Integer m_nExplodeEffectTickBegin; // 0x29f4
	Vector m_vecExplodeEffectOrigin; // 0x29f8
};

struct CFunc_LOD {
	Integer m_nDisappearMinDist; // 0x9d8
	Integer m_nDisappearMaxDist; // 0x9dc
};

struct CParticleSmokeGrenade {
	Integer m_CurrentStage; // 0xac4
	Float m_flSpawnTime; // 0xad4
	Float m_FadeStartTime; // 0xad8
	Float m_FadeEndTime; // 0xadc
	Vector m_MinColor; // 0xae4
	Vector m_MaxColor; // 0xaf0
};

struct CTEBeamLaser {
	Integer m_nStartEntity; // 0x4c
	Integer m_nEndEntity; // 0x50
};

struct CBaseAttributableItem {
	Integer m_iReapplyProvisionParity; // 0x2da8
	Integer m_hOuter; // 0x2dac
	Integer m_ProviderType; // 0x2db4
	Short m_iItemDefinitionIndex; // 0x2fba
	Integer m_iEntityQuality; // 0x2fbc
	Integer m_iEntityLevel; // 0x2fc0
	Integer m_iItemIDHigh; // 0x2fd0
	Integer m_iItemIDLow; // 0x2fd4
	Integer m_iAccountID; // 0x2fd8
	Byte m_bInitialized; // 0x2fe4
	String (161) m_szCustomName; // 0x304c
	Integer m_OriginalOwnerXuidLow; // 0x31d0
	Integer m_OriginalOwnerXuidHigh; // 0x31d4
	Integer m_nFallbackPaintKit; // 0x31d8
	Integer m_nFallbackSeed; // 0x31dc
	Float m_flFallbackWear; // 0x31e0
	Integer m_nFallbackStatTrak; // 0x31e4
};

struct CWeaponCSBaseGun {
	Unsigned Integer m_zoomLevel; // 0x33e0
	Unsigned Integer m_iBurstShotsRemaining; // 0x33e4
	Float m_fNextBurstShot; // 0x33e8
};

struct CFireSmoke {
	Float m_flStartScale; // 0x9d8
	Float m_flScale; // 0x9dc
	Float m_flScaleTime; // 0x9e0
	Integer m_nFlags; // 0x9e4
	Integer m_nFlameModelIndex; // 0x9e8
	Integer m_nFlameFromAboveModelIndex; // 0x9ec
};

struct CPropVehicleDriveable {
	Integer m_hPlayer; // 0x2994
	Integer m_nSpeed; // 0x2998
	Integer m_nRPM; // 0x299c
	Float m_flThrottle; // 0x29a0
	Integer m_nBoostTimeLeft; // 0x29a4
	Integer m_nHasBoost; // 0x29a8
	Integer m_nScannerDisabledWeapons; // 0x29ac
	Integer m_nScannerDisabledVehicle; // 0x29b0
	Byte m_bEnterAnimOn; // 0x29d0
	Byte m_bExitAnimOn; // 0x29d1
	Vector m_vecGunCrosshair; // 0x29d8
	Vector m_vecEyeExitEndpoint; // 0x2a10
	Byte m_bHasGun; // 0x2a1c
	Byte m_bUnableToFire; // 0x2a1d
};

struct CRocketTrail {
	Float m_SpawnRate; // 0xac4
	Vector m_StartColor; // 0xac8
	Vector m_EndColor; // 0xad4
	Float m_Opacity; // 0xae0
	Float m_ParticleLifetime; // 0xae4
	Float m_StopEmitTime; // 0xae8
	Float m_MinSpeed; // 0xaec
	Float m_MaxSpeed; // 0xaf0
	Float m_StartSize; // 0xaf4
	Float m_EndSize; // 0xaf8
	Float m_SpawnRadius; // 0xafc
	Byte m_bEmit; // 0xb0c
	Byte m_bDamaged; // 0xb0d
	Integer m_nAttachment; // 0xb10
	Float m_flFlareScale; // 0xb20
};

struct CBaseCSGrenade {
	Bool m_bRedraw; // 0x33e0
	Byte m_bIsHeldByPlayer; // 0x33e1
	Bool m_bPinPulled; // 0x33e2
	Float m_fThrowTime; // 0x33e4
	Byte m_bLoopingSoundPlaying; // 0x33e8
	Float m_flThrowStrength; // 0x33ec
	Float m_fDropTime; // 0x33f0
};

struct CPlantedC4 {
	Byte m_bBombTicking; // 0x2990
	Integer m_nBombSite; // 0x2994
	Float m_flC4Blow; // 0x29a0
	Float m_flTimerLength; // 0x29a4
	Float m_flDefuseLength; // 0x29b8
	Float m_flDefuseCountDown; // 0x29bc
	Byte m_bBombDefused; // 0x29c0
	Integer m_hBombDefuser; // 0x29c4
};

struct CTEBeamEntPoint {
	Integer m_nStartEntity; // 0x4c
	Integer m_nEndEntity; // 0x50
	Vector m_vecStartPoint; // 0x54
	Vector m_vecEndPoint; // 0x60
};

struct CTEBreakModel {
	Vector m_vecOrigin; // 0x10
	Float m_angRotation[0]; // 0x1c
	Float m_angRotation[1]; // 0x20
	Float m_angRotation[2]; // 0x24
	Vector m_vecSize; // 0x28
	Vector m_vecVelocity; // 0x34
	Integer m_nRandomization; // 0x40
	Integer m_nModelIndex; // 0x44
	Integer m_nCount; // 0x48
	Float m_fTime; // 0x4c
	Integer m_nFlags; // 0x50
};

struct CTEEnergySplash {
	Vector m_vecPos; // 0x10
	Vector m_vecDir; // 0x1c
	Byte m_bExplosive; // 0x28
};

struct CBRC4Target {
	Byte m_bBrokenOpen; // 0x2994
	Float m_flRadius; // 0x2998
};

struct CBeam {
	Unsigned Integer m_clrRender; // 0x70
	Vector m_vecOrigin; // 0xac
	Integer moveparent; // 0x148
	Unsigned Integer m_nModelIndex; // 0x258
	Unsigned Integer m_nRenderFX; // 0x25a
	Unsigned Integer m_nRenderMode; // 0x25b
	Float m_flFrameRate; // 0x9d8
	Float m_flHDRColorScale; // 0x9dc
	Unsigned Integer m_nNumBeamEnts; // 0x9e8
	Unsigned Integer m_nHaloIndex; // 0x9f0
	Unsigned Integer m_nBeamType; // 0x9f4
	Integer m_nBeamFlags; // 0x9f8
	Entity Handle m_hAttachEntity; // 0x9fc
	Unsigned Integer m_nAttachIndex; // 0xa24
	Float m_fWidth; // 0xa4c
	Float m_fEndWidth; // 0xa50
	Float m_fFadeLength; // 0xa54
	Float m_fHaloScale; // 0xa58
	Float m_fAmplitude; // 0xa5c
	Float m_fStartFrame; // 0xa60
	Float m_fSpeed; // 0xa64
	Float m_flFrame; // 0xa68
	Integer m_nClipStyle; // 0xa6c
	Vector m_vecEndPos; // 0xa70
};

struct CBumpMineProjectile {
	Integer m_nParentBoneIndex; // 0x29e4
	Vector m_vecParentBonePos; // 0x29e8
	Byte m_bArmed; // 0x29f4
};

struct CSmokeStack {
	Float m_SpreadSpeed; // 0xb14
	Float m_Speed; // 0xb18
	Float m_StartSize; // 0xb1c
	Float m_EndSize; // 0xb20
	Float m_Rate; // 0xb24
	Float m_JetLength; // 0xb28
	Integer m_bEmit; // 0xb2c
	Float m_flBaseSpread; // 0xb30
	Vector m_AmbientLight.m_vPos; // 0xb34
	Vector m_AmbientLight.m_vColor; // 0xb40
	Float m_AmbientLight.m_flIntensity; // 0xb4c
	Vector m_DirLight.m_vPos; // 0xb50
	Vector m_DirLight.m_vColor; // 0xb5c
	Float m_DirLight.m_flIntensity; // 0xb68
	Vector m_vWind; // 0xb78
	Float m_flTwist; // 0xb84
	Integer m_iMaterialModel; // 0xb88
	Float m_flRollSpeed; // 0xbc0
};

struct CBaseTeamObjectiveResource {
	Array m_vCPPositions; // 0x0
	Integer m_iTimerToShowInHUD; // 0x9d8
	Integer m_iStopWatchTimer; // 0x9dc
	Integer m_iNumControlPoints; // 0x9e0
	Byte m_bPlayingMiniRounds; // 0x9e8
	Byte m_bControlPointsReset; // 0x9e9
	Integer m_iUpdateCapHudParity; // 0x9ec
	Vector m_vCPPositions[0]; // 0x9f4
	String (255) m_iszWarnSound[0]; // 0x1304
	String (32) m_pszCapLayoutInHUD; // 0x1cec
};

struct CWeaponXM1014 {
	Unsigned Integer m_reloadState; // 0x33e4
};

struct CDrone {
	Array m_vecTagPositions; // 0x0
	Integer m_hMoveToThisEntity; // 0x29e8
	Integer m_hDeliveryCargo; // 0x29ec
	Byte m_bPilotTakeoverAllowed; // 0x29f0
	Integer m_hPotentialCargo; // 0x29f4
	Integer m_hCurrentPilot; // 0x29f8
	Vector m_vecTagPositions[0]; // 0x29fc
	Integer m_vecTagIncrements[0]; // 0x2b1c
};

struct CColorCorrection {
	Vector m_vecOrigin; // 0x9d8
	Float m_minFalloff; // 0x9e4
	Float m_maxFalloff; // 0x9e8
	Float m_flFadeInDuration; // 0x9ec
	Float m_flFadeOutDuration; // 0x9f0
	Float m_flMaxWeight; // 0x9f4
	Float m_flCurWeight; // 0x9f8
	String (260) m_netLookupFilename; // 0x9fc
	Byte m_bEnabled; // 0xb00
	Byte m_bMaster; // 0xb01
	Byte m_bClientSide; // 0xb02
	Byte m_bExclusive; // 0xb03
};

struct CFuncSmokeVolume {
	Vector m_vecMins; // 0x8
	Vector m_vecMaxs; // 0x14
	Short m_usSolidFlags; // 0x20
	Byte m_nSolidType; // 0x22
	Byte m_triggerBloat; // 0x23
	Integer m_nSurroundType; // 0x34a
	Vector m_vecSpecifiedSurroundingMins; // 0x34c
	Vector m_vecSpecifiedSurroundingMaxs; // 0x358
	Integer m_Color1; // 0xac4
	Integer m_Color2; // 0xac8
	String (255) m_MaterialName; // 0xacc
	Float m_ParticleDrawWidth; // 0xbcc
	Float m_ParticleSpacingDistance; // 0xbd0
	Float m_DensityRampSpeed; // 0xbd4
	Float m_RotationSpeed; // 0xbd8
	Float m_MovementSpeed; // 0xbdc
	Float m_Density; // 0xbe0
	Float m_maxDrawDistance; // 0xbe4
	Integer m_spawnflags; // 0xbe8
};

struct CBaseEntity {
	Integer movetype; // 0x0
	Vector m_vecMins; // 0x8
	Vector m_vecMaxs; // 0x14
	Float m_flLastMadeNoiseTime; // 0x20
	Byte m_nSolidType; // 0x22
	Byte m_triggerBloat; // 0x23
	Byte m_bIsAutoaimTarget; // 0x60
	Integer m_clrRender; // 0x70
	Integer m_cellbits; // 0x74
	Integer m_cellX; // 0x7c
	Integer m_cellY; // 0x80
	Integer m_cellZ; // 0x84
	Vector m_vecAbsVelocity; // 0x94
	Vector m_vecAbsOrigin; // 0xa0
	Vector m_vecOrigin; // 0xac
	Vector m_vecAngVelocity; // 0xb8
	Vector m_angAbsRotation; // 0xc4
	Vector m_angRotation; // 0xd0
	Float m_flMaxFallVelocity; // 0xdc
	Float m_flGravity; // 0xe0
	Float m_flProxyRandomValue; // 0xe4
	Unsigned Integer m_iEFlags; // 0xe8
	Byte m_nWaterType; // 0xec
	Unsigned Integer m_fEffects; // 0xf0
	Unsigned Integer m_iTeamNum; // 0xf4
	Unsigned Integer m_iPendingTeamNum; // 0xf8
	Unsigned Integer m_iHealth; // 0x100
	Unsigned Integer m_fFlags; // 0x104
	Vector m_vecViewOffset; // 0x108
	Vector m_vecVelocity; // 0x114
	Vector m_vecBaseVelocity; // 0x120
	Vector m_angNetworkAngles; // 0x12c
	Vector m_vecNetworkOrigin; // 0x138
	Float m_flFriction; // 0x144
	Entity Handle m_hNetworkMoveParent; // 0x148
	Entity Handle m_hOwnerEntity; // 0x14c
	Entity Handle m_hGroundEntity; // 0x150
	String (260) m_iName; // 0x154
	Short m_nModelIndex; // 0x258
	Byte m_nRenderFX; // 0x25a
	Byte m_nRenderMode; // 0x25b
	Byte m_MoveType; // 0x25c
	Byte m_MoveCollide; // 0x25d
	Byte m_nWaterLevel; // 0x25e
	Integer m_flAnimTime; // 0x260
	Integer m_flSimulationTime; // 0x268
	Float m_flUseLookAtAngle; // 0x2cc
	Byte m_iParentAttachment; // 0x2ec
	Float m_fadeMinDist; // 0x2f4
	Float m_fadeMaxDist; // 0x2f8
	Float m_flFadeScale; // 0x2fc
	Float m_flElasticity; // 0x300
	Integer m_usSolidFlags; // 0x340
	Integer m_nSurroundType; // 0x34a
	Vector m_vecSpecifiedSurroundingMins; // 0x34c
	Vector m_vecSpecifiedSurroundingMaxs; // 0x358
	Float m_flShadowCastDistance; // 0x3a0
	Integer m_CollisionGroup; // 0x474
	Bool m_bEverHadPredictionErrorsForThisCommand; // 0x938
	Integer m_bSimulatedEveryTick; // 0x93a
	Integer m_bAnimatedEveryTick; // 0x93b
	Byte m_bAlternateSorting; // 0x93c
	Integer m_bSpotted; // 0x93d
	Byte m_nMinCPULevel; // 0x988
	Byte m_nMaxCPULevel; // 0x989
	Byte m_nMinGPULevel; // 0x98a
	Byte m_nMaxGPULevel; // 0x98b
	Byte m_iTextureFrameIndex; // 0x98c
	Integer m_hEffectEntity; // 0x998
	Byte m_bEligibleForScreenHighlight; // 0x9b9
};

struct CTriggerSoundOperator {
	Integer m_nSoundOperator; // 0xa10
};

struct CPhysPropLootCrate {
	Integer m_iHealth; // 0x100
	Byte m_bRenderInPSPM; // 0x2a04
	Byte m_bRenderInTablet; // 0x2a05
	Integer m_iMaxHealth; // 0x2a08
};

struct CBaseAnimatingOverlay {
};

struct CTEPhysicsProp {
	Vector m_vecOrigin; // 0x10
	Float m_angRotation[0]; // 0x1c
	Float m_angRotation[1]; // 0x20
	Float m_angRotation[2]; // 0x24
	Vector m_vecVelocity; // 0x28
	Integer m_nModelIndex; // 0x34
	Integer m_nSkin; // 0x38
	Integer m_nFlags; // 0x3c
	Integer m_nEffects; // 0x40
	Integer m_clrRender; // 0x44
};

struct CTEFireBullets {
	Integer m_iPlayer; // 0x10
	Short m_nItemDefIndex; // 0x14
	Vector m_vecOrigin; // 0x18
	Float m_vecAngles[0]; // 0x24
	Float m_vecAngles[1]; // 0x28
	Integer m_weapon; // 0x30
	Integer m_iWeaponID; // 0x34
	Integer m_iMode; // 0x38
	Integer m_iSeed; // 0x3c
	Float m_fInaccuracy; // 0x40
	Float m_flRecoilIndex; // 0x44
	Float m_fSpread; // 0x48
	Integer m_iSoundType; // 0x4c
};

struct CFuncRotating {
	Float m_angRotation[0]; // 0x12c
	Float m_angRotation[1]; // 0x130
	Float m_angRotation[2]; // 0x134
	Vector m_vecOrigin; // 0x138
	Integer m_flSimulationTime; // 0x268
};

struct CWeaponMelee {
	Float m_flThrowAt; // 0x33e0
};

struct CMaterialModifyControl {
	String (255) m_szMaterialName; // 0x9d8
	String (255) m_szMaterialVar; // 0xad7
	String (255) m_szMaterialVarValue; // 0xbd6
	Integer m_iFrameStart; // 0xce0
	Integer m_iFrameEnd; // 0xce4
	Byte m_bWrap; // 0xce8
	Float m_flFramerate; // 0xcec
	Byte m_bNewAnimCommandsSemaphore; // 0xcf0
	Float m_flFloatLerpStartValue; // 0xcf4
	Float m_flFloatLerpEndValue; // 0xcf8
	Float m_flFloatLerpTransitionTime; // 0xcfc
	Byte m_bFloatLerpWrap; // 0xd00
	Integer m_nModifyMode; // 0xd08
};

struct CWeaponC4 {
	Byte m_bStartedArming; // 0x3400
	Float m_fArmedTime; // 0x3404
	Byte m_bBombPlacedAnimation; // 0x3408
	Byte m_bShowC4LED; // 0x3409
	Byte m_bIsPlantingViaUse; // 0x340a
};

struct CTEMetalSparks {
	Vector m_vecPos; // 0x10
	Vector m_vecDir; // 0x1c
};

struct CTEPlantBomb {
	Integer m_iPlayer; // 0x10
	Vector m_vecOrigin; // 0x14
	Integer m_option; // 0x20
};

struct CWeaponTablet {
	Array m_flUpgradeExpirationTime; // 0x0
	Float m_flUpgradeExpirationTime[0]; // 0x33e8
	Integer m_vecLocalHexFlags[0]; // 0x33f8
	Integer m_nContractKillGridIndex; // 0x34a0
	Integer m_nContractKillGridHighResIndex; // 0x34a4
	Byte m_bTabletReceptionIsBlocked; // 0x34a8
	Float m_flScanProgress; // 0x34ac
	Float m_flBootTime; // 0x34b0
	Float m_flShowMapTime; // 0x34b4
	Vector m_vecNearestMetalCratePos; // 0x34b8
	Integer m_vecNotificationIds[0]; // 0x34c4
	Float m_vecNotificationTimestamps[0]; // 0x34e4
	Integer m_nLastPurchaseIndex; // 0x3504
	Vector m_vecPlayerPositionHistory[0]; // 0x3508
};

struct CTEFoundryHelpers {
	Integer m_iEntity; // 0x10
};

struct CTEBeamEnts {
	Integer m_nStartEntity; // 0x4c
	Integer m_nEndEntity; // 0x50
};

struct CTestTraceline {
	Integer m_clrRender; // 0x70
	Float m_angRotation[0]; // 0x12c
	Float m_angRotation[1]; // 0x130
	Float m_angRotation[2]; // 0x134
	Vector m_vecOrigin; // 0x138
	Integer moveparent; // 0x148
};

struct CEnvTonemapController {
	Byte m_bUseCustomAutoExposureMin; // 0x9d8
	Byte m_bUseCustomAutoExposureMax; // 0x9d9
	Byte m_bUseCustomBloomScale; // 0x9da
	Float m_flCustomAutoExposureMin; // 0x9dc
	Float m_flCustomAutoExposureMax; // 0x9e0
	Float m_flCustomBloomScale; // 0x9e4
	Float m_flCustomBloomScaleMinimum; // 0x9e8
	Float m_flBloomExponent; // 0x9ec
	Float m_flBloomSaturation; // 0x9f0
	Float m_flTonemapPercentTarget; // 0x9f4
	Float m_flTonemapPercentBrightPixels; // 0x9f8
	Float m_flTonemapMinAvgLum; // 0x9fc
	Float m_flTonemapRate; // 0xa00
};

struct CParadropChopper {
	Vector2D m_vecOrigin; // 0x138
	Float m_vecOrigin[2]; // 0x140
	Integer m_hCallingPlayer; // 0x29a0
};

struct CTEBeamPoints {
	Vector m_vecStartPoint; // 0x4c
	Vector m_vecEndPoint; // 0x58
};

struct CDynamicProp {
	Byte m_bUseHitboxesForRenderBox; // 0x29b4
	Float m_flGlowMaxDist; // 0x29d4
	Byte m_bShouldGlow; // 0x29d8
	Integer m_clrGlow; // 0x29d9
	Integer m_nGlowStyle; // 0x29e0
};

struct CPhysBoxMultiplayer {
	Integer m_iPhysicsMode; // 0x9e4
	Float m_fMass; // 0x9e8
};

struct CTEShatterSurface {
	Vector m_vecOrigin; // 0x10
	Vector m_vecAngles; // 0x1c
	Vector m_vecForce; // 0x28
	Vector m_vecForcePos; // 0x34
	Float m_flWidth; // 0x40
	Float m_flHeight; // 0x44
	Float m_flShardSize; // 0x48
	Integer m_nSurfaceType; // 0x50
	Byte m_uchFrontColor[0]; // 0x54
	Byte m_uchFrontColor[1]; // 0x55
	Byte m_uchFrontColor[2]; // 0x56
	Byte m_uchBackColor[0]; // 0x57
	Byte m_uchBackColor[1]; // 0x58
	Byte m_uchBackColor[2]; // 0x59
};

struct CCSGameRulesProxy {
	Byte m_bFreezePeriod; // 0x20
	Byte m_bWarmupPeriod; // 0x21
	Float m_fWarmupPeriodEnd; // 0x24
	Float m_fWarmupPeriodStart; // 0x28
	Byte m_bTerroristTimeOutActive; // 0x2c
	Byte m_bCTTimeOutActive; // 0x2d
	Float m_flTerroristTimeOutRemaining; // 0x30
	Float m_flCTTimeOutRemaining; // 0x34
	Integer m_nTerroristTimeOuts; // 0x38
	Integer m_nCTTimeOuts; // 0x3c
	Byte m_bTechnicalTimeOut; // 0x40
	Byte m_bMatchWaitingForResume; // 0x41
	Integer m_iRoundTime; // 0x44
	Float m_fMatchStartTime; // 0x48
	Float m_fRoundStartTime; // 0x4c
	Float m_flRestartRoundTime; // 0x50
	Byte m_bGameRestart; // 0x54
	Float m_flGameStartTime; // 0x58
	Float m_timeUntilNextPhaseStarts; // 0x5c
	Integer m_gamePhase; // 0x60
	Integer m_totalRoundsPlayed; // 0x64
	Integer m_nOvertimePlaying; // 0x68
	Integer m_iHostagesRemaining; // 0x6c
	Byte m_bAnyHostageReached; // 0x70
	Byte m_bMapHasBombTarget; // 0x71
	Byte m_bMapHasRescueZone; // 0x72
	Byte m_bMapHasBuyZone; // 0x73
	Byte m_bIsQueuedMatchmaking; // 0x74
	Integer m_nQueuedMatchmakingMode; // 0x78
	Byte m_bIsValveDS; // 0x7c
	Byte m_bLogoMap; // 0x7d
	Byte m_bPlayAllStepSoundsOnServer; // 0x7e
	Integer m_iNumGunGameProgressiveWeaponsCT; // 0x80
	Integer m_iNumGunGameProgressiveWeaponsT; // 0x84
	Integer m_iSpectatorSlotCount; // 0x88
	Integer m_MatchDevice; // 0x44c
	Byte m_bHasMatchStarted; // 0x450
	Float m_flDMBonusStartTime; // 0x454
	Float m_flDMBonusTimeLength; // 0x458
	Short m_unDMBonusWeaponLoadoutSlot; // 0x45c
	Byte m_bDMBonusActive; // 0x45e
	Integer m_nNextMapInMapgroup; // 0x460
	String (260) m_szTournamentEventName; // 0x464
	String (260) m_szTournamentEventStage; // 0x568
	String (260) m_szMatchStatTxt; // 0x66c
	String (260) m_szTournamentPredictionsTxt; // 0x770
	Integer m_nTournamentPredictionsPct; // 0x874
	Float m_flCMMItemDropRevealStartTime; // 0x878
	Float m_flCMMItemDropRevealEndTime; // 0x87c
	Byte m_bIsDroppingItems; // 0x880
	Byte m_bIsQuestEligible; // 0x881
	Integer m_nGuardianModeWaveNumber; // 0x884
	Integer m_nGuardianModeSpecialKillsRemaining; // 0x888
	Integer m_nGuardianModeSpecialWeaponNeeded; // 0x88c
	Integer m_numGlobalGiftsGiven; // 0x898
	Integer m_numGlobalGifters; // 0x89c
	Integer m_numGlobalGiftsPeriodSeconds; // 0x8a0
	Integer m_numBestOfMaps; // 0x99c
	Integer m_nHalloweenMaskListSeed; // 0x9a0
	Byte m_bBombDropped; // 0x9a4
	Byte m_bBombPlanted; // 0x9a5
	Integer m_iRoundWinStatus; // 0x9a8
	Integer m_eRoundWinReason; // 0x9ac
	Byte m_bTCantBuy; // 0x9b0
	Byte m_bCTCantBuy; // 0x9b1
	Float m_flGuardianBuyUntilTime; // 0x9b4
	Integer m_iActiveAssassinationTargetMissionID; // 0xc20
	Integer m_nEndMatchMapVoteWinner; // 0xc78
	Integer m_iNumConsecutiveCTLoses; // 0xc7c
	Integer m_iNumConsecutiveTerroristLoses; // 0xc80
	Vector m_vecPlayAreaMins; // 0xd00
	Vector m_vecPlayAreaMaxs; // 0xd0c
	Float m_flSpawnSelectionTimeStart; // 0xef8
	Float m_flSpawnSelectionTimeEnd; // 0xefc
	Float m_flSpawnSelectionTimeLoadout; // 0xf00
	Integer m_spawnStage; // 0xf04
	Float m_flTabletHexOriginX; // 0xf08
	Float m_flTabletHexOriginY; // 0xf0c
	Float m_flTabletHexSize; // 0xf10
	Float m_flSurvivalStartTime; // 0x13a8
	Integer m_nMatchSeed; // 0x14b8
	Byte m_bBlockersPresent; // 0x14bc
	Byte m_bRoundInProgress; // 0x14bd
	Integer m_iFirstSecondHalfRound; // 0x14c0
	Integer m_iBombSite; // 0x14c4
};

struct CWaterLODControl {
	Float m_flCheapWaterStartDistance; // 0x9d8
	Float m_flCheapWaterEndDistance; // 0x9dc
};

struct CDustTrail {
	Float m_SpawnRate; // 0xac4
	Vector m_Color; // 0xac8
	Float m_Opacity; // 0xad4
	Float m_ParticleLifetime; // 0xad8
	Float m_StopEmitTime; // 0xae0
	Float m_MinSpeed; // 0xae4
	Float m_MaxSpeed; // 0xae8
	Float m_MinDirectedSpeed; // 0xaec
	Float m_MaxDirectedSpeed; // 0xaf0
	Float m_StartSize; // 0xaf4
	Float m_EndSize; // 0xaf8
	Float m_SpawnRadius; // 0xafc
	Byte m_bEmit; // 0xb0c
};

struct CItem {
	Byte m_bShouldGlow; // 0x3240
};

struct CFunc_Dust {
	Vector m_vecMins; // 0x8
	Vector m_vecMaxs; // 0x14
	Short m_usSolidFlags; // 0x20
	Byte m_nSolidType; // 0x22
	Byte m_triggerBloat; // 0x23
	Short m_nModelIndex; // 0x258
	Integer m_nSurroundType; // 0x34a
	Vector m_vecSpecifiedSurroundingMins; // 0x34c
	Vector m_vecSpecifiedSurroundingMaxs; // 0x358
	Integer m_Color; // 0x9d8
	Integer m_SpawnRate; // 0x9dc
	Float m_flSizeMin; // 0x9e0
	Float m_flSizeMax; // 0x9e4
	Integer m_SpeedMax; // 0x9e8
	Integer m_LifetimeMin; // 0x9ec
	Integer m_LifetimeMax; // 0x9f0
	Integer m_DistMax; // 0x9f4
	Float m_FallSpeed; // 0x9f8
	Byte m_bAffectedByWind; // 0x9fc
	Integer m_DustFlags; // 0xa00
};

struct CWeaponCSBase {
	Float m_flNextPrimaryAttack; // 0x3248
	Float m_flNextSecondaryAttack; // 0x324c
	Float m_flTimeWeaponIdle; // 0x3284
	Unsigned Integer m_weaponMode; // 0x3328
	Float m_fAccuracyPenalty; // 0x3340
	Unsigned Integer m_iRecoilIndex; // 0x3350
	Float m_flRecoilIndex; // 0x3354
	Byte m_bBurstMode; // 0x3358
	Float m_flPostponeFireReadyTime; // 0x335c
	Bool m_bReloadVisuallyComplete; // 0x3360
	Byte m_bSilencerOn; // 0x3361
	Float m_flDoneSwitchingSilencer; // 0x3364
	Integer m_iOriginalTeamNumber; // 0x336c
	Integer m_hPrevOwner; // 0x3394
	Float m_fLastShotTime; // 0x33b8
	Unsigned Integer m_iIronSightMode; // 0x33d4
};

struct CSteamJet {
	Float m_SpreadSpeed; // 0xac4
	Float m_Speed; // 0xac8
	Float m_StartSize; // 0xacc
	Float m_EndSize; // 0xad0
	Float m_Rate; // 0xad4
	Float m_JetLength; // 0xad8
	Integer m_bEmit; // 0xadc
	Integer m_nType; // 0xae0
	Byte m_bFaceLeft; // 0xae4
	Integer m_spawnflags; // 0xae8
	Float m_flRollSpeed; // 0xaec
};

struct CProxyToggle {
	Integer m_WithProxy; // 0x9d8
};

struct CPhysicsPropMultiplayer {
	Integer m_iPhysicsMode; // 0x29d4
	Float m_fMass; // 0x29d8
	Vector m_collisionMins; // 0x29dc
	Vector m_collisionMaxs; // 0x29e8
};

struct CEnvScreenEffect {
	Float m_flDuration; // 0x9d8
	Integer m_nType; // 0x9dc
};

struct CEnvParticleScript {
	Float m_flSequenceScale; // 0x2a74
};

struct CPropJeep {
	Byte m_bHeadlightIsOn; // 0x2adc
};

struct CTESpriteSpray {
	Vector m_vecOrigin; // 0x10
	Vector m_vecDirection; // 0x1c
	Integer m_nModelIndex; // 0x28
	Integer m_nSpeed; // 0x2c
	Float m_fNoise; // 0x30
	Integer m_nCount; // 0x34
};

struct CTEShowLine {
	Vector m_vecEnd; // 0x1c
};

struct CTEBeamSpline {
	Array m_vecPoints; // 0x0
	Vector m_vecPoints[0]; // 0x10
	Integer m_nPoints; // 0xd0
};

struct CTEEffectDispatch {
	Float m_vOrigin.x; // 0x10
	Float m_vOrigin.y; // 0x14
	Float m_vOrigin.z; // 0x18
	Float m_vStart.x; // 0x1c
	Float m_vStart.y; // 0x20
	Float m_vStart.z; // 0x24
	Vector m_vNormal; // 0x28
	Vector m_vAngles; // 0x34
	Integer m_fFlags; // 0x40
	Float m_flScale; // 0x4c
	Float m_flMagnitude; // 0x50
	Float m_flRadius; // 0x54
	Integer m_nAttachmentIndex; // 0x58
	Integer m_nSurfaceProp; // 0x5c
	Integer m_nMaterial; // 0x60
	Integer m_nDamageType; // 0x64
	Integer m_nHitBox; // 0x68
	Integer m_nOtherEntIndex; // 0x6c
	Byte m_nColor; // 0x70
	Byte m_bPositionsAreRelativeToEntity; // 0x71
	Integer m_iEffectName; // 0x74
};

struct CTEClientProjectile {
	Vector m_vecOrigin; // 0x10
	Vector m_vecVelocity; // 0x1c
	Integer m_nModelIndex; // 0x28
	Integer m_nLifeTime; // 0x2c
	Integer m_hOwner; // 0x30
};

struct CEntityDissolve {
	Float m_flStartTime; // 0x9dc
	Float m_flFadeOutStart; // 0x9e0
	Float m_flFadeOutLength; // 0x9e4
	Float m_flFadeOutModelStart; // 0x9e8
	Float m_flFadeOutModelLength; // 0x9ec
	Float m_flFadeInStart; // 0x9f0
	Float m_flFadeInLength; // 0x9f4
	Integer m_nDissolveType; // 0x9f8
	Vector m_vDissolverOrigin; // 0xa00
	Integer m_nMagnitude; // 0xa0c
};

struct CBaseToggle {
	Vector m_vecFinalDest; // 0x9ec
	Integer m_movementType; // 0x9f8
	Float m_flMoveTargetTime; // 0x9fc
};

struct CEnvAmbientLight {
	Vector m_vecColor; // 0xb00
};

struct CWorldVguiText {
	Byte m_bEnabled; // 0x9d8
	String (512) m_szDisplayText; // 0x9d9
	String (256) m_szDisplayTextOption; // 0xbd9
	String (64) m_szFont; // 0xcd9
	Integer m_clrText; // 0xd19
	Integer m_iTextPanelWidth; // 0xd20
};

struct CMolotovProjectile {
	Byte m_bIsIncGrenade; // 0x2a20
};

struct CBaseAnimating {
	Byte m_bClientSideRagdoll; // 0x279
	Integer m_nHitboxSet; // 0x9fc
	Float m_flCycle; // 0xa14
	Float m_flPlaybackRate; // 0xa18
	Unsigned Integer m_nSkin; // 0xa1c
	Unsigned Integer m_nBody; // 0xa20
	Integer m_nHighlightColorR; // 0xa38
	Integer m_nHighlightColorG; // 0xa3c
	Integer m_nHighlightColorB; // 0xa40
	Unsigned Integer m_nNewSequenceParity; // 0xa44
	Unsigned Integer m_nResetEventsParity; // 0xa48
	Float m_flEncodedController; // 0xa54
	Byte m_nMuzzleFlashParity; // 0xa64
	Vector m_vecForce; // 0x2680
	Integer m_nForceBone; // 0x268c
	Byte m_bClientSideFrameReset; // 0x26c4
	Float m_flFrozen; // 0x26fc
	Float m_flModelScale; // 0x274c
	Integer m_ScaleType; // 0x2750
	Byte m_bClientSideAnimation; // 0x28a0
	Integer m_nSequence; // 0x28c0
	Integer m_hLightingOrigin; // 0x2948
	Byte m_bSuppressAnimSounds; // 0x294e
};

struct CTEPlayerDecal {
	Integer m_nPlayer; // 0x10
	Vector m_vecOrigin; // 0x14
	Vector m_vecStart; // 0x20
	Vector m_vecRight; // 0x2c
	Integer m_nEntity; // 0x38
	Integer m_nHitbox; // 0x3c
};

struct CBaseViewModel {
	Unsigned Integer m_fEffects; // 0xf0
	Short m_nModelIndex; // 0x258
	Float m_flAnimTime; // 0x260
	Float m_flCycle; // 0xa14
	Float m_flPlaybackRate; // 0xa18
	Unsigned Integer m_nSkin; // 0xa1c
	Unsigned Integer m_nBody; // 0xa20
	Integer m_nNewSequenceParity; // 0xa44
	Integer m_nResetEventsParity; // 0xa48
	Byte m_nMuzzleFlashParity; // 0xa64
	Unsigned Integer m_nSequence; // 0x28c0
	Byte m_bShouldIgnoreOffsetAndAccuracy; // 0x29a0
	Unsigned Integer m_nViewModelIndex; // 0x29d0
	Unsigned Integer m_nAnimationParity; // 0x29d4
	Entity Handle m_hWeapon; // 0x29d8
	Entity Handle m_hOwner; // 0x29dc
	Float m_flTimeWeaponIdle; // 0x29e0
	Unsigned Integer m_Activity; // 0x29e4
};

struct CPoseController {
	Byte m_bPoseValueParity; // 0x9ec
	Float m_fPoseValue; // 0x9f0
	Float m_fInterpolationTime; // 0x9f4
	Byte m_bInterpolationWrap; // 0x9f8
	Float m_fCycleFrequency; // 0x9fc
	Integer m_nFModType; // 0xa00
	Float m_fFModTimeOffset; // 0xa04
	Float m_fFModRate; // 0xa08
	Float m_fFModAmplitude; // 0xa0c
};

struct CStatueProp {
	Integer m_hInitBaseAnimating; // 0x29d0
	Byte m_bShatter; // 0x29d4
	Integer m_nShatterFlags; // 0x29d8
	Vector m_vShatterPosition; // 0x29dc
	Vector m_vShatterForce; // 0x29e8
};

struct CBaseGrenade {
	Integer m_fFlags; // 0x104
	Vector m_vecVelocity; // 0x114
	Bool m_bIsLive; // 0x2991
	Bool m_DmgRadius; // 0x2994
	Float m_flNextAttack; // 0x2998
	Float m_flDamage; // 0x29a8
	Entity Handle m_hThrower; // 0x29b0
};

struct CAI_BaseNPC {
	Byte m_lifeState; // 0x25f
	Float m_flTimePingEffect; // 0x2f20
	Integer m_iDeathPose; // 0x2f24
	Integer m_iDeathFrame; // 0x2f28
	Integer m_iSpeedModRadius; // 0x2f2c
	Integer m_iSpeedModSpeed; // 0x2f30
	Byte m_bPerformAvoidance; // 0x2f34
	Byte m_bIsMoving; // 0x2f35
	Byte m_bFadeCorpse; // 0x2f36
	Byte m_bSpeedModActive; // 0x2f37
	Byte m_bImportanRagdoll; // 0x2f38
};

struct CWeaponFists {
	Byte m_bPlayingUninterruptableAct; // 0x33e0
};

struct CColorCorrectionVolume {
	Byte m_bEnabled; // 0xa20
	Float m_MaxWeight; // 0xa24
	Float m_FadeDuration; // 0xa28
	Float m_Weight; // 0xa2c
	String (260) m_lookupFilename; // 0xa30
};

struct CTEMuzzleFlash {
	Vector m_vecOrigin; // 0x10
	Vector m_vecAngles; // 0x1c
	Float m_flScale; // 0x28
	Integer m_nType; // 0x2c
};

struct CTEExplosion {
	Integer m_nModelIndex; // 0x1c
	Float m_fScale; // 0x20
	Integer m_nFrameRate; // 0x24
	Integer m_nFlags; // 0x28
	Vector m_vecNormal; // 0x2c
	Byte m_chMaterialType; // 0x38
	Integer m_nRadius; // 0x3c
	Integer m_nMagnitude; // 0x40
};

struct CTEBloodSprite {
	Vector m_vecOrigin; // 0x10
	Vector m_vecDirection; // 0x1c
	Integer r; // 0x28
	Integer g; // 0x2c
	Integer b; // 0x30
	Integer a; // 0x34
	Integer m_nDropModel; // 0x38
	Integer m_nSprayModel; // 0x3c
	Integer m_nSize; // 0x40
};

struct CSpatialEntity {
	Vector m_vecOrigin; // 0x9d8
	Float m_minFalloff; // 0x9e4
	Float m_maxFalloff; // 0x9e8
	Float m_flCurWeight; // 0x9ec
	Byte m_bEnabled; // 0xaf4
};

struct CItemAssaultSuitUseable {
	Integer m_nArmorValue; // 0x3450
	Byte m_bIsHeavyAssaultSuit; // 0x3454
};

struct CTEFizz {
	Integer m_nEntity; // 0x10
	Integer m_nModelIndex; // 0x14
	Integer m_nDensity; // 0x18
	Integer m_nCurrent; // 0x1c
};

struct CTEDust {
	Float m_flSize; // 0x1c
	Float m_flSpeed; // 0x20
	Vector m_vecDirection; // 0x24
};

struct CSun {
	Float HDRColorScale; // 0x0
	Integer m_clrRender; // 0x70
	Integer m_clrOverlay; // 0xb38
	Integer m_nSize; // 0xb3c
	Integer m_nOverlaySize; // 0xb40
	Vector m_vDirection; // 0xb44
	Byte m_bOn; // 0xb50
	Integer m_nMaterial; // 0xb54
	Integer m_nOverlayMaterial; // 0xb58
};

struct CDynamicLight {
	Byte m_Flags; // 0x9d8
	Byte m_LightStyle; // 0x9d9
	Float m_Radius; // 0x9dc
	Integer m_Exponent; // 0x9e0
	Float m_InnerAngle; // 0x9e4
	Float m_OuterAngle; // 0x9e8
	Float m_SpotRadius; // 0x9ec
};

struct CBaseDoor {
	Float m_flWaveHeight; // 0xa08
};

struct CBreachChargeProjectile {
	Byte m_bShouldExplode; // 0x29e0
	Integer m_weaponThatThrewMe; // 0x29e4
	Integer m_nParentBoneIndex; // 0x29e8
	Vector m_vecParentBonePos; // 0x29ec
};

struct CFuncConveyor {
	Float m_flConveyorSpeed; // 0x9d8
};

struct CDangerZoneController {
	Byte m_bDangerZoneControllerEnabled; // 0x9d8
	Byte m_bMissionControlledExplosions; // 0x9d9
	Vector m_vecEndGameCircleStart; // 0x9dc
	Vector m_vecEndGameCircleEnd; // 0x9e8
	Float m_flStartTime; // 0x9f4
	Float m_flFinalExpansionTime; // 0x9f8
	Integer m_hTheFinalZone; // 0xab8
};

struct CTEPlayerAnimEvent {
	Integer m_hPlayer; // 0x10
	Integer m_iEvent; // 0x14
	Integer m_nData; // 0x18
};

struct CDetailController {
	Float m_flFadeStartDist; // 0x9d8
	Float m_flFadeEndDist; // 0x9dc
};

struct CEnvWind {
	Float m_flStartTime; // 0x9dc
	Integer m_iWindSeed; // 0x9e0
	Integer m_iMinWind; // 0x9e4
	Integer m_iMaxWind; // 0x9e8
	Integer m_iMinGust; // 0x9f0
	Integer m_iMaxGust; // 0x9f4
	Float m_flMinGustDelay; // 0x9f8
	Float m_flMaxGustDelay; // 0x9fc
	Float m_flGustDuration; // 0xa00
	Integer m_iGustDirChange; // 0xa04
	Integer m_iInitialWindDir; // 0xa44
	Float m_flInitialWindSpeed; // 0xa48
};

struct CSporeTrail {
	Vector m_vecEndColor; // 0xac0
	Float m_flSpawnRate; // 0xacc
	Float m_flParticleLifetime; // 0xad0
	Float m_flStartSize; // 0xad4
	Float m_flEndSize; // 0xad8
	Float m_flSpawnRadius; // 0xadc
	Byte m_bEmit; // 0xaec
};

struct CCHostage {
	Integer m_iHealth; // 0x100
	Integer m_fFlags; // 0x104
	Byte m_lifeState; // 0x25f
	Integer m_iMaxHealth; // 0x2f28
	Integer m_leader; // 0x2f30
	Vector m_vel; // 0x2f34
	Integer m_isRescued; // 0x2f40
	Integer m_jumpedThisFrame; // 0x2f41
	Integer m_nHostageState; // 0x2f44
	Float m_flRescueStartTime; // 0x2f48
	Float m_flGrabSuccessTime; // 0x2f4c
	Float m_flDropStartTime; // 0x2f50
};

struct CPointCommentaryNode {
	Byte m_bActive; // 0x2990
	Float m_flStartTime; // 0x2994
	String (260) m_iszCommentaryFile; // 0x2998
	String (260) m_iszCommentaryFileNoHDR; // 0x2a9c
	String (256) m_iszSpeakers; // 0x2ba0
	Integer m_iNodeNumber; // 0x2ca0
	Integer m_iNodeNumberMax; // 0x2ca4
	Integer m_hViewPosition; // 0x2cac
};

struct CPlasma {
	Float m_flStartScale; // 0x9d8
	Float m_flScale; // 0x9dc
	Float m_flScaleTime; // 0x9e0
	Integer m_nFlags; // 0x9e4
	Integer m_nPlasmaModelIndex; // 0x9e8
	Integer m_nPlasmaModelIndex2; // 0x9ec
	Integer m_nGlowModelIndex; // 0x9f0
};

struct CTEBeamRing {
	Integer m_nStartEntity; // 0x4c
	Integer m_nEndEntity; // 0x50
};

struct CEconEntity {
	Integer m_iReapplyProvisionParity; // 0x2da8
	Integer m_hOuter; // 0x2dac
	Integer m_ProviderType; // 0x2db4
	Short m_iItemDefinitionIndex; // 0x2fba
	Integer m_iEntityQuality; // 0x2fbc
	Integer m_iEntityLevel; // 0x2fc0
	Integer m_iItemIDHigh; // 0x2fd0
	Integer m_iItemIDLow; // 0x2fd4
	Integer m_iAccountID; // 0x2fd8
	Byte m_bInitialized; // 0x2fe4
	String (161) m_szCustomName; // 0x304c
	Integer m_OriginalOwnerXuidLow; // 0x31d0
	Integer m_OriginalOwnerXuidHigh; // 0x31d4
	Integer m_nFallbackPaintKit; // 0x31d8
	Integer m_nFallbackSeed; // 0x31dc
	Float m_flFallbackWear; // 0x31e0
	Integer m_nFallbackStatTrak; // 0x31e4
};

struct CWeaponShield {
	Float m_flDisplayHealth; // 0x3400
};

struct CBasePlayer {
	Bool deadflag; // 0x4
	Unsigned Integer m_nNextThinkTick; // 0xfc
	Unsigned Integer m_iHealth; // 0x100
	Integer m_fFlags; // 0x104
	Float m_vecViewOffset[0]; // 0x108
	Float m_vecViewOffset[1]; // 0x10c
	Float m_vecViewOffset[2]; // 0x110
	Float m_vecVelocity[0]; // 0x114
	Float m_vecVelocity[1]; // 0x118
	Float m_vecVelocity[2]; // 0x11c
	Vector m_vecBaseVelocity; // 0x120
	Float m_flFriction; // 0x144
	Entity Handle m_hGroundEntity; // 0x150
	Byte m_nWaterLevel; // 0x25e
	Byte m_lifeState; // 0x25f
	Integer m_iCoachingTeam; // 0x2f60
	Float m_flDuckAmount; // 0x2fbc
	Float m_flDuckSpeed; // 0x2fc0
	Float m_flFOVRate; // 0x3010
	Integer m_iHideHUD; // 0x3014
	Integer m_nDuckTimeMsecs; // 0x3018
	Integer m_nDuckJumpTimeMsecs; // 0x301c
	Integer m_nJumpTimeMsecs; // 0x3020
	Float m_flFallVelocity; // 0x3024
	Float m_flStepSize; // 0x302c
	Vector m_viewPunchAngle; // 0x3030
	Vector m_aimPunchAngle; // 0x303c
	Vector m_aimPunchAngleVel; // 0x3048
	Byte m_bDucked; // 0x3054
	Byte m_bDucking; // 0x3055
	Float m_flLastDuckTime; // 0x3058
	Byte m_bInDuckJump; // 0x305c
	Byte m_bDrawViewmodel; // 0x305d
	Byte m_bWearingSuit; // 0x305e
	Byte m_bPoisoned; // 0x305f
	Byte m_bAllowAutoMovement; // 0x3060
	Integer m_skybox3d.scale; // 0x3100
	Vector m_skybox3d.origin; // 0x3104
	Integer m_skybox3d.area; // 0x3110
	Vector m_skybox3d.fog.dirPrimary; // 0x3118
	Integer m_skybox3d.fog.colorPrimary; // 0x3124
	Integer m_skybox3d.fog.colorSecondary; // 0x3128
	Float m_skybox3d.fog.start; // 0x3134
	Float m_skybox3d.fog.end; // 0x3138
	Float m_skybox3d.fog.maxdensity; // 0x3140
	Byte m_skybox3d.fog.enable; // 0x3158
	Byte m_skybox3d.fog.blend; // 0x3159
	Float m_skybox3d.fog.HDRColorScale; // 0x3160
	Vector m_audio.localSound[0]; // 0x3168
	Vector m_audio.localSound[1]; // 0x3174
	Vector m_audio.localSound[2]; // 0x3180
	Vector m_audio.localSound[3]; // 0x318c
	Vector m_audio.localSound[4]; // 0x3198
	Vector m_audio.localSound[5]; // 0x31a4
	Vector m_audio.localSound[6]; // 0x31b0
	Vector m_audio.localSound[7]; // 0x31bc
	Integer m_audio.soundscapeIndex; // 0x31c8
	Integer m_audio.localBits; // 0x31cc
	Integer m_audio.entIndex; // 0x31d0
	Integer m_hTonemapController; // 0x31dc
	Unsigned Integer m_iFOV; // 0x31f4
	Unsigned Integer m_iFOVStart; // 0x31f8
	Unsigned Integer m_afButtonLast; // 0x31fc
	Unsigned Integer m_afButtonPressed; // 0x3200
	Unsigned Integer m_afButtonReleased; // 0x3204
	Unsigned Integer m_nButtons; // 0x3208
	Unsigned Integer m_nImpulse; // 0x320c
	Unsigned Integer m_ladderSurfaceProps; // 0x3210
	Unsigned Integer m_flPhysics; // 0x3214
	Float m_flFOVTime; // 0x3218
	Float m_flWaterJumpTime; // 0x321c
	Float m_flSwimSoundTime; // 0x3220
	Float m_ignoreLadderJumpTime; // 0x3224
	Bool m_bHasWalkMovedSinceLastJump; // 0x3228
	Float m_flStepSoundTime; // 0x322c
	Float m_surfaceFriction; // 0x323c
	Vector m_vecLadderNormal; // 0x3240
	Unsigned Integer m_iBonusProgress; // 0x3250
	Unsigned Integer m_iBonusChallenge; // 0x3254
	Float m_flMaxspeed; // 0x3258
	Entity Handle m_hZoomOwner; // 0x325c
	Unsigned Integer m_vphysicsCollisionState; // 0x326c
	Vector m_oldOrigin; // 0x3270
	Bool m_bTouchedPhysObject; // 0x327c
	Bool m_bPhysicsWasFrozen; // 0x327d
	Vector m_vNewVPhysicsPosition; // 0x3280
	Vector m_vNewVPhysicsVelocity; // 0x328c
	Unsigned Integer m_afPhysicsFlags; // 0x32fc
	Entity Handle m_hVehicle; // 0x3300
	Entity Handle m_hLastWeapon; // 0x3304
	Entity Handle m_hViewModel; // 0x3308
	Bool m_fOnTarget; // 0x3334
	Integer m_hUseEntity; // 0x3338
	Integer m_iDefaultFOV; // 0x333c
	Integer m_hViewEntity; // 0x334c
	Byte m_bShouldDrawPlayerWhileUsingViewEntity; // 0x3350
	Integer m_hConstraintEntity; // 0x3354
	Vector m_vecConstraintCenter; // 0x3358
	Float m_flConstraintRadius; // 0x3364
	Float m_flConstraintWidth; // 0x3368
	Float m_flConstraintSpeedFactor; // 0x336c
	Byte m_bConstraintPastRadius; // 0x3370
	Integer m_iDeathPostEffect; // 0x3384
	Integer m_iObserverMode; // 0x3388
	Byte m_bActiveCameraMan; // 0x338c
	Byte m_bCameraManXRay; // 0x338d
	Byte m_bCameraManOverview; // 0x338e
	Byte m_bCameraManScoreBoard; // 0x338f
	Byte m_uCameraManGraphs; // 0x3390
	Integer m_hObserverTarget; // 0x339c
	Float m_flDeathTime; // 0x33d4
	Float m_flNextDecalTime; // 0x33d8
	Float m_fForceTeam; // 0x33dc
	Unsigned Integer m_nTickBase; // 0x3440
	Float m_flLaggedMovementValue; // 0x35a4
	Vector m_vecPreviouslyPredictedOrigin; // 0x35b8
	String (18) m_szLastPlaceName; // 0x35c4
	Byte m_ubEFNoInterpParity; // 0x35e8
	Integer m_hPostProcessCtrl; // 0x37b8
	Integer m_hColorCorrectionCtrl; // 0x37bc
	Integer m_PlayerFog.m_hCtrl; // 0x37c4
};

struct CBaseFlex {
	Vector m_viewtarget; // 0x2a00
	Integer m_blinktoggle; // 0x2be4
};

struct CSunlightShadowControl {
	Vector m_shadowDirection; // 0x9d8
	Byte m_bEnabled; // 0x9e4
	String (260) m_TextureName; // 0x9e5
	Integer m_LightColor; // 0xaf0
	Float m_flColorTransitionTime; // 0xb04
	Float m_flSunDistance; // 0xb08
	Float m_flFOV; // 0xb0c
	Float m_flNearZ; // 0xb10
	Float m_flNorthOffset; // 0xb14
	Byte m_bEnableShadows; // 0xb18
};

struct CShadowControl {
	Vector m_shadowDirection; // 0x9d8
	Integer m_shadowColor; // 0x9e4
	Float m_flShadowMaxDist; // 0x9e8
	Byte m_bDisableShadows; // 0x9ec
	Byte m_bEnableLocalLightShadows; // 0x9ed
};

struct CBaseCombatWeapon {
	Unsigned Integer m_nNextThinkTick; // 0xfc
	Entity Handle m_hOwner; // 0x3240
	Unsigned Integer m_nViewModelIndex; // 0x3244
	Float m_flNextPrimaryAttack; // 0x3248
	Float m_flNextSecondaryAttack; // 0x324c
	Unsigned Integer m_iViewModelIndex; // 0x3250
	Unsigned Integer m_iWorldModelIndex; // 0x3254
	Unsigned Integer m_iWorldDroppedModelIndex; // 0x3258
	Unsigned Integer m_iWeaponModule; // 0x325c
	Unsigned Integer m_iNumEmptyAttacks; // 0x3260
	Integer m_hWeaponWorldModel; // 0x3264
	Unsigned Integer m_iState; // 0x3268
	Unsigned Integer m_iPrimaryAmmoType; // 0x326c
	Unsigned Integer m_iSecondaryAmmoType; // 0x3270
	Unsigned Integer m_iClip1; // 0x3274
	Unsigned Integer m_iClip2; // 0x3278
	Unsigned Integer m_iPrimaryReserveAmmoCount; // 0x327c
	Unsigned Integer m_iSecondaryReserveAmmoCount; // 0x3280
	Float m_flTimeWeaponIdle; // 0x3284
	Float m_flNextEmptySoundTime; // 0x3288
	Float m_fMinRange1; // 0x328c
	Float m_fMinRange2; // 0x3290
	Float m_fMaxRange1; // 0x3294
	Float m_fMaxRange2; // 0x3298
	Float m_fFireDuration; // 0x329c
	Unsigned Integer m_Activity; // 0x32a4
	Unsigned Integer m_iPrimaryAmmoCount; // 0x32a8
	Unsigned Integer m_iSecondaryAmmoCount; // 0x32ac
	Unsigned Integer m_iszName; // 0x32b0
	Bool m_bRemoveable; // 0x32b4
	Bool m_bInReload; // 0x32b5
	Bool m_bFireOnEmpty; // 0x32b6
	Bool m_bFiresUnderwater; // 0x32b7
	Bool m_bAltFiresUnderwater; // 0x32b8
	Bool m_bReloadsSingly; // 0x32b9
	Byte m_bFlipViewModel; // 0x32d4
	Integer m_iWeaponOrigin; // 0x32d8
};

struct CPropVehicleChoreoGeneric {
	Integer m_hPlayer; // 0x2a04
	Byte m_bEnterAnimOn; // 0x2a0c
	Byte m_bExitAnimOn; // 0x2a0d
	Vector m_vecEyeExitEndpoint; // 0x2a10
	Byte m_bForceEyesToAttachment; // 0x2a1c
	Byte m_vehicleView.bClampEyeAngles; // 0x2aa0
	Float m_vehicleView.flPitchCurveZero; // 0x2aa4
	Float m_vehicleView.flPitchCurveLinear; // 0x2aa8
	Float m_vehicleView.flRollCurveZero; // 0x2aac
	Float m_vehicleView.flRollCurveLinear; // 0x2ab0
	Float m_vehicleView.flFOV; // 0x2ab4
	Float m_vehicleView.flYawMin; // 0x2ab8
	Float m_vehicleView.flYawMax; // 0x2abc
	Float m_vehicleView.flPitchMin; // 0x2ac0
	Float m_vehicleView.flPitchMax; // 0x2ac4
};

struct CSporeExplosion {
	Float m_flSpawnRate; // 0xac4
	Float m_flParticleLifetime; // 0xac8
	Float m_flStartSize; // 0xacc
	Float m_flEndSize; // 0xad0
	Float m_flSpawnRadius; // 0xad4
	Byte m_bEmit; // 0xadc
	Byte m_bDontRemove; // 0xadd
};

struct CFEPlayerDecal {
	Integer m_nUniqueID; // 0x9d8
	Integer m_unAccountID; // 0x9dc
	Integer m_unTraceID; // 0x9e0
	Integer m_rtGcTime; // 0x9e4
	Vector m_vecEndPos; // 0x9e8
	Vector m_vecStart; // 0x9f4
	Vector m_vecRight; // 0xa00
	Vector m_vecNormal; // 0xa0c
	Integer m_nPlayer; // 0xa18
	Integer m_nEntity; // 0xa1c
	Integer m_nHitbox; // 0xa20
	Integer m_nTintID; // 0xa24
	Float m_flCreationTime; // 0xa28
	Byte m_nVersion; // 0xa2c
};

struct CRopeKeyframe {
	Vector m_vecOrigin; // 0x138
	Integer moveparent; // 0x148
	Byte m_iParentAttachment; // 0x2ec
	Byte m_nMinCPULevel; // 0x988
	Byte m_nMaxCPULevel; // 0x989
	Byte m_nMinGPULevel; // 0x98a
	Byte m_nMaxGPULevel; // 0x98b
	Float m_flScrollSpeed; // 0xa0c
	Integer m_RopeFlags; // 0xa10
	Integer m_iRopeMaterialModelIndex; // 0xa14
	Integer m_iDefaultRopeMaterialModelIndex; // 0xa18
	Integer m_nSegments; // 0xca8
	Integer m_hStartPoint; // 0xcac
	Integer m_hEndPoint; // 0xcb0
	Short m_iStartAttachment; // 0xcb4
	Short m_iEndAttachment; // 0xcb6
	Integer m_Subdiv; // 0xcb8
	Integer m_RopeLength; // 0xcbc
	Integer m_Slack; // 0xcc0
	Float m_TextureScale; // 0xcc4
	Integer m_fLockedPoints; // 0xcc8
	Integer m_nChangeCount; // 0xccc
	Float m_Width; // 0xcd0
	Byte m_bConstrainBetweenEndpoints; // 0xd50
};

struct CDronegun {
	Integer m_iHealth; // 0x100
	Vector m_vecAttentionTarget; // 0x2990
	Vector m_vecTargetOffset; // 0x299c
	Byte m_bHasTarget; // 0x29a8
};

struct CPlayerPing {
	Integer m_hPlayer; // 0x9e4
	Integer m_hPingedEntity; // 0x9e8
	Integer m_iType; // 0x9ec
	Byte m_bUrgent; // 0x9f4
	String (18) m_szPlaceName; // 0x9f5
};

struct CBaseWeaponWorldModel {
	Unsigned Integer m_fEffects; // 0xf0
	Integer moveparent; // 0x148
	Short m_nModelIndex; // 0x258
	Unsigned Integer m_nBody; // 0xa20
	Entity Handle m_hCombatWeaponParent; // 0x2a00
};

struct CTEWorldDecal {
	Vector m_vecOrigin; // 0x10
	Integer m_nIndex; // 0x1c
};

struct CSmokeTrail {
	Float m_SpawnRate; // 0xac4
	Vector m_StartColor; // 0xac8
	Vector m_EndColor; // 0xad4
	Float m_Opacity; // 0xae0
	Float m_ParticleLifetime; // 0xae4
	Float m_StopEmitTime; // 0xae8
	Float m_MinSpeed; // 0xaec
	Float m_MaxSpeed; // 0xaf0
	Float m_MinDirectedSpeed; // 0xaf4
	Float m_MaxDirectedSpeed; // 0xaf8
	Float m_StartSize; // 0xafc
	Float m_EndSize; // 0xb00
	Float m_SpawnRadius; // 0xb04
	Byte m_bEmit; // 0xb14
	Integer m_nAttachment; // 0xb18
};

struct CTEParticleSystem {
	Float m_vecOrigin[0]; // 0x10
	Float m_vecOrigin[1]; // 0x14
	Float m_vecOrigin[2]; // 0x18
};

struct CFireTrail {
	Integer m_nAttachment; // 0xac4
	Float m_flLifetime; // 0xac8
};

struct CParticleFire {
	Vector m_vOrigin; // 0xacc
	Vector m_vDirection; // 0xad8
};

struct CEmbers {
	Integer m_nDensity; // 0x9d8
	Integer m_nLifetime; // 0x9dc
	Integer m_nSpeed; // 0x9e0
	Byte m_bEmit; // 0x9e4
};

struct CItemDogtags {
	Integer m_OwningPlayer; // 0x3450
	Integer m_KillingPlayer; // 0x3454
};

struct CSlideshowDisplay {
	Byte m_bEnabled; // 0x9d8
	String (128) m_szDisplayText; // 0x9d9
	String (128) m_szSlideshowDirectory; // 0xa59
	Float m_fMinSlideTime; // 0xb08
	Float m_fMaxSlideTime; // 0xb0c
	Integer m_iCycleType; // 0xb14
	Byte m_bNoListRepeats; // 0xb18
};

struct CRagdollManager {
	Integer m_iCurrentMaxRagdollCount; // 0x9d8
};

struct CFuncMoveLinear {
	Integer m_fFlags; // 0x104
	Vector m_vecVelocity; // 0x114
};

struct CFuncAreaPortalWindow {
	Float m_flFadeStartDist; // 0x9d8
	Float m_flFadeDist; // 0x9dc
	Float m_flTranslucencyLimit; // 0x9e0
	Integer m_iBackgroundModelIndex; // 0x9e4
};

struct CEnvScreenOverlay {
	Array m_iszOverlayNames; // 0x0
	String (255) m_iszOverlayNames[0]; // 0x9d8
	Float m_flOverlayTimes[0]; // 0x13d0
	Float m_flStartTime; // 0x13f8
	Integer m_iDesiredOverlay; // 0x13fc
	Byte m_bIsActive; // 0x1400
};

struct CProp_Hallucination {
	Byte m_bEnabled; // 0x29a9
	Float m_fVisibleTime; // 0x29ac
	Float m_fRechargeTime; // 0x29b0
};

struct CFogController {
	Vector m_fog.dirPrimary; // 0x9dc
	Integer m_fog.colorPrimary; // 0x9e8
	Integer m_fog.colorSecondary; // 0x9ec
	Integer m_fog.colorPrimaryLerpTo; // 0x9f0
	Integer m_fog.colorSecondaryLerpTo; // 0x9f4
	Float m_fog.start; // 0x9f8
	Float m_fog.end; // 0x9fc
	Float m_fog.farz; // 0xa00
	Float m_fog.maxdensity; // 0xa04
	Float m_fog.startLerpTo; // 0xa08
	Float m_fog.endLerpTo; // 0xa0c
	Float m_fog.maxdensityLerpTo; // 0xa10
	Float m_fog.lerptime; // 0xa14
	Float m_fog.duration; // 0xa18
	Byte m_fog.enable; // 0xa1c
	Byte m_fog.blend; // 0xa1d
	Float m_fog.ZoomFogScale; // 0xa20
	Float m_fog.HDRColorScale; // 0xa24
};

struct CEntityParticleTrail {
	Integer m_iMaterialName; // 0xac0
	Float m_flLifetime; // 0xacc
	Float m_flStartSize; // 0xad0
	Float m_flEndSize; // 0xad4
	Integer m_hConstraintEntity; // 0xad8
};

struct CEntityFreezing {
	Vector m_vFreezingOrigin; // 0x9d8
	Float m_flFrozen; // 0xaac
	Byte m_bFinishFreezing; // 0xab0
};

struct CEnvGasCanister {
	Vector2D m_vecOrigin; // 0x138
	Float m_vecOrigin[2]; // 0x140
	Byte m_bLanded; // 0x2990
	Integer m_hSkyboxCopy; // 0x29b8
	Vector m_vecImpactPosition; // 0x29c4
	Vector m_vecStartPosition; // 0x29d0
	Vector m_vecEnterWorldPosition; // 0x29dc
	Vector m_vecDirection; // 0x29e8
	Vector m_vecStartAngles; // 0x29f4
	Float m_flFlightTime; // 0x2a00
	Float m_flFlightSpeed; // 0x2a04
	Float m_flLaunchTime; // 0x2a08
	Float m_flInitialZSpeed; // 0x2a0c
	Float m_flZAcceleration; // 0x2a10
	Float m_flHorizSpeed; // 0x2a14
	Byte m_bLaunchedFromWithinWorld; // 0x2a18
	Vector m_vecParabolaDirection; // 0x2a1c
	Float m_flWorldEnterTime; // 0x2a28
	Vector m_vecSkyboxOrigin; // 0x2a2c
	Float m_flSkyboxScale; // 0x2a38
	Byte m_bInSkybox; // 0x2a3c
	Byte m_bDoImpactEffects; // 0x2a3d
	Integer m_nMyZoneIndex; // 0x2a40
};

struct CSpriteTrail {
	Float m_flLifeTime; // 0x1074
	Float m_flStartWidth; // 0x1078
	Float m_flEndWidth; // 0x107c
	Float m_flStartWidthVariance; // 0x1080
	Float m_flTextureRes; // 0x1084
	Float m_flMinFadeLength; // 0x1088
	Vector m_vecSkyboxOrigin; // 0x108c
	Float m_flSkyboxScale; // 0x1098
};

struct CBreakableProp {
	Vector m_qPreferredPlayerCarryAngles; // 0x2994
	Byte m_bClientPhysics; // 0x29a0
};

struct CHandleTest {
	Integer m_Handle; // 0x9d8
	Byte m_bSendHandle; // 0x9dc
};

struct CTESparks {
	Integer m_nMagnitude; // 0x1c
	Integer m_nTrailLength; // 0x20
	Vector m_vecDir; // 0x24
};

struct CCSPlayerResource {
	Integer m_iPlayerC4; // 0x165c
	Integer m_iPlayerVIP; // 0x1660
	Vector m_bombsiteCenterA; // 0x1664
	Vector m_bombsiteCenterB; // 0x1670
	Byte m_bEndMatchNextMapAllVoted; // 0x6b8c
};

struct CBoneFollower {
	Integer m_modelIndex; // 0x9d8
	Integer m_solidIndex; // 0x9dc
};

struct CWeaponM3 {
	Unsigned Integer m_reloadState; // 0x33e4
};

