// Created by BlueFire1337
// Updated 2022-01-27
// Generated 2022-02-02

namespace off {
	constexpr auto client_render_targets = 0x1fbc3c0;
	constexpr auto ibase_client_dll = 0x1959980;
	constexpr auto iclient_entity_list = 0x1fbbbc8;
	constexpr auto cprediction = 0x1fbbbd0;
	constexpr auto iv_model_render = 0x1239490;
	constexpr auto vgui_system = 0x1f57c70;
	constexpr auto iv_render_view = 0x7512c80;
	constexpr auto iv_debug_overlay = 0x75ade88;
	constexpr auto iv_model_info_client = 0x7512c90;
	constexpr auto iv_engine_client = 0x0;
	constexpr auto iv_engine_trace = 0x7512c98;
	constexpr auto inetwork_string_table = 0x7512ca8;
	constexpr auto cnetwork_u64_table = 0x7510460;
	constexpr auto cinput = 0x1d0b9d0;
	constexpr auto cengine = 0x1240690;
	constexpr auto iswapchain = 0xb933b08;
	constexpr auto cl_entitylist = 0x1972ea8;
	constexpr auto local_entity_handle = 0x1234038;
	constexpr auto local_player = 0x1d22708;
	constexpr auto global_vars = 0x130d100;
	constexpr auto name_list = 0xba19040;
	constexpr auto view_render = 0x7512c88;
	constexpr auto view_matrix = 0x1d504d0;
	constexpr auto client_state = 0x130d3f0;
	constexpr auto sign_on_state = 0x130d488;
	constexpr auto level_name = 0x130d5a0;
	constexpr auto glow_enable = 0x3c8;
	constexpr auto glow_type = 0x2c0;
	constexpr auto glow_color = 0x1d0;
}

struct CWeaponX {
	Integer m_networkedFlags; // 0x3ec
	Integer m_bClientSideAnimation; // 0x1044
	Integer m_weaponOwner; // 0x1690
	Integer m_worldModelIndexOverride; // 0x16a4
	Integer m_iWorldModelIndex; // 0x16a8
	Integer m_holsterModelIndex; // 0x16ac
	Integer m_droppedModelIndex; // 0x16b0
	Integer m_nIdealSequence; // 0x16b4
	Integer m_IdealActivity; // 0x16b8
	Integer m_weaponActivity; // 0x16bc
	Integer m_ActiveState; // 0x16c0
	Integer m_weapState; // 0x16d4
	Integer m_allowedToUse; // 0x16d8
	Integer m_discarded; // 0x16d9
	Integer m_forcedADS; // 0x16dc
	Integer m_tossRelease; // 0x16e0
	Integer m_offhandSwitchSlot; // 0x16e4
	Integer m_energizeState; // 0x16e8
	Integer m_customActivity; // 0x16f4
	Integer m_customActivitySequence; // 0x16f8
	Integer m_customActivityOwner; // 0x16fc
	Integer m_customActivityFlags; // 0x1704
	Float m_moveSpread; // 0x1710
	Float m_spreadStartFracHip; // 0x1718
	Float m_spreadStartFracADS; // 0x171c
	Float m_kickSpreadHipfire; // 0x1720
	Float m_kickSpreadADS; // 0x1724
	Float m_kickScaleBasePitch; // 0x172c
	Float m_kickScaleBaseYaw; // 0x1730
	Float m_kickPatternScaleBase; // 0x1734
	Float m_kickSpringHeatBaseValue; // 0x173c
	Integer m_semiAutoTriggerDown; // 0x1744
	Integer m_pendingTriggerPull; // 0x1745
	Integer m_semiAutoNeedsRechamber; // 0x1746
	Integer m_pendingReloadAttempt; // 0x1747
	Integer m_offhandHybridNormalMode; // 0x1748
	Integer m_pendingoffhandHybridToss; // 0x1749
	Integer m_fastHolster; // 0x174a
	Integer m_didFirstDeploy; // 0x174b
	Integer m_shouldCatch; // 0x174c
	Integer m_clipModelIsHidden; // 0x174d
	Integer m_segmentedReloadEndSeqRequired; // 0x174e
	Integer m_reloadStartedEmpty; // 0x174f
	Integer m_segmentedAnimStartedOneHanded; // 0x1750
	Integer m_segmentedReloadCanRestartLoop; // 0x1751
	Integer m_segmentedReloadLoopFireLocked; // 0x1752
	Integer m_realtimeModCmdHead; // 0x175b
	Integer m_realtimeModCmdCount; // 0x175c
	Integer m_realtimeModCanADS; // 0x175d
	Integer m_customActivityAttachedModelIndex; // 0x1760
	Integer m_customActivityAttachedModelAttachmentIndex; // 0x1764
	Float m_fireRateLerp_startFraction; // 0x176c
	Float m_fireRateLerp_stopFraction; // 0x1774
	Integer m_chargeAnimIndex; // 0x1778
	Integer m_chargeAnimIndexOld; // 0x177c
	Integer m_proScreen_owner; // 0x1780
	Integer m_proScreen_int0; // 0x1784
	Integer m_proScreen_int1; // 0x1788
	Integer m_proScreen_int2; // 0x178c
	Float m_proScreen_float0; // 0x1790
	Float m_proScreen_float1; // 0x1794
	Float m_proScreen_float2; // 0x1798
	Integer m_reloadMilestone; // 0x179c
	Integer m_rechamberMilestone; // 0x17a0
	Integer m_cooldownMilestone; // 0x17a4
	Integer m_prevSeqWeight; // 0x17a8
	Integer m_scriptFlags0; // 0x17b8
	Integer m_scriptInt0; // 0x17bc
	Integer m_scriptInt1; // 0x17be
	Float m_curZoomFOV; // 0x17c0
	Float m_targetZoomFOV; // 0x17c4
	Float m_zoomFOVLerpTime; // 0x17c8
	Integer m_currentAltFireAnimIndex; // 0x17d8
	Integer m_legendaryModelIndex; // 0x17dc
	Integer m_charmModelIndex; // 0x17e0
	Integer m_charmAttachment; // 0x17e4
	Integer m_charmScriptIndex; // 0x17e8
	Integer m_lastTossedGrenade; // 0x17f0
	Integer m_targetingLaserEnabledScript; // 0x17f4
	Integer m_needsReloadCheck; // 0x17f5
	Integer m_needsEmptyCycleCheck; // 0x17f6
	Integer m_skinOverride; // 0x17f8
	Integer m_skinOverrideIsValid; // 0x17fc
	Float m_lastChargeFrac; // 0x1808
	Float m_sustainedLaserCurrentSpread; // 0x1834
	Integer m_sustainedDischargeIsInPrimaryAttack; // 0x1838
	Integer m_sustainedLaserNextRandomSeed; // 0x1839
	Integer m_modBitfieldFromPlayer; // 0x183c
	Integer m_modBitfieldInternal; // 0x1840
	Integer m_modBitfieldCurrent; // 0x1844
	Integer m_curSharedEnergyCost; // 0x1848
	Integer m_grappleWeaponNeedsDryfire; // 0x184c
	Float m_sniperRangeDotDistance; // 0x1850
	Float m_scriptFloat0; // 0x1854
	Integer m_shouldPlayIdleAnims; // 0x1858
	Integer m_scriptActivated; // 0x1859
	Integer m_isLoadoutPickup; // 0x185a
	Integer m_utilityEnt; // 0x185c
	Integer m_weaponNameIndex; // 0x1864
	Integer m_oaActiveOverride; // 0x1870
	Integer m_parentTurret; // 0x1874
};

struct CScriptNetDataGlobal {
};

struct CDynamicPropLightweight {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Integer m_visibilityFlags; // 0x440
	Vector m_localAngles; // 0x490
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	Integer m_parentAttachmentModel; // 0x860
	Float m_fadeDist; // 0x86c
	Integer m_nSkin; // 0xea8
	Integer m_skinMod; // 0xeac
};

struct CZipline {
	Integer m_numZiplinePoints; // 0x8
	Integer m_isInit; // 0xa68
	Integer m_ziplineType; // 0xa6c
	Vector m_ziplineStart; // 0xa70
	Vector m_ziplineEnd; // 0xa7c
	Float m_springDistance; // 0xc8c
	Float m_springDistanceScale; // 0xc90
	Integer m_outerZiplineEntity; // 0xc98
	Integer m_numAttachedEntities; // 0xda0
	Integer m_ziplineOwner; // 0xda4
	Integer m_ziplineMaterialIndex; // 0xda8
	Integer m_prevZipline; // 0xdac
	Integer m_nextZipline; // 0xdb0
	Integer m_detachEndOnUse; // 0xdb4
	Integer m_dropToBottom; // 0xdb5
	Float m_ziplineAutoDetachDistance; // 0xdb8
	Integer m_ziplineVerticalPushOffInDirectionX; // 0xdbc
	Integer m_ziplineVerticalPreserveVelocity; // 0xdbd
	Float m_ziplineWidth; // 0xdc0
	Integer m_ziplineEnabled; // 0xdc4
	Integer m_numZiplineRestPositions; // 0xe88
	Float m_ziplineFadeDist; // 0xe8c
	Float m_ziplineSpeedScale; // 0xe90
};

struct CEnvWind {
	Integer m_iWindSeed; // 0xa6c
	Integer m_iMinWind; // 0xa70
	Integer m_iMaxWind; // 0xa74
	Integer m_iMinGust; // 0xa7c
	Integer m_iMaxGust; // 0xa80
	Float m_flMinGustDelay; // 0xa84
	Float m_flMaxGustDelay; // 0xa88
	Float m_flGustDuration; // 0xa8c
	Integer m_iGustDirChange; // 0xa90
	Integer m_iInitialWindDir; // 0xad0
	Float m_flInitialWindSpeed; // 0xad4
};

struct CZiplineEnd {
	Float m_autoDetachDistance; // 0xa60
	Integer m_verticalPushOffInDirectionX; // 0xa64
	Integer m_prevZipline; // 0xa68
};

struct CScriptNetDataGlobalNonRewind {
};

struct CGrappleHook {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_visibilityFlags; // 0x440
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer64 m_realmsBitMask; // 0xa48
	Integer m_grappleZipline; // 0x1690
};

struct CGameRulesProxy {
};

struct CBaseViewModel {
	Float m_animStartCycle; // 0xc
	Float m_animPlaybackRate; // 0x10
	Integer m_animFrozen; // 0x14
	Integer m_animModelIndex; // 0x18
	Integer m_animSequence; // 0x1c
	Integer m_nNewSequenceParity; // 0x20
	Integer m_fEffects; // 0x44
	Integer m_clrRender; // 0x50
	Integer m_nModelIndex; // 0x64
	Integer m_nRenderMode; // 0x4b9
	Integer m_nBody; // 0xeb0
	Integer m_nResetEventsParity; // 0xebc
	Integer m_bSequenceFinished; // 0xf54
	Float m_flModelScale; // 0xf60
	Integer m_viewModelOwner; // 0x1a5c
	Integer m_projectileIsVisible; // 0x1a60
	Integer m_bBlockEventLayer; // 0x1e40
	Integer m_isAdsTransition; // 0x1e41
	Integer m_hWeapon; // 0x1e44
};

struct CBaseAnimatingOverlay {
};

struct CInfoTarget {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_iTeamNum; // 0x448
	Integer m_bIsSoundCodeControllerValueSet; // 0x47c
	Float m_flSoundCodeControllerValue; // 0x480
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	String m_iSignifierName; // 0x580
	String m_iName; // 0x589
	Integer m_scriptNameIndex; // 0x690
	Integer m_instanceNameIndex; // 0x694
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
	Integer m_firstChildEntityLink; // 0xa40
	Integer m_firstParentEntityLink; // 0xa44
};

struct CTitanSoul {
	Integer m_bossPlayer; // 0x124
	Integer m_shieldHealth; // 0x170
	Integer m_shieldHealthMax; // 0x174
	Integer m_networkedFlags; // 0x3ec
	Integer m_titan; // 0xa60
	Integer m_titanSoulScriptNetData; // 0xa68
	Integer m_damageComboStartHealth; // 0xc24
	Integer m_stance; // 0xdc8
	Integer m_doomed; // 0xdcc
	Integer64 m_playerSettingsNum; // 0xdd0
	Integer m_invalidHealthBarEnt; // 0xdd8
	Integer m_bEjecting; // 0xdd9
	Integer m_isValidRodeoTarget; // 0xdda
};

struct CBaseEntity {
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_usableType; // 0x48
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_clrRender; // 0x50
	Integer m_cellZ; // 0x54
	Integer m_clIntensity; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_bossPlayer; // 0x124
	Integer m_shieldHealth; // 0x170
	Integer m_shieldHealthMax; // 0x174
	Integer m_networkedFlags; // 0x3ec
	Integer m_visibilityFlags; // 0x440
	Integer m_iTeamNum; // 0x448
	Integer m_teamMemberIndex; // 0x450
	Integer m_squadID; // 0x454
	Integer m_grade; // 0x458
	Integer m_ignorePredictedTriggerFlags; // 0x45c
	Integer m_passThroughFlags; // 0x464
	Integer m_passThroughThickness; // 0x468
	Float m_passThroughDirection; // 0x46c
	Integer m_bIsSoundCodeControllerValueSet; // 0x47c
	Float m_flSoundCodeControllerValue; // 0x480
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	Integer m_bRenderWithViewModels; // 0x4a8
	Integer m_nRenderFX; // 0x4a9
	Integer m_nRenderMode; // 0x4b9
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	Integer m_contents; // 0x544
	Integer m_collideWithOwner; // 0x548
	String m_iSignifierName; // 0x580
	String m_iName; // 0x589
	Integer m_scriptNameIndex; // 0x690
	Integer m_instanceNameIndex; // 0x694
	String m_holdUsePrompt; // 0x718
	String m_pressUsePrompt; // 0x720
	Integer m_phaseShiftFlags; // 0x7b8
	Integer m_baseTakeDamage; // 0x7bc
	Integer m_invulnerableToDamageCount; // 0x7c0
	Vector m_attachmentLerpStartOrigin; // 0x83c
	Vector m_attachmentLerpStartAngles; // 0x848
	Integer m_parentAttachmentModel; // 0x860
	Float m_fadeDist; // 0x86c
	Integer m_dissolveEffectEntityHandle; // 0x918
	Integer m_usablePriority; // 0x928
	Float m_usableDistanceOverride; // 0x92c
	Float m_usableFOV; // 0x930
	Float m_usePromptSize; // 0x934
	Integer m_firstChildEntityLink; // 0xa40
	Integer m_firstParentEntityLink; // 0xa44
	Integer64 m_realmsBitMask; // 0xa48
};

struct CEntityDissolve {
	Float m_flFadeStart; // 0xa6c
	Float m_flFadeLength; // 0xa70
	Integer m_nDissolveType; // 0xa74
	Integer m_isLethal; // 0xa78
};

struct CTitan_Cockpit {
};

struct CFuncBrushLightweight {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Integer m_visibilityFlags; // 0x440
	Vector m_localAngles; // 0x490
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
};

struct CCrossbowBolt {
};

struct CScriptNetData_SNDC_GLOBAL_NON_REWIND {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc82
	Integer m_int32s[0]; // 0xcc8
	Integer m_entities[0]; // 0xd58
};

struct CSkyCamera {
};

struct CDeathBoxProp {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_usableType; // 0x48
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Integer m_visibilityFlags; // 0x440
	Integer m_iTeamNum; // 0x448
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	String m_iSignifierName; // 0x580
	String m_iName; // 0x589
	String m_holdUsePrompt; // 0x718
	String m_pressUsePrompt; // 0x720
	Integer m_lifeState; // 0x798
	Integer m_scriptNetData; // 0x79c
	Integer m_parentAttachmentModel; // 0x860
	Float m_fadeDist; // 0x86c
	Integer m_usablePriority; // 0x928
	Float m_usableDistanceOverride; // 0x92c
	Float m_usableFOV; // 0x930
	Float m_usePromptSize; // 0x934
	Integer m_firstChildEntityLink; // 0xa40
	Integer m_firstParentEntityLink; // 0xa44
	Integer64 m_realmsBitMask; // 0xa48
	Integer m_bUseHitboxesForRenderBox; // 0x1691
	Integer m_bAnimateInStaticShadow; // 0x1692
	Integer m_wantsScopeHighlight; // 0x1693
	String m_customOwnerName; // 0x16d0
};

struct CShieldProp {
	Integer m_impactEffectColorID; // 0x16d0
};

struct CPropSurvival {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_usableType; // 0x48
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Integer m_visibilityFlags; // 0x440
	Vector m_localAngles; // 0x490
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	String m_iSignifierName; // 0x580
	Integer m_parentAttachmentModel; // 0x860
	Integer m_usablePriority; // 0x928
	Float m_usableDistanceOverride; // 0x92c
	Float m_usableFOV; // 0x930
	Float m_usePromptSize; // 0x934
	Integer64 m_realmsBitMask; // 0xa48
	Integer m_nSkin; // 0xea8
	Integer m_skinMod; // 0xeac
	Integer m_nBody; // 0xeb0
	Integer m_camoIndex; // 0xeb4
	Integer m_ammoInClip; // 0x1694
	Integer m_customScriptInt; // 0x1698
	Integer m_survivalProperty; // 0x169c
	Integer m_weaponNameIndex; // 0x16a4
	Integer m_modBitField; // 0x16a8
	Float m_survivalPropFadeDist; // 0x16b0
};

struct CMovieDisplay {
	Integer m_bEnabled; // 0xa60
	Integer m_bLooping; // 0xa61
	String m_szMovieFilename; // 0xa63
	String m_szGroupName; // 0xae3
	String m_szExternalAudioFilename; // 0xb63
	Integer m_bStretchToFill; // 0xba3
	Integer m_bLetterbox; // 0xba4
	Integer m_bPausesWithClient; // 0xba5
	Integer m_bForcedSlave; // 0xba6
	Integer m_bUseCustomUVs; // 0xba7
	Float m_flUMin; // 0xbac
	Float m_flUMax; // 0xbb0
	Float m_flVMin; // 0xbb4
	Float m_flVMax; // 0xbb8
};

struct CStatusEffectPlugin {
	Integer m_hOwnerEntity; // 0x4a4
};

struct CHardPointFrontierEntity {
};

struct CTEScriptParticleSystemOnEntityWithPos {
	Vector m_origin; // 0x40
	Vector m_angles; // 0x4c
};

struct CBaseTempEntity {
};

struct CBaseCombatCharacter {
	Float m_vecViewOffset.x; // 0x38
	Float m_vecViewOffset.y; // 0x3c
	Float m_vecViewOffset.z; // 0x40
	Float m_cloakEndTime; // 0x19c
	Float m_cloakFadeOutStartTime; // 0x1a4
	Float m_cloakFadeInDuration; // 0x1a8
	Float m_cloakFlickerAmount; // 0x1ac
	Integer m_networkedFlags; // 0x3ec
	Vector m_deathVelocity; // 0x470
	Integer m_nameVisibilityFlags; // 0x9b8
	Integer m_lastFiredWeapon; // 0x1a08
	Integer m_sharedEnergyCount; // 0x1a10
	Integer m_sharedEnergyTotal; // 0x1a14
	Integer m_sharedEnergyLockoutThreshold; // 0x1a18
	Float m_sharedEnergyRegenDelay; // 0x1a24
	Integer m_lastCycleSlot; // 0x1aa4
	Integer m_weaponPermission; // 0x1aac
	Integer m_weaponDisabledInScript; // 0x1ab4
	Integer m_weaponDisabledFlags; // 0x1ad9
	Integer m_weaponTypeDisabledFlags; // 0x1adc
	Integer m_weaponAmmoRegenDisabled; // 0x1ae9
	Integer m_weaponAmmoRegenDisabledRefCount; // 0x1aec
	Integer m_hudInfo_visibilityTestAlwaysPasses; // 0x1af0
	Integer m_contextAction; // 0x1b04
	Integer m_phaseShiftType; // 0x1b30
	String m_targetInfoIconName; // 0x1b84
	Integer m_targetInfoPingValue; // 0x1bc4
};

struct CColorCorrection {
	Integer m_hOwnerEntity; // 0x4a4
	Vector m_localOrigin; // 0xa60
	Float m_MinFalloff; // 0xa6c
	Float m_MaxFalloff; // 0xa70
	Float m_flFadeInDuration; // 0xa74
	Float m_flFadeOutDuration; // 0xa78
	Float m_flMaxWeight; // 0xa7c
	Float m_flCurWeight; // 0xa80
	String m_netLookupFilename; // 0xa84
	Integer m_bEnabled; // 0xb88
	Integer m_bMaster; // 0xb89
	Integer m_bClientSide; // 0xb8a
	Integer m_bExclusive; // 0xb8b
};

struct CVFogVolume {
	Vector m_absorption; // 0xa90
	Vector m_scattering; // 0xa9c
	Vector m_emission; // 0xaa8
	Float m_phaseG; // 0xab4
	Float m_edgeFade; // 0xab8
	Integer m_shapeType; // 0xabc
	Float m_sunIntensity; // 0xac0
	Float m_ambientIntensity; // 0xac4
	Vector m_ambientProbeOffset; // 0xac8
	Float m_zNearFadeStart; // 0xad4
	Float m_zNearFadeEnd; // 0xad8
	Float m_zFarFadeStart; // 0xadc
	Float m_zFarFadeEnd; // 0xae0
	Integer m_enabled; // 0xae4
};

struct CMissile {
	Integer m_hSpecificTarget; // 0x2df4
	Vector m_targetPosition; // 0x2e04
	Integer m_useTargetPosition; // 0x2e10
};

struct CParticleSystem {
	Vector m_localOrigin; // 0x4
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_visibilityFlags; // 0x440
	Integer m_iTeamNum; // 0x448
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
	Integer64 m_realmsBitMask; // 0xa48
	Integer m_iEffectIndex; // 0xa60
	Integer m_nStopType; // 0xa64
	Integer m_bActive; // 0xa69
	Integer m_bForceRenderAlways; // 0xa6b
	Integer m_bInSkybox; // 0xa75
	Integer m_killForReplay; // 0xa76
	Integer m_killIfOverLimit; // 0xa77
	Integer m_controlPoint1AttachmentIndex; // 0xae4
	Integer m_parentAttachType; // 0xafc
};

struct CBaseVPhysicsTrigger {
};

struct CFuncMoveLinear {
	Integer m_fFlags; // 0x98
	Vector m_vecVelocity; // 0x484
};

struct CImportantOnEntSound {
	Integer m_networkTableSoundID; // 0xa60
	Integer m_hAttachedToEntity; // 0xa64
	Integer m_hSuppressedClient; // 0xa6c
	Integer m_milesSignal; // 0xa70
};

struct CInfoTargetGravity {
	Integer m_gravityDirectionType; // 0xa60
	Integer m_gravityPair; // 0xa68
};

struct CNPC_Drone {
	Integer m_bAttackTarget; // 0x1df0
	Integer m_scanTarget; // 0x1df4
	Float m_beamSpread; // 0x1df8
};

struct CBoneFollower {
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	Integer m_modelIndex; // 0xa60
	Integer m_boneIndex; // 0xa64
};

struct CProjectile {
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Integer m_iTeamNum; // 0x448
	Vector m_vecVelocity; // 0x484
	Vector m_localAngles; // 0x490
	Integer m_hOwnerEntity; // 0x4a4
	Integer m_CollisionGroup; // 0x540
	Integer m_PredictableID; // 0x7cc
	Integer64 m_realmsBitMask; // 0xa48
	Integer m_weaponDataIsSet; // 0x1690
	Integer m_forceAdjustToGunBarrelDisabled; // 0x1691
	Integer m_weaponClassIndex; // 0x1694
	Float m_destructionDistance; // 0x1698
	Integer m_passThroughDepthTotal; // 0x169c
	Integer m_modBitfield; // 0x16a0
	Integer m_overrideMods; // 0x16a4
	Integer m_projectileTrailIndex; // 0x16a8
	Integer m_impactEffectTable; // 0x16ac
	Integer m_reducedEffects; // 0x16b0
	Integer m_weaponSource; // 0x16b8
	Integer m_passThroughModCount; // 0x16bc
	Vector m_launchOrigin; // 0x16d4
};

struct CScriptTraceVolume {
	Integer m_shapeType; // 0xa60
	Float m_sphereRadius; // 0xa64
	Vector m_boxMins; // 0xa68
	Vector m_boxMaxs; // 0xa74
	Integer m_drawDebug; // 0xa80
};

struct CWaterLODControl {
	Float m_flCheapWaterStartDistance; // 0xa60
	Float m_flCheapWaterEndDistance; // 0xa64
};

struct CBaseAnimating {
	Float m_animPlaybackRate; // 0x10
	Integer m_animFrozen; // 0x14
	Integer m_animModelIndex; // 0x18
	Integer m_nNewSequenceParity; // 0x20
	Integer m_bClientSideRagdoll; // 0x84
	Vector m_vecForce; // 0x88
	Float m_flEstIkOffset; // 0x94
	Integer m_passDamageToParent; // 0x7c4
	Integer m_animNetworkFlags; // 0xa88
	Integer m_animActive; // 0xa8c
	Integer m_animCollisionEnabled; // 0xa8f
	Integer m_animRelativeToGroundEnabled; // 0xa90
	Integer m_animPlantingEnabled; // 0xa91
	Vector m_animInitialPos; // 0xa94
	Vector m_animInitialVel; // 0xaa0
	Table m_animInitialRot; // 0xaac
	Vector m_animInitialCorrectPos; // 0xabc
	Table m_animInitialCorrectRot; // 0xac8
	Vector m_animEntityToRefOffset; // 0xad8
	Table m_animEntityToRefRotation; // 0xae4
	Integer m_animScriptSequence; // 0xafc
	Integer m_animScriptModel; // 0xb00
	Integer m_animIgnoreParentRot; // 0xb04
	Integer m_animMotionMode; // 0xb08
	Integer m_syncingWithEntity; // 0xb84
	Integer m_predictedAnimEventCount; // 0xbd0
	Integer m_predictedAnimEventTarget; // 0xbd4
	Integer m_predictedAnimEventSequence; // 0xbd8
	Integer m_predictedAnimEventModel; // 0xbdc
	Integer m_nRagdollImpactFXTableId; // 0xbf4
	Float m_flSkyScaleStartValue; // 0xbf8
	Float m_flSkyScaleEndValue; // 0xbfc
	Integer m_sequenceTransitionerLayerCount; // 0xdc0
	Integer m_nSkin; // 0xea8
	Integer m_skinMod; // 0xeac
	Integer m_nBody; // 0xeb0
	Integer m_camoIndex; // 0xeb4
	Integer m_nForceBone; // 0xef0
	Integer m_bSequenceFinished; // 0xf54
	Float m_lockedAnimDeltaYaw; // 0xf58
	Float m_flModelScale; // 0xf60
};

struct CPointCamera {
	Float m_FOV; // 0xac0
	Integer m_bFogEnable; // 0xae8
	Integer m_bActive; // 0xae9
};

struct CScriptMover {
	Integer m_parentAttachmentType; // 0x20
	Vector m_vecAngVelocity; // 0x128
	Vector m_vecVelocity; // 0x484
	Vector m_localAngles; // 0x490
	Integer m_parentAttachmentHitbox; // 0x85c
};

struct CNPC_Dropship {
	Integer m_titanSoul; // 0x1b28
	Integer m_bJetWakeFXEnabled; // 0x1e10
};

struct CDynamicProp {
	Integer m_iTeamNum; // 0x448
	Integer m_lifeState; // 0x798
	Integer m_bUseHitboxesForRenderBox; // 0x1691
	Integer m_bAnimateInStaticShadow; // 0x1692
	Integer m_wantsScopeHighlight; // 0x1693
};

struct CLootRoller {
	Integer m_tier; // 0x16f0
	Integer m_hasVaultKey; // 0x16f4
};

struct CPostProcessController {
	Integer m_bMaster; // 0xa78
};

struct CHardPointEntity {
	Vector m_localOrigin; // 0x4
	Integer m_iTeamNum; // 0x448
	Integer m_state; // 0xa64
	Float m_estimatedCaptureTime; // 0xa68
	Float m_progressRefPoint; // 0xa6c
	Integer m_teamMilitiaAICount; // 0xa70
	Integer m_teamIMCAICount; // 0xa74
	Integer m_teamMilitiaPlayerCount; // 0xa78
	Integer m_teamIMCPlayerCount; // 0xa7c
	Integer m_teamMilitiaPlayerTitanCount; // 0xa80
	Integer m_teamIMCPlayerTitanCount; // 0xa84
	Integer m_hardpointID; // 0xa88
	Integer m_terminal; // 0xa90
};

struct CScriptNetData_SNDC_PLAYER_GLOBAL {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc82
	Integer m_int32s[0]; // 0xcc8
	Integer m_entities[0]; // 0xd28
};

struct CPlayerVehicle {
	Array m_vehiclePlayers; // 0x0
	Float m_vecViewOffset.x; // 0x38
	Float m_vecViewOffset.y; // 0x3c
	Float m_vecViewOffset.z; // 0x40
	Integer m_iHealth; // 0x438
	Vector m_localAngles; // 0x490
	Integer m_iMaxHealth; // 0x578
	Integer m_vehicleDriver; // 0x1a04
	Integer m_vehiclePlayers[0]; // 0x1a14
	Integer m_vehiclePlayerCount; // 0x1a24
	Integer m_vehicleActivated; // 0x1a28
	Integer m_blockDuckInput; // 0x1a29
	Integer m_vehicleFlags; // 0x1a2c
	Integer m_vehicleType; // 0x1a30
	Float m_vehicleLaunchTime; // 0x1a38
	Float m_cameraVehicleMaxDist; // 0x1a40
	Float m_cameraVehicleMaxVertDist; // 0x1a44
	Vector m_vehicleVelocity; // 0x1a48
	Integer m_vehicleGroundEntity; // 0x1a54
	Vector m_vehicleGroundNormal; // 0x1a58
	Integer m_hoverVehicleIsOnGround; // 0x1a84
	Integer m_hoverVehicleIsParked; // 0x1b6d
	Integer m_hoverVehicleIsMarkedAsDrivingForward; // 0x1b6e
	Float m_hoverVehicleStunTimeEnd; // 0x1b70
	Float m_hoverVehicleThrottle; // 0x1b74
	Float m_hoverVehicleBanking; // 0x1b7c
	Float m_hoverVehicleFrictionLastTime; // 0x1b80
	Integer m_hoverVehicleFrictionSurfPropOther; // 0x1b84
	Vector m_hoverVehicleFrictionNormal; // 0x1b88
	Vector m_hoverVehicleFrictionPos; // 0x1b94
	Vector m_overrideVehicleAngles; // 0x1cbc
	Integer m_overrideVehicleAnglesUntilTick; // 0x1cc8
	Integer m_pushingEnt; // 0x1cf0
	Integer m_materialDualColorMask; // 0x1d84
};

struct CBreakableProp {
};

struct CBaseTrigger {
	Integer m_spawnflags; // 0x94
	Integer m_bClientSidePredicted; // 0xa90
};

struct CAI_BaseNPC {
	Vector m_localOrigin; // 0x4
	Integer m_hGroundEntity; // 0x434
	Integer m_iHealth; // 0x438
	Vector m_localAngles; // 0x490
	Integer m_iMaxHealth; // 0x578
	Integer m_lifeState; // 0x798
	Integer m_fireteamSlotIndex; // 0x1c30
	Integer m_aiSprinting; // 0x1d9a
	Integer m_aiNetworkFlags; // 0x1dbc
	Integer m_isHologram; // 0x1dc0
	String m_title; // 0x1dc1
	Integer m_aiSettingsIndex; // 0x1de4
	Integer m_subclass; // 0x1de8
};

struct CBreakableSurface {
	Integer m_nNumWide; // 0xa68
	Integer m_nNumHigh; // 0xa6c
	Float m_flPanelWidth; // 0xa70
	Float m_flPanelHeight; // 0xa74
	Vector m_vNormal; // 0xa78
	Vector m_vUp; // 0xa84
	Vector m_vCorner; // 0xa9c
	Integer m_bIsBroken; // 0xaa8
	Integer m_nSurfaceType; // 0xaac
};

struct CDoorMover {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_usableType; // 0x48
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Vector m_vecAngVelocity; // 0x128
	Integer m_networkedFlags; // 0x3ec
	Vector m_vecVelocity; // 0x484
	Vector m_localAngles; // 0x490
	Vector m_vecMins; // 0x4d0
	Vector m_vecMaxs; // 0x4dc
	Integer m_usSolidFlags; // 0x4e8
	Integer m_nSolidType; // 0x4ec
	Integer m_triggerBloat; // 0x4ed
	Integer m_collisionDetailLevel; // 0x4ee
	Integer m_nSurroundType; // 0x4fc
	Vector m_vecSpecifiedSurroundingMins; // 0x508
	Vector m_vecSpecifiedSurroundingMaxs; // 0x514
	Integer m_CollisionGroup; // 0x540
	String m_iSignifierName; // 0x580
	Integer m_scriptNameIndex; // 0x690
	String m_holdUsePrompt; // 0x718
	String m_pressUsePrompt; // 0x720
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
	Float m_fadeDist; // 0x86c
	Integer m_usablePriority; // 0x928
	Float m_usableDistanceOverride; // 0x92c
	Float m_usableFOV; // 0x930
	Float m_usePromptSize; // 0x934
	Integer m_doorFlags; // 0x18c0
};

struct CPortalPointPush {
	Integer m_bEnabled; // 0xa60
	Float m_flMagnitude; // 0xa64
	Float m_flRadius; // 0xa68
	Float m_flInnerRadius; // 0xa6c
	Float m_flConeOfInfluence; // 0xa70
};

struct CWorld {
	Vector m_WorldMins; // 0xa60
	Vector m_WorldMaxs; // 0xa6c
	Integer m_bStartDark; // 0xa78
	Integer m_statusEffectsGenerationNV; // 0xa8c
	Integer m_worldFlags; // 0xa94
	Integer m_timeshiftArmDeviceSkin; // 0xa98
	Integer m_spTitanLoadoutUnlocks; // 0xa9c
	Integer m_teamRelationRulesForPVE; // 0x11e0
};

struct CTriggerCylinderHeavy {
	Integer64 m_triggerFilterMask; // 0xaa0
	Float m_radius; // 0xaa8
	Float m_aboveHeight; // 0xaac
	Float m_belowHeight; // 0xab0
	Integer m_triggerType; // 0xab4
	Float m_vertOverride; // 0xab8
	Float m_launchPower; // 0xabc
	Float m_punchSoftAmount; // 0xac0
	Float m_punchHardAmount; // 0xac4
	Float m_punchRandomBoost; // 0xac8
	Float m_nextLaunchTime; // 0xacc
	Integer m_gravityCannonLaunched; // 0xad0
	Float m_launchFlightTime; // 0xad4
	Float m_launchDelayAmount; // 0xad8
	Integer m_enableDoubleJump; // 0xadc
	Float m_gravityLiftUpSpeed; // 0xae0
	Float m_gravityLiftMoveSpeed; // 0xae4
	Float m_gravityLiftMoveAccel; // 0xae8
	Float m_gravityLiftToCenterSpeed; // 0xaec
	Float m_gravityLiftToCenterAccel; // 0xaf0
	Float m_gravityLiftEjectUpSpeed; // 0xaf4
	Float m_gravityLiftEjectForwardSpeed; // 0xaf8
	Float m_gravityLiftMaxEjectTime; // 0xafc
	Float m_gravityLiftMaxHoverTime; // 0xb00
	Integer m_blackholeIsStrongPulling; // 0xb04
	Float m_blackholeStrongPullAddlSpeed; // 0xb08
	Float m_blackholeOuterPullSpeed; // 0xb0c
	Float m_blackholeInnerPullSpeed; // 0xb10
	Float m_blackholeOuterMoveSpeed; // 0xb14
	Float m_blackholeInnerMoveSpeed; // 0xb18
	Float m_blackholeInnerRadius; // 0xb1c
	Integer m_teslaTrapFXVisible; // 0xb20
	Float m_teslaTrapBaseHeight; // 0xb24
	Integer m_teslaTrapStart; // 0xb30
	Integer m_teslaTrapEnd; // 0xb34
	Vector m_teslaTrapUp; // 0xb38
	Vector m_launchDir; // 0xb44
	Integer m_mortarRingSegementStart; // 0xb58
	Integer m_mortarRingSegementEnd; // 0xb5c
};

struct CScriptMoverTrainNode {
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_scriptNameIndex; // 0x690
	Integer m_firstChildEntityLink; // 0xa40
	Integer m_firstParentEntityLink; // 0xa44
	Integer m_numSmoothPoints; // 0xa60
	Integer m_trainNodeMakeSmoothPointsParity; // 0xa64
	Integer m_tangentType; // 0xa68
	Integer m_perfectCircularRotation; // 0xa6c
};

struct CVGuiScreen {
	Float m_flWidth; // 0xa60
	Float m_flHeight; // 0xa64
	Integer m_nPanelName; // 0xa70
	Integer m_nAttachmentIndex; // 0xa8c
	Integer m_nOverlayMaterial; // 0xa90
	Integer m_fScreenFlags; // 0xa94
	Integer m_hPlayerOwner; // 0xaf8
};

struct CEntityLinkPage {
};

struct CInfoPlacementHelper {
	Vector m_localOrigin; // 0x4
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Vector m_localAngles; // 0x490
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
};

struct CRopeKeyframe {
	Vector m_localOrigin; // 0x4
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_clrRender; // 0x50
	Integer m_visibilityFlags; // 0x440
	Integer m_hOwnerEntity; // 0x4a4
	Integer m_nRenderMode; // 0x4b9
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
	Float m_fadeDist; // 0x86c
	Float m_ropeZiplineAutoDetachDistance; // 0xa60
	Integer m_ziplineSagEnable; // 0xa64
	Float m_ziplineSagHeight; // 0xa68
	Float m_ziplineMoveSpeedScale; // 0xb60
	Float m_wiggleMaxLen; // 0xb6c
	Float m_wiggleMagnitude; // 0xb70
	Float m_wiggleSpeed; // 0xb74
	Float m_flScrollSpeed; // 0xbac
	Integer m_RopeFlags; // 0xbb0
	Integer m_iRopeMaterialModelIndex; // 0xbb4
	Integer m_nSegments; // 0xe38
	Integer m_hStartPoint; // 0xe3c
	Integer m_hEndPoint; // 0xe40
	Integer m_hPrevPoint; // 0xe44
	Integer m_iStartAttachment; // 0xe48
	Integer m_iEndAttachment; // 0xe4a
	Integer m_subdivStackCount; // 0xe74
	Integer m_subdivSliceCount; // 0xe78
	Integer m_ropeLength; // 0xe7c
	Integer m_constraintIterations; // 0xe84
	Float m_ropeDampening; // 0xe88
	Integer m_Slack; // 0xe8c
	Float m_TextureScale; // 0xe90
	Float m_TextureScale; // 0xe90
	Integer m_fLockedPoints; // 0xe94
	Integer m_lockDirectionCutoffLength; // 0xe98
	Float m_lockDirectionStrength; // 0xe9c
	Integer m_nChangeCount; // 0xea0
	Float m_Width; // 0xea4
	Integer m_bConstrainBetweenEndpoints; // 0xf38
};

struct CTEExplosion {
	Float m_fScale; // 0x38
	Integer m_nFrameRate; // 0x3c
	Integer m_nFlags; // 0x40
	Vector m_vecNormal; // 0x44
	Integer m_chMaterialType; // 0x50
	Integer m_nRadius; // 0x54
	Integer m_nInnerRadius; // 0x58
	Integer m_nMagnitude; // 0x5c
	Integer m_impactEffectTableIndex; // 0x60
	Integer m_surfaceProp; // 0x64
	Integer m_owner; // 0x68
	Integer m_victim; // 0x6c
};

struct CScriptNetData_SNDC_DEATH_BOX {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc74
	Integer m_int32s[0]; // 0xc98
	Integer m_entities[0]; // 0xcb0
};

struct CStatueProp {
	Integer m_hInitBaseAnimating; // 0x16f0
	Integer m_bShatter; // 0x16f4
	Integer m_nShatterFlags; // 0x16f8
	Vector m_vShatterPosition; // 0x16fc
	Vector m_vShatterForce; // 0x1708
};

struct CCPropDoor {
	Integer m_fEffects; // 0x44
	Integer m_usableType; // 0x48
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Integer m_networkedFlags; // 0x3ec
	Vector m_localAngles; // 0x490
	Integer m_nSkin; // 0xea8
	Integer m_skinMod; // 0xeac
	Float m_closedAngle; // 0x1700
	Float m_angle; // 0x1704
	Float m_startAngle; // 0x1708
	Float m_startAngleVel; // 0x170c
	Integer m_isLocked; // 0x1714
	Integer m_isFrozen; // 0x1715
	Integer m_oppositeDoor; // 0x1718
	Integer m_interactingPlayer; // 0x1768
	Integer m_interactingPlayerWantsOpen; // 0x176c
};

struct CPhysicsProp {
	Integer m_spawnflags; // 0x94
	Integer m_bAwake; // 0x1698
	Integer m_ignoresCollisionWithCombatCharacters; // 0x1699
	Integer m_isRolling; // 0x169a
	Integer m_networkTableRollSoundId; // 0x169c
	Integer m_iPhysicsMode; // 0x16c8
	Float m_fMass; // 0x16cc
	Vector m_collisionMins; // 0x16d0
	Vector m_collisionMaxs; // 0x16dc
};

struct CBaseToggle {
	Vector m_vecFinalDest; // 0xa74
	Integer m_movementType; // 0xa80
};

struct CFirstPersonProxy {
	Integer m_viewModelOwner; // 0x16c0
};

struct CTriggerSlip {
	Vector m_defaultSlipDirection; // 0xaa0
	Float m_slipSpeed; // 0xaac
	Float m_slipAcceleration; // 0xab0
};

struct CScriptMoverLightweight {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_fEffects; // 0x44
	Integer m_moverNetworkCellX; // 0x4c
	Integer m_moverNetworkCellY; // 0x50
	Integer m_moverNetworkCellZ; // 0x54
	Vector m_moverNetworkLocalOrigin; // 0x58
	Integer m_nModelIndex; // 0x64
	Vector m_moverNetworkAngularVelocity; // 0x128
	Integer m_networkedFlags; // 0x3ec
	Vector m_moverNetworkLinearVelocity; // 0x484
	Vector m_moverNetworkLocalAngles; // 0x490
	Integer m_scriptNameIndex; // 0x690
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
	Float m_fadeDist; // 0x86c
	Integer m_moveModeNonPhysics; // 0x17b4
	Integer m_moveModeIsLocal; // 0x17b8
	Vector m_moveToStartPos; // 0x17bc
	Vector m_moveToEndPos; // 0x17c8
	Float m_moveToTimeEaseIn; // 0x17dc
	Float m_moveToTimeEaseOut; // 0x17e0
	Vector m_moveVelocity; // 0x17e4
	Vector m_moveGravity; // 0x17f0
	Float m_trainStartDistance; // 0x1804
	Integer m_trainCurrentNode; // 0x1808
	Integer m_trainStopNode; // 0x180c
	Float m_trainInitialSpeed; // 0x1810
	Float m_trainGoalSpeed; // 0x1814
	Float m_trainAcceleration; // 0x1818
	Integer m_trainLastNode; // 0x181c
	Float m_trainLastDistance; // 0x1820
	Float m_trainLastSpeed; // 0x1824
	Integer m_trainFollowMover; // 0x1828
	Float m_trainFollowDistance; // 0x182c
	Integer m_trainBreadcrumbBegin; // 0x1850
	Integer m_trainBreadcrumbCount; // 0x1854
	Float m_trainAutoRollStrength; // 0x1858
	Float m_trainAutoRollLookAheadDistance; // 0x185c
	Float m_trainAutoRollMax; // 0x1860
	Integer m_trainSimulateBeforeMeEntity; // 0x1864
	Integer m_rotateModeNonPhysics; // 0x1868
	Integer m_rotateModeIsLocal; // 0x186c
	Vector m_RotateToAnglesStart; // 0x1870
	Vector m_RotateToAnglesEnd; // 0x187c
	Float m_rotateToTimeEaseIn; // 0x1890
	Float m_rotateToTimeEaseOut; // 0x1894
	Vector m_rotateAxis; // 0x1898
	Float m_rotateSpeed; // 0x18a4
	Float m_trainPitchMax; // 0x18a8
	Integer m_useNonPhysicsMoveInterpolation; // 0x18c4
};

struct CTriggerUpdraft {
};

struct CTEShatterSurface {
	Vector m_vecOrigin; // 0x28
	Vector m_vecAngles; // 0x34
	Vector m_vecForce; // 0x40
	Vector m_vecForcePos; // 0x4c
	Float m_flWidth; // 0x58
	Float m_flHeight; // 0x5c
	Float m_flShardSize; // 0x60
	Integer m_nSurfaceType; // 0x64
};

struct CPlayer {
	Array m_passives; // 0x0
	Vector m_vecAbsOrigin; // 0x4
	Integer m_fFlags; // 0x98
	Integer m_hGroundEntity; // 0x434
	Integer m_iHealth; // 0x438
	Float m_flMaxspeed; // 0x43c
	Integer m_iMaxHealth; // 0x578
	Integer m_lifeState; // 0x798
	Integer m_decalIndex; // 0xeb8
	Integer m_titanSoul; // 0x1b28
	Integer m_bZooming; // 0x1c31
	Float m_zoomBaseFrac; // 0x1c38
	Float m_flHullHeight; // 0x20ec
	Float m_angEyeAngles.x; // 0x20f0
	Float m_angEyeAngles.y; // 0x20f4
	Float m_traversalAnimProgress; // 0x20fc
	Float m_sprintTiltFrac; // 0x2100
	Integer m_ammoPoolCapacity; // 0x257c
	Integer m_hasBadReputation; // 0x2580
	Integer m_happyHourActive; // 0x2581
	String m_hardwareIcon; // 0x2588
	Integer m_hardware; // 0x2598
	Integer m_unspoofedHardware; // 0x2599
	Integer64 m_platformUserId; // 0x25a0
	Integer64 m_unSpoofedPlatformUserId; // 0x25a8
	Integer64 m_EadpUserId; // 0x25b0
	Integer m_crossPlayChat; // 0x25b8
	Integer m_crossPlayChatFriends; // 0x25b9
	Integer64 m_classModsActive; // 0x25c0
	Integer64 m_passives[ 0 ]; // 0x26f8
	Integer m_bleedoutState; // 0x2718
	Float m_bleedoutStartTime; // 0x271c
	Integer m_damageComboStartHealth; // 0x28c8
	Integer m_gestureAutoKillBitfield; // 0x298c
	Integer m_autoSprintForced; // 0x29d0
	Integer m_fIsSprinting; // 0x29d4
	Integer m_playerSettingForStickySprintForward; // 0x29e2
	Integer m_playerVehicleCount; // 0x2a18
	Integer m_playerVehicleDriven; // 0x2a1c
	Integer m_duckState; // 0x2a24
	Integer m_leanState; // 0x2a28
	Integer m_canStand; // 0x2a2d
	Vector m_StandHullMin; // 0x2a30
	Vector m_StandHullMax; // 0x2a3c
	Vector m_DuckHullMin; // 0x2a48
	Vector m_DuckHullMax; // 0x2a54
	Integer m_entitySyncingWithMe; // 0x2a60
	Vector m_upDir; // 0x2a64
	Integer m_traversalState; // 0x2ae0
	Integer m_traversalType; // 0x2ae4
	Vector m_traversalForwardDir; // 0x2b10
	Vector m_traversalRefPos; // 0x2b1c
	Float m_traversalYawDelta; // 0x2b48
	Integer m_traversalYawPoseParameter; // 0x2b4c
	Integer m_wallClimbSetUp; // 0x2b64
	Integer m_wallHanging; // 0x2b65
	Array m_grapplePoints; // 0x2b90
	Vector m_grappleVel; // 0x2b98
	Vector m_grapplePoints[0]; // 0x2ba4
	Integer m_grapplePointCount; // 0x2bd4
	Integer m_grappleAttached; // 0x2bd8
	Integer m_grapplePulling; // 0x2bd9
	Integer m_grappleSwinging; // 0x2bda
	Integer m_grappleRetracting; // 0x2bdb
	Integer m_grappleForcedRetracting; // 0x2bdc
	Integer m_grappleGracePeriodFinished; // 0x2bdd
	Float m_grappleUsedPower; // 0x2be0
	Integer m_grappleMeleeTarget; // 0x2bf4
	Integer m_grappleAutoAimTarget; // 0x2bf8
	Integer m_grappleHasGoodVelocity; // 0x2bfc
	Float m_grappleSwingDetachLowSpeed; // 0x2c04
	Integer m_grappleActive; // 0x2c20
	Integer m_turret; // 0x2c68
	Integer m_activeZipline; // 0x2dc0
	Integer m_ziplineValid3pWeaponLayerAnim; // 0x2dcc
	Integer m_ziplineState; // 0x2dd0
	Integer m_ziplineGrenadeBeginStationEntity; // 0x2e64
	Integer m_ziplineGrenadeBeginStationAttachmentIndex; // 0x2e68
	Integer m_isPerformingBoostAction; // 0x2ea9
	Integer m_lastJumpPadTouched; // 0x2fa0
	Integer m_launchCount; // 0x2fa8
	Integer m_useCredit; // 0x3110
	Integer m_playerFlags; // 0x3120
	Integer m_hasMic; // 0x3128
	Integer m_inPartyChat; // 0x3129
	Float m_playerMoveSpeedScale; // 0x312c
	Integer m_bShouldDrawPlayerWhileUsingViewEntity; // 0x3368
	Integer m_iSpawnParity; // 0x33d4
	Integer m_grappleHook; // 0x3578
	Integer m_petTitan; // 0x357c
	Integer m_xp; // 0x35a4
	Float m_skill_mu; // 0x35ac
	Integer m_bHasMatchAdminRole; // 0x35b0
	Integer m_ubEFNoInterpParity; // 0x3e98
	Integer m_hColorCorrectionCtrl; // 0x3e9c
	String m_title; // 0x3ec0
	Integer m_nPlayerCond; // 0x41f8
	Integer m_pilotClassIndex; // 0x4244
	Integer m_pilotClassActivityModifier; // 0x4248
	Integer m_playerScriptNetDataGlobal; // 0x44d0
	Integer m_helmetType; // 0x44d8
	Integer m_armorType; // 0x44dc
	Integer m_controllerModeActive; // 0x44e4
	Float m_skydiveForwardPoseValueTarget; // 0x4500
	Float m_skydiveSidePoseValueTarget; // 0x450c
	Integer m_skydiveState; // 0x4534
	Float m_skydiveDiveAngle; // 0x454c
	Integer m_skydiveIsDiving; // 0x4550
	Float m_skydiveSpeed; // 0x4554
	Float m_skydiveStrafeAngle; // 0x4558
	Float m_skydivePlayerPitch; // 0x456c
	Float m_skydivePlayerYaw; // 0x4570
	Integer m_skydiveFromSkywardLaunch; // 0x45ad
	Integer m_skywardLaunchState; // 0x45b0
	Float m_skywardLaunchSlowStartTime; // 0x45c4
	Float m_skywardLaunchSlowEndTime; // 0x45c8
	Float m_skywardLaunchFastEndTime; // 0x45cc
	Float m_skywardLaunchEndTime; // 0x45d4
	Float m_skywardLaunchSlowSpeed; // 0x45dc
	Float m_skywardLaunchFastSpeed; // 0x45e0
	Vector m_skywardOffset; // 0x45e4
	Integer m_skywardLaunchInterrupted; // 0x45f4
	Integer m_skywardLaunchFollowing; // 0x45f5
};

struct CGlobalNonRewinding {
};

struct CScriptProp {
	Float m_cloakEndTime; // 0x19c
	Float m_cloakFadeOutStartTime; // 0x1a4
	Float m_cloakFadeInDuration; // 0x1a8
	Float m_cloakFlickerAmount; // 0x1ac
	Integer m_networkedFlags; // 0x3ec
	Integer m_iHealth; // 0x438
	Integer m_iMaxHealth; // 0x578
	Integer m_nameVisibilityFlags; // 0x9b8
	String m_title; // 0x16f0
	String m_footstepType; // 0x1710
	Integer m_renderColorFriendlyIsValid; // 0x1750
	Integer m_renderColorFriendly; // 0x1751
	Integer m_armorType; // 0x1758
	Integer m_scriptPropFlags; // 0x175c
	Integer m_scriptPropSmartAmmoLockType; // 0x1760
};

struct CPlayerTasklist {
	Integer m_customInt; // 0xa64
	String m_taskStringA; // 0xc3c
	String m_taskStringB; // 0xc7c
	String m_taskStringC; // 0xcbc
	String m_taskStringD; // 0xcfc
	String m_taskStringE; // 0xd3c
	String m_taskStringF; // 0xd7c
	String m_taskStringG; // 0xdbc
	String m_taskStringH; // 0xdfc
	String m_taskStringI; // 0xe3c
	String m_taskStringJ; // 0xe7c
	String m_taskStringK; // 0xebc
	String m_taskStringL; // 0xefc
	String m_taskStringM; // 0xf3c
};

struct CBaseParticleEntity {
};

struct CTEGibEvent {
	Integer m_hVictim; // 0x28
	Vector m_attackDir; // 0x2c
};

struct CTEBreakModel {
	Vector m_vecOrigin; // 0x28
	Float m_angRotation.x; // 0x34
	Float m_angRotation.y; // 0x38
	Float m_angRotation.z; // 0x3c
	Vector m_vecSize; // 0x40
	Vector m_vecVelocity; // 0x4c
	Integer m_nRandomization; // 0x58
	Integer m_nModelIndex; // 0x5c
	Integer m_nCount; // 0x60
	Float m_fTime; // 0x64
	Integer m_nFlags; // 0x68
};

struct CFuncBrush {
};

struct CVortexSphere {
	Integer m_spawnflags; // 0x94
	Integer m_iHealth; // 0x438
	Integer m_enabled; // 0xa60
	Float m_radius; // 0xa64
	Float m_height; // 0xa68
	Float m_bulletFov; // 0xa6c
	Integer m_bulletAbsorbedCount; // 0xa70
	Integer m_projectileAbsorbedCount; // 0xa74
	Integer m_ownerWeapon; // 0xa78
	Integer m_vortexEffect; // 0xa7c
	Vector m_vortexLocalAngles; // 0xa80
	String m_gunAttachment; // 0xa90
};

struct CTriggerPointGravity {
	Float m_pullOuterRadius; // 0xaa0
	Float m_pullInnerRadius; // 0xaa4
	Float m_reduceSpeedOuterRadius; // 0xaa8
	Float m_reduceSpeedInnerRadius; // 0xaac
	Float m_pullAccel; // 0xab0
	Float m_pullSpeed; // 0xab4
	Integer m_constantPullStregnth; // 0xab8
};

struct CPlayerDecoy {
	Float m_cloakEndTime; // 0x19c
	Float m_cloakFadeOutStartTime; // 0x1a4
	Float m_cloakFadeInDuration; // 0x1a8
	Float m_cloakFlickerAmount; // 0x1ac
	Integer m_iHealth; // 0x438
	Integer m_iMaxHealth; // 0x578
	Integer m_nameVisibilityFlags; // 0x9b8
	Integer m_currentState; // 0x1690
	Integer m_decoyFlags; // 0x1694
	Integer64 m_currentClass; // 0x16a0
	Integer64 m_classModsActive; // 0x16a8
	Vector m_decoyVelocity; // 0x16b0
};

struct CTEPhysicsProp {
	Vector m_vecOrigin; // 0x28
	Float m_angRotation.x; // 0x34
	Float m_angRotation.y; // 0x38
	Float m_angRotation.z; // 0x3c
	Vector m_vecVelocity; // 0x40
	Integer m_nModelIndex; // 0x4c
	Integer m_nSkin; // 0x50
	Integer m_nFlags; // 0x54
	Integer m_nEffects; // 0x58
};

struct CEnvDecoy {
};

struct CTriggerOutOfBounds {
};

struct CDynamicLight {
	Integer m_Flags; // 0xa60
	Integer m_LightStyle; // 0xa61
	Float m_Radius; // 0xa64
	Integer m_Exponent; // 0xa68
	Float m_InnerAngle; // 0xa6c
	Float m_OuterAngle; // 0xa70
	Float m_SpotRadius; // 0xa74
};

struct CHealthKit {
};

struct CCascadeLight {
	Vector m_shadowDirection; // 0xa60
	Vector m_envLightShadowDirection; // 0xa78
	Integer m_bEnabled; // 0xa8c
	Integer m_bEnableShadows; // 0xa8d
	Integer m_LightColor; // 0xa8f
	String m_cloudMaskName; // 0xa93
	Vector m_cloudOffset; // 0xb98
	Float m_cloudScale; // 0xba4
};

struct CTriggerNoZipline {
};

struct CScriptNetData_SNDC_PLAYER_EXCLUSIVE {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc8a
	Integer m_int32s[0]; // 0xcd0
	Integer m_entities[0]; // 0xd10
};

struct CTriggerNoObjectPlacement {
};

struct CScriptNetData_SNDC_PLAYER_EXCLUSIVE_EXPANDED {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc8a
	Integer m_int32s[0]; // 0xd48
	Integer m_entities[0]; // 0xd88
};

struct CLootGrabber {
	Integer m_impactEffectColorID; // 0x16d0
	Integer m_lootBeingGrabbed; // 0x16d8
	Float m_lootGrabDist; // 0x16dc
};

struct CTurret {
	Integer m_iHealth; // 0x438
	Integer m_iMaxHealth; // 0x578
	Integer m_settingsIndex; // 0x1a08
	Integer m_driver; // 0x1a38
	Float m_forceAimPitch; // 0x1a60
	Float m_forceAimYaw; // 0x1a64
	Float m_driverDetachTime; // 0x1a68
	Integer m_driverState; // 0x1a6c
	Integer m_turretWeapon; // 0x1a70
	String m_title; // 0x1a7c
};

struct CTriggerPlayerMovement {
};

struct CBaseGrenade {
	Integer m_parentAttachmentType; // 0x20
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_baseTakeDamage; // 0x7bc
	Integer m_invulnerableToDamageCount; // 0x7c0
	Integer m_parentAttachmentHitbox; // 0x85c
	Integer m_parentAttachmentModel; // 0x860
	Integer m_doesExplode; // 0x2d91
	Float m_DmgRadius; // 0x2d94
	Integer m_grenadeStatusFlags; // 0x2db8
	Vector m_ziplineGrenadeExpectedEndPosition; // 0x2e28
};

struct CTESoundDispatch {
	Integer m_targetEnt; // 0x28
	Integer64 m_soundID; // 0x30
	Integer m_networkTableID; // 0x38
	Integer m_soundIsStart; // 0x3c
	Float m_seek; // 0x40
};

struct CTEScriptParticleSystem {
	Integer m_effectIndex; // 0x28
	Vector m_origin; // 0x2c
	Vector m_angles; // 0x38
	Vector m_controlPoint1; // 0x44
};

struct CTEProjectileTrail {
	Integer m_owner; // 0x28
	Vector m_startPos; // 0x2c
	Vector m_endPos; // 0x38
	Integer m_weaponClassIndex; // 0x44
	Integer m_modBitfield; // 0x48
	Integer m_projectileTrailIndex; // 0x4c
	Integer m_impactEffectTable; // 0x50
};

struct CScriptNetData {
	Integer m_hOwnerEntity; // 0x4a4
};

struct CPlayerWaypoint {
	Integer m_parentAttachmentIndex; // 0x24
	Integer m_cellX; // 0x4c
	Integer m_cellY; // 0x50
	Integer m_cellZ; // 0x54
	Vector m_localOrigin; // 0x58
	Integer m_networkedFlags; // 0x3ec
	Integer m_visibilityFlags; // 0x440
	Integer m_iTeamNum; // 0x448
	Integer m_teamMemberIndex; // 0x450
	Integer m_hOwnerEntity; // 0x4a4
	String m_iSignifierName; // 0x580
	Integer m_parentAttachmentModel; // 0x860
	Integer64 m_realmsBitMask; // 0xa48
	Integer m_waypointType; // 0xa60
	Integer m_waypointBitfield; // 0xa64
	Integer m_objectivePackedInt; // 0xb48
	String m_waypointGroupName; // 0xb4c
	Integer m_waypointGroupFlags; // 0xb6c
	String m_waypointCustomType; // 0xb70
	String m_waypointStringA; // 0xb90
	String m_waypointStringB; // 0xbd0
	String m_waypointAssetA; // 0xc18
	String m_waypointAssetB; // 0xc98
};

struct CScriptNetData_SNDC_TITAN_SOUL {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc7a
	Integer m_int32s[0]; // 0xca0
	Integer m_entities[0]; // 0xcd8
};

struct CEntityBlocker {
};

struct CPredictedFirstPersonProxy {
};

struct CNPC_Titan {
	Integer m_decalIndex; // 0xeb8
	Integer m_titanSoul; // 0x1b28
	Integer m_grappleHook; // 0x1df0
	Array m_grapplePoints; // 0x1df8
	Vector m_grappleVel; // 0x1e00
	Vector m_grapplePoints[0]; // 0x1e0c
	Integer m_grapplePointCount; // 0x1e3c
	Integer m_grappleAttached; // 0x1e40
	Integer m_grapplePulling; // 0x1e41
	Integer m_grappleSwinging; // 0x1e42
	Integer m_grappleRetracting; // 0x1e43
	Integer m_grappleForcedRetracting; // 0x1e44
	Integer m_grappleGracePeriodFinished; // 0x1e45
	Float m_grappleUsedPower; // 0x1e48
	Integer m_grappleMeleeTarget; // 0x1e5c
	Integer m_grappleAutoAimTarget; // 0x1e60
	Integer m_grappleHasGoodVelocity; // 0x1e64
	Float m_grappleSwingDetachLowSpeed; // 0x1e6c
	Integer m_grappleActive; // 0x1e88
	Integer m_canStand; // 0x1e89
};

struct CTriggerNoGrapple {
};

struct CAmbientGeneric {
	Float m_radius; // 0xa60
	Integer m_isEnabled; // 0xa64
	Integer m_networkTableSoundID; // 0xa70
	Vector m_networkedSegmentEndpointWorldSpace; // 0xa78
	Integer m_hasPolylineSegments; // 0xa84
};

struct CTeam {
	Integer m_score; // 0xa60
	Integer m_score2; // 0xa64
	Integer m_kills; // 0xa68
	Integer m_deaths; // 0xa6c
	Integer m_iRoundsWon; // 0xa70
	Integer m_iTeamTeamNum; // 0xa74
	Vector m_teamColor; // 0xa78
	String m_szTeamname; // 0xaa8
};

struct CTEParticleSystem {
	Float m_vecOrigin.x; // 0x28
	Float m_vecOrigin.y; // 0x2c
	Float m_vecOrigin.z; // 0x30
};

struct CNPC_SentryTurret {
	Integer m_turretState; // 0x1df0
	Integer m_killCount; // 0x1df4
	Integer m_titanKillCount; // 0x1df8
	Integer m_eyeAttach; // 0x1dfc
	Integer m_controlPanel; // 0x1e00
};

struct CBaseButton {
	Integer m_usable; // 0xa90
};

struct CInfoTargetMinimap {
};

struct CScriptNetData_SNDC_GLOBAL {
	Array m_bools; // 0x0
	Array m_ranges; // 0x0
	Array m_int32s; // 0x0
	Array m_times; // 0x0
	Array m_entities; // 0x0
	Integer m_bools[0]; // 0xc70
	Integer m_ranges[0]; // 0xc82
	Integer m_int32s[0]; // 0xcc8
	Integer m_entities[0]; // 0xd58
};

struct CTEScriptParticleSystemOnEntity {
	Integer m_effectIndex; // 0x28
	Integer m_ent; // 0x2c
	Integer m_attachType; // 0x30
	Integer m_attachmentIndex; // 0x34
	Integer m_attachType2; // 0x38
	Integer m_attachmentIndex2; // 0x3c
};

struct CTEEffectDispatch {
	Float m_vOrigin.x; // 0x28
	Float m_vOrigin.y; // 0x2c
	Float m_vOrigin.z; // 0x30
	Float m_vStart.x; // 0x34
	Float m_vStart.y; // 0x38
	Float m_vStart.z; // 0x3c
	Vector m_vNormal; // 0x40
	Vector m_vAngles; // 0x4c
	Integer m_effectFlags; // 0x58
	Integer m_effectEntHandle; // 0x78
	Integer m_otherEntHandle; // 0x7c
	Float m_flScale; // 0x80
	Float m_flMagnitude; // 0x84
	Float m_flRadius; // 0x88
	Integer m_nAttachmentIndex; // 0x8c
	Integer m_attachmentIndexForViewmodel; // 0x90
	Integer m_nSurfaceProp; // 0x94
	Integer m_nDamageType; // 0x98
	Integer m_nOtherEntIndex; // 0x9c
	Integer m_sharedInt32_A; // 0xa4
	Integer m_sharedInt32_B; // 0xa8
	Integer m_iImpactEffectTableIndex; // 0xac
	Integer m_nColor; // 0xb0
	Integer m_persistentWeaponEffect; // 0xc4
	Integer m_iEffectName; // 0xc8
};

