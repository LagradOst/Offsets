// Created by BlueFire1337
// Updated 2022-01-28
// Generated 2022-02-02

#pragma once

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FRigHierarchyCopyPasteContent {
	TArray<ERigElementType> Types; // 0x0
	TArray<FString> Contents; // 0x10
	TArray<FTransform> LocalTransforms; // 0x20
	TArray<FTransform> GlobalTransforms; // 0x30
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FMeleeCraftingInfo_Handle {
	UMODataAssetHandle* pDataAssetHandle; // 0x20
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FMOSaveData {
	int32_t iWidgetPlacementsVersion; // 0x0
	TArray<FString> vActionbarSlotGuids0; // 0x8
	TArray<FString> vActionbarSlotGuids1; // 0x18
	TArray<FString> vActionbarSlotGuids2; // 0x28
	TArray<FString> vActionbarSlotGuids3; // 0x38
	FFrameWindowData sLocalPlayerFrameWindowData; // 0x48
	FFrameWindowData sTargetPlayerFrameWindowData; // 0x54
	TMap<FString, FVector2D> vSavedWidgetPositions; // 0x60
	TArray<FMOCraftingPresetSaves> vCraftingPresets; // 0xb0
	TArray<FMOHintDefinitions> vDataAssetHints; // 0xc0
	TArray<FString> vTutorialStepsCompleted; // 0xd0
	bool bShowMouseCursorWhenOpeningUI; // 0xe0
	int32_t iSaveGameVersion; // 0xe4
	int32_t iLastServer; // 0xe8
	int32_t iServerVersion; // 0xec
	TArray<FMOJournalNoteSaveData> vSavedNotes; // 0xf0
	TArray<FMOCharacterFaceCustomizationData> vSavedFacePresets; // 0x100
	FMOCharacterFaceCustomizationData sFaceShapeAutoSave; // 0x110
	bool bAcceptedEULA; // 0x120
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FCRSimContainer {
	float TimeStep; // 0x8
	float AccumulatedTime; // 0xc
	float TimeLeftForStep; // 0x10
};

struct FRigVMMemoryStatistics {
	uint32_t RegisterCount; // 0x0
	uint32_t DataBytes; // 0x4
	uint32_t TotalBytes; // 0x8
};

struct FRainyFoggyWeatherStructureComplicated {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_66_BE5499A94D930F2DA3F724838ADFAA06; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_D842D2C94DD15C251A89D0B6FE3C7A2F; // 0x48
};

struct FRigUnit_AimConstraint_WorkData {
	TArray<FConstraintData> ConstraintData; // 0x0
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FFBIKDebugOption {
	bool bDrawDebugHierarchy; // 0x0
	bool bColorAngularMotionStrength; // 0x1
	bool bColorLinearMotionStrength; // 0x2
	bool bDrawDebugAxes; // 0x3
	bool bDrawDebugEffector; // 0x4
	bool bDrawDebugConstraints; // 0x5
	FTransform DrawWorldOffset; // 0x10
	float DrawSize; // 0x40
};

struct FLiveLinkInstanceProxy : FAnimInstanceProxy {
	FAnimNode_LiveLinkPose PoseNode; // 0x760
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
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

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FMOTableRowAIEffect : FTableRowBase {
	AMOAiEffectActor* cAiEffectActorClass; // 0x8
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FMathRBFInterpolateQuatQuat_Target {
	FQuat Target; // 0x0
	FQuat Value; // 0x10
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
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

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FLiveLinkPongMessage {
	FString ProviderName; // 0x0
	FString MachineName; // 0x10
	FGuid PollRequest; // 0x20
	int32_t LiveLinkVersion; // 0x30
	double CreationPlatformTime; // 0x38
};

struct FRigCurveContainer {
	TArray<FRigCurve> Curves; // 0x20
	TMap<FName, int32_t> NameToIndexMapping; // 0x30
	TArray<FName> Selection; // 0x80
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FMOTableRowSpell : FTableRowBase {
	UTexture2D* sIconA; // 0x8
	FText sDescription; // 0x10
	FText sDisplayName; // 0x28
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

struct FSolverInput {
	float LinearMotionStrength; // 0x0
	float MinLinearMotionStrength; // 0x4
	float AngularMotionStrength; // 0x8
	float MinAngularMotionStrength; // 0xc
	float DefaultTargetClamp; // 0x10
	float Precision; // 0x14
	float Damping; // 0x18
	int32_t MaxIterations; // 0x1c
	bool bUseJacobianTranspose; // 0x20
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	FQuat Argument; // 0x10
	FVector Axis; // 0x20
	float Angle; // 0x2c
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
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

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FMOHintDefinitions : FTableRowBase {
	FText sHintBody; // 0x8
	EHint EHint; // 0x20
	EHintAvailabillity EHintAvailabillity; // 0x21
	float fCurrentCooldown; // 0x24
};

struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
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
	char bOverride_MotionBlurAmount : 1; // 0x18
	char bOverride_MotionBlurMax : 1; // 0x18
	char bOverride_MotionBlurTargetFPS : 1; // 0x18
	char bOverride_MotionBlurPerObjectSize : 1; // 0x18
	char bOverride_ScreenPercentage : 1; // 0x19
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x19
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x19
	char bOverride_ReflectionsType : 1; // 0x1c
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1c
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1c
	char bOverride_RayTracingReflectionsShadows : 1; // 0x1c
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x1c
	char bOverride_TranslucencyType : 1; // 0x1c
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1d
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1d
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x1d
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1d
	char bOverride_RayTracingGI : 1; // 0x1d
	char bOverride_RayTracingGIMaxBounces : 1; // 0x1d
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x1d
	char bOverride_PathTracingMaxBounces : 1; // 0x1d
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x1e
	char bMobileHQGaussian : 1; // 0x20
	EBloomMethod BloomMethod; // 0x21
	EAutoExposureMethod AutoExposureMethod; // 0x22
	float WhiteTemp; // 0x24
	float WhiteTint; // 0x28
	FVector4 ColorSaturation; // 0x30
	FVector4 ColorContrast; // 0x40
	FVector4 ColorGamma; // 0x50
	FVector4 ColorGain; // 0x60
	FVector4 ColorOffset; // 0x70
	FVector4 ColorSaturationShadows; // 0x80
	FVector4 ColorContrastShadows; // 0x90
	FVector4 ColorGammaShadows; // 0xa0
	FVector4 ColorGainShadows; // 0xb0
	FVector4 ColorOffsetShadows; // 0xc0
	FVector4 ColorSaturationMidtones; // 0xd0
	FVector4 ColorContrastMidtones; // 0xe0
	FVector4 ColorGammaMidtones; // 0xf0
	FVector4 ColorGainMidtones; // 0x100
	FVector4 ColorOffsetMidtones; // 0x110
	FVector4 ColorSaturationHighlights; // 0x120
	FVector4 ColorContrastHighlights; // 0x130
	FVector4 ColorGammaHighlights; // 0x140
	FVector4 ColorGainHighlights; // 0x150
	FVector4 ColorOffsetHighlights; // 0x160
	float ColorCorrectionHighlightsMin; // 0x170
	float ColorCorrectionShadowsMax; // 0x174
	float BlueCorrection; // 0x178
	float ExpandGamut; // 0x17c
	float ToneCurveAmount; // 0x180
	float FilmSlope; // 0x184
	float FilmToe; // 0x188
	float FilmShoulder; // 0x18c
	float FilmBlackClip; // 0x190
	float FilmWhiteClip; // 0x194
	FLinearColor FilmWhitePoint; // 0x198
	FLinearColor FilmShadowTint; // 0x1a8
	float FilmShadowTintBlend; // 0x1b8
	float FilmShadowTintAmount; // 0x1bc
	float FilmSaturation; // 0x1c0
	FLinearColor FilmChannelMixerRed; // 0x1c4
	FLinearColor FilmChannelMixerGreen; // 0x1d4
	FLinearColor FilmChannelMixerBlue; // 0x1e4
	float FilmContrast; // 0x1f4
	float FilmToeAmount; // 0x1f8
	float FilmHealAmount; // 0x1fc
	float FilmDynamicRange; // 0x200
	FLinearColor SceneColorTint; // 0x204
	float SceneFringeIntensity; // 0x214
	float ChromaticAberrationStartOffset; // 0x218
	float BloomIntensity; // 0x21c
	float BloomThreshold; // 0x220
	float BloomSizeScale; // 0x224
	float Bloom1Size; // 0x228
	float Bloom2Size; // 0x22c
	float Bloom3Size; // 0x230
	float Bloom4Size; // 0x234
	float Bloom5Size; // 0x238
	float Bloom6Size; // 0x23c
	FLinearColor Bloom1Tint; // 0x240
	FLinearColor Bloom2Tint; // 0x250
	FLinearColor Bloom3Tint; // 0x260
	FLinearColor Bloom4Tint; // 0x270
	FLinearColor Bloom5Tint; // 0x280
	FLinearColor Bloom6Tint; // 0x290
	float BloomConvolutionSize; // 0x2a0
	UTexture2D* BloomConvolutionTexture; // 0x2a8
	FVector2D BloomConvolutionCenterUV; // 0x2b0
	float BloomConvolutionPreFilterMin; // 0x2b8
	float BloomConvolutionPreFilterMax; // 0x2bc
	float BloomConvolutionPreFilterMult; // 0x2c0
	float BloomConvolutionBufferScale; // 0x2c4
	UTexture* BloomDirtMask; // 0x2c8
	float BloomDirtMaskIntensity; // 0x2d0
	FLinearColor BloomDirtMaskTint; // 0x2d4
	FLinearColor AmbientCubemapTint; // 0x2e4
	float AmbientCubemapIntensity; // 0x2f4
	UTextureCube* AmbientCubemap; // 0x2f8
	float CameraShutterSpeed; // 0x300
	float CameraISO; // 0x304
	float DepthOfFieldFstop; // 0x308
	float DepthOfFieldMinFstop; // 0x30c
	int32_t DepthOfFieldBladeCount; // 0x310
	float AutoExposureBias; // 0x314
	float AutoExposureBiasBackup; // 0x318
	char bOverride_AutoExposureBiasBackup : 1; // 0x31c
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x320
	UCurveFloat* AutoExposureBiasCurve; // 0x328
	UTexture* AutoExposureMeterMask; // 0x330
	float AutoExposureLowPercent; // 0x338
	float AutoExposureHighPercent; // 0x33c
	float AutoExposureMinBrightness; // 0x340
	float AutoExposureMaxBrightness; // 0x344
	float AutoExposureSpeedUp; // 0x348
	float AutoExposureSpeedDown; // 0x34c
	float HistogramLogMin; // 0x350
	float HistogramLogMax; // 0x354
	float AutoExposureCalibrationConstant; // 0x358
	float LensFlareIntensity; // 0x35c
	FLinearColor LensFlareTint; // 0x360
	float LensFlareBokehSize; // 0x370
	float LensFlareThreshold; // 0x374
	UTexture* LensFlareBokehShape; // 0x378
	FLinearColor LensFlareTints[0x8]; // 0x380
	float VignetteIntensity; // 0x400
	float GrainJitter; // 0x404
	float GrainIntensity; // 0x408
	float AmbientOcclusionIntensity; // 0x40c
	float AmbientOcclusionStaticFraction; // 0x410
	float AmbientOcclusionRadius; // 0x414
	char AmbientOcclusionRadiusInWS : 1; // 0x418
	float AmbientOcclusionFadeDistance; // 0x41c
	float AmbientOcclusionFadeRadius; // 0x420
	float AmbientOcclusionDistance; // 0x424
	float AmbientOcclusionPower; // 0x428
	float AmbientOcclusionBias; // 0x42c
	float AmbientOcclusionQuality; // 0x430
	float AmbientOcclusionMipBlend; // 0x434
	float AmbientOcclusionMipScale; // 0x438
	float AmbientOcclusionMipThreshold; // 0x43c
	float AmbientOcclusionTemporalBlendWeight; // 0x440
	char RayTracingAO : 1; // 0x444
	int32_t RayTracingAOSamplesPerPixel; // 0x448
	float RayTracingAOIntensity; // 0x44c
	float RayTracingAORadius; // 0x450
	FLinearColor IndirectLightingColor; // 0x454
	float IndirectLightingIntensity; // 0x464
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x468
	int32_t RayTracingGIMaxBounces; // 0x46c
	int32_t RayTracingGISamplesPerPixel; // 0x470
	float ColorGradingIntensity; // 0x474
	UTexture* ColorGradingLUT; // 0x478
	float DepthOfFieldSensorWidth; // 0x480
	float DepthOfFieldFocalDistance; // 0x484
	float DepthOfFieldDepthBlurAmount; // 0x488
	float DepthOfFieldDepthBlurRadius; // 0x48c
	float DepthOfFieldFocalRegion; // 0x490
	float DepthOfFieldNearTransitionRegion; // 0x494
	float DepthOfFieldFarTransitionRegion; // 0x498
	float DepthOfFieldScale; // 0x49c
	float DepthOfFieldNearBlurSize; // 0x4a0
	float DepthOfFieldFarBlurSize; // 0x4a4
	float DepthOfFieldOcclusion; // 0x4a8
	float DepthOfFieldSkyFocusDistance; // 0x4ac
	float DepthOfFieldVignetteSize; // 0x4b0
	float MotionBlurAmount; // 0x4b4
	float MotionBlurMax; // 0x4b8
	int32_t MotionBlurTargetFPS; // 0x4bc
	float MotionBlurPerObjectSize; // 0x4c0
	float LPVIntensity; // 0x4c4
	float LPVVplInjectionBias; // 0x4c8
	float LPVSize; // 0x4cc
	float LPVSecondaryOcclusionIntensity; // 0x4d0
	float LPVSecondaryBounceIntensity; // 0x4d4
	float LPVGeometryVolumeBias; // 0x4d8
	float LPVEmissiveInjectionIntensity; // 0x4dc
	float LPVDirectionalOcclusionIntensity; // 0x4e0
	float LPVDirectionalOcclusionRadius; // 0x4e4
	float LPVDiffuseOcclusionExponent; // 0x4e8
	float LPVSpecularOcclusionExponent; // 0x4ec
	float LPVDiffuseOcclusionIntensity; // 0x4f0
	float LPVSpecularOcclusionIntensity; // 0x4f4
	EReflectionsType ReflectionsType; // 0x4f8
	float ScreenSpaceReflectionIntensity; // 0x4fc
	float ScreenSpaceReflectionQuality; // 0x500
	float ScreenSpaceReflectionMaxRoughness; // 0x504
	float RayTracingReflectionsMaxRoughness; // 0x508
	int32_t RayTracingReflectionsMaxBounces; // 0x50c
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x510
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x514
	char RayTracingReflectionsTranslucency : 1; // 0x515
	ETranslucencyType TranslucencyType; // 0x516
	float RayTracingTranslucencyMaxRoughness; // 0x518
	int32_t RayTracingTranslucencyRefractionRays; // 0x51c
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x520
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x524
	char RayTracingTranslucencyRefraction : 1; // 0x525
	int32_t PathTracingMaxBounces; // 0x528
	int32_t PathTracingSamplesPerPixel; // 0x52c
	float LPVFadeRange; // 0x530
	float LPVDirectionalOcclusionFadeRange; // 0x534
	float ScreenPercentage; // 0x538
	FWeightedBlendables WeightedBlendables; // 0x540
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
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

struct FRigCurve : FRigElement {
	float Value; // 0x18
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
	int32_t Int; // 0x10
};

struct FAnimCurveParam {
	FName Name; // 0x0
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

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
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

struct FWaterBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EffectorBone; // 0x70
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float Weight; // 0xb4
	bool bPropagateToChildren; // 0xb8
	int32_t MaxIterations; // 0xbc
	FRigUnit_FABRIK_WorkData WorkData; // 0xc0
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable {
	float Scale; // 0x68
	FLinearColor Color; // 0x6c
	float Thickness; // 0x7c
	FTransform WorldOffset; // 0x80
	bool bEnabled; // 0xb0
};

struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase {
	FTransform A; // 0x10
	FTransform B; // 0x40
	float T; // 0x70
	FTransform Result; // 0x80
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FRigUnit_SetTransform : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	bool bInitial; // 0x75
	FTransform Transform; // 0x80
	float Weight; // 0xb0
	bool bPropagateToChildren; // 0xb4
	FCachedRigElement CachedIndex; // 0xb8
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
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

struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	FCRFourPointBezier Bezier; // 0x78
	EControlRigCurveAlignment Alignment; // 0xa8
	float Minimum; // 0xac
	float Maximum; // 0xb0
	int32_t SamplingPrecision; // 0xb4
	FVector PrimaryAxis; // 0xb8
	FVector SecondaryAxis; // 0xc4
	FVector PoleVectorPosition; // 0xd0
	TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0
	EControlRigAnimEasingType RotationEaseType; // 0xf0
	float Weight; // 0xf4
	bool bPropagateToChildren; // 0xf8
	FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100
	FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160
};

struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase {
	int32_t Value; // 0x8
	int32_t Result; // 0xc
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
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

struct FRigUnit_SpaceName : FRigUnit {
	FName Space; // 0x8
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

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase {
	FRigElementKeyCollection A; // 0x8
	FRigElementKeyCollection B; // 0x18
	FRigElementKeyCollection Collection; // 0x28
};

struct FRigUnit_DebugTransformArrayMutable_WorkData {
	TArray<FTransform> DrawTransforms; // 0x0
};

struct FMOAnimNode_LODSwitch : FAnimNode_BlendListBase {
	int32_t LODThreshold; // 0x98
};

struct FRigUnit_GetSpaceTransform : FRigUnit {
	FName Space; // 0x8
	EBoneGetterSetterMode SpaceType; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedSpaceIndex; // 0x50
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FMOArmorPartData {
	int32_t iArmorIndex; // 0x0
	int32_t iResourceIndex; // 0x4
	EResourceGroup EResourceGroup; // 0x8
	EEquipmentQuality EEquipmentQuality; // 0x9
	int32_t iSecondaryResourceIndex; // 0xc
	EResourceGroup eSecondaryResourceGroup; // 0x10
	EArmorSlot eBaseArmorSlot; // 0x11
	FString sParamString; // 0x18
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50
	float Length; // 0x54
};

struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase {
	FTransform TargetValue; // 0x10
	FTransform InitialValue; // 0x40
	float Blend; // 0x70
	bool bIntegrateDeltaTime; // 0x74
	FTransform Result; // 0x80
	FTransform AccumulatedValue; // 0xb0
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FMOPhysicalMaterialSoundProperties {
	USoundBase* FootStepSound; // 0x0
};

struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase {
	FQuat TargetValue; // 0x10
	FQuat InitialValue; // 0x20
	float Blend; // 0x30
	bool bIntegrateDeltaTime; // 0x34
	FQuat Result; // 0x40
	FQuat AccumulatedValue; // 0x50
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

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FMovieScene2DTransformMask {
	uint32_t mask; // 0x0
};

struct FMOTableGlobalUI : FTableRowBase {
	USoundCue* pClickOnItemToPicupSound; // 0x8
	USoundCue* pDestroyItemSound; // 0x10
	USoundCue* pReleaseItemSound; // 0x18
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase {
	bool A; // 0x8
	bool B; // 0x9
	bool Result; // 0xa
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
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

struct FMeleeCraftingInfo_Head {
	UMODataAssetHead* pDataAssetHead; // 0x20
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FRigUnit_OffsetTransformForItem : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	FTransform OffsetTransform; // 0x80
	float Weight; // 0xb0
	bool bPropagateToChildren; // 0xb4
	FCachedRigElement CachedIndex; // 0xb8
};

struct FRigUnit_SetMultiControlInteger : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x68
	float Weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FSpringDefinition {
	FBoneReference BoneA; // 0x0
	FBoneReference BoneB; // 0x10
	float K; // 0x20
	float B; // 0x24
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
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

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FMOCharacterFaceCustomizationData {
	TArray<char> ByteArray; // 0x0
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FRigUnit_SetMultiControlBool : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlBool_Entry> Entries; // 0x68
	TArray<FCachedRigElement> CachedControlIndices; // 0x78
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
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

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase {
	FCRFourPointBezier Bezier; // 0x8
	float T; // 0x38
	FVector Result; // 0x3c
	FVector Tangent; // 0x48
};

struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50
	float Length; // 0x54
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

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Factor; // 0x14
	FVector Result; // 0x18
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FControlRigSequenceObjectReference {
	UControlRig* ControlRigClass; // 0x0
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FMOKeybindSelectStruct {
	FName initMappingName; // 0x0
	FText initDisplayText; // 0x8
	FInputChord initChord; // 0x20
	float fInitAxisScale; // 0x40
	bool bDisableModifiers; // 0x44
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FRigUnit_IsInteracting : FRigUnit {
	bool bIsInteracting; // 0x8
};

struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatQuat_Target> Targets; // 0xd0
	FQuat Output; // 0xe0
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase {
	float Value; // 0x8
	float SecondsAgo; // 0xc
	int32_t BufferSize; // 0x10
	float TimeRange; // 0x14
	float Result; // 0x18
	TArray<float> Buffer; // 0x20
	TArray<float> DeltaTimes; // 0x30
	int32_t LastInsertIndex; // 0x40
	int32_t UpperBound; // 0x44
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FMOEquipmentActorShieldData {
	EShieldGroup ShieldGroup; // 0x0
	EEquipmentQuality EquipmentQuality; // 0x1
	UMODataAssetEquipmentShared* SharedData; // 0x8
	int32_t BaseIndex; // 0x10
	UMODataAssetShield* BaseData; // 0x18
	EResourceGroup BaseResourceGroup; // 0x20
	int32_t BaseResourceIndex; // 0x24
	int32_t FrameIndex; // 0x28
	UMODataAssetShieldFrame* FrameData; // 0x30
	EResourceGroup FrameResourceGroup; // 0x38
	int32_t FrameResourceIndex; // 0x3c
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

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FMOEquipmentData {
	EEquipmentGroup eEquipmentType; // 0x0
	int32_t iHandleTypeIndex; // 0x4
	int32_t iHandleResourceIndex; // 0x8
	EWeaponGroup eHandleWeaponGroup; // 0xc
	EResourceGroup eHandleResourceGroup; // 0xd
	int32_t iHeadTypeIndex; // 0x10
	int32_t iHeadResourceIndex; // 0x14
	EWeaponGroup eHeadWeaponGroup; // 0x18
	EResourceGroup eHeadResourceGroup; // 0x19
	EEquipmentQuality EEquipmentQuality; // 0x1a
	FString sParamString; // 0x20
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FRigUnit_CollectionItems : FRigUnit_CollectionBase {
	TArray<FRigElementKey> Items; // 0x8
	FRigElementKeyCollection Collection; // 0x18
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
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

struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	FVector Result; // 0x20
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FRigUnit_CollectionCount : FRigUnit_CollectionBase {
	FRigElementKeyCollection Collection; // 0x8
	int32_t Count; // 0x18
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase {
	float Value; // 0x8
	FLinearColor Result; // 0xc
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FRigUnit_BoneHarmonics_BoneTarget {
	FName Bone; // 0x0
	float Ratio; // 0x8
};

struct FSocketSoundPair {
	FName sSocketName; // 0x0
	USoundCue* pSoundCue; // 0x8
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase {
	FLinearColor A; // 0x8
	FLinearColor B; // 0x18
	FLinearColor Result; // 0x28
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

struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase {
	FVector Input; // 0x8
	ERBFVectorDistanceType DistanceFunction; // 0x14
	ERBFKernelType SmoothingFunction; // 0x15
	float SmoothingRadius; // 0x18
	bool bNormalizeOutput; // 0x1c
	FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x20
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
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

struct FTalkerTreeTalk {
	FText sTalkText; // 0x0
	FString sTalkCondition; // 0x18
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

struct FSolverIterations {
	float FixedTimeStep; // 0x0
	int32_t SolverIterations; // 0x4
	int32_t JointIterations; // 0x8
	int32_t CollisionIterations; // 0xc
	int32_t SolverPushOutIterations; // 0x10
	int32_t JointPushOutIterations; // 0x14
	int32_t CollisionPushOutIterations; // 0x18
};

struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatFloat_Target> Targets; // 0xd0
	float Output; // 0xe0
};

struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable {
	FRigElementKey Subject; // 0x68
	int32_t ParentIndex; // 0x74
	FRigElementKeyCollection Parents; // 0x78
	FTransform InitialGlobalTransform; // 0x90
	float Weight; // 0xc0
	FTransform Transform; // 0xd0
	bool Switched; // 0x100
	FCachedRigElement CachedSubject; // 0x104
	FCachedRigElement CachedParent; // 0x118
	FTransform RelativeOffset; // 0x130
};

struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase {
	FRigElementKeyCollection Items; // 0x8
	FName Old; // 0x18
	FName New; // 0x20
	bool RemoveInvalidItems; // 0x28
	FRigElementKeyCollection Collection; // 0x30
	FRigElementKeyCollection CachedCollection; // 0x40
	int32_t CachedHierarchyHash; // 0x50
};

struct FMOAvatarPath {
	FMOAvatarPathPoint P0; // 0x0
	FMOAvatarPathPoint P1; // 0x38
	FMOAvatarPathPoint P2; // 0x70
	EMOAvatarPathLastCommand LastCommand; // 0xa8
	int32_t CurrentSubsegmentIndex; // 0xac
	TArray<FMOAvatarPathPoint> SubsegmentPoints; // 0xb0
	FMOAvatarPathPoint S0; // 0xc0
	FMOAvatarPathPoint S1; // 0xf8
	bool bPathInvalidated; // 0x130
	bool bHasInitialPath; // 0x131
	bool bStopped; // 0x132
	FMOAvatarPathPoint CurrentPoint; // 0x138
	float SubSegmentNormalizedDistance; // 0x170
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase {
	FRotator Rotator; // 0x8
	FQuat Result; // 0x20
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FCRSimPointContainer : FCRSimContainer {
	TArray<FCRSimPoint> Points; // 0x18
	TArray<FCRSimLinearSpring> Springs; // 0x28
	TArray<FCRSimPointForce> Forces; // 0x38
	TArray<FCRSimSoftCollision> CollisionVolumes; // 0x48
	TArray<FCRSimPointConstraint> Constraints; // 0x58
	TArray<FCRSimPoint> PreviousStep; // 0x68
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
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

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FRigUnit_ModifyTransforms_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
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

struct FRigUnit_GetCurveValue : FRigUnit {
	FName Curve; // 0x8
	float Value; // 0x10
	FCachedRigElement CachedCurveIndex; // 0x14
};

struct FCRFourPointBezier {
	FVector A; // 0x0
	FVector B; // 0xc
	FVector C; // 0x18
	FVector D; // 0x24
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FRigUnit_ApplyFK : FRigUnitMutable {
	FName Joint; // 0x68
	FTransform Transform; // 0x70
	FTransformFilter Filter; // 0xa0
	EApplyTransformMode ApplyTransformMode; // 0xa9
	ETransformSpaceMode ApplyTransformSpace; // 0xaa
	FTransform BaseTransform; // 0xb0
	FName BaseJoint; // 0xe0
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

struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatXform_Target> Targets; // 0xd0
	FTransform Output; // 0xe0
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FRigUnit_SendEvent : FRigUnitMutable {
	ERigEvent Event; // 0x68
	FRigElementKey Item; // 0x6c
	float OffsetInSeconds; // 0x78
	bool bEnable; // 0x7c
	bool bOnlyDuringInteraction; // 0x7d
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	FBoneReference RootBone; // 0xc8
	TArray<FBoneReference> ExcludeBones; // 0xd8
	int32_t TargetFramerate; // 0xe8
	bool OverrideTargetFramerate; // 0xec
	FKawaiiPhysicsSettings PhysicsSettings; // 0xf0
	UCurveFloat* DampingCurve; // 0x108
	UCurveFloat* WorldDampingLocationCurve; // 0x110
	UCurveFloat* WorldDampingRotationCurve; // 0x118
	UCurveFloat* StiffnessCurve; // 0x120
	UCurveFloat* RadiusCurve; // 0x128
	UCurveFloat* LimitAngleCurve; // 0x130
	bool bUpdatePhysicsSettingsInGame; // 0x138
	float DummyBoneLength; // 0x13c
	EBoneForwardAxis BoneForwardAxis; // 0x140
	EPlanarConstraint PlanarConstraint; // 0x141
	TArray<FSphericalLimit> SphericalLimits; // 0x148
	TArray<FCapsuleLimit> CapsuleLimits; // 0x158
	TArray<FPlanarLimit> PlanarLimits; // 0x168
	UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x178
	TArray<FSphericalLimit> SphericalLimitsData; // 0x180
	TArray<FCapsuleLimit> CapsuleLimitsData; // 0x190
	TArray<FPlanarLimit> PlanarLimitsData; // 0x1a0
	float TeleportDistanceThreshold; // 0x1b0
	float TeleportRotationThreshold; // 0x1b4
	FVector Gravity; // 0x1b8
	bool bEnableWind; // 0x1c4
	float WindScale; // 0x1c8
	TArray<FKawaiiPhysicsModifyBone> ModifyBones; // 0x1d0
	float TotalBoneLength; // 0x1e0
	FTransform PreSkelCompTransform; // 0x1f0
	bool bInitPhysicsSettings; // 0x220
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
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

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x68
	float Weight; // 0x78
	float WeightMinimum; // 0x7c
	float WeightMaximum; // 0x80
	EControlRigModifyBoneMode Mode; // 0x84
	FRigUnit_ModifyTransforms_WorkData WorkData; // 0x88
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FRigVMByteCodeEntry {
	FName Name; // 0x0
	int32_t InstructionIndex; // 0x8
};

struct FS_MO2_Clouds {
	float CameraDepth_92_9355D4894D4F2FE94D38F4A08C7B0C01; // 0x0
	float WeatherTile_2_0151E9DD4925D99118F45F99824BF8EA; // 0x4
	float ReversedRaymarchStep_12_E53170D246E2A4DA6F3EAD97F5D7C983; // 0x8
	float LightMarchStep_40_803142134F61E5FD1105BBAFBB84C7A9; // 0xc
	float StepTwist_80_1C502B2C44774636A4495388BFFDC211; // 0x10
	float StepDistanceScale_93_95BFA0924FE0D4C42DC6E9B621A4698B; // 0x14
	float StepTAA_88_947FD691434BDAD36B06F9A50F20C70A; // 0x18
	float ShadowSize_42_E5C446F4485633B48D9E45B4AAAA9879; // 0x1c
	float ReverseShadowSize_70_21CA2A29402EF4BAA51616B9D032D5C9; // 0x20
	float CloudType_14_378870444EBDD677A114C9A6DADDE768; // 0x24
	float Coverage_28_F610638140388C2B417078AF4D2B9A07; // 0x28
	float GeneralDensity_30_06094ACD4185D9425298749427D0A72D; // 0x2c
	float BottomDensity_64_1549D2914393D5D8BCCC0BAD803F8D07; // 0x30
	float TopDensity_62_4E88CA8E4A5A044632AB1BBE019910E3; // 0x34
	FLinearColor CloudPosition_17_B88139534ACDDF83F9C0CEBCEA0C7BC3; // 0x38
	FLinearColor CloudScale_19_EAF0657B413C10DFFF966AAD12D23B9A; // 0x48
	float CloudTopOffset_32_C5DC6A994413EE08EB766EA13C85CB1F; // 0x58
	float LODScale_26_FA89FC1843B7796CD2F2FA92450CE182; // 0x5c
	FLinearColor CloudNoiseBottomTile_22_2DE1EE9A42A753293C7489BE662A6B44; // 0x60
	FLinearColor CloudNoiseTopTile_89_92608C2947646AB5CBCC0FA1883DC16F; // 0x70
	FLinearColor DetailNoiseBottomTile_23_4ECDFCDB4155F345DFF993B4D5D58D91; // 0x80
	FLinearColor DetailNoiseTopTile_90_0BED64AA4323CB795488938A4E60CC33; // 0x90
	FLinearColor CUMULUS_GRADIENT_5_799EA7BB43E36C8132C68C9C683C2B40; // 0xa0
	FLinearColor STRATOCUMULUS_GRADIENT_9_3DA338DA4786CDBBEFC02EBF4C7398D8; // 0xb0
	FLinearColor STRATUS_GRADIENT_7_B15C0A68484BA1AD4436018D229AF8F1; // 0xc0
	FLinearColor CloudWind_94_5DD9D0F147AC638F6A4ED486CE0F4322; // 0xd0
	float BeerLambert_44_C5B7C57F48029F4A5D4D90ABEB4915FF; // 0xe0
	float SunArea_46_909FEF8A4C989C37550B48A4D96865C2; // 0xe4
	float NAnisotropy_48_0D4B6BFC4DA1B7A9A4359CA1B17A65F9; // 0xe8
	float LightIntensity_51_74F141BD4440637827D409B967873245; // 0xec
	float AmbientIntensity_52_4F5B18484009A5EE7BD057AD1EC4FB8A; // 0xf0
	float DensityTAA_54_1538D0A342CF993E890CBB86FD070679; // 0xf4
	float ShadowTAA_81_85D3F01D40C3024785DFF196A1AD47F1; // 0xf8
	FLinearColor CloudColor_57_A0C4D36A4C6EF77A4A51E3A77D725B17; // 0xfc
	float CloudDesaturation_60_6943CECF4431B4D13BBD3380160D71B9; // 0x10c
	FLinearColor CloudShadowColor_83_7A9964CD42CFCB192891B495CC1DDC2E; // 0x110
	FLinearColor CloudNightColor_73_2985A48B4ADA7D7E60481399A420BAFC; // 0x120
	float ForwardAmbient_66_299CD050497F7E093DB16E8DFF43F5D9; // 0x130
	float ForwardDirectional_68_D4C88BB140BF327A4C76679F99036BBF; // 0x134
};

struct FStaticMeshCompositionInfo {
	FName sName; // 0x0
	UStaticMesh* pMesh; // 0x8
	TArray<UMaterialInterface*> pMaterialSlotOverrides; // 0x10
	FTransform tLocalTransform; // 0x20
	bool bEnableCollision; // 0x50
	TArray<FStaticMeshCompositionLODInfo> vLODCompositionInfos; // 0x58
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
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

struct FRigUnit_GetControlInitialTransform : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedControlIndex; // 0x50
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	FQuat Argument0; // 0x10
	FQuat Argument1; // 0x20
	FQuat Result; // 0x30
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FRigUnit_ConvertRotation : FRigUnit {
	FRotator Input; // 0x8
	FQuat Result; // 0x20
};

struct FAimTarget {
	float Weight; // 0x0
	FTransform Transform; // 0x10
	FVector AlignVector; // 0x40
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
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

struct FRigUnit_SetBoneTranslation : FRigUnitMutable {
	FName Bone; // 0x68
	FVector Translation; // 0x70
	EBoneGetterSetterMode Space; // 0x7c
	float Weight; // 0x80
	bool bPropagateToChildren; // 0x84
	FCachedRigElement CachedBone; // 0x88
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
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

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FRigUnit_SetRotation : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	FQuat Rotation; // 0x80
	float Weight; // 0x90
	bool bPropagateToChildren; // 0x94
	FCachedRigElement CachedIndex; // 0x98
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FRigUnit_SetControlFloat : FRigUnitMutable {
	FName Control; // 0x68
	float Weight; // 0x70
	float FloatValue; // 0x74
	FCachedRigElement CachedControlIndex; // 0x78
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
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

struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase {
	float Multiplier; // 0x8
	float InitialValue; // 0xc
	bool bIntegrateDeltaTime; // 0x10
	float Result; // 0x14
	float AccumulatedValue; // 0x18
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FRigUnit_GetBoneTransform : FRigUnit {
	FName Bone; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedBone; // 0x50
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase {
	FTransform Transform; // 0x10
	FVector Location; // 0x40
	FVector Result; // 0x4c
};

struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	FVector Axis; // 0x20
	float Angle; // 0x2c
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FRigUnit_FitChainToCurve_Rotation {
	FQuat Rotation; // 0x0
	float Ratio; // 0x10
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

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FLiveLinkSubjectFrameMessage {
	FName SubjectName; // 0x0
	TArray<FTransform> Transforms; // 0x8
	TArray<FLiveLinkCurveElement> Curves; // 0x18
	FLiveLinkMetaData MetaData; // 0x28
	double Time; // 0x88
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FMOAvatarFloorInfo {
	FMOFindFloorResult FindFloorResult; // 0x0
	double LastFloorCheckTimeStamp; // 0xb0
	float fCheckFloorPitchTimer; // 0xb8
	float fCheckFloorPitchInterval; // 0xbc
	float fFloorPitch; // 0xc0
	float fFloorPitchSmoothed; // 0xc4
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase {
	FTransform Value; // 0x10
	FEulerTransform Result; // 0x40
};

struct FRigSpace : FRigElement {
	ERigSpaceType SpaceType; // 0x18
	FName ParentName; // 0x1c
	int32_t ParentIndex; // 0x24
	FTransform InitialTransform; // 0x30
	FTransform LocalTransform; // 0x60
};

struct FRigUnit_DebugPoint : FRigUnit_DebugBase {
	FVector Vector; // 0x8
	ERigUnitDebugPointMode Mode; // 0x14
	FLinearColor Color; // 0x18
	float Scale; // 0x28
	float Thickness; // 0x2c
	FName Space; // 0x30
	FTransform WorldOffset; // 0x40
	bool bEnabled; // 0x70
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FActorLayer {
	FName Name; // 0x0
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

struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase {
	FRigElementKeyCollection A; // 0x8
	FRigElementKeyCollection B; // 0x18
	FRigElementKeyCollection Collection; // 0x28
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FLiveLinkConnectMessage {
	int32_t LiveLinkVersion; // 0x0
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FRigUnit_LiveLinkEvaluteFrameAnimation : FRigUnit_LiveLinkBase {
	FName SubjectName; // 0x8
	bool bDrawDebug; // 0x10
	FLinearColor DebugColor; // 0x14
	FTransform DebugDrawOffset; // 0x30
	FSubjectFrameHandle SubjectFrame; // 0x60
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FRigUnit_SphereTraceWorld : FRigUnit {
	FVector Start; // 0x8
	FVector End; // 0x14
	ECollisionChannel Channel; // 0x20
	float Radius; // 0x24
	bool bHit; // 0x28
	FVector HitLocation; // 0x2c
	FVector HitNormal; // 0x38
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FMOTableRowPlaceablePreview : FTableRowBase {
	TSoftObjectPtr<UMaterialInstance> pPreviewModeMaterial; // 0x8
	TSoftClassPtr<UObject> cPreviewModeActor; // 0x30
	TSoftObjectPtr<UStaticMesh> pPreviewModeStaticMesh; // 0x58
	TSoftObjectPtr<USoundCue> pPlacementSound; // 0x80
	float fCollisionBoxHeightScale; // 0xa8
	float fCollisionBoxWidthScale; // 0xac
	float fCollisionBoxDepthScale; // 0xb0
	float fPlacementMaxRange; // 0xb4
	float fPlacementMaxRangeLocationSetFactor; // 0xb8
	float fPlacementRotationStepDegrees; // 0xbc
	float fPlacementLocationHeightStep; // 0xc0
	float fMaxSurfaceAngleDegrees; // 0xc4
	float fMaxSurfaceAngleFailPercentage; // 0xc8
	float fSurfaceTraceLengthPercentage; // 0xcc
	float fMinimumHeight; // 0xd0
	int32_t iNumGridDivisions; // 0xd4
	TArray<TSoftClassPtr<UObject>> MinDistanceFromTypeArray; // 0xd8
	float fMinDistanceFromTypes; // 0xe8
	TArray<FString> TierContentIDs; // 0xf0
	TArray<TSoftClassPtr<UObject>> ActorTypeIgnoreList; // 0x100
	bool bBypassSurfaceCheck; // 0x110
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FFBIKBoneLimit {
	EFBIKBoneLimitType LimitType_X; // 0x0
	EFBIKBoneLimitType LimitType_Y; // 0x1
	EFBIKBoneLimitType LimitType_Z; // 0x2
	FVector Limit; // 0x4
};

struct FRigUnit_SetTranslation : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	FVector Translation; // 0x78
	float Weight; // 0x84
	bool bPropagateToChildren; // 0x88
	FCachedRigElement CachedIndex; // 0x8c
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
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

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable {
	FCRFourPointBezier Bezier; // 0x68
	float MinimumU; // 0x98
	float MaximumU; // 0x9c
	FLinearColor Color; // 0xa0
	float Thickness; // 0xb0
	int32_t Detail; // 0xb4
	FRigElementKey Space; // 0xb8
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FMOFishingRodData {
	EEquipmentGroup eEquipmentType; // 0x0
	int32_t iRodTypeIndex; // 0x4
	int32_t iBaseResourceIndex; // 0x8
	EResourceGroup eBaseResourceGroup; // 0xc
	int32_t iSecondaryResourceIndex; // 0x10
	EResourceGroup eSecondaryResourceGroup; // 0x14
	EEquipmentQuality EEquipmentQuality; // 0x15
	FString sParamString; // 0x18
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FRigUnit_QuaternionToAngle : FRigUnit {
	FVector Axis; // 0x8
	FQuat Argument; // 0x20
	float Angle; // 0x30
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
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

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
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

struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FVector TwistAxis; // 0x78
	FVector PoleAxis; // 0x84
	EControlRigAnimEasingType TwistEaseType; // 0x90
	float Weight; // 0x94
	bool bPropagateToChildren; // 0x98
	FRigUnit_TwistBones_WorkData WorkData; // 0xa0
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FRigUnit_FitChainToCurve_WorkData {
	float ChainLength; // 0x0
	TArray<FVector> ItemPositions; // 0x8
	TArray<float> ItemSegments; // 0x18
	TArray<FVector> CurvePositions; // 0x28
	TArray<float> CurveSegments; // 0x38
	TArray<FCachedRigElement> CachedItems; // 0x48
	TArray<int32_t> ItemRotationA; // 0x58
	TArray<int32_t> ItemRotationB; // 0x68
	TArray<float> ItemRotationT; // 0x78
	TArray<FTransform> ItemLocalTransforms; // 0x88
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries; // 0x68
	float Weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FMOCombatSystemMeleeDragInput {
	bool bUseForInput; // 0x0
	bool bActive; // 0x1
	float fClickDuration; // 0x4
	float fYawLimitBase; // 0x8
	float fPitchLimitBase; // 0xc
	float fYawLimit; // 0x10
	float fPitchLimit; // 0x14
	FRotator rViewStartRotation; // 0x18
	UMOGameUserSettings* pMOGameUserSettings; // 0x30
};

struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey Item; // 0x68
	FRigUnit_AimItem_Target Primary; // 0x74
	FRigUnit_AimItem_Target Secondary; // 0xa0
	float Weight; // 0xcc
	FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
	FCachedRigElement CachedItem; // 0x110
	FCachedRigElement PrimaryCachedSpace; // 0x124
	FCachedRigElement SecondaryCachedSpace; // 0x138
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase {
	FLinearColor A; // 0x8
	FLinearColor B; // 0x18
	float T; // 0x28
	FLinearColor Result; // 0x2c
};

struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Tolerance; // 0x14
	bool Result; // 0x18
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FRigUnit_SpringIK_WorkData {
	TArray<FCachedRigElement> BoneIndices; // 0x0
	FCachedRigElement CachedPoleVector; // 0x10
	TArray<FTransform> Transforms; // 0x28
	FCRSimPointContainer Simulation; // 0x38
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase {
	FTransform Value; // 0x10
	bool bEnabled; // 0x40
	float Thickness; // 0x44
	float Scale; // 0x48
	FName BoneSpace; // 0x4c
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FRigUnit_ToWorldSpace_Location : FRigUnit {
	FVector Location; // 0x8
	FVector World; // 0x14
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
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

struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	float Result; // 0x30
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FSunnyFoggyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_68_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_64_8BA974154172A8D69134F2B716C17A24; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_67CE440F436F56BED23C0194932C1C4B; // 0x48
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FMONamedCurve1D {
	FText Title; // 0x0
	FName X; // 0x18
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
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

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase {
	FVector Target; // 0x8
	float Strength; // 0x14
	float Damp; // 0x18
	float Blend; // 0x1c
	FVector Position; // 0x20
	FVector Velocity; // 0x2c
	FVector Acceleration; // 0x38
	FCRSimPoint Point; // 0x44
	bool bInitialized; // 0x6c
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
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

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FRigUnit_AimBone_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FTransform WorldOffset; // 0x10
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
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

struct FRigVMOperand {
	ERigVMMemoryType MemoryType; // 0x0
	uint16_t RegisterIndex; // 0x2
	uint16_t RegisterOffset; // 0x4
};

struct FRigUnit_SetControlVector : FRigUnitMutable {
	FName Control; // 0x68
	float Weight; // 0x70
	FVector Vector; // 0x74
	EBoneGetterSetterMode Space; // 0x80
	FCachedRigElement CachedControlIndex; // 0x84
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FTalkerTreePair {
	int32_t iConversationChainID; // 0x0
	TArray<FTalkerTreeTalk> sTalk; // 0x8
	TArray<FTalkerTreePlayerResponse> sResponses; // 0x18
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

struct FRigUnit_BoneHarmonics_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
	FVector WaveTime; // 0x10
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
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

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FRigUnit_ToWorldSpace_Rotation : FRigUnit {
	FQuat Rotation; // 0x10
	FQuat World; // 0x20
};

struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase {
	bool Value; // 0x8
};

struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase {
	FName PartialName; // 0x8
	ERigElementType TypeToSearch; // 0x10
	FRigElementKeyCollection Collection; // 0x18
	FRigElementKeyCollection CachedCollection; // 0x28
	int32_t CachedHierarchyHash; // 0x38
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FRigUnit_GetControlInteger : FRigUnit {
	FName Control; // 0x8
	int32_t IntegerValue; // 0x10
	int32_t Minimum; // 0x14
	int32_t Maximum; // 0x18
	FCachedRigElement CachedControlIndex; // 0x1c
};

struct FRigControlValueStorage {
	float Float00; // 0x0
	float Float01; // 0x4
	float Float02; // 0x8
	float Float03; // 0xc
	float Float10; // 0x10
	float Float11; // 0x14
	float Float12; // 0x18
	float Float13; // 0x1c
	float Float20; // 0x20
	float Float21; // 0x24
	float Float22; // 0x28
	float Float23; // 0x2c
	float Float30; // 0x30
	float Float31; // 0x34
	float Float32; // 0x38
	float Float33; // 0x3c
	bool bValid; // 0x40
};

struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase {
	FVector Euler; // 0x8
	EControlRigRotationOrder RotationOrder; // 0x14
	FQuat Result; // 0x20
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FMOJournalTableRow : FTableRowBase {
	FString Name; // 0x8
	FString Description; // 0x18
	UTexture2D* pBanner; // 0x28
	UTexture2D* pIcon; // 0x30
	FString steamStatJournal; // 0x38
	FString GroupName; // 0x48
	bool bFanfare; // 0x58
};

struct FMOSunPositionData {
	float Elevation; // 0x0
	float CorrectedElevation; // 0x4
	float Azimuth; // 0x8
	FTimespan SunriseTime; // 0x10
	FTimespan SunsetTime; // 0x18
	FTimespan SolarNoon; // 0x20
};

struct FMOLevelStreamingDistanceZones {
	float Inner_LoadedVisibleRadius; // 0x0
	float Middle_LoadHiddenRadius; // 0x4
	float Outer_UnloadRadius; // 0x8
};

struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	FQuat Result; // 0x30
};

struct FRigUnit_PrepareForExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
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

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable {
	FVector A; // 0x68
	FVector B; // 0x74
	FLinearColor Color; // 0x80
	float Thickness; // 0x90
	FRigElementKey Space; // 0x94
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	FVector Delta; // 0x14
	FVector PreviousValue; // 0x20
	FVector Cache; // 0x2c
};

struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Tolerance; // 0x20
	bool Result; // 0x24
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
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

struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase {
	FTransform Value; // 0x10
	bool bEnabled; // 0x40
	float Thickness; // 0x44
	float Scale; // 0x48
	FRigElementKey Space; // 0x4c
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FLiveLinkTransformControllerData {
	bool bWorldTransform; // 0x0
	bool bUseScale; // 0x1
	bool bSweep; // 0x2
	bool bTeleport; // 0x3
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

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
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

struct FRigControlValue {
	FRigControlValueStorage FloatStorage; // 0x0
	FTransform Storage; // 0x50
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase {
	FTransform Value; // 0x10
	float SecondsAgo; // 0x40
	int32_t BufferSize; // 0x44
	float TimeRange; // 0x48
	FTransform Result; // 0x50
	TArray<FTransform> Buffer; // 0x80
	TArray<float> DeltaTimes; // 0x90
	int32_t LastInsertIndex; // 0xa0
	int32_t UpperBound; // 0xa4
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector Result; // 0x14
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

struct FFrameNumber {
	int32_t Value; // 0x0
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

struct FControlRigSequenceObjectReferences {
	TArray<FControlRigSequenceObjectReference> Array; // 0x0
};

struct FTrackedCamera {
	int32_t Index; // 0x0
	FString Name; // 0x8
	double UpdateTime; // 0x18
	float FieldOfView; // 0x20
	int32_t SizeX; // 0x24
	int32_t SizeY; // 0x28
	ETrackedDeviceType AttachedTrackedDevice; // 0x2c
	FRotator CalibratedRotation; // 0x30
	FVector CalibratedOffset; // 0x3c
	FRotator UserRotation; // 0x48
	FVector UserOffset; // 0x54
	FRotator RawRotation; // 0x60
	FVector RawOffset; // 0x6c
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
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

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FMOSynchronizedFullBodyAnimationEntry {
	FMOAnimationInfo Info; // 0x0
	bool bPlaybackIsBlendingOut; // 0x68
	bool bIsPlaying; // 0x69
	UAnimSequenceBase* Animation; // 0x70
	UAnimMontage* DynamicMontage; // 0x78
	int32_t MontageInstanceID; // 0x80
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
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

struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	float SlideAmount; // 0x78
	bool bPropagateToChildren; // 0x7c
	FRigUnit_SlideChain_WorkData WorkData; // 0x80
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase {
	FTransform Root; // 0x10
	FVector PoleVector; // 0x40
	FTransform Effector; // 0x50
	FVector PrimaryAxis; // 0x80
	FVector SecondaryAxis; // 0x8c
	float SecondaryAxisWeight; // 0x98
	bool bEnableStretch; // 0x9c
	float StretchStartRatio; // 0xa0
	float StretchMaximumRatio; // 0xa4
	float BoneALength; // 0xa8
	float BoneBLength; // 0xac
	FTransform Elbow; // 0xb0
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
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

struct FRigUnit_SlideChain_WorkData {
	float ChainLength; // 0x0
	TArray<float> ItemSegments; // 0x8
	TArray<FCachedRigElement> CachedItems; // 0x18
	TArray<FTransform> Transforms; // 0x28
	TArray<FTransform> BlendedTransforms; // 0x38
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FRigUnit_SetMultiControlFloat_Entry {
	FName Control; // 0x0
	float FloatValue; // 0x8
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

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
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

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FMOEquipmentActorArrowData {
	EEquipmentQuality EquipmentQuality; // 0x0
	UMODataAssetEquipmentShared* SharedData; // 0x8
	UMODataAssetArrowBase* BaseData; // 0x10
	EResourceGroup BaseResourceGroup; // 0x18
	int32_t BaseResourceIndex; // 0x1c
	UMODataAssetArrowHead* HeadData; // 0x20
	EResourceGroup HeadResourceGroup; // 0x28
	int32_t HeadResourceIndex; // 0x2c
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase {
	FTransform Value; // 0x10
	FTransform Result; // 0x40
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FRigUnit_ModifyTransforms_PerItem {
	FRigElementKey Item; // 0x0
	FTransform Transform; // 0x10
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FRigInfluenceMapPerEvent {
	TArray<FRigInfluenceMap> Maps; // 0x0
	TMap<FName, int32_t> EventToIndex; // 0x10
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FMOLevelStreamingGridTile {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	FBox2D Bounds; // 0x8
	TArray<FName> Levels; // 0x20
	ELevelStreamingDesiredState DesiredState; // 0x30
	bool bDesiredStateDirty; // 0x31
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase {
	bool Condition; // 0x8
	FQuat IfTrue; // 0x10
	FQuat IfFalse; // 0x20
	FQuat Result; // 0x30
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
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

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FKey {
	FName KeyName; // 0x0
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EffectorBone; // 0x70
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float Weight; // 0xb4
	int32_t MaxIterations; // 0xb8
	bool bStartFromTail; // 0xbc
	float BaseRotationLimit; // 0xc0
	TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0xc8
	bool bPropagateToChildren; // 0xd8
	FRigUnit_CCDIK_WorkData WorkData; // 0xe0
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase {
	FQuat Multiplier; // 0x10
	FQuat InitialValue; // 0x20
	bool bFlipOrder; // 0x30
	bool bIntegrateDeltaTime; // 0x31
	FQuat Result; // 0x40
	FQuat AccumulatedValue; // 0x50
};

struct FMOEquipmentActorBowData {
	EBowTypeGroup BowType; // 0x0
	EBowShapeGroup BowShape; // 0x1
	EBowConstructionGroup BowConstruction; // 0x2
	EEquipmentQuality EquipmentQuality; // 0x3
	UMODataAssetEquipmentShared* SharedData; // 0x8
	UMODataAssetBowBase* BaseData; // 0x10
	EResourceGroup BaseResourceGroup; // 0x18
	int32_t BaseResourceIndex; // 0x1c
	EResourceGroup CompositeResourceGroup; // 0x20
	int32_t CompositeResourceIndex; // 0x24
};

struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase {
	FTransform Multiplier; // 0x10
	FTransform InitialValue; // 0x40
	bool bFlipOrder; // 0x70
	bool bIntegrateDeltaTime; // 0x71
	FTransform Result; // 0x80
	FTransform AccumulatedValue; // 0xb0
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FRigUnit_GetRelativeTransformForItem : FRigUnit {
	FRigElementKey Child; // 0x8
	bool bChildInitial; // 0x14
	FRigElementKey Parent; // 0x18
	bool bParentInitial; // 0x24
	FTransform RelativeTransform; // 0x30
	FCachedRigElement CachedChild; // 0x60
	FCachedRigElement CachedParent; // 0x74
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FGridCell {
	TWeakObjectPtr<AMODecorationActor> pDecoration; // 0x0
	char iCellPropertyFlags; // 0x8
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FMOEquipmentActorArmorData {
	EArmorPartType ArmorType; // 0x0
	EEquipmentQuality EquipmentQuality; // 0x1
	ESex Sex; // 0x2
	ESpecies Species; // 0x3
	UMODataAssetEquipmentShared* SharedData; // 0x8
	UMODataAssetArmor* BaseData; // 0x10
	EResourceGroup BaseResourceGroup; // 0x18
	int32_t BaseResourceIndex; // 0x1c
	EResourceGroup SecondaryResourceGroup; // 0x20
	int32_t SecondaryResourceIndex; // 0x24
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
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

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FMathRBFInterpolateVectorFloat_Target {
	FVector Target; // 0x0
	float Value; // 0xc
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FRigBoneHierarchy {
	TArray<FRigBone> Bones; // 0x20
	TMap<FName, int32_t> NameToIndexMapping; // 0x30
	TArray<FName> Selection; // 0x80
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
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

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
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

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase {
	FTransform Value; // 0x10
	EAxis Axis; // 0x40
	EControlRigClampSpatialMode Type; // 0x41
	float Minimum; // 0x44
	float Maximum; // 0x48
	FTransform Space; // 0x50
	bool bDrawDebug; // 0x80
	FLinearColor DebugColor; // 0x84
	float DebugThickness; // 0x94
	FTransform Result; // 0xa0
};

struct FMOCollisionPoolShapeAttachmentInfo {
	EMOCollisionPoolShapeType ShapeType; // 0x0
	USceneComponent* ParentComponent; // 0x8
	FName SocketName; // 0x10
	float Radius; // 0x18
	float CapsuleHalfHeight; // 0x1c
	FTransform RelativeTransform; // 0x20
	UShapeComponent* ShapeComponent; // 0x50
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FMOAnimNode_HandSizeIKCorrection : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference LeftWeaponBone; // 0xe8
	FBoneReference RightWeaponBone; // 0xf8
	FBoneReference RightHandIK; // 0x108
	FBoneReference LeftHandIK; // 0x118
	bool bMoveRightIKFirst; // 0x128
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

struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase {
	FRigElementKeyCollection Collection; // 0x8
	FRigElementKeyCollection Reversed; // 0x18
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRigUnit_AimConstraint : FRigUnitMutable {
	FName Joint; // 0x68
	EAimMode AimMode; // 0x70
	EAimMode UpMode; // 0x71
	FVector AimVector; // 0x74
	FVector UpVector; // 0x80
	TArray<FAimTarget> AimTargets; // 0x90
	TArray<FAimTarget> UpTargets; // 0xa0
	FRigUnit_AimConstraint_WorkData WorkData; // 0xb0
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
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

struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable {
	FVector A; // 0x68
	FVector B; // 0x74
	FLinearColor Color; // 0x80
	float Thickness; // 0x90
	FName Space; // 0x94
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FMOTableRowFish : FTableRowBase {
	TSoftObjectPtr<UStaticMesh> pStaticMesh; // 0x8
	FString sJournalName; // 0x30
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FRigUnit_Harmonics_TargetItem {
	FRigElementKey Item; // 0x0
	float Ratio; // 0xc
};

struct FRigUnit_ConvertQuaternion : FRigUnit {
	FQuat Input; // 0x10
	FRotator Result; // 0x20
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase {
	FVector Multiplier; // 0x8
	FVector InitialValue; // 0x14
	bool bIntegrateDeltaTime; // 0x20
	FVector Result; // 0x24
	FVector AccumulatedValue; // 0x30
};

struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase {
	FRuntimeFloatCurve Curve; // 0x8
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FPlanarLimit : FCollisionLimitBase {
	FPlane Plane; // 0x50
};

struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_Harmonics_TargetItem> Targets; // 0x68
	FVector WaveSpeed; // 0x78
	FVector WaveFrequency; // 0x84
	FVector WaveAmplitude; // 0x90
	FVector WaveOffset; // 0x9c
	FVector WaveNoise; // 0xa8
	EControlRigAnimEasingType WaveEase; // 0xb4
	float WaveMinimum; // 0xb8
	float WaveMaximum; // 0xbc
	EControlRigRotationOrder RotationOrder; // 0xc0
	FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8
};

struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	float SlideAmount; // 0x78
	bool bPropagateToChildren; // 0x7c
	FRigUnit_SlideChain_WorkData WorkData; // 0x80
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
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

struct FMathRBFInterpolateQuatXform_Target {
	FQuat Target; // 0x0
	FTransform Value; // 0x10
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FRigUnit_Item : FRigUnit {
	FRigElementKey Item; // 0x8
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
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

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float MinimumLength; // 0x14
	float MaximumLength; // 0x18
	FVector Result; // 0x1c
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey ChainRoot; // 0x68
	FVector Speed; // 0x74
	FRigUnit_ChainHarmonics_Reach Reach; // 0x80
	FRigUnit_ChainHarmonics_Wave Wave; // 0xa8
	FRuntimeFloatCurve WaveCurve; // 0xe8
	FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170
	bool bDrawDebug; // 0x1ac
	FTransform DrawWorldOffset; // 0x1b0
	FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0
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

struct FRigUnit_GetControlBool : FRigUnit {
	FName Control; // 0x8
	bool BoolValue; // 0x10
	FCachedRigElement CachedControlIndex; // 0x14
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

struct FRigUnit_GetControlTransform : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FTransform Minimum; // 0x50
	FTransform Maximum; // 0x80
	FCachedRigElement CachedControlIndex; // 0xb0
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FRigUnit_Contains : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Search; // 0x10
	bool Result; // 0x18
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
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

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FRigVMRegister {
	ERigVMRegisterType Type; // 0x0
	uint32_t ByteIndex; // 0x4
	uint16_t ElementSize; // 0x8
	uint16_t ElementCount; // 0xa
	uint16_t SliceCount; // 0xc
	char AlignmentBytes; // 0xe
	uint16_t TrailingBytes; // 0x10
	FName Name; // 0x14
	int32_t ScriptStructIndex; // 0x1c
	bool bIsArray; // 0x20
	bool bIsDynamic; // 0x21
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FRigUnit_SetCurveValue : FRigUnitMutable {
	FName Curve; // 0x68
	float Value; // 0x70
	FCachedRigElement CachedCurveIndex; // 0x74
};

struct FMOMountableActorSpot {
	UMeshComponent* pAttachMeshComponent; // 0x0
	FName sAttachSocketName; // 0x8
	FVector vAttachLocation; // 0x10
	bool bOccupied; // 0x1c
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
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

struct FRigUnit_TwoBoneIKSimple_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FTransform WorldOffset; // 0x10
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable {
	FName Bone; // 0x68
	ETransformSpaceMode BaseTransformSpace; // 0x70
	FTransform BaseTransform; // 0x80
	FName BaseBone; // 0xb0
	TArray<FConstraintTarget> Targets; // 0xb8
	bool bUseInitialTransforms; // 0xc8
	FRigUnit_TransformConstraint_WorkData WorkData; // 0xd0
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

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
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

struct FUnderwaterPostProcessSettings {
	bool bEnabled; // 0x0
	float Priority; // 0x4
	float BlendRadius; // 0x8
	float BlendWeight; // 0xc
	FPostProcessSettings PostProcessSettings; // 0x10
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x560
};

struct FWaterBrushEffects {
	FWaterBrushEffectBlurring Blurring; // 0x0
	FWaterBrushEffectCurlNoise CurlNoise; // 0x8
	FWaterBrushEffectDisplacement Displacement; // 0x18
	FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40
	FWaterBrushEffectTerracing Terracing; // 0x48
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
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

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase {
	FVector Value; // 0x8
	bool bEnabled; // 0x14
	ERigUnitVisualDebugPointMode Mode; // 0x15
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float Scale; // 0x2c
	FRigElementKey Space; // 0x30
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

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FRigUnit_TwistBones_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
	TArray<float> ItemRatios; // 0x10
	TArray<FTransform> ItemTransforms; // 0x20
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FMOCharacterPlayerAppearance {
	float Length; // 0x0
	float BodySize; // 0x4
	float BodyStrength; // 0x8
	FMOCharacterBodyData BodyData; // 0x10
	FMOCharacterDecorationData DecorationData; // 0x40
	FMOFullEquipmentData EquipmentData; // 0x88
	FMOCharacterFaceCustomizationData FaceCustomizationData; // 0x2b8
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase {
	FVector Value; // 0x8
	bool bEnabled; // 0x14
	ERigUnitVisualDebugPointMode Mode; // 0x15
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float Scale; // 0x2c
	FName BoneSpace; // 0x30
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase {
	FTransform Value; // 0x10
	FTransform Delta; // 0x40
	FTransform PreviousValue; // 0x70
	FTransform Cache; // 0xa0
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase {
	FVector Value; // 0x8
	FVector Minimum; // 0x14
	FVector Maximum; // 0x20
	FVector AccumulatedMinimum; // 0x2c
	FVector AccumulatedMaximum; // 0x38
};

struct FCloudyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_64_8BA974154172A8D69134F2B716C17A24; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_67CE440F436F56BED23C0194932C1C4B; // 0x48
};

struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector Minimum; // 0x14
	FVector Maximum; // 0x20
	FVector Result; // 0x2c
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase {
	float Value; // 0x8
};

struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate {
	FLiveLinkSubjectPreset SubjectPreset; // 0x38
	TArray<bool> ChannelMask; // 0x70
	TArray<FLiveLinkSubSectionData> SubSectionsData; // 0x80
};

struct FCRSimPointForce {
	ECRSimPointForceType ForceType; // 0x0
	FVector Vector; // 0x4
	float Coefficient; // 0x10
	bool bNormalize; // 0x14
};

struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase {
	FVector Increment; // 0x8
	FVector InitialValue; // 0x14
	bool bIntegrateDeltaTime; // 0x20
	FVector Result; // 0x24
	FVector AccumulatedValue; // 0x30
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FRigUnit_GetControlVector : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FVector Vector; // 0x14
	FVector Minimum; // 0x20
	FVector Maximum; // 0x2c
	FCachedRigElement CachedControlIndex; // 0x38
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
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

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
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

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FControlRigComponentMappedElement {
	FComponentReference ComponentReference; // 0x0
	int32_t TransformIndex; // 0x28
	FName TransformName; // 0x2c
	ERigElementType ElementType; // 0x34
	FName ElementName; // 0x38
	EControlRigComponentMapDirection Direction; // 0x40
	FTransform Offset; // 0x50
	float Weight; // 0x80
	EControlRigComponentSpace Space; // 0x84
	USceneComponent* SceneComponent; // 0x88
	int32_t ElementIndex; // 0x90
	int32_t SubIndex; // 0x94
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FRigUnit_ToRigSpace_Transform : FRigUnit {
	FTransform Transform; // 0x10
	FTransform Global; // 0x40
};

struct FRigElementKey {
	ERigElementType Type; // 0x0
	FName Name; // 0x4
};

struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	FTransform MeshTransform; // 0xd0
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	FVector TwistAxis; // 0x78
	FVector PoleAxis; // 0x84
	EControlRigAnimEasingType TwistEaseType; // 0x90
	float Weight; // 0x94
	bool bPropagateToChildren; // 0x98
	FRigUnit_TwistBones_WorkData WorkData; // 0xa0
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase {
	FQuat Value; // 0x10
	bool bEnabled; // 0x20
	float Thickness; // 0x24
	float Scale; // 0x28
	FName BoneSpace; // 0x2c
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

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FControlRigDrawInstruction {
	FName Name; // 0x0
	EControlRigDrawSettings PrimitiveType; // 0x8
	TArray<FVector> Positions; // 0x10
	FLinearColor Color; // 0x20
	float Thickness; // 0x30
	FTransform Transform; // 0x40
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FMOTableRowCladeGift : FTableRowBase {
	FText sName; // 0x8
	FText sDescription; // 0x20
	FText sUseDescription; // 0x38
	FString sCladeSkillName; // 0x50
	FString sTriggerBuff; // 0x60
	UTexture2D* sCladeButtonTexture; // 0x70
	UTexture2D* sSlotIconTexture; // 0x78
};

struct FMOCharacterTitle : FTableRowBase {
	FText Title; // 0x8
	FText Description; // 0x20
	ETitlePlacement ETitlePlacement; // 0x38
	FString steamStatName; // 0x40
	UTexture2D* pImage; // 0x50
	int32_t progressNeeded; // 0x58
	int32_t currentProgress; // 0x5c
	int32_t iTitelIndex; // 0x60
	bool Hidden; // 0x64
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorVector_Target> Targets; // 0xb0
	FVector Output; // 0xc0
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase {
	bool A; // 0x8
	bool B; // 0x9
	bool Result; // 0xa
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
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

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase {
	FRigElementKeyCollection Collection; // 0x8
	int32_t Index; // 0x18
	FRigElementKey Item; // 0x1c
};

struct FRigVMInstruction {
	uint64_t ByteCodeIndex; // 0x0
	ERigVMOpCode OpCode; // 0x8
	char OperandAlignment; // 0x9
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
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

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable {
	TArray<FCRSimPoint> Points; // 0x68
	TArray<FCRSimLinearSpring> Links; // 0x78
	TArray<FCRSimPointForce> Forces; // 0x88
	TArray<FCRSimSoftCollision> CollisionVolumes; // 0x98
	float SimulatedStepsPerSecond; // 0xa8
	ECRSimPointIntegrateType IntegratorType; // 0xac
	float VerletBlend; // 0xb0
	TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0xb8
	bool bLimitLocalPosition; // 0xc8
	bool bPropagateToChildren; // 0xc9
	FVector PrimaryAimAxis; // 0xcc
	FVector SecondaryAimAxis; // 0xd8
	FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xf0
	FCRFourPointBezier Bezier; // 0x140
	FRigUnit_PointSimulation_WorkData WorkData; // 0x170
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FFurLod {
	float ScreenSize; // 0x0
	int32_t LayerCount; // 0x4
	int32_t Lod; // 0x8
	bool PhysicsEnabled; // 0xc
	bool DisableMorphTargets; // 0xd
};

struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase {
	FVector A; // 0x8
	FVector B; // 0x14
	FQuat Result; // 0x20
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FRigUnit_StartsWith : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Start; // 0x10
	bool Result; // 0x18
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty {
	FPoseLink Source; // 0x58
	TMap<FName, uint16_t> ControlRigBoneMapping; // 0x68
	TMap<FName, uint16_t> ControlRigCurveMapping; // 0xb8
	TMap<FName, uint16_t> InputToCurveMappingUIDs; // 0x108
	TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer; // 0x158
	FControlRigIOSettings InputSettings; // 0x160
	FControlRigIOSettings OutputSettings; // 0x162
	bool bExecute; // 0x164
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FRigUnit_BinaryVectorOp : FRigUnit {
	FVector Argument0; // 0x8
	FVector Argument1; // 0x14
	FVector Result; // 0x20
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FCachedRigElement {
	FRigElementKey Key; // 0x0
	uint16_t Index; // 0xc
	int32_t ContainerVersion; // 0x10
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
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

struct FControlRigGizmoDefinition {
	FName GizmoName; // 0x0
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x8
	FTransform Transform; // 0x30
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

struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50
	ESphericalLimitType LimitType; // 0x54
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
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

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorQuat_Target> Targets; // 0xb0
	FQuat Output; // 0xc0
};

struct FMOAnimNode_RandomPlayer : FAnimNode_Base {
	UMODataAssetAnimationRandomSet* RandomSequenceSet; // 0x10
	FRandomPlayerSequenceEntry DefaultEntry; // 0x18
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x68
	float MinimumPlayTimeBeforeRandomizing; // 0x78
	float MaximumPlayTimeBeforeRandomizing; // 0x7c
	bool bRandomizedPlayActive; // 0x80
	int32_t RandomStreamSeed; // 0x84
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FRigUnit_LiveLinkEvaluteFrameTransform : FRigUnit_LiveLinkBase {
	FName SubjectName; // 0x8
	bool bDrawDebug; // 0x10
	FLinearColor DebugColor; // 0x14
	FTransform DebugDrawOffset; // 0x30
	FTransform Transform; // 0x60
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FCRFourPointBezier Bezier; // 0x78
	EControlRigCurveAlignment Alignment; // 0xa8
	float Minimum; // 0xac
	float Maximum; // 0xb0
	int32_t SamplingPrecision; // 0xb4
	FVector PrimaryAxis; // 0xb8
	FVector SecondaryAxis; // 0xc4
	FVector PoleVectorPosition; // 0xd0
	TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0
	EControlRigAnimEasingType RotationEaseType; // 0xf0
	float Weight; // 0xf4
	bool bPropagateToChildren; // 0xf8
	FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100
	FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FRigUnit_SetControlVisibility : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	FString Pattern; // 0x78
	bool bVisible; // 0x88
	TArray<FCachedRigElement> CachedControlIndices; // 0x90
};

struct FRigUnit_DrawContainerSetColor : FRigUnitMutable {
	FName InstructionName; // 0x68
	FLinearColor Color; // 0x70
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
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

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
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

struct FRigUnit_ToRigSpace_Rotation : FRigUnit {
	FQuat Rotation; // 0x10
	FQuat Global; // 0x20
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
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

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FMOTableRowDecoration : FTableRowBase {
	TSoftObjectPtr<UMaterialInstance> pPreviewModeMaterial; // 0x8
	TSoftObjectPtr<UStaticMesh> pPreviewModeStaticMesh; // 0x30
	TSoftClassPtr<UObject> cPreviewModeActor; // 0x58
	TSoftClassPtr<UObject> cDecorationActor; // 0x80
	TSoftObjectPtr<USoundCue> pPlacementSound; // 0xa8
	TArray<TSoftClassPtr<UObject>> HouseTypeWhiteList; // 0xd0
};

struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	ERigUnitDebugTransformMode Mode; // 0xa0
	FLinearColor Color; // 0xa4
	float Thickness; // 0xb4
	float Scale; // 0xb8
	FRigElementKey Space; // 0xbc
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
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

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FControlRigComponentMappedCurve {
	FName Source; // 0x0
	FName Target; // 0x8
};

struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	bool Result; // 0x30
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float C; // 0x10
	float AlphaAngle; // 0x14
	float BetaAngle; // 0x18
	float GammaAngle; // 0x1c
	bool bValid; // 0x20
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FMOCraftingPresetSaves {
	FString sName; // 0x0
	FString sData; // 0x10
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FRigUnit_NoiseVector : FRigUnit_MathBase {
	FVector Position; // 0x8
	FVector Speed; // 0x14
	FVector Frequency; // 0x20
	float Minimum; // 0x2c
	float Maximum; // 0x30
	FVector Result; // 0x34
	FVector Time; // 0x40
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

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase {
	FVector TargetValue; // 0x8
	FVector InitialValue; // 0x14
	float Blend; // 0x20
	bool bIntegrateDeltaTime; // 0x24
	FVector Result; // 0x28
	FVector AccumulatedValue; // 0x34
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FMOAnimNode_CachedFacePose : FMOAnimNode_CachedPose {
	ECachedFacePoseCurveSource CurveSource; // 0x40
	UObject* FaceDriverSource; // 0x48
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FMathRBFInterpolateQuatColor_Target {
	FQuat Target; // 0x0
	FLinearColor Value; // 0x10
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	FQuat Result; // 0x20
};

struct FRigVMRegisterOffset {
	TArray<int32_t> Segments; // 0x0
	ERigVMRegisterType Type; // 0x10
	FName CPPType; // 0x14
	UScriptStruct* ScriptStruct; // 0x20
	UScriptStruct* ParentScriptStruct; // 0x28
	int32_t ArrayIndex; // 0x30
	uint16_t ElementSize; // 0x34
	FString CachedSegmentPath; // 0x38
};

struct FMOBuildableStates {
	UStaticMesh* pStaticMesh; // 0x0
	UDestructibleMesh* pDestructibleMesh; // 0x8
	float fMinHealthPct; // 0x10
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
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

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FKavajSoftBodyDefinitions {
	FBoneReference PressureOriginBone; // 0x0
	TArray<FBoneDefinition> SimulatedBones; // 0x10
	TArray<FSpringDefinition> SimulatedSprings; // 0x20
	TArray<FSpringDefinition> SimulatedAngularSprings; // 0x30
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
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

struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	bool bEnableImpactDamage; // 0x8
	float ImpactDamage; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
	bool bCustomImpactResistance; // 0x14
	float ImpactResistance; // 0x18
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase {
	FQuat Input; // 0x10
	FVector TwistAxis; // 0x20
	FQuat Swing; // 0x30
	FQuat Twist; // 0x40
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FS_MO2_Weather {
	float Windstrength_2_588266D24B3B6D23F249B3BFEEF98EFB; // 0x0
	FLinearColor Wind_5_5C0A143F44D615B5E6755AA81DC00EEC; // 0x4
	int32_t TimeSpeed_8_6B0A06EB4BC5DF882BB6F69A5C9798C8; // 0x14
};

struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase {
	float Value; // 0x8
	FRuntimeFloatCurve Curve; // 0x10
	float SourceMinimum; // 0x98
	float SourceMaximum; // 0x9c
	float TargetMinimum; // 0xa0
	float TargetMaximum; // 0xa4
	float Result; // 0xa8
};

struct FRigUnit_PropagateTransform : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	bool bRecomputeGlobal; // 0x74
	bool bApplyToChildren; // 0x75
	bool bRecursive; // 0x76
	FCachedRigElement CachedIndex; // 0x78
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase {
	float Value; // 0x8
	int32_t Result; // 0xc
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
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

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
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

struct FLiveLinkClearSubject {
	FName SubjectName; // 0x0
};

struct FMathRBFInterpolateQuatVector_Target {
	FQuat Target; // 0x0
	FVector Value; // 0x10
};

struct FMathRBFInterpolateQuatFloat_Target {
	FQuat Target; // 0x0
	float Value; // 0x10
};

struct FProviderPollResult {
	FString Name; // 0x10
	FString MachineName; // 0x20
	double MachineTimeOffset; // 0x30
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FMOTraceObstacleHitResult {
	bool bHitObstacle; // 0x0
	bool bHitCharacter; // 0x1
	bool bHitLandscape; // 0x2
	float DistanceToObstacle; // 0x4
	float DistanceToObstacle_Normalized; // 0x8
	FVector SphereHitLocation; // 0xc
	FVector SphereHitNormal; // 0x18
	FVector TraceWorldDirection; // 0x24
	float TraceRelativeAngleYaw; // 0x30
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FRigSpaceHierarchy {
	TArray<FRigSpace> Spaces; // 0x20
	TMap<FName, int32_t> NameToIndexMapping; // 0x30
	TArray<FName> Selection; // 0x80
};

struct FRigVMParameter {
	ERigVMParameterType Type; // 0x0
	FName Name; // 0x4
	int32_t RegisterIndex; // 0xc
	FString CPPType; // 0x10
	UScriptStruct* ScriptStruct; // 0x20
	FName ScriptStructPath; // 0x28
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	EAxis Axis; // 0x14
	EControlRigClampSpatialMode Type; // 0x15
	float Minimum; // 0x18
	float Maximum; // 0x1c
	FTransform Space; // 0x20
	bool bDrawDebug; // 0x50
	FLinearColor DebugColor; // 0x54
	float DebugThickness; // 0x64
	FVector Result; // 0x68
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
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

struct FFBIKEndEffector {
	FRigElementKey Item; // 0x0
	FVector Position; // 0xc
	float PositionAlpha; // 0x18
	int32_t PositionDepth; // 0x1c
	FQuat Rotation; // 0x20
	float RotationAlpha; // 0x30
	int32_t RotationDepth; // 0x34
	float Pull; // 0x38
};

struct FRigControlHierarchy {
	TArray<FRigControl> Controls; // 0x98
	TMap<FName, int32_t> NameToIndexMapping; // 0xa8
	TArray<FName> Selection; // 0xf8
};

struct FLiveLinkPingMessage {
	FGuid PollRequest; // 0x0
	int32_t LiveLinkVersion; // 0x10
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
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

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable {
	int32_t NumberOfMeasurements; // 0x68
	FString Prefix; // 0x70
	float AccumulatedTime; // 0x80
	int32_t MeasurementsLeft; // 0x84
};

struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase {
	FQuat Value; // 0x10
	FQuat Delta; // 0x20
	FQuat PreviousValue; // 0x30
	FQuat Cache; // 0x40
};

struct FSnowyFoggyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_66_BE5499A94D930F2DA3F724838ADFAA06; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_D842D2C94DD15C251A89D0B6FE3C7A2F; // 0x48
};

struct FGuardianTestResult {
	bool IsTriggering; // 0x0
	ETrackedDeviceType DeviceType; // 0x1
	float ClosestDistance; // 0x4
	FVector ClosestPoint; // 0x8
	FVector ClosestPointNormal; // 0x14
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
	int32_t Int; // 0x10
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FConstraintTarget {
	FTransform Transform; // 0x0
	float Weight; // 0x30
	bool bMaintainOffset; // 0x34
	FTransformFilter Filter; // 0x35
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x68
	float Weight; // 0x78
	float WeightMinimum; // 0x7c
	float WeightMaximum; // 0x80
	EControlRigModifyBoneMode Mode; // 0x84
	FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x88
};

struct FMOTableRowExportBuild : FTableRowBase {
	FString Strength; // 0x8
	FString Dexterity; // 0x18
	FString Intelligence; // 0x28
	FString Constitution; // 0x38
	FString Psyche; // 0x48
	FString Size; // 0x58
	FString Age; // 0x68
	TArray<FString> vEquipment; // 0x78
	TArray<FString> vSkills; // 0x88
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FRigUnit_PointSimulation_WorkData {
	FCRSimPointContainer Simulation; // 0x0
	TArray<FCachedRigElement> BoneIndices; // 0x78
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FRigUnit_ItemReplace : FRigUnit_ItemBase {
	FRigElementKey Item; // 0x8
	FName Old; // 0x14
	FName New; // 0x1c
	FRigElementKey Result; // 0x24
};

struct FMOAvatarMovementManager {
	FMOAvatarMovementInterpolation PlayerMovementInterpolation; // 0x0
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FCharacterCompositionPart {
	FName Parent; // 0x0
	FName AttachSocket; // 0x8
	FTransform AttachOffset; // 0x10
	bool bIgnoreParentScale; // 0x40
	bool bVisible; // 0x41
	bool bKeepAssetsInMemoryWhileHidden; // 0x42
	bool bUseAttachParentBound; // 0x43
	bool bOwnerNoSee; // 0x44
	bool bReceivesDecals; // 0x45
	bool bGenerateOverlapEvents; // 0x46
	ECollisionEnabled CollisionEnabled; // 0x47
	ECharacterCompositionPartType Type; // 0x48
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x50
	TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x78
	TSoftClassPtr<UObject> AnimationInstance; // 0xa0
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0xc8
	TSoftClassPtr<UObject> ChildActorBlueprint; // 0xf0
	bool bIsLoaded; // 0x118
	USkeletalMesh* LoadedSkeletalMesh; // 0x120
	UPhysicsAsset* LoadedPhysicsAsset; // 0x128
	UAnimInstance* LoadedAnimationInstance; // 0x130
	UStaticMesh* LoadedStaticMesh; // 0x138
	AActor* LoadedChildActorBlueprint; // 0x140
	TWeakObjectPtr<USceneComponent> ActorSceneComponent; // 0x148
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FRigUnit_DebugTransform : FRigUnit_DebugBase {
	FTransform Transform; // 0x10
	ERigUnitDebugTransformMode Mode; // 0x40
	FLinearColor Color; // 0x44
	float Thickness; // 0x54
	float Scale; // 0x58
	FName Space; // 0x5c
	FTransform WorldOffset; // 0x70
	bool bEnabled; // 0xa0
};

struct FRigVMStatistics {
	uint32_t BytesForCDO; // 0x0
	uint32_t BytesPerInstance; // 0x4
	FRigVMMemoryStatistics LiteralMemory; // 0x8
	FRigVMMemoryStatistics WorkMemory; // 0x14
	uint32_t BytesForCaching; // 0x20
	FRigVMByteCodeStatistics ByteCode; // 0x24
};

struct FMOCollisionPoolAttachmentInfo {
	float EnableCollisionRadius; // 0x0
	float DisableCollisionAfterExtraRadius; // 0x4
	TArray<FMOCollisionPoolShapeAttachmentInfo> Shapes; // 0x8
};

struct FLandmassBrushEffectsList {
	FBrushEffectBlurring Blurring; // 0x0
	FBrushEffectCurlNoise CurlNoise; // 0x8
	FBrushEffectDisplacement Displacement; // 0x18
	FBrushEffectSmoothBlending SmoothBlending; // 0x40
	FBrushEffectTerracing Terracing; // 0x48
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FRigUnit_KalmanFloat : FRigUnit_SimBase {
	float Value; // 0x8
	int32_t BufferSize; // 0xc
	float Result; // 0x10
	TArray<float> Buffer; // 0x18
	int32_t LastInsertIndex; // 0x28
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
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

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
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

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
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

struct FConstraintNodeData {
	FTransform RelativeParent; // 0x0
	FConstraintOffset ConstraintOffset; // 0x30
	FName LinkedNode; // 0x90
	TArray<FTransformConstraint> Constraints; // 0x98
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FLandmassTerrainCarvingSettings {
	EBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FLandmassFalloffSettings FalloffSettings; // 0x4
	FLandmassBrushEffectsList Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FRigUnit_ToSwingAndTwist : FRigUnit {
	FQuat Input; // 0x10
	FVector TwistAxis; // 0x20
	FQuat Swing; // 0x30
	FQuat Twist; // 0x40
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FWaterBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
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

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FRigUnit_ToWorldSpace_Transform : FRigUnit {
	FTransform Transform; // 0x10
	FTransform World; // 0x40
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; // 0x8
	bool bApplyBoneFilter; // 0x9
	FInputBlendPose BoneFilter; // 0x10
	FMovieSceneFloatChannel Weight; // 0x20
	FMovieSceneEvaluationOperand Operand; // 0xc0
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FRigUnit_BlendTransform : FRigUnit {
	FTransform Source; // 0x10
	TArray<FBlendTarget> Targets; // 0x40
	FTransform Result; // 0x50
};

struct FMOSingleCurveRange : FMOCurveEncodingBase {
	FName CurveName; // 0x20
};

struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float Weight; // 0xb4
	bool bPropagateToChildren; // 0xb8
	int32_t MaxIterations; // 0xbc
	FRigUnit_FABRIK_WorkData WorkData; // 0xc0
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
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

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	TArray<FConstraintNodeData> UserData; // 0x78
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable {
	TArray<FVector> Points; // 0x68
	FLinearColor Color; // 0x78
	float Thickness; // 0x88
	FName Space; // 0x8c
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FWaterBodyHeightmapSettings {
	EWaterBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FWaterFalloffSettings FalloffSettings; // 0x4
	FWaterBrushEffects Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase {
	int32_t Value; // 0x8
	float Result; // 0xc
};

struct FRigUnit_EndsWith : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Ending; // 0x10
	bool Result; // 0x18
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FLoginServerInfo {
	FString Name; // 0x0
	FString PersistentLevelName; // 0x10
	FString IP; // 0x20
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
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

struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
	int32_t Int; // 0x10
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FRigUnit_ConvertRotationToVector : FRigUnit {
	FRotator Input; // 0x8
	FVector Result; // 0x14
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingID; // 0x0
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

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FRigUnit_NameReplace : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Old; // 0x10
	FName New; // 0x18
	FName Result; // 0x20
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
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

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78
	EControlRigAnimEasingType RotationEaseType; // 0x88
	float Weight; // 0x8c
	bool bPropagateToChildren; // 0x90
	FRigUnit_DistributeRotation_WorkData WorkData; // 0x98
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

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	ERigUnitDebugTransformMode Mode; // 0xa0
	FLinearColor Color; // 0xa4
	float Thickness; // 0xb4
	float Scale; // 0xb8
	FName Space; // 0xbc
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FWeaponSocketSimulationPair {
	FName WeaponJoint; // 0x0
	FName EquipmentJoint; // 0x8
	bool bBlendPoses; // 0x10
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

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FMOTableRowStaticMesh : FTableRowBase {
	TSoftClassPtr<UObject> cClass; // 0x8
	TSoftObjectPtr<UStaticMesh> pStaticMeshEditor; // 0x30
	bool bUseBleuprintCollisionSettings; // 0x58
	bool bBlockPlayers; // 0x59
	bool bBlockTargetInEther; // 0x5a
	bool bVisibleInEther; // 0x5b
	bool bVisibleInLiving; // 0x5c
	bool bCombatTarget; // 0x5d
	bool bMoveToFloor; // 0x5e
	bool bCanBeStoodOn; // 0x5f
	FText sUseString; // 0x60
	float fHoldUseTimer; // 0x78
	float fAtlasUseDistance; // 0x7c
	FText sDisplayName; // 0x80
	FText sHelpDescription; // 0x98
	bool bCanTakeDamage; // 0xb0
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FMOAnimationSequenceAttacks {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	UAnimSequenceBase* RunningAttack; // 0x8
	UAnimSequenceBase* ChargeAttack; // 0x10
	UAnimSequenceBase* RangedAttack; // 0x18
	TArray<UAnimSequenceBase*> StandingAttacks; // 0x20
	UAnimSequenceBase* StandingAttackLeft; // 0x30
	UAnimSequenceBase* StandingAttackRight; // 0x38
	UAnimSequenceBase* StandingAttackThrust; // 0x40
	UAnimSequenceBase* StandingAttackOverhead; // 0x48
	UAnimSequenceBase* SelfHealAttack; // 0x50
	UAnimSequenceBase* MercyKillAttack; // 0x58
	TArray<UAnimSequenceBase*> vCustomAttacks; // 0x60
};

struct FRigUnit_AnimEasingType : FRigUnit_AnimBase {
	EControlRigAnimEasingType Type; // 0x8
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
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

struct FBoneReference {
	FName BoneName; // 0x0
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

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
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

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
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

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FRigUnit_PointSimulation_BoneTarget {
	FName Bone; // 0x0
	int32_t TranslationPoint; // 0x8
	int32_t PrimaryAimPoint; // 0xc
	int32_t SecondaryAimPoint; // 0x10
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FMOObstacleAvoidanceParameters {
	float CenterPointSmoothedOffset; // 0x0
	float AngularVelocity; // 0x4
	float TraceAngleSpread; // 0x8
	FRotator TargetVelocityRotatorSmoothed; // 0xc
	float BreakForWaterFactor; // 0x18
	float BreakForObstacleFactor; // 0x1c
	float TargetBreakFactorForObstacleSmoothed; // 0x20
	bool bDrawDebug; // 0x24
	float DistanceCheckMultiplier; // 0x28
	float TraceGroundClearanceZOffset; // 0x2c
	float CenterPointRandomMagnitude; // 0x30
	float CenterPointSmoothedOffsetSpeed; // 0x34
	float CenterPointMaxOffsetMagnitude; // 0x38
	float TraceYawStepSize; // 0x3c
	float TraceAngleSpreadMin_LowSpeed; // 0x40
	float TraceAngleSpreadMax_LowSpeed; // 0x44
	float TraceAngleSpreadMin_HighSpeed; // 0x48
	float TraceAngleSpreadMax_HighSpeed; // 0x4c
	float TraceAngleSpread_LowSpeed; // 0x50
	float TraceAngleSpread_HighSpeed; // 0x54
	float TraceAngleSpreadSmoothSpeed; // 0x58
	float TraceFollowVelocityRotatorSpeed; // 0x5c
	float AvoidanceToAngularVelocityContributionStrength; // 0x60
	float AngularVelocityInterpSpeed; // 0x64
	float MaxAngularVelocityMagnitude; // 0x68
	float LowestBreakFactorByDistanceToCenterObstacle; // 0x6c
	float LowestBreakFactorForAnyObstacle; // 0x70
	float SmoothedBreakFactorSpeed; // 0x74
	float IgnoreWaterShallowerThanDepth; // 0x78
	float MinimumDistanceToWall; // 0x7c
	float MovementSweepCapsuleReduction; // 0x80
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	FLiveLinkSubjectName LiveLinkSubjectName; // 0x20
	ULiveLinkRetargetAsset* RetargetAsset; // 0x28
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FWaterFalloffSettings {
	EWaterBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
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

struct FFBIKConstraintOption {
	FRigElementKey Item; // 0x0
	bool bEnabled; // 0xc
	bool bUseStiffness; // 0xd
	FVector LinearStiffness; // 0x10
	FVector AngularStiffness; // 0x1c
	bool bUseAngularLimit; // 0x28
	FFBIKBoneLimit AngularLimit; // 0x2c
	bool bUsePoleVector; // 0x3c
	EPoleVectorOption PoleVectorOption; // 0x3d
	FVector PoleVector; // 0x40
	FRotator OffsetRotation; // 0x4c
};

struct FMOTableRowSkill : FTableRowBase {
	UTexture2D* pIcon; // 0x8
	FText sDisplayName; // 0x10
	FText sDescription; // 0x28
	FText sUseDescription; // 0x40
	FString sTriggerBuff; // 0x58
	bool bTEMP_DONT_SHOW_IN_TREE; // 0x68
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

struct FMOWeatherZoneAsyncLocationUpdate {
	int32_t WeatherZoneIndex; // 0x0
	FVector DesiredLocation; // 0x4
	TArray<FMOWeatherZoneAsyncEntry> AsyncEntries; // 0x10
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FLiveLinkPropertyData {
	FName PropertyName; // 0x0
	TArray<FMovieSceneFloatChannel> FloatChannel; // 0x8
	TArray<FMovieSceneStringChannel> StringChannel; // 0x18
	TArray<FMovieSceneIntegerChannel> IntegerChannel; // 0x28
	TArray<FMovieSceneBoolChannel> BoolChannel; // 0x38
	TArray<FMovieSceneByteChannel> ByteChannel; // 0x48
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x10
	FRotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FControlRigComponentMappedBone {
	FName Source; // 0x0
	FName Target; // 0x8
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FRigUnit_GetWorldTime : FRigUnit_AnimBase {
	float Year; // 0x8
	float Month; // 0xc
	float Day; // 0x10
	float WeekDay; // 0x14
	float Hours; // 0x18
	float Minutes; // 0x1c
	float Seconds; // 0x20
	float OverallSeconds; // 0x24
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
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

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FRigElement {
	FName Name; // 0x8
	int32_t Index; // 0x10
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
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

struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase {
	float TargetValue; // 0x8
	float InitialValue; // 0xc
	float Blend; // 0x10
	bool bIntegrateDeltaTime; // 0x14
	float Result; // 0x18
	float AccumulatedValue; // 0x1c
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
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

struct FRepRootMotionMontage {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	float Position; // 0x10
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

struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase {
	bool Condition; // 0x8
	FVector IfTrue; // 0xc
	FVector IfFalse; // 0x18
	FVector Result; // 0x24
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FOculusMR_PlaneMeshTriangle {
	FVector Vertex0; // 0x0
	FVector2D UV0; // 0xc
	FVector Vertex1; // 0x14
	FVector2D UV1; // 0x20
	FVector Vertex2; // 0x28
	FVector2D UV2; // 0x34
};

struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase {
	FCRFourPointBezier Bezier; // 0x8
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FAIChatData {
	FText sText; // 0x0
	USoundCue* pSoundCueMale; // 0x18
	USoundCue* pSoundCueFemale; // 0x20
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable {
	FCRFourPointBezier Bezier; // 0x68
	float MinimumU; // 0x98
	float MaximumU; // 0x9c
	FLinearColor Color; // 0xa0
	float Thickness; // 0xb0
	int32_t Detail; // 0xb4
	FName Space; // 0xb8
	FTransform WorldOffset; // 0xc0
	bool bEnabled; // 0xf0
};

struct FMONamedCurve2D {
	FText Title; // 0x0
	FName X; // 0x18
	FName Y; // 0x20
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
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

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FRigUnit_FitChainToCurve_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FLinearColor CurveColor; // 0x8
	FLinearColor SegmentsColor; // 0x18
	FTransform WorldOffset; // 0x30
};

struct FRigUnit_BinaryFloatOp : FRigUnit {
	float Argument0; // 0x8
	float Argument1; // 0xc
	float Result; // 0x10
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

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FRigUnit_SetMultiControlVector2D_Entry {
	FName Control; // 0x0
	FVector2D Vector; // 0x8
};

struct FHmdUserProfileField {
	FString FieldName; // 0x0
	FString FieldValue; // 0x10
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

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FIntegerParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneIntegerChannel ParameterCurve; // 0x8
};

struct FRigHierarchyContainer {
	FRigBoneHierarchy BoneHierarchy; // 0x0
	FRigSpaceHierarchy SpaceHierarchy; // 0x98
	FRigControlHierarchy ControlHierarchy; // 0x128
	FRigCurveContainer CurveContainer; // 0x230
	int32_t Version; // 0x2c8
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

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
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

struct FS_MO2_Moon {
	FVector MoonDirection_2_3913F5AC4F505F3640E2F0966A61A35F; // 0x0
	float MoonIntensity_5_3A772C3140D8C419EA101886C06CD59D; // 0xc
	FLinearColor MoonColor_9_372D4D95434463E822D0CAB4688198C4; // 0x10
	float MoonContrast_32_6A8A585641C796472F824788EF54EF60; // 0x20
	float MoonRadius_12_F2535AE7447497FECF381ABD34F114AA; // 0x24
	float MoonRot_30_FB2F8527453393B9935589B8A00B3308; // 0x28
	float MoonFallOff_14_47BE1B2E42C4D4DD2E90729127A0699C; // 0x2c
	float MoonBloomFalloff_16_D3A631B841563463AE6A2593F8BFD444; // 0x30
	float MoonBloomStrength_18_98171CEB414AF0723B26AE92B9460A43; // 0x34
	float MoonBloomScale_20_A11F73124DF77C1F6D8852AE595C14B3; // 0x38
	float MoonBloomThreshold_23_4C75D46E4044BD154D131B8C669F33B2; // 0x3c
	FColor MoonBloomTint_27_F7F88CB5455EC6D1D98EA2B1557D07E2; // 0x40
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FMOAnimNode_PelvisSwingAdjustment : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink IdlePoseLink; // 0xc8
	float PlayerPitch; // 0xd8
	float ViewUpDownTranslationScale; // 0xdc
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase {
	FTransform Transform; // 0x10
	FVector Direction; // 0x40
	FVector Result; // 0x4c
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FMOTableRowBuffs : FTableRowBase {
	UTexture2D* pIcon; // 0x8
	UTexture2D* pFrame; // 0x10
	USoundCue* pAddedSound; // 0x18
	USoundCue* pRemovedSound; // 0x20
	FText sDescription; // 0x28
	FText sDisplayName; // 0x40
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

struct FRigUnit_LiveLinkGetTransformByName : FRigUnit_LiveLinkBase {
	FSubjectFrameHandle SubjectFrame; // 0x8
	FName TransformName; // 0x20
	EBoneGetterSetterMode Space; // 0x28
	FTransform Transform; // 0x30
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FRigPoseElement {
	FCachedRigElement Index; // 0x0
	FTransform GlobalTransform; // 0x20
	FTransform LocalTransform; // 0x50
	float CurveValue; // 0x80
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable {
	FName InstructionName; // 0x68
	float Thickness; // 0x70
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

struct FMOShieldData {
	EEquipmentGroup eEquipmentType; // 0x0
	int32_t iBaseTypeIndex; // 0x4
	int32_t iBaseResourceIndex; // 0x8
	EShieldGroup eBaseShieldGroup; // 0xc
	EResourceGroup eBaseResourceGroup; // 0xd
	int32_t iFrameTypeIndex; // 0x10
	int32_t iFrameResourceIndex; // 0x14
	EResourceGroup eFrameResourceGroup; // 0x18
	EEquipmentQuality EEquipmentQuality; // 0x19
	FString sParamString; // 0x20
};

struct FRigUnit_ModifyBoneTransforms_PerBone {
	FName Bone; // 0x0
	FTransform Transform; // 0x10
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
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

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FSplinePoint {
	float InputKey; // 0x0
	FVector Position; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	FRotator Rotation; // 0x28
	FVector Scale; // 0x34
	ESplinePointType Type; // 0x40
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FRigVMByteCodeStatistics {
	uint32_t InstructionCount; // 0x0
	uint32_t DataBytes; // 0x4
};

struct FRigUnit_MapRange_Float : FRigUnit {
	float Value; // 0x8
	float MinIn; // 0xc
	float MaxIn; // 0x10
	float MinOut; // 0x14
	float MaxOut; // 0x18
	float Result; // 0x1c
};

struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Result; // 0x14
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FMOPetData {
	FString sPetName; // 0x0
	UTexture2D* pIcon; // 0x10
	int32_t iPetLevel; // 0x18
	int32_t iPetLevelXP; // 0x1c
	int32_t iPetLoyalty; // 0x20
	int32_t iPetHealth; // 0x24
	int32_t iPetHealthMax; // 0x28
	int32_t iPetHunger; // 0x2c
	int32_t iStableIndex; // 0x30
	FString sPetState; // 0x38
	FString sPetGuid; // 0x48
};

struct FLiveLinkSubSectionData {
	TArray<FLiveLinkPropertyData> Properties; // 0x0
};

struct FRigUnit_SetBoneRotation : FRigUnitMutable {
	FName Bone; // 0x68
	FQuat Rotation; // 0x70
	EBoneGetterSetterMode Space; // 0x80
	float Weight; // 0x84
	bool bPropagateToChildren; // 0x88
	FCachedRigElement CachedBone; // 0x8c
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FRigUnit_SetMultiControlInteger_Entry {
	FName Control; // 0x0
	int32_t IntegerValue; // 0x8
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

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FLandmassFalloffSettings {
	EBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
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

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionId; // 0x38
	float WorldTimeSeconds; // 0x48
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

struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase {
	int32_t Value; // 0x8
	int32_t Minimum; // 0xc
	int32_t Maximum; // 0x10
	int32_t Result; // 0x14
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FControlRigIOSettings {
	bool bUpdatePose; // 0x0
	bool bUpdateCurves; // 0x1
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
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

struct FRigUnit_GetRelativeBoneTransform : FRigUnit {
	FName Bone; // 0x8
	FName Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedBone; // 0x50
	FCachedRigElement CachedSpace; // 0x64
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FMOArrowData {
	EEquipmentGroup eEquipmentType; // 0x0
	int32_t iBaseIndex; // 0x4
	int32_t iHeadIndex; // 0x8
	int32_t iBaseResourceIndex; // 0xc
	EResourceGroup eBaseResourceGroup; // 0x10
	EEquipmentQuality EEquipmentQuality; // 0x11
	FString sParamString; // 0x18
};

struct FMOLevelStreamingGroup {
	ELevelStreamingGroup Group; // 0x0
	TArray<FMOLevelStreamingInfo> vLevels; // 0x8
	bool bIsVisible; // 0x18
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

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
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

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase {
	FEulerTransform EulerTransform; // 0x8
	FTransform Result; // 0x30
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FMODefinitionAssets {
	bool bAssetsAddedToRootSet; // 0x0
	FSoftObjectPath pPlayersPath; // 0x8
	FSoftObjectPath pArmorsPath; // 0x20
	FSoftObjectPath pResourcesPath; // 0x38
	FSoftObjectPath pWeaponHeadsPath; // 0x50
	FSoftObjectPath pWeaponHandlesPath; // 0x68
	FSoftObjectPath pShieldsPath; // 0x80
	FSoftObjectPath pBowsPath; // 0x98
	FSoftObjectPath pArrowsPath; // 0xb0
	FSoftObjectPath pMagicPath; // 0xc8
	FSoftObjectPath pPetEquipmentPath; // 0xe0
	FSoftObjectPath pFishingRodsPath; // 0xf8
	UMODataAssetPlayerDefinitions* pPlayers; // 0x110
	UMODataAssetArmorDefinitions* pArmors; // 0x118
	UMODataAssetResourceDefinitions* pResources; // 0x120
	UMODataAssetHeadDefinitions* pWeaponHeads; // 0x128
	UMODataAssetHandleDefinitions* pWeaponHandles; // 0x130
	UMODataAssetShieldDefinitions* pShields; // 0x138
	UMODataAssetBowDefinitions* pBows; // 0x140
	UMODataAssetFishingRodDefinitions* pFishingRods; // 0x148
	UMODataAssetArrowDefinitions* pArrows; // 0x150
	UMODataAssetMagicDefinitions* pMagic; // 0x158
	UMODataAssetPetEquipmentDefinitions* pPetEquipment; // 0x160
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

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
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

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FRigUnit_AlphaInterp : FRigUnit_SimBase {
	float Value; // 0x8
	float Scale; // 0xc
	float Bias; // 0x10
	bool bMapRange; // 0x14
	FInputRange InRange; // 0x18
	FInputRange OutRange; // 0x20
	bool bClampResult; // 0x28
	float ClampMin; // 0x2c
	float ClampMax; // 0x30
	bool bInterpResult; // 0x34
	float InterpSpeedIncreasing; // 0x38
	float InterpSpeedDecreasing; // 0x3c
	float Result; // 0x40
	FInputScaleBiasClamp ScaleBiasClamp; // 0x44
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FRigUnit_SpringIK_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FLinearColor Color; // 0x8
	FTransform WorldOffset; // 0x20
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
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

struct FRigUnit_SetControlInteger : FRigUnitMutable {
	FName Control; // 0x68
	int32_t Weight; // 0x70
	int32_t IntegerValue; // 0x74
	FCachedRigElement CachedControlIndex; // 0x78
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

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
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

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FWaterSplineCurveDefaults {
	float DefaultDepth; // 0x0
	float DefaultWidth; // 0x4
	float DefaultVelocity; // 0x8
	float DefaultAudioIntensity; // 0xc
};

struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float Result; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
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

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
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

struct FBoneDefinition {
	FBoneReference Reference; // 0x0
	float SimulateAlpha; // 0x10
	float MaxDistanceAlpha; // 0x14
	float Mass; // 0x18
	float ShapeSpring_k; // 0x1c
	float ShapeSpring_b; // 0x20
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FShieldCraftingInfo_Shield {
	UMODataAssetShield* pDataAssetShield; // 0x20
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
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

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FMOAudioComponentPoolEntry {
	UAudioComponent* AudioComponent; // 0x0
	AMOCharacter* OwningCharacter; // 0x8
};

struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FRigMirrorSettings {
	EAxis MirrorAxis; // 0x0
	EAxis AxisToFlip; // 0x1
	FString OldName; // 0x8
	FString NewName; // 0x18
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FMagicLeapRaycastQueryParams {
	FVector Position; // 0x0
	FVector Direction; // 0xc
	FVector UpVector; // 0x18
	int32_t Width; // 0x24
	int32_t Height; // 0x28
	float HorizontalFovDegrees; // 0x2c
	bool CollideWithUnobserved; // 0x30
	int32_t UserData; // 0x34
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
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

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FRigVMMemoryContainer {
	bool bUseNameMap; // 0x0
	ERigVMMemoryType MemoryType; // 0x1
	TArray<FRigVMRegister> Registers; // 0x8
	TArray<FRigVMRegisterOffset> RegisterOffsets; // 0x18
	TArray<char> Data; // 0x28
	TArray<UScriptStruct*> ScriptStructs; // 0x38
	TMap<FName, int32_t> NameMap; // 0x48
	bool bEncounteredErrorDuringLoad; // 0x98
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Length; // 0x14
	FVector Result; // 0x18
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

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0
	FMovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	FMovieSceneTransformMask mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648
};

struct FRigInfluenceEntryModifier {
	TArray<FRigElementKey> AffectedList; // 0x0
};

struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
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

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FFrameWindowData {
	float fWindowScale; // 0x0
	float fWindowOpacity; // 0x4
	bool bIsBarNumbersVisible; // 0x8
	bool bIsLongterm; // 0x9
};

struct FMOGFurParameters {
	int32_t LayerCount; // 0x0
	float MinScreenSize; // 0x4
	TArray<FFurLod> LODs; // 0x8
	float ShellBias; // 0x18
	float FurLength; // 0x1c
	float MinFurLength; // 0x20
	bool RemoveFacesWithoutSplines; // 0x24
	bool PhysicsEnabled; // 0x25
	float ForceDistribution; // 0x28
	float Stiffness; // 0x2c
	float Damping; // 0x30
	FVector ConstantForce; // 0x34
	float MaxForce; // 0x40
	float MaxForceTorqueFactor; // 0x44
	float ReferenceHairBias; // 0x48
	float HairLengthForceUniformity; // 0x4c
	float MaxPhysicsOffsetLength; // 0x50
	float NoiseStrength; // 0x54
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FMOCharacterTitlePair {
	FMOCharacterTitle TitleData; // 0x0
	UMOCharacterTitleListEntry* TitleWidget; // 0x70
};

struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	UControlRig* ControlRigClass; // 0x170
	UControlRig* ControlRig; // 0x178
	float Alpha; // 0x180
	EAnimAlphaInputType AlphaInputType; // 0x184
	char bAlphaBoolEnabled : 1; // 0x185
	char bSetRefPoseFromSkeleton : 1; // 0x185
	FInputScaleBias AlphaScaleBias; // 0x188
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x190
	FName AlphaCurveName; // 0x1d8
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1e0
	TMap<FName, FName> InputMapping; // 0x210
	TMap<FName, FName> OutputMapping; // 0x260
	int32_t LODThreshold; // 0x360
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

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
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

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FAnimNode_ControlRigInputPose : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
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

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase {
	float Value; // 0x8
	FVector Result; // 0xc
};

struct FMODualCurveRange : FMOCurveEncodingBase {
	FName CurveMinName; // 0x20
	FName CurveMaxName; // 0x2c
	float RangeCutoff; // 0x38
	float CurveMappedOutputValueMin; // 0x3c
	float CurveMappedOutputValueMax; // 0x40
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FMOFullEquipmentData {
	EEquipmentGroup eLeftEquipmentGroup; // 0x0
	EEquipmentGroup eRightEquipmentGroup; // 0x1
	FMOWeaponData sEquipmentData_Left; // 0x8
	FMOWeaponData sEquipmentData_Right; // 0x38
	FMOShieldData sEquipmentData_Left_Shield; // 0x68
	FMOShieldData sEquipmentData_Right_Shield; // 0x98
	FMOBowData sEquipmentData_Left_Bow; // 0xc8
	FMOBowData sEquipmentData_Right_Bow; // 0xf0
	FMOFishingRodData sEquipmentData_Right_FishingRod; // 0x118
	FMOArmorPartData sArmorPartData_Head; // 0x140
	FMOArmorPartData sArmorPartData_Torso; // 0x168
	FMOArmorPartData sArmorPartData_ArmR; // 0x190
	FMOArmorPartData sArmorPartData_ArmL; // 0x1b8
	FMOArmorPartData sArmorPartData_Legs; // 0x1e0
	FMOArmorPartData sArmorPartData_Back; // 0x208
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FRigUnit_KalmanVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	int32_t BufferSize; // 0x14
	FVector Result; // 0x18
	TArray<FVector> Buffer; // 0x28
	int32_t LastInsertIndex; // 0x38
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
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

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FMOBowData {
	EEquipmentGroup eEquipmentType; // 0x0
	EBowShapeGroup EBowShapeGroup; // 0x1
	EBowTypeGroup eBowType; // 0x2
	int32_t iBaseResourceIndex; // 0x4
	EResourceGroup eBaseResourceGroup; // 0x8
	int32_t iSecondaryResourceIndex; // 0xc
	EResourceGroup eSecondaryResourceGroup; // 0x10
	EBowConstructionGroup EBowConstructionGroup; // 0x11
	EEquipmentQuality EEquipmentQuality; // 0x12
	FString sParamString; // 0x18
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
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

struct FConvolutionBloomSettings {
	UTexture2D* Texture; // 0x0
	float Size; // 0x8
	FVector2D CenterUV; // 0xc
	float PreFilterMin; // 0x14
	float PreFilterMax; // 0x18
	float PreFilterMult; // 0x1c
	float BufferScale; // 0x20
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
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

struct FMOTableRowSkeletalMesh : FTableRowBase {
	TSoftClassPtr<UObject> cClass; // 0x8
	TArray<FMOSkeletalMeshLevelVariations> vLevelVariations; // 0x30
	TSoftObjectPtr<USkeletalMesh> pSkeletalMeshEditor; // 0x40
	bool bBlockTargetInEther; // 0x68
	FText sDisplayName; // 0x70
	FText sUseString; // 0x88
	float fHoldUseTimer; // 0xa0
	float fAtlasUseDistance; // 0xa4
	FText sHelpDescription; // 0xa8
	UTexture2D* pIcon; // 0xc0
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
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

struct FMOCharacterDecorationData {
	int32_t iHairTypeIndex; // 0x0
	int32_t iHairColorIndex; // 0x4
	int32_t iBeardTypeIndex; // 0x8
	int32_t iBeardColorIndex; // 0xc
	int32_t iSkinColorIndex; // 0x10
	int32_t iEyeColorIndex; // 0x14
	int32_t iSkinDecorationIndexA; // 0x18
	int32_t iSkinDecorationIndexB; // 0x1c
	int32_t iSkinDecorationIndexC; // 0x20
	int32_t iFaceTattooTypeIndex; // 0x24
	int32_t iFaceTattooIndex; // 0x28
	int32_t iBodyTattooTypeIndex; // 0x2c
	int32_t iBodyTattooIndex; // 0x30
	FString sParamString; // 0x38
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float Weight; // 0xb4
	int32_t MaxIterations; // 0xb8
	bool bStartFromTail; // 0xbc
	float BaseRotationLimit; // 0xc0
	TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xc8
	bool bPropagateToChildren; // 0xd8
	FRigUnit_CCDIK_WorkData WorkData; // 0xe0
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

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase {
	bool Condition; // 0x8
	float IfTrue; // 0xc
	float IfFalse; // 0x10
	float Result; // 0x14
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FHmdUserProfile {
	FString Name; // 0x0
	FString Gender; // 0x10
	float PlayerHeight; // 0x20
	float EyeHeight; // 0x24
	float IPD; // 0x28
	FVector2D NeckToEyeDistance; // 0x2c
	TArray<FHmdUserProfileField> ExtraFields; // 0x38
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FPartlyCloudyFoggyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_64_8BA974154172A8D69134F2B716C17A24; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_67CE440F436F56BED23C0194932C1C4B; // 0x48
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FRigPose {
	TArray<FRigPoseElement> Elements; // 0x0
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
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

struct FWaterBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
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

struct FShieldCraftingInfo_ShieldFrame {
	UMODataAssetShieldFrame* pDataAssetShieldFrame; // 0x20
};

struct FRigUnit_RandomVector : FRigUnit_MathBase {
	int32_t Seed; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float Duration; // 0x14
	FVector Result; // 0x18
	FVector LastResult; // 0x24
	int32_t LastSeed; // 0x30
	float TimeLeft; // 0x34
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase {
	FTransform Local; // 0x10
	FTransform Parent; // 0x40
	FTransform Global; // 0x70
};

struct FMODataAssetEquipmentResourceMaterials {
	TArray<TSoftObjectPtr<UMaterialInterface>> NoResource; // 0x0
	TArray<TSoftObjectPtr<UMaterialInterface>> Bone; // 0x10
	TArray<TSoftObjectPtr<UMaterialInterface>> Carapace; // 0x20
	TArray<TSoftObjectPtr<UMaterialInterface>> Crystal; // 0x30
	TArray<TSoftObjectPtr<UMaterialInterface>> Fur; // 0x40
	TArray<TSoftObjectPtr<UMaterialInterface>> Leather; // 0x50
	TArray<TSoftObjectPtr<UMaterialInterface>> Metal; // 0x60
	TArray<TSoftObjectPtr<UMaterialInterface>> Scales; // 0x70
	TArray<TSoftObjectPtr<UMaterialInterface>> Skin; // 0x80
	TArray<TSoftObjectPtr<UMaterialInterface>> Stone; // 0x90
	TArray<TSoftObjectPtr<UMaterialInterface>> Wood; // 0xa0
	TArray<TSoftObjectPtr<UMaterialInterface>> Textile; // 0xb0
	bool bMaterialsArePreloaded; // 0xc0
	TArray<UMaterialInterface*> PreloadedMaterials; // 0xc8
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
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

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	float T; // 0x30
	FQuat Result; // 0x40
};

struct FRigUnit_SetControlColor : FRigUnitMutable {
	FName Control; // 0x68
	FLinearColor Color; // 0x70
	FCachedRigElement CachedControlIndex; // 0x80
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FCRSimSoftCollision {
	FTransform Transform; // 0x0
	ECRSimSoftCollisionType ShapeType; // 0x30
	float MinimumDistance; // 0x34
	float MaximumDistance; // 0x38
	EControlRigAnimEasingType FalloffType; // 0x3c
	float Coefficient; // 0x40
	bool bInverted; // 0x44
};

struct FSocketEmitterPair {
	FName sSocketName; // 0x0
	UNiagaraSystem* pParticleSystem; // 0x8
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FRigUnit_BinaryTransformOp : FRigUnit {
	FTransform Argument0; // 0x10
	FTransform Argument1; // 0x40
	FTransform Result; // 0x70
};

struct FRigUnit_KalmanTransform : FRigUnit_SimBase {
	FTransform Value; // 0x10
	int32_t BufferSize; // 0x40
	FTransform Result; // 0x50
	TArray<FTransform> Buffer; // 0x80
	int32_t LastInsertIndex; // 0x90
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FRigUnit_AnimEasing : FRigUnit_AnimBase {
	float Value; // 0x8
	EControlRigAnimEasingType Type; // 0xc
	float SourceMinimum; // 0x10
	float SourceMaximum; // 0x14
	float TargetMinimum; // 0x18
	float TargetMaximum; // 0x1c
	float Result; // 0x20
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	FVector Input; // 0x8
	FQuat Result; // 0x20
};

struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase {
	FRigElementKey Child; // 0x8
	FRigElementKey Parent; // 0x14
	FCachedRigElement CachedChild; // 0x20
	FCachedRigElement CachedParent; // 0x34
};

struct FRigUnit_ConvertTransform : FRigUnit {
	FTransform Input; // 0x10
	FEulerTransform Result; // 0x40
};

struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable {
	FRigElementKey Child; // 0x68
	FRigElementKey Parent; // 0x74
	bool bParentInitial; // 0x80
	FTransform RelativeTransform; // 0x90
	float Weight; // 0xc0
	bool bPropagateToChildren; // 0xc4
	FCachedRigElement CachedChild; // 0xc8
	FCachedRigElement CachedParent; // 0xdc
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

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
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

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FMOAnimationSequenceReactions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	UAnimSequenceBase* Hostile; // 0x8
	UAnimSequenceBase* Scared; // 0x10
	UAnimSequenceBase* Victorious; // 0x18
	UAnimSequenceBase* Searching; // 0x20
	UAnimSequenceBase* LetGoOfTarget; // 0x28
	UAnimSequenceBase* StopSearching; // 0x30
	UAnimSequenceBase* BeingTamed; // 0x38
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FRigUnit_ItemExists : FRigUnit_ItemBase {
	FRigElementKey Item; // 0x8
	bool Exists; // 0x14
	FCachedRigElement CachedIndex; // 0x18
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

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Radius; // 0xb0
	float MinimumDegrees; // 0xb4
	float MaximumDegrees; // 0xb8
	float Thickness; // 0xbc
	int32_t Detail; // 0xc0
	FRigElementKey Space; // 0xc4
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
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

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingID; // 0x0
};

struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Scale; // 0xb0
	float Thickness; // 0xb4
	FName Space; // 0xb8
	FTransform WorldOffset; // 0xc0
	bool bEnabled; // 0xf0
};

struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable {
	FName InstructionName; // 0x68
	FTransform Transform; // 0x70
};

struct FChaosDestructionEvent {
	FVector Position; // 0x0
	FVector Normal; // 0xc
	FVector Velocity; // 0x18
	FVector AngularVelocity; // 0x24
	float ExtentMin; // 0x30
	float ExtentMax; // 0x34
	int32_t ParticleID; // 0x38
	float Time; // 0x3c
	int32_t Type; // 0x40
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

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
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

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable {
	FName SpaceName; // 0x68
	FTransform Transform; // 0x70
	FTransform Result; // 0xa0
	EBoneGetterSetterMode Space; // 0xd0
	FCachedRigElement CachedSpaceIndex; // 0xd4
};

struct FMOTattooEffectTextureStruct {
	UTexture* pTexture; // 0x0
	UTexture* pTexture_N; // 0x8
	ETattooEffectType eTattooType; // 0x10
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	EControlRigRotationOrder RotationOrder; // 0x20
	FVector Result; // 0x24
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	float Scale; // 0x20
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FRigUnit_SetSpaceTransform : FRigUnitMutable {
	FName Space; // 0x68
	float Weight; // 0x70
	FTransform Transform; // 0x80
	EBoneGetterSetterMode SpaceType; // 0xb0
	FCachedRigElement CachedSpaceIndex; // 0xb4
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
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

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorXform_Target> Targets; // 0xb0
	FTransform Output; // 0xc0
};

struct FRigUnit_GetJointTransform : FRigUnitMutable {
	FName Joint; // 0x68
	ETransformGetterType Type; // 0x70
	ETransformSpaceMode TransformSpace; // 0x71
	FTransform BaseTransform; // 0x80
	FName BaseJoint; // 0xb0
	FTransform Output; // 0xc0
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FRigUnit_ChainHarmonics_WorkData {
	FVector Time; // 0x0
	TArray<FCachedRigElement> Items; // 0x10
	TArray<float> Ratio; // 0x20
	TArray<FVector> LocalTip; // 0x30
	TArray<FVector> PendulumTip; // 0x40
	TArray<FVector> PendulumPosition; // 0x50
	TArray<FVector> PendulumVelocity; // 0x60
	TArray<FVector> HierarchyLine; // 0x70
	TArray<FVector> VelocityLines; // 0x80
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

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FRigUnit_AimBone_Target {
	float Weight; // 0x0
	FVector Axis; // 0x4
	FVector Target; // 0x10
	EControlRigVectorKind Kind; // 0x1c
	FName Space; // 0x20
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float Tolerance; // 0x10
	bool Result; // 0x14
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FRigUnit_AimItem_Target {
	float Weight; // 0x0
	FVector Axis; // 0x4
	FVector Target; // 0x10
	EControlRigVectorKind Kind; // 0x1c
	FRigElementKey Space; // 0x20
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FStaticMeshCompositionSectionInfo {
	bool bCastShadow; // 0x0
	bool bEnableCollision; // 0x1
	int32_t iMaterialSlotIdOverride; // 0x4
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FMOLevelStreamingVolumeLevelInfo {
	TSoftObjectPtr<UWorld> LevelPtr; // 0x0
	ELevelStreamingDesiredState DesiredState; // 0x28
	TArray<AMOLevelStreamingVolume*> AssociatedBlockingVolumes; // 0x30
	TArray<AMOLevelStreamingVolume*> AssociatedAsyncVolumes; // 0x40
	bool bPlayerIsOverlappingBlocking; // 0x50
	bool bPlayerIsOverlappingBlockingLeaveBuffer; // 0x51
	bool bPlayerIsOverlappingAsync; // 0x52
	bool bPlayerIsOverlappingAsyncLeaveBuffer; // 0x53
};

struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Result; // 0x14
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingID; // 0x28
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FKawaiiPhysicsModifyBone {
	FBoneReference BoneRef; // 0x0
	int32_t ParentIndex; // 0x10
	TArray<int32_t> ChildIndexs; // 0x18
	FKawaiiPhysicsSettings PhysicsSettings; // 0x28
	FVector Location; // 0x40
	FVector PrevLocation; // 0x4c
	FQuat PrevRotation; // 0x60
	FVector PoseLocation; // 0x70
	FQuat PoseRotation; // 0x80
	FVector PoseScale; // 0x90
	float LengthFromRoot; // 0x9c
	bool bDummy; // 0xa0
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FMOTableRowClientEffect : FTableRowBase {
	UMOClientEffect* cClientEffectClass; // 0x8
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Tolerance; // 0xc
	bool Result; // 0x10
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

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
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

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase {
	float Frames; // 0x8
	float Seconds; // 0xc
};

struct FBoneSpringParticle {
	FBoneReference Bone; // 0x0
	float SimulationAlpha; // 0x10
	FVector AnimatedLocation; // 0x14
	FVector Location; // 0x20
	float Mass; // 0x2c
	float TargetShapeSpring_k; // 0x30
	float TargetShapeSpring_b; // 0x34
	float MaxDistanceAlpha; // 0x38
	FVector AccumulatedForces; // 0x3c
	FVector Velocity; // 0x48
};

struct FRigUnit_SetControlRotator : FRigUnitMutable {
	FName Control; // 0x68
	float Weight; // 0x70
	FRotator Rotator; // 0x74
	EBoneGetterSetterMode Space; // 0x80
	FCachedRigElement CachedControlIndex; // 0x84
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
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

struct FSnowyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_66_BE5499A94D930F2DA3F724838ADFAA06; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_D842D2C94DD15C251A89D0B6FE3C7A2F; // 0x48
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FMOAnimNode_ParentAnimSynchronization : FAnimNode_Base {
	FPoseLink Source; // 0x10
	TWeakObjectPtr<UMOAnimationInstance> SourceParentAnimationInstance; // 0x20
	TArray<FName> ParentSyncGroups; // 0x28
};

struct FMOTableRowIcon : FTableRowBase {
	UTexture2D* sIconA; // 0x8
	UTexture2D* sIconB; // 0x10
	FColor sIconATint; // 0x18
	FColor sIconBTint; // 0x1c
	FText sDescription; // 0x20
	FText sDisplayName; // 0x38
	FText sUseDescription; // 0x50
	bool bBrokerShowInCreateOrders; // 0x68
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FRigVMInstructionArray {
	TArray<FRigVMInstruction> Instructions; // 0x0
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FRigUnit_DistributeRotation_Rotation {
	FQuat Rotation; // 0x0
	float Ratio; // 0x10
};

struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	FQuat Input; // 0x10
	FVector Result; // 0x20
};

struct FRigUnit_SetMultiControlBool_Entry {
	FName Control; // 0x0
	bool BoolValue; // 0x8
};

struct FVoipDevice {
	int32_t DeviceID; // 0x0
	FString DeviceName; // 0x8
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
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

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
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

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FProcMeshVertex {
	FVector Position; // 0x0
	FVector Normal; // 0xc
	FProcMeshTangent Tangent; // 0x18
	FColor Color; // 0x28
	FVector2D UV0; // 0x2c
	FVector2D UV1; // 0x34
	FVector2D UV2; // 0x3c
	FVector2D UV3; // 0x44
};

struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	FRotator Result; // 0x20
};

struct FRigUnitMutable : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FEnumParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneByteChannel ParameterCurve; // 0x8
};

struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase {
	FRigElementKeyCollection A; // 0x8
	FRigElementKeyCollection B; // 0x18
	FRigElementKeyCollection Collection; // 0x28
};

struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	float HierarchyStrength; // 0x78
	float EffectorStrength; // 0x7c
	float EffectorRatio; // 0x80
	float RootStrength; // 0x84
	float RootRatio; // 0x88
	float Damping; // 0x8c
	FVector PoleVector; // 0x90
	bool bFlipPolePlane; // 0x9c
	EControlRigVectorKind PoleVectorKind; // 0x9d
	FName PoleVectorSpace; // 0xa0
	FVector PrimaryAxis; // 0xa8
	FVector SecondaryAxis; // 0xb4
	bool bLiveSimulation; // 0xc0
	int32_t Iterations; // 0xc4
	bool bLimitLocalPosition; // 0xc8
	bool bPropagateToChildren; // 0xc9
	FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xd0
	FRigUnit_SpringIK_WorkData WorkData; // 0x120
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	FQuat Argument; // 0x10
	FQuat Result; // 0x20
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FRigUnit_CCDIK_WorkData {
	TArray<FCCDIKChainLink> Chain; // 0x0
	TArray<FCachedRigElement> CachedItems; // 0x10
	TArray<int32_t> RotationLimitIndex; // 0x20
	TArray<float> RotationLimitsPerItem; // 0x30
	FCachedRigElement CachedEffector; // 0x40
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

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
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

struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorFloat_Target> Targets; // 0xb0
	float Output; // 0xc0
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FCloudyFoggyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float Density_39_FB4B9EFB4880190275498CB8924A1486; // 0x38
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x3c
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x40
	float AmbientIntensity_64_8BA974154172A8D69134F2B716C17A24; // 0x44
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x48
	FLinearColor FogInsColor_61_67CE440F436F56BED23C0194932C1C4B; // 0x4c
};

struct FStaticMeshCompositionLODInfo {
	TArray<FStaticMeshCompositionSectionInfo> sSectionInfos; // 0x0
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
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

struct FAnimNode_KavajSoftbody : FAnimNode_SkeletalControlBase {
	FKavajSoftBodyDefinitions Definitions; // 0xc8
	FKavajSoftBodyParameters Parameters; // 0x108
	bool bMirrorSetup; // 0x140
	float FixedUpdateRate; // 0x144
};

struct FLiveLinkSubjectDataMessage {
	FLiveLinkRefSkeleton RefSkeleton; // 0x0
	FName SubjectName; // 0x20
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
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

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FName Space; // 0x70
	FTransform Transform; // 0x80
	float Weight; // 0xb0
	bool bPropagateToChildren; // 0xb4
	FCachedRigElement CachedBone; // 0xb8
	FCachedRigElement CachedSpaceIndex; // 0xcc
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
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

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Result; // 0x20
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
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

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
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

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FRigUnit_ToRigSpace_Location : FRigUnit {
	FVector Location; // 0x8
	FVector Global; // 0x14
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

struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector Normal; // 0x14
	FVector Result; // 0x20
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

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
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

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	bool Result; // 0x30
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable {
	FVector Vector; // 0x68
	ERigUnitDebugPointMode Mode; // 0x74
	FLinearColor Color; // 0x78
	float Scale; // 0x88
	float Thickness; // 0x8c
	FName Space; // 0x90
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase {
	FQuat Input; // 0x10
	ERBFQuatDistanceType DistanceFunction; // 0x20
	ERBFKernelType SmoothingFunction; // 0x21
	float SmoothingAngle; // 0x24
	bool bNormalizeOutput; // 0x28
	FVector TwistAxis; // 0x2c
	FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x40
};

struct FRigUnit_CollectionChain : FRigUnit_CollectionBase {
	FRigElementKey FirstItem; // 0x8
	FRigElementKey LastItem; // 0x14
	bool Reverse; // 0x20
	FRigElementKeyCollection Collection; // 0x28
	FRigElementKeyCollection CachedCollection; // 0x38
	int32_t CachedHierarchyHash; // 0x48
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
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

struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase {
	FTransform A; // 0x10
	FTransform B; // 0x40
	FTransform Result; // 0x70
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FRigUnit_ControlName : FRigUnit {
	FName Control; // 0x8
};

struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase {
	float Value; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float AccumulatedMinimum; // 0x14
	float AccumulatedMaximum; // 0x18
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase {
	float Increment; // 0x8
	float InitialValue; // 0xc
	bool bIntegrateDeltaTime; // 0x10
	float Result; // 0x14
	float AccumulatedValue; // 0x18
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

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
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

struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
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

struct FRigUnit_TransformConstraint_WorkData {
	TArray<FConstraintData> ConstraintData; // 0x0
	TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10
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

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FRigUnit_BeginExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
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
	FVector2D OffCenterProjectionOffset; // 0x590
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

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
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

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable {
	FName Bone; // 0x68
	FRigUnit_AimBone_Target Primary; // 0x70
	FRigUnit_AimBone_Target Secondary; // 0x98
	float Weight; // 0xc0
	bool bPropagateToChildren; // 0xc4
	FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
	FCachedRigElement CachedBoneIndex; // 0x110
	FCachedRigElement PrimaryCachedSpace; // 0x124
	FCachedRigElement SecondaryCachedSpace; // 0x138
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FRigUnit_MathIntLess : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
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

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FRigUnit_GetControlFloat : FRigUnit {
	FName Control; // 0x8
	float FloatValue; // 0x10
	float Minimum; // 0x14
	float Maximum; // 0x18
	FCachedRigElement CachedControlIndex; // 0x1c
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FRigUnit_DistributeRotation_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
	TArray<int32_t> ItemRotationA; // 0x10
	TArray<int32_t> ItemRotationB; // 0x20
	TArray<float> ItemRotationT; // 0x30
	TArray<FTransform> ItemLocalTransforms; // 0x40
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FRigUnit_Clamp_Float : FRigUnit {
	float Value; // 0x8
	float Min; // 0xc
	float Max; // 0x10
	float Result; // 0x14
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

struct FRigUnit_SetMultiControlRotator_Entry {
	FName Control; // 0x0
	FRotator Rotator; // 0x8
	EBoneGetterSetterMode Space; // 0x14
};

struct FBoneAngularSpring {
	uint32_t ParticleA; // 0x0
	uint32_t ParticleB; // 0x4
	float K; // 0x8
	float B; // 0xc
	FVector F; // 0x10
};

struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	float SecondsAgo; // 0x14
	int32_t BufferSize; // 0x18
	float TimeRange; // 0x1c
	FVector Result; // 0x20
	TArray<FVector> Buffer; // 0x30
	TArray<float> DeltaTimes; // 0x40
	int32_t LastInsertIndex; // 0x50
	int32_t UpperBound; // 0x54
};

struct FRigBone : FRigElement {
	FName ParentName; // 0x18
	int32_t ParentIndex; // 0x20
	FTransform InitialTransform; // 0x30
	FTransform GlobalTransform; // 0x60
	FTransform LocalTransform; // 0x90
	TArray<int32_t> Dependents; // 0xc0
	ERigBoneType Type; // 0xd0
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase {
	FQuat Quaternion; // 0x10
	EAxis Axis; // 0x20
	FVector Result; // 0x24
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FMOTableRowAIAttacks : FTableRowBase {
	FText sDisplayName; // 0x8
	FText sHitDisplay; // 0x20
	USoundCue* pClientHitSound; // 0x38
	float fPushForce; // 0x40
	float fZForce; // 0x44
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
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

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
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

struct FRigUnit_NameConcat : FRigUnit_NameBase {
	FName A; // 0x8
	FName B; // 0x10
	FName Result; // 0x18
};

struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78
	EControlRigAnimEasingType RotationEaseType; // 0x88
	float Weight; // 0x8c
	FRigUnit_DistributeRotation_WorkData WorkData; // 0x90
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FMOAvatarPathPoint {
	bool bStopAtThisPoint; // 0x8
	FVector Position; // 0xc
	FVector Direction; // 0x18
	float Speed; // 0x24
	FRotator Rotation; // 0x28
	float CorridorRadius; // 0x34
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase {
	bool Value; // 0x8
	bool Result; // 0x9
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

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase {
	bool Condition; // 0x8
	FTransform IfTrue; // 0x10
	FTransform IfFalse; // 0x40
	FTransform Result; // 0x70
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorColor_Target> Targets; // 0xb0
	FLinearColor Output; // 0xc0
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	float Scale; // 0x14
	float Bias; // 0x18
	bool bMapRange; // 0x1c
	FInputRange InRange; // 0x20
	FInputRange OutRange; // 0x28
	bool bClampResult; // 0x30
	float ClampMin; // 0x34
	float ClampMax; // 0x38
	bool bInterpResult; // 0x3c
	float InterpSpeedIncreasing; // 0x40
	float InterpSpeedDecreasing; // 0x44
	FVector Result; // 0x48
	FInputScaleBiasClamp ScaleBiasClamp; // 0x54
};

struct FWaterBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FMotionProcessInput {
	bool bForceEffectorRotationTarget; // 0x0
	bool bOnlyApplyWhenReachedToTarget; // 0x1
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FRigUnit_RandomFloat : FRigUnit_MathBase {
	int32_t Seed; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float Duration; // 0x14
	float Result; // 0x18
	float LastResult; // 0x1c
	int32_t LastSeed; // 0x20
	float TimeLeft; // 0x24
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FS_MO2_Sun {
	FVector SunDirection_2_6ED7E9A04016CC81141F9F93F257E2D4; // 0x0
	float SunIntensity_26_BFD239CA4F722CDB8494C985411DB34B; // 0xc
	FLinearColor SunColor_5_B5F9DA6D4D5122C9C52CFFB5BDD506B4; // 0x10
	float SunHeight_8_3EE63B384031F6EFB3330A9E3FE8885E; // 0x20
	float SunRadius_16_2514E41A47B64D2BFDD027B992BFB53D; // 0x24
	float SunFalloff_14_908DE23B4460DB8A5475E0BCDE7CA352; // 0x28
	float SunBloomFalloff_10_2980D727499120ACAEE086A670979FDD; // 0x2c
	float SunBloomStrength_12_DC5DE7DB43003BF766ABCFA8EA3AF675; // 0x30
	float BloomScale_18_22290A6F40A6725D4C2114AE2908F74C; // 0x34
	float BloomThreshold_20_0DC59EFF454EA7342A252C9DCF947142; // 0x38
	FColor BloomTint_27_C1BCF51D4D7F6822DE57FF812E93F725; // 0x3c
};

struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase {
	float Result; // 0x8
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FRigUnit_Distance_VectorVector : FRigUnit {
	FVector Argument0; // 0x8
	FVector Argument1; // 0x14
	float Result; // 0x20
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase {
	FQuat Value; // 0x10
	bool bEnabled; // 0x20
	float Thickness; // 0x24
	float Scale; // 0x28
	FRigElementKey Space; // 0x2c
};

struct FMOWeaponData {
	EEquipmentGroup eEquipmentType; // 0x0
	int32_t iHandleTypeIndex; // 0x4
	int32_t iHandleResourceIndex; // 0x8
	EWeaponGroup eHandleWeaponGroup; // 0xc
	EResourceGroup eHandleResourceGroup; // 0xd
	int32_t iHeadTypeIndex; // 0x10
	int32_t iHeadResourceIndex; // 0x14
	EWeaponGroup eHeadWeaponGroup; // 0x18
	EResourceGroup eHeadResourceGroup; // 0x19
	EEquipmentQuality EEquipmentQuality; // 0x1a
	FString sParamString; // 0x20
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable {
	TArray<FTransform> Transforms; // 0x68
	ERigUnitDebugTransformMode Mode; // 0x78
	FLinearColor Color; // 0x7c
	float Thickness; // 0x8c
	float Scale; // 0x90
	FName Space; // 0x94
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
	FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xd8
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatVector_Target> Targets; // 0xd0
	FVector Output; // 0xe0
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FRigUnit_ChainHarmonics_Reach {
	bool bEnabled; // 0x0
	FVector ReachTarget; // 0x4
	FVector ReachAxis; // 0x10
	float ReachMinimum; // 0x1c
	float ReachMaximum; // 0x20
	EControlRigAnimEasingType ReachEase; // 0x24
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatColor_Target> Targets; // 0xd0
	FLinearColor Output; // 0xe0
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
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

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase {
	FTransform Global; // 0x10
	FTransform Parent; // 0x40
	FTransform Local; // 0x70
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
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

struct FCollisionLimitBase {
	FBoneReference DrivingBone; // 0x0
	FVector OffsetLocation; // 0x10
	FRotator OffsetRotation; // 0x1c
	FVector Location; // 0x28
	FQuat Rotation; // 0x40
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Result; // 0x20
};

struct FTimeline {
	ETimelineLengthMode LengthMode; // 0x0
	char bLooping : 1; // 0x1
	char bReversePlayback : 1; // 0x1
	char bPlaying : 1; // 0x1
	float Length; // 0x4
	float PlayRate; // 0x8
	float Position; // 0xc
	TArray<FTimelineEventEntry> Events; // 0x10
	TArray<FTimelineVectorTrack> InterpVectors; // 0x20
	TArray<FTimelineFloatTrack> InterpFloats; // 0x30
	TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x40
	FDelegate TimelinePostUpdateFunc; // 0x50
	FDelegate TimelineFinishedFunc; // 0x60
	TWeakObjectPtr<UObject> PropertySetObject; // 0x70
	FName DirectionPropertyName; // 0x78
};

struct FBoneSpring {
	uint32_t ParticleA; // 0x0
	uint32_t ParticleB; // 0x4
	float K; // 0x8
	float B; // 0xc
	float D; // 0x10
	FVector F; // 0x14
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable {
	FName RootBone; // 0x68
	TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x70
	float Precision; // 0x80
	bool bPropagateToChildren; // 0x84
	int32_t MaxIterations; // 0x88
	FRigUnit_MultiFABRIK_WorkData WorkData; // 0x90
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FMOAvatarData {
	FTransform tAvatarTransform; // 0x10
	AActor* uAvatarClass; // 0x40
	AActor* pSpawnedActor; // 0x48
};

struct FSlateMeshVertex {
	FVector2D Position; // 0x0
	FColor Color; // 0x8
	FVector2D UV0; // 0xc
	FVector2D UV1; // 0x14
	FVector2D UV2; // 0x1c
	FVector2D UV3; // 0x24
	FVector2D UV4; // 0x2c
	FVector2D UV5; // 0x34
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

struct FTalkerTreePlayerResponse {
	FText sResponseText; // 0x0
	FString sResponseCondition; // 0x18
	FString sResponseCommand; // 0x28
	int32_t iNextConversationChainID; // 0x38
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase {
	FQuat Quaternion; // 0x10
	FVector Vector; // 0x20
	FVector Result; // 0x2c
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FRigUnit_ConvertEulerTransform : FRigUnit {
	FEulerTransform Input; // 0x8
	FTransform Result; // 0x30
};

struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable {
	FName BoneA; // 0x68
	FName BoneB; // 0x70
	FName EffectorBone; // 0x78
	FTransform Effector; // 0x80
	FVector PrimaryAxis; // 0xb0
	FVector SecondaryAxis; // 0xbc
	float SecondaryAxisWeight; // 0xc8
	FVector PoleVector; // 0xcc
	EControlRigVectorKind PoleVectorKind; // 0xd8
	FName PoleVectorSpace; // 0xdc
	bool bEnableStretch; // 0xe4
	float StretchStartRatio; // 0xe8
	float StretchMaximumRatio; // 0xec
	float Weight; // 0xf0
	float BoneALength; // 0xf4
	float BoneBLength; // 0xf8
	bool bPropagateToChildren; // 0xfc
	FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x100
	FCachedRigElement CachedBoneAIndex; // 0x140
	FCachedRigElement CachedBoneBIndex; // 0x154
	FCachedRigElement CachedEffectorBoneIndex; // 0x168
	FCachedRigElement CachedPoleVectorSpaceIndex; // 0x17c
};

struct FPartlyCloudyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_64_8BA974154172A8D69134F2B716C17A24; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_67CE440F436F56BED23C0194932C1C4B; // 0x48
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FRigUnit_SequenceExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
	FControlRigExecuteContext A; // 0x68
	FControlRigExecuteContext B; // 0xc8
	FControlRigExecuteContext C; // 0x128
	FControlRigExecuteContext D; // 0x188
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
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

struct FRigInfluenceEntry {
	FRigElementKey Source; // 0x0
	TArray<FRigElementKey> AffectedList; // 0x10
};

struct FRigUnit_ChainHarmonics_Pendulum {
	bool bEnabled; // 0x0
	float PendulumStiffness; // 0x4
	FVector PendulumGravity; // 0x8
	float PendulumBlend; // 0x14
	float PendulumDrag; // 0x18
	float PendulumMinimum; // 0x1c
	float PendulumMaximum; // 0x20
	EControlRigAnimEasingType PendulumEase; // 0x24
	FVector UnwindAxis; // 0x28
	float UnwindMinimum; // 0x34
	float UnwindMaximum; // 0x38
};

struct FRigUnit_SetBoneTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FTransform Transform; // 0x70
	FTransform Result; // 0xa0
	EBoneGetterSetterMode Space; // 0xd0
	float Weight; // 0xd4
	bool bPropagateToChildren; // 0xd8
	FCachedRigElement CachedBone; // 0xdc
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FMOFindFloorResult {
	bool bSuccessful; // 0x0
	bool bFloorFoundBelow; // 0x1
	float DistanceToFloor; // 0x4
	FVector Location; // 0x8
	FVector FeetLocation; // 0x14
	FHitResult TraceHitResult; // 0x20
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FRigUnit_FABRIK_WorkData {
	TArray<FFABRIKChainLink> Chain; // 0x0
	TArray<FCachedRigElement> CachedItems; // 0x10
	FCachedRigElement CachedEffector; // 0x20
};

struct FWaterBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FRigUnit_MultiFABRIK_EndEffector {
	FName Bone; // 0x0
	FVector Location; // 0x8
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
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

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float Result; // 0x14
};

struct FSocketLightPair {
	FName sSocketName; // 0x0
	FLinearColor cLightColor; // 0x8
	float fIntensity; // 0x18
	float fAttenuationRadius; // 0x1c
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
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

struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FOculusCapsuleCollider {
	UCapsuleComponent* Capsule; // 0x0
	EBone BoneId; // 0x8
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FMOCharacterBodyShape {
	float Thin; // 0x0
	float Muscular; // 0x4
	float Fat; // 0x8
	float Definition; // 0xc
	float Anorectic; // 0x10
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey Item; // 0x68
	ETransformSpaceMode BaseTransformSpace; // 0x74
	FTransform BaseTransform; // 0x80
	FRigElementKey BaseItem; // 0xb0
	TArray<FConstraintTarget> Targets; // 0xc0
	bool bUseInitialTransforms; // 0xd0
	FRigUnit_TransformConstraint_WorkData WorkData; // 0xd8
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FRigUnit_InverseExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable {
	FRigElementKeyCollection Collection; // 0x68
	FRigElementKey Item; // 0x78
	int32_t Index; // 0x84
	int32_t Count; // 0x88
	float Ratio; // 0x8c
	bool Continue; // 0x90
	FControlRigExecuteContext Completed; // 0x98
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
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

struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase {
	FVector Location; // 0x8
	FVector Rotation; // 0x14
	EControlRigRotationOrder RotationOrder; // 0x20
	FVector Scale; // 0x24
	FTransform Transform; // 0x30
	FEulerTransform EulerTransform; // 0x60
};

struct FPickableFieldInstance {
	UStaticMeshComponent* pStaticMesh; // 0x0
	USphereComponent* pCollision; // 0x8
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase {
	FVector Root; // 0x8
	FVector PoleVector; // 0x14
	FVector Effector; // 0x20
	bool bEnableStretch; // 0x2c
	float StretchStartRatio; // 0x30
	float StretchMaximumRatio; // 0x34
	float BoneALength; // 0x38
	float BoneBLength; // 0x3c
	FVector Elbow; // 0x40
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
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

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
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

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FRigControl : FRigElement {
	ERigControlType ControlType; // 0x18
	FName DisplayName; // 0x1c
	FName ParentName; // 0x24
	int32_t ParentIndex; // 0x2c
	FName SpaceName; // 0x30
	int32_t SpaceIndex; // 0x38
	FTransform OffsetTransform; // 0x40
	FRigControlValue InitialValue; // 0x70
	FRigControlValue Value; // 0xf0
	ERigControlAxis PrimaryAxis; // 0x170
	bool bIsCurve; // 0x171
	bool bAnimatable; // 0x172
	bool bLimitTranslation; // 0x173
	bool bLimitRotation; // 0x174
	bool bLimitScale; // 0x175
	bool bDrawLimits; // 0x176
	FRigControlValue MinimumValue; // 0x180
	FRigControlValue MaximumValue; // 0x200
	bool bGizmoEnabled; // 0x280
	bool bGizmoVisible; // 0x281
	FName GizmoName; // 0x284
	FTransform GizmoTransform; // 0x290
	FLinearColor GizmoColor; // 0x2c0
	TArray<int32_t> Dependents; // 0x2d0
	bool bIsTransientControl; // 0x2e0
	UEnum* ControlEnum; // 0x2e8
};

struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float T; // 0x10
	float Result; // 0x14
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FS_MO2_Moon_MaterialParameters {
	FString MoonDirection_3_0481D6794AC68C02027B85954702910D; // 0x0
	FString MoonIntensity_5_F18E1CF44921BC01657018866374831C; // 0x10
	FString MoonColor_7_7E33BF55491C0C7CAADB19B68BA80D49; // 0x20
	FString MoonContrast_9_FC794C9448F2F393772C419B121B4EE0; // 0x30
	FString MoonRadius_11_DC94A10142A1311801490C86BB6640E7; // 0x40
	FString MoonRot_13_18F5A76E466D5FA0376AA8B5CAC3B933; // 0x50
	FString MoonFalloff_15_B6F9D7B84CC501366BD83FA5E5713F15; // 0x60
	FString MoonBloomStrength_17_364F72B44C74198BAB35E091E7996870; // 0x70
	FString MoonBloomFalloff_19_B5FA2B5B48AFCE69BF799BB13FD9C4ED; // 0x80
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FGerstnerWaveOctave {
	int32_t NumWaves; // 0x0
	float AmplitudeScale; // 0x4
	float MainDirection; // 0x8
	float SpreadAngle; // 0xc
	bool bUniformSpread; // 0x10
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

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
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

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FControlRigComponentMappedComponent {
	USceneComponent* Component; // 0x0
	FName ElementName; // 0x8
	ERigElementType ElementType; // 0x10
	EControlRigComponentMapDirection Direction; // 0x11
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FRigUnit_GetControlVector2D : FRigUnit {
	FName Control; // 0x8
	FVector2D Vector; // 0x10
	FVector2D Minimum; // 0x18
	FVector2D Maximum; // 0x20
	FCachedRigElement CachedControlIndex; // 0x28
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FMOKeybindCategoriesStruct {
	TArray<int32_t> vCreateCategoryAtIndex; // 0x0
	TArray<FText> vCategoryText; // 0x10
};

struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable {
	FRigElementKey Root; // 0x68
	TArray<FFBIKEndEffector> Effectors; // 0x78
	TArray<FFBIKConstraintOption> Constraints; // 0x88
	FSolverInput SolverProperty; // 0x98
	FMotionProcessInput MotionProperty; // 0xbc
	bool bPropagateToChildren; // 0xbe
	FFBIKDebugOption DebugOption; // 0xc0
	FRigUnit_FullbodyIK_WorkData WorkData; // 0x110
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMOCharacterFaceCustomizationData_DualRangeSet {
	FName BaseName; // 0x0
	FName LowerRangeName; // 0x8
	FName UpperRangeName; // 0x10
};

struct FBlendTarget {
	FTransform Transform; // 0x0
	float Weight; // 0x30
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	int32_t Result; // 0x10
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

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FRigUnit_DrawContainerGetInstruction : FRigUnit {
	FName InstructionName; // 0x8
	FLinearColor Color; // 0x10
	FTransform Transform; // 0x20
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
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

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
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

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FRigUnit_CCDIK_RotationLimitPerItem {
	FRigElementKey Item; // 0x0
	float Limit; // 0xc
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FMOAnimationInfo {
	FName Name; // 0x0
	ECharacterAnimMontageType Type; // 0x8
	float PlaybackStartTimeStamp; // 0xc
	float MaxEarlySynchronizeOffset; // 0x10
	float MaxLateSynchronizeOffset; // 0x14
	UAnimSequenceBase* Animation; // 0x18
	UAnimSequenceBase* AnimationFirstPerson; // 0x20
	FName StartSection; // 0x28
	FName LoopSection; // 0x30
	FName OnLeaveSection; // 0x38
	bool bUseLeaveSectionIfItExists; // 0x40
	bool bSmoothBlendLeave; // 0x41
	bool bShouldFinishLoopSectionBeforeLeaving; // 0x42
	float MontageDefaultBlendTimeMultiplier; // 0x44
	bool bPlayOnPaperdoll; // 0x48
	float DefaultPlayRate; // 0x4c
	float StartAtTime; // 0x50
	bool bStopAllMontages; // 0x54
	float StopAllMontagesBlendOutTime; // 0x58
	float BlendInTime; // 0x5c
	float BlendOutTime; // 0x60
	int32_t LoopCount; // 0x64
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FControlRigSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FControlRigSequenceObjectReferences> References; // 0x10
};

struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Scale; // 0xb0
	float Thickness; // 0xb4
	FRigElementKey Space; // 0xb8
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FRigUnit_GetControlRotator : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FRotator Rotator; // 0x14
	FRotator Minimum; // 0x20
	FRotator Maximum; // 0x2c
	FCachedRigElement CachedControlIndex; // 0x38
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey ItemA; // 0x68
	FRigElementKey ItemB; // 0x74
	FRigElementKey EffectorItem; // 0x80
	FTransform Effector; // 0x90
	FVector PrimaryAxis; // 0xc0
	FVector SecondaryAxis; // 0xcc
	float SecondaryAxisWeight; // 0xd8
	FVector PoleVector; // 0xdc
	EControlRigVectorKind PoleVectorKind; // 0xe8
	FRigElementKey PoleVectorSpace; // 0xec
	bool bEnableStretch; // 0xf8
	float StretchStartRatio; // 0xfc
	float StretchMaximumRatio; // 0x100
	float Weight; // 0x104
	float ItemALength; // 0x108
	float ItemBLength; // 0x10c
	bool bPropagateToChildren; // 0x110
	FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x120
	FCachedRigElement CachedItemAIndex; // 0x160
	FCachedRigElement CachedItemBIndex; // 0x174
	FCachedRigElement CachedEffectorItemIndex; // 0x188
	FCachedRigElement CachedPoleVectorSpaceIndex; // 0x19c
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
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

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase {
	bool A; // 0x8
	bool B; // 0x9
	bool Result; // 0xa
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

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FWaterBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FChannelMapInfo {
	int32_t ControlIndex; // 0x0
	int32_t TotalChannelIndex; // 0x4
	int32_t ChannelIndex; // 0x8
	int32_t ParentControlIndex; // 0xc
	FName ChannelTypeName; // 0x10
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FRigUnit_CCDIK_RotationLimit {
	FName Bone; // 0x0
	float Limit; // 0x8
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
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

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x68
	FVector WaveSpeed; // 0x78
	FVector WaveFrequency; // 0x84
	FVector WaveAmplitude; // 0x90
	FVector WaveOffset; // 0x9c
	FVector WaveNoise; // 0xa8
	EControlRigAnimEasingType WaveEase; // 0xb4
	float WaveMinimum; // 0xb8
	float WaveMaximum; // 0xbc
	EControlRigRotationOrder RotationOrder; // 0xc0
	bool bPropagateToChildren; // 0xc1
	FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FRigUnit_SetControlVector2D : FRigUnitMutable {
	FName Control; // 0x68
	float Weight; // 0x70
	FVector2D Vector; // 0x74
	FCachedRigElement CachedControlIndex; // 0x7c
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FRigUnit_Control : FRigUnit {
	FEulerTransform Transform; // 0x8
	FTransform Base; // 0x30
	FTransform InitTransform; // 0x60
	FTransform Result; // 0x90
	FTransformFilter Filter; // 0xc0
};

struct FRigUnit_Timeline : FRigUnit_SimBase {
	float Speed; // 0x8
	float Time; // 0xc
	float AccumulatedValue; // 0x10
};

struct FCollisionLimitDataBase {
	FName DrivingBoneName; // 0x0
	FVector OffsetLocation; // 0x8
	FRotator OffsetRotation; // 0x14
	FVector Location; // 0x20
	FQuat Rotation; // 0x30
	FGuid Guid; // 0x40
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FSunnyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_64_8BA974154172A8D69134F2B716C17A24; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_67CE440F436F56BED23C0194932C1C4B; // 0x48
};

struct FRigUnit_ChainHarmonics_Wave {
	bool bEnabled; // 0x0
	FVector WaveFrequency; // 0x4
	FVector WaveAmplitude; // 0x10
	FVector WaveOffset; // 0x1c
	FVector WaveNoise; // 0x28
	float WaveMinimum; // 0x34
	float WaveMaximum; // 0x38
	EControlRigAnimEasingType WaveEase; // 0x3c
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FRigUnit_ForLoopCount : FRigUnitMutable {
	int32_t Count; // 0x68
	int32_t Index; // 0x6c
	float Ratio; // 0x70
	bool Continue; // 0x74
	FControlRigExecuteContext Completed; // 0x78
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
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

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
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

struct FBlockoutMaterialPreset : FTableRowBase {
	bool bUseGrid; // 0x8
	float GridSize; // 0xc
	float CheckerLuminance; // 0x10
	FLinearColor Color; // 0x14
	bool bUseTopColor; // 0x24
	FLinearColor TopColor; // 0x28
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
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

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FKawaiiPhysicsSettings {
	float Damping; // 0x0
	float WorldDampingLocation; // 0x4
	float WorldDampingRotation; // 0x8
	float Stiffness; // 0xc
	float Radius; // 0x10
	float LimitAngle; // 0x14
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FMOEquipmentActorPetEquipmentData {
	EEquipmentGroup EquipmentGroup; // 0x0
	EEquipmentQuality EquipmentQuality; // 0x1
	UMODataAssetEquipmentShared* SharedData; // 0x8
	UMODataAssetPetEquipment* BaseData; // 0x10
	EResourceGroup BaseResourceGroup; // 0x18
	int32_t BaseResourceIndex; // 0x1c
	EResourceGroup SecondaryResourceGroup; // 0x20
	int32_t SecondaryResourceIndex; // 0x24
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FRigUnit_LiveLinkGetParameterValueByName : FRigUnit_LiveLinkBase {
	FSubjectFrameHandle SubjectFrame; // 0x8
	FName ParameterName; // 0x20
	float Value; // 0x28
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
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

struct FPerPlatformInt {
	int32_t Default; // 0x0
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

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
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

struct FMOAnimNode_SequencePlayer : FAnimNode_SequencePlayer {
	EMOAnimNodeReport EReportAnimNodeType; // 0x80
};

struct FMONPCReply {
	int32_t EmoteID; // 0x0
	TArray<FText> vReplies; // 0x8
	TArray<FMODialogRestriction> vRestrictions; // 0x18
	bool bVisibleIfRestricted; // 0x28
	UMODataAssetNPCConversation* pNextConversation; // 0x30
	USoundCue* pConversationSound; // 0x38
	FString sDirectionActorName; // 0x40
	TArray<FString> vItemNamesToObtain; // 0x50
	TArray<int32_t> vItemAmountsToObtain; // 0x60
	TArray<FString> vSkillNamesToObtain; // 0x70
	TArray<int32_t> vSkillAmountsToObtain; // 0x80
	TArray<FString> vAttributeNamesToObtain; // 0x90
	TArray<int32_t> vAttributeAmountsToObtain; // 0xa0
	TArray<EDialogStandingNation> vStandingNamesToObtain; // 0xb0
	TArray<int32_t> vStandingAmountsToObtain; // 0xc0
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
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

struct FMOLevelStreamingInfo {
	ELevelStreamingGroup StreamingGroup; // 0x0
	FName Name; // 0x4
	FName PackageName; // 0xc
	ULevelStreaming* LevelStreaming; // 0x18
	ELevelStreamingDesiredState DesiredState; // 0x20
};

struct FMOTransformTweener {
	FVector vStartLocation; // 0xc
	FRotator rStartRotation; // 0x18
	FVector vEndLocation; // 0x24
	FRotator rEndRotation; // 0x30
	FVector vCurrentLocation; // 0x3c
	FRotator rCurrentRotation; // 0x48
	UCurveFloat* pTweenCurve; // 0x58
	float fStrengthMultiplier; // 0x60
	float fPlayRate; // 0x64
};

struct FKavajSoftBodyParameters {
	float SimulateAlpha; // 0x0
	float MaxDistance; // 0x4
	float DampingAmount; // 0x8
	float Mass; // 0xc
	float Spring_k; // 0x10
	float Spring_b; // 0x14
	float AngularSpring_k; // 0x18
	float AngularSpring_b; // 0x1c
	float ShapeSpring_k; // 0x20
	float ShapeSpring_b; // 0x24
	float PlayerVelocityMultiplier; // 0x28
	FVector Gravity; // 0x2c
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FMovieSceneTransformMask {
	uint32_t mask; // 0x0
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FRigUnit_SetScale : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	FVector Scale; // 0x78
	float Weight; // 0x84
	bool bPropagateToChildren; // 0x88
	FCachedRigElement CachedIndex; // 0x8c
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
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

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FRigUnit_SetControlBool : FRigUnitMutable {
	FName Control; // 0x68
	bool BoolValue; // 0x70
	FCachedRigElement CachedControlIndex; // 0x74
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

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase {
	FTransform InputTransform; // 0x10
	FRigUnit_AimItem_Target Primary; // 0x40
	FRigUnit_AimItem_Target Secondary; // 0x6c
	float Weight; // 0x98
	FTransform Result; // 0xa0
	FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
	FCachedRigElement PrimaryCachedSpace; // 0x110
	FCachedRigElement SecondaryCachedSpace; // 0x124
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
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

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
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

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FRigInfluenceMap {
	FName EventName; // 0x0
	TArray<FRigInfluenceEntry> Entries; // 0x8
	TMap<FRigElementKey, int32_t> KeyToIndex; // 0x18
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FMODialogRestriction {
	FString sName; // 0x0
	EComparitor EComparitor; // 0x10
	EMainRace eRaceRestriction; // 0x11
	EDialogStandingNation EDialogStandingNation; // 0x12
	EDialogRestrictionType eRestrictionType; // 0x13
	int32_t iValue; // 0x14
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FMOAnimNode_FaceDriver : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	ECachedFacePoseCurveSource CurveSource; // 0x20
	float Alpha; // 0x24
	int32_t LODThreshold; // 0x28
	UObject* FaceDriverSource; // 0x30
};

struct FRigUnit_AddBoneTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FTransform Transform; // 0x70
	float Weight; // 0xa0
	bool bPostMultiply; // 0xa4
	bool bPropagateToChildren; // 0xa5
	FCachedRigElement CachedBone; // 0xa8
};

struct FMONamedCurve3D {
	FText Title; // 0x0
	FName X; // 0x18
	FName Y; // 0x20
	FName Z; // 0x28
};

struct FMOAnimNode_EyesLookAt : FAnimNode_SkeletalControlBase {
	FBoneReference LeftEye; // 0xc8
	FBoneReference RightEye; // 0xd8
	FVector LookAtPointWorldSpace; // 0xe8
	float MaxAngle; // 0xf4
	float BlendDurationIn; // 0xf8
	float BlendDurationOut; // 0xfc
	float BlinkDuration; // 0x100
	bool bLookAtPoint; // 0x104
	float EyeLookAtAlpha; // 0x108
	int32_t RandomSeed; // 0x10c
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
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

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
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

struct FSessionServicePing {
	FString UserName; // 0x0
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

struct FRigUnit_TwoBoneIKFK : FRigUnitMutable {
	FName StartJoint; // 0x68
	FName EndJoint; // 0x70
	FVector PoleTarget; // 0x78
	float Spin; // 0x84
	FTransform EndEffector; // 0x90
	float IKBlend; // 0xc0
	FTransform StartJointFKTransform; // 0xd0
	FTransform MidJointFKTransform; // 0x100
	FTransform EndJointFKTransform; // 0x130
	float PreviousFKIKBlend; // 0x160
	FTransform StartJointIKTransform; // 0x170
	FTransform MidJointIKTransform; // 0x1a0
	FTransform EndJointIKTransform; // 0x1d0
	int32_t StartJointIndex; // 0x200
	int32_t MidJointIndex; // 0x204
	int32_t EndJointIndex; // 0x208
	float UpperLimbLength; // 0x20c
	float LowerLimbLength; // 0x210
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
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

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
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

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FRigUnit_SetMultiControlRotator : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x68
	float Weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FMOAnimNode_CachedPose : FAnimNode_Base {
	FPoseLink Source; // 0x10
	bool bShouldUpdatePose; // 0x20
	TArray<FTransform> CachedPose_BoneTransforms; // 0x28
	int32_t LastSourceHash; // 0x38
	int32_t DirtyHash; // 0x3c
};

struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase {
	FRigElementKey Parent; // 0x8
	bool bIncludeParent; // 0x14
	bool bRecursive; // 0x15
	FRigElementKeyCollection Children; // 0x18
	FCachedRigElement CachedParent; // 0x28
	FRigElementKeyCollection CachedChildren; // 0x40
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

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FMathRBFInterpolateVectorColor_Target {
	FVector Target; // 0x0
	FLinearColor Value; // 0xc
};

struct FRigUnit_BoneName : FRigUnit {
	FName Bone; // 0x8
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FMOAnimNode_HeadLookAt : FAnimNode_SkeletalControlBase {
	FBoneReference JointToRotate; // 0xc8
	FBoneReference LookFromJoint; // 0xd8
	FRotator HeadLookAtOffsetCS; // 0xe8
	FVector LookFromJointForwardVector; // 0xf4
	FVector LookFromJointUpVector; // 0x100
	FVector LookAtPointWorldSpace; // 0x10c
	float RotateMaxAngle; // 0x118
	float IgnoreTargetBeyondAngle; // 0x11c
	bool bLookAtPoint; // 0x120
	float LookAtAlpha; // 0x124
	float SoftFollowAlpha; // 0x128
	int32_t LODSmoothThreshold; // 0x12c
	FVector2D TurnSpeedMinMaxRange; // 0x130
	FVector2D TurnSpeedAngularDistanceRange; // 0x138
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	FVector Axis; // 0x8
	float Angle; // 0x14
	FQuat Result; // 0x20
};

struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase {
	EControlRigRotationOrder RotationOrder; // 0x8
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
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

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FMOSkeletalMeshLevelVariations {
	int32_t iMinLevel; // 0x0
	int32_t iMaxLevel; // 0x4
	TSoftClassPtr<UObject> cClass; // 0x8
	FText sDisplayName; // 0x30
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FRigUnit_SetControlTransform : FRigUnitMutable {
	FName Control; // 0x68
	float Weight; // 0x70
	FTransform Transform; // 0x80
	EBoneGetterSetterMode Space; // 0xb0
	FCachedRigElement CachedControlIndex; // 0xb4
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FRigUnit_NoiseFloat : FRigUnit_MathBase {
	float Value; // 0x8
	float Speed; // 0xc
	float Frequency; // 0x10
	float Minimum; // 0x14
	float Maximum; // 0x18
	float Result; // 0x1c
	float Time; // 0x20
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
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

struct FRainyWeatherStructure {
	float SunIntensity_7_793AB47741294F27C2FFB88D049C9993; // 0x0
	float SunBloomStrength_11_0611020E4A34886EBCE790AFE359E2CE; // 0x4
	float BloomScale_14_E44695854A4E26D8C69DEF8F2559E340; // 0x8
	float MoonIntensity_19_DAFCD06846693276389DB99813A160D7; // 0xc
	float MoonBloomStrength_22_310A34B943D97FB1CE1CC8A6E1617E5E; // 0x10
	float MoonBloomScale_23_9D71A7004A428B0C4CFA85BDF3FB76F7; // 0x14
	float SkyBrightness_26_3E78343B46C86625E5CDD38EEFC466E3; // 0x18
	float StarsBrightness_28_0752478D4A12384B8EADEBA4C3F21B73; // 0x1c
	float SkyLightIntensity_30_AA11A2064794BFF7F68961A027AE0F83; // 0x20
	FLinearColor SkyLightColor_34_C28F018945B48850D7C675A857D89D35; // 0x24
	float Coverage_37_B60860654F679AFD6568DBB4E7AF4C43; // 0x34
	float LightIntensity_53_B3E2B7D84C38FBC847C518B85EE9A3D2; // 0x38
	float ShadowSize_67_0AC7B06E4B6BA0666A58719B2C3E5516; // 0x3c
	float AmbientIntensity_66_BE5499A94D930F2DA3F724838ADFAA06; // 0x40
	float ExFogDensity_45_45E8A2D0420787FE4408CE82AA4F18F1; // 0x44
	FLinearColor FogInsColor_61_D842D2C94DD15C251A89D0B6FE3C7A2F; // 0x48
};

struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FEnumParameterNameAndCurve> Enums; // 0x80
	TArray<FIntegerParameterNameAndCurve> Integers; // 0x90
};

struct FOculusSplashDesc {
	FSoftObjectPath TexturePath; // 0x0
	FTransform TransformInMeters; // 0x20
	FVector2D QuadSizeInMeters; // 0x50
	FQuat DeltaRotation; // 0x60
	FVector2D TextureOffset; // 0x70
	FVector2D TextureScale; // 0x78
	bool bNoAlphaChannel; // 0x80
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FMOEquipmentActorWeaponData {
	EWeaponGroup WeaponGroup; // 0x0
	bool bIsTwoHanded; // 0x1
	EEquipmentQuality EquipmentQuality; // 0x2
	UMODataAssetEquipmentShared* SharedHandleData; // 0x8
	UMODataAssetEquipmentShared* SharedHeadData; // 0x10
	int32_t HandleIndex; // 0x18
	UMODataAssetHandle* HandleData; // 0x20
	EResourceGroup HandleResourceGroup; // 0x28
	int32_t HandleResourceIndex; // 0x2c
	int32_t HeadIndex; // 0x30
	UMODataAssetHead* HeadData; // 0x38
	EResourceGroup HeadResourceGroup; // 0x40
	int32_t HeadResourceIndex; // 0x44
};

struct FRigUnit_SetControlOffset : FRigUnitMutable {
	FName Control; // 0x68
	FTransform Offset; // 0x70
	EBoneGetterSetterMode Space; // 0xa0
	FCachedRigElement CachedControlIndex; // 0xa4
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FRigUnit_GetInitialBoneTransform : FRigUnit {
	FName Bone; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedBone; // 0x50
};

struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector SourceMinimum; // 0x14
	FVector SourceMaximum; // 0x20
	FVector TargetMinimum; // 0x2c
	FVector TargetMaximum; // 0x38
	bool bClamp; // 0x44
	FVector Result; // 0x48
};

struct FRigUnit_PointSimulation_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	float CollisionScale; // 0x8
	bool bDrawPointsAsSpheres; // 0xc
	FLinearColor Color; // 0x10
	FTransform WorldOffset; // 0x20
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
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

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FCRSimPointConstraint {
	ECRSimConstraintType Type; // 0x0
	int32_t SubjectA; // 0x4
	int32_t SubjectB; // 0x8
	FVector DataA; // 0xc
	FVector DataB; // 0x18
};

struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase {
	FRigElementKey Child; // 0x8
	bool bIncludeChild; // 0x14
	bool bReverse; // 0x15
	FRigElementKeyCollection Parents; // 0x18
	FCachedRigElement CachedChild; // 0x28
	FRigElementKeyCollection CachedParents; // 0x40
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase {
	float Value; // 0x8
	float Delta; // 0xc
	float PreviousValue; // 0x10
	float Cache; // 0x14
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable {
	TArray<FVector> Points; // 0x68
	FLinearColor Color; // 0x78
	float Thickness; // 0x88
	FRigElementKey Space; // 0x8c
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FCRSimLinearSpring {
	int32_t SubjectA; // 0x0
	int32_t SubjectB; // 0x4
	float Coefficient; // 0x8
	float Equilibrium; // 0xc
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FMOAvatarClientSideMovement {
	bool bIsMoving; // 0x0
	bool bIsRotating; // 0x1
	bool bIsFollowingPath; // 0x2
	float ZOffsetFromPath; // 0x4
	FMOAvatarPath Path; // 0x8
	FMOAvatarFloorInfo FloorInfo; // 0x180
	FVector ClientSideAvoidanceOffset; // 0x260
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
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

struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase {
	float Seconds; // 0x8
	float Frames; // 0xc
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Radius; // 0xb0
	float MinimumDegrees; // 0xb4
	float MaximumDegrees; // 0xb8
	float Thickness; // 0xbc
	int32_t Detail; // 0xc0
	FName Space; // 0xc4
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FMathRBFInterpolateVectorQuat_Target {
	FVector Target; // 0x0
	FQuat Value; // 0x10
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FControlRigSettingsPerPinBool {
	TMap<FString, bool> Values; // 0x0
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
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

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float T; // 0x20
	FVector Result; // 0x24
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
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

struct FLiveLinkRoleProjectSetting {
	ULiveLinkRole* Role; // 0x0
	ULiveLinkSubjectSettings* SettingClass; // 0x8
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x10
	TArray<ULiveLinkFramePreProcessor*> FramePreProcessors; // 0x18
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
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

struct FARGeoAnchorUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	float Longitude; // 0x50
	float Latitude; // 0x54
	float AltitudeMeters; // 0x58
	EARAltitudeSource AltitudeSource; // 0x5c
	FString AnchorName; // 0x60
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase {
	FRigElementKey Item; // 0x8
	bool bIncludeItem; // 0x14
	FRigElementKeyCollection Siblings; // 0x18
	FCachedRigElement CachedItem; // 0x28
	FRigElementKeyCollection CachedSiblings; // 0x40
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FRigUnit_SetMultiControlFloat : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlFloat_Entry> Entries; // 0x68
	float Weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FWaterCurveSettings {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
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

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Result; // 0x20
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FMOWeatherZone {
	FVector vPos; // 0x0
	float fSize; // 0xc
	UNiagaraComponent* pNiagaraComponent; // 0x10
	FMOWeatherZoneAsyncLocationUpdate AsyncLocationUpdate; // 0x18
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FPlanarLimitData : FCollisionLimitDataBase {
	FPlane Plane; // 0x50
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FTransform Transform; // 0x70
	FTransform Result; // 0xa0
	EBoneGetterSetterMode Space; // 0xd0
	bool bPropagateToChildren; // 0xd1
	FCachedRigElement CachedBone; // 0xd4
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FRigUnit_NameTruncate : FRigUnit_NameBase {
	FName Name; // 0x8
	int32_t Count; // 0x10
	bool FromEnd; // 0x14
	FName Remainder; // 0x18
	FName Chopped; // 0x20
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FControlRigDrawContainer {
	TArray<FControlRigDrawInstruction> Instructions; // 0x8
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

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	FVector Input; // 0x8
	FRotator Result; // 0x14
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase {
	FVector Start; // 0x8
	FVector Direction; // 0x14
	FVector PlanePoint; // 0x20
	FVector PlaneNormal; // 0x2c
	FVector Result; // 0x38
	float Distance; // 0x44
};

struct FRigUnit_ProjectTransformToNewParent : FRigUnit {
	FRigElementKey Child; // 0x8
	bool bChildInitial; // 0x14
	FRigElementKey OldParent; // 0x18
	bool bOldParentInitial; // 0x24
	FRigElementKey NewParent; // 0x28
	bool bNewParentInitial; // 0x34
	FTransform Transform; // 0x40
	FCachedRigElement CachedChild; // 0x70
	FCachedRigElement CachedOldParent; // 0x84
	FCachedRigElement CachedNewParent; // 0x98
};

struct FMathRBFInterpolateVectorVector_Target {
	FVector Target; // 0x0
	FVector Value; // 0xc
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	bool bPlaying; // 0x28
	float DefaultBlendTimeMultiplier; // 0x2c
	TArray<int32_t> NextSections; // 0xe8
	TArray<int32_t> PrevSections; // 0xf8
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
	float Position; // 0x128
	float PlayRate; // 0x12c
	FAlphaBlend Blend; // 0x130
	int32_t DisableRootMotionCount; // 0x18c
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FCRSimPoint {
	float Mass; // 0x0
	float Size; // 0x4
	float LinearDamping; // 0x8
	float InheritMotion; // 0xc
	FVector Position; // 0x10
	FVector LinearVelocity; // 0x1c
};

struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
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

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable {
	FName ChainRoot; // 0x68
	FVector Speed; // 0x70
	FRigUnit_ChainHarmonics_Reach Reach; // 0x7c
	FRigUnit_ChainHarmonics_Wave Wave; // 0xa4
	FRuntimeFloatCurve WaveCurve; // 0xe8
	FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170
	bool bDrawDebug; // 0x1ac
	FTransform DrawWorldOffset; // 0x1b0
	FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0
};

struct FMOCharacterBodyData {
	ESpecies ESpecies; // 0x0
	ESex ESex; // 0x1
	int32_t iAge; // 0x4
	int32_t iColor; // 0x8
	int32_t vAncestry1; // 0xc
	int32_t vAncestry2; // 0x10
	int32_t vAncestry3; // 0x14
	int32_t vAncestry4; // 0x18
	FString sParamString; // 0x20
};

struct FRigVMByteCode {
	TArray<char> ByteCode; // 0x0
	int32_t NumInstructions; // 0x10
	TArray<FRigVMByteCodeEntry> Entries; // 0x18
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
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

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FS_MO2_Sky {
	FLinearColor SkyHorizonColor_9_91C0C6E449438B5BD86F6EBB26C3F1F0; // 0x0
	FLinearColor SkyZenithColor_10_462A9FBD409F0093812469A071450C31; // 0x10
	float SkyHorizonFalloff_11_7F38067C47BD3F18EBBACEB528229C91; // 0x20
	float StarsBrightness_15_19566B9B497F8DD882975D8AA696A52B; // 0x24
	float StarsRotator_17_371E8D724F6FF88256B1939A750ACA7C; // 0x28
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float SourceMinimum; // 0xc
	float SourceMaximum; // 0x10
	float TargetMinimum; // 0x14
	float TargetMaximum; // 0x18
	bool bClamp; // 0x1c
	float Result; // 0x20
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FMOWeatherTemplate : FTableRowBase {
	UNiagaraSystem* pWeatherWallParticles; // 0x8
	UNiagaraSystem* pWeatherMainParticles; // 0x10
	USoundCue* pWeatherAmbientSound; // 0x18
	float fCloudCoverage; // 0x20
	float fCloudDensity; // 0x24
	float fSunBrightness; // 0x28
	float fFogViewRange; // 0x2c
	float fFogOpacity; // 0x30
	float fWindStrength; // 0x34
	FString sDescription; // 0x38
};

struct FMOCurveEncodingBase {
	float CurrentValue; // 0x8
	float RangeMin; // 0xc
	float RangeMax; // 0x10
	int32_t NumBitsForEncoding; // 0x14
	int32_t MinValueForEncoding; // 0x18
	int32_t MaxValueForEncoding; // 0x1c
};

struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase {
	FRigElementKey Parent; // 0x8
	bool bIncludeParent; // 0x14
	bool bRecursive; // 0x15
	ERigElementType TypeToSearch; // 0x16
	FRigElementKeyCollection Collection; // 0x18
	FRigElementKeyCollection CachedCollection; // 0x28
	int32_t CachedHierarchyHash; // 0x38
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FRigUnit_GetTransform : FRigUnit {
	FRigElementKey Item; // 0x8
	EBoneGetterSetterMode Space; // 0x14
	bool bInitial; // 0x15
	FTransform Transform; // 0x20
	FCachedRigElement CachedIndex; // 0x50
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

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
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

struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	TWeakObjectPtr<UControlRig> ControlRig; // 0x170
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FMOJournalNoteSaveData {
	FString sGroupName; // 0x0
	FString sNoteName; // 0x10
	FString sNoteText; // 0x20
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
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

struct FMathRBFInterpolateVectorXform_Target {
	FVector Target; // 0x0
	FTransform Value; // 0x10
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase {
	FVector Axis; // 0x8
	float Angle; // 0x14
	FQuat Result; // 0x20
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FFilterInfo {
	int32_t iClassID; // 0x0
	EBrokerPanel ePanel; // 0x4
	FString sItemNameFilter; // 0x8
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
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

struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50
	ESphericalLimitType LimitType; // 0x54
};

