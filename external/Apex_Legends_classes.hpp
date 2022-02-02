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

	namespace n_CWeaponX {
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_bClientSideAnimation = 0x1044; // Integer
		constexpr auto m_weaponOwner = 0x1690; // Integer
		constexpr auto m_worldModelIndexOverride = 0x16a4; // Integer
		constexpr auto m_iWorldModelIndex = 0x16a8; // Integer
		constexpr auto m_holsterModelIndex = 0x16ac; // Integer
		constexpr auto m_droppedModelIndex = 0x16b0; // Integer
		constexpr auto m_nIdealSequence = 0x16b4; // Integer
		constexpr auto m_IdealActivity = 0x16b8; // Integer
		constexpr auto m_weaponActivity = 0x16bc; // Integer
		constexpr auto m_ActiveState = 0x16c0; // Integer
		constexpr auto m_weapState = 0x16d4; // Integer
		constexpr auto m_allowedToUse = 0x16d8; // Integer
		constexpr auto m_discarded = 0x16d9; // Integer
		constexpr auto m_forcedADS = 0x16dc; // Integer
		constexpr auto m_tossRelease = 0x16e0; // Integer
		constexpr auto m_offhandSwitchSlot = 0x16e4; // Integer
		constexpr auto m_energizeState = 0x16e8; // Integer
		constexpr auto m_customActivity = 0x16f4; // Integer
		constexpr auto m_customActivitySequence = 0x16f8; // Integer
		constexpr auto m_customActivityOwner = 0x16fc; // Integer
		constexpr auto m_customActivityFlags = 0x1704; // Integer
		constexpr auto m_moveSpread = 0x1710; // Float
		constexpr auto m_spreadStartFracHip = 0x1718; // Float
		constexpr auto m_spreadStartFracADS = 0x171c; // Float
		constexpr auto m_kickSpreadHipfire = 0x1720; // Float
		constexpr auto m_kickSpreadADS = 0x1724; // Float
		constexpr auto m_kickScaleBasePitch = 0x172c; // Float
		constexpr auto m_kickScaleBaseYaw = 0x1730; // Float
		constexpr auto m_kickPatternScaleBase = 0x1734; // Float
		constexpr auto m_kickSpringHeatBaseValue = 0x173c; // Float
		constexpr auto m_semiAutoTriggerDown = 0x1744; // Integer
		constexpr auto m_pendingTriggerPull = 0x1745; // Integer
		constexpr auto m_semiAutoNeedsRechamber = 0x1746; // Integer
		constexpr auto m_pendingReloadAttempt = 0x1747; // Integer
		constexpr auto m_offhandHybridNormalMode = 0x1748; // Integer
		constexpr auto m_pendingoffhandHybridToss = 0x1749; // Integer
		constexpr auto m_fastHolster = 0x174a; // Integer
		constexpr auto m_didFirstDeploy = 0x174b; // Integer
		constexpr auto m_shouldCatch = 0x174c; // Integer
		constexpr auto m_clipModelIsHidden = 0x174d; // Integer
		constexpr auto m_segmentedReloadEndSeqRequired = 0x174e; // Integer
		constexpr auto m_reloadStartedEmpty = 0x174f; // Integer
		constexpr auto m_segmentedAnimStartedOneHanded = 0x1750; // Integer
		constexpr auto m_segmentedReloadCanRestartLoop = 0x1751; // Integer
		constexpr auto m_segmentedReloadLoopFireLocked = 0x1752; // Integer
		constexpr auto m_realtimeModCmdHead = 0x175b; // Integer
		constexpr auto m_realtimeModCmdCount = 0x175c; // Integer
		constexpr auto m_realtimeModCanADS = 0x175d; // Integer
		constexpr auto m_customActivityAttachedModelIndex = 0x1760; // Integer
		constexpr auto m_customActivityAttachedModelAttachmentIndex = 0x1764; // Integer
		constexpr auto m_fireRateLerp_startFraction = 0x176c; // Float
		constexpr auto m_fireRateLerp_stopFraction = 0x1774; // Float
		constexpr auto m_chargeAnimIndex = 0x1778; // Integer
		constexpr auto m_chargeAnimIndexOld = 0x177c; // Integer
		constexpr auto m_proScreen_owner = 0x1780; // Integer
		constexpr auto m_proScreen_int0 = 0x1784; // Integer
		constexpr auto m_proScreen_int1 = 0x1788; // Integer
		constexpr auto m_proScreen_int2 = 0x178c; // Integer
		constexpr auto m_proScreen_float0 = 0x1790; // Float
		constexpr auto m_proScreen_float1 = 0x1794; // Float
		constexpr auto m_proScreen_float2 = 0x1798; // Float
		constexpr auto m_reloadMilestone = 0x179c; // Integer
		constexpr auto m_rechamberMilestone = 0x17a0; // Integer
		constexpr auto m_cooldownMilestone = 0x17a4; // Integer
		constexpr auto m_prevSeqWeight = 0x17a8; // Integer
		constexpr auto m_scriptFlags0 = 0x17b8; // Integer
		constexpr auto m_scriptInt0 = 0x17bc; // Integer
		constexpr auto m_scriptInt1 = 0x17be; // Integer
		constexpr auto m_curZoomFOV = 0x17c0; // Float
		constexpr auto m_targetZoomFOV = 0x17c4; // Float
		constexpr auto m_zoomFOVLerpTime = 0x17c8; // Float
		constexpr auto m_currentAltFireAnimIndex = 0x17d8; // Integer
		constexpr auto m_legendaryModelIndex = 0x17dc; // Integer
		constexpr auto m_charmModelIndex = 0x17e0; // Integer
		constexpr auto m_charmAttachment = 0x17e4; // Integer
		constexpr auto m_charmScriptIndex = 0x17e8; // Integer
		constexpr auto m_lastTossedGrenade = 0x17f0; // Integer
		constexpr auto m_targetingLaserEnabledScript = 0x17f4; // Integer
		constexpr auto m_needsReloadCheck = 0x17f5; // Integer
		constexpr auto m_needsEmptyCycleCheck = 0x17f6; // Integer
		constexpr auto m_skinOverride = 0x17f8; // Integer
		constexpr auto m_skinOverrideIsValid = 0x17fc; // Integer
		constexpr auto m_lastChargeFrac = 0x1808; // Float
		constexpr auto m_sustainedLaserCurrentSpread = 0x1834; // Float
		constexpr auto m_sustainedDischargeIsInPrimaryAttack = 0x1838; // Integer
		constexpr auto m_sustainedLaserNextRandomSeed = 0x1839; // Integer
		constexpr auto m_modBitfieldFromPlayer = 0x183c; // Integer
		constexpr auto m_modBitfieldInternal = 0x1840; // Integer
		constexpr auto m_modBitfieldCurrent = 0x1844; // Integer
		constexpr auto m_curSharedEnergyCost = 0x1848; // Integer
		constexpr auto m_grappleWeaponNeedsDryfire = 0x184c; // Integer
		constexpr auto m_sniperRangeDotDistance = 0x1850; // Float
		constexpr auto m_scriptFloat0 = 0x1854; // Float
		constexpr auto m_shouldPlayIdleAnims = 0x1858; // Integer
		constexpr auto m_scriptActivated = 0x1859; // Integer
		constexpr auto m_isLoadoutPickup = 0x185a; // Integer
		constexpr auto m_utilityEnt = 0x185c; // Integer
		constexpr auto m_weaponNameIndex = 0x1864; // Integer
		constexpr auto m_oaActiveOverride = 0x1870; // Integer
		constexpr auto m_parentTurret = 0x1874; // Integer
	}

	namespace n_CScriptNetDataGlobal {
	}

	namespace n_CDynamicPropLightweight {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_fadeDist = 0x86c; // Float
		constexpr auto m_nSkin = 0xea8; // Integer
		constexpr auto m_skinMod = 0xeac; // Integer
	}

	namespace n_CZipline {
		constexpr auto m_numZiplinePoints = 0x8; // Integer
		constexpr auto m_isInit = 0xa68; // Integer
		constexpr auto m_ziplineType = 0xa6c; // Integer
		constexpr auto m_ziplineStart = 0xa70; // Vector
		constexpr auto m_ziplineEnd = 0xa7c; // Vector
		constexpr auto m_springDistance = 0xc8c; // Float
		constexpr auto m_springDistanceScale = 0xc90; // Float
		constexpr auto m_outerZiplineEntity = 0xc98; // Integer
		constexpr auto m_numAttachedEntities = 0xda0; // Integer
		constexpr auto m_ziplineOwner = 0xda4; // Integer
		constexpr auto m_ziplineMaterialIndex = 0xda8; // Integer
		constexpr auto m_prevZipline = 0xdac; // Integer
		constexpr auto m_nextZipline = 0xdb0; // Integer
		constexpr auto m_detachEndOnUse = 0xdb4; // Integer
		constexpr auto m_dropToBottom = 0xdb5; // Integer
		constexpr auto m_ziplineAutoDetachDistance = 0xdb8; // Float
		constexpr auto m_ziplineVerticalPushOffInDirectionX = 0xdbc; // Integer
		constexpr auto m_ziplineVerticalPreserveVelocity = 0xdbd; // Integer
		constexpr auto m_ziplineWidth = 0xdc0; // Float
		constexpr auto m_ziplineEnabled = 0xdc4; // Integer
		constexpr auto m_numZiplineRestPositions = 0xe88; // Integer
		constexpr auto m_ziplineFadeDist = 0xe8c; // Float
		constexpr auto m_ziplineSpeedScale = 0xe90; // Float
	}

	namespace n_CEnvWind {
		constexpr auto m_iWindSeed = 0xa6c; // Integer
		constexpr auto m_iMinWind = 0xa70; // Integer
		constexpr auto m_iMaxWind = 0xa74; // Integer
		constexpr auto m_iMinGust = 0xa7c; // Integer
		constexpr auto m_iMaxGust = 0xa80; // Integer
		constexpr auto m_flMinGustDelay = 0xa84; // Float
		constexpr auto m_flMaxGustDelay = 0xa88; // Float
		constexpr auto m_flGustDuration = 0xa8c; // Float
		constexpr auto m_iGustDirChange = 0xa90; // Integer
		constexpr auto m_iInitialWindDir = 0xad0; // Integer
		constexpr auto m_flInitialWindSpeed = 0xad4; // Float
	}

	namespace n_CZiplineEnd {
		constexpr auto m_autoDetachDistance = 0xa60; // Float
		constexpr auto m_verticalPushOffInDirectionX = 0xa64; // Integer
		constexpr auto m_prevZipline = 0xa68; // Integer
	}

	namespace n_CScriptNetDataGlobalNonRewind {
	}

	namespace n_CGrappleHook {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
		constexpr auto m_grappleZipline = 0x1690; // Integer
	}

	namespace n_CGameRulesProxy {
	}

	namespace n_CBaseViewModel {
		constexpr auto m_animStartCycle = 0xc; // Float
		constexpr auto m_animPlaybackRate = 0x10; // Float
		constexpr auto m_animFrozen = 0x14; // Integer
		constexpr auto m_animModelIndex = 0x18; // Integer
		constexpr auto m_animSequence = 0x1c; // Integer
		constexpr auto m_nNewSequenceParity = 0x20; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_clrRender = 0x50; // Integer
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_nRenderMode = 0x4b9; // Integer
		constexpr auto m_nBody = 0xeb0; // Integer
		constexpr auto m_nResetEventsParity = 0xebc; // Integer
		constexpr auto m_bSequenceFinished = 0xf54; // Integer
		constexpr auto m_flModelScale = 0xf60; // Float
		constexpr auto m_viewModelOwner = 0x1a5c; // Integer
		constexpr auto m_projectileIsVisible = 0x1a60; // Integer
		constexpr auto m_bBlockEventLayer = 0x1e40; // Integer
		constexpr auto m_isAdsTransition = 0x1e41; // Integer
		constexpr auto m_hWeapon = 0x1e44; // Integer
	}

	namespace n_CBaseAnimatingOverlay {
	}

	namespace n_CInfoTarget {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_bIsSoundCodeControllerValueSet = 0x47c; // Integer
		constexpr auto m_flSoundCodeControllerValue = 0x480; // Float
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_iSignifierName = 0x580; // String
		constexpr auto m_iName = 0x589; // String
		constexpr auto m_scriptNameIndex = 0x690; // Integer
		constexpr auto m_instanceNameIndex = 0x694; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_firstChildEntityLink = 0xa40; // Integer
		constexpr auto m_firstParentEntityLink = 0xa44; // Integer
	}

	namespace n_CTitanSoul {
		constexpr auto m_bossPlayer = 0x124; // Integer
		constexpr auto m_shieldHealth = 0x170; // Integer
		constexpr auto m_shieldHealthMax = 0x174; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_titan = 0xa60; // Integer
		constexpr auto m_titanSoulScriptNetData = 0xa68; // Integer
		constexpr auto m_damageComboStartHealth = 0xc24; // Integer
		constexpr auto m_stance = 0xdc8; // Integer
		constexpr auto m_doomed = 0xdcc; // Integer
		constexpr auto m_playerSettingsNum = 0xdd0; // Integer64
		constexpr auto m_invalidHealthBarEnt = 0xdd8; // Integer
		constexpr auto m_bEjecting = 0xdd9; // Integer
		constexpr auto m_isValidRodeoTarget = 0xdda; // Integer
	}

	namespace n_CBaseEntity {
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_usableType = 0x48; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_clrRender = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_clIntensity = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_bossPlayer = 0x124; // Integer
		constexpr auto m_shieldHealth = 0x170; // Integer
		constexpr auto m_shieldHealthMax = 0x174; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_teamMemberIndex = 0x450; // Integer
		constexpr auto m_squadID = 0x454; // Integer
		constexpr auto m_grade = 0x458; // Integer
		constexpr auto m_ignorePredictedTriggerFlags = 0x45c; // Integer
		constexpr auto m_passThroughFlags = 0x464; // Integer
		constexpr auto m_passThroughThickness = 0x468; // Integer
		constexpr auto m_passThroughDirection = 0x46c; // Float
		constexpr auto m_bIsSoundCodeControllerValueSet = 0x47c; // Integer
		constexpr auto m_flSoundCodeControllerValue = 0x480; // Float
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_bRenderWithViewModels = 0x4a8; // Integer
		constexpr auto m_nRenderFX = 0x4a9; // Integer
		constexpr auto m_nRenderMode = 0x4b9; // Integer
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_contents = 0x544; // Integer
		constexpr auto m_collideWithOwner = 0x548; // Integer
		constexpr auto m_iSignifierName = 0x580; // String
		constexpr auto m_iName = 0x589; // String
		constexpr auto m_scriptNameIndex = 0x690; // Integer
		constexpr auto m_instanceNameIndex = 0x694; // Integer
		constexpr auto m_holdUsePrompt = 0x718; // String
		constexpr auto m_pressUsePrompt = 0x720; // String
		constexpr auto m_phaseShiftFlags = 0x7b8; // Integer
		constexpr auto m_baseTakeDamage = 0x7bc; // Integer
		constexpr auto m_invulnerableToDamageCount = 0x7c0; // Integer
		constexpr auto m_attachmentLerpStartOrigin = 0x83c; // Vector
		constexpr auto m_attachmentLerpStartAngles = 0x848; // Vector
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_fadeDist = 0x86c; // Float
		constexpr auto m_dissolveEffectEntityHandle = 0x918; // Integer
		constexpr auto m_usablePriority = 0x928; // Integer
		constexpr auto m_usableDistanceOverride = 0x92c; // Float
		constexpr auto m_usableFOV = 0x930; // Float
		constexpr auto m_usePromptSize = 0x934; // Float
		constexpr auto m_firstChildEntityLink = 0xa40; // Integer
		constexpr auto m_firstParentEntityLink = 0xa44; // Integer
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
	}

	namespace n_CEntityDissolve {
		constexpr auto m_flFadeStart = 0xa6c; // Float
		constexpr auto m_flFadeLength = 0xa70; // Float
		constexpr auto m_nDissolveType = 0xa74; // Integer
		constexpr auto m_isLethal = 0xa78; // Integer
	}

	namespace n_CTitan_Cockpit {
	}

	namespace n_CFuncBrushLightweight {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
	}

	namespace n_CCrossbowBolt {
	}

	namespace n_CScriptNetData_SNDC_GLOBAL_NON_REWIND {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc82; // Integer [0]
		constexpr auto m_int32s = 0xcc8; // Integer [0]
		constexpr auto m_entities = 0xd58; // Integer [0]
	}

	namespace n_CSkyCamera {
	}

	namespace n_CDeathBoxProp {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_usableType = 0x48; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_iSignifierName = 0x580; // String
		constexpr auto m_iName = 0x589; // String
		constexpr auto m_holdUsePrompt = 0x718; // String
		constexpr auto m_pressUsePrompt = 0x720; // String
		constexpr auto m_lifeState = 0x798; // Integer
		constexpr auto m_scriptNetData = 0x79c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_fadeDist = 0x86c; // Float
		constexpr auto m_usablePriority = 0x928; // Integer
		constexpr auto m_usableDistanceOverride = 0x92c; // Float
		constexpr auto m_usableFOV = 0x930; // Float
		constexpr auto m_usePromptSize = 0x934; // Float
		constexpr auto m_firstChildEntityLink = 0xa40; // Integer
		constexpr auto m_firstParentEntityLink = 0xa44; // Integer
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
		constexpr auto m_bUseHitboxesForRenderBox = 0x1691; // Integer
		constexpr auto m_bAnimateInStaticShadow = 0x1692; // Integer
		constexpr auto m_wantsScopeHighlight = 0x1693; // Integer
		constexpr auto m_customOwnerName = 0x16d0; // String
	}

	namespace n_CShieldProp {
		constexpr auto m_impactEffectColorID = 0x16d0; // Integer
	}

	namespace n_CPropSurvival {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_usableType = 0x48; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_iSignifierName = 0x580; // String
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_usablePriority = 0x928; // Integer
		constexpr auto m_usableDistanceOverride = 0x92c; // Float
		constexpr auto m_usableFOV = 0x930; // Float
		constexpr auto m_usePromptSize = 0x934; // Float
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
		constexpr auto m_nSkin = 0xea8; // Integer
		constexpr auto m_skinMod = 0xeac; // Integer
		constexpr auto m_nBody = 0xeb0; // Integer
		constexpr auto m_camoIndex = 0xeb4; // Integer
		constexpr auto m_ammoInClip = 0x1694; // Integer
		constexpr auto m_customScriptInt = 0x1698; // Integer
		constexpr auto m_survivalProperty = 0x169c; // Integer
		constexpr auto m_weaponNameIndex = 0x16a4; // Integer
		constexpr auto m_modBitField = 0x16a8; // Integer
		constexpr auto m_survivalPropFadeDist = 0x16b0; // Float
	}

	namespace n_CMovieDisplay {
		constexpr auto m_bEnabled = 0xa60; // Integer
		constexpr auto m_bLooping = 0xa61; // Integer
		constexpr auto m_szMovieFilename = 0xa63; // String
		constexpr auto m_szGroupName = 0xae3; // String
		constexpr auto m_szExternalAudioFilename = 0xb63; // String
		constexpr auto m_bStretchToFill = 0xba3; // Integer
		constexpr auto m_bLetterbox = 0xba4; // Integer
		constexpr auto m_bPausesWithClient = 0xba5; // Integer
		constexpr auto m_bForcedSlave = 0xba6; // Integer
		constexpr auto m_bUseCustomUVs = 0xba7; // Integer
		constexpr auto m_flUMin = 0xbac; // Float
		constexpr auto m_flUMax = 0xbb0; // Float
		constexpr auto m_flVMin = 0xbb4; // Float
		constexpr auto m_flVMax = 0xbb8; // Float
	}

	namespace n_CStatusEffectPlugin {
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
	}

	namespace n_CHardPointFrontierEntity {
	}

	namespace n_CTEScriptParticleSystemOnEntityWithPos {
		constexpr auto m_origin = 0x40; // Vector
		constexpr auto m_angles = 0x4c; // Vector
	}

	namespace n_CBaseTempEntity {
	}

	namespace n_CBaseCombatCharacter {
		constexpr auto m_vecViewOffset.x = 0x38; // Float
		constexpr auto m_vecViewOffset.y = 0x3c; // Float
		constexpr auto m_vecViewOffset.z = 0x40; // Float
		constexpr auto m_cloakEndTime = 0x19c; // Float
		constexpr auto m_cloakFadeOutStartTime = 0x1a4; // Float
		constexpr auto m_cloakFadeInDuration = 0x1a8; // Float
		constexpr auto m_cloakFlickerAmount = 0x1ac; // Float
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_deathVelocity = 0x470; // Vector
		constexpr auto m_nameVisibilityFlags = 0x9b8; // Integer
		constexpr auto m_lastFiredWeapon = 0x1a08; // Integer
		constexpr auto m_sharedEnergyCount = 0x1a10; // Integer
		constexpr auto m_sharedEnergyTotal = 0x1a14; // Integer
		constexpr auto m_sharedEnergyLockoutThreshold = 0x1a18; // Integer
		constexpr auto m_sharedEnergyRegenDelay = 0x1a24; // Float
		constexpr auto m_lastCycleSlot = 0x1aa4; // Integer
		constexpr auto m_weaponPermission = 0x1aac; // Integer
		constexpr auto m_weaponDisabledInScript = 0x1ab4; // Integer
		constexpr auto m_weaponDisabledFlags = 0x1ad9; // Integer
		constexpr auto m_weaponTypeDisabledFlags = 0x1adc; // Integer
		constexpr auto m_weaponAmmoRegenDisabled = 0x1ae9; // Integer
		constexpr auto m_weaponAmmoRegenDisabledRefCount = 0x1aec; // Integer
		constexpr auto m_hudInfo_visibilityTestAlwaysPasses = 0x1af0; // Integer
		constexpr auto m_contextAction = 0x1b04; // Integer
		constexpr auto m_phaseShiftType = 0x1b30; // Integer
		constexpr auto m_targetInfoIconName = 0x1b84; // String
		constexpr auto m_targetInfoPingValue = 0x1bc4; // Integer
	}

	namespace n_CColorCorrection {
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_localOrigin = 0xa60; // Vector
		constexpr auto m_MinFalloff = 0xa6c; // Float
		constexpr auto m_MaxFalloff = 0xa70; // Float
		constexpr auto m_flFadeInDuration = 0xa74; // Float
		constexpr auto m_flFadeOutDuration = 0xa78; // Float
		constexpr auto m_flMaxWeight = 0xa7c; // Float
		constexpr auto m_flCurWeight = 0xa80; // Float
		constexpr auto m_netLookupFilename = 0xa84; // String
		constexpr auto m_bEnabled = 0xb88; // Integer
		constexpr auto m_bMaster = 0xb89; // Integer
		constexpr auto m_bClientSide = 0xb8a; // Integer
		constexpr auto m_bExclusive = 0xb8b; // Integer
	}

	namespace n_CVFogVolume {
		constexpr auto m_absorption = 0xa90; // Vector
		constexpr auto m_scattering = 0xa9c; // Vector
		constexpr auto m_emission = 0xaa8; // Vector
		constexpr auto m_phaseG = 0xab4; // Float
		constexpr auto m_edgeFade = 0xab8; // Float
		constexpr auto m_shapeType = 0xabc; // Integer
		constexpr auto m_sunIntensity = 0xac0; // Float
		constexpr auto m_ambientIntensity = 0xac4; // Float
		constexpr auto m_ambientProbeOffset = 0xac8; // Vector
		constexpr auto m_zNearFadeStart = 0xad4; // Float
		constexpr auto m_zNearFadeEnd = 0xad8; // Float
		constexpr auto m_zFarFadeStart = 0xadc; // Float
		constexpr auto m_zFarFadeEnd = 0xae0; // Float
		constexpr auto m_enabled = 0xae4; // Integer
	}

	namespace n_CMissile {
		constexpr auto m_hSpecificTarget = 0x2df4; // Integer
		constexpr auto m_targetPosition = 0x2e04; // Vector
		constexpr auto m_useTargetPosition = 0x2e10; // Integer
	}

	namespace n_CParticleSystem {
		constexpr auto m_localOrigin = 0x4; // Vector
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
		constexpr auto m_iEffectIndex = 0xa60; // Integer
		constexpr auto m_nStopType = 0xa64; // Integer
		constexpr auto m_bActive = 0xa69; // Integer
		constexpr auto m_bForceRenderAlways = 0xa6b; // Integer
		constexpr auto m_bInSkybox = 0xa75; // Integer
		constexpr auto m_killForReplay = 0xa76; // Integer
		constexpr auto m_killIfOverLimit = 0xa77; // Integer
		constexpr auto m_controlPoint1AttachmentIndex = 0xae4; // Integer
		constexpr auto m_parentAttachType = 0xafc; // Integer
	}

	namespace n_CBaseVPhysicsTrigger {
	}

	namespace n_CFuncMoveLinear {
		constexpr auto m_fFlags = 0x98; // Integer
		constexpr auto m_vecVelocity = 0x484; // Vector
	}

	namespace n_CImportantOnEntSound {
		constexpr auto m_networkTableSoundID = 0xa60; // Integer
		constexpr auto m_hAttachedToEntity = 0xa64; // Integer
		constexpr auto m_hSuppressedClient = 0xa6c; // Integer
		constexpr auto m_milesSignal = 0xa70; // Integer
	}

	namespace n_CInfoTargetGravity {
		constexpr auto m_gravityDirectionType = 0xa60; // Integer
		constexpr auto m_gravityPair = 0xa68; // Integer
	}

	namespace n_CNPC_Drone {
		constexpr auto m_bAttackTarget = 0x1df0; // Integer
		constexpr auto m_scanTarget = 0x1df4; // Integer
		constexpr auto m_beamSpread = 0x1df8; // Float
	}

	namespace n_CBoneFollower {
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_modelIndex = 0xa60; // Integer
		constexpr auto m_boneIndex = 0xa64; // Integer
	}

	namespace n_CProjectile {
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_vecVelocity = 0x484; // Vector
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_PredictableID = 0x7cc; // Integer
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
		constexpr auto m_weaponDataIsSet = 0x1690; // Integer
		constexpr auto m_forceAdjustToGunBarrelDisabled = 0x1691; // Integer
		constexpr auto m_weaponClassIndex = 0x1694; // Integer
		constexpr auto m_destructionDistance = 0x1698; // Float
		constexpr auto m_passThroughDepthTotal = 0x169c; // Integer
		constexpr auto m_modBitfield = 0x16a0; // Integer
		constexpr auto m_overrideMods = 0x16a4; // Integer
		constexpr auto m_projectileTrailIndex = 0x16a8; // Integer
		constexpr auto m_impactEffectTable = 0x16ac; // Integer
		constexpr auto m_reducedEffects = 0x16b0; // Integer
		constexpr auto m_weaponSource = 0x16b8; // Integer
		constexpr auto m_passThroughModCount = 0x16bc; // Integer
		constexpr auto m_launchOrigin = 0x16d4; // Vector
	}

	namespace n_CScriptTraceVolume {
		constexpr auto m_shapeType = 0xa60; // Integer
		constexpr auto m_sphereRadius = 0xa64; // Float
		constexpr auto m_boxMins = 0xa68; // Vector
		constexpr auto m_boxMaxs = 0xa74; // Vector
		constexpr auto m_drawDebug = 0xa80; // Integer
	}

	namespace n_CWaterLODControl {
		constexpr auto m_flCheapWaterStartDistance = 0xa60; // Float
		constexpr auto m_flCheapWaterEndDistance = 0xa64; // Float
	}

	namespace n_CBaseAnimating {
		constexpr auto m_animPlaybackRate = 0x10; // Float
		constexpr auto m_animFrozen = 0x14; // Integer
		constexpr auto m_animModelIndex = 0x18; // Integer
		constexpr auto m_nNewSequenceParity = 0x20; // Integer
		constexpr auto m_bClientSideRagdoll = 0x84; // Integer
		constexpr auto m_vecForce = 0x88; // Vector
		constexpr auto m_flEstIkOffset = 0x94; // Float
		constexpr auto m_passDamageToParent = 0x7c4; // Integer
		constexpr auto m_animNetworkFlags = 0xa88; // Integer
		constexpr auto m_animActive = 0xa8c; // Integer
		constexpr auto m_animCollisionEnabled = 0xa8f; // Integer
		constexpr auto m_animRelativeToGroundEnabled = 0xa90; // Integer
		constexpr auto m_animPlantingEnabled = 0xa91; // Integer
		constexpr auto m_animInitialPos = 0xa94; // Vector
		constexpr auto m_animInitialVel = 0xaa0; // Vector
		constexpr auto m_animInitialRot = 0xaac; // Table
		constexpr auto m_animInitialCorrectPos = 0xabc; // Vector
		constexpr auto m_animInitialCorrectRot = 0xac8; // Table
		constexpr auto m_animEntityToRefOffset = 0xad8; // Vector
		constexpr auto m_animEntityToRefRotation = 0xae4; // Table
		constexpr auto m_animScriptSequence = 0xafc; // Integer
		constexpr auto m_animScriptModel = 0xb00; // Integer
		constexpr auto m_animIgnoreParentRot = 0xb04; // Integer
		constexpr auto m_animMotionMode = 0xb08; // Integer
		constexpr auto m_syncingWithEntity = 0xb84; // Integer
		constexpr auto m_predictedAnimEventCount = 0xbd0; // Integer
		constexpr auto m_predictedAnimEventTarget = 0xbd4; // Integer
		constexpr auto m_predictedAnimEventSequence = 0xbd8; // Integer
		constexpr auto m_predictedAnimEventModel = 0xbdc; // Integer
		constexpr auto m_nRagdollImpactFXTableId = 0xbf4; // Integer
		constexpr auto m_flSkyScaleStartValue = 0xbf8; // Float
		constexpr auto m_flSkyScaleEndValue = 0xbfc; // Float
		constexpr auto m_sequenceTransitionerLayerCount = 0xdc0; // Integer
		constexpr auto m_nSkin = 0xea8; // Integer
		constexpr auto m_skinMod = 0xeac; // Integer
		constexpr auto m_nBody = 0xeb0; // Integer
		constexpr auto m_camoIndex = 0xeb4; // Integer
		constexpr auto m_nForceBone = 0xef0; // Integer
		constexpr auto m_bSequenceFinished = 0xf54; // Integer
		constexpr auto m_lockedAnimDeltaYaw = 0xf58; // Float
		constexpr auto m_flModelScale = 0xf60; // Float
	}

	namespace n_CPointCamera {
		constexpr auto m_FOV = 0xac0; // Float
		constexpr auto m_bFogEnable = 0xae8; // Integer
		constexpr auto m_bActive = 0xae9; // Integer
	}

	namespace n_CScriptMover {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_vecAngVelocity = 0x128; // Vector
		constexpr auto m_vecVelocity = 0x484; // Vector
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
	}

	namespace n_CNPC_Dropship {
		constexpr auto m_titanSoul = 0x1b28; // Integer
		constexpr auto m_bJetWakeFXEnabled = 0x1e10; // Integer
	}

	namespace n_CDynamicProp {
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_lifeState = 0x798; // Integer
		constexpr auto m_bUseHitboxesForRenderBox = 0x1691; // Integer
		constexpr auto m_bAnimateInStaticShadow = 0x1692; // Integer
		constexpr auto m_wantsScopeHighlight = 0x1693; // Integer
	}

	namespace n_CLootRoller {
		constexpr auto m_tier = 0x16f0; // Integer
		constexpr auto m_hasVaultKey = 0x16f4; // Integer
	}

	namespace n_CPostProcessController {
		constexpr auto m_bMaster = 0xa78; // Integer
	}

	namespace n_CHardPointEntity {
		constexpr auto m_localOrigin = 0x4; // Vector
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_state = 0xa64; // Integer
		constexpr auto m_estimatedCaptureTime = 0xa68; // Float
		constexpr auto m_progressRefPoint = 0xa6c; // Float
		constexpr auto m_teamMilitiaAICount = 0xa70; // Integer
		constexpr auto m_teamIMCAICount = 0xa74; // Integer
		constexpr auto m_teamMilitiaPlayerCount = 0xa78; // Integer
		constexpr auto m_teamIMCPlayerCount = 0xa7c; // Integer
		constexpr auto m_teamMilitiaPlayerTitanCount = 0xa80; // Integer
		constexpr auto m_teamIMCPlayerTitanCount = 0xa84; // Integer
		constexpr auto m_hardpointID = 0xa88; // Integer
		constexpr auto m_terminal = 0xa90; // Integer
	}

	namespace n_CScriptNetData_SNDC_PLAYER_GLOBAL {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc82; // Integer [0]
		constexpr auto m_int32s = 0xcc8; // Integer [0]
		constexpr auto m_entities = 0xd28; // Integer [0]
	}

	namespace n_CPlayerVehicle {
		constexpr auto m_vehiclePlayers = 0x0; // Array
		constexpr auto m_vecViewOffset.x = 0x38; // Float
		constexpr auto m_vecViewOffset.y = 0x3c; // Float
		constexpr auto m_vecViewOffset.z = 0x40; // Float
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_iMaxHealth = 0x578; // Integer
		constexpr auto m_vehicleDriver = 0x1a04; // Integer
		constexpr auto m_vehiclePlayers = 0x1a14; // Integer [0]
		constexpr auto m_vehiclePlayerCount = 0x1a24; // Integer
		constexpr auto m_vehicleActivated = 0x1a28; // Integer
		constexpr auto m_blockDuckInput = 0x1a29; // Integer
		constexpr auto m_vehicleFlags = 0x1a2c; // Integer
		constexpr auto m_vehicleType = 0x1a30; // Integer
		constexpr auto m_vehicleLaunchTime = 0x1a38; // Float
		constexpr auto m_cameraVehicleMaxDist = 0x1a40; // Float
		constexpr auto m_cameraVehicleMaxVertDist = 0x1a44; // Float
		constexpr auto m_vehicleVelocity = 0x1a48; // Vector
		constexpr auto m_vehicleGroundEntity = 0x1a54; // Integer
		constexpr auto m_vehicleGroundNormal = 0x1a58; // Vector
		constexpr auto m_hoverVehicleIsOnGround = 0x1a84; // Integer
		constexpr auto m_hoverVehicleIsParked = 0x1b6d; // Integer
		constexpr auto m_hoverVehicleIsMarkedAsDrivingForward = 0x1b6e; // Integer
		constexpr auto m_hoverVehicleStunTimeEnd = 0x1b70; // Float
		constexpr auto m_hoverVehicleThrottle = 0x1b74; // Float
		constexpr auto m_hoverVehicleBanking = 0x1b7c; // Float
		constexpr auto m_hoverVehicleFrictionLastTime = 0x1b80; // Float
		constexpr auto m_hoverVehicleFrictionSurfPropOther = 0x1b84; // Integer
		constexpr auto m_hoverVehicleFrictionNormal = 0x1b88; // Vector
		constexpr auto m_hoverVehicleFrictionPos = 0x1b94; // Vector
		constexpr auto m_overrideVehicleAngles = 0x1cbc; // Vector
		constexpr auto m_overrideVehicleAnglesUntilTick = 0x1cc8; // Integer
		constexpr auto m_pushingEnt = 0x1cf0; // Integer
		constexpr auto m_materialDualColorMask = 0x1d84; // Integer
	}

	namespace n_CBreakableProp {
	}

	namespace n_CBaseTrigger {
		constexpr auto m_spawnflags = 0x94; // Integer
		constexpr auto m_bClientSidePredicted = 0xa90; // Integer
	}

	namespace n_CAI_BaseNPC {
		constexpr auto m_localOrigin = 0x4; // Vector
		constexpr auto m_hGroundEntity = 0x434; // Integer
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_iMaxHealth = 0x578; // Integer
		constexpr auto m_lifeState = 0x798; // Integer
		constexpr auto m_fireteamSlotIndex = 0x1c30; // Integer
		constexpr auto m_aiSprinting = 0x1d9a; // Integer
		constexpr auto m_aiNetworkFlags = 0x1dbc; // Integer
		constexpr auto m_isHologram = 0x1dc0; // Integer
		constexpr auto m_title = 0x1dc1; // String
		constexpr auto m_aiSettingsIndex = 0x1de4; // Integer
		constexpr auto m_subclass = 0x1de8; // Integer
	}

	namespace n_CBreakableSurface {
		constexpr auto m_nNumWide = 0xa68; // Integer
		constexpr auto m_nNumHigh = 0xa6c; // Integer
		constexpr auto m_flPanelWidth = 0xa70; // Float
		constexpr auto m_flPanelHeight = 0xa74; // Float
		constexpr auto m_vNormal = 0xa78; // Vector
		constexpr auto m_vUp = 0xa84; // Vector
		constexpr auto m_vCorner = 0xa9c; // Vector
		constexpr auto m_bIsBroken = 0xaa8; // Integer
		constexpr auto m_nSurfaceType = 0xaac; // Integer
	}

	namespace n_CDoorMover {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_usableType = 0x48; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_vecAngVelocity = 0x128; // Vector
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_vecVelocity = 0x484; // Vector
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_vecMins = 0x4d0; // Vector
		constexpr auto m_vecMaxs = 0x4dc; // Vector
		constexpr auto m_usSolidFlags = 0x4e8; // Integer
		constexpr auto m_nSolidType = 0x4ec; // Integer
		constexpr auto m_triggerBloat = 0x4ed; // Integer
		constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
		constexpr auto m_nSurroundType = 0x4fc; // Integer
		constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
		constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
		constexpr auto m_CollisionGroup = 0x540; // Integer
		constexpr auto m_iSignifierName = 0x580; // String
		constexpr auto m_scriptNameIndex = 0x690; // Integer
		constexpr auto m_holdUsePrompt = 0x718; // String
		constexpr auto m_pressUsePrompt = 0x720; // String
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_fadeDist = 0x86c; // Float
		constexpr auto m_usablePriority = 0x928; // Integer
		constexpr auto m_usableDistanceOverride = 0x92c; // Float
		constexpr auto m_usableFOV = 0x930; // Float
		constexpr auto m_usePromptSize = 0x934; // Float
		constexpr auto m_doorFlags = 0x18c0; // Integer
	}

	namespace n_CPortalPointPush {
		constexpr auto m_bEnabled = 0xa60; // Integer
		constexpr auto m_flMagnitude = 0xa64; // Float
		constexpr auto m_flRadius = 0xa68; // Float
		constexpr auto m_flInnerRadius = 0xa6c; // Float
		constexpr auto m_flConeOfInfluence = 0xa70; // Float
	}

	namespace n_CWorld {
		constexpr auto m_WorldMins = 0xa60; // Vector
		constexpr auto m_WorldMaxs = 0xa6c; // Vector
		constexpr auto m_bStartDark = 0xa78; // Integer
		constexpr auto m_statusEffectsGenerationNV = 0xa8c; // Integer
		constexpr auto m_worldFlags = 0xa94; // Integer
		constexpr auto m_timeshiftArmDeviceSkin = 0xa98; // Integer
		constexpr auto m_spTitanLoadoutUnlocks = 0xa9c; // Integer
		constexpr auto m_teamRelationRulesForPVE = 0x11e0; // Integer
	}

	namespace n_CTriggerCylinderHeavy {
		constexpr auto m_triggerFilterMask = 0xaa0; // Integer64
		constexpr auto m_radius = 0xaa8; // Float
		constexpr auto m_aboveHeight = 0xaac; // Float
		constexpr auto m_belowHeight = 0xab0; // Float
		constexpr auto m_triggerType = 0xab4; // Integer
		constexpr auto m_vertOverride = 0xab8; // Float
		constexpr auto m_launchPower = 0xabc; // Float
		constexpr auto m_punchSoftAmount = 0xac0; // Float
		constexpr auto m_punchHardAmount = 0xac4; // Float
		constexpr auto m_punchRandomBoost = 0xac8; // Float
		constexpr auto m_nextLaunchTime = 0xacc; // Float
		constexpr auto m_gravityCannonLaunched = 0xad0; // Integer
		constexpr auto m_launchFlightTime = 0xad4; // Float
		constexpr auto m_launchDelayAmount = 0xad8; // Float
		constexpr auto m_enableDoubleJump = 0xadc; // Integer
		constexpr auto m_gravityLiftUpSpeed = 0xae0; // Float
		constexpr auto m_gravityLiftMoveSpeed = 0xae4; // Float
		constexpr auto m_gravityLiftMoveAccel = 0xae8; // Float
		constexpr auto m_gravityLiftToCenterSpeed = 0xaec; // Float
		constexpr auto m_gravityLiftToCenterAccel = 0xaf0; // Float
		constexpr auto m_gravityLiftEjectUpSpeed = 0xaf4; // Float
		constexpr auto m_gravityLiftEjectForwardSpeed = 0xaf8; // Float
		constexpr auto m_gravityLiftMaxEjectTime = 0xafc; // Float
		constexpr auto m_gravityLiftMaxHoverTime = 0xb00; // Float
		constexpr auto m_blackholeIsStrongPulling = 0xb04; // Integer
		constexpr auto m_blackholeStrongPullAddlSpeed = 0xb08; // Float
		constexpr auto m_blackholeOuterPullSpeed = 0xb0c; // Float
		constexpr auto m_blackholeInnerPullSpeed = 0xb10; // Float
		constexpr auto m_blackholeOuterMoveSpeed = 0xb14; // Float
		constexpr auto m_blackholeInnerMoveSpeed = 0xb18; // Float
		constexpr auto m_blackholeInnerRadius = 0xb1c; // Float
		constexpr auto m_teslaTrapFXVisible = 0xb20; // Integer
		constexpr auto m_teslaTrapBaseHeight = 0xb24; // Float
		constexpr auto m_teslaTrapStart = 0xb30; // Integer
		constexpr auto m_teslaTrapEnd = 0xb34; // Integer
		constexpr auto m_teslaTrapUp = 0xb38; // Vector
		constexpr auto m_launchDir = 0xb44; // Vector
		constexpr auto m_mortarRingSegementStart = 0xb58; // Integer
		constexpr auto m_mortarRingSegementEnd = 0xb5c; // Integer
	}

	namespace n_CScriptMoverTrainNode {
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_scriptNameIndex = 0x690; // Integer
		constexpr auto m_firstChildEntityLink = 0xa40; // Integer
		constexpr auto m_firstParentEntityLink = 0xa44; // Integer
		constexpr auto m_numSmoothPoints = 0xa60; // Integer
		constexpr auto m_trainNodeMakeSmoothPointsParity = 0xa64; // Integer
		constexpr auto m_tangentType = 0xa68; // Integer
		constexpr auto m_perfectCircularRotation = 0xa6c; // Integer
	}

	namespace n_CVGuiScreen {
		constexpr auto m_flWidth = 0xa60; // Float
		constexpr auto m_flHeight = 0xa64; // Float
		constexpr auto m_nPanelName = 0xa70; // Integer
		constexpr auto m_nAttachmentIndex = 0xa8c; // Integer
		constexpr auto m_nOverlayMaterial = 0xa90; // Integer
		constexpr auto m_fScreenFlags = 0xa94; // Integer
		constexpr auto m_hPlayerOwner = 0xaf8; // Integer
	}

	namespace n_CEntityLinkPage {
	}

	namespace n_CInfoPlacementHelper {
		constexpr auto m_localOrigin = 0x4; // Vector
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
	}

	namespace n_CRopeKeyframe {
		constexpr auto m_localOrigin = 0x4; // Vector
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_clrRender = 0x50; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_nRenderMode = 0x4b9; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_fadeDist = 0x86c; // Float
		constexpr auto m_ropeZiplineAutoDetachDistance = 0xa60; // Float
		constexpr auto m_ziplineSagEnable = 0xa64; // Integer
		constexpr auto m_ziplineSagHeight = 0xa68; // Float
		constexpr auto m_ziplineMoveSpeedScale = 0xb60; // Float
		constexpr auto m_wiggleMaxLen = 0xb6c; // Float
		constexpr auto m_wiggleMagnitude = 0xb70; // Float
		constexpr auto m_wiggleSpeed = 0xb74; // Float
		constexpr auto m_flScrollSpeed = 0xbac; // Float
		constexpr auto m_RopeFlags = 0xbb0; // Integer
		constexpr auto m_iRopeMaterialModelIndex = 0xbb4; // Integer
		constexpr auto m_nSegments = 0xe38; // Integer
		constexpr auto m_hStartPoint = 0xe3c; // Integer
		constexpr auto m_hEndPoint = 0xe40; // Integer
		constexpr auto m_hPrevPoint = 0xe44; // Integer
		constexpr auto m_iStartAttachment = 0xe48; // Integer
		constexpr auto m_iEndAttachment = 0xe4a; // Integer
		constexpr auto m_subdivStackCount = 0xe74; // Integer
		constexpr auto m_subdivSliceCount = 0xe78; // Integer
		constexpr auto m_ropeLength = 0xe7c; // Integer
		constexpr auto m_constraintIterations = 0xe84; // Integer
		constexpr auto m_ropeDampening = 0xe88; // Float
		constexpr auto m_Slack = 0xe8c; // Integer
		constexpr auto m_TextureScale = 0xe90; // Float
		constexpr auto m_TextureScale = 0xe90; // Float
		constexpr auto m_fLockedPoints = 0xe94; // Integer
		constexpr auto m_lockDirectionCutoffLength = 0xe98; // Integer
		constexpr auto m_lockDirectionStrength = 0xe9c; // Float
		constexpr auto m_nChangeCount = 0xea0; // Integer
		constexpr auto m_Width = 0xea4; // Float
		constexpr auto m_bConstrainBetweenEndpoints = 0xf38; // Integer
	}

	namespace n_CTEExplosion {
		constexpr auto m_fScale = 0x38; // Float
		constexpr auto m_nFrameRate = 0x3c; // Integer
		constexpr auto m_nFlags = 0x40; // Integer
		constexpr auto m_vecNormal = 0x44; // Vector
		constexpr auto m_chMaterialType = 0x50; // Integer
		constexpr auto m_nRadius = 0x54; // Integer
		constexpr auto m_nInnerRadius = 0x58; // Integer
		constexpr auto m_nMagnitude = 0x5c; // Integer
		constexpr auto m_impactEffectTableIndex = 0x60; // Integer
		constexpr auto m_surfaceProp = 0x64; // Integer
		constexpr auto m_owner = 0x68; // Integer
		constexpr auto m_victim = 0x6c; // Integer
	}

	namespace n_CScriptNetData_SNDC_DEATH_BOX {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc74; // Integer [0]
		constexpr auto m_int32s = 0xc98; // Integer [0]
		constexpr auto m_entities = 0xcb0; // Integer [0]
	}

	namespace n_CStatueProp {
		constexpr auto m_hInitBaseAnimating = 0x16f0; // Integer
		constexpr auto m_bShatter = 0x16f4; // Integer
		constexpr auto m_nShatterFlags = 0x16f8; // Integer
		constexpr auto m_vShatterPosition = 0x16fc; // Vector
		constexpr auto m_vShatterForce = 0x1708; // Vector
	}

	namespace n_CCPropDoor {
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_usableType = 0x48; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_localAngles = 0x490; // Vector
		constexpr auto m_nSkin = 0xea8; // Integer
		constexpr auto m_skinMod = 0xeac; // Integer
		constexpr auto m_closedAngle = 0x1700; // Float
		constexpr auto m_angle = 0x1704; // Float
		constexpr auto m_startAngle = 0x1708; // Float
		constexpr auto m_startAngleVel = 0x170c; // Float
		constexpr auto m_isLocked = 0x1714; // Integer
		constexpr auto m_isFrozen = 0x1715; // Integer
		constexpr auto m_oppositeDoor = 0x1718; // Integer
		constexpr auto m_interactingPlayer = 0x1768; // Integer
		constexpr auto m_interactingPlayerWantsOpen = 0x176c; // Integer
	}

	namespace n_CPhysicsProp {
		constexpr auto m_spawnflags = 0x94; // Integer
		constexpr auto m_bAwake = 0x1698; // Integer
		constexpr auto m_ignoresCollisionWithCombatCharacters = 0x1699; // Integer
		constexpr auto m_isRolling = 0x169a; // Integer
		constexpr auto m_networkTableRollSoundId = 0x169c; // Integer
		constexpr auto m_iPhysicsMode = 0x16c8; // Integer
		constexpr auto m_fMass = 0x16cc; // Float
		constexpr auto m_collisionMins = 0x16d0; // Vector
		constexpr auto m_collisionMaxs = 0x16dc; // Vector
	}

	namespace n_CBaseToggle {
		constexpr auto m_vecFinalDest = 0xa74; // Vector
		constexpr auto m_movementType = 0xa80; // Integer
	}

	namespace n_CFirstPersonProxy {
		constexpr auto m_viewModelOwner = 0x16c0; // Integer
	}

	namespace n_CTriggerSlip {
		constexpr auto m_defaultSlipDirection = 0xaa0; // Vector
		constexpr auto m_slipSpeed = 0xaac; // Float
		constexpr auto m_slipAcceleration = 0xab0; // Float
	}

	namespace n_CScriptMoverLightweight {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_fEffects = 0x44; // Integer
		constexpr auto m_moverNetworkCellX = 0x4c; // Integer
		constexpr auto m_moverNetworkCellY = 0x50; // Integer
		constexpr auto m_moverNetworkCellZ = 0x54; // Integer
		constexpr auto m_moverNetworkLocalOrigin = 0x58; // Vector
		constexpr auto m_nModelIndex = 0x64; // Integer
		constexpr auto m_moverNetworkAngularVelocity = 0x128; // Vector
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_moverNetworkLinearVelocity = 0x484; // Vector
		constexpr auto m_moverNetworkLocalAngles = 0x490; // Vector
		constexpr auto m_scriptNameIndex = 0x690; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_fadeDist = 0x86c; // Float
		constexpr auto m_moveModeNonPhysics = 0x17b4; // Integer
		constexpr auto m_moveModeIsLocal = 0x17b8; // Integer
		constexpr auto m_moveToStartPos = 0x17bc; // Vector
		constexpr auto m_moveToEndPos = 0x17c8; // Vector
		constexpr auto m_moveToTimeEaseIn = 0x17dc; // Float
		constexpr auto m_moveToTimeEaseOut = 0x17e0; // Float
		constexpr auto m_moveVelocity = 0x17e4; // Vector
		constexpr auto m_moveGravity = 0x17f0; // Vector
		constexpr auto m_trainStartDistance = 0x1804; // Float
		constexpr auto m_trainCurrentNode = 0x1808; // Integer
		constexpr auto m_trainStopNode = 0x180c; // Integer
		constexpr auto m_trainInitialSpeed = 0x1810; // Float
		constexpr auto m_trainGoalSpeed = 0x1814; // Float
		constexpr auto m_trainAcceleration = 0x1818; // Float
		constexpr auto m_trainLastNode = 0x181c; // Integer
		constexpr auto m_trainLastDistance = 0x1820; // Float
		constexpr auto m_trainLastSpeed = 0x1824; // Float
		constexpr auto m_trainFollowMover = 0x1828; // Integer
		constexpr auto m_trainFollowDistance = 0x182c; // Float
		constexpr auto m_trainBreadcrumbBegin = 0x1850; // Integer
		constexpr auto m_trainBreadcrumbCount = 0x1854; // Integer
		constexpr auto m_trainAutoRollStrength = 0x1858; // Float
		constexpr auto m_trainAutoRollLookAheadDistance = 0x185c; // Float
		constexpr auto m_trainAutoRollMax = 0x1860; // Float
		constexpr auto m_trainSimulateBeforeMeEntity = 0x1864; // Integer
		constexpr auto m_rotateModeNonPhysics = 0x1868; // Integer
		constexpr auto m_rotateModeIsLocal = 0x186c; // Integer
		constexpr auto m_RotateToAnglesStart = 0x1870; // Vector
		constexpr auto m_RotateToAnglesEnd = 0x187c; // Vector
		constexpr auto m_rotateToTimeEaseIn = 0x1890; // Float
		constexpr auto m_rotateToTimeEaseOut = 0x1894; // Float
		constexpr auto m_rotateAxis = 0x1898; // Vector
		constexpr auto m_rotateSpeed = 0x18a4; // Float
		constexpr auto m_trainPitchMax = 0x18a8; // Float
		constexpr auto m_useNonPhysicsMoveInterpolation = 0x18c4; // Integer
	}

	namespace n_CTriggerUpdraft {
	}

	namespace n_CTEShatterSurface {
		constexpr auto m_vecOrigin = 0x28; // Vector
		constexpr auto m_vecAngles = 0x34; // Vector
		constexpr auto m_vecForce = 0x40; // Vector
		constexpr auto m_vecForcePos = 0x4c; // Vector
		constexpr auto m_flWidth = 0x58; // Float
		constexpr auto m_flHeight = 0x5c; // Float
		constexpr auto m_flShardSize = 0x60; // Float
		constexpr auto m_nSurfaceType = 0x64; // Integer
	}

	namespace n_CPlayer {
		constexpr auto m_passives = 0x0; // Array
		constexpr auto m_vecAbsOrigin = 0x4; // Vector
		constexpr auto m_fFlags = 0x98; // Integer
		constexpr auto m_hGroundEntity = 0x434; // Integer
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_flMaxspeed = 0x43c; // Float
		constexpr auto m_iMaxHealth = 0x578; // Integer
		constexpr auto m_lifeState = 0x798; // Integer
		constexpr auto m_decalIndex = 0xeb8; // Integer
		constexpr auto m_titanSoul = 0x1b28; // Integer
		constexpr auto m_bZooming = 0x1c31; // Integer
		constexpr auto m_zoomBaseFrac = 0x1c38; // Float
		constexpr auto m_flHullHeight = 0x20ec; // Float
		constexpr auto m_angEyeAngles.x = 0x20f0; // Float
		constexpr auto m_angEyeAngles.y = 0x20f4; // Float
		constexpr auto m_traversalAnimProgress = 0x20fc; // Float
		constexpr auto m_sprintTiltFrac = 0x2100; // Float
		constexpr auto m_ammoPoolCapacity = 0x257c; // Integer
		constexpr auto m_hasBadReputation = 0x2580; // Integer
		constexpr auto m_happyHourActive = 0x2581; // Integer
		constexpr auto m_hardwareIcon = 0x2588; // String
		constexpr auto m_hardware = 0x2598; // Integer
		constexpr auto m_unspoofedHardware = 0x2599; // Integer
		constexpr auto m_platformUserId = 0x25a0; // Integer64
		constexpr auto m_unSpoofedPlatformUserId = 0x25a8; // Integer64
		constexpr auto m_EadpUserId = 0x25b0; // Integer64
		constexpr auto m_crossPlayChat = 0x25b8; // Integer
		constexpr auto m_crossPlayChatFriends = 0x25b9; // Integer
		constexpr auto m_classModsActive = 0x25c0; // Integer64
		constexpr auto m_passives[ 0 ] = 0x26f8; // Integer64
		constexpr auto m_bleedoutState = 0x2718; // Integer
		constexpr auto m_bleedoutStartTime = 0x271c; // Float
		constexpr auto m_damageComboStartHealth = 0x28c8; // Integer
		constexpr auto m_gestureAutoKillBitfield = 0x298c; // Integer
		constexpr auto m_autoSprintForced = 0x29d0; // Integer
		constexpr auto m_fIsSprinting = 0x29d4; // Integer
		constexpr auto m_playerSettingForStickySprintForward = 0x29e2; // Integer
		constexpr auto m_playerVehicleCount = 0x2a18; // Integer
		constexpr auto m_playerVehicleDriven = 0x2a1c; // Integer
		constexpr auto m_duckState = 0x2a24; // Integer
		constexpr auto m_leanState = 0x2a28; // Integer
		constexpr auto m_canStand = 0x2a2d; // Integer
		constexpr auto m_StandHullMin = 0x2a30; // Vector
		constexpr auto m_StandHullMax = 0x2a3c; // Vector
		constexpr auto m_DuckHullMin = 0x2a48; // Vector
		constexpr auto m_DuckHullMax = 0x2a54; // Vector
		constexpr auto m_entitySyncingWithMe = 0x2a60; // Integer
		constexpr auto m_upDir = 0x2a64; // Vector
		constexpr auto m_traversalState = 0x2ae0; // Integer
		constexpr auto m_traversalType = 0x2ae4; // Integer
		constexpr auto m_traversalForwardDir = 0x2b10; // Vector
		constexpr auto m_traversalRefPos = 0x2b1c; // Vector
		constexpr auto m_traversalYawDelta = 0x2b48; // Float
		constexpr auto m_traversalYawPoseParameter = 0x2b4c; // Integer
		constexpr auto m_wallClimbSetUp = 0x2b64; // Integer
		constexpr auto m_wallHanging = 0x2b65; // Integer
		constexpr auto m_grapplePoints = 0x2b90; // Array
		constexpr auto m_grappleVel = 0x2b98; // Vector
		constexpr auto m_grapplePoints = 0x2ba4; // Vector [0]
		constexpr auto m_grapplePointCount = 0x2bd4; // Integer
		constexpr auto m_grappleAttached = 0x2bd8; // Integer
		constexpr auto m_grapplePulling = 0x2bd9; // Integer
		constexpr auto m_grappleSwinging = 0x2bda; // Integer
		constexpr auto m_grappleRetracting = 0x2bdb; // Integer
		constexpr auto m_grappleForcedRetracting = 0x2bdc; // Integer
		constexpr auto m_grappleGracePeriodFinished = 0x2bdd; // Integer
		constexpr auto m_grappleUsedPower = 0x2be0; // Float
		constexpr auto m_grappleMeleeTarget = 0x2bf4; // Integer
		constexpr auto m_grappleAutoAimTarget = 0x2bf8; // Integer
		constexpr auto m_grappleHasGoodVelocity = 0x2bfc; // Integer
		constexpr auto m_grappleSwingDetachLowSpeed = 0x2c04; // Float
		constexpr auto m_grappleActive = 0x2c20; // Integer
		constexpr auto m_turret = 0x2c68; // Integer
		constexpr auto m_activeZipline = 0x2dc0; // Integer
		constexpr auto m_ziplineValid3pWeaponLayerAnim = 0x2dcc; // Integer
		constexpr auto m_ziplineState = 0x2dd0; // Integer
		constexpr auto m_ziplineGrenadeBeginStationEntity = 0x2e64; // Integer
		constexpr auto m_ziplineGrenadeBeginStationAttachmentIndex = 0x2e68; // Integer
		constexpr auto m_isPerformingBoostAction = 0x2ea9; // Integer
		constexpr auto m_lastJumpPadTouched = 0x2fa0; // Integer
		constexpr auto m_launchCount = 0x2fa8; // Integer
		constexpr auto m_useCredit = 0x3110; // Integer
		constexpr auto m_playerFlags = 0x3120; // Integer
		constexpr auto m_hasMic = 0x3128; // Integer
		constexpr auto m_inPartyChat = 0x3129; // Integer
		constexpr auto m_playerMoveSpeedScale = 0x312c; // Float
		constexpr auto m_bShouldDrawPlayerWhileUsingViewEntity = 0x3368; // Integer
		constexpr auto m_iSpawnParity = 0x33d4; // Integer
		constexpr auto m_grappleHook = 0x3578; // Integer
		constexpr auto m_petTitan = 0x357c; // Integer
		constexpr auto m_xp = 0x35a4; // Integer
		constexpr auto m_skill_mu = 0x35ac; // Float
		constexpr auto m_bHasMatchAdminRole = 0x35b0; // Integer
		constexpr auto m_ubEFNoInterpParity = 0x3e98; // Integer
		constexpr auto m_hColorCorrectionCtrl = 0x3e9c; // Integer
		constexpr auto m_title = 0x3ec0; // String
		constexpr auto m_nPlayerCond = 0x41f8; // Integer
		constexpr auto m_pilotClassIndex = 0x4244; // Integer
		constexpr auto m_pilotClassActivityModifier = 0x4248; // Integer
		constexpr auto m_playerScriptNetDataGlobal = 0x44d0; // Integer
		constexpr auto m_helmetType = 0x44d8; // Integer
		constexpr auto m_armorType = 0x44dc; // Integer
		constexpr auto m_controllerModeActive = 0x44e4; // Integer
		constexpr auto m_skydiveForwardPoseValueTarget = 0x4500; // Float
		constexpr auto m_skydiveSidePoseValueTarget = 0x450c; // Float
		constexpr auto m_skydiveState = 0x4534; // Integer
		constexpr auto m_skydiveDiveAngle = 0x454c; // Float
		constexpr auto m_skydiveIsDiving = 0x4550; // Integer
		constexpr auto m_skydiveSpeed = 0x4554; // Float
		constexpr auto m_skydiveStrafeAngle = 0x4558; // Float
		constexpr auto m_skydivePlayerPitch = 0x456c; // Float
		constexpr auto m_skydivePlayerYaw = 0x4570; // Float
		constexpr auto m_skydiveFromSkywardLaunch = 0x45ad; // Integer
		constexpr auto m_skywardLaunchState = 0x45b0; // Integer
		constexpr auto m_skywardLaunchSlowStartTime = 0x45c4; // Float
		constexpr auto m_skywardLaunchSlowEndTime = 0x45c8; // Float
		constexpr auto m_skywardLaunchFastEndTime = 0x45cc; // Float
		constexpr auto m_skywardLaunchEndTime = 0x45d4; // Float
		constexpr auto m_skywardLaunchSlowSpeed = 0x45dc; // Float
		constexpr auto m_skywardLaunchFastSpeed = 0x45e0; // Float
		constexpr auto m_skywardOffset = 0x45e4; // Vector
		constexpr auto m_skywardLaunchInterrupted = 0x45f4; // Integer
		constexpr auto m_skywardLaunchFollowing = 0x45f5; // Integer
	}

	namespace n_CGlobalNonRewinding {
	}

	namespace n_CScriptProp {
		constexpr auto m_cloakEndTime = 0x19c; // Float
		constexpr auto m_cloakFadeOutStartTime = 0x1a4; // Float
		constexpr auto m_cloakFadeInDuration = 0x1a8; // Float
		constexpr auto m_cloakFlickerAmount = 0x1ac; // Float
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_iMaxHealth = 0x578; // Integer
		constexpr auto m_nameVisibilityFlags = 0x9b8; // Integer
		constexpr auto m_title = 0x16f0; // String
		constexpr auto m_footstepType = 0x1710; // String
		constexpr auto m_renderColorFriendlyIsValid = 0x1750; // Integer
		constexpr auto m_renderColorFriendly = 0x1751; // Integer
		constexpr auto m_armorType = 0x1758; // Integer
		constexpr auto m_scriptPropFlags = 0x175c; // Integer
		constexpr auto m_scriptPropSmartAmmoLockType = 0x1760; // Integer
	}

	namespace n_CPlayerTasklist {
		constexpr auto m_customInt = 0xa64; // Integer
		constexpr auto m_taskStringA = 0xc3c; // String
		constexpr auto m_taskStringB = 0xc7c; // String
		constexpr auto m_taskStringC = 0xcbc; // String
		constexpr auto m_taskStringD = 0xcfc; // String
		constexpr auto m_taskStringE = 0xd3c; // String
		constexpr auto m_taskStringF = 0xd7c; // String
		constexpr auto m_taskStringG = 0xdbc; // String
		constexpr auto m_taskStringH = 0xdfc; // String
		constexpr auto m_taskStringI = 0xe3c; // String
		constexpr auto m_taskStringJ = 0xe7c; // String
		constexpr auto m_taskStringK = 0xebc; // String
		constexpr auto m_taskStringL = 0xefc; // String
		constexpr auto m_taskStringM = 0xf3c; // String
	}

	namespace n_CBaseParticleEntity {
	}

	namespace n_CTEGibEvent {
		constexpr auto m_hVictim = 0x28; // Integer
		constexpr auto m_attackDir = 0x2c; // Vector
	}

	namespace n_CTEBreakModel {
		constexpr auto m_vecOrigin = 0x28; // Vector
		constexpr auto m_angRotation.x = 0x34; // Float
		constexpr auto m_angRotation.y = 0x38; // Float
		constexpr auto m_angRotation.z = 0x3c; // Float
		constexpr auto m_vecSize = 0x40; // Vector
		constexpr auto m_vecVelocity = 0x4c; // Vector
		constexpr auto m_nRandomization = 0x58; // Integer
		constexpr auto m_nModelIndex = 0x5c; // Integer
		constexpr auto m_nCount = 0x60; // Integer
		constexpr auto m_fTime = 0x64; // Float
		constexpr auto m_nFlags = 0x68; // Integer
	}

	namespace n_CFuncBrush {
	}

	namespace n_CVortexSphere {
		constexpr auto m_spawnflags = 0x94; // Integer
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_enabled = 0xa60; // Integer
		constexpr auto m_radius = 0xa64; // Float
		constexpr auto m_height = 0xa68; // Float
		constexpr auto m_bulletFov = 0xa6c; // Float
		constexpr auto m_bulletAbsorbedCount = 0xa70; // Integer
		constexpr auto m_projectileAbsorbedCount = 0xa74; // Integer
		constexpr auto m_ownerWeapon = 0xa78; // Integer
		constexpr auto m_vortexEffect = 0xa7c; // Integer
		constexpr auto m_vortexLocalAngles = 0xa80; // Vector
		constexpr auto m_gunAttachment = 0xa90; // String
	}

	namespace n_CTriggerPointGravity {
		constexpr auto m_pullOuterRadius = 0xaa0; // Float
		constexpr auto m_pullInnerRadius = 0xaa4; // Float
		constexpr auto m_reduceSpeedOuterRadius = 0xaa8; // Float
		constexpr auto m_reduceSpeedInnerRadius = 0xaac; // Float
		constexpr auto m_pullAccel = 0xab0; // Float
		constexpr auto m_pullSpeed = 0xab4; // Float
		constexpr auto m_constantPullStregnth = 0xab8; // Integer
	}

	namespace n_CPlayerDecoy {
		constexpr auto m_cloakEndTime = 0x19c; // Float
		constexpr auto m_cloakFadeOutStartTime = 0x1a4; // Float
		constexpr auto m_cloakFadeInDuration = 0x1a8; // Float
		constexpr auto m_cloakFlickerAmount = 0x1ac; // Float
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_iMaxHealth = 0x578; // Integer
		constexpr auto m_nameVisibilityFlags = 0x9b8; // Integer
		constexpr auto m_currentState = 0x1690; // Integer
		constexpr auto m_decoyFlags = 0x1694; // Integer
		constexpr auto m_currentClass = 0x16a0; // Integer64
		constexpr auto m_classModsActive = 0x16a8; // Integer64
		constexpr auto m_decoyVelocity = 0x16b0; // Vector
	}

	namespace n_CTEPhysicsProp {
		constexpr auto m_vecOrigin = 0x28; // Vector
		constexpr auto m_angRotation.x = 0x34; // Float
		constexpr auto m_angRotation.y = 0x38; // Float
		constexpr auto m_angRotation.z = 0x3c; // Float
		constexpr auto m_vecVelocity = 0x40; // Vector
		constexpr auto m_nModelIndex = 0x4c; // Integer
		constexpr auto m_nSkin = 0x50; // Integer
		constexpr auto m_nFlags = 0x54; // Integer
		constexpr auto m_nEffects = 0x58; // Integer
	}

	namespace n_CEnvDecoy {
	}

	namespace n_CTriggerOutOfBounds {
	}

	namespace n_CDynamicLight {
		constexpr auto m_Flags = 0xa60; // Integer
		constexpr auto m_LightStyle = 0xa61; // Integer
		constexpr auto m_Radius = 0xa64; // Float
		constexpr auto m_Exponent = 0xa68; // Integer
		constexpr auto m_InnerAngle = 0xa6c; // Float
		constexpr auto m_OuterAngle = 0xa70; // Float
		constexpr auto m_SpotRadius = 0xa74; // Float
	}

	namespace n_CHealthKit {
	}

	namespace n_CCascadeLight {
		constexpr auto m_shadowDirection = 0xa60; // Vector
		constexpr auto m_envLightShadowDirection = 0xa78; // Vector
		constexpr auto m_bEnabled = 0xa8c; // Integer
		constexpr auto m_bEnableShadows = 0xa8d; // Integer
		constexpr auto m_LightColor = 0xa8f; // Integer
		constexpr auto m_cloudMaskName = 0xa93; // String
		constexpr auto m_cloudOffset = 0xb98; // Vector
		constexpr auto m_cloudScale = 0xba4; // Float
	}

	namespace n_CTriggerNoZipline {
	}

	namespace n_CScriptNetData_SNDC_PLAYER_EXCLUSIVE {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc8a; // Integer [0]
		constexpr auto m_int32s = 0xcd0; // Integer [0]
		constexpr auto m_entities = 0xd10; // Integer [0]
	}

	namespace n_CTriggerNoObjectPlacement {
	}

	namespace n_CScriptNetData_SNDC_PLAYER_EXCLUSIVE_EXPANDED {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc8a; // Integer [0]
		constexpr auto m_int32s = 0xd48; // Integer [0]
		constexpr auto m_entities = 0xd88; // Integer [0]
	}

	namespace n_CLootGrabber {
		constexpr auto m_impactEffectColorID = 0x16d0; // Integer
		constexpr auto m_lootBeingGrabbed = 0x16d8; // Integer
		constexpr auto m_lootGrabDist = 0x16dc; // Float
	}

	namespace n_CTurret {
		constexpr auto m_iHealth = 0x438; // Integer
		constexpr auto m_iMaxHealth = 0x578; // Integer
		constexpr auto m_settingsIndex = 0x1a08; // Integer
		constexpr auto m_driver = 0x1a38; // Integer
		constexpr auto m_forceAimPitch = 0x1a60; // Float
		constexpr auto m_forceAimYaw = 0x1a64; // Float
		constexpr auto m_driverDetachTime = 0x1a68; // Float
		constexpr auto m_driverState = 0x1a6c; // Integer
		constexpr auto m_turretWeapon = 0x1a70; // Integer
		constexpr auto m_title = 0x1a7c; // String
	}

	namespace n_CTriggerPlayerMovement {
	}

	namespace n_CBaseGrenade {
		constexpr auto m_parentAttachmentType = 0x20; // Integer
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_baseTakeDamage = 0x7bc; // Integer
		constexpr auto m_invulnerableToDamageCount = 0x7c0; // Integer
		constexpr auto m_parentAttachmentHitbox = 0x85c; // Integer
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_doesExplode = 0x2d91; // Integer
		constexpr auto m_DmgRadius = 0x2d94; // Float
		constexpr auto m_grenadeStatusFlags = 0x2db8; // Integer
		constexpr auto m_ziplineGrenadeExpectedEndPosition = 0x2e28; // Vector
	}

	namespace n_CTESoundDispatch {
		constexpr auto m_targetEnt = 0x28; // Integer
		constexpr auto m_soundID = 0x30; // Integer64
		constexpr auto m_networkTableID = 0x38; // Integer
		constexpr auto m_soundIsStart = 0x3c; // Integer
		constexpr auto m_seek = 0x40; // Float
	}

	namespace n_CTEScriptParticleSystem {
		constexpr auto m_effectIndex = 0x28; // Integer
		constexpr auto m_origin = 0x2c; // Vector
		constexpr auto m_angles = 0x38; // Vector
		constexpr auto m_controlPoint1 = 0x44; // Vector
	}

	namespace n_CTEProjectileTrail {
		constexpr auto m_owner = 0x28; // Integer
		constexpr auto m_startPos = 0x2c; // Vector
		constexpr auto m_endPos = 0x38; // Vector
		constexpr auto m_weaponClassIndex = 0x44; // Integer
		constexpr auto m_modBitfield = 0x48; // Integer
		constexpr auto m_projectileTrailIndex = 0x4c; // Integer
		constexpr auto m_impactEffectTable = 0x50; // Integer
	}

	namespace n_CScriptNetData {
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
	}

	namespace n_CPlayerWaypoint {
		constexpr auto m_parentAttachmentIndex = 0x24; // Integer
		constexpr auto m_cellX = 0x4c; // Integer
		constexpr auto m_cellY = 0x50; // Integer
		constexpr auto m_cellZ = 0x54; // Integer
		constexpr auto m_localOrigin = 0x58; // Vector
		constexpr auto m_networkedFlags = 0x3ec; // Integer
		constexpr auto m_visibilityFlags = 0x440; // Integer
		constexpr auto m_iTeamNum = 0x448; // Integer
		constexpr auto m_teamMemberIndex = 0x450; // Integer
		constexpr auto m_hOwnerEntity = 0x4a4; // Integer
		constexpr auto m_iSignifierName = 0x580; // String
		constexpr auto m_parentAttachmentModel = 0x860; // Integer
		constexpr auto m_realmsBitMask = 0xa48; // Integer64
		constexpr auto m_waypointType = 0xa60; // Integer
		constexpr auto m_waypointBitfield = 0xa64; // Integer
		constexpr auto m_objectivePackedInt = 0xb48; // Integer
		constexpr auto m_waypointGroupName = 0xb4c; // String
		constexpr auto m_waypointGroupFlags = 0xb6c; // Integer
		constexpr auto m_waypointCustomType = 0xb70; // String
		constexpr auto m_waypointStringA = 0xb90; // String
		constexpr auto m_waypointStringB = 0xbd0; // String
		constexpr auto m_waypointAssetA = 0xc18; // String
		constexpr auto m_waypointAssetB = 0xc98; // String
	}

	namespace n_CScriptNetData_SNDC_TITAN_SOUL {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc7a; // Integer [0]
		constexpr auto m_int32s = 0xca0; // Integer [0]
		constexpr auto m_entities = 0xcd8; // Integer [0]
	}

	namespace n_CEntityBlocker {
	}

	namespace n_CPredictedFirstPersonProxy {
	}

	namespace n_CNPC_Titan {
		constexpr auto m_decalIndex = 0xeb8; // Integer
		constexpr auto m_titanSoul = 0x1b28; // Integer
		constexpr auto m_grappleHook = 0x1df0; // Integer
		constexpr auto m_grapplePoints = 0x1df8; // Array
		constexpr auto m_grappleVel = 0x1e00; // Vector
		constexpr auto m_grapplePoints = 0x1e0c; // Vector [0]
		constexpr auto m_grapplePointCount = 0x1e3c; // Integer
		constexpr auto m_grappleAttached = 0x1e40; // Integer
		constexpr auto m_grapplePulling = 0x1e41; // Integer
		constexpr auto m_grappleSwinging = 0x1e42; // Integer
		constexpr auto m_grappleRetracting = 0x1e43; // Integer
		constexpr auto m_grappleForcedRetracting = 0x1e44; // Integer
		constexpr auto m_grappleGracePeriodFinished = 0x1e45; // Integer
		constexpr auto m_grappleUsedPower = 0x1e48; // Float
		constexpr auto m_grappleMeleeTarget = 0x1e5c; // Integer
		constexpr auto m_grappleAutoAimTarget = 0x1e60; // Integer
		constexpr auto m_grappleHasGoodVelocity = 0x1e64; // Integer
		constexpr auto m_grappleSwingDetachLowSpeed = 0x1e6c; // Float
		constexpr auto m_grappleActive = 0x1e88; // Integer
		constexpr auto m_canStand = 0x1e89; // Integer
	}

	namespace n_CTriggerNoGrapple {
	}

	namespace n_CAmbientGeneric {
		constexpr auto m_radius = 0xa60; // Float
		constexpr auto m_isEnabled = 0xa64; // Integer
		constexpr auto m_networkTableSoundID = 0xa70; // Integer
		constexpr auto m_networkedSegmentEndpointWorldSpace = 0xa78; // Vector
		constexpr auto m_hasPolylineSegments = 0xa84; // Integer
	}

	namespace n_CTeam {
		constexpr auto m_score = 0xa60; // Integer
		constexpr auto m_score2 = 0xa64; // Integer
		constexpr auto m_kills = 0xa68; // Integer
		constexpr auto m_deaths = 0xa6c; // Integer
		constexpr auto m_iRoundsWon = 0xa70; // Integer
		constexpr auto m_iTeamTeamNum = 0xa74; // Integer
		constexpr auto m_teamColor = 0xa78; // Vector
		constexpr auto m_szTeamname = 0xaa8; // String
	}

	namespace n_CTEParticleSystem {
		constexpr auto m_vecOrigin.x = 0x28; // Float
		constexpr auto m_vecOrigin.y = 0x2c; // Float
		constexpr auto m_vecOrigin.z = 0x30; // Float
	}

	namespace n_CNPC_SentryTurret {
		constexpr auto m_turretState = 0x1df0; // Integer
		constexpr auto m_killCount = 0x1df4; // Integer
		constexpr auto m_titanKillCount = 0x1df8; // Integer
		constexpr auto m_eyeAttach = 0x1dfc; // Integer
		constexpr auto m_controlPanel = 0x1e00; // Integer
	}

	namespace n_CBaseButton {
		constexpr auto m_usable = 0xa90; // Integer
	}

	namespace n_CInfoTargetMinimap {
	}

	namespace n_CScriptNetData_SNDC_GLOBAL {
		constexpr auto m_bools = 0x0; // Array
		constexpr auto m_ranges = 0x0; // Array
		constexpr auto m_int32s = 0x0; // Array
		constexpr auto m_times = 0x0; // Array
		constexpr auto m_entities = 0x0; // Array
		constexpr auto m_bools = 0xc70; // Integer [0]
		constexpr auto m_ranges = 0xc82; // Integer [0]
		constexpr auto m_int32s = 0xcc8; // Integer [0]
		constexpr auto m_entities = 0xd58; // Integer [0]
	}

	namespace n_CTEScriptParticleSystemOnEntity {
		constexpr auto m_effectIndex = 0x28; // Integer
		constexpr auto m_ent = 0x2c; // Integer
		constexpr auto m_attachType = 0x30; // Integer
		constexpr auto m_attachmentIndex = 0x34; // Integer
		constexpr auto m_attachType2 = 0x38; // Integer
		constexpr auto m_attachmentIndex2 = 0x3c; // Integer
	}

	namespace n_CTEEffectDispatch {
		constexpr auto m_vOrigin.x = 0x28; // Float
		constexpr auto m_vOrigin.y = 0x2c; // Float
		constexpr auto m_vOrigin.z = 0x30; // Float
		constexpr auto m_vStart.x = 0x34; // Float
		constexpr auto m_vStart.y = 0x38; // Float
		constexpr auto m_vStart.z = 0x3c; // Float
		constexpr auto m_vNormal = 0x40; // Vector
		constexpr auto m_vAngles = 0x4c; // Vector
		constexpr auto m_effectFlags = 0x58; // Integer
		constexpr auto m_effectEntHandle = 0x78; // Integer
		constexpr auto m_otherEntHandle = 0x7c; // Integer
		constexpr auto m_flScale = 0x80; // Float
		constexpr auto m_flMagnitude = 0x84; // Float
		constexpr auto m_flRadius = 0x88; // Float
		constexpr auto m_nAttachmentIndex = 0x8c; // Integer
		constexpr auto m_attachmentIndexForViewmodel = 0x90; // Integer
		constexpr auto m_nSurfaceProp = 0x94; // Integer
		constexpr auto m_nDamageType = 0x98; // Integer
		constexpr auto m_nOtherEntIndex = 0x9c; // Integer
		constexpr auto m_sharedInt32_A = 0xa4; // Integer
		constexpr auto m_sharedInt32_B = 0xa8; // Integer
		constexpr auto m_iImpactEffectTableIndex = 0xac; // Integer
		constexpr auto m_nColor = 0xb0; // Integer
		constexpr auto m_persistentWeaponEffect = 0xc4; // Integer
		constexpr auto m_iEffectName = 0xc8; // Integer
	}

}