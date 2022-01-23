// Created by BlueFire1337
// Updated 2022-01-21
// Generated 2022-01-23

#pragma once

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FAnimalsAnimInstanceConfig {
	UAimOffsetBlendSpace* AO; // 0x0
	UAnimSequence* BasePose; // 0x8
	UBlendSpaceBase* BaseAnimBS; // 0x10
	UBlendSpaceBase* LeanBS; // 0x18
	UAnimSequence* Idle_V1_AdditiveAnim; // 0x20
	UAnimSequence* Idle_V2_AdditiveAnim; // 0x28
	UBlendSpace* Moving_F; // 0x30
	UBlendSpace* Moving_BkPd; // 0x38
	UBlendSpace* Moving_F_Arch; // 0x40
	UAnimSequence* JumpStart; // 0x48
	UAnimSequence* JumpFlail; // 0x50
	UAnimSequence* JumpFalling; // 0x58
	UAnimSequence* JumpLand; // 0x60
	UAnimMontage* JumpAdditiveLandMontage; // 0x68
	UAnimMontage* JumpAdditiveMovingLandMontage; // 0x70
	UBlendSpace* JumpLeanBS; // 0x78
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString PlatForm; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	FVector EffectorLocation; // 0xc8
	EBoneControlSpace EffectorLocationSpace; // 0xd4
	FBoneSocketTarget EffectorTarget; // 0xe0
	FBoneReference TipBone; // 0x140
	FBoneReference RootBone; // 0x150
	float Precision; // 0x160
	int32_t MaxIterations; // 0x164
	bool bStartFromTail; // 0x168
	bool bEnableRotationLimit; // 0x169
	TArray<float> RotationLimitPerJoints; // 0x170
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FSubsurfaceProfileStruct {
	FLinearColor SurfaceAlbedo; // 0x0
	FLinearColor MeanFreePathColor; // 0x10
	float MeanFreePathDistance; // 0x20
	float WorldUnitScale; // 0x24
	bool bEnableBurley; // 0x28
	float ScatterRadius; // 0x2c
	FLinearColor SubsurfaceColor; // 0x30
	FLinearColor FalloffColor; // 0x40
	FLinearColor BoundaryColorBleed; // 0x50
	float ExtinctionScale; // 0x60
	float NormalScale; // 0x64
	float ScatteringDistribution; // 0x68
	float IOR; // 0x6c
	float Roughness0; // 0x70
	float Roughness1; // 0x74
	float LobeMix; // 0x78
	FLinearColor TransmissionTintColor; // 0x7c
};

struct FGateData : FTableRowBase {
	FString GateName; // 0x8
	FVector2D GatePosition; // 0x18
	FName OccupiedGuildID; // 0x20
};

struct FWorship {
	float MulAdd; // 0x0
	EWorshipType WorshipType; // 0x4
	FDateTime EndTime; // 0x8
	int64_t EndTimeTicks; // 0x10
	int32_t ServerId; // 0x18
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FSkillAddExpAction {
	float OneHandWeaponAttack; // 0x0
	float OneHandWeaponBlock; // 0x4
	float OneHandWeaponHangUp; // 0x8
	float TwoHandWeaponAttack; // 0xc
	float TwoHandWeaponBlock; // 0x10
	float TwoHandWeaponHangUp; // 0x14
	float ShieldBlock; // 0x18
	float ShieldBlockArrow; // 0x1c
	float ShieldAttack; // 0x20
	float ShieldHandUp; // 0x24
	float PolearmsAttack; // 0x28
	float PolearmsBlock; // 0x2c
	float PolearmsHangUp; // 0x30
	float HeavyArmorBePointAttack; // 0x34
	float HeavyArmorBeAOEAttack; // 0x38
	float HeavyArmorSpendSP; // 0x3c
	float HeavyArmorHangUp; // 0x40
	float ThrowEmpty; // 0x44
	float ThrowAttack; // 0x48
	float ThrowAOEAttack; // 0x4c
	float ThrowHangUp; // 0x50
	float ArcheryEmpty; // 0x54
	float ArcheryAttack; // 0x58
	float ArcheryAOEAttack; // 0x5c
	float ArcheryHangUp; // 0x60
	float CrossbowsEmpty; // 0x64
	float CrossbowsAttack; // 0x68
	float CrossbowsAOEAttack; // 0x6c
	float CrossbowsHangUp; // 0x70
	float RiderMove; // 0x74
	float RiderHangUp; // 0x78
	float LightArmorBePointAttack; // 0x7c
	float LightArmorBeAOEAttack; // 0x80
	float LightArmorSpendSP; // 0x84
	float LightArmorHangUp; // 0x88
	float PhysiqueBeAttack; // 0x8c
	float PhysiqueBeAOEAttack; // 0x90
	float PhysiqueSpendSP; // 0x94
	float PhysiqueHangUp; // 0x98
	float MiningEmpty; // 0x9c
	float MiningTool; // 0xa0
	float MiningHangUp; // 0xa4
	float LumberingEmpty; // 0xa8
	float LumberingTool; // 0xac
	float LumberingHangUp; // 0xb0
	float HuntingEmpty; // 0xb4
	float HuntingTool; // 0xb8
	float HuntingHangUp; // 0xbc
	float PlantingSow; // 0xc0
	float PlantingFertilizer; // 0xc4
	float PlantingHoeing; // 0xc8
	float PlantingHarvest; // 0xcc
	float PlantingHangUp; // 0xd0
	float SiegeCraft; // 0xd4
	float SiegeFire; // 0xd8
	float SiegeHitSuccess; // 0xdc
	float SiegeHangUp; // 0xe0
	float BuildingCraft; // 0xe4
	float BuildingPlace; // 0xe8
	float BuildingFrameStepSkillExp; // 0xec
	float BuildingRepair; // 0xf0
	float BuildingHangUp; // 0xf4
	float HandMakingCraftWeapon; // 0xf8
	float HandMakingRepair; // 0xfc
	float HandMakingForge; // 0x100
	float HandMakingHangUp; // 0x104
	float ArmorCraftArmor; // 0x108
	float ArmorRepair; // 0x10c
	float ArmorForge; // 0x110
	float ArmorHangUp; // 0x114
	float HerbCraftHerb; // 0x118
	float HerbCraftFood; // 0x11c
	float HerbUseHerb; // 0x120
	float HerbUseFood; // 0x124
	float HerbHangUp; // 0x128
	float LeaderShipMakeDamage; // 0x12c
	float LeaderShipAddLevelExp; // 0x130
	float LeaderHangUp; // 0x134
	float TameToRecruitDefaultValue; // 0x138
	float TameToRecruitRatio; // 0x13c
	float RecruitPeace; // 0x140
	float RecruitHangUp; // 0x144
	float GeneralAddExpToTraning; // 0x148
	float TraningHangUp; // 0x14c
	float TameHorse; // 0x150
	float TameHangUp; // 0x154
	float RenownRunBusiness; // 0x158
	float RenownAchievement; // 0x15c
	float RenownJoinXianChengBattle; // 0x160
	float RenownWinXianChengBattle; // 0x164
	float RenownLoseXianChengBattle; // 0x168
	float RenownPutYueDanPingItem; // 0x16c
	float RenownBannerStructure; // 0x170
	float RenownHangUp; // 0x174
	float RenownJoinTaiShouBattle; // 0x178
	float RenownWinTaiShouBattle; // 0x17c
	float RenownLoseTaiShouBattle; // 0x180
	float RenownJoinGuanAiBattle; // 0x184
	float RenownWinGuanAiBattle; // 0x188
	float RenownLoseGuanAiBattle; // 0x18c
	float HuntingFish; // 0x190
	float SEHunting; // 0x194
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FAttributeMetaData : FTableRowBase {
	float BaseValue; // 0x8
	float MinValue; // 0xc
	float MaxValue; // 0x10
	FString DerivedAttributeInfo; // 0x18
	bool bCanStack; // 0x28
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FBuffNetData {
	USGBuff* BuffClass; // 0x0
	FVector position; // 0x8
	float LifeTime; // 0x14
	EBuffFormType FromType; // 0x18
};

struct FGuildSkillSingleRequire {
	ESkillType RequireSkill; // 0x0
	int32_t RequireLevel; // 0x4
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x0
	char bOverride_WhiteTint : 1; // 0x0
	char bOverride_ColorSaturation : 1; // 0x0
	char bOverride_ColorContrast : 1; // 0x0
	char bOverride_ColorGamma : 1; // 0x0
	char bOverride_ColorGain : 1; // 0x0
	char bOverride_ColorOffset : 1; // 0x0
	char bOverride_ColorSaturationShadows : 1; // 0x0
	char bOverride_ColorContrastShadows : 1; // 0x1
	char bOverride_ColorGammaShadows : 1; // 0x1
	char bOverride_ColorGainShadows : 1; // 0x1
	char bOverride_ColorOffsetShadows : 1; // 0x1
	char bOverride_ColorSaturationMidtones : 1; // 0x1
	char bOverride_ColorContrastMidtones : 1; // 0x1
	char bOverride_ColorGammaMidtones : 1; // 0x1
	char bOverride_ColorGainMidtones : 1; // 0x1
	char bOverride_ColorOffsetMidtones : 1; // 0x2
	char bOverride_ColorSaturationHighlights : 1; // 0x2
	char bOverride_ColorContrastHighlights : 1; // 0x2
	char bOverride_ColorGammaHighlights : 1; // 0x2
	char bOverride_ColorGainHighlights : 1; // 0x2
	char bOverride_ColorOffsetHighlights : 1; // 0x2
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x2
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x2
	char bOverride_BlueCorrection : 1; // 0x3
	char bOverride_ExpandGamut : 1; // 0x3
	char bOverride_ToneCurveAmount : 1; // 0x3
	char bOverride_FilmWhitePoint : 1; // 0x3
	char bOverride_FilmSaturation : 1; // 0x3
	char bOverride_FilmChannelMixerRed : 1; // 0x3
	char bOverride_FilmChannelMixerGreen : 1; // 0x3
	char bOverride_FilmChannelMixerBlue : 1; // 0x3
	char bOverride_FilmContrast : 1; // 0x4
	char bOverride_FilmDynamicRange : 1; // 0x4
	char bOverride_FilmHealAmount : 1; // 0x4
	char bOverride_FilmToeAmount : 1; // 0x4
	char bOverride_FilmShadowTint : 1; // 0x4
	char bOverride_FilmShadowTintBlend : 1; // 0x4
	char bOverride_FilmShadowTintAmount : 1; // 0x4
	char bOverride_FilmSlope : 1; // 0x4
	char bOverride_FilmToe : 1; // 0x5
	char bOverride_FilmShoulder : 1; // 0x5
	char bOverride_FilmBlackClip : 1; // 0x5
	char bOverride_FilmWhiteClip : 1; // 0x5
	char bOverride_SceneColorTint : 1; // 0x5
	char bOverride_SceneFringeIntensity : 1; // 0x5
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x5
	char bOverride_AmbientCubemapTint : 1; // 0x5
	char bOverride_AmbientCubemapIntensity : 1; // 0x6
	char bOverride_BloomMethod : 1; // 0x6
	char bOverride_BloomIntensity : 1; // 0x6
	char bOverride_BloomThreshold : 1; // 0x6
	char bOverride_Bloom1Tint : 1; // 0x6
	char bOverride_Bloom1Size : 1; // 0x6
	char bOverride_Bloom2Size : 1; // 0x6
	char bOverride_Bloom2Tint : 1; // 0x6
	char bOverride_Bloom3Tint : 1; // 0x7
	char bOverride_Bloom3Size : 1; // 0x7
	char bOverride_Bloom4Tint : 1; // 0x7
	char bOverride_Bloom4Size : 1; // 0x7
	char bOverride_Bloom5Tint : 1; // 0x7
	char bOverride_Bloom5Size : 1; // 0x7
	char bOverride_Bloom6Tint : 1; // 0x7
	char bOverride_Bloom6Size : 1; // 0x7
	char bOverride_BloomSizeScale : 1; // 0x8
	char bOverride_BloomConvolutionTexture : 1; // 0x8
	char bOverride_BloomConvolutionSize : 1; // 0x8
	char bOverride_BloomConvolutionCenterUV : 1; // 0x8
	char bOverride_BloomConvolutionPreFilter : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x8
	char bOverride_BloomConvolutionBufferScale : 1; // 0x9
	char bOverride_BloomDirtMaskIntensity : 1; // 0x9
	char bOverride_BloomDirtMaskTint : 1; // 0x9
	char bOverride_BloomDirtMask : 1; // 0x9
	char bOverride_CameraShutterSpeed : 1; // 0x9
	char bOverride_CameraISO : 1; // 0x9
	char bOverride_AutoExposureMethod : 1; // 0x9
	char bOverride_AutoExposureLowPercent : 1; // 0x9
	char bOverride_AutoExposureHighPercent : 1; // 0xa
	char bOverride_AutoExposureMinBrightness : 1; // 0xa
	char bOverride_AutoExposureMaxBrightness : 1; // 0xa
	char bOverride_AutoExposureCalibrationConstant : 1; // 0xa
	char bOverride_AutoExposureSpeedUp : 1; // 0xa
	char bOverride_AutoExposureSpeedDown : 1; // 0xa
	char bOverride_AutoExposureBias : 1; // 0xa
	char bOverride_AutoExposureBiasCurve : 1; // 0xa
	char bOverride_AutoExposureMeterMask : 1; // 0xb
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xb
	char bOverride_HistogramLogMin : 1; // 0xb
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xb
	char bOverride_LensFlareTints : 1; // 0xb
	char bOverride_LensFlareBokehSize : 1; // 0xb
	char bOverride_LensFlareBokehShape : 1; // 0xc
	char bOverride_LensFlareThreshold : 1; // 0xc
	char bOverride_VignetteIntensity : 1; // 0xc
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xc
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xc
	char bOverride_AmbientOcclusionRadius : 1; // 0xc
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xd
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xd
	char bOverride_AmbientOcclusionDistance : 1; // 0xd
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xd
	char bOverride_AmbientOcclusionBias : 1; // 0xd
	char bOverride_AmbientOcclusionQuality : 1; // 0xd
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xd
	char bOverride_AmbientOcclusionMipScale : 1; // 0xe
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0xe
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0xe
	char bOverride_RayTracingAO : 1; // 0x10
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10
	char bOverride_RayTracingAOIntensity : 1; // 0x10
	char bOverride_RayTracingAORadius : 1; // 0x10
	char bOverride_LPVIntensity : 1; // 0x14
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x14
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14
	char bOverride_LPVSize : 1; // 0x14
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x15
	char bOverride_LPVGeometryVolumeBias : 1; // 0x15
	char bOverride_LPVVplInjectionBias : 1; // 0x15
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15
	char bOverride_LPVFadeRange : 1; // 0x15
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15
	char bOverride_IndirectLightingColor : 1; // 0x15
	char bOverride_IndirectLightingIntensity : 1; // 0x16
	char bOverride_ColorGradingIntensity : 1; // 0x16
	char bOverride_ColorGradingLUT : 1; // 0x16
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x16
	char bOverride_DepthOfFieldFstop : 1; // 0x16
	char bOverride_DepthOfFieldMinFstop : 1; // 0x16
	char bOverride_DepthOfFieldBladeCount : 1; // 0x16
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x16
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x17
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x17
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x17
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x17
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x17
	char bOverride_DepthOfFieldScale : 1; // 0x17
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x17
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x17
	char bOverride_MobileHQGaussian : 1; // 0x18
	char bOverride_DepthOfFieldOcclusion : 1; // 0x18
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x18
	char bOverride_EnableFSR : 1; // 0x1c
	char EnableFSRUpscale : 1; // 0x1c
	EFSRUpscaleQuality FSRUpscaleQuality; // 0x20
	char EnableFSRSharpening : 1; // 0x24
	float FSRSoftness; // 0x28
	char bOverride_MotionBlurAmount : 1; // 0x2c
	char bOverride_MotionBlurMax : 1; // 0x2c
	char bOverride_MotionBlurTargetFPS : 1; // 0x2c
	char bOverride_MotionBlurPerObjectSize : 1; // 0x2c
	char bOverride_ScreenPercentage : 1; // 0x2c
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x2c
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x2c
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x2c
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x2d
	char bOverride_ReflectionsType : 1; // 0x30
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x30
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x30
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x30
	char bOverride_RayTracingReflectionsShadows : 1; // 0x30
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x30
	char bOverride_TranslucencyType : 1; // 0x30
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x30
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x31
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x31
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x31
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x31
	char bOverride_RayTracingGI : 1; // 0x31
	char bOverride_RayTracingGIMaxBounces : 1; // 0x31
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x31
	char bOverride_PathTracingMaxBounces : 1; // 0x31
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x32
	char bMobileHQGaussian : 1; // 0x34
	EBloomMethod BloomMethod; // 0x35
	EAutoExposureMethod AutoExposureMethod; // 0x36
	float WhiteTemp; // 0x38
	float WhiteTint; // 0x3c
	FVector4 ColorSaturation; // 0x40
	FVector4 ColorContrast; // 0x50
	FVector4 ColorGamma; // 0x60
	FVector4 ColorGain; // 0x70
	FVector4 ColorOffset; // 0x80
	FVector4 ColorSaturationShadows; // 0x90
	FVector4 ColorContrastShadows; // 0xa0
	FVector4 ColorGammaShadows; // 0xb0
	FVector4 ColorGainShadows; // 0xc0
	FVector4 ColorOffsetShadows; // 0xd0
	FVector4 ColorSaturationMidtones; // 0xe0
	FVector4 ColorContrastMidtones; // 0xf0
	FVector4 ColorGammaMidtones; // 0x100
	FVector4 ColorGainMidtones; // 0x110
	FVector4 ColorOffsetMidtones; // 0x120
	FVector4 ColorSaturationHighlights; // 0x130
	FVector4 ColorContrastHighlights; // 0x140
	FVector4 ColorGammaHighlights; // 0x150
	FVector4 ColorGainHighlights; // 0x160
	FVector4 ColorOffsetHighlights; // 0x170
	float ColorCorrectionHighlightsMin; // 0x180
	float ColorCorrectionShadowsMax; // 0x184
	float BlueCorrection; // 0x188
	float ExpandGamut; // 0x18c
	float ToneCurveAmount; // 0x190
	float FilmSlope; // 0x194
	float FilmToe; // 0x198
	float FilmShoulder; // 0x19c
	float FilmBlackClip; // 0x1a0
	float FilmWhiteClip; // 0x1a4
	FLinearColor FilmWhitePoint; // 0x1a8
	FLinearColor FilmShadowTint; // 0x1b8
	float FilmShadowTintBlend; // 0x1c8
	float FilmShadowTintAmount; // 0x1cc
	float FilmSaturation; // 0x1d0
	FLinearColor FilmChannelMixerRed; // 0x1d4
	FLinearColor FilmChannelMixerGreen; // 0x1e4
	FLinearColor FilmChannelMixerBlue; // 0x1f4
	float FilmContrast; // 0x204
	float FilmToeAmount; // 0x208
	float FilmHealAmount; // 0x20c
	float FilmDynamicRange; // 0x210
	FLinearColor SceneColorTint; // 0x214
	float SceneFringeIntensity; // 0x224
	float ChromaticAberrationStartOffset; // 0x228
	float BloomIntensity; // 0x22c
	float BloomThreshold; // 0x230
	float BloomSizeScale; // 0x234
	float Bloom1Size; // 0x238
	float Bloom2Size; // 0x23c
	float Bloom3Size; // 0x240
	float Bloom4Size; // 0x244
	float Bloom5Size; // 0x248
	float Bloom6Size; // 0x24c
	FLinearColor Bloom1Tint; // 0x250
	FLinearColor Bloom2Tint; // 0x260
	FLinearColor Bloom3Tint; // 0x270
	FLinearColor Bloom4Tint; // 0x280
	FLinearColor Bloom5Tint; // 0x290
	FLinearColor Bloom6Tint; // 0x2a0
	float BloomConvolutionSize; // 0x2b0
	UTexture2D* BloomConvolutionTexture; // 0x2b8
	FVector2D BloomConvolutionCenterUV; // 0x2c0
	float BloomConvolutionPreFilterMin; // 0x2c8
	float BloomConvolutionPreFilterMax; // 0x2cc
	float BloomConvolutionPreFilterMult; // 0x2d0
	float BloomConvolutionBufferScale; // 0x2d4
	UTexture* BloomDirtMask; // 0x2d8
	float BloomDirtMaskIntensity; // 0x2e0
	FLinearColor BloomDirtMaskTint; // 0x2e4
	FLinearColor AmbientCubemapTint; // 0x2f4
	float AmbientCubemapIntensity; // 0x304
	UTextureCube* AmbientCubemap; // 0x308
	float CameraShutterSpeed; // 0x310
	float CameraISO; // 0x314
	float DepthOfFieldFstop; // 0x318
	float DepthOfFieldMinFstop; // 0x31c
	int32_t DepthOfFieldBladeCount; // 0x320
	float AutoExposureBias; // 0x324
	float AutoExposureBiasBackup; // 0x328
	char bOverride_AutoExposureBiasBackup : 1; // 0x32c
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x330
	UCurveFloat* AutoExposureBiasCurve; // 0x338
	UTexture* AutoExposureMeterMask; // 0x340
	float AutoExposureLowPercent; // 0x348
	float AutoExposureHighPercent; // 0x34c
	float AutoExposureMinBrightness; // 0x350
	float AutoExposureMaxBrightness; // 0x354
	float AutoExposureSpeedUp; // 0x358
	float AutoExposureSpeedDown; // 0x35c
	float HistogramLogMin; // 0x360
	float HistogramLogMax; // 0x364
	float AutoExposureCalibrationConstant; // 0x368
	float LensFlareIntensity; // 0x36c
	FLinearColor LensFlareTint; // 0x370
	float LensFlareBokehSize; // 0x380
	float LensFlareThreshold; // 0x384
	UTexture* LensFlareBokehShape; // 0x388
	FLinearColor LensFlareTints[0x8]; // 0x390
	float VignetteIntensity; // 0x410
	float GrainJitter; // 0x414
	float GrainIntensity; // 0x418
	float AmbientOcclusionIntensity; // 0x41c
	float AmbientOcclusionStaticFraction; // 0x420
	float AmbientOcclusionRadius; // 0x424
	char AmbientOcclusionRadiusInWS : 1; // 0x428
	float AmbientOcclusionFadeDistance; // 0x42c
	float AmbientOcclusionFadeRadius; // 0x430
	float AmbientOcclusionDistance; // 0x434
	float AmbientOcclusionPower; // 0x438
	float AmbientOcclusionBias; // 0x43c
	float AmbientOcclusionQuality; // 0x440
	float AmbientOcclusionMipBlend; // 0x444
	float AmbientOcclusionMipScale; // 0x448
	float AmbientOcclusionMipThreshold; // 0x44c
	float AmbientOcclusionTemporalBlendWeight; // 0x450
	char RayTracingAO : 1; // 0x454
	int32_t RayTracingAOSamplesPerPixel; // 0x458
	float RayTracingAOIntensity; // 0x45c
	float RayTracingAORadius; // 0x460
	FLinearColor IndirectLightingColor; // 0x464
	float IndirectLightingIntensity; // 0x474
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x478
	int32_t RayTracingGIMaxBounces; // 0x47c
	int32_t RayTracingGISamplesPerPixel; // 0x480
	float ColorGradingIntensity; // 0x484
	UTexture* ColorGradingLUT; // 0x488
	float DepthOfFieldSensorWidth; // 0x490
	float DepthOfFieldFocalDistance; // 0x494
	float DepthOfFieldDepthBlurAmount; // 0x498
	float DepthOfFieldDepthBlurRadius; // 0x49c
	float DepthOfFieldFocalRegion; // 0x4a0
	float DepthOfFieldNearTransitionRegion; // 0x4a4
	float DepthOfFieldFarTransitionRegion; // 0x4a8
	float DepthOfFieldScale; // 0x4ac
	float DepthOfFieldNearBlurSize; // 0x4b0
	float DepthOfFieldFarBlurSize; // 0x4b4
	float DepthOfFieldOcclusion; // 0x4b8
	float DepthOfFieldSkyFocusDistance; // 0x4bc
	float DepthOfFieldVignetteSize; // 0x4c0
	float MotionBlurAmount; // 0x4c4
	float MotionBlurMax; // 0x4c8
	int32_t MotionBlurTargetFPS; // 0x4cc
	float MotionBlurPerObjectSize; // 0x4d0
	float LPVIntensity; // 0x4d4
	float LPVVplInjectionBias; // 0x4d8
	float LPVSize; // 0x4dc
	float LPVSecondaryOcclusionIntensity; // 0x4e0
	float LPVSecondaryBounceIntensity; // 0x4e4
	float LPVGeometryVolumeBias; // 0x4e8
	float LPVEmissiveInjectionIntensity; // 0x4ec
	float LPVDirectionalOcclusionIntensity; // 0x4f0
	float LPVDirectionalOcclusionRadius; // 0x4f4
	float LPVDiffuseOcclusionExponent; // 0x4f8
	float LPVSpecularOcclusionExponent; // 0x4fc
	float LPVDiffuseOcclusionIntensity; // 0x500
	float LPVSpecularOcclusionIntensity; // 0x504
	EReflectionsType ReflectionsType; // 0x508
	float ScreenSpaceReflectionIntensity; // 0x50c
	float ScreenSpaceReflectionQuality; // 0x510
	float ScreenSpaceReflectionMaxRoughness; // 0x514
	float RayTracingReflectionsMaxRoughness; // 0x518
	int32_t RayTracingReflectionsMaxBounces; // 0x51c
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x520
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x524
	char RayTracingReflectionsTranslucency : 1; // 0x525
	ETranslucencyType TranslucencyType; // 0x526
	float RayTracingTranslucencyMaxRoughness; // 0x528
	int32_t RayTracingTranslucencyRefractionRays; // 0x52c
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x530
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x534
	char RayTracingTranslucencyRefraction : 1; // 0x535
	int32_t PathTracingMaxBounces; // 0x538
	int32_t PathTracingSamplesPerPixel; // 0x53c
	float LPVFadeRange; // 0x540
	float LPVDirectionalOcclusionFadeRange; // 0x544
	float ScreenPercentage; // 0x548
	FWeightedBlendables WeightedBlendables; // 0x550
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FHumanVoiceSetting : FTableRowBase {
	FCustomSoundSettingArray SoundSetting[0x2]; // 0x8
};

struct FVirtualPropData {
	FName VirtualPropName; // 0x0
	FName VirtualPropBindSocket; // 0x8
	UStaticMesh* VirtualPropStaticMesh; // 0x10
	USkeletalMesh* VirtualPropSkeletalMesh; // 0x18
	bool ForbidOthersSpawn; // 0x20
	bool CanSpawnMultiProps; // 0x21
};

struct FMontageCustomCurve {
	TMap<FName, FBoneLocalTransform> BoneTransformMap; // 0x0
};

struct FBasePlayerDataDeadInfo {
	char bIsDead : 1; // 0x0
	FTransform LastSavedTransform; // 0x10
};

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	float DesiredFOV; // 0x1c
	float OrthoWidth; // 0x20
	float OrthoNearClipPlane; // 0x24
	float OrthoFarClipPlane; // 0x28
	float AspectRatio; // 0x2c
	char bConstrainAspectRatio : 1; // 0x30
	char bUseFieldOfViewForLOD : 1; // 0x30
	ECameraProjectionMode ProjectionMode; // 0x34
	float PostProcessBlendWeight; // 0x38
	FPostProcessSettings PostProcessSettings; // 0x40
	FVector2D OffCenterProjectionOffset; // 0x5a0
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FRideTameRequireItemData {
	TArray<FRideTameRequireItemConfig> RideTameRequireItems; // 0x0
};

struct FRewardItemList {
	int32_t MinIndex; // 0x0
	int32_t MaxIndex; // 0x4
	TArray<FRewardItem> RewardItems; // 0x8
};

struct FAnimalsStopAnims {
	TMap<EAnimalsMovingGaitType, UAnimMontage*> TMap_FwdStop; // 0x0
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FGeneralLoyaltyModify {
	float MinLoyalty; // 0x0
	float DamageMultiAdd; // 0x4
	float DefenseMultiAdd; // 0x8
	float SkillEffectMultiAdd; // 0xc
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID PathBindingID; // 0x20
	FMovieSceneFloatChannel TimingCurve; // 0x38
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
	char bFollow : 1; // 0xdc
	char bReverse : 1; // 0xdc
	char bForceUpright : 1; // 0xdc
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FSkeletalMeshOptimizationSettings {
	SkeletalMeshTerminationCriterion TerminationCriterion; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float NumOfVertPercentage; // 0x8
	uint32_t MaxNumOfTriangles; // 0xc
	uint32_t MaxNumOfVerts; // 0x10
	float MaxDeviationPercentage; // 0x14
	SkeletalMeshOptimizationType ReductionMethod; // 0x18
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19
	SkeletalMeshOptimizationImportance TextureImportance; // 0x1a
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x1b
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x1c
	char bRemapMorphTargets : 1; // 0x1d
	char bRecalcNormals : 1; // 0x1d
	float WeldingThreshold; // 0x20
	float NormalsThreshold; // 0x24
	int32_t MaxBonesPerVertex; // 0x28
	char bEnforceBoneBoundaries : 1; // 0x2c
	float VolumeImportance; // 0x30
	char bLockEdges : 1; // 0x34
	char bLockColorBounaries : 1; // 0x34
	int32_t BaseLOD; // 0x38
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FKongmingLanternDropData {
	ASGKongmingLantern* DropClass; // 0x0
	float DropWrapperWeight; // 0x8
};

struct FPolyglotTextData {
	ELocalizedTextSourceCategory Category; // 0x0
	FString NativeCulture; // 0x8
	FString Namespace; // 0x18
	FString Key; // 0x28
	FString NativeString; // 0x38
	TMap<FString, FString> LocalizedStrings; // 0x48
	bool bIsMinimalPatch; // 0x98
	FText CachedText; // 0xa0
};

struct FAllianceBriefData {
	FGuid AllianceUid; // 0x0
	FString AllianceName; // 0x10
	FGuid HeadAllianceUid; // 0x20
	FGuid ParentAllianceUid; // 0x30
	FString OuterBillboard; // 0x40
	FAllianceGuildMember GuildMemberOwner; // 0x50
	TArray<FAllianceGuildMember> GuildMembers; // 0x60
	TArray<FAllianceAllianceMember> AllianceMembers; // 0x70
	char bCanApplyJoin : 1; // 0x80
	int32_t ServerId; // 0x84
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FStableTrainerData : FTableRowBase {
	float TrainerAddRebornMul; // 0x8
	float TrainerAddTameMul; // 0xc
	float TrainerReduceTrainRewardIntervalMul; // 0x10
	float TrainerAddPerkChanceMul; // 0x14
	float TrainerAddExpMul; // 0x18
	float TrainerCapital; // 0x1c
	ECapitalType TrainerCapitalType; // 0x20
	EAnimalQualityType VehicleQualityType; // 0x21
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FHairAdvancedRenderingSettings {
	bool bUseStableRasterization; // 0x0
	bool bScatterSceneLighting; // 0x1
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FSkeletalMeshLODInfo {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	FSkeletalMeshBuildSettings BuildSettings; // 0x18
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2c
	TArray<FBoneReference> BonesToRemove; // 0x68
	TArray<FBoneReference> BonesToPrioritize; // 0x78
	float WeightOfPrioritization; // 0x88
	UAnimSequence* BakePose; // 0x90
	UAnimSequence* BakePoseOverride; // 0x98
	FString SourceImportFilename; // 0xa0
	ESkinCacheUsage SkinCacheUsage; // 0xb0
	char bHasBeenSimplified : 1; // 0xb1
	char bHasPerLODVertexColors : 1; // 0xb1
	char bAllowCPUAccess : 1; // 0xb1
	char bSupportUniformlyDistributedSampling : 1; // 0xb1
};

struct FPhysicsSphereData {
	float Radius; // 0x0
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FWaterBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FSeasonWeekQuestDefine {
	int32_t WeekIndex; // 0x0
	FDateTime StartTime; // 0x8
	FDateTime EndTime; // 0x10
	TArray<int32_t> WeekQuestsIndexArray; // 0x18
};

struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x0
	char bStatsEnabled : 1; // 0x0
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x0
	float CoplanarTolerance; // 0x4
	char bUseImmediateImport : 1; // 0x8
	char bImmediateProcessMappings : 1; // 0x8
	char bSortMappings : 1; // 0x8
	char bDumpBinaryFiles : 1; // 0x8
	char bDebugMaterials : 1; // 0x8
	char bPadMappings : 1; // 0x8
	char bDebugPaddings : 1; // 0x8
	char bOnlyCalcDebugTexelMappings : 1; // 0x8
	char bUseRandomColors : 1; // 0x9
	char bColorBordersGreen : 1; // 0x9
	char bColorByExecutionTime : 1; // 0x9
	float ExecutionTimeDivisor; // 0xc
};

struct FSplinePoint {
	float InputKey; // 0x0
	FVector position; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	FRotator Rotation; // 0x28
	FVector Scale; // 0x34
	ESplinePointType Type; // 0x40
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector position; // 0x20
	FQuat Rotation; // 0x30
};

struct FGameplayAttribute {
	FString AttributeName; // 0x0
	TFieldPath<FProperty> Attribute; // 0x10
	UStruct* AttributeOwner; // 0x30
};

struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	EScriptExecutionMode ExecutionMode; // 0x28
	uint32_t SpawnNumber; // 0x2c
	uint32_t MaxEventsPerFrame; // 0x30
	FGuid SourceEmitterID; // 0x34
	FName SourceEventName; // 0x44
	bool bRandomSpawnNumber; // 0x4c
	uint32_t MinSpawnNumber; // 0x50
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FGaussianSumBloomSettings {
	float Intensity; // 0x0
	float Threshold; // 0x4
	float SizeScale; // 0x8
	float Filter1Size; // 0xc
	float Filter2Size; // 0x10
	float Filter3Size; // 0x14
	float Filter4Size; // 0x18
	float Filter5Size; // 0x1c
	float Filter6Size; // 0x20
	FLinearColor Filter1Tint; // 0x24
	FLinearColor Filter2Tint; // 0x34
	FLinearColor Filter3Tint; // 0x44
	FLinearColor Filter4Tint; // 0x54
	FLinearColor Filter5Tint; // 0x64
	FLinearColor Filter6Tint; // 0x74
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FEquipPlatformCheckBox {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	char bShowDebug : 1; // 0x18
};

struct FKey {
	FName KeyName; // 0x0
};

struct FCropRipePhaseData {
	float NextTime; // 0x0
	float Percentage; // 0x4
	UStaticMesh* StageStaticMeshHasFruit; // 0x8
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FGameplayAbilitySpecDef {
	UGameplayAbility* Ability; // 0x0
	FScalableFloat LevelScalableFloat; // 0x8
	int32_t InputID; // 0x28
	EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x2c
	UObject* SourceObject; // 0x30
	FGameplayAbilitySpecHandle AssignedHandle; // 0x88
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FNotifyDisplayInfoRowBase : FTableRowBase {
	FNotifyDisplayInfo DisplayInfo; // 0x8
};

struct FMsgClientAppearanceData : FMessageBase {
	int32_t Result; // 0x8
	bool bInBattle; // 0xc
	bool bGuildOwner; // 0xd
	int32_t DistrictId; // 0x10
	int32_t ServerId; // 0x14
	FGuid RoleUid; // 0x18
	FGuid BattleGuid; // 0x28
	FString PlayerCharacterName; // 0x38
	FPreviewAppearanceData AppearanceData; // 0x48
	FChatServerInfo ChatAddressInfo; // 0x220
	int32_t ServerIDForLog; // 0x248
	int32_t ServerClusterID; // 0x24c
	int64_t NextCrossServerTime; // 0x250
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FItemOptionLogInfo {
	FString PlayerName; // 0x0
	FString GuildName; // 0x10
	int32_t ItemIndex; // 0x20
	int32_t ItemNum; // 0x24
	EItemOptionType ItemOptionType; // 0x28
	FDateTime UTCTime; // 0x30
	ECapitalType FullWalletCapitalType; // 0x38
	int32_t FullWalletCapitalNum; // 0x3c
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FVehiclePreviewWidgetOverride {
	char bEnableOverride : 1; // 0x0
	float OverrideCameraDistance; // 0x4
	FVector OverrideMeshLocation; // 0x8
	FVector OverrideMeshLocationOffset; // 0x14
	FRotator OverrideMeshRotation; // 0x20
	FVector OverrideCameraLocationOffset; // 0x2c
	FRotator OverrideCameraRotation; // 0x38
	UAnimMontage* OverrideDefaultAnim; // 0x48
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FNews_StructureSmart : FNewsBase {
	FVector StructureLocation; // 0x18
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FGuildStructureSetting {
	int32_t GuildLevel; // 0x0
	int32_t GuildStructureMaxNum; // 0x4
};

struct FFileManifestData {
	FString Filename; // 0x0
	FSHAHashData FileHash; // 0x10
	TArray<FChunkPartData> FileChunkParts; // 0x28
	TArray<FString> InstallTags; // 0x38
	bool bIsUnixExecutable; // 0x48
	FString SymlinkTarget; // 0x50
	bool bIsReadOnly; // 0x60
	bool bIsCompressed; // 0x61
};

struct FEditPivotTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	bool bEnableImpactDamage; // 0x8
	float ImpactDamage; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
	bool bCustomImpactResistance; // 0x14
	float ImpactResistance; // 0x18
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FBlockAnims {
	FBlockInfo LU; // 0x0
	FBlockInfo U; // 0x10
	FBlockInfo RU; // 0x20
	FBlockInfo L; // 0x30
	FBlockInfo C; // 0x40
	FBlockInfo R; // 0x50
	FBlockInfo LD; // 0x60
	FBlockInfo D; // 0x70
	FBlockInfo RD; // 0x80
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	FVector LayerLeft; // 0x3c
	FVector LayerRight; // 0x48
	FVector LayerFalloffLeft; // 0x54
	FVector LayerFalloffRight; // 0x60
	float StartEndFalloff; // 0x6c
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FPerkEatItemArray {
	TArray<USGItem*> PerkEatItemTemplate; // 0x0
};

struct FWeaponTraceInfo {
	FName Socket_Start; // 0x0
	FName Socket_End; // 0x8
	FVector BoxSize; // 0x10
	FVector RiderBoxSizeMulti; // 0x1c
	char IsOverrideDamage : 1; // 0x28
	float OverrideDamage; // 0x2c
	EDamageType OverrideAttackDamageType; // 0x30
	USGDamageType* OverrideDamageType; // 0x38
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FHelpKeyButton {
	TArray<FText> KeyText; // 0x0
	char bAddLeftMouse : 1; // 0x10
	char bAddMiddleMouse : 1; // 0x10
	char bAddRightMouse : 1; // 0x10
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0x8
	FEdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x70
	FText Category; // 0x80
	uint64_t PropertyFlags; // 0x98
	FName RepNotifyFunc; // 0xa0
	ELifetimeCondition ReplicationCondition; // 0xa8
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
	FString DefaultValue; // 0xc0
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FSpawnLocationInfo {
	ESpawnLocationType SpawnLocationType; // 0x0
	int32_t RespawnLocationId; // 0x4
	FString RespawnLocationName; // 0x8
	FString RespawnLocationNameLocalized; // 0x18
	FVector SpawnLocation; // 0x28
	float SpawnYaw; // 0x34
	float LeftCoolDownTime; // 0x38
	float RegionRadius; // 0x3c
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FSkillLocalData {
	float Value; // 0x0
	int32_t AddPoints; // 0x4
	int32_t AddPointsIncrease; // 0x8
	float Config; // 0xc
	int32_t Random; // 0x10
	int32_t Add; // 0x14
	double Exp; // 0x18
	double ExpIncrease; // 0x20
	double LevelUpExp; // 0x28
	int32_t Mastery; // 0x30
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x280
	FSlateBrush ActiveBrush; // 0x308
	FSlateBrush ColorOverlayTabBrush; // 0x390
	FSlateBrush ColorOverlayIconBrush; // 0x418
	FSlateBrush ForegroundBrush; // 0x4a0
	FSlateBrush HoveredBrush; // 0x528
	FSlateBrush ContentAreaBrush; // 0x5b0
	FSlateBrush TabWellBrush; // 0x638
	FMargin TabPadding; // 0x6c0
	float OverlapWidth; // 0x6d0
	FSlateColor FlashColor; // 0x6d8
};

struct FMovieSceneFloatChannel : FMovieSceneChannel {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x8
	ERichCurveExtrapolation PostInfinityExtrap; // 0x9
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneFloatValue> Values; // 0x20
	float DefaultValue; // 0x30
	bool bHasDefaultValue; // 0x34
	FMovieSceneKeyHandleMap KeyHandles; // 0x38
	FFrameRate TickResolution; // 0x98
};

struct FRenderableTriangleVertex {
	FVector position; // 0x0
	FVector2D UV; // 0xc
	FVector Normal; // 0x14
	FColor Color; // 0x20
};

struct FBattleGuildRelation1D {
	EBattleGroupType BattleGroupType; // 0x0
	FGuid GuildId; // 0x4
	FString GuildName; // 0x18
	TArray<char> BattleGuildRelationInfo1D; // 0x28
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x8
	int32_t NextState; // 0xc
	float CrossfadeDuration; // 0x10
	int32_t StartNotify; // 0x14
	int32_t EndNotify; // 0x18
	int32_t InterruptNotify; // 0x1c
	EAlphaBlendOption BlendMode; // 0x20
	UCurveFloat* CustomCurve; // 0x28
	UBlendProfile* BlendProfile; // 0x30
	ETransitionLogicType LogicType; // 0x38
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FWaterSplineCurveDefaults {
	float DefaultDepth; // 0x0
	float DefaultWidth; // 0x4
	float DefaultVelocity; // 0x8
	float DefaultAudioIntensity; // 0xc
};

struct FNews_HorseDead : FNewsBase {
	FString HorseName; // 0x18
	AActor* HorseTemplate; // 0x28
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FGlobalMapLevelVisibilityConfig {
	FString LevelName; // 0x0
	EValueConditionType ConditionType; // 0x10
	float MapCameraDistance; // 0x14
};

struct FRTX_PostProcess_Settings {
	FPostProcessSettings RTXPostProcessSettings_2_F5F7708F4E83FAC705A16388FF06FB09; // 0x0
	float PostProcessWeight_5_1188286A49AC49349A20F8AA6289C4A3; // 0x560
	float RTXPostProcessPriority_11_2871BEF94A8E61F2640AA297CA1481AE; // 0x564
	bool Unbound_7_7B0858BA4548AD147D2D9083D9CB5FF7; // 0x568
};

struct FSpawnParticle {
	UParticleSystem* ParticleSystem; // 0x0
	FName SoundID; // 0x8
	FVector LocationOffset; // 0x10
	FRotator RotationOffset; // 0x1c
	FVector Scale; // 0x28
	char bAttachToHitActor : 1; // 0x34
	EProjectileParticleHitType ProjectileParticleHitType; // 0x35
	char bFollowNormalParticleForwardUpChange : 1; // 0x36
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FBakLevelStates {
	FString BakLevelMapName; // 0x0
	bool bIsLevelLoaded; // 0x10
	bool bIsLevelVisible; // 0x11
};

struct FGuildEventModifyConflictEntry {
	EGuildEventModifyType GuildEventModifyType; // 0x0
	float ModifyConflictValue; // 0x4
	FText Title; // 0x8
	FText Text; // 0x20
	FText TooTipText; // 0x38
	TSoftObjectPtr<UTexture2D> Texture; // 0x50
	int32_t BGMIndex; // 0x78
	FName SoundID; // 0x7c
};

struct FARGeoAnchorUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	float Longitude; // 0x50
	float Latitude; // 0x54
	float AltitudeMeters; // 0x58
	EARAltitudeSource AltitudeSource; // 0x5c
	FString AnchorName; // 0x60
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x90
	FSlateBrush BackgroundImageFocused; // 0x118
	FSlateBrush BackgroundImageReadOnly; // 0x1a0
	FMargin Padding; // 0x228
	FSlateFontInfo Font; // 0x238
	FSlateColor ForegroundColor; // 0x290
	FSlateColor BackgroundColor; // 0x2b8
	FSlateColor ReadOnlyForegroundColor; // 0x2e0
	FMargin HScrollBarPadding; // 0x308
	FMargin VScrollBarPadding; // 0x318
	FScrollBarStyle ScrollBarStyle; // 0x328
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FDeathExploitConifg {
	int32_t MinLevel; // 0x0
	int32_t MaxLevel; // 0x4
	USGExploitComponent* DeathExploitComponentTemplate; // 0x8
};

struct FCustomCalculationBasedFloat {
	UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x0
	FScalableFloat Coefficient; // 0x8
	FScalableFloat PreMultiplyAdditiveValue; // 0x28
	FScalableFloat PostMultiplyAdditiveValue; // 0x48
	FCurveTableRowHandle FinalLookupCurve; // 0x68
};

struct FSGSoundLevelVolumeData {
	float FadeInVolume; // 0x0
	float FadeInDuration; // 0x4
	float FadeOutVolume; // 0x8
	float FadeOutDuration; // 0xc
	float VolumeMultiplier; // 0x10
	ESGSoundLevelVolumeState State; // 0x14
};

struct FHitResult {
	char bBlockingHit : 1; // 0x0
	char bStartPenetrating : 1; // 0x0
	int32_t FaceIndex; // 0x4
	float Time; // 0x8
	float Distance; // 0xc
	FVector_NetQuantize Location; // 0x10
	FVector_NetQuantize ImpactPoint; // 0x1c
	FVector_NetQuantizeNormal Normal; // 0x28
	FVector_NetQuantizeNormal ImpactNormal; // 0x34
	FVector_NetQuantize TraceStart; // 0x40
	FVector_NetQuantize TraceEnd; // 0x4c
	float PenetrationDepth; // 0x58
	int32_t Item; // 0x5c
	char ElementIndex; // 0x60
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x64
	TWeakObjectPtr<AActor> Actor; // 0x6c
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x74
	FName BoneName; // 0x7c
	FName MyBoneName; // 0x84
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	UCurveFloat* DrivingCurve; // 0xd8
	float Multiplier; // 0xe0
	float RangeMin; // 0xe4
	float RangeMax; // 0xe8
	float RemappedMin; // 0xec
	float RemappedMax; // 0xf0
	FName ParameterName; // 0xf4
	FBoneReference TargetBone; // 0xfc
	EDrivenDestinationMode DestinationMode; // 0x10c
	EDrivenBoneModificationMode ModificationMode; // 0x10d
	EComponentType SourceComponent; // 0x10e
	char bUseRange : 1; // 0x10f
	char bAffectTargetTranslationX : 1; // 0x10f
	char bAffectTargetTranslationY : 1; // 0x10f
	char bAffectTargetTranslationZ : 1; // 0x10f
	char bAffectTargetRotationX : 1; // 0x10f
	char bAffectTargetRotationY : 1; // 0x10f
	char bAffectTargetRotationZ : 1; // 0x10f
	char bAffectTargetScaleX : 1; // 0x10f
	char bAffectTargetScaleY : 1; // 0x110
	char bAffectTargetScaleZ : 1; // 0x110
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FNiagaraVMExecutableData {
	TArray<char> ByteCode; // 0x0
	TArray<char> OptimizedByteCode; // 0x10
	int32_t NumTempRegisters; // 0x20
	int32_t NumUserPtrs; // 0x24
	TArray<char> ScriptLiterals; // 0x28
	TArray<FNiagaraVariable> Attributes; // 0x38
	FNiagaraScriptDataUsageInfo DataUsage; // 0x48
	TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0x50
	TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0x60
	TArray<FNiagaraDataSetID> ReadDataSets; // 0x80
	TArray<FNiagaraDataSetProperties> WriteDataSets; // 0x90
	TArray<FNiagaraStatScope> StatScopes; // 0xa0
	TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0xb0
	ENiagaraScriptCompileStatus LastCompileStatus; // 0xc0
	TArray<FSimulationStageMetaData> SimulationStageMetaData; // 0xc8
	char bReadsSignificanceIndex : 1; // 0xd8
};

struct FChaosCollisionEventData {
	FVector Location; // 0x0
	FVector Normal; // 0xc
	FVector Velocity1; // 0x18
	FVector Velocity2; // 0x24
	float Mass1; // 0x30
	float Mass2; // 0x34
	FVector Impulse; // 0x38
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FAttachVolumeCylinder {
	FVector Axis; // 0x0
	float Height; // 0xc
	float Radius; // 0x10
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FBodyPartBox {
	FName BoneName; // 0x0
	FTransform LocalTransform; // 0x10
	FVector BoxExtent; // 0x40
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FBuoyancyData {
	TArray<FSphericalPontoon> Pontoons; // 0x0
	float BuoyancyCoefficient; // 0x10
	float BuoyancyDamp; // 0x14
	float BuoyancyDamp2; // 0x18
	float BuoyancyRampMinVelocity; // 0x1c
	float BuoyancyRampMaxVelocity; // 0x20
	float BuoyancyRampMax; // 0x24
	float MaxBuoyantForce; // 0x28
	float WaterShorePushFactor; // 0x2c
	float WaterVelocityStrength; // 0x30
	float MaxWaterForce; // 0x34
	float DragCoefficient; // 0x38
	float DragCoefficient2; // 0x3c
	float AngularDragCoefficient; // 0x40
	float MaxDragSpeed; // 0x44
	bool bApplyDragForcesInWater; // 0x48
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FAnimBoneData {
	int32_t BoneIndex; // 0x0
	FName BoneName; // 0x4
	TArray<FTransform> BoneTransform; // 0x10
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FAttributeDefaults {
	UAttributeSet* Attributes; // 0x0
	UDataTable* DefaultStartingTable; // 0x8
};

struct FHairGroupInfo {
	int32_t GroupID; // 0x0
	int32_t NumCurves; // 0x4
	int32_t NumGuides; // 0x8
	int32_t NumCurveVertices; // 0xc
	int32_t NumGuideVertices; // 0x10
};

struct FStructureMiniMapPOIStyle : FTableRowBase {
	TSoftObjectPtr<UTexture2D> InMiniMapTexture; // 0x8
	FLinearColor InMiniMapColor; // 0x30
	char bShowOutOfMiniMap : 1; // 0x40
	TSoftObjectPtr<UTexture2D> OutOfMiniMapTexture; // 0x48
	FLinearColor OutOfMiniMapColor; // 0x70
};

struct FCharacterMovingSpeedConfig {
	TMap<EInputDirection, float> Stand_WalkSpeed; // 0x0
	TMap<EInputDirection, float> Stand_JogSpeed; // 0x50
	TMap<EInputDirection, float> Stand_RunSpeed; // 0xa0
	TMap<EInputDirection, float> Crouch_WalkSpeed; // 0xf0
	TMap<EInputDirection, float> Crouch_JogSpeed; // 0x140
	TMap<EInputDirection, float> Crouch_RunSpeed; // 0x190
	TMap<EInputDirection, float> Swim_WalkSpeed; // 0x1e0
	TMap<EInputDirection, float> Swim_JogSpeed; // 0x230
	TMap<EInputDirection, float> Swim_RunSpeed; // 0x280
};

struct FMapConfig : FTableRowBase {
	FText MapName; // 0x8
};

struct FWaveConfigData {
	EWaveShape WaveShape; // 0x0
	FName SocketName; // 0x4
	float WaveStrength; // 0xc
	float WaveSizePercent; // 0x10
	FVector2D WaveExtent; // 0x14
};

struct FCharacterJumpZConfig {
	float UnarmJumpZ; // 0x0
	float MainHandWeaponJumpZ; // 0x4
};

struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50
	float Length; // 0x54
};

struct FAnimalFarmDropConifg {
	int32_t MinLevel; // 0x0
	int32_t MaxLevel; // 0x4
	int32_t DropWrapperId; // 0x8
	int32_t DeathDropWrapperId; // 0xc
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0xc
	FExpressionInput HeightInput; // 0x20
	float PreviewWeight; // 0x34
	FVector ConstLayerInput; // 0x38
	float ConstHeightInput; // 0x44
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FGmExecuteMsg {
	EGmMsgType MsgType; // 0x0
	FGuid GuildId; // 0x4
	bool IsExecuting; // 0x14
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FPoseDriverTarget {
	TArray<FPoseDriverTransform> BoneTransforms; // 0x0
	FRotator TargetRotation; // 0x10
	float TargetScale; // 0x1c
	ERBFDistanceMethod DistanceMethod; // 0x20
	ERBFFunctionType FunctionType; // 0x21
	bool bApplyCustomCurve; // 0x22
	FRichCurve CustomCurve; // 0x28
	FName DrivenName; // 0xa8
	bool bIsHidden; // 0xb8
};

struct FSGRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
	EDamageType Enum_DamageType; // 0x40
	float CollectionDamage; // 0x44
	float CollectionDamageMin; // 0x48
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x38
	float Y; // 0x3c
	float Z; // 0x40
	float PlayRate; // 0x44
	bool bLoop; // 0x48
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x49
	float StartPosition; // 0x4c
	UBlendSpaceBase* BlendSpace; // 0x50
	UBlendSpaceBase* PreviousBlendSpace; // 0xe0
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FOrientedBox {
	FVector Center; // 0x0
	FVector AxisX; // 0xc
	FVector AxisY; // 0x18
	FVector AxisZ; // 0x24
	float ExtentX; // 0x30
	float ExtentY; // 0x34
	float ExtentZ; // 0x38
};

struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	UAnimNotify* Notify; // 0x48
	UAnimNotifyState* NotifyStateClass; // 0x50
	float Duration; // 0x58
	FAnimLinkableElement EndLink; // 0x60
	bool bConvertedFromBranchingPoint; // 0x90
	EMontageNotifyTickType MontageTickType; // 0x91
	float NotifyTriggerChance; // 0x94
	ENotifyFilterType NotifyFilterType; // 0x98
	int32_t NotifyFilterLOD; // 0x9c
	bool bTriggerOnDedicatedServer; // 0xa0
	bool bTriggerOnFollower; // 0xa1
	int32_t TrackIndex; // 0xa4
};

struct FGuildStructureNum {
	int32_t GuildStructureUniqueId; // 0x0
	int32_t GuildStructureNum; // 0x4
	FDateTime CreateTime; // 0x8
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FPerkEntries {
	TArray<USGPerk*> PerkEntries; // 0x0
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FCurrentOreInfoData {
	ENaturalResType OreType; // 0x0
	float CurrentOreDensityValue; // 0x4
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FXianchengSignInfo {
	FInnerBattleInfo BattleInfo; // 0x0
	int64_t LeftSignTimeTicks; // 0x48
};

struct FDeathAnims {
	TArray<UAnimMontage*> DeathForward; // 0x0
	TArray<UAnimMontage*> DeathBackward; // 0x10
	TArray<UAnimMontage*> DeathLeft; // 0x20
	TArray<UAnimMontage*> DeathRight; // 0x30
};

struct FNews_AuctionShop : FNewsBase {
	FString State; // 0x18
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x0
	bool bBypass; // 0x4
	bool bMixInputChannelFormatToImpulseResponseFormat; // 0x5
	bool bMixReverbOutputToOutputChannelFormat; // 0x6
	float SurroundRearChannelBleedDb; // 0x8
	bool bInvertRearChannelBleedPhase; // 0xc
	bool bSurroundRearChannelFlip; // 0xd
	float SurroundRearChannelBleedAmount; // 0x10
	UAudioImpulseResponse* ImpulseResponse; // 0x18
	bool AllowHArdwareAcceleration; // 0x20
};

struct FHuangLiEffectNameDetail : FTableRowBase {
	EHuangLiEffectName EffectNameType; // 0x8
	FText EffectName; // 0x10
	FText EffectDesc; // 0x28
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FGuildStructureInfoData {
	TArray<FStructureBannerLocData> BannerDatas; // 0x0
	TArray<FOccupyStructureRPC> SeachStructureDatas; // 0x10
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FMeshReductionSettings {
	float PercentTriangles; // 0x0
	float PercentVertices; // 0x4
	float MaxDeviation; // 0x8
	float PixelError; // 0xc
	float WeldingThreshold; // 0x10
	float HardAngleThreshold; // 0x14
	int32_t BaseLODModel; // 0x18
	EMeshFeatureImportance SilhouetteImportance; // 0x1c
	EMeshFeatureImportance TextureImportance; // 0x1d
	EMeshFeatureImportance ShadingImportance; // 0x1e
	char bRecalculateNormals : 1; // 0x1f
	char bGenerateUniqueLightmapUVs : 1; // 0x1f
	char bKeepSymmetry : 1; // 0x1f
	char bVisibilityAided : 1; // 0x1f
	char bCullOccluded : 1; // 0x1f
	EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20
	EMeshFeatureImportance VisibilityAggressiveness; // 0x21
	EMeshFeatureImportance VertexColorImportance; // 0x22
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FHairGroupsInterpolation {
	FHairDecimationSettings DecimationSettings; // 0x0
	FHairInterpolationSettings InterpolationSettings; // 0x8
};

struct FSEInstance {
	int32_t InstanceIndex; // 0x0
	TWeakObjectPtr<AActor> SEActor; // 0x4
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FMsgRecord_StructureBannerEffectOther : FMsgRecordBase {
	FString OtherGuildName; // 0x10
	int32_t EffectPrestigeValue; // 0x20
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FGameplayTagReponsePair {
	FGameplayTag Tag; // 0x0
	UGameplayEffect* ResponseGameplayEffect; // 0x8
	TArray<UGameplayEffect*> ResponseGameplayEffects; // 0x10
	int32_t SoftCountCap; // 0x20
};

struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50
	ESphericalLimitType LimitType; // 0x54
};

struct FMsgRecordData {
	FDateTime RecordTime; // 0x0
	FString RecordContent; // 0x8
};

struct FNews_OccupyProtectSetting : FNewsBase {
	int32_t OccupyServerKey; // 0x18
};

struct FGeneralPeaceTameItem {
	int32_t ItemIndex; // 0x0
	int32_t ItemAmount; // 0x4
	float TotalAddTame; // 0x8
};

struct FXingXiuEffect : FTableRowBase {
	EXingXiuType XingXiuType; // 0x8
	FText XingXiuName; // 0x10
	FText XingXiuDesc; // 0x28
	TArray<FHuangLiEffect> HuangLiEffects; // 0x40
};

struct FAchievementDamageMultiplyData : FTableRowBase {
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x8
	FText DamageMultiplyName; // 0x30
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FAnimalDebugInfo {
	char bIsDrawDebugInfos : 1; // 0x0
	TWeakObjectPtr<ASG_AnimalsCharacter> AnimalCharacter; // 0x4
	FString LastBTTaskDebugName; // 0x10
	FString BTTaskDebugName; // 0x20
	FString BTTaskDebugInfos; // 0x30
	float LastUpdateTaskDebugInfoTime; // 0x40
	FString AIStatusDebugInfos; // 0x48
	FString AnimationDebugInfos; // 0x58
	FString GaitDebugInfos; // 0x68
	float LastUpdateDebugInfoTime; // 0x78
};

struct FMsgRecord_LeaveServer : FMsgRecordBase {
	FString CharacterName; // 0x10
};

struct FAIFleeConfigAnimal : FAIFleeConfigBase {
	float FleeMaxYaw; // 0x20
	float FleeWaitEnemyInterval; // 0x24
	float FleeWaitEnemyChance; // 0x28
	float FleeLimitFixedTime; // 0x2c
};

struct FMoveSeatAnimalPullerInfo {
	ABaseCharacter* PullerClass; // 0x0
	float BaseDisFromPuller; // 0x8
	float LinkedMoveAdjustDiffDist; // 0xc
	float LinkedMoveAdjustDiffDistSelf; // 0x10
	float LinkedSwimAdjustDiffDistSelf; // 0x14
	float WeightMultiplyForPuller; // 0x18
	float MaxWeightMultiplyForPuller; // 0x1c
	float RotationSpeedMultiply[0x8]; // 0x20
	float RotationInterpSpeedMultiply[0x8]; // 0x40
	float RotationLimitYawAngle; // 0x60
	float SpeedMulAdd; // 0x64
	float SwimSpeedMulAdd; // 0x68
};

struct FXianLingHuKouAwardInfo {
	FDateTime BeginDate; // 0x0
	FDateTime EndDate; // 0x8
	bool IsGained; // 0x10
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FGeneralShooterConfig {
	char bUseForceBodyBone : 1; // 0x0
	EBodyBone Enum_ForceBodyBone; // 0x1
	FVector2D RandomLookingBoneTime; // 0x4
	float KnockbackDistance; // 0xc
	float KnockbackCoolingTime; // 0x10
	float AttackPercentage; // 0x14
	FVector2D AttackHoldTimeRange; // 0x1c
	float AttackUpDistance; // 0x24
	float AttackKnockBackDistanceMultiForLying; // 0x28
	float MinArcDistance; // 0x2c
	float ScatteringPercentage; // 0x30
	float KeepInPlaceDistanceTolerance; // 0x34
	float EquipMeleeWeaponDistance; // 0x38
	FVector2D EquipMeleeWeaponCoolingTime; // 0x3c
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FEarsData {
	float EarAngle; // 0x0
	float EarAngleTop; // 0x4
	float EarContour; // 0x8
	float EarDepth; // 0xc
	float EarHeight; // 0x10
	float EarlobeDefine; // 0x14
	float EarScale; // 0x18
	float EarScaleHeight; // 0x1c
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FNotifyDisplayInfo {
	EMsgType PosType; // 0x0
	ENotifyTextColor ColorType; // 0x1
	float DisplayTime; // 0x4
	float DisplayScale; // 0x8
};

struct FPointData {
	TArray<UAnimMontage*> RelaxedMontages; // 0x0
	TArray<FBehaviorPointTimeWeight> TimeWeight; // 0x10
	FTransform Transform; // 0x20
	FString DisplayString; // 0x50
	FColor DisplayColor; // 0x60
	int32_t HasNPCIndex; // 0x64
	ANpcSpawnVolume* BindSpawnVolume; // 0x68
};

struct FStopAnims {
	UBlendSpace* Stop; // 0x0
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FHairGroupsPhysics {
	FHairSolverSettings SolverSettings; // 0x0
	FHairExternalForces ExternalForces; // 0x38
	FHairMaterialConstraints MaterialConstraints; // 0x58
	FHairStrandsParameters StrandsParameters; // 0x230
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x0
	float ValidEngineTime; // 0x4
	float EngineTimeOffset; // 0x8
	double EngineTimeClockOffset; // 0x10
	bool bGenerateSubFrame; // 0x18
	FFrameRate DetectedFrameRate; // 0x1c
	bool bUseTimecodeSmoothLatest; // 0x24
	FFrameRate SourceTimecodeFrameRate; // 0x28
	bool bValidTimecodeFrameEnabled; // 0x30
	int32_t ValidTimecodeFrame; // 0x34
	float TimecodeFrameOffset; // 0x38
	double TimecodeClockOffset; // 0x40
	int32_t LatestOffset; // 0x48
	int32_t MaxNumberOfFrameToBuffered; // 0x4c
	bool bKeepAtLeastOneFrame; // 0x50
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FWithFoliageInfo {
	UFoliageType* FoliageWith; // 0x0
	float Probability; // 0x8
	FName SkoctToPlace; // 0xc
	FVector PlaceOffset; // 0x14
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FAnimalRealNameData : FTableRowBase {
	EAnimalQualityType QualityType; // 0x8
	TMap<EAttributeCorrectionType, int32_t> AttributeCorrectionCount; // 0x10
	EAnimalFurColorType FurColorType; // 0x60
	FText FurColorString; // 0x68
	int32_t WildLevel; // 0x80
	int32_t TameLevel; // 0x84
	FText PreString; // 0x88
	float ThinMorph; // 0xa0
	float StrongMorph; // 0xa4
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FFishBaitRowBase : FTableRowBase {
	USGItem* FishBait; // 0x8
	TArray<FFishBaitData> FishBaitData; // 0x10
};

struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; // 0x0
	float HorizontalResistance; // 0x4
	float BendResistance; // 0x8
	float ShearResistance; // 0xc
	float Friction; // 0x10
	float Damping; // 0x14
	float TetherStiffness; // 0x18
	float TetherLimit; // 0x1c
	float Drag; // 0x20
	float StiffnessFrequency; // 0x24
	float GravityScale; // 0x28
	float MassScale; // 0x2c
	float InertiaBlend; // 0x30
	float SelfCollisionThickness; // 0x34
	float SelfCollisionSquashScale; // 0x38
	float SelfCollisionStiffness; // 0x3c
	float SolverFrequency; // 0x40
	float FiberCompression; // 0x44
	float FiberExpansion; // 0x48
	float FiberResistance; // 0x4c
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FSGAnimNode_SpineSolver : FAnimNode_Base {
	FAnimNodeData_MultiInput AnimNode_InputData; // 0x10
	float Precision; // 0x80
	float MaximumPitch; // 0x84
	float MinimumPitch; // 0x88
	float MaximumRoll; // 0x8c
	float MinimumRoll; // 0x90
	int32_t MaxIterations; // 0x94
	FComponentSpacePoseLink ComponentPose; // 0x98
	float ActualAlpha; // 0xac
	EAnimAlphaInputType AlphaInputType; // 0xb0
	bool bAlphaBoolEnabled; // 0xb1
	float Alpha; // 0xb4
	FInputScaleBias AlphaScaleBias; // 0xb8
	FInputAlphaBoolBlend AlphaBoolBlend; // 0xc0
	FName AlphaCurveName; // 0x108
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x110
	float ShiftSpeed; // 0x140
	ETraceTypeQuery TraceChannel; // 0x144
	EIKTraceType TraceType; // 0x145
	float TraceRadius; // 0x148
	int32_t LODThreshold; // 0x14c
	float DipMultiplier; // 0x150
	bool RotateAroundTranslate; // 0x154
	bool IgnoreLerping; // 0x155
	float LineTraceDownwardHeight; // 0x168
	float line_trace_upper_height; // 0x16c
	float Slanted_Height_Up_Offset; // 0x170
	float Slanted_Height_Down_Offset; // 0x178
	bool reverse_fabrik; // 0x17c
	bool Calculation_To_RefPose; // 0x184
	float Chest_Slanted_Height_Up_Offset; // 0x188
	float Chest_Slanted_Height_Down_Offset; // 0x18c
	float Chest_Base_Offset; // 0x190
	float Pelvis_Base_Offset; // 0x194
	float virtual_leg_width; // 0x198
	float Maximum_Dip_Height; // 0x19c
	float Maximum_Dip_Height_Chest; // 0x1a0
	float rotation_power_between; // 0x1b0
	bool Use_Automatic_Fabrik_Selection; // 0x1b4
	float Location_Lerp_Speed; // 0x1b8
	float Rotation_Lerp_Speed; // 0x1bc
	float Chest_Influence_Alpha; // 0x1c0
	float Pelvis_ForwardRotation_Intensity; // 0x1c4
	float Body_Rotation_Intensity; // 0x1c8
	float Chest_ForwardRotation_Intensity; // 0x1cc
	float Chest_SidewardRotation_Intensity; // 0x1d0
	bool Enable_Solver; // 0x210
	bool Use_Fake_Chest_Rotations; // 0x211
	bool Use_Fake_Pelvis_Rotations; // 0x212
	bool Force_Activation; // 0x218
	bool accurate_feet_placement; // 0x219
	bool use_crosshair_trace_also_for_fail_distance; // 0x21a
	bool Only_Root_Solve; // 0x21b
	FVector Overall_PostSolved_Offset; // 0x224
	FVector character_direction_vector_CS; // 0x230
	FVector Forward_Direction_Vector; // 0x23c
	bool flip_forward_and_right; // 0x248
	ERefPosePluginEnum SolverReferencePose; // 0x258
	bool Spine_Feet_Connect; // 0x259
	float Snake_Joint_Speed; // 0x544
	bool is_snake; // 0x548
	float Maximum_Feet_Distance; // 0x54c
	float Minimum_Feet_Distance; // 0x550
	bool DisplayLineTrace; // 0x554
};

struct FRegionRespawnPointConfig : FTableRowBase {
	FText RegionRespawnPointName; // 0x8
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x34
	FVector TargetLocation; // 0x44
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EScaleChainInitialLength ChainInitialLength; // 0x60
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FTrafficGoodsSellerInfo {
	int32_t CapitalAmount; // 0x0
	TMap<int32_t, FGoodsSaveInfo> SellGoodsIndexToSaveMap; // 0x8
	TMap<int32_t, FGoodsSaveInfo> RecycleGoodsIndexToPriceMap; // 0x58
};

struct FBindPointInfo {
	FName BindPointDes; // 0x0
	FVector BindPointLocOffset; // 0x8
	FRotator BindPointRotOffset; // 0x14
	int32_t CanBindType; // 0x20
	int32_t CanBindTypeGroup; // 0x24
	int32_t ExcludeBindType; // 0x28
	char bBindPointTo : 1; // 0x2c
	char bBindPointFrom : 1; // 0x2c
	char bBestBindPoint : 1; // 0x2c
	char bChangeFoundation : 1; // 0x2c
	char bIgnoreCheckObject : 1; // 0x2c
	char bIgnoreCreateOnGroundWhenBinded : 1; // 0x2c
};

struct FGeneralInfo {
	TWeakObjectPtr<ASGGeneralCharacter> GeneralWeakPtr; // 0x0
	FVector Location; // 0x8
};

struct FEnvironmentEatItemArray {
	TArray<USGItem*> EnvironmentItemTemplate; // 0x0
};

struct FClientDecalPool {
	TWeakObjectPtr<UDecalComponent> DecalComponent; // 0x0
	int32_t HitResultItem; // 0x8
};

struct FHuangLiEffect : FTableRowBase {
	EHuangLiEffectType ExtraEffectType; // 0x8
	FText EffectDesc; // 0x10
	float ExtraMultiplier; // 0x28
	EHuangLiCheckType CkeckType; // 0x2c
	EHuangLiUnlockType UnlockType; // 0x2d
	int32_t UnlockValue; // 0x30
};

struct FMsgRecord_StructureBannerCreate : FMsgRecordBase {
	FString GuildName; // 0x10
	FString CharacterName; // 0x20
};

struct FEyesData {
	float EyesColor; // 0x0
	float EyeScale; // 0x4
	float EyeAngle; // 0x8
	float EyeballScale; // 0xc
	float EyeDepth; // 0x10
	float EyeHeight; // 0x14
	float EyeWidth; // 0x18
};

struct FCraftResourceRequirement {
	int32_t BaseResourceRequirement; // 0x0
	TArray<USGItem*> ResourceItemType; // 0x8
	char bConsumesDurable : 1; // 0x18
};

struct FModifierSpec {
	float EvaluatedMagnitude; // 0x0
};

struct FPredictProjectilePathParams {
	FVector StartLocation; // 0x0
	FVector LaunchVelocity; // 0xc
	bool bTraceWithCollision; // 0x18
	float ProjectileRadius; // 0x1c
	float MaxSimTime; // 0x20
	bool bTraceWithChannel; // 0x24
	ECollisionChannel TraceChannel; // 0x25
	TArray<EObjectTypeQuery> ObjectTypes; // 0x28
	TArray<AActor*> ActorsToIgnore; // 0x38
	float SimFrequency; // 0x48
	float OverrideGravityZ; // 0x4c
	EDrawDebugTrace DrawDebugType; // 0x50
	float DrawDebugTime; // 0x54
	bool bTraceComplex; // 0x58
};

struct FBehaviorPointTimeWeight {
	FString StartTime; // 0x0
	FString EndTime; // 0x10
	float Weight; // 0x20
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FPlanarLimitData : FCollisionLimitDataBase {
	FPlane Plane; // 0x50
};

struct FCustomMontageData {
	UAnimMontage* PlayMontage; // 0x0
	float MontagePlayRate; // 0x8
	float MontageStartPosition; // 0xc
	float MontagePreventPosition; // 0x10
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FDebugTextInfo {
	AActor* SrcActor; // 0x0
	FVector SrcActorOffset; // 0x8
	FVector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	FColor TextColor; // 0x38
	char bAbsoluteLocation : 1; // 0x3c
	char bKeepAttachedToActor : 1; // 0x3c
	char bDrawShadow : 1; // 0x3c
	FVector OrigActorLocation; // 0x40
	UFont* Font; // 0x50
	float FontScale; // 0x58
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FBuffSimpleInfo {
	USGBuff* BuffClass; // 0x0
	FVector position; // 0x8
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FMsgClientDeleteRoleResult : FMessageBase {
	int32_t Result; // 0x8
	int32_t DeleteIntervalTime; // 0xc
};

struct FMsgClientVersion : FMessageBase {
	FString Welcome; // 0x8
	uint32_t Version; // 0x18
};

struct FSkeletalMeshClothBuildParams {
	TWeakObjectPtr<UClothingAssetBase> TargetAsset; // 0x0
	int32_t TargetLod; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int32_t LODIndex; // 0x20
	int32_t SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FBigMapGuanAiInfo : FTableRowBase {
	FText GuanAiName; // 0x8
	TArray<int32_t> Citys; // 0x20
	int32_t OpenDayOfWeek; // 0x30
	int32_t OpenHour; // 0x34
	int32_t OpenCoolDays; // 0x38
	int32_t SignUpTime; // 0x3c
	int32_t MaxProgress; // 0x40
};

struct FSolverIterations {
	float FixedTimeStep; // 0x0
	int32_t SolverIterations; // 0x4
	int32_t JointIterations; // 0x8
	int32_t CollisionIterations; // 0xc
	int32_t SolverPushOutIterations; // 0x10
	int32_t JointPushOutIterations; // 0x14
	int32_t CollisionPushOutIterations; // 0x18
};

struct FBlockHitAnims {
	UAnimMontage* LU; // 0x0
	UAnimMontage* U; // 0x8
	UAnimMontage* RU; // 0x10
	UAnimMontage* L; // 0x18
	UAnimMontage* C; // 0x20
	UAnimMontage* R; // 0x28
	UAnimMontage* LD; // 0x30
	UAnimMontage* D; // 0x38
	UAnimMontage* RD; // 0x40
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FApplyingJoinAllianceInfo {
	FGuid ApplyUid; // 0x0
	FString ApplyName; // 0x10
	int32_t ApplyLevel; // 0x20
	FDateTime ApplyTime; // 0x28
	char bGuild : 1; // 0x30
	FString VerifyInfo; // 0x38
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FSGGeneralPerkNetInfo {
	TArray<int32_t> CanLearnPerks; // 0x0
	TArray<int32_t> MCanLearnPerks; // 0x10
	TArray<int32_t> HCanLearnPerks; // 0x20
	TArray<int32_t> CanCertainLearnPerks; // 0x30
	TArray<int32_t> AngryPerks; // 0x40
	TArray<int32_t> WeakPerks; // 0x50
};

struct FAnimNodeData_MultiInput {
	FName Start_Spine; // 0x0
	FName pelvis; // 0x8
	TArray<FAnimNodeData_FootData> FeetBones; // 0x10
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FDatasmithMeshBuildSettingsTemplate {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x0
	char bGenerateLightmapUVs : 1; // 0x0
	int32_t MinLightmapResolution; // 0x4
	int32_t SrcLightmapIndex; // 0x8
	int32_t DstLightmapIndex; // 0xc
};

struct FTrafficGoodsTable : FTableRowBase {
	int32_t GoodsIndex; // 0x8
	FText GoodsName; // 0x10
	TSoftObjectPtr<UTexture2D> GoodsIcon; // 0x28
	int32_t SellerLVLimit; // 0x50
	TrafficGoodsType GoodsType; // 0x54
	EItemQuality QualityLevel; // 0x55
	float Weight; // 0x58
	int32_t OnShelfRandomWeight; // 0x5c
	float SellExp; // 0x60
	float RecycleExp; // 0x64
	float RenownReward; // 0x68
	int32_t BasePrice; // 0x6c
	float BasePriceRandomRatio; // 0x70
	int32_t ShelfMinNum; // 0x74
	int32_t ShelfMaxNum; // 0x78
	float RecycleMinPrice; // 0x7c
	float RecycleMaxPrice; // 0x80
	float PriceFluctuationPerDeal; // 0x84
	FText GoodsDescription; // 0x88
	TMap<GoodsSellerType, FVector2D> RecycleBasePriceRatioMap; // 0xa0
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FMiniMapMarkDataArray {
	TArray<FMiniMapMarkData> MiniMapMarks; // 0x0
};

struct FPlayerQuestData {
	TArray<FQuestProgress> OnGoingQuests; // 0x0
	TArray<FQuestProgress> HiddenQuests; // 0x10
	TArray<int32_t> CompleteQuestIDs; // 0x20
	TArray<int32_t> FinishedQuestIDs; // 0x30
	TArray<int32_t> InvalidQuestIDs; // 0x40
	TArray<int32_t> FinishedDailyQuestIDs; // 0x50
	TArray<FFinishedWeeklyQuest> FinishedWeeklyQuests; // 0x60
	TArray<int32_t> ShowTraceQuests; // 0x70
	int32_t QuestRewardPerkPoint; // 0x80
	int32_t QuestRewardSkillPoint; // 0x84
	FObjectForQuestsArray ObjectForQuestsArray[0x41]; // 0x88
	char DailyQuestNums; // 0x498
	int32_t TotalGuildQuestNums; // 0x49c
	int32_t DailyQuestDay; // 0x4a0
	int32_t WeeklyQuestWeek; // 0x4a4
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FJueWeiPropShow {
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x0
	FText PropText; // 0x28
	FLinearColor PropColor; // 0x40
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x0
	int32_t PktLossMaxSize; // 0x4
	int32_t PktLossMinSize; // 0x8
	int32_t PktOrder; // 0xc
	int32_t PktDup; // 0x10
	int32_t PktLag; // 0x14
	int32_t PktLagVariance; // 0x18
	int32_t PktLagMin; // 0x1c
	int32_t PktLagMax; // 0x20
	int32_t PktIncomingLagMin; // 0x24
	int32_t PktIncomingLagMax; // 0x28
	int32_t PktIncomingLoss; // 0x2c
	int32_t PktJitter; // 0x30
};

struct FMsgRecord_TameSuccess : FMsgRecordBase {
	ABaseCharacter* TameCharacterTemplate; // 0x10
	int32_t RealNameIndex; // 0x18
};

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	char bLooping : 1; // 0x1c
	char bReverse : 1; // 0x1c
};

struct FVehiclePerkRowBase : FTableRowBase {
	int32_t VehiclePerkID; // 0x8
	USGVehiclePerk* PerkClass; // 0x10
};

struct FTrapTypeEntry {
	AActor* TrapTypeClass; // 0x0
	float TrapTypeDamagePercent; // 0x8
};

struct FModifyTextInitParam {
	FText TitleText; // 0x0
	char bShowTitleText : 1; // 0x18
	FText HintText; // 0x20
	char bShowHintText : 1; // 0x38
	FText ContentText; // 0x40
	FText AlertText; // 0x58
	int32_t ContentMaxLen; // 0x70
	char bForceNeedCheck : 1; // 0x74
	UUI_ModifyText* OverrideModifyUIClass; // 0x78
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
	ERichCurveInterpMode InterpMode; // 0xc
	ERichCurveTangentMode TangentMode; // 0xd
	bool bRecordTransforms; // 0xf
	bool bRecordCurves; // 0x10
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FHairGroupDesc {
	int32_t HairCount; // 0x0
	int32_t GuideCount; // 0x4
	float HairLength; // 0x8
	float HairWidth; // 0xc
	bool HairWidth_Override; // 0x10
	float HairRootScale; // 0x14
	bool HairRootScale_Override; // 0x18
	float HairTipScale; // 0x1c
	bool HairTipScale_Override; // 0x20
	float HairClipLength; // 0x24
	bool HairClipLength_Override; // 0x28
	float HairShadowDensity; // 0x2c
	bool HairShadowDensity_Override; // 0x30
	float HairRaytracingRadiusScale; // 0x34
	bool HairRaytracingRadiusScale_Override; // 0x38
	bool bUseHairRaytracingGeometry; // 0x39
	bool bUseHairRaytracingGeometry_Override; // 0x3a
	float LODBias; // 0x3c
	bool bUseStableRasterization; // 0x40
	bool bUseStableRasterization_Override; // 0x41
	bool bScatterSceneLighting; // 0x42
	bool bScatterSceneLighting_Override; // 0x43
	bool bSupportVoxelization; // 0x44
	bool bSupportVoxelization_Override; // 0x45
	int32_t LODForcedIndex; // 0x48
};

struct FAllianceDetailData {
	FGuid AllianceUid; // 0x0
	FString InnerBillboard; // 0x10
	TArray<FApplyingJoinAllianceInfo> ApplyJoinInfos; // 0x20
	FString AllianceChannel; // 0x30
	FDateTime LastChangeNameTime; // 0x40
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FImageFilterMaterialParam {
	EImageFilterParamType ParamType; // 0x0
	FName MaterialParamName; // 0x4
	float FloatParam; // 0xc
	UTexture2D* TextureParam; // 0x10
};

struct FCharacterSPConfig {
	float SPState_CostValue; // 0x0
	float SPEvent_CostValue; // 0x4
	FBattleSPConfig SPState_IdleConfig; // 0x8
	FBattleSPConfig SPState_WalkConfig; // 0x30
	FBattleSPConfig SPState_JogConfig; // 0x58
	FBattleSPConfig SPState_RunConfig; // 0x80
	FBattleSPConfig SPState_SwimConfig; // 0xa8
	float SPEvent_JumpCostMul; // 0xd0
	float SPState_JumpRecoverMul; // 0xd4
};

struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x0
	char bShadowIndirectOnly : 1; // 0x0
	char bUseEmissiveForStaticLighting : 1; // 0x0
	char bUseVertexNormalForHemisphereGather : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float FullyOccludedSamplesFraction; // 0x14
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FExploitCompComfigs : FTableRowBase {
	FSoftClassPath ExploitCompClass; // 0x8
	float RecoverTimeMultilier; // 0x20
	FText ExploitCompText; // 0x28
	FString ExploitCompStr; // 0x40
};

struct FExtraAddSkill {
	ESkillType SkillType; // 0x0
	float ExtraSkillExpMulti; // 0x4
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FMsgServerSystem : FMessageBase {
	FString StrSystem; // 0x8
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FSolverCollisionData {
	FVector Location; // 0x0
	FVector AccumulatedImpulse; // 0xc
	FVector Normal; // 0x18
	FVector Velocity1; // 0x24
	FVector Velocity2; // 0x30
	FVector AngularVelocity1; // 0x3c
	FVector AngularVelocity2; // 0x48
	float Mass1; // 0x54
	float Mass2; // 0x58
	int32_t ParticleIndex; // 0x5c
	int32_t LevelsetIndex; // 0x60
	int32_t ParticleIndexMesh; // 0x64
	int32_t LevelsetIndexMesh; // 0x68
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FSGTitleData : FTableRowBase {
	FText Name; // 0x8
	FString Description; // 0x20
	TSoftObjectPtr<UTexture2D> BackgroundTexture; // 0x30
	FSlateColor TitleColor; // 0x58
	FSlateFontInfo FontInfo; // 0x80
	FVector2D ShadowOffset; // 0xd8
	FLinearColor ShadowColor; // 0xe0
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FWeatherLightningEvent {
	ALightningEffect* OwnEffect; // 0x20
};

struct FRenderableTriangle {
	UMaterialInterface* Material; // 0x0
	FRenderableTriangleVertex Vertex0; // 0x8
	FRenderableTriangleVertex Vertex1; // 0x2c
	FRenderableTriangleVertex Vertex2; // 0x50
};

struct FWaterBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FVariationChanceConfig {
	float VariationChance; // 0x0
	float HarmfulVariationChance; // 0x4
	float UsefulVariationChance; // 0x8
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FRoadPathConfig {
	ERoadPathType Enum_RoadPathType; // 0x0
	float WaitTime; // 0x4
	FName RoadPathName; // 0x8
	ASG_RoadPath* RoadPathActor; // 0x10
	TArray<FVector> RoadPathPoints; // 0x18
	FString DisplayString; // 0x28
	FColor DisplayColor; // 0x38
	TArray<float> RoadPathWaitTimes; // 0x40
};

struct FChargeDamageTypeData {
	float CharageImpulse; // 0x0
	float FalldownDuration; // 0x4
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FMsgServerLogin : FMessageBase {
	uint32_t MsgVersion; // 0x8
	FString AccountID; // 0x10
	FString OnlinePlatformName; // 0x20
	FString AuthoToken; // 0x30
	FString LoginOptions; // 0x40
	int32_t MajorVersion; // 0x50
	int32_t MinorVersion; // 0x54
	FString GameInfo; // 0x58
	FString DeviceID; // 0x68
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FCustomSoundSettingArray {
	TArray<FCustomSoundSetting> SoundSettingArray; // 0x0
};

struct FRadarChartValueLayer {
	FRadarChartColorOverwrite ColorOverwrite; // 0x0
	TArray<float> Values; // 0x18
	char bDrawOutline : 1; // 0x28
	float OutlineThickness; // 0x2c
	FLinearColor OutlineColor; // 0x30
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FPointConfig {
	EPointType PointType; // 0x0
	FString Description; // 0x8
	TArray<FPointData> PointData; // 0x18
};

struct FGuildStoreItemPriceData {
	FGuid UniqueId; // 0x0
	int32_t Price; // 0x10
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xc8
	float AngularDampingOverride; // 0xcc
	FBoneReference RelativeSpaceBone; // 0x130
	FBoneReference BoundBone; // 0x140
	FBoneReference ChainEnd; // 0x150
	FVector BoxExtents; // 0x160
	FVector LocalJointOffset; // 0x16c
	float GravityScale; // 0x178
	FVector GravityOverride; // 0x17c
	float LinearSpringConstant; // 0x188
	float AngularSpringConstant; // 0x18c
	float WindScale; // 0x190
	FVector ComponentLinearAccScale; // 0x194
	FVector ComponentLinearVelScale; // 0x1a0
	FVector ComponentAppliedLinearAccClamp; // 0x1ac
	float AngularBiasOverride; // 0x1b8
	int32_t NumSolverIterationsPreUpdate; // 0x1bc
	int32_t NumSolverIterationsPostUpdate; // 0x1c0
	FAnimPhysConstraintSetup ConstraintSetup; // 0x1c4
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x210
	float SphereCollisionRadius; // 0x220
	FVector ExternalForce; // 0x224
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x230
	AnimPhysCollisionType CollisionType; // 0x240
	AnimPhysSimSpaceType SimulationSpace; // 0x241
	char bUseSphericalLimits : 1; // 0x244
	char bUsePlanarLimit : 1; // 0x244
	char bDoUpdate : 1; // 0x244
	char bDoEval : 1; // 0x244
	char bOverrideLinearDamping : 1; // 0x244
	char bOverrideAngularBias : 1; // 0x244
	char bOverrideAngularDamping : 1; // 0x244
	char bEnableWind : 1; // 0x244
	char bUseGravityOverride : 1; // 0x245
	char bLinearSpring : 1; // 0x245
	char bAngularSpring : 1; // 0x245
	char bChain : 1; // 0x245
	FRotationRetargetingInfo RetargetingSettings; // 0x250
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FImportanceTexture {
	FIntPoint Size; // 0x0
	int32_t NumMips; // 0x8
	TArray<float> MarginalCDF; // 0x10
	TArray<float> ConditionalCDF; // 0x20
	TArray<FColor> TextureData; // 0x30
	TWeakObjectPtr<UTexture2D> Texture; // 0x40
	EImportanceWeight Weighting; // 0x48
};

struct FMiniMapData {
	FString MapName; // 0x0
	FVector Location; // 0x10
	float Zoom; // 0x1c
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FDestructibleParametersFlag {
	char bAccumulateDamage : 1; // 0x0
	char bAssetDefinedSupport : 1; // 0x0
	char bWorldSupport : 1; // 0x0
	char bDebrisTimeout : 1; // 0x0
	char bDebrisMaxSeparation : 1; // 0x0
	char bCrumbleSmallestChunks : 1; // 0x0
	char bAccurateRaycasts : 1; // 0x0
	char bUseValidBounds : 1; // 0x0
	char bFormExtendedStructures : 1; // 0x1
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FGameplayEffectContext {
	TWeakObjectPtr<AActor> Instigator; // 0x8
	TWeakObjectPtr<AActor> EffectCauser; // 0x10
	TWeakObjectPtr<UGameplayAbility> AbilityCDO; // 0x18
	TWeakObjectPtr<UGameplayAbility> AbilityInstanceNotReplicated; // 0x20
	int32_t AbilityLevel; // 0x28
	TWeakObjectPtr<UObject> SourceObject; // 0x2c
	TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x34
	TArray<TWeakObjectPtr<AActor>> Actors; // 0x40
	FVector WorldOrigin; // 0x60
	char bHasWorldOrigin : 1; // 0x6c
	char bReplicateSourceObject : 1; // 0x6c
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x0
	bool bEnableOverride; // 0x1
	bool bForceFullyRough; // 0x2
	bool bForceNonMetal; // 0x3
	bool bForceDisableLMDirectionality; // 0x4
	bool bForceLQReflections; // 0x5
	bool bForceDisablePreintegratedGF; // 0x6
	bool bDisableMaterialNormalCalculation; // 0x7
	EMobileShadowQuality MobileShadowQuality; // 0x8
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FHairGeometrySettings {
	float HairWidth; // 0x0
	float HairRootScale; // 0x4
	float HairTipScale; // 0x8
	float HairClipScale; // 0xc
};

struct FAnimalFurRelationConfig {
	EAnimalFurColorType Enum_FurColorType; // 0x0
	TMap<EAnimalFurColorType, EAnimalFurColorType> TMap_AnimalFurRelationConfig; // 0x8
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FSkelMeshMergeSectionMapping_BP {
	TArray<int32_t> SectionIDs; // 0x0
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FBoughtGuildItemData {
	int32_t LastBoughtDay; // 0x0
	int32_t SohpItemIndex; // 0x4
	int32_t BoughtGroupNum; // 0x8
};

struct FScalabilitySettingsValue {
	EScalabilityDetailValueType ValueType; // 0x0
	FVector2D ValueRange; // 0x4
	TArray<int32_t> Options; // 0x10
	int32_t MinimumIntegralDigits; // 0x20
	int32_t MaximumIntegralDigits; // 0x24
	int32_t MinimumFractionalDigits; // 0x28
	int32_t MaximumFractionalDigits; // 0x2c
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FCharacterAppearanceTemplate : FTableRowBase {
	FString Description; // 0x8
	ECharacterSex Sex; // 0x18
	FAppearanceData AppearanceData; // 0x20
};

struct FCameraSettings_Stance {
	FCameraSettings_Gait Stand; // 0x0
	FCameraSettings_Gait Crouch; // 0x3c
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0xc8
	float StartStretchRatio; // 0xd8
	float MaxStretchScale; // 0xdc
	FVector EffectorLocation; // 0xe0
	FBoneSocketTarget EffectorTarget; // 0xf0
	FVector JointTargetLocation; // 0x150
	FBoneSocketTarget JointTarget; // 0x160
	FAxis TwistAxis; // 0x1c0
	EBoneControlSpace EffectorLocationSpace; // 0x1d0
	EBoneControlSpace JointTargetLocationSpace; // 0x1d1
	char bAllowStretching : 1; // 0x1d2
	char bTakeRotationFromEffectorSpace : 1; // 0x1d2
	char bMaintainEffectorRelRot : 1; // 0x1d2
	char bAllowTwist : 1; // 0x1d2
};

struct FCollisionResponseContainer {
	ECollisionResponse WorldStatic; // 0x0
	ECollisionResponse WorldDynamic; // 0x1
	ECollisionResponse Pawn; // 0x2
	ECollisionResponse Visibility; // 0x3
	ECollisionResponse Camera; // 0x4
	ECollisionResponse PhysicsBody; // 0x5
	ECollisionResponse Vehicle; // 0x6
	ECollisionResponse Destructible; // 0x7
	ECollisionResponse EngineTraceChannel1; // 0x8
	ECollisionResponse EngineTraceChannel2; // 0x9
	ECollisionResponse EngineTraceChannel3; // 0xa
	ECollisionResponse EngineTraceChannel4; // 0xb
	ECollisionResponse EngineTraceChannel5; // 0xc
	ECollisionResponse EngineTraceChannel6; // 0xd
	ECollisionResponse GameTraceChannel1; // 0xe
	ECollisionResponse GameTraceChannel2; // 0xf
	ECollisionResponse GameTraceChannel3; // 0x10
	ECollisionResponse GameTraceChannel4; // 0x11
	ECollisionResponse GameTraceChannel5; // 0x12
	ECollisionResponse GameTraceChannel6; // 0x13
	ECollisionResponse GameTraceChannel7; // 0x14
	ECollisionResponse GameTraceChannel8; // 0x15
	ECollisionResponse GameTraceChannel9; // 0x16
	ECollisionResponse GameTraceChannel10; // 0x17
	ECollisionResponse GameTraceChannel11; // 0x18
	ECollisionResponse GameTraceChannel12; // 0x19
	ECollisionResponse GameTraceChannel13; // 0x1a
	ECollisionResponse GameTraceChannel14; // 0x1b
	ECollisionResponse GameTraceChannel15; // 0x1c
	ECollisionResponse GameTraceChannel16; // 0x1d
	ECollisionResponse GameTraceChannel17; // 0x1e
	ECollisionResponse GameTraceChannel18; // 0x1f
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FItemAuctionSellRowBase : FTableRowBase {
	USGItem* ItemClass; // 0x8
	int32_t ItemIndex; // 0x10
	bool CanSell; // 0x14
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FGuildEventSpawnData {
	TArray<FGuildEventSpawnEntry> SpawnEntries; // 0x0
};

struct FBattleOpenTimeRuleInfo {
	ESGDayOfWeek DayofWeek; // 0x0
	int32_t Hour; // 0x4
	int32_t JinXianTime; // 0x8
	int32_t BeiZhanTime; // 0xc
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x0
	char bOverride_BlendMode : 1; // 0x0
	char bOverride_ShadingModel : 1; // 0x0
	char bOverride_DitheredLODTransition : 1; // 0x0
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x0
	char bOverride_TwoSided : 1; // 0x0
	char TwoSided : 1; // 0x0
	char DitheredLODTransition : 1; // 0x0
	char bCastDynamicShadowAsMasked : 1; // 0x1
	EBlendMode BlendMode; // 0x2
	EMaterialShadingModel ShadingModel; // 0x3
	float OpacityMaskClipValue; // 0x4
};

struct FGameplayEffectCue {
	FGameplayAttribute MagnitudeAttribute; // 0x0
	float MinLevel; // 0x38
	float MaxLevel; // 0x3c
	FGameplayTagContainer GameplayCueTags; // 0x40
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FCardinalDirectionSpeedConfig {
	TMap<EInputDirection, float> TMap_CardinalSpeedConfig; // 0x0
	TMap<EInputDirection, float> TMap_AnimCardinalSpeedConfig; // 0x50
	float CustomAcceleration; // 0xa0
	float CustomGroundFriction; // 0xa4
	float CustomBrakingFriction; // 0xa8
	float CustomBrakingDecelerationWalking; // 0xac
	float CustomRotationMultiply; // 0xb0
	float CustomRotationMultiplyInterpSpeed; // 0xb4
	float CustomPlatformRotationMultiply; // 0xb8
	float CustomBrakingDistance; // 0xbc
	float CutomAutoBrakingDistance; // 0xc0
	float CostSPPerSecond; // 0xc4
	float SPRecoverMul; // 0xc8
};

struct FAnimalsAnimsStanceConfig {
	FAnimalsStanceAIConfig AnimalsStanceAIConfig; // 0x0
	FAnimalsAnimInstanceConfig AnimInstanceAnims; // 0x30
	FAnimalsTurnAnims TurnAnims; // 0xb0
	FAnimalsStartAnims StartAnims; // 0xf0
	FAnimalsStopAnims StopAnims; // 0x140
	FAnimalsTransitions TransitionAnims; // 0x190
	FAnimalsHitAnims HitAnims; // 0x2c8
	FAnimalsDeathAnims DeathAnims; // 0x308
	FAnimalsAttackAnims InPlaceAttackAnims; // 0x358
	FAnimalsAttackAnims MovingAttackAnims; // 0x3a8
};

struct FTeamAttitude {
	ECustomTeamAttitude Enum_TeamAttitude; // 0x0
	ECustomTeamAttitudeBehavior Enum_TeamAttitudeBehavior; // 0x1
};

struct FOccupyTaxBuyItemNum {
	int32_t ProtectID; // 0x0
	char bAdditional : 1; // 0x4
	int32_t CapitalNum; // 0x8
	TArray<FOccupyBuyItemNum> TaxBuyItems; // 0x10
};

struct FNetSerializeScriptStructCache {
	TArray<UScriptStruct*> ScriptStructs; // 0x0
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FLevelPerk {
	USGCraftPerk* LevelCraftPerk; // 0x0
	USGBuff* LevelBuff; // 0x8
	int32_t LevelUpExp; // 0x10
	FText Description; // 0x18
	FString Param1; // 0x30
	FString Param2; // 0x40
	FString Param3; // 0x50
	FString Param4; // 0x60
	FString Param5; // 0x70
};

struct FSeasonDataInfo {
	int32_t SeasonLevel; // 0x0
	float CurrentSeasonExp; // 0x4
	float SeasonLevelUpExp; // 0x8
	bool HasSeasonPassport; // 0xc
	FDateTime SeasonPassportExpireTime; // 0x10
	TArray<FSeasonRewardItemState> CanReceiveRewardArray; // 0x18
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0
	FMovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	FMovieSceneTransformMask Mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648
};

struct FProceduralFoliageSpawnersPerLevelInfo {
	FString LevelName; // 0x0
	TArray<AProceduralFoliageVolume*> ProceduralFoliageSpawnSeuqnces; // 0x10
};

struct FRandomWeightMontage {
	UAnimMontage* WeightMontage; // 0x0
	float RandomWeight; // 0x8
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FGameplayModifierInfo {
	FGameplayAttribute Attribute; // 0x0
	EGameplayModOp ModifierOp; // 0x38
	FScalableFloat Magnitude; // 0x40
	FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x60
	FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x208
	FGameplayTagRequirements SourceTags; // 0x210
	FGameplayTagRequirements TargetTags; // 0x250
};

struct FTrainPerkRewardData {
	int32_t VehiclePerkIndex; // 0x0
	TArray<EVehiclePerkSlotType> VehiclePerkSlotType; // 0x8
	char bAllowPlacePerk : 1; // 0x18
	char bIsAddPerk : 1; // 0x18
};

struct FHelpTipsSlotSetting {
	EHelpTipInstructions HelpTipsType; // 0x0
	float AxisScale; // 0x4
	FText HelpTipsText; // 0x8
	FText ActiveTipsText; // 0x20
	FText RiderBattleText; // 0x38
	FText ActiveRiderBattleText; // 0x50
	char bOnlyRiderBattleShow : 1; // 0x68
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FHuKouItemAward {
	EGainHuKouItemWay GainWay; // 0x0
	USGItem* AwardItem; // 0x8
	int32_t nAwardNum; // 0x10
};

struct FPerlinLayerProperties {
	float Frequency; // 0x0
	float Intensity; // 0x4
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FCareerEquip : FTableRowBase {
	int32_t MinLevel; // 0x8
	int32_t MaxLevel; // 0xc
	TArray<FCareerDefaultInventoryItems> RandomDefaultInventoryItems; // 0x10
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FAttributeBasedFloat {
	FScalableFloat Coefficient; // 0x0
	FScalableFloat PreMultiplyAdditiveValue; // 0x20
	FScalableFloat PostMultiplyAdditiveValue; // 0x40
	FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60
	FCurveTableRowHandle AttributeCurve; // 0xa0
	EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xb0
	EGameplayModEvaluationChannel FinalChannel; // 0xb1
	FGameplayTagContainer SourceTagFilter; // 0xb8
	FGameplayTagContainer TargetTagFilter; // 0xd8
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FSeatWeaponMontage {
	TMap<EWeaponSkillType, UAnimMontage*> WeaponMontage; // 0x0
};

struct FCameraSettings {
	float TargetArmLength; // 0x0
	float CameraLagSpeed; // 0x4
	FVector SocketOffset; // 0x8
};

struct FClassRedirect {
	FName ObjectName; // 0x0
	FName OldClassName; // 0x8
	FName NewClassName; // 0x10
	FName OldSubobjName; // 0x18
	FName NewSubobjName; // 0x20
	FName NewClassClass; // 0x28
	FName NewClassPackage; // 0x30
	bool InstanceOnly; // 0x38
};

struct FRigidBodyErrorCorrection {
	float PingExtrapolation; // 0x0
	float PingLimit; // 0x4
	float ErrorPerLinearDifference; // 0x8
	float ErrorPerAngularDifference; // 0xc
	float MaxRestoredStateError; // 0x10
	float MaxLinearHardSnapDistance; // 0x14
	float PositionLerp; // 0x18
	float AngleLerp; // 0x1c
	float LinearVelocityCoefficient; // 0x20
	float AngularVelocityCoefficient; // 0x24
	float ErrorAccumulationSeconds; // 0x28
	float ErrorAccumulationDistanceSq; // 0x2c
	float ErrorAccumulationSimilarity; // 0x30
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FSGAnimNode_FeetSolver : FAnimNode_Base {
	FAnimNodeData_MultiInput AnimNode_InputData; // 0x10
	EIK_Type IK_Type; // 0x88
	EIKTraceType TraceType; // 0x89
	float TraceRadius; // 0x8c
	EInterpoLocation_Type LocInterpType; // 0x90
	EInterpoRotation_Type RotInterpType; // 0x91
	FComponentSpacePoseLink ComponentPose; // 0x98
	float ActualAlpha; // 0xa8
	EAnimAlphaInputType AlphaInputType; // 0xac
	bool bAlphaBoolEnabled; // 0xad
	float Alpha; // 0xb0
	FInputScaleBias AlphaScaleBias; // 0xb4
	FInputAlphaBoolBlend AlphaBoolBlend; // 0xc0
	FName AlphaCurveName; // 0x108
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x110
	bool AutomaticLegMake; // 0x140
	bool EnableSolver; // 0x141
	float ShiftSpeed; // 0x144
	float FeetRotationSpeed; // 0x148
	ETraceTypeQuery TraceChannel; // 0x170
	int32_t LODThreshold; // 0x174
	float LineTraceDownHeight; // 0x2c4
	float LineTraceUpperHeight; // 0x2c8
	bool IgnoreLerping; // 0x2cc
	bool IgnoreLocationLerping; // 0x2cd
	bool ShouldRotateFeet; // 0x2ce
	bool ShowTraceInGame; // 0x2d0
	float LocationLerpSpeed; // 0x2d4
	bool EnablePitch; // 0x2d9
	bool EnableRoll; // 0x2da
	FVector character_direction_vector_CS; // 0x2dc
};

struct FAttenuationSubmixSendSettings {
	USoundSubmixBase* Submix; // 0x0
	ESubmixSendMethod SubmixSendMethod; // 0x8
	float SubmixSendLevelMin; // 0xc
	float SubmixSendLevelMax; // 0x10
	float SubmixSendDistanceMin; // 0x14
	float SubmixSendDistanceMax; // 0x18
	float ManualSubmixSendLevel; // 0x1c
	FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FCharacterMeshLODDynamicMaterialData {
	UMaterialInstanceDynamic* MeshMaterials[0x3]; // 0x0
};

struct FWeatherLinearColorTrack : FWeatherTrack {
	FRuntimeCurveLinearColor Curve; // 0x10
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FAnimalSpeciesItemTable : FTableRowBase {
	ASG_AnimalsCharacter* AnimalTemplate; // 0x8
	TArray<FAnimalSpeciesConfig> AnimalSpeciesConfigs; // 0x10
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FConditionRewardMap {
	TMap<FString, USGConditionReward*> ConditionRewardMap; // 0x0
};

struct FCreateStructureInfo {
	FVector Expectedlocation; // 0x0
	FRotator ExpectedRotation; // 0xc
	char bHasBinded : 1; // 0x18
	ASGStructure* ParentStructure; // 0x20
	ASGStructure* ReplaceStructure; // 0x28
	ASGStructure* PreventStructure; // 0x30
	ASGStructureCheckVolume* PreventCheckVolume; // 0x38
	ASGStructure* CreateOnStructure; // 0x40
	ABaseCharacter* PlatformCharacter; // 0x48
	FName AttachBoneName; // 0x50
	char bIgnoreCheckObject : 1; // 0x58
};

struct FOccupyStructureSettings {
	int32_t InnerRadius; // 0x0
	int32_t OuterRadius; // 0x4
	int32_t InnerRadiusPVE; // 0x8
	int32_t OuterRadiusPVE; // 0xc
	TArray<FCraftResourceRequirement> UpdateResourceRequirements; // 0x10
	float MaxHPMultiplier; // 0x20
	int32_t InventoryItemMaxAmount; // 0x24
	float OverrideReductionRate[0x4]; // 0x28
	UStaticMesh* UpdateStaticMesh; // 0x38
	FVector UpdateStaticMeshScale; // 0x40
	FVector MeshCreateCheckBox; // 0x4c
	FVector MeshCreateCheckBoxOffset; // 0x58
	FRotator MeshCreateCheckBoxRotOffset; // 0x64
	FVector MeshCreateCheckBoxScale; // 0x70
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FGameUserSettingConfigMap {
	TMap<FString, FGameUserSettingConfig> SettingConfigMap; // 0x0
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FXianChengJinXian {
	FGuid GuildId; // 0x0
	int32_t Num; // 0x10
	FDateTime LastTime; // 0x18
};

struct FSGPathfindingStatusData {
	char bIsDrawDebugPath : 1; // 0x18
	float DrawLifeTime; // 0x1c
	float DrawThickness; // 0x20
	char bUseHierarchicalPathfinding : 1; // 0x24
	char bPathExist : 1; // 0x24
	char bPathIsShort : 1; // 0x24
	char bPathIsPartial : 1; // 0x24
	char bPathSearchOutOfNodes : 1; // 0x24
	float ClosestWallDistance; // 0x28
	UNavigationQueryFilter* FilterClass; // 0x30
	FVector ClosestWallLocation; // 0x38
	FVector ClosestWallNormal; // 0x44
	float PathfindingTime; // 0x50
	float PathCost; // 0x54
	float InvalidPathDistance; // 0x58
	int32_t PathfindingID; // 0x5c
	int32_t PathfindingSteps; // 0x60
	float OffsetFromCornersDistance; // 0x64
	int32_t PathfindingIndex; // 0x68
	int32_t MaxPathfindingIndex; // 0x6c
	FVector SearchStartLocation; // 0x70
	FVector SearchEndLocation; // 0x7c
	FVector PathStartLocation; // 0x88
	FVector PathEndLocation; // 0x94
	TArray<FVector> PathfindingPoints; // 0xa0
	TArray<FVector> PathfindingWallPoints; // 0xb0
	TArray<FVector2D> PathfindingWallNormals; // 0xc0
	TArray<float> PathfindingDeltaWallDists; // 0xd0
	float TetherTime; // 0xe0
	float TetherDistance; // 0xe4
};

struct FNewsNetData {
	FGuid ID; // 0x0
	char NewsType; // 0x10
};

struct FMovieSceneMediaSectionParams {
	UMediaSoundComponent* MediaSoundComponent; // 0x0
	UMediaSource* MediaSource; // 0x8
	UMediaTexture* MediaTexture; // 0x10
	UMediaPlayer* MediaPlayer; // 0x18
	FFrameNumber SectionStartFrame; // 0x20
	FFrameNumber SectionEndFrame; // 0x24
	bool bLooping; // 0x28
	FFrameNumber StartFrameOffset; // 0x2c
};

struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FOccupyBuffInfo {
	int32_t BuffIndex; // 0x0
	int32_t BuyDayOfYear; // 0x4
};

struct FFormationData : FTableRowBase {
	FText FormationText; // 0x8
	TArray<FVector2D> FormationVectors; // 0x20
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FStructureFrameMesh {
	UStaticMesh* FrameStaticMesh; // 0x0
	FVector MeshLocation; // 0x8
	FRotator MeshRotaion; // 0x14
	FVector MeshScale; // 0x20
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FPreallocationInfo {
	TArray<AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // 0x50
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FGameplayCueTranslatorNode {
	TArray<FGameplayCueTranslationLink> Links; // 0x0
	FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10
	FGameplayTag CachedGameplayTag; // 0x14
	FName CachedGameplayTagName; // 0x1c
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FAnimalFarmDataEntry {
	FGuid AnimalGuid; // 0x0
	ECharacterSex AnimalSex; // 0x10
	char bIsAnimalBaby : 1; // 0x11
	int32_t AnimalSpecies; // 0x14
	float AnimalAdulthoodTime; // 0x18
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FTagContainerAggregator {
	FGameplayTagContainer CapturedActorTags; // 0x0
	FGameplayTagContainer CapturedSpecTags; // 0x20
	FGameplayTagContainer ScopedTags; // 0x40
};

struct FSkelMeshMergeUVTransform {
	TArray<FTransform> UVTransforms; // 0x0
};

struct FTattooDataGroup {
	TArray<FTattooData> TattooDatas; // 0x0
};

struct FExploitTypes {
	TArray<EExploitSubType> ExploitSubTypes; // 0x0
};

struct FSkeletalMeshMergeParams {
	TArray<FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x0
	TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10
	TArray<USkeletalMesh*> MeshesToMerge; // 0x20
	int32_t StripTopLODS; // 0x30
	char bNeedsCpuAccess : 1; // 0x34
	char bSkeletonBefore : 1; // 0x34
	USkeleton* Skeleton; // 0x38
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
	int32_t CustomChunkIndex; // 0x4
	FVector CustomExplodeDirection; // 0x8
	char IsStaticChunk : 1; // 0x14
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FAnimalsBehavior {
	UAnimMontage* BehaviorMontage; // 0x0
	float ExtraBrakingDistance; // 0x8
};

struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FGeneralSmallSkillConditionEntry {
	EGeneralsSkillStatusType OrSmallType; // 0x0
	int32_t GeneralRequiredSmallSkillLevel; // 0x4
};

struct FNiagaraVariableMetaData {
	FText Description; // 0x0
	FText CategoryName; // 0x18
	bool bAdvancedDisplay; // 0x30
	int32_t EditorSortPriority; // 0x34
	bool bInlineEditConditionToggle; // 0x38
	FNiagaraInputConditionMetadata EditCondition; // 0x40
	FNiagaraInputConditionMetadata VisibleCondition; // 0x58
	TMap<FName, FString> PropertyMetaData; // 0x70
	FName ParentAttribute; // 0xc0
	FName ScopeName; // 0xc8
	ENiagaraScriptParameterUsage Usage; // 0xd0
	bool bIsStaticSwitch; // 0xd4
	int32_t StaticSwitchDefaultValue; // 0xd8
	bool bAddedToNodeGraphDeepCopy; // 0xdc
	bool bOutputIsPersistent; // 0xdd
	FName CachedNamespacelessVariableName; // 0xe0
	bool bCreatedInSystemEditor; // 0xe8
	bool bUseLegacyNameString; // 0xe9
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FHorizonDialogueSegmentInfoStyle {
	FName StyleName; // 0x0
	TArray<FString> Text; // 0x8
	TArray<FSlateColor> ColorAndOpacity; // 0x18
	TArray<FSlateFontInfo> Font; // 0x28
	TArray<int32_t> FontSize; // 0x38
	TArray<FName> TypefaceFontName; // 0x48
	TArray<FVector2D> ShadowOffset; // 0x58
	TArray<FSlateColor> ShadowColorAndOpacity; // 0x68
	TArray<float> DialogueMsgSpeed; // 0x78
	TArray<float> DialogueMsgWait; // 0x88
	TArray<FMargin> PaddingMargin; // 0x98
	TArray<FString> HypertextReference; // 0xa8
	TArray<FSlateColor> HypertextHoveredColor; // 0xb8
	TArray<FSlateColor> HypertextVisitedColor; // 0xc8
	TArray<UHorizonButton*> BackgroundButtonClass; // 0xd8
	TSoftObjectPtr<UTexture2D> Texture2D; // 0xe8
	TSoftObjectPtr<UMaterial> Material; // 0x110
	TSoftObjectPtr<UPaperSprite> PaperSprite; // 0x138
	TSoftObjectPtr<USoundBase> DialogueSound; // 0x160
	TArray<float> DialogueSoundVolumeMultiplier; // 0x188
	TArray<float> DialogueSoundPitchMultiplier; // 0x198
	TArray<float> DialogueSoundStartTime; // 0x1a8
	TSoftObjectPtr<UPaperFlipbook> PaperFlipbook; // 0x1b8
	TArray<FVector2D> ImageSize; // 0x1e0
	FHorizonDialogueSegmentInfoRubyTextStyle RubyTextStyleInfo; // 0x1f0
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FVaultingHeightParams {
	float VaultingDesiredHeight; // 0x0
	FVaultingParams ClimbVaultingParams; // 0x10
	FVaultingParams JumpVaultingParams; // 0x160
	FVaultingParams SlideVaultingParams; // 0x2b0
	FVaultingParams NarrowVaultingParams; // 0x400
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FAnimalsAttackAnims {
	TMap<EAimDirection, FAnimalsCustomAttackInfoes> TMap_AttackMontages; // 0x0
};

struct FAnimalInfo {
	TWeakObjectPtr<ASG_AnimalsCharacter> AnimalWeakPtr; // 0x0
	FVector Location; // 0x8
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FItemStrengthenProperty : FTableRowBase {
	int32_t Level; // 0x8
	float SlashingDamage; // 0xc
	float PiercingDamage; // 0x10
	float CrushingDamage; // 0x14
	float SiegeDamage; // 0x18
	int32_t Tenacity; // 0x1c
	float SlashingArmor; // 0x20
	float PiercingArmor; // 0x24
	float CrushingArmor; // 0x28
	float SiegeArmor; // 0x2c
	float CollectionDamage; // 0x30
};

struct FGuildImageColor : FTableRowBase {
	int32_t ColorIndex; // 0x8
	USGItem* UnlockItem; // 0x10
	FLinearColor Color; // 0x18
	USGItem* ColorItemClass; // 0x28
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FBattleInfo {
	FGuid BattleUid; // 0x0
	EBattleType BattleType; // 0x10
	int32_t BattleKey; // 0x14
	int32_t BattleGamePlayIndex; // 0x18
	int32_t nBattleRoundIndex; // 0x1c
	int32_t BattleSocre; // 0x20
	int32_t BattleHpMin; // 0x24
	int32_t BattleHpMax; // 0x28
	EGameServerState ServerState; // 0x2c
	int32_t ServerId; // 0x30
	FGuid DefenseUid; // 0x34
	FString DefenseGuildOwnerName; // 0x48
	FGuid AttackUid; // 0x58
	FString AttackGuildOwnerName; // 0x68
	float SignUpTime; // 0x78
	float OpenTime; // 0x7c
	float OverTime; // 0x80
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FShopProps : FTableRowBase {
	int32_t ShopPropsIndex; // 0x8
	FText ItemName; // 0x10
	FText ItemIntro; // 0x28
	int32_t Priority; // 0x40
	EShopPropState PropsState; // 0x44
	FItemNumMap ItemPackageConfig; // 0x48
	EShopUIMainIndex ShelfIndex; // 0x98
	TSoftObjectPtr<UTexture2D> MainBrush; // 0xa0
	ENShopPropsActivity ActivityType; // 0xc8
	float Discount; // 0xcc
	ECapitalType PriceType; // 0xd0
	int32_t Price; // 0xd4
};

struct FMsgServerCancelPlayerQueue : FMessageBase {
	int32_t ServerType; // 0x8
};

struct FMesh_Caustics_Parameters {
	FString EnableMeshCaustics_11_EF17A54E4000730673FD55AFA7851310; // 0x0
	FString MeshCausticsResolution_12_8CBAF5AD40511B86FFECDBBE10551070; // 0x10
	FString MeshCausticsBufferScale_13_82AC6AEE4DE3DABA0E6EF8AFC173099A; // 0x20
	FString MeshCausticsTemporalStrength_14_53019FA5437B781E8F3DCDA3EAA12347; // 0x30
	FString MeshCausticsJitter_15_A7EFA23F493F73491A338F833DD71740; // 0x40
	FString MeshCausticsEnableDispersion_16_D1059E664DB569A0DCD2868ED0E410C0; // 0x50
	FString MeshCausticsTranslucentReflectionMode_57_234A3311428BB4FD6186D485A258D216; // 0x60
	FString MeshCausticsMaxTraceDepth_18_E5DFC534448262757F618C984430031B; // 0x70
	FString MeshCausticsAdaptivePhotonSize_19_75A570FD45DDB1FFB198EAB522F1327C; // 0x80
	FString MeshCausticsEnableTemporalFilter_20_B10DF55042CC5EB4BBBD3C9029E72D25; // 0x90
	FString MeshCausticsAdaptiveSmooth_26_B237A3464D57ACD60A63CEB0E381F8AF; // 0xa0
	FString MeshCausticsAdaptiveUpdateSpeed_27_EBAA130A425D904E6219BC847C5D4E7E; // 0xb0
	FString MeshCausticsAdaptiveVarianceGain_28_D612A8F64E9A6BB74AD5D0A9FC85241B; // 0xc0
	FString MeshCausticsFixedLight_29_9C6912304FA41791E112799EF9B09B26; // 0xd0
	FString MeshCausticsMaxIntensity_30_0571085B49EBB70A2506CC898A54B72E; // 0xe0
	FString MeshCausticsSoftCausticsSample_34_23B75C3A4673EC4C06FB7380A1AFC77B; // 0xf0
	FString MeshCausticsEnableAdvancedSoftCaustics_40_EF539D7E4B254D3FF7354499EA1ADA17; // 0x100
	FString MeshCausticsMidCullColorThreshold_46_603884CE4A61EB477D7D2C82EFE3E844; // 0x110
	FString MeshCausticsFinalCullColorThreshold_47_ADE4A81B4FC53161666873B6CE1C1E16; // 0x120
	FString MeshCausticsIntensity_50_8E96F81D40BC087613695CBE1946AD28; // 0x130
	FString MeshCausticsMaxRayDistance_53_7A78E57D4BA078EDB6381A846432F21C; // 0x140
	FString MeshCausticsTemporalColorTolerance_56_C9E20A13401A4696C5D960922F2ED319; // 0x150
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FProtectionRequirement {
	int32_t ProtectIndex; // 0x0
	FName ProtectDesc; // 0x4
	FText ProtectTitle; // 0x10
	int32_t ProtectTime; // 0x28
	TArray<FCraftResourceRequirement> ProtectionResourceRequirements; // 0x30
	TArray<FCapitalResourceRequirement> ProtectionCapitalResourceRequirements; // 0x40
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingId; // 0x0
	uint16_t EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	TWeakObjectPtr<UMovieSceneTrack> SourceTrack; // 0x14
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30
	FName EvaluationGroup; // 0x68
	char bEvaluateInPreroll : 1; // 0x70
	char bEvaluateInPostroll : 1; // 0x70
	char bTearDownPriority : 1; // 0x70
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FMessageBase {
	char nMsgType; // 0x0
	int32_t nResult; // 0x4
};

struct FTipsTypes {
	TArray<FTipsType> ToolTipsItemList; // 0x0
};

struct FAllianceGuildMember {
	FGuid GuildUid; // 0x0
};

struct FQuestRewardOverride {
	int32_t PlayerMinLevel; // 0x0
	int32_t PlayerMaxLevel; // 0x4
	TArray<FQuestReward> QuestRewards; // 0x8
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	bool bPlaying; // 0x28
	float DefaultBlendTimeMultiplier; // 0x2c
	TArray<int32_t> NextSections; // 0xe8
	TArray<int32_t> PrevSections; // 0xf8
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
	float position; // 0x128
	float PlayRate; // 0x12c
	FAlphaBlend Blend; // 0x130
	int32_t DisableRootMotionCount; // 0x18c
};

struct FGameplayEffectSpec {
	UGameplayEffect* Def; // 0x0
	TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8
	FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18
	float Duration; // 0x50
	float Period; // 0x54
	float ChanceToApplyToTarget; // 0x58
	FTagContainerAggregator CapturedSourceTags; // 0x60
	FTagContainerAggregator CapturedTargetTags; // 0xe8
	FGameplayTagContainer DynamicGrantedTags; // 0x170
	FGameplayTagContainer DynamicAssetTags; // 0x190
	TArray<FModifierSpec> Modifiers; // 0x1b0
	int32_t StackCount; // 0x1c0
	char bCompletedSourceAttributeCapture : 1; // 0x1c4
	char bCompletedTargetAttributeCapture : 1; // 0x1c4
	char bDurationLocked : 1; // 0x1c4
	TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1c8
	FGameplayEffectContextHandle EffectContext; // 0x278
	float Level; // 0x290
};

struct FGameplayCueNotifyData {
	FGameplayTag GameplayCueTag; // 0x0
	FSoftObjectPath GameplayCueNotifyObj; // 0x8
	UObject* LoadedGameplayCueClass; // 0x20
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FSGAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	TArray<FPoseLink> BlendPoses; // 0x20
	FSGInputBlendPose SGInputBlendPose; // 0x30
	TArray<float> BlendWeights; // 0x40
	bool bMeshSpaceRotationBlend; // 0x50
	bool bMeshSpaceScaleBlend; // 0x51
	ECurveBlendOption CurveBlendOption; // 0x52
	bool bBlendRootMotionBasedOnRootBone; // 0x53
	int32_t LODThreshold; // 0x58
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60
	FGuid SkeletonGuid; // 0x70
	FGuid VirtualBoneGuid; // 0x80
};

struct FCloudChunkData {
	TArray<char> DataBytes; // 0x0
	TWeakObjectPtr<AActor> ChunkActor; // 0x10
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FHorizonDialogueBlockInfo {
	FString MsgText; // 0x0
	FString RubyText; // 0x20
	int32_t CurrentCharIndex; // 0x38
	int32_t SegmentReferenceIndex; // 0x3c
	FName Name; // 0x40
	FVector2D BlockSize; // 0x48
	FVector2D RubyTextBlockSize; // 0x50
};

struct FApplyingJoinGuildInfo {
	FGuid ApplyPlayerUid; // 0x0
	FString ApplyPlayerName; // 0x10
	int32_t ApplyPlayerLevel; // 0x20
	FDateTime ApplyTime; // 0x28
	FGuid GuildUid; // 0x30
	FString VerifyInfo; // 0x40
};

struct FShopSquareItem : FTableRowBase {
	int32_t ItemIndex; // 0x8
	FSlateBrush ItemBrush; // 0x10
	char bIsHotSale : 1; // 0x98
	FSlateBrush HotSaleBrush; // 0xa0
	float Discount; // 0x128
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FVaultingTraceSettings {
	FName CollisionProfileName; // 0x0
	FVector2D VaultingHeightRange; // 0x8
	float ForwardReachDistance; // 0x10
	float ClimbCapsuleRadiusTolerance; // 0x14
	float TraceForDurationTime; // 0x20
	TArray<FHitResult> ForwardHitResults; // 0x28
	TArray<FHitResult> ClimbUpHitResults; // 0x38
	TArray<FHitResult> ClimbDownHitResults; // 0x50
	FHitResult LandHitResult; // 0x60
	FHitResult AirLandHitResult; // 0xec
	TArray<AActor*> IgnoreActors; // 0x178
};

struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50
	ESphericalLimitType LimitType; // 0x54
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FMiniMapMarkConfig : FTableRowBase {
	EMiniMapMarkType MarkType; // 0x8
	TSoftObjectPtr<UTexture2D> InMapMarkTexture; // 0x10
	TSoftObjectPtr<UTexture2D> OutOfMapMarkTexture; // 0x38
	FLinearColor NormalMarkColor; // 0x60
	FLinearColor GuildMarkColor; // 0x70
	UTexture2D* AdvancedHitTexture; // 0x80
	AMiniMapMarkActor* MarkActorClass; // 0x88
	char bViewDistanceLimit : 1; // 0x90
	float MinViewDistance; // 0x94
};

struct FChangeEquipStateMaterialSetting {
	int32_t MaterialNum; // 0x0
	FName MaterialName; // 0x4
	float MinSpeedToNum; // 0xc
	float MaxSpeed; // 0x10
	float MaxSpeedToNum; // 0x14
	float DeltaChangeNum; // 0x18
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FGameplayEffectCustomExecutionOutput {
	TArray<FGameplayModifierEvaluatedData> OutputModifiers; // 0x0
	char bTriggerConditionalGameplayEffects : 1; // 0x10
	char bHandledStackCountManually : 1; // 0x10
	char bHandledGameplayCuesManually : 1; // 0x10
};

struct FElementsMaskStruct {
	TArray<uint32_t> ElementsMasks; // 0x0
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FMiniMapMarkData {
	FGuid MarkGuid; // 0x0
	FString MarkID; // 0x10
	int32_t MarkType; // 0x20
	FString MarkName; // 0x28
	char bIsGuild : 1; // 0x38
	FVector Location; // 0x3c
};

struct FAllianceAllianceMember {
	FGuid AllianceUid; // 0x0
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	bool bIsTemperatureSupported; // 0x10
	bool bIsIntensitySupported; // 0x11
	bool bIsLightColorSupported; // 0x12
	bool bIsInnerConeAngleSupported; // 0x13
	bool bIsOuterConeAngleSupported; // 0x14
	bool bIsAttenuationRadiusSupported; // 0x15
	bool bIsSourceLenghtSupported; // 0x16
	bool bIsSourceRadiusSupported; // 0x17
	bool bIsSoftSourceRadiusSupported; // 0x18
};

struct FHairGroupsMaterial {
	UMaterialInterface* Material; // 0x0
	FName SlotName; // 0x8
};

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FGameplayAbilityActivationInfo {
	EGameplayAbilityActivationMode ActivationMode; // 0x0
	char bCanBeEndedByOtherInstance : 1; // 0x1
	FPredictionKey PredictionKeyWhenActivated; // 0x8
};

struct FBattleInfoTickTime {
	float SignUpTime; // 0x0
	float OpenTime; // 0x4
	float OverTime; // 0x8
};

struct FGuanAiBattleParam {
	int32_t OpenDayOfWeek; // 0x0
	int32_t OpenHour; // 0x4
	int32_t OpenCoolDays; // 0x8
	int32_t SignUpTime; // 0xc
};

struct FCanvasUVTri {
	FVector2D V0_Pos; // 0x0
	FVector2D V0_UV; // 0x8
	FLinearColor V0_Color; // 0x10
	FVector2D V1_Pos; // 0x20
	FVector2D V1_UV; // 0x28
	FLinearColor V1_Color; // 0x30
	FVector2D V2_Pos; // 0x40
	FVector2D V2_UV; // 0x48
	FLinearColor V2_Color; // 0x50
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FNews_GetRankReward_Activity : FNewsBase {
	FString ShowName; // 0x18
	FString RankID; // 0x28
	int32_t Rankings; // 0x38
};

struct FAllianceGuildInfo {
	FAllianceGuildMember GuildMember; // 0x0
	TArray<FAllianceSubMember> SubMembers; // 0x10
	FGuid AllianceUid; // 0x20
};

struct FSphericalPontoon {
	FName CenterSocket; // 0x0
	FVector RelativeLocation; // 0x8
	float Radius; // 0x14
	FVector LocalForce; // 0x18
	FVector CenterLocation; // 0x24
	FQuat SocketRotation; // 0x30
	FVector Offset; // 0x40
	float WaterHeight; // 0x50
	float WaterDepth; // 0x54
	float ImmersionDepth; // 0x58
	FVector WaterPlaneLocation; // 0x5c
	FVector WaterPlaneNormal; // 0x68
	FVector WaterSurfacePosition; // 0x74
	FVector WaterVelocity; // 0x80
	int32_t WaterBodyIndex; // 0x8c
	AWaterBody* CurrentWaterBody; // 0x138
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FSynthKnobStyle : FSlateWidgetStyle {
	FSlateBrush LargeKnob; // 0x8
	FSlateBrush LargeKnobOverlay; // 0x90
	FSlateBrush MediumKnob; // 0x118
	FSlateBrush MediumKnobOverlay; // 0x1a0
	float MinValueAngle; // 0x228
	float MaxValueAngle; // 0x22c
	ESynthKnobSize KnobSize; // 0x230
};

struct FStatusAudio {
	int32_t Index; // 0x0
	TWeakObjectPtr<USGAudioComponent> AudioComponent; // 0x4
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FVirtualSkeletalMeshData {
	UAnimMontage* PlayMontage; // 0x0
	USkeletalMeshComponent* VirtualPropSkeletalMeshComponent; // 0x8
};

struct FRecordedFrame {
	TArray<FTransform> Transforms; // 0x0
	TArray<int32_t> TransformIndices; // 0x10
	TArray<int32_t> PreviousTransformIndices; // 0x20
	TArray<bool> DisabledFlags; // 0x30
	TArray<FSolverCollisionData> Collisions; // 0x40
	TArray<FSolverBreakingData> Breakings; // 0x50
	TSet<FSolverTrailingData> Trailings; // 0x60
	float Timestamp; // 0xb0
};

struct FLightPropagationVolumeSettings {
	char bOverride_LPVIntensity : 1; // 0x0
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x0
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x0
	char bOverride_LPVSize : 1; // 0x0
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x1
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x1
	char bOverride_LPVGeometryVolumeBias : 1; // 0x1
	char bOverride_LPVVplInjectionBias : 1; // 0x1
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x1
	float LPVIntensity; // 0x4
	float LPVVplInjectionBias; // 0x8
	float LPVSize; // 0xc
	float LPVSecondaryOcclusionIntensity; // 0x10
	float LPVSecondaryBounceIntensity; // 0x14
	float LPVGeometryVolumeBias; // 0x18
	float LPVEmissiveInjectionIntensity; // 0x1c
	float LPVDirectionalOcclusionIntensity; // 0x20
	float LPVDirectionalOcclusionRadius; // 0x24
	float LPVDiffuseOcclusionExponent; // 0x28
	float LPVSpecularOcclusionExponent; // 0x2c
	float LPVDiffuseOcclusionIntensity; // 0x30
	float LPVSpecularOcclusionIntensity; // 0x34
	float LPVFadeRange; // 0x38
	float LPVDirectionalOcclusionFadeRange; // 0x3c
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	float Temperature; // 0xd0
	float Intensity; // 0xd4
	FColor LightColor; // 0xd8
	float InnerConeAngle; // 0xdc
	float OuterConeAngle; // 0xe0
	float AttenuationRadius; // 0xe4
	float SourceRadius; // 0xe8
	float SoftSourceRadius; // 0xec
	float SourceLength; // 0xf0
};

struct FTextSizingParameters {
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	FVector2D Scaling; // 0x10
	UFont* DrawFont; // 0x18
	FVector2D SpacingAdjust; // 0x20
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FAnimalsBoneDamageAdjusterConfig {
	FName BoneName; // 0x0
	float ShooterDamageMultiplier; // 0x8
	float MeleeDamageMultiplier; // 0xc
};

struct FCustomSoundSettingGroup : FTableRowBase {
	FCustomSoundSettingArray SoundSetting[0x2]; // 0x8
};

struct FEdGraphPinType {
	FName PinCategory; // 0x0
	FName PinSubCategory; // 0x8
	TWeakObjectPtr<UObject> PinSubCategoryObject; // 0x10
	FSimpleMemberReference PinSubCategoryMemberReference; // 0x18
	FEdGraphTerminalType PinValueType; // 0x38
	EPinContainerType ContainerType; // 0x54
	char bIsArray : 1; // 0x55
	char bIsReference : 1; // 0x55
	char bIsConst : 1; // 0x55
	char bIsWeakPointer : 1; // 0x55
	char bIsUObjectWrapper : 1; // 0x55
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FBigMapCityInfo : FTableRowBase {
	FText CityName; // 0x8
	FVector2D CityPostion; // 0x20
	FVector ActorLocation; // 0x28
};

struct FVoiceData {
	int32_t VoiceId; // 0x0
	float PitchSemiTones; // 0x4
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FEnergyStructureGearConfig {
	float Speed; // 0x0
	float GearValue; // 0x4
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FGuildEventSpawnDetail {
	float RandomWeight; // 0x0
	FGuildEventSpawnConfig SpawnConfig; // 0x8
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FMsgClientServerPassportMessage : FMessageBase {
	bool bHasPassport; // 0x8
	TArray<int32_t> ServerList; // 0x10
};

struct FGuildSingleServerData {
	TMap<FGuid, FGuildKPILog> MemberKPILogs; // 0x0
};

struct FSkillUIInfo : FTableRowBase {
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x8
	FText TipsContent; // 0x30
	FText GuildTipsContent; // 0x48
	FText SkillName; // 0x60
	FText GuildSkillName; // 0x78
	TMap<FName, FText> SkillMultipy; // 0x90
	TMap<FName, bool> PercentageValue; // 0xe0
	FText SkillTypeName; // 0x130
	FText GetSkillExpType; // 0x148
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FSkeletalMeshLODGroupSettings {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	EBoneFilterActionOption BoneFilterActionOption; // 0x8
	TArray<FBoneFilter> BoneList; // 0x10
	TArray<FName> BonesToPrioritize; // 0x20
	float WeightOfPrioritization; // 0x30
	UAnimSequence* BakePose; // 0x38
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FGameplayCueObjectLibrary {
	TArray<FString> Paths; // 0x0
	UObjectLibrary* ActorObjectLibrary; // 0x30
	UObjectLibrary* StaticObjectLibrary; // 0x38
	UGameplayCueSet* CueSet; // 0x40
	bool bShouldSyncScan; // 0x4c
	bool bShouldAsyncLoad; // 0x4d
	bool bShouldSyncLoad; // 0x4e
	bool bHasBeenInitialized; // 0x4f
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
	UPhysicalMaterial* Material; // 0x30
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FGeneralConfig {
	char bUseRandomMoving : 1; // 0x0
	float FollowerSpeedLimit; // 0x4
	float FollowDeltaAngle; // 0x8
	float FollowDeltaDistance; // 0xc
	float FollowDeltaDistanceForSpawner; // 0x10
	float FormationDeltaStopDistance; // 0x14
	float RiderDistance; // 0x18
	TArray<UAnimMontage*> RelaxedMontages; // 0x20
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FRandomWeightAnim {
	UAnimSequence* BehaviorAnim; // 0x0
	float RandomWeight; // 0x8
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FPreviewSlot {
	TWeakObjectPtr<AActor> PreviewActor; // 0x0
	TWeakObjectPtr<UActorComponent> PreviewComponent; // 0x8
	FBox BoundBox; // 0x10
	char ShowBlurs : 1; // 0x2c
	float KeepDistanceRatio; // 0x30
	FRotator KeepRotator; // 0x34
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FAnimUpdateRateParameters {
	EUpdateRateShiftBucket ShiftBucket; // 0x1
	char bInterpolateSkippedFrames : 1; // 0x2
	char bShouldUseLodMap : 1; // 0x2
	char bShouldUseMinLod : 1; // 0x2
	char bSkipUpdate : 1; // 0x2
	char bSkipEvaluation : 1; // 0x2
	int32_t UpdateRate; // 0x4
	int32_t EvaluationRate; // 0x8
	float TickedPoseOffestTime; // 0xc
	float AdditionalTime; // 0x10
	int32_t BaseNonRenderedUpdateRate; // 0x18
	int32_t MaxEvalRateForInterpolation; // 0x1c
	TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20
	TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30
	int32_t SkippedUpdateFrames; // 0x80
	int32_t SkippedEvalFrames; // 0x84
};

struct FReplicatedPredictionKeyMap : FFastArraySerializer {
	TArray<FReplicatedPredictionKeyItem> PredictionKeys; // 0x108
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FItemCraftQueueEntry {
	USGItem* ItemTemplate; // 0x0
	FGuid UniqueId; // 0x8
	int32_t Quantity; // 0x18
	float RemaingCraftTime; // 0x1c
	float TotalRemainingCraftTime; // 0x20
	char bIsRepair : 1; // 0x24
	EItemQuality UseRemoveItemQuality; // 0x25
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FAnimalsAI_Config {
	char bAlwaysSetRotation : 1; // 0x0
	char bUseTurnInPlaceCurve : 1; // 0x0
	char bUseMovingTurnMontage : 1; // 0x0
	char bUseCustomBrakingDistance : 1; // 0x0
	float BrakingArchDirectionAngle; // 0x4
	FVector2D BrakingRotationAngle; // 0x8
	float BrakingAgainSpeed; // 0x10
	char bUseInPlaceAttackByMoving : 1; // 0x14
	float AttackRotationSpeed; // 0x18
	EAnimalsMovingGaitType Enum_DesertGaitType; // 0x1c
	EAnimalsMovingGaitType Enum_WanderGaitType; // 0x1d
	EAnimalsMovingGaitType Enum_FeedGaitType; // 0x1e
	EAnimalsMovingGaitType Enum_GotoSleepGaitType; // 0x1f
	EAnimalsMovingGaitType Enum_FleeGaitType; // 0x20
	EAnimalsMovingGaitType Enum_AttackGaitType; // 0x21
	EAnimalsMovingGaitType Enum_ChargeGaitType; // 0x22
	EAnimalsMovingGaitType Enum_FollowGaitType; // 0x23
	EAnimalsMovingGaitType Enum_MoveToDestLocStateType; // 0x24
	char bUseSwimGaitType : 1; // 0x25
	EAnimalsMovingGaitType Enum_SwimGaitType; // 0x26
	ECustomAiMovingStateType Enum_MovingStateType; // 0x27
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FAnimalsDeathAnims {
	TMap<EInputDirection, FAnimalsCustomDeathAnims> TMap_DeathMontages; // 0x0
};

struct FOreInfoData {
	ENaturalResType OreType; // 0x0
	FText OreDensityText; // 0x8
	int32_t OreDensityMin; // 0x20
	int32_t OreDensityMax; // 0x24
	float OreMapDensityMin; // 0x28
	float OreMapDensityMax; // 0x2c
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FMouthData {
	float MouthLipThin; // 0x0
	float MouthDepth; // 0x4
	float MouthHeight; // 0x8
	float MouthScale; // 0xc
	float MouthWidth; // 0x10
	float MouthLipLowerCurve; // 0x14
	float MouthLipSeamHeight; // 0x18
	float MouthLipUpperCurve; // 0x1c
	float MouthComerDepth; // 0x20
	float MouthLipCurve; // 0x24
	float MouthLipLowerScale; // 0x28
	float MouthLipUpperScale; // 0x2c
	float MouthPhitrumTone; // 0x30
};

struct FPrimaryAssetTypeInfo {
	FName PrimaryAssetType; // 0x0
	TSoftClassPtr<UObject> AssetBaseClass; // 0x8
	UObject* AssetBaseClassLoaded; // 0x30
	bool bHasBlueprintClasses; // 0x38
	bool bIsEditorOnly; // 0x39
	TArray<FDirectoryPath> Directories; // 0x40
	TArray<FSoftObjectPath> SpecificAssets; // 0x50
	FPrimaryAssetRules Rules; // 0x60
	TArray<FString> AssetScanPaths; // 0x70
	bool bIsDynamicAsset; // 0x80
	int32_t NumberOfAssets; // 0x84
};

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FStructureCheckVolumeLocalizationRowBase : FTableRowBase {
	FString StructureCheckVolumeTag; // 0x8
	FText StructureCheckVolumeName; // 0x18
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FLoadingScreenParams : FTableRowBase {
	FString BgImagePath; // 0x8
	FString FrontImagePath; // 0x18
	FText TipsContent; // 0x28
};

struct FBakedAnimationState {
	FName StateName; // 0x0
	TArray<FBakedStateExitTransition> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
	bool bIsAConduit; // 0x28
	int32_t EntryRuleNodeIndex; // 0x2c
	TArray<int32_t> PlayerNodeIndices; // 0x30
	TArray<int32_t> LayerNodeIndices; // 0x40
	bool bAlwaysResetOnEntry; // 0x50
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FChunkDataObjectInfo {
	TArray<char> ChunkBytes; // 0x0
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMultiDestroyedMesh {
	FName DestroyedMeshName; // 0x0
	FSoftObjectPath DestructibleMesh; // 0x8
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FHorizonDialogueLineInfo {
	int32_t CurrentDialogueBlockIndex; // 0x0
	int32_t MaxLineHeight; // 0x4
	int32_t LineWidth; // 0x8
	TArray<FHorizonDialogueBlockInfo> DialogueBlockInfoList; // 0x10
	FVector2D position; // 0x20
	bool bNewPage; // 0x28
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FGuildLevelConfig {
	int32_t MaxMemeberCount; // 0x0
	int32_t MaxManagerCount; // 0x4
	int32_t MaxViceCaptainCount; // 0x8
	int32_t UpgradePoint; // 0xc
	int32_t MaxOccupyLimitTotalNum; // 0x10
	int32_t MaxOccupyLimitTotalPrice; // 0x14
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	float VoxelSize; // 0x4
	FMaterialProxySettings MaterialSettings; // 0x8
	float MergeDistance; // 0x90
	FColor UnresolvedGeometryColor; // 0x94
	float MaxRayCastDist; // 0x98
	float HardAngleThreshold; // 0x9c
	int32_t LightMapResolution; // 0xa0
	EProxyNormalComputationMethod NormalCalculationMethod; // 0xa4
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xa5
	char bCalculateCorrectLODModel : 1; // 0xa6
	char bOverrideVoxelSize : 1; // 0xa6
	char bOverrideTransferDistance : 1; // 0xa6
	char bUseHardAngleThreshold : 1; // 0xa6
	char bComputeLightMapResolution : 1; // 0xa6
	char bRecalculateNormals : 1; // 0xa6
	char bUseLandscapeCulling : 1; // 0xa6
	char bAllowAdjacency : 1; // 0xa6
	char bAllowDistanceField : 1; // 0xa7
	char bReuseMeshLightmapUVs : 1; // 0xa7
	char bCreateCollision : 1; // 0xa7
	char bAllowVertexColors : 1; // 0xa7
	char bGenerateLightmapUVs : 1; // 0xa7
};

struct FSeasonRewardItemState {
	int32_t SeasonLevel; // 0x0
	ESeasonRewardState SeasonPassportReward1State; // 0x4
	ESeasonRewardState SeasonPassportReward2State; // 0x5
	ESeasonRewardState SeasonRewardState; // 0x6
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FARFilter {
	TArray<FName> PackageNames; // 0x0
	TArray<FName> PackagePaths; // 0x10
	TArray<FName> ObjectPaths; // 0x20
	TArray<FName> ClassNames; // 0x30
	TSet<FName> RecursiveClassesExclusionSet; // 0x90
	bool bRecursivePaths; // 0xe0
	bool bRecursiveClasses; // 0xe1
	bool bIncludeOnlyOnDiskAssets; // 0xe2
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FMoveSeatingCharSeatInfo {
	EMoveSeatingCharSeatType SeatType; // 0x0
	int32_t PowerSeatIndex; // 0x4
	int32_t NormalSeatIndex; // 0x8
	int32_t PowerInfoIndex; // 0xc
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FActiveGameplayEffectsContainer : FFastArraySerializer {
	TArray<FActiveGameplayEffect> GameplayEffects_Internal; // 0x130
	TArray<UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x450
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FPlanarLimit : FCollisionLimitBase {
	FPlane Plane; // 0x50
};

struct FHairStretchConstraint {
	bool SolveStretch; // 0x0
	bool ProjectStretch; // 0x1
	float StretchDamping; // 0x4
	float StretchStiffness; // 0x8
	FRuntimeFloatCurve StretchScale; // 0x10
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FAnimalAppearanceStruct {
	TArray<UMaterialInterface*> SkinMaterials; // 0x0
	TArray<int32_t> SkinHuaSeBaseTextureIndexs; // 0x10
	TArray<int32_t> SkinHuaSeMaskTextureIndexs; // 0x20
	float SkinRoughness; // 0x30
	EAnimalFurColorType SkinColorType; // 0x34
	float FurRoughness; // 0x38
	FLinearColor FurRootColorMin; // 0x3c
	FLinearColor FurRootColorMax; // 0x4c
	char bEnableFurTipColor : 1; // 0x5c
	FLinearColor FurTipColorMin; // 0x60
	FLinearColor FurTipColorMax; // 0x70
	char bEnableFurDyeColor : 1; // 0x80
	FLinearColor FurDyeColorMin; // 0x84
	FLinearColor FurDyeColorMax; // 0x94
	float GroomMelaninVariationFine; // 0xa4
	float GroomFurRoughness; // 0xa8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D position; // 0x20
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FSkelMeshMergeUVTransformMapping {
	TArray<FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x0
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FDropRuleInfo {
	float Weight; // 0x0
	float FinalWeight; // 0x4
	USGItem* ItemClass; // 0x8
	int32_t MinNum; // 0x10
	int32_t MaxNum; // 0x14
	EItemQuality Quality; // 0x18
};

struct FTattooMaterialDataGroup {
	TArray<FTattooMaterialData> TattooMaterialDatas; // 0x0
	int32_t TattoTimes; // 0x10
	int32_t TattoLeftTimes; // 0x14
	int32_t TattoRightTimes; // 0x18
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FInAppPurchaseProductInfo {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DisplayName; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	float RawPrice; // 0x50
	FString CurrencyCode; // 0x58
	FString CurrencySymbol; // 0x68
	FString DecimalSeparator; // 0x78
	FString GroupingSeparator; // 0x88
	FString ReceiptData; // 0x98
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FMaterialProxySettings {
	FIntPoint TextureSize; // 0x0
	float GutterSpace; // 0x8
	float MetallicConstant; // 0xc
	float RoughnessConstant; // 0x10
	float AnisotropyConstant; // 0x14
	float SpecularConstant; // 0x18
	float OpacityConstant; // 0x1c
	float OpacityMaskConstant; // 0x20
	float AmbientOcclusionConstant; // 0x24
	ETextureSizingType TextureSizingType; // 0x28
	EMaterialMergeType MaterialMergeType; // 0x29
	EBlendMode BlendMode; // 0x2a
	char bAllowTwoSidedMaterial : 1; // 0x2b
	char bNormalMap : 1; // 0x2b
	char bTangentMap : 1; // 0x2b
	char bMetallicMap : 1; // 0x2b
	char bRoughnessMap : 1; // 0x2b
	char bAnisotropyMap : 1; // 0x2b
	char bSpecularMap : 1; // 0x2b
	char bEmissiveMap : 1; // 0x2b
	char bOpacityMap : 1; // 0x2c
	char bOpacityMaskMap : 1; // 0x2c
	char bAmbientOcclusionMap : 1; // 0x2c
	FIntPoint DiffuseTextureSize; // 0x30
	FIntPoint NormalTextureSize; // 0x38
	FIntPoint TangentTextureSize; // 0x40
	FIntPoint MetallicTextureSize; // 0x48
	FIntPoint RoughnessTextureSize; // 0x50
	FIntPoint AnisotropyTextureSize; // 0x58
	FIntPoint SpecularTextureSize; // 0x60
	FIntPoint EmissiveTextureSize; // 0x68
	FIntPoint OpacityTextureSize; // 0x70
	FIntPoint OpacityMaskTextureSize; // 0x78
	FIntPoint AmbientOcclusionTextureSize; // 0x80
};

struct FSubmixEffectDynamicsProcessorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2
	float InputGainDb; // 0x4
	float ThresholdDb; // 0x8
	float Ratio; // 0xc
	float KneeBandwidthDb; // 0x10
	float LookAheadMsec; // 0x14
	float AttackTimeMsec; // 0x18
	float ReleaseTimeMsec; // 0x1c
	USoundSubmix* ExternalSubmix; // 0x20
	char bChannelLinked : 1; // 0x28
	char bAnalogMode : 1; // 0x28
	char bKeyAudition : 1; // 0x28
	float KeyGainDb; // 0x2c
	float OutputGainDb; // 0x30
	FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34
	FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40
};

struct FNews_GiveMoney : FNewsBase {
	int32_t State; // 0x18
	FString CharacterName; // 0x20
	int32_t GiveMoneyAmount; // 0x30
};

struct FGuildStructureShowData : FTableRowBase {
	ASGStructure* StructureClass; // 0x8
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FInstrumentAnimType {
	UAnimMontage* BeatLMontage; // 0x0
	UAnimMontage* BeatRMontage; // 0x8
	UAnimSequence* IdleAnim; // 0x10
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FMsgRecord_GetXianChengOwner : FMsgRecordBase {
	FString OwnerName; // 0x10
	int32_t XianChengKey; // 0x20
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FModularSynthPreset : FTableRowBase {
	char bEnablePolyphony : 1; // 0x8
	ESynth1OscType Osc1Type; // 0xc
	float Osc1Gain; // 0x10
	float Osc1Octave; // 0x14
	float Osc1Semitones; // 0x18
	float Osc1Cents; // 0x1c
	float Osc1PulseWidth; // 0x20
	ESynth1OscType Osc2Type; // 0x24
	float Osc2Gain; // 0x28
	float Osc2Octave; // 0x2c
	float Osc2Semitones; // 0x30
	float Osc2Cents; // 0x34
	float Osc2PulseWidth; // 0x38
	float Portamento; // 0x3c
	char bEnableUnison : 1; // 0x40
	char bEnableOscillatorSync : 1; // 0x40
	float Spread; // 0x44
	float Pan; // 0x48
	float LFO1Frequency; // 0x4c
	float LFO1Gain; // 0x50
	ESynthLFOType LFO1Type; // 0x54
	ESynthLFOMode LFO1Mode; // 0x55
	ESynthLFOPatchType LFO1PatchType; // 0x56
	float LFO2Frequency; // 0x58
	float LFO2Gain; // 0x5c
	ESynthLFOType LFO2Type; // 0x60
	ESynthLFOMode LFO2Mode; // 0x61
	ESynthLFOPatchType LFO2PatchType; // 0x62
	float GainDb; // 0x64
	float AttackTime; // 0x68
	float DecayTime; // 0x6c
	float SustainGain; // 0x70
	float ReleaseTime; // 0x74
	ESynthModEnvPatch ModEnvPatchType; // 0x78
	ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79
	char bInvertModulationEnvelope : 1; // 0x7c
	char bInvertModulationEnvelopeBias : 1; // 0x7c
	float ModulationEnvelopeDepth; // 0x80
	float ModulationEnvelopeAttackTime; // 0x84
	float ModulationEnvelopeDecayTime; // 0x88
	float ModulationEnvelopeSustainGain; // 0x8c
	float ModulationEnvelopeReleaseTime; // 0x90
	char bLegato : 1; // 0x94
	char bRetrigger : 1; // 0x94
	float FilterFrequency; // 0x98
	float FilterQ; // 0x9c
	ESynthFilterType FilterType; // 0xa0
	ESynthFilterAlgorithm FilterAlgorithm; // 0xa1
	char bStereoDelayEnabled : 1; // 0xa4
	ESynthStereoDelayMode StereoDelayMode; // 0xa8
	float StereoDelayTime; // 0xac
	float StereoDelayFeedback; // 0xb0
	float StereoDelayWetlevel; // 0xb4
	float StereoDelayRatio; // 0xb8
	char bChorusEnabled : 1; // 0xbc
	float ChorusDepth; // 0xc0
	float ChorusFeedback; // 0xc4
	float ChorusFrequency; // 0xc8
	TArray<FEpicSynth1Patch> Patches; // 0xd0
};

struct FAnimalTameCageConfig {
	ASG_AnimalsCharacter* AnimalTemplate; // 0x0
	float AddTameMul; // 0x8
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FMinimalGameplayCueReplicationProxy {
	UAbilitySystemComponent* Owner; // 0x1b0
};

struct FIgnoreActorData {
	char bIgnore : 1; // 0x0
	TWeakObjectPtr<AActor> BehaviorActor; // 0x4
};

struct FDirectionMontage {
	TArray<UAnimMontage*> ForwardMontages; // 0x0
	TArray<UAnimMontage*> BackwardMontages; // 0x10
	TArray<UAnimMontage*> LeftMontages; // 0x20
	TArray<UAnimMontage*> RightMontages; // 0x30
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FGerstnerWave {
	float WaveLength; // 0x0
	float Amplitude; // 0x4
	float Steepness; // 0x8
	FVector Direction; // 0xc
	FVector2D WaveVector; // 0x18
	float WaveSpeed; // 0x20
	float WKA; // 0x24
	float Q; // 0x28
	float PhaseOffset; // 0x2c
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FAnimationNotifyTask {
	EAnimationNotifyType NotifyType; // 0x0
	TArray<FGenericParam> NotifyParam; // 0x8
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FSplineSoundAttenuationSettings {
	float SplineRangeX; // 0x0
	float SplineRangeY; // 0x4
	FSoundAttenuationSettings SplineAttenuationSettings; // 0x8
};

struct FMsgRecord_Drop : FMsgRecordBase {
	FString PlayerName; // 0x10
	FVector Location; // 0x20
};

struct FArtofWarItem {
	int32_t PerkIndex; // 0x0
	float LearnPercent; // 0x4
	int32_t LearnExp; // 0x8
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FProtectTimeRange {
	FDateTime ProtectHeadDate; // 0x0
	FDateTime StartHour; // 0x8
	FDateTime EndHour; // 0x10
	FDateTime OtherStartHour; // 0x18
	FDateTime OtherEndHour; // 0x20
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FHairMaterialConstraints {
	FHairBendConstraint BendConstraint; // 0x0
	FHairStretchConstraint StretchConstraint; // 0x98
	FHairCollisionConstraint CollisionConstraint; // 0x130
};

struct FCameraFocusSettings {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
	FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
	char bDrawDebugFocusPlane : 1; // 0x40
	FColor DebugFocusPlaneColor; // 0x44
	char bSmoothFocusChanges : 1; // 0x48
	float FocusSmoothingInterpSpeed; // 0x4c
	float FocusOffset; // 0x50
};

struct FWaterBodyWeightmapSettings {
	float FalloffWidth; // 0x0
	float EdgeOffset; // 0x4
	UTexture2D* ModulationTexture; // 0x8
	float TextureTiling; // 0x10
	float TextureInfluence; // 0x14
	float Midpoint; // 0x18
	float FinalOpacity; // 0x1c
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FDeathDropItemData {
	int32_t DropWrapperId; // 0x0
	float DropWrapperFactor; // 0x4
	float DropWrapperWeight; // 0x8
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FDamageExploitEntry {
	int32_t DropWrapperId; // 0x0
	float DropWrapperFactor; // 0x4
	float DamageMultilier; // 0x8
	float ExploitQuantityMultilier; // 0xc
	UDamageType* DamageTypeParent; // 0x10
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FScalableFloat {
	float Value; // 0x0
	FCurveTableRowHandle Curve; // 0x8
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FChaosPhysicsCollisionInfo {
	UPrimitiveComponent* Component; // 0x0
	UPrimitiveComponent* OtherComponent; // 0x8
	FVector Location; // 0x10
	FVector Normal; // 0x1c
	FVector AccumulatedImpulse; // 0x28
	FVector Velocity; // 0x34
	FVector OtherVelocity; // 0x40
	FVector AngularVelocity; // 0x4c
	FVector OtherAngularVelocity; // 0x58
	float Mass; // 0x64
	float OtherMass; // 0x68
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FStructureMusicInfo {
	FName ComponentTagName; // 0x0
	FName SoundID; // 0x8
	FName AnotherSoundID; // 0x10
};

struct FAO_Parameters {
	FString EnableAO_4_402B20584E745E3C12F1B7AF7AA87854; // 0x0
	FString AOEnableMaterial_5_CC7E87EA478E0E374391B688FD73F056; // 0x10
	FString AOEnableTwoSideGeometry_6_C6D7C81641885C9241D31F8F7FDB1BFD; // 0x20
	FString AOSPP_10_2666C0F2490AC980438465B1B37CDDDC; // 0x30
	FString AODenoiserHistoryConvolutionSampleCount_13_50EF88A94EC31AFC5F939FA82C735B40; // 0x40
};

struct FLightningPattern {
	TArray<FVector> Points; // 0x0
	float Length; // 0x20
	FLightningSparkData SparkData; // 0x28
};

struct FBasicParticleData {
	FVector position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FMagicLeapPlaneResult {
	FVector PlanePosition; // 0x0
	FRotator PlaneOrientation; // 0xc
	FRotator ContentOrientation; // 0x18
	FVector2D PlaneDimensions; // 0x24
	TArray<EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30
	FGuid ID; // 0x40
	FGuid InnerID; // 0x50
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FMsgRecord_LoseXianChengOwner : FMsgRecordBase {
	int32_t XianChengKey; // 0x10
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FAnimalsIdleAnims {
	UAimOffsetBlendSpace* AO; // 0x0
	FAnimalsIdlePoseAnims IdlePoseAnims; // 0x8
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FSSGI_Parameters {
	FString EnableSSGI_4_C294043E4CB2B46CA45BF99212AA105C; // 0x0
	FString HalfResSSGI_5_5FA2CB274DBF837A03F3C9A50E1ADC99; // 0x10
	FString SSGIQuality_6_B72077DC4A7D2BAEA26241A31589324F; // 0x20
};

struct FGroomComponentInstance {
	UGroomComponent* GroomComponent; // 0x0
	FName SocketToAttachTo; // 0x8
	FVector LocationOffset; // 0x10
	FRotator RotatorOffset; // 0x1c
	TMap<FName, FMaterialParamGroup> ApplyRootMaterialParams; // 0x28
};

struct FDisable {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_D94EF156432B307677D00680EBDF73B8; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_D6D0FFFF4CE6CCAFADA97E8F86AF1866; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_96E0621447558B5C83E4DE968475A475; // 0xcc0
	FDataType_Support DataTypeSupport_319_ED1531394D2DB4B27AA1D6ACE79150FD; // 0x1230
};

struct FGameRecordData {
	FString DataName; // 0x0
	char bShouldShowGameRecordData : 1; // 0x10
	FColor ShowColor; // 0x14
};

struct FWaterBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FPreviewCharacterStruct {
	TWeakObjectPtr<ACharacter> PreviewCharacter; // 0x0
	TWeakObjectPtr<AActor> PreviewActor; // 0x8
	TWeakObjectPtr<USkeletalMeshComponent> PreviewMesh; // 0x10
	TArray<TWeakObjectPtr<USceneComponent>> PreviewComponents; // 0x18
	TArray<TWeakObjectPtr<AActor>> PreviewSubActors; // 0x28
	TWeakObjectPtr<ASceneCapture2D> PreviewSceneCapture2D; // 0x38
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FGameplayCueTranslationManager {
	TArray<FGameplayCueTranslatorNode> TranslationLUT; // 0x0
	TMap<FName, FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10
	UGameplayTagsManager* TagManager; // 0x60
};

struct FAchievementDamageMultiply {
	FString DamageMultiplyName; // 0x0
	float DamageMultiply; // 0x10
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FRecastNavMeshGenerationProperties {
	int32_t TilePoolSize; // 0x0
	float TileSizeUU; // 0x4
	float CellSize; // 0x8
	float CellHeight; // 0xc
	float AgentRadius; // 0x10
	float AgentHeight; // 0x14
	float AgentMaxSlope; // 0x18
	float AgentMaxStepHeight; // 0x1c
	float MinRegionArea; // 0x20
	float MergeRegionSize; // 0x24
	float MaxSimplificationError; // 0x28
	int32_t TileNumberHardLimit; // 0x2c
	ERecastPartitioning RegionPartitioning; // 0x30
	ERecastPartitioning LayerPartitioning; // 0x31
	int32_t RegionChunkSplits; // 0x34
	int32_t LayerChunkSplits; // 0x38
	char bSortNavigationAreasByCost : 1; // 0x3c
	char bPerformVoxelFiltering : 1; // 0x3c
	char bMarkLowHeightAreas : 1; // 0x3c
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x3c
	char bFilterLowSpanSequences : 1; // 0x3c
	char bFilterLowSpanFromTileCache : 1; // 0x3c
	char bFixedTilePoolSize : 1; // 0x3c
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x100
	int32_t ChainLength; // 0x110
	EAxis ChainBoneAxis; // 0x114
	char bInvertChainBoneAxis : 1; // 0x115
	char bLimitStretch : 1; // 0x115
	char bLimitRotation : 1; // 0x115
	char bUsePlanarLimit : 1; // 0x115
	char bActorSpaceFakeVel : 1; // 0x115
	char bReorientParentToChild : 1; // 0x115
	float MaxDeltaTime; // 0x118
	float RelaxationSpeedScale; // 0x11c
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120
	FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8
	TArray<FRotationLimit> RotationLimits; // 0x1d8
	TArray<FVector> RotationOffsets; // 0x1e8
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8
	float StretchLimit; // 0x208
	FVector FakeVelocity; // 0x20c
	FBoneReference BaseJoint; // 0x218
	float LastBoneRotationAnimAlphaBlend; // 0x228
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FKeyBind {
	FKey Key; // 0x0
	FString Command; // 0x18
	char Control : 1; // 0x28
	char Shift : 1; // 0x28
	char Alt : 1; // 0x28
	char Cmd : 1; // 0x28
	char bIgnoreCtrl : 1; // 0x28
	char bIgnoreShift : 1; // 0x28
	char bIgnoreAlt : 1; // 0x28
	char bIgnoreCmd : 1; // 0x28
	char bDisabled : 1; // 0x29
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FMagicLeapRaycastQueryParams {
	FVector position; // 0x0
	FVector Direction; // 0xc
	FVector UpVector; // 0x18
	int32_t Width; // 0x24
	int32_t Height; // 0x28
	float HorizontalFovDegrees; // 0x2c
	bool CollideWithUnobserved; // 0x30
	int32_t UserData; // 0x34
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FGlobalMapActorMap {
	TMap<int32_t, AGlobalMapActor*> GlobalMapActorMap; // 0x0
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FWorldRankConfig : FTableRowBase {
	EWorldRankType RankType; // 0x8
	char bEnable : 1; // 0x9
	FString RankName; // 0x10
	FText ShowName; // 0x20
	ERankSettlementType SettlementType; // 0x38
	int32_t SettlementDay; // 0x3c
	int32_t SettlementHour; // 0x40
	char bGlobalRank : 1; // 0x44
	UUserWidget* HeaderWidgetClass; // 0x48
	UWorldRankItemSlot* RankItemSlotClass; // 0x50
	TArray<FRewardItemList> RankRewards; // 0x58
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FBGMData {
	FBGMDetailData BGM[0xa]; // 0x0
};

struct FWeaponWorldTraceInfo {
	FVector TraceStart; // 0x0
	FVector TraceEnd; // 0xc
	FVector BoxSize; // 0x18
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FAnimPose {
	TArray<FAnimBoneData> AdditivePose; // 0x10
};

struct FUIWSGerstnerWaveOctave {
	int32_t NumWaves; // 0x0
	float AmplitudeScale; // 0x4
	float MainDirection; // 0x8
	float SpreadAngle; // 0xc
	bool bUniformSpread; // 0x10
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FCharacterMeshData {
	TArray<FCharacterFeatureMorphTargetData> DefaultMorphTarget; // 0x0
	FCharacterMeshLODMaterialConfig MeshMaterials[0x3]; // 0x10
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t vertexcount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FGameplayAbilityBindInfo {
	EGameplayAbilityInputBinds Command; // 0x0
	UGameplayAbility* GameplayAbilityClass; // 0x8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FStructureMiniMapData {
	FString POIStyleID; // 0x0
	FVector Location; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FOnStuRecallBuyGoods {
	int32_t res; // 0x0
};

struct FCropRowBase : FTableRowBase {
	int32_t CropID; // 0x8
	ASGStructure* CropClass; // 0x10
};

struct FEnvironmentMaterialData {
	FName ChangedName; // 0x0
	float FromMinNum; // 0x8
	float ToMaxNum; // 0xc
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FGameplayTagResponseTableEntry {
	FGameplayTagReponsePair Positive; // 0x0
	FGameplayTagReponsePair Negative; // 0x28
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FPreAttackConfig {
	UAnimMontage* PreAttackMontage; // 0x0
	float PreAttackDistance; // 0x8
	float PreStopAttackDistance; // 0xc
	float PreAttackCoolingTime; // 0x10
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FSGAISenseConfig_Hearing {
	float HearingRange; // 0x0
	FColor DebugColor; // 0x4
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FAnimalsTurnAnims {
	UAnimMontage* TurnInPlace_L_Anim; // 0x0
	UAnimMontage* TurnInPlace_R_Anim; // 0x8
	UAnimMontage* Turn_L90_Anim; // 0x10
	UAnimMontage* Turn_R90_Anim; // 0x18
	UAnimMontage* Turn_L180_Anim; // 0x20
	UAnimMontage* Turn_R180_Anim; // 0x28
	UAnimMontage* AttackTurn_L180Anim; // 0x30
	UAnimMontage* AttackTurn_R180Anim; // 0x38
};

struct FStructureTrapCharacters {
	ASG_AnimalsCharacter* TrapCharacterTemplate; // 0x0
	USGItem* GiveItem; // 0x8
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FAbilityTriggerData {
	FGameplayTag TriggerTag; // 0x0
	EGameplayAbilityTriggerSource TriggerSource; // 0x8
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FGlobalMapActorArray {
	TArray<AGlobalMapActor*> GlobalMapActorArray; // 0x0
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FAnimalsIdlePoseAnims {
	UAnimSequence* IdleAnim; // 0x0
	UBlendSpaceBase* IdleBS; // 0x8
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FDiKuaiOccupyInfo {
	int32_t DiKuaiId; // 0x0
	TMap<int32_t, bool> GuanAiMap; // 0x8
	TMap<int32_t, FAllianceGuanAiInfo> AllianceGuanAiMap; // 0x58
	char bOccupy : 1; // 0xa8
	FGuid OccupyGuildUid; // 0xac
};

struct FHuangLiEffectUnlock {
	char UnlockFlag; // 0x0
	TArray<FHuangLiUnlockInfo> UnlockInfoArray; // 0x8
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x38
	FRotator Rotation; // 0x44
	float Radius; // 0x50
	float Length; // 0x54
};

struct FHairConfigData {
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x0
	USGItem* HairItem; // 0x28
};

struct FNews_GeneralHungry : FNewsBase {
	FString GeneralName; // 0x18
	AActor* GeneralTemplate; // 0x28
	FGuid ChunkId; // 0x30
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FActiveGameplayCue : FFastArraySerializerItem {
	FGameplayTag GameplayCueTag; // 0xc
	FPredictionKey PredictionKey; // 0x18
	FGameplayCueParameters Parameters; // 0x28
	bool bPredictivelyRemoved; // 0xe0
};

struct FInputActionKeyMappingConfig {
	EKeyMappingButtonType ButtonType; // 0x0
	FInputActionKeyMapping ActionKeyMapping; // 0x8
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FAIFavoriteFood : FTableRowBase {
	USGItem* ItemClass; // 0x8
	TArray<EVehicleType> VehicleTypes; // 0x10
	EAnimalQualityType FoodQualityType; // 0x20
	float AddHungerValue; // 0x24
	float AddHPValue; // 0x28
	float AddStunValue; // 0x2c
	float AddHealthValue; // 0x30
	float SplitHealthRatioPregnancy; // 0x34
	float AddTameValue; // 0x38
	float AddExpValue; // 0x3c
	float SplitExpRatioPregnancy; // 0x40
};

struct FGeneralStructureSeat {
	char bIsSeat : 1; // 0x0
	char bIsSpawnInClient : 1; // 0x0
	FGuid ChunkUid; // 0x4
	FString CharacterName; // 0x18
	FCreateInfo CreateInfo; // 0x28
	int32_t EquipItem[0x4]; // 0x1a8
	TArray<int32_t> CraftItem; // 0x1b8
	float HandMakingTimeMul; // 0x1c8
	float SkillMul; // 0x1cc
	float CurrentHunger; // 0x1d0
	FDateTime StartSeatTime; // 0x1d8
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FSubmixEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
	float DryLevel; // 0x14
	bool bFilterEnabled; // 0x18
	EStereoDelayFiltertype FilterType; // 0x19
	float FilterFrequency; // 0x1c
	float FilterQ; // 0x20
};

struct FPassengerAnimsConfig {
	UAnimSequence* DefaultAnim; // 0x0
	UBlendSpace* DefaultMoveBS; // 0x8
};

struct FCraftEntries {
	TArray<USGPerk*> PerkEntries; // 0x0
	TArray<USGCraftPerkGroup*> CraftEntries; // 0x10
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FTattooConfigDataMap {
	TMap<FName, FTattooConfigData> TattooConfigMap; // 0x0
};

struct FAbilityTaskDebugMessage {
	UGameplayTask* FromTask; // 0x0
	FString Message; // 0x8
};

struct FWaterBodyHeightmapSettings {
	EWaterBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FWaterFalloffSettings FalloffSettings; // 0x4
	FWaterBrushEffects Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FSellerRefreshTimeInfo {
	FDateTime NextCapitalRefreshTime; // 0x0
	FDateTime NextGoodsRefreshTime; // 0x8
	int32_t CapitalHoursInterval; // 0x10
	int32_t GoodsHoursInterval; // 0x14
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FActivateRequireData {
	USGItem* FuelItem; // 0x0
	float ConsumeInterval; // 0x8
	USGItem* ConsumedGiveItem; // 0x10
};

struct FLadderParams {
	char Index; // 0x0
	char bEnable : 1; // 0x1
	char bIsExit : 1; // 0x1
	UAnimSequence* LadderAsset; // 0x8
	UAnimMontage* LadderMontage; // 0x10
	FVector AnimatedStartOffset; // 0x18
	FVector AnimatedDesiredOffset; // 0x24
	FRotator AnimatedDesiredRotation; // 0x30
	char bIsLooping : 1; // 0x3c
	TArray<FName> MontageSlotsName; // 0x40
	FVector2D InitPlayPositionRateData; // 0x50
	FAlphaBlend BlendIn; // 0x58
	FAlphaBlend BlendOut; // 0x88
	FVector2D InitBlendOutData; // 0xb8
	FVector2D InitBlendTriggerData; // 0xc0
	TArray<FVector2D> RightFootPositions; // 0xc8
	TArray<FVector2D> AllowStopPositions; // 0xd8
	FVector2D AdaptiveLocationRange; // 0xe8
	FVector2D AdaptiveRotationRange; // 0xf0
	FTransform AnimationInitialTransform; // 0x100
	TMap<EAnimCurve, FRuntimeFloatCurve> SimulateRuntimeFloatCurves; // 0x130
};

struct FFunctionResourceArray {
	TArray<FFunctionResourceEntry> FunctionResourceArray; // 0x0
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FOfficalSealInfo {
	int32_t Type; // 0x0
	int32_t ID; // 0x4
	FGuid GuildUid; // 0x8
	FString GuildName; // 0x18
	FGuid AllianceUid; // 0x28
	FString AllianceName; // 0x38
	int32_t JunId; // 0x48
};

struct FNetTaxRevInfo {
	int32_t ServerId; // 0x0
	int32_t CityId; // 0x4
	int32_t OfficalJobTaxType; // 0x8
	int32_t TaxGold; // 0xc
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x600
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FCreateRoleCameraLevelData {
	float Distance; // 0x0
	TMap<FName, FCreateRoleCameraData> CameraDatas; // 0x8
};

struct FGameplayEffectAttributeCaptureSpec {
	FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x0
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FOccupySellInfo {
	int32_t OccupyTotalSellNum; // 0x0
	float OccupyTotalSellPrice; // 0x4
	int32_t OccupyTotalSellDay; // 0x8
};

struct FAnimalSpeciesConfig {
	ASG_AnimalsCharacter* AnimalTemplate; // 0x0
	ASG_AnimalsCharacter* AnimalTemplate_Female; // 0x8
	TArray<UMaterialInstance*> OverrideAnimalMaterials; // 0x10
};

struct FGameplayEffectModifiedAttribute {
	FGameplayAttribute Attribute; // 0x0
	float TotalMagnitude; // 0x38
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FWorshipConfig {
	float MulAdd; // 0x0
	EWorshipType WorshipType; // 0x4
	int32_t OneDayCost; // 0x8
	int32_t ThreeDayCost; // 0xc
	int32_t FiveDayCost; // 0x10
	int32_t SevenDayCost; // 0x14
	FText Info; // 0x18
	TSoftObjectPtr<UTexture2D> icon; // 0x30
};

struct FImageFilterParamConfig {
	FImageFilterMaterialParam Param[0x2]; // 0x0
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x0
	bool BoolTrue; // 0x1
	char Bitfield0 : 1; // 0x2
	char Bitfield1 : 1; // 0x2
	char Bitfield2Set : 1; // 0x2
	char Bitfield3 : 1; // 0x2
	char Bitfield4Set : 1; // 0x2
	char Bitfield5Set : 1; // 0x2
	char Bitfield6 : 1; // 0x2
	char Bitfield7Set : 1; // 0x2
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FGuildEventModifyConflictReplicated {
	EEventGuildType EventGuildType; // 0x0
	float ConflictValue; // 0x4
	float ConflictModifyValue; // 0x8
	int32_t OccupyModifyConflictCount; // 0xc
	float DelayRemainTime; // 0x10
	char bShouldNotify : 1; // 0x14
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FGameplayEventData {
	FGameplayTag EventTag; // 0x0
	AActor* Instigator; // 0x8
	AActor* Target; // 0x10
	UObject* OptionalObject; // 0x18
	UObject* OptionalObject2; // 0x20
	FGameplayEffectContextHandle ContextHandle; // 0x28
	FGameplayTagContainer InstigatorTags; // 0x40
	FGameplayTagContainer TargetTags; // 0x60
	float EventMagnitude; // 0x80
	FGameplayAbilityTargetDataHandle TargetData; // 0x88
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FServerAbilityRPCBatch {
	FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x0
	FPredictionKey PredictionKey; // 0x8
	FGameplayAbilityTargetDataHandle TargetData; // 0x18
	bool InputPressed; // 0x40
	bool Ended; // 0x41
	bool Started; // 0x42
};

struct FMsgClientGetOfficialSealInfos : FMessageBase {
	TArray<FOfficalSealInfo> OfficalSealInfos; // 0x8
};

struct FInviteJoinAllianceInfo {
	FGuid InviteAllianceUid; // 0x0
	FString InviteAllianceName; // 0x10
	FString InvitePlayerName; // 0x20
	FString InviteInfo; // 0x30
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FInAppPurchaseProductInfo2 {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DisplayName; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	float RawPrice; // 0x50
	FString CurrencyCode; // 0x58
	FString CurrencySymbol; // 0x68
	FString DecimalSeparator; // 0x78
	FString GroupingSeparator; // 0x88
	FString ReceiptData; // 0x98
	TMap<FString, FString> DynamicFields; // 0xa8
};

struct FGuildOnlineAwardData {
	int32_t AwardTime; // 0x0
	TArray<FGuildAwardItem> Items; // 0x8
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FRequestOccupyDetailInfo {
	FGuid GuildId; // 0x0
	FGuid AllianceId; // 0x10
	char bAllianceOwnerGuild : 1; // 0x20
	int32_t ServerId; // 0x24
};

struct FWaterBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FBuildPromotionImportWorkflowSettings {
	FEditorImportWorkflowDefinition Diffuse; // 0x0
	FEditorImportWorkflowDefinition Normal; // 0x20
	FEditorImportWorkflowDefinition StaticMesh; // 0x40
	FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60
	FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80
	FEditorImportWorkflowDefinition MorphMesh; // 0xa0
	FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0
	FEditorImportWorkflowDefinition Animation; // 0xe0
	FEditorImportWorkflowDefinition Sound; // 0x100
	FEditorImportWorkflowDefinition SurroundSound; // 0x120
	TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FGameplayEffectExecutionDefinition {
	UGameplayEffectExecutionCalculation* CalculationClass; // 0x0
	FGameplayTagContainer PassedInTags; // 0x8
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28
	TArray<UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x38
	TArray<FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FCameraTargets {
	FCameraSettings_Stance VelocityDirection; // 0x0
	FCameraSettings_Stance LookingDirection; // 0x78
	FCameraSettings_Stance Aiming; // 0xf0
	FCameraSettings Ragdoll; // 0x168
	FCameraSettings Climb; // 0x17c
};

struct FJianChuEffect : FTableRowBase {
	EJianChuType JianChuType; // 0x8
	FText JianChuName; // 0x10
	FText JianChuDesc; // 0x28
	TArray<FHuangLiEffect> HuangLiEffects; // 0x40
};

struct FWeatherRepInfo {
	EWeatherType ReplicateWeatherType; // 0x0
	float CurrentWeatherTotalDuration; // 0x4
	float CurrentWeatherTime; // 0x8
	char bFromCheat : 1; // 0xc
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FAnimalBabyInheritData {
	int32_t GenerationCount; // 0x0
	int32_t InheritLevel; // 0x4
	float InheritBaseQualityCorrection; // 0x8
	TArray<float> InheritAttributeCorrectionMul; // 0x10
	int32_t AttributeCorrectionRandomCount; // 0x20
	TArray<int32_t> InheritForbidPlacePerkIndexes; // 0x28
	TArray<int32_t> InheritRecessivePerkIndexes; // 0x38
	int32_t InheritVariationCount; // 0x48
	EAnimalFurColorType SkinColorType; // 0x4c
	int32_t InheritSkinHuaSeBaseIndex[0x2]; // 0x50
	int32_t InheritSkinHuaSeMaskIndex[0x2]; // 0x58
	float InheritStrongMorph; // 0x60
	float InheritThinMorph; // 0x64
	TArray<FAnimalGenealogyData> InheritGenealogyDatas; // 0x68
	FGuid InheritFatherChunkUid; // 0x78
	FGuid InheritMotherChunkUid; // 0x88
};

struct FDebug_Parameters {
	FString UseTextureLOD_14_736F43694CE688E814BF119F04BC733B; // 0x0
	FString NormalBias_15_8A32C7694BB9E814F5B79080A92D92FF; // 0x10
	FString DebugForceOpaque_16_C804BF5D4DD6036507DFF789796FA3D2; // 0x20
	FString DebugForceFullBuild_17_6FDE0EFC4C1DDE4558BFADAFC250953A; // 0x30
	FString DebugDisableTriangleCull_18_F6A8E355470D11CB81EAB8B19AC1C7A6; // 0x40
	FString DebugForceBuildMode_19_AB2BFAEB44E7BB8A8D5CCA99F330B428; // 0x50
	FString EnableReflectionDenoiser_20_12D307E54569217835508CB0D10A7977; // 0x60
	FString EnableShadowDenoiser_21_66089741487B775E6A06E499B3D14354; // 0x70
	FString EnableGIDenoiser_22_048015BE4ECE190E94DAC98FC43DBFBC; // 0x80
	FString ReflectionEnableMaterials_23_49932A5A461504BB59F75CB217B2162E; // 0x90
	FString EnableShaderCache_24_91CAA4D2402AA03FE3367E863E697898; // 0xa0
	FString PSOCacheSize_25_571245E8420E18F1C3A1D6B9173D8898; // 0xb0
	FString RTXSwitch_26_CF19681044E915DF3EE1B7A42E9CE572; // 0xc0
	float UseShaderWPO_32_EF11C3E64B117CFB7C16B0BAA7F5A01D; // 0xd0
	FString ParallelMeshBatchSize_66_DD9B821743F54A691D43C8A24A9BE556; // 0xd8
	FString BuildRayTracingMeshForCaustics_68_BDEEC918403656B6270A94A80C0DE5DB; // 0xe8
	FString ParallelMeshBatchSetup_56_86CA6095450FFE588738FC85344DC2FD; // 0xf8
	FString BatchMaterials_57_ED68CBEF4934516852BC45B44504F0C1; // 0x108
};

struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x0
	float ProjectionAngularTolerance; // 0x4
	float ProjectionLinearAlpha; // 0x8
	float ProjectionAngularAlpha; // 0xc
	float LinearBreakThreshold; // 0x10
	float AngularBreakThreshold; // 0x14
	FLinearConstraint LinearLimit; // 0x18
	FConeConstraint ConeLimit; // 0x34
	FTwistConstraint TwistLimit; // 0x54
	FLinearDriveConstraint LinearDrive; // 0x70
	FAngularDriveConstraint AngularDrive; // 0xbc
	char bDisableCollision : 1; // 0x108
	char bParentDominates : 1; // 0x108
	char bEnableProjection : 1; // 0x108
	char bEnableSoftProjection : 1; // 0x108
	char bAngularBreakable : 1; // 0x108
	char bLinearBreakable : 1; // 0x108
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FMsgRecord_EnterServer : FMsgRecordBase {
	FString CharacterName; // 0x10
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	int32_t ParticleFrequency; // 0x8
	char FirstTimeOnly : 1; // 0xc
	char LastTimeOnly : 1; // 0xc
	char UseReflectedImpactVector : 1; // 0xc
	char bUseOrbitOffset : 1; // 0xc
	FName CustomName; // 0x10
	TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18
};

struct FWorldRankContentBase {
	FString PlayerName; // 0x0
	int32_t PlayerLevel; // 0x10
};

struct FEyebrowData {
	float BrowAngle; // 0x0
	float BrowDepth; // 0x4
	float BrowHeight; // 0x8
	float BrowWidth; // 0xc
};

struct FMarketSellGoodsInfo {
	int32_t OrderID; // 0x0
	FDateTime SellTime; // 0x8
	EAuctionShopGoodsType GoodsType; // 0x10
	FString GoodsID; // 0x18
};

struct FSGFoodBoxInfo {
	int32_t FoodItemIndex; // 0x0
	EItemQuality ItemQuality; // 0x4
};

struct FActivityRankRule {
	int32_t RuleDay; // 0x0
	int32_t RuleHour; // 0x4
	int64_t BeginTimeTicks; // 0x8
	int64_t EndTimeTicks; // 0x10
	FString CurRankName; // 0x18
	int64_t LastBeginTimeTicks; // 0x28
	int64_t LastEndTimeTicks; // 0x30
	FString LastRankName; // 0x38
};

struct FGenericConfirmationParam {
	FString TitleText; // 0x0
	FString MessageText; // 0x10
	FString AcceptButtonText; // 0x20
	FString CancelButtonText; // 0x30
	float AutoKillTime; // 0x40
	float TickTimer; // 0x44
	char bShowAllBg : 1; // 0x48
	char bCheckItem : 1; // 0x48
	TArray<FRequireItems> CheckItems; // 0x50
	TWeakObjectPtr<USGInventoryComponent> CheckInventory; // 0x60
	char bEnterAccept : 1; // 0x68
	char bConfirmCheck : 1; // 0x68
	FString ConfirmCheckText; // 0x70
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FBattleAwardItem {
	USGItem* ItemClass; // 0x0
	int32_t DropNum; // 0x8
	EItemQuality Quality; // 0xc
	char NeedKillOrAssistKill : 1; // 0xd
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FMorphTargetSliderData {
	FVector2D SliderLimit; // 0x0
	FVector2D MorphTargetLimit; // 0x8
};

struct FTrafficGoodsSellerLvInfo {
	float Exp; // 0x0
	int32_t Level; // 0x4
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FGameplayModifierEvaluatedData {
	FGameplayAttribute Attribute; // 0x0
	EGameplayModOp ModifierOp; // 0x38
	float Magnitude; // 0x3c
	FActiveGameplayEffectHandle Handle; // 0x40
	bool IsValid; // 0x48
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FVGOptionConfig {
	TSoftObjectPtr<UTexture2D> IconOption; // 0x0
	FText OptionText; // 0x28
	TArray<FVGOptionProp> PropConfigArray; // 0x40
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	int32_t Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
};

struct FToolTipsItemTypeTable : FTableRowBase {
	FText TitleText; // 0x8
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FWeaponScatteringData {
	char bUseCrosshairs : 1; // 0x0
	char bUseCalculateScattering : 1; // 0x0
	float InterpSpeed; // 0x4
	float RiderInterpSpeed; // 0x8
	float RotationInterpSpeed; // 0xc
	float RiderRotationInterpSpeed; // 0x10
	float MinScatteringAngle; // 0x14
	float MaxScatteringAngle; // 0x18
	float MovingMaxScatteringAngleAdd; // 0x1c
	FVector2D RotationScatteringAngleRange; // 0x20
	float RiderMinScatteringAngle; // 0x28
	float RiderMaxScatteringAngle; // 0x2c
	float RiderMovingMaxScatteringAngleAdd; // 0x30
	FVector2D RiderRotationScatteringAngleRange; // 0x34
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18
	FFrameRate TickResolution; // 0x38
	FMovieSceneSequenceID DeterministicSequenceID; // 0x40
	FMovieSceneFrameRange PlayRange; // 0x44
	FMovieSceneFrameRange FullPlayRange; // 0x54
	FMovieSceneFrameRange UnwarpedPlayRange; // 0x64
	FMovieSceneFrameRange PreRollRange; // 0x74
	FMovieSceneFrameRange PostRollRange; // 0x84
	int16_t HierarchicalBias; // 0x94
	bool bHasHierarchicalEasing; // 0x96
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98
	FGuid SubSectionSignature; // 0xb8
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xc8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FOccupyStructureGuildLevelSettings {
	TArray<FCraftResourceRequirement> PreventDecayRequirements; // 0x0
	int32_t PreventDecayGuildActivityPoint; // 0x10
	int32_t PreventDecayGAPImageIndex; // 0x14
	TArray<FProtectionRequirement> ProtectionRequirements; // 0x18
	int32_t ProtectionGuildActivityPoint; // 0x28
	int32_t ProtectionGAPImageIndex; // 0x2c
	TArray<FOccupyBuffRequirement> BuffRequirements; // 0x30
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FExploitScaleConfig {
	FFloatInterval ScaleRange; // 0x0
	float HealthMultiler; // 0x8
	float RecoverTimeMultiler; // 0xc
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FMaterialParamGroup {
	UMaterialInterface* Material; // 0x0
	TMap<FName, UTexture*> TextureParams; // 0x8
};

struct FServerToServerToken {
	FString AccountID; // 0x0
	FString NikeName; // 0x10
	int64_t UTCDateTime; // 0x20
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x280
	FButtonStyle RestoreButtonStyle; // 0x4f8
	FButtonStyle CloseButtonStyle; // 0x770
	FTextBlockStyle TitleTextStyle; // 0x9e8
	FSlateBrush ActiveTitleBrush; // 0xc58
	FSlateBrush InactiveTitleBrush; // 0xce0
	FSlateBrush FlashTitleBrush; // 0xd68
	FSlateColor BackgroundColor; // 0xdf0
	FSlateBrush OutlineBrush; // 0xe18
	FSlateColor OutlineColor; // 0xea0
	FSlateBrush BorderBrush; // 0xec8
	FSlateBrush BackgroundBrush; // 0xf50
	FSlateBrush ChildBackgroundBrush; // 0xfd8
};

struct FAnimalFarmConfig {
	ASG_AnimalsCharacter* AnimalTemplate; // 0x0
	USGItem* AnimalItemTemplate; // 0x8
	USkeletalMesh* OverrideAnimalMeshMale; // 0x10
	USkeletalMesh* OverrideAnimalMeshFemale; // 0x18
	TArray<UAnimMontage*> AnimalMontages; // 0x20
	UAnimMontage* DeathAnimalMontage; // 0x30
	UNiagaraSystem* MaleNiagaraAsset; // 0x38
	UNiagaraSystem* FemaleNiagaraAsset; // 0x40
	float AnimalBirthTime; // 0x48
	float AnimalDeathTime; // 0x4c
	float AnimalGrowTime; // 0x50
	float AnimalConsumeFoodInterval; // 0x54
	float AnimalConsumeFood; // 0x58
	float AnimalInitMood; // 0x5c
	float AnimalConsumeMoodInterval; // 0x60
	float AnimalConsumeMood; // 0x64
	float AnimalConsumeMoodFoodStarvation; // 0x68
	float AnimalConsumeMoodEnvironmentBad; // 0x6c
	float AnimalConsumeMoodTooMuch; // 0x70
	float AnimalBaseBirth; // 0x74
	float AnimalBaseDeath; // 0x78
	float AnimalDeathByHealthMul; // 0x7c
	TMap<float, float> AnimalDeathByMoodMul; // 0x80
	float AnimalHealthInterval; // 0xd0
	float AnimalInitHealth; // 0xd4
	float AnimalMaxHealth; // 0xd8
	float AnimalNormalHealth; // 0xdc
	float AnimalBaseHealth; // 0xe0
	float AnimalHealthMul; // 0xe4
	float AnimalHealthSecondMul; // 0xe8
	float AnimalHealthMulAddEnvironmentFine; // 0xec
	float AnimalDropInterval; // 0xf0
	float AnimalBaseDropCount; // 0xf4
	float AnimalDropMul; // 0xf8
	float AnimalDropMulByLevel; // 0xfc
	int32_t AnimalDeathDropCount; // 0x100
	TArray<FAnimalFarmDropConifg> DropConifgs; // 0x108
	float AnimalDropCountMulEnvironmentBad; // 0x118
	char bEnableDeathDropCountByMood : 1; // 0x11c
	TMap<float, float> AnimalDropCountMulByMood; // 0x120
	TArray<USGItem*> LikeFoodTemplates; // 0x170
};

struct FAnimalWatchDataEntry {
	int32_t AnimalLifeTime; // 0x0
	int32_t AnimalLevel; // 0x4
	FString AnimalName; // 0x8
	ECharacterSex AnimalSex; // 0x18
	char bIsSpawn : 1; // 0x19
	TWeakObjectPtr<ASG_AnimalsCharacter> WatchCharacter; // 0x1c
};

struct FMapAmbientSoundData : FTableRowBase {
	FString AmbientSoundID; // 0x8
	TArray<FString> AdditiveAmbientSoundID; // 0x18
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FMsgRecord_StructureBannerEffectOwner : FMsgRecordBase {
	FString OtherGuildName; // 0x10
	int32_t EffectPrestigeValue; // 0x20
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FProcMeshVertex {
	FVector position; // 0x0
	FVector Normal; // 0xc
	FProcMeshTangent Tangent; // 0x18
	FColor Color; // 0x28
	FVector2D UV0; // 0x2c
	FVector2D UV1; // 0x34
	FVector2D UV2; // 0x3c
	FVector2D UV3; // 0x44
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FClothMaskTextureArray {
	TArray<UTexture2D*> Textures; // 0x0
};

struct FFilm {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_1FF18AE34628A2E7E3B9D1A3B90943A2; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_5A2B981B4143CD453F43BABB3D5202F6; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_87CE5EF04E423A2573F0718792B9B575; // 0xcc0
	FDataType_Support DataTypeSupport_319_6F9BCE734E712BCA043CC89EFAC55DE2; // 0x1230
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FTimeStateSetting {
	FName SoundID; // 0x0
	FVector2D TimeStateRange; // 0x8
};

struct FSimulatedRootMotionReplicatedMove {
	double Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FSplineMeshParams {
	FVector StartPos; // 0x0
	FVector StartTangent; // 0xc
	FVector2D StartScale; // 0x18
	float StartRoll; // 0x20
	FVector2D StartOffset; // 0x24
	FVector EndPos; // 0x2c
	FVector2D EndScale; // 0x38
	FVector EndTangent; // 0x40
	float EndRoll; // 0x4c
	FVector2D EndOffset; // 0x50
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FStatusPostProcess {
	int32_t Index; // 0x0
};

struct FHairData {
	FName HairName; // 0x0
	FLinearColor HairColor; // 0x8
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x160
	FBoneReference RootBone; // 0x170
	float Precision; // 0x180
	int32_t MaxIterations; // 0x184
	EBoneControlSpace EffectorTransformSpace; // 0x188
	EBoneRotationSource EffectorRotationSource; // 0x189
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FLandscapeAndFoliage_Parameter {
	FString EnableLandscapeDetectTextureStreaming_8_34CD37624CF32D930CE49B8AE1EDF932; // 0x0
	FString EnableLandscapeLODUpdateEveryFrame_9_5FA37320403A8777FE4A8FA2225C2F81; // 0x10
	FString EnableInstancedStaticMesh_10_F759681E42E05A6B2AC9FEA6EE2E717F; // 0x20
	FString EnableInstancedStaticMeshesCulling_11_DB7739364F5EED0508F78483F32D333D; // 0x30
	FString InstancedStaticMeshesCullingRadius_12_790EF6C34AB6F7B443A365B703D17049; // 0x40
	FString EnableLandscapeInRT_13_EB1398FC4CE59D76E6A49B9D289BA6A2; // 0x50
	FString InstancedStaticMeshesCullingAngle_16_6EB44C0E474474F85AD359B7B8A0B9BC; // 0x60
	FString InstancedStaticMeshesEvaluateWPO_22_3E0D1EF54BCDB5B2D1E1A48429415469; // 0x70
	FString InstancedStaticMeshesSimulationCount_23_3F44BC814B40CF9EB483F2A9D063BB0A; // 0x80
	FString ShadowUseBiasForSkipWPOEval_24_EE03629D4D672D9F32340FBB0ED1F0A9; // 0x90
	FString ShadowMaxBiasForInexactGeometry_25_50FA131B48D2AEE0BE24A1AAEBCC1205; // 0xa0
	FString AutoInstance_29_703C2F464F835FBA52AF74ABDEE8DC9D; // 0xb0
	FString AOUseBiasForSkipWPOEval_33_2006F3134F1344D7F76F8FAA1D641BBB; // 0xc0
	FString AOMaxBiasForInexactGeometry_34_C821B15B4E6AADD30289B4BBC8CE3C09; // 0xd0
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FArtofWar {
	int32_t PerkIndex; // 0x0
	int32_t AWLevel; // 0x4
	int32_t AWExp; // 0x8
};

struct FXbox {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_7E4DC0424931B31C9DF0779DC71B119B; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_E040C93F4DA73BF710F794BF29AA50B6; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_79EC232848BAB964A67DDB9C114B7FDA; // 0xcc0
	FDataType_Support DataTypeSupport_319_494E11E145D7CB4FE9D0638B520247FA; // 0x1230
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FSetPlayerTaskInfo {
	TWeakObjectPtr<ASGPlayerCharacter> Player; // 0x0
	ESetPlayerTaskInfoStep SetPlayerTaskInfoStep; // 0x8
	int32_t SoliderType; // 0xc
	int32_t PerkIndex; // 0x10
};

struct FSessionNameLocalization : FTableRowBase {
	FText SessionName; // 0x8
};

struct FTextureLODGroup {
	TextureGroup Group; // 0x0
	int32_t LODBias; // 0xc
	int32_t LODBias_Smaller; // 0x10
	int32_t LODBias_Smallest; // 0x14
	int32_t NumStreamedMips; // 0x1c
	TextureMipGenSettings MipGenSettings; // 0x20
	int32_t MinLODSize; // 0x24
	int32_t MaxLODSize; // 0x28
	int32_t MaxLODSize_Smaller; // 0x2c
	int32_t MaxLODSize_Smallest; // 0x30
	int32_t OptionalLODBias; // 0x34
	int32_t OptionalMaxLODSize; // 0x38
	FName MinMagFilter; // 0x40
	FName MipFilter; // 0x48
	ETextureMipLoadOptions MipLoadOptions; // 0x50
	bool DuplicateNonOptionalMips; // 0x51
	float Downscale; // 0x54
	ETextureDownscaleOptions DownscaleOptions; // 0x58
	int32_t VirtualTextureTileCountBias; // 0x5c
	int32_t VirtualTextureTileSizeBias; // 0x60
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FGameplayAbilityActorInfo {
	TWeakObjectPtr<AActor> OwnerActor; // 0x8
	TWeakObjectPtr<AActor> AvatarActor; // 0x10
	TWeakObjectPtr<APlayerController> PlayerController; // 0x18
	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent; // 0x20
	TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent; // 0x28
	TWeakObjectPtr<UAnimInstance> AnimInstance; // 0x30
	TWeakObjectPtr<UMovementComponent> MovementComponent; // 0x38
	FName AffectedAnimInstanceTag; // 0x40
};

struct FFollicleMaskOptions {
	UGroomAsset* Groom; // 0x0
	EFollicleMaskChannel Channel; // 0x8
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FAnimalsTransitions {
	TMap<EAnimalsStanceType, UAnimMontage*> TMap_StanceTransitionMontages; // 0x0
	TMap<EAnimalsStanceType, UAnimMontage*> TMap_StanceQuickTransitionMontages; // 0x50
	TMap<EAnimalsBehaviorType, FAnimalsCustomBehavior> TMap_BehaviorTransitionMontages; // 0xa0
	UAnimMontage* GetUpFromFront; // 0xf0
	UAnimMontage* GetUpFromBack; // 0xf8
	UAnimMontage* Neigh; // 0x100
	FCustomMontageData GaitDownData; // 0x108
	FCustomMontageData GaitUpData; // 0x120
};

struct FGameplayEffectSpecForRPC {
	UGameplayEffect* Def; // 0x0
	TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8
	FGameplayEffectContextHandle EffectContext; // 0x18
	FGameplayTagContainer AggregatedSourceTags; // 0x30
	FGameplayTagContainer AggregatedTargetTags; // 0x50
	float Level; // 0x70
	float AbilityLevel; // 0x74
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FCharacterStatisticsInfo {
	int32_t CollectBarkNum; // 0x0
	int32_t CollectBranchesNum; // 0x4
	int32_t CollectHardwoodNum; // 0x8
	int32_t CollectIntactwoodNum; // 0xc
	int32_t CollectRarewoodNum; // 0x10
	int32_t CollectGravelNum; // 0x14
	int32_t CollectStoneNum; // 0x18
	int32_t CollectIntactstoneNum; // 0x1c
	int32_t CollectRarestoneNum; // 0x20
	int32_t CollectSandNum; // 0x24
	int32_t CollectClayNum; // 0x28
	int32_t CollectKaolinNum; // 0x2c
	int32_t CollectThatchNum; // 0x30
	int32_t CollectLocustNum; // 0x34
	int32_t CollectChrysanthemumNum; // 0x38
	int32_t CollectAconitumNum; // 0x3c
	int32_t CollectMeatNum; // 0x40
	int32_t CollectRoughhideNum; // 0x44
	int32_t CollectExquisitehideNum; // 0x48
	int32_t CollectPerfecthideNum; // 0x4c
	int32_t CollectRarehideNum; // 0x50
	int32_t CollectBeastBonesNum; // 0x54
	int32_t CollectBeastTendonNum; // 0x58
	int32_t CollectBeastHornsNum; // 0x5c
	int32_t CollectBeastHairNum; // 0x60
	int32_t CollectFangsNum; // 0x64
	int32_t CollectCopperNum; // 0x68
	int32_t CollectIconNum; // 0x6c
	int32_t CollectDarksteelNum; // 0x70
	int32_t CollectSideriteNum; // 0x74
	int32_t CollectSaltNum; // 0x78
	int32_t CollectRealgarNum; // 0x7c
	int32_t CollectCoalNum; // 0x80
	int32_t CollectSulfurNum; // 0x84
	int32_t CollectSaltpeterNum; // 0x88
	int32_t CollectLowcropsNum; // 0x8c
	int32_t CollectCommoncropsNum; // 0x90
	int32_t CollectHighcropsNum; // 0x94
	int32_t CollectPremiumcropsNum; // 0x98
	int32_t MultiKillNum; // 0x9c
	int32_t KillNotLowSelfLv5WolfNum; // 0xa0
	int32_t KillNotLowSelfLv5BearNum; // 0xa4
	int32_t KillNotLowSelfLv5RhinocerosNum; // 0xa8
	int32_t KillNotLowSelfLv5TigerNum; // 0xac
	int32_t KillNotLowSelfLv5ElephantNum; // 0xb0
	int32_t KillNotLowSelfLv5CrocodileNum; // 0xb4
	int32_t KillNotLowSelfLv5CheetahNum; // 0xb8
	int32_t KillNotLowSelfLv5PigNum; // 0xbc
	int32_t KillNotLowSelfLv5FoxNum; // 0xc0
	int32_t TameHorseNum; // 0xc4
	int32_t TameGeneralNum; // 0xc8
	int32_t MaxLevelGeneralNum; // 0xcc
	int32_t CreateStructureItemNum; // 0xd0
	int32_t CraftThirtyWeaponNum; // 0xd4
	int32_t CraftFiftyWeaponNum; // 0xd8
	int32_t CraftSeventyWeaponNum; // 0xdc
	int32_t CraftHundredWeaponNum; // 0xe0
	int32_t CraftThirtyArmorNum; // 0xe4
	int32_t CraftFiftyArmorNum; // 0xe8
	int32_t CraftSeventyArmorNum; // 0xec
	int32_t CraftHundredArmorNum; // 0xf0
	int32_t UnlockHuangLiNum; // 0xf4
	int32_t GuildLevel; // 0xf8
	bool bGuildLeader; // 0xfc
	int32_t ResourceCentresNum; // 0x100
	int32_t DeathNum; // 0x104
	int32_t FallDeathNum; // 0x108
	int32_t DeathByOppositeSexNum; // 0x10c
	int32_t PerkNum; // 0x110
	int32_t KillEnemyNum; // 0x114
	int32_t TroubleKillNum; // 0x118
	int32_t FourKillNum; // 0x11c
	int32_t FiveKillNum; // 0x120
	int32_t SixKillNum; // 0x124
	int32_t TenKillNum; // 0x128
	int32_t KillByFistNum; // 0x12c
	int32_t KillByFootNum; // 0x130
	int32_t RevengeNum; // 0x134
	float PutPoisonValue; // 0x138
	int32_t SameTimeBreakStructureNum; // 0x13c
	int32_t BreakStructureItemBySiegeNum; // 0x140
	int32_t KillEnemyBySiegeNum; // 0x144
	int32_t BreakSiegeNum; // 0x148
	int32_t BowHitFromHundredNum; // 0x14c
	int32_t BowSerialHitNum; // 0x150
	int32_t CrossBowHitFromHundredNum; // 0x154
	int32_t CrossBowSerialHitNum; // 0x158
	int32_t ShootWeaponHitHeadNum; // 0x15c
	int32_t ShootWeaponSerialHitHeadNum; // 0x160
	int32_t ShootWeaponHitKneeNum; // 0x164
	int32_t ShootWeaponKillBackNum; // 0x168
	int32_t ShootWeaponKillFrontNum; // 0x16c
	int32_t ProjectileKillAfterDeadNum; // 0x170
	int32_t ShieldSerialBlockNum; // 0x174
	int32_t BackShieldBlockArrowNum; // 0x178
	int32_t ShieldKillEnemyNum; // 0x17c
	int32_t MeleeWeaponSerialHitNum; // 0x180
	int32_t MeleeWeaponSerialBlockNum; // 0x184
	int32_t MeleeWeaponSingleHitEnemyNum; // 0x188
	int32_t MeleeWeaponKillHeadEnemyNum; // 0x18c
	int32_t MeleeWeaponBreakArmorNum; // 0x190
	int32_t MeleeWeaponFakerNum; // 0x194
	int32_t SingleKnockedDownEnemyNum; // 0x198
	int32_t KilledEnemyNumByCollision; // 0x19c
	int32_t MeleeWeaponHitTumblingEnemyWhenRiding; // 0x1a0
	int32_t BackKillEnemyNumWhenRiding; // 0x1a4
	int32_t ShooterWeaponKillEnemyNumWhenRiding; // 0x1a8
	int32_t KillRefugeesNum; // 0x1ac
	int32_t HitHeadKillNotLowSelfLv5HuangJinJunNum; // 0x1b0
	int32_t HitChestKillNotLowSelfLv5HuangJinJunNum; // 0x1b4
	int32_t HitLegKillNotLowSelfLv5HuangJinJunNum; // 0x1b8
	int32_t HitHeadKillNotLowSelfLv5ShuiZeiNum; // 0x1bc
	int32_t HitChestKillNotLowSelfLv5ShuiZeiNum; // 0x1c0
	int32_t HitLegKillNotLowSelfLv5ShuiZeiNum; // 0x1c4
	int32_t HitHeadKillNotLowSelfLv5HanJunNum; // 0x1c8
	int32_t HitChestKillNotLowSelfLv5HanJunNum; // 0x1cc
	int32_t HitLegKillNotLowSelfLv5HanJunNum; // 0x1d0
	int32_t HitHeadKillNotLowSelfLv5RobberNum; // 0x1d4
	int32_t HitChestKillNotLowSelfLv5RobberNum; // 0x1d8
	int32_t HitLegKillNotLowSelfLv5RobberNum; // 0x1dc
	int32_t HitHeadKillNotLowSelfLv5LieHuNum; // 0x1e0
	int32_t HitChestKillNotLowSelfLv5LieHuNum; // 0x1e4
	int32_t HitLegKillNotLowSelfLv5LieHuNum; // 0x1e8
	int32_t KillNotLowSelfLv5EliteNum; // 0x1ec
	int32_t KillNotLowSelfLv5BossNum; // 0x1f0
	int32_t JoinXianChengBattleCount; // 0x1f4
	int32_t JoinTaiShouBattleCount; // 0x1f8
	int32_t CookingFoodNum; // 0x1fc
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FGoodsSellerTimeHanle {
	FTimerHandle RefreshGoodsTimeHandle; // 0x0
	FTimerHandle RefreshCapitalTimeHandle; // 0x8
};

struct FGuildEventRegionData {
	FVector2D RegionMin; // 0x0
	FVector2D RegionMax; // 0x8
	char bCheckOccupyRange : 1; // 0x10
	char bDrawRegionData : 1; // 0x10
	FLinearColor DrawColor; // 0x14
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FGameplayEffectAttributeCaptureDefinition {
	FGameplayAttribute AttributeToCapture; // 0x0
	EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38
	bool bSnapshot; // 0x39
};

struct FHairInterpolationSettings {
	bool bOverrideGuides; // 0x0
	float HairToGuideDensity; // 0x4
	EHairInterpolationQuality InterpolationQuality; // 0x8
	EHairInterpolationWeight InterpolationDistance; // 0x9
	bool bRandomizeGuide; // 0xa
	bool bUseUniqueGuide; // 0xb
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FBlockInfo {
	UAnimMontage* BlockAnim; // 0x0
	float SPEvent_StartBlockMul; // 0x8
	float SPEvent_BlockHitMul; // 0xc
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FHairLODSettings {
	float CurveDecimation; // 0x0
	float VertexDecimation; // 0x4
	float AngularThreshold; // 0x8
	float ScreenSize; // 0xc
	float ThicknessScale; // 0x10
	bool bVisible; // 0x14
	EGroomGeometryType GeometryType; // 0x15
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FKeySettingConfig : FTableRowBase {
	EKeySettingType KeyType; // 0x8
	FText KeyName; // 0x10
	EKeyPressType PressType; // 0x28
	char bCanDuplicateKey : 1; // 0x29
	char bCanSetMouseButton : 1; // 0x29
};

struct FBattleGuildInfo {
	FGuid GuildUid; // 0x0
	FString GuildName; // 0x10
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FSGInputBlendPose {
	TArray<FInputBlendPose> LayerSetup; // 0x0
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FGPUSpriteResourceData {
	TArray<FColor> QuantizedColorSamples; // 0x0
	TArray<FColor> QuantizedMiscSamples; // 0x10
	TArray<FColor> QuantizedSimulationAttrSamples; // 0x20
	FVector4 ColorScale; // 0x30
	FVector4 ColorBias; // 0x40
	FVector4 MiscScale; // 0x50
	FVector4 MiscBias; // 0x60
	FVector4 SimulationAttrCurveScale; // 0x70
	FVector4 SimulationAttrCurveBias; // 0x80
	FVector4 SubImageSize; // 0x90
	FVector4 SizeBySpeed; // 0xa0
	FVector ConstantAcceleration; // 0xb0
	FVector OrbitOffsetBase; // 0xbc
	FVector OrbitOffsetRange; // 0xc8
	FVector OrbitFrequencyBase; // 0xd4
	FVector OrbitFrequencyRange; // 0xe0
	FVector OrbitPhaseBase; // 0xec
	FVector OrbitPhaseRange; // 0xf8
	float GlobalVectorFieldScale; // 0x104
	float GlobalVectorFieldTightness; // 0x108
	float PerParticleVectorFieldScale; // 0x10c
	float PerParticleVectorFieldBias; // 0x110
	float DragCoefficientScale; // 0x114
	float DragCoefficientBias; // 0x118
	float ResilienceScale; // 0x11c
	float ResilienceBias; // 0x120
	float CollisionRadiusScale; // 0x124
	float CollisionRadiusBias; // 0x128
	float CollisionTimeBias; // 0x12c
	float CollisionRandomSpread; // 0x130
	float CollisionRandomDistribution; // 0x134
	float OneMinusFriction; // 0x138
	float RotationRateScale; // 0x13c
	float CameraMotionBlurAmount; // 0x140
	EParticleScreenAlignment ScreenAlignment; // 0x144
	EParticleAxisLock LockAxisFlag; // 0x145
	FVector2D PivotOffset; // 0x148
	char bRemoveHMDRoll : 1; // 0x150
	float MinFacingCameraBlendDistance; // 0x154
	float MaxFacingCameraBlendDistance; // 0x158
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FMsgClientSystem : FMessageBase {
	FString SystemString; // 0x8
};

struct FLightningAttachment {
	EAttachType Type; // 0x0
	FVector Location; // 0x4
	FActorAttachParams ActorAttachParams; // 0x10
	FVector Direction; // 0x28
	EAttachVolumeType AttachVolumeType; // 0x34
	FAttachVolumeBox AttachVolumeBox; // 0x38
	FAttachVolumeCylinder AttachVolumeCylinder; // 0x44
	FAttachVolumeSphere AttachVolumeSphere; // 0x58
};

struct FAIAttackInfo {
	float AttackWeight; // 0x0
	float AttackCDTime; // 0x4
	float AttackDurationTime; // 0x8
	float MinAttackRange; // 0xc
	float MaxAttackRange; // 0x10
	float AttackHalfAngle; // 0x14
	float AttackTurnAroundRange; // 0x18
	float BaseDamageAmountMin; // 0x1c
	float BaseDamageAmountMax; // 0x20
	float BaseCollectionDamageAmountMin; // 0x24
	float BaseCollectionDamageAmountMax; // 0x28
	char bIsUseForCorpse : 1; // 0x2c
	char bIsSwimmingAttack : 1; // 0x2c
	char bIsRiderControlAttack : 1; // 0x2c
	float RiderControlAttackCostSP; // 0x30
	char bCanBeAbort : 1; // 0x34
	char bShouldCalcBrakingDistance : 1; // 0x34
	float AttackFailureTime; // 0x38
	TArray<FRandomWeightMontage> AttackAnims; // 0x40
	UBaseAIAttackState* AttackStateClass; // 0x50
	double LastEndAttackTime; // 0x58
};

struct FFontImportOptionsData {
	FString FontName; // 0x0
	float Height; // 0x10
	char bEnableAntialiasing : 1; // 0x14
	char bEnableBold : 1; // 0x14
	char bEnableItalic : 1; // 0x14
	char bEnableUnderline : 1; // 0x14
	char bAlphaOnly : 1; // 0x14
	EFontImportCharacterSet CharacterSet; // 0x18
	FString Chars; // 0x20
	FString UnicodeRange; // 0x30
	FString CharsFilePath; // 0x40
	FString CharsFileWildcard; // 0x50
	char bCreatePrintableOnly : 1; // 0x60
	char bIncludeASCIIRange : 1; // 0x60
	FLinearColor ForegroundColor; // 0x64
	char bEnableDropShadow : 1; // 0x74
	int32_t TexturePageWidth; // 0x78
	int32_t TexturePageMaxHeight; // 0x7c
	int32_t XPadding; // 0x80
	int32_t YPadding; // 0x84
	int32_t ExtendBoxTop; // 0x88
	int32_t ExtendBoxBottom; // 0x8c
	int32_t ExtendBoxRight; // 0x90
	int32_t ExtendBoxLeft; // 0x94
	char bEnableLegacyMode : 1; // 0x98
	int32_t Kerning; // 0x9c
	char bUseDistanceFieldAlpha : 1; // 0xa0
	int32_t DistanceFieldScaleFactor; // 0xa4
	float DistanceFieldScanRadiusScale; // 0xa8
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FClothConfig_Legacy {
	EClothingWindMethod_Legacy WindMethod; // 0x0
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34
	float SelfCollisionRadius; // 0x44
	float SelfCollisionStiffness; // 0x48
	float SelfCollisionCullScale; // 0x4c
	FVector Damping; // 0x50
	float Friction; // 0x5c
	float WindDragCoefficient; // 0x60
	float WindLiftCoefficient; // 0x64
	FVector LinearDrag; // 0x68
	FVector AngularDrag; // 0x74
	FVector LinearInertiaScale; // 0x80
	FVector AngularInertiaScale; // 0x8c
	FVector CentrifugalInertiaScale; // 0x98
	float SolverFrequency; // 0xa4
	float StiffnessFrequency; // 0xa8
	float GravityScale; // 0xac
	FVector GravityOverride; // 0xb0
	bool bUseGravityOverride; // 0xbc
	float TetherStiffness; // 0xc0
	float TetherLimit; // 0xc4
	float CollisionThickness; // 0xc8
	float AnimDriveSpringStiffness; // 0xcc
	float AnimDriveDamperStiffness; // 0xd0
};

struct FAnimalsModifyBoneData {
	FString AnimalTypeString; // 0x0
	TArray<FAnimalsModifyBoneSettings> AnimalsModifyBoneSettings; // 0x10
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FLegendGeneralDataInfo {
	int32_t LegendId; // 0x0
	char bActived : 1; // 0x4
	char ItemsActivedStates; // 0x5
	FDateTime ExpiredTime; // 0x8
	FGuid AssignedGeneralGuid; // 0x10
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FKawaiiPhysicsModifyBone {
	FBoneReference BoneRef; // 0x0
	int32_t ParentIndex; // 0x10
	TArray<int32_t> ChildIndexs; // 0x18
	FKawaiiPhysicsSettings PhysicsSettings; // 0x28
	FVector Location; // 0x44
	FVector PrevLocation; // 0x50
	FQuat PrevRotation; // 0x60
	FVector PoseLocation; // 0x70
	FQuat PoseRotation; // 0x80
	FVector PoseScale; // 0x90
	float LengthFromRoot; // 0x9c
	bool bDummy; // 0xa0
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FActorLayer {
	FName Name; // 0x0
};

struct FNavAvoidanceMask {
	char bGroup0 : 1; // 0x0
	char bGroup1 : 1; // 0x0
	char bGroup2 : 1; // 0x0
	char bGroup3 : 1; // 0x0
	char bGroup4 : 1; // 0x0
	char bGroup5 : 1; // 0x0
	char bGroup6 : 1; // 0x0
	char bGroup7 : 1; // 0x0
	char bGroup8 : 1; // 0x1
	char bGroup9 : 1; // 0x1
	char bGroup10 : 1; // 0x1
	char bGroup11 : 1; // 0x1
	char bGroup12 : 1; // 0x1
	char bGroup13 : 1; // 0x1
	char bGroup14 : 1; // 0x1
	char bGroup15 : 1; // 0x1
	char bGroup16 : 1; // 0x2
	char bGroup17 : 1; // 0x2
	char bGroup18 : 1; // 0x2
	char bGroup19 : 1; // 0x2
	char bGroup20 : 1; // 0x2
	char bGroup21 : 1; // 0x2
	char bGroup22 : 1; // 0x2
	char bGroup23 : 1; // 0x2
	char bGroup24 : 1; // 0x3
	char bGroup25 : 1; // 0x3
	char bGroup26 : 1; // 0x3
	char bGroup27 : 1; // 0x3
	char bGroup28 : 1; // 0x3
	char bGroup29 : 1; // 0x3
	char bGroup30 : 1; // 0x3
	char bGroup31 : 1; // 0x3
};

struct FHorizonDialogueSegmentInfoRubyTextStyle {
	TArray<FString> Text; // 0x0
	TArray<FSlateColor> ColorAndOpacity; // 0x10
	TArray<FSlateFontInfo> Font; // 0x20
	TArray<FVector2D> ShadowOffset; // 0x30
	TArray<FSlateColor> ShadowColorAndOpacity; // 0x40
	TArray<FMargin> PaddingMargin; // 0x50
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FOccupyDetailInfo {
	FGuid AllianceId; // 0x0
	FString AllianceName; // 0x10
	FString AllianceOwnerName; // 0x20
	char bAllianceOwnerGuild : 1; // 0x30
	FGuid GuildId; // 0x34
	FString GuildName; // 0x48
	FString GuildOwnerName; // 0x58
	int32_t GuildOwnerJob; // 0x68
	FString ImageJson; // 0x70
	int32_t GuildLevel; // 0x80
	int32_t GuildMemberCount; // 0x84
	int32_t OccupyGuanAiNum; // 0x88
	int32_t OccupyCityNum; // 0x8c
	int32_t OccupyXianChengNum; // 0x90
	TArray<float> TaxRate; // 0x98
	TArray<FWorship> Worships; // 0xa8
	int32_t ServerId; // 0xb8
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FStrengthTextureInfo {
	int32_t Level; // 0x0
	TSoftObjectPtr<UTexture2D> Texture2D; // 0x8
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FAnimalsMovingAnims {
	UBlendSpace* Moving_F_Arch; // 0x0
	UBlendSpace* Moving_Fkpd; // 0x8
	UBlendSpace* Moving_BkPd; // 0x10
};

struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0
	int32_t Caption; // 0x4
	int32_t MetaData; // 0x8
	int32_t Script; // 0xc
	int32_t Subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x38
	FRotator Rotation; // 0x44
	float X; // 0x50
	float Y; // 0x54
	float Z; // 0x58
};

struct FOfficalTaxInfo {
	int32_t ServerId; // 0x0
	int32_t CityId; // 0x4
	int32_t OfficalJobTaxType; // 0x8
	float TaxRate; // 0xc
	int64_t TotalTax; // 0x10
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FCrateItemSet {
	USGItem* Item; // 0x0
	float Percent; // 0x8
	float bBlueprintPercent; // 0xc
	int32_t MinAmount; // 0x10
	int32_t MaxAmount; // 0x14
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
	TArray<uint32_t> OriginalIndexes; // 0x140
	int32_t LODIndex; // 0x150
	int32_t SourceSection; // 0x154
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FBattleKillEventInfo {
	int32_t BeKilledType; // 0x0
	int32_t RealKillerType; // 0x4
	int32_t KillerGroupType; // 0x8
	FString KillerCharName; // 0x10
	int32_t BeKillerGroupType; // 0x20
	FString BeKillerCharName; // 0x28
	int32_t DamageIconIndex; // 0x38
	char IsDeadEvent : 1; // 0x3c
	char IsSuicide : 1; // 0x3c
};

struct FTimeline {
	ETimelineLengthMode LengthMode; // 0x0
	char bLooping : 1; // 0x1
	char bReversePlayback : 1; // 0x1
	char bPlaying : 1; // 0x1
	float Length; // 0x4
	float PlayRate; // 0x8
	float position; // 0xc
	TArray<FTimelineEventEntry> Events; // 0x10
	TArray<FTimelineVectorTrack> InterpVectors; // 0x20
	TArray<FTimelineFloatTrack> InterpFloats; // 0x30
	TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x40
	FDelegate TimelinePostUpdateFunc; // 0x50
	FDelegate TimelineFinishedFunc; // 0x60
	TWeakObjectPtr<UObject> PropertySetObject; // 0x70
	FName DirectionPropertyName; // 0x78
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FQuestReward {
	EQuestRewardType RewardType; // 0x0
	USGItem* RewardItem; // 0x8
	float RewardValue; // 0x10
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	FActorComponentDuplicatedObjectData UniqueTransientPackage; // 0x28
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x38
	TArray<UObject*> ReferencedObjects; // 0x48
	TArray<FName> ReferencedNames; // 0x58
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FCreateRoleCameraData {
	FVector RelativeLocation; // 0x0
	FVector2D FreeLocationHLimit; // 0xc
	FVector2D FreeLocationVLimit; // 0x14
	float FOV; // 0x1c
};

struct FMsgClientSetCheatAdminLevel : FMessageBase {
	int32_t AdminLevel; // 0x8
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FMorphTargetSliderDataMap {
	TMap<FName, FMorphTargetSliderData> MorphTargetSliderDataMap; // 0x0
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FActiveGameplayCueContainer : FFastArraySerializer {
	TArray<FActiveGameplayCue> GameplayCues; // 0x108
	UAbilitySystemComponent* Owner; // 0x120
};

struct FBattleGuildRelation2D {
	TArray<FBattleGuildRelation1D> BattleGuildRelationData; // 0x0
};

struct FAttachVolumeSphere {
	float Radius; // 0x0
};

struct FPatrolBehaviorPointData {
	FString DataTag; // 0x0
	TArray<FBehaviorPointTimeWeight> TimeWeight; // 0x10
	FRoadPathConfig RoadPathConfig; // 0x20
	FFormationSpawnData FormationConfig; // 0x70
	TArray<int32_t> HasNPCIndexs; // 0xa0
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FCameraCacheEntry {
	double Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FMsgClientGetOccupyDetailInfo : FMessageBase {
	TArray<FOccupyDetailInfo> OccupyDetailInfos; // 0x8
};

struct FMsgClientServerToken : FMessageBase {
	FString Token; // 0x8
	FString ServerToken; // 0x18
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FAIFleeConfigBase {
	int32_t MinLevel; // 0x0
	int32_t MaxLevel; // 0x4
	char bCanForceFlee : 1; // 0x8
	float StartForceFleeHPPercentage; // 0xc
	float EndForceFleeHPPercentage; // 0x10
	float FleeFixedDistance; // 0x14
	float FleeRandomDistance; // 0x18
	float EndFleeHPPercentage; // 0x1c
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FGameplayEffectExecutionScopedModifierInfo {
	FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0
	FGameplayTag TransientAggregatorIdentifier; // 0x40
	EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x48
	EGameplayModOp ModifierOp; // 0x49
	FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x50
	FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x1f8
	FGameplayTagRequirements SourceTags; // 0x200
	FGameplayTagRequirements TargetTags; // 0x240
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FGameplayAbilityTargetingLocationInfo {
	EGameplayAbilityTargetingLocationType LocationType; // 0x10
	FTransform LiteralTransform; // 0x20
	AActor* SourceActor; // 0x50
	UMeshComponent* SourceComponent; // 0x58
	UGameplayAbility* SourceAbility; // 0x60
	FName SourceSocketName; // 0x68
};

struct FStartAnims {
	UAnimMontage* WalkFwdStart; // 0x0
	UAnimMontage* WalkBwdStart; // 0x8
	UAnimMontage* WalkLeftStart; // 0x10
	UAnimMontage* WalkRightStart; // 0x18
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FAppearanceData {
	int32_t Feature; // 0x0
	FBodyData Body; // 0x4
	FHairData Hair; // 0x1c
	FMoustacheData Moustache; // 0x34
	TArray<FTattooDataGroup> Tattoo; // 0x50
	FEyebrowData Eyebrow; // 0x60
	FEyesData Eyes; // 0x70
	FNoseData Nose; // 0x8c
	FMouthData Mouth; // 0xb4
	FEarsData Ears; // 0xe8
	FCheekData Cheek; // 0x108
	FChinData Chin; // 0x128
	FNeckData Neck; // 0x150
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FAppearanceFloatWeightData {
	FVector2D RandomRange; // 0x0
	float Weight; // 0x8
};

struct FPlayerShowData {
	FText ShowName; // 0x0
	UAnimMontage* ShowMontage; // 0x18
	TSoftObjectPtr<UTexture2D> SelectedAnimIcon; // 0x20
	TSoftObjectPtr<UTexture2D> UnSelectedAnimIcon; // 0x48
	int32_t DataIndex; // 0x70
	FText Description; // 0x78
	char bNeedUnlock : 1; // 0x90
	TArray<FPlayerShowUnlockDetail> UnLockDatas; // 0x98
};

struct FAnimalFurComponentConfig {
	TArray<FAnimalFurComponentEntry> FurComponentEntries; // 0x0
	float RandomWeight; // 0x10
};

struct FWaterFalloffSettings {
	EWaterBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FSourceEffectFilterAudioBusModulationSettings {
	UAudioBus* AudioBus; // 0x0
	int32_t EnvelopeFollowerAttackTimeMsec; // 0x8
	int32_t EnvelopeFollowerReleaseTimeMsec; // 0xc
	float EnvelopeGainMultiplier; // 0x10
	ESourceEffectFilterParam FilterParam; // 0x14
	float MinFrequencyModulation; // 0x18
	float MaxFrequencyModulation; // 0x1c
	float MinResonanceModulation; // 0x20
	float MaxResonanceModulation; // 0x24
};

struct FPicLinkConfig {
	TSoftObjectPtr<UTexture2D> PicTexture; // 0x0
	FString PicLinkUrl; // 0x28
	char bShowAtMainLand : 1; // 0x38
};

struct FBasePlayerDataInfo {
	FString UniqueId; // 0x0
	FString SavedNetworkAddress; // 0x10
	uint32_t CharacterDataVersion; // 0x20
	FString SaveTime; // 0x28
	FString PlayerCharacterName; // 0x38
	FGuid PlayerDataGuid; // 0x48
	FGuid GuildOwnerGuid; // 0x58
	FGuid AllianceOwnerGuid; // 0x68
	int32_t OfficialJob; // 0x78
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FBuffReduceDamagePara {
	float Damage; // 0x0
	float DamageDivisionAdd; // 0x4
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	TArray<FPoseLink> BlendPoses; // 0x20
	TArray<FInputBlendPose> LayerSetup; // 0x30
	TArray<float> BlendWeights; // 0x40
	bool bMeshSpaceRotationBlend; // 0x50
	bool bMeshSpaceScaleBlend; // 0x51
	ECurveBlendOption CurveBlendOption; // 0x52
	bool bBlendRootMotionBasedOnRootBone; // 0x53
	int32_t LODThreshold; // 0x58
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60
	FGuid SkeletonGuid; // 0x70
	FGuid VirtualBoneGuid; // 0x80
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FFunctionResourceEntry {
	USGItem* ItemTemplate; // 0x0
	int32_t Amount; // 0x8
};

struct FGuildEventToolTipData {
	char bIsVaild : 1; // 0x0
	EEventGuildType EventGuildType; // 0x1
	EGuildEventModifyType EventGuildModifyType; // 0x2
	int32_t EventGuildModifyIndex; // 0x4
	float ModifyConflictValue; // 0x8
	float DelayRemainTime; // 0xc
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FGameplayCueTranslationLink {
	UGameplayCueTranslator* RulesCDO; // 0x0
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FNPCSpawnData {
	FString SpawnDataName; // 0x0
	TArray<ABaseCharacter*> NpcTemplateClasses; // 0x10
	TArray<int32_t> NpcSpawnGroupMinNum; // 0x20
	TArray<int32_t> NpcSpawnGroupMaxNum; // 0x30
	float NpcSpawnGroupDistance; // 0x40
	TArray<float> NpcSpawnWeight; // 0x48
	TArray<float> NpcMinLevelOffset; // 0x58
	TArray<float> NpcMaxLevelOffset; // 0x68
	TArray<char> NpcOverrideLevel; // 0x78
	TArray<float> NpcMinQualityCorrection; // 0x88
	TArray<float> NpcMaxQualityCorrection; // 0x98
	TArray<float> MinDistanceToPlayer; // 0xa8
	TArray<float> MaxDistanceToPlayer; // 0xb8
	TArray<float> NpcSenseSightRadiusMulAdd; // 0xc8
	TArray<char> NpcOverrideAllowSleep; // 0xd8
	TArray<FString> NpcStartSleepTime; // 0xe8
	TArray<FString> NpcEndSleepTime; // 0xf8
	float Weight; // 0x108
	char bRandomNPCAppearance : 1; // 0x10c
	UCharacterRandomAppearanceWeight* RandomAppearanceWeightOverride; // 0x110
	char bRandomNPCAppearanceTemplate : 1; // 0x118
	TArray<FName> NPCAppearanceTemplatesOverride; // 0x120
};

struct FHorizonMultiToggleButtonState {
	FText Text; // 0x0
	FLinearColor TextColor; // 0x18
	FSlateBrush Brush; // 0x28
};

struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x0
	FVector2D TextureCoordinate0; // 0x4
	FVector2D TextureCoordinate1; // 0xc
	FColor VertexColor; // 0x14
	FVector VertexNormal; // 0x18
	FVector VertexTangent; // 0x24
	float VertexBinormalSign; // 0x30
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FRewardConditionConfigArray {
	TArray<URewardCondition*> ConditionConfigArray; // 0x0
};

struct FNPCSpawnLimit {
	ABaseCharacter* NPCTemplateClass; // 0x0
	float Percentage; // 0x8
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FSoundTriggerStateData {
	ESoundTriggerState TriggerState; // 0x0
	int32_t Priority; // 0x4
	TArray<FSoundIntParam> IntParams; // 0x8
	int32_t Level; // 0x18
};

struct FDefaultNotifyText : FTableRowBase {
	FText DefaultText; // 0x8
};

struct FConstructAttachMeshParticle {
	UParticleSystem* ParticleSystem; // 0x0
	FVector RelativeLocation; // 0x8
	FRotator RelativeRotation; // 0x14
	FVector RelativeScale; // 0x20
	FName AttachSocketName; // 0x2c
	char bVisible : 1; // 0x34
	char bSpawnActive : 1; // 0x34
};

struct FAnimalsCustomAttackInfo {
	UAnimMontage* AttackMontage; // 0x0
	float AttackDistance; // 0x8
	float StopAttackDistanceByAdd; // 0xc
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FOptimizationAnimsConfig {
	char bUseMainHandLayer : 1; // 0x0
	char bRiderUseMainHandLayer : 1; // 0x0
	float MainHandLayerBlendWeight; // 0x4
	char bUseOffHandLayer : 1; // 0x8
	char bRiderUseOffHandLayer : 1; // 0x8
	float OffHandLayerBlendWeight; // 0xc
	UAnimSequence* IdlePoseAnim; // 0x10
	UAnimSequence* IdleLayerPoseAnim; // 0x18
	UAnimSequence* RiderIdlePoseAnim; // 0x20
	UAnimSequence* RiderIdleLayerPoseAnim; // 0x28
	UAnimSequence* IdleAdditiveAnim; // 0x30
	UAimOffsetBlendSpace* BaseAO; // 0x38
	UAimOffsetBlendSpace* OffHandAO; // 0x40
	UBlendSpace* Moving; // 0x48
	UBlendSpace* MovingFkd; // 0x50
	UBlendSpace* MovingBkd; // 0x58
	UAimOffsetBlendSpace* RiderAO; // 0x60
	UAimOffsetBlendSpace* RiderOffHandAO; // 0x68
	UAimOffsetBlendSpace* RiderAttackAO_U; // 0x70
	UAimOffsetBlendSpace* RiderAttackAO_D; // 0x78
	UAimOffsetBlendSpace* RiderAttackAO_L; // 0x80
	UAimOffsetBlendSpace* RiderAttackAO_R; // 0x88
	UAnimSequence* JumpStart; // 0x90
	UAnimSequence* JumpFlail; // 0x98
	UAnimSequence* JumpFalling; // 0xa0
	UAnimSequence* JumpLand; // 0xa8
	UBlendSpace* JumpLeanBS; // 0xb0
};

struct FGlobalMapActorTipsDataArray {
	TArray<FGlobalMapActorTipData> TipsDatas; // 0x0
};

struct FActiveGameplayEffect : FFastArraySerializerItem {
	FGameplayEffectSpec Spec; // 0x18
	FPredictionKey PredictionKey; // 0x2b0
	double StartServerWorldTime; // 0x2c0
	double CachedStartServerWorldTime; // 0x2c8
	double StartWorldTime; // 0x2d0
	bool bIsInhibited; // 0x2d8
};

struct FCurveEdEntry {
	UObject* CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0x10
	int32_t bHideCurve; // 0x20
	int32_t bColorCurve; // 0x24
	int32_t bFloatingPointColorCurve; // 0x28
	int32_t bClamp; // 0x2c
	float ClampLow; // 0x30
	float ClampHigh; // 0x34
};

struct FScalabilitySettingsConfig : FTableRowBase {
	FText ConsoleVariableName; // 0x8
	bool bAsPercent; // 0x20
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FRootMotionSource_RadialForce : FRootMotionSource {
	FVector Location; // 0x98
	AActor* LocationActor; // 0xa8
	float Radius; // 0xb0
	float Strength; // 0xb4
	bool bIsPush; // 0xb8
	bool bNoZForce; // 0xb9
	UCurveFloat* StrengthDistanceFalloff; // 0xc0
	UCurveFloat* StrengthOverTime; // 0xc8
	bool bUseFixedWorldDirection; // 0xd0
	FRotator FixedWorldDirection; // 0xd4
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FSubmixEffectMultibandCompressorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	bool bLinkChannels; // 0x8
	bool bAnalogMode; // 0x9
	bool bFourPole; // 0xa
	TArray<FDynamicsBandSettings> Bands; // 0x10
};

struct FReplicatedPredictionKeyItem : FFastArraySerializerItem {
	FPredictionKey PredictionKey; // 0x10
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0
	TArray<FString> PinnedNodes; // 0x50
	double ViewStart; // 0x60
	double ViewEnd; // 0x68
	double WorkStart; // 0x70
	double WorkEnd; // 0x78
	TSet<FFrameNumber> MarkedFrames; // 0x80
	FFloatRange WorkingRange; // 0xd0
	FFloatRange ViewRange; // 0xe0
};

struct FShooterWeaponData {
	char bUseAutoReload : 1; // 0x0
	char bUseShooterPull : 1; // 0x0
	char bUseShooterShake : 1; // 0x0
	float StartAimTime; // 0x4
	float StartPullTime; // 0x8
	float PullHoldTime; // 0xc
	float PullHoldBreathTime; // 0x10
	float PullShakeTime; // 0x14
	float CancelAttackTime; // 0x18
	float RlxReloadTime; // 0x1c
	float AimReloadTime; // 0x20
	float ContinuousReloadTime; // 0x24
	float RangeAddSpeed; // 0x28
	float ProjectileRange; // 0x2c
	float ChangedGravityProjectileRangeMulti; // 0x30
	TArray<ECustomMovementMode> IgnoreReloadMovementModes; // 0x38
};

struct FAnimalsNeighConfig {
	char bUseAgainPressedBackward : 1; // 0x0
	char bIsNeighing : 1; // 0x0
	char bUsePlayNeigh : 1; // 0x0
	char bUseComplexTrace : 1; // 0x0
	float NeighMaxStepHeight; // 0x4
	float NeighSpeedLimit; // 0x8
	float HandbrakeSpeedLimit; // 0xc
	FName CapsuleHeadSocket; // 0x10
	FName CapsulePelvisSocket; // 0x18
	FName CapsuleSpine1Socket; // 0x20
	FName CapsuleSpine2Socket; // 0x28
	FName NeighProfileName; // 0x30
	ETraceTypeQuery TraceChannel; // 0x38
	char bShowCapsuleTrace : 1; // 0x39
	char bEnableRiderNeighRagdoll : 1; // 0x39
	char bIsRiderNehighing : 1; // 0x39
	char bShowForwardTrace : 1; // 0x39
	char bIsForwardBlocking : 1; // 0x39
	char bIsForwardBlockingMovement : 1; // 0x39
	float ForwardCapsuleRadius; // 0x3c
	float ForwardCapsuleHeight; // 0x40
	FVector2D ForwardCapsuleStopDistance; // 0x44
	char bShowBackwardTrace : 1; // 0x4c
	char bIsBackwardBlocking : 1; // 0x4c
	float BackwardCapsuleRadius; // 0x50
	float BackwardCapsuleHeight; // 0x54
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FClusterNode {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
	FVector MinInstanceScale; // 0x28
	FVector MaxInstanceScale; // 0x34
};

struct FNiagaraPlatformSetCVarCondition {
	FName CVarName; // 0x0
	bool Value; // 0x8
	int32_t MinInt; // 0xc
	int32_t MaxInt; // 0x10
	float MinFloat; // 0x14
	float MaxFloat; // 0x18
	char bUseMinInt : 1; // 0x1c
	char bUseMaxInt : 1; // 0x1c
	char bUseMinFloat : 1; // 0x1c
	char bUseMaxFloat : 1; // 0x1c
};

struct FGerstnerWaveOctave {
	int32_t NumWaves; // 0x0
	float AmplitudeScale; // 0x4
	float MainDirection; // 0x8
	float SpreadAngle; // 0xc
	bool bUniformSpread; // 0x10
};

struct FGovernmentData : FTableRowBase {
	FString GovernmentName; // 0x8
	FVector2D GovernmentPosition; // 0x18
	FName OccupiedGuildID; // 0x20
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FHairCardsTextureSettings {
	int32_t AtlasMaxResolution; // 0x0
	int32_t PixelPerCentimeters; // 0x4
	int32_t LengthTextureCount; // 0x8
	int32_t DensityTextureCount; // 0xc
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FSceneActorChangeLocRot {
	AActor* SceneActor; // 0x0
	FVector SceneActorLoc; // 0x8
	FRotator SceneActorRot; // 0x14
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FRewardItem {
	int32_t ItemIndex; // 0x0
	int32_t ItemNum; // 0x4
	EItemQuality iQuality; // 0x8
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FNpcSpawnVolumeData {
	ANpcSpawnVolume* NpcSpawnVolume; // 0x0
	TArray<AActor*> SpawnVolumeFloors; // 0x8
	TArray<FName> SpawnVolumeFloorTags; // 0x18
	float Weight; // 0x28
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float LowPassFilterFrequency; // 0x8
	float AttenuationDistanceScale; // 0xc
	float StereoBleed; // 0x10
	float LFEBleed; // 0x14
	float VoiceCenterChannelVolume; // 0x18
	float RadioFilterVolume; // 0x1c
	float RadioFilterVolumeThreshold; // 0x20
	char bApplyEffects : 1; // 0x24
	char bAlwaysPlay : 1; // 0x24
	char bIsUISound : 1; // 0x24
	char bIsMusic : 1; // 0x24
	char bCenterChannelOnly : 1; // 0x24
	char bApplyAmbientVolumes : 1; // 0x24
	char bReverb : 1; // 0x24
	float Default2DReverbSendAmount; // 0x28
	FSoundModulationDefaultSettings ModulationSettings; // 0x30
	EAudioOutputTarget OutputTarget; // 0x70
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x71
	USoundSubmix* DefaultSubmix; // 0x78
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FAnimalsStartAnims {
	TMap<EAnimalsMovingGaitType, UAnimMontage*> TMap_FwdStart; // 0x0
};

struct FInteriorSettings {
	bool bIsWorldSettings; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FStableLinkAnimalNetData {
	char bEnable : 1; // 0x0
	char bIsMating : 1; // 0x0
	float MatePercent; // 0x4
	float MateRemainTime; // 0x8
	float NextMateRemainTime; // 0xc
	char bIsPregnancy : 1; // 0x10
	float PregnancyPercent; // 0x14
	float PregnancyRemainTime; // 0x18
	float HPPercent; // 0x1c
	float TamePercent; // 0x20
	float TameRemainTime; // 0x24
	float HungerPercent; // 0x28
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FKeyMappingConfig {
	EKeyPressType PressType; // 0x0
	FName KeyName; // 0x4
	char bShift : 1; // 0xc
	char bCtrl : 1; // 0xc
	char bAlt : 1; // 0xc
	char bCmd : 1; // 0xc
	FKey Key; // 0x10
	float AxisScale; // 0x28
};

struct FCheckBoxStyle : FSlateWidgetStyle {
	ESlateCheckBoxType CheckBoxType; // 0x8
	FSlateBrush UncheckedImage; // 0x10
	FSlateBrush UncheckedHoveredImage; // 0x98
	FSlateBrush UncheckedPressedImage; // 0x120
	FSlateBrush CheckedImage; // 0x1a8
	FSlateBrush CheckedHoveredImage; // 0x230
	FSlateBrush CheckedPressedImage; // 0x2b8
	FSlateBrush UndeterminedImage; // 0x340
	FSlateBrush UndeterminedHoveredImage; // 0x3c8
	FSlateBrush UndeterminedPressedImage; // 0x450
	FMargin Padding; // 0x4d8
	FSlateColor ForegroundColor; // 0x4e8
	FSlateColor BorderBackgroundColor; // 0x510
	FSlateSound CheckedSlateSound; // 0x538
	FSlateSound UncheckedSlateSound; // 0x550
	FSlateSound HoveredSlateSound; // 0x568
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FMovieSceneSequencePlaybackSettings {
	char bAutoPlay : 1; // 0x0
	FMovieSceneSequenceLoopCount LoopCount; // 0x4
	float PlayRate; // 0x8
	float StartTime; // 0xc
	char bRandomStartTime : 1; // 0x10
	char bRestoreState : 1; // 0x10
	char bDisableMovementInput : 1; // 0x10
	char bDisableLookAtInput : 1; // 0x10
	char bHidePlayer : 1; // 0x10
	char bHideHud : 1; // 0x10
	char bDisableCameraCuts : 1; // 0x10
	char bPauseAtEnd : 1; // 0x10
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FSGAchievementMap {
	TMap<FString, USGAchievement*> Achievements; // 0x0
};

struct FChaosDestructionEvent {
	FVector position; // 0x0
	FVector Normal; // 0xc
	FVector Velocity; // 0x18
	FVector AngularVelocity; // 0x24
	float ExtentMin; // 0x30
	float ExtentMax; // 0x34
	int32_t ParticleID; // 0x38
	float Time; // 0x3c
	int32_t Type; // 0x40
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FAnimalAppearanceData {
	char bHasRandomMorph : 1; // 0x0
	float StrongMorph; // 0x4
	float ThinMorph; // 0x8
	int32_t CurAppearanceIndex; // 0xc
	int32_t SkinHuaSeBaseIndex; // 0x10
	int32_t SkinHuaSeMaskIndex; // 0x14
	EAnimalFurColorType CurSkinColorType; // 0x18
	int32_t CurFurCompIndex; // 0x1c
	FLinearColor FurRootColor; // 0x20
	FLinearColor FurTipColor; // 0x30
	FLinearColor FurDyeColor; // 0x40
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
	EAnimAlphaInputType AlphaInputType; // 0xc4
	bool bAlphaBoolEnabled; // 0xc5
};

struct FDistanceField_Parameters {
	FString DIstanceFieldAO_5_489710834AC340F42FDA2BB345A2B8EB; // 0x0
	FString DistanceFieldGI_6_FBCD8D6D4D0552D45A13EEADA59DAB84; // 0x10
	FString DistanceFieldShadow_7_CF6075F14A97CA9A3F6C45A84943932B; // 0x20
	FString DistanceFields_8_44767784480786A8F7821DA8DEB01CB1; // 0x30
};

struct FGuanAiSignInfo {
	int32_t GuanAiId; // 0x0
	FInnerBattleInfo BattleInfo; // 0x8
	int64_t LeftSignTimeTicks; // 0x50
	FGuanAiStateInfo StateInfo; // 0x58
};

struct FActiveGameplayEffectHandle {
	int32_t Handle; // 0x0
	bool bPassedFiltersAndWasExecuted; // 0x4
};

struct FWorldContext {
	FURL LastURL; // 0xd0
	FURL LastRemoteURL; // 0x138
	UPendingNetGame* PendingNetGame; // 0x1a0
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8
	TArray<UObjectReferencer*> ObjectReferencers; // 0x1f0
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200
	UGameViewportClient* GameViewport; // 0x210
	UGameInstance* OwningGameInstance; // 0x218
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x220
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FGeneralChunkInfoHighFrequency {
	float HP; // 0x0
	float MaxHP; // 0x4
	float WoundMaxHPMulAdd; // 0x8
	float SP; // 0xc
	float MaxSP; // 0x10
	float WoundMaxSPMulAdd; // 0x14
	float Hunger; // 0x18
	float MaxHunger; // 0x1c
	FGuid ChunkGuid; // 0x20
	EEnvironmentVolumeType CurrentEVType; // 0x30
	float CurrentEVResistance; // 0x34
};

struct FCharacterClimbLadderConfig {
	char bClimbUseRootMotion : 1; // 0x0
	float ClimbLadderMovementSpeed; // 0x4
	float ClimbLadderStepHeight; // 0x8
	float ClimbLadderExitHeight; // 0xc
	float ClimbBlendInTime; // 0x10
	float ClimbBlendOutTime; // 0x14
	UAnimMontage* AnimMontage_EnterLadderBottom; // 0x18
	UAnimMontage* AnimMontage_EnterLadderTop; // 0x20
	UAnimMontage* AnimMontage_LadderLeftUp; // 0x28
	UAnimMontage* AnimMontage_LadderRightUp; // 0x30
	UAnimMontage* AnimMontage_LadderLeftDown; // 0x38
	UAnimMontage* AnimMontage_LadderRightDown; // 0x40
	UAnimMontage* AnimMontage_ExitLadderBottom; // 0x48
	UAnimMontage* AnimMontage_ExitLadderTop; // 0x50
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FMedium {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_3A6775704CF641DFEEC2478C297B7D69; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_B40CF12D489E0F07F5A52AAB72C39461; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_268786DF438462588539E5BAF602ED34; // 0xcc0
	FDataType_Support DataTypeSupport_319_F3DA97704E7BA941885A888135560397; // 0x1230
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FDropFixInfo : FTableRowBase {
	USGItem* ItemClass; // 0x8
	float Weight; // 0x10
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FSGAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FAnimalsModifyBoneSettings BoneModifier; // 0xc8
	char bAllowEvaluateInactiveWorld : 1; // 0xe0
};

struct FDeathCharacterInfo {
	TWeakObjectPtr<ASGStructureItemContainer> DeathItemContainer; // 0x0
	FVector LastDeathLocation; // 0x8
	FGuid ActorOwnerId; // 0x14
	int64_t LastDeathTimeTick; // 0x28
	ASGPlayerController* ViewController; // 0x30
};

struct FJoinabilitySettings {
	FName SessionName; // 0x0
	bool bPublicSearchable; // 0x8
	bool bAllowInvites; // 0x9
	bool bJoinViaPresence; // 0xa
	bool bJoinViaPresenceFriendsOnly; // 0xb
	int32_t MaxPlayers; // 0xc
	int32_t MaxPartySize; // 0x10
};

struct FBaseGeneralChunkData {
	int32_t ServerId; // 0x0
	int32_t XianChengId; // 0x4
	int32_t TransportXianChengKey; // 0x8
	FGuid TransportMachineGuid; // 0xc
	char bSavedToPlayer : 1; // 0x1c
	int64_t TransportTick; // 0x20
	EGameServerPVPType TransportPVPType; // 0x28
	FString Name; // 0x30
	EGeneralsQualityType GeneralQuality; // 0x40
	EGeneralsSpecialType GeneralSpecialType; // 0x41
	int32_t Level; // 0x44
	float RandomLevel; // 0x48
	EChunkDataStateType ChunkDataStateType; // 0x4c
	ETransportType TransportType; // 0x4d
	EWarType WarType; // 0x4e
	FGuid ChunkGuid; // 0x50
	char bIsReborning : 1; // 0x60
	FDateTime FinalRebornTime; // 0x68
	int32_t LifeCount; // 0x70
	float loyalty; // 0x74
	int32_t Wages; // 0x78
	FDateTime LastGiveWagesTime; // 0x80
	FVector DepositLocation; // 0x88
	int32_t legendGeneralId; // 0x94
	char bIsDeadReborn : 1; // 0x98
	FDateTime RebornDeathDeathTime; // 0xa0
	FDateTime DeathTime; // 0xa8
	int32_t DeathThroughMinutes; // 0xb0
	char bIsKilled : 1; // 0xb4
	TArray<char> ChunkBytes; // 0xb8
	TWeakObjectPtr<ASGGeneralCharacter> GeneralWeakPtr; // 0xc8
	TWeakObjectPtr<ASGGeneralCharacter> PreviewDataGeneralWeakPtr; // 0xd0
	FDateTime LockTime; // 0xd8
	float CapsuleHalfHeight; // 0xe0
};

struct FBaoZangPositionRowBase : FTableRowBase {
	EBaoZangType BaoZangType; // 0x8
	int32_t BaoZangID; // 0xc
	FVector BaoZangPosition; // 0x10
	int32_t MaxPlayerNum; // 0x1c
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FIdleBehaviorInfo {
	float RandomWeight; // 0x0
	float TriggerChance; // 0x4
	EAnimalIdleBehaviorType IdleBehaviorType; // 0x8
	TArray<ESGPhysMaterialType> RequirePhysMaterialTypes; // 0x10
	TArray<FRandomWeightAnim> BehaviorAnims; // 0x20
	int32_t RandomMinCount; // 0x30
	int32_t RandomMaxCount; // 0x34
	char bUseDurationTimeOverride : 1; // 0x38
	float DurationTimeOverrideMin; // 0x3c
	float DurationTimeOverrideMax; // 0x40
	float ToggleToDefaultIdleBehaviorTime; // 0x44
};

struct FAlliancePowerGroupConfig {
	UAlliancePowerGroupSlot* GroupSlotClass; // 0x0
	TSoftObjectPtr<UTexture2D> OfficialSealImageTexture; // 0x8
};

struct FHairCollisionConstraint {
	bool SolveCollision; // 0x0
	bool ProjectCollision; // 0x1
	float StaticFriction; // 0x4
	float KineticFriction; // 0x8
	float StrandsViscosity; // 0xc
	FIntVector GridDimension; // 0x10
	float CollisionRadius; // 0x1c
	FRuntimeFloatCurve RadiusScale; // 0x20
};

struct FBattleGroupDynamicInfo {
	FGuid GuildId; // 0x0
	int32_t GroupScore; // 0x10
	EBattleResultType BattleResult; // 0x14
};

struct FBattleOpenTimeRule {
	TArray<FBattleOpenTimeRuleInfo> OpenTimeRuleInfo; // 0x0
	int32_t NextBattleIndex; // 0x10
	int64_t NextOpenTimeTicks; // 0x18
	int64_t JinXianBeginTimeTicks; // 0x20
	int64_t BeiZhanBeginTimeTicks; // 0x28
	EXianChengBattleStage BattleStage; // 0x30
};

struct FStructureSeatLinkChunkInfo {
	FGuid ChunkUid; // 0x0
	float CurrentHunger; // 0x10
};

struct FResonanceAudioReverbPluginSettings {
	bool bEnableRoomEffects; // 0x0
	bool bGetTransformFromAudioVolume; // 0x1
	FVector RoomPosition; // 0x4
	FQuat RoomRotation; // 0x10
	FVector RoomDimensions; // 0x20
	ERaMaterialName LeftWallMaterial; // 0x2c
	ERaMaterialName RightWallMaterial; // 0x2d
	ERaMaterialName FloorMaterial; // 0x2e
	ERaMaterialName CeilingMaterial; // 0x2f
	ERaMaterialName FrontWallMaterial; // 0x30
	ERaMaterialName BackWallMaterial; // 0x31
	float ReflectionScalar; // 0x34
	float ReverbGain; // 0x38
	float ReverbTimeModifier; // 0x3c
	float ReverbBrightness; // 0x40
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FBehaviorPointConfig {
	EBehaviorPointType BehaviorPointType; // 0x0
	FString Description; // 0x8
	TArray<FBehaviorPointData> BehaviorPointData; // 0x18
	TArray<FPatrolBehaviorPointData> PatrolBehaviorPointData; // 0x28
	TArray<ABehaviorPointActor*> BehaviorPointActors; // 0x38
};

struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50
	float Length; // 0x54
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FHairBendConstraint {
	bool SolveBend; // 0x0
	bool ProjectBend; // 0x1
	float BendDamping; // 0x4
	float BendStiffness; // 0x8
	FRuntimeFloatCurve BendScale; // 0x10
};

struct FGameServerInfoArray {
	TArray<int32_t> GameServerInfoArray; // 0x0
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FForgeDurableCombination {
	int32_t DurableMin; // 0x0
	int32_t DurableMax; // 0x4
};

struct FKongmingLanternInfo {
	ASGKongmingLantern* KongmingLanternClass; // 0x0
	int32_t Amount; // 0x8
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FGuildEventConfigDetail {
	char bIsEnableEvent : 1; // 0x0
	char bIsGuidEvent : 1; // 0x0
	AActor* TargetClass; // 0x8
	TArray<FGuildEventRegionData> RegionDatas; // 0x10
	int32_t LevelMin; // 0x20
	int32_t LevelMax; // 0x24
	int32_t GuildMemberAverageLevelMin; // 0x28
	int32_t GuildMemberAverageLevelMax; // 0x2c
	float ConflictValueMin; // 0x30
	float ConflictValueMax; // 0x34
	FString GameTimeMin; // 0x38
	FString GameTimeMax; // 0x48
	FString UtcTimeMin; // 0x58
	FString UtcTimeMax; // 0x68
	float Chance; // 0x78
	float Interval; // 0x7c
	char bCheckOccupyProtectTime : 1; // 0x80
	float cd; // 0x84
	float Timeout; // 0x88
	float DelayTime; // 0x8c
	float WarnIntervalTime; // 0x90
	ECapitalType RansomCapitalType; // 0x94
	float RansomCount; // 0x98
	TArray<FGuildEventSpawnDetail> SpawnDetails; // 0xa0
	TArray<FGuildEventModifyConflictEntry> ModifyConflictEntries; // 0xb0
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FNoseData {
	float NoseDepth; // 0x0
	float NoseHeight; // 0x4
	float NoseRidgeCurve; // 0x8
	float NoseRidgeUpperDepth; // 0xc
	float NoseScale; // 0x10
	float NoseTipDepth; // 0x14
	float NoseTipHeight; // 0x18
	float NoseTipWidth; // 0x1c
	float NoseWidth; // 0x20
	float NosePhiltrumWidth; // 0x24
};

struct FTeamAttitudeConfig : FTableRowBase {
	TMap<char, FTeamAttitude> TMap_TeamAttitudeConfig; // 0x8
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0
	int32_t AutoEaseOutDuration; // 0x4
	TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8
	bool bManualEaseIn; // 0x18
	int32_t ManualEaseInDuration; // 0x1c
	TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20
	bool bManualEaseOut; // 0x30
	int32_t ManualEaseOutDuration; // 0x34
};

struct FPaintedVertex {
	FVector position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FHumanFootStepData : FTableRowBase {
	FCustomSoundSetting SurfaceFootSoundSetting[0x10]; // 0x8
	UMaterialInterface* SurfaceFootDecal[0x10]; // 0xa88
	FVector SurfaceFootDecalScale; // 0xb08
	UParticleSystem* SurfaceFootParticle[0x10]; // 0xb18
	FVector SurfaceFootParticleScale; // 0xb98
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FFoliageTypeExtraInfo {
	TMap<FSoftObjectPath, FSoftObjectPath> DestructableMeshPathMap; // 0x0
};

struct FRigidBodyState {
	FVector_NetQuantize100 position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FGeneralPeaceTameRequireItem {
	USGItem* RequireItem; // 0x0
	int32_t MinAmount; // 0x8
	int32_t MaxAmount; // 0xc
	float Weight; // 0x10
	float PerAmountAddTame; // 0x14
};

struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x10
	int32_t NumBonesInLimb; // 0x20
	float MinRotationAngle; // 0x24
	EAxis FootBoneForwardAxis; // 0x28
	EAxis HingeRotationAxis; // 0x29
	bool bEnableRotationLimit; // 0x2a
	bool bEnableKneeTwistCorrection; // 0x2b
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FActivityRankRewardMsgStu {
	EWorldRankType RankType; // 0x0
	FString RankName; // 0x8
	char BeginIndex; // 0x18
	char EndIndex; // 0x19
	char RewardIndex; // 0x1a
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FNotifyText : FTableRowBase {
	FText Text; // 0x8
};

struct FTaishouBattleTeamUI {
	UTaishouTeamInfoSlot* TeamInfoSlot; // 0x0
	UImage* Image_GuildNameBg; // 0x8
	UImage* Image_WinLine; // 0x10
	UTextBlock* CoutryGuildName; // 0x18
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FConstraintDescription {
	bool bTranslation; // 0x0
	bool bRotation; // 0x1
	bool bScale; // 0x2
	bool bParent; // 0x3
	FFilterOptionPerAxis TranslationAxes; // 0x4
	FFilterOptionPerAxis RotationAxes; // 0x7
	FFilterOptionPerAxis ScaleAxes; // 0xa
};

struct FLightningParams {
	FLinearColor Color; // 0x0
	UCurveFloat* RootParticlesWidth; // 0x10
	UCurveFloat* BranchParticlesWidth; // 0x18
	float ParticlesWidthScale; // 0x20
	float EffectDamagePlayInnerRadius; // 0x24
	float EffectDamagePlayOuterRadius; // 0x28
	bool bInstant; // 0x2c
	bool bWantsAffectWorldLighting; // 0x2d
	FFloatRange SparkVelocityRange; // 0x30
	FFloatRange SparkVelocityFading; // 0x40
	FFloatRange SparkDelayRange; // 0x50
	float NoiseMult; // 0x60
	float SparkStep; // 0x64
	UCurveFloat* FlashingCurve; // 0x68
	FFloatRange FlashingRate; // 0x70
	FFloatRange FlashingForce; // 0x80
	float SparkIntensity; // 0x90
	float TrailIntensity; // 0x94
	FFloatRange TrailIntensityFading; // 0x98
	float BoltIntensity; // 0xa8
	float SparkFadeOutSpeedMult; // 0xac
	float TrailFadeOutSpeedMult; // 0xb0
	int32_t NumSegments; // 0xb4
};

struct FAnimPhysConstraintSetup {
	AnimPhysLinearConstraintType LinearXLimitType; // 0x0
	AnimPhysLinearConstraintType LinearYLimitType; // 0x1
	AnimPhysLinearConstraintType LinearZLimitType; // 0x2
	FVector LinearAxesMin; // 0x4
	FVector LinearAxesMax; // 0x10
	AnimPhysAngularConstraintType AngularConstraintType; // 0x1c
	AnimPhysTwistAxis TwistAxis; // 0x1d
	AnimPhysTwistAxis AngularTargetAxis; // 0x1e
	float ConeAngle; // 0x20
	FVector AngularLimitsMin; // 0x24
	FVector AngularLimitsMax; // 0x30
	FVector AngularTarget; // 0x3c
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FServerMultiplier {
	float SaveGameIntervalMinute; // 0x0
	FString ServerToServedTokenKey; // 0x8
	bool bUseServerAdmin; // 0x18
	FString ServerAdminAccounts; // 0x20
	bool bUsePassport; // 0x30
	FString HasPassportAccounts; // 0x38
	float PlayerRespawnCantBeDamageTime; // 0x48
	float PlayerRespawnTime; // 0x4c
	float MurderRespawnTime; // 0x50
	float AccidentRespawnTime; // 0x54
	float MaxMurderRespawnTime; // 0x58
	float MaxAccidentRespawnTime; // 0x5c
	float RecordLastDamageTimeSpan; // 0x60
	float RecordDeatheCountTimeSpan; // 0x64
	float BattleKickOffPlayerTime; // 0x68
	bool bVehicleAutoDead; // 0x6c
	float VehicleAutoDeadTime; // 0x70
	float CollectMaxMultiplier; // 0x74
	float CollectPlantMultiplier; // 0x78
	float CollectPlantMultiplierPVE; // 0x7c
	float CollectHunterMultiplier; // 0x80
	float CollectHunterMultiplierPVE; // 0x84
	float CollectStoneMultiplier; // 0x88
	float CollectStoneMultiplierPVE; // 0x8c
	float CollectPlantRecoverMultiplier; // 0x90
	float CollectStoneRecoverMultiplier; // 0x94
	TArray<float> ExploitCompRecoverMultipliers; // 0x98
	float CropGrowthMultiplier; // 0xa8
	float CropCollectMultiplier; // 0xac
	float CropLandTickInterval; // 0xb0
	float CollectDamageMultiplier; // 0xb4
	float WildAnimalDamageMultiplier; // 0xb8
	float AddExpMultiplier; // 0xbc
	float HungryDecreaseMultiplier; // 0xc0
	float SPDecreaseMultiplier; // 0xc4
	bool bCloseDamage; // 0xc8
	float ShooterHostileDamageMultiplier; // 0xcc
	float MeleeHostileDamageMultiplier; // 0xd0
	float ShooterFriendDamageMultiplier; // 0xd4
	float MeleeFriendDamageMultiplier; // 0xd8
	float StructureDamageMultiplier; // 0xdc
	float StructureReturnDamageMultiplier; // 0xe0
	float FinalDamageMultiplier; // 0xe4
	float CharacterCorpseLifespan; // 0xe8
	float AnimalCorpseLifespan; // 0xec
	float SkillExpMultiplier; // 0xf0
	bool bUseDurable; // 0xf4
	bool bLimitTameHorseNum; // 0xf5
	bool bLimitWarHorseNum; // 0xf6
	bool bRiderUseShooterMovingCheck; // 0xf7
	float NpcSpawnMultiplier; // 0xf8
	float NpcSpawnIntervalMultiplier; // 0xfc
	float NpcStaticSpawnIntervalMultiplier; // 0x100
	float InitCapitalGold; // 0x104
	float InitCapitalSilver; // 0x108
	float InitCapitalCopper; // 0x10c
	float MaxStoreTimeMinutes; // 0x110
	float MaxBattleStoreTimeMinutes; // 0x114
	float CrossServerFeePerCity; // 0x118
	float TransportUnitTime; // 0x11c
	float TransportUnitOverTime; // 0x120
	float TransportItemUnitCost; // 0x124
	float TransportGeneralUnitCost; // 0x128
	float TransportHorseUnitCost; // 0x12c
	float DownLoadUnitParam; // 0x130
	float DownLoadDistanceParam; // 0x134
	float DownLoadTimeParam; // 0x138
	float TransportPVPToPVEAdditionParam; // 0x13c
	float TransportPVEToPVPAdditionParam; // 0x140
	float CrossServerCDTime; // 0x144
	float CrossServerNewPlayerCDTime; // 0x148
	float CrossServerCDTimeXianZhangDec; // 0x14c
	float CrossServerCDTimeTaiShouDec; // 0x150
	float CrossServerCDTimeCiShiDec; // 0x154
	float CrossServerGeneralTransportNum; // 0x158
	float CrossServerHorseTransportNum; // 0x15c
	float BattleGeneralTransportNum; // 0x160
	float BattleHorseTransportNum; // 0x164
	float AutoCloseBattleTime; // 0x168
	bool bDeadCorpseCreateBag; // 0x16c
	bool bShowAllVehiclePerk; // 0x16d
	bool bOpenWillDead; // 0x16e
	bool bAllCanRescue; // 0x16f
	float GuardRestRelationTime; // 0x170
	FString XianChengOpenParamList0; // 0x178
	FString XianChengOpenParamList1; // 0x188
	FString XianChengOpenParamList2; // 0x198
	FString XianChengOpenParamList3; // 0x1a8
	FString XianChengOpenParamList4; // 0x1b8
	FString RankOpenParamList; // 0x1c8
	float XianChengOpenPerpareTime; // 0x1d8
	bool bShowLevelNameHUD; // 0x1dc
	float OnlyShowLevelDistance; // 0x1e0
	float ShowLevelNameDistance; // 0x1e4
	bool bUseFightBillboard; // 0x1e8
	float ShowBillboardDistance; // 0x1ec
	float ShowEnemyBillboardDistance; // 0x1f0
	bool bShowDefaultBillboard; // 0x1f4
	bool bShowFriendlyBillboard; // 0x1f5
	bool bShowEnemyBillboard; // 0x1f6
	bool bEnableMovementOptimizations; // 0x1f7
	bool bEnableAnimOptimizations; // 0x1f8
	float ResetExtraSkillExpToPublicExpRatio; // 0x1fc
	float AddTameMulti; // 0x200
	float CallHorseDistance; // 0x204
	float DeathItemContainerLifeTime; // 0x208
	float DropItemContainerLifeTime; // 0x20c
	bool bDeathOnlyReduceDurable; // 0x210
	float BattleServerReduceShortCutDurablePercent; // 0x214
	float BattleServerReduceEquipDurablePercent; // 0x218
	float BattleServerReduceInventoryDurablePercent; // 0x21c
	float GeneralQualityMultiPVEGreen; // 0x220
	float GeneralQualityMultiPVEBlue; // 0x224
	float GeneralQualityMultiPVEPurse; // 0x228
	float GeneralQualityMultiPVEOrange; // 0x22c
	float GeneralQualityMultiPVERed; // 0x230
	float GeneralQualityMultiPVPGreen; // 0x234
	float GeneralQualityMultiPVPBlue; // 0x238
	float GeneralQualityMultiPVPPurse; // 0x23c
	float GeneralQualityMultiPVPOrange; // 0x240
	float GeneralQualityMultiPVPRed; // 0x244
	float HorseMaxQualityCorrection; // 0x248
	float HorseQCRedPVE; // 0x24c
	float HorseQCRedChancePVE; // 0x250
	float HorseQCOrangePVE; // 0x254
	float HorseQCOrangeChancePVE; // 0x258
	float OccupyDecayHPMultiplier; // 0x25c
	float OccupyDecayHPMultiplierPVE; // 0x260
	float OccupyDecayHPInOtherAreaMultiplier; // 0x264
	float OccupyDecayHPInOtherAreaMultiplierPVE; // 0x268
	float OccupyBaseStructureNum; // 0x26c
	float OccupyBaseStructureNumPVE; // 0x270
	int32_t OccupyMaxProtectHour; // 0x274
	FDateTime OccupyAreaFreeDecayStartTime; // 0x278
	FDateTime OccupyAreaFreeDecayEndTime; // 0x280
	bool bCheckOfficalRoadOffsetPVP; // 0x288
	bool bCheckOfficalRoadOffsetPVE; // 0x289
	bool bGuildStructureCoolTime; // 0x28a
	bool bCheckOccupyPreventDecay; // 0x28b
	float StructureCreateHPMultiplier; // 0x28c
	float StructureRepairHPMultiplier; // 0x290
	bool bDisableAllStructureCheckVolume; // 0x294
	float LandAddWaterByWeatherMultiplier; // 0x298
	float LandAddWaterByStructureMultiplier; // 0x29c
	bool bCanDropItem; // 0x2a0
	bool bCanOpenStructureInventory; // 0x2a1
	bool bShowFleshPhysicialMaterialEffect; // 0x2a2
	bool bOpenDropFixFlag; // 0x2a3
	bool bOpenDropFixFlagPVE; // 0x2a4
	bool bNPCHorseDeathToBattleTransport; // 0x2a5
	bool bServerCheckDamageDelta; // 0x2a6
	float ServerHuKouNum; // 0x2a8
	int32_t MaxPlayers; // 0x2ac
	float FoodMedicineWineBuffTimeMulti; // 0x2b0
	float FoodBuffValueMulti; // 0x2b4
	float MedicineBuffValueMulti; // 0x2b8
	float PlayerDeadGainCopperCoinMulti; // 0x2bc
	bool bEnableHorseRideAuthority; // 0x2c0
	float AITurretTraceProjectileRatio; // 0x2c4
	float AITurretMustHitProjectileInterval; // 0x2c8
	float CommonDistanceCheckLimit; // 0x2cc
	bool bShowIdentifies; // 0x2d0
	float PostCloudDataInterval; // 0x2d4
	int32_t MaxActiveCharacterCountConfig; // 0x2d8
	int32_t MaxActiveStructureCountConfig; // 0x2dc
	int32_t NUM_AllGeneralMax; // 0x2e0
	int32_t NUM_WarGeneralMax; // 0x2e4
	int32_t NUM_WorkGeneralMax; // 0x2e8
	int32_t NUM_AllHorseMax; // 0x2ec
	int32_t NUM_WarHorseMax; // 0x2f0
	bool bEnableMarket; // 0x2f4
	FString MarketClientURL; // 0x2f8
	FString MarketAddr; // 0x308
	int32_t MarketPort; // 0x318
	bool bEnableWorship; // 0x31c
	int32_t GuildNPCSeatNumMax; // 0x320
	int32_t WeekFreeResetMasteryPointTimes; // 0x324
	float CapitalDropRatioPVP; // 0x328
	float CapitalDropRatioPVE; // 0x32c
	bool bSteamAuth; // 0x330
	bool bUseDevicePassword; // 0x331
	bool bUseLobbyCrossServer; // 0x332
	float ExpToGuildActivityPointMul; // 0x334
	float MaxGuildActivityPointMul; // 0x338
	int32_t GuildRenameCDHour; // 0x33c
	int32_t GuildSetImageCDHour; // 0x340
	int32_t AllianceRenameCDHour; // 0x344
	bool bTestArmorDamage; // 0x348
	bool bAttackAddTame; // 0x349
	bool bUseCNDedicatedFilterWord; // 0x34a
	bool bCorpseInteractive; // 0x34b
	bool bMainLandVersion; // 0x34c
	bool bCanChat; // 0x34d
	bool bCanVoiceChat; // 0x34e
	bool bCanGetMailAttachment; // 0x34f
	bool bCanTransportCrossServer; // 0x350
	bool bCanJoinBattle; // 0x351
	float WildAnimalLifeMultiplier; // 0x354
	float WildAnimalBeInjuredMultiplier; // 0x358
	float WildAnimalLifeRecoveryMultiplier; // 0x35c
	float HumanoidLifeMultiplier; // 0x360
	float HumanoidDamageMultiplier; // 0x364
	float HumanoidBeInjuredMultiplier; // 0x368
	float HumanoidLifeRecoveryMultiplier; // 0x36c
	float TameAnimalLifeMultiplier; // 0x370
	float TameAnimalDamageMultiplier; // 0x374
	float TameAnimalBeInjuredMultiplier; // 0x378
	float TameAnimalLifeRecoveryMultiplier; // 0x37c
	float GeneralLifeMultiplier; // 0x380
	float GeneralDamageMultiplier; // 0x384
	float GeneralBeInjuredMultiplier; // 0x388
	float GeneralLifeRecoveryMultiplier; // 0x38c
	float TameAnimalSatietyMultiplier; // 0x390
	float TameAnimalDeclineOfSatietyMultiplier; // 0x394
	float TameAnimalLoadMultiplier; // 0x398
	float TameAnimalBodyStrengthMultiplier; // 0x39c
	float TameAnimalLifeCountMultiplier; // 0x3a0
	float TameAnimalDeathReduceLifeCountMultiplier; // 0x3a4
	float TameGeneralDeathReduceLifeCountMultiplier; // 0x3a8
	float TameAnimalSpeedMultiplier; // 0x3ac
	float TameAnimalHeatResistanceMultiplier; // 0x3b0
	float TameAnimalColdResistanceMultiplier; // 0x3b4
	float TameAnimalPoisonResistanceMultiplier; // 0x3b8
	float TameGeneralHeatResistanceMultiplier; // 0x3bc
	float TameGeneralColdResistanceMultiplier; // 0x3c0
	float TameGeneralPoisonResistanceMultiplier; // 0x3c4
	float PlayerHeatResistanceMultiplier; // 0x3c8
	float PlayerColdResistanceMultiplier; // 0x3cc
	float PlayerPoisonResistanceMultiplier; // 0x3d0
	float TameAnimalMatingSpeedMultiplier; // 0x3d4
	float TameAnimalMatingCDMultiplier; // 0x3d8
	float BabyAnimalGrowthRateMultiplier; // 0x3dc
	float BabyAnimalFoodConsumptionRateMultiplier; // 0x3e0
	float GeneralExpMultiplier; // 0x3e4
	float GeneralTalentExpMultiplier; // 0x3e8
	float PlayerCollectionExpMultiplier; // 0x3ec
	float PlayerKillMonstersExpMultiplier; // 0x3f0
	float PlayerLifeMultiplier; // 0x3f4
	float PlayerBodyStrengthMultiplier; // 0x3f8
	float PlayerSatietyMultiplier; // 0x3fc
	float PlayerLoadMultiplier; // 0x400
	float GeneralLoadMultiplier; // 0x404
	float MoveSeatLoadMultiplier; // 0x408
	float PlayerSpeedMultiplier; // 0x40c
	float PlayerLifeRecoverySpeedMultiplier; // 0x410
	float PlayerStaminaRecoverySpeedMultiplier; // 0x414
	float MapDifficultyRate; // 0x418
	float NormalReduceDurableMultiplier; // 0x41c
	float PlayerHeatResistanceRecover; // 0x420
	float PlayerColdResistanceRecover; // 0x424
	float PlayerPoisonResistanceRecover; // 0x428
	float GeneralHeatResistanceRecover; // 0x42c
	float GeneralColdResistanceRecover; // 0x430
	float GeneralPoisonResistanceRecover; // 0x434
	bool bServerSleepDeactiveSkeletalMesh; // 0x438
	int32_t DeleteRoleMaxLevel; // 0x43c
	float NavMeshWalkingEnterInterval; // 0x440
	int32_t SleepPlayerCharacterDestroyDays; // 0x444
	int32_t DamageArmorLevelLowerLimit; // 0x448
	int32_t DamageArmorLevelUpperLimit; // 0x44c
	float DamageArmorEffective; // 0x450
	float DamageArmorBaseEffective; // 0x454
	bool PVEOnlySelfGuildPickUpDeathPackage; // 0x458
	float OneDayGeneralWagesMulti; // 0x45c
	float GeneralSeatWorkAddHungerMulti; // 0x460
	bool PassLockFoodSlot; // 0x464
	float ItemCraftRepairTimeMulti; // 0x468
	float ItemCDMulti; // 0x46c
	float InitDefaultCraftPerkPoint; // 0x470
	bool bEnableServerLevel; // 0x474
	float ServerLevelAddMul; // 0x478
	float AnimalFarmDropMul; // 0x47c
	float MeleeWeaponAttackWildLevelDurableValue; // 0x480
	bool bEnableYuanDan; // 0x484
	FString YuanDanStartTime; // 0x488
	FString YuanDanEndTime; // 0x498
	bool bEnableYaoQianShu; // 0x4a8
	FString YaoQianShuStartTime; // 0x4b0
	FString YaoQianShuEndTime; // 0x4c0
	bool bEnableKongmingLantern; // 0x4d0
	bool bEnableChuanYun; // 0x4d1
	FDateTime KongmingLanternStartTime; // 0x4d8
	int32_t KongmingLanternStartGameTime; // 0x4e0
	FDateTime KongmingLanternEndTime; // 0x4e8
	int32_t KongmingLanternEndGameTime; // 0x4f0
	bool bEnableLimitedQuest; // 0x4f4
	int32_t LimitedQuestIndex; // 0x4f8
	FDateTime LimitedQuestStartTime; // 0x500
	FDateTime LimitedQuestEndTime; // 0x508
	bool bEnableLimitedGuildShop; // 0x510
	int32_t LimitedGuildShopIndex; // 0x514
	FDateTime LimitedGuildShopStartTime; // 0x518
	FDateTime LimitedGuildShopEndTime; // 0x520
	int32_t HorseAllowPlacePerkCountAdd; // 0x528
	bool bCanUseWalletGiveCapital; // 0x52c
	bool bEnableKoiFish; // 0x52d
	FString KoiFishStartTime; // 0x530
	FString KoiFishEndTime; // 0x540
};

struct FCameraSettings_Gait {
	FCameraSettings Walk; // 0x0
	FCameraSettings Jog; // 0x14
	FCameraSettings Run; // 0x28
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FSPSmallSkillText {
	TArray<FText> SmallSkillText; // 0x0
};

struct FHairGroupsRendering {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* Material; // 0x8
	FHairGeometrySettings GeometrySettings; // 0x10
	FHairShadowSettings ShadowSettings; // 0x20
	FHairAdvancedRenderingSettings AdvancedSettings; // 0x2c
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FBuffEntry {
	USGBuff* Buff; // 0x0
	float AddRate; // 0x8
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FNews_TerritoryFlagInvalidation : FNewsBase {
	FVector TerritoryFlagLocation; // 0x18
};

struct FEffectTypeDesc : FTableRowBase {
	EHuangLiEffectType EffectType; // 0x8
	FText EffectName; // 0x10
	FText EffectDesc; // 0x28
};

struct FMeleeWeaponData {
	FText WeaponName; // 0x0
	bool IsTowHands; // 0x18
	EWeaponSkillType SkillType; // 0x19
	EWeaponType WeaponType; // 0x1a
	float EquipTime; // 0x1c
	float HolsterTime; // 0x20
	float SlashingDamage; // 0x24
	float PiercingDamage; // 0x28
	float CrushingDamage; // 0x2c
	float SiegeDamage; // 0x30
	float SprintDamageMul; // 0x34
	float CollectionDamage; // 0x38
	float CollectionDurable; // 0x3c
	float Weight; // 0x40
	float UseSP; // 0x44
	float AddBuffRate; // 0x48
	TArray<USGBuff*> BindBuffList; // 0x50
	float SpeedBonusRate; // 0x60
	float DamageToArmor; // 0x64
	float DamageToSheild; // 0x68
	float DamageToWeapon; // 0x6c
	float DamageToHP; // 0x70
	float DamageToStructure; // 0x74
	float DamageOnHorseRate; // 0x78
	float DamageWithOffHandRate; // 0x7c
	float MoveSpeedPunish; // 0x80
	float BlockDistance; // 0x84
	float RiderBlockDistance; // 0x88
	float AttackDistance; // 0x8c
	float RiderAttackDistance; // 0x90
	float AggroAttackDistance; // 0x94
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FHorizonDialogueRubyTextInfo {
	FSlateColor ColorAndOpacity; // 0x18
	FSlateFontInfo Font; // 0x40
	FVector2D ShadowOffset; // 0x98
	FSlateColor ShadowColorAndOpacity; // 0xa0
	FMargin PaddingMargin; // 0xc8
};

struct FRT_Parameters {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_DF713E70420757F4C67C13BBDC8E3A9E; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_2ABBE594458810C0AC816F82CB28B865; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_D6EED34F42FA2FE3B39C158FD4BF7119; // 0xcc0
	FDataType_Support DataTypeSupport_319_A2EECCC8445A98F5802C0C8A6D0AF6F0; // 0x1230
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FAnimalsCustomBehavior {
	TArray<FAnimalsBehavior> TArray_BehaviorConfig; // 0x0
	TArray<ESGPhysMaterialType> RequirePhysMaterialTypes; // 0x10
	char bDisableTamed : 1; // 0x20
	float RandomWeight; // 0x24
	int32_t CurrentRandomIndex; // 0x28
};

struct FPreviewCameraSetting {
	FVector MeshLocation; // 0x0
	FRotator MeshRotation; // 0xc
	FVector CameraPivotOffset; // 0x18
	FRotator OrbitRotation; // 0x24
	FVector2D PanExtents; // 0x30
	float PanSpeed; // 0x38
	float PanBrakeSpeed; // 0x3c
	float CameraDistance; // 0x40
};

struct FLandmassTerrainCarvingSettings {
	EBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FLandmassFalloffSettings FalloffSettings; // 0x4
	FLandmassBrushEffectsList Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FGuanAiIDArray : FTableRowBase {
	TArray<int32_t> GuanAis; // 0x8
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FGuildKPIItemData : FTableRowBase {
	int32_t ItemIndex; // 0x8
};

struct FPerkSlotArray {
	TArray<UPerkSlot*> PerkSlotList; // 0x0
};

struct FRequireItems {
	USGItem* RequireItem; // 0x0
	int32_t RequireAmount; // 0x8
};

struct FLow {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_126107EB4BCF56CDC4C5B1A3FA2B8964; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_429CE0264302CC62D8CD5B90F4342531; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_C236E627421415551C877990D27B9167; // 0xcc0
	FDataType_Support DataTypeSupport_319_F81A2A3D466037A56125EE9FAD06E4C6; // 0x1230
};

struct FGameplayTargetDataFilter {
	AActor* SelfActor; // 0x8
	AActor* RequiredActorClass; // 0x10
	ETargetDataFilterSelf SelfFilter; // 0x18
	bool bReverseFilter; // 0x19
};

struct FClothPhysicalMeshData {
	TArray<FVector> Vertices; // 0x0
	TArray<FVector> Normals; // 0x10
	TArray<uint32_t> Indices; // 0x20
	TMap<uint32_t, FPointWeightMap> WeightMaps; // 0x30
	TArray<float> InverseMasses; // 0x80
	TArray<FClothVertBoneData> BoneData; // 0x90
	int32_t MaxBoneWeights; // 0xa0
	int32_t NumFixedVerts; // 0xa4
	TArray<uint32_t> SelfCollisionIndices; // 0xa8
	TArray<float> MaxDistances; // 0xb8
	TArray<float> BackstopDistances; // 0xc8
	TArray<float> BackstopRadiuses; // 0xd8
	TArray<float> AnimDriveMultipliers; // 0xe8
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FDropItem {
	USGItem* ItemClass; // 0x0
	int32_t DropNum; // 0x8
	EItemQuality Quality; // 0xc
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FGuildSkillRequireConfig : FTableRowBase {
	ESkillType SkillType; // 0x8
	int32_t SkillLevel; // 0xc
	int32_t GuildLevel; // 0x10
	TArray<FGuildSkillSingleRequire> SkillRequire; // 0x18
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FGameplayAttributeData {
	float BaseValue; // 0x8
	float CurrentValue; // 0xc
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FTouchInputControl {
	UTexture2D* Image1; // 0x0
	UTexture2D* Image2; // 0x8
	FVector2D Center; // 0x10
	FVector2D VisualSize; // 0x18
	FVector2D ThumbSize; // 0x20
	FVector2D InteractionSize; // 0x28
	FVector2D InputScale; // 0x30
	FKey MainInputKey; // 0x38
	FKey AltInputKey; // 0x50
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FOfficalTaxConfig {
	float TaxRateInit; // 0x0
	float TaxRateMin; // 0x4
	float TaxRateMax; // 0x8
	int64_t CumulativeTotalTaxMax; // 0x10
};

struct FAccomplishAchievementData {
	FString AchievementId; // 0x0
	char bKnowed : 1; // 0x10
	FDateTime AccomplishTime; // 0x18
	char bClientKnowed : 1; // 0x20
};

struct FVoiceSoundData {
	FText Description; // 0x0
	FName SoundID; // 0x18
};

struct FGameGoods {
	FString ID; // 0x0
};

struct FConvolutionBloomSettings {
	UTexture2D* Texture; // 0x0
	float Size; // 0x8
	FVector2D CenterUV; // 0xc
	float PreFilterMin; // 0x14
	float PreFilterMax; // 0x18
	float PreFilterMult; // 0x1c
	float BufferScale; // 0x20
};

struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs[0x8]; // 0x4
	FMaterialProxySettings MaterialSettings; // 0xc
	int32_t GutterSize; // 0x94
	int32_t SpecificLOD; // 0x98
	EMeshLODSelectionType LODSelectionType; // 0x9c
	char bGenerateLightMapUV : 1; // 0x9d
	char bComputedLightMapResolution : 1; // 0x9d
	char bPivotPointAtZero : 1; // 0x9d
	char bMergePhysicsData : 1; // 0x9d
	char bMergeMaterials : 1; // 0x9d
	char bCreateMergedMaterial : 1; // 0x9d
	char bBakeVertexDataToMesh : 1; // 0x9d
	char bUseVertexDataForBakingMaterial : 1; // 0x9d
	char bUseTextureBinning : 1; // 0x9e
	char bReuseMeshLightmapUVs : 1; // 0x9e
	char bMergeEquivalentMaterials : 1; // 0x9e
	char bUseLandscapeCulling : 1; // 0x9e
	char bIncludeImposters : 1; // 0x9e
	char bAllowDistanceField : 1; // 0x9e
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FMovieSceneSectionParameters {
	FFrameNumber StartFrameOffset; // 0x0
	bool bCanLoop; // 0x4
	FFrameNumber EndFrameOffset; // 0x8
	FFrameNumber FirstLoopStartFrameOffset; // 0xc
	float TimeScale; // 0x10
	int32_t HierarchicalBias; // 0x14
	float StartOffset; // 0x18
	float PrerollTime; // 0x1c
	float PostrollTime; // 0x20
};

struct FDataType_Support {
	FString GeometryCache_10_60EECC624C693307F620398174DF4F78; // 0x0
	FString StaticMeshes_11_CACE76324DB5B67A06E6BEA8FF4E9134; // 0x10
	FString StaticMeshesEnableWPO_12_589C74A44AC1367B026C8FBFA0045D44; // 0x20
	FString StaticMeshesEnableWPOCulling_13_177AB1CE478B5AC40D24B791225322F5; // 0x30
	FString StaticMeshesWPOCullingRadius_14_7BC25E7A4F0CD3C0F47B229B1D9DE927; // 0x40
	FString SkeletalMeshes_15_FFC240AB4BED120417AAC69C70124464; // 0x50
	FString ProceduralMeshes_21_36D63E534869DBA1D0DA50A3A01827F9; // 0x60
	FString NiagaraMeshes_16_10268FE94CA08A6B9573EAA7DADE014B; // 0x70
	FString NiagaraRibbons_17_B678BB4940773D107B14C2B4BE0095AF; // 0x80
	FString NiagaraSprites_18_05F8C4284E3C7649FE73ECB35F94FF34; // 0x90
	FString GIDirectionalLight_32_5B36A08C409AF3F6263AACA6D880682A; // 0xa0
	FString GIPointLight_33_41CEC9CA46598970DF2B9EAF7240AF95; // 0xb0
	FString GIRectLight_34_570E86F346FC898FB785DD9FA7B2CF69; // 0xc0
	FString GISkyLight_35_24DDF0D54211597D5928CC8279BA2613; // 0xd0
	FString GISpotLight_36_CA892FD74CE62E79DAC8EEA2A6942E59; // 0xe0
	FString ShadowsDirectional_37_158E74B94A0A037FDCB9DFA5ECF785C7; // 0xf0
	FString ShadowsPoint_38_EE2768114270CF56FBC5729DD8063DAA; // 0x100
	FString ShadowsRect_39_ED1CE4DC401687164B18EC89981A8854; // 0x110
	FString ShadowsSpot_40_8D4FCC9F4561A67CCCE062B526D23A3C; // 0x120
	FString EnableRayTracingCulling_45_51CAE4294A3A6F89F3317988496B5AA1; // 0x130
	FString RayTracingCullingAngle_46_372A6A3140C6BFC4B19E7AAEBA56C702; // 0x140
	FString RayTracingCullingRadius_47_E8E0FA1F4B28E157718787819ACC7807; // 0x150
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FAddPerkSlotMaxCountEntry {
	TMap<EAnimalQualityType, float> AddPerkSlotMaxCountChance; // 0x0
};

struct FGuildAuthorityShow {
	int32_t AuthorityType; // 0x0
	char bAllianceAuthority : 1; // 0x4
};

struct FSGAppearanceKit : FTableRowBase {
	int32_t KitIndex; // 0x8
	FText KitName; // 0x10
	FText Description; // 0x28
	TSoftObjectPtr<UTexture2D> KitIcon; // 0x40
	TArray<int32_t> MaleItemIndexArray; // 0x68
	TArray<int32_t> FemaleItemIndexArray; // 0x78
	char bNeedUnlock : 1; // 0x88
	TArray<FPlayerShowUnlockDetail> UnLockDatas; // 0x90
	char bHide : 1; // 0xa0
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FLastItemState {
	FGuid ItemId; // 0x0
	int32_t SlotIndex; // 0x10
	char bUsed : 1; // 0x14
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FMaterialParamName {
	FName AlphaParamName; // 0x0
	FName ColorParamName; // 0x8
	FName TextureParamName; // 0x10
	FName ScalarParamName[0x5]; // 0x18
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FGameplayEffectQuery {
	FDelegate CustomMatchDelegate_BP; // 0x10
	FGameplayTagQuery OwningTagQuery; // 0x20
	FGameplayTagQuery EffectTagQuery; // 0x68
	FGameplayTagQuery SourceTagQuery; // 0xb0
	FGameplayAttribute ModifyingAttribute; // 0xf8
	UObject* EffectSource; // 0x130
	UGameplayEffect* EffectDefinition; // 0x138
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FSourceEffectDynamicsProcessorSettings {
	ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESourceEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	float AttackTimeMsec; // 0x8
	float ReleaseTimeMsec; // 0xc
	float ThresholdDb; // 0x10
	float Ratio; // 0x14
	float KneeBandwidthDb; // 0x18
	float InputGainDb; // 0x1c
	float OutputGainDb; // 0x20
	char bStereoLinked : 1; // 0x24
	char bAnalogMode : 1; // 0x24
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FAnimalGenealogyData {
	FGuid ChunkGuid; // 0x0
	FString Name; // 0x10
	int32_t RealNameIndex; // 0x20
	int32_t Level; // 0x24
	ECharacterSex Sex; // 0x28
	float BaseQualityCorrection; // 0x2c
	float FinalQualityCorrection; // 0x30
	EAnimalQualityType QualityType; // 0x34
	TArray<float> FinalAttributeCorrectionMul; // 0x38
	TArray<int32_t> ForbidPlacePerkIndexes; // 0x48
	TArray<int32_t> AllowPlacePerkIndexes; // 0x58
	TArray<int32_t> SpecialPerkIndexes; // 0x68
	TArray<int32_t> RecessivePerkIndexes; // 0x78
	FGuid FatherChunkGuid; // 0x88
	FGuid MotherChunkGuid; // 0x98
	char bIsCastrated : 1; // 0xa8
	int32_t GenerationCount; // 0xac
	char bIsAlive : 1; // 0xb0
	TWeakObjectPtr<ASG_AnimalsCharacter> AnimalWeakPtr; // 0xb4
};

struct FGroomBuildSettings {
	bool bOverrideGuides; // 0x0
	float HairToGuideDensity; // 0x4
	EGroomInterpolationQuality InterpolationQuality; // 0x8
	EGroomInterpolationWeight InterpolationDistance; // 0x9
	bool bRandomizeGuide; // 0xa
	bool bUseUniqueGuide; // 0xb
};

struct FWaterBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FGuildEventDataTimeEntry {
	float RemainingIntervalTime; // 0x0
	TMap<FGuid, float> MemberEventRemainingCDTime; // 0x8
	float GuildEventRemainingCDTime; // 0x58
};

struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x0
	float DecayHeight; // 0x4
	int32_t MaxScatteringOrder; // 0x8
	int32_t TransmittanceTexWidth; // 0xc
	int32_t TransmittanceTexHeight; // 0x10
	int32_t IrradianceTexWidth; // 0x14
	int32_t IrradianceTexHeight; // 0x18
	int32_t InscatterAltitudeSampleNum; // 0x1c
	int32_t InscatterMuNum; // 0x20
	int32_t InscatterMuSNum; // 0x24
	int32_t InscatterNuNum; // 0x28
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FWaterCurveSettings {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FMarketGoods {
	int32_t OrderID; // 0x0
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FOnlineProxyStoreOffer {
	FString OfferId; // 0x0
	FText Title; // 0x10
	FText Description; // 0x28
	FText LongDescription; // 0x40
	FText RegularPriceText; // 0x58
	int32_t RegularPrice; // 0x70
	FText PriceText; // 0x78
	int32_t NumericPrice; // 0x90
	FString CurrencyCode; // 0x98
	FDateTime ReleaseDate; // 0xa8
	FDateTime ExpirationDate; // 0xb0
	EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8
	TMap<FString, FString> DynamicFields; // 0xc0
};

struct FPreviewAppearanceData {
	ECharacterSex Sex; // 0x0
	FAppearanceData AppearanceData; // 0x8
	USGItem* Helmet; // 0x168
	USGItem* Chest; // 0x170
	USGItem* Cuish; // 0x178
	USGItem* Back; // 0x180
	char bAppearanceState : 1; // 0x188
	USGItem* HelmetAppearance; // 0x190
	USGItem* ChestAppearance; // 0x198
	USGItem* UnderwaistAppearance; // 0x1a0
	USGItem* FashionKitHelmet; // 0x1a8
	USGItem* FashionKitChest; // 0x1b0
	USGItem* FashionKitCuish; // 0x1b8
	int32_t Level; // 0x1c0
	FString FlagImageString; // 0x1c8
};

struct FInputActionKeyMappingMap {
	TArray<FInputActionKeyMappingConfig> ActionKeyMappings; // 0x0
};

struct FSeasonDefine : FTableRowBase {
	int32_t SeasonIndex; // 0x8
	FDateTime StartTime; // 0x10
	FDateTime EndTime; // 0x18
	TArray<int32_t> SeasonQuestsIndexArray; // 0x20
	TArray<FSeasonWeekQuestDefine> SeasonWeekQuests; // 0x30
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x90
	FSlateBrush Pressed; // 0x118
	FSlateBrush Disabled; // 0x1a0
	FMargin NormalPadding; // 0x228
	FMargin PressedPadding; // 0x238
	FSlateSound PressedSlateSound; // 0x248
	FSlateSound HoveredSlateSound; // 0x260
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FHitAnims {
	TArray<UAnimMontage*> HitForward; // 0x0
	TArray<UAnimMontage*> HitBackward; // 0x10
	TArray<UAnimMontage*> HitLeft; // 0x20
	TArray<UAnimMontage*> HitRight; // 0x30
	FBlockHitAnims BlockHitAnims; // 0x40
};

struct FPersonalStructureNum {
	int32_t PersonalStructureUniqueId; // 0x0
	int32_t PersonalStructureNum; // 0x4
};

struct FGameplayAbilityRepAnimMontage {
	UAnimMontage* AnimMontage; // 0x0
	float PlayRate; // 0x8
	float position; // 0xc
	float BlendTime; // 0x10
	char NextSectionID; // 0x14
	char bRepPosition : 1; // 0x15
	char IsStopped : 1; // 0x15
	char ForcePlayBit : 1; // 0x15
	char SkipPositionCorrection : 1; // 0x15
	char bSkipPlayRate : 1; // 0x15
	FPredictionKey PredictionKey; // 0x18
	char SectionIdToPlay; // 0x28
};

struct FWoundData : FTableRowBase {
	TArray<USGBuff*> SectionBuff; // 0x8
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	CopyBoneDeltaMode CopyMode; // 0xeb
	float TranslationMultiplier; // 0xec
	float RotationMultiplier; // 0xf0
	float ScaleMultiplier; // 0xf4
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FAccomplishAchievementArray {
	TArray<FAccomplishAchievementData> AccomplishAchievements; // 0x0
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FStructureFrameSettings {
	TArray<FCraftResourceRequirement> FrameResourceRequirements; // 0x0
	FName StaticMeshName; // 0x10
	UStaticMesh* FrameStaticMesh; // 0x18
	FVector MeshLocation; // 0x20
	FRotator MeshRotaion; // 0x2c
	FVector MeshScale; // 0x38
	TArray<FStructureFrameMesh> ChildMesh; // 0x48
};

struct FWorldReticleParameters {
	FVector AOEScale; // 0x0
};

struct FSGAchievementTypeData : FTableRowBase {
	FText Name; // 0x8
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x38
};

struct FConditionalGameplayEffect {
	UGameplayEffect* EffectClass; // 0x0
	FGameplayTagContainer RequiredSourceTags; // 0x8
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FGeneralMeleeConfig {
	char bIsForceAimDirection : 1; // 0x0
	EAimDirection Enum_ForceAimDirection; // 0x1
	FVector2D RandomLookingBoneTime; // 0x4
	char bMoveForwardShouldMoveRight : 1; // 0xc
	char bMoveForwardAutoRandomRight : 1; // 0xc
	char bShouldRandomMoveRight : 1; // 0xc
	FVector2D RandomRightTime; // 0x10
	float CancelHitKnockDistanceOnAttackDistance; // 0x18
	FVector2D RandomHitCoolingTime; // 0x1c
	float KnockOnHitPercentage; // 0x24
	FVector2D KnockPercentageCoolingTime; // 0x28
	char bKeepBlock : 1; // 0x30
	char bUseAttackReboundAttack : 1; // 0x30
	char bUseAutoBlock : 1; // 0x30
	FVector2D SuperBlockRandomTime; // 0x34
	char bShouldRandomStopAttack : 1; // 0x3c
	FVector2D BeginAttackRandomTime; // 0x40
	FVector2D AttackRandomTime; // 0x48
	FVector2D StopAttackRandomTime; // 0x50
	float AttackErrorToleranceDistance; // 0x58
	float RiderAttackErrorToleranceRange; // 0x5c
	float KeepInPlaceDistanceTolerance; // 0x60
	float EquipShooterWeaponWaitTimeOnInvalidPath; // 0x64
	float EquipShooterWeaponHeightOnInvalidPath; // 0x68
	float EquipShooterWeaponSpeedOnInvalidPath; // 0x6c
	float EquipShooterWeaponDistance; // 0x70
	FVector2D EquipShooterWeaponCoolingTime; // 0x74
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FVehicleMountAnim {
	char bUseAnimNotifyOnRider : 1; // 0x0
	char bUseTransformOnMount : 1; // 0x0
	char bUseTransformOnMountFromRider : 1; // 0x0
	char bUseTransformOnDismount : 1; // 0x0
	char bUseTransformOnDismountFromRider : 1; // 0x0
	TMap<EInputDirection, FTransform> TMap_MountTransforms; // 0x8
	TMap<EInputDirection, UAnimMontage*> TMap_MountVehicltAnimMontage; // 0x58
	TMap<EInputDirection, FTransform> TMap_DismountTransforms; // 0xa8
	TMap<EInputDirection, UAnimMontage*> TMap_DismountVehicltAnimMontage; // 0xf8
};

struct FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x20
	float CurrentTime; // 0x24
	float PreviousTime; // 0x28
	float Duration; // 0x2c
	FRootMotionSourceStatus Status; // 0x30
	FRootMotionSourceSettings Settings; // 0x31
	bool bInLocalSpace; // 0x32
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
};

struct FHorizonDialogueSegmentInfo {
	FString Text; // 0x0
	FSlateColor ColorAndOpacity; // 0x10
	FSlateFontInfo Font; // 0x38
	FVector2D ShadowOffset; // 0x90
	FSlateColor ShadowColorAndOpacity; // 0x98
	float DialogueMsgSpeed; // 0xc0
	float DialogueMsgWait; // 0xc4
	FMargin PaddingMargin; // 0xcc
	FSlateColor HypertextHoveredColor; // 0xe0
	FSlateColor HypertextVisitedColor; // 0x108
	UHorizonButton* BackgroundButtonClass; // 0x130
	float DialogueSoundVolumeMultiplier; // 0x138
	float DialogueSoundPitchMultiplier; // 0x13c
	float DialogueSoundStartTime; // 0x140
	USoundBase* DialogueSound; // 0x148
	FString EventPayload; // 0x1d0
	FHorizonDialogueRubyTextInfo RubyTextInfo; // 0x1e0
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FSpecialNpcSpawnInfo {
	UNpcSpawnTemplate* NpcSpawnTemplateClass; // 0x0
	int32_t NumberOfNPCEachPlayer; // 0x8
	int32_t MaxNumberOfNPC; // 0xc
	FString StartSpawnTime; // 0x10
	FString StopSpawnTime; // 0x20
	float SpawnInterval; // 0x30
	float SpawnCDInterval; // 0x34
	float SetEnemyChance; // 0x38
	int32_t PlayerMinLevel; // 0x3c
	int32_t PlayerMaxLevel; // 0x40
	int32_t CurTotalNumberOfNPC; // 0x44
	double LastSpawnTime; // 0x48
	double LastCDTime; // 0x50
	char bIsCDTime; // 0x58
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FAnimalFurComponentEntry {
	USkeletalMeshComponent* FurSkeletalMeshComponent; // 0x0
	UGroomComponent* FurGroomComponent; // 0x8
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FTipsType {
	EToolTipsItemType ToolTipsItemType; // 0x0
	ETipsFilterType TipsType; // 0x1
};

struct FNavigationFilterFlags {
	char bNavFlag0 : 1; // 0x0
	char bNavFlag1 : 1; // 0x0
	char bNavFlag2 : 1; // 0x0
	char bNavFlag3 : 1; // 0x0
	char bNavFlag4 : 1; // 0x0
	char bNavFlag5 : 1; // 0x0
	char bNavFlag6 : 1; // 0x0
	char bNavFlag7 : 1; // 0x0
	char bNavFlag8 : 1; // 0x1
	char bNavFlag9 : 1; // 0x1
	char bNavFlag10 : 1; // 0x1
	char bNavFlag11 : 1; // 0x1
	char bNavFlag12 : 1; // 0x1
	char bNavFlag13 : 1; // 0x1
	char bNavFlag14 : 1; // 0x1
	char bNavFlag15 : 1; // 0x1
};

struct FGuildEventSpawnEntry {
	int32_t SpawnCount; // 0x0
	int32_t SpawnLevel; // 0x4
	AActor* SpawnClass; // 0x8
	UCharacterRandomAppearanceWeight* RandomAppearanceWeightOverride; // 0x10
	char bRandomNPCAppearanceTemplate : 1; // 0x18
	TArray<FName> NPCAppearanceTemplatesOverride; // 0x20
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FConstraintInstance : FConstraintInstanceBase {
	FName JointName; // 0x18
	FName ConstraintBone1; // 0x20
	FName ConstraintBone2; // 0x28
	FVector Pos1; // 0x30
	FVector PriAxis1; // 0x3c
	FVector SecAxis1; // 0x48
	FVector Pos2; // 0x54
	FVector PriAxis2; // 0x60
	FVector SecAxis2; // 0x6c
	FRotator AngularRotationOffset; // 0x78
	char bScaleLinearLimits : 1; // 0x84
	FConstraintProfileProperties ProfileInstance; // 0x8c
};

struct FHairGroupsLOD {
	TArray<FHairLODSettings> LODs; // 0x0
	float ClusterWorldSize; // 0x10
	float ClusterScreenSizeScale; // 0x14
};

struct FGuildEventDataEntry {
	float ConflictValue; // 0x0
	int32_t OccupyModifyConflictCount; // 0x4
	FDateTime OccupyModifyConflictDataTime; // 0x8
	TMap<int32_t, int32_t> CountDatas; // 0x10
	TMap<int32_t, bool> ClearCountDatas; // 0x60
	TMap<int32_t, FGuildEventDataTimeEntry> TimeEntries; // 0xb0
	TArray<FGuildEventRecord> GuildEventRecords; // 0x100
};

struct FGuildLayerTextures : FTableRowBase {
	int32_t ImageIndex; // 0x8
	USGItem* UnlockItem; // 0x10
	TArray<UTexture*> Textures; // 0x18
	TArray<UTexture*> TextureMasks; // 0x28
	TArray<UTexture*> TextureHighLights; // 0x38
};

struct FItemFunctionEntry {
	FGuid UniqueId; // 0x0
	float RemaingFunctionTime; // 0x10
	EItemQuality SelectQualityType; // 0x14
};

struct FVirtualStaticMeshData {
	UAnimMontage* PlayMontage; // 0x0
	UStaticMeshComponent* VirtualPropStaticMeshComponent; // 0x8
	bool ForbidOthersSpawn; // 0x10
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FInnerBattleInfo {
	int32_t ServerId; // 0x0
	FGuid BattleId; // 0x4
	TArray<FInnerBattleGuildInfo> GuildInfo; // 0x18
	int32_t SuccessIndex; // 0x28
	int64_t BattleOverTimeTicks; // 0x30
	BATTLE_SIGNUP_INFO_STATE_TYPE StateType; // 0x38
	int32_t DefensePlayerNum; // 0x3c
	int32_t AttackPlayerNum; // 0x40
	int32_t BattleProgress; // 0x44
};

struct FCheekData {
	float CheekBoneWidth; // 0x0
	float CheekBoneHeight; // 0x4
	float CheekHollow; // 0x8
	float CheekBoneDepth; // 0xc
	float CheekBoneScale; // 0x10
	float CheekLowerDepth; // 0x14
	float CheekLowerScale; // 0x18
	float CheekOuterWidth; // 0x1c
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FNewsBase {
	ENewsType NewsType; // 0x8
	FDateTime NewsTime; // 0x10
};

struct FRequiredGeneralSkillType {
	EGeneralsSkillStatusType SkillType; // 0x0
	int32_t SkillValue; // 0x4
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FQuestText : FTableRowBase {
	int32_t QuestID; // 0x8
	FText QuestName; // 0x10
	FText QuestDesc; // 0x28
	TSoftObjectPtr<UTexture2D> QuestIcon; // 0x40
	FString QuestWikiUrl; // 0x68
	TArray<FQuestObjectText> ObjectDescOverride; // 0x78
};

struct FClassReplicationInfo {
	float DistancePriorityScale; // 0x0
	float StarvationPriorityScale; // 0x4
	float AccumulatedNetPriorityBias; // 0x8
	uint16_t ReplicationPeriodFrame; // 0xc
	uint16_t FastPath_ReplicationPeriodFrame; // 0xe
	uint16_t ActorChannelFrameTimeout; // 0x10
	float CullDistance; // 0x68
	float CullDistanceSquared; // 0x6c
};

struct FTattooData {
	FName TattooName; // 0x0
	float TattoUMove; // 0x8
	float TattoVMove; // 0xc
	float TattoUSize; // 0x10
	float TattoVSize; // 0x14
	float TattoRotation; // 0x18
	float TattoAlpha; // 0x1c
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FPerkItemRequirement {
	int32_t RequireAmount; // 0x0
	USGItem* RequireItemTemplate; // 0x8
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FGuildDetailData {
	FGuid GuildUid; // 0x0
	FGuid DirectAllianceUid; // 0x10
	int32_t UpgradeExperience; // 0x20
	int64_t ActivityPoint; // 0x28
	FString InnerBillboard; // 0x30
	TArray<FGuildMemberInfo> MemberInfos; // 0x40
	TArray<FGuildMemberKPIInfo> MemberKPIInfos; // 0x50
	TArray<FGuildHistoryInfo> GuildLogs; // 0x60
	TArray<FApplyingJoinGuildInfo> ApplyJoinInfos; // 0x70
	int64_t LeaveAllianceTime; // 0x80
	int32_t GuildAuthority[0x1a]; // 0x88
	FString GuildChannel; // 0xf0
	float GatherRatio; // 0x100
	TArray<FGuildCustomGroup> CustomGroups; // 0x108
	int32_t SkillLevels[0x33]; // 0x118
	int64_t SkillInActiveTime; // 0x1e8
	int64_t silver; // 0x1f0
	TArray<int32_t> CraftPerks; // 0x1f8
	TArray<FInviteJoinAllianceInfo> InviteAlliances; // 0x208
	FDateTime LastActivityPointDate; // 0x218
	int32_t PerDayActivityPoint; // 0x220
	int32_t OccupySellItemNum; // 0x224
	float OccupySellItemPrice; // 0x228
	int32_t LastSellItemDate; // 0x22c
	FDateTime LastChangeNameTime; // 0x230
	FDateTime LastChangeImageTime; // 0x238
	int64_t OperateAuthTime[0x1a]; // 0x240
};

struct FBodyBoneName {
	TMap<EBodyBone, FName> BodyBoneNameConfig; // 0x0
};

struct FCareerDefaultInventoryItems {
	TMap<USGItem*, int32_t> DefaultInventoryItems; // 0x0
	TArray<USGItem*> DefaultEquippedItems; // 0x50
	TMap<USGItem*, int32_t> DefaultShortCutItems; // 0x60
	USGItem* AmmonType; // 0xb0
	ASG_HorseCharacter* HorseCharacter; // 0xb8
	int32_t HorseLevel; // 0xc0
	int32_t HorseTameLevel; // 0xc4
	TArray<USGItem*> HorseEquippedItems; // 0xc8
};

struct FGameplayAbilitySpecContainer : FFastArraySerializer {
	TArray<FGameplayAbilitySpec> Items; // 0x108
	UAbilitySystemComponent* Owner; // 0x118
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x90
	int32_t LandscapeExportLOD; // 0x94
	FMaterialProxySettings LandscapeMaterialSettings; // 0x98
	bool bBakeFoliageToLandscape; // 0x120
	bool bBakeGrassToLandscape; // 0x121
	bool bGenerateMeshNormalMap; // 0x122
	bool bGenerateMeshMetallicMap; // 0x123
	bool bGenerateMeshRoughnessMap; // 0x124
	bool bGenerateMeshSpecularMap; // 0x125
	bool bGenerateLandscapeNormalMap; // 0x126
	bool bGenerateLandscapeMetallicMap; // 0x127
	bool bGenerateLandscapeRoughnessMap; // 0x128
	bool bGenerateLandscapeSpecularMap; // 0x129
};

struct FGoodsSaveInfo {
	int32_t GoodsIndex; // 0x0
	int32_t Amount; // 0x4
	float Price; // 0x8
	int32_t BasePrice; // 0xc
	float PriceRatio; // 0x10
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FGeneralBindUseItem {
	float MinLevel; // 0x0
	int32_t NeedAmount; // 0x4
	TArray<USGItem*> UseBindItem; // 0x8
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FPhysicsCapsuleData {
	float Radius; // 0x0
	float Length; // 0x4
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FLightningIntensityParams {
	float SparkIntensity; // 0x0
	float TrailIntensity; // 0x4
	float BoltIntensity; // 0x8
};

struct FHairGroupsProceduralCards {
	FHairCardsClusterSettings ClusterSettings; // 0x0
	FHairCardsGeometrySettings GeometrySettings; // 0x8
	FHairCardsTextureSettings TextureSettings; // 0x24
	int32_t Version; // 0x34
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FPaperTerrainMaterialRule {
	UPaperSprite* StartCap; // 0x0
	TArray<UPaperSprite*> Body; // 0x8
	UPaperSprite* EndCap; // 0x18
	float MinimumAngle; // 0x20
	float MaximumAngle; // 0x24
	bool bEnableCollision; // 0x28
	float CollisionOffset; // 0x2c
	int32_t DrawOrder; // 0x30
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FQuestProgress {
	int32_t QuestID; // 0x0
	TArray<int32_t> Progresses; // 0x8
};

struct FBodyInstanceCore {
	char bSimulatePhysics : 1; // 0x10
	char bOverrideMass : 1; // 0x10
	char bEnableGravity : 1; // 0x10
	char bAutoWeld : 1; // 0x10
	char bStartAwake : 1; // 0x10
	char bGenerateWakeEvents : 1; // 0x10
	char bUpdateMassWhenScaleChanges : 1; // 0x10
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FLandscapeSplineMeshEntry {
	UStaticMesh* Mesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
	char bCenterH : 1; // 0x18
	FVector2D CenterAdjust; // 0x1c
	char bScaleToWidth : 1; // 0x24
	FVector Scale; // 0x28
	LandscapeSplineMeshOrientation Orientation; // 0x34
	ESplineMeshAxis ForwardAxis; // 0x35
	ESplineMeshAxis UpAxis; // 0x36
};

struct FActivityRankDataInfo {
	float ActivityPoint; // 0x0
	char ActivityPointChanged : 1; // 0x4
	char HighestLevelSkill; // 0x5
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FRewardConditionParamMap {
	TMap<FString, FConditionRewardMap> ConditionParamMap; // 0x0
};

struct FSetByCallerFloat {
	FName DataName; // 0x0
	FGameplayTag DataTag; // 0x8
};

struct FAnimalsCustomAttackInfoes {
	TArray<FAnimalsCustomAttackInfo> Struct_AttackInfoes; // 0x0
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FGuildHistoryInfo {
	int32_t Type; // 0x0
	FDateTime Time; // 0x8
	int32_t IntParam1; // 0x10
	int32_t IntParam2; // 0x14
	FString StrParam1; // 0x18
	FString StrParam2; // 0x28
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FGuildEventModifyConflict {
	TArray<FGuildEventRegionData> RegionDatas; // 0x0
	FGuildEventModifyConflictEntry ModifyConflictEntry; // 0x10
	int32_t Count; // 0x98
	AActor* MonsterClass; // 0xa0
	char bShouldClearCount : 1; // 0xa8
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FMsgServerEnterLogicServer : FMessageBase {
	int32_t ServerId; // 0x8
	FGuid BattleId; // 0xc
	int32_t ServerType; // 0x1c
};

struct FDatasmithPostProcessSettingsTemplate {
	char bOverride_WhiteTemp : 1; // 0x0
	char bOverride_ColorSaturation : 1; // 0x0
	char bOverride_VignetteIntensity : 1; // 0x0
	char bOverride_FilmWhitePoint : 1; // 0x0
	char bOverride_AutoExposureMethod : 1; // 0x0
	char bOverride_CameraISO : 1; // 0x0
	char bOverride_CameraShutterSpeed : 1; // 0x0
	char bOverride_DepthOfFieldFstop : 1; // 0x4
	float WhiteTemp; // 0x8
	float VignetteIntensity; // 0xc
	FLinearColor FilmWhitePoint; // 0x10
	FVector4 ColorSaturation; // 0x20
	EAutoExposureMethod AutoExposureMethod; // 0x30
	float CameraISO; // 0x34
	float CameraShutterSpeed; // 0x38
	float DepthOfFieldFstop; // 0x3c
};

struct FAttachedParams {
	FTransform TransformLS; // 0x0
	FTransform TransformWS; // 0x30
	FTransform TransformInitialize; // 0x60
	AActor* AttachedActor; // 0x90
	UPrimitiveComponent* AttachedComponent; // 0x98
};

struct FGlobalMapActorTipData {
	AGlobalMapActor* GlobalMapActor; // 0x0
	USGToolTipWidget* Tips; // 0x8
};

struct FPhysicsConvexData {
	int32_t NumVertices; // 0x0
	int32_t NumFaces; // 0x4
	FKShapeElem Element; // 0x8
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
	float DryLevel; // 0x14
	bool bFilterEnabled; // 0x18
	EStereoDelayFiltertype FilterType; // 0x19
	float FilterFrequency; // 0x1c
	float FilterQ; // 0x20
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FGuildUIData : FTableRowBase {
	FString GuildName; // 0x8
	FLinearColor GuildColor; // 0x18
	TSoftObjectPtr<UTexture2D> GuildFlag; // 0x28
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FGuildStructureData {
	TArray<FGuildStructureNum> StructureNums; // 0x0
	char bFirstCreateOccupy : 1; // 0x10
	char bLastWeekPreventDecay : 1; // 0x10
	char bThisWeekPreventDecay : 1; // 0x10
	char bNextWeekPreventDecay : 1; // 0x10
	TArray<int32_t> AddProtectIDs; // 0x18
	int32_t AddProtectTime; // 0x28
	TArray<int32_t> ProtectIDs; // 0x30
	TArray<FProtectTimeRange> CurrentProtectTimeRange; // 0x40
	TArray<FProtectTimeRange> NextProtectTimeRange; // 0x50
	TArray<FProtectTimeRange> UTCProtectTimeRange; // 0x60
	TArray<FOccupyBuyItemNum> BuyDecayInfo; // 0x70
	TArray<FOccupyTaxBuyItemNum> BuyProtectInfo; // 0x80
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FUIWSGerstnerWave {
	float WaveLength; // 0x0
	float Amplitude; // 0x4
	float Steepness; // 0x8
	FVector Direction; // 0xc
	FVector2D WaveVector; // 0x18
	float WaveSpeed; // 0x20
	float WKA; // 0x24
	float Q; // 0x28
	float PhaseOffset; // 0x2c
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FGuildEventData {
	TMap<EEventGuildType, FGuildEventDataEntry> GuildEventDataEntries; // 0x0
	TMap<FGuid, FGuildEventDataStarted> MemberEventStartedDatas; // 0x50
	FGuildEventDataStarted GuildEventStartedData; // 0xa0
	float GuildEventCommonRemainCD; // 0x108
	char ShowIssues : 1; // 0x10c
};

struct FGameplayAbilitySpecHandleAndPredictionKey {
	FGameplayAbilitySpecHandle AbilityHandle; // 0x0
	int32_t PredictionKeyAtCreation; // 0x4
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FCharacterFeatureMorphTargetData {
	FName MorphTargetName; // 0x0
	float Value; // 0x8
	float DefaultValue; // 0xc
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FFilterWordData : FTableRowBase {
	FString Words; // 0x8
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FMoustacheData {
	FName MoustacheName; // 0x0
	FLinearColor MoustacheColor; // 0x8
};

struct FWeatherEffectEnvironment {
	TMap<EEnvironmentVolumeType, float> WeatherEffectEnvironmentMap; // 0x0
};

struct FHairGroupCardsInfo {
	int32_t NumCards; // 0x0
	int32_t NumCardVertices; // 0x4
};

struct FCropPhaseData {
	float StageGrowthThreshold; // 0x0
	float StageStartScale; // 0x4
	float StageEndScale; // 0x8
	UStaticMesh* StageStaticMesh; // 0x10
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FCraftPerkRowBase : FTableRowBase {
	int32_t CraftPerkGroupID; // 0x8
	USGCraftPerkGroup* CraftPerkGroupClass; // 0x10
};

struct FIdleAnims {
	char bUseMainHandLayer : 1; // 0x0
	char bRiderUseMainHandLayer : 1; // 0x0
	float MainHandLayerBlendWeight; // 0x4
	char bUseOffHandLayer : 1; // 0x8
	char bRiderUseOffHandLayer : 1; // 0x8
	float OffHandLayerBlendWeight; // 0xc
	UAnimSequence* IdlePoseAnim; // 0x10
	UAnimSequence* IdleLayerPoseAnim; // 0x18
	UAnimSequence* RiderIdlePoseAnim; // 0x20
	UAnimSequence* RiderIdleLayerPoseAnim; // 0x28
	UAnimSequence* IdleAdditiveAnim; // 0x30
	UAnimMontage* IdleRelaxedMontage; // 0x38
	UAnimMontage* RiderIdleRelaxedMontage; // 0x40
	UAimOffsetBlendSpace* AO; // 0x48
	UAimOffsetBlendSpace* OffHandAO; // 0x50
	UAimOffsetBlendSpace* Rider_AO; // 0x58
	UAimOffsetBlendSpace* Rider_OffHandAO; // 0x60
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FFarmWorkerSkillData : FTableRowBase {
	ESkillType SkillType; // 0x8
	float SkillAddExp; // 0xc
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FGuildContainerRecSets {
	TArray<FGuildContainerRecord> Sets; // 0x0
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FGameServerInfo {
	FString MapName; // 0x0
	FString SessionName; // 0x10
	int32_t ClusterId; // 0x20
	EGameServerDistrictId DistrictId; // 0x24
	int32_t ServerId; // 0x28
	int32_t CityGroupId; // 0x2c
	int32_t CityId; // 0x30
	int32_t XianChengId; // 0x34
	FString IP; // 0x38
	FString DefaultIP; // 0x48
	FString IPAddress; // 0x58
	FString SteamAddress; // 0x68
	FString P2PHostData; // 0x78
	int32_t LobbyPort; // 0x88
	int32_t QueryPort; // 0x8c
	int32_t PingMs; // 0x90
	EGameServerType ServerType; // 0x94
	EGameServerPVPType GameServerPVPType; // 0x95
	int32_t PlayerLevelLimit; // 0x98
	EGameServerState ServerState; // 0x9c
	int32_t NumPlayers; // 0xa0
	int32_t CommonNumPlayers; // 0xa4
	int32_t TrueNumPlayers; // 0xa8
	int32_t MaxPlayers; // 0xac
	int32_t MaxHuKou; // 0xb0
	EDataStoreType DataStoreType; // 0xb4
	EGameServerOwner GameServerOwnerType; // 0xb5
	int32_t ServerLevel; // 0xb8
	char bUsePassport : 1; // 0xbc
	char bHasPassword : 1; // 0xbc
	FString Description; // 0xc0
	int32_t MajorVersion; // 0xd0
	int32_t MinorVersion; // 0xd4
	int64_t ServerOpenTime; // 0xd8
};

struct FCompilerNativizationOptions {
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0x8
	bool ClientOnlyPlatform; // 0x9
	bool bExcludeMonolithicHeaders; // 0xa
	TArray<FName> ExcludedModules; // 0x10
	TSet<FSoftObjectPath> ExcludedAssets; // 0x20
	TArray<FString> ExcludedFolderPaths; // 0x70
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FPredictionKey {
	UPackageMap* PredictiveConnection; // 0x0
	int16_t Current; // 0x8
	int16_t Base; // 0xa
	bool bIsStale; // 0xc
	bool bIsServerInitiated; // 0xd
};

struct FPrefabVariantRule {
	FName Scope; // 0x0
	FString Rule; // 0x8
	EPrefabVariantRuleType RuleType; // 0x18
	bool bEnable; // 0x19
};

struct FRadarChartSegment {
	FText Label; // 0x0
	UTexture* icon; // 0x18
	FLinearColor Color; // 0x20
	EHorizontalAlignment HAlignment; // 0x30
	EVerticalAlignment VAlignment; // 0x31
	FVector2D Offset; // 0x34
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FEmissionParams {
	bool bUseLightRenderer; // 0x0
	float LightMultiplier; // 0x4
	float LightExponent; // 0x8
	float LightRadius; // 0xc
	float LightVolumetricScattering; // 0x10
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FVaultingParams {
	char Index; // 0x0
	char bEnable : 1; // 0x1
	UAnimMontage* VaultingMontage; // 0x8
	float AttachedTime; // 0x10
	FVector2D InitializeMontageData; // 0x14
	FVector2D InitializeMontageReverseRange; // 0x1c
	FVector2D InitializeMontageBlendTriggerData; // 0x24
	FVector VaultingStartOffset; // 0x2c
	FVector VaultingDesiredOffset; // 0x38
	UAnimMontage* RuntimeVaultingMontage; // 0x108
};

struct FGoodsSellerCfgTable : FTableRowBase {
	GoodsSellerType SellerType; // 0x8
	TMap<TrafficGoodsType, GoodsSellerBusinessType> BusinessMap; // 0x10
	TMap<int32_t, FGoodsSellerCfgPerLevel> SellerCfgMap; // 0x60
};

struct FItemTransportPriceRowBase : FTableRowBase {
	int32_t CityGroupId; // 0x8
	int32_t ItemIndex; // 0xc
	int64_t Type; // 0x10
	int64_t Rule; // 0x18
	float Price; // 0x20
};

struct FPlayerBuffMap {
	TMap<TWeakObjectPtr<ABaseCharacter>, USGBuff*> BuffMap; // 0x0
};

struct FSetPasswordLockInof {
	int32_t SetCount; // 0x0
	double LastSetTime; // 0x8
};

struct FHairConfigDataMap {
	TMap<FName, FHairConfigData> HairConfigMap; // 0x0
};

struct FMagicLeapPlanesQuery {
	TArray<EMagicLeapPlaneQueryFlags> Flags; // 0x0
	UBoxComponent* SearchVolume; // 0x10
	int32_t MaxResults; // 0x18
	float MinHoleLength; // 0x1c
	float MinPlaneArea; // 0x20
	FVector SearchVolumePosition; // 0x24
	FQuat SearchVolumeOrientation; // 0x30
	FVector SearchVolumeExtents; // 0x40
	float SimilarityThreshold; // 0x4c
	bool bSearchVolumeTrackingSpace; // 0x50
	bool bResultTrackingSpace; // 0x51
};

struct FNetTaxRateInfo {
	int32_t ServerId; // 0x0
	int32_t CityId; // 0x4
	int32_t OfficalJobTaxType; // 0x8
	float TaxRate; // 0xc
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FMsgRecordBase {
	EMsgRecordType MsgRecordType; // 0x8
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FAnimalFarmData {
	int32_t AnimalIndex; // 0x0
	int32_t AnimalPrevIndex; // 0x4
	float AnimalCurrentHealth; // 0x8
	int32_t AnimalAverageLevel; // 0xc
	FString AnimalName; // 0x10
	FVector AnimalScale; // 0x20
	TArray<FAnimalFarmDataEntry> AnimalDataEntries; // 0x30
	int32_t AnimalDropCount; // 0x40
	TArray<FDropItem> AnimalDropItems; // 0x48
	TArray<FAnimalFarmMeshEntry> AnimalMeshEntries; // 0x58
	char bHasAnimalDead : 1; // 0x68
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FMsgRecord_WillDead : FMsgRecordBase {
	EAttackerType AttackerType; // 0x10
	FString AttackerOwnerName; // 0x18
	FString AttackerName; // 0x28
	bool IsAttackerInGuild; // 0x38
	FString AttackerOwnerGuildName; // 0x40
	bool IsDeadSelf; // 0x50
	FString WillDeadName; // 0x58
	FVector WillDeadLocation; // 0x68
	AActor* AttackerTemplate; // 0x78
	AActor* WillDeadTemplate; // 0x80
	EMsgRecord_DeadType DeadType; // 0x88
};

struct FCharacterStructureData {
	TArray<FPersonalStructureNum> StructureNums; // 0x0
	TArray<FOccupyStructureRPC> SeachStructureDatas; // 0x10
};

struct FModifyConfig {
	bool EnableModify; // 0x0
	FVector CurrentTranslation; // 0x4
	FVector TargetTranslation; // 0x10
	FRotator CurrentRotation; // 0x1c
	FRotator TargetRotation; // 0x28
	FVector CurrentScale; // 0x34
	FVector TargetScale; // 0x40
};

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x150
	int32_t LODThreshold; // 0x160
	FName SourceSocketName; // 0x164
	FName PivotSocketName; // 0x16c
	FVector LookAtLocation; // 0x174
	FVector SocketAxis; // 0x180
	float Alpha; // 0x18c
};

struct FMovieSceneCaptureSettings {
	FDirectoryPath OutputDirectory; // 0x0
	AGameModeBase* GameModeOverride; // 0x10
	FString OutputFormat; // 0x18
	bool bOverwriteExisting; // 0x28
	bool bUseRelativeFrameNumbers; // 0x29
	int32_t HandleFrames; // 0x2c
	FString MovieExtension; // 0x30
	char ZeroPadFrameNumbers; // 0x40
	FFrameRate FrameRate; // 0x44
	bool bUseCustomFrameRate; // 0x4c
	FFrameRate CustomFrameRate; // 0x50
	FCaptureResolution Resolution; // 0x58
	bool bEnableTextureStreaming; // 0x60
	bool bCinematicEngineScalability; // 0x61
	bool bCinematicMode; // 0x62
	bool bAllowMovement; // 0x63
	bool bAllowTurning; // 0x64
	bool bShowPlayer; // 0x65
	bool bShowHUD; // 0x66
	bool bUsePathTracer; // 0x67
	int32_t PathTracerSamplePerPixel; // 0x68
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FAnimalsAnimsConfig {
	TMap<EAnimalsStanceType, FAnimalsAnimsStanceConfig> Ground_AnimalsStanceConfig; // 0x0
	FAnimalsAnimsStanceConfig Swim_AnimalsStanceConfig; // 0x50
	FVehicleMountAnim MountAnims; // 0x448
	FVehicleMountAnim FastMountAnims; // 0x590
	TMap<EAnimalsMovingGaitType, FCardinalDirectionSpeedConfig> TMap_AnimsSpeedConfig; // 0x6d8
	TMap<EAnimalsMovingGaitType, FCardinalDirectionSpeedConfig> TMap_SwimAnimsSpeedConfig; // 0x728
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x0
	char bSupportsAgent1 : 1; // 0x0
	char bSupportsAgent2 : 1; // 0x0
	char bSupportsAgent3 : 1; // 0x0
	char bSupportsAgent4 : 1; // 0x0
	char bSupportsAgent5 : 1; // 0x0
	char bSupportsAgent6 : 1; // 0x0
	char bSupportsAgent7 : 1; // 0x0
	char bSupportsAgent8 : 1; // 0x1
	char bSupportsAgent9 : 1; // 0x1
	char bSupportsAgent10 : 1; // 0x1
	char bSupportsAgent11 : 1; // 0x1
	char bSupportsAgent12 : 1; // 0x1
	char bSupportsAgent13 : 1; // 0x1
	char bSupportsAgent14 : 1; // 0x1
	char bSupportsAgent15 : 1; // 0x1
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FAssetStatus {
	UObject* ResourceObject; // 0x0
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FPerkRowBase : FTableRowBase {
	int32_t PerkID; // 0x8
	USGPerk* PerkClass; // 0x10
};

struct FGeneralLevelUpConfig {
	int32_t Level; // 0x0
	TArray<FRequireItems> RequireItems; // 0x8
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FDistributionLookupTable {
	float TimeScale; // 0x0
	float TimeBias; // 0x4
	TArray<float> Values; // 0x8
	char Op; // 0x18
	char EntryCount; // 0x19
	char EntryStride; // 0x1a
	char SubEntryStride; // 0x1b
	char LockFlag; // 0x1c
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	ENaturalSoundFalloffMode FalloffMode; // 0x10
	FVector AttenuationShapeExtents; // 0x14
	float ConeOffset; // 0x20
	float FalloffDistance; // 0x24
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0
	FStructSerializerArrayTestStruct Arrays; // 0x170
	FStructSerializerMapTestStruct Maps; // 0x1d0
	FStructSerializerSetTestStruct Sets; // 0x310
};

struct FItemAutoCraftQueueEntry {
	USGItem* ItemTemplate; // 0x0
	float RemaingCraftTime; // 0x8
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FAnimalCageConfig {
	ASG_AnimalsCharacter* AnimalTemplate; // 0x0
	USkeletalMesh* OverrideAnimalMeshMale; // 0x8
	USkeletalMesh* OverrideAnimalMeshFemale; // 0x10
	TArray<UAnimMontage*> AnimalMontages; // 0x18
	float AnimalEscapeTime; // 0x28
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FQuestTrigger {
	EQuestTriggerType TriggerType; // 0x0
	int32_t TriggerValue; // 0x4
};

struct FStructureFrameStep {
	TArray<FStructureFrameSettings> FrameSettings; // 0x0
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FSGItemNetInfo {
	USGItem* DefaultItem; // 0x0
	FGuid UniqueId; // 0x8
	int32_t ItemIndex; // 0x18
	int32_t SlotIndex; // 0x1c
	EEquipWeaponSlot EquipWeaponSlot; // 0x20
	int32_t Amount; // 0x24
	int32_t ExtraAmount; // 0x28
	int32_t LuckAmount; // 0x2c
	int32_t PerkAddAmount; // 0x30
	int32_t Durable; // 0x34
	int32_t MaxDurable; // 0x38
	EItemQuality ItemQuality; // 0x3c
	char CompressFlag; // 0x3d
	float ExpireRemaingTime; // 0x40
	int32_t LeftPoison; // 0x44
	int32_t CurUsePoisonIndex; // 0x48
	int32_t CurUseAmmoIndex; // 0x4c
	int64_t TransportTick; // 0x50
	bool bSavedToPlayer; // 0x58
	FGuid TransportMachineGuid; // 0x5c
	int32_t TransportXianChengKey; // 0x6c
	EGameServerPVPType TransportPVPType; // 0x70
	int32_t BaoZangPositionIndex; // 0x74
	ECapitalType CapitalType; // 0x78
	int32_t ShopPropsIndex; // 0x7c
	TArray<FSGFoodBoxInfo> FoodBoxInfo; // 0x80
	float Weight; // 0x90
	FGuid GuildId; // 0x94
	FString TrapAnimalName; // 0xa8
	float TrapAnimalScale; // 0xb8
	int32_t TrapAnimalLevel; // 0xbc
	ECharacterSex TrapAnimalSex; // 0xc0
	int32_t TrapAnimalSpecies; // 0xc4
	FGuid HuKouBindPlayerID; // 0xc8
	int32_t HuKouBindServerID; // 0xd8
	int32_t HuKouBindXianchengKey; // 0xdc
	FDateTime ExpireDateTime; // 0xe0
	float Strengthen_Durable; // 0xe8
	int32_t Level; // 0xec
	int32_t Strengthen_Index; // 0xf0
	int32_t TrafficGoodsIndex; // 0xf4
	TrafficGoodsType GoodsType; // 0xf8
	int32_t WalletCapitalAmount; // 0xfc
	ECapitalType WalletCapitalType; // 0x100
	FDateTime LockTime; // 0x108
	EInventoryItemChangeReason AddItemReason; // 0x110
	FString FlagImageString; // 0x118
};

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FText TooltipDescription; // 0x20
	FText Category; // 0x38
	FText Keywords; // 0x50
	int32_t Grouping; // 0x68
	int32_t SectionID; // 0x6c
	TArray<FString> MenuDescriptionArray; // 0x70
	TArray<FString> FullSearchTitlesArray; // 0x80
	TArray<FString> FullSearchKeywordsArray; // 0x90
	TArray<FString> FullSearchCategoryArray; // 0xa0
	TArray<FString> LocalizedMenuDescriptionArray; // 0xb0
	TArray<FString> LocalizedFullSearchTitlesArray; // 0xc0
	TArray<FString> LocalizedFullSearchKeywordsArray; // 0xd0
	TArray<FString> LocalizedFullSearchCategoryArray; // 0xe0
	FString SearchText; // 0xf0
};

struct FPhysicsBoxData {
	FVector Dimensions; // 0x0
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FKawaiiPhysicsSettings {
	float Damping; // 0x0
	float WorldDampingLocation; // 0x4
	float WorldDampingRotation; // 0x8
	float Stiffness; // 0xc
	float StiffnessExponent; // 0x10
	float Radius; // 0x14
	float LimitAngle; // 0x18
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FGuildKPILog {
	TArray<FGuildMemberKPILog> KPILogs; // 0x0
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x8
	FSlateBrush SortPrimaryDescendingImage; // 0x90
	FSlateBrush SortSecondaryAscendingImage; // 0x118
	FSlateBrush SortSecondaryDescendingImage; // 0x1a0
	FSlateBrush NormalBrush; // 0x228
	FSlateBrush HoveredBrush; // 0x2b0
	FSlateBrush MenuDropdownImage; // 0x338
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x3c0
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FChaosSolverConfiguration {
	int32_t Iterations; // 0x0
	int32_t CollisionPairIterations; // 0x4
	int32_t PushOutIterations; // 0x8
	int32_t CollisionPushOutPairIterations; // 0xc
	float CollisionMarginFraction; // 0x10
	float CollisionMarginMax; // 0x14
	float CollisionCullDistance; // 0x18
	int32_t JointPairIterations; // 0x1c
	int32_t JointPushOutPairIterations; // 0x20
	float ClusterConnectionFactor; // 0x24
	EClusterUnionMethod ClusterUnionConnectionType; // 0x28
	bool bGenerateCollisionData; // 0x29
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2c
	bool bGenerateBreakData; // 0x3c
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x40
	bool bGenerateTrailingData; // 0x50
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x54
	bool bGenerateContactGraph; // 0x64
};

struct FAnimalsHitAnims {
	TArray<UAnimMontage*> HitForward; // 0x0
	TArray<UAnimMontage*> HitBackward; // 0x10
	TArray<UAnimMontage*> HitLeft; // 0x20
	TArray<UAnimMontage*> HitRight; // 0x30
};

struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x0
	float OverrideDrawDistance; // 0x4
	char bUseOverrideDrawDistance : 1; // 0x8
	char bAllowSpecificExclusion : 1; // 0x8
	char bSimplifyMesh : 1; // 0x8
	char bOnlyGenerateClustersForVolumes : 1; // 0x8
	char bReusePreviousLevelClusters : 1; // 0x8
	FMeshProxySettings ProxySetting; // 0xc
	FMeshMergingSettings MergeSetting; // 0xb4
	float DesiredBoundRadius; // 0x154
	float DesiredFillingPercentage; // 0x158
	int32_t MinNumberOfActorsToBuild; // 0x15c
};

struct FGameplayAbilitySpecHandle {
	int32_t Handle; // 0x0
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FAllianceSubMember {
	int32_t MemberIndex; // 0x0
	FGuid MemberUid; // 0x4
	int32_t MemberNum; // 0x14
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FUpperBodyBoneConfig {
	char bUseTwoBoneIK : 1; // 0x0
	char bUseRotateSolver : 1; // 0x0
	FModifyConfig Struct_ClavicleL_ModifyConfig; // 0x4
	FModifyConfig Struct_LowerarmL_ModifyConfig; // 0x50
	FModifyConfig Struct_HandL_ModifyConfig; // 0x9c
	FModifyConfig Struct_ClavicleR_ModifyConfig; // 0xe8
	FModifyConfig Struct_LowerarmR_ModifyConfig; // 0x134
	FModifyConfig Struct_HandR_ModifyConfig; // 0x180
};

struct FGuildCustomGroup {
	FGuid GroupUid; // 0x0
	FString GroupName; // 0x10
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FImpactEffectData : FTableRowBase {
	UParticleSystem* SurfaceImpactFX[0x10]; // 0x8
	FName SurfaceImpactSoundID[0x10]; // 0x88
	FDecalData SurfaceDecalData[0x10]; // 0x108
	FDecalData SurfacePiercingDecalData[0x10]; // 0x288
	FDecalData SurfaceCrushingDecalData[0x10]; // 0x408
	FDecalDataCollection SurfaceStaticBloodDecalData[0x10]; // 0x588
	AActor* SurfaceImpactSpawnActors[0x10]; // 0x688
	float ImpactScale; // 0x708
	float DecalScale; // 0x70c
	float MaxDecalRange; // 0x710
};

struct FRotationRetargetingInfo {
	bool bEnabled; // 0x0
	FTransform Source; // 0x10
	FTransform Target; // 0x40
	ERotationComponent RotationComponent; // 0x70
	FVector TwistAxis; // 0x74
	bool bUseAbsoluteAngle; // 0x80
	float SourceMinimum; // 0x84
	float SourceMaximum; // 0x88
	float TargetMinimum; // 0x8c
	float TargetMaximum; // 0x90
	EEasingFuncType EasingType; // 0x94
	FRuntimeFloatCurve CustomCurve; // 0x98
	bool bFlipEasing; // 0x120
	float EasingWeight; // 0x124
	bool bClamp; // 0x128
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionId; // 0x38
	double WorldTimeSeconds; // 0x48
};

struct FDrawArtofWarPool : FTableRowBase {
	int32_t PerkID; // 0x8
	int32_t MinExp; // 0xc
	int32_t MaxExp; // 0x10
	float Weight; // 0x14
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FMaterialHardnessCfg : FTableRowBase {
	FString MaterialName; // 0x8
	int32_t Hardness; // 0x18
	int32_t ValidThickness; // 0x1c
};

struct FGI_Parameters {
	FString GItype_13_FEFC00D7428DF3F2EA0F9097A9353822; // 0x0
	FString GIMaxBounce_14_9C271AFE40D4E53E4469F8A0B0726358; // 0x10
	FString GIMaxRayDistance_15_AD8A4E9844AE373D5012FB9DACC25082; // 0x20
	FString GISPP_16_1CA01D6E4CD423E3952E13A05D8EDCF5; // 0x30
	FString GIScreenPercentage_17_51DD44EE4074DBDCF36076B79D47F981; // 0x40
	FString GIUseRussianRoulette_18_03B4F71A41F8B1991B5C9093866E7C8D; // 0x50
	FString GIDiffuseThreshold_19_4C91F5304F3E0F86F2DE64BE0555EBFC; // 0x60
	FString GISortMaterials_21_FB1F0EBB431301AE76B7CEB2D0B466E8; // 0x70
	FString GIEnableTwoSidedGeometry_22_F38481B04AA8C5C6C1B93087D28F17CE; // 0x80
	FString FinalGatherDistance_23_06E7E9F0467A1E30FB9C0989EBD3E956; // 0x90
	FString GIMaxLightCount_26_5B5538634898D5C09E00E0B76188BF5D; // 0xa0
	FString GIDenoiserType_32_B2E8F2D04E72BB68627D6EBCA107C472; // 0xb0
	FString GIApplyAO_33_1BA016C145BE87B51CFBDDBEB7FBEE0D; // 0xc0
	FString GIDenoiserColorClamp_34_116D4CA9441D9B54F1CC09A4773FC856; // 0xd0
	FString GIDenoiserNormalTolerance_35_B6026F734DEA82ADC79D678F82ED05EA; // 0xe0
	FString GIDenoiseHistoryLength_41_6444C26341627DFA45693FBF3E6C18CF; // 0xf0
	FString SpatialNormalTolerance_38_90A4369D46760D1D3D12B1B90AC93BB2; // 0x100
	FString SpatialFilterIteration_44_43991F984232FCDF0F486A8122EC4EE5; // 0x110
	FString GIDiffuseBoost_47_206FAADE4EB4EB482502AFBADB7283BC; // 0x120
	FString FinalGatherUseReservoirResampling_51_B645C5324122AF3297A88BA441BBF97D; // 0x130
	FString GIMetalicSupport_54_E529B8F747A267DC767E098206DB5CC4; // 0x140
	FString GIDenoiserSpatialFilterType_57_35EDA4DA4FDAE461034E11A329D5FCE1; // 0x150
	FString GIDenoiserUseSH_62_6A8CFE524B495BB040710BA60BBD39E0; // 0x160
	FString GIDenoiserSHSharpness_61_E2DE071B4E3C5411289FF0AC4D8A8D41; // 0x170
	FString ATrousDepthTolerance_65_1759F98545A1EAAC4D34079C5EF23FAB; // 0x180
	FString FinalGatherIterations_70_4AF615CF472D7320C330A4911D16FB84; // 0x190
	FString FinalGatherFilterWidth_71_D2D42ACB40D4E30DE24D4B917B965521; // 0x1a0
	FString GIFireflySuppression_72_EEAF55A1422455A4AEE4FC90DA0C1746; // 0x1b0
	FString ReservoirResamplingInterval_76_80AB856F43395C864203B9A3135F2DB9; // 0x1c0
	FString FinalGatherNormalFromDepth_80_8D4264AA4A8998ABC3EEA99265BE762C; // 0x1d0
	FString FinalGatherMaxReuseWeight_81_2D108C2B4C14D43EC6EC9192CD7C9689; // 0x1e0
	FString FinalGatherAggressiveReservoirReuse_84_1B3372034365E9F31EB6019F153A3A77; // 0x1f0
	FString GIDenoiseATrousFilterWidth_87_985CA20D455F90D2B3A71092519BA3E6; // 0x200
};

struct FInteractiveEntry {
	UActorComponent* InteractComponent; // 0x0
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FSeasonPerLevelRewards : FTableRowBase {
	int32_t SeasonLevel; // 0x8
	int32_t PassportRewardIndex; // 0xc
	int32_t PassportSecRewardIndex; // 0x10
	int32_t SeasonRewardIndex; // 0x14
	TSoftObjectPtr<UTexture2D> SeasonLevelBg; // 0x18
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FUnderwaterPostProcessSettings {
	bool bEnabled; // 0x0
	float Priority; // 0x4
	float BlendRadius; // 0x8
	float BlendWeight; // 0xc
	FPostProcessSettings PostProcessSettings; // 0x10
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x570
};

struct FScrollBarStyle : FSlateWidgetStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x8
	FSlateBrush VerticalBackgroundImage; // 0x90
	FSlateBrush VerticalTopSlotImage; // 0x118
	FSlateBrush HorizontalTopSlotImage; // 0x1a0
	FSlateBrush VerticalBottomSlotImage; // 0x228
	FSlateBrush HorizontalBottomSlotImage; // 0x2b0
	FSlateBrush NormalThumbImage; // 0x338
	FSlateBrush HoveredThumbImage; // 0x3c0
	FSlateBrush DraggedThumbImage; // 0x448
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UMetaData* SubClass; // 0x8
	TSoftClassPtr<UObject> SoftClass; // 0x10
	UObject* Object; // 0x38
	TWeakObjectPtr<UMetaData> WeakObject; // 0x40
	TSoftObjectPtr<UMetaData> SoftObject; // 0x48
	FSoftClassPath ClassPath; // 0x70
	FSoftObjectPath ObjectPath; // 0x88
};

struct FBattleGlobalParam {
	int32_t GuanAiSignUpFirstSectionTime; // 0x0
};

struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0
	ECollisionTypeEnum CollisionType; // 0x4
	EImplicitTypeEnum ImplicitType; // 0x5
	int32_t MinLevelSetResolution; // 0x8
	int32_t MaxLevelSetResolution; // 0xc
	int32_t MinClusterLevelSetResolution; // 0x10
	int32_t MaxClusterLevelSetResolution; // 0x14
	int32_t CollisionObjectReductionPercentage; // 0x18
	float CollisionParticlesFraction; // 0x1c
	int32_t MaximumCollisionParticles; // 0x20
};

struct FTransformMeshesTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FChannelDefinition {
	FName ChannelName; // 0x0
	FName ClassName; // 0x8
	UObject* ChannelClass; // 0x10
	int32_t StaticChannelIndex; // 0x18
	bool bTickOnCreate; // 0x1c
	bool bServerOpen; // 0x1d
	bool bClientOpen; // 0x1e
	bool bInitialServer; // 0x1f
	bool bInitialClient; // 0x20
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FGameplayModEvaluationChannelSettings {
	EGameplayModEvaluationChannel Channel; // 0x0
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FBasementPhaseData {
	float StageHpThreshold; // 0x0
	UStaticMesh* StageStaticMesh; // 0x8
	UParticleSystem* StageParticle; // 0x10
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x0
	TArray<char> ByteArray; // 0x10
	int32_t StaticSingleElement; // 0x20
	int32_t StaticInt32Array[0x3]; // 0x24
	float StaticFloatArray[0x3]; // 0x30
	TArray<FVector> VectorArray; // 0x40
	TArray<FStructSerializerBuiltinTestStruct> StructArray; // 0x50
};

struct FMovingAnims {
	UBlendSpace* Moving; // 0x0
	UBlendSpace* MovingFkd; // 0x8
	UBlendSpace* MovingBkd; // 0x10
};

struct FBattleGamePlayData {
	EBattleType BattleType; // 0x0
	int32_t BattleRound; // 0x4
	FString MapName; // 0x8
	int32_t BattleScore; // 0x18
	int32_t BattleHp; // 0x1c
	int32_t BattleHpMin; // 0x20
	int32_t BattleHpMax; // 0x24
};

struct FVeryHigh {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_DF713E70420757F4C67C13BBDC8E3A9E; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_2ABBE594458810C0AC816F82CB28B865; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_D6EED34F42FA2FE3B39C158FD4BF7119; // 0xcc0
	FDataType_Support DataTypeSupport_319_CD2540CC44DAD7284D977B822E41DA90; // 0x1230
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FAnimsConfig {
	FIdleAnims IdleAnims; // 0x0
	FTurnAnims TurnAnims; // 0x68
	FStartAnims StartAnims; // 0x88
	FMovingAnims MovingAnims; // 0xa8
	FStopAnims StopAnims; // 0xc0
	FJumpAnims JumpAnims; // 0xc8
	FTransitions TransitionAnims; // 0xf8
	FHitAnims HitAnims; // 0x158
	FHitAnims OffHandHitAnims; // 0x1e0
	FHitAnims RiderHitAnims; // 0x268
	FHitAnims RiderOffHandHitAnims; // 0x2f0
	FDeathAnims DeathAnims; // 0x378
	FAttackAnims AttackAnims; // 0x3b8
	FAttackAnims OffHandAttackAnims; // 0x778
	FAttackAnims RiderAttackAnims; // 0xb38
	FAttackAnims RiderOffHandAttackAnims; // 0xef8
	FBlockHitAnims CancelAttackAnims; // 0x12b8
	FBlockAnims BlockAnims; // 0x1300
	FBlockAnims OffHandBlockAnims; // 0x1390
	FBlockAnims RiderBlockAnims; // 0x1420
	FBlockAnims RiderOffHandBlockAnims; // 0x14b0
	FUpperBodyBoneConfig UpperBodyBoneConfig; // 0x1540
	FUpperBodyBoneConfig BodyMoprhBoneConfig; // 0x170c
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FSGSoundLevelVolumeStateData {
	float Volume; // 0x0
};

struct FAIAttackedTargetInfo {
	FDateTime UTCTime; // 0x0
	EActorType TargetType; // 0x8
	FText TargetTextName; // 0x10
	FString OwnerName; // 0x28
	FString GuildName; // 0x38
	int32_t AttackTimes; // 0x48
};

struct FBuffRowBase : FTableRowBase {
	int32_t BuffID; // 0x8
	USGBuff* BuffClass; // 0x10
};

struct FXRMotionControllerData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	EXRVisualType DeviceVisualType; // 0x1c
	EControllerHand HandIndex; // 0x1d
	ETrackingStatus TrackingStatus; // 0x1e
	FVector GripPosition; // 0x20
	FQuat GripRotation; // 0x30
	FVector AimPosition; // 0x40
	FQuat AimRotation; // 0x50
	TArray<FVector> HandKeyPositions; // 0x60
	TArray<FQuat> HandKeyRotations; // 0x70
	TArray<float> HandKeyRadii; // 0x80
	bool bIsGrasped; // 0x90
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FHigh {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_AD9A759A4B351C95067BE9BC4F8BAB51; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_5F087F594CC8E8C61352A1977633669B; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_B2D33BEB48B4C7919E389880C9AC3F93; // 0xcc0
	FDataType_Support DataTypeSupport_319_1FA8C49A4FABAC900D28DCB3A3D948FB; // 0x1230
};

struct FVehicleDifferential4WData {
	EVehicleDifferential4W DifferentialType; // 0x0
	float FrontRearSplit; // 0x4
	float FrontLeftRightSplit; // 0x8
	float RearLeftRightSplit; // 0xc
	float CentreBias; // 0x10
	float FrontBias; // 0x14
	float RearBias; // 0x18
};

struct FSubmixEffectReverbSettings {
	bool bBypassEarlyReflections; // 0x0
	float ReflectionsDelay; // 0x4
	float GainHF; // 0x8
	float ReflectionsGain; // 0xc
	bool bBypassLateReflections; // 0x10
	float LateDelay; // 0x14
	float DecayTime; // 0x18
	float Density; // 0x1c
	float Diffusion; // 0x20
	float AirAbsorptionGainHF; // 0x24
	float DecayHFRatio; // 0x28
	float LateGain; // 0x2c
	float Gain; // 0x30
	float WetLevel; // 0x34
	float DryLevel; // 0x38
	bool bBypass; // 0x3c
};

struct FMsgRecordList {
	TArray<FMsgRecordData> MsgRecordList; // 0x0
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FRadarChartAppearance {
	ERadarChartBlendMode BlendMode; // 0x0
	char bConcentricUVs : 1; // 0x1
	UTexture* Texture; // 0x8
	FVector2D UVSize; // 0x10
	float Angle; // 0x18
	FVector2D Panner; // 0x1c
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x10
	FVector_NetQuantize100 TrueRelativeLocation; // 0x1c
	FRotator Rotation; // 0x28
	bool bServerHasBaseComponent; // 0x34
	bool bRelativeRotation; // 0x35
	bool bServerHasVelocity; // 0x36
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FTranslucency_Parameters {
	FString EnableTranslucensy_14_332FFB204F3B00FC3DF8B59EF91BC71D; // 0x0
	FString EnableTranslucencyHeightFog_15_29C6A9F440F6A207C82331939CE3DCE1; // 0x10
	FString EnableTranslucencyShadows_16_7B2E0CEB49AD9CB4A47AF9A9D3EF8AA7; // 0x20
	FString EnableRefraction_17_72999B57452A259A9A901A8E6E51A5D9; // 0x30
	FString TranslucencyMaxRoughness_18_C605CB7A47F91F3AE88A7D9AA0CBB46A; // 0x40
	FString MaxRefractionRays_19_69E233FA4710FF92A41E4D8558ED5CF9; // 0x50
	FString EnableHybridTranslucency_20_5ECF7E16453EC6CA4CC6028C3BB79614; // 0x60
	FString HybridTranslucencyDepthThreshold_30_61E75A7D4A65B629146E84BC73B58997; // 0x70
	FString HybridTranslucencyLayers_22_8DDEED384B9ED866CB1E5CA52763214D; // 0x80
	FString HybridTranslucencySupport_29_C17F37CC42441163312E479B70C01372; // 0x90
	FString TranslucencyMask_24_275B41B2429D609EA96B8E97E439F67B; // 0xa0
	FString HalfResHybridTranslucency_25_D59DF97446A9ACBCE0A0D38E1D882003; // 0xb0
	FString TranslucencyRoughnessMultiplier_26_E69F7D934C950B2F98443380A571C42E; // 0xc0
	FString ExcludeTranslucentsFromShadows_31_9A3A2D7F4B9E4A5336D34EAD1B7B8A7B; // 0xd0
	FString TranslucencyEnableAbsorption_34_37C4F9144AB560F9FB3B05A728807878; // 0xe0
	FString EnableTranslucencyinReflection_49_D325071D4CF3B5B35F33BBB3AE61E7A4; // 0xf0
	FString RefractionBackgroundSampleFallback_37_B38E1670400FA3C5B25342BD27FBF35A; // 0x100
	FString TranslucencyIgnoreBackfaceOpacity_40_7B969FFF4087B1E90A0919AA274F255F; // 0x110
	FString AbsorptionForceShadingOnOpaqueObjects_43_A8CE4EE74EA5CDDD66AF47945083DC33; // 0x120
	FString HalfResRefraction_46_43CE013F48A027E289B1A39918778984; // 0x130
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FDatasmithImportBaseOptions {
	EDatasmithImportScene SceneHandling; // 0x0
	bool bIncludeGeometry; // 0x1
	bool bIncludeMaterial; // 0x2
	bool bIncludeLight; // 0x3
	bool bIncludeCamera; // 0x4
	bool bIncludeAnimation; // 0x5
	FDatasmithAssetImportOptions AssetOptions; // 0x8
	FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FGuildSkillDrawGroup {
	TArray<FGuildSkillDrawItem> Items; // 0x0
};

struct FAnimalFarmMeshEntry {
	FGuid BindGuid; // 0x0
	int32_t BindPointIndex; // 0x10
	TWeakObjectPtr<USkeletalMeshComponent> AttachedSkeletalMeshComp; // 0x14
	char bIsCorpse : 1; // 0x1c
	float CorpseTime; // 0x20
	float CorpseDissolveTime; // 0x24
};

struct FMoveSeatPowerInfo {
	ABaseCharacter* PowerClass; // 0x0
	FName MoveSeatSocketName; // 0x8
	FName DriverMoveSeatSocketName; // 0x10
	char IsDriverAttachToPower : 1; // 0x18
	char DriveNeedPowerSaddle : 1; // 0x18
	char CanBeUsedForDrivePower : 1; // 0x18
	float SpeedModifier; // 0x1c
	float SpeedModifierForHelp; // 0x20
	float BackSpeedModifier; // 0x24
	float RotateSpeedModifier; // 0x28
	float RotateSpeedModifierForHelp; // 0x2c
	float PowerCostSPMul; // 0x30
	float PowerCostSPMulForHelp; // 0x34
	float BackRotateSpeedModifier; // 0x38
	FPassengerAnimsConfig PowerCharAnimsConfig; // 0x40
	FAnimalsAnimInstanceConfig DriverAnimInstanceOverrider; // 0x50
	FPassengerAnimsConfig PassangerAnimsConfigOverrider; // 0xd0
};

struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	FBoneReference RootBone; // 0xc8
	TArray<FBoneReference> ExcludeBones; // 0xd8
	int32_t TargetFramerate; // 0xe8
	bool OverrideTargetFramerate; // 0xec
	FKawaiiPhysicsSettings PhysicsSettings; // 0xf0
	UCurveFloat* DampingCurve; // 0x110
	UCurveFloat* WorldDampingLocationCurve; // 0x118
	UCurveFloat* WorldDampingRotationCurve; // 0x120
	UCurveFloat* StiffnessCurve; // 0x128
	UCurveFloat* RadiusCurve; // 0x130
	UCurveFloat* LimitAngleCurve; // 0x138
	bool bUpdatePhysicsSettingsInGame; // 0x140
	float DummyBoneLength; // 0x144
	EBoneForwardAxis BoneForwardAxis; // 0x148
	EPlanarConstraint PlanarConstraint; // 0x149
	TArray<FSphericalLimit> SphericalLimits; // 0x150
	TArray<FCapsuleLimit> CapsuleLimits; // 0x160
	TArray<FPlanarLimit> PlanarLimits; // 0x170
	USkeletalMeshComponent* SkeletalMeshComponentLimit; // 0x180
	UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x188
	TArray<FSphericalLimit> SphericalLimitsData; // 0x190
	TArray<FCapsuleLimit> CapsuleLimitsData; // 0x1a0
	TArray<FPlanarLimit> PlanarLimitsData; // 0x1b0
	float TeleportDistanceThreshold; // 0x1c0
	float TeleportRotationThreshold; // 0x1c4
	FVector Gravity; // 0x1c8
	bool bEnableWind; // 0x1d4
	float WindScale; // 0x1d8
	TArray<FKawaiiPhysicsModifyBone> ModifyBones; // 0x1e0
	float TotalBoneLength; // 0x1f0
	FTransform PreSkelCompTransform; // 0x200
	bool bInitPhysicsSettings; // 0x230
};

struct FDecalDataCollection {
	TArray<FDecalData> DecalData; // 0x0
};

struct FWeaponBlockCollisionInfo {
	FVector ExtraOffset; // 0x0
	FRotator ExtraRotation; // 0xc
	FVector BoxSize; // 0x18
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FHairGroupsCardsSourceDescription {
	UMaterialInterface* Material; // 0x0
	FName MaterialSlotName; // 0x8
	EHairCardsSourceType SourceType; // 0x10
	UStaticMesh* ProceduralMesh; // 0x18
	FString ProceduralMeshKey; // 0x20
	UStaticMesh* ImportedMesh; // 0x30
	FHairGroupsProceduralCards ProceduralSettings; // 0x38
	FHairGroupCardsTextures Textures; // 0x70
	int32_t GroupIndex; // 0xa0
	int32_t LODIndex; // 0xa4
	FHairGroupCardsInfo CardsInfo; // 0xa8
	FString ImportedMeshKey; // 0xb0
};

struct FAnimalCorpseEntry {
	TWeakObjectPtr<USkeletalMeshComponent> AttachedSkeletalMeshComp; // 0x0
	float CorpseTime; // 0x8
	float CorpseDissolveTime; // 0xc
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData {
	FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10
	FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x80
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FSGDamageEvent : FDamageEvent {
	float Damage; // 0x10
	EDamageType Enum_DamageType; // 0x14
	EBlockDamageType Enum_BlockDamageType; // 0x15
	float ImpulseDistance; // 0x18
	float AttackAfterShakingTime; // 0x1c
	FHitResult HitInfo; // 0x20
	float CollectionDamage; // 0xac
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FInnerBattleGuildInfo {
	FGuid GuildId; // 0x0
	int32_t CountryId; // 0x10
	FGuid AllianceId; // 0x14
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FAnimalsModifyBoneSettings {
	float RangeValue; // 0x0
	TArray<FAnimalsModifyBoneConfig> AnimalsModifyBoneConfig; // 0x8
};

struct FSoundIntParam {
	FString Param; // 0x0
	int32_t Value; // 0x10
};

struct FCharacterStatusStateTip {
	ECharacterStatusState StateType; // 0x0
	float Thresholds; // 0x4
	char bGreaterThan : 1; // 0x8
	UMaterialInstance* PostProcessMaterial; // 0x10
	TSoftObjectPtr<UTexture2D> icon; // 0x18
	ESGSoundType SoundType; // 0x40
	FName TriggerSoundID; // 0x44
	FText HUDText; // 0x50
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FOreColorData {
	float OreStartValue; // 0x0
	float OreEndValue; // 0x4
	FLinearColor OreValueColor; // 0x8
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FDropRule : FTableRowBase {
	int32_t DropID; // 0x8
	float Weight; // 0xc
	USGItem* ItemClass; // 0x10
	int32_t MinNum; // 0x18
	int32_t MaxNum; // 0x1c
	EItemQuality Quality; // 0x20
};

struct FAttackAnims {
	FAttackInfo LU; // 0x0
	FAttackInfo U; // 0x60
	FAttackInfo RU; // 0xc0
	FAttackInfo L; // 0x120
	FAttackInfo C; // 0x180
	FAttackInfo R; // 0x1e0
	FAttackInfo LD; // 0x240
	FAttackInfo D; // 0x2a0
	FAttackInfo RD; // 0x300
	FAttackInfo KickAttack; // 0x360
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FTattooStandardConfig {
	TArray<FVector2D> UVMove; // 0x0
	TArray<FVector2D> UVSize; // 0x10
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FMsgServerSetDeviceId : FMessageBase {
	FString StrPassword; // 0x8
	FString StrEmail; // 0x18
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FGenericMultiItemParam {
	FString TitleText; // 0x0
	FString EmptyDesText; // 0x10
	FString DesText; // 0x20
	TWeakObjectPtr<USGInventoryComponent> CheckInventory; // 0x30
	TArray<USGItem*> CheckItemTemplates; // 0x38
	EMultiChooseItemsType ItemFilterType; // 0x48
	char HiddenEmptyItems : 1; // 0x49
	char bCheckMaxAmount : 1; // 0x49
	float MaxAmount; // 0x4c
	FString DesMoodText; // 0x50
	float MaxMoodsAmount; // 0x60
};

struct FGuildMemberInfo {
	FGuid MemberUid; // 0x0
	FString MemberName; // 0x10
	int32_t MemberTitle; // 0x20
	int32_t MemberLevel; // 0x24
	int32_t ServerType; // 0x28
	int32_t XianChengKey; // 0x2c
	int32_t OfficialJob; // 0x30
	FGuid CustomGroup; // 0x34
	FDateTime OfflineTime; // 0x48
	int32_t GongXunValue; // 0x50
	int64_t GongXunTotal; // 0x58
	FDateTime JoinTime; // 0x60
	int32_t ZhanLiValue; // 0x68
	int32_t DKPValue; // 0x6c
};

struct FGivePerkMiniMapPOIData : FTableRowBase {
	int32_t GivePerkPointDataIndex; // 0x8
	FString MapName; // 0x10
	FVector Location; // 0x20
};

struct FBodyInstance : FBodyInstanceCore {
	ECollisionChannel ObjectType; // 0x1e
	ECollisionEnabled CollisionEnabled; // 0x20
	ESleepFamily SleepFamily; // 0x59
	EDOFMode DOFMode; // 0x5a
	char bUseCCD : 1; // 0x5b
	char bIgnoreAnalyticCollisions : 1; // 0x5b
	char bNotifyRigidBodyCollision : 1; // 0x5b
	char bLockTranslation : 1; // 0x5b
	char bLockRotation : 1; // 0x5b
	char bLockXTranslation : 1; // 0x5b
	char bLockYTranslation : 1; // 0x5b
	char bLockZTranslation : 1; // 0x5c
	char bLockXRotation : 1; // 0x5c
	char bLockYRotation : 1; // 0x5c
	char bLockZRotation : 1; // 0x5c
	char bOverrideMaxAngularVelocity : 1; // 0x5c
	char bOverrideMaxDepenetrationVelocity : 1; // 0x5c
	char bOverrideWalkableSlopeOnInstance : 1; // 0x5d
	char bInterpolateWhenSubStepping : 1; // 0x5d
	FName CollisionProfileName; // 0x6c
	char PositionSolverIterationCount; // 0x74
	char VelocitySolverIterationCount; // 0x75
	FCollisionResponse CollisionResponses; // 0x78
	float MaxDepenetrationVelocity; // 0xa8
	float MassInKgOverride; // 0xac
	float LinearDamping; // 0xb8
	float AngularDamping; // 0xbc
	FVector CustomDOFPlaneNormal; // 0xc0
	FVector COMNudge; // 0xcc
	float MassScale; // 0xd8
	FVector InertiaTensorScale; // 0xdc
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xf8
	UPhysicalMaterial* PhysMaterialOverride; // 0x108
	float MaxAngularVelocity; // 0x110
	float CustomSleepThresholdMultiplier; // 0x114
	float StabilizationThresholdMultiplier; // 0x118
	float PhysicsBlendWeight; // 0x11c
};

struct FStaticMiniMapIDArray {
	TArray<FString> IDList; // 0x0
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FCreateInfo {
	FString CharacterName; // 0x0
	char Sex; // 0x10
	FVoiceData VoiceData; // 0x14
	FAppearanceData AppearanceData; // 0x20
};

struct FVehiclePerkEventEntry {
	int32_t RandomMaxCount; // 0x0
	char bAllowPlacePerk : 1; // 0x4
	TMap<UVehiclePerkRandomPool*, int32_t> PerkRandomPool; // 0x8
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FMsgClientServerInfo : FMessageBase {
	TArray<FGameServerInfo> GameServerInfoList; // 0x8
};

struct FNPCDeathExtraDropItemTable : FTableRowBase {
	EActivityNumber Number; // 0x8
	TArray<FDeathDropItemConfig> DeathDropItemConfig; // 0x10
};

struct FOfficalSealConfig {
	TArray<float> MainRatios; // 0x0
};

struct FAnimalCageData {
	int32_t AnimalInCageIndex; // 0x0
	int32_t AnimalLevel; // 0x4
	FString AnimalName; // 0x8
	ECharacterSex AnimalSex; // 0x18
	FVector AnimalScale; // 0x1c
	int32_t AnimalSpecies; // 0x28
	float ReplicatedAnimalEscapeRemainTime; // 0x2c
	float AnimalEscapeRemainTime; // 0x30
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x38
	float Radius; // 0x44
};

struct FRiderData {
	int32_t Index; // 0x0
	TWeakObjectPtr<APawn> VehiclePawn; // 0x4
	UAnimMontage* PlayingMontage; // 0x10
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FGoodsNetInfo {
	int32_t CurPageIndex; // 0x0
	int32_t AllPageNum; // 0x4
	TrafficGoodsMode TradeMode; // 0x8
	float NextRefreshGoodsSecs; // 0xc
	float NextRefreshCapitalSecs; // 0x10
	float NextRrefreshPriceRatioSecs; // 0x14
	int32_t CapitalLimit; // 0x18
	TArray<FGoodsSaveInfo> GoodsInfoArray; // 0x20
	TArray<int32_t> OwnedGoodsNumArray; // 0x30
	GoodsSellerType SellerType; // 0x40
	int32_t SellerLevel; // 0x44
};

struct FQuestObject {
	EQuestObjectType ObjectType; // 0x0
	UObject* ObjectClass; // 0x8
	int32_t ObjectInt; // 0x10
	int32_t NeedCount; // 0x14
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FBaseChunkDataInfo {
	EBaseChunkDataInfoType BaseChunkDataInfoType; // 0x0
	ECharacterType CharacterType; // 0x1
	EChunkDataStateType ChunkDataStateType; // 0x2
	EWarType WarType; // 0x3
	FGuid OwnerUid; // 0x4
	FString OwnerName; // 0x18
	FString AccountID; // 0x28
	FString Name; // 0x38
	int32_t Level; // 0x48
	float RandomLevel; // 0x4c
	char bIsReborning : 1; // 0x50
	char bIsDeadReborn : 1; // 0x50
	FDateTime FinalRebornTime; // 0x58
	FDateTime RebornDeathDeathTime; // 0x60
	FDateTime DeathTime; // 0x68
	int32_t DeathThroughMinutes; // 0x70
	int32_t LifeCount; // 0x74
	float loyalty; // 0x78
	int32_t Wages; // 0x7c
	FDateTime LastGiveWagesTime; // 0x80
	FDateTime LifeCountZeroTime; // 0x88
	TArray<char> ChunkBytes; // 0x90
	int32_t ChunkVersion; // 0xa0
	FVector DepositLocation; // 0xa4
	FDateTime InsertDBTime; // 0xb0
	EAnimalAgeType AnimalAgeType; // 0xb8
	TWeakObjectPtr<ABaseCharacter> ChunkCharacter; // 0xbc
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	FVector Translation; // 0xd8
	FRotator Rotation; // 0xe4
	FVector Scale; // 0xf0
	EBoneModificationMode TranslationMode; // 0xfc
	EBoneModificationMode RotationMode; // 0xfd
	EBoneModificationMode ScaleMode; // 0xfe
	EBoneControlSpace TranslationSpace; // 0xff
	EBoneControlSpace RotationSpace; // 0x100
	EBoneControlSpace ScaleSpace; // 0x101
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FFeatureConfigData {
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x0
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FWeatherFloatTrack : FWeatherTrack {
	FRuntimeFloatCurve Curve; // 0x10
};

struct FKongmingLanternRowBase : FTableRowBase {
	FVector SpawnLocation; // 0x8
	int32_t SpawnInterval; // 0x14
	float RandRange; // 0x18
	float RandHeight; // 0x1c
	int64_t NextSpawnTime; // 0x20
	TArray<FKongmingLanternInfo> KongmingLanternInfo; // 0x28
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FAnimationStateEntry {
	char State; // 0x0
	TArray<FAnimationSetup> AnimationSetups; // 0x8
	bool bOnDemand; // 0x18
	bool bAdditive; // 0x19
	float BlendTime; // 0x1c
	bool bReturnToPreviousState; // 0x20
	bool bSetNextState; // 0x21
	char NextState; // 0x22
	FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24
	float WiggleTimePercentage; // 0x28
	bool bRequiresCurves; // 0x2c
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FFeedFoodEntry {
	AActor* Food; // 0x0
	float AddToTamePerSecond; // 0x8
	int32_t FeedDurationTime; // 0xc
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FNeckData {
	float NeckFrontCurve; // 0x0
	float NeckWidth; // 0x4
	float NeckDepth; // 0x8
};

struct FNPCTalkInfo {
	FName TalkInfoDes; // 0x0
	TArray<int32_t> NextIDs; // 0x8
	int32_t ImageIndex; // 0x18
	FText NPCQuestion; // 0x20
	FText NPCAnswer; // 0x38
	ENPCTalkFunction NPCTalkFunction; // 0x50
	int32_t EntryIndex; // 0x54
	char bCheckCondition : 1; // 0x58
	ESkillType SkillType; // 0x59
	int32_t SkillMinValue; // 0x5c
	int32_t SkillMaxValue; // 0x60
	int32_t NextSkillLimitValue; // 0x64
	ECapitalType UnLockSkillCapitalType; // 0x68
	int32_t UnLockSkillPrice; // 0x6c
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FDropWrapperInfo {
	int32_t Count; // 0x0
	float Rate; // 0x4
	int32_t RuleID; // 0x8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FMsgRecord_Kill : FMsgRecordBase {
	FString AttackerOwnerName; // 0x10
	FString AttackerName; // 0x20
	AActor* AttackerTemplate; // 0x30
	EMsgRecord_DeadType DeadType; // 0x38
	bool IsDeadInGuild; // 0x39
	FString DeadOwnerGuildName; // 0x40
	FString DeadOwnerName; // 0x50
	FString DeadName; // 0x60
	AActor* DeadTemplate; // 0x70
};

struct FPlatformStructure {
	ASGStructure* PlatformStructure; // 0x0
	FVector RelativeLocation; // 0x8
	FRotator RelativeRotation; // 0x14
	FName BoneName; // 0x20
};

struct FPlatformInfo {
	USkeletalMeshComponent* PlatformComponent; // 0x0
	USkeletalMesh* PlatformSkeletalMesh; // 0x8
	USGItem* ItemClass; // 0x10
};

struct FMaterialCachedExpressionData {
	FMaterialCachedParameters Parameters; // 0x0
	TArray<UObject*> ReferencedTextures; // 0x1a0
	TArray<FMaterialFunctionInfo> FunctionInfos; // 0x1b0
	TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1c0
	TArray<UMaterialFunctionInterface*> DefaultLayers; // 0x1d0
	TArray<UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1e0
	TArray<ULandscapeGrassType*> GrassTypes; // 0x1f0
	TArray<FName> DynamicParameterNames; // 0x200
	TArray<bool> QualityLevelsUsed; // 0x210
	char bHasRuntimeVirtualTextureOutput : 1; // 0x220
	char bHasSceneColor : 1; // 0x220
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FStableVehicleBindTrainerData {
	FBaseAnimalChunkData ChunkVehicleData; // 0x0
	FBaseGeneralChunkData ChunkTrainerData; // 0xb0
	char bIsSystemTrainer : 1; // 0x198
	ESystemTrainerType SystemTrainerType; // 0x199
	float WorkTime; // 0x19c
	char bIsTrain : 1; // 0x1a0
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FPlayerWoundConfig {
	float DeathCountRatio; // 0x0
	float DamageDivHPRatio; // 0x4
	TArray<FWoundBuffConditionType> StomachWoundBuffConditions; // 0x8
	TArray<FWoundBuffConditionType> StriaeWoundBuffConditions; // 0x18
	TArray<FWoundBuffConditionType> SkinWoundBuffConditions; // 0x28
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FLandscapeEditToolRenderData {
	UMaterialInterface* ToolMaterial; // 0x0
	UMaterialInterface* GizmoMaterial; // 0x8
	int32_t SelectedType; // 0x10
	int32_t DebugChannelR; // 0x14
	int32_t DebugChannelG; // 0x18
	int32_t DebugChannelB; // 0x1c
	UTexture2D* DataTexture; // 0x20
	UTexture2D* LayerContributionTexture; // 0x28
	UTexture2D* DirtyTexture; // 0x30
};

struct FAnimNodeData_FootData {
	FName Feet_Bone_Name; // 0x0
	FName Knee_Bone_Name; // 0x8
	FName Thigh_Bone_Name; // 0x10
	FRotator Feet_Rotation_Offset; // 0x18
	FVector Knee_Direction_Offset; // 0x24
	FVector Feet_Trace_Offset; // 0x30
	float Feet_Rotation_Limit; // 0x3c
	float Feet_Heights; // 0x40
};

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
};

struct FGuildSkillConfig {
	int32_t MaxLevel; // 0x0
	FText Context; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FAnimTraceData {
	FBoneReference ControlBone; // 0x258
	FBoneReference IKBone; // 0x268
	FBoneReference FKBone; // 0x278
	FBoneReference TipBone; // 0x288
	FBoneReference ConstraintRotationParentBone; // 0x298
	char bTraceComplex : 1; // 0x2a8
	char bKeepFootImpactRotation : 1; // 0x2a8
	char bUseInertiaRelativeTransform : 1; // 0x2a8
	ETraceTypeQuery RayTraceChannel; // 0x2a9
	EAnimGeometryTrace TraceGeometryType; // 0x2aa
	FVector2D ReachPrecisionRange; // 0x2ac
	FVector2D InertiaReachPrecisionRange; // 0x2b4
	FVector TraceStartOffset; // 0x2bc
	FVector TraceEndOffset; // 0x2c8
	FVector TraceGeometrySize; // 0x2d4
	FVector2D LocationInterpSpeedRange; // 0x2e0
	FVector2D RotationInterpSpeedRange; // 0x2e8
	FVector2D AlphaInterpSpeedRange; // 0x2f0
	FVector2D RotationLimitRange; // 0x2f8
	FVector2D TranslationLimitRange; // 0x300
	FVector2D FootHeightAirToleranceRange; // 0x308
	FTransform RelativeTransform; // 0x310
	FTransform TipRelativeTransform; // 0x340
	FHitResult HitResult; // 0x370
	FHitResult RefPoseHitResult; // 0x3fc
	FHitResult SlopePoseHitResult; // 0x488
	TArray<AActor*> IgnoreActors; // 0x518
	TWeakObjectPtr<ACharacter> OwnerCharacter; // 0x528
	TWeakObjectPtr<USkeletalMeshComponent> OwnerSkeletalMesh; // 0x530
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FObjectForQuestsArray {
	TArray<FObjectForQuests> ObjectForQuests; // 0x0
};

struct FGMTargetDisplay {
	AActor* GMTargetClass; // 0x0
	FString GMTargetName; // 0x8
};

struct FSGAchievementConfigMap {
	TMap<FString, USGAchievement*> AchievementConfigMap; // 0x0
};

struct FOccupyBuffRequirement {
	int32_t BuffIndex; // 0x0
	int32_t ParentBuffIndex; // 0x4
	FCapitalResourceRequirement CapitalResourceRequirement; // 0x8
	TSoftObjectPtr<UTexture2D> ImageTexture; // 0x18
	USGBuff* BuffType; // 0x40
};

struct FBranchingParams {
	float BranchChance; // 0x0
	float BranchChanceFading; // 0x4
	FFloatRange RotationRange; // 0x8
	FFloatRange LengthRange; // 0x18
	bool bUseBranchesLimit; // 0x28
	int32_t BranchesLimit; // 0x2c
};

struct FGuildBriefData {
	FGuid GuildUid; // 0x0
	FGuid ActorOwnerUid; // 0x10
	int32_t GuildLevel; // 0x20
	int32_t GuildWeiWang; // 0x24
	int32_t GuildMemberCount; // 0x28
	int32_t CityId; // 0x2c
	int32_t XianChengId; // 0x30
	int32_t ServerId; // 0x34
	int32_t JoinMinLevel; // 0x38
	char JoinSexLimit; // 0x3c
	FString GuildName; // 0x40
	FString ActorOwnerName; // 0x50
	FString ImageJson; // 0x60
	FGuid HeadAllianceUid; // 0x70
	FString HeadAllianceName; // 0x80
	FString OuterBillboard; // 0x90
	char bInvitedAlliance : 1; // 0xa0
	int32_t ActorOwnerJob; // 0xa4
	char StructureProssessAuthType; // 0xa8
	TArray<int64_t> OfficialSeals; // 0xb0
	char MaxMemberAddSkillLevel; // 0xc0
	int32_t JunId; // 0xc4
	int32_t LanguageIndex; // 0xc8
	FDateTime LastActiveTime; // 0xd0
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FWorldRankMsgStu {
	EWorldRankType RankType; // 0x0
	FString RankName; // 0x8
	FString ID; // 0x18
	FString Name; // 0x28
	uint32_t score1; // 0x38
	FString Info; // 0x40
};

struct FLandmassFalloffSettings {
	EBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FGeneralSkillCondition {
	TArray<FGeneralSmallSkillConditionEntry> SkillConditions; // 0x0
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FGuildEventDataStarted {
	char bIsValid : 1; // 0x0
	char bIsStarted : 1; // 0x0
	char bIsGuildEvent : 1; // 0x0
	EEventGuildType EventGuildType; // 0x1
	int32_t DetailIndex; // 0x4
	int32_t SpawnDetailIndex; // 0x8
	int32_t CurSpawnIndex; // 0xc
	TWeakObjectPtr<AActor> TargetActor; // 0x10
	FGuid TargetOwnerUid; // 0x18
	FGuid TargetGuildUid; // 0x28
	TArray<TWeakObjectPtr<ABaseCharacter>> SpawnedActors; // 0x38
	float RemainingTime; // 0x48
	float TimeOutRemainingTime; // 0x4c
	float CurTotalDamage; // 0x50
	int32_t CurDemolishStructureNum; // 0x54
	float RemainDelayTime; // 0x58
	float RemainWarnTime; // 0x5c
	ECapitalType RansomCapitalType; // 0x60
	float RansomCount; // 0x64
};

struct FHairExternalForces {
	FVector GravityVector; // 0x0
	float AirDrag; // 0xc
	FVector AirVelocity; // 0x10
};

struct FGeomComponentCacheParameters {
	EGeometryCollectionCacheType CacheMode; // 0x0
	UGeometryCollectionCache* TargetCache; // 0x8
	float ReverseCacheBeginTime; // 0x10
	bool SaveCollisionData; // 0x14
	bool DoGenerateCollisionData; // 0x15
	int32_t CollisionDataSizeMax; // 0x18
	bool DoCollisionDataSpatialHash; // 0x1c
	float CollisionDataSpatialHashRadius; // 0x20
	int32_t MaxCollisionPerCell; // 0x24
	bool SaveBreakingData; // 0x28
	bool DoGenerateBreakingData; // 0x29
	int32_t BreakingDataSizeMax; // 0x2c
	bool DoBreakingDataSpatialHash; // 0x30
	float BreakingDataSpatialHashRadius; // 0x34
	int32_t MaxBreakingPerCell; // 0x38
	bool SaveTrailingData; // 0x3c
	bool DoGenerateTrailingData; // 0x3d
	int32_t TrailingDataSizeMax; // 0x40
	float TrailingMinSpeedThreshold; // 0x44
	float TrailingMinVolumeThreshold; // 0x48
};

struct FRandomPlayerSequenceEntry {
	UAnimSequence* Sequence; // 0x0
	float ChanceToPlay; // 0x8
	int32_t MinLoopCount; // 0xc
	int32_t MaxLoopCount; // 0x10
	float MinPlayRate; // 0x14
	float MaxPlayRate; // 0x18
	FAlphaBlend BlendIn; // 0x20
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FGuanAiActivityUIGuanAiInfo {
	int32_t GuanAiId; // 0x0
	FVector2D GuanAiPos; // 0x4
};

struct FJumpAnims {
	UAnimSequence* JumpStart; // 0x0
	UAnimSequence* JumpFlail; // 0x8
	UAnimSequence* JumpFalling; // 0x10
	UAnimSequence* JumpLand; // 0x18
	UAnimMontage* JumpAdditiveLand; // 0x20
	UBlendSpace* JumpLeanBS; // 0x28
};

struct FAttackData {
	FString AccountID; // 0x0
	FString CharacterName; // 0x10
	AActor* AttackClass; // 0x20
	bool bIsEnemy; // 0x28
	bool bIsSetWillDead; // 0x29
	double OccurTime; // 0x30
	EMsgRecord_DeadType DeadType; // 0x38
	int32_t DamageIconIndex; // 0x3c
	int32_t AttackGroupType; // 0x40
};

struct FSkeletalMeshBuildSettings {
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bUseMikkTSpace : 1; // 0x0
	char bComputeWeightedNormals : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	float ThresholdPosition; // 0x4
	float ThresholdTangentNormal; // 0x8
	float ThresholdUV; // 0xc
	float MorphThresholdPosition; // 0x10
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FGameplayAbilitySpec : FFastArraySerializerItem {
	FGameplayAbilitySpecHandle Handle; // 0xc
	UGameplayAbility* Ability; // 0x10
	int32_t Level; // 0x18
	int32_t InputID; // 0x1c
	UObject* SourceObject; // 0x20
	char ActiveCount; // 0x28
	char InputPressed : 1; // 0x29
	char RemoveAfterActivation : 1; // 0x29
	char PendingRemove : 1; // 0x29
	char bActivateOnce : 1; // 0x29
	FGameplayAbilityActivationInfo ActivationInfo; // 0x30
	FGameplayTagContainer DynamicAbilityTags; // 0x48
	TArray<UGameplayAbility*> NonReplicatedInstances; // 0x68
	TArray<UGameplayAbility*> ReplicatedInstances; // 0x78
	FActiveGameplayEffectHandle GameplayEffectHandle; // 0x88
};

struct FGroomConversionSettings {
	FVector Rotation; // 0x0
	FVector Scale; // 0xc
};

struct FDeathCharacterInfoList {
	TArray<FDeathCharacterInfo> DeathCharacterInfoList; // 0x0
};

struct FHairCardsGeometrySettings {
	EHairCardsGenerationType GenerationType; // 0x0
	int32_t CardsCount; // 0x4
	EHairCardsClusterType ClusterType; // 0x8
	float MinSegmentLength; // 0xc
	float AngularThreshold; // 0x10
	float MinCardsLength; // 0x14
	float MaxCardsLength; // 0x18
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FRescueData {
	char bIsRescue : 1; // 0x0
	UAnimMontage* RescueMontage; // 0x8
};

struct FMotoSynthRuntimeSettings {
	bool bSynthToneEnabled; // 0x0
	float SynthToneVolume; // 0x4
	float SynthToneFilterFrequency; // 0x8
	int32_t SynthOctaveShift; // 0xc
	bool bGranularEngineEnabled; // 0x10
	float GranularEngineVolume; // 0x14
	float GranularEnginePitchScale; // 0x18
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1c
	int32_t NumGrainTableEntriesPerGrain; // 0x20
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28
	UMotoSynthSource* AccelerationSource; // 0x30
	UMotoSynthSource* DecelerationSource; // 0x38
	bool bStereoWidenerEnabled; // 0x40
	float StereoDelayMsec; // 0x44
	float StereoFeedback; // 0x48
	float StereoWidenerWetlevel; // 0x4c
	float StereoWidenerDryLevel; // 0x50
	float StereoWidenerDelayRatio; // 0x54
	bool bStereoWidenerFilterEnabled; // 0x58
	float StereoWidenerFilterFrequency; // 0x5c
	float StereoWidenerFilterQ; // 0x60
};

struct FToolTipsItemTypeList {
	TArray<EToolTipsItemType> ToolTipsItemTypeList; // 0x0
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FAddSkillExtraAdd {
	TArray<FExtraAddSkill> ExtraAddSkill; // 0x0
};

struct FHelpTips {
	TArray<FHelpTipsSlotSetting> HelpTipsSlot; // 0x0
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FFinishedWeeklyQuest {
	int32_t QuestID; // 0x0
	int32_t WeekNum; // 0x4
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FAnimalsCustomDeathAnims {
	TArray<UAnimMontage*> DeathAnimMontages; // 0x0
	TArray<UAnimSequenceBase*> DeathAnimPoses; // 0x10
};

struct FAppearanceKitInfo {
	int32_t KitIndex; // 0x0
	ECharacterAppearanceType AppearanceType; // 0x4
	FDateTime StartTime; // 0x8
	FDateTime EndTime; // 0x10
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FSessionServicePing {
	FString UserName; // 0x0
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FVector2D ShadowOffset; // 0x88
	FLinearColor ShadowColorAndOpacity; // 0x90
	FSlateColor SelectedBackgroundColor; // 0xa0
	FLinearColor HighlightColor; // 0xc8
	FSlateBrush HighlightShape; // 0xd8
	FSlateBrush StrikeBrush; // 0x160
	FSlateBrush UnderlineBrush; // 0x1e8
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FVGOptionProp {
	TSoftObjectPtr<UTexture2D> IconProp; // 0x0
	FString PropName; // 0x28
};

struct FAnimalFurRelationTableRow : FTableRowBase {
	EAnimalFurColorType Enum_FurColorType; // 0x8
	TMap<EAnimalFurColorType, EAnimalFurColorType> TMap_AnimalFurRelationConfig; // 0x10
};

struct FDLSS_Parameters {
	FString Sharpness_2_35A008B94CA19E1D1157B4BEE3664DDE; // 0x0
	FString BinarySearchOrder_40_4A5F178D4DE20524A960E091A6F15B02; // 0x10
	FString Quality_12_75728F6C402DDAD6D3C83CB43D125F96; // 0x20
	FString DLSSEnable_39_13810A794156D8CEAF3F7AA78AD87AA4; // 0x30
	FString ReflectionsEnableTAABeforeDLSS_18_071A129344D3B6A5FF8552901A8CF67F; // 0x40
	FString TranslucencyEnableTAABeforeDLSS_21_7E947A1D40EA2E0800C722881BCA5577; // 0x50
	FString ParticleReapplyTAAafterDLSS_38_01F8076E42227DCDF5D7C6BD22E42432; // 0x60
	FString FramesUntilFeatureDesturction_41_146725084183D5B8875F03B095965D14; // 0x70
	FString DilateMotionVectors_42_75D786CA4852F3DA32BBD5A03196AD6A; // 0x80
	FString ReflectionsTAA_43_E0D798E64EE07DDF022D31A71335EFD3; // 0x90
	FString WaterReflectionsTAA_44_71C49B4347FB341069C65DA4366CAC3E; // 0xa0
	bool EnableRTXParameterOverridebasedonDLSSstatus_23_2DE4E6914407E08718FD63BA1D1DAB85; // 0xb0
	bool EnableOverrideFromUI_25_C5AF676740D5D4F66196FAB79DF9A06B; // 0xb1
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FSGItemReward {
	USGItem* RewardItem; // 0x0
	int32_t Count; // 0x8
};

struct FAttackInfo {
	UAnimMontage* AttackAnim; // 0x0
	UAnimMontage* AttackReboundMontage; // 0x8
	UAimOffsetBlendSpace* AttackAO; // 0x10
	EDamageType DamageType; // 0x18
	EPrimaryWeaponType PrimaryWeaponType; // 0x19
	char bIsBreakDefense : 1; // 0x1a
	float GroundAttackPlayRate; // 0x1c
	float RiderAttackPlayRate; // 0x20
	float AttackStartPosition; // 0x24
	float BlockingAttackStartPosition; // 0x28
	float AttackAfterShakingTime; // 0x2c
	float AttackBeforeShakingTime; // 0x30
	float SPEvent_AttackCostMul; // 0x34
	float SPEvent_MeshReboundMul; // 0x38
	float SPEvent_BlockReboundMul; // 0x3c
	FVector2D PoseInitPositionRange; // 0x40
	FVector2D PoseOutPositionRange; // 0x48
	FVector2D PoseReverseInitPositionRange; // 0x50
	FVector2D PoseReverseOutPositionRange; // 0x58
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FBattleServiceQueueCountInfo {
	int32_t ServerId; // 0x0
	int32_t QueueNum; // 0x4
};

struct FWeatherControlLocalizationConfig : FTableRowBase {
	FText WeatherControlDescription; // 0x8
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	float Alpha; // 0x34
	char bAlphaBoolEnabled : 1; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBias AlphaScaleBias; // 0x90
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98
	int32_t LODThreshold; // 0xc8
};

struct FHairSolverSettings {
	bool EnableSimulation; // 0x0
	EGroomNiagaraSolvers NiagaraSolver; // 0x1
	TSoftObjectPtr<UNiagaraSystem> CustomSystem; // 0x8
	int32_t SubSteps; // 0x30
	int32_t IterationCount; // 0x34
};

struct FAccomplishAchievementDataArray {
	TArray<FAccomplishAchievementData> AccomplishAchievementArray; // 0x0
};

struct FSeasonReward : FTableRowBase {
	int32_t RewardIndex; // 0x8
	TSoftObjectPtr<UTexture2D> RewardIcon; // 0x10
	int32_t RewardPropsIndex; // 0x38
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FBGMDetailData {
	FString SoundID; // 0x0
	char bPass : 1; // 0x10
	int32_t Priority; // 0x14
};

struct FGameplayEffectAttributeCaptureSpecContainer {
	TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0
	TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10
	bool bHasNonSnapshottedAttributes; // 0x20
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FBuffDamagePara {
	float Damage; // 0x0
	float DamageMulAdd; // 0x4
};

struct FEnvironmentVolumePostProcessData {
	UMaterialInstance* EnvironmentVolumePostProcess; // 0x0
	float RequireFloatMapToZero; // 0x8
	float RequireFloatMapToMax; // 0xc
	TArray<FEnvironmentMaterialData> MaterialData; // 0x10
};

struct FHuKouNode {
	int32_t ServerId; // 0x0
	FDateTime HuKouExpireTime; // 0x8
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FNewsNotifyMessage {
	ENewsNotifyType NewsNotifyType; // 0x0
	TMap<FGuid, FString> News; // 0x8
};

struct FOccupyStructureRPC {
	FVector StructureLocation; // 0x0
	int32_t CurrentInnerRadius; // 0xc
	int32_t CurrentOuterRadius; // 0x10
	char bThisWeekPreventDecay : 1; // 0x14
	int32_t CurrentLevel; // 0x18
	int32_t CurrentWeiWang; // 0x1c
	FGuid GuildOwnerGuid; // 0x20
	FString GuildName; // 0x30
	FGuid ActorOwnerGuid; // 0x40
	TArray<FProtectTimeRange> CurrentProtectTimeRange; // 0x50
	FDateTime SearchedUTCTime; // 0x60
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FDirectionWidgetData {
	UTexture2D* icon; // 0x0
	FVector2D position; // 0x8
	FVector2D Scale; // 0x10
	float Angle; // 0x18
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FGuildMemberKPIInfo {
	FGuid MemberUid; // 0x0
	int32_t ItemIndex1; // 0x10
	int32_t ItemCurNum1; // 0x14
	int32_t ItemNeedNum1; // 0x18
	int32_t ItemIndex2; // 0x1c
	int32_t ItemCurNum2; // 0x20
	int32_t ItemNeedNum2; // 0x24
	int32_t ItemIndex3; // 0x28
	int32_t ItemCurNum3; // 0x2c
	int32_t ItemNeedNum3; // 0x30
	int32_t ItemIndex4; // 0x34
	int32_t ItemCurNum4; // 0x38
	int32_t ItemNeedNum4; // 0x3c
	int32_t ItemIndex5; // 0x40
	int32_t ItemCurNum5; // 0x44
	int32_t ItemNeedNum5; // 0x48
	int32_t DepotLevel; // 0x4c
	int32_t TotalPoint; // 0x50
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FGPUSpriteLocalVectorFieldInfo {
	UVectorField* Field; // 0x0
	FTransform Transform; // 0x10
	FRotator MinInitialRotation; // 0x40
	FRotator MaxInitialRotation; // 0x4c
	FRotator RotationRate; // 0x58
	float Intensity; // 0x64
	float Tightness; // 0x68
	char bIgnoreComponentTransform : 1; // 0x6c
	char bTileX : 1; // 0x6c
	char bTileY : 1; // 0x6c
	char bTileZ : 1; // 0x6c
	char bUseFixDT : 1; // 0x6c
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FBattleSPConfig {
	float IdleSPState_CostMul; // 0x0
	float IdleSPState_RecoverMul; // 0x4
	float BlockingSPState_CostMul; // 0x8
	float BlockingSPState_RecoverMul; // 0xc
	float AttackingSPState_CostMul; // 0x10
	float AttackingSPState_RecoverMul; // 0x14
	float SPState_AttackBlockReboundCostMul; // 0x18
	float SPState_AttackBlockReboundRecoverMul; // 0x1c
	float SPState_AttackMeshReboundCostMul; // 0x20
	float SPState_AttackMeshReboundRecoverMul; // 0x24
};

struct FBigMapJunInfo : FTableRowBase {
	FText JunName; // 0x8
	TSoftObjectPtr<UTexture2D> JunTexture; // 0x20
	FVector2D JunPosition; // 0x48
	FLinearColor JunColor; // 0x50
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FAnimalRealNamePerkData {
	float ReplicatedDurationTime; // 0x0
	float DurationTime; // 0x4
	float ReplicatedRemainingCDTime; // 0x8
	float RemainingCDTime; // 0xc
	int32_t RealNameIndex; // 0x10
	int32_t RealNamePerkIndex; // 0x14
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FAnimalsJumpAnims {
	UAnimSequence* JumpStart; // 0x0
	UAnimSequence* JumpFlail; // 0x8
	UAnimSequence* JumpFalling; // 0x10
	UAnimSequence* JumpLand; // 0x18
	UAnimMontage* JumpAdditiveLand; // 0x20
	UAnimMontage* JumpAdditiveMovingLand; // 0x28
	UBlendSpace* JumpLeanBS; // 0x30
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FGuildEventRecord {
	EGuildEventModifyType GuildEventModifyType; // 0x0
	int32_t GuildEventModifyIndex; // 0x4
	float AddConflictValue; // 0x8
	FDateTime RecordTime; // 0x10
	float DelayRemainTime; // 0x18
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FHairGroupsMeshesSourceDescription {
	UMaterialInterface* Material; // 0x0
	FName MaterialSlotName; // 0x8
	UStaticMesh* ImportedMesh; // 0x10
	FHairGroupCardsTextures Textures; // 0x18
	int32_t GroupIndex; // 0x48
	int32_t LODIndex; // 0x4c
	FString ImportedMeshKey; // 0x50
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	bool bEvaluateTracksWhenNotSpawned; // 0x41
	FGuid Guid; // 0x44
	FString Name; // 0x58
	UObject* ObjectTemplate; // 0x68
	TArray<FGuid> ChildPossessables; // 0x70
	ESpawnOwnership Ownership; // 0x80
	FName LevelName; // 0x84
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FClothMaskConfig {
	UTexture2D* ClothMaskTexture[0x3]; // 0x0
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FXingShenEffect : FTableRowBase {
	EXingShenType XingShenType; // 0x8
	FText XingShenName; // 0x10
	FText XingShenDesc; // 0x28
	TArray<FHuangLiEffect> HuangLiEffects; // 0x40
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	TArray<FBoneReference> SourceBones; // 0x90
	TArray<FBoneReference> OnlyDriveBones; // 0xa0
	TArray<FPoseDriverTarget> PoseTargets; // 0xb0
	FBoneReference EvalSpaceBone; // 0xf0
	FRBFParams RBFParams; // 0x100
	EPoseDriverSource DriveSource; // 0x12c
	EPoseDriverOutput DriveOutput; // 0x12d
	char bOnlyDriveSelectedBones : 1; // 0x12e
	int32_t LODThreshold; // 0x130
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FGPUSpriteEmitterInfo {
	UParticleModuleRequired* RequiredModule; // 0x0
	UParticleModuleSpawn* SpawnModule; // 0x8
	UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
	TArray<UParticleModule*> SpawnModules; // 0x18
	FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
	FFloatDistribution VectorFieldScale; // 0xa0
	FFloatDistribution DragCoefficient; // 0xc0
	FFloatDistribution PointAttractorStrength; // 0xe0
	FFloatDistribution Resilience; // 0x100
	FVector ConstantAcceleration; // 0x120
	FVector PointAttractorPosition; // 0x12c
	float PointAttractorRadiusSq; // 0x138
	FVector OrbitOffsetBase; // 0x13c
	FVector OrbitOffsetRange; // 0x148
	FVector2D InvMaxSize; // 0x154
	float InvRotationRateScale; // 0x15c
	float MaxLifetime; // 0x160
	int32_t MaxParticleCount; // 0x164
	EParticleScreenAlignment ScreenAlignment; // 0x168
	EParticleAxisLock LockAxisFlag; // 0x169
	char bEnableCollision : 1; // 0x16c
	EParticleCollisionMode CollisionMode; // 0x170
	char bRemoveHMDRoll : 1; // 0x174
	float MinFacingCameraBlendDistance; // 0x178
	float MaxFacingCameraBlendDistance; // 0x17c
	FRawDistributionVector DynamicColor; // 0x180
	FRawDistributionFloat DynamicAlpha; // 0x1c8
	FRawDistributionVector DynamicColorScale; // 0x1f8
	FRawDistributionFloat DynamicAlphaScale; // 0x240
};

struct FShopUnlockedData {
	FString ShopUnlockedID; // 0x0
	EShopUnlockType ShopUnlockType; // 0x10
	TArray<int32_t> ShopUnlockIndexArray; // 0x18
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; // 0x0
	float DiffuseBoost; // 0x4
	float ExportResolutionScale; // 0x8
	char bCastShadowAsMasked : 1; // 0xc
	char bOverrideCastShadowAsMasked : 1; // 0xc
	char bOverrideEmissiveBoost : 1; // 0xc
	char bOverrideDiffuseBoost : 1; // 0xc
	char bOverrideExportResolutionScale : 1; // 0xc
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FTaishouSignInfo {
	ETaiShouRoundType nBattleRound; // 0x0
	int64_t LeftSignTimeTicks; // 0x8
	int64_t LeftResetTimeTicks; // 0x10
	int64_t LastOpenTimeTicks; // 0x18
	int32_t EnableState; // 0x20
	TArray<float> BattleOverTime; // 0x28
	TArray<FInnerBattleGuildInfo> SignUpGuildArray; // 0x38
	TArray<FInnerBattleInfo> BattleInfoRoundOne; // 0x48
	TArray<FInnerBattleInfo> BattleInfoRoundTwo; // 0x58
	TArray<FInnerBattleInfo> BattleInfoRoundThree; // 0x68
	FInnerBattleInfo BattleInfoRoundFour; // 0x78
};

struct FHuangLiConfig : FTableRowBase {
	int32_t YearNameIndex; // 0x8
	int32_t MonthNameIndex; // 0xc
	int32_t DayNameIndex; // 0x10
	EXingShenType XingShenType; // 0x14
	EJianChuType JianChuType; // 0x15
	EXingXiuType XingXiuType; // 0x16
	float EffectsMultiplier[0x31]; // 0x20
};

struct FRichCurveKey {
	ERichCurveInterpMode InterpMode; // 0x0
	ERichCurveTangentMode TangentMode; // 0x1
	ERichCurveTangentWeightMode TangentWeightMode; // 0x2
	float Time; // 0x4
	float Value; // 0x8
	float ArriveTangent; // 0xc
	float ArriveTangentWeight; // 0x10
	float LeaveTangent; // 0x14
	float LeaveTangentWeight; // 0x18
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FSGAISenseConfig_Sight {
	char bDisablePlayer : 1; // 0x0
	char bEnableLineTrace : 1; // 0x0
	TMap<EAISenseSightRadiusType, float> SightRadiusConfig; // 0x8
	float PeripheralVisionAngleDegrees; // 0x58
	float AutoSuccessRangeFromLastSeenLocation; // 0x5c
	FColor DebugColor; // 0x60
};

struct FShadow_Parameters {
	FString EnableShadow_16_42E314114DF52DDA1F746998967D0D69; // 0x0
	FString EvaluateMaterialsinShadow_17_728A35714A2D2CE2BB782C87F8EDF254; // 0x10
	FString ShadowEnableTwoSidedGeometry_18_E4F0F479419BF5462B8CA386C52019CC; // 0x20
	FString ShadowSPP_19_222F23EF4151A938C7D877B0D90F3255; // 0x30
	FString ShadowMaxBatchSize_20_09D0D43240AC1FBF762B93B6F820E785; // 0x40
	FString ShadowDenoiserMaxBatchSize_21_A4511D17403925B727BEE6BE72A868F8; // 0x50
	FString LightingMaxLights_41_643709A54544E52A183ECDAA837B3061; // 0x60
	FString LightingMaxShadowLights_42_716E70A946B8BBDF783446AB9ABA3D59; // 0x70
	FString ShadowMaxLights_46_75FCFFF242CF12D287843C9E5CDF62FC; // 0x80
	FString ShadowMaxDenoisedLights_45_4EDE192249341D55A1E221B3B183F92B; // 0x90
	FString LightingMissShader_43_36150C4340C63D4EA70CC59D59D625C1; // 0xa0
	FString ShadowsSupportTranslucency_51_569C8F954113622FFC40F5B0308485F2; // 0xb0
	FString SupportLightFunction_28_D1DCAE474964239358DA70AD73C35624; // 0xc0
	FString SharpShadowFallBack_29_532FB35B4DC6112D35D8B385FBB81C94; // 0xd0
	FString LightChannelSupport_30_0503581A4B0BF0D27C6B678786D81196; // 0xe0
	FString Per-LightShadowCasting_32_119CD88B437AD7F2A694BEBFF9DAFFF7; // 0xf0
	FString EnableVolumetricShadow_35_DF3AEAC645A1EE6B1D68F1A045EB5ACF; // 0x100
	FString ShadowPrioritizeDirectional_48_C64F92114FE29497B9473794A6BA8BAA; // 0x110
};

struct FMsgClientServerErrorMessage : FMessageBase {
	FString Msg; // 0x8
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	FBoneSocketTarget LookAtTarget; // 0xe0
	FVector LookAtLocation; // 0x140
	FAxis LookAt_Axis; // 0x14c
	bool bUseLookUpAxis; // 0x15c
	EInterpolationBlend InterpolationType; // 0x15d
	FAxis LookUp_Axis; // 0x160
	float LookAtClamp; // 0x170
	float InterpolationTime; // 0x174
	float InterpolationTriggerThreashold; // 0x178
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FAttachVolumeBox {
	FVector Size; // 0x0
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FLearnPerkToReplaceBuff {
	USGBuff* RequireLearnBuff; // 0x0
	TArray<USGBuff*> ReplaceBuffs; // 0x8
};

struct FStunAnim {
	UAnimMontage* StunAnim; // 0x0
	UAnimMontage* CarryUpAnim; // 0x8
	UAnimMontage* BeCarryUpAnim; // 0x10
	UAnimMontage* DropToGroundAnim; // 0x18
	UAnimMontage* BeDropToGroundAnim; // 0x20
	UAnimMontage* CarryUpVehicleAnim; // 0x28
	UAnimMontage* DropToVehicleAnim; // 0x30
	UAnimMontage* GetUpAnim; // 0x38
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FBattleSoliderInfo {
	UTexture2D* icon; // 0x0
	FText SoliderType; // 0x8
	int32_t ExperienceAdd; // 0x20
	TMap<USGItem*, int32_t> DefaultInventoryItems; // 0x28
	TArray<USGItem*> DefaultEquippedItems; // 0x78
	TMap<USGItem*, int32_t> DefaultShortCutItems; // 0x88
	USGItem* AmmonType; // 0xd8
	ASG_HorseCharacter* HorseCharacter; // 0xe0
	int32_t HorseLevel; // 0xe8
	TArray<USGItem*> HorseEquippedItems; // 0xf0
	int32_t OneHandedWeaponsAddPoints; // 0x100
	int32_t ShieldsAddPoints; // 0x104
	int32_t TowHandedWeaponsAddPoints; // 0x108
	int32_t PolearmsAddPoints; // 0x10c
	int32_t HeavyArmorsAddPoints; // 0x110
	int32_t ThrowingAddPoints; // 0x114
	int32_t ArcheryAddPoints; // 0x118
	int32_t CrossbowsAddPoints; // 0x11c
	int32_t RidingAddPoints; // 0x120
	int32_t LightArmorsAddPoints; // 0x124
	int32_t PhysiqueAddPoints; // 0x128
	int32_t MiningAddPoints; // 0x12c
	int32_t LumberingAddPoints; // 0x130
	int32_t HuntingAddPoints; // 0x134
	int32_t PlantingAddPoints; // 0x138
	int32_t HandMakingAddPoints; // 0x13c
	int32_t SiegeWorkingAddPoints; // 0x140
	int32_t BuildingAddPoints; // 0x144
	int32_t ArmorerAddPoints; // 0x148
	int32_t HerbAddPoints; // 0x14c
	int32_t LeaderShipAddPoints; // 0x150
	int32_t TrainingAddPoints; // 0x154
	int32_t RecruitAddPoints; // 0x158
	int32_t TamingAddPoints; // 0x15c
	int32_t RenownAddPoints; // 0x160
	int32_t LimitLevel; // 0x164
	int32_t AddPerkPoints; // 0x168
	int32_t SkillPublicExp; // 0x16c
	int32_t ConsumeCopperCoin; // 0x170
};

struct FTransitions {
	UAnimMontage* Equip; // 0x0
	UAnimMontage* Holster; // 0x8
	UAnimMontage* ToStand; // 0x10
	UAnimMontage* ToCrouch; // 0x18
	UAnimMontage* ToProne; // 0x20
	UAnimMontage* ToAim; // 0x28
	UAnimMontage* ToRiderAim; // 0x30
	UAnimMontage* ToAimMoving; // 0x38
	UAnimMontage* GetUpFromFront; // 0x40
	UAnimMontage* GetUpFromBack; // 0x48
	UAnimMontage* PickUp; // 0x50
	UAnimMontage* Unlock; // 0x58
};

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FMsgClientCheckDeviceIdResult : FMessageBase {
	ECheckDeviceIdResultType CheckDeviceIdResultType; // 0x8
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FSGPerkList {
	TArray<USGPerk*> PerkList; // 0x0
};

struct FSimulationStageMetaData {
	FName SimulationStageName; // 0x0
	FName IterationSource; // 0x8
	char bSpawnOnly : 1; // 0x10
	char bWritesParticles : 1; // 0x10
	char bPartialParticleUpdate : 1; // 0x10
	TArray<FName> OutputDestinations; // 0x18
	int32_t MinStage; // 0x28
	int32_t MaxStage; // 0x2c
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FInheritedTagContainer {
	FGameplayTagContainer CombinedTags; // 0x0
	FGameplayTagContainer Added; // 0x20
	FGameplayTagContainer Removed; // 0x40
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FStaticMeshOptimizationSettings {
	EOptimizationType ReductionMethod; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float MaxDeviationPercentage; // 0x8
	float WeldingThreshold; // 0xc
	bool bRecalcNormals; // 0x10
	float NormalsThreshold; // 0x14
	char SilhouetteImportance; // 0x18
	char TextureImportance; // 0x19
	char ShadingImportance; // 0x1a
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FSplineCurves {
	FInterpCurveVector position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FNiagaraDataSetCompiledData {
	TArray<FNiagaraVariable> Variables; // 0x0
	TArray<FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
	FNiagaraDataSetID ID; // 0x20
	uint32_t TotalFloatComponents; // 0x2c
	uint32_t TotalInt32Components; // 0x30
	uint32_t TotalHalfComponents; // 0x34
	char bRequiresPersistentIDs : 1; // 0x38
	ENiagaraSimTarget SimTarget; // 0x3c
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	int32_t NumSkyLightingBounces; // 0x8
	float IndirectLightingQuality; // 0xc
	float IndirectLightingSmoothness; // 0x10
	FColor EnvironmentColor; // 0x14
	float EnvironmentIntensity; // 0x18
	float EmissiveBoost; // 0x1c
	float DiffuseBoost; // 0x20
	EVolumeLightingMethod VolumeLightingMethod; // 0x24
	char bUseAmbientOcclusion : 1; // 0x25
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x25
	char bVisualizeMaterialDiffuse : 1; // 0x25
	char bVisualizeAmbientOcclusion : 1; // 0x25
	char bCompressLightmaps : 1; // 0x25
	float VolumetricLightmapDetailCellSize; // 0x28
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30
	float VolumeLightSamplePlacementScale; // 0x34
	float DirectIlluminationOcclusionFraction; // 0x38
	float IndirectIlluminationOcclusionFraction; // 0x3c
	float OcclusionExponent; // 0x40
	float FullyOccludedSamplesFraction; // 0x44
	float MaxOcclusionDistance; // 0x48
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FGuildEventConfigEntry {
	TMap<float, FText> DescriptionTexts; // 0x0
	TArray<FGuildEventModifyConflict> ModifyConflict; // 0x50
	TArray<FGuildEventConfigDetail> Details; // 0x60
	UDataTable* OccupyModifyConflictDataTable; // 0x70
	FText OccupyModifyConflictTitle; // 0x78
	FText OccupyModifyConflictText; // 0x90
	FString OccupyClearCountUtcTime; // 0xa8
	FText DeclareWarConflictTitle; // 0xb8
	FText DeclareWarConflictText; // 0xd0
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FWater_Caustics_Parameters {
	FString WaterCausticsType_10_22E9DB2B44EBA1DDFCD669BFC4F5A2C3; // 0x0
	FString WaterCausticsBufferScale_11_4891F1C1433E69AD7AE583B26CB8B74F; // 0x10
	FString WaterCausticsRefractiveIntensity_12_84E7671A4C1BAFCE5A912E8B9D549C41; // 0x20
	FString WaterCausticsReflectiveIntensity_13_A8FAED5646D272D518F78DBF2EC3FFF3; // 0x30
	FString WaterCausticsFresnelBaseReflectFraction_23_28BA9C044FF67107897D8E983B459690; // 0x40
	FString WaterCausticsMapSizeX_24_0DD69E77451F51BCA32B16A0B271FC6C; // 0x50
	FString WaterCausticsMapSizeY_25_5995CB844729B31103795D9CACF0CF3E; // 0x60
	FString WaterCausticsNumDenoisePasses_26_5FDE5D6146B749E8B952F89B329F61B2; // 0x70
	FString WaterCausticsMinReflectionRayDistance_27_45097790417E6E7F541B1382E5A0C9AA; // 0x80
	FString WaterCausticsMaxReflectionRayDistance_28_67F4322D4AF3ACF0CD8B2895974A115B; // 0x90
	FString WaterCausticsMinRefractionRayDistance_29_E9C281484F546DBCAF69C5A7866FD0B2; // 0xa0
	FString WaterCausticsMaxRefractionRayDistance_30_3B0E91A54E9D4AD25FCDD18B13E2A9EB; // 0xb0
	FString WaterCausticsRectLightTemporalWeight_32_6729E6744212BBA47350FDB9D6743EF6; // 0xc0
	FString WaterCausticsRefractBackFaceCullingThreshold_33_7EC526954286067A65F5C7A1F3F7A71A; // 0xd0
	FString WaterCausticsReflectBackFaceCullingThreshold_36_16DE876A4587F2728ED6C2BA6FD54C98; // 0xe0
	FString WaterCausticsMapCascades_48_C35E153E4FD3359DF08CED8FD8911D43; // 0xf0
	FString WaterCausticsMapCascadeScale_47_59ED42134835FEEF0A3586B7A60856F1; // 0x100
	FString WaterCausticsMapForceLevel_51_4FE7525E45C9D08EA0F96D8388F5BFF6; // 0x110
	FString WaterCausticsShowPhoton_46_B3215C834DEFE8DC5DA4A6A8F292D91D; // 0x120
	FString WaterCausticsPhotonScale_54_1E5BBCA644165B132F85C78276BB702F; // 0x130
	FString WaterCausticsCascadeSamplingOffsetX_61_2719694E494E4EB376BB5DAF45921638; // 0x140
	FString WaterCausticsCascadeSamplingOffsetY_63_98AADADD45FD2ED6D43DC0ADDEC6C53A; // 0x150
	FString WaterCausticsCascadeSamplingUVScaleX_64_3141DE974ACBDD26008C3E8B72619B44; // 0x160
	FString WaterCausticsCascadeSamplingUVScaley_65_A879211B4B47DBCDA46BE4A1A4A3F47D; // 0x170
	FString UseSceneLightDir_68_7B35F1EA4CDF9B9D16F068BF886419AF; // 0x180
	FString WaterCausticsReflectiveNormalScale_72_8E7BE7F040BCAA5474D9C58BBEB1FEC7; // 0x190
	FString WaterCausticsRefractiveNormalScale_75_11BB4FDF492EC51614A427BC18CFF5B0; // 0x1a0
};

struct FGameplayTagBlueprintPropertyMap {
	TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10
};

struct FTransformOffsetData {
	FVector CurrentTranslation; // 0x18
	FRotator CurrentRotation; // 0x3c
	FVector CurrentScale; // 0x60
	float RotAlpha; // 0x74
	float Alpha; // 0x80
};

struct FJueWeiConfig {
	FText JueWeiName; // 0x0
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x18
	FText Desc; // 0x40
	TArray<FJueWeiCondition> Conditions; // 0x58
	TArray<USGBuff*> AddBuffs; // 0x68
	TArray<FJueWeiPropShow> PropShow; // 0x78
};

struct FVoiceSoundDataArray {
	FText Description; // 0x0
	TArray<FVoiceSoundData> VoiceDataArray; // 0x18
};

struct FCPGFilters {
	TArray<FCPGFilterInfo> CPGFilterInfos; // 0x0
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FAnimalsModifyBoneConfig {
	FName BoneName; // 0x0
	FTransform BoneTransform; // 0x10
	char bIsRecursive : 1; // 0x40
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FSimSpaceSettings {
	float MasterAlpha; // 0x0
	float VelocityScaleZ; // 0x4
	float MaxLinearVelocity; // 0x8
	float MaxAngularVelocity; // 0xc
	float MaxLinearAcceleration; // 0x10
	float MaxAngularAcceleration; // 0x14
	float ExternalLinearDrag; // 0x18
	FVector ExternalLinearDragV; // 0x1c
	FVector ExternalLinearVelocity; // 0x28
	FVector ExternalAngularVelocity; // 0x34
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FHairGroupCardsTextures {
	UTexture2D* DepthTexture; // 0x0
	UTexture2D* CoverageTexture; // 0x8
	UTexture2D* TangentTexture; // 0x10
	UTexture2D* AttributeTexture; // 0x18
	UTexture2D* AuxilaryDataTexture; // 0x20
};

struct FModulatorContinuousParams {
	FName ParameterName; // 0x0
	float Default; // 0x8
	float MinInput; // 0xc
	float MaxInput; // 0x10
	float MinOutput; // 0x14
	float MaxOutput; // 0x18
	ModulationParamMode ParamMode; // 0x1c
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FPhysicsAssetLimit {
	UPhysicsAsset* PhysicsAsset; // 0x0
	TArray<FSphericalLimit> SphericalLimits; // 0x8
	TArray<FCapsuleLimit> CapsuleLimits; // 0x18
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FMsgClientEnterLogicServerResult : FMessageBase {
	int32_t nQueueCount; // 0x8
	int32_t nServerId; // 0xc
	int32_t nServerType; // 0x10
	FString IPAddress; // 0x18
	int32_t nPort; // 0x28
	FGuid LogicServerToken; // 0x2c
};

struct FGameplayAbilityLocalAnimMontage {
	UAnimMontage* AnimMontage; // 0x0
	bool PlayBit; // 0x8
	FPredictionKey PredictionKey; // 0x10
	UGameplayAbility* AnimatingAbility; // 0x20
};

struct FPlayerBattleData {
	FString AccountID; // 0x0
	TWeakObjectPtr<ASGCharacter> PlayerWptr; // 0x10
	FString CharacterName; // 0x18
	int32_t GroupType; // 0x28
	int32_t PersonalScore; // 0x2c
	int32_t KillNum; // 0x30
	int32_t KillBeforeDead; // 0x34
	int32_t DeadNum; // 0x38
	int32_t AssistKill; // 0x3c
	bool bOffline; // 0x40
};

struct FAnimalsStanceAIConfig {
	float RandomWeight; // 0x0
	float TriggerChance; // 0x4
	int32_t RandomMinCount; // 0x8
	int32_t RandomMaxCount; // 0xc
	char bDisableTamed : 1; // 0x10
	char bUseDurationTimeOverride : 1; // 0x10
	float DurationTimeOverrideMin; // 0x14
	float DurationTimeOverrideMax; // 0x18
	float ToggleToDefaultIdleBehaviorTime; // 0x1c
	float CapsuleHalfHeight; // 0x20
	float CapsuleHalfRadius; // 0x24
	float FloorAngleMax; // 0x28
};

struct FLevelSequencePlayerSnapshot {
	FString MasterName; // 0x0
	FQualifiedFrameTime MasterTime; // 0x10
	FQualifiedFrameTime SourceTime; // 0x20
	FString CurrentShotName; // 0x30
	FQualifiedFrameTime CurrentShotLocalTime; // 0x40
	FQualifiedFrameTime CurrentShotSourceTime; // 0x50
	FString SourceTimecode; // 0x60
	TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70
	FLevelSequenceSnapshotSettings Settings; // 0x98
	ULevelSequence* ActiveShot; // 0xa8
	FMovieSceneSequenceID ShotID; // 0xb0
};

struct FPlayerShowUnlockDetail {
	EPlayerShowLockType LockType; // 0x0
	int32_t CompareVal; // 0x4
	USGItem* ItemClass; // 0x8
	ESkillType SkillType; // 0x10
	FString AchievementId; // 0x18
	EPlayerShowLockCompareType CompareType; // 0x28
};

struct FBehaviorPointData {
	TArray<UAnimMontage*> RelaxedMontages; // 0x0
	TArray<FBehaviorPointTimeWeight> TimeWeight; // 0x10
	FTransform Transform; // 0x20
	FString DisplayString; // 0x50
	FColor DisplayColor; // 0x60
	float RandomRange; // 0x64
	char bSpawnStructure : 1; // 0x68
	FTransform SeatStructureRelativeTransform; // 0x70
	ASGStructureSeat* SeatStructureTemplate; // 0xa0
	USkeletalMesh* StructureSkeletalMesh; // 0xa8
	int32_t HasNPCIndex; // 0xb0
	TWeakObjectPtr<ASGStructureSeat> BindSeatStructure; // 0xb4
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0x168
	FVector ExternalForce; // 0x174
	FVector ComponentLinearAccScale; // 0x180
	FVector ComponentLinearVelScale; // 0x18c
	FVector ComponentAppliedLinearAccClamp; // 0x198
	FSimSpaceSettings SimSpaceSettings; // 0x1a4
	float CachedBoundsScale; // 0x1e4
	FBoneReference BaseBoneRef; // 0x1e8
	ECollisionChannel OverlapChannel; // 0x1f8
	ESimulationSpace SimulationSpace; // 0x1f9
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1fa
	char bEnableWorldGeometry : 1; // 0x1fc
	char bOverrideWorldGravity : 1; // 0x1fc
	char bTransferBoneVelocities : 1; // 0x1fc
	char bFreezeIncomingPoseOnStart : 1; // 0x1fc
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1fc
	float WorldSpaceMinimumScale; // 0x200
	float EvaluationResetTime; // 0x204
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FPlayerPresenceStaus {
	bool bAuthResponse; // 0x0
	bool bHasStatusRsponse; // 0x1
	int32_t GMLevel; // 0x4
	FDateTime PunishTime; // 0x8
	FDateTime ForbiddenSpeakTime; // 0x10
	FDateTime BeWhiteTime; // 0x18
	FString AuthToken; // 0x20
	bool SteamAuthResult; // 0x30
	bool bHasPassport; // 0x31
	FString StrPassportServerList; // 0x38
	TArray<int32_t> PassportServerList; // 0x48
	FString ClientDeviceId; // 0x58
	bool bDevicePassswordConfirmed; // 0x68
	FString DeviceIdPassword; // 0x70
	FString CacheDeviceIdPassword; // 0x80
	FString DeviceID; // 0x90
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	FMargin Margin; // 0x10
	FSlateColor TintColor; // 0x20
	UObject* ResourceObject; // 0x48
	FName ResourceName; // 0x50
	FBox2D UVRegion; // 0x58
	ESlateBrushDrawType DrawAs; // 0x6c
	ESlateBrushTileType Tiling; // 0x6d
	ESlateBrushMirrorType Mirroring; // 0x6e
	ESlateBrushImageType ImageType; // 0x6f
	char bIsDynamicallyLoaded : 1; // 0x80
	char bHasUObject : 1; // 0x80
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x38
	FRotator Rotation; // 0x44
	float Radius0; // 0x50
	float Radius1; // 0x54
	float Length; // 0x58
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FMapBGMData : FTableRowBase {
	FString Description; // 0x8
	char bPlayDefaultTriggerStateBGM : 1; // 0x18
	ESoundTriggerState DefaultTriggerState; // 0x19
	FBGMData BGM; // 0x20
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
	FSoundModulationDestinationSettings DepthModulation; // 0x18
	FSoundModulationDestinationSettings FrequencyModulation; // 0x28
	FSoundModulationDestinationSettings FeedbackModulation; // 0x38
	FSoundModulationDestinationSettings WetModulation; // 0x48
	FSoundModulationDestinationSettings DryModulation; // 0x58
	FSoundModulationDestinationSettings SpreadModulation; // 0x68
};

struct FHairStrandsParameters {
	EGroomStrandsSize StrandsSize; // 0x0
	float StrandsDensity; // 0x4
	float StrandsSmoothing; // 0x8
	float StrandsThickness; // 0xc
	FRuntimeFloatCurve ThicknessScale; // 0x10
};

struct FAnimationNotifyConfig {
	UAnimationNotifyWidget* NotifyWidgetTemplate; // 0x0
	int32_t Priority; // 0x8
	char bReplace : 1; // 0xc
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xe8
	int32_t LODThreshold; // 0xf8
	float Alpha; // 0xfc
	FInputScaleBias AlphaScaleBias; // 0x100
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x108
	FName AlphaCurveName; // 0x150
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x158
	EAnimAlphaInputType AlphaInputType; // 0x18c
	bool bAlphaBoolEnabled; // 0x18d
};

struct FDecalData {
	UMaterialInterface* DecalMaterial; // 0x0
	float DecalSize; // 0x8
	float DecalDepth; // 0xc
	float DecalImpactNormalOffset; // 0x10
	float LifeSpan; // 0x14
};

struct FDBLogSwitchDefaultSetting : FTableRowBase {
	EDBLogSwitchType SwitchType; // 0x8
	char bSwitch : 1; // 0x9
	int32_t ExtendData; // 0xc
	int32_t ExtendData2; // 0x10
};

struct FStructureBuffEntry {
	USGBuff* Buff; // 0x0
	float DamageMultiplier; // 0x8
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FNiagaraEmitterCompiledData {
	TArray<FName> SpawnAttributes; // 0x0
	FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
	FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x30
	FNiagaraVariable EmitterSpawnGroupVar; // 0x50
	FNiagaraVariable EmitterAgeVar; // 0x70
	FNiagaraVariable EmitterRandomSeedVar; // 0x90
	FNiagaraVariable EmitterInstanceSeedVar; // 0xb0
	FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd0
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0xf0
};

struct FVehiclePerkRandomEntry {
	USGVehiclePerk* PerkClass; // 0x0
	float RandomWeight; // 0x8
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FSocketMorphPositonDeltaEntry {
	FName SocketName; // 0x0
	FName MorphTargetName; // 0x8
	FVector LocalSpaceDiffDistance; // 0x10
};

struct FNews_GeneralDead : FNewsBase {
	FString GeneralName; // 0x18
	AActor* GeneralTemplate; // 0x28
};

struct FShopBannerItem : FTableRowBase {
	int32_t BannerIndex; // 0x8
	EShopPropState BannerState; // 0xc
	int32_t ShopPropsIndex; // 0x10
	int32_t Priority; // 0x14
	FText BannerNameText; // 0x18
	FText BannerIntroText; // 0x30
	TSoftObjectPtr<UTexture2D> MainBannerIcon; // 0x48
	TSoftObjectPtr<UTexture2D> SecBannerIcon; // 0x70
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FNiagaraRibbonUVSettings {
	ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x0
	ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x4
	ENiagaraRibbonUVDistributionMode DistributionMode; // 0x8
	float TilingLength; // 0xc
	FVector2D Offset; // 0x10
	FVector2D Scale; // 0x18
	bool bEnablePerParticleUOverride; // 0x20
	bool bEnablePerParticleVRangeOverride; // 0x21
};

struct FGoomBindingGroupInfo {
	int32_t RenRootCount; // 0x0
	int32_t RenLODCount; // 0x4
	int32_t SimRootCount; // 0x8
	int32_t SimLODCount; // 0xc
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FBattlePlayerInfo {
	FString AccountID; // 0x0
	FString CharacterName; // 0x10
	bool bResetPoints; // 0x20
	bool bAddExp; // 0x21
	TWeakObjectPtr<ASGPlayerController> SGPlayerController; // 0x24
	EBattlePlayerState BattlePlayerState; // 0x2c
	int32_t GroupType; // 0x30
	int32_t SoliderType; // 0x34
	int32_t CopperCoinNum; // 0x38
	bool bStarted; // 0x3c
	bool bOffline; // 0x3d
};

struct FOccupyBuyItemNum {
	int32_t ItemIndex; // 0x0
	int32_t ItemNum; // 0x4
};

struct FSGCharacterNetInfo {
	int32_t ST; // 0x0
	int32_t AG; // 0x4
	int32_t WI; // 0x8
	int32_t EN; // 0xc
	int32_t CH; // 0x10
	double PublicSkillExp; // 0x18
	int32_t SkillMasteryPoints; // 0x20
	double PublicExp; // 0x28
	float OneHandedWeapons; // 0x30
	float OneHandedWeaponsCalculation; // 0x34
	double OneHandedWeaponsExp; // 0x38
	int32_t OneHandedWeaponsMastery; // 0x40
	float Shields; // 0x44
	float ShieldsCalculation; // 0x48
	double ShieldsExp; // 0x50
	int32_t ShieldsMastery; // 0x58
	float TowHandedWeapons; // 0x5c
	float TowHandedWeaponsCalculation; // 0x60
	double TowHandedWeaponsExp; // 0x68
	int32_t TowHandedWeaponsMastery; // 0x70
	float Polearms; // 0x74
	float PolearmsCalculation; // 0x78
	double PolearmsExp; // 0x80
	int32_t PolearmsMastery; // 0x88
	float HeavyArmors; // 0x8c
	float HeavyArmorsCalculation; // 0x90
	double HeavyArmorsExp; // 0x98
	int32_t HeavyArmorsMastery; // 0xa0
	float Throwing; // 0xa4
	float ThrowingCalculation; // 0xa8
	double ThrowingExp; // 0xb0
	int32_t ThrowingMastery; // 0xb8
	float Archery; // 0xbc
	float ArcheryCalculation; // 0xc0
	double ArcheryExp; // 0xc8
	int32_t ArcheryMastery; // 0xd0
	float Crossbows; // 0xd4
	float CrossbowsCalculation; // 0xd8
	double CrossbowsExp; // 0xe0
	int32_t CrossbowsMastery; // 0xe8
	float Riding; // 0xec
	float RidingCalculation; // 0xf0
	double RidingExp; // 0xf8
	int32_t RidingMastery; // 0x100
	float LightArmors; // 0x104
	float LightArmorsCalculation; // 0x108
	double LightArmorsExp; // 0x110
	int32_t LightArmorsMastery; // 0x118
	float Physique; // 0x11c
	float PhysiqueCalculation; // 0x120
	double PhysiqueExp; // 0x128
	int32_t PhysiqueMastery; // 0x130
	float Mining; // 0x134
	float MiningCalculation; // 0x138
	double MiningExp; // 0x140
	int32_t MiningMastery; // 0x148
	float Lumbering; // 0x14c
	float LumberingCalculation; // 0x150
	double LumberingExp; // 0x158
	int32_t LumberingMastery; // 0x160
	float Hunting; // 0x164
	float HuntingCalculation; // 0x168
	double HuntingExp; // 0x170
	int32_t HuntingMastery; // 0x178
	float Planting; // 0x17c
	float PlantingCalculation; // 0x180
	double PlantingExp; // 0x188
	int32_t PlantingMastery; // 0x190
	float HandMaking; // 0x194
	float HandMakingCalculation; // 0x198
	double HandMakingExp; // 0x1a0
	int32_t HandMakingMastery; // 0x1a8
	float SiegeWorking; // 0x1ac
	float SiegeWorkingCalculation; // 0x1b0
	double SiegeWorkingExp; // 0x1b8
	int32_t SiegeWorkingMastery; // 0x1c0
	float Building; // 0x1c4
	float BuildingCalculation; // 0x1c8
	double BuildingExp; // 0x1d0
	int32_t BuildingMastery; // 0x1d8
	float Armorer; // 0x1dc
	float ArmorerCalculation; // 0x1e0
	double ArmorerExp; // 0x1e8
	int32_t ArmorerMastery; // 0x1f0
	float Herb; // 0x1f4
	float HerbCalculation; // 0x1f8
	double HerbExp; // 0x200
	int32_t HerbMastery; // 0x208
	float Taming; // 0x20c
	float TamingCalculation; // 0x210
	double TamingExp; // 0x218
	int32_t TamingMastery; // 0x220
	float LeaderShip; // 0x224
	float LeaderShipCalculation; // 0x228
	double LeaderShipExp; // 0x230
	int32_t LeaderShipMastery; // 0x238
	float Recruit; // 0x23c
	float RecruitCalculation; // 0x240
	double RecruitExp; // 0x248
	int32_t RecruitMastery; // 0x250
	float Training; // 0x254
	float TrainingCalculation; // 0x258
	double TrainingExp; // 0x260
	int32_t TrainingMastery; // 0x268
	float Renown; // 0x26c
	float RenownCalculation; // 0x270
	double RenownExp; // 0x278
	int32_t RenownMastery; // 0x280
	float WoundTypeValue1; // 0x284
	float WoundTypeValue2; // 0x288
	float WoundTypeValue3; // 0x28c
	float WoundTypeValue4; // 0x290
	FDateTime LastGiveWagesTime; // 0x298
	TArray<float> WoundValues; // 0x2a0
	TArray<int32_t> Perks; // 0x2b0
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FInputAxisKeyMappingMap {
	TArray<FInputAxisKeyMappingConfig> AxisKeyMappings; // 0x0
};

struct FMouseCursorStyle {
	FSlateBrush NormalBrush; // 0x0
	FSlateBrush PressBrush; // 0x88
};

struct FGameplayTagBlueprintPropertyMapping {
	FGameplayTag TagToMap; // 0x0
	TFieldPath<FProperty> PropertyToEdit; // 0x8
	FName PropertyName; // 0x28
	FGuid PropertyGuid; // 0x30
};

struct FHairCardsClusterSettings {
	float ClusterDecimation; // 0x0
	EHairCardsClusterType Type; // 0x4
	bool bUseGuide; // 0x5
};

struct FEnvTraceData {
	int32_t VersionNum; // 0x0
	UNavigationQueryFilter* NavigationFilter; // 0x8
	float ProjectDown; // 0x10
	float ProjectUp; // 0x14
	float ExtentX; // 0x18
	float ExtentY; // 0x1c
	float ExtentZ; // 0x20
	float PostProjectionVerticalOffset; // 0x24
	ETraceTypeQuery TraceChannel; // 0x28
	ECollisionChannel SerializedChannel; // 0x29
	EEnvTraceShape TraceShape; // 0x2a
	EEnvQueryTrace TraceMode; // 0x2b
	char bTraceComplex : 1; // 0x2c
	char bOnlyBlockingHits : 1; // 0x2c
	char bCanTraceOnNavMesh : 1; // 0x2c
	char bCanTraceOnGeometry : 1; // 0x2c
	char bCanDisableTrace : 1; // 0x2c
	char bCanProjectDown : 1; // 0x2c
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FReflection_Parameters {
	FString EnableReflection_13_F507403D4F7A1CD01010E9A6F04587D1; // 0x0
	FString EnableHeightFoginReflection_14_55A2CFFF4743A2FC0CC28AA5CADADFE3; // 0x10
	FString ReflectionSortMaterials_15_F69BD15C43B20A76600613BAD71A11DA; // 0x20
	FString EnableReflectionShadow_16_5CE4011344B44695A51F5DBB57926695; // 0x30
	FString ReflectionMaxRoughness_17_094F87434A4CA2EF78446385751DA11D; // 0x40
	FString ReflectionScreenPercentage_18_872B98A040695DB673733C87B039D4B0; // 0x50
	FString ReflectionMaxRayDistance_19_A0E3D15745EF03C12C73608BB897FCE5; // 0x60
	FString ReflectionMinRayDistance_20_6D12EE6E48A718B502DB929484EDBBD6; // 0x70
	FString ReflectionMaxBounces_21_81B8DA514D86E8694A43E79814041786; // 0x80
	FString RTEnableReflectionCapture_23_8F28E19F49F2BCB9FBAA08B7A899CAB2; // 0x90
	FString EnableReflectionTestRoughness_24_0883B4184EE12DA29A43128E2D24FB4F; // 0xa0
	FString ReflectionSkyLightContribution_38_63342FE64D2759F0A072E992588DDE8D; // 0xb0
	FString ReflectionsRoughnessMultiplier_28_2DEC260341D957BF835DF89E8D4C715D; // 0xc0
	FString HybridReflection_29_A64910B440FDB3B211D60DA855E15843; // 0xd0
	FString ReflectedTranslucencyMode_34_E9B43ED24B20AF57BCCD4B82D4074935; // 0xe0
	FString ReflectedTranslucencyMaxBounces_35_30526005497114ACA32D4CA9E09190A3; // 0xf0
	FString ReflectedTranslucencyTransmissionThreshold_37_BBC1DF1646E5DD7F79B8F5B29C5CDBB3; // 0x100
	FString ReflectionsEnableTwoSidedGeometry_41_C7FA80DB463DAB7DB041F09EC67DD112; // 0x110
	FString ReflectionSPP_44_FED6320D427E492AF4204489AD917995; // 0x120
};

struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	FBoneReference StartBone; // 0xc8
	FBoneReference EndBone; // 0xd8
	ESplineBoneAxis BoneAxis; // 0xe8
	bool bAutoCalculateSpline; // 0xe9
	int32_t PointCount; // 0xec
	TArray<FTransform> ControlPoints; // 0xf0
	float Roll; // 0x100
	float TwistStart; // 0x104
	float TwistEnd; // 0x108
	FAlphaBlend TwistBlend; // 0x110
	float Stretch; // 0x140
	float Offset; // 0x144
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FSoundSourceBusSendInfo {
	ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
	USoundSourceBus* SoundSourceBus; // 0x8
	UAudioBus* AudioBus; // 0x10
	float SendLevel; // 0x18
	float MinSendLevel; // 0x1c
	float MaxSendLevel; // 0x20
	float MinSendDistance; // 0x24
	float MaxSendDistance; // 0x28
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x30
};

struct FChatServerInfo {
	FString ServerAddress; // 0x0
	int32_t ServerPort; // 0x10
	FString ReportAddress; // 0x18
};

struct FGenericMultiItem {
	USGItem* ItemTemplate; // 0x0
	int32_t Amount; // 0x8
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FStaticMiniMapPOIData : FTableRowBase {
	FText Name; // 0x8
	FString Description; // 0x20
	EMapStaticPOIType StaticPOIType; // 0x30
	FString MapName; // 0x38
	FVector Location; // 0x48
	float OverlapDistance; // 0x54
	char bNeedUpdateSize : 1; // 0x58
	TSoftObjectPtr<UTexture2D> InMapNormalTexture; // 0x60
	TSoftObjectPtr<UTexture2D> InMapLockTexture; // 0x88
	char bShowOutOfMiniMap : 1; // 0xb0
	TSoftObjectPtr<UTexture2D> OutOfMapNormalTexture; // 0xb8
	TSoftObjectPtr<UTexture2D> OutOfMapLockTexture; // 0xe0
	float Exp; // 0x108
};

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FCharacterMovingSpeed {
	float Current_WalkingSpeed; // 0x0
	float Current_JogSpeed; // 0x4
	float Current_RunSpeed; // 0x8
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FBatchedPoint {
	FVector position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FAudioEQEffect : FAudioEffectParameters {
	float FrequencyCenter0; // 0x10
	float Gain0; // 0x14
	float Bandwidth0; // 0x18
	float FrequencyCenter1; // 0x1c
	float Gain1; // 0x20
	float Bandwidth1; // 0x24
	float FrequencyCenter2; // 0x28
	float Gain2; // 0x2c
	float Bandwidth2; // 0x30
	float FrequencyCenter3; // 0x34
	float Gain3; // 0x38
	float Bandwidth3; // 0x3c
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FCharacterMeshLODMaterialConfig {
	UMaterialInterface* MaterialConfigs[0x3]; // 0x0
};

struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData {
	FHitResult HitResult; // 0x8
	bool bHitReplaced; // 0x94
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FGuildSkillDrawItem {
	ESkillType SkillType; // 0x0
	int32_t RowNum; // 0x4
	int32_t ColNum; // 0x8
	TArray<ESkillType> RequireSkills; // 0x10
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bComputeWeightedNormals : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bBuildReversedIndexBuffer : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x1
	char bGenerateLightmapUVs : 1; // 0x1
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1
	char bSupportFaceRemap : 1; // 0x1
	int32_t MinLightmapResolution; // 0x4
	int32_t SrcLightmapIndex; // 0x8
	int32_t DstLightmapIndex; // 0xc
	float BuildScale; // 0x10
	FVector BuildScale3D; // 0x14
	float DistanceFieldResolutionScale; // 0x20
	UStaticMesh* DistanceFieldReplacementMesh; // 0x28
};

struct FAnimalFarmRecord {
	EAnimalFarmRecordType RecordType; // 0x0
	FDateTime RecordTime; // 0x8
	int32_t AnimalIndex; // 0x10
	ECharacterSex AnimalSex; // 0x14
	char bIsAnimalBaby : 1; // 0x15
	FString KillerName; // 0x18
	FString KillerGuildName; // 0x28
};

struct FMsgRecord_GuildDead : FMsgRecordBase {
	EAttackerType AttackerType; // 0x10
	FString AttackerOwnerName; // 0x18
	FString AttackerName; // 0x28
	bool IsAttackerInGuild; // 0x38
	FString AttackerOwnerGuildName; // 0x40
	FString DeadName; // 0x50
	FVector DeadLocation; // 0x60
	AActor* AttackerTemplate; // 0x70
	AActor* DeadTemplate; // 0x78
	EMsgRecord_DeadType DeadType; // 0x80
};

struct FWeatherInfo {
	EWeatherType WeatherType; // 0x0
	float MinTotalDurationTime; // 0x4
	float MaxTotalDurationTime; // 0x8
	float StartPhaseTransTime; // 0xc
	float EndPhaseTransTime; // 0x10
	float WildWindProbabiltiy; // 0x14
	char bEnableLightning : 1; // 0x18
	float LightningMinInterval; // 0x1c
	float LightningMaxInterval; // 0x20
	float HighFrequencyWeight; // 0x24
	float HighFrequencyInterval; // 0x28
	int32_t HighFrequencyMinTimes; // 0x2c
	int32_t HighFrequencyMaxTimes; // 0x30
	float MainLoopPrevToCurrentTransTime[0x10]; // 0x34
	float NextWeatherProbabilities[0x10]; // 0x74
	TArray<FFloatInterval> ForbiddenDayTimeRange; // 0xb8
	UWeatherMainLoopInterpData* MainLoopDataClass; // 0xc8
	UWeatherTransInterpData* StartAndEndTransDataClass; // 0xd0
};

struct FSkyLight_Parameters {
	FString GIEvalSkyLight_8_88EC9CBF40393B83BEDA22BB48A2B4CD; // 0x0
	FString EnableRTSkyLight_9_EEE1CC6A47D2E47508784A94A05AA80F; // 0x10
	FString EnableSkyLightDenoiser_10_640DC6C94DF5030E3BDF69AA07720EEF; // 0x20
	FString SkyLightEnableTwoSidedGeomtry_11_E5C3B38F423C10ECE9207C8B9031AEB7; // 0x30
	FString SkyLightMaxRayDistance_12_5399303843881FD92F8337BF45C730CF; // 0x40
	FString SkyLightSPP_13_2D3640B64C7D0103C812CB8533C87237; // 0x50
	FString SkyLightEnableMaterials_14_302F08D048720E799343BDB5D30E9479; // 0x60
	FString FinalGatherSkyLightIntensity_18_E1A9004942D802B91427469CF88EB838; // 0x70
	FString FinalGatherSkyLightIndirectMultiplier_19_C397D4FF42305F4582CEEF8263868ABF; // 0x80
	FString SkyLightScreenPercentage_23_59F3CFEA490786A67F0AB6B16115C3E4; // 0x90
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FNiagaraVMExecutableDataId {
	FGuid CompilerVersionID; // 0x0
	ENiagaraScriptUsage ScriptUsageType; // 0x10
	FGuid ScriptUsageTypeID; // 0x14
	char bUsesRapidIterationParams : 1; // 0x24
	char bInterpolatedSpawn : 1; // 0x24
	char bRequiresPersistentIDs : 1; // 0x24
	FGuid BaseScriptID; // 0x28
	FNiagaraCompileHash BaseScriptCompileHash; // 0x38
};

struct FPS5 {
	FAO_Parameters AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0
	FDebug_Parameters Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x50
	FGI_Parameters GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x168
	FLandscapeAndFoliage_Parameter LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x378
	FReflection_Parameters Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x458
	FShadow_Parameters Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x588
	FSkyLight_Parameters SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x6a8
	FSSGI_Parameters SSGI_Parameters_305_9CC406044A818EB967A668A89E2BCB07; // 0x748
	FTranslucency_Parameters Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x778
	FWater_Caustics_Parameters WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x8b8
	FMesh_Caustics_Parameters MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0xa68
	FDLSS_Parameters DLSSParameters_310_4A3CCCF54093EB9F67DCA6BAF9FDEA66; // 0xbc8
	FDistanceField_Parameters DistanceFields_313_0DF4CEA5433830429A0BCF80174CF466; // 0xc80
	FRTX_PostProcess_Settings RTXPostProcessSettings_316_78467B544CA2D05E4E2F1AA0BF710D08; // 0xcc0
	FDataType_Support DataTypeSupport_319_4D6E102D4F70C0E8215E079F8EF87059; // 0x1230
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FRideTameRequireItemConfig {
	USGItem* RequireItem; // 0x0
	float AddTamePerSecond; // 0x8
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FFightingEnemyServerData {
	TWeakObjectPtr<ABaseCharacter> Enemy; // 0x0
	float FightingTime; // 0x8
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x38
	TArray<int32_t> IndexData; // 0x48
	FBox ElemBox; // 0x58
	FTransform Transform; // 0x80
};

struct FNews_HorseHungry : FNewsBase {
	FString HorseName; // 0x18
	AActor* HorseTemplate; // 0x28
	FGuid ChunkId; // 0x30
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x0
	float DesiredVelocityWeight; // 0x4
	float CurrentVelocityWeight; // 0x8
	float SideBiasWeight; // 0xc
	float ImpactTimeWeight; // 0x10
	float ImpactTimeRange; // 0x14
	char CustomPatternIdx; // 0x18
	char AdaptiveDivisions; // 0x19
	char AdaptiveRings; // 0x1a
	char AdaptiveDepth; // 0x1b
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x0
	float GearSwitchTime; // 0x4
	float GearAutoBoxLatency; // 0x8
	float FinalRatio; // 0xc
	TArray<FVehicleGearData> ForwardGears; // 0x10
	float ReverseGearRatio; // 0x20
	float NeutralGearUpRatio; // 0x24
	float ClutchStrength; // 0x28
};

struct FSoundVariation {
	USoundWave* SoundWave; // 0x0
	float ProbabilityWeight; // 0x8
	FVector2D VolumeRange; // 0xc
	FVector2D PitchRange; // 0x14
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FAdminPlayerInfo {
	FString UniqueId; // 0x0
	FString NickName; // 0x10
	FString CharacterName; // 0x20
	char bOnline : 1; // 0x30
};

struct FDropWrapper : FTableRowBase {
	int32_t WrapperID; // 0x8
	int32_t Count; // 0xc
	float Rate; // 0x10
	int32_t DropID; // 0x14
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FMontageReplicationData {
	TWeakObjectPtr<AActor> BehaviorActor; // 0x0
	UAnimMontage* ReplicatedMontage; // 0x8
	float MontagePlayPosition; // 0x10
	float MontagePlayRate; // 0x14
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FRequiredAttributeCorrectionType {
	EAttributeCorrectionType AttributeCorrectionType; // 0x0
	float AttributeCorrectionCount; // 0x4
};

struct FCharacterMeshLODMaterialSlotName {
	FName MaterialSlotNames[0x3]; // 0x0
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FMsgRecord_Dead : FMsgRecordBase {
	EAttackerType AttackerType; // 0x10
	FString AttackerOwnerName; // 0x18
	FString AttackerName; // 0x28
	bool IsAttackerInGuild; // 0x38
	FString AttackerOwnerGuildName; // 0x40
	bool IsDeadSelf; // 0x50
	FString DeadName; // 0x58
	FVector DeadLocation; // 0x68
	AActor* AttackerTemplate; // 0x78
	AActor* DeadTemplate; // 0x80
	EMsgRecord_DeadType DeadType; // 0x88
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FSkeletalMeshComponentInstance {
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x0
	FName SocketToAttachTo; // 0x8
	FVector LocationOffset; // 0x10
	FRotator RotatorOffset; // 0x1c
	TMap<FName, FMaterialParamGroup> ApplyRootMaterialParams; // 0x28
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FGuildContainerRecord {
	char bSave : 1; // 0x0
	EGuildContainerType ContainerType; // 0x1
	EGuildContainerItemType ItemType; // 0x2
	int32_t Count; // 0x4
	FString PlayerName; // 0x8
	FString GuildName; // 0x18
	FText ItemName; // 0x28
	FDateTime RecordTime; // 0x40
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FMakeDamageOnceTypeInfo {
	char bIsDamageToHPPercent : 1; // 0x0
	float DamageValue; // 0x4
	char bCanDamageCharacter : 1; // 0x8
	char bCanDamageAnimal : 1; // 0x8
	char bCanDamageMoveSeat : 1; // 0x8
	char bCanDamageInActor : 1; // 0x8
	char bCanDamageNotInActor : 1; // 0x8
};

struct FNews_HasBattleEntry : FNewsBase {
	EBattleType BattleType; // 0x18
	int32_t BattleRound; // 0x1c
};

struct FSGUISetting : FTableRowBase {
	UUserWidget* WidgetTemplate; // 0x8
	FString Description; // 0x10
	int32_t SceneStackPriority; // 0x20
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FWaterBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FSoundSubmixSendInfo {
	ESendLevelControlMethod SendLevelControlMethod; // 0x0
	ESubmixSendStage SendStage; // 0x1
	USoundSubmixBase* SoundSubmix; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FDeathDropItemConfig {
	int32_t MinLevel; // 0x0
	int32_t MaxLevel; // 0x4
	TArray<FDeathDropItemData> DeathDropItemData; // 0x8
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FItemSpwanCharacter {
	int32_t MinLevel; // 0x0
	int32_t MaxLevel; // 0x4
	ASGCharacter* SpawnCharacterTemplate; // 0x8
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FNPCDeathDropItemTable : FTableRowBase {
	FString TypeName; // 0x8
	TArray<FDeathDropItemConfig> DeathDropItemConfig; // 0x18
};

struct FTableRowStyle : FSlateWidgetStyle {
	FSlateBrush SelectorFocusedBrush; // 0x8
	FSlateBrush ActiveHoveredBrush; // 0x90
	FSlateBrush ActiveBrush; // 0x118
	FSlateBrush InactiveHoveredBrush; // 0x1a0
	FSlateBrush InactiveBrush; // 0x228
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2b0
	FSlateBrush EvenRowBackgroundBrush; // 0x338
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x3c0
	FSlateBrush OddRowBackgroundBrush; // 0x448
	FSlateColor TextColor; // 0x4d0
	FSlateColor SelectedTextColor; // 0x4f8
	FSlateBrush DropIndicator_Above; // 0x520
	FSlateBrush DropIndicator_Onto; // 0x5a8
	FSlateBrush DropIndicator_Below; // 0x630
	FSlateBrush ActiveHighlightedBrush; // 0x6b8
	FSlateBrush InactiveHighlightedBrush; // 0x740
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FSystemTrainerInfo {
	int32_t SystemTainerSkillLevel; // 0x0
	float SystemTrainerCapital; // 0x4
	ECapitalType SystemTrainerCapitalType; // 0x8
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FGroomHairGroupPreview {
	int32_t GroupID; // 0x0
	int32_t CurveCount; // 0x4
	int32_t GuideCount; // 0x8
	FHairGroupsInterpolation InterpolationSettings; // 0xc
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FMsgClientSetDeviceIdResult : FMessageBase {
	ESetDevicePassWordResult SetDevicePassWordResult; // 0x8
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	char bAlphaBoolEnabled : 1; // 0x31
	char bResetChildOnActivation : 1; // 0x31
	float Alpha; // 0x34
	FInputScaleBias AlphaScaleBias; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
};

struct FCollisionLimitDataBase {
	FName DrivingBoneName; // 0x0
	FVector OffsetLocation; // 0x8
	FRotator OffsetRotation; // 0x14
	FVector Location; // 0x20
	FQuat Rotation; // 0x30
	FGuid Guid; // 0x40
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FGuildEventSpawnConfig {
	int32_t SpawnMinDistance; // 0x0
	int32_t SpawnMaxDistance; // 0x4
	float SpawnInterval; // 0x8
	float TotalDamage; // 0xc
	int32_t DemolishStructureNum; // 0x10
	TArray<FGuildEventSpawnData> SpawnDatas; // 0x18
};

struct FHairGroupInfoWithVisibility : FHairGroupInfo {
	bool bIsVisible; // 0x14
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FRepMovement {
	FVector LinearVelocity; // 0x0
	FVector AngularVelocity; // 0xc
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
	char bSimulatedPhysicSleep : 1; // 0x30
	char bRepPhysics : 1; // 0x30
	EVectorQuantization LocationQuantizationLevel; // 0x31
	EVectorQuantization VelocityQuantizationLevel; // 0x32
	ERotatorQuantization RotationQuantizationLevel; // 0x33
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FBodyData {
	float Height; // 0x0
	float BodyFat; // 0x4
	float strong; // 0x8
	float Dirt; // 0xc
	FVector2D SkinColor; // 0x10
};

struct FPlayerNameAndGUID {
	FString Name; // 0x0
	FGuid Guid; // 0x10
};

struct FGuildShopItemData : FTableRowBase {
	USGItem* Item; // 0x8
	int32_t Amount; // 0x10
	int32_t Price; // 0x14
	int32_t GuildLevel; // 0x18
	int32_t PlayerLevel; // 0x1c
	int32_t GuildShopSkillLevel; // 0x20
	EItemType ItemType; // 0x24
	EItemSubType ItemSubType; // 0x25
	EGuildShopItemType GuildShopItemType; // 0x26
	char bDailyRefresh : 1; // 0x27
	int32_t MaxGroupLimitNum; // 0x28
	int32_t LimitGuildShopLevel; // 0x2c
	int32_t ItemIndex; // 0x30
	int32_t LimitedActivityIndex; // 0x34
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0xc8
	float MaxDisplacement; // 0xd8
	float SpringStiffness; // 0xdc
	float SpringDamping; // 0xe0
	float ErrorResetThresh; // 0xe4
	char bLimitDisplacement : 1; // 0x124
	char bTranslateX : 1; // 0x124
	char bTranslateY : 1; // 0x124
	char bTranslateZ : 1; // 0x124
	char bRotateX : 1; // 0x124
	char bRotateY : 1; // 0x124
	char bRotateZ : 1; // 0x124
};

struct FDynamicsBandSettings {
	float CrossoverTopFrequency; // 0x0
	float AttackTimeMsec; // 0x4
	float ReleaseTimeMsec; // 0x8
	float ThresholdDb; // 0xc
	float Ratio; // 0x10
	float KneeBandwidthDb; // 0x14
	float InputGainDb; // 0x18
	float OutputGainDb; // 0x1c
};

struct FPropertyAccessIndirection {
	TFieldPath<FArrayProperty> ArrayProperty; // 0x0
	UFunction* Function; // 0x20
	int32_t ReturnBufferSize; // 0x28
	int32_t ReturnBufferAlignment; // 0x2c
	int32_t ArrayIndex; // 0x30
	uint32_t Offset; // 0x34
	EPropertyAccessObjectType ObjectType; // 0x38
	EPropertyAccessIndirectionType Type; // 0x39
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FScalabilitySettingsOption {
	FText Name; // 0x0
	int32_t Value; // 0x18
};

struct FOccupyFlagInfo {
	EBattleGroupType CurrentOccupingType; // 0x0
	EBattleGroupType ProgressGroupType; // 0x1
	EBattleGroupType LastOccupedType; // 0x2
	float LeftOccupyTime; // 0x4
	int32_t OccupyPlayerNum; // 0x8
	char bIsPaused : 1; // 0xc
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FPropertyAccessLibrary {
	TArray<FPropertyAccessSegment> PathSegments; // 0x0
	TArray<FPropertyAccessPath> SrcPaths; // 0x10
	TArray<FPropertyAccessPath> DestPaths; // 0x20
	FPropertyAccessCopyBatch CopyBatches[0x4]; // 0x30
	TArray<FPropertyAccessIndirectionChain> SrcAccesses; // 0x70
	TArray<FPropertyAccessIndirectionChain> DestAccesses; // 0x80
	TArray<FPropertyAccessIndirection> Indirections; // 0x90
	TArray<int32_t> EventAccessIndices; // 0xa0
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FQueuedDrawDebugItem {
	EDrawDebugItemType ItemType; // 0x0
	FVector StartLoc; // 0x4
	FVector EndLoc; // 0x10
	FVector Center; // 0x1c
	FRotator Rotation; // 0x28
	float Radius; // 0x34
	float Size; // 0x38
	int32_t Segments; // 0x3c
	FColor Color; // 0x40
	bool bPersistentLines; // 0x44
	float LifeTime; // 0x48
	float Thickness; // 0x4c
	FString Message; // 0x50
	FVector2D TextScale; // 0x60
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FItemRowBase : FTableRowBase {
	int32_t ItemId; // 0x8
	FString ItemName; // 0x10
	USGItem* ItemClass; // 0x20
	char AllowUse : 1; // 0x28
};

struct FWaterBrushEffects {
	FWaterBrushEffectBlurring Blurring; // 0x0
	FWaterBrushEffectCurlNoise CurlNoise; // 0x8
	FWaterBrushEffectDisplacement Displacement; // 0x18
	FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40
	FWaterBrushEffectTerracing Terracing; // 0x48
};

struct FBaseAnimalChunkData {
	int32_t ServerId; // 0x0
	int32_t TransportXianChengKey; // 0x4
	FGuid TransportMachineGuid; // 0x8
	char bSavedToPlayer : 1; // 0x18
	EGameServerPVPType TransportPVPType; // 0x19
	int64_t TransportTick; // 0x20
	FString Name; // 0x28
	int32_t RealNameIndex; // 0x38
	int32_t Level; // 0x3c
	float RandomLevel; // 0x40
	ECharacterSex Sex; // 0x44
	EChunkDataStateType ChunkDataStateType; // 0x45
	ETransportType TransportType; // 0x46
	EWarType WarType; // 0x47
	FGuid ChunkGuid; // 0x48
	char bIsReborning : 1; // 0x58
	float RebornDurationTime; // 0x5c
	FDateTime FinalRebornTime; // 0x60
	FDateTime DeathTime; // 0x68
	int32_t LifeCount; // 0x70
	char bIsDeadReborn : 1; // 0x74
	EAnimalQualityType QualityType; // 0x75
	float FinalQualityCorrection; // 0x78
	EAnimalAgeType AnimalAgeType; // 0x7c
	char bIsCastrated : 1; // 0x7d
	EVehicleType AnimalVehicleType; // 0x7e
	char bIsKilled : 1; // 0x7f
	TArray<char> ChunkBytes; // 0x80
	TWeakObjectPtr<ASG_AnimalsCharacter> AnimalWeakPtr; // 0x90
	TWeakObjectPtr<ASGStructure> RebornInStructure; // 0x98
	FDateTime LockTime; // 0xa0
	float CapsuleHalfHeight; // 0xa8
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FQuestList {
	TArray<int32_t> QuestList; // 0x0
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FModifyData {
	EModifyPropNameEnum PropEnum; // 0x0
	EModifyPropNameEnum1 PropEnum1; // 0x1
	float PropValue; // 0x4
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FGameplayEffectModifierMagnitude {
	EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0
	FScalableFloat ScalableFloatMagnitude; // 0x8
	FAttributeBasedFloat AttributeBasedMagnitude; // 0x28
	FCustomCalculationBasedFloat CustomMagnitude; // 0x120
	FSetByCallerFloat SetByCallerMagnitude; // 0x198
};

struct FBigMapXianChengInfo : FTableRowBase {
	FText XianChengName; // 0x8
	FVector2D XianChengPostion; // 0x20
};

struct FNiagaraFunctionSignature {
	FName Name; // 0x0
	TArray<FNiagaraVariable> Inputs; // 0x8
	TArray<FNiagaraVariable> Outputs; // 0x18
	FName OwnerName; // 0x28
	char bRequiresContext : 1; // 0x30
	char bRequiresExecPin : 1; // 0x30
	char bMemberFunction : 1; // 0x30
	char bExperimental : 1; // 0x30
	char bSupportsCPU : 1; // 0x30
	char bSupportsGPU : 1; // 0x30
	char bWriteFunction : 1; // 0x30
	char bSoftDeprecatedFunction : 1; // 0x30
	int32_t ModuleUsageBitmask; // 0x34
	int32_t ContextStageMinIndex; // 0x38
	int32_t ContextStageMaxIndex; // 0x3c
	TMap<FName, FName> FunctionSpecifiers; // 0x40
};

struct FAnimalAgeModifyPropConfig {
	float AnimalMinAge; // 0x0
	float AnimalMaxAge; // 0x4
	float MinPropMul; // 0x8
	float MaxPropMul; // 0xc
	float HungerConsumeMul; // 0x10
	int32_t LifeCount; // 0x14
};

struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	char bAttenuate : 1; // 0xb0
	char bSpatialize : 1; // 0xb0
	char bAttenuateWithLPF : 1; // 0xb0
	char bEnableListenerFocus : 1; // 0xb0
	char bEnableFocusInterpolation : 1; // 0xb0
	char bEnableOcclusion : 1; // 0xb0
	char bUseComplexCollisionForOcclusion : 1; // 0xb0
	char bEnableReverbSend : 1; // 0xb0
	char bEnablePriorityAttenuation : 1; // 0xb1
	char bApplyNormalizationToStereoSounds : 1; // 0xb1
	char bEnableLogFrequencyScaling : 1; // 0xb1
	char bEnableSubmixSends : 1; // 0xb1
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
	float BinauralRadius; // 0xb4
	EAirAbsorptionMethod AbsorptionMethod; // 0xb8
	ECollisionChannel OcclusionTraceChannel; // 0xb9
	EReverbSendMethod ReverbSendMethod; // 0xba
	EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xbb
	float OmniRadius; // 0xbc
	float StereoSpread; // 0xc0
	float LPFRadiusMin; // 0xc4
	float LPFRadiusMax; // 0xc8
	FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0
	FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158
	float LPFFrequencyAtMin; // 0x1e0
	float LPFFrequencyAtMax; // 0x1e4
	float HPFFrequencyAtMin; // 0x1e8
	float HPFFrequencyAtMax; // 0x1ec
	float FocusAzimuth; // 0x1f0
	float NonFocusAzimuth; // 0x1f4
	float FocusDistanceScale; // 0x1f8
	float NonFocusDistanceScale; // 0x1fc
	float FocusPriorityScale; // 0x200
	float NonFocusPriorityScale; // 0x204
	float FocusVolumeAttenuation; // 0x208
	float NonFocusVolumeAttenuation; // 0x20c
	float FocusAttackInterpSpeed; // 0x210
	float FocusReleaseInterpSpeed; // 0x214
	float OcclusionLowPassFilterFrequency; // 0x218
	float OcclusionVolumeAttenuation; // 0x21c
	float OcclusionInterpolationTime; // 0x220
	float ReverbWetLevelMin; // 0x224
	float ReverbWetLevelMax; // 0x228
	float ReverbDistanceMin; // 0x22c
	float ReverbDistanceMax; // 0x230
	float ManualReverbSendLevel; // 0x234
	FRuntimeFloatCurve CustomReverbSendCurve; // 0x238
	TArray<FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2c0
	float PriorityAttenuationMin; // 0x2d0
	float PriorityAttenuationMax; // 0x2d4
	float PriorityAttenuationDistanceMin; // 0x2d8
	float PriorityAttenuationDistanceMax; // 0x2dc
	float ManualPriorityAttenuation; // 0x2e0
	FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2e8
	FSoundAttenuationPluginSettings PluginSettings; // 0x370
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FTurnAnims {
	UAnimMontage* Turn_L90_Anim; // 0x0
	UAnimMontage* Turn_R90_Anim; // 0x8
	UAnimMontage* Turn_L180_Anim; // 0x10
	UAnimMontage* Turn_R180_Anim; // 0x18
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FCameraExposureSettings {
	EAutoExposureMethod Method; // 0x0
	float LowPercent; // 0x4
	float HighPercent; // 0x8
	float MinBrightness; // 0xc
	float MaxBrightness; // 0x10
	float SpeedUp; // 0x14
	float SpeedDown; // 0x18
	float Bias; // 0x1c
	UCurveFloat* BiasCurve; // 0x20
	UTexture* MeterMask; // 0x28
	float HistogramLogMin; // 0x30
	float HistogramLogMax; // 0x34
	float CalibrationConstant; // 0x38
	char ApplyPhysicalCameraExposure : 1; // 0x3c
};

struct FHighQualitySeedData {
	float Percentage; // 0x0
	float MinProduction; // 0x4
	float MaxProduction; // 0x8
	USGItem* HighQualitySeedItem; // 0x10
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x0
	int16_t Int16; // 0x2
	int32_t Int32; // 0x4
	int64_t Int64; // 0x8
	char UInt8; // 0x10
	uint16_t UInt16; // 0x12
	uint32_t UInt32; // 0x14
	uint64_t UInt64; // 0x18
	float Float; // 0x20
	double Double; // 0x28
};

struct FAbilityEndedData {
	UGameplayAbility* AbilityThatEnded; // 0x0
	FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x8
	bool bReplicateEndAbility; // 0xc
	bool bWasCancelled; // 0xd
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FGameplayCuePendingExecute {
	FPredictionKey PredictionKey; // 0x18
	EGameplayCuePayloadType PayloadType; // 0x28
	UAbilitySystemComponent* OwningComponent; // 0x30
	FGameplayEffectSpecForRPC FromSpec; // 0x38
	FGameplayCueParameters CueParameters; // 0xb0
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FGoodsSellerCfgPerLevel {
	int32_t GoodsTypeNum; // 0x0
	int32_t CapitalNum; // 0x4
	int32_t GoodsRefreshInterval; // 0x8
	int32_t SellerCapitalRefreshInterval; // 0xc
};

struct FItemNumMap {
	TMap<int32_t, int32_t> ItemIndexNumMap; // 0x0
};

struct FFishBaitData {
	AActor* FishActorClass; // 0x0
	UNiagaraSystem* FishNiagara; // 0x8
	FText FishName; // 0x10
	int32_t DropWrapperId; // 0x28
	int32_t Weight; // 0x2c
	float ResourceThreshold; // 0x30
	char IsKoiFish : 1; // 0x34
};

struct FHairDecimationSettings {
	float CurveDecimation; // 0x0
	float VertexDecimation; // 0x4
};

struct FMoustacheConfigDataMap {
	TMap<FName, FMoustacheConfigData> MoustacheConfigMap; // 0x0
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FMoustacheConfigData {
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x0
	USGItem* MoustacheItem; // 0x28
};

struct FCollisionLimitBase {
	FBoneReference DrivingBone; // 0x0
	FVector OffsetLocation; // 0x10
	FRotator OffsetRotation; // 0x1c
	FVector Location; // 0x28
	FQuat Rotation; // 0x40
};

struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData {
	FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10
	TArray<TWeakObjectPtr<AActor>> TargetActorArray; // 0x80
};

struct FQuestConfig : FTableRowBase {
	int32_t QuestID; // 0x8
	char AllowCompleteBeforeAccepet : 1; // 0xc
	char IsBranchQuest : 1; // 0xc
	char bNotCheckNum : 1; // 0xc
	EQuestType QuestType; // 0xd
	EQuestLoopType QuestLoopType; // 0xe
	TArray<FQuestTrigger> QuestTriggers; // 0x10
	TArray<FQuestObject> QuestObjects; // 0x20
	TArray<FQuestReward> QuestRewards; // 0x30
	TArray<FQuestRewardOverride> QuestRewardsOverride; // 0x40
	char bAutoAddTrace : 1; // 0x50
	EQuestVersionLimitType VersionLimitType; // 0x51
};

struct FRBFParams {
	int32_t TargetDimensions; // 0x0
	ERBFSolverType SolverType; // 0x4
	float Radius; // 0x8
	bool bAutomaticRadius; // 0xc
	ERBFFunctionType Function; // 0xd
	ERBFDistanceMethod DistanceMethod; // 0xe
	EBoneAxis TwistAxis; // 0xf
	float WeightThreshold; // 0x10
	ERBFNormalizeMethod NormalizeMethod; // 0x14
	FVector MedianReference; // 0x18
	float MedianMin; // 0x24
	float MedianMax; // 0x28
};

struct FAnimLinkableElement {
	UAnimMontage* LinkedMontage; // 0x8
	int32_t SlotIndex; // 0x10
	int32_t SegmentIndex; // 0x14
	EAnimLinkMethod LinkMethod; // 0x18
	EAnimLinkMethod CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	UAnimSequenceBase* LinkedSequence; // 0x28
};

struct FRepRootMotionMontage {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	float position; // 0x10
	FVector_NetQuantize100 Location; // 0x14
	FRotator Rotation; // 0x20
	UPrimitiveComponent* MovementBase; // 0x30
	FName MovementBaseBoneName; // 0x38
	bool bRelativePosition; // 0x40
	bool bRelativeRotation; // 0x41
	FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48
	FVector_NetQuantize10 Acceleration; // 0x80
	FVector_NetQuantize10 LinearVelocity; // 0x8c
};

struct FChinData {
	float ChinDepth; // 0x0
	float ChinHeight; // 0x4
	float ChinWidth; // 0x8
	float JawComerHeight; // 0xc
	float JawHeight; // 0x10
	float JawScale; // 0x14
	float JawDepth; // 0x18
	float JawOuterWidth; // 0x1c
	float JawSideHeight; // 0x20
	float JawWidth; // 0x24
};

struct FTrainRewardConfig {
	float AddExpRandomWeight; // 0x0
	float AddExpMin; // 0x4
	float AddExpMax; // 0x8
	int32_t AddExpMaxCount; // 0xc
	float AddCapitalRandomWeight; // 0x10
	int32_t AddCopperCapitalMin; // 0x14
	int32_t AddCopperCapitalMax; // 0x18
	int32_t AddCapitalMaxCount; // 0x1c
	float AddRewardRandomWeight; // 0x20
	int32_t AddRewardMaxCount; // 0x24
	float AddPerkRandomWeight; // 0x28
	int32_t AddPerkMaxCount; // 0x2c
	int32_t PerkToExp; // 0x30
	TMap<ESkillType, float> TrainerAddSkillExp; // 0x38
};

struct FTransportChunkInfo {
	ETransportType TransportType; // 0x0
	char bSaveChunkToStoreAndLeaveScene : 1; // 0x1
	UChunkDataObject* ChunkDataObject; // 0x8
};

struct FHuangLiUnlockData {
	TArray<FHuangLiEffectUnlock> XingShenUnlockArray; // 0x0
	TArray<FHuangLiEffectUnlock> JianChuUnlockArray; // 0x10
	TArray<FHuangLiEffectUnlock> XingXiuUnlockArray; // 0x20
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FRelatedFoliageTypeEntry {
	UStaticMesh* FoliageMesh; // 0x0
	float Radius; // 0x8
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FJueWeiCondition {
	EJueWeiConditionType ConditionType; // 0x0
	int32_t ConditionValue; // 0x4
};

struct FGameplayCueTranslatorNodeIndex {
	int32_t Index; // 0x0
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FCharacterAppearance : FTableRowBase {
	USkeletalMesh* HQ_Human_Mesh[0x2]; // 0x8
	USkeletalMesh* Human_Mesh[0x2]; // 0x18
	USGItem* HQ_Bra[0x2]; // 0x28
	USGItem* Bra[0x2]; // 0x38
	USGItem* HQ_Underwaist[0x2]; // 0x48
	USGItem* Underwaist[0x2]; // 0x58
	FCharacterMeshData HQ_Human_Male_MesheDatas[0x4]; // 0x68
	FCharacterMeshData HQ_Human_Female_MesheDatas[0x4]; // 0x1c8
	FCharacterMeshData Human_Male_MesheDatas[0x4]; // 0x328
	FCharacterMeshData Human_Female_MesheDatas[0x4]; // 0x488
	FCharacterMeshLODMaterialSlotName MeshMaterialSlotConfig[0x3]; // 0x5e8
	FVector2D HeightRange; // 0x630
	FVector2D DirtRange; // 0x638
	float SkinColorHue; // 0x640
	FVector2D SkinColorStaturationRange; // 0x644
	FVector2D SkinColorValueRange; // 0x64c
	FHairConfigDataMap MaleHairConfigs[0x4]; // 0x658
	FHairConfigDataMap FemaleHairConfigs[0x4]; // 0x798
	TMap<FLinearColor, FLinearColor> HairColorConfigs; // 0x8d8
	FMoustacheConfigDataMap MaleMoustacheConfigs[0x4]; // 0x928
	FMoustacheConfigDataMap FemaleMoustacheConfigs[0x4]; // 0xa68
	TMap<FLinearColor, FLinearColor> MoustacheColorConfigs; // 0xba8
	FFeatureConfigData MaleFeatureConfigs[0x4]; // 0xbf8
	FFeatureConfigData FemaleFeatureConfigs[0x4]; // 0xc98
	FTattooStandardConfig TattooStandardConfigs[0x5]; // 0xd38
	FTattooConfigDataMap MaleTattooConfigs[0x5]; // 0xdd8
	FTattooConfigDataMap FemaleTattooConfigs[0x5]; // 0xf68
	FVector2D VoicePitchSemiTonesRange; // 0x10f8
	TMap<FName, FMorphTargetSliderDataMap> MorphTargetSliderDatas; // 0x1100
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	float SnapRadius; // 0xc
	float SnapHeight; // 0x10
	FNavAgentSelector SupportedAgents; // 0x14
	char bSupportsAgent0 : 1; // 0x18
	char bSupportsAgent1 : 1; // 0x18
	char bSupportsAgent2 : 1; // 0x18
	char bSupportsAgent3 : 1; // 0x18
	char bSupportsAgent4 : 1; // 0x18
	char bSupportsAgent5 : 1; // 0x18
	char bSupportsAgent6 : 1; // 0x18
	char bSupportsAgent7 : 1; // 0x18
	char bSupportsAgent8 : 1; // 0x19
	char bSupportsAgent9 : 1; // 0x19
	char bSupportsAgent10 : 1; // 0x19
	char bSupportsAgent11 : 1; // 0x19
	char bSupportsAgent12 : 1; // 0x19
	char bSupportsAgent13 : 1; // 0x19
	char bSupportsAgent14 : 1; // 0x19
	char bSupportsAgent15 : 1; // 0x19
	ENavLinkDirection Direction; // 0x1c
	char bUseSnapHeight : 1; // 0x1d
	char bSnapToCheapestArea : 1; // 0x1d
	char bCustomFlag0 : 1; // 0x1d
	char bCustomFlag1 : 1; // 0x1d
	char bCustomFlag2 : 1; // 0x1d
	char bCustomFlag3 : 1; // 0x1d
	char bCustomFlag4 : 1; // 0x1d
	char bCustomFlag5 : 1; // 0x1d
	char bCustomFlag6 : 1; // 0x1e
	char bCustomFlag7 : 1; // 0x1e
	UNavAreaBase* AreaClass; // 0x20
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FGuanAiActivityUIJunInfo : FTableRowBase {
	FVector2D JunPosition; // 0x8
	float JunMapScale; // 0x10
	TArray<FGuanAiActivityUIGuanAiInfo> GuanAiInfos; // 0x18
};

struct FItemExpireTimeData {
	USGItem* Item; // 0x0
	float ExpireTimeMultiplier; // 0x8
};

struct FMeshComponentArray {
	TArray<UMeshComponent*> MeshComponents; // 0x0
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x800
	FSlateBrush UpArrowImage; // 0x858
	FSlateBrush DownArrowImage; // 0x8e0
	FSlateBrush GlassImage; // 0x968
	FSlateBrush ClearImage; // 0x9f0
	FMargin ImagePadding; // 0xa78
	bool bLeftAlignButtons; // 0xa88
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	TArray<UMaterialInterface*> OverrideMaterials; // 0x8
	FPerPlatformFloat GrassDensity; // 0x18
	bool bUseGrid; // 0x1c
	float PlacementJitter; // 0x20
	FPerPlatformInt StartCullDistance; // 0x24
	FPerPlatformInt EndCullDistance; // 0x28
	int32_t MinLOD; // 0x2c
	EGrassScaling Scaling; // 0x30
	FFloatInterval ScaleX; // 0x34
	FFloatInterval ScaleY; // 0x3c
	FFloatInterval ScaleZ; // 0x44
	bool RandomRotation; // 0x4c
	bool AlignToSurface; // 0x4d
	bool bUseLandscapeLightmap; // 0x4e
	FLightingChannels LightingChannels; // 0x4f
	bool bReceivesDecals; // 0x50
	bool bCastDynamicShadow; // 0x51
	bool bKeepInstanceBufferCPUCopy; // 0x52
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FHorizonDialogueHypertextResult {
	UHorizonDialogueMsgTextBlock* DialogueMsgTextBlock; // 0x0
	int32_t SegmentIndex; // 0x8
	int32_t LineIndex; // 0xc
	int32_t BlockIndex; // 0x10
	FString HypertextReference; // 0x18
	TMap<FString, FString> UrlEncodeMap; // 0x28
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FMovieSceneGeometryCacheParams {
	UGeometryCache* GeometryCacheAsset; // 0x0
	FFrameNumber FirstLoopStartFrameOffset; // 0x8
	FFrameNumber StartFrameOffset; // 0xc
	FFrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	char bReverse : 1; // 0x18
	float StartOffset; // 0x1c
	float EndOffset; // 0x20
	FSoftObjectPath GeometryCache; // 0x28
};

struct FWoundBuffConditionType {
	float WoundThreshold; // 0x0
	USGBuff* BuffClass; // 0x8
};

struct FSGHorsePerkNetInfo {
	TArray<int32_t> ForbidPlacePerkIndexes; // 0x0
	TArray<int32_t> AllowPlacePerkIndexes; // 0x10
	TArray<int32_t> SpecialPerkIndexes; // 0x20
	int32_t EquippedRealNameDataIndex; // 0x30
	TArray<int32_t> RecessivePerkIndexes; // 0x38
};

struct FGuanAiStateInfo {
	int64_t LastOpenTimeTicks; // 0x0
	int64_t NextSignUpBeginDateTicks; // 0x8
	int64_t NextSignUpEndDateTicks; // 0x10
	bool IsEnable; // 0x18
	FGuid OwnerGuildId; // 0x1c
	FGuid AttackGuildId; // 0x2c
	bool IsProtect; // 0x3c
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float RetriggerTime; // 0xc
	float VolumeScale; // 0x10
	EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x14
	float VolumeScaleAttackTime; // 0x18
	char bVolumeScaleCanRelease : 1; // 0x1c
	float VolumeScaleReleaseTime; // 0x20
	float VoiceStealReleaseTime; // 0x24
};

struct FLightningSparkData {
	FVector SparkPos; // 0x0
	FVector SparkDir; // 0xc
	float SparkVelocity; // 0x18
	int32_t SparkTargetPosIdx; // 0x1c
};

struct FHorizonDialogueDialoguePageResult {
	int32_t PageIndex; // 0x0
};

struct FJoinGuildCondition {
	int32_t MinLevel; // 0x0
	char SexLimit; // 0x4
};

struct FTrapOverlapInfo {
	TWeakObjectPtr<AActor> OverlapedActor; // 0x0
	FVector HitLocation; // 0x8
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FBakedDataInfo {
	FName Name; // 0x0
	int32_t Size; // 0x8
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FInjuredData {
	char bIsInjured : 1; // 0x0
	UAnimMontage* InjuredMontage; // 0x8
	UAnimSequence* InjuredAnimPose; // 0x10
	UBlendSpace1D* InjuredMovingAnim; // 0x18
	TMap<EInputDirection, float> TMap_InjuredSpeed; // 0x20
};

struct FSlateMeshVertex {
	FVector2D position; // 0x0
	FColor Color; // 0x8
	FVector2D UV0; // 0xc
	FVector2D UV1; // 0x14
	FVector2D UV2; // 0x1c
	FVector2D UV3; // 0x24
	FVector2D UV4; // 0x2c
	FVector2D UV5; // 0x34
};

struct FGuildAwardItem {
	USGItem* ItemClass; // 0x0
	int32_t Amount; // 0x8
};

struct FMsgServerGetOccupyDetailInfo : FMessageBase {
	TArray<FRequestOccupyDetailInfo> Requests; // 0x8
};

struct FMagicLeapTouchpadGesture {
	EControllerHand Hand; // 0x0
	FName MotionSource; // 0x4
	EMagicLeapTouchpadGestureType Type; // 0xc
	EMagicLeapTouchpadGestureDirection Direction; // 0xd
	FVector PositionAndForce; // 0x10
	float Speed; // 0x1c
	float Distance; // 0x20
	float FingerGap; // 0x24
	float Radius; // 0x28
	float Angle; // 0x2c
};

struct FStructureBannerLocData {
	char bSameGuild : 1; // 0x0
	FVector StructureLoc; // 0x4
};

struct FMsgRecord_CarriedUp : FMsgRecordBase {
	FString PlayerName; // 0x10
	FVector Location; // 0x20
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FOccupyModifyConflict : FTableRowBase {
	float OccupyCapital; // 0x8
	ECapitalType OccupyCapitalType; // 0xc
	float OccupyModifyConflict; // 0x10
};

struct FTaiShouKillTitle : FTableRowBase {
	int32_t KillNum; // 0x8
	int32_t AddMorale; // 0xc
	FSlateBrush TitleBrush; // 0x10
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FCPGFilterInfo {
	UTexture2D* ButtonNormal; // 0x0
	UTexture2D* ButtonHover; // 0x8
	UTexture2D* ButtonActive; // 0x10
	FText Text; // 0x18
	FVector2D OptionButtonSize; // 0x30
	char bShow : 1; // 0x38
	FText TipsText; // 0x40
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0x8
	float Scalar; // 0xc
	float Scalar_Low; // 0x10
	FVector Vector; // 0x14
	FVector Vector_Low; // 0x20
	FColor Color; // 0x2c
	AActor* Actor; // 0x30
	UMaterialInterface* Material; // 0x38
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FLadderComplexParams {
	FLadderParams LeftMoveParams; // 0x0
	FLadderParams RightMoveParams; // 0x180
	TArray<FLadderParams> StepUpParams; // 0x300
	TArray<FLadderParams> StepDownParams; // 0x310
	TArray<FLadderParams> ExitUpParams; // 0x320
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FNInventoryUpdateInfo {
	EUIInventoryType UIInventoryType; // 0x0
	USGInventoryComponent* forInventory; // 0x8
	int32_t SlotIndex; // 0x10
	USGItem* forItem; // 0x18
};

struct FRadarChartColorOverwrite {
	ERadarChartColorOverwrite Method; // 0x0
	FLinearColor Color; // 0x4
};

struct FMountConfig {
	char bShowMountTrace : 1; // 0x0
	FName MountSocket; // 0x4
	float MountMinDistance; // 0xc
	ETraceTypeQuery TraceChannel; // 0x10
	EVehicleType Enum_VehicleType; // 0x11
	EInputDirection Enum_MountVehicleDirection; // 0x12
	TMap<EInputDirection, FTransform> TMap_MountTransforms; // 0x18
	TMap<EInputDirection, FTransform> TMap_DismountTransforms; // 0x68
	FVector RiderCameraOffset; // 0xb8
	FVector PlatformRiderOffset; // 0xc4
};

struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x0
	float FrameStartCPUFrameEndGPUTimeMs; // 0x4
	float FrameStartCPUFrameStartCPUTimeMs; // 0x8
	float FrameDurationCPUTimeMs; // 0xc
	float FrameDurationGPUTimeMs; // 0x10
	float FrameInternalDurationCPUTimeMs; // 0x14
	float FrameInternalDurationGPUTimeMs; // 0x18
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FConditionRewardData : FTableRowBase {
	USGConditionReward* ConditionReward; // 0x8
};

struct FMsgRecord_GuildWillDead : FMsgRecordBase {
	EAttackerType AttackerType; // 0x10
	FString AttackerOwnerName; // 0x18
	FString AttackerName; // 0x28
	bool IsAttackerInGuild; // 0x38
	FString AttackerOwnerGuildName; // 0x40
	FString WillDeadName; // 0x50
	FVector WillDeadLocation; // 0x60
	AActor* AttackerTemplate; // 0x70
	AActor* WillDeadTemplate; // 0x78
	EMsgRecord_DeadType DeadType; // 0x80
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x18
	FText Text; // 0x28
	FVector Vector; // 0x40
	FVector4 Vector4; // 0x50
	FRotator Rotator; // 0x60
	FQuat Quat; // 0x70
	FColor Color; // 0x80
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FMinimalReplicationTagCountMap {
	UAbilitySystemComponent* Owner; // 0x50
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FAnimalVehicleNetInfo {
	float SlashingArmorMulAdd; // 0x0
	float PiercingArmorMulAdd; // 0x4
	float CrushingArmorMulAdd; // 0x8
	float SiegeArmorMulAdd; // 0xc
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FTrainRewardData {
	float AddExp; // 0x0
	int32_t AddExpCount; // 0x4
	int32_t AddCopperCapital; // 0x8
	int32_t AddCapitalCount; // 0xc
	int32_t AddRewardCount; // 0x10
	TArray<FTrainPerkRewardData> PerkRewardDatas; // 0x18
	TMap<ESkillType, float> AddSkillExp; // 0x28
};

struct FObjectForQuests {
	UObject* QuestObjectClass; // 0x0
	int32_t QuestObjectInt; // 0x8
	TArray<int32_t> QuestIDs; // 0x10
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FRevengeInfo {
	FGuid EnemyId; // 0x0
	int64_t TimeMs; // 0x10
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x90
	FSlateBrush ActiveFillBrush; // 0x118
	FSlateBrush InactiveFillBrush; // 0x1a0
	FSlateBrush ArrowsImage; // 0x228
	FSlateColor ForegroundColor; // 0x2b0
	FMargin TextPadding; // 0x2d8
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FHuangLiUnlockInfo {
	EHuangLiUnlockType UnlockType; // 0x0
	char IsUnlock : 1; // 0x1
	EHuangLiCheckType CkeckType; // 0x2
	float CurrnetValue; // 0x4
	float UnlockValue; // 0x8
	int32_t LastEffectDay; // 0xc
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FGameplayEffectRemovalInfo {
	bool bPrematureRemoval; // 0x0
	int32_t StackCount; // 0x4
	FGameplayEffectContextHandle EffectContext; // 0x8
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FHairShadowSettings {
	float HairShadowDensity; // 0x0
	float HairRaytracingRadiusScale; // 0x4
	bool bUseHairRaytracingGeometry; // 0x8
	bool bVoxelize; // 0x9
};

struct FMsgRecord_GuildKill : FMsgRecordBase {
	FString AttackerOwnerName; // 0x10
	FString AttackerName; // 0x20
	AActor* AttackerTemplate; // 0x30
	EMsgRecord_DeadType DeadType; // 0x38
	bool IsDeadInGuild; // 0x39
	FString DeadOwnerGuildName; // 0x40
	FString DeadOwnerName; // 0x50
	FString DeadName; // 0x60
	AActor* DeadTemplate; // 0x70
};

struct FNewsNotifyData {
	FGuid ID; // 0x0
	FString Content; // 0x10
};

struct FTattooConfigData {
	TSoftObjectPtr<UTexture2D> icon; // 0x0
	UTexture2D* DiffuseTexture; // 0x28
	UTexture2D* NormalTexture; // 0x30
	char bIsScar : 1; // 0x38
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FActorAttachParams {
	AActor* Actor; // 0x0
	FName ComponentName; // 0x8
	FName SocketName; // 0x10
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FGameplayCueParameters {
	float NormalizedMagnitude; // 0x0
	float RawMagnitude; // 0x4
	FGameplayEffectContextHandle EffectContext; // 0x8
	FGameplayTag MatchedTagName; // 0x20
	FGameplayTag OriginalTag; // 0x28
	FGameplayTagContainer AggregatedSourceTags; // 0x30
	FGameplayTagContainer AggregatedTargetTags; // 0x50
	FVector_NetQuantize10 Location; // 0x70
	FVector_NetQuantizeNormal Normal; // 0x7c
	TWeakObjectPtr<AActor> Instigator; // 0x88
	TWeakObjectPtr<AActor> EffectCauser; // 0x90
	TWeakObjectPtr<UObject> SourceObject; // 0x98
	TWeakObjectPtr<UPhysicalMaterial> PhysicalMaterial; // 0xa0
	int32_t GameplayEffectLevel; // 0xa8
	int32_t AbilityLevel; // 0xac
	TWeakObjectPtr<USceneComponent> TargetAttachComponent; // 0xb0
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FPlayerStartLocalizationRowBase : FTableRowBase {
	FString PlayerStartTag; // 0x8
	FText PlayerStartName; // 0x18
};

struct FLandmassBrushEffectsList {
	FBrushEffectBlurring Blurring; // 0x0
	FBrushEffectCurlNoise CurlNoise; // 0x8
	FBrushEffectDisplacement Displacement; // 0x18
	FBrushEffectSmoothBlending SmoothBlending; // 0x40
	FBrushEffectTerracing Terracing; // 0x48
};

struct FNiagaraSystemCompiledData {
	FNiagaraParameterStore InstanceParamStore; // 0x0
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x78
	FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xb8
	FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0xf8
	FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x138
	FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x158
	FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x178
	TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x198
	FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1a8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1c8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1e8
	TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x208
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FLadderTraceSettings {
	FName CollisionProfileName; // 0x0
	FHitResult LadderHitResult; // 0x8
	TArray<AActor*> ActorsToIgnore; // 0x98
};

struct FQuestObjectText {
	FText ObjectName; // 0x0
	FText ObjectDesc; // 0x18
	TSoftObjectPtr<UTexture2D> ObjectIcon; // 0x30
};

struct FMoveBoxTrace {
	FName SocketName; // 0x0
	FVector BoxSize; // 0x8
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FLinkChunkWithTrainerInfo {
	FGuid ChunkUid; // 0x0
	char bHadTrainer : 1; // 0x10
	FGuid ChunkTrainerUid; // 0x14
	char bIsSystemTrainer : 1; // 0x24
	ESystemTrainerType SystemTrainerType; // 0x25
	int32_t TrainerSkillLevel; // 0x28
	float FinishWorkTime; // 0x2c
	float ReplicatedFinishWorkRemainingTime; // 0x30
	float FinishWorkRemainingTime; // 0x34
	char bIsTrain : 1; // 0x38
	float TrainRewardInterval; // 0x3c
	float TrainRewardRemainingTime; // 0x40
	FTrainRewardData TrainRewardData; // 0x48
	ASG_AnimalsCharacter* ChunkTemplate; // 0xc0
	FStableLinkAnimalNetData LinkAnimalNetData; // 0xc8
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FBasePlayerDataStatisticInfo {
	int64_t CurrentLoginTime; // 0x0
	int64_t TotalOnlineTimeSecond; // 0x8
	TArray<FRevengeInfo> RevengeList; // 0x10
	char bIsOnline; // 0x20
};

struct FGameplayTagRequirements {
	FGameplayTagContainer RequireTags; // 0x0
	FGameplayTagContainer IgnoreTags; // 0x20
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FNiagaraSystemScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bCullByDistance : 1; // 0x30
	char bCullMaxInstanceCount : 1; // 0x30
	char bCullPerSystemMaxInstanceCount : 1; // 0x30
	char bCullByMaxTimeWithoutRender : 1; // 0x30
	float MaxDistance; // 0x34
	int32_t MaxInstances; // 0x38
	int32_t MaxSystemInstances; // 0x3c
	float MaxTimeWithoutRender; // 0x40
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FLandscapeLayer {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	bool bVisible; // 0x18
	bool bLocked; // 0x19
	float HeightmapAlpha; // 0x1c
	float WeightmapAlpha; // 0x20
	ELandscapeBlendMode BlendMode; // 0x24
	TArray<FLandscapeLayerBrush> Brushes; // 0x28
	TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FPhysicalAnimationData {
	FName BodyName; // 0x0
	char bIsLocalSimulation : 1; // 0x8
	float OrientationStrength; // 0xc
	float AngularVelocityStrength; // 0x10
	float PositionStrength; // 0x14
	float VelocityStrength; // 0x18
	float MaxLinearForce; // 0x1c
	float MaxAngularForce; // 0x20
};

struct FGlobalMapLevelVisibilityConfigArray {
	TArray<FGlobalMapLevelVisibilityConfig> LevelVisibilityConfigs; // 0x0
};

struct FLegendGeneralItemRow : FTableRowBase {
	int32_t ItemId; // 0x8
	FString ItemName; // 0x10
	USGLegendGeneral* ItemData; // 0x20
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FOfficialJobInfo {
	FText Name; // 0x0
	char bNeedGuildOwner : 1; // 0x18
	int32_t JueWeiLevel; // 0x1c
	EOfficialJobConditionType ConditionType; // 0x20
	USGBuff* Buff; // 0x28
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FCapitalResourceRequirement {
	int32_t BaseResourceRequirement; // 0x0
	ECapitalType CapitalType; // 0x4
	int32_t CapitalTypeImageIndex; // 0x8
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FCharacterLimitSkillLevel : FTableRowBase {
	TArray<int32_t> LimitLevels; // 0x8
};

struct FEnvOverlapData {
	float ExtentX; // 0x0
	float ExtentY; // 0x4
	float ExtentZ; // 0x8
	FVector ShapeOffset; // 0xc
	ECollisionChannel OverlapChannel; // 0x18
	EEnvOverlapShape OverlapShape; // 0x19
	char bOnlyBlockingHits : 1; // 0x1c
	char bOverlapComplex : 1; // 0x1c
	char bSkipOverlapQuerier : 1; // 0x1c
};

struct FGuildLanguageData : FTableRowBase {
	char LanguageIndex; // 0x8
	FText LanguageText; // 0x10
};

struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; // 0x10
	bool bIsAspectRatioSupported; // 0x11
	bool bIsFocalLengthSupported; // 0x12
	bool bIsProjectionModeSupported; // 0x13
	float FilmBackWidth; // 0x14
	float FilmBackHeight; // 0x18
	bool bIsApertureSupported; // 0x1c
	bool bIsFocusDistanceSupported; // 0x1d
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FBoneLocalTransform {
	TArray<FTransform> LocalTransformArray; // 0x0
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FTaishouBattleOpenTimeInfo {
	int32_t OpenDayOfWeek; // 0x0
	int32_t OpenHour; // 0x4
	int32_t OpenCoolDays; // 0x8
	int32_t SignUpTime; // 0xc
	int32_t PlayTime; // 0x10
	int32_t PrepareCrossItemTime; // 0x14
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FInputAxisKeyMappingConfig {
	EKeyMappingButtonType ButtonType; // 0x0
	FInputAxisKeyMapping AxisKeyMapping; // 0x8
};

struct FBoneFloatingData {
	float CurrentForce; // 0x0
	float FloatingForce; // 0x4
	FVector2D ClampedRange; // 0x8
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FMsgClientCreateRoleResult : FMessageBase {
	int32_t Result; // 0x8
	FString AccountID; // 0x10
	FString RoleID; // 0x20
	FString RoleName; // 0x30
	int32_t CreateServerId; // 0x40
};

struct FGameplayCueTag {
	FGameplayTag GameplayCueTag; // 0x0
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FMsgServerCreateRole : FMessageBase {
	FCreateInfo CreateInfo; // 0x8
};

struct FSceneEffectSpawnerWrapper {
	USceneEffectSpawner* SpawnerObject; // 0x0
};

struct FCustomSoundSetting : FTableRowBase {
	FString Description; // 0x8
	USoundBase* Sound; // 0x18
	float VolumeMultiplier; // 0x20
	float PitchMultiplier; // 0x24
	float StartTime; // 0x28
	float FadeInDuration; // 0x2c
	float FadeInVolumeLevel; // 0x30
	float FadeOutDuration; // 0x34
	float FadeOutVolumeLevel; // 0x38
	EAudioFaderCurve FadeCurve; // 0x3c
	USoundAttenuation* AttenuationSettings; // 0x40
	bool bAutoDestroy; // 0x48
	TSet<USoundConcurrency*> ConcurrencySettings; // 0x50
	bool bPersistAcrossLevelTransition; // 0xa0
};

struct FSpriteGeometryCollection {
	TArray<FSpriteGeometryShape> Shapes; // 0x0
	ESpritePolygonMode GeometryType; // 0x10
	int32_t PixelsPerSubdivisionX; // 0x14
	int32_t PixelsPerSubdivisionY; // 0x18
	bool bAvoidVertexMerging; // 0x1c
	float AlphaThreshold; // 0x20
	float DetailAmount; // 0x24
	float SimplifyEpsilon; // 0x28
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FEquipAnims {
	UAnimMontage* Stand_Rlx_EquipAnimMontage; // 0x0
	UAnimMontage* Stand_Rlx_HolsterAnimMontage; // 0x8
	TMap<EEquipWeaponSlot, UAnimMontage*> WeaponEquipHolsterSlotAnim; // 0x10
	UAnimMontage* Crouch_Rlx_EquipAnimMontage; // 0x60
	UAnimMontage* Crouch_Rlx_HolsterAnimMontage; // 0x68
	TMap<EEquipWeaponSlot, UAnimMontage*> WeaponUnEquipHolsterSlotAnim; // 0x70
};

struct FSoundEffectSourcePresetChainIDArray {
	TArray<int32_t> IDArray; // 0x0
};

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EBlendListTransitionType TransitionType; // 0x30
	EAlphaBlendOption BlendType; // 0x31
	bool bResetChildOnActivation; // 0x32
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FInputScaleBiasClamp {
	bool bMapRange; // 0x0
	bool bClampResult; // 0x1
	bool bInterpResult; // 0x2
	FInputRange InRange; // 0x4
	FInputRange OutRange; // 0xc
	float Scale; // 0x14
	float Bias; // 0x18
	float ClampMin; // 0x1c
	float ClampMax; // 0x20
	float InterpSpeedIncreasing; // 0x24
	float InterpSpeedDecreasing; // 0x28
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	FFrameNumber FirstLoopStartFrameOffset; // 0x8
	FFrameNumber StartFrameOffset; // 0xc
	FFrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	char bReverse : 1; // 0x18
	FName SlotName; // 0x1c
	FMovieSceneFloatChannel Weight; // 0x28
	bool bSkipAnimNotifiers; // 0xc8
	bool bForceCustomMode; // 0xc9
	float StartOffset; // 0xcc
	float EndOffset; // 0xd0
};

struct FFormationSpawnData {
	FName FormationName; // 0x0
	TArray<FVector> FormationVectors; // 0x8
	FString DisplayString; // 0x18
	FColor DisplayColor; // 0x28
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	FGuid SessionId; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FServerInfoData {
	FString SessionName; // 0x0
	int32_t ServerId; // 0x10
	FString MapName; // 0x18
	int32_t CityGroupId; // 0x28
	int32_t CityId; // 0x2c
	int32_t XianChengId; // 0x30
	EGameServerType ServerType; // 0x34
	int32_t GameServerPVPType; // 0x38
	EGameServerOwner GameServerOwnerType; // 0x3c
	EDataStoreType DataStoreType; // 0x3d
	EGameServerState ServerState; // 0x3e
	FString MultiHome; // 0x40
	FString OutAddress; // 0x50
	FString IPAddress; // 0x60
	int32_t Port; // 0x70
	int32_t QueryPort; // 0x74
	int32_t LobbyPort; // 0x78
	int32_t ClusterId; // 0x7c
	int32_t DistrictId; // 0x80
	int32_t BattleAttackPlayerSpace; // 0x84
	int32_t BattleDefensePlayerSpace; // 0x88
	int32_t NumPlayers; // 0x8c
	FString ShutDownServiceKey; // 0x90
	FString ShutDownServiceIP; // 0xa0
	int32_t ShutDownServicePort; // 0xb0
	int32_t PingMs; // 0xb4
	int32_t PlayerLevelLimit; // 0xb8
	FString PrivateServerPassword; // 0xc0
	FString Description; // 0xd0
	FString DefaultIP; // 0xe0
	float FPS; // 0xf0
	int32_t MarkOffset; // 0xf4
};

struct FGuildMemberKPILog {
	FGuid Uid; // 0x0
	FDateTime Time; // 0x10
	FString Content; // 0x18
	int32_t Point; // 0x28
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FSGCreateComponentParams {
	USoundBase* Sound; // 0x0
	float VolumeMultiplier; // 0x8
	float PitchMultiplier; // 0xc
	float StartTime; // 0x10
	float FadeInDuration; // 0x14
	float FadeInVolumeLevel; // 0x18
	float FadeOutDuration; // 0x1c
	float FadeOutVolumeLevel; // 0x20
	EAudioFaderCurve FadeCurve; // 0x24
	USoundAttenuation* AttenuationSettings; // 0x28
	bool bAutoDestroy; // 0x30
	TSet<USoundConcurrency*> ConcurrencySettings; // 0x38
	bool bPersistAcrossLevelTransition; // 0x88
};

